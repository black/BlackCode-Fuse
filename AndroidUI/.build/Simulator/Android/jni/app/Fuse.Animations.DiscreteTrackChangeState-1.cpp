#include <app/Fuse.Animations.AnimationVariant.h>
#include <app/Fuse.Animations.Animator.h>
#include <app/Fuse.Animations.Change__bool.h>
#include <app/Fuse.Animations.Change__char.h>
#include <app/Fuse.Animations.Change__double.h>
#include <app/Fuse.Animations.Change__float.h>
#include <app/Fuse.Animations.Change__float2.h>
#include <app/Fuse.Animations.Change__float3.h>
#include <app/Fuse.Animations.Change__float4.h>
#include <app/Fuse.Animations.Change__Fuse_Animations_AnimationVariant.h>
#include <app/Fuse.Animations.Change__Fuse_Animations_Easing.h>
#include <app/Fuse.Animations.Change__Fuse_Animations_KeyframeInterpolation.h>
#include <app/Fuse.Animations.Change__Fuse_Animations_MixOp.h>
#include <app/Fuse.Animations.Change__Fuse_Drawing_BlendMode.h>
#include <app/Fuse.Animations.Change__Fuse_Drawing_Brush.h>
#include <app/Fuse.Animations.Change__Fuse_Drawing_DynamicBrush.h>
#include <app/Fuse.Animations.Change__Fuse_Drawing_GradientStop.h>
#include <app/Fuse.Animations.Change__Fuse_Drawing_LinearGradient.h>
#include <app/Fuse.Animations.Change__Fuse_Drawing_SolidColor.h>
#include <app/Fuse.Animations.Change__Fuse_Drawing_StaticBrush.h>
#include <app/Fuse.Animations.Change__Fuse_Elements_Alignment.h>
#include <app/Fuse.Animations.Change__Fuse_Elements_CachingMode.h>
#include <app/Fuse.Animations.Change__Fuse_Elements_Element.h>
#include <app/Fuse.Animations.Change__Fuse_Elements_HitTestMode.h>
#include <app/Fuse.Animations.Change__Fuse_Elements_SizeUnit.h>
#include <app/Fuse.Animations.Change__Fuse_Elements_StretchDirection.h>
#include <app/Fuse.Animations.Change__Fuse_Elements_StretchMode.h>
#include <app/Fuse.Animations.Change__Fuse_Elements_StretchSizing.h>
#include <app/Fuse.Animations.Change__Fuse_Elements_TextAlignment.h>
#include <app/Fuse.Animations.Change__Fuse_Elements_TextWrapping.h>
#include <app/Fuse.Animations.Change__Fuse_Elements_Visibility.h>
#include <app/Fuse.Animations.Change__Fuse_Font.h>
#include <app/Fuse.Animations.Change__Fuse_Gestures_Edge.h>
#include <app/Fuse.Animations.Change__Fuse_Gestures_ScrollDirections.h>
#include <app/Fuse.Animations.Change__Fuse_Layouts_Dock.h>
#include <app/Fuse.Animations.Change__Fuse_Layouts_FlowDirection.h>
#include <app/Fuse.Animations.Change__Fuse_Layouts_Metric.h>
#include <app/Fuse.Animations.Change__Fuse_Layouts_Orientation.h>
#include <app/Fuse.Animations.Change__Fuse_Navigation_NavigationDirection.h>
#include <app/Fuse.Animations.Change__Fuse_Navigation_NavigationEdge.h>
#include <app/Fuse.Animations.Change__Fuse_Navigation_NavigationGotoMode.h>
#include <app/Fuse.Animations.Change__Fuse_Navigation_SnapTo.h>
#include <app/Fuse.Animations.Change__Fuse_Navigation_SwipeDirection.h>
#include <app/Fuse.Animations.Change__Fuse_Navigation_SwipeEnds.h>
#include <app/Fuse.Animations.Change__Fuse_Node.h>
#include <app/Fuse.Animations.Change__Fuse_Resources_ImageSource.h>
#include <app/Fuse.Animations.Change__Fuse_Triggers_Actions_TriggerDirection.h>
#include <app/Fuse.Animations.Change__Fuse_Triggers_State.h>
#include <app/Fuse.Animations.Change__Fuse_Triggers_StateTransition.h>
#include <app/Fuse.Animations.Change__Fuse_Triggers_TriggerBypassMode.h>
#include <app/Fuse.Animations.Change__int.h>
#include <app/Fuse.Animations.Change__int2.h>
#include <app/Fuse.Animations.Change__int3.h>
#include <app/Fuse.Animations.Change__int4.h>
#include <app/Fuse.Animations.Change__long.h>
#include <app/Fuse.Animations.Change__object.h>
#include <app/Fuse.Animations.Change__short.h>
#include <app/Fuse.Animations.Change__string.h>
#include <app/Fuse.Animations.Change__Uno_EventArgs.h>
#include <app/Fuse.Animations.Change__Uno_Platform_iOS_StatusBarStyle.h>
#include <app/Fuse.Animations.Change__Uno_UX_FileSource.h>
#include <app/Fuse.Animations.CreateStateParams.h>
#include <app/Fuse.Animations.DiscreteTrackChangeState__bool.h>
#include <app/Fuse.Animations.DiscreteTrackChangeState__char.h>
#include <app/Fuse.Animations.DiscreteTrackChangeState__double.h>
#include <app/Fuse.Animations.DiscreteTrackChangeState__float.h>
#include <app/Fuse.Animations.DiscreteTrackChangeState__float2.h>
#include <app/Fuse.Animations.DiscreteTrackChangeState__float3.h>
#include <app/Fuse.Animations.DiscreteTrackChangeState__float4.h>
#include <app/Fuse.Animations.DiscreteTrackChangeState__Fuse_Animations_Anima-2b24ff25.h>
#include <app/Fuse.Animations.DiscreteTrackChangeState__Fuse_Animations_Easing.h>
#include <app/Fuse.Animations.DiscreteTrackChangeState__Fuse_Animations_Keyfr-951fd519.h>
#include <app/Fuse.Animations.DiscreteTrackChangeState__Fuse_Animations_MixOp.h>
#include <app/Fuse.Animations.DiscreteTrackChangeState__Fuse_Drawing_BlendMode.h>
#include <app/Fuse.Animations.DiscreteTrackChangeState__Fuse_Drawing_Brush.h>
#include <app/Fuse.Animations.DiscreteTrackChangeState__Fuse_Drawing_DynamicBrush.h>
#include <app/Fuse.Animations.DiscreteTrackChangeState__Fuse_Drawing_GradientStop.h>
#include <app/Fuse.Animations.DiscreteTrackChangeState__Fuse_Drawing_LinearGradient.h>
#include <app/Fuse.Animations.DiscreteTrackChangeState__Fuse_Drawing_SolidColor.h>
#include <app/Fuse.Animations.DiscreteTrackChangeState__Fuse_Drawing_StaticBrush.h>
#include <app/Fuse.Animations.DiscreteTrackChangeState__Fuse_Elements_Alignment.h>
#include <app/Fuse.Animations.DiscreteTrackChangeState__Fuse_Elements_CachingMode.h>
#include <app/Fuse.Animations.DiscreteTrackChangeState__Fuse_Elements_Element.h>
#include <app/Fuse.Animations.DiscreteTrackChangeState__Fuse_Elements_HitTestMode.h>
#include <app/Fuse.Animations.DiscreteTrackChangeState__Fuse_Elements_SizeUnit.h>
#include <app/Fuse.Animations.DiscreteTrackChangeState__Fuse_Elements_StretchDirection.h>
#include <app/Fuse.Animations.DiscreteTrackChangeState__Fuse_Elements_StretchMode.h>
#include <app/Fuse.Animations.DiscreteTrackChangeState__Fuse_Elements_StretchSizing.h>
#include <app/Fuse.Animations.DiscreteTrackChangeState__Fuse_Elements_TextAlignment.h>
#include <app/Fuse.Animations.DiscreteTrackChangeState__Fuse_Elements_TextWrapping.h>
#include <app/Fuse.Animations.DiscreteTrackChangeState__Fuse_Elements_Visibility.h>
#include <app/Fuse.Animations.DiscreteTrackChangeState__Fuse_Font.h>
#include <app/Fuse.Animations.DiscreteTrackChangeState__Fuse_Gestures_Edge.h>
#include <app/Fuse.Animations.DiscreteTrackChangeState__Fuse_Gestures_ScrollDirections.h>
#include <app/Fuse.Animations.DiscreteTrackChangeState__Fuse_Layouts_Dock.h>
#include <app/Fuse.Animations.DiscreteTrackChangeState__Fuse_Layouts_FlowDirection.h>
#include <app/Fuse.Animations.DiscreteTrackChangeState__Fuse_Layouts_Metric.h>
#include <app/Fuse.Animations.DiscreteTrackChangeState__Fuse_Layouts_Orientation.h>
#include <app/Fuse.Animations.DiscreteTrackChangeState__Fuse_Navigation_Navig-3f81e9c9.h>
#include <app/Fuse.Animations.DiscreteTrackChangeState__Fuse_Navigation_Navig-6127e0b4.h>
#include <app/Fuse.Animations.DiscreteTrackChangeState__Fuse_Navigation_NavigationEdge.h>
#include <app/Fuse.Animations.DiscreteTrackChangeState__Fuse_Navigation_SnapTo.h>
#include <app/Fuse.Animations.DiscreteTrackChangeState__Fuse_Navigation_SwipeDirection.h>
#include <app/Fuse.Animations.DiscreteTrackChangeState__Fuse_Navigation_SwipeEnds.h>
#include <app/Fuse.Animations.DiscreteTrackChangeState__Fuse_Node.h>
#include <app/Fuse.Animations.DiscreteTrackChangeState__Fuse_Resources_ImageSource.h>
#include <app/Fuse.Animations.DiscreteTrackChangeState__Fuse_Triggers_Actions-3afbf175.h>
#include <app/Fuse.Animations.DiscreteTrackChangeState__Fuse_Triggers_State.h>
#include <app/Fuse.Animations.DiscreteTrackChangeState__Fuse_Triggers_StateTransition.h>
#include <app/Fuse.Animations.DiscreteTrackChangeState__Fuse_Triggers_Trigger-fc3210ae.h>
#include <app/Fuse.Animations.DiscreteTrackChangeState__int.h>
#include <app/Fuse.Animations.DiscreteTrackChangeState__int2.h>
#include <app/Fuse.Animations.DiscreteTrackChangeState__int3.h>
#include <app/Fuse.Animations.DiscreteTrackChangeState__int4.h>
#include <app/Fuse.Animations.DiscreteTrackChangeState__long.h>
#include <app/Fuse.Animations.DiscreteTrackChangeState__object.h>
#include <app/Fuse.Animations.DiscreteTrackChangeState__short.h>
#include <app/Fuse.Animations.DiscreteTrackChangeState__string.h>
#include <app/Fuse.Animations.DiscreteTrackChangeState__Uno_EventArgs.h>
#include <app/Fuse.Animations.DiscreteTrackChangeState__Uno_Platform_iOS_Stat-4805b628.h>
#include <app/Fuse.Animations.DiscreteTrackChangeState__Uno_UX_FileSource.h>
#include <app/Fuse.Animations.Easing.h>
#include <app/Fuse.Animations.IMixer.h>
#include <app/Fuse.Animations.IMixerHandle__bool.h>
#include <app/Fuse.Animations.IMixerHandle__char.h>
#include <app/Fuse.Animations.IMixerHandle__double.h>
#include <app/Fuse.Animations.IMixerHandle__float.h>
#include <app/Fuse.Animations.IMixerHandle__float2.h>
#include <app/Fuse.Animations.IMixerHandle__float3.h>
#include <app/Fuse.Animations.IMixerHandle__float4.h>
#include <app/Fuse.Animations.IMixerHandle__Fuse_Animations_AnimationVariant.h>
#include <app/Fuse.Animations.IMixerHandle__Fuse_Animations_Easing.h>
#include <app/Fuse.Animations.IMixerHandle__Fuse_Animations_KeyframeInterpolation.h>
#include <app/Fuse.Animations.IMixerHandle__Fuse_Animations_MixOp.h>
#include <app/Fuse.Animations.IMixerHandle__Fuse_Drawing_BlendMode.h>
#include <app/Fuse.Animations.IMixerHandle__Fuse_Drawing_Brush.h>
#include <app/Fuse.Animations.IMixerHandle__Fuse_Drawing_DynamicBrush.h>
#include <app/Fuse.Animations.IMixerHandle__Fuse_Drawing_GradientStop.h>
#include <app/Fuse.Animations.IMixerHandle__Fuse_Drawing_LinearGradient.h>
#include <app/Fuse.Animations.IMixerHandle__Fuse_Drawing_SolidColor.h>
#include <app/Fuse.Animations.IMixerHandle__Fuse_Drawing_StaticBrush.h>
#include <app/Fuse.Animations.IMixerHandle__Fuse_Elements_Alignment.h>
#include <app/Fuse.Animations.IMixerHandle__Fuse_Elements_CachingMode.h>
#include <app/Fuse.Animations.IMixerHandle__Fuse_Elements_Element.h>
#include <app/Fuse.Animations.IMixerHandle__Fuse_Elements_HitTestMode.h>
#include <app/Fuse.Animations.IMixerHandle__Fuse_Elements_SizeUnit.h>
#include <app/Fuse.Animations.IMixerHandle__Fuse_Elements_StretchDirection.h>
#include <app/Fuse.Animations.IMixerHandle__Fuse_Elements_StretchMode.h>
#include <app/Fuse.Animations.IMixerHandle__Fuse_Elements_StretchSizing.h>
#include <app/Fuse.Animations.IMixerHandle__Fuse_Elements_TextAlignment.h>
#include <app/Fuse.Animations.IMixerHandle__Fuse_Elements_TextWrapping.h>
#include <app/Fuse.Animations.IMixerHandle__Fuse_Elements_Visibility.h>
#include <app/Fuse.Animations.IMixerHandle__Fuse_Font.h>
#include <app/Fuse.Animations.IMixerHandle__Fuse_Gestures_Edge.h>
#include <app/Fuse.Animations.IMixerHandle__Fuse_Gestures_ScrollDirections.h>
#include <app/Fuse.Animations.IMixerHandle__Fuse_Layouts_Dock.h>
#include <app/Fuse.Animations.IMixerHandle__Fuse_Layouts_FlowDirection.h>
#include <app/Fuse.Animations.IMixerHandle__Fuse_Layouts_Metric.h>
#include <app/Fuse.Animations.IMixerHandle__Fuse_Layouts_Orientation.h>
#include <app/Fuse.Animations.IMixerHandle__Fuse_Navigation_NavigationDirection.h>
#include <app/Fuse.Animations.IMixerHandle__Fuse_Navigation_NavigationEdge.h>
#include <app/Fuse.Animations.IMixerHandle__Fuse_Navigation_NavigationGotoMode.h>
#include <app/Fuse.Animations.IMixerHandle__Fuse_Navigation_SnapTo.h>
#include <app/Fuse.Animations.IMixerHandle__Fuse_Navigation_SwipeDirection.h>
#include <app/Fuse.Animations.IMixerHandle__Fuse_Navigation_SwipeEnds.h>
#include <app/Fuse.Animations.IMixerHandle__Fuse_Node.h>
#include <app/Fuse.Animations.IMixerHandle__Fuse_Resources_ImageSource.h>
#include <app/Fuse.Animations.IMixerHandle__Fuse_Triggers_Actions_TriggerDirection.h>
#include <app/Fuse.Animations.IMixerHandle__Fuse_Triggers_State.h>
#include <app/Fuse.Animations.IMixerHandle__Fuse_Triggers_StateTransition.h>
#include <app/Fuse.Animations.IMixerHandle__Fuse_Triggers_TriggerBypassMode.h>
#include <app/Fuse.Animations.IMixerHandle__int.h>
#include <app/Fuse.Animations.IMixerHandle__int2.h>
#include <app/Fuse.Animations.IMixerHandle__int3.h>
#include <app/Fuse.Animations.IMixerHandle__int4.h>
#include <app/Fuse.Animations.IMixerHandle__long.h>
#include <app/Fuse.Animations.IMixerHandle__object.h>
#include <app/Fuse.Animations.IMixerHandle__short.h>
#include <app/Fuse.Animations.IMixerHandle__string.h>
#include <app/Fuse.Animations.IMixerHandle__Uno_EventArgs.h>
#include <app/Fuse.Animations.IMixerHandle__Uno_Platform_iOS_StatusBarStyle.h>
#include <app/Fuse.Animations.IMixerHandle__Uno_UX_FileSource.h>
#include <app/Fuse.Animations.KeyframeInterpolation.h>
#include <app/Fuse.Animations.MixOp.h>
#include <app/Fuse.Animations.TrackAnimator.h>
#include <app/Fuse.Drawing.BlendMode.h>
#include <app/Fuse.Drawing.Brush.h>
#include <app/Fuse.Drawing.DynamicBrush.h>
#include <app/Fuse.Drawing.GradientStop.h>
#include <app/Fuse.Drawing.LinearGradient.h>
#include <app/Fuse.Drawing.SolidColor.h>
#include <app/Fuse.Drawing.StaticBrush.h>
#include <app/Fuse.Elements.Alignment.h>
#include <app/Fuse.Elements.CachingMode.h>
#include <app/Fuse.Elements.Element.h>
#include <app/Fuse.Elements.HitTestMode.h>
#include <app/Fuse.Elements.SizeUnit.h>
#include <app/Fuse.Elements.StretchDirection.h>
#include <app/Fuse.Elements.StretchMode.h>
#include <app/Fuse.Elements.StretchSizing.h>
#include <app/Fuse.Elements.TextAlignment.h>
#include <app/Fuse.Elements.TextWrapping.h>
#include <app/Fuse.Elements.Visibility.h>
#include <app/Fuse.Font.h>
#include <app/Fuse.Gestures.Edge.h>
#include <app/Fuse.Gestures.ScrollDirections.h>
#include <app/Fuse.Layouts.Dock.h>
#include <app/Fuse.Layouts.FlowDirection.h>
#include <app/Fuse.Layouts.Metric.h>
#include <app/Fuse.Layouts.Orientation.h>
#include <app/Fuse.Navigation.NavigationDirection.h>
#include <app/Fuse.Navigation.NavigationEdge.h>
#include <app/Fuse.Navigation.NavigationGotoMode.h>
#include <app/Fuse.Navigation.SnapTo.h>
#include <app/Fuse.Navigation.SwipeDirection.h>
#include <app/Fuse.Navigation.SwipeEnds.h>
#include <app/Fuse.Node.h>
#include <app/Fuse.Resources.ImageSource.h>
#include <app/Fuse.Triggers.Actions.TriggerDirection.h>
#include <app/Fuse.Triggers.State.h>
#include <app/Fuse.Triggers.StateTransition.h>
#include <app/Fuse.Triggers.TriggerBypassMode.h>
#include <app/Uno.Bool.h>
#include <app/Uno.Char.h>
#include <app/Uno.Diagnostics.Debug.h>
#include <app/Uno.Diagnostics.DebugMessageType.h>
#include <app/Uno.Double.h>
#include <app/Uno.EventArgs.h>
#include <app/Uno.Float.h>
#include <app/Uno.Float2.h>
#include <app/Uno.Float3.h>
#include <app/Uno.Float4.h>
#include <app/Uno.Int.h>
#include <app/Uno.Int2.h>
#include <app/Uno.Int3.h>
#include <app/Uno.Int4.h>
#include <app/Uno.Long.h>
#include <app/Uno.Object.h>
#include <app/Uno.Platform.iOS.StatusBarStyle.h>
#include <app/Uno.Short.h>
#include <app/Uno.String.h>
#include <app/Uno.UX.FileSource.h>
#include <app/Uno.UX.Property__bool.h>
#include <app/Uno.UX.Property__char.h>
#include <app/Uno.UX.Property__double.h>
#include <app/Uno.UX.Property__float.h>
#include <app/Uno.UX.Property__float2.h>
#include <app/Uno.UX.Property__float3.h>
#include <app/Uno.UX.Property__float4.h>
#include <app/Uno.UX.Property__Fuse_Animations_AnimationVariant.h>
#include <app/Uno.UX.Property__Fuse_Animations_Easing.h>
#include <app/Uno.UX.Property__Fuse_Animations_KeyframeInterpolation.h>
#include <app/Uno.UX.Property__Fuse_Animations_MixOp.h>
#include <app/Uno.UX.Property__Fuse_Drawing_BlendMode.h>
#include <app/Uno.UX.Property__Fuse_Drawing_Brush.h>
#include <app/Uno.UX.Property__Fuse_Drawing_DynamicBrush.h>
#include <app/Uno.UX.Property__Fuse_Drawing_GradientStop.h>
#include <app/Uno.UX.Property__Fuse_Drawing_LinearGradient.h>
#include <app/Uno.UX.Property__Fuse_Drawing_SolidColor.h>
#include <app/Uno.UX.Property__Fuse_Drawing_StaticBrush.h>
#include <app/Uno.UX.Property__Fuse_Elements_Alignment.h>
#include <app/Uno.UX.Property__Fuse_Elements_CachingMode.h>
#include <app/Uno.UX.Property__Fuse_Elements_Element.h>
#include <app/Uno.UX.Property__Fuse_Elements_HitTestMode.h>
#include <app/Uno.UX.Property__Fuse_Elements_SizeUnit.h>
#include <app/Uno.UX.Property__Fuse_Elements_StretchDirection.h>
#include <app/Uno.UX.Property__Fuse_Elements_StretchMode.h>
#include <app/Uno.UX.Property__Fuse_Elements_StretchSizing.h>
#include <app/Uno.UX.Property__Fuse_Elements_TextAlignment.h>
#include <app/Uno.UX.Property__Fuse_Elements_TextWrapping.h>
#include <app/Uno.UX.Property__Fuse_Elements_Visibility.h>
#include <app/Uno.UX.Property__Fuse_Font.h>
#include <app/Uno.UX.Property__Fuse_Gestures_Edge.h>
#include <app/Uno.UX.Property__Fuse_Gestures_ScrollDirections.h>
#include <app/Uno.UX.Property__Fuse_Layouts_Dock.h>
#include <app/Uno.UX.Property__Fuse_Layouts_FlowDirection.h>
#include <app/Uno.UX.Property__Fuse_Layouts_Metric.h>
#include <app/Uno.UX.Property__Fuse_Layouts_Orientation.h>
#include <app/Uno.UX.Property__Fuse_Navigation_NavigationDirection.h>
#include <app/Uno.UX.Property__Fuse_Navigation_NavigationEdge.h>
#include <app/Uno.UX.Property__Fuse_Navigation_NavigationGotoMode.h>
#include <app/Uno.UX.Property__Fuse_Navigation_SnapTo.h>
#include <app/Uno.UX.Property__Fuse_Navigation_SwipeDirection.h>
#include <app/Uno.UX.Property__Fuse_Navigation_SwipeEnds.h>
#include <app/Uno.UX.Property__Fuse_Node.h>
#include <app/Uno.UX.Property__Fuse_Resources_ImageSource.h>
#include <app/Uno.UX.Property__Fuse_Triggers_Actions_TriggerDirection.h>
#include <app/Uno.UX.Property__Fuse_Triggers_State.h>
#include <app/Uno.UX.Property__Fuse_Triggers_StateTransition.h>
#include <app/Uno.UX.Property__Fuse_Triggers_TriggerBypassMode.h>
#include <app/Uno.UX.Property__int.h>
#include <app/Uno.UX.Property__int2.h>
#include <app/Uno.UX.Property__int3.h>
#include <app/Uno.UX.Property__int4.h>
#include <app/Uno.UX.Property__long.h>
#include <app/Uno.UX.Property__object.h>
#include <app/Uno.UX.Property__short.h>
#include <app/Uno.UX.Property__string.h>
#include <app/Uno.UX.Property__Uno_EventArgs.h>
#include <app/Uno.UX.Property__Uno_Platform_iOS_StatusBarStyle.h>
#include <app/Uno.UX.Property__Uno_UX_FileSource.h>

namespace app {
namespace Fuse {
namespace Animations {

// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Animations\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

DiscreteTrackChangeState__bool__uType* DiscreteTrackChangeState__bool__typeof()
{
    static ::uStaticStrong<DiscreteTrackChangeState__bool__uType*> type;
    if (type != NULL) return type;

    type = (DiscreteTrackChangeState__bool__uType*)::uAllocClassType(sizeof(DiscreteTrackChangeState__bool__uType), "Fuse.Animations.DiscreteTrackChangeState<bool>", false, 0, 2, 0);

    type->SetBaseType(::app::Fuse::Animations::TrackAnimatorState__typeof());
    type->__fp_Disable = (void(*)(::app::Fuse::Animations::AnimatorState*))DiscreteTrackChangeState__bool__Disable;
    type->__fp_SeekObjectValue = (void(*)(::app::Fuse::Animations::TrackAnimatorState*, ::uObject*, float))DiscreteTrackChangeState__bool__SeekObjectValue;

    type->SetStrongRefs(
        "Animator", offsetof(DiscreteTrackChangeState__bool, Animator_1),
        "mixHandle", offsetof(DiscreteTrackChangeState__bool, mixHandle));

    return type;
}

void DiscreteTrackChangeState__bool___ObjInit_2(DiscreteTrackChangeState__bool* __this, ::app::Fuse::Animations::Change__bool* animator, ::app::Fuse::Animations::CreateStateParams* p)
{
    ::app::Fuse::Animations::TrackAnimatorState___ObjInit_1(__this, (::app::Fuse::Animations::TrackAnimator*)animator, p, NULL);
    __this->Animator_1 = animator;
    __this->mixHandle = ::app::Fuse::Animations::IMixer::Register__bool(::uPtr< ::uObject*>(::uPtr< ::app::Fuse::Animations::Change__bool*>(__this->Animator_1)->Mixer), ::uPtr< ::app::Fuse::Animations::Change__bool*>(__this->Animator_1)->Target(), ::uPtr< ::app::Fuse::Animations::Change__bool*>(__this->Animator_1)->MixOp());
}

void DiscreteTrackChangeState__bool__Disable(DiscreteTrackChangeState__bool* __this)
{
    if (__this->mixHandle == NULL)
    {
        return;
    }

    ::app::Fuse::Animations::IMixerHandle__bool::Unregister(::uPtr< ::uObject*>(__this->mixHandle));
    __this->mixHandle = NULL;
}

DiscreteTrackChangeState__bool* DiscreteTrackChangeState__bool__New_1(::uStatic* __this, ::app::Fuse::Animations::Change__bool* animator, ::app::Fuse::Animations::CreateStateParams* p)
{
    DiscreteTrackChangeState__bool* inst = (DiscreteTrackChangeState__bool*)::uAllocObject(sizeof(DiscreteTrackChangeState__bool), DiscreteTrackChangeState__bool__typeof());
    inst->_ObjInit_2(animator, p);
    return inst;
}

void DiscreteTrackChangeState__bool__SeekObjectValue(DiscreteTrackChangeState__bool* __this, ::uObject* value, float strength)
{
    if (__this->mixHandle == NULL)
    {
        ::app::Uno::Diagnostics::Debug__Log_5(NULL, ::uGetConstString("Invalid Seek"), 1, ::uGetConstString("C:\\ProgramData\\Uno\\Packages\\Fuse.Animations\\0.11.3\\$.uno"), 420);
        return;
    }

    if ((value != NULL) && ::uIs(value, ::app::Uno::Bool__typeof()))
    {
        ::app::Fuse::Animations::IMixerHandle__bool::Set(::uPtr< ::uObject*>(__this->mixHandle), ::uUnbox< bool>(::app::Uno::Bool__typeof(), value), strength);
    }
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Animations\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

DiscreteTrackChangeState__char__uType* DiscreteTrackChangeState__char__typeof()
{
    static ::uStaticStrong<DiscreteTrackChangeState__char__uType*> type;
    if (type != NULL) return type;

    type = (DiscreteTrackChangeState__char__uType*)::uAllocClassType(sizeof(DiscreteTrackChangeState__char__uType), "Fuse.Animations.DiscreteTrackChangeState<char>", false, 0, 2, 0);

    type->SetBaseType(::app::Fuse::Animations::TrackAnimatorState__typeof());
    type->__fp_Disable = (void(*)(::app::Fuse::Animations::AnimatorState*))DiscreteTrackChangeState__char__Disable;
    type->__fp_SeekObjectValue = (void(*)(::app::Fuse::Animations::TrackAnimatorState*, ::uObject*, float))DiscreteTrackChangeState__char__SeekObjectValue;

    type->SetStrongRefs(
        "Animator", offsetof(DiscreteTrackChangeState__char, Animator_1),
        "mixHandle", offsetof(DiscreteTrackChangeState__char, mixHandle));

    return type;
}

void DiscreteTrackChangeState__char___ObjInit_2(DiscreteTrackChangeState__char* __this, ::app::Fuse::Animations::Change__char* animator, ::app::Fuse::Animations::CreateStateParams* p)
{
    ::app::Fuse::Animations::TrackAnimatorState___ObjInit_1(__this, (::app::Fuse::Animations::TrackAnimator*)animator, p, NULL);
    __this->Animator_1 = animator;
    __this->mixHandle = ::app::Fuse::Animations::IMixer::Register__char(::uPtr< ::uObject*>(::uPtr< ::app::Fuse::Animations::Change__char*>(__this->Animator_1)->Mixer), ::uPtr< ::app::Fuse::Animations::Change__char*>(__this->Animator_1)->Target(), ::uPtr< ::app::Fuse::Animations::Change__char*>(__this->Animator_1)->MixOp());
}

void DiscreteTrackChangeState__char__Disable(DiscreteTrackChangeState__char* __this)
{
    if (__this->mixHandle == NULL)
    {
        return;
    }

    ::app::Fuse::Animations::IMixerHandle__char::Unregister(::uPtr< ::uObject*>(__this->mixHandle));
    __this->mixHandle = NULL;
}

DiscreteTrackChangeState__char* DiscreteTrackChangeState__char__New_1(::uStatic* __this, ::app::Fuse::Animations::Change__char* animator, ::app::Fuse::Animations::CreateStateParams* p)
{
    DiscreteTrackChangeState__char* inst = (DiscreteTrackChangeState__char*)::uAllocObject(sizeof(DiscreteTrackChangeState__char), DiscreteTrackChangeState__char__typeof());
    inst->_ObjInit_2(animator, p);
    return inst;
}

void DiscreteTrackChangeState__char__SeekObjectValue(DiscreteTrackChangeState__char* __this, ::uObject* value, float strength)
{
    if (__this->mixHandle == NULL)
    {
        ::app::Uno::Diagnostics::Debug__Log_5(NULL, ::uGetConstString("Invalid Seek"), 1, ::uGetConstString("C:\\ProgramData\\Uno\\Packages\\Fuse.Animations\\0.11.3\\$.uno"), 420);
        return;
    }

    if ((value != NULL) && ::uIs(value, ::app::Uno::Char__typeof()))
    {
        ::app::Fuse::Animations::IMixerHandle__char::Set(::uPtr< ::uObject*>(__this->mixHandle), ::uUnbox< ::uChar>(::app::Uno::Char__typeof(), value), strength);
    }
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Animations\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

DiscreteTrackChangeState__double__uType* DiscreteTrackChangeState__double__typeof()
{
    static ::uStaticStrong<DiscreteTrackChangeState__double__uType*> type;
    if (type != NULL) return type;

    type = (DiscreteTrackChangeState__double__uType*)::uAllocClassType(sizeof(DiscreteTrackChangeState__double__uType), "Fuse.Animations.DiscreteTrackChangeState<double>", false, 0, 2, 0);

    type->SetBaseType(::app::Fuse::Animations::TrackAnimatorState__typeof());
    type->__fp_Disable = (void(*)(::app::Fuse::Animations::AnimatorState*))DiscreteTrackChangeState__double__Disable;
    type->__fp_SeekObjectValue = (void(*)(::app::Fuse::Animations::TrackAnimatorState*, ::uObject*, float))DiscreteTrackChangeState__double__SeekObjectValue;

    type->SetStrongRefs(
        "Animator", offsetof(DiscreteTrackChangeState__double, Animator_1),
        "mixHandle", offsetof(DiscreteTrackChangeState__double, mixHandle));

    return type;
}

void DiscreteTrackChangeState__double___ObjInit_2(DiscreteTrackChangeState__double* __this, ::app::Fuse::Animations::Change__double* animator, ::app::Fuse::Animations::CreateStateParams* p)
{
    ::app::Fuse::Animations::TrackAnimatorState___ObjInit_1(__this, (::app::Fuse::Animations::TrackAnimator*)animator, p, NULL);
    __this->Animator_1 = animator;
    __this->mixHandle = ::app::Fuse::Animations::IMixer::Register__double(::uPtr< ::uObject*>(::uPtr< ::app::Fuse::Animations::Change__double*>(__this->Animator_1)->Mixer), ::uPtr< ::app::Fuse::Animations::Change__double*>(__this->Animator_1)->Target(), ::uPtr< ::app::Fuse::Animations::Change__double*>(__this->Animator_1)->MixOp());
}

void DiscreteTrackChangeState__double__Disable(DiscreteTrackChangeState__double* __this)
{
    if (__this->mixHandle == NULL)
    {
        return;
    }

    ::app::Fuse::Animations::IMixerHandle__double::Unregister(::uPtr< ::uObject*>(__this->mixHandle));
    __this->mixHandle = NULL;
}

DiscreteTrackChangeState__double* DiscreteTrackChangeState__double__New_1(::uStatic* __this, ::app::Fuse::Animations::Change__double* animator, ::app::Fuse::Animations::CreateStateParams* p)
{
    DiscreteTrackChangeState__double* inst = (DiscreteTrackChangeState__double*)::uAllocObject(sizeof(DiscreteTrackChangeState__double), DiscreteTrackChangeState__double__typeof());
    inst->_ObjInit_2(animator, p);
    return inst;
}

void DiscreteTrackChangeState__double__SeekObjectValue(DiscreteTrackChangeState__double* __this, ::uObject* value, float strength)
{
    if (__this->mixHandle == NULL)
    {
        ::app::Uno::Diagnostics::Debug__Log_5(NULL, ::uGetConstString("Invalid Seek"), 1, ::uGetConstString("C:\\ProgramData\\Uno\\Packages\\Fuse.Animations\\0.11.3\\$.uno"), 420);
        return;
    }

    if ((value != NULL) && ::uIs(value, ::app::Uno::Double__typeof()))
    {
        ::app::Fuse::Animations::IMixerHandle__double::Set(::uPtr< ::uObject*>(__this->mixHandle), ::uUnbox< double>(::app::Uno::Double__typeof(), value), strength);
    }
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Animations\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

DiscreteTrackChangeState__float__uType* DiscreteTrackChangeState__float__typeof()
{
    static ::uStaticStrong<DiscreteTrackChangeState__float__uType*> type;
    if (type != NULL) return type;

    type = (DiscreteTrackChangeState__float__uType*)::uAllocClassType(sizeof(DiscreteTrackChangeState__float__uType), "Fuse.Animations.DiscreteTrackChangeState<float>", false, 0, 2, 0);

    type->SetBaseType(::app::Fuse::Animations::TrackAnimatorState__typeof());
    type->__fp_Disable = (void(*)(::app::Fuse::Animations::AnimatorState*))DiscreteTrackChangeState__float__Disable;
    type->__fp_SeekObjectValue = (void(*)(::app::Fuse::Animations::TrackAnimatorState*, ::uObject*, float))DiscreteTrackChangeState__float__SeekObjectValue;

    type->SetStrongRefs(
        "Animator", offsetof(DiscreteTrackChangeState__float, Animator_1),
        "mixHandle", offsetof(DiscreteTrackChangeState__float, mixHandle));

    return type;
}

void DiscreteTrackChangeState__float___ObjInit_2(DiscreteTrackChangeState__float* __this, ::app::Fuse::Animations::Change__float* animator, ::app::Fuse::Animations::CreateStateParams* p)
{
    ::app::Fuse::Animations::TrackAnimatorState___ObjInit_1(__this, (::app::Fuse::Animations::TrackAnimator*)animator, p, NULL);
    __this->Animator_1 = animator;
    __this->mixHandle = ::app::Fuse::Animations::IMixer::Register__float(::uPtr< ::uObject*>(::uPtr< ::app::Fuse::Animations::Change__float*>(__this->Animator_1)->Mixer), ::uPtr< ::app::Fuse::Animations::Change__float*>(__this->Animator_1)->Target(), ::uPtr< ::app::Fuse::Animations::Change__float*>(__this->Animator_1)->MixOp());
}

void DiscreteTrackChangeState__float__Disable(DiscreteTrackChangeState__float* __this)
{
    if (__this->mixHandle == NULL)
    {
        return;
    }

    ::app::Fuse::Animations::IMixerHandle__float::Unregister(::uPtr< ::uObject*>(__this->mixHandle));
    __this->mixHandle = NULL;
}

DiscreteTrackChangeState__float* DiscreteTrackChangeState__float__New_1(::uStatic* __this, ::app::Fuse::Animations::Change__float* animator, ::app::Fuse::Animations::CreateStateParams* p)
{
    DiscreteTrackChangeState__float* inst = (DiscreteTrackChangeState__float*)::uAllocObject(sizeof(DiscreteTrackChangeState__float), DiscreteTrackChangeState__float__typeof());
    inst->_ObjInit_2(animator, p);
    return inst;
}

void DiscreteTrackChangeState__float__SeekObjectValue(DiscreteTrackChangeState__float* __this, ::uObject* value, float strength)
{
    if (__this->mixHandle == NULL)
    {
        ::app::Uno::Diagnostics::Debug__Log_5(NULL, ::uGetConstString("Invalid Seek"), 1, ::uGetConstString("C:\\ProgramData\\Uno\\Packages\\Fuse.Animations\\0.11.3\\$.uno"), 420);
        return;
    }

    if ((value != NULL) && ::uIs(value, ::app::Uno::Float__typeof()))
    {
        ::app::Fuse::Animations::IMixerHandle__float::Set(::uPtr< ::uObject*>(__this->mixHandle), ::uUnbox< float>(::app::Uno::Float__typeof(), value), strength);
    }
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Animations\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

DiscreteTrackChangeState__float2__uType* DiscreteTrackChangeState__float2__typeof()
{
    static ::uStaticStrong<DiscreteTrackChangeState__float2__uType*> type;
    if (type != NULL) return type;

    type = (DiscreteTrackChangeState__float2__uType*)::uAllocClassType(sizeof(DiscreteTrackChangeState__float2__uType), "Fuse.Animations.DiscreteTrackChangeState<float2>", false, 0, 2, 0);

    type->SetBaseType(::app::Fuse::Animations::TrackAnimatorState__typeof());
    type->__fp_Disable = (void(*)(::app::Fuse::Animations::AnimatorState*))DiscreteTrackChangeState__float2__Disable;
    type->__fp_SeekObjectValue = (void(*)(::app::Fuse::Animations::TrackAnimatorState*, ::uObject*, float))DiscreteTrackChangeState__float2__SeekObjectValue;

    type->SetStrongRefs(
        "Animator", offsetof(DiscreteTrackChangeState__float2, Animator_1),
        "mixHandle", offsetof(DiscreteTrackChangeState__float2, mixHandle));

    return type;
}

void DiscreteTrackChangeState__float2___ObjInit_2(DiscreteTrackChangeState__float2* __this, ::app::Fuse::Animations::Change__float2* animator, ::app::Fuse::Animations::CreateStateParams* p)
{
    ::app::Fuse::Animations::TrackAnimatorState___ObjInit_1(__this, (::app::Fuse::Animations::TrackAnimator*)animator, p, NULL);
    __this->Animator_1 = animator;
    __this->mixHandle = ::app::Fuse::Animations::IMixer::Register__float2(::uPtr< ::uObject*>(::uPtr< ::app::Fuse::Animations::Change__float2*>(__this->Animator_1)->Mixer), ::uPtr< ::app::Fuse::Animations::Change__float2*>(__this->Animator_1)->Target(), ::uPtr< ::app::Fuse::Animations::Change__float2*>(__this->Animator_1)->MixOp());
}

void DiscreteTrackChangeState__float2__Disable(DiscreteTrackChangeState__float2* __this)
{
    if (__this->mixHandle == NULL)
    {
        return;
    }

    ::app::Fuse::Animations::IMixerHandle__float2::Unregister(::uPtr< ::uObject*>(__this->mixHandle));
    __this->mixHandle = NULL;
}

DiscreteTrackChangeState__float2* DiscreteTrackChangeState__float2__New_1(::uStatic* __this, ::app::Fuse::Animations::Change__float2* animator, ::app::Fuse::Animations::CreateStateParams* p)
{
    DiscreteTrackChangeState__float2* inst = (DiscreteTrackChangeState__float2*)::uAllocObject(sizeof(DiscreteTrackChangeState__float2), DiscreteTrackChangeState__float2__typeof());
    inst->_ObjInit_2(animator, p);
    return inst;
}

void DiscreteTrackChangeState__float2__SeekObjectValue(DiscreteTrackChangeState__float2* __this, ::uObject* value, float strength)
{
    if (__this->mixHandle == NULL)
    {
        ::app::Uno::Diagnostics::Debug__Log_5(NULL, ::uGetConstString("Invalid Seek"), 1, ::uGetConstString("C:\\ProgramData\\Uno\\Packages\\Fuse.Animations\\0.11.3\\$.uno"), 420);
        return;
    }

    if ((value != NULL) && ::uIs(value, ::app::Uno::Float2__typeof()))
    {
        ::app::Fuse::Animations::IMixerHandle__float2::Set(::uPtr< ::uObject*>(__this->mixHandle), ::uUnbox< ::app::Uno::Float2>(::app::Uno::Float2__typeof(), value), strength);
    }
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Animations\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

DiscreteTrackChangeState__float3__uType* DiscreteTrackChangeState__float3__typeof()
{
    static ::uStaticStrong<DiscreteTrackChangeState__float3__uType*> type;
    if (type != NULL) return type;

    type = (DiscreteTrackChangeState__float3__uType*)::uAllocClassType(sizeof(DiscreteTrackChangeState__float3__uType), "Fuse.Animations.DiscreteTrackChangeState<float3>", false, 0, 2, 0);

    type->SetBaseType(::app::Fuse::Animations::TrackAnimatorState__typeof());
    type->__fp_Disable = (void(*)(::app::Fuse::Animations::AnimatorState*))DiscreteTrackChangeState__float3__Disable;
    type->__fp_SeekObjectValue = (void(*)(::app::Fuse::Animations::TrackAnimatorState*, ::uObject*, float))DiscreteTrackChangeState__float3__SeekObjectValue;

    type->SetStrongRefs(
        "Animator", offsetof(DiscreteTrackChangeState__float3, Animator_1),
        "mixHandle", offsetof(DiscreteTrackChangeState__float3, mixHandle));

    return type;
}

void DiscreteTrackChangeState__float3___ObjInit_2(DiscreteTrackChangeState__float3* __this, ::app::Fuse::Animations::Change__float3* animator, ::app::Fuse::Animations::CreateStateParams* p)
{
    ::app::Fuse::Animations::TrackAnimatorState___ObjInit_1(__this, (::app::Fuse::Animations::TrackAnimator*)animator, p, NULL);
    __this->Animator_1 = animator;
    __this->mixHandle = ::app::Fuse::Animations::IMixer::Register__float3(::uPtr< ::uObject*>(::uPtr< ::app::Fuse::Animations::Change__float3*>(__this->Animator_1)->Mixer), ::uPtr< ::app::Fuse::Animations::Change__float3*>(__this->Animator_1)->Target(), ::uPtr< ::app::Fuse::Animations::Change__float3*>(__this->Animator_1)->MixOp());
}

void DiscreteTrackChangeState__float3__Disable(DiscreteTrackChangeState__float3* __this)
{
    if (__this->mixHandle == NULL)
    {
        return;
    }

    ::app::Fuse::Animations::IMixerHandle__float3::Unregister(::uPtr< ::uObject*>(__this->mixHandle));
    __this->mixHandle = NULL;
}

DiscreteTrackChangeState__float3* DiscreteTrackChangeState__float3__New_1(::uStatic* __this, ::app::Fuse::Animations::Change__float3* animator, ::app::Fuse::Animations::CreateStateParams* p)
{
    DiscreteTrackChangeState__float3* inst = (DiscreteTrackChangeState__float3*)::uAllocObject(sizeof(DiscreteTrackChangeState__float3), DiscreteTrackChangeState__float3__typeof());
    inst->_ObjInit_2(animator, p);
    return inst;
}

void DiscreteTrackChangeState__float3__SeekObjectValue(DiscreteTrackChangeState__float3* __this, ::uObject* value, float strength)
{
    if (__this->mixHandle == NULL)
    {
        ::app::Uno::Diagnostics::Debug__Log_5(NULL, ::uGetConstString("Invalid Seek"), 1, ::uGetConstString("C:\\ProgramData\\Uno\\Packages\\Fuse.Animations\\0.11.3\\$.uno"), 420);
        return;
    }

    if ((value != NULL) && ::uIs(value, ::app::Uno::Float3__typeof()))
    {
        ::app::Fuse::Animations::IMixerHandle__float3::Set(::uPtr< ::uObject*>(__this->mixHandle), ::uUnbox< ::app::Uno::Float3>(::app::Uno::Float3__typeof(), value), strength);
    }
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Animations\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

DiscreteTrackChangeState__float4__uType* DiscreteTrackChangeState__float4__typeof()
{
    static ::uStaticStrong<DiscreteTrackChangeState__float4__uType*> type;
    if (type != NULL) return type;

    type = (DiscreteTrackChangeState__float4__uType*)::uAllocClassType(sizeof(DiscreteTrackChangeState__float4__uType), "Fuse.Animations.DiscreteTrackChangeState<float4>", false, 0, 2, 0);

    type->SetBaseType(::app::Fuse::Animations::TrackAnimatorState__typeof());
    type->__fp_Disable = (void(*)(::app::Fuse::Animations::AnimatorState*))DiscreteTrackChangeState__float4__Disable;
    type->__fp_SeekObjectValue = (void(*)(::app::Fuse::Animations::TrackAnimatorState*, ::uObject*, float))DiscreteTrackChangeState__float4__SeekObjectValue;

    type->SetStrongRefs(
        "Animator", offsetof(DiscreteTrackChangeState__float4, Animator_1),
        "mixHandle", offsetof(DiscreteTrackChangeState__float4, mixHandle));

    return type;
}

void DiscreteTrackChangeState__float4___ObjInit_2(DiscreteTrackChangeState__float4* __this, ::app::Fuse::Animations::Change__float4* animator, ::app::Fuse::Animations::CreateStateParams* p)
{
    ::app::Fuse::Animations::TrackAnimatorState___ObjInit_1(__this, (::app::Fuse::Animations::TrackAnimator*)animator, p, NULL);
    __this->Animator_1 = animator;
    __this->mixHandle = ::app::Fuse::Animations::IMixer::Register__float4(::uPtr< ::uObject*>(::uPtr< ::app::Fuse::Animations::Change__float4*>(__this->Animator_1)->Mixer), ::uPtr< ::app::Fuse::Animations::Change__float4*>(__this->Animator_1)->Target(), ::uPtr< ::app::Fuse::Animations::Change__float4*>(__this->Animator_1)->MixOp());
}

void DiscreteTrackChangeState__float4__Disable(DiscreteTrackChangeState__float4* __this)
{
    if (__this->mixHandle == NULL)
    {
        return;
    }

    ::app::Fuse::Animations::IMixerHandle__float4::Unregister(::uPtr< ::uObject*>(__this->mixHandle));
    __this->mixHandle = NULL;
}

DiscreteTrackChangeState__float4* DiscreteTrackChangeState__float4__New_1(::uStatic* __this, ::app::Fuse::Animations::Change__float4* animator, ::app::Fuse::Animations::CreateStateParams* p)
{
    DiscreteTrackChangeState__float4* inst = (DiscreteTrackChangeState__float4*)::uAllocObject(sizeof(DiscreteTrackChangeState__float4), DiscreteTrackChangeState__float4__typeof());
    inst->_ObjInit_2(animator, p);
    return inst;
}

void DiscreteTrackChangeState__float4__SeekObjectValue(DiscreteTrackChangeState__float4* __this, ::uObject* value, float strength)
{
    if (__this->mixHandle == NULL)
    {
        ::app::Uno::Diagnostics::Debug__Log_5(NULL, ::uGetConstString("Invalid Seek"), 1, ::uGetConstString("C:\\ProgramData\\Uno\\Packages\\Fuse.Animations\\0.11.3\\$.uno"), 420);
        return;
    }

    if ((value != NULL) && ::uIs(value, ::app::Uno::Float4__typeof()))
    {
        ::app::Fuse::Animations::IMixerHandle__float4::Set(::uPtr< ::uObject*>(__this->mixHandle), ::uUnbox< ::app::Uno::Float4>(::app::Uno::Float4__typeof(), value), strength);
    }
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Animations\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

DiscreteTrackChangeState__Fuse_Animations_AnimationVariant__uType* DiscreteTrackChangeState__Fuse_Animations_AnimationVariant__typeof()
{
    static ::uStaticStrong<DiscreteTrackChangeState__Fuse_Animations_AnimationVariant__uType*> type;
    if (type != NULL) return type;

    type = (DiscreteTrackChangeState__Fuse_Animations_AnimationVariant__uType*)::uAllocClassType(sizeof(DiscreteTrackChangeState__Fuse_Animations_AnimationVariant__uType), "Fuse.Animations.DiscreteTrackChangeState<Fuse.Animations.AnimationVariant>", false, 0, 2, 0);

    type->SetBaseType(::app::Fuse::Animations::TrackAnimatorState__typeof());
    type->__fp_Disable = (void(*)(::app::Fuse::Animations::AnimatorState*))DiscreteTrackChangeState__Fuse_Animations_AnimationVariant__Disable;
    type->__fp_SeekObjectValue = (void(*)(::app::Fuse::Animations::TrackAnimatorState*, ::uObject*, float))DiscreteTrackChangeState__Fuse_Animations_AnimationVariant__SeekObjectValue;

    type->SetStrongRefs(
        "Animator", offsetof(DiscreteTrackChangeState__Fuse_Animations_AnimationVariant, Animator_1),
        "mixHandle", offsetof(DiscreteTrackChangeState__Fuse_Animations_AnimationVariant, mixHandle));

    return type;
}

void DiscreteTrackChangeState__Fuse_Animations_AnimationVariant___ObjInit_2(DiscreteTrackChangeState__Fuse_Animations_AnimationVariant* __this, ::app::Fuse::Animations::Change__Fuse_Animations_AnimationVariant* animator, ::app::Fuse::Animations::CreateStateParams* p)
{
    ::app::Fuse::Animations::TrackAnimatorState___ObjInit_1(__this, (::app::Fuse::Animations::TrackAnimator*)animator, p, NULL);
    __this->Animator_1 = animator;
    __this->mixHandle = ::app::Fuse::Animations::IMixer::Register__Fuse_Animations_AnimationVariant(::uPtr< ::uObject*>(::uPtr< ::app::Fuse::Animations::Change__Fuse_Animations_AnimationVariant*>(__this->Animator_1)->Mixer), ::uPtr< ::app::Fuse::Animations::Change__Fuse_Animations_AnimationVariant*>(__this->Animator_1)->Target(), ::uPtr< ::app::Fuse::Animations::Change__Fuse_Animations_AnimationVariant*>(__this->Animator_1)->MixOp());
}

void DiscreteTrackChangeState__Fuse_Animations_AnimationVariant__Disable(DiscreteTrackChangeState__Fuse_Animations_AnimationVariant* __this)
{
    if (__this->mixHandle == NULL)
    {
        return;
    }

    ::app::Fuse::Animations::IMixerHandle__Fuse_Animations_AnimationVariant::Unregister(::uPtr< ::uObject*>(__this->mixHandle));
    __this->mixHandle = NULL;
}

DiscreteTrackChangeState__Fuse_Animations_AnimationVariant* DiscreteTrackChangeState__Fuse_Animations_AnimationVariant__New_1(::uStatic* __this, ::app::Fuse::Animations::Change__Fuse_Animations_AnimationVariant* animator, ::app::Fuse::Animations::CreateStateParams* p)
{
    DiscreteTrackChangeState__Fuse_Animations_AnimationVariant* inst = (DiscreteTrackChangeState__Fuse_Animations_AnimationVariant*)::uAllocObject(sizeof(DiscreteTrackChangeState__Fuse_Animations_AnimationVariant), DiscreteTrackChangeState__Fuse_Animations_AnimationVariant__typeof());
    inst->_ObjInit_2(animator, p);
    return inst;
}

void DiscreteTrackChangeState__Fuse_Animations_AnimationVariant__SeekObjectValue(DiscreteTrackChangeState__Fuse_Animations_AnimationVariant* __this, ::uObject* value, float strength)
{
    if (__this->mixHandle == NULL)
    {
        ::app::Uno::Diagnostics::Debug__Log_5(NULL, ::uGetConstString("Invalid Seek"), 1, ::uGetConstString("C:\\ProgramData\\Uno\\Packages\\Fuse.Animations\\0.11.3\\$.uno"), 420);
        return;
    }

    if ((value != NULL) && ::uIs(value, ::app::Fuse::Animations::AnimationVariant__typeof()))
    {
        ::app::Fuse::Animations::IMixerHandle__Fuse_Animations_AnimationVariant::Set(::uPtr< ::uObject*>(__this->mixHandle), ::uUnbox< int>(::app::Fuse::Animations::AnimationVariant__typeof(), value), strength);
    }
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Animations\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

DiscreteTrackChangeState__Fuse_Animations_Easing__uType* DiscreteTrackChangeState__Fuse_Animations_Easing__typeof()
{
    static ::uStaticStrong<DiscreteTrackChangeState__Fuse_Animations_Easing__uType*> type;
    if (type != NULL) return type;

    type = (DiscreteTrackChangeState__Fuse_Animations_Easing__uType*)::uAllocClassType(sizeof(DiscreteTrackChangeState__Fuse_Animations_Easing__uType), "Fuse.Animations.DiscreteTrackChangeState<Fuse.Animations.Easing>", false, 0, 2, 0);

    type->SetBaseType(::app::Fuse::Animations::TrackAnimatorState__typeof());
    type->__fp_Disable = (void(*)(::app::Fuse::Animations::AnimatorState*))DiscreteTrackChangeState__Fuse_Animations_Easing__Disable;
    type->__fp_SeekObjectValue = (void(*)(::app::Fuse::Animations::TrackAnimatorState*, ::uObject*, float))DiscreteTrackChangeState__Fuse_Animations_Easing__SeekObjectValue;

    type->SetStrongRefs(
        "Animator", offsetof(DiscreteTrackChangeState__Fuse_Animations_Easing, Animator_1),
        "mixHandle", offsetof(DiscreteTrackChangeState__Fuse_Animations_Easing, mixHandle));

    return type;
}

void DiscreteTrackChangeState__Fuse_Animations_Easing___ObjInit_2(DiscreteTrackChangeState__Fuse_Animations_Easing* __this, ::app::Fuse::Animations::Change__Fuse_Animations_Easing* animator, ::app::Fuse::Animations::CreateStateParams* p)
{
    ::app::Fuse::Animations::TrackAnimatorState___ObjInit_1(__this, (::app::Fuse::Animations::TrackAnimator*)animator, p, NULL);
    __this->Animator_1 = animator;
    __this->mixHandle = ::app::Fuse::Animations::IMixer::Register__Fuse_Animations_Easing(::uPtr< ::uObject*>(::uPtr< ::app::Fuse::Animations::Change__Fuse_Animations_Easing*>(__this->Animator_1)->Mixer), ::uPtr< ::app::Fuse::Animations::Change__Fuse_Animations_Easing*>(__this->Animator_1)->Target(), ::uPtr< ::app::Fuse::Animations::Change__Fuse_Animations_Easing*>(__this->Animator_1)->MixOp());
}

void DiscreteTrackChangeState__Fuse_Animations_Easing__Disable(DiscreteTrackChangeState__Fuse_Animations_Easing* __this)
{
    if (__this->mixHandle == NULL)
    {
        return;
    }

    ::app::Fuse::Animations::IMixerHandle__Fuse_Animations_Easing::Unregister(::uPtr< ::uObject*>(__this->mixHandle));
    __this->mixHandle = NULL;
}

DiscreteTrackChangeState__Fuse_Animations_Easing* DiscreteTrackChangeState__Fuse_Animations_Easing__New_1(::uStatic* __this, ::app::Fuse::Animations::Change__Fuse_Animations_Easing* animator, ::app::Fuse::Animations::CreateStateParams* p)
{
    DiscreteTrackChangeState__Fuse_Animations_Easing* inst = (DiscreteTrackChangeState__Fuse_Animations_Easing*)::uAllocObject(sizeof(DiscreteTrackChangeState__Fuse_Animations_Easing), DiscreteTrackChangeState__Fuse_Animations_Easing__typeof());
    inst->_ObjInit_2(animator, p);
    return inst;
}

void DiscreteTrackChangeState__Fuse_Animations_Easing__SeekObjectValue(DiscreteTrackChangeState__Fuse_Animations_Easing* __this, ::uObject* value, float strength)
{
    if (__this->mixHandle == NULL)
    {
        ::app::Uno::Diagnostics::Debug__Log_5(NULL, ::uGetConstString("Invalid Seek"), 1, ::uGetConstString("C:\\ProgramData\\Uno\\Packages\\Fuse.Animations\\0.11.3\\$.uno"), 420);
        return;
    }

    if ((value != NULL) && ::uIs(value, ::app::Fuse::Animations::Easing__typeof()))
    {
        ::app::Fuse::Animations::IMixerHandle__Fuse_Animations_Easing::Set(::uPtr< ::uObject*>(__this->mixHandle), ::uUnbox< int>(::app::Fuse::Animations::Easing__typeof(), value), strength);
    }
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Animations\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

DiscreteTrackChangeState__Fuse_Animations_KeyframeInterpolation__uType* DiscreteTrackChangeState__Fuse_Animations_KeyframeInterpolation__typeof()
{
    static ::uStaticStrong<DiscreteTrackChangeState__Fuse_Animations_KeyframeInterpolation__uType*> type;
    if (type != NULL) return type;

    type = (DiscreteTrackChangeState__Fuse_Animations_KeyframeInterpolation__uType*)::uAllocClassType(sizeof(DiscreteTrackChangeState__Fuse_Animations_KeyframeInterpolation__uType), "Fuse.Animations.DiscreteTrackChangeState<Fuse.Animations.KeyframeInterpolation>", false, 0, 2, 0);

    type->SetBaseType(::app::Fuse::Animations::TrackAnimatorState__typeof());
    type->__fp_Disable = (void(*)(::app::Fuse::Animations::AnimatorState*))DiscreteTrackChangeState__Fuse_Animations_KeyframeInterpolation__Disable;
    type->__fp_SeekObjectValue = (void(*)(::app::Fuse::Animations::TrackAnimatorState*, ::uObject*, float))DiscreteTrackChangeState__Fuse_Animations_KeyframeInterpolation__SeekObjectValue;

    type->SetStrongRefs(
        "Animator", offsetof(DiscreteTrackChangeState__Fuse_Animations_KeyframeInterpolation, Animator_1),
        "mixHandle", offsetof(DiscreteTrackChangeState__Fuse_Animations_KeyframeInterpolation, mixHandle));

    return type;
}

void DiscreteTrackChangeState__Fuse_Animations_KeyframeInterpolation___ObjInit_2(DiscreteTrackChangeState__Fuse_Animations_KeyframeInterpolation* __this, ::app::Fuse::Animations::Change__Fuse_Animations_KeyframeInterpolation* animator, ::app::Fuse::Animations::CreateStateParams* p)
{
    ::app::Fuse::Animations::TrackAnimatorState___ObjInit_1(__this, (::app::Fuse::Animations::TrackAnimator*)animator, p, NULL);
    __this->Animator_1 = animator;
    __this->mixHandle = ::app::Fuse::Animations::IMixer::Register__Fuse_Animations_KeyframeInterpolation(::uPtr< ::uObject*>(::uPtr< ::app::Fuse::Animations::Change__Fuse_Animations_KeyframeInterpolation*>(__this->Animator_1)->Mixer), ::uPtr< ::app::Fuse::Animations::Change__Fuse_Animations_KeyframeInterpolation*>(__this->Animator_1)->Target(), ::uPtr< ::app::Fuse::Animations::Change__Fuse_Animations_KeyframeInterpolation*>(__this->Animator_1)->MixOp());
}

void DiscreteTrackChangeState__Fuse_Animations_KeyframeInterpolation__Disable(DiscreteTrackChangeState__Fuse_Animations_KeyframeInterpolation* __this)
{
    if (__this->mixHandle == NULL)
    {
        return;
    }

    ::app::Fuse::Animations::IMixerHandle__Fuse_Animations_KeyframeInterpolation::Unregister(::uPtr< ::uObject*>(__this->mixHandle));
    __this->mixHandle = NULL;
}

DiscreteTrackChangeState__Fuse_Animations_KeyframeInterpolation* DiscreteTrackChangeState__Fuse_Animations_KeyframeInterpolation__New_1(::uStatic* __this, ::app::Fuse::Animations::Change__Fuse_Animations_KeyframeInterpolation* animator, ::app::Fuse::Animations::CreateStateParams* p)
{
    DiscreteTrackChangeState__Fuse_Animations_KeyframeInterpolation* inst = (DiscreteTrackChangeState__Fuse_Animations_KeyframeInterpolation*)::uAllocObject(sizeof(DiscreteTrackChangeState__Fuse_Animations_KeyframeInterpolation), DiscreteTrackChangeState__Fuse_Animations_KeyframeInterpolation__typeof());
    inst->_ObjInit_2(animator, p);
    return inst;
}

void DiscreteTrackChangeState__Fuse_Animations_KeyframeInterpolation__SeekObjectValue(DiscreteTrackChangeState__Fuse_Animations_KeyframeInterpolation* __this, ::uObject* value, float strength)
{
    if (__this->mixHandle == NULL)
    {
        ::app::Uno::Diagnostics::Debug__Log_5(NULL, ::uGetConstString("Invalid Seek"), 1, ::uGetConstString("C:\\ProgramData\\Uno\\Packages\\Fuse.Animations\\0.11.3\\$.uno"), 420);
        return;
    }

    if ((value != NULL) && ::uIs(value, ::app::Fuse::Animations::KeyframeInterpolation__typeof()))
    {
        ::app::Fuse::Animations::IMixerHandle__Fuse_Animations_KeyframeInterpolation::Set(::uPtr< ::uObject*>(__this->mixHandle), ::uUnbox< int>(::app::Fuse::Animations::KeyframeInterpolation__typeof(), value), strength);
    }
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Animations\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

DiscreteTrackChangeState__Fuse_Animations_MixOp__uType* DiscreteTrackChangeState__Fuse_Animations_MixOp__typeof()
{
    static ::uStaticStrong<DiscreteTrackChangeState__Fuse_Animations_MixOp__uType*> type;
    if (type != NULL) return type;

    type = (DiscreteTrackChangeState__Fuse_Animations_MixOp__uType*)::uAllocClassType(sizeof(DiscreteTrackChangeState__Fuse_Animations_MixOp__uType), "Fuse.Animations.DiscreteTrackChangeState<Fuse.Animations.MixOp>", false, 0, 2, 0);

    type->SetBaseType(::app::Fuse::Animations::TrackAnimatorState__typeof());
    type->__fp_Disable = (void(*)(::app::Fuse::Animations::AnimatorState*))DiscreteTrackChangeState__Fuse_Animations_MixOp__Disable;
    type->__fp_SeekObjectValue = (void(*)(::app::Fuse::Animations::TrackAnimatorState*, ::uObject*, float))DiscreteTrackChangeState__Fuse_Animations_MixOp__SeekObjectValue;

    type->SetStrongRefs(
        "Animator", offsetof(DiscreteTrackChangeState__Fuse_Animations_MixOp, Animator_1),
        "mixHandle", offsetof(DiscreteTrackChangeState__Fuse_Animations_MixOp, mixHandle));

    return type;
}

void DiscreteTrackChangeState__Fuse_Animations_MixOp___ObjInit_2(DiscreteTrackChangeState__Fuse_Animations_MixOp* __this, ::app::Fuse::Animations::Change__Fuse_Animations_MixOp* animator, ::app::Fuse::Animations::CreateStateParams* p)
{
    ::app::Fuse::Animations::TrackAnimatorState___ObjInit_1(__this, (::app::Fuse::Animations::TrackAnimator*)animator, p, NULL);
    __this->Animator_1 = animator;
    __this->mixHandle = ::app::Fuse::Animations::IMixer::Register__Fuse_Animations_MixOp(::uPtr< ::uObject*>(::uPtr< ::app::Fuse::Animations::Change__Fuse_Animations_MixOp*>(__this->Animator_1)->Mixer), ::uPtr< ::app::Fuse::Animations::Change__Fuse_Animations_MixOp*>(__this->Animator_1)->Target(), ::uPtr< ::app::Fuse::Animations::Change__Fuse_Animations_MixOp*>(__this->Animator_1)->MixOp());
}

void DiscreteTrackChangeState__Fuse_Animations_MixOp__Disable(DiscreteTrackChangeState__Fuse_Animations_MixOp* __this)
{
    if (__this->mixHandle == NULL)
    {
        return;
    }

    ::app::Fuse::Animations::IMixerHandle__Fuse_Animations_MixOp::Unregister(::uPtr< ::uObject*>(__this->mixHandle));
    __this->mixHandle = NULL;
}

DiscreteTrackChangeState__Fuse_Animations_MixOp* DiscreteTrackChangeState__Fuse_Animations_MixOp__New_1(::uStatic* __this, ::app::Fuse::Animations::Change__Fuse_Animations_MixOp* animator, ::app::Fuse::Animations::CreateStateParams* p)
{
    DiscreteTrackChangeState__Fuse_Animations_MixOp* inst = (DiscreteTrackChangeState__Fuse_Animations_MixOp*)::uAllocObject(sizeof(DiscreteTrackChangeState__Fuse_Animations_MixOp), DiscreteTrackChangeState__Fuse_Animations_MixOp__typeof());
    inst->_ObjInit_2(animator, p);
    return inst;
}

void DiscreteTrackChangeState__Fuse_Animations_MixOp__SeekObjectValue(DiscreteTrackChangeState__Fuse_Animations_MixOp* __this, ::uObject* value, float strength)
{
    if (__this->mixHandle == NULL)
    {
        ::app::Uno::Diagnostics::Debug__Log_5(NULL, ::uGetConstString("Invalid Seek"), 1, ::uGetConstString("C:\\ProgramData\\Uno\\Packages\\Fuse.Animations\\0.11.3\\$.uno"), 420);
        return;
    }

    if ((value != NULL) && ::uIs(value, ::app::Fuse::Animations::MixOp__typeof()))
    {
        ::app::Fuse::Animations::IMixerHandle__Fuse_Animations_MixOp::Set(::uPtr< ::uObject*>(__this->mixHandle), ::uUnbox< int>(::app::Fuse::Animations::MixOp__typeof(), value), strength);
    }
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Animations\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

DiscreteTrackChangeState__Fuse_Drawing_BlendMode__uType* DiscreteTrackChangeState__Fuse_Drawing_BlendMode__typeof()
{
    static ::uStaticStrong<DiscreteTrackChangeState__Fuse_Drawing_BlendMode__uType*> type;
    if (type != NULL) return type;

    type = (DiscreteTrackChangeState__Fuse_Drawing_BlendMode__uType*)::uAllocClassType(sizeof(DiscreteTrackChangeState__Fuse_Drawing_BlendMode__uType), "Fuse.Animations.DiscreteTrackChangeState<Fuse.Drawing.BlendMode>", false, 0, 2, 0);

    type->SetBaseType(::app::Fuse::Animations::TrackAnimatorState__typeof());
    type->__fp_Disable = (void(*)(::app::Fuse::Animations::AnimatorState*))DiscreteTrackChangeState__Fuse_Drawing_BlendMode__Disable;
    type->__fp_SeekObjectValue = (void(*)(::app::Fuse::Animations::TrackAnimatorState*, ::uObject*, float))DiscreteTrackChangeState__Fuse_Drawing_BlendMode__SeekObjectValue;

    type->SetStrongRefs(
        "Animator", offsetof(DiscreteTrackChangeState__Fuse_Drawing_BlendMode, Animator_1),
        "mixHandle", offsetof(DiscreteTrackChangeState__Fuse_Drawing_BlendMode, mixHandle));

    return type;
}

void DiscreteTrackChangeState__Fuse_Drawing_BlendMode___ObjInit_2(DiscreteTrackChangeState__Fuse_Drawing_BlendMode* __this, ::app::Fuse::Animations::Change__Fuse_Drawing_BlendMode* animator, ::app::Fuse::Animations::CreateStateParams* p)
{
    ::app::Fuse::Animations::TrackAnimatorState___ObjInit_1(__this, (::app::Fuse::Animations::TrackAnimator*)animator, p, NULL);
    __this->Animator_1 = animator;
    __this->mixHandle = ::app::Fuse::Animations::IMixer::Register__Fuse_Drawing_BlendMode(::uPtr< ::uObject*>(::uPtr< ::app::Fuse::Animations::Change__Fuse_Drawing_BlendMode*>(__this->Animator_1)->Mixer), ::uPtr< ::app::Fuse::Animations::Change__Fuse_Drawing_BlendMode*>(__this->Animator_1)->Target(), ::uPtr< ::app::Fuse::Animations::Change__Fuse_Drawing_BlendMode*>(__this->Animator_1)->MixOp());
}

void DiscreteTrackChangeState__Fuse_Drawing_BlendMode__Disable(DiscreteTrackChangeState__Fuse_Drawing_BlendMode* __this)
{
    if (__this->mixHandle == NULL)
    {
        return;
    }

    ::app::Fuse::Animations::IMixerHandle__Fuse_Drawing_BlendMode::Unregister(::uPtr< ::uObject*>(__this->mixHandle));
    __this->mixHandle = NULL;
}

DiscreteTrackChangeState__Fuse_Drawing_BlendMode* DiscreteTrackChangeState__Fuse_Drawing_BlendMode__New_1(::uStatic* __this, ::app::Fuse::Animations::Change__Fuse_Drawing_BlendMode* animator, ::app::Fuse::Animations::CreateStateParams* p)
{
    DiscreteTrackChangeState__Fuse_Drawing_BlendMode* inst = (DiscreteTrackChangeState__Fuse_Drawing_BlendMode*)::uAllocObject(sizeof(DiscreteTrackChangeState__Fuse_Drawing_BlendMode), DiscreteTrackChangeState__Fuse_Drawing_BlendMode__typeof());
    inst->_ObjInit_2(animator, p);
    return inst;
}

void DiscreteTrackChangeState__Fuse_Drawing_BlendMode__SeekObjectValue(DiscreteTrackChangeState__Fuse_Drawing_BlendMode* __this, ::uObject* value, float strength)
{
    if (__this->mixHandle == NULL)
    {
        ::app::Uno::Diagnostics::Debug__Log_5(NULL, ::uGetConstString("Invalid Seek"), 1, ::uGetConstString("C:\\ProgramData\\Uno\\Packages\\Fuse.Animations\\0.11.3\\$.uno"), 420);
        return;
    }

    if ((value != NULL) && ::uIs(value, ::app::Fuse::Drawing::BlendMode__typeof()))
    {
        ::app::Fuse::Animations::IMixerHandle__Fuse_Drawing_BlendMode::Set(::uPtr< ::uObject*>(__this->mixHandle), ::uUnbox< int>(::app::Fuse::Drawing::BlendMode__typeof(), value), strength);
    }
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Animations\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

DiscreteTrackChangeState__Fuse_Drawing_Brush__uType* DiscreteTrackChangeState__Fuse_Drawing_Brush__typeof()
{
    static ::uStaticStrong<DiscreteTrackChangeState__Fuse_Drawing_Brush__uType*> type;
    if (type != NULL) return type;

    type = (DiscreteTrackChangeState__Fuse_Drawing_Brush__uType*)::uAllocClassType(sizeof(DiscreteTrackChangeState__Fuse_Drawing_Brush__uType), "Fuse.Animations.DiscreteTrackChangeState<Fuse.Drawing.Brush>", false, 0, 2, 0);

    type->SetBaseType(::app::Fuse::Animations::TrackAnimatorState__typeof());
    type->__fp_Disable = (void(*)(::app::Fuse::Animations::AnimatorState*))DiscreteTrackChangeState__Fuse_Drawing_Brush__Disable;
    type->__fp_SeekObjectValue = (void(*)(::app::Fuse::Animations::TrackAnimatorState*, ::uObject*, float))DiscreteTrackChangeState__Fuse_Drawing_Brush__SeekObjectValue;

    type->SetStrongRefs(
        "Animator", offsetof(DiscreteTrackChangeState__Fuse_Drawing_Brush, Animator_1),
        "mixHandle", offsetof(DiscreteTrackChangeState__Fuse_Drawing_Brush, mixHandle));

    return type;
}

void DiscreteTrackChangeState__Fuse_Drawing_Brush___ObjInit_2(DiscreteTrackChangeState__Fuse_Drawing_Brush* __this, ::app::Fuse::Animations::Change__Fuse_Drawing_Brush* animator, ::app::Fuse::Animations::CreateStateParams* p)
{
    ::app::Fuse::Animations::TrackAnimatorState___ObjInit_1(__this, (::app::Fuse::Animations::TrackAnimator*)animator, p, NULL);
    __this->Animator_1 = animator;
    __this->mixHandle = ::app::Fuse::Animations::IMixer::Register__Fuse_Drawing_Brush(::uPtr< ::uObject*>(::uPtr< ::app::Fuse::Animations::Change__Fuse_Drawing_Brush*>(__this->Animator_1)->Mixer), ::uPtr< ::app::Fuse::Animations::Change__Fuse_Drawing_Brush*>(__this->Animator_1)->Target(), ::uPtr< ::app::Fuse::Animations::Change__Fuse_Drawing_Brush*>(__this->Animator_1)->MixOp());
}

void DiscreteTrackChangeState__Fuse_Drawing_Brush__Disable(DiscreteTrackChangeState__Fuse_Drawing_Brush* __this)
{
    if (__this->mixHandle == NULL)
    {
        return;
    }

    ::app::Fuse::Animations::IMixerHandle__Fuse_Drawing_Brush::Unregister(::uPtr< ::uObject*>(__this->mixHandle));
    __this->mixHandle = NULL;
}

DiscreteTrackChangeState__Fuse_Drawing_Brush* DiscreteTrackChangeState__Fuse_Drawing_Brush__New_1(::uStatic* __this, ::app::Fuse::Animations::Change__Fuse_Drawing_Brush* animator, ::app::Fuse::Animations::CreateStateParams* p)
{
    DiscreteTrackChangeState__Fuse_Drawing_Brush* inst = (DiscreteTrackChangeState__Fuse_Drawing_Brush*)::uAllocObject(sizeof(DiscreteTrackChangeState__Fuse_Drawing_Brush), DiscreteTrackChangeState__Fuse_Drawing_Brush__typeof());
    inst->_ObjInit_2(animator, p);
    return inst;
}

void DiscreteTrackChangeState__Fuse_Drawing_Brush__SeekObjectValue(DiscreteTrackChangeState__Fuse_Drawing_Brush* __this, ::uObject* value, float strength)
{
    if (__this->mixHandle == NULL)
    {
        ::app::Uno::Diagnostics::Debug__Log_5(NULL, ::uGetConstString("Invalid Seek"), 1, ::uGetConstString("C:\\ProgramData\\Uno\\Packages\\Fuse.Animations\\0.11.3\\$.uno"), 420);
        return;
    }

    if ((value != NULL) && ::uIs(value, ::app::Fuse::Drawing::Brush__typeof()))
    {
        ::app::Fuse::Animations::IMixerHandle__Fuse_Drawing_Brush::Set(::uPtr< ::uObject*>(__this->mixHandle), ::uCast< ::app::Fuse::Drawing::Brush*>(value, ::app::Fuse::Drawing::Brush__typeof()), strength);
    }
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Animations\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

DiscreteTrackChangeState__Fuse_Drawing_DynamicBrush__uType* DiscreteTrackChangeState__Fuse_Drawing_DynamicBrush__typeof()
{
    static ::uStaticStrong<DiscreteTrackChangeState__Fuse_Drawing_DynamicBrush__uType*> type;
    if (type != NULL) return type;

    type = (DiscreteTrackChangeState__Fuse_Drawing_DynamicBrush__uType*)::uAllocClassType(sizeof(DiscreteTrackChangeState__Fuse_Drawing_DynamicBrush__uType), "Fuse.Animations.DiscreteTrackChangeState<Fuse.Drawing.DynamicBrush>", false, 0, 2, 0);

    type->SetBaseType(::app::Fuse::Animations::TrackAnimatorState__typeof());
    type->__fp_Disable = (void(*)(::app::Fuse::Animations::AnimatorState*))DiscreteTrackChangeState__Fuse_Drawing_DynamicBrush__Disable;
    type->__fp_SeekObjectValue = (void(*)(::app::Fuse::Animations::TrackAnimatorState*, ::uObject*, float))DiscreteTrackChangeState__Fuse_Drawing_DynamicBrush__SeekObjectValue;

    type->SetStrongRefs(
        "Animator", offsetof(DiscreteTrackChangeState__Fuse_Drawing_DynamicBrush, Animator_1),
        "mixHandle", offsetof(DiscreteTrackChangeState__Fuse_Drawing_DynamicBrush, mixHandle));

    return type;
}

void DiscreteTrackChangeState__Fuse_Drawing_DynamicBrush___ObjInit_2(DiscreteTrackChangeState__Fuse_Drawing_DynamicBrush* __this, ::app::Fuse::Animations::Change__Fuse_Drawing_DynamicBrush* animator, ::app::Fuse::Animations::CreateStateParams* p)
{
    ::app::Fuse::Animations::TrackAnimatorState___ObjInit_1(__this, (::app::Fuse::Animations::TrackAnimator*)animator, p, NULL);
    __this->Animator_1 = animator;
    __this->mixHandle = ::app::Fuse::Animations::IMixer::Register__Fuse_Drawing_DynamicBrush(::uPtr< ::uObject*>(::uPtr< ::app::Fuse::Animations::Change__Fuse_Drawing_DynamicBrush*>(__this->Animator_1)->Mixer), ::uPtr< ::app::Fuse::Animations::Change__Fuse_Drawing_DynamicBrush*>(__this->Animator_1)->Target(), ::uPtr< ::app::Fuse::Animations::Change__Fuse_Drawing_DynamicBrush*>(__this->Animator_1)->MixOp());
}

void DiscreteTrackChangeState__Fuse_Drawing_DynamicBrush__Disable(DiscreteTrackChangeState__Fuse_Drawing_DynamicBrush* __this)
{
    if (__this->mixHandle == NULL)
    {
        return;
    }

    ::app::Fuse::Animations::IMixerHandle__Fuse_Drawing_DynamicBrush::Unregister(::uPtr< ::uObject*>(__this->mixHandle));
    __this->mixHandle = NULL;
}

DiscreteTrackChangeState__Fuse_Drawing_DynamicBrush* DiscreteTrackChangeState__Fuse_Drawing_DynamicBrush__New_1(::uStatic* __this, ::app::Fuse::Animations::Change__Fuse_Drawing_DynamicBrush* animator, ::app::Fuse::Animations::CreateStateParams* p)
{
    DiscreteTrackChangeState__Fuse_Drawing_DynamicBrush* inst = (DiscreteTrackChangeState__Fuse_Drawing_DynamicBrush*)::uAllocObject(sizeof(DiscreteTrackChangeState__Fuse_Drawing_DynamicBrush), DiscreteTrackChangeState__Fuse_Drawing_DynamicBrush__typeof());
    inst->_ObjInit_2(animator, p);
    return inst;
}

void DiscreteTrackChangeState__Fuse_Drawing_DynamicBrush__SeekObjectValue(DiscreteTrackChangeState__Fuse_Drawing_DynamicBrush* __this, ::uObject* value, float strength)
{
    if (__this->mixHandle == NULL)
    {
        ::app::Uno::Diagnostics::Debug__Log_5(NULL, ::uGetConstString("Invalid Seek"), 1, ::uGetConstString("C:\\ProgramData\\Uno\\Packages\\Fuse.Animations\\0.11.3\\$.uno"), 420);
        return;
    }

    if ((value != NULL) && ::uIs(value, ::app::Fuse::Drawing::DynamicBrush__typeof()))
    {
        ::app::Fuse::Animations::IMixerHandle__Fuse_Drawing_DynamicBrush::Set(::uPtr< ::uObject*>(__this->mixHandle), ::uCast< ::app::Fuse::Drawing::DynamicBrush*>(value, ::app::Fuse::Drawing::DynamicBrush__typeof()), strength);
    }
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Animations\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

DiscreteTrackChangeState__Fuse_Drawing_GradientStop__uType* DiscreteTrackChangeState__Fuse_Drawing_GradientStop__typeof()
{
    static ::uStaticStrong<DiscreteTrackChangeState__Fuse_Drawing_GradientStop__uType*> type;
    if (type != NULL) return type;

    type = (DiscreteTrackChangeState__Fuse_Drawing_GradientStop__uType*)::uAllocClassType(sizeof(DiscreteTrackChangeState__Fuse_Drawing_GradientStop__uType), "Fuse.Animations.DiscreteTrackChangeState<Fuse.Drawing.GradientStop>", false, 0, 2, 0);

    type->SetBaseType(::app::Fuse::Animations::TrackAnimatorState__typeof());
    type->__fp_Disable = (void(*)(::app::Fuse::Animations::AnimatorState*))DiscreteTrackChangeState__Fuse_Drawing_GradientStop__Disable;
    type->__fp_SeekObjectValue = (void(*)(::app::Fuse::Animations::TrackAnimatorState*, ::uObject*, float))DiscreteTrackChangeState__Fuse_Drawing_GradientStop__SeekObjectValue;

    type->SetStrongRefs(
        "Animator", offsetof(DiscreteTrackChangeState__Fuse_Drawing_GradientStop, Animator_1),
        "mixHandle", offsetof(DiscreteTrackChangeState__Fuse_Drawing_GradientStop, mixHandle));

    return type;
}

void DiscreteTrackChangeState__Fuse_Drawing_GradientStop___ObjInit_2(DiscreteTrackChangeState__Fuse_Drawing_GradientStop* __this, ::app::Fuse::Animations::Change__Fuse_Drawing_GradientStop* animator, ::app::Fuse::Animations::CreateStateParams* p)
{
    ::app::Fuse::Animations::TrackAnimatorState___ObjInit_1(__this, (::app::Fuse::Animations::TrackAnimator*)animator, p, NULL);
    __this->Animator_1 = animator;
    __this->mixHandle = ::app::Fuse::Animations::IMixer::Register__Fuse_Drawing_GradientStop(::uPtr< ::uObject*>(::uPtr< ::app::Fuse::Animations::Change__Fuse_Drawing_GradientStop*>(__this->Animator_1)->Mixer), ::uPtr< ::app::Fuse::Animations::Change__Fuse_Drawing_GradientStop*>(__this->Animator_1)->Target(), ::uPtr< ::app::Fuse::Animations::Change__Fuse_Drawing_GradientStop*>(__this->Animator_1)->MixOp());
}

void DiscreteTrackChangeState__Fuse_Drawing_GradientStop__Disable(DiscreteTrackChangeState__Fuse_Drawing_GradientStop* __this)
{
    if (__this->mixHandle == NULL)
    {
        return;
    }

    ::app::Fuse::Animations::IMixerHandle__Fuse_Drawing_GradientStop::Unregister(::uPtr< ::uObject*>(__this->mixHandle));
    __this->mixHandle = NULL;
}

DiscreteTrackChangeState__Fuse_Drawing_GradientStop* DiscreteTrackChangeState__Fuse_Drawing_GradientStop__New_1(::uStatic* __this, ::app::Fuse::Animations::Change__Fuse_Drawing_GradientStop* animator, ::app::Fuse::Animations::CreateStateParams* p)
{
    DiscreteTrackChangeState__Fuse_Drawing_GradientStop* inst = (DiscreteTrackChangeState__Fuse_Drawing_GradientStop*)::uAllocObject(sizeof(DiscreteTrackChangeState__Fuse_Drawing_GradientStop), DiscreteTrackChangeState__Fuse_Drawing_GradientStop__typeof());
    inst->_ObjInit_2(animator, p);
    return inst;
}

void DiscreteTrackChangeState__Fuse_Drawing_GradientStop__SeekObjectValue(DiscreteTrackChangeState__Fuse_Drawing_GradientStop* __this, ::uObject* value, float strength)
{
    if (__this->mixHandle == NULL)
    {
        ::app::Uno::Diagnostics::Debug__Log_5(NULL, ::uGetConstString("Invalid Seek"), 1, ::uGetConstString("C:\\ProgramData\\Uno\\Packages\\Fuse.Animations\\0.11.3\\$.uno"), 420);
        return;
    }

    if ((value != NULL) && ::uIs(value, ::app::Fuse::Drawing::GradientStop__typeof()))
    {
        ::app::Fuse::Animations::IMixerHandle__Fuse_Drawing_GradientStop::Set(::uPtr< ::uObject*>(__this->mixHandle), ::uCast< ::app::Fuse::Drawing::GradientStop*>(value, ::app::Fuse::Drawing::GradientStop__typeof()), strength);
    }
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Animations\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

DiscreteTrackChangeState__Fuse_Drawing_LinearGradient__uType* DiscreteTrackChangeState__Fuse_Drawing_LinearGradient__typeof()
{
    static ::uStaticStrong<DiscreteTrackChangeState__Fuse_Drawing_LinearGradient__uType*> type;
    if (type != NULL) return type;

    type = (DiscreteTrackChangeState__Fuse_Drawing_LinearGradient__uType*)::uAllocClassType(sizeof(DiscreteTrackChangeState__Fuse_Drawing_LinearGradient__uType), "Fuse.Animations.DiscreteTrackChangeState<Fuse.Drawing.LinearGradient>", false, 0, 2, 0);

    type->SetBaseType(::app::Fuse::Animations::TrackAnimatorState__typeof());
    type->__fp_Disable = (void(*)(::app::Fuse::Animations::AnimatorState*))DiscreteTrackChangeState__Fuse_Drawing_LinearGradient__Disable;
    type->__fp_SeekObjectValue = (void(*)(::app::Fuse::Animations::TrackAnimatorState*, ::uObject*, float))DiscreteTrackChangeState__Fuse_Drawing_LinearGradient__SeekObjectValue;

    type->SetStrongRefs(
        "Animator", offsetof(DiscreteTrackChangeState__Fuse_Drawing_LinearGradient, Animator_1),
        "mixHandle", offsetof(DiscreteTrackChangeState__Fuse_Drawing_LinearGradient, mixHandle));

    return type;
}

void DiscreteTrackChangeState__Fuse_Drawing_LinearGradient___ObjInit_2(DiscreteTrackChangeState__Fuse_Drawing_LinearGradient* __this, ::app::Fuse::Animations::Change__Fuse_Drawing_LinearGradient* animator, ::app::Fuse::Animations::CreateStateParams* p)
{
    ::app::Fuse::Animations::TrackAnimatorState___ObjInit_1(__this, (::app::Fuse::Animations::TrackAnimator*)animator, p, NULL);
    __this->Animator_1 = animator;
    __this->mixHandle = ::app::Fuse::Animations::IMixer::Register__Fuse_Drawing_LinearGradient(::uPtr< ::uObject*>(::uPtr< ::app::Fuse::Animations::Change__Fuse_Drawing_LinearGradient*>(__this->Animator_1)->Mixer), ::uPtr< ::app::Fuse::Animations::Change__Fuse_Drawing_LinearGradient*>(__this->Animator_1)->Target(), ::uPtr< ::app::Fuse::Animations::Change__Fuse_Drawing_LinearGradient*>(__this->Animator_1)->MixOp());
}

void DiscreteTrackChangeState__Fuse_Drawing_LinearGradient__Disable(DiscreteTrackChangeState__Fuse_Drawing_LinearGradient* __this)
{
    if (__this->mixHandle == NULL)
    {
        return;
    }

    ::app::Fuse::Animations::IMixerHandle__Fuse_Drawing_LinearGradient::Unregister(::uPtr< ::uObject*>(__this->mixHandle));
    __this->mixHandle = NULL;
}

DiscreteTrackChangeState__Fuse_Drawing_LinearGradient* DiscreteTrackChangeState__Fuse_Drawing_LinearGradient__New_1(::uStatic* __this, ::app::Fuse::Animations::Change__Fuse_Drawing_LinearGradient* animator, ::app::Fuse::Animations::CreateStateParams* p)
{
    DiscreteTrackChangeState__Fuse_Drawing_LinearGradient* inst = (DiscreteTrackChangeState__Fuse_Drawing_LinearGradient*)::uAllocObject(sizeof(DiscreteTrackChangeState__Fuse_Drawing_LinearGradient), DiscreteTrackChangeState__Fuse_Drawing_LinearGradient__typeof());
    inst->_ObjInit_2(animator, p);
    return inst;
}

void DiscreteTrackChangeState__Fuse_Drawing_LinearGradient__SeekObjectValue(DiscreteTrackChangeState__Fuse_Drawing_LinearGradient* __this, ::uObject* value, float strength)
{
    if (__this->mixHandle == NULL)
    {
        ::app::Uno::Diagnostics::Debug__Log_5(NULL, ::uGetConstString("Invalid Seek"), 1, ::uGetConstString("C:\\ProgramData\\Uno\\Packages\\Fuse.Animations\\0.11.3\\$.uno"), 420);
        return;
    }

    if ((value != NULL) && ::uIs(value, ::app::Fuse::Drawing::LinearGradient__typeof()))
    {
        ::app::Fuse::Animations::IMixerHandle__Fuse_Drawing_LinearGradient::Set(::uPtr< ::uObject*>(__this->mixHandle), ::uCast< ::app::Fuse::Drawing::LinearGradient*>(value, ::app::Fuse::Drawing::LinearGradient__typeof()), strength);
    }
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Animations\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

DiscreteTrackChangeState__Fuse_Drawing_SolidColor__uType* DiscreteTrackChangeState__Fuse_Drawing_SolidColor__typeof()
{
    static ::uStaticStrong<DiscreteTrackChangeState__Fuse_Drawing_SolidColor__uType*> type;
    if (type != NULL) return type;

    type = (DiscreteTrackChangeState__Fuse_Drawing_SolidColor__uType*)::uAllocClassType(sizeof(DiscreteTrackChangeState__Fuse_Drawing_SolidColor__uType), "Fuse.Animations.DiscreteTrackChangeState<Fuse.Drawing.SolidColor>", false, 0, 2, 0);

    type->SetBaseType(::app::Fuse::Animations::TrackAnimatorState__typeof());
    type->__fp_Disable = (void(*)(::app::Fuse::Animations::AnimatorState*))DiscreteTrackChangeState__Fuse_Drawing_SolidColor__Disable;
    type->__fp_SeekObjectValue = (void(*)(::app::Fuse::Animations::TrackAnimatorState*, ::uObject*, float))DiscreteTrackChangeState__Fuse_Drawing_SolidColor__SeekObjectValue;

    type->SetStrongRefs(
        "Animator", offsetof(DiscreteTrackChangeState__Fuse_Drawing_SolidColor, Animator_1),
        "mixHandle", offsetof(DiscreteTrackChangeState__Fuse_Drawing_SolidColor, mixHandle));

    return type;
}

void DiscreteTrackChangeState__Fuse_Drawing_SolidColor___ObjInit_2(DiscreteTrackChangeState__Fuse_Drawing_SolidColor* __this, ::app::Fuse::Animations::Change__Fuse_Drawing_SolidColor* animator, ::app::Fuse::Animations::CreateStateParams* p)
{
    ::app::Fuse::Animations::TrackAnimatorState___ObjInit_1(__this, (::app::Fuse::Animations::TrackAnimator*)animator, p, NULL);
    __this->Animator_1 = animator;
    __this->mixHandle = ::app::Fuse::Animations::IMixer::Register__Fuse_Drawing_SolidColor(::uPtr< ::uObject*>(::uPtr< ::app::Fuse::Animations::Change__Fuse_Drawing_SolidColor*>(__this->Animator_1)->Mixer), ::uPtr< ::app::Fuse::Animations::Change__Fuse_Drawing_SolidColor*>(__this->Animator_1)->Target(), ::uPtr< ::app::Fuse::Animations::Change__Fuse_Drawing_SolidColor*>(__this->Animator_1)->MixOp());
}

void DiscreteTrackChangeState__Fuse_Drawing_SolidColor__Disable(DiscreteTrackChangeState__Fuse_Drawing_SolidColor* __this)
{
    if (__this->mixHandle == NULL)
    {
        return;
    }

    ::app::Fuse::Animations::IMixerHandle__Fuse_Drawing_SolidColor::Unregister(::uPtr< ::uObject*>(__this->mixHandle));
    __this->mixHandle = NULL;
}

DiscreteTrackChangeState__Fuse_Drawing_SolidColor* DiscreteTrackChangeState__Fuse_Drawing_SolidColor__New_1(::uStatic* __this, ::app::Fuse::Animations::Change__Fuse_Drawing_SolidColor* animator, ::app::Fuse::Animations::CreateStateParams* p)
{
    DiscreteTrackChangeState__Fuse_Drawing_SolidColor* inst = (DiscreteTrackChangeState__Fuse_Drawing_SolidColor*)::uAllocObject(sizeof(DiscreteTrackChangeState__Fuse_Drawing_SolidColor), DiscreteTrackChangeState__Fuse_Drawing_SolidColor__typeof());
    inst->_ObjInit_2(animator, p);
    return inst;
}

void DiscreteTrackChangeState__Fuse_Drawing_SolidColor__SeekObjectValue(DiscreteTrackChangeState__Fuse_Drawing_SolidColor* __this, ::uObject* value, float strength)
{
    if (__this->mixHandle == NULL)
    {
        ::app::Uno::Diagnostics::Debug__Log_5(NULL, ::uGetConstString("Invalid Seek"), 1, ::uGetConstString("C:\\ProgramData\\Uno\\Packages\\Fuse.Animations\\0.11.3\\$.uno"), 420);
        return;
    }

    if ((value != NULL) && ::uIs(value, ::app::Fuse::Drawing::SolidColor__typeof()))
    {
        ::app::Fuse::Animations::IMixerHandle__Fuse_Drawing_SolidColor::Set(::uPtr< ::uObject*>(__this->mixHandle), ::uCast< ::app::Fuse::Drawing::SolidColor*>(value, ::app::Fuse::Drawing::SolidColor__typeof()), strength);
    }
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Animations\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

DiscreteTrackChangeState__Fuse_Drawing_StaticBrush__uType* DiscreteTrackChangeState__Fuse_Drawing_StaticBrush__typeof()
{
    static ::uStaticStrong<DiscreteTrackChangeState__Fuse_Drawing_StaticBrush__uType*> type;
    if (type != NULL) return type;

    type = (DiscreteTrackChangeState__Fuse_Drawing_StaticBrush__uType*)::uAllocClassType(sizeof(DiscreteTrackChangeState__Fuse_Drawing_StaticBrush__uType), "Fuse.Animations.DiscreteTrackChangeState<Fuse.Drawing.StaticBrush>", false, 0, 2, 0);

    type->SetBaseType(::app::Fuse::Animations::TrackAnimatorState__typeof());
    type->__fp_Disable = (void(*)(::app::Fuse::Animations::AnimatorState*))DiscreteTrackChangeState__Fuse_Drawing_StaticBrush__Disable;
    type->__fp_SeekObjectValue = (void(*)(::app::Fuse::Animations::TrackAnimatorState*, ::uObject*, float))DiscreteTrackChangeState__Fuse_Drawing_StaticBrush__SeekObjectValue;

    type->SetStrongRefs(
        "Animator", offsetof(DiscreteTrackChangeState__Fuse_Drawing_StaticBrush, Animator_1),
        "mixHandle", offsetof(DiscreteTrackChangeState__Fuse_Drawing_StaticBrush, mixHandle));

    return type;
}

void DiscreteTrackChangeState__Fuse_Drawing_StaticBrush___ObjInit_2(DiscreteTrackChangeState__Fuse_Drawing_StaticBrush* __this, ::app::Fuse::Animations::Change__Fuse_Drawing_StaticBrush* animator, ::app::Fuse::Animations::CreateStateParams* p)
{
    ::app::Fuse::Animations::TrackAnimatorState___ObjInit_1(__this, (::app::Fuse::Animations::TrackAnimator*)animator, p, NULL);
    __this->Animator_1 = animator;
    __this->mixHandle = ::app::Fuse::Animations::IMixer::Register__Fuse_Drawing_StaticBrush(::uPtr< ::uObject*>(::uPtr< ::app::Fuse::Animations::Change__Fuse_Drawing_StaticBrush*>(__this->Animator_1)->Mixer), ::uPtr< ::app::Fuse::Animations::Change__Fuse_Drawing_StaticBrush*>(__this->Animator_1)->Target(), ::uPtr< ::app::Fuse::Animations::Change__Fuse_Drawing_StaticBrush*>(__this->Animator_1)->MixOp());
}

void DiscreteTrackChangeState__Fuse_Drawing_StaticBrush__Disable(DiscreteTrackChangeState__Fuse_Drawing_StaticBrush* __this)
{
    if (__this->mixHandle == NULL)
    {
        return;
    }

    ::app::Fuse::Animations::IMixerHandle__Fuse_Drawing_StaticBrush::Unregister(::uPtr< ::uObject*>(__this->mixHandle));
    __this->mixHandle = NULL;
}

DiscreteTrackChangeState__Fuse_Drawing_StaticBrush* DiscreteTrackChangeState__Fuse_Drawing_StaticBrush__New_1(::uStatic* __this, ::app::Fuse::Animations::Change__Fuse_Drawing_StaticBrush* animator, ::app::Fuse::Animations::CreateStateParams* p)
{
    DiscreteTrackChangeState__Fuse_Drawing_StaticBrush* inst = (DiscreteTrackChangeState__Fuse_Drawing_StaticBrush*)::uAllocObject(sizeof(DiscreteTrackChangeState__Fuse_Drawing_StaticBrush), DiscreteTrackChangeState__Fuse_Drawing_StaticBrush__typeof());
    inst->_ObjInit_2(animator, p);
    return inst;
}

void DiscreteTrackChangeState__Fuse_Drawing_StaticBrush__SeekObjectValue(DiscreteTrackChangeState__Fuse_Drawing_StaticBrush* __this, ::uObject* value, float strength)
{
    if (__this->mixHandle == NULL)
    {
        ::app::Uno::Diagnostics::Debug__Log_5(NULL, ::uGetConstString("Invalid Seek"), 1, ::uGetConstString("C:\\ProgramData\\Uno\\Packages\\Fuse.Animations\\0.11.3\\$.uno"), 420);
        return;
    }

    if ((value != NULL) && ::uIs(value, ::app::Fuse::Drawing::StaticBrush__typeof()))
    {
        ::app::Fuse::Animations::IMixerHandle__Fuse_Drawing_StaticBrush::Set(::uPtr< ::uObject*>(__this->mixHandle), ::uCast< ::app::Fuse::Drawing::StaticBrush*>(value, ::app::Fuse::Drawing::StaticBrush__typeof()), strength);
    }
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Animations\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

DiscreteTrackChangeState__Fuse_Elements_Alignment__uType* DiscreteTrackChangeState__Fuse_Elements_Alignment__typeof()
{
    static ::uStaticStrong<DiscreteTrackChangeState__Fuse_Elements_Alignment__uType*> type;
    if (type != NULL) return type;

    type = (DiscreteTrackChangeState__Fuse_Elements_Alignment__uType*)::uAllocClassType(sizeof(DiscreteTrackChangeState__Fuse_Elements_Alignment__uType), "Fuse.Animations.DiscreteTrackChangeState<Fuse.Elements.Alignment>", false, 0, 2, 0);

    type->SetBaseType(::app::Fuse::Animations::TrackAnimatorState__typeof());
    type->__fp_Disable = (void(*)(::app::Fuse::Animations::AnimatorState*))DiscreteTrackChangeState__Fuse_Elements_Alignment__Disable;
    type->__fp_SeekObjectValue = (void(*)(::app::Fuse::Animations::TrackAnimatorState*, ::uObject*, float))DiscreteTrackChangeState__Fuse_Elements_Alignment__SeekObjectValue;

    type->SetStrongRefs(
        "Animator", offsetof(DiscreteTrackChangeState__Fuse_Elements_Alignment, Animator_1),
        "mixHandle", offsetof(DiscreteTrackChangeState__Fuse_Elements_Alignment, mixHandle));

    return type;
}

void DiscreteTrackChangeState__Fuse_Elements_Alignment___ObjInit_2(DiscreteTrackChangeState__Fuse_Elements_Alignment* __this, ::app::Fuse::Animations::Change__Fuse_Elements_Alignment* animator, ::app::Fuse::Animations::CreateStateParams* p)
{
    ::app::Fuse::Animations::TrackAnimatorState___ObjInit_1(__this, (::app::Fuse::Animations::TrackAnimator*)animator, p, NULL);
    __this->Animator_1 = animator;
    __this->mixHandle = ::app::Fuse::Animations::IMixer::Register__Fuse_Elements_Alignment(::uPtr< ::uObject*>(::uPtr< ::app::Fuse::Animations::Change__Fuse_Elements_Alignment*>(__this->Animator_1)->Mixer), ::uPtr< ::app::Fuse::Animations::Change__Fuse_Elements_Alignment*>(__this->Animator_1)->Target(), ::uPtr< ::app::Fuse::Animations::Change__Fuse_Elements_Alignment*>(__this->Animator_1)->MixOp());
}

void DiscreteTrackChangeState__Fuse_Elements_Alignment__Disable(DiscreteTrackChangeState__Fuse_Elements_Alignment* __this)
{
    if (__this->mixHandle == NULL)
    {
        return;
    }

    ::app::Fuse::Animations::IMixerHandle__Fuse_Elements_Alignment::Unregister(::uPtr< ::uObject*>(__this->mixHandle));
    __this->mixHandle = NULL;
}

DiscreteTrackChangeState__Fuse_Elements_Alignment* DiscreteTrackChangeState__Fuse_Elements_Alignment__New_1(::uStatic* __this, ::app::Fuse::Animations::Change__Fuse_Elements_Alignment* animator, ::app::Fuse::Animations::CreateStateParams* p)
{
    DiscreteTrackChangeState__Fuse_Elements_Alignment* inst = (DiscreteTrackChangeState__Fuse_Elements_Alignment*)::uAllocObject(sizeof(DiscreteTrackChangeState__Fuse_Elements_Alignment), DiscreteTrackChangeState__Fuse_Elements_Alignment__typeof());
    inst->_ObjInit_2(animator, p);
    return inst;
}

void DiscreteTrackChangeState__Fuse_Elements_Alignment__SeekObjectValue(DiscreteTrackChangeState__Fuse_Elements_Alignment* __this, ::uObject* value, float strength)
{
    if (__this->mixHandle == NULL)
    {
        ::app::Uno::Diagnostics::Debug__Log_5(NULL, ::uGetConstString("Invalid Seek"), 1, ::uGetConstString("C:\\ProgramData\\Uno\\Packages\\Fuse.Animations\\0.11.3\\$.uno"), 420);
        return;
    }

    if ((value != NULL) && ::uIs(value, ::app::Fuse::Elements::Alignment__typeof()))
    {
        ::app::Fuse::Animations::IMixerHandle__Fuse_Elements_Alignment::Set(::uPtr< ::uObject*>(__this->mixHandle), ::uUnbox< int>(::app::Fuse::Elements::Alignment__typeof(), value), strength);
    }
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Animations\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

DiscreteTrackChangeState__Fuse_Elements_CachingMode__uType* DiscreteTrackChangeState__Fuse_Elements_CachingMode__typeof()
{
    static ::uStaticStrong<DiscreteTrackChangeState__Fuse_Elements_CachingMode__uType*> type;
    if (type != NULL) return type;

    type = (DiscreteTrackChangeState__Fuse_Elements_CachingMode__uType*)::uAllocClassType(sizeof(DiscreteTrackChangeState__Fuse_Elements_CachingMode__uType), "Fuse.Animations.DiscreteTrackChangeState<Fuse.Elements.CachingMode>", false, 0, 2, 0);

    type->SetBaseType(::app::Fuse::Animations::TrackAnimatorState__typeof());
    type->__fp_Disable = (void(*)(::app::Fuse::Animations::AnimatorState*))DiscreteTrackChangeState__Fuse_Elements_CachingMode__Disable;
    type->__fp_SeekObjectValue = (void(*)(::app::Fuse::Animations::TrackAnimatorState*, ::uObject*, float))DiscreteTrackChangeState__Fuse_Elements_CachingMode__SeekObjectValue;

    type->SetStrongRefs(
        "Animator", offsetof(DiscreteTrackChangeState__Fuse_Elements_CachingMode, Animator_1),
        "mixHandle", offsetof(DiscreteTrackChangeState__Fuse_Elements_CachingMode, mixHandle));

    return type;
}

void DiscreteTrackChangeState__Fuse_Elements_CachingMode___ObjInit_2(DiscreteTrackChangeState__Fuse_Elements_CachingMode* __this, ::app::Fuse::Animations::Change__Fuse_Elements_CachingMode* animator, ::app::Fuse::Animations::CreateStateParams* p)
{
    ::app::Fuse::Animations::TrackAnimatorState___ObjInit_1(__this, (::app::Fuse::Animations::TrackAnimator*)animator, p, NULL);
    __this->Animator_1 = animator;
    __this->mixHandle = ::app::Fuse::Animations::IMixer::Register__Fuse_Elements_CachingMode(::uPtr< ::uObject*>(::uPtr< ::app::Fuse::Animations::Change__Fuse_Elements_CachingMode*>(__this->Animator_1)->Mixer), ::uPtr< ::app::Fuse::Animations::Change__Fuse_Elements_CachingMode*>(__this->Animator_1)->Target(), ::uPtr< ::app::Fuse::Animations::Change__Fuse_Elements_CachingMode*>(__this->Animator_1)->MixOp());
}

void DiscreteTrackChangeState__Fuse_Elements_CachingMode__Disable(DiscreteTrackChangeState__Fuse_Elements_CachingMode* __this)
{
    if (__this->mixHandle == NULL)
    {
        return;
    }

    ::app::Fuse::Animations::IMixerHandle__Fuse_Elements_CachingMode::Unregister(::uPtr< ::uObject*>(__this->mixHandle));
    __this->mixHandle = NULL;
}

DiscreteTrackChangeState__Fuse_Elements_CachingMode* DiscreteTrackChangeState__Fuse_Elements_CachingMode__New_1(::uStatic* __this, ::app::Fuse::Animations::Change__Fuse_Elements_CachingMode* animator, ::app::Fuse::Animations::CreateStateParams* p)
{
    DiscreteTrackChangeState__Fuse_Elements_CachingMode* inst = (DiscreteTrackChangeState__Fuse_Elements_CachingMode*)::uAllocObject(sizeof(DiscreteTrackChangeState__Fuse_Elements_CachingMode), DiscreteTrackChangeState__Fuse_Elements_CachingMode__typeof());
    inst->_ObjInit_2(animator, p);
    return inst;
}

void DiscreteTrackChangeState__Fuse_Elements_CachingMode__SeekObjectValue(DiscreteTrackChangeState__Fuse_Elements_CachingMode* __this, ::uObject* value, float strength)
{
    if (__this->mixHandle == NULL)
    {
        ::app::Uno::Diagnostics::Debug__Log_5(NULL, ::uGetConstString("Invalid Seek"), 1, ::uGetConstString("C:\\ProgramData\\Uno\\Packages\\Fuse.Animations\\0.11.3\\$.uno"), 420);
        return;
    }

    if ((value != NULL) && ::uIs(value, ::app::Fuse::Elements::CachingMode__typeof()))
    {
        ::app::Fuse::Animations::IMixerHandle__Fuse_Elements_CachingMode::Set(::uPtr< ::uObject*>(__this->mixHandle), ::uUnbox< int>(::app::Fuse::Elements::CachingMode__typeof(), value), strength);
    }
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Animations\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

DiscreteTrackChangeState__Fuse_Elements_Element__uType* DiscreteTrackChangeState__Fuse_Elements_Element__typeof()
{
    static ::uStaticStrong<DiscreteTrackChangeState__Fuse_Elements_Element__uType*> type;
    if (type != NULL) return type;

    type = (DiscreteTrackChangeState__Fuse_Elements_Element__uType*)::uAllocClassType(sizeof(DiscreteTrackChangeState__Fuse_Elements_Element__uType), "Fuse.Animations.DiscreteTrackChangeState<Fuse.Elements.Element>", false, 0, 2, 0);

    type->SetBaseType(::app::Fuse::Animations::TrackAnimatorState__typeof());
    type->__fp_Disable = (void(*)(::app::Fuse::Animations::AnimatorState*))DiscreteTrackChangeState__Fuse_Elements_Element__Disable;
    type->__fp_SeekObjectValue = (void(*)(::app::Fuse::Animations::TrackAnimatorState*, ::uObject*, float))DiscreteTrackChangeState__Fuse_Elements_Element__SeekObjectValue;

    type->SetStrongRefs(
        "Animator", offsetof(DiscreteTrackChangeState__Fuse_Elements_Element, Animator_1),
        "mixHandle", offsetof(DiscreteTrackChangeState__Fuse_Elements_Element, mixHandle));

    return type;
}

void DiscreteTrackChangeState__Fuse_Elements_Element___ObjInit_2(DiscreteTrackChangeState__Fuse_Elements_Element* __this, ::app::Fuse::Animations::Change__Fuse_Elements_Element* animator, ::app::Fuse::Animations::CreateStateParams* p)
{
    ::app::Fuse::Animations::TrackAnimatorState___ObjInit_1(__this, (::app::Fuse::Animations::TrackAnimator*)animator, p, NULL);
    __this->Animator_1 = animator;
    __this->mixHandle = ::app::Fuse::Animations::IMixer::Register__Fuse_Elements_Element(::uPtr< ::uObject*>(::uPtr< ::app::Fuse::Animations::Change__Fuse_Elements_Element*>(__this->Animator_1)->Mixer), ::uPtr< ::app::Fuse::Animations::Change__Fuse_Elements_Element*>(__this->Animator_1)->Target(), ::uPtr< ::app::Fuse::Animations::Change__Fuse_Elements_Element*>(__this->Animator_1)->MixOp());
}

void DiscreteTrackChangeState__Fuse_Elements_Element__Disable(DiscreteTrackChangeState__Fuse_Elements_Element* __this)
{
    if (__this->mixHandle == NULL)
    {
        return;
    }

    ::app::Fuse::Animations::IMixerHandle__Fuse_Elements_Element::Unregister(::uPtr< ::uObject*>(__this->mixHandle));
    __this->mixHandle = NULL;
}

DiscreteTrackChangeState__Fuse_Elements_Element* DiscreteTrackChangeState__Fuse_Elements_Element__New_1(::uStatic* __this, ::app::Fuse::Animations::Change__Fuse_Elements_Element* animator, ::app::Fuse::Animations::CreateStateParams* p)
{
    DiscreteTrackChangeState__Fuse_Elements_Element* inst = (DiscreteTrackChangeState__Fuse_Elements_Element*)::uAllocObject(sizeof(DiscreteTrackChangeState__Fuse_Elements_Element), DiscreteTrackChangeState__Fuse_Elements_Element__typeof());
    inst->_ObjInit_2(animator, p);
    return inst;
}

void DiscreteTrackChangeState__Fuse_Elements_Element__SeekObjectValue(DiscreteTrackChangeState__Fuse_Elements_Element* __this, ::uObject* value, float strength)
{
    if (__this->mixHandle == NULL)
    {
        ::app::Uno::Diagnostics::Debug__Log_5(NULL, ::uGetConstString("Invalid Seek"), 1, ::uGetConstString("C:\\ProgramData\\Uno\\Packages\\Fuse.Animations\\0.11.3\\$.uno"), 420);
        return;
    }

    if ((value != NULL) && ::uIs(value, ::app::Fuse::Elements::Element__typeof()))
    {
        ::app::Fuse::Animations::IMixerHandle__Fuse_Elements_Element::Set(::uPtr< ::uObject*>(__this->mixHandle), ::uCast< ::app::Fuse::Elements::Element*>(value, ::app::Fuse::Elements::Element__typeof()), strength);
    }
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Animations\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

DiscreteTrackChangeState__Fuse_Elements_HitTestMode__uType* DiscreteTrackChangeState__Fuse_Elements_HitTestMode__typeof()
{
    static ::uStaticStrong<DiscreteTrackChangeState__Fuse_Elements_HitTestMode__uType*> type;
    if (type != NULL) return type;

    type = (DiscreteTrackChangeState__Fuse_Elements_HitTestMode__uType*)::uAllocClassType(sizeof(DiscreteTrackChangeState__Fuse_Elements_HitTestMode__uType), "Fuse.Animations.DiscreteTrackChangeState<Fuse.Elements.HitTestMode>", false, 0, 2, 0);

    type->SetBaseType(::app::Fuse::Animations::TrackAnimatorState__typeof());
    type->__fp_Disable = (void(*)(::app::Fuse::Animations::AnimatorState*))DiscreteTrackChangeState__Fuse_Elements_HitTestMode__Disable;
    type->__fp_SeekObjectValue = (void(*)(::app::Fuse::Animations::TrackAnimatorState*, ::uObject*, float))DiscreteTrackChangeState__Fuse_Elements_HitTestMode__SeekObjectValue;

    type->SetStrongRefs(
        "Animator", offsetof(DiscreteTrackChangeState__Fuse_Elements_HitTestMode, Animator_1),
        "mixHandle", offsetof(DiscreteTrackChangeState__Fuse_Elements_HitTestMode, mixHandle));

    return type;
}

void DiscreteTrackChangeState__Fuse_Elements_HitTestMode___ObjInit_2(DiscreteTrackChangeState__Fuse_Elements_HitTestMode* __this, ::app::Fuse::Animations::Change__Fuse_Elements_HitTestMode* animator, ::app::Fuse::Animations::CreateStateParams* p)
{
    ::app::Fuse::Animations::TrackAnimatorState___ObjInit_1(__this, (::app::Fuse::Animations::TrackAnimator*)animator, p, NULL);
    __this->Animator_1 = animator;
    __this->mixHandle = ::app::Fuse::Animations::IMixer::Register__Fuse_Elements_HitTestMode(::uPtr< ::uObject*>(::uPtr< ::app::Fuse::Animations::Change__Fuse_Elements_HitTestMode*>(__this->Animator_1)->Mixer), ::uPtr< ::app::Fuse::Animations::Change__Fuse_Elements_HitTestMode*>(__this->Animator_1)->Target(), ::uPtr< ::app::Fuse::Animations::Change__Fuse_Elements_HitTestMode*>(__this->Animator_1)->MixOp());
}

void DiscreteTrackChangeState__Fuse_Elements_HitTestMode__Disable(DiscreteTrackChangeState__Fuse_Elements_HitTestMode* __this)
{
    if (__this->mixHandle == NULL)
    {
        return;
    }

    ::app::Fuse::Animations::IMixerHandle__Fuse_Elements_HitTestMode::Unregister(::uPtr< ::uObject*>(__this->mixHandle));
    __this->mixHandle = NULL;
}

DiscreteTrackChangeState__Fuse_Elements_HitTestMode* DiscreteTrackChangeState__Fuse_Elements_HitTestMode__New_1(::uStatic* __this, ::app::Fuse::Animations::Change__Fuse_Elements_HitTestMode* animator, ::app::Fuse::Animations::CreateStateParams* p)
{
    DiscreteTrackChangeState__Fuse_Elements_HitTestMode* inst = (DiscreteTrackChangeState__Fuse_Elements_HitTestMode*)::uAllocObject(sizeof(DiscreteTrackChangeState__Fuse_Elements_HitTestMode), DiscreteTrackChangeState__Fuse_Elements_HitTestMode__typeof());
    inst->_ObjInit_2(animator, p);
    return inst;
}

void DiscreteTrackChangeState__Fuse_Elements_HitTestMode__SeekObjectValue(DiscreteTrackChangeState__Fuse_Elements_HitTestMode* __this, ::uObject* value, float strength)
{
    if (__this->mixHandle == NULL)
    {
        ::app::Uno::Diagnostics::Debug__Log_5(NULL, ::uGetConstString("Invalid Seek"), 1, ::uGetConstString("C:\\ProgramData\\Uno\\Packages\\Fuse.Animations\\0.11.3\\$.uno"), 420);
        return;
    }

    if ((value != NULL) && ::uIs(value, ::app::Fuse::Elements::HitTestMode__typeof()))
    {
        ::app::Fuse::Animations::IMixerHandle__Fuse_Elements_HitTestMode::Set(::uPtr< ::uObject*>(__this->mixHandle), ::uUnbox< int>(::app::Fuse::Elements::HitTestMode__typeof(), value), strength);
    }
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Animations\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

DiscreteTrackChangeState__Fuse_Elements_SizeUnit__uType* DiscreteTrackChangeState__Fuse_Elements_SizeUnit__typeof()
{
    static ::uStaticStrong<DiscreteTrackChangeState__Fuse_Elements_SizeUnit__uType*> type;
    if (type != NULL) return type;

    type = (DiscreteTrackChangeState__Fuse_Elements_SizeUnit__uType*)::uAllocClassType(sizeof(DiscreteTrackChangeState__Fuse_Elements_SizeUnit__uType), "Fuse.Animations.DiscreteTrackChangeState<Fuse.Elements.SizeUnit>", false, 0, 2, 0);

    type->SetBaseType(::app::Fuse::Animations::TrackAnimatorState__typeof());
    type->__fp_Disable = (void(*)(::app::Fuse::Animations::AnimatorState*))DiscreteTrackChangeState__Fuse_Elements_SizeUnit__Disable;
    type->__fp_SeekObjectValue = (void(*)(::app::Fuse::Animations::TrackAnimatorState*, ::uObject*, float))DiscreteTrackChangeState__Fuse_Elements_SizeUnit__SeekObjectValue;

    type->SetStrongRefs(
        "Animator", offsetof(DiscreteTrackChangeState__Fuse_Elements_SizeUnit, Animator_1),
        "mixHandle", offsetof(DiscreteTrackChangeState__Fuse_Elements_SizeUnit, mixHandle));

    return type;
}

void DiscreteTrackChangeState__Fuse_Elements_SizeUnit___ObjInit_2(DiscreteTrackChangeState__Fuse_Elements_SizeUnit* __this, ::app::Fuse::Animations::Change__Fuse_Elements_SizeUnit* animator, ::app::Fuse::Animations::CreateStateParams* p)
{
    ::app::Fuse::Animations::TrackAnimatorState___ObjInit_1(__this, (::app::Fuse::Animations::TrackAnimator*)animator, p, NULL);
    __this->Animator_1 = animator;
    __this->mixHandle = ::app::Fuse::Animations::IMixer::Register__Fuse_Elements_SizeUnit(::uPtr< ::uObject*>(::uPtr< ::app::Fuse::Animations::Change__Fuse_Elements_SizeUnit*>(__this->Animator_1)->Mixer), ::uPtr< ::app::Fuse::Animations::Change__Fuse_Elements_SizeUnit*>(__this->Animator_1)->Target(), ::uPtr< ::app::Fuse::Animations::Change__Fuse_Elements_SizeUnit*>(__this->Animator_1)->MixOp());
}

void DiscreteTrackChangeState__Fuse_Elements_SizeUnit__Disable(DiscreteTrackChangeState__Fuse_Elements_SizeUnit* __this)
{
    if (__this->mixHandle == NULL)
    {
        return;
    }

    ::app::Fuse::Animations::IMixerHandle__Fuse_Elements_SizeUnit::Unregister(::uPtr< ::uObject*>(__this->mixHandle));
    __this->mixHandle = NULL;
}

DiscreteTrackChangeState__Fuse_Elements_SizeUnit* DiscreteTrackChangeState__Fuse_Elements_SizeUnit__New_1(::uStatic* __this, ::app::Fuse::Animations::Change__Fuse_Elements_SizeUnit* animator, ::app::Fuse::Animations::CreateStateParams* p)
{
    DiscreteTrackChangeState__Fuse_Elements_SizeUnit* inst = (DiscreteTrackChangeState__Fuse_Elements_SizeUnit*)::uAllocObject(sizeof(DiscreteTrackChangeState__Fuse_Elements_SizeUnit), DiscreteTrackChangeState__Fuse_Elements_SizeUnit__typeof());
    inst->_ObjInit_2(animator, p);
    return inst;
}

void DiscreteTrackChangeState__Fuse_Elements_SizeUnit__SeekObjectValue(DiscreteTrackChangeState__Fuse_Elements_SizeUnit* __this, ::uObject* value, float strength)
{
    if (__this->mixHandle == NULL)
    {
        ::app::Uno::Diagnostics::Debug__Log_5(NULL, ::uGetConstString("Invalid Seek"), 1, ::uGetConstString("C:\\ProgramData\\Uno\\Packages\\Fuse.Animations\\0.11.3\\$.uno"), 420);
        return;
    }

    if ((value != NULL) && ::uIs(value, ::app::Fuse::Elements::SizeUnit__typeof()))
    {
        ::app::Fuse::Animations::IMixerHandle__Fuse_Elements_SizeUnit::Set(::uPtr< ::uObject*>(__this->mixHandle), ::uUnbox< int>(::app::Fuse::Elements::SizeUnit__typeof(), value), strength);
    }
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Animations\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

DiscreteTrackChangeState__Fuse_Elements_StretchDirection__uType* DiscreteTrackChangeState__Fuse_Elements_StretchDirection__typeof()
{
    static ::uStaticStrong<DiscreteTrackChangeState__Fuse_Elements_StretchDirection__uType*> type;
    if (type != NULL) return type;

    type = (DiscreteTrackChangeState__Fuse_Elements_StretchDirection__uType*)::uAllocClassType(sizeof(DiscreteTrackChangeState__Fuse_Elements_StretchDirection__uType), "Fuse.Animations.DiscreteTrackChangeState<Fuse.Elements.StretchDirection>", false, 0, 2, 0);

    type->SetBaseType(::app::Fuse::Animations::TrackAnimatorState__typeof());
    type->__fp_Disable = (void(*)(::app::Fuse::Animations::AnimatorState*))DiscreteTrackChangeState__Fuse_Elements_StretchDirection__Disable;
    type->__fp_SeekObjectValue = (void(*)(::app::Fuse::Animations::TrackAnimatorState*, ::uObject*, float))DiscreteTrackChangeState__Fuse_Elements_StretchDirection__SeekObjectValue;

    type->SetStrongRefs(
        "Animator", offsetof(DiscreteTrackChangeState__Fuse_Elements_StretchDirection, Animator_1),
        "mixHandle", offsetof(DiscreteTrackChangeState__Fuse_Elements_StretchDirection, mixHandle));

    return type;
}

void DiscreteTrackChangeState__Fuse_Elements_StretchDirection___ObjInit_2(DiscreteTrackChangeState__Fuse_Elements_StretchDirection* __this, ::app::Fuse::Animations::Change__Fuse_Elements_StretchDirection* animator, ::app::Fuse::Animations::CreateStateParams* p)
{
    ::app::Fuse::Animations::TrackAnimatorState___ObjInit_1(__this, (::app::Fuse::Animations::TrackAnimator*)animator, p, NULL);
    __this->Animator_1 = animator;
    __this->mixHandle = ::app::Fuse::Animations::IMixer::Register__Fuse_Elements_StretchDirection(::uPtr< ::uObject*>(::uPtr< ::app::Fuse::Animations::Change__Fuse_Elements_StretchDirection*>(__this->Animator_1)->Mixer), ::uPtr< ::app::Fuse::Animations::Change__Fuse_Elements_StretchDirection*>(__this->Animator_1)->Target(), ::uPtr< ::app::Fuse::Animations::Change__Fuse_Elements_StretchDirection*>(__this->Animator_1)->MixOp());
}

void DiscreteTrackChangeState__Fuse_Elements_StretchDirection__Disable(DiscreteTrackChangeState__Fuse_Elements_StretchDirection* __this)
{
    if (__this->mixHandle == NULL)
    {
        return;
    }

    ::app::Fuse::Animations::IMixerHandle__Fuse_Elements_StretchDirection::Unregister(::uPtr< ::uObject*>(__this->mixHandle));
    __this->mixHandle = NULL;
}

DiscreteTrackChangeState__Fuse_Elements_StretchDirection* DiscreteTrackChangeState__Fuse_Elements_StretchDirection__New_1(::uStatic* __this, ::app::Fuse::Animations::Change__Fuse_Elements_StretchDirection* animator, ::app::Fuse::Animations::CreateStateParams* p)
{
    DiscreteTrackChangeState__Fuse_Elements_StretchDirection* inst = (DiscreteTrackChangeState__Fuse_Elements_StretchDirection*)::uAllocObject(sizeof(DiscreteTrackChangeState__Fuse_Elements_StretchDirection), DiscreteTrackChangeState__Fuse_Elements_StretchDirection__typeof());
    inst->_ObjInit_2(animator, p);
    return inst;
}

void DiscreteTrackChangeState__Fuse_Elements_StretchDirection__SeekObjectValue(DiscreteTrackChangeState__Fuse_Elements_StretchDirection* __this, ::uObject* value, float strength)
{
    if (__this->mixHandle == NULL)
    {
        ::app::Uno::Diagnostics::Debug__Log_5(NULL, ::uGetConstString("Invalid Seek"), 1, ::uGetConstString("C:\\ProgramData\\Uno\\Packages\\Fuse.Animations\\0.11.3\\$.uno"), 420);
        return;
    }

    if ((value != NULL) && ::uIs(value, ::app::Fuse::Elements::StretchDirection__typeof()))
    {
        ::app::Fuse::Animations::IMixerHandle__Fuse_Elements_StretchDirection::Set(::uPtr< ::uObject*>(__this->mixHandle), ::uUnbox< int>(::app::Fuse::Elements::StretchDirection__typeof(), value), strength);
    }
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Animations\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

DiscreteTrackChangeState__Fuse_Elements_StretchMode__uType* DiscreteTrackChangeState__Fuse_Elements_StretchMode__typeof()
{
    static ::uStaticStrong<DiscreteTrackChangeState__Fuse_Elements_StretchMode__uType*> type;
    if (type != NULL) return type;

    type = (DiscreteTrackChangeState__Fuse_Elements_StretchMode__uType*)::uAllocClassType(sizeof(DiscreteTrackChangeState__Fuse_Elements_StretchMode__uType), "Fuse.Animations.DiscreteTrackChangeState<Fuse.Elements.StretchMode>", false, 0, 2, 0);

    type->SetBaseType(::app::Fuse::Animations::TrackAnimatorState__typeof());
    type->__fp_Disable = (void(*)(::app::Fuse::Animations::AnimatorState*))DiscreteTrackChangeState__Fuse_Elements_StretchMode__Disable;
    type->__fp_SeekObjectValue = (void(*)(::app::Fuse::Animations::TrackAnimatorState*, ::uObject*, float))DiscreteTrackChangeState__Fuse_Elements_StretchMode__SeekObjectValue;

    type->SetStrongRefs(
        "Animator", offsetof(DiscreteTrackChangeState__Fuse_Elements_StretchMode, Animator_1),
        "mixHandle", offsetof(DiscreteTrackChangeState__Fuse_Elements_StretchMode, mixHandle));

    return type;
}

void DiscreteTrackChangeState__Fuse_Elements_StretchMode___ObjInit_2(DiscreteTrackChangeState__Fuse_Elements_StretchMode* __this, ::app::Fuse::Animations::Change__Fuse_Elements_StretchMode* animator, ::app::Fuse::Animations::CreateStateParams* p)
{
    ::app::Fuse::Animations::TrackAnimatorState___ObjInit_1(__this, (::app::Fuse::Animations::TrackAnimator*)animator, p, NULL);
    __this->Animator_1 = animator;
    __this->mixHandle = ::app::Fuse::Animations::IMixer::Register__Fuse_Elements_StretchMode(::uPtr< ::uObject*>(::uPtr< ::app::Fuse::Animations::Change__Fuse_Elements_StretchMode*>(__this->Animator_1)->Mixer), ::uPtr< ::app::Fuse::Animations::Change__Fuse_Elements_StretchMode*>(__this->Animator_1)->Target(), ::uPtr< ::app::Fuse::Animations::Change__Fuse_Elements_StretchMode*>(__this->Animator_1)->MixOp());
}

void DiscreteTrackChangeState__Fuse_Elements_StretchMode__Disable(DiscreteTrackChangeState__Fuse_Elements_StretchMode* __this)
{
    if (__this->mixHandle == NULL)
    {
        return;
    }

    ::app::Fuse::Animations::IMixerHandle__Fuse_Elements_StretchMode::Unregister(::uPtr< ::uObject*>(__this->mixHandle));
    __this->mixHandle = NULL;
}

DiscreteTrackChangeState__Fuse_Elements_StretchMode* DiscreteTrackChangeState__Fuse_Elements_StretchMode__New_1(::uStatic* __this, ::app::Fuse::Animations::Change__Fuse_Elements_StretchMode* animator, ::app::Fuse::Animations::CreateStateParams* p)
{
    DiscreteTrackChangeState__Fuse_Elements_StretchMode* inst = (DiscreteTrackChangeState__Fuse_Elements_StretchMode*)::uAllocObject(sizeof(DiscreteTrackChangeState__Fuse_Elements_StretchMode), DiscreteTrackChangeState__Fuse_Elements_StretchMode__typeof());
    inst->_ObjInit_2(animator, p);
    return inst;
}

void DiscreteTrackChangeState__Fuse_Elements_StretchMode__SeekObjectValue(DiscreteTrackChangeState__Fuse_Elements_StretchMode* __this, ::uObject* value, float strength)
{
    if (__this->mixHandle == NULL)
    {
        ::app::Uno::Diagnostics::Debug__Log_5(NULL, ::uGetConstString("Invalid Seek"), 1, ::uGetConstString("C:\\ProgramData\\Uno\\Packages\\Fuse.Animations\\0.11.3\\$.uno"), 420);
        return;
    }

    if ((value != NULL) && ::uIs(value, ::app::Fuse::Elements::StretchMode__typeof()))
    {
        ::app::Fuse::Animations::IMixerHandle__Fuse_Elements_StretchMode::Set(::uPtr< ::uObject*>(__this->mixHandle), ::uUnbox< int>(::app::Fuse::Elements::StretchMode__typeof(), value), strength);
    }
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Animations\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

DiscreteTrackChangeState__Fuse_Elements_StretchSizing__uType* DiscreteTrackChangeState__Fuse_Elements_StretchSizing__typeof()
{
    static ::uStaticStrong<DiscreteTrackChangeState__Fuse_Elements_StretchSizing__uType*> type;
    if (type != NULL) return type;

    type = (DiscreteTrackChangeState__Fuse_Elements_StretchSizing__uType*)::uAllocClassType(sizeof(DiscreteTrackChangeState__Fuse_Elements_StretchSizing__uType), "Fuse.Animations.DiscreteTrackChangeState<Fuse.Elements.StretchSizing>", false, 0, 2, 0);

    type->SetBaseType(::app::Fuse::Animations::TrackAnimatorState__typeof());
    type->__fp_Disable = (void(*)(::app::Fuse::Animations::AnimatorState*))DiscreteTrackChangeState__Fuse_Elements_StretchSizing__Disable;
    type->__fp_SeekObjectValue = (void(*)(::app::Fuse::Animations::TrackAnimatorState*, ::uObject*, float))DiscreteTrackChangeState__Fuse_Elements_StretchSizing__SeekObjectValue;

    type->SetStrongRefs(
        "Animator", offsetof(DiscreteTrackChangeState__Fuse_Elements_StretchSizing, Animator_1),
        "mixHandle", offsetof(DiscreteTrackChangeState__Fuse_Elements_StretchSizing, mixHandle));

    return type;
}

void DiscreteTrackChangeState__Fuse_Elements_StretchSizing___ObjInit_2(DiscreteTrackChangeState__Fuse_Elements_StretchSizing* __this, ::app::Fuse::Animations::Change__Fuse_Elements_StretchSizing* animator, ::app::Fuse::Animations::CreateStateParams* p)
{
    ::app::Fuse::Animations::TrackAnimatorState___ObjInit_1(__this, (::app::Fuse::Animations::TrackAnimator*)animator, p, NULL);
    __this->Animator_1 = animator;
    __this->mixHandle = ::app::Fuse::Animations::IMixer::Register__Fuse_Elements_StretchSizing(::uPtr< ::uObject*>(::uPtr< ::app::Fuse::Animations::Change__Fuse_Elements_StretchSizing*>(__this->Animator_1)->Mixer), ::uPtr< ::app::Fuse::Animations::Change__Fuse_Elements_StretchSizing*>(__this->Animator_1)->Target(), ::uPtr< ::app::Fuse::Animations::Change__Fuse_Elements_StretchSizing*>(__this->Animator_1)->MixOp());
}

void DiscreteTrackChangeState__Fuse_Elements_StretchSizing__Disable(DiscreteTrackChangeState__Fuse_Elements_StretchSizing* __this)
{
    if (__this->mixHandle == NULL)
    {
        return;
    }

    ::app::Fuse::Animations::IMixerHandle__Fuse_Elements_StretchSizing::Unregister(::uPtr< ::uObject*>(__this->mixHandle));
    __this->mixHandle = NULL;
}

DiscreteTrackChangeState__Fuse_Elements_StretchSizing* DiscreteTrackChangeState__Fuse_Elements_StretchSizing__New_1(::uStatic* __this, ::app::Fuse::Animations::Change__Fuse_Elements_StretchSizing* animator, ::app::Fuse::Animations::CreateStateParams* p)
{
    DiscreteTrackChangeState__Fuse_Elements_StretchSizing* inst = (DiscreteTrackChangeState__Fuse_Elements_StretchSizing*)::uAllocObject(sizeof(DiscreteTrackChangeState__Fuse_Elements_StretchSizing), DiscreteTrackChangeState__Fuse_Elements_StretchSizing__typeof());
    inst->_ObjInit_2(animator, p);
    return inst;
}

void DiscreteTrackChangeState__Fuse_Elements_StretchSizing__SeekObjectValue(DiscreteTrackChangeState__Fuse_Elements_StretchSizing* __this, ::uObject* value, float strength)
{
    if (__this->mixHandle == NULL)
    {
        ::app::Uno::Diagnostics::Debug__Log_5(NULL, ::uGetConstString("Invalid Seek"), 1, ::uGetConstString("C:\\ProgramData\\Uno\\Packages\\Fuse.Animations\\0.11.3\\$.uno"), 420);
        return;
    }

    if ((value != NULL) && ::uIs(value, ::app::Fuse::Elements::StretchSizing__typeof()))
    {
        ::app::Fuse::Animations::IMixerHandle__Fuse_Elements_StretchSizing::Set(::uPtr< ::uObject*>(__this->mixHandle), ::uUnbox< int>(::app::Fuse::Elements::StretchSizing__typeof(), value), strength);
    }
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Animations\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

DiscreteTrackChangeState__Fuse_Elements_TextAlignment__uType* DiscreteTrackChangeState__Fuse_Elements_TextAlignment__typeof()
{
    static ::uStaticStrong<DiscreteTrackChangeState__Fuse_Elements_TextAlignment__uType*> type;
    if (type != NULL) return type;

    type = (DiscreteTrackChangeState__Fuse_Elements_TextAlignment__uType*)::uAllocClassType(sizeof(DiscreteTrackChangeState__Fuse_Elements_TextAlignment__uType), "Fuse.Animations.DiscreteTrackChangeState<Fuse.Elements.TextAlignment>", false, 0, 2, 0);

    type->SetBaseType(::app::Fuse::Animations::TrackAnimatorState__typeof());
    type->__fp_Disable = (void(*)(::app::Fuse::Animations::AnimatorState*))DiscreteTrackChangeState__Fuse_Elements_TextAlignment__Disable;
    type->__fp_SeekObjectValue = (void(*)(::app::Fuse::Animations::TrackAnimatorState*, ::uObject*, float))DiscreteTrackChangeState__Fuse_Elements_TextAlignment__SeekObjectValue;

    type->SetStrongRefs(
        "Animator", offsetof(DiscreteTrackChangeState__Fuse_Elements_TextAlignment, Animator_1),
        "mixHandle", offsetof(DiscreteTrackChangeState__Fuse_Elements_TextAlignment, mixHandle));

    return type;
}

void DiscreteTrackChangeState__Fuse_Elements_TextAlignment___ObjInit_2(DiscreteTrackChangeState__Fuse_Elements_TextAlignment* __this, ::app::Fuse::Animations::Change__Fuse_Elements_TextAlignment* animator, ::app::Fuse::Animations::CreateStateParams* p)
{
    ::app::Fuse::Animations::TrackAnimatorState___ObjInit_1(__this, (::app::Fuse::Animations::TrackAnimator*)animator, p, NULL);
    __this->Animator_1 = animator;
    __this->mixHandle = ::app::Fuse::Animations::IMixer::Register__Fuse_Elements_TextAlignment(::uPtr< ::uObject*>(::uPtr< ::app::Fuse::Animations::Change__Fuse_Elements_TextAlignment*>(__this->Animator_1)->Mixer), ::uPtr< ::app::Fuse::Animations::Change__Fuse_Elements_TextAlignment*>(__this->Animator_1)->Target(), ::uPtr< ::app::Fuse::Animations::Change__Fuse_Elements_TextAlignment*>(__this->Animator_1)->MixOp());
}

void DiscreteTrackChangeState__Fuse_Elements_TextAlignment__Disable(DiscreteTrackChangeState__Fuse_Elements_TextAlignment* __this)
{
    if (__this->mixHandle == NULL)
    {
        return;
    }

    ::app::Fuse::Animations::IMixerHandle__Fuse_Elements_TextAlignment::Unregister(::uPtr< ::uObject*>(__this->mixHandle));
    __this->mixHandle = NULL;
}

DiscreteTrackChangeState__Fuse_Elements_TextAlignment* DiscreteTrackChangeState__Fuse_Elements_TextAlignment__New_1(::uStatic* __this, ::app::Fuse::Animations::Change__Fuse_Elements_TextAlignment* animator, ::app::Fuse::Animations::CreateStateParams* p)
{
    DiscreteTrackChangeState__Fuse_Elements_TextAlignment* inst = (DiscreteTrackChangeState__Fuse_Elements_TextAlignment*)::uAllocObject(sizeof(DiscreteTrackChangeState__Fuse_Elements_TextAlignment), DiscreteTrackChangeState__Fuse_Elements_TextAlignment__typeof());
    inst->_ObjInit_2(animator, p);
    return inst;
}

void DiscreteTrackChangeState__Fuse_Elements_TextAlignment__SeekObjectValue(DiscreteTrackChangeState__Fuse_Elements_TextAlignment* __this, ::uObject* value, float strength)
{
    if (__this->mixHandle == NULL)
    {
        ::app::Uno::Diagnostics::Debug__Log_5(NULL, ::uGetConstString("Invalid Seek"), 1, ::uGetConstString("C:\\ProgramData\\Uno\\Packages\\Fuse.Animations\\0.11.3\\$.uno"), 420);
        return;
    }

    if ((value != NULL) && ::uIs(value, ::app::Fuse::Elements::TextAlignment__typeof()))
    {
        ::app::Fuse::Animations::IMixerHandle__Fuse_Elements_TextAlignment::Set(::uPtr< ::uObject*>(__this->mixHandle), ::uUnbox< int>(::app::Fuse::Elements::TextAlignment__typeof(), value), strength);
    }
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Animations\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

DiscreteTrackChangeState__Fuse_Elements_TextWrapping__uType* DiscreteTrackChangeState__Fuse_Elements_TextWrapping__typeof()
{
    static ::uStaticStrong<DiscreteTrackChangeState__Fuse_Elements_TextWrapping__uType*> type;
    if (type != NULL) return type;

    type = (DiscreteTrackChangeState__Fuse_Elements_TextWrapping__uType*)::uAllocClassType(sizeof(DiscreteTrackChangeState__Fuse_Elements_TextWrapping__uType), "Fuse.Animations.DiscreteTrackChangeState<Fuse.Elements.TextWrapping>", false, 0, 2, 0);

    type->SetBaseType(::app::Fuse::Animations::TrackAnimatorState__typeof());
    type->__fp_Disable = (void(*)(::app::Fuse::Animations::AnimatorState*))DiscreteTrackChangeState__Fuse_Elements_TextWrapping__Disable;
    type->__fp_SeekObjectValue = (void(*)(::app::Fuse::Animations::TrackAnimatorState*, ::uObject*, float))DiscreteTrackChangeState__Fuse_Elements_TextWrapping__SeekObjectValue;

    type->SetStrongRefs(
        "Animator", offsetof(DiscreteTrackChangeState__Fuse_Elements_TextWrapping, Animator_1),
        "mixHandle", offsetof(DiscreteTrackChangeState__Fuse_Elements_TextWrapping, mixHandle));

    return type;
}

void DiscreteTrackChangeState__Fuse_Elements_TextWrapping___ObjInit_2(DiscreteTrackChangeState__Fuse_Elements_TextWrapping* __this, ::app::Fuse::Animations::Change__Fuse_Elements_TextWrapping* animator, ::app::Fuse::Animations::CreateStateParams* p)
{
    ::app::Fuse::Animations::TrackAnimatorState___ObjInit_1(__this, (::app::Fuse::Animations::TrackAnimator*)animator, p, NULL);
    __this->Animator_1 = animator;
    __this->mixHandle = ::app::Fuse::Animations::IMixer::Register__Fuse_Elements_TextWrapping(::uPtr< ::uObject*>(::uPtr< ::app::Fuse::Animations::Change__Fuse_Elements_TextWrapping*>(__this->Animator_1)->Mixer), ::uPtr< ::app::Fuse::Animations::Change__Fuse_Elements_TextWrapping*>(__this->Animator_1)->Target(), ::uPtr< ::app::Fuse::Animations::Change__Fuse_Elements_TextWrapping*>(__this->Animator_1)->MixOp());
}

void DiscreteTrackChangeState__Fuse_Elements_TextWrapping__Disable(DiscreteTrackChangeState__Fuse_Elements_TextWrapping* __this)
{
    if (__this->mixHandle == NULL)
    {
        return;
    }

    ::app::Fuse::Animations::IMixerHandle__Fuse_Elements_TextWrapping::Unregister(::uPtr< ::uObject*>(__this->mixHandle));
    __this->mixHandle = NULL;
}

DiscreteTrackChangeState__Fuse_Elements_TextWrapping* DiscreteTrackChangeState__Fuse_Elements_TextWrapping__New_1(::uStatic* __this, ::app::Fuse::Animations::Change__Fuse_Elements_TextWrapping* animator, ::app::Fuse::Animations::CreateStateParams* p)
{
    DiscreteTrackChangeState__Fuse_Elements_TextWrapping* inst = (DiscreteTrackChangeState__Fuse_Elements_TextWrapping*)::uAllocObject(sizeof(DiscreteTrackChangeState__Fuse_Elements_TextWrapping), DiscreteTrackChangeState__Fuse_Elements_TextWrapping__typeof());
    inst->_ObjInit_2(animator, p);
    return inst;
}

void DiscreteTrackChangeState__Fuse_Elements_TextWrapping__SeekObjectValue(DiscreteTrackChangeState__Fuse_Elements_TextWrapping* __this, ::uObject* value, float strength)
{
    if (__this->mixHandle == NULL)
    {
        ::app::Uno::Diagnostics::Debug__Log_5(NULL, ::uGetConstString("Invalid Seek"), 1, ::uGetConstString("C:\\ProgramData\\Uno\\Packages\\Fuse.Animations\\0.11.3\\$.uno"), 420);
        return;
    }

    if ((value != NULL) && ::uIs(value, ::app::Fuse::Elements::TextWrapping__typeof()))
    {
        ::app::Fuse::Animations::IMixerHandle__Fuse_Elements_TextWrapping::Set(::uPtr< ::uObject*>(__this->mixHandle), ::uUnbox< int>(::app::Fuse::Elements::TextWrapping__typeof(), value), strength);
    }
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Animations\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

DiscreteTrackChangeState__Fuse_Elements_Visibility__uType* DiscreteTrackChangeState__Fuse_Elements_Visibility__typeof()
{
    static ::uStaticStrong<DiscreteTrackChangeState__Fuse_Elements_Visibility__uType*> type;
    if (type != NULL) return type;

    type = (DiscreteTrackChangeState__Fuse_Elements_Visibility__uType*)::uAllocClassType(sizeof(DiscreteTrackChangeState__Fuse_Elements_Visibility__uType), "Fuse.Animations.DiscreteTrackChangeState<Fuse.Elements.Visibility>", false, 0, 2, 0);

    type->SetBaseType(::app::Fuse::Animations::TrackAnimatorState__typeof());
    type->__fp_Disable = (void(*)(::app::Fuse::Animations::AnimatorState*))DiscreteTrackChangeState__Fuse_Elements_Visibility__Disable;
    type->__fp_SeekObjectValue = (void(*)(::app::Fuse::Animations::TrackAnimatorState*, ::uObject*, float))DiscreteTrackChangeState__Fuse_Elements_Visibility__SeekObjectValue;

    type->SetStrongRefs(
        "Animator", offsetof(DiscreteTrackChangeState__Fuse_Elements_Visibility, Animator_1),
        "mixHandle", offsetof(DiscreteTrackChangeState__Fuse_Elements_Visibility, mixHandle));

    return type;
}

void DiscreteTrackChangeState__Fuse_Elements_Visibility___ObjInit_2(DiscreteTrackChangeState__Fuse_Elements_Visibility* __this, ::app::Fuse::Animations::Change__Fuse_Elements_Visibility* animator, ::app::Fuse::Animations::CreateStateParams* p)
{
    ::app::Fuse::Animations::TrackAnimatorState___ObjInit_1(__this, (::app::Fuse::Animations::TrackAnimator*)animator, p, NULL);
    __this->Animator_1 = animator;
    __this->mixHandle = ::app::Fuse::Animations::IMixer::Register__Fuse_Elements_Visibility(::uPtr< ::uObject*>(::uPtr< ::app::Fuse::Animations::Change__Fuse_Elements_Visibility*>(__this->Animator_1)->Mixer), ::uPtr< ::app::Fuse::Animations::Change__Fuse_Elements_Visibility*>(__this->Animator_1)->Target(), ::uPtr< ::app::Fuse::Animations::Change__Fuse_Elements_Visibility*>(__this->Animator_1)->MixOp());
}

void DiscreteTrackChangeState__Fuse_Elements_Visibility__Disable(DiscreteTrackChangeState__Fuse_Elements_Visibility* __this)
{
    if (__this->mixHandle == NULL)
    {
        return;
    }

    ::app::Fuse::Animations::IMixerHandle__Fuse_Elements_Visibility::Unregister(::uPtr< ::uObject*>(__this->mixHandle));
    __this->mixHandle = NULL;
}

DiscreteTrackChangeState__Fuse_Elements_Visibility* DiscreteTrackChangeState__Fuse_Elements_Visibility__New_1(::uStatic* __this, ::app::Fuse::Animations::Change__Fuse_Elements_Visibility* animator, ::app::Fuse::Animations::CreateStateParams* p)
{
    DiscreteTrackChangeState__Fuse_Elements_Visibility* inst = (DiscreteTrackChangeState__Fuse_Elements_Visibility*)::uAllocObject(sizeof(DiscreteTrackChangeState__Fuse_Elements_Visibility), DiscreteTrackChangeState__Fuse_Elements_Visibility__typeof());
    inst->_ObjInit_2(animator, p);
    return inst;
}

void DiscreteTrackChangeState__Fuse_Elements_Visibility__SeekObjectValue(DiscreteTrackChangeState__Fuse_Elements_Visibility* __this, ::uObject* value, float strength)
{
    if (__this->mixHandle == NULL)
    {
        ::app::Uno::Diagnostics::Debug__Log_5(NULL, ::uGetConstString("Invalid Seek"), 1, ::uGetConstString("C:\\ProgramData\\Uno\\Packages\\Fuse.Animations\\0.11.3\\$.uno"), 420);
        return;
    }

    if ((value != NULL) && ::uIs(value, ::app::Fuse::Elements::Visibility__typeof()))
    {
        ::app::Fuse::Animations::IMixerHandle__Fuse_Elements_Visibility::Set(::uPtr< ::uObject*>(__this->mixHandle), ::uUnbox< int>(::app::Fuse::Elements::Visibility__typeof(), value), strength);
    }
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Animations\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

DiscreteTrackChangeState__Fuse_Font__uType* DiscreteTrackChangeState__Fuse_Font__typeof()
{
    static ::uStaticStrong<DiscreteTrackChangeState__Fuse_Font__uType*> type;
    if (type != NULL) return type;

    type = (DiscreteTrackChangeState__Fuse_Font__uType*)::uAllocClassType(sizeof(DiscreteTrackChangeState__Fuse_Font__uType), "Fuse.Animations.DiscreteTrackChangeState<Fuse.Font>", false, 0, 2, 0);

    type->SetBaseType(::app::Fuse::Animations::TrackAnimatorState__typeof());
    type->__fp_Disable = (void(*)(::app::Fuse::Animations::AnimatorState*))DiscreteTrackChangeState__Fuse_Font__Disable;
    type->__fp_SeekObjectValue = (void(*)(::app::Fuse::Animations::TrackAnimatorState*, ::uObject*, float))DiscreteTrackChangeState__Fuse_Font__SeekObjectValue;

    type->SetStrongRefs(
        "Animator", offsetof(DiscreteTrackChangeState__Fuse_Font, Animator_1),
        "mixHandle", offsetof(DiscreteTrackChangeState__Fuse_Font, mixHandle));

    return type;
}

void DiscreteTrackChangeState__Fuse_Font___ObjInit_2(DiscreteTrackChangeState__Fuse_Font* __this, ::app::Fuse::Animations::Change__Fuse_Font* animator, ::app::Fuse::Animations::CreateStateParams* p)
{
    ::app::Fuse::Animations::TrackAnimatorState___ObjInit_1(__this, (::app::Fuse::Animations::TrackAnimator*)animator, p, NULL);
    __this->Animator_1 = animator;
    __this->mixHandle = ::app::Fuse::Animations::IMixer::Register__Fuse_Font(::uPtr< ::uObject*>(::uPtr< ::app::Fuse::Animations::Change__Fuse_Font*>(__this->Animator_1)->Mixer), ::uPtr< ::app::Fuse::Animations::Change__Fuse_Font*>(__this->Animator_1)->Target(), ::uPtr< ::app::Fuse::Animations::Change__Fuse_Font*>(__this->Animator_1)->MixOp());
}

void DiscreteTrackChangeState__Fuse_Font__Disable(DiscreteTrackChangeState__Fuse_Font* __this)
{
    if (__this->mixHandle == NULL)
    {
        return;
    }

    ::app::Fuse::Animations::IMixerHandle__Fuse_Font::Unregister(::uPtr< ::uObject*>(__this->mixHandle));
    __this->mixHandle = NULL;
}

DiscreteTrackChangeState__Fuse_Font* DiscreteTrackChangeState__Fuse_Font__New_1(::uStatic* __this, ::app::Fuse::Animations::Change__Fuse_Font* animator, ::app::Fuse::Animations::CreateStateParams* p)
{
    DiscreteTrackChangeState__Fuse_Font* inst = (DiscreteTrackChangeState__Fuse_Font*)::uAllocObject(sizeof(DiscreteTrackChangeState__Fuse_Font), DiscreteTrackChangeState__Fuse_Font__typeof());
    inst->_ObjInit_2(animator, p);
    return inst;
}

void DiscreteTrackChangeState__Fuse_Font__SeekObjectValue(DiscreteTrackChangeState__Fuse_Font* __this, ::uObject* value, float strength)
{
    if (__this->mixHandle == NULL)
    {
        ::app::Uno::Diagnostics::Debug__Log_5(NULL, ::uGetConstString("Invalid Seek"), 1, ::uGetConstString("C:\\ProgramData\\Uno\\Packages\\Fuse.Animations\\0.11.3\\$.uno"), 420);
        return;
    }

    if ((value != NULL) && ::uIs(value, ::app::Fuse::Font__typeof()))
    {
        ::app::Fuse::Animations::IMixerHandle__Fuse_Font::Set(::uPtr< ::uObject*>(__this->mixHandle), ::uCast< ::app::Fuse::Font*>(value, ::app::Fuse::Font__typeof()), strength);
    }
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Animations\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

DiscreteTrackChangeState__Fuse_Gestures_Edge__uType* DiscreteTrackChangeState__Fuse_Gestures_Edge__typeof()
{
    static ::uStaticStrong<DiscreteTrackChangeState__Fuse_Gestures_Edge__uType*> type;
    if (type != NULL) return type;

    type = (DiscreteTrackChangeState__Fuse_Gestures_Edge__uType*)::uAllocClassType(sizeof(DiscreteTrackChangeState__Fuse_Gestures_Edge__uType), "Fuse.Animations.DiscreteTrackChangeState<Fuse.Gestures.Edge>", false, 0, 2, 0);

    type->SetBaseType(::app::Fuse::Animations::TrackAnimatorState__typeof());
    type->__fp_Disable = (void(*)(::app::Fuse::Animations::AnimatorState*))DiscreteTrackChangeState__Fuse_Gestures_Edge__Disable;
    type->__fp_SeekObjectValue = (void(*)(::app::Fuse::Animations::TrackAnimatorState*, ::uObject*, float))DiscreteTrackChangeState__Fuse_Gestures_Edge__SeekObjectValue;

    type->SetStrongRefs(
        "Animator", offsetof(DiscreteTrackChangeState__Fuse_Gestures_Edge, Animator_1),
        "mixHandle", offsetof(DiscreteTrackChangeState__Fuse_Gestures_Edge, mixHandle));

    return type;
}

void DiscreteTrackChangeState__Fuse_Gestures_Edge___ObjInit_2(DiscreteTrackChangeState__Fuse_Gestures_Edge* __this, ::app::Fuse::Animations::Change__Fuse_Gestures_Edge* animator, ::app::Fuse::Animations::CreateStateParams* p)
{
    ::app::Fuse::Animations::TrackAnimatorState___ObjInit_1(__this, (::app::Fuse::Animations::TrackAnimator*)animator, p, NULL);
    __this->Animator_1 = animator;
    __this->mixHandle = ::app::Fuse::Animations::IMixer::Register__Fuse_Gestures_Edge(::uPtr< ::uObject*>(::uPtr< ::app::Fuse::Animations::Change__Fuse_Gestures_Edge*>(__this->Animator_1)->Mixer), ::uPtr< ::app::Fuse::Animations::Change__Fuse_Gestures_Edge*>(__this->Animator_1)->Target(), ::uPtr< ::app::Fuse::Animations::Change__Fuse_Gestures_Edge*>(__this->Animator_1)->MixOp());
}

void DiscreteTrackChangeState__Fuse_Gestures_Edge__Disable(DiscreteTrackChangeState__Fuse_Gestures_Edge* __this)
{
    if (__this->mixHandle == NULL)
    {
        return;
    }

    ::app::Fuse::Animations::IMixerHandle__Fuse_Gestures_Edge::Unregister(::uPtr< ::uObject*>(__this->mixHandle));
    __this->mixHandle = NULL;
}

DiscreteTrackChangeState__Fuse_Gestures_Edge* DiscreteTrackChangeState__Fuse_Gestures_Edge__New_1(::uStatic* __this, ::app::Fuse::Animations::Change__Fuse_Gestures_Edge* animator, ::app::Fuse::Animations::CreateStateParams* p)
{
    DiscreteTrackChangeState__Fuse_Gestures_Edge* inst = (DiscreteTrackChangeState__Fuse_Gestures_Edge*)::uAllocObject(sizeof(DiscreteTrackChangeState__Fuse_Gestures_Edge), DiscreteTrackChangeState__Fuse_Gestures_Edge__typeof());
    inst->_ObjInit_2(animator, p);
    return inst;
}

void DiscreteTrackChangeState__Fuse_Gestures_Edge__SeekObjectValue(DiscreteTrackChangeState__Fuse_Gestures_Edge* __this, ::uObject* value, float strength)
{
    if (__this->mixHandle == NULL)
    {
        ::app::Uno::Diagnostics::Debug__Log_5(NULL, ::uGetConstString("Invalid Seek"), 1, ::uGetConstString("C:\\ProgramData\\Uno\\Packages\\Fuse.Animations\\0.11.3\\$.uno"), 420);
        return;
    }

    if ((value != NULL) && ::uIs(value, ::app::Fuse::Gestures::Edge__typeof()))
    {
        ::app::Fuse::Animations::IMixerHandle__Fuse_Gestures_Edge::Set(::uPtr< ::uObject*>(__this->mixHandle), ::uUnbox< int>(::app::Fuse::Gestures::Edge__typeof(), value), strength);
    }
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Animations\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

DiscreteTrackChangeState__Fuse_Gestures_ScrollDirections__uType* DiscreteTrackChangeState__Fuse_Gestures_ScrollDirections__typeof()
{
    static ::uStaticStrong<DiscreteTrackChangeState__Fuse_Gestures_ScrollDirections__uType*> type;
    if (type != NULL) return type;

    type = (DiscreteTrackChangeState__Fuse_Gestures_ScrollDirections__uType*)::uAllocClassType(sizeof(DiscreteTrackChangeState__Fuse_Gestures_ScrollDirections__uType), "Fuse.Animations.DiscreteTrackChangeState<Fuse.Gestures.ScrollDirections>", false, 0, 2, 0);

    type->SetBaseType(::app::Fuse::Animations::TrackAnimatorState__typeof());
    type->__fp_Disable = (void(*)(::app::Fuse::Animations::AnimatorState*))DiscreteTrackChangeState__Fuse_Gestures_ScrollDirections__Disable;
    type->__fp_SeekObjectValue = (void(*)(::app::Fuse::Animations::TrackAnimatorState*, ::uObject*, float))DiscreteTrackChangeState__Fuse_Gestures_ScrollDirections__SeekObjectValue;

    type->SetStrongRefs(
        "Animator", offsetof(DiscreteTrackChangeState__Fuse_Gestures_ScrollDirections, Animator_1),
        "mixHandle", offsetof(DiscreteTrackChangeState__Fuse_Gestures_ScrollDirections, mixHandle));

    return type;
}

void DiscreteTrackChangeState__Fuse_Gestures_ScrollDirections___ObjInit_2(DiscreteTrackChangeState__Fuse_Gestures_ScrollDirections* __this, ::app::Fuse::Animations::Change__Fuse_Gestures_ScrollDirections* animator, ::app::Fuse::Animations::CreateStateParams* p)
{
    ::app::Fuse::Animations::TrackAnimatorState___ObjInit_1(__this, (::app::Fuse::Animations::TrackAnimator*)animator, p, NULL);
    __this->Animator_1 = animator;
    __this->mixHandle = ::app::Fuse::Animations::IMixer::Register__Fuse_Gestures_ScrollDirections(::uPtr< ::uObject*>(::uPtr< ::app::Fuse::Animations::Change__Fuse_Gestures_ScrollDirections*>(__this->Animator_1)->Mixer), ::uPtr< ::app::Fuse::Animations::Change__Fuse_Gestures_ScrollDirections*>(__this->Animator_1)->Target(), ::uPtr< ::app::Fuse::Animations::Change__Fuse_Gestures_ScrollDirections*>(__this->Animator_1)->MixOp());
}

void DiscreteTrackChangeState__Fuse_Gestures_ScrollDirections__Disable(DiscreteTrackChangeState__Fuse_Gestures_ScrollDirections* __this)
{
    if (__this->mixHandle == NULL)
    {
        return;
    }

    ::app::Fuse::Animations::IMixerHandle__Fuse_Gestures_ScrollDirections::Unregister(::uPtr< ::uObject*>(__this->mixHandle));
    __this->mixHandle = NULL;
}

DiscreteTrackChangeState__Fuse_Gestures_ScrollDirections* DiscreteTrackChangeState__Fuse_Gestures_ScrollDirections__New_1(::uStatic* __this, ::app::Fuse::Animations::Change__Fuse_Gestures_ScrollDirections* animator, ::app::Fuse::Animations::CreateStateParams* p)
{
    DiscreteTrackChangeState__Fuse_Gestures_ScrollDirections* inst = (DiscreteTrackChangeState__Fuse_Gestures_ScrollDirections*)::uAllocObject(sizeof(DiscreteTrackChangeState__Fuse_Gestures_ScrollDirections), DiscreteTrackChangeState__Fuse_Gestures_ScrollDirections__typeof());
    inst->_ObjInit_2(animator, p);
    return inst;
}

void DiscreteTrackChangeState__Fuse_Gestures_ScrollDirections__SeekObjectValue(DiscreteTrackChangeState__Fuse_Gestures_ScrollDirections* __this, ::uObject* value, float strength)
{
    if (__this->mixHandle == NULL)
    {
        ::app::Uno::Diagnostics::Debug__Log_5(NULL, ::uGetConstString("Invalid Seek"), 1, ::uGetConstString("C:\\ProgramData\\Uno\\Packages\\Fuse.Animations\\0.11.3\\$.uno"), 420);
        return;
    }

    if ((value != NULL) && ::uIs(value, ::app::Fuse::Gestures::ScrollDirections__typeof()))
    {
        ::app::Fuse::Animations::IMixerHandle__Fuse_Gestures_ScrollDirections::Set(::uPtr< ::uObject*>(__this->mixHandle), ::uUnbox< int>(::app::Fuse::Gestures::ScrollDirections__typeof(), value), strength);
    }
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Animations\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

DiscreteTrackChangeState__Fuse_Layouts_Dock__uType* DiscreteTrackChangeState__Fuse_Layouts_Dock__typeof()
{
    static ::uStaticStrong<DiscreteTrackChangeState__Fuse_Layouts_Dock__uType*> type;
    if (type != NULL) return type;

    type = (DiscreteTrackChangeState__Fuse_Layouts_Dock__uType*)::uAllocClassType(sizeof(DiscreteTrackChangeState__Fuse_Layouts_Dock__uType), "Fuse.Animations.DiscreteTrackChangeState<Fuse.Layouts.Dock>", false, 0, 2, 0);

    type->SetBaseType(::app::Fuse::Animations::TrackAnimatorState__typeof());
    type->__fp_Disable = (void(*)(::app::Fuse::Animations::AnimatorState*))DiscreteTrackChangeState__Fuse_Layouts_Dock__Disable;
    type->__fp_SeekObjectValue = (void(*)(::app::Fuse::Animations::TrackAnimatorState*, ::uObject*, float))DiscreteTrackChangeState__Fuse_Layouts_Dock__SeekObjectValue;

    type->SetStrongRefs(
        "Animator", offsetof(DiscreteTrackChangeState__Fuse_Layouts_Dock, Animator_1),
        "mixHandle", offsetof(DiscreteTrackChangeState__Fuse_Layouts_Dock, mixHandle));

    return type;
}

void DiscreteTrackChangeState__Fuse_Layouts_Dock___ObjInit_2(DiscreteTrackChangeState__Fuse_Layouts_Dock* __this, ::app::Fuse::Animations::Change__Fuse_Layouts_Dock* animator, ::app::Fuse::Animations::CreateStateParams* p)
{
    ::app::Fuse::Animations::TrackAnimatorState___ObjInit_1(__this, (::app::Fuse::Animations::TrackAnimator*)animator, p, NULL);
    __this->Animator_1 = animator;
    __this->mixHandle = ::app::Fuse::Animations::IMixer::Register__Fuse_Layouts_Dock(::uPtr< ::uObject*>(::uPtr< ::app::Fuse::Animations::Change__Fuse_Layouts_Dock*>(__this->Animator_1)->Mixer), ::uPtr< ::app::Fuse::Animations::Change__Fuse_Layouts_Dock*>(__this->Animator_1)->Target(), ::uPtr< ::app::Fuse::Animations::Change__Fuse_Layouts_Dock*>(__this->Animator_1)->MixOp());
}

void DiscreteTrackChangeState__Fuse_Layouts_Dock__Disable(DiscreteTrackChangeState__Fuse_Layouts_Dock* __this)
{
    if (__this->mixHandle == NULL)
    {
        return;
    }

    ::app::Fuse::Animations::IMixerHandle__Fuse_Layouts_Dock::Unregister(::uPtr< ::uObject*>(__this->mixHandle));
    __this->mixHandle = NULL;
}

DiscreteTrackChangeState__Fuse_Layouts_Dock* DiscreteTrackChangeState__Fuse_Layouts_Dock__New_1(::uStatic* __this, ::app::Fuse::Animations::Change__Fuse_Layouts_Dock* animator, ::app::Fuse::Animations::CreateStateParams* p)
{
    DiscreteTrackChangeState__Fuse_Layouts_Dock* inst = (DiscreteTrackChangeState__Fuse_Layouts_Dock*)::uAllocObject(sizeof(DiscreteTrackChangeState__Fuse_Layouts_Dock), DiscreteTrackChangeState__Fuse_Layouts_Dock__typeof());
    inst->_ObjInit_2(animator, p);
    return inst;
}

void DiscreteTrackChangeState__Fuse_Layouts_Dock__SeekObjectValue(DiscreteTrackChangeState__Fuse_Layouts_Dock* __this, ::uObject* value, float strength)
{
    if (__this->mixHandle == NULL)
    {
        ::app::Uno::Diagnostics::Debug__Log_5(NULL, ::uGetConstString("Invalid Seek"), 1, ::uGetConstString("C:\\ProgramData\\Uno\\Packages\\Fuse.Animations\\0.11.3\\$.uno"), 420);
        return;
    }

    if ((value != NULL) && ::uIs(value, ::app::Fuse::Layouts::Dock__typeof()))
    {
        ::app::Fuse::Animations::IMixerHandle__Fuse_Layouts_Dock::Set(::uPtr< ::uObject*>(__this->mixHandle), ::uUnbox< int>(::app::Fuse::Layouts::Dock__typeof(), value), strength);
    }
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Animations\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

DiscreteTrackChangeState__Fuse_Layouts_FlowDirection__uType* DiscreteTrackChangeState__Fuse_Layouts_FlowDirection__typeof()
{
    static ::uStaticStrong<DiscreteTrackChangeState__Fuse_Layouts_FlowDirection__uType*> type;
    if (type != NULL) return type;

    type = (DiscreteTrackChangeState__Fuse_Layouts_FlowDirection__uType*)::uAllocClassType(sizeof(DiscreteTrackChangeState__Fuse_Layouts_FlowDirection__uType), "Fuse.Animations.DiscreteTrackChangeState<Fuse.Layouts.FlowDirection>", false, 0, 2, 0);

    type->SetBaseType(::app::Fuse::Animations::TrackAnimatorState__typeof());
    type->__fp_Disable = (void(*)(::app::Fuse::Animations::AnimatorState*))DiscreteTrackChangeState__Fuse_Layouts_FlowDirection__Disable;
    type->__fp_SeekObjectValue = (void(*)(::app::Fuse::Animations::TrackAnimatorState*, ::uObject*, float))DiscreteTrackChangeState__Fuse_Layouts_FlowDirection__SeekObjectValue;

    type->SetStrongRefs(
        "Animator", offsetof(DiscreteTrackChangeState__Fuse_Layouts_FlowDirection, Animator_1),
        "mixHandle", offsetof(DiscreteTrackChangeState__Fuse_Layouts_FlowDirection, mixHandle));

    return type;
}

void DiscreteTrackChangeState__Fuse_Layouts_FlowDirection___ObjInit_2(DiscreteTrackChangeState__Fuse_Layouts_FlowDirection* __this, ::app::Fuse::Animations::Change__Fuse_Layouts_FlowDirection* animator, ::app::Fuse::Animations::CreateStateParams* p)
{
    ::app::Fuse::Animations::TrackAnimatorState___ObjInit_1(__this, (::app::Fuse::Animations::TrackAnimator*)animator, p, NULL);
    __this->Animator_1 = animator;
    __this->mixHandle = ::app::Fuse::Animations::IMixer::Register__Fuse_Layouts_FlowDirection(::uPtr< ::uObject*>(::uPtr< ::app::Fuse::Animations::Change__Fuse_Layouts_FlowDirection*>(__this->Animator_1)->Mixer), ::uPtr< ::app::Fuse::Animations::Change__Fuse_Layouts_FlowDirection*>(__this->Animator_1)->Target(), ::uPtr< ::app::Fuse::Animations::Change__Fuse_Layouts_FlowDirection*>(__this->Animator_1)->MixOp());
}

void DiscreteTrackChangeState__Fuse_Layouts_FlowDirection__Disable(DiscreteTrackChangeState__Fuse_Layouts_FlowDirection* __this)
{
    if (__this->mixHandle == NULL)
    {
        return;
    }

    ::app::Fuse::Animations::IMixerHandle__Fuse_Layouts_FlowDirection::Unregister(::uPtr< ::uObject*>(__this->mixHandle));
    __this->mixHandle = NULL;
}

DiscreteTrackChangeState__Fuse_Layouts_FlowDirection* DiscreteTrackChangeState__Fuse_Layouts_FlowDirection__New_1(::uStatic* __this, ::app::Fuse::Animations::Change__Fuse_Layouts_FlowDirection* animator, ::app::Fuse::Animations::CreateStateParams* p)
{
    DiscreteTrackChangeState__Fuse_Layouts_FlowDirection* inst = (DiscreteTrackChangeState__Fuse_Layouts_FlowDirection*)::uAllocObject(sizeof(DiscreteTrackChangeState__Fuse_Layouts_FlowDirection), DiscreteTrackChangeState__Fuse_Layouts_FlowDirection__typeof());
    inst->_ObjInit_2(animator, p);
    return inst;
}

void DiscreteTrackChangeState__Fuse_Layouts_FlowDirection__SeekObjectValue(DiscreteTrackChangeState__Fuse_Layouts_FlowDirection* __this, ::uObject* value, float strength)
{
    if (__this->mixHandle == NULL)
    {
        ::app::Uno::Diagnostics::Debug__Log_5(NULL, ::uGetConstString("Invalid Seek"), 1, ::uGetConstString("C:\\ProgramData\\Uno\\Packages\\Fuse.Animations\\0.11.3\\$.uno"), 420);
        return;
    }

    if ((value != NULL) && ::uIs(value, ::app::Fuse::Layouts::FlowDirection__typeof()))
    {
        ::app::Fuse::Animations::IMixerHandle__Fuse_Layouts_FlowDirection::Set(::uPtr< ::uObject*>(__this->mixHandle), ::uUnbox< int>(::app::Fuse::Layouts::FlowDirection__typeof(), value), strength);
    }
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Animations\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

DiscreteTrackChangeState__Fuse_Layouts_Metric__uType* DiscreteTrackChangeState__Fuse_Layouts_Metric__typeof()
{
    static ::uStaticStrong<DiscreteTrackChangeState__Fuse_Layouts_Metric__uType*> type;
    if (type != NULL) return type;

    type = (DiscreteTrackChangeState__Fuse_Layouts_Metric__uType*)::uAllocClassType(sizeof(DiscreteTrackChangeState__Fuse_Layouts_Metric__uType), "Fuse.Animations.DiscreteTrackChangeState<Fuse.Layouts.Metric>", false, 0, 2, 0);

    type->SetBaseType(::app::Fuse::Animations::TrackAnimatorState__typeof());
    type->__fp_Disable = (void(*)(::app::Fuse::Animations::AnimatorState*))DiscreteTrackChangeState__Fuse_Layouts_Metric__Disable;
    type->__fp_SeekObjectValue = (void(*)(::app::Fuse::Animations::TrackAnimatorState*, ::uObject*, float))DiscreteTrackChangeState__Fuse_Layouts_Metric__SeekObjectValue;

    type->SetStrongRefs(
        "Animator", offsetof(DiscreteTrackChangeState__Fuse_Layouts_Metric, Animator_1),
        "mixHandle", offsetof(DiscreteTrackChangeState__Fuse_Layouts_Metric, mixHandle));

    return type;
}

void DiscreteTrackChangeState__Fuse_Layouts_Metric___ObjInit_2(DiscreteTrackChangeState__Fuse_Layouts_Metric* __this, ::app::Fuse::Animations::Change__Fuse_Layouts_Metric* animator, ::app::Fuse::Animations::CreateStateParams* p)
{
    ::app::Fuse::Animations::TrackAnimatorState___ObjInit_1(__this, (::app::Fuse::Animations::TrackAnimator*)animator, p, NULL);
    __this->Animator_1 = animator;
    __this->mixHandle = ::app::Fuse::Animations::IMixer::Register__Fuse_Layouts_Metric(::uPtr< ::uObject*>(::uPtr< ::app::Fuse::Animations::Change__Fuse_Layouts_Metric*>(__this->Animator_1)->Mixer), ::uPtr< ::app::Fuse::Animations::Change__Fuse_Layouts_Metric*>(__this->Animator_1)->Target(), ::uPtr< ::app::Fuse::Animations::Change__Fuse_Layouts_Metric*>(__this->Animator_1)->MixOp());
}

void DiscreteTrackChangeState__Fuse_Layouts_Metric__Disable(DiscreteTrackChangeState__Fuse_Layouts_Metric* __this)
{
    if (__this->mixHandle == NULL)
    {
        return;
    }

    ::app::Fuse::Animations::IMixerHandle__Fuse_Layouts_Metric::Unregister(::uPtr< ::uObject*>(__this->mixHandle));
    __this->mixHandle = NULL;
}

DiscreteTrackChangeState__Fuse_Layouts_Metric* DiscreteTrackChangeState__Fuse_Layouts_Metric__New_1(::uStatic* __this, ::app::Fuse::Animations::Change__Fuse_Layouts_Metric* animator, ::app::Fuse::Animations::CreateStateParams* p)
{
    DiscreteTrackChangeState__Fuse_Layouts_Metric* inst = (DiscreteTrackChangeState__Fuse_Layouts_Metric*)::uAllocObject(sizeof(DiscreteTrackChangeState__Fuse_Layouts_Metric), DiscreteTrackChangeState__Fuse_Layouts_Metric__typeof());
    inst->_ObjInit_2(animator, p);
    return inst;
}

void DiscreteTrackChangeState__Fuse_Layouts_Metric__SeekObjectValue(DiscreteTrackChangeState__Fuse_Layouts_Metric* __this, ::uObject* value, float strength)
{
    if (__this->mixHandle == NULL)
    {
        ::app::Uno::Diagnostics::Debug__Log_5(NULL, ::uGetConstString("Invalid Seek"), 1, ::uGetConstString("C:\\ProgramData\\Uno\\Packages\\Fuse.Animations\\0.11.3\\$.uno"), 420);
        return;
    }

    if ((value != NULL) && ::uIs(value, ::app::Fuse::Layouts::Metric__typeof()))
    {
        ::app::Fuse::Animations::IMixerHandle__Fuse_Layouts_Metric::Set(::uPtr< ::uObject*>(__this->mixHandle), ::uUnbox< int>(::app::Fuse::Layouts::Metric__typeof(), value), strength);
    }
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Animations\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

DiscreteTrackChangeState__Fuse_Layouts_Orientation__uType* DiscreteTrackChangeState__Fuse_Layouts_Orientation__typeof()
{
    static ::uStaticStrong<DiscreteTrackChangeState__Fuse_Layouts_Orientation__uType*> type;
    if (type != NULL) return type;

    type = (DiscreteTrackChangeState__Fuse_Layouts_Orientation__uType*)::uAllocClassType(sizeof(DiscreteTrackChangeState__Fuse_Layouts_Orientation__uType), "Fuse.Animations.DiscreteTrackChangeState<Fuse.Layouts.Orientation>", false, 0, 2, 0);

    type->SetBaseType(::app::Fuse::Animations::TrackAnimatorState__typeof());
    type->__fp_Disable = (void(*)(::app::Fuse::Animations::AnimatorState*))DiscreteTrackChangeState__Fuse_Layouts_Orientation__Disable;
    type->__fp_SeekObjectValue = (void(*)(::app::Fuse::Animations::TrackAnimatorState*, ::uObject*, float))DiscreteTrackChangeState__Fuse_Layouts_Orientation__SeekObjectValue;

    type->SetStrongRefs(
        "Animator", offsetof(DiscreteTrackChangeState__Fuse_Layouts_Orientation, Animator_1),
        "mixHandle", offsetof(DiscreteTrackChangeState__Fuse_Layouts_Orientation, mixHandle));

    return type;
}

void DiscreteTrackChangeState__Fuse_Layouts_Orientation___ObjInit_2(DiscreteTrackChangeState__Fuse_Layouts_Orientation* __this, ::app::Fuse::Animations::Change__Fuse_Layouts_Orientation* animator, ::app::Fuse::Animations::CreateStateParams* p)
{
    ::app::Fuse::Animations::TrackAnimatorState___ObjInit_1(__this, (::app::Fuse::Animations::TrackAnimator*)animator, p, NULL);
    __this->Animator_1 = animator;
    __this->mixHandle = ::app::Fuse::Animations::IMixer::Register__Fuse_Layouts_Orientation(::uPtr< ::uObject*>(::uPtr< ::app::Fuse::Animations::Change__Fuse_Layouts_Orientation*>(__this->Animator_1)->Mixer), ::uPtr< ::app::Fuse::Animations::Change__Fuse_Layouts_Orientation*>(__this->Animator_1)->Target(), ::uPtr< ::app::Fuse::Animations::Change__Fuse_Layouts_Orientation*>(__this->Animator_1)->MixOp());
}

void DiscreteTrackChangeState__Fuse_Layouts_Orientation__Disable(DiscreteTrackChangeState__Fuse_Layouts_Orientation* __this)
{
    if (__this->mixHandle == NULL)
    {
        return;
    }

    ::app::Fuse::Animations::IMixerHandle__Fuse_Layouts_Orientation::Unregister(::uPtr< ::uObject*>(__this->mixHandle));
    __this->mixHandle = NULL;
}

DiscreteTrackChangeState__Fuse_Layouts_Orientation* DiscreteTrackChangeState__Fuse_Layouts_Orientation__New_1(::uStatic* __this, ::app::Fuse::Animations::Change__Fuse_Layouts_Orientation* animator, ::app::Fuse::Animations::CreateStateParams* p)
{
    DiscreteTrackChangeState__Fuse_Layouts_Orientation* inst = (DiscreteTrackChangeState__Fuse_Layouts_Orientation*)::uAllocObject(sizeof(DiscreteTrackChangeState__Fuse_Layouts_Orientation), DiscreteTrackChangeState__Fuse_Layouts_Orientation__typeof());
    inst->_ObjInit_2(animator, p);
    return inst;
}

void DiscreteTrackChangeState__Fuse_Layouts_Orientation__SeekObjectValue(DiscreteTrackChangeState__Fuse_Layouts_Orientation* __this, ::uObject* value, float strength)
{
    if (__this->mixHandle == NULL)
    {
        ::app::Uno::Diagnostics::Debug__Log_5(NULL, ::uGetConstString("Invalid Seek"), 1, ::uGetConstString("C:\\ProgramData\\Uno\\Packages\\Fuse.Animations\\0.11.3\\$.uno"), 420);
        return;
    }

    if ((value != NULL) && ::uIs(value, ::app::Fuse::Layouts::Orientation__typeof()))
    {
        ::app::Fuse::Animations::IMixerHandle__Fuse_Layouts_Orientation::Set(::uPtr< ::uObject*>(__this->mixHandle), ::uUnbox< int>(::app::Fuse::Layouts::Orientation__typeof(), value), strength);
    }
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Animations\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

DiscreteTrackChangeState__Fuse_Navigation_NavigationDirection__uType* DiscreteTrackChangeState__Fuse_Navigation_NavigationDirection__typeof()
{
    static ::uStaticStrong<DiscreteTrackChangeState__Fuse_Navigation_NavigationDirection__uType*> type;
    if (type != NULL) return type;

    type = (DiscreteTrackChangeState__Fuse_Navigation_NavigationDirection__uType*)::uAllocClassType(sizeof(DiscreteTrackChangeState__Fuse_Navigation_NavigationDirection__uType), "Fuse.Animations.DiscreteTrackChangeState<Fuse.Navigation.NavigationDirection>", false, 0, 2, 0);

    type->SetBaseType(::app::Fuse::Animations::TrackAnimatorState__typeof());
    type->__fp_Disable = (void(*)(::app::Fuse::Animations::AnimatorState*))DiscreteTrackChangeState__Fuse_Navigation_NavigationDirection__Disable;
    type->__fp_SeekObjectValue = (void(*)(::app::Fuse::Animations::TrackAnimatorState*, ::uObject*, float))DiscreteTrackChangeState__Fuse_Navigation_NavigationDirection__SeekObjectValue;

    type->SetStrongRefs(
        "Animator", offsetof(DiscreteTrackChangeState__Fuse_Navigation_NavigationDirection, Animator_1),
        "mixHandle", offsetof(DiscreteTrackChangeState__Fuse_Navigation_NavigationDirection, mixHandle));

    return type;
}

void DiscreteTrackChangeState__Fuse_Navigation_NavigationDirection___ObjInit_2(DiscreteTrackChangeState__Fuse_Navigation_NavigationDirection* __this, ::app::Fuse::Animations::Change__Fuse_Navigation_NavigationDirection* animator, ::app::Fuse::Animations::CreateStateParams* p)
{
    ::app::Fuse::Animations::TrackAnimatorState___ObjInit_1(__this, (::app::Fuse::Animations::TrackAnimator*)animator, p, NULL);
    __this->Animator_1 = animator;
    __this->mixHandle = ::app::Fuse::Animations::IMixer::Register__Fuse_Navigation_NavigationDirection(::uPtr< ::uObject*>(::uPtr< ::app::Fuse::Animations::Change__Fuse_Navigation_NavigationDirection*>(__this->Animator_1)->Mixer), ::uPtr< ::app::Fuse::Animations::Change__Fuse_Navigation_NavigationDirection*>(__this->Animator_1)->Target(), ::uPtr< ::app::Fuse::Animations::Change__Fuse_Navigation_NavigationDirection*>(__this->Animator_1)->MixOp());
}

void DiscreteTrackChangeState__Fuse_Navigation_NavigationDirection__Disable(DiscreteTrackChangeState__Fuse_Navigation_NavigationDirection* __this)
{
    if (__this->mixHandle == NULL)
    {
        return;
    }

    ::app::Fuse::Animations::IMixerHandle__Fuse_Navigation_NavigationDirection::Unregister(::uPtr< ::uObject*>(__this->mixHandle));
    __this->mixHandle = NULL;
}

DiscreteTrackChangeState__Fuse_Navigation_NavigationDirection* DiscreteTrackChangeState__Fuse_Navigation_NavigationDirection__New_1(::uStatic* __this, ::app::Fuse::Animations::Change__Fuse_Navigation_NavigationDirection* animator, ::app::Fuse::Animations::CreateStateParams* p)
{
    DiscreteTrackChangeState__Fuse_Navigation_NavigationDirection* inst = (DiscreteTrackChangeState__Fuse_Navigation_NavigationDirection*)::uAllocObject(sizeof(DiscreteTrackChangeState__Fuse_Navigation_NavigationDirection), DiscreteTrackChangeState__Fuse_Navigation_NavigationDirection__typeof());
    inst->_ObjInit_2(animator, p);
    return inst;
}

void DiscreteTrackChangeState__Fuse_Navigation_NavigationDirection__SeekObjectValue(DiscreteTrackChangeState__Fuse_Navigation_NavigationDirection* __this, ::uObject* value, float strength)
{
    if (__this->mixHandle == NULL)
    {
        ::app::Uno::Diagnostics::Debug__Log_5(NULL, ::uGetConstString("Invalid Seek"), 1, ::uGetConstString("C:\\ProgramData\\Uno\\Packages\\Fuse.Animations\\0.11.3\\$.uno"), 420);
        return;
    }

    if ((value != NULL) && ::uIs(value, ::app::Fuse::Navigation::NavigationDirection__typeof()))
    {
        ::app::Fuse::Animations::IMixerHandle__Fuse_Navigation_NavigationDirection::Set(::uPtr< ::uObject*>(__this->mixHandle), ::uUnbox< int>(::app::Fuse::Navigation::NavigationDirection__typeof(), value), strength);
    }
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Animations\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

DiscreteTrackChangeState__Fuse_Navigation_NavigationEdge__uType* DiscreteTrackChangeState__Fuse_Navigation_NavigationEdge__typeof()
{
    static ::uStaticStrong<DiscreteTrackChangeState__Fuse_Navigation_NavigationEdge__uType*> type;
    if (type != NULL) return type;

    type = (DiscreteTrackChangeState__Fuse_Navigation_NavigationEdge__uType*)::uAllocClassType(sizeof(DiscreteTrackChangeState__Fuse_Navigation_NavigationEdge__uType), "Fuse.Animations.DiscreteTrackChangeState<Fuse.Navigation.NavigationEdge>", false, 0, 2, 0);

    type->SetBaseType(::app::Fuse::Animations::TrackAnimatorState__typeof());
    type->__fp_Disable = (void(*)(::app::Fuse::Animations::AnimatorState*))DiscreteTrackChangeState__Fuse_Navigation_NavigationEdge__Disable;
    type->__fp_SeekObjectValue = (void(*)(::app::Fuse::Animations::TrackAnimatorState*, ::uObject*, float))DiscreteTrackChangeState__Fuse_Navigation_NavigationEdge__SeekObjectValue;

    type->SetStrongRefs(
        "Animator", offsetof(DiscreteTrackChangeState__Fuse_Navigation_NavigationEdge, Animator_1),
        "mixHandle", offsetof(DiscreteTrackChangeState__Fuse_Navigation_NavigationEdge, mixHandle));

    return type;
}

void DiscreteTrackChangeState__Fuse_Navigation_NavigationEdge___ObjInit_2(DiscreteTrackChangeState__Fuse_Navigation_NavigationEdge* __this, ::app::Fuse::Animations::Change__Fuse_Navigation_NavigationEdge* animator, ::app::Fuse::Animations::CreateStateParams* p)
{
    ::app::Fuse::Animations::TrackAnimatorState___ObjInit_1(__this, (::app::Fuse::Animations::TrackAnimator*)animator, p, NULL);
    __this->Animator_1 = animator;
    __this->mixHandle = ::app::Fuse::Animations::IMixer::Register__Fuse_Navigation_NavigationEdge(::uPtr< ::uObject*>(::uPtr< ::app::Fuse::Animations::Change__Fuse_Navigation_NavigationEdge*>(__this->Animator_1)->Mixer), ::uPtr< ::app::Fuse::Animations::Change__Fuse_Navigation_NavigationEdge*>(__this->Animator_1)->Target(), ::uPtr< ::app::Fuse::Animations::Change__Fuse_Navigation_NavigationEdge*>(__this->Animator_1)->MixOp());
}

void DiscreteTrackChangeState__Fuse_Navigation_NavigationEdge__Disable(DiscreteTrackChangeState__Fuse_Navigation_NavigationEdge* __this)
{
    if (__this->mixHandle == NULL)
    {
        return;
    }

    ::app::Fuse::Animations::IMixerHandle__Fuse_Navigation_NavigationEdge::Unregister(::uPtr< ::uObject*>(__this->mixHandle));
    __this->mixHandle = NULL;
}

DiscreteTrackChangeState__Fuse_Navigation_NavigationEdge* DiscreteTrackChangeState__Fuse_Navigation_NavigationEdge__New_1(::uStatic* __this, ::app::Fuse::Animations::Change__Fuse_Navigation_NavigationEdge* animator, ::app::Fuse::Animations::CreateStateParams* p)
{
    DiscreteTrackChangeState__Fuse_Navigation_NavigationEdge* inst = (DiscreteTrackChangeState__Fuse_Navigation_NavigationEdge*)::uAllocObject(sizeof(DiscreteTrackChangeState__Fuse_Navigation_NavigationEdge), DiscreteTrackChangeState__Fuse_Navigation_NavigationEdge__typeof());
    inst->_ObjInit_2(animator, p);
    return inst;
}

void DiscreteTrackChangeState__Fuse_Navigation_NavigationEdge__SeekObjectValue(DiscreteTrackChangeState__Fuse_Navigation_NavigationEdge* __this, ::uObject* value, float strength)
{
    if (__this->mixHandle == NULL)
    {
        ::app::Uno::Diagnostics::Debug__Log_5(NULL, ::uGetConstString("Invalid Seek"), 1, ::uGetConstString("C:\\ProgramData\\Uno\\Packages\\Fuse.Animations\\0.11.3\\$.uno"), 420);
        return;
    }

    if ((value != NULL) && ::uIs(value, ::app::Fuse::Navigation::NavigationEdge__typeof()))
    {
        ::app::Fuse::Animations::IMixerHandle__Fuse_Navigation_NavigationEdge::Set(::uPtr< ::uObject*>(__this->mixHandle), ::uUnbox< int>(::app::Fuse::Navigation::NavigationEdge__typeof(), value), strength);
    }
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Animations\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

DiscreteTrackChangeState__Fuse_Navigation_NavigationGotoMode__uType* DiscreteTrackChangeState__Fuse_Navigation_NavigationGotoMode__typeof()
{
    static ::uStaticStrong<DiscreteTrackChangeState__Fuse_Navigation_NavigationGotoMode__uType*> type;
    if (type != NULL) return type;

    type = (DiscreteTrackChangeState__Fuse_Navigation_NavigationGotoMode__uType*)::uAllocClassType(sizeof(DiscreteTrackChangeState__Fuse_Navigation_NavigationGotoMode__uType), "Fuse.Animations.DiscreteTrackChangeState<Fuse.Navigation.NavigationGotoMode>", false, 0, 2, 0);

    type->SetBaseType(::app::Fuse::Animations::TrackAnimatorState__typeof());
    type->__fp_Disable = (void(*)(::app::Fuse::Animations::AnimatorState*))DiscreteTrackChangeState__Fuse_Navigation_NavigationGotoMode__Disable;
    type->__fp_SeekObjectValue = (void(*)(::app::Fuse::Animations::TrackAnimatorState*, ::uObject*, float))DiscreteTrackChangeState__Fuse_Navigation_NavigationGotoMode__SeekObjectValue;

    type->SetStrongRefs(
        "Animator", offsetof(DiscreteTrackChangeState__Fuse_Navigation_NavigationGotoMode, Animator_1),
        "mixHandle", offsetof(DiscreteTrackChangeState__Fuse_Navigation_NavigationGotoMode, mixHandle));

    return type;
}

void DiscreteTrackChangeState__Fuse_Navigation_NavigationGotoMode___ObjInit_2(DiscreteTrackChangeState__Fuse_Navigation_NavigationGotoMode* __this, ::app::Fuse::Animations::Change__Fuse_Navigation_NavigationGotoMode* animator, ::app::Fuse::Animations::CreateStateParams* p)
{
    ::app::Fuse::Animations::TrackAnimatorState___ObjInit_1(__this, (::app::Fuse::Animations::TrackAnimator*)animator, p, NULL);
    __this->Animator_1 = animator;
    __this->mixHandle = ::app::Fuse::Animations::IMixer::Register__Fuse_Navigation_NavigationGotoMode(::uPtr< ::uObject*>(::uPtr< ::app::Fuse::Animations::Change__Fuse_Navigation_NavigationGotoMode*>(__this->Animator_1)->Mixer), ::uPtr< ::app::Fuse::Animations::Change__Fuse_Navigation_NavigationGotoMode*>(__this->Animator_1)->Target(), ::uPtr< ::app::Fuse::Animations::Change__Fuse_Navigation_NavigationGotoMode*>(__this->Animator_1)->MixOp());
}

void DiscreteTrackChangeState__Fuse_Navigation_NavigationGotoMode__Disable(DiscreteTrackChangeState__Fuse_Navigation_NavigationGotoMode* __this)
{
    if (__this->mixHandle == NULL)
    {
        return;
    }

    ::app::Fuse::Animations::IMixerHandle__Fuse_Navigation_NavigationGotoMode::Unregister(::uPtr< ::uObject*>(__this->mixHandle));
    __this->mixHandle = NULL;
}

DiscreteTrackChangeState__Fuse_Navigation_NavigationGotoMode* DiscreteTrackChangeState__Fuse_Navigation_NavigationGotoMode__New_1(::uStatic* __this, ::app::Fuse::Animations::Change__Fuse_Navigation_NavigationGotoMode* animator, ::app::Fuse::Animations::CreateStateParams* p)
{
    DiscreteTrackChangeState__Fuse_Navigation_NavigationGotoMode* inst = (DiscreteTrackChangeState__Fuse_Navigation_NavigationGotoMode*)::uAllocObject(sizeof(DiscreteTrackChangeState__Fuse_Navigation_NavigationGotoMode), DiscreteTrackChangeState__Fuse_Navigation_NavigationGotoMode__typeof());
    inst->_ObjInit_2(animator, p);
    return inst;
}

void DiscreteTrackChangeState__Fuse_Navigation_NavigationGotoMode__SeekObjectValue(DiscreteTrackChangeState__Fuse_Navigation_NavigationGotoMode* __this, ::uObject* value, float strength)
{
    if (__this->mixHandle == NULL)
    {
        ::app::Uno::Diagnostics::Debug__Log_5(NULL, ::uGetConstString("Invalid Seek"), 1, ::uGetConstString("C:\\ProgramData\\Uno\\Packages\\Fuse.Animations\\0.11.3\\$.uno"), 420);
        return;
    }

    if ((value != NULL) && ::uIs(value, ::app::Fuse::Navigation::NavigationGotoMode__typeof()))
    {
        ::app::Fuse::Animations::IMixerHandle__Fuse_Navigation_NavigationGotoMode::Set(::uPtr< ::uObject*>(__this->mixHandle), ::uUnbox< int>(::app::Fuse::Navigation::NavigationGotoMode__typeof(), value), strength);
    }
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Animations\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

DiscreteTrackChangeState__Fuse_Navigation_SnapTo__uType* DiscreteTrackChangeState__Fuse_Navigation_SnapTo__typeof()
{
    static ::uStaticStrong<DiscreteTrackChangeState__Fuse_Navigation_SnapTo__uType*> type;
    if (type != NULL) return type;

    type = (DiscreteTrackChangeState__Fuse_Navigation_SnapTo__uType*)::uAllocClassType(sizeof(DiscreteTrackChangeState__Fuse_Navigation_SnapTo__uType), "Fuse.Animations.DiscreteTrackChangeState<Fuse.Navigation.SnapTo>", false, 0, 2, 0);

    type->SetBaseType(::app::Fuse::Animations::TrackAnimatorState__typeof());
    type->__fp_Disable = (void(*)(::app::Fuse::Animations::AnimatorState*))DiscreteTrackChangeState__Fuse_Navigation_SnapTo__Disable;
    type->__fp_SeekObjectValue = (void(*)(::app::Fuse::Animations::TrackAnimatorState*, ::uObject*, float))DiscreteTrackChangeState__Fuse_Navigation_SnapTo__SeekObjectValue;

    type->SetStrongRefs(
        "Animator", offsetof(DiscreteTrackChangeState__Fuse_Navigation_SnapTo, Animator_1),
        "mixHandle", offsetof(DiscreteTrackChangeState__Fuse_Navigation_SnapTo, mixHandle));

    return type;
}

void DiscreteTrackChangeState__Fuse_Navigation_SnapTo___ObjInit_2(DiscreteTrackChangeState__Fuse_Navigation_SnapTo* __this, ::app::Fuse::Animations::Change__Fuse_Navigation_SnapTo* animator, ::app::Fuse::Animations::CreateStateParams* p)
{
    ::app::Fuse::Animations::TrackAnimatorState___ObjInit_1(__this, (::app::Fuse::Animations::TrackAnimator*)animator, p, NULL);
    __this->Animator_1 = animator;
    __this->mixHandle = ::app::Fuse::Animations::IMixer::Register__Fuse_Navigation_SnapTo(::uPtr< ::uObject*>(::uPtr< ::app::Fuse::Animations::Change__Fuse_Navigation_SnapTo*>(__this->Animator_1)->Mixer), ::uPtr< ::app::Fuse::Animations::Change__Fuse_Navigation_SnapTo*>(__this->Animator_1)->Target(), ::uPtr< ::app::Fuse::Animations::Change__Fuse_Navigation_SnapTo*>(__this->Animator_1)->MixOp());
}

void DiscreteTrackChangeState__Fuse_Navigation_SnapTo__Disable(DiscreteTrackChangeState__Fuse_Navigation_SnapTo* __this)
{
    if (__this->mixHandle == NULL)
    {
        return;
    }

    ::app::Fuse::Animations::IMixerHandle__Fuse_Navigation_SnapTo::Unregister(::uPtr< ::uObject*>(__this->mixHandle));
    __this->mixHandle = NULL;
}

DiscreteTrackChangeState__Fuse_Navigation_SnapTo* DiscreteTrackChangeState__Fuse_Navigation_SnapTo__New_1(::uStatic* __this, ::app::Fuse::Animations::Change__Fuse_Navigation_SnapTo* animator, ::app::Fuse::Animations::CreateStateParams* p)
{
    DiscreteTrackChangeState__Fuse_Navigation_SnapTo* inst = (DiscreteTrackChangeState__Fuse_Navigation_SnapTo*)::uAllocObject(sizeof(DiscreteTrackChangeState__Fuse_Navigation_SnapTo), DiscreteTrackChangeState__Fuse_Navigation_SnapTo__typeof());
    inst->_ObjInit_2(animator, p);
    return inst;
}

void DiscreteTrackChangeState__Fuse_Navigation_SnapTo__SeekObjectValue(DiscreteTrackChangeState__Fuse_Navigation_SnapTo* __this, ::uObject* value, float strength)
{
    if (__this->mixHandle == NULL)
    {
        ::app::Uno::Diagnostics::Debug__Log_5(NULL, ::uGetConstString("Invalid Seek"), 1, ::uGetConstString("C:\\ProgramData\\Uno\\Packages\\Fuse.Animations\\0.11.3\\$.uno"), 420);
        return;
    }

    if ((value != NULL) && ::uIs(value, ::app::Fuse::Navigation::SnapTo__typeof()))
    {
        ::app::Fuse::Animations::IMixerHandle__Fuse_Navigation_SnapTo::Set(::uPtr< ::uObject*>(__this->mixHandle), ::uUnbox< int>(::app::Fuse::Navigation::SnapTo__typeof(), value), strength);
    }
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Animations\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

DiscreteTrackChangeState__Fuse_Navigation_SwipeDirection__uType* DiscreteTrackChangeState__Fuse_Navigation_SwipeDirection__typeof()
{
    static ::uStaticStrong<DiscreteTrackChangeState__Fuse_Navigation_SwipeDirection__uType*> type;
    if (type != NULL) return type;

    type = (DiscreteTrackChangeState__Fuse_Navigation_SwipeDirection__uType*)::uAllocClassType(sizeof(DiscreteTrackChangeState__Fuse_Navigation_SwipeDirection__uType), "Fuse.Animations.DiscreteTrackChangeState<Fuse.Navigation.SwipeDirection>", false, 0, 2, 0);

    type->SetBaseType(::app::Fuse::Animations::TrackAnimatorState__typeof());
    type->__fp_Disable = (void(*)(::app::Fuse::Animations::AnimatorState*))DiscreteTrackChangeState__Fuse_Navigation_SwipeDirection__Disable;
    type->__fp_SeekObjectValue = (void(*)(::app::Fuse::Animations::TrackAnimatorState*, ::uObject*, float))DiscreteTrackChangeState__Fuse_Navigation_SwipeDirection__SeekObjectValue;

    type->SetStrongRefs(
        "Animator", offsetof(DiscreteTrackChangeState__Fuse_Navigation_SwipeDirection, Animator_1),
        "mixHandle", offsetof(DiscreteTrackChangeState__Fuse_Navigation_SwipeDirection, mixHandle));

    return type;
}

void DiscreteTrackChangeState__Fuse_Navigation_SwipeDirection___ObjInit_2(DiscreteTrackChangeState__Fuse_Navigation_SwipeDirection* __this, ::app::Fuse::Animations::Change__Fuse_Navigation_SwipeDirection* animator, ::app::Fuse::Animations::CreateStateParams* p)
{
    ::app::Fuse::Animations::TrackAnimatorState___ObjInit_1(__this, (::app::Fuse::Animations::TrackAnimator*)animator, p, NULL);
    __this->Animator_1 = animator;
    __this->mixHandle = ::app::Fuse::Animations::IMixer::Register__Fuse_Navigation_SwipeDirection(::uPtr< ::uObject*>(::uPtr< ::app::Fuse::Animations::Change__Fuse_Navigation_SwipeDirection*>(__this->Animator_1)->Mixer), ::uPtr< ::app::Fuse::Animations::Change__Fuse_Navigation_SwipeDirection*>(__this->Animator_1)->Target(), ::uPtr< ::app::Fuse::Animations::Change__Fuse_Navigation_SwipeDirection*>(__this->Animator_1)->MixOp());
}

void DiscreteTrackChangeState__Fuse_Navigation_SwipeDirection__Disable(DiscreteTrackChangeState__Fuse_Navigation_SwipeDirection* __this)
{
    if (__this->mixHandle == NULL)
    {
        return;
    }

    ::app::Fuse::Animations::IMixerHandle__Fuse_Navigation_SwipeDirection::Unregister(::uPtr< ::uObject*>(__this->mixHandle));
    __this->mixHandle = NULL;
}

DiscreteTrackChangeState__Fuse_Navigation_SwipeDirection* DiscreteTrackChangeState__Fuse_Navigation_SwipeDirection__New_1(::uStatic* __this, ::app::Fuse::Animations::Change__Fuse_Navigation_SwipeDirection* animator, ::app::Fuse::Animations::CreateStateParams* p)
{
    DiscreteTrackChangeState__Fuse_Navigation_SwipeDirection* inst = (DiscreteTrackChangeState__Fuse_Navigation_SwipeDirection*)::uAllocObject(sizeof(DiscreteTrackChangeState__Fuse_Navigation_SwipeDirection), DiscreteTrackChangeState__Fuse_Navigation_SwipeDirection__typeof());
    inst->_ObjInit_2(animator, p);
    return inst;
}

void DiscreteTrackChangeState__Fuse_Navigation_SwipeDirection__SeekObjectValue(DiscreteTrackChangeState__Fuse_Navigation_SwipeDirection* __this, ::uObject* value, float strength)
{
    if (__this->mixHandle == NULL)
    {
        ::app::Uno::Diagnostics::Debug__Log_5(NULL, ::uGetConstString("Invalid Seek"), 1, ::uGetConstString("C:\\ProgramData\\Uno\\Packages\\Fuse.Animations\\0.11.3\\$.uno"), 420);
        return;
    }

    if ((value != NULL) && ::uIs(value, ::app::Fuse::Navigation::SwipeDirection__typeof()))
    {
        ::app::Fuse::Animations::IMixerHandle__Fuse_Navigation_SwipeDirection::Set(::uPtr< ::uObject*>(__this->mixHandle), ::uUnbox< int>(::app::Fuse::Navigation::SwipeDirection__typeof(), value), strength);
    }
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Animations\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

DiscreteTrackChangeState__Fuse_Navigation_SwipeEnds__uType* DiscreteTrackChangeState__Fuse_Navigation_SwipeEnds__typeof()
{
    static ::uStaticStrong<DiscreteTrackChangeState__Fuse_Navigation_SwipeEnds__uType*> type;
    if (type != NULL) return type;

    type = (DiscreteTrackChangeState__Fuse_Navigation_SwipeEnds__uType*)::uAllocClassType(sizeof(DiscreteTrackChangeState__Fuse_Navigation_SwipeEnds__uType), "Fuse.Animations.DiscreteTrackChangeState<Fuse.Navigation.SwipeEnds>", false, 0, 2, 0);

    type->SetBaseType(::app::Fuse::Animations::TrackAnimatorState__typeof());
    type->__fp_Disable = (void(*)(::app::Fuse::Animations::AnimatorState*))DiscreteTrackChangeState__Fuse_Navigation_SwipeEnds__Disable;
    type->__fp_SeekObjectValue = (void(*)(::app::Fuse::Animations::TrackAnimatorState*, ::uObject*, float))DiscreteTrackChangeState__Fuse_Navigation_SwipeEnds__SeekObjectValue;

    type->SetStrongRefs(
        "Animator", offsetof(DiscreteTrackChangeState__Fuse_Navigation_SwipeEnds, Animator_1),
        "mixHandle", offsetof(DiscreteTrackChangeState__Fuse_Navigation_SwipeEnds, mixHandle));

    return type;
}

void DiscreteTrackChangeState__Fuse_Navigation_SwipeEnds___ObjInit_2(DiscreteTrackChangeState__Fuse_Navigation_SwipeEnds* __this, ::app::Fuse::Animations::Change__Fuse_Navigation_SwipeEnds* animator, ::app::Fuse::Animations::CreateStateParams* p)
{
    ::app::Fuse::Animations::TrackAnimatorState___ObjInit_1(__this, (::app::Fuse::Animations::TrackAnimator*)animator, p, NULL);
    __this->Animator_1 = animator;
    __this->mixHandle = ::app::Fuse::Animations::IMixer::Register__Fuse_Navigation_SwipeEnds(::uPtr< ::uObject*>(::uPtr< ::app::Fuse::Animations::Change__Fuse_Navigation_SwipeEnds*>(__this->Animator_1)->Mixer), ::uPtr< ::app::Fuse::Animations::Change__Fuse_Navigation_SwipeEnds*>(__this->Animator_1)->Target(), ::uPtr< ::app::Fuse::Animations::Change__Fuse_Navigation_SwipeEnds*>(__this->Animator_1)->MixOp());
}

void DiscreteTrackChangeState__Fuse_Navigation_SwipeEnds__Disable(DiscreteTrackChangeState__Fuse_Navigation_SwipeEnds* __this)
{
    if (__this->mixHandle == NULL)
    {
        return;
    }

    ::app::Fuse::Animations::IMixerHandle__Fuse_Navigation_SwipeEnds::Unregister(::uPtr< ::uObject*>(__this->mixHandle));
    __this->mixHandle = NULL;
}

DiscreteTrackChangeState__Fuse_Navigation_SwipeEnds* DiscreteTrackChangeState__Fuse_Navigation_SwipeEnds__New_1(::uStatic* __this, ::app::Fuse::Animations::Change__Fuse_Navigation_SwipeEnds* animator, ::app::Fuse::Animations::CreateStateParams* p)
{
    DiscreteTrackChangeState__Fuse_Navigation_SwipeEnds* inst = (DiscreteTrackChangeState__Fuse_Navigation_SwipeEnds*)::uAllocObject(sizeof(DiscreteTrackChangeState__Fuse_Navigation_SwipeEnds), DiscreteTrackChangeState__Fuse_Navigation_SwipeEnds__typeof());
    inst->_ObjInit_2(animator, p);
    return inst;
}

void DiscreteTrackChangeState__Fuse_Navigation_SwipeEnds__SeekObjectValue(DiscreteTrackChangeState__Fuse_Navigation_SwipeEnds* __this, ::uObject* value, float strength)
{
    if (__this->mixHandle == NULL)
    {
        ::app::Uno::Diagnostics::Debug__Log_5(NULL, ::uGetConstString("Invalid Seek"), 1, ::uGetConstString("C:\\ProgramData\\Uno\\Packages\\Fuse.Animations\\0.11.3\\$.uno"), 420);
        return;
    }

    if ((value != NULL) && ::uIs(value, ::app::Fuse::Navigation::SwipeEnds__typeof()))
    {
        ::app::Fuse::Animations::IMixerHandle__Fuse_Navigation_SwipeEnds::Set(::uPtr< ::uObject*>(__this->mixHandle), ::uUnbox< int>(::app::Fuse::Navigation::SwipeEnds__typeof(), value), strength);
    }
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Animations\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

DiscreteTrackChangeState__Fuse_Node__uType* DiscreteTrackChangeState__Fuse_Node__typeof()
{
    static ::uStaticStrong<DiscreteTrackChangeState__Fuse_Node__uType*> type;
    if (type != NULL) return type;

    type = (DiscreteTrackChangeState__Fuse_Node__uType*)::uAllocClassType(sizeof(DiscreteTrackChangeState__Fuse_Node__uType), "Fuse.Animations.DiscreteTrackChangeState<Fuse.Node>", false, 0, 2, 0);

    type->SetBaseType(::app::Fuse::Animations::TrackAnimatorState__typeof());
    type->__fp_Disable = (void(*)(::app::Fuse::Animations::AnimatorState*))DiscreteTrackChangeState__Fuse_Node__Disable;
    type->__fp_SeekObjectValue = (void(*)(::app::Fuse::Animations::TrackAnimatorState*, ::uObject*, float))DiscreteTrackChangeState__Fuse_Node__SeekObjectValue;

    type->SetStrongRefs(
        "Animator", offsetof(DiscreteTrackChangeState__Fuse_Node, Animator_1),
        "mixHandle", offsetof(DiscreteTrackChangeState__Fuse_Node, mixHandle));

    return type;
}

void DiscreteTrackChangeState__Fuse_Node___ObjInit_2(DiscreteTrackChangeState__Fuse_Node* __this, ::app::Fuse::Animations::Change__Fuse_Node* animator, ::app::Fuse::Animations::CreateStateParams* p)
{
    ::app::Fuse::Animations::TrackAnimatorState___ObjInit_1(__this, (::app::Fuse::Animations::TrackAnimator*)animator, p, NULL);
    __this->Animator_1 = animator;
    __this->mixHandle = ::app::Fuse::Animations::IMixer::Register__Fuse_Node(::uPtr< ::uObject*>(::uPtr< ::app::Fuse::Animations::Change__Fuse_Node*>(__this->Animator_1)->Mixer), ::uPtr< ::app::Fuse::Animations::Change__Fuse_Node*>(__this->Animator_1)->Target(), ::uPtr< ::app::Fuse::Animations::Change__Fuse_Node*>(__this->Animator_1)->MixOp());
}

void DiscreteTrackChangeState__Fuse_Node__Disable(DiscreteTrackChangeState__Fuse_Node* __this)
{
    if (__this->mixHandle == NULL)
    {
        return;
    }

    ::app::Fuse::Animations::IMixerHandle__Fuse_Node::Unregister(::uPtr< ::uObject*>(__this->mixHandle));
    __this->mixHandle = NULL;
}

DiscreteTrackChangeState__Fuse_Node* DiscreteTrackChangeState__Fuse_Node__New_1(::uStatic* __this, ::app::Fuse::Animations::Change__Fuse_Node* animator, ::app::Fuse::Animations::CreateStateParams* p)
{
    DiscreteTrackChangeState__Fuse_Node* inst = (DiscreteTrackChangeState__Fuse_Node*)::uAllocObject(sizeof(DiscreteTrackChangeState__Fuse_Node), DiscreteTrackChangeState__Fuse_Node__typeof());
    inst->_ObjInit_2(animator, p);
    return inst;
}

void DiscreteTrackChangeState__Fuse_Node__SeekObjectValue(DiscreteTrackChangeState__Fuse_Node* __this, ::uObject* value, float strength)
{
    if (__this->mixHandle == NULL)
    {
        ::app::Uno::Diagnostics::Debug__Log_5(NULL, ::uGetConstString("Invalid Seek"), 1, ::uGetConstString("C:\\ProgramData\\Uno\\Packages\\Fuse.Animations\\0.11.3\\$.uno"), 420);
        return;
    }

    if ((value != NULL) && ::uIs(value, ::app::Fuse::Node__typeof()))
    {
        ::app::Fuse::Animations::IMixerHandle__Fuse_Node::Set(::uPtr< ::uObject*>(__this->mixHandle), ::uCast< ::app::Fuse::Node*>(value, ::app::Fuse::Node__typeof()), strength);
    }
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Animations\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

DiscreteTrackChangeState__Fuse_Resources_ImageSource__uType* DiscreteTrackChangeState__Fuse_Resources_ImageSource__typeof()
{
    static ::uStaticStrong<DiscreteTrackChangeState__Fuse_Resources_ImageSource__uType*> type;
    if (type != NULL) return type;

    type = (DiscreteTrackChangeState__Fuse_Resources_ImageSource__uType*)::uAllocClassType(sizeof(DiscreteTrackChangeState__Fuse_Resources_ImageSource__uType), "Fuse.Animations.DiscreteTrackChangeState<Fuse.Resources.ImageSource>", false, 0, 2, 0);

    type->SetBaseType(::app::Fuse::Animations::TrackAnimatorState__typeof());
    type->__fp_Disable = (void(*)(::app::Fuse::Animations::AnimatorState*))DiscreteTrackChangeState__Fuse_Resources_ImageSource__Disable;
    type->__fp_SeekObjectValue = (void(*)(::app::Fuse::Animations::TrackAnimatorState*, ::uObject*, float))DiscreteTrackChangeState__Fuse_Resources_ImageSource__SeekObjectValue;

    type->SetStrongRefs(
        "Animator", offsetof(DiscreteTrackChangeState__Fuse_Resources_ImageSource, Animator_1),
        "mixHandle", offsetof(DiscreteTrackChangeState__Fuse_Resources_ImageSource, mixHandle));

    return type;
}

void DiscreteTrackChangeState__Fuse_Resources_ImageSource___ObjInit_2(DiscreteTrackChangeState__Fuse_Resources_ImageSource* __this, ::app::Fuse::Animations::Change__Fuse_Resources_ImageSource* animator, ::app::Fuse::Animations::CreateStateParams* p)
{
    ::app::Fuse::Animations::TrackAnimatorState___ObjInit_1(__this, (::app::Fuse::Animations::TrackAnimator*)animator, p, NULL);
    __this->Animator_1 = animator;
    __this->mixHandle = ::app::Fuse::Animations::IMixer::Register__Fuse_Resources_ImageSource(::uPtr< ::uObject*>(::uPtr< ::app::Fuse::Animations::Change__Fuse_Resources_ImageSource*>(__this->Animator_1)->Mixer), ::uPtr< ::app::Fuse::Animations::Change__Fuse_Resources_ImageSource*>(__this->Animator_1)->Target(), ::uPtr< ::app::Fuse::Animations::Change__Fuse_Resources_ImageSource*>(__this->Animator_1)->MixOp());
}

void DiscreteTrackChangeState__Fuse_Resources_ImageSource__Disable(DiscreteTrackChangeState__Fuse_Resources_ImageSource* __this)
{
    if (__this->mixHandle == NULL)
    {
        return;
    }

    ::app::Fuse::Animations::IMixerHandle__Fuse_Resources_ImageSource::Unregister(::uPtr< ::uObject*>(__this->mixHandle));
    __this->mixHandle = NULL;
}

DiscreteTrackChangeState__Fuse_Resources_ImageSource* DiscreteTrackChangeState__Fuse_Resources_ImageSource__New_1(::uStatic* __this, ::app::Fuse::Animations::Change__Fuse_Resources_ImageSource* animator, ::app::Fuse::Animations::CreateStateParams* p)
{
    DiscreteTrackChangeState__Fuse_Resources_ImageSource* inst = (DiscreteTrackChangeState__Fuse_Resources_ImageSource*)::uAllocObject(sizeof(DiscreteTrackChangeState__Fuse_Resources_ImageSource), DiscreteTrackChangeState__Fuse_Resources_ImageSource__typeof());
    inst->_ObjInit_2(animator, p);
    return inst;
}

void DiscreteTrackChangeState__Fuse_Resources_ImageSource__SeekObjectValue(DiscreteTrackChangeState__Fuse_Resources_ImageSource* __this, ::uObject* value, float strength)
{
    if (__this->mixHandle == NULL)
    {
        ::app::Uno::Diagnostics::Debug__Log_5(NULL, ::uGetConstString("Invalid Seek"), 1, ::uGetConstString("C:\\ProgramData\\Uno\\Packages\\Fuse.Animations\\0.11.3\\$.uno"), 420);
        return;
    }

    if ((value != NULL) && ::uIs(value, ::app::Fuse::Resources::ImageSource__typeof()))
    {
        ::app::Fuse::Animations::IMixerHandle__Fuse_Resources_ImageSource::Set(::uPtr< ::uObject*>(__this->mixHandle), ::uCast< ::app::Fuse::Resources::ImageSource*>(value, ::app::Fuse::Resources::ImageSource__typeof()), strength);
    }
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Animations\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

DiscreteTrackChangeState__Fuse_Triggers_Actions_TriggerDirection__uType* DiscreteTrackChangeState__Fuse_Triggers_Actions_TriggerDirection__typeof()
{
    static ::uStaticStrong<DiscreteTrackChangeState__Fuse_Triggers_Actions_TriggerDirection__uType*> type;
    if (type != NULL) return type;

    type = (DiscreteTrackChangeState__Fuse_Triggers_Actions_TriggerDirection__uType*)::uAllocClassType(sizeof(DiscreteTrackChangeState__Fuse_Triggers_Actions_TriggerDirection__uType), "Fuse.Animations.DiscreteTrackChangeState<Fuse.Triggers.Actions.TriggerDirection>", false, 0, 2, 0);

    type->SetBaseType(::app::Fuse::Animations::TrackAnimatorState__typeof());
    type->__fp_Disable = (void(*)(::app::Fuse::Animations::AnimatorState*))DiscreteTrackChangeState__Fuse_Triggers_Actions_TriggerDirection__Disable;
    type->__fp_SeekObjectValue = (void(*)(::app::Fuse::Animations::TrackAnimatorState*, ::uObject*, float))DiscreteTrackChangeState__Fuse_Triggers_Actions_TriggerDirection__SeekObjectValue;

    type->SetStrongRefs(
        "Animator", offsetof(DiscreteTrackChangeState__Fuse_Triggers_Actions_TriggerDirection, Animator_1),
        "mixHandle", offsetof(DiscreteTrackChangeState__Fuse_Triggers_Actions_TriggerDirection, mixHandle));

    return type;
}

void DiscreteTrackChangeState__Fuse_Triggers_Actions_TriggerDirection___ObjInit_2(DiscreteTrackChangeState__Fuse_Triggers_Actions_TriggerDirection* __this, ::app::Fuse::Animations::Change__Fuse_Triggers_Actions_TriggerDirection* animator, ::app::Fuse::Animations::CreateStateParams* p)
{
    ::app::Fuse::Animations::TrackAnimatorState___ObjInit_1(__this, (::app::Fuse::Animations::TrackAnimator*)animator, p, NULL);
    __this->Animator_1 = animator;
    __this->mixHandle = ::app::Fuse::Animations::IMixer::Register__Fuse_Triggers_Actions_TriggerDirection(::uPtr< ::uObject*>(::uPtr< ::app::Fuse::Animations::Change__Fuse_Triggers_Actions_TriggerDirection*>(__this->Animator_1)->Mixer), ::uPtr< ::app::Fuse::Animations::Change__Fuse_Triggers_Actions_TriggerDirection*>(__this->Animator_1)->Target(), ::uPtr< ::app::Fuse::Animations::Change__Fuse_Triggers_Actions_TriggerDirection*>(__this->Animator_1)->MixOp());
}

void DiscreteTrackChangeState__Fuse_Triggers_Actions_TriggerDirection__Disable(DiscreteTrackChangeState__Fuse_Triggers_Actions_TriggerDirection* __this)
{
    if (__this->mixHandle == NULL)
    {
        return;
    }

    ::app::Fuse::Animations::IMixerHandle__Fuse_Triggers_Actions_TriggerDirection::Unregister(::uPtr< ::uObject*>(__this->mixHandle));
    __this->mixHandle = NULL;
}

DiscreteTrackChangeState__Fuse_Triggers_Actions_TriggerDirection* DiscreteTrackChangeState__Fuse_Triggers_Actions_TriggerDirection__New_1(::uStatic* __this, ::app::Fuse::Animations::Change__Fuse_Triggers_Actions_TriggerDirection* animator, ::app::Fuse::Animations::CreateStateParams* p)
{
    DiscreteTrackChangeState__Fuse_Triggers_Actions_TriggerDirection* inst = (DiscreteTrackChangeState__Fuse_Triggers_Actions_TriggerDirection*)::uAllocObject(sizeof(DiscreteTrackChangeState__Fuse_Triggers_Actions_TriggerDirection), DiscreteTrackChangeState__Fuse_Triggers_Actions_TriggerDirection__typeof());
    inst->_ObjInit_2(animator, p);
    return inst;
}

void DiscreteTrackChangeState__Fuse_Triggers_Actions_TriggerDirection__SeekObjectValue(DiscreteTrackChangeState__Fuse_Triggers_Actions_TriggerDirection* __this, ::uObject* value, float strength)
{
    if (__this->mixHandle == NULL)
    {
        ::app::Uno::Diagnostics::Debug__Log_5(NULL, ::uGetConstString("Invalid Seek"), 1, ::uGetConstString("C:\\ProgramData\\Uno\\Packages\\Fuse.Animations\\0.11.3\\$.uno"), 420);
        return;
    }

    if ((value != NULL) && ::uIs(value, ::app::Fuse::Triggers::Actions::TriggerDirection__typeof()))
    {
        ::app::Fuse::Animations::IMixerHandle__Fuse_Triggers_Actions_TriggerDirection::Set(::uPtr< ::uObject*>(__this->mixHandle), ::uUnbox< int>(::app::Fuse::Triggers::Actions::TriggerDirection__typeof(), value), strength);
    }
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Animations\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

DiscreteTrackChangeState__Fuse_Triggers_State__uType* DiscreteTrackChangeState__Fuse_Triggers_State__typeof()
{
    static ::uStaticStrong<DiscreteTrackChangeState__Fuse_Triggers_State__uType*> type;
    if (type != NULL) return type;

    type = (DiscreteTrackChangeState__Fuse_Triggers_State__uType*)::uAllocClassType(sizeof(DiscreteTrackChangeState__Fuse_Triggers_State__uType), "Fuse.Animations.DiscreteTrackChangeState<Fuse.Triggers.State>", false, 0, 2, 0);

    type->SetBaseType(::app::Fuse::Animations::TrackAnimatorState__typeof());
    type->__fp_Disable = (void(*)(::app::Fuse::Animations::AnimatorState*))DiscreteTrackChangeState__Fuse_Triggers_State__Disable;
    type->__fp_SeekObjectValue = (void(*)(::app::Fuse::Animations::TrackAnimatorState*, ::uObject*, float))DiscreteTrackChangeState__Fuse_Triggers_State__SeekObjectValue;

    type->SetStrongRefs(
        "Animator", offsetof(DiscreteTrackChangeState__Fuse_Triggers_State, Animator_1),
        "mixHandle", offsetof(DiscreteTrackChangeState__Fuse_Triggers_State, mixHandle));

    return type;
}

void DiscreteTrackChangeState__Fuse_Triggers_State___ObjInit_2(DiscreteTrackChangeState__Fuse_Triggers_State* __this, ::app::Fuse::Animations::Change__Fuse_Triggers_State* animator, ::app::Fuse::Animations::CreateStateParams* p)
{
    ::app::Fuse::Animations::TrackAnimatorState___ObjInit_1(__this, (::app::Fuse::Animations::TrackAnimator*)animator, p, NULL);
    __this->Animator_1 = animator;
    __this->mixHandle = ::app::Fuse::Animations::IMixer::Register__Fuse_Triggers_State(::uPtr< ::uObject*>(::uPtr< ::app::Fuse::Animations::Change__Fuse_Triggers_State*>(__this->Animator_1)->Mixer), ::uPtr< ::app::Fuse::Animations::Change__Fuse_Triggers_State*>(__this->Animator_1)->Target(), ::uPtr< ::app::Fuse::Animations::Change__Fuse_Triggers_State*>(__this->Animator_1)->MixOp());
}

void DiscreteTrackChangeState__Fuse_Triggers_State__Disable(DiscreteTrackChangeState__Fuse_Triggers_State* __this)
{
    if (__this->mixHandle == NULL)
    {
        return;
    }

    ::app::Fuse::Animations::IMixerHandle__Fuse_Triggers_State::Unregister(::uPtr< ::uObject*>(__this->mixHandle));
    __this->mixHandle = NULL;
}

DiscreteTrackChangeState__Fuse_Triggers_State* DiscreteTrackChangeState__Fuse_Triggers_State__New_1(::uStatic* __this, ::app::Fuse::Animations::Change__Fuse_Triggers_State* animator, ::app::Fuse::Animations::CreateStateParams* p)
{
    DiscreteTrackChangeState__Fuse_Triggers_State* inst = (DiscreteTrackChangeState__Fuse_Triggers_State*)::uAllocObject(sizeof(DiscreteTrackChangeState__Fuse_Triggers_State), DiscreteTrackChangeState__Fuse_Triggers_State__typeof());
    inst->_ObjInit_2(animator, p);
    return inst;
}

void DiscreteTrackChangeState__Fuse_Triggers_State__SeekObjectValue(DiscreteTrackChangeState__Fuse_Triggers_State* __this, ::uObject* value, float strength)
{
    if (__this->mixHandle == NULL)
    {
        ::app::Uno::Diagnostics::Debug__Log_5(NULL, ::uGetConstString("Invalid Seek"), 1, ::uGetConstString("C:\\ProgramData\\Uno\\Packages\\Fuse.Animations\\0.11.3\\$.uno"), 420);
        return;
    }

    if ((value != NULL) && ::uIs(value, ::app::Fuse::Triggers::State__typeof()))
    {
        ::app::Fuse::Animations::IMixerHandle__Fuse_Triggers_State::Set(::uPtr< ::uObject*>(__this->mixHandle), ::uCast< ::app::Fuse::Triggers::State*>(value, ::app::Fuse::Triggers::State__typeof()), strength);
    }
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Animations\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

DiscreteTrackChangeState__Fuse_Triggers_StateTransition__uType* DiscreteTrackChangeState__Fuse_Triggers_StateTransition__typeof()
{
    static ::uStaticStrong<DiscreteTrackChangeState__Fuse_Triggers_StateTransition__uType*> type;
    if (type != NULL) return type;

    type = (DiscreteTrackChangeState__Fuse_Triggers_StateTransition__uType*)::uAllocClassType(sizeof(DiscreteTrackChangeState__Fuse_Triggers_StateTransition__uType), "Fuse.Animations.DiscreteTrackChangeState<Fuse.Triggers.StateTransition>", false, 0, 2, 0);

    type->SetBaseType(::app::Fuse::Animations::TrackAnimatorState__typeof());
    type->__fp_Disable = (void(*)(::app::Fuse::Animations::AnimatorState*))DiscreteTrackChangeState__Fuse_Triggers_StateTransition__Disable;
    type->__fp_SeekObjectValue = (void(*)(::app::Fuse::Animations::TrackAnimatorState*, ::uObject*, float))DiscreteTrackChangeState__Fuse_Triggers_StateTransition__SeekObjectValue;

    type->SetStrongRefs(
        "Animator", offsetof(DiscreteTrackChangeState__Fuse_Triggers_StateTransition, Animator_1),
        "mixHandle", offsetof(DiscreteTrackChangeState__Fuse_Triggers_StateTransition, mixHandle));

    return type;
}

void DiscreteTrackChangeState__Fuse_Triggers_StateTransition___ObjInit_2(DiscreteTrackChangeState__Fuse_Triggers_StateTransition* __this, ::app::Fuse::Animations::Change__Fuse_Triggers_StateTransition* animator, ::app::Fuse::Animations::CreateStateParams* p)
{
    ::app::Fuse::Animations::TrackAnimatorState___ObjInit_1(__this, (::app::Fuse::Animations::TrackAnimator*)animator, p, NULL);
    __this->Animator_1 = animator;
    __this->mixHandle = ::app::Fuse::Animations::IMixer::Register__Fuse_Triggers_StateTransition(::uPtr< ::uObject*>(::uPtr< ::app::Fuse::Animations::Change__Fuse_Triggers_StateTransition*>(__this->Animator_1)->Mixer), ::uPtr< ::app::Fuse::Animations::Change__Fuse_Triggers_StateTransition*>(__this->Animator_1)->Target(), ::uPtr< ::app::Fuse::Animations::Change__Fuse_Triggers_StateTransition*>(__this->Animator_1)->MixOp());
}

void DiscreteTrackChangeState__Fuse_Triggers_StateTransition__Disable(DiscreteTrackChangeState__Fuse_Triggers_StateTransition* __this)
{
    if (__this->mixHandle == NULL)
    {
        return;
    }

    ::app::Fuse::Animations::IMixerHandle__Fuse_Triggers_StateTransition::Unregister(::uPtr< ::uObject*>(__this->mixHandle));
    __this->mixHandle = NULL;
}

DiscreteTrackChangeState__Fuse_Triggers_StateTransition* DiscreteTrackChangeState__Fuse_Triggers_StateTransition__New_1(::uStatic* __this, ::app::Fuse::Animations::Change__Fuse_Triggers_StateTransition* animator, ::app::Fuse::Animations::CreateStateParams* p)
{
    DiscreteTrackChangeState__Fuse_Triggers_StateTransition* inst = (DiscreteTrackChangeState__Fuse_Triggers_StateTransition*)::uAllocObject(sizeof(DiscreteTrackChangeState__Fuse_Triggers_StateTransition), DiscreteTrackChangeState__Fuse_Triggers_StateTransition__typeof());
    inst->_ObjInit_2(animator, p);
    return inst;
}

void DiscreteTrackChangeState__Fuse_Triggers_StateTransition__SeekObjectValue(DiscreteTrackChangeState__Fuse_Triggers_StateTransition* __this, ::uObject* value, float strength)
{
    if (__this->mixHandle == NULL)
    {
        ::app::Uno::Diagnostics::Debug__Log_5(NULL, ::uGetConstString("Invalid Seek"), 1, ::uGetConstString("C:\\ProgramData\\Uno\\Packages\\Fuse.Animations\\0.11.3\\$.uno"), 420);
        return;
    }

    if ((value != NULL) && ::uIs(value, ::app::Fuse::Triggers::StateTransition__typeof()))
    {
        ::app::Fuse::Animations::IMixerHandle__Fuse_Triggers_StateTransition::Set(::uPtr< ::uObject*>(__this->mixHandle), ::uUnbox< int>(::app::Fuse::Triggers::StateTransition__typeof(), value), strength);
    }
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Animations\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

DiscreteTrackChangeState__Fuse_Triggers_TriggerBypassMode__uType* DiscreteTrackChangeState__Fuse_Triggers_TriggerBypassMode__typeof()
{
    static ::uStaticStrong<DiscreteTrackChangeState__Fuse_Triggers_TriggerBypassMode__uType*> type;
    if (type != NULL) return type;

    type = (DiscreteTrackChangeState__Fuse_Triggers_TriggerBypassMode__uType*)::uAllocClassType(sizeof(DiscreteTrackChangeState__Fuse_Triggers_TriggerBypassMode__uType), "Fuse.Animations.DiscreteTrackChangeState<Fuse.Triggers.TriggerBypassMode>", false, 0, 2, 0);

    type->SetBaseType(::app::Fuse::Animations::TrackAnimatorState__typeof());
    type->__fp_Disable = (void(*)(::app::Fuse::Animations::AnimatorState*))DiscreteTrackChangeState__Fuse_Triggers_TriggerBypassMode__Disable;
    type->__fp_SeekObjectValue = (void(*)(::app::Fuse::Animations::TrackAnimatorState*, ::uObject*, float))DiscreteTrackChangeState__Fuse_Triggers_TriggerBypassMode__SeekObjectValue;

    type->SetStrongRefs(
        "Animator", offsetof(DiscreteTrackChangeState__Fuse_Triggers_TriggerBypassMode, Animator_1),
        "mixHandle", offsetof(DiscreteTrackChangeState__Fuse_Triggers_TriggerBypassMode, mixHandle));

    return type;
}

void DiscreteTrackChangeState__Fuse_Triggers_TriggerBypassMode___ObjInit_2(DiscreteTrackChangeState__Fuse_Triggers_TriggerBypassMode* __this, ::app::Fuse::Animations::Change__Fuse_Triggers_TriggerBypassMode* animator, ::app::Fuse::Animations::CreateStateParams* p)
{
    ::app::Fuse::Animations::TrackAnimatorState___ObjInit_1(__this, (::app::Fuse::Animations::TrackAnimator*)animator, p, NULL);
    __this->Animator_1 = animator;
    __this->mixHandle = ::app::Fuse::Animations::IMixer::Register__Fuse_Triggers_TriggerBypassMode(::uPtr< ::uObject*>(::uPtr< ::app::Fuse::Animations::Change__Fuse_Triggers_TriggerBypassMode*>(__this->Animator_1)->Mixer), ::uPtr< ::app::Fuse::Animations::Change__Fuse_Triggers_TriggerBypassMode*>(__this->Animator_1)->Target(), ::uPtr< ::app::Fuse::Animations::Change__Fuse_Triggers_TriggerBypassMode*>(__this->Animator_1)->MixOp());
}

void DiscreteTrackChangeState__Fuse_Triggers_TriggerBypassMode__Disable(DiscreteTrackChangeState__Fuse_Triggers_TriggerBypassMode* __this)
{
    if (__this->mixHandle == NULL)
    {
        return;
    }

    ::app::Fuse::Animations::IMixerHandle__Fuse_Triggers_TriggerBypassMode::Unregister(::uPtr< ::uObject*>(__this->mixHandle));
    __this->mixHandle = NULL;
}

DiscreteTrackChangeState__Fuse_Triggers_TriggerBypassMode* DiscreteTrackChangeState__Fuse_Triggers_TriggerBypassMode__New_1(::uStatic* __this, ::app::Fuse::Animations::Change__Fuse_Triggers_TriggerBypassMode* animator, ::app::Fuse::Animations::CreateStateParams* p)
{
    DiscreteTrackChangeState__Fuse_Triggers_TriggerBypassMode* inst = (DiscreteTrackChangeState__Fuse_Triggers_TriggerBypassMode*)::uAllocObject(sizeof(DiscreteTrackChangeState__Fuse_Triggers_TriggerBypassMode), DiscreteTrackChangeState__Fuse_Triggers_TriggerBypassMode__typeof());
    inst->_ObjInit_2(animator, p);
    return inst;
}

void DiscreteTrackChangeState__Fuse_Triggers_TriggerBypassMode__SeekObjectValue(DiscreteTrackChangeState__Fuse_Triggers_TriggerBypassMode* __this, ::uObject* value, float strength)
{
    if (__this->mixHandle == NULL)
    {
        ::app::Uno::Diagnostics::Debug__Log_5(NULL, ::uGetConstString("Invalid Seek"), 1, ::uGetConstString("C:\\ProgramData\\Uno\\Packages\\Fuse.Animations\\0.11.3\\$.uno"), 420);
        return;
    }

    if ((value != NULL) && ::uIs(value, ::app::Fuse::Triggers::TriggerBypassMode__typeof()))
    {
        ::app::Fuse::Animations::IMixerHandle__Fuse_Triggers_TriggerBypassMode::Set(::uPtr< ::uObject*>(__this->mixHandle), ::uUnbox< int>(::app::Fuse::Triggers::TriggerBypassMode__typeof(), value), strength);
    }
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Animations\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

DiscreteTrackChangeState__int__uType* DiscreteTrackChangeState__int__typeof()
{
    static ::uStaticStrong<DiscreteTrackChangeState__int__uType*> type;
    if (type != NULL) return type;

    type = (DiscreteTrackChangeState__int__uType*)::uAllocClassType(sizeof(DiscreteTrackChangeState__int__uType), "Fuse.Animations.DiscreteTrackChangeState<int>", false, 0, 2, 0);

    type->SetBaseType(::app::Fuse::Animations::TrackAnimatorState__typeof());
    type->__fp_Disable = (void(*)(::app::Fuse::Animations::AnimatorState*))DiscreteTrackChangeState__int__Disable;
    type->__fp_SeekObjectValue = (void(*)(::app::Fuse::Animations::TrackAnimatorState*, ::uObject*, float))DiscreteTrackChangeState__int__SeekObjectValue;

    type->SetStrongRefs(
        "Animator", offsetof(DiscreteTrackChangeState__int, Animator_1),
        "mixHandle", offsetof(DiscreteTrackChangeState__int, mixHandle));

    return type;
}

void DiscreteTrackChangeState__int___ObjInit_2(DiscreteTrackChangeState__int* __this, ::app::Fuse::Animations::Change__int* animator, ::app::Fuse::Animations::CreateStateParams* p)
{
    ::app::Fuse::Animations::TrackAnimatorState___ObjInit_1(__this, (::app::Fuse::Animations::TrackAnimator*)animator, p, NULL);
    __this->Animator_1 = animator;
    __this->mixHandle = ::app::Fuse::Animations::IMixer::Register__int(::uPtr< ::uObject*>(::uPtr< ::app::Fuse::Animations::Change__int*>(__this->Animator_1)->Mixer), ::uPtr< ::app::Fuse::Animations::Change__int*>(__this->Animator_1)->Target(), ::uPtr< ::app::Fuse::Animations::Change__int*>(__this->Animator_1)->MixOp());
}

void DiscreteTrackChangeState__int__Disable(DiscreteTrackChangeState__int* __this)
{
    if (__this->mixHandle == NULL)
    {
        return;
    }

    ::app::Fuse::Animations::IMixerHandle__int::Unregister(::uPtr< ::uObject*>(__this->mixHandle));
    __this->mixHandle = NULL;
}

DiscreteTrackChangeState__int* DiscreteTrackChangeState__int__New_1(::uStatic* __this, ::app::Fuse::Animations::Change__int* animator, ::app::Fuse::Animations::CreateStateParams* p)
{
    DiscreteTrackChangeState__int* inst = (DiscreteTrackChangeState__int*)::uAllocObject(sizeof(DiscreteTrackChangeState__int), DiscreteTrackChangeState__int__typeof());
    inst->_ObjInit_2(animator, p);
    return inst;
}

void DiscreteTrackChangeState__int__SeekObjectValue(DiscreteTrackChangeState__int* __this, ::uObject* value, float strength)
{
    if (__this->mixHandle == NULL)
    {
        ::app::Uno::Diagnostics::Debug__Log_5(NULL, ::uGetConstString("Invalid Seek"), 1, ::uGetConstString("C:\\ProgramData\\Uno\\Packages\\Fuse.Animations\\0.11.3\\$.uno"), 420);
        return;
    }

    if ((value != NULL) && ::uIs(value, ::app::Uno::Int__typeof()))
    {
        ::app::Fuse::Animations::IMixerHandle__int::Set(::uPtr< ::uObject*>(__this->mixHandle), ::uUnbox< int>(::app::Uno::Int__typeof(), value), strength);
    }
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Animations\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

DiscreteTrackChangeState__int2__uType* DiscreteTrackChangeState__int2__typeof()
{
    static ::uStaticStrong<DiscreteTrackChangeState__int2__uType*> type;
    if (type != NULL) return type;

    type = (DiscreteTrackChangeState__int2__uType*)::uAllocClassType(sizeof(DiscreteTrackChangeState__int2__uType), "Fuse.Animations.DiscreteTrackChangeState<int2>", false, 0, 2, 0);

    type->SetBaseType(::app::Fuse::Animations::TrackAnimatorState__typeof());
    type->__fp_Disable = (void(*)(::app::Fuse::Animations::AnimatorState*))DiscreteTrackChangeState__int2__Disable;
    type->__fp_SeekObjectValue = (void(*)(::app::Fuse::Animations::TrackAnimatorState*, ::uObject*, float))DiscreteTrackChangeState__int2__SeekObjectValue;

    type->SetStrongRefs(
        "Animator", offsetof(DiscreteTrackChangeState__int2, Animator_1),
        "mixHandle", offsetof(DiscreteTrackChangeState__int2, mixHandle));

    return type;
}

void DiscreteTrackChangeState__int2___ObjInit_2(DiscreteTrackChangeState__int2* __this, ::app::Fuse::Animations::Change__int2* animator, ::app::Fuse::Animations::CreateStateParams* p)
{
    ::app::Fuse::Animations::TrackAnimatorState___ObjInit_1(__this, (::app::Fuse::Animations::TrackAnimator*)animator, p, NULL);
    __this->Animator_1 = animator;
    __this->mixHandle = ::app::Fuse::Animations::IMixer::Register__int2(::uPtr< ::uObject*>(::uPtr< ::app::Fuse::Animations::Change__int2*>(__this->Animator_1)->Mixer), ::uPtr< ::app::Fuse::Animations::Change__int2*>(__this->Animator_1)->Target(), ::uPtr< ::app::Fuse::Animations::Change__int2*>(__this->Animator_1)->MixOp());
}

void DiscreteTrackChangeState__int2__Disable(DiscreteTrackChangeState__int2* __this)
{
    if (__this->mixHandle == NULL)
    {
        return;
    }

    ::app::Fuse::Animations::IMixerHandle__int2::Unregister(::uPtr< ::uObject*>(__this->mixHandle));
    __this->mixHandle = NULL;
}

DiscreteTrackChangeState__int2* DiscreteTrackChangeState__int2__New_1(::uStatic* __this, ::app::Fuse::Animations::Change__int2* animator, ::app::Fuse::Animations::CreateStateParams* p)
{
    DiscreteTrackChangeState__int2* inst = (DiscreteTrackChangeState__int2*)::uAllocObject(sizeof(DiscreteTrackChangeState__int2), DiscreteTrackChangeState__int2__typeof());
    inst->_ObjInit_2(animator, p);
    return inst;
}

void DiscreteTrackChangeState__int2__SeekObjectValue(DiscreteTrackChangeState__int2* __this, ::uObject* value, float strength)
{
    if (__this->mixHandle == NULL)
    {
        ::app::Uno::Diagnostics::Debug__Log_5(NULL, ::uGetConstString("Invalid Seek"), 1, ::uGetConstString("C:\\ProgramData\\Uno\\Packages\\Fuse.Animations\\0.11.3\\$.uno"), 420);
        return;
    }

    if ((value != NULL) && ::uIs(value, ::app::Uno::Int2__typeof()))
    {
        ::app::Fuse::Animations::IMixerHandle__int2::Set(::uPtr< ::uObject*>(__this->mixHandle), ::uUnbox< ::app::Uno::Int2>(::app::Uno::Int2__typeof(), value), strength);
    }
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Animations\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

DiscreteTrackChangeState__int3__uType* DiscreteTrackChangeState__int3__typeof()
{
    static ::uStaticStrong<DiscreteTrackChangeState__int3__uType*> type;
    if (type != NULL) return type;

    type = (DiscreteTrackChangeState__int3__uType*)::uAllocClassType(sizeof(DiscreteTrackChangeState__int3__uType), "Fuse.Animations.DiscreteTrackChangeState<int3>", false, 0, 2, 0);

    type->SetBaseType(::app::Fuse::Animations::TrackAnimatorState__typeof());
    type->__fp_Disable = (void(*)(::app::Fuse::Animations::AnimatorState*))DiscreteTrackChangeState__int3__Disable;
    type->__fp_SeekObjectValue = (void(*)(::app::Fuse::Animations::TrackAnimatorState*, ::uObject*, float))DiscreteTrackChangeState__int3__SeekObjectValue;

    type->SetStrongRefs(
        "Animator", offsetof(DiscreteTrackChangeState__int3, Animator_1),
        "mixHandle", offsetof(DiscreteTrackChangeState__int3, mixHandle));

    return type;
}

void DiscreteTrackChangeState__int3___ObjInit_2(DiscreteTrackChangeState__int3* __this, ::app::Fuse::Animations::Change__int3* animator, ::app::Fuse::Animations::CreateStateParams* p)
{
    ::app::Fuse::Animations::TrackAnimatorState___ObjInit_1(__this, (::app::Fuse::Animations::TrackAnimator*)animator, p, NULL);
    __this->Animator_1 = animator;
    __this->mixHandle = ::app::Fuse::Animations::IMixer::Register__int3(::uPtr< ::uObject*>(::uPtr< ::app::Fuse::Animations::Change__int3*>(__this->Animator_1)->Mixer), ::uPtr< ::app::Fuse::Animations::Change__int3*>(__this->Animator_1)->Target(), ::uPtr< ::app::Fuse::Animations::Change__int3*>(__this->Animator_1)->MixOp());
}

void DiscreteTrackChangeState__int3__Disable(DiscreteTrackChangeState__int3* __this)
{
    if (__this->mixHandle == NULL)
    {
        return;
    }

    ::app::Fuse::Animations::IMixerHandle__int3::Unregister(::uPtr< ::uObject*>(__this->mixHandle));
    __this->mixHandle = NULL;
}

DiscreteTrackChangeState__int3* DiscreteTrackChangeState__int3__New_1(::uStatic* __this, ::app::Fuse::Animations::Change__int3* animator, ::app::Fuse::Animations::CreateStateParams* p)
{
    DiscreteTrackChangeState__int3* inst = (DiscreteTrackChangeState__int3*)::uAllocObject(sizeof(DiscreteTrackChangeState__int3), DiscreteTrackChangeState__int3__typeof());
    inst->_ObjInit_2(animator, p);
    return inst;
}

void DiscreteTrackChangeState__int3__SeekObjectValue(DiscreteTrackChangeState__int3* __this, ::uObject* value, float strength)
{
    if (__this->mixHandle == NULL)
    {
        ::app::Uno::Diagnostics::Debug__Log_5(NULL, ::uGetConstString("Invalid Seek"), 1, ::uGetConstString("C:\\ProgramData\\Uno\\Packages\\Fuse.Animations\\0.11.3\\$.uno"), 420);
        return;
    }

    if ((value != NULL) && ::uIs(value, ::app::Uno::Int3__typeof()))
    {
        ::app::Fuse::Animations::IMixerHandle__int3::Set(::uPtr< ::uObject*>(__this->mixHandle), ::uUnbox< ::app::Uno::Int3>(::app::Uno::Int3__typeof(), value), strength);
    }
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Animations\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

DiscreteTrackChangeState__int4__uType* DiscreteTrackChangeState__int4__typeof()
{
    static ::uStaticStrong<DiscreteTrackChangeState__int4__uType*> type;
    if (type != NULL) return type;

    type = (DiscreteTrackChangeState__int4__uType*)::uAllocClassType(sizeof(DiscreteTrackChangeState__int4__uType), "Fuse.Animations.DiscreteTrackChangeState<int4>", false, 0, 2, 0);

    type->SetBaseType(::app::Fuse::Animations::TrackAnimatorState__typeof());
    type->__fp_Disable = (void(*)(::app::Fuse::Animations::AnimatorState*))DiscreteTrackChangeState__int4__Disable;
    type->__fp_SeekObjectValue = (void(*)(::app::Fuse::Animations::TrackAnimatorState*, ::uObject*, float))DiscreteTrackChangeState__int4__SeekObjectValue;

    type->SetStrongRefs(
        "Animator", offsetof(DiscreteTrackChangeState__int4, Animator_1),
        "mixHandle", offsetof(DiscreteTrackChangeState__int4, mixHandle));

    return type;
}

void DiscreteTrackChangeState__int4___ObjInit_2(DiscreteTrackChangeState__int4* __this, ::app::Fuse::Animations::Change__int4* animator, ::app::Fuse::Animations::CreateStateParams* p)
{
    ::app::Fuse::Animations::TrackAnimatorState___ObjInit_1(__this, (::app::Fuse::Animations::TrackAnimator*)animator, p, NULL);
    __this->Animator_1 = animator;
    __this->mixHandle = ::app::Fuse::Animations::IMixer::Register__int4(::uPtr< ::uObject*>(::uPtr< ::app::Fuse::Animations::Change__int4*>(__this->Animator_1)->Mixer), ::uPtr< ::app::Fuse::Animations::Change__int4*>(__this->Animator_1)->Target(), ::uPtr< ::app::Fuse::Animations::Change__int4*>(__this->Animator_1)->MixOp());
}

void DiscreteTrackChangeState__int4__Disable(DiscreteTrackChangeState__int4* __this)
{
    if (__this->mixHandle == NULL)
    {
        return;
    }

    ::app::Fuse::Animations::IMixerHandle__int4::Unregister(::uPtr< ::uObject*>(__this->mixHandle));
    __this->mixHandle = NULL;
}

DiscreteTrackChangeState__int4* DiscreteTrackChangeState__int4__New_1(::uStatic* __this, ::app::Fuse::Animations::Change__int4* animator, ::app::Fuse::Animations::CreateStateParams* p)
{
    DiscreteTrackChangeState__int4* inst = (DiscreteTrackChangeState__int4*)::uAllocObject(sizeof(DiscreteTrackChangeState__int4), DiscreteTrackChangeState__int4__typeof());
    inst->_ObjInit_2(animator, p);
    return inst;
}

void DiscreteTrackChangeState__int4__SeekObjectValue(DiscreteTrackChangeState__int4* __this, ::uObject* value, float strength)
{
    if (__this->mixHandle == NULL)
    {
        ::app::Uno::Diagnostics::Debug__Log_5(NULL, ::uGetConstString("Invalid Seek"), 1, ::uGetConstString("C:\\ProgramData\\Uno\\Packages\\Fuse.Animations\\0.11.3\\$.uno"), 420);
        return;
    }

    if ((value != NULL) && ::uIs(value, ::app::Uno::Int4__typeof()))
    {
        ::app::Fuse::Animations::IMixerHandle__int4::Set(::uPtr< ::uObject*>(__this->mixHandle), ::uUnbox< ::app::Uno::Int4>(::app::Uno::Int4__typeof(), value), strength);
    }
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Animations\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

DiscreteTrackChangeState__long__uType* DiscreteTrackChangeState__long__typeof()
{
    static ::uStaticStrong<DiscreteTrackChangeState__long__uType*> type;
    if (type != NULL) return type;

    type = (DiscreteTrackChangeState__long__uType*)::uAllocClassType(sizeof(DiscreteTrackChangeState__long__uType), "Fuse.Animations.DiscreteTrackChangeState<long>", false, 0, 2, 0);

    type->SetBaseType(::app::Fuse::Animations::TrackAnimatorState__typeof());
    type->__fp_Disable = (void(*)(::app::Fuse::Animations::AnimatorState*))DiscreteTrackChangeState__long__Disable;
    type->__fp_SeekObjectValue = (void(*)(::app::Fuse::Animations::TrackAnimatorState*, ::uObject*, float))DiscreteTrackChangeState__long__SeekObjectValue;

    type->SetStrongRefs(
        "Animator", offsetof(DiscreteTrackChangeState__long, Animator_1),
        "mixHandle", offsetof(DiscreteTrackChangeState__long, mixHandle));

    return type;
}

void DiscreteTrackChangeState__long___ObjInit_2(DiscreteTrackChangeState__long* __this, ::app::Fuse::Animations::Change__long* animator, ::app::Fuse::Animations::CreateStateParams* p)
{
    ::app::Fuse::Animations::TrackAnimatorState___ObjInit_1(__this, (::app::Fuse::Animations::TrackAnimator*)animator, p, NULL);
    __this->Animator_1 = animator;
    __this->mixHandle = ::app::Fuse::Animations::IMixer::Register__long(::uPtr< ::uObject*>(::uPtr< ::app::Fuse::Animations::Change__long*>(__this->Animator_1)->Mixer), ::uPtr< ::app::Fuse::Animations::Change__long*>(__this->Animator_1)->Target(), ::uPtr< ::app::Fuse::Animations::Change__long*>(__this->Animator_1)->MixOp());
}

void DiscreteTrackChangeState__long__Disable(DiscreteTrackChangeState__long* __this)
{
    if (__this->mixHandle == NULL)
    {
        return;
    }

    ::app::Fuse::Animations::IMixerHandle__long::Unregister(::uPtr< ::uObject*>(__this->mixHandle));
    __this->mixHandle = NULL;
}

DiscreteTrackChangeState__long* DiscreteTrackChangeState__long__New_1(::uStatic* __this, ::app::Fuse::Animations::Change__long* animator, ::app::Fuse::Animations::CreateStateParams* p)
{
    DiscreteTrackChangeState__long* inst = (DiscreteTrackChangeState__long*)::uAllocObject(sizeof(DiscreteTrackChangeState__long), DiscreteTrackChangeState__long__typeof());
    inst->_ObjInit_2(animator, p);
    return inst;
}

void DiscreteTrackChangeState__long__SeekObjectValue(DiscreteTrackChangeState__long* __this, ::uObject* value, float strength)
{
    if (__this->mixHandle == NULL)
    {
        ::app::Uno::Diagnostics::Debug__Log_5(NULL, ::uGetConstString("Invalid Seek"), 1, ::uGetConstString("C:\\ProgramData\\Uno\\Packages\\Fuse.Animations\\0.11.3\\$.uno"), 420);
        return;
    }

    if ((value != NULL) && ::uIs(value, ::app::Uno::Long__typeof()))
    {
        ::app::Fuse::Animations::IMixerHandle__long::Set(::uPtr< ::uObject*>(__this->mixHandle), ::uUnbox< ::uLong>(::app::Uno::Long__typeof(), value), strength);
    }
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Animations\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

DiscreteTrackChangeState__object__uType* DiscreteTrackChangeState__object__typeof()
{
    static ::uStaticStrong<DiscreteTrackChangeState__object__uType*> type;
    if (type != NULL) return type;

    type = (DiscreteTrackChangeState__object__uType*)::uAllocClassType(sizeof(DiscreteTrackChangeState__object__uType), "Fuse.Animations.DiscreteTrackChangeState<object>", false, 0, 2, 0);

    type->SetBaseType(::app::Fuse::Animations::TrackAnimatorState__typeof());
    type->__fp_Disable = (void(*)(::app::Fuse::Animations::AnimatorState*))DiscreteTrackChangeState__object__Disable;
    type->__fp_SeekObjectValue = (void(*)(::app::Fuse::Animations::TrackAnimatorState*, ::uObject*, float))DiscreteTrackChangeState__object__SeekObjectValue;

    type->SetStrongRefs(
        "Animator", offsetof(DiscreteTrackChangeState__object, Animator_1),
        "mixHandle", offsetof(DiscreteTrackChangeState__object, mixHandle));

    return type;
}

void DiscreteTrackChangeState__object___ObjInit_2(DiscreteTrackChangeState__object* __this, ::app::Fuse::Animations::Change__object* animator, ::app::Fuse::Animations::CreateStateParams* p)
{
    ::app::Fuse::Animations::TrackAnimatorState___ObjInit_1(__this, (::app::Fuse::Animations::TrackAnimator*)animator, p, NULL);
    __this->Animator_1 = animator;
    __this->mixHandle = ::app::Fuse::Animations::IMixer::Register__object(::uPtr< ::uObject*>(::uPtr< ::app::Fuse::Animations::Change__object*>(__this->Animator_1)->Mixer), ::uPtr< ::app::Fuse::Animations::Change__object*>(__this->Animator_1)->Target(), ::uPtr< ::app::Fuse::Animations::Change__object*>(__this->Animator_1)->MixOp());
}

void DiscreteTrackChangeState__object__Disable(DiscreteTrackChangeState__object* __this)
{
    if (__this->mixHandle == NULL)
    {
        return;
    }

    ::app::Fuse::Animations::IMixerHandle__object::Unregister(::uPtr< ::uObject*>(__this->mixHandle));
    __this->mixHandle = NULL;
}

DiscreteTrackChangeState__object* DiscreteTrackChangeState__object__New_1(::uStatic* __this, ::app::Fuse::Animations::Change__object* animator, ::app::Fuse::Animations::CreateStateParams* p)
{
    DiscreteTrackChangeState__object* inst = (DiscreteTrackChangeState__object*)::uAllocObject(sizeof(DiscreteTrackChangeState__object), DiscreteTrackChangeState__object__typeof());
    inst->_ObjInit_2(animator, p);
    return inst;
}

void DiscreteTrackChangeState__object__SeekObjectValue(DiscreteTrackChangeState__object* __this, ::uObject* value, float strength)
{
    if (__this->mixHandle == NULL)
    {
        ::app::Uno::Diagnostics::Debug__Log_5(NULL, ::uGetConstString("Invalid Seek"), 1, ::uGetConstString("C:\\ProgramData\\Uno\\Packages\\Fuse.Animations\\0.11.3\\$.uno"), 420);
        return;
    }

    if ((value != NULL) && ::uIs(value, ::uObject__typeof()))
    {
        ::app::Fuse::Animations::IMixerHandle__object::Set(::uPtr< ::uObject*>(__this->mixHandle), value, strength);
    }
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Animations\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

DiscreteTrackChangeState__short__uType* DiscreteTrackChangeState__short__typeof()
{
    static ::uStaticStrong<DiscreteTrackChangeState__short__uType*> type;
    if (type != NULL) return type;

    type = (DiscreteTrackChangeState__short__uType*)::uAllocClassType(sizeof(DiscreteTrackChangeState__short__uType), "Fuse.Animations.DiscreteTrackChangeState<short>", false, 0, 2, 0);

    type->SetBaseType(::app::Fuse::Animations::TrackAnimatorState__typeof());
    type->__fp_Disable = (void(*)(::app::Fuse::Animations::AnimatorState*))DiscreteTrackChangeState__short__Disable;
    type->__fp_SeekObjectValue = (void(*)(::app::Fuse::Animations::TrackAnimatorState*, ::uObject*, float))DiscreteTrackChangeState__short__SeekObjectValue;

    type->SetStrongRefs(
        "Animator", offsetof(DiscreteTrackChangeState__short, Animator_1),
        "mixHandle", offsetof(DiscreteTrackChangeState__short, mixHandle));

    return type;
}

void DiscreteTrackChangeState__short___ObjInit_2(DiscreteTrackChangeState__short* __this, ::app::Fuse::Animations::Change__short* animator, ::app::Fuse::Animations::CreateStateParams* p)
{
    ::app::Fuse::Animations::TrackAnimatorState___ObjInit_1(__this, (::app::Fuse::Animations::TrackAnimator*)animator, p, NULL);
    __this->Animator_1 = animator;
    __this->mixHandle = ::app::Fuse::Animations::IMixer::Register__short(::uPtr< ::uObject*>(::uPtr< ::app::Fuse::Animations::Change__short*>(__this->Animator_1)->Mixer), ::uPtr< ::app::Fuse::Animations::Change__short*>(__this->Animator_1)->Target(), ::uPtr< ::app::Fuse::Animations::Change__short*>(__this->Animator_1)->MixOp());
}

void DiscreteTrackChangeState__short__Disable(DiscreteTrackChangeState__short* __this)
{
    if (__this->mixHandle == NULL)
    {
        return;
    }

    ::app::Fuse::Animations::IMixerHandle__short::Unregister(::uPtr< ::uObject*>(__this->mixHandle));
    __this->mixHandle = NULL;
}

DiscreteTrackChangeState__short* DiscreteTrackChangeState__short__New_1(::uStatic* __this, ::app::Fuse::Animations::Change__short* animator, ::app::Fuse::Animations::CreateStateParams* p)
{
    DiscreteTrackChangeState__short* inst = (DiscreteTrackChangeState__short*)::uAllocObject(sizeof(DiscreteTrackChangeState__short), DiscreteTrackChangeState__short__typeof());
    inst->_ObjInit_2(animator, p);
    return inst;
}

void DiscreteTrackChangeState__short__SeekObjectValue(DiscreteTrackChangeState__short* __this, ::uObject* value, float strength)
{
    if (__this->mixHandle == NULL)
    {
        ::app::Uno::Diagnostics::Debug__Log_5(NULL, ::uGetConstString("Invalid Seek"), 1, ::uGetConstString("C:\\ProgramData\\Uno\\Packages\\Fuse.Animations\\0.11.3\\$.uno"), 420);
        return;
    }

    if ((value != NULL) && ::uIs(value, ::app::Uno::Short__typeof()))
    {
        ::app::Fuse::Animations::IMixerHandle__short::Set(::uPtr< ::uObject*>(__this->mixHandle), ::uUnbox< ::uShort>(::app::Uno::Short__typeof(), value), strength);
    }
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Animations\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

DiscreteTrackChangeState__string__uType* DiscreteTrackChangeState__string__typeof()
{
    static ::uStaticStrong<DiscreteTrackChangeState__string__uType*> type;
    if (type != NULL) return type;

    type = (DiscreteTrackChangeState__string__uType*)::uAllocClassType(sizeof(DiscreteTrackChangeState__string__uType), "Fuse.Animations.DiscreteTrackChangeState<string>", false, 0, 2, 0);

    type->SetBaseType(::app::Fuse::Animations::TrackAnimatorState__typeof());
    type->__fp_Disable = (void(*)(::app::Fuse::Animations::AnimatorState*))DiscreteTrackChangeState__string__Disable;
    type->__fp_SeekObjectValue = (void(*)(::app::Fuse::Animations::TrackAnimatorState*, ::uObject*, float))DiscreteTrackChangeState__string__SeekObjectValue;

    type->SetStrongRefs(
        "Animator", offsetof(DiscreteTrackChangeState__string, Animator_1),
        "mixHandle", offsetof(DiscreteTrackChangeState__string, mixHandle));

    return type;
}

void DiscreteTrackChangeState__string___ObjInit_2(DiscreteTrackChangeState__string* __this, ::app::Fuse::Animations::Change__string* animator, ::app::Fuse::Animations::CreateStateParams* p)
{
    ::app::Fuse::Animations::TrackAnimatorState___ObjInit_1(__this, (::app::Fuse::Animations::TrackAnimator*)animator, p, NULL);
    __this->Animator_1 = animator;
    __this->mixHandle = ::app::Fuse::Animations::IMixer::Register__string(::uPtr< ::uObject*>(::uPtr< ::app::Fuse::Animations::Change__string*>(__this->Animator_1)->Mixer), ::uPtr< ::app::Fuse::Animations::Change__string*>(__this->Animator_1)->Target(), ::uPtr< ::app::Fuse::Animations::Change__string*>(__this->Animator_1)->MixOp());
}

void DiscreteTrackChangeState__string__Disable(DiscreteTrackChangeState__string* __this)
{
    if (__this->mixHandle == NULL)
    {
        return;
    }

    ::app::Fuse::Animations::IMixerHandle__string::Unregister(::uPtr< ::uObject*>(__this->mixHandle));
    __this->mixHandle = NULL;
}

DiscreteTrackChangeState__string* DiscreteTrackChangeState__string__New_1(::uStatic* __this, ::app::Fuse::Animations::Change__string* animator, ::app::Fuse::Animations::CreateStateParams* p)
{
    DiscreteTrackChangeState__string* inst = (DiscreteTrackChangeState__string*)::uAllocObject(sizeof(DiscreteTrackChangeState__string), DiscreteTrackChangeState__string__typeof());
    inst->_ObjInit_2(animator, p);
    return inst;
}

void DiscreteTrackChangeState__string__SeekObjectValue(DiscreteTrackChangeState__string* __this, ::uObject* value, float strength)
{
    if (__this->mixHandle == NULL)
    {
        ::app::Uno::Diagnostics::Debug__Log_5(NULL, ::uGetConstString("Invalid Seek"), 1, ::uGetConstString("C:\\ProgramData\\Uno\\Packages\\Fuse.Animations\\0.11.3\\$.uno"), 420);
        return;
    }

    if ((value != NULL) && ::uIs(value, ::app::Uno::String__typeof()))
    {
        ::app::Fuse::Animations::IMixerHandle__string::Set(::uPtr< ::uObject*>(__this->mixHandle), ::uCast< ::uString*>(value, ::app::Uno::String__typeof()), strength);
    }
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Animations\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

DiscreteTrackChangeState__Uno_EventArgs__uType* DiscreteTrackChangeState__Uno_EventArgs__typeof()
{
    static ::uStaticStrong<DiscreteTrackChangeState__Uno_EventArgs__uType*> type;
    if (type != NULL) return type;

    type = (DiscreteTrackChangeState__Uno_EventArgs__uType*)::uAllocClassType(sizeof(DiscreteTrackChangeState__Uno_EventArgs__uType), "Fuse.Animations.DiscreteTrackChangeState<Uno.EventArgs>", false, 0, 2, 0);

    type->SetBaseType(::app::Fuse::Animations::TrackAnimatorState__typeof());
    type->__fp_Disable = (void(*)(::app::Fuse::Animations::AnimatorState*))DiscreteTrackChangeState__Uno_EventArgs__Disable;
    type->__fp_SeekObjectValue = (void(*)(::app::Fuse::Animations::TrackAnimatorState*, ::uObject*, float))DiscreteTrackChangeState__Uno_EventArgs__SeekObjectValue;

    type->SetStrongRefs(
        "Animator", offsetof(DiscreteTrackChangeState__Uno_EventArgs, Animator_1),
        "mixHandle", offsetof(DiscreteTrackChangeState__Uno_EventArgs, mixHandle));

    return type;
}

void DiscreteTrackChangeState__Uno_EventArgs___ObjInit_2(DiscreteTrackChangeState__Uno_EventArgs* __this, ::app::Fuse::Animations::Change__Uno_EventArgs* animator, ::app::Fuse::Animations::CreateStateParams* p)
{
    ::app::Fuse::Animations::TrackAnimatorState___ObjInit_1(__this, (::app::Fuse::Animations::TrackAnimator*)animator, p, NULL);
    __this->Animator_1 = animator;
    __this->mixHandle = ::app::Fuse::Animations::IMixer::Register__Uno_EventArgs(::uPtr< ::uObject*>(::uPtr< ::app::Fuse::Animations::Change__Uno_EventArgs*>(__this->Animator_1)->Mixer), ::uPtr< ::app::Fuse::Animations::Change__Uno_EventArgs*>(__this->Animator_1)->Target(), ::uPtr< ::app::Fuse::Animations::Change__Uno_EventArgs*>(__this->Animator_1)->MixOp());
}

void DiscreteTrackChangeState__Uno_EventArgs__Disable(DiscreteTrackChangeState__Uno_EventArgs* __this)
{
    if (__this->mixHandle == NULL)
    {
        return;
    }

    ::app::Fuse::Animations::IMixerHandle__Uno_EventArgs::Unregister(::uPtr< ::uObject*>(__this->mixHandle));
    __this->mixHandle = NULL;
}

DiscreteTrackChangeState__Uno_EventArgs* DiscreteTrackChangeState__Uno_EventArgs__New_1(::uStatic* __this, ::app::Fuse::Animations::Change__Uno_EventArgs* animator, ::app::Fuse::Animations::CreateStateParams* p)
{
    DiscreteTrackChangeState__Uno_EventArgs* inst = (DiscreteTrackChangeState__Uno_EventArgs*)::uAllocObject(sizeof(DiscreteTrackChangeState__Uno_EventArgs), DiscreteTrackChangeState__Uno_EventArgs__typeof());
    inst->_ObjInit_2(animator, p);
    return inst;
}

void DiscreteTrackChangeState__Uno_EventArgs__SeekObjectValue(DiscreteTrackChangeState__Uno_EventArgs* __this, ::uObject* value, float strength)
{
    if (__this->mixHandle == NULL)
    {
        ::app::Uno::Diagnostics::Debug__Log_5(NULL, ::uGetConstString("Invalid Seek"), 1, ::uGetConstString("C:\\ProgramData\\Uno\\Packages\\Fuse.Animations\\0.11.3\\$.uno"), 420);
        return;
    }

    if ((value != NULL) && ::uIs(value, ::app::Uno::EventArgs__typeof()))
    {
        ::app::Fuse::Animations::IMixerHandle__Uno_EventArgs::Set(::uPtr< ::uObject*>(__this->mixHandle), ::uCast< ::app::Uno::EventArgs*>(value, ::app::Uno::EventArgs__typeof()), strength);
    }
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Animations\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

DiscreteTrackChangeState__Uno_Platform_iOS_StatusBarStyle__uType* DiscreteTrackChangeState__Uno_Platform_iOS_StatusBarStyle__typeof()
{
    static ::uStaticStrong<DiscreteTrackChangeState__Uno_Platform_iOS_StatusBarStyle__uType*> type;
    if (type != NULL) return type;

    type = (DiscreteTrackChangeState__Uno_Platform_iOS_StatusBarStyle__uType*)::uAllocClassType(sizeof(DiscreteTrackChangeState__Uno_Platform_iOS_StatusBarStyle__uType), "Fuse.Animations.DiscreteTrackChangeState<Uno.Platform.iOS.StatusBarStyle>", false, 0, 2, 0);

    type->SetBaseType(::app::Fuse::Animations::TrackAnimatorState__typeof());
    type->__fp_Disable = (void(*)(::app::Fuse::Animations::AnimatorState*))DiscreteTrackChangeState__Uno_Platform_iOS_StatusBarStyle__Disable;
    type->__fp_SeekObjectValue = (void(*)(::app::Fuse::Animations::TrackAnimatorState*, ::uObject*, float))DiscreteTrackChangeState__Uno_Platform_iOS_StatusBarStyle__SeekObjectValue;

    type->SetStrongRefs(
        "Animator", offsetof(DiscreteTrackChangeState__Uno_Platform_iOS_StatusBarStyle, Animator_1),
        "mixHandle", offsetof(DiscreteTrackChangeState__Uno_Platform_iOS_StatusBarStyle, mixHandle));

    return type;
}

void DiscreteTrackChangeState__Uno_Platform_iOS_StatusBarStyle___ObjInit_2(DiscreteTrackChangeState__Uno_Platform_iOS_StatusBarStyle* __this, ::app::Fuse::Animations::Change__Uno_Platform_iOS_StatusBarStyle* animator, ::app::Fuse::Animations::CreateStateParams* p)
{
    ::app::Fuse::Animations::TrackAnimatorState___ObjInit_1(__this, (::app::Fuse::Animations::TrackAnimator*)animator, p, NULL);
    __this->Animator_1 = animator;
    __this->mixHandle = ::app::Fuse::Animations::IMixer::Register__Uno_Platform_iOS_StatusBarStyle(::uPtr< ::uObject*>(::uPtr< ::app::Fuse::Animations::Change__Uno_Platform_iOS_StatusBarStyle*>(__this->Animator_1)->Mixer), ::uPtr< ::app::Fuse::Animations::Change__Uno_Platform_iOS_StatusBarStyle*>(__this->Animator_1)->Target(), ::uPtr< ::app::Fuse::Animations::Change__Uno_Platform_iOS_StatusBarStyle*>(__this->Animator_1)->MixOp());
}

void DiscreteTrackChangeState__Uno_Platform_iOS_StatusBarStyle__Disable(DiscreteTrackChangeState__Uno_Platform_iOS_StatusBarStyle* __this)
{
    if (__this->mixHandle == NULL)
    {
        return;
    }

    ::app::Fuse::Animations::IMixerHandle__Uno_Platform_iOS_StatusBarStyle::Unregister(::uPtr< ::uObject*>(__this->mixHandle));
    __this->mixHandle = NULL;
}

DiscreteTrackChangeState__Uno_Platform_iOS_StatusBarStyle* DiscreteTrackChangeState__Uno_Platform_iOS_StatusBarStyle__New_1(::uStatic* __this, ::app::Fuse::Animations::Change__Uno_Platform_iOS_StatusBarStyle* animator, ::app::Fuse::Animations::CreateStateParams* p)
{
    DiscreteTrackChangeState__Uno_Platform_iOS_StatusBarStyle* inst = (DiscreteTrackChangeState__Uno_Platform_iOS_StatusBarStyle*)::uAllocObject(sizeof(DiscreteTrackChangeState__Uno_Platform_iOS_StatusBarStyle), DiscreteTrackChangeState__Uno_Platform_iOS_StatusBarStyle__typeof());
    inst->_ObjInit_2(animator, p);
    return inst;
}

void DiscreteTrackChangeState__Uno_Platform_iOS_StatusBarStyle__SeekObjectValue(DiscreteTrackChangeState__Uno_Platform_iOS_StatusBarStyle* __this, ::uObject* value, float strength)
{
    if (__this->mixHandle == NULL)
    {
        ::app::Uno::Diagnostics::Debug__Log_5(NULL, ::uGetConstString("Invalid Seek"), 1, ::uGetConstString("C:\\ProgramData\\Uno\\Packages\\Fuse.Animations\\0.11.3\\$.uno"), 420);
        return;
    }

    if ((value != NULL) && ::uIs(value, ::app::Uno::Platform::iOS::StatusBarStyle__typeof()))
    {
        ::app::Fuse::Animations::IMixerHandle__Uno_Platform_iOS_StatusBarStyle::Set(::uPtr< ::uObject*>(__this->mixHandle), ::uUnbox< int>(::app::Uno::Platform::iOS::StatusBarStyle__typeof(), value), strength);
    }
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Animations\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

DiscreteTrackChangeState__Uno_UX_FileSource__uType* DiscreteTrackChangeState__Uno_UX_FileSource__typeof()
{
    static ::uStaticStrong<DiscreteTrackChangeState__Uno_UX_FileSource__uType*> type;
    if (type != NULL) return type;

    type = (DiscreteTrackChangeState__Uno_UX_FileSource__uType*)::uAllocClassType(sizeof(DiscreteTrackChangeState__Uno_UX_FileSource__uType), "Fuse.Animations.DiscreteTrackChangeState<Uno.UX.FileSource>", false, 0, 2, 0);

    type->SetBaseType(::app::Fuse::Animations::TrackAnimatorState__typeof());
    type->__fp_Disable = (void(*)(::app::Fuse::Animations::AnimatorState*))DiscreteTrackChangeState__Uno_UX_FileSource__Disable;
    type->__fp_SeekObjectValue = (void(*)(::app::Fuse::Animations::TrackAnimatorState*, ::uObject*, float))DiscreteTrackChangeState__Uno_UX_FileSource__SeekObjectValue;

    type->SetStrongRefs(
        "Animator", offsetof(DiscreteTrackChangeState__Uno_UX_FileSource, Animator_1),
        "mixHandle", offsetof(DiscreteTrackChangeState__Uno_UX_FileSource, mixHandle));

    return type;
}

void DiscreteTrackChangeState__Uno_UX_FileSource___ObjInit_2(DiscreteTrackChangeState__Uno_UX_FileSource* __this, ::app::Fuse::Animations::Change__Uno_UX_FileSource* animator, ::app::Fuse::Animations::CreateStateParams* p)
{
    ::app::Fuse::Animations::TrackAnimatorState___ObjInit_1(__this, (::app::Fuse::Animations::TrackAnimator*)animator, p, NULL);
    __this->Animator_1 = animator;
    __this->mixHandle = ::app::Fuse::Animations::IMixer::Register__Uno_UX_FileSource(::uPtr< ::uObject*>(::uPtr< ::app::Fuse::Animations::Change__Uno_UX_FileSource*>(__this->Animator_1)->Mixer), ::uPtr< ::app::Fuse::Animations::Change__Uno_UX_FileSource*>(__this->Animator_1)->Target(), ::uPtr< ::app::Fuse::Animations::Change__Uno_UX_FileSource*>(__this->Animator_1)->MixOp());
}

void DiscreteTrackChangeState__Uno_UX_FileSource__Disable(DiscreteTrackChangeState__Uno_UX_FileSource* __this)
{
    if (__this->mixHandle == NULL)
    {
        return;
    }

    ::app::Fuse::Animations::IMixerHandle__Uno_UX_FileSource::Unregister(::uPtr< ::uObject*>(__this->mixHandle));
    __this->mixHandle = NULL;
}

DiscreteTrackChangeState__Uno_UX_FileSource* DiscreteTrackChangeState__Uno_UX_FileSource__New_1(::uStatic* __this, ::app::Fuse::Animations::Change__Uno_UX_FileSource* animator, ::app::Fuse::Animations::CreateStateParams* p)
{
    DiscreteTrackChangeState__Uno_UX_FileSource* inst = (DiscreteTrackChangeState__Uno_UX_FileSource*)::uAllocObject(sizeof(DiscreteTrackChangeState__Uno_UX_FileSource), DiscreteTrackChangeState__Uno_UX_FileSource__typeof());
    inst->_ObjInit_2(animator, p);
    return inst;
}

void DiscreteTrackChangeState__Uno_UX_FileSource__SeekObjectValue(DiscreteTrackChangeState__Uno_UX_FileSource* __this, ::uObject* value, float strength)
{
    if (__this->mixHandle == NULL)
    {
        ::app::Uno::Diagnostics::Debug__Log_5(NULL, ::uGetConstString("Invalid Seek"), 1, ::uGetConstString("C:\\ProgramData\\Uno\\Packages\\Fuse.Animations\\0.11.3\\$.uno"), 420);
        return;
    }

    if ((value != NULL) && ::uIs(value, ::app::Uno::UX::FileSource__typeof()))
    {
        ::app::Fuse::Animations::IMixerHandle__Uno_UX_FileSource::Set(::uPtr< ::uObject*>(__this->mixHandle), ::uCast< ::app::Uno::UX::FileSource*>(value, ::app::Uno::UX::FileSource__typeof()), strength);
    }
}

}}}
