#include "Aimbot.h"
#include "../SDK/structs.h"
#include "../SDK/il2cpp_api.h"
#include "../SDK/settings.h"
#include "../SDK/prefab_ids.h"
#include "../ui/ESP.h"
#include "EntityManager.h"
#include "AntiHack.h"
#include <algorithm>
#include <array>
#include <exception>
#include <numeric>
#include <span>
#include <stdint.h>
#include <vector>
#include <xutility>
#include <ranges>

using namespace SettingsData;

namespace HitScanner
{
    Vector3 RotatePointAroundPivot(Vector3 point, Vector3 pivot, Vector3 angles)
    {
        return CQuaternion::Euler(angles) * (point - pivot) + pivot;
    }

    void PointsOnSphere(std::vector<Vector3>& pointsOut, int n = 333)
    {
        float inc = M_PI * (3 - sqrtf(5));
        float off = 2.0f / n;
        float x   = 0;
        float y   = 0;
        float z   = 0;
        float r   = 0;
        float phi = 0;

        pointsOut.reserve(n);

        for (int k = 0; k < n; k++)
        {
            y   = k * off - 1 + (off / 2);
            r   = sqrtf(1 - y * y);
            phi = k * inc;
            x   = cos(phi) * r;
            z   = sin(phi) * r;

            auto vec = Vector3(x, y, z);
            pointsOut.emplace_back(vec);
        }
    }

    void GenerateNormalizedLOSTraceRays(std::vector<TraceRay>& outVec, float maxDistance, float heightLimit,
                                        float density, float angleLimit = 120, float sideAngleLimit = 22.f,
                                        float rayDivider = 16.f)
    {
        if (currentSpherePoints.empty())
        {
            PointsOnSphere(currentSpherePoints, density);
        }

        outVec.clear();
        outVec.reserve(1000);

        TraceRay tr{};

        for (auto rayStart : currentSpherePoints)
        {
            auto ray     = rayStart;
            tr.direction = ray;

            auto angle = Vector3::Angle(ray, vec3Up);

            if (angle > angleLimit)
                continue;

            auto frontAngle   = Vector3::Angle(ray, vec3Forward);
            auto backAngle    = Vector3::Angle(ray, vec3Back);
            auto leftAngle    = Vector3::Angle(ray, vec3Left);
            auto leftUpAngle  = Vector3::Angle(ray, (vec3Left + vec3Up));
            auto rightAngle   = Vector3::Angle(ray, vec3Right);
            auto rightUpAngle = Vector3::Angle(ray, (vec3Right + vec3Up));

            auto priorityAngle =
                std::min<float>({leftAngle, leftUpAngle, rightAngle, rightUpAngle, frontAngle, backAngle, angle});

            if (priorityAngle > sideAngleLimit)
                continue;

            tr.priority = priorityAngle;

            Vector3 vecCurr = ray * maxDistance;
            vecCurr.y       = std::clamp(vecCurr.y, 0.f, heightLimit);

            auto rayDivider = tr.points.size();
            auto stepVec    = vecCurr / (float)rayDivider;

            Vector3 vec{};

            for (int i = 0; i < rayDivider; i++)
            {
                vec += stepVec;

                if (vec.y > heightLimit)
                {
                    break;
                }

                tr.points[i] = vec;
            }

            outVec.emplace_back(tr);
        }
        std::ranges::sort(outVec, {}, &TraceRay::priority);
    }

} // namespace HitScanner

namespace Aimbot
{
#define MinimumUserAddress (uint64_t)0xffffff
#define MaximumUserAddress (uint64_t)0x00007FFFFFFFFFFF

    template <typename T> inline bool IsAddressValid(T address)
    {
        return ((uint64_t)(address) >= (uint64_t)(MinimumUserAddress) &&
                (uint64_t)(address) <= (uint64_t)(MaximumUserAddress));
    }

    float currentVelocityScalarModifier = 0.f; // 1 in scalar => no change

    CCamera* camera = nullptr;
    // CBasePlayer* localPlayer = nullptr;

    // float drag;
    // float gravityModifier;
    // float projectileVelocity;
    // float projectileVelocityScale = 1.f;
    // bool  projectileHasComponents = false;
    // float projectileInitialDistance;

    static bool GetBestTarget(CBasePlayer* localPlayer, TargetInfo& target, bool onlyHotbarScan = false,
                              bool ignoreLOS = false)
    {
        using namespace EntityManager;

        int           bestDistance = INT_MAX;
        const Player* bestPlayer   = nullptr;

        bool overrideRequested = false;

        for (const auto& p : DB::players)
        {
            if (p.entity->m_CachedPtr == 0 || p.entity->_IsDestroyed_k__BackingField == true)
                continue;

            if (onlyHotbarScan)
            {
                if (p.entity->_health <= _flt(0.f) || (LifeState)p.entity->lifestate == LifeState::Dead)
                    continue;
            }
            else
            {
                bool targetSleeping = settings->ragebot.general.targeting.Sleepers;
                bool targetWounded  = settings->ragebot.general.targeting.Wounded;

                if ((p.entity->IsSleeping() && targetSleeping == false) ||
                    (p.entity->IsWounded() && targetWounded == false) || p.entity->InSafeZone() ||
                    p.entity->_health <= _flt(0.f) || (LifeState)p.entity->lifestate == LifeState::Dead)
                    continue;
            }

            Vector3 aimHitBoxPos{};

            PlayerBones bone{};

            if (p.entity->playerModel->fields._IsNpc_k__BackingField)
            {
                bone = settings->ragebot.general.targeting.NPCHitbox;
            }
            else
            {
                bone = settings->ragebot.general.targeting.PlayerHitbox;
            }

            aimHitBoxPos = ((CModel*)p.entity->model)->GetBonePosition(bone);

            // if (bone == PlayerBones::head)
            // {
            //     aimHitBoxPos = ((CPlayerEyes*)p.entity->eyes)->GetPosition();
            // }
            // else
            // {
            //     aimHitBoxPos = ((CModel*)p.entity->model)->GetBonePosition(bone);
            // }

            // if (p.entity->playerModel->fields._IsNpc_k__BackingField)
            //     aimHitBoxPos =
            //         ((CModel*)p.entity->model)->GetBonePosition(settings->ragebot.general.targeting.NPCHitbox);
            // else
            //     aimHitBoxPos =
            //         ((CModel*)p.entity->model)->GetBonePosition(settings->ragebot.general.targeting.PlayerHitbox);

            if (onlyHotbarScan == false)
            {
                if (settings->ragebot.general.targeting.VisCheck && ignoreLOS == false)
                {
                    if (!CGamePhysics::LineOfSight(((CPlayerEyes*)localPlayer->eyes)->GetPosition(), aimHitBoxPos,
                                                   Layers::EntityLineOfSightCheck))
                        continue;
                }

                if (std::find(DB::priorityIDs.begin(), DB::priorityIDs.end(), p.entity->userID) !=
                    DB::priorityIDs.end())
                {
                    bestDistance      = 0.f;
                    bestPlayer        = &p;
                    overrideRequested = true;

                    target.entity = (Entity<CBaseCombatEntity>*)bestPlayer;
                    target.type   = TargetType::Player;

                    return true;
                }
            }

            auto dist = FOV.DistanceFromCenterEx(aimHitBoxPos);

            if (dist < bestDistance)
            {
                bestDistance = dist;
                bestPlayer   = &p;
            }
        }

        if (bestPlayer == nullptr || bestDistance == INT_MAX)
            return false;

        if (bestDistance > FOV.GetRadiusPx())
            return false;

        target.entity = (Entity<CBaseCombatEntity>*)bestPlayer;

        Vector3 aimHitBoxPos{};

        PlayerBones bone{};

        if (bestPlayer->entity->playerModel->fields._IsNpc_k__BackingField)
        {
            bone = settings->ragebot.general.targeting.NPCHitbox;
        }
        else
        {
            bone = settings->ragebot.general.targeting.PlayerHitbox;
        }

        // if (bone == PlayerBones::head)
        // {
        //     aimHitBoxPos = ((CPlayerEyes*)bestPlayer->entity->eyes)->GetPosition();
        // }
        // else
        // {
        //     aimHitBoxPos = ((CModel*)bestPlayer->entity->model)->GetBonePosition(bone);
        // }

        aimHitBoxPos = ((CModel*)bestPlayer->entity->model)->GetBonePosition(bone);

        // Vector3 aimHitBoxPos{};
        // if (bestPlayer->entity->playerModel->fields._IsNpc_k__BackingField)
        //     aimHitBoxPos =
        //         ((CModel*)bestPlayer->entity->model)->GetBonePosition(settings->ragebot.general.targeting.NPCHitbox);
        // else
        //     aimHitBoxPos =
        //         ((CModel*)bestPlayer->entity->model)->GetBonePosition(settings->ragebot.general.targeting.PlayerHitbox);

        if (onlyHotbarScan)
        {
            target.type = TargetType::HotBar;
        }
        else
        {
            target.type = TargetType::Player;
        }

        target.TargetPos = aimHitBoxPos;
        return true;
    }

    bool BulletPredictionNoVel(const Vector3& shootPos, const Vector3& targetAimPos, Vector3& aimAtPos,
                               float& timeToTravel, const AmmoBackupData& currentlyManagedAmmo,
                               const WeaponBackupData& currentlyManagedWeapon)
    {
        Vector3 startPos = shootPos;

        if (currentlyManagedAmmoID == 0 || currentlyManagedWeaponID == 0)
            return false;

        auto vel = currentlyManagedAmmo.ProjectileVelocity;
        vel *= currentVelocityScalarModifier;

        float speed      = vel * currentlyManagedWeapon.wep->GetProjectileVelocityScale(false);
        float gravityMod = currentlyManagedAmmo.GravityModifier;
        float drag       = currentlyManagedAmmo.Drag;

        const float radius   = _flt(0.05f);
        const float diameter = radius * _flt(2.f);
        const float stepSize = _flt(0.03125f);

        int currentIter = 0;

        Vector3 targetPos         = targetAimPos;
        Vector3 aimPos            = targetPos;
        Vector3 closestAimPos     = targetPos;
        float   closestAimPosDist = FLT_MAX;
        float   closestTravelTime = -_flt(1.f);

        while (currentIter++ < 35)
        {
            Vector3 startDir = (aimPos - startPos).Normalized();
            Vector3 startVel = startDir * speed;

            Vector3 currentVel  = startVel;
            Vector3 currentPos  = startPos;
            Vector3 prevPos     = currentPos;
            Vector3 prevPrevPos = prevPos;
            float   prevDist    = FLT_MAX;

            bool reached = false;

            for (float currentTime = _flt(0.f); currentTime < _flt(8.f); currentTime += stepSize)
            {
                currentPos += currentVel * stepSize;
                currentVel.y -= _flt(9.81f) * gravityMod * stepSize;
                currentVel -= currentVel * drag * stepSize;

                float dist = targetPos.distance(currentPos);

                // getting further away
                if (dist > prevDist)
                {
                    Vector3 lineClosestPoint = Line{prevPrevPos, prevPos}.ClosestPoint(targetPos);
                    currentPos               = lineClosestPoint;

                    float lineTargetDist = lineClosestPoint.distance(targetPos);

                    if (lineTargetDist < closestAimPosDist)
                    {
                        float currentTimeTmp = currentTime;

                        if (prevPos.distance(targetPos) > radius)
                        {
                            bool negate = startPos.distancesqr(prevPos) < startPos.distancesqr(targetPos);

                            float distToHit     = prevPos.distance(lineClosestPoint);
                            float thisTickSpeed = currentVel.length() * stepSize;

                            float finalDistTravel = (distToHit / thisTickSpeed) * stepSize;
                            if (negate)
                                finalDistTravel = -finalDistTravel;

                            currentTimeTmp -= finalDistTravel;
                        }

                        closestAimPos     = aimPos;
                        closestAimPosDist = lineTargetDist;
                        closestTravelTime = currentTimeTmp;
                    }
                    else
                        reached = true;

                    if (lineTargetDist <= radius)
                        reached = true;

                    break;
                }

                prevDist    = dist;
                prevPrevPos = prevPos;
                prevPos     = currentPos;
            }

            if (reached)
                break;

            // if (!higher && currentPos.y > targetPos.y)
            //     break;

            float addDist = (targetPos.y - currentPos.y) * _flt(0.65f);
            if (addDist < diameter)
                addDist = diameter;

            aimPos.y += addDist;
        }

        if (closestTravelTime > _flt(0.f) && closestAimPosDist < _flt(3.f))
        {
            aimAtPos     = closestAimPos;
            timeToTravel = closestTravelTime;

            return true;
        }

        return false;
    }

    bool Prediction(const Vector3& shootPos, const Vector3& targetPos, const Vector3& targetVel, Vector3& aimPos,
                    float& timeToTravel, const AmmoBackupData& currentlyManagedAmmo,
                    const WeaponBackupData& currentlyManagedWeapon)
    {
        bool pred = BulletPredictionNoVel(shootPos, targetPos, aimPos, timeToTravel, currentlyManagedAmmo,
                                          currentlyManagedWeapon);
        if (!pred || targetVel.empty())
            return pred;

        Vector3 aimPos2{};
        float   timeToTravel2{};
        BulletPredictionNoVel(shootPos, targetPos + targetVel * timeToTravel, aimPos2, timeToTravel2,
                              currentlyManagedAmmo, currentlyManagedWeapon);

        float vel   = currentlyManagedAmmo.ProjectileVelocity * currentVelocityScalarModifier;
        float speed = vel * currentlyManagedWeapon.wep->GetProjectileVelocityScale(false);

        // aids
        if (speed == _flt(240.f) && shootPos.distance(targetPos) > _flt(260.f))
        {
            timeToTravel2 -= _flt(0.07f);
        }
        else if (speed == _flt(1125.f) && shootPos.distance(targetPos) > _flt(280.f))
        {
            timeToTravel2 -= _flt(0.065f);
        }
        else if (speed == _flt(375.f) && shootPos.distance(targetPos) > _flt(235.f))
        {
            timeToTravel2 -= _flt(0.08f);
        }
        else if (speed == _flt(656.25f) && shootPos.distance(targetPos) > _flt(260.f))
        {
            timeToTravel2 -= _flt(0.085f);
        }
        else if (timeToTravel2 >= _flt(0.135f))
        {
            timeToTravel2 -= _flt(0.095f);
        }
        else
            timeToTravel2 *= _flt(0.35f);

        aimPos += targetVel * timeToTravel2;

        return pred;
    }

    bool IsPrevTargetValid(bool ignoreLOS = false)
    {
        using namespace EntityManager;

        do
        {
            if (CurrentTarget.type != TargetType::Invalid && CurrentTarget.type != TargetType::HotBar &&
                IsAddressValid(CurrentTarget.entity->entity) && CurrentTarget.entity->entity->m_CachedPtr != 0)
            {
                Vector3     aimHitBoxPos{};
                const auto& p = (Entity<CBasePlayer>*)CurrentTarget.entity;

                if (IsAddressValid(p->entity->playerModel) == false)
                    break;

                bool targetSleeping = settings->ragebot.general.targeting.Sleepers;
                bool targetWounded  = settings->ragebot.general.targeting.Wounded;

                if ((p->entity->IsSleeping() && targetSleeping == false) ||
                    (p->entity->IsWounded() && targetWounded == false) || p->entity->InSafeZone() ||
                    p->entity->_health <= _flt(0.f) || (LifeState)p->entity->lifestate == LifeState::Dead)
                    break;

                if (CurrentTarget.type == TargetType::Player)
                {
                    PlayerBones bone{};

                    if (p->entity->playerModel->fields._IsNpc_k__BackingField)
                    {
                        bone = settings->ragebot.general.targeting.NPCHitbox;
                    }
                    else
                    {
                        bone = settings->ragebot.general.targeting.PlayerHitbox;
                    }

                    // if (bone == PlayerBones::head)
                    // {
                    //     aimHitBoxPos = ((CPlayerEyes*)p->entity->eyes)->GetPosition();
                    // }
                    // else
                    // {
                    //     aimHitBoxPos = ((CModel*)p->entity->model)->GetBonePosition(bone);
                    // }

                    aimHitBoxPos = ((CModel*)p->entity->model)->GetBonePosition(bone);

                    if (settings->ragebot.general.targeting.VisCheck || ignoreLOS == false)
                    {
                        if (!CGamePhysics::LineOfSight(camera->GetPosition(), aimHitBoxPos,
                                                       Layers::EntityLineOfSightCheck))
                        {
                            break;
                        }
                    }
                }

                if (settings->ragebot.general.targeting.TargetLock == false)
                {
                    auto dist = FOV.DistanceFromCenterEx(aimHitBoxPos);

                    if (dist < FOV.GetRadiusPx())
                    {
                        CurrentTarget.TargetPos = aimHitBoxPos;

                        return true;
                    }
                }
                else
                {
                    CurrentTarget.TargetPos = aimHitBoxPos;
                    return true;
                }
            }

        } while (false);

        CurrentTarget = {}; // this is needed cuz it can be invalid next time
        return false;
    }

    Vector3 PredictPosition(CBasePlayer* localPlayer, TargetInfo& targetInfo, Vector3 customPos,
                            const AmmoBackupData& currentlyManagedAmmo, const WeaponBackupData& currentlyManagedWeapon)
    {
        if (settings->ragebot.general.aimbot.Prediction == false)
        {
            return targetInfo.TargetPos;
        }

        // auto baseProjectile = localPlayer->GetHeldEntity()->As<CBaseProjectile>();

        Vector3 localPos       = customPos.empty() ? ((CPlayerEyes*)localPlayer->eyes)->GetPosition() : customPos;
        Vector3 targetVelocity = Vector3{0.f, 0.f, 0.f};

        int maxRecords = 25;

        switch (targetInfo.type)
        {
        case TargetType::Player:
        {
            CBasePlayer* targetEntity = (CBasePlayer*)(targetInfo.entity->entity);
            targetVelocity            = targetInfo.entity->entity->GetWorldVelocity();

            auto mount = (CBaseMountable*)targetEntity->mounted.fields.ent_cached;

            if (mount == nullptr || (mount->m_CachedPtr == 0) || mount->_IsDestroyed_k__BackingField ||
                mount->_JustCreated_k__BackingField)
                maxRecords = 20;
            else
            {
                CModelState* modelState = (CModelState*)targetEntity->modelState;
                if (modelState && !modelState->HasFlag(ModelStateFlags::OnGround))
                    maxRecords = 30;
            }

            Vector3 currVelocity = targetEntity->GetWorldVelocity();

            if (currVelocity.empty())
            {
                targetInfo.averageVelocity = {};
                targetInfo.velocities.clear();
            }
            else
            {
                targetInfo.velocities.push_back(currVelocity);
                targetInfo.averageVelocity =
                    std::accumulate(targetInfo.velocities.begin(), targetInfo.velocities.end(), Vector3{});

                targetInfo.averageVelocity /= targetInfo.velocities.size();
            }
        }
        break;
        default:
            return {};
        }

        float bulletTime{};
        if (!Prediction(localPos, targetInfo.TargetPos, targetInfo.averageVelocity, PredictedPosition, bulletTime,
                        currentlyManagedAmmo, currentlyManagedWeapon))
            return {};

        return PredictedPosition;
    }

    void WeaponModifiers() {}

    bool normalize(float& pitch, float& yaw)
    {
        // nancheck
        if (pitch == pitch && pitch < FLT_MAX && pitch > -FLT_MAX)
        {
            while (pitch > _flt(89.0f))
                pitch -= _flt(180.f);

            while (pitch < negate_flt(_flt(89.0f)))
                pitch += _flt(180.f);
        }
        else
            pitch = _flt(0.f);

        // nancheck
        if (yaw == yaw && yaw < FLT_MAX && yaw > -FLT_MAX)
        {
            while (yaw > _flt(180.f))
                yaw -= _flt(360.f);

            while (yaw < negate_flt(_flt(180.f)))
                yaw += _flt(360.f);
        }
        else
            yaw = _flt(0.f);

        return true;
    }

    void smooth_angle(Vector3& angles, Vector3& localViewAngles)
    {
        if (settings->ragebot.general.aimbot.Smooth <= 0)
            return;

        Vector3 delta{angles.x - localViewAngles.x, angles.y - localViewAngles.y, angles.z - localViewAngles.z};
        normalize(delta.x, delta.y);

        Vector3 toChange;

        if (settings->ragebot.general.aimbot.SmoothMode == AimbotSmooth::SlowEnd)
        {
            float smooth = std::powf(settings->ragebot.general.aimbot.Smooth / _flt(10.f), _flt(0.4f));
            smooth       = std::min(_flt(0.99f), smooth);

            toChange = delta - delta * smooth;
        }
        else
        {
            float smoothing_value = _flt(5.5f) * (settings->ragebot.general.aimbot.Smooth / _flt(100.f));
            float smooth          = std::powf(_flt(0.81f) + smoothing_value, _flt(0.4f));

            smooth = std::min(_flt(0.99f), smooth);

            float coeff = (_flt(1.0f) - smooth) / delta.length() * _flt(4.f);

            // fast end
            // coeff = crt_math::powf_(coeff, 2.f) * 80.f /
            // Settings::AIM::m_flSmooth;

            coeff    = std::min(_flt(1.f), coeff);
            toChange = delta * coeff;
        }

        angles = localViewAngles + toChange;
    }

    void HandleRecoilData(CBaseProjectile* wep, const WeaponBackupData& currentlyManagedWeapon)
    {
        RecoilProperties_o* recoilProp{};

        if (wep->prefabID == prefabs::weapon::eoka)
        {
            recoilProp = ((CFlintStrikeWeapon*)wep)->strikeRecoil;
        }
        else if (wep->recoil->fields.newRecoilOverride != nullptr)
        {
            recoilProp = wep->recoil->fields.newRecoilOverride;
        }
        else
        {
            recoilProp = wep->recoil;
        }

        if (settings->ragebot.general.weapon.NoRecoil)
        {
            auto& recoil = recoilProp->fields;

            recoil.recoilPitchMax           = 0.f;
            recoil.recoilPitchMin           = 0.f;
            recoil.recoilYawMax             = 0.f;
            recoil.recoilYawMin             = 0.f;
            recoil.maxRecoilRadius          = 0.f;
            recoil.useCurves                = false;
            recoil.overrideAimconeWithCurve = false;
        }
        else
        {
            auto& recoil = recoilProp->fields;

            recoil.recoilPitchMax           = currentlyManagedWeapon.RecoilPitchMax;
            recoil.recoilPitchMin           = currentlyManagedWeapon.RecoilPitchMin;
            recoil.recoilYawMax             = currentlyManagedWeapon.RecoilYawMax;
            recoil.maxRecoilRadius          = currentlyManagedWeapon.MaxRecoilRadius;
            recoil.useCurves                = currentlyManagedWeapon.UseCurves;
            recoil.overrideAimconeWithCurve = currentlyManagedWeapon.OverrideAimconeWithCurve;
        }
    }

    bool LauncherPrediction(CBasePlayer* localPlayer, const AmmoBackupData& currentlyManagedAmmo,
                            const WeaponBackupData& currentlyManagedWeapon)
    {
        // CBaseProjectile* launcher =
        // (CBaseProjectile*)Globals::Local->GetHeldEntity(); if (!launcher)
        //     return false;

        // if (launcher->GetItem()->m_pItemDefinition->m_dItemID != 442886268)
        //     return false;

        CPlayerEyes* eyes = (CPlayerEyes*)localPlayer->eyes;

        float gravityModifier = currentlyManagedAmmo.GravityModifier;
        float speed =
            currentlyManagedAmmo.ProjectileVelocity * currentlyManagedWeapon.wep->GetProjectileVelocityScale(false);

        if (gravityModifier == _flt(0.f) || speed == _flt(0.f))
            return false;

        // auto muzzlePoint = (CTransform*)currentlyManagedWeapon->wep->MuzzlePoint;

        Vector3         startPos = eyes->GetPosition();
        Vector3         forward  = eyes->BodyForward().Normalized();
        constexpr float stepSize = 0.03125f;

        float       num2 = _flt(1.f);
        CRaycastHit hitInfo;
        if (CGamePhysics::Raycast(startPos, forward, &hitInfo, num2,
                                  /*1236478737*/ 1237003025))
            num2 = hitInfo.m_Distance - _flt(0.1f);

        Vector3 currentPos       = startPos + forward * num2;
        Vector3 currentVel       = forward * speed;
        float   traveledDistance = num2;

        for (float currentTime = _flt(0.f); currentTime < _flt(10.f); currentTime += stepSize)
        {
            float speedStep = currentVel.length() * stepSize;
            traveledDistance += speedStep;

            if (CGamePhysics::Raycast(currentPos, currentVel.Normalized(), &hitInfo, speedStep, 1236478737))
            {
                traveledDistance += hitInfo.m_Distance;

                launcherInfo.valid      = true;
                launcherInfo.hitPoint   = *(Vector3*)&hitInfo.m_Point;
                launcherInfo.rotation   = Vector4::QuaternionLookRotation(*(Vector3*)&hitInfo.m_Normal,
                                                                          Vector3(_flt(0.f), _flt(1.f), _flt(0.f)));
                launcherInfo.travelDist = traveledDistance;
                launcherInfo.travelTime = currentTime;

                return true;
            }

            currentVel.y -= _flt(9.81f) * gravityModifier * stepSize;
            currentPos += currentVel * stepSize;
        }

        return false;
    }

    void InstantEoka(CBaseProjectile* baseProjectile)
    {
        if (settings->ragebot.general.weapon.InstantEoka == false)
            return;

        if (baseProjectile->GetItem()->info->fields.itemid == -75944661)
        {

            auto wep                       = (FlintStrikeWeapon_o*)baseProjectile;
            wep->fields.successFraction    = 1.f;
            wep->fields._didSparkThisFrame = true;
        }
    }

    void InstantCompound(CBaseProjectile* baseProjectile)
    {
        if (settings->ragebot.general.weapon.InstantEoka == false)
            return;

        if (baseProjectile->GetItem()->info->fields.itemid == 884424049)
        {
            auto wep = (CompoundBowWeapon_o*)baseProjectile;

            wep->fields.stringHoldDurationMax = 0.f;
        }
    }

    [[gnu::used]] static void InitializeGameObjectRef(CGameObjectRef* obj)
    {
        obj->GetEntity();
    }

    constexpr LayerMask remove = ~(LayerMask::Default | LayerMask::Water | LayerMask::Deployed | LayerMask::Ragdoll |
                                   LayerMask::Physics_Projectile | LayerMask::Transparent | LayerMask::Clutter |
                                   LayerMask::Vehicle_Large | LayerMask::Tree);

    void Desync(CBasePlayer* localPlayer)
    {
        do
        {
            auto wantsToShoot = settings->ragebot.general.desync.shoot.Active();

            if (CurrentTarget.type == TargetType::Invalid)
                break;

            if (currentlyManagedAmmoID == 0 || currentlyManagedWeaponID == 0)
                break;

            const auto& currentlyManagedWeapon = weaponBackupData[currentlyManagedWeaponID];
            const auto& currentlyManagedAmmo   = ammoBackupData[currentlyManagedAmmoID];

            // TODO: Do something about teleport
            if (wantsToShoot || settings->misc.other.TeleportForward.Active())
            {
                if (localPlayer->input->fields.state->fields.current == nullptr)
                    return;

                auto lastEyePos = *(Vector3*)&localPlayer->lastSentTick->fields.eyePos;
                // auto lastLocalPos = *(Vector3*)&localPlayer->lastSentTick->fields.position;
                auto rotation = *(CQuaternion*)&localPlayer->eyes->fields._bodyRotation_k__BackingField;

                auto eulerAngles = rotation.GetEulerAngles();

                auto finalRot = CQuaternion::Euler({0.f, eulerAngles.y, 0.f});

                static Vector3 prevLastPos = {};

                if (wantsToShoot || localPlayer->clientTickInterval == 0.05f || lastEyePos != prevLastPos)
                {
                    // we just start desync, set shit up
                    // setup TP points if needed
                    if (settings->ragebot.general.projectile.BulletTP)
                    {
                        HitScanner::currentTPTraceRays = HitScanner::bulletTPNormalizedTraceRays;
                    }

                    prevLastPos = lastEyePos;

                    localPlayer->input->fields.state->fields.previous->fields.buttons =
                        localPlayer->input->fields.state->fields.current->fields.buttons;

                    HitScanner::currentTraceRays = HitScanner::desyncNormalizedTraceRays;

                    auto maxDistance = AntiHack::MaximumDesyncDistance(localPlayer);
                    auto maxAltitude = AntiHack::MaximumDesyncAltitude(localPlayer);

                    // optimizing shit here

                    DesyncPredictedPosition = {};
                    DesyncOffset            = {};

                    for (auto& tray : HitScanner::currentTraceRays)
                    {
                        CRaycastHit raycastHit{};
                        float       currentMaxDistance = maxDistance;

                        auto newPos = finalRot * tray.points[1] + lastEyePos;

                        CRay ray(lastEyePos, (newPos - lastEyePos).unity_Normalize());

                        // auto curP = finalRot * tray.points[tray.points.size() - 1] + lastEyePos;

                        // AntiHack::IsNoClipping(localPlayer, lastEyePos, curP, &currentMaxDistance);

                        if (CGamePhysics::Raycast(ray, &raycastHit, maxDistance,
                                                  (uint32_t)Layers::EntityLineOfSightCheck,
                                                  QueryTriggerInteraction::Ignore))
                        {
                            currentMaxDistance = std::abs(raycastHit.m_Distance);
                        }

                        tray.maxDistance = currentMaxDistance;

                        for (auto& point : tray.points)
                        {
                            if (point.empty())
                                continue;

                            point = finalRot * point + lastEyePos;

                            auto pAlt = std::abs(point.y - lastEyePos.y);

                            if (pAlt > maxAltitude)
                            {
                                point = {};
                                continue;
                            }

                            auto pDist = std::abs(point.distance(lastEyePos));

                            if (pDist > tray.maxDistance)
                            {
                                point = {};
                                continue;
                            }
                        }
                    }
                }

                localPlayer->clientTickInterval = 0.99f;

                auto desync = localPlayer->GetDesyncTimeClamped();

                if (desync < 0.001f)
                {
                    DesyncPredictedPosition = {};
                    DesyncOffset            = {};
                }

                auto currMaxDist = AntiHack::MaximumDesyncDistance(localPlayer, desync);
                auto currMaxAlt  = AntiHack::MaximumDesyncAltitude(localPlayer, desync);

                for (auto& tray : HitScanner::currentTraceRays)
                {
                    tray.currentMaxDistance = currMaxDist;
                    tray.currentMaxAltitude = currMaxAlt;
                }

                static Timer scanThrottle{};
                Vector3      CurrentDesyncPredictedPosition = {};
                if (scanThrottle.Expired(1.f / 30.f))
                {
                    // setup TP points if needed
                    // FIX: maybe throttle can broke something?
                    if (settings->ragebot.general.projectile.BulletTP)
                    {
                        auto currTarget  = (CBasePlayer*)CurrentTarget.entity->entity;
                        auto tp_eyePos   = ((CModel*)currTarget->model)->GetBonePosition(PlayerBones::eyeTranform);
                        auto tp_rotation = *(CQuaternion*)&currTarget->eyes->fields._bodyRotation_k__BackingField;

                        auto tp_eulerAngles = tp_rotation.GetEulerAngles();

                        auto tp_finalRot = CQuaternion::Euler({0.f, tp_eulerAngles.y, 0.f});

                        for (auto& tptray : HitScanner::currentTPTraceRays)
                        {
                            CRaycastHit raycastHit{};
                            float       currentMaxDistance = 2.f;
                            auto        newPos             = tp_finalRot * tptray.points[1] + tp_eyePos;

                            CRay ray(tp_eyePos, (newPos - tp_eyePos).unity_Normalize());

                            if (CGamePhysics::Raycast(ray, &raycastHit, 2.f, (uint32_t)Layers::EntityLineOfSightCheck,
                                                      QueryTriggerInteraction::Ignore))
                            {
                                currentMaxDistance = std::abs(raycastHit.m_Distance);
                            }

                            tptray.maxDistance = currentMaxDistance;

                            for (auto& point : tptray.points)
                            {
                                if (point.empty())
                                    continue;

                                point = finalRot * point + tp_eyePos;

                                // auto pAlt = std::abs(point.y - tp_eyePos.y);

                                auto pDist = std::abs(point.distance(tp_eyePos));

                                if (pDist > tptray.maxDistance)
                                {
                                    point = {};
                                    continue;
                                }
                            }
                        }
                    }

                    for (auto& tray : HitScanner::currentTraceRays)
                    {
                        // we want from farthest
                        std::ranges::reverse_view rv{tray.points};

                        for (const auto& point : rv)
                        {
                            if (point.empty())
                                continue;

                            auto pDist = std::abs(point.distance(lastEyePos));
                            auto pAlt  = std::abs(point.y - lastEyePos.y);

                            // if (pAlt > tray.currentMaxAltitude)
                            //     continue;

                            if (pDist > tray.currentMaxDistance)
                                continue;

                            if (AntiHack::ValidateEyePos(localPlayer, point))
                            {
                                // TODO: Add peircing support here
                                if (CGamePhysics::LineOfSight(point, CurrentTarget.TargetPos,
                                                              Layers::EntityLineOfSightCheck) == false)
                                {
                                    continue;
                                }

                                DesyncPredictedPosition = PredictPosition(localPlayer, CurrentTarget, point,
                                                                          currentlyManagedAmmo, currentlyManagedWeapon);

                                if (DesyncPredictedPosition.empty() == false)
                                {
                                    DesyncOffset = point;
                                    break;
                                }
                            }
                            else
                            {
                                continue;
                            }
                        }

                        if (DesyncPredictedPosition.empty() == false)
                        {
                            // DesyncPredictedPosition = CurrentDesyncPredictedPosition;
                            break;
                        }
                    }
                }

                if (DesyncPredictedPosition.empty() == false)
                {
                    currentlyManagedWeapon.wep->Shoot();
                }
            }
            else
            {
                break;
            }
            return;
        } while (false);

        localPlayer->clientTickInterval = 0.05f;
        DesyncPredictedPosition         = {};
    }

    void LateUpdate()
    {
        static auto main = (MainCamera_c*)il2cpp::InitClass(_("MainCamera"));
        camera           = (CCamera*)main->static_fields->mainCamera;

        PredictedPosition  = {};
        launcherInfo.valid = false;

        currentVelocityScalarModifier = 0.f; // reset this

        do
        {
            if (camera == nullptr || camera->m_CachedPtr == 0)
                break;

            FOV.Set(camera, &ESP::currentScreenSize, &settings->ragebot.general.aimbot.FOVRadius);

            auto localPlayer = CLocalPlayer::GetLocalPlayer();

            if (localPlayer == nullptr || localPlayer->m_CachedPtr == 0)
                break;

            if (localPlayer->HasFlag(PlayerFlags::Sleeping))
                break;

            if (localPlayer->inventory == nullptr || localPlayer->inventory->fields.m_CachedPtr == 0)
                break;

            auto holdTarget = settings->ragebot.general.aimbot.aim.Active() &&
                              settings->ragebot.general.targeting.TargetLock &&
                              IsPrevTargetValid(settings->ragebot.general.desync.shoot.Active());

            auto desyncActive = settings->ragebot.general.desync.shoot.Active();

            if (holdTarget == false)
            {
                if (GetBestTarget(localPlayer, CurrentTarget, false, desyncActive) == false)
                {
                    if (GetBestTarget(localPlayer, CurrentTarget, true, desyncActive) == false)
                    {
                        PredictedPosition = {};
                        CurrentTarget     = {};
                    }
                }
            }

            if (localPlayer->GetHeldEntity() == nullptr || localPlayer->GetHeldEntity()->m_CachedPtr == 0)
                break;

            if (localPlayer->GetHeldEntity()->IsBaseProjectile() == false)
                break;

            auto baseProjectile = (CBaseProjectile*)localPlayer->GetHeldEntity();

            InstantEoka(baseProjectile);
            InstantCompound(baseProjectile);

            auto isLauncher = HASH_CTIME("BaseLauncher") == HASH_RUNTIME(baseProjectile->klass->_1.name);

            // we need to get ammo too
            auto ammoType         = (CItemDefinition*)baseProjectile->primaryMagazine->fields.ammoType;
            auto ammoDefComponent = (CComponent*)ammoType;
            auto ammoGameobject   = ammoDefComponent->GetGameobject();

            static auto itemModProjectileType      = CType::FromClass(_("ItemModProjectile"));
            static auto itemModProjectileSpawnType = CType::FromClass(_("ItemModProjectileSpawn"));

            /*
                "itemid": 605467368,
                "shortname": "ammo.rifle.incendiary",
                "itemid": 14241751,
                "shortname": "arrow.fire",
                "itemid": -1036635990,
                "shortname": "ammo.shotgun.fire",
                "itemid": 51984655,
                "shortname": "ammo.pistol.fire",
                "itemid": -1321651331,
                "shortname": "ammo.rifle.explosive",
            */

            // Collect Ammo info
            if (currentlyManagedAmmoID != ammoType->itemid)
            {
                if (auto ss = ammoBackupData.find(ammoType->itemid); ss != ammoBackupData.end())
                {
                    auto& currentlyManagedAmmo = ss->second;
                    currentlyManagedAmmoID     = ammoType->itemid;

                    // we need to update the pointer of modprojectile
                    if (currentlyManagedAmmo.isSpawn)
                    {
                        auto mod = ammoGameobject->GetComponent<CItemModProjectileSpawn>(itemModProjectileSpawnType);
                        currentlyManagedAmmo.mod = (CItemModProjectile*)mod;
                    }
                    else
                    {
                        auto mod = ammoGameobject->GetComponent<CItemModProjectile>(itemModProjectileType);
                        currentlyManagedAmmo.mod = mod;
                    }
                }
                else
                {

                    static auto projType       = CType::FromClass(_("Projectile"));
                    static auto serverProjType = CType::FromClass(_("ServerProjectile"));

                    switch (ammoType->itemid)
                    {
                    // handling ItemModProjectileSpawn
                    case 605467368:
                    case 14241751:
                    case -1036635990:
                    case 51984655:
                    case -1321651331:
                    {
                        auto mod = ammoGameobject->GetComponent<CItemModProjectileSpawn>(itemModProjectileSpawnType);

                        AmmoBackupData data{};

                        data.mod                = (CItemModProjectile*)mod;
                        data.ProjectileSpread   = mod->projectileSpread;
                        data.ProjectileVelocity = mod->projectileVelocity;
                        data.SpreadAngle        = mod->spreadAngle;
                        data.SpreadVelocityMax  = mod->spreadVelocityMax;
                        data.SpreadVelocityMin  = mod->spreadVelocityMin;
                        data.VelocitySpread     = mod->projectileVelocitySpread;
                        data.isSpawn            = true;

                        // this will return null, however it will initialize cached
                        // object down bellow

                        InitializeGameObjectRef((CGameObjectRef*)mod->projectileObject);

                        auto projObject = (CGameObject*)mod->projectileObject->fields._cachedObject;

                        if (projObject == nullptr)
                            break;

                        if (auto proj = projObject->GetComponent<CServerProjectile>(serverProjType))
                        {
                            data.GravityModifier    = proj->gravityModifier;
                            data.ProjectileVelocity = proj->speed;
                            data.Drag               = proj->drag;
                        }
                        else if (auto proj = projObject->GetComponent<CProjectile>(projType))
                        {
                            data.GravityModifier           = proj->gravityModifier;
                            data.Drag                      = proj->drag;
                            data.projectileInitialDistance = proj->initialDistance;
                        }
                        else
                        {
                            break; //?? should not happen, just quit here in case
                                   // FP forgot something
                        }

                        ammoBackupData[ammoType->itemid] = data;

                        // currentlyManagedAmmo   = &ammoBackupData[ammoType->itemid];
                        currentlyManagedAmmoID = ammoType->itemid;

                        break;
                    }
                    default:
                    {
                        auto mod = ammoGameobject->GetComponent<CItemModProjectile>(itemModProjectileType);

                        AmmoBackupData data{};

                        data.mod                = (CItemModProjectile*)mod;
                        data.ProjectileSpread   = mod->projectileSpread;
                        data.VelocitySpread     = mod->projectileVelocitySpread;
                        data.ProjectileVelocity = mod->projectileVelocity;

                        // this will return null, however it will initialize cached
                        // object down bellow
                        InitializeGameObjectRef((CGameObjectRef*)mod->projectileObject);
                        auto projObject = (CGameObject*)mod->projectileObject->fields._cachedObject;

                        if (projObject == nullptr)
                            break;

                        if (auto proj = projObject->GetComponent<CServerProjectile>(serverProjType))
                        {
                            data.GravityModifier    = proj->gravityModifier;
                            data.ProjectileVelocity = proj->speed;
                            data.Drag               = proj->drag;
                        }
                        else if (auto proj = projObject->GetComponent<CProjectile>(projType))
                        {
                            data.GravityModifier           = proj->gravityModifier;
                            data.Drag                      = proj->drag;
                            data.projectileInitialDistance = proj->initialDistance;
                        }
                        else
                        {
                            break; //?? should not happen, just quit here in case
                                   // FP forgot something
                        }

                        ammoBackupData[ammoType->itemid] = data;

                        // currentlyManagedAmmo   = &ammoBackupData[ammoType->itemid];
                        currentlyManagedAmmoID = ammoType->itemid;

                        break;
                    }
                    }
                }
            }

            const auto& currentlyManagedAmmo = ammoBackupData[currentlyManagedAmmoID];

            if (currentlyManagedAmmo.isSpawn)
            {
                auto mod = (CItemModProjectileSpawn*)currentlyManagedAmmo.mod;
                if (settings->ragebot.general.weapon.NoSpread)
                {
                    mod->projectileSpread         = 0;
                    mod->projectileVelocitySpread = 0;
                    mod->spreadVelocityMax        = 0;
                    mod->spreadVelocityMin        = 0;
                    mod->spreadAngle              = 0;
                }
                else
                {
                    mod->projectileSpread         = currentlyManagedAmmo.ProjectileSpread;
                    mod->projectileVelocitySpread = currentlyManagedAmmo.VelocitySpread;
                    mod->spreadVelocityMax        = currentlyManagedAmmo.SpreadVelocityMax;
                    mod->spreadVelocityMin        = currentlyManagedAmmo.SpreadVelocityMin;
                    mod->spreadAngle              = currentlyManagedAmmo.SpreadAngle;
                }

                if (settings->ragebot.general.projectile.FasterBullets)
                {
                    mod->projectileVelocity = currentlyManagedAmmo.ProjectileVelocity * 1.1f;
                }
                else
                {
                    mod->projectileVelocity = currentlyManagedAmmo.ProjectileVelocity;
                }
            }
            else
            {
                auto mod = currentlyManagedAmmo.mod;
                if (settings->ragebot.general.weapon.NoSpread)
                {
                    mod->projectileSpread         = 0;
                    mod->projectileVelocitySpread = 0;
                }
                else
                {
                    mod->projectileSpread         = currentlyManagedAmmo.ProjectileSpread;
                    mod->projectileVelocitySpread = currentlyManagedAmmo.VelocitySpread;
                }

                if (settings->ragebot.general.projectile.FasterBullets)
                {
                    mod->projectileVelocity = currentlyManagedAmmo.ProjectileVelocity * 1.1f;
                }
                else
                {
                    mod->projectileVelocity = currentlyManagedAmmo.ProjectileVelocity;
                }
            }

            if (baseProjectile->prefabID != currentlyManagedWeaponID)
            {
                if (auto ss = weaponBackupData.find(baseProjectile->prefabID); ss != weaponBackupData.end())
                {
                    auto& currentlyManagedWeapon = ss->second;
                    currentlyManagedWeaponID     = baseProjectile->prefabID;
                    currentlyManagedWeapon.wep   = baseProjectile;
                }
                else
                {
                    WeaponBackupData data{};
                    data.Aimcone                 = baseProjectile->aimCone;
                    data.HipAimcone              = baseProjectile->hipAimCone;
                    data.automatic               = baseProjectile->automatic;
                    data.ProjectileVelocityScale = baseProjectile->projectileVelocityScale;
                    data.AimConePenalty          = baseProjectile->aimconePenalty;
                    data.AimConePenaltyMax       = baseProjectile->aimConePenaltyMax;
                    data.AimConePenaltyPreShot   = baseProjectile->aimconePenaltyPerShot;

                    RecoilProperties_o* recoil = nullptr;

                    auto wep = baseProjectile;

                    if (wep->prefabID == prefabs::weapon::eoka)
                    {
                        recoil = ((CFlintStrikeWeapon*)wep)->strikeRecoil;
                    }
                    else
                    {
                        recoil = baseProjectile->recoil;

                        if (recoil == nullptr)
                            break;

                        if (baseProjectile->recoil->fields.newRecoilOverride != nullptr)
                        {
                            recoil = baseProjectile->recoil->fields.newRecoilOverride;
                        }
                    }

                    data.RecoilPitchMin           = recoil->fields.recoilPitchMin;
                    data.RecoilPitchMax           = recoil->fields.recoilPitchMax;
                    data.RecoilYawMin             = recoil->fields.recoilYawMin;
                    data.RecoilYawMax             = recoil->fields.recoilYawMax;
                    data.MaxRecoilRadius          = recoil->fields.maxRecoilRadius;
                    data.UseCurves                = recoil->fields.useCurves;
                    data.OverrideAimconeWithCurve = recoil->fields.overrideAimconeWithCurve;

                    weaponBackupData[baseProjectile->prefabID] = data;
                    auto currentlyManagedWeapon                = weaponBackupData[baseProjectile->prefabID];
                    currentlyManagedWeapon.wep                 = baseProjectile;

                    currentlyManagedWeaponID = baseProjectile->prefabID;
                }
            }

            auto& currentlyManagedWeapon = weaponBackupData[currentlyManagedWeaponID];
            currentlyManagedWeapon.wep   = baseProjectile;

            auto modListData = baseProjectile->children->fields._items;

            std::span mods((CBaseEntity**)modListData->m_Items, modListData->max_length);

            for (auto ent : mods)
            {
                if (ent == nullptr || ent->m_CachedPtr == 0)
                    continue;

                if (HASH_RUNTIME(ent->klass->_1.name) == HASH_CTIME("ProjectileWeaponMod"))
                {
                    auto mod = (CProjectileWeaponMod*)ent;

                    if (mod->projectileVelocity.fields.enabled)
                    {
                        currentVelocityScalarModifier += mod->projectileVelocity.fields.scalar;
                    }
                }
            }

            if (currentVelocityScalarModifier == 0.f)
            {
                // we cant have 0
                currentVelocityScalarModifier = 1.f;
            }

            HandleRecoilData(baseProjectile, currentlyManagedWeapon);

            // auto weaponItem = baseProjectile->GetItem();

            // weapon features
            {
                if (settings->ragebot.general.weapon.NoSpread)
                {
                    baseProjectile->aimCone                 = -1.f;
                    baseProjectile->hipAimCone              = -1.f;
                    baseProjectile->aimconePenalty          = 0.f;
                    baseProjectile->aimConePenaltyMax       = 0.f;
                    baseProjectile->aimconePenaltyPerShot   = 0.f;
                    baseProjectile->projectileVelocityScale = 1.f;
                }
                else
                {
                    baseProjectile->aimCone                 = currentlyManagedWeapon.Aimcone;
                    baseProjectile->hipAimCone              = currentlyManagedWeapon.HipAimcone;
                    baseProjectile->aimconePenalty          = currentlyManagedWeapon.AimConePenalty;
                    baseProjectile->aimConePenaltyMax       = currentlyManagedWeapon.AimConePenaltyMax;
                    baseProjectile->aimconePenaltyPerShot   = currentlyManagedWeapon.AimConePenaltyPreShot;
                    baseProjectile->projectileVelocityScale = currentlyManagedWeapon.ProjectileVelocityScale;
                }

                if (settings->ragebot.general.weapon.Automatic)
                {
                    baseProjectile->automatic = true;
                }
                else
                {
                    baseProjectile->automatic = currentlyManagedWeapon.automatic;
                }

                if (settings->ragebot.general.weapon.NoSway)
                {
                    baseProjectile->aimSway = 0.f;
                }
                else
                {
                    baseProjectile->aimSway = currentlyManagedWeapon.AimSway;
                }
            }

            if (isLauncher)
            {
                launcherInfo.valid = LauncherPrediction(localPlayer, currentlyManagedAmmo, currentlyManagedWeapon);
            }

            if (settings->ragebot.general.desync.shoot.Active() && CurrentTarget.type != TargetType::Invalid)
            {
                PredictedPosition =
                    PredictPosition(localPlayer, CurrentTarget, {}, currentlyManagedAmmo, currentlyManagedWeapon);
            }

            else if (settings->ragebot.general.aimbot.aim.Enabled && CurrentTarget.type != TargetType::Invalid &&
                     CurrentTarget.type != TargetType::HotBar)
            {
                PredictedPosition =
                    PredictPosition(localPlayer, CurrentTarget, {}, currentlyManagedAmmo, currentlyManagedWeapon);
            }
            else
            {
                PredictedPosition = {};
            }

            return;
        } while (false);
        PredictedPosition        = {};
        currentlyManagedAmmoID   = 0;
        currentlyManagedWeaponID = 0;
    }

    void ClientInput(CBasePlayer* localPlayer)
    {
        if (HitScanner::desyncNormalizedTraceRays.empty())
        {
            HitScanner::GenerateNormalizedLOSTraceRays(HitScanner::desyncNormalizedTraceRays, 10.f, 3.f, 444.f);
            HitScanner::GenerateNormalizedLOSTraceRays(HitScanner::bulletTPNormalizedTraceRays, 1.99f, 2.1f, 25.f,
                                                       120.f, 45.f, 6.f);
        }

        if (localPlayer->HasFlag(PlayerFlags::Sleeping))
            return;

        Desync(localPlayer);

        if (PredictedPosition.empty())
            return;

        if (settings->ragebot.general.aimbot.aim.Active() == false)
        {
            return;
        }

        if (settings->ragebot.general.aimbot.Silent)
        {
            return;
        }

        auto input       = localPlayer->input;
        auto eyes        = (CPlayerEyes*)localPlayer->eyes;
        auto localOrigin = eyes->GetPosition(); /*((CModel*)localPlayer->model)
                              ->GetBoneTransform(PlayerBones::eyeTranform)
                              ->GetPosition(); */

        auto velocityOrigin       = localPlayer->GetWorldVelocity();
        auto delta                = CTime::GetDeltaTime();
        auto nextFramePosDelta    = velocityOrigin * delta;
        auto predictedLocalOrigin = velocityOrigin.empty() ? localOrigin : localOrigin + nextFramePosDelta;

        auto headAngle = *(Vector3*)&input->fields.bodyAngles.fields;

        // Vector2 viewOffset = math_additional::CalcAngle(localOrigin, PredictedPosition) - headAngle;
        Vector2 viewOffset = math_additional::CalcAngle(predictedLocalOrigin, PredictedPosition) - headAngle;

        if (viewOffset.empty())
            return;

        Vector3 aimAngles = headAngle;
        aimAngles         = aimAngles + viewOffset - *(Vector3*)&input->fields.recoilAngles;

        auto mount  = localPlayer->mounted.fields.ent_cached;
        auto parent = localPlayer->addedToParentEntity;

        if (!mount && !parent)
        {
            normalize(aimAngles.x, aimAngles.y);
            smooth_angle(aimAngles, headAngle);
            if (!normalize(aimAngles.x, aimAngles.y))
                return;

            // wtf
            if (aimAngles.Invalid() || aimAngles.x != aimAngles.x || aimAngles.y != aimAngles.y ||
                viewOffset.x >= _flt(88.f) || viewOffset.x <= _flt(-88.f) || aimAngles.x <= _flt(-88.f) ||
                aimAngles.x >= _flt(88.f))
                return;

            input->fields.bodyAngles.fields = {aimAngles.x, aimAngles.y, input->fields.bodyAngles.fields.z};
        }
        else
        {
            float deltaPitch = input->fields.bodyAngles.fields.x - input->fields.offsetAngles.fields.x;
            float deltaYaw   = input->fields.bodyAngles.fields.y - input->fields.offsetAngles.fields.y;
            aimAngles.x -= deltaPitch;
            aimAngles.y -= deltaYaw;

            normalize(aimAngles.x, aimAngles.y);
            smooth_angle(aimAngles, *(Vector3*)&input->fields.offsetAngles.fields);
            if (!normalize(aimAngles.x, aimAngles.y))
                return;
            if (aimAngles.Invalid() || aimAngles.x != aimAngles.x || aimAngles.y != aimAngles.y ||
                viewOffset.x >= _flt(88.f) || viewOffset.x <= _flt(-88.f) || aimAngles.x <= _flt(-88.f) ||
                aimAngles.x >= _flt(88.f))
                return;

            input->fields.offsetAngles.fields = {aimAngles.x, aimAngles.y, input->fields.offsetAngles.fields.z};
        }

        /*

           CBaseMountable* mount = Globals::Local->m_pMounted;
            CBaseEntity* parent = Globals::Local->m_pAddedToParentEntity;
            aimAngles = aimAngles + viewOffset - input->m_vecRecoilAngles;

            if (!mount && !parent)
            {
                normalize(aimAngles.x, aimAngles.y);
                smooth_angle(aimAngles, bodyAngles);
                if (!normalize(aimAngles.x, aimAngles.y))
                    return;

                if (aimAngles.Invalid() || aimAngles.x != aimAngles.x ||
           aimAngles.y != aimAngles.y || viewOffset.x >= _flt(88.f) ||
           viewOffset.x <= _flt(-88.f) || aimAngles.x <= _flt(-88.f)
                    || aimAngles.x >= _flt(88.f))
                    return;

                input->m_vecBodyAngles = { aimAngles.x, aimAngles.y,
           input->m_vecBodyAngles.z };
            }
            else
            {
                float deltaPitch = input->m_vecBodyAngles.x -
           input->m_vecOffsetAngles.x; float deltaYaw = input->m_vecBodyAngles.y
           - input->m_vecOffsetAngles.y; aimAngles.x -= deltaPitch; aimAngles.y
           -= deltaYaw;

                normalize(aimAngles.x, aimAngles.y);
                smooth_angle(aimAngles, input->m_vecOffsetAngles);
                if (!normalize(aimAngles.x, aimAngles.y))
                    return;
                if (aimAngles.Invalid() || aimAngles.x != aimAngles.x ||
           aimAngles.y != aimAngles.y || viewOffset.x >= _flt(88.f) ||
           viewOffset.x <= _flt(-88.f) || aimAngles.x <= _flt(-88.f)
                    || aimAngles.x >= _flt(88.f))
                    return;

                input->m_vecOffsetAngles = { aimAngles.x, aimAngles.y,
           input->m_vecOffsetAngles.z };
            }
        */
    }
} // namespace Aimbot