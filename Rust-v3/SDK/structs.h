#pragma once
// this needs to be here before il2cpp header
// since its using its types but doesnt include its header
// its the il2cppdumper issue
#include <cstdint>
#include <vadefs.h>
#include <string>

#include "math.h"
#include "enums.h"

#define IL2CPP_ZERO_LEN_ARRAY 0

// il2cpp contains some keywords that are already used for macros

#ifdef stdin
    #undef stdin
#endif // stdin

#ifdef stdout
    #undef stdout
#endif // stdout

#ifdef stderr
    #undef stderr
#endif // stdout

// this is generated by il2cpp dumper
// it will not be included in repo since its 35MB
#include "il2cpp.h"

template <typename T>
struct ILObjectBase : Il2CppObject, T
{
    template <typename TType>
    TType* StaticFields()
    {
        return reinterpret_cast<TType*>(this->klass->static_fields);
    }
};
typedef wchar_t Il2CppNativeChar;
typedef wchar_t Il2CppChar;

// System.String
typedef struct Il2CppString
{
    Il2CppObject object;
    int32_t      length; ///< Length of string *excluding* the trailing null (which is included in 'chars').
    Il2CppChar   chars[IL2CPP_ZERO_LEN_ARRAY];

    static Il2CppString* newString(char* text);
    std::string          str();

} Il2CppString;

using CString = Il2CppString;

typedef struct Il2CppArray : public Il2CppObject
{

    /* bounds is NULL for szarrays */
    Il2CppArrayBounds* bounds;
    /* total number of elements of the array */
    il2cpp_array_size_t max_length;
} Il2CppArray;

template <typename T>
struct CArray : Il2CppArray
{
    T*         data[IL2CPP_ZERO_LEN_ARRAY];
    CArray<T>* New(Il2CppClass* klass, il2cpp_array_size_t size);
    CArray<T>* New(char* klass, il2cpp_array_size_t size, const char* namespaze = "");
};

// template <typename T>
// inline SystemArray<T>* ArrayNewSpecific(uintptr_t typeInfo, uint64_t size)
//{
//     return (SystemArray<T>*)methods::array_new_specific(typeInfo, size);
// }

class CTime
{
  public:
    static float GetTime();
    static float GetRealTime();
    static float GetDeltaTime();
    static float GetFixedDeltaTime();
    static float GetSmoothDeltaTime();
    static float GetFixedTime();
    static float GetTimeScale();
    static void  SetTimeScale(float value);
};

struct CTransform : ILObjectBase<UnityEngine_Transform_Fields>
{
    static CTransform* GetTransform(void* addr);
    Vector3            GetPosition();
    void               SetPosition(Vector3 position);
    void               SetRotation(Vector4 rotation);
};

struct Bounds
{
    Vector3 center;  // 0x0
    Vector3 extents; // 0xC

    Vector3 GetMin()
    {
        return center - extents;
    }

    Vector3 GetMax()
    {
        return center + extents;
    }

    float SqrDistance(Vector3 point);
};

struct OBB
{
    Vector4 rotation; // 0x0 QUATERNION
    Vector3 position; // 0x10
    Vector3 extents;  // 0x1C
    Vector3 forward;  // 0x28
    Vector3 right;    // 0x34
    Vector3 up;       // 0x40
    float   reject;   // 0x4C

    Bounds  ToBounds();
    Vector3 ClosestPoint(Vector3 position);
};

struct CRect : UnityEngine_Rect_Fields // native
{ };

struct CVertexAttributeDescriptor : ILObjectBase<UnityEngine_Rendering_VertexAttributeDescriptor_Fields>
{ };

struct CShader : ILObjectBase<UnityEngine_Shader_Fields>
{
    static uint32_t PropertyToID(char* name);
};

struct CSubMeshDescriptor
{
    Bounds bounds;
};

struct CMesh : ILObjectBase<UnityEngine_Mesh_Fields>
{
    void ctor(char* name);
    void MarkDynamic();
    void Clear();
    void SetIndexBufferParams(uint32_t indexCount, TextureFormat format);
    void SetVertexBufferParams(int vertexCount, CArray<CVertexAttributeDescriptor>* attributes);
    void SetSubMeshes(CArray<CSubMeshDescriptor>* desc, MeshUpdateFlags flags);
    void UploadMeshData(bool markNoLongerReadable);
};

struct CMaterial : ILObjectBase<UnityEngine_Material_Fields>
{
    CMaterial* ctor(CShader* shader);
};

struct CTexture : ILObjectBase<UnityEngine_Texture_Fields>
{
    uintptr_t GetNativeTexturePtr();
};

struct CTexture2D : ILObjectBase<UnityEngine_Texture2D_Fields>
{
    void ctor(int width, int height, TextureFormat textureFormat, bool mipChain, bool linear);
    void LoadRawTextureData(uintptr_t data, int size);
    void Apply();
};

struct CSprite : ILObjectBase<UnityEngine_Sprite_Fields>
{ };

struct CMaterialPropertyBlock : ILObjectBase<UnityEngine_MaterialPropertyBlock_Fields>
{
    void ctor();
    void SetTexture(uint32_t nameID, CTexture* value);
};

struct CCommandBuffer : ILObjectBase<UnityEngine_Rendering_CommandBuffer_Fields>
{
    void ctor();
    void SetViewport(CRect* pixelRect);
    void SetViewProjectionMatrices(Matrix4x4* view, Matrix4x4* proj);
    void EnableScissorRect(CRect* rect);
    void DisableScissorRect();
    void DrawMesh(CMesh* mesh, Matrix4x4* matrix, CMaterial* material, uint32_t submeshIndex, uint32_t shaderPass,
        CMaterialPropertyBlock* properties);
};

struct CCamera : ILObjectBase<UnityEngine_Camera_Fields>
{
    static CCamera* GetCurrentCamera();
    static CCamera* GetMainCamera();
    Vector3         GetPosition();
    Matrix4x4       GetViewMatrix();
    bool            WorldToScreenOld(const Vector3& elementPosition, Vector2& screenPosition);
    Vector3         WorldToScreen(Vector3 elementPosition);
};

struct CMainCamera : ILObjectBase<MainCamera_Fields>
{ };

struct CColider : ILObjectBase<UnityEngine_Collider_Fields>
{ };

struct CTerrainCollision : TerrainCollision_o
{
    void Reset(CColider* collider);
};

struct CModel : ILObjectBase<Model_Fields>
{
    Vector3     GetBonePosition(PlayerBones bone);
    CTransform* GetBoneTransform(PlayerBones bone);
};

struct CBaseNetworkable : ILObjectBase<BaseNetworkable_Fields>
{
    // void test()
    // {
    //     auto lol = this->StaticFields<BaseNetworkable_StaticFields>()->clientEntities;
    // }
};

struct CInputState : ILObjectBase<InputState_Fields>
{ };

struct CBaseEntity : CBaseNetworkable, BaseEntity_Fields_s
{
    Vector3 GetOriginPosition();
    Vector3 GetLocalVelocity();
    Vector3 GetWorldVelocity();
    Vector3 GetParentVelocity();
};

struct CBaseMovement : ILObjectBase<BaseMovement_Fields>
{ };

struct CPlayerWalkMovement : CBaseMovement, PlayerWalkMovement_Fields_s
{ };

struct CBaseCombatEntity : CBaseEntity, BaseCombatEntity_Fields_s
{
    float MaxPlayerVelocity();
};

struct CModelState : ILObjectBase<ModelState_Fields>
{
    bool HasFlag(ModelStateFlags Flag)
    {
        return ((ModelStateFlags)(this->flags & (int32_t)Flag) == Flag);
    }

    void SetFlag(ModelStateFlags Flag, bool State)
    {
        auto ActiveFlags = this->flags;

        if (State)
            ActiveFlags |= (int32_t)Flag;
        else
            ActiveFlags &= ~(int32_t)Flag;

        this->flags = ActiveFlags;
    }
};

struct CItemDefinition : ILObjectBase<ItemDefinition_Fields>
{ };

struct CItem : ILObjectBase<Item_Fields>
{ };

struct CHeldEntity : CBaseEntity, HeldEntity_Fields_s
{
    CItem* GetItem();
    bool   IsBaseProjectile();
};

class CBasePlayer : CBaseCombatEntity, BasePlayer_Fields_s
{
  public:
    uint64_t     GetTeamID();
    bool         IsLocalPlayer();
    bool         IsWounded();
    bool         IsSleeping();
    bool         InSafeZone();
    CHeldEntity* GetHeldEntity();
    float        MaxHealth();
    float        StartHealth();
    float        StartMaxHealth();
    float        BoundsPadding();
    float        GetJumpHeight();
    float        GetRadius();
    float        NoClipRadius(float margin);

    bool HasFlag(PlayerFlags Flag)
    {
        return ((PlayerFlags)(this->playerFlags & (int32_t)Flag) == Flag);
    }

    void SetFlag(PlayerFlags Flag, bool State)
    {
        auto ActiveFlags = this->playerFlags;

        if (State)
            ActiveFlags |= (int32_t)Flag;
        else
            ActiveFlags &= ~(int32_t)Flag;

        this->playerFlags = ActiveFlags;
    }
};

struct CAttackEntity : CHeldEntity, AttackEntity_Fields_s
{
    bool IsWeaponReady(bool bow);
    bool IsMelee();
};
