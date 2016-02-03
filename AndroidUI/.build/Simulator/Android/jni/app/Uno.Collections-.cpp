#include <app/Experimental.Cache.DiskCacheEntry.h>
#include <app/Fuse.Animations.Animator.h>
#include <app/Fuse.Animations.IMixerMaster.h>
#include <app/Fuse.Animations.Keyframe.h>
#include <app/Fuse.Animations.MixerHandle__bool.h>
#include <app/Fuse.Animations.MixerHandle__char.h>
#include <app/Fuse.Animations.MixerHandle__double.h>
#include <app/Fuse.Animations.MixerHandle__float.h>
#include <app/Fuse.Animations.MixerHandle__float2.h>
#include <app/Fuse.Animations.MixerHandle__float3.h>
#include <app/Fuse.Animations.MixerHandle__float4.h>
#include <app/Fuse.Animations.MixerHandle__Fuse_Animations_AnimationVariant.h>
#include <app/Fuse.Animations.MixerHandle__Fuse_Animations_Easing.h>
#include <app/Fuse.Animations.MixerHandle__Fuse_Animations_KeyframeInterpolation.h>
#include <app/Fuse.Animations.MixerHandle__Fuse_Animations_MixOp.h>
#include <app/Fuse.Animations.MixerHandle__Fuse_Drawing_BlendMode.h>
#include <app/Fuse.Animations.MixerHandle__Fuse_Drawing_Brush.h>
#include <app/Fuse.Animations.MixerHandle__Fuse_Drawing_DynamicBrush.h>
#include <app/Fuse.Animations.MixerHandle__Fuse_Drawing_GradientStop.h>
#include <app/Fuse.Animations.MixerHandle__Fuse_Drawing_LinearGradient.h>
#include <app/Fuse.Animations.MixerHandle__Fuse_Drawing_SolidColor.h>
#include <app/Fuse.Animations.MixerHandle__Fuse_Drawing_StaticBrush.h>
#include <app/Fuse.Animations.MixerHandle__Fuse_Elements_Alignment.h>
#include <app/Fuse.Animations.MixerHandle__Fuse_Elements_CachingMode.h>
#include <app/Fuse.Animations.MixerHandle__Fuse_Elements_Element.h>
#include <app/Fuse.Animations.MixerHandle__Fuse_Elements_HitTestMode.h>
#include <app/Fuse.Animations.MixerHandle__Fuse_Elements_SizeUnit.h>
#include <app/Fuse.Animations.MixerHandle__Fuse_Elements_StretchDirection.h>
#include <app/Fuse.Animations.MixerHandle__Fuse_Elements_StretchMode.h>
#include <app/Fuse.Animations.MixerHandle__Fuse_Elements_StretchSizing.h>
#include <app/Fuse.Animations.MixerHandle__Fuse_Elements_TextAlignment.h>
#include <app/Fuse.Animations.MixerHandle__Fuse_Elements_TextWrapping.h>
#include <app/Fuse.Animations.MixerHandle__Fuse_Elements_Visibility.h>
#include <app/Fuse.Animations.MixerHandle__Fuse_Font.h>
#include <app/Fuse.Animations.MixerHandle__Fuse_Gestures_Edge.h>
#include <app/Fuse.Animations.MixerHandle__Fuse_Gestures_ScrollDirections.h>
#include <app/Fuse.Animations.MixerHandle__Fuse_Layouts_Dock.h>
#include <app/Fuse.Animations.MixerHandle__Fuse_Layouts_FlowDirection.h>
#include <app/Fuse.Animations.MixerHandle__Fuse_Layouts_Metric.h>
#include <app/Fuse.Animations.MixerHandle__Fuse_Layouts_Orientation.h>
#include <app/Fuse.Animations.MixerHandle__Fuse_Navigation_NavigationDirection.h>
#include <app/Fuse.Animations.MixerHandle__Fuse_Navigation_NavigationEdge.h>
#include <app/Fuse.Animations.MixerHandle__Fuse_Navigation_NavigationGotoMode.h>
#include <app/Fuse.Animations.MixerHandle__Fuse_Navigation_SnapTo.h>
#include <app/Fuse.Animations.MixerHandle__Fuse_Navigation_SwipeDirection.h>
#include <app/Fuse.Animations.MixerHandle__Fuse_Navigation_SwipeEnds.h>
#include <app/Fuse.Animations.MixerHandle__Fuse_Node.h>
#include <app/Fuse.Animations.MixerHandle__Fuse_Resources_ImageSource.h>
#include <app/Fuse.Animations.MixerHandle__Fuse_Transform.h>
#include <app/Fuse.Animations.MixerHandle__Fuse_Triggers_Actions_TriggerDirection.h>
#include <app/Fuse.Animations.MixerHandle__Fuse_Triggers_State.h>
#include <app/Fuse.Animations.MixerHandle__Fuse_Triggers_StateTransition.h>
#include <app/Fuse.Animations.MixerHandle__Fuse_Triggers_TriggerBypassMode.h>
#include <app/Fuse.Animations.MixerHandle__int.h>
#include <app/Fuse.Animations.MixerHandle__int2.h>
#include <app/Fuse.Animations.MixerHandle__int3.h>
#include <app/Fuse.Animations.MixerHandle__int4.h>
#include <app/Fuse.Animations.MixerHandle__long.h>
#include <app/Fuse.Animations.MixerHandle__object.h>
#include <app/Fuse.Animations.MixerHandle__short.h>
#include <app/Fuse.Animations.MixerHandle__string.h>
#include <app/Fuse.Animations.MixerHandle__Uno_EventArgs.h>
#include <app/Fuse.Animations.MixerHandle__Uno_Platform_iOS_StatusBarStyle.h>
#include <app/Fuse.Animations.MixerHandle__Uno_UX_FileSource.h>
#include <app/Fuse.Behavior.h>
#include <app/Fuse.CacheFramebuffer.h>
#include <app/Fuse.Controls.Control.h>
#include <app/Fuse.Controls.Internal.WordWrapperWord.h>
#include <app/Fuse.Controls.Internal.WrappedLine.h>
#include <app/Fuse.Controls.TextEdit.LineCacheLine.h>
#include <app/Fuse.Drawing.Batching.Batch.h>
#include <app/Fuse.Drawing.Batching.Entry.h>
#include <app/Fuse.Drawing.Border.h>
#include <app/Fuse.Drawing.Brush.h>
#include <app/Fuse.Drawing.Contour.h>
#include <app/Fuse.Drawing.GradientStop.h>
#include <app/Fuse.Drawing.Internal.MultiBuffer_Field.h>
#include <app/Fuse.Drawing.PathGeometry.h>
#include <app/Fuse.Drawing.PolygonDrawable.h>
#include <app/Fuse.Drawing.Stroke.h>
#include <app/Fuse.Drawing.Tesselation.Collections.DictNode__Fuse_Drawing_Tes-21490bec.h>
#include <app/Fuse.Drawing.Tesselation.Face.h>
#include <app/Fuse.Drawing.Tesselation.HalfEdge.h>
#include <app/Fuse.Drawing.Tesselation.Vertex.h>
#include <app/Fuse.Effects.Effect.h>
#include <app/Fuse.Elements.Element.h>
#include <app/Fuse.Elements.ElementAtlas.h>
#include <app/Fuse.Elements.ElementBatch.h>
#include <app/Fuse.Elements.ElementBatchEntry.h>
#include <app/Fuse.Elements.IElementBatchDrawable.h>
#include <app/Fuse.Entities.Component.h>
#include <app/Fuse.Entities.Entity.h>
#include <app/Fuse.IFlush.h>
#include <app/Fuse.Input.Capturer.h>
#include <app/Fuse.Input.FocusGainedHandler.h>
#include <app/Fuse.Input.FocusLostHandler.h>
#include <app/Fuse.Input.IsFocusableChangedHandler.h>
#include <app/Fuse.Input.KeyPressedHandler.h>
#include <app/Fuse.Input.KeyReleasedHandler.h>
#include <app/Fuse.Input.Pointer_PELHolder.h>
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
#include <app/Fuse.Reactive.FuseJS.Timer_Time.h>
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
#include <app/Outracks.Simulator.Bytecode.BindVariable.h>
#include <app/Outracks.Simulator.Bytecode.Expression.h>
#include <app/Outracks.Simulator.Bytecode.Parameter.h>
#include <app/Outracks.Simulator.Bytecode.Statement.h>
#include <app/Outracks.Simulator.Bytecode.TypeName.h>
#include <app/Outracks.Simulator.DialogButton.h>
#include <app/Outracks.Simulator.Protocol.ExceptionInfo.h>
#include <app/Outracks.Simulator.Task__Outracks_Simulator_ISimulatorClient.h>
#include <app/Outracks.Simulator.Task__Uno_Net_IPEndPoint__.h>
#include <app/Uno.Action.h>
#include <app/Uno.ArgumentNullException.h>
#include <app/Uno.Bool.h>
#include <app/Uno.Byte.h>
#include <app/Uno.Char.h>
#include <app/Uno.CharPunctuationChecker_PunctuationRange.h>
#include <app/Uno.Collections.Dictionary__Outracks_Simulator_Bytecode_TypeNam-95c49e9b.h>
#include <app/Uno.Collections.Dictionary2_BucketState.h>
#include <app/Uno.Collections.EnumerableExtensions.h>
#include <app/Uno.Collections.EnumerableExtensions_LinkedList__float2.h>
#include <app/Uno.Collections.EnumerableExtensions_LinkedList__float3.h>
#include <app/Uno.Collections.EnumerableExtensions_LinkedList__float4.h>
#include <app/Uno.Collections.EnumerableExtensions_LinkedList__Fuse_Behavior.h>
#include <app/Uno.Collections.EnumerableExtensions_LinkedList__Fuse_Drawing_B-2f12b8b8.h>
#include <app/Uno.Collections.EnumerableExtensions_LinkedList__Fuse_Drawing_Border.h>
#include <app/Uno.Collections.EnumerableExtensions_LinkedList__Fuse_Drawing_Contour.h>
#include <app/Uno.Collections.EnumerableExtensions_LinkedList__Fuse_Drawing_G-9ba4a577.h>
#include <app/Uno.Collections.EnumerableExtensions_LinkedList__Fuse_Drawing_P-b8c5f5fe.h>
#include <app/Uno.Collections.EnumerableExtensions_LinkedList__Outracks_Simul-1468bd04.h>
#include <app/Uno.Collections.EnumerableExtensions_LinkedList__Outracks_Simul-4c6e2f08.h>
#include <app/Uno.Collections.EnumerableExtensions_LinkedList__Outracks_Simul-5223f174.h>
#include <app/Uno.Collections.EnumerableExtensions_LinkedList__Outracks_Simul-b43118f9.h>
#include <app/Uno.Collections.EnumerableExtensions_LinkedList__Outracks_Simul-b9071b0e.h>
#include <app/Uno.Collections.EnumerableExtensions_LinkedList__Outracks_Simul-bed50701.h>
#include <app/Uno.Collections.EnumerableExtensions_LinkedList__Outracks_Simul-cc577328.h>
#include <app/Uno.Collections.EnumerableExtensions_LinkedList__Outracks_Simul-de7a3b36.h>
#include <app/Uno.Collections.EnumerableExtensions_LinkedList__Outracks_Simul-e731453b.h>
#include <app/Uno.Collections.EnumerableExtensions_LinkedList__string.h>
#include <app/Uno.Collections.EnumerableExtensions_LinkedList__Uno_Exception.h>
#include <app/Uno.Collections.EnumerableExtensions_LinkedList__Uno_Net_IPEndPoint.h>
#include <app/Uno.Collections.EnumerableExtensions_LinkedList__Uno_UX_Resource.h>
#include <app/Uno.Collections.ICollection__Fuse_Animations_Animator.h>
#include <app/Uno.Collections.ICollection__Fuse_Animations_Keyframe.h>
#include <app/Uno.Collections.ICollection__Fuse_Behavior.h>
#include <app/Uno.Collections.ICollection__Fuse_Drawing_Brush.h>
#include <app/Uno.Collections.ICollection__Fuse_Drawing_Stroke.h>
#include <app/Uno.Collections.ICollection__Fuse_Effects_Effect.h>
#include <app/Uno.Collections.ICollection__Fuse_Entities_Component.h>
#include <app/Uno.Collections.ICollection__Fuse_Entities_Entity.h>
#include <app/Uno.Collections.ICollection__Fuse_Input_Capturer.h>
#include <app/Uno.Collections.ICollection__Fuse_IViewport.h>
#include <app/Uno.Collections.ICollection__Fuse_Layouts_Column.h>
#include <app/Uno.Collections.ICollection__Fuse_Layouts_Row.h>
#include <app/Uno.Collections.ICollection__Fuse_Navigation_INavigationAnimator.h>
#include <app/Uno.Collections.ICollection__Fuse_Node.h>
#include <app/Uno.Collections.ICollection__Fuse_RenderTargetEntry.h>
#include <app/Uno.Collections.ICollection__Fuse_Resources_ImageSource.h>
#include <app/Uno.Collections.ICollection__Fuse_Style.h>
#include <app/Uno.Collections.ICollection__Fuse_Transform.h>
#include <app/Uno.Collections.ICollection__Fuse_Triggers_Actions_TriggerAction.h>
#include <app/Uno.Collections.ICollection__Fuse_Triggers_State.h>
#include <app/Uno.Collections.ICollection__int4.h>
#include <app/Uno.Collections.ICollection__Uno_Data_Xml_XmlAttribute.h>
#include <app/Uno.Collections.ICollection__Uno_Data_Xml_XmlLinkedNode.h>
#include <app/Uno.Collections.ICollection__Uno_Data_Xml_XmlNodeHandle.h>
#include <app/Uno.Collections.ICollection__Uno_Exception.h>
#include <app/Uno.Collections.ICollection__Uno_Graphics_PolygonFace.h>
#include <app/Uno.Collections.ICollection__Uno_UX_FileSource.h>
#include <app/Uno.Collections.ICollection__Uno_UX_ITemplate.h>
#include <app/Uno.Collections.ICollection__Uno_UX_Resource.h>
#include <app/Uno.Collections.IDictionary__Android_android_view_View__Fuse_Node.h>
#include <app/Uno.Collections.IDictionary__char__float.h>
#include <app/Uno.Collections.IDictionary__char__Uno_Content_Fonts_BitmapFont-c09bf15e.h>
#include <app/Uno.Collections.IDictionary__char__Uno_Content_Fonts_RenderedGlyph.h>
#include <app/Uno.Collections.IDictionary__Experimental_Cache_DiskCacheEntry_-82c34480.h>
#include <app/Uno.Collections.IDictionary__framebuffer__bool.h>
#include <app/Uno.Collections.IDictionary__framebuffer__int.h>
#include <app/Uno.Collections.IDictionary__Fuse_Controls_Internal_DefaultText-a520e463.h>
#include <app/Uno.Collections.IDictionary__Fuse_Drawing_Stroke__Fuse_Drawing_-131b9175.h>
#include <app/Uno.Collections.IDictionary__Fuse_Entities_Material__Uno_Collec-c8cab545.h>
#include <app/Uno.Collections.IDictionary__Fuse_Entities_Mesh__Fuse_Drawing_B-ca494363.h>
#include <app/Uno.Collections.IDictionary__Fuse_Entities_Mesh__Uno_Collection-86b63467.h>
#include <app/Uno.Collections.IDictionary__Fuse_Font__Fuse_Controls_Internal_-7bf742fc.h>
#include <app/Uno.Collections.IDictionary__Fuse_IFlush__bool.h>
#include <app/Uno.Collections.IDictionary__Fuse_Navigation_NavigationEdge__Fu-bd8e916f.h>
#include <app/Uno.Collections.IDictionary__Fuse_Node__bool.h>
#include <app/Uno.Collections.IDictionary__HashableWeakReference__Outracks_Si-aacd5b32.h>
#include <app/Uno.Collections.IDictionary__HashableWeakReference__string.h>
#include <app/Uno.Collections.IDictionary__int__bool.h>
#include <app/Uno.Collections.IDictionary__int__Fuse_Input_Capturer.h>
#include <app/Uno.Collections.IDictionary__int__Fuse_Input_Pointer_PointerRecord.h>
#include <app/Uno.Collections.IDictionary__int__Fuse_Scripting_Callback.h>
#include <app/Uno.Collections.IDictionary__int__int.h>
#include <app/Uno.Collections.IDictionary__int__string.h>
#include <app/Uno.Collections.IDictionary__int__Uno_Collections_IList_Fuse_In-630d356b.h>
#include <app/Uno.Collections.IDictionary__int__Uno_Collections_List_Fuse_Inp-d1e33ebc.h>
#include <app/Uno.Collections.IDictionary__object__object.h>
#include <app/Uno.Collections.IDictionary__object__string.h>
#include <app/Uno.Collections.IDictionary__Outracks_Simulator_Bytecode_TypeNa-24898923.h>
#include <app/Uno.Collections.IDictionary__Outracks_Simulator_Bytecode_TypeNa-6969e92c.h>
#include <app/Uno.Collections.IDictionary__Outracks_Simulator_Bytecode_Variab-26dfce29.h>
#include <app/Uno.Collections.IDictionary__string__Android_android_graphics_Bitmap.h>
#include <app/Uno.Collections.IDictionary__string__Android_android_graphics_Typeface.h>
#include <app/Uno.Collections.IDictionary__string__bool.h>
#include <app/Uno.Collections.IDictionary__string__Experimental_Cache_DiskCacheEntry.h>
#include <app/Uno.Collections.IDictionary__string__Fuse_Shapes_GeometryCacheEntry.h>
#include <app/Uno.Collections.IDictionary__string__int.h>
#include <app/Uno.Collections.IDictionary__string__object.h>
#include <app/Uno.Collections.IDictionary__string__Outracks_Simulator_ByteFileSource.h>
#include <app/Uno.Collections.IDictionary__string__string.h>
#include <app/Uno.Collections.IDictionary__string__Uno_Collections_List_Fuse_-9afb39ae.h>
#include <app/Uno.Collections.IDictionary__string__Uno_Collections_List_object_.h>
#include <app/Uno.Collections.IDictionary__string__Uno_Collections_List_Uno_Action_.h>
#include <app/Uno.Collections.IDictionary__string__Uno_Content_Models_ModelParameter.h>
#include <app/Uno.Collections.IDictionary__string__Uno_Content_Models_VertexA-8feeb01.h>
#include <app/Uno.Collections.IDictionary__string__Uno_Data_Json_Value.h>
#include <app/Uno.Collections.IDictionary__string__Uno_Data_Xml_XmlEncoding.h>
#include <app/Uno.Collections.IDictionary__string__Uno_Runtime_Implementation-6f61baf5.h>
#include <app/Uno.Collections.IDictionary__string__Uno_WeakReference_Fuse_Res-92b437f0.h>
#include <app/Uno.Collections.IDictionary__Uno_Content_Fonts_BitmapFont_CharP-12388e34.h>
#include <app/Uno.Collections.IDictionary__Uno_Type__object.h>
#include <app/Uno.Collections.IDictionary__Uno_Type__Uno_Reflection_CppField__.h>
#include <app/Uno.Collections.IDictionary__Uno_Type__Uno_Reflection_CppFunction__.h>
#include <app/Uno.Collections.IDictionary__Uno_UX_FileSource__Uno_Content_Fon-385d1e83.h>
#include <app/Uno.Collections.IDictionary__Uno_UX_FileSource__Uno_WeakReferen-643b9dd5.h>
#include <app/Uno.Collections.IEnumerable__byte.h>
#include <app/Uno.Collections.IEnumerable__byte__.h>
#include <app/Uno.Collections.IEnumerable__char.h>
#include <app/Uno.Collections.IEnumerable__Experimental_Cache_DiskCacheEntry.h>
#include <app/Uno.Collections.IEnumerable__float2.h>
#include <app/Uno.Collections.IEnumerable__float3.h>
#include <app/Uno.Collections.IEnumerable__float4.h>
#include <app/Uno.Collections.IEnumerable__framebuffer.h>
#include <app/Uno.Collections.IEnumerable__Fuse_Animations_Animator.h>
#include <app/Uno.Collections.IEnumerable__Fuse_Animations_IMixerMaster.h>
#include <app/Uno.Collections.IEnumerable__Fuse_Animations_Keyframe.h>
#include <app/Uno.Collections.IEnumerable__Fuse_Animations_MixerHandle_bool_.h>
#include <app/Uno.Collections.IEnumerable__Fuse_Animations_MixerHandle_char_.h>
#include <app/Uno.Collections.IEnumerable__Fuse_Animations_MixerHandle_double_.h>
#include <app/Uno.Collections.IEnumerable__Fuse_Animations_MixerHandle_float_.h>
#include <app/Uno.Collections.IEnumerable__Fuse_Animations_MixerHandle_float2_.h>
#include <app/Uno.Collections.IEnumerable__Fuse_Animations_MixerHandle_float3_.h>
#include <app/Uno.Collections.IEnumerable__Fuse_Animations_MixerHandle_float4_.h>
#include <app/Uno.Collections.IEnumerable__Fuse_Animations_MixerHandle_Fuse_A-249fc0ca.h>
#include <app/Uno.Collections.IEnumerable__Fuse_Animations_MixerHandle_Fuse_A-26082dfc.h>
#include <app/Uno.Collections.IEnumerable__Fuse_Animations_MixerHandle_Fuse_A-5390ec0e.h>
#include <app/Uno.Collections.IEnumerable__Fuse_Animations_MixerHandle_Fuse_A-83fcebf6.h>
#include <app/Uno.Collections.IEnumerable__Fuse_Animations_MixerHandle_Fuse_D-26b3db8a.h>
#include <app/Uno.Collections.IEnumerable__Fuse_Animations_MixerHandle_Fuse_D-289f8d7e.h>
#include <app/Uno.Collections.IEnumerable__Fuse_Animations_MixerHandle_Fuse_D-4484f798.h>
#include <app/Uno.Collections.IEnumerable__Fuse_Animations_MixerHandle_Fuse_D-6ec08747.h>
#include <app/Uno.Collections.IEnumerable__Fuse_Animations_MixerHandle_Fuse_D-7866b3e4.h>
#include <app/Uno.Collections.IEnumerable__Fuse_Animations_MixerHandle_Fuse_D-90c755d4.h>
#include <app/Uno.Collections.IEnumerable__Fuse_Animations_MixerHandle_Fuse_D-dc3b86e0.h>
#include <app/Uno.Collections.IEnumerable__Fuse_Animations_MixerHandle_Fuse_E-30ffbd8b.h>
#include <app/Uno.Collections.IEnumerable__Fuse_Animations_MixerHandle_Fuse_E-328cb8a9.h>
#include <app/Uno.Collections.IEnumerable__Fuse_Animations_MixerHandle_Fuse_E-3d36e5d7.h>
#include <app/Uno.Collections.IEnumerable__Fuse_Animations_MixerHandle_Fuse_E-4214fa0d.h>
#include <app/Uno.Collections.IEnumerable__Fuse_Animations_MixerHandle_Fuse_E-42f62a0f.h>
#include <app/Uno.Collections.IEnumerable__Fuse_Animations_MixerHandle_Fuse_E-4540c89b.h>
#include <app/Uno.Collections.IEnumerable__Fuse_Animations_MixerHandle_Fuse_E-4ddd6c02.h>
#include <app/Uno.Collections.IEnumerable__Fuse_Animations_MixerHandle_Fuse_E-569c087b.h>
#include <app/Uno.Collections.IEnumerable__Fuse_Animations_MixerHandle_Fuse_E-b62e5291.h>
#include <app/Uno.Collections.IEnumerable__Fuse_Animations_MixerHandle_Fuse_E-cca02c9a.h>
#include <app/Uno.Collections.IEnumerable__Fuse_Animations_MixerHandle_Fuse_E-e54bb317.h>
#include <app/Uno.Collections.IEnumerable__Fuse_Animations_MixerHandle_Fuse_Font_.h>
#include <app/Uno.Collections.IEnumerable__Fuse_Animations_MixerHandle_Fuse_G-b726a16b.h>
#include <app/Uno.Collections.IEnumerable__Fuse_Animations_MixerHandle_Fuse_G-f633f9cc.h>
#include <app/Uno.Collections.IEnumerable__Fuse_Animations_MixerHandle_Fuse_L-4b15a010.h>
#include <app/Uno.Collections.IEnumerable__Fuse_Animations_MixerHandle_Fuse_L-7ff6e40b.h>
#include <app/Uno.Collections.IEnumerable__Fuse_Animations_MixerHandle_Fuse_L-aae5abc5.h>
#include <app/Uno.Collections.IEnumerable__Fuse_Animations_MixerHandle_Fuse_L-cf5aa35c.h>
#include <app/Uno.Collections.IEnumerable__Fuse_Animations_MixerHandle_Fuse_N-23c6d55b.h>
#include <app/Uno.Collections.IEnumerable__Fuse_Animations_MixerHandle_Fuse_N-5a86faaa.h>
#include <app/Uno.Collections.IEnumerable__Fuse_Animations_MixerHandle_Fuse_N-87fda70c.h>
#include <app/Uno.Collections.IEnumerable__Fuse_Animations_MixerHandle_Fuse_N-96a10878.h>
#include <app/Uno.Collections.IEnumerable__Fuse_Animations_MixerHandle_Fuse_N-97d50335.h>
#include <app/Uno.Collections.IEnumerable__Fuse_Animations_MixerHandle_Fuse_N-b62f0913.h>
#include <app/Uno.Collections.IEnumerable__Fuse_Animations_MixerHandle_Fuse_Node_.h>
#include <app/Uno.Collections.IEnumerable__Fuse_Animations_MixerHandle_Fuse_R-775117ec.h>
#include <app/Uno.Collections.IEnumerable__Fuse_Animations_MixerHandle_Fuse_T-2ca2efca.h>
#include <app/Uno.Collections.IEnumerable__Fuse_Animations_MixerHandle_Fuse_T-671002f7.h>
#include <app/Uno.Collections.IEnumerable__Fuse_Animations_MixerHandle_Fuse_T-8bfd8235.h>
#include <app/Uno.Collections.IEnumerable__Fuse_Animations_MixerHandle_Fuse_T-aa109d60.h>
#include <app/Uno.Collections.IEnumerable__Fuse_Animations_MixerHandle_Fuse_Transform_.h>
#include <app/Uno.Collections.IEnumerable__Fuse_Animations_MixerHandle_int_.h>
#include <app/Uno.Collections.IEnumerable__Fuse_Animations_MixerHandle_int2_.h>
#include <app/Uno.Collections.IEnumerable__Fuse_Animations_MixerHandle_int3_.h>
#include <app/Uno.Collections.IEnumerable__Fuse_Animations_MixerHandle_int4_.h>
#include <app/Uno.Collections.IEnumerable__Fuse_Animations_MixerHandle_long_.h>
#include <app/Uno.Collections.IEnumerable__Fuse_Animations_MixerHandle_object_.h>
#include <app/Uno.Collections.IEnumerable__Fuse_Animations_MixerHandle_short_.h>
#include <app/Uno.Collections.IEnumerable__Fuse_Animations_MixerHandle_string_.h>
#include <app/Uno.Collections.IEnumerable__Fuse_Animations_MixerHandle_Uno_EventArgs_.h>
#include <app/Uno.Collections.IEnumerable__Fuse_Animations_MixerHandle_Uno_Pl-e589028a.h>
#include <app/Uno.Collections.IEnumerable__Fuse_Animations_MixerHandle_Uno_UX-7bf18801.h>
#include <app/Uno.Collections.IEnumerable__Fuse_Behavior.h>
#include <app/Uno.Collections.IEnumerable__Fuse_CacheFramebuffer.h>
#include <app/Uno.Collections.IEnumerable__Fuse_Controls_Control.h>
#include <app/Uno.Collections.IEnumerable__Fuse_Controls_Internal_WordWrapperWord.h>
#include <app/Uno.Collections.IEnumerable__Fuse_Controls_Internal_WrappedLine.h>
#include <app/Uno.Collections.IEnumerable__Fuse_Controls_TextEdit_LineCacheLine.h>
#include <app/Uno.Collections.IEnumerable__Fuse_Drawing_Batching_Batch.h>
#include <app/Uno.Collections.IEnumerable__Fuse_Drawing_Batching_Entry.h>
#include <app/Uno.Collections.IEnumerable__Fuse_Drawing_Border.h>
#include <app/Uno.Collections.IEnumerable__Fuse_Drawing_Brush.h>
#include <app/Uno.Collections.IEnumerable__Fuse_Drawing_Contour.h>
#include <app/Uno.Collections.IEnumerable__Fuse_Drawing_GradientStop.h>
#include <app/Uno.Collections.IEnumerable__Fuse_Drawing_Internal_MultiBuffer_Field.h>
#include <app/Uno.Collections.IEnumerable__Fuse_Drawing_PathGeometry.h>
#include <app/Uno.Collections.IEnumerable__Fuse_Drawing_PolygonDrawable.h>
#include <app/Uno.Collections.IEnumerable__Fuse_Drawing_Stroke.h>
#include <app/Uno.Collections.IEnumerable__Fuse_Drawing_Tesselation_ActiveRegion.h>
#include <app/Uno.Collections.IEnumerable__Fuse_Drawing_Tesselation_Collectio-6454955f.h>
#include <app/Uno.Collections.IEnumerable__Fuse_Drawing_Tesselation_Face.h>
#include <app/Uno.Collections.IEnumerable__Fuse_Drawing_Tesselation_HalfEdge.h>
#include <app/Uno.Collections.IEnumerable__Fuse_Drawing_Tesselation_Vertex.h>
#include <app/Uno.Collections.IEnumerable__Fuse_Effects_Effect.h>
#include <app/Uno.Collections.IEnumerable__Fuse_Elements_Element.h>
#include <app/Uno.Collections.IEnumerable__Fuse_Elements_ElementAtlas.h>
#include <app/Uno.Collections.IEnumerable__Fuse_Elements_ElementBatch.h>
#include <app/Uno.Collections.IEnumerable__Fuse_Elements_ElementBatchEntry.h>
#include <app/Uno.Collections.IEnumerable__Fuse_Elements_IElementBatchDrawable.h>
#include <app/Uno.Collections.IEnumerable__Fuse_Entities_Component.h>
#include <app/Uno.Collections.IEnumerable__Fuse_Entities_Entity.h>
#include <app/Uno.Collections.IEnumerable__Fuse_Entities_Entry.h>
#include <app/Uno.Collections.IEnumerable__Fuse_IFlush.h>
#include <app/Uno.Collections.IEnumerable__Fuse_Input_Capturer.h>
#include <app/Uno.Collections.IEnumerable__Fuse_Input_FocusGainedHandler.h>
#include <app/Uno.Collections.IEnumerable__Fuse_Input_FocusLostHandler.h>
#include <app/Uno.Collections.IEnumerable__Fuse_Input_IsFocusableChangedHandler.h>
#include <app/Uno.Collections.IEnumerable__Fuse_Input_KeyPressedHandler.h>
#include <app/Uno.Collections.IEnumerable__Fuse_Input_KeyReleasedHandler.h>
#include <app/Uno.Collections.IEnumerable__Fuse_Input_Pointer_PELHolder.h>
#include <app/Uno.Collections.IEnumerable__Fuse_Input_PointerEnteredHandler.h>
#include <app/Uno.Collections.IEnumerable__Fuse_Input_PointerLeftHandler.h>
#include <app/Uno.Collections.IEnumerable__Fuse_Input_PointerMovedHandler.h>
#include <app/Uno.Collections.IEnumerable__Fuse_Input_PointerPressedHandler.h>
#include <app/Uno.Collections.IEnumerable__Fuse_Input_PointerReleasedHandler.h>
#include <app/Uno.Collections.IEnumerable__Fuse_Input_PointerWheelMovedHandler.h>
#include <app/Uno.Collections.IEnumerable__Fuse_Input_TextEnteredHandler.h>
#include <app/Uno.Collections.IEnumerable__Fuse_iOS_StatusBarConfig.h>
#include <app/Uno.Collections.IEnumerable__Fuse_IViewport.h>
#include <app/Uno.Collections.IEnumerable__Fuse_Layouts_Column.h>
#include <app/Uno.Collections.IEnumerable__Fuse_Layouts_DefinitionBase_ParseDataItem.h>
#include <app/Uno.Collections.IEnumerable__Fuse_Layouts_Row.h>
#include <app/Uno.Collections.IEnumerable__Fuse_Navigation_INavigationAnimator.h>
#include <app/Uno.Collections.IEnumerable__Fuse_Navigation_IPageResourceBinding.h>
#include <app/Uno.Collections.IEnumerable__Fuse_Node.h>
#include <app/Uno.Collections.IEnumerable__Fuse_Physics_Body.h>
#include <app/Uno.Collections.IEnumerable__Fuse_Physics_IRule.h>
#include <app/Uno.Collections.IEnumerable__Fuse_Reactive_Case.h>
#include <app/Uno.Collections.IEnumerable__Fuse_Reactive_FuseJS_Timer_Time.h>
#include <app/Uno.Collections.IEnumerable__Fuse_Reactive_JavaScript.h>
#include <app/Uno.Collections.IEnumerable__Fuse_RenderTargetEntry.h>
#include <app/Uno.Collections.IEnumerable__Fuse_Resources_ImageSource.h>
#include <app/Uno.Collections.IEnumerable__Fuse_Resources_IMemoryResource.h>
#include <app/Uno.Collections.IEnumerable__Fuse_Resources_ISoftDisposable.h>
#include <app/Uno.Collections.IEnumerable__Fuse_Scripting_INameListener.h>
#include <app/Uno.Collections.IEnumerable__Fuse_Scripting_NativeMember.h>
#include <app/Uno.Collections.IEnumerable__Fuse_Stage.h>
#include <app/Uno.Collections.IEnumerable__Fuse_Style.h>
#include <app/Uno.Collections.IEnumerable__Fuse_StyleProperty.h>
#include <app/Uno.Collections.IEnumerable__Fuse_Transform.h>
#include <app/Uno.Collections.IEnumerable__Fuse_Triggers_Actions_TriggerAction.h>
#include <app/Uno.Collections.IEnumerable__Fuse_Triggers_State.h>
#include <app/Uno.Collections.IEnumerable__Fuse_UpdateListener.h>
#include <app/Uno.Collections.IEnumerable__int.h>
#include <app/Uno.Collections.IEnumerable__int4.h>
#include <app/Uno.Collections.IEnumerable__object.h>
#include <app/Uno.Collections.IEnumerable__Outracks_Simulator_Bytecode_BindVariable.h>
#include <app/Uno.Collections.IEnumerable__Outracks_Simulator_Bytecode_Expression.h>
#include <app/Uno.Collections.IEnumerable__Outracks_Simulator_Bytecode_Parameter.h>
#include <app/Uno.Collections.IEnumerable__Outracks_Simulator_Bytecode_Statement.h>
#include <app/Uno.Collections.IEnumerable__Outracks_Simulator_Bytecode_TypeName.h>
#include <app/Uno.Collections.IEnumerable__Outracks_Simulator_DialogButton.h>
#include <app/Uno.Collections.IEnumerable__Outracks_Simulator_Protocol_ExceptionInfo.h>
#include <app/Uno.Collections.IEnumerable__Outracks_Simulator_Task_Outracks_S-7e052b05.h>
#include <app/Uno.Collections.IEnumerable__Outracks_Simulator_Task_Uno_Net_IP-6362cf5f.h>
#include <app/Uno.Collections.IEnumerable__string.h>
#include <app/Uno.Collections.IEnumerable__Uno_Action.h>
#include <app/Uno.Collections.IEnumerable__Uno_CharPunctuationChecker_PunctuationRange.h>
#include <app/Uno.Collections.IEnumerable__Uno_Collections_ConcurrentCollecti-8de4c060.h>
#include <app/Uno.Collections.IEnumerable__Uno_Collections_ConcurrentCollecti-f5c5d4.h>
#include <app/Uno.Collections.IEnumerable__Uno_Collections_Dictionary_Outrack-73bc45f4.h>
#include <app/Uno.Collections.IEnumerable__Uno_Collections_KeyValuePair_Andro-7924d043.h>
#include <app/Uno.Collections.IEnumerable__Uno_Collections_KeyValuePair_char_-4731b191.h>
#include <app/Uno.Collections.IEnumerable__Uno_Collections_KeyValuePair_char_-47548bd3.h>
#include <app/Uno.Collections.IEnumerable__Uno_Collections_KeyValuePair_char_float_.h>
#include <app/Uno.Collections.IEnumerable__Uno_Collections_KeyValuePair_Exper-d8a25931.h>
#include <app/Uno.Collections.IEnumerable__Uno_Collections_KeyValuePair_frame-629de1f5.h>
#include <app/Uno.Collections.IEnumerable__Uno_Collections_KeyValuePair_frame-a40889f8.h>
#include <app/Uno.Collections.IEnumerable__Uno_Collections_KeyValuePair_Fuse_-4a6f14dd.h>
#include <app/Uno.Collections.IEnumerable__Uno_Collections_KeyValuePair_Fuse_-5eb052e2.h>
#include <app/Uno.Collections.IEnumerable__Uno_Collections_KeyValuePair_Fuse_-5ebd483a.h>
#include <app/Uno.Collections.IEnumerable__Uno_Collections_KeyValuePair_Fuse_-8377bc17.h>
#include <app/Uno.Collections.IEnumerable__Uno_Collections_KeyValuePair_Fuse_-9a42b027.h>
#include <app/Uno.Collections.IEnumerable__Uno_Collections_KeyValuePair_Fuse_-c71160fe.h>
#include <app/Uno.Collections.IEnumerable__Uno_Collections_KeyValuePair_Fuse_-d2ddf1a9.h>
#include <app/Uno.Collections.IEnumerable__Uno_Collections_KeyValuePair_Fuse_-ece9a1fa.h>
#include <app/Uno.Collections.IEnumerable__Uno_Collections_KeyValuePair_Fuse_-f8e42f72.h>
#include <app/Uno.Collections.IEnumerable__Uno_Collections_KeyValuePair_Hasha-2efcb1d.h>
#include <app/Uno.Collections.IEnumerable__Uno_Collections_KeyValuePair_Hasha-e238d1dc.h>
#include <app/Uno.Collections.IEnumerable__Uno_Collections_KeyValuePair_int_bool_.h>
#include <app/Uno.Collections.IEnumerable__Uno_Collections_KeyValuePair_int_F-715d2050.h>
#include <app/Uno.Collections.IEnumerable__Uno_Collections_KeyValuePair_int_F-7c4d2954.h>
#include <app/Uno.Collections.IEnumerable__Uno_Collections_KeyValuePair_int_F-9f259204.h>
#include <app/Uno.Collections.IEnumerable__Uno_Collections_KeyValuePair_int_int_.h>
#include <app/Uno.Collections.IEnumerable__Uno_Collections_KeyValuePair_int_string_.h>
#include <app/Uno.Collections.IEnumerable__Uno_Collections_KeyValuePair_int_U-1fad3227.h>
#include <app/Uno.Collections.IEnumerable__Uno_Collections_KeyValuePair_int_U-98a7ec2b.h>
#include <app/Uno.Collections.IEnumerable__Uno_Collections_KeyValuePair_object_object_.h>
#include <app/Uno.Collections.IEnumerable__Uno_Collections_KeyValuePair_object_string_.h>
#include <app/Uno.Collections.IEnumerable__Uno_Collections_KeyValuePair_Outra-2bf9f909.h>
#include <app/Uno.Collections.IEnumerable__Uno_Collections_KeyValuePair_Outra-413ce01f.h>
#include <app/Uno.Collections.IEnumerable__Uno_Collections_KeyValuePair_Outra-b898683d.h>
#include <app/Uno.Collections.IEnumerable__Uno_Collections_KeyValuePair_strin-21b43275.h>
#include <app/Uno.Collections.IEnumerable__Uno_Collections_KeyValuePair_strin-2f167bf1.h>
#include <app/Uno.Collections.IEnumerable__Uno_Collections_KeyValuePair_strin-3ef50b5a.h>
#include <app/Uno.Collections.IEnumerable__Uno_Collections_KeyValuePair_strin-5016a80c.h>
#include <app/Uno.Collections.IEnumerable__Uno_Collections_KeyValuePair_strin-5dc13f49.h>
#include <app/Uno.Collections.IEnumerable__Uno_Collections_KeyValuePair_strin-7ffc3b7a.h>
#include <app/Uno.Collections.IEnumerable__Uno_Collections_KeyValuePair_strin-a11615b.h>
#include <app/Uno.Collections.IEnumerable__Uno_Collections_KeyValuePair_strin-b1ad0eb2.h>
#include <app/Uno.Collections.IEnumerable__Uno_Collections_KeyValuePair_strin-bae64895.h>
#include <app/Uno.Collections.IEnumerable__Uno_Collections_KeyValuePair_strin-c01ed8cf.h>
#include <app/Uno.Collections.IEnumerable__Uno_Collections_KeyValuePair_strin-c2f7248f.h>
#include <app/Uno.Collections.IEnumerable__Uno_Collections_KeyValuePair_strin-d9fcbc62.h>
#include <app/Uno.Collections.IEnumerable__Uno_Collections_KeyValuePair_strin-dd4b5b0b.h>
#include <app/Uno.Collections.IEnumerable__Uno_Collections_KeyValuePair_strin-dfb71e23.h>
#include <app/Uno.Collections.IEnumerable__Uno_Collections_KeyValuePair_string_bool_.h>
#include <app/Uno.Collections.IEnumerable__Uno_Collections_KeyValuePair_string_int_.h>
#include <app/Uno.Collections.IEnumerable__Uno_Collections_KeyValuePair_string_object_.h>
#include <app/Uno.Collections.IEnumerable__Uno_Collections_KeyValuePair_string_string_.h>
#include <app/Uno.Collections.IEnumerable__Uno_Collections_KeyValuePair_Uno_C-709bec3.h>
#include <app/Uno.Collections.IEnumerable__Uno_Collections_KeyValuePair_Uno_T-65ddd6bc.h>
#include <app/Uno.Collections.IEnumerable__Uno_Collections_KeyValuePair_Uno_T-7ef8391e.h>
#include <app/Uno.Collections.IEnumerable__Uno_Collections_KeyValuePair_Uno_T-8dfc36f8.h>
#include <app/Uno.Collections.IEnumerable__Uno_Collections_KeyValuePair_Uno_U-aa45de7.h>
#include <app/Uno.Collections.IEnumerable__Uno_Collections_KeyValuePair_Uno_U-b3bad854.h>
#include <app/Uno.Collections.IEnumerable__Uno_Content_Models_ModelDrawable.h>
#include <app/Uno.Collections.IEnumerable__Uno_Content_Models_ModelMesh.h>
#include <app/Uno.Collections.IEnumerable__Uno_Content_Models_ModelNode.h>
#include <app/Uno.Collections.IEnumerable__Uno_Content_Models_ModelParameter_float4x4_.h>
#include <app/Uno.Collections.IEnumerable__Uno_Content_Models_ModelSkin.h>
#include <app/Uno.Collections.IEnumerable__Uno_Content_Models_SkinBone.h>
#include <app/Uno.Collections.IEnumerable__Uno_Content_Models_SkinDrawable.h>
#include <app/Uno.Collections.IEnumerable__Uno_Content_Models_VertexInfluence.h>
#include <app/Uno.Collections.IEnumerable__Uno_Content_Splines_KeyframedSplin-3a226e87.h>
#include <app/Uno.Collections.IEnumerable__Uno_Content_Splines_KeyframedSplin-6c0b6898.h>
#include <app/Uno.Collections.IEnumerable__Uno_Content_Splines_KeyframedSplin-b44150b8.h>
#include <app/Uno.Collections.IEnumerable__Uno_Content_Splines_KeyframedSplin-bba1dd33.h>
#include <app/Uno.Collections.IEnumerable__Uno_Content_Splines_KeyframedSplin-f2a451ce.h>
#include <app/Uno.Collections.IEnumerable__Uno_Data_Json_Value.h>
#include <app/Uno.Collections.IEnumerable__Uno_Data_Xml_XmlAttribute.h>
#include <app/Uno.Collections.IEnumerable__Uno_Data_Xml_XmlAttributeHandle.h>
#include <app/Uno.Collections.IEnumerable__Uno_Data_Xml_XmlLinkedNode.h>
#include <app/Uno.Collections.IEnumerable__Uno_Data_Xml_XmlNodeHandle.h>
#include <app/Uno.Collections.IEnumerable__Uno_Diagnostics_ProfileEvent.h>
#include <app/Uno.Collections.IEnumerable__Uno_EventHandler.h>
#include <app/Uno.Collections.IEnumerable__Uno_Exception.h>
#include <app/Uno.Collections.IEnumerable__Uno_Geometry_Triangle2D.h>
#include <app/Uno.Collections.IEnumerable__Uno_Graphics_PolygonFace.h>
#include <app/Uno.Collections.IEnumerable__Uno_Net_Http_HttpMessageHandlerRequest.h>
#include <app/Uno.Collections.IEnumerable__Uno_Net_IPEndPoint.h>
#include <app/Uno.Collections.IEnumerable__Uno_Platform_Key.h>
#include <app/Uno.Collections.IEnumerable__Uno_Reflection_CppField.h>
#include <app/Uno.Collections.IEnumerable__Uno_Reflection_CppFunction.h>
#include <app/Uno.Collections.IEnumerable__Uno_Runtime_Implementation_Interna-39c12577.h>
#include <app/Uno.Collections.IEnumerable__Uno_UX_FileSource.h>
#include <app/Uno.Collections.IEnumerable__Uno_UX_IFactory.h>
#include <app/Uno.Collections.IEnumerable__Uno_UX_ITemplate.h>
#include <app/Uno.Collections.IEnumerable__Uno_UX_Resource.h>
#include <app/Uno.Collections.IEnumerator.h>
#include <app/Uno.Collections.IEnumerator__byte.h>
#include <app/Uno.Collections.IEnumerator__byte__.h>
#include <app/Uno.Collections.IEnumerator__char.h>
#include <app/Uno.Collections.IEnumerator__Experimental_Cache_DiskCacheEntry.h>
#include <app/Uno.Collections.IEnumerator__float2.h>
#include <app/Uno.Collections.IEnumerator__float3.h>
#include <app/Uno.Collections.IEnumerator__float4.h>
#include <app/Uno.Collections.IEnumerator__framebuffer.h>
#include <app/Uno.Collections.IEnumerator__Fuse_Animations_Animator.h>
#include <app/Uno.Collections.IEnumerator__Fuse_Animations_IMixerMaster.h>
#include <app/Uno.Collections.IEnumerator__Fuse_Animations_Keyframe.h>
#include <app/Uno.Collections.IEnumerator__Fuse_Animations_MixerHandle_bool_.h>
#include <app/Uno.Collections.IEnumerator__Fuse_Animations_MixerHandle_char_.h>
#include <app/Uno.Collections.IEnumerator__Fuse_Animations_MixerHandle_double_.h>
#include <app/Uno.Collections.IEnumerator__Fuse_Animations_MixerHandle_float_.h>
#include <app/Uno.Collections.IEnumerator__Fuse_Animations_MixerHandle_float2_.h>
#include <app/Uno.Collections.IEnumerator__Fuse_Animations_MixerHandle_float3_.h>
#include <app/Uno.Collections.IEnumerator__Fuse_Animations_MixerHandle_float4_.h>
#include <app/Uno.Collections.IEnumerator__Fuse_Animations_MixerHandle_Fuse_A-20cdfbae.h>
#include <app/Uno.Collections.IEnumerator__Fuse_Animations_MixerHandle_Fuse_A-6353e07c.h>
#include <app/Uno.Collections.IEnumerator__Fuse_Animations_MixerHandle_Fuse_A-8f9f93ac.h>
#include <app/Uno.Collections.IEnumerator__Fuse_Animations_MixerHandle_Fuse_A-aff3378d.h>
#include <app/Uno.Collections.IEnumerator__Fuse_Animations_MixerHandle_Fuse_D-2b7bb45b.h>
#include <app/Uno.Collections.IEnumerator__Fuse_Animations_MixerHandle_Fuse_D-5de458de.h>
#include <app/Uno.Collections.IEnumerator__Fuse_Animations_MixerHandle_Fuse_D-79f7a53d.h>
#include <app/Uno.Collections.IEnumerator__Fuse_Animations_MixerHandle_Fuse_D-d521c5db.h>
#include <app/Uno.Collections.IEnumerator__Fuse_Animations_MixerHandle_Fuse_D-e22ae549.h>
#include <app/Uno.Collections.IEnumerator__Fuse_Animations_MixerHandle_Fuse_D-e6102d54.h>
#include <app/Uno.Collections.IEnumerator__Fuse_Animations_MixerHandle_Fuse_D-fc73587b.h>
#include <app/Uno.Collections.IEnumerator__Fuse_Animations_MixerHandle_Fuse_E-171b0acb.h>
#include <app/Uno.Collections.IEnumerator__Fuse_Animations_MixerHandle_Fuse_E-1c52616b.h>
#include <app/Uno.Collections.IEnumerator__Fuse_Animations_MixerHandle_Fuse_E-233c7341.h>
#include <app/Uno.Collections.IEnumerator__Fuse_Animations_MixerHandle_Fuse_E-2bd15cb5.h>
#include <app/Uno.Collections.IEnumerator__Fuse_Animations_MixerHandle_Fuse_E-373c4615.h>
#include <app/Uno.Collections.IEnumerator__Fuse_Animations_MixerHandle_Fuse_E-49b2d237.h>
#include <app/Uno.Collections.IEnumerator__Fuse_Animations_MixerHandle_Fuse_E-9558d0dd.h>
#include <app/Uno.Collections.IEnumerator__Fuse_Animations_MixerHandle_Fuse_E-9d121238.h>
#include <app/Uno.Collections.IEnumerator__Fuse_Animations_MixerHandle_Fuse_E-a5a32339.h>
#include <app/Uno.Collections.IEnumerator__Fuse_Animations_MixerHandle_Fuse_E-ab4d9ede.h>
#include <app/Uno.Collections.IEnumerator__Fuse_Animations_MixerHandle_Fuse_E-ac3ba9d3.h>
#include <app/Uno.Collections.IEnumerator__Fuse_Animations_MixerHandle_Fuse_Font_.h>
#include <app/Uno.Collections.IEnumerator__Fuse_Animations_MixerHandle_Fuse_G-6374a15e.h>
#include <app/Uno.Collections.IEnumerator__Fuse_Animations_MixerHandle_Fuse_G-bc18922b.h>
#include <app/Uno.Collections.IEnumerator__Fuse_Animations_MixerHandle_Fuse_L-11bf21e.h>
#include <app/Uno.Collections.IEnumerator__Fuse_Animations_MixerHandle_Fuse_L-89ed9177.h>
#include <app/Uno.Collections.IEnumerator__Fuse_Animations_MixerHandle_Fuse_L-9f7d6395.h>
#include <app/Uno.Collections.IEnumerator__Fuse_Animations_MixerHandle_Fuse_L-dfb7cbaa.h>
#include <app/Uno.Collections.IEnumerator__Fuse_Animations_MixerHandle_Fuse_N-1c7bf95a.h>
#include <app/Uno.Collections.IEnumerator__Fuse_Animations_MixerHandle_Fuse_N-209136d6.h>
#include <app/Uno.Collections.IEnumerator__Fuse_Animations_MixerHandle_Fuse_N-514756ff.h>
#include <app/Uno.Collections.IEnumerator__Fuse_Animations_MixerHandle_Fuse_N-be20af5.h>
#include <app/Uno.Collections.IEnumerator__Fuse_Animations_MixerHandle_Fuse_N-ca3f3972.h>
#include <app/Uno.Collections.IEnumerator__Fuse_Animations_MixerHandle_Fuse_N-cf05b355.h>
#include <app/Uno.Collections.IEnumerator__Fuse_Animations_MixerHandle_Fuse_Node_.h>
#include <app/Uno.Collections.IEnumerator__Fuse_Animations_MixerHandle_Fuse_R-95fec26e.h>
#include <app/Uno.Collections.IEnumerator__Fuse_Animations_MixerHandle_Fuse_T-335c594e.h>
#include <app/Uno.Collections.IEnumerator__Fuse_Animations_MixerHandle_Fuse_T-45d6ddf8.h>
#include <app/Uno.Collections.IEnumerator__Fuse_Animations_MixerHandle_Fuse_T-e6118f16.h>
#include <app/Uno.Collections.IEnumerator__Fuse_Animations_MixerHandle_Fuse_T-f29074da.h>
#include <app/Uno.Collections.IEnumerator__Fuse_Animations_MixerHandle_Fuse_Transform_.h>
#include <app/Uno.Collections.IEnumerator__Fuse_Animations_MixerHandle_int_.h>
#include <app/Uno.Collections.IEnumerator__Fuse_Animations_MixerHandle_int2_.h>
#include <app/Uno.Collections.IEnumerator__Fuse_Animations_MixerHandle_int3_.h>
#include <app/Uno.Collections.IEnumerator__Fuse_Animations_MixerHandle_int4_.h>
#include <app/Uno.Collections.IEnumerator__Fuse_Animations_MixerHandle_long_.h>
#include <app/Uno.Collections.IEnumerator__Fuse_Animations_MixerHandle_object_.h>
#include <app/Uno.Collections.IEnumerator__Fuse_Animations_MixerHandle_short_.h>
#include <app/Uno.Collections.IEnumerator__Fuse_Animations_MixerHandle_string_.h>
#include <app/Uno.Collections.IEnumerator__Fuse_Animations_MixerHandle_Uno_EventArgs_.h>
#include <app/Uno.Collections.IEnumerator__Fuse_Animations_MixerHandle_Uno_Pl-5087d200.h>
#include <app/Uno.Collections.IEnumerator__Fuse_Animations_MixerHandle_Uno_UX-6a48e784.h>
#include <app/Uno.Collections.IEnumerator__Fuse_Behavior.h>
#include <app/Uno.Collections.IEnumerator__Fuse_CacheFramebuffer.h>
#include <app/Uno.Collections.IEnumerator__Fuse_Controls_Control.h>
#include <app/Uno.Collections.IEnumerator__Fuse_Controls_Internal_WordWrapperWord.h>
#include <app/Uno.Collections.IEnumerator__Fuse_Controls_Internal_WrappedLine.h>
#include <app/Uno.Collections.IEnumerator__Fuse_Controls_TextEdit_LineCacheLine.h>
#include <app/Uno.Collections.IEnumerator__Fuse_Drawing_Batching_Batch.h>
#include <app/Uno.Collections.IEnumerator__Fuse_Drawing_Batching_Entry.h>
#include <app/Uno.Collections.IEnumerator__Fuse_Drawing_Border.h>
#include <app/Uno.Collections.IEnumerator__Fuse_Drawing_Brush.h>
#include <app/Uno.Collections.IEnumerator__Fuse_Drawing_Contour.h>
#include <app/Uno.Collections.IEnumerator__Fuse_Drawing_GradientStop.h>
#include <app/Uno.Collections.IEnumerator__Fuse_Drawing_Internal_MultiBuffer_Field.h>
#include <app/Uno.Collections.IEnumerator__Fuse_Drawing_PathGeometry.h>
#include <app/Uno.Collections.IEnumerator__Fuse_Drawing_PolygonDrawable.h>
#include <app/Uno.Collections.IEnumerator__Fuse_Drawing_Stroke.h>
#include <app/Uno.Collections.IEnumerator__Fuse_Drawing_Tesselation_ActiveRegion.h>
#include <app/Uno.Collections.IEnumerator__Fuse_Drawing_Tesselation_Collectio-2ec48932.h>
#include <app/Uno.Collections.IEnumerator__Fuse_Drawing_Tesselation_Face.h>
#include <app/Uno.Collections.IEnumerator__Fuse_Drawing_Tesselation_HalfEdge.h>
#include <app/Uno.Collections.IEnumerator__Fuse_Drawing_Tesselation_Vertex.h>
#include <app/Uno.Collections.IEnumerator__Fuse_Effects_Effect.h>
#include <app/Uno.Collections.IEnumerator__Fuse_Elements_Element.h>
#include <app/Uno.Collections.IEnumerator__Fuse_Elements_ElementAtlas.h>
#include <app/Uno.Collections.IEnumerator__Fuse_Elements_ElementAtlasFramebuf-4dfd1081.h>
#include <app/Uno.Collections.IEnumerator__Fuse_Elements_ElementBatch.h>
#include <app/Uno.Collections.IEnumerator__Fuse_Elements_ElementBatchEntry.h>
#include <app/Uno.Collections.IEnumerator__Fuse_Elements_IElementBatchDrawable.h>
#include <app/Uno.Collections.IEnumerator__Fuse_Entities_Component.h>
#include <app/Uno.Collections.IEnumerator__Fuse_Entities_Entity.h>
#include <app/Uno.Collections.IEnumerator__Fuse_Entities_Entry.h>
#include <app/Uno.Collections.IEnumerator__Fuse_IFlush.h>
#include <app/Uno.Collections.IEnumerator__Fuse_Input_Capturer.h>
#include <app/Uno.Collections.IEnumerator__Fuse_Input_FocusGainedHandler.h>
#include <app/Uno.Collections.IEnumerator__Fuse_Input_FocusLostHandler.h>
#include <app/Uno.Collections.IEnumerator__Fuse_Input_IsFocusableChangedHandler.h>
#include <app/Uno.Collections.IEnumerator__Fuse_Input_KeyPressedHandler.h>
#include <app/Uno.Collections.IEnumerator__Fuse_Input_KeyReleasedHandler.h>
#include <app/Uno.Collections.IEnumerator__Fuse_Input_Pointer_PELHolder.h>
#include <app/Uno.Collections.IEnumerator__Fuse_Input_PointerEnteredHandler.h>
#include <app/Uno.Collections.IEnumerator__Fuse_Input_PointerLeftHandler.h>
#include <app/Uno.Collections.IEnumerator__Fuse_Input_PointerMovedHandler.h>
#include <app/Uno.Collections.IEnumerator__Fuse_Input_PointerPressedHandler.h>
#include <app/Uno.Collections.IEnumerator__Fuse_Input_PointerReleasedHandler.h>
#include <app/Uno.Collections.IEnumerator__Fuse_Input_PointerWheelMovedHandler.h>
#include <app/Uno.Collections.IEnumerator__Fuse_Input_TextEnteredHandler.h>
#include <app/Uno.Collections.IEnumerator__Fuse_iOS_StatusBarConfig.h>
#include <app/Uno.Collections.IEnumerator__Fuse_IViewport.h>
#include <app/Uno.Collections.IEnumerator__Fuse_Layouts_Column.h>
#include <app/Uno.Collections.IEnumerator__Fuse_Layouts_DefinitionBase_ParseDataItem.h>
#include <app/Uno.Collections.IEnumerator__Fuse_Layouts_Row.h>
#include <app/Uno.Collections.IEnumerator__Fuse_Navigation_INavigationAnimator.h>
#include <app/Uno.Collections.IEnumerator__Fuse_Navigation_IPageResourceBinding.h>
#include <app/Uno.Collections.IEnumerator__Fuse_Node.h>
#include <app/Uno.Collections.IEnumerator__Fuse_Physics_Body.h>
#include <app/Uno.Collections.IEnumerator__Fuse_Physics_IRule.h>
#include <app/Uno.Collections.IEnumerator__Fuse_Reactive_Case.h>
#include <app/Uno.Collections.IEnumerator__Fuse_Reactive_FuseJS_Timer_Time.h>
#include <app/Uno.Collections.IEnumerator__Fuse_Reactive_JavaScript.h>
#include <app/Uno.Collections.IEnumerator__Fuse_RenderTargetEntry.h>
#include <app/Uno.Collections.IEnumerator__Fuse_Resources_ImageSource.h>
#include <app/Uno.Collections.IEnumerator__Fuse_Resources_IMemoryResource.h>
#include <app/Uno.Collections.IEnumerator__Fuse_Resources_ISoftDisposable.h>
#include <app/Uno.Collections.IEnumerator__Fuse_Scripting_INameListener.h>
#include <app/Uno.Collections.IEnumerator__Fuse_Scripting_NativeMember.h>
#include <app/Uno.Collections.IEnumerator__Fuse_Stage.h>
#include <app/Uno.Collections.IEnumerator__Fuse_Style.h>
#include <app/Uno.Collections.IEnumerator__Fuse_StyleProperty.h>
#include <app/Uno.Collections.IEnumerator__Fuse_Transform.h>
#include <app/Uno.Collections.IEnumerator__Fuse_Triggers_Actions_TriggerAction.h>
#include <app/Uno.Collections.IEnumerator__Fuse_Triggers_State.h>
#include <app/Uno.Collections.IEnumerator__Fuse_UpdateListener.h>
#include <app/Uno.Collections.IEnumerator__int.h>
#include <app/Uno.Collections.IEnumerator__int4.h>
#include <app/Uno.Collections.IEnumerator__object.h>
#include <app/Uno.Collections.IEnumerator__Outracks_Simulator_Bytecode_BindVariable.h>
#include <app/Uno.Collections.IEnumerator__Outracks_Simulator_Bytecode_Expression.h>
#include <app/Uno.Collections.IEnumerator__Outracks_Simulator_Bytecode_Parameter.h>
#include <app/Uno.Collections.IEnumerator__Outracks_Simulator_Bytecode_Statement.h>
#include <app/Uno.Collections.IEnumerator__Outracks_Simulator_Bytecode_TypeName.h>
#include <app/Uno.Collections.IEnumerator__Outracks_Simulator_DialogButton.h>
#include <app/Uno.Collections.IEnumerator__Outracks_Simulator_Protocol_ExceptionInfo.h>
#include <app/Uno.Collections.IEnumerator__Outracks_Simulator_Task_Outracks_S-51bc72a7.h>
#include <app/Uno.Collections.IEnumerator__Outracks_Simulator_Task_Uno_Net_IP-51d80b77.h>
#include <app/Uno.Collections.IEnumerator__string.h>
#include <app/Uno.Collections.IEnumerator__Uno_Action.h>
#include <app/Uno.Collections.IEnumerator__Uno_CharPunctuationChecker_PunctuationRange.h>
#include <app/Uno.Collections.IEnumerator__Uno_Collections_ConcurrentCollecti-4e4ef92.h>
#include <app/Uno.Collections.IEnumerator__Uno_Collections_ConcurrentCollecti-62da0c27.h>
#include <app/Uno.Collections.IEnumerator__Uno_Collections_Dictionary_Outrack-73508a70.h>
#include <app/Uno.Collections.IEnumerator__Uno_Collections_KeyValuePair_Andro-4cc6590c.h>
#include <app/Uno.Collections.IEnumerator__Uno_Collections_KeyValuePair_char_-71761d10.h>
#include <app/Uno.Collections.IEnumerator__Uno_Collections_KeyValuePair_char_-ec294ac4.h>
#include <app/Uno.Collections.IEnumerator__Uno_Collections_KeyValuePair_char_float_.h>
#include <app/Uno.Collections.IEnumerator__Uno_Collections_KeyValuePair_Exper-c5c7367.h>
#include <app/Uno.Collections.IEnumerator__Uno_Collections_KeyValuePair_frame-8bc68d90.h>
#include <app/Uno.Collections.IEnumerator__Uno_Collections_KeyValuePair_frame-d0a7a45b.h>
#include <app/Uno.Collections.IEnumerator__Uno_Collections_KeyValuePair_Fuse_-15576255.h>
#include <app/Uno.Collections.IEnumerator__Uno_Collections_KeyValuePair_Fuse_-2ed3ca1c.h>
#include <app/Uno.Collections.IEnumerator__Uno_Collections_KeyValuePair_Fuse_-341d12e2.h>
#include <app/Uno.Collections.IEnumerator__Uno_Collections_KeyValuePair_Fuse_-38717bf0.h>
#include <app/Uno.Collections.IEnumerator__Uno_Collections_KeyValuePair_Fuse_-438a4894.h>
#include <app/Uno.Collections.IEnumerator__Uno_Collections_KeyValuePair_Fuse_-4ccadabf.h>
#include <app/Uno.Collections.IEnumerator__Uno_Collections_KeyValuePair_Fuse_-b295d630.h>
#include <app/Uno.Collections.IEnumerator__Uno_Collections_KeyValuePair_Fuse_-d17eb516.h>
#include <app/Uno.Collections.IEnumerator__Uno_Collections_KeyValuePair_Fuse_-ffee88e1.h>
#include <app/Uno.Collections.IEnumerator__Uno_Collections_KeyValuePair_Hasha-429a6cf.h>
#include <app/Uno.Collections.IEnumerator__Uno_Collections_KeyValuePair_Hasha-f4e3b97a.h>
#include <app/Uno.Collections.IEnumerator__Uno_Collections_KeyValuePair_int_bool_.h>
#include <app/Uno.Collections.IEnumerator__Uno_Collections_KeyValuePair_int_F-1264c9c5.h>
#include <app/Uno.Collections.IEnumerator__Uno_Collections_KeyValuePair_int_F-781fa870.h>
#include <app/Uno.Collections.IEnumerator__Uno_Collections_KeyValuePair_int_F-c697c727.h>
#include <app/Uno.Collections.IEnumerator__Uno_Collections_KeyValuePair_int_int_.h>
#include <app/Uno.Collections.IEnumerator__Uno_Collections_KeyValuePair_int_string_.h>
#include <app/Uno.Collections.IEnumerator__Uno_Collections_KeyValuePair_int_U-47ec93a2.h>
#include <app/Uno.Collections.IEnumerator__Uno_Collections_KeyValuePair_int_U-9be16414.h>
#include <app/Uno.Collections.IEnumerator__Uno_Collections_KeyValuePair_object_object_.h>
#include <app/Uno.Collections.IEnumerator__Uno_Collections_KeyValuePair_object_string_.h>
#include <app/Uno.Collections.IEnumerator__Uno_Collections_KeyValuePair_Outra-98dfff41.h>
#include <app/Uno.Collections.IEnumerator__Uno_Collections_KeyValuePair_Outra-aa62f92f.h>
#include <app/Uno.Collections.IEnumerator__Uno_Collections_KeyValuePair_Outra-bb82fad0.h>
#include <app/Uno.Collections.IEnumerator__Uno_Collections_KeyValuePair_strin-1ae5a232.h>
#include <app/Uno.Collections.IEnumerator__Uno_Collections_KeyValuePair_strin-2373d96e.h>
#include <app/Uno.Collections.IEnumerator__Uno_Collections_KeyValuePair_strin-4307c61f.h>
#include <app/Uno.Collections.IEnumerator__Uno_Collections_KeyValuePair_strin-47e5efc1.h>
#include <app/Uno.Collections.IEnumerator__Uno_Collections_KeyValuePair_strin-5b0e278e.h>
#include <app/Uno.Collections.IEnumerator__Uno_Collections_KeyValuePair_strin-781fb800.h>
#include <app/Uno.Collections.IEnumerator__Uno_Collections_KeyValuePair_strin-a0b7d834.h>
#include <app/Uno.Collections.IEnumerator__Uno_Collections_KeyValuePair_strin-ad6e3336.h>
#include <app/Uno.Collections.IEnumerator__Uno_Collections_KeyValuePair_strin-b720c384.h>
#include <app/Uno.Collections.IEnumerator__Uno_Collections_KeyValuePair_strin-c4af8f4.h>
#include <app/Uno.Collections.IEnumerator__Uno_Collections_KeyValuePair_strin-d59f9fc.h>
#include <app/Uno.Collections.IEnumerator__Uno_Collections_KeyValuePair_strin-d9f4a565.h>
#include <app/Uno.Collections.IEnumerator__Uno_Collections_KeyValuePair_strin-e39dfac.h>
#include <app/Uno.Collections.IEnumerator__Uno_Collections_KeyValuePair_strin-f548fa01.h>
#include <app/Uno.Collections.IEnumerator__Uno_Collections_KeyValuePair_string_bool_.h>
#include <app/Uno.Collections.IEnumerator__Uno_Collections_KeyValuePair_string_int_.h>
#include <app/Uno.Collections.IEnumerator__Uno_Collections_KeyValuePair_string_object_.h>
#include <app/Uno.Collections.IEnumerator__Uno_Collections_KeyValuePair_string_string_.h>
#include <app/Uno.Collections.IEnumerator__Uno_Collections_KeyValuePair_Uno_C-f02f9125.h>
#include <app/Uno.Collections.IEnumerator__Uno_Collections_KeyValuePair_Uno_T-2408237e.h>
#include <app/Uno.Collections.IEnumerator__Uno_Collections_KeyValuePair_Uno_T-4445abfd.h>
#include <app/Uno.Collections.IEnumerator__Uno_Collections_KeyValuePair_Uno_T-ca462506.h>
#include <app/Uno.Collections.IEnumerator__Uno_Collections_KeyValuePair_Uno_U-38b04b60.h>
#include <app/Uno.Collections.IEnumerator__Uno_Collections_KeyValuePair_Uno_U-bf697a87.h>
#include <app/Uno.Collections.IEnumerator__Uno_Content_Models_ModelDrawable.h>
#include <app/Uno.Collections.IEnumerator__Uno_Content_Models_ModelMesh.h>
#include <app/Uno.Collections.IEnumerator__Uno_Content_Models_ModelNode.h>
#include <app/Uno.Collections.IEnumerator__Uno_Content_Models_ModelParameter_float4x4_.h>
#include <app/Uno.Collections.IEnumerator__Uno_Content_Models_ModelSkin.h>
#include <app/Uno.Collections.IEnumerator__Uno_Content_Models_SkinBone.h>
#include <app/Uno.Collections.IEnumerator__Uno_Content_Models_SkinDrawable.h>
#include <app/Uno.Collections.IEnumerator__Uno_Content_Models_VertexInfluence.h>
#include <app/Uno.Collections.IEnumerator__Uno_Content_Splines_KeyframedSplin-1bd22fa2.h>
#include <app/Uno.Collections.IEnumerator__Uno_Content_Splines_KeyframedSplin-6b046d0c.h>
#include <app/Uno.Collections.IEnumerator__Uno_Content_Splines_KeyframedSplin-de50e1a7.h>
#include <app/Uno.Collections.IEnumerator__Uno_Content_Splines_KeyframedSplin-e11d5895.h>
#include <app/Uno.Collections.IEnumerator__Uno_Content_Splines_KeyframedSplin-ec9d5642.h>
#include <app/Uno.Collections.IEnumerator__Uno_Data_Json_Value.h>
#include <app/Uno.Collections.IEnumerator__Uno_Data_Xml_XmlAttribute.h>
#include <app/Uno.Collections.IEnumerator__Uno_Data_Xml_XmlAttributeHandle.h>
#include <app/Uno.Collections.IEnumerator__Uno_Data_Xml_XmlLinkedNode.h>
#include <app/Uno.Collections.IEnumerator__Uno_Data_Xml_XmlNodeHandle.h>
#include <app/Uno.Collections.IEnumerator__Uno_Diagnostics_ProfileEvent.h>
#include <app/Uno.Collections.IEnumerator__Uno_EventHandler.h>
#include <app/Uno.Collections.IEnumerator__Uno_Exception.h>
#include <app/Uno.Collections.IEnumerator__Uno_Geometry_Triangle2D.h>
#include <app/Uno.Collections.IEnumerator__Uno_Graphics_PolygonFace.h>
#include <app/Uno.Collections.IEnumerator__Uno_Net_Http_HttpMessageHandlerRequest.h>
#include <app/Uno.Collections.IEnumerator__Uno_Net_IPEndPoint.h>
#include <app/Uno.Collections.IEnumerator__Uno_Platform_Key.h>
#include <app/Uno.Collections.IEnumerator__Uno_Reflection_CppField.h>
#include <app/Uno.Collections.IEnumerator__Uno_Reflection_CppFunction.h>
#include <app/Uno.Collections.IEnumerator__Uno_Runtime_Implementation_Interna-7482e939.h>
#include <app/Uno.Collections.IEnumerator__Uno_UX_FileSource.h>
#include <app/Uno.Collections.IEnumerator__Uno_UX_IFactory.h>
#include <app/Uno.Collections.IEnumerator__Uno_UX_ITemplate.h>
#include <app/Uno.Collections.IEnumerator__Uno_UX_Resource.h>
#include <app/Uno.Collections.IList__Experimental_Cache_DiskCacheEntry.h>
#include <app/Uno.Collections.IList__float2.h>
#include <app/Uno.Collections.IList__Fuse_Animations_Animator.h>
#include <app/Uno.Collections.IList__Fuse_Animations_Keyframe.h>
#include <app/Uno.Collections.IList__Fuse_Behavior.h>
#include <app/Uno.Collections.IList__Fuse_Drawing_Brush.h>
#include <app/Uno.Collections.IList__Fuse_Drawing_GradientStop.h>
#include <app/Uno.Collections.IList__Fuse_Drawing_Stroke.h>
#include <app/Uno.Collections.IList__Fuse_Effects_Effect.h>
#include <app/Uno.Collections.IList__Fuse_Entities_Component.h>
#include <app/Uno.Collections.IList__Fuse_Entities_Entity.h>
#include <app/Uno.Collections.IList__Fuse_Input_Capturer.h>
#include <app/Uno.Collections.IList__Fuse_IViewport.h>
#include <app/Uno.Collections.IList__Fuse_Layouts_Column.h>
#include <app/Uno.Collections.IList__Fuse_Layouts_DefinitionBase_ParseDataItem.h>
#include <app/Uno.Collections.IList__Fuse_Layouts_Row.h>
#include <app/Uno.Collections.IList__Fuse_Navigation_INavigationAnimator.h>
#include <app/Uno.Collections.IList__Fuse_Node.h>
#include <app/Uno.Collections.IList__Fuse_Reactive_Case.h>
#include <app/Uno.Collections.IList__Fuse_RenderTargetEntry.h>
#include <app/Uno.Collections.IList__Fuse_Resources_ImageSource.h>
#include <app/Uno.Collections.IList__Fuse_Style.h>
#include <app/Uno.Collections.IList__Fuse_Transform.h>
#include <app/Uno.Collections.IList__Fuse_Triggers_Actions_TriggerAction.h>
#include <app/Uno.Collections.IList__Fuse_Triggers_State.h>
#include <app/Uno.Collections.IList__int4.h>
#include <app/Uno.Collections.IList__Uno_Data_Xml_XmlAttribute.h>
#include <app/Uno.Collections.IList__Uno_Data_Xml_XmlLinkedNode.h>
#include <app/Uno.Collections.IList__Uno_Data_Xml_XmlNodeHandle.h>
#include <app/Uno.Collections.IList__Uno_Exception.h>
#include <app/Uno.Collections.IList__Uno_Graphics_PolygonFace.h>
#include <app/Uno.Collections.IList__Uno_UX_FileSource.h>
#include <app/Uno.Collections.IList__Uno_UX_IFactory.h>
#include <app/Uno.Collections.IList__Uno_UX_ITemplate.h>
#include <app/Uno.Collections.IList__Uno_UX_Resource.h>
#include <app/Uno.Collections.IListExtensions.h>
#include <app/Uno.Collections.List__Fuse_Drawing_GradientStop.h>
#include <app/Uno.Collections.List__Outracks_Simulator_Task_Outracks_Simulato-ae93148c.h>
#include <app/Uno.Collections.List__Outracks_Simulator_Task_Uno_Net_IPEndPoint___.h>
#include <app/Uno.Collections.OrderBy__Fuse_Drawing_GradientStop.h>
#include <app/Uno.Collections.OrderByCompare__Fuse_Drawing_GradientStop.h>
#include <app/Uno.Collections.SelectEnumerable__Fuse_Drawing_Batching_Entry__-da8ff0b7.h>
#include <app/Uno.Collections.SelectEnumerable__Fuse_Drawing_Border__Fuse_Dra-221c4f6c.h>
#include <app/Uno.Collections.SelectEnumerable__Fuse_Drawing_Contour__Fuse_Dr-f616b98b.h>
#include <app/Uno.Collections.SelectEnumerable__Fuse_Drawing_Tesselation_Coll-d16a0391.h>
#include <app/Uno.Collections.SelectEnumerable__Fuse_Drawing_Tesselation_Face-6a404a2b.h>
#include <app/Uno.Collections.SelectEnumerable__Fuse_Drawing_Tesselation_Face-c47d7f53.h>
#include <app/Uno.Collections.SelectEnumerable__Fuse_Drawing_Tesselation_Half-838edd4e.h>
#include <app/Uno.Collections.SelectEnumerable__Outracks_Simulator_Bytecode_P-308a2ca8.h>
#include <app/Uno.Collections.SelectEnumerable__string__string.h>
#include <app/Uno.Collections.UnionEnumerable__float2.h>
#include <app/Uno.Collections.UnionEnumerable__Fuse_Drawing_Contour.h>
#include <app/Uno.Collections.UnionEnumerable__Outracks_Simulator_Bytecode_Statement.h>
#include <app/Uno.Collections.UnionEnumerable__Outracks_Simulator_DialogButton.h>
#include <app/Uno.Collections.WhereEnumerable__Fuse_Drawing_Tesselation_Face.h>
#include <app/Uno.Comparison__Fuse_Drawing_GradientStop.h>
#include <app/Uno.Content.Models.ModelDrawable.h>
#include <app/Uno.Content.Models.ModelNode.h>
#include <app/Uno.Content.Models.ModelParameter__float4x4.h>
#include <app/Uno.Content.Models.ModelSkin.h>
#include <app/Uno.Content.Models.SkinBone.h>
#include <app/Uno.Content.Models.SkinDrawable.h>
#include <app/Uno.Content.Models.VertexInfluence.h>
#include <app/Uno.Data.Json.Value.h>
#include <app/Uno.Data.Xml.XmlAttribute.h>
#include <app/Uno.Data.Xml.XmlAttributeHandle.h>
#include <app/Uno.Data.Xml.XmlLinkedNode.h>
#include <app/Uno.Data.Xml.XmlNodeHandle.h>
#include <app/Uno.Diagnostics.ProfileEvent.h>
#include <app/Uno.EventHandler.h>
#include <app/Uno.Exception.h>
#include <app/Uno.Float2.h>
#include <app/Uno.Float3.h>
#include <app/Uno.Float4.h>
#include <app/Uno.Func__Fuse_Drawing_Batching_Entry__Uno_Content_Models_ModelMesh.h>
#include <app/Uno.Func__Fuse_Drawing_Border__Fuse_Drawing_Contour.h>
#include <app/Uno.Func__Fuse_Drawing_Contour__Fuse_Drawing_Border.h>
#include <app/Uno.Func__Fuse_Drawing_GradientStop__Fuse_Drawing_GradientStop__int.h>
#include <app/Uno.Func__Fuse_Drawing_GradientStop__int.h>
#include <app/Uno.Func__Fuse_Drawing_Tesselation_Collections_DictNode_Fuse_Dr-dd3c2057.h>
#include <app/Uno.Func__Fuse_Drawing_Tesselation_Face__Fuse_Drawing_Contour.h>
#include <app/Uno.Func__Fuse_Drawing_Tesselation_Face__Uno_Geometry_Triangle2D.h>
#include <app/Uno.Func__Fuse_Drawing_Tesselation_HalfEdge__float2.h>
#include <app/Uno.Func__Outracks_Simulator_Bytecode_Parameter__string.h>
#include <app/Uno.Func__string__string.h>
#include <app/Uno.Geometry.Triangle2D.h>
#include <app/Uno.Graphics.Framebuffer.h>
#include <app/Uno.Graphics.PolygonFace.h>
#include <app/Uno.Int.h>
#include <app/Uno.Int4.h>
#include <app/Uno.InvalidOperationException.h>
#include <app/Uno.Net.Http.HttpMessageHandlerRequest.h>
#include <app/Uno.Net.IPEndPoint.h>
#include <app/Uno.Platform.Key.h>
#include <app/Uno.Predicate__Fuse_Drawing_Batching_Batch.h>
#include <app/Uno.Predicate__Fuse_Drawing_Brush.h>
#include <app/Uno.Predicate__Fuse_Drawing_Stroke.h>
#include <app/Uno.Predicate__Fuse_Drawing_Tesselation_Face.h>
#include <app/Uno.Predicate__Fuse_Drawing_Tesselation_HalfEdge.h>
#include <app/Uno.Reflection.CppField.h>
#include <app/Uno.Reflection.CppFunction.h>
#include <app/Uno.Runtime.Implementation.Internal.ArrayEnumerable__Fuse_Drawi-f31a18df.h>
#include <app/Uno.Runtime.Implementation.Internal.ArrayEnumerable__Outracks_S-657438da.h>
#include <app/Uno.Runtime.Implementation.Internal.ArrayEnumerable__Outracks_S-7638e4a9.h>
#include <app/Uno.Runtime.Implementation.Internal.ArrayEnumerable__Outracks_S-a89fea52.h>
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

::uEnumType* Dictionary2_BucketState__typeof()
{
    static ::uStaticStrong< ::uEnumType*> type;
    if (type != NULL) return type;

    type = ::uAllocEnumType("Uno.Collections.Dictionary<,>.BucketState", ::app::Uno::Int__typeof(), 3);

    type->SetLiterals(
        "Empty", 0LL,
        "Used", 1LL,
        "Dummy", 2LL);

    return type;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\Uno.Collections\0.13.2\Extensions\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

EnumerableExtensions__uType* EnumerableExtensions__typeof()
{
    static ::uStaticStrong<EnumerableExtensions__uType*> type;
    if (type != NULL) return type;

    type = (EnumerableExtensions__uType*)::uAllocClassType(sizeof(EnumerableExtensions__uType), "Uno.Collections.EnumerableExtensions");

    type->SetFunctions(53,
        ::uNewFunction("AsEnumerable", EnumerableExtensions__AsEnumerable__Outracks_Simulator_DialogButton, 0, true, ::app::Uno::Collections::IEnumerable__Outracks_Simulator_DialogButton__typeof(), ::uGetArrayType(::app::Outracks::Simulator::DialogButton__typeof())),
        ::uNewFunction("Count", EnumerableExtensions__Count__Fuse_Drawing_Tesselation_Face, 0, true, ::app::Uno::Int__typeof(), ::app::Uno::Collections::IEnumerable__Fuse_Drawing_Tesselation_Face__typeof()),
        ::uNewFunction("First", EnumerableExtensions__First__Fuse_Controls_TextEdit_LineCacheLine, 0, true, ::app::Fuse::Controls::TextEdit::LineCacheLine__typeof(), ::app::Uno::Collections::IEnumerable__Fuse_Controls_TextEdit_LineCacheLine__typeof()),
        ::uNewFunction("First", EnumerableExtensions__First__Fuse_Input_Capturer, 0, true, ::app::Fuse::Input::Capturer__typeof(), ::app::Uno::Collections::IEnumerable__Fuse_Input_Capturer__typeof()),
        ::uNewFunction("FirstOrDefault", EnumerableExtensions__FirstOrDefault__Fuse_Drawing_Batching_Batch, 0, true, ::app::Fuse::Drawing::Batching::Batch__typeof(), ::app::Uno::Collections::IEnumerable__Fuse_Drawing_Batching_Batch__typeof()),
        ::uNewFunction("FirstOrDefault", EnumerableExtensions__FirstOrDefault__Fuse_Drawing_Batching_Batch_1, 0, true, ::app::Fuse::Drawing::Batching::Batch__typeof(), ::app::Uno::Collections::IEnumerable__Fuse_Drawing_Batching_Batch__typeof(), ::app::Uno::Predicate__Fuse_Drawing_Batching_Batch__typeof()),
        ::uNewFunction("FirstOrDefault", EnumerableExtensions__FirstOrDefault__Fuse_Drawing_Brush, 0, true, ::app::Fuse::Drawing::Brush__typeof(), ::app::Uno::Collections::IEnumerable__Fuse_Drawing_Brush__typeof()),
        ::uNewFunction("FirstOrDefault", EnumerableExtensions__FirstOrDefault__Fuse_Drawing_Brush_1, 0, true, ::app::Fuse::Drawing::Brush__typeof(), ::app::Uno::Collections::IEnumerable__Fuse_Drawing_Brush__typeof(), ::app::Uno::Predicate__Fuse_Drawing_Brush__typeof()),
        ::uNewFunction("FirstOrDefault", EnumerableExtensions__FirstOrDefault__Fuse_Drawing_Stroke, 0, true, ::app::Fuse::Drawing::Stroke__typeof(), ::app::Uno::Collections::IEnumerable__Fuse_Drawing_Stroke__typeof()),
        ::uNewFunction("FirstOrDefault", EnumerableExtensions__FirstOrDefault__Fuse_Drawing_Stroke_1, 0, true, ::app::Fuse::Drawing::Stroke__typeof(), ::app::Uno::Collections::IEnumerable__Fuse_Drawing_Stroke__typeof(), ::app::Uno::Predicate__Fuse_Drawing_Stroke__typeof()),
        ::uNewFunction("FirstOrDefault", EnumerableExtensions__FirstOrDefault__Fuse_Drawing_Tesselation_HalfEdge, 0, true, ::app::Fuse::Drawing::Tesselation::HalfEdge__typeof(), ::app::Uno::Collections::IEnumerable__Fuse_Drawing_Tesselation_HalfEdge__typeof()),
        ::uNewFunction("FirstOrDefault", EnumerableExtensions__FirstOrDefault__Fuse_Drawing_Tesselation_HalfEdge_1, 0, true, ::app::Fuse::Drawing::Tesselation::HalfEdge__typeof(), ::app::Uno::Collections::IEnumerable__Fuse_Drawing_Tesselation_HalfEdge__typeof(), ::app::Uno::Predicate__Fuse_Drawing_Tesselation_HalfEdge__typeof()),
        ::uNewFunction("Last", EnumerableExtensions__Last__Fuse_Entities_Entity, 0, true, ::app::Fuse::Entities::Entity__typeof(), ::app::Uno::Collections::IEnumerable__Fuse_Entities_Entity__typeof()),
        ::uNewFunction("Last", EnumerableExtensions__Last__Uno_Data_Xml_XmlNodeHandle, 0, true, ::app::Uno::Data::Xml::XmlNodeHandle__typeof(), ::app::Uno::Collections::IEnumerable__Uno_Data_Xml_XmlNodeHandle__typeof()),
        ::uNewFunction("OrderBy", EnumerableExtensions__OrderBy__Fuse_Drawing_GradientStop, 0, true, ::app::Uno::Collections::IEnumerable__Fuse_Drawing_GradientStop__typeof(), ::app::Uno::Collections::IEnumerable__Fuse_Drawing_GradientStop__typeof(), ::app::Uno::Func__Fuse_Drawing_GradientStop__Fuse_Drawing_GradientStop__int__typeof()),
        ::uNewFunction("OrderBy", EnumerableExtensions__OrderBy__Fuse_Drawing_GradientStop_1, 0, true, ::app::Uno::Collections::IEnumerable__Fuse_Drawing_GradientStop__typeof(), ::app::Uno::Collections::IEnumerable__Fuse_Drawing_GradientStop__typeof(), ::app::Uno::Func__Fuse_Drawing_GradientStop__int__typeof()),
        ::uNewFunction("Select", EnumerableExtensions__Select__Fuse_Drawing_Batching_Entry__Uno_Content_Models_ModelMesh, 0, true, ::app::Uno::Collections::IEnumerable__Uno_Content_Models_ModelMesh__typeof(), ::app::Uno::Collections::IEnumerable__Fuse_Drawing_Batching_Entry__typeof(), ::app::Uno::Func__Fuse_Drawing_Batching_Entry__Uno_Content_Models_ModelMesh__typeof()),
        ::uNewFunction("Select", EnumerableExtensions__Select__Fuse_Drawing_Border__Fuse_Drawing_Contour, 0, true, ::app::Uno::Collections::IEnumerable__Fuse_Drawing_Contour__typeof(), ::app::Uno::Collections::IEnumerable__Fuse_Drawing_Border__typeof(), ::app::Uno::Func__Fuse_Drawing_Border__Fuse_Drawing_Contour__typeof()),
        ::uNewFunction("Select", EnumerableExtensions__Select__Fuse_Drawing_Contour__Fuse_Drawing_Border, 0, true, ::app::Uno::Collections::IEnumerable__Fuse_Drawing_Border__typeof(), ::app::Uno::Collections::IEnumerable__Fuse_Drawing_Contour__typeof(), ::app::Uno::Func__Fuse_Drawing_Contour__Fuse_Drawing_Border__typeof()),
        ::uNewFunction("Select", EnumerableExtensions__Select__Fuse_Drawing_Tesselation_Collections_DictNode_Fuse_Drawing_Tesselation_ActiveRegion___Fuse_Drawing_Tesselation_ActiveRegion, 0, true, ::app::Uno::Collections::IEnumerable__Fuse_Drawing_Tesselation_ActiveRegion__typeof(), ::app::Uno::Collections::IEnumerable__Fuse_Drawing_Tesselation_Collections_DictNode_Fuse_Drawing_Tesselation_ActiveRegion___typeof(), ::app::Uno::Func__Fuse_Drawing_Tesselation_Collections_DictNode_Fuse_Drawing_Tesselation_ActiveRegion___Fuse_Drawing_Tesselation_ActiveRegion__typeof()),
        ::uNewFunction("Select", EnumerableExtensions__Select__Fuse_Drawing_Tesselation_Face__Fuse_Drawing_Contour, 0, true, ::app::Uno::Collections::IEnumerable__Fuse_Drawing_Contour__typeof(), ::app::Uno::Collections::IEnumerable__Fuse_Drawing_Tesselation_Face__typeof(), ::app::Uno::Func__Fuse_Drawing_Tesselation_Face__Fuse_Drawing_Contour__typeof()),
        ::uNewFunction("Select", EnumerableExtensions__Select__Fuse_Drawing_Tesselation_Face__Uno_Geometry_Triangle2D, 0, true, ::app::Uno::Collections::IEnumerable__Uno_Geometry_Triangle2D__typeof(), ::app::Uno::Collections::IEnumerable__Fuse_Drawing_Tesselation_Face__typeof(), ::app::Uno::Func__Fuse_Drawing_Tesselation_Face__Uno_Geometry_Triangle2D__typeof()),
        ::uNewFunction("Select", EnumerableExtensions__Select__Fuse_Drawing_Tesselation_HalfEdge__float2, 0, true, ::app::Uno::Collections::IEnumerable__float2__typeof(), ::app::Uno::Collections::IEnumerable__Fuse_Drawing_Tesselation_HalfEdge__typeof(), ::app::Uno::Func__Fuse_Drawing_Tesselation_HalfEdge__float2__typeof()),
        ::uNewFunction("Select", EnumerableExtensions__Select__Outracks_Simulator_Bytecode_Parameter__string, 0, true, ::app::Uno::Collections::IEnumerable__string__typeof(), ::app::Uno::Collections::IEnumerable__Outracks_Simulator_Bytecode_Parameter__typeof(), ::app::Uno::Func__Outracks_Simulator_Bytecode_Parameter__string__typeof()),
        ::uNewFunction("Select", EnumerableExtensions__Select__string__string, 0, true, ::app::Uno::Collections::IEnumerable__string__typeof(), ::app::Uno::Collections::IEnumerable__string__typeof(), ::app::Uno::Func__string__string__typeof()),
        ::uNewFunction("ToArray", EnumerableExtensions__ToArray__float2, 0, true, ::uGetArrayType(::app::Uno::Float2__typeof()), ::app::Uno::Collections::IEnumerable__float2__typeof()),
        ::uNewFunction("ToArray", EnumerableExtensions__ToArray__float3, 0, true, ::uGetArrayType(::app::Uno::Float3__typeof()), ::app::Uno::Collections::IEnumerable__float3__typeof()),
        ::uNewFunction("ToArray", EnumerableExtensions__ToArray__float4, 0, true, ::uGetArrayType(::app::Uno::Float4__typeof()), ::app::Uno::Collections::IEnumerable__float4__typeof()),
        ::uNewFunction("ToArray", EnumerableExtensions__ToArray__Fuse_Behavior, 0, true, ::uGetArrayType(::app::Fuse::Behavior__typeof()), ::app::Uno::Collections::IEnumerable__Fuse_Behavior__typeof()),
        ::uNewFunction("ToArray", EnumerableExtensions__ToArray__Fuse_Drawing_Batching_Batch, 0, true, ::uGetArrayType(::app::Fuse::Drawing::Batching::Batch__typeof()), ::app::Uno::Collections::IEnumerable__Fuse_Drawing_Batching_Batch__typeof()),
        ::uNewFunction("ToArray", EnumerableExtensions__ToArray__Fuse_Drawing_Border, 0, true, ::uGetArrayType(::app::Fuse::Drawing::Border__typeof()), ::app::Uno::Collections::IEnumerable__Fuse_Drawing_Border__typeof()),
        ::uNewFunction("ToArray", EnumerableExtensions__ToArray__Fuse_Drawing_Contour, 0, true, ::uGetArrayType(::app::Fuse::Drawing::Contour__typeof()), ::app::Uno::Collections::IEnumerable__Fuse_Drawing_Contour__typeof()),
        ::uNewFunction("ToArray", EnumerableExtensions__ToArray__Fuse_Drawing_GradientStop, 0, true, ::uGetArrayType(::app::Fuse::Drawing::GradientStop__typeof()), ::app::Uno::Collections::IEnumerable__Fuse_Drawing_GradientStop__typeof()),
        ::uNewFunction("ToArray", EnumerableExtensions__ToArray__Fuse_Drawing_PolygonDrawable, 0, true, ::uGetArrayType(::app::Fuse::Drawing::PolygonDrawable__typeof()), ::app::Uno::Collections::IEnumerable__Fuse_Drawing_PolygonDrawable__typeof()),
        ::uNewFunction("ToArray", EnumerableExtensions__ToArray__Outracks_Simulator_Bytecode_BindVariable, 0, true, ::uGetArrayType(::app::Outracks::Simulator::Bytecode::BindVariable__typeof()), ::app::Uno::Collections::IEnumerable__Outracks_Simulator_Bytecode_BindVariable__typeof()),
        ::uNewFunction("ToArray", EnumerableExtensions__ToArray__Outracks_Simulator_Bytecode_Expression, 0, true, ::uGetArrayType(::app::Outracks::Simulator::Bytecode::Expression__typeof()), ::app::Uno::Collections::IEnumerable__Outracks_Simulator_Bytecode_Expression__typeof()),
        ::uNewFunction("ToArray", EnumerableExtensions__ToArray__Outracks_Simulator_Bytecode_Parameter, 0, true, ::uGetArrayType(::app::Outracks::Simulator::Bytecode::Parameter__typeof()), ::app::Uno::Collections::IEnumerable__Outracks_Simulator_Bytecode_Parameter__typeof()),
        ::uNewFunction("ToArray", EnumerableExtensions__ToArray__Outracks_Simulator_Bytecode_Statement, 0, true, ::uGetArrayType(::app::Outracks::Simulator::Bytecode::Statement__typeof()), ::app::Uno::Collections::IEnumerable__Outracks_Simulator_Bytecode_Statement__typeof()),
        ::uNewFunction("ToArray", EnumerableExtensions__ToArray__Outracks_Simulator_Bytecode_TypeName, 0, true, ::uGetArrayType(::app::Outracks::Simulator::Bytecode::TypeName__typeof()), ::app::Uno::Collections::IEnumerable__Outracks_Simulator_Bytecode_TypeName__typeof()),
        ::uNewFunction("ToArray", EnumerableExtensions__ToArray__Outracks_Simulator_DialogButton, 0, true, ::uGetArrayType(::app::Outracks::Simulator::DialogButton__typeof()), ::app::Uno::Collections::IEnumerable__Outracks_Simulator_DialogButton__typeof()),
        ::uNewFunction("ToArray", EnumerableExtensions__ToArray__Outracks_Simulator_Protocol_ExceptionInfo, 0, true, ::uGetArrayType(::app::Outracks::Simulator::Protocol::ExceptionInfo__typeof()), ::app::Uno::Collections::IEnumerable__Outracks_Simulator_Protocol_ExceptionInfo__typeof()),
        ::uNewFunction("ToArray", EnumerableExtensions__ToArray__string, 0, true, ::uGetArrayType(::app::Uno::String__typeof()), ::app::Uno::Collections::IEnumerable__string__typeof()),
        ::uNewFunction("ToArray", EnumerableExtensions__ToArray__Uno_Exception, 0, true, ::uGetArrayType(::app::Uno::Exception__typeof()), ::app::Uno::Collections::IEnumerable__Uno_Exception__typeof()),
        ::uNewFunction("ToArray", EnumerableExtensions__ToArray__Uno_Net_IPEndPoint, 0, true, ::uGetArrayType(::app::Uno::Net::IPEndPoint__typeof()), ::app::Uno::Collections::IEnumerable__Uno_Net_IPEndPoint__typeof()),
        ::uNewFunction("ToArray", EnumerableExtensions__ToArray__Uno_UX_Resource, 0, true, ::uGetArrayType(::app::Uno::UX::Resource__typeof()), ::app::Uno::Collections::IEnumerable__Uno_UX_Resource__typeof()),
        ::uNewFunction("ToList", EnumerableExtensions__ToList__Fuse_Drawing_GradientStop, 0, true, ::app::Uno::Collections::List__Fuse_Drawing_GradientStop__typeof(), ::app::Uno::Collections::IEnumerable__Fuse_Drawing_GradientStop__typeof()),
        ::uNewFunction("ToList", EnumerableExtensions__ToList__Outracks_Simulator_Task_Outracks_Simulator_ISimulatorClient_, 0, true, ::app::Uno::Collections::List__Outracks_Simulator_Task_Outracks_Simulator_ISimulatorClient___typeof(), ::app::Uno::Collections::IEnumerable__Outracks_Simulator_Task_Outracks_Simulator_ISimulatorClient___typeof()),
        ::uNewFunction("ToList", EnumerableExtensions__ToList__Outracks_Simulator_Task_Uno_Net_IPEndPoint___, 0, true, ::app::Uno::Collections::List__Outracks_Simulator_Task_Uno_Net_IPEndPoint_____typeof(), ::app::Uno::Collections::IEnumerable__Outracks_Simulator_Task_Uno_Net_IPEndPoint_____typeof()),
        ::uNewFunction("Union", EnumerableExtensions__Union__float2, 0, true, ::app::Uno::Collections::IEnumerable__float2__typeof(), ::app::Uno::Collections::IEnumerable__float2__typeof(), ::app::Uno::Collections::IEnumerable__float2__typeof()),
        ::uNewFunction("Union", EnumerableExtensions__Union__Fuse_Drawing_Contour, 0, true, ::app::Uno::Collections::IEnumerable__Fuse_Drawing_Contour__typeof(), ::app::Uno::Collections::IEnumerable__Fuse_Drawing_Contour__typeof(), ::app::Uno::Collections::IEnumerable__Fuse_Drawing_Contour__typeof()),
        ::uNewFunction("Union", EnumerableExtensions__Union__Outracks_Simulator_Bytecode_Statement, 0, true, ::app::Uno::Collections::IEnumerable__Outracks_Simulator_Bytecode_Statement__typeof(), ::app::Uno::Collections::IEnumerable__Outracks_Simulator_Bytecode_Statement__typeof(), ::app::Uno::Collections::IEnumerable__Outracks_Simulator_Bytecode_Statement__typeof()),
        ::uNewFunction("Union", EnumerableExtensions__Union__Outracks_Simulator_DialogButton, 0, true, ::app::Uno::Collections::IEnumerable__Outracks_Simulator_DialogButton__typeof(), ::app::Uno::Collections::IEnumerable__Outracks_Simulator_DialogButton__typeof(), ::app::Uno::Collections::IEnumerable__Outracks_Simulator_DialogButton__typeof()),
        ::uNewFunction("Where", EnumerableExtensions__Where__Fuse_Drawing_Tesselation_Face, 0, true, ::app::Uno::Collections::IEnumerable__Fuse_Drawing_Tesselation_Face__typeof(), ::app::Uno::Collections::IEnumerable__Fuse_Drawing_Tesselation_Face__typeof(), ::app::Uno::Predicate__Fuse_Drawing_Tesselation_Face__typeof()));

    ::uRegisterType(type);
    return type;
}

::uObject* EnumerableExtensions__AsEnumerable__Outracks_Simulator_DialogButton(::uStatic* __this, ::uArray* self)
{
    return (::uObject*)::app::Uno::Runtime::Implementation::Internal::ArrayEnumerable__Outracks_Simulator_DialogButton__New_1(NULL, self);
}

int EnumerableExtensions__Count__Fuse_Drawing_Tesselation_Face(::uStatic* __this, ::uObject* self)
{
    int c = 0;
    ::uObject* enumerator = ::app::Uno::Collections::IEnumerable__Fuse_Drawing_Tesselation_Face::GetEnumerator(::uPtr< ::uObject*>(self));

    while (::app::Uno::Collections::IEnumerator::MoveNext(::uPtr< ::uObject*>(enumerator)))
    {
        c++;
    }

    return c;
}

::app::Fuse::Controls::TextEdit::LineCacheLine* EnumerableExtensions__First__Fuse_Controls_TextEdit_LineCacheLine(::uStatic* __this, ::uObject* self)
{
    for (::uObject* enum_123 = ::app::Uno::Collections::IEnumerable__Fuse_Controls_TextEdit_LineCacheLine::GetEnumerator(::uPtr< ::uObject*>(self)); ::app::Uno::Collections::IEnumerator::MoveNext(::uPtr< ::uObject*>(enum_123)); )
    {
        ::app::Fuse::Controls::TextEdit::LineCacheLine* item = ::app::Uno::Collections::IEnumerator__Fuse_Controls_TextEdit_LineCacheLine::Current(::uPtr< ::uObject*>(enum_123));
        return item;
    }

    U_THROW(::app::Uno::InvalidOperationException__New_3(NULL));
}

::app::Fuse::Input::Capturer* EnumerableExtensions__First__Fuse_Input_Capturer(::uStatic* __this, ::uObject* self)
{
    for (::uObject* enum_123 = ::app::Uno::Collections::IEnumerable__Fuse_Input_Capturer::GetEnumerator(::uPtr< ::uObject*>(self)); ::app::Uno::Collections::IEnumerator::MoveNext(::uPtr< ::uObject*>(enum_123)); )
    {
        ::app::Fuse::Input::Capturer* item = ::app::Uno::Collections::IEnumerator__Fuse_Input_Capturer::Current(::uPtr< ::uObject*>(enum_123));
        return item;
    }

    U_THROW(::app::Uno::InvalidOperationException__New_3(NULL));
}

::app::Fuse::Drawing::Batching::Batch* EnumerableExtensions__FirstOrDefault__Fuse_Drawing_Batching_Batch(::uStatic* __this, ::uObject* self)
{
    for (::uObject* enum_123 = ::app::Uno::Collections::IEnumerable__Fuse_Drawing_Batching_Batch::GetEnumerator(::uPtr< ::uObject*>(self)); ::app::Uno::Collections::IEnumerator::MoveNext(::uPtr< ::uObject*>(enum_123)); )
    {
        ::app::Fuse::Drawing::Batching::Batch* item = ::app::Uno::Collections::IEnumerator__Fuse_Drawing_Batching_Batch::Current(::uPtr< ::uObject*>(enum_123));
        return item;
    }

    return NULL;
}

::app::Fuse::Drawing::Batching::Batch* EnumerableExtensions__FirstOrDefault__Fuse_Drawing_Batching_Batch_1(::uStatic* __this, ::uObject* self, ::uDelegate* where)
{
    for (::uObject* enum_123 = ::app::Uno::Collections::IEnumerable__Fuse_Drawing_Batching_Batch::GetEnumerator(::uPtr< ::uObject*>(self)); ::app::Uno::Collections::IEnumerator::MoveNext(::uPtr< ::uObject*>(enum_123)); )
    {
        ::app::Fuse::Drawing::Batching::Batch* item = ::app::Uno::Collections::IEnumerator__Fuse_Drawing_Batching_Batch::Current(::uPtr< ::uObject*>(enum_123));

        if (::uPtr< ::uDelegate*>(where)->Invoke< bool, ::app::Fuse::Drawing::Batching::Batch*>(item))
        {
            return item;
        }
    }

    return NULL;
}

::app::Fuse::Drawing::Brush* EnumerableExtensions__FirstOrDefault__Fuse_Drawing_Brush(::uStatic* __this, ::uObject* self)
{
    for (::uObject* enum_123 = ::app::Uno::Collections::IEnumerable__Fuse_Drawing_Brush::GetEnumerator(::uPtr< ::uObject*>(self)); ::app::Uno::Collections::IEnumerator::MoveNext(::uPtr< ::uObject*>(enum_123)); )
    {
        ::app::Fuse::Drawing::Brush* item = ::app::Uno::Collections::IEnumerator__Fuse_Drawing_Brush::Current(::uPtr< ::uObject*>(enum_123));
        return item;
    }

    return NULL;
}

::app::Fuse::Drawing::Brush* EnumerableExtensions__FirstOrDefault__Fuse_Drawing_Brush_1(::uStatic* __this, ::uObject* self, ::uDelegate* where)
{
    for (::uObject* enum_123 = ::app::Uno::Collections::IEnumerable__Fuse_Drawing_Brush::GetEnumerator(::uPtr< ::uObject*>(self)); ::app::Uno::Collections::IEnumerator::MoveNext(::uPtr< ::uObject*>(enum_123)); )
    {
        ::app::Fuse::Drawing::Brush* item = ::app::Uno::Collections::IEnumerator__Fuse_Drawing_Brush::Current(::uPtr< ::uObject*>(enum_123));

        if (::uPtr< ::uDelegate*>(where)->Invoke< bool, ::app::Fuse::Drawing::Brush*>(item))
        {
            return item;
        }
    }

    return NULL;
}

::app::Fuse::Drawing::Stroke* EnumerableExtensions__FirstOrDefault__Fuse_Drawing_Stroke(::uStatic* __this, ::uObject* self)
{
    for (::uObject* enum_123 = ::app::Uno::Collections::IEnumerable__Fuse_Drawing_Stroke::GetEnumerator(::uPtr< ::uObject*>(self)); ::app::Uno::Collections::IEnumerator::MoveNext(::uPtr< ::uObject*>(enum_123)); )
    {
        ::app::Fuse::Drawing::Stroke* item = ::app::Uno::Collections::IEnumerator__Fuse_Drawing_Stroke::Current(::uPtr< ::uObject*>(enum_123));
        return item;
    }

    return NULL;
}

::app::Fuse::Drawing::Stroke* EnumerableExtensions__FirstOrDefault__Fuse_Drawing_Stroke_1(::uStatic* __this, ::uObject* self, ::uDelegate* where)
{
    for (::uObject* enum_123 = ::app::Uno::Collections::IEnumerable__Fuse_Drawing_Stroke::GetEnumerator(::uPtr< ::uObject*>(self)); ::app::Uno::Collections::IEnumerator::MoveNext(::uPtr< ::uObject*>(enum_123)); )
    {
        ::app::Fuse::Drawing::Stroke* item = ::app::Uno::Collections::IEnumerator__Fuse_Drawing_Stroke::Current(::uPtr< ::uObject*>(enum_123));

        if (::uPtr< ::uDelegate*>(where)->Invoke< bool, ::app::Fuse::Drawing::Stroke*>(item))
        {
            return item;
        }
    }

    return NULL;
}

::app::Fuse::Drawing::Tesselation::HalfEdge* EnumerableExtensions__FirstOrDefault__Fuse_Drawing_Tesselation_HalfEdge(::uStatic* __this, ::uObject* self)
{
    for (::uObject* enum_123 = ::app::Uno::Collections::IEnumerable__Fuse_Drawing_Tesselation_HalfEdge::GetEnumerator(::uPtr< ::uObject*>(self)); ::app::Uno::Collections::IEnumerator::MoveNext(::uPtr< ::uObject*>(enum_123)); )
    {
        ::app::Fuse::Drawing::Tesselation::HalfEdge* item = ::app::Uno::Collections::IEnumerator__Fuse_Drawing_Tesselation_HalfEdge::Current(::uPtr< ::uObject*>(enum_123));
        return item;
    }

    return NULL;
}

::app::Fuse::Drawing::Tesselation::HalfEdge* EnumerableExtensions__FirstOrDefault__Fuse_Drawing_Tesselation_HalfEdge_1(::uStatic* __this, ::uObject* self, ::uDelegate* where)
{
    for (::uObject* enum_123 = ::app::Uno::Collections::IEnumerable__Fuse_Drawing_Tesselation_HalfEdge::GetEnumerator(::uPtr< ::uObject*>(self)); ::app::Uno::Collections::IEnumerator::MoveNext(::uPtr< ::uObject*>(enum_123)); )
    {
        ::app::Fuse::Drawing::Tesselation::HalfEdge* item = ::app::Uno::Collections::IEnumerator__Fuse_Drawing_Tesselation_HalfEdge::Current(::uPtr< ::uObject*>(enum_123));

        if (::uPtr< ::uDelegate*>(where)->Invoke< bool, ::app::Fuse::Drawing::Tesselation::HalfEdge*>(item))
        {
            return item;
        }
    }

    return NULL;
}

::app::Fuse::Entities::Entity* EnumerableExtensions__Last__Fuse_Entities_Entity(::uStatic* __this, ::uObject* self)
{
    bool any = false;
    ::app::Fuse::Entities::Entity* tmp = NULL;

    for (::uObject* enum_123 = ::app::Uno::Collections::IEnumerable__Fuse_Entities_Entity::GetEnumerator(::uPtr< ::uObject*>(self)); ::app::Uno::Collections::IEnumerator::MoveNext(::uPtr< ::uObject*>(enum_123)); )
    {
        ::app::Fuse::Entities::Entity* item = ::app::Uno::Collections::IEnumerator__Fuse_Entities_Entity::Current(::uPtr< ::uObject*>(enum_123));
        tmp = item;
        any = true;
    }

    if (!any)
    {
        U_THROW(::app::Uno::Exception__New_1(NULL));
    }

    return tmp;
}

::app::Uno::Data::Xml::XmlNodeHandle* EnumerableExtensions__Last__Uno_Data_Xml_XmlNodeHandle(::uStatic* __this, ::uObject* self)
{
    bool any = false;
    ::app::Uno::Data::Xml::XmlNodeHandle* tmp = NULL;

    for (::uObject* enum_123 = ::app::Uno::Collections::IEnumerable__Uno_Data_Xml_XmlNodeHandle::GetEnumerator(::uPtr< ::uObject*>(self)); ::app::Uno::Collections::IEnumerator::MoveNext(::uPtr< ::uObject*>(enum_123)); )
    {
        ::app::Uno::Data::Xml::XmlNodeHandle* item = ::app::Uno::Collections::IEnumerator__Uno_Data_Xml_XmlNodeHandle::Current(::uPtr< ::uObject*>(enum_123));
        tmp = item;
        any = true;
    }

    if (!any)
    {
        U_THROW(::app::Uno::Exception__New_1(NULL));
    }

    return tmp;
}

::uObject* EnumerableExtensions__OrderBy__Fuse_Drawing_GradientStop(::uStatic* __this, ::uObject* self, ::uDelegate* orderFunction)
{
    ::app::Uno::Collections::List__Fuse_Drawing_GradientStop* list = EnumerableExtensions__ToList__Fuse_Drawing_GradientStop(NULL, self);
    ::uPtr< ::app::Uno::Collections::List__Fuse_Drawing_GradientStop*>(list)->Sort(::uNewDelegateNonVirt(::app::Uno::Comparison__Fuse_Drawing_GradientStop__typeof(), (const void*)::app::Uno::Collections::OrderByCompare__Fuse_Drawing_GradientStop__Compare, ::app::Uno::Collections::OrderByCompare__Fuse_Drawing_GradientStop__New_1(NULL, orderFunction)));
    return (::uObject*)list;
}

::uObject* EnumerableExtensions__OrderBy__Fuse_Drawing_GradientStop_1(::uStatic* __this, ::uObject* self, ::uDelegate* orderFunction)
{
    ::app::Uno::Collections::List__Fuse_Drawing_GradientStop* list = EnumerableExtensions__ToList__Fuse_Drawing_GradientStop(NULL, self);
    ::uPtr< ::app::Uno::Collections::List__Fuse_Drawing_GradientStop*>(list)->Sort(::uNewDelegateNonVirt(::app::Uno::Comparison__Fuse_Drawing_GradientStop__typeof(), (const void*)::app::Uno::Collections::OrderBy__Fuse_Drawing_GradientStop__Compare, ::app::Uno::Collections::OrderBy__Fuse_Drawing_GradientStop__New_1(NULL, orderFunction)));
    return (::uObject*)list;
}

::uObject* EnumerableExtensions__Select__Fuse_Drawing_Batching_Entry__Uno_Content_Models_ModelMesh(::uStatic* __this, ::uObject* self, ::uDelegate* func)
{
    return (::uObject*)::app::Uno::Collections::SelectEnumerable__Fuse_Drawing_Batching_Entry__Uno_Content_Models_ModelMesh__New_1(NULL, self, func);
}

::uObject* EnumerableExtensions__Select__Fuse_Drawing_Border__Fuse_Drawing_Contour(::uStatic* __this, ::uObject* self, ::uDelegate* func)
{
    return (::uObject*)::app::Uno::Collections::SelectEnumerable__Fuse_Drawing_Border__Fuse_Drawing_Contour__New_1(NULL, self, func);
}

::uObject* EnumerableExtensions__Select__Fuse_Drawing_Contour__Fuse_Drawing_Border(::uStatic* __this, ::uObject* self, ::uDelegate* func)
{
    return (::uObject*)::app::Uno::Collections::SelectEnumerable__Fuse_Drawing_Contour__Fuse_Drawing_Border__New_1(NULL, self, func);
}

::uObject* EnumerableExtensions__Select__Fuse_Drawing_Tesselation_Collections_DictNode_Fuse_Drawing_Tesselation_ActiveRegion___Fuse_Drawing_Tesselation_ActiveRegion(::uStatic* __this, ::uObject* self, ::uDelegate* func)
{
    return (::uObject*)::app::Uno::Collections::SelectEnumerable__Fuse_Drawing_Tesselation_Collections_DictNode_Fuse_Drawing_Tesselation_ActiveRegion___Fuse_Drawing_Tesselation_ActiveRegion__New_1(NULL, self, func);
}

::uObject* EnumerableExtensions__Select__Fuse_Drawing_Tesselation_Face__Fuse_Drawing_Contour(::uStatic* __this, ::uObject* self, ::uDelegate* func)
{
    return (::uObject*)::app::Uno::Collections::SelectEnumerable__Fuse_Drawing_Tesselation_Face__Fuse_Drawing_Contour__New_1(NULL, self, func);
}

::uObject* EnumerableExtensions__Select__Fuse_Drawing_Tesselation_Face__Uno_Geometry_Triangle2D(::uStatic* __this, ::uObject* self, ::uDelegate* func)
{
    return (::uObject*)::app::Uno::Collections::SelectEnumerable__Fuse_Drawing_Tesselation_Face__Uno_Geometry_Triangle2D__New_1(NULL, self, func);
}

::uObject* EnumerableExtensions__Select__Fuse_Drawing_Tesselation_HalfEdge__float2(::uStatic* __this, ::uObject* self, ::uDelegate* func)
{
    return (::uObject*)::app::Uno::Collections::SelectEnumerable__Fuse_Drawing_Tesselation_HalfEdge__float2__New_1(NULL, self, func);
}

::uObject* EnumerableExtensions__Select__Outracks_Simulator_Bytecode_Parameter__string(::uStatic* __this, ::uObject* self, ::uDelegate* func)
{
    return (::uObject*)::app::Uno::Collections::SelectEnumerable__Outracks_Simulator_Bytecode_Parameter__string__New_1(NULL, self, func);
}

::uObject* EnumerableExtensions__Select__string__string(::uStatic* __this, ::uObject* self, ::uDelegate* func)
{
    return (::uObject*)::app::Uno::Collections::SelectEnumerable__string__string__New_1(NULL, self, func);
}

::uArray* EnumerableExtensions__ToArray__float2(::uStatic* __this, ::uObject* self)
{
    ::app::Uno::Collections::EnumerableExtensions_LinkedList__float2* head = NULL;
    int count = 0;

    for (::uObject* enum_123 = ::app::Uno::Collections::IEnumerable__float2::GetEnumerator(::uPtr< ::uObject*>(self)); ::app::Uno::Collections::IEnumerator::MoveNext(::uPtr< ::uObject*>(enum_123)); )
    {
        ::app::Uno::Float2 item = ::app::Uno::Collections::IEnumerator__float2::Current(::uPtr< ::uObject*>(enum_123));
        head = ::app::Uno::Collections::EnumerableExtensions_LinkedList__float2__New_1(NULL, item, head);
        count++;
    }

    ::uArray* res = ::uNewArray(::app::Uno::Float2__typeof(), count);

    for (::app::Uno::Collections::EnumerableExtensions_LinkedList__float2* current = head; current != NULL; current = ::uPtr< ::app::Uno::Collections::EnumerableExtensions_LinkedList__float2*>(current)->Next)
    {
        res->Item< ::app::Uno::Float2>(--count) = ::uPtr< ::app::Uno::Collections::EnumerableExtensions_LinkedList__float2*>(current)->Item;
    }

    return res;
}

::uArray* EnumerableExtensions__ToArray__float3(::uStatic* __this, ::uObject* self)
{
    ::app::Uno::Collections::EnumerableExtensions_LinkedList__float3* head = NULL;
    int count = 0;

    for (::uObject* enum_123 = ::app::Uno::Collections::IEnumerable__float3::GetEnumerator(::uPtr< ::uObject*>(self)); ::app::Uno::Collections::IEnumerator::MoveNext(::uPtr< ::uObject*>(enum_123)); )
    {
        ::app::Uno::Float3 item = ::app::Uno::Collections::IEnumerator__float3::Current(::uPtr< ::uObject*>(enum_123));
        head = ::app::Uno::Collections::EnumerableExtensions_LinkedList__float3__New_1(NULL, item, head);
        count++;
    }

    ::uArray* res = ::uNewArray(::app::Uno::Float3__typeof(), count);

    for (::app::Uno::Collections::EnumerableExtensions_LinkedList__float3* current = head; current != NULL; current = ::uPtr< ::app::Uno::Collections::EnumerableExtensions_LinkedList__float3*>(current)->Next)
    {
        res->Item< ::app::Uno::Float3>(--count) = ::uPtr< ::app::Uno::Collections::EnumerableExtensions_LinkedList__float3*>(current)->Item;
    }

    return res;
}

::uArray* EnumerableExtensions__ToArray__float4(::uStatic* __this, ::uObject* self)
{
    ::app::Uno::Collections::EnumerableExtensions_LinkedList__float4* head = NULL;
    int count = 0;

    for (::uObject* enum_123 = ::app::Uno::Collections::IEnumerable__float4::GetEnumerator(::uPtr< ::uObject*>(self)); ::app::Uno::Collections::IEnumerator::MoveNext(::uPtr< ::uObject*>(enum_123)); )
    {
        ::app::Uno::Float4 item = ::app::Uno::Collections::IEnumerator__float4::Current(::uPtr< ::uObject*>(enum_123));
        head = ::app::Uno::Collections::EnumerableExtensions_LinkedList__float4__New_1(NULL, item, head);
        count++;
    }

    ::uArray* res = ::uNewArray(::app::Uno::Float4__typeof(), count);

    for (::app::Uno::Collections::EnumerableExtensions_LinkedList__float4* current = head; current != NULL; current = ::uPtr< ::app::Uno::Collections::EnumerableExtensions_LinkedList__float4*>(current)->Next)
    {
        res->Item< ::app::Uno::Float4>(--count) = ::uPtr< ::app::Uno::Collections::EnumerableExtensions_LinkedList__float4*>(current)->Item;
    }

    return res;
}

::uArray* EnumerableExtensions__ToArray__Fuse_Behavior(::uStatic* __this, ::uObject* self)
{
    ::app::Uno::Collections::EnumerableExtensions_LinkedList__Fuse_Behavior* head = NULL;
    int count = 0;

    for (::uObject* enum_123 = ::app::Uno::Collections::IEnumerable__Fuse_Behavior::GetEnumerator(::uPtr< ::uObject*>(self)); ::app::Uno::Collections::IEnumerator::MoveNext(::uPtr< ::uObject*>(enum_123)); )
    {
        ::app::Fuse::Behavior* item = ::app::Uno::Collections::IEnumerator__Fuse_Behavior::Current(::uPtr< ::uObject*>(enum_123));
        head = ::app::Uno::Collections::EnumerableExtensions_LinkedList__Fuse_Behavior__New_1(NULL, item, head);
        count++;
    }

    ::uArray* res = ::uNewArray(::app::Fuse::Behavior__typeof(), count);

    for (::app::Uno::Collections::EnumerableExtensions_LinkedList__Fuse_Behavior* current = head; current != NULL; current = ::uPtr< ::app::Uno::Collections::EnumerableExtensions_LinkedList__Fuse_Behavior*>(current)->Next)
    {
        res->ItemStrong< ::app::Fuse::Behavior*>(--count) = ::uPtr< ::app::Uno::Collections::EnumerableExtensions_LinkedList__Fuse_Behavior*>(current)->Item;
    }

    return res;
}

::uArray* EnumerableExtensions__ToArray__Fuse_Drawing_Batching_Batch(::uStatic* __this, ::uObject* self)
{
    ::app::Uno::Collections::EnumerableExtensions_LinkedList__Fuse_Drawing_Batching_Batch* head = NULL;
    int count = 0;

    for (::uObject* enum_123 = ::app::Uno::Collections::IEnumerable__Fuse_Drawing_Batching_Batch::GetEnumerator(::uPtr< ::uObject*>(self)); ::app::Uno::Collections::IEnumerator::MoveNext(::uPtr< ::uObject*>(enum_123)); )
    {
        ::app::Fuse::Drawing::Batching::Batch* item = ::app::Uno::Collections::IEnumerator__Fuse_Drawing_Batching_Batch::Current(::uPtr< ::uObject*>(enum_123));
        head = ::app::Uno::Collections::EnumerableExtensions_LinkedList__Fuse_Drawing_Batching_Batch__New_1(NULL, item, head);
        count++;
    }

    ::uArray* res = ::uNewArray(::app::Fuse::Drawing::Batching::Batch__typeof(), count);

    for (::app::Uno::Collections::EnumerableExtensions_LinkedList__Fuse_Drawing_Batching_Batch* current = head; current != NULL; current = ::uPtr< ::app::Uno::Collections::EnumerableExtensions_LinkedList__Fuse_Drawing_Batching_Batch*>(current)->Next)
    {
        res->ItemStrong< ::app::Fuse::Drawing::Batching::Batch*>(--count) = ::uPtr< ::app::Uno::Collections::EnumerableExtensions_LinkedList__Fuse_Drawing_Batching_Batch*>(current)->Item;
    }

    return res;
}

::uArray* EnumerableExtensions__ToArray__Fuse_Drawing_Border(::uStatic* __this, ::uObject* self)
{
    ::app::Uno::Collections::EnumerableExtensions_LinkedList__Fuse_Drawing_Border* head = NULL;
    int count = 0;

    for (::uObject* enum_123 = ::app::Uno::Collections::IEnumerable__Fuse_Drawing_Border::GetEnumerator(::uPtr< ::uObject*>(self)); ::app::Uno::Collections::IEnumerator::MoveNext(::uPtr< ::uObject*>(enum_123)); )
    {
        ::app::Fuse::Drawing::Border* item = ::app::Uno::Collections::IEnumerator__Fuse_Drawing_Border::Current(::uPtr< ::uObject*>(enum_123));
        head = ::app::Uno::Collections::EnumerableExtensions_LinkedList__Fuse_Drawing_Border__New_1(NULL, item, head);
        count++;
    }

    ::uArray* res = ::uNewArray(::app::Fuse::Drawing::Border__typeof(), count);

    for (::app::Uno::Collections::EnumerableExtensions_LinkedList__Fuse_Drawing_Border* current = head; current != NULL; current = ::uPtr< ::app::Uno::Collections::EnumerableExtensions_LinkedList__Fuse_Drawing_Border*>(current)->Next)
    {
        res->ItemStrong< ::app::Fuse::Drawing::Border*>(--count) = ::uPtr< ::app::Uno::Collections::EnumerableExtensions_LinkedList__Fuse_Drawing_Border*>(current)->Item;
    }

    return res;
}

::uArray* EnumerableExtensions__ToArray__Fuse_Drawing_Contour(::uStatic* __this, ::uObject* self)
{
    ::app::Uno::Collections::EnumerableExtensions_LinkedList__Fuse_Drawing_Contour* head = NULL;
    int count = 0;

    for (::uObject* enum_123 = ::app::Uno::Collections::IEnumerable__Fuse_Drawing_Contour::GetEnumerator(::uPtr< ::uObject*>(self)); ::app::Uno::Collections::IEnumerator::MoveNext(::uPtr< ::uObject*>(enum_123)); )
    {
        ::app::Fuse::Drawing::Contour* item = ::app::Uno::Collections::IEnumerator__Fuse_Drawing_Contour::Current(::uPtr< ::uObject*>(enum_123));
        head = ::app::Uno::Collections::EnumerableExtensions_LinkedList__Fuse_Drawing_Contour__New_1(NULL, item, head);
        count++;
    }

    ::uArray* res = ::uNewArray(::app::Fuse::Drawing::Contour__typeof(), count);

    for (::app::Uno::Collections::EnumerableExtensions_LinkedList__Fuse_Drawing_Contour* current = head; current != NULL; current = ::uPtr< ::app::Uno::Collections::EnumerableExtensions_LinkedList__Fuse_Drawing_Contour*>(current)->Next)
    {
        res->ItemStrong< ::app::Fuse::Drawing::Contour*>(--count) = ::uPtr< ::app::Uno::Collections::EnumerableExtensions_LinkedList__Fuse_Drawing_Contour*>(current)->Item;
    }

    return res;
}

::uArray* EnumerableExtensions__ToArray__Fuse_Drawing_GradientStop(::uStatic* __this, ::uObject* self)
{
    ::app::Uno::Collections::EnumerableExtensions_LinkedList__Fuse_Drawing_GradientStop* head = NULL;
    int count = 0;

    for (::uObject* enum_123 = ::app::Uno::Collections::IEnumerable__Fuse_Drawing_GradientStop::GetEnumerator(::uPtr< ::uObject*>(self)); ::app::Uno::Collections::IEnumerator::MoveNext(::uPtr< ::uObject*>(enum_123)); )
    {
        ::app::Fuse::Drawing::GradientStop* item = ::app::Uno::Collections::IEnumerator__Fuse_Drawing_GradientStop::Current(::uPtr< ::uObject*>(enum_123));
        head = ::app::Uno::Collections::EnumerableExtensions_LinkedList__Fuse_Drawing_GradientStop__New_1(NULL, item, head);
        count++;
    }

    ::uArray* res = ::uNewArray(::app::Fuse::Drawing::GradientStop__typeof(), count);

    for (::app::Uno::Collections::EnumerableExtensions_LinkedList__Fuse_Drawing_GradientStop* current = head; current != NULL; current = ::uPtr< ::app::Uno::Collections::EnumerableExtensions_LinkedList__Fuse_Drawing_GradientStop*>(current)->Next)
    {
        res->ItemStrong< ::app::Fuse::Drawing::GradientStop*>(--count) = ::uPtr< ::app::Uno::Collections::EnumerableExtensions_LinkedList__Fuse_Drawing_GradientStop*>(current)->Item;
    }

    return res;
}

::uArray* EnumerableExtensions__ToArray__Fuse_Drawing_PolygonDrawable(::uStatic* __this, ::uObject* self)
{
    ::app::Uno::Collections::EnumerableExtensions_LinkedList__Fuse_Drawing_PolygonDrawable* head = NULL;
    int count = 0;

    for (::uObject* enum_123 = ::app::Uno::Collections::IEnumerable__Fuse_Drawing_PolygonDrawable::GetEnumerator(::uPtr< ::uObject*>(self)); ::app::Uno::Collections::IEnumerator::MoveNext(::uPtr< ::uObject*>(enum_123)); )
    {
        ::app::Fuse::Drawing::PolygonDrawable* item = ::app::Uno::Collections::IEnumerator__Fuse_Drawing_PolygonDrawable::Current(::uPtr< ::uObject*>(enum_123));
        head = ::app::Uno::Collections::EnumerableExtensions_LinkedList__Fuse_Drawing_PolygonDrawable__New_1(NULL, item, head);
        count++;
    }

    ::uArray* res = ::uNewArray(::app::Fuse::Drawing::PolygonDrawable__typeof(), count);

    for (::app::Uno::Collections::EnumerableExtensions_LinkedList__Fuse_Drawing_PolygonDrawable* current = head; current != NULL; current = ::uPtr< ::app::Uno::Collections::EnumerableExtensions_LinkedList__Fuse_Drawing_PolygonDrawable*>(current)->Next)
    {
        res->ItemStrong< ::app::Fuse::Drawing::PolygonDrawable*>(--count) = ::uPtr< ::app::Uno::Collections::EnumerableExtensions_LinkedList__Fuse_Drawing_PolygonDrawable*>(current)->Item;
    }

    return res;
}

::uArray* EnumerableExtensions__ToArray__Outracks_Simulator_Bytecode_BindVariable(::uStatic* __this, ::uObject* self)
{
    ::app::Uno::Collections::EnumerableExtensions_LinkedList__Outracks_Simulator_Bytecode_BindVariable* head = NULL;
    int count = 0;

    for (::uObject* enum_123 = ::app::Uno::Collections::IEnumerable__Outracks_Simulator_Bytecode_BindVariable::GetEnumerator(::uPtr< ::uObject*>(self)); ::app::Uno::Collections::IEnumerator::MoveNext(::uPtr< ::uObject*>(enum_123)); )
    {
        ::app::Outracks::Simulator::Bytecode::BindVariable* item = ::app::Uno::Collections::IEnumerator__Outracks_Simulator_Bytecode_BindVariable::Current(::uPtr< ::uObject*>(enum_123));
        head = ::app::Uno::Collections::EnumerableExtensions_LinkedList__Outracks_Simulator_Bytecode_BindVariable__New_1(NULL, item, head);
        count++;
    }

    ::uArray* res = ::uNewArray(::app::Outracks::Simulator::Bytecode::BindVariable__typeof(), count);

    for (::app::Uno::Collections::EnumerableExtensions_LinkedList__Outracks_Simulator_Bytecode_BindVariable* current = head; current != NULL; current = ::uPtr< ::app::Uno::Collections::EnumerableExtensions_LinkedList__Outracks_Simulator_Bytecode_BindVariable*>(current)->Next)
    {
        res->ItemStrong< ::app::Outracks::Simulator::Bytecode::BindVariable*>(--count) = ::uPtr< ::app::Uno::Collections::EnumerableExtensions_LinkedList__Outracks_Simulator_Bytecode_BindVariable*>(current)->Item;
    }

    return res;
}

::uArray* EnumerableExtensions__ToArray__Outracks_Simulator_Bytecode_Expression(::uStatic* __this, ::uObject* self)
{
    ::app::Uno::Collections::EnumerableExtensions_LinkedList__Outracks_Simulator_Bytecode_Expression* head = NULL;
    int count = 0;

    for (::uObject* enum_123 = ::app::Uno::Collections::IEnumerable__Outracks_Simulator_Bytecode_Expression::GetEnumerator(::uPtr< ::uObject*>(self)); ::app::Uno::Collections::IEnumerator::MoveNext(::uPtr< ::uObject*>(enum_123)); )
    {
        ::app::Outracks::Simulator::Bytecode::Expression* item = ::app::Uno::Collections::IEnumerator__Outracks_Simulator_Bytecode_Expression::Current(::uPtr< ::uObject*>(enum_123));
        head = ::app::Uno::Collections::EnumerableExtensions_LinkedList__Outracks_Simulator_Bytecode_Expression__New_1(NULL, item, head);
        count++;
    }

    ::uArray* res = ::uNewArray(::app::Outracks::Simulator::Bytecode::Expression__typeof(), count);

    for (::app::Uno::Collections::EnumerableExtensions_LinkedList__Outracks_Simulator_Bytecode_Expression* current = head; current != NULL; current = ::uPtr< ::app::Uno::Collections::EnumerableExtensions_LinkedList__Outracks_Simulator_Bytecode_Expression*>(current)->Next)
    {
        res->ItemStrong< ::app::Outracks::Simulator::Bytecode::Expression*>(--count) = ::uPtr< ::app::Uno::Collections::EnumerableExtensions_LinkedList__Outracks_Simulator_Bytecode_Expression*>(current)->Item;
    }

    return res;
}

::uArray* EnumerableExtensions__ToArray__Outracks_Simulator_Bytecode_Parameter(::uStatic* __this, ::uObject* self)
{
    ::app::Uno::Collections::EnumerableExtensions_LinkedList__Outracks_Simulator_Bytecode_Parameter* head = NULL;
    int count = 0;

    for (::uObject* enum_123 = ::app::Uno::Collections::IEnumerable__Outracks_Simulator_Bytecode_Parameter::GetEnumerator(::uPtr< ::uObject*>(self)); ::app::Uno::Collections::IEnumerator::MoveNext(::uPtr< ::uObject*>(enum_123)); )
    {
        ::app::Outracks::Simulator::Bytecode::Parameter* item = ::app::Uno::Collections::IEnumerator__Outracks_Simulator_Bytecode_Parameter::Current(::uPtr< ::uObject*>(enum_123));
        head = ::app::Uno::Collections::EnumerableExtensions_LinkedList__Outracks_Simulator_Bytecode_Parameter__New_1(NULL, item, head);
        count++;
    }

    ::uArray* res = ::uNewArray(::app::Outracks::Simulator::Bytecode::Parameter__typeof(), count);

    for (::app::Uno::Collections::EnumerableExtensions_LinkedList__Outracks_Simulator_Bytecode_Parameter* current = head; current != NULL; current = ::uPtr< ::app::Uno::Collections::EnumerableExtensions_LinkedList__Outracks_Simulator_Bytecode_Parameter*>(current)->Next)
    {
        res->ItemStrong< ::app::Outracks::Simulator::Bytecode::Parameter*>(--count) = ::uPtr< ::app::Uno::Collections::EnumerableExtensions_LinkedList__Outracks_Simulator_Bytecode_Parameter*>(current)->Item;
    }

    return res;
}

::uArray* EnumerableExtensions__ToArray__Outracks_Simulator_Bytecode_Statement(::uStatic* __this, ::uObject* self)
{
    ::app::Uno::Collections::EnumerableExtensions_LinkedList__Outracks_Simulator_Bytecode_Statement* head = NULL;
    int count = 0;

    for (::uObject* enum_123 = ::app::Uno::Collections::IEnumerable__Outracks_Simulator_Bytecode_Statement::GetEnumerator(::uPtr< ::uObject*>(self)); ::app::Uno::Collections::IEnumerator::MoveNext(::uPtr< ::uObject*>(enum_123)); )
    {
        ::app::Outracks::Simulator::Bytecode::Statement* item = ::app::Uno::Collections::IEnumerator__Outracks_Simulator_Bytecode_Statement::Current(::uPtr< ::uObject*>(enum_123));
        head = ::app::Uno::Collections::EnumerableExtensions_LinkedList__Outracks_Simulator_Bytecode_Statement__New_1(NULL, item, head);
        count++;
    }

    ::uArray* res = ::uNewArray(::app::Outracks::Simulator::Bytecode::Statement__typeof(), count);

    for (::app::Uno::Collections::EnumerableExtensions_LinkedList__Outracks_Simulator_Bytecode_Statement* current = head; current != NULL; current = ::uPtr< ::app::Uno::Collections::EnumerableExtensions_LinkedList__Outracks_Simulator_Bytecode_Statement*>(current)->Next)
    {
        res->ItemStrong< ::app::Outracks::Simulator::Bytecode::Statement*>(--count) = ::uPtr< ::app::Uno::Collections::EnumerableExtensions_LinkedList__Outracks_Simulator_Bytecode_Statement*>(current)->Item;
    }

    return res;
}

::uArray* EnumerableExtensions__ToArray__Outracks_Simulator_Bytecode_TypeName(::uStatic* __this, ::uObject* self)
{
    ::app::Uno::Collections::EnumerableExtensions_LinkedList__Outracks_Simulator_Bytecode_TypeName* head = NULL;
    int count = 0;

    for (::uObject* enum_123 = ::app::Uno::Collections::IEnumerable__Outracks_Simulator_Bytecode_TypeName::GetEnumerator(::uPtr< ::uObject*>(self)); ::app::Uno::Collections::IEnumerator::MoveNext(::uPtr< ::uObject*>(enum_123)); )
    {
        ::app::Outracks::Simulator::Bytecode::TypeName* item = ::app::Uno::Collections::IEnumerator__Outracks_Simulator_Bytecode_TypeName::Current(::uPtr< ::uObject*>(enum_123));
        head = ::app::Uno::Collections::EnumerableExtensions_LinkedList__Outracks_Simulator_Bytecode_TypeName__New_1(NULL, item, head);
        count++;
    }

    ::uArray* res = ::uNewArray(::app::Outracks::Simulator::Bytecode::TypeName__typeof(), count);

    for (::app::Uno::Collections::EnumerableExtensions_LinkedList__Outracks_Simulator_Bytecode_TypeName* current = head; current != NULL; current = ::uPtr< ::app::Uno::Collections::EnumerableExtensions_LinkedList__Outracks_Simulator_Bytecode_TypeName*>(current)->Next)
    {
        res->ItemStrong< ::app::Outracks::Simulator::Bytecode::TypeName*>(--count) = ::uPtr< ::app::Uno::Collections::EnumerableExtensions_LinkedList__Outracks_Simulator_Bytecode_TypeName*>(current)->Item;
    }

    return res;
}

::uArray* EnumerableExtensions__ToArray__Outracks_Simulator_DialogButton(::uStatic* __this, ::uObject* self)
{
    ::app::Uno::Collections::EnumerableExtensions_LinkedList__Outracks_Simulator_DialogButton* head = NULL;
    int count = 0;

    for (::uObject* enum_123 = ::app::Uno::Collections::IEnumerable__Outracks_Simulator_DialogButton::GetEnumerator(::uPtr< ::uObject*>(self)); ::app::Uno::Collections::IEnumerator::MoveNext(::uPtr< ::uObject*>(enum_123)); )
    {
        ::app::Outracks::Simulator::DialogButton* item = ::app::Uno::Collections::IEnumerator__Outracks_Simulator_DialogButton::Current(::uPtr< ::uObject*>(enum_123));
        head = ::app::Uno::Collections::EnumerableExtensions_LinkedList__Outracks_Simulator_DialogButton__New_1(NULL, item, head);
        count++;
    }

    ::uArray* res = ::uNewArray(::app::Outracks::Simulator::DialogButton__typeof(), count);

    for (::app::Uno::Collections::EnumerableExtensions_LinkedList__Outracks_Simulator_DialogButton* current = head; current != NULL; current = ::uPtr< ::app::Uno::Collections::EnumerableExtensions_LinkedList__Outracks_Simulator_DialogButton*>(current)->Next)
    {
        res->ItemStrong< ::app::Outracks::Simulator::DialogButton*>(--count) = ::uPtr< ::app::Uno::Collections::EnumerableExtensions_LinkedList__Outracks_Simulator_DialogButton*>(current)->Item;
    }

    return res;
}

::uArray* EnumerableExtensions__ToArray__Outracks_Simulator_Protocol_ExceptionInfo(::uStatic* __this, ::uObject* self)
{
    ::app::Uno::Collections::EnumerableExtensions_LinkedList__Outracks_Simulator_Protocol_ExceptionInfo* head = NULL;
    int count = 0;

    for (::uObject* enum_123 = ::app::Uno::Collections::IEnumerable__Outracks_Simulator_Protocol_ExceptionInfo::GetEnumerator(::uPtr< ::uObject*>(self)); ::app::Uno::Collections::IEnumerator::MoveNext(::uPtr< ::uObject*>(enum_123)); )
    {
        ::app::Outracks::Simulator::Protocol::ExceptionInfo* item = ::app::Uno::Collections::IEnumerator__Outracks_Simulator_Protocol_ExceptionInfo::Current(::uPtr< ::uObject*>(enum_123));
        head = ::app::Uno::Collections::EnumerableExtensions_LinkedList__Outracks_Simulator_Protocol_ExceptionInfo__New_1(NULL, item, head);
        count++;
    }

    ::uArray* res = ::uNewArray(::app::Outracks::Simulator::Protocol::ExceptionInfo__typeof(), count);

    for (::app::Uno::Collections::EnumerableExtensions_LinkedList__Outracks_Simulator_Protocol_ExceptionInfo* current = head; current != NULL; current = ::uPtr< ::app::Uno::Collections::EnumerableExtensions_LinkedList__Outracks_Simulator_Protocol_ExceptionInfo*>(current)->Next)
    {
        res->ItemStrong< ::app::Outracks::Simulator::Protocol::ExceptionInfo*>(--count) = ::uPtr< ::app::Uno::Collections::EnumerableExtensions_LinkedList__Outracks_Simulator_Protocol_ExceptionInfo*>(current)->Item;
    }

    return res;
}

::uArray* EnumerableExtensions__ToArray__string(::uStatic* __this, ::uObject* self)
{
    ::app::Uno::Collections::EnumerableExtensions_LinkedList__string* head = NULL;
    int count = 0;

    for (::uObject* enum_123 = ::app::Uno::Collections::IEnumerable__string::GetEnumerator(::uPtr< ::uObject*>(self)); ::app::Uno::Collections::IEnumerator::MoveNext(::uPtr< ::uObject*>(enum_123)); )
    {
        ::uString* item = ::app::Uno::Collections::IEnumerator__string::Current(::uPtr< ::uObject*>(enum_123));
        head = ::app::Uno::Collections::EnumerableExtensions_LinkedList__string__New_1(NULL, item, head);
        count++;
    }

    ::uArray* res = ::uNewArray(::app::Uno::String__typeof(), count);

    for (::app::Uno::Collections::EnumerableExtensions_LinkedList__string* current = head; current != NULL; current = ::uPtr< ::app::Uno::Collections::EnumerableExtensions_LinkedList__string*>(current)->Next)
    {
        res->ItemStrong< ::uString*>(--count) = ::uPtr< ::app::Uno::Collections::EnumerableExtensions_LinkedList__string*>(current)->Item;
    }

    return res;
}

::uArray* EnumerableExtensions__ToArray__Uno_Exception(::uStatic* __this, ::uObject* self)
{
    ::app::Uno::Collections::EnumerableExtensions_LinkedList__Uno_Exception* head = NULL;
    int count = 0;

    for (::uObject* enum_123 = ::app::Uno::Collections::IEnumerable__Uno_Exception::GetEnumerator(::uPtr< ::uObject*>(self)); ::app::Uno::Collections::IEnumerator::MoveNext(::uPtr< ::uObject*>(enum_123)); )
    {
        ::app::Uno::Exception* item = ::app::Uno::Collections::IEnumerator__Uno_Exception::Current(::uPtr< ::uObject*>(enum_123));
        head = ::app::Uno::Collections::EnumerableExtensions_LinkedList__Uno_Exception__New_1(NULL, item, head);
        count++;
    }

    ::uArray* res = ::uNewArray(::app::Uno::Exception__typeof(), count);

    for (::app::Uno::Collections::EnumerableExtensions_LinkedList__Uno_Exception* current = head; current != NULL; current = ::uPtr< ::app::Uno::Collections::EnumerableExtensions_LinkedList__Uno_Exception*>(current)->Next)
    {
        res->ItemStrong< ::app::Uno::Exception*>(--count) = ::uPtr< ::app::Uno::Collections::EnumerableExtensions_LinkedList__Uno_Exception*>(current)->Item;
    }

    return res;
}

::uArray* EnumerableExtensions__ToArray__Uno_Net_IPEndPoint(::uStatic* __this, ::uObject* self)
{
    ::app::Uno::Collections::EnumerableExtensions_LinkedList__Uno_Net_IPEndPoint* head = NULL;
    int count = 0;

    for (::uObject* enum_123 = ::app::Uno::Collections::IEnumerable__Uno_Net_IPEndPoint::GetEnumerator(::uPtr< ::uObject*>(self)); ::app::Uno::Collections::IEnumerator::MoveNext(::uPtr< ::uObject*>(enum_123)); )
    {
        ::app::Uno::Net::IPEndPoint* item = ::app::Uno::Collections::IEnumerator__Uno_Net_IPEndPoint::Current(::uPtr< ::uObject*>(enum_123));
        head = ::app::Uno::Collections::EnumerableExtensions_LinkedList__Uno_Net_IPEndPoint__New_1(NULL, item, head);
        count++;
    }

    ::uArray* res = ::uNewArray(::app::Uno::Net::IPEndPoint__typeof(), count);

    for (::app::Uno::Collections::EnumerableExtensions_LinkedList__Uno_Net_IPEndPoint* current = head; current != NULL; current = ::uPtr< ::app::Uno::Collections::EnumerableExtensions_LinkedList__Uno_Net_IPEndPoint*>(current)->Next)
    {
        res->ItemStrong< ::app::Uno::Net::IPEndPoint*>(--count) = ::uPtr< ::app::Uno::Collections::EnumerableExtensions_LinkedList__Uno_Net_IPEndPoint*>(current)->Item;
    }

    return res;
}

::uArray* EnumerableExtensions__ToArray__Uno_UX_Resource(::uStatic* __this, ::uObject* self)
{
    ::app::Uno::Collections::EnumerableExtensions_LinkedList__Uno_UX_Resource* head = NULL;
    int count = 0;

    for (::uObject* enum_123 = ::app::Uno::Collections::IEnumerable__Uno_UX_Resource::GetEnumerator(::uPtr< ::uObject*>(self)); ::app::Uno::Collections::IEnumerator::MoveNext(::uPtr< ::uObject*>(enum_123)); )
    {
        ::app::Uno::UX::Resource* item = ::app::Uno::Collections::IEnumerator__Uno_UX_Resource::Current(::uPtr< ::uObject*>(enum_123));
        head = ::app::Uno::Collections::EnumerableExtensions_LinkedList__Uno_UX_Resource__New_1(NULL, item, head);
        count++;
    }

    ::uArray* res = ::uNewArray(::app::Uno::UX::Resource__typeof(), count);

    for (::app::Uno::Collections::EnumerableExtensions_LinkedList__Uno_UX_Resource* current = head; current != NULL; current = ::uPtr< ::app::Uno::Collections::EnumerableExtensions_LinkedList__Uno_UX_Resource*>(current)->Next)
    {
        res->ItemStrong< ::app::Uno::UX::Resource*>(--count) = ::uPtr< ::app::Uno::Collections::EnumerableExtensions_LinkedList__Uno_UX_Resource*>(current)->Item;
    }

    return res;
}

::app::Uno::Collections::List__Fuse_Drawing_GradientStop* EnumerableExtensions__ToList__Fuse_Drawing_GradientStop(::uStatic* __this, ::uObject* self)
{
    ::app::Uno::Collections::EnumerableExtensions_LinkedList__Fuse_Drawing_GradientStop* head = NULL;
    int count = 0;

    for (::uObject* enum_123 = ::app::Uno::Collections::IEnumerable__Fuse_Drawing_GradientStop::GetEnumerator(::uPtr< ::uObject*>(self)); ::app::Uno::Collections::IEnumerator::MoveNext(::uPtr< ::uObject*>(enum_123)); )
    {
        ::app::Fuse::Drawing::GradientStop* item = ::app::Uno::Collections::IEnumerator__Fuse_Drawing_GradientStop::Current(::uPtr< ::uObject*>(enum_123));
        head = ::app::Uno::Collections::EnumerableExtensions_LinkedList__Fuse_Drawing_GradientStop__New_1(NULL, item, head);
        count++;
    }

    ::app::Uno::Collections::List__Fuse_Drawing_GradientStop* res = ::app::Uno::Collections::List__Fuse_Drawing_GradientStop__New_2(NULL, count);
    ::uPtr< ::app::Uno::Collections::List__Fuse_Drawing_GradientStop*>(res)->AddRange((::uObject*)::app::Uno::Runtime::Implementation::Internal::ArrayEnumerable__Fuse_Drawing_GradientStop__New_1(NULL, ::uNewArray(::app::Fuse::Drawing::GradientStop__typeof(), count)));

    for (::app::Uno::Collections::EnumerableExtensions_LinkedList__Fuse_Drawing_GradientStop* current = head; current != NULL; current = ::uPtr< ::app::Uno::Collections::EnumerableExtensions_LinkedList__Fuse_Drawing_GradientStop*>(current)->Next)
    {
        res->Item(--count, ::uPtr< ::app::Uno::Collections::EnumerableExtensions_LinkedList__Fuse_Drawing_GradientStop*>(current)->Item);
    }

    return res;
}

::app::Uno::Collections::List__Outracks_Simulator_Task_Outracks_Simulator_ISimulatorClient_* EnumerableExtensions__ToList__Outracks_Simulator_Task_Outracks_Simulator_ISimulatorClient_(::uStatic* __this, ::uObject* self)
{
    ::app::Uno::Collections::EnumerableExtensions_LinkedList__Outracks_Simulator_Task_Outracks_Simulator_ISimulatorClient_* head = NULL;
    int count = 0;

    for (::uObject* enum_123 = ::app::Uno::Collections::IEnumerable__Outracks_Simulator_Task_Outracks_Simulator_ISimulatorClient_::GetEnumerator(::uPtr< ::uObject*>(self)); ::app::Uno::Collections::IEnumerator::MoveNext(::uPtr< ::uObject*>(enum_123)); )
    {
        ::app::Outracks::Simulator::Task__Outracks_Simulator_ISimulatorClient* item = ::app::Uno::Collections::IEnumerator__Outracks_Simulator_Task_Outracks_Simulator_ISimulatorClient_::Current(::uPtr< ::uObject*>(enum_123));
        head = ::app::Uno::Collections::EnumerableExtensions_LinkedList__Outracks_Simulator_Task_Outracks_Simulator_ISimulatorClient___New_1(NULL, item, head);
        count++;
    }

    ::app::Uno::Collections::List__Outracks_Simulator_Task_Outracks_Simulator_ISimulatorClient_* res = ::app::Uno::Collections::List__Outracks_Simulator_Task_Outracks_Simulator_ISimulatorClient___New_2(NULL, count);
    ::uPtr< ::app::Uno::Collections::List__Outracks_Simulator_Task_Outracks_Simulator_ISimulatorClient_*>(res)->AddRange((::uObject*)::app::Uno::Runtime::Implementation::Internal::ArrayEnumerable__Outracks_Simulator_Task_Outracks_Simulator_ISimulatorClient___New_1(NULL, ::uNewArray(::app::Outracks::Simulator::Task__Outracks_Simulator_ISimulatorClient__typeof(), count)));

    for (::app::Uno::Collections::EnumerableExtensions_LinkedList__Outracks_Simulator_Task_Outracks_Simulator_ISimulatorClient_* current = head; current != NULL; current = ::uPtr< ::app::Uno::Collections::EnumerableExtensions_LinkedList__Outracks_Simulator_Task_Outracks_Simulator_ISimulatorClient_*>(current)->Next)
    {
        res->Item(--count, ::uPtr< ::app::Uno::Collections::EnumerableExtensions_LinkedList__Outracks_Simulator_Task_Outracks_Simulator_ISimulatorClient_*>(current)->Item);
    }

    return res;
}

::app::Uno::Collections::List__Outracks_Simulator_Task_Uno_Net_IPEndPoint___* EnumerableExtensions__ToList__Outracks_Simulator_Task_Uno_Net_IPEndPoint___(::uStatic* __this, ::uObject* self)
{
    ::app::Uno::Collections::EnumerableExtensions_LinkedList__Outracks_Simulator_Task_Uno_Net_IPEndPoint___* head = NULL;
    int count = 0;

    for (::uObject* enum_123 = ::app::Uno::Collections::IEnumerable__Outracks_Simulator_Task_Uno_Net_IPEndPoint___::GetEnumerator(::uPtr< ::uObject*>(self)); ::app::Uno::Collections::IEnumerator::MoveNext(::uPtr< ::uObject*>(enum_123)); )
    {
        ::app::Outracks::Simulator::Task__Uno_Net_IPEndPoint__* item = ::app::Uno::Collections::IEnumerator__Outracks_Simulator_Task_Uno_Net_IPEndPoint___::Current(::uPtr< ::uObject*>(enum_123));
        head = ::app::Uno::Collections::EnumerableExtensions_LinkedList__Outracks_Simulator_Task_Uno_Net_IPEndPoint_____New_1(NULL, item, head);
        count++;
    }

    ::app::Uno::Collections::List__Outracks_Simulator_Task_Uno_Net_IPEndPoint___* res = ::app::Uno::Collections::List__Outracks_Simulator_Task_Uno_Net_IPEndPoint_____New_2(NULL, count);
    ::uPtr< ::app::Uno::Collections::List__Outracks_Simulator_Task_Uno_Net_IPEndPoint___*>(res)->AddRange((::uObject*)::app::Uno::Runtime::Implementation::Internal::ArrayEnumerable__Outracks_Simulator_Task_Uno_Net_IPEndPoint_____New_1(NULL, ::uNewArray(::app::Outracks::Simulator::Task__Uno_Net_IPEndPoint____typeof(), count)));

    for (::app::Uno::Collections::EnumerableExtensions_LinkedList__Outracks_Simulator_Task_Uno_Net_IPEndPoint___* current = head; current != NULL; current = ::uPtr< ::app::Uno::Collections::EnumerableExtensions_LinkedList__Outracks_Simulator_Task_Uno_Net_IPEndPoint___*>(current)->Next)
    {
        res->Item(--count, ::uPtr< ::app::Uno::Collections::EnumerableExtensions_LinkedList__Outracks_Simulator_Task_Uno_Net_IPEndPoint___*>(current)->Item);
    }

    return res;
}

::uObject* EnumerableExtensions__Union__float2(::uStatic* __this, ::uObject* self, ::uObject* other)
{
    return (::uObject*)::app::Uno::Collections::UnionEnumerable__float2__New_1(NULL, self, other);
}

::uObject* EnumerableExtensions__Union__Fuse_Drawing_Contour(::uStatic* __this, ::uObject* self, ::uObject* other)
{
    return (::uObject*)::app::Uno::Collections::UnionEnumerable__Fuse_Drawing_Contour__New_1(NULL, self, other);
}

::uObject* EnumerableExtensions__Union__Outracks_Simulator_Bytecode_Statement(::uStatic* __this, ::uObject* self, ::uObject* other)
{
    return (::uObject*)::app::Uno::Collections::UnionEnumerable__Outracks_Simulator_Bytecode_Statement__New_1(NULL, self, other);
}

::uObject* EnumerableExtensions__Union__Outracks_Simulator_DialogButton(::uStatic* __this, ::uObject* self, ::uObject* other)
{
    return (::uObject*)::app::Uno::Collections::UnionEnumerable__Outracks_Simulator_DialogButton__New_1(NULL, self, other);
}

::uObject* EnumerableExtensions__Where__Fuse_Drawing_Tesselation_Face(::uStatic* __this, ::uObject* self, ::uDelegate* predicate)
{
    return (::uObject*)::app::Uno::Collections::WhereEnumerable__Fuse_Drawing_Tesselation_Face__New_1(NULL, self, predicate);
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Collections\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

::uInterfaceType* ICollection__Fuse_Animations_Animator__typeof()
{
    static ::uStaticStrong< ::uInterfaceType*> type;
    if (type != NULL) return type;

    type = ::uAllocInterfaceType("Uno.Collections.ICollection<Fuse.Animations.Animator>");

    ::uRegisterType(type);
    return type;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Collections\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

::uInterfaceType* ICollection__Fuse_Animations_Keyframe__typeof()
{
    static ::uStaticStrong< ::uInterfaceType*> type;
    if (type != NULL) return type;

    type = ::uAllocInterfaceType("Uno.Collections.ICollection<Fuse.Animations.Keyframe>");

    ::uRegisterType(type);
    return type;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Collections\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

::uInterfaceType* ICollection__Fuse_Behavior__typeof()
{
    static ::uStaticStrong< ::uInterfaceType*> type;
    if (type != NULL) return type;

    type = ::uAllocInterfaceType("Uno.Collections.ICollection<Fuse.Behavior>");

    ::uRegisterType(type);
    return type;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Collections\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

::uInterfaceType* ICollection__Fuse_Drawing_Brush__typeof()
{
    static ::uStaticStrong< ::uInterfaceType*> type;
    if (type != NULL) return type;

    type = ::uAllocInterfaceType("Uno.Collections.ICollection<Fuse.Drawing.Brush>");

    ::uRegisterType(type);
    return type;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Collections\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

::uInterfaceType* ICollection__Fuse_Drawing_Stroke__typeof()
{
    static ::uStaticStrong< ::uInterfaceType*> type;
    if (type != NULL) return type;

    type = ::uAllocInterfaceType("Uno.Collections.ICollection<Fuse.Drawing.Stroke>");

    ::uRegisterType(type);
    return type;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Collections\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

::uInterfaceType* ICollection__Fuse_Effects_Effect__typeof()
{
    static ::uStaticStrong< ::uInterfaceType*> type;
    if (type != NULL) return type;

    type = ::uAllocInterfaceType("Uno.Collections.ICollection<Fuse.Effects.Effect>");

    ::uRegisterType(type);
    return type;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Collections\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

::uInterfaceType* ICollection__Fuse_Entities_Component__typeof()
{
    static ::uStaticStrong< ::uInterfaceType*> type;
    if (type != NULL) return type;

    type = ::uAllocInterfaceType("Uno.Collections.ICollection<Fuse.Entities.Component>");

    ::uRegisterType(type);
    return type;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Collections\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

::uInterfaceType* ICollection__Fuse_Entities_Entity__typeof()
{
    static ::uStaticStrong< ::uInterfaceType*> type;
    if (type != NULL) return type;

    type = ::uAllocInterfaceType("Uno.Collections.ICollection<Fuse.Entities.Entity>");

    ::uRegisterType(type);
    return type;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Collections\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

::uInterfaceType* ICollection__Fuse_Input_Capturer__typeof()
{
    static ::uStaticStrong< ::uInterfaceType*> type;
    if (type != NULL) return type;

    type = ::uAllocInterfaceType("Uno.Collections.ICollection<Fuse.Input.Capturer>");

    ::uRegisterType(type);
    return type;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Collections\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

::uInterfaceType* ICollection__Fuse_IViewport__typeof()
{
    static ::uStaticStrong< ::uInterfaceType*> type;
    if (type != NULL) return type;

    type = ::uAllocInterfaceType("Uno.Collections.ICollection<Fuse.IViewport>");

    ::uRegisterType(type);
    return type;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Collections\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

::uInterfaceType* ICollection__Fuse_Layouts_Column__typeof()
{
    static ::uStaticStrong< ::uInterfaceType*> type;
    if (type != NULL) return type;

    type = ::uAllocInterfaceType("Uno.Collections.ICollection<Fuse.Layouts.Column>");

    ::uRegisterType(type);
    return type;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Collections\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

::uInterfaceType* ICollection__Fuse_Layouts_Row__typeof()
{
    static ::uStaticStrong< ::uInterfaceType*> type;
    if (type != NULL) return type;

    type = ::uAllocInterfaceType("Uno.Collections.ICollection<Fuse.Layouts.Row>");

    ::uRegisterType(type);
    return type;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Collections\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

::uInterfaceType* ICollection__Fuse_Navigation_INavigationAnimator__typeof()
{
    static ::uStaticStrong< ::uInterfaceType*> type;
    if (type != NULL) return type;

    type = ::uAllocInterfaceType("Uno.Collections.ICollection<Fuse.Navigation.INavigationAnimator>");

    ::uRegisterType(type);
    return type;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Collections\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

::uInterfaceType* ICollection__Fuse_Node__typeof()
{
    static ::uStaticStrong< ::uInterfaceType*> type;
    if (type != NULL) return type;

    type = ::uAllocInterfaceType("Uno.Collections.ICollection<Fuse.Node>");

    ::uRegisterType(type);
    return type;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Collections\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

::uInterfaceType* ICollection__Fuse_RenderTargetEntry__typeof()
{
    static ::uStaticStrong< ::uInterfaceType*> type;
    if (type != NULL) return type;

    type = ::uAllocInterfaceType("Uno.Collections.ICollection<Fuse.RenderTargetEntry>");

    ::uRegisterType(type);
    return type;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Collections\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

::uInterfaceType* ICollection__Fuse_Resources_ImageSource__typeof()
{
    static ::uStaticStrong< ::uInterfaceType*> type;
    if (type != NULL) return type;

    type = ::uAllocInterfaceType("Uno.Collections.ICollection<Fuse.Resources.ImageSource>");

    ::uRegisterType(type);
    return type;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Collections\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

::uInterfaceType* ICollection__Fuse_Style__typeof()
{
    static ::uStaticStrong< ::uInterfaceType*> type;
    if (type != NULL) return type;

    type = ::uAllocInterfaceType("Uno.Collections.ICollection<Fuse.Style>");

    ::uRegisterType(type);
    return type;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Collections\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

::uInterfaceType* ICollection__Fuse_Transform__typeof()
{
    static ::uStaticStrong< ::uInterfaceType*> type;
    if (type != NULL) return type;

    type = ::uAllocInterfaceType("Uno.Collections.ICollection<Fuse.Transform>");

    ::uRegisterType(type);
    return type;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Collections\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

::uInterfaceType* ICollection__Fuse_Triggers_Actions_TriggerAction__typeof()
{
    static ::uStaticStrong< ::uInterfaceType*> type;
    if (type != NULL) return type;

    type = ::uAllocInterfaceType("Uno.Collections.ICollection<Fuse.Triggers.Actions.TriggerAction>");

    ::uRegisterType(type);
    return type;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Collections\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

::uInterfaceType* ICollection__Fuse_Triggers_State__typeof()
{
    static ::uStaticStrong< ::uInterfaceType*> type;
    if (type != NULL) return type;

    type = ::uAllocInterfaceType("Uno.Collections.ICollection<Fuse.Triggers.State>");

    ::uRegisterType(type);
    return type;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Collections\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

::uInterfaceType* ICollection__int4__typeof()
{
    static ::uStaticStrong< ::uInterfaceType*> type;
    if (type != NULL) return type;

    type = ::uAllocInterfaceType("Uno.Collections.ICollection<int4>");

    ::uRegisterType(type);
    return type;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Collections\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

::uInterfaceType* ICollection__Uno_Data_Xml_XmlAttribute__typeof()
{
    static ::uStaticStrong< ::uInterfaceType*> type;
    if (type != NULL) return type;

    type = ::uAllocInterfaceType("Uno.Collections.ICollection<Uno.Data.Xml.XmlAttribute>");

    ::uRegisterType(type);
    return type;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Collections\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

::uInterfaceType* ICollection__Uno_Data_Xml_XmlLinkedNode__typeof()
{
    static ::uStaticStrong< ::uInterfaceType*> type;
    if (type != NULL) return type;

    type = ::uAllocInterfaceType("Uno.Collections.ICollection<Uno.Data.Xml.XmlLinkedNode>");

    ::uRegisterType(type);
    return type;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Collections\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

::uInterfaceType* ICollection__Uno_Data_Xml_XmlNodeHandle__typeof()
{
    static ::uStaticStrong< ::uInterfaceType*> type;
    if (type != NULL) return type;

    type = ::uAllocInterfaceType("Uno.Collections.ICollection<Uno.Data.Xml.XmlNodeHandle>");

    ::uRegisterType(type);
    return type;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Collections\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

::uInterfaceType* ICollection__Uno_Exception__typeof()
{
    static ::uStaticStrong< ::uInterfaceType*> type;
    if (type != NULL) return type;

    type = ::uAllocInterfaceType("Uno.Collections.ICollection<Uno.Exception>");

    ::uRegisterType(type);
    return type;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Collections\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

::uInterfaceType* ICollection__Uno_Graphics_PolygonFace__typeof()
{
    static ::uStaticStrong< ::uInterfaceType*> type;
    if (type != NULL) return type;

    type = ::uAllocInterfaceType("Uno.Collections.ICollection<Uno.Graphics.PolygonFace>");

    ::uRegisterType(type);
    return type;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Collections\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

::uInterfaceType* ICollection__Uno_UX_FileSource__typeof()
{
    static ::uStaticStrong< ::uInterfaceType*> type;
    if (type != NULL) return type;

    type = ::uAllocInterfaceType("Uno.Collections.ICollection<Uno.UX.FileSource>");

    ::uRegisterType(type);
    return type;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Collections\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

::uInterfaceType* ICollection__Uno_UX_ITemplate__typeof()
{
    static ::uStaticStrong< ::uInterfaceType*> type;
    if (type != NULL) return type;

    type = ::uAllocInterfaceType("Uno.Collections.ICollection<Uno.UX.ITemplate>");

    ::uRegisterType(type);
    return type;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Collections\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

::uInterfaceType* ICollection__Uno_UX_Resource__typeof()
{
    static ::uStaticStrong< ::uInterfaceType*> type;
    if (type != NULL) return type;

    type = ::uAllocInterfaceType("Uno.Collections.ICollection<Uno.UX.Resource>");

    ::uRegisterType(type);
    return type;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Collections\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

::uInterfaceType* IDictionary__Android_android_view_View__Fuse_Node__typeof()
{
    static ::uStaticStrong< ::uInterfaceType*> type;
    if (type != NULL) return type;

    type = ::uAllocInterfaceType("Uno.Collections.IDictionary<Android.android.view.View,Fuse.Node>");

    ::uRegisterType(type);
    return type;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Collections\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

::uInterfaceType* IDictionary__char__float__typeof()
{
    static ::uStaticStrong< ::uInterfaceType*> type;
    if (type != NULL) return type;

    type = ::uAllocInterfaceType("Uno.Collections.IDictionary<char,float>");

    ::uRegisterType(type);
    return type;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Collections\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

::uInterfaceType* IDictionary__char__Uno_Content_Fonts_BitmapFont_GlyphInfo__typeof()
{
    static ::uStaticStrong< ::uInterfaceType*> type;
    if (type != NULL) return type;

    type = ::uAllocInterfaceType("Uno.Collections.IDictionary<char,Uno.Content.Fonts.BitmapFont_GlyphInfo>");

    ::uRegisterType(type);
    return type;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Collections\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

::uInterfaceType* IDictionary__char__Uno_Content_Fonts_RenderedGlyph__typeof()
{
    static ::uStaticStrong< ::uInterfaceType*> type;
    if (type != NULL) return type;

    type = ::uAllocInterfaceType("Uno.Collections.IDictionary<char,Uno.Content.Fonts.RenderedGlyph>");

    ::uRegisterType(type);
    return type;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Collections\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

::uInterfaceType* IDictionary__Experimental_Cache_DiskCacheEntry__Experimental_Cache_RecordHeader__typeof()
{
    static ::uStaticStrong< ::uInterfaceType*> type;
    if (type != NULL) return type;

    type = ::uAllocInterfaceType("Uno.Collections.IDictionary<Experimental.Cache.DiskCacheEntry,Experimental.Cache.RecordHeader>");

    ::uRegisterType(type);
    return type;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Collections\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

::uInterfaceType* IDictionary__framebuffer__bool__typeof()
{
    static ::uStaticStrong< ::uInterfaceType*> type;
    if (type != NULL) return type;

    type = ::uAllocInterfaceType("Uno.Collections.IDictionary<framebuffer,bool>");

    ::uRegisterType(type);
    return type;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Collections\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

::uInterfaceType* IDictionary__framebuffer__int__typeof()
{
    static ::uStaticStrong< ::uInterfaceType*> type;
    if (type != NULL) return type;

    type = ::uAllocInterfaceType("Uno.Collections.IDictionary<framebuffer,int>");

    ::uRegisterType(type);
    return type;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Collections\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

::uInterfaceType* IDictionary__Fuse_Controls_Internal_DefaultTextRenderer_FontKey__Uno_Content_Fonts_BitmapFont__typeof()
{
    static ::uStaticStrong< ::uInterfaceType*> type;
    if (type != NULL) return type;

    type = ::uAllocInterfaceType("Uno.Collections.IDictionary<Fuse.Controls.Internal.DefaultTextRenderer_FontKey,Uno.Content.Fonts.BitmapFont>");

    ::uRegisterType(type);
    return type;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Collections\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

::uInterfaceType* IDictionary__Fuse_Drawing_Stroke__Fuse_Drawing_PolygonFiller__typeof()
{
    static ::uStaticStrong< ::uInterfaceType*> type;
    if (type != NULL) return type;

    type = ::uAllocInterfaceType("Uno.Collections.IDictionary<Fuse.Drawing.Stroke,Fuse.Drawing.PolygonFiller>");

    ::uRegisterType(type);
    return type;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Collections\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

::uInterfaceType* IDictionary__Fuse_Entities_Material__Uno_Collections_List_Fuse_Entities_Entry___typeof()
{
    static ::uStaticStrong< ::uInterfaceType*> type;
    if (type != NULL) return type;

    type = ::uAllocInterfaceType("Uno.Collections.IDictionary<Fuse.Entities.Material,Uno.Collections.List<Fuse.Entities.Entry>>");

    ::uRegisterType(type);
    return type;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Collections\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

::uInterfaceType* IDictionary__Fuse_Entities_Mesh__Fuse_Drawing_Batching_MeshBatcher__typeof()
{
    static ::uStaticStrong< ::uInterfaceType*> type;
    if (type != NULL) return type;

    type = ::uAllocInterfaceType("Uno.Collections.IDictionary<Fuse.Entities.Mesh,Fuse.Drawing.Batching.MeshBatcher>");

    ::uRegisterType(type);
    return type;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Collections\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

::uInterfaceType* IDictionary__Fuse_Entities_Mesh__Uno_Collections_List_Fuse_Entities_Entry___typeof()
{
    static ::uStaticStrong< ::uInterfaceType*> type;
    if (type != NULL) return type;

    type = ::uAllocInterfaceType("Uno.Collections.IDictionary<Fuse.Entities.Mesh,Uno.Collections.List<Fuse.Entities.Entry>>");

    ::uRegisterType(type);
    return type;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Collections\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

::uInterfaceType* IDictionary__Fuse_Font__Fuse_Controls_Internal_DefaultTextRenderer__typeof()
{
    static ::uStaticStrong< ::uInterfaceType*> type;
    if (type != NULL) return type;

    type = ::uAllocInterfaceType("Uno.Collections.IDictionary<Fuse.Font,Fuse.Controls.Internal.DefaultTextRenderer>");

    ::uRegisterType(type);
    return type;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Collections\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

::uInterfaceType* IDictionary__Fuse_IFlush__bool__typeof()
{
    static ::uStaticStrong< ::uInterfaceType*> type;
    if (type != NULL) return type;

    type = ::uAllocInterfaceType("Uno.Collections.IDictionary<Fuse.IFlush,bool>");

    ::uRegisterType(type);
    return type;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Collections\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

::uInterfaceType* IDictionary__Fuse_Navigation_NavigationEdge__Fuse_Gestures_Internal_EdgeSwiper__typeof()
{
    static ::uStaticStrong< ::uInterfaceType*> type;
    if (type != NULL) return type;

    type = ::uAllocInterfaceType("Uno.Collections.IDictionary<Fuse.Navigation.NavigationEdge,Fuse.Gestures.Internal.EdgeSwiper>");

    ::uRegisterType(type);
    return type;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Collections\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

::uInterfaceType* IDictionary__Fuse_Node__bool__typeof()
{
    static ::uStaticStrong< ::uInterfaceType*> type;
    if (type != NULL) return type;

    type = ::uAllocInterfaceType("Uno.Collections.IDictionary<Fuse.Node,bool>");

    ::uRegisterType(type);
    return type;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Collections\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

::uInterfaceType* IDictionary__HashableWeakReference__Outracks_Simulator_Bytecode_TypeName__typeof()
{
    static ::uStaticStrong< ::uInterfaceType*> type;
    if (type != NULL) return type;

    type = ::uAllocInterfaceType("Uno.Collections.IDictionary<HashableWeakReference,Outracks.Simulator.Bytecode.TypeName>");

    ::uRegisterType(type);
    return type;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Collections\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

::uInterfaceType* IDictionary__HashableWeakReference__string__typeof()
{
    static ::uStaticStrong< ::uInterfaceType*> type;
    if (type != NULL) return type;

    type = ::uAllocInterfaceType("Uno.Collections.IDictionary<HashableWeakReference,string>");

    ::uRegisterType(type);
    return type;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Collections\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

::uInterfaceType* IDictionary__int__bool__typeof()
{
    static ::uStaticStrong< ::uInterfaceType*> type;
    if (type != NULL) return type;

    type = ::uAllocInterfaceType("Uno.Collections.IDictionary<int,bool>");

    ::uRegisterType(type);
    return type;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Collections\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

::uInterfaceType* IDictionary__int__Fuse_Input_Capturer__typeof()
{
    static ::uStaticStrong< ::uInterfaceType*> type;
    if (type != NULL) return type;

    type = ::uAllocInterfaceType("Uno.Collections.IDictionary<int,Fuse.Input.Capturer>");

    ::uRegisterType(type);
    return type;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Collections\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

::uInterfaceType* IDictionary__int__Fuse_Input_Pointer_PointerRecord__typeof()
{
    static ::uStaticStrong< ::uInterfaceType*> type;
    if (type != NULL) return type;

    type = ::uAllocInterfaceType("Uno.Collections.IDictionary<int,Fuse.Input.Pointer_PointerRecord>");

    ::uRegisterType(type);
    return type;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Collections\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

::uInterfaceType* IDictionary__int__Fuse_Scripting_Callback__typeof()
{
    static ::uStaticStrong< ::uInterfaceType*> type;
    if (type != NULL) return type;

    type = ::uAllocInterfaceType("Uno.Collections.IDictionary<int,Fuse.Scripting.Callback>");

    ::uRegisterType(type);
    return type;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Collections\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

::uInterfaceType* IDictionary__int__int__typeof()
{
    static ::uStaticStrong< ::uInterfaceType*> type;
    if (type != NULL) return type;

    type = ::uAllocInterfaceType("Uno.Collections.IDictionary<int,int>");

    ::uRegisterType(type);
    return type;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Collections\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

::uInterfaceType* IDictionary__int__string__typeof()
{
    static ::uStaticStrong< ::uInterfaceType*> type;
    if (type != NULL) return type;

    type = ::uAllocInterfaceType("Uno.Collections.IDictionary<int,string>");

    ::uRegisterType(type);
    return type;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Collections\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

::uInterfaceType* IDictionary__int__Uno_Collections_IList_Fuse_Input_Capturer___typeof()
{
    static ::uStaticStrong< ::uInterfaceType*> type;
    if (type != NULL) return type;

    type = ::uAllocInterfaceType("Uno.Collections.IDictionary<int,Uno.Collections.IList<Fuse.Input.Capturer>>");

    ::uRegisterType(type);
    return type;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Collections\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

::uInterfaceType* IDictionary__int__Uno_Collections_List_Fuse_Input_Pointer_PELHolder___typeof()
{
    static ::uStaticStrong< ::uInterfaceType*> type;
    if (type != NULL) return type;

    type = ::uAllocInterfaceType("Uno.Collections.IDictionary<int,Uno.Collections.List<Fuse.Input.Pointer_PELHolder>>");

    ::uRegisterType(type);
    return type;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Collections\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

::uInterfaceType* IDictionary__object__object__typeof()
{
    static ::uStaticStrong< ::uInterfaceType*> type;
    if (type != NULL) return type;

    type = ::uAllocInterfaceType("Uno.Collections.IDictionary<object,object>");

    ::uRegisterType(type);
    return type;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Collections\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

::uInterfaceType* IDictionary__object__string__typeof()
{
    static ::uStaticStrong< ::uInterfaceType*> type;
    if (type != NULL) return type;

    type = ::uAllocInterfaceType("Uno.Collections.IDictionary<object,string>");

    ::uRegisterType(type);
    return type;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Collections\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

::uInterfaceType* IDictionary__Outracks_Simulator_Bytecode_TypeName__Outracks_Simulator_Bytecode_TypeName__typeof()
{
    static ::uStaticStrong< ::uInterfaceType*> type;
    if (type != NULL) return type;

    type = ::uAllocInterfaceType("Uno.Collections.IDictionary<Outracks.Simulator.Bytecode.TypeName,Outracks.Simulator.Bytecode.TypeName>");

    ::uRegisterType(type);
    return type;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Collections\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

::uInterfaceType* IDictionary__Outracks_Simulator_Bytecode_TypeName__Uno_Type__typeof()
{
    static ::uStaticStrong< ::uInterfaceType*> type;
    if (type != NULL) return type;

    type = ::uAllocInterfaceType("Uno.Collections.IDictionary<Outracks.Simulator.Bytecode.TypeName,Uno.Type>");

    ::uRegisterType(type);
    return type;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Collections\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

::uInterfaceType* IDictionary__Outracks_Simulator_Bytecode_Variable__object__typeof()
{
    static ::uStaticStrong< ::uInterfaceType*> type;
    if (type != NULL) return type;

    type = ::uAllocInterfaceType("Uno.Collections.IDictionary<Outracks.Simulator.Bytecode.Variable,object>");

    ::uRegisterType(type);
    return type;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Collections\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

::uInterfaceType* IDictionary__string__Android_android_graphics_Bitmap__typeof()
{
    static ::uStaticStrong< ::uInterfaceType*> type;
    if (type != NULL) return type;

    type = ::uAllocInterfaceType("Uno.Collections.IDictionary<string,Android.android.graphics.Bitmap>");

    ::uRegisterType(type);
    return type;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Collections\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

::uInterfaceType* IDictionary__string__Android_android_graphics_Typeface__typeof()
{
    static ::uStaticStrong< ::uInterfaceType*> type;
    if (type != NULL) return type;

    type = ::uAllocInterfaceType("Uno.Collections.IDictionary<string,Android.android.graphics.Typeface>");

    ::uRegisterType(type);
    return type;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Collections\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

::uInterfaceType* IDictionary__string__bool__typeof()
{
    static ::uStaticStrong< ::uInterfaceType*> type;
    if (type != NULL) return type;

    type = ::uAllocInterfaceType("Uno.Collections.IDictionary<string,bool>");

    ::uRegisterType(type);
    return type;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Collections\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

::uInterfaceType* IDictionary__string__Experimental_Cache_DiskCacheEntry__typeof()
{
    static ::uStaticStrong< ::uInterfaceType*> type;
    if (type != NULL) return type;

    type = ::uAllocInterfaceType("Uno.Collections.IDictionary<string,Experimental.Cache.DiskCacheEntry>");

    ::uRegisterType(type);
    return type;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Collections\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

::uInterfaceType* IDictionary__string__Fuse_Shapes_GeometryCacheEntry__typeof()
{
    static ::uStaticStrong< ::uInterfaceType*> type;
    if (type != NULL) return type;

    type = ::uAllocInterfaceType("Uno.Collections.IDictionary<string,Fuse.Shapes.GeometryCacheEntry>");

    ::uRegisterType(type);
    return type;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Collections\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

::uInterfaceType* IDictionary__string__int__typeof()
{
    static ::uStaticStrong< ::uInterfaceType*> type;
    if (type != NULL) return type;

    type = ::uAllocInterfaceType("Uno.Collections.IDictionary<string,int>");

    ::uRegisterType(type);
    return type;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Collections\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

::uInterfaceType* IDictionary__string__object__typeof()
{
    static ::uStaticStrong< ::uInterfaceType*> type;
    if (type != NULL) return type;

    type = ::uAllocInterfaceType("Uno.Collections.IDictionary<string,object>");

    ::uRegisterType(type);
    return type;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Collections\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

::uInterfaceType* IDictionary__string__Outracks_Simulator_ByteFileSource__typeof()
{
    static ::uStaticStrong< ::uInterfaceType*> type;
    if (type != NULL) return type;

    type = ::uAllocInterfaceType("Uno.Collections.IDictionary<string,Outracks.Simulator.ByteFileSource>");

    ::uRegisterType(type);
    return type;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Collections\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

::uInterfaceType* IDictionary__string__string__typeof()
{
    static ::uStaticStrong< ::uInterfaceType*> type;
    if (type != NULL) return type;

    type = ::uAllocInterfaceType("Uno.Collections.IDictionary<string,string>");

    ::uRegisterType(type);
    return type;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Collections\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

::uInterfaceType* IDictionary__string__Uno_Collections_List_Fuse_Scripting_INameListener___typeof()
{
    static ::uStaticStrong< ::uInterfaceType*> type;
    if (type != NULL) return type;

    type = ::uAllocInterfaceType("Uno.Collections.IDictionary<string,Uno.Collections.List<Fuse.Scripting.INameListener>>");

    ::uRegisterType(type);
    return type;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Collections\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

::uInterfaceType* IDictionary__string__Uno_Collections_List_object___typeof()
{
    static ::uStaticStrong< ::uInterfaceType*> type;
    if (type != NULL) return type;

    type = ::uAllocInterfaceType("Uno.Collections.IDictionary<string,Uno.Collections.List<object>>");

    ::uRegisterType(type);
    return type;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Collections\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

::uInterfaceType* IDictionary__string__Uno_Collections_List_Uno_Action___typeof()
{
    static ::uStaticStrong< ::uInterfaceType*> type;
    if (type != NULL) return type;

    type = ::uAllocInterfaceType("Uno.Collections.IDictionary<string,Uno.Collections.List<Uno.Action>>");

    ::uRegisterType(type);
    return type;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Collections\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

::uInterfaceType* IDictionary__string__Uno_Content_Models_ModelParameter__typeof()
{
    static ::uStaticStrong< ::uInterfaceType*> type;
    if (type != NULL) return type;

    type = ::uAllocInterfaceType("Uno.Collections.IDictionary<string,Uno.Content.Models.ModelParameter>");

    ::uRegisterType(type);
    return type;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Collections\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

::uInterfaceType* IDictionary__string__Uno_Content_Models_VertexAttributeArray__typeof()
{
    static ::uStaticStrong< ::uInterfaceType*> type;
    if (type != NULL) return type;

    type = ::uAllocInterfaceType("Uno.Collections.IDictionary<string,Uno.Content.Models.VertexAttributeArray>");

    ::uRegisterType(type);
    return type;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Collections\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

::uInterfaceType* IDictionary__string__Uno_Data_Json_Value__typeof()
{
    static ::uStaticStrong< ::uInterfaceType*> type;
    if (type != NULL) return type;

    type = ::uAllocInterfaceType("Uno.Collections.IDictionary<string,Uno.Data.Json.Value>");

    ::uRegisterType(type);
    return type;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Collections\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

::uInterfaceType* IDictionary__string__Uno_Data_Xml_XmlEncoding__typeof()
{
    static ::uStaticStrong< ::uInterfaceType*> type;
    if (type != NULL) return type;

    type = ::uAllocInterfaceType("Uno.Collections.IDictionary<string,Uno.Data.Xml.XmlEncoding>");

    ::uRegisterType(type);
    return type;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Collections\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

::uInterfaceType* IDictionary__string__Uno_Runtime_Implementation_ShaderBackends_OpenGL_GLCompiledProgram__typeof()
{
    static ::uStaticStrong< ::uInterfaceType*> type;
    if (type != NULL) return type;

    type = ::uAllocInterfaceType("Uno.Collections.IDictionary<string,Uno.Runtime.Implementation.ShaderBackends.OpenGL.GLCompiledProgram>");

    ::uRegisterType(type);
    return type;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Collections\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

::uInterfaceType* IDictionary__string__Uno_WeakReference_Fuse_Resources_HttpImageSourceImpl___typeof()
{
    static ::uStaticStrong< ::uInterfaceType*> type;
    if (type != NULL) return type;

    type = ::uAllocInterfaceType("Uno.Collections.IDictionary<string,Uno.WeakReference<Fuse.Resources.HttpImageSourceImpl>>");

    ::uRegisterType(type);
    return type;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Collections\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

::uInterfaceType* IDictionary__Uno_Content_Fonts_BitmapFont_CharPair__float__typeof()
{
    static ::uStaticStrong< ::uInterfaceType*> type;
    if (type != NULL) return type;

    type = ::uAllocInterfaceType("Uno.Collections.IDictionary<Uno.Content.Fonts.BitmapFont_CharPair,float>");

    ::uRegisterType(type);
    return type;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Collections\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

::uInterfaceType* IDictionary__Uno_Type__object__typeof()
{
    static ::uStaticStrong< ::uInterfaceType*> type;
    if (type != NULL) return type;

    type = ::uAllocInterfaceType("Uno.Collections.IDictionary<Uno.Type,object>");

    ::uRegisterType(type);
    return type;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Collections\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

::uInterfaceType* IDictionary__Uno_Type__Uno_Reflection_CppField____typeof()
{
    static ::uStaticStrong< ::uInterfaceType*> type;
    if (type != NULL) return type;

    type = ::uAllocInterfaceType("Uno.Collections.IDictionary<Uno.Type,Uno.Reflection.CppField[]>");

    ::uRegisterType(type);
    return type;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Collections\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

::uInterfaceType* IDictionary__Uno_Type__Uno_Reflection_CppFunction____typeof()
{
    static ::uStaticStrong< ::uInterfaceType*> type;
    if (type != NULL) return type;

    type = ::uAllocInterfaceType("Uno.Collections.IDictionary<Uno.Type,Uno.Reflection.CppFunction[]>");

    ::uRegisterType(type);
    return type;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Collections\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

::uInterfaceType* IDictionary__Uno_UX_FileSource__Uno_Content_Fonts_FontFace__typeof()
{
    static ::uStaticStrong< ::uInterfaceType*> type;
    if (type != NULL) return type;

    type = ::uAllocInterfaceType("Uno.Collections.IDictionary<Uno.UX.FileSource,Uno.Content.Fonts.FontFace>");

    ::uRegisterType(type);
    return type;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Collections\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

::uInterfaceType* IDictionary__Uno_UX_FileSource__Uno_WeakReference_Fuse_Resources_FileImageSourceImpl___typeof()
{
    static ::uStaticStrong< ::uInterfaceType*> type;
    if (type != NULL) return type;

    type = ::uAllocInterfaceType("Uno.Collections.IDictionary<Uno.UX.FileSource,Uno.WeakReference<Fuse.Resources.FileImageSourceImpl>>");

    ::uRegisterType(type);
    return type;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Collections\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

::uInterfaceType* IEnumerable__byte__typeof()
{
    static ::uStaticStrong< ::uInterfaceType*> type;
    if (type != NULL) return type;

    type = ::uAllocInterfaceType("Uno.Collections.IEnumerable<byte>");

    ::uRegisterType(type);
    return type;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Collections\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

::uInterfaceType* IEnumerable__byte____typeof()
{
    static ::uStaticStrong< ::uInterfaceType*> type;
    if (type != NULL) return type;

    type = ::uAllocInterfaceType("Uno.Collections.IEnumerable<byte[]>");

    ::uRegisterType(type);
    return type;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Collections\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

::uInterfaceType* IEnumerable__char__typeof()
{
    static ::uStaticStrong< ::uInterfaceType*> type;
    if (type != NULL) return type;

    type = ::uAllocInterfaceType("Uno.Collections.IEnumerable<char>");

    ::uRegisterType(type);
    return type;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Collections\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

::uInterfaceType* IEnumerable__Experimental_Cache_DiskCacheEntry__typeof()
{
    static ::uStaticStrong< ::uInterfaceType*> type;
    if (type != NULL) return type;

    type = ::uAllocInterfaceType("Uno.Collections.IEnumerable<Experimental.Cache.DiskCacheEntry>");

    ::uRegisterType(type);
    return type;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Collections\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

::uInterfaceType* IEnumerable__float2__typeof()
{
    static ::uStaticStrong< ::uInterfaceType*> type;
    if (type != NULL) return type;

    type = ::uAllocInterfaceType("Uno.Collections.IEnumerable<float2>");

    ::uRegisterType(type);
    return type;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Collections\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

::uInterfaceType* IEnumerable__float3__typeof()
{
    static ::uStaticStrong< ::uInterfaceType*> type;
    if (type != NULL) return type;

    type = ::uAllocInterfaceType("Uno.Collections.IEnumerable<float3>");

    ::uRegisterType(type);
    return type;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Collections\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

::uInterfaceType* IEnumerable__float4__typeof()
{
    static ::uStaticStrong< ::uInterfaceType*> type;
    if (type != NULL) return type;

    type = ::uAllocInterfaceType("Uno.Collections.IEnumerable<float4>");

    ::uRegisterType(type);
    return type;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Collections\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

::uInterfaceType* IEnumerable__framebuffer__typeof()
{
    static ::uStaticStrong< ::uInterfaceType*> type;
    if (type != NULL) return type;

    type = ::uAllocInterfaceType("Uno.Collections.IEnumerable<framebuffer>");

    ::uRegisterType(type);
    return type;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Collections\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

::uInterfaceType* IEnumerable__Fuse_Animations_Animator__typeof()
{
    static ::uStaticStrong< ::uInterfaceType*> type;
    if (type != NULL) return type;

    type = ::uAllocInterfaceType("Uno.Collections.IEnumerable<Fuse.Animations.Animator>");

    ::uRegisterType(type);
    return type;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Collections\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

::uInterfaceType* IEnumerable__Fuse_Animations_IMixerMaster__typeof()
{
    static ::uStaticStrong< ::uInterfaceType*> type;
    if (type != NULL) return type;

    type = ::uAllocInterfaceType("Uno.Collections.IEnumerable<Fuse.Animations.IMixerMaster>");

    ::uRegisterType(type);
    return type;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Collections\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

::uInterfaceType* IEnumerable__Fuse_Animations_Keyframe__typeof()
{
    static ::uStaticStrong< ::uInterfaceType*> type;
    if (type != NULL) return type;

    type = ::uAllocInterfaceType("Uno.Collections.IEnumerable<Fuse.Animations.Keyframe>");

    ::uRegisterType(type);
    return type;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Collections\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

::uInterfaceType* IEnumerable__Fuse_Animations_MixerHandle_bool___typeof()
{
    static ::uStaticStrong< ::uInterfaceType*> type;
    if (type != NULL) return type;

    type = ::uAllocInterfaceType("Uno.Collections.IEnumerable<Fuse.Animations.MixerHandle<bool>>");

    ::uRegisterType(type);
    return type;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Collections\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

::uInterfaceType* IEnumerable__Fuse_Animations_MixerHandle_char___typeof()
{
    static ::uStaticStrong< ::uInterfaceType*> type;
    if (type != NULL) return type;

    type = ::uAllocInterfaceType("Uno.Collections.IEnumerable<Fuse.Animations.MixerHandle<char>>");

    ::uRegisterType(type);
    return type;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Collections\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

::uInterfaceType* IEnumerable__Fuse_Animations_MixerHandle_double___typeof()
{
    static ::uStaticStrong< ::uInterfaceType*> type;
    if (type != NULL) return type;

    type = ::uAllocInterfaceType("Uno.Collections.IEnumerable<Fuse.Animations.MixerHandle<double>>");

    ::uRegisterType(type);
    return type;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Collections\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

::uInterfaceType* IEnumerable__Fuse_Animations_MixerHandle_float___typeof()
{
    static ::uStaticStrong< ::uInterfaceType*> type;
    if (type != NULL) return type;

    type = ::uAllocInterfaceType("Uno.Collections.IEnumerable<Fuse.Animations.MixerHandle<float>>");

    ::uRegisterType(type);
    return type;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Collections\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

::uInterfaceType* IEnumerable__Fuse_Animations_MixerHandle_float2___typeof()
{
    static ::uStaticStrong< ::uInterfaceType*> type;
    if (type != NULL) return type;

    type = ::uAllocInterfaceType("Uno.Collections.IEnumerable<Fuse.Animations.MixerHandle<float2>>");

    ::uRegisterType(type);
    return type;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Collections\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

::uInterfaceType* IEnumerable__Fuse_Animations_MixerHandle_float3___typeof()
{
    static ::uStaticStrong< ::uInterfaceType*> type;
    if (type != NULL) return type;

    type = ::uAllocInterfaceType("Uno.Collections.IEnumerable<Fuse.Animations.MixerHandle<float3>>");

    ::uRegisterType(type);
    return type;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Collections\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

::uInterfaceType* IEnumerable__Fuse_Animations_MixerHandle_float4___typeof()
{
    static ::uStaticStrong< ::uInterfaceType*> type;
    if (type != NULL) return type;

    type = ::uAllocInterfaceType("Uno.Collections.IEnumerable<Fuse.Animations.MixerHandle<float4>>");

    ::uRegisterType(type);
    return type;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Collections\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

::uInterfaceType* IEnumerable__Fuse_Animations_MixerHandle_Fuse_Animations_AnimationVariant___typeof()
{
    static ::uStaticStrong< ::uInterfaceType*> type;
    if (type != NULL) return type;

    type = ::uAllocInterfaceType("Uno.Collections.IEnumerable<Fuse.Animations.MixerHandle<Fuse.Animations.AnimationVariant>>");

    ::uRegisterType(type);
    return type;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Collections\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

::uInterfaceType* IEnumerable__Fuse_Animations_MixerHandle_Fuse_Animations_Easing___typeof()
{
    static ::uStaticStrong< ::uInterfaceType*> type;
    if (type != NULL) return type;

    type = ::uAllocInterfaceType("Uno.Collections.IEnumerable<Fuse.Animations.MixerHandle<Fuse.Animations.Easing>>");

    ::uRegisterType(type);
    return type;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Collections\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

::uInterfaceType* IEnumerable__Fuse_Animations_MixerHandle_Fuse_Animations_KeyframeInterpolation___typeof()
{
    static ::uStaticStrong< ::uInterfaceType*> type;
    if (type != NULL) return type;

    type = ::uAllocInterfaceType("Uno.Collections.IEnumerable<Fuse.Animations.MixerHandle<Fuse.Animations.KeyframeInterpolation>>");

    ::uRegisterType(type);
    return type;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Collections\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

::uInterfaceType* IEnumerable__Fuse_Animations_MixerHandle_Fuse_Animations_MixOp___typeof()
{
    static ::uStaticStrong< ::uInterfaceType*> type;
    if (type != NULL) return type;

    type = ::uAllocInterfaceType("Uno.Collections.IEnumerable<Fuse.Animations.MixerHandle<Fuse.Animations.MixOp>>");

    ::uRegisterType(type);
    return type;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Collections\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

::uInterfaceType* IEnumerable__Fuse_Animations_MixerHandle_Fuse_Drawing_BlendMode___typeof()
{
    static ::uStaticStrong< ::uInterfaceType*> type;
    if (type != NULL) return type;

    type = ::uAllocInterfaceType("Uno.Collections.IEnumerable<Fuse.Animations.MixerHandle<Fuse.Drawing.BlendMode>>");

    ::uRegisterType(type);
    return type;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Collections\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

::uInterfaceType* IEnumerable__Fuse_Animations_MixerHandle_Fuse_Drawing_Brush___typeof()
{
    static ::uStaticStrong< ::uInterfaceType*> type;
    if (type != NULL) return type;

    type = ::uAllocInterfaceType("Uno.Collections.IEnumerable<Fuse.Animations.MixerHandle<Fuse.Drawing.Brush>>");

    ::uRegisterType(type);
    return type;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Collections\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

::uInterfaceType* IEnumerable__Fuse_Animations_MixerHandle_Fuse_Drawing_DynamicBrush___typeof()
{
    static ::uStaticStrong< ::uInterfaceType*> type;
    if (type != NULL) return type;

    type = ::uAllocInterfaceType("Uno.Collections.IEnumerable<Fuse.Animations.MixerHandle<Fuse.Drawing.DynamicBrush>>");

    ::uRegisterType(type);
    return type;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Collections\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

::uInterfaceType* IEnumerable__Fuse_Animations_MixerHandle_Fuse_Drawing_GradientStop___typeof()
{
    static ::uStaticStrong< ::uInterfaceType*> type;
    if (type != NULL) return type;

    type = ::uAllocInterfaceType("Uno.Collections.IEnumerable<Fuse.Animations.MixerHandle<Fuse.Drawing.GradientStop>>");

    ::uRegisterType(type);
    return type;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Collections\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

::uInterfaceType* IEnumerable__Fuse_Animations_MixerHandle_Fuse_Drawing_LinearGradient___typeof()
{
    static ::uStaticStrong< ::uInterfaceType*> type;
    if (type != NULL) return type;

    type = ::uAllocInterfaceType("Uno.Collections.IEnumerable<Fuse.Animations.MixerHandle<Fuse.Drawing.LinearGradient>>");

    ::uRegisterType(type);
    return type;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Collections\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

::uInterfaceType* IEnumerable__Fuse_Animations_MixerHandle_Fuse_Drawing_SolidColor___typeof()
{
    static ::uStaticStrong< ::uInterfaceType*> type;
    if (type != NULL) return type;

    type = ::uAllocInterfaceType("Uno.Collections.IEnumerable<Fuse.Animations.MixerHandle<Fuse.Drawing.SolidColor>>");

    ::uRegisterType(type);
    return type;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Collections\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

::uInterfaceType* IEnumerable__Fuse_Animations_MixerHandle_Fuse_Drawing_StaticBrush___typeof()
{
    static ::uStaticStrong< ::uInterfaceType*> type;
    if (type != NULL) return type;

    type = ::uAllocInterfaceType("Uno.Collections.IEnumerable<Fuse.Animations.MixerHandle<Fuse.Drawing.StaticBrush>>");

    ::uRegisterType(type);
    return type;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Collections\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

::uInterfaceType* IEnumerable__Fuse_Animations_MixerHandle_Fuse_Elements_Alignment___typeof()
{
    static ::uStaticStrong< ::uInterfaceType*> type;
    if (type != NULL) return type;

    type = ::uAllocInterfaceType("Uno.Collections.IEnumerable<Fuse.Animations.MixerHandle<Fuse.Elements.Alignment>>");

    ::uRegisterType(type);
    return type;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Collections\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

::uInterfaceType* IEnumerable__Fuse_Animations_MixerHandle_Fuse_Elements_CachingMode___typeof()
{
    static ::uStaticStrong< ::uInterfaceType*> type;
    if (type != NULL) return type;

    type = ::uAllocInterfaceType("Uno.Collections.IEnumerable<Fuse.Animations.MixerHandle<Fuse.Elements.CachingMode>>");

    ::uRegisterType(type);
    return type;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Collections\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

::uInterfaceType* IEnumerable__Fuse_Animations_MixerHandle_Fuse_Elements_Element___typeof()
{
    static ::uStaticStrong< ::uInterfaceType*> type;
    if (type != NULL) return type;

    type = ::uAllocInterfaceType("Uno.Collections.IEnumerable<Fuse.Animations.MixerHandle<Fuse.Elements.Element>>");

    ::uRegisterType(type);
    return type;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Collections\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

::uInterfaceType* IEnumerable__Fuse_Animations_MixerHandle_Fuse_Elements_HitTestMode___typeof()
{
    static ::uStaticStrong< ::uInterfaceType*> type;
    if (type != NULL) return type;

    type = ::uAllocInterfaceType("Uno.Collections.IEnumerable<Fuse.Animations.MixerHandle<Fuse.Elements.HitTestMode>>");

    ::uRegisterType(type);
    return type;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Collections\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

::uInterfaceType* IEnumerable__Fuse_Animations_MixerHandle_Fuse_Elements_SizeUnit___typeof()
{
    static ::uStaticStrong< ::uInterfaceType*> type;
    if (type != NULL) return type;

    type = ::uAllocInterfaceType("Uno.Collections.IEnumerable<Fuse.Animations.MixerHandle<Fuse.Elements.SizeUnit>>");

    ::uRegisterType(type);
    return type;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Collections\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

::uInterfaceType* IEnumerable__Fuse_Animations_MixerHandle_Fuse_Elements_StretchDirection___typeof()
{
    static ::uStaticStrong< ::uInterfaceType*> type;
    if (type != NULL) return type;

    type = ::uAllocInterfaceType("Uno.Collections.IEnumerable<Fuse.Animations.MixerHandle<Fuse.Elements.StretchDirection>>");

    ::uRegisterType(type);
    return type;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Collections\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

::uInterfaceType* IEnumerable__Fuse_Animations_MixerHandle_Fuse_Elements_StretchMode___typeof()
{
    static ::uStaticStrong< ::uInterfaceType*> type;
    if (type != NULL) return type;

    type = ::uAllocInterfaceType("Uno.Collections.IEnumerable<Fuse.Animations.MixerHandle<Fuse.Elements.StretchMode>>");

    ::uRegisterType(type);
    return type;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Collections\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

::uInterfaceType* IEnumerable__Fuse_Animations_MixerHandle_Fuse_Elements_StretchSizing___typeof()
{
    static ::uStaticStrong< ::uInterfaceType*> type;
    if (type != NULL) return type;

    type = ::uAllocInterfaceType("Uno.Collections.IEnumerable<Fuse.Animations.MixerHandle<Fuse.Elements.StretchSizing>>");

    ::uRegisterType(type);
    return type;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Collections\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

::uInterfaceType* IEnumerable__Fuse_Animations_MixerHandle_Fuse_Elements_TextAlignment___typeof()
{
    static ::uStaticStrong< ::uInterfaceType*> type;
    if (type != NULL) return type;

    type = ::uAllocInterfaceType("Uno.Collections.IEnumerable<Fuse.Animations.MixerHandle<Fuse.Elements.TextAlignment>>");

    ::uRegisterType(type);
    return type;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Collections\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

::uInterfaceType* IEnumerable__Fuse_Animations_MixerHandle_Fuse_Elements_TextWrapping___typeof()
{
    static ::uStaticStrong< ::uInterfaceType*> type;
    if (type != NULL) return type;

    type = ::uAllocInterfaceType("Uno.Collections.IEnumerable<Fuse.Animations.MixerHandle<Fuse.Elements.TextWrapping>>");

    ::uRegisterType(type);
    return type;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Collections\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

::uInterfaceType* IEnumerable__Fuse_Animations_MixerHandle_Fuse_Elements_Visibility___typeof()
{
    static ::uStaticStrong< ::uInterfaceType*> type;
    if (type != NULL) return type;

    type = ::uAllocInterfaceType("Uno.Collections.IEnumerable<Fuse.Animations.MixerHandle<Fuse.Elements.Visibility>>");

    ::uRegisterType(type);
    return type;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Collections\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

::uInterfaceType* IEnumerable__Fuse_Animations_MixerHandle_Fuse_Font___typeof()
{
    static ::uStaticStrong< ::uInterfaceType*> type;
    if (type != NULL) return type;

    type = ::uAllocInterfaceType("Uno.Collections.IEnumerable<Fuse.Animations.MixerHandle<Fuse.Font>>");

    ::uRegisterType(type);
    return type;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Collections\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

::uInterfaceType* IEnumerable__Fuse_Animations_MixerHandle_Fuse_Gestures_Edge___typeof()
{
    static ::uStaticStrong< ::uInterfaceType*> type;
    if (type != NULL) return type;

    type = ::uAllocInterfaceType("Uno.Collections.IEnumerable<Fuse.Animations.MixerHandle<Fuse.Gestures.Edge>>");

    ::uRegisterType(type);
    return type;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Collections\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

::uInterfaceType* IEnumerable__Fuse_Animations_MixerHandle_Fuse_Gestures_ScrollDirections___typeof()
{
    static ::uStaticStrong< ::uInterfaceType*> type;
    if (type != NULL) return type;

    type = ::uAllocInterfaceType("Uno.Collections.IEnumerable<Fuse.Animations.MixerHandle<Fuse.Gestures.ScrollDirections>>");

    ::uRegisterType(type);
    return type;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Collections\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

::uInterfaceType* IEnumerable__Fuse_Animations_MixerHandle_Fuse_Layouts_Dock___typeof()
{
    static ::uStaticStrong< ::uInterfaceType*> type;
    if (type != NULL) return type;

    type = ::uAllocInterfaceType("Uno.Collections.IEnumerable<Fuse.Animations.MixerHandle<Fuse.Layouts.Dock>>");

    ::uRegisterType(type);
    return type;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Collections\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

::uInterfaceType* IEnumerable__Fuse_Animations_MixerHandle_Fuse_Layouts_FlowDirection___typeof()
{
    static ::uStaticStrong< ::uInterfaceType*> type;
    if (type != NULL) return type;

    type = ::uAllocInterfaceType("Uno.Collections.IEnumerable<Fuse.Animations.MixerHandle<Fuse.Layouts.FlowDirection>>");

    ::uRegisterType(type);
    return type;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Collections\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

::uInterfaceType* IEnumerable__Fuse_Animations_MixerHandle_Fuse_Layouts_Metric___typeof()
{
    static ::uStaticStrong< ::uInterfaceType*> type;
    if (type != NULL) return type;

    type = ::uAllocInterfaceType("Uno.Collections.IEnumerable<Fuse.Animations.MixerHandle<Fuse.Layouts.Metric>>");

    ::uRegisterType(type);
    return type;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Collections\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

::uInterfaceType* IEnumerable__Fuse_Animations_MixerHandle_Fuse_Layouts_Orientation___typeof()
{
    static ::uStaticStrong< ::uInterfaceType*> type;
    if (type != NULL) return type;

    type = ::uAllocInterfaceType("Uno.Collections.IEnumerable<Fuse.Animations.MixerHandle<Fuse.Layouts.Orientation>>");

    ::uRegisterType(type);
    return type;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Collections\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

::uInterfaceType* IEnumerable__Fuse_Animations_MixerHandle_Fuse_Navigation_NavigationDirection___typeof()
{
    static ::uStaticStrong< ::uInterfaceType*> type;
    if (type != NULL) return type;

    type = ::uAllocInterfaceType("Uno.Collections.IEnumerable<Fuse.Animations.MixerHandle<Fuse.Navigation.NavigationDirection>>");

    ::uRegisterType(type);
    return type;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Collections\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

::uInterfaceType* IEnumerable__Fuse_Animations_MixerHandle_Fuse_Navigation_NavigationEdge___typeof()
{
    static ::uStaticStrong< ::uInterfaceType*> type;
    if (type != NULL) return type;

    type = ::uAllocInterfaceType("Uno.Collections.IEnumerable<Fuse.Animations.MixerHandle<Fuse.Navigation.NavigationEdge>>");

    ::uRegisterType(type);
    return type;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Collections\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

::uInterfaceType* IEnumerable__Fuse_Animations_MixerHandle_Fuse_Navigation_NavigationGotoMode___typeof()
{
    static ::uStaticStrong< ::uInterfaceType*> type;
    if (type != NULL) return type;

    type = ::uAllocInterfaceType("Uno.Collections.IEnumerable<Fuse.Animations.MixerHandle<Fuse.Navigation.NavigationGotoMode>>");

    ::uRegisterType(type);
    return type;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Collections\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

::uInterfaceType* IEnumerable__Fuse_Animations_MixerHandle_Fuse_Navigation_SnapTo___typeof()
{
    static ::uStaticStrong< ::uInterfaceType*> type;
    if (type != NULL) return type;

    type = ::uAllocInterfaceType("Uno.Collections.IEnumerable<Fuse.Animations.MixerHandle<Fuse.Navigation.SnapTo>>");

    ::uRegisterType(type);
    return type;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Collections\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

::uInterfaceType* IEnumerable__Fuse_Animations_MixerHandle_Fuse_Navigation_SwipeDirection___typeof()
{
    static ::uStaticStrong< ::uInterfaceType*> type;
    if (type != NULL) return type;

    type = ::uAllocInterfaceType("Uno.Collections.IEnumerable<Fuse.Animations.MixerHandle<Fuse.Navigation.SwipeDirection>>");

    ::uRegisterType(type);
    return type;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Collections\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

::uInterfaceType* IEnumerable__Fuse_Animations_MixerHandle_Fuse_Navigation_SwipeEnds___typeof()
{
    static ::uStaticStrong< ::uInterfaceType*> type;
    if (type != NULL) return type;

    type = ::uAllocInterfaceType("Uno.Collections.IEnumerable<Fuse.Animations.MixerHandle<Fuse.Navigation.SwipeEnds>>");

    ::uRegisterType(type);
    return type;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Collections\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

::uInterfaceType* IEnumerable__Fuse_Animations_MixerHandle_Fuse_Node___typeof()
{
    static ::uStaticStrong< ::uInterfaceType*> type;
    if (type != NULL) return type;

    type = ::uAllocInterfaceType("Uno.Collections.IEnumerable<Fuse.Animations.MixerHandle<Fuse.Node>>");

    ::uRegisterType(type);
    return type;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Collections\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

::uInterfaceType* IEnumerable__Fuse_Animations_MixerHandle_Fuse_Resources_ImageSource___typeof()
{
    static ::uStaticStrong< ::uInterfaceType*> type;
    if (type != NULL) return type;

    type = ::uAllocInterfaceType("Uno.Collections.IEnumerable<Fuse.Animations.MixerHandle<Fuse.Resources.ImageSource>>");

    ::uRegisterType(type);
    return type;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Collections\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

::uInterfaceType* IEnumerable__Fuse_Animations_MixerHandle_Fuse_Transform___typeof()
{
    static ::uStaticStrong< ::uInterfaceType*> type;
    if (type != NULL) return type;

    type = ::uAllocInterfaceType("Uno.Collections.IEnumerable<Fuse.Animations.MixerHandle<Fuse.Transform>>");

    ::uRegisterType(type);
    return type;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Collections\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

::uInterfaceType* IEnumerable__Fuse_Animations_MixerHandle_Fuse_Triggers_Actions_TriggerDirection___typeof()
{
    static ::uStaticStrong< ::uInterfaceType*> type;
    if (type != NULL) return type;

    type = ::uAllocInterfaceType("Uno.Collections.IEnumerable<Fuse.Animations.MixerHandle<Fuse.Triggers.Actions.TriggerDirection>>");

    ::uRegisterType(type);
    return type;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Collections\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

::uInterfaceType* IEnumerable__Fuse_Animations_MixerHandle_Fuse_Triggers_State___typeof()
{
    static ::uStaticStrong< ::uInterfaceType*> type;
    if (type != NULL) return type;

    type = ::uAllocInterfaceType("Uno.Collections.IEnumerable<Fuse.Animations.MixerHandle<Fuse.Triggers.State>>");

    ::uRegisterType(type);
    return type;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Collections\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

::uInterfaceType* IEnumerable__Fuse_Animations_MixerHandle_Fuse_Triggers_StateTransition___typeof()
{
    static ::uStaticStrong< ::uInterfaceType*> type;
    if (type != NULL) return type;

    type = ::uAllocInterfaceType("Uno.Collections.IEnumerable<Fuse.Animations.MixerHandle<Fuse.Triggers.StateTransition>>");

    ::uRegisterType(type);
    return type;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Collections\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

::uInterfaceType* IEnumerable__Fuse_Animations_MixerHandle_Fuse_Triggers_TriggerBypassMode___typeof()
{
    static ::uStaticStrong< ::uInterfaceType*> type;
    if (type != NULL) return type;

    type = ::uAllocInterfaceType("Uno.Collections.IEnumerable<Fuse.Animations.MixerHandle<Fuse.Triggers.TriggerBypassMode>>");

    ::uRegisterType(type);
    return type;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Collections\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

::uInterfaceType* IEnumerable__Fuse_Animations_MixerHandle_int___typeof()
{
    static ::uStaticStrong< ::uInterfaceType*> type;
    if (type != NULL) return type;

    type = ::uAllocInterfaceType("Uno.Collections.IEnumerable<Fuse.Animations.MixerHandle<int>>");

    ::uRegisterType(type);
    return type;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Collections\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

::uInterfaceType* IEnumerable__Fuse_Animations_MixerHandle_int2___typeof()
{
    static ::uStaticStrong< ::uInterfaceType*> type;
    if (type != NULL) return type;

    type = ::uAllocInterfaceType("Uno.Collections.IEnumerable<Fuse.Animations.MixerHandle<int2>>");

    ::uRegisterType(type);
    return type;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Collections\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

::uInterfaceType* IEnumerable__Fuse_Animations_MixerHandle_int3___typeof()
{
    static ::uStaticStrong< ::uInterfaceType*> type;
    if (type != NULL) return type;

    type = ::uAllocInterfaceType("Uno.Collections.IEnumerable<Fuse.Animations.MixerHandle<int3>>");

    ::uRegisterType(type);
    return type;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Collections\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

::uInterfaceType* IEnumerable__Fuse_Animations_MixerHandle_int4___typeof()
{
    static ::uStaticStrong< ::uInterfaceType*> type;
    if (type != NULL) return type;

    type = ::uAllocInterfaceType("Uno.Collections.IEnumerable<Fuse.Animations.MixerHandle<int4>>");

    ::uRegisterType(type);
    return type;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Collections\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

::uInterfaceType* IEnumerable__Fuse_Animations_MixerHandle_long___typeof()
{
    static ::uStaticStrong< ::uInterfaceType*> type;
    if (type != NULL) return type;

    type = ::uAllocInterfaceType("Uno.Collections.IEnumerable<Fuse.Animations.MixerHandle<long>>");

    ::uRegisterType(type);
    return type;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Collections\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

::uInterfaceType* IEnumerable__Fuse_Animations_MixerHandle_object___typeof()
{
    static ::uStaticStrong< ::uInterfaceType*> type;
    if (type != NULL) return type;

    type = ::uAllocInterfaceType("Uno.Collections.IEnumerable<Fuse.Animations.MixerHandle<object>>");

    ::uRegisterType(type);
    return type;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Collections\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

::uInterfaceType* IEnumerable__Fuse_Animations_MixerHandle_short___typeof()
{
    static ::uStaticStrong< ::uInterfaceType*> type;
    if (type != NULL) return type;

    type = ::uAllocInterfaceType("Uno.Collections.IEnumerable<Fuse.Animations.MixerHandle<short>>");

    ::uRegisterType(type);
    return type;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Collections\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

::uInterfaceType* IEnumerable__Fuse_Animations_MixerHandle_string___typeof()
{
    static ::uStaticStrong< ::uInterfaceType*> type;
    if (type != NULL) return type;

    type = ::uAllocInterfaceType("Uno.Collections.IEnumerable<Fuse.Animations.MixerHandle<string>>");

    ::uRegisterType(type);
    return type;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Collections\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

::uInterfaceType* IEnumerable__Fuse_Animations_MixerHandle_Uno_EventArgs___typeof()
{
    static ::uStaticStrong< ::uInterfaceType*> type;
    if (type != NULL) return type;

    type = ::uAllocInterfaceType("Uno.Collections.IEnumerable<Fuse.Animations.MixerHandle<Uno.EventArgs>>");

    ::uRegisterType(type);
    return type;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Collections\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

::uInterfaceType* IEnumerable__Fuse_Animations_MixerHandle_Uno_Platform_iOS_StatusBarStyle___typeof()
{
    static ::uStaticStrong< ::uInterfaceType*> type;
    if (type != NULL) return type;

    type = ::uAllocInterfaceType("Uno.Collections.IEnumerable<Fuse.Animations.MixerHandle<Uno.Platform.iOS.StatusBarStyle>>");

    ::uRegisterType(type);
    return type;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Collections\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

::uInterfaceType* IEnumerable__Fuse_Animations_MixerHandle_Uno_UX_FileSource___typeof()
{
    static ::uStaticStrong< ::uInterfaceType*> type;
    if (type != NULL) return type;

    type = ::uAllocInterfaceType("Uno.Collections.IEnumerable<Fuse.Animations.MixerHandle<Uno.UX.FileSource>>");

    ::uRegisterType(type);
    return type;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Collections\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

::uInterfaceType* IEnumerable__Fuse_Behavior__typeof()
{
    static ::uStaticStrong< ::uInterfaceType*> type;
    if (type != NULL) return type;

    type = ::uAllocInterfaceType("Uno.Collections.IEnumerable<Fuse.Behavior>");

    ::uRegisterType(type);
    return type;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Collections\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

::uInterfaceType* IEnumerable__Fuse_CacheFramebuffer__typeof()
{
    static ::uStaticStrong< ::uInterfaceType*> type;
    if (type != NULL) return type;

    type = ::uAllocInterfaceType("Uno.Collections.IEnumerable<Fuse.CacheFramebuffer>");

    ::uRegisterType(type);
    return type;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Collections\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

::uInterfaceType* IEnumerable__Fuse_Controls_Control__typeof()
{
    static ::uStaticStrong< ::uInterfaceType*> type;
    if (type != NULL) return type;

    type = ::uAllocInterfaceType("Uno.Collections.IEnumerable<Fuse.Controls.Control>");

    ::uRegisterType(type);
    return type;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Collections\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

::uInterfaceType* IEnumerable__Fuse_Controls_Internal_WordWrapperWord__typeof()
{
    static ::uStaticStrong< ::uInterfaceType*> type;
    if (type != NULL) return type;

    type = ::uAllocInterfaceType("Uno.Collections.IEnumerable<Fuse.Controls.Internal.WordWrapperWord>");

    ::uRegisterType(type);
    return type;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Collections\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

::uInterfaceType* IEnumerable__Fuse_Controls_Internal_WrappedLine__typeof()
{
    static ::uStaticStrong< ::uInterfaceType*> type;
    if (type != NULL) return type;

    type = ::uAllocInterfaceType("Uno.Collections.IEnumerable<Fuse.Controls.Internal.WrappedLine>");

    ::uRegisterType(type);
    return type;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Collections\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

::uInterfaceType* IEnumerable__Fuse_Controls_TextEdit_LineCacheLine__typeof()
{
    static ::uStaticStrong< ::uInterfaceType*> type;
    if (type != NULL) return type;

    type = ::uAllocInterfaceType("Uno.Collections.IEnumerable<Fuse.Controls.TextEdit.LineCacheLine>");

    ::uRegisterType(type);
    return type;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Collections\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

::uInterfaceType* IEnumerable__Fuse_Drawing_Batching_Batch__typeof()
{
    static ::uStaticStrong< ::uInterfaceType*> type;
    if (type != NULL) return type;

    type = ::uAllocInterfaceType("Uno.Collections.IEnumerable<Fuse.Drawing.Batching.Batch>");

    ::uRegisterType(type);
    return type;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Collections\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

::uInterfaceType* IEnumerable__Fuse_Drawing_Batching_Entry__typeof()
{
    static ::uStaticStrong< ::uInterfaceType*> type;
    if (type != NULL) return type;

    type = ::uAllocInterfaceType("Uno.Collections.IEnumerable<Fuse.Drawing.Batching.Entry>");

    ::uRegisterType(type);
    return type;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Collections\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

::uInterfaceType* IEnumerable__Fuse_Drawing_Border__typeof()
{
    static ::uStaticStrong< ::uInterfaceType*> type;
    if (type != NULL) return type;

    type = ::uAllocInterfaceType("Uno.Collections.IEnumerable<Fuse.Drawing.Border>");

    ::uRegisterType(type);
    return type;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Collections\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

::uInterfaceType* IEnumerable__Fuse_Drawing_Brush__typeof()
{
    static ::uStaticStrong< ::uInterfaceType*> type;
    if (type != NULL) return type;

    type = ::uAllocInterfaceType("Uno.Collections.IEnumerable<Fuse.Drawing.Brush>");

    ::uRegisterType(type);
    return type;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Collections\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

::uInterfaceType* IEnumerable__Fuse_Drawing_Contour__typeof()
{
    static ::uStaticStrong< ::uInterfaceType*> type;
    if (type != NULL) return type;

    type = ::uAllocInterfaceType("Uno.Collections.IEnumerable<Fuse.Drawing.Contour>");

    ::uRegisterType(type);
    return type;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Collections\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

::uInterfaceType* IEnumerable__Fuse_Drawing_GradientStop__typeof()
{
    static ::uStaticStrong< ::uInterfaceType*> type;
    if (type != NULL) return type;

    type = ::uAllocInterfaceType("Uno.Collections.IEnumerable<Fuse.Drawing.GradientStop>");

    ::uRegisterType(type);
    return type;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Collections\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

::uInterfaceType* IEnumerable__Fuse_Drawing_Internal_MultiBuffer_Field__typeof()
{
    static ::uStaticStrong< ::uInterfaceType*> type;
    if (type != NULL) return type;

    type = ::uAllocInterfaceType("Uno.Collections.IEnumerable<Fuse.Drawing.Internal.MultiBuffer_Field>");

    ::uRegisterType(type);
    return type;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Collections\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

::uInterfaceType* IEnumerable__Fuse_Drawing_PathGeometry__typeof()
{
    static ::uStaticStrong< ::uInterfaceType*> type;
    if (type != NULL) return type;

    type = ::uAllocInterfaceType("Uno.Collections.IEnumerable<Fuse.Drawing.PathGeometry>");

    ::uRegisterType(type);
    return type;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Collections\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

::uInterfaceType* IEnumerable__Fuse_Drawing_PolygonDrawable__typeof()
{
    static ::uStaticStrong< ::uInterfaceType*> type;
    if (type != NULL) return type;

    type = ::uAllocInterfaceType("Uno.Collections.IEnumerable<Fuse.Drawing.PolygonDrawable>");

    ::uRegisterType(type);
    return type;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Collections\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

::uInterfaceType* IEnumerable__Fuse_Drawing_Stroke__typeof()
{
    static ::uStaticStrong< ::uInterfaceType*> type;
    if (type != NULL) return type;

    type = ::uAllocInterfaceType("Uno.Collections.IEnumerable<Fuse.Drawing.Stroke>");

    ::uRegisterType(type);
    return type;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Collections\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

::uInterfaceType* IEnumerable__Fuse_Drawing_Tesselation_ActiveRegion__typeof()
{
    static ::uStaticStrong< ::uInterfaceType*> type;
    if (type != NULL) return type;

    type = ::uAllocInterfaceType("Uno.Collections.IEnumerable<Fuse.Drawing.Tesselation.ActiveRegion>");

    ::uRegisterType(type);
    return type;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Collections\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

::uInterfaceType* IEnumerable__Fuse_Drawing_Tesselation_Collections_DictNode_Fuse_Drawing_Tesselation_ActiveRegion___typeof()
{
    static ::uStaticStrong< ::uInterfaceType*> type;
    if (type != NULL) return type;

    type = ::uAllocInterfaceType("Uno.Collections.IEnumerable<Fuse.Drawing.Tesselation.Collections.DictNode<Fuse.Drawing.Tesselation.ActiveRegion>>");

    ::uRegisterType(type);
    return type;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Collections\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

::uInterfaceType* IEnumerable__Fuse_Drawing_Tesselation_Face__typeof()
{
    static ::uStaticStrong< ::uInterfaceType*> type;
    if (type != NULL) return type;

    type = ::uAllocInterfaceType("Uno.Collections.IEnumerable<Fuse.Drawing.Tesselation.Face>");

    ::uRegisterType(type);
    return type;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Collections\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

::uInterfaceType* IEnumerable__Fuse_Drawing_Tesselation_HalfEdge__typeof()
{
    static ::uStaticStrong< ::uInterfaceType*> type;
    if (type != NULL) return type;

    type = ::uAllocInterfaceType("Uno.Collections.IEnumerable<Fuse.Drawing.Tesselation.HalfEdge>");

    ::uRegisterType(type);
    return type;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Collections\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

::uInterfaceType* IEnumerable__Fuse_Drawing_Tesselation_Vertex__typeof()
{
    static ::uStaticStrong< ::uInterfaceType*> type;
    if (type != NULL) return type;

    type = ::uAllocInterfaceType("Uno.Collections.IEnumerable<Fuse.Drawing.Tesselation.Vertex>");

    ::uRegisterType(type);
    return type;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Collections\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

::uInterfaceType* IEnumerable__Fuse_Effects_Effect__typeof()
{
    static ::uStaticStrong< ::uInterfaceType*> type;
    if (type != NULL) return type;

    type = ::uAllocInterfaceType("Uno.Collections.IEnumerable<Fuse.Effects.Effect>");

    ::uRegisterType(type);
    return type;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Collections\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

::uInterfaceType* IEnumerable__Fuse_Elements_Element__typeof()
{
    static ::uStaticStrong< ::uInterfaceType*> type;
    if (type != NULL) return type;

    type = ::uAllocInterfaceType("Uno.Collections.IEnumerable<Fuse.Elements.Element>");

    ::uRegisterType(type);
    return type;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Collections\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

::uInterfaceType* IEnumerable__Fuse_Elements_ElementAtlas__typeof()
{
    static ::uStaticStrong< ::uInterfaceType*> type;
    if (type != NULL) return type;

    type = ::uAllocInterfaceType("Uno.Collections.IEnumerable<Fuse.Elements.ElementAtlas>");

    ::uRegisterType(type);
    return type;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Collections\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

::uInterfaceType* IEnumerable__Fuse_Elements_ElementBatch__typeof()
{
    static ::uStaticStrong< ::uInterfaceType*> type;
    if (type != NULL) return type;

    type = ::uAllocInterfaceType("Uno.Collections.IEnumerable<Fuse.Elements.ElementBatch>");

    ::uRegisterType(type);
    return type;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Collections\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

::uInterfaceType* IEnumerable__Fuse_Elements_ElementBatchEntry__typeof()
{
    static ::uStaticStrong< ::uInterfaceType*> type;
    if (type != NULL) return type;

    type = ::uAllocInterfaceType("Uno.Collections.IEnumerable<Fuse.Elements.ElementBatchEntry>");

    ::uRegisterType(type);
    return type;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Collections\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

::uInterfaceType* IEnumerable__Fuse_Elements_IElementBatchDrawable__typeof()
{
    static ::uStaticStrong< ::uInterfaceType*> type;
    if (type != NULL) return type;

    type = ::uAllocInterfaceType("Uno.Collections.IEnumerable<Fuse.Elements.IElementBatchDrawable>");

    ::uRegisterType(type);
    return type;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Collections\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

::uInterfaceType* IEnumerable__Fuse_Entities_Component__typeof()
{
    static ::uStaticStrong< ::uInterfaceType*> type;
    if (type != NULL) return type;

    type = ::uAllocInterfaceType("Uno.Collections.IEnumerable<Fuse.Entities.Component>");

    ::uRegisterType(type);
    return type;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Collections\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

::uInterfaceType* IEnumerable__Fuse_Entities_Entity__typeof()
{
    static ::uStaticStrong< ::uInterfaceType*> type;
    if (type != NULL) return type;

    type = ::uAllocInterfaceType("Uno.Collections.IEnumerable<Fuse.Entities.Entity>");

    ::uRegisterType(type);
    return type;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Collections\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

::uInterfaceType* IEnumerable__Fuse_Entities_Entry__typeof()
{
    static ::uStaticStrong< ::uInterfaceType*> type;
    if (type != NULL) return type;

    type = ::uAllocInterfaceType("Uno.Collections.IEnumerable<Fuse.Entities.Entry>");

    ::uRegisterType(type);
    return type;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Collections\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

::uInterfaceType* IEnumerable__Fuse_IFlush__typeof()
{
    static ::uStaticStrong< ::uInterfaceType*> type;
    if (type != NULL) return type;

    type = ::uAllocInterfaceType("Uno.Collections.IEnumerable<Fuse.IFlush>");

    ::uRegisterType(type);
    return type;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Collections\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

::uInterfaceType* IEnumerable__Fuse_Input_Capturer__typeof()
{
    static ::uStaticStrong< ::uInterfaceType*> type;
    if (type != NULL) return type;

    type = ::uAllocInterfaceType("Uno.Collections.IEnumerable<Fuse.Input.Capturer>");

    ::uRegisterType(type);
    return type;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Collections\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

::uInterfaceType* IEnumerable__Fuse_Input_FocusGainedHandler__typeof()
{
    static ::uStaticStrong< ::uInterfaceType*> type;
    if (type != NULL) return type;

    type = ::uAllocInterfaceType("Uno.Collections.IEnumerable<Fuse.Input.FocusGainedHandler>");

    ::uRegisterType(type);
    return type;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Collections\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

::uInterfaceType* IEnumerable__Fuse_Input_FocusLostHandler__typeof()
{
    static ::uStaticStrong< ::uInterfaceType*> type;
    if (type != NULL) return type;

    type = ::uAllocInterfaceType("Uno.Collections.IEnumerable<Fuse.Input.FocusLostHandler>");

    ::uRegisterType(type);
    return type;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Collections\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

::uInterfaceType* IEnumerable__Fuse_Input_IsFocusableChangedHandler__typeof()
{
    static ::uStaticStrong< ::uInterfaceType*> type;
    if (type != NULL) return type;

    type = ::uAllocInterfaceType("Uno.Collections.IEnumerable<Fuse.Input.IsFocusableChangedHandler>");

    ::uRegisterType(type);
    return type;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Collections\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

::uInterfaceType* IEnumerable__Fuse_Input_KeyPressedHandler__typeof()
{
    static ::uStaticStrong< ::uInterfaceType*> type;
    if (type != NULL) return type;

    type = ::uAllocInterfaceType("Uno.Collections.IEnumerable<Fuse.Input.KeyPressedHandler>");

    ::uRegisterType(type);
    return type;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Collections\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

::uInterfaceType* IEnumerable__Fuse_Input_KeyReleasedHandler__typeof()
{
    static ::uStaticStrong< ::uInterfaceType*> type;
    if (type != NULL) return type;

    type = ::uAllocInterfaceType("Uno.Collections.IEnumerable<Fuse.Input.KeyReleasedHandler>");

    ::uRegisterType(type);
    return type;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Collections\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

::uInterfaceType* IEnumerable__Fuse_Input_Pointer_PELHolder__typeof()
{
    static ::uStaticStrong< ::uInterfaceType*> type;
    if (type != NULL) return type;

    type = ::uAllocInterfaceType("Uno.Collections.IEnumerable<Fuse.Input.Pointer_PELHolder>");

    ::uRegisterType(type);
    return type;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Collections\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

::uInterfaceType* IEnumerable__Fuse_Input_PointerEnteredHandler__typeof()
{
    static ::uStaticStrong< ::uInterfaceType*> type;
    if (type != NULL) return type;

    type = ::uAllocInterfaceType("Uno.Collections.IEnumerable<Fuse.Input.PointerEnteredHandler>");

    ::uRegisterType(type);
    return type;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Collections\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

::uInterfaceType* IEnumerable__Fuse_Input_PointerLeftHandler__typeof()
{
    static ::uStaticStrong< ::uInterfaceType*> type;
    if (type != NULL) return type;

    type = ::uAllocInterfaceType("Uno.Collections.IEnumerable<Fuse.Input.PointerLeftHandler>");

    ::uRegisterType(type);
    return type;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Collections\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

::uInterfaceType* IEnumerable__Fuse_Input_PointerMovedHandler__typeof()
{
    static ::uStaticStrong< ::uInterfaceType*> type;
    if (type != NULL) return type;

    type = ::uAllocInterfaceType("Uno.Collections.IEnumerable<Fuse.Input.PointerMovedHandler>");

    ::uRegisterType(type);
    return type;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Collections\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

::uInterfaceType* IEnumerable__Fuse_Input_PointerPressedHandler__typeof()
{
    static ::uStaticStrong< ::uInterfaceType*> type;
    if (type != NULL) return type;

    type = ::uAllocInterfaceType("Uno.Collections.IEnumerable<Fuse.Input.PointerPressedHandler>");

    ::uRegisterType(type);
    return type;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Collections\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

::uInterfaceType* IEnumerable__Fuse_Input_PointerReleasedHandler__typeof()
{
    static ::uStaticStrong< ::uInterfaceType*> type;
    if (type != NULL) return type;

    type = ::uAllocInterfaceType("Uno.Collections.IEnumerable<Fuse.Input.PointerReleasedHandler>");

    ::uRegisterType(type);
    return type;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Collections\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

::uInterfaceType* IEnumerable__Fuse_Input_PointerWheelMovedHandler__typeof()
{
    static ::uStaticStrong< ::uInterfaceType*> type;
    if (type != NULL) return type;

    type = ::uAllocInterfaceType("Uno.Collections.IEnumerable<Fuse.Input.PointerWheelMovedHandler>");

    ::uRegisterType(type);
    return type;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Collections\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

::uInterfaceType* IEnumerable__Fuse_Input_TextEnteredHandler__typeof()
{
    static ::uStaticStrong< ::uInterfaceType*> type;
    if (type != NULL) return type;

    type = ::uAllocInterfaceType("Uno.Collections.IEnumerable<Fuse.Input.TextEnteredHandler>");

    ::uRegisterType(type);
    return type;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Collections\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

::uInterfaceType* IEnumerable__Fuse_iOS_StatusBarConfig__typeof()
{
    static ::uStaticStrong< ::uInterfaceType*> type;
    if (type != NULL) return type;

    type = ::uAllocInterfaceType("Uno.Collections.IEnumerable<Fuse.iOS.StatusBarConfig>");

    ::uRegisterType(type);
    return type;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Collections\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

::uInterfaceType* IEnumerable__Fuse_IViewport__typeof()
{
    static ::uStaticStrong< ::uInterfaceType*> type;
    if (type != NULL) return type;

    type = ::uAllocInterfaceType("Uno.Collections.IEnumerable<Fuse.IViewport>");

    ::uRegisterType(type);
    return type;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Collections\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

::uInterfaceType* IEnumerable__Fuse_Layouts_Column__typeof()
{
    static ::uStaticStrong< ::uInterfaceType*> type;
    if (type != NULL) return type;

    type = ::uAllocInterfaceType("Uno.Collections.IEnumerable<Fuse.Layouts.Column>");

    ::uRegisterType(type);
    return type;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Collections\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

::uInterfaceType* IEnumerable__Fuse_Layouts_DefinitionBase_ParseDataItem__typeof()
{
    static ::uStaticStrong< ::uInterfaceType*> type;
    if (type != NULL) return type;

    type = ::uAllocInterfaceType("Uno.Collections.IEnumerable<Fuse.Layouts.DefinitionBase_ParseDataItem>");

    ::uRegisterType(type);
    return type;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Collections\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

::uInterfaceType* IEnumerable__Fuse_Layouts_Row__typeof()
{
    static ::uStaticStrong< ::uInterfaceType*> type;
    if (type != NULL) return type;

    type = ::uAllocInterfaceType("Uno.Collections.IEnumerable<Fuse.Layouts.Row>");

    ::uRegisterType(type);
    return type;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Collections\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

::uInterfaceType* IEnumerable__Fuse_Navigation_INavigationAnimator__typeof()
{
    static ::uStaticStrong< ::uInterfaceType*> type;
    if (type != NULL) return type;

    type = ::uAllocInterfaceType("Uno.Collections.IEnumerable<Fuse.Navigation.INavigationAnimator>");

    ::uRegisterType(type);
    return type;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Collections\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

::uInterfaceType* IEnumerable__Fuse_Navigation_IPageResourceBinding__typeof()
{
    static ::uStaticStrong< ::uInterfaceType*> type;
    if (type != NULL) return type;

    type = ::uAllocInterfaceType("Uno.Collections.IEnumerable<Fuse.Navigation.IPageResourceBinding>");

    ::uRegisterType(type);
    return type;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Collections\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

::uInterfaceType* IEnumerable__Fuse_Node__typeof()
{
    static ::uStaticStrong< ::uInterfaceType*> type;
    if (type != NULL) return type;

    type = ::uAllocInterfaceType("Uno.Collections.IEnumerable<Fuse.Node>");

    ::uRegisterType(type);
    return type;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Collections\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

::uInterfaceType* IEnumerable__Fuse_Physics_Body__typeof()
{
    static ::uStaticStrong< ::uInterfaceType*> type;
    if (type != NULL) return type;

    type = ::uAllocInterfaceType("Uno.Collections.IEnumerable<Fuse.Physics.Body>");

    ::uRegisterType(type);
    return type;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Collections\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

::uInterfaceType* IEnumerable__Fuse_Physics_IRule__typeof()
{
    static ::uStaticStrong< ::uInterfaceType*> type;
    if (type != NULL) return type;

    type = ::uAllocInterfaceType("Uno.Collections.IEnumerable<Fuse.Physics.IRule>");

    ::uRegisterType(type);
    return type;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Collections\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

::uInterfaceType* IEnumerable__Fuse_Reactive_Case__typeof()
{
    static ::uStaticStrong< ::uInterfaceType*> type;
    if (type != NULL) return type;

    type = ::uAllocInterfaceType("Uno.Collections.IEnumerable<Fuse.Reactive.Case>");

    ::uRegisterType(type);
    return type;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Collections\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

::uInterfaceType* IEnumerable__Fuse_Reactive_FuseJS_Timer_Time__typeof()
{
    static ::uStaticStrong< ::uInterfaceType*> type;
    if (type != NULL) return type;

    type = ::uAllocInterfaceType("Uno.Collections.IEnumerable<Fuse.Reactive.FuseJS.Timer_Time>");

    ::uRegisterType(type);
    return type;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Collections\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

::uInterfaceType* IEnumerable__Fuse_Reactive_JavaScript__typeof()
{
    static ::uStaticStrong< ::uInterfaceType*> type;
    if (type != NULL) return type;

    type = ::uAllocInterfaceType("Uno.Collections.IEnumerable<Fuse.Reactive.JavaScript>");

    ::uRegisterType(type);
    return type;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Collections\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

::uInterfaceType* IEnumerable__Fuse_RenderTargetEntry__typeof()
{
    static ::uStaticStrong< ::uInterfaceType*> type;
    if (type != NULL) return type;

    type = ::uAllocInterfaceType("Uno.Collections.IEnumerable<Fuse.RenderTargetEntry>");

    ::uRegisterType(type);
    return type;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Collections\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

::uInterfaceType* IEnumerable__Fuse_Resources_ImageSource__typeof()
{
    static ::uStaticStrong< ::uInterfaceType*> type;
    if (type != NULL) return type;

    type = ::uAllocInterfaceType("Uno.Collections.IEnumerable<Fuse.Resources.ImageSource>");

    ::uRegisterType(type);
    return type;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Collections\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

::uInterfaceType* IEnumerable__Fuse_Resources_IMemoryResource__typeof()
{
    static ::uStaticStrong< ::uInterfaceType*> type;
    if (type != NULL) return type;

    type = ::uAllocInterfaceType("Uno.Collections.IEnumerable<Fuse.Resources.IMemoryResource>");

    ::uRegisterType(type);
    return type;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Collections\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

::uInterfaceType* IEnumerable__Fuse_Resources_ISoftDisposable__typeof()
{
    static ::uStaticStrong< ::uInterfaceType*> type;
    if (type != NULL) return type;

    type = ::uAllocInterfaceType("Uno.Collections.IEnumerable<Fuse.Resources.ISoftDisposable>");

    ::uRegisterType(type);
    return type;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Collections\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

::uInterfaceType* IEnumerable__Fuse_Scripting_INameListener__typeof()
{
    static ::uStaticStrong< ::uInterfaceType*> type;
    if (type != NULL) return type;

    type = ::uAllocInterfaceType("Uno.Collections.IEnumerable<Fuse.Scripting.INameListener>");

    ::uRegisterType(type);
    return type;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Collections\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

::uInterfaceType* IEnumerable__Fuse_Scripting_NativeMember__typeof()
{
    static ::uStaticStrong< ::uInterfaceType*> type;
    if (type != NULL) return type;

    type = ::uAllocInterfaceType("Uno.Collections.IEnumerable<Fuse.Scripting.NativeMember>");

    ::uRegisterType(type);
    return type;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Collections\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

::uInterfaceType* IEnumerable__Fuse_Stage__typeof()
{
    static ::uStaticStrong< ::uInterfaceType*> type;
    if (type != NULL) return type;

    type = ::uAllocInterfaceType("Uno.Collections.IEnumerable<Fuse.Stage>");

    ::uRegisterType(type);
    return type;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Collections\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

::uInterfaceType* IEnumerable__Fuse_Style__typeof()
{
    static ::uStaticStrong< ::uInterfaceType*> type;
    if (type != NULL) return type;

    type = ::uAllocInterfaceType("Uno.Collections.IEnumerable<Fuse.Style>");

    ::uRegisterType(type);
    return type;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Collections\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

::uInterfaceType* IEnumerable__Fuse_StyleProperty__typeof()
{
    static ::uStaticStrong< ::uInterfaceType*> type;
    if (type != NULL) return type;

    type = ::uAllocInterfaceType("Uno.Collections.IEnumerable<Fuse.StyleProperty>");

    ::uRegisterType(type);
    return type;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Collections\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

::uInterfaceType* IEnumerable__Fuse_Transform__typeof()
{
    static ::uStaticStrong< ::uInterfaceType*> type;
    if (type != NULL) return type;

    type = ::uAllocInterfaceType("Uno.Collections.IEnumerable<Fuse.Transform>");

    ::uRegisterType(type);
    return type;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Collections\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

::uInterfaceType* IEnumerable__Fuse_Triggers_Actions_TriggerAction__typeof()
{
    static ::uStaticStrong< ::uInterfaceType*> type;
    if (type != NULL) return type;

    type = ::uAllocInterfaceType("Uno.Collections.IEnumerable<Fuse.Triggers.Actions.TriggerAction>");

    ::uRegisterType(type);
    return type;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Collections\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

::uInterfaceType* IEnumerable__Fuse_Triggers_State__typeof()
{
    static ::uStaticStrong< ::uInterfaceType*> type;
    if (type != NULL) return type;

    type = ::uAllocInterfaceType("Uno.Collections.IEnumerable<Fuse.Triggers.State>");

    ::uRegisterType(type);
    return type;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Collections\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

::uInterfaceType* IEnumerable__Fuse_UpdateListener__typeof()
{
    static ::uStaticStrong< ::uInterfaceType*> type;
    if (type != NULL) return type;

    type = ::uAllocInterfaceType("Uno.Collections.IEnumerable<Fuse.UpdateListener>");

    ::uRegisterType(type);
    return type;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Collections\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

::uInterfaceType* IEnumerable__int__typeof()
{
    static ::uStaticStrong< ::uInterfaceType*> type;
    if (type != NULL) return type;

    type = ::uAllocInterfaceType("Uno.Collections.IEnumerable<int>");

    ::uRegisterType(type);
    return type;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Collections\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

::uInterfaceType* IEnumerable__int4__typeof()
{
    static ::uStaticStrong< ::uInterfaceType*> type;
    if (type != NULL) return type;

    type = ::uAllocInterfaceType("Uno.Collections.IEnumerable<int4>");

    ::uRegisterType(type);
    return type;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Collections\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

::uInterfaceType* IEnumerable__object__typeof()
{
    static ::uStaticStrong< ::uInterfaceType*> type;
    if (type != NULL) return type;

    type = ::uAllocInterfaceType("Uno.Collections.IEnumerable<object>");

    ::uRegisterType(type);
    return type;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Collections\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

::uInterfaceType* IEnumerable__Outracks_Simulator_Bytecode_BindVariable__typeof()
{
    static ::uStaticStrong< ::uInterfaceType*> type;
    if (type != NULL) return type;

    type = ::uAllocInterfaceType("Uno.Collections.IEnumerable<Outracks.Simulator.Bytecode.BindVariable>");

    ::uRegisterType(type);
    return type;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Collections\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

::uInterfaceType* IEnumerable__Outracks_Simulator_Bytecode_Expression__typeof()
{
    static ::uStaticStrong< ::uInterfaceType*> type;
    if (type != NULL) return type;

    type = ::uAllocInterfaceType("Uno.Collections.IEnumerable<Outracks.Simulator.Bytecode.Expression>");

    ::uRegisterType(type);
    return type;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Collections\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

::uInterfaceType* IEnumerable__Outracks_Simulator_Bytecode_Parameter__typeof()
{
    static ::uStaticStrong< ::uInterfaceType*> type;
    if (type != NULL) return type;

    type = ::uAllocInterfaceType("Uno.Collections.IEnumerable<Outracks.Simulator.Bytecode.Parameter>");

    ::uRegisterType(type);
    return type;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Collections\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

::uInterfaceType* IEnumerable__Outracks_Simulator_Bytecode_Statement__typeof()
{
    static ::uStaticStrong< ::uInterfaceType*> type;
    if (type != NULL) return type;

    type = ::uAllocInterfaceType("Uno.Collections.IEnumerable<Outracks.Simulator.Bytecode.Statement>");

    ::uRegisterType(type);
    return type;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Collections\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

::uInterfaceType* IEnumerable__Outracks_Simulator_Bytecode_TypeName__typeof()
{
    static ::uStaticStrong< ::uInterfaceType*> type;
    if (type != NULL) return type;

    type = ::uAllocInterfaceType("Uno.Collections.IEnumerable<Outracks.Simulator.Bytecode.TypeName>");

    ::uRegisterType(type);
    return type;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Collections\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

::uInterfaceType* IEnumerable__Outracks_Simulator_DialogButton__typeof()
{
    static ::uStaticStrong< ::uInterfaceType*> type;
    if (type != NULL) return type;

    type = ::uAllocInterfaceType("Uno.Collections.IEnumerable<Outracks.Simulator.DialogButton>");

    ::uRegisterType(type);
    return type;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Collections\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

::uInterfaceType* IEnumerable__Outracks_Simulator_Protocol_ExceptionInfo__typeof()
{
    static ::uStaticStrong< ::uInterfaceType*> type;
    if (type != NULL) return type;

    type = ::uAllocInterfaceType("Uno.Collections.IEnumerable<Outracks.Simulator.Protocol.ExceptionInfo>");

    ::uRegisterType(type);
    return type;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Collections\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

::uInterfaceType* IEnumerable__Outracks_Simulator_Task_Outracks_Simulator_ISimulatorClient___typeof()
{
    static ::uStaticStrong< ::uInterfaceType*> type;
    if (type != NULL) return type;

    type = ::uAllocInterfaceType("Uno.Collections.IEnumerable<Outracks.Simulator.Task<Outracks.Simulator.ISimulatorClient>>");

    ::uRegisterType(type);
    return type;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Collections\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

::uInterfaceType* IEnumerable__Outracks_Simulator_Task_Uno_Net_IPEndPoint_____typeof()
{
    static ::uStaticStrong< ::uInterfaceType*> type;
    if (type != NULL) return type;

    type = ::uAllocInterfaceType("Uno.Collections.IEnumerable<Outracks.Simulator.Task<Uno.Net.IPEndPoint[]>>");

    ::uRegisterType(type);
    return type;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Collections\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

::uInterfaceType* IEnumerable__string__typeof()
{
    static ::uStaticStrong< ::uInterfaceType*> type;
    if (type != NULL) return type;

    type = ::uAllocInterfaceType("Uno.Collections.IEnumerable<string>");

    ::uRegisterType(type);
    return type;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Collections\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

::uInterfaceType* IEnumerable__Uno_Action__typeof()
{
    static ::uStaticStrong< ::uInterfaceType*> type;
    if (type != NULL) return type;

    type = ::uAllocInterfaceType("Uno.Collections.IEnumerable<Uno.Action>");

    ::uRegisterType(type);
    return type;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Collections\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

::uInterfaceType* IEnumerable__Uno_CharPunctuationChecker_PunctuationRange__typeof()
{
    static ::uStaticStrong< ::uInterfaceType*> type;
    if (type != NULL) return type;

    type = ::uAllocInterfaceType("Uno.Collections.IEnumerable<Uno.CharPunctuationChecker_PunctuationRange>");

    ::uRegisterType(type);
    return type;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Collections\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

::uInterfaceType* IEnumerable__Uno_Collections_ConcurrentCollection1_ModItem_Fuse_Animations_IMixerMaster___typeof()
{
    static ::uStaticStrong< ::uInterfaceType*> type;
    if (type != NULL) return type;

    type = ::uAllocInterfaceType("Uno.Collections.IEnumerable<Uno.Collections.ConcurrentCollection1_ModItem<Fuse.Animations.IMixerMaster>>");

    ::uRegisterType(type);
    return type;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Collections\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

::uInterfaceType* IEnumerable__Uno_Collections_ConcurrentCollection1_ModItem_Uno_EventHandler___typeof()
{
    static ::uStaticStrong< ::uInterfaceType*> type;
    if (type != NULL) return type;

    type = ::uAllocInterfaceType("Uno.Collections.IEnumerable<Uno.Collections.ConcurrentCollection1_ModItem<Uno.EventHandler>>");

    ::uRegisterType(type);
    return type;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Collections\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

::uInterfaceType* IEnumerable__Uno_Collections_Dictionary_Outracks_Simulator_Bytecode_TypeName_Uno_Type___typeof()
{
    static ::uStaticStrong< ::uInterfaceType*> type;
    if (type != NULL) return type;

    type = ::uAllocInterfaceType("Uno.Collections.IEnumerable<Uno.Collections.Dictionary<Outracks.Simulator.Bytecode.TypeName,Uno.Type>>");

    ::uRegisterType(type);
    return type;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Collections\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

::uInterfaceType* IEnumerable__Uno_Collections_KeyValuePair_Android_android_view_View_Fuse_Node___typeof()
{
    static ::uStaticStrong< ::uInterfaceType*> type;
    if (type != NULL) return type;

    type = ::uAllocInterfaceType("Uno.Collections.IEnumerable<Uno.Collections.KeyValuePair<Android.android.view.View,Fuse.Node>>");

    ::uRegisterType(type);
    return type;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Collections\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

::uInterfaceType* IEnumerable__Uno_Collections_KeyValuePair_char_float___typeof()
{
    static ::uStaticStrong< ::uInterfaceType*> type;
    if (type != NULL) return type;

    type = ::uAllocInterfaceType("Uno.Collections.IEnumerable<Uno.Collections.KeyValuePair<char,float>>");

    ::uRegisterType(type);
    return type;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Collections\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

::uInterfaceType* IEnumerable__Uno_Collections_KeyValuePair_char_Uno_Content_Fonts_BitmapFont_GlyphInfo___typeof()
{
    static ::uStaticStrong< ::uInterfaceType*> type;
    if (type != NULL) return type;

    type = ::uAllocInterfaceType("Uno.Collections.IEnumerable<Uno.Collections.KeyValuePair<char,Uno.Content.Fonts.BitmapFont_GlyphInfo>>");

    ::uRegisterType(type);
    return type;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Collections\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

::uInterfaceType* IEnumerable__Uno_Collections_KeyValuePair_char_Uno_Content_Fonts_RenderedGlyph___typeof()
{
    static ::uStaticStrong< ::uInterfaceType*> type;
    if (type != NULL) return type;

    type = ::uAllocInterfaceType("Uno.Collections.IEnumerable<Uno.Collections.KeyValuePair<char,Uno.Content.Fonts.RenderedGlyph>>");

    ::uRegisterType(type);
    return type;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Collections\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

::uInterfaceType* IEnumerable__Uno_Collections_KeyValuePair_Experimental_Cache_DiskCacheEntry_Experimental_Cache_RecordHeader___typeof()
{
    static ::uStaticStrong< ::uInterfaceType*> type;
    if (type != NULL) return type;

    type = ::uAllocInterfaceType("Uno.Collections.IEnumerable<Uno.Collections.KeyValuePair<Experimental.Cache.DiskCacheEntry,Experimental.Cache.RecordHeader>>");

    ::uRegisterType(type);
    return type;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Collections\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

::uInterfaceType* IEnumerable__Uno_Collections_KeyValuePair_framebuffer_bool___typeof()
{
    static ::uStaticStrong< ::uInterfaceType*> type;
    if (type != NULL) return type;

    type = ::uAllocInterfaceType("Uno.Collections.IEnumerable<Uno.Collections.KeyValuePair<framebuffer,bool>>");

    ::uRegisterType(type);
    return type;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Collections\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

::uInterfaceType* IEnumerable__Uno_Collections_KeyValuePair_framebuffer_int___typeof()
{
    static ::uStaticStrong< ::uInterfaceType*> type;
    if (type != NULL) return type;

    type = ::uAllocInterfaceType("Uno.Collections.IEnumerable<Uno.Collections.KeyValuePair<framebuffer,int>>");

    ::uRegisterType(type);
    return type;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Collections\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

::uInterfaceType* IEnumerable__Uno_Collections_KeyValuePair_Fuse_Controls_Internal_DefaultTextRenderer_FontKey_Uno_Content_Fonts_BitmapFont___typeof()
{
    static ::uStaticStrong< ::uInterfaceType*> type;
    if (type != NULL) return type;

    type = ::uAllocInterfaceType("Uno.Collections.IEnumerable<Uno.Collections.KeyValuePair<Fuse.Controls.Internal.DefaultTextRenderer_FontKey,Uno.Content.Fonts.BitmapFont>>");

    ::uRegisterType(type);
    return type;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Collections\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

::uInterfaceType* IEnumerable__Uno_Collections_KeyValuePair_Fuse_Drawing_Stroke_Fuse_Drawing_PolygonFiller___typeof()
{
    static ::uStaticStrong< ::uInterfaceType*> type;
    if (type != NULL) return type;

    type = ::uAllocInterfaceType("Uno.Collections.IEnumerable<Uno.Collections.KeyValuePair<Fuse.Drawing.Stroke,Fuse.Drawing.PolygonFiller>>");

    ::uRegisterType(type);
    return type;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Collections\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

::uInterfaceType* IEnumerable__Uno_Collections_KeyValuePair_Fuse_Entities_Material_Uno_Collections_List_Fuse_Entities_Entry____typeof()
{
    static ::uStaticStrong< ::uInterfaceType*> type;
    if (type != NULL) return type;

    type = ::uAllocInterfaceType("Uno.Collections.IEnumerable<Uno.Collections.KeyValuePair<Fuse.Entities.Material,Uno.Collections.List<Fuse.Entities.Entry>>>");

    ::uRegisterType(type);
    return type;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Collections\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

::uInterfaceType* IEnumerable__Uno_Collections_KeyValuePair_Fuse_Entities_Mesh_Fuse_Drawing_Batching_MeshBatcher___typeof()
{
    static ::uStaticStrong< ::uInterfaceType*> type;
    if (type != NULL) return type;

    type = ::uAllocInterfaceType("Uno.Collections.IEnumerable<Uno.Collections.KeyValuePair<Fuse.Entities.Mesh,Fuse.Drawing.Batching.MeshBatcher>>");

    ::uRegisterType(type);
    return type;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Collections\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

::uInterfaceType* IEnumerable__Uno_Collections_KeyValuePair_Fuse_Entities_Mesh_Uno_Collections_List_Fuse_Entities_Entry____typeof()
{
    static ::uStaticStrong< ::uInterfaceType*> type;
    if (type != NULL) return type;

    type = ::uAllocInterfaceType("Uno.Collections.IEnumerable<Uno.Collections.KeyValuePair<Fuse.Entities.Mesh,Uno.Collections.List<Fuse.Entities.Entry>>>");

    ::uRegisterType(type);
    return type;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Collections\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

::uInterfaceType* IEnumerable__Uno_Collections_KeyValuePair_Fuse_Font_Fuse_Controls_Internal_DefaultTextRenderer___typeof()
{
    static ::uStaticStrong< ::uInterfaceType*> type;
    if (type != NULL) return type;

    type = ::uAllocInterfaceType("Uno.Collections.IEnumerable<Uno.Collections.KeyValuePair<Fuse.Font,Fuse.Controls.Internal.DefaultTextRenderer>>");

    ::uRegisterType(type);
    return type;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Collections\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

::uInterfaceType* IEnumerable__Uno_Collections_KeyValuePair_Fuse_IFlush_bool___typeof()
{
    static ::uStaticStrong< ::uInterfaceType*> type;
    if (type != NULL) return type;

    type = ::uAllocInterfaceType("Uno.Collections.IEnumerable<Uno.Collections.KeyValuePair<Fuse.IFlush,bool>>");

    ::uRegisterType(type);
    return type;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Collections\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

::uInterfaceType* IEnumerable__Uno_Collections_KeyValuePair_Fuse_Navigation_NavigationEdge_Fuse_Gestures_Internal_EdgeSwiper___typeof()
{
    static ::uStaticStrong< ::uInterfaceType*> type;
    if (type != NULL) return type;

    type = ::uAllocInterfaceType("Uno.Collections.IEnumerable<Uno.Collections.KeyValuePair<Fuse.Navigation.NavigationEdge,Fuse.Gestures.Internal.EdgeSwiper>>");

    ::uRegisterType(type);
    return type;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Collections\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

::uInterfaceType* IEnumerable__Uno_Collections_KeyValuePair_Fuse_Node_bool___typeof()
{
    static ::uStaticStrong< ::uInterfaceType*> type;
    if (type != NULL) return type;

    type = ::uAllocInterfaceType("Uno.Collections.IEnumerable<Uno.Collections.KeyValuePair<Fuse.Node,bool>>");

    ::uRegisterType(type);
    return type;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Collections\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

::uInterfaceType* IEnumerable__Uno_Collections_KeyValuePair_HashableWeakReference_Outracks_Simulator_Bytecode_TypeName___typeof()
{
    static ::uStaticStrong< ::uInterfaceType*> type;
    if (type != NULL) return type;

    type = ::uAllocInterfaceType("Uno.Collections.IEnumerable<Uno.Collections.KeyValuePair<HashableWeakReference,Outracks.Simulator.Bytecode.TypeName>>");

    ::uRegisterType(type);
    return type;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Collections\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

::uInterfaceType* IEnumerable__Uno_Collections_KeyValuePair_HashableWeakReference_string___typeof()
{
    static ::uStaticStrong< ::uInterfaceType*> type;
    if (type != NULL) return type;

    type = ::uAllocInterfaceType("Uno.Collections.IEnumerable<Uno.Collections.KeyValuePair<HashableWeakReference,string>>");

    ::uRegisterType(type);
    return type;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Collections\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

::uInterfaceType* IEnumerable__Uno_Collections_KeyValuePair_int_bool___typeof()
{
    static ::uStaticStrong< ::uInterfaceType*> type;
    if (type != NULL) return type;

    type = ::uAllocInterfaceType("Uno.Collections.IEnumerable<Uno.Collections.KeyValuePair<int,bool>>");

    ::uRegisterType(type);
    return type;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Collections\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

::uInterfaceType* IEnumerable__Uno_Collections_KeyValuePair_int_Fuse_Input_Capturer___typeof()
{
    static ::uStaticStrong< ::uInterfaceType*> type;
    if (type != NULL) return type;

    type = ::uAllocInterfaceType("Uno.Collections.IEnumerable<Uno.Collections.KeyValuePair<int,Fuse.Input.Capturer>>");

    ::uRegisterType(type);
    return type;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Collections\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

::uInterfaceType* IEnumerable__Uno_Collections_KeyValuePair_int_Fuse_Input_Pointer_PointerRecord___typeof()
{
    static ::uStaticStrong< ::uInterfaceType*> type;
    if (type != NULL) return type;

    type = ::uAllocInterfaceType("Uno.Collections.IEnumerable<Uno.Collections.KeyValuePair<int,Fuse.Input.Pointer_PointerRecord>>");

    ::uRegisterType(type);
    return type;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Collections\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

::uInterfaceType* IEnumerable__Uno_Collections_KeyValuePair_int_Fuse_Scripting_Callback___typeof()
{
    static ::uStaticStrong< ::uInterfaceType*> type;
    if (type != NULL) return type;

    type = ::uAllocInterfaceType("Uno.Collections.IEnumerable<Uno.Collections.KeyValuePair<int,Fuse.Scripting.Callback>>");

    ::uRegisterType(type);
    return type;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Collections\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

::uInterfaceType* IEnumerable__Uno_Collections_KeyValuePair_int_int___typeof()
{
    static ::uStaticStrong< ::uInterfaceType*> type;
    if (type != NULL) return type;

    type = ::uAllocInterfaceType("Uno.Collections.IEnumerable<Uno.Collections.KeyValuePair<int,int>>");

    ::uRegisterType(type);
    return type;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Collections\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

::uInterfaceType* IEnumerable__Uno_Collections_KeyValuePair_int_string___typeof()
{
    static ::uStaticStrong< ::uInterfaceType*> type;
    if (type != NULL) return type;

    type = ::uAllocInterfaceType("Uno.Collections.IEnumerable<Uno.Collections.KeyValuePair<int,string>>");

    ::uRegisterType(type);
    return type;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Collections\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

::uInterfaceType* IEnumerable__Uno_Collections_KeyValuePair_int_Uno_Collections_IList_Fuse_Input_Capturer____typeof()
{
    static ::uStaticStrong< ::uInterfaceType*> type;
    if (type != NULL) return type;

    type = ::uAllocInterfaceType("Uno.Collections.IEnumerable<Uno.Collections.KeyValuePair<int,Uno.Collections.IList<Fuse.Input.Capturer>>>");

    ::uRegisterType(type);
    return type;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Collections\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

::uInterfaceType* IEnumerable__Uno_Collections_KeyValuePair_int_Uno_Collections_List_Fuse_Input_Pointer_PELHolder____typeof()
{
    static ::uStaticStrong< ::uInterfaceType*> type;
    if (type != NULL) return type;

    type = ::uAllocInterfaceType("Uno.Collections.IEnumerable<Uno.Collections.KeyValuePair<int,Uno.Collections.List<Fuse.Input.Pointer_PELHolder>>>");

    ::uRegisterType(type);
    return type;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Collections\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

::uInterfaceType* IEnumerable__Uno_Collections_KeyValuePair_object_object___typeof()
{
    static ::uStaticStrong< ::uInterfaceType*> type;
    if (type != NULL) return type;

    type = ::uAllocInterfaceType("Uno.Collections.IEnumerable<Uno.Collections.KeyValuePair<object,object>>");

    ::uRegisterType(type);
    return type;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Collections\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

::uInterfaceType* IEnumerable__Uno_Collections_KeyValuePair_object_string___typeof()
{
    static ::uStaticStrong< ::uInterfaceType*> type;
    if (type != NULL) return type;

    type = ::uAllocInterfaceType("Uno.Collections.IEnumerable<Uno.Collections.KeyValuePair<object,string>>");

    ::uRegisterType(type);
    return type;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Collections\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

::uInterfaceType* IEnumerable__Uno_Collections_KeyValuePair_Outracks_Simulator_Bytecode_TypeName_Outracks_Simulator_Bytecode_TypeName___typeof()
{
    static ::uStaticStrong< ::uInterfaceType*> type;
    if (type != NULL) return type;

    type = ::uAllocInterfaceType("Uno.Collections.IEnumerable<Uno.Collections.KeyValuePair<Outracks.Simulator.Bytecode.TypeName,Outracks.Simulator.Bytecode.TypeName>>");

    ::uRegisterType(type);
    return type;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Collections\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

::uInterfaceType* IEnumerable__Uno_Collections_KeyValuePair_Outracks_Simulator_Bytecode_TypeName_Uno_Type___typeof()
{
    static ::uStaticStrong< ::uInterfaceType*> type;
    if (type != NULL) return type;

    type = ::uAllocInterfaceType("Uno.Collections.IEnumerable<Uno.Collections.KeyValuePair<Outracks.Simulator.Bytecode.TypeName,Uno.Type>>");

    ::uRegisterType(type);
    return type;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Collections\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

::uInterfaceType* IEnumerable__Uno_Collections_KeyValuePair_Outracks_Simulator_Bytecode_Variable_object___typeof()
{
    static ::uStaticStrong< ::uInterfaceType*> type;
    if (type != NULL) return type;

    type = ::uAllocInterfaceType("Uno.Collections.IEnumerable<Uno.Collections.KeyValuePair<Outracks.Simulator.Bytecode.Variable,object>>");

    ::uRegisterType(type);
    return type;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Collections\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

::uInterfaceType* IEnumerable__Uno_Collections_KeyValuePair_string_Android_android_graphics_Bitmap___typeof()
{
    static ::uStaticStrong< ::uInterfaceType*> type;
    if (type != NULL) return type;

    type = ::uAllocInterfaceType("Uno.Collections.IEnumerable<Uno.Collections.KeyValuePair<string,Android.android.graphics.Bitmap>>");

    ::uRegisterType(type);
    return type;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Collections\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

::uInterfaceType* IEnumerable__Uno_Collections_KeyValuePair_string_Android_android_graphics_Typeface___typeof()
{
    static ::uStaticStrong< ::uInterfaceType*> type;
    if (type != NULL) return type;

    type = ::uAllocInterfaceType("Uno.Collections.IEnumerable<Uno.Collections.KeyValuePair<string,Android.android.graphics.Typeface>>");

    ::uRegisterType(type);
    return type;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Collections\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

::uInterfaceType* IEnumerable__Uno_Collections_KeyValuePair_string_bool___typeof()
{
    static ::uStaticStrong< ::uInterfaceType*> type;
    if (type != NULL) return type;

    type = ::uAllocInterfaceType("Uno.Collections.IEnumerable<Uno.Collections.KeyValuePair<string,bool>>");

    ::uRegisterType(type);
    return type;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Collections\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

::uInterfaceType* IEnumerable__Uno_Collections_KeyValuePair_string_Experimental_Cache_DiskCacheEntry___typeof()
{
    static ::uStaticStrong< ::uInterfaceType*> type;
    if (type != NULL) return type;

    type = ::uAllocInterfaceType("Uno.Collections.IEnumerable<Uno.Collections.KeyValuePair<string,Experimental.Cache.DiskCacheEntry>>");

    ::uRegisterType(type);
    return type;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Collections\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

::uInterfaceType* IEnumerable__Uno_Collections_KeyValuePair_string_Fuse_Shapes_GeometryCacheEntry___typeof()
{
    static ::uStaticStrong< ::uInterfaceType*> type;
    if (type != NULL) return type;

    type = ::uAllocInterfaceType("Uno.Collections.IEnumerable<Uno.Collections.KeyValuePair<string,Fuse.Shapes.GeometryCacheEntry>>");

    ::uRegisterType(type);
    return type;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Collections\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

::uInterfaceType* IEnumerable__Uno_Collections_KeyValuePair_string_int___typeof()
{
    static ::uStaticStrong< ::uInterfaceType*> type;
    if (type != NULL) return type;

    type = ::uAllocInterfaceType("Uno.Collections.IEnumerable<Uno.Collections.KeyValuePair<string,int>>");

    ::uRegisterType(type);
    return type;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Collections\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

::uInterfaceType* IEnumerable__Uno_Collections_KeyValuePair_string_object___typeof()
{
    static ::uStaticStrong< ::uInterfaceType*> type;
    if (type != NULL) return type;

    type = ::uAllocInterfaceType("Uno.Collections.IEnumerable<Uno.Collections.KeyValuePair<string,object>>");

    ::uRegisterType(type);
    return type;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Collections\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

::uInterfaceType* IEnumerable__Uno_Collections_KeyValuePair_string_Outracks_Simulator_ByteFileSource___typeof()
{
    static ::uStaticStrong< ::uInterfaceType*> type;
    if (type != NULL) return type;

    type = ::uAllocInterfaceType("Uno.Collections.IEnumerable<Uno.Collections.KeyValuePair<string,Outracks.Simulator.ByteFileSource>>");

    ::uRegisterType(type);
    return type;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Collections\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

::uInterfaceType* IEnumerable__Uno_Collections_KeyValuePair_string_string___typeof()
{
    static ::uStaticStrong< ::uInterfaceType*> type;
    if (type != NULL) return type;

    type = ::uAllocInterfaceType("Uno.Collections.IEnumerable<Uno.Collections.KeyValuePair<string,string>>");

    ::uRegisterType(type);
    return type;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Collections\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

::uInterfaceType* IEnumerable__Uno_Collections_KeyValuePair_string_Uno_Collections_List_Fuse_Scripting_INameListener____typeof()
{
    static ::uStaticStrong< ::uInterfaceType*> type;
    if (type != NULL) return type;

    type = ::uAllocInterfaceType("Uno.Collections.IEnumerable<Uno.Collections.KeyValuePair<string,Uno.Collections.List<Fuse.Scripting.INameListener>>>");

    ::uRegisterType(type);
    return type;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Collections\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

::uInterfaceType* IEnumerable__Uno_Collections_KeyValuePair_string_Uno_Collections_List_object____typeof()
{
    static ::uStaticStrong< ::uInterfaceType*> type;
    if (type != NULL) return type;

    type = ::uAllocInterfaceType("Uno.Collections.IEnumerable<Uno.Collections.KeyValuePair<string,Uno.Collections.List<object>>>");

    ::uRegisterType(type);
    return type;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Collections\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

::uInterfaceType* IEnumerable__Uno_Collections_KeyValuePair_string_Uno_Collections_List_Uno_Action____typeof()
{
    static ::uStaticStrong< ::uInterfaceType*> type;
    if (type != NULL) return type;

    type = ::uAllocInterfaceType("Uno.Collections.IEnumerable<Uno.Collections.KeyValuePair<string,Uno.Collections.List<Uno.Action>>>");

    ::uRegisterType(type);
    return type;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Collections\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

::uInterfaceType* IEnumerable__Uno_Collections_KeyValuePair_string_Uno_Content_Models_ModelParameter___typeof()
{
    static ::uStaticStrong< ::uInterfaceType*> type;
    if (type != NULL) return type;

    type = ::uAllocInterfaceType("Uno.Collections.IEnumerable<Uno.Collections.KeyValuePair<string,Uno.Content.Models.ModelParameter>>");

    ::uRegisterType(type);
    return type;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Collections\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

::uInterfaceType* IEnumerable__Uno_Collections_KeyValuePair_string_Uno_Content_Models_VertexAttributeArray___typeof()
{
    static ::uStaticStrong< ::uInterfaceType*> type;
    if (type != NULL) return type;

    type = ::uAllocInterfaceType("Uno.Collections.IEnumerable<Uno.Collections.KeyValuePair<string,Uno.Content.Models.VertexAttributeArray>>");

    ::uRegisterType(type);
    return type;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Collections\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

::uInterfaceType* IEnumerable__Uno_Collections_KeyValuePair_string_Uno_Data_Json_Value___typeof()
{
    static ::uStaticStrong< ::uInterfaceType*> type;
    if (type != NULL) return type;

    type = ::uAllocInterfaceType("Uno.Collections.IEnumerable<Uno.Collections.KeyValuePair<string,Uno.Data.Json.Value>>");

    ::uRegisterType(type);
    return type;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Collections\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

::uInterfaceType* IEnumerable__Uno_Collections_KeyValuePair_string_Uno_Data_Xml_XmlEncoding___typeof()
{
    static ::uStaticStrong< ::uInterfaceType*> type;
    if (type != NULL) return type;

    type = ::uAllocInterfaceType("Uno.Collections.IEnumerable<Uno.Collections.KeyValuePair<string,Uno.Data.Xml.XmlEncoding>>");

    ::uRegisterType(type);
    return type;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Collections\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

::uInterfaceType* IEnumerable__Uno_Collections_KeyValuePair_string_Uno_Runtime_Implementation_ShaderBackends_OpenGL_GLCompiledProgram___typeof()
{
    static ::uStaticStrong< ::uInterfaceType*> type;
    if (type != NULL) return type;

    type = ::uAllocInterfaceType("Uno.Collections.IEnumerable<Uno.Collections.KeyValuePair<string,Uno.Runtime.Implementation.ShaderBackends.OpenGL.GLCompiledProgram>>");

    ::uRegisterType(type);
    return type;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Collections\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

::uInterfaceType* IEnumerable__Uno_Collections_KeyValuePair_string_Uno_WeakReference_Fuse_Resources_HttpImageSourceImpl____typeof()
{
    static ::uStaticStrong< ::uInterfaceType*> type;
    if (type != NULL) return type;

    type = ::uAllocInterfaceType("Uno.Collections.IEnumerable<Uno.Collections.KeyValuePair<string,Uno.WeakReference<Fuse.Resources.HttpImageSourceImpl>>>");

    ::uRegisterType(type);
    return type;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Collections\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

::uInterfaceType* IEnumerable__Uno_Collections_KeyValuePair_Uno_Content_Fonts_BitmapFont_CharPair_float___typeof()
{
    static ::uStaticStrong< ::uInterfaceType*> type;
    if (type != NULL) return type;

    type = ::uAllocInterfaceType("Uno.Collections.IEnumerable<Uno.Collections.KeyValuePair<Uno.Content.Fonts.BitmapFont_CharPair,float>>");

    ::uRegisterType(type);
    return type;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Collections\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

::uInterfaceType* IEnumerable__Uno_Collections_KeyValuePair_Uno_Type_object___typeof()
{
    static ::uStaticStrong< ::uInterfaceType*> type;
    if (type != NULL) return type;

    type = ::uAllocInterfaceType("Uno.Collections.IEnumerable<Uno.Collections.KeyValuePair<Uno.Type,object>>");

    ::uRegisterType(type);
    return type;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Collections\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

::uInterfaceType* IEnumerable__Uno_Collections_KeyValuePair_Uno_Type_Uno_Reflection_CppField_____typeof()
{
    static ::uStaticStrong< ::uInterfaceType*> type;
    if (type != NULL) return type;

    type = ::uAllocInterfaceType("Uno.Collections.IEnumerable<Uno.Collections.KeyValuePair<Uno.Type,Uno.Reflection.CppField[]>>");

    ::uRegisterType(type);
    return type;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Collections\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

::uInterfaceType* IEnumerable__Uno_Collections_KeyValuePair_Uno_Type_Uno_Reflection_CppFunction_____typeof()
{
    static ::uStaticStrong< ::uInterfaceType*> type;
    if (type != NULL) return type;

    type = ::uAllocInterfaceType("Uno.Collections.IEnumerable<Uno.Collections.KeyValuePair<Uno.Type,Uno.Reflection.CppFunction[]>>");

    ::uRegisterType(type);
    return type;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Collections\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

::uInterfaceType* IEnumerable__Uno_Collections_KeyValuePair_Uno_UX_FileSource_Uno_Content_Fonts_FontFace___typeof()
{
    static ::uStaticStrong< ::uInterfaceType*> type;
    if (type != NULL) return type;

    type = ::uAllocInterfaceType("Uno.Collections.IEnumerable<Uno.Collections.KeyValuePair<Uno.UX.FileSource,Uno.Content.Fonts.FontFace>>");

    ::uRegisterType(type);
    return type;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Collections\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

::uInterfaceType* IEnumerable__Uno_Collections_KeyValuePair_Uno_UX_FileSource_Uno_WeakReference_Fuse_Resources_FileImageSourceImpl____typeof()
{
    static ::uStaticStrong< ::uInterfaceType*> type;
    if (type != NULL) return type;

    type = ::uAllocInterfaceType("Uno.Collections.IEnumerable<Uno.Collections.KeyValuePair<Uno.UX.FileSource,Uno.WeakReference<Fuse.Resources.FileImageSourceImpl>>>");

    ::uRegisterType(type);
    return type;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Collections\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

::uInterfaceType* IEnumerable__Uno_Content_Models_ModelDrawable__typeof()
{
    static ::uStaticStrong< ::uInterfaceType*> type;
    if (type != NULL) return type;

    type = ::uAllocInterfaceType("Uno.Collections.IEnumerable<Uno.Content.Models.ModelDrawable>");

    ::uRegisterType(type);
    return type;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Collections\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

::uInterfaceType* IEnumerable__Uno_Content_Models_ModelMesh__typeof()
{
    static ::uStaticStrong< ::uInterfaceType*> type;
    if (type != NULL) return type;

    type = ::uAllocInterfaceType("Uno.Collections.IEnumerable<Uno.Content.Models.ModelMesh>");

    ::uRegisterType(type);
    return type;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Collections\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

::uInterfaceType* IEnumerable__Uno_Content_Models_ModelNode__typeof()
{
    static ::uStaticStrong< ::uInterfaceType*> type;
    if (type != NULL) return type;

    type = ::uAllocInterfaceType("Uno.Collections.IEnumerable<Uno.Content.Models.ModelNode>");

    ::uRegisterType(type);
    return type;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Collections\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

::uInterfaceType* IEnumerable__Uno_Content_Models_ModelParameter_float4x4___typeof()
{
    static ::uStaticStrong< ::uInterfaceType*> type;
    if (type != NULL) return type;

    type = ::uAllocInterfaceType("Uno.Collections.IEnumerable<Uno.Content.Models.ModelParameter<float4x4>>");

    ::uRegisterType(type);
    return type;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Collections\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

::uInterfaceType* IEnumerable__Uno_Content_Models_ModelSkin__typeof()
{
    static ::uStaticStrong< ::uInterfaceType*> type;
    if (type != NULL) return type;

    type = ::uAllocInterfaceType("Uno.Collections.IEnumerable<Uno.Content.Models.ModelSkin>");

    ::uRegisterType(type);
    return type;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Collections\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

::uInterfaceType* IEnumerable__Uno_Content_Models_SkinBone__typeof()
{
    static ::uStaticStrong< ::uInterfaceType*> type;
    if (type != NULL) return type;

    type = ::uAllocInterfaceType("Uno.Collections.IEnumerable<Uno.Content.Models.SkinBone>");

    ::uRegisterType(type);
    return type;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Collections\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

::uInterfaceType* IEnumerable__Uno_Content_Models_SkinDrawable__typeof()
{
    static ::uStaticStrong< ::uInterfaceType*> type;
    if (type != NULL) return type;

    type = ::uAllocInterfaceType("Uno.Collections.IEnumerable<Uno.Content.Models.SkinDrawable>");

    ::uRegisterType(type);
    return type;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Collections\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

::uInterfaceType* IEnumerable__Uno_Content_Models_VertexInfluence__typeof()
{
    static ::uStaticStrong< ::uInterfaceType*> type;
    if (type != NULL) return type;

    type = ::uAllocInterfaceType("Uno.Collections.IEnumerable<Uno.Content.Models.VertexInfluence>");

    ::uRegisterType(type);
    return type;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Collections\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

::uInterfaceType* IEnumerable__Uno_Content_Splines_KeyframedSpline2_Key_float_float___typeof()
{
    static ::uStaticStrong< ::uInterfaceType*> type;
    if (type != NULL) return type;

    type = ::uAllocInterfaceType("Uno.Collections.IEnumerable<Uno.Content.Splines.KeyframedSpline2_Key<float,float>>");

    ::uRegisterType(type);
    return type;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Collections\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

::uInterfaceType* IEnumerable__Uno_Content_Splines_KeyframedSpline2_Key_float2_float2___typeof()
{
    static ::uStaticStrong< ::uInterfaceType*> type;
    if (type != NULL) return type;

    type = ::uAllocInterfaceType("Uno.Collections.IEnumerable<Uno.Content.Splines.KeyframedSpline2_Key<float2,float2>>");

    ::uRegisterType(type);
    return type;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Collections\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

::uInterfaceType* IEnumerable__Uno_Content_Splines_KeyframedSpline2_Key_float3_float3___typeof()
{
    static ::uStaticStrong< ::uInterfaceType*> type;
    if (type != NULL) return type;

    type = ::uAllocInterfaceType("Uno.Collections.IEnumerable<Uno.Content.Splines.KeyframedSpline2_Key<float3,float3>>");

    ::uRegisterType(type);
    return type;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Collections\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

::uInterfaceType* IEnumerable__Uno_Content_Splines_KeyframedSpline2_Key_float4_float4___typeof()
{
    static ::uStaticStrong< ::uInterfaceType*> type;
    if (type != NULL) return type;

    type = ::uAllocInterfaceType("Uno.Collections.IEnumerable<Uno.Content.Splines.KeyframedSpline2_Key<float4,float4>>");

    ::uRegisterType(type);
    return type;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Collections\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

::uInterfaceType* IEnumerable__Uno_Content_Splines_KeyframedSpline2_Key_float4x4_float4x4___typeof()
{
    static ::uStaticStrong< ::uInterfaceType*> type;
    if (type != NULL) return type;

    type = ::uAllocInterfaceType("Uno.Collections.IEnumerable<Uno.Content.Splines.KeyframedSpline2_Key<float4x4,float4x4>>");

    ::uRegisterType(type);
    return type;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Collections\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

::uInterfaceType* IEnumerable__Uno_Data_Json_Value__typeof()
{
    static ::uStaticStrong< ::uInterfaceType*> type;
    if (type != NULL) return type;

    type = ::uAllocInterfaceType("Uno.Collections.IEnumerable<Uno.Data.Json.Value>");

    ::uRegisterType(type);
    return type;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Collections\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

::uInterfaceType* IEnumerable__Uno_Data_Xml_XmlAttribute__typeof()
{
    static ::uStaticStrong< ::uInterfaceType*> type;
    if (type != NULL) return type;

    type = ::uAllocInterfaceType("Uno.Collections.IEnumerable<Uno.Data.Xml.XmlAttribute>");

    ::uRegisterType(type);
    return type;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Collections\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

::uInterfaceType* IEnumerable__Uno_Data_Xml_XmlAttributeHandle__typeof()
{
    static ::uStaticStrong< ::uInterfaceType*> type;
    if (type != NULL) return type;

    type = ::uAllocInterfaceType("Uno.Collections.IEnumerable<Uno.Data.Xml.XmlAttributeHandle>");

    ::uRegisterType(type);
    return type;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Collections\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

::uInterfaceType* IEnumerable__Uno_Data_Xml_XmlLinkedNode__typeof()
{
    static ::uStaticStrong< ::uInterfaceType*> type;
    if (type != NULL) return type;

    type = ::uAllocInterfaceType("Uno.Collections.IEnumerable<Uno.Data.Xml.XmlLinkedNode>");

    ::uRegisterType(type);
    return type;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Collections\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

::uInterfaceType* IEnumerable__Uno_Data_Xml_XmlNodeHandle__typeof()
{
    static ::uStaticStrong< ::uInterfaceType*> type;
    if (type != NULL) return type;

    type = ::uAllocInterfaceType("Uno.Collections.IEnumerable<Uno.Data.Xml.XmlNodeHandle>");

    ::uRegisterType(type);
    return type;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Collections\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

::uInterfaceType* IEnumerable__Uno_Diagnostics_ProfileEvent__typeof()
{
    static ::uStaticStrong< ::uInterfaceType*> type;
    if (type != NULL) return type;

    type = ::uAllocInterfaceType("Uno.Collections.IEnumerable<Uno.Diagnostics.ProfileEvent>");

    ::uRegisterType(type);
    return type;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Collections\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

::uInterfaceType* IEnumerable__Uno_EventHandler__typeof()
{
    static ::uStaticStrong< ::uInterfaceType*> type;
    if (type != NULL) return type;

    type = ::uAllocInterfaceType("Uno.Collections.IEnumerable<Uno.EventHandler>");

    ::uRegisterType(type);
    return type;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Collections\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

::uInterfaceType* IEnumerable__Uno_Exception__typeof()
{
    static ::uStaticStrong< ::uInterfaceType*> type;
    if (type != NULL) return type;

    type = ::uAllocInterfaceType("Uno.Collections.IEnumerable<Uno.Exception>");

    ::uRegisterType(type);
    return type;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Collections\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

::uInterfaceType* IEnumerable__Uno_Geometry_Triangle2D__typeof()
{
    static ::uStaticStrong< ::uInterfaceType*> type;
    if (type != NULL) return type;

    type = ::uAllocInterfaceType("Uno.Collections.IEnumerable<Uno.Geometry.Triangle2D>");

    ::uRegisterType(type);
    return type;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Collections\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

::uInterfaceType* IEnumerable__Uno_Graphics_PolygonFace__typeof()
{
    static ::uStaticStrong< ::uInterfaceType*> type;
    if (type != NULL) return type;

    type = ::uAllocInterfaceType("Uno.Collections.IEnumerable<Uno.Graphics.PolygonFace>");

    ::uRegisterType(type);
    return type;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Collections\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

::uInterfaceType* IEnumerable__Uno_Net_Http_HttpMessageHandlerRequest__typeof()
{
    static ::uStaticStrong< ::uInterfaceType*> type;
    if (type != NULL) return type;

    type = ::uAllocInterfaceType("Uno.Collections.IEnumerable<Uno.Net.Http.HttpMessageHandlerRequest>");

    ::uRegisterType(type);
    return type;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Collections\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

::uInterfaceType* IEnumerable__Uno_Net_IPEndPoint__typeof()
{
    static ::uStaticStrong< ::uInterfaceType*> type;
    if (type != NULL) return type;

    type = ::uAllocInterfaceType("Uno.Collections.IEnumerable<Uno.Net.IPEndPoint>");

    ::uRegisterType(type);
    return type;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Collections\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

::uInterfaceType* IEnumerable__Uno_Platform_Key__typeof()
{
    static ::uStaticStrong< ::uInterfaceType*> type;
    if (type != NULL) return type;

    type = ::uAllocInterfaceType("Uno.Collections.IEnumerable<Uno.Platform.Key>");

    ::uRegisterType(type);
    return type;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Collections\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

::uInterfaceType* IEnumerable__Uno_Reflection_CppField__typeof()
{
    static ::uStaticStrong< ::uInterfaceType*> type;
    if (type != NULL) return type;

    type = ::uAllocInterfaceType("Uno.Collections.IEnumerable<Uno.Reflection.CppField>");

    ::uRegisterType(type);
    return type;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Collections\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

::uInterfaceType* IEnumerable__Uno_Reflection_CppFunction__typeof()
{
    static ::uStaticStrong< ::uInterfaceType*> type;
    if (type != NULL) return type;

    type = ::uAllocInterfaceType("Uno.Collections.IEnumerable<Uno.Reflection.CppFunction>");

    ::uRegisterType(type);
    return type;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Collections\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

::uInterfaceType* IEnumerable__Uno_Runtime_Implementation_Internal_FormatStringToken__typeof()
{
    static ::uStaticStrong< ::uInterfaceType*> type;
    if (type != NULL) return type;

    type = ::uAllocInterfaceType("Uno.Collections.IEnumerable<Uno.Runtime.Implementation.Internal.FormatStringToken>");

    ::uRegisterType(type);
    return type;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Collections\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

::uInterfaceType* IEnumerable__Uno_UX_FileSource__typeof()
{
    static ::uStaticStrong< ::uInterfaceType*> type;
    if (type != NULL) return type;

    type = ::uAllocInterfaceType("Uno.Collections.IEnumerable<Uno.UX.FileSource>");

    ::uRegisterType(type);
    return type;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Collections\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

::uInterfaceType* IEnumerable__Uno_UX_IFactory__typeof()
{
    static ::uStaticStrong< ::uInterfaceType*> type;
    if (type != NULL) return type;

    type = ::uAllocInterfaceType("Uno.Collections.IEnumerable<Uno.UX.IFactory>");

    ::uRegisterType(type);
    return type;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Collections\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

::uInterfaceType* IEnumerable__Uno_UX_ITemplate__typeof()
{
    static ::uStaticStrong< ::uInterfaceType*> type;
    if (type != NULL) return type;

    type = ::uAllocInterfaceType("Uno.Collections.IEnumerable<Uno.UX.ITemplate>");

    ::uRegisterType(type);
    return type;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Collections\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

::uInterfaceType* IEnumerable__Uno_UX_Resource__typeof()
{
    static ::uStaticStrong< ::uInterfaceType*> type;
    if (type != NULL) return type;

    type = ::uAllocInterfaceType("Uno.Collections.IEnumerable<Uno.UX.Resource>");

    ::uRegisterType(type);
    return type;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Collections\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

::uInterfaceType* IEnumerator__typeof()
{
    static ::uStaticStrong< ::uInterfaceType*> type;
    if (type != NULL) return type;

    type = ::uAllocInterfaceType("Uno.Collections.IEnumerator");

    ::uRegisterType(type);
    return type;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Collections\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

::uInterfaceType* IEnumerator__byte__typeof()
{
    static ::uStaticStrong< ::uInterfaceType*> type;
    if (type != NULL) return type;

    type = ::uAllocInterfaceType("Uno.Collections.IEnumerator<byte>");

    ::uRegisterType(type);
    return type;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Collections\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

::uInterfaceType* IEnumerator__byte____typeof()
{
    static ::uStaticStrong< ::uInterfaceType*> type;
    if (type != NULL) return type;

    type = ::uAllocInterfaceType("Uno.Collections.IEnumerator<byte[]>");

    ::uRegisterType(type);
    return type;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Collections\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

::uInterfaceType* IEnumerator__char__typeof()
{
    static ::uStaticStrong< ::uInterfaceType*> type;
    if (type != NULL) return type;

    type = ::uAllocInterfaceType("Uno.Collections.IEnumerator<char>");

    ::uRegisterType(type);
    return type;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Collections\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

::uInterfaceType* IEnumerator__Experimental_Cache_DiskCacheEntry__typeof()
{
    static ::uStaticStrong< ::uInterfaceType*> type;
    if (type != NULL) return type;

    type = ::uAllocInterfaceType("Uno.Collections.IEnumerator<Experimental.Cache.DiskCacheEntry>");

    ::uRegisterType(type);
    return type;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Collections\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

::uInterfaceType* IEnumerator__float2__typeof()
{
    static ::uStaticStrong< ::uInterfaceType*> type;
    if (type != NULL) return type;

    type = ::uAllocInterfaceType("Uno.Collections.IEnumerator<float2>");

    ::uRegisterType(type);
    return type;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Collections\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

::uInterfaceType* IEnumerator__float3__typeof()
{
    static ::uStaticStrong< ::uInterfaceType*> type;
    if (type != NULL) return type;

    type = ::uAllocInterfaceType("Uno.Collections.IEnumerator<float3>");

    ::uRegisterType(type);
    return type;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Collections\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

::uInterfaceType* IEnumerator__float4__typeof()
{
    static ::uStaticStrong< ::uInterfaceType*> type;
    if (type != NULL) return type;

    type = ::uAllocInterfaceType("Uno.Collections.IEnumerator<float4>");

    ::uRegisterType(type);
    return type;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Collections\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

::uInterfaceType* IEnumerator__framebuffer__typeof()
{
    static ::uStaticStrong< ::uInterfaceType*> type;
    if (type != NULL) return type;

    type = ::uAllocInterfaceType("Uno.Collections.IEnumerator<framebuffer>");

    ::uRegisterType(type);
    return type;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Collections\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

::uInterfaceType* IEnumerator__Fuse_Animations_Animator__typeof()
{
    static ::uStaticStrong< ::uInterfaceType*> type;
    if (type != NULL) return type;

    type = ::uAllocInterfaceType("Uno.Collections.IEnumerator<Fuse.Animations.Animator>");

    ::uRegisterType(type);
    return type;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Collections\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

::uInterfaceType* IEnumerator__Fuse_Animations_IMixerMaster__typeof()
{
    static ::uStaticStrong< ::uInterfaceType*> type;
    if (type != NULL) return type;

    type = ::uAllocInterfaceType("Uno.Collections.IEnumerator<Fuse.Animations.IMixerMaster>");

    ::uRegisterType(type);
    return type;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Collections\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

::uInterfaceType* IEnumerator__Fuse_Animations_Keyframe__typeof()
{
    static ::uStaticStrong< ::uInterfaceType*> type;
    if (type != NULL) return type;

    type = ::uAllocInterfaceType("Uno.Collections.IEnumerator<Fuse.Animations.Keyframe>");

    ::uRegisterType(type);
    return type;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Collections\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

::uInterfaceType* IEnumerator__Fuse_Animations_MixerHandle_bool___typeof()
{
    static ::uStaticStrong< ::uInterfaceType*> type;
    if (type != NULL) return type;

    type = ::uAllocInterfaceType("Uno.Collections.IEnumerator<Fuse.Animations.MixerHandle<bool>>");

    ::uRegisterType(type);
    return type;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Collections\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

::uInterfaceType* IEnumerator__Fuse_Animations_MixerHandle_char___typeof()
{
    static ::uStaticStrong< ::uInterfaceType*> type;
    if (type != NULL) return type;

    type = ::uAllocInterfaceType("Uno.Collections.IEnumerator<Fuse.Animations.MixerHandle<char>>");

    ::uRegisterType(type);
    return type;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Collections\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

::uInterfaceType* IEnumerator__Fuse_Animations_MixerHandle_double___typeof()
{
    static ::uStaticStrong< ::uInterfaceType*> type;
    if (type != NULL) return type;

    type = ::uAllocInterfaceType("Uno.Collections.IEnumerator<Fuse.Animations.MixerHandle<double>>");

    ::uRegisterType(type);
    return type;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Collections\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

::uInterfaceType* IEnumerator__Fuse_Animations_MixerHandle_float___typeof()
{
    static ::uStaticStrong< ::uInterfaceType*> type;
    if (type != NULL) return type;

    type = ::uAllocInterfaceType("Uno.Collections.IEnumerator<Fuse.Animations.MixerHandle<float>>");

    ::uRegisterType(type);
    return type;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Collections\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

::uInterfaceType* IEnumerator__Fuse_Animations_MixerHandle_float2___typeof()
{
    static ::uStaticStrong< ::uInterfaceType*> type;
    if (type != NULL) return type;

    type = ::uAllocInterfaceType("Uno.Collections.IEnumerator<Fuse.Animations.MixerHandle<float2>>");

    ::uRegisterType(type);
    return type;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Collections\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

::uInterfaceType* IEnumerator__Fuse_Animations_MixerHandle_float3___typeof()
{
    static ::uStaticStrong< ::uInterfaceType*> type;
    if (type != NULL) return type;

    type = ::uAllocInterfaceType("Uno.Collections.IEnumerator<Fuse.Animations.MixerHandle<float3>>");

    ::uRegisterType(type);
    return type;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Collections\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

::uInterfaceType* IEnumerator__Fuse_Animations_MixerHandle_float4___typeof()
{
    static ::uStaticStrong< ::uInterfaceType*> type;
    if (type != NULL) return type;

    type = ::uAllocInterfaceType("Uno.Collections.IEnumerator<Fuse.Animations.MixerHandle<float4>>");

    ::uRegisterType(type);
    return type;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Collections\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

::uInterfaceType* IEnumerator__Fuse_Animations_MixerHandle_Fuse_Animations_AnimationVariant___typeof()
{
    static ::uStaticStrong< ::uInterfaceType*> type;
    if (type != NULL) return type;

    type = ::uAllocInterfaceType("Uno.Collections.IEnumerator<Fuse.Animations.MixerHandle<Fuse.Animations.AnimationVariant>>");

    ::uRegisterType(type);
    return type;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Collections\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

::uInterfaceType* IEnumerator__Fuse_Animations_MixerHandle_Fuse_Animations_Easing___typeof()
{
    static ::uStaticStrong< ::uInterfaceType*> type;
    if (type != NULL) return type;

    type = ::uAllocInterfaceType("Uno.Collections.IEnumerator<Fuse.Animations.MixerHandle<Fuse.Animations.Easing>>");

    ::uRegisterType(type);
    return type;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Collections\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

::uInterfaceType* IEnumerator__Fuse_Animations_MixerHandle_Fuse_Animations_KeyframeInterpolation___typeof()
{
    static ::uStaticStrong< ::uInterfaceType*> type;
    if (type != NULL) return type;

    type = ::uAllocInterfaceType("Uno.Collections.IEnumerator<Fuse.Animations.MixerHandle<Fuse.Animations.KeyframeInterpolation>>");

    ::uRegisterType(type);
    return type;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Collections\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

::uInterfaceType* IEnumerator__Fuse_Animations_MixerHandle_Fuse_Animations_MixOp___typeof()
{
    static ::uStaticStrong< ::uInterfaceType*> type;
    if (type != NULL) return type;

    type = ::uAllocInterfaceType("Uno.Collections.IEnumerator<Fuse.Animations.MixerHandle<Fuse.Animations.MixOp>>");

    ::uRegisterType(type);
    return type;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Collections\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

::uInterfaceType* IEnumerator__Fuse_Animations_MixerHandle_Fuse_Drawing_BlendMode___typeof()
{
    static ::uStaticStrong< ::uInterfaceType*> type;
    if (type != NULL) return type;

    type = ::uAllocInterfaceType("Uno.Collections.IEnumerator<Fuse.Animations.MixerHandle<Fuse.Drawing.BlendMode>>");

    ::uRegisterType(type);
    return type;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Collections\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

::uInterfaceType* IEnumerator__Fuse_Animations_MixerHandle_Fuse_Drawing_Brush___typeof()
{
    static ::uStaticStrong< ::uInterfaceType*> type;
    if (type != NULL) return type;

    type = ::uAllocInterfaceType("Uno.Collections.IEnumerator<Fuse.Animations.MixerHandle<Fuse.Drawing.Brush>>");

    ::uRegisterType(type);
    return type;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Collections\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

::uInterfaceType* IEnumerator__Fuse_Animations_MixerHandle_Fuse_Drawing_DynamicBrush___typeof()
{
    static ::uStaticStrong< ::uInterfaceType*> type;
    if (type != NULL) return type;

    type = ::uAllocInterfaceType("Uno.Collections.IEnumerator<Fuse.Animations.MixerHandle<Fuse.Drawing.DynamicBrush>>");

    ::uRegisterType(type);
    return type;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Collections\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

::uInterfaceType* IEnumerator__Fuse_Animations_MixerHandle_Fuse_Drawing_GradientStop___typeof()
{
    static ::uStaticStrong< ::uInterfaceType*> type;
    if (type != NULL) return type;

    type = ::uAllocInterfaceType("Uno.Collections.IEnumerator<Fuse.Animations.MixerHandle<Fuse.Drawing.GradientStop>>");

    ::uRegisterType(type);
    return type;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Collections\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

::uInterfaceType* IEnumerator__Fuse_Animations_MixerHandle_Fuse_Drawing_LinearGradient___typeof()
{
    static ::uStaticStrong< ::uInterfaceType*> type;
    if (type != NULL) return type;

    type = ::uAllocInterfaceType("Uno.Collections.IEnumerator<Fuse.Animations.MixerHandle<Fuse.Drawing.LinearGradient>>");

    ::uRegisterType(type);
    return type;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Collections\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

::uInterfaceType* IEnumerator__Fuse_Animations_MixerHandle_Fuse_Drawing_SolidColor___typeof()
{
    static ::uStaticStrong< ::uInterfaceType*> type;
    if (type != NULL) return type;

    type = ::uAllocInterfaceType("Uno.Collections.IEnumerator<Fuse.Animations.MixerHandle<Fuse.Drawing.SolidColor>>");

    ::uRegisterType(type);
    return type;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Collections\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

::uInterfaceType* IEnumerator__Fuse_Animations_MixerHandle_Fuse_Drawing_StaticBrush___typeof()
{
    static ::uStaticStrong< ::uInterfaceType*> type;
    if (type != NULL) return type;

    type = ::uAllocInterfaceType("Uno.Collections.IEnumerator<Fuse.Animations.MixerHandle<Fuse.Drawing.StaticBrush>>");

    ::uRegisterType(type);
    return type;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Collections\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

::uInterfaceType* IEnumerator__Fuse_Animations_MixerHandle_Fuse_Elements_Alignment___typeof()
{
    static ::uStaticStrong< ::uInterfaceType*> type;
    if (type != NULL) return type;

    type = ::uAllocInterfaceType("Uno.Collections.IEnumerator<Fuse.Animations.MixerHandle<Fuse.Elements.Alignment>>");

    ::uRegisterType(type);
    return type;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Collections\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

::uInterfaceType* IEnumerator__Fuse_Animations_MixerHandle_Fuse_Elements_CachingMode___typeof()
{
    static ::uStaticStrong< ::uInterfaceType*> type;
    if (type != NULL) return type;

    type = ::uAllocInterfaceType("Uno.Collections.IEnumerator<Fuse.Animations.MixerHandle<Fuse.Elements.CachingMode>>");

    ::uRegisterType(type);
    return type;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Collections\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

::uInterfaceType* IEnumerator__Fuse_Animations_MixerHandle_Fuse_Elements_Element___typeof()
{
    static ::uStaticStrong< ::uInterfaceType*> type;
    if (type != NULL) return type;

    type = ::uAllocInterfaceType("Uno.Collections.IEnumerator<Fuse.Animations.MixerHandle<Fuse.Elements.Element>>");

    ::uRegisterType(type);
    return type;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Collections\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

::uInterfaceType* IEnumerator__Fuse_Animations_MixerHandle_Fuse_Elements_HitTestMode___typeof()
{
    static ::uStaticStrong< ::uInterfaceType*> type;
    if (type != NULL) return type;

    type = ::uAllocInterfaceType("Uno.Collections.IEnumerator<Fuse.Animations.MixerHandle<Fuse.Elements.HitTestMode>>");

    ::uRegisterType(type);
    return type;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Collections\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

::uInterfaceType* IEnumerator__Fuse_Animations_MixerHandle_Fuse_Elements_SizeUnit___typeof()
{
    static ::uStaticStrong< ::uInterfaceType*> type;
    if (type != NULL) return type;

    type = ::uAllocInterfaceType("Uno.Collections.IEnumerator<Fuse.Animations.MixerHandle<Fuse.Elements.SizeUnit>>");

    ::uRegisterType(type);
    return type;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Collections\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

::uInterfaceType* IEnumerator__Fuse_Animations_MixerHandle_Fuse_Elements_StretchDirection___typeof()
{
    static ::uStaticStrong< ::uInterfaceType*> type;
    if (type != NULL) return type;

    type = ::uAllocInterfaceType("Uno.Collections.IEnumerator<Fuse.Animations.MixerHandle<Fuse.Elements.StretchDirection>>");

    ::uRegisterType(type);
    return type;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Collections\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

::uInterfaceType* IEnumerator__Fuse_Animations_MixerHandle_Fuse_Elements_StretchMode___typeof()
{
    static ::uStaticStrong< ::uInterfaceType*> type;
    if (type != NULL) return type;

    type = ::uAllocInterfaceType("Uno.Collections.IEnumerator<Fuse.Animations.MixerHandle<Fuse.Elements.StretchMode>>");

    ::uRegisterType(type);
    return type;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Collections\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

::uInterfaceType* IEnumerator__Fuse_Animations_MixerHandle_Fuse_Elements_StretchSizing___typeof()
{
    static ::uStaticStrong< ::uInterfaceType*> type;
    if (type != NULL) return type;

    type = ::uAllocInterfaceType("Uno.Collections.IEnumerator<Fuse.Animations.MixerHandle<Fuse.Elements.StretchSizing>>");

    ::uRegisterType(type);
    return type;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Collections\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

::uInterfaceType* IEnumerator__Fuse_Animations_MixerHandle_Fuse_Elements_TextAlignment___typeof()
{
    static ::uStaticStrong< ::uInterfaceType*> type;
    if (type != NULL) return type;

    type = ::uAllocInterfaceType("Uno.Collections.IEnumerator<Fuse.Animations.MixerHandle<Fuse.Elements.TextAlignment>>");

    ::uRegisterType(type);
    return type;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Collections\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

::uInterfaceType* IEnumerator__Fuse_Animations_MixerHandle_Fuse_Elements_TextWrapping___typeof()
{
    static ::uStaticStrong< ::uInterfaceType*> type;
    if (type != NULL) return type;

    type = ::uAllocInterfaceType("Uno.Collections.IEnumerator<Fuse.Animations.MixerHandle<Fuse.Elements.TextWrapping>>");

    ::uRegisterType(type);
    return type;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Collections\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

::uInterfaceType* IEnumerator__Fuse_Animations_MixerHandle_Fuse_Elements_Visibility___typeof()
{
    static ::uStaticStrong< ::uInterfaceType*> type;
    if (type != NULL) return type;

    type = ::uAllocInterfaceType("Uno.Collections.IEnumerator<Fuse.Animations.MixerHandle<Fuse.Elements.Visibility>>");

    ::uRegisterType(type);
    return type;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Collections\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

::uInterfaceType* IEnumerator__Fuse_Animations_MixerHandle_Fuse_Font___typeof()
{
    static ::uStaticStrong< ::uInterfaceType*> type;
    if (type != NULL) return type;

    type = ::uAllocInterfaceType("Uno.Collections.IEnumerator<Fuse.Animations.MixerHandle<Fuse.Font>>");

    ::uRegisterType(type);
    return type;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Collections\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

::uInterfaceType* IEnumerator__Fuse_Animations_MixerHandle_Fuse_Gestures_Edge___typeof()
{
    static ::uStaticStrong< ::uInterfaceType*> type;
    if (type != NULL) return type;

    type = ::uAllocInterfaceType("Uno.Collections.IEnumerator<Fuse.Animations.MixerHandle<Fuse.Gestures.Edge>>");

    ::uRegisterType(type);
    return type;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Collections\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

::uInterfaceType* IEnumerator__Fuse_Animations_MixerHandle_Fuse_Gestures_ScrollDirections___typeof()
{
    static ::uStaticStrong< ::uInterfaceType*> type;
    if (type != NULL) return type;

    type = ::uAllocInterfaceType("Uno.Collections.IEnumerator<Fuse.Animations.MixerHandle<Fuse.Gestures.ScrollDirections>>");

    ::uRegisterType(type);
    return type;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Collections\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

::uInterfaceType* IEnumerator__Fuse_Animations_MixerHandle_Fuse_Layouts_Dock___typeof()
{
    static ::uStaticStrong< ::uInterfaceType*> type;
    if (type != NULL) return type;

    type = ::uAllocInterfaceType("Uno.Collections.IEnumerator<Fuse.Animations.MixerHandle<Fuse.Layouts.Dock>>");

    ::uRegisterType(type);
    return type;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Collections\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

::uInterfaceType* IEnumerator__Fuse_Animations_MixerHandle_Fuse_Layouts_FlowDirection___typeof()
{
    static ::uStaticStrong< ::uInterfaceType*> type;
    if (type != NULL) return type;

    type = ::uAllocInterfaceType("Uno.Collections.IEnumerator<Fuse.Animations.MixerHandle<Fuse.Layouts.FlowDirection>>");

    ::uRegisterType(type);
    return type;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Collections\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

::uInterfaceType* IEnumerator__Fuse_Animations_MixerHandle_Fuse_Layouts_Metric___typeof()
{
    static ::uStaticStrong< ::uInterfaceType*> type;
    if (type != NULL) return type;

    type = ::uAllocInterfaceType("Uno.Collections.IEnumerator<Fuse.Animations.MixerHandle<Fuse.Layouts.Metric>>");

    ::uRegisterType(type);
    return type;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Collections\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

::uInterfaceType* IEnumerator__Fuse_Animations_MixerHandle_Fuse_Layouts_Orientation___typeof()
{
    static ::uStaticStrong< ::uInterfaceType*> type;
    if (type != NULL) return type;

    type = ::uAllocInterfaceType("Uno.Collections.IEnumerator<Fuse.Animations.MixerHandle<Fuse.Layouts.Orientation>>");

    ::uRegisterType(type);
    return type;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Collections\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

::uInterfaceType* IEnumerator__Fuse_Animations_MixerHandle_Fuse_Navigation_NavigationDirection___typeof()
{
    static ::uStaticStrong< ::uInterfaceType*> type;
    if (type != NULL) return type;

    type = ::uAllocInterfaceType("Uno.Collections.IEnumerator<Fuse.Animations.MixerHandle<Fuse.Navigation.NavigationDirection>>");

    ::uRegisterType(type);
    return type;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Collections\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

::uInterfaceType* IEnumerator__Fuse_Animations_MixerHandle_Fuse_Navigation_NavigationEdge___typeof()
{
    static ::uStaticStrong< ::uInterfaceType*> type;
    if (type != NULL) return type;

    type = ::uAllocInterfaceType("Uno.Collections.IEnumerator<Fuse.Animations.MixerHandle<Fuse.Navigation.NavigationEdge>>");

    ::uRegisterType(type);
    return type;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Collections\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

::uInterfaceType* IEnumerator__Fuse_Animations_MixerHandle_Fuse_Navigation_NavigationGotoMode___typeof()
{
    static ::uStaticStrong< ::uInterfaceType*> type;
    if (type != NULL) return type;

    type = ::uAllocInterfaceType("Uno.Collections.IEnumerator<Fuse.Animations.MixerHandle<Fuse.Navigation.NavigationGotoMode>>");

    ::uRegisterType(type);
    return type;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Collections\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

::uInterfaceType* IEnumerator__Fuse_Animations_MixerHandle_Fuse_Navigation_SnapTo___typeof()
{
    static ::uStaticStrong< ::uInterfaceType*> type;
    if (type != NULL) return type;

    type = ::uAllocInterfaceType("Uno.Collections.IEnumerator<Fuse.Animations.MixerHandle<Fuse.Navigation.SnapTo>>");

    ::uRegisterType(type);
    return type;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Collections\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

::uInterfaceType* IEnumerator__Fuse_Animations_MixerHandle_Fuse_Navigation_SwipeDirection___typeof()
{
    static ::uStaticStrong< ::uInterfaceType*> type;
    if (type != NULL) return type;

    type = ::uAllocInterfaceType("Uno.Collections.IEnumerator<Fuse.Animations.MixerHandle<Fuse.Navigation.SwipeDirection>>");

    ::uRegisterType(type);
    return type;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Collections\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

::uInterfaceType* IEnumerator__Fuse_Animations_MixerHandle_Fuse_Navigation_SwipeEnds___typeof()
{
    static ::uStaticStrong< ::uInterfaceType*> type;
    if (type != NULL) return type;

    type = ::uAllocInterfaceType("Uno.Collections.IEnumerator<Fuse.Animations.MixerHandle<Fuse.Navigation.SwipeEnds>>");

    ::uRegisterType(type);
    return type;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Collections\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

::uInterfaceType* IEnumerator__Fuse_Animations_MixerHandle_Fuse_Node___typeof()
{
    static ::uStaticStrong< ::uInterfaceType*> type;
    if (type != NULL) return type;

    type = ::uAllocInterfaceType("Uno.Collections.IEnumerator<Fuse.Animations.MixerHandle<Fuse.Node>>");

    ::uRegisterType(type);
    return type;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Collections\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

::uInterfaceType* IEnumerator__Fuse_Animations_MixerHandle_Fuse_Resources_ImageSource___typeof()
{
    static ::uStaticStrong< ::uInterfaceType*> type;
    if (type != NULL) return type;

    type = ::uAllocInterfaceType("Uno.Collections.IEnumerator<Fuse.Animations.MixerHandle<Fuse.Resources.ImageSource>>");

    ::uRegisterType(type);
    return type;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Collections\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

::uInterfaceType* IEnumerator__Fuse_Animations_MixerHandle_Fuse_Transform___typeof()
{
    static ::uStaticStrong< ::uInterfaceType*> type;
    if (type != NULL) return type;

    type = ::uAllocInterfaceType("Uno.Collections.IEnumerator<Fuse.Animations.MixerHandle<Fuse.Transform>>");

    ::uRegisterType(type);
    return type;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Collections\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

::uInterfaceType* IEnumerator__Fuse_Animations_MixerHandle_Fuse_Triggers_Actions_TriggerDirection___typeof()
{
    static ::uStaticStrong< ::uInterfaceType*> type;
    if (type != NULL) return type;

    type = ::uAllocInterfaceType("Uno.Collections.IEnumerator<Fuse.Animations.MixerHandle<Fuse.Triggers.Actions.TriggerDirection>>");

    ::uRegisterType(type);
    return type;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Collections\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

::uInterfaceType* IEnumerator__Fuse_Animations_MixerHandle_Fuse_Triggers_State___typeof()
{
    static ::uStaticStrong< ::uInterfaceType*> type;
    if (type != NULL) return type;

    type = ::uAllocInterfaceType("Uno.Collections.IEnumerator<Fuse.Animations.MixerHandle<Fuse.Triggers.State>>");

    ::uRegisterType(type);
    return type;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Collections\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

::uInterfaceType* IEnumerator__Fuse_Animations_MixerHandle_Fuse_Triggers_StateTransition___typeof()
{
    static ::uStaticStrong< ::uInterfaceType*> type;
    if (type != NULL) return type;

    type = ::uAllocInterfaceType("Uno.Collections.IEnumerator<Fuse.Animations.MixerHandle<Fuse.Triggers.StateTransition>>");

    ::uRegisterType(type);
    return type;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Collections\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

::uInterfaceType* IEnumerator__Fuse_Animations_MixerHandle_Fuse_Triggers_TriggerBypassMode___typeof()
{
    static ::uStaticStrong< ::uInterfaceType*> type;
    if (type != NULL) return type;

    type = ::uAllocInterfaceType("Uno.Collections.IEnumerator<Fuse.Animations.MixerHandle<Fuse.Triggers.TriggerBypassMode>>");

    ::uRegisterType(type);
    return type;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Collections\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

::uInterfaceType* IEnumerator__Fuse_Animations_MixerHandle_int___typeof()
{
    static ::uStaticStrong< ::uInterfaceType*> type;
    if (type != NULL) return type;

    type = ::uAllocInterfaceType("Uno.Collections.IEnumerator<Fuse.Animations.MixerHandle<int>>");

    ::uRegisterType(type);
    return type;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Collections\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

::uInterfaceType* IEnumerator__Fuse_Animations_MixerHandle_int2___typeof()
{
    static ::uStaticStrong< ::uInterfaceType*> type;
    if (type != NULL) return type;

    type = ::uAllocInterfaceType("Uno.Collections.IEnumerator<Fuse.Animations.MixerHandle<int2>>");

    ::uRegisterType(type);
    return type;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Collections\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

::uInterfaceType* IEnumerator__Fuse_Animations_MixerHandle_int3___typeof()
{
    static ::uStaticStrong< ::uInterfaceType*> type;
    if (type != NULL) return type;

    type = ::uAllocInterfaceType("Uno.Collections.IEnumerator<Fuse.Animations.MixerHandle<int3>>");

    ::uRegisterType(type);
    return type;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Collections\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

::uInterfaceType* IEnumerator__Fuse_Animations_MixerHandle_int4___typeof()
{
    static ::uStaticStrong< ::uInterfaceType*> type;
    if (type != NULL) return type;

    type = ::uAllocInterfaceType("Uno.Collections.IEnumerator<Fuse.Animations.MixerHandle<int4>>");

    ::uRegisterType(type);
    return type;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Collections\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

::uInterfaceType* IEnumerator__Fuse_Animations_MixerHandle_long___typeof()
{
    static ::uStaticStrong< ::uInterfaceType*> type;
    if (type != NULL) return type;

    type = ::uAllocInterfaceType("Uno.Collections.IEnumerator<Fuse.Animations.MixerHandle<long>>");

    ::uRegisterType(type);
    return type;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Collections\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

::uInterfaceType* IEnumerator__Fuse_Animations_MixerHandle_object___typeof()
{
    static ::uStaticStrong< ::uInterfaceType*> type;
    if (type != NULL) return type;

    type = ::uAllocInterfaceType("Uno.Collections.IEnumerator<Fuse.Animations.MixerHandle<object>>");

    ::uRegisterType(type);
    return type;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Collections\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

::uInterfaceType* IEnumerator__Fuse_Animations_MixerHandle_short___typeof()
{
    static ::uStaticStrong< ::uInterfaceType*> type;
    if (type != NULL) return type;

    type = ::uAllocInterfaceType("Uno.Collections.IEnumerator<Fuse.Animations.MixerHandle<short>>");

    ::uRegisterType(type);
    return type;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Collections\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

::uInterfaceType* IEnumerator__Fuse_Animations_MixerHandle_string___typeof()
{
    static ::uStaticStrong< ::uInterfaceType*> type;
    if (type != NULL) return type;

    type = ::uAllocInterfaceType("Uno.Collections.IEnumerator<Fuse.Animations.MixerHandle<string>>");

    ::uRegisterType(type);
    return type;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Collections\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

::uInterfaceType* IEnumerator__Fuse_Animations_MixerHandle_Uno_EventArgs___typeof()
{
    static ::uStaticStrong< ::uInterfaceType*> type;
    if (type != NULL) return type;

    type = ::uAllocInterfaceType("Uno.Collections.IEnumerator<Fuse.Animations.MixerHandle<Uno.EventArgs>>");

    ::uRegisterType(type);
    return type;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Collections\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

::uInterfaceType* IEnumerator__Fuse_Animations_MixerHandle_Uno_Platform_iOS_StatusBarStyle___typeof()
{
    static ::uStaticStrong< ::uInterfaceType*> type;
    if (type != NULL) return type;

    type = ::uAllocInterfaceType("Uno.Collections.IEnumerator<Fuse.Animations.MixerHandle<Uno.Platform.iOS.StatusBarStyle>>");

    ::uRegisterType(type);
    return type;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Collections\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

::uInterfaceType* IEnumerator__Fuse_Animations_MixerHandle_Uno_UX_FileSource___typeof()
{
    static ::uStaticStrong< ::uInterfaceType*> type;
    if (type != NULL) return type;

    type = ::uAllocInterfaceType("Uno.Collections.IEnumerator<Fuse.Animations.MixerHandle<Uno.UX.FileSource>>");

    ::uRegisterType(type);
    return type;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Collections\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

::uInterfaceType* IEnumerator__Fuse_Behavior__typeof()
{
    static ::uStaticStrong< ::uInterfaceType*> type;
    if (type != NULL) return type;

    type = ::uAllocInterfaceType("Uno.Collections.IEnumerator<Fuse.Behavior>");

    ::uRegisterType(type);
    return type;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Collections\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

::uInterfaceType* IEnumerator__Fuse_CacheFramebuffer__typeof()
{
    static ::uStaticStrong< ::uInterfaceType*> type;
    if (type != NULL) return type;

    type = ::uAllocInterfaceType("Uno.Collections.IEnumerator<Fuse.CacheFramebuffer>");

    ::uRegisterType(type);
    return type;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Collections\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

::uInterfaceType* IEnumerator__Fuse_Controls_Control__typeof()
{
    static ::uStaticStrong< ::uInterfaceType*> type;
    if (type != NULL) return type;

    type = ::uAllocInterfaceType("Uno.Collections.IEnumerator<Fuse.Controls.Control>");

    ::uRegisterType(type);
    return type;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Collections\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

::uInterfaceType* IEnumerator__Fuse_Controls_Internal_WordWrapperWord__typeof()
{
    static ::uStaticStrong< ::uInterfaceType*> type;
    if (type != NULL) return type;

    type = ::uAllocInterfaceType("Uno.Collections.IEnumerator<Fuse.Controls.Internal.WordWrapperWord>");

    ::uRegisterType(type);
    return type;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Collections\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

::uInterfaceType* IEnumerator__Fuse_Controls_Internal_WrappedLine__typeof()
{
    static ::uStaticStrong< ::uInterfaceType*> type;
    if (type != NULL) return type;

    type = ::uAllocInterfaceType("Uno.Collections.IEnumerator<Fuse.Controls.Internal.WrappedLine>");

    ::uRegisterType(type);
    return type;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Collections\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

::uInterfaceType* IEnumerator__Fuse_Controls_TextEdit_LineCacheLine__typeof()
{
    static ::uStaticStrong< ::uInterfaceType*> type;
    if (type != NULL) return type;

    type = ::uAllocInterfaceType("Uno.Collections.IEnumerator<Fuse.Controls.TextEdit.LineCacheLine>");

    ::uRegisterType(type);
    return type;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Collections\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

::uInterfaceType* IEnumerator__Fuse_Drawing_Batching_Batch__typeof()
{
    static ::uStaticStrong< ::uInterfaceType*> type;
    if (type != NULL) return type;

    type = ::uAllocInterfaceType("Uno.Collections.IEnumerator<Fuse.Drawing.Batching.Batch>");

    ::uRegisterType(type);
    return type;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Collections\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

::uInterfaceType* IEnumerator__Fuse_Drawing_Batching_Entry__typeof()
{
    static ::uStaticStrong< ::uInterfaceType*> type;
    if (type != NULL) return type;

    type = ::uAllocInterfaceType("Uno.Collections.IEnumerator<Fuse.Drawing.Batching.Entry>");

    ::uRegisterType(type);
    return type;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Collections\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

::uInterfaceType* IEnumerator__Fuse_Drawing_Border__typeof()
{
    static ::uStaticStrong< ::uInterfaceType*> type;
    if (type != NULL) return type;

    type = ::uAllocInterfaceType("Uno.Collections.IEnumerator<Fuse.Drawing.Border>");

    ::uRegisterType(type);
    return type;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Collections\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

::uInterfaceType* IEnumerator__Fuse_Drawing_Brush__typeof()
{
    static ::uStaticStrong< ::uInterfaceType*> type;
    if (type != NULL) return type;

    type = ::uAllocInterfaceType("Uno.Collections.IEnumerator<Fuse.Drawing.Brush>");

    ::uRegisterType(type);
    return type;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Collections\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

::uInterfaceType* IEnumerator__Fuse_Drawing_Contour__typeof()
{
    static ::uStaticStrong< ::uInterfaceType*> type;
    if (type != NULL) return type;

    type = ::uAllocInterfaceType("Uno.Collections.IEnumerator<Fuse.Drawing.Contour>");

    ::uRegisterType(type);
    return type;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Collections\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

::uInterfaceType* IEnumerator__Fuse_Drawing_GradientStop__typeof()
{
    static ::uStaticStrong< ::uInterfaceType*> type;
    if (type != NULL) return type;

    type = ::uAllocInterfaceType("Uno.Collections.IEnumerator<Fuse.Drawing.GradientStop>");

    ::uRegisterType(type);
    return type;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Collections\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

::uInterfaceType* IEnumerator__Fuse_Drawing_Internal_MultiBuffer_Field__typeof()
{
    static ::uStaticStrong< ::uInterfaceType*> type;
    if (type != NULL) return type;

    type = ::uAllocInterfaceType("Uno.Collections.IEnumerator<Fuse.Drawing.Internal.MultiBuffer_Field>");

    ::uRegisterType(type);
    return type;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Collections\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

::uInterfaceType* IEnumerator__Fuse_Drawing_PathGeometry__typeof()
{
    static ::uStaticStrong< ::uInterfaceType*> type;
    if (type != NULL) return type;

    type = ::uAllocInterfaceType("Uno.Collections.IEnumerator<Fuse.Drawing.PathGeometry>");

    ::uRegisterType(type);
    return type;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Collections\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

::uInterfaceType* IEnumerator__Fuse_Drawing_PolygonDrawable__typeof()
{
    static ::uStaticStrong< ::uInterfaceType*> type;
    if (type != NULL) return type;

    type = ::uAllocInterfaceType("Uno.Collections.IEnumerator<Fuse.Drawing.PolygonDrawable>");

    ::uRegisterType(type);
    return type;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Collections\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

::uInterfaceType* IEnumerator__Fuse_Drawing_Stroke__typeof()
{
    static ::uStaticStrong< ::uInterfaceType*> type;
    if (type != NULL) return type;

    type = ::uAllocInterfaceType("Uno.Collections.IEnumerator<Fuse.Drawing.Stroke>");

    ::uRegisterType(type);
    return type;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Collections\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

::uInterfaceType* IEnumerator__Fuse_Drawing_Tesselation_ActiveRegion__typeof()
{
    static ::uStaticStrong< ::uInterfaceType*> type;
    if (type != NULL) return type;

    type = ::uAllocInterfaceType("Uno.Collections.IEnumerator<Fuse.Drawing.Tesselation.ActiveRegion>");

    ::uRegisterType(type);
    return type;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Collections\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

::uInterfaceType* IEnumerator__Fuse_Drawing_Tesselation_Collections_DictNode_Fuse_Drawing_Tesselation_ActiveRegion___typeof()
{
    static ::uStaticStrong< ::uInterfaceType*> type;
    if (type != NULL) return type;

    type = ::uAllocInterfaceType("Uno.Collections.IEnumerator<Fuse.Drawing.Tesselation.Collections.DictNode<Fuse.Drawing.Tesselation.ActiveRegion>>");

    ::uRegisterType(type);
    return type;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Collections\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

::uInterfaceType* IEnumerator__Fuse_Drawing_Tesselation_Face__typeof()
{
    static ::uStaticStrong< ::uInterfaceType*> type;
    if (type != NULL) return type;

    type = ::uAllocInterfaceType("Uno.Collections.IEnumerator<Fuse.Drawing.Tesselation.Face>");

    ::uRegisterType(type);
    return type;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Collections\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

::uInterfaceType* IEnumerator__Fuse_Drawing_Tesselation_HalfEdge__typeof()
{
    static ::uStaticStrong< ::uInterfaceType*> type;
    if (type != NULL) return type;

    type = ::uAllocInterfaceType("Uno.Collections.IEnumerator<Fuse.Drawing.Tesselation.HalfEdge>");

    ::uRegisterType(type);
    return type;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Collections\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

::uInterfaceType* IEnumerator__Fuse_Drawing_Tesselation_Vertex__typeof()
{
    static ::uStaticStrong< ::uInterfaceType*> type;
    if (type != NULL) return type;

    type = ::uAllocInterfaceType("Uno.Collections.IEnumerator<Fuse.Drawing.Tesselation.Vertex>");

    ::uRegisterType(type);
    return type;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Collections\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

::uInterfaceType* IEnumerator__Fuse_Effects_Effect__typeof()
{
    static ::uStaticStrong< ::uInterfaceType*> type;
    if (type != NULL) return type;

    type = ::uAllocInterfaceType("Uno.Collections.IEnumerator<Fuse.Effects.Effect>");

    ::uRegisterType(type);
    return type;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Collections\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

::uInterfaceType* IEnumerator__Fuse_Elements_Element__typeof()
{
    static ::uStaticStrong< ::uInterfaceType*> type;
    if (type != NULL) return type;

    type = ::uAllocInterfaceType("Uno.Collections.IEnumerator<Fuse.Elements.Element>");

    ::uRegisterType(type);
    return type;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Collections\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

::uInterfaceType* IEnumerator__Fuse_Elements_ElementAtlas__typeof()
{
    static ::uStaticStrong< ::uInterfaceType*> type;
    if (type != NULL) return type;

    type = ::uAllocInterfaceType("Uno.Collections.IEnumerator<Fuse.Elements.ElementAtlas>");

    ::uRegisterType(type);
    return type;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Collections\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

::uInterfaceType* IEnumerator__Fuse_Elements_ElementAtlasFramebufferPoolEntry__typeof()
{
    static ::uStaticStrong< ::uInterfaceType*> type;
    if (type != NULL) return type;

    type = ::uAllocInterfaceType("Uno.Collections.IEnumerator<Fuse.Elements.ElementAtlasFramebufferPoolEntry>");

    ::uRegisterType(type);
    return type;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Collections\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

::uInterfaceType* IEnumerator__Fuse_Elements_ElementBatch__typeof()
{
    static ::uStaticStrong< ::uInterfaceType*> type;
    if (type != NULL) return type;

    type = ::uAllocInterfaceType("Uno.Collections.IEnumerator<Fuse.Elements.ElementBatch>");

    ::uRegisterType(type);
    return type;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Collections\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

::uInterfaceType* IEnumerator__Fuse_Elements_ElementBatchEntry__typeof()
{
    static ::uStaticStrong< ::uInterfaceType*> type;
    if (type != NULL) return type;

    type = ::uAllocInterfaceType("Uno.Collections.IEnumerator<Fuse.Elements.ElementBatchEntry>");

    ::uRegisterType(type);
    return type;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Collections\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

::uInterfaceType* IEnumerator__Fuse_Elements_IElementBatchDrawable__typeof()
{
    static ::uStaticStrong< ::uInterfaceType*> type;
    if (type != NULL) return type;

    type = ::uAllocInterfaceType("Uno.Collections.IEnumerator<Fuse.Elements.IElementBatchDrawable>");

    ::uRegisterType(type);
    return type;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Collections\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

::uInterfaceType* IEnumerator__Fuse_Entities_Component__typeof()
{
    static ::uStaticStrong< ::uInterfaceType*> type;
    if (type != NULL) return type;

    type = ::uAllocInterfaceType("Uno.Collections.IEnumerator<Fuse.Entities.Component>");

    ::uRegisterType(type);
    return type;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Collections\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

::uInterfaceType* IEnumerator__Fuse_Entities_Entity__typeof()
{
    static ::uStaticStrong< ::uInterfaceType*> type;
    if (type != NULL) return type;

    type = ::uAllocInterfaceType("Uno.Collections.IEnumerator<Fuse.Entities.Entity>");

    ::uRegisterType(type);
    return type;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Collections\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

::uInterfaceType* IEnumerator__Fuse_Entities_Entry__typeof()
{
    static ::uStaticStrong< ::uInterfaceType*> type;
    if (type != NULL) return type;

    type = ::uAllocInterfaceType("Uno.Collections.IEnumerator<Fuse.Entities.Entry>");

    ::uRegisterType(type);
    return type;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Collections\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

::uInterfaceType* IEnumerator__Fuse_IFlush__typeof()
{
    static ::uStaticStrong< ::uInterfaceType*> type;
    if (type != NULL) return type;

    type = ::uAllocInterfaceType("Uno.Collections.IEnumerator<Fuse.IFlush>");

    ::uRegisterType(type);
    return type;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Collections\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

::uInterfaceType* IEnumerator__Fuse_Input_Capturer__typeof()
{
    static ::uStaticStrong< ::uInterfaceType*> type;
    if (type != NULL) return type;

    type = ::uAllocInterfaceType("Uno.Collections.IEnumerator<Fuse.Input.Capturer>");

    ::uRegisterType(type);
    return type;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Collections\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

::uInterfaceType* IEnumerator__Fuse_Input_FocusGainedHandler__typeof()
{
    static ::uStaticStrong< ::uInterfaceType*> type;
    if (type != NULL) return type;

    type = ::uAllocInterfaceType("Uno.Collections.IEnumerator<Fuse.Input.FocusGainedHandler>");

    ::uRegisterType(type);
    return type;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Collections\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

::uInterfaceType* IEnumerator__Fuse_Input_FocusLostHandler__typeof()
{
    static ::uStaticStrong< ::uInterfaceType*> type;
    if (type != NULL) return type;

    type = ::uAllocInterfaceType("Uno.Collections.IEnumerator<Fuse.Input.FocusLostHandler>");

    ::uRegisterType(type);
    return type;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Collections\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

::uInterfaceType* IEnumerator__Fuse_Input_IsFocusableChangedHandler__typeof()
{
    static ::uStaticStrong< ::uInterfaceType*> type;
    if (type != NULL) return type;

    type = ::uAllocInterfaceType("Uno.Collections.IEnumerator<Fuse.Input.IsFocusableChangedHandler>");

    ::uRegisterType(type);
    return type;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Collections\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

::uInterfaceType* IEnumerator__Fuse_Input_KeyPressedHandler__typeof()
{
    static ::uStaticStrong< ::uInterfaceType*> type;
    if (type != NULL) return type;

    type = ::uAllocInterfaceType("Uno.Collections.IEnumerator<Fuse.Input.KeyPressedHandler>");

    ::uRegisterType(type);
    return type;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Collections\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

::uInterfaceType* IEnumerator__Fuse_Input_KeyReleasedHandler__typeof()
{
    static ::uStaticStrong< ::uInterfaceType*> type;
    if (type != NULL) return type;

    type = ::uAllocInterfaceType("Uno.Collections.IEnumerator<Fuse.Input.KeyReleasedHandler>");

    ::uRegisterType(type);
    return type;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Collections\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

::uInterfaceType* IEnumerator__Fuse_Input_Pointer_PELHolder__typeof()
{
    static ::uStaticStrong< ::uInterfaceType*> type;
    if (type != NULL) return type;

    type = ::uAllocInterfaceType("Uno.Collections.IEnumerator<Fuse.Input.Pointer_PELHolder>");

    ::uRegisterType(type);
    return type;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Collections\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

::uInterfaceType* IEnumerator__Fuse_Input_PointerEnteredHandler__typeof()
{
    static ::uStaticStrong< ::uInterfaceType*> type;
    if (type != NULL) return type;

    type = ::uAllocInterfaceType("Uno.Collections.IEnumerator<Fuse.Input.PointerEnteredHandler>");

    ::uRegisterType(type);
    return type;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Collections\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

::uInterfaceType* IEnumerator__Fuse_Input_PointerLeftHandler__typeof()
{
    static ::uStaticStrong< ::uInterfaceType*> type;
    if (type != NULL) return type;

    type = ::uAllocInterfaceType("Uno.Collections.IEnumerator<Fuse.Input.PointerLeftHandler>");

    ::uRegisterType(type);
    return type;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Collections\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

::uInterfaceType* IEnumerator__Fuse_Input_PointerMovedHandler__typeof()
{
    static ::uStaticStrong< ::uInterfaceType*> type;
    if (type != NULL) return type;

    type = ::uAllocInterfaceType("Uno.Collections.IEnumerator<Fuse.Input.PointerMovedHandler>");

    ::uRegisterType(type);
    return type;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Collections\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

::uInterfaceType* IEnumerator__Fuse_Input_PointerPressedHandler__typeof()
{
    static ::uStaticStrong< ::uInterfaceType*> type;
    if (type != NULL) return type;

    type = ::uAllocInterfaceType("Uno.Collections.IEnumerator<Fuse.Input.PointerPressedHandler>");

    ::uRegisterType(type);
    return type;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Collections\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

::uInterfaceType* IEnumerator__Fuse_Input_PointerReleasedHandler__typeof()
{
    static ::uStaticStrong< ::uInterfaceType*> type;
    if (type != NULL) return type;

    type = ::uAllocInterfaceType("Uno.Collections.IEnumerator<Fuse.Input.PointerReleasedHandler>");

    ::uRegisterType(type);
    return type;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Collections\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

::uInterfaceType* IEnumerator__Fuse_Input_PointerWheelMovedHandler__typeof()
{
    static ::uStaticStrong< ::uInterfaceType*> type;
    if (type != NULL) return type;

    type = ::uAllocInterfaceType("Uno.Collections.IEnumerator<Fuse.Input.PointerWheelMovedHandler>");

    ::uRegisterType(type);
    return type;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Collections\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

::uInterfaceType* IEnumerator__Fuse_Input_TextEnteredHandler__typeof()
{
    static ::uStaticStrong< ::uInterfaceType*> type;
    if (type != NULL) return type;

    type = ::uAllocInterfaceType("Uno.Collections.IEnumerator<Fuse.Input.TextEnteredHandler>");

    ::uRegisterType(type);
    return type;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Collections\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

::uInterfaceType* IEnumerator__Fuse_iOS_StatusBarConfig__typeof()
{
    static ::uStaticStrong< ::uInterfaceType*> type;
    if (type != NULL) return type;

    type = ::uAllocInterfaceType("Uno.Collections.IEnumerator<Fuse.iOS.StatusBarConfig>");

    ::uRegisterType(type);
    return type;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Collections\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

::uInterfaceType* IEnumerator__Fuse_IViewport__typeof()
{
    static ::uStaticStrong< ::uInterfaceType*> type;
    if (type != NULL) return type;

    type = ::uAllocInterfaceType("Uno.Collections.IEnumerator<Fuse.IViewport>");

    ::uRegisterType(type);
    return type;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Collections\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

::uInterfaceType* IEnumerator__Fuse_Layouts_Column__typeof()
{
    static ::uStaticStrong< ::uInterfaceType*> type;
    if (type != NULL) return type;

    type = ::uAllocInterfaceType("Uno.Collections.IEnumerator<Fuse.Layouts.Column>");

    ::uRegisterType(type);
    return type;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Collections\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

::uInterfaceType* IEnumerator__Fuse_Layouts_DefinitionBase_ParseDataItem__typeof()
{
    static ::uStaticStrong< ::uInterfaceType*> type;
    if (type != NULL) return type;

    type = ::uAllocInterfaceType("Uno.Collections.IEnumerator<Fuse.Layouts.DefinitionBase_ParseDataItem>");

    ::uRegisterType(type);
    return type;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Collections\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

::uInterfaceType* IEnumerator__Fuse_Layouts_Row__typeof()
{
    static ::uStaticStrong< ::uInterfaceType*> type;
    if (type != NULL) return type;

    type = ::uAllocInterfaceType("Uno.Collections.IEnumerator<Fuse.Layouts.Row>");

    ::uRegisterType(type);
    return type;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Collections\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

::uInterfaceType* IEnumerator__Fuse_Navigation_INavigationAnimator__typeof()
{
    static ::uStaticStrong< ::uInterfaceType*> type;
    if (type != NULL) return type;

    type = ::uAllocInterfaceType("Uno.Collections.IEnumerator<Fuse.Navigation.INavigationAnimator>");

    ::uRegisterType(type);
    return type;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Collections\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

::uInterfaceType* IEnumerator__Fuse_Navigation_IPageResourceBinding__typeof()
{
    static ::uStaticStrong< ::uInterfaceType*> type;
    if (type != NULL) return type;

    type = ::uAllocInterfaceType("Uno.Collections.IEnumerator<Fuse.Navigation.IPageResourceBinding>");

    ::uRegisterType(type);
    return type;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Collections\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

::uInterfaceType* IEnumerator__Fuse_Node__typeof()
{
    static ::uStaticStrong< ::uInterfaceType*> type;
    if (type != NULL) return type;

    type = ::uAllocInterfaceType("Uno.Collections.IEnumerator<Fuse.Node>");

    ::uRegisterType(type);
    return type;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Collections\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

::uInterfaceType* IEnumerator__Fuse_Physics_Body__typeof()
{
    static ::uStaticStrong< ::uInterfaceType*> type;
    if (type != NULL) return type;

    type = ::uAllocInterfaceType("Uno.Collections.IEnumerator<Fuse.Physics.Body>");

    ::uRegisterType(type);
    return type;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Collections\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

::uInterfaceType* IEnumerator__Fuse_Physics_IRule__typeof()
{
    static ::uStaticStrong< ::uInterfaceType*> type;
    if (type != NULL) return type;

    type = ::uAllocInterfaceType("Uno.Collections.IEnumerator<Fuse.Physics.IRule>");

    ::uRegisterType(type);
    return type;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Collections\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

::uInterfaceType* IEnumerator__Fuse_Reactive_Case__typeof()
{
    static ::uStaticStrong< ::uInterfaceType*> type;
    if (type != NULL) return type;

    type = ::uAllocInterfaceType("Uno.Collections.IEnumerator<Fuse.Reactive.Case>");

    ::uRegisterType(type);
    return type;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Collections\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

::uInterfaceType* IEnumerator__Fuse_Reactive_FuseJS_Timer_Time__typeof()
{
    static ::uStaticStrong< ::uInterfaceType*> type;
    if (type != NULL) return type;

    type = ::uAllocInterfaceType("Uno.Collections.IEnumerator<Fuse.Reactive.FuseJS.Timer_Time>");

    ::uRegisterType(type);
    return type;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Collections\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

::uInterfaceType* IEnumerator__Fuse_Reactive_JavaScript__typeof()
{
    static ::uStaticStrong< ::uInterfaceType*> type;
    if (type != NULL) return type;

    type = ::uAllocInterfaceType("Uno.Collections.IEnumerator<Fuse.Reactive.JavaScript>");

    ::uRegisterType(type);
    return type;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Collections\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

::uInterfaceType* IEnumerator__Fuse_RenderTargetEntry__typeof()
{
    static ::uStaticStrong< ::uInterfaceType*> type;
    if (type != NULL) return type;

    type = ::uAllocInterfaceType("Uno.Collections.IEnumerator<Fuse.RenderTargetEntry>");

    ::uRegisterType(type);
    return type;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Collections\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

::uInterfaceType* IEnumerator__Fuse_Resources_ImageSource__typeof()
{
    static ::uStaticStrong< ::uInterfaceType*> type;
    if (type != NULL) return type;

    type = ::uAllocInterfaceType("Uno.Collections.IEnumerator<Fuse.Resources.ImageSource>");

    ::uRegisterType(type);
    return type;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Collections\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

::uInterfaceType* IEnumerator__Fuse_Resources_IMemoryResource__typeof()
{
    static ::uStaticStrong< ::uInterfaceType*> type;
    if (type != NULL) return type;

    type = ::uAllocInterfaceType("Uno.Collections.IEnumerator<Fuse.Resources.IMemoryResource>");

    ::uRegisterType(type);
    return type;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Collections\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

::uInterfaceType* IEnumerator__Fuse_Resources_ISoftDisposable__typeof()
{
    static ::uStaticStrong< ::uInterfaceType*> type;
    if (type != NULL) return type;

    type = ::uAllocInterfaceType("Uno.Collections.IEnumerator<Fuse.Resources.ISoftDisposable>");

    ::uRegisterType(type);
    return type;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Collections\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

::uInterfaceType* IEnumerator__Fuse_Scripting_INameListener__typeof()
{
    static ::uStaticStrong< ::uInterfaceType*> type;
    if (type != NULL) return type;

    type = ::uAllocInterfaceType("Uno.Collections.IEnumerator<Fuse.Scripting.INameListener>");

    ::uRegisterType(type);
    return type;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Collections\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

::uInterfaceType* IEnumerator__Fuse_Scripting_NativeMember__typeof()
{
    static ::uStaticStrong< ::uInterfaceType*> type;
    if (type != NULL) return type;

    type = ::uAllocInterfaceType("Uno.Collections.IEnumerator<Fuse.Scripting.NativeMember>");

    ::uRegisterType(type);
    return type;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Collections\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

::uInterfaceType* IEnumerator__Fuse_Stage__typeof()
{
    static ::uStaticStrong< ::uInterfaceType*> type;
    if (type != NULL) return type;

    type = ::uAllocInterfaceType("Uno.Collections.IEnumerator<Fuse.Stage>");

    ::uRegisterType(type);
    return type;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Collections\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

::uInterfaceType* IEnumerator__Fuse_Style__typeof()
{
    static ::uStaticStrong< ::uInterfaceType*> type;
    if (type != NULL) return type;

    type = ::uAllocInterfaceType("Uno.Collections.IEnumerator<Fuse.Style>");

    ::uRegisterType(type);
    return type;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Collections\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

::uInterfaceType* IEnumerator__Fuse_StyleProperty__typeof()
{
    static ::uStaticStrong< ::uInterfaceType*> type;
    if (type != NULL) return type;

    type = ::uAllocInterfaceType("Uno.Collections.IEnumerator<Fuse.StyleProperty>");

    ::uRegisterType(type);
    return type;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Collections\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

::uInterfaceType* IEnumerator__Fuse_Transform__typeof()
{
    static ::uStaticStrong< ::uInterfaceType*> type;
    if (type != NULL) return type;

    type = ::uAllocInterfaceType("Uno.Collections.IEnumerator<Fuse.Transform>");

    ::uRegisterType(type);
    return type;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Collections\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

::uInterfaceType* IEnumerator__Fuse_Triggers_Actions_TriggerAction__typeof()
{
    static ::uStaticStrong< ::uInterfaceType*> type;
    if (type != NULL) return type;

    type = ::uAllocInterfaceType("Uno.Collections.IEnumerator<Fuse.Triggers.Actions.TriggerAction>");

    ::uRegisterType(type);
    return type;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Collections\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

::uInterfaceType* IEnumerator__Fuse_Triggers_State__typeof()
{
    static ::uStaticStrong< ::uInterfaceType*> type;
    if (type != NULL) return type;

    type = ::uAllocInterfaceType("Uno.Collections.IEnumerator<Fuse.Triggers.State>");

    ::uRegisterType(type);
    return type;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Collections\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

::uInterfaceType* IEnumerator__Fuse_UpdateListener__typeof()
{
    static ::uStaticStrong< ::uInterfaceType*> type;
    if (type != NULL) return type;

    type = ::uAllocInterfaceType("Uno.Collections.IEnumerator<Fuse.UpdateListener>");

    ::uRegisterType(type);
    return type;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Collections\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

::uInterfaceType* IEnumerator__int__typeof()
{
    static ::uStaticStrong< ::uInterfaceType*> type;
    if (type != NULL) return type;

    type = ::uAllocInterfaceType("Uno.Collections.IEnumerator<int>");

    ::uRegisterType(type);
    return type;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Collections\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

::uInterfaceType* IEnumerator__int4__typeof()
{
    static ::uStaticStrong< ::uInterfaceType*> type;
    if (type != NULL) return type;

    type = ::uAllocInterfaceType("Uno.Collections.IEnumerator<int4>");

    ::uRegisterType(type);
    return type;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Collections\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

::uInterfaceType* IEnumerator__object__typeof()
{
    static ::uStaticStrong< ::uInterfaceType*> type;
    if (type != NULL) return type;

    type = ::uAllocInterfaceType("Uno.Collections.IEnumerator<object>");

    ::uRegisterType(type);
    return type;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Collections\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

::uInterfaceType* IEnumerator__Outracks_Simulator_Bytecode_BindVariable__typeof()
{
    static ::uStaticStrong< ::uInterfaceType*> type;
    if (type != NULL) return type;

    type = ::uAllocInterfaceType("Uno.Collections.IEnumerator<Outracks.Simulator.Bytecode.BindVariable>");

    ::uRegisterType(type);
    return type;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Collections\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

::uInterfaceType* IEnumerator__Outracks_Simulator_Bytecode_Expression__typeof()
{
    static ::uStaticStrong< ::uInterfaceType*> type;
    if (type != NULL) return type;

    type = ::uAllocInterfaceType("Uno.Collections.IEnumerator<Outracks.Simulator.Bytecode.Expression>");

    ::uRegisterType(type);
    return type;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Collections\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

::uInterfaceType* IEnumerator__Outracks_Simulator_Bytecode_Parameter__typeof()
{
    static ::uStaticStrong< ::uInterfaceType*> type;
    if (type != NULL) return type;

    type = ::uAllocInterfaceType("Uno.Collections.IEnumerator<Outracks.Simulator.Bytecode.Parameter>");

    ::uRegisterType(type);
    return type;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Collections\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

::uInterfaceType* IEnumerator__Outracks_Simulator_Bytecode_Statement__typeof()
{
    static ::uStaticStrong< ::uInterfaceType*> type;
    if (type != NULL) return type;

    type = ::uAllocInterfaceType("Uno.Collections.IEnumerator<Outracks.Simulator.Bytecode.Statement>");

    ::uRegisterType(type);
    return type;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Collections\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

::uInterfaceType* IEnumerator__Outracks_Simulator_Bytecode_TypeName__typeof()
{
    static ::uStaticStrong< ::uInterfaceType*> type;
    if (type != NULL) return type;

    type = ::uAllocInterfaceType("Uno.Collections.IEnumerator<Outracks.Simulator.Bytecode.TypeName>");

    ::uRegisterType(type);
    return type;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Collections\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

::uInterfaceType* IEnumerator__Outracks_Simulator_DialogButton__typeof()
{
    static ::uStaticStrong< ::uInterfaceType*> type;
    if (type != NULL) return type;

    type = ::uAllocInterfaceType("Uno.Collections.IEnumerator<Outracks.Simulator.DialogButton>");

    ::uRegisterType(type);
    return type;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Collections\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

::uInterfaceType* IEnumerator__Outracks_Simulator_Protocol_ExceptionInfo__typeof()
{
    static ::uStaticStrong< ::uInterfaceType*> type;
    if (type != NULL) return type;

    type = ::uAllocInterfaceType("Uno.Collections.IEnumerator<Outracks.Simulator.Protocol.ExceptionInfo>");

    ::uRegisterType(type);
    return type;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Collections\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

::uInterfaceType* IEnumerator__Outracks_Simulator_Task_Outracks_Simulator_ISimulatorClient___typeof()
{
    static ::uStaticStrong< ::uInterfaceType*> type;
    if (type != NULL) return type;

    type = ::uAllocInterfaceType("Uno.Collections.IEnumerator<Outracks.Simulator.Task<Outracks.Simulator.ISimulatorClient>>");

    ::uRegisterType(type);
    return type;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Collections\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

::uInterfaceType* IEnumerator__Outracks_Simulator_Task_Uno_Net_IPEndPoint_____typeof()
{
    static ::uStaticStrong< ::uInterfaceType*> type;
    if (type != NULL) return type;

    type = ::uAllocInterfaceType("Uno.Collections.IEnumerator<Outracks.Simulator.Task<Uno.Net.IPEndPoint[]>>");

    ::uRegisterType(type);
    return type;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Collections\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

::uInterfaceType* IEnumerator__string__typeof()
{
    static ::uStaticStrong< ::uInterfaceType*> type;
    if (type != NULL) return type;

    type = ::uAllocInterfaceType("Uno.Collections.IEnumerator<string>");

    ::uRegisterType(type);
    return type;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Collections\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

::uInterfaceType* IEnumerator__Uno_Action__typeof()
{
    static ::uStaticStrong< ::uInterfaceType*> type;
    if (type != NULL) return type;

    type = ::uAllocInterfaceType("Uno.Collections.IEnumerator<Uno.Action>");

    ::uRegisterType(type);
    return type;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Collections\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

::uInterfaceType* IEnumerator__Uno_CharPunctuationChecker_PunctuationRange__typeof()
{
    static ::uStaticStrong< ::uInterfaceType*> type;
    if (type != NULL) return type;

    type = ::uAllocInterfaceType("Uno.Collections.IEnumerator<Uno.CharPunctuationChecker_PunctuationRange>");

    ::uRegisterType(type);
    return type;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Collections\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

::uInterfaceType* IEnumerator__Uno_Collections_ConcurrentCollection1_ModItem_Fuse_Animations_IMixerMaster___typeof()
{
    static ::uStaticStrong< ::uInterfaceType*> type;
    if (type != NULL) return type;

    type = ::uAllocInterfaceType("Uno.Collections.IEnumerator<Uno.Collections.ConcurrentCollection1_ModItem<Fuse.Animations.IMixerMaster>>");

    ::uRegisterType(type);
    return type;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Collections\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

::uInterfaceType* IEnumerator__Uno_Collections_ConcurrentCollection1_ModItem_Uno_EventHandler___typeof()
{
    static ::uStaticStrong< ::uInterfaceType*> type;
    if (type != NULL) return type;

    type = ::uAllocInterfaceType("Uno.Collections.IEnumerator<Uno.Collections.ConcurrentCollection1_ModItem<Uno.EventHandler>>");

    ::uRegisterType(type);
    return type;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Collections\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

::uInterfaceType* IEnumerator__Uno_Collections_Dictionary_Outracks_Simulator_Bytecode_TypeName_Uno_Type___typeof()
{
    static ::uStaticStrong< ::uInterfaceType*> type;
    if (type != NULL) return type;

    type = ::uAllocInterfaceType("Uno.Collections.IEnumerator<Uno.Collections.Dictionary<Outracks.Simulator.Bytecode.TypeName,Uno.Type>>");

    ::uRegisterType(type);
    return type;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Collections\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

::uInterfaceType* IEnumerator__Uno_Collections_KeyValuePair_Android_android_view_View_Fuse_Node___typeof()
{
    static ::uStaticStrong< ::uInterfaceType*> type;
    if (type != NULL) return type;

    type = ::uAllocInterfaceType("Uno.Collections.IEnumerator<Uno.Collections.KeyValuePair<Android.android.view.View,Fuse.Node>>");

    ::uRegisterType(type);
    return type;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Collections\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

::uInterfaceType* IEnumerator__Uno_Collections_KeyValuePair_char_float___typeof()
{
    static ::uStaticStrong< ::uInterfaceType*> type;
    if (type != NULL) return type;

    type = ::uAllocInterfaceType("Uno.Collections.IEnumerator<Uno.Collections.KeyValuePair<char,float>>");

    ::uRegisterType(type);
    return type;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Collections\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

::uInterfaceType* IEnumerator__Uno_Collections_KeyValuePair_char_Uno_Content_Fonts_BitmapFont_GlyphInfo___typeof()
{
    static ::uStaticStrong< ::uInterfaceType*> type;
    if (type != NULL) return type;

    type = ::uAllocInterfaceType("Uno.Collections.IEnumerator<Uno.Collections.KeyValuePair<char,Uno.Content.Fonts.BitmapFont_GlyphInfo>>");

    ::uRegisterType(type);
    return type;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Collections\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

::uInterfaceType* IEnumerator__Uno_Collections_KeyValuePair_char_Uno_Content_Fonts_RenderedGlyph___typeof()
{
    static ::uStaticStrong< ::uInterfaceType*> type;
    if (type != NULL) return type;

    type = ::uAllocInterfaceType("Uno.Collections.IEnumerator<Uno.Collections.KeyValuePair<char,Uno.Content.Fonts.RenderedGlyph>>");

    ::uRegisterType(type);
    return type;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Collections\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

::uInterfaceType* IEnumerator__Uno_Collections_KeyValuePair_Experimental_Cache_DiskCacheEntry_Experimental_Cache_RecordHeader___typeof()
{
    static ::uStaticStrong< ::uInterfaceType*> type;
    if (type != NULL) return type;

    type = ::uAllocInterfaceType("Uno.Collections.IEnumerator<Uno.Collections.KeyValuePair<Experimental.Cache.DiskCacheEntry,Experimental.Cache.RecordHeader>>");

    ::uRegisterType(type);
    return type;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Collections\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

::uInterfaceType* IEnumerator__Uno_Collections_KeyValuePair_framebuffer_bool___typeof()
{
    static ::uStaticStrong< ::uInterfaceType*> type;
    if (type != NULL) return type;

    type = ::uAllocInterfaceType("Uno.Collections.IEnumerator<Uno.Collections.KeyValuePair<framebuffer,bool>>");

    ::uRegisterType(type);
    return type;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Collections\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

::uInterfaceType* IEnumerator__Uno_Collections_KeyValuePair_framebuffer_int___typeof()
{
    static ::uStaticStrong< ::uInterfaceType*> type;
    if (type != NULL) return type;

    type = ::uAllocInterfaceType("Uno.Collections.IEnumerator<Uno.Collections.KeyValuePair<framebuffer,int>>");

    ::uRegisterType(type);
    return type;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Collections\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

::uInterfaceType* IEnumerator__Uno_Collections_KeyValuePair_Fuse_Controls_Internal_DefaultTextRenderer_FontKey_Uno_Content_Fonts_BitmapFont___typeof()
{
    static ::uStaticStrong< ::uInterfaceType*> type;
    if (type != NULL) return type;

    type = ::uAllocInterfaceType("Uno.Collections.IEnumerator<Uno.Collections.KeyValuePair<Fuse.Controls.Internal.DefaultTextRenderer_FontKey,Uno.Content.Fonts.BitmapFont>>");

    ::uRegisterType(type);
    return type;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Collections\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

::uInterfaceType* IEnumerator__Uno_Collections_KeyValuePair_Fuse_Drawing_Stroke_Fuse_Drawing_PolygonFiller___typeof()
{
    static ::uStaticStrong< ::uInterfaceType*> type;
    if (type != NULL) return type;

    type = ::uAllocInterfaceType("Uno.Collections.IEnumerator<Uno.Collections.KeyValuePair<Fuse.Drawing.Stroke,Fuse.Drawing.PolygonFiller>>");

    ::uRegisterType(type);
    return type;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Collections\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

::uInterfaceType* IEnumerator__Uno_Collections_KeyValuePair_Fuse_Entities_Material_Uno_Collections_List_Fuse_Entities_Entry____typeof()
{
    static ::uStaticStrong< ::uInterfaceType*> type;
    if (type != NULL) return type;

    type = ::uAllocInterfaceType("Uno.Collections.IEnumerator<Uno.Collections.KeyValuePair<Fuse.Entities.Material,Uno.Collections.List<Fuse.Entities.Entry>>>");

    ::uRegisterType(type);
    return type;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Collections\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

::uInterfaceType* IEnumerator__Uno_Collections_KeyValuePair_Fuse_Entities_Mesh_Fuse_Drawing_Batching_MeshBatcher___typeof()
{
    static ::uStaticStrong< ::uInterfaceType*> type;
    if (type != NULL) return type;

    type = ::uAllocInterfaceType("Uno.Collections.IEnumerator<Uno.Collections.KeyValuePair<Fuse.Entities.Mesh,Fuse.Drawing.Batching.MeshBatcher>>");

    ::uRegisterType(type);
    return type;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Collections\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

::uInterfaceType* IEnumerator__Uno_Collections_KeyValuePair_Fuse_Entities_Mesh_Uno_Collections_List_Fuse_Entities_Entry____typeof()
{
    static ::uStaticStrong< ::uInterfaceType*> type;
    if (type != NULL) return type;

    type = ::uAllocInterfaceType("Uno.Collections.IEnumerator<Uno.Collections.KeyValuePair<Fuse.Entities.Mesh,Uno.Collections.List<Fuse.Entities.Entry>>>");

    ::uRegisterType(type);
    return type;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Collections\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

::uInterfaceType* IEnumerator__Uno_Collections_KeyValuePair_Fuse_Font_Fuse_Controls_Internal_DefaultTextRenderer___typeof()
{
    static ::uStaticStrong< ::uInterfaceType*> type;
    if (type != NULL) return type;

    type = ::uAllocInterfaceType("Uno.Collections.IEnumerator<Uno.Collections.KeyValuePair<Fuse.Font,Fuse.Controls.Internal.DefaultTextRenderer>>");

    ::uRegisterType(type);
    return type;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Collections\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

::uInterfaceType* IEnumerator__Uno_Collections_KeyValuePair_Fuse_IFlush_bool___typeof()
{
    static ::uStaticStrong< ::uInterfaceType*> type;
    if (type != NULL) return type;

    type = ::uAllocInterfaceType("Uno.Collections.IEnumerator<Uno.Collections.KeyValuePair<Fuse.IFlush,bool>>");

    ::uRegisterType(type);
    return type;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Collections\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

::uInterfaceType* IEnumerator__Uno_Collections_KeyValuePair_Fuse_Navigation_NavigationEdge_Fuse_Gestures_Internal_EdgeSwiper___typeof()
{
    static ::uStaticStrong< ::uInterfaceType*> type;
    if (type != NULL) return type;

    type = ::uAllocInterfaceType("Uno.Collections.IEnumerator<Uno.Collections.KeyValuePair<Fuse.Navigation.NavigationEdge,Fuse.Gestures.Internal.EdgeSwiper>>");

    ::uRegisterType(type);
    return type;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Collections\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

::uInterfaceType* IEnumerator__Uno_Collections_KeyValuePair_Fuse_Node_bool___typeof()
{
    static ::uStaticStrong< ::uInterfaceType*> type;
    if (type != NULL) return type;

    type = ::uAllocInterfaceType("Uno.Collections.IEnumerator<Uno.Collections.KeyValuePair<Fuse.Node,bool>>");

    ::uRegisterType(type);
    return type;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Collections\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

::uInterfaceType* IEnumerator__Uno_Collections_KeyValuePair_HashableWeakReference_Outracks_Simulator_Bytecode_TypeName___typeof()
{
    static ::uStaticStrong< ::uInterfaceType*> type;
    if (type != NULL) return type;

    type = ::uAllocInterfaceType("Uno.Collections.IEnumerator<Uno.Collections.KeyValuePair<HashableWeakReference,Outracks.Simulator.Bytecode.TypeName>>");

    ::uRegisterType(type);
    return type;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Collections\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

::uInterfaceType* IEnumerator__Uno_Collections_KeyValuePair_HashableWeakReference_string___typeof()
{
    static ::uStaticStrong< ::uInterfaceType*> type;
    if (type != NULL) return type;

    type = ::uAllocInterfaceType("Uno.Collections.IEnumerator<Uno.Collections.KeyValuePair<HashableWeakReference,string>>");

    ::uRegisterType(type);
    return type;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Collections\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

::uInterfaceType* IEnumerator__Uno_Collections_KeyValuePair_int_bool___typeof()
{
    static ::uStaticStrong< ::uInterfaceType*> type;
    if (type != NULL) return type;

    type = ::uAllocInterfaceType("Uno.Collections.IEnumerator<Uno.Collections.KeyValuePair<int,bool>>");

    ::uRegisterType(type);
    return type;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Collections\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

::uInterfaceType* IEnumerator__Uno_Collections_KeyValuePair_int_Fuse_Input_Capturer___typeof()
{
    static ::uStaticStrong< ::uInterfaceType*> type;
    if (type != NULL) return type;

    type = ::uAllocInterfaceType("Uno.Collections.IEnumerator<Uno.Collections.KeyValuePair<int,Fuse.Input.Capturer>>");

    ::uRegisterType(type);
    return type;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Collections\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

::uInterfaceType* IEnumerator__Uno_Collections_KeyValuePair_int_Fuse_Input_Pointer_PointerRecord___typeof()
{
    static ::uStaticStrong< ::uInterfaceType*> type;
    if (type != NULL) return type;

    type = ::uAllocInterfaceType("Uno.Collections.IEnumerator<Uno.Collections.KeyValuePair<int,Fuse.Input.Pointer_PointerRecord>>");

    ::uRegisterType(type);
    return type;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Collections\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

::uInterfaceType* IEnumerator__Uno_Collections_KeyValuePair_int_Fuse_Scripting_Callback___typeof()
{
    static ::uStaticStrong< ::uInterfaceType*> type;
    if (type != NULL) return type;

    type = ::uAllocInterfaceType("Uno.Collections.IEnumerator<Uno.Collections.KeyValuePair<int,Fuse.Scripting.Callback>>");

    ::uRegisterType(type);
    return type;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Collections\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

::uInterfaceType* IEnumerator__Uno_Collections_KeyValuePair_int_int___typeof()
{
    static ::uStaticStrong< ::uInterfaceType*> type;
    if (type != NULL) return type;

    type = ::uAllocInterfaceType("Uno.Collections.IEnumerator<Uno.Collections.KeyValuePair<int,int>>");

    ::uRegisterType(type);
    return type;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Collections\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

::uInterfaceType* IEnumerator__Uno_Collections_KeyValuePair_int_string___typeof()
{
    static ::uStaticStrong< ::uInterfaceType*> type;
    if (type != NULL) return type;

    type = ::uAllocInterfaceType("Uno.Collections.IEnumerator<Uno.Collections.KeyValuePair<int,string>>");

    ::uRegisterType(type);
    return type;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Collections\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

::uInterfaceType* IEnumerator__Uno_Collections_KeyValuePair_int_Uno_Collections_IList_Fuse_Input_Capturer____typeof()
{
    static ::uStaticStrong< ::uInterfaceType*> type;
    if (type != NULL) return type;

    type = ::uAllocInterfaceType("Uno.Collections.IEnumerator<Uno.Collections.KeyValuePair<int,Uno.Collections.IList<Fuse.Input.Capturer>>>");

    ::uRegisterType(type);
    return type;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Collections\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

::uInterfaceType* IEnumerator__Uno_Collections_KeyValuePair_int_Uno_Collections_List_Fuse_Input_Pointer_PELHolder____typeof()
{
    static ::uStaticStrong< ::uInterfaceType*> type;
    if (type != NULL) return type;

    type = ::uAllocInterfaceType("Uno.Collections.IEnumerator<Uno.Collections.KeyValuePair<int,Uno.Collections.List<Fuse.Input.Pointer_PELHolder>>>");

    ::uRegisterType(type);
    return type;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Collections\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

::uInterfaceType* IEnumerator__Uno_Collections_KeyValuePair_object_object___typeof()
{
    static ::uStaticStrong< ::uInterfaceType*> type;
    if (type != NULL) return type;

    type = ::uAllocInterfaceType("Uno.Collections.IEnumerator<Uno.Collections.KeyValuePair<object,object>>");

    ::uRegisterType(type);
    return type;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Collections\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

::uInterfaceType* IEnumerator__Uno_Collections_KeyValuePair_object_string___typeof()
{
    static ::uStaticStrong< ::uInterfaceType*> type;
    if (type != NULL) return type;

    type = ::uAllocInterfaceType("Uno.Collections.IEnumerator<Uno.Collections.KeyValuePair<object,string>>");

    ::uRegisterType(type);
    return type;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Collections\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

::uInterfaceType* IEnumerator__Uno_Collections_KeyValuePair_Outracks_Simulator_Bytecode_TypeName_Outracks_Simulator_Bytecode_TypeName___typeof()
{
    static ::uStaticStrong< ::uInterfaceType*> type;
    if (type != NULL) return type;

    type = ::uAllocInterfaceType("Uno.Collections.IEnumerator<Uno.Collections.KeyValuePair<Outracks.Simulator.Bytecode.TypeName,Outracks.Simulator.Bytecode.TypeName>>");

    ::uRegisterType(type);
    return type;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Collections\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

::uInterfaceType* IEnumerator__Uno_Collections_KeyValuePair_Outracks_Simulator_Bytecode_TypeName_Uno_Type___typeof()
{
    static ::uStaticStrong< ::uInterfaceType*> type;
    if (type != NULL) return type;

    type = ::uAllocInterfaceType("Uno.Collections.IEnumerator<Uno.Collections.KeyValuePair<Outracks.Simulator.Bytecode.TypeName,Uno.Type>>");

    ::uRegisterType(type);
    return type;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Collections\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

::uInterfaceType* IEnumerator__Uno_Collections_KeyValuePair_Outracks_Simulator_Bytecode_Variable_object___typeof()
{
    static ::uStaticStrong< ::uInterfaceType*> type;
    if (type != NULL) return type;

    type = ::uAllocInterfaceType("Uno.Collections.IEnumerator<Uno.Collections.KeyValuePair<Outracks.Simulator.Bytecode.Variable,object>>");

    ::uRegisterType(type);
    return type;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Collections\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

::uInterfaceType* IEnumerator__Uno_Collections_KeyValuePair_string_Android_android_graphics_Bitmap___typeof()
{
    static ::uStaticStrong< ::uInterfaceType*> type;
    if (type != NULL) return type;

    type = ::uAllocInterfaceType("Uno.Collections.IEnumerator<Uno.Collections.KeyValuePair<string,Android.android.graphics.Bitmap>>");

    ::uRegisterType(type);
    return type;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Collections\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

::uInterfaceType* IEnumerator__Uno_Collections_KeyValuePair_string_Android_android_graphics_Typeface___typeof()
{
    static ::uStaticStrong< ::uInterfaceType*> type;
    if (type != NULL) return type;

    type = ::uAllocInterfaceType("Uno.Collections.IEnumerator<Uno.Collections.KeyValuePair<string,Android.android.graphics.Typeface>>");

    ::uRegisterType(type);
    return type;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Collections\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

::uInterfaceType* IEnumerator__Uno_Collections_KeyValuePair_string_bool___typeof()
{
    static ::uStaticStrong< ::uInterfaceType*> type;
    if (type != NULL) return type;

    type = ::uAllocInterfaceType("Uno.Collections.IEnumerator<Uno.Collections.KeyValuePair<string,bool>>");

    ::uRegisterType(type);
    return type;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Collections\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

::uInterfaceType* IEnumerator__Uno_Collections_KeyValuePair_string_Experimental_Cache_DiskCacheEntry___typeof()
{
    static ::uStaticStrong< ::uInterfaceType*> type;
    if (type != NULL) return type;

    type = ::uAllocInterfaceType("Uno.Collections.IEnumerator<Uno.Collections.KeyValuePair<string,Experimental.Cache.DiskCacheEntry>>");

    ::uRegisterType(type);
    return type;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Collections\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

::uInterfaceType* IEnumerator__Uno_Collections_KeyValuePair_string_Fuse_Shapes_GeometryCacheEntry___typeof()
{
    static ::uStaticStrong< ::uInterfaceType*> type;
    if (type != NULL) return type;

    type = ::uAllocInterfaceType("Uno.Collections.IEnumerator<Uno.Collections.KeyValuePair<string,Fuse.Shapes.GeometryCacheEntry>>");

    ::uRegisterType(type);
    return type;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Collections\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

::uInterfaceType* IEnumerator__Uno_Collections_KeyValuePair_string_int___typeof()
{
    static ::uStaticStrong< ::uInterfaceType*> type;
    if (type != NULL) return type;

    type = ::uAllocInterfaceType("Uno.Collections.IEnumerator<Uno.Collections.KeyValuePair<string,int>>");

    ::uRegisterType(type);
    return type;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Collections\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

::uInterfaceType* IEnumerator__Uno_Collections_KeyValuePair_string_object___typeof()
{
    static ::uStaticStrong< ::uInterfaceType*> type;
    if (type != NULL) return type;

    type = ::uAllocInterfaceType("Uno.Collections.IEnumerator<Uno.Collections.KeyValuePair<string,object>>");

    ::uRegisterType(type);
    return type;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Collections\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

::uInterfaceType* IEnumerator__Uno_Collections_KeyValuePair_string_Outracks_Simulator_ByteFileSource___typeof()
{
    static ::uStaticStrong< ::uInterfaceType*> type;
    if (type != NULL) return type;

    type = ::uAllocInterfaceType("Uno.Collections.IEnumerator<Uno.Collections.KeyValuePair<string,Outracks.Simulator.ByteFileSource>>");

    ::uRegisterType(type);
    return type;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Collections\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

::uInterfaceType* IEnumerator__Uno_Collections_KeyValuePair_string_string___typeof()
{
    static ::uStaticStrong< ::uInterfaceType*> type;
    if (type != NULL) return type;

    type = ::uAllocInterfaceType("Uno.Collections.IEnumerator<Uno.Collections.KeyValuePair<string,string>>");

    ::uRegisterType(type);
    return type;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Collections\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

::uInterfaceType* IEnumerator__Uno_Collections_KeyValuePair_string_Uno_Collections_List_Fuse_Scripting_INameListener____typeof()
{
    static ::uStaticStrong< ::uInterfaceType*> type;
    if (type != NULL) return type;

    type = ::uAllocInterfaceType("Uno.Collections.IEnumerator<Uno.Collections.KeyValuePair<string,Uno.Collections.List<Fuse.Scripting.INameListener>>>");

    ::uRegisterType(type);
    return type;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Collections\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

::uInterfaceType* IEnumerator__Uno_Collections_KeyValuePair_string_Uno_Collections_List_object____typeof()
{
    static ::uStaticStrong< ::uInterfaceType*> type;
    if (type != NULL) return type;

    type = ::uAllocInterfaceType("Uno.Collections.IEnumerator<Uno.Collections.KeyValuePair<string,Uno.Collections.List<object>>>");

    ::uRegisterType(type);
    return type;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Collections\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

::uInterfaceType* IEnumerator__Uno_Collections_KeyValuePair_string_Uno_Collections_List_Uno_Action____typeof()
{
    static ::uStaticStrong< ::uInterfaceType*> type;
    if (type != NULL) return type;

    type = ::uAllocInterfaceType("Uno.Collections.IEnumerator<Uno.Collections.KeyValuePair<string,Uno.Collections.List<Uno.Action>>>");

    ::uRegisterType(type);
    return type;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Collections\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

::uInterfaceType* IEnumerator__Uno_Collections_KeyValuePair_string_Uno_Content_Models_ModelParameter___typeof()
{
    static ::uStaticStrong< ::uInterfaceType*> type;
    if (type != NULL) return type;

    type = ::uAllocInterfaceType("Uno.Collections.IEnumerator<Uno.Collections.KeyValuePair<string,Uno.Content.Models.ModelParameter>>");

    ::uRegisterType(type);
    return type;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Collections\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

::uInterfaceType* IEnumerator__Uno_Collections_KeyValuePair_string_Uno_Content_Models_VertexAttributeArray___typeof()
{
    static ::uStaticStrong< ::uInterfaceType*> type;
    if (type != NULL) return type;

    type = ::uAllocInterfaceType("Uno.Collections.IEnumerator<Uno.Collections.KeyValuePair<string,Uno.Content.Models.VertexAttributeArray>>");

    ::uRegisterType(type);
    return type;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Collections\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

::uInterfaceType* IEnumerator__Uno_Collections_KeyValuePair_string_Uno_Data_Json_Value___typeof()
{
    static ::uStaticStrong< ::uInterfaceType*> type;
    if (type != NULL) return type;

    type = ::uAllocInterfaceType("Uno.Collections.IEnumerator<Uno.Collections.KeyValuePair<string,Uno.Data.Json.Value>>");

    ::uRegisterType(type);
    return type;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Collections\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

::uInterfaceType* IEnumerator__Uno_Collections_KeyValuePair_string_Uno_Data_Xml_XmlEncoding___typeof()
{
    static ::uStaticStrong< ::uInterfaceType*> type;
    if (type != NULL) return type;

    type = ::uAllocInterfaceType("Uno.Collections.IEnumerator<Uno.Collections.KeyValuePair<string,Uno.Data.Xml.XmlEncoding>>");

    ::uRegisterType(type);
    return type;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Collections\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

::uInterfaceType* IEnumerator__Uno_Collections_KeyValuePair_string_Uno_Runtime_Implementation_ShaderBackends_OpenGL_GLCompiledProgram___typeof()
{
    static ::uStaticStrong< ::uInterfaceType*> type;
    if (type != NULL) return type;

    type = ::uAllocInterfaceType("Uno.Collections.IEnumerator<Uno.Collections.KeyValuePair<string,Uno.Runtime.Implementation.ShaderBackends.OpenGL.GLCompiledProgram>>");

    ::uRegisterType(type);
    return type;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Collections\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

::uInterfaceType* IEnumerator__Uno_Collections_KeyValuePair_string_Uno_WeakReference_Fuse_Resources_HttpImageSourceImpl____typeof()
{
    static ::uStaticStrong< ::uInterfaceType*> type;
    if (type != NULL) return type;

    type = ::uAllocInterfaceType("Uno.Collections.IEnumerator<Uno.Collections.KeyValuePair<string,Uno.WeakReference<Fuse.Resources.HttpImageSourceImpl>>>");

    ::uRegisterType(type);
    return type;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Collections\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

::uInterfaceType* IEnumerator__Uno_Collections_KeyValuePair_Uno_Content_Fonts_BitmapFont_CharPair_float___typeof()
{
    static ::uStaticStrong< ::uInterfaceType*> type;
    if (type != NULL) return type;

    type = ::uAllocInterfaceType("Uno.Collections.IEnumerator<Uno.Collections.KeyValuePair<Uno.Content.Fonts.BitmapFont_CharPair,float>>");

    ::uRegisterType(type);
    return type;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Collections\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

::uInterfaceType* IEnumerator__Uno_Collections_KeyValuePair_Uno_Type_object___typeof()
{
    static ::uStaticStrong< ::uInterfaceType*> type;
    if (type != NULL) return type;

    type = ::uAllocInterfaceType("Uno.Collections.IEnumerator<Uno.Collections.KeyValuePair<Uno.Type,object>>");

    ::uRegisterType(type);
    return type;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Collections\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

::uInterfaceType* IEnumerator__Uno_Collections_KeyValuePair_Uno_Type_Uno_Reflection_CppField_____typeof()
{
    static ::uStaticStrong< ::uInterfaceType*> type;
    if (type != NULL) return type;

    type = ::uAllocInterfaceType("Uno.Collections.IEnumerator<Uno.Collections.KeyValuePair<Uno.Type,Uno.Reflection.CppField[]>>");

    ::uRegisterType(type);
    return type;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Collections\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

::uInterfaceType* IEnumerator__Uno_Collections_KeyValuePair_Uno_Type_Uno_Reflection_CppFunction_____typeof()
{
    static ::uStaticStrong< ::uInterfaceType*> type;
    if (type != NULL) return type;

    type = ::uAllocInterfaceType("Uno.Collections.IEnumerator<Uno.Collections.KeyValuePair<Uno.Type,Uno.Reflection.CppFunction[]>>");

    ::uRegisterType(type);
    return type;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Collections\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

::uInterfaceType* IEnumerator__Uno_Collections_KeyValuePair_Uno_UX_FileSource_Uno_Content_Fonts_FontFace___typeof()
{
    static ::uStaticStrong< ::uInterfaceType*> type;
    if (type != NULL) return type;

    type = ::uAllocInterfaceType("Uno.Collections.IEnumerator<Uno.Collections.KeyValuePair<Uno.UX.FileSource,Uno.Content.Fonts.FontFace>>");

    ::uRegisterType(type);
    return type;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Collections\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

::uInterfaceType* IEnumerator__Uno_Collections_KeyValuePair_Uno_UX_FileSource_Uno_WeakReference_Fuse_Resources_FileImageSourceImpl____typeof()
{
    static ::uStaticStrong< ::uInterfaceType*> type;
    if (type != NULL) return type;

    type = ::uAllocInterfaceType("Uno.Collections.IEnumerator<Uno.Collections.KeyValuePair<Uno.UX.FileSource,Uno.WeakReference<Fuse.Resources.FileImageSourceImpl>>>");

    ::uRegisterType(type);
    return type;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Collections\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

::uInterfaceType* IEnumerator__Uno_Content_Models_ModelDrawable__typeof()
{
    static ::uStaticStrong< ::uInterfaceType*> type;
    if (type != NULL) return type;

    type = ::uAllocInterfaceType("Uno.Collections.IEnumerator<Uno.Content.Models.ModelDrawable>");

    ::uRegisterType(type);
    return type;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Collections\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

::uInterfaceType* IEnumerator__Uno_Content_Models_ModelMesh__typeof()
{
    static ::uStaticStrong< ::uInterfaceType*> type;
    if (type != NULL) return type;

    type = ::uAllocInterfaceType("Uno.Collections.IEnumerator<Uno.Content.Models.ModelMesh>");

    ::uRegisterType(type);
    return type;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Collections\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

::uInterfaceType* IEnumerator__Uno_Content_Models_ModelNode__typeof()
{
    static ::uStaticStrong< ::uInterfaceType*> type;
    if (type != NULL) return type;

    type = ::uAllocInterfaceType("Uno.Collections.IEnumerator<Uno.Content.Models.ModelNode>");

    ::uRegisterType(type);
    return type;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Collections\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

::uInterfaceType* IEnumerator__Uno_Content_Models_ModelParameter_float4x4___typeof()
{
    static ::uStaticStrong< ::uInterfaceType*> type;
    if (type != NULL) return type;

    type = ::uAllocInterfaceType("Uno.Collections.IEnumerator<Uno.Content.Models.ModelParameter<float4x4>>");

    ::uRegisterType(type);
    return type;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Collections\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

::uInterfaceType* IEnumerator__Uno_Content_Models_ModelSkin__typeof()
{
    static ::uStaticStrong< ::uInterfaceType*> type;
    if (type != NULL) return type;

    type = ::uAllocInterfaceType("Uno.Collections.IEnumerator<Uno.Content.Models.ModelSkin>");

    ::uRegisterType(type);
    return type;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Collections\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

::uInterfaceType* IEnumerator__Uno_Content_Models_SkinBone__typeof()
{
    static ::uStaticStrong< ::uInterfaceType*> type;
    if (type != NULL) return type;

    type = ::uAllocInterfaceType("Uno.Collections.IEnumerator<Uno.Content.Models.SkinBone>");

    ::uRegisterType(type);
    return type;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Collections\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

::uInterfaceType* IEnumerator__Uno_Content_Models_SkinDrawable__typeof()
{
    static ::uStaticStrong< ::uInterfaceType*> type;
    if (type != NULL) return type;

    type = ::uAllocInterfaceType("Uno.Collections.IEnumerator<Uno.Content.Models.SkinDrawable>");

    ::uRegisterType(type);
    return type;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Collections\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

::uInterfaceType* IEnumerator__Uno_Content_Models_VertexInfluence__typeof()
{
    static ::uStaticStrong< ::uInterfaceType*> type;
    if (type != NULL) return type;

    type = ::uAllocInterfaceType("Uno.Collections.IEnumerator<Uno.Content.Models.VertexInfluence>");

    ::uRegisterType(type);
    return type;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Collections\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

::uInterfaceType* IEnumerator__Uno_Content_Splines_KeyframedSpline2_Key_float_float___typeof()
{
    static ::uStaticStrong< ::uInterfaceType*> type;
    if (type != NULL) return type;

    type = ::uAllocInterfaceType("Uno.Collections.IEnumerator<Uno.Content.Splines.KeyframedSpline2_Key<float,float>>");

    ::uRegisterType(type);
    return type;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Collections\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

::uInterfaceType* IEnumerator__Uno_Content_Splines_KeyframedSpline2_Key_float2_float2___typeof()
{
    static ::uStaticStrong< ::uInterfaceType*> type;
    if (type != NULL) return type;

    type = ::uAllocInterfaceType("Uno.Collections.IEnumerator<Uno.Content.Splines.KeyframedSpline2_Key<float2,float2>>");

    ::uRegisterType(type);
    return type;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Collections\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

::uInterfaceType* IEnumerator__Uno_Content_Splines_KeyframedSpline2_Key_float3_float3___typeof()
{
    static ::uStaticStrong< ::uInterfaceType*> type;
    if (type != NULL) return type;

    type = ::uAllocInterfaceType("Uno.Collections.IEnumerator<Uno.Content.Splines.KeyframedSpline2_Key<float3,float3>>");

    ::uRegisterType(type);
    return type;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Collections\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

::uInterfaceType* IEnumerator__Uno_Content_Splines_KeyframedSpline2_Key_float4_float4___typeof()
{
    static ::uStaticStrong< ::uInterfaceType*> type;
    if (type != NULL) return type;

    type = ::uAllocInterfaceType("Uno.Collections.IEnumerator<Uno.Content.Splines.KeyframedSpline2_Key<float4,float4>>");

    ::uRegisterType(type);
    return type;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Collections\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

::uInterfaceType* IEnumerator__Uno_Content_Splines_KeyframedSpline2_Key_float4x4_float4x4___typeof()
{
    static ::uStaticStrong< ::uInterfaceType*> type;
    if (type != NULL) return type;

    type = ::uAllocInterfaceType("Uno.Collections.IEnumerator<Uno.Content.Splines.KeyframedSpline2_Key<float4x4,float4x4>>");

    ::uRegisterType(type);
    return type;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Collections\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

::uInterfaceType* IEnumerator__Uno_Data_Json_Value__typeof()
{
    static ::uStaticStrong< ::uInterfaceType*> type;
    if (type != NULL) return type;

    type = ::uAllocInterfaceType("Uno.Collections.IEnumerator<Uno.Data.Json.Value>");

    ::uRegisterType(type);
    return type;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Collections\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

::uInterfaceType* IEnumerator__Uno_Data_Xml_XmlAttribute__typeof()
{
    static ::uStaticStrong< ::uInterfaceType*> type;
    if (type != NULL) return type;

    type = ::uAllocInterfaceType("Uno.Collections.IEnumerator<Uno.Data.Xml.XmlAttribute>");

    ::uRegisterType(type);
    return type;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Collections\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

::uInterfaceType* IEnumerator__Uno_Data_Xml_XmlAttributeHandle__typeof()
{
    static ::uStaticStrong< ::uInterfaceType*> type;
    if (type != NULL) return type;

    type = ::uAllocInterfaceType("Uno.Collections.IEnumerator<Uno.Data.Xml.XmlAttributeHandle>");

    ::uRegisterType(type);
    return type;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Collections\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

::uInterfaceType* IEnumerator__Uno_Data_Xml_XmlLinkedNode__typeof()
{
    static ::uStaticStrong< ::uInterfaceType*> type;
    if (type != NULL) return type;

    type = ::uAllocInterfaceType("Uno.Collections.IEnumerator<Uno.Data.Xml.XmlLinkedNode>");

    ::uRegisterType(type);
    return type;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Collections\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

::uInterfaceType* IEnumerator__Uno_Data_Xml_XmlNodeHandle__typeof()
{
    static ::uStaticStrong< ::uInterfaceType*> type;
    if (type != NULL) return type;

    type = ::uAllocInterfaceType("Uno.Collections.IEnumerator<Uno.Data.Xml.XmlNodeHandle>");

    ::uRegisterType(type);
    return type;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Collections\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

::uInterfaceType* IEnumerator__Uno_Diagnostics_ProfileEvent__typeof()
{
    static ::uStaticStrong< ::uInterfaceType*> type;
    if (type != NULL) return type;

    type = ::uAllocInterfaceType("Uno.Collections.IEnumerator<Uno.Diagnostics.ProfileEvent>");

    ::uRegisterType(type);
    return type;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Collections\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

::uInterfaceType* IEnumerator__Uno_EventHandler__typeof()
{
    static ::uStaticStrong< ::uInterfaceType*> type;
    if (type != NULL) return type;

    type = ::uAllocInterfaceType("Uno.Collections.IEnumerator<Uno.EventHandler>");

    ::uRegisterType(type);
    return type;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Collections\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

::uInterfaceType* IEnumerator__Uno_Exception__typeof()
{
    static ::uStaticStrong< ::uInterfaceType*> type;
    if (type != NULL) return type;

    type = ::uAllocInterfaceType("Uno.Collections.IEnumerator<Uno.Exception>");

    ::uRegisterType(type);
    return type;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Collections\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

::uInterfaceType* IEnumerator__Uno_Geometry_Triangle2D__typeof()
{
    static ::uStaticStrong< ::uInterfaceType*> type;
    if (type != NULL) return type;

    type = ::uAllocInterfaceType("Uno.Collections.IEnumerator<Uno.Geometry.Triangle2D>");

    ::uRegisterType(type);
    return type;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Collections\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

::uInterfaceType* IEnumerator__Uno_Graphics_PolygonFace__typeof()
{
    static ::uStaticStrong< ::uInterfaceType*> type;
    if (type != NULL) return type;

    type = ::uAllocInterfaceType("Uno.Collections.IEnumerator<Uno.Graphics.PolygonFace>");

    ::uRegisterType(type);
    return type;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Collections\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

::uInterfaceType* IEnumerator__Uno_Net_Http_HttpMessageHandlerRequest__typeof()
{
    static ::uStaticStrong< ::uInterfaceType*> type;
    if (type != NULL) return type;

    type = ::uAllocInterfaceType("Uno.Collections.IEnumerator<Uno.Net.Http.HttpMessageHandlerRequest>");

    ::uRegisterType(type);
    return type;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Collections\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

::uInterfaceType* IEnumerator__Uno_Net_IPEndPoint__typeof()
{
    static ::uStaticStrong< ::uInterfaceType*> type;
    if (type != NULL) return type;

    type = ::uAllocInterfaceType("Uno.Collections.IEnumerator<Uno.Net.IPEndPoint>");

    ::uRegisterType(type);
    return type;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Collections\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

::uInterfaceType* IEnumerator__Uno_Platform_Key__typeof()
{
    static ::uStaticStrong< ::uInterfaceType*> type;
    if (type != NULL) return type;

    type = ::uAllocInterfaceType("Uno.Collections.IEnumerator<Uno.Platform.Key>");

    ::uRegisterType(type);
    return type;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Collections\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

::uInterfaceType* IEnumerator__Uno_Reflection_CppField__typeof()
{
    static ::uStaticStrong< ::uInterfaceType*> type;
    if (type != NULL) return type;

    type = ::uAllocInterfaceType("Uno.Collections.IEnumerator<Uno.Reflection.CppField>");

    ::uRegisterType(type);
    return type;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Collections\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

::uInterfaceType* IEnumerator__Uno_Reflection_CppFunction__typeof()
{
    static ::uStaticStrong< ::uInterfaceType*> type;
    if (type != NULL) return type;

    type = ::uAllocInterfaceType("Uno.Collections.IEnumerator<Uno.Reflection.CppFunction>");

    ::uRegisterType(type);
    return type;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Collections\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

::uInterfaceType* IEnumerator__Uno_Runtime_Implementation_Internal_FormatStringToken__typeof()
{
    static ::uStaticStrong< ::uInterfaceType*> type;
    if (type != NULL) return type;

    type = ::uAllocInterfaceType("Uno.Collections.IEnumerator<Uno.Runtime.Implementation.Internal.FormatStringToken>");

    ::uRegisterType(type);
    return type;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Collections\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

::uInterfaceType* IEnumerator__Uno_UX_FileSource__typeof()
{
    static ::uStaticStrong< ::uInterfaceType*> type;
    if (type != NULL) return type;

    type = ::uAllocInterfaceType("Uno.Collections.IEnumerator<Uno.UX.FileSource>");

    ::uRegisterType(type);
    return type;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Collections\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

::uInterfaceType* IEnumerator__Uno_UX_IFactory__typeof()
{
    static ::uStaticStrong< ::uInterfaceType*> type;
    if (type != NULL) return type;

    type = ::uAllocInterfaceType("Uno.Collections.IEnumerator<Uno.UX.IFactory>");

    ::uRegisterType(type);
    return type;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Collections\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

::uInterfaceType* IEnumerator__Uno_UX_ITemplate__typeof()
{
    static ::uStaticStrong< ::uInterfaceType*> type;
    if (type != NULL) return type;

    type = ::uAllocInterfaceType("Uno.Collections.IEnumerator<Uno.UX.ITemplate>");

    ::uRegisterType(type);
    return type;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Collections\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

::uInterfaceType* IEnumerator__Uno_UX_Resource__typeof()
{
    static ::uStaticStrong< ::uInterfaceType*> type;
    if (type != NULL) return type;

    type = ::uAllocInterfaceType("Uno.Collections.IEnumerator<Uno.UX.Resource>");

    ::uRegisterType(type);
    return type;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Collections\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

::uInterfaceType* IList__Experimental_Cache_DiskCacheEntry__typeof()
{
    static ::uStaticStrong< ::uInterfaceType*> type;
    if (type != NULL) return type;

    type = ::uAllocInterfaceType("Uno.Collections.IList<Experimental.Cache.DiskCacheEntry>");

    ::uRegisterType(type);
    return type;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Collections\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

::uInterfaceType* IList__float2__typeof()
{
    static ::uStaticStrong< ::uInterfaceType*> type;
    if (type != NULL) return type;

    type = ::uAllocInterfaceType("Uno.Collections.IList<float2>");

    ::uRegisterType(type);
    return type;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Collections\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

::uInterfaceType* IList__Fuse_Animations_Animator__typeof()
{
    static ::uStaticStrong< ::uInterfaceType*> type;
    if (type != NULL) return type;

    type = ::uAllocInterfaceType("Uno.Collections.IList<Fuse.Animations.Animator>");

    ::uRegisterType(type);
    return type;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Collections\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

::uInterfaceType* IList__Fuse_Animations_Keyframe__typeof()
{
    static ::uStaticStrong< ::uInterfaceType*> type;
    if (type != NULL) return type;

    type = ::uAllocInterfaceType("Uno.Collections.IList<Fuse.Animations.Keyframe>");

    ::uRegisterType(type);
    return type;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Collections\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

::uInterfaceType* IList__Fuse_Behavior__typeof()
{
    static ::uStaticStrong< ::uInterfaceType*> type;
    if (type != NULL) return type;

    type = ::uAllocInterfaceType("Uno.Collections.IList<Fuse.Behavior>");

    ::uRegisterType(type);
    return type;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Collections\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

::uInterfaceType* IList__Fuse_Drawing_Brush__typeof()
{
    static ::uStaticStrong< ::uInterfaceType*> type;
    if (type != NULL) return type;

    type = ::uAllocInterfaceType("Uno.Collections.IList<Fuse.Drawing.Brush>");

    ::uRegisterType(type);
    return type;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Collections\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

::uInterfaceType* IList__Fuse_Drawing_GradientStop__typeof()
{
    static ::uStaticStrong< ::uInterfaceType*> type;
    if (type != NULL) return type;

    type = ::uAllocInterfaceType("Uno.Collections.IList<Fuse.Drawing.GradientStop>");

    ::uRegisterType(type);
    return type;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Collections\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

::uInterfaceType* IList__Fuse_Drawing_Stroke__typeof()
{
    static ::uStaticStrong< ::uInterfaceType*> type;
    if (type != NULL) return type;

    type = ::uAllocInterfaceType("Uno.Collections.IList<Fuse.Drawing.Stroke>");

    ::uRegisterType(type);
    return type;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Collections\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

::uInterfaceType* IList__Fuse_Effects_Effect__typeof()
{
    static ::uStaticStrong< ::uInterfaceType*> type;
    if (type != NULL) return type;

    type = ::uAllocInterfaceType("Uno.Collections.IList<Fuse.Effects.Effect>");

    ::uRegisterType(type);
    return type;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Collections\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

::uInterfaceType* IList__Fuse_Entities_Component__typeof()
{
    static ::uStaticStrong< ::uInterfaceType*> type;
    if (type != NULL) return type;

    type = ::uAllocInterfaceType("Uno.Collections.IList<Fuse.Entities.Component>");

    ::uRegisterType(type);
    return type;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Collections\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

::uInterfaceType* IList__Fuse_Entities_Entity__typeof()
{
    static ::uStaticStrong< ::uInterfaceType*> type;
    if (type != NULL) return type;

    type = ::uAllocInterfaceType("Uno.Collections.IList<Fuse.Entities.Entity>");

    ::uRegisterType(type);
    return type;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Collections\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

::uInterfaceType* IList__Fuse_Input_Capturer__typeof()
{
    static ::uStaticStrong< ::uInterfaceType*> type;
    if (type != NULL) return type;

    type = ::uAllocInterfaceType("Uno.Collections.IList<Fuse.Input.Capturer>");

    ::uRegisterType(type);
    return type;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Collections\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

::uInterfaceType* IList__Fuse_IViewport__typeof()
{
    static ::uStaticStrong< ::uInterfaceType*> type;
    if (type != NULL) return type;

    type = ::uAllocInterfaceType("Uno.Collections.IList<Fuse.IViewport>");

    ::uRegisterType(type);
    return type;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Collections\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

::uInterfaceType* IList__Fuse_Layouts_Column__typeof()
{
    static ::uStaticStrong< ::uInterfaceType*> type;
    if (type != NULL) return type;

    type = ::uAllocInterfaceType("Uno.Collections.IList<Fuse.Layouts.Column>");

    ::uRegisterType(type);
    return type;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Collections\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

::uInterfaceType* IList__Fuse_Layouts_DefinitionBase_ParseDataItem__typeof()
{
    static ::uStaticStrong< ::uInterfaceType*> type;
    if (type != NULL) return type;

    type = ::uAllocInterfaceType("Uno.Collections.IList<Fuse.Layouts.DefinitionBase_ParseDataItem>");

    ::uRegisterType(type);
    return type;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Collections\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

::uInterfaceType* IList__Fuse_Layouts_Row__typeof()
{
    static ::uStaticStrong< ::uInterfaceType*> type;
    if (type != NULL) return type;

    type = ::uAllocInterfaceType("Uno.Collections.IList<Fuse.Layouts.Row>");

    ::uRegisterType(type);
    return type;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Collections\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

::uInterfaceType* IList__Fuse_Navigation_INavigationAnimator__typeof()
{
    static ::uStaticStrong< ::uInterfaceType*> type;
    if (type != NULL) return type;

    type = ::uAllocInterfaceType("Uno.Collections.IList<Fuse.Navigation.INavigationAnimator>");

    ::uRegisterType(type);
    return type;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Collections\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

::uInterfaceType* IList__Fuse_Node__typeof()
{
    static ::uStaticStrong< ::uInterfaceType*> type;
    if (type != NULL) return type;

    type = ::uAllocInterfaceType("Uno.Collections.IList<Fuse.Node>");

    ::uRegisterType(type);
    return type;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Collections\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

::uInterfaceType* IList__Fuse_Reactive_Case__typeof()
{
    static ::uStaticStrong< ::uInterfaceType*> type;
    if (type != NULL) return type;

    type = ::uAllocInterfaceType("Uno.Collections.IList<Fuse.Reactive.Case>");

    ::uRegisterType(type);
    return type;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Collections\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

::uInterfaceType* IList__Fuse_RenderTargetEntry__typeof()
{
    static ::uStaticStrong< ::uInterfaceType*> type;
    if (type != NULL) return type;

    type = ::uAllocInterfaceType("Uno.Collections.IList<Fuse.RenderTargetEntry>");

    ::uRegisterType(type);
    return type;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Collections\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

::uInterfaceType* IList__Fuse_Resources_ImageSource__typeof()
{
    static ::uStaticStrong< ::uInterfaceType*> type;
    if (type != NULL) return type;

    type = ::uAllocInterfaceType("Uno.Collections.IList<Fuse.Resources.ImageSource>");

    ::uRegisterType(type);
    return type;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Collections\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

::uInterfaceType* IList__Fuse_Style__typeof()
{
    static ::uStaticStrong< ::uInterfaceType*> type;
    if (type != NULL) return type;

    type = ::uAllocInterfaceType("Uno.Collections.IList<Fuse.Style>");

    ::uRegisterType(type);
    return type;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Collections\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

::uInterfaceType* IList__Fuse_Transform__typeof()
{
    static ::uStaticStrong< ::uInterfaceType*> type;
    if (type != NULL) return type;

    type = ::uAllocInterfaceType("Uno.Collections.IList<Fuse.Transform>");

    ::uRegisterType(type);
    return type;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Collections\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

::uInterfaceType* IList__Fuse_Triggers_Actions_TriggerAction__typeof()
{
    static ::uStaticStrong< ::uInterfaceType*> type;
    if (type != NULL) return type;

    type = ::uAllocInterfaceType("Uno.Collections.IList<Fuse.Triggers.Actions.TriggerAction>");

    ::uRegisterType(type);
    return type;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Collections\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

::uInterfaceType* IList__Fuse_Triggers_State__typeof()
{
    static ::uStaticStrong< ::uInterfaceType*> type;
    if (type != NULL) return type;

    type = ::uAllocInterfaceType("Uno.Collections.IList<Fuse.Triggers.State>");

    ::uRegisterType(type);
    return type;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Collections\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

::uInterfaceType* IList__int4__typeof()
{
    static ::uStaticStrong< ::uInterfaceType*> type;
    if (type != NULL) return type;

    type = ::uAllocInterfaceType("Uno.Collections.IList<int4>");

    ::uRegisterType(type);
    return type;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Collections\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

::uInterfaceType* IList__Uno_Data_Xml_XmlAttribute__typeof()
{
    static ::uStaticStrong< ::uInterfaceType*> type;
    if (type != NULL) return type;

    type = ::uAllocInterfaceType("Uno.Collections.IList<Uno.Data.Xml.XmlAttribute>");

    ::uRegisterType(type);
    return type;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Collections\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

::uInterfaceType* IList__Uno_Data_Xml_XmlLinkedNode__typeof()
{
    static ::uStaticStrong< ::uInterfaceType*> type;
    if (type != NULL) return type;

    type = ::uAllocInterfaceType("Uno.Collections.IList<Uno.Data.Xml.XmlLinkedNode>");

    ::uRegisterType(type);
    return type;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Collections\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

::uInterfaceType* IList__Uno_Data_Xml_XmlNodeHandle__typeof()
{
    static ::uStaticStrong< ::uInterfaceType*> type;
    if (type != NULL) return type;

    type = ::uAllocInterfaceType("Uno.Collections.IList<Uno.Data.Xml.XmlNodeHandle>");

    ::uRegisterType(type);
    return type;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Collections\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

::uInterfaceType* IList__Uno_Exception__typeof()
{
    static ::uStaticStrong< ::uInterfaceType*> type;
    if (type != NULL) return type;

    type = ::uAllocInterfaceType("Uno.Collections.IList<Uno.Exception>");

    ::uRegisterType(type);
    return type;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Collections\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

::uInterfaceType* IList__Uno_Graphics_PolygonFace__typeof()
{
    static ::uStaticStrong< ::uInterfaceType*> type;
    if (type != NULL) return type;

    type = ::uAllocInterfaceType("Uno.Collections.IList<Uno.Graphics.PolygonFace>");

    ::uRegisterType(type);
    return type;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Collections\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

::uInterfaceType* IList__Uno_UX_FileSource__typeof()
{
    static ::uStaticStrong< ::uInterfaceType*> type;
    if (type != NULL) return type;

    type = ::uAllocInterfaceType("Uno.Collections.IList<Uno.UX.FileSource>");

    ::uRegisterType(type);
    return type;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Collections\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

::uInterfaceType* IList__Uno_UX_IFactory__typeof()
{
    static ::uStaticStrong< ::uInterfaceType*> type;
    if (type != NULL) return type;

    type = ::uAllocInterfaceType("Uno.Collections.IList<Uno.UX.IFactory>");

    ::uRegisterType(type);
    return type;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Collections\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

::uInterfaceType* IList__Uno_UX_ITemplate__typeof()
{
    static ::uStaticStrong< ::uInterfaceType*> type;
    if (type != NULL) return type;

    type = ::uAllocInterfaceType("Uno.Collections.IList<Uno.UX.ITemplate>");

    ::uRegisterType(type);
    return type;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Collections\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

::uInterfaceType* IList__Uno_UX_Resource__typeof()
{
    static ::uStaticStrong< ::uInterfaceType*> type;
    if (type != NULL) return type;

    type = ::uAllocInterfaceType("Uno.Collections.IList<Uno.UX.Resource>");

    ::uRegisterType(type);
    return type;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\Uno.Collections\0.13.2\Extensions\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

IListExtensions__uType* IListExtensions__typeof()
{
    static ::uStaticStrong<IListExtensions__uType*> type;
    if (type != NULL) return type;

    type = (IListExtensions__uType*)::uAllocClassType(sizeof(IListExtensions__uType), "Uno.Collections.IListExtensions");

    type->SetFunctions(11,
        ::uNewFunctionVoid("AddRange", IListExtensions__AddRange__Fuse_Behavior, 0, true, ::app::Uno::Collections::IList__Fuse_Behavior__typeof(), ::app::Uno::Collections::IEnumerable__Fuse_Behavior__typeof()),
        ::uNewFunctionVoid("AddRange", IListExtensions__AddRange__Uno_UX_Resource, 0, true, ::app::Uno::Collections::IList__Uno_UX_Resource__typeof(), ::app::Uno::Collections::IEnumerable__Uno_UX_Resource__typeof()),
        ::uNewFunction("Last", IListExtensions__Last__Fuse_Entities_Entity, 0, true, ::app::Fuse::Entities::Entity__typeof(), ::app::Uno::Collections::IList__Fuse_Entities_Entity__typeof()),
        ::uNewFunction("Last", IListExtensions__Last__Uno_Data_Xml_XmlNodeHandle, 0, true, ::app::Uno::Data::Xml::XmlNodeHandle__typeof(), ::app::Uno::Collections::IList__Uno_Data_Xml_XmlNodeHandle__typeof()),
        ::uNewFunction("RemoveLast", IListExtensions__RemoveLast__Fuse_Entities_Entity, 0, true, ::app::Fuse::Entities::Entity__typeof(), ::app::Uno::Collections::IList__Fuse_Entities_Entity__typeof()),
        ::uNewFunction("RemoveLast", IListExtensions__RemoveLast__Fuse_IViewport, 0, true, ::app::Fuse::IViewport__typeof(), ::app::Uno::Collections::IList__Fuse_IViewport__typeof()),
        ::uNewFunction("RemoveLast", IListExtensions__RemoveLast__Fuse_Layouts_Column, 0, true, ::app::Fuse::Layouts::Column__typeof(), ::app::Uno::Collections::IList__Fuse_Layouts_Column__typeof()),
        ::uNewFunction("RemoveLast", IListExtensions__RemoveLast__Fuse_Layouts_Row, 0, true, ::app::Fuse::Layouts::Row__typeof(), ::app::Uno::Collections::IList__Fuse_Layouts_Row__typeof()),
        ::uNewFunction("RemoveLast", IListExtensions__RemoveLast__Fuse_RenderTargetEntry, 0, true, ::app::Fuse::RenderTargetEntry__typeof(), ::app::Uno::Collections::IList__Fuse_RenderTargetEntry__typeof()),
        ::uNewFunction("RemoveLast", IListExtensions__RemoveLast__int4, 0, true, ::app::Uno::Int4__typeof(), ::app::Uno::Collections::IList__int4__typeof()),
        ::uNewFunction("RemoveLast", IListExtensions__RemoveLast__Uno_Graphics_PolygonFace, 0, true, ::app::Uno::Graphics::PolygonFace__typeof(), ::app::Uno::Collections::IList__Uno_Graphics_PolygonFace__typeof()));

    ::uRegisterType(type);
    return type;
}

void IListExtensions__AddRange__Fuse_Behavior(::uStatic* __this, ::uObject* self, ::uObject* collection)
{
    if (collection == NULL)
    {
        U_THROW(::app::Uno::ArgumentNullException__New_5(NULL, ::uGetConstString("collection")));
    }

    for (::uObject* enum_123 = ::app::Uno::Collections::IEnumerable__Fuse_Behavior::GetEnumerator(::uPtr< ::uObject*>(collection)); ::app::Uno::Collections::IEnumerator::MoveNext(::uPtr< ::uObject*>(enum_123)); )
    {
        ::app::Fuse::Behavior* item = ::app::Uno::Collections::IEnumerator__Fuse_Behavior::Current(::uPtr< ::uObject*>(enum_123));
        ::app::Uno::Collections::ICollection__Fuse_Behavior::Add(::uPtr< ::uObject*>(self), item);
    }
}

void IListExtensions__AddRange__Uno_UX_Resource(::uStatic* __this, ::uObject* self, ::uObject* collection)
{
    if (collection == NULL)
    {
        U_THROW(::app::Uno::ArgumentNullException__New_5(NULL, ::uGetConstString("collection")));
    }

    for (::uObject* enum_123 = ::app::Uno::Collections::IEnumerable__Uno_UX_Resource::GetEnumerator(::uPtr< ::uObject*>(collection)); ::app::Uno::Collections::IEnumerator::MoveNext(::uPtr< ::uObject*>(enum_123)); )
    {
        ::app::Uno::UX::Resource* item = ::app::Uno::Collections::IEnumerator__Uno_UX_Resource::Current(::uPtr< ::uObject*>(enum_123));
        ::app::Uno::Collections::ICollection__Uno_UX_Resource::Add(::uPtr< ::uObject*>(self), item);
    }
}

::app::Fuse::Entities::Entity* IListExtensions__Last__Fuse_Entities_Entity(::uStatic* __this, ::uObject* self)
{
    int i = ::app::Uno::Collections::ICollection__Fuse_Entities_Entity::Count(::uPtr< ::uObject*>(self)) - 1;
    return ::app::Uno::Collections::IList__Fuse_Entities_Entity::Item(self, i);
}

::app::Uno::Data::Xml::XmlNodeHandle* IListExtensions__Last__Uno_Data_Xml_XmlNodeHandle(::uStatic* __this, ::uObject* self)
{
    int i = ::app::Uno::Collections::ICollection__Uno_Data_Xml_XmlNodeHandle::Count(::uPtr< ::uObject*>(self)) - 1;
    return ::app::Uno::Collections::IList__Uno_Data_Xml_XmlNodeHandle::Item(self, i);
}

::app::Fuse::Entities::Entity* IListExtensions__RemoveLast__Fuse_Entities_Entity(::uStatic* __this, ::uObject* self)
{
    int i = ::app::Uno::Collections::ICollection__Fuse_Entities_Entity::Count(::uPtr< ::uObject*>(self)) - 1;
    ::app::Fuse::Entities::Entity* t = ::app::Uno::Collections::IList__Fuse_Entities_Entity::Item(self, i);
    ::app::Uno::Collections::IList__Fuse_Entities_Entity::RemoveAt(self, i);
    return t;
}

::uObject* IListExtensions__RemoveLast__Fuse_IViewport(::uStatic* __this, ::uObject* self)
{
    int i = ::app::Uno::Collections::ICollection__Fuse_IViewport::Count(::uPtr< ::uObject*>(self)) - 1;
    ::uObject* t = ::app::Uno::Collections::IList__Fuse_IViewport::Item(self, i);
    ::app::Uno::Collections::IList__Fuse_IViewport::RemoveAt(self, i);
    return t;
}

::app::Fuse::Layouts::Column* IListExtensions__RemoveLast__Fuse_Layouts_Column(::uStatic* __this, ::uObject* self)
{
    int i = ::app::Uno::Collections::ICollection__Fuse_Layouts_Column::Count(::uPtr< ::uObject*>(self)) - 1;
    ::app::Fuse::Layouts::Column* t = ::app::Uno::Collections::IList__Fuse_Layouts_Column::Item(self, i);
    ::app::Uno::Collections::IList__Fuse_Layouts_Column::RemoveAt(self, i);
    return t;
}

::app::Fuse::Layouts::Row* IListExtensions__RemoveLast__Fuse_Layouts_Row(::uStatic* __this, ::uObject* self)
{
    int i = ::app::Uno::Collections::ICollection__Fuse_Layouts_Row::Count(::uPtr< ::uObject*>(self)) - 1;
    ::app::Fuse::Layouts::Row* t = ::app::Uno::Collections::IList__Fuse_Layouts_Row::Item(self, i);
    ::app::Uno::Collections::IList__Fuse_Layouts_Row::RemoveAt(self, i);
    return t;
}

::app::Fuse::RenderTargetEntry* IListExtensions__RemoveLast__Fuse_RenderTargetEntry(::uStatic* __this, ::uObject* self)
{
    int i = ::app::Uno::Collections::ICollection__Fuse_RenderTargetEntry::Count(::uPtr< ::uObject*>(self)) - 1;
    ::app::Fuse::RenderTargetEntry* t = ::app::Uno::Collections::IList__Fuse_RenderTargetEntry::Item(self, i);
    ::app::Uno::Collections::IList__Fuse_RenderTargetEntry::RemoveAt(self, i);
    return t;
}

::app::Uno::Int4 IListExtensions__RemoveLast__int4(::uStatic* __this, ::uObject* self)
{
    int i = ::app::Uno::Collections::ICollection__int4::Count(::uPtr< ::uObject*>(self)) - 1;
    ::app::Uno::Int4 t = ::app::Uno::Collections::IList__int4::Item(self, i);
    ::app::Uno::Collections::IList__int4::RemoveAt(self, i);
    return t;
}

int IListExtensions__RemoveLast__Uno_Graphics_PolygonFace(::uStatic* __this, ::uObject* self)
{
    int i = ::app::Uno::Collections::ICollection__Uno_Graphics_PolygonFace::Count(::uPtr< ::uObject*>(self)) - 1;
    int t = ::app::Uno::Collections::IList__Uno_Graphics_PolygonFace::Item(self, i);
    ::app::Uno::Collections::IList__Uno_Graphics_PolygonFace::RemoveAt(self, i);
    return t;
}

}}}
