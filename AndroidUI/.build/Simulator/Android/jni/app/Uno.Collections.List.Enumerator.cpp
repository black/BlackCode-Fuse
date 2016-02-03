#include <app/Experimental.Cache.DiskCacheEntry.h>
#include <app/Fuse.Animations.Animator.h>
#include <app/Fuse.Animations.IMixerMaster.h>
#include <app/Fuse.Animations.Keyframe.h>
#include <app/Fuse.Animations.MixerHandle__Fuse_Transform.h>
#include <app/Fuse.Behavior.h>
#include <app/Fuse.CacheFramebuffer.h>
#include <app/Fuse.Controls.Control.h>
#include <app/Fuse.Controls.Internal.WordWrapperWord.h>
#include <app/Fuse.Controls.Internal.WrappedLine.h>
#include <app/Fuse.Controls.TextEdit.LineCacheLine.h>
#include <app/Fuse.Drawing.Batching.Batch.h>
#include <app/Fuse.Drawing.Batching.Entry.h>
#include <app/Fuse.Drawing.Brush.h>
#include <app/Fuse.Drawing.Contour.h>
#include <app/Fuse.Drawing.GradientStop.h>
#include <app/Fuse.Drawing.PathGeometry.h>
#include <app/Fuse.Drawing.Stroke.h>
#include <app/Fuse.Effects.Effect.h>
#include <app/Fuse.Elements.Element.h>
#include <app/Fuse.Elements.ElementAtlas.h>
#include <app/Fuse.Elements.ElementBatch.h>
#include <app/Fuse.Elements.ElementBatchEntry.h>
#include <app/Fuse.Elements.IElementBatchDrawable.h>
#include <app/Fuse.Entities.Component.h>
#include <app/Fuse.Entities.Entity.h>
#include <app/Fuse.Input.Capturer.h>
#include <app/Fuse.Input.FocusGainedHandler.h>
#include <app/Fuse.Input.FocusLostHandler.h>
#include <app/Fuse.Input.IsFocusableChangedHandler.h>
#include <app/Fuse.Input.KeyPressedHandler.h>
#include <app/Fuse.Input.KeyReleasedHandler.h>
#include <app/Fuse.Input.PointerEnteredHandler.h>
#include <app/Fuse.Input.PointerLeftHandler.h>
#include <app/Fuse.Input.PointerMovedHandler.h>
#include <app/Fuse.Input.PointerPressedHandler.h>
#include <app/Fuse.Input.PointerReleasedHandler.h>
#include <app/Fuse.Input.PointerWheelMovedHandler.h>
#include <app/Fuse.Input.TextEnteredHandler.h>
#include <app/Fuse.iOS.StatusBarConfig.h>
#include <app/Fuse.IViewport.h>
#include <app/Fuse.Layouts.Column.h>
#include <app/Fuse.Layouts.Row.h>
#include <app/Fuse.Navigation.INavigationAnimator.h>
#include <app/Fuse.Navigation.IPageResourceBinding.h>
#include <app/Fuse.Node.h>
#include <app/Fuse.Physics.Body.h>
#include <app/Fuse.Physics.IRule.h>
#include <app/Fuse.Reactive.Case.h>
#include <app/Fuse.Reactive.JavaScript.h>
#include <app/Fuse.RenderTargetEntry.h>
#include <app/Fuse.Resources.ImageSource.h>
#include <app/Fuse.Resources.IMemoryResource.h>
#include <app/Fuse.Resources.ISoftDisposable.h>
#include <app/Fuse.Scripting.INameListener.h>
#include <app/Fuse.Scripting.NativeMember.h>
#include <app/Fuse.Stage.h>
#include <app/Fuse.Style.h>
#include <app/Fuse.StyleProperty.h>
#include <app/Fuse.Transform.h>
#include <app/Fuse.Triggers.Actions.TriggerAction.h>
#include <app/Fuse.Triggers.State.h>
#include <app/Fuse.UpdateListener.h>
#include <app/Outracks.Simulator.Bytecode.TypeName.h>
#include <app/Outracks.Simulator.Task__Outracks_Simulator_ISimulatorClient.h>
#include <app/Outracks.Simulator.Task__Uno_Net_IPEndPoint__.h>
#include <app/Uno.Action.h>
#include <app/Uno.Bool.h>
#include <app/Uno.Byte.h>
#include <app/Uno.Char.h>
#include <app/Uno.Collections.Dictionary__Outracks_Simulator_Bytecode_TypeNam-95c49e9b.h>
#include <app/Uno.Collections.List__byte.h>
#include <app/Uno.Collections.List__byte__.h>
#include <app/Uno.Collections.List__char.h>
#include <app/Uno.Collections.List__Experimental_Cache_DiskCacheEntry.h>
#include <app/Uno.Collections.List__float2.h>
#include <app/Uno.Collections.List__float3.h>
#include <app/Uno.Collections.List__float4.h>
#include <app/Uno.Collections.List__framebuffer.h>
#include <app/Uno.Collections.List__Fuse_Animations_Animator.h>
#include <app/Uno.Collections.List__Fuse_Animations_IMixerMaster.h>
#include <app/Uno.Collections.List__Fuse_Animations_Keyframe.h>
#include <app/Uno.Collections.List__Fuse_Animations_MixerHandle_Fuse_Transform_.h>
#include <app/Uno.Collections.List__Fuse_Behavior.h>
#include <app/Uno.Collections.List__Fuse_CacheFramebuffer.h>
#include <app/Uno.Collections.List__Fuse_Controls_Control.h>
#include <app/Uno.Collections.List__Fuse_Controls_Internal_WordWrapperWord.h>
#include <app/Uno.Collections.List__Fuse_Controls_Internal_WrappedLine.h>
#include <app/Uno.Collections.List__Fuse_Controls_TextEdit_LineCacheLine.h>
#include <app/Uno.Collections.List__Fuse_Drawing_Batching_Batch.h>
#include <app/Uno.Collections.List__Fuse_Drawing_Batching_Entry.h>
#include <app/Uno.Collections.List__Fuse_Drawing_Brush.h>
#include <app/Uno.Collections.List__Fuse_Drawing_Contour.h>
#include <app/Uno.Collections.List__Fuse_Drawing_GradientStop.h>
#include <app/Uno.Collections.List__Fuse_Drawing_PathGeometry.h>
#include <app/Uno.Collections.List__Fuse_Drawing_Stroke.h>
#include <app/Uno.Collections.List__Fuse_Effects_Effect.h>
#include <app/Uno.Collections.List__Fuse_Elements_Element.h>
#include <app/Uno.Collections.List__Fuse_Elements_ElementAtlas.h>
#include <app/Uno.Collections.List__Fuse_Elements_ElementBatch.h>
#include <app/Uno.Collections.List__Fuse_Elements_ElementBatchEntry.h>
#include <app/Uno.Collections.List__Fuse_Elements_IElementBatchDrawable.h>
#include <app/Uno.Collections.List__Fuse_Entities_Component.h>
#include <app/Uno.Collections.List__Fuse_Entities_Entity.h>
#include <app/Uno.Collections.List__Fuse_Entities_Entry.h>
#include <app/Uno.Collections.List__Fuse_Input_Capturer.h>
#include <app/Uno.Collections.List__Fuse_Input_FocusGainedHandler.h>
#include <app/Uno.Collections.List__Fuse_Input_FocusLostHandler.h>
#include <app/Uno.Collections.List__Fuse_Input_IsFocusableChangedHandler.h>
#include <app/Uno.Collections.List__Fuse_Input_KeyPressedHandler.h>
#include <app/Uno.Collections.List__Fuse_Input_KeyReleasedHandler.h>
#include <app/Uno.Collections.List__Fuse_Input_PointerEnteredHandler.h>
#include <app/Uno.Collections.List__Fuse_Input_PointerLeftHandler.h>
#include <app/Uno.Collections.List__Fuse_Input_PointerMovedHandler.h>
#include <app/Uno.Collections.List__Fuse_Input_PointerPressedHandler.h>
#include <app/Uno.Collections.List__Fuse_Input_PointerReleasedHandler.h>
#include <app/Uno.Collections.List__Fuse_Input_PointerWheelMovedHandler.h>
#include <app/Uno.Collections.List__Fuse_Input_TextEnteredHandler.h>
#include <app/Uno.Collections.List__Fuse_iOS_StatusBarConfig.h>
#include <app/Uno.Collections.List__Fuse_IViewport.h>
#include <app/Uno.Collections.List__Fuse_Layouts_Column.h>
#include <app/Uno.Collections.List__Fuse_Layouts_Row.h>
#include <app/Uno.Collections.List__Fuse_Navigation_INavigationAnimator.h>
#include <app/Uno.Collections.List__Fuse_Navigation_IPageResourceBinding.h>
#include <app/Uno.Collections.List__Fuse_Node.h>
#include <app/Uno.Collections.List__Fuse_Physics_Body.h>
#include <app/Uno.Collections.List__Fuse_Physics_IRule.h>
#include <app/Uno.Collections.List__Fuse_Reactive_Case.h>
#include <app/Uno.Collections.List__Fuse_Reactive_JavaScript.h>
#include <app/Uno.Collections.List__Fuse_RenderTargetEntry.h>
#include <app/Uno.Collections.List__Fuse_Resources_ImageSource.h>
#include <app/Uno.Collections.List__Fuse_Resources_IMemoryResource.h>
#include <app/Uno.Collections.List__Fuse_Resources_ISoftDisposable.h>
#include <app/Uno.Collections.List__Fuse_Scripting_INameListener.h>
#include <app/Uno.Collections.List__Fuse_Scripting_NativeMember.h>
#include <app/Uno.Collections.List__Fuse_Stage.h>
#include <app/Uno.Collections.List__Fuse_Style.h>
#include <app/Uno.Collections.List__Fuse_StyleProperty.h>
#include <app/Uno.Collections.List__Fuse_Transform.h>
#include <app/Uno.Collections.List__Fuse_Triggers_Actions_TriggerAction.h>
#include <app/Uno.Collections.List__Fuse_Triggers_State.h>
#include <app/Uno.Collections.List__Fuse_UpdateListener.h>
#include <app/Uno.Collections.List__int.h>
#include <app/Uno.Collections.List__int4.h>
#include <app/Uno.Collections.List__object.h>
#include <app/Uno.Collections.List__Outracks_Simulator_Bytecode_TypeName.h>
#include <app/Uno.Collections.List__Outracks_Simulator_Task_Outracks_Simulato-ae93148c.h>
#include <app/Uno.Collections.List__Outracks_Simulator_Task_Uno_Net_IPEndPoint___.h>
#include <app/Uno.Collections.List__string.h>
#include <app/Uno.Collections.List__Uno_Action.h>
#include <app/Uno.Collections.List__Uno_Collections_Dictionary_Outracks_Simul-c14837e5.h>
#include <app/Uno.Collections.List__Uno_Content_Models_ModelDrawable.h>
#include <app/Uno.Collections.List__Uno_Content_Models_ModelNode.h>
#include <app/Uno.Collections.List__Uno_Content_Models_ModelParameter_float4x4_.h>
#include <app/Uno.Collections.List__Uno_Content_Models_ModelSkin.h>
#include <app/Uno.Collections.List__Uno_Content_Models_SkinBone.h>
#include <app/Uno.Collections.List__Uno_Content_Models_SkinDrawable.h>
#include <app/Uno.Collections.List__Uno_Content_Models_VertexInfluence.h>
#include <app/Uno.Collections.List__Uno_Data_Json_Value.h>
#include <app/Uno.Collections.List__Uno_Data_Xml_XmlAttributeHandle.h>
#include <app/Uno.Collections.List__Uno_Data_Xml_XmlLinkedNode.h>
#include <app/Uno.Collections.List__Uno_Data_Xml_XmlNodeHandle.h>
#include <app/Uno.Collections.List__Uno_Diagnostics_ProfileEvent.h>
#include <app/Uno.Collections.List__Uno_EventHandler.h>
#include <app/Uno.Collections.List__Uno_Exception.h>
#include <app/Uno.Collections.List__Uno_Graphics_PolygonFace.h>
#include <app/Uno.Collections.List__Uno_Net_Http_HttpMessageHandlerRequest.h>
#include <app/Uno.Collections.List__Uno_Platform_Key.h>
#include <app/Uno.Collections.List__Uno_Reflection_CppField.h>
#include <app/Uno.Collections.List__Uno_Reflection_CppFunction.h>
#include <app/Uno.Collections.List__Uno_Runtime_Implementation_Internal_Forma-9a8ac0f6.h>
#include <app/Uno.Collections.List__Uno_UX_FileSource.h>
#include <app/Uno.Collections.List__Uno_UX_IFactory.h>
#include <app/Uno.Collections.List__Uno_UX_ITemplate.h>
#include <app/Uno.Collections.List__Uno_UX_Resource.h>
#include <app/Uno.Collections.List1_Enumerator__byte.h>
#include <app/Uno.Collections.List1_Enumerator__byte__.h>
#include <app/Uno.Collections.List1_Enumerator__char.h>
#include <app/Uno.Collections.List1_Enumerator__Experimental_Cache_DiskCacheEntry.h>
#include <app/Uno.Collections.List1_Enumerator__float2.h>
#include <app/Uno.Collections.List1_Enumerator__float3.h>
#include <app/Uno.Collections.List1_Enumerator__float4.h>
#include <app/Uno.Collections.List1_Enumerator__framebuffer.h>
#include <app/Uno.Collections.List1_Enumerator__Fuse_Animations_Animator.h>
#include <app/Uno.Collections.List1_Enumerator__Fuse_Animations_IMixerMaster.h>
#include <app/Uno.Collections.List1_Enumerator__Fuse_Animations_Keyframe.h>
#include <app/Uno.Collections.List1_Enumerator__Fuse_Animations_MixerHandle_F-5f679295.h>
#include <app/Uno.Collections.List1_Enumerator__Fuse_Behavior.h>
#include <app/Uno.Collections.List1_Enumerator__Fuse_CacheFramebuffer.h>
#include <app/Uno.Collections.List1_Enumerator__Fuse_Controls_Control.h>
#include <app/Uno.Collections.List1_Enumerator__Fuse_Controls_Internal_WordWrapperWord.h>
#include <app/Uno.Collections.List1_Enumerator__Fuse_Controls_Internal_WrappedLine.h>
#include <app/Uno.Collections.List1_Enumerator__Fuse_Controls_TextEdit_LineCacheLine.h>
#include <app/Uno.Collections.List1_Enumerator__Fuse_Drawing_Batching_Batch.h>
#include <app/Uno.Collections.List1_Enumerator__Fuse_Drawing_Batching_Entry.h>
#include <app/Uno.Collections.List1_Enumerator__Fuse_Drawing_Brush.h>
#include <app/Uno.Collections.List1_Enumerator__Fuse_Drawing_Contour.h>
#include <app/Uno.Collections.List1_Enumerator__Fuse_Drawing_GradientStop.h>
#include <app/Uno.Collections.List1_Enumerator__Fuse_Drawing_PathGeometry.h>
#include <app/Uno.Collections.List1_Enumerator__Fuse_Drawing_Stroke.h>
#include <app/Uno.Collections.List1_Enumerator__Fuse_Effects_Effect.h>
#include <app/Uno.Collections.List1_Enumerator__Fuse_Elements_Element.h>
#include <app/Uno.Collections.List1_Enumerator__Fuse_Elements_ElementAtlas.h>
#include <app/Uno.Collections.List1_Enumerator__Fuse_Elements_ElementBatch.h>
#include <app/Uno.Collections.List1_Enumerator__Fuse_Elements_ElementBatchEntry.h>
#include <app/Uno.Collections.List1_Enumerator__Fuse_Elements_IElementBatchDrawable.h>
#include <app/Uno.Collections.List1_Enumerator__Fuse_Entities_Component.h>
#include <app/Uno.Collections.List1_Enumerator__Fuse_Entities_Entity.h>
#include <app/Uno.Collections.List1_Enumerator__Fuse_Entities_Entry.h>
#include <app/Uno.Collections.List1_Enumerator__Fuse_Input_Capturer.h>
#include <app/Uno.Collections.List1_Enumerator__Fuse_Input_FocusGainedHandler.h>
#include <app/Uno.Collections.List1_Enumerator__Fuse_Input_FocusLostHandler.h>
#include <app/Uno.Collections.List1_Enumerator__Fuse_Input_IsFocusableChangedHandler.h>
#include <app/Uno.Collections.List1_Enumerator__Fuse_Input_KeyPressedHandler.h>
#include <app/Uno.Collections.List1_Enumerator__Fuse_Input_KeyReleasedHandler.h>
#include <app/Uno.Collections.List1_Enumerator__Fuse_Input_PointerEnteredHandler.h>
#include <app/Uno.Collections.List1_Enumerator__Fuse_Input_PointerLeftHandler.h>
#include <app/Uno.Collections.List1_Enumerator__Fuse_Input_PointerMovedHandler.h>
#include <app/Uno.Collections.List1_Enumerator__Fuse_Input_PointerPressedHandler.h>
#include <app/Uno.Collections.List1_Enumerator__Fuse_Input_PointerReleasedHandler.h>
#include <app/Uno.Collections.List1_Enumerator__Fuse_Input_PointerWheelMovedHandler.h>
#include <app/Uno.Collections.List1_Enumerator__Fuse_Input_TextEnteredHandler.h>
#include <app/Uno.Collections.List1_Enumerator__Fuse_iOS_StatusBarConfig.h>
#include <app/Uno.Collections.List1_Enumerator__Fuse_IViewport.h>
#include <app/Uno.Collections.List1_Enumerator__Fuse_Layouts_Column.h>
#include <app/Uno.Collections.List1_Enumerator__Fuse_Layouts_Row.h>
#include <app/Uno.Collections.List1_Enumerator__Fuse_Navigation_INavigationAnimator.h>
#include <app/Uno.Collections.List1_Enumerator__Fuse_Navigation_IPageResourceBinding.h>
#include <app/Uno.Collections.List1_Enumerator__Fuse_Node.h>
#include <app/Uno.Collections.List1_Enumerator__Fuse_Physics_Body.h>
#include <app/Uno.Collections.List1_Enumerator__Fuse_Physics_IRule.h>
#include <app/Uno.Collections.List1_Enumerator__Fuse_Reactive_Case.h>
#include <app/Uno.Collections.List1_Enumerator__Fuse_Reactive_JavaScript.h>
#include <app/Uno.Collections.List1_Enumerator__Fuse_RenderTargetEntry.h>
#include <app/Uno.Collections.List1_Enumerator__Fuse_Resources_ImageSource.h>
#include <app/Uno.Collections.List1_Enumerator__Fuse_Resources_IMemoryResource.h>
#include <app/Uno.Collections.List1_Enumerator__Fuse_Resources_ISoftDisposable.h>
#include <app/Uno.Collections.List1_Enumerator__Fuse_Scripting_INameListener.h>
#include <app/Uno.Collections.List1_Enumerator__Fuse_Scripting_NativeMember.h>
#include <app/Uno.Collections.List1_Enumerator__Fuse_Stage.h>
#include <app/Uno.Collections.List1_Enumerator__Fuse_Style.h>
#include <app/Uno.Collections.List1_Enumerator__Fuse_StyleProperty.h>
#include <app/Uno.Collections.List1_Enumerator__Fuse_Transform.h>
#include <app/Uno.Collections.List1_Enumerator__Fuse_Triggers_Actions_TriggerAction.h>
#include <app/Uno.Collections.List1_Enumerator__Fuse_Triggers_State.h>
#include <app/Uno.Collections.List1_Enumerator__Fuse_UpdateListener.h>
#include <app/Uno.Collections.List1_Enumerator__int.h>
#include <app/Uno.Collections.List1_Enumerator__int4.h>
#include <app/Uno.Collections.List1_Enumerator__object.h>
#include <app/Uno.Collections.List1_Enumerator__Outracks_Simulator_Bytecode_TypeName.h>
#include <app/Uno.Collections.List1_Enumerator__Outracks_Simulator_Task_Outra-13953f66.h>
#include <app/Uno.Collections.List1_Enumerator__Outracks_Simulator_Task_Uno_N-e8fe7034.h>
#include <app/Uno.Collections.List1_Enumerator__string.h>
#include <app/Uno.Collections.List1_Enumerator__Uno_Action.h>
#include <app/Uno.Collections.List1_Enumerator__Uno_Collections_Dictionary_Ou-5084e8c5.h>
#include <app/Uno.Collections.List1_Enumerator__Uno_Content_Models_ModelDrawable.h>
#include <app/Uno.Collections.List1_Enumerator__Uno_Content_Models_ModelNode.h>
#include <app/Uno.Collections.List1_Enumerator__Uno_Content_Models_ModelParam-bbf1eed2.h>
#include <app/Uno.Collections.List1_Enumerator__Uno_Content_Models_ModelSkin.h>
#include <app/Uno.Collections.List1_Enumerator__Uno_Content_Models_SkinBone.h>
#include <app/Uno.Collections.List1_Enumerator__Uno_Content_Models_SkinDrawable.h>
#include <app/Uno.Collections.List1_Enumerator__Uno_Content_Models_VertexInfluence.h>
#include <app/Uno.Collections.List1_Enumerator__Uno_Data_Json_Value.h>
#include <app/Uno.Collections.List1_Enumerator__Uno_Data_Xml_XmlAttributeHandle.h>
#include <app/Uno.Collections.List1_Enumerator__Uno_Data_Xml_XmlLinkedNode.h>
#include <app/Uno.Collections.List1_Enumerator__Uno_Data_Xml_XmlNodeHandle.h>
#include <app/Uno.Collections.List1_Enumerator__Uno_Diagnostics_ProfileEvent.h>
#include <app/Uno.Collections.List1_Enumerator__Uno_EventHandler.h>
#include <app/Uno.Collections.List1_Enumerator__Uno_Exception.h>
#include <app/Uno.Collections.List1_Enumerator__Uno_Graphics_PolygonFace.h>
#include <app/Uno.Collections.List1_Enumerator__Uno_Net_Http_HttpMessageHandlerRequest.h>
#include <app/Uno.Collections.List1_Enumerator__Uno_Platform_Key.h>
#include <app/Uno.Collections.List1_Enumerator__Uno_Reflection_CppField.h>
#include <app/Uno.Collections.List1_Enumerator__Uno_Reflection_CppFunction.h>
#include <app/Uno.Collections.List1_Enumerator__Uno_Runtime_Implementation_In-270f5481.h>
#include <app/Uno.Collections.List1_Enumerator__Uno_UX_FileSource.h>
#include <app/Uno.Collections.List1_Enumerator__Uno_UX_IFactory.h>
#include <app/Uno.Collections.List1_Enumerator__Uno_UX_ITemplate.h>
#include <app/Uno.Collections.List1_Enumerator__Uno_UX_Resource.h>
#include <app/Uno.Content.Models.ModelDrawable.h>
#include <app/Uno.Content.Models.ModelNode.h>
#include <app/Uno.Content.Models.ModelParameter__float4x4.h>
#include <app/Uno.Content.Models.ModelSkin.h>
#include <app/Uno.Content.Models.SkinBone.h>
#include <app/Uno.Content.Models.SkinDrawable.h>
#include <app/Uno.Content.Models.VertexInfluence.h>
#include <app/Uno.Data.Json.Value.h>
#include <app/Uno.Data.Xml.XmlAttributeHandle.h>
#include <app/Uno.Data.Xml.XmlLinkedNode.h>
#include <app/Uno.Data.Xml.XmlNodeHandle.h>
#include <app/Uno.Diagnostics.ProfileEvent.h>
#include <app/Uno.EventHandler.h>
#include <app/Uno.Exception.h>
#include <app/Uno.Graphics.Framebuffer.h>
#include <app/Uno.Graphics.PolygonFace.h>
#include <app/Uno.Int.h>
#include <app/Uno.InvalidOperationException.h>
#include <app/Uno.Net.Http.HttpMessageHandlerRequest.h>
#include <app/Uno.Platform.Key.h>
#include <app/Uno.Reflection.CppField.h>
#include <app/Uno.Reflection.CppFunction.h>
#include <app/Uno.Runtime.Implementation.Internal.FormatStringToken.h>
#include <app/Uno.String.h>
#include <app/Uno.UX.FileSource.h>
#include <app/Uno.UX.IFactory.h>
#include <app/Uno.UX.ITemplate.h>
#include <app/Uno.UX.Resource.h>

namespace app {
namespace Uno {
namespace Collections {

// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Collections\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

List1_Enumerator__byte__uType* List1_Enumerator__byte__typeof()
{
    static ::uStaticStrong<List1_Enumerator__byte__uType*> type;
    if (type != NULL) return type;

    type = (List1_Enumerator__byte__uType*)::uAllocStructType(sizeof(List1_Enumerator__byte__uType), "Uno.Collections.List<byte>.Enumerator", sizeof(List1_Enumerator__byte), 3, 1, 0);

    type->__interface_2.__fp_Reset = (void(*)(void*))List1_Enumerator__byte__Uno_Collections_IEnumerator_Reset;
    type->__interface_0.__fp_get_Current = (::uByte(*)(void*))List1_Enumerator__byte__get_Current;
    type->__interface_1.__fp_Dispose = (void(*)(void*))List1_Enumerator__byte__Dispose;
    type->__interface_2.__fp_MoveNext = (bool(*)(void*))List1_Enumerator__byte__MoveNext;

    type->SetInterfaces(
        ::app::Uno::Collections::IEnumerator__byte__typeof(), offsetof(List1_Enumerator__byte__uType, __interface_0),
        ::app::Uno::IDisposable__typeof(), offsetof(List1_Enumerator__byte__uType, __interface_1),
        ::app::Uno::Collections::IEnumerator__typeof(), offsetof(List1_Enumerator__byte__uType, __interface_2));

    type->SetStrongRefs(
        "_source", offsetof(List1_Enumerator__byte, _source));

    type->SetFields(4,
        ::uNewField("_current", NULL, offsetof(List1_Enumerator__byte, _current), ::app::Uno::Byte__typeof()),
        ::uNewField("_iterator", NULL, offsetof(List1_Enumerator__byte, _iterator), ::app::Uno::Int__typeof()),
        ::uNewField("_source", NULL, offsetof(List1_Enumerator__byte, _source), ::app::Uno::Collections::List__byte__typeof()),
        ::uNewField("_version", NULL, offsetof(List1_Enumerator__byte, _version), ::app::Uno::Int__typeof()));

    type->SetFunctions(3,
        ::uNewFunctionVoid("Dispose", List1_Enumerator__byte__Dispose, 0, false),
        ::uNewFunction("get_Current", List1_Enumerator__byte__get_Current, 0, false, ::app::Uno::Byte__typeof()),
        ::uNewFunction("MoveNext", List1_Enumerator__byte__MoveNext, 0, false, ::app::Uno::Bool__typeof()));

    ::uRegisterType(type);
    return type;
}

void List1_Enumerator__byte___ObjInit(List1_Enumerator__byte* __this, ::app::Uno::Collections::List__byte* source)
{
    __this->_source = source;
    __this->_version = ::uPtr< ::app::Uno::Collections::List__byte*>(source)->_version;
    __this->_iterator = -1;
}

void List1_Enumerator__byte__Dispose(List1_Enumerator__byte* __this)
{
}

::uByte List1_Enumerator__byte__get_Current(List1_Enumerator__byte* __this)
{
    return __this->_current;
}

bool List1_Enumerator__byte__MoveNext(List1_Enumerator__byte* __this)
{
    if (::uPtr< ::app::Uno::Collections::List__byte*>(__this->_source)->_version != __this->_version)
    {
        U_THROW(::app::Uno::InvalidOperationException__New_4(NULL, ::uGetConstString("Collection was modified")));
    }

    __this->_iterator++;

    if (__this->_iterator < ::uPtr< ::app::Uno::Collections::List__byte*>(__this->_source)->_used)
    {
        __this->_current = ::uPtr< ::uArray*>(::uPtr< ::app::Uno::Collections::List__byte*>(__this->_source)->_data)->Item< ::uByte>(__this->_iterator);
        return true;
    }

    return false;
}

List1_Enumerator__byte List1_Enumerator__byte__New_1(::uStatic* __this, ::app::Uno::Collections::List__byte* source)
{
    List1_Enumerator__byte inst = ::uDefault< List1_Enumerator__byte>();
    inst._ObjInit(source);
    return inst;
}

void List1_Enumerator__byte__Uno_Collections_IEnumerator_Reset(List1_Enumerator__byte* __this)
{
    __this->_iterator = -1;
    __this->_current = 0;
    __this->_version = ::uPtr< ::app::Uno::Collections::List__byte*>(__this->_source)->_version;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Collections\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

List1_Enumerator__byte____uType* List1_Enumerator__byte____typeof()
{
    static ::uStaticStrong<List1_Enumerator__byte____uType*> type;
    if (type != NULL) return type;

    type = (List1_Enumerator__byte____uType*)::uAllocStructType(sizeof(List1_Enumerator__byte____uType), "Uno.Collections.List<byte[]>.Enumerator", sizeof(List1_Enumerator__byte__), 3, 2, 0);

    type->__interface_2.__fp_Reset = (void(*)(void*))List1_Enumerator__byte____Uno_Collections_IEnumerator_Reset;
    type->__interface_0.__fp_get_Current = (::uArray*(*)(void*))List1_Enumerator__byte____get_Current;
    type->__interface_1.__fp_Dispose = (void(*)(void*))List1_Enumerator__byte____Dispose;
    type->__interface_2.__fp_MoveNext = (bool(*)(void*))List1_Enumerator__byte____MoveNext;

    type->SetInterfaces(
        ::app::Uno::Collections::IEnumerator__byte____typeof(), offsetof(List1_Enumerator__byte____uType, __interface_0),
        ::app::Uno::IDisposable__typeof(), offsetof(List1_Enumerator__byte____uType, __interface_1),
        ::app::Uno::Collections::IEnumerator__typeof(), offsetof(List1_Enumerator__byte____uType, __interface_2));

    type->SetStrongRefs(
        "_current", offsetof(List1_Enumerator__byte__, _current),
        "_source", offsetof(List1_Enumerator__byte__, _source));

    type->SetFields(4,
        ::uNewField("_current", NULL, offsetof(List1_Enumerator__byte__, _current), ::uGetArrayType(::app::Uno::Byte__typeof())),
        ::uNewField("_iterator", NULL, offsetof(List1_Enumerator__byte__, _iterator), ::app::Uno::Int__typeof()),
        ::uNewField("_source", NULL, offsetof(List1_Enumerator__byte__, _source), ::app::Uno::Collections::List__byte____typeof()),
        ::uNewField("_version", NULL, offsetof(List1_Enumerator__byte__, _version), ::app::Uno::Int__typeof()));

    type->SetFunctions(3,
        ::uNewFunctionVoid("Dispose", List1_Enumerator__byte____Dispose, 0, false),
        ::uNewFunction("get_Current", List1_Enumerator__byte____get_Current, 0, false, ::uGetArrayType(::app::Uno::Byte__typeof())),
        ::uNewFunction("MoveNext", List1_Enumerator__byte____MoveNext, 0, false, ::app::Uno::Bool__typeof()));

    ::uRegisterType(type);
    return type;
}

void List1_Enumerator__byte_____ObjInit(List1_Enumerator__byte__* __this, ::app::Uno::Collections::List__byte__* source)
{
    __this->_source = source;
    __this->_version = ::uPtr< ::app::Uno::Collections::List__byte__*>(source)->_version;
    __this->_iterator = -1;
}

void List1_Enumerator__byte____Dispose(List1_Enumerator__byte__* __this)
{
}

::uArray* List1_Enumerator__byte____get_Current(List1_Enumerator__byte__* __this)
{
    return __this->_current;
}

bool List1_Enumerator__byte____MoveNext(List1_Enumerator__byte__* __this)
{
    if (::uPtr< ::app::Uno::Collections::List__byte__*>(__this->_source)->_version != __this->_version)
    {
        U_THROW(::app::Uno::InvalidOperationException__New_4(NULL, ::uGetConstString("Collection was modified")));
    }

    __this->_iterator++;

    if (__this->_iterator < ::uPtr< ::app::Uno::Collections::List__byte__*>(__this->_source)->_used)
    {
        __this->_current = ::uPtr< ::uArray*>(::uPtr< ::app::Uno::Collections::List__byte__*>(__this->_source)->_data)->Item< ::uArray*>(__this->_iterator);
        return true;
    }

    return false;
}

List1_Enumerator__byte__ List1_Enumerator__byte____New_1(::uStatic* __this, ::app::Uno::Collections::List__byte__* source)
{
    List1_Enumerator__byte__ inst = ::uDefault< List1_Enumerator__byte__>();
    inst._ObjInit(source);
    return inst;
}

void List1_Enumerator__byte____Uno_Collections_IEnumerator_Reset(List1_Enumerator__byte__* __this)
{
    __this->_iterator = -1;
    __this->_current = NULL;
    __this->_version = ::uPtr< ::app::Uno::Collections::List__byte__*>(__this->_source)->_version;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Collections\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

List1_Enumerator__char__uType* List1_Enumerator__char__typeof()
{
    static ::uStaticStrong<List1_Enumerator__char__uType*> type;
    if (type != NULL) return type;

    type = (List1_Enumerator__char__uType*)::uAllocStructType(sizeof(List1_Enumerator__char__uType), "Uno.Collections.List<char>.Enumerator", sizeof(List1_Enumerator__char), 3, 1, 0);

    type->__interface_2.__fp_Reset = (void(*)(void*))List1_Enumerator__char__Uno_Collections_IEnumerator_Reset;
    type->__interface_0.__fp_get_Current = (::uChar(*)(void*))List1_Enumerator__char__get_Current;
    type->__interface_1.__fp_Dispose = (void(*)(void*))List1_Enumerator__char__Dispose;
    type->__interface_2.__fp_MoveNext = (bool(*)(void*))List1_Enumerator__char__MoveNext;

    type->SetInterfaces(
        ::app::Uno::Collections::IEnumerator__char__typeof(), offsetof(List1_Enumerator__char__uType, __interface_0),
        ::app::Uno::IDisposable__typeof(), offsetof(List1_Enumerator__char__uType, __interface_1),
        ::app::Uno::Collections::IEnumerator__typeof(), offsetof(List1_Enumerator__char__uType, __interface_2));

    type->SetStrongRefs(
        "_source", offsetof(List1_Enumerator__char, _source));

    type->SetFields(4,
        ::uNewField("_current", NULL, offsetof(List1_Enumerator__char, _current), ::app::Uno::Char__typeof()),
        ::uNewField("_iterator", NULL, offsetof(List1_Enumerator__char, _iterator), ::app::Uno::Int__typeof()),
        ::uNewField("_source", NULL, offsetof(List1_Enumerator__char, _source), ::app::Uno::Collections::List__char__typeof()),
        ::uNewField("_version", NULL, offsetof(List1_Enumerator__char, _version), ::app::Uno::Int__typeof()));

    type->SetFunctions(3,
        ::uNewFunctionVoid("Dispose", List1_Enumerator__char__Dispose, 0, false),
        ::uNewFunction("get_Current", List1_Enumerator__char__get_Current, 0, false, ::app::Uno::Char__typeof()),
        ::uNewFunction("MoveNext", List1_Enumerator__char__MoveNext, 0, false, ::app::Uno::Bool__typeof()));

    ::uRegisterType(type);
    return type;
}

void List1_Enumerator__char___ObjInit(List1_Enumerator__char* __this, ::app::Uno::Collections::List__char* source)
{
    __this->_source = source;
    __this->_version = ::uPtr< ::app::Uno::Collections::List__char*>(source)->_version;
    __this->_iterator = -1;
}

void List1_Enumerator__char__Dispose(List1_Enumerator__char* __this)
{
}

::uChar List1_Enumerator__char__get_Current(List1_Enumerator__char* __this)
{
    return __this->_current;
}

bool List1_Enumerator__char__MoveNext(List1_Enumerator__char* __this)
{
    if (::uPtr< ::app::Uno::Collections::List__char*>(__this->_source)->_version != __this->_version)
    {
        U_THROW(::app::Uno::InvalidOperationException__New_4(NULL, ::uGetConstString("Collection was modified")));
    }

    __this->_iterator++;

    if (__this->_iterator < ::uPtr< ::app::Uno::Collections::List__char*>(__this->_source)->_used)
    {
        __this->_current = ::uPtr< ::uArray*>(::uPtr< ::app::Uno::Collections::List__char*>(__this->_source)->_data)->Item< ::uChar>(__this->_iterator);
        return true;
    }

    return false;
}

List1_Enumerator__char List1_Enumerator__char__New_1(::uStatic* __this, ::app::Uno::Collections::List__char* source)
{
    List1_Enumerator__char inst = ::uDefault< List1_Enumerator__char>();
    inst._ObjInit(source);
    return inst;
}

void List1_Enumerator__char__Uno_Collections_IEnumerator_Reset(List1_Enumerator__char* __this)
{
    __this->_iterator = -1;
    __this->_current = 0;
    __this->_version = ::uPtr< ::app::Uno::Collections::List__char*>(__this->_source)->_version;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Collections\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

List1_Enumerator__Experimental_Cache_DiskCacheEntry__uType* List1_Enumerator__Experimental_Cache_DiskCacheEntry__typeof()
{
    static ::uStaticStrong<List1_Enumerator__Experimental_Cache_DiskCacheEntry__uType*> type;
    if (type != NULL) return type;

    type = (List1_Enumerator__Experimental_Cache_DiskCacheEntry__uType*)::uAllocStructType(sizeof(List1_Enumerator__Experimental_Cache_DiskCacheEntry__uType), "Uno.Collections.List<Experimental.Cache.DiskCacheEntry>.Enumerator", sizeof(List1_Enumerator__Experimental_Cache_DiskCacheEntry), 3, 2, 0);

    type->__interface_2.__fp_Reset = (void(*)(void*))List1_Enumerator__Experimental_Cache_DiskCacheEntry__Uno_Collections_IEnumerator_Reset;
    type->__interface_0.__fp_get_Current = (::app::Experimental::Cache::DiskCacheEntry*(*)(void*))List1_Enumerator__Experimental_Cache_DiskCacheEntry__get_Current;
    type->__interface_1.__fp_Dispose = (void(*)(void*))List1_Enumerator__Experimental_Cache_DiskCacheEntry__Dispose;
    type->__interface_2.__fp_MoveNext = (bool(*)(void*))List1_Enumerator__Experimental_Cache_DiskCacheEntry__MoveNext;

    type->SetInterfaces(
        ::app::Uno::Collections::IEnumerator__Experimental_Cache_DiskCacheEntry__typeof(), offsetof(List1_Enumerator__Experimental_Cache_DiskCacheEntry__uType, __interface_0),
        ::app::Uno::IDisposable__typeof(), offsetof(List1_Enumerator__Experimental_Cache_DiskCacheEntry__uType, __interface_1),
        ::app::Uno::Collections::IEnumerator__typeof(), offsetof(List1_Enumerator__Experimental_Cache_DiskCacheEntry__uType, __interface_2));

    type->SetStrongRefs(
        "_current", offsetof(List1_Enumerator__Experimental_Cache_DiskCacheEntry, _current),
        "_source", offsetof(List1_Enumerator__Experimental_Cache_DiskCacheEntry, _source));

    type->SetFields(4,
        ::uNewField("_current", NULL, offsetof(List1_Enumerator__Experimental_Cache_DiskCacheEntry, _current), ::app::Experimental::Cache::DiskCacheEntry__typeof()),
        ::uNewField("_iterator", NULL, offsetof(List1_Enumerator__Experimental_Cache_DiskCacheEntry, _iterator), ::app::Uno::Int__typeof()),
        ::uNewField("_source", NULL, offsetof(List1_Enumerator__Experimental_Cache_DiskCacheEntry, _source), ::app::Uno::Collections::List__Experimental_Cache_DiskCacheEntry__typeof()),
        ::uNewField("_version", NULL, offsetof(List1_Enumerator__Experimental_Cache_DiskCacheEntry, _version), ::app::Uno::Int__typeof()));

    type->SetFunctions(3,
        ::uNewFunctionVoid("Dispose", List1_Enumerator__Experimental_Cache_DiskCacheEntry__Dispose, 0, false),
        ::uNewFunction("get_Current", List1_Enumerator__Experimental_Cache_DiskCacheEntry__get_Current, 0, false, ::app::Experimental::Cache::DiskCacheEntry__typeof()),
        ::uNewFunction("MoveNext", List1_Enumerator__Experimental_Cache_DiskCacheEntry__MoveNext, 0, false, ::app::Uno::Bool__typeof()));

    ::uRegisterType(type);
    return type;
}

void List1_Enumerator__Experimental_Cache_DiskCacheEntry___ObjInit(List1_Enumerator__Experimental_Cache_DiskCacheEntry* __this, ::app::Uno::Collections::List__Experimental_Cache_DiskCacheEntry* source)
{
    __this->_source = source;
    __this->_version = ::uPtr< ::app::Uno::Collections::List__Experimental_Cache_DiskCacheEntry*>(source)->_version;
    __this->_iterator = -1;
}

void List1_Enumerator__Experimental_Cache_DiskCacheEntry__Dispose(List1_Enumerator__Experimental_Cache_DiskCacheEntry* __this)
{
}

::app::Experimental::Cache::DiskCacheEntry* List1_Enumerator__Experimental_Cache_DiskCacheEntry__get_Current(List1_Enumerator__Experimental_Cache_DiskCacheEntry* __this)
{
    return __this->_current;
}

bool List1_Enumerator__Experimental_Cache_DiskCacheEntry__MoveNext(List1_Enumerator__Experimental_Cache_DiskCacheEntry* __this)
{
    if (::uPtr< ::app::Uno::Collections::List__Experimental_Cache_DiskCacheEntry*>(__this->_source)->_version != __this->_version)
    {
        U_THROW(::app::Uno::InvalidOperationException__New_4(NULL, ::uGetConstString("Collection was modified")));
    }

    __this->_iterator++;

    if (__this->_iterator < ::uPtr< ::app::Uno::Collections::List__Experimental_Cache_DiskCacheEntry*>(__this->_source)->_used)
    {
        __this->_current = ::uPtr< ::uArray*>(::uPtr< ::app::Uno::Collections::List__Experimental_Cache_DiskCacheEntry*>(__this->_source)->_data)->Item< ::app::Experimental::Cache::DiskCacheEntry*>(__this->_iterator);
        return true;
    }

    return false;
}

List1_Enumerator__Experimental_Cache_DiskCacheEntry List1_Enumerator__Experimental_Cache_DiskCacheEntry__New_1(::uStatic* __this, ::app::Uno::Collections::List__Experimental_Cache_DiskCacheEntry* source)
{
    List1_Enumerator__Experimental_Cache_DiskCacheEntry inst = ::uDefault< List1_Enumerator__Experimental_Cache_DiskCacheEntry>();
    inst._ObjInit(source);
    return inst;
}

void List1_Enumerator__Experimental_Cache_DiskCacheEntry__Uno_Collections_IEnumerator_Reset(List1_Enumerator__Experimental_Cache_DiskCacheEntry* __this)
{
    __this->_iterator = -1;
    __this->_current = NULL;
    __this->_version = ::uPtr< ::app::Uno::Collections::List__Experimental_Cache_DiskCacheEntry*>(__this->_source)->_version;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Collections\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

List1_Enumerator__float2__uType* List1_Enumerator__float2__typeof()
{
    static ::uStaticStrong<List1_Enumerator__float2__uType*> type;
    if (type != NULL) return type;

    type = (List1_Enumerator__float2__uType*)::uAllocStructType(sizeof(List1_Enumerator__float2__uType), "Uno.Collections.List<float2>.Enumerator", sizeof(List1_Enumerator__float2), 3, 1, 0);

    type->__interface_2.__fp_Reset = (void(*)(void*))List1_Enumerator__float2__Uno_Collections_IEnumerator_Reset;
    type->__interface_0.__fp_get_Current = (::app::Uno::Float2(*)(void*))List1_Enumerator__float2__get_Current;
    type->__interface_1.__fp_Dispose = (void(*)(void*))List1_Enumerator__float2__Dispose;
    type->__interface_2.__fp_MoveNext = (bool(*)(void*))List1_Enumerator__float2__MoveNext;

    type->SetInterfaces(
        ::app::Uno::Collections::IEnumerator__float2__typeof(), offsetof(List1_Enumerator__float2__uType, __interface_0),
        ::app::Uno::IDisposable__typeof(), offsetof(List1_Enumerator__float2__uType, __interface_1),
        ::app::Uno::Collections::IEnumerator__typeof(), offsetof(List1_Enumerator__float2__uType, __interface_2));

    type->SetStrongRefs(
        "_source", offsetof(List1_Enumerator__float2, _source));

    type->SetFields(4,
        ::uNewField("_current", NULL, offsetof(List1_Enumerator__float2, _current), ::app::Uno::Float2__typeof()),
        ::uNewField("_iterator", NULL, offsetof(List1_Enumerator__float2, _iterator), ::app::Uno::Int__typeof()),
        ::uNewField("_source", NULL, offsetof(List1_Enumerator__float2, _source), ::app::Uno::Collections::List__float2__typeof()),
        ::uNewField("_version", NULL, offsetof(List1_Enumerator__float2, _version), ::app::Uno::Int__typeof()));

    type->SetFunctions(3,
        ::uNewFunctionVoid("Dispose", List1_Enumerator__float2__Dispose, 0, false),
        ::uNewFunction("get_Current", List1_Enumerator__float2__get_Current, 0, false, ::app::Uno::Float2__typeof()),
        ::uNewFunction("MoveNext", List1_Enumerator__float2__MoveNext, 0, false, ::app::Uno::Bool__typeof()));

    ::uRegisterType(type);
    return type;
}

void List1_Enumerator__float2___ObjInit(List1_Enumerator__float2* __this, ::app::Uno::Collections::List__float2* source)
{
    __this->_source = source;
    __this->_version = ::uPtr< ::app::Uno::Collections::List__float2*>(source)->_version;
    __this->_iterator = -1;
}

void List1_Enumerator__float2__Dispose(List1_Enumerator__float2* __this)
{
}

::app::Uno::Float2 List1_Enumerator__float2__get_Current(List1_Enumerator__float2* __this)
{
    return __this->_current;
}

bool List1_Enumerator__float2__MoveNext(List1_Enumerator__float2* __this)
{
    if (::uPtr< ::app::Uno::Collections::List__float2*>(__this->_source)->_version != __this->_version)
    {
        U_THROW(::app::Uno::InvalidOperationException__New_4(NULL, ::uGetConstString("Collection was modified")));
    }

    __this->_iterator++;

    if (__this->_iterator < ::uPtr< ::app::Uno::Collections::List__float2*>(__this->_source)->_used)
    {
        __this->_current = ::uPtr< ::uArray*>(::uPtr< ::app::Uno::Collections::List__float2*>(__this->_source)->_data)->Item< ::app::Uno::Float2>(__this->_iterator);
        return true;
    }

    return false;
}

List1_Enumerator__float2 List1_Enumerator__float2__New_1(::uStatic* __this, ::app::Uno::Collections::List__float2* source)
{
    List1_Enumerator__float2 inst = ::uDefault< List1_Enumerator__float2>();
    inst._ObjInit(source);
    return inst;
}

void List1_Enumerator__float2__Uno_Collections_IEnumerator_Reset(List1_Enumerator__float2* __this)
{
    __this->_iterator = -1;
    __this->_current = ::uDefault< ::app::Uno::Float2>();
    __this->_version = ::uPtr< ::app::Uno::Collections::List__float2*>(__this->_source)->_version;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Collections\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

List1_Enumerator__float3__uType* List1_Enumerator__float3__typeof()
{
    static ::uStaticStrong<List1_Enumerator__float3__uType*> type;
    if (type != NULL) return type;

    type = (List1_Enumerator__float3__uType*)::uAllocStructType(sizeof(List1_Enumerator__float3__uType), "Uno.Collections.List<float3>.Enumerator", sizeof(List1_Enumerator__float3), 3, 1, 0);

    type->__interface_2.__fp_Reset = (void(*)(void*))List1_Enumerator__float3__Uno_Collections_IEnumerator_Reset;
    type->__interface_0.__fp_get_Current = (::app::Uno::Float3(*)(void*))List1_Enumerator__float3__get_Current;
    type->__interface_1.__fp_Dispose = (void(*)(void*))List1_Enumerator__float3__Dispose;
    type->__interface_2.__fp_MoveNext = (bool(*)(void*))List1_Enumerator__float3__MoveNext;

    type->SetInterfaces(
        ::app::Uno::Collections::IEnumerator__float3__typeof(), offsetof(List1_Enumerator__float3__uType, __interface_0),
        ::app::Uno::IDisposable__typeof(), offsetof(List1_Enumerator__float3__uType, __interface_1),
        ::app::Uno::Collections::IEnumerator__typeof(), offsetof(List1_Enumerator__float3__uType, __interface_2));

    type->SetStrongRefs(
        "_source", offsetof(List1_Enumerator__float3, _source));

    type->SetFields(4,
        ::uNewField("_current", NULL, offsetof(List1_Enumerator__float3, _current), ::app::Uno::Float3__typeof()),
        ::uNewField("_iterator", NULL, offsetof(List1_Enumerator__float3, _iterator), ::app::Uno::Int__typeof()),
        ::uNewField("_source", NULL, offsetof(List1_Enumerator__float3, _source), ::app::Uno::Collections::List__float3__typeof()),
        ::uNewField("_version", NULL, offsetof(List1_Enumerator__float3, _version), ::app::Uno::Int__typeof()));

    type->SetFunctions(3,
        ::uNewFunctionVoid("Dispose", List1_Enumerator__float3__Dispose, 0, false),
        ::uNewFunction("get_Current", List1_Enumerator__float3__get_Current, 0, false, ::app::Uno::Float3__typeof()),
        ::uNewFunction("MoveNext", List1_Enumerator__float3__MoveNext, 0, false, ::app::Uno::Bool__typeof()));

    ::uRegisterType(type);
    return type;
}

void List1_Enumerator__float3___ObjInit(List1_Enumerator__float3* __this, ::app::Uno::Collections::List__float3* source)
{
    __this->_source = source;
    __this->_version = ::uPtr< ::app::Uno::Collections::List__float3*>(source)->_version;
    __this->_iterator = -1;
}

void List1_Enumerator__float3__Dispose(List1_Enumerator__float3* __this)
{
}

::app::Uno::Float3 List1_Enumerator__float3__get_Current(List1_Enumerator__float3* __this)
{
    return __this->_current;
}

bool List1_Enumerator__float3__MoveNext(List1_Enumerator__float3* __this)
{
    if (::uPtr< ::app::Uno::Collections::List__float3*>(__this->_source)->_version != __this->_version)
    {
        U_THROW(::app::Uno::InvalidOperationException__New_4(NULL, ::uGetConstString("Collection was modified")));
    }

    __this->_iterator++;

    if (__this->_iterator < ::uPtr< ::app::Uno::Collections::List__float3*>(__this->_source)->_used)
    {
        __this->_current = ::uPtr< ::uArray*>(::uPtr< ::app::Uno::Collections::List__float3*>(__this->_source)->_data)->Item< ::app::Uno::Float3>(__this->_iterator);
        return true;
    }

    return false;
}

List1_Enumerator__float3 List1_Enumerator__float3__New_1(::uStatic* __this, ::app::Uno::Collections::List__float3* source)
{
    List1_Enumerator__float3 inst = ::uDefault< List1_Enumerator__float3>();
    inst._ObjInit(source);
    return inst;
}

void List1_Enumerator__float3__Uno_Collections_IEnumerator_Reset(List1_Enumerator__float3* __this)
{
    __this->_iterator = -1;
    __this->_current = ::uDefault< ::app::Uno::Float3>();
    __this->_version = ::uPtr< ::app::Uno::Collections::List__float3*>(__this->_source)->_version;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Collections\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

List1_Enumerator__float4__uType* List1_Enumerator__float4__typeof()
{
    static ::uStaticStrong<List1_Enumerator__float4__uType*> type;
    if (type != NULL) return type;

    type = (List1_Enumerator__float4__uType*)::uAllocStructType(sizeof(List1_Enumerator__float4__uType), "Uno.Collections.List<float4>.Enumerator", sizeof(List1_Enumerator__float4), 3, 1, 0);

    type->__interface_2.__fp_Reset = (void(*)(void*))List1_Enumerator__float4__Uno_Collections_IEnumerator_Reset;
    type->__interface_0.__fp_get_Current = (::app::Uno::Float4(*)(void*))List1_Enumerator__float4__get_Current;
    type->__interface_1.__fp_Dispose = (void(*)(void*))List1_Enumerator__float4__Dispose;
    type->__interface_2.__fp_MoveNext = (bool(*)(void*))List1_Enumerator__float4__MoveNext;

    type->SetInterfaces(
        ::app::Uno::Collections::IEnumerator__float4__typeof(), offsetof(List1_Enumerator__float4__uType, __interface_0),
        ::app::Uno::IDisposable__typeof(), offsetof(List1_Enumerator__float4__uType, __interface_1),
        ::app::Uno::Collections::IEnumerator__typeof(), offsetof(List1_Enumerator__float4__uType, __interface_2));

    type->SetStrongRefs(
        "_source", offsetof(List1_Enumerator__float4, _source));

    type->SetFields(4,
        ::uNewField("_current", NULL, offsetof(List1_Enumerator__float4, _current), ::app::Uno::Float4__typeof()),
        ::uNewField("_iterator", NULL, offsetof(List1_Enumerator__float4, _iterator), ::app::Uno::Int__typeof()),
        ::uNewField("_source", NULL, offsetof(List1_Enumerator__float4, _source), ::app::Uno::Collections::List__float4__typeof()),
        ::uNewField("_version", NULL, offsetof(List1_Enumerator__float4, _version), ::app::Uno::Int__typeof()));

    type->SetFunctions(3,
        ::uNewFunctionVoid("Dispose", List1_Enumerator__float4__Dispose, 0, false),
        ::uNewFunction("get_Current", List1_Enumerator__float4__get_Current, 0, false, ::app::Uno::Float4__typeof()),
        ::uNewFunction("MoveNext", List1_Enumerator__float4__MoveNext, 0, false, ::app::Uno::Bool__typeof()));

    ::uRegisterType(type);
    return type;
}

void List1_Enumerator__float4___ObjInit(List1_Enumerator__float4* __this, ::app::Uno::Collections::List__float4* source)
{
    __this->_source = source;
    __this->_version = ::uPtr< ::app::Uno::Collections::List__float4*>(source)->_version;
    __this->_iterator = -1;
}

void List1_Enumerator__float4__Dispose(List1_Enumerator__float4* __this)
{
}

::app::Uno::Float4 List1_Enumerator__float4__get_Current(List1_Enumerator__float4* __this)
{
    return __this->_current;
}

bool List1_Enumerator__float4__MoveNext(List1_Enumerator__float4* __this)
{
    if (::uPtr< ::app::Uno::Collections::List__float4*>(__this->_source)->_version != __this->_version)
    {
        U_THROW(::app::Uno::InvalidOperationException__New_4(NULL, ::uGetConstString("Collection was modified")));
    }

    __this->_iterator++;

    if (__this->_iterator < ::uPtr< ::app::Uno::Collections::List__float4*>(__this->_source)->_used)
    {
        __this->_current = ::uPtr< ::uArray*>(::uPtr< ::app::Uno::Collections::List__float4*>(__this->_source)->_data)->Item< ::app::Uno::Float4>(__this->_iterator);
        return true;
    }

    return false;
}

List1_Enumerator__float4 List1_Enumerator__float4__New_1(::uStatic* __this, ::app::Uno::Collections::List__float4* source)
{
    List1_Enumerator__float4 inst = ::uDefault< List1_Enumerator__float4>();
    inst._ObjInit(source);
    return inst;
}

void List1_Enumerator__float4__Uno_Collections_IEnumerator_Reset(List1_Enumerator__float4* __this)
{
    __this->_iterator = -1;
    __this->_current = ::uDefault< ::app::Uno::Float4>();
    __this->_version = ::uPtr< ::app::Uno::Collections::List__float4*>(__this->_source)->_version;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Collections\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

List1_Enumerator__framebuffer__uType* List1_Enumerator__framebuffer__typeof()
{
    static ::uStaticStrong<List1_Enumerator__framebuffer__uType*> type;
    if (type != NULL) return type;

    type = (List1_Enumerator__framebuffer__uType*)::uAllocStructType(sizeof(List1_Enumerator__framebuffer__uType), "Uno.Collections.List<framebuffer>.Enumerator", sizeof(List1_Enumerator__framebuffer), 3, 2, 0);

    type->__interface_2.__fp_Reset = (void(*)(void*))List1_Enumerator__framebuffer__Uno_Collections_IEnumerator_Reset;
    type->__interface_0.__fp_get_Current = (::app::Uno::Graphics::Framebuffer*(*)(void*))List1_Enumerator__framebuffer__get_Current;
    type->__interface_1.__fp_Dispose = (void(*)(void*))List1_Enumerator__framebuffer__Dispose;
    type->__interface_2.__fp_MoveNext = (bool(*)(void*))List1_Enumerator__framebuffer__MoveNext;

    type->SetInterfaces(
        ::app::Uno::Collections::IEnumerator__framebuffer__typeof(), offsetof(List1_Enumerator__framebuffer__uType, __interface_0),
        ::app::Uno::IDisposable__typeof(), offsetof(List1_Enumerator__framebuffer__uType, __interface_1),
        ::app::Uno::Collections::IEnumerator__typeof(), offsetof(List1_Enumerator__framebuffer__uType, __interface_2));

    type->SetStrongRefs(
        "_current", offsetof(List1_Enumerator__framebuffer, _current),
        "_source", offsetof(List1_Enumerator__framebuffer, _source));

    type->SetFields(4,
        ::uNewField("_current", NULL, offsetof(List1_Enumerator__framebuffer, _current), ::app::Uno::Graphics::Framebuffer__typeof()),
        ::uNewField("_iterator", NULL, offsetof(List1_Enumerator__framebuffer, _iterator), ::app::Uno::Int__typeof()),
        ::uNewField("_source", NULL, offsetof(List1_Enumerator__framebuffer, _source), ::app::Uno::Collections::List__framebuffer__typeof()),
        ::uNewField("_version", NULL, offsetof(List1_Enumerator__framebuffer, _version), ::app::Uno::Int__typeof()));

    type->SetFunctions(3,
        ::uNewFunctionVoid("Dispose", List1_Enumerator__framebuffer__Dispose, 0, false),
        ::uNewFunction("get_Current", List1_Enumerator__framebuffer__get_Current, 0, false, ::app::Uno::Graphics::Framebuffer__typeof()),
        ::uNewFunction("MoveNext", List1_Enumerator__framebuffer__MoveNext, 0, false, ::app::Uno::Bool__typeof()));

    ::uRegisterType(type);
    return type;
}

void List1_Enumerator__framebuffer___ObjInit(List1_Enumerator__framebuffer* __this, ::app::Uno::Collections::List__framebuffer* source)
{
    __this->_source = source;
    __this->_version = ::uPtr< ::app::Uno::Collections::List__framebuffer*>(source)->_version;
    __this->_iterator = -1;
}

void List1_Enumerator__framebuffer__Dispose(List1_Enumerator__framebuffer* __this)
{
}

::app::Uno::Graphics::Framebuffer* List1_Enumerator__framebuffer__get_Current(List1_Enumerator__framebuffer* __this)
{
    return __this->_current;
}

bool List1_Enumerator__framebuffer__MoveNext(List1_Enumerator__framebuffer* __this)
{
    if (::uPtr< ::app::Uno::Collections::List__framebuffer*>(__this->_source)->_version != __this->_version)
    {
        U_THROW(::app::Uno::InvalidOperationException__New_4(NULL, ::uGetConstString("Collection was modified")));
    }

    __this->_iterator++;

    if (__this->_iterator < ::uPtr< ::app::Uno::Collections::List__framebuffer*>(__this->_source)->_used)
    {
        __this->_current = ::uPtr< ::uArray*>(::uPtr< ::app::Uno::Collections::List__framebuffer*>(__this->_source)->_data)->Item< ::app::Uno::Graphics::Framebuffer*>(__this->_iterator);
        return true;
    }

    return false;
}

List1_Enumerator__framebuffer List1_Enumerator__framebuffer__New_1(::uStatic* __this, ::app::Uno::Collections::List__framebuffer* source)
{
    List1_Enumerator__framebuffer inst = ::uDefault< List1_Enumerator__framebuffer>();
    inst._ObjInit(source);
    return inst;
}

void List1_Enumerator__framebuffer__Uno_Collections_IEnumerator_Reset(List1_Enumerator__framebuffer* __this)
{
    __this->_iterator = -1;
    __this->_current = NULL;
    __this->_version = ::uPtr< ::app::Uno::Collections::List__framebuffer*>(__this->_source)->_version;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Collections\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

List1_Enumerator__Fuse_Animations_Animator__uType* List1_Enumerator__Fuse_Animations_Animator__typeof()
{
    static ::uStaticStrong<List1_Enumerator__Fuse_Animations_Animator__uType*> type;
    if (type != NULL) return type;

    type = (List1_Enumerator__Fuse_Animations_Animator__uType*)::uAllocStructType(sizeof(List1_Enumerator__Fuse_Animations_Animator__uType), "Uno.Collections.List<Fuse.Animations.Animator>.Enumerator", sizeof(List1_Enumerator__Fuse_Animations_Animator), 3, 2, 0);

    type->__interface_2.__fp_Reset = (void(*)(void*))List1_Enumerator__Fuse_Animations_Animator__Uno_Collections_IEnumerator_Reset;
    type->__interface_0.__fp_get_Current = (::app::Fuse::Animations::Animator*(*)(void*))List1_Enumerator__Fuse_Animations_Animator__get_Current;
    type->__interface_1.__fp_Dispose = (void(*)(void*))List1_Enumerator__Fuse_Animations_Animator__Dispose;
    type->__interface_2.__fp_MoveNext = (bool(*)(void*))List1_Enumerator__Fuse_Animations_Animator__MoveNext;

    type->SetInterfaces(
        ::app::Uno::Collections::IEnumerator__Fuse_Animations_Animator__typeof(), offsetof(List1_Enumerator__Fuse_Animations_Animator__uType, __interface_0),
        ::app::Uno::IDisposable__typeof(), offsetof(List1_Enumerator__Fuse_Animations_Animator__uType, __interface_1),
        ::app::Uno::Collections::IEnumerator__typeof(), offsetof(List1_Enumerator__Fuse_Animations_Animator__uType, __interface_2));

    type->SetStrongRefs(
        "_current", offsetof(List1_Enumerator__Fuse_Animations_Animator, _current),
        "_source", offsetof(List1_Enumerator__Fuse_Animations_Animator, _source));

    type->SetFields(4,
        ::uNewField("_current", NULL, offsetof(List1_Enumerator__Fuse_Animations_Animator, _current), ::app::Fuse::Animations::Animator__typeof()),
        ::uNewField("_iterator", NULL, offsetof(List1_Enumerator__Fuse_Animations_Animator, _iterator), ::app::Uno::Int__typeof()),
        ::uNewField("_source", NULL, offsetof(List1_Enumerator__Fuse_Animations_Animator, _source), ::app::Uno::Collections::List__Fuse_Animations_Animator__typeof()),
        ::uNewField("_version", NULL, offsetof(List1_Enumerator__Fuse_Animations_Animator, _version), ::app::Uno::Int__typeof()));

    type->SetFunctions(3,
        ::uNewFunctionVoid("Dispose", List1_Enumerator__Fuse_Animations_Animator__Dispose, 0, false),
        ::uNewFunction("get_Current", List1_Enumerator__Fuse_Animations_Animator__get_Current, 0, false, ::app::Fuse::Animations::Animator__typeof()),
        ::uNewFunction("MoveNext", List1_Enumerator__Fuse_Animations_Animator__MoveNext, 0, false, ::app::Uno::Bool__typeof()));

    ::uRegisterType(type);
    return type;
}

void List1_Enumerator__Fuse_Animations_Animator___ObjInit(List1_Enumerator__Fuse_Animations_Animator* __this, ::app::Uno::Collections::List__Fuse_Animations_Animator* source)
{
    __this->_source = source;
    __this->_version = ::uPtr< ::app::Uno::Collections::List__Fuse_Animations_Animator*>(source)->_version;
    __this->_iterator = -1;
}

void List1_Enumerator__Fuse_Animations_Animator__Dispose(List1_Enumerator__Fuse_Animations_Animator* __this)
{
}

::app::Fuse::Animations::Animator* List1_Enumerator__Fuse_Animations_Animator__get_Current(List1_Enumerator__Fuse_Animations_Animator* __this)
{
    return __this->_current;
}

bool List1_Enumerator__Fuse_Animations_Animator__MoveNext(List1_Enumerator__Fuse_Animations_Animator* __this)
{
    if (::uPtr< ::app::Uno::Collections::List__Fuse_Animations_Animator*>(__this->_source)->_version != __this->_version)
    {
        U_THROW(::app::Uno::InvalidOperationException__New_4(NULL, ::uGetConstString("Collection was modified")));
    }

    __this->_iterator++;

    if (__this->_iterator < ::uPtr< ::app::Uno::Collections::List__Fuse_Animations_Animator*>(__this->_source)->_used)
    {
        __this->_current = ::uPtr< ::uArray*>(::uPtr< ::app::Uno::Collections::List__Fuse_Animations_Animator*>(__this->_source)->_data)->Item< ::app::Fuse::Animations::Animator*>(__this->_iterator);
        return true;
    }

    return false;
}

List1_Enumerator__Fuse_Animations_Animator List1_Enumerator__Fuse_Animations_Animator__New_1(::uStatic* __this, ::app::Uno::Collections::List__Fuse_Animations_Animator* source)
{
    List1_Enumerator__Fuse_Animations_Animator inst = ::uDefault< List1_Enumerator__Fuse_Animations_Animator>();
    inst._ObjInit(source);
    return inst;
}

void List1_Enumerator__Fuse_Animations_Animator__Uno_Collections_IEnumerator_Reset(List1_Enumerator__Fuse_Animations_Animator* __this)
{
    __this->_iterator = -1;
    __this->_current = NULL;
    __this->_version = ::uPtr< ::app::Uno::Collections::List__Fuse_Animations_Animator*>(__this->_source)->_version;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Collections\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

List1_Enumerator__Fuse_Animations_IMixerMaster__uType* List1_Enumerator__Fuse_Animations_IMixerMaster__typeof()
{
    static ::uStaticStrong<List1_Enumerator__Fuse_Animations_IMixerMaster__uType*> type;
    if (type != NULL) return type;

    type = (List1_Enumerator__Fuse_Animations_IMixerMaster__uType*)::uAllocStructType(sizeof(List1_Enumerator__Fuse_Animations_IMixerMaster__uType), "Uno.Collections.List<Fuse.Animations.IMixerMaster>.Enumerator", sizeof(List1_Enumerator__Fuse_Animations_IMixerMaster), 3, 2, 0);

    type->__interface_2.__fp_Reset = (void(*)(void*))List1_Enumerator__Fuse_Animations_IMixerMaster__Uno_Collections_IEnumerator_Reset;
    type->__interface_0.__fp_get_Current = (::uObject*(*)(void*))List1_Enumerator__Fuse_Animations_IMixerMaster__get_Current;
    type->__interface_1.__fp_Dispose = (void(*)(void*))List1_Enumerator__Fuse_Animations_IMixerMaster__Dispose;
    type->__interface_2.__fp_MoveNext = (bool(*)(void*))List1_Enumerator__Fuse_Animations_IMixerMaster__MoveNext;

    type->SetInterfaces(
        ::app::Uno::Collections::IEnumerator__Fuse_Animations_IMixerMaster__typeof(), offsetof(List1_Enumerator__Fuse_Animations_IMixerMaster__uType, __interface_0),
        ::app::Uno::IDisposable__typeof(), offsetof(List1_Enumerator__Fuse_Animations_IMixerMaster__uType, __interface_1),
        ::app::Uno::Collections::IEnumerator__typeof(), offsetof(List1_Enumerator__Fuse_Animations_IMixerMaster__uType, __interface_2));

    type->SetStrongRefs(
        "_current", offsetof(List1_Enumerator__Fuse_Animations_IMixerMaster, _current),
        "_source", offsetof(List1_Enumerator__Fuse_Animations_IMixerMaster, _source));

    type->SetFields(4,
        ::uNewField("_current", NULL, offsetof(List1_Enumerator__Fuse_Animations_IMixerMaster, _current), ::app::Fuse::Animations::IMixerMaster__typeof()),
        ::uNewField("_iterator", NULL, offsetof(List1_Enumerator__Fuse_Animations_IMixerMaster, _iterator), ::app::Uno::Int__typeof()),
        ::uNewField("_source", NULL, offsetof(List1_Enumerator__Fuse_Animations_IMixerMaster, _source), ::app::Uno::Collections::List__Fuse_Animations_IMixerMaster__typeof()),
        ::uNewField("_version", NULL, offsetof(List1_Enumerator__Fuse_Animations_IMixerMaster, _version), ::app::Uno::Int__typeof()));

    type->SetFunctions(3,
        ::uNewFunctionVoid("Dispose", List1_Enumerator__Fuse_Animations_IMixerMaster__Dispose, 0, false),
        ::uNewFunction("get_Current", List1_Enumerator__Fuse_Animations_IMixerMaster__get_Current, 0, false, ::app::Fuse::Animations::IMixerMaster__typeof()),
        ::uNewFunction("MoveNext", List1_Enumerator__Fuse_Animations_IMixerMaster__MoveNext, 0, false, ::app::Uno::Bool__typeof()));

    ::uRegisterType(type);
    return type;
}

void List1_Enumerator__Fuse_Animations_IMixerMaster___ObjInit(List1_Enumerator__Fuse_Animations_IMixerMaster* __this, ::app::Uno::Collections::List__Fuse_Animations_IMixerMaster* source)
{
    __this->_source = source;
    __this->_version = ::uPtr< ::app::Uno::Collections::List__Fuse_Animations_IMixerMaster*>(source)->_version;
    __this->_iterator = -1;
}

void List1_Enumerator__Fuse_Animations_IMixerMaster__Dispose(List1_Enumerator__Fuse_Animations_IMixerMaster* __this)
{
}

::uObject* List1_Enumerator__Fuse_Animations_IMixerMaster__get_Current(List1_Enumerator__Fuse_Animations_IMixerMaster* __this)
{
    return __this->_current;
}

bool List1_Enumerator__Fuse_Animations_IMixerMaster__MoveNext(List1_Enumerator__Fuse_Animations_IMixerMaster* __this)
{
    if (::uPtr< ::app::Uno::Collections::List__Fuse_Animations_IMixerMaster*>(__this->_source)->_version != __this->_version)
    {
        U_THROW(::app::Uno::InvalidOperationException__New_4(NULL, ::uGetConstString("Collection was modified")));
    }

    __this->_iterator++;

    if (__this->_iterator < ::uPtr< ::app::Uno::Collections::List__Fuse_Animations_IMixerMaster*>(__this->_source)->_used)
    {
        __this->_current = ::uPtr< ::uArray*>(::uPtr< ::app::Uno::Collections::List__Fuse_Animations_IMixerMaster*>(__this->_source)->_data)->Item< ::uObject*>(__this->_iterator);
        return true;
    }

    return false;
}

List1_Enumerator__Fuse_Animations_IMixerMaster List1_Enumerator__Fuse_Animations_IMixerMaster__New_1(::uStatic* __this, ::app::Uno::Collections::List__Fuse_Animations_IMixerMaster* source)
{
    List1_Enumerator__Fuse_Animations_IMixerMaster inst = ::uDefault< List1_Enumerator__Fuse_Animations_IMixerMaster>();
    inst._ObjInit(source);
    return inst;
}

void List1_Enumerator__Fuse_Animations_IMixerMaster__Uno_Collections_IEnumerator_Reset(List1_Enumerator__Fuse_Animations_IMixerMaster* __this)
{
    __this->_iterator = -1;
    __this->_current = NULL;
    __this->_version = ::uPtr< ::app::Uno::Collections::List__Fuse_Animations_IMixerMaster*>(__this->_source)->_version;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Collections\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

List1_Enumerator__Fuse_Animations_Keyframe__uType* List1_Enumerator__Fuse_Animations_Keyframe__typeof()
{
    static ::uStaticStrong<List1_Enumerator__Fuse_Animations_Keyframe__uType*> type;
    if (type != NULL) return type;

    type = (List1_Enumerator__Fuse_Animations_Keyframe__uType*)::uAllocStructType(sizeof(List1_Enumerator__Fuse_Animations_Keyframe__uType), "Uno.Collections.List<Fuse.Animations.Keyframe>.Enumerator", sizeof(List1_Enumerator__Fuse_Animations_Keyframe), 3, 2, 0);

    type->__interface_2.__fp_Reset = (void(*)(void*))List1_Enumerator__Fuse_Animations_Keyframe__Uno_Collections_IEnumerator_Reset;
    type->__interface_0.__fp_get_Current = (::app::Fuse::Animations::Keyframe*(*)(void*))List1_Enumerator__Fuse_Animations_Keyframe__get_Current;
    type->__interface_1.__fp_Dispose = (void(*)(void*))List1_Enumerator__Fuse_Animations_Keyframe__Dispose;
    type->__interface_2.__fp_MoveNext = (bool(*)(void*))List1_Enumerator__Fuse_Animations_Keyframe__MoveNext;

    type->SetInterfaces(
        ::app::Uno::Collections::IEnumerator__Fuse_Animations_Keyframe__typeof(), offsetof(List1_Enumerator__Fuse_Animations_Keyframe__uType, __interface_0),
        ::app::Uno::IDisposable__typeof(), offsetof(List1_Enumerator__Fuse_Animations_Keyframe__uType, __interface_1),
        ::app::Uno::Collections::IEnumerator__typeof(), offsetof(List1_Enumerator__Fuse_Animations_Keyframe__uType, __interface_2));

    type->SetStrongRefs(
        "_current", offsetof(List1_Enumerator__Fuse_Animations_Keyframe, _current),
        "_source", offsetof(List1_Enumerator__Fuse_Animations_Keyframe, _source));

    type->SetFields(4,
        ::uNewField("_current", NULL, offsetof(List1_Enumerator__Fuse_Animations_Keyframe, _current), ::app::Fuse::Animations::Keyframe__typeof()),
        ::uNewField("_iterator", NULL, offsetof(List1_Enumerator__Fuse_Animations_Keyframe, _iterator), ::app::Uno::Int__typeof()),
        ::uNewField("_source", NULL, offsetof(List1_Enumerator__Fuse_Animations_Keyframe, _source), ::app::Uno::Collections::List__Fuse_Animations_Keyframe__typeof()),
        ::uNewField("_version", NULL, offsetof(List1_Enumerator__Fuse_Animations_Keyframe, _version), ::app::Uno::Int__typeof()));

    type->SetFunctions(3,
        ::uNewFunctionVoid("Dispose", List1_Enumerator__Fuse_Animations_Keyframe__Dispose, 0, false),
        ::uNewFunction("get_Current", List1_Enumerator__Fuse_Animations_Keyframe__get_Current, 0, false, ::app::Fuse::Animations::Keyframe__typeof()),
        ::uNewFunction("MoveNext", List1_Enumerator__Fuse_Animations_Keyframe__MoveNext, 0, false, ::app::Uno::Bool__typeof()));

    ::uRegisterType(type);
    return type;
}

void List1_Enumerator__Fuse_Animations_Keyframe___ObjInit(List1_Enumerator__Fuse_Animations_Keyframe* __this, ::app::Uno::Collections::List__Fuse_Animations_Keyframe* source)
{
    __this->_source = source;
    __this->_version = ::uPtr< ::app::Uno::Collections::List__Fuse_Animations_Keyframe*>(source)->_version;
    __this->_iterator = -1;
}

void List1_Enumerator__Fuse_Animations_Keyframe__Dispose(List1_Enumerator__Fuse_Animations_Keyframe* __this)
{
}

::app::Fuse::Animations::Keyframe* List1_Enumerator__Fuse_Animations_Keyframe__get_Current(List1_Enumerator__Fuse_Animations_Keyframe* __this)
{
    return __this->_current;
}

bool List1_Enumerator__Fuse_Animations_Keyframe__MoveNext(List1_Enumerator__Fuse_Animations_Keyframe* __this)
{
    if (::uPtr< ::app::Uno::Collections::List__Fuse_Animations_Keyframe*>(__this->_source)->_version != __this->_version)
    {
        U_THROW(::app::Uno::InvalidOperationException__New_4(NULL, ::uGetConstString("Collection was modified")));
    }

    __this->_iterator++;

    if (__this->_iterator < ::uPtr< ::app::Uno::Collections::List__Fuse_Animations_Keyframe*>(__this->_source)->_used)
    {
        __this->_current = ::uPtr< ::uArray*>(::uPtr< ::app::Uno::Collections::List__Fuse_Animations_Keyframe*>(__this->_source)->_data)->Item< ::app::Fuse::Animations::Keyframe*>(__this->_iterator);
        return true;
    }

    return false;
}

List1_Enumerator__Fuse_Animations_Keyframe List1_Enumerator__Fuse_Animations_Keyframe__New_1(::uStatic* __this, ::app::Uno::Collections::List__Fuse_Animations_Keyframe* source)
{
    List1_Enumerator__Fuse_Animations_Keyframe inst = ::uDefault< List1_Enumerator__Fuse_Animations_Keyframe>();
    inst._ObjInit(source);
    return inst;
}

void List1_Enumerator__Fuse_Animations_Keyframe__Uno_Collections_IEnumerator_Reset(List1_Enumerator__Fuse_Animations_Keyframe* __this)
{
    __this->_iterator = -1;
    __this->_current = NULL;
    __this->_version = ::uPtr< ::app::Uno::Collections::List__Fuse_Animations_Keyframe*>(__this->_source)->_version;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Collections\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

List1_Enumerator__Fuse_Animations_MixerHandle_Fuse_Transform___uType* List1_Enumerator__Fuse_Animations_MixerHandle_Fuse_Transform___typeof()
{
    static ::uStaticStrong<List1_Enumerator__Fuse_Animations_MixerHandle_Fuse_Transform___uType*> type;
    if (type != NULL) return type;

    type = (List1_Enumerator__Fuse_Animations_MixerHandle_Fuse_Transform___uType*)::uAllocStructType(sizeof(List1_Enumerator__Fuse_Animations_MixerHandle_Fuse_Transform___uType), "Uno.Collections.List<Fuse.Animations.MixerHandle<Fuse.Transform>>.Enumerator", sizeof(List1_Enumerator__Fuse_Animations_MixerHandle_Fuse_Transform_), 3, 2, 0);

    type->__interface_2.__fp_Reset = (void(*)(void*))List1_Enumerator__Fuse_Animations_MixerHandle_Fuse_Transform___Uno_Collections_IEnumerator_Reset;
    type->__interface_0.__fp_get_Current = (::app::Fuse::Animations::MixerHandle__Fuse_Transform*(*)(void*))List1_Enumerator__Fuse_Animations_MixerHandle_Fuse_Transform___get_Current;
    type->__interface_1.__fp_Dispose = (void(*)(void*))List1_Enumerator__Fuse_Animations_MixerHandle_Fuse_Transform___Dispose;
    type->__interface_2.__fp_MoveNext = (bool(*)(void*))List1_Enumerator__Fuse_Animations_MixerHandle_Fuse_Transform___MoveNext;

    type->SetInterfaces(
        ::app::Uno::Collections::IEnumerator__Fuse_Animations_MixerHandle_Fuse_Transform___typeof(), offsetof(List1_Enumerator__Fuse_Animations_MixerHandle_Fuse_Transform___uType, __interface_0),
        ::app::Uno::IDisposable__typeof(), offsetof(List1_Enumerator__Fuse_Animations_MixerHandle_Fuse_Transform___uType, __interface_1),
        ::app::Uno::Collections::IEnumerator__typeof(), offsetof(List1_Enumerator__Fuse_Animations_MixerHandle_Fuse_Transform___uType, __interface_2));

    type->SetStrongRefs(
        "_current", offsetof(List1_Enumerator__Fuse_Animations_MixerHandle_Fuse_Transform_, _current),
        "_source", offsetof(List1_Enumerator__Fuse_Animations_MixerHandle_Fuse_Transform_, _source));

    type->SetFields(4,
        ::uNewField("_current", NULL, offsetof(List1_Enumerator__Fuse_Animations_MixerHandle_Fuse_Transform_, _current), ::app::Fuse::Animations::MixerHandle__Fuse_Transform__typeof()),
        ::uNewField("_iterator", NULL, offsetof(List1_Enumerator__Fuse_Animations_MixerHandle_Fuse_Transform_, _iterator), ::app::Uno::Int__typeof()),
        ::uNewField("_source", NULL, offsetof(List1_Enumerator__Fuse_Animations_MixerHandle_Fuse_Transform_, _source), ::app::Uno::Collections::List__Fuse_Animations_MixerHandle_Fuse_Transform___typeof()),
        ::uNewField("_version", NULL, offsetof(List1_Enumerator__Fuse_Animations_MixerHandle_Fuse_Transform_, _version), ::app::Uno::Int__typeof()));

    type->SetFunctions(3,
        ::uNewFunctionVoid("Dispose", List1_Enumerator__Fuse_Animations_MixerHandle_Fuse_Transform___Dispose, 0, false),
        ::uNewFunction("get_Current", List1_Enumerator__Fuse_Animations_MixerHandle_Fuse_Transform___get_Current, 0, false, ::app::Fuse::Animations::MixerHandle__Fuse_Transform__typeof()),
        ::uNewFunction("MoveNext", List1_Enumerator__Fuse_Animations_MixerHandle_Fuse_Transform___MoveNext, 0, false, ::app::Uno::Bool__typeof()));

    ::uRegisterType(type);
    return type;
}

void List1_Enumerator__Fuse_Animations_MixerHandle_Fuse_Transform____ObjInit(List1_Enumerator__Fuse_Animations_MixerHandle_Fuse_Transform_* __this, ::app::Uno::Collections::List__Fuse_Animations_MixerHandle_Fuse_Transform_* source)
{
    __this->_source = source;
    __this->_version = ::uPtr< ::app::Uno::Collections::List__Fuse_Animations_MixerHandle_Fuse_Transform_*>(source)->_version;
    __this->_iterator = -1;
}

void List1_Enumerator__Fuse_Animations_MixerHandle_Fuse_Transform___Dispose(List1_Enumerator__Fuse_Animations_MixerHandle_Fuse_Transform_* __this)
{
}

::app::Fuse::Animations::MixerHandle__Fuse_Transform* List1_Enumerator__Fuse_Animations_MixerHandle_Fuse_Transform___get_Current(List1_Enumerator__Fuse_Animations_MixerHandle_Fuse_Transform_* __this)
{
    return __this->_current;
}

bool List1_Enumerator__Fuse_Animations_MixerHandle_Fuse_Transform___MoveNext(List1_Enumerator__Fuse_Animations_MixerHandle_Fuse_Transform_* __this)
{
    if (::uPtr< ::app::Uno::Collections::List__Fuse_Animations_MixerHandle_Fuse_Transform_*>(__this->_source)->_version != __this->_version)
    {
        U_THROW(::app::Uno::InvalidOperationException__New_4(NULL, ::uGetConstString("Collection was modified")));
    }

    __this->_iterator++;

    if (__this->_iterator < ::uPtr< ::app::Uno::Collections::List__Fuse_Animations_MixerHandle_Fuse_Transform_*>(__this->_source)->_used)
    {
        __this->_current = ::uPtr< ::uArray*>(::uPtr< ::app::Uno::Collections::List__Fuse_Animations_MixerHandle_Fuse_Transform_*>(__this->_source)->_data)->Item< ::app::Fuse::Animations::MixerHandle__Fuse_Transform*>(__this->_iterator);
        return true;
    }

    return false;
}

List1_Enumerator__Fuse_Animations_MixerHandle_Fuse_Transform_ List1_Enumerator__Fuse_Animations_MixerHandle_Fuse_Transform___New_1(::uStatic* __this, ::app::Uno::Collections::List__Fuse_Animations_MixerHandle_Fuse_Transform_* source)
{
    List1_Enumerator__Fuse_Animations_MixerHandle_Fuse_Transform_ inst = ::uDefault< List1_Enumerator__Fuse_Animations_MixerHandle_Fuse_Transform_>();
    inst._ObjInit(source);
    return inst;
}

void List1_Enumerator__Fuse_Animations_MixerHandle_Fuse_Transform___Uno_Collections_IEnumerator_Reset(List1_Enumerator__Fuse_Animations_MixerHandle_Fuse_Transform_* __this)
{
    __this->_iterator = -1;
    __this->_current = NULL;
    __this->_version = ::uPtr< ::app::Uno::Collections::List__Fuse_Animations_MixerHandle_Fuse_Transform_*>(__this->_source)->_version;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Collections\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

List1_Enumerator__Fuse_Behavior__uType* List1_Enumerator__Fuse_Behavior__typeof()
{
    static ::uStaticStrong<List1_Enumerator__Fuse_Behavior__uType*> type;
    if (type != NULL) return type;

    type = (List1_Enumerator__Fuse_Behavior__uType*)::uAllocStructType(sizeof(List1_Enumerator__Fuse_Behavior__uType), "Uno.Collections.List<Fuse.Behavior>.Enumerator", sizeof(List1_Enumerator__Fuse_Behavior), 3, 2, 0);

    type->__interface_2.__fp_Reset = (void(*)(void*))List1_Enumerator__Fuse_Behavior__Uno_Collections_IEnumerator_Reset;
    type->__interface_0.__fp_get_Current = (::app::Fuse::Behavior*(*)(void*))List1_Enumerator__Fuse_Behavior__get_Current;
    type->__interface_1.__fp_Dispose = (void(*)(void*))List1_Enumerator__Fuse_Behavior__Dispose;
    type->__interface_2.__fp_MoveNext = (bool(*)(void*))List1_Enumerator__Fuse_Behavior__MoveNext;

    type->SetInterfaces(
        ::app::Uno::Collections::IEnumerator__Fuse_Behavior__typeof(), offsetof(List1_Enumerator__Fuse_Behavior__uType, __interface_0),
        ::app::Uno::IDisposable__typeof(), offsetof(List1_Enumerator__Fuse_Behavior__uType, __interface_1),
        ::app::Uno::Collections::IEnumerator__typeof(), offsetof(List1_Enumerator__Fuse_Behavior__uType, __interface_2));

    type->SetStrongRefs(
        "_current", offsetof(List1_Enumerator__Fuse_Behavior, _current),
        "_source", offsetof(List1_Enumerator__Fuse_Behavior, _source));

    type->SetFields(4,
        ::uNewField("_current", NULL, offsetof(List1_Enumerator__Fuse_Behavior, _current), ::app::Fuse::Behavior__typeof()),
        ::uNewField("_iterator", NULL, offsetof(List1_Enumerator__Fuse_Behavior, _iterator), ::app::Uno::Int__typeof()),
        ::uNewField("_source", NULL, offsetof(List1_Enumerator__Fuse_Behavior, _source), ::app::Uno::Collections::List__Fuse_Behavior__typeof()),
        ::uNewField("_version", NULL, offsetof(List1_Enumerator__Fuse_Behavior, _version), ::app::Uno::Int__typeof()));

    type->SetFunctions(3,
        ::uNewFunctionVoid("Dispose", List1_Enumerator__Fuse_Behavior__Dispose, 0, false),
        ::uNewFunction("get_Current", List1_Enumerator__Fuse_Behavior__get_Current, 0, false, ::app::Fuse::Behavior__typeof()),
        ::uNewFunction("MoveNext", List1_Enumerator__Fuse_Behavior__MoveNext, 0, false, ::app::Uno::Bool__typeof()));

    ::uRegisterType(type);
    return type;
}

void List1_Enumerator__Fuse_Behavior___ObjInit(List1_Enumerator__Fuse_Behavior* __this, ::app::Uno::Collections::List__Fuse_Behavior* source)
{
    __this->_source = source;
    __this->_version = ::uPtr< ::app::Uno::Collections::List__Fuse_Behavior*>(source)->_version;
    __this->_iterator = -1;
}

void List1_Enumerator__Fuse_Behavior__Dispose(List1_Enumerator__Fuse_Behavior* __this)
{
}

::app::Fuse::Behavior* List1_Enumerator__Fuse_Behavior__get_Current(List1_Enumerator__Fuse_Behavior* __this)
{
    return __this->_current;
}

bool List1_Enumerator__Fuse_Behavior__MoveNext(List1_Enumerator__Fuse_Behavior* __this)
{
    if (::uPtr< ::app::Uno::Collections::List__Fuse_Behavior*>(__this->_source)->_version != __this->_version)
    {
        U_THROW(::app::Uno::InvalidOperationException__New_4(NULL, ::uGetConstString("Collection was modified")));
    }

    __this->_iterator++;

    if (__this->_iterator < ::uPtr< ::app::Uno::Collections::List__Fuse_Behavior*>(__this->_source)->_used)
    {
        __this->_current = ::uPtr< ::uArray*>(::uPtr< ::app::Uno::Collections::List__Fuse_Behavior*>(__this->_source)->_data)->Item< ::app::Fuse::Behavior*>(__this->_iterator);
        return true;
    }

    return false;
}

List1_Enumerator__Fuse_Behavior List1_Enumerator__Fuse_Behavior__New_1(::uStatic* __this, ::app::Uno::Collections::List__Fuse_Behavior* source)
{
    List1_Enumerator__Fuse_Behavior inst = ::uDefault< List1_Enumerator__Fuse_Behavior>();
    inst._ObjInit(source);
    return inst;
}

void List1_Enumerator__Fuse_Behavior__Uno_Collections_IEnumerator_Reset(List1_Enumerator__Fuse_Behavior* __this)
{
    __this->_iterator = -1;
    __this->_current = NULL;
    __this->_version = ::uPtr< ::app::Uno::Collections::List__Fuse_Behavior*>(__this->_source)->_version;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Collections\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

List1_Enumerator__Fuse_CacheFramebuffer__uType* List1_Enumerator__Fuse_CacheFramebuffer__typeof()
{
    static ::uStaticStrong<List1_Enumerator__Fuse_CacheFramebuffer__uType*> type;
    if (type != NULL) return type;

    type = (List1_Enumerator__Fuse_CacheFramebuffer__uType*)::uAllocStructType(sizeof(List1_Enumerator__Fuse_CacheFramebuffer__uType), "Uno.Collections.List<Fuse.CacheFramebuffer>.Enumerator", sizeof(List1_Enumerator__Fuse_CacheFramebuffer), 3, 2, 0);

    type->__interface_2.__fp_Reset = (void(*)(void*))List1_Enumerator__Fuse_CacheFramebuffer__Uno_Collections_IEnumerator_Reset;
    type->__interface_0.__fp_get_Current = (::app::Fuse::CacheFramebuffer*(*)(void*))List1_Enumerator__Fuse_CacheFramebuffer__get_Current;
    type->__interface_1.__fp_Dispose = (void(*)(void*))List1_Enumerator__Fuse_CacheFramebuffer__Dispose;
    type->__interface_2.__fp_MoveNext = (bool(*)(void*))List1_Enumerator__Fuse_CacheFramebuffer__MoveNext;

    type->SetInterfaces(
        ::app::Uno::Collections::IEnumerator__Fuse_CacheFramebuffer__typeof(), offsetof(List1_Enumerator__Fuse_CacheFramebuffer__uType, __interface_0),
        ::app::Uno::IDisposable__typeof(), offsetof(List1_Enumerator__Fuse_CacheFramebuffer__uType, __interface_1),
        ::app::Uno::Collections::IEnumerator__typeof(), offsetof(List1_Enumerator__Fuse_CacheFramebuffer__uType, __interface_2));

    type->SetStrongRefs(
        "_current", offsetof(List1_Enumerator__Fuse_CacheFramebuffer, _current),
        "_source", offsetof(List1_Enumerator__Fuse_CacheFramebuffer, _source));

    type->SetFields(4,
        ::uNewField("_current", NULL, offsetof(List1_Enumerator__Fuse_CacheFramebuffer, _current), ::app::Fuse::CacheFramebuffer__typeof()),
        ::uNewField("_iterator", NULL, offsetof(List1_Enumerator__Fuse_CacheFramebuffer, _iterator), ::app::Uno::Int__typeof()),
        ::uNewField("_source", NULL, offsetof(List1_Enumerator__Fuse_CacheFramebuffer, _source), ::app::Uno::Collections::List__Fuse_CacheFramebuffer__typeof()),
        ::uNewField("_version", NULL, offsetof(List1_Enumerator__Fuse_CacheFramebuffer, _version), ::app::Uno::Int__typeof()));

    type->SetFunctions(3,
        ::uNewFunctionVoid("Dispose", List1_Enumerator__Fuse_CacheFramebuffer__Dispose, 0, false),
        ::uNewFunction("get_Current", List1_Enumerator__Fuse_CacheFramebuffer__get_Current, 0, false, ::app::Fuse::CacheFramebuffer__typeof()),
        ::uNewFunction("MoveNext", List1_Enumerator__Fuse_CacheFramebuffer__MoveNext, 0, false, ::app::Uno::Bool__typeof()));

    ::uRegisterType(type);
    return type;
}

void List1_Enumerator__Fuse_CacheFramebuffer___ObjInit(List1_Enumerator__Fuse_CacheFramebuffer* __this, ::app::Uno::Collections::List__Fuse_CacheFramebuffer* source)
{
    __this->_source = source;
    __this->_version = ::uPtr< ::app::Uno::Collections::List__Fuse_CacheFramebuffer*>(source)->_version;
    __this->_iterator = -1;
}

void List1_Enumerator__Fuse_CacheFramebuffer__Dispose(List1_Enumerator__Fuse_CacheFramebuffer* __this)
{
}

::app::Fuse::CacheFramebuffer* List1_Enumerator__Fuse_CacheFramebuffer__get_Current(List1_Enumerator__Fuse_CacheFramebuffer* __this)
{
    return __this->_current;
}

bool List1_Enumerator__Fuse_CacheFramebuffer__MoveNext(List1_Enumerator__Fuse_CacheFramebuffer* __this)
{
    if (::uPtr< ::app::Uno::Collections::List__Fuse_CacheFramebuffer*>(__this->_source)->_version != __this->_version)
    {
        U_THROW(::app::Uno::InvalidOperationException__New_4(NULL, ::uGetConstString("Collection was modified")));
    }

    __this->_iterator++;

    if (__this->_iterator < ::uPtr< ::app::Uno::Collections::List__Fuse_CacheFramebuffer*>(__this->_source)->_used)
    {
        __this->_current = ::uPtr< ::uArray*>(::uPtr< ::app::Uno::Collections::List__Fuse_CacheFramebuffer*>(__this->_source)->_data)->Item< ::app::Fuse::CacheFramebuffer*>(__this->_iterator);
        return true;
    }

    return false;
}

List1_Enumerator__Fuse_CacheFramebuffer List1_Enumerator__Fuse_CacheFramebuffer__New_1(::uStatic* __this, ::app::Uno::Collections::List__Fuse_CacheFramebuffer* source)
{
    List1_Enumerator__Fuse_CacheFramebuffer inst = ::uDefault< List1_Enumerator__Fuse_CacheFramebuffer>();
    inst._ObjInit(source);
    return inst;
}

void List1_Enumerator__Fuse_CacheFramebuffer__Uno_Collections_IEnumerator_Reset(List1_Enumerator__Fuse_CacheFramebuffer* __this)
{
    __this->_iterator = -1;
    __this->_current = NULL;
    __this->_version = ::uPtr< ::app::Uno::Collections::List__Fuse_CacheFramebuffer*>(__this->_source)->_version;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Collections\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

List1_Enumerator__Fuse_Controls_Control__uType* List1_Enumerator__Fuse_Controls_Control__typeof()
{
    static ::uStaticStrong<List1_Enumerator__Fuse_Controls_Control__uType*> type;
    if (type != NULL) return type;

    type = (List1_Enumerator__Fuse_Controls_Control__uType*)::uAllocStructType(sizeof(List1_Enumerator__Fuse_Controls_Control__uType), "Uno.Collections.List<Fuse.Controls.Control>.Enumerator", sizeof(List1_Enumerator__Fuse_Controls_Control), 3, 2, 0);

    type->__interface_2.__fp_Reset = (void(*)(void*))List1_Enumerator__Fuse_Controls_Control__Uno_Collections_IEnumerator_Reset;
    type->__interface_0.__fp_get_Current = (::app::Fuse::Controls::Control*(*)(void*))List1_Enumerator__Fuse_Controls_Control__get_Current;
    type->__interface_1.__fp_Dispose = (void(*)(void*))List1_Enumerator__Fuse_Controls_Control__Dispose;
    type->__interface_2.__fp_MoveNext = (bool(*)(void*))List1_Enumerator__Fuse_Controls_Control__MoveNext;

    type->SetInterfaces(
        ::app::Uno::Collections::IEnumerator__Fuse_Controls_Control__typeof(), offsetof(List1_Enumerator__Fuse_Controls_Control__uType, __interface_0),
        ::app::Uno::IDisposable__typeof(), offsetof(List1_Enumerator__Fuse_Controls_Control__uType, __interface_1),
        ::app::Uno::Collections::IEnumerator__typeof(), offsetof(List1_Enumerator__Fuse_Controls_Control__uType, __interface_2));

    type->SetStrongRefs(
        "_current", offsetof(List1_Enumerator__Fuse_Controls_Control, _current),
        "_source", offsetof(List1_Enumerator__Fuse_Controls_Control, _source));

    type->SetFields(4,
        ::uNewField("_current", NULL, offsetof(List1_Enumerator__Fuse_Controls_Control, _current), ::app::Fuse::Controls::Control__typeof()),
        ::uNewField("_iterator", NULL, offsetof(List1_Enumerator__Fuse_Controls_Control, _iterator), ::app::Uno::Int__typeof()),
        ::uNewField("_source", NULL, offsetof(List1_Enumerator__Fuse_Controls_Control, _source), ::app::Uno::Collections::List__Fuse_Controls_Control__typeof()),
        ::uNewField("_version", NULL, offsetof(List1_Enumerator__Fuse_Controls_Control, _version), ::app::Uno::Int__typeof()));

    type->SetFunctions(3,
        ::uNewFunctionVoid("Dispose", List1_Enumerator__Fuse_Controls_Control__Dispose, 0, false),
        ::uNewFunction("get_Current", List1_Enumerator__Fuse_Controls_Control__get_Current, 0, false, ::app::Fuse::Controls::Control__typeof()),
        ::uNewFunction("MoveNext", List1_Enumerator__Fuse_Controls_Control__MoveNext, 0, false, ::app::Uno::Bool__typeof()));

    ::uRegisterType(type);
    return type;
}

void List1_Enumerator__Fuse_Controls_Control___ObjInit(List1_Enumerator__Fuse_Controls_Control* __this, ::app::Uno::Collections::List__Fuse_Controls_Control* source)
{
    __this->_source = source;
    __this->_version = ::uPtr< ::app::Uno::Collections::List__Fuse_Controls_Control*>(source)->_version;
    __this->_iterator = -1;
}

void List1_Enumerator__Fuse_Controls_Control__Dispose(List1_Enumerator__Fuse_Controls_Control* __this)
{
}

::app::Fuse::Controls::Control* List1_Enumerator__Fuse_Controls_Control__get_Current(List1_Enumerator__Fuse_Controls_Control* __this)
{
    return __this->_current;
}

bool List1_Enumerator__Fuse_Controls_Control__MoveNext(List1_Enumerator__Fuse_Controls_Control* __this)
{
    if (::uPtr< ::app::Uno::Collections::List__Fuse_Controls_Control*>(__this->_source)->_version != __this->_version)
    {
        U_THROW(::app::Uno::InvalidOperationException__New_4(NULL, ::uGetConstString("Collection was modified")));
    }

    __this->_iterator++;

    if (__this->_iterator < ::uPtr< ::app::Uno::Collections::List__Fuse_Controls_Control*>(__this->_source)->_used)
    {
        __this->_current = ::uPtr< ::uArray*>(::uPtr< ::app::Uno::Collections::List__Fuse_Controls_Control*>(__this->_source)->_data)->Item< ::app::Fuse::Controls::Control*>(__this->_iterator);
        return true;
    }

    return false;
}

List1_Enumerator__Fuse_Controls_Control List1_Enumerator__Fuse_Controls_Control__New_1(::uStatic* __this, ::app::Uno::Collections::List__Fuse_Controls_Control* source)
{
    List1_Enumerator__Fuse_Controls_Control inst = ::uDefault< List1_Enumerator__Fuse_Controls_Control>();
    inst._ObjInit(source);
    return inst;
}

void List1_Enumerator__Fuse_Controls_Control__Uno_Collections_IEnumerator_Reset(List1_Enumerator__Fuse_Controls_Control* __this)
{
    __this->_iterator = -1;
    __this->_current = NULL;
    __this->_version = ::uPtr< ::app::Uno::Collections::List__Fuse_Controls_Control*>(__this->_source)->_version;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Collections\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

List1_Enumerator__Fuse_Controls_Internal_WordWrapperWord__uType* List1_Enumerator__Fuse_Controls_Internal_WordWrapperWord__typeof()
{
    static ::uStaticStrong<List1_Enumerator__Fuse_Controls_Internal_WordWrapperWord__uType*> type;
    if (type != NULL) return type;

    type = (List1_Enumerator__Fuse_Controls_Internal_WordWrapperWord__uType*)::uAllocStructType(sizeof(List1_Enumerator__Fuse_Controls_Internal_WordWrapperWord__uType), "Uno.Collections.List<Fuse.Controls.Internal.WordWrapperWord>.Enumerator", sizeof(List1_Enumerator__Fuse_Controls_Internal_WordWrapperWord), 3, 2, 0);

    type->__interface_2.__fp_Reset = (void(*)(void*))List1_Enumerator__Fuse_Controls_Internal_WordWrapperWord__Uno_Collections_IEnumerator_Reset;
    type->__interface_0.__fp_get_Current = (::app::Fuse::Controls::Internal::WordWrapperWord*(*)(void*))List1_Enumerator__Fuse_Controls_Internal_WordWrapperWord__get_Current;
    type->__interface_1.__fp_Dispose = (void(*)(void*))List1_Enumerator__Fuse_Controls_Internal_WordWrapperWord__Dispose;
    type->__interface_2.__fp_MoveNext = (bool(*)(void*))List1_Enumerator__Fuse_Controls_Internal_WordWrapperWord__MoveNext;

    type->SetInterfaces(
        ::app::Uno::Collections::IEnumerator__Fuse_Controls_Internal_WordWrapperWord__typeof(), offsetof(List1_Enumerator__Fuse_Controls_Internal_WordWrapperWord__uType, __interface_0),
        ::app::Uno::IDisposable__typeof(), offsetof(List1_Enumerator__Fuse_Controls_Internal_WordWrapperWord__uType, __interface_1),
        ::app::Uno::Collections::IEnumerator__typeof(), offsetof(List1_Enumerator__Fuse_Controls_Internal_WordWrapperWord__uType, __interface_2));

    type->SetStrongRefs(
        "_current", offsetof(List1_Enumerator__Fuse_Controls_Internal_WordWrapperWord, _current),
        "_source", offsetof(List1_Enumerator__Fuse_Controls_Internal_WordWrapperWord, _source));

    type->SetFields(4,
        ::uNewField("_current", NULL, offsetof(List1_Enumerator__Fuse_Controls_Internal_WordWrapperWord, _current), ::app::Fuse::Controls::Internal::WordWrapperWord__typeof()),
        ::uNewField("_iterator", NULL, offsetof(List1_Enumerator__Fuse_Controls_Internal_WordWrapperWord, _iterator), ::app::Uno::Int__typeof()),
        ::uNewField("_source", NULL, offsetof(List1_Enumerator__Fuse_Controls_Internal_WordWrapperWord, _source), ::app::Uno::Collections::List__Fuse_Controls_Internal_WordWrapperWord__typeof()),
        ::uNewField("_version", NULL, offsetof(List1_Enumerator__Fuse_Controls_Internal_WordWrapperWord, _version), ::app::Uno::Int__typeof()));

    type->SetFunctions(3,
        ::uNewFunctionVoid("Dispose", List1_Enumerator__Fuse_Controls_Internal_WordWrapperWord__Dispose, 0, false),
        ::uNewFunction("get_Current", List1_Enumerator__Fuse_Controls_Internal_WordWrapperWord__get_Current, 0, false, ::app::Fuse::Controls::Internal::WordWrapperWord__typeof()),
        ::uNewFunction("MoveNext", List1_Enumerator__Fuse_Controls_Internal_WordWrapperWord__MoveNext, 0, false, ::app::Uno::Bool__typeof()));

    ::uRegisterType(type);
    return type;
}

void List1_Enumerator__Fuse_Controls_Internal_WordWrapperWord___ObjInit(List1_Enumerator__Fuse_Controls_Internal_WordWrapperWord* __this, ::app::Uno::Collections::List__Fuse_Controls_Internal_WordWrapperWord* source)
{
    __this->_source = source;
    __this->_version = ::uPtr< ::app::Uno::Collections::List__Fuse_Controls_Internal_WordWrapperWord*>(source)->_version;
    __this->_iterator = -1;
}

void List1_Enumerator__Fuse_Controls_Internal_WordWrapperWord__Dispose(List1_Enumerator__Fuse_Controls_Internal_WordWrapperWord* __this)
{
}

::app::Fuse::Controls::Internal::WordWrapperWord* List1_Enumerator__Fuse_Controls_Internal_WordWrapperWord__get_Current(List1_Enumerator__Fuse_Controls_Internal_WordWrapperWord* __this)
{
    return __this->_current;
}

bool List1_Enumerator__Fuse_Controls_Internal_WordWrapperWord__MoveNext(List1_Enumerator__Fuse_Controls_Internal_WordWrapperWord* __this)
{
    if (::uPtr< ::app::Uno::Collections::List__Fuse_Controls_Internal_WordWrapperWord*>(__this->_source)->_version != __this->_version)
    {
        U_THROW(::app::Uno::InvalidOperationException__New_4(NULL, ::uGetConstString("Collection was modified")));
    }

    __this->_iterator++;

    if (__this->_iterator < ::uPtr< ::app::Uno::Collections::List__Fuse_Controls_Internal_WordWrapperWord*>(__this->_source)->_used)
    {
        __this->_current = ::uPtr< ::uArray*>(::uPtr< ::app::Uno::Collections::List__Fuse_Controls_Internal_WordWrapperWord*>(__this->_source)->_data)->Item< ::app::Fuse::Controls::Internal::WordWrapperWord*>(__this->_iterator);
        return true;
    }

    return false;
}

List1_Enumerator__Fuse_Controls_Internal_WordWrapperWord List1_Enumerator__Fuse_Controls_Internal_WordWrapperWord__New_1(::uStatic* __this, ::app::Uno::Collections::List__Fuse_Controls_Internal_WordWrapperWord* source)
{
    List1_Enumerator__Fuse_Controls_Internal_WordWrapperWord inst = ::uDefault< List1_Enumerator__Fuse_Controls_Internal_WordWrapperWord>();
    inst._ObjInit(source);
    return inst;
}

void List1_Enumerator__Fuse_Controls_Internal_WordWrapperWord__Uno_Collections_IEnumerator_Reset(List1_Enumerator__Fuse_Controls_Internal_WordWrapperWord* __this)
{
    __this->_iterator = -1;
    __this->_current = NULL;
    __this->_version = ::uPtr< ::app::Uno::Collections::List__Fuse_Controls_Internal_WordWrapperWord*>(__this->_source)->_version;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Collections\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

List1_Enumerator__Fuse_Controls_Internal_WrappedLine__uType* List1_Enumerator__Fuse_Controls_Internal_WrappedLine__typeof()
{
    static ::uStaticStrong<List1_Enumerator__Fuse_Controls_Internal_WrappedLine__uType*> type;
    if (type != NULL) return type;

    type = (List1_Enumerator__Fuse_Controls_Internal_WrappedLine__uType*)::uAllocStructType(sizeof(List1_Enumerator__Fuse_Controls_Internal_WrappedLine__uType), "Uno.Collections.List<Fuse.Controls.Internal.WrappedLine>.Enumerator", sizeof(List1_Enumerator__Fuse_Controls_Internal_WrappedLine), 3, 2, 0);

    type->__interface_2.__fp_Reset = (void(*)(void*))List1_Enumerator__Fuse_Controls_Internal_WrappedLine__Uno_Collections_IEnumerator_Reset;
    type->__interface_0.__fp_get_Current = (::app::Fuse::Controls::Internal::WrappedLine*(*)(void*))List1_Enumerator__Fuse_Controls_Internal_WrappedLine__get_Current;
    type->__interface_1.__fp_Dispose = (void(*)(void*))List1_Enumerator__Fuse_Controls_Internal_WrappedLine__Dispose;
    type->__interface_2.__fp_MoveNext = (bool(*)(void*))List1_Enumerator__Fuse_Controls_Internal_WrappedLine__MoveNext;

    type->SetInterfaces(
        ::app::Uno::Collections::IEnumerator__Fuse_Controls_Internal_WrappedLine__typeof(), offsetof(List1_Enumerator__Fuse_Controls_Internal_WrappedLine__uType, __interface_0),
        ::app::Uno::IDisposable__typeof(), offsetof(List1_Enumerator__Fuse_Controls_Internal_WrappedLine__uType, __interface_1),
        ::app::Uno::Collections::IEnumerator__typeof(), offsetof(List1_Enumerator__Fuse_Controls_Internal_WrappedLine__uType, __interface_2));

    type->SetStrongRefs(
        "_current", offsetof(List1_Enumerator__Fuse_Controls_Internal_WrappedLine, _current),
        "_source", offsetof(List1_Enumerator__Fuse_Controls_Internal_WrappedLine, _source));

    type->SetFields(4,
        ::uNewField("_current", NULL, offsetof(List1_Enumerator__Fuse_Controls_Internal_WrappedLine, _current), ::app::Fuse::Controls::Internal::WrappedLine__typeof()),
        ::uNewField("_iterator", NULL, offsetof(List1_Enumerator__Fuse_Controls_Internal_WrappedLine, _iterator), ::app::Uno::Int__typeof()),
        ::uNewField("_source", NULL, offsetof(List1_Enumerator__Fuse_Controls_Internal_WrappedLine, _source), ::app::Uno::Collections::List__Fuse_Controls_Internal_WrappedLine__typeof()),
        ::uNewField("_version", NULL, offsetof(List1_Enumerator__Fuse_Controls_Internal_WrappedLine, _version), ::app::Uno::Int__typeof()));

    type->SetFunctions(3,
        ::uNewFunctionVoid("Dispose", List1_Enumerator__Fuse_Controls_Internal_WrappedLine__Dispose, 0, false),
        ::uNewFunction("get_Current", List1_Enumerator__Fuse_Controls_Internal_WrappedLine__get_Current, 0, false, ::app::Fuse::Controls::Internal::WrappedLine__typeof()),
        ::uNewFunction("MoveNext", List1_Enumerator__Fuse_Controls_Internal_WrappedLine__MoveNext, 0, false, ::app::Uno::Bool__typeof()));

    ::uRegisterType(type);
    return type;
}

void List1_Enumerator__Fuse_Controls_Internal_WrappedLine___ObjInit(List1_Enumerator__Fuse_Controls_Internal_WrappedLine* __this, ::app::Uno::Collections::List__Fuse_Controls_Internal_WrappedLine* source)
{
    __this->_source = source;
    __this->_version = ::uPtr< ::app::Uno::Collections::List__Fuse_Controls_Internal_WrappedLine*>(source)->_version;
    __this->_iterator = -1;
}

void List1_Enumerator__Fuse_Controls_Internal_WrappedLine__Dispose(List1_Enumerator__Fuse_Controls_Internal_WrappedLine* __this)
{
}

::app::Fuse::Controls::Internal::WrappedLine* List1_Enumerator__Fuse_Controls_Internal_WrappedLine__get_Current(List1_Enumerator__Fuse_Controls_Internal_WrappedLine* __this)
{
    return __this->_current;
}

bool List1_Enumerator__Fuse_Controls_Internal_WrappedLine__MoveNext(List1_Enumerator__Fuse_Controls_Internal_WrappedLine* __this)
{
    if (::uPtr< ::app::Uno::Collections::List__Fuse_Controls_Internal_WrappedLine*>(__this->_source)->_version != __this->_version)
    {
        U_THROW(::app::Uno::InvalidOperationException__New_4(NULL, ::uGetConstString("Collection was modified")));
    }

    __this->_iterator++;

    if (__this->_iterator < ::uPtr< ::app::Uno::Collections::List__Fuse_Controls_Internal_WrappedLine*>(__this->_source)->_used)
    {
        __this->_current = ::uPtr< ::uArray*>(::uPtr< ::app::Uno::Collections::List__Fuse_Controls_Internal_WrappedLine*>(__this->_source)->_data)->Item< ::app::Fuse::Controls::Internal::WrappedLine*>(__this->_iterator);
        return true;
    }

    return false;
}

List1_Enumerator__Fuse_Controls_Internal_WrappedLine List1_Enumerator__Fuse_Controls_Internal_WrappedLine__New_1(::uStatic* __this, ::app::Uno::Collections::List__Fuse_Controls_Internal_WrappedLine* source)
{
    List1_Enumerator__Fuse_Controls_Internal_WrappedLine inst = ::uDefault< List1_Enumerator__Fuse_Controls_Internal_WrappedLine>();
    inst._ObjInit(source);
    return inst;
}

void List1_Enumerator__Fuse_Controls_Internal_WrappedLine__Uno_Collections_IEnumerator_Reset(List1_Enumerator__Fuse_Controls_Internal_WrappedLine* __this)
{
    __this->_iterator = -1;
    __this->_current = NULL;
    __this->_version = ::uPtr< ::app::Uno::Collections::List__Fuse_Controls_Internal_WrappedLine*>(__this->_source)->_version;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Collections\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

List1_Enumerator__Fuse_Controls_TextEdit_LineCacheLine__uType* List1_Enumerator__Fuse_Controls_TextEdit_LineCacheLine__typeof()
{
    static ::uStaticStrong<List1_Enumerator__Fuse_Controls_TextEdit_LineCacheLine__uType*> type;
    if (type != NULL) return type;

    type = (List1_Enumerator__Fuse_Controls_TextEdit_LineCacheLine__uType*)::uAllocStructType(sizeof(List1_Enumerator__Fuse_Controls_TextEdit_LineCacheLine__uType), "Uno.Collections.List<Fuse.Controls.TextEdit.LineCacheLine>.Enumerator", sizeof(List1_Enumerator__Fuse_Controls_TextEdit_LineCacheLine), 3, 2, 0);

    type->__interface_2.__fp_Reset = (void(*)(void*))List1_Enumerator__Fuse_Controls_TextEdit_LineCacheLine__Uno_Collections_IEnumerator_Reset;
    type->__interface_0.__fp_get_Current = (::app::Fuse::Controls::TextEdit::LineCacheLine*(*)(void*))List1_Enumerator__Fuse_Controls_TextEdit_LineCacheLine__get_Current;
    type->__interface_1.__fp_Dispose = (void(*)(void*))List1_Enumerator__Fuse_Controls_TextEdit_LineCacheLine__Dispose;
    type->__interface_2.__fp_MoveNext = (bool(*)(void*))List1_Enumerator__Fuse_Controls_TextEdit_LineCacheLine__MoveNext;

    type->SetInterfaces(
        ::app::Uno::Collections::IEnumerator__Fuse_Controls_TextEdit_LineCacheLine__typeof(), offsetof(List1_Enumerator__Fuse_Controls_TextEdit_LineCacheLine__uType, __interface_0),
        ::app::Uno::IDisposable__typeof(), offsetof(List1_Enumerator__Fuse_Controls_TextEdit_LineCacheLine__uType, __interface_1),
        ::app::Uno::Collections::IEnumerator__typeof(), offsetof(List1_Enumerator__Fuse_Controls_TextEdit_LineCacheLine__uType, __interface_2));

    type->SetStrongRefs(
        "_current", offsetof(List1_Enumerator__Fuse_Controls_TextEdit_LineCacheLine, _current),
        "_source", offsetof(List1_Enumerator__Fuse_Controls_TextEdit_LineCacheLine, _source));

    type->SetFields(4,
        ::uNewField("_current", NULL, offsetof(List1_Enumerator__Fuse_Controls_TextEdit_LineCacheLine, _current), ::app::Fuse::Controls::TextEdit::LineCacheLine__typeof()),
        ::uNewField("_iterator", NULL, offsetof(List1_Enumerator__Fuse_Controls_TextEdit_LineCacheLine, _iterator), ::app::Uno::Int__typeof()),
        ::uNewField("_source", NULL, offsetof(List1_Enumerator__Fuse_Controls_TextEdit_LineCacheLine, _source), ::app::Uno::Collections::List__Fuse_Controls_TextEdit_LineCacheLine__typeof()),
        ::uNewField("_version", NULL, offsetof(List1_Enumerator__Fuse_Controls_TextEdit_LineCacheLine, _version), ::app::Uno::Int__typeof()));

    type->SetFunctions(3,
        ::uNewFunctionVoid("Dispose", List1_Enumerator__Fuse_Controls_TextEdit_LineCacheLine__Dispose, 0, false),
        ::uNewFunction("get_Current", List1_Enumerator__Fuse_Controls_TextEdit_LineCacheLine__get_Current, 0, false, ::app::Fuse::Controls::TextEdit::LineCacheLine__typeof()),
        ::uNewFunction("MoveNext", List1_Enumerator__Fuse_Controls_TextEdit_LineCacheLine__MoveNext, 0, false, ::app::Uno::Bool__typeof()));

    ::uRegisterType(type);
    return type;
}

void List1_Enumerator__Fuse_Controls_TextEdit_LineCacheLine___ObjInit(List1_Enumerator__Fuse_Controls_TextEdit_LineCacheLine* __this, ::app::Uno::Collections::List__Fuse_Controls_TextEdit_LineCacheLine* source)
{
    __this->_source = source;
    __this->_version = ::uPtr< ::app::Uno::Collections::List__Fuse_Controls_TextEdit_LineCacheLine*>(source)->_version;
    __this->_iterator = -1;
}

void List1_Enumerator__Fuse_Controls_TextEdit_LineCacheLine__Dispose(List1_Enumerator__Fuse_Controls_TextEdit_LineCacheLine* __this)
{
}

::app::Fuse::Controls::TextEdit::LineCacheLine* List1_Enumerator__Fuse_Controls_TextEdit_LineCacheLine__get_Current(List1_Enumerator__Fuse_Controls_TextEdit_LineCacheLine* __this)
{
    return __this->_current;
}

bool List1_Enumerator__Fuse_Controls_TextEdit_LineCacheLine__MoveNext(List1_Enumerator__Fuse_Controls_TextEdit_LineCacheLine* __this)
{
    if (::uPtr< ::app::Uno::Collections::List__Fuse_Controls_TextEdit_LineCacheLine*>(__this->_source)->_version != __this->_version)
    {
        U_THROW(::app::Uno::InvalidOperationException__New_4(NULL, ::uGetConstString("Collection was modified")));
    }

    __this->_iterator++;

    if (__this->_iterator < ::uPtr< ::app::Uno::Collections::List__Fuse_Controls_TextEdit_LineCacheLine*>(__this->_source)->_used)
    {
        __this->_current = ::uPtr< ::uArray*>(::uPtr< ::app::Uno::Collections::List__Fuse_Controls_TextEdit_LineCacheLine*>(__this->_source)->_data)->Item< ::app::Fuse::Controls::TextEdit::LineCacheLine*>(__this->_iterator);
        return true;
    }

    return false;
}

List1_Enumerator__Fuse_Controls_TextEdit_LineCacheLine List1_Enumerator__Fuse_Controls_TextEdit_LineCacheLine__New_1(::uStatic* __this, ::app::Uno::Collections::List__Fuse_Controls_TextEdit_LineCacheLine* source)
{
    List1_Enumerator__Fuse_Controls_TextEdit_LineCacheLine inst = ::uDefault< List1_Enumerator__Fuse_Controls_TextEdit_LineCacheLine>();
    inst._ObjInit(source);
    return inst;
}

void List1_Enumerator__Fuse_Controls_TextEdit_LineCacheLine__Uno_Collections_IEnumerator_Reset(List1_Enumerator__Fuse_Controls_TextEdit_LineCacheLine* __this)
{
    __this->_iterator = -1;
    __this->_current = NULL;
    __this->_version = ::uPtr< ::app::Uno::Collections::List__Fuse_Controls_TextEdit_LineCacheLine*>(__this->_source)->_version;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Collections\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

List1_Enumerator__Fuse_Drawing_Batching_Batch__uType* List1_Enumerator__Fuse_Drawing_Batching_Batch__typeof()
{
    static ::uStaticStrong<List1_Enumerator__Fuse_Drawing_Batching_Batch__uType*> type;
    if (type != NULL) return type;

    type = (List1_Enumerator__Fuse_Drawing_Batching_Batch__uType*)::uAllocStructType(sizeof(List1_Enumerator__Fuse_Drawing_Batching_Batch__uType), "Uno.Collections.List<Fuse.Drawing.Batching.Batch>.Enumerator", sizeof(List1_Enumerator__Fuse_Drawing_Batching_Batch), 3, 2, 0);

    type->__interface_2.__fp_Reset = (void(*)(void*))List1_Enumerator__Fuse_Drawing_Batching_Batch__Uno_Collections_IEnumerator_Reset;
    type->__interface_0.__fp_get_Current = (::app::Fuse::Drawing::Batching::Batch*(*)(void*))List1_Enumerator__Fuse_Drawing_Batching_Batch__get_Current;
    type->__interface_1.__fp_Dispose = (void(*)(void*))List1_Enumerator__Fuse_Drawing_Batching_Batch__Dispose;
    type->__interface_2.__fp_MoveNext = (bool(*)(void*))List1_Enumerator__Fuse_Drawing_Batching_Batch__MoveNext;

    type->SetInterfaces(
        ::app::Uno::Collections::IEnumerator__Fuse_Drawing_Batching_Batch__typeof(), offsetof(List1_Enumerator__Fuse_Drawing_Batching_Batch__uType, __interface_0),
        ::app::Uno::IDisposable__typeof(), offsetof(List1_Enumerator__Fuse_Drawing_Batching_Batch__uType, __interface_1),
        ::app::Uno::Collections::IEnumerator__typeof(), offsetof(List1_Enumerator__Fuse_Drawing_Batching_Batch__uType, __interface_2));

    type->SetStrongRefs(
        "_current", offsetof(List1_Enumerator__Fuse_Drawing_Batching_Batch, _current),
        "_source", offsetof(List1_Enumerator__Fuse_Drawing_Batching_Batch, _source));

    type->SetFields(4,
        ::uNewField("_current", NULL, offsetof(List1_Enumerator__Fuse_Drawing_Batching_Batch, _current), ::app::Fuse::Drawing::Batching::Batch__typeof()),
        ::uNewField("_iterator", NULL, offsetof(List1_Enumerator__Fuse_Drawing_Batching_Batch, _iterator), ::app::Uno::Int__typeof()),
        ::uNewField("_source", NULL, offsetof(List1_Enumerator__Fuse_Drawing_Batching_Batch, _source), ::app::Uno::Collections::List__Fuse_Drawing_Batching_Batch__typeof()),
        ::uNewField("_version", NULL, offsetof(List1_Enumerator__Fuse_Drawing_Batching_Batch, _version), ::app::Uno::Int__typeof()));

    type->SetFunctions(3,
        ::uNewFunctionVoid("Dispose", List1_Enumerator__Fuse_Drawing_Batching_Batch__Dispose, 0, false),
        ::uNewFunction("get_Current", List1_Enumerator__Fuse_Drawing_Batching_Batch__get_Current, 0, false, ::app::Fuse::Drawing::Batching::Batch__typeof()),
        ::uNewFunction("MoveNext", List1_Enumerator__Fuse_Drawing_Batching_Batch__MoveNext, 0, false, ::app::Uno::Bool__typeof()));

    ::uRegisterType(type);
    return type;
}

void List1_Enumerator__Fuse_Drawing_Batching_Batch___ObjInit(List1_Enumerator__Fuse_Drawing_Batching_Batch* __this, ::app::Uno::Collections::List__Fuse_Drawing_Batching_Batch* source)
{
    __this->_source = source;
    __this->_version = ::uPtr< ::app::Uno::Collections::List__Fuse_Drawing_Batching_Batch*>(source)->_version;
    __this->_iterator = -1;
}

void List1_Enumerator__Fuse_Drawing_Batching_Batch__Dispose(List1_Enumerator__Fuse_Drawing_Batching_Batch* __this)
{
}

::app::Fuse::Drawing::Batching::Batch* List1_Enumerator__Fuse_Drawing_Batching_Batch__get_Current(List1_Enumerator__Fuse_Drawing_Batching_Batch* __this)
{
    return __this->_current;
}

bool List1_Enumerator__Fuse_Drawing_Batching_Batch__MoveNext(List1_Enumerator__Fuse_Drawing_Batching_Batch* __this)
{
    if (::uPtr< ::app::Uno::Collections::List__Fuse_Drawing_Batching_Batch*>(__this->_source)->_version != __this->_version)
    {
        U_THROW(::app::Uno::InvalidOperationException__New_4(NULL, ::uGetConstString("Collection was modified")));
    }

    __this->_iterator++;

    if (__this->_iterator < ::uPtr< ::app::Uno::Collections::List__Fuse_Drawing_Batching_Batch*>(__this->_source)->_used)
    {
        __this->_current = ::uPtr< ::uArray*>(::uPtr< ::app::Uno::Collections::List__Fuse_Drawing_Batching_Batch*>(__this->_source)->_data)->Item< ::app::Fuse::Drawing::Batching::Batch*>(__this->_iterator);
        return true;
    }

    return false;
}

List1_Enumerator__Fuse_Drawing_Batching_Batch List1_Enumerator__Fuse_Drawing_Batching_Batch__New_1(::uStatic* __this, ::app::Uno::Collections::List__Fuse_Drawing_Batching_Batch* source)
{
    List1_Enumerator__Fuse_Drawing_Batching_Batch inst = ::uDefault< List1_Enumerator__Fuse_Drawing_Batching_Batch>();
    inst._ObjInit(source);
    return inst;
}

void List1_Enumerator__Fuse_Drawing_Batching_Batch__Uno_Collections_IEnumerator_Reset(List1_Enumerator__Fuse_Drawing_Batching_Batch* __this)
{
    __this->_iterator = -1;
    __this->_current = NULL;
    __this->_version = ::uPtr< ::app::Uno::Collections::List__Fuse_Drawing_Batching_Batch*>(__this->_source)->_version;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Collections\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

List1_Enumerator__Fuse_Drawing_Batching_Entry__uType* List1_Enumerator__Fuse_Drawing_Batching_Entry__typeof()
{
    static ::uStaticStrong<List1_Enumerator__Fuse_Drawing_Batching_Entry__uType*> type;
    if (type != NULL) return type;

    type = (List1_Enumerator__Fuse_Drawing_Batching_Entry__uType*)::uAllocStructType(sizeof(List1_Enumerator__Fuse_Drawing_Batching_Entry__uType), "Uno.Collections.List<Fuse.Drawing.Batching.Entry>.Enumerator", sizeof(List1_Enumerator__Fuse_Drawing_Batching_Entry), 3, 2, 0);

    type->__interface_2.__fp_Reset = (void(*)(void*))List1_Enumerator__Fuse_Drawing_Batching_Entry__Uno_Collections_IEnumerator_Reset;
    type->__interface_0.__fp_get_Current = (::app::Fuse::Drawing::Batching::Entry*(*)(void*))List1_Enumerator__Fuse_Drawing_Batching_Entry__get_Current;
    type->__interface_1.__fp_Dispose = (void(*)(void*))List1_Enumerator__Fuse_Drawing_Batching_Entry__Dispose;
    type->__interface_2.__fp_MoveNext = (bool(*)(void*))List1_Enumerator__Fuse_Drawing_Batching_Entry__MoveNext;

    type->SetInterfaces(
        ::app::Uno::Collections::IEnumerator__Fuse_Drawing_Batching_Entry__typeof(), offsetof(List1_Enumerator__Fuse_Drawing_Batching_Entry__uType, __interface_0),
        ::app::Uno::IDisposable__typeof(), offsetof(List1_Enumerator__Fuse_Drawing_Batching_Entry__uType, __interface_1),
        ::app::Uno::Collections::IEnumerator__typeof(), offsetof(List1_Enumerator__Fuse_Drawing_Batching_Entry__uType, __interface_2));

    type->SetStrongRefs(
        "_current", offsetof(List1_Enumerator__Fuse_Drawing_Batching_Entry, _current),
        "_source", offsetof(List1_Enumerator__Fuse_Drawing_Batching_Entry, _source));

    type->SetFields(4,
        ::uNewField("_current", NULL, offsetof(List1_Enumerator__Fuse_Drawing_Batching_Entry, _current), ::app::Fuse::Drawing::Batching::Entry__typeof()),
        ::uNewField("_iterator", NULL, offsetof(List1_Enumerator__Fuse_Drawing_Batching_Entry, _iterator), ::app::Uno::Int__typeof()),
        ::uNewField("_source", NULL, offsetof(List1_Enumerator__Fuse_Drawing_Batching_Entry, _source), ::app::Uno::Collections::List__Fuse_Drawing_Batching_Entry__typeof()),
        ::uNewField("_version", NULL, offsetof(List1_Enumerator__Fuse_Drawing_Batching_Entry, _version), ::app::Uno::Int__typeof()));

    type->SetFunctions(3,
        ::uNewFunctionVoid("Dispose", List1_Enumerator__Fuse_Drawing_Batching_Entry__Dispose, 0, false),
        ::uNewFunction("get_Current", List1_Enumerator__Fuse_Drawing_Batching_Entry__get_Current, 0, false, ::app::Fuse::Drawing::Batching::Entry__typeof()),
        ::uNewFunction("MoveNext", List1_Enumerator__Fuse_Drawing_Batching_Entry__MoveNext, 0, false, ::app::Uno::Bool__typeof()));

    ::uRegisterType(type);
    return type;
}

void List1_Enumerator__Fuse_Drawing_Batching_Entry___ObjInit(List1_Enumerator__Fuse_Drawing_Batching_Entry* __this, ::app::Uno::Collections::List__Fuse_Drawing_Batching_Entry* source)
{
    __this->_source = source;
    __this->_version = ::uPtr< ::app::Uno::Collections::List__Fuse_Drawing_Batching_Entry*>(source)->_version;
    __this->_iterator = -1;
}

void List1_Enumerator__Fuse_Drawing_Batching_Entry__Dispose(List1_Enumerator__Fuse_Drawing_Batching_Entry* __this)
{
}

::app::Fuse::Drawing::Batching::Entry* List1_Enumerator__Fuse_Drawing_Batching_Entry__get_Current(List1_Enumerator__Fuse_Drawing_Batching_Entry* __this)
{
    return __this->_current;
}

bool List1_Enumerator__Fuse_Drawing_Batching_Entry__MoveNext(List1_Enumerator__Fuse_Drawing_Batching_Entry* __this)
{
    if (::uPtr< ::app::Uno::Collections::List__Fuse_Drawing_Batching_Entry*>(__this->_source)->_version != __this->_version)
    {
        U_THROW(::app::Uno::InvalidOperationException__New_4(NULL, ::uGetConstString("Collection was modified")));
    }

    __this->_iterator++;

    if (__this->_iterator < ::uPtr< ::app::Uno::Collections::List__Fuse_Drawing_Batching_Entry*>(__this->_source)->_used)
    {
        __this->_current = ::uPtr< ::uArray*>(::uPtr< ::app::Uno::Collections::List__Fuse_Drawing_Batching_Entry*>(__this->_source)->_data)->Item< ::app::Fuse::Drawing::Batching::Entry*>(__this->_iterator);
        return true;
    }

    return false;
}

List1_Enumerator__Fuse_Drawing_Batching_Entry List1_Enumerator__Fuse_Drawing_Batching_Entry__New_1(::uStatic* __this, ::app::Uno::Collections::List__Fuse_Drawing_Batching_Entry* source)
{
    List1_Enumerator__Fuse_Drawing_Batching_Entry inst = ::uDefault< List1_Enumerator__Fuse_Drawing_Batching_Entry>();
    inst._ObjInit(source);
    return inst;
}

void List1_Enumerator__Fuse_Drawing_Batching_Entry__Uno_Collections_IEnumerator_Reset(List1_Enumerator__Fuse_Drawing_Batching_Entry* __this)
{
    __this->_iterator = -1;
    __this->_current = NULL;
    __this->_version = ::uPtr< ::app::Uno::Collections::List__Fuse_Drawing_Batching_Entry*>(__this->_source)->_version;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Collections\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

List1_Enumerator__Fuse_Drawing_Brush__uType* List1_Enumerator__Fuse_Drawing_Brush__typeof()
{
    static ::uStaticStrong<List1_Enumerator__Fuse_Drawing_Brush__uType*> type;
    if (type != NULL) return type;

    type = (List1_Enumerator__Fuse_Drawing_Brush__uType*)::uAllocStructType(sizeof(List1_Enumerator__Fuse_Drawing_Brush__uType), "Uno.Collections.List<Fuse.Drawing.Brush>.Enumerator", sizeof(List1_Enumerator__Fuse_Drawing_Brush), 3, 2, 0);

    type->__interface_2.__fp_Reset = (void(*)(void*))List1_Enumerator__Fuse_Drawing_Brush__Uno_Collections_IEnumerator_Reset;
    type->__interface_0.__fp_get_Current = (::app::Fuse::Drawing::Brush*(*)(void*))List1_Enumerator__Fuse_Drawing_Brush__get_Current;
    type->__interface_1.__fp_Dispose = (void(*)(void*))List1_Enumerator__Fuse_Drawing_Brush__Dispose;
    type->__interface_2.__fp_MoveNext = (bool(*)(void*))List1_Enumerator__Fuse_Drawing_Brush__MoveNext;

    type->SetInterfaces(
        ::app::Uno::Collections::IEnumerator__Fuse_Drawing_Brush__typeof(), offsetof(List1_Enumerator__Fuse_Drawing_Brush__uType, __interface_0),
        ::app::Uno::IDisposable__typeof(), offsetof(List1_Enumerator__Fuse_Drawing_Brush__uType, __interface_1),
        ::app::Uno::Collections::IEnumerator__typeof(), offsetof(List1_Enumerator__Fuse_Drawing_Brush__uType, __interface_2));

    type->SetStrongRefs(
        "_current", offsetof(List1_Enumerator__Fuse_Drawing_Brush, _current),
        "_source", offsetof(List1_Enumerator__Fuse_Drawing_Brush, _source));

    type->SetFields(4,
        ::uNewField("_current", NULL, offsetof(List1_Enumerator__Fuse_Drawing_Brush, _current), ::app::Fuse::Drawing::Brush__typeof()),
        ::uNewField("_iterator", NULL, offsetof(List1_Enumerator__Fuse_Drawing_Brush, _iterator), ::app::Uno::Int__typeof()),
        ::uNewField("_source", NULL, offsetof(List1_Enumerator__Fuse_Drawing_Brush, _source), ::app::Uno::Collections::List__Fuse_Drawing_Brush__typeof()),
        ::uNewField("_version", NULL, offsetof(List1_Enumerator__Fuse_Drawing_Brush, _version), ::app::Uno::Int__typeof()));

    type->SetFunctions(3,
        ::uNewFunctionVoid("Dispose", List1_Enumerator__Fuse_Drawing_Brush__Dispose, 0, false),
        ::uNewFunction("get_Current", List1_Enumerator__Fuse_Drawing_Brush__get_Current, 0, false, ::app::Fuse::Drawing::Brush__typeof()),
        ::uNewFunction("MoveNext", List1_Enumerator__Fuse_Drawing_Brush__MoveNext, 0, false, ::app::Uno::Bool__typeof()));

    ::uRegisterType(type);
    return type;
}

void List1_Enumerator__Fuse_Drawing_Brush___ObjInit(List1_Enumerator__Fuse_Drawing_Brush* __this, ::app::Uno::Collections::List__Fuse_Drawing_Brush* source)
{
    __this->_source = source;
    __this->_version = ::uPtr< ::app::Uno::Collections::List__Fuse_Drawing_Brush*>(source)->_version;
    __this->_iterator = -1;
}

void List1_Enumerator__Fuse_Drawing_Brush__Dispose(List1_Enumerator__Fuse_Drawing_Brush* __this)
{
}

::app::Fuse::Drawing::Brush* List1_Enumerator__Fuse_Drawing_Brush__get_Current(List1_Enumerator__Fuse_Drawing_Brush* __this)
{
    return __this->_current;
}

bool List1_Enumerator__Fuse_Drawing_Brush__MoveNext(List1_Enumerator__Fuse_Drawing_Brush* __this)
{
    if (::uPtr< ::app::Uno::Collections::List__Fuse_Drawing_Brush*>(__this->_source)->_version != __this->_version)
    {
        U_THROW(::app::Uno::InvalidOperationException__New_4(NULL, ::uGetConstString("Collection was modified")));
    }

    __this->_iterator++;

    if (__this->_iterator < ::uPtr< ::app::Uno::Collections::List__Fuse_Drawing_Brush*>(__this->_source)->_used)
    {
        __this->_current = ::uPtr< ::uArray*>(::uPtr< ::app::Uno::Collections::List__Fuse_Drawing_Brush*>(__this->_source)->_data)->Item< ::app::Fuse::Drawing::Brush*>(__this->_iterator);
        return true;
    }

    return false;
}

List1_Enumerator__Fuse_Drawing_Brush List1_Enumerator__Fuse_Drawing_Brush__New_1(::uStatic* __this, ::app::Uno::Collections::List__Fuse_Drawing_Brush* source)
{
    List1_Enumerator__Fuse_Drawing_Brush inst = ::uDefault< List1_Enumerator__Fuse_Drawing_Brush>();
    inst._ObjInit(source);
    return inst;
}

void List1_Enumerator__Fuse_Drawing_Brush__Uno_Collections_IEnumerator_Reset(List1_Enumerator__Fuse_Drawing_Brush* __this)
{
    __this->_iterator = -1;
    __this->_current = NULL;
    __this->_version = ::uPtr< ::app::Uno::Collections::List__Fuse_Drawing_Brush*>(__this->_source)->_version;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Collections\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

List1_Enumerator__Fuse_Drawing_Contour__uType* List1_Enumerator__Fuse_Drawing_Contour__typeof()
{
    static ::uStaticStrong<List1_Enumerator__Fuse_Drawing_Contour__uType*> type;
    if (type != NULL) return type;

    type = (List1_Enumerator__Fuse_Drawing_Contour__uType*)::uAllocStructType(sizeof(List1_Enumerator__Fuse_Drawing_Contour__uType), "Uno.Collections.List<Fuse.Drawing.Contour>.Enumerator", sizeof(List1_Enumerator__Fuse_Drawing_Contour), 3, 2, 0);

    type->__interface_2.__fp_Reset = (void(*)(void*))List1_Enumerator__Fuse_Drawing_Contour__Uno_Collections_IEnumerator_Reset;
    type->__interface_0.__fp_get_Current = (::app::Fuse::Drawing::Contour*(*)(void*))List1_Enumerator__Fuse_Drawing_Contour__get_Current;
    type->__interface_1.__fp_Dispose = (void(*)(void*))List1_Enumerator__Fuse_Drawing_Contour__Dispose;
    type->__interface_2.__fp_MoveNext = (bool(*)(void*))List1_Enumerator__Fuse_Drawing_Contour__MoveNext;

    type->SetInterfaces(
        ::app::Uno::Collections::IEnumerator__Fuse_Drawing_Contour__typeof(), offsetof(List1_Enumerator__Fuse_Drawing_Contour__uType, __interface_0),
        ::app::Uno::IDisposable__typeof(), offsetof(List1_Enumerator__Fuse_Drawing_Contour__uType, __interface_1),
        ::app::Uno::Collections::IEnumerator__typeof(), offsetof(List1_Enumerator__Fuse_Drawing_Contour__uType, __interface_2));

    type->SetStrongRefs(
        "_current", offsetof(List1_Enumerator__Fuse_Drawing_Contour, _current),
        "_source", offsetof(List1_Enumerator__Fuse_Drawing_Contour, _source));

    type->SetFields(4,
        ::uNewField("_current", NULL, offsetof(List1_Enumerator__Fuse_Drawing_Contour, _current), ::app::Fuse::Drawing::Contour__typeof()),
        ::uNewField("_iterator", NULL, offsetof(List1_Enumerator__Fuse_Drawing_Contour, _iterator), ::app::Uno::Int__typeof()),
        ::uNewField("_source", NULL, offsetof(List1_Enumerator__Fuse_Drawing_Contour, _source), ::app::Uno::Collections::List__Fuse_Drawing_Contour__typeof()),
        ::uNewField("_version", NULL, offsetof(List1_Enumerator__Fuse_Drawing_Contour, _version), ::app::Uno::Int__typeof()));

    type->SetFunctions(3,
        ::uNewFunctionVoid("Dispose", List1_Enumerator__Fuse_Drawing_Contour__Dispose, 0, false),
        ::uNewFunction("get_Current", List1_Enumerator__Fuse_Drawing_Contour__get_Current, 0, false, ::app::Fuse::Drawing::Contour__typeof()),
        ::uNewFunction("MoveNext", List1_Enumerator__Fuse_Drawing_Contour__MoveNext, 0, false, ::app::Uno::Bool__typeof()));

    ::uRegisterType(type);
    return type;
}

void List1_Enumerator__Fuse_Drawing_Contour___ObjInit(List1_Enumerator__Fuse_Drawing_Contour* __this, ::app::Uno::Collections::List__Fuse_Drawing_Contour* source)
{
    __this->_source = source;
    __this->_version = ::uPtr< ::app::Uno::Collections::List__Fuse_Drawing_Contour*>(source)->_version;
    __this->_iterator = -1;
}

void List1_Enumerator__Fuse_Drawing_Contour__Dispose(List1_Enumerator__Fuse_Drawing_Contour* __this)
{
}

::app::Fuse::Drawing::Contour* List1_Enumerator__Fuse_Drawing_Contour__get_Current(List1_Enumerator__Fuse_Drawing_Contour* __this)
{
    return __this->_current;
}

bool List1_Enumerator__Fuse_Drawing_Contour__MoveNext(List1_Enumerator__Fuse_Drawing_Contour* __this)
{
    if (::uPtr< ::app::Uno::Collections::List__Fuse_Drawing_Contour*>(__this->_source)->_version != __this->_version)
    {
        U_THROW(::app::Uno::InvalidOperationException__New_4(NULL, ::uGetConstString("Collection was modified")));
    }

    __this->_iterator++;

    if (__this->_iterator < ::uPtr< ::app::Uno::Collections::List__Fuse_Drawing_Contour*>(__this->_source)->_used)
    {
        __this->_current = ::uPtr< ::uArray*>(::uPtr< ::app::Uno::Collections::List__Fuse_Drawing_Contour*>(__this->_source)->_data)->Item< ::app::Fuse::Drawing::Contour*>(__this->_iterator);
        return true;
    }

    return false;
}

List1_Enumerator__Fuse_Drawing_Contour List1_Enumerator__Fuse_Drawing_Contour__New_1(::uStatic* __this, ::app::Uno::Collections::List__Fuse_Drawing_Contour* source)
{
    List1_Enumerator__Fuse_Drawing_Contour inst = ::uDefault< List1_Enumerator__Fuse_Drawing_Contour>();
    inst._ObjInit(source);
    return inst;
}

void List1_Enumerator__Fuse_Drawing_Contour__Uno_Collections_IEnumerator_Reset(List1_Enumerator__Fuse_Drawing_Contour* __this)
{
    __this->_iterator = -1;
    __this->_current = NULL;
    __this->_version = ::uPtr< ::app::Uno::Collections::List__Fuse_Drawing_Contour*>(__this->_source)->_version;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Collections\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

List1_Enumerator__Fuse_Drawing_GradientStop__uType* List1_Enumerator__Fuse_Drawing_GradientStop__typeof()
{
    static ::uStaticStrong<List1_Enumerator__Fuse_Drawing_GradientStop__uType*> type;
    if (type != NULL) return type;

    type = (List1_Enumerator__Fuse_Drawing_GradientStop__uType*)::uAllocStructType(sizeof(List1_Enumerator__Fuse_Drawing_GradientStop__uType), "Uno.Collections.List<Fuse.Drawing.GradientStop>.Enumerator", sizeof(List1_Enumerator__Fuse_Drawing_GradientStop), 3, 2, 0);

    type->__interface_2.__fp_Reset = (void(*)(void*))List1_Enumerator__Fuse_Drawing_GradientStop__Uno_Collections_IEnumerator_Reset;
    type->__interface_0.__fp_get_Current = (::app::Fuse::Drawing::GradientStop*(*)(void*))List1_Enumerator__Fuse_Drawing_GradientStop__get_Current;
    type->__interface_1.__fp_Dispose = (void(*)(void*))List1_Enumerator__Fuse_Drawing_GradientStop__Dispose;
    type->__interface_2.__fp_MoveNext = (bool(*)(void*))List1_Enumerator__Fuse_Drawing_GradientStop__MoveNext;

    type->SetInterfaces(
        ::app::Uno::Collections::IEnumerator__Fuse_Drawing_GradientStop__typeof(), offsetof(List1_Enumerator__Fuse_Drawing_GradientStop__uType, __interface_0),
        ::app::Uno::IDisposable__typeof(), offsetof(List1_Enumerator__Fuse_Drawing_GradientStop__uType, __interface_1),
        ::app::Uno::Collections::IEnumerator__typeof(), offsetof(List1_Enumerator__Fuse_Drawing_GradientStop__uType, __interface_2));

    type->SetStrongRefs(
        "_current", offsetof(List1_Enumerator__Fuse_Drawing_GradientStop, _current),
        "_source", offsetof(List1_Enumerator__Fuse_Drawing_GradientStop, _source));

    type->SetFields(4,
        ::uNewField("_current", NULL, offsetof(List1_Enumerator__Fuse_Drawing_GradientStop, _current), ::app::Fuse::Drawing::GradientStop__typeof()),
        ::uNewField("_iterator", NULL, offsetof(List1_Enumerator__Fuse_Drawing_GradientStop, _iterator), ::app::Uno::Int__typeof()),
        ::uNewField("_source", NULL, offsetof(List1_Enumerator__Fuse_Drawing_GradientStop, _source), ::app::Uno::Collections::List__Fuse_Drawing_GradientStop__typeof()),
        ::uNewField("_version", NULL, offsetof(List1_Enumerator__Fuse_Drawing_GradientStop, _version), ::app::Uno::Int__typeof()));

    type->SetFunctions(3,
        ::uNewFunctionVoid("Dispose", List1_Enumerator__Fuse_Drawing_GradientStop__Dispose, 0, false),
        ::uNewFunction("get_Current", List1_Enumerator__Fuse_Drawing_GradientStop__get_Current, 0, false, ::app::Fuse::Drawing::GradientStop__typeof()),
        ::uNewFunction("MoveNext", List1_Enumerator__Fuse_Drawing_GradientStop__MoveNext, 0, false, ::app::Uno::Bool__typeof()));

    ::uRegisterType(type);
    return type;
}

void List1_Enumerator__Fuse_Drawing_GradientStop___ObjInit(List1_Enumerator__Fuse_Drawing_GradientStop* __this, ::app::Uno::Collections::List__Fuse_Drawing_GradientStop* source)
{
    __this->_source = source;
    __this->_version = ::uPtr< ::app::Uno::Collections::List__Fuse_Drawing_GradientStop*>(source)->_version;
    __this->_iterator = -1;
}

void List1_Enumerator__Fuse_Drawing_GradientStop__Dispose(List1_Enumerator__Fuse_Drawing_GradientStop* __this)
{
}

::app::Fuse::Drawing::GradientStop* List1_Enumerator__Fuse_Drawing_GradientStop__get_Current(List1_Enumerator__Fuse_Drawing_GradientStop* __this)
{
    return __this->_current;
}

bool List1_Enumerator__Fuse_Drawing_GradientStop__MoveNext(List1_Enumerator__Fuse_Drawing_GradientStop* __this)
{
    if (::uPtr< ::app::Uno::Collections::List__Fuse_Drawing_GradientStop*>(__this->_source)->_version != __this->_version)
    {
        U_THROW(::app::Uno::InvalidOperationException__New_4(NULL, ::uGetConstString("Collection was modified")));
    }

    __this->_iterator++;

    if (__this->_iterator < ::uPtr< ::app::Uno::Collections::List__Fuse_Drawing_GradientStop*>(__this->_source)->_used)
    {
        __this->_current = ::uPtr< ::uArray*>(::uPtr< ::app::Uno::Collections::List__Fuse_Drawing_GradientStop*>(__this->_source)->_data)->Item< ::app::Fuse::Drawing::GradientStop*>(__this->_iterator);
        return true;
    }

    return false;
}

List1_Enumerator__Fuse_Drawing_GradientStop List1_Enumerator__Fuse_Drawing_GradientStop__New_1(::uStatic* __this, ::app::Uno::Collections::List__Fuse_Drawing_GradientStop* source)
{
    List1_Enumerator__Fuse_Drawing_GradientStop inst = ::uDefault< List1_Enumerator__Fuse_Drawing_GradientStop>();
    inst._ObjInit(source);
    return inst;
}

void List1_Enumerator__Fuse_Drawing_GradientStop__Uno_Collections_IEnumerator_Reset(List1_Enumerator__Fuse_Drawing_GradientStop* __this)
{
    __this->_iterator = -1;
    __this->_current = NULL;
    __this->_version = ::uPtr< ::app::Uno::Collections::List__Fuse_Drawing_GradientStop*>(__this->_source)->_version;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Collections\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

List1_Enumerator__Fuse_Drawing_PathGeometry__uType* List1_Enumerator__Fuse_Drawing_PathGeometry__typeof()
{
    static ::uStaticStrong<List1_Enumerator__Fuse_Drawing_PathGeometry__uType*> type;
    if (type != NULL) return type;

    type = (List1_Enumerator__Fuse_Drawing_PathGeometry__uType*)::uAllocStructType(sizeof(List1_Enumerator__Fuse_Drawing_PathGeometry__uType), "Uno.Collections.List<Fuse.Drawing.PathGeometry>.Enumerator", sizeof(List1_Enumerator__Fuse_Drawing_PathGeometry), 3, 2, 0);

    type->__interface_2.__fp_Reset = (void(*)(void*))List1_Enumerator__Fuse_Drawing_PathGeometry__Uno_Collections_IEnumerator_Reset;
    type->__interface_0.__fp_get_Current = (::app::Fuse::Drawing::PathGeometry*(*)(void*))List1_Enumerator__Fuse_Drawing_PathGeometry__get_Current;
    type->__interface_1.__fp_Dispose = (void(*)(void*))List1_Enumerator__Fuse_Drawing_PathGeometry__Dispose;
    type->__interface_2.__fp_MoveNext = (bool(*)(void*))List1_Enumerator__Fuse_Drawing_PathGeometry__MoveNext;

    type->SetInterfaces(
        ::app::Uno::Collections::IEnumerator__Fuse_Drawing_PathGeometry__typeof(), offsetof(List1_Enumerator__Fuse_Drawing_PathGeometry__uType, __interface_0),
        ::app::Uno::IDisposable__typeof(), offsetof(List1_Enumerator__Fuse_Drawing_PathGeometry__uType, __interface_1),
        ::app::Uno::Collections::IEnumerator__typeof(), offsetof(List1_Enumerator__Fuse_Drawing_PathGeometry__uType, __interface_2));

    type->SetStrongRefs(
        "_current", offsetof(List1_Enumerator__Fuse_Drawing_PathGeometry, _current),
        "_source", offsetof(List1_Enumerator__Fuse_Drawing_PathGeometry, _source));

    type->SetFields(4,
        ::uNewField("_current", NULL, offsetof(List1_Enumerator__Fuse_Drawing_PathGeometry, _current), ::app::Fuse::Drawing::PathGeometry__typeof()),
        ::uNewField("_iterator", NULL, offsetof(List1_Enumerator__Fuse_Drawing_PathGeometry, _iterator), ::app::Uno::Int__typeof()),
        ::uNewField("_source", NULL, offsetof(List1_Enumerator__Fuse_Drawing_PathGeometry, _source), ::app::Uno::Collections::List__Fuse_Drawing_PathGeometry__typeof()),
        ::uNewField("_version", NULL, offsetof(List1_Enumerator__Fuse_Drawing_PathGeometry, _version), ::app::Uno::Int__typeof()));

    type->SetFunctions(3,
        ::uNewFunctionVoid("Dispose", List1_Enumerator__Fuse_Drawing_PathGeometry__Dispose, 0, false),
        ::uNewFunction("get_Current", List1_Enumerator__Fuse_Drawing_PathGeometry__get_Current, 0, false, ::app::Fuse::Drawing::PathGeometry__typeof()),
        ::uNewFunction("MoveNext", List1_Enumerator__Fuse_Drawing_PathGeometry__MoveNext, 0, false, ::app::Uno::Bool__typeof()));

    ::uRegisterType(type);
    return type;
}

void List1_Enumerator__Fuse_Drawing_PathGeometry___ObjInit(List1_Enumerator__Fuse_Drawing_PathGeometry* __this, ::app::Uno::Collections::List__Fuse_Drawing_PathGeometry* source)
{
    __this->_source = source;
    __this->_version = ::uPtr< ::app::Uno::Collections::List__Fuse_Drawing_PathGeometry*>(source)->_version;
    __this->_iterator = -1;
}

void List1_Enumerator__Fuse_Drawing_PathGeometry__Dispose(List1_Enumerator__Fuse_Drawing_PathGeometry* __this)
{
}

::app::Fuse::Drawing::PathGeometry* List1_Enumerator__Fuse_Drawing_PathGeometry__get_Current(List1_Enumerator__Fuse_Drawing_PathGeometry* __this)
{
    return __this->_current;
}

bool List1_Enumerator__Fuse_Drawing_PathGeometry__MoveNext(List1_Enumerator__Fuse_Drawing_PathGeometry* __this)
{
    if (::uPtr< ::app::Uno::Collections::List__Fuse_Drawing_PathGeometry*>(__this->_source)->_version != __this->_version)
    {
        U_THROW(::app::Uno::InvalidOperationException__New_4(NULL, ::uGetConstString("Collection was modified")));
    }

    __this->_iterator++;

    if (__this->_iterator < ::uPtr< ::app::Uno::Collections::List__Fuse_Drawing_PathGeometry*>(__this->_source)->_used)
    {
        __this->_current = ::uPtr< ::uArray*>(::uPtr< ::app::Uno::Collections::List__Fuse_Drawing_PathGeometry*>(__this->_source)->_data)->Item< ::app::Fuse::Drawing::PathGeometry*>(__this->_iterator);
        return true;
    }

    return false;
}

List1_Enumerator__Fuse_Drawing_PathGeometry List1_Enumerator__Fuse_Drawing_PathGeometry__New_1(::uStatic* __this, ::app::Uno::Collections::List__Fuse_Drawing_PathGeometry* source)
{
    List1_Enumerator__Fuse_Drawing_PathGeometry inst = ::uDefault< List1_Enumerator__Fuse_Drawing_PathGeometry>();
    inst._ObjInit(source);
    return inst;
}

void List1_Enumerator__Fuse_Drawing_PathGeometry__Uno_Collections_IEnumerator_Reset(List1_Enumerator__Fuse_Drawing_PathGeometry* __this)
{
    __this->_iterator = -1;
    __this->_current = NULL;
    __this->_version = ::uPtr< ::app::Uno::Collections::List__Fuse_Drawing_PathGeometry*>(__this->_source)->_version;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Collections\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

List1_Enumerator__Fuse_Drawing_Stroke__uType* List1_Enumerator__Fuse_Drawing_Stroke__typeof()
{
    static ::uStaticStrong<List1_Enumerator__Fuse_Drawing_Stroke__uType*> type;
    if (type != NULL) return type;

    type = (List1_Enumerator__Fuse_Drawing_Stroke__uType*)::uAllocStructType(sizeof(List1_Enumerator__Fuse_Drawing_Stroke__uType), "Uno.Collections.List<Fuse.Drawing.Stroke>.Enumerator", sizeof(List1_Enumerator__Fuse_Drawing_Stroke), 3, 2, 0);

    type->__interface_2.__fp_Reset = (void(*)(void*))List1_Enumerator__Fuse_Drawing_Stroke__Uno_Collections_IEnumerator_Reset;
    type->__interface_0.__fp_get_Current = (::app::Fuse::Drawing::Stroke*(*)(void*))List1_Enumerator__Fuse_Drawing_Stroke__get_Current;
    type->__interface_1.__fp_Dispose = (void(*)(void*))List1_Enumerator__Fuse_Drawing_Stroke__Dispose;
    type->__interface_2.__fp_MoveNext = (bool(*)(void*))List1_Enumerator__Fuse_Drawing_Stroke__MoveNext;

    type->SetInterfaces(
        ::app::Uno::Collections::IEnumerator__Fuse_Drawing_Stroke__typeof(), offsetof(List1_Enumerator__Fuse_Drawing_Stroke__uType, __interface_0),
        ::app::Uno::IDisposable__typeof(), offsetof(List1_Enumerator__Fuse_Drawing_Stroke__uType, __interface_1),
        ::app::Uno::Collections::IEnumerator__typeof(), offsetof(List1_Enumerator__Fuse_Drawing_Stroke__uType, __interface_2));

    type->SetStrongRefs(
        "_current", offsetof(List1_Enumerator__Fuse_Drawing_Stroke, _current),
        "_source", offsetof(List1_Enumerator__Fuse_Drawing_Stroke, _source));

    type->SetFields(4,
        ::uNewField("_current", NULL, offsetof(List1_Enumerator__Fuse_Drawing_Stroke, _current), ::app::Fuse::Drawing::Stroke__typeof()),
        ::uNewField("_iterator", NULL, offsetof(List1_Enumerator__Fuse_Drawing_Stroke, _iterator), ::app::Uno::Int__typeof()),
        ::uNewField("_source", NULL, offsetof(List1_Enumerator__Fuse_Drawing_Stroke, _source), ::app::Uno::Collections::List__Fuse_Drawing_Stroke__typeof()),
        ::uNewField("_version", NULL, offsetof(List1_Enumerator__Fuse_Drawing_Stroke, _version), ::app::Uno::Int__typeof()));

    type->SetFunctions(3,
        ::uNewFunctionVoid("Dispose", List1_Enumerator__Fuse_Drawing_Stroke__Dispose, 0, false),
        ::uNewFunction("get_Current", List1_Enumerator__Fuse_Drawing_Stroke__get_Current, 0, false, ::app::Fuse::Drawing::Stroke__typeof()),
        ::uNewFunction("MoveNext", List1_Enumerator__Fuse_Drawing_Stroke__MoveNext, 0, false, ::app::Uno::Bool__typeof()));

    ::uRegisterType(type);
    return type;
}

void List1_Enumerator__Fuse_Drawing_Stroke___ObjInit(List1_Enumerator__Fuse_Drawing_Stroke* __this, ::app::Uno::Collections::List__Fuse_Drawing_Stroke* source)
{
    __this->_source = source;
    __this->_version = ::uPtr< ::app::Uno::Collections::List__Fuse_Drawing_Stroke*>(source)->_version;
    __this->_iterator = -1;
}

void List1_Enumerator__Fuse_Drawing_Stroke__Dispose(List1_Enumerator__Fuse_Drawing_Stroke* __this)
{
}

::app::Fuse::Drawing::Stroke* List1_Enumerator__Fuse_Drawing_Stroke__get_Current(List1_Enumerator__Fuse_Drawing_Stroke* __this)
{
    return __this->_current;
}

bool List1_Enumerator__Fuse_Drawing_Stroke__MoveNext(List1_Enumerator__Fuse_Drawing_Stroke* __this)
{
    if (::uPtr< ::app::Uno::Collections::List__Fuse_Drawing_Stroke*>(__this->_source)->_version != __this->_version)
    {
        U_THROW(::app::Uno::InvalidOperationException__New_4(NULL, ::uGetConstString("Collection was modified")));
    }

    __this->_iterator++;

    if (__this->_iterator < ::uPtr< ::app::Uno::Collections::List__Fuse_Drawing_Stroke*>(__this->_source)->_used)
    {
        __this->_current = ::uPtr< ::uArray*>(::uPtr< ::app::Uno::Collections::List__Fuse_Drawing_Stroke*>(__this->_source)->_data)->Item< ::app::Fuse::Drawing::Stroke*>(__this->_iterator);
        return true;
    }

    return false;
}

List1_Enumerator__Fuse_Drawing_Stroke List1_Enumerator__Fuse_Drawing_Stroke__New_1(::uStatic* __this, ::app::Uno::Collections::List__Fuse_Drawing_Stroke* source)
{
    List1_Enumerator__Fuse_Drawing_Stroke inst = ::uDefault< List1_Enumerator__Fuse_Drawing_Stroke>();
    inst._ObjInit(source);
    return inst;
}

void List1_Enumerator__Fuse_Drawing_Stroke__Uno_Collections_IEnumerator_Reset(List1_Enumerator__Fuse_Drawing_Stroke* __this)
{
    __this->_iterator = -1;
    __this->_current = NULL;
    __this->_version = ::uPtr< ::app::Uno::Collections::List__Fuse_Drawing_Stroke*>(__this->_source)->_version;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Collections\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

List1_Enumerator__Fuse_Effects_Effect__uType* List1_Enumerator__Fuse_Effects_Effect__typeof()
{
    static ::uStaticStrong<List1_Enumerator__Fuse_Effects_Effect__uType*> type;
    if (type != NULL) return type;

    type = (List1_Enumerator__Fuse_Effects_Effect__uType*)::uAllocStructType(sizeof(List1_Enumerator__Fuse_Effects_Effect__uType), "Uno.Collections.List<Fuse.Effects.Effect>.Enumerator", sizeof(List1_Enumerator__Fuse_Effects_Effect), 3, 2, 0);

    type->__interface_2.__fp_Reset = (void(*)(void*))List1_Enumerator__Fuse_Effects_Effect__Uno_Collections_IEnumerator_Reset;
    type->__interface_0.__fp_get_Current = (::app::Fuse::Effects::Effect*(*)(void*))List1_Enumerator__Fuse_Effects_Effect__get_Current;
    type->__interface_1.__fp_Dispose = (void(*)(void*))List1_Enumerator__Fuse_Effects_Effect__Dispose;
    type->__interface_2.__fp_MoveNext = (bool(*)(void*))List1_Enumerator__Fuse_Effects_Effect__MoveNext;

    type->SetInterfaces(
        ::app::Uno::Collections::IEnumerator__Fuse_Effects_Effect__typeof(), offsetof(List1_Enumerator__Fuse_Effects_Effect__uType, __interface_0),
        ::app::Uno::IDisposable__typeof(), offsetof(List1_Enumerator__Fuse_Effects_Effect__uType, __interface_1),
        ::app::Uno::Collections::IEnumerator__typeof(), offsetof(List1_Enumerator__Fuse_Effects_Effect__uType, __interface_2));

    type->SetStrongRefs(
        "_current", offsetof(List1_Enumerator__Fuse_Effects_Effect, _current),
        "_source", offsetof(List1_Enumerator__Fuse_Effects_Effect, _source));

    type->SetFields(4,
        ::uNewField("_current", NULL, offsetof(List1_Enumerator__Fuse_Effects_Effect, _current), ::app::Fuse::Effects::Effect__typeof()),
        ::uNewField("_iterator", NULL, offsetof(List1_Enumerator__Fuse_Effects_Effect, _iterator), ::app::Uno::Int__typeof()),
        ::uNewField("_source", NULL, offsetof(List1_Enumerator__Fuse_Effects_Effect, _source), ::app::Uno::Collections::List__Fuse_Effects_Effect__typeof()),
        ::uNewField("_version", NULL, offsetof(List1_Enumerator__Fuse_Effects_Effect, _version), ::app::Uno::Int__typeof()));

    type->SetFunctions(3,
        ::uNewFunctionVoid("Dispose", List1_Enumerator__Fuse_Effects_Effect__Dispose, 0, false),
        ::uNewFunction("get_Current", List1_Enumerator__Fuse_Effects_Effect__get_Current, 0, false, ::app::Fuse::Effects::Effect__typeof()),
        ::uNewFunction("MoveNext", List1_Enumerator__Fuse_Effects_Effect__MoveNext, 0, false, ::app::Uno::Bool__typeof()));

    ::uRegisterType(type);
    return type;
}

void List1_Enumerator__Fuse_Effects_Effect___ObjInit(List1_Enumerator__Fuse_Effects_Effect* __this, ::app::Uno::Collections::List__Fuse_Effects_Effect* source)
{
    __this->_source = source;
    __this->_version = ::uPtr< ::app::Uno::Collections::List__Fuse_Effects_Effect*>(source)->_version;
    __this->_iterator = -1;
}

void List1_Enumerator__Fuse_Effects_Effect__Dispose(List1_Enumerator__Fuse_Effects_Effect* __this)
{
}

::app::Fuse::Effects::Effect* List1_Enumerator__Fuse_Effects_Effect__get_Current(List1_Enumerator__Fuse_Effects_Effect* __this)
{
    return __this->_current;
}

bool List1_Enumerator__Fuse_Effects_Effect__MoveNext(List1_Enumerator__Fuse_Effects_Effect* __this)
{
    if (::uPtr< ::app::Uno::Collections::List__Fuse_Effects_Effect*>(__this->_source)->_version != __this->_version)
    {
        U_THROW(::app::Uno::InvalidOperationException__New_4(NULL, ::uGetConstString("Collection was modified")));
    }

    __this->_iterator++;

    if (__this->_iterator < ::uPtr< ::app::Uno::Collections::List__Fuse_Effects_Effect*>(__this->_source)->_used)
    {
        __this->_current = ::uPtr< ::uArray*>(::uPtr< ::app::Uno::Collections::List__Fuse_Effects_Effect*>(__this->_source)->_data)->Item< ::app::Fuse::Effects::Effect*>(__this->_iterator);
        return true;
    }

    return false;
}

List1_Enumerator__Fuse_Effects_Effect List1_Enumerator__Fuse_Effects_Effect__New_1(::uStatic* __this, ::app::Uno::Collections::List__Fuse_Effects_Effect* source)
{
    List1_Enumerator__Fuse_Effects_Effect inst = ::uDefault< List1_Enumerator__Fuse_Effects_Effect>();
    inst._ObjInit(source);
    return inst;
}

void List1_Enumerator__Fuse_Effects_Effect__Uno_Collections_IEnumerator_Reset(List1_Enumerator__Fuse_Effects_Effect* __this)
{
    __this->_iterator = -1;
    __this->_current = NULL;
    __this->_version = ::uPtr< ::app::Uno::Collections::List__Fuse_Effects_Effect*>(__this->_source)->_version;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Collections\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

List1_Enumerator__Fuse_Elements_Element__uType* List1_Enumerator__Fuse_Elements_Element__typeof()
{
    static ::uStaticStrong<List1_Enumerator__Fuse_Elements_Element__uType*> type;
    if (type != NULL) return type;

    type = (List1_Enumerator__Fuse_Elements_Element__uType*)::uAllocStructType(sizeof(List1_Enumerator__Fuse_Elements_Element__uType), "Uno.Collections.List<Fuse.Elements.Element>.Enumerator", sizeof(List1_Enumerator__Fuse_Elements_Element), 3, 2, 0);

    type->__interface_2.__fp_Reset = (void(*)(void*))List1_Enumerator__Fuse_Elements_Element__Uno_Collections_IEnumerator_Reset;
    type->__interface_0.__fp_get_Current = (::app::Fuse::Elements::Element*(*)(void*))List1_Enumerator__Fuse_Elements_Element__get_Current;
    type->__interface_1.__fp_Dispose = (void(*)(void*))List1_Enumerator__Fuse_Elements_Element__Dispose;
    type->__interface_2.__fp_MoveNext = (bool(*)(void*))List1_Enumerator__Fuse_Elements_Element__MoveNext;

    type->SetInterfaces(
        ::app::Uno::Collections::IEnumerator__Fuse_Elements_Element__typeof(), offsetof(List1_Enumerator__Fuse_Elements_Element__uType, __interface_0),
        ::app::Uno::IDisposable__typeof(), offsetof(List1_Enumerator__Fuse_Elements_Element__uType, __interface_1),
        ::app::Uno::Collections::IEnumerator__typeof(), offsetof(List1_Enumerator__Fuse_Elements_Element__uType, __interface_2));

    type->SetStrongRefs(
        "_current", offsetof(List1_Enumerator__Fuse_Elements_Element, _current),
        "_source", offsetof(List1_Enumerator__Fuse_Elements_Element, _source));

    type->SetFields(4,
        ::uNewField("_current", NULL, offsetof(List1_Enumerator__Fuse_Elements_Element, _current), ::app::Fuse::Elements::Element__typeof()),
        ::uNewField("_iterator", NULL, offsetof(List1_Enumerator__Fuse_Elements_Element, _iterator), ::app::Uno::Int__typeof()),
        ::uNewField("_source", NULL, offsetof(List1_Enumerator__Fuse_Elements_Element, _source), ::app::Uno::Collections::List__Fuse_Elements_Element__typeof()),
        ::uNewField("_version", NULL, offsetof(List1_Enumerator__Fuse_Elements_Element, _version), ::app::Uno::Int__typeof()));

    type->SetFunctions(3,
        ::uNewFunctionVoid("Dispose", List1_Enumerator__Fuse_Elements_Element__Dispose, 0, false),
        ::uNewFunction("get_Current", List1_Enumerator__Fuse_Elements_Element__get_Current, 0, false, ::app::Fuse::Elements::Element__typeof()),
        ::uNewFunction("MoveNext", List1_Enumerator__Fuse_Elements_Element__MoveNext, 0, false, ::app::Uno::Bool__typeof()));

    ::uRegisterType(type);
    return type;
}

void List1_Enumerator__Fuse_Elements_Element___ObjInit(List1_Enumerator__Fuse_Elements_Element* __this, ::app::Uno::Collections::List__Fuse_Elements_Element* source)
{
    __this->_source = source;
    __this->_version = ::uPtr< ::app::Uno::Collections::List__Fuse_Elements_Element*>(source)->_version;
    __this->_iterator = -1;
}

void List1_Enumerator__Fuse_Elements_Element__Dispose(List1_Enumerator__Fuse_Elements_Element* __this)
{
}

::app::Fuse::Elements::Element* List1_Enumerator__Fuse_Elements_Element__get_Current(List1_Enumerator__Fuse_Elements_Element* __this)
{
    return __this->_current;
}

bool List1_Enumerator__Fuse_Elements_Element__MoveNext(List1_Enumerator__Fuse_Elements_Element* __this)
{
    if (::uPtr< ::app::Uno::Collections::List__Fuse_Elements_Element*>(__this->_source)->_version != __this->_version)
    {
        U_THROW(::app::Uno::InvalidOperationException__New_4(NULL, ::uGetConstString("Collection was modified")));
    }

    __this->_iterator++;

    if (__this->_iterator < ::uPtr< ::app::Uno::Collections::List__Fuse_Elements_Element*>(__this->_source)->_used)
    {
        __this->_current = ::uPtr< ::uArray*>(::uPtr< ::app::Uno::Collections::List__Fuse_Elements_Element*>(__this->_source)->_data)->Item< ::app::Fuse::Elements::Element*>(__this->_iterator);
        return true;
    }

    return false;
}

List1_Enumerator__Fuse_Elements_Element List1_Enumerator__Fuse_Elements_Element__New_1(::uStatic* __this, ::app::Uno::Collections::List__Fuse_Elements_Element* source)
{
    List1_Enumerator__Fuse_Elements_Element inst = ::uDefault< List1_Enumerator__Fuse_Elements_Element>();
    inst._ObjInit(source);
    return inst;
}

void List1_Enumerator__Fuse_Elements_Element__Uno_Collections_IEnumerator_Reset(List1_Enumerator__Fuse_Elements_Element* __this)
{
    __this->_iterator = -1;
    __this->_current = NULL;
    __this->_version = ::uPtr< ::app::Uno::Collections::List__Fuse_Elements_Element*>(__this->_source)->_version;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Collections\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

List1_Enumerator__Fuse_Elements_ElementAtlas__uType* List1_Enumerator__Fuse_Elements_ElementAtlas__typeof()
{
    static ::uStaticStrong<List1_Enumerator__Fuse_Elements_ElementAtlas__uType*> type;
    if (type != NULL) return type;

    type = (List1_Enumerator__Fuse_Elements_ElementAtlas__uType*)::uAllocStructType(sizeof(List1_Enumerator__Fuse_Elements_ElementAtlas__uType), "Uno.Collections.List<Fuse.Elements.ElementAtlas>.Enumerator", sizeof(List1_Enumerator__Fuse_Elements_ElementAtlas), 3, 2, 0);

    type->__interface_2.__fp_Reset = (void(*)(void*))List1_Enumerator__Fuse_Elements_ElementAtlas__Uno_Collections_IEnumerator_Reset;
    type->__interface_0.__fp_get_Current = (::app::Fuse::Elements::ElementAtlas*(*)(void*))List1_Enumerator__Fuse_Elements_ElementAtlas__get_Current;
    type->__interface_1.__fp_Dispose = (void(*)(void*))List1_Enumerator__Fuse_Elements_ElementAtlas__Dispose;
    type->__interface_2.__fp_MoveNext = (bool(*)(void*))List1_Enumerator__Fuse_Elements_ElementAtlas__MoveNext;

    type->SetInterfaces(
        ::app::Uno::Collections::IEnumerator__Fuse_Elements_ElementAtlas__typeof(), offsetof(List1_Enumerator__Fuse_Elements_ElementAtlas__uType, __interface_0),
        ::app::Uno::IDisposable__typeof(), offsetof(List1_Enumerator__Fuse_Elements_ElementAtlas__uType, __interface_1),
        ::app::Uno::Collections::IEnumerator__typeof(), offsetof(List1_Enumerator__Fuse_Elements_ElementAtlas__uType, __interface_2));

    type->SetStrongRefs(
        "_current", offsetof(List1_Enumerator__Fuse_Elements_ElementAtlas, _current),
        "_source", offsetof(List1_Enumerator__Fuse_Elements_ElementAtlas, _source));

    type->SetFields(4,
        ::uNewField("_current", NULL, offsetof(List1_Enumerator__Fuse_Elements_ElementAtlas, _current), ::app::Fuse::Elements::ElementAtlas__typeof()),
        ::uNewField("_iterator", NULL, offsetof(List1_Enumerator__Fuse_Elements_ElementAtlas, _iterator), ::app::Uno::Int__typeof()),
        ::uNewField("_source", NULL, offsetof(List1_Enumerator__Fuse_Elements_ElementAtlas, _source), ::app::Uno::Collections::List__Fuse_Elements_ElementAtlas__typeof()),
        ::uNewField("_version", NULL, offsetof(List1_Enumerator__Fuse_Elements_ElementAtlas, _version), ::app::Uno::Int__typeof()));

    type->SetFunctions(3,
        ::uNewFunctionVoid("Dispose", List1_Enumerator__Fuse_Elements_ElementAtlas__Dispose, 0, false),
        ::uNewFunction("get_Current", List1_Enumerator__Fuse_Elements_ElementAtlas__get_Current, 0, false, ::app::Fuse::Elements::ElementAtlas__typeof()),
        ::uNewFunction("MoveNext", List1_Enumerator__Fuse_Elements_ElementAtlas__MoveNext, 0, false, ::app::Uno::Bool__typeof()));

    ::uRegisterType(type);
    return type;
}

void List1_Enumerator__Fuse_Elements_ElementAtlas___ObjInit(List1_Enumerator__Fuse_Elements_ElementAtlas* __this, ::app::Uno::Collections::List__Fuse_Elements_ElementAtlas* source)
{
    __this->_source = source;
    __this->_version = ::uPtr< ::app::Uno::Collections::List__Fuse_Elements_ElementAtlas*>(source)->_version;
    __this->_iterator = -1;
}

void List1_Enumerator__Fuse_Elements_ElementAtlas__Dispose(List1_Enumerator__Fuse_Elements_ElementAtlas* __this)
{
}

::app::Fuse::Elements::ElementAtlas* List1_Enumerator__Fuse_Elements_ElementAtlas__get_Current(List1_Enumerator__Fuse_Elements_ElementAtlas* __this)
{
    return __this->_current;
}

bool List1_Enumerator__Fuse_Elements_ElementAtlas__MoveNext(List1_Enumerator__Fuse_Elements_ElementAtlas* __this)
{
    if (::uPtr< ::app::Uno::Collections::List__Fuse_Elements_ElementAtlas*>(__this->_source)->_version != __this->_version)
    {
        U_THROW(::app::Uno::InvalidOperationException__New_4(NULL, ::uGetConstString("Collection was modified")));
    }

    __this->_iterator++;

    if (__this->_iterator < ::uPtr< ::app::Uno::Collections::List__Fuse_Elements_ElementAtlas*>(__this->_source)->_used)
    {
        __this->_current = ::uPtr< ::uArray*>(::uPtr< ::app::Uno::Collections::List__Fuse_Elements_ElementAtlas*>(__this->_source)->_data)->Item< ::app::Fuse::Elements::ElementAtlas*>(__this->_iterator);
        return true;
    }

    return false;
}

List1_Enumerator__Fuse_Elements_ElementAtlas List1_Enumerator__Fuse_Elements_ElementAtlas__New_1(::uStatic* __this, ::app::Uno::Collections::List__Fuse_Elements_ElementAtlas* source)
{
    List1_Enumerator__Fuse_Elements_ElementAtlas inst = ::uDefault< List1_Enumerator__Fuse_Elements_ElementAtlas>();
    inst._ObjInit(source);
    return inst;
}

void List1_Enumerator__Fuse_Elements_ElementAtlas__Uno_Collections_IEnumerator_Reset(List1_Enumerator__Fuse_Elements_ElementAtlas* __this)
{
    __this->_iterator = -1;
    __this->_current = NULL;
    __this->_version = ::uPtr< ::app::Uno::Collections::List__Fuse_Elements_ElementAtlas*>(__this->_source)->_version;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Collections\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

List1_Enumerator__Fuse_Elements_ElementBatch__uType* List1_Enumerator__Fuse_Elements_ElementBatch__typeof()
{
    static ::uStaticStrong<List1_Enumerator__Fuse_Elements_ElementBatch__uType*> type;
    if (type != NULL) return type;

    type = (List1_Enumerator__Fuse_Elements_ElementBatch__uType*)::uAllocStructType(sizeof(List1_Enumerator__Fuse_Elements_ElementBatch__uType), "Uno.Collections.List<Fuse.Elements.ElementBatch>.Enumerator", sizeof(List1_Enumerator__Fuse_Elements_ElementBatch), 3, 2, 0);

    type->__interface_2.__fp_Reset = (void(*)(void*))List1_Enumerator__Fuse_Elements_ElementBatch__Uno_Collections_IEnumerator_Reset;
    type->__interface_0.__fp_get_Current = (::app::Fuse::Elements::ElementBatch*(*)(void*))List1_Enumerator__Fuse_Elements_ElementBatch__get_Current;
    type->__interface_1.__fp_Dispose = (void(*)(void*))List1_Enumerator__Fuse_Elements_ElementBatch__Dispose;
    type->__interface_2.__fp_MoveNext = (bool(*)(void*))List1_Enumerator__Fuse_Elements_ElementBatch__MoveNext;

    type->SetInterfaces(
        ::app::Uno::Collections::IEnumerator__Fuse_Elements_ElementBatch__typeof(), offsetof(List1_Enumerator__Fuse_Elements_ElementBatch__uType, __interface_0),
        ::app::Uno::IDisposable__typeof(), offsetof(List1_Enumerator__Fuse_Elements_ElementBatch__uType, __interface_1),
        ::app::Uno::Collections::IEnumerator__typeof(), offsetof(List1_Enumerator__Fuse_Elements_ElementBatch__uType, __interface_2));

    type->SetStrongRefs(
        "_current", offsetof(List1_Enumerator__Fuse_Elements_ElementBatch, _current),
        "_source", offsetof(List1_Enumerator__Fuse_Elements_ElementBatch, _source));

    type->SetFields(4,
        ::uNewField("_current", NULL, offsetof(List1_Enumerator__Fuse_Elements_ElementBatch, _current), ::app::Fuse::Elements::ElementBatch__typeof()),
        ::uNewField("_iterator", NULL, offsetof(List1_Enumerator__Fuse_Elements_ElementBatch, _iterator), ::app::Uno::Int__typeof()),
        ::uNewField("_source", NULL, offsetof(List1_Enumerator__Fuse_Elements_ElementBatch, _source), ::app::Uno::Collections::List__Fuse_Elements_ElementBatch__typeof()),
        ::uNewField("_version", NULL, offsetof(List1_Enumerator__Fuse_Elements_ElementBatch, _version), ::app::Uno::Int__typeof()));

    type->SetFunctions(3,
        ::uNewFunctionVoid("Dispose", List1_Enumerator__Fuse_Elements_ElementBatch__Dispose, 0, false),
        ::uNewFunction("get_Current", List1_Enumerator__Fuse_Elements_ElementBatch__get_Current, 0, false, ::app::Fuse::Elements::ElementBatch__typeof()),
        ::uNewFunction("MoveNext", List1_Enumerator__Fuse_Elements_ElementBatch__MoveNext, 0, false, ::app::Uno::Bool__typeof()));

    ::uRegisterType(type);
    return type;
}

void List1_Enumerator__Fuse_Elements_ElementBatch___ObjInit(List1_Enumerator__Fuse_Elements_ElementBatch* __this, ::app::Uno::Collections::List__Fuse_Elements_ElementBatch* source)
{
    __this->_source = source;
    __this->_version = ::uPtr< ::app::Uno::Collections::List__Fuse_Elements_ElementBatch*>(source)->_version;
    __this->_iterator = -1;
}

void List1_Enumerator__Fuse_Elements_ElementBatch__Dispose(List1_Enumerator__Fuse_Elements_ElementBatch* __this)
{
}

::app::Fuse::Elements::ElementBatch* List1_Enumerator__Fuse_Elements_ElementBatch__get_Current(List1_Enumerator__Fuse_Elements_ElementBatch* __this)
{
    return __this->_current;
}

bool List1_Enumerator__Fuse_Elements_ElementBatch__MoveNext(List1_Enumerator__Fuse_Elements_ElementBatch* __this)
{
    if (::uPtr< ::app::Uno::Collections::List__Fuse_Elements_ElementBatch*>(__this->_source)->_version != __this->_version)
    {
        U_THROW(::app::Uno::InvalidOperationException__New_4(NULL, ::uGetConstString("Collection was modified")));
    }

    __this->_iterator++;

    if (__this->_iterator < ::uPtr< ::app::Uno::Collections::List__Fuse_Elements_ElementBatch*>(__this->_source)->_used)
    {
        __this->_current = ::uPtr< ::uArray*>(::uPtr< ::app::Uno::Collections::List__Fuse_Elements_ElementBatch*>(__this->_source)->_data)->Item< ::app::Fuse::Elements::ElementBatch*>(__this->_iterator);
        return true;
    }

    return false;
}

List1_Enumerator__Fuse_Elements_ElementBatch List1_Enumerator__Fuse_Elements_ElementBatch__New_1(::uStatic* __this, ::app::Uno::Collections::List__Fuse_Elements_ElementBatch* source)
{
    List1_Enumerator__Fuse_Elements_ElementBatch inst = ::uDefault< List1_Enumerator__Fuse_Elements_ElementBatch>();
    inst._ObjInit(source);
    return inst;
}

void List1_Enumerator__Fuse_Elements_ElementBatch__Uno_Collections_IEnumerator_Reset(List1_Enumerator__Fuse_Elements_ElementBatch* __this)
{
    __this->_iterator = -1;
    __this->_current = NULL;
    __this->_version = ::uPtr< ::app::Uno::Collections::List__Fuse_Elements_ElementBatch*>(__this->_source)->_version;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Collections\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

List1_Enumerator__Fuse_Elements_ElementBatchEntry__uType* List1_Enumerator__Fuse_Elements_ElementBatchEntry__typeof()
{
    static ::uStaticStrong<List1_Enumerator__Fuse_Elements_ElementBatchEntry__uType*> type;
    if (type != NULL) return type;

    type = (List1_Enumerator__Fuse_Elements_ElementBatchEntry__uType*)::uAllocStructType(sizeof(List1_Enumerator__Fuse_Elements_ElementBatchEntry__uType), "Uno.Collections.List<Fuse.Elements.ElementBatchEntry>.Enumerator", sizeof(List1_Enumerator__Fuse_Elements_ElementBatchEntry), 3, 2, 0);

    type->__interface_2.__fp_Reset = (void(*)(void*))List1_Enumerator__Fuse_Elements_ElementBatchEntry__Uno_Collections_IEnumerator_Reset;
    type->__interface_0.__fp_get_Current = (::app::Fuse::Elements::ElementBatchEntry*(*)(void*))List1_Enumerator__Fuse_Elements_ElementBatchEntry__get_Current;
    type->__interface_1.__fp_Dispose = (void(*)(void*))List1_Enumerator__Fuse_Elements_ElementBatchEntry__Dispose;
    type->__interface_2.__fp_MoveNext = (bool(*)(void*))List1_Enumerator__Fuse_Elements_ElementBatchEntry__MoveNext;

    type->SetInterfaces(
        ::app::Uno::Collections::IEnumerator__Fuse_Elements_ElementBatchEntry__typeof(), offsetof(List1_Enumerator__Fuse_Elements_ElementBatchEntry__uType, __interface_0),
        ::app::Uno::IDisposable__typeof(), offsetof(List1_Enumerator__Fuse_Elements_ElementBatchEntry__uType, __interface_1),
        ::app::Uno::Collections::IEnumerator__typeof(), offsetof(List1_Enumerator__Fuse_Elements_ElementBatchEntry__uType, __interface_2));

    type->SetStrongRefs(
        "_current", offsetof(List1_Enumerator__Fuse_Elements_ElementBatchEntry, _current),
        "_source", offsetof(List1_Enumerator__Fuse_Elements_ElementBatchEntry, _source));

    type->SetFields(4,
        ::uNewField("_current", NULL, offsetof(List1_Enumerator__Fuse_Elements_ElementBatchEntry, _current), ::app::Fuse::Elements::ElementBatchEntry__typeof()),
        ::uNewField("_iterator", NULL, offsetof(List1_Enumerator__Fuse_Elements_ElementBatchEntry, _iterator), ::app::Uno::Int__typeof()),
        ::uNewField("_source", NULL, offsetof(List1_Enumerator__Fuse_Elements_ElementBatchEntry, _source), ::app::Uno::Collections::List__Fuse_Elements_ElementBatchEntry__typeof()),
        ::uNewField("_version", NULL, offsetof(List1_Enumerator__Fuse_Elements_ElementBatchEntry, _version), ::app::Uno::Int__typeof()));

    type->SetFunctions(3,
        ::uNewFunctionVoid("Dispose", List1_Enumerator__Fuse_Elements_ElementBatchEntry__Dispose, 0, false),
        ::uNewFunction("get_Current", List1_Enumerator__Fuse_Elements_ElementBatchEntry__get_Current, 0, false, ::app::Fuse::Elements::ElementBatchEntry__typeof()),
        ::uNewFunction("MoveNext", List1_Enumerator__Fuse_Elements_ElementBatchEntry__MoveNext, 0, false, ::app::Uno::Bool__typeof()));

    ::uRegisterType(type);
    return type;
}

void List1_Enumerator__Fuse_Elements_ElementBatchEntry___ObjInit(List1_Enumerator__Fuse_Elements_ElementBatchEntry* __this, ::app::Uno::Collections::List__Fuse_Elements_ElementBatchEntry* source)
{
    __this->_source = source;
    __this->_version = ::uPtr< ::app::Uno::Collections::List__Fuse_Elements_ElementBatchEntry*>(source)->_version;
    __this->_iterator = -1;
}

void List1_Enumerator__Fuse_Elements_ElementBatchEntry__Dispose(List1_Enumerator__Fuse_Elements_ElementBatchEntry* __this)
{
}

::app::Fuse::Elements::ElementBatchEntry* List1_Enumerator__Fuse_Elements_ElementBatchEntry__get_Current(List1_Enumerator__Fuse_Elements_ElementBatchEntry* __this)
{
    return __this->_current;
}

bool List1_Enumerator__Fuse_Elements_ElementBatchEntry__MoveNext(List1_Enumerator__Fuse_Elements_ElementBatchEntry* __this)
{
    if (::uPtr< ::app::Uno::Collections::List__Fuse_Elements_ElementBatchEntry*>(__this->_source)->_version != __this->_version)
    {
        U_THROW(::app::Uno::InvalidOperationException__New_4(NULL, ::uGetConstString("Collection was modified")));
    }

    __this->_iterator++;

    if (__this->_iterator < ::uPtr< ::app::Uno::Collections::List__Fuse_Elements_ElementBatchEntry*>(__this->_source)->_used)
    {
        __this->_current = ::uPtr< ::uArray*>(::uPtr< ::app::Uno::Collections::List__Fuse_Elements_ElementBatchEntry*>(__this->_source)->_data)->Item< ::app::Fuse::Elements::ElementBatchEntry*>(__this->_iterator);
        return true;
    }

    return false;
}

List1_Enumerator__Fuse_Elements_ElementBatchEntry List1_Enumerator__Fuse_Elements_ElementBatchEntry__New_1(::uStatic* __this, ::app::Uno::Collections::List__Fuse_Elements_ElementBatchEntry* source)
{
    List1_Enumerator__Fuse_Elements_ElementBatchEntry inst = ::uDefault< List1_Enumerator__Fuse_Elements_ElementBatchEntry>();
    inst._ObjInit(source);
    return inst;
}

void List1_Enumerator__Fuse_Elements_ElementBatchEntry__Uno_Collections_IEnumerator_Reset(List1_Enumerator__Fuse_Elements_ElementBatchEntry* __this)
{
    __this->_iterator = -1;
    __this->_current = NULL;
    __this->_version = ::uPtr< ::app::Uno::Collections::List__Fuse_Elements_ElementBatchEntry*>(__this->_source)->_version;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Collections\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

List1_Enumerator__Fuse_Elements_IElementBatchDrawable__uType* List1_Enumerator__Fuse_Elements_IElementBatchDrawable__typeof()
{
    static ::uStaticStrong<List1_Enumerator__Fuse_Elements_IElementBatchDrawable__uType*> type;
    if (type != NULL) return type;

    type = (List1_Enumerator__Fuse_Elements_IElementBatchDrawable__uType*)::uAllocStructType(sizeof(List1_Enumerator__Fuse_Elements_IElementBatchDrawable__uType), "Uno.Collections.List<Fuse.Elements.IElementBatchDrawable>.Enumerator", sizeof(List1_Enumerator__Fuse_Elements_IElementBatchDrawable), 3, 2, 0);

    type->__interface_2.__fp_Reset = (void(*)(void*))List1_Enumerator__Fuse_Elements_IElementBatchDrawable__Uno_Collections_IEnumerator_Reset;
    type->__interface_0.__fp_get_Current = (::uObject*(*)(void*))List1_Enumerator__Fuse_Elements_IElementBatchDrawable__get_Current;
    type->__interface_1.__fp_Dispose = (void(*)(void*))List1_Enumerator__Fuse_Elements_IElementBatchDrawable__Dispose;
    type->__interface_2.__fp_MoveNext = (bool(*)(void*))List1_Enumerator__Fuse_Elements_IElementBatchDrawable__MoveNext;

    type->SetInterfaces(
        ::app::Uno::Collections::IEnumerator__Fuse_Elements_IElementBatchDrawable__typeof(), offsetof(List1_Enumerator__Fuse_Elements_IElementBatchDrawable__uType, __interface_0),
        ::app::Uno::IDisposable__typeof(), offsetof(List1_Enumerator__Fuse_Elements_IElementBatchDrawable__uType, __interface_1),
        ::app::Uno::Collections::IEnumerator__typeof(), offsetof(List1_Enumerator__Fuse_Elements_IElementBatchDrawable__uType, __interface_2));

    type->SetStrongRefs(
        "_current", offsetof(List1_Enumerator__Fuse_Elements_IElementBatchDrawable, _current),
        "_source", offsetof(List1_Enumerator__Fuse_Elements_IElementBatchDrawable, _source));

    type->SetFields(4,
        ::uNewField("_current", NULL, offsetof(List1_Enumerator__Fuse_Elements_IElementBatchDrawable, _current), ::app::Fuse::Elements::IElementBatchDrawable__typeof()),
        ::uNewField("_iterator", NULL, offsetof(List1_Enumerator__Fuse_Elements_IElementBatchDrawable, _iterator), ::app::Uno::Int__typeof()),
        ::uNewField("_source", NULL, offsetof(List1_Enumerator__Fuse_Elements_IElementBatchDrawable, _source), ::app::Uno::Collections::List__Fuse_Elements_IElementBatchDrawable__typeof()),
        ::uNewField("_version", NULL, offsetof(List1_Enumerator__Fuse_Elements_IElementBatchDrawable, _version), ::app::Uno::Int__typeof()));

    type->SetFunctions(3,
        ::uNewFunctionVoid("Dispose", List1_Enumerator__Fuse_Elements_IElementBatchDrawable__Dispose, 0, false),
        ::uNewFunction("get_Current", List1_Enumerator__Fuse_Elements_IElementBatchDrawable__get_Current, 0, false, ::app::Fuse::Elements::IElementBatchDrawable__typeof()),
        ::uNewFunction("MoveNext", List1_Enumerator__Fuse_Elements_IElementBatchDrawable__MoveNext, 0, false, ::app::Uno::Bool__typeof()));

    ::uRegisterType(type);
    return type;
}

void List1_Enumerator__Fuse_Elements_IElementBatchDrawable___ObjInit(List1_Enumerator__Fuse_Elements_IElementBatchDrawable* __this, ::app::Uno::Collections::List__Fuse_Elements_IElementBatchDrawable* source)
{
    __this->_source = source;
    __this->_version = ::uPtr< ::app::Uno::Collections::List__Fuse_Elements_IElementBatchDrawable*>(source)->_version;
    __this->_iterator = -1;
}

void List1_Enumerator__Fuse_Elements_IElementBatchDrawable__Dispose(List1_Enumerator__Fuse_Elements_IElementBatchDrawable* __this)
{
}

::uObject* List1_Enumerator__Fuse_Elements_IElementBatchDrawable__get_Current(List1_Enumerator__Fuse_Elements_IElementBatchDrawable* __this)
{
    return __this->_current;
}

bool List1_Enumerator__Fuse_Elements_IElementBatchDrawable__MoveNext(List1_Enumerator__Fuse_Elements_IElementBatchDrawable* __this)
{
    if (::uPtr< ::app::Uno::Collections::List__Fuse_Elements_IElementBatchDrawable*>(__this->_source)->_version != __this->_version)
    {
        U_THROW(::app::Uno::InvalidOperationException__New_4(NULL, ::uGetConstString("Collection was modified")));
    }

    __this->_iterator++;

    if (__this->_iterator < ::uPtr< ::app::Uno::Collections::List__Fuse_Elements_IElementBatchDrawable*>(__this->_source)->_used)
    {
        __this->_current = ::uPtr< ::uArray*>(::uPtr< ::app::Uno::Collections::List__Fuse_Elements_IElementBatchDrawable*>(__this->_source)->_data)->Item< ::uObject*>(__this->_iterator);
        return true;
    }

    return false;
}

List1_Enumerator__Fuse_Elements_IElementBatchDrawable List1_Enumerator__Fuse_Elements_IElementBatchDrawable__New_1(::uStatic* __this, ::app::Uno::Collections::List__Fuse_Elements_IElementBatchDrawable* source)
{
    List1_Enumerator__Fuse_Elements_IElementBatchDrawable inst = ::uDefault< List1_Enumerator__Fuse_Elements_IElementBatchDrawable>();
    inst._ObjInit(source);
    return inst;
}

void List1_Enumerator__Fuse_Elements_IElementBatchDrawable__Uno_Collections_IEnumerator_Reset(List1_Enumerator__Fuse_Elements_IElementBatchDrawable* __this)
{
    __this->_iterator = -1;
    __this->_current = NULL;
    __this->_version = ::uPtr< ::app::Uno::Collections::List__Fuse_Elements_IElementBatchDrawable*>(__this->_source)->_version;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Collections\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

List1_Enumerator__Fuse_Entities_Component__uType* List1_Enumerator__Fuse_Entities_Component__typeof()
{
    static ::uStaticStrong<List1_Enumerator__Fuse_Entities_Component__uType*> type;
    if (type != NULL) return type;

    type = (List1_Enumerator__Fuse_Entities_Component__uType*)::uAllocStructType(sizeof(List1_Enumerator__Fuse_Entities_Component__uType), "Uno.Collections.List<Fuse.Entities.Component>.Enumerator", sizeof(List1_Enumerator__Fuse_Entities_Component), 3, 2, 0);

    type->__interface_2.__fp_Reset = (void(*)(void*))List1_Enumerator__Fuse_Entities_Component__Uno_Collections_IEnumerator_Reset;
    type->__interface_0.__fp_get_Current = (::app::Fuse::Entities::Component*(*)(void*))List1_Enumerator__Fuse_Entities_Component__get_Current;
    type->__interface_1.__fp_Dispose = (void(*)(void*))List1_Enumerator__Fuse_Entities_Component__Dispose;
    type->__interface_2.__fp_MoveNext = (bool(*)(void*))List1_Enumerator__Fuse_Entities_Component__MoveNext;

    type->SetInterfaces(
        ::app::Uno::Collections::IEnumerator__Fuse_Entities_Component__typeof(), offsetof(List1_Enumerator__Fuse_Entities_Component__uType, __interface_0),
        ::app::Uno::IDisposable__typeof(), offsetof(List1_Enumerator__Fuse_Entities_Component__uType, __interface_1),
        ::app::Uno::Collections::IEnumerator__typeof(), offsetof(List1_Enumerator__Fuse_Entities_Component__uType, __interface_2));

    type->SetStrongRefs(
        "_current", offsetof(List1_Enumerator__Fuse_Entities_Component, _current),
        "_source", offsetof(List1_Enumerator__Fuse_Entities_Component, _source));

    type->SetFields(4,
        ::uNewField("_current", NULL, offsetof(List1_Enumerator__Fuse_Entities_Component, _current), ::app::Fuse::Entities::Component__typeof()),
        ::uNewField("_iterator", NULL, offsetof(List1_Enumerator__Fuse_Entities_Component, _iterator), ::app::Uno::Int__typeof()),
        ::uNewField("_source", NULL, offsetof(List1_Enumerator__Fuse_Entities_Component, _source), ::app::Uno::Collections::List__Fuse_Entities_Component__typeof()),
        ::uNewField("_version", NULL, offsetof(List1_Enumerator__Fuse_Entities_Component, _version), ::app::Uno::Int__typeof()));

    type->SetFunctions(3,
        ::uNewFunctionVoid("Dispose", List1_Enumerator__Fuse_Entities_Component__Dispose, 0, false),
        ::uNewFunction("get_Current", List1_Enumerator__Fuse_Entities_Component__get_Current, 0, false, ::app::Fuse::Entities::Component__typeof()),
        ::uNewFunction("MoveNext", List1_Enumerator__Fuse_Entities_Component__MoveNext, 0, false, ::app::Uno::Bool__typeof()));

    ::uRegisterType(type);
    return type;
}

void List1_Enumerator__Fuse_Entities_Component___ObjInit(List1_Enumerator__Fuse_Entities_Component* __this, ::app::Uno::Collections::List__Fuse_Entities_Component* source)
{
    __this->_source = source;
    __this->_version = ::uPtr< ::app::Uno::Collections::List__Fuse_Entities_Component*>(source)->_version;
    __this->_iterator = -1;
}

void List1_Enumerator__Fuse_Entities_Component__Dispose(List1_Enumerator__Fuse_Entities_Component* __this)
{
}

::app::Fuse::Entities::Component* List1_Enumerator__Fuse_Entities_Component__get_Current(List1_Enumerator__Fuse_Entities_Component* __this)
{
    return __this->_current;
}

bool List1_Enumerator__Fuse_Entities_Component__MoveNext(List1_Enumerator__Fuse_Entities_Component* __this)
{
    if (::uPtr< ::app::Uno::Collections::List__Fuse_Entities_Component*>(__this->_source)->_version != __this->_version)
    {
        U_THROW(::app::Uno::InvalidOperationException__New_4(NULL, ::uGetConstString("Collection was modified")));
    }

    __this->_iterator++;

    if (__this->_iterator < ::uPtr< ::app::Uno::Collections::List__Fuse_Entities_Component*>(__this->_source)->_used)
    {
        __this->_current = ::uPtr< ::uArray*>(::uPtr< ::app::Uno::Collections::List__Fuse_Entities_Component*>(__this->_source)->_data)->Item< ::app::Fuse::Entities::Component*>(__this->_iterator);
        return true;
    }

    return false;
}

List1_Enumerator__Fuse_Entities_Component List1_Enumerator__Fuse_Entities_Component__New_1(::uStatic* __this, ::app::Uno::Collections::List__Fuse_Entities_Component* source)
{
    List1_Enumerator__Fuse_Entities_Component inst = ::uDefault< List1_Enumerator__Fuse_Entities_Component>();
    inst._ObjInit(source);
    return inst;
}

void List1_Enumerator__Fuse_Entities_Component__Uno_Collections_IEnumerator_Reset(List1_Enumerator__Fuse_Entities_Component* __this)
{
    __this->_iterator = -1;
    __this->_current = NULL;
    __this->_version = ::uPtr< ::app::Uno::Collections::List__Fuse_Entities_Component*>(__this->_source)->_version;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Collections\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

List1_Enumerator__Fuse_Entities_Entity__uType* List1_Enumerator__Fuse_Entities_Entity__typeof()
{
    static ::uStaticStrong<List1_Enumerator__Fuse_Entities_Entity__uType*> type;
    if (type != NULL) return type;

    type = (List1_Enumerator__Fuse_Entities_Entity__uType*)::uAllocStructType(sizeof(List1_Enumerator__Fuse_Entities_Entity__uType), "Uno.Collections.List<Fuse.Entities.Entity>.Enumerator", sizeof(List1_Enumerator__Fuse_Entities_Entity), 3, 2, 0);

    type->__interface_2.__fp_Reset = (void(*)(void*))List1_Enumerator__Fuse_Entities_Entity__Uno_Collections_IEnumerator_Reset;
    type->__interface_0.__fp_get_Current = (::app::Fuse::Entities::Entity*(*)(void*))List1_Enumerator__Fuse_Entities_Entity__get_Current;
    type->__interface_1.__fp_Dispose = (void(*)(void*))List1_Enumerator__Fuse_Entities_Entity__Dispose;
    type->__interface_2.__fp_MoveNext = (bool(*)(void*))List1_Enumerator__Fuse_Entities_Entity__MoveNext;

    type->SetInterfaces(
        ::app::Uno::Collections::IEnumerator__Fuse_Entities_Entity__typeof(), offsetof(List1_Enumerator__Fuse_Entities_Entity__uType, __interface_0),
        ::app::Uno::IDisposable__typeof(), offsetof(List1_Enumerator__Fuse_Entities_Entity__uType, __interface_1),
        ::app::Uno::Collections::IEnumerator__typeof(), offsetof(List1_Enumerator__Fuse_Entities_Entity__uType, __interface_2));

    type->SetStrongRefs(
        "_current", offsetof(List1_Enumerator__Fuse_Entities_Entity, _current),
        "_source", offsetof(List1_Enumerator__Fuse_Entities_Entity, _source));

    type->SetFields(4,
        ::uNewField("_current", NULL, offsetof(List1_Enumerator__Fuse_Entities_Entity, _current), ::app::Fuse::Entities::Entity__typeof()),
        ::uNewField("_iterator", NULL, offsetof(List1_Enumerator__Fuse_Entities_Entity, _iterator), ::app::Uno::Int__typeof()),
        ::uNewField("_source", NULL, offsetof(List1_Enumerator__Fuse_Entities_Entity, _source), ::app::Uno::Collections::List__Fuse_Entities_Entity__typeof()),
        ::uNewField("_version", NULL, offsetof(List1_Enumerator__Fuse_Entities_Entity, _version), ::app::Uno::Int__typeof()));

    type->SetFunctions(3,
        ::uNewFunctionVoid("Dispose", List1_Enumerator__Fuse_Entities_Entity__Dispose, 0, false),
        ::uNewFunction("get_Current", List1_Enumerator__Fuse_Entities_Entity__get_Current, 0, false, ::app::Fuse::Entities::Entity__typeof()),
        ::uNewFunction("MoveNext", List1_Enumerator__Fuse_Entities_Entity__MoveNext, 0, false, ::app::Uno::Bool__typeof()));

    ::uRegisterType(type);
    return type;
}

void List1_Enumerator__Fuse_Entities_Entity___ObjInit(List1_Enumerator__Fuse_Entities_Entity* __this, ::app::Uno::Collections::List__Fuse_Entities_Entity* source)
{
    __this->_source = source;
    __this->_version = ::uPtr< ::app::Uno::Collections::List__Fuse_Entities_Entity*>(source)->_version;
    __this->_iterator = -1;
}

void List1_Enumerator__Fuse_Entities_Entity__Dispose(List1_Enumerator__Fuse_Entities_Entity* __this)
{
}

::app::Fuse::Entities::Entity* List1_Enumerator__Fuse_Entities_Entity__get_Current(List1_Enumerator__Fuse_Entities_Entity* __this)
{
    return __this->_current;
}

bool List1_Enumerator__Fuse_Entities_Entity__MoveNext(List1_Enumerator__Fuse_Entities_Entity* __this)
{
    if (::uPtr< ::app::Uno::Collections::List__Fuse_Entities_Entity*>(__this->_source)->_version != __this->_version)
    {
        U_THROW(::app::Uno::InvalidOperationException__New_4(NULL, ::uGetConstString("Collection was modified")));
    }

    __this->_iterator++;

    if (__this->_iterator < ::uPtr< ::app::Uno::Collections::List__Fuse_Entities_Entity*>(__this->_source)->_used)
    {
        __this->_current = ::uPtr< ::uArray*>(::uPtr< ::app::Uno::Collections::List__Fuse_Entities_Entity*>(__this->_source)->_data)->Item< ::app::Fuse::Entities::Entity*>(__this->_iterator);
        return true;
    }

    return false;
}

List1_Enumerator__Fuse_Entities_Entity List1_Enumerator__Fuse_Entities_Entity__New_1(::uStatic* __this, ::app::Uno::Collections::List__Fuse_Entities_Entity* source)
{
    List1_Enumerator__Fuse_Entities_Entity inst = ::uDefault< List1_Enumerator__Fuse_Entities_Entity>();
    inst._ObjInit(source);
    return inst;
}

void List1_Enumerator__Fuse_Entities_Entity__Uno_Collections_IEnumerator_Reset(List1_Enumerator__Fuse_Entities_Entity* __this)
{
    __this->_iterator = -1;
    __this->_current = NULL;
    __this->_version = ::uPtr< ::app::Uno::Collections::List__Fuse_Entities_Entity*>(__this->_source)->_version;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Collections\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

List1_Enumerator__Fuse_Entities_Entry__uType* List1_Enumerator__Fuse_Entities_Entry__typeof()
{
    static ::uStaticStrong<List1_Enumerator__Fuse_Entities_Entry__uType*> type;
    if (type != NULL) return type;

    type = (List1_Enumerator__Fuse_Entities_Entry__uType*)::uAllocStructType(sizeof(List1_Enumerator__Fuse_Entities_Entry__uType), "Uno.Collections.List<Fuse.Entities.Entry>.Enumerator", sizeof(List1_Enumerator__Fuse_Entities_Entry), 3, 2, 0);

    type->__interface_2.__fp_Reset = (void(*)(void*))List1_Enumerator__Fuse_Entities_Entry__Uno_Collections_IEnumerator_Reset;
    type->__interface_0.__fp_get_Current = (::app::Fuse::Entities::Entry(*)(void*))List1_Enumerator__Fuse_Entities_Entry__get_Current;
    type->__interface_1.__fp_Dispose = (void(*)(void*))List1_Enumerator__Fuse_Entities_Entry__Dispose;
    type->__interface_2.__fp_MoveNext = (bool(*)(void*))List1_Enumerator__Fuse_Entities_Entry__MoveNext;

    type->SetInterfaces(
        ::app::Uno::Collections::IEnumerator__Fuse_Entities_Entry__typeof(), offsetof(List1_Enumerator__Fuse_Entities_Entry__uType, __interface_0),
        ::app::Uno::IDisposable__typeof(), offsetof(List1_Enumerator__Fuse_Entities_Entry__uType, __interface_1),
        ::app::Uno::Collections::IEnumerator__typeof(), offsetof(List1_Enumerator__Fuse_Entities_Entry__uType, __interface_2));

    type->SetStrongRefs(
        "_current.Mesh", offsetof(List1_Enumerator__Fuse_Entities_Entry, _current.Mesh),
        "_source", offsetof(List1_Enumerator__Fuse_Entities_Entry, _source));

    type->SetFields(4,
        ::uNewField("_current", NULL, offsetof(List1_Enumerator__Fuse_Entities_Entry, _current), ::app::Fuse::Entities::Entry__typeof()),
        ::uNewField("_iterator", NULL, offsetof(List1_Enumerator__Fuse_Entities_Entry, _iterator), ::app::Uno::Int__typeof()),
        ::uNewField("_source", NULL, offsetof(List1_Enumerator__Fuse_Entities_Entry, _source), ::app::Uno::Collections::List__Fuse_Entities_Entry__typeof()),
        ::uNewField("_version", NULL, offsetof(List1_Enumerator__Fuse_Entities_Entry, _version), ::app::Uno::Int__typeof()));

    type->SetFunctions(3,
        ::uNewFunctionVoid("Dispose", List1_Enumerator__Fuse_Entities_Entry__Dispose, 0, false),
        ::uNewFunction("get_Current", List1_Enumerator__Fuse_Entities_Entry__get_Current, 0, false, ::app::Fuse::Entities::Entry__typeof()),
        ::uNewFunction("MoveNext", List1_Enumerator__Fuse_Entities_Entry__MoveNext, 0, false, ::app::Uno::Bool__typeof()));

    ::uRegisterType(type);
    return type;
}

void List1_Enumerator__Fuse_Entities_Entry___ObjInit(List1_Enumerator__Fuse_Entities_Entry* __this, ::app::Uno::Collections::List__Fuse_Entities_Entry* source)
{
    __this->_source = source;
    __this->_version = ::uPtr< ::app::Uno::Collections::List__Fuse_Entities_Entry*>(source)->_version;
    __this->_iterator = -1;
}

void List1_Enumerator__Fuse_Entities_Entry__Dispose(List1_Enumerator__Fuse_Entities_Entry* __this)
{
}

::app::Fuse::Entities::Entry List1_Enumerator__Fuse_Entities_Entry__get_Current(List1_Enumerator__Fuse_Entities_Entry* __this)
{
    return __this->_current;
}

bool List1_Enumerator__Fuse_Entities_Entry__MoveNext(List1_Enumerator__Fuse_Entities_Entry* __this)
{
    if (::uPtr< ::app::Uno::Collections::List__Fuse_Entities_Entry*>(__this->_source)->_version != __this->_version)
    {
        U_THROW(::app::Uno::InvalidOperationException__New_4(NULL, ::uGetConstString("Collection was modified")));
    }

    __this->_iterator++;

    if (__this->_iterator < ::uPtr< ::app::Uno::Collections::List__Fuse_Entities_Entry*>(__this->_source)->_used)
    {
        __this->_current = ::uPtr< ::uArray*>(::uPtr< ::app::Uno::Collections::List__Fuse_Entities_Entry*>(__this->_source)->_data)->Item< ::app::Fuse::Entities::Entry>(__this->_iterator);
        return true;
    }

    return false;
}

List1_Enumerator__Fuse_Entities_Entry List1_Enumerator__Fuse_Entities_Entry__New_1(::uStatic* __this, ::app::Uno::Collections::List__Fuse_Entities_Entry* source)
{
    List1_Enumerator__Fuse_Entities_Entry inst = ::uDefault< List1_Enumerator__Fuse_Entities_Entry>();
    inst._ObjInit(source);
    return inst;
}

void List1_Enumerator__Fuse_Entities_Entry__Uno_Collections_IEnumerator_Reset(List1_Enumerator__Fuse_Entities_Entry* __this)
{
    __this->_iterator = -1;
    __this->_current = ::uDefault< ::app::Fuse::Entities::Entry>();
    __this->_version = ::uPtr< ::app::Uno::Collections::List__Fuse_Entities_Entry*>(__this->_source)->_version;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Collections\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

List1_Enumerator__Fuse_Input_Capturer__uType* List1_Enumerator__Fuse_Input_Capturer__typeof()
{
    static ::uStaticStrong<List1_Enumerator__Fuse_Input_Capturer__uType*> type;
    if (type != NULL) return type;

    type = (List1_Enumerator__Fuse_Input_Capturer__uType*)::uAllocStructType(sizeof(List1_Enumerator__Fuse_Input_Capturer__uType), "Uno.Collections.List<Fuse.Input.Capturer>.Enumerator", sizeof(List1_Enumerator__Fuse_Input_Capturer), 3, 2, 0);

    type->__interface_2.__fp_Reset = (void(*)(void*))List1_Enumerator__Fuse_Input_Capturer__Uno_Collections_IEnumerator_Reset;
    type->__interface_0.__fp_get_Current = (::app::Fuse::Input::Capturer*(*)(void*))List1_Enumerator__Fuse_Input_Capturer__get_Current;
    type->__interface_1.__fp_Dispose = (void(*)(void*))List1_Enumerator__Fuse_Input_Capturer__Dispose;
    type->__interface_2.__fp_MoveNext = (bool(*)(void*))List1_Enumerator__Fuse_Input_Capturer__MoveNext;

    type->SetInterfaces(
        ::app::Uno::Collections::IEnumerator__Fuse_Input_Capturer__typeof(), offsetof(List1_Enumerator__Fuse_Input_Capturer__uType, __interface_0),
        ::app::Uno::IDisposable__typeof(), offsetof(List1_Enumerator__Fuse_Input_Capturer__uType, __interface_1),
        ::app::Uno::Collections::IEnumerator__typeof(), offsetof(List1_Enumerator__Fuse_Input_Capturer__uType, __interface_2));

    type->SetStrongRefs(
        "_current", offsetof(List1_Enumerator__Fuse_Input_Capturer, _current),
        "_source", offsetof(List1_Enumerator__Fuse_Input_Capturer, _source));

    type->SetFields(4,
        ::uNewField("_current", NULL, offsetof(List1_Enumerator__Fuse_Input_Capturer, _current), ::app::Fuse::Input::Capturer__typeof()),
        ::uNewField("_iterator", NULL, offsetof(List1_Enumerator__Fuse_Input_Capturer, _iterator), ::app::Uno::Int__typeof()),
        ::uNewField("_source", NULL, offsetof(List1_Enumerator__Fuse_Input_Capturer, _source), ::app::Uno::Collections::List__Fuse_Input_Capturer__typeof()),
        ::uNewField("_version", NULL, offsetof(List1_Enumerator__Fuse_Input_Capturer, _version), ::app::Uno::Int__typeof()));

    type->SetFunctions(3,
        ::uNewFunctionVoid("Dispose", List1_Enumerator__Fuse_Input_Capturer__Dispose, 0, false),
        ::uNewFunction("get_Current", List1_Enumerator__Fuse_Input_Capturer__get_Current, 0, false, ::app::Fuse::Input::Capturer__typeof()),
        ::uNewFunction("MoveNext", List1_Enumerator__Fuse_Input_Capturer__MoveNext, 0, false, ::app::Uno::Bool__typeof()));

    ::uRegisterType(type);
    return type;
}

void List1_Enumerator__Fuse_Input_Capturer___ObjInit(List1_Enumerator__Fuse_Input_Capturer* __this, ::app::Uno::Collections::List__Fuse_Input_Capturer* source)
{
    __this->_source = source;
    __this->_version = ::uPtr< ::app::Uno::Collections::List__Fuse_Input_Capturer*>(source)->_version;
    __this->_iterator = -1;
}

void List1_Enumerator__Fuse_Input_Capturer__Dispose(List1_Enumerator__Fuse_Input_Capturer* __this)
{
}

::app::Fuse::Input::Capturer* List1_Enumerator__Fuse_Input_Capturer__get_Current(List1_Enumerator__Fuse_Input_Capturer* __this)
{
    return __this->_current;
}

bool List1_Enumerator__Fuse_Input_Capturer__MoveNext(List1_Enumerator__Fuse_Input_Capturer* __this)
{
    if (::uPtr< ::app::Uno::Collections::List__Fuse_Input_Capturer*>(__this->_source)->_version != __this->_version)
    {
        U_THROW(::app::Uno::InvalidOperationException__New_4(NULL, ::uGetConstString("Collection was modified")));
    }

    __this->_iterator++;

    if (__this->_iterator < ::uPtr< ::app::Uno::Collections::List__Fuse_Input_Capturer*>(__this->_source)->_used)
    {
        __this->_current = ::uPtr< ::uArray*>(::uPtr< ::app::Uno::Collections::List__Fuse_Input_Capturer*>(__this->_source)->_data)->Item< ::app::Fuse::Input::Capturer*>(__this->_iterator);
        return true;
    }

    return false;
}

List1_Enumerator__Fuse_Input_Capturer List1_Enumerator__Fuse_Input_Capturer__New_1(::uStatic* __this, ::app::Uno::Collections::List__Fuse_Input_Capturer* source)
{
    List1_Enumerator__Fuse_Input_Capturer inst = ::uDefault< List1_Enumerator__Fuse_Input_Capturer>();
    inst._ObjInit(source);
    return inst;
}

void List1_Enumerator__Fuse_Input_Capturer__Uno_Collections_IEnumerator_Reset(List1_Enumerator__Fuse_Input_Capturer* __this)
{
    __this->_iterator = -1;
    __this->_current = NULL;
    __this->_version = ::uPtr< ::app::Uno::Collections::List__Fuse_Input_Capturer*>(__this->_source)->_version;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Collections\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

List1_Enumerator__Fuse_Input_FocusGainedHandler__uType* List1_Enumerator__Fuse_Input_FocusGainedHandler__typeof()
{
    static ::uStaticStrong<List1_Enumerator__Fuse_Input_FocusGainedHandler__uType*> type;
    if (type != NULL) return type;

    type = (List1_Enumerator__Fuse_Input_FocusGainedHandler__uType*)::uAllocStructType(sizeof(List1_Enumerator__Fuse_Input_FocusGainedHandler__uType), "Uno.Collections.List<Fuse.Input.FocusGainedHandler>.Enumerator", sizeof(List1_Enumerator__Fuse_Input_FocusGainedHandler), 3, 2, 0);

    type->__interface_2.__fp_Reset = (void(*)(void*))List1_Enumerator__Fuse_Input_FocusGainedHandler__Uno_Collections_IEnumerator_Reset;
    type->__interface_0.__fp_get_Current = (::uDelegate*(*)(void*))List1_Enumerator__Fuse_Input_FocusGainedHandler__get_Current;
    type->__interface_1.__fp_Dispose = (void(*)(void*))List1_Enumerator__Fuse_Input_FocusGainedHandler__Dispose;
    type->__interface_2.__fp_MoveNext = (bool(*)(void*))List1_Enumerator__Fuse_Input_FocusGainedHandler__MoveNext;

    type->SetInterfaces(
        ::app::Uno::Collections::IEnumerator__Fuse_Input_FocusGainedHandler__typeof(), offsetof(List1_Enumerator__Fuse_Input_FocusGainedHandler__uType, __interface_0),
        ::app::Uno::IDisposable__typeof(), offsetof(List1_Enumerator__Fuse_Input_FocusGainedHandler__uType, __interface_1),
        ::app::Uno::Collections::IEnumerator__typeof(), offsetof(List1_Enumerator__Fuse_Input_FocusGainedHandler__uType, __interface_2));

    type->SetStrongRefs(
        "_current", offsetof(List1_Enumerator__Fuse_Input_FocusGainedHandler, _current),
        "_source", offsetof(List1_Enumerator__Fuse_Input_FocusGainedHandler, _source));

    type->SetFields(4,
        ::uNewField("_current", NULL, offsetof(List1_Enumerator__Fuse_Input_FocusGainedHandler, _current), ::app::Fuse::Input::FocusGainedHandler__typeof()),
        ::uNewField("_iterator", NULL, offsetof(List1_Enumerator__Fuse_Input_FocusGainedHandler, _iterator), ::app::Uno::Int__typeof()),
        ::uNewField("_source", NULL, offsetof(List1_Enumerator__Fuse_Input_FocusGainedHandler, _source), ::app::Uno::Collections::List__Fuse_Input_FocusGainedHandler__typeof()),
        ::uNewField("_version", NULL, offsetof(List1_Enumerator__Fuse_Input_FocusGainedHandler, _version), ::app::Uno::Int__typeof()));

    type->SetFunctions(3,
        ::uNewFunctionVoid("Dispose", List1_Enumerator__Fuse_Input_FocusGainedHandler__Dispose, 0, false),
        ::uNewFunction("get_Current", List1_Enumerator__Fuse_Input_FocusGainedHandler__get_Current, 0, false, ::app::Fuse::Input::FocusGainedHandler__typeof()),
        ::uNewFunction("MoveNext", List1_Enumerator__Fuse_Input_FocusGainedHandler__MoveNext, 0, false, ::app::Uno::Bool__typeof()));

    ::uRegisterType(type);
    return type;
}

void List1_Enumerator__Fuse_Input_FocusGainedHandler___ObjInit(List1_Enumerator__Fuse_Input_FocusGainedHandler* __this, ::app::Uno::Collections::List__Fuse_Input_FocusGainedHandler* source)
{
    __this->_source = source;
    __this->_version = ::uPtr< ::app::Uno::Collections::List__Fuse_Input_FocusGainedHandler*>(source)->_version;
    __this->_iterator = -1;
}

void List1_Enumerator__Fuse_Input_FocusGainedHandler__Dispose(List1_Enumerator__Fuse_Input_FocusGainedHandler* __this)
{
}

::uDelegate* List1_Enumerator__Fuse_Input_FocusGainedHandler__get_Current(List1_Enumerator__Fuse_Input_FocusGainedHandler* __this)
{
    return __this->_current;
}

bool List1_Enumerator__Fuse_Input_FocusGainedHandler__MoveNext(List1_Enumerator__Fuse_Input_FocusGainedHandler* __this)
{
    if (::uPtr< ::app::Uno::Collections::List__Fuse_Input_FocusGainedHandler*>(__this->_source)->_version != __this->_version)
    {
        U_THROW(::app::Uno::InvalidOperationException__New_4(NULL, ::uGetConstString("Collection was modified")));
    }

    __this->_iterator++;

    if (__this->_iterator < ::uPtr< ::app::Uno::Collections::List__Fuse_Input_FocusGainedHandler*>(__this->_source)->_used)
    {
        __this->_current = ::uPtr< ::uArray*>(::uPtr< ::app::Uno::Collections::List__Fuse_Input_FocusGainedHandler*>(__this->_source)->_data)->Item< ::uDelegate*>(__this->_iterator);
        return true;
    }

    return false;
}

List1_Enumerator__Fuse_Input_FocusGainedHandler List1_Enumerator__Fuse_Input_FocusGainedHandler__New_1(::uStatic* __this, ::app::Uno::Collections::List__Fuse_Input_FocusGainedHandler* source)
{
    List1_Enumerator__Fuse_Input_FocusGainedHandler inst = ::uDefault< List1_Enumerator__Fuse_Input_FocusGainedHandler>();
    inst._ObjInit(source);
    return inst;
}

void List1_Enumerator__Fuse_Input_FocusGainedHandler__Uno_Collections_IEnumerator_Reset(List1_Enumerator__Fuse_Input_FocusGainedHandler* __this)
{
    __this->_iterator = -1;
    __this->_current = NULL;
    __this->_version = ::uPtr< ::app::Uno::Collections::List__Fuse_Input_FocusGainedHandler*>(__this->_source)->_version;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Collections\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

List1_Enumerator__Fuse_Input_FocusLostHandler__uType* List1_Enumerator__Fuse_Input_FocusLostHandler__typeof()
{
    static ::uStaticStrong<List1_Enumerator__Fuse_Input_FocusLostHandler__uType*> type;
    if (type != NULL) return type;

    type = (List1_Enumerator__Fuse_Input_FocusLostHandler__uType*)::uAllocStructType(sizeof(List1_Enumerator__Fuse_Input_FocusLostHandler__uType), "Uno.Collections.List<Fuse.Input.FocusLostHandler>.Enumerator", sizeof(List1_Enumerator__Fuse_Input_FocusLostHandler), 3, 2, 0);

    type->__interface_2.__fp_Reset = (void(*)(void*))List1_Enumerator__Fuse_Input_FocusLostHandler__Uno_Collections_IEnumerator_Reset;
    type->__interface_0.__fp_get_Current = (::uDelegate*(*)(void*))List1_Enumerator__Fuse_Input_FocusLostHandler__get_Current;
    type->__interface_1.__fp_Dispose = (void(*)(void*))List1_Enumerator__Fuse_Input_FocusLostHandler__Dispose;
    type->__interface_2.__fp_MoveNext = (bool(*)(void*))List1_Enumerator__Fuse_Input_FocusLostHandler__MoveNext;

    type->SetInterfaces(
        ::app::Uno::Collections::IEnumerator__Fuse_Input_FocusLostHandler__typeof(), offsetof(List1_Enumerator__Fuse_Input_FocusLostHandler__uType, __interface_0),
        ::app::Uno::IDisposable__typeof(), offsetof(List1_Enumerator__Fuse_Input_FocusLostHandler__uType, __interface_1),
        ::app::Uno::Collections::IEnumerator__typeof(), offsetof(List1_Enumerator__Fuse_Input_FocusLostHandler__uType, __interface_2));

    type->SetStrongRefs(
        "_current", offsetof(List1_Enumerator__Fuse_Input_FocusLostHandler, _current),
        "_source", offsetof(List1_Enumerator__Fuse_Input_FocusLostHandler, _source));

    type->SetFields(4,
        ::uNewField("_current", NULL, offsetof(List1_Enumerator__Fuse_Input_FocusLostHandler, _current), ::app::Fuse::Input::FocusLostHandler__typeof()),
        ::uNewField("_iterator", NULL, offsetof(List1_Enumerator__Fuse_Input_FocusLostHandler, _iterator), ::app::Uno::Int__typeof()),
        ::uNewField("_source", NULL, offsetof(List1_Enumerator__Fuse_Input_FocusLostHandler, _source), ::app::Uno::Collections::List__Fuse_Input_FocusLostHandler__typeof()),
        ::uNewField("_version", NULL, offsetof(List1_Enumerator__Fuse_Input_FocusLostHandler, _version), ::app::Uno::Int__typeof()));

    type->SetFunctions(3,
        ::uNewFunctionVoid("Dispose", List1_Enumerator__Fuse_Input_FocusLostHandler__Dispose, 0, false),
        ::uNewFunction("get_Current", List1_Enumerator__Fuse_Input_FocusLostHandler__get_Current, 0, false, ::app::Fuse::Input::FocusLostHandler__typeof()),
        ::uNewFunction("MoveNext", List1_Enumerator__Fuse_Input_FocusLostHandler__MoveNext, 0, false, ::app::Uno::Bool__typeof()));

    ::uRegisterType(type);
    return type;
}

void List1_Enumerator__Fuse_Input_FocusLostHandler___ObjInit(List1_Enumerator__Fuse_Input_FocusLostHandler* __this, ::app::Uno::Collections::List__Fuse_Input_FocusLostHandler* source)
{
    __this->_source = source;
    __this->_version = ::uPtr< ::app::Uno::Collections::List__Fuse_Input_FocusLostHandler*>(source)->_version;
    __this->_iterator = -1;
}

void List1_Enumerator__Fuse_Input_FocusLostHandler__Dispose(List1_Enumerator__Fuse_Input_FocusLostHandler* __this)
{
}

::uDelegate* List1_Enumerator__Fuse_Input_FocusLostHandler__get_Current(List1_Enumerator__Fuse_Input_FocusLostHandler* __this)
{
    return __this->_current;
}

bool List1_Enumerator__Fuse_Input_FocusLostHandler__MoveNext(List1_Enumerator__Fuse_Input_FocusLostHandler* __this)
{
    if (::uPtr< ::app::Uno::Collections::List__Fuse_Input_FocusLostHandler*>(__this->_source)->_version != __this->_version)
    {
        U_THROW(::app::Uno::InvalidOperationException__New_4(NULL, ::uGetConstString("Collection was modified")));
    }

    __this->_iterator++;

    if (__this->_iterator < ::uPtr< ::app::Uno::Collections::List__Fuse_Input_FocusLostHandler*>(__this->_source)->_used)
    {
        __this->_current = ::uPtr< ::uArray*>(::uPtr< ::app::Uno::Collections::List__Fuse_Input_FocusLostHandler*>(__this->_source)->_data)->Item< ::uDelegate*>(__this->_iterator);
        return true;
    }

    return false;
}

List1_Enumerator__Fuse_Input_FocusLostHandler List1_Enumerator__Fuse_Input_FocusLostHandler__New_1(::uStatic* __this, ::app::Uno::Collections::List__Fuse_Input_FocusLostHandler* source)
{
    List1_Enumerator__Fuse_Input_FocusLostHandler inst = ::uDefault< List1_Enumerator__Fuse_Input_FocusLostHandler>();
    inst._ObjInit(source);
    return inst;
}

void List1_Enumerator__Fuse_Input_FocusLostHandler__Uno_Collections_IEnumerator_Reset(List1_Enumerator__Fuse_Input_FocusLostHandler* __this)
{
    __this->_iterator = -1;
    __this->_current = NULL;
    __this->_version = ::uPtr< ::app::Uno::Collections::List__Fuse_Input_FocusLostHandler*>(__this->_source)->_version;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Collections\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

List1_Enumerator__Fuse_Input_IsFocusableChangedHandler__uType* List1_Enumerator__Fuse_Input_IsFocusableChangedHandler__typeof()
{
    static ::uStaticStrong<List1_Enumerator__Fuse_Input_IsFocusableChangedHandler__uType*> type;
    if (type != NULL) return type;

    type = (List1_Enumerator__Fuse_Input_IsFocusableChangedHandler__uType*)::uAllocStructType(sizeof(List1_Enumerator__Fuse_Input_IsFocusableChangedHandler__uType), "Uno.Collections.List<Fuse.Input.IsFocusableChangedHandler>.Enumerator", sizeof(List1_Enumerator__Fuse_Input_IsFocusableChangedHandler), 3, 2, 0);

    type->__interface_2.__fp_Reset = (void(*)(void*))List1_Enumerator__Fuse_Input_IsFocusableChangedHandler__Uno_Collections_IEnumerator_Reset;
    type->__interface_0.__fp_get_Current = (::uDelegate*(*)(void*))List1_Enumerator__Fuse_Input_IsFocusableChangedHandler__get_Current;
    type->__interface_1.__fp_Dispose = (void(*)(void*))List1_Enumerator__Fuse_Input_IsFocusableChangedHandler__Dispose;
    type->__interface_2.__fp_MoveNext = (bool(*)(void*))List1_Enumerator__Fuse_Input_IsFocusableChangedHandler__MoveNext;

    type->SetInterfaces(
        ::app::Uno::Collections::IEnumerator__Fuse_Input_IsFocusableChangedHandler__typeof(), offsetof(List1_Enumerator__Fuse_Input_IsFocusableChangedHandler__uType, __interface_0),
        ::app::Uno::IDisposable__typeof(), offsetof(List1_Enumerator__Fuse_Input_IsFocusableChangedHandler__uType, __interface_1),
        ::app::Uno::Collections::IEnumerator__typeof(), offsetof(List1_Enumerator__Fuse_Input_IsFocusableChangedHandler__uType, __interface_2));

    type->SetStrongRefs(
        "_current", offsetof(List1_Enumerator__Fuse_Input_IsFocusableChangedHandler, _current),
        "_source", offsetof(List1_Enumerator__Fuse_Input_IsFocusableChangedHandler, _source));

    type->SetFields(4,
        ::uNewField("_current", NULL, offsetof(List1_Enumerator__Fuse_Input_IsFocusableChangedHandler, _current), ::app::Fuse::Input::IsFocusableChangedHandler__typeof()),
        ::uNewField("_iterator", NULL, offsetof(List1_Enumerator__Fuse_Input_IsFocusableChangedHandler, _iterator), ::app::Uno::Int__typeof()),
        ::uNewField("_source", NULL, offsetof(List1_Enumerator__Fuse_Input_IsFocusableChangedHandler, _source), ::app::Uno::Collections::List__Fuse_Input_IsFocusableChangedHandler__typeof()),
        ::uNewField("_version", NULL, offsetof(List1_Enumerator__Fuse_Input_IsFocusableChangedHandler, _version), ::app::Uno::Int__typeof()));

    type->SetFunctions(3,
        ::uNewFunctionVoid("Dispose", List1_Enumerator__Fuse_Input_IsFocusableChangedHandler__Dispose, 0, false),
        ::uNewFunction("get_Current", List1_Enumerator__Fuse_Input_IsFocusableChangedHandler__get_Current, 0, false, ::app::Fuse::Input::IsFocusableChangedHandler__typeof()),
        ::uNewFunction("MoveNext", List1_Enumerator__Fuse_Input_IsFocusableChangedHandler__MoveNext, 0, false, ::app::Uno::Bool__typeof()));

    ::uRegisterType(type);
    return type;
}

void List1_Enumerator__Fuse_Input_IsFocusableChangedHandler___ObjInit(List1_Enumerator__Fuse_Input_IsFocusableChangedHandler* __this, ::app::Uno::Collections::List__Fuse_Input_IsFocusableChangedHandler* source)
{
    __this->_source = source;
    __this->_version = ::uPtr< ::app::Uno::Collections::List__Fuse_Input_IsFocusableChangedHandler*>(source)->_version;
    __this->_iterator = -1;
}

void List1_Enumerator__Fuse_Input_IsFocusableChangedHandler__Dispose(List1_Enumerator__Fuse_Input_IsFocusableChangedHandler* __this)
{
}

::uDelegate* List1_Enumerator__Fuse_Input_IsFocusableChangedHandler__get_Current(List1_Enumerator__Fuse_Input_IsFocusableChangedHandler* __this)
{
    return __this->_current;
}

bool List1_Enumerator__Fuse_Input_IsFocusableChangedHandler__MoveNext(List1_Enumerator__Fuse_Input_IsFocusableChangedHandler* __this)
{
    if (::uPtr< ::app::Uno::Collections::List__Fuse_Input_IsFocusableChangedHandler*>(__this->_source)->_version != __this->_version)
    {
        U_THROW(::app::Uno::InvalidOperationException__New_4(NULL, ::uGetConstString("Collection was modified")));
    }

    __this->_iterator++;

    if (__this->_iterator < ::uPtr< ::app::Uno::Collections::List__Fuse_Input_IsFocusableChangedHandler*>(__this->_source)->_used)
    {
        __this->_current = ::uPtr< ::uArray*>(::uPtr< ::app::Uno::Collections::List__Fuse_Input_IsFocusableChangedHandler*>(__this->_source)->_data)->Item< ::uDelegate*>(__this->_iterator);
        return true;
    }

    return false;
}

List1_Enumerator__Fuse_Input_IsFocusableChangedHandler List1_Enumerator__Fuse_Input_IsFocusableChangedHandler__New_1(::uStatic* __this, ::app::Uno::Collections::List__Fuse_Input_IsFocusableChangedHandler* source)
{
    List1_Enumerator__Fuse_Input_IsFocusableChangedHandler inst = ::uDefault< List1_Enumerator__Fuse_Input_IsFocusableChangedHandler>();
    inst._ObjInit(source);
    return inst;
}

void List1_Enumerator__Fuse_Input_IsFocusableChangedHandler__Uno_Collections_IEnumerator_Reset(List1_Enumerator__Fuse_Input_IsFocusableChangedHandler* __this)
{
    __this->_iterator = -1;
    __this->_current = NULL;
    __this->_version = ::uPtr< ::app::Uno::Collections::List__Fuse_Input_IsFocusableChangedHandler*>(__this->_source)->_version;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Collections\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

List1_Enumerator__Fuse_Input_KeyPressedHandler__uType* List1_Enumerator__Fuse_Input_KeyPressedHandler__typeof()
{
    static ::uStaticStrong<List1_Enumerator__Fuse_Input_KeyPressedHandler__uType*> type;
    if (type != NULL) return type;

    type = (List1_Enumerator__Fuse_Input_KeyPressedHandler__uType*)::uAllocStructType(sizeof(List1_Enumerator__Fuse_Input_KeyPressedHandler__uType), "Uno.Collections.List<Fuse.Input.KeyPressedHandler>.Enumerator", sizeof(List1_Enumerator__Fuse_Input_KeyPressedHandler), 3, 2, 0);

    type->__interface_2.__fp_Reset = (void(*)(void*))List1_Enumerator__Fuse_Input_KeyPressedHandler__Uno_Collections_IEnumerator_Reset;
    type->__interface_0.__fp_get_Current = (::uDelegate*(*)(void*))List1_Enumerator__Fuse_Input_KeyPressedHandler__get_Current;
    type->__interface_1.__fp_Dispose = (void(*)(void*))List1_Enumerator__Fuse_Input_KeyPressedHandler__Dispose;
    type->__interface_2.__fp_MoveNext = (bool(*)(void*))List1_Enumerator__Fuse_Input_KeyPressedHandler__MoveNext;

    type->SetInterfaces(
        ::app::Uno::Collections::IEnumerator__Fuse_Input_KeyPressedHandler__typeof(), offsetof(List1_Enumerator__Fuse_Input_KeyPressedHandler__uType, __interface_0),
        ::app::Uno::IDisposable__typeof(), offsetof(List1_Enumerator__Fuse_Input_KeyPressedHandler__uType, __interface_1),
        ::app::Uno::Collections::IEnumerator__typeof(), offsetof(List1_Enumerator__Fuse_Input_KeyPressedHandler__uType, __interface_2));

    type->SetStrongRefs(
        "_current", offsetof(List1_Enumerator__Fuse_Input_KeyPressedHandler, _current),
        "_source", offsetof(List1_Enumerator__Fuse_Input_KeyPressedHandler, _source));

    type->SetFields(4,
        ::uNewField("_current", NULL, offsetof(List1_Enumerator__Fuse_Input_KeyPressedHandler, _current), ::app::Fuse::Input::KeyPressedHandler__typeof()),
        ::uNewField("_iterator", NULL, offsetof(List1_Enumerator__Fuse_Input_KeyPressedHandler, _iterator), ::app::Uno::Int__typeof()),
        ::uNewField("_source", NULL, offsetof(List1_Enumerator__Fuse_Input_KeyPressedHandler, _source), ::app::Uno::Collections::List__Fuse_Input_KeyPressedHandler__typeof()),
        ::uNewField("_version", NULL, offsetof(List1_Enumerator__Fuse_Input_KeyPressedHandler, _version), ::app::Uno::Int__typeof()));

    type->SetFunctions(3,
        ::uNewFunctionVoid("Dispose", List1_Enumerator__Fuse_Input_KeyPressedHandler__Dispose, 0, false),
        ::uNewFunction("get_Current", List1_Enumerator__Fuse_Input_KeyPressedHandler__get_Current, 0, false, ::app::Fuse::Input::KeyPressedHandler__typeof()),
        ::uNewFunction("MoveNext", List1_Enumerator__Fuse_Input_KeyPressedHandler__MoveNext, 0, false, ::app::Uno::Bool__typeof()));

    ::uRegisterType(type);
    return type;
}

void List1_Enumerator__Fuse_Input_KeyPressedHandler___ObjInit(List1_Enumerator__Fuse_Input_KeyPressedHandler* __this, ::app::Uno::Collections::List__Fuse_Input_KeyPressedHandler* source)
{
    __this->_source = source;
    __this->_version = ::uPtr< ::app::Uno::Collections::List__Fuse_Input_KeyPressedHandler*>(source)->_version;
    __this->_iterator = -1;
}

void List1_Enumerator__Fuse_Input_KeyPressedHandler__Dispose(List1_Enumerator__Fuse_Input_KeyPressedHandler* __this)
{
}

::uDelegate* List1_Enumerator__Fuse_Input_KeyPressedHandler__get_Current(List1_Enumerator__Fuse_Input_KeyPressedHandler* __this)
{
    return __this->_current;
}

bool List1_Enumerator__Fuse_Input_KeyPressedHandler__MoveNext(List1_Enumerator__Fuse_Input_KeyPressedHandler* __this)
{
    if (::uPtr< ::app::Uno::Collections::List__Fuse_Input_KeyPressedHandler*>(__this->_source)->_version != __this->_version)
    {
        U_THROW(::app::Uno::InvalidOperationException__New_4(NULL, ::uGetConstString("Collection was modified")));
    }

    __this->_iterator++;

    if (__this->_iterator < ::uPtr< ::app::Uno::Collections::List__Fuse_Input_KeyPressedHandler*>(__this->_source)->_used)
    {
        __this->_current = ::uPtr< ::uArray*>(::uPtr< ::app::Uno::Collections::List__Fuse_Input_KeyPressedHandler*>(__this->_source)->_data)->Item< ::uDelegate*>(__this->_iterator);
        return true;
    }

    return false;
}

List1_Enumerator__Fuse_Input_KeyPressedHandler List1_Enumerator__Fuse_Input_KeyPressedHandler__New_1(::uStatic* __this, ::app::Uno::Collections::List__Fuse_Input_KeyPressedHandler* source)
{
    List1_Enumerator__Fuse_Input_KeyPressedHandler inst = ::uDefault< List1_Enumerator__Fuse_Input_KeyPressedHandler>();
    inst._ObjInit(source);
    return inst;
}

void List1_Enumerator__Fuse_Input_KeyPressedHandler__Uno_Collections_IEnumerator_Reset(List1_Enumerator__Fuse_Input_KeyPressedHandler* __this)
{
    __this->_iterator = -1;
    __this->_current = NULL;
    __this->_version = ::uPtr< ::app::Uno::Collections::List__Fuse_Input_KeyPressedHandler*>(__this->_source)->_version;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Collections\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

List1_Enumerator__Fuse_Input_KeyReleasedHandler__uType* List1_Enumerator__Fuse_Input_KeyReleasedHandler__typeof()
{
    static ::uStaticStrong<List1_Enumerator__Fuse_Input_KeyReleasedHandler__uType*> type;
    if (type != NULL) return type;

    type = (List1_Enumerator__Fuse_Input_KeyReleasedHandler__uType*)::uAllocStructType(sizeof(List1_Enumerator__Fuse_Input_KeyReleasedHandler__uType), "Uno.Collections.List<Fuse.Input.KeyReleasedHandler>.Enumerator", sizeof(List1_Enumerator__Fuse_Input_KeyReleasedHandler), 3, 2, 0);

    type->__interface_2.__fp_Reset = (void(*)(void*))List1_Enumerator__Fuse_Input_KeyReleasedHandler__Uno_Collections_IEnumerator_Reset;
    type->__interface_0.__fp_get_Current = (::uDelegate*(*)(void*))List1_Enumerator__Fuse_Input_KeyReleasedHandler__get_Current;
    type->__interface_1.__fp_Dispose = (void(*)(void*))List1_Enumerator__Fuse_Input_KeyReleasedHandler__Dispose;
    type->__interface_2.__fp_MoveNext = (bool(*)(void*))List1_Enumerator__Fuse_Input_KeyReleasedHandler__MoveNext;

    type->SetInterfaces(
        ::app::Uno::Collections::IEnumerator__Fuse_Input_KeyReleasedHandler__typeof(), offsetof(List1_Enumerator__Fuse_Input_KeyReleasedHandler__uType, __interface_0),
        ::app::Uno::IDisposable__typeof(), offsetof(List1_Enumerator__Fuse_Input_KeyReleasedHandler__uType, __interface_1),
        ::app::Uno::Collections::IEnumerator__typeof(), offsetof(List1_Enumerator__Fuse_Input_KeyReleasedHandler__uType, __interface_2));

    type->SetStrongRefs(
        "_current", offsetof(List1_Enumerator__Fuse_Input_KeyReleasedHandler, _current),
        "_source", offsetof(List1_Enumerator__Fuse_Input_KeyReleasedHandler, _source));

    type->SetFields(4,
        ::uNewField("_current", NULL, offsetof(List1_Enumerator__Fuse_Input_KeyReleasedHandler, _current), ::app::Fuse::Input::KeyReleasedHandler__typeof()),
        ::uNewField("_iterator", NULL, offsetof(List1_Enumerator__Fuse_Input_KeyReleasedHandler, _iterator), ::app::Uno::Int__typeof()),
        ::uNewField("_source", NULL, offsetof(List1_Enumerator__Fuse_Input_KeyReleasedHandler, _source), ::app::Uno::Collections::List__Fuse_Input_KeyReleasedHandler__typeof()),
        ::uNewField("_version", NULL, offsetof(List1_Enumerator__Fuse_Input_KeyReleasedHandler, _version), ::app::Uno::Int__typeof()));

    type->SetFunctions(3,
        ::uNewFunctionVoid("Dispose", List1_Enumerator__Fuse_Input_KeyReleasedHandler__Dispose, 0, false),
        ::uNewFunction("get_Current", List1_Enumerator__Fuse_Input_KeyReleasedHandler__get_Current, 0, false, ::app::Fuse::Input::KeyReleasedHandler__typeof()),
        ::uNewFunction("MoveNext", List1_Enumerator__Fuse_Input_KeyReleasedHandler__MoveNext, 0, false, ::app::Uno::Bool__typeof()));

    ::uRegisterType(type);
    return type;
}

void List1_Enumerator__Fuse_Input_KeyReleasedHandler___ObjInit(List1_Enumerator__Fuse_Input_KeyReleasedHandler* __this, ::app::Uno::Collections::List__Fuse_Input_KeyReleasedHandler* source)
{
    __this->_source = source;
    __this->_version = ::uPtr< ::app::Uno::Collections::List__Fuse_Input_KeyReleasedHandler*>(source)->_version;
    __this->_iterator = -1;
}

void List1_Enumerator__Fuse_Input_KeyReleasedHandler__Dispose(List1_Enumerator__Fuse_Input_KeyReleasedHandler* __this)
{
}

::uDelegate* List1_Enumerator__Fuse_Input_KeyReleasedHandler__get_Current(List1_Enumerator__Fuse_Input_KeyReleasedHandler* __this)
{
    return __this->_current;
}

bool List1_Enumerator__Fuse_Input_KeyReleasedHandler__MoveNext(List1_Enumerator__Fuse_Input_KeyReleasedHandler* __this)
{
    if (::uPtr< ::app::Uno::Collections::List__Fuse_Input_KeyReleasedHandler*>(__this->_source)->_version != __this->_version)
    {
        U_THROW(::app::Uno::InvalidOperationException__New_4(NULL, ::uGetConstString("Collection was modified")));
    }

    __this->_iterator++;

    if (__this->_iterator < ::uPtr< ::app::Uno::Collections::List__Fuse_Input_KeyReleasedHandler*>(__this->_source)->_used)
    {
        __this->_current = ::uPtr< ::uArray*>(::uPtr< ::app::Uno::Collections::List__Fuse_Input_KeyReleasedHandler*>(__this->_source)->_data)->Item< ::uDelegate*>(__this->_iterator);
        return true;
    }

    return false;
}

List1_Enumerator__Fuse_Input_KeyReleasedHandler List1_Enumerator__Fuse_Input_KeyReleasedHandler__New_1(::uStatic* __this, ::app::Uno::Collections::List__Fuse_Input_KeyReleasedHandler* source)
{
    List1_Enumerator__Fuse_Input_KeyReleasedHandler inst = ::uDefault< List1_Enumerator__Fuse_Input_KeyReleasedHandler>();
    inst._ObjInit(source);
    return inst;
}

void List1_Enumerator__Fuse_Input_KeyReleasedHandler__Uno_Collections_IEnumerator_Reset(List1_Enumerator__Fuse_Input_KeyReleasedHandler* __this)
{
    __this->_iterator = -1;
    __this->_current = NULL;
    __this->_version = ::uPtr< ::app::Uno::Collections::List__Fuse_Input_KeyReleasedHandler*>(__this->_source)->_version;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Collections\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

List1_Enumerator__Fuse_Input_PointerEnteredHandler__uType* List1_Enumerator__Fuse_Input_PointerEnteredHandler__typeof()
{
    static ::uStaticStrong<List1_Enumerator__Fuse_Input_PointerEnteredHandler__uType*> type;
    if (type != NULL) return type;

    type = (List1_Enumerator__Fuse_Input_PointerEnteredHandler__uType*)::uAllocStructType(sizeof(List1_Enumerator__Fuse_Input_PointerEnteredHandler__uType), "Uno.Collections.List<Fuse.Input.PointerEnteredHandler>.Enumerator", sizeof(List1_Enumerator__Fuse_Input_PointerEnteredHandler), 3, 2, 0);

    type->__interface_2.__fp_Reset = (void(*)(void*))List1_Enumerator__Fuse_Input_PointerEnteredHandler__Uno_Collections_IEnumerator_Reset;
    type->__interface_0.__fp_get_Current = (::uDelegate*(*)(void*))List1_Enumerator__Fuse_Input_PointerEnteredHandler__get_Current;
    type->__interface_1.__fp_Dispose = (void(*)(void*))List1_Enumerator__Fuse_Input_PointerEnteredHandler__Dispose;
    type->__interface_2.__fp_MoveNext = (bool(*)(void*))List1_Enumerator__Fuse_Input_PointerEnteredHandler__MoveNext;

    type->SetInterfaces(
        ::app::Uno::Collections::IEnumerator__Fuse_Input_PointerEnteredHandler__typeof(), offsetof(List1_Enumerator__Fuse_Input_PointerEnteredHandler__uType, __interface_0),
        ::app::Uno::IDisposable__typeof(), offsetof(List1_Enumerator__Fuse_Input_PointerEnteredHandler__uType, __interface_1),
        ::app::Uno::Collections::IEnumerator__typeof(), offsetof(List1_Enumerator__Fuse_Input_PointerEnteredHandler__uType, __interface_2));

    type->SetStrongRefs(
        "_current", offsetof(List1_Enumerator__Fuse_Input_PointerEnteredHandler, _current),
        "_source", offsetof(List1_Enumerator__Fuse_Input_PointerEnteredHandler, _source));

    type->SetFields(4,
        ::uNewField("_current", NULL, offsetof(List1_Enumerator__Fuse_Input_PointerEnteredHandler, _current), ::app::Fuse::Input::PointerEnteredHandler__typeof()),
        ::uNewField("_iterator", NULL, offsetof(List1_Enumerator__Fuse_Input_PointerEnteredHandler, _iterator), ::app::Uno::Int__typeof()),
        ::uNewField("_source", NULL, offsetof(List1_Enumerator__Fuse_Input_PointerEnteredHandler, _source), ::app::Uno::Collections::List__Fuse_Input_PointerEnteredHandler__typeof()),
        ::uNewField("_version", NULL, offsetof(List1_Enumerator__Fuse_Input_PointerEnteredHandler, _version), ::app::Uno::Int__typeof()));

    type->SetFunctions(3,
        ::uNewFunctionVoid("Dispose", List1_Enumerator__Fuse_Input_PointerEnteredHandler__Dispose, 0, false),
        ::uNewFunction("get_Current", List1_Enumerator__Fuse_Input_PointerEnteredHandler__get_Current, 0, false, ::app::Fuse::Input::PointerEnteredHandler__typeof()),
        ::uNewFunction("MoveNext", List1_Enumerator__Fuse_Input_PointerEnteredHandler__MoveNext, 0, false, ::app::Uno::Bool__typeof()));

    ::uRegisterType(type);
    return type;
}

void List1_Enumerator__Fuse_Input_PointerEnteredHandler___ObjInit(List1_Enumerator__Fuse_Input_PointerEnteredHandler* __this, ::app::Uno::Collections::List__Fuse_Input_PointerEnteredHandler* source)
{
    __this->_source = source;
    __this->_version = ::uPtr< ::app::Uno::Collections::List__Fuse_Input_PointerEnteredHandler*>(source)->_version;
    __this->_iterator = -1;
}

void List1_Enumerator__Fuse_Input_PointerEnteredHandler__Dispose(List1_Enumerator__Fuse_Input_PointerEnteredHandler* __this)
{
}

::uDelegate* List1_Enumerator__Fuse_Input_PointerEnteredHandler__get_Current(List1_Enumerator__Fuse_Input_PointerEnteredHandler* __this)
{
    return __this->_current;
}

bool List1_Enumerator__Fuse_Input_PointerEnteredHandler__MoveNext(List1_Enumerator__Fuse_Input_PointerEnteredHandler* __this)
{
    if (::uPtr< ::app::Uno::Collections::List__Fuse_Input_PointerEnteredHandler*>(__this->_source)->_version != __this->_version)
    {
        U_THROW(::app::Uno::InvalidOperationException__New_4(NULL, ::uGetConstString("Collection was modified")));
    }

    __this->_iterator++;

    if (__this->_iterator < ::uPtr< ::app::Uno::Collections::List__Fuse_Input_PointerEnteredHandler*>(__this->_source)->_used)
    {
        __this->_current = ::uPtr< ::uArray*>(::uPtr< ::app::Uno::Collections::List__Fuse_Input_PointerEnteredHandler*>(__this->_source)->_data)->Item< ::uDelegate*>(__this->_iterator);
        return true;
    }

    return false;
}

List1_Enumerator__Fuse_Input_PointerEnteredHandler List1_Enumerator__Fuse_Input_PointerEnteredHandler__New_1(::uStatic* __this, ::app::Uno::Collections::List__Fuse_Input_PointerEnteredHandler* source)
{
    List1_Enumerator__Fuse_Input_PointerEnteredHandler inst = ::uDefault< List1_Enumerator__Fuse_Input_PointerEnteredHandler>();
    inst._ObjInit(source);
    return inst;
}

void List1_Enumerator__Fuse_Input_PointerEnteredHandler__Uno_Collections_IEnumerator_Reset(List1_Enumerator__Fuse_Input_PointerEnteredHandler* __this)
{
    __this->_iterator = -1;
    __this->_current = NULL;
    __this->_version = ::uPtr< ::app::Uno::Collections::List__Fuse_Input_PointerEnteredHandler*>(__this->_source)->_version;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Collections\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

List1_Enumerator__Fuse_Input_PointerLeftHandler__uType* List1_Enumerator__Fuse_Input_PointerLeftHandler__typeof()
{
    static ::uStaticStrong<List1_Enumerator__Fuse_Input_PointerLeftHandler__uType*> type;
    if (type != NULL) return type;

    type = (List1_Enumerator__Fuse_Input_PointerLeftHandler__uType*)::uAllocStructType(sizeof(List1_Enumerator__Fuse_Input_PointerLeftHandler__uType), "Uno.Collections.List<Fuse.Input.PointerLeftHandler>.Enumerator", sizeof(List1_Enumerator__Fuse_Input_PointerLeftHandler), 3, 2, 0);

    type->__interface_2.__fp_Reset = (void(*)(void*))List1_Enumerator__Fuse_Input_PointerLeftHandler__Uno_Collections_IEnumerator_Reset;
    type->__interface_0.__fp_get_Current = (::uDelegate*(*)(void*))List1_Enumerator__Fuse_Input_PointerLeftHandler__get_Current;
    type->__interface_1.__fp_Dispose = (void(*)(void*))List1_Enumerator__Fuse_Input_PointerLeftHandler__Dispose;
    type->__interface_2.__fp_MoveNext = (bool(*)(void*))List1_Enumerator__Fuse_Input_PointerLeftHandler__MoveNext;

    type->SetInterfaces(
        ::app::Uno::Collections::IEnumerator__Fuse_Input_PointerLeftHandler__typeof(), offsetof(List1_Enumerator__Fuse_Input_PointerLeftHandler__uType, __interface_0),
        ::app::Uno::IDisposable__typeof(), offsetof(List1_Enumerator__Fuse_Input_PointerLeftHandler__uType, __interface_1),
        ::app::Uno::Collections::IEnumerator__typeof(), offsetof(List1_Enumerator__Fuse_Input_PointerLeftHandler__uType, __interface_2));

    type->SetStrongRefs(
        "_current", offsetof(List1_Enumerator__Fuse_Input_PointerLeftHandler, _current),
        "_source", offsetof(List1_Enumerator__Fuse_Input_PointerLeftHandler, _source));

    type->SetFields(4,
        ::uNewField("_current", NULL, offsetof(List1_Enumerator__Fuse_Input_PointerLeftHandler, _current), ::app::Fuse::Input::PointerLeftHandler__typeof()),
        ::uNewField("_iterator", NULL, offsetof(List1_Enumerator__Fuse_Input_PointerLeftHandler, _iterator), ::app::Uno::Int__typeof()),
        ::uNewField("_source", NULL, offsetof(List1_Enumerator__Fuse_Input_PointerLeftHandler, _source), ::app::Uno::Collections::List__Fuse_Input_PointerLeftHandler__typeof()),
        ::uNewField("_version", NULL, offsetof(List1_Enumerator__Fuse_Input_PointerLeftHandler, _version), ::app::Uno::Int__typeof()));

    type->SetFunctions(3,
        ::uNewFunctionVoid("Dispose", List1_Enumerator__Fuse_Input_PointerLeftHandler__Dispose, 0, false),
        ::uNewFunction("get_Current", List1_Enumerator__Fuse_Input_PointerLeftHandler__get_Current, 0, false, ::app::Fuse::Input::PointerLeftHandler__typeof()),
        ::uNewFunction("MoveNext", List1_Enumerator__Fuse_Input_PointerLeftHandler__MoveNext, 0, false, ::app::Uno::Bool__typeof()));

    ::uRegisterType(type);
    return type;
}

void List1_Enumerator__Fuse_Input_PointerLeftHandler___ObjInit(List1_Enumerator__Fuse_Input_PointerLeftHandler* __this, ::app::Uno::Collections::List__Fuse_Input_PointerLeftHandler* source)
{
    __this->_source = source;
    __this->_version = ::uPtr< ::app::Uno::Collections::List__Fuse_Input_PointerLeftHandler*>(source)->_version;
    __this->_iterator = -1;
}

void List1_Enumerator__Fuse_Input_PointerLeftHandler__Dispose(List1_Enumerator__Fuse_Input_PointerLeftHandler* __this)
{
}

::uDelegate* List1_Enumerator__Fuse_Input_PointerLeftHandler__get_Current(List1_Enumerator__Fuse_Input_PointerLeftHandler* __this)
{
    return __this->_current;
}

bool List1_Enumerator__Fuse_Input_PointerLeftHandler__MoveNext(List1_Enumerator__Fuse_Input_PointerLeftHandler* __this)
{
    if (::uPtr< ::app::Uno::Collections::List__Fuse_Input_PointerLeftHandler*>(__this->_source)->_version != __this->_version)
    {
        U_THROW(::app::Uno::InvalidOperationException__New_4(NULL, ::uGetConstString("Collection was modified")));
    }

    __this->_iterator++;

    if (__this->_iterator < ::uPtr< ::app::Uno::Collections::List__Fuse_Input_PointerLeftHandler*>(__this->_source)->_used)
    {
        __this->_current = ::uPtr< ::uArray*>(::uPtr< ::app::Uno::Collections::List__Fuse_Input_PointerLeftHandler*>(__this->_source)->_data)->Item< ::uDelegate*>(__this->_iterator);
        return true;
    }

    return false;
}

List1_Enumerator__Fuse_Input_PointerLeftHandler List1_Enumerator__Fuse_Input_PointerLeftHandler__New_1(::uStatic* __this, ::app::Uno::Collections::List__Fuse_Input_PointerLeftHandler* source)
{
    List1_Enumerator__Fuse_Input_PointerLeftHandler inst = ::uDefault< List1_Enumerator__Fuse_Input_PointerLeftHandler>();
    inst._ObjInit(source);
    return inst;
}

void List1_Enumerator__Fuse_Input_PointerLeftHandler__Uno_Collections_IEnumerator_Reset(List1_Enumerator__Fuse_Input_PointerLeftHandler* __this)
{
    __this->_iterator = -1;
    __this->_current = NULL;
    __this->_version = ::uPtr< ::app::Uno::Collections::List__Fuse_Input_PointerLeftHandler*>(__this->_source)->_version;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Collections\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

List1_Enumerator__Fuse_Input_PointerMovedHandler__uType* List1_Enumerator__Fuse_Input_PointerMovedHandler__typeof()
{
    static ::uStaticStrong<List1_Enumerator__Fuse_Input_PointerMovedHandler__uType*> type;
    if (type != NULL) return type;

    type = (List1_Enumerator__Fuse_Input_PointerMovedHandler__uType*)::uAllocStructType(sizeof(List1_Enumerator__Fuse_Input_PointerMovedHandler__uType), "Uno.Collections.List<Fuse.Input.PointerMovedHandler>.Enumerator", sizeof(List1_Enumerator__Fuse_Input_PointerMovedHandler), 3, 2, 0);

    type->__interface_2.__fp_Reset = (void(*)(void*))List1_Enumerator__Fuse_Input_PointerMovedHandler__Uno_Collections_IEnumerator_Reset;
    type->__interface_0.__fp_get_Current = (::uDelegate*(*)(void*))List1_Enumerator__Fuse_Input_PointerMovedHandler__get_Current;
    type->__interface_1.__fp_Dispose = (void(*)(void*))List1_Enumerator__Fuse_Input_PointerMovedHandler__Dispose;
    type->__interface_2.__fp_MoveNext = (bool(*)(void*))List1_Enumerator__Fuse_Input_PointerMovedHandler__MoveNext;

    type->SetInterfaces(
        ::app::Uno::Collections::IEnumerator__Fuse_Input_PointerMovedHandler__typeof(), offsetof(List1_Enumerator__Fuse_Input_PointerMovedHandler__uType, __interface_0),
        ::app::Uno::IDisposable__typeof(), offsetof(List1_Enumerator__Fuse_Input_PointerMovedHandler__uType, __interface_1),
        ::app::Uno::Collections::IEnumerator__typeof(), offsetof(List1_Enumerator__Fuse_Input_PointerMovedHandler__uType, __interface_2));

    type->SetStrongRefs(
        "_current", offsetof(List1_Enumerator__Fuse_Input_PointerMovedHandler, _current),
        "_source", offsetof(List1_Enumerator__Fuse_Input_PointerMovedHandler, _source));

    type->SetFields(4,
        ::uNewField("_current", NULL, offsetof(List1_Enumerator__Fuse_Input_PointerMovedHandler, _current), ::app::Fuse::Input::PointerMovedHandler__typeof()),
        ::uNewField("_iterator", NULL, offsetof(List1_Enumerator__Fuse_Input_PointerMovedHandler, _iterator), ::app::Uno::Int__typeof()),
        ::uNewField("_source", NULL, offsetof(List1_Enumerator__Fuse_Input_PointerMovedHandler, _source), ::app::Uno::Collections::List__Fuse_Input_PointerMovedHandler__typeof()),
        ::uNewField("_version", NULL, offsetof(List1_Enumerator__Fuse_Input_PointerMovedHandler, _version), ::app::Uno::Int__typeof()));

    type->SetFunctions(3,
        ::uNewFunctionVoid("Dispose", List1_Enumerator__Fuse_Input_PointerMovedHandler__Dispose, 0, false),
        ::uNewFunction("get_Current", List1_Enumerator__Fuse_Input_PointerMovedHandler__get_Current, 0, false, ::app::Fuse::Input::PointerMovedHandler__typeof()),
        ::uNewFunction("MoveNext", List1_Enumerator__Fuse_Input_PointerMovedHandler__MoveNext, 0, false, ::app::Uno::Bool__typeof()));

    ::uRegisterType(type);
    return type;
}

void List1_Enumerator__Fuse_Input_PointerMovedHandler___ObjInit(List1_Enumerator__Fuse_Input_PointerMovedHandler* __this, ::app::Uno::Collections::List__Fuse_Input_PointerMovedHandler* source)
{
    __this->_source = source;
    __this->_version = ::uPtr< ::app::Uno::Collections::List__Fuse_Input_PointerMovedHandler*>(source)->_version;
    __this->_iterator = -1;
}

void List1_Enumerator__Fuse_Input_PointerMovedHandler__Dispose(List1_Enumerator__Fuse_Input_PointerMovedHandler* __this)
{
}

::uDelegate* List1_Enumerator__Fuse_Input_PointerMovedHandler__get_Current(List1_Enumerator__Fuse_Input_PointerMovedHandler* __this)
{
    return __this->_current;
}

bool List1_Enumerator__Fuse_Input_PointerMovedHandler__MoveNext(List1_Enumerator__Fuse_Input_PointerMovedHandler* __this)
{
    if (::uPtr< ::app::Uno::Collections::List__Fuse_Input_PointerMovedHandler*>(__this->_source)->_version != __this->_version)
    {
        U_THROW(::app::Uno::InvalidOperationException__New_4(NULL, ::uGetConstString("Collection was modified")));
    }

    __this->_iterator++;

    if (__this->_iterator < ::uPtr< ::app::Uno::Collections::List__Fuse_Input_PointerMovedHandler*>(__this->_source)->_used)
    {
        __this->_current = ::uPtr< ::uArray*>(::uPtr< ::app::Uno::Collections::List__Fuse_Input_PointerMovedHandler*>(__this->_source)->_data)->Item< ::uDelegate*>(__this->_iterator);
        return true;
    }

    return false;
}

List1_Enumerator__Fuse_Input_PointerMovedHandler List1_Enumerator__Fuse_Input_PointerMovedHandler__New_1(::uStatic* __this, ::app::Uno::Collections::List__Fuse_Input_PointerMovedHandler* source)
{
    List1_Enumerator__Fuse_Input_PointerMovedHandler inst = ::uDefault< List1_Enumerator__Fuse_Input_PointerMovedHandler>();
    inst._ObjInit(source);
    return inst;
}

void List1_Enumerator__Fuse_Input_PointerMovedHandler__Uno_Collections_IEnumerator_Reset(List1_Enumerator__Fuse_Input_PointerMovedHandler* __this)
{
    __this->_iterator = -1;
    __this->_current = NULL;
    __this->_version = ::uPtr< ::app::Uno::Collections::List__Fuse_Input_PointerMovedHandler*>(__this->_source)->_version;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Collections\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

List1_Enumerator__Fuse_Input_PointerPressedHandler__uType* List1_Enumerator__Fuse_Input_PointerPressedHandler__typeof()
{
    static ::uStaticStrong<List1_Enumerator__Fuse_Input_PointerPressedHandler__uType*> type;
    if (type != NULL) return type;

    type = (List1_Enumerator__Fuse_Input_PointerPressedHandler__uType*)::uAllocStructType(sizeof(List1_Enumerator__Fuse_Input_PointerPressedHandler__uType), "Uno.Collections.List<Fuse.Input.PointerPressedHandler>.Enumerator", sizeof(List1_Enumerator__Fuse_Input_PointerPressedHandler), 3, 2, 0);

    type->__interface_2.__fp_Reset = (void(*)(void*))List1_Enumerator__Fuse_Input_PointerPressedHandler__Uno_Collections_IEnumerator_Reset;
    type->__interface_0.__fp_get_Current = (::uDelegate*(*)(void*))List1_Enumerator__Fuse_Input_PointerPressedHandler__get_Current;
    type->__interface_1.__fp_Dispose = (void(*)(void*))List1_Enumerator__Fuse_Input_PointerPressedHandler__Dispose;
    type->__interface_2.__fp_MoveNext = (bool(*)(void*))List1_Enumerator__Fuse_Input_PointerPressedHandler__MoveNext;

    type->SetInterfaces(
        ::app::Uno::Collections::IEnumerator__Fuse_Input_PointerPressedHandler__typeof(), offsetof(List1_Enumerator__Fuse_Input_PointerPressedHandler__uType, __interface_0),
        ::app::Uno::IDisposable__typeof(), offsetof(List1_Enumerator__Fuse_Input_PointerPressedHandler__uType, __interface_1),
        ::app::Uno::Collections::IEnumerator__typeof(), offsetof(List1_Enumerator__Fuse_Input_PointerPressedHandler__uType, __interface_2));

    type->SetStrongRefs(
        "_current", offsetof(List1_Enumerator__Fuse_Input_PointerPressedHandler, _current),
        "_source", offsetof(List1_Enumerator__Fuse_Input_PointerPressedHandler, _source));

    type->SetFields(4,
        ::uNewField("_current", NULL, offsetof(List1_Enumerator__Fuse_Input_PointerPressedHandler, _current), ::app::Fuse::Input::PointerPressedHandler__typeof()),
        ::uNewField("_iterator", NULL, offsetof(List1_Enumerator__Fuse_Input_PointerPressedHandler, _iterator), ::app::Uno::Int__typeof()),
        ::uNewField("_source", NULL, offsetof(List1_Enumerator__Fuse_Input_PointerPressedHandler, _source), ::app::Uno::Collections::List__Fuse_Input_PointerPressedHandler__typeof()),
        ::uNewField("_version", NULL, offsetof(List1_Enumerator__Fuse_Input_PointerPressedHandler, _version), ::app::Uno::Int__typeof()));

    type->SetFunctions(3,
        ::uNewFunctionVoid("Dispose", List1_Enumerator__Fuse_Input_PointerPressedHandler__Dispose, 0, false),
        ::uNewFunction("get_Current", List1_Enumerator__Fuse_Input_PointerPressedHandler__get_Current, 0, false, ::app::Fuse::Input::PointerPressedHandler__typeof()),
        ::uNewFunction("MoveNext", List1_Enumerator__Fuse_Input_PointerPressedHandler__MoveNext, 0, false, ::app::Uno::Bool__typeof()));

    ::uRegisterType(type);
    return type;
}

void List1_Enumerator__Fuse_Input_PointerPressedHandler___ObjInit(List1_Enumerator__Fuse_Input_PointerPressedHandler* __this, ::app::Uno::Collections::List__Fuse_Input_PointerPressedHandler* source)
{
    __this->_source = source;
    __this->_version = ::uPtr< ::app::Uno::Collections::List__Fuse_Input_PointerPressedHandler*>(source)->_version;
    __this->_iterator = -1;
}

void List1_Enumerator__Fuse_Input_PointerPressedHandler__Dispose(List1_Enumerator__Fuse_Input_PointerPressedHandler* __this)
{
}

::uDelegate* List1_Enumerator__Fuse_Input_PointerPressedHandler__get_Current(List1_Enumerator__Fuse_Input_PointerPressedHandler* __this)
{
    return __this->_current;
}

bool List1_Enumerator__Fuse_Input_PointerPressedHandler__MoveNext(List1_Enumerator__Fuse_Input_PointerPressedHandler* __this)
{
    if (::uPtr< ::app::Uno::Collections::List__Fuse_Input_PointerPressedHandler*>(__this->_source)->_version != __this->_version)
    {
        U_THROW(::app::Uno::InvalidOperationException__New_4(NULL, ::uGetConstString("Collection was modified")));
    }

    __this->_iterator++;

    if (__this->_iterator < ::uPtr< ::app::Uno::Collections::List__Fuse_Input_PointerPressedHandler*>(__this->_source)->_used)
    {
        __this->_current = ::uPtr< ::uArray*>(::uPtr< ::app::Uno::Collections::List__Fuse_Input_PointerPressedHandler*>(__this->_source)->_data)->Item< ::uDelegate*>(__this->_iterator);
        return true;
    }

    return false;
}

List1_Enumerator__Fuse_Input_PointerPressedHandler List1_Enumerator__Fuse_Input_PointerPressedHandler__New_1(::uStatic* __this, ::app::Uno::Collections::List__Fuse_Input_PointerPressedHandler* source)
{
    List1_Enumerator__Fuse_Input_PointerPressedHandler inst = ::uDefault< List1_Enumerator__Fuse_Input_PointerPressedHandler>();
    inst._ObjInit(source);
    return inst;
}

void List1_Enumerator__Fuse_Input_PointerPressedHandler__Uno_Collections_IEnumerator_Reset(List1_Enumerator__Fuse_Input_PointerPressedHandler* __this)
{
    __this->_iterator = -1;
    __this->_current = NULL;
    __this->_version = ::uPtr< ::app::Uno::Collections::List__Fuse_Input_PointerPressedHandler*>(__this->_source)->_version;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Collections\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

List1_Enumerator__Fuse_Input_PointerReleasedHandler__uType* List1_Enumerator__Fuse_Input_PointerReleasedHandler__typeof()
{
    static ::uStaticStrong<List1_Enumerator__Fuse_Input_PointerReleasedHandler__uType*> type;
    if (type != NULL) return type;

    type = (List1_Enumerator__Fuse_Input_PointerReleasedHandler__uType*)::uAllocStructType(sizeof(List1_Enumerator__Fuse_Input_PointerReleasedHandler__uType), "Uno.Collections.List<Fuse.Input.PointerReleasedHandler>.Enumerator", sizeof(List1_Enumerator__Fuse_Input_PointerReleasedHandler), 3, 2, 0);

    type->__interface_2.__fp_Reset = (void(*)(void*))List1_Enumerator__Fuse_Input_PointerReleasedHandler__Uno_Collections_IEnumerator_Reset;
    type->__interface_0.__fp_get_Current = (::uDelegate*(*)(void*))List1_Enumerator__Fuse_Input_PointerReleasedHandler__get_Current;
    type->__interface_1.__fp_Dispose = (void(*)(void*))List1_Enumerator__Fuse_Input_PointerReleasedHandler__Dispose;
    type->__interface_2.__fp_MoveNext = (bool(*)(void*))List1_Enumerator__Fuse_Input_PointerReleasedHandler__MoveNext;

    type->SetInterfaces(
        ::app::Uno::Collections::IEnumerator__Fuse_Input_PointerReleasedHandler__typeof(), offsetof(List1_Enumerator__Fuse_Input_PointerReleasedHandler__uType, __interface_0),
        ::app::Uno::IDisposable__typeof(), offsetof(List1_Enumerator__Fuse_Input_PointerReleasedHandler__uType, __interface_1),
        ::app::Uno::Collections::IEnumerator__typeof(), offsetof(List1_Enumerator__Fuse_Input_PointerReleasedHandler__uType, __interface_2));

    type->SetStrongRefs(
        "_current", offsetof(List1_Enumerator__Fuse_Input_PointerReleasedHandler, _current),
        "_source", offsetof(List1_Enumerator__Fuse_Input_PointerReleasedHandler, _source));

    type->SetFields(4,
        ::uNewField("_current", NULL, offsetof(List1_Enumerator__Fuse_Input_PointerReleasedHandler, _current), ::app::Fuse::Input::PointerReleasedHandler__typeof()),
        ::uNewField("_iterator", NULL, offsetof(List1_Enumerator__Fuse_Input_PointerReleasedHandler, _iterator), ::app::Uno::Int__typeof()),
        ::uNewField("_source", NULL, offsetof(List1_Enumerator__Fuse_Input_PointerReleasedHandler, _source), ::app::Uno::Collections::List__Fuse_Input_PointerReleasedHandler__typeof()),
        ::uNewField("_version", NULL, offsetof(List1_Enumerator__Fuse_Input_PointerReleasedHandler, _version), ::app::Uno::Int__typeof()));

    type->SetFunctions(3,
        ::uNewFunctionVoid("Dispose", List1_Enumerator__Fuse_Input_PointerReleasedHandler__Dispose, 0, false),
        ::uNewFunction("get_Current", List1_Enumerator__Fuse_Input_PointerReleasedHandler__get_Current, 0, false, ::app::Fuse::Input::PointerReleasedHandler__typeof()),
        ::uNewFunction("MoveNext", List1_Enumerator__Fuse_Input_PointerReleasedHandler__MoveNext, 0, false, ::app::Uno::Bool__typeof()));

    ::uRegisterType(type);
    return type;
}

void List1_Enumerator__Fuse_Input_PointerReleasedHandler___ObjInit(List1_Enumerator__Fuse_Input_PointerReleasedHandler* __this, ::app::Uno::Collections::List__Fuse_Input_PointerReleasedHandler* source)
{
    __this->_source = source;
    __this->_version = ::uPtr< ::app::Uno::Collections::List__Fuse_Input_PointerReleasedHandler*>(source)->_version;
    __this->_iterator = -1;
}

void List1_Enumerator__Fuse_Input_PointerReleasedHandler__Dispose(List1_Enumerator__Fuse_Input_PointerReleasedHandler* __this)
{
}

::uDelegate* List1_Enumerator__Fuse_Input_PointerReleasedHandler__get_Current(List1_Enumerator__Fuse_Input_PointerReleasedHandler* __this)
{
    return __this->_current;
}

bool List1_Enumerator__Fuse_Input_PointerReleasedHandler__MoveNext(List1_Enumerator__Fuse_Input_PointerReleasedHandler* __this)
{
    if (::uPtr< ::app::Uno::Collections::List__Fuse_Input_PointerReleasedHandler*>(__this->_source)->_version != __this->_version)
    {
        U_THROW(::app::Uno::InvalidOperationException__New_4(NULL, ::uGetConstString("Collection was modified")));
    }

    __this->_iterator++;

    if (__this->_iterator < ::uPtr< ::app::Uno::Collections::List__Fuse_Input_PointerReleasedHandler*>(__this->_source)->_used)
    {
        __this->_current = ::uPtr< ::uArray*>(::uPtr< ::app::Uno::Collections::List__Fuse_Input_PointerReleasedHandler*>(__this->_source)->_data)->Item< ::uDelegate*>(__this->_iterator);
        return true;
    }

    return false;
}

List1_Enumerator__Fuse_Input_PointerReleasedHandler List1_Enumerator__Fuse_Input_PointerReleasedHandler__New_1(::uStatic* __this, ::app::Uno::Collections::List__Fuse_Input_PointerReleasedHandler* source)
{
    List1_Enumerator__Fuse_Input_PointerReleasedHandler inst = ::uDefault< List1_Enumerator__Fuse_Input_PointerReleasedHandler>();
    inst._ObjInit(source);
    return inst;
}

void List1_Enumerator__Fuse_Input_PointerReleasedHandler__Uno_Collections_IEnumerator_Reset(List1_Enumerator__Fuse_Input_PointerReleasedHandler* __this)
{
    __this->_iterator = -1;
    __this->_current = NULL;
    __this->_version = ::uPtr< ::app::Uno::Collections::List__Fuse_Input_PointerReleasedHandler*>(__this->_source)->_version;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Collections\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

List1_Enumerator__Fuse_Input_PointerWheelMovedHandler__uType* List1_Enumerator__Fuse_Input_PointerWheelMovedHandler__typeof()
{
    static ::uStaticStrong<List1_Enumerator__Fuse_Input_PointerWheelMovedHandler__uType*> type;
    if (type != NULL) return type;

    type = (List1_Enumerator__Fuse_Input_PointerWheelMovedHandler__uType*)::uAllocStructType(sizeof(List1_Enumerator__Fuse_Input_PointerWheelMovedHandler__uType), "Uno.Collections.List<Fuse.Input.PointerWheelMovedHandler>.Enumerator", sizeof(List1_Enumerator__Fuse_Input_PointerWheelMovedHandler), 3, 2, 0);

    type->__interface_2.__fp_Reset = (void(*)(void*))List1_Enumerator__Fuse_Input_PointerWheelMovedHandler__Uno_Collections_IEnumerator_Reset;
    type->__interface_0.__fp_get_Current = (::uDelegate*(*)(void*))List1_Enumerator__Fuse_Input_PointerWheelMovedHandler__get_Current;
    type->__interface_1.__fp_Dispose = (void(*)(void*))List1_Enumerator__Fuse_Input_PointerWheelMovedHandler__Dispose;
    type->__interface_2.__fp_MoveNext = (bool(*)(void*))List1_Enumerator__Fuse_Input_PointerWheelMovedHandler__MoveNext;

    type->SetInterfaces(
        ::app::Uno::Collections::IEnumerator__Fuse_Input_PointerWheelMovedHandler__typeof(), offsetof(List1_Enumerator__Fuse_Input_PointerWheelMovedHandler__uType, __interface_0),
        ::app::Uno::IDisposable__typeof(), offsetof(List1_Enumerator__Fuse_Input_PointerWheelMovedHandler__uType, __interface_1),
        ::app::Uno::Collections::IEnumerator__typeof(), offsetof(List1_Enumerator__Fuse_Input_PointerWheelMovedHandler__uType, __interface_2));

    type->SetStrongRefs(
        "_current", offsetof(List1_Enumerator__Fuse_Input_PointerWheelMovedHandler, _current),
        "_source", offsetof(List1_Enumerator__Fuse_Input_PointerWheelMovedHandler, _source));

    type->SetFields(4,
        ::uNewField("_current", NULL, offsetof(List1_Enumerator__Fuse_Input_PointerWheelMovedHandler, _current), ::app::Fuse::Input::PointerWheelMovedHandler__typeof()),
        ::uNewField("_iterator", NULL, offsetof(List1_Enumerator__Fuse_Input_PointerWheelMovedHandler, _iterator), ::app::Uno::Int__typeof()),
        ::uNewField("_source", NULL, offsetof(List1_Enumerator__Fuse_Input_PointerWheelMovedHandler, _source), ::app::Uno::Collections::List__Fuse_Input_PointerWheelMovedHandler__typeof()),
        ::uNewField("_version", NULL, offsetof(List1_Enumerator__Fuse_Input_PointerWheelMovedHandler, _version), ::app::Uno::Int__typeof()));

    type->SetFunctions(3,
        ::uNewFunctionVoid("Dispose", List1_Enumerator__Fuse_Input_PointerWheelMovedHandler__Dispose, 0, false),
        ::uNewFunction("get_Current", List1_Enumerator__Fuse_Input_PointerWheelMovedHandler__get_Current, 0, false, ::app::Fuse::Input::PointerWheelMovedHandler__typeof()),
        ::uNewFunction("MoveNext", List1_Enumerator__Fuse_Input_PointerWheelMovedHandler__MoveNext, 0, false, ::app::Uno::Bool__typeof()));

    ::uRegisterType(type);
    return type;
}

void List1_Enumerator__Fuse_Input_PointerWheelMovedHandler___ObjInit(List1_Enumerator__Fuse_Input_PointerWheelMovedHandler* __this, ::app::Uno::Collections::List__Fuse_Input_PointerWheelMovedHandler* source)
{
    __this->_source = source;
    __this->_version = ::uPtr< ::app::Uno::Collections::List__Fuse_Input_PointerWheelMovedHandler*>(source)->_version;
    __this->_iterator = -1;
}

void List1_Enumerator__Fuse_Input_PointerWheelMovedHandler__Dispose(List1_Enumerator__Fuse_Input_PointerWheelMovedHandler* __this)
{
}

::uDelegate* List1_Enumerator__Fuse_Input_PointerWheelMovedHandler__get_Current(List1_Enumerator__Fuse_Input_PointerWheelMovedHandler* __this)
{
    return __this->_current;
}

bool List1_Enumerator__Fuse_Input_PointerWheelMovedHandler__MoveNext(List1_Enumerator__Fuse_Input_PointerWheelMovedHandler* __this)
{
    if (::uPtr< ::app::Uno::Collections::List__Fuse_Input_PointerWheelMovedHandler*>(__this->_source)->_version != __this->_version)
    {
        U_THROW(::app::Uno::InvalidOperationException__New_4(NULL, ::uGetConstString("Collection was modified")));
    }

    __this->_iterator++;

    if (__this->_iterator < ::uPtr< ::app::Uno::Collections::List__Fuse_Input_PointerWheelMovedHandler*>(__this->_source)->_used)
    {
        __this->_current = ::uPtr< ::uArray*>(::uPtr< ::app::Uno::Collections::List__Fuse_Input_PointerWheelMovedHandler*>(__this->_source)->_data)->Item< ::uDelegate*>(__this->_iterator);
        return true;
    }

    return false;
}

List1_Enumerator__Fuse_Input_PointerWheelMovedHandler List1_Enumerator__Fuse_Input_PointerWheelMovedHandler__New_1(::uStatic* __this, ::app::Uno::Collections::List__Fuse_Input_PointerWheelMovedHandler* source)
{
    List1_Enumerator__Fuse_Input_PointerWheelMovedHandler inst = ::uDefault< List1_Enumerator__Fuse_Input_PointerWheelMovedHandler>();
    inst._ObjInit(source);
    return inst;
}

void List1_Enumerator__Fuse_Input_PointerWheelMovedHandler__Uno_Collections_IEnumerator_Reset(List1_Enumerator__Fuse_Input_PointerWheelMovedHandler* __this)
{
    __this->_iterator = -1;
    __this->_current = NULL;
    __this->_version = ::uPtr< ::app::Uno::Collections::List__Fuse_Input_PointerWheelMovedHandler*>(__this->_source)->_version;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Collections\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

List1_Enumerator__Fuse_Input_TextEnteredHandler__uType* List1_Enumerator__Fuse_Input_TextEnteredHandler__typeof()
{
    static ::uStaticStrong<List1_Enumerator__Fuse_Input_TextEnteredHandler__uType*> type;
    if (type != NULL) return type;

    type = (List1_Enumerator__Fuse_Input_TextEnteredHandler__uType*)::uAllocStructType(sizeof(List1_Enumerator__Fuse_Input_TextEnteredHandler__uType), "Uno.Collections.List<Fuse.Input.TextEnteredHandler>.Enumerator", sizeof(List1_Enumerator__Fuse_Input_TextEnteredHandler), 3, 2, 0);

    type->__interface_2.__fp_Reset = (void(*)(void*))List1_Enumerator__Fuse_Input_TextEnteredHandler__Uno_Collections_IEnumerator_Reset;
    type->__interface_0.__fp_get_Current = (::uDelegate*(*)(void*))List1_Enumerator__Fuse_Input_TextEnteredHandler__get_Current;
    type->__interface_1.__fp_Dispose = (void(*)(void*))List1_Enumerator__Fuse_Input_TextEnteredHandler__Dispose;
    type->__interface_2.__fp_MoveNext = (bool(*)(void*))List1_Enumerator__Fuse_Input_TextEnteredHandler__MoveNext;

    type->SetInterfaces(
        ::app::Uno::Collections::IEnumerator__Fuse_Input_TextEnteredHandler__typeof(), offsetof(List1_Enumerator__Fuse_Input_TextEnteredHandler__uType, __interface_0),
        ::app::Uno::IDisposable__typeof(), offsetof(List1_Enumerator__Fuse_Input_TextEnteredHandler__uType, __interface_1),
        ::app::Uno::Collections::IEnumerator__typeof(), offsetof(List1_Enumerator__Fuse_Input_TextEnteredHandler__uType, __interface_2));

    type->SetStrongRefs(
        "_current", offsetof(List1_Enumerator__Fuse_Input_TextEnteredHandler, _current),
        "_source", offsetof(List1_Enumerator__Fuse_Input_TextEnteredHandler, _source));

    type->SetFields(4,
        ::uNewField("_current", NULL, offsetof(List1_Enumerator__Fuse_Input_TextEnteredHandler, _current), ::app::Fuse::Input::TextEnteredHandler__typeof()),
        ::uNewField("_iterator", NULL, offsetof(List1_Enumerator__Fuse_Input_TextEnteredHandler, _iterator), ::app::Uno::Int__typeof()),
        ::uNewField("_source", NULL, offsetof(List1_Enumerator__Fuse_Input_TextEnteredHandler, _source), ::app::Uno::Collections::List__Fuse_Input_TextEnteredHandler__typeof()),
        ::uNewField("_version", NULL, offsetof(List1_Enumerator__Fuse_Input_TextEnteredHandler, _version), ::app::Uno::Int__typeof()));

    type->SetFunctions(3,
        ::uNewFunctionVoid("Dispose", List1_Enumerator__Fuse_Input_TextEnteredHandler__Dispose, 0, false),
        ::uNewFunction("get_Current", List1_Enumerator__Fuse_Input_TextEnteredHandler__get_Current, 0, false, ::app::Fuse::Input::TextEnteredHandler__typeof()),
        ::uNewFunction("MoveNext", List1_Enumerator__Fuse_Input_TextEnteredHandler__MoveNext, 0, false, ::app::Uno::Bool__typeof()));

    ::uRegisterType(type);
    return type;
}

void List1_Enumerator__Fuse_Input_TextEnteredHandler___ObjInit(List1_Enumerator__Fuse_Input_TextEnteredHandler* __this, ::app::Uno::Collections::List__Fuse_Input_TextEnteredHandler* source)
{
    __this->_source = source;
    __this->_version = ::uPtr< ::app::Uno::Collections::List__Fuse_Input_TextEnteredHandler*>(source)->_version;
    __this->_iterator = -1;
}

void List1_Enumerator__Fuse_Input_TextEnteredHandler__Dispose(List1_Enumerator__Fuse_Input_TextEnteredHandler* __this)
{
}

::uDelegate* List1_Enumerator__Fuse_Input_TextEnteredHandler__get_Current(List1_Enumerator__Fuse_Input_TextEnteredHandler* __this)
{
    return __this->_current;
}

bool List1_Enumerator__Fuse_Input_TextEnteredHandler__MoveNext(List1_Enumerator__Fuse_Input_TextEnteredHandler* __this)
{
    if (::uPtr< ::app::Uno::Collections::List__Fuse_Input_TextEnteredHandler*>(__this->_source)->_version != __this->_version)
    {
        U_THROW(::app::Uno::InvalidOperationException__New_4(NULL, ::uGetConstString("Collection was modified")));
    }

    __this->_iterator++;

    if (__this->_iterator < ::uPtr< ::app::Uno::Collections::List__Fuse_Input_TextEnteredHandler*>(__this->_source)->_used)
    {
        __this->_current = ::uPtr< ::uArray*>(::uPtr< ::app::Uno::Collections::List__Fuse_Input_TextEnteredHandler*>(__this->_source)->_data)->Item< ::uDelegate*>(__this->_iterator);
        return true;
    }

    return false;
}

List1_Enumerator__Fuse_Input_TextEnteredHandler List1_Enumerator__Fuse_Input_TextEnteredHandler__New_1(::uStatic* __this, ::app::Uno::Collections::List__Fuse_Input_TextEnteredHandler* source)
{
    List1_Enumerator__Fuse_Input_TextEnteredHandler inst = ::uDefault< List1_Enumerator__Fuse_Input_TextEnteredHandler>();
    inst._ObjInit(source);
    return inst;
}

void List1_Enumerator__Fuse_Input_TextEnteredHandler__Uno_Collections_IEnumerator_Reset(List1_Enumerator__Fuse_Input_TextEnteredHandler* __this)
{
    __this->_iterator = -1;
    __this->_current = NULL;
    __this->_version = ::uPtr< ::app::Uno::Collections::List__Fuse_Input_TextEnteredHandler*>(__this->_source)->_version;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Collections\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

List1_Enumerator__Fuse_iOS_StatusBarConfig__uType* List1_Enumerator__Fuse_iOS_StatusBarConfig__typeof()
{
    static ::uStaticStrong<List1_Enumerator__Fuse_iOS_StatusBarConfig__uType*> type;
    if (type != NULL) return type;

    type = (List1_Enumerator__Fuse_iOS_StatusBarConfig__uType*)::uAllocStructType(sizeof(List1_Enumerator__Fuse_iOS_StatusBarConfig__uType), "Uno.Collections.List<Fuse.iOS.StatusBarConfig>.Enumerator", sizeof(List1_Enumerator__Fuse_iOS_StatusBarConfig), 3, 2, 0);

    type->__interface_2.__fp_Reset = (void(*)(void*))List1_Enumerator__Fuse_iOS_StatusBarConfig__Uno_Collections_IEnumerator_Reset;
    type->__interface_0.__fp_get_Current = (::app::Fuse::iOS::StatusBarConfig*(*)(void*))List1_Enumerator__Fuse_iOS_StatusBarConfig__get_Current;
    type->__interface_1.__fp_Dispose = (void(*)(void*))List1_Enumerator__Fuse_iOS_StatusBarConfig__Dispose;
    type->__interface_2.__fp_MoveNext = (bool(*)(void*))List1_Enumerator__Fuse_iOS_StatusBarConfig__MoveNext;

    type->SetInterfaces(
        ::app::Uno::Collections::IEnumerator__Fuse_iOS_StatusBarConfig__typeof(), offsetof(List1_Enumerator__Fuse_iOS_StatusBarConfig__uType, __interface_0),
        ::app::Uno::IDisposable__typeof(), offsetof(List1_Enumerator__Fuse_iOS_StatusBarConfig__uType, __interface_1),
        ::app::Uno::Collections::IEnumerator__typeof(), offsetof(List1_Enumerator__Fuse_iOS_StatusBarConfig__uType, __interface_2));

    type->SetStrongRefs(
        "_current", offsetof(List1_Enumerator__Fuse_iOS_StatusBarConfig, _current),
        "_source", offsetof(List1_Enumerator__Fuse_iOS_StatusBarConfig, _source));

    type->SetFields(4,
        ::uNewField("_current", NULL, offsetof(List1_Enumerator__Fuse_iOS_StatusBarConfig, _current), ::app::Fuse::iOS::StatusBarConfig__typeof()),
        ::uNewField("_iterator", NULL, offsetof(List1_Enumerator__Fuse_iOS_StatusBarConfig, _iterator), ::app::Uno::Int__typeof()),
        ::uNewField("_source", NULL, offsetof(List1_Enumerator__Fuse_iOS_StatusBarConfig, _source), ::app::Uno::Collections::List__Fuse_iOS_StatusBarConfig__typeof()),
        ::uNewField("_version", NULL, offsetof(List1_Enumerator__Fuse_iOS_StatusBarConfig, _version), ::app::Uno::Int__typeof()));

    type->SetFunctions(3,
        ::uNewFunctionVoid("Dispose", List1_Enumerator__Fuse_iOS_StatusBarConfig__Dispose, 0, false),
        ::uNewFunction("get_Current", List1_Enumerator__Fuse_iOS_StatusBarConfig__get_Current, 0, false, ::app::Fuse::iOS::StatusBarConfig__typeof()),
        ::uNewFunction("MoveNext", List1_Enumerator__Fuse_iOS_StatusBarConfig__MoveNext, 0, false, ::app::Uno::Bool__typeof()));

    ::uRegisterType(type);
    return type;
}

void List1_Enumerator__Fuse_iOS_StatusBarConfig___ObjInit(List1_Enumerator__Fuse_iOS_StatusBarConfig* __this, ::app::Uno::Collections::List__Fuse_iOS_StatusBarConfig* source)
{
    __this->_source = source;
    __this->_version = ::uPtr< ::app::Uno::Collections::List__Fuse_iOS_StatusBarConfig*>(source)->_version;
    __this->_iterator = -1;
}

void List1_Enumerator__Fuse_iOS_StatusBarConfig__Dispose(List1_Enumerator__Fuse_iOS_StatusBarConfig* __this)
{
}

::app::Fuse::iOS::StatusBarConfig* List1_Enumerator__Fuse_iOS_StatusBarConfig__get_Current(List1_Enumerator__Fuse_iOS_StatusBarConfig* __this)
{
    return __this->_current;
}

bool List1_Enumerator__Fuse_iOS_StatusBarConfig__MoveNext(List1_Enumerator__Fuse_iOS_StatusBarConfig* __this)
{
    if (::uPtr< ::app::Uno::Collections::List__Fuse_iOS_StatusBarConfig*>(__this->_source)->_version != __this->_version)
    {
        U_THROW(::app::Uno::InvalidOperationException__New_4(NULL, ::uGetConstString("Collection was modified")));
    }

    __this->_iterator++;

    if (__this->_iterator < ::uPtr< ::app::Uno::Collections::List__Fuse_iOS_StatusBarConfig*>(__this->_source)->_used)
    {
        __this->_current = ::uPtr< ::uArray*>(::uPtr< ::app::Uno::Collections::List__Fuse_iOS_StatusBarConfig*>(__this->_source)->_data)->Item< ::app::Fuse::iOS::StatusBarConfig*>(__this->_iterator);
        return true;
    }

    return false;
}

List1_Enumerator__Fuse_iOS_StatusBarConfig List1_Enumerator__Fuse_iOS_StatusBarConfig__New_1(::uStatic* __this, ::app::Uno::Collections::List__Fuse_iOS_StatusBarConfig* source)
{
    List1_Enumerator__Fuse_iOS_StatusBarConfig inst = ::uDefault< List1_Enumerator__Fuse_iOS_StatusBarConfig>();
    inst._ObjInit(source);
    return inst;
}

void List1_Enumerator__Fuse_iOS_StatusBarConfig__Uno_Collections_IEnumerator_Reset(List1_Enumerator__Fuse_iOS_StatusBarConfig* __this)
{
    __this->_iterator = -1;
    __this->_current = NULL;
    __this->_version = ::uPtr< ::app::Uno::Collections::List__Fuse_iOS_StatusBarConfig*>(__this->_source)->_version;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Collections\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

List1_Enumerator__Fuse_IViewport__uType* List1_Enumerator__Fuse_IViewport__typeof()
{
    static ::uStaticStrong<List1_Enumerator__Fuse_IViewport__uType*> type;
    if (type != NULL) return type;

    type = (List1_Enumerator__Fuse_IViewport__uType*)::uAllocStructType(sizeof(List1_Enumerator__Fuse_IViewport__uType), "Uno.Collections.List<Fuse.IViewport>.Enumerator", sizeof(List1_Enumerator__Fuse_IViewport), 3, 2, 0);

    type->__interface_2.__fp_Reset = (void(*)(void*))List1_Enumerator__Fuse_IViewport__Uno_Collections_IEnumerator_Reset;
    type->__interface_0.__fp_get_Current = (::uObject*(*)(void*))List1_Enumerator__Fuse_IViewport__get_Current;
    type->__interface_1.__fp_Dispose = (void(*)(void*))List1_Enumerator__Fuse_IViewport__Dispose;
    type->__interface_2.__fp_MoveNext = (bool(*)(void*))List1_Enumerator__Fuse_IViewport__MoveNext;

    type->SetInterfaces(
        ::app::Uno::Collections::IEnumerator__Fuse_IViewport__typeof(), offsetof(List1_Enumerator__Fuse_IViewport__uType, __interface_0),
        ::app::Uno::IDisposable__typeof(), offsetof(List1_Enumerator__Fuse_IViewport__uType, __interface_1),
        ::app::Uno::Collections::IEnumerator__typeof(), offsetof(List1_Enumerator__Fuse_IViewport__uType, __interface_2));

    type->SetStrongRefs(
        "_current", offsetof(List1_Enumerator__Fuse_IViewport, _current),
        "_source", offsetof(List1_Enumerator__Fuse_IViewport, _source));

    type->SetFields(4,
        ::uNewField("_current", NULL, offsetof(List1_Enumerator__Fuse_IViewport, _current), ::app::Fuse::IViewport__typeof()),
        ::uNewField("_iterator", NULL, offsetof(List1_Enumerator__Fuse_IViewport, _iterator), ::app::Uno::Int__typeof()),
        ::uNewField("_source", NULL, offsetof(List1_Enumerator__Fuse_IViewport, _source), ::app::Uno::Collections::List__Fuse_IViewport__typeof()),
        ::uNewField("_version", NULL, offsetof(List1_Enumerator__Fuse_IViewport, _version), ::app::Uno::Int__typeof()));

    type->SetFunctions(3,
        ::uNewFunctionVoid("Dispose", List1_Enumerator__Fuse_IViewport__Dispose, 0, false),
        ::uNewFunction("get_Current", List1_Enumerator__Fuse_IViewport__get_Current, 0, false, ::app::Fuse::IViewport__typeof()),
        ::uNewFunction("MoveNext", List1_Enumerator__Fuse_IViewport__MoveNext, 0, false, ::app::Uno::Bool__typeof()));

    ::uRegisterType(type);
    return type;
}

void List1_Enumerator__Fuse_IViewport___ObjInit(List1_Enumerator__Fuse_IViewport* __this, ::app::Uno::Collections::List__Fuse_IViewport* source)
{
    __this->_source = source;
    __this->_version = ::uPtr< ::app::Uno::Collections::List__Fuse_IViewport*>(source)->_version;
    __this->_iterator = -1;
}

void List1_Enumerator__Fuse_IViewport__Dispose(List1_Enumerator__Fuse_IViewport* __this)
{
}

::uObject* List1_Enumerator__Fuse_IViewport__get_Current(List1_Enumerator__Fuse_IViewport* __this)
{
    return __this->_current;
}

bool List1_Enumerator__Fuse_IViewport__MoveNext(List1_Enumerator__Fuse_IViewport* __this)
{
    if (::uPtr< ::app::Uno::Collections::List__Fuse_IViewport*>(__this->_source)->_version != __this->_version)
    {
        U_THROW(::app::Uno::InvalidOperationException__New_4(NULL, ::uGetConstString("Collection was modified")));
    }

    __this->_iterator++;

    if (__this->_iterator < ::uPtr< ::app::Uno::Collections::List__Fuse_IViewport*>(__this->_source)->_used)
    {
        __this->_current = ::uPtr< ::uArray*>(::uPtr< ::app::Uno::Collections::List__Fuse_IViewport*>(__this->_source)->_data)->Item< ::uObject*>(__this->_iterator);
        return true;
    }

    return false;
}

List1_Enumerator__Fuse_IViewport List1_Enumerator__Fuse_IViewport__New_1(::uStatic* __this, ::app::Uno::Collections::List__Fuse_IViewport* source)
{
    List1_Enumerator__Fuse_IViewport inst = ::uDefault< List1_Enumerator__Fuse_IViewport>();
    inst._ObjInit(source);
    return inst;
}

void List1_Enumerator__Fuse_IViewport__Uno_Collections_IEnumerator_Reset(List1_Enumerator__Fuse_IViewport* __this)
{
    __this->_iterator = -1;
    __this->_current = NULL;
    __this->_version = ::uPtr< ::app::Uno::Collections::List__Fuse_IViewport*>(__this->_source)->_version;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Collections\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

List1_Enumerator__Fuse_Layouts_Column__uType* List1_Enumerator__Fuse_Layouts_Column__typeof()
{
    static ::uStaticStrong<List1_Enumerator__Fuse_Layouts_Column__uType*> type;
    if (type != NULL) return type;

    type = (List1_Enumerator__Fuse_Layouts_Column__uType*)::uAllocStructType(sizeof(List1_Enumerator__Fuse_Layouts_Column__uType), "Uno.Collections.List<Fuse.Layouts.Column>.Enumerator", sizeof(List1_Enumerator__Fuse_Layouts_Column), 3, 2, 0);

    type->__interface_2.__fp_Reset = (void(*)(void*))List1_Enumerator__Fuse_Layouts_Column__Uno_Collections_IEnumerator_Reset;
    type->__interface_0.__fp_get_Current = (::app::Fuse::Layouts::Column*(*)(void*))List1_Enumerator__Fuse_Layouts_Column__get_Current;
    type->__interface_1.__fp_Dispose = (void(*)(void*))List1_Enumerator__Fuse_Layouts_Column__Dispose;
    type->__interface_2.__fp_MoveNext = (bool(*)(void*))List1_Enumerator__Fuse_Layouts_Column__MoveNext;

    type->SetInterfaces(
        ::app::Uno::Collections::IEnumerator__Fuse_Layouts_Column__typeof(), offsetof(List1_Enumerator__Fuse_Layouts_Column__uType, __interface_0),
        ::app::Uno::IDisposable__typeof(), offsetof(List1_Enumerator__Fuse_Layouts_Column__uType, __interface_1),
        ::app::Uno::Collections::IEnumerator__typeof(), offsetof(List1_Enumerator__Fuse_Layouts_Column__uType, __interface_2));

    type->SetStrongRefs(
        "_current", offsetof(List1_Enumerator__Fuse_Layouts_Column, _current),
        "_source", offsetof(List1_Enumerator__Fuse_Layouts_Column, _source));

    type->SetFields(4,
        ::uNewField("_current", NULL, offsetof(List1_Enumerator__Fuse_Layouts_Column, _current), ::app::Fuse::Layouts::Column__typeof()),
        ::uNewField("_iterator", NULL, offsetof(List1_Enumerator__Fuse_Layouts_Column, _iterator), ::app::Uno::Int__typeof()),
        ::uNewField("_source", NULL, offsetof(List1_Enumerator__Fuse_Layouts_Column, _source), ::app::Uno::Collections::List__Fuse_Layouts_Column__typeof()),
        ::uNewField("_version", NULL, offsetof(List1_Enumerator__Fuse_Layouts_Column, _version), ::app::Uno::Int__typeof()));

    type->SetFunctions(3,
        ::uNewFunctionVoid("Dispose", List1_Enumerator__Fuse_Layouts_Column__Dispose, 0, false),
        ::uNewFunction("get_Current", List1_Enumerator__Fuse_Layouts_Column__get_Current, 0, false, ::app::Fuse::Layouts::Column__typeof()),
        ::uNewFunction("MoveNext", List1_Enumerator__Fuse_Layouts_Column__MoveNext, 0, false, ::app::Uno::Bool__typeof()));

    ::uRegisterType(type);
    return type;
}

void List1_Enumerator__Fuse_Layouts_Column___ObjInit(List1_Enumerator__Fuse_Layouts_Column* __this, ::app::Uno::Collections::List__Fuse_Layouts_Column* source)
{
    __this->_source = source;
    __this->_version = ::uPtr< ::app::Uno::Collections::List__Fuse_Layouts_Column*>(source)->_version;
    __this->_iterator = -1;
}

void List1_Enumerator__Fuse_Layouts_Column__Dispose(List1_Enumerator__Fuse_Layouts_Column* __this)
{
}

::app::Fuse::Layouts::Column* List1_Enumerator__Fuse_Layouts_Column__get_Current(List1_Enumerator__Fuse_Layouts_Column* __this)
{
    return __this->_current;
}

bool List1_Enumerator__Fuse_Layouts_Column__MoveNext(List1_Enumerator__Fuse_Layouts_Column* __this)
{
    if (::uPtr< ::app::Uno::Collections::List__Fuse_Layouts_Column*>(__this->_source)->_version != __this->_version)
    {
        U_THROW(::app::Uno::InvalidOperationException__New_4(NULL, ::uGetConstString("Collection was modified")));
    }

    __this->_iterator++;

    if (__this->_iterator < ::uPtr< ::app::Uno::Collections::List__Fuse_Layouts_Column*>(__this->_source)->_used)
    {
        __this->_current = ::uPtr< ::uArray*>(::uPtr< ::app::Uno::Collections::List__Fuse_Layouts_Column*>(__this->_source)->_data)->Item< ::app::Fuse::Layouts::Column*>(__this->_iterator);
        return true;
    }

    return false;
}

List1_Enumerator__Fuse_Layouts_Column List1_Enumerator__Fuse_Layouts_Column__New_1(::uStatic* __this, ::app::Uno::Collections::List__Fuse_Layouts_Column* source)
{
    List1_Enumerator__Fuse_Layouts_Column inst = ::uDefault< List1_Enumerator__Fuse_Layouts_Column>();
    inst._ObjInit(source);
    return inst;
}

void List1_Enumerator__Fuse_Layouts_Column__Uno_Collections_IEnumerator_Reset(List1_Enumerator__Fuse_Layouts_Column* __this)
{
    __this->_iterator = -1;
    __this->_current = NULL;
    __this->_version = ::uPtr< ::app::Uno::Collections::List__Fuse_Layouts_Column*>(__this->_source)->_version;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Collections\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

List1_Enumerator__Fuse_Layouts_Row__uType* List1_Enumerator__Fuse_Layouts_Row__typeof()
{
    static ::uStaticStrong<List1_Enumerator__Fuse_Layouts_Row__uType*> type;
    if (type != NULL) return type;

    type = (List1_Enumerator__Fuse_Layouts_Row__uType*)::uAllocStructType(sizeof(List1_Enumerator__Fuse_Layouts_Row__uType), "Uno.Collections.List<Fuse.Layouts.Row>.Enumerator", sizeof(List1_Enumerator__Fuse_Layouts_Row), 3, 2, 0);

    type->__interface_2.__fp_Reset = (void(*)(void*))List1_Enumerator__Fuse_Layouts_Row__Uno_Collections_IEnumerator_Reset;
    type->__interface_0.__fp_get_Current = (::app::Fuse::Layouts::Row*(*)(void*))List1_Enumerator__Fuse_Layouts_Row__get_Current;
    type->__interface_1.__fp_Dispose = (void(*)(void*))List1_Enumerator__Fuse_Layouts_Row__Dispose;
    type->__interface_2.__fp_MoveNext = (bool(*)(void*))List1_Enumerator__Fuse_Layouts_Row__MoveNext;

    type->SetInterfaces(
        ::app::Uno::Collections::IEnumerator__Fuse_Layouts_Row__typeof(), offsetof(List1_Enumerator__Fuse_Layouts_Row__uType, __interface_0),
        ::app::Uno::IDisposable__typeof(), offsetof(List1_Enumerator__Fuse_Layouts_Row__uType, __interface_1),
        ::app::Uno::Collections::IEnumerator__typeof(), offsetof(List1_Enumerator__Fuse_Layouts_Row__uType, __interface_2));

    type->SetStrongRefs(
        "_current", offsetof(List1_Enumerator__Fuse_Layouts_Row, _current),
        "_source", offsetof(List1_Enumerator__Fuse_Layouts_Row, _source));

    type->SetFields(4,
        ::uNewField("_current", NULL, offsetof(List1_Enumerator__Fuse_Layouts_Row, _current), ::app::Fuse::Layouts::Row__typeof()),
        ::uNewField("_iterator", NULL, offsetof(List1_Enumerator__Fuse_Layouts_Row, _iterator), ::app::Uno::Int__typeof()),
        ::uNewField("_source", NULL, offsetof(List1_Enumerator__Fuse_Layouts_Row, _source), ::app::Uno::Collections::List__Fuse_Layouts_Row__typeof()),
        ::uNewField("_version", NULL, offsetof(List1_Enumerator__Fuse_Layouts_Row, _version), ::app::Uno::Int__typeof()));

    type->SetFunctions(3,
        ::uNewFunctionVoid("Dispose", List1_Enumerator__Fuse_Layouts_Row__Dispose, 0, false),
        ::uNewFunction("get_Current", List1_Enumerator__Fuse_Layouts_Row__get_Current, 0, false, ::app::Fuse::Layouts::Row__typeof()),
        ::uNewFunction("MoveNext", List1_Enumerator__Fuse_Layouts_Row__MoveNext, 0, false, ::app::Uno::Bool__typeof()));

    ::uRegisterType(type);
    return type;
}

void List1_Enumerator__Fuse_Layouts_Row___ObjInit(List1_Enumerator__Fuse_Layouts_Row* __this, ::app::Uno::Collections::List__Fuse_Layouts_Row* source)
{
    __this->_source = source;
    __this->_version = ::uPtr< ::app::Uno::Collections::List__Fuse_Layouts_Row*>(source)->_version;
    __this->_iterator = -1;
}

void List1_Enumerator__Fuse_Layouts_Row__Dispose(List1_Enumerator__Fuse_Layouts_Row* __this)
{
}

::app::Fuse::Layouts::Row* List1_Enumerator__Fuse_Layouts_Row__get_Current(List1_Enumerator__Fuse_Layouts_Row* __this)
{
    return __this->_current;
}

bool List1_Enumerator__Fuse_Layouts_Row__MoveNext(List1_Enumerator__Fuse_Layouts_Row* __this)
{
    if (::uPtr< ::app::Uno::Collections::List__Fuse_Layouts_Row*>(__this->_source)->_version != __this->_version)
    {
        U_THROW(::app::Uno::InvalidOperationException__New_4(NULL, ::uGetConstString("Collection was modified")));
    }

    __this->_iterator++;

    if (__this->_iterator < ::uPtr< ::app::Uno::Collections::List__Fuse_Layouts_Row*>(__this->_source)->_used)
    {
        __this->_current = ::uPtr< ::uArray*>(::uPtr< ::app::Uno::Collections::List__Fuse_Layouts_Row*>(__this->_source)->_data)->Item< ::app::Fuse::Layouts::Row*>(__this->_iterator);
        return true;
    }

    return false;
}

List1_Enumerator__Fuse_Layouts_Row List1_Enumerator__Fuse_Layouts_Row__New_1(::uStatic* __this, ::app::Uno::Collections::List__Fuse_Layouts_Row* source)
{
    List1_Enumerator__Fuse_Layouts_Row inst = ::uDefault< List1_Enumerator__Fuse_Layouts_Row>();
    inst._ObjInit(source);
    return inst;
}

void List1_Enumerator__Fuse_Layouts_Row__Uno_Collections_IEnumerator_Reset(List1_Enumerator__Fuse_Layouts_Row* __this)
{
    __this->_iterator = -1;
    __this->_current = NULL;
    __this->_version = ::uPtr< ::app::Uno::Collections::List__Fuse_Layouts_Row*>(__this->_source)->_version;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Collections\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

List1_Enumerator__Fuse_Navigation_INavigationAnimator__uType* List1_Enumerator__Fuse_Navigation_INavigationAnimator__typeof()
{
    static ::uStaticStrong<List1_Enumerator__Fuse_Navigation_INavigationAnimator__uType*> type;
    if (type != NULL) return type;

    type = (List1_Enumerator__Fuse_Navigation_INavigationAnimator__uType*)::uAllocStructType(sizeof(List1_Enumerator__Fuse_Navigation_INavigationAnimator__uType), "Uno.Collections.List<Fuse.Navigation.INavigationAnimator>.Enumerator", sizeof(List1_Enumerator__Fuse_Navigation_INavigationAnimator), 3, 2, 0);

    type->__interface_2.__fp_Reset = (void(*)(void*))List1_Enumerator__Fuse_Navigation_INavigationAnimator__Uno_Collections_IEnumerator_Reset;
    type->__interface_0.__fp_get_Current = (::uObject*(*)(void*))List1_Enumerator__Fuse_Navigation_INavigationAnimator__get_Current;
    type->__interface_1.__fp_Dispose = (void(*)(void*))List1_Enumerator__Fuse_Navigation_INavigationAnimator__Dispose;
    type->__interface_2.__fp_MoveNext = (bool(*)(void*))List1_Enumerator__Fuse_Navigation_INavigationAnimator__MoveNext;

    type->SetInterfaces(
        ::app::Uno::Collections::IEnumerator__Fuse_Navigation_INavigationAnimator__typeof(), offsetof(List1_Enumerator__Fuse_Navigation_INavigationAnimator__uType, __interface_0),
        ::app::Uno::IDisposable__typeof(), offsetof(List1_Enumerator__Fuse_Navigation_INavigationAnimator__uType, __interface_1),
        ::app::Uno::Collections::IEnumerator__typeof(), offsetof(List1_Enumerator__Fuse_Navigation_INavigationAnimator__uType, __interface_2));

    type->SetStrongRefs(
        "_current", offsetof(List1_Enumerator__Fuse_Navigation_INavigationAnimator, _current),
        "_source", offsetof(List1_Enumerator__Fuse_Navigation_INavigationAnimator, _source));

    type->SetFields(4,
        ::uNewField("_current", NULL, offsetof(List1_Enumerator__Fuse_Navigation_INavigationAnimator, _current), ::app::Fuse::Navigation::INavigationAnimator__typeof()),
        ::uNewField("_iterator", NULL, offsetof(List1_Enumerator__Fuse_Navigation_INavigationAnimator, _iterator), ::app::Uno::Int__typeof()),
        ::uNewField("_source", NULL, offsetof(List1_Enumerator__Fuse_Navigation_INavigationAnimator, _source), ::app::Uno::Collections::List__Fuse_Navigation_INavigationAnimator__typeof()),
        ::uNewField("_version", NULL, offsetof(List1_Enumerator__Fuse_Navigation_INavigationAnimator, _version), ::app::Uno::Int__typeof()));

    type->SetFunctions(3,
        ::uNewFunctionVoid("Dispose", List1_Enumerator__Fuse_Navigation_INavigationAnimator__Dispose, 0, false),
        ::uNewFunction("get_Current", List1_Enumerator__Fuse_Navigation_INavigationAnimator__get_Current, 0, false, ::app::Fuse::Navigation::INavigationAnimator__typeof()),
        ::uNewFunction("MoveNext", List1_Enumerator__Fuse_Navigation_INavigationAnimator__MoveNext, 0, false, ::app::Uno::Bool__typeof()));

    ::uRegisterType(type);
    return type;
}

void List1_Enumerator__Fuse_Navigation_INavigationAnimator___ObjInit(List1_Enumerator__Fuse_Navigation_INavigationAnimator* __this, ::app::Uno::Collections::List__Fuse_Navigation_INavigationAnimator* source)
{
    __this->_source = source;
    __this->_version = ::uPtr< ::app::Uno::Collections::List__Fuse_Navigation_INavigationAnimator*>(source)->_version;
    __this->_iterator = -1;
}

void List1_Enumerator__Fuse_Navigation_INavigationAnimator__Dispose(List1_Enumerator__Fuse_Navigation_INavigationAnimator* __this)
{
}

::uObject* List1_Enumerator__Fuse_Navigation_INavigationAnimator__get_Current(List1_Enumerator__Fuse_Navigation_INavigationAnimator* __this)
{
    return __this->_current;
}

bool List1_Enumerator__Fuse_Navigation_INavigationAnimator__MoveNext(List1_Enumerator__Fuse_Navigation_INavigationAnimator* __this)
{
    if (::uPtr< ::app::Uno::Collections::List__Fuse_Navigation_INavigationAnimator*>(__this->_source)->_version != __this->_version)
    {
        U_THROW(::app::Uno::InvalidOperationException__New_4(NULL, ::uGetConstString("Collection was modified")));
    }

    __this->_iterator++;

    if (__this->_iterator < ::uPtr< ::app::Uno::Collections::List__Fuse_Navigation_INavigationAnimator*>(__this->_source)->_used)
    {
        __this->_current = ::uPtr< ::uArray*>(::uPtr< ::app::Uno::Collections::List__Fuse_Navigation_INavigationAnimator*>(__this->_source)->_data)->Item< ::uObject*>(__this->_iterator);
        return true;
    }

    return false;
}

List1_Enumerator__Fuse_Navigation_INavigationAnimator List1_Enumerator__Fuse_Navigation_INavigationAnimator__New_1(::uStatic* __this, ::app::Uno::Collections::List__Fuse_Navigation_INavigationAnimator* source)
{
    List1_Enumerator__Fuse_Navigation_INavigationAnimator inst = ::uDefault< List1_Enumerator__Fuse_Navigation_INavigationAnimator>();
    inst._ObjInit(source);
    return inst;
}

void List1_Enumerator__Fuse_Navigation_INavigationAnimator__Uno_Collections_IEnumerator_Reset(List1_Enumerator__Fuse_Navigation_INavigationAnimator* __this)
{
    __this->_iterator = -1;
    __this->_current = NULL;
    __this->_version = ::uPtr< ::app::Uno::Collections::List__Fuse_Navigation_INavigationAnimator*>(__this->_source)->_version;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Collections\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

List1_Enumerator__Fuse_Navigation_IPageResourceBinding__uType* List1_Enumerator__Fuse_Navigation_IPageResourceBinding__typeof()
{
    static ::uStaticStrong<List1_Enumerator__Fuse_Navigation_IPageResourceBinding__uType*> type;
    if (type != NULL) return type;

    type = (List1_Enumerator__Fuse_Navigation_IPageResourceBinding__uType*)::uAllocStructType(sizeof(List1_Enumerator__Fuse_Navigation_IPageResourceBinding__uType), "Uno.Collections.List<Fuse.Navigation.IPageResourceBinding>.Enumerator", sizeof(List1_Enumerator__Fuse_Navigation_IPageResourceBinding), 3, 2, 0);

    type->__interface_2.__fp_Reset = (void(*)(void*))List1_Enumerator__Fuse_Navigation_IPageResourceBinding__Uno_Collections_IEnumerator_Reset;
    type->__interface_0.__fp_get_Current = (::uObject*(*)(void*))List1_Enumerator__Fuse_Navigation_IPageResourceBinding__get_Current;
    type->__interface_1.__fp_Dispose = (void(*)(void*))List1_Enumerator__Fuse_Navigation_IPageResourceBinding__Dispose;
    type->__interface_2.__fp_MoveNext = (bool(*)(void*))List1_Enumerator__Fuse_Navigation_IPageResourceBinding__MoveNext;

    type->SetInterfaces(
        ::app::Uno::Collections::IEnumerator__Fuse_Navigation_IPageResourceBinding__typeof(), offsetof(List1_Enumerator__Fuse_Navigation_IPageResourceBinding__uType, __interface_0),
        ::app::Uno::IDisposable__typeof(), offsetof(List1_Enumerator__Fuse_Navigation_IPageResourceBinding__uType, __interface_1),
        ::app::Uno::Collections::IEnumerator__typeof(), offsetof(List1_Enumerator__Fuse_Navigation_IPageResourceBinding__uType, __interface_2));

    type->SetStrongRefs(
        "_current", offsetof(List1_Enumerator__Fuse_Navigation_IPageResourceBinding, _current),
        "_source", offsetof(List1_Enumerator__Fuse_Navigation_IPageResourceBinding, _source));

    type->SetFields(4,
        ::uNewField("_current", NULL, offsetof(List1_Enumerator__Fuse_Navigation_IPageResourceBinding, _current), ::app::Fuse::Navigation::IPageResourceBinding__typeof()),
        ::uNewField("_iterator", NULL, offsetof(List1_Enumerator__Fuse_Navigation_IPageResourceBinding, _iterator), ::app::Uno::Int__typeof()),
        ::uNewField("_source", NULL, offsetof(List1_Enumerator__Fuse_Navigation_IPageResourceBinding, _source), ::app::Uno::Collections::List__Fuse_Navigation_IPageResourceBinding__typeof()),
        ::uNewField("_version", NULL, offsetof(List1_Enumerator__Fuse_Navigation_IPageResourceBinding, _version), ::app::Uno::Int__typeof()));

    type->SetFunctions(3,
        ::uNewFunctionVoid("Dispose", List1_Enumerator__Fuse_Navigation_IPageResourceBinding__Dispose, 0, false),
        ::uNewFunction("get_Current", List1_Enumerator__Fuse_Navigation_IPageResourceBinding__get_Current, 0, false, ::app::Fuse::Navigation::IPageResourceBinding__typeof()),
        ::uNewFunction("MoveNext", List1_Enumerator__Fuse_Navigation_IPageResourceBinding__MoveNext, 0, false, ::app::Uno::Bool__typeof()));

    ::uRegisterType(type);
    return type;
}

void List1_Enumerator__Fuse_Navigation_IPageResourceBinding___ObjInit(List1_Enumerator__Fuse_Navigation_IPageResourceBinding* __this, ::app::Uno::Collections::List__Fuse_Navigation_IPageResourceBinding* source)
{
    __this->_source = source;
    __this->_version = ::uPtr< ::app::Uno::Collections::List__Fuse_Navigation_IPageResourceBinding*>(source)->_version;
    __this->_iterator = -1;
}

void List1_Enumerator__Fuse_Navigation_IPageResourceBinding__Dispose(List1_Enumerator__Fuse_Navigation_IPageResourceBinding* __this)
{
}

::uObject* List1_Enumerator__Fuse_Navigation_IPageResourceBinding__get_Current(List1_Enumerator__Fuse_Navigation_IPageResourceBinding* __this)
{
    return __this->_current;
}

bool List1_Enumerator__Fuse_Navigation_IPageResourceBinding__MoveNext(List1_Enumerator__Fuse_Navigation_IPageResourceBinding* __this)
{
    if (::uPtr< ::app::Uno::Collections::List__Fuse_Navigation_IPageResourceBinding*>(__this->_source)->_version != __this->_version)
    {
        U_THROW(::app::Uno::InvalidOperationException__New_4(NULL, ::uGetConstString("Collection was modified")));
    }

    __this->_iterator++;

    if (__this->_iterator < ::uPtr< ::app::Uno::Collections::List__Fuse_Navigation_IPageResourceBinding*>(__this->_source)->_used)
    {
        __this->_current = ::uPtr< ::uArray*>(::uPtr< ::app::Uno::Collections::List__Fuse_Navigation_IPageResourceBinding*>(__this->_source)->_data)->Item< ::uObject*>(__this->_iterator);
        return true;
    }

    return false;
}

List1_Enumerator__Fuse_Navigation_IPageResourceBinding List1_Enumerator__Fuse_Navigation_IPageResourceBinding__New_1(::uStatic* __this, ::app::Uno::Collections::List__Fuse_Navigation_IPageResourceBinding* source)
{
    List1_Enumerator__Fuse_Navigation_IPageResourceBinding inst = ::uDefault< List1_Enumerator__Fuse_Navigation_IPageResourceBinding>();
    inst._ObjInit(source);
    return inst;
}

void List1_Enumerator__Fuse_Navigation_IPageResourceBinding__Uno_Collections_IEnumerator_Reset(List1_Enumerator__Fuse_Navigation_IPageResourceBinding* __this)
{
    __this->_iterator = -1;
    __this->_current = NULL;
    __this->_version = ::uPtr< ::app::Uno::Collections::List__Fuse_Navigation_IPageResourceBinding*>(__this->_source)->_version;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Collections\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

List1_Enumerator__Fuse_Node__uType* List1_Enumerator__Fuse_Node__typeof()
{
    static ::uStaticStrong<List1_Enumerator__Fuse_Node__uType*> type;
    if (type != NULL) return type;

    type = (List1_Enumerator__Fuse_Node__uType*)::uAllocStructType(sizeof(List1_Enumerator__Fuse_Node__uType), "Uno.Collections.List<Fuse.Node>.Enumerator", sizeof(List1_Enumerator__Fuse_Node), 3, 2, 0);

    type->__interface_2.__fp_Reset = (void(*)(void*))List1_Enumerator__Fuse_Node__Uno_Collections_IEnumerator_Reset;
    type->__interface_0.__fp_get_Current = (::app::Fuse::Node*(*)(void*))List1_Enumerator__Fuse_Node__get_Current;
    type->__interface_1.__fp_Dispose = (void(*)(void*))List1_Enumerator__Fuse_Node__Dispose;
    type->__interface_2.__fp_MoveNext = (bool(*)(void*))List1_Enumerator__Fuse_Node__MoveNext;

    type->SetInterfaces(
        ::app::Uno::Collections::IEnumerator__Fuse_Node__typeof(), offsetof(List1_Enumerator__Fuse_Node__uType, __interface_0),
        ::app::Uno::IDisposable__typeof(), offsetof(List1_Enumerator__Fuse_Node__uType, __interface_1),
        ::app::Uno::Collections::IEnumerator__typeof(), offsetof(List1_Enumerator__Fuse_Node__uType, __interface_2));

    type->SetStrongRefs(
        "_current", offsetof(List1_Enumerator__Fuse_Node, _current),
        "_source", offsetof(List1_Enumerator__Fuse_Node, _source));

    type->SetFields(4,
        ::uNewField("_current", NULL, offsetof(List1_Enumerator__Fuse_Node, _current), ::app::Fuse::Node__typeof()),
        ::uNewField("_iterator", NULL, offsetof(List1_Enumerator__Fuse_Node, _iterator), ::app::Uno::Int__typeof()),
        ::uNewField("_source", NULL, offsetof(List1_Enumerator__Fuse_Node, _source), ::app::Uno::Collections::List__Fuse_Node__typeof()),
        ::uNewField("_version", NULL, offsetof(List1_Enumerator__Fuse_Node, _version), ::app::Uno::Int__typeof()));

    type->SetFunctions(3,
        ::uNewFunctionVoid("Dispose", List1_Enumerator__Fuse_Node__Dispose, 0, false),
        ::uNewFunction("get_Current", List1_Enumerator__Fuse_Node__get_Current, 0, false, ::app::Fuse::Node__typeof()),
        ::uNewFunction("MoveNext", List1_Enumerator__Fuse_Node__MoveNext, 0, false, ::app::Uno::Bool__typeof()));

    ::uRegisterType(type);
    return type;
}

void List1_Enumerator__Fuse_Node___ObjInit(List1_Enumerator__Fuse_Node* __this, ::app::Uno::Collections::List__Fuse_Node* source)
{
    __this->_source = source;
    __this->_version = ::uPtr< ::app::Uno::Collections::List__Fuse_Node*>(source)->_version;
    __this->_iterator = -1;
}

void List1_Enumerator__Fuse_Node__Dispose(List1_Enumerator__Fuse_Node* __this)
{
}

::app::Fuse::Node* List1_Enumerator__Fuse_Node__get_Current(List1_Enumerator__Fuse_Node* __this)
{
    return __this->_current;
}

bool List1_Enumerator__Fuse_Node__MoveNext(List1_Enumerator__Fuse_Node* __this)
{
    if (::uPtr< ::app::Uno::Collections::List__Fuse_Node*>(__this->_source)->_version != __this->_version)
    {
        U_THROW(::app::Uno::InvalidOperationException__New_4(NULL, ::uGetConstString("Collection was modified")));
    }

    __this->_iterator++;

    if (__this->_iterator < ::uPtr< ::app::Uno::Collections::List__Fuse_Node*>(__this->_source)->_used)
    {
        __this->_current = ::uPtr< ::uArray*>(::uPtr< ::app::Uno::Collections::List__Fuse_Node*>(__this->_source)->_data)->Item< ::app::Fuse::Node*>(__this->_iterator);
        return true;
    }

    return false;
}

List1_Enumerator__Fuse_Node List1_Enumerator__Fuse_Node__New_1(::uStatic* __this, ::app::Uno::Collections::List__Fuse_Node* source)
{
    List1_Enumerator__Fuse_Node inst = ::uDefault< List1_Enumerator__Fuse_Node>();
    inst._ObjInit(source);
    return inst;
}

void List1_Enumerator__Fuse_Node__Uno_Collections_IEnumerator_Reset(List1_Enumerator__Fuse_Node* __this)
{
    __this->_iterator = -1;
    __this->_current = NULL;
    __this->_version = ::uPtr< ::app::Uno::Collections::List__Fuse_Node*>(__this->_source)->_version;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Collections\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

List1_Enumerator__Fuse_Physics_Body__uType* List1_Enumerator__Fuse_Physics_Body__typeof()
{
    static ::uStaticStrong<List1_Enumerator__Fuse_Physics_Body__uType*> type;
    if (type != NULL) return type;

    type = (List1_Enumerator__Fuse_Physics_Body__uType*)::uAllocStructType(sizeof(List1_Enumerator__Fuse_Physics_Body__uType), "Uno.Collections.List<Fuse.Physics.Body>.Enumerator", sizeof(List1_Enumerator__Fuse_Physics_Body), 3, 2, 0);

    type->__interface_2.__fp_Reset = (void(*)(void*))List1_Enumerator__Fuse_Physics_Body__Uno_Collections_IEnumerator_Reset;
    type->__interface_0.__fp_get_Current = (::app::Fuse::Physics::Body*(*)(void*))List1_Enumerator__Fuse_Physics_Body__get_Current;
    type->__interface_1.__fp_Dispose = (void(*)(void*))List1_Enumerator__Fuse_Physics_Body__Dispose;
    type->__interface_2.__fp_MoveNext = (bool(*)(void*))List1_Enumerator__Fuse_Physics_Body__MoveNext;

    type->SetInterfaces(
        ::app::Uno::Collections::IEnumerator__Fuse_Physics_Body__typeof(), offsetof(List1_Enumerator__Fuse_Physics_Body__uType, __interface_0),
        ::app::Uno::IDisposable__typeof(), offsetof(List1_Enumerator__Fuse_Physics_Body__uType, __interface_1),
        ::app::Uno::Collections::IEnumerator__typeof(), offsetof(List1_Enumerator__Fuse_Physics_Body__uType, __interface_2));

    type->SetStrongRefs(
        "_current", offsetof(List1_Enumerator__Fuse_Physics_Body, _current),
        "_source", offsetof(List1_Enumerator__Fuse_Physics_Body, _source));

    type->SetFields(4,
        ::uNewField("_current", NULL, offsetof(List1_Enumerator__Fuse_Physics_Body, _current), ::app::Fuse::Physics::Body__typeof()),
        ::uNewField("_iterator", NULL, offsetof(List1_Enumerator__Fuse_Physics_Body, _iterator), ::app::Uno::Int__typeof()),
        ::uNewField("_source", NULL, offsetof(List1_Enumerator__Fuse_Physics_Body, _source), ::app::Uno::Collections::List__Fuse_Physics_Body__typeof()),
        ::uNewField("_version", NULL, offsetof(List1_Enumerator__Fuse_Physics_Body, _version), ::app::Uno::Int__typeof()));

    type->SetFunctions(3,
        ::uNewFunctionVoid("Dispose", List1_Enumerator__Fuse_Physics_Body__Dispose, 0, false),
        ::uNewFunction("get_Current", List1_Enumerator__Fuse_Physics_Body__get_Current, 0, false, ::app::Fuse::Physics::Body__typeof()),
        ::uNewFunction("MoveNext", List1_Enumerator__Fuse_Physics_Body__MoveNext, 0, false, ::app::Uno::Bool__typeof()));

    ::uRegisterType(type);
    return type;
}

void List1_Enumerator__Fuse_Physics_Body___ObjInit(List1_Enumerator__Fuse_Physics_Body* __this, ::app::Uno::Collections::List__Fuse_Physics_Body* source)
{
    __this->_source = source;
    __this->_version = ::uPtr< ::app::Uno::Collections::List__Fuse_Physics_Body*>(source)->_version;
    __this->_iterator = -1;
}

void List1_Enumerator__Fuse_Physics_Body__Dispose(List1_Enumerator__Fuse_Physics_Body* __this)
{
}

::app::Fuse::Physics::Body* List1_Enumerator__Fuse_Physics_Body__get_Current(List1_Enumerator__Fuse_Physics_Body* __this)
{
    return __this->_current;
}

bool List1_Enumerator__Fuse_Physics_Body__MoveNext(List1_Enumerator__Fuse_Physics_Body* __this)
{
    if (::uPtr< ::app::Uno::Collections::List__Fuse_Physics_Body*>(__this->_source)->_version != __this->_version)
    {
        U_THROW(::app::Uno::InvalidOperationException__New_4(NULL, ::uGetConstString("Collection was modified")));
    }

    __this->_iterator++;

    if (__this->_iterator < ::uPtr< ::app::Uno::Collections::List__Fuse_Physics_Body*>(__this->_source)->_used)
    {
        __this->_current = ::uPtr< ::uArray*>(::uPtr< ::app::Uno::Collections::List__Fuse_Physics_Body*>(__this->_source)->_data)->Item< ::app::Fuse::Physics::Body*>(__this->_iterator);
        return true;
    }

    return false;
}

List1_Enumerator__Fuse_Physics_Body List1_Enumerator__Fuse_Physics_Body__New_1(::uStatic* __this, ::app::Uno::Collections::List__Fuse_Physics_Body* source)
{
    List1_Enumerator__Fuse_Physics_Body inst = ::uDefault< List1_Enumerator__Fuse_Physics_Body>();
    inst._ObjInit(source);
    return inst;
}

void List1_Enumerator__Fuse_Physics_Body__Uno_Collections_IEnumerator_Reset(List1_Enumerator__Fuse_Physics_Body* __this)
{
    __this->_iterator = -1;
    __this->_current = NULL;
    __this->_version = ::uPtr< ::app::Uno::Collections::List__Fuse_Physics_Body*>(__this->_source)->_version;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Collections\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

List1_Enumerator__Fuse_Physics_IRule__uType* List1_Enumerator__Fuse_Physics_IRule__typeof()
{
    static ::uStaticStrong<List1_Enumerator__Fuse_Physics_IRule__uType*> type;
    if (type != NULL) return type;

    type = (List1_Enumerator__Fuse_Physics_IRule__uType*)::uAllocStructType(sizeof(List1_Enumerator__Fuse_Physics_IRule__uType), "Uno.Collections.List<Fuse.Physics.IRule>.Enumerator", sizeof(List1_Enumerator__Fuse_Physics_IRule), 3, 2, 0);

    type->__interface_2.__fp_Reset = (void(*)(void*))List1_Enumerator__Fuse_Physics_IRule__Uno_Collections_IEnumerator_Reset;
    type->__interface_0.__fp_get_Current = (::uObject*(*)(void*))List1_Enumerator__Fuse_Physics_IRule__get_Current;
    type->__interface_1.__fp_Dispose = (void(*)(void*))List1_Enumerator__Fuse_Physics_IRule__Dispose;
    type->__interface_2.__fp_MoveNext = (bool(*)(void*))List1_Enumerator__Fuse_Physics_IRule__MoveNext;

    type->SetInterfaces(
        ::app::Uno::Collections::IEnumerator__Fuse_Physics_IRule__typeof(), offsetof(List1_Enumerator__Fuse_Physics_IRule__uType, __interface_0),
        ::app::Uno::IDisposable__typeof(), offsetof(List1_Enumerator__Fuse_Physics_IRule__uType, __interface_1),
        ::app::Uno::Collections::IEnumerator__typeof(), offsetof(List1_Enumerator__Fuse_Physics_IRule__uType, __interface_2));

    type->SetStrongRefs(
        "_current", offsetof(List1_Enumerator__Fuse_Physics_IRule, _current),
        "_source", offsetof(List1_Enumerator__Fuse_Physics_IRule, _source));

    type->SetFields(4,
        ::uNewField("_current", NULL, offsetof(List1_Enumerator__Fuse_Physics_IRule, _current), ::app::Fuse::Physics::IRule__typeof()),
        ::uNewField("_iterator", NULL, offsetof(List1_Enumerator__Fuse_Physics_IRule, _iterator), ::app::Uno::Int__typeof()),
        ::uNewField("_source", NULL, offsetof(List1_Enumerator__Fuse_Physics_IRule, _source), ::app::Uno::Collections::List__Fuse_Physics_IRule__typeof()),
        ::uNewField("_version", NULL, offsetof(List1_Enumerator__Fuse_Physics_IRule, _version), ::app::Uno::Int__typeof()));

    type->SetFunctions(3,
        ::uNewFunctionVoid("Dispose", List1_Enumerator__Fuse_Physics_IRule__Dispose, 0, false),
        ::uNewFunction("get_Current", List1_Enumerator__Fuse_Physics_IRule__get_Current, 0, false, ::app::Fuse::Physics::IRule__typeof()),
        ::uNewFunction("MoveNext", List1_Enumerator__Fuse_Physics_IRule__MoveNext, 0, false, ::app::Uno::Bool__typeof()));

    ::uRegisterType(type);
    return type;
}

void List1_Enumerator__Fuse_Physics_IRule___ObjInit(List1_Enumerator__Fuse_Physics_IRule* __this, ::app::Uno::Collections::List__Fuse_Physics_IRule* source)
{
    __this->_source = source;
    __this->_version = ::uPtr< ::app::Uno::Collections::List__Fuse_Physics_IRule*>(source)->_version;
    __this->_iterator = -1;
}

void List1_Enumerator__Fuse_Physics_IRule__Dispose(List1_Enumerator__Fuse_Physics_IRule* __this)
{
}

::uObject* List1_Enumerator__Fuse_Physics_IRule__get_Current(List1_Enumerator__Fuse_Physics_IRule* __this)
{
    return __this->_current;
}

bool List1_Enumerator__Fuse_Physics_IRule__MoveNext(List1_Enumerator__Fuse_Physics_IRule* __this)
{
    if (::uPtr< ::app::Uno::Collections::List__Fuse_Physics_IRule*>(__this->_source)->_version != __this->_version)
    {
        U_THROW(::app::Uno::InvalidOperationException__New_4(NULL, ::uGetConstString("Collection was modified")));
    }

    __this->_iterator++;

    if (__this->_iterator < ::uPtr< ::app::Uno::Collections::List__Fuse_Physics_IRule*>(__this->_source)->_used)
    {
        __this->_current = ::uPtr< ::uArray*>(::uPtr< ::app::Uno::Collections::List__Fuse_Physics_IRule*>(__this->_source)->_data)->Item< ::uObject*>(__this->_iterator);
        return true;
    }

    return false;
}

List1_Enumerator__Fuse_Physics_IRule List1_Enumerator__Fuse_Physics_IRule__New_1(::uStatic* __this, ::app::Uno::Collections::List__Fuse_Physics_IRule* source)
{
    List1_Enumerator__Fuse_Physics_IRule inst = ::uDefault< List1_Enumerator__Fuse_Physics_IRule>();
    inst._ObjInit(source);
    return inst;
}

void List1_Enumerator__Fuse_Physics_IRule__Uno_Collections_IEnumerator_Reset(List1_Enumerator__Fuse_Physics_IRule* __this)
{
    __this->_iterator = -1;
    __this->_current = NULL;
    __this->_version = ::uPtr< ::app::Uno::Collections::List__Fuse_Physics_IRule*>(__this->_source)->_version;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Collections\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

List1_Enumerator__Fuse_Reactive_Case__uType* List1_Enumerator__Fuse_Reactive_Case__typeof()
{
    static ::uStaticStrong<List1_Enumerator__Fuse_Reactive_Case__uType*> type;
    if (type != NULL) return type;

    type = (List1_Enumerator__Fuse_Reactive_Case__uType*)::uAllocStructType(sizeof(List1_Enumerator__Fuse_Reactive_Case__uType), "Uno.Collections.List<Fuse.Reactive.Case>.Enumerator", sizeof(List1_Enumerator__Fuse_Reactive_Case), 3, 2, 0);

    type->__interface_2.__fp_Reset = (void(*)(void*))List1_Enumerator__Fuse_Reactive_Case__Uno_Collections_IEnumerator_Reset;
    type->__interface_0.__fp_get_Current = (::app::Fuse::Reactive::Case*(*)(void*))List1_Enumerator__Fuse_Reactive_Case__get_Current;
    type->__interface_1.__fp_Dispose = (void(*)(void*))List1_Enumerator__Fuse_Reactive_Case__Dispose;
    type->__interface_2.__fp_MoveNext = (bool(*)(void*))List1_Enumerator__Fuse_Reactive_Case__MoveNext;

    type->SetInterfaces(
        ::app::Uno::Collections::IEnumerator__Fuse_Reactive_Case__typeof(), offsetof(List1_Enumerator__Fuse_Reactive_Case__uType, __interface_0),
        ::app::Uno::IDisposable__typeof(), offsetof(List1_Enumerator__Fuse_Reactive_Case__uType, __interface_1),
        ::app::Uno::Collections::IEnumerator__typeof(), offsetof(List1_Enumerator__Fuse_Reactive_Case__uType, __interface_2));

    type->SetStrongRefs(
        "_current", offsetof(List1_Enumerator__Fuse_Reactive_Case, _current),
        "_source", offsetof(List1_Enumerator__Fuse_Reactive_Case, _source));

    type->SetFields(4,
        ::uNewField("_current", NULL, offsetof(List1_Enumerator__Fuse_Reactive_Case, _current), ::app::Fuse::Reactive::Case__typeof()),
        ::uNewField("_iterator", NULL, offsetof(List1_Enumerator__Fuse_Reactive_Case, _iterator), ::app::Uno::Int__typeof()),
        ::uNewField("_source", NULL, offsetof(List1_Enumerator__Fuse_Reactive_Case, _source), ::app::Uno::Collections::List__Fuse_Reactive_Case__typeof()),
        ::uNewField("_version", NULL, offsetof(List1_Enumerator__Fuse_Reactive_Case, _version), ::app::Uno::Int__typeof()));

    type->SetFunctions(3,
        ::uNewFunctionVoid("Dispose", List1_Enumerator__Fuse_Reactive_Case__Dispose, 0, false),
        ::uNewFunction("get_Current", List1_Enumerator__Fuse_Reactive_Case__get_Current, 0, false, ::app::Fuse::Reactive::Case__typeof()),
        ::uNewFunction("MoveNext", List1_Enumerator__Fuse_Reactive_Case__MoveNext, 0, false, ::app::Uno::Bool__typeof()));

    ::uRegisterType(type);
    return type;
}

void List1_Enumerator__Fuse_Reactive_Case___ObjInit(List1_Enumerator__Fuse_Reactive_Case* __this, ::app::Uno::Collections::List__Fuse_Reactive_Case* source)
{
    __this->_source = source;
    __this->_version = ::uPtr< ::app::Uno::Collections::List__Fuse_Reactive_Case*>(source)->_version;
    __this->_iterator = -1;
}

void List1_Enumerator__Fuse_Reactive_Case__Dispose(List1_Enumerator__Fuse_Reactive_Case* __this)
{
}

::app::Fuse::Reactive::Case* List1_Enumerator__Fuse_Reactive_Case__get_Current(List1_Enumerator__Fuse_Reactive_Case* __this)
{
    return __this->_current;
}

bool List1_Enumerator__Fuse_Reactive_Case__MoveNext(List1_Enumerator__Fuse_Reactive_Case* __this)
{
    if (::uPtr< ::app::Uno::Collections::List__Fuse_Reactive_Case*>(__this->_source)->_version != __this->_version)
    {
        U_THROW(::app::Uno::InvalidOperationException__New_4(NULL, ::uGetConstString("Collection was modified")));
    }

    __this->_iterator++;

    if (__this->_iterator < ::uPtr< ::app::Uno::Collections::List__Fuse_Reactive_Case*>(__this->_source)->_used)
    {
        __this->_current = ::uPtr< ::uArray*>(::uPtr< ::app::Uno::Collections::List__Fuse_Reactive_Case*>(__this->_source)->_data)->Item< ::app::Fuse::Reactive::Case*>(__this->_iterator);
        return true;
    }

    return false;
}

List1_Enumerator__Fuse_Reactive_Case List1_Enumerator__Fuse_Reactive_Case__New_1(::uStatic* __this, ::app::Uno::Collections::List__Fuse_Reactive_Case* source)
{
    List1_Enumerator__Fuse_Reactive_Case inst = ::uDefault< List1_Enumerator__Fuse_Reactive_Case>();
    inst._ObjInit(source);
    return inst;
}

void List1_Enumerator__Fuse_Reactive_Case__Uno_Collections_IEnumerator_Reset(List1_Enumerator__Fuse_Reactive_Case* __this)
{
    __this->_iterator = -1;
    __this->_current = NULL;
    __this->_version = ::uPtr< ::app::Uno::Collections::List__Fuse_Reactive_Case*>(__this->_source)->_version;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Collections\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

List1_Enumerator__Fuse_Reactive_JavaScript__uType* List1_Enumerator__Fuse_Reactive_JavaScript__typeof()
{
    static ::uStaticStrong<List1_Enumerator__Fuse_Reactive_JavaScript__uType*> type;
    if (type != NULL) return type;

    type = (List1_Enumerator__Fuse_Reactive_JavaScript__uType*)::uAllocStructType(sizeof(List1_Enumerator__Fuse_Reactive_JavaScript__uType), "Uno.Collections.List<Fuse.Reactive.JavaScript>.Enumerator", sizeof(List1_Enumerator__Fuse_Reactive_JavaScript), 3, 2, 0);

    type->__interface_2.__fp_Reset = (void(*)(void*))List1_Enumerator__Fuse_Reactive_JavaScript__Uno_Collections_IEnumerator_Reset;
    type->__interface_0.__fp_get_Current = (::app::Fuse::Reactive::JavaScript*(*)(void*))List1_Enumerator__Fuse_Reactive_JavaScript__get_Current;
    type->__interface_1.__fp_Dispose = (void(*)(void*))List1_Enumerator__Fuse_Reactive_JavaScript__Dispose;
    type->__interface_2.__fp_MoveNext = (bool(*)(void*))List1_Enumerator__Fuse_Reactive_JavaScript__MoveNext;

    type->SetInterfaces(
        ::app::Uno::Collections::IEnumerator__Fuse_Reactive_JavaScript__typeof(), offsetof(List1_Enumerator__Fuse_Reactive_JavaScript__uType, __interface_0),
        ::app::Uno::IDisposable__typeof(), offsetof(List1_Enumerator__Fuse_Reactive_JavaScript__uType, __interface_1),
        ::app::Uno::Collections::IEnumerator__typeof(), offsetof(List1_Enumerator__Fuse_Reactive_JavaScript__uType, __interface_2));

    type->SetStrongRefs(
        "_current", offsetof(List1_Enumerator__Fuse_Reactive_JavaScript, _current),
        "_source", offsetof(List1_Enumerator__Fuse_Reactive_JavaScript, _source));

    type->SetFields(4,
        ::uNewField("_current", NULL, offsetof(List1_Enumerator__Fuse_Reactive_JavaScript, _current), ::app::Fuse::Reactive::JavaScript__typeof()),
        ::uNewField("_iterator", NULL, offsetof(List1_Enumerator__Fuse_Reactive_JavaScript, _iterator), ::app::Uno::Int__typeof()),
        ::uNewField("_source", NULL, offsetof(List1_Enumerator__Fuse_Reactive_JavaScript, _source), ::app::Uno::Collections::List__Fuse_Reactive_JavaScript__typeof()),
        ::uNewField("_version", NULL, offsetof(List1_Enumerator__Fuse_Reactive_JavaScript, _version), ::app::Uno::Int__typeof()));

    type->SetFunctions(3,
        ::uNewFunctionVoid("Dispose", List1_Enumerator__Fuse_Reactive_JavaScript__Dispose, 0, false),
        ::uNewFunction("get_Current", List1_Enumerator__Fuse_Reactive_JavaScript__get_Current, 0, false, ::app::Fuse::Reactive::JavaScript__typeof()),
        ::uNewFunction("MoveNext", List1_Enumerator__Fuse_Reactive_JavaScript__MoveNext, 0, false, ::app::Uno::Bool__typeof()));

    ::uRegisterType(type);
    return type;
}

void List1_Enumerator__Fuse_Reactive_JavaScript___ObjInit(List1_Enumerator__Fuse_Reactive_JavaScript* __this, ::app::Uno::Collections::List__Fuse_Reactive_JavaScript* source)
{
    __this->_source = source;
    __this->_version = ::uPtr< ::app::Uno::Collections::List__Fuse_Reactive_JavaScript*>(source)->_version;
    __this->_iterator = -1;
}

void List1_Enumerator__Fuse_Reactive_JavaScript__Dispose(List1_Enumerator__Fuse_Reactive_JavaScript* __this)
{
}

::app::Fuse::Reactive::JavaScript* List1_Enumerator__Fuse_Reactive_JavaScript__get_Current(List1_Enumerator__Fuse_Reactive_JavaScript* __this)
{
    return __this->_current;
}

bool List1_Enumerator__Fuse_Reactive_JavaScript__MoveNext(List1_Enumerator__Fuse_Reactive_JavaScript* __this)
{
    if (::uPtr< ::app::Uno::Collections::List__Fuse_Reactive_JavaScript*>(__this->_source)->_version != __this->_version)
    {
        U_THROW(::app::Uno::InvalidOperationException__New_4(NULL, ::uGetConstString("Collection was modified")));
    }

    __this->_iterator++;

    if (__this->_iterator < ::uPtr< ::app::Uno::Collections::List__Fuse_Reactive_JavaScript*>(__this->_source)->_used)
    {
        __this->_current = ::uPtr< ::uArray*>(::uPtr< ::app::Uno::Collections::List__Fuse_Reactive_JavaScript*>(__this->_source)->_data)->Item< ::app::Fuse::Reactive::JavaScript*>(__this->_iterator);
        return true;
    }

    return false;
}

List1_Enumerator__Fuse_Reactive_JavaScript List1_Enumerator__Fuse_Reactive_JavaScript__New_1(::uStatic* __this, ::app::Uno::Collections::List__Fuse_Reactive_JavaScript* source)
{
    List1_Enumerator__Fuse_Reactive_JavaScript inst = ::uDefault< List1_Enumerator__Fuse_Reactive_JavaScript>();
    inst._ObjInit(source);
    return inst;
}

void List1_Enumerator__Fuse_Reactive_JavaScript__Uno_Collections_IEnumerator_Reset(List1_Enumerator__Fuse_Reactive_JavaScript* __this)
{
    __this->_iterator = -1;
    __this->_current = NULL;
    __this->_version = ::uPtr< ::app::Uno::Collections::List__Fuse_Reactive_JavaScript*>(__this->_source)->_version;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Collections\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

List1_Enumerator__Fuse_RenderTargetEntry__uType* List1_Enumerator__Fuse_RenderTargetEntry__typeof()
{
    static ::uStaticStrong<List1_Enumerator__Fuse_RenderTargetEntry__uType*> type;
    if (type != NULL) return type;

    type = (List1_Enumerator__Fuse_RenderTargetEntry__uType*)::uAllocStructType(sizeof(List1_Enumerator__Fuse_RenderTargetEntry__uType), "Uno.Collections.List<Fuse.RenderTargetEntry>.Enumerator", sizeof(List1_Enumerator__Fuse_RenderTargetEntry), 3, 2, 0);

    type->__interface_2.__fp_Reset = (void(*)(void*))List1_Enumerator__Fuse_RenderTargetEntry__Uno_Collections_IEnumerator_Reset;
    type->__interface_0.__fp_get_Current = (::app::Fuse::RenderTargetEntry*(*)(void*))List1_Enumerator__Fuse_RenderTargetEntry__get_Current;
    type->__interface_1.__fp_Dispose = (void(*)(void*))List1_Enumerator__Fuse_RenderTargetEntry__Dispose;
    type->__interface_2.__fp_MoveNext = (bool(*)(void*))List1_Enumerator__Fuse_RenderTargetEntry__MoveNext;

    type->SetInterfaces(
        ::app::Uno::Collections::IEnumerator__Fuse_RenderTargetEntry__typeof(), offsetof(List1_Enumerator__Fuse_RenderTargetEntry__uType, __interface_0),
        ::app::Uno::IDisposable__typeof(), offsetof(List1_Enumerator__Fuse_RenderTargetEntry__uType, __interface_1),
        ::app::Uno::Collections::IEnumerator__typeof(), offsetof(List1_Enumerator__Fuse_RenderTargetEntry__uType, __interface_2));

    type->SetStrongRefs(
        "_current", offsetof(List1_Enumerator__Fuse_RenderTargetEntry, _current),
        "_source", offsetof(List1_Enumerator__Fuse_RenderTargetEntry, _source));

    type->SetFields(4,
        ::uNewField("_current", NULL, offsetof(List1_Enumerator__Fuse_RenderTargetEntry, _current), ::app::Fuse::RenderTargetEntry__typeof()),
        ::uNewField("_iterator", NULL, offsetof(List1_Enumerator__Fuse_RenderTargetEntry, _iterator), ::app::Uno::Int__typeof()),
        ::uNewField("_source", NULL, offsetof(List1_Enumerator__Fuse_RenderTargetEntry, _source), ::app::Uno::Collections::List__Fuse_RenderTargetEntry__typeof()),
        ::uNewField("_version", NULL, offsetof(List1_Enumerator__Fuse_RenderTargetEntry, _version), ::app::Uno::Int__typeof()));

    type->SetFunctions(3,
        ::uNewFunctionVoid("Dispose", List1_Enumerator__Fuse_RenderTargetEntry__Dispose, 0, false),
        ::uNewFunction("get_Current", List1_Enumerator__Fuse_RenderTargetEntry__get_Current, 0, false, ::app::Fuse::RenderTargetEntry__typeof()),
        ::uNewFunction("MoveNext", List1_Enumerator__Fuse_RenderTargetEntry__MoveNext, 0, false, ::app::Uno::Bool__typeof()));

    ::uRegisterType(type);
    return type;
}

void List1_Enumerator__Fuse_RenderTargetEntry___ObjInit(List1_Enumerator__Fuse_RenderTargetEntry* __this, ::app::Uno::Collections::List__Fuse_RenderTargetEntry* source)
{
    __this->_source = source;
    __this->_version = ::uPtr< ::app::Uno::Collections::List__Fuse_RenderTargetEntry*>(source)->_version;
    __this->_iterator = -1;
}

void List1_Enumerator__Fuse_RenderTargetEntry__Dispose(List1_Enumerator__Fuse_RenderTargetEntry* __this)
{
}

::app::Fuse::RenderTargetEntry* List1_Enumerator__Fuse_RenderTargetEntry__get_Current(List1_Enumerator__Fuse_RenderTargetEntry* __this)
{
    return __this->_current;
}

bool List1_Enumerator__Fuse_RenderTargetEntry__MoveNext(List1_Enumerator__Fuse_RenderTargetEntry* __this)
{
    if (::uPtr< ::app::Uno::Collections::List__Fuse_RenderTargetEntry*>(__this->_source)->_version != __this->_version)
    {
        U_THROW(::app::Uno::InvalidOperationException__New_4(NULL, ::uGetConstString("Collection was modified")));
    }

    __this->_iterator++;

    if (__this->_iterator < ::uPtr< ::app::Uno::Collections::List__Fuse_RenderTargetEntry*>(__this->_source)->_used)
    {
        __this->_current = ::uPtr< ::uArray*>(::uPtr< ::app::Uno::Collections::List__Fuse_RenderTargetEntry*>(__this->_source)->_data)->Item< ::app::Fuse::RenderTargetEntry*>(__this->_iterator);
        return true;
    }

    return false;
}

List1_Enumerator__Fuse_RenderTargetEntry List1_Enumerator__Fuse_RenderTargetEntry__New_1(::uStatic* __this, ::app::Uno::Collections::List__Fuse_RenderTargetEntry* source)
{
    List1_Enumerator__Fuse_RenderTargetEntry inst = ::uDefault< List1_Enumerator__Fuse_RenderTargetEntry>();
    inst._ObjInit(source);
    return inst;
}

void List1_Enumerator__Fuse_RenderTargetEntry__Uno_Collections_IEnumerator_Reset(List1_Enumerator__Fuse_RenderTargetEntry* __this)
{
    __this->_iterator = -1;
    __this->_current = NULL;
    __this->_version = ::uPtr< ::app::Uno::Collections::List__Fuse_RenderTargetEntry*>(__this->_source)->_version;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Collections\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

List1_Enumerator__Fuse_Resources_ImageSource__uType* List1_Enumerator__Fuse_Resources_ImageSource__typeof()
{
    static ::uStaticStrong<List1_Enumerator__Fuse_Resources_ImageSource__uType*> type;
    if (type != NULL) return type;

    type = (List1_Enumerator__Fuse_Resources_ImageSource__uType*)::uAllocStructType(sizeof(List1_Enumerator__Fuse_Resources_ImageSource__uType), "Uno.Collections.List<Fuse.Resources.ImageSource>.Enumerator", sizeof(List1_Enumerator__Fuse_Resources_ImageSource), 3, 2, 0);

    type->__interface_2.__fp_Reset = (void(*)(void*))List1_Enumerator__Fuse_Resources_ImageSource__Uno_Collections_IEnumerator_Reset;
    type->__interface_0.__fp_get_Current = (::app::Fuse::Resources::ImageSource*(*)(void*))List1_Enumerator__Fuse_Resources_ImageSource__get_Current;
    type->__interface_1.__fp_Dispose = (void(*)(void*))List1_Enumerator__Fuse_Resources_ImageSource__Dispose;
    type->__interface_2.__fp_MoveNext = (bool(*)(void*))List1_Enumerator__Fuse_Resources_ImageSource__MoveNext;

    type->SetInterfaces(
        ::app::Uno::Collections::IEnumerator__Fuse_Resources_ImageSource__typeof(), offsetof(List1_Enumerator__Fuse_Resources_ImageSource__uType, __interface_0),
        ::app::Uno::IDisposable__typeof(), offsetof(List1_Enumerator__Fuse_Resources_ImageSource__uType, __interface_1),
        ::app::Uno::Collections::IEnumerator__typeof(), offsetof(List1_Enumerator__Fuse_Resources_ImageSource__uType, __interface_2));

    type->SetStrongRefs(
        "_current", offsetof(List1_Enumerator__Fuse_Resources_ImageSource, _current),
        "_source", offsetof(List1_Enumerator__Fuse_Resources_ImageSource, _source));

    type->SetFields(4,
        ::uNewField("_current", NULL, offsetof(List1_Enumerator__Fuse_Resources_ImageSource, _current), ::app::Fuse::Resources::ImageSource__typeof()),
        ::uNewField("_iterator", NULL, offsetof(List1_Enumerator__Fuse_Resources_ImageSource, _iterator), ::app::Uno::Int__typeof()),
        ::uNewField("_source", NULL, offsetof(List1_Enumerator__Fuse_Resources_ImageSource, _source), ::app::Uno::Collections::List__Fuse_Resources_ImageSource__typeof()),
        ::uNewField("_version", NULL, offsetof(List1_Enumerator__Fuse_Resources_ImageSource, _version), ::app::Uno::Int__typeof()));

    type->SetFunctions(3,
        ::uNewFunctionVoid("Dispose", List1_Enumerator__Fuse_Resources_ImageSource__Dispose, 0, false),
        ::uNewFunction("get_Current", List1_Enumerator__Fuse_Resources_ImageSource__get_Current, 0, false, ::app::Fuse::Resources::ImageSource__typeof()),
        ::uNewFunction("MoveNext", List1_Enumerator__Fuse_Resources_ImageSource__MoveNext, 0, false, ::app::Uno::Bool__typeof()));

    ::uRegisterType(type);
    return type;
}

void List1_Enumerator__Fuse_Resources_ImageSource___ObjInit(List1_Enumerator__Fuse_Resources_ImageSource* __this, ::app::Uno::Collections::List__Fuse_Resources_ImageSource* source)
{
    __this->_source = source;
    __this->_version = ::uPtr< ::app::Uno::Collections::List__Fuse_Resources_ImageSource*>(source)->_version;
    __this->_iterator = -1;
}

void List1_Enumerator__Fuse_Resources_ImageSource__Dispose(List1_Enumerator__Fuse_Resources_ImageSource* __this)
{
}

::app::Fuse::Resources::ImageSource* List1_Enumerator__Fuse_Resources_ImageSource__get_Current(List1_Enumerator__Fuse_Resources_ImageSource* __this)
{
    return __this->_current;
}

bool List1_Enumerator__Fuse_Resources_ImageSource__MoveNext(List1_Enumerator__Fuse_Resources_ImageSource* __this)
{
    if (::uPtr< ::app::Uno::Collections::List__Fuse_Resources_ImageSource*>(__this->_source)->_version != __this->_version)
    {
        U_THROW(::app::Uno::InvalidOperationException__New_4(NULL, ::uGetConstString("Collection was modified")));
    }

    __this->_iterator++;

    if (__this->_iterator < ::uPtr< ::app::Uno::Collections::List__Fuse_Resources_ImageSource*>(__this->_source)->_used)
    {
        __this->_current = ::uPtr< ::uArray*>(::uPtr< ::app::Uno::Collections::List__Fuse_Resources_ImageSource*>(__this->_source)->_data)->Item< ::app::Fuse::Resources::ImageSource*>(__this->_iterator);
        return true;
    }

    return false;
}

List1_Enumerator__Fuse_Resources_ImageSource List1_Enumerator__Fuse_Resources_ImageSource__New_1(::uStatic* __this, ::app::Uno::Collections::List__Fuse_Resources_ImageSource* source)
{
    List1_Enumerator__Fuse_Resources_ImageSource inst = ::uDefault< List1_Enumerator__Fuse_Resources_ImageSource>();
    inst._ObjInit(source);
    return inst;
}

void List1_Enumerator__Fuse_Resources_ImageSource__Uno_Collections_IEnumerator_Reset(List1_Enumerator__Fuse_Resources_ImageSource* __this)
{
    __this->_iterator = -1;
    __this->_current = NULL;
    __this->_version = ::uPtr< ::app::Uno::Collections::List__Fuse_Resources_ImageSource*>(__this->_source)->_version;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Collections\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

List1_Enumerator__Fuse_Resources_IMemoryResource__uType* List1_Enumerator__Fuse_Resources_IMemoryResource__typeof()
{
    static ::uStaticStrong<List1_Enumerator__Fuse_Resources_IMemoryResource__uType*> type;
    if (type != NULL) return type;

    type = (List1_Enumerator__Fuse_Resources_IMemoryResource__uType*)::uAllocStructType(sizeof(List1_Enumerator__Fuse_Resources_IMemoryResource__uType), "Uno.Collections.List<Fuse.Resources.IMemoryResource>.Enumerator", sizeof(List1_Enumerator__Fuse_Resources_IMemoryResource), 3, 2, 0);

    type->__interface_2.__fp_Reset = (void(*)(void*))List1_Enumerator__Fuse_Resources_IMemoryResource__Uno_Collections_IEnumerator_Reset;
    type->__interface_0.__fp_get_Current = (::uObject*(*)(void*))List1_Enumerator__Fuse_Resources_IMemoryResource__get_Current;
    type->__interface_1.__fp_Dispose = (void(*)(void*))List1_Enumerator__Fuse_Resources_IMemoryResource__Dispose;
    type->__interface_2.__fp_MoveNext = (bool(*)(void*))List1_Enumerator__Fuse_Resources_IMemoryResource__MoveNext;

    type->SetInterfaces(
        ::app::Uno::Collections::IEnumerator__Fuse_Resources_IMemoryResource__typeof(), offsetof(List1_Enumerator__Fuse_Resources_IMemoryResource__uType, __interface_0),
        ::app::Uno::IDisposable__typeof(), offsetof(List1_Enumerator__Fuse_Resources_IMemoryResource__uType, __interface_1),
        ::app::Uno::Collections::IEnumerator__typeof(), offsetof(List1_Enumerator__Fuse_Resources_IMemoryResource__uType, __interface_2));

    type->SetStrongRefs(
        "_current", offsetof(List1_Enumerator__Fuse_Resources_IMemoryResource, _current),
        "_source", offsetof(List1_Enumerator__Fuse_Resources_IMemoryResource, _source));

    type->SetFields(4,
        ::uNewField("_current", NULL, offsetof(List1_Enumerator__Fuse_Resources_IMemoryResource, _current), ::app::Fuse::Resources::IMemoryResource__typeof()),
        ::uNewField("_iterator", NULL, offsetof(List1_Enumerator__Fuse_Resources_IMemoryResource, _iterator), ::app::Uno::Int__typeof()),
        ::uNewField("_source", NULL, offsetof(List1_Enumerator__Fuse_Resources_IMemoryResource, _source), ::app::Uno::Collections::List__Fuse_Resources_IMemoryResource__typeof()),
        ::uNewField("_version", NULL, offsetof(List1_Enumerator__Fuse_Resources_IMemoryResource, _version), ::app::Uno::Int__typeof()));

    type->SetFunctions(3,
        ::uNewFunctionVoid("Dispose", List1_Enumerator__Fuse_Resources_IMemoryResource__Dispose, 0, false),
        ::uNewFunction("get_Current", List1_Enumerator__Fuse_Resources_IMemoryResource__get_Current, 0, false, ::app::Fuse::Resources::IMemoryResource__typeof()),
        ::uNewFunction("MoveNext", List1_Enumerator__Fuse_Resources_IMemoryResource__MoveNext, 0, false, ::app::Uno::Bool__typeof()));

    ::uRegisterType(type);
    return type;
}

void List1_Enumerator__Fuse_Resources_IMemoryResource___ObjInit(List1_Enumerator__Fuse_Resources_IMemoryResource* __this, ::app::Uno::Collections::List__Fuse_Resources_IMemoryResource* source)
{
    __this->_source = source;
    __this->_version = ::uPtr< ::app::Uno::Collections::List__Fuse_Resources_IMemoryResource*>(source)->_version;
    __this->_iterator = -1;
}

void List1_Enumerator__Fuse_Resources_IMemoryResource__Dispose(List1_Enumerator__Fuse_Resources_IMemoryResource* __this)
{
}

::uObject* List1_Enumerator__Fuse_Resources_IMemoryResource__get_Current(List1_Enumerator__Fuse_Resources_IMemoryResource* __this)
{
    return __this->_current;
}

bool List1_Enumerator__Fuse_Resources_IMemoryResource__MoveNext(List1_Enumerator__Fuse_Resources_IMemoryResource* __this)
{
    if (::uPtr< ::app::Uno::Collections::List__Fuse_Resources_IMemoryResource*>(__this->_source)->_version != __this->_version)
    {
        U_THROW(::app::Uno::InvalidOperationException__New_4(NULL, ::uGetConstString("Collection was modified")));
    }

    __this->_iterator++;

    if (__this->_iterator < ::uPtr< ::app::Uno::Collections::List__Fuse_Resources_IMemoryResource*>(__this->_source)->_used)
    {
        __this->_current = ::uPtr< ::uArray*>(::uPtr< ::app::Uno::Collections::List__Fuse_Resources_IMemoryResource*>(__this->_source)->_data)->Item< ::uObject*>(__this->_iterator);
        return true;
    }

    return false;
}

List1_Enumerator__Fuse_Resources_IMemoryResource List1_Enumerator__Fuse_Resources_IMemoryResource__New_1(::uStatic* __this, ::app::Uno::Collections::List__Fuse_Resources_IMemoryResource* source)
{
    List1_Enumerator__Fuse_Resources_IMemoryResource inst = ::uDefault< List1_Enumerator__Fuse_Resources_IMemoryResource>();
    inst._ObjInit(source);
    return inst;
}

void List1_Enumerator__Fuse_Resources_IMemoryResource__Uno_Collections_IEnumerator_Reset(List1_Enumerator__Fuse_Resources_IMemoryResource* __this)
{
    __this->_iterator = -1;
    __this->_current = NULL;
    __this->_version = ::uPtr< ::app::Uno::Collections::List__Fuse_Resources_IMemoryResource*>(__this->_source)->_version;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Collections\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

List1_Enumerator__Fuse_Resources_ISoftDisposable__uType* List1_Enumerator__Fuse_Resources_ISoftDisposable__typeof()
{
    static ::uStaticStrong<List1_Enumerator__Fuse_Resources_ISoftDisposable__uType*> type;
    if (type != NULL) return type;

    type = (List1_Enumerator__Fuse_Resources_ISoftDisposable__uType*)::uAllocStructType(sizeof(List1_Enumerator__Fuse_Resources_ISoftDisposable__uType), "Uno.Collections.List<Fuse.Resources.ISoftDisposable>.Enumerator", sizeof(List1_Enumerator__Fuse_Resources_ISoftDisposable), 3, 2, 0);

    type->__interface_2.__fp_Reset = (void(*)(void*))List1_Enumerator__Fuse_Resources_ISoftDisposable__Uno_Collections_IEnumerator_Reset;
    type->__interface_0.__fp_get_Current = (::uObject*(*)(void*))List1_Enumerator__Fuse_Resources_ISoftDisposable__get_Current;
    type->__interface_1.__fp_Dispose = (void(*)(void*))List1_Enumerator__Fuse_Resources_ISoftDisposable__Dispose;
    type->__interface_2.__fp_MoveNext = (bool(*)(void*))List1_Enumerator__Fuse_Resources_ISoftDisposable__MoveNext;

    type->SetInterfaces(
        ::app::Uno::Collections::IEnumerator__Fuse_Resources_ISoftDisposable__typeof(), offsetof(List1_Enumerator__Fuse_Resources_ISoftDisposable__uType, __interface_0),
        ::app::Uno::IDisposable__typeof(), offsetof(List1_Enumerator__Fuse_Resources_ISoftDisposable__uType, __interface_1),
        ::app::Uno::Collections::IEnumerator__typeof(), offsetof(List1_Enumerator__Fuse_Resources_ISoftDisposable__uType, __interface_2));

    type->SetStrongRefs(
        "_current", offsetof(List1_Enumerator__Fuse_Resources_ISoftDisposable, _current),
        "_source", offsetof(List1_Enumerator__Fuse_Resources_ISoftDisposable, _source));

    type->SetFields(4,
        ::uNewField("_current", NULL, offsetof(List1_Enumerator__Fuse_Resources_ISoftDisposable, _current), ::app::Fuse::Resources::ISoftDisposable__typeof()),
        ::uNewField("_iterator", NULL, offsetof(List1_Enumerator__Fuse_Resources_ISoftDisposable, _iterator), ::app::Uno::Int__typeof()),
        ::uNewField("_source", NULL, offsetof(List1_Enumerator__Fuse_Resources_ISoftDisposable, _source), ::app::Uno::Collections::List__Fuse_Resources_ISoftDisposable__typeof()),
        ::uNewField("_version", NULL, offsetof(List1_Enumerator__Fuse_Resources_ISoftDisposable, _version), ::app::Uno::Int__typeof()));

    type->SetFunctions(3,
        ::uNewFunctionVoid("Dispose", List1_Enumerator__Fuse_Resources_ISoftDisposable__Dispose, 0, false),
        ::uNewFunction("get_Current", List1_Enumerator__Fuse_Resources_ISoftDisposable__get_Current, 0, false, ::app::Fuse::Resources::ISoftDisposable__typeof()),
        ::uNewFunction("MoveNext", List1_Enumerator__Fuse_Resources_ISoftDisposable__MoveNext, 0, false, ::app::Uno::Bool__typeof()));

    ::uRegisterType(type);
    return type;
}

void List1_Enumerator__Fuse_Resources_ISoftDisposable___ObjInit(List1_Enumerator__Fuse_Resources_ISoftDisposable* __this, ::app::Uno::Collections::List__Fuse_Resources_ISoftDisposable* source)
{
    __this->_source = source;
    __this->_version = ::uPtr< ::app::Uno::Collections::List__Fuse_Resources_ISoftDisposable*>(source)->_version;
    __this->_iterator = -1;
}

void List1_Enumerator__Fuse_Resources_ISoftDisposable__Dispose(List1_Enumerator__Fuse_Resources_ISoftDisposable* __this)
{
}

::uObject* List1_Enumerator__Fuse_Resources_ISoftDisposable__get_Current(List1_Enumerator__Fuse_Resources_ISoftDisposable* __this)
{
    return __this->_current;
}

bool List1_Enumerator__Fuse_Resources_ISoftDisposable__MoveNext(List1_Enumerator__Fuse_Resources_ISoftDisposable* __this)
{
    if (::uPtr< ::app::Uno::Collections::List__Fuse_Resources_ISoftDisposable*>(__this->_source)->_version != __this->_version)
    {
        U_THROW(::app::Uno::InvalidOperationException__New_4(NULL, ::uGetConstString("Collection was modified")));
    }

    __this->_iterator++;

    if (__this->_iterator < ::uPtr< ::app::Uno::Collections::List__Fuse_Resources_ISoftDisposable*>(__this->_source)->_used)
    {
        __this->_current = ::uPtr< ::uArray*>(::uPtr< ::app::Uno::Collections::List__Fuse_Resources_ISoftDisposable*>(__this->_source)->_data)->Item< ::uObject*>(__this->_iterator);
        return true;
    }

    return false;
}

List1_Enumerator__Fuse_Resources_ISoftDisposable List1_Enumerator__Fuse_Resources_ISoftDisposable__New_1(::uStatic* __this, ::app::Uno::Collections::List__Fuse_Resources_ISoftDisposable* source)
{
    List1_Enumerator__Fuse_Resources_ISoftDisposable inst = ::uDefault< List1_Enumerator__Fuse_Resources_ISoftDisposable>();
    inst._ObjInit(source);
    return inst;
}

void List1_Enumerator__Fuse_Resources_ISoftDisposable__Uno_Collections_IEnumerator_Reset(List1_Enumerator__Fuse_Resources_ISoftDisposable* __this)
{
    __this->_iterator = -1;
    __this->_current = NULL;
    __this->_version = ::uPtr< ::app::Uno::Collections::List__Fuse_Resources_ISoftDisposable*>(__this->_source)->_version;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Collections\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

List1_Enumerator__Fuse_Scripting_INameListener__uType* List1_Enumerator__Fuse_Scripting_INameListener__typeof()
{
    static ::uStaticStrong<List1_Enumerator__Fuse_Scripting_INameListener__uType*> type;
    if (type != NULL) return type;

    type = (List1_Enumerator__Fuse_Scripting_INameListener__uType*)::uAllocStructType(sizeof(List1_Enumerator__Fuse_Scripting_INameListener__uType), "Uno.Collections.List<Fuse.Scripting.INameListener>.Enumerator", sizeof(List1_Enumerator__Fuse_Scripting_INameListener), 3, 2, 0);

    type->__interface_2.__fp_Reset = (void(*)(void*))List1_Enumerator__Fuse_Scripting_INameListener__Uno_Collections_IEnumerator_Reset;
    type->__interface_0.__fp_get_Current = (::uObject*(*)(void*))List1_Enumerator__Fuse_Scripting_INameListener__get_Current;
    type->__interface_1.__fp_Dispose = (void(*)(void*))List1_Enumerator__Fuse_Scripting_INameListener__Dispose;
    type->__interface_2.__fp_MoveNext = (bool(*)(void*))List1_Enumerator__Fuse_Scripting_INameListener__MoveNext;

    type->SetInterfaces(
        ::app::Uno::Collections::IEnumerator__Fuse_Scripting_INameListener__typeof(), offsetof(List1_Enumerator__Fuse_Scripting_INameListener__uType, __interface_0),
        ::app::Uno::IDisposable__typeof(), offsetof(List1_Enumerator__Fuse_Scripting_INameListener__uType, __interface_1),
        ::app::Uno::Collections::IEnumerator__typeof(), offsetof(List1_Enumerator__Fuse_Scripting_INameListener__uType, __interface_2));

    type->SetStrongRefs(
        "_current", offsetof(List1_Enumerator__Fuse_Scripting_INameListener, _current),
        "_source", offsetof(List1_Enumerator__Fuse_Scripting_INameListener, _source));

    type->SetFields(4,
        ::uNewField("_current", NULL, offsetof(List1_Enumerator__Fuse_Scripting_INameListener, _current), ::app::Fuse::Scripting::INameListener__typeof()),
        ::uNewField("_iterator", NULL, offsetof(List1_Enumerator__Fuse_Scripting_INameListener, _iterator), ::app::Uno::Int__typeof()),
        ::uNewField("_source", NULL, offsetof(List1_Enumerator__Fuse_Scripting_INameListener, _source), ::app::Uno::Collections::List__Fuse_Scripting_INameListener__typeof()),
        ::uNewField("_version", NULL, offsetof(List1_Enumerator__Fuse_Scripting_INameListener, _version), ::app::Uno::Int__typeof()));

    type->SetFunctions(3,
        ::uNewFunctionVoid("Dispose", List1_Enumerator__Fuse_Scripting_INameListener__Dispose, 0, false),
        ::uNewFunction("get_Current", List1_Enumerator__Fuse_Scripting_INameListener__get_Current, 0, false, ::app::Fuse::Scripting::INameListener__typeof()),
        ::uNewFunction("MoveNext", List1_Enumerator__Fuse_Scripting_INameListener__MoveNext, 0, false, ::app::Uno::Bool__typeof()));

    ::uRegisterType(type);
    return type;
}

void List1_Enumerator__Fuse_Scripting_INameListener___ObjInit(List1_Enumerator__Fuse_Scripting_INameListener* __this, ::app::Uno::Collections::List__Fuse_Scripting_INameListener* source)
{
    __this->_source = source;
    __this->_version = ::uPtr< ::app::Uno::Collections::List__Fuse_Scripting_INameListener*>(source)->_version;
    __this->_iterator = -1;
}

void List1_Enumerator__Fuse_Scripting_INameListener__Dispose(List1_Enumerator__Fuse_Scripting_INameListener* __this)
{
}

::uObject* List1_Enumerator__Fuse_Scripting_INameListener__get_Current(List1_Enumerator__Fuse_Scripting_INameListener* __this)
{
    return __this->_current;
}

bool List1_Enumerator__Fuse_Scripting_INameListener__MoveNext(List1_Enumerator__Fuse_Scripting_INameListener* __this)
{
    if (::uPtr< ::app::Uno::Collections::List__Fuse_Scripting_INameListener*>(__this->_source)->_version != __this->_version)
    {
        U_THROW(::app::Uno::InvalidOperationException__New_4(NULL, ::uGetConstString("Collection was modified")));
    }

    __this->_iterator++;

    if (__this->_iterator < ::uPtr< ::app::Uno::Collections::List__Fuse_Scripting_INameListener*>(__this->_source)->_used)
    {
        __this->_current = ::uPtr< ::uArray*>(::uPtr< ::app::Uno::Collections::List__Fuse_Scripting_INameListener*>(__this->_source)->_data)->Item< ::uObject*>(__this->_iterator);
        return true;
    }

    return false;
}

List1_Enumerator__Fuse_Scripting_INameListener List1_Enumerator__Fuse_Scripting_INameListener__New_1(::uStatic* __this, ::app::Uno::Collections::List__Fuse_Scripting_INameListener* source)
{
    List1_Enumerator__Fuse_Scripting_INameListener inst = ::uDefault< List1_Enumerator__Fuse_Scripting_INameListener>();
    inst._ObjInit(source);
    return inst;
}

void List1_Enumerator__Fuse_Scripting_INameListener__Uno_Collections_IEnumerator_Reset(List1_Enumerator__Fuse_Scripting_INameListener* __this)
{
    __this->_iterator = -1;
    __this->_current = NULL;
    __this->_version = ::uPtr< ::app::Uno::Collections::List__Fuse_Scripting_INameListener*>(__this->_source)->_version;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Collections\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

List1_Enumerator__Fuse_Scripting_NativeMember__uType* List1_Enumerator__Fuse_Scripting_NativeMember__typeof()
{
    static ::uStaticStrong<List1_Enumerator__Fuse_Scripting_NativeMember__uType*> type;
    if (type != NULL) return type;

    type = (List1_Enumerator__Fuse_Scripting_NativeMember__uType*)::uAllocStructType(sizeof(List1_Enumerator__Fuse_Scripting_NativeMember__uType), "Uno.Collections.List<Fuse.Scripting.NativeMember>.Enumerator", sizeof(List1_Enumerator__Fuse_Scripting_NativeMember), 3, 2, 0);

    type->__interface_2.__fp_Reset = (void(*)(void*))List1_Enumerator__Fuse_Scripting_NativeMember__Uno_Collections_IEnumerator_Reset;
    type->__interface_0.__fp_get_Current = (::app::Fuse::Scripting::NativeMember*(*)(void*))List1_Enumerator__Fuse_Scripting_NativeMember__get_Current;
    type->__interface_1.__fp_Dispose = (void(*)(void*))List1_Enumerator__Fuse_Scripting_NativeMember__Dispose;
    type->__interface_2.__fp_MoveNext = (bool(*)(void*))List1_Enumerator__Fuse_Scripting_NativeMember__MoveNext;

    type->SetInterfaces(
        ::app::Uno::Collections::IEnumerator__Fuse_Scripting_NativeMember__typeof(), offsetof(List1_Enumerator__Fuse_Scripting_NativeMember__uType, __interface_0),
        ::app::Uno::IDisposable__typeof(), offsetof(List1_Enumerator__Fuse_Scripting_NativeMember__uType, __interface_1),
        ::app::Uno::Collections::IEnumerator__typeof(), offsetof(List1_Enumerator__Fuse_Scripting_NativeMember__uType, __interface_2));

    type->SetStrongRefs(
        "_current", offsetof(List1_Enumerator__Fuse_Scripting_NativeMember, _current),
        "_source", offsetof(List1_Enumerator__Fuse_Scripting_NativeMember, _source));

    type->SetFields(4,
        ::uNewField("_current", NULL, offsetof(List1_Enumerator__Fuse_Scripting_NativeMember, _current), ::app::Fuse::Scripting::NativeMember__typeof()),
        ::uNewField("_iterator", NULL, offsetof(List1_Enumerator__Fuse_Scripting_NativeMember, _iterator), ::app::Uno::Int__typeof()),
        ::uNewField("_source", NULL, offsetof(List1_Enumerator__Fuse_Scripting_NativeMember, _source), ::app::Uno::Collections::List__Fuse_Scripting_NativeMember__typeof()),
        ::uNewField("_version", NULL, offsetof(List1_Enumerator__Fuse_Scripting_NativeMember, _version), ::app::Uno::Int__typeof()));

    type->SetFunctions(3,
        ::uNewFunctionVoid("Dispose", List1_Enumerator__Fuse_Scripting_NativeMember__Dispose, 0, false),
        ::uNewFunction("get_Current", List1_Enumerator__Fuse_Scripting_NativeMember__get_Current, 0, false, ::app::Fuse::Scripting::NativeMember__typeof()),
        ::uNewFunction("MoveNext", List1_Enumerator__Fuse_Scripting_NativeMember__MoveNext, 0, false, ::app::Uno::Bool__typeof()));

    ::uRegisterType(type);
    return type;
}

void List1_Enumerator__Fuse_Scripting_NativeMember___ObjInit(List1_Enumerator__Fuse_Scripting_NativeMember* __this, ::app::Uno::Collections::List__Fuse_Scripting_NativeMember* source)
{
    __this->_source = source;
    __this->_version = ::uPtr< ::app::Uno::Collections::List__Fuse_Scripting_NativeMember*>(source)->_version;
    __this->_iterator = -1;
}

void List1_Enumerator__Fuse_Scripting_NativeMember__Dispose(List1_Enumerator__Fuse_Scripting_NativeMember* __this)
{
}

::app::Fuse::Scripting::NativeMember* List1_Enumerator__Fuse_Scripting_NativeMember__get_Current(List1_Enumerator__Fuse_Scripting_NativeMember* __this)
{
    return __this->_current;
}

bool List1_Enumerator__Fuse_Scripting_NativeMember__MoveNext(List1_Enumerator__Fuse_Scripting_NativeMember* __this)
{
    if (::uPtr< ::app::Uno::Collections::List__Fuse_Scripting_NativeMember*>(__this->_source)->_version != __this->_version)
    {
        U_THROW(::app::Uno::InvalidOperationException__New_4(NULL, ::uGetConstString("Collection was modified")));
    }

    __this->_iterator++;

    if (__this->_iterator < ::uPtr< ::app::Uno::Collections::List__Fuse_Scripting_NativeMember*>(__this->_source)->_used)
    {
        __this->_current = ::uPtr< ::uArray*>(::uPtr< ::app::Uno::Collections::List__Fuse_Scripting_NativeMember*>(__this->_source)->_data)->Item< ::app::Fuse::Scripting::NativeMember*>(__this->_iterator);
        return true;
    }

    return false;
}

List1_Enumerator__Fuse_Scripting_NativeMember List1_Enumerator__Fuse_Scripting_NativeMember__New_1(::uStatic* __this, ::app::Uno::Collections::List__Fuse_Scripting_NativeMember* source)
{
    List1_Enumerator__Fuse_Scripting_NativeMember inst = ::uDefault< List1_Enumerator__Fuse_Scripting_NativeMember>();
    inst._ObjInit(source);
    return inst;
}

void List1_Enumerator__Fuse_Scripting_NativeMember__Uno_Collections_IEnumerator_Reset(List1_Enumerator__Fuse_Scripting_NativeMember* __this)
{
    __this->_iterator = -1;
    __this->_current = NULL;
    __this->_version = ::uPtr< ::app::Uno::Collections::List__Fuse_Scripting_NativeMember*>(__this->_source)->_version;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Collections\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

List1_Enumerator__Fuse_Stage__uType* List1_Enumerator__Fuse_Stage__typeof()
{
    static ::uStaticStrong<List1_Enumerator__Fuse_Stage__uType*> type;
    if (type != NULL) return type;

    type = (List1_Enumerator__Fuse_Stage__uType*)::uAllocStructType(sizeof(List1_Enumerator__Fuse_Stage__uType), "Uno.Collections.List<Fuse.Stage>.Enumerator", sizeof(List1_Enumerator__Fuse_Stage), 3, 2, 0);

    type->__interface_2.__fp_Reset = (void(*)(void*))List1_Enumerator__Fuse_Stage__Uno_Collections_IEnumerator_Reset;
    type->__interface_0.__fp_get_Current = (::app::Fuse::Stage*(*)(void*))List1_Enumerator__Fuse_Stage__get_Current;
    type->__interface_1.__fp_Dispose = (void(*)(void*))List1_Enumerator__Fuse_Stage__Dispose;
    type->__interface_2.__fp_MoveNext = (bool(*)(void*))List1_Enumerator__Fuse_Stage__MoveNext;

    type->SetInterfaces(
        ::app::Uno::Collections::IEnumerator__Fuse_Stage__typeof(), offsetof(List1_Enumerator__Fuse_Stage__uType, __interface_0),
        ::app::Uno::IDisposable__typeof(), offsetof(List1_Enumerator__Fuse_Stage__uType, __interface_1),
        ::app::Uno::Collections::IEnumerator__typeof(), offsetof(List1_Enumerator__Fuse_Stage__uType, __interface_2));

    type->SetStrongRefs(
        "_current", offsetof(List1_Enumerator__Fuse_Stage, _current),
        "_source", offsetof(List1_Enumerator__Fuse_Stage, _source));

    type->SetFields(4,
        ::uNewField("_current", NULL, offsetof(List1_Enumerator__Fuse_Stage, _current), ::app::Fuse::Stage__typeof()),
        ::uNewField("_iterator", NULL, offsetof(List1_Enumerator__Fuse_Stage, _iterator), ::app::Uno::Int__typeof()),
        ::uNewField("_source", NULL, offsetof(List1_Enumerator__Fuse_Stage, _source), ::app::Uno::Collections::List__Fuse_Stage__typeof()),
        ::uNewField("_version", NULL, offsetof(List1_Enumerator__Fuse_Stage, _version), ::app::Uno::Int__typeof()));

    type->SetFunctions(3,
        ::uNewFunctionVoid("Dispose", List1_Enumerator__Fuse_Stage__Dispose, 0, false),
        ::uNewFunction("get_Current", List1_Enumerator__Fuse_Stage__get_Current, 0, false, ::app::Fuse::Stage__typeof()),
        ::uNewFunction("MoveNext", List1_Enumerator__Fuse_Stage__MoveNext, 0, false, ::app::Uno::Bool__typeof()));

    ::uRegisterType(type);
    return type;
}

void List1_Enumerator__Fuse_Stage___ObjInit(List1_Enumerator__Fuse_Stage* __this, ::app::Uno::Collections::List__Fuse_Stage* source)
{
    __this->_source = source;
    __this->_version = ::uPtr< ::app::Uno::Collections::List__Fuse_Stage*>(source)->_version;
    __this->_iterator = -1;
}

void List1_Enumerator__Fuse_Stage__Dispose(List1_Enumerator__Fuse_Stage* __this)
{
}

::app::Fuse::Stage* List1_Enumerator__Fuse_Stage__get_Current(List1_Enumerator__Fuse_Stage* __this)
{
    return __this->_current;
}

bool List1_Enumerator__Fuse_Stage__MoveNext(List1_Enumerator__Fuse_Stage* __this)
{
    if (::uPtr< ::app::Uno::Collections::List__Fuse_Stage*>(__this->_source)->_version != __this->_version)
    {
        U_THROW(::app::Uno::InvalidOperationException__New_4(NULL, ::uGetConstString("Collection was modified")));
    }

    __this->_iterator++;

    if (__this->_iterator < ::uPtr< ::app::Uno::Collections::List__Fuse_Stage*>(__this->_source)->_used)
    {
        __this->_current = ::uPtr< ::uArray*>(::uPtr< ::app::Uno::Collections::List__Fuse_Stage*>(__this->_source)->_data)->Item< ::app::Fuse::Stage*>(__this->_iterator);
        return true;
    }

    return false;
}

List1_Enumerator__Fuse_Stage List1_Enumerator__Fuse_Stage__New_1(::uStatic* __this, ::app::Uno::Collections::List__Fuse_Stage* source)
{
    List1_Enumerator__Fuse_Stage inst = ::uDefault< List1_Enumerator__Fuse_Stage>();
    inst._ObjInit(source);
    return inst;
}

void List1_Enumerator__Fuse_Stage__Uno_Collections_IEnumerator_Reset(List1_Enumerator__Fuse_Stage* __this)
{
    __this->_iterator = -1;
    __this->_current = NULL;
    __this->_version = ::uPtr< ::app::Uno::Collections::List__Fuse_Stage*>(__this->_source)->_version;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Collections\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

List1_Enumerator__Fuse_Style__uType* List1_Enumerator__Fuse_Style__typeof()
{
    static ::uStaticStrong<List1_Enumerator__Fuse_Style__uType*> type;
    if (type != NULL) return type;

    type = (List1_Enumerator__Fuse_Style__uType*)::uAllocStructType(sizeof(List1_Enumerator__Fuse_Style__uType), "Uno.Collections.List<Fuse.Style>.Enumerator", sizeof(List1_Enumerator__Fuse_Style), 3, 2, 0);

    type->__interface_2.__fp_Reset = (void(*)(void*))List1_Enumerator__Fuse_Style__Uno_Collections_IEnumerator_Reset;
    type->__interface_0.__fp_get_Current = (::app::Fuse::Style*(*)(void*))List1_Enumerator__Fuse_Style__get_Current;
    type->__interface_1.__fp_Dispose = (void(*)(void*))List1_Enumerator__Fuse_Style__Dispose;
    type->__interface_2.__fp_MoveNext = (bool(*)(void*))List1_Enumerator__Fuse_Style__MoveNext;

    type->SetInterfaces(
        ::app::Uno::Collections::IEnumerator__Fuse_Style__typeof(), offsetof(List1_Enumerator__Fuse_Style__uType, __interface_0),
        ::app::Uno::IDisposable__typeof(), offsetof(List1_Enumerator__Fuse_Style__uType, __interface_1),
        ::app::Uno::Collections::IEnumerator__typeof(), offsetof(List1_Enumerator__Fuse_Style__uType, __interface_2));

    type->SetStrongRefs(
        "_current", offsetof(List1_Enumerator__Fuse_Style, _current),
        "_source", offsetof(List1_Enumerator__Fuse_Style, _source));

    type->SetFields(4,
        ::uNewField("_current", NULL, offsetof(List1_Enumerator__Fuse_Style, _current), ::app::Fuse::Style__typeof()),
        ::uNewField("_iterator", NULL, offsetof(List1_Enumerator__Fuse_Style, _iterator), ::app::Uno::Int__typeof()),
        ::uNewField("_source", NULL, offsetof(List1_Enumerator__Fuse_Style, _source), ::app::Uno::Collections::List__Fuse_Style__typeof()),
        ::uNewField("_version", NULL, offsetof(List1_Enumerator__Fuse_Style, _version), ::app::Uno::Int__typeof()));

    type->SetFunctions(3,
        ::uNewFunctionVoid("Dispose", List1_Enumerator__Fuse_Style__Dispose, 0, false),
        ::uNewFunction("get_Current", List1_Enumerator__Fuse_Style__get_Current, 0, false, ::app::Fuse::Style__typeof()),
        ::uNewFunction("MoveNext", List1_Enumerator__Fuse_Style__MoveNext, 0, false, ::app::Uno::Bool__typeof()));

    ::uRegisterType(type);
    return type;
}

void List1_Enumerator__Fuse_Style___ObjInit(List1_Enumerator__Fuse_Style* __this, ::app::Uno::Collections::List__Fuse_Style* source)
{
    __this->_source = source;
    __this->_version = ::uPtr< ::app::Uno::Collections::List__Fuse_Style*>(source)->_version;
    __this->_iterator = -1;
}

void List1_Enumerator__Fuse_Style__Dispose(List1_Enumerator__Fuse_Style* __this)
{
}

::app::Fuse::Style* List1_Enumerator__Fuse_Style__get_Current(List1_Enumerator__Fuse_Style* __this)
{
    return __this->_current;
}

bool List1_Enumerator__Fuse_Style__MoveNext(List1_Enumerator__Fuse_Style* __this)
{
    if (::uPtr< ::app::Uno::Collections::List__Fuse_Style*>(__this->_source)->_version != __this->_version)
    {
        U_THROW(::app::Uno::InvalidOperationException__New_4(NULL, ::uGetConstString("Collection was modified")));
    }

    __this->_iterator++;

    if (__this->_iterator < ::uPtr< ::app::Uno::Collections::List__Fuse_Style*>(__this->_source)->_used)
    {
        __this->_current = ::uPtr< ::uArray*>(::uPtr< ::app::Uno::Collections::List__Fuse_Style*>(__this->_source)->_data)->Item< ::app::Fuse::Style*>(__this->_iterator);
        return true;
    }

    return false;
}

List1_Enumerator__Fuse_Style List1_Enumerator__Fuse_Style__New_1(::uStatic* __this, ::app::Uno::Collections::List__Fuse_Style* source)
{
    List1_Enumerator__Fuse_Style inst = ::uDefault< List1_Enumerator__Fuse_Style>();
    inst._ObjInit(source);
    return inst;
}

void List1_Enumerator__Fuse_Style__Uno_Collections_IEnumerator_Reset(List1_Enumerator__Fuse_Style* __this)
{
    __this->_iterator = -1;
    __this->_current = NULL;
    __this->_version = ::uPtr< ::app::Uno::Collections::List__Fuse_Style*>(__this->_source)->_version;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Collections\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

List1_Enumerator__Fuse_StyleProperty__uType* List1_Enumerator__Fuse_StyleProperty__typeof()
{
    static ::uStaticStrong<List1_Enumerator__Fuse_StyleProperty__uType*> type;
    if (type != NULL) return type;

    type = (List1_Enumerator__Fuse_StyleProperty__uType*)::uAllocStructType(sizeof(List1_Enumerator__Fuse_StyleProperty__uType), "Uno.Collections.List<Fuse.StyleProperty>.Enumerator", sizeof(List1_Enumerator__Fuse_StyleProperty), 3, 2, 0);

    type->__interface_2.__fp_Reset = (void(*)(void*))List1_Enumerator__Fuse_StyleProperty__Uno_Collections_IEnumerator_Reset;
    type->__interface_0.__fp_get_Current = (::app::Fuse::StyleProperty*(*)(void*))List1_Enumerator__Fuse_StyleProperty__get_Current;
    type->__interface_1.__fp_Dispose = (void(*)(void*))List1_Enumerator__Fuse_StyleProperty__Dispose;
    type->__interface_2.__fp_MoveNext = (bool(*)(void*))List1_Enumerator__Fuse_StyleProperty__MoveNext;

    type->SetInterfaces(
        ::app::Uno::Collections::IEnumerator__Fuse_StyleProperty__typeof(), offsetof(List1_Enumerator__Fuse_StyleProperty__uType, __interface_0),
        ::app::Uno::IDisposable__typeof(), offsetof(List1_Enumerator__Fuse_StyleProperty__uType, __interface_1),
        ::app::Uno::Collections::IEnumerator__typeof(), offsetof(List1_Enumerator__Fuse_StyleProperty__uType, __interface_2));

    type->SetStrongRefs(
        "_current", offsetof(List1_Enumerator__Fuse_StyleProperty, _current),
        "_source", offsetof(List1_Enumerator__Fuse_StyleProperty, _source));

    type->SetFields(4,
        ::uNewField("_current", NULL, offsetof(List1_Enumerator__Fuse_StyleProperty, _current), ::app::Fuse::StyleProperty__typeof()),
        ::uNewField("_iterator", NULL, offsetof(List1_Enumerator__Fuse_StyleProperty, _iterator), ::app::Uno::Int__typeof()),
        ::uNewField("_source", NULL, offsetof(List1_Enumerator__Fuse_StyleProperty, _source), ::app::Uno::Collections::List__Fuse_StyleProperty__typeof()),
        ::uNewField("_version", NULL, offsetof(List1_Enumerator__Fuse_StyleProperty, _version), ::app::Uno::Int__typeof()));

    type->SetFunctions(3,
        ::uNewFunctionVoid("Dispose", List1_Enumerator__Fuse_StyleProperty__Dispose, 0, false),
        ::uNewFunction("get_Current", List1_Enumerator__Fuse_StyleProperty__get_Current, 0, false, ::app::Fuse::StyleProperty__typeof()),
        ::uNewFunction("MoveNext", List1_Enumerator__Fuse_StyleProperty__MoveNext, 0, false, ::app::Uno::Bool__typeof()));

    ::uRegisterType(type);
    return type;
}

void List1_Enumerator__Fuse_StyleProperty___ObjInit(List1_Enumerator__Fuse_StyleProperty* __this, ::app::Uno::Collections::List__Fuse_StyleProperty* source)
{
    __this->_source = source;
    __this->_version = ::uPtr< ::app::Uno::Collections::List__Fuse_StyleProperty*>(source)->_version;
    __this->_iterator = -1;
}

void List1_Enumerator__Fuse_StyleProperty__Dispose(List1_Enumerator__Fuse_StyleProperty* __this)
{
}

::app::Fuse::StyleProperty* List1_Enumerator__Fuse_StyleProperty__get_Current(List1_Enumerator__Fuse_StyleProperty* __this)
{
    return __this->_current;
}

bool List1_Enumerator__Fuse_StyleProperty__MoveNext(List1_Enumerator__Fuse_StyleProperty* __this)
{
    if (::uPtr< ::app::Uno::Collections::List__Fuse_StyleProperty*>(__this->_source)->_version != __this->_version)
    {
        U_THROW(::app::Uno::InvalidOperationException__New_4(NULL, ::uGetConstString("Collection was modified")));
    }

    __this->_iterator++;

    if (__this->_iterator < ::uPtr< ::app::Uno::Collections::List__Fuse_StyleProperty*>(__this->_source)->_used)
    {
        __this->_current = ::uPtr< ::uArray*>(::uPtr< ::app::Uno::Collections::List__Fuse_StyleProperty*>(__this->_source)->_data)->Item< ::app::Fuse::StyleProperty*>(__this->_iterator);
        return true;
    }

    return false;
}

List1_Enumerator__Fuse_StyleProperty List1_Enumerator__Fuse_StyleProperty__New_1(::uStatic* __this, ::app::Uno::Collections::List__Fuse_StyleProperty* source)
{
    List1_Enumerator__Fuse_StyleProperty inst = ::uDefault< List1_Enumerator__Fuse_StyleProperty>();
    inst._ObjInit(source);
    return inst;
}

void List1_Enumerator__Fuse_StyleProperty__Uno_Collections_IEnumerator_Reset(List1_Enumerator__Fuse_StyleProperty* __this)
{
    __this->_iterator = -1;
    __this->_current = NULL;
    __this->_version = ::uPtr< ::app::Uno::Collections::List__Fuse_StyleProperty*>(__this->_source)->_version;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Collections\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

List1_Enumerator__Fuse_Transform__uType* List1_Enumerator__Fuse_Transform__typeof()
{
    static ::uStaticStrong<List1_Enumerator__Fuse_Transform__uType*> type;
    if (type != NULL) return type;

    type = (List1_Enumerator__Fuse_Transform__uType*)::uAllocStructType(sizeof(List1_Enumerator__Fuse_Transform__uType), "Uno.Collections.List<Fuse.Transform>.Enumerator", sizeof(List1_Enumerator__Fuse_Transform), 3, 2, 0);

    type->__interface_2.__fp_Reset = (void(*)(void*))List1_Enumerator__Fuse_Transform__Uno_Collections_IEnumerator_Reset;
    type->__interface_0.__fp_get_Current = (::app::Fuse::Transform*(*)(void*))List1_Enumerator__Fuse_Transform__get_Current;
    type->__interface_1.__fp_Dispose = (void(*)(void*))List1_Enumerator__Fuse_Transform__Dispose;
    type->__interface_2.__fp_MoveNext = (bool(*)(void*))List1_Enumerator__Fuse_Transform__MoveNext;

    type->SetInterfaces(
        ::app::Uno::Collections::IEnumerator__Fuse_Transform__typeof(), offsetof(List1_Enumerator__Fuse_Transform__uType, __interface_0),
        ::app::Uno::IDisposable__typeof(), offsetof(List1_Enumerator__Fuse_Transform__uType, __interface_1),
        ::app::Uno::Collections::IEnumerator__typeof(), offsetof(List1_Enumerator__Fuse_Transform__uType, __interface_2));

    type->SetStrongRefs(
        "_current", offsetof(List1_Enumerator__Fuse_Transform, _current),
        "_source", offsetof(List1_Enumerator__Fuse_Transform, _source));

    type->SetFields(4,
        ::uNewField("_current", NULL, offsetof(List1_Enumerator__Fuse_Transform, _current), ::app::Fuse::Transform__typeof()),
        ::uNewField("_iterator", NULL, offsetof(List1_Enumerator__Fuse_Transform, _iterator), ::app::Uno::Int__typeof()),
        ::uNewField("_source", NULL, offsetof(List1_Enumerator__Fuse_Transform, _source), ::app::Uno::Collections::List__Fuse_Transform__typeof()),
        ::uNewField("_version", NULL, offsetof(List1_Enumerator__Fuse_Transform, _version), ::app::Uno::Int__typeof()));

    type->SetFunctions(3,
        ::uNewFunctionVoid("Dispose", List1_Enumerator__Fuse_Transform__Dispose, 0, false),
        ::uNewFunction("get_Current", List1_Enumerator__Fuse_Transform__get_Current, 0, false, ::app::Fuse::Transform__typeof()),
        ::uNewFunction("MoveNext", List1_Enumerator__Fuse_Transform__MoveNext, 0, false, ::app::Uno::Bool__typeof()));

    ::uRegisterType(type);
    return type;
}

void List1_Enumerator__Fuse_Transform___ObjInit(List1_Enumerator__Fuse_Transform* __this, ::app::Uno::Collections::List__Fuse_Transform* source)
{
    __this->_source = source;
    __this->_version = ::uPtr< ::app::Uno::Collections::List__Fuse_Transform*>(source)->_version;
    __this->_iterator = -1;
}

void List1_Enumerator__Fuse_Transform__Dispose(List1_Enumerator__Fuse_Transform* __this)
{
}

::app::Fuse::Transform* List1_Enumerator__Fuse_Transform__get_Current(List1_Enumerator__Fuse_Transform* __this)
{
    return __this->_current;
}

bool List1_Enumerator__Fuse_Transform__MoveNext(List1_Enumerator__Fuse_Transform* __this)
{
    if (::uPtr< ::app::Uno::Collections::List__Fuse_Transform*>(__this->_source)->_version != __this->_version)
    {
        U_THROW(::app::Uno::InvalidOperationException__New_4(NULL, ::uGetConstString("Collection was modified")));
    }

    __this->_iterator++;

    if (__this->_iterator < ::uPtr< ::app::Uno::Collections::List__Fuse_Transform*>(__this->_source)->_used)
    {
        __this->_current = ::uPtr< ::uArray*>(::uPtr< ::app::Uno::Collections::List__Fuse_Transform*>(__this->_source)->_data)->Item< ::app::Fuse::Transform*>(__this->_iterator);
        return true;
    }

    return false;
}

List1_Enumerator__Fuse_Transform List1_Enumerator__Fuse_Transform__New_1(::uStatic* __this, ::app::Uno::Collections::List__Fuse_Transform* source)
{
    List1_Enumerator__Fuse_Transform inst = ::uDefault< List1_Enumerator__Fuse_Transform>();
    inst._ObjInit(source);
    return inst;
}

void List1_Enumerator__Fuse_Transform__Uno_Collections_IEnumerator_Reset(List1_Enumerator__Fuse_Transform* __this)
{
    __this->_iterator = -1;
    __this->_current = NULL;
    __this->_version = ::uPtr< ::app::Uno::Collections::List__Fuse_Transform*>(__this->_source)->_version;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Collections\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

List1_Enumerator__Fuse_Triggers_Actions_TriggerAction__uType* List1_Enumerator__Fuse_Triggers_Actions_TriggerAction__typeof()
{
    static ::uStaticStrong<List1_Enumerator__Fuse_Triggers_Actions_TriggerAction__uType*> type;
    if (type != NULL) return type;

    type = (List1_Enumerator__Fuse_Triggers_Actions_TriggerAction__uType*)::uAllocStructType(sizeof(List1_Enumerator__Fuse_Triggers_Actions_TriggerAction__uType), "Uno.Collections.List<Fuse.Triggers.Actions.TriggerAction>.Enumerator", sizeof(List1_Enumerator__Fuse_Triggers_Actions_TriggerAction), 3, 2, 0);

    type->__interface_2.__fp_Reset = (void(*)(void*))List1_Enumerator__Fuse_Triggers_Actions_TriggerAction__Uno_Collections_IEnumerator_Reset;
    type->__interface_0.__fp_get_Current = (::app::Fuse::Triggers::Actions::TriggerAction*(*)(void*))List1_Enumerator__Fuse_Triggers_Actions_TriggerAction__get_Current;
    type->__interface_1.__fp_Dispose = (void(*)(void*))List1_Enumerator__Fuse_Triggers_Actions_TriggerAction__Dispose;
    type->__interface_2.__fp_MoveNext = (bool(*)(void*))List1_Enumerator__Fuse_Triggers_Actions_TriggerAction__MoveNext;

    type->SetInterfaces(
        ::app::Uno::Collections::IEnumerator__Fuse_Triggers_Actions_TriggerAction__typeof(), offsetof(List1_Enumerator__Fuse_Triggers_Actions_TriggerAction__uType, __interface_0),
        ::app::Uno::IDisposable__typeof(), offsetof(List1_Enumerator__Fuse_Triggers_Actions_TriggerAction__uType, __interface_1),
        ::app::Uno::Collections::IEnumerator__typeof(), offsetof(List1_Enumerator__Fuse_Triggers_Actions_TriggerAction__uType, __interface_2));

    type->SetStrongRefs(
        "_current", offsetof(List1_Enumerator__Fuse_Triggers_Actions_TriggerAction, _current),
        "_source", offsetof(List1_Enumerator__Fuse_Triggers_Actions_TriggerAction, _source));

    type->SetFields(4,
        ::uNewField("_current", NULL, offsetof(List1_Enumerator__Fuse_Triggers_Actions_TriggerAction, _current), ::app::Fuse::Triggers::Actions::TriggerAction__typeof()),
        ::uNewField("_iterator", NULL, offsetof(List1_Enumerator__Fuse_Triggers_Actions_TriggerAction, _iterator), ::app::Uno::Int__typeof()),
        ::uNewField("_source", NULL, offsetof(List1_Enumerator__Fuse_Triggers_Actions_TriggerAction, _source), ::app::Uno::Collections::List__Fuse_Triggers_Actions_TriggerAction__typeof()),
        ::uNewField("_version", NULL, offsetof(List1_Enumerator__Fuse_Triggers_Actions_TriggerAction, _version), ::app::Uno::Int__typeof()));

    type->SetFunctions(3,
        ::uNewFunctionVoid("Dispose", List1_Enumerator__Fuse_Triggers_Actions_TriggerAction__Dispose, 0, false),
        ::uNewFunction("get_Current", List1_Enumerator__Fuse_Triggers_Actions_TriggerAction__get_Current, 0, false, ::app::Fuse::Triggers::Actions::TriggerAction__typeof()),
        ::uNewFunction("MoveNext", List1_Enumerator__Fuse_Triggers_Actions_TriggerAction__MoveNext, 0, false, ::app::Uno::Bool__typeof()));

    ::uRegisterType(type);
    return type;
}

void List1_Enumerator__Fuse_Triggers_Actions_TriggerAction___ObjInit(List1_Enumerator__Fuse_Triggers_Actions_TriggerAction* __this, ::app::Uno::Collections::List__Fuse_Triggers_Actions_TriggerAction* source)
{
    __this->_source = source;
    __this->_version = ::uPtr< ::app::Uno::Collections::List__Fuse_Triggers_Actions_TriggerAction*>(source)->_version;
    __this->_iterator = -1;
}

void List1_Enumerator__Fuse_Triggers_Actions_TriggerAction__Dispose(List1_Enumerator__Fuse_Triggers_Actions_TriggerAction* __this)
{
}

::app::Fuse::Triggers::Actions::TriggerAction* List1_Enumerator__Fuse_Triggers_Actions_TriggerAction__get_Current(List1_Enumerator__Fuse_Triggers_Actions_TriggerAction* __this)
{
    return __this->_current;
}

bool List1_Enumerator__Fuse_Triggers_Actions_TriggerAction__MoveNext(List1_Enumerator__Fuse_Triggers_Actions_TriggerAction* __this)
{
    if (::uPtr< ::app::Uno::Collections::List__Fuse_Triggers_Actions_TriggerAction*>(__this->_source)->_version != __this->_version)
    {
        U_THROW(::app::Uno::InvalidOperationException__New_4(NULL, ::uGetConstString("Collection was modified")));
    }

    __this->_iterator++;

    if (__this->_iterator < ::uPtr< ::app::Uno::Collections::List__Fuse_Triggers_Actions_TriggerAction*>(__this->_source)->_used)
    {
        __this->_current = ::uPtr< ::uArray*>(::uPtr< ::app::Uno::Collections::List__Fuse_Triggers_Actions_TriggerAction*>(__this->_source)->_data)->Item< ::app::Fuse::Triggers::Actions::TriggerAction*>(__this->_iterator);
        return true;
    }

    return false;
}

List1_Enumerator__Fuse_Triggers_Actions_TriggerAction List1_Enumerator__Fuse_Triggers_Actions_TriggerAction__New_1(::uStatic* __this, ::app::Uno::Collections::List__Fuse_Triggers_Actions_TriggerAction* source)
{
    List1_Enumerator__Fuse_Triggers_Actions_TriggerAction inst = ::uDefault< List1_Enumerator__Fuse_Triggers_Actions_TriggerAction>();
    inst._ObjInit(source);
    return inst;
}

void List1_Enumerator__Fuse_Triggers_Actions_TriggerAction__Uno_Collections_IEnumerator_Reset(List1_Enumerator__Fuse_Triggers_Actions_TriggerAction* __this)
{
    __this->_iterator = -1;
    __this->_current = NULL;
    __this->_version = ::uPtr< ::app::Uno::Collections::List__Fuse_Triggers_Actions_TriggerAction*>(__this->_source)->_version;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Collections\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

List1_Enumerator__Fuse_Triggers_State__uType* List1_Enumerator__Fuse_Triggers_State__typeof()
{
    static ::uStaticStrong<List1_Enumerator__Fuse_Triggers_State__uType*> type;
    if (type != NULL) return type;

    type = (List1_Enumerator__Fuse_Triggers_State__uType*)::uAllocStructType(sizeof(List1_Enumerator__Fuse_Triggers_State__uType), "Uno.Collections.List<Fuse.Triggers.State>.Enumerator", sizeof(List1_Enumerator__Fuse_Triggers_State), 3, 2, 0);

    type->__interface_2.__fp_Reset = (void(*)(void*))List1_Enumerator__Fuse_Triggers_State__Uno_Collections_IEnumerator_Reset;
    type->__interface_0.__fp_get_Current = (::app::Fuse::Triggers::State*(*)(void*))List1_Enumerator__Fuse_Triggers_State__get_Current;
    type->__interface_1.__fp_Dispose = (void(*)(void*))List1_Enumerator__Fuse_Triggers_State__Dispose;
    type->__interface_2.__fp_MoveNext = (bool(*)(void*))List1_Enumerator__Fuse_Triggers_State__MoveNext;

    type->SetInterfaces(
        ::app::Uno::Collections::IEnumerator__Fuse_Triggers_State__typeof(), offsetof(List1_Enumerator__Fuse_Triggers_State__uType, __interface_0),
        ::app::Uno::IDisposable__typeof(), offsetof(List1_Enumerator__Fuse_Triggers_State__uType, __interface_1),
        ::app::Uno::Collections::IEnumerator__typeof(), offsetof(List1_Enumerator__Fuse_Triggers_State__uType, __interface_2));

    type->SetStrongRefs(
        "_current", offsetof(List1_Enumerator__Fuse_Triggers_State, _current),
        "_source", offsetof(List1_Enumerator__Fuse_Triggers_State, _source));

    type->SetFields(4,
        ::uNewField("_current", NULL, offsetof(List1_Enumerator__Fuse_Triggers_State, _current), ::app::Fuse::Triggers::State__typeof()),
        ::uNewField("_iterator", NULL, offsetof(List1_Enumerator__Fuse_Triggers_State, _iterator), ::app::Uno::Int__typeof()),
        ::uNewField("_source", NULL, offsetof(List1_Enumerator__Fuse_Triggers_State, _source), ::app::Uno::Collections::List__Fuse_Triggers_State__typeof()),
        ::uNewField("_version", NULL, offsetof(List1_Enumerator__Fuse_Triggers_State, _version), ::app::Uno::Int__typeof()));

    type->SetFunctions(3,
        ::uNewFunctionVoid("Dispose", List1_Enumerator__Fuse_Triggers_State__Dispose, 0, false),
        ::uNewFunction("get_Current", List1_Enumerator__Fuse_Triggers_State__get_Current, 0, false, ::app::Fuse::Triggers::State__typeof()),
        ::uNewFunction("MoveNext", List1_Enumerator__Fuse_Triggers_State__MoveNext, 0, false, ::app::Uno::Bool__typeof()));

    ::uRegisterType(type);
    return type;
}

void List1_Enumerator__Fuse_Triggers_State___ObjInit(List1_Enumerator__Fuse_Triggers_State* __this, ::app::Uno::Collections::List__Fuse_Triggers_State* source)
{
    __this->_source = source;
    __this->_version = ::uPtr< ::app::Uno::Collections::List__Fuse_Triggers_State*>(source)->_version;
    __this->_iterator = -1;
}

void List1_Enumerator__Fuse_Triggers_State__Dispose(List1_Enumerator__Fuse_Triggers_State* __this)
{
}

::app::Fuse::Triggers::State* List1_Enumerator__Fuse_Triggers_State__get_Current(List1_Enumerator__Fuse_Triggers_State* __this)
{
    return __this->_current;
}

bool List1_Enumerator__Fuse_Triggers_State__MoveNext(List1_Enumerator__Fuse_Triggers_State* __this)
{
    if (::uPtr< ::app::Uno::Collections::List__Fuse_Triggers_State*>(__this->_source)->_version != __this->_version)
    {
        U_THROW(::app::Uno::InvalidOperationException__New_4(NULL, ::uGetConstString("Collection was modified")));
    }

    __this->_iterator++;

    if (__this->_iterator < ::uPtr< ::app::Uno::Collections::List__Fuse_Triggers_State*>(__this->_source)->_used)
    {
        __this->_current = ::uPtr< ::uArray*>(::uPtr< ::app::Uno::Collections::List__Fuse_Triggers_State*>(__this->_source)->_data)->Item< ::app::Fuse::Triggers::State*>(__this->_iterator);
        return true;
    }

    return false;
}

List1_Enumerator__Fuse_Triggers_State List1_Enumerator__Fuse_Triggers_State__New_1(::uStatic* __this, ::app::Uno::Collections::List__Fuse_Triggers_State* source)
{
    List1_Enumerator__Fuse_Triggers_State inst = ::uDefault< List1_Enumerator__Fuse_Triggers_State>();
    inst._ObjInit(source);
    return inst;
}

void List1_Enumerator__Fuse_Triggers_State__Uno_Collections_IEnumerator_Reset(List1_Enumerator__Fuse_Triggers_State* __this)
{
    __this->_iterator = -1;
    __this->_current = NULL;
    __this->_version = ::uPtr< ::app::Uno::Collections::List__Fuse_Triggers_State*>(__this->_source)->_version;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Collections\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

List1_Enumerator__Fuse_UpdateListener__uType* List1_Enumerator__Fuse_UpdateListener__typeof()
{
    static ::uStaticStrong<List1_Enumerator__Fuse_UpdateListener__uType*> type;
    if (type != NULL) return type;

    type = (List1_Enumerator__Fuse_UpdateListener__uType*)::uAllocStructType(sizeof(List1_Enumerator__Fuse_UpdateListener__uType), "Uno.Collections.List<Fuse.UpdateListener>.Enumerator", sizeof(List1_Enumerator__Fuse_UpdateListener), 3, 2, 0);

    type->__interface_2.__fp_Reset = (void(*)(void*))List1_Enumerator__Fuse_UpdateListener__Uno_Collections_IEnumerator_Reset;
    type->__interface_0.__fp_get_Current = (::app::Fuse::UpdateListener*(*)(void*))List1_Enumerator__Fuse_UpdateListener__get_Current;
    type->__interface_1.__fp_Dispose = (void(*)(void*))List1_Enumerator__Fuse_UpdateListener__Dispose;
    type->__interface_2.__fp_MoveNext = (bool(*)(void*))List1_Enumerator__Fuse_UpdateListener__MoveNext;

    type->SetInterfaces(
        ::app::Uno::Collections::IEnumerator__Fuse_UpdateListener__typeof(), offsetof(List1_Enumerator__Fuse_UpdateListener__uType, __interface_0),
        ::app::Uno::IDisposable__typeof(), offsetof(List1_Enumerator__Fuse_UpdateListener__uType, __interface_1),
        ::app::Uno::Collections::IEnumerator__typeof(), offsetof(List1_Enumerator__Fuse_UpdateListener__uType, __interface_2));

    type->SetStrongRefs(
        "_current", offsetof(List1_Enumerator__Fuse_UpdateListener, _current),
        "_source", offsetof(List1_Enumerator__Fuse_UpdateListener, _source));

    type->SetFields(4,
        ::uNewField("_current", NULL, offsetof(List1_Enumerator__Fuse_UpdateListener, _current), ::app::Fuse::UpdateListener__typeof()),
        ::uNewField("_iterator", NULL, offsetof(List1_Enumerator__Fuse_UpdateListener, _iterator), ::app::Uno::Int__typeof()),
        ::uNewField("_source", NULL, offsetof(List1_Enumerator__Fuse_UpdateListener, _source), ::app::Uno::Collections::List__Fuse_UpdateListener__typeof()),
        ::uNewField("_version", NULL, offsetof(List1_Enumerator__Fuse_UpdateListener, _version), ::app::Uno::Int__typeof()));

    type->SetFunctions(3,
        ::uNewFunctionVoid("Dispose", List1_Enumerator__Fuse_UpdateListener__Dispose, 0, false),
        ::uNewFunction("get_Current", List1_Enumerator__Fuse_UpdateListener__get_Current, 0, false, ::app::Fuse::UpdateListener__typeof()),
        ::uNewFunction("MoveNext", List1_Enumerator__Fuse_UpdateListener__MoveNext, 0, false, ::app::Uno::Bool__typeof()));

    ::uRegisterType(type);
    return type;
}

void List1_Enumerator__Fuse_UpdateListener___ObjInit(List1_Enumerator__Fuse_UpdateListener* __this, ::app::Uno::Collections::List__Fuse_UpdateListener* source)
{
    __this->_source = source;
    __this->_version = ::uPtr< ::app::Uno::Collections::List__Fuse_UpdateListener*>(source)->_version;
    __this->_iterator = -1;
}

void List1_Enumerator__Fuse_UpdateListener__Dispose(List1_Enumerator__Fuse_UpdateListener* __this)
{
}

::app::Fuse::UpdateListener* List1_Enumerator__Fuse_UpdateListener__get_Current(List1_Enumerator__Fuse_UpdateListener* __this)
{
    return __this->_current;
}

bool List1_Enumerator__Fuse_UpdateListener__MoveNext(List1_Enumerator__Fuse_UpdateListener* __this)
{
    if (::uPtr< ::app::Uno::Collections::List__Fuse_UpdateListener*>(__this->_source)->_version != __this->_version)
    {
        U_THROW(::app::Uno::InvalidOperationException__New_4(NULL, ::uGetConstString("Collection was modified")));
    }

    __this->_iterator++;

    if (__this->_iterator < ::uPtr< ::app::Uno::Collections::List__Fuse_UpdateListener*>(__this->_source)->_used)
    {
        __this->_current = ::uPtr< ::uArray*>(::uPtr< ::app::Uno::Collections::List__Fuse_UpdateListener*>(__this->_source)->_data)->Item< ::app::Fuse::UpdateListener*>(__this->_iterator);
        return true;
    }

    return false;
}

List1_Enumerator__Fuse_UpdateListener List1_Enumerator__Fuse_UpdateListener__New_1(::uStatic* __this, ::app::Uno::Collections::List__Fuse_UpdateListener* source)
{
    List1_Enumerator__Fuse_UpdateListener inst = ::uDefault< List1_Enumerator__Fuse_UpdateListener>();
    inst._ObjInit(source);
    return inst;
}

void List1_Enumerator__Fuse_UpdateListener__Uno_Collections_IEnumerator_Reset(List1_Enumerator__Fuse_UpdateListener* __this)
{
    __this->_iterator = -1;
    __this->_current = NULL;
    __this->_version = ::uPtr< ::app::Uno::Collections::List__Fuse_UpdateListener*>(__this->_source)->_version;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Collections\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

List1_Enumerator__int__uType* List1_Enumerator__int__typeof()
{
    static ::uStaticStrong<List1_Enumerator__int__uType*> type;
    if (type != NULL) return type;

    type = (List1_Enumerator__int__uType*)::uAllocStructType(sizeof(List1_Enumerator__int__uType), "Uno.Collections.List<int>.Enumerator", sizeof(List1_Enumerator__int), 3, 1, 0);

    type->__interface_2.__fp_Reset = (void(*)(void*))List1_Enumerator__int__Uno_Collections_IEnumerator_Reset;
    type->__interface_0.__fp_get_Current = (int(*)(void*))List1_Enumerator__int__get_Current;
    type->__interface_1.__fp_Dispose = (void(*)(void*))List1_Enumerator__int__Dispose;
    type->__interface_2.__fp_MoveNext = (bool(*)(void*))List1_Enumerator__int__MoveNext;

    type->SetInterfaces(
        ::app::Uno::Collections::IEnumerator__int__typeof(), offsetof(List1_Enumerator__int__uType, __interface_0),
        ::app::Uno::IDisposable__typeof(), offsetof(List1_Enumerator__int__uType, __interface_1),
        ::app::Uno::Collections::IEnumerator__typeof(), offsetof(List1_Enumerator__int__uType, __interface_2));

    type->SetStrongRefs(
        "_source", offsetof(List1_Enumerator__int, _source));

    type->SetFields(4,
        ::uNewField("_current", NULL, offsetof(List1_Enumerator__int, _current), ::app::Uno::Int__typeof()),
        ::uNewField("_iterator", NULL, offsetof(List1_Enumerator__int, _iterator), ::app::Uno::Int__typeof()),
        ::uNewField("_source", NULL, offsetof(List1_Enumerator__int, _source), ::app::Uno::Collections::List__int__typeof()),
        ::uNewField("_version", NULL, offsetof(List1_Enumerator__int, _version), ::app::Uno::Int__typeof()));

    type->SetFunctions(3,
        ::uNewFunctionVoid("Dispose", List1_Enumerator__int__Dispose, 0, false),
        ::uNewFunction("get_Current", List1_Enumerator__int__get_Current, 0, false, ::app::Uno::Int__typeof()),
        ::uNewFunction("MoveNext", List1_Enumerator__int__MoveNext, 0, false, ::app::Uno::Bool__typeof()));

    ::uRegisterType(type);
    return type;
}

void List1_Enumerator__int___ObjInit(List1_Enumerator__int* __this, ::app::Uno::Collections::List__int* source)
{
    __this->_source = source;
    __this->_version = ::uPtr< ::app::Uno::Collections::List__int*>(source)->_version;
    __this->_iterator = -1;
}

void List1_Enumerator__int__Dispose(List1_Enumerator__int* __this)
{
}

int List1_Enumerator__int__get_Current(List1_Enumerator__int* __this)
{
    return __this->_current;
}

bool List1_Enumerator__int__MoveNext(List1_Enumerator__int* __this)
{
    if (::uPtr< ::app::Uno::Collections::List__int*>(__this->_source)->_version != __this->_version)
    {
        U_THROW(::app::Uno::InvalidOperationException__New_4(NULL, ::uGetConstString("Collection was modified")));
    }

    __this->_iterator++;

    if (__this->_iterator < ::uPtr< ::app::Uno::Collections::List__int*>(__this->_source)->_used)
    {
        __this->_current = ::uPtr< ::uArray*>(::uPtr< ::app::Uno::Collections::List__int*>(__this->_source)->_data)->Item< int>(__this->_iterator);
        return true;
    }

    return false;
}

List1_Enumerator__int List1_Enumerator__int__New_1(::uStatic* __this, ::app::Uno::Collections::List__int* source)
{
    List1_Enumerator__int inst = ::uDefault< List1_Enumerator__int>();
    inst._ObjInit(source);
    return inst;
}

void List1_Enumerator__int__Uno_Collections_IEnumerator_Reset(List1_Enumerator__int* __this)
{
    __this->_iterator = -1;
    __this->_current = 0;
    __this->_version = ::uPtr< ::app::Uno::Collections::List__int*>(__this->_source)->_version;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Collections\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

List1_Enumerator__int4__uType* List1_Enumerator__int4__typeof()
{
    static ::uStaticStrong<List1_Enumerator__int4__uType*> type;
    if (type != NULL) return type;

    type = (List1_Enumerator__int4__uType*)::uAllocStructType(sizeof(List1_Enumerator__int4__uType), "Uno.Collections.List<int4>.Enumerator", sizeof(List1_Enumerator__int4), 3, 1, 0);

    type->__interface_2.__fp_Reset = (void(*)(void*))List1_Enumerator__int4__Uno_Collections_IEnumerator_Reset;
    type->__interface_0.__fp_get_Current = (::app::Uno::Int4(*)(void*))List1_Enumerator__int4__get_Current;
    type->__interface_1.__fp_Dispose = (void(*)(void*))List1_Enumerator__int4__Dispose;
    type->__interface_2.__fp_MoveNext = (bool(*)(void*))List1_Enumerator__int4__MoveNext;

    type->SetInterfaces(
        ::app::Uno::Collections::IEnumerator__int4__typeof(), offsetof(List1_Enumerator__int4__uType, __interface_0),
        ::app::Uno::IDisposable__typeof(), offsetof(List1_Enumerator__int4__uType, __interface_1),
        ::app::Uno::Collections::IEnumerator__typeof(), offsetof(List1_Enumerator__int4__uType, __interface_2));

    type->SetStrongRefs(
        "_source", offsetof(List1_Enumerator__int4, _source));

    type->SetFields(4,
        ::uNewField("_current", NULL, offsetof(List1_Enumerator__int4, _current), ::app::Uno::Int4__typeof()),
        ::uNewField("_iterator", NULL, offsetof(List1_Enumerator__int4, _iterator), ::app::Uno::Int__typeof()),
        ::uNewField("_source", NULL, offsetof(List1_Enumerator__int4, _source), ::app::Uno::Collections::List__int4__typeof()),
        ::uNewField("_version", NULL, offsetof(List1_Enumerator__int4, _version), ::app::Uno::Int__typeof()));

    type->SetFunctions(3,
        ::uNewFunctionVoid("Dispose", List1_Enumerator__int4__Dispose, 0, false),
        ::uNewFunction("get_Current", List1_Enumerator__int4__get_Current, 0, false, ::app::Uno::Int4__typeof()),
        ::uNewFunction("MoveNext", List1_Enumerator__int4__MoveNext, 0, false, ::app::Uno::Bool__typeof()));

    ::uRegisterType(type);
    return type;
}

void List1_Enumerator__int4___ObjInit(List1_Enumerator__int4* __this, ::app::Uno::Collections::List__int4* source)
{
    __this->_source = source;
    __this->_version = ::uPtr< ::app::Uno::Collections::List__int4*>(source)->_version;
    __this->_iterator = -1;
}

void List1_Enumerator__int4__Dispose(List1_Enumerator__int4* __this)
{
}

::app::Uno::Int4 List1_Enumerator__int4__get_Current(List1_Enumerator__int4* __this)
{
    return __this->_current;
}

bool List1_Enumerator__int4__MoveNext(List1_Enumerator__int4* __this)
{
    if (::uPtr< ::app::Uno::Collections::List__int4*>(__this->_source)->_version != __this->_version)
    {
        U_THROW(::app::Uno::InvalidOperationException__New_4(NULL, ::uGetConstString("Collection was modified")));
    }

    __this->_iterator++;

    if (__this->_iterator < ::uPtr< ::app::Uno::Collections::List__int4*>(__this->_source)->_used)
    {
        __this->_current = ::uPtr< ::uArray*>(::uPtr< ::app::Uno::Collections::List__int4*>(__this->_source)->_data)->Item< ::app::Uno::Int4>(__this->_iterator);
        return true;
    }

    return false;
}

List1_Enumerator__int4 List1_Enumerator__int4__New_1(::uStatic* __this, ::app::Uno::Collections::List__int4* source)
{
    List1_Enumerator__int4 inst = ::uDefault< List1_Enumerator__int4>();
    inst._ObjInit(source);
    return inst;
}

void List1_Enumerator__int4__Uno_Collections_IEnumerator_Reset(List1_Enumerator__int4* __this)
{
    __this->_iterator = -1;
    __this->_current = ::uDefault< ::app::Uno::Int4>();
    __this->_version = ::uPtr< ::app::Uno::Collections::List__int4*>(__this->_source)->_version;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Collections\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

List1_Enumerator__object__uType* List1_Enumerator__object__typeof()
{
    static ::uStaticStrong<List1_Enumerator__object__uType*> type;
    if (type != NULL) return type;

    type = (List1_Enumerator__object__uType*)::uAllocStructType(sizeof(List1_Enumerator__object__uType), "Uno.Collections.List<object>.Enumerator", sizeof(List1_Enumerator__object), 3, 2, 0);

    type->__interface_2.__fp_Reset = (void(*)(void*))List1_Enumerator__object__Uno_Collections_IEnumerator_Reset;
    type->__interface_0.__fp_get_Current = (::uObject*(*)(void*))List1_Enumerator__object__get_Current;
    type->__interface_1.__fp_Dispose = (void(*)(void*))List1_Enumerator__object__Dispose;
    type->__interface_2.__fp_MoveNext = (bool(*)(void*))List1_Enumerator__object__MoveNext;

    type->SetInterfaces(
        ::app::Uno::Collections::IEnumerator__object__typeof(), offsetof(List1_Enumerator__object__uType, __interface_0),
        ::app::Uno::IDisposable__typeof(), offsetof(List1_Enumerator__object__uType, __interface_1),
        ::app::Uno::Collections::IEnumerator__typeof(), offsetof(List1_Enumerator__object__uType, __interface_2));

    type->SetStrongRefs(
        "_current", offsetof(List1_Enumerator__object, _current),
        "_source", offsetof(List1_Enumerator__object, _source));

    type->SetFields(4,
        ::uNewField("_current", NULL, offsetof(List1_Enumerator__object, _current), ::uObject__typeof()),
        ::uNewField("_iterator", NULL, offsetof(List1_Enumerator__object, _iterator), ::app::Uno::Int__typeof()),
        ::uNewField("_source", NULL, offsetof(List1_Enumerator__object, _source), ::app::Uno::Collections::List__object__typeof()),
        ::uNewField("_version", NULL, offsetof(List1_Enumerator__object, _version), ::app::Uno::Int__typeof()));

    type->SetFunctions(3,
        ::uNewFunctionVoid("Dispose", List1_Enumerator__object__Dispose, 0, false),
        ::uNewFunction("get_Current", List1_Enumerator__object__get_Current, 0, false, ::uObject__typeof()),
        ::uNewFunction("MoveNext", List1_Enumerator__object__MoveNext, 0, false, ::app::Uno::Bool__typeof()));

    ::uRegisterType(type);
    return type;
}

void List1_Enumerator__object___ObjInit(List1_Enumerator__object* __this, ::app::Uno::Collections::List__object* source)
{
    __this->_source = source;
    __this->_version = ::uPtr< ::app::Uno::Collections::List__object*>(source)->_version;
    __this->_iterator = -1;
}

void List1_Enumerator__object__Dispose(List1_Enumerator__object* __this)
{
}

::uObject* List1_Enumerator__object__get_Current(List1_Enumerator__object* __this)
{
    return __this->_current;
}

bool List1_Enumerator__object__MoveNext(List1_Enumerator__object* __this)
{
    if (::uPtr< ::app::Uno::Collections::List__object*>(__this->_source)->_version != __this->_version)
    {
        U_THROW(::app::Uno::InvalidOperationException__New_4(NULL, ::uGetConstString("Collection was modified")));
    }

    __this->_iterator++;

    if (__this->_iterator < ::uPtr< ::app::Uno::Collections::List__object*>(__this->_source)->_used)
    {
        __this->_current = ::uPtr< ::uArray*>(::uPtr< ::app::Uno::Collections::List__object*>(__this->_source)->_data)->Item< ::uObject*>(__this->_iterator);
        return true;
    }

    return false;
}

List1_Enumerator__object List1_Enumerator__object__New_1(::uStatic* __this, ::app::Uno::Collections::List__object* source)
{
    List1_Enumerator__object inst = ::uDefault< List1_Enumerator__object>();
    inst._ObjInit(source);
    return inst;
}

void List1_Enumerator__object__Uno_Collections_IEnumerator_Reset(List1_Enumerator__object* __this)
{
    __this->_iterator = -1;
    __this->_current = NULL;
    __this->_version = ::uPtr< ::app::Uno::Collections::List__object*>(__this->_source)->_version;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Collections\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

List1_Enumerator__Outracks_Simulator_Bytecode_TypeName__uType* List1_Enumerator__Outracks_Simulator_Bytecode_TypeName__typeof()
{
    static ::uStaticStrong<List1_Enumerator__Outracks_Simulator_Bytecode_TypeName__uType*> type;
    if (type != NULL) return type;

    type = (List1_Enumerator__Outracks_Simulator_Bytecode_TypeName__uType*)::uAllocStructType(sizeof(List1_Enumerator__Outracks_Simulator_Bytecode_TypeName__uType), "Uno.Collections.List<Outracks.Simulator.Bytecode.TypeName>.Enumerator", sizeof(List1_Enumerator__Outracks_Simulator_Bytecode_TypeName), 3, 2, 0);

    type->__interface_2.__fp_Reset = (void(*)(void*))List1_Enumerator__Outracks_Simulator_Bytecode_TypeName__Uno_Collections_IEnumerator_Reset;
    type->__interface_0.__fp_get_Current = (::app::Outracks::Simulator::Bytecode::TypeName*(*)(void*))List1_Enumerator__Outracks_Simulator_Bytecode_TypeName__get_Current;
    type->__interface_1.__fp_Dispose = (void(*)(void*))List1_Enumerator__Outracks_Simulator_Bytecode_TypeName__Dispose;
    type->__interface_2.__fp_MoveNext = (bool(*)(void*))List1_Enumerator__Outracks_Simulator_Bytecode_TypeName__MoveNext;

    type->SetInterfaces(
        ::app::Uno::Collections::IEnumerator__Outracks_Simulator_Bytecode_TypeName__typeof(), offsetof(List1_Enumerator__Outracks_Simulator_Bytecode_TypeName__uType, __interface_0),
        ::app::Uno::IDisposable__typeof(), offsetof(List1_Enumerator__Outracks_Simulator_Bytecode_TypeName__uType, __interface_1),
        ::app::Uno::Collections::IEnumerator__typeof(), offsetof(List1_Enumerator__Outracks_Simulator_Bytecode_TypeName__uType, __interface_2));

    type->SetStrongRefs(
        "_current", offsetof(List1_Enumerator__Outracks_Simulator_Bytecode_TypeName, _current),
        "_source", offsetof(List1_Enumerator__Outracks_Simulator_Bytecode_TypeName, _source));

    type->SetFields(4,
        ::uNewField("_current", NULL, offsetof(List1_Enumerator__Outracks_Simulator_Bytecode_TypeName, _current), ::app::Outracks::Simulator::Bytecode::TypeName__typeof()),
        ::uNewField("_iterator", NULL, offsetof(List1_Enumerator__Outracks_Simulator_Bytecode_TypeName, _iterator), ::app::Uno::Int__typeof()),
        ::uNewField("_source", NULL, offsetof(List1_Enumerator__Outracks_Simulator_Bytecode_TypeName, _source), ::app::Uno::Collections::List__Outracks_Simulator_Bytecode_TypeName__typeof()),
        ::uNewField("_version", NULL, offsetof(List1_Enumerator__Outracks_Simulator_Bytecode_TypeName, _version), ::app::Uno::Int__typeof()));

    type->SetFunctions(3,
        ::uNewFunctionVoid("Dispose", List1_Enumerator__Outracks_Simulator_Bytecode_TypeName__Dispose, 0, false),
        ::uNewFunction("get_Current", List1_Enumerator__Outracks_Simulator_Bytecode_TypeName__get_Current, 0, false, ::app::Outracks::Simulator::Bytecode::TypeName__typeof()),
        ::uNewFunction("MoveNext", List1_Enumerator__Outracks_Simulator_Bytecode_TypeName__MoveNext, 0, false, ::app::Uno::Bool__typeof()));

    ::uRegisterType(type);
    return type;
}

void List1_Enumerator__Outracks_Simulator_Bytecode_TypeName___ObjInit(List1_Enumerator__Outracks_Simulator_Bytecode_TypeName* __this, ::app::Uno::Collections::List__Outracks_Simulator_Bytecode_TypeName* source)
{
    __this->_source = source;
    __this->_version = ::uPtr< ::app::Uno::Collections::List__Outracks_Simulator_Bytecode_TypeName*>(source)->_version;
    __this->_iterator = -1;
}

void List1_Enumerator__Outracks_Simulator_Bytecode_TypeName__Dispose(List1_Enumerator__Outracks_Simulator_Bytecode_TypeName* __this)
{
}

::app::Outracks::Simulator::Bytecode::TypeName* List1_Enumerator__Outracks_Simulator_Bytecode_TypeName__get_Current(List1_Enumerator__Outracks_Simulator_Bytecode_TypeName* __this)
{
    return __this->_current;
}

bool List1_Enumerator__Outracks_Simulator_Bytecode_TypeName__MoveNext(List1_Enumerator__Outracks_Simulator_Bytecode_TypeName* __this)
{
    if (::uPtr< ::app::Uno::Collections::List__Outracks_Simulator_Bytecode_TypeName*>(__this->_source)->_version != __this->_version)
    {
        U_THROW(::app::Uno::InvalidOperationException__New_4(NULL, ::uGetConstString("Collection was modified")));
    }

    __this->_iterator++;

    if (__this->_iterator < ::uPtr< ::app::Uno::Collections::List__Outracks_Simulator_Bytecode_TypeName*>(__this->_source)->_used)
    {
        __this->_current = ::uPtr< ::uArray*>(::uPtr< ::app::Uno::Collections::List__Outracks_Simulator_Bytecode_TypeName*>(__this->_source)->_data)->Item< ::app::Outracks::Simulator::Bytecode::TypeName*>(__this->_iterator);
        return true;
    }

    return false;
}

List1_Enumerator__Outracks_Simulator_Bytecode_TypeName List1_Enumerator__Outracks_Simulator_Bytecode_TypeName__New_1(::uStatic* __this, ::app::Uno::Collections::List__Outracks_Simulator_Bytecode_TypeName* source)
{
    List1_Enumerator__Outracks_Simulator_Bytecode_TypeName inst = ::uDefault< List1_Enumerator__Outracks_Simulator_Bytecode_TypeName>();
    inst._ObjInit(source);
    return inst;
}

void List1_Enumerator__Outracks_Simulator_Bytecode_TypeName__Uno_Collections_IEnumerator_Reset(List1_Enumerator__Outracks_Simulator_Bytecode_TypeName* __this)
{
    __this->_iterator = -1;
    __this->_current = NULL;
    __this->_version = ::uPtr< ::app::Uno::Collections::List__Outracks_Simulator_Bytecode_TypeName*>(__this->_source)->_version;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Collections\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

List1_Enumerator__Outracks_Simulator_Task_Outracks_Simulator_ISimulatorClient___uType* List1_Enumerator__Outracks_Simulator_Task_Outracks_Simulator_ISimulatorClient___typeof()
{
    static ::uStaticStrong<List1_Enumerator__Outracks_Simulator_Task_Outracks_Simulator_ISimulatorClient___uType*> type;
    if (type != NULL) return type;

    type = (List1_Enumerator__Outracks_Simulator_Task_Outracks_Simulator_ISimulatorClient___uType*)::uAllocStructType(sizeof(List1_Enumerator__Outracks_Simulator_Task_Outracks_Simulator_ISimulatorClient___uType), "Uno.Collections.List<Outracks.Simulator.Task<Outracks.Simulator.ISimulatorClient>>.Enumerator", sizeof(List1_Enumerator__Outracks_Simulator_Task_Outracks_Simulator_ISimulatorClient_), 3, 2, 0);

    type->__interface_2.__fp_Reset = (void(*)(void*))List1_Enumerator__Outracks_Simulator_Task_Outracks_Simulator_ISimulatorClient___Uno_Collections_IEnumerator_Reset;
    type->__interface_0.__fp_get_Current = (::app::Outracks::Simulator::Task__Outracks_Simulator_ISimulatorClient*(*)(void*))List1_Enumerator__Outracks_Simulator_Task_Outracks_Simulator_ISimulatorClient___get_Current;
    type->__interface_1.__fp_Dispose = (void(*)(void*))List1_Enumerator__Outracks_Simulator_Task_Outracks_Simulator_ISimulatorClient___Dispose;
    type->__interface_2.__fp_MoveNext = (bool(*)(void*))List1_Enumerator__Outracks_Simulator_Task_Outracks_Simulator_ISimulatorClient___MoveNext;

    type->SetInterfaces(
        ::app::Uno::Collections::IEnumerator__Outracks_Simulator_Task_Outracks_Simulator_ISimulatorClient___typeof(), offsetof(List1_Enumerator__Outracks_Simulator_Task_Outracks_Simulator_ISimulatorClient___uType, __interface_0),
        ::app::Uno::IDisposable__typeof(), offsetof(List1_Enumerator__Outracks_Simulator_Task_Outracks_Simulator_ISimulatorClient___uType, __interface_1),
        ::app::Uno::Collections::IEnumerator__typeof(), offsetof(List1_Enumerator__Outracks_Simulator_Task_Outracks_Simulator_ISimulatorClient___uType, __interface_2));

    type->SetStrongRefs(
        "_current", offsetof(List1_Enumerator__Outracks_Simulator_Task_Outracks_Simulator_ISimulatorClient_, _current),
        "_source", offsetof(List1_Enumerator__Outracks_Simulator_Task_Outracks_Simulator_ISimulatorClient_, _source));

    type->SetFields(4,
        ::uNewField("_current", NULL, offsetof(List1_Enumerator__Outracks_Simulator_Task_Outracks_Simulator_ISimulatorClient_, _current), ::app::Outracks::Simulator::Task__Outracks_Simulator_ISimulatorClient__typeof()),
        ::uNewField("_iterator", NULL, offsetof(List1_Enumerator__Outracks_Simulator_Task_Outracks_Simulator_ISimulatorClient_, _iterator), ::app::Uno::Int__typeof()),
        ::uNewField("_source", NULL, offsetof(List1_Enumerator__Outracks_Simulator_Task_Outracks_Simulator_ISimulatorClient_, _source), ::app::Uno::Collections::List__Outracks_Simulator_Task_Outracks_Simulator_ISimulatorClient___typeof()),
        ::uNewField("_version", NULL, offsetof(List1_Enumerator__Outracks_Simulator_Task_Outracks_Simulator_ISimulatorClient_, _version), ::app::Uno::Int__typeof()));

    type->SetFunctions(3,
        ::uNewFunctionVoid("Dispose", List1_Enumerator__Outracks_Simulator_Task_Outracks_Simulator_ISimulatorClient___Dispose, 0, false),
        ::uNewFunction("get_Current", List1_Enumerator__Outracks_Simulator_Task_Outracks_Simulator_ISimulatorClient___get_Current, 0, false, ::app::Outracks::Simulator::Task__Outracks_Simulator_ISimulatorClient__typeof()),
        ::uNewFunction("MoveNext", List1_Enumerator__Outracks_Simulator_Task_Outracks_Simulator_ISimulatorClient___MoveNext, 0, false, ::app::Uno::Bool__typeof()));

    ::uRegisterType(type);
    return type;
}

void List1_Enumerator__Outracks_Simulator_Task_Outracks_Simulator_ISimulatorClient____ObjInit(List1_Enumerator__Outracks_Simulator_Task_Outracks_Simulator_ISimulatorClient_* __this, ::app::Uno::Collections::List__Outracks_Simulator_Task_Outracks_Simulator_ISimulatorClient_* source)
{
    __this->_source = source;
    __this->_version = ::uPtr< ::app::Uno::Collections::List__Outracks_Simulator_Task_Outracks_Simulator_ISimulatorClient_*>(source)->_version;
    __this->_iterator = -1;
}

void List1_Enumerator__Outracks_Simulator_Task_Outracks_Simulator_ISimulatorClient___Dispose(List1_Enumerator__Outracks_Simulator_Task_Outracks_Simulator_ISimulatorClient_* __this)
{
}

::app::Outracks::Simulator::Task__Outracks_Simulator_ISimulatorClient* List1_Enumerator__Outracks_Simulator_Task_Outracks_Simulator_ISimulatorClient___get_Current(List1_Enumerator__Outracks_Simulator_Task_Outracks_Simulator_ISimulatorClient_* __this)
{
    return __this->_current;
}

bool List1_Enumerator__Outracks_Simulator_Task_Outracks_Simulator_ISimulatorClient___MoveNext(List1_Enumerator__Outracks_Simulator_Task_Outracks_Simulator_ISimulatorClient_* __this)
{
    if (::uPtr< ::app::Uno::Collections::List__Outracks_Simulator_Task_Outracks_Simulator_ISimulatorClient_*>(__this->_source)->_version != __this->_version)
    {
        U_THROW(::app::Uno::InvalidOperationException__New_4(NULL, ::uGetConstString("Collection was modified")));
    }

    __this->_iterator++;

    if (__this->_iterator < ::uPtr< ::app::Uno::Collections::List__Outracks_Simulator_Task_Outracks_Simulator_ISimulatorClient_*>(__this->_source)->_used)
    {
        __this->_current = ::uPtr< ::uArray*>(::uPtr< ::app::Uno::Collections::List__Outracks_Simulator_Task_Outracks_Simulator_ISimulatorClient_*>(__this->_source)->_data)->Item< ::app::Outracks::Simulator::Task__Outracks_Simulator_ISimulatorClient*>(__this->_iterator);
        return true;
    }

    return false;
}

List1_Enumerator__Outracks_Simulator_Task_Outracks_Simulator_ISimulatorClient_ List1_Enumerator__Outracks_Simulator_Task_Outracks_Simulator_ISimulatorClient___New_1(::uStatic* __this, ::app::Uno::Collections::List__Outracks_Simulator_Task_Outracks_Simulator_ISimulatorClient_* source)
{
    List1_Enumerator__Outracks_Simulator_Task_Outracks_Simulator_ISimulatorClient_ inst = ::uDefault< List1_Enumerator__Outracks_Simulator_Task_Outracks_Simulator_ISimulatorClient_>();
    inst._ObjInit(source);
    return inst;
}

void List1_Enumerator__Outracks_Simulator_Task_Outracks_Simulator_ISimulatorClient___Uno_Collections_IEnumerator_Reset(List1_Enumerator__Outracks_Simulator_Task_Outracks_Simulator_ISimulatorClient_* __this)
{
    __this->_iterator = -1;
    __this->_current = NULL;
    __this->_version = ::uPtr< ::app::Uno::Collections::List__Outracks_Simulator_Task_Outracks_Simulator_ISimulatorClient_*>(__this->_source)->_version;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Collections\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

List1_Enumerator__Outracks_Simulator_Task_Uno_Net_IPEndPoint_____uType* List1_Enumerator__Outracks_Simulator_Task_Uno_Net_IPEndPoint_____typeof()
{
    static ::uStaticStrong<List1_Enumerator__Outracks_Simulator_Task_Uno_Net_IPEndPoint_____uType*> type;
    if (type != NULL) return type;

    type = (List1_Enumerator__Outracks_Simulator_Task_Uno_Net_IPEndPoint_____uType*)::uAllocStructType(sizeof(List1_Enumerator__Outracks_Simulator_Task_Uno_Net_IPEndPoint_____uType), "Uno.Collections.List<Outracks.Simulator.Task<Uno.Net.IPEndPoint[]>>.Enumerator", sizeof(List1_Enumerator__Outracks_Simulator_Task_Uno_Net_IPEndPoint___), 3, 2, 0);

    type->__interface_2.__fp_Reset = (void(*)(void*))List1_Enumerator__Outracks_Simulator_Task_Uno_Net_IPEndPoint_____Uno_Collections_IEnumerator_Reset;
    type->__interface_0.__fp_get_Current = (::app::Outracks::Simulator::Task__Uno_Net_IPEndPoint__*(*)(void*))List1_Enumerator__Outracks_Simulator_Task_Uno_Net_IPEndPoint_____get_Current;
    type->__interface_1.__fp_Dispose = (void(*)(void*))List1_Enumerator__Outracks_Simulator_Task_Uno_Net_IPEndPoint_____Dispose;
    type->__interface_2.__fp_MoveNext = (bool(*)(void*))List1_Enumerator__Outracks_Simulator_Task_Uno_Net_IPEndPoint_____MoveNext;

    type->SetInterfaces(
        ::app::Uno::Collections::IEnumerator__Outracks_Simulator_Task_Uno_Net_IPEndPoint_____typeof(), offsetof(List1_Enumerator__Outracks_Simulator_Task_Uno_Net_IPEndPoint_____uType, __interface_0),
        ::app::Uno::IDisposable__typeof(), offsetof(List1_Enumerator__Outracks_Simulator_Task_Uno_Net_IPEndPoint_____uType, __interface_1),
        ::app::Uno::Collections::IEnumerator__typeof(), offsetof(List1_Enumerator__Outracks_Simulator_Task_Uno_Net_IPEndPoint_____uType, __interface_2));

    type->SetStrongRefs(
        "_current", offsetof(List1_Enumerator__Outracks_Simulator_Task_Uno_Net_IPEndPoint___, _current),
        "_source", offsetof(List1_Enumerator__Outracks_Simulator_Task_Uno_Net_IPEndPoint___, _source));

    type->SetFields(4,
        ::uNewField("_current", NULL, offsetof(List1_Enumerator__Outracks_Simulator_Task_Uno_Net_IPEndPoint___, _current), ::app::Outracks::Simulator::Task__Uno_Net_IPEndPoint____typeof()),
        ::uNewField("_iterator", NULL, offsetof(List1_Enumerator__Outracks_Simulator_Task_Uno_Net_IPEndPoint___, _iterator), ::app::Uno::Int__typeof()),
        ::uNewField("_source", NULL, offsetof(List1_Enumerator__Outracks_Simulator_Task_Uno_Net_IPEndPoint___, _source), ::app::Uno::Collections::List__Outracks_Simulator_Task_Uno_Net_IPEndPoint_____typeof()),
        ::uNewField("_version", NULL, offsetof(List1_Enumerator__Outracks_Simulator_Task_Uno_Net_IPEndPoint___, _version), ::app::Uno::Int__typeof()));

    type->SetFunctions(3,
        ::uNewFunctionVoid("Dispose", List1_Enumerator__Outracks_Simulator_Task_Uno_Net_IPEndPoint_____Dispose, 0, false),
        ::uNewFunction("get_Current", List1_Enumerator__Outracks_Simulator_Task_Uno_Net_IPEndPoint_____get_Current, 0, false, ::app::Outracks::Simulator::Task__Uno_Net_IPEndPoint____typeof()),
        ::uNewFunction("MoveNext", List1_Enumerator__Outracks_Simulator_Task_Uno_Net_IPEndPoint_____MoveNext, 0, false, ::app::Uno::Bool__typeof()));

    ::uRegisterType(type);
    return type;
}

void List1_Enumerator__Outracks_Simulator_Task_Uno_Net_IPEndPoint______ObjInit(List1_Enumerator__Outracks_Simulator_Task_Uno_Net_IPEndPoint___* __this, ::app::Uno::Collections::List__Outracks_Simulator_Task_Uno_Net_IPEndPoint___* source)
{
    __this->_source = source;
    __this->_version = ::uPtr< ::app::Uno::Collections::List__Outracks_Simulator_Task_Uno_Net_IPEndPoint___*>(source)->_version;
    __this->_iterator = -1;
}

void List1_Enumerator__Outracks_Simulator_Task_Uno_Net_IPEndPoint_____Dispose(List1_Enumerator__Outracks_Simulator_Task_Uno_Net_IPEndPoint___* __this)
{
}

::app::Outracks::Simulator::Task__Uno_Net_IPEndPoint__* List1_Enumerator__Outracks_Simulator_Task_Uno_Net_IPEndPoint_____get_Current(List1_Enumerator__Outracks_Simulator_Task_Uno_Net_IPEndPoint___* __this)
{
    return __this->_current;
}

bool List1_Enumerator__Outracks_Simulator_Task_Uno_Net_IPEndPoint_____MoveNext(List1_Enumerator__Outracks_Simulator_Task_Uno_Net_IPEndPoint___* __this)
{
    if (::uPtr< ::app::Uno::Collections::List__Outracks_Simulator_Task_Uno_Net_IPEndPoint___*>(__this->_source)->_version != __this->_version)
    {
        U_THROW(::app::Uno::InvalidOperationException__New_4(NULL, ::uGetConstString("Collection was modified")));
    }

    __this->_iterator++;

    if (__this->_iterator < ::uPtr< ::app::Uno::Collections::List__Outracks_Simulator_Task_Uno_Net_IPEndPoint___*>(__this->_source)->_used)
    {
        __this->_current = ::uPtr< ::uArray*>(::uPtr< ::app::Uno::Collections::List__Outracks_Simulator_Task_Uno_Net_IPEndPoint___*>(__this->_source)->_data)->Item< ::app::Outracks::Simulator::Task__Uno_Net_IPEndPoint__*>(__this->_iterator);
        return true;
    }

    return false;
}

List1_Enumerator__Outracks_Simulator_Task_Uno_Net_IPEndPoint___ List1_Enumerator__Outracks_Simulator_Task_Uno_Net_IPEndPoint_____New_1(::uStatic* __this, ::app::Uno::Collections::List__Outracks_Simulator_Task_Uno_Net_IPEndPoint___* source)
{
    List1_Enumerator__Outracks_Simulator_Task_Uno_Net_IPEndPoint___ inst = ::uDefault< List1_Enumerator__Outracks_Simulator_Task_Uno_Net_IPEndPoint___>();
    inst._ObjInit(source);
    return inst;
}

void List1_Enumerator__Outracks_Simulator_Task_Uno_Net_IPEndPoint_____Uno_Collections_IEnumerator_Reset(List1_Enumerator__Outracks_Simulator_Task_Uno_Net_IPEndPoint___* __this)
{
    __this->_iterator = -1;
    __this->_current = NULL;
    __this->_version = ::uPtr< ::app::Uno::Collections::List__Outracks_Simulator_Task_Uno_Net_IPEndPoint___*>(__this->_source)->_version;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Collections\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

List1_Enumerator__string__uType* List1_Enumerator__string__typeof()
{
    static ::uStaticStrong<List1_Enumerator__string__uType*> type;
    if (type != NULL) return type;

    type = (List1_Enumerator__string__uType*)::uAllocStructType(sizeof(List1_Enumerator__string__uType), "Uno.Collections.List<string>.Enumerator", sizeof(List1_Enumerator__string), 3, 2, 0);

    type->__interface_2.__fp_Reset = (void(*)(void*))List1_Enumerator__string__Uno_Collections_IEnumerator_Reset;
    type->__interface_0.__fp_get_Current = (::uString*(*)(void*))List1_Enumerator__string__get_Current;
    type->__interface_1.__fp_Dispose = (void(*)(void*))List1_Enumerator__string__Dispose;
    type->__interface_2.__fp_MoveNext = (bool(*)(void*))List1_Enumerator__string__MoveNext;

    type->SetInterfaces(
        ::app::Uno::Collections::IEnumerator__string__typeof(), offsetof(List1_Enumerator__string__uType, __interface_0),
        ::app::Uno::IDisposable__typeof(), offsetof(List1_Enumerator__string__uType, __interface_1),
        ::app::Uno::Collections::IEnumerator__typeof(), offsetof(List1_Enumerator__string__uType, __interface_2));

    type->SetStrongRefs(
        "_current", offsetof(List1_Enumerator__string, _current),
        "_source", offsetof(List1_Enumerator__string, _source));

    type->SetFields(4,
        ::uNewField("_current", NULL, offsetof(List1_Enumerator__string, _current), ::app::Uno::String__typeof()),
        ::uNewField("_iterator", NULL, offsetof(List1_Enumerator__string, _iterator), ::app::Uno::Int__typeof()),
        ::uNewField("_source", NULL, offsetof(List1_Enumerator__string, _source), ::app::Uno::Collections::List__string__typeof()),
        ::uNewField("_version", NULL, offsetof(List1_Enumerator__string, _version), ::app::Uno::Int__typeof()));

    type->SetFunctions(3,
        ::uNewFunctionVoid("Dispose", List1_Enumerator__string__Dispose, 0, false),
        ::uNewFunction("get_Current", List1_Enumerator__string__get_Current, 0, false, ::app::Uno::String__typeof()),
        ::uNewFunction("MoveNext", List1_Enumerator__string__MoveNext, 0, false, ::app::Uno::Bool__typeof()));

    ::uRegisterType(type);
    return type;
}

void List1_Enumerator__string___ObjInit(List1_Enumerator__string* __this, ::app::Uno::Collections::List__string* source)
{
    __this->_source = source;
    __this->_version = ::uPtr< ::app::Uno::Collections::List__string*>(source)->_version;
    __this->_iterator = -1;
}

void List1_Enumerator__string__Dispose(List1_Enumerator__string* __this)
{
}

::uString* List1_Enumerator__string__get_Current(List1_Enumerator__string* __this)
{
    return __this->_current;
}

bool List1_Enumerator__string__MoveNext(List1_Enumerator__string* __this)
{
    if (::uPtr< ::app::Uno::Collections::List__string*>(__this->_source)->_version != __this->_version)
    {
        U_THROW(::app::Uno::InvalidOperationException__New_4(NULL, ::uGetConstString("Collection was modified")));
    }

    __this->_iterator++;

    if (__this->_iterator < ::uPtr< ::app::Uno::Collections::List__string*>(__this->_source)->_used)
    {
        __this->_current = ::uPtr< ::uArray*>(::uPtr< ::app::Uno::Collections::List__string*>(__this->_source)->_data)->Item< ::uString*>(__this->_iterator);
        return true;
    }

    return false;
}

List1_Enumerator__string List1_Enumerator__string__New_1(::uStatic* __this, ::app::Uno::Collections::List__string* source)
{
    List1_Enumerator__string inst = ::uDefault< List1_Enumerator__string>();
    inst._ObjInit(source);
    return inst;
}

void List1_Enumerator__string__Uno_Collections_IEnumerator_Reset(List1_Enumerator__string* __this)
{
    __this->_iterator = -1;
    __this->_current = NULL;
    __this->_version = ::uPtr< ::app::Uno::Collections::List__string*>(__this->_source)->_version;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Collections\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

List1_Enumerator__Uno_Action__uType* List1_Enumerator__Uno_Action__typeof()
{
    static ::uStaticStrong<List1_Enumerator__Uno_Action__uType*> type;
    if (type != NULL) return type;

    type = (List1_Enumerator__Uno_Action__uType*)::uAllocStructType(sizeof(List1_Enumerator__Uno_Action__uType), "Uno.Collections.List<Uno.Action>.Enumerator", sizeof(List1_Enumerator__Uno_Action), 3, 2, 0);

    type->__interface_2.__fp_Reset = (void(*)(void*))List1_Enumerator__Uno_Action__Uno_Collections_IEnumerator_Reset;
    type->__interface_0.__fp_get_Current = (::uDelegate*(*)(void*))List1_Enumerator__Uno_Action__get_Current;
    type->__interface_1.__fp_Dispose = (void(*)(void*))List1_Enumerator__Uno_Action__Dispose;
    type->__interface_2.__fp_MoveNext = (bool(*)(void*))List1_Enumerator__Uno_Action__MoveNext;

    type->SetInterfaces(
        ::app::Uno::Collections::IEnumerator__Uno_Action__typeof(), offsetof(List1_Enumerator__Uno_Action__uType, __interface_0),
        ::app::Uno::IDisposable__typeof(), offsetof(List1_Enumerator__Uno_Action__uType, __interface_1),
        ::app::Uno::Collections::IEnumerator__typeof(), offsetof(List1_Enumerator__Uno_Action__uType, __interface_2));

    type->SetStrongRefs(
        "_current", offsetof(List1_Enumerator__Uno_Action, _current),
        "_source", offsetof(List1_Enumerator__Uno_Action, _source));

    type->SetFields(4,
        ::uNewField("_current", NULL, offsetof(List1_Enumerator__Uno_Action, _current), ::app::Uno::Action__typeof()),
        ::uNewField("_iterator", NULL, offsetof(List1_Enumerator__Uno_Action, _iterator), ::app::Uno::Int__typeof()),
        ::uNewField("_source", NULL, offsetof(List1_Enumerator__Uno_Action, _source), ::app::Uno::Collections::List__Uno_Action__typeof()),
        ::uNewField("_version", NULL, offsetof(List1_Enumerator__Uno_Action, _version), ::app::Uno::Int__typeof()));

    type->SetFunctions(3,
        ::uNewFunctionVoid("Dispose", List1_Enumerator__Uno_Action__Dispose, 0, false),
        ::uNewFunction("get_Current", List1_Enumerator__Uno_Action__get_Current, 0, false, ::app::Uno::Action__typeof()),
        ::uNewFunction("MoveNext", List1_Enumerator__Uno_Action__MoveNext, 0, false, ::app::Uno::Bool__typeof()));

    ::uRegisterType(type);
    return type;
}

void List1_Enumerator__Uno_Action___ObjInit(List1_Enumerator__Uno_Action* __this, ::app::Uno::Collections::List__Uno_Action* source)
{
    __this->_source = source;
    __this->_version = ::uPtr< ::app::Uno::Collections::List__Uno_Action*>(source)->_version;
    __this->_iterator = -1;
}

void List1_Enumerator__Uno_Action__Dispose(List1_Enumerator__Uno_Action* __this)
{
}

::uDelegate* List1_Enumerator__Uno_Action__get_Current(List1_Enumerator__Uno_Action* __this)
{
    return __this->_current;
}

bool List1_Enumerator__Uno_Action__MoveNext(List1_Enumerator__Uno_Action* __this)
{
    if (::uPtr< ::app::Uno::Collections::List__Uno_Action*>(__this->_source)->_version != __this->_version)
    {
        U_THROW(::app::Uno::InvalidOperationException__New_4(NULL, ::uGetConstString("Collection was modified")));
    }

    __this->_iterator++;

    if (__this->_iterator < ::uPtr< ::app::Uno::Collections::List__Uno_Action*>(__this->_source)->_used)
    {
        __this->_current = ::uPtr< ::uArray*>(::uPtr< ::app::Uno::Collections::List__Uno_Action*>(__this->_source)->_data)->Item< ::uDelegate*>(__this->_iterator);
        return true;
    }

    return false;
}

List1_Enumerator__Uno_Action List1_Enumerator__Uno_Action__New_1(::uStatic* __this, ::app::Uno::Collections::List__Uno_Action* source)
{
    List1_Enumerator__Uno_Action inst = ::uDefault< List1_Enumerator__Uno_Action>();
    inst._ObjInit(source);
    return inst;
}

void List1_Enumerator__Uno_Action__Uno_Collections_IEnumerator_Reset(List1_Enumerator__Uno_Action* __this)
{
    __this->_iterator = -1;
    __this->_current = NULL;
    __this->_version = ::uPtr< ::app::Uno::Collections::List__Uno_Action*>(__this->_source)->_version;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Collections\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

List1_Enumerator__Uno_Collections_Dictionary_Outracks_Simulator_Bytecode_TypeName_Uno_Type___uType* List1_Enumerator__Uno_Collections_Dictionary_Outracks_Simulator_Bytecode_TypeName_Uno_Type___typeof()
{
    static ::uStaticStrong<List1_Enumerator__Uno_Collections_Dictionary_Outracks_Simulator_Bytecode_TypeName_Uno_Type___uType*> type;
    if (type != NULL) return type;

    type = (List1_Enumerator__Uno_Collections_Dictionary_Outracks_Simulator_Bytecode_TypeName_Uno_Type___uType*)::uAllocStructType(sizeof(List1_Enumerator__Uno_Collections_Dictionary_Outracks_Simulator_Bytecode_TypeName_Uno_Type___uType), "Uno.Collections.List<Uno.Collections.Dictionary<Outracks.Simulator.Bytecode.TypeName,Uno.Type>>.Enumerator", sizeof(List1_Enumerator__Uno_Collections_Dictionary_Outracks_Simulator_Bytecode_TypeName_Uno_Type_), 3, 2, 0);

    type->__interface_2.__fp_Reset = (void(*)(void*))List1_Enumerator__Uno_Collections_Dictionary_Outracks_Simulator_Bytecode_TypeName_Uno_Type___Uno_Collections_IEnumerator_Reset;
    type->__interface_0.__fp_get_Current = (::app::Uno::Collections::Dictionary__Outracks_Simulator_Bytecode_TypeName__Uno_Type*(*)(void*))List1_Enumerator__Uno_Collections_Dictionary_Outracks_Simulator_Bytecode_TypeName_Uno_Type___get_Current;
    type->__interface_1.__fp_Dispose = (void(*)(void*))List1_Enumerator__Uno_Collections_Dictionary_Outracks_Simulator_Bytecode_TypeName_Uno_Type___Dispose;
    type->__interface_2.__fp_MoveNext = (bool(*)(void*))List1_Enumerator__Uno_Collections_Dictionary_Outracks_Simulator_Bytecode_TypeName_Uno_Type___MoveNext;

    type->SetInterfaces(
        ::app::Uno::Collections::IEnumerator__Uno_Collections_Dictionary_Outracks_Simulator_Bytecode_TypeName_Uno_Type___typeof(), offsetof(List1_Enumerator__Uno_Collections_Dictionary_Outracks_Simulator_Bytecode_TypeName_Uno_Type___uType, __interface_0),
        ::app::Uno::IDisposable__typeof(), offsetof(List1_Enumerator__Uno_Collections_Dictionary_Outracks_Simulator_Bytecode_TypeName_Uno_Type___uType, __interface_1),
        ::app::Uno::Collections::IEnumerator__typeof(), offsetof(List1_Enumerator__Uno_Collections_Dictionary_Outracks_Simulator_Bytecode_TypeName_Uno_Type___uType, __interface_2));

    type->SetStrongRefs(
        "_current", offsetof(List1_Enumerator__Uno_Collections_Dictionary_Outracks_Simulator_Bytecode_TypeName_Uno_Type_, _current),
        "_source", offsetof(List1_Enumerator__Uno_Collections_Dictionary_Outracks_Simulator_Bytecode_TypeName_Uno_Type_, _source));

    type->SetFields(4,
        ::uNewField("_current", NULL, offsetof(List1_Enumerator__Uno_Collections_Dictionary_Outracks_Simulator_Bytecode_TypeName_Uno_Type_, _current), ::app::Uno::Collections::Dictionary__Outracks_Simulator_Bytecode_TypeName__Uno_Type__typeof()),
        ::uNewField("_iterator", NULL, offsetof(List1_Enumerator__Uno_Collections_Dictionary_Outracks_Simulator_Bytecode_TypeName_Uno_Type_, _iterator), ::app::Uno::Int__typeof()),
        ::uNewField("_source", NULL, offsetof(List1_Enumerator__Uno_Collections_Dictionary_Outracks_Simulator_Bytecode_TypeName_Uno_Type_, _source), ::app::Uno::Collections::List__Uno_Collections_Dictionary_Outracks_Simulator_Bytecode_TypeName_Uno_Type___typeof()),
        ::uNewField("_version", NULL, offsetof(List1_Enumerator__Uno_Collections_Dictionary_Outracks_Simulator_Bytecode_TypeName_Uno_Type_, _version), ::app::Uno::Int__typeof()));

    type->SetFunctions(3,
        ::uNewFunctionVoid("Dispose", List1_Enumerator__Uno_Collections_Dictionary_Outracks_Simulator_Bytecode_TypeName_Uno_Type___Dispose, 0, false),
        ::uNewFunction("get_Current", List1_Enumerator__Uno_Collections_Dictionary_Outracks_Simulator_Bytecode_TypeName_Uno_Type___get_Current, 0, false, ::app::Uno::Collections::Dictionary__Outracks_Simulator_Bytecode_TypeName__Uno_Type__typeof()),
        ::uNewFunction("MoveNext", List1_Enumerator__Uno_Collections_Dictionary_Outracks_Simulator_Bytecode_TypeName_Uno_Type___MoveNext, 0, false, ::app::Uno::Bool__typeof()));

    ::uRegisterType(type);
    return type;
}

void List1_Enumerator__Uno_Collections_Dictionary_Outracks_Simulator_Bytecode_TypeName_Uno_Type____ObjInit(List1_Enumerator__Uno_Collections_Dictionary_Outracks_Simulator_Bytecode_TypeName_Uno_Type_* __this, ::app::Uno::Collections::List__Uno_Collections_Dictionary_Outracks_Simulator_Bytecode_TypeName_Uno_Type_* source)
{
    __this->_source = source;
    __this->_version = ::uPtr< ::app::Uno::Collections::List__Uno_Collections_Dictionary_Outracks_Simulator_Bytecode_TypeName_Uno_Type_*>(source)->_version;
    __this->_iterator = -1;
}

void List1_Enumerator__Uno_Collections_Dictionary_Outracks_Simulator_Bytecode_TypeName_Uno_Type___Dispose(List1_Enumerator__Uno_Collections_Dictionary_Outracks_Simulator_Bytecode_TypeName_Uno_Type_* __this)
{
}

::app::Uno::Collections::Dictionary__Outracks_Simulator_Bytecode_TypeName__Uno_Type* List1_Enumerator__Uno_Collections_Dictionary_Outracks_Simulator_Bytecode_TypeName_Uno_Type___get_Current(List1_Enumerator__Uno_Collections_Dictionary_Outracks_Simulator_Bytecode_TypeName_Uno_Type_* __this)
{
    return __this->_current;
}

bool List1_Enumerator__Uno_Collections_Dictionary_Outracks_Simulator_Bytecode_TypeName_Uno_Type___MoveNext(List1_Enumerator__Uno_Collections_Dictionary_Outracks_Simulator_Bytecode_TypeName_Uno_Type_* __this)
{
    if (::uPtr< ::app::Uno::Collections::List__Uno_Collections_Dictionary_Outracks_Simulator_Bytecode_TypeName_Uno_Type_*>(__this->_source)->_version != __this->_version)
    {
        U_THROW(::app::Uno::InvalidOperationException__New_4(NULL, ::uGetConstString("Collection was modified")));
    }

    __this->_iterator++;

    if (__this->_iterator < ::uPtr< ::app::Uno::Collections::List__Uno_Collections_Dictionary_Outracks_Simulator_Bytecode_TypeName_Uno_Type_*>(__this->_source)->_used)
    {
        __this->_current = ::uPtr< ::uArray*>(::uPtr< ::app::Uno::Collections::List__Uno_Collections_Dictionary_Outracks_Simulator_Bytecode_TypeName_Uno_Type_*>(__this->_source)->_data)->Item< ::app::Uno::Collections::Dictionary__Outracks_Simulator_Bytecode_TypeName__Uno_Type*>(__this->_iterator);
        return true;
    }

    return false;
}

List1_Enumerator__Uno_Collections_Dictionary_Outracks_Simulator_Bytecode_TypeName_Uno_Type_ List1_Enumerator__Uno_Collections_Dictionary_Outracks_Simulator_Bytecode_TypeName_Uno_Type___New_1(::uStatic* __this, ::app::Uno::Collections::List__Uno_Collections_Dictionary_Outracks_Simulator_Bytecode_TypeName_Uno_Type_* source)
{
    List1_Enumerator__Uno_Collections_Dictionary_Outracks_Simulator_Bytecode_TypeName_Uno_Type_ inst = ::uDefault< List1_Enumerator__Uno_Collections_Dictionary_Outracks_Simulator_Bytecode_TypeName_Uno_Type_>();
    inst._ObjInit(source);
    return inst;
}

void List1_Enumerator__Uno_Collections_Dictionary_Outracks_Simulator_Bytecode_TypeName_Uno_Type___Uno_Collections_IEnumerator_Reset(List1_Enumerator__Uno_Collections_Dictionary_Outracks_Simulator_Bytecode_TypeName_Uno_Type_* __this)
{
    __this->_iterator = -1;
    __this->_current = NULL;
    __this->_version = ::uPtr< ::app::Uno::Collections::List__Uno_Collections_Dictionary_Outracks_Simulator_Bytecode_TypeName_Uno_Type_*>(__this->_source)->_version;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Collections\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

List1_Enumerator__Uno_Content_Models_ModelDrawable__uType* List1_Enumerator__Uno_Content_Models_ModelDrawable__typeof()
{
    static ::uStaticStrong<List1_Enumerator__Uno_Content_Models_ModelDrawable__uType*> type;
    if (type != NULL) return type;

    type = (List1_Enumerator__Uno_Content_Models_ModelDrawable__uType*)::uAllocStructType(sizeof(List1_Enumerator__Uno_Content_Models_ModelDrawable__uType), "Uno.Collections.List<Uno.Content.Models.ModelDrawable>.Enumerator", sizeof(List1_Enumerator__Uno_Content_Models_ModelDrawable), 3, 2, 0);

    type->__interface_2.__fp_Reset = (void(*)(void*))List1_Enumerator__Uno_Content_Models_ModelDrawable__Uno_Collections_IEnumerator_Reset;
    type->__interface_0.__fp_get_Current = (::app::Uno::Content::Models::ModelDrawable*(*)(void*))List1_Enumerator__Uno_Content_Models_ModelDrawable__get_Current;
    type->__interface_1.__fp_Dispose = (void(*)(void*))List1_Enumerator__Uno_Content_Models_ModelDrawable__Dispose;
    type->__interface_2.__fp_MoveNext = (bool(*)(void*))List1_Enumerator__Uno_Content_Models_ModelDrawable__MoveNext;

    type->SetInterfaces(
        ::app::Uno::Collections::IEnumerator__Uno_Content_Models_ModelDrawable__typeof(), offsetof(List1_Enumerator__Uno_Content_Models_ModelDrawable__uType, __interface_0),
        ::app::Uno::IDisposable__typeof(), offsetof(List1_Enumerator__Uno_Content_Models_ModelDrawable__uType, __interface_1),
        ::app::Uno::Collections::IEnumerator__typeof(), offsetof(List1_Enumerator__Uno_Content_Models_ModelDrawable__uType, __interface_2));

    type->SetStrongRefs(
        "_current", offsetof(List1_Enumerator__Uno_Content_Models_ModelDrawable, _current),
        "_source", offsetof(List1_Enumerator__Uno_Content_Models_ModelDrawable, _source));

    type->SetFields(4,
        ::uNewField("_current", NULL, offsetof(List1_Enumerator__Uno_Content_Models_ModelDrawable, _current), ::app::Uno::Content::Models::ModelDrawable__typeof()),
        ::uNewField("_iterator", NULL, offsetof(List1_Enumerator__Uno_Content_Models_ModelDrawable, _iterator), ::app::Uno::Int__typeof()),
        ::uNewField("_source", NULL, offsetof(List1_Enumerator__Uno_Content_Models_ModelDrawable, _source), ::app::Uno::Collections::List__Uno_Content_Models_ModelDrawable__typeof()),
        ::uNewField("_version", NULL, offsetof(List1_Enumerator__Uno_Content_Models_ModelDrawable, _version), ::app::Uno::Int__typeof()));

    type->SetFunctions(3,
        ::uNewFunctionVoid("Dispose", List1_Enumerator__Uno_Content_Models_ModelDrawable__Dispose, 0, false),
        ::uNewFunction("get_Current", List1_Enumerator__Uno_Content_Models_ModelDrawable__get_Current, 0, false, ::app::Uno::Content::Models::ModelDrawable__typeof()),
        ::uNewFunction("MoveNext", List1_Enumerator__Uno_Content_Models_ModelDrawable__MoveNext, 0, false, ::app::Uno::Bool__typeof()));

    ::uRegisterType(type);
    return type;
}

void List1_Enumerator__Uno_Content_Models_ModelDrawable___ObjInit(List1_Enumerator__Uno_Content_Models_ModelDrawable* __this, ::app::Uno::Collections::List__Uno_Content_Models_ModelDrawable* source)
{
    __this->_source = source;
    __this->_version = ::uPtr< ::app::Uno::Collections::List__Uno_Content_Models_ModelDrawable*>(source)->_version;
    __this->_iterator = -1;
}

void List1_Enumerator__Uno_Content_Models_ModelDrawable__Dispose(List1_Enumerator__Uno_Content_Models_ModelDrawable* __this)
{
}

::app::Uno::Content::Models::ModelDrawable* List1_Enumerator__Uno_Content_Models_ModelDrawable__get_Current(List1_Enumerator__Uno_Content_Models_ModelDrawable* __this)
{
    return __this->_current;
}

bool List1_Enumerator__Uno_Content_Models_ModelDrawable__MoveNext(List1_Enumerator__Uno_Content_Models_ModelDrawable* __this)
{
    if (::uPtr< ::app::Uno::Collections::List__Uno_Content_Models_ModelDrawable*>(__this->_source)->_version != __this->_version)
    {
        U_THROW(::app::Uno::InvalidOperationException__New_4(NULL, ::uGetConstString("Collection was modified")));
    }

    __this->_iterator++;

    if (__this->_iterator < ::uPtr< ::app::Uno::Collections::List__Uno_Content_Models_ModelDrawable*>(__this->_source)->_used)
    {
        __this->_current = ::uPtr< ::uArray*>(::uPtr< ::app::Uno::Collections::List__Uno_Content_Models_ModelDrawable*>(__this->_source)->_data)->Item< ::app::Uno::Content::Models::ModelDrawable*>(__this->_iterator);
        return true;
    }

    return false;
}

List1_Enumerator__Uno_Content_Models_ModelDrawable List1_Enumerator__Uno_Content_Models_ModelDrawable__New_1(::uStatic* __this, ::app::Uno::Collections::List__Uno_Content_Models_ModelDrawable* source)
{
    List1_Enumerator__Uno_Content_Models_ModelDrawable inst = ::uDefault< List1_Enumerator__Uno_Content_Models_ModelDrawable>();
    inst._ObjInit(source);
    return inst;
}

void List1_Enumerator__Uno_Content_Models_ModelDrawable__Uno_Collections_IEnumerator_Reset(List1_Enumerator__Uno_Content_Models_ModelDrawable* __this)
{
    __this->_iterator = -1;
    __this->_current = NULL;
    __this->_version = ::uPtr< ::app::Uno::Collections::List__Uno_Content_Models_ModelDrawable*>(__this->_source)->_version;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Collections\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

List1_Enumerator__Uno_Content_Models_ModelNode__uType* List1_Enumerator__Uno_Content_Models_ModelNode__typeof()
{
    static ::uStaticStrong<List1_Enumerator__Uno_Content_Models_ModelNode__uType*> type;
    if (type != NULL) return type;

    type = (List1_Enumerator__Uno_Content_Models_ModelNode__uType*)::uAllocStructType(sizeof(List1_Enumerator__Uno_Content_Models_ModelNode__uType), "Uno.Collections.List<Uno.Content.Models.ModelNode>.Enumerator", sizeof(List1_Enumerator__Uno_Content_Models_ModelNode), 3, 2, 0);

    type->__interface_2.__fp_Reset = (void(*)(void*))List1_Enumerator__Uno_Content_Models_ModelNode__Uno_Collections_IEnumerator_Reset;
    type->__interface_0.__fp_get_Current = (::app::Uno::Content::Models::ModelNode*(*)(void*))List1_Enumerator__Uno_Content_Models_ModelNode__get_Current;
    type->__interface_1.__fp_Dispose = (void(*)(void*))List1_Enumerator__Uno_Content_Models_ModelNode__Dispose;
    type->__interface_2.__fp_MoveNext = (bool(*)(void*))List1_Enumerator__Uno_Content_Models_ModelNode__MoveNext;

    type->SetInterfaces(
        ::app::Uno::Collections::IEnumerator__Uno_Content_Models_ModelNode__typeof(), offsetof(List1_Enumerator__Uno_Content_Models_ModelNode__uType, __interface_0),
        ::app::Uno::IDisposable__typeof(), offsetof(List1_Enumerator__Uno_Content_Models_ModelNode__uType, __interface_1),
        ::app::Uno::Collections::IEnumerator__typeof(), offsetof(List1_Enumerator__Uno_Content_Models_ModelNode__uType, __interface_2));

    type->SetStrongRefs(
        "_current", offsetof(List1_Enumerator__Uno_Content_Models_ModelNode, _current),
        "_source", offsetof(List1_Enumerator__Uno_Content_Models_ModelNode, _source));

    type->SetFields(4,
        ::uNewField("_current", NULL, offsetof(List1_Enumerator__Uno_Content_Models_ModelNode, _current), ::app::Uno::Content::Models::ModelNode__typeof()),
        ::uNewField("_iterator", NULL, offsetof(List1_Enumerator__Uno_Content_Models_ModelNode, _iterator), ::app::Uno::Int__typeof()),
        ::uNewField("_source", NULL, offsetof(List1_Enumerator__Uno_Content_Models_ModelNode, _source), ::app::Uno::Collections::List__Uno_Content_Models_ModelNode__typeof()),
        ::uNewField("_version", NULL, offsetof(List1_Enumerator__Uno_Content_Models_ModelNode, _version), ::app::Uno::Int__typeof()));

    type->SetFunctions(3,
        ::uNewFunctionVoid("Dispose", List1_Enumerator__Uno_Content_Models_ModelNode__Dispose, 0, false),
        ::uNewFunction("get_Current", List1_Enumerator__Uno_Content_Models_ModelNode__get_Current, 0, false, ::app::Uno::Content::Models::ModelNode__typeof()),
        ::uNewFunction("MoveNext", List1_Enumerator__Uno_Content_Models_ModelNode__MoveNext, 0, false, ::app::Uno::Bool__typeof()));

    ::uRegisterType(type);
    return type;
}

void List1_Enumerator__Uno_Content_Models_ModelNode___ObjInit(List1_Enumerator__Uno_Content_Models_ModelNode* __this, ::app::Uno::Collections::List__Uno_Content_Models_ModelNode* source)
{
    __this->_source = source;
    __this->_version = ::uPtr< ::app::Uno::Collections::List__Uno_Content_Models_ModelNode*>(source)->_version;
    __this->_iterator = -1;
}

void List1_Enumerator__Uno_Content_Models_ModelNode__Dispose(List1_Enumerator__Uno_Content_Models_ModelNode* __this)
{
}

::app::Uno::Content::Models::ModelNode* List1_Enumerator__Uno_Content_Models_ModelNode__get_Current(List1_Enumerator__Uno_Content_Models_ModelNode* __this)
{
    return __this->_current;
}

bool List1_Enumerator__Uno_Content_Models_ModelNode__MoveNext(List1_Enumerator__Uno_Content_Models_ModelNode* __this)
{
    if (::uPtr< ::app::Uno::Collections::List__Uno_Content_Models_ModelNode*>(__this->_source)->_version != __this->_version)
    {
        U_THROW(::app::Uno::InvalidOperationException__New_4(NULL, ::uGetConstString("Collection was modified")));
    }

    __this->_iterator++;

    if (__this->_iterator < ::uPtr< ::app::Uno::Collections::List__Uno_Content_Models_ModelNode*>(__this->_source)->_used)
    {
        __this->_current = ::uPtr< ::uArray*>(::uPtr< ::app::Uno::Collections::List__Uno_Content_Models_ModelNode*>(__this->_source)->_data)->Item< ::app::Uno::Content::Models::ModelNode*>(__this->_iterator);
        return true;
    }

    return false;
}

List1_Enumerator__Uno_Content_Models_ModelNode List1_Enumerator__Uno_Content_Models_ModelNode__New_1(::uStatic* __this, ::app::Uno::Collections::List__Uno_Content_Models_ModelNode* source)
{
    List1_Enumerator__Uno_Content_Models_ModelNode inst = ::uDefault< List1_Enumerator__Uno_Content_Models_ModelNode>();
    inst._ObjInit(source);
    return inst;
}

void List1_Enumerator__Uno_Content_Models_ModelNode__Uno_Collections_IEnumerator_Reset(List1_Enumerator__Uno_Content_Models_ModelNode* __this)
{
    __this->_iterator = -1;
    __this->_current = NULL;
    __this->_version = ::uPtr< ::app::Uno::Collections::List__Uno_Content_Models_ModelNode*>(__this->_source)->_version;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Collections\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

List1_Enumerator__Uno_Content_Models_ModelParameter_float4x4___uType* List1_Enumerator__Uno_Content_Models_ModelParameter_float4x4___typeof()
{
    static ::uStaticStrong<List1_Enumerator__Uno_Content_Models_ModelParameter_float4x4___uType*> type;
    if (type != NULL) return type;

    type = (List1_Enumerator__Uno_Content_Models_ModelParameter_float4x4___uType*)::uAllocStructType(sizeof(List1_Enumerator__Uno_Content_Models_ModelParameter_float4x4___uType), "Uno.Collections.List<Uno.Content.Models.ModelParameter<float4x4>>.Enumerator", sizeof(List1_Enumerator__Uno_Content_Models_ModelParameter_float4x4_), 3, 2, 0);

    type->__interface_2.__fp_Reset = (void(*)(void*))List1_Enumerator__Uno_Content_Models_ModelParameter_float4x4___Uno_Collections_IEnumerator_Reset;
    type->__interface_0.__fp_get_Current = (::app::Uno::Content::Models::ModelParameter__float4x4*(*)(void*))List1_Enumerator__Uno_Content_Models_ModelParameter_float4x4___get_Current;
    type->__interface_1.__fp_Dispose = (void(*)(void*))List1_Enumerator__Uno_Content_Models_ModelParameter_float4x4___Dispose;
    type->__interface_2.__fp_MoveNext = (bool(*)(void*))List1_Enumerator__Uno_Content_Models_ModelParameter_float4x4___MoveNext;

    type->SetInterfaces(
        ::app::Uno::Collections::IEnumerator__Uno_Content_Models_ModelParameter_float4x4___typeof(), offsetof(List1_Enumerator__Uno_Content_Models_ModelParameter_float4x4___uType, __interface_0),
        ::app::Uno::IDisposable__typeof(), offsetof(List1_Enumerator__Uno_Content_Models_ModelParameter_float4x4___uType, __interface_1),
        ::app::Uno::Collections::IEnumerator__typeof(), offsetof(List1_Enumerator__Uno_Content_Models_ModelParameter_float4x4___uType, __interface_2));

    type->SetStrongRefs(
        "_current", offsetof(List1_Enumerator__Uno_Content_Models_ModelParameter_float4x4_, _current),
        "_source", offsetof(List1_Enumerator__Uno_Content_Models_ModelParameter_float4x4_, _source));

    type->SetFields(4,
        ::uNewField("_current", NULL, offsetof(List1_Enumerator__Uno_Content_Models_ModelParameter_float4x4_, _current), ::app::Uno::Content::Models::ModelParameter__float4x4__typeof()),
        ::uNewField("_iterator", NULL, offsetof(List1_Enumerator__Uno_Content_Models_ModelParameter_float4x4_, _iterator), ::app::Uno::Int__typeof()),
        ::uNewField("_source", NULL, offsetof(List1_Enumerator__Uno_Content_Models_ModelParameter_float4x4_, _source), ::app::Uno::Collections::List__Uno_Content_Models_ModelParameter_float4x4___typeof()),
        ::uNewField("_version", NULL, offsetof(List1_Enumerator__Uno_Content_Models_ModelParameter_float4x4_, _version), ::app::Uno::Int__typeof()));

    type->SetFunctions(3,
        ::uNewFunctionVoid("Dispose", List1_Enumerator__Uno_Content_Models_ModelParameter_float4x4___Dispose, 0, false),
        ::uNewFunction("get_Current", List1_Enumerator__Uno_Content_Models_ModelParameter_float4x4___get_Current, 0, false, ::app::Uno::Content::Models::ModelParameter__float4x4__typeof()),
        ::uNewFunction("MoveNext", List1_Enumerator__Uno_Content_Models_ModelParameter_float4x4___MoveNext, 0, false, ::app::Uno::Bool__typeof()));

    ::uRegisterType(type);
    return type;
}

void List1_Enumerator__Uno_Content_Models_ModelParameter_float4x4____ObjInit(List1_Enumerator__Uno_Content_Models_ModelParameter_float4x4_* __this, ::app::Uno::Collections::List__Uno_Content_Models_ModelParameter_float4x4_* source)
{
    __this->_source = source;
    __this->_version = ::uPtr< ::app::Uno::Collections::List__Uno_Content_Models_ModelParameter_float4x4_*>(source)->_version;
    __this->_iterator = -1;
}

void List1_Enumerator__Uno_Content_Models_ModelParameter_float4x4___Dispose(List1_Enumerator__Uno_Content_Models_ModelParameter_float4x4_* __this)
{
}

::app::Uno::Content::Models::ModelParameter__float4x4* List1_Enumerator__Uno_Content_Models_ModelParameter_float4x4___get_Current(List1_Enumerator__Uno_Content_Models_ModelParameter_float4x4_* __this)
{
    return __this->_current;
}

bool List1_Enumerator__Uno_Content_Models_ModelParameter_float4x4___MoveNext(List1_Enumerator__Uno_Content_Models_ModelParameter_float4x4_* __this)
{
    if (::uPtr< ::app::Uno::Collections::List__Uno_Content_Models_ModelParameter_float4x4_*>(__this->_source)->_version != __this->_version)
    {
        U_THROW(::app::Uno::InvalidOperationException__New_4(NULL, ::uGetConstString("Collection was modified")));
    }

    __this->_iterator++;

    if (__this->_iterator < ::uPtr< ::app::Uno::Collections::List__Uno_Content_Models_ModelParameter_float4x4_*>(__this->_source)->_used)
    {
        __this->_current = ::uPtr< ::uArray*>(::uPtr< ::app::Uno::Collections::List__Uno_Content_Models_ModelParameter_float4x4_*>(__this->_source)->_data)->Item< ::app::Uno::Content::Models::ModelParameter__float4x4*>(__this->_iterator);
        return true;
    }

    return false;
}

List1_Enumerator__Uno_Content_Models_ModelParameter_float4x4_ List1_Enumerator__Uno_Content_Models_ModelParameter_float4x4___New_1(::uStatic* __this, ::app::Uno::Collections::List__Uno_Content_Models_ModelParameter_float4x4_* source)
{
    List1_Enumerator__Uno_Content_Models_ModelParameter_float4x4_ inst = ::uDefault< List1_Enumerator__Uno_Content_Models_ModelParameter_float4x4_>();
    inst._ObjInit(source);
    return inst;
}

void List1_Enumerator__Uno_Content_Models_ModelParameter_float4x4___Uno_Collections_IEnumerator_Reset(List1_Enumerator__Uno_Content_Models_ModelParameter_float4x4_* __this)
{
    __this->_iterator = -1;
    __this->_current = NULL;
    __this->_version = ::uPtr< ::app::Uno::Collections::List__Uno_Content_Models_ModelParameter_float4x4_*>(__this->_source)->_version;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Collections\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

List1_Enumerator__Uno_Content_Models_ModelSkin__uType* List1_Enumerator__Uno_Content_Models_ModelSkin__typeof()
{
    static ::uStaticStrong<List1_Enumerator__Uno_Content_Models_ModelSkin__uType*> type;
    if (type != NULL) return type;

    type = (List1_Enumerator__Uno_Content_Models_ModelSkin__uType*)::uAllocStructType(sizeof(List1_Enumerator__Uno_Content_Models_ModelSkin__uType), "Uno.Collections.List<Uno.Content.Models.ModelSkin>.Enumerator", sizeof(List1_Enumerator__Uno_Content_Models_ModelSkin), 3, 2, 0);

    type->__interface_2.__fp_Reset = (void(*)(void*))List1_Enumerator__Uno_Content_Models_ModelSkin__Uno_Collections_IEnumerator_Reset;
    type->__interface_0.__fp_get_Current = (::app::Uno::Content::Models::ModelSkin*(*)(void*))List1_Enumerator__Uno_Content_Models_ModelSkin__get_Current;
    type->__interface_1.__fp_Dispose = (void(*)(void*))List1_Enumerator__Uno_Content_Models_ModelSkin__Dispose;
    type->__interface_2.__fp_MoveNext = (bool(*)(void*))List1_Enumerator__Uno_Content_Models_ModelSkin__MoveNext;

    type->SetInterfaces(
        ::app::Uno::Collections::IEnumerator__Uno_Content_Models_ModelSkin__typeof(), offsetof(List1_Enumerator__Uno_Content_Models_ModelSkin__uType, __interface_0),
        ::app::Uno::IDisposable__typeof(), offsetof(List1_Enumerator__Uno_Content_Models_ModelSkin__uType, __interface_1),
        ::app::Uno::Collections::IEnumerator__typeof(), offsetof(List1_Enumerator__Uno_Content_Models_ModelSkin__uType, __interface_2));

    type->SetStrongRefs(
        "_current", offsetof(List1_Enumerator__Uno_Content_Models_ModelSkin, _current),
        "_source", offsetof(List1_Enumerator__Uno_Content_Models_ModelSkin, _source));

    type->SetFields(4,
        ::uNewField("_current", NULL, offsetof(List1_Enumerator__Uno_Content_Models_ModelSkin, _current), ::app::Uno::Content::Models::ModelSkin__typeof()),
        ::uNewField("_iterator", NULL, offsetof(List1_Enumerator__Uno_Content_Models_ModelSkin, _iterator), ::app::Uno::Int__typeof()),
        ::uNewField("_source", NULL, offsetof(List1_Enumerator__Uno_Content_Models_ModelSkin, _source), ::app::Uno::Collections::List__Uno_Content_Models_ModelSkin__typeof()),
        ::uNewField("_version", NULL, offsetof(List1_Enumerator__Uno_Content_Models_ModelSkin, _version), ::app::Uno::Int__typeof()));

    type->SetFunctions(3,
        ::uNewFunctionVoid("Dispose", List1_Enumerator__Uno_Content_Models_ModelSkin__Dispose, 0, false),
        ::uNewFunction("get_Current", List1_Enumerator__Uno_Content_Models_ModelSkin__get_Current, 0, false, ::app::Uno::Content::Models::ModelSkin__typeof()),
        ::uNewFunction("MoveNext", List1_Enumerator__Uno_Content_Models_ModelSkin__MoveNext, 0, false, ::app::Uno::Bool__typeof()));

    ::uRegisterType(type);
    return type;
}

void List1_Enumerator__Uno_Content_Models_ModelSkin___ObjInit(List1_Enumerator__Uno_Content_Models_ModelSkin* __this, ::app::Uno::Collections::List__Uno_Content_Models_ModelSkin* source)
{
    __this->_source = source;
    __this->_version = ::uPtr< ::app::Uno::Collections::List__Uno_Content_Models_ModelSkin*>(source)->_version;
    __this->_iterator = -1;
}

void List1_Enumerator__Uno_Content_Models_ModelSkin__Dispose(List1_Enumerator__Uno_Content_Models_ModelSkin* __this)
{
}

::app::Uno::Content::Models::ModelSkin* List1_Enumerator__Uno_Content_Models_ModelSkin__get_Current(List1_Enumerator__Uno_Content_Models_ModelSkin* __this)
{
    return __this->_current;
}

bool List1_Enumerator__Uno_Content_Models_ModelSkin__MoveNext(List1_Enumerator__Uno_Content_Models_ModelSkin* __this)
{
    if (::uPtr< ::app::Uno::Collections::List__Uno_Content_Models_ModelSkin*>(__this->_source)->_version != __this->_version)
    {
        U_THROW(::app::Uno::InvalidOperationException__New_4(NULL, ::uGetConstString("Collection was modified")));
    }

    __this->_iterator++;

    if (__this->_iterator < ::uPtr< ::app::Uno::Collections::List__Uno_Content_Models_ModelSkin*>(__this->_source)->_used)
    {
        __this->_current = ::uPtr< ::uArray*>(::uPtr< ::app::Uno::Collections::List__Uno_Content_Models_ModelSkin*>(__this->_source)->_data)->Item< ::app::Uno::Content::Models::ModelSkin*>(__this->_iterator);
        return true;
    }

    return false;
}

List1_Enumerator__Uno_Content_Models_ModelSkin List1_Enumerator__Uno_Content_Models_ModelSkin__New_1(::uStatic* __this, ::app::Uno::Collections::List__Uno_Content_Models_ModelSkin* source)
{
    List1_Enumerator__Uno_Content_Models_ModelSkin inst = ::uDefault< List1_Enumerator__Uno_Content_Models_ModelSkin>();
    inst._ObjInit(source);
    return inst;
}

void List1_Enumerator__Uno_Content_Models_ModelSkin__Uno_Collections_IEnumerator_Reset(List1_Enumerator__Uno_Content_Models_ModelSkin* __this)
{
    __this->_iterator = -1;
    __this->_current = NULL;
    __this->_version = ::uPtr< ::app::Uno::Collections::List__Uno_Content_Models_ModelSkin*>(__this->_source)->_version;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Collections\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

List1_Enumerator__Uno_Content_Models_SkinBone__uType* List1_Enumerator__Uno_Content_Models_SkinBone__typeof()
{
    static ::uStaticStrong<List1_Enumerator__Uno_Content_Models_SkinBone__uType*> type;
    if (type != NULL) return type;

    type = (List1_Enumerator__Uno_Content_Models_SkinBone__uType*)::uAllocStructType(sizeof(List1_Enumerator__Uno_Content_Models_SkinBone__uType), "Uno.Collections.List<Uno.Content.Models.SkinBone>.Enumerator", sizeof(List1_Enumerator__Uno_Content_Models_SkinBone), 3, 2, 0);

    type->__interface_2.__fp_Reset = (void(*)(void*))List1_Enumerator__Uno_Content_Models_SkinBone__Uno_Collections_IEnumerator_Reset;
    type->__interface_0.__fp_get_Current = (::app::Uno::Content::Models::SkinBone*(*)(void*))List1_Enumerator__Uno_Content_Models_SkinBone__get_Current;
    type->__interface_1.__fp_Dispose = (void(*)(void*))List1_Enumerator__Uno_Content_Models_SkinBone__Dispose;
    type->__interface_2.__fp_MoveNext = (bool(*)(void*))List1_Enumerator__Uno_Content_Models_SkinBone__MoveNext;

    type->SetInterfaces(
        ::app::Uno::Collections::IEnumerator__Uno_Content_Models_SkinBone__typeof(), offsetof(List1_Enumerator__Uno_Content_Models_SkinBone__uType, __interface_0),
        ::app::Uno::IDisposable__typeof(), offsetof(List1_Enumerator__Uno_Content_Models_SkinBone__uType, __interface_1),
        ::app::Uno::Collections::IEnumerator__typeof(), offsetof(List1_Enumerator__Uno_Content_Models_SkinBone__uType, __interface_2));

    type->SetStrongRefs(
        "_current", offsetof(List1_Enumerator__Uno_Content_Models_SkinBone, _current),
        "_source", offsetof(List1_Enumerator__Uno_Content_Models_SkinBone, _source));

    type->SetFields(4,
        ::uNewField("_current", NULL, offsetof(List1_Enumerator__Uno_Content_Models_SkinBone, _current), ::app::Uno::Content::Models::SkinBone__typeof()),
        ::uNewField("_iterator", NULL, offsetof(List1_Enumerator__Uno_Content_Models_SkinBone, _iterator), ::app::Uno::Int__typeof()),
        ::uNewField("_source", NULL, offsetof(List1_Enumerator__Uno_Content_Models_SkinBone, _source), ::app::Uno::Collections::List__Uno_Content_Models_SkinBone__typeof()),
        ::uNewField("_version", NULL, offsetof(List1_Enumerator__Uno_Content_Models_SkinBone, _version), ::app::Uno::Int__typeof()));

    type->SetFunctions(3,
        ::uNewFunctionVoid("Dispose", List1_Enumerator__Uno_Content_Models_SkinBone__Dispose, 0, false),
        ::uNewFunction("get_Current", List1_Enumerator__Uno_Content_Models_SkinBone__get_Current, 0, false, ::app::Uno::Content::Models::SkinBone__typeof()),
        ::uNewFunction("MoveNext", List1_Enumerator__Uno_Content_Models_SkinBone__MoveNext, 0, false, ::app::Uno::Bool__typeof()));

    ::uRegisterType(type);
    return type;
}

void List1_Enumerator__Uno_Content_Models_SkinBone___ObjInit(List1_Enumerator__Uno_Content_Models_SkinBone* __this, ::app::Uno::Collections::List__Uno_Content_Models_SkinBone* source)
{
    __this->_source = source;
    __this->_version = ::uPtr< ::app::Uno::Collections::List__Uno_Content_Models_SkinBone*>(source)->_version;
    __this->_iterator = -1;
}

void List1_Enumerator__Uno_Content_Models_SkinBone__Dispose(List1_Enumerator__Uno_Content_Models_SkinBone* __this)
{
}

::app::Uno::Content::Models::SkinBone* List1_Enumerator__Uno_Content_Models_SkinBone__get_Current(List1_Enumerator__Uno_Content_Models_SkinBone* __this)
{
    return __this->_current;
}

bool List1_Enumerator__Uno_Content_Models_SkinBone__MoveNext(List1_Enumerator__Uno_Content_Models_SkinBone* __this)
{
    if (::uPtr< ::app::Uno::Collections::List__Uno_Content_Models_SkinBone*>(__this->_source)->_version != __this->_version)
    {
        U_THROW(::app::Uno::InvalidOperationException__New_4(NULL, ::uGetConstString("Collection was modified")));
    }

    __this->_iterator++;

    if (__this->_iterator < ::uPtr< ::app::Uno::Collections::List__Uno_Content_Models_SkinBone*>(__this->_source)->_used)
    {
        __this->_current = ::uPtr< ::uArray*>(::uPtr< ::app::Uno::Collections::List__Uno_Content_Models_SkinBone*>(__this->_source)->_data)->Item< ::app::Uno::Content::Models::SkinBone*>(__this->_iterator);
        return true;
    }

    return false;
}

List1_Enumerator__Uno_Content_Models_SkinBone List1_Enumerator__Uno_Content_Models_SkinBone__New_1(::uStatic* __this, ::app::Uno::Collections::List__Uno_Content_Models_SkinBone* source)
{
    List1_Enumerator__Uno_Content_Models_SkinBone inst = ::uDefault< List1_Enumerator__Uno_Content_Models_SkinBone>();
    inst._ObjInit(source);
    return inst;
}

void List1_Enumerator__Uno_Content_Models_SkinBone__Uno_Collections_IEnumerator_Reset(List1_Enumerator__Uno_Content_Models_SkinBone* __this)
{
    __this->_iterator = -1;
    __this->_current = NULL;
    __this->_version = ::uPtr< ::app::Uno::Collections::List__Uno_Content_Models_SkinBone*>(__this->_source)->_version;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Collections\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

List1_Enumerator__Uno_Content_Models_SkinDrawable__uType* List1_Enumerator__Uno_Content_Models_SkinDrawable__typeof()
{
    static ::uStaticStrong<List1_Enumerator__Uno_Content_Models_SkinDrawable__uType*> type;
    if (type != NULL) return type;

    type = (List1_Enumerator__Uno_Content_Models_SkinDrawable__uType*)::uAllocStructType(sizeof(List1_Enumerator__Uno_Content_Models_SkinDrawable__uType), "Uno.Collections.List<Uno.Content.Models.SkinDrawable>.Enumerator", sizeof(List1_Enumerator__Uno_Content_Models_SkinDrawable), 3, 2, 0);

    type->__interface_2.__fp_Reset = (void(*)(void*))List1_Enumerator__Uno_Content_Models_SkinDrawable__Uno_Collections_IEnumerator_Reset;
    type->__interface_0.__fp_get_Current = (::app::Uno::Content::Models::SkinDrawable*(*)(void*))List1_Enumerator__Uno_Content_Models_SkinDrawable__get_Current;
    type->__interface_1.__fp_Dispose = (void(*)(void*))List1_Enumerator__Uno_Content_Models_SkinDrawable__Dispose;
    type->__interface_2.__fp_MoveNext = (bool(*)(void*))List1_Enumerator__Uno_Content_Models_SkinDrawable__MoveNext;

    type->SetInterfaces(
        ::app::Uno::Collections::IEnumerator__Uno_Content_Models_SkinDrawable__typeof(), offsetof(List1_Enumerator__Uno_Content_Models_SkinDrawable__uType, __interface_0),
        ::app::Uno::IDisposable__typeof(), offsetof(List1_Enumerator__Uno_Content_Models_SkinDrawable__uType, __interface_1),
        ::app::Uno::Collections::IEnumerator__typeof(), offsetof(List1_Enumerator__Uno_Content_Models_SkinDrawable__uType, __interface_2));

    type->SetStrongRefs(
        "_current", offsetof(List1_Enumerator__Uno_Content_Models_SkinDrawable, _current),
        "_source", offsetof(List1_Enumerator__Uno_Content_Models_SkinDrawable, _source));

    type->SetFields(4,
        ::uNewField("_current", NULL, offsetof(List1_Enumerator__Uno_Content_Models_SkinDrawable, _current), ::app::Uno::Content::Models::SkinDrawable__typeof()),
        ::uNewField("_iterator", NULL, offsetof(List1_Enumerator__Uno_Content_Models_SkinDrawable, _iterator), ::app::Uno::Int__typeof()),
        ::uNewField("_source", NULL, offsetof(List1_Enumerator__Uno_Content_Models_SkinDrawable, _source), ::app::Uno::Collections::List__Uno_Content_Models_SkinDrawable__typeof()),
        ::uNewField("_version", NULL, offsetof(List1_Enumerator__Uno_Content_Models_SkinDrawable, _version), ::app::Uno::Int__typeof()));

    type->SetFunctions(3,
        ::uNewFunctionVoid("Dispose", List1_Enumerator__Uno_Content_Models_SkinDrawable__Dispose, 0, false),
        ::uNewFunction("get_Current", List1_Enumerator__Uno_Content_Models_SkinDrawable__get_Current, 0, false, ::app::Uno::Content::Models::SkinDrawable__typeof()),
        ::uNewFunction("MoveNext", List1_Enumerator__Uno_Content_Models_SkinDrawable__MoveNext, 0, false, ::app::Uno::Bool__typeof()));

    ::uRegisterType(type);
    return type;
}

void List1_Enumerator__Uno_Content_Models_SkinDrawable___ObjInit(List1_Enumerator__Uno_Content_Models_SkinDrawable* __this, ::app::Uno::Collections::List__Uno_Content_Models_SkinDrawable* source)
{
    __this->_source = source;
    __this->_version = ::uPtr< ::app::Uno::Collections::List__Uno_Content_Models_SkinDrawable*>(source)->_version;
    __this->_iterator = -1;
}

void List1_Enumerator__Uno_Content_Models_SkinDrawable__Dispose(List1_Enumerator__Uno_Content_Models_SkinDrawable* __this)
{
}

::app::Uno::Content::Models::SkinDrawable* List1_Enumerator__Uno_Content_Models_SkinDrawable__get_Current(List1_Enumerator__Uno_Content_Models_SkinDrawable* __this)
{
    return __this->_current;
}

bool List1_Enumerator__Uno_Content_Models_SkinDrawable__MoveNext(List1_Enumerator__Uno_Content_Models_SkinDrawable* __this)
{
    if (::uPtr< ::app::Uno::Collections::List__Uno_Content_Models_SkinDrawable*>(__this->_source)->_version != __this->_version)
    {
        U_THROW(::app::Uno::InvalidOperationException__New_4(NULL, ::uGetConstString("Collection was modified")));
    }

    __this->_iterator++;

    if (__this->_iterator < ::uPtr< ::app::Uno::Collections::List__Uno_Content_Models_SkinDrawable*>(__this->_source)->_used)
    {
        __this->_current = ::uPtr< ::uArray*>(::uPtr< ::app::Uno::Collections::List__Uno_Content_Models_SkinDrawable*>(__this->_source)->_data)->Item< ::app::Uno::Content::Models::SkinDrawable*>(__this->_iterator);
        return true;
    }

    return false;
}

List1_Enumerator__Uno_Content_Models_SkinDrawable List1_Enumerator__Uno_Content_Models_SkinDrawable__New_1(::uStatic* __this, ::app::Uno::Collections::List__Uno_Content_Models_SkinDrawable* source)
{
    List1_Enumerator__Uno_Content_Models_SkinDrawable inst = ::uDefault< List1_Enumerator__Uno_Content_Models_SkinDrawable>();
    inst._ObjInit(source);
    return inst;
}

void List1_Enumerator__Uno_Content_Models_SkinDrawable__Uno_Collections_IEnumerator_Reset(List1_Enumerator__Uno_Content_Models_SkinDrawable* __this)
{
    __this->_iterator = -1;
    __this->_current = NULL;
    __this->_version = ::uPtr< ::app::Uno::Collections::List__Uno_Content_Models_SkinDrawable*>(__this->_source)->_version;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Collections\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

List1_Enumerator__Uno_Content_Models_VertexInfluence__uType* List1_Enumerator__Uno_Content_Models_VertexInfluence__typeof()
{
    static ::uStaticStrong<List1_Enumerator__Uno_Content_Models_VertexInfluence__uType*> type;
    if (type != NULL) return type;

    type = (List1_Enumerator__Uno_Content_Models_VertexInfluence__uType*)::uAllocStructType(sizeof(List1_Enumerator__Uno_Content_Models_VertexInfluence__uType), "Uno.Collections.List<Uno.Content.Models.VertexInfluence>.Enumerator", sizeof(List1_Enumerator__Uno_Content_Models_VertexInfluence), 3, 2, 0);

    type->__interface_2.__fp_Reset = (void(*)(void*))List1_Enumerator__Uno_Content_Models_VertexInfluence__Uno_Collections_IEnumerator_Reset;
    type->__interface_0.__fp_get_Current = (::app::Uno::Content::Models::VertexInfluence*(*)(void*))List1_Enumerator__Uno_Content_Models_VertexInfluence__get_Current;
    type->__interface_1.__fp_Dispose = (void(*)(void*))List1_Enumerator__Uno_Content_Models_VertexInfluence__Dispose;
    type->__interface_2.__fp_MoveNext = (bool(*)(void*))List1_Enumerator__Uno_Content_Models_VertexInfluence__MoveNext;

    type->SetInterfaces(
        ::app::Uno::Collections::IEnumerator__Uno_Content_Models_VertexInfluence__typeof(), offsetof(List1_Enumerator__Uno_Content_Models_VertexInfluence__uType, __interface_0),
        ::app::Uno::IDisposable__typeof(), offsetof(List1_Enumerator__Uno_Content_Models_VertexInfluence__uType, __interface_1),
        ::app::Uno::Collections::IEnumerator__typeof(), offsetof(List1_Enumerator__Uno_Content_Models_VertexInfluence__uType, __interface_2));

    type->SetStrongRefs(
        "_current", offsetof(List1_Enumerator__Uno_Content_Models_VertexInfluence, _current),
        "_source", offsetof(List1_Enumerator__Uno_Content_Models_VertexInfluence, _source));

    type->SetFields(4,
        ::uNewField("_current", NULL, offsetof(List1_Enumerator__Uno_Content_Models_VertexInfluence, _current), ::app::Uno::Content::Models::VertexInfluence__typeof()),
        ::uNewField("_iterator", NULL, offsetof(List1_Enumerator__Uno_Content_Models_VertexInfluence, _iterator), ::app::Uno::Int__typeof()),
        ::uNewField("_source", NULL, offsetof(List1_Enumerator__Uno_Content_Models_VertexInfluence, _source), ::app::Uno::Collections::List__Uno_Content_Models_VertexInfluence__typeof()),
        ::uNewField("_version", NULL, offsetof(List1_Enumerator__Uno_Content_Models_VertexInfluence, _version), ::app::Uno::Int__typeof()));

    type->SetFunctions(3,
        ::uNewFunctionVoid("Dispose", List1_Enumerator__Uno_Content_Models_VertexInfluence__Dispose, 0, false),
        ::uNewFunction("get_Current", List1_Enumerator__Uno_Content_Models_VertexInfluence__get_Current, 0, false, ::app::Uno::Content::Models::VertexInfluence__typeof()),
        ::uNewFunction("MoveNext", List1_Enumerator__Uno_Content_Models_VertexInfluence__MoveNext, 0, false, ::app::Uno::Bool__typeof()));

    ::uRegisterType(type);
    return type;
}

void List1_Enumerator__Uno_Content_Models_VertexInfluence___ObjInit(List1_Enumerator__Uno_Content_Models_VertexInfluence* __this, ::app::Uno::Collections::List__Uno_Content_Models_VertexInfluence* source)
{
    __this->_source = source;
    __this->_version = ::uPtr< ::app::Uno::Collections::List__Uno_Content_Models_VertexInfluence*>(source)->_version;
    __this->_iterator = -1;
}

void List1_Enumerator__Uno_Content_Models_VertexInfluence__Dispose(List1_Enumerator__Uno_Content_Models_VertexInfluence* __this)
{
}

::app::Uno::Content::Models::VertexInfluence* List1_Enumerator__Uno_Content_Models_VertexInfluence__get_Current(List1_Enumerator__Uno_Content_Models_VertexInfluence* __this)
{
    return __this->_current;
}

bool List1_Enumerator__Uno_Content_Models_VertexInfluence__MoveNext(List1_Enumerator__Uno_Content_Models_VertexInfluence* __this)
{
    if (::uPtr< ::app::Uno::Collections::List__Uno_Content_Models_VertexInfluence*>(__this->_source)->_version != __this->_version)
    {
        U_THROW(::app::Uno::InvalidOperationException__New_4(NULL, ::uGetConstString("Collection was modified")));
    }

    __this->_iterator++;

    if (__this->_iterator < ::uPtr< ::app::Uno::Collections::List__Uno_Content_Models_VertexInfluence*>(__this->_source)->_used)
    {
        __this->_current = ::uPtr< ::uArray*>(::uPtr< ::app::Uno::Collections::List__Uno_Content_Models_VertexInfluence*>(__this->_source)->_data)->Item< ::app::Uno::Content::Models::VertexInfluence*>(__this->_iterator);
        return true;
    }

    return false;
}

List1_Enumerator__Uno_Content_Models_VertexInfluence List1_Enumerator__Uno_Content_Models_VertexInfluence__New_1(::uStatic* __this, ::app::Uno::Collections::List__Uno_Content_Models_VertexInfluence* source)
{
    List1_Enumerator__Uno_Content_Models_VertexInfluence inst = ::uDefault< List1_Enumerator__Uno_Content_Models_VertexInfluence>();
    inst._ObjInit(source);
    return inst;
}

void List1_Enumerator__Uno_Content_Models_VertexInfluence__Uno_Collections_IEnumerator_Reset(List1_Enumerator__Uno_Content_Models_VertexInfluence* __this)
{
    __this->_iterator = -1;
    __this->_current = NULL;
    __this->_version = ::uPtr< ::app::Uno::Collections::List__Uno_Content_Models_VertexInfluence*>(__this->_source)->_version;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Collections\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

List1_Enumerator__Uno_Data_Json_Value__uType* List1_Enumerator__Uno_Data_Json_Value__typeof()
{
    static ::uStaticStrong<List1_Enumerator__Uno_Data_Json_Value__uType*> type;
    if (type != NULL) return type;

    type = (List1_Enumerator__Uno_Data_Json_Value__uType*)::uAllocStructType(sizeof(List1_Enumerator__Uno_Data_Json_Value__uType), "Uno.Collections.List<Uno.Data.Json.Value>.Enumerator", sizeof(List1_Enumerator__Uno_Data_Json_Value), 3, 2, 0);

    type->__interface_2.__fp_Reset = (void(*)(void*))List1_Enumerator__Uno_Data_Json_Value__Uno_Collections_IEnumerator_Reset;
    type->__interface_0.__fp_get_Current = (::app::Uno::Data::Json::Value*(*)(void*))List1_Enumerator__Uno_Data_Json_Value__get_Current;
    type->__interface_1.__fp_Dispose = (void(*)(void*))List1_Enumerator__Uno_Data_Json_Value__Dispose;
    type->__interface_2.__fp_MoveNext = (bool(*)(void*))List1_Enumerator__Uno_Data_Json_Value__MoveNext;

    type->SetInterfaces(
        ::app::Uno::Collections::IEnumerator__Uno_Data_Json_Value__typeof(), offsetof(List1_Enumerator__Uno_Data_Json_Value__uType, __interface_0),
        ::app::Uno::IDisposable__typeof(), offsetof(List1_Enumerator__Uno_Data_Json_Value__uType, __interface_1),
        ::app::Uno::Collections::IEnumerator__typeof(), offsetof(List1_Enumerator__Uno_Data_Json_Value__uType, __interface_2));

    type->SetStrongRefs(
        "_current", offsetof(List1_Enumerator__Uno_Data_Json_Value, _current),
        "_source", offsetof(List1_Enumerator__Uno_Data_Json_Value, _source));

    type->SetFields(4,
        ::uNewField("_current", NULL, offsetof(List1_Enumerator__Uno_Data_Json_Value, _current), ::app::Uno::Data::Json::Value__typeof()),
        ::uNewField("_iterator", NULL, offsetof(List1_Enumerator__Uno_Data_Json_Value, _iterator), ::app::Uno::Int__typeof()),
        ::uNewField("_source", NULL, offsetof(List1_Enumerator__Uno_Data_Json_Value, _source), ::app::Uno::Collections::List__Uno_Data_Json_Value__typeof()),
        ::uNewField("_version", NULL, offsetof(List1_Enumerator__Uno_Data_Json_Value, _version), ::app::Uno::Int__typeof()));

    type->SetFunctions(3,
        ::uNewFunctionVoid("Dispose", List1_Enumerator__Uno_Data_Json_Value__Dispose, 0, false),
        ::uNewFunction("get_Current", List1_Enumerator__Uno_Data_Json_Value__get_Current, 0, false, ::app::Uno::Data::Json::Value__typeof()),
        ::uNewFunction("MoveNext", List1_Enumerator__Uno_Data_Json_Value__MoveNext, 0, false, ::app::Uno::Bool__typeof()));

    ::uRegisterType(type);
    return type;
}

void List1_Enumerator__Uno_Data_Json_Value___ObjInit(List1_Enumerator__Uno_Data_Json_Value* __this, ::app::Uno::Collections::List__Uno_Data_Json_Value* source)
{
    __this->_source = source;
    __this->_version = ::uPtr< ::app::Uno::Collections::List__Uno_Data_Json_Value*>(source)->_version;
    __this->_iterator = -1;
}

void List1_Enumerator__Uno_Data_Json_Value__Dispose(List1_Enumerator__Uno_Data_Json_Value* __this)
{
}

::app::Uno::Data::Json::Value* List1_Enumerator__Uno_Data_Json_Value__get_Current(List1_Enumerator__Uno_Data_Json_Value* __this)
{
    return __this->_current;
}

bool List1_Enumerator__Uno_Data_Json_Value__MoveNext(List1_Enumerator__Uno_Data_Json_Value* __this)
{
    if (::uPtr< ::app::Uno::Collections::List__Uno_Data_Json_Value*>(__this->_source)->_version != __this->_version)
    {
        U_THROW(::app::Uno::InvalidOperationException__New_4(NULL, ::uGetConstString("Collection was modified")));
    }

    __this->_iterator++;

    if (__this->_iterator < ::uPtr< ::app::Uno::Collections::List__Uno_Data_Json_Value*>(__this->_source)->_used)
    {
        __this->_current = ::uPtr< ::uArray*>(::uPtr< ::app::Uno::Collections::List__Uno_Data_Json_Value*>(__this->_source)->_data)->Item< ::app::Uno::Data::Json::Value*>(__this->_iterator);
        return true;
    }

    return false;
}

List1_Enumerator__Uno_Data_Json_Value List1_Enumerator__Uno_Data_Json_Value__New_1(::uStatic* __this, ::app::Uno::Collections::List__Uno_Data_Json_Value* source)
{
    List1_Enumerator__Uno_Data_Json_Value inst = ::uDefault< List1_Enumerator__Uno_Data_Json_Value>();
    inst._ObjInit(source);
    return inst;
}

void List1_Enumerator__Uno_Data_Json_Value__Uno_Collections_IEnumerator_Reset(List1_Enumerator__Uno_Data_Json_Value* __this)
{
    __this->_iterator = -1;
    __this->_current = NULL;
    __this->_version = ::uPtr< ::app::Uno::Collections::List__Uno_Data_Json_Value*>(__this->_source)->_version;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Collections\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

List1_Enumerator__Uno_Data_Xml_XmlAttributeHandle__uType* List1_Enumerator__Uno_Data_Xml_XmlAttributeHandle__typeof()
{
    static ::uStaticStrong<List1_Enumerator__Uno_Data_Xml_XmlAttributeHandle__uType*> type;
    if (type != NULL) return type;

    type = (List1_Enumerator__Uno_Data_Xml_XmlAttributeHandle__uType*)::uAllocStructType(sizeof(List1_Enumerator__Uno_Data_Xml_XmlAttributeHandle__uType), "Uno.Collections.List<Uno.Data.Xml.XmlAttributeHandle>.Enumerator", sizeof(List1_Enumerator__Uno_Data_Xml_XmlAttributeHandle), 3, 2, 0);

    type->__interface_2.__fp_Reset = (void(*)(void*))List1_Enumerator__Uno_Data_Xml_XmlAttributeHandle__Uno_Collections_IEnumerator_Reset;
    type->__interface_0.__fp_get_Current = (::app::Uno::Data::Xml::XmlAttributeHandle*(*)(void*))List1_Enumerator__Uno_Data_Xml_XmlAttributeHandle__get_Current;
    type->__interface_1.__fp_Dispose = (void(*)(void*))List1_Enumerator__Uno_Data_Xml_XmlAttributeHandle__Dispose;
    type->__interface_2.__fp_MoveNext = (bool(*)(void*))List1_Enumerator__Uno_Data_Xml_XmlAttributeHandle__MoveNext;

    type->SetInterfaces(
        ::app::Uno::Collections::IEnumerator__Uno_Data_Xml_XmlAttributeHandle__typeof(), offsetof(List1_Enumerator__Uno_Data_Xml_XmlAttributeHandle__uType, __interface_0),
        ::app::Uno::IDisposable__typeof(), offsetof(List1_Enumerator__Uno_Data_Xml_XmlAttributeHandle__uType, __interface_1),
        ::app::Uno::Collections::IEnumerator__typeof(), offsetof(List1_Enumerator__Uno_Data_Xml_XmlAttributeHandle__uType, __interface_2));

    type->SetStrongRefs(
        "_current", offsetof(List1_Enumerator__Uno_Data_Xml_XmlAttributeHandle, _current),
        "_source", offsetof(List1_Enumerator__Uno_Data_Xml_XmlAttributeHandle, _source));

    type->SetFields(4,
        ::uNewField("_current", NULL, offsetof(List1_Enumerator__Uno_Data_Xml_XmlAttributeHandle, _current), ::app::Uno::Data::Xml::XmlAttributeHandle__typeof()),
        ::uNewField("_iterator", NULL, offsetof(List1_Enumerator__Uno_Data_Xml_XmlAttributeHandle, _iterator), ::app::Uno::Int__typeof()),
        ::uNewField("_source", NULL, offsetof(List1_Enumerator__Uno_Data_Xml_XmlAttributeHandle, _source), ::app::Uno::Collections::List__Uno_Data_Xml_XmlAttributeHandle__typeof()),
        ::uNewField("_version", NULL, offsetof(List1_Enumerator__Uno_Data_Xml_XmlAttributeHandle, _version), ::app::Uno::Int__typeof()));

    type->SetFunctions(3,
        ::uNewFunctionVoid("Dispose", List1_Enumerator__Uno_Data_Xml_XmlAttributeHandle__Dispose, 0, false),
        ::uNewFunction("get_Current", List1_Enumerator__Uno_Data_Xml_XmlAttributeHandle__get_Current, 0, false, ::app::Uno::Data::Xml::XmlAttributeHandle__typeof()),
        ::uNewFunction("MoveNext", List1_Enumerator__Uno_Data_Xml_XmlAttributeHandle__MoveNext, 0, false, ::app::Uno::Bool__typeof()));

    ::uRegisterType(type);
    return type;
}

void List1_Enumerator__Uno_Data_Xml_XmlAttributeHandle___ObjInit(List1_Enumerator__Uno_Data_Xml_XmlAttributeHandle* __this, ::app::Uno::Collections::List__Uno_Data_Xml_XmlAttributeHandle* source)
{
    __this->_source = source;
    __this->_version = ::uPtr< ::app::Uno::Collections::List__Uno_Data_Xml_XmlAttributeHandle*>(source)->_version;
    __this->_iterator = -1;
}

void List1_Enumerator__Uno_Data_Xml_XmlAttributeHandle__Dispose(List1_Enumerator__Uno_Data_Xml_XmlAttributeHandle* __this)
{
}

::app::Uno::Data::Xml::XmlAttributeHandle* List1_Enumerator__Uno_Data_Xml_XmlAttributeHandle__get_Current(List1_Enumerator__Uno_Data_Xml_XmlAttributeHandle* __this)
{
    return __this->_current;
}

bool List1_Enumerator__Uno_Data_Xml_XmlAttributeHandle__MoveNext(List1_Enumerator__Uno_Data_Xml_XmlAttributeHandle* __this)
{
    if (::uPtr< ::app::Uno::Collections::List__Uno_Data_Xml_XmlAttributeHandle*>(__this->_source)->_version != __this->_version)
    {
        U_THROW(::app::Uno::InvalidOperationException__New_4(NULL, ::uGetConstString("Collection was modified")));
    }

    __this->_iterator++;

    if (__this->_iterator < ::uPtr< ::app::Uno::Collections::List__Uno_Data_Xml_XmlAttributeHandle*>(__this->_source)->_used)
    {
        __this->_current = ::uPtr< ::uArray*>(::uPtr< ::app::Uno::Collections::List__Uno_Data_Xml_XmlAttributeHandle*>(__this->_source)->_data)->Item< ::app::Uno::Data::Xml::XmlAttributeHandle*>(__this->_iterator);
        return true;
    }

    return false;
}

List1_Enumerator__Uno_Data_Xml_XmlAttributeHandle List1_Enumerator__Uno_Data_Xml_XmlAttributeHandle__New_1(::uStatic* __this, ::app::Uno::Collections::List__Uno_Data_Xml_XmlAttributeHandle* source)
{
    List1_Enumerator__Uno_Data_Xml_XmlAttributeHandle inst = ::uDefault< List1_Enumerator__Uno_Data_Xml_XmlAttributeHandle>();
    inst._ObjInit(source);
    return inst;
}

void List1_Enumerator__Uno_Data_Xml_XmlAttributeHandle__Uno_Collections_IEnumerator_Reset(List1_Enumerator__Uno_Data_Xml_XmlAttributeHandle* __this)
{
    __this->_iterator = -1;
    __this->_current = NULL;
    __this->_version = ::uPtr< ::app::Uno::Collections::List__Uno_Data_Xml_XmlAttributeHandle*>(__this->_source)->_version;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Collections\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

List1_Enumerator__Uno_Data_Xml_XmlLinkedNode__uType* List1_Enumerator__Uno_Data_Xml_XmlLinkedNode__typeof()
{
    static ::uStaticStrong<List1_Enumerator__Uno_Data_Xml_XmlLinkedNode__uType*> type;
    if (type != NULL) return type;

    type = (List1_Enumerator__Uno_Data_Xml_XmlLinkedNode__uType*)::uAllocStructType(sizeof(List1_Enumerator__Uno_Data_Xml_XmlLinkedNode__uType), "Uno.Collections.List<Uno.Data.Xml.XmlLinkedNode>.Enumerator", sizeof(List1_Enumerator__Uno_Data_Xml_XmlLinkedNode), 3, 2, 0);

    type->__interface_2.__fp_Reset = (void(*)(void*))List1_Enumerator__Uno_Data_Xml_XmlLinkedNode__Uno_Collections_IEnumerator_Reset;
    type->__interface_0.__fp_get_Current = (::app::Uno::Data::Xml::XmlLinkedNode*(*)(void*))List1_Enumerator__Uno_Data_Xml_XmlLinkedNode__get_Current;
    type->__interface_1.__fp_Dispose = (void(*)(void*))List1_Enumerator__Uno_Data_Xml_XmlLinkedNode__Dispose;
    type->__interface_2.__fp_MoveNext = (bool(*)(void*))List1_Enumerator__Uno_Data_Xml_XmlLinkedNode__MoveNext;

    type->SetInterfaces(
        ::app::Uno::Collections::IEnumerator__Uno_Data_Xml_XmlLinkedNode__typeof(), offsetof(List1_Enumerator__Uno_Data_Xml_XmlLinkedNode__uType, __interface_0),
        ::app::Uno::IDisposable__typeof(), offsetof(List1_Enumerator__Uno_Data_Xml_XmlLinkedNode__uType, __interface_1),
        ::app::Uno::Collections::IEnumerator__typeof(), offsetof(List1_Enumerator__Uno_Data_Xml_XmlLinkedNode__uType, __interface_2));

    type->SetStrongRefs(
        "_current", offsetof(List1_Enumerator__Uno_Data_Xml_XmlLinkedNode, _current),
        "_source", offsetof(List1_Enumerator__Uno_Data_Xml_XmlLinkedNode, _source));

    type->SetFields(4,
        ::uNewField("_current", NULL, offsetof(List1_Enumerator__Uno_Data_Xml_XmlLinkedNode, _current), ::app::Uno::Data::Xml::XmlLinkedNode__typeof()),
        ::uNewField("_iterator", NULL, offsetof(List1_Enumerator__Uno_Data_Xml_XmlLinkedNode, _iterator), ::app::Uno::Int__typeof()),
        ::uNewField("_source", NULL, offsetof(List1_Enumerator__Uno_Data_Xml_XmlLinkedNode, _source), ::app::Uno::Collections::List__Uno_Data_Xml_XmlLinkedNode__typeof()),
        ::uNewField("_version", NULL, offsetof(List1_Enumerator__Uno_Data_Xml_XmlLinkedNode, _version), ::app::Uno::Int__typeof()));

    type->SetFunctions(3,
        ::uNewFunctionVoid("Dispose", List1_Enumerator__Uno_Data_Xml_XmlLinkedNode__Dispose, 0, false),
        ::uNewFunction("get_Current", List1_Enumerator__Uno_Data_Xml_XmlLinkedNode__get_Current, 0, false, ::app::Uno::Data::Xml::XmlLinkedNode__typeof()),
        ::uNewFunction("MoveNext", List1_Enumerator__Uno_Data_Xml_XmlLinkedNode__MoveNext, 0, false, ::app::Uno::Bool__typeof()));

    ::uRegisterType(type);
    return type;
}

void List1_Enumerator__Uno_Data_Xml_XmlLinkedNode___ObjInit(List1_Enumerator__Uno_Data_Xml_XmlLinkedNode* __this, ::app::Uno::Collections::List__Uno_Data_Xml_XmlLinkedNode* source)
{
    __this->_source = source;
    __this->_version = ::uPtr< ::app::Uno::Collections::List__Uno_Data_Xml_XmlLinkedNode*>(source)->_version;
    __this->_iterator = -1;
}

void List1_Enumerator__Uno_Data_Xml_XmlLinkedNode__Dispose(List1_Enumerator__Uno_Data_Xml_XmlLinkedNode* __this)
{
}

::app::Uno::Data::Xml::XmlLinkedNode* List1_Enumerator__Uno_Data_Xml_XmlLinkedNode__get_Current(List1_Enumerator__Uno_Data_Xml_XmlLinkedNode* __this)
{
    return __this->_current;
}

bool List1_Enumerator__Uno_Data_Xml_XmlLinkedNode__MoveNext(List1_Enumerator__Uno_Data_Xml_XmlLinkedNode* __this)
{
    if (::uPtr< ::app::Uno::Collections::List__Uno_Data_Xml_XmlLinkedNode*>(__this->_source)->_version != __this->_version)
    {
        U_THROW(::app::Uno::InvalidOperationException__New_4(NULL, ::uGetConstString("Collection was modified")));
    }

    __this->_iterator++;

    if (__this->_iterator < ::uPtr< ::app::Uno::Collections::List__Uno_Data_Xml_XmlLinkedNode*>(__this->_source)->_used)
    {
        __this->_current = ::uPtr< ::uArray*>(::uPtr< ::app::Uno::Collections::List__Uno_Data_Xml_XmlLinkedNode*>(__this->_source)->_data)->Item< ::app::Uno::Data::Xml::XmlLinkedNode*>(__this->_iterator);
        return true;
    }

    return false;
}

List1_Enumerator__Uno_Data_Xml_XmlLinkedNode List1_Enumerator__Uno_Data_Xml_XmlLinkedNode__New_1(::uStatic* __this, ::app::Uno::Collections::List__Uno_Data_Xml_XmlLinkedNode* source)
{
    List1_Enumerator__Uno_Data_Xml_XmlLinkedNode inst = ::uDefault< List1_Enumerator__Uno_Data_Xml_XmlLinkedNode>();
    inst._ObjInit(source);
    return inst;
}

void List1_Enumerator__Uno_Data_Xml_XmlLinkedNode__Uno_Collections_IEnumerator_Reset(List1_Enumerator__Uno_Data_Xml_XmlLinkedNode* __this)
{
    __this->_iterator = -1;
    __this->_current = NULL;
    __this->_version = ::uPtr< ::app::Uno::Collections::List__Uno_Data_Xml_XmlLinkedNode*>(__this->_source)->_version;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Collections\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

List1_Enumerator__Uno_Data_Xml_XmlNodeHandle__uType* List1_Enumerator__Uno_Data_Xml_XmlNodeHandle__typeof()
{
    static ::uStaticStrong<List1_Enumerator__Uno_Data_Xml_XmlNodeHandle__uType*> type;
    if (type != NULL) return type;

    type = (List1_Enumerator__Uno_Data_Xml_XmlNodeHandle__uType*)::uAllocStructType(sizeof(List1_Enumerator__Uno_Data_Xml_XmlNodeHandle__uType), "Uno.Collections.List<Uno.Data.Xml.XmlNodeHandle>.Enumerator", sizeof(List1_Enumerator__Uno_Data_Xml_XmlNodeHandle), 3, 2, 0);

    type->__interface_2.__fp_Reset = (void(*)(void*))List1_Enumerator__Uno_Data_Xml_XmlNodeHandle__Uno_Collections_IEnumerator_Reset;
    type->__interface_0.__fp_get_Current = (::app::Uno::Data::Xml::XmlNodeHandle*(*)(void*))List1_Enumerator__Uno_Data_Xml_XmlNodeHandle__get_Current;
    type->__interface_1.__fp_Dispose = (void(*)(void*))List1_Enumerator__Uno_Data_Xml_XmlNodeHandle__Dispose;
    type->__interface_2.__fp_MoveNext = (bool(*)(void*))List1_Enumerator__Uno_Data_Xml_XmlNodeHandle__MoveNext;

    type->SetInterfaces(
        ::app::Uno::Collections::IEnumerator__Uno_Data_Xml_XmlNodeHandle__typeof(), offsetof(List1_Enumerator__Uno_Data_Xml_XmlNodeHandle__uType, __interface_0),
        ::app::Uno::IDisposable__typeof(), offsetof(List1_Enumerator__Uno_Data_Xml_XmlNodeHandle__uType, __interface_1),
        ::app::Uno::Collections::IEnumerator__typeof(), offsetof(List1_Enumerator__Uno_Data_Xml_XmlNodeHandle__uType, __interface_2));

    type->SetStrongRefs(
        "_current", offsetof(List1_Enumerator__Uno_Data_Xml_XmlNodeHandle, _current),
        "_source", offsetof(List1_Enumerator__Uno_Data_Xml_XmlNodeHandle, _source));

    type->SetFields(4,
        ::uNewField("_current", NULL, offsetof(List1_Enumerator__Uno_Data_Xml_XmlNodeHandle, _current), ::app::Uno::Data::Xml::XmlNodeHandle__typeof()),
        ::uNewField("_iterator", NULL, offsetof(List1_Enumerator__Uno_Data_Xml_XmlNodeHandle, _iterator), ::app::Uno::Int__typeof()),
        ::uNewField("_source", NULL, offsetof(List1_Enumerator__Uno_Data_Xml_XmlNodeHandle, _source), ::app::Uno::Collections::List__Uno_Data_Xml_XmlNodeHandle__typeof()),
        ::uNewField("_version", NULL, offsetof(List1_Enumerator__Uno_Data_Xml_XmlNodeHandle, _version), ::app::Uno::Int__typeof()));

    type->SetFunctions(3,
        ::uNewFunctionVoid("Dispose", List1_Enumerator__Uno_Data_Xml_XmlNodeHandle__Dispose, 0, false),
        ::uNewFunction("get_Current", List1_Enumerator__Uno_Data_Xml_XmlNodeHandle__get_Current, 0, false, ::app::Uno::Data::Xml::XmlNodeHandle__typeof()),
        ::uNewFunction("MoveNext", List1_Enumerator__Uno_Data_Xml_XmlNodeHandle__MoveNext, 0, false, ::app::Uno::Bool__typeof()));

    ::uRegisterType(type);
    return type;
}

void List1_Enumerator__Uno_Data_Xml_XmlNodeHandle___ObjInit(List1_Enumerator__Uno_Data_Xml_XmlNodeHandle* __this, ::app::Uno::Collections::List__Uno_Data_Xml_XmlNodeHandle* source)
{
    __this->_source = source;
    __this->_version = ::uPtr< ::app::Uno::Collections::List__Uno_Data_Xml_XmlNodeHandle*>(source)->_version;
    __this->_iterator = -1;
}

void List1_Enumerator__Uno_Data_Xml_XmlNodeHandle__Dispose(List1_Enumerator__Uno_Data_Xml_XmlNodeHandle* __this)
{
}

::app::Uno::Data::Xml::XmlNodeHandle* List1_Enumerator__Uno_Data_Xml_XmlNodeHandle__get_Current(List1_Enumerator__Uno_Data_Xml_XmlNodeHandle* __this)
{
    return __this->_current;
}

bool List1_Enumerator__Uno_Data_Xml_XmlNodeHandle__MoveNext(List1_Enumerator__Uno_Data_Xml_XmlNodeHandle* __this)
{
    if (::uPtr< ::app::Uno::Collections::List__Uno_Data_Xml_XmlNodeHandle*>(__this->_source)->_version != __this->_version)
    {
        U_THROW(::app::Uno::InvalidOperationException__New_4(NULL, ::uGetConstString("Collection was modified")));
    }

    __this->_iterator++;

    if (__this->_iterator < ::uPtr< ::app::Uno::Collections::List__Uno_Data_Xml_XmlNodeHandle*>(__this->_source)->_used)
    {
        __this->_current = ::uPtr< ::uArray*>(::uPtr< ::app::Uno::Collections::List__Uno_Data_Xml_XmlNodeHandle*>(__this->_source)->_data)->Item< ::app::Uno::Data::Xml::XmlNodeHandle*>(__this->_iterator);
        return true;
    }

    return false;
}

List1_Enumerator__Uno_Data_Xml_XmlNodeHandle List1_Enumerator__Uno_Data_Xml_XmlNodeHandle__New_1(::uStatic* __this, ::app::Uno::Collections::List__Uno_Data_Xml_XmlNodeHandle* source)
{
    List1_Enumerator__Uno_Data_Xml_XmlNodeHandle inst = ::uDefault< List1_Enumerator__Uno_Data_Xml_XmlNodeHandle>();
    inst._ObjInit(source);
    return inst;
}

void List1_Enumerator__Uno_Data_Xml_XmlNodeHandle__Uno_Collections_IEnumerator_Reset(List1_Enumerator__Uno_Data_Xml_XmlNodeHandle* __this)
{
    __this->_iterator = -1;
    __this->_current = NULL;
    __this->_version = ::uPtr< ::app::Uno::Collections::List__Uno_Data_Xml_XmlNodeHandle*>(__this->_source)->_version;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Collections\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

List1_Enumerator__Uno_Diagnostics_ProfileEvent__uType* List1_Enumerator__Uno_Diagnostics_ProfileEvent__typeof()
{
    static ::uStaticStrong<List1_Enumerator__Uno_Diagnostics_ProfileEvent__uType*> type;
    if (type != NULL) return type;

    type = (List1_Enumerator__Uno_Diagnostics_ProfileEvent__uType*)::uAllocStructType(sizeof(List1_Enumerator__Uno_Diagnostics_ProfileEvent__uType), "Uno.Collections.List<Uno.Diagnostics.ProfileEvent>.Enumerator", sizeof(List1_Enumerator__Uno_Diagnostics_ProfileEvent), 3, 2, 0);

    type->__interface_2.__fp_Reset = (void(*)(void*))List1_Enumerator__Uno_Diagnostics_ProfileEvent__Uno_Collections_IEnumerator_Reset;
    type->__interface_0.__fp_get_Current = (::app::Uno::Diagnostics::ProfileEvent*(*)(void*))List1_Enumerator__Uno_Diagnostics_ProfileEvent__get_Current;
    type->__interface_1.__fp_Dispose = (void(*)(void*))List1_Enumerator__Uno_Diagnostics_ProfileEvent__Dispose;
    type->__interface_2.__fp_MoveNext = (bool(*)(void*))List1_Enumerator__Uno_Diagnostics_ProfileEvent__MoveNext;

    type->SetInterfaces(
        ::app::Uno::Collections::IEnumerator__Uno_Diagnostics_ProfileEvent__typeof(), offsetof(List1_Enumerator__Uno_Diagnostics_ProfileEvent__uType, __interface_0),
        ::app::Uno::IDisposable__typeof(), offsetof(List1_Enumerator__Uno_Diagnostics_ProfileEvent__uType, __interface_1),
        ::app::Uno::Collections::IEnumerator__typeof(), offsetof(List1_Enumerator__Uno_Diagnostics_ProfileEvent__uType, __interface_2));

    type->SetStrongRefs(
        "_current", offsetof(List1_Enumerator__Uno_Diagnostics_ProfileEvent, _current),
        "_source", offsetof(List1_Enumerator__Uno_Diagnostics_ProfileEvent, _source));

    type->SetFields(4,
        ::uNewField("_current", NULL, offsetof(List1_Enumerator__Uno_Diagnostics_ProfileEvent, _current), ::app::Uno::Diagnostics::ProfileEvent__typeof()),
        ::uNewField("_iterator", NULL, offsetof(List1_Enumerator__Uno_Diagnostics_ProfileEvent, _iterator), ::app::Uno::Int__typeof()),
        ::uNewField("_source", NULL, offsetof(List1_Enumerator__Uno_Diagnostics_ProfileEvent, _source), ::app::Uno::Collections::List__Uno_Diagnostics_ProfileEvent__typeof()),
        ::uNewField("_version", NULL, offsetof(List1_Enumerator__Uno_Diagnostics_ProfileEvent, _version), ::app::Uno::Int__typeof()));

    type->SetFunctions(3,
        ::uNewFunctionVoid("Dispose", List1_Enumerator__Uno_Diagnostics_ProfileEvent__Dispose, 0, false),
        ::uNewFunction("get_Current", List1_Enumerator__Uno_Diagnostics_ProfileEvent__get_Current, 0, false, ::app::Uno::Diagnostics::ProfileEvent__typeof()),
        ::uNewFunction("MoveNext", List1_Enumerator__Uno_Diagnostics_ProfileEvent__MoveNext, 0, false, ::app::Uno::Bool__typeof()));

    ::uRegisterType(type);
    return type;
}

void List1_Enumerator__Uno_Diagnostics_ProfileEvent___ObjInit(List1_Enumerator__Uno_Diagnostics_ProfileEvent* __this, ::app::Uno::Collections::List__Uno_Diagnostics_ProfileEvent* source)
{
    __this->_source = source;
    __this->_version = ::uPtr< ::app::Uno::Collections::List__Uno_Diagnostics_ProfileEvent*>(source)->_version;
    __this->_iterator = -1;
}

void List1_Enumerator__Uno_Diagnostics_ProfileEvent__Dispose(List1_Enumerator__Uno_Diagnostics_ProfileEvent* __this)
{
}

::app::Uno::Diagnostics::ProfileEvent* List1_Enumerator__Uno_Diagnostics_ProfileEvent__get_Current(List1_Enumerator__Uno_Diagnostics_ProfileEvent* __this)
{
    return __this->_current;
}

bool List1_Enumerator__Uno_Diagnostics_ProfileEvent__MoveNext(List1_Enumerator__Uno_Diagnostics_ProfileEvent* __this)
{
    if (::uPtr< ::app::Uno::Collections::List__Uno_Diagnostics_ProfileEvent*>(__this->_source)->_version != __this->_version)
    {
        U_THROW(::app::Uno::InvalidOperationException__New_4(NULL, ::uGetConstString("Collection was modified")));
    }

    __this->_iterator++;

    if (__this->_iterator < ::uPtr< ::app::Uno::Collections::List__Uno_Diagnostics_ProfileEvent*>(__this->_source)->_used)
    {
        __this->_current = ::uPtr< ::uArray*>(::uPtr< ::app::Uno::Collections::List__Uno_Diagnostics_ProfileEvent*>(__this->_source)->_data)->Item< ::app::Uno::Diagnostics::ProfileEvent*>(__this->_iterator);
        return true;
    }

    return false;
}

List1_Enumerator__Uno_Diagnostics_ProfileEvent List1_Enumerator__Uno_Diagnostics_ProfileEvent__New_1(::uStatic* __this, ::app::Uno::Collections::List__Uno_Diagnostics_ProfileEvent* source)
{
    List1_Enumerator__Uno_Diagnostics_ProfileEvent inst = ::uDefault< List1_Enumerator__Uno_Diagnostics_ProfileEvent>();
    inst._ObjInit(source);
    return inst;
}

void List1_Enumerator__Uno_Diagnostics_ProfileEvent__Uno_Collections_IEnumerator_Reset(List1_Enumerator__Uno_Diagnostics_ProfileEvent* __this)
{
    __this->_iterator = -1;
    __this->_current = NULL;
    __this->_version = ::uPtr< ::app::Uno::Collections::List__Uno_Diagnostics_ProfileEvent*>(__this->_source)->_version;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Collections\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

List1_Enumerator__Uno_EventHandler__uType* List1_Enumerator__Uno_EventHandler__typeof()
{
    static ::uStaticStrong<List1_Enumerator__Uno_EventHandler__uType*> type;
    if (type != NULL) return type;

    type = (List1_Enumerator__Uno_EventHandler__uType*)::uAllocStructType(sizeof(List1_Enumerator__Uno_EventHandler__uType), "Uno.Collections.List<Uno.EventHandler>.Enumerator", sizeof(List1_Enumerator__Uno_EventHandler), 3, 2, 0);

    type->__interface_2.__fp_Reset = (void(*)(void*))List1_Enumerator__Uno_EventHandler__Uno_Collections_IEnumerator_Reset;
    type->__interface_0.__fp_get_Current = (::uDelegate*(*)(void*))List1_Enumerator__Uno_EventHandler__get_Current;
    type->__interface_1.__fp_Dispose = (void(*)(void*))List1_Enumerator__Uno_EventHandler__Dispose;
    type->__interface_2.__fp_MoveNext = (bool(*)(void*))List1_Enumerator__Uno_EventHandler__MoveNext;

    type->SetInterfaces(
        ::app::Uno::Collections::IEnumerator__Uno_EventHandler__typeof(), offsetof(List1_Enumerator__Uno_EventHandler__uType, __interface_0),
        ::app::Uno::IDisposable__typeof(), offsetof(List1_Enumerator__Uno_EventHandler__uType, __interface_1),
        ::app::Uno::Collections::IEnumerator__typeof(), offsetof(List1_Enumerator__Uno_EventHandler__uType, __interface_2));

    type->SetStrongRefs(
        "_current", offsetof(List1_Enumerator__Uno_EventHandler, _current),
        "_source", offsetof(List1_Enumerator__Uno_EventHandler, _source));

    type->SetFields(4,
        ::uNewField("_current", NULL, offsetof(List1_Enumerator__Uno_EventHandler, _current), ::app::Uno::EventHandler__typeof()),
        ::uNewField("_iterator", NULL, offsetof(List1_Enumerator__Uno_EventHandler, _iterator), ::app::Uno::Int__typeof()),
        ::uNewField("_source", NULL, offsetof(List1_Enumerator__Uno_EventHandler, _source), ::app::Uno::Collections::List__Uno_EventHandler__typeof()),
        ::uNewField("_version", NULL, offsetof(List1_Enumerator__Uno_EventHandler, _version), ::app::Uno::Int__typeof()));

    type->SetFunctions(3,
        ::uNewFunctionVoid("Dispose", List1_Enumerator__Uno_EventHandler__Dispose, 0, false),
        ::uNewFunction("get_Current", List1_Enumerator__Uno_EventHandler__get_Current, 0, false, ::app::Uno::EventHandler__typeof()),
        ::uNewFunction("MoveNext", List1_Enumerator__Uno_EventHandler__MoveNext, 0, false, ::app::Uno::Bool__typeof()));

    ::uRegisterType(type);
    return type;
}

void List1_Enumerator__Uno_EventHandler___ObjInit(List1_Enumerator__Uno_EventHandler* __this, ::app::Uno::Collections::List__Uno_EventHandler* source)
{
    __this->_source = source;
    __this->_version = ::uPtr< ::app::Uno::Collections::List__Uno_EventHandler*>(source)->_version;
    __this->_iterator = -1;
}

void List1_Enumerator__Uno_EventHandler__Dispose(List1_Enumerator__Uno_EventHandler* __this)
{
}

::uDelegate* List1_Enumerator__Uno_EventHandler__get_Current(List1_Enumerator__Uno_EventHandler* __this)
{
    return __this->_current;
}

bool List1_Enumerator__Uno_EventHandler__MoveNext(List1_Enumerator__Uno_EventHandler* __this)
{
    if (::uPtr< ::app::Uno::Collections::List__Uno_EventHandler*>(__this->_source)->_version != __this->_version)
    {
        U_THROW(::app::Uno::InvalidOperationException__New_4(NULL, ::uGetConstString("Collection was modified")));
    }

    __this->_iterator++;

    if (__this->_iterator < ::uPtr< ::app::Uno::Collections::List__Uno_EventHandler*>(__this->_source)->_used)
    {
        __this->_current = ::uPtr< ::uArray*>(::uPtr< ::app::Uno::Collections::List__Uno_EventHandler*>(__this->_source)->_data)->Item< ::uDelegate*>(__this->_iterator);
        return true;
    }

    return false;
}

List1_Enumerator__Uno_EventHandler List1_Enumerator__Uno_EventHandler__New_1(::uStatic* __this, ::app::Uno::Collections::List__Uno_EventHandler* source)
{
    List1_Enumerator__Uno_EventHandler inst = ::uDefault< List1_Enumerator__Uno_EventHandler>();
    inst._ObjInit(source);
    return inst;
}

void List1_Enumerator__Uno_EventHandler__Uno_Collections_IEnumerator_Reset(List1_Enumerator__Uno_EventHandler* __this)
{
    __this->_iterator = -1;
    __this->_current = NULL;
    __this->_version = ::uPtr< ::app::Uno::Collections::List__Uno_EventHandler*>(__this->_source)->_version;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Collections\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

List1_Enumerator__Uno_Exception__uType* List1_Enumerator__Uno_Exception__typeof()
{
    static ::uStaticStrong<List1_Enumerator__Uno_Exception__uType*> type;
    if (type != NULL) return type;

    type = (List1_Enumerator__Uno_Exception__uType*)::uAllocStructType(sizeof(List1_Enumerator__Uno_Exception__uType), "Uno.Collections.List<Uno.Exception>.Enumerator", sizeof(List1_Enumerator__Uno_Exception), 3, 2, 0);

    type->__interface_2.__fp_Reset = (void(*)(void*))List1_Enumerator__Uno_Exception__Uno_Collections_IEnumerator_Reset;
    type->__interface_0.__fp_get_Current = (::app::Uno::Exception*(*)(void*))List1_Enumerator__Uno_Exception__get_Current;
    type->__interface_1.__fp_Dispose = (void(*)(void*))List1_Enumerator__Uno_Exception__Dispose;
    type->__interface_2.__fp_MoveNext = (bool(*)(void*))List1_Enumerator__Uno_Exception__MoveNext;

    type->SetInterfaces(
        ::app::Uno::Collections::IEnumerator__Uno_Exception__typeof(), offsetof(List1_Enumerator__Uno_Exception__uType, __interface_0),
        ::app::Uno::IDisposable__typeof(), offsetof(List1_Enumerator__Uno_Exception__uType, __interface_1),
        ::app::Uno::Collections::IEnumerator__typeof(), offsetof(List1_Enumerator__Uno_Exception__uType, __interface_2));

    type->SetStrongRefs(
        "_current", offsetof(List1_Enumerator__Uno_Exception, _current),
        "_source", offsetof(List1_Enumerator__Uno_Exception, _source));

    type->SetFields(4,
        ::uNewField("_current", NULL, offsetof(List1_Enumerator__Uno_Exception, _current), ::app::Uno::Exception__typeof()),
        ::uNewField("_iterator", NULL, offsetof(List1_Enumerator__Uno_Exception, _iterator), ::app::Uno::Int__typeof()),
        ::uNewField("_source", NULL, offsetof(List1_Enumerator__Uno_Exception, _source), ::app::Uno::Collections::List__Uno_Exception__typeof()),
        ::uNewField("_version", NULL, offsetof(List1_Enumerator__Uno_Exception, _version), ::app::Uno::Int__typeof()));

    type->SetFunctions(3,
        ::uNewFunctionVoid("Dispose", List1_Enumerator__Uno_Exception__Dispose, 0, false),
        ::uNewFunction("get_Current", List1_Enumerator__Uno_Exception__get_Current, 0, false, ::app::Uno::Exception__typeof()),
        ::uNewFunction("MoveNext", List1_Enumerator__Uno_Exception__MoveNext, 0, false, ::app::Uno::Bool__typeof()));

    ::uRegisterType(type);
    return type;
}

void List1_Enumerator__Uno_Exception___ObjInit(List1_Enumerator__Uno_Exception* __this, ::app::Uno::Collections::List__Uno_Exception* source)
{
    __this->_source = source;
    __this->_version = ::uPtr< ::app::Uno::Collections::List__Uno_Exception*>(source)->_version;
    __this->_iterator = -1;
}

void List1_Enumerator__Uno_Exception__Dispose(List1_Enumerator__Uno_Exception* __this)
{
}

::app::Uno::Exception* List1_Enumerator__Uno_Exception__get_Current(List1_Enumerator__Uno_Exception* __this)
{
    return __this->_current;
}

bool List1_Enumerator__Uno_Exception__MoveNext(List1_Enumerator__Uno_Exception* __this)
{
    if (::uPtr< ::app::Uno::Collections::List__Uno_Exception*>(__this->_source)->_version != __this->_version)
    {
        U_THROW(::app::Uno::InvalidOperationException__New_4(NULL, ::uGetConstString("Collection was modified")));
    }

    __this->_iterator++;

    if (__this->_iterator < ::uPtr< ::app::Uno::Collections::List__Uno_Exception*>(__this->_source)->_used)
    {
        __this->_current = ::uPtr< ::uArray*>(::uPtr< ::app::Uno::Collections::List__Uno_Exception*>(__this->_source)->_data)->Item< ::app::Uno::Exception*>(__this->_iterator);
        return true;
    }

    return false;
}

List1_Enumerator__Uno_Exception List1_Enumerator__Uno_Exception__New_1(::uStatic* __this, ::app::Uno::Collections::List__Uno_Exception* source)
{
    List1_Enumerator__Uno_Exception inst = ::uDefault< List1_Enumerator__Uno_Exception>();
    inst._ObjInit(source);
    return inst;
}

void List1_Enumerator__Uno_Exception__Uno_Collections_IEnumerator_Reset(List1_Enumerator__Uno_Exception* __this)
{
    __this->_iterator = -1;
    __this->_current = NULL;
    __this->_version = ::uPtr< ::app::Uno::Collections::List__Uno_Exception*>(__this->_source)->_version;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Collections\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

List1_Enumerator__Uno_Graphics_PolygonFace__uType* List1_Enumerator__Uno_Graphics_PolygonFace__typeof()
{
    static ::uStaticStrong<List1_Enumerator__Uno_Graphics_PolygonFace__uType*> type;
    if (type != NULL) return type;

    type = (List1_Enumerator__Uno_Graphics_PolygonFace__uType*)::uAllocStructType(sizeof(List1_Enumerator__Uno_Graphics_PolygonFace__uType), "Uno.Collections.List<Uno.Graphics.PolygonFace>.Enumerator", sizeof(List1_Enumerator__Uno_Graphics_PolygonFace), 3, 1, 0);

    type->__interface_2.__fp_Reset = (void(*)(void*))List1_Enumerator__Uno_Graphics_PolygonFace__Uno_Collections_IEnumerator_Reset;
    type->__interface_0.__fp_get_Current = (int(*)(void*))List1_Enumerator__Uno_Graphics_PolygonFace__get_Current;
    type->__interface_1.__fp_Dispose = (void(*)(void*))List1_Enumerator__Uno_Graphics_PolygonFace__Dispose;
    type->__interface_2.__fp_MoveNext = (bool(*)(void*))List1_Enumerator__Uno_Graphics_PolygonFace__MoveNext;

    type->SetInterfaces(
        ::app::Uno::Collections::IEnumerator__Uno_Graphics_PolygonFace__typeof(), offsetof(List1_Enumerator__Uno_Graphics_PolygonFace__uType, __interface_0),
        ::app::Uno::IDisposable__typeof(), offsetof(List1_Enumerator__Uno_Graphics_PolygonFace__uType, __interface_1),
        ::app::Uno::Collections::IEnumerator__typeof(), offsetof(List1_Enumerator__Uno_Graphics_PolygonFace__uType, __interface_2));

    type->SetStrongRefs(
        "_source", offsetof(List1_Enumerator__Uno_Graphics_PolygonFace, _source));

    type->SetFields(4,
        ::uNewField("_current", NULL, offsetof(List1_Enumerator__Uno_Graphics_PolygonFace, _current), ::app::Uno::Graphics::PolygonFace__typeof()),
        ::uNewField("_iterator", NULL, offsetof(List1_Enumerator__Uno_Graphics_PolygonFace, _iterator), ::app::Uno::Int__typeof()),
        ::uNewField("_source", NULL, offsetof(List1_Enumerator__Uno_Graphics_PolygonFace, _source), ::app::Uno::Collections::List__Uno_Graphics_PolygonFace__typeof()),
        ::uNewField("_version", NULL, offsetof(List1_Enumerator__Uno_Graphics_PolygonFace, _version), ::app::Uno::Int__typeof()));

    type->SetFunctions(3,
        ::uNewFunctionVoid("Dispose", List1_Enumerator__Uno_Graphics_PolygonFace__Dispose, 0, false),
        ::uNewFunction("get_Current", List1_Enumerator__Uno_Graphics_PolygonFace__get_Current, 0, false, ::app::Uno::Graphics::PolygonFace__typeof()),
        ::uNewFunction("MoveNext", List1_Enumerator__Uno_Graphics_PolygonFace__MoveNext, 0, false, ::app::Uno::Bool__typeof()));

    ::uRegisterType(type);
    return type;
}

void List1_Enumerator__Uno_Graphics_PolygonFace___ObjInit(List1_Enumerator__Uno_Graphics_PolygonFace* __this, ::app::Uno::Collections::List__Uno_Graphics_PolygonFace* source)
{
    __this->_source = source;
    __this->_version = ::uPtr< ::app::Uno::Collections::List__Uno_Graphics_PolygonFace*>(source)->_version;
    __this->_iterator = -1;
}

void List1_Enumerator__Uno_Graphics_PolygonFace__Dispose(List1_Enumerator__Uno_Graphics_PolygonFace* __this)
{
}

int List1_Enumerator__Uno_Graphics_PolygonFace__get_Current(List1_Enumerator__Uno_Graphics_PolygonFace* __this)
{
    return __this->_current;
}

bool List1_Enumerator__Uno_Graphics_PolygonFace__MoveNext(List1_Enumerator__Uno_Graphics_PolygonFace* __this)
{
    if (::uPtr< ::app::Uno::Collections::List__Uno_Graphics_PolygonFace*>(__this->_source)->_version != __this->_version)
    {
        U_THROW(::app::Uno::InvalidOperationException__New_4(NULL, ::uGetConstString("Collection was modified")));
    }

    __this->_iterator++;

    if (__this->_iterator < ::uPtr< ::app::Uno::Collections::List__Uno_Graphics_PolygonFace*>(__this->_source)->_used)
    {
        __this->_current = ::uPtr< ::uArray*>(::uPtr< ::app::Uno::Collections::List__Uno_Graphics_PolygonFace*>(__this->_source)->_data)->Item< int>(__this->_iterator);
        return true;
    }

    return false;
}

List1_Enumerator__Uno_Graphics_PolygonFace List1_Enumerator__Uno_Graphics_PolygonFace__New_1(::uStatic* __this, ::app::Uno::Collections::List__Uno_Graphics_PolygonFace* source)
{
    List1_Enumerator__Uno_Graphics_PolygonFace inst = ::uDefault< List1_Enumerator__Uno_Graphics_PolygonFace>();
    inst._ObjInit(source);
    return inst;
}

void List1_Enumerator__Uno_Graphics_PolygonFace__Uno_Collections_IEnumerator_Reset(List1_Enumerator__Uno_Graphics_PolygonFace* __this)
{
    __this->_iterator = -1;
    __this->_current = 0;
    __this->_version = ::uPtr< ::app::Uno::Collections::List__Uno_Graphics_PolygonFace*>(__this->_source)->_version;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Collections\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

List1_Enumerator__Uno_Net_Http_HttpMessageHandlerRequest__uType* List1_Enumerator__Uno_Net_Http_HttpMessageHandlerRequest__typeof()
{
    static ::uStaticStrong<List1_Enumerator__Uno_Net_Http_HttpMessageHandlerRequest__uType*> type;
    if (type != NULL) return type;

    type = (List1_Enumerator__Uno_Net_Http_HttpMessageHandlerRequest__uType*)::uAllocStructType(sizeof(List1_Enumerator__Uno_Net_Http_HttpMessageHandlerRequest__uType), "Uno.Collections.List<Uno.Net.Http.HttpMessageHandlerRequest>.Enumerator", sizeof(List1_Enumerator__Uno_Net_Http_HttpMessageHandlerRequest), 3, 2, 0);

    type->__interface_2.__fp_Reset = (void(*)(void*))List1_Enumerator__Uno_Net_Http_HttpMessageHandlerRequest__Uno_Collections_IEnumerator_Reset;
    type->__interface_0.__fp_get_Current = (::app::Uno::Net::Http::HttpMessageHandlerRequest*(*)(void*))List1_Enumerator__Uno_Net_Http_HttpMessageHandlerRequest__get_Current;
    type->__interface_1.__fp_Dispose = (void(*)(void*))List1_Enumerator__Uno_Net_Http_HttpMessageHandlerRequest__Dispose;
    type->__interface_2.__fp_MoveNext = (bool(*)(void*))List1_Enumerator__Uno_Net_Http_HttpMessageHandlerRequest__MoveNext;

    type->SetInterfaces(
        ::app::Uno::Collections::IEnumerator__Uno_Net_Http_HttpMessageHandlerRequest__typeof(), offsetof(List1_Enumerator__Uno_Net_Http_HttpMessageHandlerRequest__uType, __interface_0),
        ::app::Uno::IDisposable__typeof(), offsetof(List1_Enumerator__Uno_Net_Http_HttpMessageHandlerRequest__uType, __interface_1),
        ::app::Uno::Collections::IEnumerator__typeof(), offsetof(List1_Enumerator__Uno_Net_Http_HttpMessageHandlerRequest__uType, __interface_2));

    type->SetStrongRefs(
        "_current", offsetof(List1_Enumerator__Uno_Net_Http_HttpMessageHandlerRequest, _current),
        "_source", offsetof(List1_Enumerator__Uno_Net_Http_HttpMessageHandlerRequest, _source));

    type->SetFields(4,
        ::uNewField("_current", NULL, offsetof(List1_Enumerator__Uno_Net_Http_HttpMessageHandlerRequest, _current), ::app::Uno::Net::Http::HttpMessageHandlerRequest__typeof()),
        ::uNewField("_iterator", NULL, offsetof(List1_Enumerator__Uno_Net_Http_HttpMessageHandlerRequest, _iterator), ::app::Uno::Int__typeof()),
        ::uNewField("_source", NULL, offsetof(List1_Enumerator__Uno_Net_Http_HttpMessageHandlerRequest, _source), ::app::Uno::Collections::List__Uno_Net_Http_HttpMessageHandlerRequest__typeof()),
        ::uNewField("_version", NULL, offsetof(List1_Enumerator__Uno_Net_Http_HttpMessageHandlerRequest, _version), ::app::Uno::Int__typeof()));

    type->SetFunctions(3,
        ::uNewFunctionVoid("Dispose", List1_Enumerator__Uno_Net_Http_HttpMessageHandlerRequest__Dispose, 0, false),
        ::uNewFunction("get_Current", List1_Enumerator__Uno_Net_Http_HttpMessageHandlerRequest__get_Current, 0, false, ::app::Uno::Net::Http::HttpMessageHandlerRequest__typeof()),
        ::uNewFunction("MoveNext", List1_Enumerator__Uno_Net_Http_HttpMessageHandlerRequest__MoveNext, 0, false, ::app::Uno::Bool__typeof()));

    ::uRegisterType(type);
    return type;
}

void List1_Enumerator__Uno_Net_Http_HttpMessageHandlerRequest___ObjInit(List1_Enumerator__Uno_Net_Http_HttpMessageHandlerRequest* __this, ::app::Uno::Collections::List__Uno_Net_Http_HttpMessageHandlerRequest* source)
{
    __this->_source = source;
    __this->_version = ::uPtr< ::app::Uno::Collections::List__Uno_Net_Http_HttpMessageHandlerRequest*>(source)->_version;
    __this->_iterator = -1;
}

void List1_Enumerator__Uno_Net_Http_HttpMessageHandlerRequest__Dispose(List1_Enumerator__Uno_Net_Http_HttpMessageHandlerRequest* __this)
{
}

::app::Uno::Net::Http::HttpMessageHandlerRequest* List1_Enumerator__Uno_Net_Http_HttpMessageHandlerRequest__get_Current(List1_Enumerator__Uno_Net_Http_HttpMessageHandlerRequest* __this)
{
    return __this->_current;
}

bool List1_Enumerator__Uno_Net_Http_HttpMessageHandlerRequest__MoveNext(List1_Enumerator__Uno_Net_Http_HttpMessageHandlerRequest* __this)
{
    if (::uPtr< ::app::Uno::Collections::List__Uno_Net_Http_HttpMessageHandlerRequest*>(__this->_source)->_version != __this->_version)
    {
        U_THROW(::app::Uno::InvalidOperationException__New_4(NULL, ::uGetConstString("Collection was modified")));
    }

    __this->_iterator++;

    if (__this->_iterator < ::uPtr< ::app::Uno::Collections::List__Uno_Net_Http_HttpMessageHandlerRequest*>(__this->_source)->_used)
    {
        __this->_current = ::uPtr< ::uArray*>(::uPtr< ::app::Uno::Collections::List__Uno_Net_Http_HttpMessageHandlerRequest*>(__this->_source)->_data)->Item< ::app::Uno::Net::Http::HttpMessageHandlerRequest*>(__this->_iterator);
        return true;
    }

    return false;
}

List1_Enumerator__Uno_Net_Http_HttpMessageHandlerRequest List1_Enumerator__Uno_Net_Http_HttpMessageHandlerRequest__New_1(::uStatic* __this, ::app::Uno::Collections::List__Uno_Net_Http_HttpMessageHandlerRequest* source)
{
    List1_Enumerator__Uno_Net_Http_HttpMessageHandlerRequest inst = ::uDefault< List1_Enumerator__Uno_Net_Http_HttpMessageHandlerRequest>();
    inst._ObjInit(source);
    return inst;
}

void List1_Enumerator__Uno_Net_Http_HttpMessageHandlerRequest__Uno_Collections_IEnumerator_Reset(List1_Enumerator__Uno_Net_Http_HttpMessageHandlerRequest* __this)
{
    __this->_iterator = -1;
    __this->_current = NULL;
    __this->_version = ::uPtr< ::app::Uno::Collections::List__Uno_Net_Http_HttpMessageHandlerRequest*>(__this->_source)->_version;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Collections\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

List1_Enumerator__Uno_Platform_Key__uType* List1_Enumerator__Uno_Platform_Key__typeof()
{
    static ::uStaticStrong<List1_Enumerator__Uno_Platform_Key__uType*> type;
    if (type != NULL) return type;

    type = (List1_Enumerator__Uno_Platform_Key__uType*)::uAllocStructType(sizeof(List1_Enumerator__Uno_Platform_Key__uType), "Uno.Collections.List<Uno.Platform.Key>.Enumerator", sizeof(List1_Enumerator__Uno_Platform_Key), 3, 1, 0);

    type->__interface_2.__fp_Reset = (void(*)(void*))List1_Enumerator__Uno_Platform_Key__Uno_Collections_IEnumerator_Reset;
    type->__interface_0.__fp_get_Current = (int(*)(void*))List1_Enumerator__Uno_Platform_Key__get_Current;
    type->__interface_1.__fp_Dispose = (void(*)(void*))List1_Enumerator__Uno_Platform_Key__Dispose;
    type->__interface_2.__fp_MoveNext = (bool(*)(void*))List1_Enumerator__Uno_Platform_Key__MoveNext;

    type->SetInterfaces(
        ::app::Uno::Collections::IEnumerator__Uno_Platform_Key__typeof(), offsetof(List1_Enumerator__Uno_Platform_Key__uType, __interface_0),
        ::app::Uno::IDisposable__typeof(), offsetof(List1_Enumerator__Uno_Platform_Key__uType, __interface_1),
        ::app::Uno::Collections::IEnumerator__typeof(), offsetof(List1_Enumerator__Uno_Platform_Key__uType, __interface_2));

    type->SetStrongRefs(
        "_source", offsetof(List1_Enumerator__Uno_Platform_Key, _source));

    type->SetFields(4,
        ::uNewField("_current", NULL, offsetof(List1_Enumerator__Uno_Platform_Key, _current), ::app::Uno::Platform::Key__typeof()),
        ::uNewField("_iterator", NULL, offsetof(List1_Enumerator__Uno_Platform_Key, _iterator), ::app::Uno::Int__typeof()),
        ::uNewField("_source", NULL, offsetof(List1_Enumerator__Uno_Platform_Key, _source), ::app::Uno::Collections::List__Uno_Platform_Key__typeof()),
        ::uNewField("_version", NULL, offsetof(List1_Enumerator__Uno_Platform_Key, _version), ::app::Uno::Int__typeof()));

    type->SetFunctions(3,
        ::uNewFunctionVoid("Dispose", List1_Enumerator__Uno_Platform_Key__Dispose, 0, false),
        ::uNewFunction("get_Current", List1_Enumerator__Uno_Platform_Key__get_Current, 0, false, ::app::Uno::Platform::Key__typeof()),
        ::uNewFunction("MoveNext", List1_Enumerator__Uno_Platform_Key__MoveNext, 0, false, ::app::Uno::Bool__typeof()));

    ::uRegisterType(type);
    return type;
}

void List1_Enumerator__Uno_Platform_Key___ObjInit(List1_Enumerator__Uno_Platform_Key* __this, ::app::Uno::Collections::List__Uno_Platform_Key* source)
{
    __this->_source = source;
    __this->_version = ::uPtr< ::app::Uno::Collections::List__Uno_Platform_Key*>(source)->_version;
    __this->_iterator = -1;
}

void List1_Enumerator__Uno_Platform_Key__Dispose(List1_Enumerator__Uno_Platform_Key* __this)
{
}

int List1_Enumerator__Uno_Platform_Key__get_Current(List1_Enumerator__Uno_Platform_Key* __this)
{
    return __this->_current;
}

bool List1_Enumerator__Uno_Platform_Key__MoveNext(List1_Enumerator__Uno_Platform_Key* __this)
{
    if (::uPtr< ::app::Uno::Collections::List__Uno_Platform_Key*>(__this->_source)->_version != __this->_version)
    {
        U_THROW(::app::Uno::InvalidOperationException__New_4(NULL, ::uGetConstString("Collection was modified")));
    }

    __this->_iterator++;

    if (__this->_iterator < ::uPtr< ::app::Uno::Collections::List__Uno_Platform_Key*>(__this->_source)->_used)
    {
        __this->_current = ::uPtr< ::uArray*>(::uPtr< ::app::Uno::Collections::List__Uno_Platform_Key*>(__this->_source)->_data)->Item< int>(__this->_iterator);
        return true;
    }

    return false;
}

List1_Enumerator__Uno_Platform_Key List1_Enumerator__Uno_Platform_Key__New_1(::uStatic* __this, ::app::Uno::Collections::List__Uno_Platform_Key* source)
{
    List1_Enumerator__Uno_Platform_Key inst = ::uDefault< List1_Enumerator__Uno_Platform_Key>();
    inst._ObjInit(source);
    return inst;
}

void List1_Enumerator__Uno_Platform_Key__Uno_Collections_IEnumerator_Reset(List1_Enumerator__Uno_Platform_Key* __this)
{
    __this->_iterator = -1;
    __this->_current = 0;
    __this->_version = ::uPtr< ::app::Uno::Collections::List__Uno_Platform_Key*>(__this->_source)->_version;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Collections\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

List1_Enumerator__Uno_Reflection_CppField__uType* List1_Enumerator__Uno_Reflection_CppField__typeof()
{
    static ::uStaticStrong<List1_Enumerator__Uno_Reflection_CppField__uType*> type;
    if (type != NULL) return type;

    type = (List1_Enumerator__Uno_Reflection_CppField__uType*)::uAllocStructType(sizeof(List1_Enumerator__Uno_Reflection_CppField__uType), "Uno.Collections.List<Uno.Reflection.CppField>.Enumerator", sizeof(List1_Enumerator__Uno_Reflection_CppField), 3, 1, 0);

    type->__interface_2.__fp_Reset = (void(*)(void*))List1_Enumerator__Uno_Reflection_CppField__Uno_Collections_IEnumerator_Reset;
    type->__interface_0.__fp_get_Current = (::uField*(*)(void*))List1_Enumerator__Uno_Reflection_CppField__get_Current;
    type->__interface_1.__fp_Dispose = (void(*)(void*))List1_Enumerator__Uno_Reflection_CppField__Dispose;
    type->__interface_2.__fp_MoveNext = (bool(*)(void*))List1_Enumerator__Uno_Reflection_CppField__MoveNext;

    type->SetInterfaces(
        ::app::Uno::Collections::IEnumerator__Uno_Reflection_CppField__typeof(), offsetof(List1_Enumerator__Uno_Reflection_CppField__uType, __interface_0),
        ::app::Uno::IDisposable__typeof(), offsetof(List1_Enumerator__Uno_Reflection_CppField__uType, __interface_1),
        ::app::Uno::Collections::IEnumerator__typeof(), offsetof(List1_Enumerator__Uno_Reflection_CppField__uType, __interface_2));

    type->SetStrongRefs(
        "_source", offsetof(List1_Enumerator__Uno_Reflection_CppField, _source));

    type->SetFields(4,
        ::uNewField("_current", NULL, offsetof(List1_Enumerator__Uno_Reflection_CppField, _current), ::app::Uno::Reflection::CppField__typeof()),
        ::uNewField("_iterator", NULL, offsetof(List1_Enumerator__Uno_Reflection_CppField, _iterator), ::app::Uno::Int__typeof()),
        ::uNewField("_source", NULL, offsetof(List1_Enumerator__Uno_Reflection_CppField, _source), ::app::Uno::Collections::List__Uno_Reflection_CppField__typeof()),
        ::uNewField("_version", NULL, offsetof(List1_Enumerator__Uno_Reflection_CppField, _version), ::app::Uno::Int__typeof()));

    type->SetFunctions(3,
        ::uNewFunctionVoid("Dispose", List1_Enumerator__Uno_Reflection_CppField__Dispose, 0, false),
        ::uNewFunction("get_Current", List1_Enumerator__Uno_Reflection_CppField__get_Current, 0, false, ::app::Uno::Reflection::CppField__typeof()),
        ::uNewFunction("MoveNext", List1_Enumerator__Uno_Reflection_CppField__MoveNext, 0, false, ::app::Uno::Bool__typeof()));

    ::uRegisterType(type);
    return type;
}

void List1_Enumerator__Uno_Reflection_CppField___ObjInit(List1_Enumerator__Uno_Reflection_CppField* __this, ::app::Uno::Collections::List__Uno_Reflection_CppField* source)
{
    __this->_source = source;
    __this->_version = ::uPtr< ::app::Uno::Collections::List__Uno_Reflection_CppField*>(source)->_version;
    __this->_iterator = -1;
}

void List1_Enumerator__Uno_Reflection_CppField__Dispose(List1_Enumerator__Uno_Reflection_CppField* __this)
{
}

::uField* List1_Enumerator__Uno_Reflection_CppField__get_Current(List1_Enumerator__Uno_Reflection_CppField* __this)
{
    return __this->_current;
}

bool List1_Enumerator__Uno_Reflection_CppField__MoveNext(List1_Enumerator__Uno_Reflection_CppField* __this)
{
    if (::uPtr< ::app::Uno::Collections::List__Uno_Reflection_CppField*>(__this->_source)->_version != __this->_version)
    {
        U_THROW(::app::Uno::InvalidOperationException__New_4(NULL, ::uGetConstString("Collection was modified")));
    }

    __this->_iterator++;

    if (__this->_iterator < ::uPtr< ::app::Uno::Collections::List__Uno_Reflection_CppField*>(__this->_source)->_used)
    {
        __this->_current = ::uPtr< ::uArray*>(::uPtr< ::app::Uno::Collections::List__Uno_Reflection_CppField*>(__this->_source)->_data)->Item< ::uField*>(__this->_iterator);
        return true;
    }

    return false;
}

List1_Enumerator__Uno_Reflection_CppField List1_Enumerator__Uno_Reflection_CppField__New_1(::uStatic* __this, ::app::Uno::Collections::List__Uno_Reflection_CppField* source)
{
    List1_Enumerator__Uno_Reflection_CppField inst = ::uDefault< List1_Enumerator__Uno_Reflection_CppField>();
    inst._ObjInit(source);
    return inst;
}

void List1_Enumerator__Uno_Reflection_CppField__Uno_Collections_IEnumerator_Reset(List1_Enumerator__Uno_Reflection_CppField* __this)
{
    __this->_iterator = -1;
    __this->_current = ::uDefault< ::uField*>();
    __this->_version = ::uPtr< ::app::Uno::Collections::List__Uno_Reflection_CppField*>(__this->_source)->_version;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Collections\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

List1_Enumerator__Uno_Reflection_CppFunction__uType* List1_Enumerator__Uno_Reflection_CppFunction__typeof()
{
    static ::uStaticStrong<List1_Enumerator__Uno_Reflection_CppFunction__uType*> type;
    if (type != NULL) return type;

    type = (List1_Enumerator__Uno_Reflection_CppFunction__uType*)::uAllocStructType(sizeof(List1_Enumerator__Uno_Reflection_CppFunction__uType), "Uno.Collections.List<Uno.Reflection.CppFunction>.Enumerator", sizeof(List1_Enumerator__Uno_Reflection_CppFunction), 3, 1, 0);

    type->__interface_2.__fp_Reset = (void(*)(void*))List1_Enumerator__Uno_Reflection_CppFunction__Uno_Collections_IEnumerator_Reset;
    type->__interface_0.__fp_get_Current = (::uFunction*(*)(void*))List1_Enumerator__Uno_Reflection_CppFunction__get_Current;
    type->__interface_1.__fp_Dispose = (void(*)(void*))List1_Enumerator__Uno_Reflection_CppFunction__Dispose;
    type->__interface_2.__fp_MoveNext = (bool(*)(void*))List1_Enumerator__Uno_Reflection_CppFunction__MoveNext;

    type->SetInterfaces(
        ::app::Uno::Collections::IEnumerator__Uno_Reflection_CppFunction__typeof(), offsetof(List1_Enumerator__Uno_Reflection_CppFunction__uType, __interface_0),
        ::app::Uno::IDisposable__typeof(), offsetof(List1_Enumerator__Uno_Reflection_CppFunction__uType, __interface_1),
        ::app::Uno::Collections::IEnumerator__typeof(), offsetof(List1_Enumerator__Uno_Reflection_CppFunction__uType, __interface_2));

    type->SetStrongRefs(
        "_source", offsetof(List1_Enumerator__Uno_Reflection_CppFunction, _source));

    type->SetFields(4,
        ::uNewField("_current", NULL, offsetof(List1_Enumerator__Uno_Reflection_CppFunction, _current), ::app::Uno::Reflection::CppFunction__typeof()),
        ::uNewField("_iterator", NULL, offsetof(List1_Enumerator__Uno_Reflection_CppFunction, _iterator), ::app::Uno::Int__typeof()),
        ::uNewField("_source", NULL, offsetof(List1_Enumerator__Uno_Reflection_CppFunction, _source), ::app::Uno::Collections::List__Uno_Reflection_CppFunction__typeof()),
        ::uNewField("_version", NULL, offsetof(List1_Enumerator__Uno_Reflection_CppFunction, _version), ::app::Uno::Int__typeof()));

    type->SetFunctions(3,
        ::uNewFunctionVoid("Dispose", List1_Enumerator__Uno_Reflection_CppFunction__Dispose, 0, false),
        ::uNewFunction("get_Current", List1_Enumerator__Uno_Reflection_CppFunction__get_Current, 0, false, ::app::Uno::Reflection::CppFunction__typeof()),
        ::uNewFunction("MoveNext", List1_Enumerator__Uno_Reflection_CppFunction__MoveNext, 0, false, ::app::Uno::Bool__typeof()));

    ::uRegisterType(type);
    return type;
}

void List1_Enumerator__Uno_Reflection_CppFunction___ObjInit(List1_Enumerator__Uno_Reflection_CppFunction* __this, ::app::Uno::Collections::List__Uno_Reflection_CppFunction* source)
{
    __this->_source = source;
    __this->_version = ::uPtr< ::app::Uno::Collections::List__Uno_Reflection_CppFunction*>(source)->_version;
    __this->_iterator = -1;
}

void List1_Enumerator__Uno_Reflection_CppFunction__Dispose(List1_Enumerator__Uno_Reflection_CppFunction* __this)
{
}

::uFunction* List1_Enumerator__Uno_Reflection_CppFunction__get_Current(List1_Enumerator__Uno_Reflection_CppFunction* __this)
{
    return __this->_current;
}

bool List1_Enumerator__Uno_Reflection_CppFunction__MoveNext(List1_Enumerator__Uno_Reflection_CppFunction* __this)
{
    if (::uPtr< ::app::Uno::Collections::List__Uno_Reflection_CppFunction*>(__this->_source)->_version != __this->_version)
    {
        U_THROW(::app::Uno::InvalidOperationException__New_4(NULL, ::uGetConstString("Collection was modified")));
    }

    __this->_iterator++;

    if (__this->_iterator < ::uPtr< ::app::Uno::Collections::List__Uno_Reflection_CppFunction*>(__this->_source)->_used)
    {
        __this->_current = ::uPtr< ::uArray*>(::uPtr< ::app::Uno::Collections::List__Uno_Reflection_CppFunction*>(__this->_source)->_data)->Item< ::uFunction*>(__this->_iterator);
        return true;
    }

    return false;
}

List1_Enumerator__Uno_Reflection_CppFunction List1_Enumerator__Uno_Reflection_CppFunction__New_1(::uStatic* __this, ::app::Uno::Collections::List__Uno_Reflection_CppFunction* source)
{
    List1_Enumerator__Uno_Reflection_CppFunction inst = ::uDefault< List1_Enumerator__Uno_Reflection_CppFunction>();
    inst._ObjInit(source);
    return inst;
}

void List1_Enumerator__Uno_Reflection_CppFunction__Uno_Collections_IEnumerator_Reset(List1_Enumerator__Uno_Reflection_CppFunction* __this)
{
    __this->_iterator = -1;
    __this->_current = ::uDefault< ::uFunction*>();
    __this->_version = ::uPtr< ::app::Uno::Collections::List__Uno_Reflection_CppFunction*>(__this->_source)->_version;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Collections\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

List1_Enumerator__Uno_Runtime_Implementation_Internal_FormatStringToken__uType* List1_Enumerator__Uno_Runtime_Implementation_Internal_FormatStringToken__typeof()
{
    static ::uStaticStrong<List1_Enumerator__Uno_Runtime_Implementation_Internal_FormatStringToken__uType*> type;
    if (type != NULL) return type;

    type = (List1_Enumerator__Uno_Runtime_Implementation_Internal_FormatStringToken__uType*)::uAllocStructType(sizeof(List1_Enumerator__Uno_Runtime_Implementation_Internal_FormatStringToken__uType), "Uno.Collections.List<Uno.Runtime.Implementation.Internal.FormatStringToken>.Enumerator", sizeof(List1_Enumerator__Uno_Runtime_Implementation_Internal_FormatStringToken), 3, 2, 0);

    type->__interface_2.__fp_Reset = (void(*)(void*))List1_Enumerator__Uno_Runtime_Implementation_Internal_FormatStringToken__Uno_Collections_IEnumerator_Reset;
    type->__interface_0.__fp_get_Current = (::app::Uno::Runtime::Implementation::Internal::FormatStringToken*(*)(void*))List1_Enumerator__Uno_Runtime_Implementation_Internal_FormatStringToken__get_Current;
    type->__interface_1.__fp_Dispose = (void(*)(void*))List1_Enumerator__Uno_Runtime_Implementation_Internal_FormatStringToken__Dispose;
    type->__interface_2.__fp_MoveNext = (bool(*)(void*))List1_Enumerator__Uno_Runtime_Implementation_Internal_FormatStringToken__MoveNext;

    type->SetInterfaces(
        ::app::Uno::Collections::IEnumerator__Uno_Runtime_Implementation_Internal_FormatStringToken__typeof(), offsetof(List1_Enumerator__Uno_Runtime_Implementation_Internal_FormatStringToken__uType, __interface_0),
        ::app::Uno::IDisposable__typeof(), offsetof(List1_Enumerator__Uno_Runtime_Implementation_Internal_FormatStringToken__uType, __interface_1),
        ::app::Uno::Collections::IEnumerator__typeof(), offsetof(List1_Enumerator__Uno_Runtime_Implementation_Internal_FormatStringToken__uType, __interface_2));

    type->SetStrongRefs(
        "_current", offsetof(List1_Enumerator__Uno_Runtime_Implementation_Internal_FormatStringToken, _current),
        "_source", offsetof(List1_Enumerator__Uno_Runtime_Implementation_Internal_FormatStringToken, _source));

    type->SetFields(4,
        ::uNewField("_current", NULL, offsetof(List1_Enumerator__Uno_Runtime_Implementation_Internal_FormatStringToken, _current), ::app::Uno::Runtime::Implementation::Internal::FormatStringToken__typeof()),
        ::uNewField("_iterator", NULL, offsetof(List1_Enumerator__Uno_Runtime_Implementation_Internal_FormatStringToken, _iterator), ::app::Uno::Int__typeof()),
        ::uNewField("_source", NULL, offsetof(List1_Enumerator__Uno_Runtime_Implementation_Internal_FormatStringToken, _source), ::app::Uno::Collections::List__Uno_Runtime_Implementation_Internal_FormatStringToken__typeof()),
        ::uNewField("_version", NULL, offsetof(List1_Enumerator__Uno_Runtime_Implementation_Internal_FormatStringToken, _version), ::app::Uno::Int__typeof()));

    type->SetFunctions(3,
        ::uNewFunctionVoid("Dispose", List1_Enumerator__Uno_Runtime_Implementation_Internal_FormatStringToken__Dispose, 0, false),
        ::uNewFunction("get_Current", List1_Enumerator__Uno_Runtime_Implementation_Internal_FormatStringToken__get_Current, 0, false, ::app::Uno::Runtime::Implementation::Internal::FormatStringToken__typeof()),
        ::uNewFunction("MoveNext", List1_Enumerator__Uno_Runtime_Implementation_Internal_FormatStringToken__MoveNext, 0, false, ::app::Uno::Bool__typeof()));

    ::uRegisterType(type);
    return type;
}

void List1_Enumerator__Uno_Runtime_Implementation_Internal_FormatStringToken___ObjInit(List1_Enumerator__Uno_Runtime_Implementation_Internal_FormatStringToken* __this, ::app::Uno::Collections::List__Uno_Runtime_Implementation_Internal_FormatStringToken* source)
{
    __this->_source = source;
    __this->_version = ::uPtr< ::app::Uno::Collections::List__Uno_Runtime_Implementation_Internal_FormatStringToken*>(source)->_version;
    __this->_iterator = -1;
}

void List1_Enumerator__Uno_Runtime_Implementation_Internal_FormatStringToken__Dispose(List1_Enumerator__Uno_Runtime_Implementation_Internal_FormatStringToken* __this)
{
}

::app::Uno::Runtime::Implementation::Internal::FormatStringToken* List1_Enumerator__Uno_Runtime_Implementation_Internal_FormatStringToken__get_Current(List1_Enumerator__Uno_Runtime_Implementation_Internal_FormatStringToken* __this)
{
    return __this->_current;
}

bool List1_Enumerator__Uno_Runtime_Implementation_Internal_FormatStringToken__MoveNext(List1_Enumerator__Uno_Runtime_Implementation_Internal_FormatStringToken* __this)
{
    if (::uPtr< ::app::Uno::Collections::List__Uno_Runtime_Implementation_Internal_FormatStringToken*>(__this->_source)->_version != __this->_version)
    {
        U_THROW(::app::Uno::InvalidOperationException__New_4(NULL, ::uGetConstString("Collection was modified")));
    }

    __this->_iterator++;

    if (__this->_iterator < ::uPtr< ::app::Uno::Collections::List__Uno_Runtime_Implementation_Internal_FormatStringToken*>(__this->_source)->_used)
    {
        __this->_current = ::uPtr< ::uArray*>(::uPtr< ::app::Uno::Collections::List__Uno_Runtime_Implementation_Internal_FormatStringToken*>(__this->_source)->_data)->Item< ::app::Uno::Runtime::Implementation::Internal::FormatStringToken*>(__this->_iterator);
        return true;
    }

    return false;
}

List1_Enumerator__Uno_Runtime_Implementation_Internal_FormatStringToken List1_Enumerator__Uno_Runtime_Implementation_Internal_FormatStringToken__New_1(::uStatic* __this, ::app::Uno::Collections::List__Uno_Runtime_Implementation_Internal_FormatStringToken* source)
{
    List1_Enumerator__Uno_Runtime_Implementation_Internal_FormatStringToken inst = ::uDefault< List1_Enumerator__Uno_Runtime_Implementation_Internal_FormatStringToken>();
    inst._ObjInit(source);
    return inst;
}

void List1_Enumerator__Uno_Runtime_Implementation_Internal_FormatStringToken__Uno_Collections_IEnumerator_Reset(List1_Enumerator__Uno_Runtime_Implementation_Internal_FormatStringToken* __this)
{
    __this->_iterator = -1;
    __this->_current = NULL;
    __this->_version = ::uPtr< ::app::Uno::Collections::List__Uno_Runtime_Implementation_Internal_FormatStringToken*>(__this->_source)->_version;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Collections\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

List1_Enumerator__Uno_UX_FileSource__uType* List1_Enumerator__Uno_UX_FileSource__typeof()
{
    static ::uStaticStrong<List1_Enumerator__Uno_UX_FileSource__uType*> type;
    if (type != NULL) return type;

    type = (List1_Enumerator__Uno_UX_FileSource__uType*)::uAllocStructType(sizeof(List1_Enumerator__Uno_UX_FileSource__uType), "Uno.Collections.List<Uno.UX.FileSource>.Enumerator", sizeof(List1_Enumerator__Uno_UX_FileSource), 3, 2, 0);

    type->__interface_2.__fp_Reset = (void(*)(void*))List1_Enumerator__Uno_UX_FileSource__Uno_Collections_IEnumerator_Reset;
    type->__interface_0.__fp_get_Current = (::app::Uno::UX::FileSource*(*)(void*))List1_Enumerator__Uno_UX_FileSource__get_Current;
    type->__interface_1.__fp_Dispose = (void(*)(void*))List1_Enumerator__Uno_UX_FileSource__Dispose;
    type->__interface_2.__fp_MoveNext = (bool(*)(void*))List1_Enumerator__Uno_UX_FileSource__MoveNext;

    type->SetInterfaces(
        ::app::Uno::Collections::IEnumerator__Uno_UX_FileSource__typeof(), offsetof(List1_Enumerator__Uno_UX_FileSource__uType, __interface_0),
        ::app::Uno::IDisposable__typeof(), offsetof(List1_Enumerator__Uno_UX_FileSource__uType, __interface_1),
        ::app::Uno::Collections::IEnumerator__typeof(), offsetof(List1_Enumerator__Uno_UX_FileSource__uType, __interface_2));

    type->SetStrongRefs(
        "_current", offsetof(List1_Enumerator__Uno_UX_FileSource, _current),
        "_source", offsetof(List1_Enumerator__Uno_UX_FileSource, _source));

    type->SetFields(4,
        ::uNewField("_current", NULL, offsetof(List1_Enumerator__Uno_UX_FileSource, _current), ::app::Uno::UX::FileSource__typeof()),
        ::uNewField("_iterator", NULL, offsetof(List1_Enumerator__Uno_UX_FileSource, _iterator), ::app::Uno::Int__typeof()),
        ::uNewField("_source", NULL, offsetof(List1_Enumerator__Uno_UX_FileSource, _source), ::app::Uno::Collections::List__Uno_UX_FileSource__typeof()),
        ::uNewField("_version", NULL, offsetof(List1_Enumerator__Uno_UX_FileSource, _version), ::app::Uno::Int__typeof()));

    type->SetFunctions(3,
        ::uNewFunctionVoid("Dispose", List1_Enumerator__Uno_UX_FileSource__Dispose, 0, false),
        ::uNewFunction("get_Current", List1_Enumerator__Uno_UX_FileSource__get_Current, 0, false, ::app::Uno::UX::FileSource__typeof()),
        ::uNewFunction("MoveNext", List1_Enumerator__Uno_UX_FileSource__MoveNext, 0, false, ::app::Uno::Bool__typeof()));

    ::uRegisterType(type);
    return type;
}

void List1_Enumerator__Uno_UX_FileSource___ObjInit(List1_Enumerator__Uno_UX_FileSource* __this, ::app::Uno::Collections::List__Uno_UX_FileSource* source)
{
    __this->_source = source;
    __this->_version = ::uPtr< ::app::Uno::Collections::List__Uno_UX_FileSource*>(source)->_version;
    __this->_iterator = -1;
}

void List1_Enumerator__Uno_UX_FileSource__Dispose(List1_Enumerator__Uno_UX_FileSource* __this)
{
}

::app::Uno::UX::FileSource* List1_Enumerator__Uno_UX_FileSource__get_Current(List1_Enumerator__Uno_UX_FileSource* __this)
{
    return __this->_current;
}

bool List1_Enumerator__Uno_UX_FileSource__MoveNext(List1_Enumerator__Uno_UX_FileSource* __this)
{
    if (::uPtr< ::app::Uno::Collections::List__Uno_UX_FileSource*>(__this->_source)->_version != __this->_version)
    {
        U_THROW(::app::Uno::InvalidOperationException__New_4(NULL, ::uGetConstString("Collection was modified")));
    }

    __this->_iterator++;

    if (__this->_iterator < ::uPtr< ::app::Uno::Collections::List__Uno_UX_FileSource*>(__this->_source)->_used)
    {
        __this->_current = ::uPtr< ::uArray*>(::uPtr< ::app::Uno::Collections::List__Uno_UX_FileSource*>(__this->_source)->_data)->Item< ::app::Uno::UX::FileSource*>(__this->_iterator);
        return true;
    }

    return false;
}

List1_Enumerator__Uno_UX_FileSource List1_Enumerator__Uno_UX_FileSource__New_1(::uStatic* __this, ::app::Uno::Collections::List__Uno_UX_FileSource* source)
{
    List1_Enumerator__Uno_UX_FileSource inst = ::uDefault< List1_Enumerator__Uno_UX_FileSource>();
    inst._ObjInit(source);
    return inst;
}

void List1_Enumerator__Uno_UX_FileSource__Uno_Collections_IEnumerator_Reset(List1_Enumerator__Uno_UX_FileSource* __this)
{
    __this->_iterator = -1;
    __this->_current = NULL;
    __this->_version = ::uPtr< ::app::Uno::Collections::List__Uno_UX_FileSource*>(__this->_source)->_version;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Collections\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

List1_Enumerator__Uno_UX_IFactory__uType* List1_Enumerator__Uno_UX_IFactory__typeof()
{
    static ::uStaticStrong<List1_Enumerator__Uno_UX_IFactory__uType*> type;
    if (type != NULL) return type;

    type = (List1_Enumerator__Uno_UX_IFactory__uType*)::uAllocStructType(sizeof(List1_Enumerator__Uno_UX_IFactory__uType), "Uno.Collections.List<Uno.UX.IFactory>.Enumerator", sizeof(List1_Enumerator__Uno_UX_IFactory), 3, 2, 0);

    type->__interface_2.__fp_Reset = (void(*)(void*))List1_Enumerator__Uno_UX_IFactory__Uno_Collections_IEnumerator_Reset;
    type->__interface_0.__fp_get_Current = (::uObject*(*)(void*))List1_Enumerator__Uno_UX_IFactory__get_Current;
    type->__interface_1.__fp_Dispose = (void(*)(void*))List1_Enumerator__Uno_UX_IFactory__Dispose;
    type->__interface_2.__fp_MoveNext = (bool(*)(void*))List1_Enumerator__Uno_UX_IFactory__MoveNext;

    type->SetInterfaces(
        ::app::Uno::Collections::IEnumerator__Uno_UX_IFactory__typeof(), offsetof(List1_Enumerator__Uno_UX_IFactory__uType, __interface_0),
        ::app::Uno::IDisposable__typeof(), offsetof(List1_Enumerator__Uno_UX_IFactory__uType, __interface_1),
        ::app::Uno::Collections::IEnumerator__typeof(), offsetof(List1_Enumerator__Uno_UX_IFactory__uType, __interface_2));

    type->SetStrongRefs(
        "_current", offsetof(List1_Enumerator__Uno_UX_IFactory, _current),
        "_source", offsetof(List1_Enumerator__Uno_UX_IFactory, _source));

    type->SetFields(4,
        ::uNewField("_current", NULL, offsetof(List1_Enumerator__Uno_UX_IFactory, _current), ::app::Uno::UX::IFactory__typeof()),
        ::uNewField("_iterator", NULL, offsetof(List1_Enumerator__Uno_UX_IFactory, _iterator), ::app::Uno::Int__typeof()),
        ::uNewField("_source", NULL, offsetof(List1_Enumerator__Uno_UX_IFactory, _source), ::app::Uno::Collections::List__Uno_UX_IFactory__typeof()),
        ::uNewField("_version", NULL, offsetof(List1_Enumerator__Uno_UX_IFactory, _version), ::app::Uno::Int__typeof()));

    type->SetFunctions(3,
        ::uNewFunctionVoid("Dispose", List1_Enumerator__Uno_UX_IFactory__Dispose, 0, false),
        ::uNewFunction("get_Current", List1_Enumerator__Uno_UX_IFactory__get_Current, 0, false, ::app::Uno::UX::IFactory__typeof()),
        ::uNewFunction("MoveNext", List1_Enumerator__Uno_UX_IFactory__MoveNext, 0, false, ::app::Uno::Bool__typeof()));

    ::uRegisterType(type);
    return type;
}

void List1_Enumerator__Uno_UX_IFactory___ObjInit(List1_Enumerator__Uno_UX_IFactory* __this, ::app::Uno::Collections::List__Uno_UX_IFactory* source)
{
    __this->_source = source;
    __this->_version = ::uPtr< ::app::Uno::Collections::List__Uno_UX_IFactory*>(source)->_version;
    __this->_iterator = -1;
}

void List1_Enumerator__Uno_UX_IFactory__Dispose(List1_Enumerator__Uno_UX_IFactory* __this)
{
}

::uObject* List1_Enumerator__Uno_UX_IFactory__get_Current(List1_Enumerator__Uno_UX_IFactory* __this)
{
    return __this->_current;
}

bool List1_Enumerator__Uno_UX_IFactory__MoveNext(List1_Enumerator__Uno_UX_IFactory* __this)
{
    if (::uPtr< ::app::Uno::Collections::List__Uno_UX_IFactory*>(__this->_source)->_version != __this->_version)
    {
        U_THROW(::app::Uno::InvalidOperationException__New_4(NULL, ::uGetConstString("Collection was modified")));
    }

    __this->_iterator++;

    if (__this->_iterator < ::uPtr< ::app::Uno::Collections::List__Uno_UX_IFactory*>(__this->_source)->_used)
    {
        __this->_current = ::uPtr< ::uArray*>(::uPtr< ::app::Uno::Collections::List__Uno_UX_IFactory*>(__this->_source)->_data)->Item< ::uObject*>(__this->_iterator);
        return true;
    }

    return false;
}

List1_Enumerator__Uno_UX_IFactory List1_Enumerator__Uno_UX_IFactory__New_1(::uStatic* __this, ::app::Uno::Collections::List__Uno_UX_IFactory* source)
{
    List1_Enumerator__Uno_UX_IFactory inst = ::uDefault< List1_Enumerator__Uno_UX_IFactory>();
    inst._ObjInit(source);
    return inst;
}

void List1_Enumerator__Uno_UX_IFactory__Uno_Collections_IEnumerator_Reset(List1_Enumerator__Uno_UX_IFactory* __this)
{
    __this->_iterator = -1;
    __this->_current = NULL;
    __this->_version = ::uPtr< ::app::Uno::Collections::List__Uno_UX_IFactory*>(__this->_source)->_version;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Collections\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

List1_Enumerator__Uno_UX_ITemplate__uType* List1_Enumerator__Uno_UX_ITemplate__typeof()
{
    static ::uStaticStrong<List1_Enumerator__Uno_UX_ITemplate__uType*> type;
    if (type != NULL) return type;

    type = (List1_Enumerator__Uno_UX_ITemplate__uType*)::uAllocStructType(sizeof(List1_Enumerator__Uno_UX_ITemplate__uType), "Uno.Collections.List<Uno.UX.ITemplate>.Enumerator", sizeof(List1_Enumerator__Uno_UX_ITemplate), 3, 2, 0);

    type->__interface_2.__fp_Reset = (void(*)(void*))List1_Enumerator__Uno_UX_ITemplate__Uno_Collections_IEnumerator_Reset;
    type->__interface_0.__fp_get_Current = (::uObject*(*)(void*))List1_Enumerator__Uno_UX_ITemplate__get_Current;
    type->__interface_1.__fp_Dispose = (void(*)(void*))List1_Enumerator__Uno_UX_ITemplate__Dispose;
    type->__interface_2.__fp_MoveNext = (bool(*)(void*))List1_Enumerator__Uno_UX_ITemplate__MoveNext;

    type->SetInterfaces(
        ::app::Uno::Collections::IEnumerator__Uno_UX_ITemplate__typeof(), offsetof(List1_Enumerator__Uno_UX_ITemplate__uType, __interface_0),
        ::app::Uno::IDisposable__typeof(), offsetof(List1_Enumerator__Uno_UX_ITemplate__uType, __interface_1),
        ::app::Uno::Collections::IEnumerator__typeof(), offsetof(List1_Enumerator__Uno_UX_ITemplate__uType, __interface_2));

    type->SetStrongRefs(
        "_current", offsetof(List1_Enumerator__Uno_UX_ITemplate, _current),
        "_source", offsetof(List1_Enumerator__Uno_UX_ITemplate, _source));

    type->SetFields(4,
        ::uNewField("_current", NULL, offsetof(List1_Enumerator__Uno_UX_ITemplate, _current), ::app::Uno::UX::ITemplate__typeof()),
        ::uNewField("_iterator", NULL, offsetof(List1_Enumerator__Uno_UX_ITemplate, _iterator), ::app::Uno::Int__typeof()),
        ::uNewField("_source", NULL, offsetof(List1_Enumerator__Uno_UX_ITemplate, _source), ::app::Uno::Collections::List__Uno_UX_ITemplate__typeof()),
        ::uNewField("_version", NULL, offsetof(List1_Enumerator__Uno_UX_ITemplate, _version), ::app::Uno::Int__typeof()));

    type->SetFunctions(3,
        ::uNewFunctionVoid("Dispose", List1_Enumerator__Uno_UX_ITemplate__Dispose, 0, false),
        ::uNewFunction("get_Current", List1_Enumerator__Uno_UX_ITemplate__get_Current, 0, false, ::app::Uno::UX::ITemplate__typeof()),
        ::uNewFunction("MoveNext", List1_Enumerator__Uno_UX_ITemplate__MoveNext, 0, false, ::app::Uno::Bool__typeof()));

    ::uRegisterType(type);
    return type;
}

void List1_Enumerator__Uno_UX_ITemplate___ObjInit(List1_Enumerator__Uno_UX_ITemplate* __this, ::app::Uno::Collections::List__Uno_UX_ITemplate* source)
{
    __this->_source = source;
    __this->_version = ::uPtr< ::app::Uno::Collections::List__Uno_UX_ITemplate*>(source)->_version;
    __this->_iterator = -1;
}

void List1_Enumerator__Uno_UX_ITemplate__Dispose(List1_Enumerator__Uno_UX_ITemplate* __this)
{
}

::uObject* List1_Enumerator__Uno_UX_ITemplate__get_Current(List1_Enumerator__Uno_UX_ITemplate* __this)
{
    return __this->_current;
}

bool List1_Enumerator__Uno_UX_ITemplate__MoveNext(List1_Enumerator__Uno_UX_ITemplate* __this)
{
    if (::uPtr< ::app::Uno::Collections::List__Uno_UX_ITemplate*>(__this->_source)->_version != __this->_version)
    {
        U_THROW(::app::Uno::InvalidOperationException__New_4(NULL, ::uGetConstString("Collection was modified")));
    }

    __this->_iterator++;

    if (__this->_iterator < ::uPtr< ::app::Uno::Collections::List__Uno_UX_ITemplate*>(__this->_source)->_used)
    {
        __this->_current = ::uPtr< ::uArray*>(::uPtr< ::app::Uno::Collections::List__Uno_UX_ITemplate*>(__this->_source)->_data)->Item< ::uObject*>(__this->_iterator);
        return true;
    }

    return false;
}

List1_Enumerator__Uno_UX_ITemplate List1_Enumerator__Uno_UX_ITemplate__New_1(::uStatic* __this, ::app::Uno::Collections::List__Uno_UX_ITemplate* source)
{
    List1_Enumerator__Uno_UX_ITemplate inst = ::uDefault< List1_Enumerator__Uno_UX_ITemplate>();
    inst._ObjInit(source);
    return inst;
}

void List1_Enumerator__Uno_UX_ITemplate__Uno_Collections_IEnumerator_Reset(List1_Enumerator__Uno_UX_ITemplate* __this)
{
    __this->_iterator = -1;
    __this->_current = NULL;
    __this->_version = ::uPtr< ::app::Uno::Collections::List__Uno_UX_ITemplate*>(__this->_source)->_version;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Collections\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

List1_Enumerator__Uno_UX_Resource__uType* List1_Enumerator__Uno_UX_Resource__typeof()
{
    static ::uStaticStrong<List1_Enumerator__Uno_UX_Resource__uType*> type;
    if (type != NULL) return type;

    type = (List1_Enumerator__Uno_UX_Resource__uType*)::uAllocStructType(sizeof(List1_Enumerator__Uno_UX_Resource__uType), "Uno.Collections.List<Uno.UX.Resource>.Enumerator", sizeof(List1_Enumerator__Uno_UX_Resource), 3, 2, 0);

    type->__interface_2.__fp_Reset = (void(*)(void*))List1_Enumerator__Uno_UX_Resource__Uno_Collections_IEnumerator_Reset;
    type->__interface_0.__fp_get_Current = (::app::Uno::UX::Resource*(*)(void*))List1_Enumerator__Uno_UX_Resource__get_Current;
    type->__interface_1.__fp_Dispose = (void(*)(void*))List1_Enumerator__Uno_UX_Resource__Dispose;
    type->__interface_2.__fp_MoveNext = (bool(*)(void*))List1_Enumerator__Uno_UX_Resource__MoveNext;

    type->SetInterfaces(
        ::app::Uno::Collections::IEnumerator__Uno_UX_Resource__typeof(), offsetof(List1_Enumerator__Uno_UX_Resource__uType, __interface_0),
        ::app::Uno::IDisposable__typeof(), offsetof(List1_Enumerator__Uno_UX_Resource__uType, __interface_1),
        ::app::Uno::Collections::IEnumerator__typeof(), offsetof(List1_Enumerator__Uno_UX_Resource__uType, __interface_2));

    type->SetStrongRefs(
        "_current", offsetof(List1_Enumerator__Uno_UX_Resource, _current),
        "_source", offsetof(List1_Enumerator__Uno_UX_Resource, _source));

    type->SetFields(4,
        ::uNewField("_current", NULL, offsetof(List1_Enumerator__Uno_UX_Resource, _current), ::app::Uno::UX::Resource__typeof()),
        ::uNewField("_iterator", NULL, offsetof(List1_Enumerator__Uno_UX_Resource, _iterator), ::app::Uno::Int__typeof()),
        ::uNewField("_source", NULL, offsetof(List1_Enumerator__Uno_UX_Resource, _source), ::app::Uno::Collections::List__Uno_UX_Resource__typeof()),
        ::uNewField("_version", NULL, offsetof(List1_Enumerator__Uno_UX_Resource, _version), ::app::Uno::Int__typeof()));

    type->SetFunctions(3,
        ::uNewFunctionVoid("Dispose", List1_Enumerator__Uno_UX_Resource__Dispose, 0, false),
        ::uNewFunction("get_Current", List1_Enumerator__Uno_UX_Resource__get_Current, 0, false, ::app::Uno::UX::Resource__typeof()),
        ::uNewFunction("MoveNext", List1_Enumerator__Uno_UX_Resource__MoveNext, 0, false, ::app::Uno::Bool__typeof()));

    ::uRegisterType(type);
    return type;
}

void List1_Enumerator__Uno_UX_Resource___ObjInit(List1_Enumerator__Uno_UX_Resource* __this, ::app::Uno::Collections::List__Uno_UX_Resource* source)
{
    __this->_source = source;
    __this->_version = ::uPtr< ::app::Uno::Collections::List__Uno_UX_Resource*>(source)->_version;
    __this->_iterator = -1;
}

void List1_Enumerator__Uno_UX_Resource__Dispose(List1_Enumerator__Uno_UX_Resource* __this)
{
}

::app::Uno::UX::Resource* List1_Enumerator__Uno_UX_Resource__get_Current(List1_Enumerator__Uno_UX_Resource* __this)
{
    return __this->_current;
}

bool List1_Enumerator__Uno_UX_Resource__MoveNext(List1_Enumerator__Uno_UX_Resource* __this)
{
    if (::uPtr< ::app::Uno::Collections::List__Uno_UX_Resource*>(__this->_source)->_version != __this->_version)
    {
        U_THROW(::app::Uno::InvalidOperationException__New_4(NULL, ::uGetConstString("Collection was modified")));
    }

    __this->_iterator++;

    if (__this->_iterator < ::uPtr< ::app::Uno::Collections::List__Uno_UX_Resource*>(__this->_source)->_used)
    {
        __this->_current = ::uPtr< ::uArray*>(::uPtr< ::app::Uno::Collections::List__Uno_UX_Resource*>(__this->_source)->_data)->Item< ::app::Uno::UX::Resource*>(__this->_iterator);
        return true;
    }

    return false;
}

List1_Enumerator__Uno_UX_Resource List1_Enumerator__Uno_UX_Resource__New_1(::uStatic* __this, ::app::Uno::Collections::List__Uno_UX_Resource* source)
{
    List1_Enumerator__Uno_UX_Resource inst = ::uDefault< List1_Enumerator__Uno_UX_Resource>();
    inst._ObjInit(source);
    return inst;
}

void List1_Enumerator__Uno_UX_Resource__Uno_Collections_IEnumerator_Reset(List1_Enumerator__Uno_UX_Resource* __this)
{
    __this->_iterator = -1;
    __this->_current = NULL;
    __this->_version = ::uPtr< ::app::Uno::Collections::List__Uno_UX_Resource*>(__this->_source)->_version;
}

}}}
