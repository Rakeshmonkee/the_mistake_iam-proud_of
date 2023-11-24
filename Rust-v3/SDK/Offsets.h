#pragma once
namespace Offsets
{

namespace UnityEngine_AssetBundle
{
namespace Methods
{
constexpr auto _ctor = 42106928; // System.Void .ctor()
constexpr auto Contains_System_String_name = 42104784; // System.Boolean Contains(System.String name)
constexpr auto T_UnityEngine_AssetBundle_LoadAsset_System_Object__System_String_name = 17705488; // T UnityEngine.AssetBundle.LoadAsset<System.Object>
constexpr auto LoadAsset_System_String_name__System_Type_type = 42106208; // UnityEngine.Object LoadAsset(System.String name, System.Type type)
constexpr auto LoadAsset_Internal_System_String_name__System_Type_type = 42106112; // UnityEngine.Object LoadAsset_Internal(System.String name, System.Type type)
constexpr auto LoadAssetAsync_System_String_name = 42105232; // UnityEngine.AssetBundleRequest LoadAssetAsync(System.String name)
constexpr auto UnityEngine_AssetBundleRequest_UnityEngine_AssetBundle_LoadAssetAsync_System_Object__System_String_name = 17705360; // UnityEngine.AssetBundleRequest UnityEngine.AssetBundle.LoadAssetAsync<System.Object>
constexpr auto LoadAssetAsync_System_String_name__System_Type_type = 42105664; // UnityEngine.AssetBundleRequest LoadAssetAsync(System.String name, System.Type type)
constexpr auto T___UnityEngine_AssetBundle_LoadAllAssets_System_Object_ = 17705216; // T[] UnityEngine.AssetBundle.LoadAllAssets<System.Object>
constexpr auto LoadAllAssets_System_Type_type = 42104928; // UnityEngine.Object[] LoadAllAssets(System.Type type)
constexpr auto LoadAssetAsync_Internal_System_String_name__System_Type_type = 42105136; // UnityEngine.AssetBundleRequest LoadAssetAsync_Internal(System.String name, System.Type type)
constexpr auto Unload_System_Boolean_unloadAllLoadedObjects = 42106848; // System.Void Unload(System.Boolean unloadAllLoadedObjects)
constexpr auto GetAllAssetNames = 42104864; // System.String[] GetAllAssetNames()
constexpr auto LoadAssetWithSubAssets_Internal_System_String_name__System_Type_type = 42106016; // UnityEngine.Object[] LoadAssetWithSubAssets_Internal(System.String name, System.Type type)
}
namespace StaticMethods
{
constexpr auto LoadFromFileAsync_Internal_System_String_path__System_UInt32_crc__System_UInt64_offset = 42106560; // UnityEngine.AssetBundleCreateRequest LoadFromFileAsync_Internal(System.String path, System.UInt32 crc, System.UInt64 offset)
constexpr auto LoadFromFileAsync_System_String_path = 42106640; // UnityEngine.AssetBundleCreateRequest LoadFromFileAsync(System.String path)
constexpr auto LoadFromFile_Internal_System_String_path__System_UInt32_crc__System_UInt64_offset = 42106704; // UnityEngine.AssetBundle LoadFromFile_Internal(System.String path, System.UInt32 crc, System.UInt64 offset)
constexpr auto LoadFromFile_System_String_path = 42106784; // UnityEngine.AssetBundle LoadFromFile(System.String path)
constexpr auto T___UnityEngine_AssetBundle_ConvertObjects_System_Object__UnityEngine_Object___rawObjects = 17704944; // T[] UnityEngine.AssetBundle.ConvertObjects<System.Object>
constexpr auto T___UnityEngine_Resources_ConvertObjects_System_Object__UnityEngine_Object___rawObjects = 17704944; // T[] UnityEngine.Resources.ConvertObjects<System.Object>
}
}
namespace UnityEngine_Input
{
namespace StaticMethods
{
constexpr auto GetKeyInt_UnityEngine_KeyCode_key = 42669424; // System.Boolean GetKeyInt(UnityEngine.KeyCode key)
constexpr auto GetKeyString_System_String_name = 42669488; // System.Boolean GetKeyString(System.String name)
constexpr auto GetKeyUpInt_UnityEngine_KeyCode_key = 42669552; // System.Boolean GetKeyUpInt(UnityEngine.KeyCode key)
constexpr auto GetKeyDownInt_UnityEngine_KeyCode_key = 42669360; // System.Boolean GetKeyDownInt(UnityEngine.KeyCode key)
constexpr auto GetAxis_System_String_axisName = 42669232; // System.Single GetAxis(System.String axisName)
constexpr auto GetAxisRaw_System_String_axisName = 42669168; // System.Single GetAxisRaw(System.String axisName)
constexpr auto GetButtonDown_System_String_buttonName = 42669296; // System.Boolean GetButtonDown(System.String buttonName)
constexpr auto GetMouseButton_System_Int32_button = 42669744; // System.Boolean GetMouseButton(System.Int32 button)
constexpr auto GetMouseButtonDown_System_Int32_button = 42669616; // System.Boolean GetMouseButtonDown(System.Int32 button)
constexpr auto GetMouseButtonUp_System_Int32_button = 42669680; // System.Boolean GetMouseButtonUp(System.Int32 button)
constexpr auto GetTouch_System_Int32_index = 42669872; // UnityEngine.Touch GetTouch(System.Int32 index)
constexpr auto GetKey_UnityEngine_KeyCode_key = 42669424; // System.Boolean GetKey(UnityEngine.KeyCode key)
constexpr auto GetKey_System_String_name = 42669488; // System.Boolean GetKey(System.String name)
constexpr auto GetKeyUp_UnityEngine_KeyCode_key = 42669552; // System.Boolean GetKeyUp(UnityEngine.KeyCode key)
constexpr auto GetKeyDown_UnityEngine_KeyCode_key = 42669360; // System.Boolean GetKeyDown(UnityEngine.KeyCode key)
constexpr auto get_anyKey = 42670016; // System.Boolean get_anyKey()
constexpr auto get_anyKeyDown = 42669968; // System.Boolean get_anyKeyDown()
constexpr auto get_mousePosition = 42670352; // UnityEngine.Vector3 get_mousePosition()
constexpr auto get_mouseScrollDelta = 42670528; // UnityEngine.Vector2 get_mouseScrollDelta()
constexpr auto get_imeCompositionMode = 42670240; // UnityEngine.IMECompositionMode get_imeCompositionMode()
constexpr auto set_imeCompositionMode_UnityEngine_IMECompositionMode_value = 42671104; // System.Void set_imeCompositionMode(UnityEngine.IMECompositionMode value)
constexpr auto get_compositionString = 42670192; // System.String get_compositionString()
constexpr auto get_compositionCursorPos = 42670128; // UnityEngine.Vector2 get_compositionCursorPos()
constexpr auto set_compositionCursorPos_UnityEngine_Vector2_value = 42671040; // System.Void set_compositionCursorPos(UnityEngine.Vector2 value)
constexpr auto get_mousePresent = 42670416; // System.Boolean get_mousePresent()
constexpr auto get_touchCount = 42670592; // System.Int32 get_touchCount()
constexpr auto get_touchSupported = 42670640; // System.Boolean get_touchSupported()
constexpr auto get_touches = 42670688; // UnityEngine.Touch[] get_touches()
constexpr auto CheckDisabled = 42669120; // System.Boolean CheckDisabled()
constexpr auto GetTouch_Injected_System_Int32_index__out_UnityEngine_Touch_ret = 42669808; // System.Void GetTouch_Injected(System.Int32 index, out UnityEngine.Touch ret)
constexpr auto get_mousePosition_Injected_out_UnityEngine_Vector3_ret = 42670288; // System.Void get_mousePosition_Injected(out UnityEngine.Vector3 ret)
constexpr auto get_mouseScrollDelta_Injected_out_UnityEngine_Vector2_ret = 42670464; // System.Void get_mouseScrollDelta_Injected(out UnityEngine.Vector2 ret)
constexpr auto get_compositionCursorPos_Injected_out_UnityEngine_Vector2_ret = 42670064; // System.Void get_compositionCursorPos_Injected(out UnityEngine.Vector2 ret)
constexpr auto set_compositionCursorPos_Injected_UnityEngine_Vector2_value = 42670976; // System.Void set_compositionCursorPos_Injected(UnityEngine.Vector2 value)
}
}
namespace UnityEngine_Font
{
namespace Fields
{
constexpr auto m_FontTextureRebuildCallback = 0x18; // UnityEngine.Font/FontTextureRebuildCallback
}
namespace StaticFields
{
constexpr auto textureRebuilt = 0x0; // System.Action`1
}
namespace Methods
{
constexpr auto get_material = 42774784; // UnityEngine.Material get_material()
constexpr auto get_dynamic = 42774656; // System.Boolean get_dynamic()
constexpr auto get_fontSize = 42774720; // System.Int32 get_fontSize()
constexpr auto _ctor = 42774320; // System.Void .ctor()
constexpr auto HasCharacter_System_Char_c = 42773968; // System.Boolean HasCharacter(System.Char c)
constexpr auto HasCharacter_System_Int32_c = 42774048; // System.Boolean HasCharacter(System.Int32 c)
}
namespace StaticMethods
{
constexpr auto add_textureRebuilt_System_Action_1_UnityEngine_Font__value = 42774432; // System.Void add_textureRebuilt(System.Action`1<UnityEngine.Font> value)
constexpr auto remove_textureRebuilt_System_Action_1_UnityEngine_Font__value = 42774848; // System.Void remove_textureRebuilt(System.Action`1<UnityEngine.Font> value)
constexpr auto InvokeTextureRebuilt_Internal_UnityEngine_Font_font = 42774192; // System.Void InvokeTextureRebuilt_Internal(UnityEngine.Font font)
constexpr auto Internal_CreateFont_UnityEngine_Font_self__System_String_name = 42774112; // System.Void Internal_CreateFont(UnityEngine.Font self, System.String name)
}
}
namespace UnityEngine_Canvas
{
namespace StaticFields
{
constexpr auto preWillRenderCanvases = 0x0; // UnityEngine.Canvas/WillRenderCanvases
constexpr auto willRenderCanvases = 0x8; // UnityEngine.Canvas/WillRenderCanvases
constexpr auto _externBeginRenderOverlays_k__BackingField = 0x10; // System.Action`1
constexpr auto _externRenderOverlaysBefore_k__BackingField = 0x18; // System.Action`2
constexpr auto _externEndRenderOverlays_k__BackingField = 0x20; // System.Action`1
}
namespace Methods
{
constexpr auto get_renderMode = 42900848; // UnityEngine.RenderMode get_renderMode()
constexpr auto get_isRootCanvas = 42900432; // System.Boolean get_isRootCanvas()
constexpr auto get_pixelRect = 42900704; // UnityEngine.Rect get_pixelRect()
constexpr auto get_scaleFactor = 42901040; // System.Single get_scaleFactor()
constexpr auto set_scaleFactor_System_Single_value = 42901856; // System.Void set_scaleFactor(System.Single value)
constexpr auto get_referencePixelsPerUnit = 42900784; // System.Single get_referencePixelsPerUnit()
constexpr auto set_referencePixelsPerUnit_System_Single_value = 42901776; // System.Void set_referencePixelsPerUnit(System.Single value)
constexpr auto get_pixelPerfect = 42900560; // System.Boolean get_pixelPerfect()
constexpr auto set_planeDistance_System_Single_value = 42901696; // System.Void set_planeDistance(System.Single value)
constexpr auto get_renderOrder = 42900912; // System.Int32 get_renderOrder()
constexpr auto get_overrideSorting = 42900496; // System.Boolean get_overrideSorting()
constexpr auto set_overrideSorting_System_Boolean_value = 42901616; // System.Void set_overrideSorting(System.Boolean value)
constexpr auto get_sortingOrder = 42901168; // System.Int32 get_sortingOrder()
constexpr auto set_sortingOrder_System_Int32_value = 42902000; // System.Void set_sortingOrder(System.Int32 value)
constexpr auto get_targetDisplay = 42901232; // System.Int32 get_targetDisplay()
constexpr auto get_sortingLayerID = 42901104; // System.Int32 get_sortingLayerID()
constexpr auto set_sortingLayerID_System_Int32_value = 42901936; // System.Void set_sortingLayerID(System.Int32 value)
constexpr auto get_additionalShaderChannels = 42900176; // UnityEngine.AdditionalCanvasShaderChannels get_additionalShaderChannels()
constexpr auto set_additionalShaderChannels_UnityEngine_AdditionalCanvasShaderChannels_value = 42901552; // System.Void set_additionalShaderChannels(UnityEngine.AdditionalCanvasShaderChannels value)
constexpr auto get_rootCanvas = 42900976; // UnityEngine.Canvas get_rootCanvas()
constexpr auto get_worldCamera = 42901296; // UnityEngine.Camera get_worldCamera()
constexpr auto set_worldCamera_UnityEngine_Camera_value = 42902064; // System.Void set_worldCamera(UnityEngine.Camera value)
constexpr auto _ctor = 3661504; // System.Void .ctor()
constexpr auto get_pixelRect_Injected_out_UnityEngine_Rect_ret = 42900624; // System.Void get_pixelRect_Injected(out UnityEngine.Rect ret)
}
namespace StaticMethods
{
constexpr auto add_willRenderCanvases_UnityEngine_Canvas_WillRenderCanvases_value = 42899984; // System.Void add_willRenderCanvases(UnityEngine.Canvas/WillRenderCanvases value)
constexpr auto remove_willRenderCanvases_UnityEngine_Canvas_WillRenderCanvases_value = 42901360; // System.Void remove_willRenderCanvases(UnityEngine.Canvas/WillRenderCanvases value)
constexpr auto get_externBeginRenderOverlays = 42900240; // System.Action`1<System.Int32> get_externBeginRenderOverlays()
constexpr auto get_externRenderOverlaysBefore = 42900368; // System.Action`2<System.Int32, System.Int32> get_externRenderOverlaysBefore()
constexpr auto get_externEndRenderOverlays = 42900304; // System.Action`1<System.Int32> get_externEndRenderOverlays()
constexpr auto GetDefaultCanvasMaterial = 42899632; // UnityEngine.Material GetDefaultCanvasMaterial()
constexpr auto GetETC1SupportedCanvasMaterial = 42899680; // UnityEngine.Material GetETC1SupportedCanvasMaterial()
constexpr auto ForceUpdateCanvases = 42899488; // System.Void ForceUpdateCanvases()
constexpr auto SendPreWillRenderCanvases = 42899824; // System.Void SendPreWillRenderCanvases()
constexpr auto SendWillRenderCanvases = 42899904; // System.Void SendWillRenderCanvases()
constexpr auto BeginRenderExtraOverlays_System_Int32_displayIndex = 42899296; // System.Void BeginRenderExtraOverlays(System.Int32 displayIndex)
constexpr auto RenderExtraOverlaysBefore_System_Int32_displayIndex__System_Int32_sortingOrder = 42899728; // System.Void RenderExtraOverlaysBefore(System.Int32 displayIndex, System.Int32 sortingOrder)
constexpr auto EndRenderExtraOverlays_System_Int32_displayIndex = 42899392; // System.Void EndRenderExtraOverlays(System.Int32 displayIndex)
}
}
namespace UnityEngine_RectTransformUtility
{
namespace StaticFields
{
constexpr auto s_Corners = 0x0; // unknown
}
namespace StaticMethods
{
constexpr auto PixelAdjustPoint_UnityEngine_Vector2_point__UnityEngine_Transform_elementTransform__UnityEngine_Canvas_canvas = 42904256; // UnityEngine.Vector2 PixelAdjustPoint(UnityEngine.Vector2 point, UnityEngine.Transform elementTransform, UnityEngine.Canvas canvas)
constexpr auto PixelAdjustRect_UnityEngine_RectTransform_rectTransform__UnityEngine_Canvas_canvas = 42904496; // UnityEngine.Rect PixelAdjustRect(UnityEngine.RectTransform rectTransform, UnityEngine.Canvas canvas)
constexpr auto PointInRectangle_UnityEngine_Vector2_screenPoint__UnityEngine_RectTransform_rect__UnityEngine_Camera_cam__UnityEngine_Vector4_offset = 42904752; // System.Boolean PointInRectangle(UnityEngine.Vector2 screenPoint, UnityEngine.RectTransform rect, UnityEngine.Camera cam, UnityEngine.Vector4 offset)
constexpr auto RectangleContainsScreenPoint_UnityEngine_RectTransform_rect__UnityEngine_Vector2_screenPoint__UnityEngine_Camera_cam = 42905120; // System.Boolean RectangleContainsScreenPoint(UnityEngine.RectTransform rect, UnityEngine.Vector2 screenPoint, UnityEngine.Camera cam)
constexpr auto RectangleContainsScreenPoint_UnityEngine_RectTransform_rect__UnityEngine_Vector2_screenPoint__UnityEngine_Camera_cam__UnityEngine_Vector4_offset = 42904896; // System.Boolean RectangleContainsScreenPoint(UnityEngine.RectTransform rect, UnityEngine.Vector2 screenPoint, UnityEngine.Camera cam, UnityEngine.Vector4 offset)
constexpr auto ScreenPointToWorldPointInRectangle_UnityEngine_RectTransform_rect__UnityEngine_Vector2_screenPoint__UnityEngine_Camera_cam__out_UnityEngine_Vector3_worldPoint = 42906128; // System.Boolean ScreenPointToWorldPointInRectangle(UnityEngine.RectTransform rect, UnityEngine.Vector2 screenPoint, UnityEngine.Camera cam, out UnityEngine.Vector3 worldPoint)
constexpr auto ScreenPointToLocalPointInRectangle_UnityEngine_RectTransform_rect__UnityEngine_Vector2_screenPoint__UnityEngine_Camera_cam__out_UnityEngine_Vector2_localPoint = 42905440; // System.Boolean ScreenPointToLocalPointInRectangle(UnityEngine.RectTransform rect, UnityEngine.Vector2 screenPoint, UnityEngine.Camera cam, out UnityEngine.Vector2 localPoint)
constexpr auto ScreenPointToRay_UnityEngine_Camera_cam__UnityEngine_Vector2_screenPos = 42905728; // UnityEngine.Ray ScreenPointToRay(UnityEngine.Camera cam, UnityEngine.Vector2 screenPos)
constexpr auto WorldToScreenPoint_UnityEngine_Camera_cam__UnityEngine_Vector3_worldPoint = 42907360; // UnityEngine.Vector2 WorldToScreenPoint(UnityEngine.Camera cam, UnityEngine.Vector3 worldPoint)
constexpr auto FlipLayoutOnAxis_UnityEngine_RectTransform_rect__System_Int32_axis__System_Boolean_keepPositioning__System_Boolean_recursive = 42902752; // System.Void FlipLayoutOnAxis(UnityEngine.RectTransform rect, System.Int32 axis, System.Boolean keepPositioning, System.Boolean recursive)
constexpr auto FlipLayoutAxes_UnityEngine_RectTransform_rect__System_Boolean_keepPositioning__System_Boolean_recursive = 42902144; // System.Void FlipLayoutAxes(UnityEngine.RectTransform rect, System.Boolean keepPositioning, System.Boolean recursive)
constexpr auto GetTransposed_UnityEngine_Vector2_input = 42904112; // UnityEngine.Vector2 GetTransposed(UnityEngine.Vector2 input)
constexpr auto _cctor = 42907584; // System.Void .cctor()
constexpr auto PixelAdjustPoint_Injected_UnityEngine_Vector2_point__UnityEngine_Transform_elementTransform__UnityEngine_Canvas_canvas__out_UnityEngine_Vector2_ret = 42904144; // System.Void PixelAdjustPoint_Injected(UnityEngine.Vector2 point, UnityEngine.Transform elementTransform, UnityEngine.Canvas canvas, out UnityEngine.Vector2 ret)
constexpr auto PixelAdjustRect_Injected_UnityEngine_RectTransform_rectTransform__UnityEngine_Canvas_canvas__out_UnityEngine_Rect_ret = 42904400; // System.Void PixelAdjustRect_Injected(UnityEngine.RectTransform rectTransform, UnityEngine.Canvas canvas, out UnityEngine.Rect ret)
constexpr auto PointInRectangle_Injected_UnityEngine_Vector2_screenPoint__UnityEngine_RectTransform_rect__UnityEngine_Camera_cam__UnityEngine_Vector4_offset = 42904640; // System.Boolean PointInRectangle_Injected(UnityEngine.Vector2 screenPoint, UnityEngine.RectTransform rect, UnityEngine.Camera cam, UnityEngine.Vector4 offset)
}
}
namespace UnityEngine_CanvasRenderer
{
namespace Fields
{
constexpr auto _isMask_k__BackingField = 0x18; // System.Boolean
}
namespace Methods
{
constexpr auto set_hasPopInstruction_System_Boolean_value = 42899088; // System.Void set_hasPopInstruction(System.Boolean value)
constexpr auto get_materialCount = 42898944; // System.Int32 get_materialCount()
constexpr auto set_materialCount_System_Int32_value = 42899168; // System.Void set_materialCount(System.Int32 value)
constexpr auto set_popMaterialCount_System_Int32_value = 42899232; // System.Void set_popMaterialCount(System.Int32 value)
constexpr auto get_absoluteDepth = 42898752; // System.Int32 get_absoluteDepth()
constexpr auto get_hasMoved = 42898880; // System.Boolean get_hasMoved()
constexpr auto get_cull = 42898816; // System.Boolean get_cull()
constexpr auto set_cull_System_Boolean_value = 42899008; // System.Void set_cull(System.Boolean value)
constexpr auto SetColor_UnityEngine_Color_color = 42897760; // System.Void SetColor(UnityEngine.Color color)
constexpr auto GetColor = 42897232; // UnityEngine.Color GetColor()
constexpr auto EnableRectClipping_UnityEngine_Rect_rect = 42897072; // System.Void EnableRectClipping(UnityEngine.Rect rect)
constexpr auto DisableRectClipping = 42896928; // System.Void DisableRectClipping()
constexpr auto SetMaterial_UnityEngine_Material_material__System_Int32_index = 42898112; // System.Void SetMaterial(UnityEngine.Material material, System.Int32 index)
constexpr auto GetMaterial_System_Int32_index = 42897376; // UnityEngine.Material GetMaterial(System.Int32 index)
constexpr auto SetPopMaterial_UnityEngine_Material_material__System_Int32_index = 42898288; // System.Void SetPopMaterial(UnityEngine.Material material, System.Int32 index)
constexpr auto SetTexture_UnityEngine_Texture_texture = 42898384; // System.Void SetTexture(UnityEngine.Texture texture)
constexpr auto SetAlphaTexture_UnityEngine_Texture_texture = 42897440; // System.Void SetAlphaTexture(UnityEngine.Texture texture)
constexpr auto SetMesh_UnityEngine_Mesh_mesh = 42898208; // System.Void SetMesh(UnityEngine.Mesh mesh)
constexpr auto Clear = 42896752; // System.Void Clear()
constexpr auto SetAlpha_System_Single_alpha = 42897520; // System.Void SetAlpha(System.Single alpha)
constexpr auto SetMaterial_UnityEngine_Material_material__UnityEngine_Texture_texture = 42897840; // System.Void SetMaterial(UnityEngine.Material material, UnityEngine.Texture texture)
constexpr auto GetMaterial = 42897312; // UnityEngine.Material GetMaterial()
constexpr auto SetColor_Injected_UnityEngine_Color_color = 42897680; // System.Void SetColor_Injected(UnityEngine.Color color)
constexpr auto GetColor_Injected_out_UnityEngine_Color_ret = 42897152; // System.Void GetColor_Injected(out UnityEngine.Color ret)
constexpr auto EnableRectClipping_Injected_UnityEngine_Rect_rect = 42896992; // System.Void EnableRectClipping_Injected(UnityEngine.Rect rect)
}
namespace StaticMethods
{
constexpr auto SplitUIVertexStreams_System_Collections_Generic_List_1_UnityEngine_UIVertex__verts__System_Collections_Generic_List_1_UnityEngine_Vector3__positions__System_Collections_Generic_List_1_UnityEngine_Color32__colors__System_Collections_Generic_List_1_UnityEngine_Vector4__uv0S__System_Collections_Generic_List_1_UnityEngine_Vector4__uv1S__System_Collections_Generic_List_1_UnityEngine_Vector4__uv2S__System_Collections_Generic_List_1_UnityEngine_Vector4__uv3S__System_Collections_Generic_List_1_UnityEngine_Vector3__normals__System_Collections_Generic_List_1_UnityEngine_Vector4__tangents__System_Collections_Generic_List_1_System_Int32__indices = 42898544; // System.Void SplitUIVertexStreams(System.Collections.Generic.List`1<UnityEngine.UIVertex> verts, System.Collections.Generic.List`1<UnityEngine.Vector3> positions, System.Collections.Generic.List`1<UnityEngine.Color32> colors, System.Collections.Generic.List`1<UnityEngine.Vector4> uv0S, System.Collections.Generic.List`1<UnityEngine.Vector4> uv1S, System.Collections.Generic.List`1<UnityEngine.Vector4> uv2S, System.Collections.Generic.List`1<UnityEngine.Vector4> uv3S, System.Collections.Generic.List`1<UnityEngine.Vector3> normals, System.Collections.Generic.List`1<UnityEngine.Vector4> tangents, System.Collections.Generic.List`1<System.Int32> indices)
constexpr auto CreateUIVertexStream_System_Collections_Generic_List_1_UnityEngine_UIVertex__verts__System_Collections_Generic_List_1_UnityEngine_Vector3__positions__System_Collections_Generic_List_1_UnityEngine_Color32__colors__System_Collections_Generic_List_1_UnityEngine_Vector4__uv0S__System_Collections_Generic_List_1_UnityEngine_Vector4__uv1S__System_Collections_Generic_List_1_UnityEngine_Vector4__uv2S__System_Collections_Generic_List_1_UnityEngine_Vector4__uv3S__System_Collections_Generic_List_1_UnityEngine_Vector3__normals__System_Collections_Generic_List_1_UnityEngine_Vector4__tangents__System_Collections_Generic_List_1_System_Int32__indices = 42896816; // System.Void CreateUIVertexStream(System.Collections.Generic.List`1<UnityEngine.UIVertex> verts, System.Collections.Generic.List`1<UnityEngine.Vector3> positions, System.Collections.Generic.List`1<UnityEngine.Color32> colors, System.Collections.Generic.List`1<UnityEngine.Vector4> uv0S, System.Collections.Generic.List`1<UnityEngine.Vector4> uv1S, System.Collections.Generic.List`1<UnityEngine.Vector4> uv2S, System.Collections.Generic.List`1<UnityEngine.Vector4> uv3S, System.Collections.Generic.List`1<UnityEngine.Vector3> normals, System.Collections.Generic.List`1<UnityEngine.Vector4> tangents, System.Collections.Generic.List`1<System.Int32> indices)
constexpr auto AddUIVertexStream_System_Collections_Generic_List_1_UnityEngine_UIVertex__verts__System_Collections_Generic_List_1_UnityEngine_Vector3__positions__System_Collections_Generic_List_1_UnityEngine_Color32__colors__System_Collections_Generic_List_1_UnityEngine_Vector4__uv0S__System_Collections_Generic_List_1_UnityEngine_Vector4__uv1S__System_Collections_Generic_List_1_UnityEngine_Vector4__uv2S__System_Collections_Generic_List_1_UnityEngine_Vector4__uv3S__System_Collections_Generic_List_1_UnityEngine_Vector3__normals__System_Collections_Generic_List_1_UnityEngine_Vector4__tangents = 42896640; // System.Void AddUIVertexStream(System.Collections.Generic.List`1<UnityEngine.UIVertex> verts, System.Collections.Generic.List`1<UnityEngine.Vector3> positions, System.Collections.Generic.List`1<UnityEngine.Color32> colors, System.Collections.Generic.List`1<UnityEngine.Vector4> uv0S, System.Collections.Generic.List`1<UnityEngine.Vector4> uv1S, System.Collections.Generic.List`1<UnityEngine.Vector4> uv2S, System.Collections.Generic.List`1<UnityEngine.Vector4> uv3S, System.Collections.Generic.List`1<UnityEngine.Vector3> normals, System.Collections.Generic.List`1<UnityEngine.Vector4> tangents)
constexpr auto SplitIndicesStreamsInternal_System_Object_verts__System_Object_indices = 42898464; // System.Void SplitIndicesStreamsInternal(System.Object verts, System.Object indices)
constexpr auto SplitUIVertexStreamsInternal_System_Object_verts__System_Object_positions__System_Object_colors__System_Object_uv0S__System_Object_uv1S__System_Object_uv2S__System_Object_uv3S__System_Object_normals__System_Object_tangents = 42896640; // System.Void SplitUIVertexStreamsInternal(System.Object verts, System.Object positions, System.Object colors, System.Object uv0S, System.Object uv1S, System.Object uv2S, System.Object uv3S, System.Object normals, System.Object tangents)
constexpr auto CreateUIVertexStreamInternal_System_Object_verts__System_Object_positions__System_Object_colors__System_Object_uv0S__System_Object_uv1S__System_Object_uv2S__System_Object_uv3S__System_Object_normals__System_Object_tangents__System_Object_indices = 42896816; // System.Void CreateUIVertexStreamInternal(System.Object verts, System.Object positions, System.Object colors, System.Object uv0S, System.Object uv1S, System.Object uv2S, System.Object uv3S, System.Object normals, System.Object tangents, System.Object indices)
}
}
namespace Commands
{
namespace Methods
{
constexpr auto _ctor = 15150688; // System.Void .ctor()
}
namespace StaticMethods
{
constexpr auto Find_ConsoleSystem_Arg_arg = 15149488; // System.Void Find(ConsoleSystem/Arg arg)
constexpr auto Echo_System_String_fullString = 15149408; // System.Void Echo(System.String fullString)
}
}
namespace UnityEngine_BoxCollider
{
namespace Methods
{
constexpr auto get_center = 42698560; // UnityEngine.Vector3 get_center()
constexpr auto set_center_UnityEngine_Vector3_value = 42698880; // System.Void set_center(UnityEngine.Vector3 value)
constexpr auto get_size = 42698720; // UnityEngine.Vector3 get_size()
constexpr auto set_size_UnityEngine_Vector3_value = 42699040; // System.Void set_size(UnityEngine.Vector3 value)
constexpr auto get_center_Injected_out_UnityEngine_Vector3_ret = 42698480; // System.Void get_center_Injected(out UnityEngine.Vector3 ret)
constexpr auto set_center_Injected_UnityEngine_Vector3_value = 42698800; // System.Void set_center_Injected(UnityEngine.Vector3 value)
constexpr auto get_size_Injected_out_UnityEngine_Vector3_ret = 42698640; // System.Void get_size_Injected(out UnityEngine.Vector3 ret)
constexpr auto set_size_Injected_UnityEngine_Vector3_value = 42698960; // System.Void set_size_Injected(UnityEngine.Vector3 value)
}
}
namespace UnityEngine_CapsuleCollider
{
namespace Methods
{
constexpr auto get_center = 42699200; // UnityEngine.Vector3 get_center()
constexpr auto set_center_UnityEngine_Vector3_value = 42699552; // System.Void set_center(UnityEngine.Vector3 value)
constexpr auto get_radius = 42699408; // System.Single get_radius()
constexpr auto set_radius_System_Single_value = 42699776; // System.Void set_radius(System.Single value)
constexpr auto get_height = 42699344; // System.Single get_height()
constexpr auto set_height_System_Single_value = 42699696; // System.Void set_height(System.Single value)
constexpr auto get_direction = 42699280; // System.Int32 get_direction()
constexpr auto set_direction_System_Int32_value = 42699632; // System.Void set_direction(System.Int32 value)
constexpr auto get_center_Injected_out_UnityEngine_Vector3_ret = 42699120; // System.Void get_center_Injected(out UnityEngine.Vector3 ret)
constexpr auto set_center_Injected_UnityEngine_Vector3_value = 42699472; // System.Void set_center_Injected(UnityEngine.Vector3 value)
}
}
namespace UnityEngine_Physics
{
namespace StaticFields
{
constexpr auto ContactModifyEvent = 0x0; // System.Action`2
constexpr auto ContactModifyEventCCD = 0x8; // System.Action`2
}
namespace StaticMethods
{
constexpr auto OnSceneContactModify_UnityEngine_PhysicsScene_scene__System_IntPtr_buffer__System_Int32_count__System_Boolean_isCCD = 42716768; // System.Void OnSceneContactModify(UnityEngine.PhysicsScene scene, System.IntPtr buffer, System.Int32 count, System.Boolean isCCD)
constexpr auto get_gravity = 42732112; // UnityEngine.Vector3 get_gravity()
constexpr auto get_sleepThreshold = 42732224; // System.Single get_sleepThreshold()
constexpr auto get_queriesHitBackfaces = 42732176; // System.Boolean get_queriesHitBackfaces()
constexpr auto set_queriesHitBackfaces_System_Boolean_value = 42732336; // System.Void set_queriesHitBackfaces(System.Boolean value)
constexpr auto get_defaultPhysicsScene = 42731984; // UnityEngine.PhysicsScene get_defaultPhysicsScene()
constexpr auto IgnoreCollision_UnityEngine_Collider_collider1__UnityEngine_Collider_collider2__System_Boolean_ignore = 42715072; // System.Void IgnoreCollision(UnityEngine.Collider collider1, UnityEngine.Collider collider2, System.Boolean ignore)
constexpr auto Raycast_UnityEngine_Vector3_origin__UnityEngine_Vector3_direction__System_Single_maxDistance__System_Int32_layerMask__UnityEngine_QueryTriggerInteraction_queryTriggerInteraction = 42723392; // System.Boolean Raycast(UnityEngine.Vector3 origin, UnityEngine.Vector3 direction, System.Single maxDistance, System.Int32 layerMask, UnityEngine.QueryTriggerInteraction queryTriggerInteraction)
constexpr auto Raycast_UnityEngine_Vector3_origin__UnityEngine_Vector3_direction__System_Single_maxDistance__System_Int32_layerMask = 42722208; // System.Boolean Raycast(UnityEngine.Vector3 origin, UnityEngine.Vector3 direction, System.Single maxDistance, System.Int32 layerMask)
constexpr auto Raycast_UnityEngine_Vector3_origin__UnityEngine_Vector3_direction__System_Single_maxDistance = 42727520; // System.Boolean Raycast(UnityEngine.Vector3 origin, UnityEngine.Vector3 direction, System.Single maxDistance)
constexpr auto Raycast_UnityEngine_Vector3_origin__UnityEngine_Vector3_direction = 42726304; // System.Boolean Raycast(UnityEngine.Vector3 origin, UnityEngine.Vector3 direction)
constexpr auto Raycast_UnityEngine_Vector3_origin__UnityEngine_Vector3_direction__out_UnityEngine_RaycastHit_hitInfo__System_Single_maxDistance__System_Int32_layerMask__UnityEngine_QueryTriggerInteraction_queryTriggerInteraction = 42726080; // System.Boolean Raycast(UnityEngine.Vector3 origin, UnityEngine.Vector3 direction, out UnityEngine.RaycastHit hitInfo, System.Single maxDistance, System.Int32 layerMask, UnityEngine.QueryTriggerInteraction queryTriggerInteraction)
constexpr auto Raycast_UnityEngine_Vector3_origin__UnityEngine_Vector3_direction__out_UnityEngine_RaycastHit_hitInfo__System_Single_maxDistance__System_Int32_layerMask = 42723840; // System.Boolean Raycast(UnityEngine.Vector3 origin, UnityEngine.Vector3 direction, out UnityEngine.RaycastHit hitInfo, System.Single maxDistance, System.Int32 layerMask)
constexpr auto Raycast_UnityEngine_Vector3_origin__UnityEngine_Vector3_direction__out_UnityEngine_RaycastHit_hitInfo__System_Single_maxDistance = 42721744; // System.Boolean Raycast(UnityEngine.Vector3 origin, UnityEngine.Vector3 direction, out UnityEngine.RaycastHit hitInfo, System.Single maxDistance)
constexpr auto Raycast_UnityEngine_Vector3_origin__UnityEngine_Vector3_direction__out_UnityEngine_RaycastHit_hitInfo = 42722656; // System.Boolean Raycast(UnityEngine.Vector3 origin, UnityEngine.Vector3 direction, out UnityEngine.RaycastHit hitInfo)
constexpr auto Raycast_UnityEngine_Ray_ray__System_Single_maxDistance__System_Int32_layerMask__UnityEngine_QueryTriggerInteraction_queryTriggerInteraction = 42725584; // System.Boolean Raycast(UnityEngine.Ray ray, System.Single maxDistance, System.Int32 layerMask, UnityEngine.QueryTriggerInteraction queryTriggerInteraction)
constexpr auto Raycast_UnityEngine_Ray_ray__System_Single_maxDistance__System_Int32_layerMask = 42724064; // System.Boolean Raycast(UnityEngine.Ray ray, System.Single maxDistance, System.Int32 layerMask)
constexpr auto Raycast_UnityEngine_Ray_ray__System_Single_maxDistance = 42724560; // System.Boolean Raycast(UnityEngine.Ray ray, System.Single maxDistance)
constexpr auto Raycast_UnityEngine_Ray_ray = 42727952; // System.Boolean Raycast(UnityEngine.Ray ray)
constexpr auto Raycast_UnityEngine_Ray_ray__out_UnityEngine_RaycastHit_hitInfo__System_Single_maxDistance__System_Int32_layerMask__UnityEngine_QueryTriggerInteraction_queryTriggerInteraction = 42727248; // System.Boolean Raycast(UnityEngine.Ray ray, out UnityEngine.RaycastHit hitInfo, System.Single maxDistance, System.Int32 layerMask, UnityEngine.QueryTriggerInteraction queryTriggerInteraction)
constexpr auto Raycast_UnityEngine_Ray_ray__out_UnityEngine_RaycastHit_hitInfo__System_Single_maxDistance__System_Int32_layerMask = 42723120; // System.Boolean Raycast(UnityEngine.Ray ray, out UnityEngine.RaycastHit hitInfo, System.Single maxDistance, System.Int32 layerMask)
constexpr auto Raycast_UnityEngine_Ray_ray__out_UnityEngine_RaycastHit_hitInfo__System_Single_maxDistance = 42725056; // System.Boolean Raycast(UnityEngine.Ray ray, out UnityEngine.RaycastHit hitInfo, System.Single maxDistance)
constexpr auto Raycast_UnityEngine_Ray_ray__out_UnityEngine_RaycastHit_hitInfo = 42726736; // System.Boolean Raycast(UnityEngine.Ray ray, out UnityEngine.RaycastHit hitInfo)
constexpr auto Linecast_UnityEngine_Vector3_start__UnityEngine_Vector3_end__System_Int32_layerMask__UnityEngine_QueryTriggerInteraction_queryTriggerInteraction = 42715808; // System.Boolean Linecast(UnityEngine.Vector3 start, UnityEngine.Vector3 end, System.Int32 layerMask, UnityEngine.QueryTriggerInteraction queryTriggerInteraction)
constexpr auto Linecast_UnityEngine_Vector3_start__UnityEngine_Vector3_end__out_UnityEngine_RaycastHit_hitInfo__System_Int32_layerMask__UnityEngine_QueryTriggerInteraction_queryTriggerInteraction = 42715392; // System.Boolean Linecast(UnityEngine.Vector3 start, UnityEngine.Vector3 end, out UnityEngine.RaycastHit hitInfo, System.Int32 layerMask, UnityEngine.QueryTriggerInteraction queryTriggerInteraction)
constexpr auto Linecast_UnityEngine_Vector3_start__UnityEngine_Vector3_end__out_UnityEngine_RaycastHit_hitInfo__System_Int32_layerMask = 42716352; // System.Boolean Linecast(UnityEngine.Vector3 start, UnityEngine.Vector3 end, out UnityEngine.RaycastHit hitInfo, System.Int32 layerMask)
constexpr auto CapsuleCast_UnityEngine_Vector3_point1__UnityEngine_Vector3_point2__System_Single_radius__UnityEngine_Vector3_direction__out_UnityEngine_RaycastHit_hitInfo__System_Single_maxDistance__System_Int32_layerMask__UnityEngine_QueryTriggerInteraction_queryTriggerInteraction = 42713088; // System.Boolean CapsuleCast(UnityEngine.Vector3 point1, UnityEngine.Vector3 point2, System.Single radius, UnityEngine.Vector3 direction, out UnityEngine.RaycastHit hitInfo, System.Single maxDistance, System.Int32 layerMask, UnityEngine.QueryTriggerInteraction queryTriggerInteraction)
constexpr auto CapsuleCast_UnityEngine_Vector3_point1__UnityEngine_Vector3_point2__System_Single_radius__UnityEngine_Vector3_direction__out_UnityEngine_RaycastHit_hitInfo__System_Single_maxDistance__System_Int32_layerMask = 42712816; // System.Boolean CapsuleCast(UnityEngine.Vector3 point1, UnityEngine.Vector3 point2, System.Single radius, UnityEngine.Vector3 direction, out UnityEngine.RaycastHit hitInfo, System.Single maxDistance, System.Int32 layerMask)
constexpr auto SphereCast_UnityEngine_Vector3_origin__System_Single_radius__UnityEngine_Vector3_direction__out_UnityEngine_RaycastHit_hitInfo__System_Single_maxDistance__System_Int32_layerMask__UnityEngine_QueryTriggerInteraction_queryTriggerInteraction = 42731216; // System.Boolean SphereCast(UnityEngine.Vector3 origin, System.Single radius, UnityEngine.Vector3 direction, out UnityEngine.RaycastHit hitInfo, System.Single maxDistance, System.Int32 layerMask, UnityEngine.QueryTriggerInteraction queryTriggerInteraction)
constexpr auto SphereCast_UnityEngine_Vector3_origin__System_Single_radius__UnityEngine_Vector3_direction__out_UnityEngine_RaycastHit_hitInfo__System_Single_maxDistance__System_Int32_layerMask = 42730240; // System.Boolean SphereCast(UnityEngine.Vector3 origin, System.Single radius, UnityEngine.Vector3 direction, out UnityEngine.RaycastHit hitInfo, System.Single maxDistance, System.Int32 layerMask)
constexpr auto SphereCast_UnityEngine_Ray_ray__System_Single_radius__System_Single_maxDistance__System_Int32_layerMask__UnityEngine_QueryTriggerInteraction_queryTriggerInteraction = 42730544; // System.Boolean SphereCast(UnityEngine.Ray ray, System.Single radius, System.Single maxDistance, System.Int32 layerMask, UnityEngine.QueryTriggerInteraction queryTriggerInteraction)
constexpr auto SphereCast_UnityEngine_Ray_ray__System_Single_radius__System_Single_maxDistance__System_Int32_layerMask = 42730864; // System.Boolean SphereCast(UnityEngine.Ray ray, System.Single radius, System.Single maxDistance, System.Int32 layerMask)
constexpr auto SphereCast_UnityEngine_Ray_ray__System_Single_radius__out_UnityEngine_RaycastHit_hitInfo__System_Single_maxDistance__System_Int32_layerMask__UnityEngine_QueryTriggerInteraction_queryTriggerInteraction = 42731456; // System.Boolean SphereCast(UnityEngine.Ray ray, System.Single radius, out UnityEngine.RaycastHit hitInfo, System.Single maxDistance, System.Int32 layerMask, UnityEngine.QueryTriggerInteraction queryTriggerInteraction)
constexpr auto SphereCast_UnityEngine_Ray_ray__System_Single_radius__out_UnityEngine_RaycastHit_hitInfo__System_Single_maxDistance__System_Int32_layerMask = 42731760; // System.Boolean SphereCast(UnityEngine.Ray ray, System.Single radius, out UnityEngine.RaycastHit hitInfo, System.Single maxDistance, System.Int32 layerMask)
constexpr auto SphereCast_UnityEngine_Ray_ray__System_Single_radius__out_UnityEngine_RaycastHit_hitInfo__System_Single_maxDistance = 42730480; // System.Boolean SphereCast(UnityEngine.Ray ray, System.Single radius, out UnityEngine.RaycastHit hitInfo, System.Single maxDistance)
constexpr auto BoxCast_UnityEngine_Vector3_center__UnityEngine_Vector3_halfExtents__UnityEngine_Vector3_direction__out_UnityEngine_RaycastHit_hitInfo__UnityEngine_Quaternion_orientation__System_Single_maxDistance__System_Int32_layerMask__UnityEngine_QueryTriggerInteraction_queryTriggerInteraction = 42711856; // System.Boolean BoxCast(UnityEngine.Vector3 center, UnityEngine.Vector3 halfExtents, UnityEngine.Vector3 direction, out UnityEngine.RaycastHit hitInfo, UnityEngine.Quaternion orientation, System.Single maxDistance, System.Int32 layerMask, UnityEngine.QueryTriggerInteraction queryTriggerInteraction)
constexpr auto BoxCast_UnityEngine_Vector3_center__UnityEngine_Vector3_halfExtents__UnityEngine_Vector3_direction__out_UnityEngine_RaycastHit_hitInfo__UnityEngine_Quaternion_orientation__System_Single_maxDistance__System_Int32_layerMask = 42711328; // System.Boolean BoxCast(UnityEngine.Vector3 center, UnityEngine.Vector3 halfExtents, UnityEngine.Vector3 direction, out UnityEngine.RaycastHit hitInfo, UnityEngine.Quaternion orientation, System.Single maxDistance, System.Int32 layerMask)
constexpr auto Internal_RaycastAll_UnityEngine_PhysicsScene_physicsScene__UnityEngine_Ray_ray__System_Single_maxDistance__System_Int32_mask__UnityEngine_QueryTriggerInteraction_queryTriggerInteraction = 42715280; // UnityEngine.RaycastHit[] Internal_RaycastAll(UnityEngine.PhysicsScene physicsScene, UnityEngine.Ray ray, System.Single maxDistance, System.Int32 mask, UnityEngine.QueryTriggerInteraction queryTriggerInteraction)
constexpr auto RaycastAll_UnityEngine_Vector3_origin__UnityEngine_Vector3_direction__System_Single_maxDistance__System_Int32_layerMask__UnityEngine_QueryTriggerInteraction_queryTriggerInteraction = 42718944; // UnityEngine.RaycastHit[] RaycastAll(UnityEngine.Vector3 origin, UnityEngine.Vector3 direction, System.Single maxDistance, System.Int32 layerMask, UnityEngine.QueryTriggerInteraction queryTriggerInteraction)
constexpr auto RaycastAll_UnityEngine_Vector3_origin__UnityEngine_Vector3_direction__System_Single_maxDistance__System_Int32_layerMask = 42718864; // UnityEngine.RaycastHit[] RaycastAll(UnityEngine.Vector3 origin, UnityEngine.Vector3 direction, System.Single maxDistance, System.Int32 layerMask)
constexpr auto RaycastAll_UnityEngine_Vector3_origin__UnityEngine_Vector3_direction__System_Single_maxDistance = 42719504; // UnityEngine.RaycastHit[] RaycastAll(UnityEngine.Vector3 origin, UnityEngine.Vector3 direction, System.Single maxDistance)
constexpr auto RaycastAll_UnityEngine_Vector3_origin__UnityEngine_Vector3_direction = 42719584; // UnityEngine.RaycastHit[] RaycastAll(UnityEngine.Vector3 origin, UnityEngine.Vector3 direction)
constexpr auto RaycastAll_UnityEngine_Ray_ray__System_Single_maxDistance__System_Int32_layerMask__UnityEngine_QueryTriggerInteraction_queryTriggerInteraction = 42719328; // UnityEngine.RaycastHit[] RaycastAll(UnityEngine.Ray ray, System.Single maxDistance, System.Int32 layerMask, UnityEngine.QueryTriggerInteraction queryTriggerInteraction)
constexpr auto RaycastAll_UnityEngine_Ray_ray__System_Single_maxDistance__System_Int32_layerMask = 42718704; // UnityEngine.RaycastHit[] RaycastAll(UnityEngine.Ray ray, System.Single maxDistance, System.Int32 layerMask)
constexpr auto RaycastAll_UnityEngine_Ray_ray__System_Single_maxDistance = 42718544; // UnityEngine.RaycastHit[] RaycastAll(UnityEngine.Ray ray, System.Single maxDistance)
constexpr auto RaycastAll_UnityEngine_Ray_ray = 42719680; // UnityEngine.RaycastHit[] RaycastAll(UnityEngine.Ray ray)
constexpr auto RaycastNonAlloc_UnityEngine_Ray_ray__UnityEngine_RaycastHit___results__System_Single_maxDistance__System_Int32_layerMask__UnityEngine_QueryTriggerInteraction_queryTriggerInteraction = 42721040; // System.Int32 RaycastNonAlloc(UnityEngine.Ray ray, UnityEngine.RaycastHit[] results, System.Single maxDistance, System.Int32 layerMask, UnityEngine.QueryTriggerInteraction queryTriggerInteraction)
constexpr auto RaycastNonAlloc_UnityEngine_Ray_ray__UnityEngine_RaycastHit___results__System_Single_maxDistance__System_Int32_layerMask = 42720336; // System.Int32 RaycastNonAlloc(UnityEngine.Ray ray, UnityEngine.RaycastHit[] results, System.Single maxDistance, System.Int32 layerMask)
constexpr auto RaycastNonAlloc_UnityEngine_Ray_ray__UnityEngine_RaycastHit___results__System_Single_maxDistance = 42719824; // System.Int32 RaycastNonAlloc(UnityEngine.Ray ray, UnityEngine.RaycastHit[] results, System.Single maxDistance)
constexpr auto RaycastNonAlloc_UnityEngine_Ray_ray__UnityEngine_RaycastHit___results = 42720080; // System.Int32 RaycastNonAlloc(UnityEngine.Ray ray, UnityEngine.RaycastHit[] results)
constexpr auto RaycastNonAlloc_UnityEngine_Vector3_origin__UnityEngine_Vector3_direction__UnityEngine_RaycastHit___results__System_Single_maxDistance__System_Int32_layerMask__UnityEngine_QueryTriggerInteraction_queryTriggerInteraction = 42721312; // System.Int32 RaycastNonAlloc(UnityEngine.Vector3 origin, UnityEngine.Vector3 direction, UnityEngine.RaycastHit[] results, System.Single maxDistance, System.Int32 layerMask, UnityEngine.QueryTriggerInteraction queryTriggerInteraction)
constexpr auto RaycastNonAlloc_UnityEngine_Vector3_origin__UnityEngine_Vector3_direction__UnityEngine_RaycastHit___results__System_Single_maxDistance__System_Int32_layerMask = 42720816; // System.Int32 RaycastNonAlloc(UnityEngine.Vector3 origin, UnityEngine.Vector3 direction, UnityEngine.RaycastHit[] results, System.Single maxDistance, System.Int32 layerMask)
constexpr auto RaycastNonAlloc_UnityEngine_Vector3_origin__UnityEngine_Vector3_direction__UnityEngine_RaycastHit___results__System_Single_maxDistance = 42720608; // System.Int32 RaycastNonAlloc(UnityEngine.Vector3 origin, UnityEngine.Vector3 direction, UnityEngine.RaycastHit[] results, System.Single maxDistance)
constexpr auto RaycastNonAlloc_UnityEngine_Vector3_origin__UnityEngine_Vector3_direction__UnityEngine_RaycastHit___results = 42721536; // System.Int32 RaycastNonAlloc(UnityEngine.Vector3 origin, UnityEngine.Vector3 direction, UnityEngine.RaycastHit[] results)
constexpr auto Query_SphereCastAll_UnityEngine_PhysicsScene_physicsScene__UnityEngine_Vector3_origin__System_Single_radius__UnityEngine_Vector3_direction__System_Single_maxDistance__System_Int32_mask__UnityEngine_QueryTriggerInteraction_queryTriggerInteraction = 42718416; // UnityEngine.RaycastHit[] Query_SphereCastAll(UnityEngine.PhysicsScene physicsScene, UnityEngine.Vector3 origin, System.Single radius, UnityEngine.Vector3 direction, System.Single maxDistance, System.Int32 mask, UnityEngine.QueryTriggerInteraction queryTriggerInteraction)
constexpr auto SphereCastAll_UnityEngine_Vector3_origin__System_Single_radius__UnityEngine_Vector3_direction__System_Single_maxDistance__System_Int32_layerMask__UnityEngine_QueryTriggerInteraction_queryTriggerInteraction = 42728976; // UnityEngine.RaycastHit[] SphereCastAll(UnityEngine.Vector3 origin, System.Single radius, UnityEngine.Vector3 direction, System.Single maxDistance, System.Int32 layerMask, UnityEngine.QueryTriggerInteraction queryTriggerInteraction)
constexpr auto SphereCastAll_UnityEngine_Ray_ray__System_Single_radius__System_Single_maxDistance__System_Int32_layerMask__UnityEngine_QueryTriggerInteraction_queryTriggerInteraction = 42728432; // UnityEngine.RaycastHit[] SphereCastAll(UnityEngine.Ray ray, System.Single radius, System.Single maxDistance, System.Int32 layerMask, UnityEngine.QueryTriggerInteraction queryTriggerInteraction)
constexpr auto SyncTransforms = 42731824; // System.Void SyncTransforms()
constexpr auto get_autoSyncTransforms = 42731872; // System.Boolean get_autoSyncTransforms()
constexpr auto set_autoSyncTransforms_System_Boolean_value = 42732272; // System.Void set_autoSyncTransforms(System.Boolean value)
constexpr auto OverlapSphereNonAlloc_UnityEngine_Vector3_position__System_Single_radius__UnityEngine_Collider___results__System_Int32_layerMask__UnityEngine_QueryTriggerInteraction_queryTriggerInteraction = 42718112; // System.Int32 OverlapSphereNonAlloc(UnityEngine.Vector3 position, System.Single radius, UnityEngine.Collider[] results, System.Int32 layerMask, UnityEngine.QueryTriggerInteraction queryTriggerInteraction)
constexpr auto CheckSphere_Internal_UnityEngine_PhysicsScene_physicsScene__UnityEngine_Vector3_position__System_Single_radius__System_Int32_layerMask__UnityEngine_QueryTriggerInteraction_queryTriggerInteraction = 42714592; // System.Boolean CheckSphere_Internal(UnityEngine.PhysicsScene physicsScene, UnityEngine.Vector3 position, System.Single radius, System.Int32 layerMask, UnityEngine.QueryTriggerInteraction queryTriggerInteraction)
constexpr auto CheckSphere_UnityEngine_Vector3_position__System_Single_radius__System_Int32_layerMask__UnityEngine_QueryTriggerInteraction_queryTriggerInteraction = 42714704; // System.Boolean CheckSphere(UnityEngine.Vector3 position, System.Single radius, System.Int32 layerMask, UnityEngine.QueryTriggerInteraction queryTriggerInteraction)
constexpr auto CheckSphere_UnityEngine_Vector3_position__System_Single_radius__System_Int32_layerMask = 42714896; // System.Boolean CheckSphere(UnityEngine.Vector3 position, System.Single radius, System.Int32 layerMask)
constexpr auto CapsuleCastNonAlloc_UnityEngine_Vector3_point1__UnityEngine_Vector3_point2__System_Single_radius__UnityEngine_Vector3_direction__UnityEngine_RaycastHit___results__System_Single_maxDistance__System_Int32_layerMask__UnityEngine_QueryTriggerInteraction_queryTriggerInteraction = 42712384; // System.Int32 CapsuleCastNonAlloc(UnityEngine.Vector3 point1, UnityEngine.Vector3 point2, System.Single radius, UnityEngine.Vector3 direction, UnityEngine.RaycastHit[] results, System.Single maxDistance, System.Int32 layerMask, UnityEngine.QueryTriggerInteraction queryTriggerInteraction)
constexpr auto SphereCastNonAlloc_UnityEngine_Vector3_origin__System_Single_radius__UnityEngine_Vector3_direction__UnityEngine_RaycastHit___results__System_Single_maxDistance__System_Int32_layerMask__UnityEngine_QueryTriggerInteraction_queryTriggerInteraction = 42729360; // System.Int32 SphereCastNonAlloc(UnityEngine.Vector3 origin, System.Single radius, UnityEngine.Vector3 direction, UnityEngine.RaycastHit[] results, System.Single maxDistance, System.Int32 layerMask, UnityEngine.QueryTriggerInteraction queryTriggerInteraction)
constexpr auto SphereCastNonAlloc_UnityEngine_Ray_ray__System_Single_radius__UnityEngine_RaycastHit___results__System_Single_maxDistance__System_Int32_layerMask__UnityEngine_QueryTriggerInteraction_queryTriggerInteraction = 42729744; // System.Int32 SphereCastNonAlloc(UnityEngine.Ray ray, System.Single radius, UnityEngine.RaycastHit[] results, System.Single maxDistance, System.Int32 layerMask, UnityEngine.QueryTriggerInteraction queryTriggerInteraction)
constexpr auto CheckCapsule_Internal_UnityEngine_PhysicsScene_physicsScene__UnityEngine_Vector3_start__UnityEngine_Vector3_end__System_Single_radius__System_Int32_layerMask__UnityEngine_QueryTriggerInteraction_queryTriggerInteraction = 42713920; // System.Boolean CheckCapsule_Internal(UnityEngine.PhysicsScene physicsScene, UnityEngine.Vector3 start, UnityEngine.Vector3 end, System.Single radius, System.Int32 layerMask, UnityEngine.QueryTriggerInteraction queryTriggerInteraction)
constexpr auto CheckCapsule_UnityEngine_Vector3_start__UnityEngine_Vector3_end__System_Single_radius__System_Int32_layerMask__UnityEngine_QueryTriggerInteraction_queryTriggerInteraction = 42714256; // System.Boolean CheckCapsule(UnityEngine.Vector3 start, UnityEngine.Vector3 end, System.Single radius, System.Int32 layerMask, UnityEngine.QueryTriggerInteraction queryTriggerInteraction)
constexpr auto CheckCapsule_UnityEngine_Vector3_start__UnityEngine_Vector3_end__System_Single_radius__System_Int32_layerMask = 42714032; // System.Boolean CheckCapsule(UnityEngine.Vector3 start, UnityEngine.Vector3 end, System.Single radius, System.Int32 layerMask)
constexpr auto CheckBox_Internal_UnityEngine_PhysicsScene_physicsScene__UnityEngine_Vector3_center__UnityEngine_Vector3_halfExtents__UnityEngine_Quaternion_orientation__System_Int32_layermask__UnityEngine_QueryTriggerInteraction_queryTriggerInteraction = 42713472; // System.Boolean CheckBox_Internal(UnityEngine.PhysicsScene physicsScene, UnityEngine.Vector3 center, UnityEngine.Vector3 halfExtents, UnityEngine.Quaternion orientation, System.Int32 layermask, UnityEngine.QueryTriggerInteraction queryTriggerInteraction)
constexpr auto CheckBox_UnityEngine_Vector3_center__UnityEngine_Vector3_halfExtents__UnityEngine_Quaternion_orientation__System_Int32_layermask__UnityEngine_QueryTriggerInteraction_queryTriggerInteraction = 42713584; // System.Boolean CheckBox(UnityEngine.Vector3 center, UnityEngine.Vector3 halfExtents, UnityEngine.Quaternion orientation, System.Int32 layermask, UnityEngine.QueryTriggerInteraction queryTriggerInteraction)
constexpr auto OverlapBox_Internal_UnityEngine_PhysicsScene_physicsScene__UnityEngine_Vector3_center__UnityEngine_Vector3_halfExtents__UnityEngine_Quaternion_orientation__System_Int32_layerMask__UnityEngine_QueryTriggerInteraction_queryTriggerInteraction = 42717312; // UnityEngine.Collider[] OverlapBox_Internal(UnityEngine.PhysicsScene physicsScene, UnityEngine.Vector3 center, UnityEngine.Vector3 halfExtents, UnityEngine.Quaternion orientation, System.Int32 layerMask, UnityEngine.QueryTriggerInteraction queryTriggerInteraction)
constexpr auto OverlapBox_UnityEngine_Vector3_center__UnityEngine_Vector3_halfExtents__UnityEngine_Quaternion_orientation__System_Int32_layerMask__UnityEngine_QueryTriggerInteraction_queryTriggerInteraction = 42717424; // UnityEngine.Collider[] OverlapBox(UnityEngine.Vector3 center, UnityEngine.Vector3 halfExtents, UnityEngine.Quaternion orientation, System.Int32 layerMask, UnityEngine.QueryTriggerInteraction queryTriggerInteraction)
constexpr auto OverlapBox_UnityEngine_Vector3_center__UnityEngine_Vector3_halfExtents__UnityEngine_Quaternion_orientation__System_Int32_layerMask = 42717648; // UnityEngine.Collider[] OverlapBox(UnityEngine.Vector3 center, UnityEngine.Vector3 halfExtents, UnityEngine.Quaternion orientation, System.Int32 layerMask)
constexpr auto OverlapBoxNonAlloc_UnityEngine_Vector3_center__UnityEngine_Vector3_halfExtents__UnityEngine_Collider___results__UnityEngine_Quaternion_orientation__System_Int32_mask__UnityEngine_QueryTriggerInteraction_queryTriggerInteraction = 42716960; // System.Int32 OverlapBoxNonAlloc(UnityEngine.Vector3 center, UnityEngine.Vector3 halfExtents, UnityEngine.Collider[] results, UnityEngine.Quaternion orientation, System.Int32 mask, UnityEngine.QueryTriggerInteraction queryTriggerInteraction)
constexpr auto OverlapCapsuleNonAlloc_UnityEngine_Vector3_point0__UnityEngine_Vector3_point1__System_Single_radius__UnityEngine_Collider___results__System_Int32_layerMask__UnityEngine_QueryTriggerInteraction_queryTriggerInteraction = 42717872; // System.Int32 OverlapCapsuleNonAlloc(UnityEngine.Vector3 point0, UnityEngine.Vector3 point1, System.Single radius, UnityEngine.Collider[] results, System.Int32 layerMask, UnityEngine.QueryTriggerInteraction queryTriggerInteraction)
constexpr auto get_gravity_Injected_out_UnityEngine_Vector3_ret = 42732048; // System.Void get_gravity_Injected(out UnityEngine.Vector3 ret)
constexpr auto get_defaultPhysicsScene_Injected_out_UnityEngine_PhysicsScene_ret = 42731920; // System.Void get_defaultPhysicsScene_Injected(out UnityEngine.PhysicsScene ret)
constexpr auto Internal_RaycastAll_Injected_UnityEngine_PhysicsScene_physicsScene__UnityEngine_Ray_ray__System_Single_maxDistance__System_Int32_mask__UnityEngine_QueryTriggerInteraction_queryTriggerInteraction = 42715168; // UnityEngine.RaycastHit[] Internal_RaycastAll_Injected(UnityEngine.PhysicsScene physicsScene, UnityEngine.Ray ray, System.Single maxDistance, System.Int32 mask, UnityEngine.QueryTriggerInteraction queryTriggerInteraction)
constexpr auto Query_SphereCastAll_Injected_UnityEngine_PhysicsScene_physicsScene__UnityEngine_Vector3_origin__System_Single_radius__UnityEngine_Vector3_direction__System_Single_maxDistance__System_Int32_mask__UnityEngine_QueryTriggerInteraction_queryTriggerInteraction = 42718304; // UnityEngine.RaycastHit[] Query_SphereCastAll_Injected(UnityEngine.PhysicsScene physicsScene, UnityEngine.Vector3 origin, System.Single radius, UnityEngine.Vector3 direction, System.Single maxDistance, System.Int32 mask, UnityEngine.QueryTriggerInteraction queryTriggerInteraction)
constexpr auto CheckSphere_Internal_Injected_UnityEngine_PhysicsScene_physicsScene__UnityEngine_Vector3_position__System_Single_radius__System_Int32_layerMask__UnityEngine_QueryTriggerInteraction_queryTriggerInteraction = 42714480; // System.Boolean CheckSphere_Internal_Injected(UnityEngine.PhysicsScene physicsScene, UnityEngine.Vector3 position, System.Single radius, System.Int32 layerMask, UnityEngine.QueryTriggerInteraction queryTriggerInteraction)
constexpr auto CheckCapsule_Internal_Injected_UnityEngine_PhysicsScene_physicsScene__UnityEngine_Vector3_start__UnityEngine_Vector3_end__System_Single_radius__System_Int32_layerMask__UnityEngine_QueryTriggerInteraction_queryTriggerInteraction = 42713808; // System.Boolean CheckCapsule_Internal_Injected(UnityEngine.PhysicsScene physicsScene, UnityEngine.Vector3 start, UnityEngine.Vector3 end, System.Single radius, System.Int32 layerMask, UnityEngine.QueryTriggerInteraction queryTriggerInteraction)
constexpr auto CheckBox_Internal_Injected_UnityEngine_PhysicsScene_physicsScene__UnityEngine_Vector3_center__UnityEngine_Vector3_halfExtents__UnityEngine_Quaternion_orientation__System_Int32_layermask__UnityEngine_QueryTriggerInteraction_queryTriggerInteraction = 42713360; // System.Boolean CheckBox_Internal_Injected(UnityEngine.PhysicsScene physicsScene, UnityEngine.Vector3 center, UnityEngine.Vector3 halfExtents, UnityEngine.Quaternion orientation, System.Int32 layermask, UnityEngine.QueryTriggerInteraction queryTriggerInteraction)
constexpr auto OverlapBox_Internal_Injected_UnityEngine_PhysicsScene_physicsScene__UnityEngine_Vector3_center__UnityEngine_Vector3_halfExtents__UnityEngine_Quaternion_orientation__System_Int32_layerMask__UnityEngine_QueryTriggerInteraction_queryTriggerInteraction = 42717200; // UnityEngine.Collider[] OverlapBox_Internal_Injected(UnityEngine.PhysicsScene physicsScene, UnityEngine.Vector3 center, UnityEngine.Vector3 halfExtents, UnityEngine.Quaternion orientation, System.Int32 layerMask, UnityEngine.QueryTriggerInteraction queryTriggerInteraction)
}
}
namespace Network_Client
{
namespace Fields
{
constexpr auto _Connection_k__BackingField = 0x98; // Network.Connection
constexpr auto _IsPlaying_k__BackingField = 0xa0; // System.Boolean
constexpr auto visibility = 0xa8; // Network.Visibility.Manager
constexpr auto _ConnectedAddress_k__BackingField = 0xb0; // System.String
constexpr auto _ConnectedPort_k__BackingField = 0xb8; // System.Int32
constexpr auto _ServerName_k__BackingField = 0xc0; // System.String
constexpr auto _IsOfficialServer_k__BackingField = 0xc8; // System.Boolean
constexpr auto IncomingStats = 0xd0; // Network.Stats
constexpr auto callbackHandler = 0xd8; // Network.IClientCallback
}
namespace StaticFields
{
constexpr auto MaxReceiveTime = 0x0; // System.Int32
constexpr auto MaxReadQueueLength = 0x4; // System.Int32
constexpr auto MaxWriteQueueLength = 0x8; // System.Int32
constexpr auto MaxDecryptQueueLength = 0xc; // System.Int32
constexpr auto MaxReadQueueBytes = 0x10; // System.Int32
constexpr auto MaxWriteQueueBytes = 0x14; // System.Int32
constexpr auto MaxDecryptQueueBytes = 0x18; // System.Int32
constexpr auto MaxMainThreadWait = 0x1c; // System.Int32
constexpr auto MaxReadThreadWait = 0x20; // System.Int32
constexpr auto MaxWriteThreadWait = 0x24; // System.Int32
constexpr auto MaxDecryptThreadWait = 0x28; // System.Int32
constexpr auto disconnectReason = 0x30; // System.String
}
namespace Methods
{
constexpr auto get_MaxReceiveTimeValue = 15211904; // System.Int32 get_MaxReceiveTimeValue()
constexpr auto get_MaxReadQueueLengthValue = 15211744; // System.Int32 get_MaxReadQueueLengthValue()
constexpr auto get_MaxWriteQueueLengthValue = 15212064; // System.Int32 get_MaxWriteQueueLengthValue()
constexpr auto get_MaxDecryptQueueLengthValue = 15211424; // System.Int32 get_MaxDecryptQueueLengthValue()
constexpr auto get_MaxReadQueueBytesValue = 15211664; // System.Int32 get_MaxReadQueueBytesValue()
constexpr auto get_MaxWriteQueueBytesValue = 15211984; // System.Int32 get_MaxWriteQueueBytesValue()
constexpr auto get_MaxDecryptQueueBytesValue = 15211344; // System.Int32 get_MaxDecryptQueueBytesValue()
constexpr auto get_MaxMainThreadWaitValue = 15211584; // System.Int32 get_MaxMainThreadWaitValue()
constexpr auto get_MaxReadThreadWaitValue = 15211824; // System.Int32 get_MaxReadThreadWaitValue()
constexpr auto get_MaxWriteThreadWaitValue = 15212144; // System.Int32 get_MaxWriteThreadWaitValue()
constexpr auto get_MaxDecryptThreadWaitValue = 15211504; // System.Int32 get_MaxDecryptThreadWaitValue()
constexpr auto get_Connection = 3702864; // Network.Connection get_Connection()
constexpr auto set_Connection_Network_Connection_value = 3703536; // System.Void set_Connection(Network.Connection value)
constexpr auto get_IsPlaying = 3750080; // System.Boolean get_IsPlaying()
constexpr auto get_ConnectedAddress = 3703088; // System.String get_ConnectedAddress()
constexpr auto set_ConnectedAddress_System_String_value = 3703760; // System.Void set_ConnectedAddress(System.String value)
constexpr auto get_ConnectedPort = 3714544; // System.Int32 get_ConnectedPort()
constexpr auto set_ConnectedPort_System_Int32_value = 3715344; // System.Void set_ConnectedPort(System.Int32 value)
constexpr auto get_ServerName = 3703216; // System.String get_ServerName()
constexpr auto set_ServerName_System_String_value = 3703888; // System.Void set_ServerName(System.String value)
constexpr auto get_IsOfficialServer = 15211296; // System.Boolean get_IsOfficialServer()
constexpr auto set_IsOfficialServer_System_Boolean_value = 15212384; // System.Void set_IsOfficialServer(System.Boolean value)
constexpr auto Connect_System_String_strURL__System_Int32_port = 15209744; // System.Boolean Connect(System.String strURL, System.Int32 port)
constexpr auto Flush = 3694560; // System.Void Flush()
constexpr auto Disconnect_System_String_reason__System_Boolean_sendReasonToServer___True = 3694560; // System.Void Disconnect(System.String reason, System.Boolean sendReasonToServer = True)
constexpr auto OnDisconnected_System_String_str = 15210224; // System.Void OnDisconnected(System.String str)
constexpr auto CreateNetworkable_NetworkableId_networkID__System_UInt32_networkGroup = 15209872; // Network.Networkable CreateNetworkable(NetworkableId networkID, System.UInt32 networkGroup)
constexpr auto DestroyNetworkable_Network_Networkable_networkable = 15210064; // System.Void DestroyNetworkable(Network.Networkable networkable)
constexpr auto SetupNetworkable_Network_Networkable_net = 15210416; // System.Void SetupNetworkable(Network.Networkable net)
constexpr auto GetLastPing = 3810400; // System.Int32 GetLastPing()
constexpr auto get_IsRecording = 15211312; // System.Boolean get_IsRecording()
constexpr auto get_RecordFilename = 15212224; // System.String get_RecordFilename()
constexpr auto get_RecordTimeElapsed = 15212256; // System.TimeSpan get_RecordTimeElapsed()
constexpr auto StartRecording_System_String_targetFilename__Network_IDemoHeader_header = 15210464; // System.Boolean StartRecording(System.String targetFilename, Network.IDemoHeader header)
constexpr auto StopRecording = 15210512; // System.Void StopRecording()
constexpr auto _ctor = 15210832; // System.Void .ctor()
}
namespace StaticMethods
{
constexpr auto _cctor = 15210560; // System.Void .cctor()
}
}
namespace Facepunch_Pool
{
namespace StaticFields
{
constexpr auto Directory = 0x0; // System.Collections.Concurrent.ConcurrentDictionary`2
}
namespace StaticMethods
{
constexpr auto System_Void_Facepunch_Pool_FreeList_System_Collections_Generic_KeyValuePair_2_System_Int32Enum__System_Object___System_Collections_Generic_List_1_T__obj = 18863424; // System.Void Facepunch.Pool.FreeList<System.Collections.Generic.KeyValuePair`2<System.Int32Enum, System.Object>>
constexpr auto System_Void_Facepunch_Pool_FreeListAndItems_System_Object__System_Collections_Generic_List_1_T__items = 18857760; // System.Void Facepunch.Pool.FreeListAndItems<System.Object>
constexpr auto FreeMemoryStream_System_IO_MemoryStream_obj = 15803904; // System.Void FreeMemoryStream(System.IO.MemoryStream obj)
constexpr auto System_Void_Facepunch_Pool_Free_System_Object__T_obj = 18870912; // System.Void Facepunch.Pool.Free<System.Object>
constexpr auto System_Void_Facepunch_Pool_FreeDynamic_System_Object__T_obj = 18857056; // System.Void Facepunch.Pool.FreeDynamic<System.Object>
constexpr auto System_Void_Facepunch_Pool_FreeInternal_System_Object__T_obj = 18857632; // System.Void Facepunch.Pool.FreeInternal<System.Object>
constexpr auto T_Facepunch_Pool_Get_System_Object_ = 18874848; // T Facepunch.Pool.Get<System.Object>
constexpr auto System_Collections_Generic_List_1_T__Facepunch_Pool_GetList_System_Collections_Generic_KeyValuePair_2_System_Int32Enum__System_Object__ = 18872688; // System.Collections.Generic.List`1<T> Facepunch.Pool.GetList<System.Collections.Generic.KeyValuePair`2<System.Int32Enum, System.Object>>
constexpr auto System_Void_Facepunch_Pool_ResizeBuffer_System_Object__System_Int32_size = 18874960; // System.Void Facepunch.Pool.ResizeBuffer<System.Object>
constexpr auto System_Void_Facepunch_Pool_FillBuffer_System_Object_ = 18856944; // System.Void Facepunch.Pool.FillBuffer<System.Object>
constexpr auto T___System_Array_Empty_System_Collections_Generic_KeyValuePair_2_System_Int32__System_Int32__ = 3836944; // T[] System.Array.Empty<System.Collections.Generic.KeyValuePair`2<System.Int32, System.Int32>>
constexpr auto T___System_Array_Empty_System_Collections_Generic_KeyValuePair_2_System_Object__System_Object__ = 3836944; // T[] System.Array.Empty<System.Collections.Generic.KeyValuePair`2<System.Object, System.Object>>
constexpr auto T___System_Array_Empty_System_Collections_Generic_KeyValuePair_2_Melanchall_DryWetMidi_Common_SevenBitNumber__System_Object__ = 3836944; // T[] System.Array.Empty<System.Collections.Generic.KeyValuePair`2<Melanchall.DryWetMidi.Common.SevenBitNumber, System.Object>>
constexpr auto T___System_Array_Empty_System_ValueTuple_2_System_IntPtr__System_Object__ = 3836944; // T[] System.Array.Empty<System.ValueTuple`2<System.IntPtr, System.Object>>
constexpr auto T___System_Array_Empty_UnityEngine_Rendering_AsyncGPUReadbackRequest_ = 3836944; // T[] System.Array.Empty<UnityEngine.Rendering.AsyncGPUReadbackRequest>
constexpr auto T___System_Array_Empty_System_Boolean_ = 3836944; // T[] System.Array.Empty<System.Boolean>
constexpr auto T___System_Array_Empty_System_Byte_ = 3836944; // T[] System.Array.Empty<System.Byte>
constexpr auto T___System_Array_Empty_System_Char_ = 3836944; // T[] System.Array.Empty<System.Char>
constexpr auto T___System_Array_Empty_System_Reflection_CustomAttributeNamedArgument_ = 3836944; // T[] System.Array.Empty<System.Reflection.CustomAttributeNamedArgument>
constexpr auto T___System_Array_Empty_System_Reflection_CustomAttributeTypedArgument_ = 3836944; // T[] System.Array.Empty<System.Reflection.CustomAttributeTypedArgument>
constexpr auto T___System_Array_Empty_System_Data_IndexField_ = 3836944; // T[] System.Array.Empty<System.Data.IndexField>
constexpr auto T___System_Array_Empty_System_Int16_ = 3836944; // T[] System.Array.Empty<System.Int16>
constexpr auto T___System_Array_Empty_System_Int32_ = 3836944; // T[] System.Array.Empty<System.Int32>
constexpr auto T___System_Array_Empty_System_Int32Enum_ = 3836944; // T[] System.Array.Empty<System.Int32Enum>
constexpr auto T___System_Array_Empty_System_Int64_ = 3836944; // T[] System.Array.Empty<System.Int64>
constexpr auto T___System_Array_Empty_System_IntPtr_ = 3836944; // T[] System.Array.Empty<System.IntPtr>
constexpr auto T___System_Array_Empty_UnityEngine_Matrix4x4_ = 3836944; // T[] System.Array.Empty<UnityEngine.Matrix4x4>
constexpr auto T___System_Array_Empty_Steamworks_Data_NetKeyValue_ = 3836944; // T[] System.Array.Empty<Steamworks.Data.NetKeyValue>
constexpr auto T___System_Array_Empty_Facepunch_Nexus_NexusMessage_ = 3836944; // T[] System.Array.Empty<Facepunch.Nexus.NexusMessage>
constexpr auto T___System_Array_Empty_System_Object_ = 3836944; // T[] System.Array.Empty<System.Object>
constexpr auto T___System_Array_Empty_System_Reflection_ParameterModifier_ = 3836944; // T[] System.Array.Empty<System.Reflection.ParameterModifier>
constexpr auto T___System_Array_Empty_System_UInt16_ = 3836944; // T[] System.Array.Empty<System.UInt16>
constexpr auto T___System_Array_Empty_System_UInt32_ = 3836944; // T[] System.Array.Empty<System.UInt32>
constexpr auto T___System_Array_Empty_System_UInt64_ = 3836944; // T[] System.Array.Empty<System.UInt64>
constexpr auto T___System_Array_Empty_Facepunch_Nexus_Models_VariableUpdate_ = 3836944; // T[] System.Array.Empty<Facepunch.Nexus.Models.VariableUpdate>
constexpr auto T___System_Array_Empty_UnityEngine_Vector2_ = 3836944; // T[] System.Array.Empty<UnityEngine.Vector2>
constexpr auto T___System_Array_Empty_BaseEntity_QueuedFileRequest_ = 3836944; // T[] System.Array.Empty<BaseEntity/QueuedFileRequest>
constexpr auto T___System_Array_Empty_Facepunch_Flexbox_FlexElement_ChildSizingParameters_ = 3836944; // T[] System.Array.Empty<Facepunch.Flexbox.FlexElement/ChildSizingParameters>
constexpr auto T___System_Array_Empty_Facepunch_RCon_Command_ = 3836944; // T[] System.Array.Empty<Facepunch.RCon/Command>
constexpr auto T___System_Array_Empty_System_Xml_Schema_SequenceNode_SequenceConstructPosContext_ = 3836944; // T[] System.Array.Empty<System.Xml.Schema.SequenceNode/SequenceConstructPosContext>
constexpr auto System_Collections_Generic_IEnumerable_1_TResult__System_Linq_Enumerable_Empty_System_Byte_ = 3836944; // System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable.Empty<System.Byte>
constexpr auto System_Collections_Generic_IEnumerable_1_TResult__System_Linq_Enumerable_Empty_System_Object_ = 3836944; // System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable.Empty<System.Object>
constexpr auto Facepunch_Pool_PoolCollection_1_T__Facepunch_Pool_FindCollection_System_Object_ = 3836944; // Facepunch.Pool/PoolCollection`1<T> Facepunch.Pool.FindCollection<System.Object>
constexpr auto Clear_System_String_filter___null = 15802384; // System.Void Clear(System.String filter = null)
constexpr auto Contains_System_String_haystack__System_String_needle__System_Globalization_CompareOptions_options = 15803712; // System.Boolean Contains(System.String haystack, System.String needle, System.Globalization.CompareOptions options)
constexpr auto _cctor = 15804224; // System.Void .cctor()
}
}
namespace OBB
{
namespace Fields
{
constexpr auto rotation = 0x0; // UnityEngine.Quaternion
constexpr auto position = 0x10; // UnityEngine.Vector3
constexpr auto extents = 0x1c; // UnityEngine.Vector3
constexpr auto forward = 0x28; // UnityEngine.Vector3
constexpr auto right = 0x34; // UnityEngine.Vector3
constexpr auto up = 0x40; // UnityEngine.Vector3
constexpr auto reject = 0x4c; // System.Single
}
namespace Methods
{
constexpr auto _ctor_UnityEngine_Bounds_bounds = 35379552; // System.Void .ctor(UnityEngine.Bounds bounds)
constexpr auto _ctor_UnityEngine_Transform_transform__UnityEngine_Bounds_bounds = 35378048; // System.Void .ctor(UnityEngine.Transform transform, UnityEngine.Bounds bounds)
constexpr auto _ctor_UnityEngine_Vector3_position__UnityEngine_Vector3_scale__UnityEngine_Quaternion_rotation__UnityEngine_Bounds_bounds = 35378800; // System.Void .ctor(UnityEngine.Vector3 position, UnityEngine.Vector3 scale, UnityEngine.Quaternion rotation, UnityEngine.Bounds bounds)
constexpr auto _ctor_UnityEngine_Vector3_position__UnityEngine_Quaternion_rotation__UnityEngine_Bounds_bounds = 35379872; // System.Void .ctor(UnityEngine.Vector3 position, UnityEngine.Quaternion rotation, UnityEngine.Bounds bounds)
constexpr auto _ctor_UnityEngine_Vector3_position__UnityEngine_Vector3_size__UnityEngine_Quaternion_rotation = 35378304; // System.Void .ctor(UnityEngine.Vector3 position, UnityEngine.Vector3 size, UnityEngine.Quaternion rotation)
constexpr auto Transform_UnityEngine_Vector3_position__UnityEngine_Vector3_scale__UnityEngine_Quaternion_rotation = 35377376; // System.Void Transform(UnityEngine.Vector3 position, UnityEngine.Vector3 scale, UnityEngine.Quaternion rotation)
constexpr auto GetPoint_System_Single_x__System_Single_y__System_Single_z = 35373536; // UnityEngine.Vector3 GetPoint(System.Single x, System.Single y, System.Single z)
constexpr auto ToBounds = 35374880; // UnityEngine.Bounds ToBounds()
constexpr auto Contains_UnityEngine_Vector3_target = 35370912; // System.Boolean Contains(UnityEngine.Vector3 target)
constexpr auto Intersects_OBB_target = 35374176; // System.Boolean Intersects(OBB target)
constexpr auto Intersects2D_OBB_target = 35373824; // System.Boolean Intersects2D(OBB target)
constexpr auto Intersects_UnityEngine_Ray_ray = 35374080; // System.Boolean Intersects(UnityEngine.Ray ray)
constexpr auto Trace_UnityEngine_Ray_ray__out_UnityEngine_RaycastHit_hit__System_Single_maxDistance____ = 35376240; // System.Boolean Trace(UnityEngine.Ray ray, out UnityEngine.RaycastHit hit, System.Single maxDistance = ∞)
constexpr auto ClosestPoint_UnityEngine_Vector3_target = 35370096; // UnityEngine.Vector3 ClosestPoint(UnityEngine.Vector3 target)
constexpr auto Distance_OBB_other = 35372816; // System.Single Distance(OBB other)
constexpr auto Distance_UnityEngine_Vector3_position = 35373296; // System.Single Distance(UnityEngine.Vector3 position)
constexpr auto SqrDistance_OBB_other = 35374512; // System.Single SqrDistance(OBB other)
constexpr auto SqrDistance_UnityEngine_Vector3_position = 35374368; // System.Single SqrDistance(UnityEngine.Vector3 position)
constexpr auto DebugDraw_UnityEngine_Color_colour__System_Single_duration = 35371168; // System.Void DebugDraw(UnityEngine.Color colour, System.Single duration)
}
}
namespace UnityEngine_GUIScrollGroup
{
namespace Fields
{
constexpr auto calcMinWidth = 0x90; // System.Single
constexpr auto calcMaxWidth = 0x94; // System.Single
constexpr auto calcMinHeight = 0x98; // System.Single
constexpr auto calcMaxHeight = 0x9c; // System.Single
constexpr auto clientWidth = 0xa0; // System.Single
constexpr auto clientHeight = 0xa4; // System.Single
constexpr auto allowHorizontalScroll = 0xa8; // System.Boolean
constexpr auto allowVerticalScroll = 0xa9; // System.Boolean
constexpr auto needsHorizontalScrollbar = 0xaa; // System.Boolean
constexpr auto needsVerticalScrollbar = 0xab; // System.Boolean
constexpr auto horizontalScrollbar = 0xb0; // UnityEngine.GUIStyle
constexpr auto verticalScrollbar = 0xb8; // UnityEngine.GUIStyle
}
namespace Methods
{
constexpr auto _ctor = 42632144; // System.Void .ctor()
constexpr auto CalcWidth = 42631008; // System.Void CalcWidth()
constexpr auto SetHorizontal_System_Single_x__System_Single_width = 42631168; // System.Void SetHorizontal(System.Single x, System.Single width)
constexpr auto CalcHeight = 42630720; // System.Void CalcHeight()
constexpr auto SetVertical_System_Single_y__System_Single_height = 42631520; // System.Void SetVertical(System.Single y, System.Single height)
}
}
namespace UnityEngine_GUILayoutGroup
{
namespace Fields
{
constexpr auto entries = 0x48; // System.Collections.Generic.List`1
constexpr auto isVertical = 0x50; // System.Boolean
constexpr auto resetCoords = 0x51; // System.Boolean
constexpr auto spacing = 0x54; // System.Single
constexpr auto sameSize = 0x58; // System.Boolean
constexpr auto isWindow = 0x59; // System.Boolean
constexpr auto windowID = 0x5c; // System.Int32
constexpr auto m_Cursor = 0x60; // System.Int32
constexpr auto m_StretchableCountX = 0x64; // System.Int32
constexpr auto m_StretchableCountY = 0x68; // System.Int32
constexpr auto m_UserSpecifiedWidth = 0x6c; // System.Boolean
constexpr auto m_UserSpecifiedHeight = 0x6d; // System.Boolean
constexpr auto m_ChildMinWidth = 0x70; // System.Single
constexpr auto m_ChildMaxWidth = 0x74; // System.Single
constexpr auto m_ChildMinHeight = 0x78; // System.Single
constexpr auto m_ChildMaxHeight = 0x7c; // System.Single
constexpr auto m_MarginLeft = 0x80; // System.Int32
constexpr auto m_MarginRight = 0x84; // System.Int32
constexpr auto m_MarginTop = 0x88; // System.Int32
constexpr auto m_MarginBottom = 0x8c; // System.Int32
}
namespace StaticFields
{
constexpr auto none = 0x0; // UnityEngine.GUILayoutEntry
}
namespace Methods
{
constexpr auto get_marginLeft = 3714800; // System.Int32 get_marginLeft()
constexpr auto get_marginRight = 3714624; // System.Int32 get_marginRight()
constexpr auto get_marginTop = 3714864; // System.Int32 get_marginTop()
constexpr auto get_marginBottom = 3714688; // System.Int32 get_marginBottom()
constexpr auto _ctor = 42545296; // System.Void .ctor()
constexpr auto ApplyOptions_UnityEngine_GUILayoutOption___options = 42534576; // System.Void ApplyOptions(UnityEngine.GUILayoutOption[] options)
constexpr auto ApplyStyleSettings_UnityEngine_GUIStyle_style = 42534864; // System.Void ApplyStyleSettings(UnityEngine.GUIStyle style)
constexpr auto ResetCursor = 42539664; // System.Void ResetCursor()
constexpr auto GetNext = 42538784; // UnityEngine.GUILayoutEntry GetNext()
constexpr auto Add_UnityEngine_GUILayoutEntry_e = 42534400; // System.Void Add(UnityEngine.GUILayoutEntry e)
constexpr auto CalcWidth = 42536960; // System.Void CalcWidth()
constexpr auto SetHorizontal_System_Single_x__System_Single_width = 42539680; // System.Void SetHorizontal(System.Single x, System.Single width)
constexpr auto CalcHeight = 42535232; // System.Void CalcHeight()
constexpr auto SetVertical_System_Single_y__System_Single_height = 42541792; // System.Void SetVertical(System.Single y, System.Single height)
constexpr auto ToString = 42543936; // System.String ToString()
}
namespace StaticMethods
{
constexpr auto _cctor = 42545056; // System.Void .cctor()
}
}
namespace UnityEngine_GUIWordWrapSizer
{
namespace Fields
{
constexpr auto m_Content = 0x48; // UnityEngine.GUIContent
constexpr auto m_ForcedMinHeight = 0x50; // System.Single
constexpr auto m_ForcedMaxHeight = 0x54; // System.Single
}
namespace Methods
{
constexpr auto _ctor_UnityEngine_GUIStyle_style__UnityEngine_GUIContent_content__UnityEngine_GUILayoutOption___options = 42599760; // System.Void .ctor(UnityEngine.GUIStyle style, UnityEngine.GUIContent content, UnityEngine.GUILayoutOption[] options)
constexpr auto CalcWidth = 42599520; // System.Void CalcWidth()
constexpr auto CalcHeight = 42599312; // System.Void CalcHeight()
}
}
namespace UnityEngine_GUILayoutEntry
{
namespace Fields
{
constexpr auto minWidth = 0x10; // System.Single
constexpr auto maxWidth = 0x14; // System.Single
constexpr auto minHeight = 0x18; // System.Single
constexpr auto maxHeight = 0x1c; // System.Single
constexpr auto rect = 0x20; // UnityEngine.Rect
constexpr auto stretchWidth = 0x30; // System.Int32
constexpr auto stretchHeight = 0x34; // System.Int32
constexpr auto consideredForMargin = 0x38; // System.Boolean
constexpr auto m_Style = 0x40; // UnityEngine.GUIStyle
}
namespace StaticFields
{
constexpr auto kDummyRect = 0x0; // UnityEngine.Rect
constexpr auto indent = 0x10; // System.Int32
}
namespace Methods
{
constexpr auto get_style = 42534320; // UnityEngine.GUIStyle get_style()
constexpr auto set_style_UnityEngine_GUIStyle_value = 42534336; // System.Void set_style(UnityEngine.GUIStyle value)
constexpr auto get_marginLeft = 42534096; // System.Int32 get_marginLeft()
constexpr auto get_marginRight = 42534144; // System.Int32 get_marginRight()
constexpr auto get_marginTop = 42534192; // System.Int32 get_marginTop()
constexpr auto get_marginBottom = 42533968; // System.Int32 get_marginBottom()
constexpr auto get_marginHorizontal = 42534016; // System.Int32 get_marginHorizontal()
constexpr auto get_marginVertical = 42534240; // System.Int32 get_marginVertical()
constexpr auto _ctor_System_Single__minWidth__System_Single__maxWidth__System_Single__minHeight__System_Single__maxHeight__UnityEngine_GUIStyle__style = 42533312; // System.Void .ctor(System.Single _minWidth, System.Single _maxWidth, System.Single _minHeight, System.Single _maxHeight, UnityEngine.GUIStyle _style)
constexpr auto _ctor_System_Single__minWidth__System_Single__maxWidth__System_Single__minHeight__System_Single__maxHeight__UnityEngine_GUIStyle__style__UnityEngine_GUILayoutOption___options = 42533648; // System.Void .ctor(System.Single _minWidth, System.Single _maxWidth, System.Single _minHeight, System.Single _maxHeight, UnityEngine.GUIStyle _style, UnityEngine.GUILayoutOption[] options)
constexpr auto CalcWidth = 3694560; // System.Void CalcWidth()
constexpr auto CalcHeight = 3694560; // System.Void CalcHeight()
constexpr auto SetHorizontal_System_Single_x__System_Single_width = 42530976; // System.Void SetHorizontal(System.Single x, System.Single width)
constexpr auto SetVertical_System_Single_y__System_Single_height = 42531040; // System.Void SetVertical(System.Single y, System.Single height)
constexpr auto ApplyStyleSettings_UnityEngine_GUIStyle_style = 42530704; // System.Void ApplyStyleSettings(UnityEngine.GUIStyle style)
constexpr auto ApplyOptions_UnityEngine_GUILayoutOption___options = 42529776; // System.Void ApplyOptions(UnityEngine.GUILayoutOption[] options)
constexpr auto ToString = 42531104; // System.String ToString()
}
namespace StaticMethods
{
constexpr auto _cctor = 42533184; // System.Void .cctor()
}
}
namespace UnityEngine_GUIUtility
{
namespace StaticFields
{
constexpr auto s_ControlCount = 0x0; // System.Int32
constexpr auto s_SkinMode = 0x4; // System.Int32
constexpr auto s_OriginalID = 0x8; // System.Int32
constexpr auto takeCapture = 0x10; // System.Action
constexpr auto releaseCapture = 0x18; // System.Action
constexpr auto processEvent = 0x20; // System.Func`3
constexpr auto endContainerGUIFromException = 0x28; // System.Func`2
constexpr auto guiChanged = 0x30; // System.Action
constexpr auto _guiIsExiting_k__BackingField = 0x38; // System.Boolean
constexpr auto s_HasCurrentWindowKeyFocusFunc = 0x40; // System.Func`1
}
namespace StaticMethods
{
constexpr auto get_pixelsPerPoint = 42598832; // System.Single get_pixelsPerPoint()
constexpr auto get_guiDepth = 42598784; // System.Int32 get_guiDepth()
constexpr auto set_mouseUsed_System_Boolean_value = 42599120; // System.Void set_mouseUsed(System.Boolean value)
constexpr auto set_textFieldInput_System_Boolean_value = 42599248; // System.Void set_textFieldInput(System.Boolean value)
constexpr auto get_systemCopyBuffer = 42598880; // System.String get_systemCopyBuffer()
constexpr auto set_systemCopyBuffer_System_String_value = 42599184; // System.Void set_systemCopyBuffer(System.String value)
constexpr auto Internal_GetControlID_System_Int32_hint__UnityEngine_FocusType_focusType__UnityEngine_Rect_rect = 42596544; // System.Int32 Internal_GetControlID(System.Int32 hint, UnityEngine.FocusType focusType, UnityEngine.Rect rect)
constexpr auto GetControlID_System_Int32_hint__UnityEngine_FocusType_focusType__UnityEngine_Rect_rect = 42594976; // System.Int32 GetControlID(System.Int32 hint, UnityEngine.FocusType focusType, UnityEngine.Rect rect)
constexpr auto AlignRectToDevice_UnityEngine_Rect_rect__out_System_Int32_widthInPixels__out_System_Int32_heightInPixels = 42593024; // UnityEngine.Rect AlignRectToDevice(UnityEngine.Rect rect, out System.Int32 widthInPixels, out System.Int32 heightInPixels)
constexpr auto get_compositionString = 42598736; // System.String get_compositionString()
constexpr auto set_compositionCursorPos_UnityEngine_Vector2_value = 42598992; // System.Void set_compositionCursorPos(UnityEngine.Vector2 value)
constexpr auto Internal_GetHotControl = 42596688; // System.Int32 Internal_GetHotControl()
constexpr auto Internal_GetKeyboardControl = 42596736; // System.Int32 Internal_GetKeyboardControl()
constexpr auto Internal_SetHotControl_System_Int32_value = 42596784; // System.Void Internal_SetHotControl(System.Int32 value)
constexpr auto Internal_SetKeyboardControl_System_Int32_value = 42596848; // System.Void Internal_SetKeyboardControl(System.Int32 value)
constexpr auto Internal_GetDefaultSkin_System_Int32_skinMode = 42596624; // System.Object Internal_GetDefaultSkin(System.Int32 skinMode)
constexpr auto Internal_ExitGUI = 42596416; // System.Void Internal_ExitGUI()
constexpr auto MarkGUIChanged = 42597056; // System.Void MarkGUIChanged()
constexpr auto GetControlID_UnityEngine_FocusType_focus = 42595120; // System.Int32 GetControlID(UnityEngine.FocusType focus)
constexpr auto GetControlID_System_Int32_hint__UnityEngine_FocusType_focus = 42594832; // System.Int32 GetControlID(System.Int32 hint, UnityEngine.FocusType focus)
constexpr auto GetStateObject_System_Type_t__System_Int32_controlID = 42595280; // System.Object GetStateObject(System.Type t, System.Int32 controlID)
constexpr auto set_guiIsExiting_System_Boolean_value = 42599056; // System.Void set_guiIsExiting(System.Boolean value)
constexpr auto get_hotControl = 42596688; // System.Int32 get_hotControl()
constexpr auto set_hotControl_System_Int32_value = 42596784; // System.Void set_hotControl(System.Int32 value)
constexpr auto TakeCapture = 42598656; // System.Void TakeCapture()
constexpr auto RemoveCapture = 42597264; // System.Void RemoveCapture()
constexpr auto get_keyboardControl = 42596736; // System.Int32 get_keyboardControl()
constexpr auto set_keyboardControl_System_Int32_value = 42596848; // System.Void set_keyboardControl(System.Int32 value)
constexpr auto HasKeyFocus_System_Int32_controlID = 42595616; // System.Boolean HasKeyFocus(System.Int32 controlID)
constexpr auto GetDefaultSkin = 42595136; // UnityEngine.GUISkin GetDefaultSkin()
constexpr auto ProcessEvent_System_Int32_instanceID__System_IntPtr_nativeEventPtr__out_System_Boolean_result = 42597136; // System.Void ProcessEvent(System.Int32 instanceID, System.IntPtr nativeEventPtr, out System.Boolean result)
constexpr auto BeginGUI_System_Int32_skinMode__System_Int32_instanceID__System_Int32_useGUILayout = 42593248; // System.Void BeginGUI(System.Int32 skinMode, System.Int32 instanceID, System.Int32 useGUILayout)
constexpr auto EndGUI_System_Int32_layoutType = 42594048; // System.Void EndGUI(System.Int32 layoutType)
constexpr auto EndGUIFromException_System_Exception_exception = 42593872; // System.Boolean EndGUIFromException(System.Exception exception)
constexpr auto EndContainerGUIFromException_System_Exception_exception = 42593776; // System.Boolean EndContainerGUIFromException(System.Exception exception)
constexpr auto ResetGlobalState = 42597344; // System.Void ResetGlobalState()
constexpr auto IsExitGUIException_System_Exception_exception = 42596912; // System.Boolean IsExitGUIException(System.Exception exception)
constexpr auto ShouldRethrowException_System_Exception_exception = 42596912; // System.Boolean ShouldRethrowException(System.Exception exception)
constexpr auto CheckOnGUI = 42593632; // System.Void CheckOnGUI()
constexpr auto RotateAroundPivot_System_Single_angle__UnityEngine_Vector2_pivotPoint = 42597600; // System.Void RotateAroundPivot(System.Single angle, UnityEngine.Vector2 pivotPoint)
constexpr auto AlignRectToDevice_UnityEngine_Rect_rect = 42593136; // UnityEngine.Rect AlignRectToDevice(UnityEngine.Rect rect)
constexpr auto HitTest_UnityEngine_Rect_rect__UnityEngine_Vector2_point__System_Int32_offset = 42596096; // System.Boolean HitTest(UnityEngine.Rect rect, UnityEngine.Vector2 point, System.Int32 offset)
constexpr auto HitTest_UnityEngine_Rect_rect__UnityEngine_Vector2_point__System_Boolean_isDirectManipulationDevice = 42596256; // System.Boolean HitTest(UnityEngine.Rect rect, UnityEngine.Vector2 point, System.Boolean isDirectManipulationDevice)
constexpr auto HitTest_UnityEngine_Rect_rect__UnityEngine_Event_evt = 42595776; // System.Boolean HitTest(UnityEngine.Rect rect, UnityEngine.Event evt)
constexpr auto Internal_GetControlID_Injected_System_Int32_hint__UnityEngine_FocusType_focusType__UnityEngine_Rect_rect = 42596464; // System.Int32 Internal_GetControlID_Injected(System.Int32 hint, UnityEngine.FocusType focusType, UnityEngine.Rect rect)
constexpr auto AlignRectToDevice_Injected_UnityEngine_Rect_rect__out_System_Int32_widthInPixels__out_System_Int32_heightInPixels__out_UnityEngine_Rect_ret = 42592912; // System.Void AlignRectToDevice_Injected(UnityEngine.Rect rect, out System.Int32 widthInPixels, out System.Int32 heightInPixels, out UnityEngine.Rect ret)
constexpr auto set_compositionCursorPos_Injected_UnityEngine_Vector2_value = 42598928; // System.Void set_compositionCursorPos_Injected(UnityEngine.Vector2 value)
}
}
namespace UnityEngine_GUIStyle
{
namespace Fields
{
constexpr auto m_Ptr = 0x10; // System.IntPtr
constexpr auto m_Normal = 0x18; // UnityEngine.GUIStyleState
constexpr auto m_Hover = 0x20; // UnityEngine.GUIStyleState
constexpr auto m_Active = 0x28; // UnityEngine.GUIStyleState
constexpr auto m_Focused = 0x30; // UnityEngine.GUIStyleState
constexpr auto m_OnNormal = 0x38; // UnityEngine.GUIStyleState
constexpr auto m_OnHover = 0x40; // UnityEngine.GUIStyleState
constexpr auto m_OnActive = 0x48; // UnityEngine.GUIStyleState
constexpr auto m_OnFocused = 0x50; // UnityEngine.GUIStyleState
constexpr auto m_Border = 0x58; // UnityEngine.RectOffset
constexpr auto m_Padding = 0x60; // UnityEngine.RectOffset
constexpr auto m_Margin = 0x68; // UnityEngine.RectOffset
constexpr auto m_Overflow = 0x70; // UnityEngine.RectOffset
constexpr auto m_Name = 0x78; // System.String
}
namespace StaticFields
{
constexpr auto showKeyboardFocus = 0x0; // System.Boolean
constexpr auto s_None = 0x8; // UnityEngine.GUIStyle
}
namespace Methods
{
constexpr auto get_rawName = 42591296; // System.String get_rawName()
constexpr auto set_rawName_System_String_value = 42592288; // System.Void set_rawName(System.String value)
constexpr auto get_font = 42590016; // UnityEngine.Font get_font()
constexpr auto get_imagePosition = 42590080; // UnityEngine.ImagePosition get_imagePosition()
constexpr auto set_alignment_UnityEngine_TextAnchor_value = 42591936; // System.Void set_alignment(UnityEngine.TextAnchor value)
constexpr auto get_wordWrap = 42591488; // System.Boolean get_wordWrap()
constexpr auto get_contentOffset = 42589744; // UnityEngine.Vector2 get_contentOffset()
constexpr auto set_contentOffset_UnityEngine_Vector2_value = 42592080; // System.Void set_contentOffset(UnityEngine.Vector2 value)
constexpr auto get_fixedWidth = 42589888; // System.Single get_fixedWidth()
constexpr auto get_fixedHeight = 42589824; // System.Single get_fixedHeight()
constexpr auto get_stretchWidth = 42591424; // System.Boolean get_stretchWidth()
constexpr auto set_stretchWidth_System_Boolean_value = 42592448; // System.Void set_stretchWidth(System.Boolean value)
constexpr auto get_stretchHeight = 42591360; // System.Boolean get_stretchHeight()
constexpr auto set_stretchHeight_System_Boolean_value = 42592368; // System.Void set_stretchHeight(System.Boolean value)
constexpr auto get_fontSize = 42589952; // System.Int32 get_fontSize()
constexpr auto set_fontSize_System_Int32_value = 42592144; // System.Void set_fontSize(System.Int32 value)
constexpr auto set_Internal_clipOffset_UnityEngine_Vector2_value = 42591872; // System.Void set_Internal_clipOffset(UnityEngine.Vector2 value)
constexpr auto GetStyleStatePtr_System_Int32_idx = 42586080; // System.IntPtr GetStyleStatePtr(System.Int32 idx)
constexpr auto GetRectOffsetPtr_System_Int32_idx = 42586016; // System.IntPtr GetRectOffsetPtr(System.Int32 idx)
constexpr auto Internal_Draw_UnityEngine_Rect_screenRect__UnityEngine_GUIContent_content__System_Boolean_isHover__System_Boolean_isActive__System_Boolean_on__System_Boolean_hasKeyboardFocus = 42587728; // System.Void Internal_Draw(UnityEngine.Rect screenRect, UnityEngine.GUIContent content, System.Boolean isHover, System.Boolean isActive, System.Boolean on, System.Boolean hasKeyboardFocus)
constexpr auto Internal_Draw2_UnityEngine_Rect_position__UnityEngine_GUIContent_content__System_Int32_controlID__System_Boolean_on = 42586864; // System.Void Internal_Draw2(UnityEngine.Rect position, UnityEngine.GUIContent content, System.Int32 controlID, System.Boolean on)
constexpr auto Internal_DrawCursor_UnityEngine_Rect_position__UnityEngine_GUIContent_content__System_Int32_pos__UnityEngine_Color_cursorColor = 42587088; // System.Void Internal_DrawCursor(UnityEngine.Rect position, UnityEngine.GUIContent content, System.Int32 pos, UnityEngine.Color cursorColor)
constexpr auto Internal_DrawWithTextSelection_UnityEngine_Rect_screenRect__UnityEngine_GUIContent_content__System_Boolean_isHover__System_Boolean_isActive__System_Boolean_on__System_Boolean_hasKeyboardFocus__System_Boolean_drawSelectionAsComposition__System_Int32_cursorFirst__System_Int32_cursorLast__UnityEngine_Color_cursorColor__UnityEngine_Color_selectionColor = 42587376; // System.Void Internal_DrawWithTextSelection(UnityEngine.Rect screenRect, UnityEngine.GUIContent content, System.Boolean isHover, System.Boolean isActive, System.Boolean on, System.Boolean hasKeyboardFocus, System.Boolean drawSelectionAsComposition, System.Int32 cursorFirst, System.Int32 cursorLast, UnityEngine.Color cursorColor, UnityEngine.Color selectionColor)
constexpr auto Internal_GetCursorPixelPosition_UnityEngine_Rect_position__UnityEngine_GUIContent_content__System_Int32_cursorStringIndex = 42588032; // UnityEngine.Vector2 Internal_GetCursorPixelPosition(UnityEngine.Rect position, UnityEngine.GUIContent content, System.Int32 cursorStringIndex)
constexpr auto Internal_GetCursorStringIndex_UnityEngine_Rect_position__UnityEngine_GUIContent_content__UnityEngine_Vector2_cursorPixelPosition = 42588272; // System.Int32 Internal_GetCursorStringIndex(UnityEngine.Rect position, UnityEngine.GUIContent content, UnityEngine.Vector2 cursorPixelPosition)
constexpr auto Internal_GetSelectedRenderedText_UnityEngine_Rect_localPosition__UnityEngine_GUIContent_mContent__System_Int32_selectIndex__System_Int32_cursorIndex = 42588544; // System.String Internal_GetSelectedRenderedText(UnityEngine.Rect localPosition, UnityEngine.GUIContent mContent, System.Int32 selectIndex, System.Int32 cursorIndex)
constexpr auto Internal_CalcSize_UnityEngine_GUIContent_content = 42581728; // UnityEngine.Vector2 Internal_CalcSize(UnityEngine.GUIContent content)
constexpr auto Internal_CalcSizeWithConstraints_UnityEngine_GUIContent_content__UnityEngine_Vector2_maxSize = 42581632; // UnityEngine.Vector2 Internal_CalcSizeWithConstraints(UnityEngine.GUIContent content, UnityEngine.Vector2 maxSize)
constexpr auto Internal_CalcHeight_UnityEngine_GUIContent_content__System_Single_width = 42581408; // System.Single Internal_CalcHeight(UnityEngine.GUIContent content, System.Single width)
constexpr auto Internal_CalcMinMaxWidth_UnityEngine_GUIContent_content = 42586240; // UnityEngine.Vector2 Internal_CalcMinMaxWidth(UnityEngine.GUIContent content)
constexpr auto _ctor = 42589536; // System.Void .ctor()
constexpr auto _ctor_UnityEngine_GUIStyle_other = 42589328; // System.Void .ctor(UnityEngine.GUIStyle other)
constexpr auto Finalize = 42585536; // System.Void Finalize()
constexpr auto get_name = 42590608; // System.String get_name()
constexpr auto set_name_System_String_value = 42592208; // System.Void set_name(System.String value)
constexpr auto get_normal = 42590896; // UnityEngine.GUIStyleState get_normal()
constexpr auto get_margin = 42590416; // UnityEngine.RectOffset get_margin()
constexpr auto get_padding = 42591104; // UnityEngine.RectOffset get_padding()
constexpr auto get_lineHeight = 42590304; // System.Single get_lineHeight()
constexpr auto Draw_UnityEngine_Rect_position__UnityEngine_GUIContent_content__System_Boolean_isHover__System_Boolean_isActive__System_Boolean_on__System_Boolean_hasKeyboardFocus = 42584896; // System.Void Draw(UnityEngine.Rect position, UnityEngine.GUIContent content, System.Boolean isHover, System.Boolean isActive, System.Boolean on, System.Boolean hasKeyboardFocus)
constexpr auto Draw_UnityEngine_Rect_position__UnityEngine_GUIContent_content__System_Int32_controlID = 42585040; // System.Void Draw(UnityEngine.Rect position, UnityEngine.GUIContent content, System.Int32 controlID)
constexpr auto Draw_UnityEngine_Rect_position__UnityEngine_GUIContent_content__System_Int32_controlID__System_Boolean_on = 42584464; // System.Void Draw(UnityEngine.Rect position, UnityEngine.GUIContent content, System.Int32 controlID, System.Boolean on)
constexpr auto Draw_UnityEngine_Rect_position__UnityEngine_GUIContent_content__System_Int32_controlID__System_Boolean_on__System_Boolean_hover = 42585232; // System.Void Draw(UnityEngine.Rect position, UnityEngine.GUIContent content, System.Int32 controlID, System.Boolean on, System.Boolean hover)
constexpr auto Draw_UnityEngine_Rect_position__UnityEngine_GUIContent_content__System_Int32_controlId__System_Boolean_isHover__System_Boolean_isActive__System_Boolean_on__System_Boolean_hasKeyboardFocus = 42584672; // System.Void Draw(UnityEngine.Rect position, UnityEngine.GUIContent content, System.Int32 controlId, System.Boolean isHover, System.Boolean isActive, System.Boolean on, System.Boolean hasKeyboardFocus)
constexpr auto DrawCursor_UnityEngine_Rect_position__UnityEngine_GUIContent_content__System_Int32_controlID__System_Int32_character = 42581824; // System.Void DrawCursor(UnityEngine.Rect position, UnityEngine.GUIContent content, System.Int32 controlID, System.Int32 character)
constexpr auto DrawWithTextSelection_UnityEngine_Rect_position__UnityEngine_GUIContent_content__System_Boolean_isActive__System_Boolean_hasKeyboardFocus__System_Int32_firstSelectedCharacter__System_Int32_lastSelectedCharacter__System_Boolean_drawSelectionAsComposition__UnityEngine_Color_selectionColor = 42582576; // System.Void DrawWithTextSelection(UnityEngine.Rect position, UnityEngine.GUIContent content, System.Boolean isActive, System.Boolean hasKeyboardFocus, System.Int32 firstSelectedCharacter, System.Int32 lastSelectedCharacter, System.Boolean drawSelectionAsComposition, UnityEngine.Color selectionColor)
constexpr auto DrawWithTextSelection_UnityEngine_Rect_position__UnityEngine_GUIContent_content__System_Int32_controlID__System_Int32_firstSelectedCharacter__System_Int32_lastSelectedCharacter__System_Boolean_drawSelectionAsComposition = 42584000; // System.Void DrawWithTextSelection(UnityEngine.Rect position, UnityEngine.GUIContent content, System.Int32 controlID, System.Int32 firstSelectedCharacter, System.Int32 lastSelectedCharacter, System.Boolean drawSelectionAsComposition)
constexpr auto DrawWithTextSelection_UnityEngine_Rect_position__UnityEngine_GUIContent_content__System_Int32_controlID__System_Int32_firstSelectedCharacter__System_Int32_lastSelectedCharacter = 42583552; // System.Void DrawWithTextSelection(UnityEngine.Rect position, UnityEngine.GUIContent content, System.Int32 controlID, System.Int32 firstSelectedCharacter, System.Int32 lastSelectedCharacter)
constexpr auto GetCursorPixelPosition_UnityEngine_Rect_position__UnityEngine_GUIContent_content__System_Int32_cursorStringIndex = 42585792; // UnityEngine.Vector2 GetCursorPixelPosition(UnityEngine.Rect position, UnityEngine.GUIContent content, System.Int32 cursorStringIndex)
constexpr auto GetCursorStringIndex_UnityEngine_Rect_position__UnityEngine_GUIContent_content__UnityEngine_Vector2_cursorPixelPosition = 42585920; // System.Int32 GetCursorStringIndex(UnityEngine.Rect position, UnityEngine.GUIContent content, UnityEngine.Vector2 cursorPixelPosition)
constexpr auto CalcSize_UnityEngine_GUIContent_content = 42581728; // UnityEngine.Vector2 CalcSize(UnityEngine.GUIContent content)
constexpr auto CalcSizeWithConstraints_UnityEngine_GUIContent_content__UnityEngine_Vector2_constraints = 42581632; // UnityEngine.Vector2 CalcSizeWithConstraints(UnityEngine.GUIContent content, UnityEngine.Vector2 constraints)
constexpr auto CalcHeight_UnityEngine_GUIContent_content__System_Single_width = 42581408; // System.Single CalcHeight(UnityEngine.GUIContent content, System.Single width)
constexpr auto get_isHeightDependantOnWidth = 42590144; // System.Boolean get_isHeightDependantOnWidth()
constexpr auto CalcMinMaxWidth_UnityEngine_GUIContent_content__out_System_Single_minWidth__out_System_Single_maxWidth = 42581504; // System.Void CalcMinMaxWidth(UnityEngine.GUIContent content, out System.Single minWidth, out System.Single maxWidth)
constexpr auto ToString = 42588992; // System.String ToString()
constexpr auto get_contentOffset_Injected_out_UnityEngine_Vector2_ret = 42589664; // System.Void get_contentOffset_Injected(out UnityEngine.Vector2 ret)
constexpr auto set_contentOffset_Injected_UnityEngine_Vector2_value = 42592000; // System.Void set_contentOffset_Injected(UnityEngine.Vector2 value)
constexpr auto set_Internal_clipOffset_Injected_UnityEngine_Vector2_value = 42591792; // System.Void set_Internal_clipOffset_Injected(UnityEngine.Vector2 value)
constexpr auto Internal_Draw_Injected_UnityEngine_Rect_screenRect__UnityEngine_GUIContent_content__System_Boolean_isHover__System_Boolean_isActive__System_Boolean_on__System_Boolean_hasKeyboardFocus = 42587584; // System.Void Internal_Draw_Injected(UnityEngine.Rect screenRect, UnityEngine.GUIContent content, System.Boolean isHover, System.Boolean isActive, System.Boolean on, System.Boolean hasKeyboardFocus)
constexpr auto Internal_Draw2_Injected_UnityEngine_Rect_position__UnityEngine_GUIContent_content__System_Int32_controlID__System_Boolean_on = 42586752; // System.Void Internal_Draw2_Injected(UnityEngine.Rect position, UnityEngine.GUIContent content, System.Int32 controlID, System.Boolean on)
constexpr auto Internal_DrawCursor_Injected_UnityEngine_Rect_position__UnityEngine_GUIContent_content__System_Int32_pos__UnityEngine_Color_cursorColor = 42586976; // System.Void Internal_DrawCursor_Injected(UnityEngine.Rect position, UnityEngine.GUIContent content, System.Int32 pos, UnityEngine.Color cursorColor)
constexpr auto Internal_DrawWithTextSelection_Injected_UnityEngine_Rect_screenRect__UnityEngine_GUIContent_content__System_Boolean_isHover__System_Boolean_isActive__System_Boolean_on__System_Boolean_hasKeyboardFocus__System_Boolean_drawSelectionAsComposition__System_Int32_cursorFirst__System_Int32_cursorLast__UnityEngine_Color_cursorColor__UnityEngine_Color_selectionColor = 42587200; // System.Void Internal_DrawWithTextSelection_Injected(UnityEngine.Rect screenRect, UnityEngine.GUIContent content, System.Boolean isHover, System.Boolean isActive, System.Boolean on, System.Boolean hasKeyboardFocus, System.Boolean drawSelectionAsComposition, System.Int32 cursorFirst, System.Int32 cursorLast, UnityEngine.Color cursorColor, UnityEngine.Color selectionColor)
constexpr auto Internal_GetCursorPixelPosition_Injected_UnityEngine_Rect_position__UnityEngine_GUIContent_content__System_Int32_cursorStringIndex__out_UnityEngine_Vector2_ret = 42587920; // System.Void Internal_GetCursorPixelPosition_Injected(UnityEngine.Rect position, UnityEngine.GUIContent content, System.Int32 cursorStringIndex, out UnityEngine.Vector2 ret)
constexpr auto Internal_GetCursorStringIndex_Injected_UnityEngine_Rect_position__UnityEngine_GUIContent_content__UnityEngine_Vector2_cursorPixelPosition = 42588160; // System.Int32 Internal_GetCursorStringIndex_Injected(UnityEngine.Rect position, UnityEngine.GUIContent content, UnityEngine.Vector2 cursorPixelPosition)
constexpr auto Internal_GetSelectedRenderedText_Injected_UnityEngine_Rect_localPosition__UnityEngine_GUIContent_mContent__System_Int32_selectIndex__System_Int32_cursorIndex = 42588432; // System.String Internal_GetSelectedRenderedText_Injected(UnityEngine.Rect localPosition, UnityEngine.GUIContent mContent, System.Int32 selectIndex, System.Int32 cursorIndex)
constexpr auto Internal_CalcSize_Injected_UnityEngine_GUIContent_content__out_UnityEngine_Vector2_ret = 42586448; // System.Void Internal_CalcSize_Injected(UnityEngine.GUIContent content, out UnityEngine.Vector2 ret)
constexpr auto Internal_CalcSizeWithConstraints_Injected_UnityEngine_GUIContent_content__UnityEngine_Vector2_maxSize__out_UnityEngine_Vector2_ret = 42586336; // System.Void Internal_CalcSizeWithConstraints_Injected(UnityEngine.GUIContent content, UnityEngine.Vector2 maxSize, out UnityEngine.Vector2 ret)
constexpr auto Internal_CalcMinMaxWidth_Injected_UnityEngine_GUIContent_content__out_UnityEngine_Vector2_ret = 42586144; // System.Void Internal_CalcMinMaxWidth_Injected(UnityEngine.GUIContent content, out UnityEngine.Vector2 ret)
}
namespace StaticMethods
{
constexpr auto Internal_Create_UnityEngine_GUIStyle_self = 42586624; // System.IntPtr Internal_Create(UnityEngine.GUIStyle self)
constexpr auto Internal_Copy_UnityEngine_GUIStyle_self__UnityEngine_GUIStyle_other = 42586544; // System.IntPtr Internal_Copy(UnityEngine.GUIStyle self, UnityEngine.GUIStyle other)
constexpr auto Internal_Destroy_System_IntPtr_self = 42586688; // System.Void Internal_Destroy(System.IntPtr self)
constexpr auto Internal_GetLineHeight_System_IntPtr_target = 42588368; // System.Single Internal_GetLineHeight(System.IntPtr target)
constexpr auto SetMouseTooltip_System_String_tooltip__UnityEngine_Rect_screenRect = 42588864; // System.Void SetMouseTooltip(System.String tooltip, UnityEngine.Rect screenRect)
constexpr auto IsTooltipActive_System_String_tooltip = 42588656; // System.Boolean IsTooltipActive(System.String tooltip)
constexpr auto Internal_GetCursorFlashOffset = 42587872; // System.Single Internal_GetCursorFlashOffset()
constexpr auto SetDefaultFont_UnityEngine_Font_font = 42588720; // System.Void SetDefaultFont(UnityEngine.Font font)
constexpr auto op_Implicit_System_String_str = 42591552; // UnityEngine.GUIStyle op_Implicit(System.String str)
constexpr auto get_none = 42590704; // UnityEngine.GUIStyle get_none()
constexpr auto _cctor = 42589264; // System.Void .cctor()
constexpr auto SetMouseTooltip_Injected_System_String_tooltip__UnityEngine_Rect_screenRect = 42588784; // System.Void SetMouseTooltip_Injected(System.String tooltip, UnityEngine.Rect screenRect)
}
}
namespace UnityEngine_GUISkin
{
namespace Fields
{
constexpr auto m_Font = 0x18; // UnityEngine.Font
constexpr auto m_box = 0x20; // UnityEngine.GUIStyle
constexpr auto m_button = 0x28; // UnityEngine.GUIStyle
constexpr auto m_toggle = 0x30; // UnityEngine.GUIStyle
constexpr auto m_label = 0x38; // UnityEngine.GUIStyle
constexpr auto m_textField = 0x40; // UnityEngine.GUIStyle
constexpr auto m_textArea = 0x48; // UnityEngine.GUIStyle
constexpr auto m_window = 0x50; // UnityEngine.GUIStyle
constexpr auto m_horizontalSlider = 0x58; // UnityEngine.GUIStyle
constexpr auto m_horizontalSliderThumb = 0x60; // UnityEngine.GUIStyle
constexpr auto m_horizontalSliderThumbExtent = 0x68; // UnityEngine.GUIStyle
constexpr auto m_verticalSlider = 0x70; // UnityEngine.GUIStyle
constexpr auto m_verticalSliderThumb = 0x78; // UnityEngine.GUIStyle
constexpr auto m_verticalSliderThumbExtent = 0x80; // UnityEngine.GUIStyle
constexpr auto m_SliderMixed = 0x88; // UnityEngine.GUIStyle
constexpr auto m_horizontalScrollbar = 0x90; // UnityEngine.GUIStyle
constexpr auto m_horizontalScrollbarThumb = 0x98; // UnityEngine.GUIStyle
constexpr auto m_horizontalScrollbarLeftButton = 0xa0; // UnityEngine.GUIStyle
constexpr auto m_horizontalScrollbarRightButton = 0xa8; // UnityEngine.GUIStyle
constexpr auto m_verticalScrollbar = 0xb0; // UnityEngine.GUIStyle
constexpr auto m_verticalScrollbarThumb = 0xb8; // UnityEngine.GUIStyle
constexpr auto m_verticalScrollbarUpButton = 0xc0; // UnityEngine.GUIStyle
constexpr auto m_verticalScrollbarDownButton = 0xc8; // UnityEngine.GUIStyle
constexpr auto m_ScrollView = 0xd0; // UnityEngine.GUIStyle
constexpr auto m_CustomStyles = 0xd8; // unknown
constexpr auto m_Settings = 0xe0; // UnityEngine.GUISettings
constexpr auto m_Styles = 0xe8; // System.Collections.Generic.Dictionary`2
}
namespace StaticFields
{
constexpr auto ms_Error = 0x0; // UnityEngine.GUIStyle
constexpr auto m_SkinChanged = 0x8; // UnityEngine.GUISkin/SkinChangedDelegate
constexpr auto current = 0x10; // UnityEngine.GUISkin
}
namespace Methods
{
constexpr auto _ctor = 42575904; // System.Void .ctor()
constexpr auto OnEnable = 42568640; // System.Void OnEnable()
constexpr auto get_font = 42373200; // UnityEngine.Font get_font()
constexpr auto set_font_UnityEngine_Font_value = 42577152; // System.Void set_font(UnityEngine.Font value)
constexpr auto get_box = 42091312; // UnityEngine.GUIStyle get_box()
constexpr auto set_box_UnityEngine_GUIStyle_value = 42576752; // System.Void set_box(UnityEngine.GUIStyle value)
constexpr auto get_label = 42576544; // UnityEngine.GUIStyle get_label()
constexpr auto set_label_UnityEngine_GUIStyle_value = 42578368; // System.Void set_label(UnityEngine.GUIStyle value)
constexpr auto get_textField = 42534320; // UnityEngine.GUIStyle get_textField()
constexpr auto set_textField_UnityEngine_GUIStyle_value = 42578880; // System.Void set_textField(UnityEngine.GUIStyle value)
constexpr auto get_textArea = 42576608; // UnityEngine.GUIStyle get_textArea()
constexpr auto set_textArea_UnityEngine_GUIStyle_value = 42578752; // System.Void set_textArea(UnityEngine.GUIStyle value)
constexpr auto get_button = 42373184; // UnityEngine.GUIStyle get_button()
constexpr auto set_button_UnityEngine_GUIStyle_value = 42576880; // System.Void set_button(UnityEngine.GUIStyle value)
constexpr auto get_toggle = 42417792; // UnityEngine.GUIStyle get_toggle()
constexpr auto set_toggle_UnityEngine_GUIStyle_value = 42579008; // System.Void set_toggle(UnityEngine.GUIStyle value)
constexpr auto get_window = 42576736; // UnityEngine.GUIStyle get_window()
constexpr auto set_window_UnityEngine_GUIStyle_value = 42580032; // System.Void set_window(UnityEngine.GUIStyle value)
constexpr auto get_horizontalSlider = 42576528; // UnityEngine.GUIStyle get_horizontalSlider()
constexpr auto set_horizontalSlider_UnityEngine_GUIStyle_value = 42578240; // System.Void set_horizontalSlider(UnityEngine.GUIStyle value)
constexpr auto get_horizontalSliderThumb = 42576512; // UnityEngine.GUIStyle get_horizontalSliderThumb()
constexpr auto set_horizontalSliderThumb_UnityEngine_GUIStyle_value = 42578112; // System.Void set_horizontalSliderThumb(UnityEngine.GUIStyle value)
constexpr auto get_horizontalSliderThumbExtent = 42576496; // UnityEngine.GUIStyle get_horizontalSliderThumbExtent()
constexpr auto set_horizontalSliderThumbExtent_UnityEngine_GUIStyle_value = 42577984; // System.Void set_horizontalSliderThumbExtent(UnityEngine.GUIStyle value)
constexpr auto get_sliderMixed = 42576592; // UnityEngine.GUIStyle get_sliderMixed()
constexpr auto set_sliderMixed_UnityEngine_GUIStyle_value = 42578624; // System.Void set_sliderMixed(UnityEngine.GUIStyle value)
constexpr auto get_verticalSlider = 42576720; // UnityEngine.GUIStyle get_verticalSlider()
constexpr auto set_verticalSlider_UnityEngine_GUIStyle_value = 42579904; // System.Void set_verticalSlider(UnityEngine.GUIStyle value)
constexpr auto get_verticalSliderThumb = 42576704; // UnityEngine.GUIStyle get_verticalSliderThumb()
constexpr auto set_verticalSliderThumb_UnityEngine_GUIStyle_value = 42579776; // System.Void set_verticalSliderThumb(UnityEngine.GUIStyle value)
constexpr auto get_verticalSliderThumbExtent = 42576688; // UnityEngine.GUIStyle get_verticalSliderThumbExtent()
constexpr auto set_verticalSliderThumbExtent_UnityEngine_GUIStyle_value = 42579648; // System.Void set_verticalSliderThumbExtent(UnityEngine.GUIStyle value)
constexpr auto get_horizontalScrollbar = 42576480; // UnityEngine.GUIStyle get_horizontalScrollbar()
constexpr auto set_horizontalScrollbar_UnityEngine_GUIStyle_value = 42577856; // System.Void set_horizontalScrollbar(UnityEngine.GUIStyle value)
constexpr auto get_horizontalScrollbarThumb = 42576464; // UnityEngine.GUIStyle get_horizontalScrollbarThumb()
constexpr auto set_horizontalScrollbarThumb_UnityEngine_GUIStyle_value = 42577728; // System.Void set_horizontalScrollbarThumb(UnityEngine.GUIStyle value)
constexpr auto get_horizontalScrollbarLeftButton = 42576432; // UnityEngine.GUIStyle get_horizontalScrollbarLeftButton()
constexpr auto set_horizontalScrollbarLeftButton_UnityEngine_GUIStyle_value = 42577472; // System.Void set_horizontalScrollbarLeftButton(UnityEngine.GUIStyle value)
constexpr auto get_horizontalScrollbarRightButton = 42576448; // UnityEngine.GUIStyle get_horizontalScrollbarRightButton()
constexpr auto set_horizontalScrollbarRightButton_UnityEngine_GUIStyle_value = 42577600; // System.Void set_horizontalScrollbarRightButton(UnityEngine.GUIStyle value)
constexpr auto get_verticalScrollbar = 42576672; // UnityEngine.GUIStyle get_verticalScrollbar()
constexpr auto set_verticalScrollbar_UnityEngine_GUIStyle_value = 42579520; // System.Void set_verticalScrollbar(UnityEngine.GUIStyle value)
constexpr auto get_verticalScrollbarThumb = 42576640; // UnityEngine.GUIStyle get_verticalScrollbarThumb()
constexpr auto set_verticalScrollbarThumb_UnityEngine_GUIStyle_value = 42579264; // System.Void set_verticalScrollbarThumb(UnityEngine.GUIStyle value)
constexpr auto get_verticalScrollbarUpButton = 42576656; // UnityEngine.GUIStyle get_verticalScrollbarUpButton()
constexpr auto set_verticalScrollbarUpButton_UnityEngine_GUIStyle_value = 42579392; // System.Void set_verticalScrollbarUpButton(UnityEngine.GUIStyle value)
constexpr auto get_verticalScrollbarDownButton = 42576624; // UnityEngine.GUIStyle get_verticalScrollbarDownButton()
constexpr auto set_verticalScrollbarDownButton_UnityEngine_GUIStyle_value = 42579136; // System.Void set_verticalScrollbarDownButton(UnityEngine.GUIStyle value)
constexpr auto get_scrollView = 42576560; // UnityEngine.GUIStyle get_scrollView()
constexpr auto set_scrollView_UnityEngine_GUIStyle_value = 42578496; // System.Void set_scrollView(UnityEngine.GUIStyle value)
constexpr auto get_customStyles = 42576128; // UnityEngine.GUIStyle[] get_customStyles()
constexpr auto set_customStyles_UnityEngine_GUIStyle___value = 42577008; // System.Void set_customStyles(UnityEngine.GUIStyle[] value)
constexpr auto get_settings = 42576576; // UnityEngine.GUISettings get_settings()
constexpr auto Apply = 42568640; // System.Void Apply()
constexpr auto BuildStyleCache = 42568752; // System.Void BuildStyleCache()
constexpr auto GetStyle_System_String_styleName = 42574672; // UnityEngine.GUIStyle GetStyle(System.String styleName)
constexpr auto FindStyle_System_String_styleName = 42574336; // UnityEngine.GUIStyle FindStyle(System.String styleName)
constexpr auto MakeCurrent = 42575696; // System.Void MakeCurrent()
constexpr auto GetEnumerator = 42574480; // System.Collections.IEnumerator GetEnumerator()
}
namespace StaticMethods
{
constexpr auto CleanupRoots = 42574208; // System.Void CleanupRoots()
constexpr auto get_error = 42576144; // UnityEngine.GUIStyle get_error()
}
}
namespace UnityEngine_GUISettings
{
namespace Fields
{
constexpr auto m_DoubleClickSelectsWord = 0x10; // System.Boolean
constexpr auto m_TripleClickSelectsLine = 0x11; // System.Boolean
constexpr auto m_CursorColor = 0x14; // UnityEngine.Color
constexpr auto m_CursorFlashSpeed = 0x24; // System.Single
constexpr auto m_SelectionColor = 0x28; // UnityEngine.Color
}
namespace Methods
{
constexpr auto get_doubleClickSelectsWord = 42568592; // System.Boolean get_doubleClickSelectsWord()
constexpr auto get_tripleClickSelectsLine = 42568624; // System.Boolean get_tripleClickSelectsLine()
constexpr auto get_cursorColor = 24713248; // UnityEngine.Color get_cursorColor()
constexpr auto get_cursorFlashSpeed = 42568528; // System.Single get_cursorFlashSpeed()
constexpr auto get_selectionColor = 42568608; // UnityEngine.Color get_selectionColor()
constexpr auto _ctor = 42568480; // System.Void .ctor()
}
namespace StaticMethods
{
constexpr auto Internal_GetCursorFlashSpeed = 42568432; // System.Single Internal_GetCursorFlashSpeed()
}
}
namespace UnityEngine_GUILayoutUtility
{
namespace StaticFields
{
constexpr auto s_StoredLayouts = 0x0; // System.Collections.Generic.Dictionary`2
constexpr auto s_StoredWindows = 0x8; // System.Collections.Generic.Dictionary`2
constexpr auto current = 0x10; // UnityEngine.GUILayoutUtility/LayoutCache
constexpr auto kDummyRect = 0x18; // UnityEngine.Rect
constexpr auto _unbalancedgroupscount_k__BackingField = 0x28; // System.Int32
constexpr auto s_SpaceStyle = 0x30; // UnityEngine.GUIStyle
}
namespace StaticMethods
{
constexpr auto Internal_GetWindowRect_System_Int32_windowID = 42553056; // UnityEngine.Rect Internal_GetWindowRect(System.Int32 windowID)
constexpr auto Internal_MoveWindow_System_Int32_windowID__UnityEngine_Rect_r = 42553248; // System.Void Internal_MoveWindow(System.Int32 windowID, UnityEngine.Rect r)
constexpr auto get_unbalancedgroupscount = 42557712; // System.Int32 get_unbalancedgroupscount()
constexpr auto set_unbalancedgroupscount_System_Int32_value = 42557792; // System.Void set_unbalancedgroupscount(System.Int32 value)
constexpr auto SelectIDList_System_Int32_instanceID__System_Boolean_isWindow = 42556512; // UnityEngine.GUILayoutUtility/LayoutCache SelectIDList(System.Int32 instanceID, System.Boolean isWindow)
constexpr auto Begin_System_Int32_instanceID = 42548320; // System.Void Begin(System.Int32 instanceID)
constexpr auto BeginWindow_System_Int32_windowID__UnityEngine_GUIStyle_style__UnityEngine_GUILayoutOption___options = 42547376; // System.Void BeginWindow(System.Int32 windowID, UnityEngine.GUIStyle style, UnityEngine.GUILayoutOption[] options)
constexpr auto Layout = 42555856; // System.Void Layout()
constexpr auto LayoutFromEditorWindow = 42554560; // System.Void LayoutFromEditorWindow()
constexpr auto LayoutFreeGroup_UnityEngine_GUILayoutGroup_toplevel = 42553376; // System.Void LayoutFreeGroup(UnityEngine.GUILayoutGroup toplevel)
constexpr auto LayoutSingleGroup_UnityEngine_GUILayoutGroup_i = 42555152; // System.Void LayoutSingleGroup(UnityEngine.GUILayoutGroup i)
constexpr auto CreateGUILayoutGroupInstanceOfType_System_Type_LayoutType = 42549008; // UnityEngine.GUILayoutGroup CreateGUILayoutGroupInstanceOfType(System.Type LayoutType)
constexpr auto BeginLayoutGroup_UnityEngine_GUIStyle_style__UnityEngine_GUILayoutOption___options__System_Type_layoutType = 42546384; // UnityEngine.GUILayoutGroup BeginLayoutGroup(UnityEngine.GUIStyle style, UnityEngine.GUILayoutOption[] options, System.Type layoutType)
constexpr auto EndLayoutGroup = 42551376; // System.Void EndLayoutGroup()
constexpr auto BeginLayoutArea_UnityEngine_GUIStyle_style__System_Type_layoutType = 42545616; // UnityEngine.GUILayoutGroup BeginLayoutArea(UnityEngine.GUIStyle style, System.Type layoutType)
constexpr auto GetRect_UnityEngine_GUIContent_content__UnityEngine_GUIStyle_style__UnityEngine_GUILayoutOption___options = 42552832; // UnityEngine.Rect GetRect(UnityEngine.GUIContent content, UnityEngine.GUIStyle style, UnityEngine.GUILayoutOption[] options)
constexpr auto DoGetRect_UnityEngine_GUIContent_content__UnityEngine_GUIStyle_style__UnityEngine_GUILayoutOption___options = 42549920; // UnityEngine.Rect DoGetRect(UnityEngine.GUIContent content, UnityEngine.GUIStyle style, UnityEngine.GUILayoutOption[] options)
constexpr auto GetRect_System_Single_width__System_Single_height__UnityEngine_GUIStyle_style__UnityEngine_GUILayoutOption___options = 42552256; // UnityEngine.Rect GetRect(System.Single width, System.Single height, UnityEngine.GUIStyle style, UnityEngine.GUILayoutOption[] options)
constexpr auto DoGetRect_System_Single_minWidth__System_Single_maxWidth__System_Single_minHeight__System_Single_maxHeight__UnityEngine_GUIStyle_style__UnityEngine_GUILayoutOption___options = 42549360; // UnityEngine.Rect DoGetRect(System.Single minWidth, System.Single maxWidth, System.Single minHeight, System.Single maxHeight, UnityEngine.GUIStyle style, UnityEngine.GUILayoutOption[] options)
constexpr auto get_spaceStyle = 42557392; // UnityEngine.GUIStyle get_spaceStyle()
constexpr auto _cctor = 42556992; // System.Void .cctor()
constexpr auto Internal_GetWindowRect_Injected_System_Int32_windowID__out_UnityEngine_Rect_ret = 42552992; // System.Void Internal_GetWindowRect_Injected(System.Int32 windowID, out UnityEngine.Rect ret)
constexpr auto Internal_MoveWindow_Injected_System_Int32_windowID__UnityEngine_Rect_r = 42553184; // System.Void Internal_MoveWindow_Injected(System.Int32 windowID, UnityEngine.Rect r)
}
}
namespace UnityEngine_GUILayoutUtility_LayoutCache
{
namespace Fields
{
constexpr auto _id_k__BackingField = 0x10; // System.Int32
constexpr auto topLevel = 0x18; // UnityEngine.GUILayoutGroup
constexpr auto layoutGroups = 0x20; // UnityEngineInternal.GenericStack
constexpr auto windows = 0x28; // UnityEngine.GUILayoutGroup
}
namespace Methods
{
constexpr auto set_id_System_Int32_value = 3836928; // System.Void set_id(System.Int32 value)
constexpr auto _ctor_System_Int32_instanceID____1 = 42630240; // System.Void .ctor(System.Int32 instanceID = -1)
}
}
namespace UnityEngine_GUILayoutOption
{
namespace Fields
{
constexpr auto type = 0x10; // UnityEngine.GUILayoutOption/Type
constexpr auto value = 0x18; // System.Object
}
namespace Methods
{
constexpr auto _ctor_UnityEngine_GUILayoutOption_Type_type__System_Object_value = 15997504; // System.Void .ctor(UnityEngine.GUILayoutOption/Type type, System.Object value)
}
}
namespace UnityEngine_GUILayout
{
namespace StaticMethods
{
constexpr auto Label_System_String_text__UnityEngine_GUILayoutOption___options = 42566944; // System.Void Label(System.String text, UnityEngine.GUILayoutOption[] options)
constexpr auto DoLabel_UnityEngine_GUIContent_content__UnityEngine_GUIStyle_style__UnityEngine_GUILayoutOption___options = 42562208; // System.Void DoLabel(UnityEngine.GUIContent content, UnityEngine.GUIStyle style, UnityEngine.GUILayoutOption[] options)
constexpr auto Box_System_String_text__UnityEngine_GUILayoutOption___options = 42560416; // System.Void Box(System.String text, UnityEngine.GUILayoutOption[] options)
constexpr auto DoBox_UnityEngine_GUIContent_content__UnityEngine_GUIStyle_style__UnityEngine_GUILayoutOption___options = 42561280; // System.Void DoBox(UnityEngine.GUIContent content, UnityEngine.GUIStyle style, UnityEngine.GUILayoutOption[] options)
constexpr auto Button_System_String_text__UnityEngine_GUILayoutOption___options = 42560848; // System.Boolean Button(System.String text, UnityEngine.GUILayoutOption[] options)
constexpr auto DoButton_UnityEngine_GUIContent_content__UnityEngine_GUIStyle_style__UnityEngine_GUILayoutOption___options = 42561520; // System.Boolean DoButton(UnityEngine.GUIContent content, UnityEngine.GUIStyle style, UnityEngine.GUILayoutOption[] options)
constexpr auto TextField_System_String_text__UnityEngine_GUILayoutOption___options = 42567648; // System.String TextField(System.String text, UnityEngine.GUILayoutOption[] options)
constexpr auto TextArea_System_String_text__UnityEngine_GUILayoutOption___options = 42567440; // System.String TextArea(System.String text, UnityEngine.GUILayoutOption[] options)
constexpr auto DoTextField_System_String_text__System_Int32_maxLength__System_Boolean_multiline__UnityEngine_GUIStyle_style__UnityEngine_GUILayoutOption___options = 42562512; // System.String DoTextField(System.String text, System.Int32 maxLength, System.Boolean multiline, UnityEngine.GUIStyle style, UnityEngine.GUILayoutOption[] options)
constexpr auto Toggle_System_Boolean_value__System_String_text__UnityEngine_GUILayoutOption___options = 42567856; // System.Boolean Toggle(System.Boolean value, System.String text, UnityEngine.GUILayoutOption[] options)
constexpr auto Toggle_System_Boolean_value__System_String_text__UnityEngine_GUIStyle_style__UnityEngine_GUILayoutOption___options = 42568112; // System.Boolean Toggle(System.Boolean value, System.String text, UnityEngine.GUIStyle style, UnityEngine.GUILayoutOption[] options)
constexpr auto DoToggle_System_Boolean_value__UnityEngine_GUIContent_content__UnityEngine_GUIStyle_style__UnityEngine_GUILayoutOption___options = 42563216; // System.Boolean DoToggle(System.Boolean value, UnityEngine.GUIContent content, UnityEngine.GUIStyle style, UnityEngine.GUILayoutOption[] options)
constexpr auto HorizontalSlider_System_Single_value__System_Single_leftValue__System_Single_rightValue__UnityEngine_GUILayoutOption___options = 42566224; // System.Single HorizontalSlider(System.Single value, System.Single leftValue, System.Single rightValue, UnityEngine.GUILayoutOption[] options)
constexpr auto DoHorizontalSlider_System_Single_value__System_Single_leftValue__System_Single_rightValue__UnityEngine_GUIStyle_slider__UnityEngine_GUIStyle_thumb__UnityEngine_GUILayoutOption___options = 42561760; // System.Single DoHorizontalSlider(System.Single value, System.Single leftValue, System.Single rightValue, UnityEngine.GUIStyle slider, UnityEngine.GUIStyle thumb, UnityEngine.GUILayoutOption[] options)
constexpr auto FlexibleSpace = 42564864; // System.Void FlexibleSpace()
constexpr auto BeginHorizontal_UnityEngine_GUILayoutOption___options = 42558880; // System.Void BeginHorizontal(UnityEngine.GUILayoutOption[] options)
constexpr auto BeginHorizontal_UnityEngine_GUIContent_content__UnityEngine_GUIStyle_style__UnityEngine_GUILayoutOption___options = 42559376; // System.Void BeginHorizontal(UnityEngine.GUIContent content, UnityEngine.GUIStyle style, UnityEngine.GUILayoutOption[] options)
constexpr auto EndHorizontal = 42564416; // System.Void EndHorizontal()
constexpr auto BeginVertical_UnityEngine_GUILayoutOption___options = 42560144; // System.Void BeginVertical(UnityEngine.GUILayoutOption[] options)
constexpr auto BeginVertical_UnityEngine_GUIStyle_style__UnityEngine_GUILayoutOption___options = 42560304; // System.Void BeginVertical(UnityEngine.GUIStyle style, UnityEngine.GUILayoutOption[] options)
constexpr auto BeginVertical_UnityEngine_GUIContent_content__UnityEngine_GUIStyle_style__UnityEngine_GUILayoutOption___options = 42559760; // System.Void BeginVertical(UnityEngine.GUIContent content, UnityEngine.GUIStyle style, UnityEngine.GUILayoutOption[] options)
constexpr auto EndVertical = 42564480; // System.Void EndVertical()
constexpr auto BeginArea_UnityEngine_Rect_screenRect = 42557888; // System.Void BeginArea(UnityEngine.Rect screenRect)
constexpr auto BeginArea_UnityEngine_Rect_screenRect__System_String_text__UnityEngine_GUIStyle_style = 42558752; // System.Void BeginArea(UnityEngine.Rect screenRect, System.String text, UnityEngine.GUIStyle style)
constexpr auto BeginArea_UnityEngine_Rect_screenRect__UnityEngine_GUIContent_content__UnityEngine_GUIStyle_style = 42558064; // System.Void BeginArea(UnityEngine.Rect screenRect, UnityEngine.GUIContent content, UnityEngine.GUIStyle style)
constexpr auto EndArea = 42563856; // System.Void EndArea()
constexpr auto Width_System_Single_width = 42568256; // UnityEngine.GUILayoutOption Width(System.Single width)
constexpr auto Height_System_Single_height = 42566048; // UnityEngine.GUILayoutOption Height(System.Single height)
constexpr auto ExpandWidth_System_Boolean_expand = 42564704; // UnityEngine.GUILayoutOption ExpandWidth(System.Boolean expand)
constexpr auto ExpandHeight_System_Boolean_expand = 42564544; // UnityEngine.GUILayoutOption ExpandHeight(System.Boolean expand)
}
}
namespace UnityEngine_GUIContent
{
namespace Fields
{
constexpr auto m_Text = 0x10; // System.String
constexpr auto m_Image = 0x18; // UnityEngine.Texture
constexpr auto m_Tooltip = 0x20; // System.String
}
namespace StaticFields
{
constexpr auto s_Text = 0x0; // UnityEngine.GUIContent
constexpr auto s_Image = 0x8; // UnityEngine.GUIContent
constexpr auto s_TextImage = 0x10; // UnityEngine.GUIContent
constexpr auto none = 0x18; // UnityEngine.GUIContent
}
namespace Methods
{
constexpr auto get_text = 42285520; // System.String get_text()
constexpr auto set_text_System_String_value = 3841728; // System.Void set_text(System.String value)
constexpr auto set_image_UnityEngine_Texture_value = 3836912; // System.Void set_image(UnityEngine.Texture value)
constexpr auto get_tooltip = 42091312; // System.String get_tooltip()
constexpr auto set_tooltip_System_String_value = 3841904; // System.Void set_tooltip(System.String value)
constexpr auto _ctor = 42529568; // System.Void .ctor()
constexpr auto _ctor_System_String_text = 42529680; // System.Void .ctor(System.String text)
constexpr auto _ctor_System_String_text__System_String_tooltip = 42529328; // System.Void .ctor(System.String text, System.String tooltip)
constexpr auto _ctor_System_String_text__UnityEngine_Texture_image__System_String_tooltip = 42529120; // System.Void .ctor(System.String text, UnityEngine.Texture image, System.String tooltip)
constexpr auto _ctor_UnityEngine_GUIContent_src = 42529360; // System.Void .ctor(UnityEngine.GUIContent src)
constexpr auto ToString = 42528368; // System.String ToString()
}
namespace StaticMethods
{
constexpr auto Temp_System_String_t = 42527664; // UnityEngine.GUIContent Temp(System.String t)
constexpr auto ClearStaticCache = 42527312; // System.Void ClearStaticCache()
constexpr auto Temp_System_String___texts = 42527856; // UnityEngine.GUIContent[] Temp(System.String[] texts)
constexpr auto _cctor = 42528416; // System.Void .cctor()
}
}
namespace UnityEngine_GUIClip
{
namespace StaticMethods
{
constexpr auto get_visibleRect = 42527248; // UnityEngine.Rect get_visibleRect()
constexpr auto Internal_Push_UnityEngine_Rect_screenRect__UnityEngine_Vector2_scrollOffset__UnityEngine_Vector2_renderOffset__System_Boolean_resetOffset = 42526384; // System.Void Internal_Push(UnityEngine.Rect screenRect, UnityEngine.Vector2 scrollOffset, UnityEngine.Vector2 renderOffset, System.Boolean resetOffset)
constexpr auto Internal_Pop = 42526224; // System.Void Internal_Pop()
constexpr auto Unclip_Vector2_UnityEngine_Vector2_pos = 42527024; // UnityEngine.Vector2 Unclip_Vector2(UnityEngine.Vector2 pos)
constexpr auto UnclipToWindow_Vector2_UnityEngine_Vector2_pos = 42526784; // UnityEngine.Vector2 UnclipToWindow_Vector2(UnityEngine.Vector2 pos)
constexpr auto GetMatrix = 42526144; // UnityEngine.Matrix4x4 GetMatrix()
constexpr auto SetMatrix_UnityEngine_Matrix4x4_m = 42526640; // System.Void SetMatrix(UnityEngine.Matrix4x4 m)
constexpr auto Push_UnityEngine_Rect_screenRect__UnityEngine_Vector2_scrollOffset__UnityEngine_Vector2_renderOffset__System_Boolean_resetOffset = 42526480; // System.Void Push(UnityEngine.Rect screenRect, UnityEngine.Vector2 scrollOffset, UnityEngine.Vector2 renderOffset, System.Boolean resetOffset)
constexpr auto Unclip_UnityEngine_Vector2_pos = 42527104; // UnityEngine.Vector2 Unclip(UnityEngine.Vector2 pos)
constexpr auto UnclipToWindow_UnityEngine_Vector2_pos = 42526864; // UnityEngine.Vector2 UnclipToWindow(UnityEngine.Vector2 pos)
constexpr auto get_visibleRect_Injected_out_UnityEngine_Rect_ret = 42527184; // System.Void get_visibleRect_Injected(out UnityEngine.Rect ret)
constexpr auto Internal_Push_Injected_UnityEngine_Rect_screenRect__UnityEngine_Vector2_scrollOffset__UnityEngine_Vector2_renderOffset__System_Boolean_resetOffset = 42526272; // System.Void Internal_Push_Injected(UnityEngine.Rect screenRect, UnityEngine.Vector2 scrollOffset, UnityEngine.Vector2 renderOffset, System.Boolean resetOffset)
constexpr auto Unclip_Vector2_Injected_UnityEngine_Vector2_pos__out_UnityEngine_Vector2_ret = 42526944; // System.Void Unclip_Vector2_Injected(UnityEngine.Vector2 pos, out UnityEngine.Vector2 ret)
constexpr auto UnclipToWindow_Vector2_Injected_UnityEngine_Vector2_pos__out_UnityEngine_Vector2_ret = 42526704; // System.Void UnclipToWindow_Vector2_Injected(UnityEngine.Vector2 pos, out UnityEngine.Vector2 ret)
constexpr auto GetMatrix_Injected_out_UnityEngine_Matrix4x4_ret = 42526080; // System.Void GetMatrix_Injected(out UnityEngine.Matrix4x4 ret)
constexpr auto SetMatrix_Injected_UnityEngine_Matrix4x4_m = 42526576; // System.Void SetMatrix_Injected(UnityEngine.Matrix4x4 m)
}
}
namespace UnityEngine_GUI
{
namespace StaticFields
{
constexpr auto s_HotTextField = 0x0; // System.Int32
constexpr auto s_BoxHash = 0x4; // System.Int32
constexpr auto s_ButonHash = 0x8; // System.Int32
constexpr auto s_RepeatButtonHash = 0xc; // System.Int32
constexpr auto s_ToggleHash = 0x10; // System.Int32
constexpr auto s_ButtonGridHash = 0x14; // System.Int32
constexpr auto s_SliderHash = 0x18; // System.Int32
constexpr auto s_BeginGroupHash = 0x1c; // System.Int32
constexpr auto s_ScrollviewHash = 0x20; // System.Int32
constexpr auto _scrollTroughSide_k__BackingField = 0x24; // System.Int32
constexpr auto _nextScrollStepTime_k__BackingField = 0x28; // System.DateTime
constexpr auto s_Skin = 0x30; // UnityEngine.GUISkin
constexpr auto s_ToolTipRect = 0x38; // UnityEngine.Rect
constexpr auto _scrollViewStates_k__BackingField = 0x48; // UnityEngineInternal.GenericStack
}
namespace StaticMethods
{
constexpr auto get_color = 42628144; // UnityEngine.Color get_color()
constexpr auto set_color_UnityEngine_Color_value = 42629056; // System.Void set_color(UnityEngine.Color value)
constexpr auto set_contentColor_UnityEngine_Color_value = 42629232; // System.Void set_contentColor(UnityEngine.Color value)
constexpr auto set_changed_System_Boolean_value = 42628928; // System.Void set_changed(System.Boolean value)
constexpr auto get_enabled = 42628256; // System.Boolean get_enabled()
constexpr auto set_enabled_System_Boolean_value = 42629344; // System.Void set_enabled(System.Boolean value)
constexpr auto get_usePageScrollbars = 42628880; // System.Boolean get_usePageScrollbars()
constexpr auto get_blendMaterial = 42627984; // UnityEngine.Material get_blendMaterial()
constexpr auto get_blitMaterial = 42628032; // UnityEngine.Material get_blitMaterial()
constexpr auto get_roundedRectMaterial = 42628528; // UnityEngine.Material get_roundedRectMaterial()
constexpr auto get_roundedRectWithColorPerBorderMaterial = 42628576; // UnityEngine.Material get_roundedRectWithColorPerBorderMaterial()
constexpr auto GrabMouseControl_System_Int32_id = 42618848; // System.Void GrabMouseControl(System.Int32 id)
constexpr auto HasMouseControl_System_Int32_id = 42623264; // System.Boolean HasMouseControl(System.Int32 id)
constexpr auto ReleaseMouseControl = 42624992; // System.Void ReleaseMouseControl()
constexpr auto SetNextControlName_System_String_name = 42626144; // System.Void SetNextControlName(System.String name)
constexpr auto InternalRepaintEditorWindow = 42624032; // System.Void InternalRepaintEditorWindow()
constexpr auto _cctor = 42627184; // System.Void .cctor()
constexpr auto get_scrollTroughSide = 42628624; // System.Int32 get_scrollTroughSide()
constexpr auto set_scrollTroughSide_System_Int32_value = 42629600; // System.Void set_scrollTroughSide(System.Int32 value)
constexpr auto get_nextScrollStepTime = 42628448; // System.DateTime get_nextScrollStepTime()
constexpr auto set_nextScrollStepTime_System_DateTime_value = 42629504; // System.Void set_nextScrollStepTime(System.DateTime value)
constexpr auto set_skin_UnityEngine_GUISkin_value = 42629696; // System.Void set_skin(UnityEngine.GUISkin value)
constexpr auto get_skin = 42628784; // UnityEngine.GUISkin get_skin()
constexpr auto DoSetSkin_UnityEngine_GUISkin_newSkin = 42611680; // System.Void DoSetSkin(UnityEngine.GUISkin newSkin)
constexpr auto get_matrix = 42628304; // UnityEngine.Matrix4x4 get_matrix()
constexpr auto set_matrix_UnityEngine_Matrix4x4_value = 42629408; // System.Void set_matrix(UnityEngine.Matrix4x4 value)
constexpr auto Label_UnityEngine_Rect_position__System_String_text = 42624304; // System.Void Label(UnityEngine.Rect position, System.String text)
constexpr auto Label_UnityEngine_Rect_position__System_String_text__UnityEngine_GUIStyle_style = 42624080; // System.Void Label(UnityEngine.Rect position, System.String text, UnityEngine.GUIStyle style)
constexpr auto Label_UnityEngine_Rect_position__UnityEngine_GUIContent_content__UnityEngine_GUIStyle_style = 42624560; // System.Void Label(UnityEngine.Rect position, UnityEngine.GUIContent content, UnityEngine.GUIStyle style)
constexpr auto DrawTexture_UnityEngine_Rect_position__UnityEngine_Texture_image = 42618384; // System.Void DrawTexture(UnityEngine.Rect position, UnityEngine.Texture image)
constexpr auto DrawTexture_UnityEngine_Rect_position__UnityEngine_Texture_image__UnityEngine_ScaleMode_scaleMode = 42618016; // System.Void DrawTexture(UnityEngine.Rect position, UnityEngine.Texture image, UnityEngine.ScaleMode scaleMode)
constexpr auto DrawTexture_UnityEngine_Rect_position__UnityEngine_Texture_image__UnityEngine_ScaleMode_scaleMode__System_Boolean_alphaBlend = 42613744; // System.Void DrawTexture(UnityEngine.Rect position, UnityEngine.Texture image, UnityEngine.ScaleMode scaleMode, System.Boolean alphaBlend)
constexpr auto DrawTexture_UnityEngine_Rect_position__UnityEngine_Texture_image__UnityEngine_ScaleMode_scaleMode__System_Boolean_alphaBlend__System_Single_imageAspect = 42617088; // System.Void DrawTexture(UnityEngine.Rect position, UnityEngine.Texture image, UnityEngine.ScaleMode scaleMode, System.Boolean alphaBlend, System.Single imageAspect)
constexpr auto DrawTexture_UnityEngine_Rect_position__UnityEngine_Texture_image__UnityEngine_ScaleMode_scaleMode__System_Boolean_alphaBlend__System_Single_imageAspect__UnityEngine_Color_color__System_Single_borderWidth__System_Single_borderRadius = 42617376; // System.Void DrawTexture(UnityEngine.Rect position, UnityEngine.Texture image, UnityEngine.ScaleMode scaleMode, System.Boolean alphaBlend, System.Single imageAspect, UnityEngine.Color color, System.Single borderWidth, System.Single borderRadius)
constexpr auto DrawTexture_UnityEngine_Rect_position__UnityEngine_Texture_image__UnityEngine_ScaleMode_scaleMode__System_Boolean_alphaBlend__System_Single_imageAspect__UnityEngine_Color_color__UnityEngine_Vector4_borderWidths__System_Single_borderRadius = 42614080; // System.Void DrawTexture(UnityEngine.Rect position, UnityEngine.Texture image, UnityEngine.ScaleMode scaleMode, System.Boolean alphaBlend, System.Single imageAspect, UnityEngine.Color color, UnityEngine.Vector4 borderWidths, System.Single borderRadius)
constexpr auto DrawTexture_UnityEngine_Rect_position__UnityEngine_Texture_image__UnityEngine_ScaleMode_scaleMode__System_Boolean_alphaBlend__System_Single_imageAspect__UnityEngine_Color_color__UnityEngine_Vector4_borderWidths__UnityEngine_Vector4_borderRadiuses = 42616704; // System.Void DrawTexture(UnityEngine.Rect position, UnityEngine.Texture image, UnityEngine.ScaleMode scaleMode, System.Boolean alphaBlend, System.Single imageAspect, UnityEngine.Color color, UnityEngine.Vector4 borderWidths, UnityEngine.Vector4 borderRadiuses)
constexpr auto DrawTexture_UnityEngine_Rect_position__UnityEngine_Texture_image__UnityEngine_ScaleMode_scaleMode__System_Boolean_alphaBlend__System_Single_imageAspect__UnityEngine_Color_color__UnityEngine_Vector4_borderWidths__UnityEngine_Vector4_borderRadiuses__System_Boolean_drawSmoothCorners = 42616368; // System.Void DrawTexture(UnityEngine.Rect position, UnityEngine.Texture image, UnityEngine.ScaleMode scaleMode, System.Boolean alphaBlend, System.Single imageAspect, UnityEngine.Color color, UnityEngine.Vector4 borderWidths, UnityEngine.Vector4 borderRadiuses, System.Boolean drawSmoothCorners)
constexpr auto DrawTexture_UnityEngine_Rect_position__UnityEngine_Texture_image__UnityEngine_ScaleMode_scaleMode__System_Boolean_alphaBlend__System_Single_imageAspect__UnityEngine_Color_leftColor__UnityEngine_Color_topColor__UnityEngine_Color_rightColor__UnityEngine_Color_bottomColor__UnityEngine_Vector4_borderWidths__UnityEngine_Vector4_borderRadiuses__System_Boolean_drawSmoothCorners = 42614624; // System.Void DrawTexture(UnityEngine.Rect position, UnityEngine.Texture image, UnityEngine.ScaleMode scaleMode, System.Boolean alphaBlend, System.Single imageAspect, UnityEngine.Color leftColor, UnityEngine.Color topColor, UnityEngine.Color rightColor, UnityEngine.Color bottomColor, UnityEngine.Vector4 borderWidths, UnityEngine.Vector4 borderRadiuses, System.Boolean drawSmoothCorners)
constexpr auto CalculateScaledTextureRects_UnityEngine_Rect_position__UnityEngine_ScaleMode_scaleMode__System_Single_imageAspect__UnityEngine_Rect_outScreenRect__UnityEngine_Rect_outSourceRect = 42604288; // System.Boolean CalculateScaledTextureRects(UnityEngine.Rect position, UnityEngine.ScaleMode scaleMode, System.Single imageAspect, UnityEngine.Rect outScreenRect, UnityEngine.Rect outSourceRect)
constexpr auto Box_UnityEngine_Rect_position__System_String_text = 42601632; // System.Void Box(UnityEngine.Rect position, System.String text)
constexpr auto Box_UnityEngine_Rect_position__UnityEngine_GUIContent_content__UnityEngine_GUIStyle_style = 42601184; // System.Void Box(UnityEngine.Rect position, UnityEngine.GUIContent content, UnityEngine.GUIStyle style)
constexpr auto Button_UnityEngine_Rect_position__System_String_text = 42601824; // System.Boolean Button(UnityEngine.Rect position, System.String text)
constexpr auto Button_UnityEngine_Rect_position__UnityEngine_GUIContent_content__UnityEngine_GUIStyle_style = 42602016; // System.Boolean Button(UnityEngine.Rect position, UnityEngine.GUIContent content, UnityEngine.GUIStyle style)
constexpr auto Button_UnityEngine_Rect_position__System_Int32_id__UnityEngine_GUIContent_content__UnityEngine_GUIStyle_style = 42602528; // System.Boolean Button(UnityEngine.Rect position, System.Int32 id, UnityEngine.GUIContent content, UnityEngine.GUIStyle style)
constexpr auto PasswordFieldGetStrToShow_System_String_password__System_Char_maskChar = 42624688; // System.String PasswordFieldGetStrToShow(System.String password, System.Char maskChar)
constexpr auto DoTextField_UnityEngine_Rect_position__System_Int32_id__UnityEngine_GUIContent_content__System_Boolean_multiline__System_Int32_maxLength__UnityEngine_GUIStyle_style = 42612160; // System.Void DoTextField(UnityEngine.Rect position, System.Int32 id, UnityEngine.GUIContent content, System.Boolean multiline, System.Int32 maxLength, UnityEngine.GUIStyle style)
constexpr auto DoTextField_UnityEngine_Rect_position__System_Int32_id__UnityEngine_GUIContent_content__System_Boolean_multiline__System_Int32_maxLength__UnityEngine_GUIStyle_style__System_String_secureText = 42613232; // System.Void DoTextField(UnityEngine.Rect position, System.Int32 id, UnityEngine.GUIContent content, System.Boolean multiline, System.Int32 maxLength, UnityEngine.GUIStyle style, System.String secureText)
constexpr auto DoTextField_UnityEngine_Rect_position__System_Int32_id__UnityEngine_GUIContent_content__System_Boolean_multiline__System_Int32_maxLength__UnityEngine_GUIStyle_style__System_String_secureText__System_Char_maskChar = 42612384; // System.Void DoTextField(UnityEngine.Rect position, System.Int32 id, UnityEngine.GUIContent content, System.Boolean multiline, System.Int32 maxLength, UnityEngine.GUIStyle style, System.String secureText, System.Char maskChar)
constexpr auto HandleTextFieldEventForTouchscreen_UnityEngine_Rect_position__System_Int32_id__UnityEngine_GUIContent_content__System_Boolean_multiline__System_Int32_maxLength__UnityEngine_GUIStyle_style__System_String_secureText__System_Char_maskChar__UnityEngine_TextEditor_editor = 42621824; // System.Void HandleTextFieldEventForTouchscreen(UnityEngine.Rect position, System.Int32 id, UnityEngine.GUIContent content, System.Boolean multiline, System.Int32 maxLength, UnityEngine.GUIStyle style, System.String secureText, System.Char maskChar, UnityEngine.TextEditor editor)
constexpr auto HandleTextFieldEventForDesktop_UnityEngine_Rect_position__System_Int32_id__UnityEngine_GUIContent_content__System_Boolean_multiline__System_Int32_maxLength__UnityEngine_GUIStyle_style__UnityEngine_TextEditor_editor = 42619808; // System.Void HandleTextFieldEventForDesktop(UnityEngine.Rect position, System.Int32 id, UnityEngine.GUIContent content, System.Boolean multiline, System.Int32 maxLength, UnityEngine.GUIStyle style, UnityEngine.TextEditor editor)
constexpr auto HandleTextFieldEventForDesktopWithForcedKeyboard_UnityEngine_Rect_position__System_Int32_id__UnityEngine_GUIContent_content__System_Boolean_multiline__System_Int32_maxLength__UnityEngine_GUIStyle_style__System_String_secureText__UnityEngine_TextEditor_editor = 42618912; // System.Void HandleTextFieldEventForDesktopWithForcedKeyboard(UnityEngine.Rect position, System.Int32 id, UnityEngine.GUIContent content, System.Boolean multiline, System.Int32 maxLength, UnityEngine.GUIStyle style, System.String secureText, UnityEngine.TextEditor editor)
constexpr auto Toggle_UnityEngine_Rect_position__System_Boolean_value__UnityEngine_GUIContent_content__UnityEngine_GUIStyle_style = 42626704; // System.Boolean Toggle(UnityEngine.Rect position, System.Boolean value, UnityEngine.GUIContent content, UnityEngine.GUIStyle style)
constexpr auto SelectionGrid_UnityEngine_Rect_position__System_Int32_selected__System_String___texts__System_Int32_xCount = 42625040; // System.Int32 SelectionGrid(UnityEngine.Rect position, System.Int32 selected, System.String[] texts, System.Int32 xCount)
constexpr auto SelectionGrid_UnityEngine_Rect_position__System_Int32_selected__UnityEngine_GUIContent___contents__System_Int32_xCount__UnityEngine_GUIStyle_style = 42625904; // System.Int32 SelectionGrid(UnityEngine.Rect position, System.Int32 selected, UnityEngine.GUIContent[] contents, System.Int32 xCount, UnityEngine.GUIStyle style)
constexpr auto CalcTotalHorizSpacing_System_Int32_xCount__UnityEngine_GUIStyle_style__UnityEngine_GUIStyle_firstStyle__UnityEngine_GUIStyle_midStyle__UnityEngine_GUIStyle_lastStyle = 42603872; // System.Int32 CalcTotalHorizSpacing(System.Int32 xCount, UnityEngine.GUIStyle style, UnityEngine.GUIStyle firstStyle, UnityEngine.GUIStyle midStyle, UnityEngine.GUIStyle lastStyle)
constexpr auto DoControl_UnityEngine_Rect_position__System_Int32_id__System_Boolean_on__System_Boolean_hover__UnityEngine_GUIContent_content__UnityEngine_GUIStyle_style = 42609712; // System.Boolean DoControl(UnityEngine.Rect position, System.Int32 id, System.Boolean on, System.Boolean hover, UnityEngine.GUIContent content, UnityEngine.GUIStyle style)
constexpr auto DoLabel_UnityEngine_Rect_position__UnityEngine_GUIContent_content__UnityEngine_GUIStyle_style = 42610752; // System.Void DoLabel(UnityEngine.Rect position, UnityEngine.GUIContent content, UnityEngine.GUIStyle style)
constexpr auto DoToggle_UnityEngine_Rect_position__System_Int32_id__System_Boolean_value__UnityEngine_GUIContent_content__UnityEngine_GUIStyle_style = 42613424; // System.Boolean DoToggle(UnityEngine.Rect position, System.Int32 id, System.Boolean value, UnityEngine.GUIContent content, UnityEngine.GUIStyle style)
constexpr auto DoButton_UnityEngine_Rect_position__System_Int32_id__UnityEngine_GUIContent_content__UnityEngine_GUIStyle_style = 42609408; // System.Boolean DoButton(UnityEngine.Rect position, System.Int32 id, UnityEngine.GUIContent content, UnityEngine.GUIStyle style)
constexpr auto DoButtonGrid_UnityEngine_Rect_position__System_Int32_selected__UnityEngine_GUIContent___contents__System_String___controlNames__System_Int32_itemsPerRow__UnityEngine_GUIStyle_style__UnityEngine_GUIStyle_firstStyle__UnityEngine_GUIStyle_midStyle__UnityEngine_GUIStyle_lastStyle__UnityEngine_GUI_ToolbarButtonSize_buttonSize__System_Boolean___contentsEnabled___null = 42606240; // System.Int32 DoButtonGrid(UnityEngine.Rect position, System.Int32 selected, UnityEngine.GUIContent[] contents, System.String[] controlNames, System.Int32 itemsPerRow, UnityEngine.GUIStyle style, UnityEngine.GUIStyle firstStyle, UnityEngine.GUIStyle midStyle, UnityEngine.GUIStyle lastStyle, UnityEngine.GUI/ToolbarButtonSize buttonSize, System.Boolean[] contentsEnabled = null)
constexpr auto CalcGridRects_UnityEngine_Rect_position__UnityEngine_GUIContent___contents__System_Int32_xCount__System_Single_elemWidth__System_Single_elemHeight__UnityEngine_GUIStyle_style__UnityEngine_GUIStyle_firstStyle__UnityEngine_GUIStyle_midStyle__UnityEngine_GUIStyle_lastStyle__UnityEngine_GUI_ToolbarButtonSize_buttonSize = 42602880; // UnityEngine.Rect[] CalcGridRects(UnityEngine.Rect position, UnityEngine.GUIContent[] contents, System.Int32 xCount, System.Single elemWidth, System.Single elemHeight, UnityEngine.GUIStyle style, UnityEngine.GUIStyle firstStyle, UnityEngine.GUIStyle midStyle, UnityEngine.GUIStyle lastStyle, UnityEngine.GUI/ToolbarButtonSize buttonSize)
constexpr auto HorizontalSlider_UnityEngine_Rect_position__System_Single_value__System_Single_leftValue__System_Single_rightValue = 42623536; // System.Single HorizontalSlider(UnityEngine.Rect position, System.Single value, System.Single leftValue, System.Single rightValue)
constexpr auto HorizontalSlider_UnityEngine_Rect_position__System_Single_value__System_Single_leftValue__System_Single_rightValue__UnityEngine_GUIStyle_slider__UnityEngine_GUIStyle_thumb = 42623328; // System.Single HorizontalSlider(UnityEngine.Rect position, System.Single value, System.Single leftValue, System.Single rightValue, UnityEngine.GUIStyle slider, UnityEngine.GUIStyle thumb)
constexpr auto Slider_UnityEngine_Rect_position__System_Single_value__System_Single_size__System_Single_start__System_Single_end__UnityEngine_GUIStyle_slider__UnityEngine_GUIStyle_thumb__System_Boolean_horiz__System_Int32_id__UnityEngine_GUIStyle_thumbExtent___null = 42626208; // System.Single Slider(UnityEngine.Rect position, System.Single value, System.Single size, System.Single start, System.Single end, UnityEngine.GUIStyle slider, UnityEngine.GUIStyle thumb, System.Boolean horiz, System.Int32 id, UnityEngine.GUIStyle thumbExtent = null)
constexpr auto BeginGroup_UnityEngine_Rect_position__UnityEngine_GUIContent_content__UnityEngine_GUIStyle_style = 42600992; // System.Void BeginGroup(UnityEngine.Rect position, UnityEngine.GUIContent content, UnityEngine.GUIStyle style)
constexpr auto BeginGroup_UnityEngine_Rect_position__UnityEngine_GUIContent_content__UnityEngine_GUIStyle_style__UnityEngine_Vector2_scrollOffset = 42600160; // System.Void BeginGroup(UnityEngine.Rect position, UnityEngine.GUIContent content, UnityEngine.GUIStyle style, UnityEngine.Vector2 scrollOffset)
constexpr auto EndGroup = 42618784; // System.Void EndGroup()
constexpr auto get_scrollViewStates = 42628704; // UnityEngineInternal.GenericStack get_scrollViewStates()
constexpr auto CallWindowDelegate_UnityEngine_GUI_WindowFunction_func__System_Int32_id__System_Int32_instanceID__UnityEngine_GUISkin__skin__System_Int32_forceRect__System_Single_width__System_Single_height__UnityEngine_GUIStyle_style = 42605104; // System.Void CallWindowDelegate(UnityEngine.GUI/WindowFunction func, System.Int32 id, System.Int32 instanceID, UnityEngine.GUISkin _skin, System.Int32 forceRect, System.Single width, System.Single height, UnityEngine.GUIStyle style)
constexpr auto get_color_Injected_out_UnityEngine_Color_ret = 42628080; // System.Void get_color_Injected(out UnityEngine.Color ret)
constexpr auto set_color_Injected_UnityEngine_Color_value = 42628992; // System.Void set_color_Injected(UnityEngine.Color value)
constexpr auto set_contentColor_Injected_UnityEngine_Color_value = 42629168; // System.Void set_contentColor_Injected(UnityEngine.Color value)
}
}
namespace UnityEngine_GUI_WindowFunction
{
namespace Methods
{
constexpr auto _ctor_System_Object_object__System_IntPtr_method = 21831728; // System.Void .ctor(System.Object object, System.IntPtr method)
constexpr auto Invoke_System_Int32_id = 3888752; // System.Void Invoke(System.Int32 id)
}
}
namespace UnityEngine_RectTransformEx
{
namespace StaticMethods
{
constexpr auto AnchorToCorners_UnityEngine_RectTransform_transform = 35543392; // System.Void AnchorToCorners(UnityEngine.RectTransform transform)
constexpr auto Fill_UnityEngine_RectTransform_tx__System_Single_l___0__System_Single_t___0__System_Single_r___0__System_Single_b___0 = 35544400; // System.Void Fill(UnityEngine.RectTransform tx, System.Single l = 0, System.Single t = 0, System.Single r = 0, System.Single b = 0)
constexpr auto AnchorTopRight_UnityEngine_RectTransform_tx = 35544048; // System.Void AnchorTopRight(UnityEngine.RectTransform tx)
constexpr auto AlignRight_UnityEngine_RectTransform_tx__System_Single_offset___0 = 35542944; // UnityEngine.RectTransform AlignRight(UnityEngine.RectTransform tx, System.Single offset = 0)
constexpr auto AlignLeft_UnityEngine_RectTransform_tx__System_Single_offset___0 = 35542736; // UnityEngine.RectTransform AlignLeft(UnityEngine.RectTransform tx, System.Single offset = 0)
constexpr auto AlignTop_UnityEngine_RectTransform_tx__System_Single_offset___0 = 35543168; // UnityEngine.RectTransform AlignTop(UnityEngine.RectTransform tx, System.Single offset = 0)
constexpr auto GetScreenRect_UnityEngine_RectTransform_transform = 35544912; // UnityEngine.Rect GetScreenRect(UnityEngine.RectTransform transform)
constexpr auto SetPivotAndAnchors_UnityEngine_RectTransform_trans__UnityEngine_Vector2_aVec = 35546176; // System.Void SetPivotAndAnchors(UnityEngine.RectTransform trans, UnityEngine.Vector2 aVec)
constexpr auto GetSize_UnityEngine_RectTransform_trans = 35545072; // UnityEngine.Vector2 GetSize(UnityEngine.RectTransform trans)
constexpr auto GetWidth_UnityEngine_RectTransform_trans = 35545136; // System.Single GetWidth(UnityEngine.RectTransform trans)
constexpr auto GetHeight_UnityEngine_RectTransform_trans = 35544848; // System.Single GetHeight(UnityEngine.RectTransform trans)
constexpr auto SetSize_UnityEngine_RectTransform_trans__UnityEngine_Vector2_newSize = 35546560; // System.Boolean SetSize(UnityEngine.RectTransform trans, UnityEngine.Vector2 newSize)
constexpr auto SetWidth_UnityEngine_RectTransform_trans__System_Single_newSize = 35547344; // System.Boolean SetWidth(UnityEngine.RectTransform trans, System.Single newSize)
constexpr auto MoveY_UnityEngine_RectTransform_trans__System_Single_amount = 35545200; // System.Void MoveY(UnityEngine.RectTransform trans, System.Single amount)
constexpr auto Move_UnityEngine_RectTransform_trans__UnityEngine_Vector2_move = 35545360; // System.Void Move(UnityEngine.RectTransform trans, UnityEngine.Vector2 move)
constexpr auto SetHeight_UnityEngine_RectTransform_trans__System_Single_newSize = 35546064; // System.Boolean SetHeight(UnityEngine.RectTransform trans, System.Single newSize)
constexpr auto SetBottomLeftPosition_UnityEngine_RectTransform_trans__UnityEngine_Vector2_newPos = 35545504; // System.Void SetBottomLeftPosition(UnityEngine.RectTransform trans, UnityEngine.Vector2 newPos)
constexpr auto SetTopLeftPosition_UnityEngine_RectTransform_trans__UnityEngine_Vector2_newPos = 35547056; // System.Void SetTopLeftPosition(UnityEngine.RectTransform trans, UnityEngine.Vector2 newPos)
constexpr auto SetBottomRightPosition_UnityEngine_RectTransform_trans__UnityEngine_Vector2_newPos = 35545776; // System.Void SetBottomRightPosition(UnityEngine.RectTransform trans, UnityEngine.Vector2 newPos)
constexpr auto SetRightTopPosition_UnityEngine_RectTransform_trans__UnityEngine_Vector2_newPos = 35546272; // System.Void SetRightTopPosition(UnityEngine.RectTransform trans, UnityEngine.Vector2 newPos)
constexpr auto DoAutoLayout_UnityEngine_RectTransform_trans = 35544160; // System.Void DoAutoLayout(UnityEngine.RectTransform trans)
}
}
namespace UnityEngine_Rendering_CommandBuffer
{
namespace Fields
{
constexpr auto m_Ptr = 0x10; // System.IntPtr
}
namespace Methods
{
constexpr auto Internal_SetSinglePassStereo_UnityEngine_Rendering_SinglePassStereoMode_mode = 42388528; // System.Void Internal_SetSinglePassStereo(UnityEngine.Rendering.SinglePassStereoMode mode)
constexpr auto ReleaseBuffer = 42388992; // System.Void ReleaseBuffer()
constexpr auto SetComputeFloatParam_UnityEngine_ComputeShader_computeShader__System_Int32_nameID__System_Single_val = 42389232; // System.Void SetComputeFloatParam(UnityEngine.ComputeShader computeShader, System.Int32 nameID, System.Single val)
constexpr auto SetComputeIntParam_UnityEngine_ComputeShader_computeShader__System_Int32_nameID__System_Int32_val = 42389568; // System.Void SetComputeIntParam(UnityEngine.ComputeShader computeShader, System.Int32 nameID, System.Int32 val)
constexpr auto SetComputeVectorParam_UnityEngine_ComputeShader_computeShader__System_Int32_nameID__UnityEngine_Vector4_val = 42390176; // System.Void SetComputeVectorParam(UnityEngine.ComputeShader computeShader, System.Int32 nameID, UnityEngine.Vector4 val)
constexpr auto Internal_SetComputeFloats_UnityEngine_ComputeShader_computeShader__System_Int32_nameID__System_Single___values = 42388304; // System.Void Internal_SetComputeFloats(UnityEngine.ComputeShader computeShader, System.Int32 nameID, System.Single[] values)
constexpr auto Internal_SetComputeTextureParam_UnityEngine_ComputeShader_computeShader__System_Int32_kernelIndex__System_Int32_nameID__UnityEngine_Rendering_RenderTargetIdentifier_rt__System_Int32_mipLevel__UnityEngine_Rendering_RenderTextureSubElement_element = 42388416; // System.Void Internal_SetComputeTextureParam(UnityEngine.ComputeShader computeShader, System.Int32 kernelIndex, System.Int32 nameID, UnityEngine.Rendering.RenderTargetIdentifier rt, System.Int32 mipLevel, UnityEngine.Rendering.RenderTextureSubElement element)
constexpr auto Internal_SetComputeBufferParam_UnityEngine_ComputeShader_computeShader__System_Int32_kernelIndex__System_Int32_nameID__UnityEngine_ComputeBuffer_buffer = 42388192; // System.Void Internal_SetComputeBufferParam(UnityEngine.ComputeShader computeShader, System.Int32 kernelIndex, System.Int32 nameID, UnityEngine.ComputeBuffer buffer)
constexpr auto Internal_DispatchCompute_UnityEngine_ComputeShader_computeShader__System_Int32_kernelIndex__System_Int32_threadGroupsX__System_Int32_threadGroupsY__System_Int32_threadGroupsZ = 42379056; // System.Void Internal_DispatchCompute(UnityEngine.ComputeShader computeShader, System.Int32 kernelIndex, System.Int32 threadGroupsX, System.Int32 threadGroupsY, System.Int32 threadGroupsZ)
constexpr auto Internal_GenerateMips_UnityEngine_Rendering_RenderTargetIdentifier_rt = 42388112; // System.Void Internal_GenerateMips(UnityEngine.Rendering.RenderTargetIdentifier rt)
constexpr auto get_name = 42397040; // System.String get_name()
constexpr auto set_name_System_String_value = 42397104; // System.Void set_name(System.String value)
constexpr auto Clear = 42378208; // System.Void Clear()
constexpr auto Internal_DrawMesh_UnityEngine_Mesh_mesh__UnityEngine_Matrix4x4_matrix__UnityEngine_Material_material__System_Int32_submeshIndex__System_Int32_shaderPass__UnityEngine_MaterialPropertyBlock_properties = 42387536; // System.Void Internal_DrawMesh(UnityEngine.Mesh mesh, UnityEngine.Matrix4x4 matrix, UnityEngine.Material material, System.Int32 submeshIndex, System.Int32 shaderPass, UnityEngine.MaterialPropertyBlock properties)
constexpr auto Internal_DrawRenderer_UnityEngine_Renderer_renderer__UnityEngine_Material_material__System_Int32_submeshIndex__System_Int32_shaderPass = 42387920; // System.Void Internal_DrawRenderer(UnityEngine.Renderer renderer, UnityEngine.Material material, System.Int32 submeshIndex, System.Int32 shaderPass)
constexpr auto Internal_DrawProcedural_UnityEngine_Matrix4x4_matrix__UnityEngine_Material_material__System_Int32_shaderPass__UnityEngine_MeshTopology_topology__System_Int32_vertexCount__System_Int32_instanceCount__UnityEngine_MaterialPropertyBlock_properties = 42387776; // System.Void Internal_DrawProcedural(UnityEngine.Matrix4x4 matrix, UnityEngine.Material material, System.Int32 shaderPass, UnityEngine.MeshTopology topology, System.Int32 vertexCount, System.Int32 instanceCount, UnityEngine.MaterialPropertyBlock properties)
constexpr auto Internal_DrawMeshInstanced_UnityEngine_Mesh_mesh__System_Int32_submeshIndex__UnityEngine_Material_material__System_Int32_shaderPass__UnityEngine_Matrix4x4___matrices__System_Int32_count__UnityEngine_MaterialPropertyBlock_properties = 42387312; // System.Void Internal_DrawMeshInstanced(UnityEngine.Mesh mesh, System.Int32 submeshIndex, UnityEngine.Material material, System.Int32 shaderPass, UnityEngine.Matrix4x4[] matrices, System.Int32 count, UnityEngine.MaterialPropertyBlock properties)
constexpr auto Internal_DrawMeshInstancedIndirect_UnityEngine_Mesh_mesh__System_Int32_submeshIndex__UnityEngine_Material_material__System_Int32_shaderPass__UnityEngine_ComputeBuffer_bufferWithArgs__System_Int32_argsOffset__UnityEngine_MaterialPropertyBlock_properties = 42387200; // System.Void Internal_DrawMeshInstancedIndirect(UnityEngine.Mesh mesh, System.Int32 submeshIndex, UnityEngine.Material material, System.Int32 shaderPass, UnityEngine.ComputeBuffer bufferWithArgs, System.Int32 argsOffset, UnityEngine.MaterialPropertyBlock properties)
constexpr auto SetViewport_UnityEngine_Rect_pixelRect = 42396816; // System.Void SetViewport(UnityEngine.Rect pixelRect)
constexpr auto CopyTexture_Internal_UnityEngine_Rendering_RenderTargetIdentifier_src__System_Int32_srcElement__System_Int32_srcMip__System_Int32_srcX__System_Int32_srcY__System_Int32_srcWidth__System_Int32_srcHeight__UnityEngine_Rendering_RenderTargetIdentifier_dst__System_Int32_dstElement__System_Int32_dstMip__System_Int32_dstX__System_Int32_dstY__System_Int32_mode = 42378272; // System.Void CopyTexture_Internal(UnityEngine.Rendering.RenderTargetIdentifier src, System.Int32 srcElement, System.Int32 srcMip, System.Int32 srcX, System.Int32 srcY, System.Int32 srcWidth, System.Int32 srcHeight, UnityEngine.Rendering.RenderTargetIdentifier dst, System.Int32 dstElement, System.Int32 dstMip, System.Int32 dstX, System.Int32 dstY, System.Int32 mode)
constexpr auto Blit_Texture_UnityEngine_Texture_source__UnityEngine_Rendering_RenderTargetIdentifier_dest__UnityEngine_Material_mat__System_Int32_pass__UnityEngine_Vector2_scale__UnityEngine_Vector2_offset__System_Int32_sourceDepthSlice__System_Int32_destDepthSlice = 42376048; // System.Void Blit_Texture(UnityEngine.Texture source, UnityEngine.Rendering.RenderTargetIdentifier dest, UnityEngine.Material mat, System.Int32 pass, UnityEngine.Vector2 scale, UnityEngine.Vector2 offset, System.Int32 sourceDepthSlice, System.Int32 destDepthSlice)
constexpr auto Blit_Identifier_UnityEngine_Rendering_RenderTargetIdentifier_source__UnityEngine_Rendering_RenderTargetIdentifier_dest__UnityEngine_Material_mat__System_Int32_pass__UnityEngine_Vector2_scale__UnityEngine_Vector2_offset__System_Int32_sourceDepthSlice__System_Int32_destDepthSlice = 42375776; // System.Void Blit_Identifier(UnityEngine.Rendering.RenderTargetIdentifier source, UnityEngine.Rendering.RenderTargetIdentifier dest, UnityEngine.Material mat, System.Int32 pass, UnityEngine.Vector2 scale, UnityEngine.Vector2 offset, System.Int32 sourceDepthSlice, System.Int32 destDepthSlice)
constexpr auto GetTemporaryRT_System_Int32_nameID__System_Int32_width__System_Int32_height__System_Int32_depthBuffer__UnityEngine_FilterMode_filter__UnityEngine_Experimental_Rendering_GraphicsFormat_format__System_Int32_antiAliasing__System_Boolean_enableRandomWrite__UnityEngine_RenderTextureMemoryless_memorylessMode__System_Boolean_useDynamicScale = 42386448; // System.Void GetTemporaryRT(System.Int32 nameID, System.Int32 width, System.Int32 height, System.Int32 depthBuffer, UnityEngine.FilterMode filter, UnityEngine.Experimental.Rendering.GraphicsFormat format, System.Int32 antiAliasing, System.Boolean enableRandomWrite, UnityEngine.RenderTextureMemoryless memorylessMode, System.Boolean useDynamicScale)
constexpr auto GetTemporaryRT_System_Int32_nameID__System_Int32_width__System_Int32_height__System_Int32_depthBuffer__UnityEngine_FilterMode_filter__UnityEngine_Experimental_Rendering_GraphicsFormat_format__System_Int32_antiAliasing__System_Boolean_enableRandomWrite__UnityEngine_RenderTextureMemoryless_memorylessMode = 42385648; // System.Void GetTemporaryRT(System.Int32 nameID, System.Int32 width, System.Int32 height, System.Int32 depthBuffer, UnityEngine.FilterMode filter, UnityEngine.Experimental.Rendering.GraphicsFormat format, System.Int32 antiAliasing, System.Boolean enableRandomWrite, UnityEngine.RenderTextureMemoryless memorylessMode)
constexpr auto GetTemporaryRT_System_Int32_nameID__System_Int32_width__System_Int32_height__System_Int32_depthBuffer__UnityEngine_FilterMode_filter__UnityEngine_Experimental_Rendering_GraphicsFormat_format__System_Int32_antiAliasing = 42384608; // System.Void GetTemporaryRT(System.Int32 nameID, System.Int32 width, System.Int32 height, System.Int32 depthBuffer, UnityEngine.FilterMode filter, UnityEngine.Experimental.Rendering.GraphicsFormat format, System.Int32 antiAliasing)
constexpr auto GetTemporaryRT_System_Int32_nameID__System_Int32_width__System_Int32_height__System_Int32_depthBuffer__UnityEngine_FilterMode_filter__UnityEngine_Experimental_Rendering_GraphicsFormat_format = 42385904; // System.Void GetTemporaryRT(System.Int32 nameID, System.Int32 width, System.Int32 height, System.Int32 depthBuffer, UnityEngine.FilterMode filter, UnityEngine.Experimental.Rendering.GraphicsFormat format)
constexpr auto GetTemporaryRT_System_Int32_nameID__System_Int32_width__System_Int32_height__System_Int32_depthBuffer__UnityEngine_FilterMode_filter__UnityEngine_RenderTextureFormat_format__UnityEngine_RenderTextureReadWrite_readWrite__System_Int32_antiAliasing__System_Boolean_enableRandomWrite__UnityEngine_RenderTextureMemoryless_memorylessMode__System_Boolean_useDynamicScale = 42384784; // System.Void GetTemporaryRT(System.Int32 nameID, System.Int32 width, System.Int32 height, System.Int32 depthBuffer, UnityEngine.FilterMode filter, UnityEngine.RenderTextureFormat format, UnityEngine.RenderTextureReadWrite readWrite, System.Int32 antiAliasing, System.Boolean enableRandomWrite, UnityEngine.RenderTextureMemoryless memorylessMode, System.Boolean useDynamicScale)
constexpr auto GetTemporaryRT_System_Int32_nameID__System_Int32_width__System_Int32_height__System_Int32_depthBuffer__UnityEngine_FilterMode_filter__UnityEngine_RenderTextureFormat_format__UnityEngine_RenderTextureReadWrite_readWrite__System_Int32_antiAliasing__System_Boolean_enableRandomWrite__UnityEngine_RenderTextureMemoryless_memorylessMode = 42386192; // System.Void GetTemporaryRT(System.Int32 nameID, System.Int32 width, System.Int32 height, System.Int32 depthBuffer, UnityEngine.FilterMode filter, UnityEngine.RenderTextureFormat format, UnityEngine.RenderTextureReadWrite readWrite, System.Int32 antiAliasing, System.Boolean enableRandomWrite, UnityEngine.RenderTextureMemoryless memorylessMode)
constexpr auto GetTemporaryRT_System_Int32_nameID__System_Int32_width__System_Int32_height__System_Int32_depthBuffer__UnityEngine_FilterMode_filter__UnityEngine_RenderTextureFormat_format__UnityEngine_RenderTextureReadWrite_readWrite__System_Int32_antiAliasing__System_Boolean_enableRandomWrite = 42386736; // System.Void GetTemporaryRT(System.Int32 nameID, System.Int32 width, System.Int32 height, System.Int32 depthBuffer, UnityEngine.FilterMode filter, UnityEngine.RenderTextureFormat format, UnityEngine.RenderTextureReadWrite readWrite, System.Int32 antiAliasing, System.Boolean enableRandomWrite)
constexpr auto GetTemporaryRT_System_Int32_nameID__System_Int32_width__System_Int32_height__System_Int32_depthBuffer__UnityEngine_FilterMode_filter__UnityEngine_RenderTextureFormat_format__UnityEngine_RenderTextureReadWrite_readWrite__System_Int32_antiAliasing = 42385408; // System.Void GetTemporaryRT(System.Int32 nameID, System.Int32 width, System.Int32 height, System.Int32 depthBuffer, UnityEngine.FilterMode filter, UnityEngine.RenderTextureFormat format, UnityEngine.RenderTextureReadWrite readWrite, System.Int32 antiAliasing)
constexpr auto GetTemporaryRT_System_Int32_nameID__System_Int32_width__System_Int32_height__System_Int32_depthBuffer__UnityEngine_FilterMode_filter__UnityEngine_RenderTextureFormat_format__UnityEngine_RenderTextureReadWrite_readWrite = 42385168; // System.Void GetTemporaryRT(System.Int32 nameID, System.Int32 width, System.Int32 height, System.Int32 depthBuffer, UnityEngine.FilterMode filter, UnityEngine.RenderTextureFormat format, UnityEngine.RenderTextureReadWrite readWrite)
constexpr auto GetTemporaryRT_System_Int32_nameID__System_Int32_width__System_Int32_height__System_Int32_depthBuffer__UnityEngine_FilterMode_filter__UnityEngine_RenderTextureFormat_format = 42386992; // System.Void GetTemporaryRT(System.Int32 nameID, System.Int32 width, System.Int32 height, System.Int32 depthBuffer, UnityEngine.FilterMode filter, UnityEngine.RenderTextureFormat format)
constexpr auto GetTemporaryRT_System_Int32_nameID__System_Int32_width__System_Int32_height__System_Int32_depthBuffer__UnityEngine_FilterMode_filter = 42386592; // System.Void GetTemporaryRT(System.Int32 nameID, System.Int32 width, System.Int32 height, System.Int32 depthBuffer, UnityEngine.FilterMode filter)
constexpr auto GetTemporaryRT_System_Int32_nameID__System_Int32_width__System_Int32_height__System_Int32_depthBuffer = 42386064; // System.Void GetTemporaryRT(System.Int32 nameID, System.Int32 width, System.Int32 height, System.Int32 depthBuffer)
constexpr auto GetTemporaryRTWithDescriptor_System_Int32_nameID__UnityEngine_RenderTextureDescriptor_desc__UnityEngine_FilterMode_filter = 42384512; // System.Void GetTemporaryRTWithDescriptor(System.Int32 nameID, UnityEngine.RenderTextureDescriptor desc, UnityEngine.FilterMode filter)
constexpr auto GetTemporaryRT_System_Int32_nameID__UnityEngine_RenderTextureDescriptor_desc__UnityEngine_FilterMode_filter = 42385776; // System.Void GetTemporaryRT(System.Int32 nameID, UnityEngine.RenderTextureDescriptor desc, UnityEngine.FilterMode filter)
constexpr auto GetTemporaryRT_System_Int32_nameID__UnityEngine_RenderTextureDescriptor_desc = 42385056; // System.Void GetTemporaryRT(System.Int32 nameID, UnityEngine.RenderTextureDescriptor desc)
constexpr auto ReleaseTemporaryRT_System_Int32_nameID = 42389056; // System.Void ReleaseTemporaryRT(System.Int32 nameID)
constexpr auto ClearRenderTarget_UnityEngine_Rendering_RTClearFlags_clearFlags__UnityEngine_Color_backgroundColor__System_Single_depth__System_UInt32_stencil = 42378096; // System.Void ClearRenderTarget(UnityEngine.Rendering.RTClearFlags clearFlags, UnityEngine.Color backgroundColor, System.Single depth, System.UInt32 stencil)
constexpr auto ClearRenderTarget_System_Boolean_clearDepth__System_Boolean_clearColor__UnityEngine_Color_backgroundColor = 42377712; // System.Void ClearRenderTarget(System.Boolean clearDepth, System.Boolean clearColor, UnityEngine.Color backgroundColor)
constexpr auto ClearRenderTarget_System_Boolean_clearDepth__System_Boolean_clearColor__UnityEngine_Color_backgroundColor__System_Single_depth = 42377904; // System.Void ClearRenderTarget(System.Boolean clearDepth, System.Boolean clearColor, UnityEngine.Color backgroundColor, System.Single depth)
constexpr auto SetGlobalFloat_System_Int32_nameID__System_Single_value = 42390832; // System.Void SetGlobalFloat(System.Int32 nameID, System.Single value)
constexpr auto SetGlobalInt_System_Int32_nameID__System_Int32_value = 42391104; // System.Void SetGlobalInt(System.Int32 nameID, System.Int32 value)
constexpr auto SetGlobalVector_System_Int32_nameID__UnityEngine_Vector4_value = 42392416; // System.Void SetGlobalVector(System.Int32 nameID, UnityEngine.Vector4 value)
constexpr auto SetGlobalColor_System_Int32_nameID__UnityEngine_Color_value = 42390656; // System.Void SetGlobalColor(System.Int32 nameID, UnityEngine.Color value)
constexpr auto SetGlobalMatrix_System_Int32_nameID__UnityEngine_Matrix4x4_value = 42391440; // System.Void SetGlobalMatrix(System.Int32 nameID, UnityEngine.Matrix4x4 value)
constexpr auto EnableShaderKeyword_System_String_keyword = 42383584; // System.Void EnableShaderKeyword(System.String keyword)
constexpr auto DisableShaderKeyword_System_String_keyword = 42378976; // System.Void DisableShaderKeyword(System.String keyword)
constexpr auto SetViewProjectionMatrices_UnityEngine_Matrix4x4_view__UnityEngine_Matrix4x4_proj = 42396640; // System.Void SetViewProjectionMatrices(UnityEngine.Matrix4x4 view, UnityEngine.Matrix4x4 proj)
constexpr auto ValidateAgainstExecutionFlags_UnityEngine_Rendering_CommandBufferExecutionFlags_requiredFlags__UnityEngine_Rendering_CommandBufferExecutionFlags_invalidFlags = 42396896; // System.Boolean ValidateAgainstExecutionFlags(UnityEngine.Rendering.CommandBufferExecutionFlags requiredFlags, UnityEngine.Rendering.CommandBufferExecutionFlags invalidFlags)
constexpr auto SetGlobalVectorArray_System_Int32_nameID__UnityEngine_Vector4___values = 42392064; // System.Void SetGlobalVectorArray(System.Int32 nameID, UnityEngine.Vector4[] values)
constexpr auto SetGlobalMatrixArray_System_Int32_nameID__UnityEngine_Matrix4x4___values = 42391280; // System.Void SetGlobalMatrixArray(System.Int32 nameID, UnityEngine.Matrix4x4[] values)
constexpr auto SetGlobalTexture_Impl_System_Int32_nameID__UnityEngine_Rendering_RenderTargetIdentifier_rt__UnityEngine_Rendering_RenderTextureSubElement_element = 42391648; // System.Void SetGlobalTexture_Impl(System.Int32 nameID, UnityEngine.Rendering.RenderTargetIdentifier rt, UnityEngine.Rendering.RenderTextureSubElement element)
constexpr auto SetGlobalBufferInternal_System_Int32_nameID__UnityEngine_ComputeBuffer_value = 42390400; // System.Void SetGlobalBufferInternal(System.Int32 nameID, UnityEngine.ComputeBuffer value)
constexpr auto BeginSample_System_String_name = 42375584; // System.Void BeginSample(System.String name)
constexpr auto EndSample_System_String_name = 42383664; // System.Void EndSample(System.String name)
constexpr auto IssuePluginEventAndDataInternal_System_IntPtr_callback__System_Int32_eventID__System_IntPtr_data = 42388592; // System.Void IssuePluginEventAndDataInternal(System.IntPtr callback, System.Int32 eventID, System.IntPtr data)
constexpr auto SetRenderTarget_UnityEngine_Rendering_RenderTargetIdentifier_rt = 42393616; // System.Void SetRenderTarget(UnityEngine.Rendering.RenderTargetIdentifier rt)
constexpr auto SetRenderTarget_UnityEngine_Rendering_RenderTargetIdentifier_rt__UnityEngine_Rendering_RenderBufferLoadAction_loadAction__UnityEngine_Rendering_RenderBufferStoreAction_storeAction = 42394816; // System.Void SetRenderTarget(UnityEngine.Rendering.RenderTargetIdentifier rt, UnityEngine.Rendering.RenderBufferLoadAction loadAction, UnityEngine.Rendering.RenderBufferStoreAction storeAction)
constexpr auto SetRenderTarget_UnityEngine_Rendering_RenderTargetIdentifier_rt__System_Int32_mipLevel = 42393776; // System.Void SetRenderTarget(UnityEngine.Rendering.RenderTargetIdentifier rt, System.Int32 mipLevel)
constexpr auto SetRenderTarget_UnityEngine_Rendering_RenderTargetIdentifier_rt__System_Int32_mipLevel__UnityEngine_CubemapFace_cubemapFace__System_Int32_depthSlice = 42394224; // System.Void SetRenderTarget(UnityEngine.Rendering.RenderTargetIdentifier rt, System.Int32 mipLevel, UnityEngine.CubemapFace cubemapFace, System.Int32 depthSlice)
constexpr auto SetRenderTarget_UnityEngine_Rendering_RenderTargetIdentifier_color__UnityEngine_Rendering_RenderTargetIdentifier_depth = 42395728; // System.Void SetRenderTarget(UnityEngine.Rendering.RenderTargetIdentifier color, UnityEngine.Rendering.RenderTargetIdentifier depth)
constexpr auto SetRenderTarget_UnityEngine_Rendering_RenderTargetIdentifier_color__UnityEngine_Rendering_RenderTargetIdentifier_depth__System_Int32_mipLevel__UnityEngine_CubemapFace_cubemapFace__System_Int32_depthSlice = 42395088; // System.Void SetRenderTarget(UnityEngine.Rendering.RenderTargetIdentifier color, UnityEngine.Rendering.RenderTargetIdentifier depth, System.Int32 mipLevel, UnityEngine.CubemapFace cubemapFace, System.Int32 depthSlice)
constexpr auto SetRenderTarget_UnityEngine_Rendering_RenderTargetIdentifier_color__UnityEngine_Rendering_RenderBufferLoadAction_colorLoadAction__UnityEngine_Rendering_RenderBufferStoreAction_colorStoreAction__UnityEngine_Rendering_RenderTargetIdentifier_depth__UnityEngine_Rendering_RenderBufferLoadAction_depthLoadAction__UnityEngine_Rendering_RenderBufferStoreAction_depthStoreAction = 42393248; // System.Void SetRenderTarget(UnityEngine.Rendering.RenderTargetIdentifier color, UnityEngine.Rendering.RenderBufferLoadAction colorLoadAction, UnityEngine.Rendering.RenderBufferStoreAction colorStoreAction, UnityEngine.Rendering.RenderTargetIdentifier depth, UnityEngine.Rendering.RenderBufferLoadAction depthLoadAction, UnityEngine.Rendering.RenderBufferStoreAction depthStoreAction)
constexpr auto SetRenderTarget_UnityEngine_Rendering_RenderTargetIdentifier___colors__UnityEngine_Rendering_RenderTargetIdentifier_depth = 42395952; // System.Void SetRenderTarget(UnityEngine.Rendering.RenderTargetIdentifier[] colors, UnityEngine.Rendering.RenderTargetIdentifier depth)
constexpr auto SetRenderTargetSingle_Internal_UnityEngine_Rendering_RenderTargetIdentifier_rt__UnityEngine_Rendering_RenderBufferLoadAction_colorLoadAction__UnityEngine_Rendering_RenderBufferStoreAction_colorStoreAction__UnityEngine_Rendering_RenderBufferLoadAction_depthLoadAction__UnityEngine_Rendering_RenderBufferStoreAction_depthStoreAction = 42393120; // System.Void SetRenderTargetSingle_Internal(UnityEngine.Rendering.RenderTargetIdentifier rt, UnityEngine.Rendering.RenderBufferLoadAction colorLoadAction, UnityEngine.Rendering.RenderBufferStoreAction colorStoreAction, UnityEngine.Rendering.RenderBufferLoadAction depthLoadAction, UnityEngine.Rendering.RenderBufferStoreAction depthStoreAction)
constexpr auto SetRenderTargetColorDepth_Internal_UnityEngine_Rendering_RenderTargetIdentifier_color__UnityEngine_Rendering_RenderTargetIdentifier_depth__UnityEngine_Rendering_RenderBufferLoadAction_colorLoadAction__UnityEngine_Rendering_RenderBufferStoreAction_colorStoreAction__UnityEngine_Rendering_RenderBufferLoadAction_depthLoadAction__UnityEngine_Rendering_RenderBufferStoreAction_depthStoreAction__UnityEngine_Rendering_RenderTargetFlags_flags = 42392608; // System.Void SetRenderTargetColorDepth_Internal(UnityEngine.Rendering.RenderTargetIdentifier color, UnityEngine.Rendering.RenderTargetIdentifier depth, UnityEngine.Rendering.RenderBufferLoadAction colorLoadAction, UnityEngine.Rendering.RenderBufferStoreAction colorStoreAction, UnityEngine.Rendering.RenderBufferLoadAction depthLoadAction, UnityEngine.Rendering.RenderBufferStoreAction depthStoreAction, UnityEngine.Rendering.RenderTargetFlags flags)
constexpr auto SetRenderTargetMulti_Internal_UnityEngine_Rendering_RenderTargetIdentifier___colors__UnityEngine_Rendering_RenderTargetIdentifier_depth__UnityEngine_Rendering_RenderBufferLoadAction___colorLoadActions__UnityEngine_Rendering_RenderBufferStoreAction___colorStoreActions__UnityEngine_Rendering_RenderBufferLoadAction_depthLoadAction__UnityEngine_Rendering_RenderBufferStoreAction_depthStoreAction__UnityEngine_Rendering_RenderTargetFlags_flags = 42392864; // System.Void SetRenderTargetMulti_Internal(UnityEngine.Rendering.RenderTargetIdentifier[] colors, UnityEngine.Rendering.RenderTargetIdentifier depth, UnityEngine.Rendering.RenderBufferLoadAction[] colorLoadActions, UnityEngine.Rendering.RenderBufferStoreAction[] colorStoreActions, UnityEngine.Rendering.RenderBufferLoadAction depthLoadAction, UnityEngine.Rendering.RenderBufferStoreAction depthStoreAction, UnityEngine.Rendering.RenderTargetFlags flags)
constexpr auto Finalize = 42383744; // System.Void Finalize()
constexpr auto Dispose = 42379168; // System.Void Dispose()
constexpr auto Dispose_System_Boolean_disposing = 42379328; // System.Void Dispose(System.Boolean disposing)
constexpr auto _ctor = 42396976; // System.Void .ctor()
constexpr auto Release = 42379168; // System.Void Release()
constexpr auto SetComputeFloatParam_UnityEngine_ComputeShader_computeShader__System_String_name__System_Single_val = 42389344; // System.Void SetComputeFloatParam(UnityEngine.ComputeShader computeShader, System.String name, System.Single val)
constexpr auto SetComputeIntParam_UnityEngine_ComputeShader_computeShader__System_String_name__System_Int32_val = 42389680; // System.Void SetComputeIntParam(UnityEngine.ComputeShader computeShader, System.String name, System.Int32 val)
constexpr auto SetComputeVectorParam_UnityEngine_ComputeShader_computeShader__System_String_name__UnityEngine_Vector4_val = 42390288; // System.Void SetComputeVectorParam(UnityEngine.ComputeShader computeShader, System.String name, UnityEngine.Vector4 val)
constexpr auto SetComputeFloatParams_UnityEngine_ComputeShader_computeShader__System_String_name__System_Single___values = 42389456; // System.Void SetComputeFloatParams(UnityEngine.ComputeShader computeShader, System.String name, System.Single[] values)
constexpr auto SetComputeTextureParam_UnityEngine_ComputeShader_computeShader__System_Int32_kernelIndex__System_String_name__UnityEngine_Rendering_RenderTargetIdentifier_rt = 42389920; // System.Void SetComputeTextureParam(UnityEngine.ComputeShader computeShader, System.Int32 kernelIndex, System.String name, UnityEngine.Rendering.RenderTargetIdentifier rt)
constexpr auto SetComputeTextureParam_UnityEngine_ComputeShader_computeShader__System_Int32_kernelIndex__System_Int32_nameID__UnityEngine_Rendering_RenderTargetIdentifier_rt = 42389792; // System.Void SetComputeTextureParam(UnityEngine.ComputeShader computeShader, System.Int32 kernelIndex, System.Int32 nameID, UnityEngine.Rendering.RenderTargetIdentifier rt)
constexpr auto SetComputeBufferParam_UnityEngine_ComputeShader_computeShader__System_Int32_kernelIndex__System_String_name__UnityEngine_ComputeBuffer_buffer = 42389120; // System.Void SetComputeBufferParam(UnityEngine.ComputeShader computeShader, System.Int32 kernelIndex, System.String name, UnityEngine.ComputeBuffer buffer)
constexpr auto DispatchCompute_UnityEngine_ComputeShader_computeShader__System_Int32_kernelIndex__System_Int32_threadGroupsX__System_Int32_threadGroupsY__System_Int32_threadGroupsZ = 42379056; // System.Void DispatchCompute(UnityEngine.ComputeShader computeShader, System.Int32 kernelIndex, System.Int32 threadGroupsX, System.Int32 threadGroupsY, System.Int32 threadGroupsZ)
constexpr auto GenerateMips_UnityEngine_Rendering_RenderTargetIdentifier_rt = 42384272; // System.Void GenerateMips(UnityEngine.Rendering.RenderTargetIdentifier rt)
constexpr auto GenerateMips_UnityEngine_RenderTexture_rt = 42383920; // System.Void GenerateMips(UnityEngine.RenderTexture rt)
constexpr auto DrawMesh_UnityEngine_Mesh_mesh__UnityEngine_Matrix4x4_matrix__UnityEngine_Material_material__System_Int32_submeshIndex__System_Int32_shaderPass__UnityEngine_MaterialPropertyBlock_properties = 42381488; // System.Void DrawMesh(UnityEngine.Mesh mesh, UnityEngine.Matrix4x4 matrix, UnityEngine.Material material, System.Int32 submeshIndex, System.Int32 shaderPass, UnityEngine.MaterialPropertyBlock properties)
constexpr auto DrawMesh_UnityEngine_Mesh_mesh__UnityEngine_Matrix4x4_matrix__UnityEngine_Material_material__System_Int32_submeshIndex__System_Int32_shaderPass = 42381376; // System.Void DrawMesh(UnityEngine.Mesh mesh, UnityEngine.Matrix4x4 matrix, UnityEngine.Material material, System.Int32 submeshIndex, System.Int32 shaderPass)
constexpr auto DrawMesh_UnityEngine_Mesh_mesh__UnityEngine_Matrix4x4_matrix__UnityEngine_Material_material__System_Int32_submeshIndex = 42381280; // System.Void DrawMesh(UnityEngine.Mesh mesh, UnityEngine.Matrix4x4 matrix, UnityEngine.Material material, System.Int32 submeshIndex)
constexpr auto DrawRenderer_UnityEngine_Renderer_renderer__UnityEngine_Material_material__System_Int32_submeshIndex__System_Int32_shaderPass = 42382976; // System.Void DrawRenderer(UnityEngine.Renderer renderer, UnityEngine.Material material, System.Int32 submeshIndex, System.Int32 shaderPass)
constexpr auto DrawRenderer_UnityEngine_Renderer_renderer__UnityEngine_Material_material__System_Int32_submeshIndex = 42383504; // System.Void DrawRenderer(UnityEngine.Renderer renderer, UnityEngine.Material material, System.Int32 submeshIndex)
constexpr auto DrawRenderer_UnityEngine_Renderer_renderer__UnityEngine_Material_material = 42383536; // System.Void DrawRenderer(UnityEngine.Renderer renderer, UnityEngine.Material material)
constexpr auto DrawProcedural_UnityEngine_Matrix4x4_matrix__UnityEngine_Material_material__System_Int32_shaderPass__UnityEngine_MeshTopology_topology__System_Int32_vertexCount__System_Int32_instanceCount__UnityEngine_MaterialPropertyBlock_properties = 42382592; // System.Void DrawProcedural(UnityEngine.Matrix4x4 matrix, UnityEngine.Material material, System.Int32 shaderPass, UnityEngine.MeshTopology topology, System.Int32 vertexCount, System.Int32 instanceCount, UnityEngine.MaterialPropertyBlock properties)
constexpr auto DrawProcedural_UnityEngine_Matrix4x4_matrix__UnityEngine_Material_material__System_Int32_shaderPass__UnityEngine_MeshTopology_topology__System_Int32_vertexCount__System_Int32_instanceCount = 42382208; // System.Void DrawProcedural(UnityEngine.Matrix4x4 matrix, UnityEngine.Material material, System.Int32 shaderPass, UnityEngine.MeshTopology topology, System.Int32 vertexCount, System.Int32 instanceCount)
constexpr auto DrawMeshInstanced_UnityEngine_Mesh_mesh__System_Int32_submeshIndex__UnityEngine_Material_material__System_Int32_shaderPass__UnityEngine_Matrix4x4___matrices__System_Int32_count__UnityEngine_MaterialPropertyBlock_properties = 42380192; // System.Void DrawMeshInstanced(UnityEngine.Mesh mesh, System.Int32 submeshIndex, UnityEngine.Material material, System.Int32 shaderPass, UnityEngine.Matrix4x4[] matrices, System.Int32 count, UnityEngine.MaterialPropertyBlock properties)
constexpr auto DrawMeshInstancedIndirect_UnityEngine_Mesh_mesh__System_Int32_submeshIndex__UnityEngine_Material_material__System_Int32_shaderPass__UnityEngine_ComputeBuffer_bufferWithArgs__System_Int32_argsOffset__UnityEngine_MaterialPropertyBlock_properties = 42379440; // System.Void DrawMeshInstancedIndirect(UnityEngine.Mesh mesh, System.Int32 submeshIndex, UnityEngine.Material material, System.Int32 shaderPass, UnityEngine.ComputeBuffer bufferWithArgs, System.Int32 argsOffset, UnityEngine.MaterialPropertyBlock properties)
constexpr auto CopyTexture_UnityEngine_Rendering_RenderTargetIdentifier_src__UnityEngine_Rendering_RenderTargetIdentifier_dst = 42378608; // System.Void CopyTexture(UnityEngine.Rendering.RenderTargetIdentifier src, UnityEngine.Rendering.RenderTargetIdentifier dst)
constexpr auto CopyTexture_UnityEngine_Rendering_RenderTargetIdentifier_src__System_Int32_srcElement__System_Int32_srcMip__UnityEngine_Rendering_RenderTargetIdentifier_dst__System_Int32_dstElement__System_Int32_dstMip = 42378784; // System.Void CopyTexture(UnityEngine.Rendering.RenderTargetIdentifier src, System.Int32 srcElement, System.Int32 srcMip, UnityEngine.Rendering.RenderTargetIdentifier dst, System.Int32 dstElement, System.Int32 dstMip)
constexpr auto CopyTexture_UnityEngine_Rendering_RenderTargetIdentifier_src__System_Int32_srcElement__System_Int32_srcMip__System_Int32_srcX__System_Int32_srcY__System_Int32_srcWidth__System_Int32_srcHeight__UnityEngine_Rendering_RenderTargetIdentifier_dst__System_Int32_dstElement__System_Int32_dstMip__System_Int32_dstX__System_Int32_dstY = 42378384; // System.Void CopyTexture(UnityEngine.Rendering.RenderTargetIdentifier src, System.Int32 srcElement, System.Int32 srcMip, System.Int32 srcX, System.Int32 srcY, System.Int32 srcWidth, System.Int32 srcHeight, UnityEngine.Rendering.RenderTargetIdentifier dst, System.Int32 dstElement, System.Int32 dstMip, System.Int32 dstX, System.Int32 dstY)
constexpr auto Blit_UnityEngine_Texture_source__UnityEngine_Rendering_RenderTargetIdentifier_dest = 42376928; // System.Void Blit(UnityEngine.Texture source, UnityEngine.Rendering.RenderTargetIdentifier dest)
constexpr auto Blit_UnityEngine_Texture_source__UnityEngine_Rendering_RenderTargetIdentifier_dest__UnityEngine_Material_mat = 42376208; // System.Void Blit(UnityEngine.Texture source, UnityEngine.Rendering.RenderTargetIdentifier dest, UnityEngine.Material mat)
constexpr auto Blit_UnityEngine_Texture_source__UnityEngine_Rendering_RenderTargetIdentifier_dest__UnityEngine_Material_mat__System_Int32_pass = 42376448; // System.Void Blit(UnityEngine.Texture source, UnityEngine.Rendering.RenderTargetIdentifier dest, UnityEngine.Material mat, System.Int32 pass)
constexpr auto Blit_UnityEngine_Rendering_RenderTargetIdentifier_source__UnityEngine_Rendering_RenderTargetIdentifier_dest = 42377392; // System.Void Blit(UnityEngine.Rendering.RenderTargetIdentifier source, UnityEngine.Rendering.RenderTargetIdentifier dest)
constexpr auto Blit_UnityEngine_Rendering_RenderTargetIdentifier_source__UnityEngine_Rendering_RenderTargetIdentifier_dest__UnityEngine_Material_mat = 42377152; // System.Void Blit(UnityEngine.Rendering.RenderTargetIdentifier source, UnityEngine.Rendering.RenderTargetIdentifier dest, UnityEngine.Material mat)
constexpr auto Blit_UnityEngine_Rendering_RenderTargetIdentifier_source__UnityEngine_Rendering_RenderTargetIdentifier_dest__UnityEngine_Material_mat__System_Int32_pass = 42376688; // System.Void Blit(UnityEngine.Rendering.RenderTargetIdentifier source, UnityEngine.Rendering.RenderTargetIdentifier dest, UnityEngine.Material mat, System.Int32 pass)
constexpr auto SetGlobalFloat_System_String_name__System_Single_value = 42390912; // System.Void SetGlobalFloat(System.String name, System.Single value)
constexpr auto SetGlobalInt_System_String_name__System_Int32_value = 42391008; // System.Void SetGlobalInt(System.String name, System.Int32 value)
constexpr auto SetGlobalVector_System_String_name__UnityEngine_Vector4_value = 42392320; // System.Void SetGlobalVector(System.String name, UnityEngine.Vector4 value)
constexpr auto SetGlobalColor_System_String_name__UnityEngine_Color_value = 42390736; // System.Void SetGlobalColor(System.String name, UnityEngine.Color value)
constexpr auto SetGlobalMatrix_System_String_name__UnityEngine_Matrix4x4_value = 42391520; // System.Void SetGlobalMatrix(System.String name, UnityEngine.Matrix4x4 value)
constexpr auto SetGlobalVectorArray_System_String_propertyName__UnityEngine_Vector4___values = 42392144; // System.Void SetGlobalVectorArray(System.String propertyName, UnityEngine.Vector4[] values)
constexpr auto SetGlobalMatrixArray_System_String_propertyName__UnityEngine_Matrix4x4___values = 42391184; // System.Void SetGlobalMatrixArray(System.String propertyName, UnityEngine.Matrix4x4[] values)
constexpr auto SetGlobalTexture_System_String_name__UnityEngine_Rendering_RenderTargetIdentifier_value = 42391936; // System.Void SetGlobalTexture(System.String name, UnityEngine.Rendering.RenderTargetIdentifier value)
constexpr auto SetGlobalTexture_System_Int32_nameID__UnityEngine_Rendering_RenderTargetIdentifier_value = 42391840; // System.Void SetGlobalTexture(System.Int32 nameID, UnityEngine.Rendering.RenderTargetIdentifier value)
constexpr auto SetGlobalTexture_System_Int32_nameID__UnityEngine_Rendering_RenderTargetIdentifier_value__UnityEngine_Rendering_RenderTextureSubElement_element = 42391744; // System.Void SetGlobalTexture(System.Int32 nameID, UnityEngine.Rendering.RenderTargetIdentifier value, UnityEngine.Rendering.RenderTextureSubElement element)
constexpr auto SetGlobalBuffer_System_String_name__UnityEngine_ComputeBuffer_value = 42390480; // System.Void SetGlobalBuffer(System.String name, UnityEngine.ComputeBuffer value)
constexpr auto SetSinglePassStereo_UnityEngine_Rendering_SinglePassStereoMode_mode = 42388528; // System.Void SetSinglePassStereo(UnityEngine.Rendering.SinglePassStereoMode mode)
constexpr auto IssuePluginEventAndData_System_IntPtr_callback__System_Int32_eventID__System_IntPtr_data = 42388704; // System.Void IssuePluginEventAndData(System.IntPtr callback, System.Int32 eventID, System.IntPtr data)
constexpr auto SetComputeVectorParam_Injected_UnityEngine_ComputeShader_computeShader__System_Int32_nameID__UnityEngine_Vector4_val = 42390064; // System.Void SetComputeVectorParam_Injected(UnityEngine.ComputeShader computeShader, System.Int32 nameID, UnityEngine.Vector4 val)
constexpr auto Internal_GenerateMips_Injected_UnityEngine_Rendering_RenderTargetIdentifier_rt = 42388032; // System.Void Internal_GenerateMips_Injected(UnityEngine.Rendering.RenderTargetIdentifier rt)
constexpr auto Internal_DrawMesh_Injected_UnityEngine_Mesh_mesh__UnityEngine_Matrix4x4_matrix__UnityEngine_Material_material__System_Int32_submeshIndex__System_Int32_shaderPass__UnityEngine_MaterialPropertyBlock_properties = 42387424; // System.Void Internal_DrawMesh_Injected(UnityEngine.Mesh mesh, UnityEngine.Matrix4x4 matrix, UnityEngine.Material material, System.Int32 submeshIndex, System.Int32 shaderPass, UnityEngine.MaterialPropertyBlock properties)
constexpr auto Internal_DrawProcedural_Injected_UnityEngine_Matrix4x4_matrix__UnityEngine_Material_material__System_Int32_shaderPass__UnityEngine_MeshTopology_topology__System_Int32_vertexCount__System_Int32_instanceCount__UnityEngine_MaterialPropertyBlock_properties = 42387664; // System.Void Internal_DrawProcedural_Injected(UnityEngine.Matrix4x4 matrix, UnityEngine.Material material, System.Int32 shaderPass, UnityEngine.MeshTopology topology, System.Int32 vertexCount, System.Int32 instanceCount, UnityEngine.MaterialPropertyBlock properties)
constexpr auto SetViewport_Injected_UnityEngine_Rect_pixelRect = 42396736; // System.Void SetViewport_Injected(UnityEngine.Rect pixelRect)
constexpr auto Blit_Texture_Injected_UnityEngine_Texture_source__UnityEngine_Rendering_RenderTargetIdentifier_dest__UnityEngine_Material_mat__System_Int32_pass__UnityEngine_Vector2_scale__UnityEngine_Vector2_offset__System_Int32_sourceDepthSlice__System_Int32_destDepthSlice = 42375936; // System.Void Blit_Texture_Injected(UnityEngine.Texture source, UnityEngine.Rendering.RenderTargetIdentifier dest, UnityEngine.Material mat, System.Int32 pass, UnityEngine.Vector2 scale, UnityEngine.Vector2 offset, System.Int32 sourceDepthSlice, System.Int32 destDepthSlice)
constexpr auto Blit_Identifier_Injected_UnityEngine_Rendering_RenderTargetIdentifier_source__UnityEngine_Rendering_RenderTargetIdentifier_dest__UnityEngine_Material_mat__System_Int32_pass__UnityEngine_Vector2_scale__UnityEngine_Vector2_offset__System_Int32_sourceDepthSlice__System_Int32_destDepthSlice = 42375664; // System.Void Blit_Identifier_Injected(UnityEngine.Rendering.RenderTargetIdentifier source, UnityEngine.Rendering.RenderTargetIdentifier dest, UnityEngine.Material mat, System.Int32 pass, UnityEngine.Vector2 scale, UnityEngine.Vector2 offset, System.Int32 sourceDepthSlice, System.Int32 destDepthSlice)
constexpr auto GetTemporaryRTWithDescriptor_Injected_System_Int32_nameID__UnityEngine_RenderTextureDescriptor_desc__UnityEngine_FilterMode_filter = 42384416; // System.Void GetTemporaryRTWithDescriptor_Injected(System.Int32 nameID, UnityEngine.RenderTextureDescriptor desc, UnityEngine.FilterMode filter)
constexpr auto ClearRenderTarget_Injected_UnityEngine_Rendering_RTClearFlags_clearFlags__UnityEngine_Color_backgroundColor__System_Single_depth__System_UInt32_stencil = 42377616; // System.Void ClearRenderTarget_Injected(UnityEngine.Rendering.RTClearFlags clearFlags, UnityEngine.Color backgroundColor, System.Single depth, System.UInt32 stencil)
constexpr auto SetGlobalVector_Injected_System_Int32_nameID__UnityEngine_Vector4_value = 42392240; // System.Void SetGlobalVector_Injected(System.Int32 nameID, UnityEngine.Vector4 value)
constexpr auto SetGlobalColor_Injected_System_Int32_nameID__UnityEngine_Color_value = 42390576; // System.Void SetGlobalColor_Injected(System.Int32 nameID, UnityEngine.Color value)
constexpr auto SetGlobalMatrix_Injected_System_Int32_nameID__UnityEngine_Matrix4x4_value = 42391360; // System.Void SetGlobalMatrix_Injected(System.Int32 nameID, UnityEngine.Matrix4x4 value)
constexpr auto SetViewProjectionMatrices_Injected_UnityEngine_Matrix4x4_view__UnityEngine_Matrix4x4_proj = 42396544; // System.Void SetViewProjectionMatrices_Injected(UnityEngine.Matrix4x4 view, UnityEngine.Matrix4x4 proj)
constexpr auto SetRenderTargetSingle_Internal_Injected_UnityEngine_Rendering_RenderTargetIdentifier_rt__UnityEngine_Rendering_RenderBufferLoadAction_colorLoadAction__UnityEngine_Rendering_RenderBufferStoreAction_colorStoreAction__UnityEngine_Rendering_RenderBufferLoadAction_depthLoadAction__UnityEngine_Rendering_RenderBufferStoreAction_depthStoreAction = 42393008; // System.Void SetRenderTargetSingle_Internal_Injected(UnityEngine.Rendering.RenderTargetIdentifier rt, UnityEngine.Rendering.RenderBufferLoadAction colorLoadAction, UnityEngine.Rendering.RenderBufferStoreAction colorStoreAction, UnityEngine.Rendering.RenderBufferLoadAction depthLoadAction, UnityEngine.Rendering.RenderBufferStoreAction depthStoreAction)
constexpr auto SetRenderTargetColorDepth_Internal_Injected_UnityEngine_Rendering_RenderTargetIdentifier_color__UnityEngine_Rendering_RenderTargetIdentifier_depth__UnityEngine_Rendering_RenderBufferLoadAction_colorLoadAction__UnityEngine_Rendering_RenderBufferStoreAction_colorStoreAction__UnityEngine_Rendering_RenderBufferLoadAction_depthLoadAction__UnityEngine_Rendering_RenderBufferStoreAction_depthStoreAction__UnityEngine_Rendering_RenderTargetFlags_flags = 42392496; // System.Void SetRenderTargetColorDepth_Internal_Injected(UnityEngine.Rendering.RenderTargetIdentifier color, UnityEngine.Rendering.RenderTargetIdentifier depth, UnityEngine.Rendering.RenderBufferLoadAction colorLoadAction, UnityEngine.Rendering.RenderBufferStoreAction colorStoreAction, UnityEngine.Rendering.RenderBufferLoadAction depthLoadAction, UnityEngine.Rendering.RenderBufferStoreAction depthStoreAction, UnityEngine.Rendering.RenderTargetFlags flags)
constexpr auto SetRenderTargetMulti_Internal_Injected_UnityEngine_Rendering_RenderTargetIdentifier___colors__UnityEngine_Rendering_RenderTargetIdentifier_depth__UnityEngine_Rendering_RenderBufferLoadAction___colorLoadActions__UnityEngine_Rendering_RenderBufferStoreAction___colorStoreActions__UnityEngine_Rendering_RenderBufferLoadAction_depthLoadAction__UnityEngine_Rendering_RenderBufferStoreAction_depthStoreAction__UnityEngine_Rendering_RenderTargetFlags_flags = 42392752; // System.Void SetRenderTargetMulti_Internal_Injected(UnityEngine.Rendering.RenderTargetIdentifier[] colors, UnityEngine.Rendering.RenderTargetIdentifier depth, UnityEngine.Rendering.RenderBufferLoadAction[] colorLoadActions, UnityEngine.Rendering.RenderBufferStoreAction[] colorStoreActions, UnityEngine.Rendering.RenderBufferLoadAction depthLoadAction, UnityEngine.Rendering.RenderBufferStoreAction depthStoreAction, UnityEngine.Rendering.RenderTargetFlags flags)
}
namespace StaticMethods
{
constexpr auto InitBuffer = 42387152; // System.IntPtr InitBuffer()
}
}
namespace UnityEngine_Rendering_VertexAttributeDescriptor
{
namespace Fields
{
constexpr auto _attribute_k__BackingField = 0x0; // UnityEngine.Rendering.VertexAttribute
constexpr auto _format_k__BackingField = 0x4; // UnityEngine.Rendering.VertexAttributeFormat
constexpr auto _dimension_k__BackingField = 0x8; // System.Int32
constexpr auto _stream_k__BackingField = 0xc; // System.Int32
}
namespace Methods
{
constexpr auto get_attribute = 3857744; // UnityEngine.Rendering.VertexAttribute get_attribute()
constexpr auto set_attribute_UnityEngine_Rendering_VertexAttribute_value = 3857792; // System.Void set_attribute(UnityEngine.Rendering.VertexAttribute value)
constexpr auto get_format = 3859328; // UnityEngine.Rendering.VertexAttributeFormat get_format()
constexpr auto set_format_UnityEngine_Rendering_VertexAttributeFormat_value = 3857600; // System.Void set_format(UnityEngine.Rendering.VertexAttributeFormat value)
constexpr auto get_dimension = 3857728; // System.Int32 get_dimension()
constexpr auto set_dimension_System_Int32_value = 3857776; // System.Void set_dimension(System.Int32 value)
constexpr auto get_stream = 3879168; // System.Int32 get_stream()
constexpr auto set_stream_System_Int32_value = 3879184; // System.Void set_stream(System.Int32 value)
constexpr auto _ctor_UnityEngine_Rendering_VertexAttribute_attribute___0__UnityEngine_Rendering_VertexAttributeFormat_format___0__System_Int32_dimension___3__System_Int32_stream___0 = 41607088; // System.Void .ctor(UnityEngine.Rendering.VertexAttribute attribute = 0, UnityEngine.Rendering.VertexAttributeFormat format = 0, System.Int32 dimension = 3, System.Int32 stream = 0)
constexpr auto ToString = 42495520; // System.String ToString()
constexpr auto GetHashCode = 42495488; // System.Int32 GetHashCode()
constexpr auto Equals_System_Object_other = 42495296; // System.Boolean Equals(System.Object other)
constexpr auto Equals_UnityEngine_Rendering_VertexAttributeDescriptor_other = 42235168; // System.Boolean Equals(UnityEngine.Rendering.VertexAttributeDescriptor other)
}
}
namespace UnityEngine_Sprite
{
namespace Methods
{
constexpr auto _ctor = 42465392; // System.Void .ctor()
constexpr auto GetPackingMode = 42465008; // System.Int32 GetPackingMode()
constexpr auto GetPacked = 42464944; // System.Int32 GetPacked()
constexpr auto GetTextureRect = 42465312; // UnityEngine.Rect GetTextureRect()
constexpr auto GetInnerUVs = 42464704; // UnityEngine.Vector4 GetInnerUVs()
constexpr auto GetOuterUVs = 42464864; // UnityEngine.Vector4 GetOuterUVs()
constexpr auto GetPadding = 42465152; // UnityEngine.Vector4 GetPadding()
constexpr auto get_bounds = 42465776; // UnityEngine.Bounds get_bounds()
constexpr auto get_rect = 42466240; // UnityEngine.Rect get_rect()
constexpr auto get_border = 42465616; // UnityEngine.Vector4 get_border()
constexpr auto get_texture = 42466528; // UnityEngine.Texture2D get_texture()
constexpr auto get_pixelsPerUnit = 42466096; // System.Single get_pixelsPerUnit()
constexpr auto get_associatedAlphaSplitTexture = 42465472; // UnityEngine.Texture2D get_associatedAlphaSplitTexture()
constexpr auto get_pivot = 42466016; // UnityEngine.Vector2 get_pivot()
constexpr auto get_packed = 42465872; // System.Boolean get_packed()
constexpr auto get_packingMode = 42465008; // UnityEngine.SpritePackingMode get_packingMode()
constexpr auto get_textureRect = 42466320; // UnityEngine.Rect get_textureRect()
constexpr auto get_vertices = 42466720; // UnityEngine.Vector2[] get_vertices()
constexpr auto get_triangles = 42466592; // System.UInt16[] get_triangles()
constexpr auto get_uv = 42466656; // UnityEngine.Vector2[] get_uv()
constexpr auto GetTextureRect_Injected_out_UnityEngine_Rect_ret = 42465232; // System.Void GetTextureRect_Injected(out UnityEngine.Rect ret)
constexpr auto GetInnerUVs_Injected_out_UnityEngine_Vector4_ret = 42464624; // System.Void GetInnerUVs_Injected(out UnityEngine.Vector4 ret)
constexpr auto GetOuterUVs_Injected_out_UnityEngine_Vector4_ret = 42464784; // System.Void GetOuterUVs_Injected(out UnityEngine.Vector4 ret)
constexpr auto GetPadding_Injected_out_UnityEngine_Vector4_ret = 42465072; // System.Void GetPadding_Injected(out UnityEngine.Vector4 ret)
constexpr auto get_bounds_Injected_out_UnityEngine_Bounds_ret = 42465696; // System.Void get_bounds_Injected(out UnityEngine.Bounds ret)
constexpr auto get_rect_Injected_out_UnityEngine_Rect_ret = 42466160; // System.Void get_rect_Injected(out UnityEngine.Rect ret)
constexpr auto get_border_Injected_out_UnityEngine_Vector4_ret = 42465536; // System.Void get_border_Injected(out UnityEngine.Vector4 ret)
constexpr auto get_pivot_Injected_out_UnityEngine_Vector2_ret = 42465936; // System.Void get_pivot_Injected(out UnityEngine.Vector2 ret)
}
namespace StaticMethods
{
constexpr auto CreateSprite_UnityEngine_Texture2D_texture__UnityEngine_Rect_rect__UnityEngine_Vector2_pivot__System_Single_pixelsPerUnit__System_UInt32_extrude__UnityEngine_SpriteMeshType_meshType__UnityEngine_Vector4_border__System_Boolean_generateFallbackPhysicsShape = 42462432; // UnityEngine.Sprite CreateSprite(UnityEngine.Texture2D texture, UnityEngine.Rect rect, UnityEngine.Vector2 pivot, System.Single pixelsPerUnit, System.UInt32 extrude, UnityEngine.SpriteMeshType meshType, UnityEngine.Vector4 border, System.Boolean generateFallbackPhysicsShape)
constexpr auto Create_UnityEngine_Texture2D_texture__UnityEngine_Rect_rect__UnityEngine_Vector2_pivot__System_Single_pixelsPerUnit__System_UInt32_extrude__UnityEngine_SpriteMeshType_meshType__UnityEngine_Vector4_border__System_Boolean_generateFallbackPhysicsShape = 42463248; // UnityEngine.Sprite Create(UnityEngine.Texture2D texture, UnityEngine.Rect rect, UnityEngine.Vector2 pivot, System.Single pixelsPerUnit, System.UInt32 extrude, UnityEngine.SpriteMeshType meshType, UnityEngine.Vector4 border, System.Boolean generateFallbackPhysicsShape)
constexpr auto Create_UnityEngine_Texture2D_texture__UnityEngine_Rect_rect__UnityEngine_Vector2_pivot__System_Single_pixelsPerUnit__System_UInt32_extrude__UnityEngine_SpriteMeshType_meshType__UnityEngine_Vector4_border = 42462576; // UnityEngine.Sprite Create(UnityEngine.Texture2D texture, UnityEngine.Rect rect, UnityEngine.Vector2 pivot, System.Single pixelsPerUnit, System.UInt32 extrude, UnityEngine.SpriteMeshType meshType, UnityEngine.Vector4 border)
constexpr auto Create_UnityEngine_Texture2D_texture__UnityEngine_Rect_rect__UnityEngine_Vector2_pivot__System_Single_pixelsPerUnit__System_UInt32_extrude__UnityEngine_SpriteMeshType_meshType = 42462672; // UnityEngine.Sprite Create(UnityEngine.Texture2D texture, UnityEngine.Rect rect, UnityEngine.Vector2 pivot, System.Single pixelsPerUnit, System.UInt32 extrude, UnityEngine.SpriteMeshType meshType)
constexpr auto Create_UnityEngine_Texture2D_texture__UnityEngine_Rect_rect__UnityEngine_Vector2_pivot__System_Single_pixelsPerUnit__System_UInt32_extrude = 42464416; // UnityEngine.Sprite Create(UnityEngine.Texture2D texture, UnityEngine.Rect rect, UnityEngine.Vector2 pivot, System.Single pixelsPerUnit, System.UInt32 extrude)
constexpr auto Create_UnityEngine_Texture2D_texture__UnityEngine_Rect_rect__UnityEngine_Vector2_pivot__System_Single_pixelsPerUnit = 42463056; // UnityEngine.Sprite Create(UnityEngine.Texture2D texture, UnityEngine.Rect rect, UnityEngine.Vector2 pivot, System.Single pixelsPerUnit)
constexpr auto Create_UnityEngine_Texture2D_texture__UnityEngine_Rect_rect__UnityEngine_Vector2_pivot = 42462880; // UnityEngine.Sprite Create(UnityEngine.Texture2D texture, UnityEngine.Rect rect, UnityEngine.Vector2 pivot)
constexpr auto CreateSprite_Injected_UnityEngine_Texture2D_texture__UnityEngine_Rect_rect__UnityEngine_Vector2_pivot__System_Single_pixelsPerUnit__System_UInt32_extrude__UnityEngine_SpriteMeshType_meshType__UnityEngine_Vector4_border__System_Boolean_generateFallbackPhysicsShape = 42462304; // UnityEngine.Sprite CreateSprite_Injected(UnityEngine.Texture2D texture, UnityEngine.Rect rect, UnityEngine.Vector2 pivot, System.Single pixelsPerUnit, System.UInt32 extrude, UnityEngine.SpriteMeshType meshType, UnityEngine.Vector4 border, System.Boolean generateFallbackPhysicsShape)
}
}
namespace UnityEngine_Transform
{
namespace Methods
{
constexpr auto _ctor = 3661504; // System.Void .ctor()
constexpr auto get_position = 42487456; // UnityEngine.Vector3 get_position()
constexpr auto set_position_UnityEngine_Vector3_value = 42489584; // System.Void set_position(UnityEngine.Vector3 value)
constexpr auto get_localPosition = 42486640; // UnityEngine.Vector3 get_localPosition()
constexpr auto set_localPosition_UnityEngine_Vector3_value = 42488912; // System.Void set_localPosition(UnityEngine.Vector3 value)
constexpr auto get_eulerAngles = 42485808; // UnityEngine.Vector3 get_eulerAngles()
constexpr auto set_eulerAngles_UnityEngine_Vector3_value = 42488288; // System.Void set_eulerAngles(UnityEngine.Vector3 value)
constexpr auto get_localEulerAngles = 42486320; // UnityEngine.Vector3 get_localEulerAngles()
constexpr auto set_localEulerAngles_UnityEngine_Vector3_value = 42488656; // System.Void set_localEulerAngles(UnityEngine.Vector3 value)
constexpr auto get_right = 42487536; // UnityEngine.Vector3 get_right()
constexpr auto set_right_UnityEngine_Vector3_value = 42489664; // System.Void set_right(UnityEngine.Vector3 value)
constexpr auto get_up = 42487904; // UnityEngine.Vector3 get_up()
constexpr auto set_up_UnityEngine_Vector3_value = 42490000; // System.Void set_up(UnityEngine.Vector3 value)
constexpr auto get_forward = 42486048; // UnityEngine.Vector3 get_forward()
constexpr auto set_forward_UnityEngine_Vector3_value = 42488464; // System.Void set_forward(UnityEngine.Vector3 value)
constexpr auto get_rotation = 42487824; // UnityEngine.Quaternion get_rotation()
constexpr auto set_rotation_UnityEngine_Quaternion_value = 42489920; // System.Void set_rotation(UnityEngine.Quaternion value)
constexpr auto get_localRotation = 42486800; // UnityEngine.Quaternion get_localRotation()
constexpr auto set_localRotation_UnityEngine_Quaternion_value = 42489072; // System.Void set_localRotation(UnityEngine.Quaternion value)
constexpr auto get_localScale = 42486960; // UnityEngine.Vector3 get_localScale()
constexpr auto set_localScale_UnityEngine_Vector3_value = 42489232; // System.Void set_localScale(UnityEngine.Vector3 value)
constexpr auto get_parent = 42479424; // UnityEngine.Transform get_parent()
constexpr auto set_parent_UnityEngine_Transform_value = 42489312; // System.Void set_parent(UnityEngine.Transform value)
constexpr auto get_parentInternal = 42479424; // UnityEngine.Transform get_parentInternal()
constexpr auto set_parentInternal_UnityEngine_Transform_value = 42483856; // System.Void set_parentInternal(UnityEngine.Transform value)
constexpr auto GetParent = 42479424; // UnityEngine.Transform GetParent()
constexpr auto SetParent_UnityEngine_Transform_p = 42483856; // System.Void SetParent(UnityEngine.Transform p)
constexpr auto SetParent_UnityEngine_Transform_parent__System_Boolean_worldPositionStays = 42483936; // System.Void SetParent(UnityEngine.Transform parent, System.Boolean worldPositionStays)
constexpr auto get_worldToLocalMatrix = 42488192; // UnityEngine.Matrix4x4 get_worldToLocalMatrix()
constexpr auto get_localToWorldMatrix = 42487120; // UnityEngine.Matrix4x4 get_localToWorldMatrix()
constexpr auto SetPositionAndRotation_UnityEngine_Vector3_position__UnityEngine_Quaternion_rotation = 42484128; // System.Void SetPositionAndRotation(UnityEngine.Vector3 position, UnityEngine.Quaternion rotation)
constexpr auto Translate_UnityEngine_Vector3_translation__UnityEngine_Space_relativeTo = 42485120; // System.Void Translate(UnityEngine.Vector3 translation, UnityEngine.Space relativeTo)
constexpr auto Translate_UnityEngine_Vector3_translation = 42484864; // System.Void Translate(UnityEngine.Vector3 translation)
constexpr auto Translate_System_Single_x__System_Single_y__System_Single_z = 42485488; // System.Void Translate(System.Single x, System.Single y, System.Single z)
constexpr auto Rotate_UnityEngine_Vector3_eulers__UnityEngine_Space_relativeTo = 42482256; // System.Void Rotate(UnityEngine.Vector3 eulers, UnityEngine.Space relativeTo)
constexpr auto Rotate_UnityEngine_Vector3_eulers = 42481664; // System.Void Rotate(UnityEngine.Vector3 eulers)
constexpr auto RotateAroundInternal_UnityEngine_Vector3_axis__System_Single_angle = 42481120; // System.Void RotateAroundInternal(UnityEngine.Vector3 axis, System.Single angle)
constexpr auto Rotate_UnityEngine_Vector3_axis__System_Single_angle__UnityEngine_Space_relativeTo = 42481936; // System.Void Rotate(UnityEngine.Vector3 axis, System.Single angle, UnityEngine.Space relativeTo)
constexpr auto Rotate_UnityEngine_Vector3_axis__System_Single_angle = 42481712; // System.Void Rotate(UnityEngine.Vector3 axis, System.Single angle)
constexpr auto RotateAround_UnityEngine_Vector3_point__UnityEngine_Vector3_axis__System_Single_angle = 42481216; // System.Void RotateAround(UnityEngine.Vector3 point, UnityEngine.Vector3 axis, System.Single angle)
constexpr auto LookAt_UnityEngine_Transform_target = 42480464; // System.Void LookAt(UnityEngine.Transform target)
constexpr auto LookAt_UnityEngine_Vector3_worldPosition__UnityEngine_Vector3_worldUp = 42480752; // System.Void LookAt(UnityEngine.Vector3 worldPosition, UnityEngine.Vector3 worldUp)
constexpr auto LookAt_UnityEngine_Vector3_worldPosition = 42480864; // System.Void LookAt(UnityEngine.Vector3 worldPosition)
constexpr auto Internal_LookAt_UnityEngine_Vector3_worldPosition__UnityEngine_Vector3_worldUp = 42479712; // System.Void Internal_LookAt(UnityEngine.Vector3 worldPosition, UnityEngine.Vector3 worldUp)
constexpr auto TransformDirection_UnityEngine_Vector3_direction = 42484384; // UnityEngine.Vector3 TransformDirection(UnityEngine.Vector3 direction)
constexpr auto InverseTransformDirection_UnityEngine_Vector3_direction = 42479904; // UnityEngine.Vector3 InverseTransformDirection(UnityEngine.Vector3 direction)
constexpr auto TransformVector_UnityEngine_Vector3_vector = 42484768; // UnityEngine.Vector3 TransformVector(UnityEngine.Vector3 vector)
constexpr auto InverseTransformVector_UnityEngine_Vector3_vector = 42480288; // UnityEngine.Vector3 InverseTransformVector(UnityEngine.Vector3 vector)
constexpr auto TransformPoint_UnityEngine_Vector3_position = 42484576; // UnityEngine.Vector3 TransformPoint(UnityEngine.Vector3 position)
constexpr auto InverseTransformPoint_UnityEngine_Vector3_position = 42480096; // UnityEngine.Vector3 InverseTransformPoint(UnityEngine.Vector3 position)
constexpr auto get_root = 42479488; // UnityEngine.Transform get_root()
constexpr auto GetRoot = 42479488; // UnityEngine.Transform GetRoot()
constexpr auto get_childCount = 42485744; // System.Int32 get_childCount()
constexpr auto DetachChildren = 42478912; // System.Void DetachChildren()
constexpr auto SetAsFirstSibling = 42483728; // System.Void SetAsFirstSibling()
constexpr auto SetAsLastSibling = 42483792; // System.Void SetAsLastSibling()
constexpr auto SetSiblingIndex_System_Int32_index = 42484224; // System.Void SetSiblingIndex(System.Int32 index)
constexpr auto GetSiblingIndex = 42479552; // System.Int32 GetSiblingIndex()
constexpr auto Find_System_String_n = 42479072; // UnityEngine.Transform Find(System.String n)
constexpr auto get_lossyScale = 42487296; // UnityEngine.Vector3 get_lossyScale()
constexpr auto IsChildOf_UnityEngine_Transform_parent = 42480384; // System.Boolean IsChildOf(UnityEngine.Transform parent)
constexpr auto get_hasChanged = 42486256; // System.Boolean get_hasChanged()
constexpr auto set_hasChanged_System_Boolean_value = 42488576; // System.Void set_hasChanged(System.Boolean value)
constexpr auto GetEnumerator = 42479296; // System.Collections.IEnumerator GetEnumerator()
constexpr auto GetChild_System_Int32_index = 42479232; // UnityEngine.Transform GetChild(System.Int32 index)
constexpr auto get_position_Injected_out_UnityEngine_Vector3_ret = 42487376; // System.Void get_position_Injected(out UnityEngine.Vector3 ret)
constexpr auto set_position_Injected_UnityEngine_Vector3_value = 42489504; // System.Void set_position_Injected(UnityEngine.Vector3 value)
constexpr auto get_localPosition_Injected_out_UnityEngine_Vector3_ret = 42486560; // System.Void get_localPosition_Injected(out UnityEngine.Vector3 ret)
constexpr auto set_localPosition_Injected_UnityEngine_Vector3_value = 42488832; // System.Void set_localPosition_Injected(UnityEngine.Vector3 value)
constexpr auto get_rotation_Injected_out_UnityEngine_Quaternion_ret = 42487744; // System.Void get_rotation_Injected(out UnityEngine.Quaternion ret)
constexpr auto set_rotation_Injected_UnityEngine_Quaternion_value = 42489840; // System.Void set_rotation_Injected(UnityEngine.Quaternion value)
constexpr auto get_localRotation_Injected_out_UnityEngine_Quaternion_ret = 42486720; // System.Void get_localRotation_Injected(out UnityEngine.Quaternion ret)
constexpr auto set_localRotation_Injected_UnityEngine_Quaternion_value = 42488992; // System.Void set_localRotation_Injected(UnityEngine.Quaternion value)
constexpr auto get_localScale_Injected_out_UnityEngine_Vector3_ret = 42486880; // System.Void get_localScale_Injected(out UnityEngine.Vector3 ret)
constexpr auto set_localScale_Injected_UnityEngine_Vector3_value = 42489152; // System.Void set_localScale_Injected(UnityEngine.Vector3 value)
constexpr auto get_worldToLocalMatrix_Injected_out_UnityEngine_Matrix4x4_ret = 42488112; // System.Void get_worldToLocalMatrix_Injected(out UnityEngine.Matrix4x4 ret)
constexpr auto get_localToWorldMatrix_Injected_out_UnityEngine_Matrix4x4_ret = 42487040; // System.Void get_localToWorldMatrix_Injected(out UnityEngine.Matrix4x4 ret)
constexpr auto SetPositionAndRotation_Injected_UnityEngine_Vector3_position__UnityEngine_Quaternion_rotation = 42484032; // System.Void SetPositionAndRotation_Injected(UnityEngine.Vector3 position, UnityEngine.Quaternion rotation)
constexpr auto RotateAroundInternal_Injected_UnityEngine_Vector3_axis__System_Single_angle = 42481024; // System.Void RotateAroundInternal_Injected(UnityEngine.Vector3 axis, System.Single angle)
constexpr auto Internal_LookAt_Injected_UnityEngine_Vector3_worldPosition__UnityEngine_Vector3_worldUp = 42479616; // System.Void Internal_LookAt_Injected(UnityEngine.Vector3 worldPosition, UnityEngine.Vector3 worldUp)
constexpr auto TransformDirection_Injected_UnityEngine_Vector3_direction__out_UnityEngine_Vector3_ret = 42484288; // System.Void TransformDirection_Injected(UnityEngine.Vector3 direction, out UnityEngine.Vector3 ret)
constexpr auto InverseTransformDirection_Injected_UnityEngine_Vector3_direction__out_UnityEngine_Vector3_ret = 42479808; // System.Void InverseTransformDirection_Injected(UnityEngine.Vector3 direction, out UnityEngine.Vector3 ret)
constexpr auto TransformVector_Injected_UnityEngine_Vector3_vector__out_UnityEngine_Vector3_ret = 42484672; // System.Void TransformVector_Injected(UnityEngine.Vector3 vector, out UnityEngine.Vector3 ret)
constexpr auto InverseTransformVector_Injected_UnityEngine_Vector3_vector__out_UnityEngine_Vector3_ret = 42480192; // System.Void InverseTransformVector_Injected(UnityEngine.Vector3 vector, out UnityEngine.Vector3 ret)
constexpr auto TransformPoint_Injected_UnityEngine_Vector3_position__out_UnityEngine_Vector3_ret = 42484480; // System.Void TransformPoint_Injected(UnityEngine.Vector3 position, out UnityEngine.Vector3 ret)
constexpr auto InverseTransformPoint_Injected_UnityEngine_Vector3_position__out_UnityEngine_Vector3_ret = 42480000; // System.Void InverseTransformPoint_Injected(UnityEngine.Vector3 position, out UnityEngine.Vector3 ret)
constexpr auto get_lossyScale_Injected_out_UnityEngine_Vector3_ret = 42487216; // System.Void get_lossyScale_Injected(out UnityEngine.Vector3 ret)
}
namespace StaticMethods
{
constexpr auto FindRelativeTransformWithPath_UnityEngine_Transform_transform__System_String_path__System_Boolean_isActiveOnly = 42478976; // UnityEngine.Transform FindRelativeTransformWithPath(UnityEngine.Transform transform, System.String path, System.Boolean isActiveOnly)
}
}
namespace UnityEngine_RectTransform
{
namespace StaticFields
{
constexpr auto reapplyDrivenProperties = 0x0; // UnityEngine.RectTransform/ReapplyDrivenProperties
}
namespace Methods
{
constexpr auto get_rect = 42439568; // UnityEngine.Rect get_rect()
constexpr auto get_anchorMin = 42438384; // UnityEngine.Vector2 get_anchorMin()
constexpr auto set_anchorMin_UnityEngine_Vector2_value = 42440224; // System.Void set_anchorMin(UnityEngine.Vector2 value)
constexpr auto get_anchorMax = 42438224; // UnityEngine.Vector2 get_anchorMax()
constexpr auto set_anchorMax_UnityEngine_Vector2_value = 42440080; // System.Void set_anchorMax(UnityEngine.Vector2 value)
constexpr auto get_anchoredPosition = 42438720; // UnityEngine.Vector2 get_anchoredPosition()
constexpr auto set_anchoredPosition_UnityEngine_Vector2_value = 42440592; // System.Void set_anchoredPosition(UnityEngine.Vector2 value)
constexpr auto get_sizeDelta = 42439728; // UnityEngine.Vector2 get_sizeDelta()
constexpr auto set_sizeDelta_UnityEngine_Vector2_value = 42442112; // System.Void set_sizeDelta(UnityEngine.Vector2 value)
constexpr auto get_pivot = 42439408; // UnityEngine.Vector2 get_pivot()
constexpr auto set_pivot_UnityEngine_Vector2_value = 42441968; // System.Void set_pivot(UnityEngine.Vector2 value)
constexpr auto get_anchoredPosition3D = 42438464; // UnityEngine.Vector3 get_anchoredPosition3D()
constexpr auto set_anchoredPosition3D_UnityEngine_Vector3_value = 42440288; // System.Void set_anchoredPosition3D(UnityEngine.Vector3 value)
constexpr auto get_offsetMin = 42439104; // UnityEngine.Vector2 get_offsetMin()
constexpr auto set_offsetMin_UnityEngine_Vector2_value = 42441264; // System.Void set_offsetMin(UnityEngine.Vector2 value)
constexpr auto get_offsetMax = 42438800; // UnityEngine.Vector2 get_offsetMax()
constexpr auto set_offsetMax_UnityEngine_Vector2_value = 42440656; // System.Void set_offsetMax(UnityEngine.Vector2 value)
constexpr auto GetLocalCorners_UnityEngine_Vector3___fourCornersArray = 42433952; // System.Void GetLocalCorners(UnityEngine.Vector3[] fourCornersArray)
constexpr auto GetWorldCorners_UnityEngine_Vector3___fourCornersArray = 42434752; // System.Void GetWorldCorners(UnityEngine.Vector3[] fourCornersArray)
constexpr auto SetInsetAndSizeFromParentEdge_UnityEngine_RectTransform_Edge_edge__System_Single_inset__System_Single_size = 42435648; // System.Void SetInsetAndSizeFromParentEdge(UnityEngine.RectTransform/Edge edge, System.Single inset, System.Single size)
constexpr auto SetSizeWithCurrentAnchors_UnityEngine_RectTransform_Axis_axis__System_Single_size = 42436912; // System.Void SetSizeWithCurrentAnchors(UnityEngine.RectTransform/Axis axis, System.Single size)
constexpr auto GetParentSize = 42434432; // UnityEngine.Vector2 GetParentSize()
constexpr auto get_rect_Injected_out_UnityEngine_Rect_ret = 42439488; // System.Void get_rect_Injected(out UnityEngine.Rect ret)
constexpr auto get_anchorMin_Injected_out_UnityEngine_Vector2_ret = 42438304; // System.Void get_anchorMin_Injected(out UnityEngine.Vector2 ret)
constexpr auto set_anchorMin_Injected_UnityEngine_Vector2_value = 42440144; // System.Void set_anchorMin_Injected(UnityEngine.Vector2 value)
constexpr auto get_anchorMax_Injected_out_UnityEngine_Vector2_ret = 42438144; // System.Void get_anchorMax_Injected(out UnityEngine.Vector2 ret)
constexpr auto set_anchorMax_Injected_UnityEngine_Vector2_value = 42440000; // System.Void set_anchorMax_Injected(UnityEngine.Vector2 value)
constexpr auto get_anchoredPosition_Injected_out_UnityEngine_Vector2_ret = 42438640; // System.Void get_anchoredPosition_Injected(out UnityEngine.Vector2 ret)
constexpr auto set_anchoredPosition_Injected_UnityEngine_Vector2_value = 42440512; // System.Void set_anchoredPosition_Injected(UnityEngine.Vector2 value)
constexpr auto get_sizeDelta_Injected_out_UnityEngine_Vector2_ret = 42439648; // System.Void get_sizeDelta_Injected(out UnityEngine.Vector2 ret)
constexpr auto set_sizeDelta_Injected_UnityEngine_Vector2_value = 42442032; // System.Void set_sizeDelta_Injected(UnityEngine.Vector2 value)
constexpr auto get_pivot_Injected_out_UnityEngine_Vector2_ret = 42439328; // System.Void get_pivot_Injected(out UnityEngine.Vector2 ret)
constexpr auto set_pivot_Injected_UnityEngine_Vector2_value = 42441888; // System.Void set_pivot_Injected(UnityEngine.Vector2 value)
}
namespace StaticMethods
{
constexpr auto add_reapplyDrivenProperties_UnityEngine_RectTransform_ReapplyDrivenProperties_value = 42437952; // System.Void add_reapplyDrivenProperties(UnityEngine.RectTransform/ReapplyDrivenProperties value)
constexpr auto remove_reapplyDrivenProperties_UnityEngine_RectTransform_ReapplyDrivenProperties_value = 42439808; // System.Void remove_reapplyDrivenProperties(UnityEngine.RectTransform/ReapplyDrivenProperties value)
constexpr auto SendReapplyDrivenProperties_UnityEngine_RectTransform_driven = 42435552; // System.Void SendReapplyDrivenProperties(UnityEngine.RectTransform driven)
}
}
namespace UnityEngine_Time
{
namespace StaticMethods
{
constexpr auto get_time = 42474064; // System.Single get_time()
constexpr auto get_deltaTime = 42473632; // System.Single get_deltaTime()
constexpr auto get_fixedTime = 42473728; // System.Single get_fixedTime()
constexpr auto get_unscaledTime = 42474160; // System.Single get_unscaledTime()
constexpr auto get_unscaledDeltaTime = 42474112; // System.Single get_unscaledDeltaTime()
constexpr auto get_fixedDeltaTime = 42473680; // System.Single get_fixedDeltaTime()
constexpr auto set_fixedDeltaTime_System_Single_value = 42474208; // System.Void set_fixedDeltaTime(System.Single value)
constexpr auto get_maximumDeltaTime = 42473824; // System.Single get_maximumDeltaTime()
constexpr auto set_maximumDeltaTime_System_Single_value = 42474272; // System.Void set_maximumDeltaTime(System.Single value)
constexpr auto get_smoothDeltaTime = 42473968; // System.Single get_smoothDeltaTime()
constexpr auto get_timeScale = 42474016; // System.Single get_timeScale()
constexpr auto set_timeScale_System_Single_value = 42474336; // System.Void set_timeScale(System.Single value)
constexpr auto get_frameCount = 42473776; // System.Int32 get_frameCount()
constexpr auto get_renderedFrameCount = 42473920; // System.Int32 get_renderedFrameCount()
constexpr auto get_realtimeSinceStartup = 42473872; // System.Single get_realtimeSinceStartup()
}
}
namespace UnityEngine_Object
{
namespace Fields
{
constexpr auto m_CachedPtr = 0x10; // System.IntPtr
}
namespace StaticFields
{
constexpr auto OffsetOfInstanceIDInCPlusPlusObject = 0x0; // System.Int32
constexpr auto objectIsNullMessage = 0x0; // System.String
constexpr auto cloneDestroyedMessage = 0x0; // System.String
}
namespace Methods
{
constexpr auto GetInstanceID = 42328704; // System.Int32 GetInstanceID()
constexpr auto GetHashCode = 42328688; // System.Int32 GetHashCode()
constexpr auto Equals_System_Object_other = 42327360; // System.Boolean Equals(System.Object other)
constexpr auto GetCachedPtr = 42285520; // System.IntPtr GetCachedPtr()
constexpr auto get_name = 42333568; // System.String get_name()
constexpr auto set_name_System_String_value = 42334672; // System.Void set_name(System.String value)
constexpr auto get_hideFlags = 42333504; // UnityEngine.HideFlags get_hideFlags()
constexpr auto set_hideFlags_UnityEngine_HideFlags_value = 42334608; // System.Void set_hideFlags(UnityEngine.HideFlags value)
constexpr auto ToString = 42333264; // System.String ToString()
constexpr auto _ctor = 3679632; // System.Void .ctor()
}
namespace StaticMethods
{
constexpr auto op_Implicit_UnityEngine_Object_exists = 42334048; // System.Boolean op_Implicit(UnityEngine.Object exists)
constexpr auto CompareBaseObjects_UnityEngine_Object_lhs__UnityEngine_Object_rhs = 42326592; // System.Boolean CompareBaseObjects(UnityEngine.Object lhs, UnityEngine.Object rhs)
constexpr auto IsNativeObjectAlive_UnityEngine_Object_o = 42333088; // System.Boolean IsNativeObjectAlive(UnityEngine.Object o)
constexpr auto Instantiate_UnityEngine_Object_original__UnityEngine_Vector3_position__UnityEngine_Quaternion_rotation = 42330480; // UnityEngine.Object Instantiate(UnityEngine.Object original, UnityEngine.Vector3 position, UnityEngine.Quaternion rotation)
constexpr auto Instantiate_UnityEngine_Object_original__UnityEngine_Vector3_position__UnityEngine_Quaternion_rotation__UnityEngine_Transform_parent = 42329120; // UnityEngine.Object Instantiate(UnityEngine.Object original, UnityEngine.Vector3 position, UnityEngine.Quaternion rotation, UnityEngine.Transform parent)
constexpr auto Instantiate_UnityEngine_Object_original = 42330000; // UnityEngine.Object Instantiate(UnityEngine.Object original)
constexpr auto Instantiate_UnityEngine_Object_original__UnityEngine_Transform_parent__System_Boolean_instantiateInWorldSpace = 42331232; // UnityEngine.Object Instantiate(UnityEngine.Object original, UnityEngine.Transform parent, System.Boolean instantiateInWorldSpace)
constexpr auto T_UnityEngine_Object_Instantiate_System_Object__T_original = 18849392; // T UnityEngine.Object.Instantiate<System.Object>
constexpr auto T_UnityEngine_Object_Instantiate_System_Object__T_original__UnityEngine_Vector3_position__UnityEngine_Quaternion_rotation = 18848816; // T UnityEngine.Object.Instantiate<System.Object>
constexpr auto T_UnityEngine_Object_Instantiate_System_Object__T_original__UnityEngine_Vector3_position__UnityEngine_Quaternion_rotation__UnityEngine_Transform_parent = 18849040; // T UnityEngine.Object.Instantiate<System.Object>
constexpr auto T_UnityEngine_Object_Instantiate_System_Object__T_original__UnityEngine_Transform_parent = 18849280; // T UnityEngine.Object.Instantiate<System.Object>
constexpr auto T_UnityEngine_Object_Instantiate_System_Object__T_original__UnityEngine_Transform_parent__System_Boolean_worldPositionStays = 18849696; // T UnityEngine.Object.Instantiate<System.Object>
constexpr auto Destroy_UnityEngine_Object_obj__System_Single_t = 42327104; // System.Void Destroy(UnityEngine.Object obj, System.Single t)
constexpr auto Destroy_UnityEngine_Object_obj = 42327184; // System.Void Destroy(UnityEngine.Object obj)
constexpr auto DestroyImmediate_UnityEngine_Object_obj__System_Boolean_allowDestroyingAssets = 42327024; // System.Void DestroyImmediate(UnityEngine.Object obj, System.Boolean allowDestroyingAssets)
constexpr auto DestroyImmediate_UnityEngine_Object_obj = 42326912; // System.Void DestroyImmediate(UnityEngine.Object obj)
constexpr auto FindObjectsOfType_System_Type_type = 42328432; // UnityEngine.Object[] FindObjectsOfType(System.Type type)
constexpr auto FindObjectsOfType_System_Type_type__System_Boolean_includeInactive = 42328544; // UnityEngine.Object[] FindObjectsOfType(System.Type type, System.Boolean includeInactive)
constexpr auto DontDestroyOnLoad_UnityEngine_Object_target = 42327296; // System.Void DontDestroyOnLoad(UnityEngine.Object target)
constexpr auto T___UnityEngine_Object_FindObjectsOfType_System_Object_ = 18848656; // T[] UnityEngine.Object.FindObjectsOfType<System.Object>
constexpr auto T_UnityEngine_Object_FindObjectOfType_System_Object_ = 18848432; // T UnityEngine.Object.FindObjectOfType<System.Object>
constexpr auto CheckNullArgument_System_Object_arg__System_String_message = 42326496; // System.Void CheckNullArgument(System.Object arg, System.String message)
constexpr auto FindObjectOfType_System_Type_type = 42328288; // UnityEngine.Object FindObjectOfType(System.Type type)
constexpr auto FindObjectOfType_System_Type_type__System_Boolean_includeInactive = 42328128; // UnityEngine.Object FindObjectOfType(System.Type type, System.Boolean includeInactive)
constexpr auto op_Equality_UnityEngine_Object_x__UnityEngine_Object_y = 42333680; // System.Boolean op_Equality(UnityEngine.Object x, UnityEngine.Object y)
constexpr auto op_Inequality_UnityEngine_Object_x__UnityEngine_Object_y = 42334240; // System.Boolean op_Inequality(UnityEngine.Object x, UnityEngine.Object y)
constexpr auto GetOffsetOfInstanceIDInCPlusPlusObject = 42329072; // System.Int32 GetOffsetOfInstanceIDInCPlusPlusObject()
constexpr auto Internal_CloneSingle_UnityEngine_Object_data = 42332512; // UnityEngine.Object Internal_CloneSingle(UnityEngine.Object data)
constexpr auto Internal_CloneSingleWithParent_UnityEngine_Object_data__UnityEngine_Transform_parent__System_Boolean_worldPositionStays = 42332416; // UnityEngine.Object Internal_CloneSingleWithParent(UnityEngine.Object data, UnityEngine.Transform parent, System.Boolean worldPositionStays)
constexpr auto Internal_InstantiateSingle_UnityEngine_Object_data__UnityEngine_Vector3_pos__UnityEngine_Quaternion_rot = 42332944; // UnityEngine.Object Internal_InstantiateSingle(UnityEngine.Object data, UnityEngine.Vector3 pos, UnityEngine.Quaternion rot)
constexpr auto Internal_InstantiateSingleWithParent_UnityEngine_Object_data__UnityEngine_Transform_parent__UnityEngine_Vector3_pos__UnityEngine_Quaternion_rot = 42332688; // UnityEngine.Object Internal_InstantiateSingleWithParent(UnityEngine.Object data, UnityEngine.Transform parent, UnityEngine.Vector3 pos, UnityEngine.Quaternion rot)
constexpr auto ToString_UnityEngine_Object_obj = 42333376; // System.String ToString(UnityEngine.Object obj)
constexpr auto GetName_UnityEngine_Object_obj = 42329008; // System.String GetName(UnityEngine.Object obj)
constexpr auto SetName_UnityEngine_Object_obj__System_String_name = 42333184; // System.Void SetName(UnityEngine.Object obj, System.String name)
constexpr auto FindObjectFromInstanceID_System_Int32_instanceID = 42328064; // UnityEngine.Object FindObjectFromInstanceID(System.Int32 instanceID)
constexpr auto ForceLoadFromInstanceID_System_Int32_instanceID = 42328624; // UnityEngine.Object ForceLoadFromInstanceID(System.Int32 instanceID)
constexpr auto _cctor = 42333440; // System.Void .cctor()
constexpr auto Internal_InstantiateSingle_Injected_UnityEngine_Object_data__UnityEngine_Vector3_pos__UnityEngine_Quaternion_rot = 42332848; // UnityEngine.Object Internal_InstantiateSingle_Injected(UnityEngine.Object data, UnityEngine.Vector3 pos, UnityEngine.Quaternion rot)
constexpr auto Internal_InstantiateSingleWithParent_Injected_UnityEngine_Object_data__UnityEngine_Transform_parent__UnityEngine_Vector3_pos__UnityEngine_Quaternion_rot = 42332576; // UnityEngine.Object Internal_InstantiateSingleWithParent_Injected(UnityEngine.Object data, UnityEngine.Transform parent, UnityEngine.Vector3 pos, UnityEngine.Quaternion rot)
}
}
namespace UnityEngine_GameObject
{
namespace Methods
{
constexpr auto T_UnityEngine_GameObject_GetComponent_System_Object_ = 18043472; // T UnityEngine.GameObject.GetComponent<System.Object>
constexpr auto GetComponent_System_Type_type = 42299728; // UnityEngine.Component GetComponent(System.Type type)
constexpr auto GetComponentFastPath_System_Type_type__System_IntPtr_oneFurtherThanResultValue = 42299440; // System.Void GetComponentFastPath(System.Type type, System.IntPtr oneFurtherThanResultValue)
constexpr auto GetComponentInChildren_System_Type_type__System_Boolean_includeInactive = 42299536; // UnityEngine.Component GetComponentInChildren(System.Type type, System.Boolean includeInactive)
constexpr auto T___UnityEngine_Component_GetComponentsInChildren_System_Object_ = 17815248; // T[] UnityEngine.Component.GetComponentsInChildren<System.Object>
constexpr auto T___UnityEngine_Component_GetComponentsInParent_System_Object_ = 17815248; // T[] UnityEngine.Component.GetComponentsInParent<System.Object>
constexpr auto T_UnityEngine_GameObject_GetComponentInChildren_System_Object_ = 17815248; // T UnityEngine.GameObject.GetComponentInChildren<System.Object>
constexpr auto T_UnityEngine_GameObject_GetComponentInParent_System_Object_ = 17815248; // T UnityEngine.GameObject.GetComponentInParent<System.Object>
constexpr auto T___UnityEngine_GameObject_GetComponentsInChildren_System_Object_ = 17815248; // T[] UnityEngine.GameObject.GetComponentsInChildren<System.Object>
constexpr auto T_UnityEngine_GameObject_GetComponentInChildren_System_Object__System_Boolean_includeInactive = 18043056; // T UnityEngine.GameObject.GetComponentInChildren<System.Object>
constexpr auto GetComponentInParent_System_Type_type__System_Boolean_includeInactive = 42299632; // UnityEngine.Component GetComponentInParent(System.Type type, System.Boolean includeInactive)
constexpr auto T_UnityEngine_GameObject_GetComponentInParent_System_Object__System_Boolean_includeInactive = 18043264; // T UnityEngine.GameObject.GetComponentInParent<System.Object>
constexpr auto GetComponentsInternal_System_Type_type__System_Boolean_useSearchTypeAsArrayReturnType__System_Boolean_recursive__System_Boolean_includeInactive__System_Boolean_reverse__System_Object_resultList = 42300016; // System.Array GetComponentsInternal(System.Type type, System.Boolean useSearchTypeAsArrayReturnType, System.Boolean recursive, System.Boolean includeInactive, System.Boolean reverse, System.Object resultList)
constexpr auto GetComponents_System_Type_type = 42300144; // UnityEngine.Component[] GetComponents(System.Type type)
constexpr auto T___UnityEngine_GameObject_GetComponents_System_Object_ = 18044432; // T[] UnityEngine.GameObject.GetComponents<System.Object>
constexpr auto System_Void_UnityEngine_GameObject_GetComponents_System_Object__System_Collections_Generic_List_1_T__results = 18044656; // System.Void UnityEngine.GameObject.GetComponents<System.Object>
constexpr auto GetComponentsInChildren_System_Type_type = 42300000; // UnityEngine.Component[] GetComponentsInChildren(System.Type type)
constexpr auto GetComponentsInChildren_System_Type_type__System_Boolean_includeInactive = 42299808; // UnityEngine.Component[] GetComponentsInChildren(System.Type type, System.Boolean includeInactive)
constexpr auto T___UnityEngine_GameObject_GetComponentsInChildren_System_Object__System_Boolean_includeInactive = 18043600; // T[] UnityEngine.GameObject.GetComponentsInChildren<System.Object>
constexpr auto System_Void_UnityEngine_GameObject_GetComponentsInChildren_System_Object__System_Boolean_includeInactive__System_Collections_Generic_List_1_T__results = 18043840; // System.Void UnityEngine.GameObject.GetComponentsInChildren<System.Object>
constexpr auto System_Void_UnityEngine_Component_GetComponentsInChildren_System_Object__System_Collections_Generic_List_1_T__results = 17815440; // System.Void UnityEngine.Component.GetComponentsInChildren<System.Object>
constexpr auto System_Void_UnityEngine_GameObject_GetComponentsInChildren_System_Object__System_Collections_Generic_List_1_T__results = 17815440; // System.Void UnityEngine.GameObject.GetComponentsInChildren<System.Object>
constexpr auto System_Void_UnityEngine_GameObject_GetComponentsInParent_System_Object__System_Boolean_includeInactive__System_Collections_Generic_List_1_T__results = 18044016; // System.Void UnityEngine.GameObject.GetComponentsInParent<System.Object>
constexpr auto T___UnityEngine_GameObject_GetComponentsInParent_System_Object__System_Boolean_includeInactive = 18044192; // T[] UnityEngine.GameObject.GetComponentsInParent<System.Object>
constexpr auto System_Boolean_UnityEngine_GameObject_TryGetComponent_System_Object__out_T_component = 18044816; // System.Boolean UnityEngine.GameObject.TryGetComponent<System.Object>
constexpr auto TryGetComponentFastPath_System_Type_type__System_IntPtr_oneFurtherThanResultValue = 42300864; // System.Void TryGetComponentFastPath(System.Type type, System.IntPtr oneFurtherThanResultValue)
constexpr auto SendMessage_System_String_methodName__UnityEngine_SendMessageOptions_options = 42300688; // System.Void SendMessage(System.String methodName, UnityEngine.SendMessageOptions options)
constexpr auto BroadcastMessage_System_String_methodName__UnityEngine_SendMessageOptions_options = 42299024; // System.Void BroadcastMessage(System.String methodName, UnityEngine.SendMessageOptions options)
constexpr auto Internal_AddComponentWithType_System_Type_componentType = 42298848; // UnityEngine.Component Internal_AddComponentWithType(System.Type componentType)
constexpr auto AddComponent_System_Type_componentType = 42298848; // UnityEngine.Component AddComponent(System.Type componentType)
constexpr auto T_UnityEngine_GameObject_AddComponent_System_Object_ = 18042832; // T UnityEngine.GameObject.AddComponent<System.Object>
constexpr auto get_transform = 42301760; // UnityEngine.Transform get_transform()
constexpr auto get_layer = 42301632; // System.Int32 get_layer()
constexpr auto set_layer_System_Int32_value = 42301904; // System.Void set_layer(System.Int32 value)
constexpr auto SetActive_System_Boolean_value = 42300784; // System.Void SetActive(System.Boolean value)
constexpr auto get_activeSelf = 42301504; // System.Boolean get_activeSelf()
constexpr auto get_activeInHierarchy = 42301440; // System.Boolean get_activeInHierarchy()
constexpr auto get_isStatic = 42301568; // System.Boolean get_isStatic()
constexpr auto set_isStatic_System_Boolean_value = 42301824; // System.Void set_isStatic(System.Boolean value)
constexpr auto get_tag = 42301696; // System.String get_tag()
constexpr auto set_tag_System_String_value = 42301968; // System.Void set_tag(System.String value)
constexpr auto CompareTag_System_String_tag = 42299232; // System.Boolean CompareTag(System.String tag)
constexpr auto SendMessage_System_String_methodName__System_Object_value__UnityEngine_SendMessageOptions_options = 42300400; // System.Void SendMessage(System.String methodName, System.Object value, UnityEngine.SendMessageOptions options)
constexpr auto SendMessage_System_String_methodName__System_Object_value = 42300592; // System.Void SendMessage(System.String methodName, System.Object value)
constexpr auto SendMessage_System_String_methodName = 42300512; // System.Void SendMessage(System.String methodName)
constexpr auto BroadcastMessage_System_String_methodName__System_Object_parameter__UnityEngine_SendMessageOptions_options = 42299120; // System.Void BroadcastMessage(System.String methodName, System.Object parameter, UnityEngine.SendMessageOptions options)
constexpr auto BroadcastMessage_System_String_methodName__System_Object_parameter = 42298928; // System.Void BroadcastMessage(System.String methodName, System.Object parameter)
constexpr auto _ctor_System_String_name = 42300960; // System.Void .ctor(System.String name)
constexpr auto _ctor = 42301328; // System.Void .ctor()
constexpr auto _ctor_System_String_name__System_Type___components = 42301088; // System.Void .ctor(System.String name, System.Type[] components)
constexpr auto get_gameObject = 31698928; // UnityEngine.GameObject get_gameObject()
}
namespace StaticMethods
{
constexpr auto CreatePrimitive_UnityEngine_PrimitiveType_type = 42299312; // UnityEngine.GameObject CreatePrimitive(UnityEngine.PrimitiveType type)
constexpr auto Internal_CreateGameObject_UnityEngine_GameObject_self__System_String_name = 42300320; // System.Void Internal_CreateGameObject(UnityEngine.GameObject self, System.String name)
constexpr auto Find_System_String_name = 42299376; // UnityEngine.GameObject Find(System.String name)
}
}
namespace UnityEngine_Component
{
namespace Methods
{
constexpr auto get_transform = 42296800; // UnityEngine.Transform get_transform()
constexpr auto get_gameObject = 42296736; // UnityEngine.GameObject get_gameObject()
constexpr auto GetComponent_System_Type_type = 42295680; // UnityEngine.Component GetComponent(System.Type type)
constexpr auto GetComponentFastPath_System_Type_type__System_IntPtr_oneFurtherThanResultValue = 42295296; // System.Void GetComponentFastPath(System.Type type, System.IntPtr oneFurtherThanResultValue)
constexpr auto T_UnityEngine_Component_GetComponent_System_Object_ = 17815120; // T UnityEngine.Component.GetComponent<System.Object>
constexpr auto System_Boolean_UnityEngine_Component_TryGetComponent_System_Object__out_T_component = 17815664; // System.Boolean UnityEngine.Component.TryGetComponent<System.Object>
constexpr auto GetComponentInChildren_System_Type_t__System_Boolean_includeInactive = 42295392; // UnityEngine.Component GetComponentInChildren(System.Type t, System.Boolean includeInactive)
constexpr auto T_UnityEngine_Component_GetComponentInChildren_System_Object__System_Boolean_includeInactive = 17814528; // T UnityEngine.Component.GetComponentInChildren<System.Object>
constexpr auto T_UnityEngine_Component_GetComponentInChildren_System_Object_ = 17814736; // T UnityEngine.Component.GetComponentInChildren<System.Object>
constexpr auto GetComponentsInChildren_System_Type_t = 42295904; // UnityEngine.Component[] GetComponentsInChildren(System.Type t)
constexpr auto T___UnityEngine_Component_GetComponentsInChildren_System_Object__System_Boolean_includeInactive = 17815360; // T[] UnityEngine.Component.GetComponentsInChildren<System.Object>
constexpr auto T___UnityEngine_Component_GetComponentsInParent_System_Object__System_Boolean_includeInactive = 17815360; // T[] UnityEngine.Component.GetComponentsInParent<System.Object>
constexpr auto System_Void_UnityEngine_Component_GetComponentsInChildren_System_Object__System_Boolean_includeInactive__System_Collections_Generic_List_1_T__result = 17815264; // System.Void UnityEngine.Component.GetComponentsInChildren<System.Object>
constexpr auto System_Void_UnityEngine_Component_GetComponentsInParent_System_Object__System_Boolean_includeInactive__System_Collections_Generic_List_1_T__result = 17815264; // System.Void UnityEngine.Component.GetComponentsInParent<System.Object>
constexpr auto T___UnityEngine_Component_GetComponentsInChildren_System_Object_ = 17815248; // T[] UnityEngine.Component.GetComponentsInChildren<System.Object>
constexpr auto T___UnityEngine_Component_GetComponentsInParent_System_Object_ = 17815248; // T[] UnityEngine.Component.GetComponentsInParent<System.Object>
constexpr auto T_UnityEngine_GameObject_GetComponentInChildren_System_Object_ = 17815248; // T UnityEngine.GameObject.GetComponentInChildren<System.Object>
constexpr auto T_UnityEngine_GameObject_GetComponentInParent_System_Object_ = 17815248; // T UnityEngine.GameObject.GetComponentInParent<System.Object>
constexpr auto T___UnityEngine_GameObject_GetComponentsInChildren_System_Object_ = 17815248; // T[] UnityEngine.GameObject.GetComponentsInChildren<System.Object>
constexpr auto System_Void_UnityEngine_Component_GetComponentsInChildren_System_Object__System_Collections_Generic_List_1_T__results = 17815440; // System.Void UnityEngine.Component.GetComponentsInChildren<System.Object>
constexpr auto System_Void_UnityEngine_GameObject_GetComponentsInChildren_System_Object__System_Collections_Generic_List_1_T__results = 17815440; // System.Void UnityEngine.GameObject.GetComponentsInChildren<System.Object>
constexpr auto GetComponentInParent_System_Type_t__System_Boolean_includeInactive = 42295536; // UnityEngine.Component GetComponentInParent(System.Type t, System.Boolean includeInactive)
constexpr auto T_UnityEngine_Component_GetComponentInParent_System_Object_ = 17814928; // T UnityEngine.Component.GetComponentInParent<System.Object>
constexpr auto System_Void_UnityEngine_Component_GetComponentsInChildren_System_Object__System_Boolean_includeInactive__System_Collections_Generic_List_1_T__results = 17815264; // System.Void UnityEngine.Component.GetComponentsInChildren<System.Object>
constexpr auto System_Void_UnityEngine_Component_GetComponentsInParent_System_Object__System_Boolean_includeInactive__System_Collections_Generic_List_1_T__results = 17815264; // System.Void UnityEngine.Component.GetComponentsInParent<System.Object>
constexpr auto GetComponents_System_Type_type = 42296000; // UnityEngine.Component[] GetComponents(System.Type type)
constexpr auto GetComponentsForListInternal_System_Type_searchType__System_Object_resultList = 42295808; // System.Void GetComponentsForListInternal(System.Type searchType, System.Object resultList)
constexpr auto GetComponents_System_Type_type__System_Collections_Generic_List_1_UnityEngine_Component__results = 42295808; // System.Void GetComponents(System.Type type, System.Collections.Generic.List`1<UnityEngine.Component> results)
constexpr auto System_Void_UnityEngine_Component_GetComponents_System_Object__System_Collections_Generic_List_1_T__results = 17815472; // System.Void UnityEngine.Component.GetComponents<System.Object>
constexpr auto T___UnityEngine_Component_GetComponents_System_Object_ = 17815600; // T[] UnityEngine.Component.GetComponents<System.Object>
constexpr auto CompareTag_System_String_tag = 42295168; // System.Boolean CompareTag(System.String tag)
constexpr auto SendMessageUpwards_System_String_methodName__System_Object_value__UnityEngine_SendMessageOptions_options = 42296240; // System.Void SendMessageUpwards(System.String methodName, System.Object value, UnityEngine.SendMessageOptions options)
constexpr auto SendMessage_System_String_methodName__System_Object_value = 42296464; // System.Void SendMessage(System.String methodName, System.Object value)
constexpr auto SendMessage_System_String_methodName = 42296560; // System.Void SendMessage(System.String methodName)
constexpr auto SendMessage_System_String_methodName__System_Object_value__UnityEngine_SendMessageOptions_options = 42296352; // System.Void SendMessage(System.String methodName, System.Object value, UnityEngine.SendMessageOptions options)
constexpr auto SendMessage_System_String_methodName__UnityEngine_SendMessageOptions_options = 42296640; // System.Void SendMessage(System.String methodName, UnityEngine.SendMessageOptions options)
constexpr auto BroadcastMessage_System_String_methodName__System_Object_parameter__UnityEngine_SendMessageOptions_options = 42294976; // System.Void BroadcastMessage(System.String methodName, System.Object parameter, UnityEngine.SendMessageOptions options)
constexpr auto BroadcastMessage_System_String_methodName = 42295088; // System.Void BroadcastMessage(System.String methodName)
constexpr auto BroadcastMessage_System_String_methodName__UnityEngine_SendMessageOptions_options = 42294880; // System.Void BroadcastMessage(System.String methodName, UnityEngine.SendMessageOptions options)
constexpr auto _ctor = 42289824; // System.Void .ctor()
}
}
namespace UnityEngine_Quaternion
{
namespace Fields
{
constexpr auto x = 0x0; // System.Single
constexpr auto y = 0x4; // System.Single
constexpr auto z = 0x8; // System.Single
constexpr auto w = 0xc; // System.Single
}
namespace StaticFields
{
constexpr auto identityQuaternion = 0x0; // UnityEngine.Quaternion
constexpr auto kEpsilon = 0x0; // System.Single
}
namespace Methods
{
constexpr auto _ctor_System_Single_x__System_Single_y__System_Single_z__System_Single_w = 12898432; // System.Void .ctor(System.Single x, System.Single y, System.Single z, System.Single w)
constexpr auto SetLookRotation_UnityEngine_Vector3_view__UnityEngine_Vector3_up = 42340288; // System.Void SetLookRotation(UnityEngine.Vector3 view, UnityEngine.Vector3 up)
constexpr auto get_eulerAngles = 42341584; // UnityEngine.Vector3 get_eulerAngles()
constexpr auto GetHashCode = 20053664; // System.Int32 GetHashCode()
constexpr auto Equals_System_Object_other = 42337760; // System.Boolean Equals(System.Object other)
constexpr auto Equals_UnityEngine_Quaternion_other = 42291472; // System.Boolean Equals(UnityEngine.Quaternion other)
constexpr auto ToString = 42341504; // System.String ToString()
constexpr auto ToString_System_String_format__System_IFormatProvider_formatProvider = 42340864; // System.String ToString(System.String format, System.IFormatProvider formatProvider)
}
namespace StaticMethods
{
constexpr auto FromToRotation_UnityEngine_Vector3_fromDirection__UnityEngine_Vector3_toDirection = 42338400; // UnityEngine.Quaternion FromToRotation(UnityEngine.Vector3 fromDirection, UnityEngine.Vector3 toDirection)
constexpr auto Inverse_UnityEngine_Quaternion_rotation = 42339040; // UnityEngine.Quaternion Inverse(UnityEngine.Quaternion rotation)
constexpr auto Slerp_UnityEngine_Quaternion_a__UnityEngine_Quaternion_b__System_Single_t = 42340752; // UnityEngine.Quaternion Slerp(UnityEngine.Quaternion a, UnityEngine.Quaternion b, System.Single t)
constexpr auto SlerpUnclamped_UnityEngine_Quaternion_a__UnityEngine_Quaternion_b__System_Single_t = 42340528; // UnityEngine.Quaternion SlerpUnclamped(UnityEngine.Quaternion a, UnityEngine.Quaternion b, System.Single t)
constexpr auto Lerp_UnityEngine_Quaternion_a__UnityEngine_Quaternion_b__System_Single_t = 42339472; // UnityEngine.Quaternion Lerp(UnityEngine.Quaternion a, UnityEngine.Quaternion b, System.Single t)
constexpr auto LerpUnclamped_UnityEngine_Quaternion_a__UnityEngine_Quaternion_b__System_Single_t = 42339248; // UnityEngine.Quaternion LerpUnclamped(UnityEngine.Quaternion a, UnityEngine.Quaternion b, System.Single t)
constexpr auto Internal_FromEulerRad_UnityEngine_Vector3_euler = 42338576; // UnityEngine.Quaternion Internal_FromEulerRad(UnityEngine.Vector3 euler)
constexpr auto Internal_ToEulerRad_UnityEngine_Quaternion_rotation = 42338880; // UnityEngine.Vector3 Internal_ToEulerRad(UnityEngine.Quaternion rotation)
constexpr auto AngleAxis_System_Single_angle__UnityEngine_Vector3_axis = 42337600; // UnityEngine.Quaternion AngleAxis(System.Single angle, UnityEngine.Vector3 axis)
constexpr auto LookRotation_UnityEngine_Vector3_forward__UnityEngine_Vector3_upwards = 42339872; // UnityEngine.Quaternion LookRotation(UnityEngine.Vector3 forward, UnityEngine.Vector3 upwards)
constexpr auto LookRotation_UnityEngine_Vector3_forward = 42339680; // UnityEngine.Quaternion LookRotation(UnityEngine.Vector3 forward)
constexpr auto get_identity = 42341872; // UnityEngine.Quaternion get_identity()
constexpr auto op_Multiply_UnityEngine_Quaternion_lhs__UnityEngine_Quaternion_rhs = 3658272; // UnityEngine.Quaternion op_Multiply(UnityEngine.Quaternion lhs, UnityEngine.Quaternion rhs)
constexpr auto op_Multiply_UnityEngine_Quaternion_rotation__UnityEngine_Vector3_point = 42342144; // UnityEngine.Vector3 op_Multiply(UnityEngine.Quaternion rotation, UnityEngine.Vector3 point)
constexpr auto IsEqualUsingDot_System_Single_dot = 42339120; // System.Boolean IsEqualUsingDot(System.Single dot)
constexpr auto op_Equality_UnityEngine_Quaternion_lhs__UnityEngine_Quaternion_rhs = 42341952; // System.Boolean op_Equality(UnityEngine.Quaternion lhs, UnityEngine.Quaternion rhs)
constexpr auto op_Inequality_UnityEngine_Quaternion_lhs__UnityEngine_Quaternion_rhs = 42342048; // System.Boolean op_Inequality(UnityEngine.Quaternion lhs, UnityEngine.Quaternion rhs)
constexpr auto Dot_UnityEngine_Quaternion_a__UnityEngine_Quaternion_b = 42337696; // System.Single Dot(UnityEngine.Quaternion a, UnityEngine.Quaternion b)
constexpr auto Angle_UnityEngine_Quaternion_a__UnityEngine_Quaternion_b = 6480912; // System.Single Angle(UnityEngine.Quaternion a, UnityEngine.Quaternion b)
constexpr auto Internal_MakePositive_UnityEngine_Vector3_euler = 42338656; // UnityEngine.Vector3 Internal_MakePositive(UnityEngine.Vector3 euler)
constexpr auto Euler_System_Single_x__System_Single_y__System_Single_z = 42338160; // UnityEngine.Quaternion Euler(System.Single x, System.Single y, System.Single z)
constexpr auto Euler_UnityEngine_Vector3_euler = 42337984; // UnityEngine.Quaternion Euler(UnityEngine.Vector3 euler)
constexpr auto RotateTowards_UnityEngine_Quaternion_from__UnityEngine_Quaternion_to__System_Single_maxDegreesDelta = 42339968; // UnityEngine.Quaternion RotateTowards(UnityEngine.Quaternion from, UnityEngine.Quaternion to, System.Single maxDegreesDelta)
constexpr auto _cctor = 42341520; // System.Void .cctor()
constexpr auto FromToRotation_Injected_UnityEngine_Vector3_fromDirection__UnityEngine_Vector3_toDirection__out_UnityEngine_Quaternion_ret = 42338304; // System.Void FromToRotation_Injected(UnityEngine.Vector3 fromDirection, UnityEngine.Vector3 toDirection, out UnityEngine.Quaternion ret)
constexpr auto Inverse_Injected_UnityEngine_Quaternion_rotation__out_UnityEngine_Quaternion_ret = 42338960; // System.Void Inverse_Injected(UnityEngine.Quaternion rotation, out UnityEngine.Quaternion ret)
constexpr auto Slerp_Injected_UnityEngine_Quaternion_a__UnityEngine_Quaternion_b__System_Single_t__out_UnityEngine_Quaternion_ret = 42340640; // System.Void Slerp_Injected(UnityEngine.Quaternion a, UnityEngine.Quaternion b, System.Single t, out UnityEngine.Quaternion ret)
constexpr auto SlerpUnclamped_Injected_UnityEngine_Quaternion_a__UnityEngine_Quaternion_b__System_Single_t__out_UnityEngine_Quaternion_ret = 42340416; // System.Void SlerpUnclamped_Injected(UnityEngine.Quaternion a, UnityEngine.Quaternion b, System.Single t, out UnityEngine.Quaternion ret)
constexpr auto Lerp_Injected_UnityEngine_Quaternion_a__UnityEngine_Quaternion_b__System_Single_t__out_UnityEngine_Quaternion_ret = 42339360; // System.Void Lerp_Injected(UnityEngine.Quaternion a, UnityEngine.Quaternion b, System.Single t, out UnityEngine.Quaternion ret)
constexpr auto LerpUnclamped_Injected_UnityEngine_Quaternion_a__UnityEngine_Quaternion_b__System_Single_t__out_UnityEngine_Quaternion_ret = 42339136; // System.Void LerpUnclamped_Injected(UnityEngine.Quaternion a, UnityEngine.Quaternion b, System.Single t, out UnityEngine.Quaternion ret)
constexpr auto Internal_FromEulerRad_Injected_UnityEngine_Vector3_euler__out_UnityEngine_Quaternion_ret = 42338496; // System.Void Internal_FromEulerRad_Injected(UnityEngine.Vector3 euler, out UnityEngine.Quaternion ret)
constexpr auto Internal_ToEulerRad_Injected_UnityEngine_Quaternion_rotation__out_UnityEngine_Vector3_ret = 42338800; // System.Void Internal_ToEulerRad_Injected(UnityEngine.Quaternion rotation, out UnityEngine.Vector3 ret)
constexpr auto AngleAxis_Injected_System_Single_angle__UnityEngine_Vector3_axis__out_UnityEngine_Quaternion_ret = 42337504; // System.Void AngleAxis_Injected(System.Single angle, UnityEngine.Vector3 axis, out UnityEngine.Quaternion ret)
constexpr auto LookRotation_Injected_UnityEngine_Vector3_forward__UnityEngine_Vector3_upwards__out_UnityEngine_Quaternion_ret = 42339584; // System.Void LookRotation_Injected(UnityEngine.Vector3 forward, UnityEngine.Vector3 upwards, out UnityEngine.Quaternion ret)
}
}
namespace UnityEngine_Vector3
{
namespace Fields
{
constexpr auto x = 0x0; // System.Single
constexpr auto y = 0x4; // System.Single
constexpr auto z = 0x8; // System.Single
}
namespace StaticFields
{
constexpr auto kEpsilon = 0x0; // System.Single
constexpr auto kEpsilonNormalSqrt = 0x0; // System.Single
constexpr auto zeroVector = 0x0; // UnityEngine.Vector3
constexpr auto oneVector = 0xc; // UnityEngine.Vector3
constexpr auto upVector = 0x18; // UnityEngine.Vector3
constexpr auto downVector = 0x24; // UnityEngine.Vector3
constexpr auto leftVector = 0x30; // UnityEngine.Vector3
constexpr auto rightVector = 0x3c; // UnityEngine.Vector3
constexpr auto forwardVector = 0x48; // UnityEngine.Vector3
constexpr auto backVector = 0x54; // UnityEngine.Vector3
constexpr auto positiveInfinityVector = 0x60; // UnityEngine.Vector3
constexpr auto negativeInfinityVector = 0x6c; // UnityEngine.Vector3
}
namespace Methods
{
constexpr auto get_Item_System_Int32_index = 5919600; // System.Single get_Item(System.Int32 index)
constexpr auto set_Item_System_Int32_index__System_Single_value = 5919744; // System.Void set_Item(System.Int32 index, System.Single value)
constexpr auto _ctor_System_Single_x__System_Single_y__System_Single_z = 5684352; // System.Void .ctor(System.Single x, System.Single y, System.Single z)
constexpr auto _ctor_System_Single_x__System_Single_y = 42369008; // System.Void .ctor(System.Single x, System.Single y)
constexpr auto Set_System_Single_newX__System_Single_newY__System_Single_newZ = 5684352; // System.Void Set(System.Single newX, System.Single newY, System.Single newZ)
constexpr auto GetHashCode = 42364896; // System.Int32 GetHashCode()
constexpr auto Equals_System_Object_other = 42364704; // System.Boolean Equals(System.Object other)
constexpr auto Equals_UnityEngine_Vector3_other = 41576816; // System.Boolean Equals(UnityEngine.Vector3 other)
constexpr auto Normalize = 3976944; // System.Void Normalize()
constexpr auto get_normalized = 42369520; // UnityEngine.Vector3 get_normalized()
constexpr auto get_magnitude = 42369360; // System.Single get_magnitude()
constexpr auto get_sqrMagnitude = 42367920; // System.Single get_sqrMagnitude()
constexpr auto ToString = 42367968; // System.String ToString()
constexpr auto ToString_System_String_format__System_IFormatProvider_formatProvider = 42367984; // System.String ToString(System.String format, System.IFormatProvider formatProvider)
}
namespace StaticMethods
{
constexpr auto Slerp_UnityEngine_Vector3_a__UnityEngine_Vector3_b__System_Single_t = 42366720; // UnityEngine.Vector3 Slerp(UnityEngine.Vector3 a, UnityEngine.Vector3 b, System.Single t)
constexpr auto OrthoNormalize2_UnityEngine_Vector3_a__UnityEngine_Vector3_b = 42365744; // System.Void OrthoNormalize2(UnityEngine.Vector3 a, UnityEngine.Vector3 b)
constexpr auto OrthoNormalize_UnityEngine_Vector3_normal__UnityEngine_Vector3_tangent = 42365744; // System.Void OrthoNormalize(UnityEngine.Vector3 normal, UnityEngine.Vector3 tangent)
constexpr auto RotateTowards_UnityEngine_Vector3_current__UnityEngine_Vector3_target__System_Single_maxRadiansDelta__System_Single_maxMagnitudeDelta = 42366416; // UnityEngine.Vector3 RotateTowards(UnityEngine.Vector3 current, UnityEngine.Vector3 target, System.Single maxRadiansDelta, System.Single maxMagnitudeDelta)
constexpr auto Lerp_UnityEngine_Vector3_a__UnityEngine_Vector3_b__System_Single_t = 3658624; // UnityEngine.Vector3 Lerp(UnityEngine.Vector3 a, UnityEngine.Vector3 b, System.Single t)
constexpr auto LerpUnclamped_UnityEngine_Vector3_a__UnityEngine_Vector3_b__System_Single_t = 42364992; // UnityEngine.Vector3 LerpUnclamped(UnityEngine.Vector3 a, UnityEngine.Vector3 b, System.Single t)
constexpr auto MoveTowards_UnityEngine_Vector3_current__UnityEngine_Vector3_target__System_Single_maxDistanceDelta = 42365376; // UnityEngine.Vector3 MoveTowards(UnityEngine.Vector3 current, UnityEngine.Vector3 target, System.Single maxDistanceDelta)
constexpr auto SmoothDamp_UnityEngine_Vector3_current__UnityEngine_Vector3_target__UnityEngine_Vector3_currentVelocity__System_Single_smoothTime = 42367728; // UnityEngine.Vector3 SmoothDamp(UnityEngine.Vector3 current, UnityEngine.Vector3 target, UnityEngine.Vector3 currentVelocity, System.Single smoothTime)
constexpr auto SmoothDamp_UnityEngine_Vector3_current__UnityEngine_Vector3_target__UnityEngine_Vector3_currentVelocity__System_Single_smoothTime__System_Single_maxSpeed__System_Single_deltaTime = 42366832; // UnityEngine.Vector3 SmoothDamp(UnityEngine.Vector3 current, UnityEngine.Vector3 target, UnityEngine.Vector3 currentVelocity, System.Single smoothTime, System.Single maxSpeed, System.Single deltaTime)
constexpr auto Scale_UnityEngine_Vector3_a__UnityEngine_Vector3_b = 42366544; // UnityEngine.Vector3 Scale(UnityEngine.Vector3 a, UnityEngine.Vector3 b)
constexpr auto Cross_UnityEngine_Vector3_lhs__UnityEngine_Vector3_rhs = 42364352; // UnityEngine.Vector3 Cross(UnityEngine.Vector3 lhs, UnityEngine.Vector3 rhs)
constexpr auto Reflect_UnityEngine_Vector3_inDirection__UnityEngine_Vector3_inNormal = 42366160; // UnityEngine.Vector3 Reflect(UnityEngine.Vector3 inDirection, UnityEngine.Vector3 inNormal)
constexpr auto Normalize_UnityEngine_Vector3_value = 3658912; // UnityEngine.Vector3 Normalize(UnityEngine.Vector3 value)
constexpr auto Dot_UnityEngine_Vector3_lhs__UnityEngine_Vector3_rhs = 42364656; // System.Single Dot(UnityEngine.Vector3 lhs, UnityEngine.Vector3 rhs)
constexpr auto Project_UnityEngine_Vector3_vector__UnityEngine_Vector3_onNormal = 42365824; // UnityEngine.Vector3 Project(UnityEngine.Vector3 vector, UnityEngine.Vector3 onNormal)
constexpr auto Angle_UnityEngine_Vector3_from__UnityEngine_Vector3_to = 42363984; // System.Single Angle(UnityEngine.Vector3 from, UnityEngine.Vector3 to)
constexpr auto SignedAngle_UnityEngine_Vector3_from__UnityEngine_Vector3_to__UnityEngine_Vector3_axis = 6678672; // System.Single SignedAngle(UnityEngine.Vector3 from, UnityEngine.Vector3 to, UnityEngine.Vector3 axis)
constexpr auto Distance_UnityEngine_Vector3_a__UnityEngine_Vector3_b = 42364480; // System.Single Distance(UnityEngine.Vector3 a, UnityEngine.Vector3 b)
constexpr auto Magnitude_UnityEngine_Vector3_vector = 42365088; // System.Single Magnitude(UnityEngine.Vector3 vector)
constexpr auto SqrMagnitude_UnityEngine_Vector3_vector = 42367920; // System.Single SqrMagnitude(UnityEngine.Vector3 vector)
constexpr auto Min_UnityEngine_Vector3_lhs__UnityEngine_Vector3_rhs = 42365312; // UnityEngine.Vector3 Min(UnityEngine.Vector3 lhs, UnityEngine.Vector3 rhs)
constexpr auto Max_UnityEngine_Vector3_lhs__UnityEngine_Vector3_rhs = 42365248; // UnityEngine.Vector3 Max(UnityEngine.Vector3 lhs, UnityEngine.Vector3 rhs)
constexpr auto get_zero = 42369920; // UnityEngine.Vector3 get_zero()
constexpr auto get_one = 42369600; // UnityEngine.Vector3 get_one()
constexpr auto get_forward = 42369200; // UnityEngine.Vector3 get_forward()
constexpr auto get_back = 42369040; // UnityEngine.Vector3 get_back()
constexpr auto get_up = 42369840; // UnityEngine.Vector3 get_up()
constexpr auto get_down = 42369120; // UnityEngine.Vector3 get_down()
constexpr auto get_left = 42369280; // UnityEngine.Vector3 get_left()
constexpr auto get_right = 42369760; // UnityEngine.Vector3 get_right()
constexpr auto get_positiveInfinity = 42369680; // UnityEngine.Vector3 get_positiveInfinity()
constexpr auto op_Addition_UnityEngine_Vector3_a__UnityEngine_Vector3_b = 3659888; // UnityEngine.Vector3 op_Addition(UnityEngine.Vector3 a, UnityEngine.Vector3 b)
constexpr auto op_Subtraction_UnityEngine_Vector3_a__UnityEngine_Vector3_b = 3753184; // UnityEngine.Vector3 op_Subtraction(UnityEngine.Vector3 a, UnityEngine.Vector3 b)
constexpr auto op_UnaryNegation_UnityEngine_Vector3_a = 3660080; // UnityEngine.Vector3 op_UnaryNegation(UnityEngine.Vector3 a)
constexpr auto op_Multiply_UnityEngine_Vector3_a__System_Single_d = 3660016; // UnityEngine.Vector3 op_Multiply(UnityEngine.Vector3 a, System.Single d)
constexpr auto op_Multiply_System_Single_d__UnityEngine_Vector3_a = 3753120; // UnityEngine.Vector3 op_Multiply(System.Single d, UnityEngine.Vector3 a)
constexpr auto op_Division_UnityEngine_Vector3_a__System_Single_d = 3659952; // UnityEngine.Vector3 op_Division(UnityEngine.Vector3 a, System.Single d)
constexpr auto op_Equality_UnityEngine_Vector3_lhs__UnityEngine_Vector3_rhs = 3752944; // System.Boolean op_Equality(UnityEngine.Vector3 lhs, UnityEngine.Vector3 rhs)
constexpr auto op_Inequality_UnityEngine_Vector3_lhs__UnityEngine_Vector3_rhs = 3753008; // System.Boolean op_Inequality(UnityEngine.Vector3 lhs, UnityEngine.Vector3 rhs)
constexpr auto _cctor = 42368528; // System.Void .cctor()
constexpr auto Slerp_Injected_UnityEngine_Vector3_a__UnityEngine_Vector3_b__System_Single_t__out_UnityEngine_Vector3_ret = 42366608; // System.Void Slerp_Injected(UnityEngine.Vector3 a, UnityEngine.Vector3 b, System.Single t, out UnityEngine.Vector3 ret)
constexpr auto RotateTowards_Injected_UnityEngine_Vector3_current__UnityEngine_Vector3_target__System_Single_maxRadiansDelta__System_Single_maxMagnitudeDelta__out_UnityEngine_Vector3_ret = 42366304; // System.Void RotateTowards_Injected(UnityEngine.Vector3 current, UnityEngine.Vector3 target, System.Single maxRadiansDelta, System.Single maxMagnitudeDelta, out UnityEngine.Vector3 ret)
}
}
namespace UnityEngine_Matrix4x4
{
namespace Fields
{
constexpr auto m00 = 0x0; // System.Single
constexpr auto m10 = 0x4; // System.Single
constexpr auto m20 = 0x8; // System.Single
constexpr auto m30 = 0xc; // System.Single
constexpr auto m01 = 0x10; // System.Single
constexpr auto m11 = 0x14; // System.Single
constexpr auto m21 = 0x18; // System.Single
constexpr auto m31 = 0x1c; // System.Single
constexpr auto m02 = 0x20; // System.Single
constexpr auto m12 = 0x24; // System.Single
constexpr auto m22 = 0x28; // System.Single
constexpr auto m32 = 0x2c; // System.Single
constexpr auto m03 = 0x30; // System.Single
constexpr auto m13 = 0x34; // System.Single
constexpr auto m23 = 0x38; // System.Single
constexpr auto m33 = 0x3c; // System.Single
}
namespace StaticFields
{
constexpr auto zeroMatrix = 0x0; // UnityEngine.Matrix4x4
constexpr auto identityMatrix = 0x40; // UnityEngine.Matrix4x4
}
namespace Methods
{
constexpr auto GetRotation = 42314560; // UnityEngine.Quaternion GetRotation()
constexpr auto GetLossyScale = 42314400; // UnityEngine.Vector3 GetLossyScale()
constexpr auto DecomposeProjection = 42312608; // UnityEngine.FrustumPlanes DecomposeProjection()
constexpr auto get_rotation = 42320432; // UnityEngine.Quaternion get_rotation()
constexpr auto get_lossyScale = 42320320; // UnityEngine.Vector3 get_lossyScale()
constexpr auto get_decomposeProjection = 42319936; // UnityEngine.FrustumPlanes get_decomposeProjection()
constexpr auto SetTRS_UnityEngine_Vector3_pos__UnityEngine_Quaternion_q__UnityEngine_Vector3_s = 42316640; // System.Void SetTRS(UnityEngine.Vector3 pos, UnityEngine.Quaternion q, UnityEngine.Vector3 s)
constexpr auto get_inverse = 42320144; // UnityEngine.Matrix4x4 get_inverse()
constexpr auto get_transpose = 42320528; // UnityEngine.Matrix4x4 get_transpose()
constexpr auto _ctor_UnityEngine_Vector4_column0__UnityEngine_Vector4_column1__UnityEngine_Vector4_column2__UnityEngine_Vector4_column3 = 42319456; // System.Void .ctor(UnityEngine.Vector4 column0, UnityEngine.Vector4 column1, UnityEngine.Vector4 column2, UnityEngine.Vector4 column3)
constexpr auto get_Item_System_Int32_row__System_Int32_column = 42319920; // System.Single get_Item(System.Int32 row, System.Int32 column)
constexpr auto set_Item_System_Int32_row__System_Int32_column__System_Single_value = 42323296; // System.Void set_Item(System.Int32 row, System.Int32 column, System.Single value)
constexpr auto get_Item_System_Int32_index = 42319568; // System.Single get_Item(System.Int32 index)
constexpr auto set_Item_System_Int32_index__System_Single_value = 42322944; // System.Void set_Item(System.Int32 index, System.Single value)
constexpr auto GetHashCode = 42313904; // System.Int32 GetHashCode()
constexpr auto Equals_System_Object_other = 42312704; // System.Boolean Equals(System.Object other)
constexpr auto Equals_UnityEngine_Matrix4x4_other = 42312880; // System.Boolean Equals(UnityEngine.Matrix4x4 other)
constexpr auto GetColumn_System_Int32_index = 42313696; // UnityEngine.Vector4 GetColumn(System.Int32 index)
constexpr auto GetRow_System_Int32_index = 42314640; // UnityEngine.Vector4 GetRow(System.Int32 index)
constexpr auto SetColumn_System_Int32_index__UnityEngine_Vector4_column = 42316400; // System.Void SetColumn(System.Int32 index, UnityEngine.Vector4 column)
constexpr auto SetRow_System_Int32_index__UnityEngine_Vector4_row = 42316528; // System.Void SetRow(System.Int32 index, UnityEngine.Vector4 row)
constexpr auto MultiplyPoint_UnityEngine_Vector3_point = 42315248; // UnityEngine.Vector3 MultiplyPoint(UnityEngine.Vector3 point)
constexpr auto MultiplyPoint3x4_UnityEngine_Vector3_point = 42315072; // UnityEngine.Vector3 MultiplyPoint3x4(UnityEngine.Vector3 point)
constexpr auto MultiplyVector_UnityEngine_Vector3_vector = 42315488; // UnityEngine.Vector3 MultiplyVector(UnityEngine.Vector3 vector)
constexpr auto ToString = 42317072; // System.String ToString()
constexpr auto ToString_System_String_format__System_IFormatProvider_formatProvider = 42317088; // System.String ToString(System.String format, System.IFormatProvider formatProvider)
}
namespace StaticMethods
{
constexpr auto TRS_UnityEngine_Vector3_pos__UnityEngine_Quaternion_q__UnityEngine_Vector3_s = 42316944; // UnityEngine.Matrix4x4 TRS(UnityEngine.Vector3 pos, UnityEngine.Quaternion q, UnityEngine.Vector3 s)
constexpr auto Inverse_UnityEngine_Matrix4x4_m = 42314976; // UnityEngine.Matrix4x4 Inverse(UnityEngine.Matrix4x4 m)
constexpr auto Transpose_UnityEngine_Matrix4x4_m = 42319072; // UnityEngine.Matrix4x4 Transpose(UnityEngine.Matrix4x4 m)
constexpr auto Ortho_System_Single_left__System_Single_right__System_Single_bottom__System_Single_top__System_Single_zNear__System_Single_zFar = 42315776; // UnityEngine.Matrix4x4 Ortho(System.Single left, System.Single right, System.Single bottom, System.Single top, System.Single zNear, System.Single zFar)
constexpr auto Perspective_System_Single_fov__System_Single_aspect__System_Single_zNear__System_Single_zFar = 42316080; // UnityEngine.Matrix4x4 Perspective(System.Single fov, System.Single aspect, System.Single zNear, System.Single zFar)
constexpr auto Frustum_System_Single_left__System_Single_right__System_Single_bottom__System_Single_top__System_Single_zNear__System_Single_zFar = 42313520; // UnityEngine.Matrix4x4 Frustum(System.Single left, System.Single right, System.Single bottom, System.Single top, System.Single zNear, System.Single zFar)
constexpr auto Frustum_UnityEngine_FrustumPlanes_fp = 42313280; // UnityEngine.Matrix4x4 Frustum(UnityEngine.FrustumPlanes fp)
constexpr auto op_Multiply_UnityEngine_Matrix4x4_lhs__UnityEngine_Matrix4x4_rhs = 42321600; // UnityEngine.Matrix4x4 op_Multiply(UnityEngine.Matrix4x4 lhs, UnityEngine.Matrix4x4 rhs)
constexpr auto op_Multiply_UnityEngine_Matrix4x4_lhs__UnityEngine_Vector4_vector = 42321232; // UnityEngine.Vector4 op_Multiply(UnityEngine.Matrix4x4 lhs, UnityEngine.Vector4 vector)
constexpr auto op_Equality_UnityEngine_Matrix4x4_lhs__UnityEngine_Matrix4x4_rhs = 42320800; // System.Boolean op_Equality(UnityEngine.Matrix4x4 lhs, UnityEngine.Matrix4x4 rhs)
constexpr auto op_Inequality_UnityEngine_Matrix4x4_lhs__UnityEngine_Matrix4x4_rhs = 42321120; // System.Boolean op_Inequality(UnityEngine.Matrix4x4 lhs, UnityEngine.Matrix4x4 rhs)
constexpr auto Scale_UnityEngine_Vector3_vector = 42316224; // UnityEngine.Matrix4x4 Scale(UnityEngine.Vector3 vector)
constexpr auto Translate_UnityEngine_Vector3_vector = 42318832; // UnityEngine.Matrix4x4 Translate(UnityEngine.Vector3 vector)
constexpr auto get_zero = 42320704; // UnityEngine.Matrix4x4 get_zero()
constexpr auto get_identity = 42320048; // UnityEngine.Matrix4x4 get_identity()
constexpr auto _cctor = 42319168; // System.Void .cctor()
constexpr auto GetRotation_Injected_UnityEngine_Matrix4x4__unity_self__out_UnityEngine_Quaternion_ret = 42314480; // System.Void GetRotation_Injected(UnityEngine.Matrix4x4 _unity_self, out UnityEngine.Quaternion ret)
constexpr auto GetLossyScale_Injected_UnityEngine_Matrix4x4__unity_self__out_UnityEngine_Vector3_ret = 42314320; // System.Void GetLossyScale_Injected(UnityEngine.Matrix4x4 _unity_self, out UnityEngine.Vector3 ret)
constexpr auto DecomposeProjection_Injected_UnityEngine_Matrix4x4__unity_self__out_UnityEngine_FrustumPlanes_ret = 42312528; // System.Void DecomposeProjection_Injected(UnityEngine.Matrix4x4 _unity_self, out UnityEngine.FrustumPlanes ret)
constexpr auto TRS_Injected_UnityEngine_Vector3_pos__UnityEngine_Quaternion_q__UnityEngine_Vector3_s__out_UnityEngine_Matrix4x4_ret = 42316832; // System.Void TRS_Injected(UnityEngine.Vector3 pos, UnityEngine.Quaternion q, UnityEngine.Vector3 s, out UnityEngine.Matrix4x4 ret)
constexpr auto Inverse_Injected_UnityEngine_Matrix4x4_m__out_UnityEngine_Matrix4x4_ret = 42314896; // System.Void Inverse_Injected(UnityEngine.Matrix4x4 m, out UnityEngine.Matrix4x4 ret)
constexpr auto Transpose_Injected_UnityEngine_Matrix4x4_m__out_UnityEngine_Matrix4x4_ret = 42318992; // System.Void Transpose_Injected(UnityEngine.Matrix4x4 m, out UnityEngine.Matrix4x4 ret)
constexpr auto Ortho_Injected_System_Single_left__System_Single_right__System_Single_bottom__System_Single_top__System_Single_zNear__System_Single_zFar__out_UnityEngine_Matrix4x4_ret = 42315648; // System.Void Ortho_Injected(System.Single left, System.Single right, System.Single bottom, System.Single top, System.Single zNear, System.Single zFar, out UnityEngine.Matrix4x4 ret)
constexpr auto Perspective_Injected_System_Single_fov__System_Single_aspect__System_Single_zNear__System_Single_zFar__out_UnityEngine_Matrix4x4_ret = 42315952; // System.Void Perspective_Injected(System.Single fov, System.Single aspect, System.Single zNear, System.Single zFar, out UnityEngine.Matrix4x4 ret)
constexpr auto Frustum_Injected_System_Single_left__System_Single_right__System_Single_bottom__System_Single_top__System_Single_zNear__System_Single_zFar__out_UnityEngine_Matrix4x4_ret = 42313152; // System.Void Frustum_Injected(System.Single left, System.Single right, System.Single bottom, System.Single top, System.Single zNear, System.Single zFar, out UnityEngine.Matrix4x4 ret)
}
}
namespace UnityEngine_Gradient
{
namespace Fields
{
constexpr auto m_Ptr = 0x10; // System.IntPtr
}
namespace Methods
{
constexpr auto Cleanup = 42302048; // System.Void Cleanup()
constexpr auto Internal_Equals_System_IntPtr_other = 42303024; // System.Boolean Internal_Equals(System.IntPtr other)
constexpr auto _ctor = 42303200; // System.Void .ctor()
constexpr auto Finalize = 42302848; // System.Void Finalize()
constexpr auto Evaluate_System_Single_time = 42302752; // UnityEngine.Color Evaluate(System.Single time)
constexpr auto get_colorKeys = 42303328; // UnityEngine.GradientColorKey[] get_colorKeys()
constexpr auto get_alphaKeys = 42303264; // UnityEngine.GradientAlphaKey[] get_alphaKeys()
constexpr auto SetKeys_UnityEngine_GradientColorKey___colorKeys__UnityEngine_GradientAlphaKey___alphaKeys = 42303104; // System.Void SetKeys(UnityEngine.GradientColorKey[] colorKeys, UnityEngine.GradientAlphaKey[] alphaKeys)
constexpr auto Equals_System_Object_o = 42302112; // System.Boolean Equals(System.Object o)
constexpr auto Equals_UnityEngine_Gradient_other = 42302464; // System.Boolean Equals(UnityEngine.Gradient other)
constexpr auto GetHashCode = 42122096; // System.Int32 GetHashCode()
constexpr auto Evaluate_Injected_System_Single_time__out_UnityEngine_Color_ret = 42302656; // System.Void Evaluate_Injected(System.Single time, out UnityEngine.Color ret)
}
namespace StaticMethods
{
constexpr auto Init = 42302976; // System.IntPtr Init()
}
}
namespace UnityEngine_RenderTexture
{
namespace Methods
{
constexpr auto get_width = 42256224; // System.Int32 get_width()
constexpr auto set_width_System_Int32_value = 42256848; // System.Void set_width(System.Int32 value)
constexpr auto get_height = 42256032; // System.Int32 get_height()
constexpr auto set_height_System_Int32_value = 42256640; // System.Void set_height(System.Int32 value)
constexpr auto get_dimension = 42255600; // UnityEngine.Rendering.TextureDimension get_dimension()
constexpr auto set_dimension_UnityEngine_Rendering_TextureDimension_value = 42256432; // System.Void set_dimension(UnityEngine.Rendering.TextureDimension value)
constexpr auto get_graphicsFormat = 42255968; // UnityEngine.Experimental.Rendering.GraphicsFormat get_graphicsFormat()
constexpr auto set_graphicsFormat_UnityEngine_Experimental_Rendering_GraphicsFormat_value = 42256576; // System.Void set_graphicsFormat(UnityEngine.Experimental.Rendering.GraphicsFormat value)
constexpr auto set_useMipMap_System_Boolean_value = 42256704; // System.Void set_useMipMap(System.Boolean value)
constexpr auto get_sRGB = 42256096; // System.Boolean get_sRGB()
constexpr auto get_format = 42255728; // UnityEngine.RenderTextureFormat get_format()
constexpr auto set_depthStencilFormat_UnityEngine_Experimental_Rendering_GraphicsFormat_value = 42256368; // System.Void set_depthStencilFormat(UnityEngine.Experimental.Rendering.GraphicsFormat value)
constexpr auto set_autoGenerateMips_System_Boolean_value = 42256288; // System.Void set_autoGenerateMips(System.Boolean value)
constexpr auto get_volumeDepth = 42256160; // System.Int32 get_volumeDepth()
constexpr auto set_volumeDepth_System_Int32_value = 42256784; // System.Void set_volumeDepth(System.Int32 value)
constexpr auto get_enableRandomWrite = 42255664; // System.Boolean get_enableRandomWrite()
constexpr auto set_enableRandomWrite_System_Boolean_value = 42256496; // System.Void set_enableRandomWrite(System.Boolean value)
constexpr auto set_isPowerOfTwo_System_Boolean_value = 3694560; // System.Void set_isPowerOfTwo(System.Boolean value)
constexpr auto GetColorBuffer = 42246992; // UnityEngine.RenderBuffer GetColorBuffer()
constexpr auto GetDepthBuffer = 42247456; // UnityEngine.RenderBuffer GetDepthBuffer()
constexpr auto SetMipMapCount_System_Int32_count = 42249728; // System.Void SetMipMapCount(System.Int32 count)
constexpr auto get_colorBuffer = 42255200; // UnityEngine.RenderBuffer get_colorBuffer()
constexpr auto get_depthBuffer = 42255296; // UnityEngine.RenderBuffer get_depthBuffer()
constexpr auto DiscardContents_System_Boolean_discardColor__System_Boolean_discardDepth = 42246768; // System.Void DiscardContents(System.Boolean discardColor, System.Boolean discardDepth)
constexpr auto MarkRestoreExpected = 42249472; // System.Void MarkRestoreExpected()
constexpr auto DiscardContents = 42246704; // System.Void DiscardContents()
constexpr auto Create = 42246640; // System.Boolean Create()
constexpr auto Release = 42249600; // System.Void Release()
constexpr auto IsCreated = 42249408; // System.Boolean IsCreated()
constexpr auto SetSRGBReadWrite_System_Boolean_srgb = 42249952; // System.Void SetSRGBReadWrite(System.Boolean srgb)
constexpr auto SetRenderTextureDescriptor_UnityEngine_RenderTextureDescriptor_desc = 42249872; // System.Void SetRenderTextureDescriptor(UnityEngine.RenderTextureDescriptor desc)
constexpr auto GetDescriptor = 42247744; // UnityEngine.RenderTextureDescriptor GetDescriptor()
constexpr auto get_depth = 42255392; // System.Int32 get_depth()
constexpr auto _ctor = 42254128; // System.Void .ctor()
constexpr auto _ctor_UnityEngine_RenderTextureDescriptor_desc = 42252304; // System.Void .ctor(UnityEngine.RenderTextureDescriptor desc)
constexpr auto _ctor_UnityEngine_RenderTexture_textureToCopy = 42254624; // System.Void .ctor(UnityEngine.RenderTexture textureToCopy)
constexpr auto _ctor_System_Int32_width__System_Int32_height__System_Int32_depth__UnityEngine_Experimental_Rendering_DefaultFormat_format = 42253936; // System.Void .ctor(System.Int32 width, System.Int32 height, System.Int32 depth, UnityEngine.Experimental.Rendering.DefaultFormat format)
constexpr auto _ctor_System_Int32_width__System_Int32_height__System_Int32_depth__UnityEngine_Experimental_Rendering_GraphicsFormat_format = 42251632; // System.Void .ctor(System.Int32 width, System.Int32 height, System.Int32 depth, UnityEngine.Experimental.Rendering.GraphicsFormat format)
constexpr auto _ctor_System_Int32_width__System_Int32_height__System_Int32_depth__UnityEngine_Experimental_Rendering_GraphicsFormat_format__System_Int32_mipCount = 42253184; // System.Void .ctor(System.Int32 width, System.Int32 height, System.Int32 depth, UnityEngine.Experimental.Rendering.GraphicsFormat format, System.Int32 mipCount)
constexpr auto _ctor_System_Int32_width__System_Int32_height__UnityEngine_Experimental_Rendering_GraphicsFormat_colorFormat__UnityEngine_Experimental_Rendering_GraphicsFormat_depthStencilFormat__System_Int32_mipCount = 42251792; // System.Void .ctor(System.Int32 width, System.Int32 height, UnityEngine.Experimental.Rendering.GraphicsFormat colorFormat, UnityEngine.Experimental.Rendering.GraphicsFormat depthStencilFormat, System.Int32 mipCount)
constexpr auto _ctor_System_Int32_width__System_Int32_height__UnityEngine_Experimental_Rendering_GraphicsFormat_colorFormat__UnityEngine_Experimental_Rendering_GraphicsFormat_depthStencilFormat = 42254464; // System.Void .ctor(System.Int32 width, System.Int32 height, UnityEngine.Experimental.Rendering.GraphicsFormat colorFormat, UnityEngine.Experimental.Rendering.GraphicsFormat depthStencilFormat)
constexpr auto _ctor_System_Int32_width__System_Int32_height__System_Int32_depth__UnityEngine_RenderTextureFormat_format__UnityEngine_RenderTextureReadWrite_readWrite = 42253712; // System.Void .ctor(System.Int32 width, System.Int32 height, System.Int32 depth, UnityEngine.RenderTextureFormat format, UnityEngine.RenderTextureReadWrite readWrite)
constexpr auto _ctor_System_Int32_width__System_Int32_height__System_Int32_depth__UnityEngine_RenderTextureFormat_format = 42252896; // System.Void .ctor(System.Int32 width, System.Int32 height, System.Int32 depth, UnityEngine.RenderTextureFormat format)
constexpr auto _ctor_System_Int32_width__System_Int32_height__System_Int32_depth = 42252608; // System.Void .ctor(System.Int32 width, System.Int32 height, System.Int32 depth)
constexpr auto _ctor_System_Int32_width__System_Int32_height__System_Int32_depth__UnityEngine_RenderTextureFormat_format__System_Int32_mipCount = 42254256; // System.Void .ctor(System.Int32 width, System.Int32 height, System.Int32 depth, UnityEngine.RenderTextureFormat format, System.Int32 mipCount)
constexpr auto Initialize_System_Int32_width__System_Int32_height__System_Int32_depth__UnityEngine_RenderTextureFormat_format__UnityEngine_RenderTextureReadWrite_readWrite__System_Int32_mipCount = 42248912; // System.Void Initialize(System.Int32 width, System.Int32 height, System.Int32 depth, UnityEngine.RenderTextureFormat format, UnityEngine.RenderTextureReadWrite readWrite, System.Int32 mipCount)
constexpr auto get_descriptor = 42255456; // UnityEngine.RenderTextureDescriptor get_descriptor()
constexpr auto GetColorBuffer_Injected_out_UnityEngine_RenderBuffer_ret = 42246912; // System.Void GetColorBuffer_Injected(out UnityEngine.RenderBuffer ret)
constexpr auto GetDepthBuffer_Injected_out_UnityEngine_RenderBuffer_ret = 42247376; // System.Void GetDepthBuffer_Injected(out UnityEngine.RenderBuffer ret)
constexpr auto SetRenderTextureDescriptor_Injected_UnityEngine_RenderTextureDescriptor_desc = 42249792; // System.Void SetRenderTextureDescriptor_Injected(UnityEngine.RenderTextureDescriptor desc)
constexpr auto GetDescriptor_Injected_out_UnityEngine_RenderTextureDescriptor_ret = 42247664; // System.Void GetDescriptor_Injected(out UnityEngine.RenderTextureDescriptor ret)
}
namespace StaticMethods
{
constexpr auto GetActive = 42246864; // UnityEngine.RenderTexture GetActive()
constexpr auto SetActive_UnityEngine_RenderTexture_rt = 42249664; // System.Void SetActive(UnityEngine.RenderTexture rt)
constexpr auto get_active = 42246864; // UnityEngine.RenderTexture get_active()
constexpr auto set_active_UnityEngine_RenderTexture_value = 42249664; // System.Void set_active(UnityEngine.RenderTexture value)
constexpr auto Internal_Create_UnityEngine_RenderTexture_rt = 42249344; // System.Void Internal_Create(UnityEngine.RenderTexture rt)
constexpr auto GetTemporary_Internal_UnityEngine_RenderTextureDescriptor_desc = 42248208; // UnityEngine.RenderTexture GetTemporary_Internal(UnityEngine.RenderTextureDescriptor desc)
constexpr auto ReleaseTemporary_UnityEngine_RenderTexture_temp = 42249536; // System.Void ReleaseTemporary(UnityEngine.RenderTexture temp)
constexpr auto GetDepthStencilFormatLegacy_System_Int32_depthBits__UnityEngine_Experimental_Rendering_GraphicsFormat_colorFormat = 42247536; // UnityEngine.Experimental.Rendering.GraphicsFormat GetDepthStencilFormatLegacy(System.Int32 depthBits, UnityEngine.Experimental.Rendering.GraphicsFormat colorFormat)
constexpr auto ValidateRenderTextureDesc_UnityEngine_RenderTextureDescriptor_desc = 42250032; // System.Void ValidateRenderTextureDesc(UnityEngine.RenderTextureDescriptor desc)
constexpr auto GetCompatibleFormat_UnityEngine_RenderTextureFormat_renderTextureFormat__UnityEngine_RenderTextureReadWrite_readWrite = 42247072; // UnityEngine.Experimental.Rendering.GraphicsFormat GetCompatibleFormat(UnityEngine.RenderTextureFormat renderTextureFormat, UnityEngine.RenderTextureReadWrite readWrite)
constexpr auto GetTemporary_UnityEngine_RenderTextureDescriptor_desc = 42248672; // UnityEngine.RenderTexture GetTemporary(UnityEngine.RenderTextureDescriptor desc)
constexpr auto GetTemporaryImpl_System_Int32_width__System_Int32_height__System_Int32_depthBuffer__UnityEngine_Experimental_Rendering_GraphicsFormat_colorFormat__System_Int32_antiAliasing___1__UnityEngine_RenderTextureMemoryless_memorylessMode___0__UnityEngine_VRTextureUsage_vrUsage___0__System_Boolean_useDynamicScale___False = 42247840; // UnityEngine.RenderTexture GetTemporaryImpl(System.Int32 width, System.Int32 height, System.Int32 depthBuffer, UnityEngine.Experimental.Rendering.GraphicsFormat colorFormat, System.Int32 antiAliasing = 1, UnityEngine.RenderTextureMemoryless memorylessMode = 0, UnityEngine.VRTextureUsage vrUsage = 0, System.Boolean useDynamicScale = False)
constexpr auto GetTemporary_System_Int32_width__System_Int32_height__System_Int32_depthBuffer__UnityEngine_RenderTextureFormat_format__UnityEngine_RenderTextureReadWrite_readWrite__System_Int32_antiAliasing__UnityEngine_RenderTextureMemoryless_memorylessMode = 42248368; // UnityEngine.RenderTexture GetTemporary(System.Int32 width, System.Int32 height, System.Int32 depthBuffer, UnityEngine.RenderTextureFormat format, UnityEngine.RenderTextureReadWrite readWrite, System.Int32 antiAliasing, UnityEngine.RenderTextureMemoryless memorylessMode)
constexpr auto GetTemporary_System_Int32_width__System_Int32_height__System_Int32_depthBuffer__UnityEngine_RenderTextureFormat_format__UnityEngine_RenderTextureReadWrite_readWrite = 42248560; // UnityEngine.RenderTexture GetTemporary(System.Int32 width, System.Int32 height, System.Int32 depthBuffer, UnityEngine.RenderTextureFormat format, UnityEngine.RenderTextureReadWrite readWrite)
constexpr auto GetTemporary_System_Int32_width__System_Int32_height__System_Int32_depthBuffer__UnityEngine_RenderTextureFormat_format = 42248816; // UnityEngine.RenderTexture GetTemporary(System.Int32 width, System.Int32 height, System.Int32 depthBuffer, UnityEngine.RenderTextureFormat format)
constexpr auto GetTemporary_System_Int32_width__System_Int32_height__System_Int32_depthBuffer = 42248272; // UnityEngine.RenderTexture GetTemporary(System.Int32 width, System.Int32 height, System.Int32 depthBuffer)
constexpr auto GetTemporary_System_Int32_width__System_Int32_height = 42248480; // UnityEngine.RenderTexture GetTemporary(System.Int32 width, System.Int32 height)
constexpr auto GetTemporary_Internal_Injected_UnityEngine_RenderTextureDescriptor_desc = 42248144; // UnityEngine.RenderTexture GetTemporary_Internal_Injected(UnityEngine.RenderTextureDescriptor desc)
}
}
namespace UnityEngine_Texture2D
{
namespace StaticFields
{
constexpr auto streamingMipmapsPriorityMin = 0x0; // System.Int32
constexpr auto streamingMipmapsPriorityMax = 0x0; // System.Int32
}
namespace Methods
{
constexpr auto get_format = 42277200; // UnityEngine.TextureFormat get_format()
constexpr auto Compress_System_Boolean_highQuality = 42269664; // System.Void Compress(System.Boolean highQuality)
constexpr auto get_isReadable = 42277264; // System.Boolean get_isReadable()
constexpr auto ApplyImpl_System_Boolean_updateMipmaps__System_Boolean_makeNoLongerReadable = 42269248; // System.Void ApplyImpl(System.Boolean updateMipmaps, System.Boolean makeNoLongerReadable)
constexpr auto ReinitializeImpl_System_Int32_width__System_Int32_height = 42272768; // System.Boolean ReinitializeImpl(System.Int32 width, System.Int32 height)
constexpr auto SetPixelImpl_System_Int32_image__System_Int32_mip__System_Int32_x__System_Int32_y__UnityEngine_Color_color = 42273744; // System.Void SetPixelImpl(System.Int32 image, System.Int32 mip, System.Int32 x, System.Int32 y, UnityEngine.Color color)
constexpr auto GetPixelImpl_System_Int32_image__System_Int32_mip__System_Int32_x__System_Int32_y = 42270272; // UnityEngine.Color GetPixelImpl(System.Int32 image, System.Int32 mip, System.Int32 x, System.Int32 y)
constexpr auto GetPixelBilinearImpl_System_Int32_image__System_Int32_mip__System_Single_u__System_Single_v = 42269840; // UnityEngine.Color GetPixelBilinearImpl(System.Int32 image, System.Int32 mip, System.Single u, System.Single v)
constexpr auto ReinitializeWithFormatImpl_System_Int32_width__System_Int32_height__UnityEngine_Experimental_Rendering_GraphicsFormat_format__System_Boolean_hasMipMap = 42272848; // System.Boolean ReinitializeWithFormatImpl(System.Int32 width, System.Int32 height, UnityEngine.Experimental.Rendering.GraphicsFormat format, System.Boolean hasMipMap)
constexpr auto ReadPixelsImpl_UnityEngine_Rect_source__System_Int32_destX__System_Int32_destY__System_Boolean_recalculateMipMaps = 42272272; // System.Void ReadPixelsImpl(UnityEngine.Rect source, System.Int32 destX, System.Int32 destY, System.Boolean recalculateMipMaps)
constexpr auto SetPixelsImpl_System_Int32_x__System_Int32_y__System_Int32_w__System_Int32_h__UnityEngine_Color___pixel__System_Int32_miplevel__System_Int32_frame = 42274256; // System.Void SetPixelsImpl(System.Int32 x, System.Int32 y, System.Int32 w, System.Int32 h, UnityEngine.Color[] pixel, System.Int32 miplevel, System.Int32 frame)
constexpr auto LoadRawTextureDataImpl_System_IntPtr_data__System_UInt64_size = 42271696; // System.Boolean LoadRawTextureDataImpl(System.IntPtr data, System.UInt64 size)
constexpr auto SetPixelDataImpl_System_IntPtr_data__System_Int32_mipLevel__System_Int32_elementSize__System_Int32_dataArraySize__System_Int32_sourceDataStartIndex___0 = 42273536; // System.Boolean SetPixelDataImpl(System.IntPtr data, System.Int32 mipLevel, System.Int32 elementSize, System.Int32 dataArraySize, System.Int32 sourceDataStartIndex = 0)
constexpr auto GetWritableImageData_System_Int32_frame = 42271312; // System.IntPtr GetWritableImageData(System.Int32 frame)
constexpr auto GetRawImageDataSize = 42271184; // System.UInt64 GetRawImageDataSize()
constexpr auto set_requestedMipmapLevel_System_Int32_value = 42277440; // System.Void set_requestedMipmapLevel(System.Int32 value)
constexpr auto set_minimumMipmapLevel_System_Int32_value = 42277376; // System.Void set_minimumMipmapLevel(System.Int32 value)
constexpr auto ClearRequestedMipmapLevel = 42269600; // System.Void ClearRequestedMipmapLevel()
constexpr auto ClearMinimumMipmapLevel = 42269536; // System.Void ClearMinimumMipmapLevel()
constexpr auto SetAllPixels32_UnityEngine_Color32___colors__System_Int32_miplevel = 42273344; // System.Void SetAllPixels32(UnityEngine.Color32[] colors, System.Int32 miplevel)
constexpr auto SetBlockOfPixels32_System_Int32_x__System_Int32_y__System_Int32_blockWidth__System_Int32_blockHeight__UnityEngine_Color32___colors__System_Int32_miplevel = 42273440; // System.Void SetBlockOfPixels32(System.Int32 x, System.Int32 y, System.Int32 blockWidth, System.Int32 blockHeight, UnityEngine.Color32[] colors, System.Int32 miplevel)
constexpr auto GetRawTextureData = 42271248; // System.Byte[] GetRawTextureData()
constexpr auto GetPixels_System_Int32_x__System_Int32_y__System_Int32_blockWidth__System_Int32_blockHeight__System_Int32_miplevel = 42271088; // UnityEngine.Color[] GetPixels(System.Int32 x, System.Int32 y, System.Int32 blockWidth, System.Int32 blockHeight, System.Int32 miplevel)
constexpr auto GetPixels32_System_Int32_miplevel = 42270608; // UnityEngine.Color32[] GetPixels32(System.Int32 miplevel)
constexpr auto GetPixels32 = 42270672; // UnityEngine.Color32[] GetPixels32()
constexpr auto ValidateFormat_UnityEngine_TextureFormat_format__System_Int32_width__System_Int32_height = 42275152; // System.Boolean ValidateFormat(UnityEngine.TextureFormat format, System.Int32 width, System.Int32 height)
constexpr auto ValidateFormat_UnityEngine_Experimental_Rendering_GraphicsFormat_format__System_Int32_width__System_Int32_height = 42274832; // System.Boolean ValidateFormat(UnityEngine.Experimental.Rendering.GraphicsFormat format, System.Int32 width, System.Int32 height)
constexpr auto _ctor_System_Int32_width__System_Int32_height__UnityEngine_Experimental_Rendering_GraphicsFormat_format__UnityEngine_Experimental_Rendering_TextureCreationFlags_flags__System_Int32_mipCount__System_IntPtr_nativeTex = 42275408; // System.Void .ctor(System.Int32 width, System.Int32 height, UnityEngine.Experimental.Rendering.GraphicsFormat format, UnityEngine.Experimental.Rendering.TextureCreationFlags flags, System.Int32 mipCount, System.IntPtr nativeTex)
constexpr auto _ctor_System_Int32_width__System_Int32_height__UnityEngine_Experimental_Rendering_GraphicsFormat_format__UnityEngine_Experimental_Rendering_TextureCreationFlags_flags = 42276464; // System.Void .ctor(System.Int32 width, System.Int32 height, UnityEngine.Experimental.Rendering.GraphicsFormat format, UnityEngine.Experimental.Rendering.TextureCreationFlags flags)
constexpr auto _ctor_System_Int32_width__System_Int32_height__UnityEngine_TextureFormat_textureFormat__System_Int32_mipCount__System_Boolean_linear__System_IntPtr_nativeTex = 42275888; // System.Void .ctor(System.Int32 width, System.Int32 height, UnityEngine.TextureFormat textureFormat, System.Int32 mipCount, System.Boolean linear, System.IntPtr nativeTex)
constexpr auto _ctor_System_Int32_width__System_Int32_height__UnityEngine_TextureFormat_textureFormat__System_Boolean_mipChain__System_Boolean_linear = 42276832; // System.Void .ctor(System.Int32 width, System.Int32 height, UnityEngine.TextureFormat textureFormat, System.Boolean mipChain, System.Boolean linear)
constexpr auto _ctor_System_Int32_width__System_Int32_height__UnityEngine_TextureFormat_textureFormat__System_Boolean_mipChain = 42276992; // System.Void .ctor(System.Int32 width, System.Int32 height, UnityEngine.TextureFormat textureFormat, System.Boolean mipChain)
constexpr auto _ctor_System_Int32_width__System_Int32_height = 42276656; // System.Void .ctor(System.Int32 width, System.Int32 height)
constexpr auto SetPixel_System_Int32_x__System_Int32_y__UnityEngine_Color_color = 42273872; // System.Void SetPixel(System.Int32 x, System.Int32 y, UnityEngine.Color color)
constexpr auto SetPixels_System_Int32_x__System_Int32_y__System_Int32_blockWidth__System_Int32_blockHeight__UnityEngine_Color___colors__System_Int32_miplevel = 42274352; // System.Void SetPixels(System.Int32 x, System.Int32 y, System.Int32 blockWidth, System.Int32 blockHeight, UnityEngine.Color[] colors, System.Int32 miplevel)
constexpr auto SetPixels_UnityEngine_Color___colors__System_Int32_miplevel = 42274656; // System.Void SetPixels(UnityEngine.Color[] colors, System.Int32 miplevel)
constexpr auto SetPixels_UnityEngine_Color___colors = 42274528; // System.Void SetPixels(UnityEngine.Color[] colors)
constexpr auto GetPixel_System_Int32_x__System_Int32_y = 42270400; // UnityEngine.Color GetPixel(System.Int32 x, System.Int32 y)
constexpr auto GetPixelBilinear_System_Single_u__System_Single_v = 42269968; // UnityEngine.Color GetPixelBilinear(System.Single u, System.Single v)
constexpr auto LoadRawTextureData_System_IntPtr_data__System_Int32_size = 42271792; // System.Void LoadRawTextureData(System.IntPtr data, System.Int32 size)
constexpr auto System_Void_UnityEngine_Texture2D_SetPixelData_Unity_Mathematics_float2__Unity_Collections_NativeArray_1_T__data__System_Int32_mipLevel__System_Int32_sourceDataStartIndex___0 = 19069024; // System.Void UnityEngine.Texture2D.SetPixelData<Unity.Mathematics.float2>
constexpr auto Unity_Collections_NativeArray_1_T__UnityEngine_Texture2D_GetRawTextureData_UnityEngine_Color32_ = 19068416; // Unity.Collections.NativeArray`1<T> UnityEngine.Texture2D.GetRawTextureData<UnityEngine.Color32>
constexpr auto Apply_System_Boolean_updateMipmaps__System_Boolean_makeNoLongerReadable = 42269344; // System.Void Apply(System.Boolean updateMipmaps, System.Boolean makeNoLongerReadable)
constexpr auto Apply_System_Boolean_updateMipmaps = 42269520; // System.Void Apply(System.Boolean updateMipmaps)
constexpr auto Apply = 42269504; // System.Void Apply()
constexpr auto Reinitialize_System_Int32_width__System_Int32_height = 42272960; // System.Boolean Reinitialize(System.Int32 width, System.Int32 height)
constexpr auto Reinitialize_System_Int32_width__System_Int32_height__UnityEngine_TextureFormat_format__System_Boolean_hasMipMap = 42273104; // System.Boolean Reinitialize(System.Int32 width, System.Int32 height, UnityEngine.TextureFormat format, System.Boolean hasMipMap)
constexpr auto Resize_System_Int32_width__System_Int32_height = 42272960; // System.Boolean Resize(System.Int32 width, System.Int32 height)
constexpr auto Resize_System_Int32_width__System_Int32_height__UnityEngine_TextureFormat_format__System_Boolean_hasMipMap = 42273104; // System.Boolean Resize(System.Int32 width, System.Int32 height, UnityEngine.TextureFormat format, System.Boolean hasMipMap)
constexpr auto ReadPixels_UnityEngine_Rect_source__System_Int32_destX__System_Int32_destY__System_Boolean_recalculateMipMaps = 42272576; // System.Void ReadPixels(UnityEngine.Rect source, System.Int32 destX, System.Int32 destY, System.Boolean recalculateMipMaps)
constexpr auto ReadPixels_UnityEngine_Rect_source__System_Int32_destX__System_Int32_destY = 42272384; // System.Void ReadPixels(UnityEngine.Rect source, System.Int32 destX, System.Int32 destY)
constexpr auto SetPixels32_UnityEngine_Color32___colors__System_Int32_miplevel = 42273344; // System.Void SetPixels32(UnityEngine.Color32[] colors, System.Int32 miplevel)
constexpr auto SetPixels32_UnityEngine_Color32___colors = 42274064; // System.Void SetPixels32(UnityEngine.Color32[] colors)
constexpr auto SetPixels32_System_Int32_x__System_Int32_y__System_Int32_blockWidth__System_Int32_blockHeight__UnityEngine_Color32___colors__System_Int32_miplevel = 42273440; // System.Void SetPixels32(System.Int32 x, System.Int32 y, System.Int32 blockWidth, System.Int32 blockHeight, UnityEngine.Color32[] colors, System.Int32 miplevel)
constexpr auto SetPixels32_System_Int32_x__System_Int32_y__System_Int32_blockWidth__System_Int32_blockHeight__UnityEngine_Color32___colors = 42274144; // System.Void SetPixels32(System.Int32 x, System.Int32 y, System.Int32 blockWidth, System.Int32 blockHeight, UnityEngine.Color32[] colors)
constexpr auto GetPixels_System_Int32_miplevel = 42270736; // UnityEngine.Color[] GetPixels(System.Int32 miplevel)
constexpr auto GetPixels = 42270928; // UnityEngine.Color[] GetPixels()
constexpr auto SetPixelImpl_Injected_System_Int32_image__System_Int32_mip__System_Int32_x__System_Int32_y__UnityEngine_Color_color = 42273648; // System.Void SetPixelImpl_Injected(System.Int32 image, System.Int32 mip, System.Int32 x, System.Int32 y, UnityEngine.Color color)
constexpr auto GetPixelImpl_Injected_System_Int32_image__System_Int32_mip__System_Int32_x__System_Int32_y__out_UnityEngine_Color_ret = 42270176; // System.Void GetPixelImpl_Injected(System.Int32 image, System.Int32 mip, System.Int32 x, System.Int32 y, out UnityEngine.Color ret)
constexpr auto GetPixelBilinearImpl_Injected_System_Int32_image__System_Int32_mip__System_Single_u__System_Single_v__out_UnityEngine_Color_ret = 42269744; // System.Void GetPixelBilinearImpl_Injected(System.Int32 image, System.Int32 mip, System.Single u, System.Single v, out UnityEngine.Color ret)
constexpr auto ReadPixelsImpl_Injected_UnityEngine_Rect_source__System_Int32_destX__System_Int32_destY__System_Boolean_recalculateMipMaps = 42272160; // System.Void ReadPixelsImpl_Injected(UnityEngine.Rect source, System.Int32 destX, System.Int32 destY, System.Boolean recalculateMipMaps)
}
namespace StaticMethods
{
constexpr auto get_whiteTexture = 42277328; // UnityEngine.Texture2D get_whiteTexture()
constexpr auto get_blackTexture = 42277152; // UnityEngine.Texture2D get_blackTexture()
constexpr auto Internal_CreateImpl_UnityEngine_Texture2D_mono__System_Int32_w__System_Int32_h__System_Int32_mipCount__UnityEngine_Experimental_Rendering_GraphicsFormat_format__UnityEngine_Experimental_Rendering_TextureCreationFlags_flags__System_IntPtr_nativeTex = 42271376; // System.Boolean Internal_CreateImpl(UnityEngine.Texture2D mono, System.Int32 w, System.Int32 h, System.Int32 mipCount, UnityEngine.Experimental.Rendering.GraphicsFormat format, UnityEngine.Experimental.Rendering.TextureCreationFlags flags, System.IntPtr nativeTex)
constexpr auto Internal_Create_UnityEngine_Texture2D_mono__System_Int32_w__System_Int32_h__System_Int32_mipCount__UnityEngine_Experimental_Rendering_GraphicsFormat_format__UnityEngine_Experimental_Rendering_TextureCreationFlags_flags__System_IntPtr_nativeTex = 42271472; // System.Void Internal_Create(UnityEngine.Texture2D mono, System.Int32 w, System.Int32 h, System.Int32 mipCount, UnityEngine.Experimental.Rendering.GraphicsFormat format, UnityEngine.Experimental.Rendering.TextureCreationFlags flags, System.IntPtr nativeTex)
}
}
namespace UnityEngine_Texture
{
namespace StaticFields
{
constexpr auto GenerateAllMips = 0x0; // System.Int32
}
namespace Methods
{
constexpr auto _ctor = 42282880; // System.Void .ctor()
constexpr auto get_mipmapCount = 42283264; // System.Int32 get_mipmapCount()
constexpr auto get_graphicsFormat = 42283120; // UnityEngine.Experimental.Rendering.GraphicsFormat get_graphicsFormat()
constexpr auto GetDataWidth = 42281632; // System.Int32 GetDataWidth()
constexpr auto GetDataHeight = 42281568; // System.Int32 GetDataHeight()
constexpr auto GetDimension = 42281696; // UnityEngine.Rendering.TextureDimension GetDimension()
constexpr auto get_width = 42281632; // System.Int32 get_width()
constexpr auto set_width_System_Int32_value = 42284592; // System.Void set_width(System.Int32 value)
constexpr auto get_height = 42281568; // System.Int32 get_height()
constexpr auto set_height_System_Int32_value = 42284304; // System.Void set_height(System.Int32 value)
constexpr auto get_dimension = 42281696; // UnityEngine.Rendering.TextureDimension get_dimension()
constexpr auto set_dimension_UnityEngine_Rendering_TextureDimension_value = 42284160; // System.Void set_dimension(UnityEngine.Rendering.TextureDimension value)
constexpr auto get_isReadable = 42283200; // System.Boolean get_isReadable()
constexpr auto get_wrapMode = 42283968; // UnityEngine.TextureWrapMode get_wrapMode()
constexpr auto set_wrapMode_UnityEngine_TextureWrapMode_value = 42284672; // System.Void set_wrapMode(UnityEngine.TextureWrapMode value)
constexpr auto set_filterMode_UnityEngine_FilterMode_value = 42284240; // System.Void set_filterMode(UnityEngine.FilterMode value)
constexpr auto set_anisoLevel_System_Int32_value = 42284032; // System.Void set_anisoLevel(System.Int32 value)
constexpr auto set_mipMapBias_System_Single_value = 42284384; // System.Void set_mipMapBias(System.Single value)
constexpr auto get_texelSize = 42283840; // UnityEngine.Vector2 get_texelSize()
constexpr auto GetNativeTexturePtr = 42281760; // System.IntPtr GetNativeTexturePtr()
constexpr auto Internal_GetActiveTextureColorSpace = 42281824; // System.Int32 Internal_GetActiveTextureColorSpace()
constexpr auto get_activeTextureColorSpace = 42282960; // UnityEngine.ColorSpace get_activeTextureColorSpace()
constexpr auto ValidateFormat_UnityEngine_TextureFormat_format = 42282400; // System.Boolean ValidateFormat(UnityEngine.TextureFormat format)
constexpr auto ValidateFormat_UnityEngine_Experimental_Rendering_GraphicsFormat_format__UnityEngine_Experimental_Rendering_FormatUsage_usage = 42281952; // System.Boolean ValidateFormat(UnityEngine.Experimental.Rendering.GraphicsFormat format, UnityEngine.Experimental.Rendering.FormatUsage usage)
constexpr auto CreateNonReadableException_UnityEngine_Texture_t = 42281424; // UnityEngine.UnityException CreateNonReadableException(UnityEngine.Texture t)
constexpr auto CreateNativeArrayLengthOverflowException = 42281312; // UnityEngine.UnityException CreateNativeArrayLengthOverflowException()
constexpr auto get_texelSize_Injected_out_UnityEngine_Vector2_ret = 42283760; // System.Void get_texelSize_Injected(out UnityEngine.Vector2 ret)
}
namespace StaticMethods
{
constexpr auto set_anisotropicFiltering_UnityEngine_AnisotropicFiltering_value = 42284096; // System.Void set_anisotropicFiltering(UnityEngine.AnisotropicFiltering value)
constexpr auto SetGlobalAnisotropicFilteringLimits_System_Int32_forcedMin__System_Int32_globalMax = 42281888; // System.Void SetGlobalAnisotropicFilteringLimits(System.Int32 forcedMin, System.Int32 globalMax)
constexpr auto get_totalTextureMemory = 42283920; // System.UInt64 get_totalTextureMemory()
constexpr auto get_desiredTextureMemory = 42283072; // System.UInt64 get_desiredTextureMemory()
constexpr auto get_targetTextureMemory = 42283712; // System.UInt64 get_targetTextureMemory()
constexpr auto get_currentTextureMemory = 42283024; // System.UInt64 get_currentTextureMemory()
constexpr auto get_nonStreamingTextureMemory = 42283376; // System.UInt64 get_nonStreamingTextureMemory()
constexpr auto get_streamingMipmapUploadCount = 42283424; // System.UInt64 get_streamingMipmapUploadCount()
constexpr auto get_streamingTextureCount = 42283472; // System.UInt64 get_streamingTextureCount()
constexpr auto get_nonStreamingTextureCount = 42283328; // System.UInt64 get_nonStreamingTextureCount()
constexpr auto get_streamingTexturePendingLoadCount = 42283664; // System.UInt64 get_streamingTexturePendingLoadCount()
constexpr auto get_streamingTextureLoadingCount = 42283616; // System.UInt64 get_streamingTextureLoadingCount()
constexpr auto get_streamingTextureForceLoadAll = 42283568; // System.Boolean get_streamingTextureForceLoadAll()
constexpr auto set_streamingTextureForceLoadAll_System_Boolean_value = 42284528; // System.Void set_streamingTextureForceLoadAll(System.Boolean value)
constexpr auto get_streamingTextureDiscardUnusedMips = 42283520; // System.Boolean get_streamingTextureDiscardUnusedMips()
constexpr auto set_streamingTextureDiscardUnusedMips_System_Boolean_value = 42284464; // System.Void set_streamingTextureDiscardUnusedMips(System.Boolean value)
constexpr auto _cctor = 42282816; // System.Void .cctor()
}
}
namespace UnityEngine_Mesh
{
namespace Methods
{
constexpr auto _ctor = 42227600; // System.Void .ctor()
constexpr auto get_indexFormat = 42228288; // UnityEngine.Rendering.IndexFormat get_indexFormat()
constexpr auto set_indexFormat_UnityEngine_Rendering_IndexFormat_value = 42229728; // System.Void set_indexFormat(UnityEngine.Rendering.IndexFormat value)
constexpr auto SetVertexBufferParamsFromArray_System_Int32_vertexCount__UnityEngine_Rendering_VertexAttributeDescriptor___attributes = 42226912; // System.Void SetVertexBufferParamsFromArray(System.Int32 vertexCount, UnityEngine.Rendering.VertexAttributeDescriptor[] attributes)
constexpr auto InternalSetVertexBufferDataFromArray_System_Int32_stream__System_Array_data__System_Int32_dataStart__System_Int32_meshBufferStart__System_Int32_count__System_Int32_elemSize__UnityEngine_Rendering_MeshUpdateFlags_flags = 42217008; // System.Void InternalSetVertexBufferDataFromArray(System.Int32 stream, System.Array data, System.Int32 dataStart, System.Int32 meshBufferStart, System.Int32 count, System.Int32 elemSize, UnityEngine.Rendering.MeshUpdateFlags flags)
constexpr auto GetIndexStartImpl_System_Int32_submesh = 42213312; // System.UInt32 GetIndexStartImpl(System.Int32 submesh)
constexpr auto GetIndexCountImpl_System_Int32_submesh = 42213056; // System.UInt32 GetIndexCountImpl(System.Int32 submesh)
constexpr auto GetBaseVertexImpl_System_Int32_submesh = 42212224; // System.UInt32 GetBaseVertexImpl(System.Int32 submesh)
constexpr auto GetTrianglesImpl_System_Int32_submesh__System_Boolean_applyBaseVertex = 42215648; // System.Int32[] GetTrianglesImpl(System.Int32 submesh, System.Boolean applyBaseVertex)
constexpr auto GetIndicesImpl_System_Int32_submesh__System_Boolean_applyBaseVertex = 42213568; // System.Int32[] GetIndicesImpl(System.Int32 submesh, System.Boolean applyBaseVertex)
constexpr auto SetIndicesImpl_System_Int32_submesh__UnityEngine_MeshTopology_topology__UnityEngine_Rendering_IndexFormat_indicesFormat__System_Array_indices__System_Int32_arrayStart__System_Int32_arraySize__System_Boolean_calculateBounds__System_Int32_baseVertex = 42220688; // System.Void SetIndicesImpl(System.Int32 submesh, UnityEngine.MeshTopology topology, UnityEngine.Rendering.IndexFormat indicesFormat, System.Array indices, System.Int32 arrayStart, System.Int32 arraySize, System.Boolean calculateBounds, System.Int32 baseVertex)
constexpr auto GetIndicesNonAllocImpl_out_System_Int32___values__System_Int32_submesh__System_Boolean_applyBaseVertex = 42213664; // System.Void GetIndicesNonAllocImpl(out System.Int32[] values, System.Int32 submesh, System.Boolean applyBaseVertex)
constexpr auto PrintErrorCantAccessChannel_UnityEngine_Rendering_VertexAttribute_ch = 42217616; // System.Void PrintErrorCantAccessChannel(UnityEngine.Rendering.VertexAttribute ch)
constexpr auto HasVertexAttribute_UnityEngine_Rendering_VertexAttribute_attr = 42216944; // System.Boolean HasVertexAttribute(UnityEngine.Rendering.VertexAttribute attr)
constexpr auto GetVertexAttributeOffset_UnityEngine_Rendering_VertexAttribute_attr = 42216304; // System.Int32 GetVertexAttributeOffset(UnityEngine.Rendering.VertexAttribute attr)
constexpr auto SetArrayForChannelImpl_UnityEngine_Rendering_VertexAttribute_channel__UnityEngine_Rendering_VertexAttributeFormat_format__System_Int32_dim__System_Array_values__System_Int32_arraySize__System_Int32_valuesStart__System_Int32_valuesCount__UnityEngine_Rendering_MeshUpdateFlags_flags = 42219296; // System.Void SetArrayForChannelImpl(UnityEngine.Rendering.VertexAttribute channel, UnityEngine.Rendering.VertexAttributeFormat format, System.Int32 dim, System.Array values, System.Int32 arraySize, System.Int32 valuesStart, System.Int32 valuesCount, UnityEngine.Rendering.MeshUpdateFlags flags)
constexpr auto SetNativeArrayForChannelImpl_UnityEngine_Rendering_VertexAttribute_channel__UnityEngine_Rendering_VertexAttributeFormat_format__System_Int32_dim__System_IntPtr_values__System_Int32_arraySize__System_Int32_valuesStart__System_Int32_valuesCount__UnityEngine_Rendering_MeshUpdateFlags_flags = 42221888; // System.Void SetNativeArrayForChannelImpl(UnityEngine.Rendering.VertexAttribute channel, UnityEngine.Rendering.VertexAttributeFormat format, System.Int32 dim, System.IntPtr values, System.Int32 arraySize, System.Int32 valuesStart, System.Int32 valuesCount, UnityEngine.Rendering.MeshUpdateFlags flags)
constexpr auto GetAllocArrayFromChannelImpl_UnityEngine_Rendering_VertexAttribute_channel__UnityEngine_Rendering_VertexAttributeFormat_format__System_Int32_dim = 42212032; // System.Array GetAllocArrayFromChannelImpl(UnityEngine.Rendering.VertexAttribute channel, UnityEngine.Rendering.VertexAttributeFormat format, System.Int32 dim)
constexpr auto GetArrayFromChannelImpl_UnityEngine_Rendering_VertexAttribute_channel__UnityEngine_Rendering_VertexAttributeFormat_format__System_Int32_dim__System_Array_values = 42212128; // System.Void GetArrayFromChannelImpl(UnityEngine.Rendering.VertexAttribute channel, UnityEngine.Rendering.VertexAttributeFormat format, System.Int32 dim, System.Array values)
constexpr auto GetVertexBufferStride_System_Int32_stream = 42216432; // System.Int32 GetVertexBufferStride(System.Int32 stream)
constexpr auto GetVertexBufferImpl_System_Int32_index = 42216368; // UnityEngine.GraphicsBuffer GetVertexBufferImpl(System.Int32 index)
constexpr auto GetIndexBufferImpl = 42212800; // UnityEngine.GraphicsBuffer GetIndexBufferImpl()
constexpr auto get_vertexBufferTarget = 42229024; // UnityEngine.GraphicsBuffer/Target get_vertexBufferTarget()
constexpr auto set_vertexBufferTarget_UnityEngine_GraphicsBuffer_Target_value = 42230672; // System.Void set_vertexBufferTarget(UnityEngine.GraphicsBuffer/Target value)
constexpr auto get_indexBufferTarget = 42228224; // UnityEngine.GraphicsBuffer/Target get_indexBufferTarget()
constexpr auto set_indexBufferTarget_UnityEngine_GraphicsBuffer_Target_value = 42229664; // System.Void set_indexBufferTarget(UnityEngine.GraphicsBuffer/Target value)
constexpr auto get_blendShapeCount = 42227776; // System.Int32 get_blendShapeCount()
constexpr auto GetBoneWeightsImpl = 42212480; // UnityEngine.BoneWeight[] GetBoneWeightsImpl()
constexpr auto SetBoneWeightsImpl_UnityEngine_BoneWeight___weights = 42219392; // System.Void SetBoneWeightsImpl(UnityEngine.BoneWeight[] weights)
constexpr auto get_bindposes = 42227712; // UnityEngine.Matrix4x4[] get_bindposes()
constexpr auto set_bindposes_UnityEngine_Matrix4x4___value = 42229216; // System.Void set_bindposes(UnityEngine.Matrix4x4[] value)
constexpr auto get_isReadable = 42228352; // System.Boolean get_isReadable()
constexpr auto get_canAccess = 42228016; // System.Boolean get_canAccess()
constexpr auto get_vertexCount = 42229088; // System.Int32 get_vertexCount()
constexpr auto get_subMeshCount = 42228480; // System.Int32 get_subMeshCount()
constexpr auto set_subMeshCount_System_Int32_value = 42229888; // System.Void set_subMeshCount(System.Int32 value)
constexpr auto GetSubMesh_System_Int32_index = 42215024; // UnityEngine.Rendering.SubMeshDescriptor GetSubMesh(System.Int32 index)
constexpr auto get_bounds = 42227920; // UnityEngine.Bounds get_bounds()
constexpr auto set_bounds_UnityEngine_Bounds_value = 42229376; // System.Void set_bounds(UnityEngine.Bounds value)
constexpr auto ClearImpl_System_Boolean_keepVertexLayout = 42211696; // System.Void ClearImpl(System.Boolean keepVertexLayout)
constexpr auto RecalculateBoundsImpl_UnityEngine_Rendering_MeshUpdateFlags_flags = 42217808; // System.Void RecalculateBoundsImpl(UnityEngine.Rendering.MeshUpdateFlags flags)
constexpr auto RecalculateNormalsImpl_UnityEngine_Rendering_MeshUpdateFlags_flags = 42218304; // System.Void RecalculateNormalsImpl(UnityEngine.Rendering.MeshUpdateFlags flags)
constexpr auto RecalculateTangentsImpl_UnityEngine_Rendering_MeshUpdateFlags_flags = 42218800; // System.Void RecalculateTangentsImpl(UnityEngine.Rendering.MeshUpdateFlags flags)
constexpr auto MarkDynamicImpl = 42217168; // System.Void MarkDynamicImpl()
constexpr auto UploadMeshDataImpl_System_Boolean_markNoLongerReadable = 42227408; // System.Void UploadMeshDataImpl(System.Boolean markNoLongerReadable)
constexpr auto GetTopologyImpl_System_Int32_submesh = 42215376; // UnityEngine.MeshTopology GetTopologyImpl(System.Int32 submesh)
constexpr auto OptimizeImpl = 42217344; // System.Void OptimizeImpl()
constexpr auto T___UnityEngine_Mesh_GetAllocArrayFromChannel_UnityEngine_Color__UnityEngine_Rendering_VertexAttribute_channel__UnityEngine_Rendering_VertexAttributeFormat_format__System_Int32_dim = 18780880; // T[] UnityEngine.Mesh.GetAllocArrayFromChannel<UnityEngine.Color>
constexpr auto T___UnityEngine_Mesh_GetAllocArrayFromChannel_UnityEngine_Color32__UnityEngine_Rendering_VertexAttribute_channel__UnityEngine_Rendering_VertexAttributeFormat_format__System_Int32_dim = 18780880; // T[] UnityEngine.Mesh.GetAllocArrayFromChannel<UnityEngine.Color32>
constexpr auto T___UnityEngine_Mesh_GetAllocArrayFromChannel_System_Object__UnityEngine_Rendering_VertexAttribute_channel__UnityEngine_Rendering_VertexAttributeFormat_format__System_Int32_dim = 18780880; // T[] UnityEngine.Mesh.GetAllocArrayFromChannel<System.Object>
constexpr auto T___UnityEngine_Mesh_GetAllocArrayFromChannel_UnityEngine_Vector2__UnityEngine_Rendering_VertexAttribute_channel__UnityEngine_Rendering_VertexAttributeFormat_format__System_Int32_dim = 18780880; // T[] UnityEngine.Mesh.GetAllocArrayFromChannel<UnityEngine.Vector2>
constexpr auto T___UnityEngine_Mesh_GetAllocArrayFromChannel_UnityEngine_Vector3__UnityEngine_Rendering_VertexAttribute_channel__UnityEngine_Rendering_VertexAttributeFormat_format__System_Int32_dim = 18780880; // T[] UnityEngine.Mesh.GetAllocArrayFromChannel<UnityEngine.Vector3>
constexpr auto T___UnityEngine_Mesh_GetAllocArrayFromChannel_UnityEngine_Vector4__UnityEngine_Rendering_VertexAttribute_channel__UnityEngine_Rendering_VertexAttributeFormat_format__System_Int32_dim = 18780880; // T[] UnityEngine.Mesh.GetAllocArrayFromChannel<UnityEngine.Vector4>
constexpr auto T___UnityEngine_Mesh_GetAllocArrayFromChannel_UnityEngine_Color__UnityEngine_Rendering_VertexAttribute_channel = 18781136; // T[] UnityEngine.Mesh.GetAllocArrayFromChannel<UnityEngine.Color>
constexpr auto T___UnityEngine_Mesh_GetAllocArrayFromChannel_System_Object__UnityEngine_Rendering_VertexAttribute_channel = 18781136; // T[] UnityEngine.Mesh.GetAllocArrayFromChannel<System.Object>
constexpr auto T___UnityEngine_Mesh_GetAllocArrayFromChannel_UnityEngine_Vector2__UnityEngine_Rendering_VertexAttribute_channel = 18781136; // T[] UnityEngine.Mesh.GetAllocArrayFromChannel<UnityEngine.Vector2>
constexpr auto T___UnityEngine_Mesh_GetAllocArrayFromChannel_UnityEngine_Vector3__UnityEngine_Rendering_VertexAttribute_channel = 18781136; // T[] UnityEngine.Mesh.GetAllocArrayFromChannel<UnityEngine.Vector3>
constexpr auto T___UnityEngine_Mesh_GetAllocArrayFromChannel_UnityEngine_Vector4__UnityEngine_Rendering_VertexAttribute_channel = 18781136; // T[] UnityEngine.Mesh.GetAllocArrayFromChannel<UnityEngine.Vector4>
constexpr auto SetSizedArrayForChannel_UnityEngine_Rendering_VertexAttribute_channel__UnityEngine_Rendering_VertexAttributeFormat_format__System_Int32_dim__System_Array_values__System_Int32_valuesArrayLength__System_Int32_valuesStart__System_Int32_valuesCount__UnityEngine_Rendering_MeshUpdateFlags_flags = 42222400; // System.Void SetSizedArrayForChannel(UnityEngine.Rendering.VertexAttribute channel, UnityEngine.Rendering.VertexAttributeFormat format, System.Int32 dim, System.Array values, System.Int32 valuesArrayLength, System.Int32 valuesStart, System.Int32 valuesCount, UnityEngine.Rendering.MeshUpdateFlags flags)
constexpr auto SetSizedNativeArrayForChannel_UnityEngine_Rendering_VertexAttribute_channel__UnityEngine_Rendering_VertexAttributeFormat_format__System_Int32_dim__System_IntPtr_values__System_Int32_valuesArrayLength__System_Int32_valuesStart__System_Int32_valuesCount__UnityEngine_Rendering_MeshUpdateFlags_flags = 42223296; // System.Void SetSizedNativeArrayForChannel(UnityEngine.Rendering.VertexAttribute channel, UnityEngine.Rendering.VertexAttributeFormat format, System.Int32 dim, System.IntPtr values, System.Int32 valuesArrayLength, System.Int32 valuesStart, System.Int32 valuesCount, UnityEngine.Rendering.MeshUpdateFlags flags)
constexpr auto System_Void_UnityEngine_Mesh_SetArrayForChannel_UnityEngine_Color32__UnityEngine_Rendering_VertexAttribute_channel__UnityEngine_Rendering_VertexAttributeFormat_format__System_Int32_dim__T___values__UnityEngine_Rendering_MeshUpdateFlags_flags___0 = 18782144; // System.Void UnityEngine.Mesh.SetArrayForChannel<UnityEngine.Color32>
constexpr auto System_Void_UnityEngine_Mesh_SetArrayForChannel_System_Object__UnityEngine_Rendering_VertexAttribute_channel__UnityEngine_Rendering_VertexAttributeFormat_format__System_Int32_dim__T___values__UnityEngine_Rendering_MeshUpdateFlags_flags___0 = 18782144; // System.Void UnityEngine.Mesh.SetArrayForChannel<System.Object>
constexpr auto System_Void_UnityEngine_Mesh_SetArrayForChannel_UnityEngine_Color__UnityEngine_Rendering_VertexAttribute_channel__T___values__UnityEngine_Rendering_MeshUpdateFlags_flags___0 = 18782288; // System.Void UnityEngine.Mesh.SetArrayForChannel<UnityEngine.Color>
constexpr auto System_Void_UnityEngine_Mesh_SetArrayForChannel_System_Object__UnityEngine_Rendering_VertexAttribute_channel__T___values__UnityEngine_Rendering_MeshUpdateFlags_flags___0 = 18782288; // System.Void UnityEngine.Mesh.SetArrayForChannel<System.Object>
constexpr auto System_Void_UnityEngine_Mesh_SetArrayForChannel_UnityEngine_Vector2__UnityEngine_Rendering_VertexAttribute_channel__T___values__UnityEngine_Rendering_MeshUpdateFlags_flags___0 = 18782288; // System.Void UnityEngine.Mesh.SetArrayForChannel<UnityEngine.Vector2>
constexpr auto System_Void_UnityEngine_Mesh_SetArrayForChannel_UnityEngine_Vector3__UnityEngine_Rendering_VertexAttribute_channel__T___values__UnityEngine_Rendering_MeshUpdateFlags_flags___0 = 18782288; // System.Void UnityEngine.Mesh.SetArrayForChannel<UnityEngine.Vector3>
constexpr auto System_Void_UnityEngine_Mesh_SetArrayForChannel_UnityEngine_Vector4__UnityEngine_Rendering_VertexAttribute_channel__T___values__UnityEngine_Rendering_MeshUpdateFlags_flags___0 = 18782288; // System.Void UnityEngine.Mesh.SetArrayForChannel<UnityEngine.Vector4>
constexpr auto System_Void_UnityEngine_Mesh_SetListForChannel_UnityEngine_Color32__UnityEngine_Rendering_VertexAttribute_channel__UnityEngine_Rendering_VertexAttributeFormat_format__System_Int32_dim__System_Collections_Generic_List_1_T__values__System_Int32_start__System_Int32_length__UnityEngine_Rendering_MeshUpdateFlags_flags = 18782432; // System.Void UnityEngine.Mesh.SetListForChannel<UnityEngine.Color32>
constexpr auto System_Void_UnityEngine_Mesh_SetListForChannel_System_Object__UnityEngine_Rendering_VertexAttribute_channel__UnityEngine_Rendering_VertexAttributeFormat_format__System_Int32_dim__System_Collections_Generic_List_1_T__values__System_Int32_start__System_Int32_length__UnityEngine_Rendering_MeshUpdateFlags_flags = 18782432; // System.Void UnityEngine.Mesh.SetListForChannel<System.Object>
constexpr auto System_Void_UnityEngine_Mesh_SetListForChannel_UnityEngine_Vector2__UnityEngine_Rendering_VertexAttribute_channel__UnityEngine_Rendering_VertexAttributeFormat_format__System_Int32_dim__System_Collections_Generic_List_1_T__values__System_Int32_start__System_Int32_length__UnityEngine_Rendering_MeshUpdateFlags_flags = 18782432; // System.Void UnityEngine.Mesh.SetListForChannel<UnityEngine.Vector2>
constexpr auto System_Void_UnityEngine_Mesh_SetListForChannel_UnityEngine_Vector4__UnityEngine_Rendering_VertexAttribute_channel__UnityEngine_Rendering_VertexAttributeFormat_format__System_Int32_dim__System_Collections_Generic_List_1_T__values__System_Int32_start__System_Int32_length__UnityEngine_Rendering_MeshUpdateFlags_flags = 18782432; // System.Void UnityEngine.Mesh.SetListForChannel<UnityEngine.Vector4>
constexpr auto System_Void_UnityEngine_Mesh_SetListForChannel_UnityEngine_Color__UnityEngine_Rendering_VertexAttribute_channel__System_Collections_Generic_List_1_T__values__System_Int32_start__System_Int32_length__UnityEngine_Rendering_MeshUpdateFlags_flags = 18782624; // System.Void UnityEngine.Mesh.SetListForChannel<UnityEngine.Color>
constexpr auto System_Void_UnityEngine_Mesh_SetListForChannel_System_Object__UnityEngine_Rendering_VertexAttribute_channel__System_Collections_Generic_List_1_T__values__System_Int32_start__System_Int32_length__UnityEngine_Rendering_MeshUpdateFlags_flags = 18782624; // System.Void UnityEngine.Mesh.SetListForChannel<System.Object>
constexpr auto System_Void_UnityEngine_Mesh_SetListForChannel_UnityEngine_Vector3__UnityEngine_Rendering_VertexAttribute_channel__System_Collections_Generic_List_1_T__values__System_Int32_start__System_Int32_length__UnityEngine_Rendering_MeshUpdateFlags_flags = 18782624; // System.Void UnityEngine.Mesh.SetListForChannel<UnityEngine.Vector3>
constexpr auto System_Void_UnityEngine_Mesh_SetListForChannel_UnityEngine_Vector4__UnityEngine_Rendering_VertexAttribute_channel__System_Collections_Generic_List_1_T__values__System_Int32_start__System_Int32_length__UnityEngine_Rendering_MeshUpdateFlags_flags = 18782624; // System.Void UnityEngine.Mesh.SetListForChannel<UnityEngine.Vector4>
constexpr auto System_Void_UnityEngine_Mesh_GetListForChannel_System_Object__System_Collections_Generic_List_1_T__buffer__System_Int32_capacity__UnityEngine_Rendering_VertexAttribute_channel__System_Int32_dim = 18781424; // System.Void UnityEngine.Mesh.GetListForChannel<System.Object>
constexpr auto System_Void_UnityEngine_Mesh_GetListForChannel_UnityEngine_Vector3__System_Collections_Generic_List_1_T__buffer__System_Int32_capacity__UnityEngine_Rendering_VertexAttribute_channel__System_Int32_dim = 18781424; // System.Void UnityEngine.Mesh.GetListForChannel<UnityEngine.Vector3>
constexpr auto System_Void_UnityEngine_Mesh_GetListForChannel_UnityEngine_Vector4__System_Collections_Generic_List_1_T__buffer__System_Int32_capacity__UnityEngine_Rendering_VertexAttribute_channel__System_Int32_dim = 18781424; // System.Void UnityEngine.Mesh.GetListForChannel<UnityEngine.Vector4>
constexpr auto System_Void_UnityEngine_Mesh_GetListForChannel_UnityEngine_Color32__System_Collections_Generic_List_1_T__buffer__System_Int32_capacity__UnityEngine_Rendering_VertexAttribute_channel__System_Int32_dim__UnityEngine_Rendering_VertexAttributeFormat_channelType = 18781216; // System.Void UnityEngine.Mesh.GetListForChannel<UnityEngine.Color32>
constexpr auto System_Void_UnityEngine_Mesh_GetListForChannel_System_Object__System_Collections_Generic_List_1_T__buffer__System_Int32_capacity__UnityEngine_Rendering_VertexAttribute_channel__System_Int32_dim__UnityEngine_Rendering_VertexAttributeFormat_channelType = 18781216; // System.Void UnityEngine.Mesh.GetListForChannel<System.Object>
constexpr auto System_Void_UnityEngine_Mesh_GetListForChannel_UnityEngine_Vector3__System_Collections_Generic_List_1_T__buffer__System_Int32_capacity__UnityEngine_Rendering_VertexAttribute_channel__System_Int32_dim__UnityEngine_Rendering_VertexAttributeFormat_channelType = 18781216; // System.Void UnityEngine.Mesh.GetListForChannel<UnityEngine.Vector3>
constexpr auto System_Void_UnityEngine_Mesh_GetListForChannel_UnityEngine_Vector4__System_Collections_Generic_List_1_T__buffer__System_Int32_capacity__UnityEngine_Rendering_VertexAttribute_channel__System_Int32_dim__UnityEngine_Rendering_VertexAttributeFormat_channelType = 18781216; // System.Void UnityEngine.Mesh.GetListForChannel<UnityEngine.Vector4>
constexpr auto get_vertices = 42229152; // UnityEngine.Vector3[] get_vertices()
constexpr auto set_vertices_UnityEngine_Vector3___value = 42230736; // System.Void set_vertices(UnityEngine.Vector3[] value)
constexpr auto get_normals = 42228416; // UnityEngine.Vector3[] get_normals()
constexpr auto set_normals_UnityEngine_Vector3___value = 42229792; // System.Void set_normals(UnityEngine.Vector3[] value)
constexpr auto get_tangents = 42228544; // UnityEngine.Vector4[] get_tangents()
constexpr auto set_tangents_UnityEngine_Vector4___value = 42229952; // System.Void set_tangents(UnityEngine.Vector4[] value)
constexpr auto get_uv = 42228960; // UnityEngine.Vector2[] get_uv()
constexpr auto set_uv_UnityEngine_Vector2___value = 42230576; // System.Void set_uv(UnityEngine.Vector2[] value)
constexpr auto get_uv2 = 42228768; // UnityEngine.Vector2[] get_uv2()
constexpr auto set_uv2_UnityEngine_Vector2___value = 42230288; // System.Void set_uv2(UnityEngine.Vector2[] value)
constexpr auto get_uv3 = 42228832; // UnityEngine.Vector2[] get_uv3()
constexpr auto set_uv3_UnityEngine_Vector2___value = 42230384; // System.Void set_uv3(UnityEngine.Vector2[] value)
constexpr auto get_uv4 = 42228896; // UnityEngine.Vector2[] get_uv4()
constexpr auto set_uv4_UnityEngine_Vector2___value = 42230480; // System.Void set_uv4(UnityEngine.Vector2[] value)
constexpr auto get_colors = 42228160; // UnityEngine.Color[] get_colors()
constexpr auto set_colors_UnityEngine_Color___value = 42229568; // System.Void set_colors(UnityEngine.Color[] value)
constexpr auto get_colors32 = 42228080; // UnityEngine.Color32[] get_colors32()
constexpr auto set_colors32_UnityEngine_Color32___value = 42229456; // System.Void set_colors32(UnityEngine.Color32[] value)
constexpr auto GetVertices_System_Collections_Generic_List_1_UnityEngine_Vector3__vertices = 42216704; // System.Void GetVertices(System.Collections.Generic.List`1<UnityEngine.Vector3> vertices)
constexpr auto SetVertices_System_Collections_Generic_List_1_UnityEngine_Vector3__inVertices = 42227248; // System.Void SetVertices(System.Collections.Generic.List`1<UnityEngine.Vector3> inVertices)
constexpr auto SetVertices_System_Collections_Generic_List_1_UnityEngine_Vector3__inVertices__System_Int32_start__System_Int32_length = 42227120; // System.Void SetVertices(System.Collections.Generic.List`1<UnityEngine.Vector3> inVertices, System.Int32 start, System.Int32 length)
constexpr auto SetVertices_System_Collections_Generic_List_1_UnityEngine_Vector3__inVertices__System_Int32_start__System_Int32_length__UnityEngine_Rendering_MeshUpdateFlags_flags = 42226992; // System.Void SetVertices(System.Collections.Generic.List`1<UnityEngine.Vector3> inVertices, System.Int32 start, System.Int32 length, UnityEngine.Rendering.MeshUpdateFlags flags)
constexpr auto System_Void_UnityEngine_Mesh_SetVertices_Unity_Mathematics_float3__Unity_Collections_NativeArray_1_T__inVertices = 18785296; // System.Void UnityEngine.Mesh.SetVertices<Unity.Mathematics.float3>
constexpr auto System_Void_UnityEngine_Mesh_SetVertices_Unity_Mathematics_float3__Unity_Collections_NativeArray_1_T__inVertices__System_Int32_start__System_Int32_length = 18785344; // System.Void UnityEngine.Mesh.SetVertices<Unity.Mathematics.float3>
constexpr auto System_Void_UnityEngine_Mesh_SetVertices_Unity_Mathematics_float3__Unity_Collections_NativeArray_1_T__inVertices__System_Int32_start__System_Int32_length__UnityEngine_Rendering_MeshUpdateFlags_flags = 18785024; // System.Void UnityEngine.Mesh.SetVertices<Unity.Mathematics.float3>
constexpr auto GetNormals_System_Collections_Generic_List_1_UnityEngine_Vector3__normals = 42214704; // System.Void GetNormals(System.Collections.Generic.List`1<UnityEngine.Vector3> normals)
constexpr auto SetNormals_System_Collections_Generic_List_1_UnityEngine_Vector3__inNormals = 42222240; // System.Void SetNormals(System.Collections.Generic.List`1<UnityEngine.Vector3> inNormals)
constexpr auto SetNormals_System_Collections_Generic_List_1_UnityEngine_Vector3__inNormals__System_Int32_start__System_Int32_length = 42222112; // System.Void SetNormals(System.Collections.Generic.List`1<UnityEngine.Vector3> inNormals, System.Int32 start, System.Int32 length)
constexpr auto SetNormals_System_Collections_Generic_List_1_UnityEngine_Vector3__inNormals__System_Int32_start__System_Int32_length__UnityEngine_Rendering_MeshUpdateFlags_flags = 42221984; // System.Void SetNormals(System.Collections.Generic.List`1<UnityEngine.Vector3> inNormals, System.Int32 start, System.Int32 length, UnityEngine.Rendering.MeshUpdateFlags flags)
constexpr auto GetTangents_System_Collections_Generic_List_1_UnityEngine_Vector4__tangents = 42215136; // System.Void GetTangents(System.Collections.Generic.List`1<UnityEngine.Vector4> tangents)
constexpr auto SetTangents_System_Collections_Generic_List_1_UnityEngine_Vector4__inTangents = 42224192; // System.Void SetTangents(System.Collections.Generic.List`1<UnityEngine.Vector4> inTangents)
constexpr auto SetTangents_System_Collections_Generic_List_1_UnityEngine_Vector4__inTangents__System_Int32_start__System_Int32_length = 42224480; // System.Void SetTangents(System.Collections.Generic.List`1<UnityEngine.Vector4> inTangents, System.Int32 start, System.Int32 length)
constexpr auto SetTangents_System_Collections_Generic_List_1_UnityEngine_Vector4__inTangents__System_Int32_start__System_Int32_length__UnityEngine_Rendering_MeshUpdateFlags_flags = 42224352; // System.Void SetTangents(System.Collections.Generic.List`1<UnityEngine.Vector4> inTangents, System.Int32 start, System.Int32 length, UnityEngine.Rendering.MeshUpdateFlags flags)
constexpr auto SetColors_System_Collections_Generic_List_1_UnityEngine_Color__inColors = 42220528; // System.Void SetColors(System.Collections.Generic.List`1<UnityEngine.Color> inColors)
constexpr auto SetColors_System_Collections_Generic_List_1_UnityEngine_Color__inColors__System_Int32_start__System_Int32_length = 42219616; // System.Void SetColors(System.Collections.Generic.List`1<UnityEngine.Color> inColors, System.Int32 start, System.Int32 length)
constexpr auto SetColors_System_Collections_Generic_List_1_UnityEngine_Color__inColors__System_Int32_start__System_Int32_length__UnityEngine_Rendering_MeshUpdateFlags_flags = 42219904; // System.Void SetColors(System.Collections.Generic.List`1<UnityEngine.Color> inColors, System.Int32 start, System.Int32 length, UnityEngine.Rendering.MeshUpdateFlags flags)
constexpr auto SetColors_UnityEngine_Color___inColors = 42220032; // System.Void SetColors(UnityEngine.Color[] inColors)
constexpr auto SetColors_UnityEngine_Color___inColors__System_Int32_start__System_Int32_length = 42220272; // System.Void SetColors(UnityEngine.Color[] inColors, System.Int32 start, System.Int32 length)
constexpr auto SetColors_UnityEngine_Color___inColors__System_Int32_start__System_Int32_length__UnityEngine_Rendering_MeshUpdateFlags_flags = 42220144; // System.Void SetColors(UnityEngine.Color[] inColors, System.Int32 start, System.Int32 length, UnityEngine.Rendering.MeshUpdateFlags flags)
constexpr auto GetColors_System_Collections_Generic_List_1_UnityEngine_Color32__colors = 42212544; // System.Void GetColors(System.Collections.Generic.List`1<UnityEngine.Color32> colors)
constexpr auto SetColors_System_Collections_Generic_List_1_UnityEngine_Color32__inColors = 42219744; // System.Void SetColors(System.Collections.Generic.List`1<UnityEngine.Color32> inColors)
constexpr auto SetColors_System_Collections_Generic_List_1_UnityEngine_Color32__inColors__System_Int32_start__System_Int32_length = 42220384; // System.Void SetColors(System.Collections.Generic.List`1<UnityEngine.Color32> inColors, System.Int32 start, System.Int32 length)
constexpr auto SetColors_System_Collections_Generic_List_1_UnityEngine_Color32__inColors__System_Int32_start__System_Int32_length__UnityEngine_Rendering_MeshUpdateFlags_flags = 42219472; // System.Void SetColors(System.Collections.Generic.List`1<UnityEngine.Color32> inColors, System.Int32 start, System.Int32 length, UnityEngine.Rendering.MeshUpdateFlags flags)
constexpr auto System_Void_UnityEngine_Mesh_SetUvsImpl_System_Object__System_Int32_uvIndex__System_Int32_dim__System_Collections_Generic_List_1_T__uvs__System_Int32_start__System_Int32_length__UnityEngine_Rendering_MeshUpdateFlags_flags = 18783504; // System.Void UnityEngine.Mesh.SetUvsImpl<System.Object>
constexpr auto SetUVs_System_Int32_channel__System_Collections_Generic_List_1_UnityEngine_Vector2__uvs = 42226128; // System.Void SetUVs(System.Int32 channel, System.Collections.Generic.List`1<UnityEngine.Vector2> uvs)
constexpr auto SetUVs_System_Int32_channel__System_Collections_Generic_List_1_UnityEngine_Vector4__uvs = 42226592; // System.Void SetUVs(System.Int32 channel, System.Collections.Generic.List`1<UnityEngine.Vector4> uvs)
constexpr auto SetUVs_System_Int32_channel__System_Collections_Generic_List_1_UnityEngine_Vector2__uvs__System_Int32_start__System_Int32_length = 42226448; // System.Void SetUVs(System.Int32 channel, System.Collections.Generic.List`1<UnityEngine.Vector2> uvs, System.Int32 start, System.Int32 length)
constexpr auto SetUVs_System_Int32_channel__System_Collections_Generic_List_1_UnityEngine_Vector2__uvs__System_Int32_start__System_Int32_length__UnityEngine_Rendering_MeshUpdateFlags_flags = 42226768; // System.Void SetUVs(System.Int32 channel, System.Collections.Generic.List`1<UnityEngine.Vector2> uvs, System.Int32 start, System.Int32 length, UnityEngine.Rendering.MeshUpdateFlags flags)
constexpr auto SetUVs_System_Int32_channel__System_Collections_Generic_List_1_UnityEngine_Vector4__uvs__System_Int32_start__System_Int32_length = 42226304; // System.Void SetUVs(System.Int32 channel, System.Collections.Generic.List`1<UnityEngine.Vector4> uvs, System.Int32 start, System.Int32 length)
constexpr auto SetUVs_System_Int32_channel__System_Collections_Generic_List_1_UnityEngine_Vector4__uvs__System_Int32_start__System_Int32_length__UnityEngine_Rendering_MeshUpdateFlags_flags = 42225984; // System.Void SetUVs(System.Int32 channel, System.Collections.Generic.List`1<UnityEngine.Vector4> uvs, System.Int32 start, System.Int32 length, UnityEngine.Rendering.MeshUpdateFlags flags)
constexpr auto System_Void_UnityEngine_Mesh_SetUVs_Unity_Mathematics_float2__System_Int32_channel__Unity_Collections_NativeArray_1_T__uvs = 18782800; // System.Void UnityEngine.Mesh.SetUVs<Unity.Mathematics.float2>
constexpr auto System_Void_UnityEngine_Mesh_SetUVs_Unity_Mathematics_float2__System_Int32_channel__Unity_Collections_NativeArray_1_T__uvs__System_Int32_start__System_Int32_length = 18783424; // System.Void UnityEngine.Mesh.SetUVs<Unity.Mathematics.float2>
constexpr auto System_Void_UnityEngine_Mesh_SetUVs_Unity_Mathematics_float2__System_Int32_channel__Unity_Collections_NativeArray_1_T__uvs__System_Int32_start__System_Int32_length__UnityEngine_Rendering_MeshUpdateFlags_flags = 18782864; // System.Void UnityEngine.Mesh.SetUVs<Unity.Mathematics.float2>
constexpr auto System_Void_UnityEngine_Mesh_GetUVsImpl_System_Object__System_Int32_uvIndex__System_Collections_Generic_List_1_T__uvs__System_Int32_dim = 18781472; // System.Void UnityEngine.Mesh.GetUVsImpl<System.Object>
constexpr auto GetUVs_System_Int32_channel__System_Collections_Generic_List_1_UnityEngine_Vector4__uvs = 42216192; // System.Void GetUVs(System.Int32 channel, System.Collections.Generic.List`1<UnityEngine.Vector4> uvs)
constexpr auto SetVertexBufferParams_System_Int32_vertexCount__UnityEngine_Rendering_VertexAttributeDescriptor___attributes = 42226912; // System.Void SetVertexBufferParams(System.Int32 vertexCount, UnityEngine.Rendering.VertexAttributeDescriptor[] attributes)
constexpr auto System_Void_UnityEngine_Mesh_SetVertexBufferData_FoliageGridMeshData_FoliageVertex__System_Collections_Generic_List_1_T__data__System_Int32_dataStart__System_Int32_meshBufferStart__System_Int32_count__System_Int32_stream___0__UnityEngine_Rendering_MeshUpdateFlags_flags___0 = 18784176; // System.Void UnityEngine.Mesh.SetVertexBufferData<FoliageGridMeshData/FoliageVertex>
constexpr auto GetVertexBuffer_System_Int32_index = 42216496; // UnityEngine.GraphicsBuffer GetVertexBuffer(System.Int32 index)
constexpr auto GetIndexBuffer = 42212864; // UnityEngine.GraphicsBuffer GetIndexBuffer()
constexpr auto PrintErrorCantAccessIndices = 42217680; // System.Void PrintErrorCantAccessIndices()
constexpr auto CheckCanAccessSubmesh_System_Int32_submesh__System_Boolean_errorAboutTriangles = 42210720; // System.Boolean CheckCanAccessSubmesh(System.Int32 submesh, System.Boolean errorAboutTriangles)
constexpr auto CheckCanAccessSubmeshTriangles_System_Int32_submesh = 42210704; // System.Boolean CheckCanAccessSubmeshTriangles(System.Int32 submesh)
constexpr auto CheckCanAccessSubmeshIndices_System_Int32_submesh = 42210688; // System.Boolean CheckCanAccessSubmeshIndices(System.Int32 submesh)
constexpr auto get_triangles = 42228608; // System.Int32[] get_triangles()
constexpr auto set_triangles_System_Int32___value = 42230048; // System.Void set_triangles(System.Int32[] value)
constexpr auto GetTriangles_System_Int32_submesh = 42215744; // System.Int32[] GetTriangles(System.Int32 submesh)
constexpr auto GetTriangles_System_Int32_submesh__System_Boolean_applyBaseVertex = 42215888; // System.Int32[] GetTriangles(System.Int32 submesh, System.Boolean applyBaseVertex)
constexpr auto GetIndices_System_Int32_submesh = 42213776; // System.Int32[] GetIndices(System.Int32 submesh)
constexpr auto GetIndices_System_Int32_submesh__System_Boolean_applyBaseVertex = 42214544; // System.Int32[] GetIndices(System.Int32 submesh, System.Boolean applyBaseVertex)
constexpr auto GetIndices_System_Collections_Generic_List_1_System_Int32__indices__System_Int32_submesh = 42213920; // System.Void GetIndices(System.Collections.Generic.List`1<System.Int32> indices, System.Int32 submesh)
constexpr auto GetIndices_System_Collections_Generic_List_1_System_Int32__indices__System_Int32_submesh__System_Boolean_applyBaseVertex = 42213952; // System.Void GetIndices(System.Collections.Generic.List`1<System.Int32> indices, System.Int32 submesh, System.Boolean applyBaseVertex)
constexpr auto GetIndexStart_System_Int32_submesh = 42213376; // System.UInt32 GetIndexStart(System.Int32 submesh)
constexpr auto GetIndexCount_System_Int32_submesh = 42213120; // System.UInt32 GetIndexCount(System.Int32 submesh)
constexpr auto GetBaseVertex_System_Int32_submesh = 42212288; // System.UInt32 GetBaseVertex(System.Int32 submesh)
constexpr auto CheckIndicesArrayRange_System_Int32_valuesLength__System_Int32_start__System_Int32_length = 42211040; // System.Void CheckIndicesArrayRange(System.Int32 valuesLength, System.Int32 start, System.Int32 length)
constexpr auto SetTrianglesImpl_System_Int32_submesh__UnityEngine_Rendering_IndexFormat_indicesFormat__System_Array_triangles__System_Int32_trianglesArrayLength__System_Int32_start__System_Int32_length__System_Boolean_calculateBounds__System_Int32_baseVertex = 42224608; // System.Void SetTrianglesImpl(System.Int32 submesh, UnityEngine.Rendering.IndexFormat indicesFormat, System.Array triangles, System.Int32 trianglesArrayLength, System.Int32 start, System.Int32 length, System.Boolean calculateBounds, System.Int32 baseVertex)
constexpr auto SetTriangles_System_Int32___triangles__System_Int32_submesh = 42225680; // System.Void SetTriangles(System.Int32[] triangles, System.Int32 submesh)
constexpr auto SetTriangles_System_Int32___triangles__System_Int32_submesh__System_Boolean_calculateBounds__System_Int32_baseVertex = 42225024; // System.Void SetTriangles(System.Int32[] triangles, System.Int32 submesh, System.Boolean calculateBounds, System.Int32 baseVertex)
constexpr auto SetTriangles_System_Int32___triangles__System_Int32_trianglesStart__System_Int32_trianglesLength__System_Int32_submesh__System_Boolean_calculateBounds___True__System_Int32_baseVertex___0 = 42225824; // System.Void SetTriangles(System.Int32[] triangles, System.Int32 trianglesStart, System.Int32 trianglesLength, System.Int32 submesh, System.Boolean calculateBounds = True, System.Int32 baseVertex = 0)
constexpr auto SetTriangles_System_Collections_Generic_List_1_System_Int32__triangles__System_Int32_submesh = 42225440; // System.Void SetTriangles(System.Collections.Generic.List`1<System.Int32> triangles, System.Int32 submesh)
constexpr auto SetTriangles_System_Collections_Generic_List_1_System_Int32__triangles__System_Int32_submesh__System_Boolean_calculateBounds__System_Int32_baseVertex = 42225200; // System.Void SetTriangles(System.Collections.Generic.List`1<System.Int32> triangles, System.Int32 submesh, System.Boolean calculateBounds, System.Int32 baseVertex)
constexpr auto SetTriangles_System_Collections_Generic_List_1_System_Int32__triangles__System_Int32_trianglesStart__System_Int32_trianglesLength__System_Int32_submesh__System_Boolean_calculateBounds___True__System_Int32_baseVertex___0 = 42224800; // System.Void SetTriangles(System.Collections.Generic.List`1<System.Int32> triangles, System.Int32 trianglesStart, System.Int32 trianglesLength, System.Int32 submesh, System.Boolean calculateBounds = True, System.Int32 baseVertex = 0)
constexpr auto SetIndices_System_Int32___indices__UnityEngine_MeshTopology_topology__System_Int32_submesh = 42221008; // System.Void SetIndices(System.Int32[] indices, UnityEngine.MeshTopology topology, System.Int32 submesh)
constexpr auto SetIndices_System_Int32___indices__UnityEngine_MeshTopology_topology__System_Int32_submesh__System_Boolean_calculateBounds = 42221840; // System.Void SetIndices(System.Int32[] indices, UnityEngine.MeshTopology topology, System.Int32 submesh, System.Boolean calculateBounds)
constexpr auto SetIndices_System_Int32___indices__UnityEngine_MeshTopology_topology__System_Int32_submesh__System_Boolean_calculateBounds__System_Int32_baseVertex = 42221616; // System.Void SetIndices(System.Int32[] indices, UnityEngine.MeshTopology topology, System.Int32 submesh, System.Boolean calculateBounds, System.Int32 baseVertex)
constexpr auto SetIndices_System_Int32___indices__System_Int32_indicesStart__System_Int32_indicesLength__UnityEngine_MeshTopology_topology__System_Int32_submesh__System_Boolean_calculateBounds___True__System_Int32_baseVertex___0 = 42220800; // System.Void SetIndices(System.Int32[] indices, System.Int32 indicesStart, System.Int32 indicesLength, UnityEngine.MeshTopology topology, System.Int32 submesh, System.Boolean calculateBounds = True, System.Int32 baseVertex = 0)
constexpr auto SetIndices_System_Collections_Generic_List_1_System_Int32__indices__UnityEngine_MeshTopology_topology__System_Int32_submesh__System_Boolean_calculateBounds___True__System_Int32_baseVertex___0 = 42221040; // System.Void SetIndices(System.Collections.Generic.List`1<System.Int32> indices, UnityEngine.MeshTopology topology, System.Int32 submesh, System.Boolean calculateBounds = True, System.Int32 baseVertex = 0)
constexpr auto SetIndices_System_Collections_Generic_List_1_System_Int32__indices__System_Int32_indicesStart__System_Int32_indicesLength__UnityEngine_MeshTopology_topology__System_Int32_submesh__System_Boolean_calculateBounds___True__System_Int32_baseVertex___0 = 42221344; // System.Void SetIndices(System.Collections.Generic.List`1<System.Int32> indices, System.Int32 indicesStart, System.Int32 indicesLength, UnityEngine.MeshTopology topology, System.Int32 submesh, System.Boolean calculateBounds = True, System.Int32 baseVertex = 0)
constexpr auto get_boneWeights = 42212480; // UnityEngine.BoneWeight[] get_boneWeights()
constexpr auto set_boneWeights_UnityEngine_BoneWeight___value = 42219392; // System.Void set_boneWeights(UnityEngine.BoneWeight[] value)
constexpr auto Clear = 42211776; // System.Void Clear()
constexpr auto RecalculateBounds = 42217872; // System.Void RecalculateBounds()
constexpr auto RecalculateNormals = 42218368; // System.Void RecalculateNormals()
constexpr auto RecalculateTangents = 42218864; // System.Void RecalculateTangents()
constexpr auto RecalculateBounds_UnityEngine_Rendering_MeshUpdateFlags_flags = 42218080; // System.Void RecalculateBounds(UnityEngine.Rendering.MeshUpdateFlags flags)
constexpr auto RecalculateNormals_UnityEngine_Rendering_MeshUpdateFlags_flags = 42218576; // System.Void RecalculateNormals(UnityEngine.Rendering.MeshUpdateFlags flags)
constexpr auto RecalculateTangents_UnityEngine_Rendering_MeshUpdateFlags_flags = 42219072; // System.Void RecalculateTangents(UnityEngine.Rendering.MeshUpdateFlags flags)
constexpr auto MarkDynamic = 42217232; // System.Void MarkDynamic()
constexpr auto UploadMeshData_System_Boolean_markNoLongerReadable = 42227488; // System.Void UploadMeshData(System.Boolean markNoLongerReadable)
constexpr auto Optimize = 42217408; // System.Void Optimize()
constexpr auto GetTopology_System_Int32_submesh = 42215440; // UnityEngine.MeshTopology GetTopology(System.Int32 submesh)
constexpr auto GetSubMesh_Injected_System_Int32_index__out_UnityEngine_Rendering_SubMeshDescriptor_ret = 42214944; // System.Void GetSubMesh_Injected(System.Int32 index, out UnityEngine.Rendering.SubMeshDescriptor ret)
constexpr auto get_bounds_Injected_out_UnityEngine_Bounds_ret = 42227840; // System.Void get_bounds_Injected(out UnityEngine.Bounds ret)
constexpr auto set_bounds_Injected_UnityEngine_Bounds_value = 42229296; // System.Void set_bounds_Injected(UnityEngine.Bounds value)
}
namespace StaticMethods
{
constexpr auto Internal_Create_UnityEngine_Mesh_mono = 42217104; // System.Void Internal_Create(UnityEngine.Mesh mono)
constexpr auto GetUVChannel_System_Int32_uvIndex = 42216048; // UnityEngine.Rendering.VertexAttribute GetUVChannel(System.Int32 uvIndex)
constexpr auto DefaultDimensionForChannel_UnityEngine_Rendering_VertexAttribute_channel = 42211840; // System.Int32 DefaultDimensionForChannel(UnityEngine.Rendering.VertexAttribute channel)
}
}
namespace UnityEngine_MeshRenderer
{
namespace Methods
{
constexpr auto DontStripMeshRenderer = 3694560; // System.Void DontStripMeshRenderer()
}
}
namespace UnityEngine_Material
{
namespace Methods
{
constexpr auto _ctor_UnityEngine_Shader_shader = 42208448; // System.Void .ctor(UnityEngine.Shader shader)
constexpr auto _ctor_UnityEngine_Material_source = 42208688; // System.Void .ctor(UnityEngine.Material source)
constexpr auto _ctor_System_String_contents = 42208576; // System.Void .ctor(System.String contents)
constexpr auto get_shader = 42209440; // UnityEngine.Shader get_shader()
constexpr auto set_shader_UnityEngine_Shader_value = 42210080; // System.Void set_shader(UnityEngine.Shader value)
constexpr auto get_color = 42208816; // UnityEngine.Color get_color()
constexpr auto set_color_UnityEngine_Color_value = 42209504; // System.Void set_color(UnityEngine.Color value)
constexpr auto get_mainTexture = 42209120; // UnityEngine.Texture get_mainTexture()
constexpr auto set_mainTexture_UnityEngine_Texture_value = 42209808; // System.Void set_mainTexture(UnityEngine.Texture value)
constexpr auto GetFirstPropertyNameIdByAttribute_UnityEngine_Rendering_ShaderPropertyFlags_attributeFlag = 42203232; // System.Int32 GetFirstPropertyNameIdByAttribute(UnityEngine.Rendering.ShaderPropertyFlags attributeFlag)
constexpr auto HasProperty_System_Int32_nameID = 42204496; // System.Boolean HasProperty(System.Int32 nameID)
constexpr auto HasProperty_System_String_name = 42204560; // System.Boolean HasProperty(System.String name)
constexpr auto HasTextureImpl_System_Int32_name = 42204672; // System.Boolean HasTextureImpl(System.Int32 name)
constexpr auto HasTexture_System_String_name = 42204736; // System.Boolean HasTexture(System.String name)
constexpr auto get_renderQueue = 42209376; // System.Int32 get_renderQueue()
constexpr auto set_renderQueue_System_Int32_value = 42210016; // System.Void set_renderQueue(System.Int32 value)
constexpr auto EnableKeyword_System_String_keyword = 42202624; // System.Void EnableKeyword(System.String keyword)
constexpr auto DisableKeyword_System_String_keyword = 42202544; // System.Void DisableKeyword(System.String keyword)
constexpr auto IsKeywordEnabled_System_String_keyword = 42204848; // System.Boolean IsKeywordEnabled(System.String keyword)
constexpr auto get_enableInstancing = 42209056; // System.Boolean get_enableInstancing()
constexpr auto set_enableInstancing_System_Boolean_value = 42209728; // System.Void set_enableInstancing(System.Boolean value)
constexpr auto get_passCount = 42209312; // System.Int32 get_passCount()
constexpr auto GetShaderPassEnabled_System_String_passName = 42203600; // System.Boolean GetShaderPassEnabled(System.String passName)
constexpr auto GetPassName_System_Int32_pass = 42203472; // System.String GetPassName(System.Int32 pass)
constexpr auto FindPass_System_String_passName = 42202704; // System.Int32 FindPass(System.String passName)
constexpr auto SetOverrideTag_System_String_tag__System_String_val = 42207056; // System.Void SetOverrideTag(System.String tag, System.String val)
constexpr auto GetTagImpl_System_String_tag__System_Boolean_currentSubShaderOnly__System_String_defaultValue = 42203680; // System.String GetTagImpl(System.String tag, System.Boolean currentSubShaderOnly, System.String defaultValue)
constexpr auto GetTag_System_String_tag__System_Boolean_searchFallbacks__System_String_defaultValue = 42203936; // System.String GetTag(System.String tag, System.Boolean searchFallbacks, System.String defaultValue)
constexpr auto GetTag_System_String_tag__System_Boolean_searchFallbacks = 42203792; // System.String GetTag(System.String tag, System.Boolean searchFallbacks)
constexpr auto SetPass_System_Int32_pass = 42207152; // System.Boolean SetPass(System.Int32 pass)
constexpr auto CopyPropertiesFromMaterial_UnityEngine_Material_mat = 42202240; // System.Void CopyPropertiesFromMaterial(UnityEngine.Material mat)
constexpr auto GetShaderKeywords = 42203536; // System.String[] GetShaderKeywords()
constexpr auto SetShaderKeywords_System_String___names = 42207216; // System.Void SetShaderKeywords(System.String[] names)
constexpr auto get_shaderKeywords = 42203536; // System.String[] get_shaderKeywords()
constexpr auto set_shaderKeywords_System_String___value = 42207216; // System.Void set_shaderKeywords(System.String[] value)
constexpr auto SetFloatImpl_System_Int32_name__System_Single_value = 42206192; // System.Void SetFloatImpl(System.Int32 name, System.Single value)
constexpr auto SetColorImpl_System_Int32_name__UnityEngine_Color_value = 42205216; // System.Void SetColorImpl(System.Int32 name, UnityEngine.Color value)
constexpr auto SetMatrixImpl_System_Int32_name__UnityEngine_Matrix4x4_value = 42206704; // System.Void SetMatrixImpl(System.Int32 name, UnityEngine.Matrix4x4 value)
constexpr auto SetTextureImpl_System_Int32_name__UnityEngine_Texture_value = 42207296; // System.Void SetTextureImpl(System.Int32 name, UnityEngine.Texture value)
constexpr auto SetBufferImpl_System_Int32_name__UnityEngine_ComputeBuffer_value = 42204928; // System.Void SetBufferImpl(System.Int32 name, UnityEngine.ComputeBuffer value)
constexpr auto GetFloatImpl_System_Int32_name = 42203296; // System.Single GetFloatImpl(System.Int32 name)
constexpr auto GetColorImpl_System_Int32_name = 42202864; // UnityEngine.Color GetColorImpl(System.Int32 name)
constexpr auto GetTextureImpl_System_Int32_name = 42204048; // UnityEngine.Texture GetTextureImpl(System.Int32 name)
constexpr auto SetFloatArrayImpl_System_Int32_name__System_Single___values__System_Int32_count = 42205520; // System.Void SetFloatArrayImpl(System.Int32 name, System.Single[] values, System.Int32 count)
constexpr auto SetTextureOffsetImpl_System_Int32_name__UnityEngine_Vector2_offset = 42207456; // System.Void SetTextureOffsetImpl(System.Int32 name, UnityEngine.Vector2 offset)
constexpr auto SetTextureScaleImpl_System_Int32_name__UnityEngine_Vector2_scale = 42207760; // System.Void SetTextureScaleImpl(System.Int32 name, UnityEngine.Vector2 scale)
constexpr auto SetFloatArray_System_Int32_name__System_Single___values__System_Int32_count = 42205824; // System.Void SetFloatArray(System.Int32 name, System.Single[] values, System.Int32 count)
constexpr auto SetInt_System_String_name__System_Int32_value = 42206400; // System.Void SetInt(System.String name, System.Int32 value)
constexpr auto SetInt_System_Int32_nameID__System_Int32_value = 42206528; // System.Void SetInt(System.Int32 nameID, System.Int32 value)
constexpr auto SetFloat_System_String_name__System_Single_value = 42206272; // System.Void SetFloat(System.String name, System.Single value)
constexpr auto SetFloat_System_Int32_nameID__System_Single_value = 42206192; // System.Void SetFloat(System.Int32 nameID, System.Single value)
constexpr auto SetColor_System_String_name__UnityEngine_Color_value = 42205376; // System.Void SetColor(System.String name, UnityEngine.Color value)
constexpr auto SetColor_System_Int32_nameID__UnityEngine_Color_value = 42205296; // System.Void SetColor(System.Int32 nameID, UnityEngine.Color value)
constexpr auto SetVector_System_String_name__UnityEngine_Vector4_value = 42208256; // System.Void SetVector(System.String name, UnityEngine.Vector4 value)
constexpr auto SetVector_System_Int32_nameID__UnityEngine_Vector4_value = 42208112; // System.Void SetVector(System.Int32 nameID, UnityEngine.Vector4 value)
constexpr auto SetMatrix_System_String_name__UnityEngine_Matrix4x4_value = 42206784; // System.Void SetMatrix(System.String name, UnityEngine.Matrix4x4 value)
constexpr auto SetMatrix_System_Int32_nameID__UnityEngine_Matrix4x4_value = 42206944; // System.Void SetMatrix(System.Int32 nameID, UnityEngine.Matrix4x4 value)
constexpr auto SetTexture_System_String_name__UnityEngine_Texture_value = 42207984; // System.Void SetTexture(System.String name, UnityEngine.Texture value)
constexpr auto SetTexture_System_Int32_nameID__UnityEngine_Texture_value = 42207296; // System.Void SetTexture(System.Int32 nameID, UnityEngine.Texture value)
constexpr auto SetBuffer_System_String_name__UnityEngine_ComputeBuffer_value = 42205008; // System.Void SetBuffer(System.String name, UnityEngine.ComputeBuffer value)
constexpr auto SetFloatArray_System_Int32_nameID__System_Single___values = 42205616; // System.Void SetFloatArray(System.Int32 nameID, System.Single[] values)
constexpr auto GetFloat_System_String_name = 42203360; // System.Single GetFloat(System.String name)
constexpr auto GetFloat_System_Int32_nameID = 42203296; // System.Single GetFloat(System.Int32 nameID)
constexpr auto GetColor_System_String_name = 42202960; // UnityEngine.Color GetColor(System.String name)
constexpr auto GetColor_System_Int32_nameID = 42203120; // UnityEngine.Color GetColor(System.Int32 nameID)
constexpr auto GetVector_System_String_name = 42204224; // UnityEngine.Vector4 GetVector(System.String name)
constexpr auto GetVector_System_Int32_nameID = 42204384; // UnityEngine.Vector4 GetVector(System.Int32 nameID)
constexpr auto GetTexture_System_String_name = 42204112; // UnityEngine.Texture GetTexture(System.String name)
constexpr auto GetTexture_System_Int32_nameID = 42204048; // UnityEngine.Texture GetTexture(System.Int32 nameID)
constexpr auto SetTextureOffset_System_String_name__UnityEngine_Vector2_value = 42207536; // System.Void SetTextureOffset(System.String name, UnityEngine.Vector2 value)
constexpr auto SetTextureScale_System_String_name__UnityEngine_Vector2_value = 42207840; // System.Void SetTextureScale(System.String name, UnityEngine.Vector2 value)
constexpr auto SetColorImpl_Injected_System_Int32_name__UnityEngine_Color_value = 42205136; // System.Void SetColorImpl_Injected(System.Int32 name, UnityEngine.Color value)
constexpr auto SetMatrixImpl_Injected_System_Int32_name__UnityEngine_Matrix4x4_value = 42206624; // System.Void SetMatrixImpl_Injected(System.Int32 name, UnityEngine.Matrix4x4 value)
constexpr auto GetColorImpl_Injected_System_Int32_name__out_UnityEngine_Color_ret = 42202784; // System.Void GetColorImpl_Injected(System.Int32 name, out UnityEngine.Color ret)
constexpr auto SetTextureOffsetImpl_Injected_System_Int32_name__UnityEngine_Vector2_offset = 42207376; // System.Void SetTextureOffsetImpl_Injected(System.Int32 name, UnityEngine.Vector2 offset)
constexpr auto SetTextureScaleImpl_Injected_System_Int32_name__UnityEngine_Vector2_scale = 42207680; // System.Void SetTextureScaleImpl_Injected(System.Int32 name, UnityEngine.Vector2 scale)
}
namespace StaticMethods
{
constexpr auto CreateWithShader_UnityEngine_Material_self__UnityEngine_Shader_shader = 42202400; // System.Void CreateWithShader(UnityEngine.Material self, UnityEngine.Shader shader)
constexpr auto CreateWithMaterial_UnityEngine_Material_self__UnityEngine_Material_source = 42202320; // System.Void CreateWithMaterial(UnityEngine.Material self, UnityEngine.Material source)
constexpr auto CreateWithString_UnityEngine_Material_self = 42202480; // System.Void CreateWithString(UnityEngine.Material self)
}
}
namespace UnityEngine_Shader
{
namespace Methods
{
constexpr auto get_isSupported = 42265152; // System.Boolean get_isSupported()
constexpr auto get_passCount = 42265216; // System.Int32 get_passCount()
constexpr auto FindPassTagValue_System_Int32_passIndex__UnityEngine_Rendering_ShaderTagId_tagName = 42261760; // UnityEngine.Rendering.ShaderTagId FindPassTagValue(System.Int32 passIndex, UnityEngine.Rendering.ShaderTagId tagName)
constexpr auto Internal_FindPassTagValue_System_Int32_passIndex__System_Int32_tagName = 42262800; // System.Int32 Internal_FindPassTagValue(System.Int32 passIndex, System.Int32 tagName)
constexpr auto _ctor = 42265024; // System.Void .ctor()
constexpr auto GetPropertyCount = 42262128; // System.Int32 GetPropertyCount()
constexpr auto GetPropertyName_System_Int32_propertyIndex = 42262256; // System.String GetPropertyName(System.Int32 propertyIndex)
constexpr auto GetPropertyType_System_Int32_propertyIndex = 42262528; // UnityEngine.Rendering.ShaderPropertyType GetPropertyType(System.Int32 propertyIndex)
}
namespace StaticMethods
{
constexpr auto Find_System_String_name = 42262016; // UnityEngine.Shader Find(System.String name)
constexpr auto get_globalMaximumLOD = 42265104; // System.Int32 get_globalMaximumLOD()
constexpr auto set_globalMaximumLOD_System_Int32_value = 42265280; // System.Void set_globalMaximumLOD(System.Int32 value)
constexpr auto EnableKeyword_System_String_keyword = 42261632; // System.Void EnableKeyword(System.String keyword)
constexpr auto DisableKeyword_System_String_keyword = 42261376; // System.Void DisableKeyword(System.String keyword)
constexpr auto IsKeywordEnabled_System_String_keyword = 42262880; // System.Boolean IsKeywordEnabled(System.String keyword)
constexpr auto EnableKeywordFast_UnityEngine_Rendering_GlobalKeyword_keyword = 42261568; // System.Void EnableKeywordFast(UnityEngine.Rendering.GlobalKeyword keyword)
constexpr auto DisableKeywordFast_UnityEngine_Rendering_GlobalKeyword_keyword = 42261312; // System.Void DisableKeywordFast(UnityEngine.Rendering.GlobalKeyword keyword)
constexpr auto EnableKeyword_UnityEngine_Rendering_GlobalKeyword_keyword = 42261696; // System.Void EnableKeyword(UnityEngine.Rendering.GlobalKeyword keyword)
constexpr auto DisableKeyword_UnityEngine_Rendering_GlobalKeyword_keyword = 42261440; // System.Void DisableKeyword(UnityEngine.Rendering.GlobalKeyword keyword)
constexpr auto TagToID_System_String_name = 42264960; // System.Int32 TagToID(System.String name)
constexpr auto IDToTag_System_Int32_name = 42262736; // System.String IDToTag(System.Int32 name)
constexpr auto PropertyToID_System_String_name = 42262944; // System.Int32 PropertyToID(System.String name)
constexpr auto SetGlobalFloatImpl_System_Int32_name__System_Single_value = 42263136; // System.Void SetGlobalFloatImpl(System.Int32 name, System.Single value)
constexpr auto SetGlobalVectorImpl_System_Int32_name__UnityEngine_Vector4_value = 42264704; // System.Void SetGlobalVectorImpl(System.Int32 name, UnityEngine.Vector4 value)
constexpr auto SetGlobalMatrixImpl_System_Int32_name__UnityEngine_Matrix4x4_value = 42263504; // System.Void SetGlobalMatrixImpl(System.Int32 name, UnityEngine.Matrix4x4 value)
constexpr auto SetGlobalTextureImpl_System_Int32_name__UnityEngine_Texture_value = 42263808; // System.Void SetGlobalTextureImpl(System.Int32 name, UnityEngine.Texture value)
constexpr auto SetGlobalVectorArrayImpl_System_Int32_name__UnityEngine_Vector4___values__System_Int32_count = 42263984; // System.Void SetGlobalVectorArrayImpl(System.Int32 name, UnityEngine.Vector4[] values, System.Int32 count)
constexpr auto SetGlobalVectorArray_System_Int32_name__UnityEngine_Vector4___values__System_Int32_count = 42264288; // System.Void SetGlobalVectorArray(System.Int32 name, UnityEngine.Vector4[] values, System.Int32 count)
constexpr auto SetGlobalInt_System_String_name__System_Int32_value = 42263328; // System.Void SetGlobalInt(System.String name, System.Int32 value)
constexpr auto SetGlobalFloat_System_String_name__System_Single_value = 42263216; // System.Void SetGlobalFloat(System.String name, System.Single value)
constexpr auto SetGlobalFloat_System_Int32_nameID__System_Single_value = 42263136; // System.Void SetGlobalFloat(System.Int32 nameID, System.Single value)
constexpr auto SetGlobalVector_System_String_name__UnityEngine_Vector4_value = 42264768; // System.Void SetGlobalVector(System.String name, UnityEngine.Vector4 value)
constexpr auto SetGlobalVector_System_Int32_nameID__UnityEngine_Vector4_value = 42264896; // System.Void SetGlobalVector(System.Int32 nameID, UnityEngine.Vector4 value)
constexpr auto SetGlobalColor_System_Int32_nameID__UnityEngine_Color_value = 42263008; // System.Void SetGlobalColor(System.Int32 nameID, UnityEngine.Color value)
constexpr auto SetGlobalMatrix_System_String_name__UnityEngine_Matrix4x4_value = 42263568; // System.Void SetGlobalMatrix(System.String name, UnityEngine.Matrix4x4 value)
constexpr auto SetGlobalMatrix_System_Int32_nameID__UnityEngine_Matrix4x4_value = 42263712; // System.Void SetGlobalMatrix(System.Int32 nameID, UnityEngine.Matrix4x4 value)
constexpr auto SetGlobalTexture_System_String_name__UnityEngine_Texture_value = 42263872; // System.Void SetGlobalTexture(System.String name, UnityEngine.Texture value)
constexpr auto SetGlobalTexture_System_Int32_nameID__UnityEngine_Texture_value = 42263808; // System.Void SetGlobalTexture(System.Int32 nameID, UnityEngine.Texture value)
constexpr auto SetGlobalVectorArray_System_String_name__UnityEngine_Vector4___values = 42264064; // System.Void SetGlobalVectorArray(System.String name, UnityEngine.Vector4[] values)
constexpr auto GetPropertyName_UnityEngine_Shader_shader__System_Int32_propertyIndex = 42262192; // System.String GetPropertyName(UnityEngine.Shader shader, System.Int32 propertyIndex)
constexpr auto GetPropertyType_UnityEngine_Shader_shader__System_Int32_propertyIndex = 42262464; // UnityEngine.Rendering.ShaderPropertyType GetPropertyType(UnityEngine.Shader shader, System.Int32 propertyIndex)
constexpr auto CheckPropertyIndex_UnityEngine_Shader_s__System_Int32_propertyIndex = 42261072; // System.Void CheckPropertyIndex(UnityEngine.Shader s, System.Int32 propertyIndex)
constexpr auto EnableKeywordFast_Injected_UnityEngine_Rendering_GlobalKeyword_keyword = 42261504; // System.Void EnableKeywordFast_Injected(UnityEngine.Rendering.GlobalKeyword keyword)
constexpr auto DisableKeywordFast_Injected_UnityEngine_Rendering_GlobalKeyword_keyword = 42261248; // System.Void DisableKeywordFast_Injected(UnityEngine.Rendering.GlobalKeyword keyword)
constexpr auto SetGlobalVectorImpl_Injected_System_Int32_name__UnityEngine_Vector4_value = 42264640; // System.Void SetGlobalVectorImpl_Injected(System.Int32 name, UnityEngine.Vector4 value)
constexpr auto SetGlobalMatrixImpl_Injected_System_Int32_name__UnityEngine_Matrix4x4_value = 42263440; // System.Void SetGlobalMatrixImpl_Injected(System.Int32 name, UnityEngine.Matrix4x4 value)
}
}
namespace UnityEngine_Renderer
{
namespace Methods
{
constexpr auto set_motionVectors_System_Boolean_value = 42259728; // System.Void set_motionVectors(System.Boolean value)
constexpr auto get_bounds = 42258320; // UnityEngine.Bounds get_bounds()
constexpr auto get_localBounds = 42258688; // UnityEngine.Bounds get_localBounds()
constexpr auto set_localBounds_UnityEngine_Bounds_value = 42259584; // System.Void set_localBounds(UnityEngine.Bounds value)
constexpr auto ResetLocalBounds = 42258016; // System.Void ResetLocalBounds()
constexpr auto GetMaterial = 42257120; // UnityEngine.Material GetMaterial()
constexpr auto GetSharedMaterial = 42257424; // UnityEngine.Material GetSharedMaterial()
constexpr auto SetMaterial_UnityEngine_Material_m = 42258160; // System.Void SetMaterial(UnityEngine.Material m)
constexpr auto GetMaterialArray = 42256992; // UnityEngine.Material[] GetMaterialArray()
constexpr auto CopySharedMaterialArray_out_UnityEngine_Material___m = 42256912; // System.Void CopySharedMaterialArray(out UnityEngine.Material[] m)
constexpr auto SetMaterialArray_UnityEngine_Material___m = 42258080; // System.Void SetMaterialArray(UnityEngine.Material[] m)
constexpr auto Internal_SetPropertyBlock_UnityEngine_MaterialPropertyBlock_properties = 42257936; // System.Void Internal_SetPropertyBlock(UnityEngine.MaterialPropertyBlock properties)
constexpr auto Internal_GetPropertyBlock_UnityEngine_MaterialPropertyBlock_dest = 42257280; // System.Void Internal_GetPropertyBlock(UnityEngine.MaterialPropertyBlock dest)
constexpr auto Internal_SetPropertyBlockMaterialIndex_UnityEngine_MaterialPropertyBlock_properties__System_Int32_materialIndex = 42257840; // System.Void Internal_SetPropertyBlockMaterialIndex(UnityEngine.MaterialPropertyBlock properties, System.Int32 materialIndex)
constexpr auto Internal_GetPropertyBlockMaterialIndex_UnityEngine_MaterialPropertyBlock_dest__System_Int32_materialIndex = 42257184; // System.Void Internal_GetPropertyBlockMaterialIndex(UnityEngine.MaterialPropertyBlock dest, System.Int32 materialIndex)
constexpr auto HasPropertyBlock = 42257776; // System.Boolean HasPropertyBlock()
constexpr auto SetPropertyBlock_UnityEngine_MaterialPropertyBlock_properties = 42257936; // System.Void SetPropertyBlock(UnityEngine.MaterialPropertyBlock properties)
constexpr auto SetPropertyBlock_UnityEngine_MaterialPropertyBlock_properties__System_Int32_materialIndex = 42257840; // System.Void SetPropertyBlock(UnityEngine.MaterialPropertyBlock properties, System.Int32 materialIndex)
constexpr auto GetPropertyBlock_UnityEngine_MaterialPropertyBlock_properties = 42257280; // System.Void GetPropertyBlock(UnityEngine.MaterialPropertyBlock properties)
constexpr auto GetPropertyBlock_UnityEngine_MaterialPropertyBlock_properties__System_Int32_materialIndex = 42257184; // System.Void GetPropertyBlock(UnityEngine.MaterialPropertyBlock properties, System.Int32 materialIndex)
constexpr auto get_enabled = 42258416; // System.Boolean get_enabled()
constexpr auto set_enabled_System_Boolean_value = 42259280; // System.Void set_enabled(System.Boolean value)
constexpr auto get_isVisible = 42258480; // System.Boolean get_isVisible()
constexpr auto get_shadowCastingMode = 42259088; // UnityEngine.Rendering.ShadowCastingMode get_shadowCastingMode()
constexpr auto set_shadowCastingMode_UnityEngine_Rendering_ShadowCastingMode_value = 42259952; // System.Void set_shadowCastingMode(UnityEngine.Rendering.ShadowCastingMode value)
constexpr auto get_receiveShadows = 42259024; // System.Boolean get_receiveShadows()
constexpr auto set_receiveShadows_System_Boolean_value = 42259808; // System.Void set_receiveShadows(System.Boolean value)
constexpr auto set_forceRenderingOff_System_Boolean_value = 42259360; // System.Void set_forceRenderingOff(System.Boolean value)
constexpr auto get_motionVectorGenerationMode = 42258960; // UnityEngine.MotionVectorGenerationMode get_motionVectorGenerationMode()
constexpr auto set_motionVectorGenerationMode_UnityEngine_MotionVectorGenerationMode_value = 42259664; // System.Void set_motionVectorGenerationMode(UnityEngine.MotionVectorGenerationMode value)
constexpr auto get_lightProbeUsage = 42258544; // UnityEngine.Rendering.LightProbeUsage get_lightProbeUsage()
constexpr auto set_lightProbeUsage_UnityEngine_Rendering_LightProbeUsage_value = 42259440; // System.Void set_lightProbeUsage(UnityEngine.Rendering.LightProbeUsage value)
constexpr auto set_reflectionProbeUsage_UnityEngine_Rendering_ReflectionProbeUsage_value = 42259888; // System.Void set_reflectionProbeUsage(UnityEngine.Rendering.ReflectionProbeUsage value)
constexpr auto get_sortingLayerID = 42259152; // System.Int32 get_sortingLayerID()
constexpr auto set_sortingLayerID_System_Int32_value = 42260016; // System.Void set_sortingLayerID(System.Int32 value)
constexpr auto get_sortingOrder = 42259216; // System.Int32 get_sortingOrder()
constexpr auto set_sortingOrder_System_Int32_value = 42260080; // System.Void set_sortingOrder(System.Int32 value)
constexpr auto get_localToWorldMatrix = 42258864; // UnityEngine.Matrix4x4 get_localToWorldMatrix()
constexpr auto GetMaterialCount = 42257056; // System.Int32 GetMaterialCount()
constexpr auto GetSharedMaterialArray = 42257360; // UnityEngine.Material[] GetSharedMaterialArray()
constexpr auto get_materials = 42256992; // UnityEngine.Material[] get_materials()
constexpr auto set_materials_UnityEngine_Material___value = 42258080; // System.Void set_materials(UnityEngine.Material[] value)
constexpr auto get_material = 42257120; // UnityEngine.Material get_material()
constexpr auto set_material_UnityEngine_Material_value = 42258160; // System.Void set_material(UnityEngine.Material value)
constexpr auto get_sharedMaterial = 42257424; // UnityEngine.Material get_sharedMaterial()
constexpr auto set_sharedMaterial_UnityEngine_Material_value = 42258160; // System.Void set_sharedMaterial(UnityEngine.Material value)
constexpr auto get_sharedMaterials = 42257360; // UnityEngine.Material[] get_sharedMaterials()
constexpr auto set_sharedMaterials_UnityEngine_Material___value = 42258080; // System.Void set_sharedMaterials(UnityEngine.Material[] value)
constexpr auto GetSharedMaterials_System_Collections_Generic_List_1_UnityEngine_Material__m = 42257488; // System.Void GetSharedMaterials(System.Collections.Generic.List`1<UnityEngine.Material> m)
constexpr auto get_bounds_Injected_out_UnityEngine_Bounds_ret = 42258240; // System.Void get_bounds_Injected(out UnityEngine.Bounds ret)
constexpr auto get_localBounds_Injected_out_UnityEngine_Bounds_ret = 42258608; // System.Void get_localBounds_Injected(out UnityEngine.Bounds ret)
constexpr auto set_localBounds_Injected_UnityEngine_Bounds_value = 42259504; // System.Void set_localBounds_Injected(UnityEngine.Bounds value)
constexpr auto get_localToWorldMatrix_Injected_out_UnityEngine_Matrix4x4_ret = 42258784; // System.Void get_localToWorldMatrix_Injected(out UnityEngine.Matrix4x4 ret)
}
}
namespace UnityEngine_MaterialPropertyBlock
{
namespace Fields
{
constexpr auto m_Ptr = 0x10; // System.IntPtr
}
namespace Methods
{
constexpr auto GetTextureImpl_System_Int32_name = 42199968; // UnityEngine.Texture GetTextureImpl(System.Int32 name)
constexpr auto SetFloatImpl_System_Int32_name__System_Single_value = 42200816; // System.Void SetFloatImpl(System.Int32 name, System.Single value)
constexpr auto SetVectorImpl_System_Int32_name__UnityEngine_Vector4_value = 42201808; // System.Void SetVectorImpl(System.Int32 name, UnityEngine.Vector4 value)
constexpr auto SetColorImpl_System_Int32_name__UnityEngine_Color_value = 42200512; // System.Void SetColorImpl(System.Int32 name, UnityEngine.Color value)
constexpr auto SetMatrixImpl_System_Int32_name__UnityEngine_Matrix4x4_value = 42201328; // System.Void SetMatrixImpl(System.Int32 name, UnityEngine.Matrix4x4 value)
constexpr auto SetTextureImpl_System_Int32_name__UnityEngine_Texture_value = 42201520; // System.Void SetTextureImpl(System.Int32 name, UnityEngine.Texture value)
constexpr auto SetBufferImpl_System_Int32_name__UnityEngine_ComputeBuffer_value = 42200144; // System.Void SetBufferImpl(System.Int32 name, UnityEngine.ComputeBuffer value)
constexpr auto SetGraphicsBufferImpl_System_Int32_name__UnityEngine_GraphicsBuffer_value = 42200224; // System.Void SetGraphicsBufferImpl(System.Int32 name, UnityEngine.GraphicsBuffer value)
constexpr auto get_isEmpty = 42202176; // System.Boolean get_isEmpty()
constexpr auto Clear_System_Boolean_keepMemory = 42198480; // System.Void Clear(System.Boolean keepMemory)
constexpr auto Clear = 42198560; // System.Void Clear()
constexpr auto _ctor = 42202112; // System.Void .ctor()
constexpr auto Finalize = 42199696; // System.Void Finalize()
constexpr auto Dispose = 42199504; // System.Void Dispose()
constexpr auto SetInt_System_String_name__System_Int32_value = 42201024; // System.Void SetInt(System.String name, System.Int32 value)
constexpr auto SetInt_System_Int32_nameID__System_Int32_value = 42201152; // System.Void SetInt(System.Int32 nameID, System.Int32 value)
constexpr auto SetFloat_System_String_name__System_Single_value = 42200896; // System.Void SetFloat(System.String name, System.Single value)
constexpr auto SetFloat_System_Int32_nameID__System_Single_value = 42200816; // System.Void SetFloat(System.Int32 nameID, System.Single value)
constexpr auto SetVector_System_String_name__UnityEngine_Vector4_value = 42201968; // System.Void SetVector(System.String name, UnityEngine.Vector4 value)
constexpr auto SetVector_System_Int32_nameID__UnityEngine_Vector4_value = 42201888; // System.Void SetVector(System.Int32 nameID, UnityEngine.Vector4 value)
constexpr auto SetColor_System_String_name__UnityEngine_Color_value = 42200672; // System.Void SetColor(System.String name, UnityEngine.Color value)
constexpr auto SetColor_System_Int32_nameID__UnityEngine_Color_value = 42200592; // System.Void SetColor(System.Int32 nameID, UnityEngine.Color value)
constexpr auto SetMatrix_System_Int32_nameID__UnityEngine_Matrix4x4_value = 42201408; // System.Void SetMatrix(System.Int32 nameID, UnityEngine.Matrix4x4 value)
constexpr auto SetBuffer_System_String_name__UnityEngine_ComputeBuffer_value = 42200304; // System.Void SetBuffer(System.String name, UnityEngine.ComputeBuffer value)
constexpr auto SetBuffer_System_Int32_nameID__UnityEngine_ComputeBuffer_value = 42200144; // System.Void SetBuffer(System.Int32 nameID, UnityEngine.ComputeBuffer value)
constexpr auto SetBuffer_System_Int32_nameID__UnityEngine_GraphicsBuffer_value = 42200224; // System.Void SetBuffer(System.Int32 nameID, UnityEngine.GraphicsBuffer value)
constexpr auto SetTexture_System_String_name__UnityEngine_Texture_value = 42201600; // System.Void SetTexture(System.String name, UnityEngine.Texture value)
constexpr auto SetTexture_System_Int32_nameID__UnityEngine_Texture_value = 42201520; // System.Void SetTexture(System.Int32 nameID, UnityEngine.Texture value)
constexpr auto GetTexture_System_Int32_nameID = 42199968; // UnityEngine.Texture GetTexture(System.Int32 nameID)
constexpr auto CopySHCoefficientArraysFrom_UnityEngine_Rendering_SphericalHarmonicsL2___lightProbes = 42198624; // System.Void CopySHCoefficientArraysFrom(UnityEngine.Rendering.SphericalHarmonicsL2[] lightProbes)
constexpr auto CopySHCoefficientArraysFrom_UnityEngine_Rendering_SphericalHarmonicsL2___lightProbes__System_Int32_sourceStart__System_Int32_destStart__System_Int32_count = 42198768; // System.Void CopySHCoefficientArraysFrom(UnityEngine.Rendering.SphericalHarmonicsL2[] lightProbes, System.Int32 sourceStart, System.Int32 destStart, System.Int32 count)
constexpr auto SetVectorImpl_Injected_System_Int32_name__UnityEngine_Vector4_value = 42201728; // System.Void SetVectorImpl_Injected(System.Int32 name, UnityEngine.Vector4 value)
constexpr auto SetColorImpl_Injected_System_Int32_name__UnityEngine_Color_value = 42200432; // System.Void SetColorImpl_Injected(System.Int32 name, UnityEngine.Color value)
constexpr auto SetMatrixImpl_Injected_System_Int32_name__UnityEngine_Matrix4x4_value = 42201248; // System.Void SetMatrixImpl_Injected(System.Int32 name, UnityEngine.Matrix4x4 value)
}
namespace StaticMethods
{
constexpr auto Internal_CopySHCoefficientArraysFrom_UnityEngine_MaterialPropertyBlock_properties__UnityEngine_Rendering_SphericalHarmonicsL2___lightProbes__System_Int32_sourceStart__System_Int32_destStart__System_Int32_count = 42200032; // System.Void Internal_CopySHCoefficientArraysFrom(UnityEngine.MaterialPropertyBlock properties, UnityEngine.Rendering.SphericalHarmonicsL2[] lightProbes, System.Int32 sourceStart, System.Int32 destStart, System.Int32 count)
constexpr auto CreateImpl = 42199392; // System.IntPtr CreateImpl()
constexpr auto DestroyImpl_System_IntPtr_mpb = 42199440; // System.Void DestroyImpl(System.IntPtr mpb)
}
}
namespace UnityEngine_Screen
{
namespace StaticMethods
{
constexpr auto get_width = 42261024; // System.Int32 get_width()
constexpr auto get_height = 42260928; // System.Int32 get_height()
constexpr auto get_dpi = 42260784; // System.Single get_dpi()
constexpr auto get_currentResolution = 42260720; // UnityEngine.Resolution get_currentResolution()
constexpr auto get_fullScreen = 42260880; // System.Boolean get_fullScreen()
constexpr auto get_fullScreenMode = 42260832; // UnityEngine.FullScreenMode get_fullScreenMode()
constexpr auto SetResolution_System_Int32_width__System_Int32_height__UnityEngine_FullScreenMode_fullscreenMode__System_Int32_preferredRefreshRate = 42260560; // System.Void SetResolution(System.Int32 width, System.Int32 height, UnityEngine.FullScreenMode fullscreenMode, System.Int32 preferredRefreshRate)
constexpr auto get_resolutions = 42260976; // UnityEngine.Resolution[] get_resolutions()
constexpr auto get_currentResolution_Injected_out_UnityEngine_Resolution_ret = 42260656; // System.Void get_currentResolution_Injected(out UnityEngine.Resolution ret)
}
}
namespace UnityEngine_Bounds
{
namespace Fields
{
constexpr auto m_Center = 0x0; // UnityEngine.Vector3
constexpr auto m_Extents = 0xc; // UnityEngine.Vector3
}
namespace Methods
{
constexpr auto _ctor_UnityEngine_Vector3_center__UnityEngine_Vector3_size = 35332032; // System.Void .ctor(UnityEngine.Vector3 center, UnityEngine.Vector3 size)
constexpr auto GetHashCode = 42132048; // System.Int32 GetHashCode()
constexpr auto Equals_System_Object_other = 42131552; // System.Boolean Equals(System.Object other)
constexpr auto Equals_UnityEngine_Bounds_other = 42131376; // System.Boolean Equals(UnityEngine.Bounds other)
constexpr auto get_center = 42037872; // UnityEngine.Vector3 get_center()
constexpr auto set_center_UnityEngine_Vector3_value = 42037936; // System.Void set_center(UnityEngine.Vector3 value)
constexpr auto get_size = 42133552; // UnityEngine.Vector3 get_size()
constexpr auto set_size_UnityEngine_Vector3_value = 42134416; // System.Void set_size(UnityEngine.Vector3 value)
constexpr auto get_extents = 42037840; // UnityEngine.Vector3 get_extents()
constexpr auto set_extents_UnityEngine_Vector3_value = 42037920; // System.Void set_extents(UnityEngine.Vector3 value)
constexpr auto get_min = 42133456; // UnityEngine.Vector3 get_min()
constexpr auto set_min_UnityEngine_Vector3_value = 42134208; // System.Void set_min(UnityEngine.Vector3 value)
constexpr auto get_max = 42133360; // UnityEngine.Vector3 get_max()
constexpr auto set_max_UnityEngine_Vector3_value = 42134016; // System.Void set_max(UnityEngine.Vector3 value)
constexpr auto SetMinMax_UnityEngine_Vector3_min__UnityEngine_Vector3_max = 42132560; // System.Void SetMinMax(UnityEngine.Vector3 min, UnityEngine.Vector3 max)
constexpr auto Encapsulate_UnityEngine_Vector3_point = 42130832; // System.Void Encapsulate(UnityEngine.Vector3 point)
constexpr auto Encapsulate_UnityEngine_Bounds_bounds = 42131136; // System.Void Encapsulate(UnityEngine.Bounds bounds)
constexpr auto Expand_System_Single_amount = 42131968; // System.Void Expand(System.Single amount)
constexpr auto Expand_UnityEngine_Vector3_amount = 42131856; // System.Void Expand(UnityEngine.Vector3 amount)
constexpr auto IntersectRay_UnityEngine_Ray_ray = 42132448; // System.Boolean IntersectRay(UnityEngine.Ray ray)
constexpr auto ToString = 42133344; // System.String ToString()
constexpr auto ToString_System_String_format__System_IFormatProvider_formatProvider = 42132896; // System.String ToString(System.String format, System.IFormatProvider formatProvider)
constexpr auto Contains_UnityEngine_Vector3_point = 42130752; // System.Boolean Contains(UnityEngine.Vector3 point)
constexpr auto SqrDistance_UnityEngine_Vector3_point = 42132816; // System.Single SqrDistance(UnityEngine.Vector3 point)
constexpr auto ClosestPoint_UnityEngine_Vector3_point = 42130576; // UnityEngine.Vector3 ClosestPoint(UnityEngine.Vector3 point)
}
namespace StaticMethods
{
constexpr auto op_Equality_UnityEngine_Bounds_lhs__UnityEngine_Bounds_rhs = 42133632; // System.Boolean op_Equality(UnityEngine.Bounds lhs, UnityEngine.Bounds rhs)
constexpr auto op_Inequality_UnityEngine_Bounds_lhs__UnityEngine_Bounds_rhs = 42133824; // System.Boolean op_Inequality(UnityEngine.Bounds lhs, UnityEngine.Bounds rhs)
constexpr auto IntersectRayAABB_UnityEngine_Ray_ray__UnityEngine_Bounds_bounds__out_System_Single_dist = 42132352; // System.Boolean IntersectRayAABB(UnityEngine.Ray ray, UnityEngine.Bounds bounds, out System.Single dist)
constexpr auto Contains_Injected_UnityEngine_Bounds__unity_self__UnityEngine_Vector3_point = 42130672; // System.Boolean Contains_Injected(UnityEngine.Bounds _unity_self, UnityEngine.Vector3 point)
constexpr auto SqrDistance_Injected_UnityEngine_Bounds__unity_self__UnityEngine_Vector3_point = 42132736; // System.Single SqrDistance_Injected(UnityEngine.Bounds _unity_self, UnityEngine.Vector3 point)
constexpr auto IntersectRayAABB_Injected_UnityEngine_Ray_ray__UnityEngine_Bounds_bounds__out_System_Single_dist = 42132256; // System.Boolean IntersectRayAABB_Injected(UnityEngine.Ray ray, UnityEngine.Bounds bounds, out System.Single dist)
constexpr auto ClosestPoint_Injected_UnityEngine_Bounds__unity_self__UnityEngine_Vector3_point__out_UnityEngine_Vector3_ret = 42130480; // System.Void ClosestPoint_Injected(UnityEngine.Bounds _unity_self, UnityEngine.Vector3 point, out UnityEngine.Vector3 ret)
}
}
namespace UnityEngine_Camera
{
namespace StaticFields
{
constexpr auto onPreCull = 0x0; // UnityEngine.Camera/CameraCallback
constexpr auto onPreRender = 0x8; // UnityEngine.Camera/CameraCallback
constexpr auto onPostRender = 0x10; // UnityEngine.Camera/CameraCallback
}
namespace Methods
{
constexpr auto _ctor = 3661504; // System.Void .ctor()
constexpr auto get_nearClipPlane = 42141712; // System.Single get_nearClipPlane()
constexpr auto set_nearClipPlane_System_Single_value = 42144752; // System.Void set_nearClipPlane(System.Single value)
constexpr auto get_farClipPlane = 42141472; // System.Single get_farClipPlane()
constexpr auto set_farClipPlane_System_Single_value = 42144256; // System.Void set_farClipPlane(System.Single value)
constexpr auto get_fieldOfView = 42141536; // System.Single get_fieldOfView()
constexpr auto set_fieldOfView_System_Single_value = 42144336; // System.Void set_fieldOfView(System.Single value)
constexpr auto set_renderingPath_UnityEngine_RenderingPath_value = 42145632; // System.Void set_renderingPath(UnityEngine.RenderingPath value)
constexpr auto get_actualRenderingPath = 42140624; // UnityEngine.RenderingPath get_actualRenderingPath()
constexpr auto get_allowHDR = 42140688; // System.Boolean get_allowHDR()
constexpr auto set_allowHDR_System_Boolean_value = 42143600; // System.Void set_allowHDR(System.Boolean value)
constexpr auto get_allowMSAA = 42140752; // System.Boolean get_allowMSAA()
constexpr auto set_allowMSAA_System_Boolean_value = 42143680; // System.Void set_allowMSAA(System.Boolean value)
constexpr auto set_forceIntoRenderTexture_System_Boolean_value = 42144496; // System.Void set_forceIntoRenderTexture(System.Boolean value)
constexpr auto get_orthographicSize = 42141952; // System.Single get_orthographicSize()
constexpr auto set_orthographicSize_System_Single_value = 42144992; // System.Void set_orthographicSize(System.Single value)
constexpr auto get_orthographic = 42142016; // System.Boolean get_orthographic()
constexpr auto set_orthographic_System_Boolean_value = 42145072; // System.Void set_orthographic(System.Boolean value)
constexpr auto get_depth = 42141344; // System.Single get_depth()
constexpr auto get_aspect = 42140816; // System.Single get_aspect()
constexpr auto set_aspect_System_Single_value = 42143760; // System.Void set_aspect(System.Single value)
constexpr auto get_cullingMask = 42141168; // System.Int32 get_cullingMask()
constexpr auto set_cullingMask_System_Int32_value = 42144128; // System.Void set_cullingMask(System.Int32 value)
constexpr auto get_eventMask = 42141408; // System.Int32 get_eventMask()
constexpr auto get_cameraType = 42141040; // UnityEngine.CameraType get_cameraType()
constexpr auto set_cameraType_UnityEngine_CameraType_value = 42144000; // System.Void set_cameraType(UnityEngine.CameraType value)
constexpr auto GetLayerCullDistances = 42136480; // System.Single[] GetLayerCullDistances()
constexpr auto SetLayerCullDistances_System_Single___d = 42138720; // System.Void SetLayerCullDistances(System.Single[] d)
constexpr auto get_layerCullDistances = 42136480; // System.Single[] get_layerCullDistances()
constexpr auto set_layerCullDistances_System_Single___value = 42144576; // System.Void set_layerCullDistances(System.Single[] value)
constexpr auto get_backgroundColor = 42140960; // UnityEngine.Color get_backgroundColor()
constexpr auto set_backgroundColor_UnityEngine_Color_value = 42143920; // System.Void set_backgroundColor(UnityEngine.Color value)
constexpr auto get_clearFlags = 42141104; // UnityEngine.CameraClearFlags get_clearFlags()
constexpr auto set_clearFlags_UnityEngine_CameraClearFlags_value = 42144064; // System.Void set_clearFlags(UnityEngine.CameraClearFlags value)
constexpr auto get_depthTextureMode = 42141280; // UnityEngine.DepthTextureMode get_depthTextureMode()
constexpr auto set_depthTextureMode_UnityEngine_DepthTextureMode_value = 42144192; // System.Void set_depthTextureMode(UnityEngine.DepthTextureMode value)
constexpr auto SetReplacementShader_UnityEngine_Shader_shader__System_String_replacementTag = 42138800; // System.Void SetReplacementShader(UnityEngine.Shader shader, System.String replacementTag)
constexpr auto get_usePhysicalProperties = 42143360; // System.Boolean get_usePhysicalProperties()
constexpr auto set_usePhysicalProperties_System_Boolean_value = 42146000; // System.Void set_usePhysicalProperties(System.Boolean value)
constexpr auto get_sensorSize = 42142960; // UnityEngine.Vector2 get_sensorSize()
constexpr auto set_sensorSize_UnityEngine_Vector2_value = 42145776; // System.Void set_sensorSize(UnityEngine.Vector2 value)
constexpr auto get_focalLength = 42141600; // System.Single get_focalLength()
constexpr auto set_focalLength_System_Single_value = 42144416; // System.Void set_focalLength(System.Single value)
constexpr auto get_rect = 42142800; // UnityEngine.Rect get_rect()
constexpr auto set_rect_UnityEngine_Rect_value = 42145552; // System.Void set_rect(UnityEngine.Rect value)
constexpr auto get_pixelRect = 42142224; // UnityEngine.Rect get_pixelRect()
constexpr auto set_pixelRect_UnityEngine_Rect_value = 42145232; // System.Void set_pixelRect(UnityEngine.Rect value)
constexpr auto get_pixelWidth = 42142304; // System.Int32 get_pixelWidth()
constexpr auto get_pixelHeight = 42142080; // System.Int32 get_pixelHeight()
constexpr auto get_targetTexture = 42143296; // UnityEngine.RenderTexture get_targetTexture()
constexpr auto set_targetTexture_UnityEngine_RenderTexture_value = 42145840; // System.Void set_targetTexture(UnityEngine.RenderTexture value)
constexpr auto get_targetDisplay = 42143232; // System.Int32 get_targetDisplay()
constexpr auto SetTargetBuffersImpl_UnityEngine_RenderBuffer_color__UnityEngine_RenderBuffer_depth = 42139152; // System.Void SetTargetBuffersImpl(UnityEngine.RenderBuffer color, UnityEngine.RenderBuffer depth)
constexpr auto SetTargetBuffers_UnityEngine_RenderBuffer_colorBuffer__UnityEngine_RenderBuffer_depthBuffer = 42139248; // System.Void SetTargetBuffers(UnityEngine.RenderBuffer colorBuffer, UnityEngine.RenderBuffer depthBuffer)
constexpr auto get_worldToCameraMatrix = 42143504; // UnityEngine.Matrix4x4 get_worldToCameraMatrix()
constexpr auto set_worldToCameraMatrix_UnityEngine_Matrix4x4_value = 42146160; // System.Void set_worldToCameraMatrix(UnityEngine.Matrix4x4 value)
constexpr auto get_projectionMatrix = 42142624; // UnityEngine.Matrix4x4 get_projectionMatrix()
constexpr auto set_projectionMatrix_UnityEngine_Matrix4x4_value = 42145392; // System.Void set_projectionMatrix(UnityEngine.Matrix4x4 value)
constexpr auto get_nonJitteredProjectionMatrix = 42141856; // UnityEngine.Matrix4x4 get_nonJitteredProjectionMatrix()
constexpr auto set_nonJitteredProjectionMatrix_UnityEngine_Matrix4x4_value = 42144912; // System.Void set_nonJitteredProjectionMatrix(UnityEngine.Matrix4x4 value)
constexpr auto set_useJitteredProjectionMatrixForTransparentRendering_System_Boolean_value = 42145920; // System.Void set_useJitteredProjectionMatrixForTransparentRendering(System.Boolean value)
constexpr auto get_previousViewProjectionMatrix = 42142448; // UnityEngine.Matrix4x4 get_previousViewProjectionMatrix()
constexpr auto ResetProjectionMatrix = 42137824; // System.Void ResetProjectionMatrix()
constexpr auto WorldToScreenPoint_UnityEngine_Vector3_position__UnityEngine_Camera_MonoOrStereoscopicEye_eye = 42140144; // UnityEngine.Vector3 WorldToScreenPoint(UnityEngine.Vector3 position, UnityEngine.Camera/MonoOrStereoscopicEye eye)
constexpr auto WorldToViewportPoint_UnityEngine_Vector3_position__UnityEngine_Camera_MonoOrStereoscopicEye_eye = 42140512; // UnityEngine.Vector3 WorldToViewportPoint(UnityEngine.Vector3 position, UnityEngine.Camera/MonoOrStereoscopicEye eye)
constexpr auto ViewportToWorldPoint_UnityEngine_Vector3_position__UnityEngine_Camera_MonoOrStereoscopicEye_eye = 42139776; // UnityEngine.Vector3 ViewportToWorldPoint(UnityEngine.Vector3 position, UnityEngine.Camera/MonoOrStereoscopicEye eye)
constexpr auto WorldToScreenPoint_UnityEngine_Vector3_position = 42140000; // UnityEngine.Vector3 WorldToScreenPoint(UnityEngine.Vector3 position)
constexpr auto WorldToViewportPoint_UnityEngine_Vector3_position = 42140368; // UnityEngine.Vector3 WorldToViewportPoint(UnityEngine.Vector3 position)
constexpr auto ViewportToWorldPoint_UnityEngine_Vector3_position = 42139632; // UnityEngine.Vector3 ViewportToWorldPoint(UnityEngine.Vector3 position)
constexpr auto ScreenToViewportPoint_UnityEngine_Vector3_position = 42138624; // UnityEngine.Vector3 ScreenToViewportPoint(UnityEngine.Vector3 position)
constexpr auto ViewportToScreenPoint_UnityEngine_Vector3_position = 42139424; // UnityEngine.Vector3 ViewportToScreenPoint(UnityEngine.Vector3 position)
constexpr auto ScreenPointToRay_UnityEngine_Vector2_pos__UnityEngine_Camera_MonoOrStereoscopicEye_eye = 42138416; // UnityEngine.Ray ScreenPointToRay(UnityEngine.Vector2 pos, UnityEngine.Camera/MonoOrStereoscopicEye eye)
constexpr auto ScreenPointToRay_UnityEngine_Vector3_pos__UnityEngine_Camera_MonoOrStereoscopicEye_eye = 42138240; // UnityEngine.Ray ScreenPointToRay(UnityEngine.Vector3 pos, UnityEngine.Camera/MonoOrStereoscopicEye eye)
constexpr auto ScreenPointToRay_UnityEngine_Vector3_pos = 42138064; // UnityEngine.Ray ScreenPointToRay(UnityEngine.Vector3 pos)
constexpr auto CalculateFrustumCornersInternal_UnityEngine_Rect_viewport__System_Single_z__UnityEngine_Camera_MonoOrStereoscopicEye_eye__out_UnityEngine_Vector3___outCorners = 42135200; // System.Void CalculateFrustumCornersInternal(UnityEngine.Rect viewport, System.Single z, UnityEngine.Camera/MonoOrStereoscopicEye eye, out UnityEngine.Vector3[] outCorners)
constexpr auto CalculateFrustumCorners_UnityEngine_Rect_viewport__System_Single_z__UnityEngine_Camera_MonoOrStereoscopicEye_eye__UnityEngine_Vector3___outCorners = 42135312; // System.Void CalculateFrustumCorners(UnityEngine.Rect viewport, System.Single z, UnityEngine.Camera/MonoOrStereoscopicEye eye, UnityEngine.Vector3[] outCorners)
constexpr auto get_stereoEnabled = 42143104; // System.Boolean get_stereoEnabled()
constexpr auto get_stereoTargetEye = 42143168; // UnityEngine.StereoTargetEyeMask get_stereoTargetEye()
constexpr auto get_stereoActiveEye = 42143040; // UnityEngine.Camera/MonoOrStereoscopicEye get_stereoActiveEye()
constexpr auto GetStereoNonJitteredProjectionMatrix_UnityEngine_Camera_StereoscopicEye_eye = 42136624; // UnityEngine.Matrix4x4 GetStereoNonJitteredProjectionMatrix(UnityEngine.Camera/StereoscopicEye eye)
constexpr auto GetStereoViewMatrix_UnityEngine_Camera_StereoscopicEye_eye = 42137008; // UnityEngine.Matrix4x4 GetStereoViewMatrix(UnityEngine.Camera/StereoscopicEye eye)
constexpr auto CopyStereoDeviceProjectionMatrixToNonJittered_UnityEngine_Camera_StereoscopicEye_eye = 42135712; // System.Void CopyStereoDeviceProjectionMatrixToNonJittered(UnityEngine.Camera/StereoscopicEye eye)
constexpr auto GetStereoProjectionMatrix_UnityEngine_Camera_StereoscopicEye_eye = 42136816; // UnityEngine.Matrix4x4 GetStereoProjectionMatrix(UnityEngine.Camera/StereoscopicEye eye)
constexpr auto SetStereoProjectionMatrix_UnityEngine_Camera_StereoscopicEye_eye__UnityEngine_Matrix4x4_matrix = 42138976; // System.Void SetStereoProjectionMatrix(UnityEngine.Camera/StereoscopicEye eye, UnityEngine.Matrix4x4 matrix)
constexpr auto ResetStereoProjectionMatrices = 42137888; // System.Void ResetStereoProjectionMatrices()
constexpr auto Render = 42137760; // System.Void Render()
constexpr auto RenderWithShader_UnityEngine_Shader_shader__System_String_replacementTag = 42137664; // System.Void RenderWithShader(UnityEngine.Shader shader, System.String replacementTag)
constexpr auto CopyFrom_UnityEngine_Camera_other = 42135632; // System.Void CopyFrom(UnityEngine.Camera other)
constexpr auto RemoveCommandBuffers_UnityEngine_Rendering_CameraEvent_evt = 42137600; // System.Void RemoveCommandBuffers(UnityEngine.Rendering.CameraEvent evt)
constexpr auto RemoveAllCommandBuffers = 42137120; // System.Void RemoveAllCommandBuffers()
constexpr auto AddCommandBufferImpl_UnityEngine_Rendering_CameraEvent_evt__UnityEngine_Rendering_CommandBuffer_buffer = 42134672; // System.Void AddCommandBufferImpl(UnityEngine.Rendering.CameraEvent evt, UnityEngine.Rendering.CommandBuffer buffer)
constexpr auto RemoveCommandBufferImpl_UnityEngine_Rendering_CameraEvent_evt__UnityEngine_Rendering_CommandBuffer_buffer = 42137184; // System.Void RemoveCommandBufferImpl(UnityEngine.Rendering.CameraEvent evt, UnityEngine.Rendering.CommandBuffer buffer)
constexpr auto AddCommandBuffer_UnityEngine_Rendering_CameraEvent_evt__UnityEngine_Rendering_CommandBuffer_buffer = 42134752; // System.Void AddCommandBuffer(UnityEngine.Rendering.CameraEvent evt, UnityEngine.Rendering.CommandBuffer buffer)
constexpr auto RemoveCommandBuffer_UnityEngine_Rendering_CameraEvent_evt__UnityEngine_Rendering_CommandBuffer_buffer = 42137264; // System.Void RemoveCommandBuffer(UnityEngine.Rendering.CameraEvent evt, UnityEngine.Rendering.CommandBuffer buffer)
constexpr auto GetCommandBuffers_UnityEngine_Rendering_CameraEvent_evt = 42136416; // UnityEngine.Rendering.CommandBuffer[] GetCommandBuffers(UnityEngine.Rendering.CameraEvent evt)
constexpr auto get_backgroundColor_Injected_out_UnityEngine_Color_ret = 42140880; // System.Void get_backgroundColor_Injected(out UnityEngine.Color ret)
constexpr auto set_backgroundColor_Injected_UnityEngine_Color_value = 42143840; // System.Void set_backgroundColor_Injected(UnityEngine.Color value)
constexpr auto get_sensorSize_Injected_out_UnityEngine_Vector2_ret = 42142880; // System.Void get_sensorSize_Injected(out UnityEngine.Vector2 ret)
constexpr auto set_sensorSize_Injected_UnityEngine_Vector2_value = 42145696; // System.Void set_sensorSize_Injected(UnityEngine.Vector2 value)
constexpr auto get_rect_Injected_out_UnityEngine_Rect_ret = 42142720; // System.Void get_rect_Injected(out UnityEngine.Rect ret)
constexpr auto set_rect_Injected_UnityEngine_Rect_value = 42145472; // System.Void set_rect_Injected(UnityEngine.Rect value)
constexpr auto get_pixelRect_Injected_out_UnityEngine_Rect_ret = 42142144; // System.Void get_pixelRect_Injected(out UnityEngine.Rect ret)
constexpr auto set_pixelRect_Injected_UnityEngine_Rect_value = 42145152; // System.Void set_pixelRect_Injected(UnityEngine.Rect value)
constexpr auto SetTargetBuffersImpl_Injected_UnityEngine_RenderBuffer_color__UnityEngine_RenderBuffer_depth = 42139056; // System.Void SetTargetBuffersImpl_Injected(UnityEngine.RenderBuffer color, UnityEngine.RenderBuffer depth)
constexpr auto get_worldToCameraMatrix_Injected_out_UnityEngine_Matrix4x4_ret = 42143424; // System.Void get_worldToCameraMatrix_Injected(out UnityEngine.Matrix4x4 ret)
constexpr auto set_worldToCameraMatrix_Injected_UnityEngine_Matrix4x4_value = 42146080; // System.Void set_worldToCameraMatrix_Injected(UnityEngine.Matrix4x4 value)
constexpr auto get_projectionMatrix_Injected_out_UnityEngine_Matrix4x4_ret = 42142544; // System.Void get_projectionMatrix_Injected(out UnityEngine.Matrix4x4 ret)
constexpr auto set_projectionMatrix_Injected_UnityEngine_Matrix4x4_value = 42145312; // System.Void set_projectionMatrix_Injected(UnityEngine.Matrix4x4 value)
constexpr auto get_nonJitteredProjectionMatrix_Injected_out_UnityEngine_Matrix4x4_ret = 42141776; // System.Void get_nonJitteredProjectionMatrix_Injected(out UnityEngine.Matrix4x4 ret)
constexpr auto set_nonJitteredProjectionMatrix_Injected_UnityEngine_Matrix4x4_value = 42144832; // System.Void set_nonJitteredProjectionMatrix_Injected(UnityEngine.Matrix4x4 value)
constexpr auto get_previousViewProjectionMatrix_Injected_out_UnityEngine_Matrix4x4_ret = 42142368; // System.Void get_previousViewProjectionMatrix_Injected(out UnityEngine.Matrix4x4 ret)
constexpr auto WorldToScreenPoint_Injected_UnityEngine_Vector3_position__UnityEngine_Camera_MonoOrStereoscopicEye_eye__out_UnityEngine_Vector3_ret = 42139888; // System.Void WorldToScreenPoint_Injected(UnityEngine.Vector3 position, UnityEngine.Camera/MonoOrStereoscopicEye eye, out UnityEngine.Vector3 ret)
constexpr auto WorldToViewportPoint_Injected_UnityEngine_Vector3_position__UnityEngine_Camera_MonoOrStereoscopicEye_eye__out_UnityEngine_Vector3_ret = 42140256; // System.Void WorldToViewportPoint_Injected(UnityEngine.Vector3 position, UnityEngine.Camera/MonoOrStereoscopicEye eye, out UnityEngine.Vector3 ret)
constexpr auto ViewportToWorldPoint_Injected_UnityEngine_Vector3_position__UnityEngine_Camera_MonoOrStereoscopicEye_eye__out_UnityEngine_Vector3_ret = 42139520; // System.Void ViewportToWorldPoint_Injected(UnityEngine.Vector3 position, UnityEngine.Camera/MonoOrStereoscopicEye eye, out UnityEngine.Vector3 ret)
constexpr auto ScreenToViewportPoint_Injected_UnityEngine_Vector3_position__out_UnityEngine_Vector3_ret = 42138528; // System.Void ScreenToViewportPoint_Injected(UnityEngine.Vector3 position, out UnityEngine.Vector3 ret)
constexpr auto ViewportToScreenPoint_Injected_UnityEngine_Vector3_position__out_UnityEngine_Vector3_ret = 42139328; // System.Void ViewportToScreenPoint_Injected(UnityEngine.Vector3 position, out UnityEngine.Vector3 ret)
constexpr auto ScreenPointToRay_Injected_UnityEngine_Vector2_pos__UnityEngine_Camera_MonoOrStereoscopicEye_eye__out_UnityEngine_Ray_ret = 42137952; // System.Void ScreenPointToRay_Injected(UnityEngine.Vector2 pos, UnityEngine.Camera/MonoOrStereoscopicEye eye, out UnityEngine.Ray ret)
constexpr auto CalculateFrustumCornersInternal_Injected_UnityEngine_Rect_viewport__System_Single_z__UnityEngine_Camera_MonoOrStereoscopicEye_eye__out_UnityEngine_Vector3___outCorners = 42135088; // System.Void CalculateFrustumCornersInternal_Injected(UnityEngine.Rect viewport, System.Single z, UnityEngine.Camera/MonoOrStereoscopicEye eye, out UnityEngine.Vector3[] outCorners)
constexpr auto GetStereoNonJitteredProjectionMatrix_Injected_UnityEngine_Camera_StereoscopicEye_eye__out_UnityEngine_Matrix4x4_ret = 42136544; // System.Void GetStereoNonJitteredProjectionMatrix_Injected(UnityEngine.Camera/StereoscopicEye eye, out UnityEngine.Matrix4x4 ret)
constexpr auto GetStereoViewMatrix_Injected_UnityEngine_Camera_StereoscopicEye_eye__out_UnityEngine_Matrix4x4_ret = 42136928; // System.Void GetStereoViewMatrix_Injected(UnityEngine.Camera/StereoscopicEye eye, out UnityEngine.Matrix4x4 ret)
constexpr auto GetStereoProjectionMatrix_Injected_UnityEngine_Camera_StereoscopicEye_eye__out_UnityEngine_Matrix4x4_ret = 42136736; // System.Void GetStereoProjectionMatrix_Injected(UnityEngine.Camera/StereoscopicEye eye, out UnityEngine.Matrix4x4 ret)
constexpr auto SetStereoProjectionMatrix_Injected_UnityEngine_Camera_StereoscopicEye_eye__UnityEngine_Matrix4x4_matrix = 42138896; // System.Void SetStereoProjectionMatrix_Injected(UnityEngine.Camera/StereoscopicEye eye, UnityEngine.Matrix4x4 matrix)
}
namespace StaticMethods
{
constexpr auto get_main = 42141664; // UnityEngine.Camera get_main()
constexpr auto get_current = 42141232; // UnityEngine.Camera get_current()
constexpr auto GetAllCamerasCount = 42136064; // System.Int32 GetAllCamerasCount()
constexpr auto GetAllCamerasImpl_out_UnityEngine_Camera___cam = 42136112; // System.Int32 GetAllCamerasImpl(out UnityEngine.Camera[] cam)
constexpr auto get_allCamerasCount = 42136064; // System.Int32 get_allCamerasCount()
constexpr auto GetAllCameras_UnityEngine_Camera___cameras = 42136176; // System.Int32 GetAllCameras(UnityEngine.Camera[] cameras)
constexpr auto FireOnPreCull_UnityEngine_Camera_cam = 42135872; // System.Void FireOnPreCull(UnityEngine.Camera cam)
constexpr auto FireOnPreRender_UnityEngine_Camera_cam = 42135968; // System.Void FireOnPreRender(UnityEngine.Camera cam)
constexpr auto FireOnPostRender_UnityEngine_Camera_cam = 42135776; // System.Void FireOnPostRender(UnityEngine.Camera cam)
}
}
namespace Unity_Collections_LowLevel_Unsafe_UnsafeUtility
{
namespace StaticMethods
{
constexpr auto System_Boolean_Unity_Collections_LowLevel_Unsafe_UnsafeUtility_IsBlittable_Instancing_DrawCallJobData_ = 19075872; // System.Boolean Unity.Collections.LowLevel.Unsafe.UnsafeUtility.IsBlittable<Instancing.DrawCallJobData>
constexpr auto Malloc_System_Int64_size__System_Int32_alignment__Unity_Collections_Allocator_allocator = 42286656; // System.Void* Malloc(System.Int64 size, System.Int32 alignment, Unity.Collections.Allocator allocator)
constexpr auto Free_System_Void__memory__Unity_Collections_Allocator_allocator = 42285664; // System.Void Free(System.Void* memory, Unity.Collections.Allocator allocator)
constexpr auto MemCpy_System_Void__destination__System_Void__source__System_Int64_size = 42286816; // System.Void MemCpy(System.Void* destination, System.Void* source, System.Int64 size)
constexpr auto MemSet_System_Void__destination__System_Byte_value__System_Int64_size = 42286912; // System.Void MemSet(System.Void* destination, System.Byte value, System.Int64 size)
constexpr auto MemClear_System_Void__destination__System_Int64_size = 42286736; // System.Void MemClear(System.Void* destination, System.Int64 size)
constexpr auto SizeOf_System_Type_type = 42287008; // System.Int32 SizeOf(System.Type type)
constexpr auto IsBlittable_System_Type_type = 42286592; // System.Boolean IsBlittable(System.Type type)
constexpr auto IsBlittableValueType_System_Type_t = 42286496; // System.Boolean IsBlittableValueType(System.Type t)
constexpr auto GetReasonForTypeNonBlittableImpl_System_Type_t__System_String_name = 42285840; // System.String GetReasonForTypeNonBlittableImpl(System.Type t, System.String name)
constexpr auto IsArrayBlittable_System_Array_arr = 42286352; // System.Boolean IsArrayBlittable(System.Array arr)
constexpr auto System_Boolean_Unity_Collections_LowLevel_Unsafe_UnsafeUtility_IsGenericListBlittable_Instancing_DrawCallJobData_ = 19076832; // System.Boolean Unity.Collections.LowLevel.Unsafe.UnsafeUtility.IsGenericListBlittable<Instancing.DrawCallJobData>
constexpr auto System_Boolean_Unity_Collections_LowLevel_Unsafe_UnsafeUtility_IsGenericListBlittable_Instancing_InstancedCullData_ = 19076832; // System.Boolean Unity.Collections.LowLevel.Unsafe.UnsafeUtility.IsGenericListBlittable<Instancing.InstancedCullData>
constexpr auto System_Boolean_Unity_Collections_LowLevel_Unsafe_UnsafeUtility_IsGenericListBlittable_System_Int32_ = 19076832; // System.Boolean Unity.Collections.LowLevel.Unsafe.UnsafeUtility.IsGenericListBlittable<System.Int32>
constexpr auto System_Boolean_Unity_Collections_LowLevel_Unsafe_UnsafeUtility_IsGenericListBlittable_Instancing_MeshOverrideData_ = 19076832; // System.Boolean Unity.Collections.LowLevel.Unsafe.UnsafeUtility.IsGenericListBlittable<Instancing.MeshOverrideData>
constexpr auto System_Boolean_Unity_Collections_LowLevel_Unsafe_UnsafeUtility_IsGenericListBlittable_Instancing_RenderSlice_ = 19076832; // System.Boolean Unity.Collections.LowLevel.Unsafe.UnsafeUtility.IsGenericListBlittable<Instancing.RenderSlice>
constexpr auto System_Boolean_Unity_Collections_LowLevel_Unsafe_UnsafeUtility_IsGenericListBlittable_System_UInt32_ = 19076832; // System.Boolean Unity.Collections.LowLevel.Unsafe.UnsafeUtility.IsGenericListBlittable<System.UInt32>
constexpr auto System_Boolean_Unity_Collections_LowLevel_Unsafe_UnsafeUtility_IsGenericListBlittable_Unity_Mathematics_float4_ = 19076832; // System.Boolean Unity.Collections.LowLevel.Unsafe.UnsafeUtility.IsGenericListBlittable<Unity.Mathematics.float4>
constexpr auto System_Boolean_Unity_Collections_LowLevel_Unsafe_UnsafeUtility_IsGenericListBlittable_Unity_Mathematics_float4x4_ = 19076832; // System.Boolean Unity.Collections.LowLevel.Unsafe.UnsafeUtility.IsGenericListBlittable<Unity.Mathematics.float4x4>
constexpr auto System_Boolean_Unity_Collections_LowLevel_Unsafe_UnsafeUtility_IsGenericListBlittable_FoliageGridMeshData_FoliageVertex_ = 19076832; // System.Boolean Unity.Collections.LowLevel.Unsafe.UnsafeUtility.IsGenericListBlittable<FoliageGridMeshData/FoliageVertex>
constexpr auto System_Boolean_Unity_Collections_LowLevel_Unsafe_UnsafeUtility_IsGenericListBlittable_Instancing_GeometryBuffers_VertexData_ = 19076832; // System.Boolean Unity.Collections.LowLevel.Unsafe.UnsafeUtility.IsGenericListBlittable<Instancing.GeometryBuffers/VertexData>
constexpr auto GetReasonForArrayNonBlittable_System_Array_arr = 42285728; // System.String GetReasonForArrayNonBlittable(System.Array arr)
constexpr auto System_String_Unity_Collections_LowLevel_Unsafe_UnsafeUtility_GetReasonForGenericListNonBlittable_Instancing_DrawCallJobData_ = 19074416; // System.String Unity.Collections.LowLevel.Unsafe.UnsafeUtility.GetReasonForGenericListNonBlittable<Instancing.DrawCallJobData>
constexpr auto System_Int32_Unity_Collections_LowLevel_Unsafe_UnsafeUtility_AlignOf_UnityEngine_Rendering_BatchVisibility_ = 19074336; // System.Int32 Unity.Collections.LowLevel.Unsafe.UnsafeUtility.AlignOf<UnityEngine.Rendering.BatchVisibility>
constexpr auto System_Int32_Unity_Collections_LowLevel_Unsafe_UnsafeUtility_AlignOf_Facepunch_BurstCloth_Jobs_BoneData_ = 19074336; // System.Int32 Unity.Collections.LowLevel.Unsafe.UnsafeUtility.AlignOf<Facepunch.BurstCloth.Jobs.BoneData>
constexpr auto System_Int32_Unity_Collections_LowLevel_Unsafe_UnsafeUtility_AlignOf_Facepunch_BurstCloth_Jobs_BoneState_ = 19074336; // System.Int32 Unity.Collections.LowLevel.Unsafe.UnsafeUtility.AlignOf<Facepunch.BurstCloth.Jobs.BoneState>
constexpr auto System_Int32_Unity_Collections_LowLevel_Unsafe_UnsafeUtility_AlignOf_System_Byte_ = 19074336; // System.Int32 Unity.Collections.LowLevel.Unsafe.UnsafeUtility.AlignOf<System.Byte>
constexpr auto System_Int32_Unity_Collections_LowLevel_Unsafe_UnsafeUtility_AlignOf_Instancing_CellHeader_ = 19074336; // System.Int32 Unity.Collections.LowLevel.Unsafe.UnsafeUtility.AlignOf<Instancing.CellHeader>
constexpr auto System_Int32_Unity_Collections_LowLevel_Unsafe_UnsafeUtility_AlignOf_Facepunch_BurstCloth_Jobs_ColliderData_ = 19074336; // System.Int32 Unity.Collections.LowLevel.Unsafe.UnsafeUtility.AlignOf<Facepunch.BurstCloth.Jobs.ColliderData>
constexpr auto System_Int32_Unity_Collections_LowLevel_Unsafe_UnsafeUtility_AlignOf_Facepunch_BurstCloth_Jobs_ColliderState_ = 19074336; // System.Int32 Unity.Collections.LowLevel.Unsafe.UnsafeUtility.AlignOf<Facepunch.BurstCloth.Jobs.ColliderState>
constexpr auto System_Int32_Unity_Collections_LowLevel_Unsafe_UnsafeUtility_AlignOf_UnityEngine_Color32_ = 19074336; // System.Int32 Unity.Collections.LowLevel.Unsafe.UnsafeUtility.AlignOf<UnityEngine.Color32>
constexpr auto System_Int32_Unity_Collections_LowLevel_Unsafe_UnsafeUtility_AlignOf_Instancing_DrawCallJobData_ = 19074336; // System.Int32 Unity.Collections.LowLevel.Unsafe.UnsafeUtility.AlignOf<Instancing.DrawCallJobData>
constexpr auto System_Int32_Unity_Collections_LowLevel_Unsafe_UnsafeUtility_AlignOf_Instancing_GridJobData_ = 19074336; // System.Int32 Unity.Collections.LowLevel.Unsafe.UnsafeUtility.AlignOf<Instancing.GridJobData>
constexpr auto System_Int32_Unity_Collections_LowLevel_Unsafe_UnsafeUtility_AlignOf_Instancing_InstancedCullData_ = 19074336; // System.Int32 Unity.Collections.LowLevel.Unsafe.UnsafeUtility.AlignOf<Instancing.InstancedCullData>
constexpr auto System_Int32_Unity_Collections_LowLevel_Unsafe_UnsafeUtility_AlignOf_Instancing_InstancedRendererJobData_ = 19074336; // System.Int32 Unity.Collections.LowLevel.Unsafe.UnsafeUtility.AlignOf<Instancing.InstancedRendererJobData>
constexpr auto System_Int32_Unity_Collections_LowLevel_Unsafe_UnsafeUtility_AlignOf_System_Int32_ = 19074336; // System.Int32 Unity.Collections.LowLevel.Unsafe.UnsafeUtility.AlignOf<System.Int32>
constexpr auto System_Int32_Unity_Collections_LowLevel_Unsafe_UnsafeUtility_AlignOf_Unity_Jobs_JobHandle_ = 19074336; // System.Int32 Unity.Collections.LowLevel.Unsafe.UnsafeUtility.AlignOf<Unity.Jobs.JobHandle>
constexpr auto System_Int32_Unity_Collections_LowLevel_Unsafe_UnsafeUtility_AlignOf_UnityEngine_Experimental_GlobalIllumination_LightDataGI_ = 19074336; // System.Int32 Unity.Collections.LowLevel.Unsafe.UnsafeUtility.AlignOf<UnityEngine.Experimental.GlobalIllumination.LightDataGI>
constexpr auto System_Int32_Unity_Collections_LowLevel_Unsafe_UnsafeUtility_AlignOf_Instancing_MeshOverrideData_ = 19074336; // System.Int32 Unity.Collections.LowLevel.Unsafe.UnsafeUtility.AlignOf<Instancing.MeshOverrideData>
constexpr auto System_Int32_Unity_Collections_LowLevel_Unsafe_UnsafeUtility_AlignOf_UnityEngine_ModifiableContactPair_ = 19074336; // System.Int32 Unity.Collections.LowLevel.Unsafe.UnsafeUtility.AlignOf<UnityEngine.ModifiableContactPair>
constexpr auto System_Int32_Unity_Collections_LowLevel_Unsafe_UnsafeUtility_AlignOf_UnityEngine_Plane_ = 19074336; // System.Int32 Unity.Collections.LowLevel.Unsafe.UnsafeUtility.AlignOf<UnityEngine.Plane>
constexpr auto System_Int32_Unity_Collections_LowLevel_Unsafe_UnsafeUtility_AlignOf_UnityEngine_RaycastCommand_ = 19074336; // System.Int32 Unity.Collections.LowLevel.Unsafe.UnsafeUtility.AlignOf<UnityEngine.RaycastCommand>
constexpr auto System_Int32_Unity_Collections_LowLevel_Unsafe_UnsafeUtility_AlignOf_UnityEngine_RaycastHit_ = 19074336; // System.Int32 Unity.Collections.LowLevel.Unsafe.UnsafeUtility.AlignOf<UnityEngine.RaycastHit>
constexpr auto System_Int32_Unity_Collections_LowLevel_Unsafe_UnsafeUtility_AlignOf_Instancing_RenderSlice_ = 19074336; // System.Int32 Unity.Collections.LowLevel.Unsafe.UnsafeUtility.AlignOf<Instancing.RenderSlice>
constexpr auto System_Int32_Unity_Collections_LowLevel_Unsafe_UnsafeUtility_AlignOf_System_Single_ = 19074336; // System.Int32 Unity.Collections.LowLevel.Unsafe.UnsafeUtility.AlignOf<System.Single>
constexpr auto System_Int32_Unity_Collections_LowLevel_Unsafe_UnsafeUtility_AlignOf_UnityEngine_Tilemaps_TileData_ = 19074336; // System.Int32 Unity.Collections.LowLevel.Unsafe.UnsafeUtility.AlignOf<UnityEngine.Tilemaps.TileData>
constexpr auto System_Int32_Unity_Collections_LowLevel_Unsafe_UnsafeUtility_AlignOf_System_UInt32_ = 19074336; // System.Int32 Unity.Collections.LowLevel.Unsafe.UnsafeUtility.AlignOf<System.UInt32>
constexpr auto System_Int32_Unity_Collections_LowLevel_Unsafe_UnsafeUtility_AlignOf_UnityEngine_Vector3_ = 19074336; // System.Int32 Unity.Collections.LowLevel.Unsafe.UnsafeUtility.AlignOf<UnityEngine.Vector3>
constexpr auto System_Int32_Unity_Collections_LowLevel_Unsafe_UnsafeUtility_AlignOf_UnityEngine_Vector3Int_ = 19074336; // System.Int32 Unity.Collections.LowLevel.Unsafe.UnsafeUtility.AlignOf<UnityEngine.Vector3Int>
constexpr auto System_Int32_Unity_Collections_LowLevel_Unsafe_UnsafeUtility_AlignOf_UnityEngine_Vector4_ = 19074336; // System.Int32 Unity.Collections.LowLevel.Unsafe.UnsafeUtility.AlignOf<UnityEngine.Vector4>
constexpr auto System_Int32_Unity_Collections_LowLevel_Unsafe_UnsafeUtility_AlignOf_Unity_Mathematics_float2_ = 19074336; // System.Int32 Unity.Collections.LowLevel.Unsafe.UnsafeUtility.AlignOf<Unity.Mathematics.float2>
constexpr auto System_Int32_Unity_Collections_LowLevel_Unsafe_UnsafeUtility_AlignOf_Unity_Mathematics_float3_ = 19074336; // System.Int32 Unity.Collections.LowLevel.Unsafe.UnsafeUtility.AlignOf<Unity.Mathematics.float3>
constexpr auto System_Int32_Unity_Collections_LowLevel_Unsafe_UnsafeUtility_AlignOf_Unity_Mathematics_float4_ = 19074336; // System.Int32 Unity.Collections.LowLevel.Unsafe.UnsafeUtility.AlignOf<Unity.Mathematics.float4>
constexpr auto System_Int32_Unity_Collections_LowLevel_Unsafe_UnsafeUtility_AlignOf_Unity_Mathematics_float4x4_ = 19074336; // System.Int32 Unity.Collections.LowLevel.Unsafe.UnsafeUtility.AlignOf<Unity.Mathematics.float4x4>
constexpr auto System_Int32_Unity_Collections_LowLevel_Unsafe_UnsafeUtility_AlignOf_Unity_Mathematics_half2_ = 19074336; // System.Int32 Unity.Collections.LowLevel.Unsafe.UnsafeUtility.AlignOf<Unity.Mathematics.half2>
constexpr auto System_Int32_Unity_Collections_LowLevel_Unsafe_UnsafeUtility_AlignOf_FishShoal_FishData_ = 19074336; // System.Int32 Unity.Collections.LowLevel.Unsafe.UnsafeUtility.AlignOf<FishShoal/FishData>
constexpr auto System_Int32_Unity_Collections_LowLevel_Unsafe_UnsafeUtility_AlignOf_FishShoal_FishRenderData_ = 19074336; // System.Int32 Unity.Collections.LowLevel.Unsafe.UnsafeUtility.AlignOf<FishShoal/FishRenderData>
constexpr auto System_Int32_Unity_Collections_LowLevel_Unsafe_UnsafeUtility_AlignOf_Instancing_GeometryBuffers_VertexData_ = 19074336; // System.Int32 Unity.Collections.LowLevel.Unsafe.UnsafeUtility.AlignOf<Instancing.GeometryBuffers/VertexData>
constexpr auto System_Int32_Unity_Collections_LowLevel_Unsafe_UnsafeUtility_AlignOf_OceanMeshRenderer_DrawCall_ = 19074336; // System.Int32 Unity.Collections.LowLevel.Unsafe.UnsafeUtility.AlignOf<OceanMeshRenderer/DrawCall>
constexpr auto System_Int32_Unity_Collections_LowLevel_Unsafe_UnsafeUtility_AlignOf_PipeMesh_TesselatedLinePoint_ = 19074336; // System.Int32 Unity.Collections.LowLevel.Unsafe.UnsafeUtility.AlignOf<PipeMesh/TesselatedLinePoint>
constexpr auto System_Int32_Unity_Collections_LowLevel_Unsafe_UnsafeUtility_AlignOf_Facepunch_BurstCloth_Jobs_SimulatePositionsJob_LerpState_ = 19074336; // System.Int32 Unity.Collections.LowLevel.Unsafe.UnsafeUtility.AlignOf<Facepunch.BurstCloth.Jobs.SimulatePositionsJob/LerpState>
constexpr auto System_Void_Unity_Collections_LowLevel_Unsafe_UnsafeUtility_CopyPtrToStructure_UnityEngine_Jobs_IJobParallelForTransformExtensions_TransformParallelForLoopStruct_1_TransformJobData_Facepunch_BurstCloth_Jobs_InitializeBoneStateJob___System_Void__ptr__out_T_output = 19074400; // System.Void Unity.Collections.LowLevel.Unsafe.UnsafeUtility.CopyPtrToStructure<UnityEngine.Jobs.IJobParallelForTransformExtensions/TransformParallelForLoopStruct`1/TransformJobData<Facepunch.BurstCloth.Jobs.InitializeBoneStateJob>>
constexpr auto System_Void_Unity_Collections_LowLevel_Unsafe_UnsafeUtility_CopyPtrToStructure_UnityEngine_Jobs_IJobParallelForTransformExtensions_TransformParallelForLoopStruct_1_TransformJobData_Facepunch_BurstCloth_Jobs_InitializeColliderStateJob___System_Void__ptr__out_T_output = 19074400; // System.Void Unity.Collections.LowLevel.Unsafe.UnsafeUtility.CopyPtrToStructure<UnityEngine.Jobs.IJobParallelForTransformExtensions/TransformParallelForLoopStruct`1/TransformJobData<Facepunch.BurstCloth.Jobs.InitializeColliderStateJob>>
constexpr auto System_Void_Unity_Collections_LowLevel_Unsafe_UnsafeUtility_CopyPtrToStructure_UnityEngine_Jobs_IJobParallelForTransformExtensions_TransformParallelForLoopStruct_1_TransformJobData_Facepunch_BurstCloth_Jobs_UpdateTransformsJob___System_Void__ptr__out_T_output = 19074400; // System.Void Unity.Collections.LowLevel.Unsafe.UnsafeUtility.CopyPtrToStructure<UnityEngine.Jobs.IJobParallelForTransformExtensions/TransformParallelForLoopStruct`1/TransformJobData<Facepunch.BurstCloth.Jobs.UpdateTransformsJob>>
constexpr auto System_Void_Unity_Collections_LowLevel_Unsafe_UnsafeUtility_InternalCopyPtrToStructure_UnityEngine_Jobs_IJobParallelForTransformExtensions_TransformParallelForLoopStruct_1_TransformJobData_Facepunch_BurstCloth_Jobs_InitializeBoneStateJob___System_Void__ptr__out_T_output = 19075856; // System.Void Unity.Collections.LowLevel.Unsafe.UnsafeUtility.InternalCopyPtrToStructure<UnityEngine.Jobs.IJobParallelForTransformExtensions/TransformParallelForLoopStruct`1/TransformJobData<Facepunch.BurstCloth.Jobs.InitializeBoneStateJob>>
constexpr auto System_Void_Unity_Collections_LowLevel_Unsafe_UnsafeUtility_InternalCopyPtrToStructure_UnityEngine_Jobs_IJobParallelForTransformExtensions_TransformParallelForLoopStruct_1_TransformJobData_Facepunch_BurstCloth_Jobs_InitializeColliderStateJob___System_Void__ptr__out_T_output = 19075856; // System.Void Unity.Collections.LowLevel.Unsafe.UnsafeUtility.InternalCopyPtrToStructure<UnityEngine.Jobs.IJobParallelForTransformExtensions/TransformParallelForLoopStruct`1/TransformJobData<Facepunch.BurstCloth.Jobs.InitializeColliderStateJob>>
constexpr auto System_Void_Unity_Collections_LowLevel_Unsafe_UnsafeUtility_InternalCopyPtrToStructure_UnityEngine_Jobs_IJobParallelForTransformExtensions_TransformParallelForLoopStruct_1_TransformJobData_Facepunch_BurstCloth_Jobs_UpdateTransformsJob___System_Void__ptr__out_T_output = 19075856; // System.Void Unity.Collections.LowLevel.Unsafe.UnsafeUtility.InternalCopyPtrToStructure<UnityEngine.Jobs.IJobParallelForTransformExtensions/TransformParallelForLoopStruct`1/TransformJobData<Facepunch.BurstCloth.Jobs.UpdateTransformsJob>>
constexpr auto T_Unity_Collections_LowLevel_Unsafe_UnsafeUtility_ReadArrayElement_UnityEngine_Rendering_BatchVisibility__System_Void__source__System_Int32_index = 19076848; // T Unity.Collections.LowLevel.Unsafe.UnsafeUtility.ReadArrayElement<UnityEngine.Rendering.BatchVisibility>
constexpr auto T_Unity_Collections_LowLevel_Unsafe_UnsafeUtility_ReadArrayElement_Instancing_CellHeader__System_Void__source__System_Int32_index = 19076848; // T Unity.Collections.LowLevel.Unsafe.UnsafeUtility.ReadArrayElement<Instancing.CellHeader>
constexpr auto T_Unity_Collections_LowLevel_Unsafe_UnsafeUtility_ReadArrayElement_UnityEngine_Vector3__System_Void__source__System_Int32_index = 19076848; // T Unity.Collections.LowLevel.Unsafe.UnsafeUtility.ReadArrayElement<UnityEngine.Vector3>
constexpr auto T_Unity_Collections_LowLevel_Unsafe_UnsafeUtility_ReadArrayElement_UnityEngine_Vector3Int__System_Void__source__System_Int32_index = 19076848; // T Unity.Collections.LowLevel.Unsafe.UnsafeUtility.ReadArrayElement<UnityEngine.Vector3Int>
constexpr auto T_Unity_Collections_LowLevel_Unsafe_UnsafeUtility_ReadArrayElement_Unity_Mathematics_float3__System_Void__source__System_Int32_index = 19076848; // T Unity.Collections.LowLevel.Unsafe.UnsafeUtility.ReadArrayElement<Unity.Mathematics.float3>
constexpr auto System_Void_Unity_Collections_LowLevel_Unsafe_UnsafeUtility_WriteArrayElement_UnityEngine_Rendering_BatchVisibility__System_Void__destination__System_Int32_index__T_value = 19077968; // System.Void Unity.Collections.LowLevel.Unsafe.UnsafeUtility.WriteArrayElement<UnityEngine.Rendering.BatchVisibility>
constexpr auto System_Void_Unity_Collections_LowLevel_Unsafe_UnsafeUtility_WriteArrayElement_Instancing_CellHeader__System_Void__destination__System_Int32_index__T_value = 19077968; // System.Void Unity.Collections.LowLevel.Unsafe.UnsafeUtility.WriteArrayElement<Instancing.CellHeader>
constexpr auto System_Void_Unity_Collections_LowLevel_Unsafe_UnsafeUtility_WriteArrayElement_UnityEngine_Vector3__System_Void__destination__System_Int32_index__T_value = 19077968; // System.Void Unity.Collections.LowLevel.Unsafe.UnsafeUtility.WriteArrayElement<UnityEngine.Vector3>
constexpr auto System_Void_Unity_Collections_LowLevel_Unsafe_UnsafeUtility_WriteArrayElement_UnityEngine_Vector3Int__System_Void__destination__System_Int32_index__T_value = 19077968; // System.Void Unity.Collections.LowLevel.Unsafe.UnsafeUtility.WriteArrayElement<UnityEngine.Vector3Int>
constexpr auto System_Void_Unity_Collections_LowLevel_Unsafe_UnsafeUtility_WriteArrayElement_Unity_Mathematics_float3__System_Void__destination__System_Int32_index__T_value = 19077968; // System.Void Unity.Collections.LowLevel.Unsafe.UnsafeUtility.WriteArrayElement<Unity.Mathematics.float3>
constexpr auto System_Threading_Tasks_RendezvousAwaitable_1_TResult__System_Threading_Tasks_RendezvousAwaitable_1_System_Object__GetAwaiter_T_output = 5828560; // System.Threading.Tasks.RendezvousAwaitable`1<TResult> System.Threading.Tasks.RendezvousAwaitable`1<System.Object>.GetAwaiter
constexpr auto R_System_Array_UnsafeMov_System_Object__System_Object__T_output = 5828560; // R System.Array.UnsafeMov<System.Object, System.Object>
constexpr auto System_Collections_Generic_IEnumerable_1_TSource__System_Linq_Enumerable_AsEnumerable_System_Object__T_output = 5828560; // System.Collections.Generic.IEnumerable`1<TSource> System.Linq.Enumerable.AsEnumerable<System.Object>
constexpr auto System_Collections_Generic_IEnumerable_1_TSource__System_Linq_Enumerable_AsEnumerable_ServerInfo__T_output = 5828560; // System.Collections.Generic.IEnumerable`1<TSource> System.Linq.Enumerable.AsEnumerable<ServerInfo>
constexpr auto System_Collections_Generic_IEnumerable_1_TSource__System_Linq_Enumerable_AsEnumerable_Demos_DemoInfo__T_output = 5828560; // System.Collections.Generic.IEnumerable`1<TSource> System.Linq.Enumerable.AsEnumerable<Demos/DemoInfo>
constexpr auto TTo_System_Runtime_CompilerServices_Unsafe_As_System_Guid__Facepunch_Nexus_Uuid__T_output = 5828560; // TTo System.Runtime.CompilerServices.Unsafe.As<System.Guid, Facepunch.Nexus.Uuid>
constexpr auto TTo_System_Runtime_CompilerServices_Unsafe_As_System_Object__System_Object__T_output = 5828560; // TTo System.Runtime.CompilerServices.Unsafe.As<System.Object, System.Object>
constexpr auto TTo_System_Runtime_CompilerServices_Unsafe_As_Facepunch_Nexus_Uuid__System_Guid__T_output = 5828560; // TTo System.Runtime.CompilerServices.Unsafe.As<Facepunch.Nexus.Uuid, System.Guid>
constexpr auto T_System_Runtime_CompilerServices_Unsafe_As_System_Object__T_output = 5828560; // T System.Runtime.CompilerServices.Unsafe.As<System.Object>
constexpr auto TTo_System_Runtime_CompilerServices_Unsafe_As_System_Memory_1_System_Byte___System_ReadOnlyMemory_1_System_Byte___T_output = 5828560; // TTo System.Runtime.CompilerServices.Unsafe.As<System.Memory`1<System.Byte>, System.ReadOnlyMemory`1<System.Byte>>
constexpr auto TTo_System_Runtime_CompilerServices_Unsafe_As_System_Memory_1_System_Object___System_ReadOnlyMemory_1_System_Object___T_output = 5828560; // TTo System.Runtime.CompilerServices.Unsafe.As<System.Memory`1<System.Object>, System.ReadOnlyMemory`1<System.Object>>
constexpr auto TTo_System_Runtime_CompilerServices_Unsafe_As_System_ReadOnlyMemory_1_System_Byte___System_Memory_1_System_Byte___T_output = 5828560; // TTo System.Runtime.CompilerServices.Unsafe.As<System.ReadOnlyMemory`1<System.Byte>, System.Memory`1<System.Byte>>
constexpr auto TTo_System_Runtime_CompilerServices_Unsafe_As_System_ReadOnlyMemory_1_System_Object___System_Memory_1_System_Object___T_output = 5828560; // TTo System.Runtime.CompilerServices.Unsafe.As<System.ReadOnlyMemory`1<System.Object>, System.Memory`1<System.Object>>
constexpr auto TTo_System_Runtime_CompilerServices_Unsafe_As_System_Boolean__System_Threading_Volatile_VolatileBoolean__T_output = 5828560; // TTo System.Runtime.CompilerServices.Unsafe.As<System.Boolean, System.Threading.Volatile/VolatileBoolean>
constexpr auto TTo_System_Runtime_CompilerServices_Unsafe_As_System_Byte__EntityRef_1_System_Object___T_output = 5828560; // TTo System.Runtime.CompilerServices.Unsafe.As<System.Byte, EntityRef`1<System.Object>>
constexpr auto TTo_System_Runtime_CompilerServices_Unsafe_As_System_Byte__InvokeHandlerBase_1_InvokeTiming_System_Object___T_output = 5828560; // TTo System.Runtime.CompilerServices.Unsafe.As<System.Byte, InvokeHandlerBase`1/InvokeTiming<System.Object>>
constexpr auto TTo_System_Runtime_CompilerServices_Unsafe_As_System_Byte__System_Collections_Generic_KeyValuePair_2_System_Int32__System_Object___T_output = 5828560; // TTo System.Runtime.CompilerServices.Unsafe.As<System.Byte, System.Collections.Generic.KeyValuePair`2<System.Int32, System.Object>>
constexpr auto TTo_System_Runtime_CompilerServices_Unsafe_As_System_Byte__System_Collections_Generic_KeyValuePair_2_System_Int32Enum__System_Object___T_output = 5828560; // TTo System.Runtime.CompilerServices.Unsafe.As<System.Byte, System.Collections.Generic.KeyValuePair`2<System.Int32Enum, System.Object>>
constexpr auto TTo_System_Runtime_CompilerServices_Unsafe_As_System_Byte__System_Collections_Generic_KeyValuePair_2_System_Int64__System_Object___T_output = 5828560; // TTo System.Runtime.CompilerServices.Unsafe.As<System.Byte, System.Collections.Generic.KeyValuePair`2<System.Int64, System.Object>>
constexpr auto TTo_System_Runtime_CompilerServices_Unsafe_As_System_Byte__System_Collections_Generic_KeyValuePair_2_NetworkableId__System_Object___T_output = 5828560; // TTo System.Runtime.CompilerServices.Unsafe.As<System.Byte, System.Collections.Generic.KeyValuePair`2<NetworkableId, System.Object>>
constexpr auto TTo_System_Runtime_CompilerServices_Unsafe_As_System_Byte__System_Collections_Generic_KeyValuePair_2_System_Object__System_Object___T_output = 5828560; // TTo System.Runtime.CompilerServices.Unsafe.As<System.Byte, System.Collections.Generic.KeyValuePair`2<System.Object, System.Object>>
constexpr auto TTo_System_Runtime_CompilerServices_Unsafe_As_System_Byte__System_Collections_Generic_KeyValuePair_2_System_Object__System_Single___T_output = 5828560; // TTo System.Runtime.CompilerServices.Unsafe.As<System.Byte, System.Collections.Generic.KeyValuePair`2<System.Object, System.Single>>
constexpr auto TTo_System_Runtime_CompilerServices_Unsafe_As_System_Byte__System_Collections_Generic_KeyValuePair_2_System_UInt32__System_Object___T_output = 5828560; // TTo System.Runtime.CompilerServices.Unsafe.As<System.Byte, System.Collections.Generic.KeyValuePair`2<System.UInt32, System.Object>>
constexpr auto TTo_System_Runtime_CompilerServices_Unsafe_As_System_Byte__System_Collections_Generic_KeyValuePair_2_System_UInt64__Steamworks_Dispatch_ResultCallback___T_output = 5828560; // TTo System.Runtime.CompilerServices.Unsafe.As<System.Byte, System.Collections.Generic.KeyValuePair`2<System.UInt64, Steamworks.Dispatch/ResultCallback>>
constexpr auto TTo_System_Runtime_CompilerServices_Unsafe_As_System_Byte__System_ValueTuple_2_System_Object__System_Object___T_output = 5828560; // TTo System.Runtime.CompilerServices.Unsafe.As<System.Byte, System.ValueTuple`2<System.Object, System.Object>>
constexpr auto TTo_System_Runtime_CompilerServices_Unsafe_As_System_Byte__System_ValueTuple_2_TmProEmojiRedirector_EmojiSub__System_Int32___T_output = 5828560; // TTo System.Runtime.CompilerServices.Unsafe.As<System.Byte, System.ValueTuple`2<TmProEmojiRedirector/EmojiSub, System.Int32>>
constexpr auto TTo_System_Runtime_CompilerServices_Unsafe_As_System_Byte__Steamworks_Data_Achievement__T_output = 5828560; // TTo System.Runtime.CompilerServices.Unsafe.As<System.Byte, Steamworks.Data.Achievement>
constexpr auto TTo_System_Runtime_CompilerServices_Unsafe_As_System_Byte__Facepunch_BurstCloth_Jobs_BoneData__T_output = 5828560; // TTo System.Runtime.CompilerServices.Unsafe.As<System.Byte, Facepunch.BurstCloth.Jobs.BoneData>
constexpr auto TTo_System_Runtime_CompilerServices_Unsafe_As_System_Byte__System_Boolean__T_output = 5828560; // TTo System.Runtime.CompilerServices.Unsafe.As<System.Byte, System.Boolean>
constexpr auto TTo_System_Runtime_CompilerServices_Unsafe_As_System_Byte__System_Byte__T_output = 5828560; // TTo System.Runtime.CompilerServices.Unsafe.As<System.Byte, System.Byte>
constexpr auto TTo_System_Runtime_CompilerServices_Unsafe_As_System_Byte__EasyRoads3Dv3_CRedge__T_output = 5828560; // TTo System.Runtime.CompilerServices.Unsafe.As<System.Byte, EasyRoads3Dv3.CRedge>
constexpr auto TTo_System_Runtime_CompilerServices_Unsafe_As_System_Byte__Facepunch_BurstCloth_CapsuleParams__T_output = 5828560; // TTo System.Runtime.CompilerServices.Unsafe.As<System.Byte, Facepunch.BurstCloth.CapsuleParams>
constexpr auto TTo_System_Runtime_CompilerServices_Unsafe_As_System_Byte__Instancing_CellHeader__T_output = 5828560; // TTo System.Runtime.CompilerServices.Unsafe.As<System.Byte, Instancing.CellHeader>
constexpr auto TTo_System_Runtime_CompilerServices_Unsafe_As_System_Byte__Instancing_CellId__T_output = 5828560; // TTo System.Runtime.CompilerServices.Unsafe.As<System.Byte, Instancing.CellId>
constexpr auto TTo_System_Runtime_CompilerServices_Unsafe_As_System_Byte__System_Char__T_output = 5828560; // TTo System.Runtime.CompilerServices.Unsafe.As<System.Byte, System.Char>
constexpr auto TTo_System_Runtime_CompilerServices_Unsafe_As_System_Byte__ClanChatEntry__T_output = 5828560; // TTo System.Runtime.CompilerServices.Unsafe.As<System.Byte, ClanChatEntry>
constexpr auto TTo_System_Runtime_CompilerServices_Unsafe_As_System_Byte__ClanInvitation__T_output = 5828560; // TTo System.Runtime.CompilerServices.Unsafe.As<System.Byte, ClanInvitation>
constexpr auto TTo_System_Runtime_CompilerServices_Unsafe_As_System_Byte__Facepunch_Nexus_Models_ClanInvitation__T_output = 5828560; // TTo System.Runtime.CompilerServices.Unsafe.As<System.Byte, Facepunch.Nexus.Models.ClanInvitation>
constexpr auto TTo_System_Runtime_CompilerServices_Unsafe_As_System_Byte__ClanInvite__T_output = 5828560; // TTo System.Runtime.CompilerServices.Unsafe.As<System.Byte, ClanInvite>
constexpr auto TTo_System_Runtime_CompilerServices_Unsafe_As_System_Byte__Facepunch_Nexus_Models_ClanInvite__T_output = 5828560; // TTo System.Runtime.CompilerServices.Unsafe.As<System.Byte, Facepunch.Nexus.Models.ClanInvite>
constexpr auto TTo_System_Runtime_CompilerServices_Unsafe_As_System_Byte__ClanLogEntry__T_output = 5828560; // TTo System.Runtime.CompilerServices.Unsafe.As<System.Byte, ClanLogEntry>
constexpr auto TTo_System_Runtime_CompilerServices_Unsafe_As_System_Byte__Facepunch_Nexus_Models_ClanLogEntry__T_output = 5828560; // TTo System.Runtime.CompilerServices.Unsafe.As<System.Byte, Facepunch.Nexus.Models.ClanLogEntry>
constexpr auto TTo_System_Runtime_CompilerServices_Unsafe_As_System_Byte__ClanMember__T_output = 5828560; // TTo System.Runtime.CompilerServices.Unsafe.As<System.Byte, ClanMember>
constexpr auto TTo_System_Runtime_CompilerServices_Unsafe_As_System_Byte__Facepunch_Nexus_Models_ClanMember__T_output = 5828560; // TTo System.Runtime.CompilerServices.Unsafe.As<System.Byte, Facepunch.Nexus.Models.ClanMember>
constexpr auto TTo_System_Runtime_CompilerServices_Unsafe_As_System_Byte__ClanRole__T_output = 5828560; // TTo System.Runtime.CompilerServices.Unsafe.As<System.Byte, ClanRole>
constexpr auto TTo_System_Runtime_CompilerServices_Unsafe_As_System_Byte__Facepunch_Nexus_Models_ClanRole__T_output = 5828560; // TTo System.Runtime.CompilerServices.Unsafe.As<System.Byte, Facepunch.Nexus.Models.ClanRole>
constexpr auto TTo_System_Runtime_CompilerServices_Unsafe_As_System_Byte__UnityEngine_Color__T_output = 5828560; // TTo System.Runtime.CompilerServices.Unsafe.As<System.Byte, UnityEngine.Color>
constexpr auto TTo_System_Runtime_CompilerServices_Unsafe_As_System_Byte__UnityEngine_Color32__T_output = 5828560; // TTo System.Runtime.CompilerServices.Unsafe.As<System.Byte, UnityEngine.Color32>
constexpr auto TTo_System_Runtime_CompilerServices_Unsafe_As_System_Byte__EasyRoads3Dv3_CombineClass__T_output = 5828560; // TTo System.Runtime.CompilerServices.Unsafe.As<System.Byte, EasyRoads3Dv3.CombineClass>
constexpr auto TTo_System_Runtime_CompilerServices_Unsafe_As_System_Byte__Epic_OnlineServices_Presence_DataRecordInternal__T_output = 5828560; // TTo System.Runtime.CompilerServices.Unsafe.As<System.Byte, Epic.OnlineServices.Presence.DataRecordInternal>
constexpr auto TTo_System_Runtime_CompilerServices_Unsafe_As_System_Byte__System_DateTime__T_output = 5828560; // TTo System.Runtime.CompilerServices.Unsafe.As<System.Byte, System.DateTime>
constexpr auto TTo_System_Runtime_CompilerServices_Unsafe_As_System_Byte__System_DateTimeOffset__T_output = 5828560; // TTo System.Runtime.CompilerServices.Unsafe.As<System.Byte, System.DateTimeOffset>
constexpr auto TTo_System_Runtime_CompilerServices_Unsafe_As_System_Byte__System_Decimal__T_output = 5828560; // TTo System.Runtime.CompilerServices.Unsafe.As<System.Byte, System.Decimal>
constexpr auto TTo_System_Runtime_CompilerServices_Unsafe_As_System_Byte__ProtoBuf_DemoShotFloatKeyframe__T_output = 5828560; // TTo System.Runtime.CompilerServices.Unsafe.As<System.Byte, ProtoBuf.DemoShotFloatKeyframe>
constexpr auto TTo_System_Runtime_CompilerServices_Unsafe_As_System_Byte__ProtoBuf_DemoShotParentKeyframe__T_output = 5828560; // TTo System.Runtime.CompilerServices.Unsafe.As<System.Byte, ProtoBuf.DemoShotParentKeyframe>
constexpr auto TTo_System_Runtime_CompilerServices_Unsafe_As_System_Byte__ProtoBuf_DemoShotQuaternionKeyframe__T_output = 5828560; // TTo System.Runtime.CompilerServices.Unsafe.As<System.Byte, ProtoBuf.DemoShotQuaternionKeyframe>
constexpr auto TTo_System_Runtime_CompilerServices_Unsafe_As_System_Byte__ProtoBuf_DemoShotVectorKeyframe__T_output = 5828560; // TTo System.Runtime.CompilerServices.Unsafe.As<System.Byte, ProtoBuf.DemoShotVectorKeyframe>
constexpr auto TTo_System_Runtime_CompilerServices_Unsafe_As_System_Byte__System_Collections_DictionaryEntry__T_output = 5828560; // TTo System.Runtime.CompilerServices.Unsafe.As<System.Byte, System.Collections.DictionaryEntry>
constexpr auto TTo_System_Runtime_CompilerServices_Unsafe_As_System_Byte__System_Double__T_output = 5828560; // TTo System.Runtime.CompilerServices.Unsafe.As<System.Byte, System.Double>
constexpr auto TTo_System_Runtime_CompilerServices_Unsafe_As_System_Byte__Instancing_DrawCallJobData__T_output = 5828560; // TTo System.Runtime.CompilerServices.Unsafe.As<System.Byte, Instancing.DrawCallJobData>
constexpr auto TTo_System_Runtime_CompilerServices_Unsafe_As_System_Byte__EasyRoads3Dv3_ERCell__T_output = 5828560; // TTo System.Runtime.CompilerServices.Unsafe.As<System.Byte, EasyRoads3Dv3.ERCell>
constexpr auto TTo_System_Runtime_CompilerServices_Unsafe_As_System_Byte__EasyRoads3Dv3_ERChildsSO__T_output = 5828560; // TTo System.Runtime.CompilerServices.Unsafe.As<System.Byte, EasyRoads3Dv3.ERChildsSO>
constexpr auto TTo_System_Runtime_CompilerServices_Unsafe_As_System_Byte__EasyRoads3Dv3_ERConnectionGUIStatus__T_output = 5828560; // TTo System.Runtime.CompilerServices.Unsafe.As<System.Byte, EasyRoads3Dv3.ERConnectionGUIStatus>
constexpr auto TTo_System_Runtime_CompilerServices_Unsafe_As_System_Byte__EasyRoads3Dv3_ERLane__T_output = 5828560; // TTo System.Runtime.CompilerServices.Unsafe.As<System.Byte, EasyRoads3Dv3.ERLane>
constexpr auto TTo_System_Runtime_CompilerServices_Unsafe_As_System_Byte__EasyRoads3Dv3_ERSOSection__T_output = 5828560; // TTo System.Runtime.CompilerServices.Unsafe.As<System.Byte, EasyRoads3Dv3.ERSOSection>
constexpr auto TTo_System_Runtime_CompilerServices_Unsafe_As_System_Byte__EasyRoads3Dv3_ERSplatmap__T_output = 5828560; // TTo System.Runtime.CompilerServices.Unsafe.As<System.Byte, EasyRoads3Dv3.ERSplatmap>
constexpr auto TTo_System_Runtime_CompilerServices_Unsafe_As_System_Byte__EasyRoads3Dv3_ERTerrainChange__T_output = 5828560; // TTo System.Runtime.CompilerServices.Unsafe.As<System.Byte, EasyRoads3Dv3.ERTerrainChange>
constexpr auto TTo_System_Runtime_CompilerServices_Unsafe_As_System_Byte__EasyRoads3Dv3_ERVSData__T_output = 5828560; // TTo System.Runtime.CompilerServices.Unsafe.As<System.Byte, EasyRoads3Dv3.ERVSData>
constexpr auto TTo_System_Runtime_CompilerServices_Unsafe_As_System_Byte__Facepunch_Rust_EventRecordField__T_output = 5828560; // TTo System.Runtime.CompilerServices.Unsafe.As<System.Byte, Facepunch.Rust.EventRecordField>
constexpr auto TTo_System_Runtime_CompilerServices_Unsafe_As_System_Byte__Steamworks_Friend__T_output = 5828560; // TTo System.Runtime.CompilerServices.Unsafe.As<System.Byte, Steamworks.Friend>
constexpr auto TTo_System_Runtime_CompilerServices_Unsafe_As_System_Byte__UnityEngine_TextCore_GlyphRect__T_output = 5828560; // TTo System.Runtime.CompilerServices.Unsafe.As<System.Byte, UnityEngine.TextCore.GlyphRect>
constexpr auto TTo_System_Runtime_CompilerServices_Unsafe_As_System_Byte__Instancing_InstancedCullData__T_output = 5828560; // TTo System.Runtime.CompilerServices.Unsafe.As<System.Byte, Instancing.InstancedCullData>
constexpr auto TTo_System_Runtime_CompilerServices_Unsafe_As_System_Byte__System_Int16__T_output = 5828560; // TTo System.Runtime.CompilerServices.Unsafe.As<System.Byte, System.Int16>
constexpr auto TTo_System_Runtime_CompilerServices_Unsafe_As_System_Byte__System_Int32__T_output = 5828560; // TTo System.Runtime.CompilerServices.Unsafe.As<System.Byte, System.Int32>
constexpr auto TTo_System_Runtime_CompilerServices_Unsafe_As_System_Byte__System_Int32Enum__T_output = 5828560; // TTo System.Runtime.CompilerServices.Unsafe.As<System.Byte, System.Int32Enum>
constexpr auto TTo_System_Runtime_CompilerServices_Unsafe_As_System_Byte__System_Int64__T_output = 5828560; // TTo System.Runtime.CompilerServices.Unsafe.As<System.Byte, System.Int64>
constexpr auto TTo_System_Runtime_CompilerServices_Unsafe_As_System_Byte__System_IntPtr__T_output = 5828560; // TTo System.Runtime.CompilerServices.Unsafe.As<System.Byte, System.IntPtr>
constexpr auto TTo_System_Runtime_CompilerServices_Unsafe_As_System_Byte__Steamworks_Data_InventoryDefId__T_output = 5828560; // TTo System.Runtime.CompilerServices.Unsafe.As<System.Byte, Steamworks.Data.InventoryDefId>
constexpr auto TTo_System_Runtime_CompilerServices_Unsafe_As_System_Byte__Steamworks_InventoryItem__T_output = 5828560; // TTo System.Runtime.CompilerServices.Unsafe.As<System.Byte, Steamworks.InventoryItem>
constexpr auto TTo_System_Runtime_CompilerServices_Unsafe_As_System_Byte__Steamworks_InventoryRecipe__T_output = 5828560; // TTo System.Runtime.CompilerServices.Unsafe.As<System.Byte, Steamworks.InventoryRecipe>
constexpr auto TTo_System_Runtime_CompilerServices_Unsafe_As_System_Byte__InvokeAction__T_output = 5828560; // TTo System.Runtime.CompilerServices.Unsafe.As<System.Byte, InvokeAction>
constexpr auto TTo_System_Runtime_CompilerServices_Unsafe_As_System_Byte__Epic_OnlineServices_Ecom_ItemOwnershipInternal__T_output = 5828560; // TTo System.Runtime.CompilerServices.Unsafe.As<System.Byte, Epic.OnlineServices.Ecom.ItemOwnershipInternal>
constexpr auto TTo_System_Runtime_CompilerServices_Unsafe_As_System_Byte__Newtonsoft_Json_JsonPosition__T_output = 5828560; // TTo System.Runtime.CompilerServices.Unsafe.As<System.Byte, Newtonsoft.Json.JsonPosition>
constexpr auto TTo_System_Runtime_CompilerServices_Unsafe_As_System_Byte__Steamworks_Data_MatchMakingKeyValuePair__T_output = 5828560; // TTo System.Runtime.CompilerServices.Unsafe.As<System.Byte, Steamworks.Data.MatchMakingKeyValuePair>
constexpr auto TTo_System_Runtime_CompilerServices_Unsafe_As_System_Byte__MeshColliderInstance__T_output = 5828560; // TTo System.Runtime.CompilerServices.Unsafe.As<System.Byte, MeshColliderInstance>
constexpr auto TTo_System_Runtime_CompilerServices_Unsafe_As_System_Byte__MeshInstance__T_output = 5828560; // TTo System.Runtime.CompilerServices.Unsafe.As<System.Byte, MeshInstance>
constexpr auto TTo_System_Runtime_CompilerServices_Unsafe_As_System_Byte__Instancing_MeshOverrideData__T_output = 5828560; // TTo System.Runtime.CompilerServices.Unsafe.As<System.Byte, Instancing.MeshOverrideData>
constexpr auto TTo_System_Runtime_CompilerServices_Unsafe_As_System_Byte__MeshRendererInstance__T_output = 5828560; // TTo System.Runtime.CompilerServices.Unsafe.As<System.Byte, MeshRendererInstance>
constexpr auto TTo_System_Runtime_CompilerServices_Unsafe_As_System_Byte__Epic_OnlineServices_Mods_ModIdentifierInternal__T_output = 5828560; // TTo System.Runtime.CompilerServices.Unsafe.As<System.Byte, Epic.OnlineServices.Mods.ModIdentifierInternal>
constexpr auto TTo_System_Runtime_CompilerServices_Unsafe_As_System_Byte__UnityEngine_AI_NavMeshBuildMarkup__T_output = 5828560; // TTo System.Runtime.CompilerServices.Unsafe.As<System.Byte, UnityEngine.AI.NavMeshBuildMarkup>
constexpr auto TTo_System_Runtime_CompilerServices_Unsafe_As_System_Byte__UnityEngine_AI_NavMeshBuildSource__T_output = 5828560; // TTo System.Runtime.CompilerServices.Unsafe.As<System.Byte, UnityEngine.AI.NavMeshBuildSource>
constexpr auto TTo_System_Runtime_CompilerServices_Unsafe_As_System_Byte__NetworkableId__T_output = 5828560; // TTo System.Runtime.CompilerServices.Unsafe.As<System.Byte, NetworkableId>
constexpr auto TTo_System_Runtime_CompilerServices_Unsafe_As_System_Byte__EasyRoads3Dv3_NormalPairs__T_output = 5828560; // TTo System.Runtime.CompilerServices.Unsafe.As<System.Byte, EasyRoads3Dv3.NormalPairs>
constexpr auto TTo_System_Runtime_CompilerServices_Unsafe_As_System_Byte__System_Object__T_output = 5828560; // TTo System.Runtime.CompilerServices.Unsafe.As<System.Byte, System.Object>
constexpr auto TTo_System_Runtime_CompilerServices_Unsafe_As_System_Byte__GameMenu_Option__T_output = 5828560; // TTo System.Runtime.CompilerServices.Unsafe.As<System.Byte, GameMenu.Option>
constexpr auto TTo_System_Runtime_CompilerServices_Unsafe_As_System_Byte__Rust_UI_Option__T_output = 5828560; // TTo System.Runtime.CompilerServices.Unsafe.As<System.Byte, Rust.UI.Option>
constexpr auto TTo_System_Runtime_CompilerServices_Unsafe_As_System_Byte__Epic_OnlineServices_RTC_ParticipantMetadataInternal__T_output = 5828560; // TTo System.Runtime.CompilerServices.Unsafe.As<System.Byte, Epic.OnlineServices.RTC.ParticipantMetadataInternal>
constexpr auto TTo_System_Runtime_CompilerServices_Unsafe_As_System_Byte__PlayerItemRecipe__T_output = 5828560; // TTo System.Runtime.CompilerServices.Unsafe.As<System.Byte, PlayerItemRecipe>
constexpr auto TTo_System_Runtime_CompilerServices_Unsafe_As_System_Byte__Epic_OnlineServices_Achievements_PlayerStatInfoInternal__T_output = 5828560; // TTo System.Runtime.CompilerServices.Unsafe.As<System.Byte, Epic.OnlineServices.Achievements.PlayerStatInfoInternal>
constexpr auto TTo_System_Runtime_CompilerServices_Unsafe_As_System_Byte__System_Xml_Schema_RangePositionInfo__T_output = 5828560; // TTo System.Runtime.CompilerServices.Unsafe.As<System.Byte, System.Xml.Schema.RangePositionInfo>
constexpr auto TTo_System_Runtime_CompilerServices_Unsafe_As_System_Byte__UnityEngine_RaycastHit__T_output = 5828560; // TTo System.Runtime.CompilerServices.Unsafe.As<System.Byte, UnityEngine.RaycastHit>
constexpr auto TTo_System_Runtime_CompilerServices_Unsafe_As_System_Byte__UnityEngine_RaycastHit2D__T_output = 5828560; // TTo System.Runtime.CompilerServices.Unsafe.As<System.Byte, UnityEngine.RaycastHit2D>
constexpr auto TTo_System_Runtime_CompilerServices_Unsafe_As_System_Byte__UnityEngine_EventSystems_RaycastResult__T_output = 5828560; // TTo System.Runtime.CompilerServices.Unsafe.As<System.Byte, UnityEngine.EventSystems.RaycastResult>
constexpr auto TTo_System_Runtime_CompilerServices_Unsafe_As_System_Byte__UnityEngine_Rect__T_output = 5828560; // TTo System.Runtime.CompilerServices.Unsafe.As<System.Byte, UnityEngine.Rect>
constexpr auto TTo_System_Runtime_CompilerServices_Unsafe_As_System_Byte__Instancing_RenderSlice__T_output = 5828560; // TTo System.Runtime.CompilerServices.Unsafe.As<System.Byte, Instancing.RenderSlice>
constexpr auto TTo_System_Runtime_CompilerServices_Unsafe_As_System_Byte__UnityEngine_Rendering_RenderTargetIdentifier__T_output = 5828560; // TTo System.Runtime.CompilerServices.Unsafe.As<System.Byte, UnityEngine.Rendering.RenderTargetIdentifier>
constexpr auto TTo_System_Runtime_CompilerServices_Unsafe_As_System_Byte__UnityEngine_Resolution__T_output = 5828560; // TTo System.Runtime.CompilerServices.Unsafe.As<System.Byte, UnityEngine.Resolution>
constexpr auto TTo_System_Runtime_CompilerServices_Unsafe_As_System_Byte__System_SByte__T_output = 5828560; // TTo System.Runtime.CompilerServices.Unsafe.As<System.Byte, System.SByte>
constexpr auto TTo_System_Runtime_CompilerServices_Unsafe_As_System_Byte__ServerInfo__T_output = 5828560; // TTo System.Runtime.CompilerServices.Unsafe.As<System.Byte, ServerInfo>
constexpr auto TTo_System_Runtime_CompilerServices_Unsafe_As_System_Byte__Steamworks_Data_ServerInfo__T_output = 5828560; // TTo System.Runtime.CompilerServices.Unsafe.As<System.Byte, Steamworks.Data.ServerInfo>
constexpr auto TTo_System_Runtime_CompilerServices_Unsafe_As_System_Byte__Melanchall_DryWetMidi_Common_SevenBitNumber__T_output = 5828560; // TTo System.Runtime.CompilerServices.Unsafe.As<System.Byte, Melanchall.DryWetMidi.Common.SevenBitNumber>
constexpr auto TTo_System_Runtime_CompilerServices_Unsafe_As_System_Byte__System_Single__T_output = 5828560; // TTo System.Runtime.CompilerServices.Unsafe.As<System.Byte, System.Single>
constexpr auto TTo_System_Runtime_CompilerServices_Unsafe_As_System_Byte__SpawnIndividual__T_output = 5828560; // TTo System.Runtime.CompilerServices.Unsafe.As<System.Byte, SpawnIndividual>
constexpr auto TTo_System_Runtime_CompilerServices_Unsafe_As_System_Byte__Epic_OnlineServices_Achievements_StatThresholdsInternal__T_output = 5828560; // TTo System.Runtime.CompilerServices.Unsafe.As<System.Byte, Epic.OnlineServices.Achievements.StatThresholdsInternal>
constexpr auto TTo_System_Runtime_CompilerServices_Unsafe_As_System_Byte__System_TimeSpan__T_output = 5828560; // TTo System.Runtime.CompilerServices.Unsafe.As<System.Byte, System.TimeSpan>
constexpr auto TTo_System_Runtime_CompilerServices_Unsafe_As_System_Byte__Rust_RGB_SteelSeries_Models_TimelineEvent__T_output = 5828560; // TTo System.Runtime.CompilerServices.Unsafe.As<System.Byte, Rust.RGB.SteelSeries.Models.TimelineEvent>
constexpr auto TTo_System_Runtime_CompilerServices_Unsafe_As_System_Byte__TraceInfo__T_output = 5828560; // TTo System.Runtime.CompilerServices.Unsafe.As<System.Byte, TraceInfo>
constexpr auto TTo_System_Runtime_CompilerServices_Unsafe_As_System_Byte__Rust_Interpolation_TransformSnapshot__T_output = 5828560; // TTo System.Runtime.CompilerServices.Unsafe.As<System.Byte, Rust.Interpolation.TransformSnapshot>
constexpr auto TTo_System_Runtime_CompilerServices_Unsafe_As_System_Byte__UnityEngine_TreeInstance__T_output = 5828560; // TTo System.Runtime.CompilerServices.Unsafe.As<System.Byte, UnityEngine.TreeInstance>
constexpr auto TTo_System_Runtime_CompilerServices_Unsafe_As_System_Byte__UnityEngine_UICharInfo__T_output = 5828560; // TTo System.Runtime.CompilerServices.Unsafe.As<System.Byte, UnityEngine.UICharInfo>
constexpr auto TTo_System_Runtime_CompilerServices_Unsafe_As_System_Byte__UnityEngine_UILineInfo__T_output = 5828560; // TTo System.Runtime.CompilerServices.Unsafe.As<System.Byte, UnityEngine.UILineInfo>
constexpr auto TTo_System_Runtime_CompilerServices_Unsafe_As_System_Byte__UnityEngine_UIVertex__T_output = 5828560; // TTo System.Runtime.CompilerServices.Unsafe.As<System.Byte, UnityEngine.UIVertex>
constexpr auto TTo_System_Runtime_CompilerServices_Unsafe_As_System_Byte__System_UInt16__T_output = 5828560; // TTo System.Runtime.CompilerServices.Unsafe.As<System.Byte, System.UInt16>
constexpr auto TTo_System_Runtime_CompilerServices_Unsafe_As_System_Byte__System_UInt32__T_output = 5828560; // TTo System.Runtime.CompilerServices.Unsafe.As<System.Byte, System.UInt32>
constexpr auto TTo_System_Runtime_CompilerServices_Unsafe_As_System_Byte__System_UInt64__T_output = 5828560; // TTo System.Runtime.CompilerServices.Unsafe.As<System.Byte, System.UInt64>
constexpr auto TTo_System_Runtime_CompilerServices_Unsafe_As_System_Byte__Facepunch_Nexus_Models_VariableUpdate__T_output = 5828560; // TTo System.Runtime.CompilerServices.Unsafe.As<System.Byte, Facepunch.Nexus.Models.VariableUpdate>
constexpr auto TTo_System_Runtime_CompilerServices_Unsafe_As_System_Byte__UnityEngine_Vector2__T_output = 5828560; // TTo System.Runtime.CompilerServices.Unsafe.As<System.Byte, UnityEngine.Vector2>
constexpr auto TTo_System_Runtime_CompilerServices_Unsafe_As_System_Byte__Vector2i__T_output = 5828560; // TTo System.Runtime.CompilerServices.Unsafe.As<System.Byte, Vector2i>
constexpr auto TTo_System_Runtime_CompilerServices_Unsafe_As_System_Byte__UnityEngine_Vector3__T_output = 5828560; // TTo System.Runtime.CompilerServices.Unsafe.As<System.Byte, UnityEngine.Vector3>
constexpr auto TTo_System_Runtime_CompilerServices_Unsafe_As_System_Byte__UnityEngine_Vector4__T_output = 5828560; // TTo System.Runtime.CompilerServices.Unsafe.As<System.Byte, UnityEngine.Vector4>
constexpr auto TTo_System_Runtime_CompilerServices_Unsafe_As_System_Byte__ProtoBuf_VectorData__T_output = 5828560; // TTo System.Runtime.CompilerServices.Unsafe.As<System.Byte, ProtoBuf.VectorData>
constexpr auto TTo_System_Runtime_CompilerServices_Unsafe_As_System_Byte__ViewModelDrawEvent__T_output = 5828560; // TTo System.Runtime.CompilerServices.Unsafe.As<System.Byte, ViewModelDrawEvent>
constexpr auto TTo_System_Runtime_CompilerServices_Unsafe_As_System_Byte__Instancing_VirtualPrefab__T_output = 5828560; // TTo System.Runtime.CompilerServices.Unsafe.As<System.Byte, Instancing.VirtualPrefab>
constexpr auto TTo_System_Runtime_CompilerServices_Unsafe_As_System_Byte__System_Security_Cryptography_X509Certificates_X509ChainStatus__T_output = 5828560; // TTo System.Runtime.CompilerServices.Unsafe.As<System.Byte, System.Security.Cryptography.X509Certificates.X509ChainStatus>
constexpr auto TTo_System_Runtime_CompilerServices_Unsafe_As_System_Byte__Unity_Mathematics_float4__T_output = 5828560; // TTo System.Runtime.CompilerServices.Unsafe.As<System.Byte, Unity.Mathematics.float4>
constexpr auto TTo_System_Runtime_CompilerServices_Unsafe_As_System_Byte__Unity_Mathematics_float4x4__T_output = 5828560; // TTo System.Runtime.CompilerServices.Unsafe.As<System.Byte, Unity.Mathematics.float4x4>
constexpr auto TTo_System_Runtime_CompilerServices_Unsafe_As_System_Byte__ConVar_Admin_PlayerInfo__T_output = 5828560; // TTo System.Runtime.CompilerServices.Unsafe.As<System.Byte, ConVar.Admin/PlayerInfo>
constexpr auto TTo_System_Runtime_CompilerServices_Unsafe_As_System_Byte__ConVar_Admin_ServerConvarInfo__T_output = 5828560; // TTo System.Runtime.CompilerServices.Unsafe.As<System.Byte, ConVar.Admin/ServerConvarInfo>
constexpr auto TTo_System_Runtime_CompilerServices_Unsafe_As_System_Byte__ConVar_Admin_ServerUGCInfo__T_output = 5828560; // TTo System.Runtime.CompilerServices.Unsafe.As<System.Byte, ConVar.Admin/ServerUGCInfo>
constexpr auto TTo_System_Runtime_CompilerServices_Unsafe_As_System_Byte__AdvancedChristmasLights_pointEntry__T_output = 5828560; // TTo System.Runtime.CompilerServices.Unsafe.As<System.Byte, AdvancedChristmasLights/pointEntry>
constexpr auto TTo_System_Runtime_CompilerServices_Unsafe_As_System_Byte__AlignedLineDrawer_LinePoint__T_output = 5828560; // TTo System.Runtime.CompilerServices.Unsafe.As<System.Byte, AlignedLineDrawer/LinePoint>
constexpr auto TTo_System_Runtime_CompilerServices_Unsafe_As_System_Byte__AtmosphereVolumeRenderer_CurrentVolumeEntry__T_output = 5828560; // TTo System.Runtime.CompilerServices.Unsafe.As<System.Byte, AtmosphereVolumeRenderer/CurrentVolumeEntry>
constexpr auto TTo_System_Runtime_CompilerServices_Unsafe_As_System_Byte__AttackHelicopterTurret_HeliTurretSnapshot__T_output = 5828560; // TTo System.Runtime.CompilerServices.Unsafe.As<System.Byte, AttackHelicopterTurret/HeliTurretSnapshot>
constexpr auto TTo_System_Runtime_CompilerServices_Unsafe_As_System_Byte__BaseEntity_PendingFileRequest__T_output = 5828560; // TTo System.Runtime.CompilerServices.Unsafe.As<System.Byte, BaseEntity/PendingFileRequest>
constexpr auto TTo_System_Runtime_CompilerServices_Unsafe_As_System_Byte__BaseRidableAnimal_PurchaseOption__T_output = 5828560; // TTo System.Runtime.CompilerServices.Unsafe.As<System.Byte, BaseRidableAnimal/PurchaseOption>
constexpr auto TTo_System_Runtime_CompilerServices_Unsafe_As_System_Byte__UnityEngine_BeforeRenderHelper_OrderBlock__T_output = 5828560; // TTo System.Runtime.CompilerServices.Unsafe.As<System.Byte, UnityEngine.BeforeRenderHelper/OrderBlock>
constexpr auto TTo_System_Runtime_CompilerServices_Unsafe_As_System_Byte__BuildingBlock_MeshRender__T_output = 5828560; // TTo System.Runtime.CompilerServices.Unsafe.As<System.Byte, BuildingBlock/MeshRender>
constexpr auto TTo_System_Runtime_CompilerServices_Unsafe_As_System_Byte__Facepunch_BurstCloth_BurstCloth_Chain__T_output = 5828560; // TTo System.Runtime.CompilerServices.Unsafe.As<System.Byte, Facepunch.BurstCloth.BurstCloth/Chain>
constexpr auto TTo_System_Runtime_CompilerServices_Unsafe_As_System_Byte__UnityEngine_Camera_RenderRequest__T_output = 5828560; // TTo System.Runtime.CompilerServices.Unsafe.As<System.Byte, UnityEngine.Camera/RenderRequest>
constexpr auto TTo_System_Runtime_CompilerServices_Unsafe_As_System_Byte__CardGameUI_KeycodeWithAction__T_output = 5828560; // TTo System.Runtime.CompilerServices.Unsafe.As<System.Byte, CardGameUI/KeycodeWithAction>
constexpr auto TTo_System_Runtime_CompilerServices_Unsafe_As_System_Byte__Cassette_LoadRequest__T_output = 5828560; // TTo System.Runtime.CompilerServices.Unsafe.As<System.Byte, Cassette/LoadRequest>
constexpr auto TTo_System_Runtime_CompilerServices_Unsafe_As_System_Byte__ConVar_Chat_MuteEntry__T_output = 5828560; // TTo System.Runtime.CompilerServices.Unsafe.As<System.Byte, ConVar.Chat/MuteEntry>
constexpr auto TTo_System_Runtime_CompilerServices_Unsafe_As_System_Byte__Construction_MeshPlaceholder__T_output = 5828560; // TTo System.Runtime.CompilerServices.Unsafe.As<System.Byte, Construction/MeshPlaceholder>
constexpr auto TTo_System_Runtime_CompilerServices_Unsafe_As_System_Byte__CreationGibSpawner_ConditionalGibSource__T_output = 5828560; // TTo System.Runtime.CompilerServices.Unsafe.As<System.Byte, CreationGibSpawner/ConditionalGibSource>
constexpr auto TTo_System_Runtime_CompilerServices_Unsafe_As_System_Byte__DamageRenderer_DamageShowingRenderer__T_output = 5828560; // TTo System.Runtime.CompilerServices.Unsafe.As<System.Byte, DamageRenderer/DamageShowingRenderer>
constexpr auto TTo_System_Runtime_CompilerServices_Unsafe_As_System_Byte__DeferredExtensionMesh_MaterialLink__T_output = 5828560; // TTo System.Runtime.CompilerServices.Unsafe.As<System.Byte, DeferredExtensionMesh/MaterialLink>
constexpr auto TTo_System_Runtime_CompilerServices_Unsafe_As_System_Byte__DeferredMeshDecal_MaterialLink__T_output = 5828560; // TTo System.Runtime.CompilerServices.Unsafe.As<System.Byte, DeferredMeshDecal/MaterialLink>
constexpr auto TTo_System_Runtime_CompilerServices_Unsafe_As_System_Byte__Demos_DemoInfo__T_output = 5828560; // TTo System.Runtime.CompilerServices.Unsafe.As<System.Byte, Demos/DemoInfo>
constexpr auto TTo_System_Runtime_CompilerServices_Unsafe_As_System_Byte__Steamworks_Dispatch_Callback__T_output = 5828560; // TTo System.Runtime.CompilerServices.Unsafe.As<System.Byte, Steamworks.Dispatch/Callback>
constexpr auto TTo_System_Runtime_CompilerServices_Unsafe_As_System_Byte__EasyRoads3Dv3_ERMeshCombineUtility_MeshInstance__T_output = 5828560; // TTo System.Runtime.CompilerServices.Unsafe.As<System.Byte, EasyRoads3Dv3.ERMeshCombineUtility/MeshInstance>
constexpr auto TTo_System_Runtime_CompilerServices_Unsafe_As_System_Byte__EngineDamageOverTime_RecentDamage__T_output = 5828560; // TTo System.Runtime.CompilerServices.Unsafe.As<System.Byte, EngineDamageOverTime/RecentDamage>
constexpr auto TTo_System_Runtime_CompilerServices_Unsafe_As_System_Byte__ExpandedLifeStats_GenericStatDisplay__T_output = 5828560; // TTo System.Runtime.CompilerServices.Unsafe.As<System.Byte, ExpandedLifeStats/GenericStatDisplay>
constexpr auto TTo_System_Runtime_CompilerServices_Unsafe_As_System_Byte__FoliageGridMeshData_FoliageVertex__T_output = 5828560; // TTo System.Runtime.CompilerServices.Unsafe.As<System.Byte, FoliageGridMeshData/FoliageVertex>
constexpr auto TTo_System_Runtime_CompilerServices_Unsafe_As_System_Byte__GameStat_Stat__T_output = 5828560; // TTo System.Runtime.CompilerServices.Unsafe.As<System.Byte, GameStat/Stat>
constexpr auto TTo_System_Runtime_CompilerServices_Unsafe_As_System_Byte__GenerateDungeonGrid_PrefabReplacement__T_output = 5828560; // TTo System.Runtime.CompilerServices.Unsafe.As<System.Byte, GenerateDungeonGrid/PrefabReplacement>
constexpr auto TTo_System_Runtime_CompilerServices_Unsafe_As_System_Byte__Instancing_GeometryBuffers_VertexData__T_output = 5828560; // TTo System.Runtime.CompilerServices.Unsafe.As<System.Byte, Instancing.GeometryBuffers/VertexData>
constexpr auto TTo_System_Runtime_CompilerServices_Unsafe_As_System_Byte__Gibbable_OverrideMesh__T_output = 5828560; // TTo System.Runtime.CompilerServices.Unsafe.As<System.Byte, Gibbable/OverrideMesh>
constexpr auto TTo_System_Runtime_CompilerServices_Unsafe_As_System_Byte__HotAirBalloon_UpgradeOption__T_output = 5828560; // TTo System.Runtime.CompilerServices.Unsafe.As<System.Byte, HotAirBalloon/UpgradeOption>
constexpr auto TTo_System_Runtime_CompilerServices_Unsafe_As_System_Byte__IOEntity_ContainerInputOutput__T_output = 5828560; // TTo System.Runtime.CompilerServices.Unsafe.As<System.Byte, IOEntity/ContainerInputOutput>
constexpr auto TTo_System_Runtime_CompilerServices_Unsafe_As_System_Byte__IconSkinPicker_SkinButtonSetup__T_output = 5828560; // TTo System.Runtime.CompilerServices.Unsafe.As<System.Byte, IconSkinPicker/SkinButtonSetup>
constexpr auto TTo_System_Runtime_CompilerServices_Unsafe_As_System_Byte__ImageStorageEntity_ImageRequest__T_output = 5828560; // TTo System.Runtime.CompilerServices.Unsafe.As<System.Byte, ImageStorageEntity/ImageRequest>
constexpr auto TTo_System_Runtime_CompilerServices_Unsafe_As_System_Byte__IndustrialConveyor_CachedItemMove__T_output = 5828560; // TTo System.Runtime.CompilerServices.Unsafe.As<System.Byte, IndustrialConveyor/CachedItemMove>
constexpr auto TTo_System_Runtime_CompilerServices_Unsafe_As_System_Byte__IndustrialConveyor_ItemFilter__T_output = 5828560; // TTo System.Runtime.CompilerServices.Unsafe.As<System.Byte, IndustrialConveyor/ItemFilter>
constexpr auto TTo_System_Runtime_CompilerServices_Unsafe_As_System_Byte__ProtoBuf_IndustrialConveyorTransfer_ItemTransfer__T_output = 5828560; // TTo System.Runtime.CompilerServices.Unsafe.As<System.Byte, ProtoBuf.IndustrialConveyorTransfer/ItemTransfer>
constexpr auto TTo_System_Runtime_CompilerServices_Unsafe_As_System_Byte__IndustrialFilterDialog_CategorySearch__T_output = 5828560; // TTo System.Runtime.CompilerServices.Unsafe.As<System.Byte, IndustrialFilterDialog/CategorySearch>
constexpr auto TTo_System_Runtime_CompilerServices_Unsafe_As_System_Byte__Steamworks_InventoryItem_Amount__T_output = 5828560; // TTo System.Runtime.CompilerServices.Unsafe.As<System.Byte, Steamworks.InventoryItem/Amount>
constexpr auto TTo_System_Runtime_CompilerServices_Unsafe_As_System_Byte__Steamworks_InventoryRecipe_Ingredient__T_output = 5828560; // TTo System.Runtime.CompilerServices.Unsafe.As<System.Byte, Steamworks.InventoryRecipe/Ingredient>
constexpr auto TTo_System_Runtime_CompilerServices_Unsafe_As_System_Byte__ItemSkinDirectory_Skin__T_output = 5828560; // TTo System.Runtime.CompilerServices.Unsafe.As<System.Byte, ItemSkinDirectory/Skin>
constexpr auto TTo_System_Runtime_CompilerServices_Unsafe_As_System_Byte__KeyframeView_UIKeyframeValue__T_output = 5828560; // TTo System.Runtime.CompilerServices.Unsafe.As<System.Byte, KeyframeView/UIKeyframeValue>
constexpr auto TTo_System_Runtime_CompilerServices_Unsafe_As_System_Byte__LightEx_SyncLightData__T_output = 5828560; // TTo System.Runtime.CompilerServices.Unsafe.As<System.Byte, LightEx/SyncLightData>
constexpr auto TTo_System_Runtime_CompilerServices_Unsafe_As_System_Byte__LocalClock_TimedEvent__T_output = 5828560; // TTo System.Runtime.CompilerServices.Unsafe.As<System.Byte, LocalClock/TimedEvent>
constexpr auto TTo_System_Runtime_CompilerServices_Unsafe_As_System_Byte__MagnetCrane_MagnetCraneSnapshot__T_output = 5828560; // TTo System.Runtime.CompilerServices.Unsafe.As<System.Byte, MagnetCrane/MagnetCraneSnapshot>
constexpr auto TTo_System_Runtime_CompilerServices_Unsafe_As_System_Byte__MapView_MapMarkerCluster__T_output = 5828560; // TTo System.Runtime.CompilerServices.Unsafe.As<System.Byte, MapView/MapMarkerCluster>
constexpr auto TTo_System_Runtime_CompilerServices_Unsafe_As_System_Byte__MapView_SleepingBagCluster__T_output = 5828560; // TTo System.Runtime.CompilerServices.Unsafe.As<System.Byte, MapView/SleepingBagCluster>
constexpr auto TTo_System_Runtime_CompilerServices_Unsafe_As_System_Byte__MeshColliderLookup_LookupEntry__T_output = 5828560; // TTo System.Runtime.CompilerServices.Unsafe.As<System.Byte, MeshColliderLookup/LookupEntry>
constexpr auto TTo_System_Runtime_CompilerServices_Unsafe_As_System_Byte__MeshRendererLookup_LookupEntry__T_output = 5828560; // TTo System.Runtime.CompilerServices.Unsafe.As<System.Byte, MeshRendererLookup/LookupEntry>
constexpr auto TTo_System_Runtime_CompilerServices_Unsafe_As_System_Byte__MidiConvar_KnobBinding__T_output = 5828560; // TTo System.Runtime.CompilerServices.Unsafe.As<System.Byte, MidiConvar/KnobBinding>
constexpr auto TTo_System_Runtime_CompilerServices_Unsafe_As_System_Byte__MidiConvar_NoteBinding__T_output = 5828560; // TTo System.Runtime.CompilerServices.Unsafe.As<System.Byte, MidiConvar/NoteBinding>
constexpr auto TTo_System_Runtime_CompilerServices_Unsafe_As_System_Byte__Facepunch_Output_Entry__T_output = 5828560; // TTo System.Runtime.CompilerServices.Unsafe.As<System.Byte, Facepunch.Output/Entry>
constexpr auto TTo_System_Runtime_CompilerServices_Unsafe_As_System_Byte__ParticleSystemContainer_ParticleSystemGroup__T_output = 5828560; // TTo System.Runtime.CompilerServices.Unsafe.As<System.Byte, ParticleSystemContainer/ParticleSystemGroup>
constexpr auto TTo_System_Runtime_CompilerServices_Unsafe_As_System_Byte__PathFinder_Point__T_output = 5828560; // TTo System.Runtime.CompilerServices.Unsafe.As<System.Byte, PathFinder/Point>
constexpr auto TTo_System_Runtime_CompilerServices_Unsafe_As_System_Byte__Facepunch_Rust_PerformanceLogging_GarbageCollect__T_output = 5828560; // TTo System.Runtime.CompilerServices.Unsafe.As<System.Byte, Facepunch.Rust.PerformanceLogging/GarbageCollect>
constexpr auto TTo_System_Runtime_CompilerServices_Unsafe_As_System_Byte__Facepunch_Rust_PerformanceLogging_LagSpike__T_output = 5828560; // TTo System.Runtime.CompilerServices.Unsafe.As<System.Byte, Facepunch.Rust.PerformanceLogging/LagSpike>
constexpr auto TTo_System_Runtime_CompilerServices_Unsafe_As_System_Byte__PetCommandList_PetCommandDesc__T_output = 5828560; // TTo System.Runtime.CompilerServices.Unsafe.As<System.Byte, PetCommandList/PetCommandDesc>
constexpr auto TTo_System_Runtime_CompilerServices_Unsafe_As_System_Byte__PlaceMonuments_SpawnInfo__T_output = 5828560; // TTo System.Runtime.CompilerServices.Unsafe.As<System.Byte, PlaceMonuments/SpawnInfo>
constexpr auto TTo_System_Runtime_CompilerServices_Unsafe_As_System_Byte__PlaceMonumentsOffshore_SpawnInfo__T_output = 5828560; // TTo System.Runtime.CompilerServices.Unsafe.As<System.Byte, PlaceMonumentsOffshore/SpawnInfo>
constexpr auto TTo_System_Runtime_CompilerServices_Unsafe_As_System_Byte__PlaceMonumentsRailside_SpawnInfo__T_output = 5828560; // TTo System.Runtime.CompilerServices.Unsafe.As<System.Byte, PlaceMonumentsRailside/SpawnInfo>
constexpr auto TTo_System_Runtime_CompilerServices_Unsafe_As_System_Byte__PlaceMonumentsRoadside_SpawnInfo__T_output = 5828560; // TTo System.Runtime.CompilerServices.Unsafe.As<System.Byte, PlaceMonumentsRoadside/SpawnInfo>
constexpr auto TTo_System_Runtime_CompilerServices_Unsafe_As_System_Byte__PlayerItemRecipe_Ingredient__T_output = 5828560; // TTo System.Runtime.CompilerServices.Unsafe.As<System.Byte, PlayerItemRecipe/Ingredient>
constexpr auto TTo_System_Runtime_CompilerServices_Unsafe_As_System_Byte__ProjectileWeaponMod_Modifier__T_output = 5828560; // TTo System.Runtime.CompilerServices.Unsafe.As<System.Byte, ProjectileWeaponMod/Modifier>
constexpr auto TTo_System_Runtime_CompilerServices_Unsafe_As_System_Byte__Facepunch_RCon_BannedAddresses__T_output = 5828560; // TTo System.Runtime.CompilerServices.Unsafe.As<System.Byte, Facepunch.RCon/BannedAddresses>
constexpr auto TTo_System_Runtime_CompilerServices_Unsafe_As_System_Byte__ReflectionProbeEx_CubemapSkyboxVertex__T_output = 5828560; // TTo System.Runtime.CompilerServices.Unsafe.As<System.Byte, ReflectionProbeEx/CubemapSkyboxVertex>
constexpr auto TTo_System_Runtime_CompilerServices_Unsafe_As_System_Byte__ReflectionProbeEx_RenderListEntry__T_output = 5828560; // TTo System.Runtime.CompilerServices.Unsafe.As<System.Byte, ReflectionProbeEx/RenderListEntry>
constexpr auto TTo_System_Runtime_CompilerServices_Unsafe_As_System_Byte__System_Text_RegularExpressions_RegexCharClass_SingleRange__T_output = 5828560; // TTo System.Runtime.CompilerServices.Unsafe.As<System.Byte, System.Text.RegularExpressions.RegexCharClass/SingleRange>
constexpr auto TTo_System_Runtime_CompilerServices_Unsafe_As_System_Byte__Facepunch_Unity_RenderInfo_RendererInstance__T_output = 5828560; // TTo System.Runtime.CompilerServices.Unsafe.As<System.Byte, Facepunch.Unity.RenderInfo/RendererInstance>
constexpr auto TTo_System_Runtime_CompilerServices_Unsafe_As_System_Byte__RustEmojiLibrary_EmojiSource__T_output = 5828560; // TTo System.Runtime.CompilerServices.Unsafe.As<System.Byte, RustEmojiLibrary/EmojiSource>
constexpr auto TTo_System_Runtime_CompilerServices_Unsafe_As_System_Byte__SellOrderEntry_CachedSellOrderState__T_output = 5828560; // TTo System.Runtime.CompilerServices.Unsafe.As<System.Byte, SellOrderEntry/CachedSellOrderState>
constexpr auto TTo_System_Runtime_CompilerServices_Unsafe_As_System_Byte__Facepunch_SkeletonDefinition_Bone__T_output = 5828560; // TTo System.Runtime.CompilerServices.Unsafe.As<System.Byte, Facepunch.SkeletonDefinition/Bone>
constexpr auto TTo_System_Runtime_CompilerServices_Unsafe_As_System_Byte__SkinnedMultiMesh_Part__T_output = 5828560; // TTo System.Runtime.CompilerServices.Unsafe.As<System.Byte, SkinnedMultiMesh/Part>
constexpr auto TTo_System_Runtime_CompilerServices_Unsafe_As_System_Byte__Sonar_SonarSystem_SonarBlip__T_output = 5828560; // TTo System.Runtime.CompilerServices.Unsafe.As<System.Byte, Sonar.SonarSystem/SonarBlip>
constexpr auto TTo_System_Runtime_CompilerServices_Unsafe_As_System_Byte__SpecialPurposeCamera_RenderEntry__T_output = 5828560; // TTo System.Runtime.CompilerServices.Unsafe.As<System.Byte, SpecialPurposeCamera/RenderEntry>
constexpr auto TTo_System_Runtime_CompilerServices_Unsafe_As_System_Byte__Mono_Data_Sqlite_SqliteKeyReader_KeyInfo__T_output = 5828560; // TTo System.Runtime.CompilerServices.Unsafe.As<System.Byte, Mono.Data.Sqlite.SqliteKeyReader/KeyInfo>
constexpr auto TTo_System_Runtime_CompilerServices_Unsafe_As_System_Byte__SteamNewsSource_Story__T_output = 5828560; // TTo System.Runtime.CompilerServices.Unsafe.As<System.Byte, SteamNewsSource/Story>
constexpr auto TTo_System_Runtime_CompilerServices_Unsafe_As_System_Byte__SynchronizedClock_TimedEvent__T_output = 5828560; // TTo System.Runtime.CompilerServices.Unsafe.As<System.Byte, SynchronizedClock/TimedEvent>
constexpr auto TTo_System_Runtime_CompilerServices_Unsafe_As_System_Byte__Facepunch_GUI_TabbedPanel_Tab__T_output = 5828560; // TTo System.Runtime.CompilerServices.Unsafe.As<System.Byte, Facepunch.GUI.TabbedPanel/Tab>
constexpr auto TTo_System_Runtime_CompilerServices_Unsafe_As_System_Byte__Facepunch_Tick_Entry__T_output = 5828560; // TTo System.Runtime.CompilerServices.Unsafe.As<System.Byte, Facepunch.Tick/Entry>
constexpr auto TTo_System_Runtime_CompilerServices_Unsafe_As_System_Byte__TickInterpolator_Segment__T_output = 5828560; // TTo System.Runtime.CompilerServices.Unsafe.As<System.Byte, TickInterpolator/Segment>
constexpr auto TTo_System_Runtime_CompilerServices_Unsafe_As_System_Byte__Rust_UI_Renderer_TickRenderer_Tick__T_output = 5828560; // TTo System.Runtime.CompilerServices.Unsafe.As<System.Byte, Rust.UI.Renderer.TickRenderer/Tick>
constexpr auto TTo_System_Runtime_CompilerServices_Unsafe_As_System_Byte__TrainCar_TrainCarSnapshot__T_output = 5828560; // TTo System.Runtime.CompilerServices.Unsafe.As<System.Byte, TrainCar/TrainCarSnapshot>
constexpr auto TTo_System_Runtime_CompilerServices_Unsafe_As_System_Byte__UnityEngine_UnitySynchronizationContext_WorkRequest__T_output = 5828560; // TTo System.Runtime.CompilerServices.Unsafe.As<System.Byte, UnityEngine.UnitySynchronizationContext/WorkRequest>
constexpr auto TTo_System_Runtime_CompilerServices_Unsafe_As_System_Byte__Rust_Ai_WaypointSet_Waypoint__T_output = 5828560; // TTo System.Runtime.CompilerServices.Unsafe.As<System.Byte, Rust.Ai.WaypointSet/Waypoint>
constexpr auto TTo_System_Runtime_CompilerServices_Unsafe_As_System_Byte__Facepunch_WeightedStringList_Container__T_output = 5828560; // TTo System.Runtime.CompilerServices.Unsafe.As<System.Byte, Facepunch.WeightedStringList/Container>
constexpr auto TTo_System_Runtime_CompilerServices_Unsafe_As_System_Byte__WindZoneExManager_CurrentZoneEntry__T_output = 5828560; // TTo System.Runtime.CompilerServices.Unsafe.As<System.Byte, WindZoneExManager/CurrentZoneEntry>
constexpr auto TTo_System_Runtime_CompilerServices_Unsafe_As_System_Byte__Instancing_WorkshopSkinScheduler_DefaultSkinTexture__T_output = 5828560; // TTo System.Runtime.CompilerServices.Unsafe.As<System.Byte, Instancing.WorkshopSkinScheduler/DefaultSkinTexture>
constexpr auto TTo_System_Runtime_CompilerServices_Unsafe_As_System_Byte__Instancing_WorkshopSkinScheduler_SkinTexture__T_output = 5828560; // TTo System.Runtime.CompilerServices.Unsafe.As<System.Byte, Instancing.WorkshopSkinScheduler/SkinTexture>
constexpr auto TTo_System_Runtime_CompilerServices_Unsafe_As_System_Byte__System_Xml_Schema_XmlSchemaObjectTable_XmlSchemaObjectEntry__T_output = 5828560; // TTo System.Runtime.CompilerServices.Unsafe.As<System.Byte, System.Xml.Schema.XmlSchemaObjectTable/XmlSchemaObjectEntry>
constexpr auto TTo_System_Runtime_CompilerServices_Unsafe_As_System_Byte__WorldSplineData_LUTEntry_LUTPoint__T_output = 5828560; // TTo System.Runtime.CompilerServices.Unsafe.As<System.Byte, WorldSplineData/LUTEntry/LUTPoint>
constexpr auto TTo_System_Runtime_CompilerServices_Unsafe_As_System_Char__System_Byte__T_output = 5828560; // TTo System.Runtime.CompilerServices.Unsafe.As<System.Char, System.Byte>
constexpr auto TTo_System_Runtime_CompilerServices_Unsafe_As_System_Char__System_Char__T_output = 5828560; // TTo System.Runtime.CompilerServices.Unsafe.As<System.Char, System.Char>
constexpr auto TTo_System_Runtime_CompilerServices_Unsafe_As_System_Char__System_IntPtr__T_output = 5828560; // TTo System.Runtime.CompilerServices.Unsafe.As<System.Char, System.IntPtr>
constexpr auto TTo_System_Runtime_CompilerServices_Unsafe_As_System_Char__System_Object__T_output = 5828560; // TTo System.Runtime.CompilerServices.Unsafe.As<System.Char, System.Object>
constexpr auto TTo_System_Runtime_CompilerServices_Unsafe_As_System_Decimal__System_Decimal_DecCalc__T_output = 5828560; // TTo System.Runtime.CompilerServices.Unsafe.As<System.Decimal, System.Decimal/DecCalc>
constexpr auto TTo_System_Runtime_CompilerServices_Unsafe_As_System_Int16__System_Byte__T_output = 5828560; // TTo System.Runtime.CompilerServices.Unsafe.As<System.Int16, System.Byte>
constexpr auto TTo_System_Runtime_CompilerServices_Unsafe_As_System_Int16__System_Char__T_output = 5828560; // TTo System.Runtime.CompilerServices.Unsafe.As<System.Int16, System.Char>
constexpr auto TTo_System_Runtime_CompilerServices_Unsafe_As_System_Int16__System_IntPtr__T_output = 5828560; // TTo System.Runtime.CompilerServices.Unsafe.As<System.Int16, System.IntPtr>
constexpr auto TTo_System_Runtime_CompilerServices_Unsafe_As_System_Int32__System_Byte__T_output = 5828560; // TTo System.Runtime.CompilerServices.Unsafe.As<System.Int32, System.Byte>
constexpr auto TTo_System_Runtime_CompilerServices_Unsafe_As_System_Int32__System_Char__T_output = 5828560; // TTo System.Runtime.CompilerServices.Unsafe.As<System.Int32, System.Char>
constexpr auto TTo_System_Runtime_CompilerServices_Unsafe_As_System_Int32__System_IntPtr__T_output = 5828560; // TTo System.Runtime.CompilerServices.Unsafe.As<System.Int32, System.IntPtr>
constexpr auto TTo_System_Runtime_CompilerServices_Unsafe_As_System_Int32__System_UInt32__T_output = 5828560; // TTo System.Runtime.CompilerServices.Unsafe.As<System.Int32, System.UInt32>
constexpr auto TTo_System_Runtime_CompilerServices_Unsafe_As_System_Int32__System_Threading_Volatile_VolatileInt32__T_output = 5828560; // TTo System.Runtime.CompilerServices.Unsafe.As<System.Int32, System.Threading.Volatile/VolatileInt32>
constexpr auto TTo_System_Runtime_CompilerServices_Unsafe_As_System_Int64__System_UInt64__T_output = 5828560; // TTo System.Runtime.CompilerServices.Unsafe.As<System.Int64, System.UInt64>
constexpr auto TTo_System_Runtime_CompilerServices_Unsafe_As_System_Object__System_Byte__T_output = 5828560; // TTo System.Runtime.CompilerServices.Unsafe.As<System.Object, System.Byte>
constexpr auto TTo_System_Runtime_CompilerServices_Unsafe_As_System_Object__System_Char__T_output = 5828560; // TTo System.Runtime.CompilerServices.Unsafe.As<System.Object, System.Char>
constexpr auto TTo_System_Runtime_CompilerServices_Unsafe_As_System_Object__System_IntPtr__T_output = 5828560; // TTo System.Runtime.CompilerServices.Unsafe.As<System.Object, System.IntPtr>
constexpr auto TTo_System_Runtime_CompilerServices_Unsafe_As_System_Object__System_Threading_Volatile_VolatileObject__T_output = 5828560; // TTo System.Runtime.CompilerServices.Unsafe.As<System.Object, System.Threading.Volatile/VolatileObject>
constexpr auto TTo_System_Runtime_CompilerServices_Unsafe_As_System_UInt16__System_Byte__T_output = 5828560; // TTo System.Runtime.CompilerServices.Unsafe.As<System.UInt16, System.Byte>
constexpr auto TTo_System_Runtime_CompilerServices_Unsafe_As_System_UInt16__System_Char__T_output = 5828560; // TTo System.Runtime.CompilerServices.Unsafe.As<System.UInt16, System.Char>
constexpr auto TTo_System_Runtime_CompilerServices_Unsafe_As_System_UInt16__System_IntPtr__T_output = 5828560; // TTo System.Runtime.CompilerServices.Unsafe.As<System.UInt16, System.IntPtr>
constexpr auto TTo_System_Runtime_CompilerServices_Unsafe_As_System_UInt32__System_Byte__T_output = 5828560; // TTo System.Runtime.CompilerServices.Unsafe.As<System.UInt32, System.Byte>
constexpr auto TTo_System_Runtime_CompilerServices_Unsafe_As_System_UInt32__System_Char__T_output = 5828560; // TTo System.Runtime.CompilerServices.Unsafe.As<System.UInt32, System.Char>
constexpr auto TTo_System_Runtime_CompilerServices_Unsafe_As_System_UInt32__System_IntPtr__T_output = 5828560; // TTo System.Runtime.CompilerServices.Unsafe.As<System.UInt32, System.IntPtr>
constexpr auto System_Void__System_Runtime_CompilerServices_Unsafe_AsPointer_System_Byte__T_output = 5828560; // System.Void* System.Runtime.CompilerServices.Unsafe.AsPointer<System.Byte>
constexpr auto System_Void__System_Runtime_CompilerServices_Unsafe_AsPointer_System_Char__T_output = 5828560; // System.Void* System.Runtime.CompilerServices.Unsafe.AsPointer<System.Char>
constexpr auto System_Void__System_Runtime_CompilerServices_Unsafe_AsPointer_System_Object__T_output = 5828560; // System.Void* System.Runtime.CompilerServices.Unsafe.AsPointer<System.Object>
constexpr auto System_Void__System_Runtime_CompilerServices_Unsafe_AsPointer_System_Number_NumberBuffer_DigitsAndNullTerminator__T_output = 5828560; // System.Void* System.Runtime.CompilerServices.Unsafe.AsPointer<System.Number/NumberBuffer/DigitsAndNullTerminator>
constexpr auto T_System_Runtime_CompilerServices_Unsafe_AsRef_System_Byte__T_output = 5828560; // T System.Runtime.CompilerServices.Unsafe.AsRef<System.Byte>
constexpr auto T_System_Runtime_CompilerServices_Unsafe_AsRef_System_Char__T_output = 5828560; // T System.Runtime.CompilerServices.Unsafe.AsRef<System.Char>
constexpr auto T_System_Runtime_CompilerServices_Unsafe_AsRef_System_Object__T_output = 5828560; // T System.Runtime.CompilerServices.Unsafe.AsRef<System.Object>
constexpr auto System_Void__Unity_Collections_LowLevel_Unsafe_UnsafeUtility_AddressOf_Unity_Jobs_LowLevel_Unsafe_BatchQueryJob_2_UnityEngine_RaycastCommand__UnityEngine_RaycastHit___T_output = 5828560; // System.Void* Unity.Collections.LowLevel.Unsafe.UnsafeUtility.AddressOf<Unity.Jobs.LowLevel.Unsafe.BatchQueryJob`2<UnityEngine.RaycastCommand, UnityEngine.RaycastHit>>
constexpr auto System_Void__Unity_Collections_LowLevel_Unsafe_UnsafeUtility_AddressOf_Facepunch_BurstCloth_Jobs_InitializeBoneStateJob__T_output = 5828560; // System.Void* Unity.Collections.LowLevel.Unsafe.UnsafeUtility.AddressOf<Facepunch.BurstCloth.Jobs.InitializeBoneStateJob>
constexpr auto System_Void__Unity_Collections_LowLevel_Unsafe_UnsafeUtility_AddressOf_Facepunch_BurstCloth_Jobs_InitializeColliderStateJob__T_output = 5828560; // System.Void* Unity.Collections.LowLevel.Unsafe.UnsafeUtility.AddressOf<Facepunch.BurstCloth.Jobs.InitializeColliderStateJob>
constexpr auto System_Void__Unity_Collections_LowLevel_Unsafe_UnsafeUtility_AddressOf_Unity_Collections_NativeArrayDisposeJob__T_output = 5828560; // System.Void* Unity.Collections.LowLevel.Unsafe.UnsafeUtility.AddressOf<Unity.Collections.NativeArrayDisposeJob>
constexpr auto System_Void__Unity_Collections_LowLevel_Unsafe_UnsafeUtility_AddressOf_Instancing_PreCullingJob__T_output = 5828560; // System.Void* Unity.Collections.LowLevel.Unsafe.UnsafeUtility.AddressOf<Instancing.PreCullingJob>
constexpr auto System_Void__Unity_Collections_LowLevel_Unsafe_UnsafeUtility_AddressOf_Facepunch_BurstCloth_Jobs_SimulatePositionsJob__T_output = 5828560; // System.Void* Unity.Collections.LowLevel.Unsafe.UnsafeUtility.AddressOf<Facepunch.BurstCloth.Jobs.SimulatePositionsJob>
constexpr auto System_Void__Unity_Collections_LowLevel_Unsafe_UnsafeUtility_AddressOf_TransformDrawCallsJob__T_output = 5828560; // System.Void* Unity.Collections.LowLevel.Unsafe.UnsafeUtility.AddressOf<TransformDrawCallsJob>
constexpr auto System_Void__Unity_Collections_LowLevel_Unsafe_UnsafeUtility_AddressOf_Facepunch_BurstCloth_Jobs_UpdateTransformsJob__T_output = 5828560; // System.Void* Unity.Collections.LowLevel.Unsafe.UnsafeUtility.AddressOf<Facepunch.BurstCloth.Jobs.UpdateTransformsJob>
constexpr auto System_Void__Unity_Collections_LowLevel_Unsafe_UnsafeUtility_AddressOf_FishShoal_FishCollisionGatherJob__T_output = 5828560; // System.Void* Unity.Collections.LowLevel.Unsafe.UnsafeUtility.AddressOf<FishShoal/FishCollisionGatherJob>
constexpr auto System_Void__Unity_Collections_LowLevel_Unsafe_UnsafeUtility_AddressOf_FishShoal_FishCollisionProcessJob__T_output = 5828560; // System.Void* Unity.Collections.LowLevel.Unsafe.UnsafeUtility.AddressOf<FishShoal/FishCollisionProcessJob>
constexpr auto System_Void__Unity_Collections_LowLevel_Unsafe_UnsafeUtility_AddressOf_FishShoal_FishUpdateJob__T_output = 5828560; // System.Void* Unity.Collections.LowLevel.Unsafe.UnsafeUtility.AddressOf<FishShoal/FishUpdateJob>
constexpr auto System_Void__Unity_Collections_LowLevel_Unsafe_UnsafeUtility_AddressOf_FishShoal_KillFish__T_output = 5828560; // System.Void* Unity.Collections.LowLevel.Unsafe.UnsafeUtility.AddressOf<FishShoal/KillFish>
constexpr auto System_Void__Unity_Collections_LowLevel_Unsafe_UnsafeUtility_AddressOf_MeshPaintable3D_DrawTextureJob__T_output = 5828560; // System.Void* Unity.Collections.LowLevel.Unsafe.UnsafeUtility.AddressOf<MeshPaintable3D/DrawTextureJob>
constexpr auto System_Void__Unity_Collections_LowLevel_Unsafe_UnsafeUtility_AddressOf_ParticleSystemIK_ParticleSystemIKJob__T_output = 5828560; // System.Void* Unity.Collections.LowLevel.Unsafe.UnsafeUtility.AddressOf<ParticleSystemIK/ParticleSystemIKJob>
constexpr auto System_Void__Unity_Collections_LowLevel_Unsafe_UnsafeUtility_AddressOf_PipeMesh_GeneratePipeMesh__T_output = 5828560; // System.Void* Unity.Collections.LowLevel.Unsafe.UnsafeUtility.AddressOf<PipeMesh/GeneratePipeMesh>
constexpr auto System_Int32_System_Runtime_CompilerServices_Unsafe_SizeOf_System_Numerics_Vector_1_System_UInt16__ = 19077712; // System.Int32 System.Runtime.CompilerServices.Unsafe.SizeOf<System.Numerics.Vector`1<System.UInt16>>
constexpr auto System_Int32_Unity_Collections_LowLevel_Unsafe_UnsafeUtility_SizeOf_Unity_Collections_LowLevel_Unsafe_UnsafeUtility_AlignOfHelper_1_UnityEngine_Rendering_BatchVisibility__ = 19077712; // System.Int32 Unity.Collections.LowLevel.Unsafe.UnsafeUtility.SizeOf<Unity.Collections.LowLevel.Unsafe.UnsafeUtility/AlignOfHelper`1<UnityEngine.Rendering.BatchVisibility>>
constexpr auto System_Int32_Unity_Collections_LowLevel_Unsafe_UnsafeUtility_SizeOf_Unity_Collections_LowLevel_Unsafe_UnsafeUtility_AlignOfHelper_1_Instancing_CellHeader__ = 19077712; // System.Int32 Unity.Collections.LowLevel.Unsafe.UnsafeUtility.SizeOf<Unity.Collections.LowLevel.Unsafe.UnsafeUtility/AlignOfHelper`1<Instancing.CellHeader>>
constexpr auto System_Int32_Unity_Collections_LowLevel_Unsafe_UnsafeUtility_SizeOf_Unity_Collections_LowLevel_Unsafe_UnsafeUtility_AlignOfHelper_1_UnityEngine_Vector3__ = 19077712; // System.Int32 Unity.Collections.LowLevel.Unsafe.UnsafeUtility.SizeOf<Unity.Collections.LowLevel.Unsafe.UnsafeUtility/AlignOfHelper`1<UnityEngine.Vector3>>
constexpr auto System_Int32_Unity_Collections_LowLevel_Unsafe_UnsafeUtility_SizeOf_Unity_Collections_LowLevel_Unsafe_UnsafeUtility_AlignOfHelper_1_UnityEngine_Vector3Int__ = 19077712; // System.Int32 Unity.Collections.LowLevel.Unsafe.UnsafeUtility.SizeOf<Unity.Collections.LowLevel.Unsafe.UnsafeUtility/AlignOfHelper`1<UnityEngine.Vector3Int>>
constexpr auto System_Int32_Unity_Collections_LowLevel_Unsafe_UnsafeUtility_SizeOf_Unity_Collections_LowLevel_Unsafe_UnsafeUtility_AlignOfHelper_1_Unity_Mathematics_float3__ = 19077712; // System.Int32 Unity.Collections.LowLevel.Unsafe.UnsafeUtility.SizeOf<Unity.Collections.LowLevel.Unsafe.UnsafeUtility/AlignOfHelper`1<Unity.Mathematics.float3>>
constexpr auto System_Int32_Unity_Collections_LowLevel_Unsafe_UnsafeUtility_SizeOf_Unity_Jobs_JobHandle_ = 19077712; // System.Int32 Unity.Collections.LowLevel.Unsafe.UnsafeUtility.SizeOf<Unity.Jobs.JobHandle>
constexpr auto System_Int32_Unity_Collections_LowLevel_Unsafe_UnsafeUtility_SizeOf_Instancing_MeshOverrideData_ = 19077712; // System.Int32 Unity.Collections.LowLevel.Unsafe.UnsafeUtility.SizeOf<Instancing.MeshOverrideData>
constexpr auto System_Int32_Unity_Collections_LowLevel_Unsafe_UnsafeUtility_SizeOf_UnityEngine_Plane_ = 19077712; // System.Int32 Unity.Collections.LowLevel.Unsafe.UnsafeUtility.SizeOf<UnityEngine.Plane>
constexpr auto System_Int32_Unity_Collections_LowLevel_Unsafe_UnsafeUtility_SizeOf_UnityEngine_Vector4_ = 19077712; // System.Int32 Unity.Collections.LowLevel.Unsafe.UnsafeUtility.SizeOf<UnityEngine.Vector4>
constexpr auto System_Int32_Unity_Collections_LowLevel_Unsafe_UnsafeUtility_SizeOf_Unity_Mathematics_float4_ = 19077712; // System.Int32 Unity.Collections.LowLevel.Unsafe.UnsafeUtility.SizeOf<Unity.Mathematics.float4>
}
}
namespace Unity_Collections_LowLevel_Unsafe_NativeArrayUnsafeUtility
{
namespace StaticMethods
{
constexpr auto Unity_Collections_NativeArray_1_T__Unity_Collections_LowLevel_Unsafe_NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray_UnityEngine_Rendering_BatchVisibility__System_Void__dataPointer__System_Int32_length__Unity_Collections_Allocator_allocator = 18787280; // Unity.Collections.NativeArray`1<T> Unity.Collections.LowLevel.Unsafe.NativeArrayUnsafeUtility.ConvertExistingDataToNativeArray<UnityEngine.Rendering.BatchVisibility>
constexpr auto Unity_Collections_NativeArray_1_T__Unity_Collections_LowLevel_Unsafe_NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray_Facepunch_BurstCloth_Jobs_BoneData__System_Void__dataPointer__System_Int32_length__Unity_Collections_Allocator_allocator = 18787280; // Unity.Collections.NativeArray`1<T> Unity.Collections.LowLevel.Unsafe.NativeArrayUnsafeUtility.ConvertExistingDataToNativeArray<Facepunch.BurstCloth.Jobs.BoneData>
constexpr auto Unity_Collections_NativeArray_1_T__Unity_Collections_LowLevel_Unsafe_NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray_Facepunch_BurstCloth_Jobs_BoneState__System_Void__dataPointer__System_Int32_length__Unity_Collections_Allocator_allocator = 18787280; // Unity.Collections.NativeArray`1<T> Unity.Collections.LowLevel.Unsafe.NativeArrayUnsafeUtility.ConvertExistingDataToNativeArray<Facepunch.BurstCloth.Jobs.BoneState>
constexpr auto Unity_Collections_NativeArray_1_T__Unity_Collections_LowLevel_Unsafe_NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray_System_Byte__System_Void__dataPointer__System_Int32_length__Unity_Collections_Allocator_allocator = 18787280; // Unity.Collections.NativeArray`1<T> Unity.Collections.LowLevel.Unsafe.NativeArrayUnsafeUtility.ConvertExistingDataToNativeArray<System.Byte>
constexpr auto Unity_Collections_NativeArray_1_T__Unity_Collections_LowLevel_Unsafe_NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray_Instancing_CellHeader__System_Void__dataPointer__System_Int32_length__Unity_Collections_Allocator_allocator = 18787280; // Unity.Collections.NativeArray`1<T> Unity.Collections.LowLevel.Unsafe.NativeArrayUnsafeUtility.ConvertExistingDataToNativeArray<Instancing.CellHeader>
constexpr auto Unity_Collections_NativeArray_1_T__Unity_Collections_LowLevel_Unsafe_NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray_Facepunch_BurstCloth_Jobs_ColliderData__System_Void__dataPointer__System_Int32_length__Unity_Collections_Allocator_allocator = 18787280; // Unity.Collections.NativeArray`1<T> Unity.Collections.LowLevel.Unsafe.NativeArrayUnsafeUtility.ConvertExistingDataToNativeArray<Facepunch.BurstCloth.Jobs.ColliderData>
constexpr auto Unity_Collections_NativeArray_1_T__Unity_Collections_LowLevel_Unsafe_NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray_Facepunch_BurstCloth_Jobs_ColliderState__System_Void__dataPointer__System_Int32_length__Unity_Collections_Allocator_allocator = 18787280; // Unity.Collections.NativeArray`1<T> Unity.Collections.LowLevel.Unsafe.NativeArrayUnsafeUtility.ConvertExistingDataToNativeArray<Facepunch.BurstCloth.Jobs.ColliderState>
constexpr auto Unity_Collections_NativeArray_1_T__Unity_Collections_LowLevel_Unsafe_NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray_UnityEngine_Color32__System_Void__dataPointer__System_Int32_length__Unity_Collections_Allocator_allocator = 18787280; // Unity.Collections.NativeArray`1<T> Unity.Collections.LowLevel.Unsafe.NativeArrayUnsafeUtility.ConvertExistingDataToNativeArray<UnityEngine.Color32>
constexpr auto Unity_Collections_NativeArray_1_T__Unity_Collections_LowLevel_Unsafe_NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray_Instancing_DrawCallJobData__System_Void__dataPointer__System_Int32_length__Unity_Collections_Allocator_allocator = 18787280; // Unity.Collections.NativeArray`1<T> Unity.Collections.LowLevel.Unsafe.NativeArrayUnsafeUtility.ConvertExistingDataToNativeArray<Instancing.DrawCallJobData>
constexpr auto Unity_Collections_NativeArray_1_T__Unity_Collections_LowLevel_Unsafe_NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray_Instancing_GridJobData__System_Void__dataPointer__System_Int32_length__Unity_Collections_Allocator_allocator = 18787280; // Unity.Collections.NativeArray`1<T> Unity.Collections.LowLevel.Unsafe.NativeArrayUnsafeUtility.ConvertExistingDataToNativeArray<Instancing.GridJobData>
constexpr auto Unity_Collections_NativeArray_1_T__Unity_Collections_LowLevel_Unsafe_NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray_Instancing_InstancedCullData__System_Void__dataPointer__System_Int32_length__Unity_Collections_Allocator_allocator = 18787280; // Unity.Collections.NativeArray`1<T> Unity.Collections.LowLevel.Unsafe.NativeArrayUnsafeUtility.ConvertExistingDataToNativeArray<Instancing.InstancedCullData>
constexpr auto Unity_Collections_NativeArray_1_T__Unity_Collections_LowLevel_Unsafe_NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray_Instancing_InstancedRendererJobData__System_Void__dataPointer__System_Int32_length__Unity_Collections_Allocator_allocator = 18787280; // Unity.Collections.NativeArray`1<T> Unity.Collections.LowLevel.Unsafe.NativeArrayUnsafeUtility.ConvertExistingDataToNativeArray<Instancing.InstancedRendererJobData>
constexpr auto Unity_Collections_NativeArray_1_T__Unity_Collections_LowLevel_Unsafe_NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray_System_Int32__System_Void__dataPointer__System_Int32_length__Unity_Collections_Allocator_allocator = 18787280; // Unity.Collections.NativeArray`1<T> Unity.Collections.LowLevel.Unsafe.NativeArrayUnsafeUtility.ConvertExistingDataToNativeArray<System.Int32>
constexpr auto Unity_Collections_NativeArray_1_T__Unity_Collections_LowLevel_Unsafe_NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray_Unity_Jobs_JobHandle__System_Void__dataPointer__System_Int32_length__Unity_Collections_Allocator_allocator = 18787280; // Unity.Collections.NativeArray`1<T> Unity.Collections.LowLevel.Unsafe.NativeArrayUnsafeUtility.ConvertExistingDataToNativeArray<Unity.Jobs.JobHandle>
constexpr auto Unity_Collections_NativeArray_1_T__Unity_Collections_LowLevel_Unsafe_NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray_UnityEngine_Experimental_GlobalIllumination_LightDataGI__System_Void__dataPointer__System_Int32_length__Unity_Collections_Allocator_allocator = 18787280; // Unity.Collections.NativeArray`1<T> Unity.Collections.LowLevel.Unsafe.NativeArrayUnsafeUtility.ConvertExistingDataToNativeArray<UnityEngine.Experimental.GlobalIllumination.LightDataGI>
constexpr auto Unity_Collections_NativeArray_1_T__Unity_Collections_LowLevel_Unsafe_NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray_Instancing_MeshOverrideData__System_Void__dataPointer__System_Int32_length__Unity_Collections_Allocator_allocator = 18787280; // Unity.Collections.NativeArray`1<T> Unity.Collections.LowLevel.Unsafe.NativeArrayUnsafeUtility.ConvertExistingDataToNativeArray<Instancing.MeshOverrideData>
constexpr auto Unity_Collections_NativeArray_1_T__Unity_Collections_LowLevel_Unsafe_NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray_UnityEngine_ModifiableContactPair__System_Void__dataPointer__System_Int32_length__Unity_Collections_Allocator_allocator = 18787280; // Unity.Collections.NativeArray`1<T> Unity.Collections.LowLevel.Unsafe.NativeArrayUnsafeUtility.ConvertExistingDataToNativeArray<UnityEngine.ModifiableContactPair>
constexpr auto Unity_Collections_NativeArray_1_T__Unity_Collections_LowLevel_Unsafe_NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray_UnityEngine_Plane__System_Void__dataPointer__System_Int32_length__Unity_Collections_Allocator_allocator = 18787280; // Unity.Collections.NativeArray`1<T> Unity.Collections.LowLevel.Unsafe.NativeArrayUnsafeUtility.ConvertExistingDataToNativeArray<UnityEngine.Plane>
constexpr auto Unity_Collections_NativeArray_1_T__Unity_Collections_LowLevel_Unsafe_NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray_UnityEngine_RaycastCommand__System_Void__dataPointer__System_Int32_length__Unity_Collections_Allocator_allocator = 18787280; // Unity.Collections.NativeArray`1<T> Unity.Collections.LowLevel.Unsafe.NativeArrayUnsafeUtility.ConvertExistingDataToNativeArray<UnityEngine.RaycastCommand>
constexpr auto Unity_Collections_NativeArray_1_T__Unity_Collections_LowLevel_Unsafe_NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray_UnityEngine_RaycastHit__System_Void__dataPointer__System_Int32_length__Unity_Collections_Allocator_allocator = 18787280; // Unity.Collections.NativeArray`1<T> Unity.Collections.LowLevel.Unsafe.NativeArrayUnsafeUtility.ConvertExistingDataToNativeArray<UnityEngine.RaycastHit>
constexpr auto Unity_Collections_NativeArray_1_T__Unity_Collections_LowLevel_Unsafe_NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray_Instancing_RenderSlice__System_Void__dataPointer__System_Int32_length__Unity_Collections_Allocator_allocator = 18787280; // Unity.Collections.NativeArray`1<T> Unity.Collections.LowLevel.Unsafe.NativeArrayUnsafeUtility.ConvertExistingDataToNativeArray<Instancing.RenderSlice>
constexpr auto Unity_Collections_NativeArray_1_T__Unity_Collections_LowLevel_Unsafe_NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray_System_Single__System_Void__dataPointer__System_Int32_length__Unity_Collections_Allocator_allocator = 18787280; // Unity.Collections.NativeArray`1<T> Unity.Collections.LowLevel.Unsafe.NativeArrayUnsafeUtility.ConvertExistingDataToNativeArray<System.Single>
constexpr auto Unity_Collections_NativeArray_1_T__Unity_Collections_LowLevel_Unsafe_NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray_UnityEngine_Tilemaps_TileData__System_Void__dataPointer__System_Int32_length__Unity_Collections_Allocator_allocator = 18787280; // Unity.Collections.NativeArray`1<T> Unity.Collections.LowLevel.Unsafe.NativeArrayUnsafeUtility.ConvertExistingDataToNativeArray<UnityEngine.Tilemaps.TileData>
constexpr auto Unity_Collections_NativeArray_1_T__Unity_Collections_LowLevel_Unsafe_NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray_System_UInt32__System_Void__dataPointer__System_Int32_length__Unity_Collections_Allocator_allocator = 18787280; // Unity.Collections.NativeArray`1<T> Unity.Collections.LowLevel.Unsafe.NativeArrayUnsafeUtility.ConvertExistingDataToNativeArray<System.UInt32>
constexpr auto Unity_Collections_NativeArray_1_T__Unity_Collections_LowLevel_Unsafe_NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray_UnityEngine_Vector3__System_Void__dataPointer__System_Int32_length__Unity_Collections_Allocator_allocator = 18787280; // Unity.Collections.NativeArray`1<T> Unity.Collections.LowLevel.Unsafe.NativeArrayUnsafeUtility.ConvertExistingDataToNativeArray<UnityEngine.Vector3>
constexpr auto Unity_Collections_NativeArray_1_T__Unity_Collections_LowLevel_Unsafe_NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray_UnityEngine_Vector3Int__System_Void__dataPointer__System_Int32_length__Unity_Collections_Allocator_allocator = 18787280; // Unity.Collections.NativeArray`1<T> Unity.Collections.LowLevel.Unsafe.NativeArrayUnsafeUtility.ConvertExistingDataToNativeArray<UnityEngine.Vector3Int>
constexpr auto Unity_Collections_NativeArray_1_T__Unity_Collections_LowLevel_Unsafe_NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray_UnityEngine_Vector4__System_Void__dataPointer__System_Int32_length__Unity_Collections_Allocator_allocator = 18787280; // Unity.Collections.NativeArray`1<T> Unity.Collections.LowLevel.Unsafe.NativeArrayUnsafeUtility.ConvertExistingDataToNativeArray<UnityEngine.Vector4>
constexpr auto Unity_Collections_NativeArray_1_T__Unity_Collections_LowLevel_Unsafe_NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray_Unity_Mathematics_float2__System_Void__dataPointer__System_Int32_length__Unity_Collections_Allocator_allocator = 18787280; // Unity.Collections.NativeArray`1<T> Unity.Collections.LowLevel.Unsafe.NativeArrayUnsafeUtility.ConvertExistingDataToNativeArray<Unity.Mathematics.float2>
constexpr auto Unity_Collections_NativeArray_1_T__Unity_Collections_LowLevel_Unsafe_NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray_Unity_Mathematics_float3__System_Void__dataPointer__System_Int32_length__Unity_Collections_Allocator_allocator = 18787280; // Unity.Collections.NativeArray`1<T> Unity.Collections.LowLevel.Unsafe.NativeArrayUnsafeUtility.ConvertExistingDataToNativeArray<Unity.Mathematics.float3>
constexpr auto Unity_Collections_NativeArray_1_T__Unity_Collections_LowLevel_Unsafe_NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray_Unity_Mathematics_float4__System_Void__dataPointer__System_Int32_length__Unity_Collections_Allocator_allocator = 18787280; // Unity.Collections.NativeArray`1<T> Unity.Collections.LowLevel.Unsafe.NativeArrayUnsafeUtility.ConvertExistingDataToNativeArray<Unity.Mathematics.float4>
constexpr auto Unity_Collections_NativeArray_1_T__Unity_Collections_LowLevel_Unsafe_NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray_Unity_Mathematics_float4x4__System_Void__dataPointer__System_Int32_length__Unity_Collections_Allocator_allocator = 18787280; // Unity.Collections.NativeArray`1<T> Unity.Collections.LowLevel.Unsafe.NativeArrayUnsafeUtility.ConvertExistingDataToNativeArray<Unity.Mathematics.float4x4>
constexpr auto Unity_Collections_NativeArray_1_T__Unity_Collections_LowLevel_Unsafe_NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray_Unity_Mathematics_half2__System_Void__dataPointer__System_Int32_length__Unity_Collections_Allocator_allocator = 18787280; // Unity.Collections.NativeArray`1<T> Unity.Collections.LowLevel.Unsafe.NativeArrayUnsafeUtility.ConvertExistingDataToNativeArray<Unity.Mathematics.half2>
constexpr auto Unity_Collections_NativeArray_1_T__Unity_Collections_LowLevel_Unsafe_NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray_FishShoal_FishData__System_Void__dataPointer__System_Int32_length__Unity_Collections_Allocator_allocator = 18787280; // Unity.Collections.NativeArray`1<T> Unity.Collections.LowLevel.Unsafe.NativeArrayUnsafeUtility.ConvertExistingDataToNativeArray<FishShoal/FishData>
constexpr auto Unity_Collections_NativeArray_1_T__Unity_Collections_LowLevel_Unsafe_NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray_FishShoal_FishRenderData__System_Void__dataPointer__System_Int32_length__Unity_Collections_Allocator_allocator = 18787280; // Unity.Collections.NativeArray`1<T> Unity.Collections.LowLevel.Unsafe.NativeArrayUnsafeUtility.ConvertExistingDataToNativeArray<FishShoal/FishRenderData>
constexpr auto Unity_Collections_NativeArray_1_T__Unity_Collections_LowLevel_Unsafe_NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray_Instancing_GeometryBuffers_VertexData__System_Void__dataPointer__System_Int32_length__Unity_Collections_Allocator_allocator = 18787280; // Unity.Collections.NativeArray`1<T> Unity.Collections.LowLevel.Unsafe.NativeArrayUnsafeUtility.ConvertExistingDataToNativeArray<Instancing.GeometryBuffers/VertexData>
constexpr auto Unity_Collections_NativeArray_1_T__Unity_Collections_LowLevel_Unsafe_NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray_OceanMeshRenderer_DrawCall__System_Void__dataPointer__System_Int32_length__Unity_Collections_Allocator_allocator = 18787280; // Unity.Collections.NativeArray`1<T> Unity.Collections.LowLevel.Unsafe.NativeArrayUnsafeUtility.ConvertExistingDataToNativeArray<OceanMeshRenderer/DrawCall>
constexpr auto Unity_Collections_NativeArray_1_T__Unity_Collections_LowLevel_Unsafe_NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray_PipeMesh_TesselatedLinePoint__System_Void__dataPointer__System_Int32_length__Unity_Collections_Allocator_allocator = 18787280; // Unity.Collections.NativeArray`1<T> Unity.Collections.LowLevel.Unsafe.NativeArrayUnsafeUtility.ConvertExistingDataToNativeArray<PipeMesh/TesselatedLinePoint>
constexpr auto Unity_Collections_NativeArray_1_T__Unity_Collections_LowLevel_Unsafe_NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray_Facepunch_BurstCloth_Jobs_SimulatePositionsJob_LerpState__System_Void__dataPointer__System_Int32_length__Unity_Collections_Allocator_allocator = 18787280; // Unity.Collections.NativeArray`1<T> Unity.Collections.LowLevel.Unsafe.NativeArrayUnsafeUtility.ConvertExistingDataToNativeArray<Facepunch.BurstCloth.Jobs.SimulatePositionsJob/LerpState>
constexpr auto System_Void__Unity_Collections_LowLevel_Unsafe_NativeArrayUnsafeUtility_GetUnsafeBufferPointerWithoutChecks_UnityEngine_RaycastCommand__Unity_Collections_NativeArray_1_T__nativeArray = 18787328; // System.Void* Unity.Collections.LowLevel.Unsafe.NativeArrayUnsafeUtility.GetUnsafeBufferPointerWithoutChecks<UnityEngine.RaycastCommand>
constexpr auto System_Void__Unity_Collections_LowLevel_Unsafe_NativeArrayUnsafeUtility_GetUnsafeBufferPointerWithoutChecks_UnityEngine_RaycastHit__Unity_Collections_NativeArray_1_T__nativeArray = 18787328; // System.Void* Unity.Collections.LowLevel.Unsafe.NativeArrayUnsafeUtility.GetUnsafeBufferPointerWithoutChecks<UnityEngine.RaycastHit>
constexpr auto System_Void__Unity_Collections_LowLevel_Unsafe_NativeArrayUnsafeUtility_GetUnsafePtr_Facepunch_BurstCloth_Jobs_BoneState__Unity_Collections_NativeArray_1_T__nativeArray = 18787328; // System.Void* Unity.Collections.LowLevel.Unsafe.NativeArrayUnsafeUtility.GetUnsafePtr<Facepunch.BurstCloth.Jobs.BoneState>
constexpr auto System_Void__Unity_Collections_LowLevel_Unsafe_NativeArrayUnsafeUtility_GetUnsafePtr_Facepunch_BurstCloth_Jobs_ColliderState__Unity_Collections_NativeArray_1_T__nativeArray = 18787328; // System.Void* Unity.Collections.LowLevel.Unsafe.NativeArrayUnsafeUtility.GetUnsafePtr<Facepunch.BurstCloth.Jobs.ColliderState>
constexpr auto System_Void__Unity_Collections_LowLevel_Unsafe_NativeArrayUnsafeUtility_GetUnsafePtr_FishShoal_FishData__Unity_Collections_NativeArray_1_T__nativeArray = 18787328; // System.Void* Unity.Collections.LowLevel.Unsafe.NativeArrayUnsafeUtility.GetUnsafePtr<FishShoal/FishData>
constexpr auto System_Void__Unity_Collections_LowLevel_Unsafe_NativeArrayUnsafeUtility_GetUnsafePtr_FishShoal_FishRenderData__Unity_Collections_NativeArray_1_T__nativeArray = 18787328; // System.Void* Unity.Collections.LowLevel.Unsafe.NativeArrayUnsafeUtility.GetUnsafePtr<FishShoal/FishRenderData>
constexpr auto System_Void__Unity_Collections_LowLevel_Unsafe_NativeArrayUnsafeUtility_GetUnsafePtr_OceanMeshRenderer_DrawCall__Unity_Collections_NativeArray_1_T__nativeArray = 18787328; // System.Void* Unity.Collections.LowLevel.Unsafe.NativeArrayUnsafeUtility.GetUnsafePtr<OceanMeshRenderer/DrawCall>
constexpr auto System_Void__Unity_Collections_LowLevel_Unsafe_NativeArrayUnsafeUtility_GetUnsafeReadOnlyPtr_Facepunch_BurstCloth_Jobs_BoneData__Unity_Collections_NativeArray_1_T__nativeArray = 18787328; // System.Void* Unity.Collections.LowLevel.Unsafe.NativeArrayUnsafeUtility.GetUnsafeReadOnlyPtr<Facepunch.BurstCloth.Jobs.BoneData>
constexpr auto System_Void__Unity_Collections_LowLevel_Unsafe_NativeArrayUnsafeUtility_GetUnsafeReadOnlyPtr_Facepunch_BurstCloth_Jobs_BoneState__Unity_Collections_NativeArray_1_T__nativeArray = 18787328; // System.Void* Unity.Collections.LowLevel.Unsafe.NativeArrayUnsafeUtility.GetUnsafeReadOnlyPtr<Facepunch.BurstCloth.Jobs.BoneState>
constexpr auto System_Void__Unity_Collections_LowLevel_Unsafe_NativeArrayUnsafeUtility_GetUnsafeReadOnlyPtr_System_Byte__Unity_Collections_NativeArray_1_T__nativeArray = 18787328; // System.Void* Unity.Collections.LowLevel.Unsafe.NativeArrayUnsafeUtility.GetUnsafeReadOnlyPtr<System.Byte>
constexpr auto System_Void__Unity_Collections_LowLevel_Unsafe_NativeArrayUnsafeUtility_GetUnsafeReadOnlyPtr_Facepunch_BurstCloth_Jobs_ColliderData__Unity_Collections_NativeArray_1_T__nativeArray = 18787328; // System.Void* Unity.Collections.LowLevel.Unsafe.NativeArrayUnsafeUtility.GetUnsafeReadOnlyPtr<Facepunch.BurstCloth.Jobs.ColliderData>
constexpr auto System_Void__Unity_Collections_LowLevel_Unsafe_NativeArrayUnsafeUtility_GetUnsafeReadOnlyPtr_Facepunch_BurstCloth_Jobs_ColliderState__Unity_Collections_NativeArray_1_T__nativeArray = 18787328; // System.Void* Unity.Collections.LowLevel.Unsafe.NativeArrayUnsafeUtility.GetUnsafeReadOnlyPtr<Facepunch.BurstCloth.Jobs.ColliderState>
constexpr auto System_Void__Unity_Collections_LowLevel_Unsafe_NativeArrayUnsafeUtility_GetUnsafeReadOnlyPtr_Instancing_DrawCallJobData__Unity_Collections_NativeArray_1_T__nativeArray = 18787328; // System.Void* Unity.Collections.LowLevel.Unsafe.NativeArrayUnsafeUtility.GetUnsafeReadOnlyPtr<Instancing.DrawCallJobData>
constexpr auto System_Void__Unity_Collections_LowLevel_Unsafe_NativeArrayUnsafeUtility_GetUnsafeReadOnlyPtr_Instancing_InstancedCullData__Unity_Collections_NativeArray_1_T__nativeArray = 18787328; // System.Void* Unity.Collections.LowLevel.Unsafe.NativeArrayUnsafeUtility.GetUnsafeReadOnlyPtr<Instancing.InstancedCullData>
constexpr auto System_Void__Unity_Collections_LowLevel_Unsafe_NativeArrayUnsafeUtility_GetUnsafeReadOnlyPtr_System_Int32__Unity_Collections_NativeArray_1_T__nativeArray = 18787328; // System.Void* Unity.Collections.LowLevel.Unsafe.NativeArrayUnsafeUtility.GetUnsafeReadOnlyPtr<System.Int32>
constexpr auto System_Void__Unity_Collections_LowLevel_Unsafe_NativeArrayUnsafeUtility_GetUnsafeReadOnlyPtr_Unity_Jobs_JobHandle__Unity_Collections_NativeArray_1_T__nativeArray = 18787328; // System.Void* Unity.Collections.LowLevel.Unsafe.NativeArrayUnsafeUtility.GetUnsafeReadOnlyPtr<Unity.Jobs.JobHandle>
constexpr auto System_Void__Unity_Collections_LowLevel_Unsafe_NativeArrayUnsafeUtility_GetUnsafeReadOnlyPtr_Instancing_MeshOverrideData__Unity_Collections_NativeArray_1_T__nativeArray = 18787328; // System.Void* Unity.Collections.LowLevel.Unsafe.NativeArrayUnsafeUtility.GetUnsafeReadOnlyPtr<Instancing.MeshOverrideData>
constexpr auto System_Void__Unity_Collections_LowLevel_Unsafe_NativeArrayUnsafeUtility_GetUnsafeReadOnlyPtr_Instancing_RenderSlice__Unity_Collections_NativeArray_1_T__nativeArray = 18787328; // System.Void* Unity.Collections.LowLevel.Unsafe.NativeArrayUnsafeUtility.GetUnsafeReadOnlyPtr<Instancing.RenderSlice>
constexpr auto System_Void__Unity_Collections_LowLevel_Unsafe_NativeArrayUnsafeUtility_GetUnsafeReadOnlyPtr_System_UInt32__Unity_Collections_NativeArray_1_T__nativeArray = 18787328; // System.Void* Unity.Collections.LowLevel.Unsafe.NativeArrayUnsafeUtility.GetUnsafeReadOnlyPtr<System.UInt32>
constexpr auto System_Void__Unity_Collections_LowLevel_Unsafe_NativeArrayUnsafeUtility_GetUnsafeReadOnlyPtr_UnityEngine_Vector4__Unity_Collections_NativeArray_1_T__nativeArray = 18787328; // System.Void* Unity.Collections.LowLevel.Unsafe.NativeArrayUnsafeUtility.GetUnsafeReadOnlyPtr<UnityEngine.Vector4>
constexpr auto System_Void__Unity_Collections_LowLevel_Unsafe_NativeArrayUnsafeUtility_GetUnsafeReadOnlyPtr_Unity_Mathematics_float2__Unity_Collections_NativeArray_1_T__nativeArray = 18787328; // System.Void* Unity.Collections.LowLevel.Unsafe.NativeArrayUnsafeUtility.GetUnsafeReadOnlyPtr<Unity.Mathematics.float2>
constexpr auto System_Void__Unity_Collections_LowLevel_Unsafe_NativeArrayUnsafeUtility_GetUnsafeReadOnlyPtr_Unity_Mathematics_float3__Unity_Collections_NativeArray_1_T__nativeArray = 18787328; // System.Void* Unity.Collections.LowLevel.Unsafe.NativeArrayUnsafeUtility.GetUnsafeReadOnlyPtr<Unity.Mathematics.float3>
constexpr auto System_Void__Unity_Collections_LowLevel_Unsafe_NativeArrayUnsafeUtility_GetUnsafeReadOnlyPtr_Unity_Mathematics_float4__Unity_Collections_NativeArray_1_T__nativeArray = 18787328; // System.Void* Unity.Collections.LowLevel.Unsafe.NativeArrayUnsafeUtility.GetUnsafeReadOnlyPtr<Unity.Mathematics.float4>
constexpr auto System_Void__Unity_Collections_LowLevel_Unsafe_NativeArrayUnsafeUtility_GetUnsafeReadOnlyPtr_Unity_Mathematics_float4x4__Unity_Collections_NativeArray_1_T__nativeArray = 18787328; // System.Void* Unity.Collections.LowLevel.Unsafe.NativeArrayUnsafeUtility.GetUnsafeReadOnlyPtr<Unity.Mathematics.float4x4>
constexpr auto System_Void__Unity_Collections_LowLevel_Unsafe_NativeArrayUnsafeUtility_GetUnsafeReadOnlyPtr_FishShoal_FishRenderData__Unity_Collections_NativeArray_1_T__nativeArray = 18787328; // System.Void* Unity.Collections.LowLevel.Unsafe.NativeArrayUnsafeUtility.GetUnsafeReadOnlyPtr<FishShoal/FishRenderData>
constexpr auto System_Void__Unity_Collections_LowLevel_Unsafe_NativeArrayUnsafeUtility_GetUnsafeReadOnlyPtr_Instancing_GeometryBuffers_VertexData__Unity_Collections_NativeArray_1_T__nativeArray = 18787328; // System.Void* Unity.Collections.LowLevel.Unsafe.NativeArrayUnsafeUtility.GetUnsafeReadOnlyPtr<Instancing.GeometryBuffers/VertexData>
}
}
namespace ProtoBuf_RespawnInformation
{
namespace Fields
{
constexpr auto spawnOptions = 0x10; // System.Collections.Generic.List`1
constexpr auto previousLife = 0x18; // ProtoBuf.PlayerLifeStory
constexpr auto fadeIn = 0x20; // System.Boolean
constexpr auto loading = 0x21; // System.Boolean
constexpr auto ShouldPool = 0x22; // System.Boolean
constexpr auto _disposed = 0x23; // System.Boolean
}
namespace Methods
{
constexpr auto ResetToPool = 33391808; // System.Void ResetToPool()
constexpr auto Dispose = 33391376; // System.Void Dispose()
constexpr auto EnterPool = 33391504; // System.Void EnterPool()
constexpr auto LeavePool = 33391760; // System.Void LeavePool()
constexpr auto CopyTo_ProtoBuf_RespawnInformation_instance = 33386928; // System.Void CopyTo(ProtoBuf.RespawnInformation instance)
constexpr auto Copy = 33387552; // ProtoBuf.RespawnInformation Copy()
constexpr auto FromProto_System_IO_Stream_stream__System_Boolean_isDelta___False = 33391520; // System.Void FromProto(System.IO.Stream stream, System.Boolean isDelta = False)
constexpr auto WriteToStream_System_IO_Stream_stream = 33395056; // System.Void WriteToStream(System.IO.Stream stream)
constexpr auto WriteToStreamDelta_System_IO_Stream_stream__ProtoBuf_RespawnInformation_previous = 33395088; // System.Void WriteToStreamDelta(System.IO.Stream stream, ProtoBuf.RespawnInformation previous)
constexpr auto ReadFromStream_System_IO_Stream_stream__System_Int32_size__System_Boolean_isDelta___False = 33391776; // System.Void ReadFromStream(System.IO.Stream stream, System.Int32 size, System.Boolean isDelta = False)
constexpr auto ToProtoBytes = 33395040; // System.Byte[] ToProtoBytes()
constexpr auto ToProto_System_IO_Stream_stream = 33395056; // System.Void ToProto(System.IO.Stream stream)
constexpr auto InspectUids_UidInspector_1_System_UInt64__action = 33391552; // System.Void InspectUids(UidInspector`1<System.UInt64> action)
constexpr auto _ctor = 33395120; // System.Void .ctor()
}
namespace StaticMethods
{
constexpr auto ResetToPool_ProtoBuf_RespawnInformation_instance = 33392368; // System.Void ResetToPool(ProtoBuf.RespawnInformation instance)
constexpr auto Deserialize_System_IO_Stream_stream = 33389936; // ProtoBuf.RespawnInformation Deserialize(System.IO.Stream stream)
constexpr auto DeserializeLengthDelimited_System_IO_Stream_stream = 33387680; // ProtoBuf.RespawnInformation DeserializeLengthDelimited(System.IO.Stream stream)
constexpr auto DeserializeLength_System_IO_Stream_stream__System_Int32_length = 33389792; // ProtoBuf.RespawnInformation DeserializeLength(System.IO.Stream stream, System.Int32 length)
constexpr auto Deserialize_System_Byte___buffer = 33391072; // ProtoBuf.RespawnInformation Deserialize(System.Byte[] buffer)
constexpr auto Deserialize_System_Byte___buffer__ProtoBuf_RespawnInformation_instance__System_Boolean_isDelta___False = 33390816; // ProtoBuf.RespawnInformation Deserialize(System.Byte[] buffer, ProtoBuf.RespawnInformation instance, System.Boolean isDelta = False)
constexpr auto Deserialize_System_IO_Stream_stream__ProtoBuf_RespawnInformation_instance__System_Boolean_isDelta = 33390064; // ProtoBuf.RespawnInformation Deserialize(System.IO.Stream stream, ProtoBuf.RespawnInformation instance, System.Boolean isDelta)
constexpr auto DeserializeLengthDelimited_System_IO_Stream_stream__ProtoBuf_RespawnInformation_instance__System_Boolean_isDelta = 33387808; // ProtoBuf.RespawnInformation DeserializeLengthDelimited(System.IO.Stream stream, ProtoBuf.RespawnInformation instance, System.Boolean isDelta)
constexpr auto DeserializeLength_System_IO_Stream_stream__System_Int32_length__ProtoBuf_RespawnInformation_instance__System_Boolean_isDelta = 33388816; // ProtoBuf.RespawnInformation DeserializeLength(System.IO.Stream stream, System.Int32 length, ProtoBuf.RespawnInformation instance, System.Boolean isDelta)
constexpr auto SerializeDelta_System_IO_Stream_stream__ProtoBuf_RespawnInformation_instance__ProtoBuf_RespawnInformation_previous = 33392928; // System.Void SerializeDelta(System.IO.Stream stream, ProtoBuf.RespawnInformation instance, ProtoBuf.RespawnInformation previous)
constexpr auto Serialize_System_IO_Stream_stream__ProtoBuf_RespawnInformation_instance = 33394208; // System.Void Serialize(System.IO.Stream stream, ProtoBuf.RespawnInformation instance)
constexpr auto SerializeToBytes_ProtoBuf_RespawnInformation_instance = 33393936; // System.Byte[] SerializeToBytes(ProtoBuf.RespawnInformation instance)
constexpr auto SerializeLengthDelimited_System_IO_Stream_stream__ProtoBuf_RespawnInformation_instance = 33393776; // System.Void SerializeLengthDelimited(System.IO.Stream stream, ProtoBuf.RespawnInformation instance)
}
}
namespace ProtoBuf_RespawnInformation_SpawnOptions
{
namespace Fields
{
constexpr auto type = 0x10; // ProtoBuf.RespawnInformation/SpawnOptions/RespawnType
constexpr auto id = 0x18; // NetworkableId
constexpr auto name = 0x20; // System.String
constexpr auto unlockSeconds = 0x28; // System.Single
constexpr auto worldPosition = 0x2c; // UnityEngine.Vector3
constexpr auto respawnState = 0x38; // ProtoBuf.RespawnInformation/SpawnOptions/RespawnState
constexpr auto mobile = 0x3c; // System.Boolean
constexpr auto nexusZone = 0x40; // System.String
constexpr auto ShouldPool = 0x48; // System.Boolean
constexpr auto _disposed = 0x49; // System.Boolean
}
namespace Methods
{
constexpr auto ResetToPool = 33402752; // System.Void ResetToPool()
constexpr auto Dispose = 33401472; // System.Void Dispose()
constexpr auto EnterPool = 32882480; // System.Void EnterPool()
constexpr auto LeavePool = 32882720; // System.Void LeavePool()
constexpr auto CopyTo_ProtoBuf_RespawnInformation_SpawnOptions_instance = 33395136; // System.Void CopyTo(ProtoBuf.RespawnInformation/SpawnOptions instance)
constexpr auto Copy = 33395264; // ProtoBuf.RespawnInformation/SpawnOptions Copy()
constexpr auto FromProto_System_IO_Stream_stream__System_Boolean_isDelta___False = 33401600; // System.Void FromProto(System.IO.Stream stream, System.Boolean isDelta = False)
constexpr auto WriteToStream_System_IO_Stream_stream = 33405472; // System.Void WriteToStream(System.IO.Stream stream)
constexpr auto WriteToStreamDelta_System_IO_Stream_stream__ProtoBuf_RespawnInformation_SpawnOptions_previous = 33405504; // System.Void WriteToStreamDelta(System.IO.Stream stream, ProtoBuf.RespawnInformation/SpawnOptions previous)
constexpr auto ReadFromStream_System_IO_Stream_stream__System_Int32_size__System_Boolean_isDelta___False = 33402400; // System.Void ReadFromStream(System.IO.Stream stream, System.Int32 size, System.Boolean isDelta = False)
constexpr auto ToProtoBytes = 33405456; // System.Byte[] ToProtoBytes()
constexpr auto ToProto_System_IO_Stream_stream = 33405472; // System.Void ToProto(System.IO.Stream stream)
constexpr auto InspectUids_UidInspector_1_System_UInt64__action = 33107424; // System.Void InspectUids(UidInspector`1<System.UInt64> action)
constexpr auto _ctor = 32886944; // System.Void .ctor()
}
namespace StaticMethods
{
constexpr auto ResetToPool_ProtoBuf_RespawnInformation_SpawnOptions_instance = 33402432; // System.Void ResetToPool(ProtoBuf.RespawnInformation/SpawnOptions instance)
constexpr auto Deserialize_System_IO_Stream_stream = 33400688; // ProtoBuf.RespawnInformation/SpawnOptions Deserialize(System.IO.Stream stream)
constexpr auto DeserializeLengthDelimited_System_IO_Stream_stream = 33395472; // ProtoBuf.RespawnInformation/SpawnOptions DeserializeLengthDelimited(System.IO.Stream stream)
constexpr auto DeserializeLength_System_IO_Stream_stream__System_Int32_length = 33397712; // ProtoBuf.RespawnInformation/SpawnOptions DeserializeLength(System.IO.Stream stream, System.Int32 length)
constexpr auto Deserialize_System_Byte___buffer = 33398896; // ProtoBuf.RespawnInformation/SpawnOptions Deserialize(System.Byte[] buffer)
constexpr auto Deserialize_System_Byte___buffer__ProtoBuf_RespawnInformation_SpawnOptions_instance__System_Boolean_isDelta___False = 33397856; // ProtoBuf.RespawnInformation/SpawnOptions Deserialize(System.Byte[] buffer, ProtoBuf.RespawnInformation/SpawnOptions instance, System.Boolean isDelta = False)
constexpr auto Deserialize_System_IO_Stream_stream__ProtoBuf_RespawnInformation_SpawnOptions_instance__System_Boolean_isDelta = 33399888; // ProtoBuf.RespawnInformation/SpawnOptions Deserialize(System.IO.Stream stream, ProtoBuf.RespawnInformation/SpawnOptions instance, System.Boolean isDelta)
constexpr auto DeserializeLengthDelimited_System_IO_Stream_stream__ProtoBuf_RespawnInformation_SpawnOptions_instance__System_Boolean_isDelta = 33395600; // ProtoBuf.RespawnInformation/SpawnOptions DeserializeLengthDelimited(System.IO.Stream stream, ProtoBuf.RespawnInformation/SpawnOptions instance, System.Boolean isDelta)
constexpr auto DeserializeLength_System_IO_Stream_stream__System_Int32_length__ProtoBuf_RespawnInformation_SpawnOptions_instance__System_Boolean_isDelta = 33396672; // ProtoBuf.RespawnInformation/SpawnOptions DeserializeLength(System.IO.Stream stream, System.Int32 length, ProtoBuf.RespawnInformation/SpawnOptions instance, System.Boolean isDelta)
constexpr auto SerializeDelta_System_IO_Stream_stream__ProtoBuf_RespawnInformation_SpawnOptions_instance__ProtoBuf_RespawnInformation_SpawnOptions_previous = 33403072; // System.Void SerializeDelta(System.IO.Stream stream, ProtoBuf.RespawnInformation/SpawnOptions instance, ProtoBuf.RespawnInformation/SpawnOptions previous)
constexpr auto Serialize_System_IO_Stream_stream__ProtoBuf_RespawnInformation_SpawnOptions_instance = 33404624; // System.Void Serialize(System.IO.Stream stream, ProtoBuf.RespawnInformation/SpawnOptions instance)
constexpr auto SerializeToBytes_ProtoBuf_RespawnInformation_SpawnOptions_instance = 33404352; // System.Byte[] SerializeToBytes(ProtoBuf.RespawnInformation/SpawnOptions instance)
constexpr auto SerializeLengthDelimited_System_IO_Stream_stream__ProtoBuf_RespawnInformation_SpawnOptions_instance = 33404192; // System.Void SerializeLengthDelimited(System.IO.Stream stream, ProtoBuf.RespawnInformation/SpawnOptions instance)
}
}
namespace ProtoBuf_PlayerProjectileUpdate
{
namespace Fields
{
constexpr auto projectileID = 0x10; // System.Int32
constexpr auto curPosition = 0x14; // UnityEngine.Vector3
constexpr auto curVelocity = 0x20; // UnityEngine.Vector3
constexpr auto travelTime = 0x2c; // System.Single
constexpr auto ShouldPool = 0x30; // System.Boolean
constexpr auto _disposed = 0x31; // System.Boolean
}
namespace Methods
{
constexpr auto ResetToPool = 33363088; // System.Void ResetToPool()
constexpr auto Dispose = 33362032; // System.Void Dispose()
constexpr auto EnterPool = 33362336; // System.Void EnterPool()
constexpr auto LeavePool = 33362864; // System.Void LeavePool()
constexpr auto CopyTo_ProtoBuf_PlayerProjectileUpdate_instance = 33357360; // System.Void CopyTo(ProtoBuf.PlayerProjectileUpdate instance)
constexpr auto Copy = 33357424; // ProtoBuf.PlayerProjectileUpdate Copy()
constexpr auto FromProto_System_IO_Stream_stream__System_Boolean_isDelta___False = 33362352; // System.Void FromProto(System.IO.Stream stream, System.Boolean isDelta = False)
constexpr auto WriteToStream_System_IO_Stream_stream = 33365456; // System.Void WriteToStream(System.IO.Stream stream)
constexpr auto WriteToStreamDelta_System_IO_Stream_stream__ProtoBuf_PlayerProjectileUpdate_previous = 33365488; // System.Void WriteToStreamDelta(System.IO.Stream stream, ProtoBuf.PlayerProjectileUpdate previous)
constexpr auto ReadFromStream_System_IO_Stream_stream__System_Int32_size__System_Boolean_isDelta___False = 33362880; // System.Void ReadFromStream(System.IO.Stream stream, System.Int32 size, System.Boolean isDelta = False)
constexpr auto ToProtoBytes = 33365440; // System.Byte[] ToProtoBytes()
constexpr auto ToProto_System_IO_Stream_stream = 33365456; // System.Void ToProto(System.IO.Stream stream)
constexpr auto InspectUids_UidInspector_1_System_UInt64__action = 3694560; // System.Void InspectUids(UidInspector`1<System.UInt64> action)
constexpr auto _ctor = 30168528; // System.Void .ctor()
}
namespace StaticMethods
{
constexpr auto ResetToPool_ProtoBuf_PlayerProjectileUpdate_instance = 33362912; // System.Void ResetToPool(ProtoBuf.PlayerProjectileUpdate instance)
constexpr auto Deserialize_System_IO_Stream_stream = 33359920; // ProtoBuf.PlayerProjectileUpdate Deserialize(System.IO.Stream stream)
constexpr auto DeserializeLengthDelimited_System_IO_Stream_stream = 33357584; // ProtoBuf.PlayerProjectileUpdate DeserializeLengthDelimited(System.IO.Stream stream)
constexpr auto DeserializeLength_System_IO_Stream_stream__System_Int32_length = 33359248; // ProtoBuf.PlayerProjectileUpdate DeserializeLength(System.IO.Stream stream, System.Int32 length)
constexpr auto Deserialize_System_Byte___buffer = 33361232; // ProtoBuf.PlayerProjectileUpdate Deserialize(System.Byte[] buffer)
constexpr auto Deserialize_System_Byte___buffer__ProtoBuf_PlayerProjectileUpdate_instance__System_Boolean_isDelta___False = 33360496; // ProtoBuf.PlayerProjectileUpdate Deserialize(System.Byte[] buffer, ProtoBuf.PlayerProjectileUpdate instance, System.Boolean isDelta = False)
constexpr auto Deserialize_System_IO_Stream_stream__ProtoBuf_PlayerProjectileUpdate_instance__System_Boolean_isDelta = 33359392; // ProtoBuf.PlayerProjectileUpdate Deserialize(System.IO.Stream stream, ProtoBuf.PlayerProjectileUpdate instance, System.Boolean isDelta)
constexpr auto DeserializeLengthDelimited_System_IO_Stream_stream__ProtoBuf_PlayerProjectileUpdate_instance__System_Boolean_isDelta = 33357712; // ProtoBuf.PlayerProjectileUpdate DeserializeLengthDelimited(System.IO.Stream stream, ProtoBuf.PlayerProjectileUpdate instance, System.Boolean isDelta)
constexpr auto DeserializeLength_System_IO_Stream_stream__System_Int32_length__ProtoBuf_PlayerProjectileUpdate_instance__System_Boolean_isDelta = 33358496; // ProtoBuf.PlayerProjectileUpdate DeserializeLength(System.IO.Stream stream, System.Int32 length, ProtoBuf.PlayerProjectileUpdate instance, System.Boolean isDelta)
constexpr auto SerializeDelta_System_IO_Stream_stream__ProtoBuf_PlayerProjectileUpdate_instance__ProtoBuf_PlayerProjectileUpdate_previous = 33363264; // System.Void SerializeDelta(System.IO.Stream stream, ProtoBuf.PlayerProjectileUpdate instance, ProtoBuf.PlayerProjectileUpdate previous)
constexpr auto Serialize_System_IO_Stream_stream__ProtoBuf_PlayerProjectileUpdate_instance = 33364768; // System.Void Serialize(System.IO.Stream stream, ProtoBuf.PlayerProjectileUpdate instance)
constexpr auto SerializeToBytes_ProtoBuf_PlayerProjectileUpdate_instance = 33364496; // System.Byte[] SerializeToBytes(ProtoBuf.PlayerProjectileUpdate instance)
constexpr auto SerializeLengthDelimited_System_IO_Stream_stream__ProtoBuf_PlayerProjectileUpdate_instance = 33364336; // System.Void SerializeLengthDelimited(System.IO.Stream stream, ProtoBuf.PlayerProjectileUpdate instance)
}
}
namespace ProtoBuf_PlayerAttack
{
namespace Fields
{
constexpr auto attack = 0x10; // ProtoBuf.Attack
constexpr auto projectileID = 0x18; // System.Int32
constexpr auto ShouldPool = 0x1c; // System.Boolean
constexpr auto _disposed = 0x1d; // System.Boolean
}
namespace Methods
{
constexpr auto ResetToPool = 33255936; // System.Void ResetToPool()
constexpr auto Dispose = 33255648; // System.Void Dispose()
constexpr auto EnterPool = 4028048; // System.Void EnterPool()
constexpr auto LeavePool = 7860752; // System.Void LeavePool()
constexpr auto CopyTo_ProtoBuf_PlayerAttack_instance = 33252176; // System.Void CopyTo(ProtoBuf.PlayerAttack instance)
constexpr auto Copy = 33252544; // ProtoBuf.PlayerAttack Copy()
constexpr auto FromProto_System_IO_Stream_stream__System_Boolean_isDelta___False = 33255776; // System.Void FromProto(System.IO.Stream stream, System.Boolean isDelta = False)
constexpr auto WriteToStream_System_IO_Stream_stream = 33257920; // System.Void WriteToStream(System.IO.Stream stream)
constexpr auto WriteToStreamDelta_System_IO_Stream_stream__ProtoBuf_PlayerAttack_previous = 33257952; // System.Void WriteToStreamDelta(System.IO.Stream stream, ProtoBuf.PlayerAttack previous)
constexpr auto ReadFromStream_System_IO_Stream_stream__System_Int32_size__System_Boolean_isDelta___False = 33255904; // System.Void ReadFromStream(System.IO.Stream stream, System.Int32 size, System.Boolean isDelta = False)
constexpr auto ToProtoBytes = 33257904; // System.Byte[] ToProtoBytes()
constexpr auto ToProto_System_IO_Stream_stream = 33257920; // System.Void ToProto(System.IO.Stream stream)
constexpr auto InspectUids_UidInspector_1_System_UInt64__action = 33255808; // System.Void InspectUids(UidInspector`1<System.UInt64> action)
constexpr auto _ctor = 33003072; // System.Void .ctor()
}
namespace StaticMethods
{
constexpr auto ResetToPool_ProtoBuf_PlayerAttack_instance = 33256128; // System.Void ResetToPool(ProtoBuf.PlayerAttack instance)
constexpr auto Deserialize_System_IO_Stream_stream = 33255264; // ProtoBuf.PlayerAttack Deserialize(System.IO.Stream stream)
constexpr auto DeserializeLengthDelimited_System_IO_Stream_stream = 33253440; // ProtoBuf.PlayerAttack DeserializeLengthDelimited(System.IO.Stream stream)
constexpr auto DeserializeLength_System_IO_Stream_stream__System_Int32_length = 33254304; // ProtoBuf.PlayerAttack DeserializeLength(System.IO.Stream stream, System.Int32 length)
constexpr auto Deserialize_System_Byte___buffer = 33254960; // ProtoBuf.PlayerAttack Deserialize(System.Byte[] buffer)
constexpr auto Deserialize_System_Byte___buffer__ProtoBuf_PlayerAttack_instance__System_Boolean_isDelta___False = 33255392; // ProtoBuf.PlayerAttack Deserialize(System.Byte[] buffer, ProtoBuf.PlayerAttack instance, System.Boolean isDelta = False)
constexpr auto Deserialize_System_IO_Stream_stream__ProtoBuf_PlayerAttack_instance__System_Boolean_isDelta = 33254448; // ProtoBuf.PlayerAttack Deserialize(System.IO.Stream stream, ProtoBuf.PlayerAttack instance, System.Boolean isDelta)
constexpr auto DeserializeLengthDelimited_System_IO_Stream_stream__ProtoBuf_PlayerAttack_instance__System_Boolean_isDelta = 33252672; // ProtoBuf.PlayerAttack DeserializeLengthDelimited(System.IO.Stream stream, ProtoBuf.PlayerAttack instance, System.Boolean isDelta)
constexpr auto DeserializeLength_System_IO_Stream_stream__System_Int32_length__ProtoBuf_PlayerAttack_instance__System_Boolean_isDelta = 33253568; // ProtoBuf.PlayerAttack DeserializeLength(System.IO.Stream stream, System.Int32 length, ProtoBuf.PlayerAttack instance, System.Boolean isDelta)
constexpr auto SerializeDelta_System_IO_Stream_stream__ProtoBuf_PlayerAttack_instance__ProtoBuf_PlayerAttack_previous = 33256320; // System.Void SerializeDelta(System.IO.Stream stream, ProtoBuf.PlayerAttack instance, ProtoBuf.PlayerAttack previous)
constexpr auto Serialize_System_IO_Stream_stream__ProtoBuf_PlayerAttack_instance = 33257360; // System.Void Serialize(System.IO.Stream stream, ProtoBuf.PlayerAttack instance)
constexpr auto SerializeToBytes_ProtoBuf_PlayerAttack_instance = 33257088; // System.Byte[] SerializeToBytes(ProtoBuf.PlayerAttack instance)
constexpr auto SerializeLengthDelimited_System_IO_Stream_stream__ProtoBuf_PlayerAttack_instance = 33256928; // System.Void SerializeLengthDelimited(System.IO.Stream stream, ProtoBuf.PlayerAttack instance)
}
}
namespace ProtoBuf_Attack
{
namespace Fields
{
constexpr auto pointStart = 0x10; // UnityEngine.Vector3
constexpr auto pointEnd = 0x1c; // UnityEngine.Vector3
constexpr auto hitID = 0x28; // NetworkableId
constexpr auto hitBone = 0x30; // System.UInt32
constexpr auto hitNormalLocal = 0x34; // UnityEngine.Vector3
constexpr auto hitPositionLocal = 0x40; // UnityEngine.Vector3
constexpr auto hitNormalWorld = 0x4c; // UnityEngine.Vector3
constexpr auto hitPositionWorld = 0x58; // UnityEngine.Vector3
constexpr auto hitPartID = 0x64; // System.UInt32
constexpr auto hitMaterialID = 0x68; // System.UInt32
constexpr auto srcParentID = 0x70; // NetworkableId
constexpr auto dstParentID = 0x78; // NetworkableId
constexpr auto ShouldPool = 0x80; // System.Boolean
constexpr auto _disposed = 0x81; // System.Boolean
}
namespace Methods
{
constexpr auto ResetToPool = 33195344; // System.Void ResetToPool()
constexpr auto Dispose = 33193744; // System.Void Dispose()
constexpr auto EnterPool = 33193872; // System.Void EnterPool()
constexpr auto LeavePool = 33194960; // System.Void LeavePool()
constexpr auto CopyTo_ProtoBuf_Attack_instance = 33186128; // System.Void CopyTo(ProtoBuf.Attack instance)
constexpr auto Copy = 33186304; // ProtoBuf.Attack Copy()
constexpr auto FromProto_System_IO_Stream_stream__System_Boolean_isDelta___False = 33193888; // System.Void FromProto(System.IO.Stream stream, System.Boolean isDelta = False)
constexpr auto WriteToStream_System_IO_Stream_stream = 33200368; // System.Void WriteToStream(System.IO.Stream stream)
constexpr auto WriteToStreamDelta_System_IO_Stream_stream__ProtoBuf_Attack_previous = 33200400; // System.Void WriteToStreamDelta(System.IO.Stream stream, ProtoBuf.Attack previous)
constexpr auto ReadFromStream_System_IO_Stream_stream__System_Int32_size__System_Boolean_isDelta___False = 33194976; // System.Void ReadFromStream(System.IO.Stream stream, System.Int32 size, System.Boolean isDelta = False)
constexpr auto ToProtoBytes = 33200352; // System.Byte[] ToProtoBytes()
constexpr auto ToProto_System_IO_Stream_stream = 33200368; // System.Void ToProto(System.IO.Stream stream)
constexpr auto InspectUids_UidInspector_1_System_UInt64__action = 33194864; // System.Void InspectUids(UidInspector`1<System.UInt64> action)
constexpr auto _ctor = 33200432; // System.Void .ctor()
}
namespace StaticMethods
{
constexpr auto ResetToPool_ProtoBuf_Attack_instance = 33195008; // System.Void ResetToPool(ProtoBuf.Attack instance)
constexpr auto Deserialize_System_IO_Stream_stream = 33190240; // ProtoBuf.Attack Deserialize(System.IO.Stream stream)
constexpr auto DeserializeLengthDelimited_System_IO_Stream_stream = 33186560; // ProtoBuf.Attack DeserializeLengthDelimited(System.IO.Stream stream)
constexpr auto DeserializeLength_System_IO_Stream_stream__System_Int32_length = 33187920; // ProtoBuf.Attack DeserializeLength(System.IO.Stream stream, System.Int32 length)
constexpr auto Deserialize_System_Byte___buffer = 33191248; // ProtoBuf.Attack Deserialize(System.Byte[] buffer)
constexpr auto Deserialize_System_Byte___buffer__ProtoBuf_Attack_instance__System_Boolean_isDelta___False = 33192512; // ProtoBuf.Attack Deserialize(System.Byte[] buffer, ProtoBuf.Attack instance, System.Boolean isDelta = False)
constexpr auto Deserialize_System_IO_Stream_stream__ProtoBuf_Attack_instance__System_Boolean_isDelta = 33189264; // ProtoBuf.Attack Deserialize(System.IO.Stream stream, ProtoBuf.Attack instance, System.Boolean isDelta)
constexpr auto DeserializeLengthDelimited_System_IO_Stream_stream__ProtoBuf_Attack_instance__System_Boolean_isDelta = 33186688; // ProtoBuf.Attack DeserializeLengthDelimited(System.IO.Stream stream, ProtoBuf.Attack instance, System.Boolean isDelta)
constexpr auto DeserializeLength_System_IO_Stream_stream__System_Int32_length__ProtoBuf_Attack_instance__System_Boolean_isDelta = 33188064; // ProtoBuf.Attack DeserializeLength(System.IO.Stream stream, System.Int32 length, ProtoBuf.Attack instance, System.Boolean isDelta)
constexpr auto SerializeDelta_System_IO_Stream_stream__ProtoBuf_Attack_instance__ProtoBuf_Attack_previous = 33195680; // System.Void SerializeDelta(System.IO.Stream stream, ProtoBuf.Attack instance, ProtoBuf.Attack previous)
constexpr auto Serialize_System_IO_Stream_stream__ProtoBuf_Attack_instance = 33198736; // System.Void Serialize(System.IO.Stream stream, ProtoBuf.Attack instance)
constexpr auto SerializeToBytes_ProtoBuf_Attack_instance = 33198464; // System.Byte[] SerializeToBytes(ProtoBuf.Attack instance)
constexpr auto SerializeLengthDelimited_System_IO_Stream_stream__ProtoBuf_Attack_instance = 33198304; // System.Void SerializeLengthDelimited(System.IO.Stream stream, ProtoBuf.Attack instance)
}
}
namespace ProtoBuf_Entity
{
namespace Fields
{
constexpr auto baseNetworkable = 0x10; // ProtoBuf.BaseNetworkable
constexpr auto baseEntity = 0x18; // ProtoBuf.BaseEntity
constexpr auto basePlayer = 0x20; // ProtoBuf.BasePlayer
constexpr auto worldItem = 0x28; // ProtoBuf.WorldItem
constexpr auto resource = 0x30; // ProtoBuf.BaseResource
constexpr auto buildingBlock = 0x38; // ProtoBuf.BuildingBlock
constexpr auto environment = 0x40; // ProtoBuf.Environment
constexpr auto corpse = 0x48; // ProtoBuf.Corpse
constexpr auto parent = 0x50; // ProtoBuf.ParentInfo
constexpr auto keyLock = 0x58; // ProtoBuf.KeyLock
constexpr auto codeLock = 0x60; // ProtoBuf.CodeLock
constexpr auto entitySlots = 0x68; // ProtoBuf.EntitySlots
constexpr auto buildingPrivilege = 0x70; // ProtoBuf.BuildingPrivilege
constexpr auto storageBox = 0x78; // ProtoBuf.StorageBox
constexpr auto heldEntity = 0x80; // ProtoBuf.HeldEntity
constexpr auto baseProjectile = 0x88; // ProtoBuf.BaseProjectile
constexpr auto baseNPC = 0x90; // ProtoBuf.BaseNPC
constexpr auto loot = 0x98; // ProtoBuf.Loot
constexpr auto genericSpawner = 0xa0; // ProtoBuf.GenericSpawner
constexpr auto sleepingBag = 0xa8; // ProtoBuf.SleepingBag
constexpr auto lootableCorpse = 0xb0; // ProtoBuf.LootableCorpse
constexpr auto sign = 0xb8; // ProtoBuf.Sign
constexpr auto baseCombat = 0xc0; // ProtoBuf.BaseCombat
constexpr auto mapEntity = 0xc8; // ProtoBuf.MapEntity
constexpr auto researchTable = 0xd0; // ProtoBuf.ResearchTable
constexpr auto dudExplosive = 0xd8; // ProtoBuf.DudExplosive
constexpr auto miningQuarry = 0xe0; // ProtoBuf.MiningQuarry
constexpr auto baseVehicle = 0xe8; // ProtoBuf.BaseVehicle
constexpr auto helicopter = 0xf0; // ProtoBuf.Helicopter
constexpr auto landmine = 0xf8; // ProtoBuf.Landmine
constexpr auto autoturret = 0x100; // ProtoBuf.AutoTurret
constexpr auto sphereEntity = 0x108; // ProtoBuf.SphereEntity
constexpr auto stabilityEntity = 0x110; // ProtoBuf.StabilityEntity
constexpr auto ownerInfo = 0x118; // ProtoBuf.OwnerInfo
constexpr auto decayEntity = 0x120; // ProtoBuf.DecayEntity
constexpr auto spawnable = 0x128; // ProtoBuf.Spawnable
constexpr auto servergib = 0x130; // ProtoBuf.ServerGib
constexpr auto vendingMachine = 0x138; // ProtoBuf.VendingMachine
constexpr auto spinnerWheel = 0x140; // ProtoBuf.SpinnerWheel
constexpr auto lift = 0x148; // ProtoBuf.Lift
constexpr auto bradley = 0x150; // ProtoBuf.BradleyAPC
constexpr auto waterwell = 0x158; // ProtoBuf.WaterWell
constexpr auto motorBoat = 0x160; // ProtoBuf.Motorboat
constexpr auto ioEntity = 0x168; // ProtoBuf.IOEntity
constexpr auto puzzleReset = 0x170; // ProtoBuf.PuzzleReset
constexpr auto relationshipManager = 0x178; // ProtoBuf.RelationshipManager
constexpr auto hotAirBalloon = 0x180; // ProtoBuf.HotAirBalloon
constexpr auto samSite = 0x188; // ProtoBuf.SAMSite
constexpr auto eggHunt = 0x190; // ProtoBuf.EggHunt
constexpr auto arcadeMachine = 0x198; // ProtoBuf.ArcadeMachine
constexpr auto miniCopter = 0x1a0; // ProtoBuf.Minicopter
constexpr auto horse = 0x1a8; // ProtoBuf.Horse
constexpr auto smartAlarm = 0x1b0; // ProtoBuf.SmartAlarm
constexpr auto lightString = 0x1b8; // ProtoBuf.LightString
constexpr auto lightDeployer = 0x1c0; // ProtoBuf.LightDeployer
constexpr auto rcEntity = 0x1c8; // ProtoBuf.RCEntity
constexpr auto computerStation = 0x1d0; // ProtoBuf.ComputerStation
constexpr auto growableEntity = 0x1d8; // ProtoBuf.GrowableEntity
constexpr auto composter = 0x1e0; // ProtoBuf.Composter
constexpr auto modularVehicle = 0x1e8; // ProtoBuf.ModularVehicle
constexpr auto modularCar = 0x1f0; // ProtoBuf.ModularCar
constexpr auto simpleUID = 0x1f8; // ProtoBuf.SimpleUID
constexpr auto vehicleLift = 0x200; // ProtoBuf.VehicleLift
constexpr auto engineStorage = 0x208; // ProtoBuf.EngineStorage
constexpr auto vehicleVendor = 0x210; // ProtoBuf.VehicleVendor
constexpr auto WaterPool = 0x218; // ProtoBuf.WaterPool
constexpr auto photo = 0x220; // ProtoBuf.Photo
constexpr auto photoFrame = 0x228; // ProtoBuf.PhotoFrame
constexpr auto vehicleModule = 0x230; // ProtoBuf.VehicleModule
constexpr auto mixingTable = 0x238; // ProtoBuf.MixingTable
constexpr auto shopKeeper = 0x240; // ProtoBuf.ShopKeeper
constexpr auto elevator = 0x248; // ProtoBuf.Elevator
constexpr auto skullTrophy = 0x250; // ProtoBuf.SkullTrophy
constexpr auto cassette = 0x258; // ProtoBuf.Cassette
constexpr auto telephone = 0x260; // ProtoBuf.Telephone
constexpr auto boomBox = 0x268; // ProtoBuf.BoomBox
constexpr auto neonSign = 0x270; // ProtoBuf.NeonSign
constexpr auto subEntityList = 0x278; // ProtoBuf.SubEntityList
constexpr auto marketTerminal = 0x280; // ProtoBuf.MarketTerminal
constexpr auto deliveryDrone = 0x288; // ProtoBuf.DeliveryDrone
constexpr auto reclaimTerminal = 0x290; // ProtoBuf.ReclaimTerminal
constexpr auto slotMachine = 0x298; // ProtoBuf.SlotMachine
constexpr auto trainEngine = 0x2a0; // ProtoBuf.TrainEngine
constexpr auto cardGame = 0x2a8; // ProtoBuf.CardGame
constexpr auto crane = 0x2b0; // ProtoBuf.Crane
constexpr auto connectedSpeaker = 0x2b8; // ProtoBuf.ConnectedSpeaker
constexpr auto audioEntity = 0x2c0; // ProtoBuf.AudioEntity
constexpr auto microphoneStand = 0x2c8; // ProtoBuf.MicrophoneStand
constexpr auto submarine = 0x2d0; // ProtoBuf.Submarine
constexpr auto sleepingBagCamper = 0x2d8; // ProtoBuf.SleepingBagCamper
constexpr auto camperModule = 0x2e0; // ProtoBuf.CamperModule
constexpr auto paintableSign = 0x2e8; // ProtoBuf.PaintableSign
constexpr auto whitelist = 0x2f0; // ProtoBuf.Whitelist
constexpr auto FrankensteinTable = 0x2f8; // ProtoBuf.FrankensteinTable
constexpr auto mlrs = 0x300; // ProtoBuf.MLRS
constexpr auto reclaimManager = 0x308; // ProtoBuf.ReclaimManager
constexpr auto gameMode = 0x310; // ProtoBuf.GameMode
constexpr auto snowmobile = 0x318; // ProtoBuf.Snowmobile
constexpr auto createdThisFrame = 0x320; // System.Boolean
constexpr auto patternFirework = 0x328; // ProtoBuf.PatternFirework
constexpr auto cargoPlane = 0x330; // ProtoBuf.CargoPlane
constexpr auto paintedItem = 0x338; // ProtoBuf.PaintedItem
constexpr auto clanManager = 0x340; // ProtoBuf.ClanManager
constexpr auto spray = 0x348; // ProtoBuf.Spray
constexpr auto baseTrain = 0x350; // ProtoBuf.BaseTrain
constexpr auto zipline = 0x358; // ProtoBuf.Zipline
constexpr auto ziplineMountable = 0x360; // ProtoBuf.ZiplineMountable
constexpr auto ZiplineArrival = 0x368; // ProtoBuf.ZiplineArrivalPoint
constexpr auto sprayLine = 0x370; // ProtoBuf.SprayLine
constexpr auto coalingTower = 0x378; // ProtoBuf.CoalingTower
constexpr auto simpleInt = 0x380; // ProtoBuf.SimpleInt
constexpr auto baseOven = 0x388; // ProtoBuf.BaseOven
constexpr auto brainComponent = 0x390; // ProtoBuf.BrainComponent
constexpr auto proceduralDungeon = 0x398; // ProtoBuf.ProceduralDungeon
constexpr auto industrialConveyor = 0x3a0; // ProtoBuf.IndustrialConveyor
constexpr auto industrialCrafter = 0x3a8; // ProtoBuf.IndustrialCrafter
constexpr auto drone = 0x3b0; // ProtoBuf.Drone
constexpr auto explosive = 0x3b8; // ProtoBuf.TimedExplosive
constexpr auto simpleUint = 0x3c0; // ProtoBuf.SimpleUInt
constexpr auto weaponRack = 0x3c8; // ProtoBuf.WeaponRack
constexpr auto attackHeli = 0x3d0; // ProtoBuf.AttackHeli
constexpr auto attackHeliTurret = 0x3d8; // ProtoBuf.AttackHeliTurret
constexpr auto attackHeliRockets = 0x3e0; // ProtoBuf.AttackHeliRockets
constexpr auto baseBoat = 0x3e8; // ProtoBuf.BaseBoat
constexpr auto associatedFiles = 0x3f0; // ProtoBuf.AssociatedFiles
constexpr auto nexusFerry = 0x3f8; // ProtoBuf.NexusFerry
constexpr auto nexusIsland = 0x400; // ProtoBuf.NexusIsland
constexpr auto nexusDockTerminal = 0x408; // ProtoBuf.NexusDockTerminal
constexpr auto rockingChair = 0x410; // ProtoBuf.RockingChair
constexpr auto headData = 0x418; // ProtoBuf.HeadData
constexpr auto wantedPoster = 0x420; // ProtoBuf.WantedPoster
constexpr auto ridableAnimal = 0x428; // ProtoBuf.RidableAnimal
constexpr auto ShouldPool = 0x430; // System.Boolean
constexpr auto _disposed = 0x431; // System.Boolean
}
namespace Methods
{
constexpr auto ResetToPool = 32611520; // System.Void ResetToPool()
constexpr auto Dispose = 32608288; // System.Void Dispose()
constexpr auto EnterPool = 32608416; // System.Void EnterPool()
constexpr auto LeavePool = 32611472; // System.Void LeavePool()
constexpr auto CopyTo_ProtoBuf_Entity_instance = 32562032; // System.Void CopyTo(ProtoBuf.Entity instance)
constexpr auto Copy = 32571360; // ProtoBuf.Entity Copy()
constexpr auto FromProto_System_IO_Stream_stream__System_Boolean_isDelta___False = 32608432; // System.Void FromProto(System.IO.Stream stream, System.Boolean isDelta = False)
constexpr auto WriteToStream_System_IO_Stream_stream = 32683696; // System.Void WriteToStream(System.IO.Stream stream)
constexpr auto WriteToStreamDelta_System_IO_Stream_stream__ProtoBuf_Entity_previous = 32683728; // System.Void WriteToStreamDelta(System.IO.Stream stream, ProtoBuf.Entity previous)
constexpr auto ReadFromStream_System_IO_Stream_stream__System_Int32_size__System_Boolean_isDelta___False = 32611488; // System.Void ReadFromStream(System.IO.Stream stream, System.Int32 size, System.Boolean isDelta = False)
constexpr auto ToProtoBytes = 32683680; // System.Byte[] ToProtoBytes()
constexpr auto ToProto_System_IO_Stream_stream = 32683696; // System.Void ToProto(System.IO.Stream stream)
constexpr auto InspectUids_UidInspector_1_System_UInt64__action = 32608464; // System.Void InspectUids(UidInspector`1<System.UInt64> action)
constexpr auto _ctor = 32683760; // System.Void .ctor()
}
namespace StaticMethods
{
constexpr auto ResetToPool_ProtoBuf_Entity_instance = 32611536; // System.Void ResetToPool(ProtoBuf.Entity instance)
constexpr auto Deserialize_System_IO_Stream_stream = 32595824; // ProtoBuf.Entity Deserialize(System.IO.Stream stream)
constexpr auto DeserializeLengthDelimited_System_IO_Stream_stream = 32571488; // ProtoBuf.Entity DeserializeLengthDelimited(System.IO.Stream stream)
constexpr auto DeserializeLength_System_IO_Stream_stream__System_Int32_length = 32583664; // ProtoBuf.Entity DeserializeLength(System.IO.Stream stream, System.Int32 length)
constexpr auto Deserialize_System_Byte___buffer = 32596208; // ProtoBuf.Entity Deserialize(System.Byte[] buffer)
constexpr auto Deserialize_System_Byte___buffer__ProtoBuf_Entity_instance__System_Boolean_isDelta___False = 32595952; // ProtoBuf.Entity Deserialize(System.Byte[] buffer, ProtoBuf.Entity instance, System.Boolean isDelta = False)
constexpr auto Deserialize_System_IO_Stream_stream__ProtoBuf_Entity_instance__System_Boolean_isDelta = 32596512; // ProtoBuf.Entity Deserialize(System.IO.Stream stream, ProtoBuf.Entity instance, System.Boolean isDelta)
constexpr auto DeserializeLengthDelimited_System_IO_Stream_stream__ProtoBuf_Entity_instance__System_Boolean_isDelta = 32571616; // ProtoBuf.Entity DeserializeLengthDelimited(System.IO.Stream stream, ProtoBuf.Entity instance, System.Boolean isDelta)
constexpr auto DeserializeLength_System_IO_Stream_stream__System_Int32_length__ProtoBuf_Entity_instance__System_Boolean_isDelta = 32583808; // ProtoBuf.Entity DeserializeLength(System.IO.Stream stream, System.Int32 length, ProtoBuf.Entity instance, System.Boolean isDelta)
constexpr auto SerializeDelta_System_IO_Stream_stream__ProtoBuf_Entity_instance__ProtoBuf_Entity_previous = 32620016; // System.Void SerializeDelta(System.IO.Stream stream, ProtoBuf.Entity instance, ProtoBuf.Entity previous)
constexpr auto Serialize_System_IO_Stream_stream__ProtoBuf_Entity_instance = 32653024; // System.Void Serialize(System.IO.Stream stream, ProtoBuf.Entity instance)
constexpr auto SerializeToBytes_ProtoBuf_Entity_instance = 32652752; // System.Byte[] SerializeToBytes(ProtoBuf.Entity instance)
constexpr auto SerializeLengthDelimited_System_IO_Stream_stream__ProtoBuf_Entity_instance = 32652592; // System.Void SerializeLengthDelimited(System.IO.Stream stream, ProtoBuf.Entity instance)
}
}
namespace Network_Net
{
namespace StaticFields
{
constexpr auto _cl_k__BackingField = 0x0; // Network.Client
constexpr auto ClientNetwork = 0x8; // Network.Client
constexpr auto DemoClientNetwork = 0x10; // Network.DemoClient
}
namespace Methods
{
constexpr auto _ctor = 3679632; // System.Void .ctor()
}
namespace StaticMethods
{
constexpr auto get_cl = 4178656; // Network.Client get_cl()
constexpr auto set_cl_Network_Client_value = 4178720; // System.Void set_cl(Network.Client value)
constexpr auto ClientInit_Network_Client_newclient = 4178016; // System.Void ClientInit(Network.Client newclient)
constexpr auto StartDemoPlayback_Rust_Demo_Reader_demo = 4178192; // System.Void StartDemoPlayback(Rust.Demo.Reader demo)
constexpr auto StopDemoPlayback = 4178432; // System.Void StopDemoPlayback()
}
}
namespace TOD_Sky
{
namespace Fields
{
constexpr auto ColorSpace = 0x18; // TOD_ColorSpaceType
constexpr auto ColorRange = 0x1c; // TOD_ColorRangeType
constexpr auto ColorOutput = 0x20; // TOD_ColorOutputType
constexpr auto SkyQuality = 0x24; // TOD_SkyQualityType
constexpr auto CloudQuality = 0x28; // TOD_CloudQualityType
constexpr auto MeshQuality = 0x2c; // TOD_MeshQualityType
constexpr auto StarQuality = 0x30; // TOD_StarQualityType
constexpr auto Cycle = 0x38; // TOD_CycleParameters
constexpr auto World = 0x40; // TOD_WorldParameters
constexpr auto Atmosphere = 0x48; // TOD_AtmosphereParameters
constexpr auto Day = 0x50; // TOD_DayParameters
constexpr auto Night = 0x58; // TOD_NightParameters
constexpr auto Sun = 0x60; // TOD_SunParameters
constexpr auto Moon = 0x68; // TOD_MoonParameters
constexpr auto Stars = 0x70; // TOD_StarParameters
constexpr auto Clouds = 0x78; // TOD_CloudParameters
constexpr auto Light = 0x80; // TOD_LightParameters
constexpr auto Fog = 0x88; // TOD_FogParameters
constexpr auto Ambient = 0x90; // TOD_AmbientParameters
constexpr auto Reflection = 0x98; // TOD_ReflectionParameters
constexpr auto _Initialized_k__BackingField = 0xa0; // System.Boolean
constexpr auto _Components_k__BackingField = 0xa8; // TOD_Components
constexpr auto _Resources_k__BackingField = 0xb0; // TOD_Resources
constexpr auto _IsDay_k__BackingField = 0xb8; // System.Boolean
constexpr auto _IsNight_k__BackingField = 0xb9; // System.Boolean
constexpr auto _LerpValue_k__BackingField = 0xbc; // System.Single
constexpr auto _SunZenith_k__BackingField = 0xc0; // System.Single
constexpr auto _SunAltitude_k__BackingField = 0xc4; // System.Single
constexpr auto _SunAzimuth_k__BackingField = 0xc8; // System.Single
constexpr auto _MoonZenith_k__BackingField = 0xcc; // System.Single
constexpr auto _MoonAltitude_k__BackingField = 0xd0; // System.Single
constexpr auto _MoonAzimuth_k__BackingField = 0xd4; // System.Single
constexpr auto _SunsetTime_k__BackingField = 0xd8; // System.Single
constexpr auto _SunriseTime_k__BackingField = 0xdc; // System.Single
constexpr auto _LocalSiderealTime_k__BackingField = 0xe0; // System.Single
constexpr auto _SunVisibility_k__BackingField = 0xe4; // System.Single
constexpr auto _MoonVisibility_k__BackingField = 0xe8; // System.Single
constexpr auto _SunDirection_k__BackingField = 0xec; // UnityEngine.Vector3
constexpr auto _MoonDirection_k__BackingField = 0xf8; // UnityEngine.Vector3
constexpr auto _LightDirection_k__BackingField = 0x104; // UnityEngine.Vector3
constexpr auto _LocalSunDirection_k__BackingField = 0x110; // UnityEngine.Vector3
constexpr auto _LocalMoonDirection_k__BackingField = 0x11c; // UnityEngine.Vector3
constexpr auto _LocalLightDirection_k__BackingField = 0x128; // UnityEngine.Vector3
constexpr auto _SunLightColor_k__BackingField = 0x134; // UnityEngine.Color
constexpr auto _MoonLightColor_k__BackingField = 0x144; // UnityEngine.Color
constexpr auto _SunRayColor_k__BackingField = 0x154; // UnityEngine.Color
constexpr auto _MoonRayColor_k__BackingField = 0x164; // UnityEngine.Color
constexpr auto _SunSkyColor_k__BackingField = 0x174; // UnityEngine.Color
constexpr auto _MoonSkyColor_k__BackingField = 0x184; // UnityEngine.Color
constexpr auto _SunMeshColor_k__BackingField = 0x194; // UnityEngine.Color
constexpr auto _MoonMeshColor_k__BackingField = 0x1a4; // UnityEngine.Color
constexpr auto _SunCloudColor_k__BackingField = 0x1b4; // UnityEngine.Color
constexpr auto _MoonCloudColor_k__BackingField = 0x1c4; // UnityEngine.Color
constexpr auto _FogColor_k__BackingField = 0x1d4; // UnityEngine.Color
constexpr auto _GroundColor_k__BackingField = 0x1e4; // UnityEngine.Color
constexpr auto _AmbientColor_k__BackingField = 0x1f4; // UnityEngine.Color
constexpr auto _MoonHaloColor_k__BackingField = 0x204; // UnityEngine.Color
constexpr auto ReflectionCur = 0x218; // TOD_Sky/ReflectionProbeState
constexpr auto ReflectionSrc = 0x220; // TOD_Sky/ReflectionProbeState
constexpr auto ReflectionDst = 0x228; // TOD_Sky/ReflectionProbeState
constexpr auto timeSinceLightUpdate = 0x230; // System.Single
constexpr auto timeSinceAmbientUpdate = 0x234; // System.Single
constexpr auto timeSinceReflectionUpdate = 0x238; // System.Single
constexpr auto kBetaMie = 0x23c; // UnityEngine.Vector3
constexpr auto kSun = 0x248; // UnityEngine.Vector4
constexpr auto k4PI = 0x258; // UnityEngine.Vector4
constexpr auto kRadius = 0x268; // UnityEngine.Vector4
constexpr auto kScale = 0x278; // UnityEngine.Vector4
}
namespace StaticFields
{
constexpr auto instances = 0x0; // System.Collections.Generic.List`1
constexpr auto ReflectionUpdateSpeed = 0x8; // System.Single
constexpr auto ReflectionResolution = 0xc; // System.Int32
constexpr auto ReflectionUpdateInterval = 0x10; // System.Single
constexpr auto ReflectionTimeSlicing = 0x14; // UnityEngine.Rendering.ReflectionProbeTimeSlicingMode
constexpr auto TOD_SAMPLES = 0x0; // System.Int32
constexpr auto pi = 0x0; // System.Single
constexpr auto tau = 0x0; // System.Single
}
namespace Methods
{
constexpr auto get_Initialized = 3750080; // System.Boolean get_Initialized()
constexpr auto set_Initialized_System_Boolean_value = 3751280; // System.Void set_Initialized(System.Boolean value)
constexpr auto get_Headless = 3750048; // System.Boolean get_Headless()
constexpr auto get_Components = 3702912; // TOD_Components get_Components()
constexpr auto set_Components_TOD_Components_value = 3703584; // System.Void set_Components(TOD_Components value)
constexpr auto get_Resources = 3703088; // TOD_Resources get_Resources()
constexpr auto set_Resources_TOD_Resources_value = 3703760; // System.Void set_Resources(TOD_Resources value)
constexpr auto get_IsDay = 3750352; // System.Boolean get_IsDay()
constexpr auto set_IsDay_System_Boolean_value = 3751296; // System.Void set_IsDay(System.Boolean value)
constexpr auto get_IsNight = 3750368; // System.Boolean get_IsNight()
constexpr auto set_IsNight_System_Boolean_value = 3751312; // System.Void set_IsNight(System.Boolean value)
constexpr auto get_Radius = 3750960; // System.Single get_Radius()
constexpr auto get_Diameter = 3749952; // System.Single get_Diameter()
constexpr auto get_LerpValue = 3750384; // System.Single get_LerpValue()
constexpr auto set_LerpValue_System_Single_value = 3751328; // System.Void set_LerpValue(System.Single value)
constexpr auto get_SunZenith = 3751184; // System.Single get_SunZenith()
constexpr auto set_SunZenith_System_Single_value = 3751952; // System.Void set_SunZenith(System.Single value)
constexpr auto get_SunAltitude = 3751024; // System.Single get_SunAltitude()
constexpr auto set_SunAltitude_System_Single_value = 3751792; // System.Void set_SunAltitude(System.Single value)
constexpr auto get_SunAzimuth = 3751040; // System.Single get_SunAzimuth()
constexpr auto set_SunAzimuth_System_Single_value = 3751808; // System.Void set_SunAzimuth(System.Single value)
constexpr auto get_MoonZenith = 3750880; // System.Single get_MoonZenith()
constexpr auto set_MoonZenith_System_Single_value = 3751776; // System.Void set_MoonZenith(System.Single value)
constexpr auto get_MoonAltitude = 3750704; // System.Single get_MoonAltitude()
constexpr auto set_MoonAltitude_System_Single_value = 3751600; // System.Void set_MoonAltitude(System.Single value)
constexpr auto get_MoonAzimuth = 3750720; // System.Single get_MoonAzimuth()
constexpr auto set_MoonAzimuth_System_Single_value = 3751616; // System.Void set_MoonAzimuth(System.Single value)
constexpr auto get_SunsetTime = 3751216; // System.Single get_SunsetTime()
constexpr auto set_SunsetTime_System_Single_value = 3751984; // System.Void set_SunsetTime(System.Single value)
constexpr auto get_SunriseTime = 3751200; // System.Single get_SunriseTime()
constexpr auto set_SunriseTime_System_Single_value = 3751968; // System.Void set_SunriseTime(System.Single value)
constexpr auto get_LocalSiderealTime = 3750656; // System.Single get_LocalSiderealTime()
constexpr auto set_LocalSiderealTime_System_Single_value = 3751552; // System.Void set_LocalSiderealTime(System.Single value)
constexpr auto get_LightZenith = 3750560; // System.Single get_LightZenith()
constexpr auto get_LightIntensity = 3750512; // System.Single get_LightIntensity()
constexpr auto set_LightIntensity_System_Single_value = 3751440; // System.Void set_LightIntensity(System.Single value)
constexpr auto get_SunVisibility = 3751168; // System.Single get_SunVisibility()
constexpr auto set_SunVisibility_System_Single_value = 3751936; // System.Void set_SunVisibility(System.Single value)
constexpr auto get_MoonVisibility = 3750864; // System.Single get_MoonVisibility()
constexpr auto set_MoonVisibility_System_Single_value = 3751760; // System.Void set_MoonVisibility(System.Single value)
constexpr auto get_SunDirection = 3751072; // UnityEngine.Vector3 get_SunDirection()
constexpr auto set_SunDirection_UnityEngine_Vector3_value = 3751840; // System.Void set_SunDirection(UnityEngine.Vector3 value)
constexpr auto get_MoonDirection = 3750752; // UnityEngine.Vector3 get_MoonDirection()
constexpr auto set_MoonDirection_UnityEngine_Vector3_value = 3751648; // System.Void set_MoonDirection(UnityEngine.Vector3 value)
constexpr auto get_LightDirection = 3750480; // UnityEngine.Vector3 get_LightDirection()
constexpr auto set_LightDirection_UnityEngine_Vector3_value = 3751408; // System.Void set_LightDirection(UnityEngine.Vector3 value)
constexpr auto get_LocalSunDirection = 3750672; // UnityEngine.Vector3 get_LocalSunDirection()
constexpr auto set_LocalSunDirection_UnityEngine_Vector3_value = 3751568; // System.Void set_LocalSunDirection(UnityEngine.Vector3 value)
constexpr auto get_LocalMoonDirection = 3750624; // UnityEngine.Vector3 get_LocalMoonDirection()
constexpr auto set_LocalMoonDirection_UnityEngine_Vector3_value = 3751520; // System.Void set_LocalMoonDirection(UnityEngine.Vector3 value)
constexpr auto get_LocalLightDirection = 3750592; // UnityEngine.Vector3 get_LocalLightDirection()
constexpr auto set_LocalLightDirection_UnityEngine_Vector3_value = 3751488; // System.Void set_LocalLightDirection(UnityEngine.Vector3 value)
constexpr auto get_SunLightColor = 3751104; // UnityEngine.Color get_SunLightColor()
constexpr auto set_SunLightColor_UnityEngine_Color_value = 3751872; // System.Void set_SunLightColor(UnityEngine.Color value)
constexpr auto get_MoonLightColor = 3750800; // UnityEngine.Color get_MoonLightColor()
constexpr auto set_MoonLightColor_UnityEngine_Color_value = 3751696; // System.Void set_MoonLightColor(UnityEngine.Color value)
constexpr auto get_LightColor = 3750400; // UnityEngine.Color get_LightColor()
constexpr auto set_LightColor_UnityEngine_Color_value = 3751344; // System.Void set_LightColor(UnityEngine.Color value)
constexpr auto get_SunRayColor = 3751136; // UnityEngine.Color get_SunRayColor()
constexpr auto set_SunRayColor_UnityEngine_Color_value = 3751904; // System.Void set_SunRayColor(UnityEngine.Color value)
constexpr auto get_MoonRayColor = 3750832; // UnityEngine.Color get_MoonRayColor()
constexpr auto set_MoonRayColor_UnityEngine_Color_value = 3751728; // System.Void set_MoonRayColor(UnityEngine.Color value)
constexpr auto get_SunSkyColor = 3751152; // UnityEngine.Color get_SunSkyColor()
constexpr auto set_SunSkyColor_UnityEngine_Color_value = 3751920; // System.Void set_SunSkyColor(UnityEngine.Color value)
constexpr auto get_MoonSkyColor = 3750848; // UnityEngine.Color get_MoonSkyColor()
constexpr auto set_MoonSkyColor_UnityEngine_Color_value = 3751744; // System.Void set_MoonSkyColor(UnityEngine.Color value)
constexpr auto get_SunMeshColor = 3751120; // UnityEngine.Color get_SunMeshColor()
constexpr auto set_SunMeshColor_UnityEngine_Color_value = 3751888; // System.Void set_SunMeshColor(UnityEngine.Color value)
constexpr auto get_MoonMeshColor = 3750816; // UnityEngine.Color get_MoonMeshColor()
constexpr auto set_MoonMeshColor_UnityEngine_Color_value = 3751712; // System.Void set_MoonMeshColor(UnityEngine.Color value)
constexpr auto get_SunCloudColor = 3751056; // UnityEngine.Color get_SunCloudColor()
constexpr auto set_SunCloudColor_UnityEngine_Color_value = 3751824; // System.Void set_SunCloudColor(UnityEngine.Color value)
constexpr auto get_MoonCloudColor = 3750736; // UnityEngine.Color get_MoonCloudColor()
constexpr auto set_MoonCloudColor_UnityEngine_Color_value = 3751632; // System.Void set_MoonCloudColor(UnityEngine.Color value)
constexpr auto get_FogColor = 3750016; // UnityEngine.Color get_FogColor()
constexpr auto set_FogColor_UnityEngine_Color_value = 3751248; // System.Void set_FogColor(UnityEngine.Color value)
constexpr auto get_GroundColor = 3750032; // UnityEngine.Color get_GroundColor()
constexpr auto set_GroundColor_UnityEngine_Color_value = 3751264; // System.Void set_GroundColor(UnityEngine.Color value)
constexpr auto get_AmbientColor = 3749936; // UnityEngine.Color get_AmbientColor()
constexpr auto set_AmbientColor_UnityEngine_Color_value = 3751232; // System.Void set_AmbientColor(UnityEngine.Color value)
constexpr auto get_MoonHaloColor = 3750784; // UnityEngine.Color get_MoonHaloColor()
constexpr auto set_MoonHaloColor_UnityEngine_Color_value = 3751680; // System.Void set_MoonHaloColor(UnityEngine.Color value)
constexpr auto get_Probe = 3750928; // UnityEngine.ReflectionProbe get_Probe()
constexpr auto get_ProbeInstance = 3750896; // UnityEngine.GameObject get_ProbeInstance()
constexpr auto OrbitalToUnity_System_Single_radius__System_Single_theta__System_Single_phi = 3721152; // UnityEngine.Vector3 OrbitalToUnity(System.Single radius, System.Single theta, System.Single phi)
constexpr auto OrbitalToLocal_System_Single_theta__System_Single_phi = 3721024; // UnityEngine.Vector3 OrbitalToLocal(System.Single theta, System.Single phi)
constexpr auto SampleAtmosphere_UnityEngine_Vector3_direction__System_Boolean_directLight___True = 3725536; // UnityEngine.Color SampleAtmosphere(UnityEngine.Vector3 direction, System.Boolean directLight = True)
constexpr auto RenderToSphericalHarmonics = 3725312; // UnityEngine.Rendering.SphericalHarmonicsL2 RenderToSphericalHarmonics()
constexpr auto RenderToSphericalHarmonics_System_Single_intensity__System_Single_saturation = 3722448; // UnityEngine.Rendering.SphericalHarmonicsL2 RenderToSphericalHarmonics(System.Single intensity, System.Single saturation)
constexpr auto RenderToCubemap_UnityEngine_RenderTexture_targetTexture___null = 3721376; // System.Void RenderToCubemap(UnityEngine.RenderTexture targetTexture = null)
constexpr auto RenderToProbe = 3721696; // System.Void RenderToProbe()
constexpr auto ReflectionIsUpdating = 3721296; // System.Boolean ReflectionIsUpdating()
constexpr auto UpdateProbeBlending_System_Single_lerp = 3740432; // System.Void UpdateProbeBlending(System.Single lerp)
constexpr auto UpdateProbeProperties_UnityEngine_ReflectionProbe_probe = 3740672; // System.Void UpdateProbeProperties(UnityEngine.ReflectionProbe probe)
constexpr auto SampleFogColor_System_Boolean_directLight___True = 3726176; // UnityEngine.Color SampleFogColor(System.Boolean directLight = True)
constexpr auto SampleSkyColor = 3727024; // UnityEngine.Color SampleSkyColor()
constexpr auto SampleEquatorColor = 3725984; // UnityEngine.Color SampleEquatorColor()
constexpr auto UpdateFog = 3740304; // System.Void UpdateFog()
constexpr auto UpdateAmbient = 3731360; // System.Void UpdateAmbient()
constexpr auto UpdateReflection = 3743088; // System.Void UpdateReflection()
constexpr auto DelayReflectionUpdate = 3718992; // System.Void DelayReflectionUpdate()
constexpr auto LoadParameters_System_String_xml = 3720064; // System.Void LoadParameters(System.String xml)
constexpr auto SaveParameters = 3727216; // System.String SaveParameters()
constexpr auto UpdateQualitySettings = 3741648; // System.Void UpdateQualitySettings()
constexpr auto UpdateRenderSettings = 3743312; // System.Void UpdateRenderSettings()
constexpr auto UpdateShaderKeywords = 3744720; // System.Void UpdateShaderKeywords()
constexpr auto UpdateShaderProperties = 3745392; // System.Void UpdateShaderProperties()
constexpr auto ShaderScale_System_Single_inCos = 3728624; // System.Single ShaderScale(System.Single inCos)
constexpr auto ShaderMiePhase_System_Single_eyeCos__System_Single_eyeCos2 = 3728160; // System.Single ShaderMiePhase(System.Single eyeCos, System.Single eyeCos2)
constexpr auto ShaderRayleighPhase_System_Single_eyeCos2 = 3728592; // System.Single ShaderRayleighPhase(System.Single eyeCos2)
constexpr auto ShaderNightSkyColor_UnityEngine_Vector3_dir = 3728464; // UnityEngine.Color ShaderNightSkyColor(UnityEngine.Vector3 dir)
constexpr auto ShaderMoonHaloColor_UnityEngine_Vector3_dir = 3728240; // UnityEngine.Color ShaderMoonHaloColor(UnityEngine.Vector3 dir)
constexpr auto TOD_HDR2LDR_UnityEngine_Color_color = 3731056; // UnityEngine.Color TOD_HDR2LDR(UnityEngine.Color color)
constexpr auto TOD_GAMMA2LINEAR_UnityEngine_Color_color = 3730992; // UnityEngine.Color TOD_GAMMA2LINEAR(UnityEngine.Color color)
constexpr auto TOD_LINEAR2GAMMA_UnityEngine_Color_color = 3731280; // UnityEngine.Color TOD_LINEAR2GAMMA(UnityEngine.Color color)
constexpr auto ShaderScatteringColor_UnityEngine_Vector3_dir__System_Boolean_directLight___True = 3728720; // UnityEngine.Color ShaderScatteringColor(UnityEngine.Vector3 dir, System.Boolean directLight = True)
constexpr auto Initialize = 3719008; // System.Void Initialize()
constexpr auto Cleanup = 3718720; // System.Void Cleanup()
constexpr auto OnEnable = 3720944; // System.Void OnEnable()
constexpr auto OnDisable = 3718720; // System.Void OnDisable()
constexpr auto LateUpdate = 3719296; // System.Void LateUpdate()
constexpr auto OnValidate = 3720960; // System.Void OnValidate()
constexpr auto UpdateScattering = 3744288; // System.Void UpdateScattering()
constexpr auto UpdateCelestials = 3732464; // System.Void UpdateCelestials()
constexpr auto _ctor = 3749648; // System.Void .ctor()
}
namespace StaticMethods
{
constexpr auto get_Instances = 3750272; // System.Collections.Generic.List`1<TOD_Sky> get_Instances()
constexpr auto get_Instance = 3750096; // TOD_Sky get_Instance()
constexpr auto _cctor = 3749408; // System.Void .cctor()
}
}
namespace ConVar_Graphics
{
namespace StaticFields
{
constexpr auto MinShadowDistance = 0x0; // System.Single
constexpr auto MaxShadowDistance2Split = 0x0; // System.Single
constexpr auto MaxShadowDistance4Split = 0x0; // System.Single
constexpr auto _shadowdistance = 0x0; // System.Single
constexpr auto shadowmode = 0x4; // System.Int32
constexpr auto shadowlights = 0x8; // System.Int32
constexpr auto _shadowquality = 0xc; // System.Int32
constexpr auto grassshadows = 0x10; // System.Boolean
constexpr auto contactshadows = 0x11; // System.Boolean
constexpr auto drawdistance = 0x14; // System.Single
constexpr auto _fov = 0x18; // System.Single
constexpr auto hud = 0x1c; // System.Boolean
constexpr auto chat = 0x1d; // System.Boolean
constexpr auto branding = 0x1e; // System.Boolean
constexpr auto compass = 0x20; // System.Int32
constexpr auto dof = 0x24; // System.Boolean
constexpr auto dof_aper = 0x28; // System.Single
constexpr auto dof_blur = 0x2c; // System.Single
constexpr auto dof_mode = 0x30; // System.Int32
constexpr auto dof_focus_dist = 0x34; // System.Single
constexpr auto dof_focus_time = 0x38; // System.Single
constexpr auto dof_squeeze = 0x3c; // System.Single
constexpr auto dof_barrel = 0x40; // System.Single
constexpr auto dof_debug = 0x44; // System.Boolean
constexpr auto dof_kernel_count = 0x48; // System.Int32
constexpr auto dof_focus_target_entity = 0x50; // BaseEntity
constexpr auto vm_fov_scale = 0x58; // System.Boolean
constexpr auto vm_horizontal_flip = 0x59; // System.Boolean
constexpr auto _resolution = 0x5c; // System.Int32
constexpr auto uniqueResolutions = 0x60; // System.Collections.Generic.List`1
constexpr auto firstResolutionSet = 0x68; // System.Boolean
constexpr auto _screenmode = 0x6c; // System.Int32
constexpr auto _uiscale = 0x70; // System.Single
constexpr auto _anisotropic = 0x74; // System.Int32
constexpr auto _parallax = 0x78; // System.Int32
constexpr auto _impostorshadows = 0x7c; // System.Boolean
constexpr auto _showtexeldensity = 0x80; // System.Int32
constexpr auto _waves = 0x84; // System.Boolean
constexpr auto viewModelCamera = 0x85; // System.Boolean
constexpr auto viewModelDepth = 0x86; // System.Boolean
constexpr auto reflexMode = 0x88; // System.Int32
constexpr auto reflexIntervalUs = 0x8c; // System.Int32
constexpr auto reflexLatencyMarker = 0x90; // System.Boolean
constexpr auto useMarkersToOptimize = 0x91; // System.Boolean
constexpr auto dlss = 0x94; // System.Int32
constexpr auto _renderScale = 0x98; // System.Single
constexpr auto jitterSpread = 0x9c; // System.Single
constexpr auto disableLightLod = 0xa0; // System.Boolean
constexpr auto disableParticleLod = 0xa1; // System.Boolean
constexpr auto disableAnimatorLod = 0xa2; // System.Boolean
constexpr auto aggressiveShadowLod = 0xa3; // System.Boolean
constexpr auto _aggressiveShadowLodWearable = 0xa4; // System.Boolean
constexpr auto _hlod = 0xa5; // System.Boolean
constexpr auto lastHlodChange = 0xa8; // TimeSince
}
namespace Methods
{
constexpr auto _ctor = 12464592; // System.Void .ctor()
}
namespace StaticMethods
{
constexpr auto get_quality = 12466496; // System.Int32 get_quality()
constexpr auto set_quality_System_Int32_value = 12469808; // System.Void set_quality(System.Int32 value)
constexpr auto EnforceShadowDistanceBounds_System_Single_distance = 12460416; // System.Single EnforceShadowDistanceBounds(System.Single distance)
constexpr auto get_shadowdistance = 12466800; // System.Single get_shadowdistance()
constexpr auto set_shadowdistance_System_Single_value = 12471328; // System.Void set_shadowdistance(System.Single value)
constexpr auto get_shadowcascades = 12466784; // System.Int32 get_shadowcascades()
constexpr auto set_shadowcascades_System_Int32_value = 12471072; // System.Void set_shadowcascades(System.Int32 value)
constexpr auto get_shadowquality = 12466880; // System.Int32 get_shadowquality()
constexpr auto set_shadowquality_System_Int32_value = 12471536; // System.Void set_shadowquality(System.Int32 value)
constexpr auto get_fov = 12465984; // System.Single get_fov()
constexpr auto set_fov_System_Single_value = 12469024; // System.Void set_fov(System.Single value)
constexpr auto get_lodbias = 12466384; // System.Single get_lodbias()
constexpr auto set_lodbias_System_Single_value = 12469568; // System.Void set_lodbias(System.Single value)
constexpr auto dof_focus_target_ConsoleSystem_Arg_arg = 12464864; // System.Void dof_focus_target(ConsoleSystem/Arg arg)
constexpr auto dof_nudge_ConsoleSystem_Arg_arg = 12465504; // System.Void dof_nudge(ConsoleSystem/Arg arg)
constexpr auto get_shaderlod = 12466768; // System.Int32 get_shaderlod()
constexpr auto set_shaderlod_System_Int32_value = 12471024; // System.Void set_shaderlod(System.Int32 value)
constexpr auto get_vsync = 12467408; // System.Int32 get_vsync()
constexpr auto set_vsync_System_Int32_value = 12472224; // System.Void set_vsync(System.Int32 value)
constexpr auto resolutions_ConsoleSystem_Arg_arg = 12467520; // System.Void resolutions(ConsoleSystem/Arg arg)
constexpr auto get_resolution = 12466608; // System.Int32 get_resolution()
constexpr auto set_resolution_System_Int32_value = 12470256; // System.Void set_resolution(System.Int32 value)
constexpr auto GetUniqueResolutions = 12460752; // System.Collections.Generic.List`1<UnityEngine.Resolution> GetUniqueResolutions()
constexpr auto CacheResolutions = 12459328; // System.Void CacheResolutions()
constexpr auto get_screenmode = 12466688; // System.Int32 get_screenmode()
constexpr auto set_screenmode_System_Int32_value = 12470912; // System.Void set_screenmode(System.Int32 value)
constexpr auto ApplyScreenSettings = 12458800; // System.Void ApplyScreenSettings()
constexpr auto GetScreenMode = 12460528; // UnityEngine.FullScreenMode GetScreenMode()
constexpr auto dof_focus_lookingat_ConsoleSystem_Arg_arg = 12464672; // System.Void dof_focus_lookingat(ConsoleSystem/Arg arg)
constexpr auto get_uiscale = 12467328; // System.Single get_uiscale()
constexpr auto set_uiscale_System_Single_value = 12472096; // System.Void set_uiscale(System.Single value)
constexpr auto get_af = 12465808; // System.Int32 get_af()
constexpr auto set_af_System_Int32_value = 12468336; // System.Void set_af(System.Int32 value)
constexpr auto get_parallax = 12466416; // System.Int32 get_parallax()
constexpr auto set_parallax_System_Int32_value = 12469632; // System.Void set_parallax(System.Int32 value)
constexpr auto get_itemskins = 12466144; // System.Boolean get_itemskins()
constexpr auto set_itemskins_System_Boolean_value = 12469280; // System.Void set_itemskins(System.Boolean value)
constexpr auto get_itemskinunload = 12466304; // System.Boolean get_itemskinunload()
constexpr auto set_itemskinunload_System_Boolean_value = 12469472; // System.Void set_itemskinunload(System.Boolean value)
constexpr auto get_itemskintimeout = 12466224; // System.Single get_itemskintimeout()
constexpr auto set_itemskintimeout_System_Single_value = 12469376; // System.Void set_itemskintimeout(System.Single value)
constexpr auto get_impostorshadows = 12466064; // System.Boolean get_impostorshadows()
constexpr auto set_impostorshadows_System_Boolean_value = 12469152; // System.Void set_impostorshadows(System.Boolean value)
constexpr auto get_showtexeldensity = 12466960; // System.Int32 get_showtexeldensity()
constexpr auto set_showtexeldensity_System_Int32_value = 12471984; // System.Void set_showtexeldensity(System.Int32 value)
constexpr auto get_waves = 12467424; // System.Boolean get_waves()
constexpr auto set_waves_System_Boolean_value = 12472240; // System.Void set_waves(System.Boolean value)
constexpr auto get_maxQueuedFrames = 12466400; // System.Int32 get_maxQueuedFrames()
constexpr auto set_maxQueuedFrames_System_Int32_value = 12469616; // System.Void set_maxQueuedFrames(System.Int32 value)
constexpr auto get_renderScale = 12466512; // System.Single get_renderScale()
constexpr auto set_renderScale_System_Single_value = 12470128; // System.Void set_renderScale(System.Single value)
constexpr auto SetMipMapBias_ConsoleSystem_Arg_arg = 12463360; // System.Void SetMipMapBias(ConsoleSystem/Arg arg)
constexpr auto ResetMipMapBias = 12463248; // System.Void ResetMipMapBias()
constexpr auto ReportShadowCasters_ConsoleSystem_Arg_arg = 12461968; // System.Void ReportShadowCasters(ConsoleSystem/Arg arg)
constexpr auto ReportParticleSystems_ConsoleSystem_Arg_arg = 12461008; // System.Void ReportParticleSystems(ConsoleSystem/Arg arg)
constexpr auto get_aggressiveShadowLodWearable = 12465888; // System.Boolean get_aggressiveShadowLodWearable()
constexpr auto set_aggressiveShadowLodWearable_System_Boolean_value = 12468576; // System.Void set_aggressiveShadowLodWearable(System.Boolean value)
constexpr auto get_Hlod = 12465712; // System.Boolean get_Hlod()
constexpr auto set_Hlod_System_Boolean_value = 12468080; // System.Void set_Hlod(System.Boolean value)
constexpr auto PrintLodQueues_ConsoleSystem_Arg_arg = 12460912; // System.Void PrintLodQueues(ConsoleSystem/Arg arg)
constexpr auto _cctor = 12463552; // System.Void .cctor()
}
}
namespace ConVar_Debugging
{
namespace StaticFields
{
constexpr auto checktriggers = 0x0; // System.Boolean
constexpr auto checkparentingtriggers = 0x1; // System.Boolean
constexpr auto DebugDismounts = 0x2; // System.Boolean
constexpr auto callbacks = 0x3; // System.Boolean
constexpr auto debugcamera_targetbind = 0x8; // Buttons/ConButton
constexpr auto debugcamera_dollyforward = 0x10; // Buttons/ConButton
constexpr auto debugcamera_dollyback = 0x18; // Buttons/ConButton
constexpr auto debugcamera_cyclebone = 0x20; // Buttons/ConButton
constexpr auto debugcamera_dollyspeed = 0x28; // System.Single
constexpr auto debugcamera_raise = 0x30; // Buttons/ConButton
constexpr auto debugcamera_lower = 0x38; // Buttons/ConButton
constexpr auto debugcamera_zoomin = 0x40; // Buttons/ConButton
constexpr auto debugcamera_zoomout = 0x48; // Buttons/ConButton
constexpr auto debugcamera_offset = 0x50; // UnityEngine.Vector3
constexpr auto debugcamera_bonerotation = 0x5c; // System.Boolean
constexpr auto debugcamera_lookat = 0x5d; // System.Boolean
constexpr auto debugcamera_autosave = 0x5e; // System.Boolean
constexpr auto debugcamera_autoload = 0x5f; // System.Boolean
constexpr auto debugcamera_preserve = 0x60; // System.Boolean
constexpr auto debugcamera_lock = 0x61; // System.Boolean
constexpr auto drawcolliders = 0x62; // System.Boolean
constexpr auto ambientvolumes = 0x63; // System.Boolean
constexpr auto oninventorychanged = 0x64; // System.Boolean
constexpr auto fakeSpeechPlayer = 0x68; // System.String
constexpr auto allowDuplicateCommandsInConsoleHistory = 0x70; // System.Boolean
constexpr auto showWorldInfoInPerformanceReadout = 0x71; // System.Boolean
constexpr auto showViewmodelAimHelper = 0x72; // System.Boolean
constexpr auto viewmodelAimHelpWidth = 0x74; // System.Single
}
namespace Methods
{
constexpr auto _ctor = 12353872; // System.Void .ctor()
}
namespace StaticMethods
{
constexpr auto renderinfo_ConsoleSystem_Arg_arg = 12362672; // System.Void renderinfo(ConsoleSystem/Arg arg)
constexpr auto set_log_System_Boolean_value = 12362880; // System.Void set_log(System.Boolean value)
constexpr auto get_log = 12360288; // System.Boolean get_log()
constexpr auto enable_player_movement_ConsoleSystem_Arg_arg = 3694560; // System.Void enable_player_movement(ConsoleSystem/Arg arg)
constexpr auto stall_ConsoleSystem_Arg_arg = 12363504; // System.Void stall(ConsoleSystem/Arg arg)
constexpr auto repair_inventory_ConsoleSystem_Arg_args = 3694560; // System.Void repair_inventory(ConsoleSystem/Arg args)
constexpr auto lookingat_ConsoleSystem_Arg_arg = 12361248; // System.Void lookingat(ConsoleSystem/Arg arg)
constexpr auto lookingat_debug_ConsoleSystem_Arg_arg = 12360624; // System.Void lookingat_debug(ConsoleSystem/Arg arg)
constexpr auto debugcamera_ConsoleSystem_Arg_arg = 12356016; // System.Void debugcamera(ConsoleSystem/Arg arg)
constexpr auto debugcamera_fov_ConsoleSystem_Arg_arg = 12354096; // System.String debugcamera_fov(ConsoleSystem/Arg arg)
constexpr auto debugcamera_target_ConsoleSystem_Arg_arg = 12357776; // System.Void debugcamera_target(ConsoleSystem/Arg arg)
constexpr auto debugcamera_guide_ConsoleSystem_Arg_arg = 12355312; // System.String debugcamera_guide(ConsoleSystem/Arg arg)
constexpr auto debugcamera_guide_color_ConsoleSystem_Arg_arg = 12354768; // System.String debugcamera_guide_color(ConsoleSystem/Arg arg)
constexpr auto debugcamera_shake_System_Single_amplitude__System_Single_frequency__System_Single_duration = 12357424; // System.Void debugcamera_shake(System.Single amplitude, System.Single frequency, System.Single duration)
constexpr auto debugcamera_stopshake = 12357632; // System.Void debugcamera_stopshake()
constexpr auto debugcamera_guide_aspectratio_ConsoleSystem_Arg_arg = 12354352; // System.String debugcamera_guide_aspectratio(ConsoleSystem/Arg arg)
constexpr auto debugcamera_save_ConsoleSystem_Arg_arg = 12356880; // System.Void debugcamera_save(ConsoleSystem/Arg arg)
constexpr auto debugcamera_load_ConsoleSystem_Arg_arg = 12355728; // System.Void debugcamera_load(ConsoleSystem/Arg arg)
constexpr auto debugcamera_savetofile_ConsoleSystem_Arg_arg = 12357120; // System.Void debugcamera_savetofile(ConsoleSystem/Arg arg)
constexpr auto debugcamera_clear_ConsoleSystem_Arg_arg = 12353952; // System.Void debugcamera_clear(ConsoleSystem/Arg arg)
constexpr auto debugcamera_list_ConsoleSystem_Arg_arg = 12355552; // System.Void debugcamera_list(ConsoleSystem/Arg arg)
constexpr auto debugcamera_targetprint_ConsoleSystem_Arg_arg = 12358224; // System.Void debugcamera_targetprint(ConsoleSystem/Arg arg)
constexpr auto ent_find_radius_ConsoleSystem_Arg_arg = 12358832; // ConVar.Debugging/EntityInfo[] ent_find_radius(ConsoleSystem/Arg arg)
constexpr auto noclip_ConsoleSystem_Arg_arg = 12362208; // System.Void noclip(ConsoleSystem/Arg arg)
constexpr auto debugcamera_unfreeze_ConsoleSystem_Arg_arg = 12358560; // System.Void debugcamera_unfreeze(ConsoleSystem/Arg arg)
constexpr auto get_skyreflection = 12360464; // System.Boolean get_skyreflection()
constexpr auto set_skyreflection_System_Boolean_value = 12363168; // System.Void set_skyreflection(System.Boolean value)
constexpr auto PrintDebugWorldInfo_ConsoleSystem_Arg_arg = 12352480; // System.Void PrintDebugWorldInfo(ConsoleSystem/Arg arg)
constexpr auto CopyDebugWorldInfo_ConsoleSystem_Arg_arg = 12351232; // System.Void CopyDebugWorldInfo(ConsoleSystem/Arg arg)
constexpr auto RepeatCommand = 12352576; // System.Void RepeatCommand()
constexpr auto DebugPrintout = 12351360; // System.String DebugPrintout()
constexpr auto get_invokePerformanceTracking = 12360208; // System.Boolean get_invokePerformanceTracking()
constexpr auto set_invokePerformanceTracking_System_Boolean_value = 12362784; // System.Void set_invokePerformanceTracking(System.Boolean value)
constexpr auto get_invokePerformanceThreshold = 12360128; // System.Single get_invokePerformanceThreshold()
constexpr auto set_invokePerformanceThreshold_System_Single_value = 12362688; // System.Void set_invokePerformanceThreshold(System.Single value)
constexpr auto _cctor = 12352736; // System.Void .cctor()
}
}
namespace ConVar_Client
{
namespace StaticFields
{
constexpr auto anticheatid = 0x0; // System.String
constexpr auto anticheatkey = 0x8; // System.String
constexpr auto maxpeerspersecond = 0x10; // System.Int32
constexpr auto maxpacketspersecond_effect = 0x14; // System.Int32
constexpr auto maxpacketspersecond_voice = 0x18; // System.Int32
constexpr auto cached_browser_enabled = 0x1c; // System.Boolean
constexpr auto prediction = 0x1d; // System.Boolean
constexpr auto maxunack = 0x20; // System.Int32
constexpr auto pushtotalk = 0x24; // System.Boolean
constexpr auto debugdragdrop = 0x25; // System.Boolean
constexpr auto debuglootsounds = 0x26; // System.Boolean
constexpr auto headlerp = 0x28; // System.Single
constexpr auto headlerp_inertia = 0x2c; // System.Boolean
constexpr auto camlerp = 0x30; // System.Single
constexpr auto camlerptilt = 0x34; // System.Boolean
constexpr auto camzoomlerp = 0x38; // System.Single
constexpr auto _camspeed = 0x3c; // System.Single
constexpr auto camzoomspeed = 0x40; // System.Single
constexpr auto camlookspeed = 0x44; // System.Single
constexpr auto camdist = 0x48; // System.Single
constexpr auto cambone = 0x50; // System.String
constexpr auto camfov = 0x58; // System.Single
constexpr auto camoffset = 0x5c; // UnityEngine.Vector3
constexpr auto camoffset_relative = 0x68; // System.Boolean
constexpr auto sortSkinsRecentlyUsed = 0x69; // System.Boolean
constexpr auto headbob = 0x6a; // System.Boolean
constexpr auto crosshair = 0x6b; // System.Boolean
constexpr auto hitcross = 0x6c; // System.Boolean
constexpr auto hurtpunch = 0x6d; // System.Boolean
constexpr auto hasAppliedPhysicalCameraDefaults = 0x6e; // System.Boolean
constexpr auto CameraSensorSize = 0x70; // unknown
constexpr auto showCamInfo = 0x78; // System.Boolean
constexpr auto lookatradius = 0x7c; // System.Single
constexpr auto BuildingSkin = 0x80; // System.Int32
constexpr auto BuildingSkinWood = 0x84; // System.Int32
constexpr auto BuildingSkinStone = 0x88; // System.Int32
constexpr auto BuildingSkinMetal = 0x8c; // System.Int32
constexpr auto BuildingSkinTopTier = 0x90; // System.Int32
constexpr auto RockSkin = 0x94; // System.Int32
constexpr auto UnderwearSkin = 0x98; // System.Int32
constexpr auto TorchSkin = 0x9c; // System.Int32
constexpr auto unlock_all_skins = 0xa0; // System.Boolean
constexpr auto RespawnLoadout = 0xa8; // System.String
constexpr auto BagAssignMode = 0xb0; // System.Int32
constexpr auto ShowSleepingBagsOnMap = 0xb4; // System.Boolean
constexpr auto ShowVendingMachinesOnMap = 0xb5; // System.Boolean
constexpr auto ShowSashes = 0xb6; // System.Boolean
constexpr auto BlockPlayVideo = 0xb7; // System.Boolean
}
namespace Methods
{
constexpr auto _ctor = 12329024; // System.Void .ctor()
}
namespace StaticMethods
{
constexpr auto get_maxreceivetime = 12333184; // System.Int32 get_maxreceivetime()
constexpr auto set_maxreceivetime_System_Int32_value = 12342432; // System.Void set_maxreceivetime(System.Int32 value)
constexpr auto get_maxmainthreadwait = 12332864; // System.Int32 get_maxmainthreadwait()
constexpr auto set_maxmainthreadwait_System_Int32_value = 12341984; // System.Void set_maxmainthreadwait(System.Int32 value)
constexpr auto get_maxreadthreadwait = 12333104; // System.Int32 get_maxreadthreadwait()
constexpr auto set_maxreadthreadwait_System_Int32_value = 12342320; // System.Void set_maxreadthreadwait(System.Int32 value)
constexpr auto get_maxwritethreadwait = 12333424; // System.Int32 get_maxwritethreadwait()
constexpr auto set_maxwritethreadwait_System_Int32_value = 12342768; // System.Void set_maxwritethreadwait(System.Int32 value)
constexpr auto get_maxdecryptthreadwait = 12332784; // System.Int32 get_maxdecryptthreadwait()
constexpr auto set_maxdecryptthreadwait_System_Int32_value = 12341872; // System.Void set_maxdecryptthreadwait(System.Int32 value)
constexpr auto get_maxreadqueuelength = 12333024; // System.Int32 get_maxreadqueuelength()
constexpr auto set_maxreadqueuelength_System_Int32_value = 12342208; // System.Void set_maxreadqueuelength(System.Int32 value)
constexpr auto get_maxwritequeuelength = 12333344; // System.Int32 get_maxwritequeuelength()
constexpr auto set_maxwritequeuelength_System_Int32_value = 12342656; // System.Void set_maxwritequeuelength(System.Int32 value)
constexpr auto get_maxdecryptqueuelength = 12332704; // System.Int32 get_maxdecryptqueuelength()
constexpr auto set_maxdecryptqueuelength_System_Int32_value = 12341760; // System.Void set_maxdecryptqueuelength(System.Int32 value)
constexpr auto get_maxreadqueuebytes = 12332944; // System.Int32 get_maxreadqueuebytes()
constexpr auto set_maxreadqueuebytes_System_Int32_value = 12342096; // System.Void set_maxreadqueuebytes(System.Int32 value)
constexpr auto get_maxwritequeuebytes = 12333264; // System.Int32 get_maxwritequeuebytes()
constexpr auto set_maxwritequeuebytes_System_Int32_value = 12342544; // System.Void set_maxwritequeuebytes(System.Int32 value)
constexpr auto get_maxdecryptqueuebytes = 12332624; // System.Int32 get_maxdecryptqueuebytes()
constexpr auto set_maxdecryptqueuebytes_System_Int32_value = 12341648; // System.Void set_maxdecryptqueuebytes(System.Int32 value)
constexpr auto printreadqueue_ConsoleSystem_Arg_arg = 12336352; // System.String printreadqueue(ConsoleSystem/Arg arg)
constexpr auto printwritequeue_ConsoleSystem_Arg_arg = 12337328; // System.String printwritequeue(ConsoleSystem/Arg arg)
constexpr auto printdecryptqueue_ConsoleSystem_Arg_arg = 12333680; // System.String printdecryptqueue(ConsoleSystem/Arg arg)
constexpr auto connect_System_String_address___127_0_0_1_28015__System_String_protocol_____System_Boolean_hideIpAddress___False = 12330128; // System.String connect(System.String address = 127.0.0.1:28015, System.String protocol = , System.Boolean hideIpAddress = False)
constexpr auto connecthidden_System_String_address___127_0_0_1_28015__System_String_protocol___ = 12330880; // System.String connecthidden(System.String address = 127.0.0.1:28015, System.String protocol = )
constexpr auto fps = 12331568; // System.String fps()
constexpr auto disconnect = 12331056; // System.String disconnect()
constexpr auto report = 12337600; // System.Void report()
constexpr auto printpos = 12335776; // System.String printpos()
constexpr auto printrot = 12336624; // System.String printrot()
constexpr auto printeyes = 12333952; // System.String printeyes()
constexpr auto printinput = 12335216; // System.String printinput()
constexpr auto printhead = 12334656; // System.String printhead()
constexpr auto GetClientFolder_System_String_folder = 12325120; // System.String GetClientFolder(System.String folder)
constexpr auto get_camspeed = 12332544; // System.Single get_camspeed()
constexpr auto set_camspeed_System_Single_value = 12341520; // System.Void set_camspeed(System.Single value)
constexpr auto get_camPhysical = 12332336; // System.Boolean get_camPhysical()
constexpr auto set_camPhysical_System_Boolean_value = 12340032; // System.Void set_camPhysical(System.Boolean value)
constexpr auto get_camPhysicalSensor = 12331904; // System.Int32 get_camPhysicalSensor()
constexpr auto set_camPhysicalSensor_System_Int32_value = 12339648; // System.Void set_camPhysicalSensor(System.Int32 value)
constexpr auto get_camPhysicalFocalLength = 12331696; // System.Single get_camPhysicalFocalLength()
constexpr auto set_camPhysicalFocalLength_System_Single_value = 12339440; // System.Void set_camPhysicalFocalLength(System.Single value)
constexpr auto camPhysicalSensorTypes_ConsoleSystem_Arg_arg = 12329728; // System.Void camPhysicalSensorTypes(ConsoleSystem/Arg arg)
constexpr auto sv_ConsoleSystem_Arg_arg = 12343520; // System.Void sv(ConsoleSystem/Arg arg)
constexpr auto consoletoggle = 12330976; // System.Void consoletoggle()
constexpr auto ping = 12333504; // System.Int32 ping()
constexpr auto benchmark_ConsoleSystem_Arg_arg = 12329440; // System.Void benchmark(ConsoleSystem/Arg arg)
constexpr auto benchmark_demo_ConsoleSystem_Arg_arg = 12329104; // System.Void benchmark_demo(ConsoleSystem/Arg arg)
constexpr auto setunderwear_ConsoleSystem_Arg_arg = 12342880; // System.Void setunderwear(ConsoleSystem/Arg arg)
constexpr auto PlayerSeed_ConsoleSystem_Arg_arg = 12325632; // System.Void PlayerSeed(ConsoleSystem/Arg arg)
constexpr auto ShufflePlayerSeed_ConsoleSystem_Arg_arg = 12326816; // System.Void ShufflePlayerSeed(ConsoleSystem/Arg arg)
constexpr auto ReportPlayer_ConsoleSystem_Arg_arg = 12326544; // System.Void ReportPlayer(ConsoleSystem/Arg arg)
constexpr auto ReportBug_ConsoleSystem_Arg_arg = 12326320; // System.Void ReportBug(ConsoleSystem/Arg arg)
constexpr auto PlayVideo_ConsoleSystem_Arg_arg = 12325168; // System.Void PlayVideo(ConsoleSystem/Arg arg)
constexpr auto _cctor = 12327600; // System.Void .cctor()
constexpr auto _PlayVideo_g__PlayImpl_119_0_System_String_videoUrl = 12327440; // System.Void <PlayVideo>g__PlayImpl|119_0(System.String videoUrl)
}
}
namespace UnityEngine_Rendering_PostProcessing_PostProcessLayer
{
namespace Fields
{
constexpr auto colorBuffer = 0x18; // UnityEngine.RenderTexture
constexpr auto depthBuffer = 0x20; // UnityEngine.RenderTexture
constexpr auto motionBuffer = 0x28; // UnityEngine.RenderTexture
constexpr auto colorOutput = 0x30; // UnityEngine.RenderTexture
constexpr auto renderingCamera = 0x38; // UnityEngine.Camera
constexpr auto renderScaleMaterial = 0x40; // UnityEngine.Material
constexpr auto mipmapShaders = 0x48; // System.Collections.Generic.HashSet`1
constexpr auto scalingMode = 0x50; // System.Nullable`1
constexpr auto prevRenderScale = 0x58; // System.Single
constexpr auto prevPerfQuality = 0x5c; // Rust.DLSS.NVSDK_NGX_PerfQuality_Value
constexpr auto prevScreenWidth = 0x60; // System.UInt32
constexpr auto prevScreenHeight = 0x64; // System.UInt32
constexpr auto prevUpdateTime = 0x68; // System.Single
constexpr auto screenshotMode = 0x6c; // System.Boolean
constexpr auto firstDLSSPass = 0x6d; // System.Boolean
constexpr auto dlssRecommendedSettings = 0x70; // Rust.DLSS.DlSSRecommendedSettings
constexpr auto dlssDataHandle = 0x90; // System.Runtime.InteropServices.GCHandle
constexpr auto afterEverythingCommandBuffer = 0x98; // UnityEngine.Rendering.CommandBuffer
constexpr auto volumeTrigger = 0xa0; // UnityEngine.Transform
constexpr auto volumeLayer = 0xa8; // UnityEngine.LayerMask
constexpr auto stopNaNPropagation = 0xac; // System.Boolean
constexpr auto finalBlitToCameraTarget = 0xad; // System.Boolean
constexpr auto antialiasingMode = 0xb0; // UnityEngine.Rendering.PostProcessing.PostProcessLayer/Antialiasing
constexpr auto temporalAntialiasing = 0xb8; // UnityEngine.Rendering.PostProcessing.TemporalAntialiasing
constexpr auto subpixelMorphologicalAntialiasing = 0xc0; // UnityEngine.Rendering.PostProcessing.SubpixelMorphologicalAntialiasing
constexpr auto fastApproximateAntialiasing = 0xc8; // UnityEngine.Rendering.PostProcessing.FastApproximateAntialiasing
constexpr auto fog = 0xd0; // UnityEngine.Rendering.PostProcessing.Fog
constexpr auto dithering = 0xd8; // UnityEngine.Rendering.PostProcessing.Dithering
constexpr auto debugLayer = 0xe0; // UnityEngine.Rendering.PostProcessing.PostProcessDebugLayer
constexpr auto intermediateFormat = 0xe8; // UnityEngine.RenderTextureFormat
constexpr auto prevIntermediateFormat = 0xec; // UnityEngine.RenderTextureFormat
constexpr auto supportsIntermediateFormat = 0xf0; // System.Boolean
constexpr auto m_Resources = 0xf8; // UnityEngine.Rendering.PostProcessing.PostProcessResources
constexpr auto m_ShowToolkit = 0x100; // System.Boolean
constexpr auto m_ShowCustomSorter = 0x101; // System.Boolean
constexpr auto breakBeforeColorGrading = 0x102; // System.Boolean
constexpr auto m_BeforeTransparentBundles = 0x108; // System.Collections.Generic.List`1
constexpr auto m_BeforeStackBundles = 0x110; // System.Collections.Generic.List`1
constexpr auto m_AfterStackBundles = 0x118; // System.Collections.Generic.List`1
constexpr auto _sortedBundles_k__BackingField = 0x120; // System.Collections.Generic.Dictionary`2
constexpr auto _haveBundlesBeenInited_k__BackingField = 0x128; // System.Boolean
constexpr auto m_Bundles = 0x130; // System.Collections.Generic.Dictionary`2
constexpr auto m_PropertySheetFactory = 0x138; // UnityEngine.Rendering.PostProcessing.PropertySheetFactory
constexpr auto m_LegacyCmdBufferBeforeReflections = 0x140; // UnityEngine.Rendering.CommandBuffer
constexpr auto m_LegacyCmdBufferBeforeLighting = 0x148; // UnityEngine.Rendering.CommandBuffer
constexpr auto m_LegacyCmdBufferOpaque = 0x150; // UnityEngine.Rendering.CommandBuffer
constexpr auto m_LegacyCmdBuffer = 0x158; // UnityEngine.Rendering.CommandBuffer
constexpr auto m_Camera = 0x160; // UnityEngine.Camera
constexpr auto m_CurrentContext = 0x168; // UnityEngine.Rendering.PostProcessing.PostProcessRenderContext
constexpr auto m_LogHistogram = 0x170; // UnityEngine.Rendering.PostProcessing.LogHistogram
constexpr auto m_SettingsUpdateNeeded = 0x178; // System.Boolean
constexpr auto m_IsRenderingInSceneView = 0x179; // System.Boolean
constexpr auto m_TargetPool = 0x180; // UnityEngine.Rendering.PostProcessing.TargetPool
constexpr auto m_NaNKilled = 0x188; // System.Boolean
constexpr auto m_ActiveEffects = 0x190; // System.Collections.Generic.List`1
constexpr auto m_Targets = 0x198; // System.Collections.Generic.List`1
}
namespace StaticFields
{
constexpr auto updateRate = 0x0; // System.Single
}
namespace Methods
{
constexpr auto get_ScreenshotMode = 12190192; // System.Boolean get_ScreenshotMode()
constexpr auto set_ScreenshotMode_System_Boolean_value = 12190224; // System.Void set_ScreenshotMode(System.Boolean value)
constexpr auto get_ScreenWidth = 12190096; // System.UInt32 get_ScreenWidth()
constexpr auto get_ScreenHeight = 12190000; // System.UInt32 get_ScreenHeight()
constexpr auto get_ScaledScreenWidth = 12189712; // System.UInt32 get_ScaledScreenWidth()
constexpr auto get_ScaledScreenHeight = 12189424; // System.UInt32 get_ScaledScreenHeight()
constexpr auto OnEnableRenderScale = 12161936; // System.Void OnEnableRenderScale()
constexpr auto OnDisableRenderScale = 12160304; // System.Void OnDisableRenderScale()
constexpr auto Update = 12187456; // System.Void Update()
constexpr auto GetDesiredScalingMode_Rust_DLSS_NVSDK_NGX_PerfQuality_Value_dlssMode = 12156736; // UnityEngine.Rendering.PostProcessing.PostProcessLayer/ScalingMode GetDesiredScalingMode(Rust.DLSS.NVSDK_NGX_PerfQuality_Value dlssMode)
constexpr auto NeedsRebuild_UnityEngine_Rendering_PostProcessing_PostProcessLayer_ScalingMode_desiredScalingMode__Rust_DLSS_NVSDK_NGX_PerfQuality_Value_dlssMode = 12159584; // System.Boolean NeedsRebuild(UnityEngine.Rendering.PostProcessing.PostProcessLayer/ScalingMode desiredScalingMode, Rust.DLSS.NVSDK_NGX_PerfQuality_Value dlssMode)
constexpr auto SetMipMapBias_System_Single_bias = 12181920; // System.Void SetMipMapBias(System.Single bias)
constexpr auto CalculateMipMapBias = 12155968; // System.Single CalculateMipMapBias()
constexpr auto BuildPostEffectsNew_UnityEngine_RenderTextureFormat_sourceFormat__UnityEngine_Rendering_PostProcessing_PostProcessRenderContext_context__UnityEngine_Rendering_RenderTargetIdentifier_cameraTarget = 12152112; // System.Void BuildPostEffectsNew(UnityEngine.RenderTextureFormat sourceFormat, UnityEngine.Rendering.PostProcessing.PostProcessRenderContext context, UnityEngine.Rendering.RenderTargetIdentifier cameraTarget)
constexpr auto RebuildRenderTargets = 12167344; // System.Void RebuildRenderTargets()
constexpr auto FreeRenderTargets = 12156352; // System.Void FreeRenderTargets()
constexpr auto RebuildColorOutput = 12166992; // System.Void RebuildColorOutput()
constexpr auto FreeRenderColorOutput = 12156240; // System.Void FreeRenderColorOutput()
constexpr auto StartDLSS = 12183840; // System.Boolean StartDLSS()
constexpr auto UpdateDLSSQualitySettings_Rust_DLSS_NVSDK_NGX_PerfQuality_Value_perfQuality = 12185728; // System.Boolean UpdateDLSSQualitySettings(Rust.DLSS.NVSDK_NGX_PerfQuality_Value perfQuality)
constexpr auto StopDLSS = 12184000; // System.Void StopDLSS()
constexpr auto get_sortedBundles = 3702832; // System.Collections.Generic.Dictionary`2<UnityEngine.Rendering.PostProcessing.PostProcessEvent, System.Collections.Generic.List`1<UnityEngine.Rendering.PostProcessing.PostProcessLayer/SerializedBundleRef>> get_sortedBundles()
constexpr auto set_sortedBundles_System_Collections_Generic_Dictionary_2_UnityEngine_Rendering_PostProcessing_PostProcessEvent__System_Collections_Generic_List_1_UnityEngine_Rendering_PostProcessing_PostProcessLayer_SerializedBundleRef___value = 3703504; // System.Void set_sortedBundles(System.Collections.Generic.Dictionary`2<UnityEngine.Rendering.PostProcessing.PostProcessEvent, System.Collections.Generic.List`1<UnityEngine.Rendering.PostProcessing.PostProcessLayer/SerializedBundleRef>> value)
constexpr auto get_haveBundlesBeenInited = 12190208; // System.Boolean get_haveBundlesBeenInited()
constexpr auto set_haveBundlesBeenInited_System_Boolean_value = 12190240; // System.Void set_haveBundlesBeenInited(System.Boolean value)
constexpr auto OnEnable = 12164128; // System.Void OnEnable()
constexpr auto InitLegacy = 12158592; // System.Void InitLegacy()
constexpr auto OnRenderImage_UnityEngine_RenderTexture_src__UnityEngine_RenderTexture_dst = 12166256; // System.Void OnRenderImage(UnityEngine.RenderTexture src, UnityEngine.RenderTexture dst)
constexpr auto Init_UnityEngine_Rendering_PostProcessing_PostProcessResources_resources = 12159248; // System.Void Init(UnityEngine.Rendering.PostProcessing.PostProcessResources resources)
constexpr auto InitBundles = 12157520; // System.Void InitBundles()
constexpr auto UpdateBundleSortList_System_Collections_Generic_List_1_UnityEngine_Rendering_PostProcessing_PostProcessLayer_SerializedBundleRef__sortedList__UnityEngine_Rendering_PostProcessing_PostProcessEvent_evt = 12184064; // System.Void UpdateBundleSortList(System.Collections.Generic.List`1<UnityEngine.Rendering.PostProcessing.PostProcessLayer/SerializedBundleRef> sortedList, UnityEngine.Rendering.PostProcessing.PostProcessEvent evt)
constexpr auto OnDisable = 12160656; // System.Void OnDisable()
constexpr auto Reset = 12181184; // System.Void Reset()
constexpr auto OnPreCull = 12165376; // System.Void OnPreCull()
constexpr auto OnPreRender = 12166128; // System.Void OnPreRender()
constexpr auto GetIntermediateFormat = 12156912; // UnityEngine.RenderTextureFormat GetIntermediateFormat()
constexpr auto UpdateSrcDstForOpaqueOnly_System_Int32_src__System_Int32_dst__UnityEngine_Rendering_PostProcessing_PostProcessRenderContext_context__UnityEngine_Rendering_RenderTargetIdentifier_cameraTarget__System_Int32_opaqueOnlyEffectsRemaining = 12186464; // System.Void UpdateSrcDstForOpaqueOnly(System.Int32 src, System.Int32 dst, UnityEngine.Rendering.PostProcessing.PostProcessRenderContext context, UnityEngine.Rendering.RenderTargetIdentifier cameraTarget, System.Int32 opaqueOnlyEffectsRemaining)
constexpr auto BuildCommandBuffers = 12149616; // System.Void BuildCommandBuffers()
constexpr auto BuildPostEffectsOld_UnityEngine_RenderTextureFormat_sourceFormat__UnityEngine_Rendering_PostProcessing_PostProcessRenderContext_context__UnityEngine_Rendering_RenderTargetIdentifier_cameraTarget = 12154832; // System.Void BuildPostEffectsOld(UnityEngine.RenderTextureFormat sourceFormat, UnityEngine.Rendering.PostProcessing.PostProcessRenderContext context, UnityEngine.Rendering.RenderTargetIdentifier cameraTarget)
constexpr auto OnPostRender = 12164784; // System.Void OnPostRender()
constexpr auto UnityEngine_Rendering_PostProcessing_PostProcessBundle_UnityEngine_Rendering_PostProcessing_PostProcessLayer_GetBundle_System_Object_ = 18875280; // UnityEngine.Rendering.PostProcessing.PostProcessBundle UnityEngine.Rendering.PostProcessing.PostProcessLayer.GetBundle<System.Object>
constexpr auto GetBundle_System_Type_settingsType = 12156528; // UnityEngine.Rendering.PostProcessing.PostProcessBundle GetBundle(System.Type settingsType)
constexpr auto T_UnityEngine_Rendering_PostProcessing_PostProcessLayer_GetSettings_System_Object_ = 18875392; // T UnityEngine.Rendering.PostProcessing.PostProcessLayer.GetSettings<System.Object>
constexpr auto BakeMSVOMap_UnityEngine_Rendering_CommandBuffer_cmd__UnityEngine_Camera_camera__UnityEngine_Rendering_RenderTargetIdentifier_destination__System_Nullable_1_UnityEngine_Rendering_RenderTargetIdentifier__depthMap__System_Boolean_invert__System_Boolean_isMSAA___False = 12149184; // System.Void BakeMSVOMap(UnityEngine.Rendering.CommandBuffer cmd, UnityEngine.Camera camera, UnityEngine.Rendering.RenderTargetIdentifier destination, System.Nullable`1<UnityEngine.Rendering.RenderTargetIdentifier> depthMap, System.Boolean invert, System.Boolean isMSAA = False)
constexpr auto OverrideSettings_System_Collections_Generic_List_1_UnityEngine_Rendering_PostProcessing_PostProcessEffectSettings__baseSettings__System_Single_interpFactor = 12166400; // System.Void OverrideSettings(System.Collections.Generic.List`1<UnityEngine.Rendering.PostProcessing.PostProcessEffectSettings> baseSettings, System.Single interpFactor)
constexpr auto SetLegacyCameraFlags_UnityEngine_Rendering_PostProcessing_PostProcessRenderContext_context = 12181232; // System.Void SetLegacyCameraFlags(UnityEngine.Rendering.PostProcessing.PostProcessRenderContext context)
constexpr auto ResetHistory = 12180832; // System.Void ResetHistory()
constexpr auto HasOpaqueOnlyEffects_UnityEngine_Rendering_PostProcessing_PostProcessRenderContext_context = 12157504; // System.Boolean HasOpaqueOnlyEffects(UnityEngine.Rendering.PostProcessing.PostProcessRenderContext context)
constexpr auto HasActiveEffects_UnityEngine_Rendering_PostProcessing_PostProcessEvent_evt__UnityEngine_Rendering_PostProcessing_PostProcessRenderContext_context = 12156992; // System.Boolean HasActiveEffects(UnityEngine.Rendering.PostProcessing.PostProcessEvent evt, UnityEngine.Rendering.PostProcessing.PostProcessRenderContext context)
constexpr auto SetupContext_UnityEngine_Rendering_PostProcessing_PostProcessRenderContext_context = 12183248; // System.Void SetupContext(UnityEngine.Rendering.PostProcessing.PostProcessRenderContext context)
constexpr auto UpdateVolumeSystem_UnityEngine_Camera_cam__UnityEngine_Rendering_CommandBuffer_cmd = 12187136; // System.Void UpdateVolumeSystem(UnityEngine.Camera cam, UnityEngine.Rendering.CommandBuffer cmd)
constexpr auto RenderOpaqueOnly_UnityEngine_Rendering_PostProcessing_PostProcessRenderContext_context = 12176432; // System.Void RenderOpaqueOnly(UnityEngine.Rendering.PostProcessing.PostProcessRenderContext context)
constexpr auto Render_UnityEngine_Rendering_PostProcessing_PostProcessRenderContext_context = 12176672; // System.Void Render(UnityEngine.Rendering.PostProcessing.PostProcessRenderContext context)
constexpr auto RenderInjectionPoint_UnityEngine_Rendering_PostProcessing_PostProcessEvent_evt__UnityEngine_Rendering_PostProcessing_PostProcessRenderContext_context__System_String_marker__System_Int32_releaseTargetAfterUse____1 = 12173536; // System.Int32 RenderInjectionPoint(UnityEngine.Rendering.PostProcessing.PostProcessEvent evt, UnityEngine.Rendering.PostProcessing.PostProcessRenderContext context, System.String marker, System.Int32 releaseTargetAfterUse = -1)
constexpr auto RenderList_System_Collections_Generic_List_1_UnityEngine_Rendering_PostProcessing_PostProcessLayer_SerializedBundleRef__list__UnityEngine_Rendering_PostProcessing_PostProcessRenderContext_context__System_String_marker = 12174352; // System.Void RenderList(System.Collections.Generic.List`1<UnityEngine.Rendering.PostProcessing.PostProcessLayer/SerializedBundleRef> list, UnityEngine.Rendering.PostProcessing.PostProcessRenderContext context, System.String marker)
constexpr auto ApplyFlip_UnityEngine_Rendering_PostProcessing_PostProcessRenderContext_context__UnityEngine_MaterialPropertyBlock_properties = 12148976; // System.Void ApplyFlip(UnityEngine.Rendering.PostProcessing.PostProcessRenderContext context, UnityEngine.MaterialPropertyBlock properties)
constexpr auto ApplyDefaultFlip_UnityEngine_MaterialPropertyBlock_properties = 12148800; // System.Void ApplyDefaultFlip(UnityEngine.MaterialPropertyBlock properties)
constexpr auto RenderBuiltins_UnityEngine_Rendering_PostProcessing_PostProcessRenderContext_context__System_Boolean_isFinalPass__System_Int32_releaseTargetAfterUse____1__System_Int32_eye____1 = 12168080; // System.Int32 RenderBuiltins(UnityEngine.Rendering.PostProcessing.PostProcessRenderContext context, System.Boolean isFinalPass, System.Int32 releaseTargetAfterUse = -1, System.Int32 eye = -1)
constexpr auto RenderFinalPass_UnityEngine_Rendering_PostProcessing_PostProcessRenderContext_context__System_Int32_releaseTargetAfterUse____1__System_Int32_eye____1 = 12170784; // System.Void RenderFinalPass(UnityEngine.Rendering.PostProcessing.PostProcessRenderContext context, System.Int32 releaseTargetAfterUse = -1, System.Int32 eye = -1)
constexpr auto System_Int32_UnityEngine_Rendering_PostProcessing_PostProcessLayer_RenderEffect_System_Object__UnityEngine_Rendering_PostProcessing_PostProcessRenderContext_context__System_Boolean_useTempTarget___False = 18875456; // System.Int32 UnityEngine.Rendering.PostProcessing.PostProcessLayer.RenderEffect<System.Object>
constexpr auto ShouldGenerateLogHistogram_UnityEngine_Rendering_PostProcessing_PostProcessRenderContext_context = 12183664; // System.Boolean ShouldGenerateLogHistogram(UnityEngine.Rendering.PostProcessing.PostProcessRenderContext context)
constexpr auto _ctor = 12189168; // System.Void .ctor()
}
namespace StaticMethods
{
constexpr auto RequiresInitialBlit_UnityEngine_Camera_camera__UnityEngine_Rendering_PostProcessing_PostProcessRenderContext_context = 12180720; // System.Boolean RequiresInitialBlit(UnityEngine.Camera camera, UnityEngine.Rendering.PostProcessing.PostProcessRenderContext context)
}
}
namespace UnityEngine_UI_ScrollRectEx
{
namespace Fields
{
constexpr auto scrollButton = 0x18; // UnityEngine.EventSystems.PointerEventData/InputButton
constexpr auto altScrollButton = 0x1c; // UnityEngine.EventSystems.PointerEventData/InputButton
constexpr auto m_Content = 0x20; // UnityEngine.RectTransform
constexpr auto m_Horizontal = 0x28; // System.Boolean
constexpr auto m_Vertical = 0x29; // System.Boolean
constexpr auto m_MovementType = 0x2c; // UnityEngine.UI.ScrollRectEx/MovementType
constexpr auto m_Elasticity = 0x30; // System.Single
constexpr auto m_Inertia = 0x34; // System.Boolean
constexpr auto m_DecelerationRate = 0x38; // System.Single
constexpr auto m_ScrollSensitivity = 0x3c; // System.Single
constexpr auto m_Viewport = 0x40; // UnityEngine.RectTransform
constexpr auto m_HorizontalScrollbar = 0x48; // UnityEngine.UI.Scrollbar
constexpr auto m_VerticalScrollbar = 0x50; // UnityEngine.UI.Scrollbar
constexpr auto m_HorizontalScrollbarVisibility = 0x58; // UnityEngine.UI.ScrollRectEx/ScrollbarVisibility
constexpr auto m_VerticalScrollbarVisibility = 0x5c; // UnityEngine.UI.ScrollRectEx/ScrollbarVisibility
constexpr auto m_HorizontalScrollbarSpacing = 0x60; // System.Single
constexpr auto m_VerticalScrollbarSpacing = 0x64; // System.Single
constexpr auto m_OnValueChanged = 0x68; // UnityEngine.UI.ScrollRectEx/ScrollRectEvent
constexpr auto m_PointerStartLocalCursor = 0x70; // UnityEngine.Vector2
constexpr auto m_ContentStartPosition = 0x78; // UnityEngine.Vector2
constexpr auto m_ViewRect = 0x80; // UnityEngine.RectTransform
constexpr auto m_ContentBounds = 0x88; // UnityEngine.Bounds
constexpr auto m_ViewBounds = 0xa0; // UnityEngine.Bounds
constexpr auto m_Velocity = 0xb8; // UnityEngine.Vector2
constexpr auto m_Dragging = 0xc0; // System.Boolean
constexpr auto m_PrevPosition = 0xc4; // UnityEngine.Vector2
constexpr auto m_PrevContentBounds = 0xcc; // UnityEngine.Bounds
constexpr auto m_PrevViewBounds = 0xe4; // UnityEngine.Bounds
constexpr auto m_HasRebuiltLayout = 0xfc; // System.Boolean
constexpr auto m_HSliderExpand = 0xfd; // System.Boolean
constexpr auto m_VSliderExpand = 0xfe; // System.Boolean
constexpr auto m_HSliderHeight = 0x100; // System.Single
constexpr auto m_VSliderWidth = 0x104; // System.Single
constexpr auto m_Rect = 0x108; // UnityEngine.RectTransform
constexpr auto m_HorizontalScrollbarRect = 0x110; // UnityEngine.RectTransform
constexpr auto m_VerticalScrollbarRect = 0x118; // UnityEngine.RectTransform
constexpr auto m_Tracker = 0x120; // UnityEngine.DrivenRectTransformTracker
constexpr auto m_Corners = 0x128; // unknown
}
namespace Methods
{
constexpr auto get_content = 3687024; // UnityEngine.RectTransform get_content()
constexpr auto set_content_UnityEngine_RectTransform_value = 3841904; // System.Void set_content(UnityEngine.RectTransform value)
constexpr auto get_horizontal = 3687056; // System.Boolean get_horizontal()
constexpr auto set_horizontal_System_Boolean_value = 3901728; // System.Void set_horizontal(System.Boolean value)
constexpr auto get_vertical = 4607600; // System.Boolean get_vertical()
constexpr auto set_vertical_System_Boolean_value = 4607648; // System.Void set_vertical(System.Boolean value)
constexpr auto get_movementType = 4511552; // UnityEngine.UI.ScrollRectEx/MovementType get_movementType()
constexpr auto set_movementType_UnityEngine_UI_ScrollRectEx_MovementType_value = 4511568; // System.Void set_movementType(UnityEngine.UI.ScrollRectEx/MovementType value)
constexpr auto get_elasticity = 3883296; // System.Single get_elasticity()
constexpr auto set_elasticity_System_Single_value = 3883344; // System.Void set_elasticity(System.Single value)
constexpr auto get_inertia = 12054528; // System.Boolean get_inertia()
constexpr auto set_inertia_System_Boolean_value = 12056480; // System.Void set_inertia(System.Boolean value)
constexpr auto get_decelerationRate = 3793392; // System.Single get_decelerationRate()
constexpr auto set_decelerationRate_System_Single_value = 12056016; // System.Void set_decelerationRate(System.Single value)
constexpr auto get_scrollSensitivity = 12055280; // System.Single get_scrollSensitivity()
constexpr auto set_scrollSensitivity_System_Single_value = 7758480; // System.Void set_scrollSensitivity(System.Single value)
constexpr auto get_viewport = 3836176; // UnityEngine.RectTransform get_viewport()
constexpr auto set_viewport_UnityEngine_RectTransform_value = 12057520; // System.Void set_viewport(UnityEngine.RectTransform value)
constexpr auto get_horizontalScrollbar = 3901584; // UnityEngine.UI.Scrollbar get_horizontalScrollbar()
constexpr auto set_horizontalScrollbar_UnityEngine_UI_Scrollbar_value = 12056064; // System.Void set_horizontalScrollbar(UnityEngine.UI.Scrollbar value)
constexpr auto get_verticalScrollbar = 3901600; // UnityEngine.UI.Scrollbar get_verticalScrollbar()
constexpr auto set_verticalScrollbar_UnityEngine_UI_Scrollbar_value = 12057104; // System.Void set_verticalScrollbar(UnityEngine.UI.Scrollbar value)
constexpr auto get_horizontalScrollbarVisibility = 4684720; // UnityEngine.UI.ScrollRectEx/ScrollbarVisibility get_horizontalScrollbarVisibility()
constexpr auto set_horizontalScrollbarVisibility_UnityEngine_UI_ScrollRectEx_ScrollbarVisibility_value = 12056048; // System.Void set_horizontalScrollbarVisibility(UnityEngine.UI.ScrollRectEx/ScrollbarVisibility value)
constexpr auto get_verticalScrollbarVisibility = 4684704; // UnityEngine.UI.ScrollRectEx/ScrollbarVisibility get_verticalScrollbarVisibility()
constexpr auto set_verticalScrollbarVisibility_UnityEngine_UI_ScrollRectEx_ScrollbarVisibility_value = 12057088; // System.Void set_verticalScrollbarVisibility(UnityEngine.UI.ScrollRectEx/ScrollbarVisibility value)
constexpr auto get_horizontalScrollbarSpacing = 6616832; // System.Single get_horizontalScrollbarSpacing()
constexpr auto set_horizontalScrollbarSpacing_System_Single_value = 12056032; // System.Void set_horizontalScrollbarSpacing(System.Single value)
constexpr auto get_verticalScrollbarSpacing = 3882784; // System.Single get_verticalScrollbarSpacing()
constexpr auto set_verticalScrollbarSpacing_System_Single_value = 12057072; // System.Void set_verticalScrollbarSpacing(System.Single value)
constexpr auto get_onValueChanged = 3703104; // UnityEngine.UI.ScrollRectEx/ScrollRectEvent get_onValueChanged()
constexpr auto set_onValueChanged_UnityEngine_UI_ScrollRectEx_ScrollRectEvent_value = 3703776; // System.Void set_onValueChanged(UnityEngine.UI.ScrollRectEx/ScrollRectEvent value)
constexpr auto get_viewRect = 12055728; // UnityEngine.RectTransform get_viewRect()
constexpr auto get_velocity = 12055408; // UnityEngine.Vector2 get_velocity()
constexpr auto set_velocity_UnityEngine_Vector2_value = 12057056; // System.Void set_velocity(UnityEngine.Vector2 value)
constexpr auto get_rectTransform = 12055104; // UnityEngine.RectTransform get_rectTransform()
constexpr auto _ctor = 12053696; // System.Void .ctor()
constexpr auto Rebuild_UnityEngine_UI_CanvasUpdate_executing = 12044432; // System.Void Rebuild(UnityEngine.UI.CanvasUpdate executing)
constexpr auto UpdateCachedData = 12050560; // System.Void UpdateCachedData()
constexpr auto OnEnable = 12043312; // System.Void OnEnable()
constexpr auto OnDisable = 12042048; // System.Void OnDisable()
constexpr auto IsActive = 12039552; // System.Boolean IsActive()
constexpr auto EnsureLayoutHasRebuilt = 12038608; // System.Void EnsureLayoutHasRebuilt()
constexpr auto StopMovement = 12049568; // System.Void StopMovement()
constexpr auto OnScroll_UnityEngine_EventSystems_PointerEventData_data = 12043920; // System.Void OnScroll(UnityEngine.EventSystems.PointerEventData data)
constexpr auto OnInitializePotentialDrag_UnityEngine_EventSystems_PointerEventData_eventData = 12043792; // System.Void OnInitializePotentialDrag(UnityEngine.EventSystems.PointerEventData eventData)
constexpr auto OnBeginDrag_UnityEngine_EventSystems_PointerEventData_eventData = 12041680; // System.Void OnBeginDrag(UnityEngine.EventSystems.PointerEventData eventData)
constexpr auto OnEndDrag_UnityEngine_EventSystems_PointerEventData_eventData = 12043744; // System.Void OnEndDrag(UnityEngine.EventSystems.PointerEventData eventData)
constexpr auto OnDrag_UnityEngine_EventSystems_PointerEventData_eventData = 12042592; // System.Void OnDrag(UnityEngine.EventSystems.PointerEventData eventData)
constexpr auto SetContentAnchoredPosition_UnityEngine_Vector2_position = 12044672; // System.Void SetContentAnchoredPosition(UnityEngine.Vector2 position)
constexpr auto LateUpdate = 12039664; // System.Void LateUpdate()
constexpr auto UpdatePrevData = 12051520; // System.Void UpdatePrevData()
constexpr auto UpdateScrollbars_UnityEngine_Vector2_offset = 12053104; // System.Void UpdateScrollbars(UnityEngine.Vector2 offset)
constexpr auto get_normalizedPosition = 12054544; // UnityEngine.Vector2 get_normalizedPosition()
constexpr auto set_normalizedPosition_UnityEngine_Vector2_value = 12056496; // System.Void set_normalizedPosition(UnityEngine.Vector2 value)
constexpr auto get_horizontalNormalizedPosition = 12054240; // System.Single get_horizontalNormalizedPosition()
constexpr auto set_horizontalNormalizedPosition_System_Single_value = 12045216; // System.Void set_horizontalNormalizedPosition(System.Single value)
constexpr auto get_verticalNormalizedPosition = 12055440; // System.Single get_verticalNormalizedPosition()
constexpr auto set_verticalNormalizedPosition_System_Single_value = 12048976; // System.Void set_verticalNormalizedPosition(System.Single value)
constexpr auto SetHorizontalNormalizedPosition_System_Single_value = 12045216; // System.Void SetHorizontalNormalizedPosition(System.Single value)
constexpr auto SetVerticalNormalizedPosition_System_Single_value = 12048976; // System.Void SetVerticalNormalizedPosition(System.Single value)
constexpr auto SetNormalizedPosition_System_Single_value__System_Int32_axis = 12047616; // System.Void SetNormalizedPosition(System.Single value, System.Int32 axis)
constexpr auto OnRectTransformDimensionsChange = 12043904; // System.Void OnRectTransformDimensionsChange()
constexpr auto get_hScrollingNeeded = 12054128; // System.Boolean get_hScrollingNeeded()
constexpr auto get_vScrollingNeeded = 12055296; // System.Boolean get_vScrollingNeeded()
constexpr auto SetLayoutHorizontal = 12045232; // System.Void SetLayoutHorizontal()
constexpr auto SetLayoutVertical = 12047280; // System.Void SetLayoutVertical()
constexpr auto UpdateScrollbarVisibility = 12052736; // System.Void UpdateScrollbarVisibility()
constexpr auto UpdateScrollbarLayout = 12051776; // System.Void UpdateScrollbarLayout()
constexpr auto UpdateBounds = 12049664; // System.Void UpdateBounds()
constexpr auto GetBounds = 12038704; // UnityEngine.Bounds GetBounds()
constexpr auto CalculateOffset_UnityEngine_Vector2_delta = 12037424; // UnityEngine.Vector2 CalculateOffset(UnityEngine.Vector2 delta)
constexpr auto SetDirty = 12045088; // System.Void SetDirty()
constexpr auto SetDirtyCaching = 12044912; // System.Void SetDirtyCaching()
constexpr auto CenterOnPosition_UnityEngine_Vector2_pos = 12037936; // System.Void CenterOnPosition(UnityEngine.Vector2 pos)
constexpr auto get_normalizedViewRect = 12054608; // UnityEngine.Rect get_normalizedViewRect()
constexpr auto LayoutComplete = 3694560; // System.Void LayoutComplete()
constexpr auto GraphicUpdateComplete = 3694560; // System.Void GraphicUpdateComplete()
constexpr auto UnityEngine_UI_ICanvasElement_get_transform = 8565456; // UnityEngine.Transform UnityEngine.UI.ICanvasElement.get_transform()
}
namespace StaticMethods
{
constexpr auto RubberDelta_System_Single_overStretching__System_Single_viewSize = 12044576; // System.Single RubberDelta(System.Single overStretching, System.Single viewSize)
}
}
namespace BaseViewModel
{
namespace Fields
{
constexpr auto HideViewmodelOverride = 0x18; // System.Boolean
constexpr auto lazyaimRegular = 0x20; // LazyAimProperties
constexpr auto lazyaimIronsights = 0x28; // LazyAimProperties
constexpr auto pivot = 0x30; // UnityEngine.Transform
constexpr auto useViewModelCamera = 0x38; // System.Boolean
constexpr auto wantsHeldItemFlags = 0x39; // System.Boolean
constexpr auto hideSightMeshes = 0x40; // unknown
constexpr auto isGestureViewModel = 0x48; // System.Boolean
constexpr auto MuzzlePoint = 0x50; // UnityEngine.Transform
constexpr auto subsurfaceProfile = 0x58; // SubsurfaceProfile
constexpr auto animator = 0x60; // UnityEngine.Animator
constexpr auto animationEvent = 0x68; // AnimationEvents
constexpr auto ironSights = 0x70; // IronSights
constexpr auto sway = 0x78; // ViewmodelSway
constexpr auto lower = 0x80; // ViewmodelLower
constexpr auto bob = 0x88; // ViewmodelBob
constexpr auto punch = 0x90; // ViewmodelPunch
constexpr auto aspectOffset = 0x98; // ViewmodelAspectOffset
constexpr auto mountedAnchor = 0xa0; // ViewmodelMountedAnchor
constexpr auto model = 0xa8; // Model
constexpr auto Skeleton = 0xb0; // Facepunch.Skeleton
constexpr auto Clothing = 0xb8; // UnityEngine.GameObject
constexpr auto workshopMode = 0xc0; // System.Boolean
}
namespace StaticFields
{
constexpr auto HideViewmodel = 0x0; // System.Boolean
constexpr auto GestureModel = 0x8; // BaseViewModel
constexpr auto ActiveModels = 0x10; // System.Collections.Generic.List`1
constexpr auto gestureHide = 0x18; // System.Boolean
constexpr auto gestureHideTime = 0x1c; // TimeSince
constexpr auto gestureCollection = 0x20; // GestureCollection
constexpr auto aimHelperRoot = 0x28; // UnityEngine.GameObject
}
namespace Methods
{
constexpr auto IsOK = 11349840; // System.Boolean IsOK()
constexpr auto PreDestroy = 11355104; // System.Void PreDestroy()
constexpr auto OnEnable = 11354160; // System.Void OnEnable()
constexpr auto OnDisable = 11353600; // System.Void OnDisable()
constexpr auto Awake = 11346464; // System.Void Awake()
constexpr auto UpdateRenderersAndSkin_BasePlayer_forPlayer = 11358256; // System.Void UpdateRenderersAndSkin(BasePlayer forPlayer)
constexpr auto OnClothingChanged_BasePlayer_player = 11353584; // System.Void OnClothingChanged(BasePlayer player)
constexpr auto UpdateRenderers_BasePlayer_forPlayer = 11358496; // System.Void UpdateRenderers(BasePlayer forPlayer)
constexpr auto AddHandsModel = 3694560; // System.Void AddHandsModel()
constexpr auto UpdateClothingModels_BasePlayer_player = 11357520; // System.Void UpdateClothingModels(BasePlayer player)
constexpr auto AddClothing_ViewmodelClothing_clothing__Item_item = 11346288; // System.Void AddClothing(ViewmodelClothing clothing, Item item)
constexpr auto SetSkinColor_UnityEngine_Color_skinColor = 11356032; // System.Void SetSkinColor(UnityEngine.Color skinColor)
constexpr auto OnCameraPositionChanged_UnityEngine_Camera_cam = 11349936; // System.Void OnCameraPositionChanged(UnityEngine.Camera cam)
constexpr auto OnCameraPositionChanged_UnityEngine_Camera_cam__BasePlayer_player = 11349968; // System.Void OnCameraPositionChanged(UnityEngine.Camera cam, BasePlayer player)
constexpr auto GetLazyAim = 11349584; // LazyAimProperties GetLazyAim()
constexpr auto GetGestureRotationOffset_out_UnityEngine_Vector3_offset = 11348304; // UnityEngine.Quaternion GetGestureRotationOffset(out UnityEngine.Vector3 offset)
constexpr auto TriggerAdmire = 11356560; // System.Void TriggerAdmire()
constexpr auto TriggerAttack = 11356800; // System.Void TriggerAttack()
constexpr auto TriggerAttack2 = 11356736; // System.Void TriggerAttack2()
constexpr auto TriggerReady = 11357120; // System.Void TriggerReady()
constexpr auto TriggerCancel = 11356864; // System.Void TriggerCancel()
constexpr auto TriggerDeploy = 11356928; // System.Void TriggerDeploy()
constexpr auto TriggerReload = 11357184; // System.Void TriggerReload()
constexpr auto TriggerHolster = 11357056; // System.Void TriggerHolster()
constexpr auto TriggerEmpty = 11356992; // System.Void TriggerEmpty()
constexpr auto Trigger_System_String_name = 11357376; // System.Void Trigger(System.String name)
constexpr auto Trigger_System_Int32_hash = 11357248; // System.Void Trigger(System.Int32 hash)
constexpr auto ResetTrigger_System_String_name = 11355136; // System.Void ResetTrigger(System.String name)
constexpr auto ResetTrigger_System_Int32_hash = 11355280; // System.Void ResetTrigger(System.Int32 hash)
constexpr auto SetBool_System_String_name__System_Boolean_bState = 11355568; // System.Void SetBool(System.String name, System.Boolean bState)
constexpr auto SetBool_System_Int32_hash__System_Boolean_bState = 11355408; // System.Void SetBool(System.Int32 hash, System.Boolean bState)
constexpr auto SetFloat_System_String_name__System_Single_fAmount = 11355872; // System.Void SetFloat(System.String name, System.Single fAmount)
constexpr auto SetFloat_System_Int32_hash__System_Single_fAmount = 11355728; // System.Void SetFloat(System.Int32 hash, System.Single fAmount)
constexpr auto Play_System_String_anim__System_Int32_layer___0 = 11354640; // System.Void Play(System.String anim, System.Int32 layer = 0)
constexpr auto CrossFade_System_String_anim__System_Single_fade = 11347952; // System.Void CrossFade(System.String anim, System.Single fade)
constexpr auto HideSightMeshes_System_Boolean_bHide = 11349728; // System.Void HideSightMeshes(System.Boolean bHide)
constexpr auto OnDeployedNoSkin = 3694560; // System.Void OnDeployedNoSkin()
constexpr auto WorkshopMode = 11358800; // System.Void WorkshopMode()
constexpr auto _ctor = 11225408; // System.Void .ctor()
}
namespace StaticMethods
{
constexpr auto get_ActiveModel = 11359152; // BaseViewModel get_ActiveModel()
constexpr auto get_UsingViewModelCamera = 11359568; // System.Boolean get_UsingViewModelCamera()
constexpr auto ToggleGestureHide_System_Boolean_state = 11356384; // System.Void ToggleGestureHide(System.Boolean state)
constexpr auto _cctor = 11358816; // System.Void .cctor()
}
}
namespace ResourceRef_1
{
namespace Fields
{
constexpr auto guid = 0x0; // System.String
constexpr auto _cachedObject = 0x0; // unknown
}
namespace Methods
{
constexpr auto get_isValid = 21284096; // System.Boolean get_isValid()
constexpr auto Get = 21283648; // T Get()
constexpr auto get_resourcePath = 21284176; // System.String get_resourcePath()
constexpr auto get_resourceID = 21284128; // System.UInt32 get_resourceID()
constexpr auto _ctor = 3679632; // System.Void .ctor()
}
}
namespace GameObjectRef
{
namespace Methods
{
constexpr auto Instantiate_UnityEngine_Transform_parent___null = 11364656; // UnityEngine.GameObject Instantiate(UnityEngine.Transform parent = null)
constexpr auto GetEntity = 11364560; // BaseEntity GetEntity()
constexpr auto _ctor = 11364752; // System.Void .ctor()
}
}
namespace UIDeathScreen
{
namespace Fields
{
constexpr auto previousLifeInfographic = 0x18; // LifeInfographic
constexpr auto screenAnimator = 0x20; // UnityEngine.Animator
constexpr auto fadeIn = 0x28; // System.Boolean
constexpr auto ReportCheatButton = 0x30; // UnityEngine.UI.Button
constexpr auto View = 0x38; // MapView
constexpr auto sleepingBagButtons = 0x40; // System.Collections.Generic.List`1
constexpr auto loadingIndicator = 0x48; // UnityEngine.GameObject
constexpr auto RespawnColourSchemes = 0x50; // unknown
constexpr auto RespawnScrollGradient = 0x58; // UnityEngine.GameObject
constexpr auto RespawnScrollRect = 0x60; // UnityEngine.UI.ScrollRect
constexpr auto ExpandedStats = 0x68; // ExpandedLifeStats
constexpr auto StreamerModeContainer = 0x70; // UnityEngine.CanvasGroup
constexpr auto canvasGroup = 0x78; // UnityEngine.CanvasGroup
constexpr auto graphicRaycaster = 0x80; // UnityEngine.UI.GraphicRaycaster
constexpr auto needsCursor = 0x88; // NeedsCursor
constexpr auto visible = 0x90; // System.Boolean
constexpr auto finishedLoading = 0x91; // System.Boolean
constexpr auto _currentRespawnInfo_k__BackingField = 0x98; // ProtoBuf.RespawnInformation
constexpr auto _respawnInfoTimestamp_k__BackingField = 0xa0; // System.Single
}
namespace Methods
{
constexpr auto get_currentRespawnInfo = 3702864; // ProtoBuf.RespawnInformation get_currentRespawnInfo()
constexpr auto set_currentRespawnInfo_ProtoBuf_RespawnInformation_value = 3703536; // System.Void set_currentRespawnInfo(ProtoBuf.RespawnInformation value)
constexpr auto get_respawnInfoTimestamp = 11208752; // System.Single get_respawnInfoTimestamp()
constexpr auto set_respawnInfoTimestamp_System_Single_value = 7922784; // System.Void set_respawnInfoTimestamp(System.Single value)
constexpr auto Awake = 11202944; // System.Void Awake()
constexpr auto SetVisible_System_Boolean_b = 11204512; // System.Void SetVisible(System.Boolean b)
constexpr auto OnEnable = 11203616; // System.Void OnEnable()
constexpr auto OnRespawn = 11203952; // System.Void OnRespawn()
constexpr auto UpdateRespawnInformation_ProtoBuf_RespawnInformation_info = 11206736; // System.Void UpdateRespawnInformation(ProtoBuf.RespawnInformation info)
constexpr auto UpdateRespawnOptions_System_Collections_Generic_List_1_ProtoBuf_RespawnInformation_SpawnOptions__spawnOptions__System_Single_respawnOptionTimestamp = 11207536; // System.Void UpdateRespawnOptions(System.Collections.Generic.List`1<ProtoBuf.RespawnInformation/SpawnOptions> spawnOptions, System.Single respawnOptionTimestamp)
constexpr auto GetSleepingBagButton = 11203328; // SleepingBagButton GetSleepingBagButton()
constexpr auto PopulateDeathInfo = 11204112; // System.Void PopulateDeathInfo()
constexpr auto EnableInteraction = 11203184; // System.Void EnableInteraction()
constexpr auto ReportCheater = 11204144; // System.Void ReportCheater()
constexpr auto GetRespawnColourScheme_System_Int32_index = 11203232; // UIDeathScreen/RespawnColourScheme GetRespawnColourScheme(System.Int32 index)
constexpr auto UpdateBottomScrollGradient = 11206496; // System.Void UpdateBottomScrollGradient()
constexpr auto _ctor = 11208592; // System.Void .ctor()
}
namespace StaticMethods
{
constexpr auto CompareSpawnOptions_ProtoBuf_RespawnInformation_SpawnOptions_a__ProtoBuf_RespawnInformation_SpawnOptions_b = 11202976; // System.Int32 CompareSpawnOptions(ProtoBuf.RespawnInformation/SpawnOptions a, ProtoBuf.RespawnInformation/SpawnOptions b)
constexpr auto OnRespawnInformation_ProtoBuf_RespawnInformation_info = 11203792; // System.Void OnRespawnInformation(ProtoBuf.RespawnInformation info)
}
}
namespace UIInventory
{
namespace Fields
{
constexpr auto PlayerName = 0x18; // TMPro.TextMeshProUGUI
constexpr auto rightContents = 0x20; // UnityEngine.UI.VerticalLayoutGroup
constexpr auto QuickCraft = 0x28; // UnityEngine.GameObject
constexpr auto InventoryIconContainer = 0x30; // UnityEngine.Transform
constexpr auto ChangelogPanel = 0x38; // ChangelogPanel
constexpr auto contactsPanel = 0x40; // ContactsPanel
constexpr auto backpackSlot = 0x48; // UnityEngine.GameObject
constexpr auto Inset = 0x50; // UnityEngine.GameObject
constexpr auto returnX = 0x58; // System.Single
constexpr auto inventoryItemIcons = 0x60; // unknown
constexpr auto underwearSkinPicker = 0x68; // UnderwearSkinPicker
}
namespace StaticFields
{
constexpr auto isOpen = 0x0; // System.Boolean
constexpr auto LastOpened = 0x4; // System.Single
constexpr auto currentQuickLootContainerID = 0x8; // ItemContainerId
constexpr auto canvasGroup = 0x10; // UnityEngine.CanvasGroup
constexpr auto graphicRaycster = 0x18; // UnityEngine.UI.GraphicRaycaster
constexpr auto lastCloseSoundPlay = 0x20; // TimeSince
}
namespace Methods
{
constexpr auto Awake = 10880160; // System.Void Awake()
constexpr auto Update = 10886976; // System.Void Update()
constexpr auto ShouldShow = 10886080; // System.Boolean ShouldShow()
constexpr auto CloseUnderwearPicker = 10881024; // System.Void CloseUnderwearPicker()
constexpr auto ToggleUnderwearPicker = 10886832; // System.Void ToggleUnderwearPicker()
constexpr auto ContactsPressed = 10882736; // System.Void ContactsPressed()
constexpr auto _ctor = 10887600; // System.Void .ctor()
}
namespace StaticMethods
{
constexpr auto Open_System_Boolean_selectHeldItem___True = 10883024; // System.Void Open(System.Boolean selectHeldItem = True)
constexpr auto ToggleInventory = 10886608; // System.Void ToggleInventory()
constexpr auto Close = 10881072; // System.Void Close()
constexpr auto PlayCloseSound = 10884608; // System.Void PlayCloseSound()
constexpr auto OpenLoot_System_String_lootType = 10882848; // System.Void OpenLoot(System.String lootType)
constexpr auto CanQuickLootItem_Item_item__ItemContainerSource_containerSource = 10880800; // System.Boolean CanQuickLootItem(Item item, ItemContainerSource containerSource)
}
}
namespace LootPanelOven
{
namespace Fields
{
constexpr auto ovenPanel = 0x40; // OvenLootPanel
}
namespace Methods
{
constexpr auto get_controlsOn = 9594096; // UnityEngine.GameObject get_controlsOn()
constexpr auto get_controlsOff = 9594032; // UnityEngine.GameObject get_controlsOff()
constexpr auto Awake = 10760944; // System.Void Awake()
constexpr auto OnOpened = 10763024; // System.Void OnOpened()
constexpr auto Update = 10763760; // System.Void Update()
constexpr auto IncreaseCookTime_System_Single_amount = 10761616; // System.Void IncreaseCookTime(System.Single amount)
constexpr auto GetBaseOven = 10761472; // BaseOven GetBaseOven()
constexpr auto IsOn = 10762816; // System.Boolean IsOn()
constexpr auto Switch_System_Boolean_onOff = 10763376; // System.Void Switch(System.Boolean onOff)
constexpr auto OnEnable = 10762944; // System.Void OnEnable()
constexpr auto _ctor = 3661504; // System.Void .ctor()
constexpr auto _Awake_b__5_0 = 10763728; // System.Void <Awake>b__5_0()
constexpr auto _Awake_b__5_1 = 10763744; // System.Void <Awake>b__5_1()
}
}
namespace ItemIcon
{
namespace Fields
{
constexpr auto backgroundColor = 0x18; // UnityEngine.Color
constexpr auto selectedBackgroundColor = 0x28; // UnityEngine.Color
constexpr auto unoccupiedAlpha = 0x38; // System.Single
constexpr auto unoccupiedColor = 0x3c; // UnityEngine.Color
constexpr auto containerSource = 0x50; // ItemContainerSource
constexpr auto slotOffset = 0x58; // System.Int32
constexpr auto slot = 0x5c; // System.Int32
constexpr auto setSlotFromSiblingIndex = 0x60; // System.Boolean
constexpr auto slots = 0x68; // UnityEngine.GameObject
constexpr auto iconContents = 0x70; // UnityEngine.CanvasGroup
constexpr auto canvasGroup = 0x78; // UnityEngine.CanvasGroup
constexpr auto iconImage = 0x80; // UnityEngine.UI.Image
constexpr auto underlayImage = 0x88; // UnityEngine.UI.Image
constexpr auto amountText = 0x90; // UnityEngine.UI.Text
constexpr auto hoverText = 0x98; // UnityEngine.UI.Text
constexpr auto hoverOutline = 0xa0; // UnityEngine.UI.Image
constexpr auto cornerIcon = 0xa8; // UnityEngine.UI.Image
constexpr auto lockedImage = 0xb0; // UnityEngine.UI.Image
constexpr auto progressImage = 0xb8; // UnityEngine.UI.Image
constexpr auto backgroundImage = 0xc0; // UnityEngine.UI.Image
constexpr auto backgroundUnderlayImage = 0xc8; // UnityEngine.UI.Image
constexpr auto progressPanel = 0xd0; // UnityEngine.UI.Image
constexpr auto emptySlotBackgroundSprite = 0xd8; // UnityEngine.Sprite
constexpr auto conditionObject = 0xe0; // UnityEngine.CanvasGroup
constexpr auto conditionFill = 0xe8; // UnityEngine.UI.Image
constexpr auto maxConditionFill = 0xf0; // UnityEngine.UI.Image
constexpr auto lightEnabled = 0xf8; // UnityEngine.GameObject
constexpr auto allowSelection = 0x100; // System.Boolean
constexpr auto allowDropping = 0x101; // System.Boolean
constexpr auto allowMove = 0x102; // System.Boolean
constexpr auto showCountDropShadow = 0x103; // System.Boolean
constexpr auto item = 0x108; // Item
constexpr auto invalidSlot = 0x110; // System.Boolean
constexpr auto hoverSound = 0x118; // SoundDefinition
constexpr auto slotImages = 0x120; // unknown
constexpr auto queuedForLooting = 0x128; // System.Boolean
constexpr auto queuedQuickLootContainerID = 0x130; // ItemContainerId
constexpr auto queuedLootAtTime = 0x138; // System.Single
constexpr auto visible = 0x13c; // System.Boolean
constexpr auto hovering = 0x13d; // System.Boolean
constexpr auto canvasGroupParent = 0x140; // UnityEngine.CanvasGroup
constexpr auto currentCouroutine = 0x148; // UnityEngine.Coroutine
constexpr auto isSelected = 0x150; // System.Boolean
constexpr auto timedAction = 0x158; // System.Action
constexpr auto timedActionTime = 0x160; // System.Nullable`1
}
namespace StaticFields
{
constexpr auto containerLootStartTimes = 0x0; // System.Collections.Generic.Dictionary`2
constexpr auto processLootQueueInterval = 0x0; // System.Single
constexpr auto lootItemDuration = 0x0; // System.Single
}
namespace Methods
{
constexpr auto Awake = 10718528; // System.Void Awake()
constexpr auto OnEnable = 10724304; // System.Void OnEnable()
constexpr auto ClearProgressImage = 10719616; // System.Void ClearProgressImage()
constexpr auto OnDisable = 10722784; // System.Void OnDisable()
constexpr auto OnShow = 10726624; // System.Void OnShow()
constexpr auto OnHide = 10724720; // System.Void OnHide()
constexpr auto ClearLooting = 10719584; // System.Void ClearLooting()
constexpr auto Update = 10735696; // System.Void Update()
constexpr auto UpdateProgressBar = 10734864; // System.Void UpdateProgressBar()
constexpr auto GetItemSprite_out_UnityEngine_Color_tint = 10721296; // UnityEngine.Sprite GetItemSprite(out UnityEngine.Color tint)
constexpr auto UpdateHasLightIcon = 10733152; // System.Void UpdateHasLightIcon()
constexpr auto OnItemAmountChanged = 10724880; // System.Void OnItemAmountChanged()
constexpr auto OnItemIconChanged = 10724944; // System.Void OnItemIconChanged()
constexpr auto PreInventoryChanged = 10726640; // System.Void PreInventoryChanged()
constexpr auto UpdateHoverText = 10733888; // System.Void UpdateHoverText()
constexpr auto UpdateItemIcon = 10734800; // System.Void UpdateItemIcon()
constexpr auto SetBackgroundUnderlayVisible_System_Boolean_flag = 10729216; // System.Void SetBackgroundUnderlayVisible(System.Boolean flag)
constexpr auto UpdateCornerIcon = 10732880; // System.Void UpdateCornerIcon()
constexpr auto UpdateSlots = 10735104; // System.Void UpdateSlots()
constexpr auto get_iconValue = 10736256; // Item get_iconValue()
constexpr auto Select = 10729184; // System.Void Select()
constexpr auto SelectSilent = 10729168; // System.Void SelectSilent()
constexpr auto InternalSelect_System_Boolean_silent___False = 10722512; // System.Void InternalSelect(System.Boolean silent = False)
constexpr auto Deselect = 10720416; // System.Void Deselect()
constexpr auto SetActive_System_Boolean_active = 10729200; // System.Void SetActive(System.Boolean active)
constexpr auto UpdateBackgroundColor = 10732640; // System.Void UpdateBackgroundColor()
constexpr auto OnDroppedValue_ItemIcon_DragInfo_dropInfo = 10723200; // System.Void OnDroppedValue(ItemIcon/DragInfo dropInfo)
constexpr auto TryToDropInsideItem_ItemIcon_DragInfo_dropInfo__Item_item = 10730416; // System.Boolean TryToDropInsideItem(ItemIcon/DragInfo dropInfo, Item item)
constexpr auto SetTimedLootAction_ItemContainerId_sourceContainer__System_Action_action = 10729536; // System.Void SetTimedLootAction(ItemContainerId sourceContainer, System.Action action)
constexpr auto CalculateLootDelay_ItemContainerId_sourceContainer = 10719024; // System.Single CalculateLootDelay(ItemContainerId sourceContainer)
constexpr auto StartTimedLootAction_System_Single_delay = 10730272; // System.Collections.IEnumerator StartTimedLootAction(System.Single delay)
constexpr auto RunTimedAction = 10729120; // System.Void RunTimedAction()
constexpr auto ClearTimedAction = 10719824; // System.Void ClearTimedAction()
constexpr auto RemoveFromLootQueue = 10728704; // System.Void RemoveFromLootQueue()
constexpr auto UpdateTimedActionIcon = 10735568; // System.Collections.IEnumerator UpdateTimedActionIcon()
constexpr auto TryToQuickMove = 10732080; // System.Void TryToQuickMove()
constexpr auto TryToMove = 10730800; // System.Void TryToMove()
constexpr auto OnPointerClick_UnityEngine_EventSystems_PointerEventData_eventData = 10725200; // System.Void OnPointerClick(UnityEngine.EventSystems.PointerEventData eventData)
constexpr auto OnPointerEnter_UnityEngine_EventSystems_PointerEventData_eventData = 10725424; // System.Void OnPointerEnter(UnityEngine.EventSystems.PointerEventData eventData)
constexpr auto OnPointerExit_UnityEngine_EventSystems_PointerEventData_eventData = 10726416; // System.Void OnPointerExit(UnityEngine.EventSystems.PointerEventData eventData)
constexpr auto GetDragData = 10720448; // System.Object GetDragData()
constexpr auto GetDragType = 10721248; // System.String GetDragType()
constexpr auto GetDragSprite = 10721184; // UnityEngine.Sprite GetDragSprite()
constexpr auto _ctor = 10736208; // System.Void .ctor()
}
namespace StaticMethods
{
constexpr auto ClearLootTimers = 10719392; // System.Void ClearLootTimers()
constexpr auto _cctor = 10736064; // System.Void .cctor()
}
}
namespace MapView
{
namespace Fields
{
constexpr auto mapImage = 0x18; // UnityEngine.UI.RawImage
constexpr auto cameraPositon = 0x20; // UnityEngine.UI.Image
constexpr auto scrollRect = 0x28; // UnityEngine.UI.ScrollRectEx
constexpr auto monumentMarkerContainer = 0x30; // UnityEngine.GameObject
constexpr auto clusterMarkerContainer = 0x38; // UnityEngine.Transform
constexpr auto monumentMarkerPrefab = 0x40; // GameObjectRef
constexpr auto missionMarkerContainer = 0x48; // UnityEngine.GameObject
constexpr auto missionMarkerPrefab = 0x50; // GameObjectRef
constexpr auto activeInteractionParent = 0x58; // UnityEngine.Transform
constexpr auto localPlayerInterestPointRoot = 0x60; // UnityEngine.Transform
constexpr auto teamPositions = 0x68; // unknown
constexpr auto clanPositions = 0x70; // unknown
constexpr auto PointOfInterestMarkers = 0x78; // System.Collections.Generic.List`1
constexpr auto TeamPointOfInterestMarkers = 0x80; // System.Collections.Generic.List`1
constexpr auto LocalPings = 0x88; // System.Collections.Generic.List`1
constexpr auto TeamPings = 0x90; // System.Collections.Generic.List`1
constexpr auto PlayerDeathMarker = 0x98; // UnityEngine.GameObject
constexpr auto SleepingBagMarkers = 0xa0; // System.Collections.Generic.List`1
constexpr auto SleepingBagClusters = 0xa8; // System.Collections.Generic.List`1
constexpr auto UndergroundLayer = 0xb0; // UnityEngine.UI.RawImage
constexpr auto ShowGrid = 0xb8; // System.Boolean
constexpr auto ShowPointOfInterestMarkers = 0xb9; // System.Boolean
constexpr auto ShowDeathMarker = 0xba; // System.Boolean
constexpr auto ShowSleepingBags = 0xbb; // System.Boolean
constexpr auto AllowSleepingBagDeletion = 0xbc; // System.Boolean
constexpr auto ShowLocalPlayer = 0xbd; // System.Boolean
constexpr auto ShowTeamMembers = 0xbe; // System.Boolean
constexpr auto ShowBagsOnBottom = 0xbf; // System.Boolean
constexpr auto ShowTrainLayer = 0xc0; // System.Boolean
constexpr auto ShowMissions = 0xc1; // System.Boolean
constexpr auto ForceShowVendingMachines = 0xc2; // System.Boolean
constexpr auto ShowUndergroundLayers = 0xc3; // System.Boolean
constexpr auto MLRSMarkerMode = 0xc4; // System.Boolean
constexpr auto LockButton = 0xc8; // Rust.UI.RustImageButton
constexpr auto OverworldButton = 0xd0; // Rust.UI.RustImageButton
constexpr auto TrainButton = 0xd8; // Rust.UI.RustImageButton
constexpr auto UnderwaterButtons = 0xe0; // unknown
constexpr auto DungeonButton = 0xe8; // Rust.UI.RustImageButton
constexpr auto onClicked = 0xf0; // UnityEngine.Events.UnityEvent
constexpr auto _followingPlayer_k__BackingField = 0xf8; // System.Boolean
constexpr auto clusterDict = 0x100; // System.Collections.Generic.Dictionary`2
constexpr auto markersToRetire = 0x108; // System.Collections.Generic.List`1
constexpr auto markerLookup = 0x110; // System.Collections.Generic.Dictionary`2
constexpr auto monumentMarkers = 0x118; // System.Collections.Generic.List`1
constexpr auto missionMarkers = 0x120; // System.Collections.Generic.List`1
constexpr auto isShowingUndergroundLayers = 0x128; // System.Boolean
constexpr auto undergroundLayerOverride = 0x12c; // System.Nullable`1
constexpr auto visibleLayer = 0x134; // MapLayer
}
namespace StaticFields
{
constexpr auto ActiveView = 0x0; // MapView
constexpr auto lastActiveMap = 0x8; // MapEntity
}
namespace Methods
{
constexpr auto get_followingPlayer = 8023728; // System.Boolean get_followingPlayer()
constexpr auto set_followingPlayer_System_Boolean_value = 8023808; // System.Void set_followingPlayer(System.Boolean value)
constexpr auto get_IsOpen = 10469136; // System.Boolean get_IsOpen()
constexpr auto Awake = 10438464; // System.Void Awake()
constexpr auto SetActiveView = 10455776; // System.Void SetActiveView()
constexpr auto ClearActiveView = 10444768; // System.Void ClearActiveView()
constexpr auto MarkersDirty = 10450432; // System.Void MarkersDirty()
constexpr auto SetupMonuments = 10459712; // System.Void SetupMonuments()
constexpr auto SetupMarkers = 10456320; // System.Void SetupMarkers()
constexpr auto PopulateMarker_MapMarker_marker = 10452416; // System.Void PopulateMarker(MapMarker marker)
constexpr auto PopulateMarker_UnityEngine_GameObject_uiMarker__MapMarker_marker = 10451936; // System.Void PopulateMarker(UnityEngine.GameObject uiMarker, MapMarker marker)
constexpr auto UpdatePointsOfInterest = 10466256; // System.Void UpdatePointsOfInterest()
constexpr auto UpdatePings = 10464816; // System.Void UpdatePings()
constexpr auto HideAllMarkers = 10448480; // System.Void HideAllMarkers()
constexpr auto PopulateMarkerList_System_Collections_Generic_List_1_PointOfInterestMapMarker__markers__System_Collections_Generic_List_1_ProtoBuf_MapNote__notes__System_Boolean_isTeam = 10450656; // System.Void PopulateMarkerList(System.Collections.Generic.List`1<PointOfInterestMapMarker> markers, System.Collections.Generic.List`1<ProtoBuf.MapNote> notes, System.Boolean isTeam)
constexpr auto ToggleSleepingBags_System_Boolean_state = 10461152; // System.Void ToggleSleepingBags(System.Boolean state)
constexpr auto PopulateSleepingBags_System_Collections_Generic_List_1_ProtoBuf_RespawnInformation_SpawnOptions__spawnOptions__System_Single_respawnOptionsTimestamp = 10452576; // System.Void PopulateSleepingBags(System.Collections.Generic.List`1<ProtoBuf.RespawnInformation/SpawnOptions> spawnOptions, System.Single respawnOptionsTimestamp)
constexpr auto GetSleepingBagMarker = 10448256; // SleepingBagMapMarker GetSleepingBagMarker()
constexpr auto GetSleepingBagClusterMarker = 10448032; // SleepingBagClusterMapMarker GetSleepingBagClusterMarker()
constexpr auto BuildMapMarkerClusters_System_Collections_Generic_List_1_MapMarker__markers__System_Collections_Generic_List_1_MapView_MapMarkerCluster__resultClusters__System_Collections_Generic_List_1_MapMarker__resultMarkers = 10438512; // System.Void BuildMapMarkerClusters(System.Collections.Generic.List`1<MapMarker> markers, System.Collections.Generic.List`1<MapView/MapMarkerCluster> resultClusters, System.Collections.Generic.List`1<MapMarker> resultMarkers)
constexpr auto BuildSpawnOptionClusters_System_Collections_Generic_List_1_ProtoBuf_RespawnInformation_SpawnOptions__spawnOptions__System_Collections_Generic_List_1_MapView_SleepingBagCluster__resultClusters__System_Collections_Generic_List_1_ProtoBuf_RespawnInformation_SpawnOptions__resultSleepingBags = 10441552; // System.Void BuildSpawnOptionClusters(System.Collections.Generic.List`1<ProtoBuf.RespawnInformation/SpawnOptions> spawnOptions, System.Collections.Generic.List`1<MapView/SleepingBagCluster> resultClusters, System.Collections.Generic.List`1<ProtoBuf.RespawnInformation/SpawnOptions> resultSleepingBags)
constexpr auto ShouldShowSleepingBags = 10461136; // System.Boolean ShouldShowSleepingBags()
constexpr auto UpdateMissionMarkers = 10463616; // System.Void UpdateMissionMarkers()
constexpr auto UpdateMarkers = 10463072; // System.Void UpdateMarkers()
constexpr auto Update = 10467200; // System.Void Update()
constexpr auto GetSelectedMapLayer = 10447872; // MapLayer GetSelectedMapLayer()
constexpr auto WorldPosToImagePos_UnityEngine_Vector3_worldPos = 10468288; // UnityEngine.Vector2 WorldPosToImagePos(UnityEngine.Vector3 worldPos)
constexpr auto ImagePosToWorldPos_UnityEngine_Vector2_imagePos = 10449376; // UnityEngine.Vector3 ImagePosToWorldPos(UnityEngine.Vector2 imagePos)
constexpr auto CenterOn_UnityEngine_Vector3_worldPos = 10444688; // System.Void CenterOn(UnityEngine.Vector3 worldPos)
constexpr auto UpdatePlayerPosition_BasePlayer_player = 10465104; // System.Void UpdatePlayerPosition(BasePlayer player)
constexpr auto DoPlayerUpdate = 10446832; // System.Void DoPlayerUpdate()
constexpr auto ClientTeamUpdated_System_Boolean_positionsOnly___False = 10444896; // System.Void ClientTeamUpdated(System.Boolean positionsOnly = False)
constexpr auto RefreshClanMembers = 10454528; // System.Void RefreshClanMembers()
constexpr auto LockCurrentLayer = 10450288; // System.Void LockCurrentLayer()
constexpr auto UnlockCurrentLayer = 10462080; // System.Void UnlockCurrentLayer()
constexpr auto SetCurrentLayer_System_Int32_layer = 10456224; // System.Void SetCurrentLayer(System.Int32 layer)
constexpr auto UpdateLayerButtons_System_Nullable_1_MapLayer__currentLayer = 10462096; // System.Void UpdateLayerButtons(System.Nullable`1<MapLayer> currentLayer)
constexpr auto OnPointerDown_UnityEngine_EventSystems_PointerEventData_eventData = 10450624; // System.Void OnPointerDown(UnityEngine.EventSystems.PointerEventData eventData)
constexpr auto _ctor = 10468480; // System.Void .ctor()
constexpr auto _PopulateSleepingBags_g__DisableAllSleepingBags_71_0 = 10461424; // System.Void <PopulateSleepingBags>g__DisableAllSleepingBags|71_0()
}
namespace StaticMethods
{
constexpr auto get_MarkerScale = 10469568; // System.Single get_MarkerScale()
constexpr auto get_LocalPlayerEntity = 10469424; // BasePlayer get_LocalPlayerEntity()
constexpr auto GetCurrentUndergroundLayer = 10447168; // System.Nullable`1<MapLayer> GetCurrentUndergroundLayer()
constexpr auto IsInDungeon_out_ProceduralDynamicDungeon_dungeon = 10449920; // System.Boolean IsInDungeon(out ProceduralDynamicDungeon dungeon)
}
}
namespace MapInterface
{
namespace Fields
{
constexpr auto cameraPositon = 0x18; // UnityEngine.UI.Image
constexpr auto scrollRect = 0x20; // UnityEngine.UI.ScrollRectEx
constexpr auto showGridToggle = 0x28; // Rust.UI.RustButton
constexpr auto FocusButton = 0x30; // Rust.UI.RustButton
constexpr auto CanvasGroup = 0x38; // UnityEngine.CanvasGroup
constexpr auto PlaceMarkerSound = 0x40; // SoundDefinition
constexpr auto ClearMarkerSound = 0x48; // SoundDefinition
constexpr auto View = 0x50; // MapView
constexpr auto NexusMap = 0x58; // UINexusMap
constexpr auto NexusButtonGroup = 0x60; // UnityEngine.GameObject
constexpr auto NexusToggle = 0x68; // Rust.UI.RustButton
constexpr auto PointOfInterestColours = 0x70; // unknown
constexpr auto PointOfInterestSprites = 0x78; // unknown
constexpr auto PingBackground = 0x80; // UnityEngine.Sprite
constexpr auto DebugStayOpen = 0x88; // System.Boolean
constexpr auto MarkerListSection = 0x90; // UnityEngine.GameObject
constexpr auto MarkerListPrefab = 0x98; // GameObjectRef
constexpr auto MarkerHeader = 0xa0; // UnityEngine.GameObject
constexpr auto LocalPlayerMarkerListParent = 0xa8; // UnityEngine.Transform
constexpr auto TeamMarkerListParent = 0xb0; // UnityEngine.Transform
constexpr auto TeamLeaderHeader = 0xb8; // UnityEngine.GameObject
constexpr auto HideTeamLeaderMarkersToggle = 0xc0; // Rust.UI.RustButton
constexpr auto TeamMarkersCanvas = 0xc8; // UnityEngine.CanvasGroup
constexpr auto ShowSleepingBagsButton = 0xd0; // Rust.UI.RustImageButton
constexpr auto ShowVendingMachinesButton = 0xd8; // Rust.UI.RustImageButton
constexpr auto pointerData = 0xe0; // UnityEngine.EventSystems.PointerEventData
constexpr auto rayResults = 0xe8; // System.Collections.Generic.List`1
constexpr auto spawnedLocalMarkers = 0xf0; // System.Collections.Generic.List`1
constexpr auto NeedsCursor = 0xf8; // NeedsCursor
constexpr auto NeedsMouseButtons = 0x100; // NeedsMouseButtons
constexpr auto NeedsMouseWheel = 0x108; // NeedsMouseWheel
constexpr auto rmbStartPos = 0x110; // UnityEngine.Vector3
constexpr auto lmbStartPos = 0x11c; // UnityEngine.Vector3
constexpr auto rmbStartTime = 0x128; // System.Single
constexpr auto lmbStartTime = 0x12c; // System.Single
constexpr auto selectedMarker = 0x130; // PointOfInterestMapMarker
}
namespace StaticFields
{
constexpr auto IsOpen = 0x0; // System.Boolean
constexpr auto LastOpened = 0x4; // System.Single
constexpr auto lastActiveMap = 0x8; // MapEntity
}
namespace Methods
{
constexpr auto Awake = 10419344; // System.Void Awake()
constexpr auto OnEnable = 10424896; // System.Void OnEnable()
constexpr auto FollowPlayer = 10419520; // System.Void FollowPlayer()
constexpr auto UnfollowPlayer = 10426512; // System.Void UnfollowPlayer()
constexpr auto OnDisable = 10424720; // System.Void OnDisable()
constexpr auto Update = 10429200; // System.Void Update()
constexpr auto MarkerInput = 10422336; // System.Void MarkerInput()
constexpr auto ProcessMouseInput_System_Int32_mouseButton__System_Single_clickStartTime__UnityEngine_Vector3_clickStartPos = 10425264; // System.Boolean ProcessMouseInput(System.Int32 mouseButton, System.Single clickStartTime, UnityEngine.Vector3 clickStartPos)
constexpr auto ForceOpen_System_Boolean_open = 10419632; // System.Void ForceOpen(System.Boolean open)
constexpr auto GetPointOfInterestColor_System_Int32_colorIndex = 10421984; // UnityEngine.Color GetPointOfInterestColor(System.Int32 colorIndex)
constexpr auto GetPointOfInterestSettings_System_Int32_spriteIndex__System_Int32_colourIndex__System_Boolean_isPing__out_MapInterface_PointOfInterestSpriteConfig_resultSprite__out_UnityEngine_Color_resultColour = 10422064; // System.Void GetPointOfInterestSettings(System.Int32 spriteIndex, System.Int32 colourIndex, System.Boolean isPing, out MapInterface/PointOfInterestSpriteConfig resultSprite, out UnityEngine.Color resultColour)
constexpr auto ApplyPointOfInterestSettings_ProtoBuf_MapNote_mapNote__UnityEngine_UI_Image_inner__UnityEngine_UI_Image_outer = 10419280; // System.Void ApplyPointOfInterestSettings(ProtoBuf.MapNote mapNote, UnityEngine.UI.Image inner, UnityEngine.UI.Image outer)
constexpr auto ApplyPointOfInterestSettings_System_Int32_spriteIndex__System_Int32_colourIndex__System_Boolean_isPing__UnityEngine_UI_Image_inner__UnityEngine_UI_Image_outer = 10418720; // System.Void ApplyPointOfInterestSettings(System.Int32 spriteIndex, System.Int32 colourIndex, System.Boolean isPing, UnityEngine.UI.Image inner, UnityEngine.UI.Image outer)
constexpr auto get_PointOfInterestIconCount = 10430336; // System.Int32 get_PointOfInterestIconCount()
constexpr auto get_PointOfInterestColourCount = 10430304; // System.Int32 get_PointOfInterestColourCount()
constexpr auto UpdateLocalPlayerMarkers = 10426624; // System.Void UpdateLocalPlayerMarkers()
constexpr auto UpdateTeamMarkers = 10427872; // System.Void UpdateTeamMarkers()
constexpr auto ToggleHideTeamLeaderMarkers_System_Boolean_state = 10425888; // System.Void ToggleHideTeamLeaderMarkers(System.Boolean state)
constexpr auto ToggleSleepingBags_System_Boolean_state = 10426016; // System.Void ToggleSleepingBags(System.Boolean state)
constexpr auto ToggleVendingMachines_System_Boolean_state = 10426384; // System.Void ToggleVendingMachines(System.Boolean state)
constexpr auto _ctor = 10429856; // System.Void .ctor()
}
namespace StaticMethods
{
constexpr auto get_LocalPlayerEntity = 10430096; // BasePlayer get_LocalPlayerEntity()
constexpr auto SetOpen_System_Boolean_open = 10425568; // System.Void SetOpen(System.Boolean open)
constexpr auto ResetMap = 3694560; // System.Void ResetMap()
constexpr auto get_localPlayerMap = 10430368; // MapEntity get_localPlayerMap()
}
}
namespace StringPool
{
namespace StaticFields
{
constexpr auto toString = 0x0; // System.Collections.Generic.Dictionary`2
constexpr auto toNumber = 0x8; // System.Collections.Generic.Dictionary`2
constexpr auto initialized = 0x10; // System.Boolean
constexpr auto closest = 0x14; // System.UInt32
}
namespace Methods
{
constexpr auto _ctor = 3679632; // System.Void .ctor()
}
namespace StaticMethods
{
constexpr auto Init = 10128992; // System.Void Init()
constexpr auto Get_System_UInt32_i = 10128448; // System.String Get(System.UInt32 i)
constexpr auto Get_System_String_str = 10128752; // System.UInt32 Get(System.String str)
constexpr auto Add_System_String_str = 10128160; // System.UInt32 Add(System.String str)
}
}
namespace WaterCollision
{
namespace Fields
{
constexpr auto ignoredColliders = 0x18; // ListDictionary`2
constexpr auto waterColliders = 0x20; // System.Collections.Generic.HashSet`1
}
namespace Methods
{
constexpr auto Awake = 9774560; // System.Void Awake()
constexpr auto Clear = 9774768; // System.Void Clear()
constexpr auto Reset_UnityEngine_Collider_collider = 9776704; // System.Void Reset(UnityEngine.Collider collider)
constexpr auto GetIgnore_UnityEngine_Vector3_pos__System_Single_radius___0_01 = 9775280; // System.Boolean GetIgnore(UnityEngine.Vector3 pos, System.Single radius = 0.01)
constexpr auto GetIgnore_UnityEngine_Bounds_bounds = 9776064; // System.Boolean GetIgnore(UnityEngine.Bounds bounds)
constexpr auto GetIgnore_UnityEngine_Vector3_start__UnityEngine_Vector3_end__System_Single_radius = 9775424; // System.Boolean GetIgnore(UnityEngine.Vector3 start, UnityEngine.Vector3 end, System.Single radius)
constexpr auto GetIgnore_UnityEngine_RaycastHit_hit = 9775616; // System.Boolean GetIgnore(UnityEngine.RaycastHit hit)
constexpr auto GetIgnore_UnityEngine_Collider_collider = 9775888; // System.Boolean GetIgnore(UnityEngine.Collider collider)
constexpr auto SetIgnore_UnityEngine_Collider_collider__UnityEngine_Collider_trigger__System_Boolean_ignore___True = 9777040; // System.Void SetIgnore(UnityEngine.Collider collider, UnityEngine.Collider trigger, System.Boolean ignore = True)
constexpr auto LateUpdate = 9776192; // System.Void LateUpdate()
constexpr auto _ctor = 3661504; // System.Void .ctor()
}
}
namespace TerrainMeta
{
namespace Fields
{
constexpr auto terrain = 0x18; // UnityEngine.Terrain
constexpr auto config = 0x20; // TerrainConfig
constexpr auto paint = 0x28; // TerrainMeta/PaintMode
constexpr auto currentPaintMode = 0x2c; // TerrainMeta/PaintMode
}
namespace StaticFields
{
constexpr auto _Config_k__BackingField = 0x0; // TerrainConfig
constexpr auto _Terrain_k__BackingField = 0x8; // UnityEngine.Terrain
constexpr auto _Transform_k__BackingField = 0x10; // UnityEngine.Transform
constexpr auto _Position_k__BackingField = 0x18; // UnityEngine.Vector3
constexpr auto _Size_k__BackingField = 0x24; // UnityEngine.Vector3
constexpr auto _OneOverSize_k__BackingField = 0x30; // UnityEngine.Vector3
constexpr auto _HighestPoint_k__BackingField = 0x3c; // UnityEngine.Vector3
constexpr auto _LowestPoint_k__BackingField = 0x48; // UnityEngine.Vector3
constexpr auto _LootAxisAngle_k__BackingField = 0x54; // System.Single
constexpr auto _BiomeAxisAngle_k__BackingField = 0x58; // System.Single
constexpr auto _Data_k__BackingField = 0x60; // UnityEngine.TerrainData
constexpr auto _Collider_k__BackingField = 0x68; // UnityEngine.TerrainCollider
constexpr auto _Collision_k__BackingField = 0x70; // TerrainCollision
constexpr auto _Physics_k__BackingField = 0x78; // TerrainPhysics
constexpr auto _Colors_k__BackingField = 0x80; // TerrainColors
constexpr auto _Quality_k__BackingField = 0x88; // TerrainQuality
constexpr auto _Path_k__BackingField = 0x90; // TerrainPath
constexpr auto _BiomeMap_k__BackingField = 0x98; // TerrainBiomeMap
constexpr auto _AlphaMap_k__BackingField = 0xa0; // TerrainAlphaMap
constexpr auto _BlendMap_k__BackingField = 0xa8; // TerrainBlendMap
constexpr auto _HeightMap_k__BackingField = 0xb0; // TerrainHeightMap
constexpr auto _SplatMap_k__BackingField = 0xb8; // TerrainSplatMap
constexpr auto _TopologyMap_k__BackingField = 0xc0; // TerrainTopologyMap
constexpr auto _WaterMap_k__BackingField = 0xc8; // TerrainWaterMap
constexpr auto _DistanceMap_k__BackingField = 0xd0; // TerrainDistanceMap
constexpr auto _PlacementMap_k__BackingField = 0xd8; // TerrainPlacementMap
constexpr auto _Texturing_k__BackingField = 0xe0; // TerrainTexturing
}
namespace Methods
{
constexpr auto Awake = 9175984; // System.Void Awake()
constexpr auto Init_UnityEngine_Terrain_terrainOverride___null__TerrainConfig_configOverride___null = 9181744; // System.Void Init(UnityEngine.Terrain terrainOverride = null, TerrainConfig configOverride = null)
constexpr auto SetupComponents = 9188960; // System.Void SetupComponents()
constexpr auto PostSetupComponents = 9188368; // System.Void PostSetupComponents()
constexpr auto BindShaderProperties = 9176064; // System.Void BindShaderProperties()
constexpr auto _ctor = 3661504; // System.Void .ctor()
}
namespace StaticMethods
{
constexpr auto get_Config = 9189808; // TerrainConfig get_Config()
constexpr auto set_Config_TerrainConfig_value = 9191824; // System.Void set_Config(TerrainConfig value)
constexpr auto get_Terrain = 9190848; // UnityEngine.Terrain get_Terrain()
constexpr auto set_Terrain_UnityEngine_Terrain_value = 9193168; // System.Void set_Terrain(UnityEngine.Terrain value)
constexpr auto get_Transform = 9191040; // UnityEngine.Transform get_Transform()
constexpr auto set_Transform_UnityEngine_Transform_value = 9193456; // System.Void set_Transform(UnityEngine.Transform value)
constexpr auto get_Position = 9190560; // UnityEngine.Vector3 get_Position()
constexpr auto set_Position_UnityEngine_Vector3_value = 9192816; // System.Void set_Position(UnityEngine.Vector3 value)
constexpr auto get_Size = 9190704; // UnityEngine.Vector3 get_Size()
constexpr auto set_Size_UnityEngine_Vector3_value = 9192992; // System.Void set_Size(UnityEngine.Vector3 value)
constexpr auto get_Center = 9189392; // UnityEngine.Vector3 get_Center()
constexpr auto get_OneOverSize = 9190288; // UnityEngine.Vector3 get_OneOverSize()
constexpr auto set_OneOverSize_UnityEngine_Vector3_value = 9192448; // System.Void set_OneOverSize(UnityEngine.Vector3 value)
constexpr auto get_HighestPoint = 9190064; // UnityEngine.Vector3 get_HighestPoint()
constexpr auto set_HighestPoint_UnityEngine_Vector3_value = 9192208; // System.Void set_HighestPoint(UnityEngine.Vector3 value)
constexpr auto get_LowestPoint = 9190208; // UnityEngine.Vector3 get_LowestPoint()
constexpr auto set_LowestPoint_UnityEngine_Vector3_value = 9192368; // System.Void set_LowestPoint(UnityEngine.Vector3 value)
constexpr auto get_LootAxisAngle = 9190144; // System.Single get_LootAxisAngle()
constexpr auto set_LootAxisAngle_System_Single_value = 9192288; // System.Void set_LootAxisAngle(System.Single value)
constexpr auto get_BiomeAxisAngle = 9189200; // System.Single get_BiomeAxisAngle()
constexpr auto set_BiomeAxisAngle_System_Single_value = 9191264; // System.Void set_BiomeAxisAngle(System.Single value)
constexpr auto get_Data = 9189872; // UnityEngine.TerrainData get_Data()
constexpr auto set_Data_UnityEngine_TerrainData_value = 9191920; // System.Void set_Data(UnityEngine.TerrainData value)
constexpr auto get_Collider = 9189616; // UnityEngine.TerrainCollider get_Collider()
constexpr auto set_Collider_UnityEngine_TerrainCollider_value = 9191536; // System.Void set_Collider(UnityEngine.TerrainCollider value)
constexpr auto get_Collision = 9189680; // TerrainCollision get_Collision()
constexpr auto set_Collision_TerrainCollision_value = 9191632; // System.Void set_Collision(TerrainCollision value)
constexpr auto get_Physics = 9190432; // TerrainPhysics get_Physics()
constexpr auto set_Physics_TerrainPhysics_value = 9192624; // System.Void set_Physics(TerrainPhysics value)
constexpr auto get_Colors = 9189744; // TerrainColors get_Colors()
constexpr auto set_Colors_TerrainColors_value = 9191728; // System.Void set_Colors(TerrainColors value)
constexpr auto get_Quality = 9190640; // TerrainQuality get_Quality()
constexpr auto set_Quality_TerrainQuality_value = 9192896; // System.Void set_Quality(TerrainQuality value)
constexpr auto get_Path = 9190368; // TerrainPath get_Path()
constexpr auto set_Path_TerrainPath_value = 9192528; // System.Void set_Path(TerrainPath value)
constexpr auto get_BiomeMap = 9189264; // TerrainBiomeMap get_BiomeMap()
constexpr auto set_BiomeMap_TerrainBiomeMap_value = 9191344; // System.Void set_BiomeMap(TerrainBiomeMap value)
constexpr auto get_AlphaMap = 9189136; // TerrainAlphaMap get_AlphaMap()
constexpr auto set_AlphaMap_TerrainAlphaMap_value = 9191168; // System.Void set_AlphaMap(TerrainAlphaMap value)
constexpr auto get_BlendMap = 9189328; // TerrainBlendMap get_BlendMap()
constexpr auto set_BlendMap_TerrainBlendMap_value = 9191440; // System.Void set_BlendMap(TerrainBlendMap value)
constexpr auto get_HeightMap = 9190000; // TerrainHeightMap get_HeightMap()
constexpr auto set_HeightMap_TerrainHeightMap_value = 9192112; // System.Void set_HeightMap(TerrainHeightMap value)
constexpr auto get_SplatMap = 9190784; // TerrainSplatMap get_SplatMap()
constexpr auto set_SplatMap_TerrainSplatMap_value = 9193072; // System.Void set_SplatMap(TerrainSplatMap value)
constexpr auto get_TopologyMap = 9190976; // TerrainTopologyMap get_TopologyMap()
constexpr auto set_TopologyMap_TerrainTopologyMap_value = 9193360; // System.Void set_TopologyMap(TerrainTopologyMap value)
constexpr auto get_WaterMap = 9191104; // TerrainWaterMap get_WaterMap()
constexpr auto set_WaterMap_TerrainWaterMap_value = 9193552; // System.Void set_WaterMap(TerrainWaterMap value)
constexpr auto get_DistanceMap = 9189936; // TerrainDistanceMap get_DistanceMap()
constexpr auto set_DistanceMap_TerrainDistanceMap_value = 9192016; // System.Void set_DistanceMap(TerrainDistanceMap value)
constexpr auto get_PlacementMap = 9190496; // TerrainPlacementMap get_PlacementMap()
constexpr auto set_PlacementMap_TerrainPlacementMap_value = 9192720; // System.Void set_PlacementMap(TerrainPlacementMap value)
constexpr auto get_Texturing = 9190912; // TerrainTexturing get_Texturing()
constexpr auto set_Texturing_TerrainTexturing_value = 9193264; // System.Void set_Texturing(TerrainTexturing value)
constexpr auto OutOfBounds_UnityEngine_Vector3_worldPos = 9187216; // System.Boolean OutOfBounds(UnityEngine.Vector3 worldPos)
constexpr auto OutOfMargin_UnityEngine_Vector3_worldPos = 9187680; // System.Boolean OutOfMargin(UnityEngine.Vector3 worldPos)
constexpr auto InnerDistToEdge2D_UnityEngine_Vector3_worldPos = 9185408; // System.Single InnerDistToEdge2D(UnityEngine.Vector3 worldPos)
constexpr auto RandomPointOffshore = 9188512; // UnityEngine.Vector3 RandomPointOffshore()
constexpr auto Normalize_UnityEngine_Vector3_worldPos = 9186720; // UnityEngine.Vector3 Normalize(UnityEngine.Vector3 worldPos)
constexpr auto NormalizeX_System_Single_x = 9186288; // System.Single NormalizeX(System.Single x)
constexpr auto NormalizeY_System_Single_y = 9186432; // System.Single NormalizeY(System.Single y)
constexpr auto NormalizeZ_System_Single_z = 9186576; // System.Single NormalizeZ(System.Single z)
constexpr auto Denormalize_UnityEngine_Vector3_normPos = 9180880; // UnityEngine.Vector3 Denormalize(UnityEngine.Vector3 normPos)
constexpr auto DenormalizeX_System_Single_normX = 9180448; // System.Single DenormalizeX(System.Single normX)
constexpr auto DenormalizeY_System_Single_normY = 9180592; // System.Single DenormalizeY(System.Single normY)
constexpr auto DenormalizeZ_System_Single_normZ = 9180736; // System.Single DenormalizeZ(System.Single normZ)
constexpr auto InitNoTerrain_System_Boolean_createPath___False = 9181328; // System.Void InitNoTerrain(System.Boolean createPath = False)
}
}
namespace TerrainCollision
{
namespace Fields
{
constexpr auto ignoredColliders = 0x30; // ListDictionary`2
constexpr auto terrainCollider = 0x38; // UnityEngine.TerrainCollider
}
namespace Methods
{
constexpr auto Setup = 9149328; // System.Void Setup()
constexpr auto Clear = 9147072; // System.Void Clear()
constexpr auto Reset_UnityEngine_Collider_collider = 9148464; // System.Void Reset(UnityEngine.Collider collider)
constexpr auto GetIgnore_UnityEngine_Vector3_pos__System_Single_radius___0_01 = 9147968; // System.Boolean GetIgnore(UnityEngine.Vector3 pos, System.Single radius = 0.01)
constexpr auto GetIgnore_UnityEngine_RaycastHit_hit = 9147680; // System.Boolean GetIgnore(UnityEngine.RaycastHit hit)
constexpr auto GetIgnore_UnityEngine_Collider_collider = 9147472; // System.Boolean GetIgnore(UnityEngine.Collider collider)
constexpr auto SetIgnore_UnityEngine_Collider_collider__UnityEngine_Collider_trigger__System_Boolean_ignore___True = 9148672; // System.Void SetIgnore(UnityEngine.Collider collider, UnityEngine.Collider trigger, System.Boolean ignore = True)
constexpr auto LateUpdate = 9148112; // System.Void LateUpdate()
constexpr auto _ctor = 3661504; // System.Void .ctor()
}
}
namespace ItemModProjectile
{
namespace Fields
{
constexpr auto projectileObject = 0x18; // GameObjectRef
constexpr auto mods = 0x20; // unknown
constexpr auto ammoType = 0x28; // Rust.AmmoTypes
constexpr auto numProjectiles = 0x2c; // System.Int32
constexpr auto projectileSpread = 0x30; // System.Single
constexpr auto projectileVelocity = 0x34; // System.Single
constexpr auto projectileVelocitySpread = 0x38; // System.Single
constexpr auto useCurve = 0x3c; // System.Boolean
constexpr auto spreadScalar = 0x40; // UnityEngine.AnimationCurve
constexpr auto attackEffectOverride = 0x48; // GameObjectRef
constexpr auto barrelConditionLoss = 0x50; // System.Single
constexpr auto category = 0x58; // System.String
}
namespace Methods
{
constexpr auto GetRandomVelocity = 8953216; // System.Single GetRandomVelocity()
constexpr auto GetSpreadScalar = 8953280; // System.Single GetSpreadScalar()
constexpr auto GetIndexedSpreadScalar_System_Int32_shotIndex__System_Int32_maxShots = 8953072; // System.Single GetIndexedSpreadScalar(System.Int32 shotIndex, System.Int32 maxShots)
constexpr auto GetAverageVelocity = 8953056; // System.Single GetAverageVelocity()
constexpr auto GetMinVelocity = 8953200; // System.Single GetMinVelocity()
constexpr auto GetMaxVelocity = 8953184; // System.Single GetMaxVelocity()
constexpr auto IsAmmo_Rust_AmmoTypes_ammo = 8953376; // System.Boolean IsAmmo(Rust.AmmoTypes ammo)
constexpr auto ServerProjectileHit_HitInfo_info = 8953392; // System.Void ServerProjectileHit(HitInfo info)
constexpr auto _ctor = 8953584; // System.Void .ctor()
}
}
namespace ItemDefinition
{
namespace Fields
{
constexpr auto itemid = 0x18; // System.Int32
constexpr auto shortname = 0x20; // System.String
constexpr auto displayName = 0x28; // Translate/Phrase
constexpr auto displayDescription = 0x30; // Translate/Phrase
constexpr auto iconSprite = 0x38; // UnityEngine.Sprite
constexpr auto category = 0x40; // ItemCategory
constexpr auto selectionPanel = 0x44; // ItemSelectionPanel
constexpr auto maxDraggable = 0x48; // System.Int32
constexpr auto itemType = 0x4c; // ItemContainer/ContentsType
constexpr auto amountType = 0x50; // ItemDefinition/AmountType
constexpr auto occupySlots = 0x54; // ItemSlot
constexpr auto stackable = 0x58; // System.Int32
constexpr auto quickDespawn = 0x5c; // System.Boolean
constexpr auto rarity = 0x60; // Rust.Rarity
constexpr auto despawnRarity = 0x64; // Rust.Rarity
constexpr auto spawnAsBlueprint = 0x68; // System.Boolean
constexpr auto inventoryGrabSound = 0x70; // SoundDefinition
constexpr auto inventoryDropSound = 0x78; // SoundDefinition
constexpr auto physImpactSoundDef = 0x80; // SoundDefinition
constexpr auto condition = 0x88; // ItemDefinition/Condition
constexpr auto hidden = 0xa0; // System.Boolean
constexpr auto flags = 0xa4; // ItemDefinition/Flag
constexpr auto steamItem = 0xa8; // SteamInventoryItem
constexpr auto steamDlc = 0xb0; // SteamDLCItem
constexpr auto Parent = 0xb8; // ItemDefinition
constexpr auto worldModelPrefab = 0xc0; // GameObjectRef
constexpr auto worldModelOverrides = 0xc8; // unknown
constexpr auto isRedirectOf = 0xd0; // ItemDefinition
constexpr auto redirectVendingBehaviour = 0xd8; // ItemDefinition/RedirectVendingBehaviour
constexpr auto itemMods = 0xe0; // unknown
constexpr auto Traits = 0xe8; // BaseEntity/TraitFlag
constexpr auto skins = 0xf0; // unknown
constexpr auto _skins2 = 0xf8; // unknown
constexpr auto panel = 0x100; // UnityEngine.GameObject
constexpr auto _ItemModWearable_k__BackingField = 0x108; // ItemModWearable
constexpr auto _isHoldable_k__BackingField = 0x110; // System.Boolean
constexpr auto _isUsable_k__BackingField = 0x111; // System.Boolean
constexpr auto _CraftableWithSkin_k__BackingField = 0x112; // System.Boolean
constexpr auto Children = 0x118; // unknown
}
namespace Methods
{
constexpr auto get_skins2 = 8851744; // IPlayerItemDefinition[] get_skins2()
constexpr auto InvalidateWorkshopSkinCache = 8851168; // System.Void InvalidateWorkshopSkinCache()
constexpr auto get_Blueprint = 8851424; // ItemBlueprint get_Blueprint()
constexpr auto get_craftingStackable = 8851600; // System.Int32 get_craftingStackable()
constexpr auto HasFlag_ItemDefinition_Flag_f = 8850448; // System.Boolean HasFlag(ItemDefinition/Flag f)
constexpr auto Initialize_System_Collections_Generic_List_1_ItemDefinition__itemList = 8850464; // System.Void Initialize(System.Collections.Generic.List`1<ItemDefinition> itemList)
constexpr auto GetDisplayName_Item_item = 8849936; // System.String GetDisplayName(Item item)
constexpr auto GetDescriptionText_Item_item = 8849680; // System.String GetDescriptionText(Item item)
constexpr auto GetDescriptionText = 8849824; // System.String GetDescriptionText()
constexpr auto FindIconSprite_System_Int32_skinid = 8848880; // UnityEngine.Sprite FindIconSprite(System.Int32 skinid)
constexpr auto get_isWearable = 8851648; // System.Boolean get_isWearable()
constexpr auto get_ItemModWearable = 3702944; // ItemModWearable get_ItemModWearable()
constexpr auto set_ItemModWearable_ItemModWearable_value = 3703616; // System.Void set_ItemModWearable(ItemModWearable value)
constexpr auto get_isHoldable = 8851616; // System.Boolean get_isHoldable()
constexpr auto set_isHoldable_System_Boolean_value = 8852448; // System.Void set_isHoldable(System.Boolean value)
constexpr auto get_isUsable = 8851632; // System.Boolean get_isUsable()
constexpr auto set_isUsable_System_Boolean_value = 8852464; // System.Void set_isUsable(System.Boolean value)
constexpr auto get_HasSkins = 8851504; // System.Boolean get_HasSkins()
constexpr auto get_CraftableWithSkin = 8851488; // System.Boolean get_CraftableWithSkin()
constexpr auto set_CraftableWithSkin_System_Boolean_value = 8852432; // System.Void set_CraftableWithSkin(System.Boolean value)
constexpr auto GetWorldModel_System_Int32_amount = 8850336; // GameObjectRef GetWorldModel(System.Int32 amount)
constexpr auto GetWorldModelIndex_System_Int32_amount = 8850256; // System.Int32 GetWorldModelIndex(System.Int32 amount)
constexpr auto _ctor = 8851312; // System.Void .ctor()
constexpr auto _Initialize_b__47_0_ItemDefinition_x = 8851200; // System.Boolean <Initialize>b__47_0(ItemDefinition x)
}
}
namespace ItemContainer
{
namespace Fields
{
constexpr auto flags = 0x10; // ItemContainer/Flag
constexpr auto allowedContents = 0x14; // ItemContainer/ContentsType
constexpr auto onlyAllowedItems = 0x18; // unknown
constexpr auto availableSlots = 0x20; // System.Collections.Generic.List`1
constexpr auto capacity = 0x28; // System.Int32
constexpr auto uid = 0x30; // ItemContainerId
constexpr auto dirty = 0x38; // System.Boolean
constexpr auto itemList = 0x40; // System.Collections.Generic.List`1
constexpr auto temperature = 0x48; // System.Single
constexpr auto parent = 0x50; // Item
constexpr auto playerOwner = 0x58; // BasePlayer
constexpr auto entityOwner = 0x60; // BaseEntity
constexpr auto isServer = 0x68; // System.Boolean
constexpr auto maxStackSize = 0x6c; // System.Int32
}
namespace Methods
{
constexpr auto HasFlag_ItemContainer_Flag_f = 8841024; // System.Boolean HasFlag(ItemContainer/Flag f)
constexpr auto SetFlag_ItemContainer_Flag_f__System_Boolean_b = 8845616; // System.Void SetFlag(ItemContainer/Flag f, System.Boolean b)
constexpr auto IsLocked = 8841504; // System.Boolean IsLocked()
constexpr auto PlayerItemInputBlocked = 8844560; // System.Boolean PlayerItemInputBlocked()
constexpr auto get_HasLimitedAllowedItems = 8846960; // System.Boolean get_HasLimitedAllowedItems()
constexpr auto OnChanged = 8844400; // System.Void OnChanged()
constexpr auto ClientInitialize_Item_parentItem__System_Int32_iMaxCapacity = 8835584; // System.Void ClientInitialize(Item parentItem, System.Int32 iMaxCapacity)
constexpr auto FindItemByUID_ItemId_iUID = 8837376; // Item FindItemByUID(ItemId iUID)
constexpr auto IsFull = 8841424; // System.Boolean IsFull()
constexpr auto IsEmpty = 8841344; // System.Boolean IsEmpty()
constexpr auto CanAccept_Item_item = 8835280; // System.Boolean CanAccept(Item item)
constexpr auto GetMaxTransferAmount_ItemDefinition_def = 8838496; // System.Int32 GetMaxTransferAmount(ItemDefinition def)
constexpr auto SetOnlyAllowedItem_ItemDefinition_def = 8845648; // System.Void SetOnlyAllowedItem(ItemDefinition def)
constexpr auto SetOnlyAllowedItems_ItemDefinition___defs = 8846160; // System.Void SetOnlyAllowedItems(ItemDefinition[] defs)
constexpr auto Insert_Item_item = 8841040; // System.Boolean Insert(Item item)
constexpr auto SlotTaken_Item_item__System_Int32_i = 8846544; // System.Boolean SlotTaken(Item item, System.Int32 i)
constexpr auto GetSlot_System_Int32_slot = 8839488; // Item GetSlot(System.Int32 slot)
constexpr auto GetNonFullStackWithinRange_Item_def__Vector2i_range = 8838896; // Item GetNonFullStackWithinRange(Item def, Vector2i range)
constexpr auto FindPosition_Item_item = 8837792; // System.Boolean FindPosition(Item item)
constexpr auto Clear = 8835360; // System.Void Clear()
constexpr auto Kill = 8841520; // System.Void Kill()
constexpr auto GetAmount_System_Int32_itemid__System_Boolean_onlyUsableAmounts = 8838128; // System.Int32 GetAmount(System.Int32 itemid, System.Boolean onlyUsableAmounts)
constexpr auto FindItemByItemID_System_Int32_itemid = 8836736; // Item FindItemByItemID(System.Int32 itemid)
constexpr auto FindItemByItemName_System_String_name = 8837072; // Item FindItemByItemName(System.String name)
constexpr auto FindBySubEntityID_NetworkableId_subEntityID = 8836160; // Item FindBySubEntityID(NetworkableId subEntityID)
constexpr auto FindItemsByItemID_System_Int32_itemid = 8837584; // System.Collections.Generic.List`1<Item> FindItemsByItemID(System.Int32 itemid)
constexpr auto Save = 8844576; // ProtoBuf.ItemContainer Save()
constexpr auto Load_ProtoBuf_ItemContainer_container = 8842256; // System.Void Load(ProtoBuf.ItemContainer container)
constexpr auto GetOwnerPlayer = 3901568; // BasePlayer GetOwnerPlayer()
constexpr auto ContainerMaxStackSize = 8835648; // System.Int32 ContainerMaxStackSize()
constexpr auto FindAmmo_System_Collections_Generic_List_1_Item__list__Rust_AmmoTypes_ammoType = 8835968; // System.Void FindAmmo(System.Collections.Generic.List`1<Item> list, Rust.AmmoTypes ammoType)
constexpr auto HasAmmo_Rust_AmmoTypes_ammoType = 8840464; // System.Boolean HasAmmo(Rust.AmmoTypes ammoType)
constexpr auto GetAmmoAmount_Rust_AmmoTypes_ammoType = 8837936; // System.Int32 GetAmmoAmount(Rust.AmmoTypes ammoType)
constexpr auto TotalItemAmount = 8846576; // System.Int32 TotalItemAmount()
constexpr auto GetTotalItemAmount_Item_item__System_Int32_slotStartInclusive__System_Int32_slotEndInclusive = 8839920; // System.Int32 GetTotalItemAmount(Item item, System.Int32 slotStartInclusive, System.Int32 slotEndInclusive)
constexpr auto GetTotalCategoryAmount_ItemCategory_category__System_Int32_slotStartInclusive__System_Int32_slotEndInclusive = 8839680; // System.Int32 GetTotalCategoryAmount(ItemCategory category, System.Int32 slotStartInclusive, System.Int32 slotEndInclusive)
constexpr auto ContentsHash = 8835664; // System.UInt32 ContentsHash()
constexpr auto FindContainer_ItemContainerId_id = 8836512; // ItemContainer FindContainer(ItemContainerId id)
constexpr auto CanAcceptItem_Item_item__System_Int32_targetPos = 8834976; // ItemContainer/CanAcceptResult CanAcceptItem(Item item, System.Int32 targetPos)
constexpr auto HasBackpackItem = 8840656; // System.Boolean HasBackpackItem()
constexpr auto _ctor = 8846736; // System.Void .ctor()
}
}
namespace Item
{
namespace Fields
{
constexpr auto _condition = 0x10; // System.Single
constexpr auto _maxCondition = 0x14; // System.Single
constexpr auto info = 0x18; // ItemDefinition
constexpr auto uid = 0x20; // ItemId
constexpr auto dirty = 0x28; // System.Boolean
constexpr auto amount = 0x2c; // System.Int32
constexpr auto position = 0x30; // System.Int32
constexpr auto busyTime = 0x34; // System.Single
constexpr auto removeTime = 0x38; // System.Single
constexpr auto fuel = 0x3c; // System.Single
constexpr auto isServer = 0x40; // System.Boolean
constexpr auto instanceData = 0x48; // ProtoBuf.Item/InstanceData
constexpr auto skin = 0x50; // System.UInt64
constexpr auto name = 0x58; // System.String
constexpr auto streamerName = 0x60; // System.String
constexpr auto text = 0x68; // System.String
constexpr auto _ammoCount_k__BackingField = 0x70; // System.Nullable`1
constexpr auto cookTimeLeft = 0x78; // System.Single
constexpr auto progressBar = 0x7c; // System.Single
constexpr auto OnDirty = 0x80; // System.Action`1
constexpr auto flags = 0x88; // Item/Flag
constexpr auto contents = 0x90; // ItemContainer
constexpr auto parent = 0x98; // ItemContainer
constexpr auto worldEnt = 0xa0; // EntityRef
constexpr auto heldEntity = 0xb0; // EntityRef
constexpr auto amountOverride = 0xc0; // System.Nullable`1
}
namespace StaticFields
{
constexpr auto DefaultArmourBreakEffectPath = 0x0; // System.String
constexpr auto FormatAmountMemoized = 0x0; // Memoized`2
}
namespace Methods
{
constexpr auto set_condition_System_Single_value = 8874720; // System.Void set_condition(System.Single value)
constexpr auto get_condition = 4439824; // System.Single get_condition()
constexpr auto set_maxCondition_System_Single_value = 8874752; // System.Void set_maxCondition(System.Single value)
constexpr auto get_maxCondition = 8874208; // System.Single get_maxCondition()
constexpr auto get_maxConditionNormalized = 8874160; // System.Single get_maxConditionNormalized()
constexpr auto get_conditionNormalized = 8872992; // System.Single get_conditionNormalized()
constexpr auto set_conditionNormalized_System_Single_value = 8874624; // System.Void set_conditionNormalized(System.Single value)
constexpr auto get_hasCondition = 8873216; // System.Boolean get_hasCondition()
constexpr auto get_isBroken = 8873824; // System.Boolean get_isBroken()
constexpr auto get_ammoCount = 3703168; // System.Nullable`1<System.Int32> get_ammoCount()
constexpr auto set_ammoCount_System_Nullable_1_System_Int32__value = 4685248; // System.Void set_ammoCount(System.Nullable`1<System.Int32> value)
constexpr auto GetName_System_Nullable_1_System_Boolean__streamerModeOverride___null = 8864752; // System.String GetName(System.Nullable`1<System.Boolean> streamerModeOverride = null)
constexpr auto get_despawnMultiplier = 8873056; // System.Int32 get_despawnMultiplier()
constexpr auto get_blueprintTargetDef = 8872944; // ItemDefinition get_blueprintTargetDef()
constexpr auto get_blueprintTarget = 8872976; // System.Int32 get_blueprintTarget()
constexpr auto set_blueprintTarget_System_Int32_value = 8874464; // System.Void set_blueprintTarget(System.Int32 value)
constexpr auto get_blueprintAmount = 4511552; // System.Int32 get_blueprintAmount()
constexpr auto set_blueprintAmount_System_Int32_value = 4511568; // System.Void set_blueprintAmount(System.Int32 value)
constexpr auto IsBlueprint = 8865744; // System.Boolean IsBlueprint()
constexpr auto add_OnDirty_System_Action_1_Item__value = 8872736; // System.Void add_OnDirty(System.Action`1<Item> value)
constexpr auto remove_OnDirty_System_Action_1_Item__value = 8874288; // System.Void remove_OnDirty(System.Action`1<Item> value)
constexpr auto HasFlag_Item_Flag_f = 8865584; // System.Boolean HasFlag(Item/Flag f)
constexpr auto SetFlag_Item_Flag_f__System_Boolean_b = 8868784; // System.Void SetFlag(Item/Flag f, System.Boolean b)
constexpr auto IsOn = 8866240; // System.Boolean IsOn()
constexpr auto IsOnFire = 8866224; // System.Boolean IsOnFire()
constexpr auto IsCooking = 8866160; // System.Boolean IsCooking()
constexpr auto IsLocked = 8866176; // System.Boolean IsLocked()
constexpr auto get_parentItem = 8874224; // Item get_parentItem()
constexpr auto MarkDirty = 8867440; // System.Void MarkDirty()
constexpr auto OnChanged = 8867568; // System.Void OnChanged()
constexpr auto CollectedForCrafting_BasePlayer_crafter = 3694560; // System.Void CollectedForCrafting(BasePlayer crafter)
constexpr auto ReturnedFromCancelledCraft_BasePlayer_crafter = 3694560; // System.Void ReturnedFromCancelledCraft(BasePlayer crafter)
constexpr auto IsChildContainer_ItemContainer_c = 8865824; // System.Boolean IsChildContainer(ItemContainer c)
constexpr auto IsBusy = 8865776; // System.Boolean IsBusy()
constexpr auto BusyFor_System_Single_fTime = 8862384; // System.Void BusyFor(System.Single fTime)
constexpr auto Remove_System_Single_fTime___0 = 8867984; // System.Void Remove(System.Single fTime = 0)
constexpr auto DoRemove = 8863312; // System.Void DoRemove()
constexpr auto SwitchOnOff_System_Boolean_bNewState = 8869136; // System.Void SwitchOnOff(System.Boolean bNewState)
constexpr auto LockUnlock_System_Boolean_bNewState = 8867328; // System.Void LockUnlock(System.Boolean bNewState)
constexpr auto get_temperature = 8874256; // System.Single get_temperature()
constexpr auto GetOwnerPlayer = 8864944; // BasePlayer GetOwnerPlayer()
constexpr auto IsBackpack = 8865600; // System.Boolean IsBackpack()
constexpr auto CanBeHeld = 8862432; // System.Boolean CanBeHeld()
constexpr auto CanStack_Item_item = 8862496; // System.Boolean CanStack(Item item)
constexpr auto IsValid = 8866256; // System.Boolean IsValid()
constexpr auto SetWorldEntity_BaseEntity_ent = 8868816; // System.Void SetWorldEntity(BaseEntity ent)
constexpr auto OnMovedToWorld = 8867856; // System.Void OnMovedToWorld()
constexpr auto GetWorldEntity = 8865120; // BaseEntity GetWorldEntity()
constexpr auto GetHeldEntity = 8864720; // BaseEntity GetHeldEntity()
constexpr auto BeltBarSelect_BasePlayer_player = 8862224; // System.Boolean BeltBarSelect(BasePlayer player)
constexpr auto GetTotalUISlots = 8864976; // System.Int32 GetTotalUISlots()
constexpr auto GetFilledUISlots = 8864576; // System.Int32 GetFilledUISlots()
constexpr auto HasAmmo_Rust_AmmoTypes_ammoType = 8865280; // System.Boolean HasAmmo(Rust.AmmoTypes ammoType)
constexpr auto FindAmmo_System_Collections_Generic_List_1_Item__list__Rust_AmmoTypes_ammoType = 8863408; // System.Void FindAmmo(System.Collections.Generic.List`1<Item> list, Rust.AmmoTypes ammoType)
constexpr auto GetAmmoAmount_Rust_AmmoTypes_ammoType = 8864272; // System.Int32 GetAmmoAmount(Rust.AmmoTypes ammoType)
constexpr auto ToString = 8869232; // System.String ToString()
constexpr auto FindItem_ItemId_iUID = 8863744; // Item FindItem(ItemId iUID)
constexpr auto MaxStackable = 8867504; // System.Int32 MaxStackable()
constexpr auto get_iconSprite = 8873376; // UnityEngine.Sprite get_iconSprite()
constexpr auto get_isLoadingIconSprite = 8873872; // System.Boolean get_isLoadingIconSprite()
constexpr auto get_Traits = 8872912; // BaseEntity/TraitFlag get_Traits()
constexpr auto GetWorldModel = 8865152; // GameObjectRef GetWorldModel()
constexpr auto UpdateAmountDisplay_UnityEngine_UI_Text_text = 8869920; // System.Void UpdateAmountDisplay(UnityEngine.UI.Text text)
constexpr auto Save_System_Boolean_bIncludeContainer___False__System_Boolean_bIncludeOwners___True = 8868080; // ProtoBuf.Item Save(System.Boolean bIncludeContainer = False, System.Boolean bIncludeOwners = True)
constexpr auto Load_ProtoBuf_Item_load = 8866272; // System.Void Load(ProtoBuf.Item load)
constexpr auto _ctor = 8872704; // System.Void .ctor()
constexpr auto _get_iconSprite_b__99_0_ItemSkinDirectory_Skin_x = 8869904; // System.Boolean <get_iconSprite>b__99_0(ItemSkinDirectory/Skin x)
constexpr auto _get_isLoadingIconSprite_b__101_0_ItemSkinDirectory_Skin_x = 8869904; // System.Boolean <get_isLoadingIconSprite>b__101_0(ItemSkinDirectory/Skin x)
}
namespace StaticMethods
{
constexpr auto UpdateAmountDisplay_UnityEngine_UI_Text_text__Item_item__System_Nullable_1_System_Int32__amountOverride___null__ItemDefinition_infoOverride___null = 8870048; // System.Void UpdateAmountDisplay(UnityEngine.UI.Text text, Item item, System.Nullable`1<System.Int32> amountOverride = null, ItemDefinition infoOverride = null)
constexpr auto FormatAmount_ItemDefinition_AmountType_type__System_Int32_amount = 8863840; // System.String FormatAmount(ItemDefinition/AmountType type, System.Int32 amount)
constexpr auto _cctor = 8872416; // System.Void .cctor()
}
}
namespace WaterLevel
{
namespace StaticMethods
{
constexpr auto Factor_UnityEngine_Vector3_start__UnityEngine_Vector3_end__System_Single_radius__System_Boolean_waves__System_Boolean_volumes__BaseEntity_forEntity___null = 8806128; // System.Single Factor(UnityEngine.Vector3 start, UnityEngine.Vector3 end, System.Single radius, System.Boolean waves, System.Boolean volumes, BaseEntity forEntity = null)
constexpr auto Factor_UnityEngine_Bounds_bounds__System_Boolean_waves__System_Boolean_volumes__BaseEntity_forEntity___null = 8805456; // System.Single Factor(UnityEngine.Bounds bounds, System.Boolean waves, System.Boolean volumes, BaseEntity forEntity = null)
constexpr auto Test_UnityEngine_Vector3_pos__System_Boolean_waves__System_Boolean_volumes__BaseEntity_forEntity___null = 8816608; // System.Boolean Test(UnityEngine.Vector3 pos, System.Boolean waves, System.Boolean volumes, BaseEntity forEntity = null)
constexpr auto GetWaterDepth_UnityEngine_Vector3_pos__System_Boolean_waves__System_Boolean_volumes__BaseEntity_forEntity___null = 8808208; // System.Single GetWaterDepth(UnityEngine.Vector3 pos, System.Boolean waves, System.Boolean volumes, BaseEntity forEntity = null)
constexpr auto GetOverallWaterDepth_UnityEngine_Vector3_pos__System_Boolean_waves__System_Boolean_volumes__BaseEntity_forEntity___null__System_Boolean_noEarlyExit___False = 8807872; // System.Single GetOverallWaterDepth(UnityEngine.Vector3 pos, System.Boolean waves, System.Boolean volumes, BaseEntity forEntity = null, System.Boolean noEarlyExit = False)
constexpr auto GetBuoyancyWaterInfo_UnityEngine_Vector3_pos__UnityEngine_Vector2_posUV__System_Single_terrainHeight__System_Single_waterHeight__System_Boolean_doDeepwaterChecks__BaseEntity_forEntity = 8806608; // WaterLevel/WaterInfo GetBuoyancyWaterInfo(UnityEngine.Vector3 pos, UnityEngine.Vector2 posUV, System.Single terrainHeight, System.Single waterHeight, System.Boolean doDeepwaterChecks, BaseEntity forEntity)
constexpr auto GetWaterInfo_UnityEngine_Vector3_pos__System_Boolean_waves__System_Boolean_volumes__BaseEntity_forEntity___null__System_Boolean_noEarlyExit___False = 8813792; // WaterLevel/WaterInfo GetWaterInfo(UnityEngine.Vector3 pos, System.Boolean waves, System.Boolean volumes, BaseEntity forEntity = null, System.Boolean noEarlyExit = False)
constexpr auto GetWaterInfo_UnityEngine_Bounds_bounds__System_Boolean_waves__System_Boolean_volumes__BaseEntity_forEntity___null = 8812704; // WaterLevel/WaterInfo GetWaterInfo(UnityEngine.Bounds bounds, System.Boolean waves, System.Boolean volumes, BaseEntity forEntity = null)
constexpr auto GetWaterInfo_UnityEngine_Vector3_start__UnityEngine_Vector3_end__System_Single_radius__System_Boolean_waves__System_Boolean_volumes__BaseEntity_forEntity___null = 8811232; // WaterLevel/WaterInfo GetWaterInfo(UnityEngine.Vector3 start, UnityEngine.Vector3 end, System.Single radius, System.Boolean waves, System.Boolean volumes, BaseEntity forEntity = null)
constexpr auto GetWaterInfo_UnityEngine_Camera_cam__System_Boolean_waves__System_Boolean_volumes__BaseEntity_forEntity___null__System_Boolean_noEarlyExit___False = 8814960; // WaterLevel/WaterInfo GetWaterInfo(UnityEngine.Camera cam, System.Boolean waves, System.Boolean volumes, BaseEntity forEntity = null, System.Boolean noEarlyExit = False)
constexpr auto GetWaterLevel_UnityEngine_Vector3_pos = 8815728; // System.Single GetWaterLevel(UnityEngine.Vector3 pos)
constexpr auto GetWaterInfoFromVolumes_UnityEngine_Bounds_bounds__BaseEntity_forEntity = 8808528; // WaterLevel/WaterInfo GetWaterInfoFromVolumes(UnityEngine.Bounds bounds, BaseEntity forEntity)
constexpr auto GetWaterInfoFromVolumes_UnityEngine_Vector3_pos__BaseEntity_forEntity = 8809376; // WaterLevel/WaterInfo GetWaterInfoFromVolumes(UnityEngine.Vector3 pos, BaseEntity forEntity)
constexpr auto GetWaterInfoFromVolumes_UnityEngine_Vector3_start__UnityEngine_Vector3_end__System_Single_radius__BaseEntity_forEntity = 8810416; // WaterLevel/WaterInfo GetWaterInfoFromVolumes(UnityEngine.Vector3 start, UnityEngine.Vector3 end, System.Single radius, BaseEntity forEntity)
}
}
namespace HitTest
{
namespace Fields
{
constexpr auto type = 0x10; // HitTest/Type
constexpr auto AttackRay = 0x14; // UnityEngine.Ray
constexpr auto Radius = 0x2c; // System.Single
constexpr auto Forgiveness = 0x30; // System.Single
constexpr auto MaxDistance = 0x34; // System.Single
constexpr auto RayHit = 0x38; // UnityEngine.RaycastHit
constexpr auto MultiHit = 0x64; // System.Boolean
constexpr auto BestHit = 0x65; // System.Boolean
constexpr auto DidHit = 0x66; // System.Boolean
constexpr auto damageProperties = 0x68; // DamageProperties
constexpr auto gameObject = 0x70; // UnityEngine.GameObject
constexpr auto collider = 0x78; // UnityEngine.Collider
constexpr auto ignoreEntity = 0x80; // BaseEntity
constexpr auto HitEntity = 0x88; // BaseEntity
constexpr auto HitPoint = 0x90; // UnityEngine.Vector3
constexpr auto HitNormal = 0x9c; // UnityEngine.Vector3
constexpr auto HitDistance = 0xa8; // System.Single
constexpr auto HitTransform = 0xb0; // UnityEngine.Transform
constexpr auto HitPart = 0xb8; // System.UInt32
constexpr auto HitMaterial = 0xc0; // System.String
}
namespace Methods
{
constexpr auto CopyFrom_HitTest_other__System_Boolean_copyHitInfo___False = 8671344; // System.Void CopyFrom(HitTest other, System.Boolean copyHitInfo = False)
constexpr auto HitPointWorld = 8671968; // UnityEngine.Vector3 HitPointWorld()
constexpr auto HitNormalWorld = 8671696; // UnityEngine.Vector3 HitNormalWorld()
constexpr auto BuildAttackMessage_BaseEntity_attackingEntity = 8668768; // ProtoBuf.Attack BuildAttackMessage(BaseEntity attackingEntity)
constexpr auto Clear = 8671120; // System.Void Clear()
constexpr auto _ctor = 3679632; // System.Void .ctor()
}
}
namespace EnvironmentManager
{
namespace Methods
{
constexpr auto _ctor = 8617008; // System.Void .ctor()
}
namespace StaticMethods
{
constexpr auto Get_OBB_obb = 8615936; // EnvironmentType Get(OBB obb)
constexpr auto Get_UnityEngine_Vector3_pos__System_Collections_Generic_List_1_EnvironmentVolume__list = 8616720; // EnvironmentType Get(UnityEngine.Vector3 pos, System.Collections.Generic.List`1<EnvironmentVolume> list)
constexpr auto Get_UnityEngine_Vector3_pos = 8616352; // EnvironmentType Get(UnityEngine.Vector3 pos)
constexpr auto Check_OBB_obb__EnvironmentType_type = 8615120; // System.Boolean Check(OBB obb, EnvironmentType type)
constexpr auto Check_UnityEngine_Vector3_pos__EnvironmentType_type = 8615552; // System.Boolean Check(UnityEngine.Vector3 pos, EnvironmentType type)
}
}
namespace Bootstrap
{
namespace Fields
{
constexpr auto messageString = 0x18; // System.String
constexpr auto BootstrapUiCanvas = 0x20; // UnityEngine.CanvasGroup
constexpr auto errorPanel = 0x28; // UnityEngine.GameObject
constexpr auto errorText = 0x30; // TMPro.TextMeshProUGUI
constexpr auto statusText = 0x38; // TMPro.TextMeshProUGUI
constexpr auto timeSinceVisible = 0x40; // TimeSince
}
namespace StaticFields
{
constexpr auto bootstrapInitRun = 0x0; // System.Boolean
constexpr auto isErrored = 0x1; // System.Boolean
constexpr auto _engineUi = 0x8; // UnityEngine.GameObject
constexpr auto _gameUi = 0x10; // UnityEngine.GameObject
constexpr auto _menuUi = 0x18; // UnityEngine.GameObject
constexpr auto lastWrittenValue = 0x20; // System.String
}
namespace Methods
{
constexpr auto Start = 8510176; // System.Collections.IEnumerator Start()
constexpr auto ClientStartup = 8503632; // System.Collections.IEnumerator ClientStartup()
constexpr auto Update = 8510560; // System.Void Update()
constexpr auto StartupShared = 8510304; // System.Void StartupShared()
constexpr auto ThrowError_System_String_error = 8510320; // System.Void ThrowError(System.String error)
constexpr auto ExitGame = 8503760; // System.Void ExitGame()
constexpr auto _ctor = 8510832; // System.Void .ctor()
}
namespace StaticMethods
{
constexpr auto get_needsSetup = 8511088; // System.Boolean get_needsSetup()
constexpr auto get_isPresent = 8510928; // System.Boolean get_isPresent()
constexpr auto RunDefaults = 8509360; // System.Void RunDefaults()
constexpr auto Init_Tier0 = 8505856; // System.Void Init_Tier0()
constexpr auto Init_Systems = 8504464; // System.Void Init_Systems()
constexpr auto Init_Config = 8503856; // System.Void Init_Config()
constexpr auto NetworkInitRaknet = 8509168; // System.Void NetworkInitRaknet()
constexpr auto NetworkInitSteamworks_System_Boolean_enableSteamDatagramRelay = 8509264; // System.Void NetworkInitSteamworks(System.Boolean enableSteamDatagramRelay)
constexpr auto LoadEngineUI = 8508656; // UnityEngine.GameObject LoadEngineUI()
constexpr auto LoadGameUI = 8508784; // UnityEngine.GameObject LoadGameUI()
constexpr auto LoadMenuUI = 8508912; // UnityEngine.GameObject LoadMenuUI()
constexpr auto InstantiatePrefabPersistent_System_String_path = 8508368; // UnityEngine.GameObject InstantiatePrefabPersistent(System.String path)
constexpr auto ToggleUIHack = 8510528; // System.Void ToggleUIHack()
constexpr auto SetUIVisible_System_Boolean_visible = 8509712; // System.Void SetUIVisible(System.Boolean visible)
constexpr auto LoadingUpdate_System_String_str = 8509040; // System.Collections.IEnumerator LoadingUpdate(System.String str)
constexpr auto WriteToLog_System_String_str = 8510688; // System.Void WriteToLog(System.String str)
}
}
namespace PlayerWalkMovement
{
namespace Fields
{
constexpr auto zeroFrictionMaterial = 0x58; // UnityEngine.PhysicMaterial
constexpr auto highFrictionMaterial = 0x60; // UnityEngine.PhysicMaterial
constexpr auto capsuleHeight = 0x68; // System.Single
constexpr auto capsuleCenter = 0x6c; // System.Single
constexpr auto capsuleHeightDucked = 0x70; // System.Single
constexpr auto capsuleCenterDucked = 0x74; // System.Single
constexpr auto capsuleHeightCrawling = 0x78; // System.Single
constexpr auto capsuleCenterCrawling = 0x7c; // System.Single
constexpr auto gravityTestRadius = 0x80; // System.Single
constexpr auto gravityMultiplier = 0x84; // System.Single
constexpr auto gravityMultiplierSwimming = 0x88; // System.Single
constexpr auto maxAngleWalking = 0x8c; // System.Single
constexpr auto maxAngleClimbing = 0x90; // System.Single
constexpr auto maxAngleSliding = 0x94; // System.Single
constexpr auto maxStepHeight = 0x98; // System.Single
constexpr auto body = 0xa0; // UnityEngine.Rigidbody
constexpr auto initialColDetectionMode = 0xa8; // UnityEngine.CollisionDetectionMode
constexpr auto capsule = 0xb0; // UnityEngine.CapsuleCollider
constexpr auto ladder = 0xb8; // TriggerLadder
constexpr auto maxVelocity = 0xc0; // System.Single
constexpr auto groundAngle = 0xc4; // System.Single
constexpr auto groundAngleNew = 0xc8; // System.Single
constexpr auto groundTime = 0xcc; // System.Single
constexpr auto jumpTime = 0xd0; // System.Single
constexpr auto landTime = 0xd4; // System.Single
constexpr auto previousPosition = 0xd8; // UnityEngine.Vector3
constexpr auto previousVelocity = 0xe4; // UnityEngine.Vector3
constexpr auto previousInheritedVelocity = 0xf0; // UnityEngine.Vector3
constexpr auto groundNormal = 0xfc; // UnityEngine.Vector3
constexpr auto groundNormalNew = 0x108; // UnityEngine.Vector3
constexpr auto groundVelocity = 0x114; // UnityEngine.Vector3
constexpr auto groundVelocityNew = 0x120; // UnityEngine.Vector3
constexpr auto nextSprintTime = 0x12c; // System.Single
constexpr auto lastSprintTime = 0x130; // System.Single
constexpr auto sprintForced = 0x134; // System.Boolean
constexpr auto attemptedMountTime = 0x138; // TimeSince
constexpr auto modify = 0x13c; // BaseEntity/MovementModify
constexpr auto grounded = 0x140; // System.Boolean
constexpr auto climbing = 0x141; // System.Boolean
constexpr auto sliding = 0x142; // System.Boolean
constexpr auto swimming = 0x143; // System.Boolean
constexpr auto wasSwimming = 0x144; // System.Boolean
constexpr auto jumping = 0x145; // System.Boolean
constexpr auto wasJumping = 0x146; // System.Boolean
constexpr auto falling = 0x147; // System.Boolean
constexpr auto wasFalling = 0x148; // System.Boolean
constexpr auto flying = 0x149; // System.Boolean
constexpr auto wasFlying = 0x14a; // System.Boolean
constexpr auto forcedDuckDelta = 0x14c; // System.Single
}
namespace StaticFields
{
constexpr auto WaterLevelHead = 0x0; // System.Single
constexpr auto WaterLevelNeck = 0x0; // System.Single
}
namespace Methods
{
constexpr auto Awake = 8364880; // System.Void Awake()
constexpr auto GetCollider = 3703088; // UnityEngine.Collider GetCollider()
constexpr auto OnDisable = 8384624; // System.Void OnDisable()
constexpr auto Init_BasePlayer_player = 8374256; // System.Void Init(BasePlayer player)
constexpr auto OnCollisionEnter_UnityEngine_Collision_collision = 8384240; // System.Void OnCollisionEnter(UnityEngine.Collision collision)
constexpr auto OnCollisionStay_UnityEngine_Collision_collision = 8384432; // System.Void OnCollisionStay(UnityEngine.Collision collision)
constexpr auto GroundCheck_UnityEngine_Collision_collision = 8372352; // System.Void GroundCheck(UnityEngine.Collision collision)
constexpr auto TeleportTo_UnityEngine_Vector3_position__BasePlayer_player = 8386160; // System.Void TeleportTo(UnityEngine.Vector3 position, BasePlayer player)
constexpr auto UpdateCurrentLadder_InputState_input__System_Boolean_force___False = 8386944; // System.Void UpdateCurrentLadder(InputState input, System.Boolean force = False)
constexpr auto ClientInput_InputState_input__ModelState_modelState = 8365648; // System.Void ClientInput(InputState input, ModelState modelState)
constexpr auto Movement_Water_InputState_input__ModelState_modelState = 8381296; // System.Void Movement_Water(InputState input, ModelState modelState)
constexpr auto Movement_Mounted_InputState_input__ModelState_modelState = 8377392; // System.Void Movement_Mounted(InputState input, ModelState modelState)
constexpr auto Movement_Ladder_InputState_input__ModelState_modelState = 8375680; // System.Void Movement_Ladder(InputState input, ModelState modelState)
constexpr auto Movement_Noclip_InputState_input__ModelState_modelState = 8377632; // System.Void Movement_Noclip(InputState input, ModelState modelState)
constexpr auto Movement_Walking_InputState_input__ModelState_modelState = 8379008; // System.Void Movement_Walking(InputState input, ModelState modelState)
constexpr auto GetHeldEntityMovementMultiplier = 8372176; // System.Single GetHeldEntityMovementMultiplier()
constexpr auto HandleGrounded_ModelState_state__System_Boolean_wantsGrounded = 8373056; // System.Void HandleGrounded(ModelState state, System.Boolean wantsGrounded)
constexpr auto HandleRunDuckCrawl_ModelState_state__System_Boolean_wantsRun__System_Boolean_wantsDuck__System_Boolean_wantsCrawl = 8373440; // System.Void HandleRunDuckCrawl(ModelState state, System.Boolean wantsRun, System.Boolean wantsDuck, System.Boolean wantsCrawl)
constexpr auto GetForcedDuck = 8371936; // System.Single GetForcedDuck()
constexpr auto HandleJumping_ModelState_state__System_Boolean_wantsJump__System_Boolean_jumpInDirection___False = 8373136; // System.Void HandleJumping(ModelState state, System.Boolean wantsJump, System.Boolean jumpInDirection = False)
constexpr auto CanJump = 8365264; // System.Boolean CanJump()
constexpr auto BlockJump_System_Single_duration = 8365120; // System.Void BlockJump(System.Single duration)
constexpr auto BlockSprint_System_Single_duration = 8365184; // System.Void BlockSprint(System.Single duration)
constexpr auto SetKinematic_System_Boolean_kinematic = 8385632; // System.Void SetKinematic(System.Boolean kinematic)
constexpr auto ApplyForce_UnityEngine_Vector3_force = 8364816; // System.Void ApplyForce(UnityEngine.Vector3 force)
constexpr auto CanSprint = 8365536; // System.Boolean CanSprint()
constexpr auto Jump_ModelState_state__System_Boolean_inDirection = 8374720; // System.Void Jump(ModelState state, System.Boolean inDirection)
constexpr auto DoFixedUpdate_ModelState_modelState = 8366576; // System.Void DoFixedUpdate(ModelState modelState)
constexpr auto DoStepUp = 8368512; // System.Void DoStepUp()
constexpr auto UpdateVelocity = 8388288; // System.Void UpdateVelocity()
constexpr auto UpdateGravity_ModelState_modelState = 8387392; // System.Void UpdateGravity(ModelState modelState)
constexpr auto FrameUpdate_BasePlayer_player__ModelState_state = 8370688; // System.Void FrameUpdate(BasePlayer player, ModelState state)
constexpr auto TransformState_UnityEngine_Matrix4x4_matrix = 8386512; // System.Void TransformState(UnityEngine.Matrix4x4 matrix)
constexpr auto SetParent_UnityEngine_Transform_parent = 8385680; // System.Void SetParent(UnityEngine.Transform parent)
constexpr auto FallVelocity = 8370608; // UnityEngine.Vector3 FallVelocity()
constexpr auto CurrentVelocity = 8366512; // UnityEngine.Vector3 CurrentVelocity()
constexpr auto CurrentMoveSpeed = 8366432; // System.Single CurrentMoveSpeed()
constexpr auto PlayerAttemptedMount = 8385552; // System.Void PlayerAttemptedMount()
constexpr auto PlayerCompletedMount = 8385584; // System.Void PlayerCompletedMount()
constexpr auto _ctor = 8391040; // System.Void .ctor()
}
namespace StaticMethods
{
constexpr auto WantsSprint_InputState_input = 8390896; // System.Boolean WantsSprint(InputState input)
}
}
namespace BaseMovement
{
namespace Fields
{
constexpr auto adminCheat = 0x18; // System.Boolean
constexpr auto adminSpeed = 0x1c; // System.Single
constexpr auto _Owner_k__BackingField = 0x20; // BasePlayer
constexpr auto _InheritedVelocity_k__BackingField = 0x28; // UnityEngine.Vector3
constexpr auto _TargetMovement_k__BackingField = 0x34; // UnityEngine.Vector3
constexpr auto _Running_k__BackingField = 0x40; // System.Single
constexpr auto _Ducking_k__BackingField = 0x44; // System.Single
constexpr auto _Crawling_k__BackingField = 0x48; // System.Single
constexpr auto _Grounded_k__BackingField = 0x4c; // System.Single
constexpr auto lastTeleportedTime = 0x50; // System.Single
}
namespace StaticFields
{
constexpr auto RECENTLY_TELEPORTED_TIME = 0x0; // System.Single
}
namespace Methods
{
constexpr auto get_Owner = 3687024; // BasePlayer get_Owner()
constexpr auto set_Owner_BasePlayer_value = 3841904; // System.Void set_Owner(BasePlayer value)
constexpr auto get_InheritedVelocity = 7288528; // UnityEngine.Vector3 get_InheritedVelocity()
constexpr auto set_InheritedVelocity_UnityEngine_Vector3_value = 8318384; // System.Void set_InheritedVelocity(UnityEngine.Vector3 value)
constexpr auto get_TargetMovement = 8318352; // UnityEngine.Vector3 get_TargetMovement()
constexpr auto set_TargetMovement_UnityEngine_Vector3_value = 8318400; // System.Void set_TargetMovement(UnityEngine.Vector3 value)
constexpr auto get_Running = 7860656; // System.Single get_Running()
constexpr auto set_Running_System_Single_value = 7860672; // System.Void set_Running(System.Single value)
constexpr auto get_Ducking = 7952288; // System.Single get_Ducking()
constexpr auto set_Ducking_System_Single_value = 7952304; // System.Void set_Ducking(System.Single value)
constexpr auto get_Crawling = 8318224; // System.Single get_Crawling()
constexpr auto set_Crawling_System_Single_value = 3882000; // System.Void set_Crawling(System.Single value)
constexpr auto get_Grounded = 7730880; // System.Single get_Grounded()
constexpr auto set_Grounded_System_Single_value = 3882128; // System.Void set_Grounded(System.Single value)
constexpr auto get_IsRunning = 8318288; // System.Boolean get_IsRunning()
constexpr auto get_IsDucked = 8318256; // System.Boolean get_IsDucked()
constexpr auto get_IsCrawling = 8318240; // System.Boolean get_IsCrawling()
constexpr auto get_IsGrounded = 8318272; // System.Boolean get_IsGrounded()
constexpr auto CurrentVelocity = 6249488; // UnityEngine.Vector3 CurrentVelocity()
constexpr auto CurrentMoveSpeed = 5805664; // System.Single CurrentMoveSpeed()
constexpr auto GetCollider = 3810400; // UnityEngine.Collider GetCollider()
constexpr auto Init_BasePlayer_player = 3841904; // System.Void Init(BasePlayer player)
constexpr auto BlockJump_System_Single_duration = 3694560; // System.Void BlockJump(System.Single duration)
constexpr auto BlockSprint_System_Single_duration = 3694560; // System.Void BlockSprint(System.Single duration)
constexpr auto get_RecentlyTeleported = 8318304; // System.Boolean get_RecentlyTeleported()
constexpr auto ClientInput_InputState_state__ModelState_modelState = 3694560; // System.Void ClientInput(InputState state, ModelState modelState)
constexpr auto DoFixedUpdate_ModelState_modelState = 3694560; // System.Void DoFixedUpdate(ModelState modelState)
constexpr auto FrameUpdate_BasePlayer_player__ModelState_modelState = 8317808; // System.Void FrameUpdate(BasePlayer player, ModelState modelState)
constexpr auto TeleportTo_UnityEngine_Vector3_position__BasePlayer_player = 8318048; // System.Void TeleportTo(UnityEngine.Vector3 position, BasePlayer player)
constexpr auto Push_UnityEngine_Vector3_velocity = 3694560; // System.Void Push(UnityEngine.Vector3 velocity)
constexpr auto SetParent_UnityEngine_Transform_parent = 3694560; // System.Void SetParent(UnityEngine.Transform parent)
constexpr auto FixedUpdate = 8317680; // System.Void FixedUpdate()
constexpr auto PlayerAttemptedMount = 3694560; // System.Void PlayerAttemptedMount()
constexpr auto PlayerCompletedMount = 3694560; // System.Void PlayerCompletedMount()
constexpr auto _ctor = 8318208; // System.Void .ctor()
}
}
namespace LocalPlayer
{
namespace StaticFields
{
constexpr auto _Entity_k__BackingField = 0x0; // BasePlayer
constexpr auto _LastAttackerSteamID_k__BackingField = 0x8; // System.UInt64
constexpr auto _LastAttackerName_k__BackingField = 0x10; // System.String
constexpr auto LastDeathTime = 0x18; // System.Single
constexpr auto CurrentPetCommandDesc = 0x20; // PetCommandList/PetCommandDesc
constexpr auto CraftCounts = 0x50; // System.Collections.Generic.Dictionary`2
constexpr auto ItemBluePrintOrdered = 0x58; // LocalPlayer/ItemBlueprintComparer
}
namespace StaticMethods
{
constexpr auto get_Entity = 8349840; // BasePlayer get_Entity()
constexpr auto set_Entity_BasePlayer_value = 8351984; // System.Void set_Entity(BasePlayer value)
constexpr auto get_LastAttackerSteamID = 8350000; // System.UInt64 get_LastAttackerSteamID()
constexpr auto set_LastAttackerSteamID_System_UInt64_value = 8352208; // System.Void set_LastAttackerSteamID(System.UInt64 value)
constexpr auto get_LastAttackerName = 8349920; // System.String get_LastAttackerName()
constexpr auto set_LastAttackerName_System_String_value = 8352096; // System.Void set_LastAttackerName(System.String value)
constexpr auto get_TimeSinceLastDeath = 8351104; // System.Single get_TimeSinceLastDeath()
constexpr auto EndLooting = 8342240; // System.Void EndLooting()
constexpr auto GetContainer_PlayerInventory_Type_type = 8343136; // ItemContainer GetContainer(PlayerInventory/Type type)
constexpr auto GetLootContainer_System_Int32_i = 8344672; // ItemContainer GetLootContainer(System.Int32 i)
constexpr auto OnInventoryChanged = 8348752; // System.Void OnInventoryChanged()
constexpr auto OnItemAmountChanged = 8349104; // System.Void OnItemAmountChanged()
constexpr auto HasUnlocked_ItemDefinition_targetItem = 8346688; // System.Boolean HasUnlocked(ItemDefinition targetItem)
constexpr auto GetCraftLevel = 8343664; // System.Single GetCraftLevel()
constexpr auto HasCraftLevel_System_Int32_levelReq = 8345200; // System.Boolean HasCraftLevel(System.Int32 levelReq)
constexpr auto MoveItem_ItemId_itemid__ItemContainerId_targetContainer__System_Int32_targetSlot__System_Int32_amount__System_Boolean_altMove___False = 8348384; // System.Void MoveItem(ItemId itemid, ItemContainerId targetContainer, System.Int32 targetSlot, System.Int32 amount, System.Boolean altMove = False)
constexpr auto DropItemStack_ItemId_itemid = 8341664; // System.Void DropItemStack(ItemId itemid)
constexpr auto DropItem_ItemId_itemid__System_Int32_count = 8342112; // System.Void DropItem(ItemId itemid, System.Int32 count)
constexpr auto ItemCommand_ItemId_itemid__System_String_command = 8347056; // System.Void ItemCommand(ItemId itemid, System.String command)
constexpr auto System_Void_LocalPlayer_ItemCommandEx_System_Int32__ItemId_itemid__System_String_command__T1_arg1 = 18759920; // System.Void LocalPlayer.ItemCommandEx<System.Int32>
constexpr auto get_isSleeping = 8351728; // System.Boolean get_isSleeping()
constexpr auto get_isAdmin = 8351216; // System.Boolean get_isAdmin()
constexpr auto get_isDeveloper = 8351472; // System.Boolean get_isDeveloper()
constexpr auto FindAmmo_System_Collections_Generic_List_1_Item__list__Rust_AmmoTypes_ammo = 8342800; // System.Void FindAmmo(System.Collections.Generic.List`1<Item> list, Rust.AmmoTypes ammo)
constexpr auto ModifyCamera_BasePlayer_CameraMode_cameraMode = 8347888; // System.Void ModifyCamera(BasePlayer/CameraMode cameraMode)
constexpr auto HasItems_System_Collections_Generic_List_1_ItemAmount__list__System_Int32_amount___1 = 8346160; // System.Boolean HasItems(System.Collections.Generic.List`1<ItemAmount> list, System.Int32 amount = 1)
constexpr auto GetItemAmount_ItemDefinition_item = 8344208; // System.Int32 GetItemAmount(ItemDefinition item)
constexpr auto BuildItemRequiredString_System_Collections_Generic_List_1_ItemAmount__list = 8339968; // System.String BuildItemRequiredString(System.Collections.Generic.List`1<ItemAmount> list)
constexpr auto HasInventoryItem_System_Int32_id = 8345296; // System.Boolean HasInventoryItem(System.Int32 id)
constexpr auto ResetCraftCounts = 8349168; // System.Void ResetCraftCounts()
constexpr auto ListCraftCounts = 8347440; // System.Void ListCraftCounts()
constexpr auto GetCraftCount_ItemBlueprint_x = 8343296; // System.Int32 GetCraftCount(ItemBlueprint x)
constexpr auto AddCraftCount_ItemBlueprint_x = 8339728; // System.Void AddCraftCount(ItemBlueprint x)
constexpr auto get_LocalOrSpectatePlayer = 8350080; // BasePlayer get_LocalOrSpectatePlayer()
constexpr auto get_SpectatePlayer = 8350320; // BasePlayer get_SpectatePlayer()
constexpr auto _cctor = 8349568; // System.Void .cctor()
}
}
namespace PlayerModel
{
namespace Fields
{
constexpr auto collision = 0x18; // UnityEngine.BoxCollider
constexpr auto censorshipCube = 0x20; // UnityEngine.GameObject
constexpr auto censorshipCubeBreasts = 0x28; // UnityEngine.GameObject
constexpr auto jawBone = 0x30; // UnityEngine.GameObject
constexpr auto neckBone = 0x38; // UnityEngine.GameObject
constexpr auto headBone = 0x40; // UnityEngine.GameObject
constexpr auto eyeController = 0x48; // EyeController
constexpr auto blinkController = 0x50; // EyeBlink
constexpr auto SpineBones = 0x58; // unknown
constexpr auto leftFootBone = 0x60; // UnityEngine.Transform
constexpr auto rightFootBone = 0x68; // UnityEngine.Transform
constexpr auto leftHandPropBone = 0x70; // UnityEngine.Transform
constexpr auto rightHandPropBone = 0x78; // UnityEngine.Transform
constexpr auto rightHandTarget = 0x80; // UnityEngine.Vector3
constexpr auto leftHandTargetPosition = 0x8c; // UnityEngine.Vector3
constexpr auto leftHandTargetRotation = 0x98; // UnityEngine.Quaternion
constexpr auto rightHandTargetPosition = 0xa8; // UnityEngine.Vector3
constexpr auto rightHandTargetRotation = 0xb4; // UnityEngine.Quaternion
constexpr auto steeringTargetDegrees = 0xc4; // System.Single
constexpr auto rightFootTargetPosition = 0xc8; // UnityEngine.Vector3
constexpr auto rightFootTargetRotation = 0xd4; // UnityEngine.Quaternion
constexpr auto leftFootTargetPosition = 0xe4; // UnityEngine.Vector3
constexpr auto leftFootTargetRotation = 0xf0; // UnityEngine.Quaternion
constexpr auto CinematicAnimationController = 0x100; // UnityEngine.RuntimeAnimatorController
constexpr auto DefaultAvatar = 0x108; // UnityEngine.Avatar
constexpr auto CinematicAvatar = 0x110; // UnityEngine.Avatar
constexpr auto DefaultHoldType = 0x118; // UnityEngine.RuntimeAnimatorController
constexpr auto SleepGesture = 0x120; // UnityEngine.RuntimeAnimatorController
constexpr auto CrawlToIncapacitatedGesture = 0x128; // UnityEngine.RuntimeAnimatorController
constexpr auto StandToIncapacitatedGesture = 0x130; // UnityEngine.RuntimeAnimatorController
constexpr auto CurrentGesture = 0x138; // UnityEngine.RuntimeAnimatorController
constexpr auto MaleSkin = 0x140; // SkinSetCollection
constexpr auto FemaleSkin = 0x148; // SkinSetCollection
constexpr auto subsurfaceProfile = 0x150; // SubsurfaceProfile
constexpr auto voiceVolume = 0x158; // System.Single
constexpr auto skinColor = 0x15c; // System.Single
constexpr auto skinNumber = 0x160; // System.Single
constexpr auto meshNumber = 0x164; // System.Single
constexpr auto hairNumber = 0x168; // System.Single
constexpr auto skinType = 0x16c; // System.Int32
constexpr auto movementSounds = 0x170; // MovementSounds
constexpr auto showSash = 0x178; // System.Boolean
constexpr auto tempPoseType = 0x17c; // System.Int32
constexpr auto underwearSkin = 0x180; // System.UInt32
constexpr auto _overrideSkinSeed_k__BackingField = 0x188; // System.UInt64
constexpr auto _AimAngles_k__BackingField = 0x190; // UnityEngine.Quaternion
constexpr auto _LookAngles_k__BackingField = 0x1a0; // UnityEngine.Quaternion
constexpr auto modelState = 0x1b0; // ModelState
constexpr auto position = 0x1b8; // UnityEngine.Vector3
constexpr auto velocity = 0x1c4; // UnityEngine.Vector3
constexpr auto speedOverride = 0x1d0; // UnityEngine.Vector3
constexpr auto newVelocity = 0x1dc; // UnityEngine.Vector3
constexpr auto rotation = 0x1e8; // UnityEngine.Quaternion
constexpr auto mountedRotation = 0x1f8; // UnityEngine.Quaternion
constexpr auto fallingTime = 0x208; // System.Single
constexpr auto smoothLeftFootIK = 0x20c; // UnityEngine.Vector3
constexpr auto smoothRightFootIK = 0x218; // UnityEngine.Vector3
constexpr auto drawShadowOnly = 0x224; // System.Boolean
constexpr auto isIncapacitated = 0x225; // System.Boolean
constexpr auto flinchLocation = 0x228; // System.UInt32
constexpr auto visible = 0x22c; // System.Boolean
constexpr auto nameTag = 0x230; // PlayerNameTag
constexpr auto animatorNeedsWarmup = 0x238; // System.Boolean
constexpr auto isLocalPlayer = 0x239; // System.Boolean
constexpr auto aimSoundDef = 0x240; // SoundDefinition
constexpr auto aimEndSoundDef = 0x248; // SoundDefinition
constexpr auto InGesture = 0x250; // System.Boolean
constexpr auto CurrentGestureConfig = 0x258; // GestureConfig
constexpr auto InCinematic = 0x260; // System.Boolean
constexpr auto defaultAnimatorController = 0x268; // UnityEngine.RuntimeAnimatorController
constexpr auto _multiMesh = 0x270; // SkinnedMultiMesh
constexpr auto _animator = 0x278; // UnityEngine.Animator
constexpr auto _lodGroup = 0x280; // UnityEngine.LODGroup
constexpr auto _currentGesture = 0x288; // UnityEngine.RuntimeAnimatorController
constexpr auto holdTypeLock = 0x290; // System.Single
constexpr auto hasHeldEntity = 0x294; // System.Boolean
constexpr auto wasMountedRightAim = 0x295; // System.Boolean
constexpr auto cachedMask = 0x298; // System.Int32
constexpr auto cachedConstructionMask = 0x29c; // System.Int32
constexpr auto WorkshopHeldEntity = 0x2a0; // HeldEntity
constexpr auto wasCrawling = 0x2a8; // System.Boolean
constexpr auto mountedSpineLookWeight = 0x2ac; // System.Single
constexpr auto mountedAnimSpeed = 0x2b0; // System.Single
constexpr auto preserveBones = 0x2b4; // System.Boolean
constexpr auto downLimitOverride = 0x2b8; // System.Nullable`1
constexpr auto blendShapeControllers = 0x2c0; // System.Collections.Generic.List`1
constexpr auto _IsNpc_k__BackingField = 0x2c8; // System.Boolean
constexpr auto timeSinceReactionStart = 0x2cc; // TimeSince
constexpr auto timeSinceLeftFootTest = 0x2d0; // TimeSince
constexpr auto cachedLeftFootPos = 0x2d4; // UnityEngine.Vector3
constexpr auto cachedLeftFootNormal = 0x2e0; // UnityEngine.Vector3
constexpr auto timeSinceRightFootTest = 0x2ec; // TimeSince
constexpr auto cachedRightFootPos = 0x2f0; // UnityEngine.Vector3
constexpr auto cachedRightFootNormal = 0x2fc; // UnityEngine.Vector3
constexpr auto _smoothAimWeight = 0x308; // System.Single
constexpr auto _smoothVelocity = 0x30c; // System.Single
constexpr auto _smoothlookAngle = 0x310; // UnityEngine.Vector3
constexpr auto allowMountedHeadLook = 0x31c; // System.Boolean
constexpr auto overrideLeftHandIkWeight = 0x320; // System.Single
constexpr auto overrideRightHandIkWeight = 0x324; // System.Single
constexpr auto smoothLookDir = 0x328; // UnityEngine.Vector3
constexpr auto lastSafeLookDir = 0x334; // UnityEngine.Vector3
constexpr auto Shoulders = 0x340; // unknown
constexpr auto AdditionalSpineBones = 0x348; // unknown
constexpr auto LegParts = 0x350; // System.Collections.Generic.List`1
constexpr auto fakeSpineBones = 0x358; // unknown
constexpr auto extraLeanBack = 0x360; // System.Single
constexpr auto drawState = 0x364; // System.Nullable`1
constexpr auto timeInArmsMode = 0x368; // System.Single
}
namespace StaticFields
{
constexpr auto speed = 0x0; // System.Int32
constexpr auto acceleration = 0x4; // System.Int32
constexpr auto rotationYaw = 0x8; // System.Int32
constexpr auto forward = 0xc; // System.Int32
constexpr auto right = 0x10; // System.Int32
constexpr auto up = 0x14; // System.Int32
constexpr auto ducked = 0x18; // System.Int32
constexpr auto grounded = 0x1c; // System.Int32
constexpr auto crawling = 0x20; // System.Int32
constexpr auto waterlevel = 0x24; // System.Int32
constexpr auto attack = 0x28; // System.Int32
constexpr auto attack_alt = 0x2c; // System.Int32
constexpr auto deploy = 0x30; // System.Int32
constexpr auto turnOn = 0x34; // System.Int32
constexpr auto turnOff = 0x38; // System.Int32
constexpr auto reload = 0x3c; // System.Int32
constexpr auto throwWeapon = 0x40; // System.Int32
constexpr auto holster = 0x44; // System.Int32
constexpr auto aiming = 0x48; // System.Int32
constexpr auto onLadder = 0x4c; // System.Int32
constexpr auto posing = 0x50; // System.Int32
constexpr auto poseType = 0x54; // System.Int32
constexpr auto relaxGunPose = 0x58; // System.Int32
constexpr auto vehicle_aim_yaw = 0x5c; // System.Int32
constexpr auto vehicle_aim_speed = 0x60; // System.Int32
constexpr auto usePoseTransition = 0x64; // System.Int32
constexpr auto onPhone = 0x68; // System.Int32
constexpr auto leftFootIK = 0x6c; // System.Int32
constexpr auto rightFootIK = 0x70; // System.Int32
constexpr auto vehicleSteering = 0x74; // System.Int32
constexpr auto sitReaction = 0x78; // System.Int32
constexpr auto forwardReaction = 0x7c; // System.Int32
constexpr auto rightReaction = 0x80; // System.Int32
constexpr auto ladderType = 0x84; // System.Int32
constexpr auto hasParachute = 0x88; // System.Int32
constexpr auto nonGroundedTime = 0x8c; // System.Int32
constexpr auto deployParachuteTrigger = 0x90; // System.Int32
constexpr auto LayerHands = 0x0; // System.Int32
constexpr auto LayerGestures = 0x0; // System.Int32
constexpr auto LayerPlayerGesturesUpperBody = 0x0; // System.Int32
constexpr auto LayerPlayerGesturesFullBody = 0x0; // System.Int32
constexpr auto LayerReactions = 0x0; // System.Int32
constexpr auto pm_uplimit = 0x94; // System.Single
constexpr auto pm_downlimit = 0x98; // System.Single
constexpr auto pm_upspine = 0x9c; // System.Single
constexpr auto pm_downspine = 0xa0; // System.Single
constexpr auto pm_lookoffset = 0xa4; // UnityEngine.Vector3
constexpr auto pm_anglesmoothspeed = 0xb0; // System.Single
constexpr auto pm_nohold = 0xb4; // System.Single
constexpr auto pm_ladder = 0xb8; // System.Single
constexpr auto pm_minweight = 0xbc; // System.Single
constexpr auto FinishedLegWearables = 0xc0; // System.Collections.Generic.HashSet`1
}
namespace Methods
{
constexpr auto get_overrideSkinSeed = 3703248; // System.UInt64 get_overrideSkinSeed()
constexpr auto set_overrideSkinSeed_System_UInt64_value = 8290160; // System.Void set_overrideSkinSeed(System.UInt64 value)
constexpr auto get_IsFemale = 8289168; // System.Boolean get_IsFemale()
constexpr auto get_SkinSet = 8289552; // SkinSetCollection get_SkinSet()
constexpr auto get_AimAngles = 8288864; // UnityEngine.Quaternion get_AimAngles()
constexpr auto set_AimAngles_UnityEngine_Quaternion_value = 8290112; // System.Void set_AimAngles(UnityEngine.Quaternion value)
constexpr auto get_LookAngles = 8289232; // UnityEngine.Quaternion get_LookAngles()
constexpr auto set_LookAngles_UnityEngine_Quaternion_value = 8290144; // System.Void set_LookAngles(UnityEngine.Quaternion value)
constexpr auto get_GestureAllowsSpineMovement = 8289024; // System.Boolean get_GestureAllowsSpineMovement()
constexpr auto get_GestureAllowsRootMotion = 8288880; // System.Boolean get_GestureAllowsRootMotion()
constexpr auto get_IsFirstPerson = 8289184; // System.Boolean get_IsFirstPerson()
constexpr auto get_IsNpc = 8289216; // System.Boolean get_IsNpc()
constexpr auto set_IsNpc_System_Boolean_value = 8290128; // System.Void set_IsNpc(System.Boolean value)
constexpr auto get_multiMesh = 8289936; // SkinnedMultiMesh get_multiMesh()
constexpr auto get_animator = 8289584; // UnityEngine.Animator get_animator()
constexpr auto get_lodGroup = 8289760; // UnityEngine.LODGroup get_lodGroup()
constexpr auto GetTargetVelocity = 8240160; // UnityEngine.Vector3 GetTargetVelocity()
constexpr auto Awake = 8223344; // System.Void Awake()
constexpr auto OnEnable = 8249504; // System.Void OnEnable()
constexpr auto OnDisable = 8248688; // System.Void OnDisable()
constexpr auto SetDefaultAnimatorWeights = 8258976; // System.Void SetDefaultAnimatorWeights()
constexpr auto UpdateMultiMesh_System_Boolean_reset = 8276960; // System.Void UpdateMultiMesh(System.Boolean reset)
constexpr auto UpdateCensorship = 8269408; // System.Void UpdateCensorship()
constexpr auto UpdateCollider_System_Boolean_visible__System_Boolean_sleeping__System_Boolean_ducking__System_Boolean_crawling__System_Boolean_incapacitated = 8270560; // System.Void UpdateCollider(System.Boolean visible, System.Boolean sleeping, System.Boolean ducking, System.Boolean crawling, System.Boolean incapacitated)
constexpr auto UpdateModelState_ModelState_ms = 8276880; // System.Void UpdateModelState(ModelState ms)
constexpr auto UpdatePosition = 8279744; // System.Void UpdatePosition()
constexpr auto UpdateRotation = 8279968; // System.Void UpdateRotation()
constexpr auto UpdateLocalVelocity_UnityEngine_Vector3_velocity__UnityEngine_Transform_parent = 8276688; // System.Void UpdateLocalVelocity(UnityEngine.Vector3 velocity, UnityEngine.Transform parent)
constexpr auto UpdateVelocity = 8282480; // System.Void UpdateVelocity()
constexpr auto UpdateParameters = 8277392; // System.Void UpdateParameters()
constexpr auto GetCurrentForwardAnimatorParam = 8237376; // System.Single GetCurrentForwardAnimatorParam()
constexpr auto GetCurrentRightAnimatorParam = 8237504; // System.Single GetCurrentRightAnimatorParam()
constexpr auto UpdateFrom_PlayerModel_mdl = 8270976; // System.Void UpdateFrom(PlayerModel mdl)
constexpr auto UpdateGlobalShaderConstants = 8271072; // System.Void UpdateGlobalShaderConstants()
constexpr auto SetBlendShapesMode_BlendShapeController_BlendMode_mode = 8258640; // System.Void SetBlendShapesMode(BlendShapeController/BlendMode mode)
constexpr auto GetCurrentBlendShapeMode = 8237200; // BlendShapeController/BlendMode GetCurrentBlendShapeMode()
constexpr auto LateCycle = 8245392; // System.Void LateCycle()
constexpr auto OverrideBounds_UnityEngine_Bounds_b = 8251552; // System.Void OverrideBounds(UnityEngine.Bounds b)
constexpr auto ClearOverrideBounds = 8223920; // System.Void ClearOverrideBounds()
constexpr auto FrameUpdate = 8234272; // System.Void FrameUpdate()
constexpr auto FrameUpdate_Default = 8231728; // System.Void FrameUpdate_Default()
constexpr auto FrameUpdate_Sleeping = 8233568; // System.Void FrameUpdate_Sleeping()
constexpr auto FrameUpdate_Incapacitated = 8232080; // System.Void FrameUpdate_Incapacitated()
constexpr auto FrameUpdate_OnLadder = 8232784; // System.Void FrameUpdate_OnLadder()
constexpr auto GetAim360 = 8236560; // System.Single GetAim360()
constexpr auto UpdateVehicleAim360 = 8281280; // System.Void UpdateVehicleAim360()
constexpr auto ResetCurrentState_System_Int32_layer___0 = 8258304; // System.Void ResetCurrentState(System.Int32 layer = 0)
constexpr auto DoAimingSounds_System_Single_prevAiming__System_Single_currentAiming = 8226304; // System.Void DoAimingSounds(System.Single prevAiming, System.Single currentAiming)
constexpr auto SetAimSounds_SoundDefinition_aimDef__SoundDefinition_aimEndDef = 8258576; // System.Void SetAimSounds(SoundDefinition aimDef, SoundDefinition aimEndDef)
constexpr auto SetMountedLookAtWeight_System_Single_weight = 8261088; // System.Void SetMountedLookAtWeight(System.Single weight)
constexpr auto SetMountedAnimationSpeed_System_Single_speed = 8261056; // System.Void SetMountedAnimationSpeed(System.Single speed)
constexpr auto UpdateLocalPlayerPosition_UnityEngine_Vector3_position__UnityEngine_Quaternion_quaternion = 8275616; // System.Void UpdateLocalPlayerPosition(UnityEngine.Vector3 position, UnityEngine.Quaternion quaternion)
constexpr auto Attack = 8223216; // System.Void Attack()
constexpr auto AltAttack = 8222416; // System.Void AltAttack()
constexpr auto Deploy = 8226144; // System.Void Deploy()
constexpr auto TurnOn = 8266976; // System.Void TurnOn()
constexpr auto TurnOff = 8266816; // System.Void TurnOff()
constexpr auto Reload = 8257648; // System.Void Reload()
constexpr auto Holster = 8243472; // System.Void Holster()
constexpr auto Flinch_System_UInt32_location = 8228624; // System.Void Flinch(System.UInt32 location)
constexpr auto Flinch = 8228576; // System.Void Flinch()
constexpr auto SetReactionAnim_PlayerModel_ReactionDir_direction__System_Single_weight = 8261136; // System.Void SetReactionAnim(PlayerModel/ReactionDir direction, System.Single weight)
constexpr auto OnReactionEnded = 8251504; // System.Void OnReactionEnded()
constexpr auto Throw = 8266288; // System.Void Throw()
constexpr auto Gesture_System_String_gesture__GestureConfig_forConfig___null = 8235536; // System.Void Gesture(System.String gesture, GestureConfig forConfig = null)
constexpr auto FadeInGestureUpperBodyLayer = 8226944; // System.Void FadeInGestureUpperBodyLayer()
constexpr auto FadeOutGestureUpperBodyLayer = 8227776; // System.Void FadeOutGestureUpperBodyLayer()
constexpr auto FadeInGestureFullBodyLayer = 8226608; // System.Void FadeInGestureFullBodyLayer()
constexpr auto FadeOutGestureFullBodyLayer = 8227280; // System.Void FadeOutGestureFullBodyLayer()
constexpr auto DeployParachute = 8226016; // System.Void DeployParachute()
constexpr auto AnimatorWarmup = 8222592; // System.Void AnimatorWarmup()
constexpr auto AlwaysAnimate_System_Boolean_b = 8222544; // System.Void AlwaysAnimate(System.Boolean b)
constexpr auto SetHoldType_UnityEngine_RuntimeAnimatorController_holdType__System_Boolean_suppressHandLayer___False__PlayerModel_SwapType_swapType___0 = 8259872; // System.Void SetHoldType(UnityEngine.RuntimeAnimatorController holdType, System.Boolean suppressHandLayer = False, PlayerModel/SwapType swapType = 0)
constexpr auto SetHasHeldEntity_System_Boolean_state = 8259856; // System.Void SetHasHeldEntity(System.Boolean state)
constexpr auto FadeOutGestureLayer = 8227664; // System.Collections.IEnumerator FadeOutGestureLayer()
constexpr auto OnPlayerLifestateChanged_BaseCombatEntity_LifeState_oldState__BaseCombatEntity_LifeState_newState = 8250800; // System.Void OnPlayerLifestateChanged(BaseCombatEntity/LifeState oldState, BaseCombatEntity/LifeState newState)
constexpr auto NotifyHasBackpack_System_Boolean_state = 8247040; // System.Void NotifyHasBackpack(System.Boolean state)
constexpr auto NotifyMountedOnTrophy = 8247728; // System.Void NotifyMountedOnTrophy()
constexpr auto SetGesture = 8259280; // System.Void SetGesture()
constexpr auto FadeOutPlayerGestureLayers = 8228160; // System.Void FadeOutPlayerGestureLayers()
constexpr auto StopGesture = 8265312; // System.Void StopGesture()
constexpr auto PlayCinematic_System_String_name__System_Single_overrideSpeed___1 = 8252864; // System.Void PlayCinematic(System.String name, System.Single overrideSpeed = 1)
constexpr auto StopCinematic = 8265216; // System.Void StopCinematic()
constexpr auto SetSpeedOverride_UnityEngine_Vector3_speed = 8262112; // System.Void SetSpeedOverride(UnityEngine.Vector3 speed)
constexpr auto GetReplacementUnderwear = 8239968; // Underwear GetReplacementUnderwear()
constexpr auto RemoveUnderwearParts_SkinReplacement_SkinType_typeToRemove = 8258016; // System.Void RemoveUnderwearParts(SkinReplacement/SkinType typeToRemove)
constexpr auto Clear_System_Boolean_headOnly___False = 8224192; // System.Void Clear(System.Boolean headOnly = False)
constexpr auto Rebuild_System_Boolean_reset___True = 8256208; // System.Void Rebuild(System.Boolean reset = True)
constexpr auto AddPart_System_String_strName__Item_item___null = 8221616; // System.Void AddPart(System.String strName, Item item = null)
constexpr auto RemovePart_System_String_strName = 8257776; // System.Void RemovePart(System.String strName)
constexpr auto HasPart_System_String_strName = 8241616; // System.Boolean HasPart(System.String strName)
constexpr auto IsBarefoot = 8245248; // System.Boolean IsBarefoot()
constexpr auto GetSkinColor = 8240032; // UnityEngine.Color GetSkinColor()
constexpr auto SetSkinProperties_UnityEngine_MaterialPropertyBlock_block = 8261808; // System.Void SetSkinProperties(UnityEngine.MaterialPropertyBlock block)
constexpr auto RefreshUnderwear = 8256720; // System.Void RefreshUnderwear()
constexpr auto ForceModelSeed_System_UInt64_userID = 8231344; // System.Void ForceModelSeed(System.UInt64 userID)
constexpr auto ForceModelSeed_System_UInt64_userID__System_Boolean_storeSkinChange = 8231520; // System.Void ForceModelSeed(System.UInt64 userID, System.Boolean storeSkinChange)
constexpr auto FindBone_System_String_strName = 8228528; // UnityEngine.Transform FindBone(System.String strName)
constexpr auto GetBones = 8237152; // UnityEngine.Transform[] GetBones()
constexpr auto GetFootPlacement_UnityEngine_Vector3_footPos__out_UnityEngine_Vector3_surfaceNormal__out_System_Boolean_success = 8237696; // UnityEngine.Vector3 GetFootPlacement(UnityEngine.Vector3 footPos, out UnityEngine.Vector3 surfaceNormal, out System.Boolean success)
constexpr auto ApplyVisibility_System_Boolean_vis__System_Boolean_animatorVis__System_Boolean_shadowVis = 8222688; // System.Void ApplyVisibility(System.Boolean vis, System.Boolean animatorVis, System.Boolean shadowVis)
constexpr auto ToggleUpdateOffscreen_System_Boolean_state = 8266448; // System.Void ToggleUpdateOffscreen(System.Boolean state)
constexpr auto OnParentDestroying = 8250544; // System.Void OnParentDestroying()
constexpr auto WorkshopPreviewSetup_UnityEngine_GameObject___objects = 8283664; // System.Void WorkshopPreviewSetup(UnityEngine.GameObject[] objects)
constexpr auto SetMountedLookAtOverride_System_Boolean_state = 8261072; // System.Void SetMountedLookAtOverride(System.Boolean state)
constexpr auto SpineIk = 8262144; // System.Void SpineIk()
constexpr auto ParentArmsToCamera = 8251872; // System.Void ParentArmsToCamera()
constexpr auto OnAnimatorIK = 8248400; // System.Void OnAnimatorIK()
constexpr auto HandIK_System_Single_cameraDistSq = 8240448; // System.Void HandIK(System.Single cameraDistSq)
constexpr auto SetOverrideLeftHandWeight_System_Single_value = 8261104; // System.Void SetOverrideLeftHandWeight(System.Single value)
constexpr auto SetOverrideRightHandWeight_System_Single_value = 8261120; // System.Void SetOverrideRightHandWeight(System.Single value)
constexpr auto FootIK_System_Single_cameraDistSq = 8228672; // System.Void FootIK(System.Single cameraDistSq)
constexpr auto HeadIK_System_Single_cameraDistSq = 8241856; // System.Void HeadIK(System.Single cameraDistSq)
constexpr auto get_ShouldDoLegs = 8289248; // System.Boolean get_ShouldDoLegs()
constexpr auto get_ShouldShowHands = 8289360; // System.Boolean get_ShouldShowHands()
constexpr auto ClearLegs = 8223504; // System.Void ClearLegs()
constexpr auto RebuildLegs = 8254192; // System.Void RebuildLegs()
constexpr auto InitializeLegSpineBones = 8243600; // System.Void InitializeLegSpineBones()
constexpr auto UpdateLegsBeforeRender = 8271392; // System.Void UpdateLegsBeforeRender()
constexpr auto UpdateLegsDisable_System_Boolean_forceDisable___False = 8274992; // System.Void UpdateLegsDisable(System.Boolean forceDisable = False)
constexpr auto AddLegRenderer_UnityEngine_SkinnedMeshRenderer_renderer__PaintableItem_paintable = 8220672; // System.Void AddLegRenderer(UnityEngine.SkinnedMeshRenderer renderer, PaintableItem paintable)
constexpr auto SwapLegBone_UnityEngine_Transform_bone = 8265552; // UnityEngine.Transform SwapLegBone(UnityEngine.Transform bone)
constexpr auto _ctor = 8288176; // System.Void .ctor()
constexpr auto _FootIK_g__ProcessFootIK_279_0_System_Int32_footIkParam__UnityEngine_Vector3_footWorldPosition__UnityEngine_AvatarIKGoal_ikGoal__UnityEngine_Vector3_footLocalPosition__UnityEngine_Transform_footBone__TimeSince_timeSinceTest__UnityEngine_Vector3_footNormal__UnityEngine_Vector3_cachedFootPos__UnityEngine_Vector3_smoothFootIkPos__PlayerModel___c__DisplayClass279_0_ = 8267136; // System.Void <FootIK>g__ProcessFootIK|279_0(System.Int32 footIkParam, UnityEngine.Vector3 footWorldPosition, UnityEngine.AvatarIKGoal ikGoal, UnityEngine.Vector3 footLocalPosition, UnityEngine.Transform footBone, TimeSince timeSinceTest, UnityEngine.Vector3 footNormal, UnityEngine.Vector3 cachedFootPos, UnityEngine.Vector3 smoothFootIkPos, PlayerModel/<>c__DisplayClass279_0 )
}
namespace StaticMethods
{
constexpr auto GetFlat_UnityEngine_Vector3_dir = 8237632; // UnityEngine.Vector3 GetFlat(UnityEngine.Vector3 dir)
constexpr auto RebuildAll = 8253248; // System.Void RebuildAll()
constexpr auto _cctor = 8286160; // System.Void .cctor()
}
}
namespace PlayerEyes
{
namespace Fields
{
constexpr auto thirdPersonSleepingOffset = 0x20; // UnityEngine.Vector3
constexpr auto defaultLazyAim = 0x30; // LazyAimProperties
constexpr auto viewOffset = 0x38; // UnityEngine.Vector3
constexpr auto _bodyRotation_k__BackingField = 0x44; // UnityEngine.Quaternion
constexpr auto _headAngles_k__BackingField = 0x54; // UnityEngine.Vector3
constexpr auto _rotationLook_k__BackingField = 0x60; // UnityEngine.Quaternion
constexpr auto _IsAltLookingLegsThreshold_k__BackingField = 0x70; // System.Boolean
}
namespace StaticFields
{
constexpr auto EyeOffset = 0x0; // UnityEngine.Vector3
constexpr auto DuckOffset = 0xc; // UnityEngine.Vector3
constexpr auto CrawlOffset = 0x18; // UnityEngine.Vector3
constexpr auto ParachuteOffset = 0x24; // UnityEngine.Vector3
}
namespace Methods
{
constexpr auto get_worldMountedPosition = 8206656; // UnityEngine.Vector3 get_worldMountedPosition()
constexpr auto get_worldStandingPosition = 8207184; // UnityEngine.Vector3 get_worldStandingPosition()
constexpr auto get_worldCrouchedPosition = 8206448; // UnityEngine.Vector3 get_worldCrouchedPosition()
constexpr auto get_worldCrawlingPosition = 8206240; // UnityEngine.Vector3 get_worldCrawlingPosition()
constexpr auto get_position = 8204656; // UnityEngine.Vector3 get_position()
constexpr auto get_BodyLeanOffset = 8202256; // UnityEngine.Vector3 get_BodyLeanOffset()
constexpr auto get_center = 8203120; // UnityEngine.Vector3 get_center()
constexpr auto get_offset = 8203904; // UnityEngine.Vector3 get_offset()
constexpr auto get_rotation = 8205856; // UnityEngine.Quaternion get_rotation()
constexpr auto set_rotation_UnityEngine_Quaternion_value = 8207488; // System.Void set_rotation(UnityEngine.Quaternion value)
constexpr auto get_bodyRotation = 8202896; // UnityEngine.Quaternion get_bodyRotation()
constexpr auto set_bodyRotation_UnityEngine_Quaternion_value = 8207440; // System.Void set_bodyRotation(UnityEngine.Quaternion value)
constexpr auto get_headAngles = 8203872; // UnityEngine.Vector3 get_headAngles()
constexpr auto set_headAngles_UnityEngine_Vector3_value = 8207456; // System.Void set_headAngles(UnityEngine.Vector3 value)
constexpr auto get_rotationLook = 8205840; // UnityEngine.Quaternion get_rotationLook()
constexpr auto set_rotationLook_UnityEngine_Quaternion_value = 8207472; // System.Void set_rotationLook(UnityEngine.Quaternion value)
constexpr auto get_parentRotation = 8204128; // UnityEngine.Quaternion get_parentRotation()
constexpr auto get_canUpdateViewAngles = 8202912; // System.Boolean get_canUpdateViewAngles()
constexpr auto get_IsAltLookingLegsThreshold = 8202880; // System.Boolean get_IsAltLookingLegsThreshold()
constexpr auto set_IsAltLookingLegsThreshold_System_Boolean_value = 8207424; // System.Void set_IsAltLookingLegsThreshold(System.Boolean value)
constexpr auto FrameUpdate_UnityEngine_Camera_cam = 8197104; // System.Void FrameUpdate(UnityEngine.Camera cam)
constexpr auto UpdateAltLegsThreshold_System_Single_yAngle = 8201408; // System.Void UpdateAltLegsThreshold(System.Single yAngle)
constexpr auto UpdateCamera_UnityEngine_Camera_cam = 8201440; // System.Void UpdateCamera(UnityEngine.Camera cam)
constexpr auto DoFirstPersonCamera_UnityEngine_Camera_cam = 8189216; // System.Void DoFirstPersonCamera(UnityEngine.Camera cam)
constexpr auto DoInEyeCamera_UnityEngine_Camera_cam = 8190768; // System.Void DoInEyeCamera(UnityEngine.Camera cam)
constexpr auto DoThirdPersonCamera_UnityEngine_Camera_cam = 8191536; // System.Void DoThirdPersonCamera(UnityEngine.Camera cam)
constexpr auto DoDeathCamera_UnityEngine_Camera_cam = 8187712; // System.Void DoDeathCamera(UnityEngine.Camera cam)
constexpr auto ApplyCameraMoves_UnityEngine_Camera_cam = 8186832; // System.Void ApplyCameraMoves(UnityEngine.Camera cam)
constexpr auto MovementForward = 8200736; // UnityEngine.Vector3 MovementForward()
constexpr auto MovementRight = 8201072; // UnityEngine.Vector3 MovementRight()
constexpr auto BodyRay = 8187136; // UnityEngine.Ray BodyRay()
constexpr auto BodyForward = 8186976; // UnityEngine.Vector3 BodyForward()
constexpr auto BodyRight = 8187392; // UnityEngine.Vector3 BodyRight()
constexpr auto BodyUp = 8187552; // UnityEngine.Vector3 BodyUp()
constexpr auto HeadRay = 8199920; // UnityEngine.Ray HeadRay()
constexpr auto HeadForward = 8199760; // UnityEngine.Vector3 HeadForward()
constexpr auto HeadRight = 8200416; // UnityEngine.Vector3 HeadRight()
constexpr auto HeadUp = 8200576; // UnityEngine.Vector3 HeadUp()
constexpr auto GetLookRotation = 8198864; // UnityEngine.Quaternion GetLookRotation()
constexpr auto GetAimRotation = 8198816; // UnityEngine.Quaternion GetAimRotation()
constexpr auto _ctor = 8202096; // System.Void .ctor()
}
namespace StaticMethods
{
constexpr auto _cctor = 8201856; // System.Void .cctor()
}
}
namespace PlayerBelt
{
namespace Fields
{
constexpr auto player = 0x10; // BasePlayer
}
namespace StaticFields
{
constexpr auto ClientAutoSelectSlot = 0x0; // System.Int32
constexpr auto ClientAutoSeletItemUID = 0x4; // System.UInt32
constexpr auto SelectedSlot = 0x8; // System.Int32
}
namespace Methods
{
constexpr auto _ctor_BasePlayer_player = 8184464; // System.Void .ctor(BasePlayer player)
constexpr auto GetItemInSlot_System_Int32_slot = 8184000; // Item GetItemInSlot(System.Int32 slot)
constexpr auto GetActiveItem = 8183856; // Item GetActiveItem()
constexpr auto CanHoldItem = 8180560; // System.Boolean CanHoldItem()
constexpr auto FrameUpdate = 8183328; // System.Void FrameUpdate()
constexpr auto ChangeSelect_System_Int32_iSlot__System_Boolean_allowRunAction___False = 8180848; // System.Void ChangeSelect(System.Int32 iSlot, System.Boolean allowRunAction = False)
constexpr auto DoNextItemDirection_InputState_state__System_Int32_direction = 8183040; // System.Void DoNextItemDirection(InputState state, System.Int32 direction)
constexpr auto ClientInput_InputState_state = 8181840; // System.Void ClientInput(InputState state)
}
namespace StaticMethods
{
constexpr auto get_MaxBeltSlots = 8184512; // System.Int32 get_MaxBeltSlots()
constexpr auto ClearAutoSelectSlot = 8181728; // System.Void ClearAutoSelectSlot()
constexpr auto SetAutoSelectSlot_System_Int32_slot__System_UInt32_itemID = 8184240; // System.Void SetAutoSelectSlot(System.Int32 slot, System.UInt32 itemID)
constexpr auto _cctor = 8184352; // System.Void .cctor()
}
}
namespace BaseNetworkable
{
namespace Fields
{
constexpr auto _JustCreated_k__BackingField = 0x18; // System.Boolean
constexpr auto entityDestroy = 0x20; // DeferredAction
constexpr auto prefabID = 0x28; // System.UInt32
constexpr auto globalBroadcast = 0x2c; // System.Boolean
constexpr auto globalBuildingBlock = 0x2d; // System.Boolean
constexpr auto net = 0x30; // Network.Networkable
constexpr auto _IsDestroyed_k__BackingField = 0x38; // System.Boolean
constexpr auto _prefabName = 0x40; // System.String
constexpr auto _prefabNameWithoutExtension = 0x48; // System.String
constexpr auto postNetworkUpdateComponents = 0x50; // System.Collections.Generic.List`1
constexpr auto parentEntity = 0x58; // EntityRef
constexpr auto children = 0x68; // System.Collections.Generic.List`1
constexpr auto canTriggerParent = 0x70; // System.Boolean
}
namespace StaticFields
{
constexpr auto clientEntities = 0x0; // BaseNetworkable/EntityRealm
constexpr auto isServersideEntity = 0x0; // System.Boolean
}
namespace Methods
{
constexpr auto get_JustCreated = 3793248; // System.Boolean get_JustCreated()
constexpr auto set_JustCreated_System_Boolean_value = 3793408; // System.Void set_JustCreated(System.Boolean value)
constexpr auto ClientSpawn_ProtoBuf_Entity_info = 7958432; // System.Void ClientSpawn(ProtoBuf.Entity info)
constexpr auto ClientOnEnable = 7958288; // System.Void ClientOnEnable()
constexpr auto ClientInit_ProtoBuf_Entity_info = 7957760; // System.Void ClientInit(ProtoBuf.Entity info)
constexpr auto OnNetworkUpdate_ProtoBuf_Entity_entity = 7963440; // System.Void OnNetworkUpdate(ProtoBuf.Entity entity)
constexpr auto PreNetworkUpdate = 3694560; // System.Void PreNetworkUpdate()
constexpr auto PostNetworkUpdate = 3694560; // System.Void PostNetworkUpdate()
constexpr auto ShouldDestroyWithGroup = 3694048; // System.Boolean ShouldDestroyWithGroup()
constexpr auto ShouldDestroyImmediately = 4889040; // System.Boolean ShouldDestroyImmediately()
constexpr auto NetworkDestroy_System_Boolean_immediately__System_Boolean_leftNetworkGroup = 7961984; // System.Void NetworkDestroy(System.Boolean immediately, System.Boolean leftNetworkGroup)
constexpr auto DoClientDestroy = 7959360; // System.Void DoClientDestroy()
constexpr auto DoNetworkDestroy = 3694560; // System.Void DoNetworkDestroy()
constexpr auto get_IsDestroyed = 3836128; // System.Boolean get_IsDestroyed()
constexpr auto set_IsDestroyed_System_Boolean_value = 3836848; // System.Void set_IsDestroyed(System.Boolean value)
constexpr auto get_PrefabName = 7964896; // System.String get_PrefabName()
constexpr auto get_ShortPrefabName = 7964960; // System.String get_ShortPrefabName()
constexpr auto GetNetworkPosition = 6583200; // UnityEngine.Vector3 GetNetworkPosition()
constexpr auto GetNetworkRotation = 7960160; // UnityEngine.Quaternion GetNetworkRotation()
constexpr auto InvokeString = 7960256; // System.String InvokeString()
constexpr auto LookupPrefab = 7961808; // BaseEntity LookupPrefab()
constexpr auto EqualNetID_BaseNetworkable_other = 7960080; // System.Boolean EqualNetID(BaseNetworkable other)
constexpr auto EqualNetID_NetworkableId_otherID = 7960128; // System.Boolean EqualNetID(NetworkableId otherID)
constexpr auto ResetState = 7964096; // System.Void ResetState()
constexpr auto InitShared = 3694560; // System.Void InitShared()
constexpr auto PreInitShared = 3694560; // System.Void PreInitShared()
constexpr auto PostInitShared = 3694560; // System.Void PostInitShared()
constexpr auto DestroyShared = 3694560; // System.Void DestroyShared()
constexpr auto OnNetworkGroupEnter_Network_Visibility_Group_group = 3694560; // System.Void OnNetworkGroupEnter(Network.Visibility.Group group)
constexpr auto OnNetworkGroupLeave_Network_Visibility_Group_group = 3694560; // System.Void OnNetworkGroupLeave(Network.Visibility.Group group)
constexpr auto OnNetworkGroupChange = 7963104; // System.Void OnNetworkGroupChange()
constexpr auto OnNetworkSubscribersEnter_System_Collections_Generic_List_1_Network_Connection__connections = 3694560; // System.Void OnNetworkSubscribersEnter(System.Collections.Generic.List`1<Network.Connection> connections)
constexpr auto OnNetworkSubscribersLeave_System_Collections_Generic_List_1_Network_Connection__connections = 3694560; // System.Void OnNetworkSubscribersLeave(System.Collections.Generic.List`1<Network.Connection> connections)
constexpr auto EntityDestroy = 7959856; // System.Void EntityDestroy()
constexpr auto DoEntityDestroy = 7959536; // System.Void DoEntityDestroy()
constexpr auto SpawnShared = 7964208; // System.Void SpawnShared()
constexpr auto Load_BaseNetworkable_LoadInfo_info = 7960880; // System.Void Load(BaseNetworkable/LoadInfo info)
constexpr auto get_isServer = 4889040; // System.Boolean get_isServer()
constexpr auto get_isClient = 3694048; // System.Boolean get_isClient()
constexpr auto T_BaseNetworkable_ToClient_System_Object_ = 17806928; // T BaseNetworkable.ToClient<System.Object>
constexpr auto OnRpcMessage_BasePlayer_player__System_UInt32_rpc__Network_Message_msg = 4889040; // System.Boolean OnRpcMessage(BasePlayer player, System.UInt32 rpc, Network.Message msg)
constexpr auto BroadcastOnPostNetworkUpdate_BaseEntity_entity = 7957168; // System.Void BroadcastOnPostNetworkUpdate(BaseEntity entity)
constexpr auto PostProcess_IPrefabProcessor_preProcess__UnityEngine_GameObject_rootObj__System_String_name__System_Boolean_serverside__System_Boolean_clientside__System_Boolean_bundling = 7963840; // System.Void PostProcess(IPrefabProcessor preProcess, UnityEngine.GameObject rootObj, System.String name, System.Boolean serverside, System.Boolean clientside, System.Boolean bundling)
constexpr auto GetParentEntity = 7960224; // BaseEntity GetParentEntity()
constexpr auto HasParent = 7960240; // System.Boolean HasParent()
constexpr auto AddChild_BaseEntity_child = 7957008; // System.Void AddChild(BaseEntity child)
constexpr auto OnChildAdded_BaseEntity_child = 3694560; // System.Void OnChildAdded(BaseEntity child)
constexpr auto RemoveChild_BaseEntity_child = 7963984; // System.Void RemoveChild(BaseEntity child)
constexpr auto OnChildRemoved_BaseEntity_child = 3694560; // System.Void OnChildRemoved(BaseEntity child)
constexpr auto get_gameManager = 7965120; // GameManager get_gameManager()
constexpr auto get_prefabAttribute = 7965200; // PrefabAttribute/Library get_prefabAttribute()
constexpr auto _ctor = 7964688; // System.Void .ctor()
}
namespace StaticMethods
{
constexpr auto _cctor = 7964448; // System.Void .cctor()
}
}
namespace AttackEntity
{
namespace Fields
{
constexpr auto deployDelay = 0x1f8; // System.Single
constexpr auto repeatDelay = 0x1fc; // System.Single
constexpr auto animationDelay = 0x200; // System.Single
constexpr auto effectiveRange = 0x204; // System.Single
constexpr auto npcDamageScale = 0x208; // System.Single
constexpr auto attackLengthMin = 0x20c; // System.Single
constexpr auto attackLengthMax = 0x210; // System.Single
constexpr auto attackSpacing = 0x214; // System.Single
constexpr auto aiAimSwayOffset = 0x218; // System.Single
constexpr auto aiAimCone = 0x21c; // System.Single
constexpr auto aiOnlyInRange = 0x220; // System.Boolean
constexpr auto CloseRangeAddition = 0x224; // System.Single
constexpr auto MediumRangeAddition = 0x228; // System.Single
constexpr auto LongRangeAddition = 0x22c; // System.Single
constexpr auto CanUseAtMediumRange = 0x230; // System.Boolean
constexpr auto CanUseAtLongRange = 0x231; // System.Boolean
constexpr auto reloadSounds = 0x238; // unknown
constexpr auto thirdPersonMeleeSound = 0x240; // SoundDefinition
constexpr auto recoilCompDelayOverride = 0x248; // System.Single
constexpr auto wantsRecoilComp = 0x24c; // System.Boolean
constexpr auto nextAttackTime = 0x250; // System.Single
constexpr auto lastTickTime = 0x254; // System.Single
constexpr auto nextTickTime = 0x258; // System.Single
constexpr auto timeSinceDeploy = 0x25c; // System.Single
constexpr auto lastRecoilCompTime = 0x260; // System.Single
constexpr auto startAimingDirection = 0x264; // UnityEngine.Vector3
constexpr auto wasDoingRecoilComp = 0x270; // System.Boolean
constexpr auto reductionSpeed = 0x274; // UnityEngine.Vector3
}
namespace StaticFields
{
constexpr auto reductionSpeedScalars = 0x0; // UnityEngine.Vector3
}
namespace Methods
{
constexpr auto GetInheritedVelocity_BasePlayer_player__UnityEngine_Vector3_direction = 6249488; // UnityEngine.Vector3 GetInheritedVelocity(BasePlayer player, UnityEngine.Vector3 direction)
constexpr auto AmmoFraction = 5805664; // System.Single AmmoFraction()
constexpr auto get_UsingInfiniteAmmoCheat = 7865328; // System.Boolean get_UsingInfiniteAmmoCheat()
constexpr auto get_NextAttackTime = 7865312; // System.Single get_NextAttackTime()
constexpr auto GetAttackStats_HitInfo_info = 3694560; // System.Void GetAttackStats(HitInfo info)
constexpr auto StartAttackCooldownRaw_System_Single_cooldown = 7864720; // System.Void StartAttackCooldownRaw(System.Single cooldown)
constexpr auto StartAttackCooldown_System_Single_cooldown = 7864768; // System.Void StartAttackCooldown(System.Single cooldown)
constexpr auto ResetAttackCooldown = 7864624; // System.Void ResetAttackCooldown()
constexpr auto HasAttackCooldown = 7864208; // System.Boolean HasAttackCooldown()
constexpr auto GetAttackCooldown = 7864112; // System.Single GetAttackCooldown()
constexpr auto GetAttackIdle = 7864160; // System.Single GetAttackIdle()
constexpr auto CalculateCooldownTime_System_Single_nextTime__System_Single_cooldown__System_Boolean_catchup = 7861312; // System.Single CalculateCooldownTime(System.Single nextTime, System.Single cooldown, System.Boolean catchup)
constexpr auto IsFullyDeployed = 7864256; // System.Boolean IsFullyDeployed()
constexpr auto UseDeployingScreenshake = 7864944; // System.Boolean UseDeployingScreenshake()
constexpr auto ProcessInputTime = 7864416; // System.Void ProcessInputTime()
constexpr auto OnInput = 7864320; // System.Void OnInput()
constexpr auto OnDeploy = 7864288; // System.Void OnDeploy()
constexpr auto SpectatorNotifyDeploy = 7864640; // System.Void SpectatorNotifyDeploy()
constexpr auto SpectatorNotifyTick = 7864656; // System.Void SpectatorNotifyTick()
constexpr auto RecoilCompReady = 7864496; // System.Boolean RecoilCompReady()
constexpr auto AddPunch_UnityEngine_Vector3_amount__System_Single_duration = 7860832; // System.Void AddPunch(UnityEngine.Vector3 amount, System.Single duration)
constexpr auto DoRecoilCompensation = 7861488; // System.Void DoRecoilCompensation()
constexpr auto _ctor = 7865072; // System.Void .ctor()
}
namespace StaticMethods
{
constexpr auto _cctor = 7864976; // System.Void .cctor()
}
}
namespace GameTrace
{
namespace StaticFields
{
constexpr auto tracePadding = 0x0; // System.Int32
}
namespace StaticMethods
{
constexpr auto TraceAll_HitTest_test__System_Collections_Generic_List_1_TraceInfo__traces__System_Int32_layerMask____5 = 7681120; // System.Void TraceAll(HitTest test, System.Collections.Generic.List`1<TraceInfo> traces, System.Int32 layerMask = -5)
constexpr auto Trace_HitTest_test__System_Int32_layerMask____5 = 7684016; // System.Boolean Trace(HitTest test, System.Int32 layerMask = -5)
}
}
namespace GamePhysics
{
namespace StaticFields
{
constexpr auto BufferLength = 0x0; // System.Int32
constexpr auto hitBuffer = 0x0; // unknown
constexpr auto hitBufferB = 0x8; // unknown
constexpr auto colBuffer = 0x10; // unknown
}
namespace StaticMethods
{
constexpr auto CheckSphere_UnityEngine_Vector3_position__System_Single_radius__System_Int32_layerMask____5__UnityEngine_QueryTriggerInteraction_triggerInteraction___0 = 7670720; // System.Boolean CheckSphere(UnityEngine.Vector3 position, System.Single radius, System.Int32 layerMask = -5, UnityEngine.QueryTriggerInteraction triggerInteraction = 0)
constexpr auto CheckCapsule_UnityEngine_Vector3_start__UnityEngine_Vector3_end__System_Single_radius__System_Int32_layerMask____5__UnityEngine_QueryTriggerInteraction_triggerInteraction___0 = 7668144; // System.Boolean CheckCapsule(UnityEngine.Vector3 start, UnityEngine.Vector3 end, System.Single radius, System.Int32 layerMask = -5, UnityEngine.QueryTriggerInteraction triggerInteraction = 0)
constexpr auto CheckOBB_OBB_obb__System_Int32_layerMask____5__UnityEngine_QueryTriggerInteraction_triggerInteraction___0 = 7670416; // System.Boolean CheckOBB(OBB obb, System.Int32 layerMask = -5, UnityEngine.QueryTriggerInteraction triggerInteraction = 0)
constexpr auto CheckOBBAndEntity_OBB_obb__System_Int32_layerMask____5__UnityEngine_QueryTriggerInteraction_triggerInteraction___0__BaseEntity_ignoreEntity___null = 7669808; // System.Boolean CheckOBBAndEntity(OBB obb, System.Int32 layerMask = -5, UnityEngine.QueryTriggerInteraction triggerInteraction = 0, BaseEntity ignoreEntity = null)
constexpr auto CheckBounds_UnityEngine_Bounds_bounds__System_Int32_layerMask____5__UnityEngine_QueryTriggerInteraction_triggerInteraction___0 = 7667792; // System.Boolean CheckBounds(UnityEngine.Bounds bounds, System.Int32 layerMask = -5, UnityEngine.QueryTriggerInteraction triggerInteraction = 0)
constexpr auto CheckInsideNonConvexMesh_UnityEngine_Vector3_point__System_Int32_layerMask____5 = 7668848; // System.Boolean CheckInsideNonConvexMesh(UnityEngine.Vector3 point, System.Int32 layerMask = -5)
constexpr auto CheckInsideAnyCollider_UnityEngine_Vector3_point__System_Int32_layerMask____5 = 7668480; // System.Boolean CheckInsideAnyCollider(UnityEngine.Vector3 point, System.Int32 layerMask = -5)
constexpr auto OverlapSphere_UnityEngine_Vector3_position__System_Single_radius__System_Collections_Generic_List_1_UnityEngine_Collider__list__System_Int32_layerMask____5__UnityEngine_QueryTriggerInteraction_triggerInteraction___1 = 7676688; // System.Void OverlapSphere(UnityEngine.Vector3 position, System.Single radius, System.Collections.Generic.List`1<UnityEngine.Collider> list, System.Int32 layerMask = -5, UnityEngine.QueryTriggerInteraction triggerInteraction = 1)
constexpr auto CapsuleSweep_UnityEngine_Vector3_position0__UnityEngine_Vector3_position1__System_Single_radius__UnityEngine_Vector3_direction__System_Single_distance__System_Collections_Generic_List_1_UnityEngine_RaycastHit__list__System_Int32_layerMask____5__UnityEngine_QueryTriggerInteraction_triggerInteraction___1 = 7667040; // System.Void CapsuleSweep(UnityEngine.Vector3 position0, UnityEngine.Vector3 position1, System.Single radius, UnityEngine.Vector3 direction, System.Single distance, System.Collections.Generic.List`1<UnityEngine.RaycastHit> list, System.Int32 layerMask = -5, UnityEngine.QueryTriggerInteraction triggerInteraction = 1)
constexpr auto OverlapCapsule_UnityEngine_Vector3_point0__UnityEngine_Vector3_point1__System_Single_radius__System_Collections_Generic_List_1_UnityEngine_Collider__list__System_Int32_layerMask____5__UnityEngine_QueryTriggerInteraction_triggerInteraction___1 = 7675648; // System.Void OverlapCapsule(UnityEngine.Vector3 point0, UnityEngine.Vector3 point1, System.Single radius, System.Collections.Generic.List`1<UnityEngine.Collider> list, System.Int32 layerMask = -5, UnityEngine.QueryTriggerInteraction triggerInteraction = 1)
constexpr auto OverlapOBB_OBB_obb__System_Collections_Generic_List_1_UnityEngine_Collider__list__System_Int32_layerMask____5__UnityEngine_QueryTriggerInteraction_triggerInteraction___1 = 7676160; // System.Void OverlapOBB(OBB obb, System.Collections.Generic.List`1<UnityEngine.Collider> list, System.Int32 layerMask = -5, UnityEngine.QueryTriggerInteraction triggerInteraction = 1)
constexpr auto OverlapBounds_UnityEngine_Bounds_bounds__System_Collections_Generic_List_1_UnityEngine_Collider__list__System_Int32_layerMask____5__UnityEngine_QueryTriggerInteraction_triggerInteraction___1 = 7675040; // System.Void OverlapBounds(UnityEngine.Bounds bounds, System.Collections.Generic.List`1<UnityEngine.Collider> list, System.Int32 layerMask = -5, UnityEngine.QueryTriggerInteraction triggerInteraction = 1)
constexpr auto BufferToList_UnityEngine_Collider___buffer__System_Int32_count__System_Collections_Generic_List_1_UnityEngine_Collider__list = 7666784; // System.Void BufferToList(UnityEngine.Collider[] buffer, System.Int32 count, System.Collections.Generic.List`1<UnityEngine.Collider> list)
constexpr auto System_Boolean_GamePhysics_CheckSphere_System_Object__UnityEngine_Vector3_pos__System_Single_radius__System_Int32_layerMask____5__UnityEngine_QueryTriggerInteraction_triggerInteraction___1 = 18046464; // System.Boolean GamePhysics.CheckSphere<System.Object>
constexpr auto System_Boolean_GamePhysics_CheckCapsule_System_Object__UnityEngine_Vector3_start__UnityEngine_Vector3_end__System_Single_radius__System_Int32_layerMask____5__UnityEngine_QueryTriggerInteraction_triggerInteraction___1 = 18045616; // System.Boolean GamePhysics.CheckCapsule<System.Object>
constexpr auto System_Boolean_GamePhysics_CheckOBB_System_Object__OBB_obb__System_Int32_layerMask____5__UnityEngine_QueryTriggerInteraction_triggerInteraction___1 = 18046144; // System.Boolean GamePhysics.CheckOBB<System.Object>
constexpr auto System_Boolean_GamePhysics_CheckBounds_System_Object__UnityEngine_Bounds_bounds__System_Int32_layerMask____5__UnityEngine_QueryTriggerInteraction_triggerInteraction___1 = 18045344; // System.Boolean GamePhysics.CheckBounds<System.Object>
constexpr auto System_Boolean_GamePhysics_CheckComponent_System_Object__System_Collections_Generic_List_1_UnityEngine_Collider__list = 18045952; // System.Boolean GamePhysics.CheckComponent<System.Object>
constexpr auto System_Void_GamePhysics_OverlapSphere_System_Object__UnityEngine_Vector3_position__System_Single_radius__System_Collections_Generic_List_1_T__list__System_Int32_layerMask____5__UnityEngine_QueryTriggerInteraction_triggerInteraction___1 = 18047856; // System.Void GamePhysics.OverlapSphere<System.Object>
constexpr auto System_Void_GamePhysics_OverlapCapsule_System_Object__UnityEngine_Vector3_point0__UnityEngine_Vector3_point1__System_Single_radius__System_Collections_Generic_List_1_T__list__System_Int32_layerMask____5__UnityEngine_QueryTriggerInteraction_triggerInteraction___1 = 18047184; // System.Void GamePhysics.OverlapCapsule<System.Object>
constexpr auto System_Void_GamePhysics_OverlapOBB_System_Object__OBB_obb__System_Collections_Generic_List_1_T__list__System_Int32_layerMask____5__UnityEngine_QueryTriggerInteraction_triggerInteraction___1 = 18047504; // System.Void GamePhysics.OverlapOBB<System.Object>
constexpr auto System_Void_GamePhysics_OverlapBounds_System_Object__UnityEngine_Bounds_bounds__System_Collections_Generic_List_1_T__list__System_Int32_layerMask____5__UnityEngine_QueryTriggerInteraction_triggerInteraction___1 = 18046752; // System.Void GamePhysics.OverlapBounds<System.Object>
constexpr auto System_Void_GamePhysics_BufferToList_System_Object__UnityEngine_Collider___buffer__System_Int32_count__System_Collections_Generic_List_1_T__list = 18044976; // System.Void GamePhysics.BufferToList<System.Object>
constexpr auto HitBufferToList_System_Int32_count__System_Collections_Generic_List_1_UnityEngine_RaycastHit__list = 7671616; // System.Void HitBufferToList(System.Int32 count, System.Collections.Generic.List`1<UnityEngine.RaycastHit> list)
constexpr auto Trace_UnityEngine_Ray_ray__System_Single_radius__out_UnityEngine_RaycastHit_hitInfo__System_Single_maxDistance______System_Int32_layerMask____5__UnityEngine_QueryTriggerInteraction_triggerInteraction___0__BaseEntity_ignoreEntity___null = 7679280; // System.Boolean Trace(UnityEngine.Ray ray, System.Single radius, out UnityEngine.RaycastHit hitInfo, System.Single maxDistance = ∞, System.Int32 layerMask = -5, UnityEngine.QueryTriggerInteraction triggerInteraction = 0, BaseEntity ignoreEntity = null)
constexpr auto TraceAll_UnityEngine_Ray_ray__System_Single_radius__System_Collections_Generic_List_1_UnityEngine_RaycastHit__hits__System_Single_maxDistance______System_Int32_layerMask____5__UnityEngine_QueryTriggerInteraction_triggerInteraction___0__BaseEntity_ignoreEntity___null = 7679072; // System.Void TraceAll(UnityEngine.Ray ray, System.Single radius, System.Collections.Generic.List`1<UnityEngine.RaycastHit> hits, System.Single maxDistance = ∞, System.Int32 layerMask = -5, UnityEngine.QueryTriggerInteraction triggerInteraction = 0, BaseEntity ignoreEntity = null)
constexpr auto TraceAllUnordered_UnityEngine_Ray_ray__System_Single_radius__System_Collections_Generic_List_1_UnityEngine_RaycastHit__hits__System_Single_maxDistance______System_Int32_layerMask____5__UnityEngine_QueryTriggerInteraction_triggerInteraction___0__BaseEntity_ignoreEntity___null = 7677696; // System.Void TraceAllUnordered(UnityEngine.Ray ray, System.Single radius, System.Collections.Generic.List`1<UnityEngine.RaycastHit> hits, System.Single maxDistance = ∞, System.Int32 layerMask = -5, UnityEngine.QueryTriggerInteraction triggerInteraction = 0, BaseEntity ignoreEntity = null)
constexpr auto LineOfSightRadius_UnityEngine_Vector3_p0__UnityEngine_Vector3_p1__System_Int32_layerMask__System_Single_radius__System_Single_padding0__System_Single_padding1__BaseEntity_ignoreEntity___null = 7674064; // System.Boolean LineOfSightRadius(UnityEngine.Vector3 p0, UnityEngine.Vector3 p1, System.Int32 layerMask, System.Single radius, System.Single padding0, System.Single padding1, BaseEntity ignoreEntity = null)
constexpr auto LineOfSightRadius_UnityEngine_Vector3_p0__UnityEngine_Vector3_p1__System_Int32_layerMask__System_Single_radius__System_Single_padding__BaseEntity_ignoreEntity___null = 7673856; // System.Boolean LineOfSightRadius(UnityEngine.Vector3 p0, UnityEngine.Vector3 p1, System.Int32 layerMask, System.Single radius, System.Single padding, BaseEntity ignoreEntity = null)
constexpr auto LineOfSightRadius_UnityEngine_Vector3_p0__UnityEngine_Vector3_p1__System_Int32_layerMask__System_Single_radius__BaseEntity_ignoreEntity___null = 7673648; // System.Boolean LineOfSightRadius(UnityEngine.Vector3 p0, UnityEngine.Vector3 p1, System.Int32 layerMask, System.Single radius, BaseEntity ignoreEntity = null)
constexpr auto LineOfSight_UnityEngine_Vector3_p0__UnityEngine_Vector3_p1__System_Int32_layerMask__System_Single_padding0__System_Single_padding1__BaseEntity_ignoreEntity___null = 7674784; // System.Boolean LineOfSight(UnityEngine.Vector3 p0, UnityEngine.Vector3 p1, System.Int32 layerMask, System.Single padding0, System.Single padding1, BaseEntity ignoreEntity = null)
constexpr auto LineOfSight_UnityEngine_Vector3_p0__UnityEngine_Vector3_p1__System_Int32_layerMask__System_Single_padding__BaseEntity_ignoreEntity___null = 7674288; // System.Boolean LineOfSight(UnityEngine.Vector3 p0, UnityEngine.Vector3 p1, System.Int32 layerMask, System.Single padding, BaseEntity ignoreEntity = null)
constexpr auto LineOfSight_UnityEngine_Vector3_p0__UnityEngine_Vector3_p1__System_Int32_layerMask__BaseEntity_ignoreEntity___null = 7674544; // System.Boolean LineOfSight(UnityEngine.Vector3 p0, UnityEngine.Vector3 p1, System.Int32 layerMask, BaseEntity ignoreEntity = null)
constexpr auto LineOfSightInternal_UnityEngine_Vector3_p0__UnityEngine_Vector3_p1__System_Int32_layerMask__System_Single_radius__System_Single_padding0__System_Single_padding1__BaseEntity_ignoreEntity___null = 7672064; // System.Boolean LineOfSightInternal(UnityEngine.Vector3 p0, UnityEngine.Vector3 p1, System.Int32 layerMask, System.Single radius, System.Single padding0, System.Single padding1, BaseEntity ignoreEntity = null)
constexpr auto Verify_UnityEngine_RaycastHit_hitInfo__BaseEntity_ignoreEntity___null = 7680704; // System.Boolean Verify(UnityEngine.RaycastHit hitInfo, BaseEntity ignoreEntity = null)
constexpr auto Verify_UnityEngine_Collider_collider__UnityEngine_Vector3_point__BaseEntity_ignoreEntity___null = 7679840; // System.Boolean Verify(UnityEngine.Collider collider, UnityEngine.Vector3 point, BaseEntity ignoreEntity = null)
constexpr auto CompareEntity_BaseEntity_a__BaseEntity_b = 7670912; // System.Boolean CompareEntity(BaseEntity a, BaseEntity b)
constexpr auto HandleIgnoreCollision_UnityEngine_Vector3_position__System_Int32_layerMask = 7671056; // System.Int32 HandleIgnoreCollision(UnityEngine.Vector3 position, System.Int32 layerMask)
constexpr auto Sort_System_Collections_Generic_List_1_UnityEngine_RaycastHit__hits = 7677120; // System.Void Sort(System.Collections.Generic.List`1<UnityEngine.RaycastHit> hits)
constexpr auto Sort_UnityEngine_RaycastHit___hits = 7677408; // System.Void Sort(UnityEngine.RaycastHit[] hits)
constexpr auto _cctor = 7680880; // System.Void .cctor()
}
}
namespace ViewmodelItem
{
namespace Fields
{
constexpr auto vOneRun = 0x18; // System.Boolean
constexpr auto bWasOn = 0x19; // System.Boolean
constexpr auto viewmodelAnimator = 0x20; // UnityEngine.Animator
}
namespace Methods
{
constexpr auto OnEnable = 7744400; // System.Void OnEnable()
constexpr auto Update = 7744656; // System.Void Update()
constexpr auto OnOffStateChanged = 7744480; // System.Void OnOffStateChanged()
constexpr auto FindItem = 7744224; // Item FindItem()
constexpr auto _ctor = 3661504; // System.Void .ctor()
}
}
namespace ViewModel
{
namespace Fields
{
constexpr auto viewModelPrefab = 0x18; // GameObjectRef
constexpr auto targetEntity = 0x20; // HeldEntity
constexpr auto instance = 0x28; // BaseViewModel
}
namespace Methods
{
constexpr auto Deploy_BaseEntity_parent = 7739120; // System.Void Deploy(BaseEntity parent)
constexpr auto OnDisable = 7740064; // System.Void OnDisable()
constexpr auto Holster = 7739952; // System.Void Holster()
constexpr auto Clear = 7738752; // System.Void Clear()
constexpr auto OnFrame = 7740144; // System.Void OnFrame()
constexpr auto Play_System_String_name__System_Int32_layer___0 = 7740480; // System.Void Play(System.String name, System.Int32 layer = 0)
constexpr auto ResetTrigger_System_String_name = 7740784; // System.Void ResetTrigger(System.String name)
constexpr auto ResetTrigger_System_Int32_hash = 7740640; // System.Void ResetTrigger(System.Int32 hash)
constexpr auto Trigger_System_String_name = 7741712; // System.Void Trigger(System.String name)
constexpr auto Trigger_System_Int32_hash = 7741568; // System.Void Trigger(System.Int32 hash)
constexpr auto CrossFade_System_String_name__System_Single_duration___0_2 = 7738960; // System.Void CrossFade(System.String name, System.Single duration = 0.2)
constexpr auto SetBool_System_String_name__System_Boolean_bState = 7740928; // System.Void SetBool(System.String name, System.Boolean bState)
constexpr auto SetBool_System_Int32_hash__System_Boolean_bState = 7741088; // System.Void SetBool(System.Int32 hash, System.Boolean bState)
constexpr auto SetFloat_System_String_name__System_Single_fAmount = 7741248; // System.Void SetFloat(System.String name, System.Single fAmount)
constexpr auto SetFloat_System_Int32_hash__System_Single_fAmount = 7741408; // System.Void SetFloat(System.Int32 hash, System.Single fAmount)
constexpr auto get_ironSights = 7741856; // System.Boolean get_ironSights()
constexpr auto set_ironSights_System_Boolean_value = 7742048; // System.Void set_ironSights(System.Boolean value)
constexpr auto _ctor = 3661504; // System.Void .ctor()
}
}
namespace Projectile
{
namespace Fields
{
constexpr auto initialVelocity = 0x18; // UnityEngine.Vector3
constexpr auto drag = 0x24; // System.Single
constexpr auto gravityModifier = 0x28; // System.Single
constexpr auto thickness = 0x2c; // System.Single
constexpr auto initialDistance = 0x30; // System.Single
constexpr auto remainInWorld = 0x34; // System.Boolean
constexpr auto stickProbability = 0x38; // System.Single
constexpr auto breakProbability = 0x3c; // System.Single
constexpr auto conditionLoss = 0x40; // System.Single
constexpr auto ricochetChance = 0x44; // System.Single
constexpr auto penetrationPower = 0x48; // System.Single
constexpr auto waterIntegrityLoss = 0x4c; // System.Single
constexpr auto damageProperties = 0x50; // DamageProperties
constexpr auto damageDistances = 0x58; // MinMax
constexpr auto damageMultipliers = 0x60; // MinMax
constexpr auto damageTypes = 0x68; // System.Collections.Generic.List`1
constexpr auto rendererToScale = 0x70; // ScaleRenderer
constexpr auto firstPersonRenderer = 0x78; // ScaleRenderer
constexpr auto createDecals = 0x80; // System.Boolean
constexpr auto doDefaultHitEffects = 0x81; // System.Boolean
constexpr auto flybySound = 0x88; // SoundDefinition
constexpr auto flybySoundDistance = 0x90; // System.Single
constexpr auto closeFlybySound = 0x98; // SoundDefinition
constexpr auto closeFlybyDistance = 0xa0; // System.Single
constexpr auto tumbleSpeed = 0xa4; // System.Single
constexpr auto tumbleAxis = 0xa8; // UnityEngine.Vector3
constexpr auto swimScale = 0xb4; // UnityEngine.Vector3
constexpr auto swimSpeed = 0xc0; // UnityEngine.Vector3
constexpr auto owner = 0xd0; // BasePlayer
constexpr auto sourceWeaponPrefab = 0xd8; // AttackEntity
constexpr auto sourceProjectilePrefab = 0xe0; // Projectile
constexpr auto mod = 0xe8; // ItemModProjectile
constexpr auto projectileID = 0xf0; // System.Int32
constexpr auto seed = 0xf4; // System.Int32
constexpr auto clientsideEffect = 0xf8; // System.Boolean
constexpr auto clientsideAttack = 0xf9; // System.Boolean
constexpr auto integrity = 0xfc; // System.Single
constexpr auto maxDistance = 0x100; // System.Single
constexpr auto modifier = 0x104; // Projectile/Modifier
constexpr auto invisible = 0x114; // System.Boolean
constexpr auto currentVelocity = 0x118; // UnityEngine.Vector3
constexpr auto currentPosition = 0x124; // UnityEngine.Vector3
constexpr auto traveledDistance = 0x130; // System.Single
constexpr auto traveledTime = 0x134; // System.Single
constexpr auto launchTime = 0x138; // System.Single
constexpr auto sentPosition = 0x13c; // UnityEngine.Vector3
constexpr auto previousPosition = 0x148; // UnityEngine.Vector3
constexpr auto previousVelocity = 0x154; // UnityEngine.Vector3
constexpr auto previousTraveledTime = 0x160; // System.Single
constexpr auto isUnderwater = 0x164; // System.Boolean
constexpr auto isRicochet = 0x165; // System.Boolean
constexpr auto isRetiring = 0x166; // System.Boolean
constexpr auto flybyPlayed = 0x167; // System.Boolean
constexpr auto wasFacingPlayer = 0x168; // System.Boolean
constexpr auto flybyPlane = 0x16c; // UnityEngine.Plane
constexpr auto flybyRay = 0x17c; // UnityEngine.Ray
constexpr auto cleanupAction = 0x198; // System.Action
constexpr auto hitTest = 0x1a0; // HitTest
constexpr auto swimRandom = 0x1a8; // System.Single
}
namespace StaticFields
{
constexpr auto moveDeltaTime = 0x0; // System.Single
constexpr auto lifeTime = 0x0; // System.Single
constexpr auto _fleshMaterialID = 0x0; // System.UInt32
constexpr auto _waterMaterialID = 0x4; // System.UInt32
constexpr auto cachedWaterString = 0x8; // System.UInt32
}
namespace Methods
{
constexpr auto CalculateDamage_HitInfo_info__Projectile_Modifier_mod__System_Single_scale = 7584928; // System.Void CalculateDamage(HitInfo info, Projectile/Modifier mod, System.Single scale)
constexpr auto get_isAuthoritative = 7605264; // System.Boolean get_isAuthoritative()
constexpr auto get_isAlive = 7605200; // System.Boolean get_isAlive()
constexpr auto Retire = 7600032; // System.Void Retire()
constexpr auto Cleanup = 7586160; // System.Void Cleanup()
constexpr auto AdjustVelocity_UnityEngine_Vector3_delta = 7584320; // System.Void AdjustVelocity(UnityEngine.Vector3 delta)
constexpr auto InitializeVelocity_UnityEngine_Vector3_overrideVel = 7596048; // System.Void InitializeVelocity(UnityEngine.Vector3 overrideVel)
constexpr auto OnDisable = 7596512; // System.Void OnDisable()
constexpr auto Update = 7604096; // System.Void Update()
constexpr auto SetEffectScale_System_Single_eScale = 7601536; // System.Void SetEffectScale(System.Single eScale)
constexpr auto DoFlybySound = 7586704; // System.Void DoFlybySound()
constexpr auto CalculateEffectScale = 7586048; // System.Single CalculateEffectScale()
constexpr auto UpdateVelocity_System_Single_deltaTime = 7603216; // System.Void UpdateVelocity(System.Single deltaTime)
constexpr auto DoVelocityUpdate_System_Single_deltaTime = 7595008; // System.Void DoVelocityUpdate(System.Single deltaTime)
constexpr auto DoMovement_System_Single_deltaTime = 7590048; // System.Void DoMovement(System.Single deltaTime)
constexpr auto DoRicochet_HitTest_test__UnityEngine_Vector3_point__UnityEngine_Vector3_normal = 7593872; // System.Boolean DoRicochet(HitTest test, UnityEngine.Vector3 point, UnityEngine.Vector3 normal)
constexpr auto DoHit_HitTest_test__UnityEngine_Vector3_point__UnityEngine_Vector3_normal = 7588240; // System.Boolean DoHit(HitTest test, UnityEngine.Vector3 point, UnityEngine.Vector3 normal)
constexpr auto AdditiveImpactEffect_HitInfo_info = 3694560; // System.Void AdditiveImpactEffect(HitInfo info)
constexpr auto Reflect_System_UInt32_seed__UnityEngine_Vector3_point__UnityEngine_Vector3_normal = 7597344; // System.Boolean Reflect(System.UInt32 seed, UnityEngine.Vector3 point, UnityEngine.Vector3 normal)
constexpr auto Refract_System_UInt32_seed__UnityEngine_Vector3_point__UnityEngine_Vector3_normal__System_Single_resistance = 7598832; // System.Boolean Refract(System.UInt32 seed, UnityEngine.Vector3 point, UnityEngine.Vector3 normal, System.Single resistance)
constexpr auto Refract_UnityEngine_Vector3_v__UnityEngine_Vector3_n__System_Single_f = 7598512; // UnityEngine.Vector3 Refract(UnityEngine.Vector3 v, UnityEngine.Vector3 n, System.Single f)
constexpr auto RandomRotation_System_UInt32_seed__System_Single_range = 7597104; // UnityEngine.Quaternion RandomRotation(System.UInt32 seed, System.Single range)
constexpr auto Launch = 7596368; // System.Void Launch()
constexpr auto _ctor = 7604720; // System.Void .ctor()
}
namespace StaticMethods
{
constexpr auto FleshMaterialID = 7595920; // System.UInt32 FleshMaterialID()
constexpr auto WaterMaterialID = 7604592; // System.UInt32 WaterMaterialID()
constexpr auto IsWaterMaterial_System_String_hitMaterial = 7596224; // System.Boolean IsWaterMaterial(System.String hitMaterial)
constexpr auto ShouldStopProjectile_UnityEngine_RaycastHit_hit = 7603040; // System.Boolean ShouldStopProjectile(UnityEngine.RaycastHit hit)
}
}
namespace PlayerModelSkin
{
namespace Fields
{
constexpr auto MaterialType = 0x18; // PlayerModelSkin/SkinMaterialType
constexpr auto SkinRenderer = 0x20; // UnityEngine.Renderer
}
namespace Methods
{
constexpr auto Setup_SkinSetCollection_skin__System_Single_hairNum__System_Single_meshNum = 7573424; // System.Void Setup(SkinSetCollection skin, System.Single hairNum, System.Single meshNum)
constexpr auto PreProcess_IPrefabProcessor_preProcess__UnityEngine_GameObject_rootObj__System_String_name__System_Boolean_serverside__System_Boolean_clientside__System_Boolean_bundling = 7573328; // System.Void PreProcess(IPrefabProcessor preProcess, UnityEngine.GameObject rootObj, System.String name, System.Boolean serverside, System.Boolean clientside, System.Boolean bundling)
constexpr auto _ctor = 3661504; // System.Void .ctor()
}
}
namespace Model
{
namespace Fields
{
constexpr auto collision = 0x18; // UnityEngine.SphereCollider
constexpr auto rootBone = 0x20; // UnityEngine.Transform
constexpr auto headBone = 0x28; // UnityEngine.Transform
constexpr auto eyeBone = 0x30; // UnityEngine.Transform
constexpr auto animator = 0x38; // UnityEngine.Animator
constexpr auto skeleton = 0x40; // Facepunch.Skeleton
constexpr auto boneTransforms = 0x48; // unknown
constexpr auto boneNames = 0x50; // unknown
constexpr auto boneDict = 0x58; // BoneDictionary
constexpr auto skin = 0x60; // System.Int32
constexpr auto _lodGroup = 0x68; // UnityEngine.LODGroup
}
namespace Methods
{
constexpr auto OnEnable = 7561968; // System.Void OnEnable()
constexpr auto BuildBoneDictionary = 7559696; // System.Void BuildBoneDictionary()
constexpr auto GetSkin = 3882848; // System.Int32 GetSkin()
constexpr auto FindBoneInternal_System_String_name = 7559952; // UnityEngine.Transform FindBoneInternal(System.String name)
constexpr auto FindBone_System_String_name = 7560016; // UnityEngine.Transform FindBone(System.String name)
constexpr auto FindBone_System_UInt32_hash = 7560128; // UnityEngine.Transform FindBone(System.UInt32 hash)
constexpr auto FindBoneID_UnityEngine_Transform_transform = 7559888; // System.UInt32 FindBoneID(UnityEngine.Transform transform)
constexpr auto GetBones = 7560720; // UnityEngine.Transform[] GetBones()
constexpr auto FindClosestBone_UnityEngine_Vector3_worldPos = 7560208; // UnityEngine.Transform FindClosestBone(UnityEngine.Vector3 worldPos)
constexpr auto get_lodGroup = 7563728; // UnityEngine.LODGroup get_lodGroup()
constexpr auto OnDisable = 7561696; // System.Void OnDisable()
constexpr auto SyncBones_Model_other = 7562816; // System.Void SyncBones(Model other)
constexpr auto Trigger_System_String_triggerName = 7563568; // System.Void Trigger(System.String triggerName)
constexpr auto ApplyVisibility_System_Boolean_vis__System_Boolean_animatorVis__System_Boolean_shadowVis = 7559344; // System.Void ApplyVisibility(System.Boolean vis, System.Boolean animatorVis, System.Boolean shadowVis)
constexpr auto PreProcess_IPrefabProcessor_process__UnityEngine_GameObject_rootObj__System_String_name__System_Boolean_serverside__System_Boolean_clientside__System_Boolean_bundling = 7561984; // System.Void PreProcess(IPrefabProcessor process, UnityEngine.GameObject rootObj, System.String name, System.Boolean serverside, System.Boolean clientside, System.Boolean bundling)
constexpr auto _ctor = 3661504; // System.Void .ctor()
}
namespace StaticMethods
{
constexpr auto GetTransform_UnityEngine_Transform_bone__UnityEngine_Vector3_position__BaseEntity_entity = 7560768; // UnityEngine.Transform GetTransform(UnityEngine.Transform bone, UnityEngine.Vector3 position, BaseEntity entity)
}
}
namespace MainCamera
{
namespace Fields
{
constexpr auto totalFrameTime = 0x140; // System.Double
constexpr auto lowestFrameTime = 0x148; // System.Double
constexpr auto highestFrameTime = 0x150; // System.Double
constexpr auto totalFrames = 0x158; // System.Int32
constexpr auto timeSinceFrameSubmit = 0x15c; // RealTimeSince
constexpr auto frameTime = 0x160; // System.Diagnostics.Stopwatch
}
namespace StaticFields
{
constexpr auto mainCamera = 0x0; // UnityEngine.Camera
constexpr auto mainCameraTransform = 0x8; // UnityEngine.Transform
constexpr auto PreCullCallback = 0x10; // System.Action
constexpr auto _velocity_k__BackingField = 0x18; // UnityEngine.Vector3
constexpr auto MipStreamingBudget = 0x28; // unknown
constexpr auto defaultSqrDistance = 0x0; // System.Single
}
namespace Methods
{
constexpr auto Awake = 7530624; // System.Void Awake()
constexpr auto Setup = 7535120; // System.Void Setup()
constexpr auto OnPreCull = 7533920; // System.Void OnPreCull()
constexpr auto OnDestroy = 7533664; // System.Void OnDestroy()
constexpr auto AdjustTextureStreamingBudget = 7530224; // System.Void AdjustTextureStreamingBudget()
constexpr auto Update = 7537184; // System.Void Update()
constexpr auto RecordFrameTime = 7534064; // System.Void RecordFrameTime()
constexpr auto LateUpdate = 7533168; // System.Void LateUpdate()
constexpr auto _ctor = 7537808; // System.Void .ctor()
}
namespace StaticMethods
{
constexpr auto get_isValid = 7538896; // System.Boolean get_isValid()
constexpr auto get_velocity = 7539616; // UnityEngine.Vector3 get_velocity()
constexpr auto set_velocity_UnityEngine_Vector3_value = 7540528; // System.Void set_velocity(UnityEngine.Vector3 value)
constexpr auto get_position = 7539104; // UnityEngine.Vector3 get_position()
constexpr auto set_position_UnityEngine_Vector3_value = 7539904; // System.Void set_position(UnityEngine.Vector3 value)
constexpr auto get_forward = 7538768; // UnityEngine.Vector3 get_forward()
constexpr auto set_forward_UnityEngine_Vector3_value = 7539728; // System.Void set_forward(UnityEngine.Vector3 value)
constexpr auto get_right = 7539232; // UnityEngine.Vector3 get_right()
constexpr auto set_right_UnityEngine_Vector3_value = 7540032; // System.Void set_right(UnityEngine.Vector3 value)
constexpr auto get_up = 7539488; // UnityEngine.Vector3 get_up()
constexpr auto set_up_UnityEngine_Vector3_value = 7540336; // System.Void set_up(UnityEngine.Vector3 value)
constexpr auto get_rotation = 7539360; // UnityEngine.Quaternion get_rotation()
constexpr auto set_rotation_UnityEngine_Quaternion_value = 7540208; // System.Void set_rotation(UnityEngine.Quaternion value)
constexpr auto get_Ray = 7537904; // UnityEngine.Ray get_Ray()
constexpr auto get_Raycast = 7538256; // UnityEngine.RaycastHit get_Raycast()
constexpr auto GetEnvironment = 7532640; // EnvironmentType GetEnvironment()
constexpr auto InEnvironment_EnvironmentType_type = 7532800; // System.Boolean InEnvironment(EnvironmentType type)
constexpr auto Distance_UnityEngine_Vector3_pos = 7531616; // System.Single Distance(UnityEngine.Vector3 pos)
constexpr auto SqrDistance_UnityEngine_Vector3_pos = 7536176; // System.Single SqrDistance(UnityEngine.Vector3 pos)
constexpr auto Distance_BaseEntity_ent = 7532096; // System.Single Distance(BaseEntity ent)
constexpr auto SqrDistance_BaseEntity_ent = 7535744; // System.Single SqrDistance(BaseEntity ent)
constexpr auto Distance2D_UnityEngine_Vector3_pos = 7530880; // System.Single Distance2D(UnityEngine.Vector3 pos)
constexpr auto SqrDistance2D_UnityEngine_Vector3_pos = 7535344; // System.Single SqrDistance2D(UnityEngine.Vector3 pos)
constexpr auto Distance2D_BaseEntity_ent = 7531216; // System.Single Distance2D(BaseEntity ent)
constexpr auto Trace_System_Single_maxDistance__BaseEntity_IgnoreEntity___null__System_Single_radius___0 = 7536544; // HitTest Trace(System.Single maxDistance, BaseEntity IgnoreEntity = null, System.Single radius = 0)
constexpr auto IsInFrontOfLocalPlayerCamera_UnityEngine_Vector3_point = 7532976; // System.Boolean IsInFrontOfLocalPlayerCamera(UnityEngine.Vector3 point)
constexpr auto _cctor = 7537648; // System.Void .cctor()
}
}
namespace ViewmodelScope
{
namespace Fields
{
constexpr auto smoothSpeed = 0x18; // System.Single
constexpr auto scopeMaterialOverride = 0x20; // UnityEngine.Material
constexpr auto wasVisible = 0x28; // System.Boolean
}
namespace Methods
{
constexpr auto OnEnable = 7071008; // System.Void OnEnable()
constexpr auto OnDisable = 7070896; // System.Void OnDisable()
constexpr auto Update = 7071008; // System.Void Update()
constexpr auto UpdateScope = 7071632; // System.Void UpdateScope()
constexpr auto GetScreenPos_UnityEngine_Vector3_oldPos = 7069376; // UnityEngine.Vector3 GetScreenPos(UnityEngine.Vector3 oldPos)
constexpr auto HideAttachments_UnityEngine_Transform_root__System_Boolean_shouldShow = 7070672; // System.Void HideAttachments(UnityEngine.Transform root, System.Boolean shouldShow)
constexpr auto System_Void_ViewmodelScope_ShowVMParts_System_Object__UnityEngine_Transform_root__System_Boolean_shouldShow = 19100864; // System.Void ViewmodelScope.ShowVMParts<System.Object>
constexpr auto GetScopeMod = 7068912; // ProjectileWeaponMod GetScopeMod()
constexpr auto GetLocalPlayerWeapon = 7068480; // BaseProjectile GetLocalPlayerWeapon()
constexpr auto ShouldShow = 7071024; // System.Boolean ShouldShow()
constexpr auto _ctor = 7072688; // System.Void .ctor()
}
}
namespace PlayerLoot
{
namespace Fields
{
constexpr auto entitySource = 0x20; // BaseEntity
constexpr auto itemSource = 0x28; // Item
constexpr auto containers = 0x30; // System.Collections.Generic.List`1
constexpr auto clientEntity = 0x38; // EntityRef
}
namespace Methods
{
constexpr auto OnRpcMessage_BasePlayer_player__System_UInt32_rpc__Network_Message_msg = 6291568; // System.Boolean OnRpcMessage(BasePlayer player, System.UInt32 rpc, Network.Message msg)
constexpr auto IsLooting = 6291488; // System.Boolean IsLooting()
constexpr auto Clear = 6290544; // System.Void Clear()
constexpr auto FindContainer_ItemContainerId_id = 6290720; // ItemContainer FindContainer(ItemContainerId id)
constexpr auto FindItem_ItemId_id = 6291088; // Item FindItem(ItemId id)
constexpr auto GetClientEntity = 6291472; // BaseEntity GetClientEntity()
constexpr auto ClientInit_BasePlayer_owner = 3694560; // System.Void ClientInit(BasePlayer owner)
constexpr auto UpdateLoot_BaseEntity_RPCMessage_rpc = 6292704; // System.Void UpdateLoot(BaseEntity/RPCMessage rpc)
constexpr auto _ctor = 6293440; // System.Void .ctor()
}
}
namespace PlayerInventory
{
namespace Fields
{
constexpr auto containerMain = 0x20; // ItemContainer
constexpr auto containerBelt = 0x28; // ItemContainer
constexpr auto containerWear = 0x30; // ItemContainer
constexpr auto crafting = 0x38; // ItemCrafter
constexpr auto loot = 0x40; // PlayerLoot
}
namespace StaticFields
{
constexpr auto BackpackGroundedError = 0x0; // Translate/Phrase
}
namespace Methods
{
constexpr auto OnRpcMessage_BasePlayer_player__System_UInt32_rpc__Network_Message_msg = 6288672; // System.Boolean OnRpcMessage(BasePlayer player, System.UInt32 rpc, Network.Message msg)
constexpr auto Initialize_BasePlayer_owner = 6287632; // System.Void Initialize(BasePlayer owner)
constexpr auto DoDestroy = 6285296; // System.Void DoDestroy()
constexpr auto ClientInit_BasePlayer_owner = 6285168; // System.Void ClientInit(BasePlayer owner)
constexpr auto UpdatedItemContainer_BaseEntity_RPCMessage_packet = 6289808; // System.Void UpdatedItemContainer(BaseEntity/RPCMessage packet)
constexpr auto FindItemByUID_ItemId_id = 6286880; // Item FindItemByUID(ItemId id)
constexpr auto FindItemByItemID_System_String_itemName = 6286384; // Item FindItemByItemID(System.String itemName)
constexpr auto FindItemByItemID_System_Int32_id = 6286176; // Item FindItemByItemID(System.Int32 id)
constexpr auto FindItemByItemName_System_String_name = 6286672; // Item FindItemByItemName(System.String name)
constexpr auto FindBySubEntityID_NetworkableId_subEntityID = 6285520; // Item FindBySubEntityID(NetworkableId subEntityID)
constexpr auto FindItemsByItemID_System_Int32_id = 6287120; // System.Collections.Generic.List`1<Item> FindItemsByItemID(System.Int32 id)
constexpr auto FindContainer_ItemContainerId_id = 6285728; // ItemContainer FindContainer(ItemContainerId id)
constexpr auto GetContainer_PlayerInventory_Type_id = 6287504; // ItemContainer GetContainer(PlayerInventory/Type id)
constexpr auto Load_ProtoBuf_PlayerInventory_msg = 6288336; // System.Void Load(ProtoBuf.PlayerInventory msg)
constexpr auto GetAmount_System_Int32_itemid = 6287376; // System.Int32 GetAmount(System.Int32 itemid)
constexpr auto AllItems = 6284928; // Item[] AllItems()
constexpr auto AllItemsNoAlloc_System_Collections_Generic_List_1_Item__items = 6284688; // System.Int32 AllItemsNoAlloc(System.Collections.Generic.List`1<Item> items)
constexpr auto FindAmmo_System_Collections_Generic_List_1_Item__list__Rust_AmmoTypes_ammoType = 6285440; // System.Void FindAmmo(System.Collections.Generic.List`1<Item> list, Rust.AmmoTypes ammoType)
constexpr auto HasAmmo_Rust_AmmoTypes_ammoType = 6287536; // System.Boolean HasAmmo(Rust.AmmoTypes ammoType)
constexpr auto _ctor = 6290480; // System.Void .ctor()
}
namespace StaticMethods
{
constexpr auto _cctor = 6290304; // System.Void .cctor()
}
}
namespace HeldEntity
{
namespace Fields
{
constexpr auto worldModelAnimator = 0x168; // UnityEngine.Animator
constexpr auto thirdPersonDeploySound = 0x170; // SoundDefinition
constexpr auto thirdPersonAimSound = 0x178; // SoundDefinition
constexpr auto thirdPersonAimEndSound = 0x180; // SoundDefinition
constexpr auto viewModel = 0x188; // ViewModel
constexpr auto isDeployed = 0x190; // System.Boolean
constexpr auto nextExamineTime = 0x194; // System.Single
constexpr auto handBone = 0x198; // System.String
constexpr auto HoldAnimationOverride = 0x1a0; // UnityEngine.AnimatorOverrideController
constexpr auto isBuildingTool = 0x1a8; // System.Boolean
constexpr auto hostileScore = 0x1ac; // System.Single
constexpr auto holsterInfo = 0x1b0; // HeldEntity/HolsterInfo
constexpr auto HeldCameraMode = 0x1b8; // BasePlayer/CameraMode
constexpr auto FirstPersonArmOffset = 0x1bc; // UnityEngine.Vector3
constexpr auto FirstPersonArmRotation = 0x1c8; // UnityEngine.Vector3
constexpr auto FirstPersonRotationStrength = 0x1d4; // System.Single
constexpr auto ownerItemUID = 0x1d8; // ItemId
constexpr auto _punches = 0x1e0; // System.Collections.Generic.List`1
constexpr auto punchAdded = 0x1e8; // UnityEngine.Vector3
constexpr auto lastPunchTime = 0x1f4; // System.Single
}
namespace StaticFields
{
constexpr auto lastExamineTime = 0x0; // System.Single
constexpr auto Flag_ForceVisible = 0x0; // BaseEntity/Flags
}
namespace Methods
{
constexpr auto OnRpcMessage_BasePlayer_player__System_UInt32_rpc__Network_Message_msg = 6157936; // System.Boolean OnRpcMessage(BasePlayer player, System.UInt32 rpc, Network.Message msg)
constexpr auto ClientInit_ProtoBuf_Entity_info = 6154944; // System.Void ClientInit(ProtoBuf.Entity info)
constexpr auto GetFovOverride = 6155632; // System.Single GetFovOverride()
constexpr auto DoNetworkDestroy = 6155152; // System.Void DoNetworkDestroy()
constexpr auto PostLateClientCycle = 3694560; // System.Void PostLateClientCycle()
constexpr auto PostNetworkUpdate = 6159168; // System.Void PostNetworkUpdate()
constexpr auto UpdateHolsteredOffset = 6161248; // System.Void UpdateHolsteredOffset()
constexpr auto EditViewAngles = 3694560; // System.Void EditViewAngles()
constexpr auto ClampPitch_System_Single_pitch = 3694560; // System.Void ClampPitch(System.Single pitch)
constexpr auto OnFrame = 6157536; // System.Void OnFrame()
constexpr auto OnInput = 3694560; // System.Void OnInput()
constexpr auto Examine = 6155216; // System.Void Examine()
constexpr auto OnDeploy = 6156832; // System.Void OnDeploy()
constexpr auto OnDeployed = 6157520; // System.Void OnDeployed()
constexpr auto OnHolster = 6157568; // System.Void OnHolster()
constexpr auto OnHolstered = 6157920; // System.Void OnHolstered()
constexpr auto OnViewmodelEvent_System_String_name = 3694560; // System.Void OnViewmodelEvent(System.String name)
constexpr auto OnReliableEvent_System_String_name = 3694560; // System.Void OnReliableEvent(System.String name)
constexpr auto ModifyCamera = 3694560; // System.Void ModifyCamera()
constexpr auto ShouldDestroyImmediately = 3694048; // System.Boolean ShouldDestroyImmediately()
constexpr auto UpdatePlayerModel_PlayerModel_playerModel = 6163744; // System.Void UpdatePlayerModel(PlayerModel playerModel)
constexpr auto get_HandDeploySwapType = 3810400; // PlayerModel/SwapType get_HandDeploySwapType()
constexpr auto ProcessPlayerModel_PlayerModel_playerModel = 3694560; // System.Void ProcessPlayerModel(PlayerModel playerModel)
constexpr auto GetHoldAnimations = 3703008; // UnityEngine.AnimatorOverrideController GetHoldAnimations()
constexpr auto GetMovementMultiplier = 6001104; // System.Single GetMovementMultiplier()
constexpr auto OnSpawnedForWorkshopPreview = 3694560; // System.Void OnSpawnedForWorkshopPreview()
constexpr auto HeldEntityBlocksMovement_InputState_state = 4889040; // System.Boolean HeldEntityBlocksMovement(InputState state)
constexpr auto ProcessSpectatorViewmodel_ViewModel_vm = 3694560; // System.Void ProcessSpectatorViewmodel(ViewModel vm)
constexpr auto ProcessSpectatorViewmodelEvent_ViewModel_vm__BaseEntity_Signal_signal__System_String_arg = 6159792; // System.Void ProcessSpectatorViewmodelEvent(ViewModel vm, BaseEntity/Signal signal, System.String arg)
constexpr auto get_hostile = 6164272; // System.Boolean get_hostile()
constexpr auto get_MuzzleTransform = 3810400; // UnityEngine.Transform get_MuzzleTransform()
constexpr auto LightsOn = 4922800; // System.Boolean LightsOn()
constexpr auto IsDeployed = 5702016; // System.Boolean IsDeployed()
constexpr auto GetOwnerPlayer = 6156544; // BasePlayer GetOwnerPlayer()
constexpr auto GetOwnerConnection = 6156080; // Network.Connection GetOwnerConnection()
constexpr auto CanBeUsedInWater = 4889040; // System.Boolean CanBeUsedInWater()
constexpr auto BlocksGestures = 4889040; // System.Boolean BlocksGestures()
constexpr auto GetOwnerItem = 6156336; // Item GetOwnerItem()
constexpr auto GetItem = 6156064; // Item GetItem()
constexpr auto GetOwnerItemDefinition = 6156208; // ItemDefinition GetOwnerItemDefinition()
constexpr auto IsInstrument = 4889040; // System.Boolean IsInstrument()
constexpr auto Load_BaseNetworkable_LoadInfo_info = 6156736; // System.Void Load(BaseNetworkable/LoadInfo info)
constexpr auto AddPunch_UnityEngine_Vector3_amount__System_Single_duration = 6154544; // System.Void AddPunch(UnityEngine.Vector3 amount, System.Single duration)
constexpr auto CL_Punch_BaseEntity_RPCMessage_msg = 6154768; // System.Void CL_Punch(BaseEntity/RPCMessage msg)
constexpr auto DoRecoilCompensation = 3694560; // System.Void DoRecoilCompensation()
constexpr auto GetAddedPunch = 6155600; // UnityEngine.Vector3 GetAddedPunch()
constexpr auto SimPunches = 6160000; // System.Void SimPunches()
constexpr auto _ctor = 6163984; // System.Void .ctor()
}
namespace StaticMethods
{
constexpr auto _cctor = 6163920; // System.Void .cctor()
}
}
namespace BuildingBlock
{
namespace Fields
{
constexpr auto blockDefinition = 0x2a0; // Construction
constexpr auto forceSkinRefresh = 0x2a8; // System.Boolean
constexpr auto lastSkinID = 0x2b0; // System.UInt64
constexpr auto _modelState_k__BackingField = 0x2b8; // System.Int32
constexpr auto lastModelState = 0x2bc; // System.Int32
constexpr auto _customColour_k__BackingField = 0x2c0; // System.UInt32
constexpr auto lastCustomColour = 0x2c4; // System.UInt32
constexpr auto grade = 0x2c8; // BuildingGrade/Enum
constexpr auto lastGrade = 0x2cc; // BuildingGrade/Enum
constexpr auto currentSkin = 0x2d0; // ConstructionSkin
constexpr auto skinChange = 0x2d8; // DeferredAction
constexpr auto placeholderRenderer = 0x2e0; // UnityEngine.MeshRenderer
constexpr auto placeholderCollider = 0x2e8; // UnityEngine.MeshCollider
constexpr auto CullBushes = 0x2f0; // System.Boolean
constexpr auto CheckForPipesOnModelChange = 0x2f1; // System.Boolean
constexpr auto AlternativePipeBounds = 0x2f8; // OBBComponent
}
namespace StaticFields
{
constexpr auto outsideLookupOffsets = 0x0; // unknown
constexpr auto HighlightMaterial = 0x8; // UnityEngine.Material
constexpr auto updateSkinQueueClient = 0x10; // BuildingBlock/UpdateSkinWorkQueue
}
namespace Methods
{
constexpr auto OnRpcMessage_BasePlayer_player__System_UInt32_rpc__Network_Message_msg = 6020656; // System.Boolean OnRpcMessage(BasePlayer player, System.UInt32 rpc, Network.Message msg)
constexpr auto ClientInit_ProtoBuf_Entity_info = 6003360; // System.Void ClientInit(ProtoBuf.Entity info)
constexpr auto PostNetworkUpdate = 6022768; // System.Void PostNetworkUpdate()
constexpr auto GetBuildMenu_BasePlayer_player__System_Action_rebuildMenuAction___null = 6012992; // System.Collections.Generic.List`1<GameMenu.Option> GetBuildMenu(BasePlayer player, System.Action rebuildMenuAction = null)
constexpr auto RefreshSkin_BaseEntity_RPCMessage_msg = 6022880; // System.Void RefreshSkin(BaseEntity/RPCMessage msg)
constexpr auto SpawnGibs = 6024336; // System.Void SpawnGibs()
constexpr auto ShouldLerp = 4889040; // System.Boolean ShouldLerp()
constexpr auto NeedsCrosshair_UnityEngine_Sprite_sprite = 4889040; // System.Boolean NeedsCrosshair(UnityEngine.Sprite sprite)
constexpr auto ResetState = 6023024; // System.Void ResetState()
constexpr auto InitShared = 6018208; // System.Void InitShared()
constexpr auto PostInitShared = 6022656; // System.Void PostInitShared()
constexpr auto DestroyShared = 6004160; // System.Void DestroyShared()
constexpr auto Categorize = 6002160; // System.String Categorize()
constexpr auto BoundsPadding = 6001104; // System.Single BoundsPadding()
constexpr auto IsOutside = 6018608; // System.Boolean IsOutside()
constexpr auto SupportsChildDeployables = 3694048; // System.Boolean SupportsChildDeployables()
constexpr auto CanDemolish_BasePlayer_player = 6001680; // System.Boolean CanDemolish(BasePlayer player)
constexpr auto IsDemolishable = 6018352; // System.Boolean IsDemolishable()
constexpr auto HasDemolishPrivilege_BasePlayer_player = 6016192; // System.Boolean HasDemolishPrivilege(BasePlayer player)
constexpr auto Demolish_BasePlayer_player = 6004064; // System.Void Demolish(BasePlayer player)
constexpr auto DemolishOptions_System_Collections_Generic_List_1_GameMenu_Option__options__BasePlayer_player = 6003584; // System.Void DemolishOptions(System.Collections.Generic.List`1<GameMenu.Option> options, BasePlayer player)
constexpr auto get_modelState = 6026592; // System.Int32 get_modelState()
constexpr auto set_modelState_System_Int32_value = 6026624; // System.Void set_modelState(System.Int32 value)
constexpr auto get_customColour = 6026576; // System.UInt32 get_customColour()
constexpr auto set_customColour_System_UInt32_value = 6026608; // System.Void set_customColour(System.UInt32 value)
constexpr auto SetConditionalModel_System_Int32_state = 6024016; // System.Void SetConditionalModel(System.Int32 state)
constexpr auto GetConditionalModel_System_Int32_index = 6013776; // System.Boolean GetConditionalModel(System.Int32 index)
constexpr auto get_currentGrade = 6026080; // ConstructionGrade get_currentGrade()
constexpr auto CanChangeToGrade_BuildingGrade_Enum_iGrade__System_UInt64_iSkin__BasePlayer_player = 6001616; // System.Boolean CanChangeToGrade(BuildingGrade/Enum iGrade, System.UInt64 iSkin, BasePlayer player)
constexpr auto HasUpgradePrivilege_BuildingGrade_Enum_iGrade__System_UInt64_iSkin__BasePlayer_player = 6016640; // System.Boolean HasUpgradePrivilege(BuildingGrade/Enum iGrade, System.UInt64 iSkin, BasePlayer player)
constexpr auto IsUpgradeBlocked = 6019648; // System.Boolean IsUpgradeBlocked()
constexpr auto CanAffordUpgrade_BuildingGrade_Enum_iGrade__System_UInt64_iSkin__BasePlayer_player = 6001168; // System.Boolean CanAffordUpgrade(BuildingGrade/Enum iGrade, System.UInt64 iSkin, BasePlayer player)
constexpr auto SetGrade_BuildingGrade_Enum_iGrade = 6024032; // System.Void SetGrade(BuildingGrade/Enum iGrade)
constexpr auto UpdateGrade = 6024480; // System.Void UpdateGrade()
constexpr auto OnSkinChanged_System_UInt64_oldSkinID__System_UInt64_newSkinID = 6022640; // System.Void OnSkinChanged(System.UInt64 oldSkinID, System.UInt64 newSkinID)
constexpr auto OnSkinPreProcess_IPrefabProcessor_preProcess__UnityEngine_GameObject_rootObj__System_String_name__System_Boolean_serverside__System_Boolean_clientside__System_Boolean_bundling = 3694560; // System.Void OnSkinPreProcess(IPrefabProcessor preProcess, UnityEngine.GameObject rootObj, System.String name, System.Boolean serverside, System.Boolean clientside, System.Boolean bundling)
constexpr auto DoCreationEffect_Client_BuildingGrade_Enum_newGrade__System_UInt64_iSkin = 6004352; // System.Void DoCreationEffect_Client(BuildingGrade/Enum newGrade, System.UInt64 iSkin)
constexpr auto DoUpgradeEffect_BaseEntity_RPCMessage_msg = 6009008; // System.Void DoUpgradeEffect(BaseEntity/RPCMessage msg)
constexpr auto IsDoingUpgradeEffect = 6018480; // System.Boolean IsDoingUpgradeEffect()
constexpr auto FinishUpgradeEffect = 6012752; // System.Void FinishUpgradeEffect()
constexpr auto UpgradeToGrade_BuildingGrade_Enum_iGrade__System_UInt64_iSkin__BasePlayer_player = 6025216; // System.Void UpgradeToGrade(BuildingGrade/Enum iGrade, System.UInt64 iSkin, BasePlayer player)
constexpr auto GradeChangingOptions_System_Collections_Generic_List_1_GameMenu_Option__options__BasePlayer_player__System_Action_rebuildMenuAction___null = 6015952; // System.Void GradeChangingOptions(System.Collections.Generic.List`1<GameMenu.Option> options, BasePlayer player, System.Action rebuildMenuAction = null)
constexpr auto GetGradeChangingOption_System_Collections_Generic_List_1_GameMenu_Option__options__BasePlayer_player__System_Action_rebuildMenuAction__BuildingGrade_Enum_selectedGrade = 6013808; // System.Void GetGradeChangingOption(System.Collections.Generic.List`1<GameMenu.Option> options, BasePlayer player, System.Action rebuildMenuAction, BuildingGrade/Enum selectedGrade)
constexpr auto NeedsSkinChange = 6020480; // System.Boolean NeedsSkinChange()
constexpr auto UpdateSkin_System_Boolean_force___False = 6024752; // System.Void UpdateSkin(System.Boolean force = False)
constexpr auto DestroySkin = 6004176; // System.Void DestroySkin()
constexpr auto UpdatePlaceholder_System_Boolean_state = 6024544; // System.Void UpdatePlaceholder(System.Boolean state)
constexpr auto ChangeSkin = 6002864; // System.Void ChangeSkin()
constexpr auto ChangeSkin_GameObjectRef_prefab = 6002208; // System.Void ChangeSkin(GameObjectRef prefab)
constexpr auto ShouldBlockProjectiles = 6024320; // System.Boolean ShouldBlockProjectiles()
constexpr auto MaxHealth = 6020432; // System.Single MaxHealth()
constexpr auto BuildCost = 6001120; // System.Collections.Generic.List`1<ItemAmount> BuildCost()
constexpr auto DrawHighlight = 6009936; // System.Void DrawHighlight()
constexpr auto Highlight_BuildingBlock_MeshRender_mesh = 6016928; // System.Void Highlight(BuildingBlock/MeshRender mesh)
constexpr auto CanRotate_BasePlayer_player = 6002032; // System.Boolean CanRotate(BasePlayer player)
constexpr auto IsRotatable = 6019184; // System.Boolean IsRotatable()
constexpr auto IsRotationBlocked = 6019264; // System.Boolean IsRotationBlocked()
constexpr auto HasRotationPrivilege_BasePlayer_player = 6016416; // System.Boolean HasRotationPrivilege(BasePlayer player)
constexpr auto Rotation_BasePlayer_player = 6023840; // System.Void Rotation(BasePlayer player)
constexpr auto RotationOptions_System_Collections_Generic_List_1_GameMenu_Option__options__BasePlayer_player = 6023136; // System.Void RotationOptions(System.Collections.Generic.List`1<GameMenu.Option> options, BasePlayer player)
constexpr auto Load_BaseNetworkable_LoadInfo_info = 6020032; // System.Void Load(BaseNetworkable/LoadInfo info)
constexpr auto _ctor = 6026048; // System.Void .ctor()
}
namespace StaticMethods
{
constexpr auto _cctor = 6025456; // System.Void .cctor()
}
}
namespace BaseProjectile
{
namespace Fields
{
constexpr auto NoiseRadius = 0x280; // System.Single
constexpr auto damageScale = 0x284; // System.Single
constexpr auto distanceScale = 0x288; // System.Single
constexpr auto projectileVelocityScale = 0x28c; // System.Single
constexpr auto automatic = 0x290; // System.Boolean
constexpr auto usableByTurret = 0x291; // System.Boolean
constexpr auto turretDamageScale = 0x294; // System.Single
constexpr auto attackFX = 0x298; // GameObjectRef
constexpr auto silencedAttack = 0x2a0; // GameObjectRef
constexpr auto muzzleBrakeAttack = 0x2a8; // GameObjectRef
constexpr auto MuzzlePoint = 0x2b0; // UnityEngine.Transform
constexpr auto reloadTime = 0x2b8; // System.Single
constexpr auto canUnloadAmmo = 0x2bc; // System.Boolean
constexpr auto primaryMagazine = 0x2c0; // BaseProjectile/Magazine
constexpr auto fractionalReload = 0x2c8; // System.Boolean
constexpr auto reloadStartDuration = 0x2cc; // System.Single
constexpr auto reloadFractionDuration = 0x2d0; // System.Single
constexpr auto reloadEndDuration = 0x2d4; // System.Single
constexpr auto aimSway = 0x2d8; // System.Single
constexpr auto aimSwaySpeed = 0x2dc; // System.Single
constexpr auto recoil = 0x2e0; // RecoilProperties
constexpr auto aimconeCurve = 0x2e8; // UnityEngine.AnimationCurve
constexpr auto aimCone = 0x2f0; // System.Single
constexpr auto hipAimCone = 0x2f4; // System.Single
constexpr auto aimconePenaltyPerShot = 0x2f8; // System.Single
constexpr auto aimConePenaltyMax = 0x2fc; // System.Single
constexpr auto aimconePenaltyRecoverTime = 0x300; // System.Single
constexpr auto aimconePenaltyRecoverDelay = 0x304; // System.Single
constexpr auto stancePenaltyScale = 0x308; // System.Single
constexpr auto hasADS = 0x30c; // System.Boolean
constexpr auto noAimingWhileCycling = 0x30d; // System.Boolean
constexpr auto manualCycle = 0x30e; // System.Boolean
constexpr auto needsCycle = 0x30f; // System.Boolean
constexpr auto isCycling = 0x310; // System.Boolean
constexpr auto aiming = 0x311; // System.Boolean
constexpr auto useEmptyAmmoState = 0x312; // System.Boolean
constexpr auto isBurstWeapon = 0x313; // System.Boolean
constexpr auto canChangeFireModes = 0x314; // System.Boolean
constexpr auto defaultOn = 0x315; // System.Boolean
constexpr auto internalBurstRecoilScale = 0x318; // System.Single
constexpr auto internalBurstFireRateScale = 0x31c; // System.Single
constexpr auto internalBurstAimConeScale = 0x320; // System.Single
constexpr auto Toast_BurstDisabled = 0x328; // Translate/Phrase
constexpr auto Toast_BurstEnabled = 0x330; // Translate/Phrase
constexpr auto resetDuration = 0x338; // System.Single
constexpr auto numShotsFired = 0x33c; // System.Int32
constexpr auto nextReloadTime = 0x340; // System.Single
constexpr auto startReloadTime = 0x344; // System.Single
constexpr auto stancePenalty = 0x348; // System.Single
constexpr auto aimconePenalty = 0x34c; // System.Single
constexpr auto cachedModHash = 0x350; // System.UInt32
constexpr auto sightAimConeScale = 0x354; // System.Single
constexpr auto sightAimConeOffset = 0x358; // System.Single
constexpr auto hipAimConeScale = 0x35c; // System.Single
constexpr auto hipAimConeOffset = 0x360; // System.Single
constexpr auto isReloading = 0x364; // System.Boolean
constexpr auto timeSinceReloadFinished = 0x368; // TimeSince
constexpr auto swaySampleTime = 0x36c; // System.Single
constexpr auto lastShotTime = 0x370; // System.Single
constexpr auto reloadPressTime = 0x374; // System.Single
constexpr auto ammoTypePreReload = 0x378; // ItemDefinition
constexpr auto fractionalReloadDesiredCount = 0x380; // System.Int32
constexpr auto fractionalReloadNumAdded = 0x384; // System.Int32
constexpr auto currentBurst = 0x388; // System.Int32
constexpr auto triggerReady = 0x38c; // System.Boolean
constexpr auto nextHeightCheckTime = 0x390; // System.Single
constexpr auto cachedUnderground = 0x394; // System.Boolean
constexpr auto createdProjectiles = 0x398; // System.Collections.Generic.List`1
}
namespace StaticFields
{
constexpr auto maxDistance = 0x0; // System.Single
constexpr auto Param_Ammo_True = 0x0; // System.Int32
constexpr auto Param_Ammo_False = 0x4; // System.Int32
}
namespace Methods
{
constexpr auto OnRpcMessage_BasePlayer_player__System_UInt32_rpc__Network_Message_msg = 5973344; // System.Boolean OnRpcMessage(BasePlayer player, System.UInt32 rpc, Network.Message msg)
constexpr auto SetAmmoCount_System_Int32_newCount = 5977680; // System.Void SetAmmoCount(System.Int32 newCount)
constexpr auto ModifyAmmoCount_System_Int32_amount = 5970832; // System.Void ModifyAmmoCount(System.Int32 amount)
constexpr auto get_recoilProperties = 5982192; // RecoilProperties get_recoilProperties()
constexpr auto GetInheritedVelocity_BasePlayer_player__UnityEngine_Vector3_direction = 5961328; // UnityEngine.Vector3 GetInheritedVelocity(BasePlayer player, UnityEngine.Vector3 direction)
constexpr auto GetDamageScale_System_Boolean_getMax___False = 5961296; // System.Single GetDamageScale(System.Boolean getMax = False)
constexpr auto GetDistanceScale_System_Boolean_getMax___False = 5961312; // System.Single GetDistanceScale(System.Boolean getMax = False)
constexpr auto GetProjectileVelocityScale_System_Boolean_getMax___False = 5963216; // System.Single GetProjectileVelocityScale(System.Boolean getMax = False)
constexpr auto StartReloadCooldown_System_Single_cooldown = 5980304; // System.Void StartReloadCooldown(System.Single cooldown)
constexpr auto ResetReloadCooldown = 5976672; // System.Void ResetReloadCooldown()
constexpr auto HasReloadCooldown = 5964880; // System.Boolean HasReloadCooldown()
constexpr auto GetReloadCooldown = 5963248; // System.Single GetReloadCooldown()
constexpr auto GetReloadIdle = 5963440; // System.Single GetReloadIdle()
constexpr auto OnDrawGizmos = 5970960; // System.Void OnDrawGizmos()
constexpr auto GetRecoil = 5963232; // RecoilProperties GetRecoil()
constexpr auto get_isSemiAuto = 5982176; // System.Boolean get_isSemiAuto()
constexpr auto get_MuzzleTransform = 5982160; // UnityEngine.Transform get_MuzzleTransform()
constexpr auto AmmoFraction = 5948144; // System.Single AmmoFraction()
constexpr auto GetAimCone = 5957632; // System.Single GetAimCone()
constexpr auto ScaleRepeatDelay_System_Single_delay = 5976688; // System.Single ScaleRepeatDelay(System.Single delay)
constexpr auto GetProjectileModifier = 5961440; // Projectile/Modifier GetProjectileModifier()
constexpr auto UsingBurstMode = 5980592; // System.Boolean UsingBurstMode()
constexpr auto UsingInternalBurstMode = 5981072; // System.Boolean UsingInternalBurstMode()
constexpr auto IsBurstEligable = 5965072; // System.Boolean IsBurstEligable()
constexpr auto TimeBetweenBursts = 5980384; // System.Single TimeBetweenBursts()
constexpr auto DidAttackClientside = 5949888; // System.Void DidAttackClientside()
constexpr auto ClientIsReloading = 5949120; // System.Boolean ClientIsReloading()
constexpr auto NotifySpectatorReloading_System_Boolean_state = 5970880; // System.Void NotifySpectatorReloading(System.Boolean state)
constexpr auto EditViewAngles = 5954976; // System.Void EditViewAngles()
constexpr auto OnFrame = 5971824; // System.Void OnFrame()
constexpr auto ShotFired = 5977840; // System.Void ShotFired()
constexpr auto SimulateAimcone = 5977936; // System.Void SimulateAimcone()
constexpr auto CanAim = 5948496; // System.Boolean CanAim()
constexpr auto OnInput = 5971840; // System.Void OnInput()
constexpr auto ReadyToAim = 5976480; // System.Boolean ReadyToAim()
constexpr auto ReadyToFire = 5976576; // System.Boolean ReadyToFire()
constexpr auto AmmoTypeClicked_ItemDefinition_newAmmoType = 5948192; // System.Void AmmoTypeClicked(ItemDefinition newAmmoType)
constexpr auto AddAmmoOption_ItemDefinition_ammo__System_Collections_Generic_List_1_GameMenu_Option__opts__System_Int32_order___0 = 5947632; // System.Void AddAmmoOption(ItemDefinition ammo, System.Collections.Generic.List`1<GameMenu.Option> opts, System.Int32 order = 0)
constexpr auto GetReloadMenu_BasePlayer_player = 5963488; // System.Collections.Generic.List`1<GameMenu.Option> GetReloadMenu(BasePlayer player)
constexpr auto PredictAmmoType = 5975488; // System.Void PredictAmmoType()
constexpr auto HasMoreThanOneAmmoType_Rust_AmmoTypes_ammoType = 5964208; // System.Boolean HasMoreThanOneAmmoType(Rust.AmmoTypes ammoType)
constexpr auto OnDeploy = 5970896; // System.Void OnDeploy()
constexpr auto DoReload = 5953248; // System.Void DoReload()
constexpr auto InsertAmmoFraction = 5964928; // System.Void InsertAmmoFraction()
constexpr auto CancelFractionalReloading = 5948576; // System.Void CancelFractionalReloading()
constexpr auto ClientFinishFractionalReload = 5948768; // System.Void ClientFinishFractionalReload()
constexpr auto ClientSingleReload = 5949136; // System.Void ClientSingleReload()
constexpr auto IsBursting = 5965520; // System.Boolean IsBursting()
constexpr auto GetBurstModeCount = 5960832; // System.Int32 GetBurstModeCount()
constexpr auto DoAttack = 5950080; // System.Void DoAttack()
constexpr auto BeginCycle = 5948352; // System.Void BeginCycle()
constexpr auto LaunchProjectile = 5970304; // System.Void LaunchProjectile()
constexpr auto DryFire = 5954768; // System.Void DryFire()
constexpr auto ProcessSpectatorViewmodel_ViewModel_vm = 5976384; // System.Void ProcessSpectatorViewmodel(ViewModel vm)
constexpr auto ProcessSpectatorViewmodelEvent_ViewModel_vm__BaseEntity_Signal_signal__System_String_arg = 5976064; // System.Void ProcessSpectatorViewmodelEvent(ViewModel vm, BaseEntity/Signal signal, System.String arg)
constexpr auto CanAttack = 5948544; // System.Boolean CanAttack()
constexpr auto GetReloadDuration = 5963296; // System.Single GetReloadDuration()
constexpr auto GetAvailableAmmo = 5960320; // System.Int32 GetAvailableAmmo()
constexpr auto IsBurstDisabled = 5965024; // System.Boolean IsBurstDisabled()
constexpr auto IsSilenced = 5965536; // System.Boolean IsSilenced()
constexpr auto FiredUnderground = 5957488; // System.Boolean FiredUnderground()
constexpr auto OnSignal_BaseEntity_Signal_signal__System_String_arg = 5973584; // System.Void OnSignal(BaseEntity/Signal signal, System.String arg)
constexpr auto LaunchProjectileClientside_ItemDefinition_ammo__System_Int32_projectileCount__System_Single_projSpreadaimCone = 5965984; // System.Void LaunchProjectileClientside(ItemDefinition ammo, System.Int32 projectileCount, System.Single projSpreadaimCone)
constexpr auto CreateProjectile_System_String_prefabPath__UnityEngine_Vector3_pos__UnityEngine_Vector3_forward__UnityEngine_Vector3_velocity = 5949504; // Projectile CreateProjectile(System.String prefabPath, UnityEngine.Vector3 pos, UnityEngine.Vector3 forward, UnityEngine.Vector3 velocity)
constexpr auto UpdateAmmoDisplay = 5980416; // System.Void UpdateAmmoDisplay()
constexpr auto Load_BaseNetworkable_LoadInfo_info = 5970672; // System.Void Load(BaseNetworkable/LoadInfo info)
constexpr auto _ctor = 5981264; // System.Void .ctor()
}
namespace StaticMethods
{
constexpr auto _cctor = 5981136; // System.Void .cctor()
}
}
namespace BaseMelee
{
namespace Fields
{
constexpr auto damageProperties = 0x280; // DamageProperties
constexpr auto damageTypes = 0x288; // System.Collections.Generic.List`1
constexpr auto maxDistance = 0x290; // System.Single
constexpr auto attackRadius = 0x294; // System.Single
constexpr auto isAutomatic = 0x298; // System.Boolean
constexpr auto blockSprintOnAttack = 0x299; // System.Boolean
constexpr auto canUntieCrates = 0x29a; // System.Boolean
constexpr auto strikeFX = 0x2a0; // GameObjectRef
constexpr auto useStandardHitEffects = 0x2a8; // System.Boolean
constexpr auto aiStrikeDelay = 0x2ac; // System.Single
constexpr auto swingEffect = 0x2b0; // GameObjectRef
constexpr auto materialStrikeFX = 0x2b8; // System.Collections.Generic.List`1
constexpr auto heartStress = 0x2c0; // System.Single
constexpr auto gathering = 0x2c8; // ResourceDispenser/GatherProperties
constexpr auto throwReady = 0x2d0; // System.Boolean
constexpr auto canThrowAsProjectile = 0x2d1; // System.Boolean
constexpr auto canAiHearIt = 0x2d2; // System.Boolean
constexpr auto onlyThrowAsProjectile = 0x2d3; // System.Boolean
}
namespace Methods
{
constexpr auto OnRpcMessage_BasePlayer_player__System_UInt32_rpc__Network_Message_msg = 5936240; // System.Boolean OnRpcMessage(BasePlayer player, System.UInt32 rpc, Network.Message msg)
constexpr auto GetAttackStats_HitInfo_info = 5934592; // System.Void GetAttackStats(HitInfo info)
constexpr auto DoAttackShared_HitInfo_info = 5931472; // System.Void DoAttackShared(HitInfo info)
constexpr auto OnInput = 5935232; // System.Void OnInput()
constexpr auto get_CanAttack = 3694048; // System.Boolean get_CanAttack()
constexpr auto get_CanThrow = 3694048; // System.Boolean get_CanThrow()
constexpr auto ClientAttack = 3694560; // System.Void ClientAttack()
constexpr auto OnHolstered = 5935200; // System.Void OnHolstered()
constexpr auto ProcessAttack_HitTest_hit = 5936704; // System.Void ProcessAttack(HitTest hit)
constexpr auto DoAttack = 5932256; // System.Void DoAttack()
constexpr auto DoViewmodelImpact_HitTest_test = 5934448; // System.Void DoViewmodelImpact(HitTest test)
constexpr auto OnViewmodelEvent_System_String_name = 5936480; // System.Void OnViewmodelEvent(System.String name)
constexpr auto ProcessSpectatorViewmodel_ViewModel_vm = 5937552; // System.Void ProcessSpectatorViewmodel(ViewModel vm)
constexpr auto ProcessSpectatorViewmodelEvent_ViewModel_vm__BaseEntity_Signal_signal__System_String_arg = 5937360; // System.Void ProcessSpectatorViewmodelEvent(ViewModel vm, BaseEntity/Signal signal, System.String arg)
constexpr auto GetGatherInfoFromIndex_ResourceDispenser_GatherType_index = 5934688; // ResourceDispenser/GatherPropertyEntry GetGatherInfoFromIndex(ResourceDispenser/GatherType index)
constexpr auto CanHit_HitTest_info = 3694048; // System.Boolean CanHit(HitTest info)
constexpr auto TotalDamage = 5937728; // System.Single TotalDamage()
constexpr auto CanBeUsedInWater = 3694048; // System.Boolean CanBeUsedInWater()
constexpr auto GetStrikeEffectPath_System_String_materialName = 5934848; // System.String GetStrikeEffectPath(System.String materialName)
constexpr auto GetInheritedVelocity_BasePlayer_player__UnityEngine_Vector3_direction = 5934736; // UnityEngine.Vector3 GetInheritedVelocity(BasePlayer player, UnityEngine.Vector3 direction)
constexpr auto DoThrow = 5932752; // System.Void DoThrow()
constexpr auto CreateProjectile_System_String_prefabPath__UnityEngine_Vector3_pos__UnityEngine_Vector3_forward__UnityEngine_Vector3_velocity = 5931136; // Projectile CreateProjectile(System.String prefabPath, UnityEngine.Vector3 pos, UnityEngine.Vector3 forward, UnityEngine.Vector3 velocity)
constexpr auto _ctor = 5938064; // System.Void .ctor()
}
}
namespace BaseEntity
{
namespace Fields
{
constexpr auto ragdoll = 0x78; // Ragdoll
constexpr auto positionLerp = 0x80; // PositionLerp
constexpr auto menuOptions = 0x88; // System.Collections.Generic.List`1
constexpr auto bounds = 0x90; // UnityEngine.Bounds
constexpr auto impactEffect = 0xa8; // GameObjectRef
constexpr auto enableSaving = 0xb0; // System.Boolean
constexpr auto syncPosition = 0xb1; // System.Boolean
constexpr auto model = 0xb8; // Model
constexpr auto flags = 0xc0; // BaseEntity/Flags
constexpr auto parentBone = 0xc4; // System.UInt32
constexpr auto skinID = 0xc8; // System.UInt64
constexpr auto _components = 0xd0; // unknown
constexpr auto HasBrain = 0xd8; // System.Boolean
constexpr auto _name = 0xe0; // System.String
constexpr auto _OwnerID_k__BackingField = 0xe8; // System.UInt64
constexpr auto broadcastProtocol = 0xf0; // System.UInt32
constexpr auto links = 0xf8; // System.Collections.Generic.List`1
constexpr auto linkedToNeighbours = 0x100; // System.Boolean
constexpr auto _pendingFileRequests = 0x108; // System.Collections.Generic.List`1
constexpr auto updateParentingAction = 0x110; // System.Action
constexpr auto addedToParentEntity = 0x118; // BaseEntity
constexpr auto itemSkin = 0x120; // ItemSkin
constexpr auto entitySlots = 0x128; // unknown
constexpr auto triggers = 0x130; // System.Collections.Generic.List`1
constexpr auto isVisible = 0x138; // System.Boolean
constexpr auto isAnimatorVisible = 0x139; // System.Boolean
constexpr auto isShadowVisible = 0x13a; // System.Boolean
constexpr auto localOccludee = 0x140; // OccludeeSphere
constexpr auto _Weight_k__BackingField = 0x160; // System.Single
}
namespace StaticFields
{
constexpr auto globalBroadcastQueue = 0x0; // System.Collections.Generic.Queue`1
constexpr auto globalBroadcastProtocol = 0x8; // System.UInt32
constexpr auto MaxFileRequestsPerSecond = 0x0; // System.Int32
constexpr auto QueuedFileRequests = 0x10; // System.Collections.Generic.Queue`1
constexpr auto _fileRequestCounter = 0x18; // Network.TimeAverageValueData
constexpr auto _flushQueuedFileRequests = 0x30; // System.Action
}
namespace Methods
{
constexpr auto OnRpcMessage_BasePlayer_player__System_UInt32_rpc__Network_Message_msg = 5848496; // System.Boolean OnRpcMessage(BasePlayer player, System.UInt32 rpc, Network.Message msg)
constexpr auto GetExtrapolationTime = 5828576; // System.Single GetExtrapolationTime()
constexpr auto GetInterpolationDelay = 5829600; // System.Single GetInterpolationDelay()
constexpr auto GetInterpolationInertia = 5829680; // System.Single GetInterpolationInertia()
constexpr auto GetInterpolationSmoothing = 5829760; // System.Single GetInterpolationSmoothing()
constexpr auto GetAngularVelocityClient = 5826896; // UnityEngine.Quaternion GetAngularVelocityClient()
constexpr auto GetLocalVelocityClient = 5830512; // UnityEngine.Vector3 GetLocalVelocityClient()
constexpr auto DrawInterpolationState_Rust_Interpolation_Interpolator_1_Segment_Rust_Interpolation_TransformSnapshot__segment__System_Collections_Generic_List_1_Rust_Interpolation_TransformSnapshot__entries = 5818944; // System.Void DrawInterpolationState(Rust.Interpolation.Interpolator`1/Segment<Rust.Interpolation.TransformSnapshot> segment, System.Collections.Generic.List`1<Rust.Interpolation.TransformSnapshot> entries)
constexpr auto LerpIdleDisable = 5842080; // System.Void LerpIdleDisable()
constexpr auto ClientInit_ProtoBuf_Entity_info = 5815344; // System.Void ClientInit(ProtoBuf.Entity info)
constexpr auto ClientOnEnable = 5815520; // System.Void ClientOnEnable()
constexpr auto OnPositionalFromNetwork_UnityEngine_Vector3_vPos__UnityEngine_Vector3_vAng__System_Single_time = 5847600; // System.Void OnPositionalFromNetwork(UnityEngine.Vector3 vPos, UnityEngine.Vector3 vAng, System.Single time)
constexpr auto StartLerping_System_Single_time = 5860864; // System.Void StartLerping(System.Single time)
constexpr auto StopLerping = 5861248; // System.Void StopLerping()
constexpr auto ShouldLerp = 5859984; // System.Boolean ShouldLerp()
constexpr auto SetNetworkPosition_UnityEngine_Vector3_vPos = 5858736; // System.Void SetNetworkPosition(UnityEngine.Vector3 vPos)
constexpr auto SetNetworkRotation_UnityEngine_Quaternion_qRot = 5859088; // System.Void SetNetworkRotation(UnityEngine.Quaternion qRot)
constexpr auto DoDestroyEffects_BaseNetworkable_DestroyMode_mode__Network_Message_msg = 5818912; // System.Void DoDestroyEffects(BaseNetworkable/DestroyMode mode, Network.Message msg)
constexpr auto SpawnGibs = 5860240; // System.Void SpawnGibs()
constexpr auto DoNetworkDestroy = 3679632; // System.Void DoNetworkDestroy()
constexpr auto PostNetworkUpdate = 5853872; // System.Void PostNetworkUpdate()
constexpr auto OnBecameRagdoll_Ragdoll_rdoll = 5846496; // System.Void OnBecameRagdoll(Ragdoll rdoll)
constexpr auto GetMenuInformation_UnityEngine_GameObject_primaryObject__BasePlayer_player = 5830880; // GameMenu.Info GetMenuInformation(UnityEngine.GameObject primaryObject, BasePlayer player)
constexpr auto HideMenuItems_BasePlayer_player = 5836032; // System.Boolean HideMenuItems(BasePlayer player)
constexpr auto GetMenuItems_BasePlayer_player__System_Boolean_fromParent___False = 5831536; // System.Collections.Generic.List`1<GameMenu.Option> GetMenuItems(BasePlayer player, System.Boolean fromParent = False)
constexpr auto OnUse_BasePlayer_player = 5853248; // System.Void OnUse(BasePlayer player)
constexpr auto OnUseHeld_BasePlayer_player = 5852768; // System.Void OnUseHeld(BasePlayer player)
constexpr auto OnUseStopped_BasePlayer_player = 3694560; // System.Void OnUseStopped(BasePlayer player)
constexpr auto OnRendered = 3694560; // System.Void OnRendered()
constexpr auto DoClientDestroy = 5818176; // System.Void DoClientDestroy()
constexpr auto GetEyeTransform = 5828656; // UnityEngine.Transform GetEyeTransform()
constexpr auto NeedsCrosshair_UnityEngine_Sprite_sprite = 5846256; // System.Boolean NeedsCrosshair(UnityEngine.Sprite sprite)
constexpr auto AlwaysShowCrosshair = 4889040; // System.Boolean AlwaysShowCrosshair()
constexpr auto ShouldDestroyWithGroup = 5859824; // System.Boolean ShouldDestroyWithGroup()
constexpr auto DetachEffects = 5817184; // System.Void DetachEffects()
constexpr auto OnVoiceData_System_Byte___data = 3694560; // System.Void OnVoiceData(System.Byte[] data)
constexpr auto LookingAtTick = 3694560; // System.Void LookingAtTick()
constexpr auto GetEntityMenu_BasePlayer_player__System_Collections_Generic_List_1_GameMenu_Option__optionList = 5828240; // System.Void GetEntityMenu(BasePlayer player, System.Collections.Generic.List`1<GameMenu.Option> optionList)
constexpr auto GetMenuOptions_System_Collections_Generic_List_1_GameMenu_Option__list = 3694560; // System.Void GetMenuOptions(System.Collections.Generic.List`1<GameMenu.Option> list)
constexpr auto get_HasMenuOptions = 4889040; // System.Boolean get_HasMenuOptions()
constexpr auto GetItemOptions_System_Collections_Generic_List_1_GameMenu_Option__options = 5829840; // System.Void GetItemOptions(System.Collections.Generic.List`1<GameMenu.Option> options)
constexpr auto GetMovementModify = 5833072; // BaseEntity/MovementModify GetMovementModify()
constexpr auto get_RealisticMass = 5853776; // System.Single get_RealisticMass()
constexpr auto OnCollision_UnityEngine_Collision_collision__BaseEntity_hitEntity = 5846672; // System.Void OnCollision(UnityEngine.Collision collision, BaseEntity hitEntity)
constexpr auto ReceiveCollisionMessages_System_Boolean_b = 5853968; // System.Void ReceiveCollisionMessages(System.Boolean b)
constexpr auto get_Components = 5867504; // EntityComponentBase[] get_Components()
constexpr auto ToPlayer = 3810400; // BasePlayer ToPlayer()
constexpr auto get_IsNpc = 4889040; // System.Boolean get_IsNpc()
constexpr auto InitShared = 5836352; // System.Void InitShared()
constexpr auto DestroyShared = 5817152; // System.Void DestroyShared()
constexpr auto ResetState = 5857264; // System.Void ResetState()
constexpr auto InheritedVelocityScale = 5805664; // System.Single InheritedVelocityScale()
constexpr auto InheritedVelocityDirection = 3694048; // System.Boolean InheritedVelocityDirection()
constexpr auto GetInheritedProjectileVelocity_UnityEngine_Vector3_direction = 5829024; // UnityEngine.Vector3 GetInheritedProjectileVelocity(UnityEngine.Vector3 direction)
constexpr auto GetInheritedThrowVelocity_UnityEngine_Vector3_direction = 5829552; // UnityEngine.Vector3 GetInheritedThrowVelocity(UnityEngine.Vector3 direction)
constexpr auto GetInheritedDropVelocity = 5828800; // UnityEngine.Vector3 GetInheritedDropVelocity()
constexpr auto GetParentVelocity = 5833536; // UnityEngine.Vector3 GetParentVelocity()
constexpr auto GetWorldVelocity = 5834464; // UnityEngine.Vector3 GetWorldVelocity()
constexpr auto GetLocalVelocity = 5830640; // UnityEngine.Vector3 GetLocalVelocity()
constexpr auto GetAngularVelocity = 5827008; // UnityEngine.Quaternion GetAngularVelocity()
constexpr auto WorldSpaceBounds = 5866592; // OBB WorldSpaceBounds()
constexpr auto PivotPoint = 5853792; // UnityEngine.Vector3 PivotPoint()
constexpr auto CenterPoint = 5815232; // UnityEngine.Vector3 CenterPoint()
constexpr auto ClosestPoint_UnityEngine_Vector3_position = 5815840; // UnityEngine.Vector3 ClosestPoint(UnityEngine.Vector3 position)
constexpr auto TriggerPoint = 5815232; // UnityEngine.Vector3 TriggerPoint()
constexpr auto Distance_UnityEngine_Vector3_position = 5817840; // System.Single Distance(UnityEngine.Vector3 position)
constexpr auto SqrDistance_UnityEngine_Vector3_position = 5860640; // System.Single SqrDistance(UnityEngine.Vector3 position)
constexpr auto Distance_BaseEntity_other = 5817744; // System.Single Distance(BaseEntity other)
constexpr auto SqrDistance_BaseEntity_other = 5860288; // System.Single SqrDistance(BaseEntity other)
constexpr auto Distance2D_UnityEngine_Vector3_position = 5817488; // System.Single Distance2D(UnityEngine.Vector3 position)
constexpr auto SqrDistance2D_UnityEngine_Vector3_position = 5860384; // System.Single SqrDistance2D(UnityEngine.Vector3 position)
constexpr auto Distance2D_BaseEntity_other = 5817744; // System.Single Distance2D(BaseEntity other)
constexpr auto SqrDistance2D_BaseEntity_other = 5860288; // System.Single SqrDistance2D(BaseEntity other)
constexpr auto IsVisible_UnityEngine_Ray_ray__System_Int32_layerMask__System_Single_maxDistance = 5840880; // System.Boolean IsVisible(UnityEngine.Ray ray, System.Int32 layerMask, System.Single maxDistance)
constexpr auto IsVisibleSpecificLayers_UnityEngine_Vector3_position__UnityEngine_Vector3_target__System_Int32_layerMask__System_Single_maxDistance____ = 5839392; // System.Boolean IsVisibleSpecificLayers(UnityEngine.Vector3 position, UnityEngine.Vector3 target, System.Int32 layerMask, System.Single maxDistance = ∞)
constexpr auto IsVisible_UnityEngine_Vector3_position__UnityEngine_Vector3_target__System_Single_maxDistance____ = 5839936; // System.Boolean IsVisible(UnityEngine.Vector3 position, UnityEngine.Vector3 target, System.Single maxDistance = ∞)
constexpr auto IsVisible_UnityEngine_Vector3_position__System_Single_maxDistance____ = 5840512; // System.Boolean IsVisible(UnityEngine.Vector3 position, System.Single maxDistance = ∞)
constexpr auto IsVisibleAndCanSee_UnityEngine_Vector3_position = 5838800; // System.Boolean IsVisibleAndCanSee(UnityEngine.Vector3 position)
constexpr auto CanSee_UnityEngine_Vector3_fromPos__UnityEngine_Vector3_targetPos = 5815024; // System.Boolean CanSee(UnityEngine.Vector3 fromPos, UnityEngine.Vector3 targetPos)
constexpr auto IsOlderThan_BaseEntity_other = 5837408; // System.Boolean IsOlderThan(BaseEntity other)
constexpr auto IsOutside = 5838240; // System.Boolean IsOutside()
constexpr auto IsOutside_UnityEngine_Vector3_position = 5837760; // System.Boolean IsOutside(UnityEngine.Vector3 position)
constexpr auto WaterFactor = 5865376; // System.Single WaterFactor()
constexpr auto AirFactor = 5813040; // System.Single AirFactor()
constexpr auto WaterTestFromVolumes_UnityEngine_Vector3_pos__out_WaterLevel_WaterInfo_info = 5865552; // System.Boolean WaterTestFromVolumes(UnityEngine.Vector3 pos, out WaterLevel/WaterInfo info)
constexpr auto IsInWaterVolume_UnityEngine_Vector3_pos = 5836576; // System.Boolean IsInWaterVolume(UnityEngine.Vector3 pos)
constexpr auto WaterTestFromVolumes_UnityEngine_Bounds_bounds__out_WaterLevel_WaterInfo_info = 5865872; // System.Boolean WaterTestFromVolumes(UnityEngine.Bounds bounds, out WaterLevel/WaterInfo info)
constexpr auto WaterTestFromVolumes_UnityEngine_Vector3_start__UnityEngine_Vector3_end__System_Single_radius__out_WaterLevel_WaterInfo_info = 5866192; // System.Boolean WaterTestFromVolumes(UnityEngine.Vector3 start, UnityEngine.Vector3 end, System.Single radius, out WaterLevel/WaterInfo info)
constexpr auto BlocksWaterFor_BasePlayer_player = 4889040; // System.Boolean BlocksWaterFor(BasePlayer player)
constexpr auto Health = 5805664; // System.Single Health()
constexpr auto MaxHealth = 5805664; // System.Single MaxHealth()
constexpr auto MaxVelocity = 5805664; // System.Single MaxVelocity()
constexpr auto BoundsPadding = 5813104; // System.Single BoundsPadding()
constexpr auto PenetrationResistance_HitInfo_info = 5853776; // System.Single PenetrationResistance(HitInfo info)
constexpr auto GetImpactEffect_HitInfo_info = 3702912; // GameObjectRef GetImpactEffect(HitInfo info)
constexpr auto OnAttacked_HitInfo_info = 3694560; // System.Void OnAttacked(HitInfo info)
constexpr auto GetItem = 3810400; // Item GetItem()
constexpr auto GetItem_ItemId_itemId = 3810400; // Item GetItem(ItemId itemId)
constexpr auto GiveItem_Item_item__BaseEntity_GiveItemReason_reason___0 = 5835328; // System.Void GiveItem(Item item, BaseEntity/GiveItemReason reason = 0)
constexpr auto CanBeLooted_BasePlayer_player = 5815008; // System.Boolean CanBeLooted(BasePlayer player)
constexpr auto GetEntity = 5828560; // BaseEntity GetEntity()
constexpr auto ToString = 5861328; // System.String ToString()
constexpr auto Categorize = 5815184; // System.String Categorize()
constexpr auto Log_System_String_str = 5845136; // System.Void Log(System.String str)
constexpr auto SetModel_Model_mdl = 5858560; // System.Void SetModel(Model mdl)
constexpr auto GetModel = 3703152; // Model GetModel()
constexpr auto GetBones = 5827152; // UnityEngine.Transform[] GetBones()
constexpr auto FindBone_System_String_strName = 5822432; // UnityEngine.Transform FindBone(System.String strName)
constexpr auto FindBoneID_UnityEngine_Transform_boneTransform = 5822240; // System.UInt32 FindBoneID(UnityEngine.Transform boneTransform)
constexpr auto FindClosestBone_UnityEngine_Vector3_worldPos = 5822592; // UnityEngine.Transform FindClosestBone(UnityEngine.Vector3 worldPos)
constexpr auto get_OwnerID = 3702704; // System.UInt64 get_OwnerID()
constexpr auto set_OwnerID_System_UInt64_value = 5867632; // System.Void set_OwnerID(System.UInt64 value)
constexpr auto ShouldBlockProjectiles = 3694048; // System.Boolean ShouldBlockProjectiles()
constexpr auto ShouldInheritNetworkGroup = 3694048; // System.Boolean ShouldInheritNetworkGroup()
constexpr auto SupportsChildDeployables = 4889040; // System.Boolean SupportsChildDeployables()
constexpr auto ForceDeployableSetParent = 4889040; // System.Boolean ForceDeployableSetParent()
constexpr auto IsOnMovingObject = 5837584; // System.Boolean IsOnMovingObject()
constexpr auto BroadcastEntityMessage_System_String_msg__System_Single_radius___20__System_Int32_layerMask___1218652417 = 5813120; // System.Void BroadcastEntityMessage(System.String msg, System.Single radius = 20, System.Int32 layerMask = 1218652417)
constexpr auto OnEntityMessage_BaseEntity_from__System_String_msg = 3694560; // System.Void OnEntityMessage(BaseEntity from, System.String msg)
constexpr auto DebugClient_System_Int32_rep__System_Single_time = 3694560; // System.Void DebugClient(System.Int32 rep, System.Single time)
constexpr auto OnDebugStart = 5846752; // System.Void OnDebugStart()
constexpr auto DebugText_UnityEngine_Vector3_pos__System_String_str__UnityEngine_Color_color__System_Single_time = 5817008; // System.Void DebugText(UnityEngine.Vector3 pos, System.String str, UnityEngine.Color color, System.Single time)
constexpr auto HasFlag_BaseEntity_Flags_f = 5835968; // System.Boolean HasFlag(BaseEntity/Flags f)
constexpr auto HasAny_BaseEntity_Flags_f = 5835600; // System.Boolean HasAny(BaseEntity/Flags f)
constexpr auto ParentHasFlag_BaseEntity_Flags_f = 5853632; // System.Boolean ParentHasFlag(BaseEntity/Flags f)
constexpr auto SetFlag_BaseEntity_Flags_f__System_Boolean_b__System_Boolean_recursive___False__System_Boolean_networkupdate___True = 5858304; // System.Void SetFlag(BaseEntity/Flags f, System.Boolean b, System.Boolean recursive = False, System.Boolean networkupdate = True)
constexpr auto IsOn = 5837728; // System.Boolean IsOn()
constexpr auto IsOpen = 5837744; // System.Boolean IsOpen()
constexpr auto IsOnFire = 5837568; // System.Boolean IsOnFire()
constexpr auto IsLocked = 5836896; // System.Boolean IsLocked()
constexpr auto IsDebugging = 5836400; // System.Boolean IsDebugging()
constexpr auto IsDisabled = 5836416; // System.Boolean IsDisabled()
constexpr auto IsBroken = 5836384; // System.Boolean IsBroken()
constexpr auto IsBusy = 5836032; // System.Boolean IsBusy()
constexpr auto IsTransferProtected = 5838768; // System.Boolean IsTransferProtected()
constexpr auto IsTransferring = 5838784; // System.Boolean IsTransferring()
constexpr auto GetLogColor = 5830784; // System.String GetLogColor()
constexpr auto OnFlagsChanged_BaseEntity_Flags_old__BaseEntity_Flags_next = 5846960; // System.Void OnFlagsChanged(BaseEntity/Flags old, BaseEntity/Flags next)
constexpr auto IsOccupied_Socket_Base_socket = 5836912; // System.Boolean IsOccupied(Socket_Base socket)
constexpr auto IsOccupied_System_String_socketName = 5837168; // System.Boolean IsOccupied(System.String socketName)
constexpr auto FindLink_Socket_Base_socket = 5822784; // EntityLink FindLink(Socket_Base socket)
constexpr auto FindLink_System_String_socketName = 5823280; // EntityLink FindLink(System.String socketName)
constexpr auto FindLink_System_String___socketNames = 5823024; // EntityLink FindLink(System.String[] socketNames)
constexpr auto T_BaseEntity_FindLinkedEntity_System_Object_ = 17767536; // T BaseEntity.FindLinkedEntity<System.Object>
constexpr auto System_Void_BaseEntity_EntityLinkMessage_System_Object__System_Action_1_T__action = 17767056; // System.Void BaseEntity.EntityLinkMessage<System.Object>
constexpr auto System_Void_BaseEntity_EntityLinkBroadcast_System_Object__System_Object__System_Action_1_T__action__System_Func_2_S__System_Boolean__canTraverseSocket = 17764624; // System.Void BaseEntity.EntityLinkBroadcast<System.Object, System.Object>
constexpr auto System_Void_BaseEntity_EntityLinkBroadcast_System_Object__System_Action_1_T__action = 17765952; // System.Void BaseEntity.EntityLinkBroadcast<System.Object>
constexpr auto EntityLinkBroadcast = 5821520; // System.Void EntityLinkBroadcast()
constexpr auto ReceivedEntityLinkBroadcast = 5854128; // System.Boolean ReceivedEntityLinkBroadcast()
constexpr auto GetEntityLinks_System_Boolean_linkToNeighbours___True = 5828176; // System.Collections.Generic.List`1<EntityLink> GetEntityLinks(System.Boolean linkToNeighbours = True)
constexpr auto LinkToEntity_BaseEntity_other = 5842112; // System.Void LinkToEntity(BaseEntity other)
constexpr auto LinkToNeighbours = 5842704; // System.Void LinkToNeighbours()
constexpr auto InitEntityLinks = 5836048; // System.Void InitEntityLinks()
constexpr auto FreeEntityLinks = 5826704; // System.Void FreeEntityLinks()
constexpr auto RefreshEntityLinks = 5854224; // System.Void RefreshEntityLinks()
constexpr auto RequestFileFromServer_System_UInt32_crc__FileStorage_Type_type__System_String_responseFunction__System_UInt32_part___0 = 5855600; // System.Void RequestFileFromServer(System.UInt32 crc, FileStorage/Type type, System.String responseFunction, System.UInt32 part = 0)
constexpr auto RequestFileFromServer_IServerFileReceiver_receiver__FileStorage_Type_type__System_UInt32_crc__System_UInt32_part___0__System_Boolean_respondIfNotFound___False = 5855808; // System.Void RequestFileFromServer(IServerFileReceiver receiver, FileStorage/Type type, System.UInt32 crc, System.UInt32 part = 0, System.Boolean respondIfNotFound = False)
constexpr auto CL_ReceiveFileRequest_BaseEntity_RPCMessage_msg = 5814448; // System.Void CL_ReceiveFileRequest(BaseEntity/RPCMessage msg)
constexpr auto CompletePendingFileRequests_FileStorage_Type_type__System_UInt32_crc__System_UInt32_part__System_Byte___data = 5816016; // System.Void CompletePendingFileRequests(FileStorage/Type type, System.UInt32 crc, System.UInt32 part, System.Byte[] data)
constexpr auto UpdateChildren = 5861712; // System.Void UpdateChildren()
constexpr auto UpdateParenting = 5863568; // System.Void UpdateParenting()
constexpr auto UpdateParenting_System_Boolean_worldPositionStays = 5863584; // System.Void UpdateParenting(System.Boolean worldPositionStays)
constexpr auto SetParentTransform_UnityEngine_Transform_parent__System_Boolean_worldPositionStays___True = 5859296; // System.Void SetParentTransform(UnityEngine.Transform parent, System.Boolean worldPositionStays = True)
constexpr auto UpdateDisableState = 5862624; // System.Void UpdateDisableState()
constexpr auto HasClientTransformOffset = 5835616; // System.Boolean HasClientTransformOffset()
constexpr auto RemoveClientTransformOffset = 5855024; // System.Void RemoveClientTransformOffset()
constexpr auto AddClientTransformOffset = 5812864; // System.Void AddClientTransformOffset()
constexpr auto OnParentChangingClient_UnityEngine_Transform_oldParent__UnityEngine_Transform_newParent = 5847232; // System.Void OnParentChangingClient(UnityEngine.Transform oldParent, UnityEngine.Transform newParent)
constexpr auto get_HasDisabledRenderers = 4889040; // System.Boolean get_HasDisabledRenderers()
constexpr auto GetBuildingPrivilege = 5828064; // BuildingPrivlidge GetBuildingPrivilege()
constexpr auto GetNearestBuildingPrivledge = 5828064; // BuildingPrivlidge GetNearestBuildingPrivledge()
constexpr auto GetBuildingPrivilege_OBB_obb = 5827296; // BuildingPrivlidge GetBuildingPrivilege(OBB obb)
constexpr auto System_Void_BaseEntity_ServerRPC_System_Byte__System_Byte__System_UInt32__System_UInt32__System_Object__Network_SendMethod_sendMethod__System_String_funcName__T1_arg1__T2_arg2__T3_arg3__T4_arg4__T5_arg5 = 17782816; // System.Void BaseEntity.ServerRPC<System.Byte, System.Byte, System.UInt32, System.UInt32, System.Object>
constexpr auto System_Void_BaseEntity_ServerRPC_System_Int32__System_Int32__System_Int32__System_Int32__Network_SendMethod_sendMethod__System_String_funcName__T1_arg1__T2_arg2__T3_arg3__T4_arg4 = 17784832; // System.Void BaseEntity.ServerRPC<System.Int32, System.Int32, System.Int32, System.Int32>
constexpr auto System_Void_BaseEntity_ServerRPC_System_Boolean__UnityEngine_Vector3__NetworkableId__Network_SendMethod_sendMethod__System_String_funcName__T1_arg1__T2_arg2__T3_arg3 = 17782320; // System.Void BaseEntity.ServerRPC<System.Boolean, UnityEngine.Vector3, NetworkableId>
constexpr auto System_Void_BaseEntity_ServerRPC_System_Int32__UnityEngine_Color32__Network_SendMethod_sendMethod__System_String_funcName__T1_arg1__T2_arg2 = 17769152; // System.Void BaseEntity.ServerRPC<System.Int32, UnityEngine.Color32>
constexpr auto System_Void_BaseEntity_ServerRPC_System_Boolean__Network_SendMethod_sendMethod__System_String_funcName__T1_arg1 = 17768704; // System.Void BaseEntity.ServerRPC<System.Boolean>
constexpr auto ServerRPC_Network_SendMethod_sendMethod__System_String_funcName = 5857824; // System.Void ServerRPC(Network.SendMethod sendMethod, System.String funcName)
constexpr auto System_Void_BaseEntity_ServerRPC_System_Byte__System_Byte__System_UInt32__System_UInt32__System_Object__System_String_funcName__T1_arg1__T2_arg2__T3_arg3__T4_arg4__T5_arg5 = 17783344; // System.Void BaseEntity.ServerRPC<System.Byte, System.Byte, System.UInt32, System.UInt32, System.Object>
constexpr auto System_Void_BaseEntity_ServerRPC_System_Int32__System_Int32__System_Int32__System_Int32__System_String_funcName__T1_arg1__T2_arg2__T3_arg3__T4_arg4 = 17784768; // System.Void BaseEntity.ServerRPC<System.Int32, System.Int32, System.Int32, System.Int32>
constexpr auto System_Void_BaseEntity_ServerRPC_System_Boolean__UnityEngine_Vector3__NetworkableId__System_String_funcName__T1_arg1__T2_arg2__T3_arg3 = 17782240; // System.Void BaseEntity.ServerRPC<System.Boolean, UnityEngine.Vector3, NetworkableId>
constexpr auto System_Void_BaseEntity_ServerRPC_System_Int32__UnityEngine_Color32__System_String_funcName__T1_arg1__T2_arg2 = 17769104; // System.Void BaseEntity.ServerRPC<System.Int32, UnityEngine.Color32>
constexpr auto System_Void_BaseEntity_ServerRPC_System_Int32__System_Int32__System_String_funcName__T1_arg1__T2_arg2 = 17769104; // System.Void BaseEntity.ServerRPC<System.Int32, System.Int32>
constexpr auto System_Void_BaseEntity_ServerRPC_System_Boolean__System_String_funcName__T1_arg1 = 17768656; // System.Void BaseEntity.ServerRPC<System.Boolean>
constexpr auto ServerRPC_System_String_funcName = 5857808; // System.Void ServerRPC(System.String funcName)
constexpr auto ServerRPCStart_System_String_funcName = 5857632; // Network.NetWrite ServerRPCStart(System.String funcName)
constexpr auto System_Void_BaseEntity_ServerRPCWrite_System_Boolean__Network_NetWrite_write__T_arg = 17781872; // System.Void BaseEntity.ServerRPCWrite<System.Boolean>
constexpr auto System_Void_BaseEntity_ServerRPCWrite_System_Byte__Network_NetWrite_write__T_arg = 17781872; // System.Void BaseEntity.ServerRPCWrite<System.Byte>
constexpr auto System_Void_BaseEntity_ServerRPCWrite_System_SByte__Network_NetWrite_write__T_arg = 17781872; // System.Void BaseEntity.ServerRPCWrite<System.SByte>
constexpr auto ServerRPCSend_Network_NetWrite_write__Network_SendInfo_sendInfo = 5857568; // System.Void ServerRPCSend(Network.NetWrite write, Network.SendInfo sendInfo)
constexpr auto System_Void_BaseEntity_ServerRPCList_System_Object__System_String_funcName__System_Collections_Generic_List_1_T1__list = 17780256; // System.Void BaseEntity.ServerRPCList<System.Object>
constexpr auto System_Void_BaseEntity_ServerRPCList_System_Object__System_Object__System_Object__System_Object__System_Object__System_String_funcName__System_Collections_Generic_List_1_T1__list__T2_arg2__T3_arg3__T4_arg4__T5_arg5 = 17779408; // System.Void BaseEntity.ServerRPCList<System.Object, System.Object, System.Object, System.Object, System.Object>
constexpr auto System_Void_BaseEntity_ServerRPCList_System_Object__System_Object__System_Object__System_Object__System_Object__System_Object__System_String_funcName__System_Collections_Generic_List_1_T1__list__T2_arg2__T3_arg3__T4_arg4__T5_arg5__T6_arg6 = 17778512; // System.Void BaseEntity.ServerRPCList<System.Object, System.Object, System.Object, System.Object, System.Object, System.Object>
constexpr auto CL_RPCMessage_System_UInt32_nameID__System_UInt64_sourceConnection__Network_Message_message = 5813760; // System.Void CL_RPCMessage(System.UInt32 nameID, System.UInt64 sourceConnection, Network.Message message)
constexpr auto Load_BaseNetworkable_LoadInfo_info = 5843472; // System.Void Load(BaseNetworkable/LoadInfo info)
constexpr auto SendSignalBroadcast_BaseEntity_Signal_signal__System_String_arg___ = 5857376; // System.Void SendSignalBroadcast(BaseEntity/Signal signal, System.String arg = )
constexpr auto SignalFromServerEx_BaseEntity_RPCMessage_msg = 5860016; // System.Void SignalFromServerEx(BaseEntity/RPCMessage msg)
constexpr auto SignalFromServer_BaseEntity_RPCMessage_msg = 5860160; // System.Void SignalFromServer(BaseEntity/RPCMessage msg)
constexpr auto OnSignal_BaseEntity_Signal_signal__System_String_arg = 3694560; // System.Void OnSignal(BaseEntity/Signal signal, System.String arg)
constexpr auto OnSkinChanged_System_UInt64_oldSkinID__System_UInt64_newSkinID = 5851552; // System.Void OnSkinChanged(System.UInt64 oldSkinID, System.UInt64 newSkinID)
constexpr auto OnSkinPreProcess_IPrefabProcessor_preProcess__UnityEngine_GameObject_rootObj__System_String_name__System_Boolean_serverside__System_Boolean_clientside__System_Boolean_bundling = 5852432; // System.Void OnSkinPreProcess(IPrefabProcessor preProcess, UnityEngine.GameObject rootObj, System.String name, System.Boolean serverside, System.Boolean clientside, System.Boolean bundling)
constexpr auto OnSkinRefreshStart = 5852704; // System.Void OnSkinRefreshStart()
constexpr auto OnSkinRefreshed_Rust_Workshop_Skin_skin = 5852640; // System.Void OnSkinRefreshed(Rust.Workshop.Skin skin)
constexpr auto OnSkinRefreshEnd = 5852640; // System.Void OnSkinRefreshEnd()
constexpr auto PreProcess_IPrefabProcessor_preProcess__UnityEngine_GameObject_rootObj__System_String_name__System_Boolean_serverside__System_Boolean_clientside__System_Boolean_bundling = 5853904; // System.Void PreProcess(IPrefabProcessor preProcess, UnityEngine.GameObject rootObj, System.String name, System.Boolean serverside, System.Boolean clientside, System.Boolean bundling)
constexpr auto HasAnySlot = 5835376; // System.Boolean HasAnySlot()
constexpr auto GetSlot_BaseEntity_Slot_slot = 5834368; // BaseEntity GetSlot(BaseEntity/Slot slot)
constexpr auto GetSlotAnchorName_BaseEntity_Slot_slot = 5834112; // System.String GetSlotAnchorName(BaseEntity/Slot slot)
constexpr auto GetSlotAnchor_BaseEntity_Slot_slot = 5834224; // UnityEngine.Transform GetSlotAnchor(BaseEntity/Slot slot)
constexpr auto HasSlot_BaseEntity_Slot_slot = 4889040; // System.Boolean HasSlot(BaseEntity/Slot slot)
constexpr auto get_Traits = 3810400; // BaseEntity/TraitFlag get_Traits()
constexpr auto HasTrait_BaseEntity_TraitFlag_f = 5835984; // System.Boolean HasTrait(BaseEntity/TraitFlag f)
constexpr auto HasAnyTrait_BaseEntity_TraitFlag_f = 5835552; // System.Boolean HasAnyTrait(BaseEntity/TraitFlag f)
constexpr auto EnterTrigger_TriggerBase_trigger = 5821328; // System.Boolean EnterTrigger(TriggerBase trigger)
constexpr auto LeaveTrigger_TriggerBase_trigger = 5841888; // System.Void LeaveTrigger(TriggerBase trigger)
constexpr auto RemoveFromTriggers = 5855120; // System.Void RemoveFromTriggers()
constexpr auto T_BaseEntity_FindTrigger_System_Object_ = 17767952; // T BaseEntity.FindTrigger<System.Object>
constexpr auto System_Boolean_BaseEntity_FindTrigger_System_Object__out_T_result = 17768512; // System.Boolean BaseEntity.FindTrigger<System.Object>
constexpr auto ForceUpdateTriggersAction = 5823952; // System.Void ForceUpdateTriggersAction()
constexpr auto ForceUpdateTriggers_System_Boolean_enter___True__System_Boolean_exit___True__System_Boolean_invoke___True = 5824000; // System.Void ForceUpdateTriggers(System.Boolean enter = True, System.Boolean exit = True, System.Boolean invoke = True)
constexpr auto MakeVisible = 5846224; // System.Void MakeVisible()
constexpr auto UpdateCullingSpheres = 5862208; // System.Void UpdateCullingSpheres()
constexpr auto RegisterForCulling = 5854416; // System.Void RegisterForCulling()
constexpr auto OnVisibilityChanged_System_Boolean_visible = 3694560; // System.Void OnVisibilityChanged(System.Boolean visible)
constexpr auto UnregisterFromCulling = 5861584; // System.Void UnregisterFromCulling()
constexpr auto UpdateCullingBounds = 5862000; // System.Void UpdateCullingBounds()
constexpr auto CheckVisibility = 5815312; // System.Boolean CheckVisibility()
constexpr auto CalcEntityVisUpdateRate = 5814880; // System.Single CalcEntityVisUpdateRate()
constexpr auto DebugDrawCullingBounds = 5816816; // System.Void DebugDrawCullingBounds()
constexpr auto get_Weight = 5867616; // System.Single get_Weight()
constexpr auto set_Weight_System_Single_value = 5867648; // System.Void set_Weight(System.Single value)
constexpr auto _ctor = 5867184; // System.Void .ctor()
}
namespace StaticMethods
{
constexpr auto EnqueueFileRequest_BaseEntity_QueuedFileRequest_request = 5820656; // System.Void EnqueueFileRequest(BaseEntity/QueuedFileRequest request)
constexpr auto RequestFileImpl_BaseEntity_QueuedFileRequest_request = 5856880; // System.Void RequestFileImpl(BaseEntity/QueuedFileRequest request)
constexpr auto FlushQueuedFileRequests = 5823504; // System.Void FlushQueuedFileRequests()
constexpr auto _cctor = 5866912; // System.Void .cctor()
}
}
namespace Door
{
namespace Fields
{
constexpr auto __menuOption_Menu_CloseDoor = 0x2a8; // GameMenu.Option
constexpr auto __menuOption_Menu_KnockDoor = 0x328; // GameMenu.Option
constexpr auto __menuOption_Menu_OpenDoor = 0x3a8; // GameMenu.Option
constexpr auto __menuOption_Menu_ToggleHatch = 0x428; // GameMenu.Option
constexpr auto knockEffect = 0x4a8; // GameObjectRef
constexpr auto canTakeLock = 0x4b0; // System.Boolean
constexpr auto hasHatch = 0x4b1; // System.Boolean
constexpr auto canTakeCloser = 0x4b2; // System.Boolean
constexpr auto canTakeKnocker = 0x4b3; // System.Boolean
constexpr auto canNpcOpen = 0x4b4; // System.Boolean
constexpr auto canHandOpen = 0x4b5; // System.Boolean
constexpr auto isSecurityDoor = 0x4b6; // System.Boolean
constexpr auto canReverseOpen = 0x4b7; // System.Boolean
constexpr auto vehiclePhysBoxes = 0x4b8; // unknown
constexpr auto checkPhysBoxesOnOpen = 0x4c0; // System.Boolean
constexpr auto vehicleCollisionSfx = 0x4c8; // SoundDefinition
constexpr auto ClosedColliderRoots = 0x4d0; // unknown
constexpr auto openAnimLength = 0x4d8; // System.Single
constexpr auto closeAnimLength = 0x4dc; // System.Single
}
namespace StaticFields
{
constexpr auto ReverseOpen = 0x0; // BaseEntity/Flags
constexpr auto openHash = 0x0; // System.Int32
constexpr auto closeHash = 0x4; // System.Int32
constexpr auto reverseOpenHash = 0x8; // System.Int32
}
namespace Methods
{
constexpr auto GetMenuOptions_System_Collections_Generic_List_1_GameMenu_Option__list = 11687232; // System.Void GetMenuOptions(System.Collections.Generic.List`1<GameMenu.Option> list)
constexpr auto get_HasMenuOptions = 11695248; // System.Boolean get_HasMenuOptions()
constexpr auto OnRpcMessage_BasePlayer_player__System_UInt32_rpc__Network_Message_msg = 11693376; // System.Boolean OnRpcMessage(BasePlayer player, System.UInt32 rpc, Network.Message msg)
constexpr auto ResetState = 11694512; // System.Void ResetState()
constexpr auto HasSlot_BaseEntity_Slot_slot = 11691136; // System.Boolean HasSlot(BaseEntity/Slot slot)
constexpr auto CanPickup_BasePlayer_player = 11686896; // System.Boolean CanPickup(BasePlayer player)
constexpr auto Menu_OpenDoor_BasePlayer_player = 11692080; // System.Void Menu_OpenDoor(BasePlayer player)
constexpr auto Menu_OpenDoor_Proxy_GameMenu_Option_option = 11691824; // System.Void Menu_OpenDoor_Proxy(GameMenu.Option option)
constexpr auto Menu_OpenDoorStart = 11691760; // System.Void Menu_OpenDoorStart()
constexpr auto Menu_OpenDoor_ShowIf_BasePlayer_player = 11692016; // System.Boolean Menu_OpenDoor_ShowIf(BasePlayer player)
constexpr auto Menu_CloseDoor_BasePlayer_player = 11691520; // System.Void Menu_CloseDoor(BasePlayer player)
constexpr auto Menu_CloseDoor_Proxy_GameMenu_Option_option = 11691264; // System.Void Menu_CloseDoor_Proxy(GameMenu.Option option)
constexpr auto Menu_CloseDoorStart = 11691200; // System.Void Menu_CloseDoorStart()
constexpr auto Menu_CloseDoor_ShowIf_BasePlayer_player = 11691456; // System.Boolean Menu_CloseDoor_ShowIf(BasePlayer player)
constexpr auto Menu_KnockDoor_BasePlayer_player = 11691696; // System.Void Menu_KnockDoor(BasePlayer player)
constexpr auto Menu_KnockDoor_ShowIf_BasePlayer_player = 11691584; // System.Boolean Menu_KnockDoor_ShowIf(BasePlayer player)
constexpr auto Menu_ToggleHatch_BasePlayer_player = 11692160; // System.Void Menu_ToggleHatch(BasePlayer player)
constexpr auto Menu_ToggleHatch_ShowIf_BasePlayer_player = 11692144; // System.Boolean Menu_ToggleHatch_ShowIf(BasePlayer player)
constexpr auto NeedsCrosshair_UnityEngine_Sprite_sprite = 3694048; // System.Boolean NeedsCrosshair(UnityEngine.Sprite sprite)
constexpr auto OnDoorInterrupted_BaseEntity_RPCMessage_msg = 11692224; // System.Void OnDoorInterrupted(BaseEntity/RPCMessage msg)
constexpr auto ReverseDoorAnimation_System_Boolean_wasOpening = 11694528; // System.Void ReverseDoorAnimation(System.Boolean wasOpening)
constexpr auto BoundsPadding = 7985264; // System.Single BoundsPadding()
constexpr auto OnObjects_TriggerNotify_trigger = 3694560; // System.Void OnObjects(TriggerNotify trigger)
constexpr auto OnEmpty = 3694560; // System.Void OnEmpty()
constexpr auto OnFlagsChanged_BaseEntity_Flags_old__BaseEntity_Flags_next = 11692848; // System.Void OnFlagsChanged(BaseEntity/Flags old, BaseEntity/Flags next)
constexpr auto _ctor = 11695136; // System.Void .ctor()
}
namespace StaticMethods
{
constexpr auto _cctor = 11694960; // System.Void .cctor()
}
}
namespace Candle
{
namespace Fields
{
constexpr auto __menuOption_Menu_Extinguish = 0x270; // GameMenu.Option
constexpr auto __menuOption_Menu_Ignite = 0x2f0; // GameMenu.Option
}
namespace Methods
{
constexpr auto GetMenuOptions_System_Collections_Generic_List_1_GameMenu_Option__list = 10582704; // System.Void GetMenuOptions(System.Collections.Generic.List`1<GameMenu.Option> list)
constexpr auto get_HasMenuOptions = 10584832; // System.Boolean get_HasMenuOptions()
constexpr auto OnRpcMessage_BasePlayer_player__System_UInt32_rpc__Network_Message_msg = 10584592; // System.Boolean OnRpcMessage(BasePlayer player, System.UInt32 rpc, Network.Message msg)
constexpr auto Menu_Ignite_BasePlayer_player = 10584512; // System.Void Menu_Ignite(BasePlayer player)
constexpr auto Menu_Ignite_ShowIf_BasePlayer_player = 8083568; // System.Boolean Menu_Ignite_ShowIf(BasePlayer player)
constexpr auto Menu_Extinguish_BasePlayer_player = 10584432; // System.Void Menu_Extinguish(BasePlayer player)
constexpr auto Menu_Extinguish_ShowIf_BasePlayer_player = 8083600; // System.Boolean Menu_Extinguish_ShowIf(BasePlayer player)
constexpr auto _ctor = 5715840; // System.Void .ctor()
}
}
namespace BasePlayer
{
namespace Fields
{
constexpr auto __menuOption_Climb = 0x270; // GameMenu.Option
constexpr auto __menuOption_Drink = 0x2f0; // GameMenu.Option
constexpr auto __menuOption_InviteToClan = 0x370; // GameMenu.Option
constexpr auto __menuOption_InviteToTeam = 0x3f0; // GameMenu.Option
constexpr auto __menuOption_Menu_AssistPlayer = 0x470; // GameMenu.Option
constexpr auto __menuOption_Menu_LootPlayer = 0x4f0; // GameMenu.Option
constexpr auto __menuOption_Promote = 0x570; // GameMenu.Option
constexpr auto __menuOption_SaltWater = 0x5f0; // GameMenu.Option
constexpr auto clanId = 0x670; // System.Int64
constexpr auto playerModel = 0x678; // PlayerModel
constexpr auto Frozen = 0x680; // System.Boolean
constexpr auto voiceRecorder = 0x688; // PlayerVoiceRecorder
constexpr auto voiceSpeaker = 0x690; // PlayerVoiceSpeaker
constexpr auto input = 0x698; // PlayerInput
constexpr auto movement = 0x6a0; // BaseMovement
constexpr auto collision = 0x6a8; // BaseCollision
constexpr auto bagCount = 0x6b0; // System.Int32
constexpr auto modelInitUnderwear = 0x6b4; // System.UInt32
constexpr auto _lookingAt = 0x6b8; // UnityEngine.GameObject
constexpr auto _lookingAtEntity = 0x6c0; // BaseEntity
constexpr auto _lookingAtCollider = 0x6c8; // UnityEngine.Collider
constexpr auto _lookingAtPoint_k__BackingField = 0x6d0; // UnityEngine.Vector3
constexpr auto wakeTime = 0x6dc; // System.Single
constexpr auto needsClothesRebuild = 0x6e0; // System.Boolean
constexpr auto wasSleeping = 0x6e1; // System.Boolean
constexpr auto wokeUpBefore = 0x6e2; // System.Boolean
constexpr auto wasDead = 0x6e3; // System.Boolean
constexpr auto _HasMountedClothing_k__BackingField = 0x6e4; // System.Boolean
constexpr auto lastClothesHash = 0x6e8; // System.UInt32
constexpr auto lastOpenSoundPlay = 0x6ec; // TimeSince
constexpr auto currentViewMode = 0x6f0; // BasePlayer/CameraMode
constexpr auto selectedViewMode = 0x6f4; // BasePlayer/CameraMode
constexpr auto lastRevivePoint = 0x6f8; // UnityEngine.Vector3
constexpr auto lastReviveDirection = 0x704; // UnityEngine.Vector3
constexpr auto _IsWearingDiveGoggles_k__BackingField = 0x710; // System.Boolean
constexpr auto GestureViewModel = 0x718; // ViewModel
constexpr auto currentClientRespawnInformation = 0x720; // ProtoBuf.RespawnInformation
constexpr auto respawnOptionsTimestamp = 0x728; // System.Single
constexpr auto lastParachuteRequest = 0x72c; // TimeSince
constexpr auto timeSinceUpdatedLookingAt = 0x730; // RealTimeSince
constexpr auto nextTopologyTestTime = 0x734; // System.Single
constexpr auto usePressTime = 0x738; // System.Single
constexpr auto useHeldTime = 0x73c; // System.Single
constexpr auto lookingAtTest = 0x740; // HitTest
constexpr auto cachedWaterDrinkingPoint = 0x748; // UnityEngine.Vector3
constexpr auto hasRequestedServerEmoji = 0x754; // System.Boolean
constexpr auto outstandingEmojiRequests = 0x758; // System.Collections.Generic.Dictionary`2
constexpr auto timeGatedEmojiRequests = 0x760; // System.Collections.Generic.Queue`1
constexpr auto gestureList = 0x768; // GestureCollection
constexpr auto gestureFinishedTime = 0x770; // TimeUntil
constexpr auto blockHeldInputTimer = 0x774; // TimeSince
constexpr auto currentGesture = 0x778; // GestureConfig
constexpr auto disabledHeldEntity = 0x780; // HeldEntity
constexpr auto nextGestureMenuOpenTime = 0x788; // System.Single
constexpr auto lastGestureCancel = 0x78c; // TimeSince
constexpr auto client_lastHelloTime = 0x790; // System.Single
constexpr auto currentTeam = 0x798; // System.UInt64
constexpr auto clientTeam = 0x7a0; // ProtoBuf.PlayerTeam
constexpr auto lastReceivedTeamTime = 0x7a8; // System.Single
constexpr auto lastPresenceTeamId = 0x7b0; // System.UInt64
constexpr auto lastPresenceTeamSize = 0x7b8; // System.Int32
constexpr auto playerGroupKey = 0x7c0; // System.String
constexpr auto playerGroupSizeKey = 0x7c8; // System.String
constexpr auto clActiveItem = 0x7d0; // ItemId
constexpr auto ClientCurrentMapNotes = 0x7d8; // System.Collections.Generic.List`1
constexpr auto ClientCurrentDeathNote = 0x7e0; // ProtoBuf.MapNote
constexpr auto keepOpenMapInterface = 0x7e8; // System.Boolean
constexpr auto missions = 0x7f0; // System.Collections.Generic.List`1
constexpr auto _activeMission = 0x7f8; // System.Int32
constexpr auto modelState = 0x800; // ModelState
constexpr auto mounted = 0x808; // EntityRef
constexpr auto nextSeatSwapTime = 0x818; // System.Single
constexpr auto mountInputHeldDuringDismount = 0x81c; // System.Boolean
constexpr auto PetEntity = 0x820; // BaseEntity
constexpr auto lastPetCommandIssuedTime = 0x828; // System.Single
constexpr auto PetPrefabID = 0x82c; // System.UInt32
constexpr auto PetID = 0x830; // NetworkableId
constexpr auto ClientCurrentPings = 0x838; // System.Collections.Generic.List`1
constexpr auto tapInProcess = 0x840; // System.Boolean
constexpr auto lastPingTap = 0x844; // TimeSince
constexpr auto cachedBuildingPrivilegeTime = 0x848; // System.Single
constexpr auto cachedBuildingPrivilege = 0x850; // BuildingPrivlidge
constexpr auto cachedVehicleBuildingBlockedTime = 0x858; // System.Single
constexpr auto cachedVehicleBuildingBlocked = 0x85c; // System.Boolean
constexpr auto maxProjectileID = 0x860; // System.Int32
constexpr auto lastUpdateTime = 0x864; // System.Single
constexpr auto cachedThreatLevel = 0x868; // System.Single
constexpr auto serverTickRate = 0x86c; // System.Int32
constexpr auto clientTickRate = 0x870; // System.Int32
constexpr auto serverTickInterval = 0x874; // System.Single
constexpr auto clientTickInterval = 0x878; // System.Single
constexpr auto lastSentTickTime = 0x87c; // System.Single
constexpr auto lastTickStopwatch = 0x880; // System.Diagnostics.Stopwatch
constexpr auto lastSentTick = 0x888; // PlayerTick
constexpr auto nextVisThink = 0x890; // System.Single
constexpr auto lastTimeSeen = 0x894; // System.Single
constexpr auto debugPrevVisible = 0x898; // System.Boolean
constexpr auto fallDamageEffect = 0x8a0; // GameObjectRef
constexpr auto drownEffect = 0x8a8; // GameObjectRef
constexpr auto playerFlags = 0x8b0; // BasePlayer/PlayerFlags
constexpr auto eyes = 0x8b8; // PlayerEyes
constexpr auto inventory = 0x8c0; // PlayerInventory
constexpr auto blueprints = 0x8c8; // PlayerBlueprints
constexpr auto metabolism = 0x8d0; // PlayerMetabolism
constexpr auto modifiers = 0x8d8; // PlayerModifiers
constexpr auto playerCollider = 0x8e0; // UnityEngine.CapsuleCollider
constexpr auto Belt = 0x8e8; // PlayerBelt
constexpr auto playerRigidbody = 0x8f0; // UnityEngine.Rigidbody
constexpr auto userID = 0x8f8; // System.UInt64
constexpr auto UserIDString = 0x900; // System.String
constexpr auto gamemodeteam = 0x908; // System.Int32
constexpr auto reputation = 0x90c; // System.Int32
constexpr auto _displayName = 0x910; // System.String
constexpr auto _lastSetName = 0x918; // System.String
constexpr auto playerColliderStanding = 0x920; // BasePlayer/CapsuleColliderInfo
constexpr auto playerColliderDucked = 0x934; // BasePlayer/CapsuleColliderInfo
constexpr auto playerColliderCrawling = 0x948; // BasePlayer/CapsuleColliderInfo
constexpr auto playerColliderLyingDown = 0x95c; // BasePlayer/CapsuleColliderInfo
constexpr auto cachedProtection = 0x970; // ProtectionProperties
constexpr auto lastHeadshotSoundTime = 0x978; // System.Single
constexpr auto nextColliderRefreshTime = 0x97c; // System.Single
constexpr auto clothingBlocksAiming = 0x980; // System.Boolean
constexpr auto clothingMoveSpeedReduction = 0x984; // System.Single
constexpr auto clothingWaterSpeedBonus = 0x988; // System.Single
constexpr auto clothingAccuracyBonus = 0x98c; // System.Single
constexpr auto equippingBlocked = 0x990; // System.Boolean
constexpr auto eggVision = 0x994; // System.Single
constexpr auto activeTelephone = 0x998; // PhoneController
constexpr auto designingAIEntity = 0x9a0; // BaseEntity
}
namespace StaticFields
{
constexpr auto ClanInviteSuccess = 0x0; // Translate/Phrase
constexpr auto ClanInviteFailure = 0x8; // Translate/Phrase
constexpr auto ClanInviteFull = 0x10; // Translate/Phrase
constexpr auto emptyState = 0x18; // InputState
constexpr auto playerModelPrefab = 0x0; // System.String
constexpr auto playerCollisionPrefab = 0x0; // System.String
constexpr auto visiblePlayerList = 0x20; // ListDictionary`2
constexpr auto craftMode = 0x28; // System.Int32
constexpr auto lootPanelOverride = 0x30; // System.String
constexpr auto INTERACTION_TICK_RATE = 0x0; // System.Single
constexpr auto lastDeathTimeClient = 0x38; // System.Single
constexpr auto _localTransferProtectionExpires = 0x3c; // TimeUntil
constexpr auto drinkRange = 0x0; // System.Single
constexpr auto drinkMovementSpeed = 0x0; // System.Single
constexpr auto GestureCancelString = 0x0; // System.String
constexpr auto MaxTeamSizeToast = 0x40; // Translate/Phrase
constexpr auto MarkerLimitPhrase = 0x48; // Translate/Phrase
constexpr auto MaxMapNoteLabelLength = 0x0; // System.Int32
constexpr auto PetWheelHasBeenOpened = 0x50; // System.Boolean
constexpr auto HostileTitle = 0x58; // Translate/Phrase
constexpr auto HostileDesc = 0x60; // Translate/Phrase
constexpr auto HostileMarker = 0x68; // BasePlayer/PingStyle
constexpr auto GoToTitle = 0x88; // Translate/Phrase
constexpr auto GoToDesc = 0x90; // Translate/Phrase
constexpr auto GoToMarker = 0x98; // BasePlayer/PingStyle
constexpr auto DollarTitle = 0xb8; // Translate/Phrase
constexpr auto DollarDesc = 0xc0; // Translate/Phrase
constexpr auto DollarMarker = 0xc8; // BasePlayer/PingStyle
constexpr auto LootTitle = 0xe8; // Translate/Phrase
constexpr auto LootDesc = 0xf0; // Translate/Phrase
constexpr auto LootMarker = 0xf8; // BasePlayer/PingStyle
constexpr auto NodeTitle = 0x118; // Translate/Phrase
constexpr auto NodeDesc = 0x120; // Translate/Phrase
constexpr auto NodeMarker = 0x128; // BasePlayer/PingStyle
constexpr auto GunTitle = 0x148; // Translate/Phrase
constexpr auto GunDesc = 0x150; // Translate/Phrase
constexpr auto GunMarker = 0x158; // BasePlayer/PingStyle
constexpr auto RadialPings = 0x178; // unknown
constexpr auto doubleTapThreshold = 0x0; // System.Single
constexpr auto WILDERNESS = 0x0; // System.Int32
constexpr auto MONUMENT = 0x0; // System.Int32
constexpr auto BASE = 0x0; // System.Int32
constexpr auto FLYING = 0x0; // System.Int32
constexpr auto BOATING = 0x0; // System.Int32
constexpr auto SWIMMING = 0x0; // System.Int32
constexpr auto DRIVING = 0x0; // System.Int32
constexpr auto serverTickRateDefault = 0x0; // System.Int32
constexpr auto clientTickRateDefault = 0x0; // System.Int32
constexpr auto MaxBotIdRange = 0x0; // System.Int32
constexpr auto crouchSpeed = 0x0; // System.Single
constexpr auto walkSpeed = 0x0; // System.Single
constexpr auto runSpeed = 0x0; // System.Single
constexpr auto crawlSpeed = 0x0; // System.Single
constexpr auto oldCameraFix = 0x180; // System.Boolean
}
namespace Methods
{
constexpr auto GetMenuOptions_System_Collections_Generic_List_1_GameMenu_Option__list = 9284336; // System.Void GetMenuOptions(System.Collections.Generic.List`1<GameMenu.Option> list)
constexpr auto get_HasMenuOptions = 9418320; // System.Boolean get_HasMenuOptions()
constexpr auto OnRpcMessage_BasePlayer_player__System_UInt32_rpc__Network_Message_msg = 9327664; // System.Boolean OnRpcMessage(BasePlayer player, System.UInt32 rpc, Network.Message msg)
constexpr auto CanModifyClan = 9237536; // System.Boolean CanModifyClan()
constexpr auto InviteToClan_BasePlayer_player = 9303904; // System.Void InviteToClan(BasePlayer player)
constexpr auto InviteToClan_Start = 3694560; // System.Void InviteToClan_Start()
constexpr auto InviteToClan_ShowIf_BasePlayer_player = 9302384; // System.Boolean InviteToClan_ShowIf(BasePlayer player)
constexpr auto get_lookingAt = 9421024; // UnityEngine.GameObject get_lookingAt()
constexpr auto get_lookingAtEntity = 9420912; // BaseEntity get_lookingAtEntity()
constexpr auto get_lookingAtCollider = 9420832; // UnityEngine.Collider get_lookingAtCollider()
constexpr auto get_lookingAtPoint = 9420992; // UnityEngine.Vector3 get_lookingAtPoint()
constexpr auto set_lookingAtPoint_UnityEngine_Vector3_value = 9422112; // System.Void set_lookingAtPoint(UnityEngine.Vector3 value)
constexpr auto GetExtrapolationTime = 9281008; // System.Single GetExtrapolationTime()
constexpr auto GetLocalVelocityClient = 9283840; // UnityEngine.Vector3 GetLocalVelocityClient()
constexpr auto ClientInit_ProtoBuf_Entity_info = 9244880; // System.Void ClientInit(ProtoBuf.Entity info)
constexpr auto CreatePlayerModel = 9269680; // System.Void CreatePlayerModel()
constexpr auto CreatePlayerCollision = 9269232; // System.Void CreatePlayerCollision()
constexpr auto CreatePlayerMovement = 9270704; // System.Void CreatePlayerMovement()
constexpr auto InitLocalPlayer = 9301104; // System.Void InitLocalPlayer()
constexpr auto InitRemotePlayer = 9301856; // System.Void InitRemotePlayer()
constexpr auto HasLocalControls = 9298160; // System.Boolean HasLocalControls()
constexpr auto SetNetworkPosition_UnityEngine_Vector3_vPos = 9392768; // System.Void SetNetworkPosition(UnityEngine.Vector3 vPos)
constexpr auto SetNetworkRotation_UnityEngine_Quaternion_qRot = 9392944; // System.Void SetNetworkRotation(UnityEngine.Quaternion qRot)
constexpr auto DoClientDestroy = 9271888; // System.Void DoClientDestroy()
constexpr auto PostNetworkUpdate = 9374384; // System.Void PostNetworkUpdate()
constexpr auto OnFirstWakeUp = 9325488; // System.Void OnFirstWakeUp()
constexpr auto get_TimeAwake = 9419520; // System.Single get_TimeAwake()
constexpr auto get_HasMountedClothing = 9418960; // System.Boolean get_HasMountedClothing()
constexpr auto set_HasMountedClothing_System_Boolean_value = 9421568; // System.Void set_HasMountedClothing(System.Boolean value)
constexpr auto CL_ClothingChanged = 9233696; // System.Void CL_ClothingChanged()
constexpr auto ForceRebuild = 9277952; // System.Void ForceRebuild()
constexpr auto RebuildWorldModel_PlayerModel_pModel = 9381056; // System.Void RebuildWorldModel(PlayerModel pModel)
constexpr auto SetDefaultFootstepEffects_PlayerModel_pModel = 9390528; // System.Void SetDefaultFootstepEffects(PlayerModel pModel)
constexpr auto OnSignal_BaseEntity_Signal_signal__System_String_arg = 9366528; // System.Void OnSignal(BaseEntity/Signal signal, System.String arg)
constexpr auto FindBone_System_String_strName = 9275312; // UnityEngine.Transform FindBone(System.String strName)
constexpr auto GetBones = 9278608; // UnityEngine.Transform[] GetBones()
constexpr auto ShouldLerp = 9395328; // System.Boolean ShouldLerp()
constexpr auto DisplayHealthInfo_BasePlayer_player = 4889040; // System.Boolean DisplayHealthInfo(BasePlayer player)
constexpr auto ShouldDestroyWithGroup = 9395280; // System.Boolean ShouldDestroyWithGroup()
constexpr auto SetInheritedVelocity_UnityEngine_Vector3_velocity__NetworkableId_entID = 9391920; // System.Void SetInheritedVelocity(UnityEngine.Vector3 velocity, NetworkableId entID)
constexpr auto TogglePlayerMovement_BaseEntity_RPCMessage_msg = 9397520; // System.Void TogglePlayerMovement(BaseEntity/RPCMessage msg)
constexpr auto GetPerformanceReport_BaseEntity_RPCMessage_msg = 9293808; // System.Void GetPerformanceReport(BaseEntity/RPCMessage msg)
constexpr auto GetPerformanceReport_Frametime_BaseEntity_RPCMessage_msg = 9292912; // System.Void GetPerformanceReport_Frametime(BaseEntity/RPCMessage msg)
constexpr auto OnBecameRagdoll_Ragdoll_rdoll = 9323920; // System.Void OnBecameRagdoll(Ragdoll rdoll)
constexpr auto OnVoiceData_System_Byte___data = 9369152; // System.Void OnVoiceData(System.Byte[] data)
constexpr auto RecieveAchievement_System_String_name = 9382160; // System.Void RecieveAchievement(System.String name)
constexpr auto CraftMode_BaseEntity_RPCMessage_msg = 9268688; // System.Void CraftMode(BaseEntity/RPCMessage msg)
constexpr auto StartDesigningAI_BaseEntity_RPCMessage_msg = 9396176; // System.Void StartDesigningAI(BaseEntity/RPCMessage msg)
constexpr auto OnDebugAIEventTriggeredStateChange_System_Int32_previousStateContainerID__System_Int32_newStateContainerID__System_Int32_sourceEventID = 9325024; // System.Void OnDebugAIEventTriggeredStateChange(System.Int32 previousStateContainerID, System.Int32 newStateContainerID, System.Int32 sourceEventID)
constexpr auto ClientOnEnable = 9249536; // System.Void ClientOnEnable()
constexpr auto Client_OnRepairFailedResources_BaseEntity_RPCMessage_msg = 9261760; // System.Void Client_OnRepairFailedResources(BaseEntity/RPCMessage msg)
constexpr auto TakeDamageHit = 9396960; // System.Void TakeDamageHit()
constexpr auto AdminReceivedUGC_BaseEntity_RPCMessage_msg = 9224976; // System.Void AdminReceivedUGC(BaseEntity/RPCMessage msg)
constexpr auto AdminReceivedPatternFirework_BaseEntity_RPCMessage_msg = 9224816; // System.Void AdminReceivedPatternFirework(BaseEntity/RPCMessage msg)
constexpr auto OnLifeStateChanged_BaseCombatEntity_LifeState_oldState__BaseCombatEntity_LifeState_newState = 9326032; // System.Void OnLifeStateChanged(BaseCombatEntity/LifeState oldState, BaseCombatEntity/LifeState newState)
constexpr auto CanBeLooted_BasePlayer_player = 9236272; // System.Boolean CanBeLooted(BasePlayer player)
constexpr auto get_LootPanelTitle = 9419472; // Translate/Phrase get_LootPanelTitle()
constexpr auto Menu_LootPlayer_BasePlayer_player = 9322528; // System.Void Menu_LootPlayer(BasePlayer player)
constexpr auto Menu_LootPlayer_ShowIf_BasePlayer_player = 9322496; // System.Boolean Menu_LootPlayer_ShowIf(BasePlayer player)
constexpr auto RPC_OpenLootPanel_BaseEntity_RPCMessage_rpc = 9379952; // System.Void RPC_OpenLootPanel(BaseEntity/RPCMessage rpc)
constexpr auto PlayOpenSound = 9372352; // System.Void PlayOpenSound()
constexpr auto InFirstPersonMode = 9300800; // System.Boolean InFirstPersonMode()
constexpr auto UpdateViewMode = 9407040; // System.Void UpdateViewMode()
constexpr auto get_idealViewMode = 9420112; // BasePlayer/CameraMode get_idealViewMode()
constexpr auto get_shouldDrawBody = 9421104; // System.Boolean get_shouldDrawBody()
constexpr auto OnViewModeChanged = 9367856; // System.Void OnViewModeChanged()
constexpr auto ModifyCamera = 9322624; // System.Void ModifyCamera()
constexpr auto Menu_AssistPlayer_BasePlayer_player = 9322432; // System.Void Menu_AssistPlayer(BasePlayer player)
constexpr auto Menu_AssistPlayer_TimeStart = 9322368; // System.Void Menu_AssistPlayer_TimeStart()
constexpr auto Menu_AssistPlayer_ShowIf_BasePlayer_player = 9321760; // System.Boolean Menu_AssistPlayer_ShowIf(BasePlayer player)
constexpr auto get_IsWearingDiveGoggles = 9419456; // System.Boolean get_IsWearingDiveGoggles()
constexpr auto set_IsWearingDiveGoggles_System_Boolean_value = 9421584; // System.Void set_IsWearingDiveGoggles(System.Boolean value)
constexpr auto UpdateClothesIfNeeded = 9398608; // System.Void UpdateClothesIfNeeded()
constexpr auto MakeVisible = 9320544; // System.Void MakeVisible()
constexpr auto ClientUpdate_Sleeping = 9257840; // System.Void ClientUpdate_Sleeping()
constexpr auto ClientUpdate = 9258816; // System.Void ClientUpdate()
constexpr auto RebuildClothingItems = 9380512; // System.Void RebuildClothingItems()
constexpr auto UpdateClothingItems_SkinnedMultiMesh_multiMesh = 9399776; // System.Void UpdateClothingItems(SkinnedMultiMesh multiMesh)
constexpr auto UpdateHolsterOffsets = 9401680; // System.Void UpdateHolsterOffsets()
constexpr auto PostLateClientCycle = 9374128; // System.Void PostLateClientCycle()
constexpr auto get_clientRespawnOptions = 9419856; // System.Collections.Generic.List`1<ProtoBuf.RespawnInformation/SpawnOptions> get_clientRespawnOptions()
constexpr auto get_RespawnOptionsTimestamp = 9419504; // System.Single get_RespawnOptionsTimestamp()
constexpr auto IsLocalPlayer = 9312368; // System.Boolean IsLocalPlayer()
constexpr auto ClientUpdateLocalPlayer = 9252784; // System.Void ClientUpdateLocalPlayer()
constexpr auto UpdateTopologyStats = 9406688; // System.Void UpdateTopologyStats()
constexpr auto ClientTick = 9252528; // System.Void ClientTick()
constexpr auto DoMovement = 9272592; // System.Void DoMovement()
constexpr auto MountableOverrideViewAngles = 9322864; // System.Void MountableOverrideViewAngles()
constexpr auto BlockSprint_System_Single_duration___0_2 = 9229648; // System.Void BlockSprint(System.Single duration = 0.2)
constexpr auto BlockJump_System_Single_duration___0_5 = 9229504; // System.Void BlockJump(System.Single duration = 0.5)
constexpr auto ClientInput_InputState_state = 9246112; // System.Void ClientInput(InputState state)
constexpr auto UseAction_InputState_state = 9407936; // System.Void UseAction(InputState state)
constexpr auto GetInteractionEntity = 9282560; // BaseEntity GetInteractionEntity()
constexpr auto QuickUse = 9379536; // System.Void QuickUse()
constexpr auto LongUse = 9320352; // System.Void LongUse()
constexpr auto UseStop = 9409024; // System.Void UseStop()
constexpr auto UpdateLookingAt_System_Single_radius__System_Boolean_includeSecondaryEntities = 9402096; // System.Boolean UpdateLookingAt(System.Single radius, System.Boolean includeSecondaryEntities)
constexpr auto ResetLookingAt = 9385232; // System.Void ResetLookingAt()
constexpr auto SetLookingAt_HitTest_lookingAtTest = 9392320; // System.Void SetLookingAt(HitTest lookingAtTest)
constexpr auto CheckLookingAtVisible_HitTest_test__TraceInfo_trace = 9241296; // System.Boolean CheckLookingAtVisible(HitTest test, TraceInfo trace)
constexpr auto OnDied_BaseEntity_RPCMessage_msg = 9325344; // System.Void OnDied(BaseEntity/RPCMessage msg)
constexpr auto OnRespawnInformation_BaseEntity_RPCMessage_msg = 9326512; // System.Void OnRespawnInformation(BaseEntity/RPCMessage msg)
constexpr auto RequestRespawnUpdates = 9384832; // System.Void RequestRespawnUpdates()
constexpr auto OnLand_System_Single_fVelocity = 9325824; // System.Void OnLand(System.Single fVelocity)
constexpr auto StartLoading = 9396720; // System.Void StartLoading()
constexpr auto StartLoading_Quick = 9396528; // System.Void StartLoading_Quick()
constexpr auto FinishLoading = 9276496; // System.Void FinishLoading()
constexpr auto FullBlack_FadeIn = 9278208; // System.Void FullBlack_FadeIn()
constexpr auto FullBlack_FadeOut = 3694560; // System.Void FullBlack_FadeOut()
constexpr auto SetTransferProtectionDuration_BaseEntity_RPCMessage_msg = 9395024; // System.Void SetTransferProtectionDuration(BaseEntity/RPCMessage msg)
constexpr auto FinishedLoadingRoutine = 9277104; // System.Collections.IEnumerator FinishedLoadingRoutine()
constexpr auto DirectionalDamage_UnityEngine_Vector3_position__System_Int32_damageType__System_Int32_damageTotal = 9271408; // System.Void DirectionalDamage(UnityEngine.Vector3 position, System.Int32 damageType, System.Int32 damageTotal)
constexpr auto UnlockedBlueprint_BaseEntity_RPCMessage_msg = 9398160; // System.Void UnlockedBlueprint(BaseEntity/RPCMessage msg)
constexpr auto CheckForRespawnInfoCamper = 9240656; // System.Void CheckForRespawnInfoCamper()
constexpr auto CheckForRespawnInfo = 9241072; // System.Void CheckForRespawnInfo()
constexpr auto UpdateRichPresenceState_BaseEntity_RPCMessage_msg = 9406000; // System.Void UpdateRichPresenceState(BaseEntity/RPCMessage msg)
constexpr auto HandleCompanionPairingResult_BaseEntity_RPCMessage_msg = 9297056; // System.Void HandleCompanionPairingResult(BaseEntity/RPCMessage msg)
constexpr auto UpdateWaterDrinkingPoint = 9407104; // UnityEngine.Vector3 UpdateWaterDrinkingPoint()
constexpr auto GetWaterDrinkingPoint = 9297024; // UnityEngine.Vector3 GetWaterDrinkingPoint()
constexpr auto Drink_BasePlayer_player = 9273312; // System.Void Drink(BasePlayer player)
constexpr auto Drink_ShowIf_BasePlayer_player = 9272768; // System.Boolean Drink_ShowIf(BasePlayer player)
constexpr auto SaltWater_BasePlayer_player = 3694560; // System.Void SaltWater(BasePlayer player)
constexpr auto SaltWater_ShowIf_BasePlayer_player = 9385504; // System.Boolean SaltWater_ShowIf(BasePlayer player)
constexpr auto Climb_BasePlayer_player = 9266640; // System.Void Climb(BasePlayer player)
constexpr auto Climb_ShowIf_BasePlayer_player = 9265920; // System.Boolean Climb_ShowIf(BasePlayer player)
constexpr auto CheckForServerEmoji = 9241152; // System.Void CheckForServerEmoji()
constexpr auto ClientReceiveEmojiList_BaseEntity_RPCMessage_msg = 9250912; // System.Void ClientReceiveEmojiList(BaseEntity/RPCMessage msg)
constexpr auto ClientReceiveEmojiData_BaseEntity_RPCMessage_msg = 9249856; // System.Void ClientReceiveEmojiData(BaseEntity/RPCMessage msg)
constexpr auto ClientRequestEmojiData_RustEmojiLibrary_EmojiSource_er__EmojiController_controller = 9251680; // System.Void ClientRequestEmojiData(RustEmojiLibrary/EmojiSource er, EmojiController controller)
constexpr auto RequestQueuedEmoji = 9384448; // System.Void RequestQueuedEmoji()
constexpr auto GetNumberOfEmojiRequestsInLastSecond = 9291648; // System.Int32 GetNumberOfEmojiRequestsInLastSecond()
constexpr auto HasPlayerFlag_BasePlayer_PlayerFlags_f = 9298272; // System.Boolean HasPlayerFlag(BasePlayer/PlayerFlags f)
constexpr auto get_IsReceivingSnapshot = 9419440; // System.Boolean get_IsReceivingSnapshot()
constexpr auto get_IsAdmin = 9419200; // System.Boolean get_IsAdmin()
constexpr auto get_IsDeveloper = 9419392; // System.Boolean get_IsDeveloper()
constexpr auto get_UnlockAllSkins = 9419616; // System.Boolean get_UnlockAllSkins()
constexpr auto get_IsAiming = 9419216; // System.Boolean get_IsAiming()
constexpr auto get_IsFlying = 9419408; // System.Boolean get_IsFlying()
constexpr auto get_IsConnected = 9419248; // System.Boolean get_IsConnected()
constexpr auto get_InGesture = 9419024; // System.Boolean get_InGesture()
constexpr auto get_CurrentGestureBlocksMovement = 9418032; // System.Boolean get_CurrentGestureBlocksMovement()
constexpr auto get_CurrentGestureIsDance = 9418096; // System.Boolean get_CurrentGestureIsDance()
constexpr auto get_CurrentGestureIsFullBody = 9418160; // System.Boolean get_CurrentGestureIsFullBody()
constexpr auto get_InGestureCancelCooldown = 9418976; // System.Boolean get_InGestureCancelCooldown()
constexpr auto SetGestureMenuOpen_System_Boolean_wantsOpen = 9390784; // System.Void SetGestureMenuOpen(System.Boolean wantsOpen)
constexpr auto RequestStartGesture_GestureConfig_g = 9385040; // System.Void RequestStartGesture(GestureConfig g)
constexpr auto Client_StartGesture_BaseEntity_RPCMessage_msg = 9265584; // System.Void Client_StartGesture(BaseEntity/RPCMessage msg)
constexpr auto Client_StartGesture_GestureConfig_gesture = 9264736; // System.Void Client_StartGesture(GestureConfig gesture)
constexpr auto ProcessDanceAction = 9376400; // System.Void ProcessDanceAction()
constexpr auto SayingHello = 9386432; // System.Boolean SayingHello()
constexpr auto ProcessGestureStart = 9377840; // System.Void ProcessGestureStart()
constexpr auto EndGesture = 9274144; // System.Void EndGesture()
constexpr auto EndLocalGesture = 9274304; // System.Void EndLocalGesture()
constexpr auto EndGestureShared = 9273792; // System.Void EndGestureShared()
constexpr auto HideHeldEntity_System_Boolean_state = 9300464; // System.Void HideHeldEntity(System.Boolean state)
constexpr auto CancelGesture = 9239888; // System.Void CancelGesture()
constexpr auto RemoteGestureCancel = 9383440; // System.Void RemoteGestureCancel()
constexpr auto CancelGestureInput = 9238896; // System.Boolean CancelGestureInput()
constexpr auto ClearGestureCooldown = 9243216; // System.Void ClearGestureCooldown()
constexpr auto ConVarRequestStartGesture_System_String_gestureName = 9268064; // System.Boolean ConVarRequestStartGesture(System.String gestureName)
constexpr auto Client_RemoteCancelledGesture = 9264656; // System.Void Client_RemoteCancelledGesture()
constexpr auto IsGestureBlocked = 9310352; // System.Boolean IsGestureBlocked()
constexpr auto get_clientTeamLifetime = 9419888; // System.Single get_clientTeamLifetime()
constexpr auto CLIENT_ReceiveTeamInfo_BaseEntity_RPCMessage_msg = 9231616; // System.Void CLIENT_ReceiveTeamInfo(BaseEntity/RPCMessage msg)
constexpr auto UpdateSteamGroup_System_UInt64_teamId__System_Int32_teamSize = 9406080; // System.Void UpdateSteamGroup(System.UInt64 teamId, System.Int32 teamSize)
constexpr auto ClearSteamGroup = 9243392; // System.Void ClearSteamGroup()
constexpr auto CLIENT_ClearTeam_BaseEntity_RPCMessage_msg = 9229792; // System.Void CLIENT_ClearTeam(BaseEntity/RPCMessage msg)
constexpr auto CLIENT_PendingInvite_BaseEntity_RPCMessage_msg = 9230752; // System.Void CLIENT_PendingInvite(BaseEntity/RPCMessage msg)
constexpr auto InviteToTeam_BasePlayer_player = 9304240; // System.Void InviteToTeam(BasePlayer player)
constexpr auto Invite_ShowIf_BasePlayer_player = 9305648; // System.Boolean Invite_ShowIf(BasePlayer player)
constexpr auto Promote_BasePlayer_player = 9379120; // System.Void Promote(BasePlayer player)
constexpr auto Menu_Promote_Start = 3694560; // System.Void Menu_Promote_Start()
constexpr auto Promote_ShowIf_BasePlayer_player = 9378368; // System.Boolean Promote_ShowIf(BasePlayer player)
constexpr auto GetHeldEntity = 9281216; // HeldEntity GetHeldEntity()
constexpr auto System_Boolean_BasePlayer_IsHoldingEntity_System_Object_ = 17807088; // System.Boolean BasePlayer.IsHoldingEntity<System.Object>
constexpr auto GetHeldItem = 9281808; // Item GetHeldItem()
constexpr auto GetHeldItemID = 9281728; // ItemId GetHeldItemID()
constexpr auto HeldEntityViewAngles = 9299952; // System.Void HeldEntityViewAngles()
constexpr auto HeldEntityFrame = 9298768; // System.Void HeldEntityFrame()
constexpr auto HeldEntityInput = 9299248; // System.Void HeldEntityInput()
constexpr auto HeldItemUse = 9300224; // System.Boolean HeldItemUse()
constexpr auto HeldEntityStart = 9299728; // System.Void HeldEntityStart()
constexpr auto HeldEntityEnd = 9298544; // System.Void HeldEntityEnd()
constexpr auto IsHostileItem_Item_item = 9311312; // System.Boolean IsHostileItem(Item item)
constexpr auto IsItemHoldRestricted_Item_item = 9311712; // System.Boolean IsItemHoldRestricted(Item item)
constexpr auto StartEditingMapLabel = 9396480; // System.Void StartEditingMapLabel()
constexpr auto FinishEditingMapLabel = 9276480; // System.Void FinishEditingMapLabel()
constexpr auto MapInfoOnEnable = 9321312; // System.Void MapInfoOnEnable()
constexpr auto Client_ReceiveMarkers_BaseEntity_RPCMessage_msg = 9262160; // System.Void Client_ReceiveMarkers(BaseEntity/RPCMessage msg)
constexpr auto Client_UpdateDeathMarker_BaseEntity_RPCMessage_msg = 9265680; // System.Void Client_UpdateDeathMarker(BaseEntity/RPCMessage msg)
constexpr auto Client_AddNewDeathMarker_BaseEntity_RPCMessage_msg = 9261504; // System.Void Client_AddNewDeathMarker(BaseEntity/RPCMessage msg)
constexpr auto AddPointOfInterest_UnityEngine_Vector3_position = 9224624; // System.Void AddPointOfInterest(UnityEngine.Vector3 position)
constexpr auto ClearPointOfInterest_System_Int32_index = 9243264; // System.Void ClearPointOfInterest(System.Int32 index)
constexpr auto ClearAllMapMarkers = 9243120; // System.Void ClearAllMapMarkers()
constexpr auto RequestMarkerChanges_System_Int32_markerIndex__System_Int32_colourIndex__System_Int32_iconIndex__System_String_label = 9383984; // System.Void RequestMarkerChanges(System.Int32 markerIndex, System.Int32 colourIndex, System.Int32 iconIndex, System.String label)
constexpr auto HasAttemptedMission_System_UInt32_missionID = 9297216; // System.Boolean HasAttemptedMission(System.UInt32 missionID)
constexpr auto CanAcceptMission_System_UInt32_missionID = 9234608; // System.Boolean CanAcceptMission(System.UInt32 missionID)
constexpr auto IsMissionActive_System_UInt32_missionID = 9312560; // System.Boolean IsMissionActive(System.UInt32 missionID)
constexpr auto HasCompletedMission_System_UInt32_missionID = 9297520; // System.Boolean HasCompletedMission(System.UInt32 missionID)
constexpr auto HasFailedMission_System_UInt32_missionID = 9297840; // System.Boolean HasFailedMission(System.UInt32 missionID)
constexpr auto SetActiveMission_System_Int32_index = 9390496; // System.Void SetActiveMission(System.Int32 index)
constexpr auto GetActiveMission = 9278592; // System.Int32 GetActiveMission()
constexpr auto HasActiveMission = 9297200; // System.Boolean HasActiveMission()
constexpr auto LoadMissions_ProtoBuf_Missions_loadedMissions = 9316272; // System.Void LoadMissions(ProtoBuf.Missions loadedMissions)
constexpr auto OnModelState_BaseEntity_RPCMessage_data = 9326368; // System.Void OnModelState(BaseEntity/RPCMessage data)
constexpr auto OnModelStateChanged = 9326208; // System.Void OnModelStateChanged()
constexpr auto get_isMounted = 9420688; // System.Boolean get_isMounted()
constexpr auto get_isMountingHidingWeapon = 9420736; // System.Boolean get_isMountingHidingWeapon()
constexpr auto GetMounted = 9291344; // BaseMountable GetMounted()
constexpr auto GetMountedVehicle = 9291264; // BaseVehicle GetMountedVehicle()
constexpr auto MarkSwapSeat = 9321392; // System.Void MarkSwapSeat()
constexpr auto SwapSeatCooldown = 9396912; // System.Boolean SwapSeatCooldown()
constexpr auto ClientUpdateMounted_NetworkableId_id = 9256320; // System.Void ClientUpdateMounted(NetworkableId id)
constexpr auto CheckParachuteClearance = 9242288; // System.Boolean CheckParachuteClearance()
constexpr auto HasValidParachuteEquipped = 9298288; // System.Boolean HasValidParachuteEquipped()
constexpr auto CLIENT_SetPetPrefabID_BaseEntity_RPCMessage_msg = 9233440; // System.Void CLIENT_SetPetPrefabID(BaseEntity/RPCMessage msg)
constexpr auto CLIENT_SetPetPetLoadedStateIndex_BaseEntity_RPCMessage_msg = 9232928; // System.Void CLIENT_SetPetPetLoadedStateIndex(BaseEntity/RPCMessage msg)
constexpr auto LinkPet = 9315824; // System.Void LinkPet()
constexpr auto SetPetMenuOpen_System_Boolean_wantsOpen = 9393216; // System.Void SetPetMenuOpen(System.Boolean wantsOpen)
constexpr auto ClientIssuePetCommand_System_Int32_cmdType__System_Int32_param__System_Boolean_raycast = 9249264; // System.Void ClientIssuePetCommand(System.Int32 cmdType, System.Int32 param, System.Boolean raycast)
constexpr auto Client_ReceivePings_BaseEntity_RPCMessage_msg = 9263360; // System.Void Client_ReceivePings(BaseEntity/RPCMessage msg)
constexpr auto NotifyServerCreatePing_UnityEngine_Vector3_pos__BasePlayer_PingType_type__System_Boolean_viaWheel = 9323072; // System.Void NotifyServerCreatePing(UnityEngine.Vector3 pos, BasePlayer/PingType type, System.Boolean viaWheel)
constexpr auto PingInputUpdate = 9369200; // System.Void PingInputUpdate()
constexpr auto GetPingPoint_BaseEntity_entity__UnityEngine_Vector3_fallback = 9294528; // UnityEngine.Vector3 GetPingPoint(BaseEntity entity, UnityEngine.Vector3 fallback)
constexpr auto GetPingPoint_out_UnityEngine_RaycastHit_hit__System_Single_radius___0 = 9294976; // System.Boolean GetPingPoint(out UnityEngine.RaycastHit hit, System.Single radius = 0)
constexpr auto CanPing_System_Boolean_disregardHeldEntity___False = 9237584; // System.Boolean CanPing(System.Boolean disregardHeldEntity = False)
constexpr auto GetPingStyle_BasePlayer_PingType_t = 9295392; // BasePlayer/PingStyle GetPingStyle(BasePlayer/PingType t)
constexpr auto ApplyPingStyle_ProtoBuf_MapNote_note__BasePlayer_PingType_type = 9228848; // System.Void ApplyPingStyle(ProtoBuf.MapNote note, BasePlayer/PingType type)
constexpr auto IsSleeping = 9313536; // System.Boolean IsSleeping()
constexpr auto IsSpectating = 9313552; // System.Boolean IsSpectating()
constexpr auto IsRelaxed = 9313328; // System.Boolean IsRelaxed()
constexpr auto IsServerFalling = 9313520; // System.Boolean IsServerFalling()
constexpr auto IsLoadingAfterTransfer = 9312352; // System.Boolean IsLoadingAfterTransfer()
constexpr auto GetBuildingPrivilege = 9279392; // BuildingPrivlidge GetBuildingPrivilege()
constexpr auto CanBuild = 9236416; // System.Boolean CanBuild()
constexpr auto CanBuild_UnityEngine_Vector3_position__UnityEngine_Quaternion_rotation__UnityEngine_Bounds_bounds = 9236880; // System.Boolean CanBuild(UnityEngine.Vector3 position, UnityEngine.Quaternion rotation, UnityEngine.Bounds bounds)
constexpr auto CanBuild_OBB_obb = 9236592; // System.Boolean CanBuild(OBB obb)
constexpr auto IsBuildingBlocked = 9309280; // System.Boolean IsBuildingBlocked()
constexpr auto IsBuildingBlocked_UnityEngine_Vector3_position__UnityEngine_Quaternion_rotation__UnityEngine_Bounds_bounds = 9309472; // System.Boolean IsBuildingBlocked(UnityEngine.Vector3 position, UnityEngine.Quaternion rotation, UnityEngine.Bounds bounds)
constexpr auto IsBuildingBlocked_OBB_obb = 9308976; // System.Boolean IsBuildingBlocked(OBB obb)
constexpr auto IsBuildingAuthed = 9307168; // System.Boolean IsBuildingAuthed()
constexpr auto IsBuildingAuthed_UnityEngine_Vector3_position__UnityEngine_Quaternion_rotation__UnityEngine_Bounds_bounds = 9307344; // System.Boolean IsBuildingAuthed(UnityEngine.Vector3 position, UnityEngine.Quaternion rotation, UnityEngine.Bounds bounds)
constexpr auto IsBuildingAuthed_OBB_obb = 9306896; // System.Boolean IsBuildingAuthed(OBB obb)
constexpr auto CanPlaceBuildingPrivilege = 9238160; // System.Boolean CanPlaceBuildingPrivilege()
constexpr auto CanPlaceBuildingPrivilege_UnityEngine_Vector3_position__UnityEngine_Quaternion_rotation__UnityEngine_Bounds_bounds = 9238288; // System.Boolean CanPlaceBuildingPrivilege(UnityEngine.Vector3 position, UnityEngine.Quaternion rotation, UnityEngine.Bounds bounds)
constexpr auto CanPlaceBuildingPrivilege_OBB_obb = 9238656; // System.Boolean CanPlaceBuildingPrivilege(OBB obb)
constexpr auto IsBuildingBlockedByVehicle = 9307744; // System.Boolean IsBuildingBlockedByVehicle()
constexpr auto IsBuildingBlockedByVehicle_UnityEngine_Vector3_position__UnityEngine_Quaternion_rotation__UnityEngine_Bounds_bounds = 9308016; // System.Boolean IsBuildingBlockedByVehicle(UnityEngine.Vector3 position, UnityEngine.Quaternion rotation, UnityEngine.Bounds bounds)
constexpr auto IsBuildingBlockedByVehicle_OBB_obb = 9308224; // System.Boolean IsBuildingBlockedByVehicle(OBB obb)
constexpr auto NewProjectileID = 9323008; // System.Int32 NewProjectileID()
constexpr auto NewProjectileSeed = 9323024; // System.Int32 NewProjectileSeed()
constexpr auto SendProjectileAttack_ProtoBuf_PlayerProjectileAttack_attack = 9389760; // System.Void SendProjectileAttack(ProtoBuf.PlayerProjectileAttack attack)
constexpr auto SendProjectileRicochet_ProtoBuf_PlayerProjectileRicochet_ricochet = 9389856; // System.Void SendProjectileRicochet(ProtoBuf.PlayerProjectileRicochet ricochet)
constexpr auto SendProjectileUpdate_ProtoBuf_PlayerProjectileUpdate_update = 9389952; // System.Void SendProjectileUpdate(ProtoBuf.PlayerProjectileUpdate update)
constexpr auto Load_BaseNetworkable_LoadInfo_info = 9317984; // System.Void Load(BaseNetworkable/LoadInfo info)
constexpr auto SpectatedPlayerHeadshot = 9396016; // System.Void SpectatedPlayerHeadshot()
constexpr auto GetThreatLevel = 9296992; // System.Single GetThreatLevel()
constexpr auto EnsureUpdated = 9274608; // System.Void EnsureUpdated()
constexpr auto SetHostileLength_BaseEntity_RPCMessage_msg = 9391792; // System.Void SetHostileLength(BaseEntity/RPCMessage msg)
constexpr auto SetWeaponDrawnDuration_BaseEntity_RPCMessage_msg = 9395184; // System.Void SetWeaponDrawnDuration(BaseEntity/RPCMessage msg)
constexpr auto ModifyInputState_InputState_inputState = 3694560; // System.Void ModifyInputState(InputState inputState)
constexpr auto ForcePositionToParentOffset_UnityEngine_Vector3_position__NetworkableId_entID = 9277216; // System.Void ForcePositionToParentOffset(UnityEngine.Vector3 position, NetworkableId entID)
constexpr auto UpdateClientTickRate_BaseEntity_RPCMessage_msg = 9398528; // System.Void UpdateClientTickRate(BaseEntity/RPCMessage msg)
constexpr auto ForcePositionTo_UnityEngine_Vector3_position = 9277568; // System.Void ForcePositionTo(UnityEngine.Vector3 position)
constexpr auto ForceViewAnglesTo_UnityEngine_Vector3_newAng = 9277968; // System.Void ForceViewAnglesTo(UnityEngine.Vector3 newAng)
constexpr auto SendVoiceData_System_Byte___data__System_Int32_len = 9390048; // System.Void SendVoiceData(System.Byte[] data, System.Int32 len)
constexpr auto SendClientTick = 9387904; // System.Void SendClientTick()
constexpr auto NotifyUnderwearChange = 9323264; // System.Void NotifyUnderwearChange()
constexpr auto TimeSinceSeen = 9397264; // System.Single TimeSinceSeen()
constexpr auto SetNextVisThink_System_Single_addTime = 9393168; // System.Void SetNextVisThink(System.Single addTime)
constexpr auto WantsVisUpdate = 9411536; // System.Boolean WantsVisUpdate()
constexpr auto UpdateCullingSpheres = 9400992; // System.Void UpdateCullingSpheres()
constexpr auto VisUpdateUsingCulling_System_Single_dist__System_Boolean_visibility = 9409408; // System.Void VisUpdateUsingCulling(System.Single dist, System.Boolean visibility)
constexpr auto VisUpdateUsingRays_System_Single_dist = 9409680; // System.Void VisUpdateUsingRays(System.Single dist)
constexpr auto LogDebugCull_System_Single_dist = 9319584; // System.Void LogDebugCull(System.Single dist)
constexpr auto OnVisibilityChanged_System_Boolean_visible = 9368352; // System.Void OnVisibilityChanged(System.Boolean visible)
constexpr auto VisUpdate = 9410496; // System.Void VisUpdate()
constexpr auto VisPlayerArmed = 9409216; // System.Boolean VisPlayerArmed()
constexpr auto AnyPartVisible = 9225664; // System.Boolean AnyPartVisible()
constexpr auto CalcVisUpdateRate_System_Single_dist = 9234336; // System.Single CalcVisUpdateRate(System.Single dist)
constexpr auto PointSeePoint_UnityEngine_Vector3_target__UnityEngine_Vector3_origin__System_Single_dist___0__System_Boolean_useGameTrace___False = 9373360; // System.Boolean PointSeePoint(UnityEngine.Vector3 target, UnityEngine.Vector3 origin, System.Single dist = 0, System.Boolean useGameTrace = False)
constexpr auto IsWounded = 9314304; // System.Boolean IsWounded()
constexpr auto IsCrawling = 9309888; // System.Boolean IsCrawling()
constexpr auto IsIncapacitated = 9311696; // System.Boolean IsIncapacitated()
constexpr auto CLIENT_GetWoundedInformation_BaseEntity_RPCMessage_msg = 9230448; // System.Void CLIENT_GetWoundedInformation(BaseEntity/RPCMessage msg)
constexpr auto ToPlayer = 5828560; // BasePlayer ToPlayer()
constexpr auto get_Connection = 9418016; // Network.Connection get_Connection()
constexpr auto get_IsBot = 9419232; // System.Boolean get_IsBot()
constexpr auto get_displayName = 9419968; // System.String get_displayName()
constexpr auto set_displayName_System_String_value = 9421600; // System.Void set_displayName(System.String value)
constexpr auto IsGod = 9311104; // System.Boolean IsGod()
constexpr auto GetNetworkRotation = 9291504; // UnityEngine.Quaternion GetNetworkRotation()
constexpr auto CanInteract = 9237280; // System.Boolean CanInteract()
constexpr auto CanInteract_System_Boolean_usableWhileCrawling = 9237392; // System.Boolean CanInteract(System.Boolean usableWhileCrawling)
constexpr auto StartHealth = 9396496; // System.Single StartHealth()
constexpr auto StartMaxHealth = 5853776; // System.Single StartMaxHealth()
constexpr auto MaxHealth = 9321440; // System.Single MaxHealth()
constexpr auto MaxVelocity = 9321616; // System.Single MaxVelocity()
constexpr auto WorldSpaceBounds = 9412768; // OBB WorldSpaceBounds()
constexpr auto GetMountVelocity = 9291056; // UnityEngine.Vector3 GetMountVelocity()
constexpr auto GetInheritedProjectileVelocity_UnityEngine_Vector3_direction = 9282048; // UnityEngine.Vector3 GetInheritedProjectileVelocity(UnityEngine.Vector3 direction)
constexpr auto GetInheritedThrowVelocity_UnityEngine_Vector3_direction = 9282304; // UnityEngine.Vector3 GetInheritedThrowVelocity(UnityEngine.Vector3 direction)
constexpr auto GetInheritedDropVelocity = 9281856; // UnityEngine.Vector3 GetInheritedDropVelocity()
constexpr auto PreInitShared = 9375088; // System.Void PreInitShared()
constexpr auto DestroyShared = 9271280; // System.Void DestroyShared()
constexpr auto InSafeZone = 9300832; // System.Boolean InSafeZone()
constexpr auto IsInNoRespawnZone = 9311648; // System.Boolean IsInNoRespawnZone()
constexpr auto IsOnATugboat = 9312880; // System.Boolean IsOnATugboat()
constexpr auto ManuallyCheckSafezone = 9320704; // System.Boolean ManuallyCheckSafezone()
constexpr auto GetBounds_System_Boolean_ducked = 9278752; // UnityEngine.Bounds GetBounds(System.Boolean ducked)
constexpr auto GetBounds = 9279040; // UnityEngine.Bounds GetBounds()
constexpr auto GetCenter_System_Boolean_ducked = 9279792; // UnityEngine.Vector3 GetCenter(System.Boolean ducked)
constexpr auto GetCenter = 9279600; // UnityEngine.Vector3 GetCenter()
constexpr auto GetOffset_System_Boolean_ducked = 9292000; // UnityEngine.Vector3 GetOffset(System.Boolean ducked)
constexpr auto GetOffset = 9292032; // UnityEngine.Vector3 GetOffset()
constexpr auto GetSize_System_Boolean_ducked = 9296528; // UnityEngine.Vector3 GetSize(System.Boolean ducked)
constexpr auto GetSize = 9296576; // UnityEngine.Vector3 GetSize()
constexpr auto GetHeight_System_Boolean_ducked = 9281120; // System.Single GetHeight(System.Boolean ducked)
constexpr auto GetHeight = 9281152; // System.Single GetHeight()
constexpr auto GetRadius = 5695584; // System.Single GetRadius()
constexpr auto GetJumpHeight = 9283824; // System.Single GetJumpHeight()
constexpr auto TriggerPoint = 9397696; // UnityEngine.Vector3 TriggerPoint()
constexpr auto NoClipOffset = 9323040; // UnityEngine.Vector3 NoClipOffset()
constexpr auto NoClipRadius_System_Single_margin = 9323056; // System.Single NoClipRadius(System.Single margin)
constexpr auto MaxDeployDistance_Item_item = 6800272; // System.Single MaxDeployDistance(Item item)
constexpr auto ClientUpdatePersistantData_ProtoBuf_PersistantPlayer_data = 9257792; // System.Void ClientUpdatePersistantData(ProtoBuf.PersistantPlayer data)
constexpr auto GetMinSpeed = 9291008; // System.Single GetMinSpeed()
constexpr auto GetMaxSpeed = 9284288; // System.Single GetMaxSpeed()
constexpr auto GetSpeed_System_Single_running__System_Single_ducking__System_Single_crawling = 9296688; // System.Single GetSpeed(System.Single running, System.Single ducking, System.Single crawling)
constexpr auto OnAttacked_HitInfo_info = 9323328; // System.Void OnAttacked(HitInfo info)
constexpr auto EnablePlayerCollider = 9273696; // System.Void EnablePlayerCollider()
constexpr auto DisablePlayerCollider = 9271792; // System.Void DisablePlayerCollider()
constexpr auto RefreshColliderSize_System_Boolean_forced = 9382464; // System.Void RefreshColliderSize(System.Boolean forced)
constexpr auto SetPlayerRigidbodyState_System_Boolean_isEnabled = 9394992; // System.Void SetPlayerRigidbodyState(System.Boolean isEnabled)
constexpr auto AddPlayerRigidbody = 9224240; // System.Void AddPlayerRigidbody()
constexpr auto RemovePlayerRigidbody = 9383696; // System.Void RemovePlayerRigidbody()
constexpr auto IsEnsnared = 9310096; // System.Boolean IsEnsnared()
constexpr auto IsAttacking = 9306592; // System.Boolean IsAttacking()
constexpr auto CanAttack = 9235680; // System.Boolean CanAttack()
constexpr auto OnLadder = 9325664; // System.Boolean OnLadder()
constexpr auto IsSwimming = 9314224; // System.Boolean IsSwimming()
constexpr auto IsHeadUnderwater = 9311232; // System.Boolean IsHeadUnderwater()
constexpr auto IsOnGround = 9313168; // System.Boolean IsOnGround()
constexpr auto IsRunning = 9313344; // System.Boolean IsRunning()
constexpr auto IsDucked = 9309920; // System.Boolean IsDucked()
constexpr auto RecentlyTeleported = 9382016; // System.Boolean RecentlyTeleported()
constexpr auto ShowToast_GameTip_Styles_style__Translate_Phrase_phrase__System_String___arguments = 9395440; // System.Void ShowToast(GameTip/Styles style, Translate/Phrase phrase, System.String[] arguments)
constexpr auto ChatMessage_System_String_msg = 9240144; // System.Void ChatMessage(System.String msg)
constexpr auto ConsoleMessage_System_String_msg = 9268480; // System.Void ConsoleMessage(System.String msg)
constexpr auto PenetrationResistance_HitInfo_info = 5853776; // System.Single PenetrationResistance(HitInfo info)
constexpr auto ScaleDamage_HitInfo_info = 9387248; // System.Void ScaleDamage(HitInfo info)
constexpr auto UpdateMoveSpeedFromClothing = 9404496; // System.Void UpdateMoveSpeedFromClothing()
constexpr auto UpdateProtectionFromClothing = 9405744; // System.Void UpdateProtectionFromClothing()
constexpr auto Categorize = 9240096; // System.String Categorize()
constexpr auto ToString = 9397296; // System.String ToString()
constexpr auto GetDebugStatus = 9279952; // System.String GetDebugStatus()
constexpr auto GetItem_ItemId_itemId = 9283664; // Item GetItem(ItemId itemId)
constexpr auto get_Traits = 9419584; // BaseEntity/TraitFlag get_Traits()
constexpr auto WaterFactor = 9411568; // System.Single WaterFactor()
constexpr auto AirFactor = 9225488; // System.Single AirFactor()
constexpr auto GetOxygenTime_out_ItemModGiveOxygen_AirSupplyType_airSupplyType = 9292144; // System.Single GetOxygenTime(out ItemModGiveOxygen/AirSupplyType airSupplyType)
constexpr auto ShouldInheritNetworkGroup = 9313552; // System.Boolean ShouldInheritNetworkGroup()
constexpr auto IsStandingOnEntity_BaseEntity_standingOn__System_Int32_layerMask = 9313568; // System.Boolean IsStandingOnEntity(BaseEntity standingOn, System.Int32 layerMask)
constexpr auto SetActiveTelephone_PhoneController_t = 9390512; // System.Void SetActiveTelephone(PhoneController t)
constexpr auto get_HasActiveTelephone = 9418224; // System.Boolean get_HasActiveTelephone()
constexpr auto get_IsDesigningAI = 9419296; // System.Boolean get_IsDesigningAI()
constexpr auto ClearDesigningAIEntity = 9243184; // System.Void ClearDesigningAIEntity()
constexpr auto _ctor = 9417184; // System.Void .ctor()
constexpr auto _InviteToClan_b__17_0_ClanResult_result = 9397824; // System.Void <InviteToClan>b__17_0(ClanResult result)
}
namespace StaticMethods
{
constexpr auto AssignPlayerRandomBodyDetailsToPlayerModel_System_UInt64_userID__PlayerModel_model = 9229296; // System.Void AssignPlayerRandomBodyDetailsToPlayerModel(System.UInt64 userID, PlayerModel model)
constexpr auto GetPlayerRandomBodyDetails_System_UInt64_userID__out_System_Int32_skinType__out_System_Single_skinColor__out_System_Single_skinNumber__out_System_Single_meshNumber__out_System_Single_hairNumber = 9295856; // System.Void GetPlayerRandomBodyDetails(System.UInt64 userID, out System.Int32 skinType, out System.Single skinColor, out System.Single skinNumber, out System.Single meshNumber, out System.Single hairNumber)
constexpr auto get_VisiblePlayerList = 9419744; // BufferList`1<BasePlayer> get_VisiblePlayerList()
constexpr auto ClearVisibility = 9243680; // System.Void ClearVisibility()
constexpr auto RegisterForVisibility_BasePlayer_player = 9383200; // System.Void RegisterForVisibility(BasePlayer player)
constexpr auto UnregisterFromVisibility_System_UInt64_userID = 9398272; // System.Void UnregisterFromVisibility(System.UInt64 userID)
constexpr auto FindByID_Clientside_System_UInt64_userID = 9275568; // BasePlayer FindByID_Clientside(System.UInt64 userID)
constexpr auto Find_Clientside_System_String_strNameOrIDOrIP = 9276016; // BasePlayer Find_Clientside(System.String strNameOrIDOrIP)
constexpr auto GetRandomFloatBasedOnUserID_System_UInt64_steamid__System_UInt64_seed = 9296400; // System.Single GetRandomFloatBasedOnUserID(System.UInt64 steamid, System.UInt64 seed)
constexpr auto FindVehicleParentFor_BaseEntity_entity = 9275712; // BaseVehicle FindVehicleParentFor(BaseEntity entity)
constexpr auto LocalPlayerIsLeader = 9319360; // System.Boolean LocalPlayerIsLeader()
constexpr auto UpdatePlayerVisibilities = 9405360; // System.Void UpdatePlayerVisibilities()
constexpr auto IsAimingAt_BasePlayer_aimer__BasePlayer_target__System_Single_cone___0_95 = 9306192; // System.Boolean IsAimingAt(BasePlayer aimer, BasePlayer target, System.Single cone = 0.95)
constexpr auto SanitizePlayerNameString_System_String_playerName__System_UInt64_userId = 9386048; // System.String SanitizePlayerNameString(System.String playerName, System.UInt64 userId)
constexpr auto LateClientCycle = 9314320; // System.Void LateClientCycle()
constexpr auto ClientCycle_System_Single_deltaTime = 9243968; // System.Void ClientCycle(System.Single deltaTime)
constexpr auto AnyPlayersVisibleToEntity_UnityEngine_Vector3_pos__System_Single_radius__BaseEntity_source__UnityEngine_Vector3_entityEyePos__System_Boolean_ignorePlayersWithPriv___False = 9227264; // System.Boolean AnyPlayersVisibleToEntity(UnityEngine.Vector3 pos, System.Single radius, BaseEntity source, UnityEngine.Vector3 entityEyePos, System.Boolean ignorePlayersWithPriv = False)
constexpr auto _cctor = 9413424; // System.Void .cctor()
}
}
namespace BaseOven
{
namespace Fields
{
constexpr auto __menuOption_SwitchOff = 0x480; // GameMenu.Option
constexpr auto __menuOption_SwitchOn = 0x500; // GameMenu.Option
constexpr auto temperature = 0x580; // BaseOven/TemperatureType
constexpr auto switchOnMenu = 0x588; // BaseEntity/Menu/Option
constexpr auto switchOffMenu = 0x5a8; // BaseEntity/Menu/Option
constexpr auto startupContents = 0x5c8; // unknown
constexpr auto allowByproductCreation = 0x5d0; // System.Boolean
constexpr auto fuelType = 0x5d8; // ItemDefinition
constexpr auto canModFire = 0x5e0; // System.Boolean
constexpr auto disabledBySplash = 0x5e1; // System.Boolean
constexpr auto smeltSpeed = 0x5e4; // System.Int32
constexpr auto fuelSlots = 0x5e8; // System.Int32
constexpr auto inputSlots = 0x5ec; // System.Int32
constexpr auto outputSlots = 0x5f0; // System.Int32
constexpr auto IndustrialMode = 0x5f4; // BaseOven/IndustrialSlotMode
constexpr auto cookSpeedClient = 0x5f8; // System.Single
}
namespace StaticFields
{
constexpr auto _materialOutputCache = 0x0; // System.Collections.Generic.Dictionary`2
}
namespace Methods
{
constexpr auto GetMenuOptions_System_Collections_Generic_List_1_GameMenu_Option__list = 8161344; // System.Void GetMenuOptions(System.Collections.Generic.List`1<GameMenu.Option> list)
constexpr auto get_HasMenuOptions = 8165408; // System.Boolean get_HasMenuOptions()
constexpr auto OnRpcMessage_BasePlayer_player__System_UInt32_rpc__Network_Message_msg = 8164752; // System.Boolean OnRpcMessage(BasePlayer player, System.UInt32 rpc, Network.Message msg)
constexpr auto GetSmeltingSpeed = 8162752; // System.Single GetSmeltingSpeed()
constexpr auto get_cookingTemperature = 8165712; // System.Single get_cookingTemperature()
constexpr auto IsBurnableItem_Item_item = 8163120; // System.Boolean IsBurnableItem(Item item)
constexpr auto IsBurnableByproduct_Item_item = 8162912; // System.Boolean IsBurnableByproduct(Item item)
constexpr auto IsMaterialInput_Item_item = 8163392; // System.Boolean IsMaterialInput(Item item)
constexpr auto IsMaterialOutput_Item_item = 8163728; // System.Boolean IsMaterialOutput(Item item)
constexpr auto IsOutputItem_Item_item = 8164080; // System.Boolean IsOutputItem(Item item)
constexpr auto BuildMaterialOutputCache = 8159424; // System.Void BuildMaterialOutputCache()
constexpr auto HasSlot_BaseEntity_Slot_slot = 8162880; // System.Boolean HasSlot(BaseEntity/Slot slot)
constexpr auto Load_BaseNetworkable_LoadInfo_info = 8164656; // System.Void Load(BaseNetworkable/LoadInfo info)
constexpr auto SwitchOn_BasePlayer_player = 8165200; // System.Void SwitchOn(BasePlayer player)
constexpr auto SwitchOn_ShowIf_BasePlayer_player = 8165136; // System.Boolean SwitchOn_ShowIf(BasePlayer player)
constexpr auto SwitchOff_BasePlayer_player = 8165056; // System.Void SwitchOff(BasePlayer player)
constexpr auto SwitchOff_ShowIf_BasePlayer_player = 8164992; // System.Boolean SwitchOff_ShowIf(BasePlayer player)
constexpr auto get_HasDisabledRenderers = 3694048; // System.Boolean get_HasDisabledRenderers()
constexpr auto SupportsChildDeployables = 3694048; // System.Boolean SupportsChildDeployables()
constexpr auto CanPickup_BasePlayer_player = 8161168; // System.Boolean CanPickup(BasePlayer player)
constexpr auto CanPickupOven = 8161088; // System.Boolean CanPickupOven()
constexpr auto _ctor = 8165280; // System.Void .ctor()
}
}
namespace AutoTurret
{
namespace Fields
{
constexpr auto __menuOption_Menu_AssignToFriend = 0x408; // GameMenu.Option
constexpr auto __menuOption_Menu_MaxAuth = 0x488; // GameMenu.Option
constexpr auto __menuOption_Menu_SetID = 0x508; // GameMenu.Option
constexpr auto __menuOption_MenuAuthorize = 0x588; // GameMenu.Option
constexpr auto __menuOption_MenuClearList = 0x608; // GameMenu.Option
constexpr auto __menuOption_MenuDeauthorize = 0x688; // GameMenu.Option
constexpr auto __menuOption_MenuTurretAttackAll = 0x708; // GameMenu.Option
constexpr auto __menuOption_MenuTurretPeacekeeper = 0x788; // GameMenu.Option
constexpr auto __menuOption_MenuTurretRotate = 0x808; // GameMenu.Option
constexpr auto gun_fire_effect = 0x888; // GameObjectRef
constexpr auto bulletEffect = 0x890; // GameObjectRef
constexpr auto bulletSpeed = 0x898; // System.Single
constexpr auto ambienceEmitter = 0x8a0; // AmbienceEmitter
constexpr auto assignDialog = 0x8a8; // UnityEngine.GameObject
constexpr auto laserBeam = 0x8b0; // LaserBeam
constexpr auto turnSoundModulator = 0x8b8; // SoundModulation/Modulator
constexpr auto turnLoop = 0x8c0; // Sound
constexpr auto nextFocusSound = 0x8c8; // System.Single
constexpr auto wasTurning = 0x8cc; // System.Boolean
constexpr auto lastYaw = 0x8d0; // UnityEngine.Quaternion
constexpr auto target = 0x8e0; // BaseCombatEntity
constexpr auto eyePos = 0x8e8; // UnityEngine.Transform
constexpr auto muzzlePos = 0x8f0; // UnityEngine.Transform
constexpr auto aimDir = 0x8f8; // UnityEngine.Vector3
constexpr auto gun_yaw = 0x908; // UnityEngine.Transform
constexpr auto gun_pitch = 0x910; // UnityEngine.Transform
constexpr auto sightRange = 0x918; // System.Single
constexpr auto turnLoopDef = 0x920; // SoundDefinition
constexpr auto movementChangeDef = 0x928; // SoundDefinition
constexpr auto ambientLoopDef = 0x930; // SoundDefinition
constexpr auto focusCameraDef = 0x938; // SoundDefinition
constexpr auto focusSoundFreqMin = 0x940; // System.Single
constexpr auto focusSoundFreqMax = 0x944; // System.Single
constexpr auto peacekeeperToggleSound = 0x948; // GameObjectRef
constexpr auto onlineSound = 0x950; // GameObjectRef
constexpr auto offlineSound = 0x958; // GameObjectRef
constexpr auto targetAcquiredEffect = 0x960; // GameObjectRef
constexpr auto targetLostEffect = 0x968; // GameObjectRef
constexpr auto reloadEffect = 0x970; // GameObjectRef
constexpr auto aimCone = 0x978; // System.Single
constexpr auto authorizedPlayers = 0x980; // System.Collections.Generic.List`1
constexpr auto rcTurnSensitivity = 0x988; // System.Single
constexpr auto RCEyes = 0x990; // UnityEngine.Transform
constexpr auto IDPanelPrefab = 0x998; // GameObjectRef
constexpr auto rcControls = 0x9a0; // RemoteControllableControls
constexpr auto rcIdentifier = 0x9a8; // System.String
constexpr auto timeSinceManualAim = 0x9b0; // RealTimeSince
constexpr auto targetTrigger = 0x9b8; // TargetTrigger
constexpr auto interferenceTrigger = 0x9c0; // TriggerBase
constexpr auto maxInterference = 0x9c8; // System.Single
constexpr auto socketTransform = 0x9d0; // UnityEngine.Transform
}
namespace StaticFields
{
constexpr auto Flag_Equipped = 0x0; // BaseEntity/Flags
constexpr auto Flag_MaxAuths = 0x0; // BaseEntity/Flags
constexpr auto auto_turret_budget_ms = 0x0; // System.Single
}
namespace Methods
{
constexpr auto GetMenuOptions_System_Collections_Generic_List_1_GameMenu_Option__list = 8075360; // System.Void GetMenuOptions(System.Collections.Generic.List`1<GameMenu.Option> list)
constexpr auto get_HasMenuOptions = 8092208; // System.Boolean get_HasMenuOptions()
constexpr auto OnRpcMessage_BasePlayer_player__System_UInt32_rpc__Network_Message_msg = 8085568; // System.Boolean OnRpcMessage(BasePlayer player, System.UInt32 rpc, Network.Message msg)
constexpr auto get_CanPing = 4889040; // System.Boolean get_CanPing()
constexpr auto ShouldShowLootMenus = 8087680; // System.Boolean ShouldShowLootMenus()
constexpr auto ClientInit_ProtoBuf_Entity_info = 8074768; // System.Void ClientInit(ProtoBuf.Entity info)
constexpr auto InitializeClientsideEffects = 3694560; // System.Void InitializeClientsideEffects()
constexpr auto DoClientDestroy = 8075072; // System.Void DoClientDestroy()
constexpr auto ClientTick_System_Single_dt = 8074784; // System.Void ClientTick(System.Single dt)
constexpr auto UpdateSounds_System_Boolean_didTurn = 8090496; // System.Void UpdateSounds(System.Boolean didTurn)
constexpr auto CLIENT_ReceiveAimDir_BaseEntity_RPCMessage_rpc = 8074240; // System.Void CLIENT_ReceiveAimDir(BaseEntity/RPCMessage rpc)
constexpr auto CLIENT_FireGun_BaseEntity_RPCMessage_rpc = 8073072; // System.Void CLIENT_FireGun(BaseEntity/RPCMessage rpc)
constexpr auto Menu_MaxAuth_BasePlayer_player = 3694560; // System.Void Menu_MaxAuth(BasePlayer player)
constexpr auto MenuMaxAuth_ShowIf_BasePlayer_player = 8084208; // System.Boolean MenuMaxAuth_ShowIf(BasePlayer player)
constexpr auto MenuAuthorize_BasePlayer_player = 8084016; // System.Void MenuAuthorize(BasePlayer player)
constexpr auto MenuAuthorize_ShowIf_BasePlayer_player = 8083888; // System.Boolean MenuAuthorize_ShowIf(BasePlayer player)
constexpr auto MenuDeauthorize_BasePlayer_player = 8084144; // System.Void MenuDeauthorize(BasePlayer player)
constexpr auto MenuDeauthorize_ShowIf_BasePlayer_player = 8074368; // System.Boolean MenuDeauthorize_ShowIf(BasePlayer player)
constexpr auto MenuClearList_BasePlayer_player = 8084080; // System.Void MenuClearList(BasePlayer player)
constexpr auto MenuClearList_ShowIf_BasePlayer_player = 8074368; // System.Boolean MenuClearList_ShowIf(BasePlayer player)
constexpr auto MenuTurretRotate_BasePlayer_player = 8084576; // System.Void MenuTurretRotate(BasePlayer player)
constexpr auto MenuTurretRotate_ShowIf_BasePlayer_player = 8074368; // System.Boolean MenuTurretRotate_ShowIf(BasePlayer player)
constexpr auto MenuTurretPeacekeeper_BasePlayer_player = 8084512; // System.Void MenuTurretPeacekeeper(BasePlayer player)
constexpr auto MenuTurretPeacekeeper_ShowIf_BasePlayer_player = 8084432; // System.Boolean MenuTurretPeacekeeper_ShowIf(BasePlayer player)
constexpr auto MenuTurretAttackAll_BasePlayer_player = 8084368; // System.Void MenuTurretAttackAll(BasePlayer player)
constexpr auto MenuTurretAttackAll_ShowIf_BasePlayer_player = 8084304; // System.Boolean MenuTurretAttackAll_ShowIf(BasePlayer player)
constexpr auto Menu_AssignToFriend_BasePlayer_player = 8084720; // System.Void Menu_AssignToFriend(BasePlayer player)
constexpr auto Menu_AssignToFriend_Test_BasePlayer_player = 8084640; // System.Boolean Menu_AssignToFriend_Test(BasePlayer player)
constexpr auto Menu_Open_ShowIf_BasePlayer_player = 8085088; // System.Boolean Menu_Open_ShowIf(BasePlayer player)
constexpr auto IsOnline = 8083600; // System.Boolean IsOnline()
constexpr auto IsOffline = 8083568; // System.Boolean IsOffline()
constexpr auto ResetState = 8087568; // System.Void ResetState()
constexpr auto GetCenterMuzzle = 8075312; // UnityEngine.Transform GetCenterMuzzle()
constexpr auto AngleToTarget_BaseCombatEntity_potentialtarget__System_Boolean_use2D___False = 8072624; // System.Single AngleToTarget(BaseCombatEntity potentialtarget, System.Boolean use2D = False)
constexpr auto InFiringArc_BaseCombatEntity_potentialtarget = 8082816; // System.Boolean InFiringArc(BaseCombatEntity potentialtarget)
constexpr auto CanPickup_BasePlayer_player = 8074576; // System.Boolean CanPickup(BasePlayer player)
constexpr auto Load_BaseNetworkable_LoadInfo_info = 8083616; // System.Void Load(BaseNetworkable/LoadInfo info)
constexpr auto Update = 8091552; // System.Void Update()
constexpr auto AimOffset_BaseCombatEntity_aimat = 8072032; // UnityEngine.Vector3 AimOffset(BaseCombatEntity aimat)
constexpr auto GetAimSpeed = 8075264; // System.Single GetAimSpeed()
constexpr auto UpdateAiming_System_Single_dt = 8088016; // System.Void UpdateAiming(System.Single dt)
constexpr auto IsAuthed_System_UInt64_id = 8083264; // System.Boolean IsAuthed(System.UInt64 id)
constexpr auto IsAuthed_BasePlayer_player = 8083216; // System.Boolean IsAuthed(BasePlayer player)
constexpr auto AnyAuthed = 8072992; // System.Boolean AnyAuthed()
constexpr auto CanChangeSettings_BasePlayer_player = 8074400; // System.Boolean CanChangeSettings(BasePlayer player)
constexpr auto PeacekeeperMode = 5754352; // System.Boolean PeacekeeperMode()
constexpr auto GetEyes = 8075328; // UnityEngine.Transform GetEyes()
constexpr auto GetFovScale = 6001104; // System.Single GetFovScale()
constexpr auto GetEnt = 5828560; // BaseEntity GetEnt()
constexpr auto CanControl_System_UInt64_playerID = 8074496; // System.Boolean CanControl(System.UInt64 playerID)
constexpr auto get_RequiresMouse = 3694048; // System.Boolean get_RequiresMouse()
constexpr auto get_MaxRange = 8093056; // System.Single get_MaxRange()
constexpr auto get_RequiredControls = 8093072; // RemoteControllableControls get_RequiredControls()
constexpr auto LocalInput_InputState_inputState = 8083840; // System.Void LocalInput(InputState inputState)
constexpr auto HasManualAim = 8082768; // System.Boolean HasManualAim()
constexpr auto UpdateManualAim_InputState_inputState = 8089504; // System.Boolean UpdateManualAim(InputState inputState)
constexpr auto InitShared = 8083200; // System.Void InitShared()
constexpr auto DestroyShared = 8075056; // System.Void DestroyShared()
constexpr auto RCSetup = 3694560; // System.Void RCSetup()
constexpr auto RCShutdown = 3694560; // System.Void RCShutdown()
constexpr auto UpdateIdentifier_System_String_newID__System_Boolean_clientSend___False = 8089312; // System.Void UpdateIdentifier(System.String newID, System.Boolean clientSend = False)
constexpr auto GetIdentifier = 8075344; // System.String GetIdentifier()
constexpr auto CanChangeID_BasePlayer_player = 8074368; // System.Boolean CanChangeID(BasePlayer player)
constexpr auto Menu_SetID_BasePlayer_player = 8085328; // System.Void Menu_SetID(BasePlayer player)
constexpr auto Menu_SetID_ShowIf_BasePlayer_player = 8085184; // System.Boolean Menu_SetID_ShowIf(BasePlayer player)
constexpr auto ConsumptionAmount = 8075040; // System.Int32 ConsumptionAmount()
constexpr auto _ctor = 8091920; // System.Void .ctor()
constexpr auto _Menu_AssignToFriend_b__48_0_System_UInt64_id = 8087728; // System.Boolean <Menu_AssignToFriend>b__48_0(System.UInt64 id)
constexpr auto _Menu_AssignToFriend_b__48_1_System_UInt64_id__System_String_steamName = 8087760; // System.Void <Menu_AssignToFriend>b__48_1(System.UInt64 id, System.String steamName)
}
namespace StaticMethods
{
constexpr auto _cctor = 8091856; // System.Void .cctor()
}
}
}
