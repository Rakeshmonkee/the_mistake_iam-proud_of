﻿#pragma once
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
#include <vector>

struct CType;
// Unity base object, only contain methods
struct CObject
{
    void setHideFlags(HideFlags flags);

    static Il2CppObject* Instantiate(Il2CppObject* type);

    static void DontDestroyOnLoad(Il2CppObject* object);
};

template <typename T> // CObject is part of this cuz no fields
struct ILObjectBase : Il2CppObject, T, CObject
{
    template <typename TType>
    TType* StaticFields()
    {
        return reinterpret_cast<TType*>(this->klass->static_fields);
    }

    template <typename TType>
    TType* As()
    {
        return reinterpret_cast<TType*>(this);
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

    static Il2CppString* newString(const char* text);
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

// ugly hack for generic array
//  i dont wanna polute this header by il2cpp_api
//  so we use this hack instead
struct CArrayBase
{
    static void* NewInternal(Il2CppClass* klass, il2cpp_array_size_t size);
    static void* NewInternal(const char* klass, il2cpp_array_size_t size, const char* namespaze = "");
};

template <typename T>
struct CArray : Il2CppArray, CArrayBase
{
    union
    {
        T  data[IL2CPP_ZERO_LEN_ARRAY];
        T* dataPtr[IL2CPP_ZERO_LEN_ARRAY];

        // for debugger
        T  dataDummy[8];
        T* dataPtrDummy[8];
    };

    static CArray<T>* New(Il2CppClass* klass, il2cpp_array_size_t size)
    {
        return (CArray<T>*)NewInternal(klass, size);
    }

    static CArray<T>* New(const char* klass, il2cpp_array_size_t size, const char* namespaze = "")
    {
        return (CArray<T>*)NewInternal(klass, size, namespaze);
    }
};

template <typename T>
struct WeakArray
{
    uint64_t lenght;
    union
    {
        T         data[IL2CPP_ZERO_LEN_ARRAY];
        uintptr_t ptr;
    };
};

struct CType : Il2CppObject
{
    static CType* FomClass(const char* name, const char* namespaze = "");
};

// template <typename T>
// inline SystemArray<T>* ArrayNewSpecific(uintptr_t typeInfo, uint64_t size)
//{
//     return (SystemArray<T>*)methods::array_new_specific(typeInfo, size);
// }

// struct CPrefabUtility
//{
//     Il2CppObject* InstantiatePrefab(Il2CppObject* object);
// };

struct CAssetBundle
{
    static CAssetBundle* LoadFileFromMemory(CArray<uint8_t>* assetBundle, uint32_t CRC, uint64_t offset);

    // Should be used only for debug
    static CAssetBundle* LoadFileFromFile(const char* path);

    void* LoadAssetInternal(const char* name, CType* type);

    template <typename T>
    T* LoadAsset(const char* name, CType* type)
    {
        return (T*)LoadAssetInternal(name, type);
    }
};

struct CGameObject : ILObjectBase<UnityEngine_GameObject_Fields>
{
    void* AddComponentInternal(CType* type);

    void* GetComponentInternal(CType* type);

    static void* FindInternal(const char* name);

    static void* FindObjectsByTypeInternal(
        CType* type, FindObjectsInactive findObjectsInactive, FindObjectsSortMode sortMode);

    template <typename T>
    static CArray<T>* FindObjectsByType(
        CType* type, FindObjectsInactive findObjectsInactive, FindObjectsSortMode sortMode)
    {
        return (CArray<T>*)FindObjectsByTypeInternal(type, findObjectsInactive, sortMode);
    }

    template <typename T>
    T* AddComponent(CType* type)
    {
        return (T*)AddComponentInternal(type);
    }

    template <typename T>
    T* GetComponent(CType* type)
    {
        return (T*)GetComponentInternal(type);
    }

    template <typename T>
    static T* Instantiate(Il2CppObject* object)
    {
        return (T*)CObject::Instantiate(object);
    }

    template <typename T>
    static T* Find(const char* name)
    {
        return (T*)FindInternal(name);
    }
};

struct CUnsafeUtility
{
    static void* PinGCObjectAndGetAddress(Il2CppObject* object, uintptr_t* gcHandle);
};

class CTime
{
  public:
    static float GetTime();
    static float GetRealTime();
    static float GetDeltaTime();
    static float GetUnscaledDeltaTime();
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

struct CVertexAttributeDescriptor : UnityEngine_Rendering_VertexAttributeDescriptor_Fields
{ };

struct CShader : ILObjectBase<UnityEngine_Shader_Fields>
{
    static uint32_t PropertyToID(const char* name);
};

struct CPostProcessLayer : ILObjectBase<UnityEngine_Rendering_PostProcessing_PostProcessLayer_Fields>
{ };
//
// Summary:
//     Contains information about a single sub-mesh of a Mesh.
//
struct CSubMeshDescriptor
{
    Bounds       bounds;
    MeshTopology topology;
    int32_t      indexStart;
    int32_t      indexCount;
    int32_t      baseVertex;
    int32_t      firstVertex;
    int32_t      vertexCount;
};

struct CMesh : ILObjectBase<UnityEngine_Mesh_Fields>
{
    static CMesh* New();
    void          ctor();
    void          MarkDynamic();
    void          Clear(bool keepVertexLayout);
    void          SetIndexBufferParams(uint32_t indexCount, IndexFormat format);
    void          SetVertexBufferParams(int32_t vertexCount, const std::vector<CVertexAttributeDescriptor>& attributes);
    void          SetSubMeshes(CSubMeshDescriptor* desc, uint32_t count, MeshUpdateFlags flags);
    void          UploadMeshData(bool markNoLongerReadable);
    void          SetSubmeshCount(uint32_t count);
    void SetVertexBufferData(int32_t stream, void* data, int32_t dataStart, int32_t meshBufferStart, int32_t count,
        int32_t elemSize, MeshUpdateFlags flags);
    void SetIndexBufferData(
        void* data, int32_t dataStart, int32_t meshBufferStart, int32_t count, int32_t elemSize, MeshUpdateFlags flags);
};

struct CMaterial : ILObjectBase<UnityEngine_Material_Fields>
{
    void              ctor(CShader* shader);
    static CMaterial* New();
};

struct CTexture : ILObjectBase<UnityEngine_Texture_Fields>
{
    uintptr_t GetNativeTexturePtr();
    void      set_filterMode(FilterMode mode);
};

struct CTexture2D : ILObjectBase<UnityEngine_Texture2D_Fields>
{
    void ctor(uint32_t width, uint32_t height, TextureFormat textureFormat, bool mipChain, bool linear);

    WeakArray<uint8_t> GetRawTextureData_byte();
    void               Apply();
};

struct CBootstrap : ILObjectBase<Bootstrap_Fields>
{ };

struct CSprite : ILObjectBase<UnityEngine_Sprite_Fields>
{ };

struct CMaterialPropertyBlock : ILObjectBase<UnityEngine_MaterialPropertyBlock_Fields>
{
    void                           ctor();
    void                           SetTexture(uint32_t nameID, CTexture* value);
    static CMaterialPropertyBlock* New();
};

struct CCommandBuffer : ILObjectBase<UnityEngine_Rendering_CommandBuffer_Fields>
{
    static CCommandBuffer* New();
    void                   ctor();
    void                   setName(const char* name);
    void                   SetViewport(CRect* pixelRect);
    void                   SetViewProjectionMatrices(Matrix4x4* view, Matrix4x4* proj);
    void                   EnableScissorRect(CRect* rect);
    void                   DisableScissorRect();
    void                   Clear();
    void DrawMesh(CMesh* mesh, Matrix4x4* matrix, CMaterial* material, uint32_t submeshIndex, int32_t shaderPass,
        CMaterialPropertyBlock* properties);
};

struct CInput : ILObjectBase<UnityEngine_Input_Fields>
{
    static Vector3 GetMousePosition();
    static Vector2 GetMouseScrollDelta();
    static bool    GetMouseButton(int32_t button);
};

struct CCamera : ILObjectBase<UnityEngine_Camera_Fields>
{
    static CCamera* GetCurrentCamera();
    static CCamera* GetMainCamera();
    Vector3         GetPosition();
    Matrix4x4       GetViewMatrix();
    CRect           GetPixelRect();
    bool            WorldToScreenOld(const Vector3& elementPosition, Vector2& screenPosition);
    Vector3         WorldToScreen(Vector3 elementPosition);
    void            AddCommandBuffer(CameraEvent event, CCommandBuffer* buffer);
    bool            GetOrtoGraphic();
    void            SetOrtoGraphic(bool isOrto);
    void            SetDepth(float depth);
    void            SetCullingMask(Layer layer);
    void            SetClearFlags(CameraClearFlags flags);
};

struct CCanvas : ILObjectBase<UnityEngine_Canvas_Fields>
{
    void SetRenderMode(RenderMode mode);
    void SetWorldCamera(CCamera* camera);
    bool IsRootCanvas();
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

struct CProtobuf_Entity : ILObjectBase<ProtoBuf_Entity_Fields>
{ };

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
