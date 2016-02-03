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
#include <app/Fuse.Animations.ContinuousTrackChangeState__bool.h>
#include <app/Fuse.Animations.ContinuousTrackChangeState__char.h>
#include <app/Fuse.Animations.ContinuousTrackChangeState__double.h>
#include <app/Fuse.Animations.ContinuousTrackChangeState__float.h>
#include <app/Fuse.Animations.ContinuousTrackChangeState__float2.h>
#include <app/Fuse.Animations.ContinuousTrackChangeState__float3.h>
#include <app/Fuse.Animations.ContinuousTrackChangeState__float4.h>
#include <app/Fuse.Animations.ContinuousTrackChangeState__Fuse_Animations_Ani-35a61e84.h>
#include <app/Fuse.Animations.ContinuousTrackChangeState__Fuse_Animations_Easing.h>
#include <app/Fuse.Animations.ContinuousTrackChangeState__Fuse_Animations_Key-c2213dc7.h>
#include <app/Fuse.Animations.ContinuousTrackChangeState__Fuse_Animations_MixOp.h>
#include <app/Fuse.Animations.ContinuousTrackChangeState__Fuse_Drawing_BlendMode.h>
#include <app/Fuse.Animations.ContinuousTrackChangeState__Fuse_Drawing_Brush.h>
#include <app/Fuse.Animations.ContinuousTrackChangeState__Fuse_Drawing_DynamicBrush.h>
#include <app/Fuse.Animations.ContinuousTrackChangeState__Fuse_Drawing_GradientStop.h>
#include <app/Fuse.Animations.ContinuousTrackChangeState__Fuse_Drawing_LinearGradient.h>
#include <app/Fuse.Animations.ContinuousTrackChangeState__Fuse_Drawing_SolidColor.h>
#include <app/Fuse.Animations.ContinuousTrackChangeState__Fuse_Drawing_StaticBrush.h>
#include <app/Fuse.Animations.ContinuousTrackChangeState__Fuse_Elements_Alignment.h>
#include <app/Fuse.Animations.ContinuousTrackChangeState__Fuse_Elements_CachingMode.h>
#include <app/Fuse.Animations.ContinuousTrackChangeState__Fuse_Elements_Element.h>
#include <app/Fuse.Animations.ContinuousTrackChangeState__Fuse_Elements_HitTestMode.h>
#include <app/Fuse.Animations.ContinuousTrackChangeState__Fuse_Elements_SizeUnit.h>
#include <app/Fuse.Animations.ContinuousTrackChangeState__Fuse_Elements_Stret-80631141.h>
#include <app/Fuse.Animations.ContinuousTrackChangeState__Fuse_Elements_StretchMode.h>
#include <app/Fuse.Animations.ContinuousTrackChangeState__Fuse_Elements_StretchSizing.h>
#include <app/Fuse.Animations.ContinuousTrackChangeState__Fuse_Elements_TextAlignment.h>
#include <app/Fuse.Animations.ContinuousTrackChangeState__Fuse_Elements_TextWrapping.h>
#include <app/Fuse.Animations.ContinuousTrackChangeState__Fuse_Elements_Visibility.h>
#include <app/Fuse.Animations.ContinuousTrackChangeState__Fuse_Font.h>
#include <app/Fuse.Animations.ContinuousTrackChangeState__Fuse_Gestures_Edge.h>
#include <app/Fuse.Animations.ContinuousTrackChangeState__Fuse_Gestures_Scrol-f0f2bc11.h>
#include <app/Fuse.Animations.ContinuousTrackChangeState__Fuse_Layouts_Dock.h>
#include <app/Fuse.Animations.ContinuousTrackChangeState__Fuse_Layouts_FlowDirection.h>
#include <app/Fuse.Animations.ContinuousTrackChangeState__Fuse_Layouts_Metric.h>
#include <app/Fuse.Animations.ContinuousTrackChangeState__Fuse_Layouts_Orientation.h>
#include <app/Fuse.Animations.ContinuousTrackChangeState__Fuse_Navigation_Nav-34dfb43a.h>
#include <app/Fuse.Animations.ContinuousTrackChangeState__Fuse_Navigation_Nav-a64d4c61.h>
#include <app/Fuse.Animations.ContinuousTrackChangeState__Fuse_Navigation_Nav-f844ff54.h>
#include <app/Fuse.Animations.ContinuousTrackChangeState__Fuse_Navigation_SnapTo.h>
#include <app/Fuse.Animations.ContinuousTrackChangeState__Fuse_Navigation_Swi-3b659c02.h>
#include <app/Fuse.Animations.ContinuousTrackChangeState__Fuse_Navigation_SwipeEnds.h>
#include <app/Fuse.Animations.ContinuousTrackChangeState__Fuse_Node.h>
#include <app/Fuse.Animations.ContinuousTrackChangeState__Fuse_Resources_ImageSource.h>
#include <app/Fuse.Animations.ContinuousTrackChangeState__Fuse_Triggers_Actio-954e63e.h>
#include <app/Fuse.Animations.ContinuousTrackChangeState__Fuse_Triggers_State.h>
#include <app/Fuse.Animations.ContinuousTrackChangeState__Fuse_Triggers_State-f27788b6.h>
#include <app/Fuse.Animations.ContinuousTrackChangeState__Fuse_Triggers_Trigg-292a9008.h>
#include <app/Fuse.Animations.ContinuousTrackChangeState__int.h>
#include <app/Fuse.Animations.ContinuousTrackChangeState__int2.h>
#include <app/Fuse.Animations.ContinuousTrackChangeState__int3.h>
#include <app/Fuse.Animations.ContinuousTrackChangeState__int4.h>
#include <app/Fuse.Animations.ContinuousTrackChangeState__long.h>
#include <app/Fuse.Animations.ContinuousTrackChangeState__object.h>
#include <app/Fuse.Animations.ContinuousTrackChangeState__short.h>
#include <app/Fuse.Animations.ContinuousTrackChangeState__string.h>
#include <app/Fuse.Animations.ContinuousTrackChangeState__Uno_EventArgs.h>
#include <app/Fuse.Animations.ContinuousTrackChangeState__Uno_Platform_iOS_St-ddbe149.h>
#include <app/Fuse.Animations.ContinuousTrackChangeState__Uno_UX_FileSource.h>
#include <app/Fuse.Animations.Converter__bool.h>
#include <app/Fuse.Animations.Converter__char.h>
#include <app/Fuse.Animations.Converter__double.h>
#include <app/Fuse.Animations.Converter__float.h>
#include <app/Fuse.Animations.Converter__float2.h>
#include <app/Fuse.Animations.Converter__float3.h>
#include <app/Fuse.Animations.Converter__float4.h>
#include <app/Fuse.Animations.Converter__Fuse_Animations_AnimationVariant.h>
#include <app/Fuse.Animations.Converter__Fuse_Animations_Easing.h>
#include <app/Fuse.Animations.Converter__Fuse_Animations_KeyframeInterpolation.h>
#include <app/Fuse.Animations.Converter__Fuse_Animations_MixOp.h>
#include <app/Fuse.Animations.Converter__Fuse_Drawing_BlendMode.h>
#include <app/Fuse.Animations.Converter__Fuse_Drawing_Brush.h>
#include <app/Fuse.Animations.Converter__Fuse_Drawing_DynamicBrush.h>
#include <app/Fuse.Animations.Converter__Fuse_Drawing_GradientStop.h>
#include <app/Fuse.Animations.Converter__Fuse_Drawing_LinearGradient.h>
#include <app/Fuse.Animations.Converter__Fuse_Drawing_SolidColor.h>
#include <app/Fuse.Animations.Converter__Fuse_Drawing_StaticBrush.h>
#include <app/Fuse.Animations.Converter__Fuse_Elements_Alignment.h>
#include <app/Fuse.Animations.Converter__Fuse_Elements_CachingMode.h>
#include <app/Fuse.Animations.Converter__Fuse_Elements_Element.h>
#include <app/Fuse.Animations.Converter__Fuse_Elements_HitTestMode.h>
#include <app/Fuse.Animations.Converter__Fuse_Elements_SizeUnit.h>
#include <app/Fuse.Animations.Converter__Fuse_Elements_StretchDirection.h>
#include <app/Fuse.Animations.Converter__Fuse_Elements_StretchMode.h>
#include <app/Fuse.Animations.Converter__Fuse_Elements_StretchSizing.h>
#include <app/Fuse.Animations.Converter__Fuse_Elements_TextAlignment.h>
#include <app/Fuse.Animations.Converter__Fuse_Elements_TextWrapping.h>
#include <app/Fuse.Animations.Converter__Fuse_Elements_Visibility.h>
#include <app/Fuse.Animations.Converter__Fuse_Font.h>
#include <app/Fuse.Animations.Converter__Fuse_Gestures_Edge.h>
#include <app/Fuse.Animations.Converter__Fuse_Gestures_ScrollDirections.h>
#include <app/Fuse.Animations.Converter__Fuse_Layouts_Dock.h>
#include <app/Fuse.Animations.Converter__Fuse_Layouts_FlowDirection.h>
#include <app/Fuse.Animations.Converter__Fuse_Layouts_Metric.h>
#include <app/Fuse.Animations.Converter__Fuse_Layouts_Orientation.h>
#include <app/Fuse.Animations.Converter__Fuse_Navigation_NavigationDirection.h>
#include <app/Fuse.Animations.Converter__Fuse_Navigation_NavigationEdge.h>
#include <app/Fuse.Animations.Converter__Fuse_Navigation_NavigationGotoMode.h>
#include <app/Fuse.Animations.Converter__Fuse_Navigation_SnapTo.h>
#include <app/Fuse.Animations.Converter__Fuse_Navigation_SwipeDirection.h>
#include <app/Fuse.Animations.Converter__Fuse_Navigation_SwipeEnds.h>
#include <app/Fuse.Animations.Converter__Fuse_Node.h>
#include <app/Fuse.Animations.Converter__Fuse_Resources_ImageSource.h>
#include <app/Fuse.Animations.Converter__Fuse_Triggers_Actions_TriggerDirection.h>
#include <app/Fuse.Animations.Converter__Fuse_Triggers_State.h>
#include <app/Fuse.Animations.Converter__Fuse_Triggers_StateTransition.h>
#include <app/Fuse.Animations.Converter__Fuse_Triggers_TriggerBypassMode.h>
#include <app/Fuse.Animations.Converter__int.h>
#include <app/Fuse.Animations.Converter__int2.h>
#include <app/Fuse.Animations.Converter__int3.h>
#include <app/Fuse.Animations.Converter__int4.h>
#include <app/Fuse.Animations.Converter__long.h>
#include <app/Fuse.Animations.Converter__object.h>
#include <app/Fuse.Animations.Converter__short.h>
#include <app/Fuse.Animations.Converter__string.h>
#include <app/Fuse.Animations.Converter__Uno_EventArgs.h>
#include <app/Fuse.Animations.Converter__Uno_Platform_iOS_StatusBarStyle.h>
#include <app/Fuse.Animations.Converter__Uno_UX_FileSource.h>
#include <app/Fuse.Animations.CreateStateParams.h>
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

ContinuousTrackChangeState__bool__uType* ContinuousTrackChangeState__bool__typeof()
{
    static ::uStaticStrong<ContinuousTrackChangeState__bool__uType*> type;
    if (type != NULL) return type;

    type = (ContinuousTrackChangeState__bool__uType*)::uAllocClassType(sizeof(ContinuousTrackChangeState__bool__uType), "Fuse.Animations.ContinuousTrackChangeState<bool>", false, 0, 2, 0);

    type->SetBaseType(::app::Fuse::Animations::TrackAnimatorState__typeof());
    type->__fp_Disable = (void(*)(::app::Fuse::Animations::AnimatorState*))ContinuousTrackChangeState__bool__Disable;
    type->__fp_SeekValue = (void(*)(::app::Fuse::Animations::TrackAnimatorState*, ::app::Uno::Float4, float))ContinuousTrackChangeState__bool__SeekValue;

    type->SetStrongRefs(
        "Animator", offsetof(ContinuousTrackChangeState__bool, Animator_1),
        "mixHandle", offsetof(ContinuousTrackChangeState__bool, mixHandle));

    return type;
}

void ContinuousTrackChangeState__bool___ObjInit_2(ContinuousTrackChangeState__bool* __this, ::app::Fuse::Animations::Change__bool* animator, ::app::Fuse::Animations::CreateStateParams* p)
{
    ::app::Fuse::Animations::TrackAnimatorState___ObjInit_1(__this, (::app::Fuse::Animations::TrackAnimator*)animator, p, NULL);
    __this->Animator_1 = animator;
    __this->mixHandle = ::app::Fuse::Animations::IMixer::Register__bool(::uPtr< ::uObject*>(::uPtr< ::app::Fuse::Animations::Change__bool*>(__this->Animator_1)->Mixer), ::uPtr< ::app::Fuse::Animations::Change__bool*>(__this->Animator_1)->Target(), ::uPtr< ::app::Fuse::Animations::Change__bool*>(__this->Animator_1)->MixOp());
}

void ContinuousTrackChangeState__bool__Disable(ContinuousTrackChangeState__bool* __this)
{
    if (__this->mixHandle == NULL)
    {
        return;
    }

    ::app::Fuse::Animations::IMixerHandle__bool::Unregister(::uPtr< ::uObject*>(__this->mixHandle));
    __this->mixHandle = NULL;
}

ContinuousTrackChangeState__bool* ContinuousTrackChangeState__bool__New_1(::uStatic* __this, ::app::Fuse::Animations::Change__bool* animator, ::app::Fuse::Animations::CreateStateParams* p)
{
    ContinuousTrackChangeState__bool* inst = (ContinuousTrackChangeState__bool*)::uAllocObject(sizeof(ContinuousTrackChangeState__bool), ContinuousTrackChangeState__bool__typeof());
    inst->_ObjInit_2(animator, p);
    return inst;
}

void ContinuousTrackChangeState__bool__SeekValue(ContinuousTrackChangeState__bool* __this, ::app::Uno::Float4 value, float strength)
{
    if (__this->mixHandle == NULL)
    {
        ::app::Uno::Diagnostics::Debug__Log_5(NULL, ::uGetConstString("Invalid Seek"), 1, ::uGetConstString("C:\\ProgramData\\Uno\\Packages\\Fuse.Animations\\0.11.3\\$.uno"), 454);
        return;
    }

    ::app::Fuse::Animations::IMixerHandle__bool::Set(::uPtr< ::uObject*>(__this->mixHandle), ::uPtr< ::app::Fuse::Animations::Converter__bool*>(::uPtr< ::app::Fuse::Animations::Change__bool*>(__this->Animator_1)->ContinuousConverter)->Out(value), strength);
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Animations\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

ContinuousTrackChangeState__char__uType* ContinuousTrackChangeState__char__typeof()
{
    static ::uStaticStrong<ContinuousTrackChangeState__char__uType*> type;
    if (type != NULL) return type;

    type = (ContinuousTrackChangeState__char__uType*)::uAllocClassType(sizeof(ContinuousTrackChangeState__char__uType), "Fuse.Animations.ContinuousTrackChangeState<char>", false, 0, 2, 0);

    type->SetBaseType(::app::Fuse::Animations::TrackAnimatorState__typeof());
    type->__fp_Disable = (void(*)(::app::Fuse::Animations::AnimatorState*))ContinuousTrackChangeState__char__Disable;
    type->__fp_SeekValue = (void(*)(::app::Fuse::Animations::TrackAnimatorState*, ::app::Uno::Float4, float))ContinuousTrackChangeState__char__SeekValue;

    type->SetStrongRefs(
        "Animator", offsetof(ContinuousTrackChangeState__char, Animator_1),
        "mixHandle", offsetof(ContinuousTrackChangeState__char, mixHandle));

    return type;
}

void ContinuousTrackChangeState__char___ObjInit_2(ContinuousTrackChangeState__char* __this, ::app::Fuse::Animations::Change__char* animator, ::app::Fuse::Animations::CreateStateParams* p)
{
    ::app::Fuse::Animations::TrackAnimatorState___ObjInit_1(__this, (::app::Fuse::Animations::TrackAnimator*)animator, p, NULL);
    __this->Animator_1 = animator;
    __this->mixHandle = ::app::Fuse::Animations::IMixer::Register__char(::uPtr< ::uObject*>(::uPtr< ::app::Fuse::Animations::Change__char*>(__this->Animator_1)->Mixer), ::uPtr< ::app::Fuse::Animations::Change__char*>(__this->Animator_1)->Target(), ::uPtr< ::app::Fuse::Animations::Change__char*>(__this->Animator_1)->MixOp());
}

void ContinuousTrackChangeState__char__Disable(ContinuousTrackChangeState__char* __this)
{
    if (__this->mixHandle == NULL)
    {
        return;
    }

    ::app::Fuse::Animations::IMixerHandle__char::Unregister(::uPtr< ::uObject*>(__this->mixHandle));
    __this->mixHandle = NULL;
}

ContinuousTrackChangeState__char* ContinuousTrackChangeState__char__New_1(::uStatic* __this, ::app::Fuse::Animations::Change__char* animator, ::app::Fuse::Animations::CreateStateParams* p)
{
    ContinuousTrackChangeState__char* inst = (ContinuousTrackChangeState__char*)::uAllocObject(sizeof(ContinuousTrackChangeState__char), ContinuousTrackChangeState__char__typeof());
    inst->_ObjInit_2(animator, p);
    return inst;
}

void ContinuousTrackChangeState__char__SeekValue(ContinuousTrackChangeState__char* __this, ::app::Uno::Float4 value, float strength)
{
    if (__this->mixHandle == NULL)
    {
        ::app::Uno::Diagnostics::Debug__Log_5(NULL, ::uGetConstString("Invalid Seek"), 1, ::uGetConstString("C:\\ProgramData\\Uno\\Packages\\Fuse.Animations\\0.11.3\\$.uno"), 454);
        return;
    }

    ::app::Fuse::Animations::IMixerHandle__char::Set(::uPtr< ::uObject*>(__this->mixHandle), ::uPtr< ::app::Fuse::Animations::Converter__char*>(::uPtr< ::app::Fuse::Animations::Change__char*>(__this->Animator_1)->ContinuousConverter)->Out(value), strength);
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Animations\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

ContinuousTrackChangeState__double__uType* ContinuousTrackChangeState__double__typeof()
{
    static ::uStaticStrong<ContinuousTrackChangeState__double__uType*> type;
    if (type != NULL) return type;

    type = (ContinuousTrackChangeState__double__uType*)::uAllocClassType(sizeof(ContinuousTrackChangeState__double__uType), "Fuse.Animations.ContinuousTrackChangeState<double>", false, 0, 2, 0);

    type->SetBaseType(::app::Fuse::Animations::TrackAnimatorState__typeof());
    type->__fp_Disable = (void(*)(::app::Fuse::Animations::AnimatorState*))ContinuousTrackChangeState__double__Disable;
    type->__fp_SeekValue = (void(*)(::app::Fuse::Animations::TrackAnimatorState*, ::app::Uno::Float4, float))ContinuousTrackChangeState__double__SeekValue;

    type->SetStrongRefs(
        "Animator", offsetof(ContinuousTrackChangeState__double, Animator_1),
        "mixHandle", offsetof(ContinuousTrackChangeState__double, mixHandle));

    return type;
}

void ContinuousTrackChangeState__double___ObjInit_2(ContinuousTrackChangeState__double* __this, ::app::Fuse::Animations::Change__double* animator, ::app::Fuse::Animations::CreateStateParams* p)
{
    ::app::Fuse::Animations::TrackAnimatorState___ObjInit_1(__this, (::app::Fuse::Animations::TrackAnimator*)animator, p, NULL);
    __this->Animator_1 = animator;
    __this->mixHandle = ::app::Fuse::Animations::IMixer::Register__double(::uPtr< ::uObject*>(::uPtr< ::app::Fuse::Animations::Change__double*>(__this->Animator_1)->Mixer), ::uPtr< ::app::Fuse::Animations::Change__double*>(__this->Animator_1)->Target(), ::uPtr< ::app::Fuse::Animations::Change__double*>(__this->Animator_1)->MixOp());
}

void ContinuousTrackChangeState__double__Disable(ContinuousTrackChangeState__double* __this)
{
    if (__this->mixHandle == NULL)
    {
        return;
    }

    ::app::Fuse::Animations::IMixerHandle__double::Unregister(::uPtr< ::uObject*>(__this->mixHandle));
    __this->mixHandle = NULL;
}

ContinuousTrackChangeState__double* ContinuousTrackChangeState__double__New_1(::uStatic* __this, ::app::Fuse::Animations::Change__double* animator, ::app::Fuse::Animations::CreateStateParams* p)
{
    ContinuousTrackChangeState__double* inst = (ContinuousTrackChangeState__double*)::uAllocObject(sizeof(ContinuousTrackChangeState__double), ContinuousTrackChangeState__double__typeof());
    inst->_ObjInit_2(animator, p);
    return inst;
}

void ContinuousTrackChangeState__double__SeekValue(ContinuousTrackChangeState__double* __this, ::app::Uno::Float4 value, float strength)
{
    if (__this->mixHandle == NULL)
    {
        ::app::Uno::Diagnostics::Debug__Log_5(NULL, ::uGetConstString("Invalid Seek"), 1, ::uGetConstString("C:\\ProgramData\\Uno\\Packages\\Fuse.Animations\\0.11.3\\$.uno"), 454);
        return;
    }

    ::app::Fuse::Animations::IMixerHandle__double::Set(::uPtr< ::uObject*>(__this->mixHandle), ::uPtr< ::app::Fuse::Animations::Converter__double*>(::uPtr< ::app::Fuse::Animations::Change__double*>(__this->Animator_1)->ContinuousConverter)->Out(value), strength);
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Animations\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

ContinuousTrackChangeState__float__uType* ContinuousTrackChangeState__float__typeof()
{
    static ::uStaticStrong<ContinuousTrackChangeState__float__uType*> type;
    if (type != NULL) return type;

    type = (ContinuousTrackChangeState__float__uType*)::uAllocClassType(sizeof(ContinuousTrackChangeState__float__uType), "Fuse.Animations.ContinuousTrackChangeState<float>", false, 0, 2, 0);

    type->SetBaseType(::app::Fuse::Animations::TrackAnimatorState__typeof());
    type->__fp_Disable = (void(*)(::app::Fuse::Animations::AnimatorState*))ContinuousTrackChangeState__float__Disable;
    type->__fp_SeekValue = (void(*)(::app::Fuse::Animations::TrackAnimatorState*, ::app::Uno::Float4, float))ContinuousTrackChangeState__float__SeekValue;

    type->SetStrongRefs(
        "Animator", offsetof(ContinuousTrackChangeState__float, Animator_1),
        "mixHandle", offsetof(ContinuousTrackChangeState__float, mixHandle));

    return type;
}

void ContinuousTrackChangeState__float___ObjInit_2(ContinuousTrackChangeState__float* __this, ::app::Fuse::Animations::Change__float* animator, ::app::Fuse::Animations::CreateStateParams* p)
{
    ::app::Fuse::Animations::TrackAnimatorState___ObjInit_1(__this, (::app::Fuse::Animations::TrackAnimator*)animator, p, NULL);
    __this->Animator_1 = animator;
    __this->mixHandle = ::app::Fuse::Animations::IMixer::Register__float(::uPtr< ::uObject*>(::uPtr< ::app::Fuse::Animations::Change__float*>(__this->Animator_1)->Mixer), ::uPtr< ::app::Fuse::Animations::Change__float*>(__this->Animator_1)->Target(), ::uPtr< ::app::Fuse::Animations::Change__float*>(__this->Animator_1)->MixOp());
}

void ContinuousTrackChangeState__float__Disable(ContinuousTrackChangeState__float* __this)
{
    if (__this->mixHandle == NULL)
    {
        return;
    }

    ::app::Fuse::Animations::IMixerHandle__float::Unregister(::uPtr< ::uObject*>(__this->mixHandle));
    __this->mixHandle = NULL;
}

ContinuousTrackChangeState__float* ContinuousTrackChangeState__float__New_1(::uStatic* __this, ::app::Fuse::Animations::Change__float* animator, ::app::Fuse::Animations::CreateStateParams* p)
{
    ContinuousTrackChangeState__float* inst = (ContinuousTrackChangeState__float*)::uAllocObject(sizeof(ContinuousTrackChangeState__float), ContinuousTrackChangeState__float__typeof());
    inst->_ObjInit_2(animator, p);
    return inst;
}

void ContinuousTrackChangeState__float__SeekValue(ContinuousTrackChangeState__float* __this, ::app::Uno::Float4 value, float strength)
{
    if (__this->mixHandle == NULL)
    {
        ::app::Uno::Diagnostics::Debug__Log_5(NULL, ::uGetConstString("Invalid Seek"), 1, ::uGetConstString("C:\\ProgramData\\Uno\\Packages\\Fuse.Animations\\0.11.3\\$.uno"), 454);
        return;
    }

    ::app::Fuse::Animations::IMixerHandle__float::Set(::uPtr< ::uObject*>(__this->mixHandle), ::uPtr< ::app::Fuse::Animations::Converter__float*>(::uPtr< ::app::Fuse::Animations::Change__float*>(__this->Animator_1)->ContinuousConverter)->Out(value), strength);
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Animations\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

ContinuousTrackChangeState__float2__uType* ContinuousTrackChangeState__float2__typeof()
{
    static ::uStaticStrong<ContinuousTrackChangeState__float2__uType*> type;
    if (type != NULL) return type;

    type = (ContinuousTrackChangeState__float2__uType*)::uAllocClassType(sizeof(ContinuousTrackChangeState__float2__uType), "Fuse.Animations.ContinuousTrackChangeState<float2>", false, 0, 2, 0);

    type->SetBaseType(::app::Fuse::Animations::TrackAnimatorState__typeof());
    type->__fp_Disable = (void(*)(::app::Fuse::Animations::AnimatorState*))ContinuousTrackChangeState__float2__Disable;
    type->__fp_SeekValue = (void(*)(::app::Fuse::Animations::TrackAnimatorState*, ::app::Uno::Float4, float))ContinuousTrackChangeState__float2__SeekValue;

    type->SetStrongRefs(
        "Animator", offsetof(ContinuousTrackChangeState__float2, Animator_1),
        "mixHandle", offsetof(ContinuousTrackChangeState__float2, mixHandle));

    return type;
}

void ContinuousTrackChangeState__float2___ObjInit_2(ContinuousTrackChangeState__float2* __this, ::app::Fuse::Animations::Change__float2* animator, ::app::Fuse::Animations::CreateStateParams* p)
{
    ::app::Fuse::Animations::TrackAnimatorState___ObjInit_1(__this, (::app::Fuse::Animations::TrackAnimator*)animator, p, NULL);
    __this->Animator_1 = animator;
    __this->mixHandle = ::app::Fuse::Animations::IMixer::Register__float2(::uPtr< ::uObject*>(::uPtr< ::app::Fuse::Animations::Change__float2*>(__this->Animator_1)->Mixer), ::uPtr< ::app::Fuse::Animations::Change__float2*>(__this->Animator_1)->Target(), ::uPtr< ::app::Fuse::Animations::Change__float2*>(__this->Animator_1)->MixOp());
}

void ContinuousTrackChangeState__float2__Disable(ContinuousTrackChangeState__float2* __this)
{
    if (__this->mixHandle == NULL)
    {
        return;
    }

    ::app::Fuse::Animations::IMixerHandle__float2::Unregister(::uPtr< ::uObject*>(__this->mixHandle));
    __this->mixHandle = NULL;
}

ContinuousTrackChangeState__float2* ContinuousTrackChangeState__float2__New_1(::uStatic* __this, ::app::Fuse::Animations::Change__float2* animator, ::app::Fuse::Animations::CreateStateParams* p)
{
    ContinuousTrackChangeState__float2* inst = (ContinuousTrackChangeState__float2*)::uAllocObject(sizeof(ContinuousTrackChangeState__float2), ContinuousTrackChangeState__float2__typeof());
    inst->_ObjInit_2(animator, p);
    return inst;
}

void ContinuousTrackChangeState__float2__SeekValue(ContinuousTrackChangeState__float2* __this, ::app::Uno::Float4 value, float strength)
{
    if (__this->mixHandle == NULL)
    {
        ::app::Uno::Diagnostics::Debug__Log_5(NULL, ::uGetConstString("Invalid Seek"), 1, ::uGetConstString("C:\\ProgramData\\Uno\\Packages\\Fuse.Animations\\0.11.3\\$.uno"), 454);
        return;
    }

    ::app::Fuse::Animations::IMixerHandle__float2::Set(::uPtr< ::uObject*>(__this->mixHandle), ::uPtr< ::app::Fuse::Animations::Converter__float2*>(::uPtr< ::app::Fuse::Animations::Change__float2*>(__this->Animator_1)->ContinuousConverter)->Out(value), strength);
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Animations\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

ContinuousTrackChangeState__float3__uType* ContinuousTrackChangeState__float3__typeof()
{
    static ::uStaticStrong<ContinuousTrackChangeState__float3__uType*> type;
    if (type != NULL) return type;

    type = (ContinuousTrackChangeState__float3__uType*)::uAllocClassType(sizeof(ContinuousTrackChangeState__float3__uType), "Fuse.Animations.ContinuousTrackChangeState<float3>", false, 0, 2, 0);

    type->SetBaseType(::app::Fuse::Animations::TrackAnimatorState__typeof());
    type->__fp_Disable = (void(*)(::app::Fuse::Animations::AnimatorState*))ContinuousTrackChangeState__float3__Disable;
    type->__fp_SeekValue = (void(*)(::app::Fuse::Animations::TrackAnimatorState*, ::app::Uno::Float4, float))ContinuousTrackChangeState__float3__SeekValue;

    type->SetStrongRefs(
        "Animator", offsetof(ContinuousTrackChangeState__float3, Animator_1),
        "mixHandle", offsetof(ContinuousTrackChangeState__float3, mixHandle));

    return type;
}

void ContinuousTrackChangeState__float3___ObjInit_2(ContinuousTrackChangeState__float3* __this, ::app::Fuse::Animations::Change__float3* animator, ::app::Fuse::Animations::CreateStateParams* p)
{
    ::app::Fuse::Animations::TrackAnimatorState___ObjInit_1(__this, (::app::Fuse::Animations::TrackAnimator*)animator, p, NULL);
    __this->Animator_1 = animator;
    __this->mixHandle = ::app::Fuse::Animations::IMixer::Register__float3(::uPtr< ::uObject*>(::uPtr< ::app::Fuse::Animations::Change__float3*>(__this->Animator_1)->Mixer), ::uPtr< ::app::Fuse::Animations::Change__float3*>(__this->Animator_1)->Target(), ::uPtr< ::app::Fuse::Animations::Change__float3*>(__this->Animator_1)->MixOp());
}

void ContinuousTrackChangeState__float3__Disable(ContinuousTrackChangeState__float3* __this)
{
    if (__this->mixHandle == NULL)
    {
        return;
    }

    ::app::Fuse::Animations::IMixerHandle__float3::Unregister(::uPtr< ::uObject*>(__this->mixHandle));
    __this->mixHandle = NULL;
}

ContinuousTrackChangeState__float3* ContinuousTrackChangeState__float3__New_1(::uStatic* __this, ::app::Fuse::Animations::Change__float3* animator, ::app::Fuse::Animations::CreateStateParams* p)
{
    ContinuousTrackChangeState__float3* inst = (ContinuousTrackChangeState__float3*)::uAllocObject(sizeof(ContinuousTrackChangeState__float3), ContinuousTrackChangeState__float3__typeof());
    inst->_ObjInit_2(animator, p);
    return inst;
}

void ContinuousTrackChangeState__float3__SeekValue(ContinuousTrackChangeState__float3* __this, ::app::Uno::Float4 value, float strength)
{
    if (__this->mixHandle == NULL)
    {
        ::app::Uno::Diagnostics::Debug__Log_5(NULL, ::uGetConstString("Invalid Seek"), 1, ::uGetConstString("C:\\ProgramData\\Uno\\Packages\\Fuse.Animations\\0.11.3\\$.uno"), 454);
        return;
    }

    ::app::Fuse::Animations::IMixerHandle__float3::Set(::uPtr< ::uObject*>(__this->mixHandle), ::uPtr< ::app::Fuse::Animations::Converter__float3*>(::uPtr< ::app::Fuse::Animations::Change__float3*>(__this->Animator_1)->ContinuousConverter)->Out(value), strength);
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Animations\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

ContinuousTrackChangeState__float4__uType* ContinuousTrackChangeState__float4__typeof()
{
    static ::uStaticStrong<ContinuousTrackChangeState__float4__uType*> type;
    if (type != NULL) return type;

    type = (ContinuousTrackChangeState__float4__uType*)::uAllocClassType(sizeof(ContinuousTrackChangeState__float4__uType), "Fuse.Animations.ContinuousTrackChangeState<float4>", false, 0, 2, 0);

    type->SetBaseType(::app::Fuse::Animations::TrackAnimatorState__typeof());
    type->__fp_Disable = (void(*)(::app::Fuse::Animations::AnimatorState*))ContinuousTrackChangeState__float4__Disable;
    type->__fp_SeekValue = (void(*)(::app::Fuse::Animations::TrackAnimatorState*, ::app::Uno::Float4, float))ContinuousTrackChangeState__float4__SeekValue;

    type->SetStrongRefs(
        "Animator", offsetof(ContinuousTrackChangeState__float4, Animator_1),
        "mixHandle", offsetof(ContinuousTrackChangeState__float4, mixHandle));

    return type;
}

void ContinuousTrackChangeState__float4___ObjInit_2(ContinuousTrackChangeState__float4* __this, ::app::Fuse::Animations::Change__float4* animator, ::app::Fuse::Animations::CreateStateParams* p)
{
    ::app::Fuse::Animations::TrackAnimatorState___ObjInit_1(__this, (::app::Fuse::Animations::TrackAnimator*)animator, p, NULL);
    __this->Animator_1 = animator;
    __this->mixHandle = ::app::Fuse::Animations::IMixer::Register__float4(::uPtr< ::uObject*>(::uPtr< ::app::Fuse::Animations::Change__float4*>(__this->Animator_1)->Mixer), ::uPtr< ::app::Fuse::Animations::Change__float4*>(__this->Animator_1)->Target(), ::uPtr< ::app::Fuse::Animations::Change__float4*>(__this->Animator_1)->MixOp());
}

void ContinuousTrackChangeState__float4__Disable(ContinuousTrackChangeState__float4* __this)
{
    if (__this->mixHandle == NULL)
    {
        return;
    }

    ::app::Fuse::Animations::IMixerHandle__float4::Unregister(::uPtr< ::uObject*>(__this->mixHandle));
    __this->mixHandle = NULL;
}

ContinuousTrackChangeState__float4* ContinuousTrackChangeState__float4__New_1(::uStatic* __this, ::app::Fuse::Animations::Change__float4* animator, ::app::Fuse::Animations::CreateStateParams* p)
{
    ContinuousTrackChangeState__float4* inst = (ContinuousTrackChangeState__float4*)::uAllocObject(sizeof(ContinuousTrackChangeState__float4), ContinuousTrackChangeState__float4__typeof());
    inst->_ObjInit_2(animator, p);
    return inst;
}

void ContinuousTrackChangeState__float4__SeekValue(ContinuousTrackChangeState__float4* __this, ::app::Uno::Float4 value, float strength)
{
    if (__this->mixHandle == NULL)
    {
        ::app::Uno::Diagnostics::Debug__Log_5(NULL, ::uGetConstString("Invalid Seek"), 1, ::uGetConstString("C:\\ProgramData\\Uno\\Packages\\Fuse.Animations\\0.11.3\\$.uno"), 454);
        return;
    }

    ::app::Fuse::Animations::IMixerHandle__float4::Set(::uPtr< ::uObject*>(__this->mixHandle), ::uPtr< ::app::Fuse::Animations::Converter__float4*>(::uPtr< ::app::Fuse::Animations::Change__float4*>(__this->Animator_1)->ContinuousConverter)->Out(value), strength);
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Animations\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

ContinuousTrackChangeState__Fuse_Animations_AnimationVariant__uType* ContinuousTrackChangeState__Fuse_Animations_AnimationVariant__typeof()
{
    static ::uStaticStrong<ContinuousTrackChangeState__Fuse_Animations_AnimationVariant__uType*> type;
    if (type != NULL) return type;

    type = (ContinuousTrackChangeState__Fuse_Animations_AnimationVariant__uType*)::uAllocClassType(sizeof(ContinuousTrackChangeState__Fuse_Animations_AnimationVariant__uType), "Fuse.Animations.ContinuousTrackChangeState<Fuse.Animations.AnimationVariant>", false, 0, 2, 0);

    type->SetBaseType(::app::Fuse::Animations::TrackAnimatorState__typeof());
    type->__fp_Disable = (void(*)(::app::Fuse::Animations::AnimatorState*))ContinuousTrackChangeState__Fuse_Animations_AnimationVariant__Disable;
    type->__fp_SeekValue = (void(*)(::app::Fuse::Animations::TrackAnimatorState*, ::app::Uno::Float4, float))ContinuousTrackChangeState__Fuse_Animations_AnimationVariant__SeekValue;

    type->SetStrongRefs(
        "Animator", offsetof(ContinuousTrackChangeState__Fuse_Animations_AnimationVariant, Animator_1),
        "mixHandle", offsetof(ContinuousTrackChangeState__Fuse_Animations_AnimationVariant, mixHandle));

    return type;
}

void ContinuousTrackChangeState__Fuse_Animations_AnimationVariant___ObjInit_2(ContinuousTrackChangeState__Fuse_Animations_AnimationVariant* __this, ::app::Fuse::Animations::Change__Fuse_Animations_AnimationVariant* animator, ::app::Fuse::Animations::CreateStateParams* p)
{
    ::app::Fuse::Animations::TrackAnimatorState___ObjInit_1(__this, (::app::Fuse::Animations::TrackAnimator*)animator, p, NULL);
    __this->Animator_1 = animator;
    __this->mixHandle = ::app::Fuse::Animations::IMixer::Register__Fuse_Animations_AnimationVariant(::uPtr< ::uObject*>(::uPtr< ::app::Fuse::Animations::Change__Fuse_Animations_AnimationVariant*>(__this->Animator_1)->Mixer), ::uPtr< ::app::Fuse::Animations::Change__Fuse_Animations_AnimationVariant*>(__this->Animator_1)->Target(), ::uPtr< ::app::Fuse::Animations::Change__Fuse_Animations_AnimationVariant*>(__this->Animator_1)->MixOp());
}

void ContinuousTrackChangeState__Fuse_Animations_AnimationVariant__Disable(ContinuousTrackChangeState__Fuse_Animations_AnimationVariant* __this)
{
    if (__this->mixHandle == NULL)
    {
        return;
    }

    ::app::Fuse::Animations::IMixerHandle__Fuse_Animations_AnimationVariant::Unregister(::uPtr< ::uObject*>(__this->mixHandle));
    __this->mixHandle = NULL;
}

ContinuousTrackChangeState__Fuse_Animations_AnimationVariant* ContinuousTrackChangeState__Fuse_Animations_AnimationVariant__New_1(::uStatic* __this, ::app::Fuse::Animations::Change__Fuse_Animations_AnimationVariant* animator, ::app::Fuse::Animations::CreateStateParams* p)
{
    ContinuousTrackChangeState__Fuse_Animations_AnimationVariant* inst = (ContinuousTrackChangeState__Fuse_Animations_AnimationVariant*)::uAllocObject(sizeof(ContinuousTrackChangeState__Fuse_Animations_AnimationVariant), ContinuousTrackChangeState__Fuse_Animations_AnimationVariant__typeof());
    inst->_ObjInit_2(animator, p);
    return inst;
}

void ContinuousTrackChangeState__Fuse_Animations_AnimationVariant__SeekValue(ContinuousTrackChangeState__Fuse_Animations_AnimationVariant* __this, ::app::Uno::Float4 value, float strength)
{
    if (__this->mixHandle == NULL)
    {
        ::app::Uno::Diagnostics::Debug__Log_5(NULL, ::uGetConstString("Invalid Seek"), 1, ::uGetConstString("C:\\ProgramData\\Uno\\Packages\\Fuse.Animations\\0.11.3\\$.uno"), 454);
        return;
    }

    ::app::Fuse::Animations::IMixerHandle__Fuse_Animations_AnimationVariant::Set(::uPtr< ::uObject*>(__this->mixHandle), ::uPtr< ::app::Fuse::Animations::Converter__Fuse_Animations_AnimationVariant*>(::uPtr< ::app::Fuse::Animations::Change__Fuse_Animations_AnimationVariant*>(__this->Animator_1)->ContinuousConverter)->Out(value), strength);
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Animations\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

ContinuousTrackChangeState__Fuse_Animations_Easing__uType* ContinuousTrackChangeState__Fuse_Animations_Easing__typeof()
{
    static ::uStaticStrong<ContinuousTrackChangeState__Fuse_Animations_Easing__uType*> type;
    if (type != NULL) return type;

    type = (ContinuousTrackChangeState__Fuse_Animations_Easing__uType*)::uAllocClassType(sizeof(ContinuousTrackChangeState__Fuse_Animations_Easing__uType), "Fuse.Animations.ContinuousTrackChangeState<Fuse.Animations.Easing>", false, 0, 2, 0);

    type->SetBaseType(::app::Fuse::Animations::TrackAnimatorState__typeof());
    type->__fp_Disable = (void(*)(::app::Fuse::Animations::AnimatorState*))ContinuousTrackChangeState__Fuse_Animations_Easing__Disable;
    type->__fp_SeekValue = (void(*)(::app::Fuse::Animations::TrackAnimatorState*, ::app::Uno::Float4, float))ContinuousTrackChangeState__Fuse_Animations_Easing__SeekValue;

    type->SetStrongRefs(
        "Animator", offsetof(ContinuousTrackChangeState__Fuse_Animations_Easing, Animator_1),
        "mixHandle", offsetof(ContinuousTrackChangeState__Fuse_Animations_Easing, mixHandle));

    return type;
}

void ContinuousTrackChangeState__Fuse_Animations_Easing___ObjInit_2(ContinuousTrackChangeState__Fuse_Animations_Easing* __this, ::app::Fuse::Animations::Change__Fuse_Animations_Easing* animator, ::app::Fuse::Animations::CreateStateParams* p)
{
    ::app::Fuse::Animations::TrackAnimatorState___ObjInit_1(__this, (::app::Fuse::Animations::TrackAnimator*)animator, p, NULL);
    __this->Animator_1 = animator;
    __this->mixHandle = ::app::Fuse::Animations::IMixer::Register__Fuse_Animations_Easing(::uPtr< ::uObject*>(::uPtr< ::app::Fuse::Animations::Change__Fuse_Animations_Easing*>(__this->Animator_1)->Mixer), ::uPtr< ::app::Fuse::Animations::Change__Fuse_Animations_Easing*>(__this->Animator_1)->Target(), ::uPtr< ::app::Fuse::Animations::Change__Fuse_Animations_Easing*>(__this->Animator_1)->MixOp());
}

void ContinuousTrackChangeState__Fuse_Animations_Easing__Disable(ContinuousTrackChangeState__Fuse_Animations_Easing* __this)
{
    if (__this->mixHandle == NULL)
    {
        return;
    }

    ::app::Fuse::Animations::IMixerHandle__Fuse_Animations_Easing::Unregister(::uPtr< ::uObject*>(__this->mixHandle));
    __this->mixHandle = NULL;
}

ContinuousTrackChangeState__Fuse_Animations_Easing* ContinuousTrackChangeState__Fuse_Animations_Easing__New_1(::uStatic* __this, ::app::Fuse::Animations::Change__Fuse_Animations_Easing* animator, ::app::Fuse::Animations::CreateStateParams* p)
{
    ContinuousTrackChangeState__Fuse_Animations_Easing* inst = (ContinuousTrackChangeState__Fuse_Animations_Easing*)::uAllocObject(sizeof(ContinuousTrackChangeState__Fuse_Animations_Easing), ContinuousTrackChangeState__Fuse_Animations_Easing__typeof());
    inst->_ObjInit_2(animator, p);
    return inst;
}

void ContinuousTrackChangeState__Fuse_Animations_Easing__SeekValue(ContinuousTrackChangeState__Fuse_Animations_Easing* __this, ::app::Uno::Float4 value, float strength)
{
    if (__this->mixHandle == NULL)
    {
        ::app::Uno::Diagnostics::Debug__Log_5(NULL, ::uGetConstString("Invalid Seek"), 1, ::uGetConstString("C:\\ProgramData\\Uno\\Packages\\Fuse.Animations\\0.11.3\\$.uno"), 454);
        return;
    }

    ::app::Fuse::Animations::IMixerHandle__Fuse_Animations_Easing::Set(::uPtr< ::uObject*>(__this->mixHandle), ::uPtr< ::app::Fuse::Animations::Converter__Fuse_Animations_Easing*>(::uPtr< ::app::Fuse::Animations::Change__Fuse_Animations_Easing*>(__this->Animator_1)->ContinuousConverter)->Out(value), strength);
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Animations\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

ContinuousTrackChangeState__Fuse_Animations_KeyframeInterpolation__uType* ContinuousTrackChangeState__Fuse_Animations_KeyframeInterpolation__typeof()
{
    static ::uStaticStrong<ContinuousTrackChangeState__Fuse_Animations_KeyframeInterpolation__uType*> type;
    if (type != NULL) return type;

    type = (ContinuousTrackChangeState__Fuse_Animations_KeyframeInterpolation__uType*)::uAllocClassType(sizeof(ContinuousTrackChangeState__Fuse_Animations_KeyframeInterpolation__uType), "Fuse.Animations.ContinuousTrackChangeState<Fuse.Animations.KeyframeInterpolation>", false, 0, 2, 0);

    type->SetBaseType(::app::Fuse::Animations::TrackAnimatorState__typeof());
    type->__fp_Disable = (void(*)(::app::Fuse::Animations::AnimatorState*))ContinuousTrackChangeState__Fuse_Animations_KeyframeInterpolation__Disable;
    type->__fp_SeekValue = (void(*)(::app::Fuse::Animations::TrackAnimatorState*, ::app::Uno::Float4, float))ContinuousTrackChangeState__Fuse_Animations_KeyframeInterpolation__SeekValue;

    type->SetStrongRefs(
        "Animator", offsetof(ContinuousTrackChangeState__Fuse_Animations_KeyframeInterpolation, Animator_1),
        "mixHandle", offsetof(ContinuousTrackChangeState__Fuse_Animations_KeyframeInterpolation, mixHandle));

    return type;
}

void ContinuousTrackChangeState__Fuse_Animations_KeyframeInterpolation___ObjInit_2(ContinuousTrackChangeState__Fuse_Animations_KeyframeInterpolation* __this, ::app::Fuse::Animations::Change__Fuse_Animations_KeyframeInterpolation* animator, ::app::Fuse::Animations::CreateStateParams* p)
{
    ::app::Fuse::Animations::TrackAnimatorState___ObjInit_1(__this, (::app::Fuse::Animations::TrackAnimator*)animator, p, NULL);
    __this->Animator_1 = animator;
    __this->mixHandle = ::app::Fuse::Animations::IMixer::Register__Fuse_Animations_KeyframeInterpolation(::uPtr< ::uObject*>(::uPtr< ::app::Fuse::Animations::Change__Fuse_Animations_KeyframeInterpolation*>(__this->Animator_1)->Mixer), ::uPtr< ::app::Fuse::Animations::Change__Fuse_Animations_KeyframeInterpolation*>(__this->Animator_1)->Target(), ::uPtr< ::app::Fuse::Animations::Change__Fuse_Animations_KeyframeInterpolation*>(__this->Animator_1)->MixOp());
}

void ContinuousTrackChangeState__Fuse_Animations_KeyframeInterpolation__Disable(ContinuousTrackChangeState__Fuse_Animations_KeyframeInterpolation* __this)
{
    if (__this->mixHandle == NULL)
    {
        return;
    }

    ::app::Fuse::Animations::IMixerHandle__Fuse_Animations_KeyframeInterpolation::Unregister(::uPtr< ::uObject*>(__this->mixHandle));
    __this->mixHandle = NULL;
}

ContinuousTrackChangeState__Fuse_Animations_KeyframeInterpolation* ContinuousTrackChangeState__Fuse_Animations_KeyframeInterpolation__New_1(::uStatic* __this, ::app::Fuse::Animations::Change__Fuse_Animations_KeyframeInterpolation* animator, ::app::Fuse::Animations::CreateStateParams* p)
{
    ContinuousTrackChangeState__Fuse_Animations_KeyframeInterpolation* inst = (ContinuousTrackChangeState__Fuse_Animations_KeyframeInterpolation*)::uAllocObject(sizeof(ContinuousTrackChangeState__Fuse_Animations_KeyframeInterpolation), ContinuousTrackChangeState__Fuse_Animations_KeyframeInterpolation__typeof());
    inst->_ObjInit_2(animator, p);
    return inst;
}

void ContinuousTrackChangeState__Fuse_Animations_KeyframeInterpolation__SeekValue(ContinuousTrackChangeState__Fuse_Animations_KeyframeInterpolation* __this, ::app::Uno::Float4 value, float strength)
{
    if (__this->mixHandle == NULL)
    {
        ::app::Uno::Diagnostics::Debug__Log_5(NULL, ::uGetConstString("Invalid Seek"), 1, ::uGetConstString("C:\\ProgramData\\Uno\\Packages\\Fuse.Animations\\0.11.3\\$.uno"), 454);
        return;
    }

    ::app::Fuse::Animations::IMixerHandle__Fuse_Animations_KeyframeInterpolation::Set(::uPtr< ::uObject*>(__this->mixHandle), ::uPtr< ::app::Fuse::Animations::Converter__Fuse_Animations_KeyframeInterpolation*>(::uPtr< ::app::Fuse::Animations::Change__Fuse_Animations_KeyframeInterpolation*>(__this->Animator_1)->ContinuousConverter)->Out(value), strength);
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Animations\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

ContinuousTrackChangeState__Fuse_Animations_MixOp__uType* ContinuousTrackChangeState__Fuse_Animations_MixOp__typeof()
{
    static ::uStaticStrong<ContinuousTrackChangeState__Fuse_Animations_MixOp__uType*> type;
    if (type != NULL) return type;

    type = (ContinuousTrackChangeState__Fuse_Animations_MixOp__uType*)::uAllocClassType(sizeof(ContinuousTrackChangeState__Fuse_Animations_MixOp__uType), "Fuse.Animations.ContinuousTrackChangeState<Fuse.Animations.MixOp>", false, 0, 2, 0);

    type->SetBaseType(::app::Fuse::Animations::TrackAnimatorState__typeof());
    type->__fp_Disable = (void(*)(::app::Fuse::Animations::AnimatorState*))ContinuousTrackChangeState__Fuse_Animations_MixOp__Disable;
    type->__fp_SeekValue = (void(*)(::app::Fuse::Animations::TrackAnimatorState*, ::app::Uno::Float4, float))ContinuousTrackChangeState__Fuse_Animations_MixOp__SeekValue;

    type->SetStrongRefs(
        "Animator", offsetof(ContinuousTrackChangeState__Fuse_Animations_MixOp, Animator_1),
        "mixHandle", offsetof(ContinuousTrackChangeState__Fuse_Animations_MixOp, mixHandle));

    return type;
}

void ContinuousTrackChangeState__Fuse_Animations_MixOp___ObjInit_2(ContinuousTrackChangeState__Fuse_Animations_MixOp* __this, ::app::Fuse::Animations::Change__Fuse_Animations_MixOp* animator, ::app::Fuse::Animations::CreateStateParams* p)
{
    ::app::Fuse::Animations::TrackAnimatorState___ObjInit_1(__this, (::app::Fuse::Animations::TrackAnimator*)animator, p, NULL);
    __this->Animator_1 = animator;
    __this->mixHandle = ::app::Fuse::Animations::IMixer::Register__Fuse_Animations_MixOp(::uPtr< ::uObject*>(::uPtr< ::app::Fuse::Animations::Change__Fuse_Animations_MixOp*>(__this->Animator_1)->Mixer), ::uPtr< ::app::Fuse::Animations::Change__Fuse_Animations_MixOp*>(__this->Animator_1)->Target(), ::uPtr< ::app::Fuse::Animations::Change__Fuse_Animations_MixOp*>(__this->Animator_1)->MixOp());
}

void ContinuousTrackChangeState__Fuse_Animations_MixOp__Disable(ContinuousTrackChangeState__Fuse_Animations_MixOp* __this)
{
    if (__this->mixHandle == NULL)
    {
        return;
    }

    ::app::Fuse::Animations::IMixerHandle__Fuse_Animations_MixOp::Unregister(::uPtr< ::uObject*>(__this->mixHandle));
    __this->mixHandle = NULL;
}

ContinuousTrackChangeState__Fuse_Animations_MixOp* ContinuousTrackChangeState__Fuse_Animations_MixOp__New_1(::uStatic* __this, ::app::Fuse::Animations::Change__Fuse_Animations_MixOp* animator, ::app::Fuse::Animations::CreateStateParams* p)
{
    ContinuousTrackChangeState__Fuse_Animations_MixOp* inst = (ContinuousTrackChangeState__Fuse_Animations_MixOp*)::uAllocObject(sizeof(ContinuousTrackChangeState__Fuse_Animations_MixOp), ContinuousTrackChangeState__Fuse_Animations_MixOp__typeof());
    inst->_ObjInit_2(animator, p);
    return inst;
}

void ContinuousTrackChangeState__Fuse_Animations_MixOp__SeekValue(ContinuousTrackChangeState__Fuse_Animations_MixOp* __this, ::app::Uno::Float4 value, float strength)
{
    if (__this->mixHandle == NULL)
    {
        ::app::Uno::Diagnostics::Debug__Log_5(NULL, ::uGetConstString("Invalid Seek"), 1, ::uGetConstString("C:\\ProgramData\\Uno\\Packages\\Fuse.Animations\\0.11.3\\$.uno"), 454);
        return;
    }

    ::app::Fuse::Animations::IMixerHandle__Fuse_Animations_MixOp::Set(::uPtr< ::uObject*>(__this->mixHandle), ::uPtr< ::app::Fuse::Animations::Converter__Fuse_Animations_MixOp*>(::uPtr< ::app::Fuse::Animations::Change__Fuse_Animations_MixOp*>(__this->Animator_1)->ContinuousConverter)->Out(value), strength);
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Animations\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

ContinuousTrackChangeState__Fuse_Drawing_BlendMode__uType* ContinuousTrackChangeState__Fuse_Drawing_BlendMode__typeof()
{
    static ::uStaticStrong<ContinuousTrackChangeState__Fuse_Drawing_BlendMode__uType*> type;
    if (type != NULL) return type;

    type = (ContinuousTrackChangeState__Fuse_Drawing_BlendMode__uType*)::uAllocClassType(sizeof(ContinuousTrackChangeState__Fuse_Drawing_BlendMode__uType), "Fuse.Animations.ContinuousTrackChangeState<Fuse.Drawing.BlendMode>", false, 0, 2, 0);

    type->SetBaseType(::app::Fuse::Animations::TrackAnimatorState__typeof());
    type->__fp_Disable = (void(*)(::app::Fuse::Animations::AnimatorState*))ContinuousTrackChangeState__Fuse_Drawing_BlendMode__Disable;
    type->__fp_SeekValue = (void(*)(::app::Fuse::Animations::TrackAnimatorState*, ::app::Uno::Float4, float))ContinuousTrackChangeState__Fuse_Drawing_BlendMode__SeekValue;

    type->SetStrongRefs(
        "Animator", offsetof(ContinuousTrackChangeState__Fuse_Drawing_BlendMode, Animator_1),
        "mixHandle", offsetof(ContinuousTrackChangeState__Fuse_Drawing_BlendMode, mixHandle));

    return type;
}

void ContinuousTrackChangeState__Fuse_Drawing_BlendMode___ObjInit_2(ContinuousTrackChangeState__Fuse_Drawing_BlendMode* __this, ::app::Fuse::Animations::Change__Fuse_Drawing_BlendMode* animator, ::app::Fuse::Animations::CreateStateParams* p)
{
    ::app::Fuse::Animations::TrackAnimatorState___ObjInit_1(__this, (::app::Fuse::Animations::TrackAnimator*)animator, p, NULL);
    __this->Animator_1 = animator;
    __this->mixHandle = ::app::Fuse::Animations::IMixer::Register__Fuse_Drawing_BlendMode(::uPtr< ::uObject*>(::uPtr< ::app::Fuse::Animations::Change__Fuse_Drawing_BlendMode*>(__this->Animator_1)->Mixer), ::uPtr< ::app::Fuse::Animations::Change__Fuse_Drawing_BlendMode*>(__this->Animator_1)->Target(), ::uPtr< ::app::Fuse::Animations::Change__Fuse_Drawing_BlendMode*>(__this->Animator_1)->MixOp());
}

void ContinuousTrackChangeState__Fuse_Drawing_BlendMode__Disable(ContinuousTrackChangeState__Fuse_Drawing_BlendMode* __this)
{
    if (__this->mixHandle == NULL)
    {
        return;
    }

    ::app::Fuse::Animations::IMixerHandle__Fuse_Drawing_BlendMode::Unregister(::uPtr< ::uObject*>(__this->mixHandle));
    __this->mixHandle = NULL;
}

ContinuousTrackChangeState__Fuse_Drawing_BlendMode* ContinuousTrackChangeState__Fuse_Drawing_BlendMode__New_1(::uStatic* __this, ::app::Fuse::Animations::Change__Fuse_Drawing_BlendMode* animator, ::app::Fuse::Animations::CreateStateParams* p)
{
    ContinuousTrackChangeState__Fuse_Drawing_BlendMode* inst = (ContinuousTrackChangeState__Fuse_Drawing_BlendMode*)::uAllocObject(sizeof(ContinuousTrackChangeState__Fuse_Drawing_BlendMode), ContinuousTrackChangeState__Fuse_Drawing_BlendMode__typeof());
    inst->_ObjInit_2(animator, p);
    return inst;
}

void ContinuousTrackChangeState__Fuse_Drawing_BlendMode__SeekValue(ContinuousTrackChangeState__Fuse_Drawing_BlendMode* __this, ::app::Uno::Float4 value, float strength)
{
    if (__this->mixHandle == NULL)
    {
        ::app::Uno::Diagnostics::Debug__Log_5(NULL, ::uGetConstString("Invalid Seek"), 1, ::uGetConstString("C:\\ProgramData\\Uno\\Packages\\Fuse.Animations\\0.11.3\\$.uno"), 454);
        return;
    }

    ::app::Fuse::Animations::IMixerHandle__Fuse_Drawing_BlendMode::Set(::uPtr< ::uObject*>(__this->mixHandle), ::uPtr< ::app::Fuse::Animations::Converter__Fuse_Drawing_BlendMode*>(::uPtr< ::app::Fuse::Animations::Change__Fuse_Drawing_BlendMode*>(__this->Animator_1)->ContinuousConverter)->Out(value), strength);
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Animations\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

ContinuousTrackChangeState__Fuse_Drawing_Brush__uType* ContinuousTrackChangeState__Fuse_Drawing_Brush__typeof()
{
    static ::uStaticStrong<ContinuousTrackChangeState__Fuse_Drawing_Brush__uType*> type;
    if (type != NULL) return type;

    type = (ContinuousTrackChangeState__Fuse_Drawing_Brush__uType*)::uAllocClassType(sizeof(ContinuousTrackChangeState__Fuse_Drawing_Brush__uType), "Fuse.Animations.ContinuousTrackChangeState<Fuse.Drawing.Brush>", false, 0, 2, 0);

    type->SetBaseType(::app::Fuse::Animations::TrackAnimatorState__typeof());
    type->__fp_Disable = (void(*)(::app::Fuse::Animations::AnimatorState*))ContinuousTrackChangeState__Fuse_Drawing_Brush__Disable;
    type->__fp_SeekValue = (void(*)(::app::Fuse::Animations::TrackAnimatorState*, ::app::Uno::Float4, float))ContinuousTrackChangeState__Fuse_Drawing_Brush__SeekValue;

    type->SetStrongRefs(
        "Animator", offsetof(ContinuousTrackChangeState__Fuse_Drawing_Brush, Animator_1),
        "mixHandle", offsetof(ContinuousTrackChangeState__Fuse_Drawing_Brush, mixHandle));

    return type;
}

void ContinuousTrackChangeState__Fuse_Drawing_Brush___ObjInit_2(ContinuousTrackChangeState__Fuse_Drawing_Brush* __this, ::app::Fuse::Animations::Change__Fuse_Drawing_Brush* animator, ::app::Fuse::Animations::CreateStateParams* p)
{
    ::app::Fuse::Animations::TrackAnimatorState___ObjInit_1(__this, (::app::Fuse::Animations::TrackAnimator*)animator, p, NULL);
    __this->Animator_1 = animator;
    __this->mixHandle = ::app::Fuse::Animations::IMixer::Register__Fuse_Drawing_Brush(::uPtr< ::uObject*>(::uPtr< ::app::Fuse::Animations::Change__Fuse_Drawing_Brush*>(__this->Animator_1)->Mixer), ::uPtr< ::app::Fuse::Animations::Change__Fuse_Drawing_Brush*>(__this->Animator_1)->Target(), ::uPtr< ::app::Fuse::Animations::Change__Fuse_Drawing_Brush*>(__this->Animator_1)->MixOp());
}

void ContinuousTrackChangeState__Fuse_Drawing_Brush__Disable(ContinuousTrackChangeState__Fuse_Drawing_Brush* __this)
{
    if (__this->mixHandle == NULL)
    {
        return;
    }

    ::app::Fuse::Animations::IMixerHandle__Fuse_Drawing_Brush::Unregister(::uPtr< ::uObject*>(__this->mixHandle));
    __this->mixHandle = NULL;
}

ContinuousTrackChangeState__Fuse_Drawing_Brush* ContinuousTrackChangeState__Fuse_Drawing_Brush__New_1(::uStatic* __this, ::app::Fuse::Animations::Change__Fuse_Drawing_Brush* animator, ::app::Fuse::Animations::CreateStateParams* p)
{
    ContinuousTrackChangeState__Fuse_Drawing_Brush* inst = (ContinuousTrackChangeState__Fuse_Drawing_Brush*)::uAllocObject(sizeof(ContinuousTrackChangeState__Fuse_Drawing_Brush), ContinuousTrackChangeState__Fuse_Drawing_Brush__typeof());
    inst->_ObjInit_2(animator, p);
    return inst;
}

void ContinuousTrackChangeState__Fuse_Drawing_Brush__SeekValue(ContinuousTrackChangeState__Fuse_Drawing_Brush* __this, ::app::Uno::Float4 value, float strength)
{
    if (__this->mixHandle == NULL)
    {
        ::app::Uno::Diagnostics::Debug__Log_5(NULL, ::uGetConstString("Invalid Seek"), 1, ::uGetConstString("C:\\ProgramData\\Uno\\Packages\\Fuse.Animations\\0.11.3\\$.uno"), 454);
        return;
    }

    ::app::Fuse::Animations::IMixerHandle__Fuse_Drawing_Brush::Set(::uPtr< ::uObject*>(__this->mixHandle), ::uPtr< ::app::Fuse::Animations::Converter__Fuse_Drawing_Brush*>(::uPtr< ::app::Fuse::Animations::Change__Fuse_Drawing_Brush*>(__this->Animator_1)->ContinuousConverter)->Out(value), strength);
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Animations\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

ContinuousTrackChangeState__Fuse_Drawing_DynamicBrush__uType* ContinuousTrackChangeState__Fuse_Drawing_DynamicBrush__typeof()
{
    static ::uStaticStrong<ContinuousTrackChangeState__Fuse_Drawing_DynamicBrush__uType*> type;
    if (type != NULL) return type;

    type = (ContinuousTrackChangeState__Fuse_Drawing_DynamicBrush__uType*)::uAllocClassType(sizeof(ContinuousTrackChangeState__Fuse_Drawing_DynamicBrush__uType), "Fuse.Animations.ContinuousTrackChangeState<Fuse.Drawing.DynamicBrush>", false, 0, 2, 0);

    type->SetBaseType(::app::Fuse::Animations::TrackAnimatorState__typeof());
    type->__fp_Disable = (void(*)(::app::Fuse::Animations::AnimatorState*))ContinuousTrackChangeState__Fuse_Drawing_DynamicBrush__Disable;
    type->__fp_SeekValue = (void(*)(::app::Fuse::Animations::TrackAnimatorState*, ::app::Uno::Float4, float))ContinuousTrackChangeState__Fuse_Drawing_DynamicBrush__SeekValue;

    type->SetStrongRefs(
        "Animator", offsetof(ContinuousTrackChangeState__Fuse_Drawing_DynamicBrush, Animator_1),
        "mixHandle", offsetof(ContinuousTrackChangeState__Fuse_Drawing_DynamicBrush, mixHandle));

    return type;
}

void ContinuousTrackChangeState__Fuse_Drawing_DynamicBrush___ObjInit_2(ContinuousTrackChangeState__Fuse_Drawing_DynamicBrush* __this, ::app::Fuse::Animations::Change__Fuse_Drawing_DynamicBrush* animator, ::app::Fuse::Animations::CreateStateParams* p)
{
    ::app::Fuse::Animations::TrackAnimatorState___ObjInit_1(__this, (::app::Fuse::Animations::TrackAnimator*)animator, p, NULL);
    __this->Animator_1 = animator;
    __this->mixHandle = ::app::Fuse::Animations::IMixer::Register__Fuse_Drawing_DynamicBrush(::uPtr< ::uObject*>(::uPtr< ::app::Fuse::Animations::Change__Fuse_Drawing_DynamicBrush*>(__this->Animator_1)->Mixer), ::uPtr< ::app::Fuse::Animations::Change__Fuse_Drawing_DynamicBrush*>(__this->Animator_1)->Target(), ::uPtr< ::app::Fuse::Animations::Change__Fuse_Drawing_DynamicBrush*>(__this->Animator_1)->MixOp());
}

void ContinuousTrackChangeState__Fuse_Drawing_DynamicBrush__Disable(ContinuousTrackChangeState__Fuse_Drawing_DynamicBrush* __this)
{
    if (__this->mixHandle == NULL)
    {
        return;
    }

    ::app::Fuse::Animations::IMixerHandle__Fuse_Drawing_DynamicBrush::Unregister(::uPtr< ::uObject*>(__this->mixHandle));
    __this->mixHandle = NULL;
}

ContinuousTrackChangeState__Fuse_Drawing_DynamicBrush* ContinuousTrackChangeState__Fuse_Drawing_DynamicBrush__New_1(::uStatic* __this, ::app::Fuse::Animations::Change__Fuse_Drawing_DynamicBrush* animator, ::app::Fuse::Animations::CreateStateParams* p)
{
    ContinuousTrackChangeState__Fuse_Drawing_DynamicBrush* inst = (ContinuousTrackChangeState__Fuse_Drawing_DynamicBrush*)::uAllocObject(sizeof(ContinuousTrackChangeState__Fuse_Drawing_DynamicBrush), ContinuousTrackChangeState__Fuse_Drawing_DynamicBrush__typeof());
    inst->_ObjInit_2(animator, p);
    return inst;
}

void ContinuousTrackChangeState__Fuse_Drawing_DynamicBrush__SeekValue(ContinuousTrackChangeState__Fuse_Drawing_DynamicBrush* __this, ::app::Uno::Float4 value, float strength)
{
    if (__this->mixHandle == NULL)
    {
        ::app::Uno::Diagnostics::Debug__Log_5(NULL, ::uGetConstString("Invalid Seek"), 1, ::uGetConstString("C:\\ProgramData\\Uno\\Packages\\Fuse.Animations\\0.11.3\\$.uno"), 454);
        return;
    }

    ::app::Fuse::Animations::IMixerHandle__Fuse_Drawing_DynamicBrush::Set(::uPtr< ::uObject*>(__this->mixHandle), ::uPtr< ::app::Fuse::Animations::Converter__Fuse_Drawing_DynamicBrush*>(::uPtr< ::app::Fuse::Animations::Change__Fuse_Drawing_DynamicBrush*>(__this->Animator_1)->ContinuousConverter)->Out(value), strength);
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Animations\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

ContinuousTrackChangeState__Fuse_Drawing_GradientStop__uType* ContinuousTrackChangeState__Fuse_Drawing_GradientStop__typeof()
{
    static ::uStaticStrong<ContinuousTrackChangeState__Fuse_Drawing_GradientStop__uType*> type;
    if (type != NULL) return type;

    type = (ContinuousTrackChangeState__Fuse_Drawing_GradientStop__uType*)::uAllocClassType(sizeof(ContinuousTrackChangeState__Fuse_Drawing_GradientStop__uType), "Fuse.Animations.ContinuousTrackChangeState<Fuse.Drawing.GradientStop>", false, 0, 2, 0);

    type->SetBaseType(::app::Fuse::Animations::TrackAnimatorState__typeof());
    type->__fp_Disable = (void(*)(::app::Fuse::Animations::AnimatorState*))ContinuousTrackChangeState__Fuse_Drawing_GradientStop__Disable;
    type->__fp_SeekValue = (void(*)(::app::Fuse::Animations::TrackAnimatorState*, ::app::Uno::Float4, float))ContinuousTrackChangeState__Fuse_Drawing_GradientStop__SeekValue;

    type->SetStrongRefs(
        "Animator", offsetof(ContinuousTrackChangeState__Fuse_Drawing_GradientStop, Animator_1),
        "mixHandle", offsetof(ContinuousTrackChangeState__Fuse_Drawing_GradientStop, mixHandle));

    return type;
}

void ContinuousTrackChangeState__Fuse_Drawing_GradientStop___ObjInit_2(ContinuousTrackChangeState__Fuse_Drawing_GradientStop* __this, ::app::Fuse::Animations::Change__Fuse_Drawing_GradientStop* animator, ::app::Fuse::Animations::CreateStateParams* p)
{
    ::app::Fuse::Animations::TrackAnimatorState___ObjInit_1(__this, (::app::Fuse::Animations::TrackAnimator*)animator, p, NULL);
    __this->Animator_1 = animator;
    __this->mixHandle = ::app::Fuse::Animations::IMixer::Register__Fuse_Drawing_GradientStop(::uPtr< ::uObject*>(::uPtr< ::app::Fuse::Animations::Change__Fuse_Drawing_GradientStop*>(__this->Animator_1)->Mixer), ::uPtr< ::app::Fuse::Animations::Change__Fuse_Drawing_GradientStop*>(__this->Animator_1)->Target(), ::uPtr< ::app::Fuse::Animations::Change__Fuse_Drawing_GradientStop*>(__this->Animator_1)->MixOp());
}

void ContinuousTrackChangeState__Fuse_Drawing_GradientStop__Disable(ContinuousTrackChangeState__Fuse_Drawing_GradientStop* __this)
{
    if (__this->mixHandle == NULL)
    {
        return;
    }

    ::app::Fuse::Animations::IMixerHandle__Fuse_Drawing_GradientStop::Unregister(::uPtr< ::uObject*>(__this->mixHandle));
    __this->mixHandle = NULL;
}

ContinuousTrackChangeState__Fuse_Drawing_GradientStop* ContinuousTrackChangeState__Fuse_Drawing_GradientStop__New_1(::uStatic* __this, ::app::Fuse::Animations::Change__Fuse_Drawing_GradientStop* animator, ::app::Fuse::Animations::CreateStateParams* p)
{
    ContinuousTrackChangeState__Fuse_Drawing_GradientStop* inst = (ContinuousTrackChangeState__Fuse_Drawing_GradientStop*)::uAllocObject(sizeof(ContinuousTrackChangeState__Fuse_Drawing_GradientStop), ContinuousTrackChangeState__Fuse_Drawing_GradientStop__typeof());
    inst->_ObjInit_2(animator, p);
    return inst;
}

void ContinuousTrackChangeState__Fuse_Drawing_GradientStop__SeekValue(ContinuousTrackChangeState__Fuse_Drawing_GradientStop* __this, ::app::Uno::Float4 value, float strength)
{
    if (__this->mixHandle == NULL)
    {
        ::app::Uno::Diagnostics::Debug__Log_5(NULL, ::uGetConstString("Invalid Seek"), 1, ::uGetConstString("C:\\ProgramData\\Uno\\Packages\\Fuse.Animations\\0.11.3\\$.uno"), 454);
        return;
    }

    ::app::Fuse::Animations::IMixerHandle__Fuse_Drawing_GradientStop::Set(::uPtr< ::uObject*>(__this->mixHandle), ::uPtr< ::app::Fuse::Animations::Converter__Fuse_Drawing_GradientStop*>(::uPtr< ::app::Fuse::Animations::Change__Fuse_Drawing_GradientStop*>(__this->Animator_1)->ContinuousConverter)->Out(value), strength);
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Animations\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

ContinuousTrackChangeState__Fuse_Drawing_LinearGradient__uType* ContinuousTrackChangeState__Fuse_Drawing_LinearGradient__typeof()
{
    static ::uStaticStrong<ContinuousTrackChangeState__Fuse_Drawing_LinearGradient__uType*> type;
    if (type != NULL) return type;

    type = (ContinuousTrackChangeState__Fuse_Drawing_LinearGradient__uType*)::uAllocClassType(sizeof(ContinuousTrackChangeState__Fuse_Drawing_LinearGradient__uType), "Fuse.Animations.ContinuousTrackChangeState<Fuse.Drawing.LinearGradient>", false, 0, 2, 0);

    type->SetBaseType(::app::Fuse::Animations::TrackAnimatorState__typeof());
    type->__fp_Disable = (void(*)(::app::Fuse::Animations::AnimatorState*))ContinuousTrackChangeState__Fuse_Drawing_LinearGradient__Disable;
    type->__fp_SeekValue = (void(*)(::app::Fuse::Animations::TrackAnimatorState*, ::app::Uno::Float4, float))ContinuousTrackChangeState__Fuse_Drawing_LinearGradient__SeekValue;

    type->SetStrongRefs(
        "Animator", offsetof(ContinuousTrackChangeState__Fuse_Drawing_LinearGradient, Animator_1),
        "mixHandle", offsetof(ContinuousTrackChangeState__Fuse_Drawing_LinearGradient, mixHandle));

    return type;
}

void ContinuousTrackChangeState__Fuse_Drawing_LinearGradient___ObjInit_2(ContinuousTrackChangeState__Fuse_Drawing_LinearGradient* __this, ::app::Fuse::Animations::Change__Fuse_Drawing_LinearGradient* animator, ::app::Fuse::Animations::CreateStateParams* p)
{
    ::app::Fuse::Animations::TrackAnimatorState___ObjInit_1(__this, (::app::Fuse::Animations::TrackAnimator*)animator, p, NULL);
    __this->Animator_1 = animator;
    __this->mixHandle = ::app::Fuse::Animations::IMixer::Register__Fuse_Drawing_LinearGradient(::uPtr< ::uObject*>(::uPtr< ::app::Fuse::Animations::Change__Fuse_Drawing_LinearGradient*>(__this->Animator_1)->Mixer), ::uPtr< ::app::Fuse::Animations::Change__Fuse_Drawing_LinearGradient*>(__this->Animator_1)->Target(), ::uPtr< ::app::Fuse::Animations::Change__Fuse_Drawing_LinearGradient*>(__this->Animator_1)->MixOp());
}

void ContinuousTrackChangeState__Fuse_Drawing_LinearGradient__Disable(ContinuousTrackChangeState__Fuse_Drawing_LinearGradient* __this)
{
    if (__this->mixHandle == NULL)
    {
        return;
    }

    ::app::Fuse::Animations::IMixerHandle__Fuse_Drawing_LinearGradient::Unregister(::uPtr< ::uObject*>(__this->mixHandle));
    __this->mixHandle = NULL;
}

ContinuousTrackChangeState__Fuse_Drawing_LinearGradient* ContinuousTrackChangeState__Fuse_Drawing_LinearGradient__New_1(::uStatic* __this, ::app::Fuse::Animations::Change__Fuse_Drawing_LinearGradient* animator, ::app::Fuse::Animations::CreateStateParams* p)
{
    ContinuousTrackChangeState__Fuse_Drawing_LinearGradient* inst = (ContinuousTrackChangeState__Fuse_Drawing_LinearGradient*)::uAllocObject(sizeof(ContinuousTrackChangeState__Fuse_Drawing_LinearGradient), ContinuousTrackChangeState__Fuse_Drawing_LinearGradient__typeof());
    inst->_ObjInit_2(animator, p);
    return inst;
}

void ContinuousTrackChangeState__Fuse_Drawing_LinearGradient__SeekValue(ContinuousTrackChangeState__Fuse_Drawing_LinearGradient* __this, ::app::Uno::Float4 value, float strength)
{
    if (__this->mixHandle == NULL)
    {
        ::app::Uno::Diagnostics::Debug__Log_5(NULL, ::uGetConstString("Invalid Seek"), 1, ::uGetConstString("C:\\ProgramData\\Uno\\Packages\\Fuse.Animations\\0.11.3\\$.uno"), 454);
        return;
    }

    ::app::Fuse::Animations::IMixerHandle__Fuse_Drawing_LinearGradient::Set(::uPtr< ::uObject*>(__this->mixHandle), ::uPtr< ::app::Fuse::Animations::Converter__Fuse_Drawing_LinearGradient*>(::uPtr< ::app::Fuse::Animations::Change__Fuse_Drawing_LinearGradient*>(__this->Animator_1)->ContinuousConverter)->Out(value), strength);
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Animations\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

ContinuousTrackChangeState__Fuse_Drawing_SolidColor__uType* ContinuousTrackChangeState__Fuse_Drawing_SolidColor__typeof()
{
    static ::uStaticStrong<ContinuousTrackChangeState__Fuse_Drawing_SolidColor__uType*> type;
    if (type != NULL) return type;

    type = (ContinuousTrackChangeState__Fuse_Drawing_SolidColor__uType*)::uAllocClassType(sizeof(ContinuousTrackChangeState__Fuse_Drawing_SolidColor__uType), "Fuse.Animations.ContinuousTrackChangeState<Fuse.Drawing.SolidColor>", false, 0, 2, 0);

    type->SetBaseType(::app::Fuse::Animations::TrackAnimatorState__typeof());
    type->__fp_Disable = (void(*)(::app::Fuse::Animations::AnimatorState*))ContinuousTrackChangeState__Fuse_Drawing_SolidColor__Disable;
    type->__fp_SeekValue = (void(*)(::app::Fuse::Animations::TrackAnimatorState*, ::app::Uno::Float4, float))ContinuousTrackChangeState__Fuse_Drawing_SolidColor__SeekValue;

    type->SetStrongRefs(
        "Animator", offsetof(ContinuousTrackChangeState__Fuse_Drawing_SolidColor, Animator_1),
        "mixHandle", offsetof(ContinuousTrackChangeState__Fuse_Drawing_SolidColor, mixHandle));

    return type;
}

void ContinuousTrackChangeState__Fuse_Drawing_SolidColor___ObjInit_2(ContinuousTrackChangeState__Fuse_Drawing_SolidColor* __this, ::app::Fuse::Animations::Change__Fuse_Drawing_SolidColor* animator, ::app::Fuse::Animations::CreateStateParams* p)
{
    ::app::Fuse::Animations::TrackAnimatorState___ObjInit_1(__this, (::app::Fuse::Animations::TrackAnimator*)animator, p, NULL);
    __this->Animator_1 = animator;
    __this->mixHandle = ::app::Fuse::Animations::IMixer::Register__Fuse_Drawing_SolidColor(::uPtr< ::uObject*>(::uPtr< ::app::Fuse::Animations::Change__Fuse_Drawing_SolidColor*>(__this->Animator_1)->Mixer), ::uPtr< ::app::Fuse::Animations::Change__Fuse_Drawing_SolidColor*>(__this->Animator_1)->Target(), ::uPtr< ::app::Fuse::Animations::Change__Fuse_Drawing_SolidColor*>(__this->Animator_1)->MixOp());
}

void ContinuousTrackChangeState__Fuse_Drawing_SolidColor__Disable(ContinuousTrackChangeState__Fuse_Drawing_SolidColor* __this)
{
    if (__this->mixHandle == NULL)
    {
        return;
    }

    ::app::Fuse::Animations::IMixerHandle__Fuse_Drawing_SolidColor::Unregister(::uPtr< ::uObject*>(__this->mixHandle));
    __this->mixHandle = NULL;
}

ContinuousTrackChangeState__Fuse_Drawing_SolidColor* ContinuousTrackChangeState__Fuse_Drawing_SolidColor__New_1(::uStatic* __this, ::app::Fuse::Animations::Change__Fuse_Drawing_SolidColor* animator, ::app::Fuse::Animations::CreateStateParams* p)
{
    ContinuousTrackChangeState__Fuse_Drawing_SolidColor* inst = (ContinuousTrackChangeState__Fuse_Drawing_SolidColor*)::uAllocObject(sizeof(ContinuousTrackChangeState__Fuse_Drawing_SolidColor), ContinuousTrackChangeState__Fuse_Drawing_SolidColor__typeof());
    inst->_ObjInit_2(animator, p);
    return inst;
}

void ContinuousTrackChangeState__Fuse_Drawing_SolidColor__SeekValue(ContinuousTrackChangeState__Fuse_Drawing_SolidColor* __this, ::app::Uno::Float4 value, float strength)
{
    if (__this->mixHandle == NULL)
    {
        ::app::Uno::Diagnostics::Debug__Log_5(NULL, ::uGetConstString("Invalid Seek"), 1, ::uGetConstString("C:\\ProgramData\\Uno\\Packages\\Fuse.Animations\\0.11.3\\$.uno"), 454);
        return;
    }

    ::app::Fuse::Animations::IMixerHandle__Fuse_Drawing_SolidColor::Set(::uPtr< ::uObject*>(__this->mixHandle), ::uPtr< ::app::Fuse::Animations::Converter__Fuse_Drawing_SolidColor*>(::uPtr< ::app::Fuse::Animations::Change__Fuse_Drawing_SolidColor*>(__this->Animator_1)->ContinuousConverter)->Out(value), strength);
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Animations\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

ContinuousTrackChangeState__Fuse_Drawing_StaticBrush__uType* ContinuousTrackChangeState__Fuse_Drawing_StaticBrush__typeof()
{
    static ::uStaticStrong<ContinuousTrackChangeState__Fuse_Drawing_StaticBrush__uType*> type;
    if (type != NULL) return type;

    type = (ContinuousTrackChangeState__Fuse_Drawing_StaticBrush__uType*)::uAllocClassType(sizeof(ContinuousTrackChangeState__Fuse_Drawing_StaticBrush__uType), "Fuse.Animations.ContinuousTrackChangeState<Fuse.Drawing.StaticBrush>", false, 0, 2, 0);

    type->SetBaseType(::app::Fuse::Animations::TrackAnimatorState__typeof());
    type->__fp_Disable = (void(*)(::app::Fuse::Animations::AnimatorState*))ContinuousTrackChangeState__Fuse_Drawing_StaticBrush__Disable;
    type->__fp_SeekValue = (void(*)(::app::Fuse::Animations::TrackAnimatorState*, ::app::Uno::Float4, float))ContinuousTrackChangeState__Fuse_Drawing_StaticBrush__SeekValue;

    type->SetStrongRefs(
        "Animator", offsetof(ContinuousTrackChangeState__Fuse_Drawing_StaticBrush, Animator_1),
        "mixHandle", offsetof(ContinuousTrackChangeState__Fuse_Drawing_StaticBrush, mixHandle));

    return type;
}

void ContinuousTrackChangeState__Fuse_Drawing_StaticBrush___ObjInit_2(ContinuousTrackChangeState__Fuse_Drawing_StaticBrush* __this, ::app::Fuse::Animations::Change__Fuse_Drawing_StaticBrush* animator, ::app::Fuse::Animations::CreateStateParams* p)
{
    ::app::Fuse::Animations::TrackAnimatorState___ObjInit_1(__this, (::app::Fuse::Animations::TrackAnimator*)animator, p, NULL);
    __this->Animator_1 = animator;
    __this->mixHandle = ::app::Fuse::Animations::IMixer::Register__Fuse_Drawing_StaticBrush(::uPtr< ::uObject*>(::uPtr< ::app::Fuse::Animations::Change__Fuse_Drawing_StaticBrush*>(__this->Animator_1)->Mixer), ::uPtr< ::app::Fuse::Animations::Change__Fuse_Drawing_StaticBrush*>(__this->Animator_1)->Target(), ::uPtr< ::app::Fuse::Animations::Change__Fuse_Drawing_StaticBrush*>(__this->Animator_1)->MixOp());
}

void ContinuousTrackChangeState__Fuse_Drawing_StaticBrush__Disable(ContinuousTrackChangeState__Fuse_Drawing_StaticBrush* __this)
{
    if (__this->mixHandle == NULL)
    {
        return;
    }

    ::app::Fuse::Animations::IMixerHandle__Fuse_Drawing_StaticBrush::Unregister(::uPtr< ::uObject*>(__this->mixHandle));
    __this->mixHandle = NULL;
}

ContinuousTrackChangeState__Fuse_Drawing_StaticBrush* ContinuousTrackChangeState__Fuse_Drawing_StaticBrush__New_1(::uStatic* __this, ::app::Fuse::Animations::Change__Fuse_Drawing_StaticBrush* animator, ::app::Fuse::Animations::CreateStateParams* p)
{
    ContinuousTrackChangeState__Fuse_Drawing_StaticBrush* inst = (ContinuousTrackChangeState__Fuse_Drawing_StaticBrush*)::uAllocObject(sizeof(ContinuousTrackChangeState__Fuse_Drawing_StaticBrush), ContinuousTrackChangeState__Fuse_Drawing_StaticBrush__typeof());
    inst->_ObjInit_2(animator, p);
    return inst;
}

void ContinuousTrackChangeState__Fuse_Drawing_StaticBrush__SeekValue(ContinuousTrackChangeState__Fuse_Drawing_StaticBrush* __this, ::app::Uno::Float4 value, float strength)
{
    if (__this->mixHandle == NULL)
    {
        ::app::Uno::Diagnostics::Debug__Log_5(NULL, ::uGetConstString("Invalid Seek"), 1, ::uGetConstString("C:\\ProgramData\\Uno\\Packages\\Fuse.Animations\\0.11.3\\$.uno"), 454);
        return;
    }

    ::app::Fuse::Animations::IMixerHandle__Fuse_Drawing_StaticBrush::Set(::uPtr< ::uObject*>(__this->mixHandle), ::uPtr< ::app::Fuse::Animations::Converter__Fuse_Drawing_StaticBrush*>(::uPtr< ::app::Fuse::Animations::Change__Fuse_Drawing_StaticBrush*>(__this->Animator_1)->ContinuousConverter)->Out(value), strength);
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Animations\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

ContinuousTrackChangeState__Fuse_Elements_Alignment__uType* ContinuousTrackChangeState__Fuse_Elements_Alignment__typeof()
{
    static ::uStaticStrong<ContinuousTrackChangeState__Fuse_Elements_Alignment__uType*> type;
    if (type != NULL) return type;

    type = (ContinuousTrackChangeState__Fuse_Elements_Alignment__uType*)::uAllocClassType(sizeof(ContinuousTrackChangeState__Fuse_Elements_Alignment__uType), "Fuse.Animations.ContinuousTrackChangeState<Fuse.Elements.Alignment>", false, 0, 2, 0);

    type->SetBaseType(::app::Fuse::Animations::TrackAnimatorState__typeof());
    type->__fp_Disable = (void(*)(::app::Fuse::Animations::AnimatorState*))ContinuousTrackChangeState__Fuse_Elements_Alignment__Disable;
    type->__fp_SeekValue = (void(*)(::app::Fuse::Animations::TrackAnimatorState*, ::app::Uno::Float4, float))ContinuousTrackChangeState__Fuse_Elements_Alignment__SeekValue;

    type->SetStrongRefs(
        "Animator", offsetof(ContinuousTrackChangeState__Fuse_Elements_Alignment, Animator_1),
        "mixHandle", offsetof(ContinuousTrackChangeState__Fuse_Elements_Alignment, mixHandle));

    return type;
}

void ContinuousTrackChangeState__Fuse_Elements_Alignment___ObjInit_2(ContinuousTrackChangeState__Fuse_Elements_Alignment* __this, ::app::Fuse::Animations::Change__Fuse_Elements_Alignment* animator, ::app::Fuse::Animations::CreateStateParams* p)
{
    ::app::Fuse::Animations::TrackAnimatorState___ObjInit_1(__this, (::app::Fuse::Animations::TrackAnimator*)animator, p, NULL);
    __this->Animator_1 = animator;
    __this->mixHandle = ::app::Fuse::Animations::IMixer::Register__Fuse_Elements_Alignment(::uPtr< ::uObject*>(::uPtr< ::app::Fuse::Animations::Change__Fuse_Elements_Alignment*>(__this->Animator_1)->Mixer), ::uPtr< ::app::Fuse::Animations::Change__Fuse_Elements_Alignment*>(__this->Animator_1)->Target(), ::uPtr< ::app::Fuse::Animations::Change__Fuse_Elements_Alignment*>(__this->Animator_1)->MixOp());
}

void ContinuousTrackChangeState__Fuse_Elements_Alignment__Disable(ContinuousTrackChangeState__Fuse_Elements_Alignment* __this)
{
    if (__this->mixHandle == NULL)
    {
        return;
    }

    ::app::Fuse::Animations::IMixerHandle__Fuse_Elements_Alignment::Unregister(::uPtr< ::uObject*>(__this->mixHandle));
    __this->mixHandle = NULL;
}

ContinuousTrackChangeState__Fuse_Elements_Alignment* ContinuousTrackChangeState__Fuse_Elements_Alignment__New_1(::uStatic* __this, ::app::Fuse::Animations::Change__Fuse_Elements_Alignment* animator, ::app::Fuse::Animations::CreateStateParams* p)
{
    ContinuousTrackChangeState__Fuse_Elements_Alignment* inst = (ContinuousTrackChangeState__Fuse_Elements_Alignment*)::uAllocObject(sizeof(ContinuousTrackChangeState__Fuse_Elements_Alignment), ContinuousTrackChangeState__Fuse_Elements_Alignment__typeof());
    inst->_ObjInit_2(animator, p);
    return inst;
}

void ContinuousTrackChangeState__Fuse_Elements_Alignment__SeekValue(ContinuousTrackChangeState__Fuse_Elements_Alignment* __this, ::app::Uno::Float4 value, float strength)
{
    if (__this->mixHandle == NULL)
    {
        ::app::Uno::Diagnostics::Debug__Log_5(NULL, ::uGetConstString("Invalid Seek"), 1, ::uGetConstString("C:\\ProgramData\\Uno\\Packages\\Fuse.Animations\\0.11.3\\$.uno"), 454);
        return;
    }

    ::app::Fuse::Animations::IMixerHandle__Fuse_Elements_Alignment::Set(::uPtr< ::uObject*>(__this->mixHandle), ::uPtr< ::app::Fuse::Animations::Converter__Fuse_Elements_Alignment*>(::uPtr< ::app::Fuse::Animations::Change__Fuse_Elements_Alignment*>(__this->Animator_1)->ContinuousConverter)->Out(value), strength);
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Animations\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

ContinuousTrackChangeState__Fuse_Elements_CachingMode__uType* ContinuousTrackChangeState__Fuse_Elements_CachingMode__typeof()
{
    static ::uStaticStrong<ContinuousTrackChangeState__Fuse_Elements_CachingMode__uType*> type;
    if (type != NULL) return type;

    type = (ContinuousTrackChangeState__Fuse_Elements_CachingMode__uType*)::uAllocClassType(sizeof(ContinuousTrackChangeState__Fuse_Elements_CachingMode__uType), "Fuse.Animations.ContinuousTrackChangeState<Fuse.Elements.CachingMode>", false, 0, 2, 0);

    type->SetBaseType(::app::Fuse::Animations::TrackAnimatorState__typeof());
    type->__fp_Disable = (void(*)(::app::Fuse::Animations::AnimatorState*))ContinuousTrackChangeState__Fuse_Elements_CachingMode__Disable;
    type->__fp_SeekValue = (void(*)(::app::Fuse::Animations::TrackAnimatorState*, ::app::Uno::Float4, float))ContinuousTrackChangeState__Fuse_Elements_CachingMode__SeekValue;

    type->SetStrongRefs(
        "Animator", offsetof(ContinuousTrackChangeState__Fuse_Elements_CachingMode, Animator_1),
        "mixHandle", offsetof(ContinuousTrackChangeState__Fuse_Elements_CachingMode, mixHandle));

    return type;
}

void ContinuousTrackChangeState__Fuse_Elements_CachingMode___ObjInit_2(ContinuousTrackChangeState__Fuse_Elements_CachingMode* __this, ::app::Fuse::Animations::Change__Fuse_Elements_CachingMode* animator, ::app::Fuse::Animations::CreateStateParams* p)
{
    ::app::Fuse::Animations::TrackAnimatorState___ObjInit_1(__this, (::app::Fuse::Animations::TrackAnimator*)animator, p, NULL);
    __this->Animator_1 = animator;
    __this->mixHandle = ::app::Fuse::Animations::IMixer::Register__Fuse_Elements_CachingMode(::uPtr< ::uObject*>(::uPtr< ::app::Fuse::Animations::Change__Fuse_Elements_CachingMode*>(__this->Animator_1)->Mixer), ::uPtr< ::app::Fuse::Animations::Change__Fuse_Elements_CachingMode*>(__this->Animator_1)->Target(), ::uPtr< ::app::Fuse::Animations::Change__Fuse_Elements_CachingMode*>(__this->Animator_1)->MixOp());
}

void ContinuousTrackChangeState__Fuse_Elements_CachingMode__Disable(ContinuousTrackChangeState__Fuse_Elements_CachingMode* __this)
{
    if (__this->mixHandle == NULL)
    {
        return;
    }

    ::app::Fuse::Animations::IMixerHandle__Fuse_Elements_CachingMode::Unregister(::uPtr< ::uObject*>(__this->mixHandle));
    __this->mixHandle = NULL;
}

ContinuousTrackChangeState__Fuse_Elements_CachingMode* ContinuousTrackChangeState__Fuse_Elements_CachingMode__New_1(::uStatic* __this, ::app::Fuse::Animations::Change__Fuse_Elements_CachingMode* animator, ::app::Fuse::Animations::CreateStateParams* p)
{
    ContinuousTrackChangeState__Fuse_Elements_CachingMode* inst = (ContinuousTrackChangeState__Fuse_Elements_CachingMode*)::uAllocObject(sizeof(ContinuousTrackChangeState__Fuse_Elements_CachingMode), ContinuousTrackChangeState__Fuse_Elements_CachingMode__typeof());
    inst->_ObjInit_2(animator, p);
    return inst;
}

void ContinuousTrackChangeState__Fuse_Elements_CachingMode__SeekValue(ContinuousTrackChangeState__Fuse_Elements_CachingMode* __this, ::app::Uno::Float4 value, float strength)
{
    if (__this->mixHandle == NULL)
    {
        ::app::Uno::Diagnostics::Debug__Log_5(NULL, ::uGetConstString("Invalid Seek"), 1, ::uGetConstString("C:\\ProgramData\\Uno\\Packages\\Fuse.Animations\\0.11.3\\$.uno"), 454);
        return;
    }

    ::app::Fuse::Animations::IMixerHandle__Fuse_Elements_CachingMode::Set(::uPtr< ::uObject*>(__this->mixHandle), ::uPtr< ::app::Fuse::Animations::Converter__Fuse_Elements_CachingMode*>(::uPtr< ::app::Fuse::Animations::Change__Fuse_Elements_CachingMode*>(__this->Animator_1)->ContinuousConverter)->Out(value), strength);
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Animations\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

ContinuousTrackChangeState__Fuse_Elements_Element__uType* ContinuousTrackChangeState__Fuse_Elements_Element__typeof()
{
    static ::uStaticStrong<ContinuousTrackChangeState__Fuse_Elements_Element__uType*> type;
    if (type != NULL) return type;

    type = (ContinuousTrackChangeState__Fuse_Elements_Element__uType*)::uAllocClassType(sizeof(ContinuousTrackChangeState__Fuse_Elements_Element__uType), "Fuse.Animations.ContinuousTrackChangeState<Fuse.Elements.Element>", false, 0, 2, 0);

    type->SetBaseType(::app::Fuse::Animations::TrackAnimatorState__typeof());
    type->__fp_Disable = (void(*)(::app::Fuse::Animations::AnimatorState*))ContinuousTrackChangeState__Fuse_Elements_Element__Disable;
    type->__fp_SeekValue = (void(*)(::app::Fuse::Animations::TrackAnimatorState*, ::app::Uno::Float4, float))ContinuousTrackChangeState__Fuse_Elements_Element__SeekValue;

    type->SetStrongRefs(
        "Animator", offsetof(ContinuousTrackChangeState__Fuse_Elements_Element, Animator_1),
        "mixHandle", offsetof(ContinuousTrackChangeState__Fuse_Elements_Element, mixHandle));

    return type;
}

void ContinuousTrackChangeState__Fuse_Elements_Element___ObjInit_2(ContinuousTrackChangeState__Fuse_Elements_Element* __this, ::app::Fuse::Animations::Change__Fuse_Elements_Element* animator, ::app::Fuse::Animations::CreateStateParams* p)
{
    ::app::Fuse::Animations::TrackAnimatorState___ObjInit_1(__this, (::app::Fuse::Animations::TrackAnimator*)animator, p, NULL);
    __this->Animator_1 = animator;
    __this->mixHandle = ::app::Fuse::Animations::IMixer::Register__Fuse_Elements_Element(::uPtr< ::uObject*>(::uPtr< ::app::Fuse::Animations::Change__Fuse_Elements_Element*>(__this->Animator_1)->Mixer), ::uPtr< ::app::Fuse::Animations::Change__Fuse_Elements_Element*>(__this->Animator_1)->Target(), ::uPtr< ::app::Fuse::Animations::Change__Fuse_Elements_Element*>(__this->Animator_1)->MixOp());
}

void ContinuousTrackChangeState__Fuse_Elements_Element__Disable(ContinuousTrackChangeState__Fuse_Elements_Element* __this)
{
    if (__this->mixHandle == NULL)
    {
        return;
    }

    ::app::Fuse::Animations::IMixerHandle__Fuse_Elements_Element::Unregister(::uPtr< ::uObject*>(__this->mixHandle));
    __this->mixHandle = NULL;
}

ContinuousTrackChangeState__Fuse_Elements_Element* ContinuousTrackChangeState__Fuse_Elements_Element__New_1(::uStatic* __this, ::app::Fuse::Animations::Change__Fuse_Elements_Element* animator, ::app::Fuse::Animations::CreateStateParams* p)
{
    ContinuousTrackChangeState__Fuse_Elements_Element* inst = (ContinuousTrackChangeState__Fuse_Elements_Element*)::uAllocObject(sizeof(ContinuousTrackChangeState__Fuse_Elements_Element), ContinuousTrackChangeState__Fuse_Elements_Element__typeof());
    inst->_ObjInit_2(animator, p);
    return inst;
}

void ContinuousTrackChangeState__Fuse_Elements_Element__SeekValue(ContinuousTrackChangeState__Fuse_Elements_Element* __this, ::app::Uno::Float4 value, float strength)
{
    if (__this->mixHandle == NULL)
    {
        ::app::Uno::Diagnostics::Debug__Log_5(NULL, ::uGetConstString("Invalid Seek"), 1, ::uGetConstString("C:\\ProgramData\\Uno\\Packages\\Fuse.Animations\\0.11.3\\$.uno"), 454);
        return;
    }

    ::app::Fuse::Animations::IMixerHandle__Fuse_Elements_Element::Set(::uPtr< ::uObject*>(__this->mixHandle), ::uPtr< ::app::Fuse::Animations::Converter__Fuse_Elements_Element*>(::uPtr< ::app::Fuse::Animations::Change__Fuse_Elements_Element*>(__this->Animator_1)->ContinuousConverter)->Out(value), strength);
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Animations\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

ContinuousTrackChangeState__Fuse_Elements_HitTestMode__uType* ContinuousTrackChangeState__Fuse_Elements_HitTestMode__typeof()
{
    static ::uStaticStrong<ContinuousTrackChangeState__Fuse_Elements_HitTestMode__uType*> type;
    if (type != NULL) return type;

    type = (ContinuousTrackChangeState__Fuse_Elements_HitTestMode__uType*)::uAllocClassType(sizeof(ContinuousTrackChangeState__Fuse_Elements_HitTestMode__uType), "Fuse.Animations.ContinuousTrackChangeState<Fuse.Elements.HitTestMode>", false, 0, 2, 0);

    type->SetBaseType(::app::Fuse::Animations::TrackAnimatorState__typeof());
    type->__fp_Disable = (void(*)(::app::Fuse::Animations::AnimatorState*))ContinuousTrackChangeState__Fuse_Elements_HitTestMode__Disable;
    type->__fp_SeekValue = (void(*)(::app::Fuse::Animations::TrackAnimatorState*, ::app::Uno::Float4, float))ContinuousTrackChangeState__Fuse_Elements_HitTestMode__SeekValue;

    type->SetStrongRefs(
        "Animator", offsetof(ContinuousTrackChangeState__Fuse_Elements_HitTestMode, Animator_1),
        "mixHandle", offsetof(ContinuousTrackChangeState__Fuse_Elements_HitTestMode, mixHandle));

    return type;
}

void ContinuousTrackChangeState__Fuse_Elements_HitTestMode___ObjInit_2(ContinuousTrackChangeState__Fuse_Elements_HitTestMode* __this, ::app::Fuse::Animations::Change__Fuse_Elements_HitTestMode* animator, ::app::Fuse::Animations::CreateStateParams* p)
{
    ::app::Fuse::Animations::TrackAnimatorState___ObjInit_1(__this, (::app::Fuse::Animations::TrackAnimator*)animator, p, NULL);
    __this->Animator_1 = animator;
    __this->mixHandle = ::app::Fuse::Animations::IMixer::Register__Fuse_Elements_HitTestMode(::uPtr< ::uObject*>(::uPtr< ::app::Fuse::Animations::Change__Fuse_Elements_HitTestMode*>(__this->Animator_1)->Mixer), ::uPtr< ::app::Fuse::Animations::Change__Fuse_Elements_HitTestMode*>(__this->Animator_1)->Target(), ::uPtr< ::app::Fuse::Animations::Change__Fuse_Elements_HitTestMode*>(__this->Animator_1)->MixOp());
}

void ContinuousTrackChangeState__Fuse_Elements_HitTestMode__Disable(ContinuousTrackChangeState__Fuse_Elements_HitTestMode* __this)
{
    if (__this->mixHandle == NULL)
    {
        return;
    }

    ::app::Fuse::Animations::IMixerHandle__Fuse_Elements_HitTestMode::Unregister(::uPtr< ::uObject*>(__this->mixHandle));
    __this->mixHandle = NULL;
}

ContinuousTrackChangeState__Fuse_Elements_HitTestMode* ContinuousTrackChangeState__Fuse_Elements_HitTestMode__New_1(::uStatic* __this, ::app::Fuse::Animations::Change__Fuse_Elements_HitTestMode* animator, ::app::Fuse::Animations::CreateStateParams* p)
{
    ContinuousTrackChangeState__Fuse_Elements_HitTestMode* inst = (ContinuousTrackChangeState__Fuse_Elements_HitTestMode*)::uAllocObject(sizeof(ContinuousTrackChangeState__Fuse_Elements_HitTestMode), ContinuousTrackChangeState__Fuse_Elements_HitTestMode__typeof());
    inst->_ObjInit_2(animator, p);
    return inst;
}

void ContinuousTrackChangeState__Fuse_Elements_HitTestMode__SeekValue(ContinuousTrackChangeState__Fuse_Elements_HitTestMode* __this, ::app::Uno::Float4 value, float strength)
{
    if (__this->mixHandle == NULL)
    {
        ::app::Uno::Diagnostics::Debug__Log_5(NULL, ::uGetConstString("Invalid Seek"), 1, ::uGetConstString("C:\\ProgramData\\Uno\\Packages\\Fuse.Animations\\0.11.3\\$.uno"), 454);
        return;
    }

    ::app::Fuse::Animations::IMixerHandle__Fuse_Elements_HitTestMode::Set(::uPtr< ::uObject*>(__this->mixHandle), ::uPtr< ::app::Fuse::Animations::Converter__Fuse_Elements_HitTestMode*>(::uPtr< ::app::Fuse::Animations::Change__Fuse_Elements_HitTestMode*>(__this->Animator_1)->ContinuousConverter)->Out(value), strength);
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Animations\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

ContinuousTrackChangeState__Fuse_Elements_SizeUnit__uType* ContinuousTrackChangeState__Fuse_Elements_SizeUnit__typeof()
{
    static ::uStaticStrong<ContinuousTrackChangeState__Fuse_Elements_SizeUnit__uType*> type;
    if (type != NULL) return type;

    type = (ContinuousTrackChangeState__Fuse_Elements_SizeUnit__uType*)::uAllocClassType(sizeof(ContinuousTrackChangeState__Fuse_Elements_SizeUnit__uType), "Fuse.Animations.ContinuousTrackChangeState<Fuse.Elements.SizeUnit>", false, 0, 2, 0);

    type->SetBaseType(::app::Fuse::Animations::TrackAnimatorState__typeof());
    type->__fp_Disable = (void(*)(::app::Fuse::Animations::AnimatorState*))ContinuousTrackChangeState__Fuse_Elements_SizeUnit__Disable;
    type->__fp_SeekValue = (void(*)(::app::Fuse::Animations::TrackAnimatorState*, ::app::Uno::Float4, float))ContinuousTrackChangeState__Fuse_Elements_SizeUnit__SeekValue;

    type->SetStrongRefs(
        "Animator", offsetof(ContinuousTrackChangeState__Fuse_Elements_SizeUnit, Animator_1),
        "mixHandle", offsetof(ContinuousTrackChangeState__Fuse_Elements_SizeUnit, mixHandle));

    return type;
}

void ContinuousTrackChangeState__Fuse_Elements_SizeUnit___ObjInit_2(ContinuousTrackChangeState__Fuse_Elements_SizeUnit* __this, ::app::Fuse::Animations::Change__Fuse_Elements_SizeUnit* animator, ::app::Fuse::Animations::CreateStateParams* p)
{
    ::app::Fuse::Animations::TrackAnimatorState___ObjInit_1(__this, (::app::Fuse::Animations::TrackAnimator*)animator, p, NULL);
    __this->Animator_1 = animator;
    __this->mixHandle = ::app::Fuse::Animations::IMixer::Register__Fuse_Elements_SizeUnit(::uPtr< ::uObject*>(::uPtr< ::app::Fuse::Animations::Change__Fuse_Elements_SizeUnit*>(__this->Animator_1)->Mixer), ::uPtr< ::app::Fuse::Animations::Change__Fuse_Elements_SizeUnit*>(__this->Animator_1)->Target(), ::uPtr< ::app::Fuse::Animations::Change__Fuse_Elements_SizeUnit*>(__this->Animator_1)->MixOp());
}

void ContinuousTrackChangeState__Fuse_Elements_SizeUnit__Disable(ContinuousTrackChangeState__Fuse_Elements_SizeUnit* __this)
{
    if (__this->mixHandle == NULL)
    {
        return;
    }

    ::app::Fuse::Animations::IMixerHandle__Fuse_Elements_SizeUnit::Unregister(::uPtr< ::uObject*>(__this->mixHandle));
    __this->mixHandle = NULL;
}

ContinuousTrackChangeState__Fuse_Elements_SizeUnit* ContinuousTrackChangeState__Fuse_Elements_SizeUnit__New_1(::uStatic* __this, ::app::Fuse::Animations::Change__Fuse_Elements_SizeUnit* animator, ::app::Fuse::Animations::CreateStateParams* p)
{
    ContinuousTrackChangeState__Fuse_Elements_SizeUnit* inst = (ContinuousTrackChangeState__Fuse_Elements_SizeUnit*)::uAllocObject(sizeof(ContinuousTrackChangeState__Fuse_Elements_SizeUnit), ContinuousTrackChangeState__Fuse_Elements_SizeUnit__typeof());
    inst->_ObjInit_2(animator, p);
    return inst;
}

void ContinuousTrackChangeState__Fuse_Elements_SizeUnit__SeekValue(ContinuousTrackChangeState__Fuse_Elements_SizeUnit* __this, ::app::Uno::Float4 value, float strength)
{
    if (__this->mixHandle == NULL)
    {
        ::app::Uno::Diagnostics::Debug__Log_5(NULL, ::uGetConstString("Invalid Seek"), 1, ::uGetConstString("C:\\ProgramData\\Uno\\Packages\\Fuse.Animations\\0.11.3\\$.uno"), 454);
        return;
    }

    ::app::Fuse::Animations::IMixerHandle__Fuse_Elements_SizeUnit::Set(::uPtr< ::uObject*>(__this->mixHandle), ::uPtr< ::app::Fuse::Animations::Converter__Fuse_Elements_SizeUnit*>(::uPtr< ::app::Fuse::Animations::Change__Fuse_Elements_SizeUnit*>(__this->Animator_1)->ContinuousConverter)->Out(value), strength);
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Animations\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

ContinuousTrackChangeState__Fuse_Elements_StretchDirection__uType* ContinuousTrackChangeState__Fuse_Elements_StretchDirection__typeof()
{
    static ::uStaticStrong<ContinuousTrackChangeState__Fuse_Elements_StretchDirection__uType*> type;
    if (type != NULL) return type;

    type = (ContinuousTrackChangeState__Fuse_Elements_StretchDirection__uType*)::uAllocClassType(sizeof(ContinuousTrackChangeState__Fuse_Elements_StretchDirection__uType), "Fuse.Animations.ContinuousTrackChangeState<Fuse.Elements.StretchDirection>", false, 0, 2, 0);

    type->SetBaseType(::app::Fuse::Animations::TrackAnimatorState__typeof());
    type->__fp_Disable = (void(*)(::app::Fuse::Animations::AnimatorState*))ContinuousTrackChangeState__Fuse_Elements_StretchDirection__Disable;
    type->__fp_SeekValue = (void(*)(::app::Fuse::Animations::TrackAnimatorState*, ::app::Uno::Float4, float))ContinuousTrackChangeState__Fuse_Elements_StretchDirection__SeekValue;

    type->SetStrongRefs(
        "Animator", offsetof(ContinuousTrackChangeState__Fuse_Elements_StretchDirection, Animator_1),
        "mixHandle", offsetof(ContinuousTrackChangeState__Fuse_Elements_StretchDirection, mixHandle));

    return type;
}

void ContinuousTrackChangeState__Fuse_Elements_StretchDirection___ObjInit_2(ContinuousTrackChangeState__Fuse_Elements_StretchDirection* __this, ::app::Fuse::Animations::Change__Fuse_Elements_StretchDirection* animator, ::app::Fuse::Animations::CreateStateParams* p)
{
    ::app::Fuse::Animations::TrackAnimatorState___ObjInit_1(__this, (::app::Fuse::Animations::TrackAnimator*)animator, p, NULL);
    __this->Animator_1 = animator;
    __this->mixHandle = ::app::Fuse::Animations::IMixer::Register__Fuse_Elements_StretchDirection(::uPtr< ::uObject*>(::uPtr< ::app::Fuse::Animations::Change__Fuse_Elements_StretchDirection*>(__this->Animator_1)->Mixer), ::uPtr< ::app::Fuse::Animations::Change__Fuse_Elements_StretchDirection*>(__this->Animator_1)->Target(), ::uPtr< ::app::Fuse::Animations::Change__Fuse_Elements_StretchDirection*>(__this->Animator_1)->MixOp());
}

void ContinuousTrackChangeState__Fuse_Elements_StretchDirection__Disable(ContinuousTrackChangeState__Fuse_Elements_StretchDirection* __this)
{
    if (__this->mixHandle == NULL)
    {
        return;
    }

    ::app::Fuse::Animations::IMixerHandle__Fuse_Elements_StretchDirection::Unregister(::uPtr< ::uObject*>(__this->mixHandle));
    __this->mixHandle = NULL;
}

ContinuousTrackChangeState__Fuse_Elements_StretchDirection* ContinuousTrackChangeState__Fuse_Elements_StretchDirection__New_1(::uStatic* __this, ::app::Fuse::Animations::Change__Fuse_Elements_StretchDirection* animator, ::app::Fuse::Animations::CreateStateParams* p)
{
    ContinuousTrackChangeState__Fuse_Elements_StretchDirection* inst = (ContinuousTrackChangeState__Fuse_Elements_StretchDirection*)::uAllocObject(sizeof(ContinuousTrackChangeState__Fuse_Elements_StretchDirection), ContinuousTrackChangeState__Fuse_Elements_StretchDirection__typeof());
    inst->_ObjInit_2(animator, p);
    return inst;
}

void ContinuousTrackChangeState__Fuse_Elements_StretchDirection__SeekValue(ContinuousTrackChangeState__Fuse_Elements_StretchDirection* __this, ::app::Uno::Float4 value, float strength)
{
    if (__this->mixHandle == NULL)
    {
        ::app::Uno::Diagnostics::Debug__Log_5(NULL, ::uGetConstString("Invalid Seek"), 1, ::uGetConstString("C:\\ProgramData\\Uno\\Packages\\Fuse.Animations\\0.11.3\\$.uno"), 454);
        return;
    }

    ::app::Fuse::Animations::IMixerHandle__Fuse_Elements_StretchDirection::Set(::uPtr< ::uObject*>(__this->mixHandle), ::uPtr< ::app::Fuse::Animations::Converter__Fuse_Elements_StretchDirection*>(::uPtr< ::app::Fuse::Animations::Change__Fuse_Elements_StretchDirection*>(__this->Animator_1)->ContinuousConverter)->Out(value), strength);
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Animations\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

ContinuousTrackChangeState__Fuse_Elements_StretchMode__uType* ContinuousTrackChangeState__Fuse_Elements_StretchMode__typeof()
{
    static ::uStaticStrong<ContinuousTrackChangeState__Fuse_Elements_StretchMode__uType*> type;
    if (type != NULL) return type;

    type = (ContinuousTrackChangeState__Fuse_Elements_StretchMode__uType*)::uAllocClassType(sizeof(ContinuousTrackChangeState__Fuse_Elements_StretchMode__uType), "Fuse.Animations.ContinuousTrackChangeState<Fuse.Elements.StretchMode>", false, 0, 2, 0);

    type->SetBaseType(::app::Fuse::Animations::TrackAnimatorState__typeof());
    type->__fp_Disable = (void(*)(::app::Fuse::Animations::AnimatorState*))ContinuousTrackChangeState__Fuse_Elements_StretchMode__Disable;
    type->__fp_SeekValue = (void(*)(::app::Fuse::Animations::TrackAnimatorState*, ::app::Uno::Float4, float))ContinuousTrackChangeState__Fuse_Elements_StretchMode__SeekValue;

    type->SetStrongRefs(
        "Animator", offsetof(ContinuousTrackChangeState__Fuse_Elements_StretchMode, Animator_1),
        "mixHandle", offsetof(ContinuousTrackChangeState__Fuse_Elements_StretchMode, mixHandle));

    return type;
}

void ContinuousTrackChangeState__Fuse_Elements_StretchMode___ObjInit_2(ContinuousTrackChangeState__Fuse_Elements_StretchMode* __this, ::app::Fuse::Animations::Change__Fuse_Elements_StretchMode* animator, ::app::Fuse::Animations::CreateStateParams* p)
{
    ::app::Fuse::Animations::TrackAnimatorState___ObjInit_1(__this, (::app::Fuse::Animations::TrackAnimator*)animator, p, NULL);
    __this->Animator_1 = animator;
    __this->mixHandle = ::app::Fuse::Animations::IMixer::Register__Fuse_Elements_StretchMode(::uPtr< ::uObject*>(::uPtr< ::app::Fuse::Animations::Change__Fuse_Elements_StretchMode*>(__this->Animator_1)->Mixer), ::uPtr< ::app::Fuse::Animations::Change__Fuse_Elements_StretchMode*>(__this->Animator_1)->Target(), ::uPtr< ::app::Fuse::Animations::Change__Fuse_Elements_StretchMode*>(__this->Animator_1)->MixOp());
}

void ContinuousTrackChangeState__Fuse_Elements_StretchMode__Disable(ContinuousTrackChangeState__Fuse_Elements_StretchMode* __this)
{
    if (__this->mixHandle == NULL)
    {
        return;
    }

    ::app::Fuse::Animations::IMixerHandle__Fuse_Elements_StretchMode::Unregister(::uPtr< ::uObject*>(__this->mixHandle));
    __this->mixHandle = NULL;
}

ContinuousTrackChangeState__Fuse_Elements_StretchMode* ContinuousTrackChangeState__Fuse_Elements_StretchMode__New_1(::uStatic* __this, ::app::Fuse::Animations::Change__Fuse_Elements_StretchMode* animator, ::app::Fuse::Animations::CreateStateParams* p)
{
    ContinuousTrackChangeState__Fuse_Elements_StretchMode* inst = (ContinuousTrackChangeState__Fuse_Elements_StretchMode*)::uAllocObject(sizeof(ContinuousTrackChangeState__Fuse_Elements_StretchMode), ContinuousTrackChangeState__Fuse_Elements_StretchMode__typeof());
    inst->_ObjInit_2(animator, p);
    return inst;
}

void ContinuousTrackChangeState__Fuse_Elements_StretchMode__SeekValue(ContinuousTrackChangeState__Fuse_Elements_StretchMode* __this, ::app::Uno::Float4 value, float strength)
{
    if (__this->mixHandle == NULL)
    {
        ::app::Uno::Diagnostics::Debug__Log_5(NULL, ::uGetConstString("Invalid Seek"), 1, ::uGetConstString("C:\\ProgramData\\Uno\\Packages\\Fuse.Animations\\0.11.3\\$.uno"), 454);
        return;
    }

    ::app::Fuse::Animations::IMixerHandle__Fuse_Elements_StretchMode::Set(::uPtr< ::uObject*>(__this->mixHandle), ::uPtr< ::app::Fuse::Animations::Converter__Fuse_Elements_StretchMode*>(::uPtr< ::app::Fuse::Animations::Change__Fuse_Elements_StretchMode*>(__this->Animator_1)->ContinuousConverter)->Out(value), strength);
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Animations\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

ContinuousTrackChangeState__Fuse_Elements_StretchSizing__uType* ContinuousTrackChangeState__Fuse_Elements_StretchSizing__typeof()
{
    static ::uStaticStrong<ContinuousTrackChangeState__Fuse_Elements_StretchSizing__uType*> type;
    if (type != NULL) return type;

    type = (ContinuousTrackChangeState__Fuse_Elements_StretchSizing__uType*)::uAllocClassType(sizeof(ContinuousTrackChangeState__Fuse_Elements_StretchSizing__uType), "Fuse.Animations.ContinuousTrackChangeState<Fuse.Elements.StretchSizing>", false, 0, 2, 0);

    type->SetBaseType(::app::Fuse::Animations::TrackAnimatorState__typeof());
    type->__fp_Disable = (void(*)(::app::Fuse::Animations::AnimatorState*))ContinuousTrackChangeState__Fuse_Elements_StretchSizing__Disable;
    type->__fp_SeekValue = (void(*)(::app::Fuse::Animations::TrackAnimatorState*, ::app::Uno::Float4, float))ContinuousTrackChangeState__Fuse_Elements_StretchSizing__SeekValue;

    type->SetStrongRefs(
        "Animator", offsetof(ContinuousTrackChangeState__Fuse_Elements_StretchSizing, Animator_1),
        "mixHandle", offsetof(ContinuousTrackChangeState__Fuse_Elements_StretchSizing, mixHandle));

    return type;
}

void ContinuousTrackChangeState__Fuse_Elements_StretchSizing___ObjInit_2(ContinuousTrackChangeState__Fuse_Elements_StretchSizing* __this, ::app::Fuse::Animations::Change__Fuse_Elements_StretchSizing* animator, ::app::Fuse::Animations::CreateStateParams* p)
{
    ::app::Fuse::Animations::TrackAnimatorState___ObjInit_1(__this, (::app::Fuse::Animations::TrackAnimator*)animator, p, NULL);
    __this->Animator_1 = animator;
    __this->mixHandle = ::app::Fuse::Animations::IMixer::Register__Fuse_Elements_StretchSizing(::uPtr< ::uObject*>(::uPtr< ::app::Fuse::Animations::Change__Fuse_Elements_StretchSizing*>(__this->Animator_1)->Mixer), ::uPtr< ::app::Fuse::Animations::Change__Fuse_Elements_StretchSizing*>(__this->Animator_1)->Target(), ::uPtr< ::app::Fuse::Animations::Change__Fuse_Elements_StretchSizing*>(__this->Animator_1)->MixOp());
}

void ContinuousTrackChangeState__Fuse_Elements_StretchSizing__Disable(ContinuousTrackChangeState__Fuse_Elements_StretchSizing* __this)
{
    if (__this->mixHandle == NULL)
    {
        return;
    }

    ::app::Fuse::Animations::IMixerHandle__Fuse_Elements_StretchSizing::Unregister(::uPtr< ::uObject*>(__this->mixHandle));
    __this->mixHandle = NULL;
}

ContinuousTrackChangeState__Fuse_Elements_StretchSizing* ContinuousTrackChangeState__Fuse_Elements_StretchSizing__New_1(::uStatic* __this, ::app::Fuse::Animations::Change__Fuse_Elements_StretchSizing* animator, ::app::Fuse::Animations::CreateStateParams* p)
{
    ContinuousTrackChangeState__Fuse_Elements_StretchSizing* inst = (ContinuousTrackChangeState__Fuse_Elements_StretchSizing*)::uAllocObject(sizeof(ContinuousTrackChangeState__Fuse_Elements_StretchSizing), ContinuousTrackChangeState__Fuse_Elements_StretchSizing__typeof());
    inst->_ObjInit_2(animator, p);
    return inst;
}

void ContinuousTrackChangeState__Fuse_Elements_StretchSizing__SeekValue(ContinuousTrackChangeState__Fuse_Elements_StretchSizing* __this, ::app::Uno::Float4 value, float strength)
{
    if (__this->mixHandle == NULL)
    {
        ::app::Uno::Diagnostics::Debug__Log_5(NULL, ::uGetConstString("Invalid Seek"), 1, ::uGetConstString("C:\\ProgramData\\Uno\\Packages\\Fuse.Animations\\0.11.3\\$.uno"), 454);
        return;
    }

    ::app::Fuse::Animations::IMixerHandle__Fuse_Elements_StretchSizing::Set(::uPtr< ::uObject*>(__this->mixHandle), ::uPtr< ::app::Fuse::Animations::Converter__Fuse_Elements_StretchSizing*>(::uPtr< ::app::Fuse::Animations::Change__Fuse_Elements_StretchSizing*>(__this->Animator_1)->ContinuousConverter)->Out(value), strength);
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Animations\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

ContinuousTrackChangeState__Fuse_Elements_TextAlignment__uType* ContinuousTrackChangeState__Fuse_Elements_TextAlignment__typeof()
{
    static ::uStaticStrong<ContinuousTrackChangeState__Fuse_Elements_TextAlignment__uType*> type;
    if (type != NULL) return type;

    type = (ContinuousTrackChangeState__Fuse_Elements_TextAlignment__uType*)::uAllocClassType(sizeof(ContinuousTrackChangeState__Fuse_Elements_TextAlignment__uType), "Fuse.Animations.ContinuousTrackChangeState<Fuse.Elements.TextAlignment>", false, 0, 2, 0);

    type->SetBaseType(::app::Fuse::Animations::TrackAnimatorState__typeof());
    type->__fp_Disable = (void(*)(::app::Fuse::Animations::AnimatorState*))ContinuousTrackChangeState__Fuse_Elements_TextAlignment__Disable;
    type->__fp_SeekValue = (void(*)(::app::Fuse::Animations::TrackAnimatorState*, ::app::Uno::Float4, float))ContinuousTrackChangeState__Fuse_Elements_TextAlignment__SeekValue;

    type->SetStrongRefs(
        "Animator", offsetof(ContinuousTrackChangeState__Fuse_Elements_TextAlignment, Animator_1),
        "mixHandle", offsetof(ContinuousTrackChangeState__Fuse_Elements_TextAlignment, mixHandle));

    return type;
}

void ContinuousTrackChangeState__Fuse_Elements_TextAlignment___ObjInit_2(ContinuousTrackChangeState__Fuse_Elements_TextAlignment* __this, ::app::Fuse::Animations::Change__Fuse_Elements_TextAlignment* animator, ::app::Fuse::Animations::CreateStateParams* p)
{
    ::app::Fuse::Animations::TrackAnimatorState___ObjInit_1(__this, (::app::Fuse::Animations::TrackAnimator*)animator, p, NULL);
    __this->Animator_1 = animator;
    __this->mixHandle = ::app::Fuse::Animations::IMixer::Register__Fuse_Elements_TextAlignment(::uPtr< ::uObject*>(::uPtr< ::app::Fuse::Animations::Change__Fuse_Elements_TextAlignment*>(__this->Animator_1)->Mixer), ::uPtr< ::app::Fuse::Animations::Change__Fuse_Elements_TextAlignment*>(__this->Animator_1)->Target(), ::uPtr< ::app::Fuse::Animations::Change__Fuse_Elements_TextAlignment*>(__this->Animator_1)->MixOp());
}

void ContinuousTrackChangeState__Fuse_Elements_TextAlignment__Disable(ContinuousTrackChangeState__Fuse_Elements_TextAlignment* __this)
{
    if (__this->mixHandle == NULL)
    {
        return;
    }

    ::app::Fuse::Animations::IMixerHandle__Fuse_Elements_TextAlignment::Unregister(::uPtr< ::uObject*>(__this->mixHandle));
    __this->mixHandle = NULL;
}

ContinuousTrackChangeState__Fuse_Elements_TextAlignment* ContinuousTrackChangeState__Fuse_Elements_TextAlignment__New_1(::uStatic* __this, ::app::Fuse::Animations::Change__Fuse_Elements_TextAlignment* animator, ::app::Fuse::Animations::CreateStateParams* p)
{
    ContinuousTrackChangeState__Fuse_Elements_TextAlignment* inst = (ContinuousTrackChangeState__Fuse_Elements_TextAlignment*)::uAllocObject(sizeof(ContinuousTrackChangeState__Fuse_Elements_TextAlignment), ContinuousTrackChangeState__Fuse_Elements_TextAlignment__typeof());
    inst->_ObjInit_2(animator, p);
    return inst;
}

void ContinuousTrackChangeState__Fuse_Elements_TextAlignment__SeekValue(ContinuousTrackChangeState__Fuse_Elements_TextAlignment* __this, ::app::Uno::Float4 value, float strength)
{
    if (__this->mixHandle == NULL)
    {
        ::app::Uno::Diagnostics::Debug__Log_5(NULL, ::uGetConstString("Invalid Seek"), 1, ::uGetConstString("C:\\ProgramData\\Uno\\Packages\\Fuse.Animations\\0.11.3\\$.uno"), 454);
        return;
    }

    ::app::Fuse::Animations::IMixerHandle__Fuse_Elements_TextAlignment::Set(::uPtr< ::uObject*>(__this->mixHandle), ::uPtr< ::app::Fuse::Animations::Converter__Fuse_Elements_TextAlignment*>(::uPtr< ::app::Fuse::Animations::Change__Fuse_Elements_TextAlignment*>(__this->Animator_1)->ContinuousConverter)->Out(value), strength);
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Animations\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

ContinuousTrackChangeState__Fuse_Elements_TextWrapping__uType* ContinuousTrackChangeState__Fuse_Elements_TextWrapping__typeof()
{
    static ::uStaticStrong<ContinuousTrackChangeState__Fuse_Elements_TextWrapping__uType*> type;
    if (type != NULL) return type;

    type = (ContinuousTrackChangeState__Fuse_Elements_TextWrapping__uType*)::uAllocClassType(sizeof(ContinuousTrackChangeState__Fuse_Elements_TextWrapping__uType), "Fuse.Animations.ContinuousTrackChangeState<Fuse.Elements.TextWrapping>", false, 0, 2, 0);

    type->SetBaseType(::app::Fuse::Animations::TrackAnimatorState__typeof());
    type->__fp_Disable = (void(*)(::app::Fuse::Animations::AnimatorState*))ContinuousTrackChangeState__Fuse_Elements_TextWrapping__Disable;
    type->__fp_SeekValue = (void(*)(::app::Fuse::Animations::TrackAnimatorState*, ::app::Uno::Float4, float))ContinuousTrackChangeState__Fuse_Elements_TextWrapping__SeekValue;

    type->SetStrongRefs(
        "Animator", offsetof(ContinuousTrackChangeState__Fuse_Elements_TextWrapping, Animator_1),
        "mixHandle", offsetof(ContinuousTrackChangeState__Fuse_Elements_TextWrapping, mixHandle));

    return type;
}

void ContinuousTrackChangeState__Fuse_Elements_TextWrapping___ObjInit_2(ContinuousTrackChangeState__Fuse_Elements_TextWrapping* __this, ::app::Fuse::Animations::Change__Fuse_Elements_TextWrapping* animator, ::app::Fuse::Animations::CreateStateParams* p)
{
    ::app::Fuse::Animations::TrackAnimatorState___ObjInit_1(__this, (::app::Fuse::Animations::TrackAnimator*)animator, p, NULL);
    __this->Animator_1 = animator;
    __this->mixHandle = ::app::Fuse::Animations::IMixer::Register__Fuse_Elements_TextWrapping(::uPtr< ::uObject*>(::uPtr< ::app::Fuse::Animations::Change__Fuse_Elements_TextWrapping*>(__this->Animator_1)->Mixer), ::uPtr< ::app::Fuse::Animations::Change__Fuse_Elements_TextWrapping*>(__this->Animator_1)->Target(), ::uPtr< ::app::Fuse::Animations::Change__Fuse_Elements_TextWrapping*>(__this->Animator_1)->MixOp());
}

void ContinuousTrackChangeState__Fuse_Elements_TextWrapping__Disable(ContinuousTrackChangeState__Fuse_Elements_TextWrapping* __this)
{
    if (__this->mixHandle == NULL)
    {
        return;
    }

    ::app::Fuse::Animations::IMixerHandle__Fuse_Elements_TextWrapping::Unregister(::uPtr< ::uObject*>(__this->mixHandle));
    __this->mixHandle = NULL;
}

ContinuousTrackChangeState__Fuse_Elements_TextWrapping* ContinuousTrackChangeState__Fuse_Elements_TextWrapping__New_1(::uStatic* __this, ::app::Fuse::Animations::Change__Fuse_Elements_TextWrapping* animator, ::app::Fuse::Animations::CreateStateParams* p)
{
    ContinuousTrackChangeState__Fuse_Elements_TextWrapping* inst = (ContinuousTrackChangeState__Fuse_Elements_TextWrapping*)::uAllocObject(sizeof(ContinuousTrackChangeState__Fuse_Elements_TextWrapping), ContinuousTrackChangeState__Fuse_Elements_TextWrapping__typeof());
    inst->_ObjInit_2(animator, p);
    return inst;
}

void ContinuousTrackChangeState__Fuse_Elements_TextWrapping__SeekValue(ContinuousTrackChangeState__Fuse_Elements_TextWrapping* __this, ::app::Uno::Float4 value, float strength)
{
    if (__this->mixHandle == NULL)
    {
        ::app::Uno::Diagnostics::Debug__Log_5(NULL, ::uGetConstString("Invalid Seek"), 1, ::uGetConstString("C:\\ProgramData\\Uno\\Packages\\Fuse.Animations\\0.11.3\\$.uno"), 454);
        return;
    }

    ::app::Fuse::Animations::IMixerHandle__Fuse_Elements_TextWrapping::Set(::uPtr< ::uObject*>(__this->mixHandle), ::uPtr< ::app::Fuse::Animations::Converter__Fuse_Elements_TextWrapping*>(::uPtr< ::app::Fuse::Animations::Change__Fuse_Elements_TextWrapping*>(__this->Animator_1)->ContinuousConverter)->Out(value), strength);
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Animations\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

ContinuousTrackChangeState__Fuse_Elements_Visibility__uType* ContinuousTrackChangeState__Fuse_Elements_Visibility__typeof()
{
    static ::uStaticStrong<ContinuousTrackChangeState__Fuse_Elements_Visibility__uType*> type;
    if (type != NULL) return type;

    type = (ContinuousTrackChangeState__Fuse_Elements_Visibility__uType*)::uAllocClassType(sizeof(ContinuousTrackChangeState__Fuse_Elements_Visibility__uType), "Fuse.Animations.ContinuousTrackChangeState<Fuse.Elements.Visibility>", false, 0, 2, 0);

    type->SetBaseType(::app::Fuse::Animations::TrackAnimatorState__typeof());
    type->__fp_Disable = (void(*)(::app::Fuse::Animations::AnimatorState*))ContinuousTrackChangeState__Fuse_Elements_Visibility__Disable;
    type->__fp_SeekValue = (void(*)(::app::Fuse::Animations::TrackAnimatorState*, ::app::Uno::Float4, float))ContinuousTrackChangeState__Fuse_Elements_Visibility__SeekValue;

    type->SetStrongRefs(
        "Animator", offsetof(ContinuousTrackChangeState__Fuse_Elements_Visibility, Animator_1),
        "mixHandle", offsetof(ContinuousTrackChangeState__Fuse_Elements_Visibility, mixHandle));

    return type;
}

void ContinuousTrackChangeState__Fuse_Elements_Visibility___ObjInit_2(ContinuousTrackChangeState__Fuse_Elements_Visibility* __this, ::app::Fuse::Animations::Change__Fuse_Elements_Visibility* animator, ::app::Fuse::Animations::CreateStateParams* p)
{
    ::app::Fuse::Animations::TrackAnimatorState___ObjInit_1(__this, (::app::Fuse::Animations::TrackAnimator*)animator, p, NULL);
    __this->Animator_1 = animator;
    __this->mixHandle = ::app::Fuse::Animations::IMixer::Register__Fuse_Elements_Visibility(::uPtr< ::uObject*>(::uPtr< ::app::Fuse::Animations::Change__Fuse_Elements_Visibility*>(__this->Animator_1)->Mixer), ::uPtr< ::app::Fuse::Animations::Change__Fuse_Elements_Visibility*>(__this->Animator_1)->Target(), ::uPtr< ::app::Fuse::Animations::Change__Fuse_Elements_Visibility*>(__this->Animator_1)->MixOp());
}

void ContinuousTrackChangeState__Fuse_Elements_Visibility__Disable(ContinuousTrackChangeState__Fuse_Elements_Visibility* __this)
{
    if (__this->mixHandle == NULL)
    {
        return;
    }

    ::app::Fuse::Animations::IMixerHandle__Fuse_Elements_Visibility::Unregister(::uPtr< ::uObject*>(__this->mixHandle));
    __this->mixHandle = NULL;
}

ContinuousTrackChangeState__Fuse_Elements_Visibility* ContinuousTrackChangeState__Fuse_Elements_Visibility__New_1(::uStatic* __this, ::app::Fuse::Animations::Change__Fuse_Elements_Visibility* animator, ::app::Fuse::Animations::CreateStateParams* p)
{
    ContinuousTrackChangeState__Fuse_Elements_Visibility* inst = (ContinuousTrackChangeState__Fuse_Elements_Visibility*)::uAllocObject(sizeof(ContinuousTrackChangeState__Fuse_Elements_Visibility), ContinuousTrackChangeState__Fuse_Elements_Visibility__typeof());
    inst->_ObjInit_2(animator, p);
    return inst;
}

void ContinuousTrackChangeState__Fuse_Elements_Visibility__SeekValue(ContinuousTrackChangeState__Fuse_Elements_Visibility* __this, ::app::Uno::Float4 value, float strength)
{
    if (__this->mixHandle == NULL)
    {
        ::app::Uno::Diagnostics::Debug__Log_5(NULL, ::uGetConstString("Invalid Seek"), 1, ::uGetConstString("C:\\ProgramData\\Uno\\Packages\\Fuse.Animations\\0.11.3\\$.uno"), 454);
        return;
    }

    ::app::Fuse::Animations::IMixerHandle__Fuse_Elements_Visibility::Set(::uPtr< ::uObject*>(__this->mixHandle), ::uPtr< ::app::Fuse::Animations::Converter__Fuse_Elements_Visibility*>(::uPtr< ::app::Fuse::Animations::Change__Fuse_Elements_Visibility*>(__this->Animator_1)->ContinuousConverter)->Out(value), strength);
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Animations\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

ContinuousTrackChangeState__Fuse_Font__uType* ContinuousTrackChangeState__Fuse_Font__typeof()
{
    static ::uStaticStrong<ContinuousTrackChangeState__Fuse_Font__uType*> type;
    if (type != NULL) return type;

    type = (ContinuousTrackChangeState__Fuse_Font__uType*)::uAllocClassType(sizeof(ContinuousTrackChangeState__Fuse_Font__uType), "Fuse.Animations.ContinuousTrackChangeState<Fuse.Font>", false, 0, 2, 0);

    type->SetBaseType(::app::Fuse::Animations::TrackAnimatorState__typeof());
    type->__fp_Disable = (void(*)(::app::Fuse::Animations::AnimatorState*))ContinuousTrackChangeState__Fuse_Font__Disable;
    type->__fp_SeekValue = (void(*)(::app::Fuse::Animations::TrackAnimatorState*, ::app::Uno::Float4, float))ContinuousTrackChangeState__Fuse_Font__SeekValue;

    type->SetStrongRefs(
        "Animator", offsetof(ContinuousTrackChangeState__Fuse_Font, Animator_1),
        "mixHandle", offsetof(ContinuousTrackChangeState__Fuse_Font, mixHandle));

    return type;
}

void ContinuousTrackChangeState__Fuse_Font___ObjInit_2(ContinuousTrackChangeState__Fuse_Font* __this, ::app::Fuse::Animations::Change__Fuse_Font* animator, ::app::Fuse::Animations::CreateStateParams* p)
{
    ::app::Fuse::Animations::TrackAnimatorState___ObjInit_1(__this, (::app::Fuse::Animations::TrackAnimator*)animator, p, NULL);
    __this->Animator_1 = animator;
    __this->mixHandle = ::app::Fuse::Animations::IMixer::Register__Fuse_Font(::uPtr< ::uObject*>(::uPtr< ::app::Fuse::Animations::Change__Fuse_Font*>(__this->Animator_1)->Mixer), ::uPtr< ::app::Fuse::Animations::Change__Fuse_Font*>(__this->Animator_1)->Target(), ::uPtr< ::app::Fuse::Animations::Change__Fuse_Font*>(__this->Animator_1)->MixOp());
}

void ContinuousTrackChangeState__Fuse_Font__Disable(ContinuousTrackChangeState__Fuse_Font* __this)
{
    if (__this->mixHandle == NULL)
    {
        return;
    }

    ::app::Fuse::Animations::IMixerHandle__Fuse_Font::Unregister(::uPtr< ::uObject*>(__this->mixHandle));
    __this->mixHandle = NULL;
}

ContinuousTrackChangeState__Fuse_Font* ContinuousTrackChangeState__Fuse_Font__New_1(::uStatic* __this, ::app::Fuse::Animations::Change__Fuse_Font* animator, ::app::Fuse::Animations::CreateStateParams* p)
{
    ContinuousTrackChangeState__Fuse_Font* inst = (ContinuousTrackChangeState__Fuse_Font*)::uAllocObject(sizeof(ContinuousTrackChangeState__Fuse_Font), ContinuousTrackChangeState__Fuse_Font__typeof());
    inst->_ObjInit_2(animator, p);
    return inst;
}

void ContinuousTrackChangeState__Fuse_Font__SeekValue(ContinuousTrackChangeState__Fuse_Font* __this, ::app::Uno::Float4 value, float strength)
{
    if (__this->mixHandle == NULL)
    {
        ::app::Uno::Diagnostics::Debug__Log_5(NULL, ::uGetConstString("Invalid Seek"), 1, ::uGetConstString("C:\\ProgramData\\Uno\\Packages\\Fuse.Animations\\0.11.3\\$.uno"), 454);
        return;
    }

    ::app::Fuse::Animations::IMixerHandle__Fuse_Font::Set(::uPtr< ::uObject*>(__this->mixHandle), ::uPtr< ::app::Fuse::Animations::Converter__Fuse_Font*>(::uPtr< ::app::Fuse::Animations::Change__Fuse_Font*>(__this->Animator_1)->ContinuousConverter)->Out(value), strength);
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Animations\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

ContinuousTrackChangeState__Fuse_Gestures_Edge__uType* ContinuousTrackChangeState__Fuse_Gestures_Edge__typeof()
{
    static ::uStaticStrong<ContinuousTrackChangeState__Fuse_Gestures_Edge__uType*> type;
    if (type != NULL) return type;

    type = (ContinuousTrackChangeState__Fuse_Gestures_Edge__uType*)::uAllocClassType(sizeof(ContinuousTrackChangeState__Fuse_Gestures_Edge__uType), "Fuse.Animations.ContinuousTrackChangeState<Fuse.Gestures.Edge>", false, 0, 2, 0);

    type->SetBaseType(::app::Fuse::Animations::TrackAnimatorState__typeof());
    type->__fp_Disable = (void(*)(::app::Fuse::Animations::AnimatorState*))ContinuousTrackChangeState__Fuse_Gestures_Edge__Disable;
    type->__fp_SeekValue = (void(*)(::app::Fuse::Animations::TrackAnimatorState*, ::app::Uno::Float4, float))ContinuousTrackChangeState__Fuse_Gestures_Edge__SeekValue;

    type->SetStrongRefs(
        "Animator", offsetof(ContinuousTrackChangeState__Fuse_Gestures_Edge, Animator_1),
        "mixHandle", offsetof(ContinuousTrackChangeState__Fuse_Gestures_Edge, mixHandle));

    return type;
}

void ContinuousTrackChangeState__Fuse_Gestures_Edge___ObjInit_2(ContinuousTrackChangeState__Fuse_Gestures_Edge* __this, ::app::Fuse::Animations::Change__Fuse_Gestures_Edge* animator, ::app::Fuse::Animations::CreateStateParams* p)
{
    ::app::Fuse::Animations::TrackAnimatorState___ObjInit_1(__this, (::app::Fuse::Animations::TrackAnimator*)animator, p, NULL);
    __this->Animator_1 = animator;
    __this->mixHandle = ::app::Fuse::Animations::IMixer::Register__Fuse_Gestures_Edge(::uPtr< ::uObject*>(::uPtr< ::app::Fuse::Animations::Change__Fuse_Gestures_Edge*>(__this->Animator_1)->Mixer), ::uPtr< ::app::Fuse::Animations::Change__Fuse_Gestures_Edge*>(__this->Animator_1)->Target(), ::uPtr< ::app::Fuse::Animations::Change__Fuse_Gestures_Edge*>(__this->Animator_1)->MixOp());
}

void ContinuousTrackChangeState__Fuse_Gestures_Edge__Disable(ContinuousTrackChangeState__Fuse_Gestures_Edge* __this)
{
    if (__this->mixHandle == NULL)
    {
        return;
    }

    ::app::Fuse::Animations::IMixerHandle__Fuse_Gestures_Edge::Unregister(::uPtr< ::uObject*>(__this->mixHandle));
    __this->mixHandle = NULL;
}

ContinuousTrackChangeState__Fuse_Gestures_Edge* ContinuousTrackChangeState__Fuse_Gestures_Edge__New_1(::uStatic* __this, ::app::Fuse::Animations::Change__Fuse_Gestures_Edge* animator, ::app::Fuse::Animations::CreateStateParams* p)
{
    ContinuousTrackChangeState__Fuse_Gestures_Edge* inst = (ContinuousTrackChangeState__Fuse_Gestures_Edge*)::uAllocObject(sizeof(ContinuousTrackChangeState__Fuse_Gestures_Edge), ContinuousTrackChangeState__Fuse_Gestures_Edge__typeof());
    inst->_ObjInit_2(animator, p);
    return inst;
}

void ContinuousTrackChangeState__Fuse_Gestures_Edge__SeekValue(ContinuousTrackChangeState__Fuse_Gestures_Edge* __this, ::app::Uno::Float4 value, float strength)
{
    if (__this->mixHandle == NULL)
    {
        ::app::Uno::Diagnostics::Debug__Log_5(NULL, ::uGetConstString("Invalid Seek"), 1, ::uGetConstString("C:\\ProgramData\\Uno\\Packages\\Fuse.Animations\\0.11.3\\$.uno"), 454);
        return;
    }

    ::app::Fuse::Animations::IMixerHandle__Fuse_Gestures_Edge::Set(::uPtr< ::uObject*>(__this->mixHandle), ::uPtr< ::app::Fuse::Animations::Converter__Fuse_Gestures_Edge*>(::uPtr< ::app::Fuse::Animations::Change__Fuse_Gestures_Edge*>(__this->Animator_1)->ContinuousConverter)->Out(value), strength);
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Animations\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

ContinuousTrackChangeState__Fuse_Gestures_ScrollDirections__uType* ContinuousTrackChangeState__Fuse_Gestures_ScrollDirections__typeof()
{
    static ::uStaticStrong<ContinuousTrackChangeState__Fuse_Gestures_ScrollDirections__uType*> type;
    if (type != NULL) return type;

    type = (ContinuousTrackChangeState__Fuse_Gestures_ScrollDirections__uType*)::uAllocClassType(sizeof(ContinuousTrackChangeState__Fuse_Gestures_ScrollDirections__uType), "Fuse.Animations.ContinuousTrackChangeState<Fuse.Gestures.ScrollDirections>", false, 0, 2, 0);

    type->SetBaseType(::app::Fuse::Animations::TrackAnimatorState__typeof());
    type->__fp_Disable = (void(*)(::app::Fuse::Animations::AnimatorState*))ContinuousTrackChangeState__Fuse_Gestures_ScrollDirections__Disable;
    type->__fp_SeekValue = (void(*)(::app::Fuse::Animations::TrackAnimatorState*, ::app::Uno::Float4, float))ContinuousTrackChangeState__Fuse_Gestures_ScrollDirections__SeekValue;

    type->SetStrongRefs(
        "Animator", offsetof(ContinuousTrackChangeState__Fuse_Gestures_ScrollDirections, Animator_1),
        "mixHandle", offsetof(ContinuousTrackChangeState__Fuse_Gestures_ScrollDirections, mixHandle));

    return type;
}

void ContinuousTrackChangeState__Fuse_Gestures_ScrollDirections___ObjInit_2(ContinuousTrackChangeState__Fuse_Gestures_ScrollDirections* __this, ::app::Fuse::Animations::Change__Fuse_Gestures_ScrollDirections* animator, ::app::Fuse::Animations::CreateStateParams* p)
{
    ::app::Fuse::Animations::TrackAnimatorState___ObjInit_1(__this, (::app::Fuse::Animations::TrackAnimator*)animator, p, NULL);
    __this->Animator_1 = animator;
    __this->mixHandle = ::app::Fuse::Animations::IMixer::Register__Fuse_Gestures_ScrollDirections(::uPtr< ::uObject*>(::uPtr< ::app::Fuse::Animations::Change__Fuse_Gestures_ScrollDirections*>(__this->Animator_1)->Mixer), ::uPtr< ::app::Fuse::Animations::Change__Fuse_Gestures_ScrollDirections*>(__this->Animator_1)->Target(), ::uPtr< ::app::Fuse::Animations::Change__Fuse_Gestures_ScrollDirections*>(__this->Animator_1)->MixOp());
}

void ContinuousTrackChangeState__Fuse_Gestures_ScrollDirections__Disable(ContinuousTrackChangeState__Fuse_Gestures_ScrollDirections* __this)
{
    if (__this->mixHandle == NULL)
    {
        return;
    }

    ::app::Fuse::Animations::IMixerHandle__Fuse_Gestures_ScrollDirections::Unregister(::uPtr< ::uObject*>(__this->mixHandle));
    __this->mixHandle = NULL;
}

ContinuousTrackChangeState__Fuse_Gestures_ScrollDirections* ContinuousTrackChangeState__Fuse_Gestures_ScrollDirections__New_1(::uStatic* __this, ::app::Fuse::Animations::Change__Fuse_Gestures_ScrollDirections* animator, ::app::Fuse::Animations::CreateStateParams* p)
{
    ContinuousTrackChangeState__Fuse_Gestures_ScrollDirections* inst = (ContinuousTrackChangeState__Fuse_Gestures_ScrollDirections*)::uAllocObject(sizeof(ContinuousTrackChangeState__Fuse_Gestures_ScrollDirections), ContinuousTrackChangeState__Fuse_Gestures_ScrollDirections__typeof());
    inst->_ObjInit_2(animator, p);
    return inst;
}

void ContinuousTrackChangeState__Fuse_Gestures_ScrollDirections__SeekValue(ContinuousTrackChangeState__Fuse_Gestures_ScrollDirections* __this, ::app::Uno::Float4 value, float strength)
{
    if (__this->mixHandle == NULL)
    {
        ::app::Uno::Diagnostics::Debug__Log_5(NULL, ::uGetConstString("Invalid Seek"), 1, ::uGetConstString("C:\\ProgramData\\Uno\\Packages\\Fuse.Animations\\0.11.3\\$.uno"), 454);
        return;
    }

    ::app::Fuse::Animations::IMixerHandle__Fuse_Gestures_ScrollDirections::Set(::uPtr< ::uObject*>(__this->mixHandle), ::uPtr< ::app::Fuse::Animations::Converter__Fuse_Gestures_ScrollDirections*>(::uPtr< ::app::Fuse::Animations::Change__Fuse_Gestures_ScrollDirections*>(__this->Animator_1)->ContinuousConverter)->Out(value), strength);
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Animations\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

ContinuousTrackChangeState__Fuse_Layouts_Dock__uType* ContinuousTrackChangeState__Fuse_Layouts_Dock__typeof()
{
    static ::uStaticStrong<ContinuousTrackChangeState__Fuse_Layouts_Dock__uType*> type;
    if (type != NULL) return type;

    type = (ContinuousTrackChangeState__Fuse_Layouts_Dock__uType*)::uAllocClassType(sizeof(ContinuousTrackChangeState__Fuse_Layouts_Dock__uType), "Fuse.Animations.ContinuousTrackChangeState<Fuse.Layouts.Dock>", false, 0, 2, 0);

    type->SetBaseType(::app::Fuse::Animations::TrackAnimatorState__typeof());
    type->__fp_Disable = (void(*)(::app::Fuse::Animations::AnimatorState*))ContinuousTrackChangeState__Fuse_Layouts_Dock__Disable;
    type->__fp_SeekValue = (void(*)(::app::Fuse::Animations::TrackAnimatorState*, ::app::Uno::Float4, float))ContinuousTrackChangeState__Fuse_Layouts_Dock__SeekValue;

    type->SetStrongRefs(
        "Animator", offsetof(ContinuousTrackChangeState__Fuse_Layouts_Dock, Animator_1),
        "mixHandle", offsetof(ContinuousTrackChangeState__Fuse_Layouts_Dock, mixHandle));

    return type;
}

void ContinuousTrackChangeState__Fuse_Layouts_Dock___ObjInit_2(ContinuousTrackChangeState__Fuse_Layouts_Dock* __this, ::app::Fuse::Animations::Change__Fuse_Layouts_Dock* animator, ::app::Fuse::Animations::CreateStateParams* p)
{
    ::app::Fuse::Animations::TrackAnimatorState___ObjInit_1(__this, (::app::Fuse::Animations::TrackAnimator*)animator, p, NULL);
    __this->Animator_1 = animator;
    __this->mixHandle = ::app::Fuse::Animations::IMixer::Register__Fuse_Layouts_Dock(::uPtr< ::uObject*>(::uPtr< ::app::Fuse::Animations::Change__Fuse_Layouts_Dock*>(__this->Animator_1)->Mixer), ::uPtr< ::app::Fuse::Animations::Change__Fuse_Layouts_Dock*>(__this->Animator_1)->Target(), ::uPtr< ::app::Fuse::Animations::Change__Fuse_Layouts_Dock*>(__this->Animator_1)->MixOp());
}

void ContinuousTrackChangeState__Fuse_Layouts_Dock__Disable(ContinuousTrackChangeState__Fuse_Layouts_Dock* __this)
{
    if (__this->mixHandle == NULL)
    {
        return;
    }

    ::app::Fuse::Animations::IMixerHandle__Fuse_Layouts_Dock::Unregister(::uPtr< ::uObject*>(__this->mixHandle));
    __this->mixHandle = NULL;
}

ContinuousTrackChangeState__Fuse_Layouts_Dock* ContinuousTrackChangeState__Fuse_Layouts_Dock__New_1(::uStatic* __this, ::app::Fuse::Animations::Change__Fuse_Layouts_Dock* animator, ::app::Fuse::Animations::CreateStateParams* p)
{
    ContinuousTrackChangeState__Fuse_Layouts_Dock* inst = (ContinuousTrackChangeState__Fuse_Layouts_Dock*)::uAllocObject(sizeof(ContinuousTrackChangeState__Fuse_Layouts_Dock), ContinuousTrackChangeState__Fuse_Layouts_Dock__typeof());
    inst->_ObjInit_2(animator, p);
    return inst;
}

void ContinuousTrackChangeState__Fuse_Layouts_Dock__SeekValue(ContinuousTrackChangeState__Fuse_Layouts_Dock* __this, ::app::Uno::Float4 value, float strength)
{
    if (__this->mixHandle == NULL)
    {
        ::app::Uno::Diagnostics::Debug__Log_5(NULL, ::uGetConstString("Invalid Seek"), 1, ::uGetConstString("C:\\ProgramData\\Uno\\Packages\\Fuse.Animations\\0.11.3\\$.uno"), 454);
        return;
    }

    ::app::Fuse::Animations::IMixerHandle__Fuse_Layouts_Dock::Set(::uPtr< ::uObject*>(__this->mixHandle), ::uPtr< ::app::Fuse::Animations::Converter__Fuse_Layouts_Dock*>(::uPtr< ::app::Fuse::Animations::Change__Fuse_Layouts_Dock*>(__this->Animator_1)->ContinuousConverter)->Out(value), strength);
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Animations\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

ContinuousTrackChangeState__Fuse_Layouts_FlowDirection__uType* ContinuousTrackChangeState__Fuse_Layouts_FlowDirection__typeof()
{
    static ::uStaticStrong<ContinuousTrackChangeState__Fuse_Layouts_FlowDirection__uType*> type;
    if (type != NULL) return type;

    type = (ContinuousTrackChangeState__Fuse_Layouts_FlowDirection__uType*)::uAllocClassType(sizeof(ContinuousTrackChangeState__Fuse_Layouts_FlowDirection__uType), "Fuse.Animations.ContinuousTrackChangeState<Fuse.Layouts.FlowDirection>", false, 0, 2, 0);

    type->SetBaseType(::app::Fuse::Animations::TrackAnimatorState__typeof());
    type->__fp_Disable = (void(*)(::app::Fuse::Animations::AnimatorState*))ContinuousTrackChangeState__Fuse_Layouts_FlowDirection__Disable;
    type->__fp_SeekValue = (void(*)(::app::Fuse::Animations::TrackAnimatorState*, ::app::Uno::Float4, float))ContinuousTrackChangeState__Fuse_Layouts_FlowDirection__SeekValue;

    type->SetStrongRefs(
        "Animator", offsetof(ContinuousTrackChangeState__Fuse_Layouts_FlowDirection, Animator_1),
        "mixHandle", offsetof(ContinuousTrackChangeState__Fuse_Layouts_FlowDirection, mixHandle));

    return type;
}

void ContinuousTrackChangeState__Fuse_Layouts_FlowDirection___ObjInit_2(ContinuousTrackChangeState__Fuse_Layouts_FlowDirection* __this, ::app::Fuse::Animations::Change__Fuse_Layouts_FlowDirection* animator, ::app::Fuse::Animations::CreateStateParams* p)
{
    ::app::Fuse::Animations::TrackAnimatorState___ObjInit_1(__this, (::app::Fuse::Animations::TrackAnimator*)animator, p, NULL);
    __this->Animator_1 = animator;
    __this->mixHandle = ::app::Fuse::Animations::IMixer::Register__Fuse_Layouts_FlowDirection(::uPtr< ::uObject*>(::uPtr< ::app::Fuse::Animations::Change__Fuse_Layouts_FlowDirection*>(__this->Animator_1)->Mixer), ::uPtr< ::app::Fuse::Animations::Change__Fuse_Layouts_FlowDirection*>(__this->Animator_1)->Target(), ::uPtr< ::app::Fuse::Animations::Change__Fuse_Layouts_FlowDirection*>(__this->Animator_1)->MixOp());
}

void ContinuousTrackChangeState__Fuse_Layouts_FlowDirection__Disable(ContinuousTrackChangeState__Fuse_Layouts_FlowDirection* __this)
{
    if (__this->mixHandle == NULL)
    {
        return;
    }

    ::app::Fuse::Animations::IMixerHandle__Fuse_Layouts_FlowDirection::Unregister(::uPtr< ::uObject*>(__this->mixHandle));
    __this->mixHandle = NULL;
}

ContinuousTrackChangeState__Fuse_Layouts_FlowDirection* ContinuousTrackChangeState__Fuse_Layouts_FlowDirection__New_1(::uStatic* __this, ::app::Fuse::Animations::Change__Fuse_Layouts_FlowDirection* animator, ::app::Fuse::Animations::CreateStateParams* p)
{
    ContinuousTrackChangeState__Fuse_Layouts_FlowDirection* inst = (ContinuousTrackChangeState__Fuse_Layouts_FlowDirection*)::uAllocObject(sizeof(ContinuousTrackChangeState__Fuse_Layouts_FlowDirection), ContinuousTrackChangeState__Fuse_Layouts_FlowDirection__typeof());
    inst->_ObjInit_2(animator, p);
    return inst;
}

void ContinuousTrackChangeState__Fuse_Layouts_FlowDirection__SeekValue(ContinuousTrackChangeState__Fuse_Layouts_FlowDirection* __this, ::app::Uno::Float4 value, float strength)
{
    if (__this->mixHandle == NULL)
    {
        ::app::Uno::Diagnostics::Debug__Log_5(NULL, ::uGetConstString("Invalid Seek"), 1, ::uGetConstString("C:\\ProgramData\\Uno\\Packages\\Fuse.Animations\\0.11.3\\$.uno"), 454);
        return;
    }

    ::app::Fuse::Animations::IMixerHandle__Fuse_Layouts_FlowDirection::Set(::uPtr< ::uObject*>(__this->mixHandle), ::uPtr< ::app::Fuse::Animations::Converter__Fuse_Layouts_FlowDirection*>(::uPtr< ::app::Fuse::Animations::Change__Fuse_Layouts_FlowDirection*>(__this->Animator_1)->ContinuousConverter)->Out(value), strength);
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Animations\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

ContinuousTrackChangeState__Fuse_Layouts_Metric__uType* ContinuousTrackChangeState__Fuse_Layouts_Metric__typeof()
{
    static ::uStaticStrong<ContinuousTrackChangeState__Fuse_Layouts_Metric__uType*> type;
    if (type != NULL) return type;

    type = (ContinuousTrackChangeState__Fuse_Layouts_Metric__uType*)::uAllocClassType(sizeof(ContinuousTrackChangeState__Fuse_Layouts_Metric__uType), "Fuse.Animations.ContinuousTrackChangeState<Fuse.Layouts.Metric>", false, 0, 2, 0);

    type->SetBaseType(::app::Fuse::Animations::TrackAnimatorState__typeof());
    type->__fp_Disable = (void(*)(::app::Fuse::Animations::AnimatorState*))ContinuousTrackChangeState__Fuse_Layouts_Metric__Disable;
    type->__fp_SeekValue = (void(*)(::app::Fuse::Animations::TrackAnimatorState*, ::app::Uno::Float4, float))ContinuousTrackChangeState__Fuse_Layouts_Metric__SeekValue;

    type->SetStrongRefs(
        "Animator", offsetof(ContinuousTrackChangeState__Fuse_Layouts_Metric, Animator_1),
        "mixHandle", offsetof(ContinuousTrackChangeState__Fuse_Layouts_Metric, mixHandle));

    return type;
}

void ContinuousTrackChangeState__Fuse_Layouts_Metric___ObjInit_2(ContinuousTrackChangeState__Fuse_Layouts_Metric* __this, ::app::Fuse::Animations::Change__Fuse_Layouts_Metric* animator, ::app::Fuse::Animations::CreateStateParams* p)
{
    ::app::Fuse::Animations::TrackAnimatorState___ObjInit_1(__this, (::app::Fuse::Animations::TrackAnimator*)animator, p, NULL);
    __this->Animator_1 = animator;
    __this->mixHandle = ::app::Fuse::Animations::IMixer::Register__Fuse_Layouts_Metric(::uPtr< ::uObject*>(::uPtr< ::app::Fuse::Animations::Change__Fuse_Layouts_Metric*>(__this->Animator_1)->Mixer), ::uPtr< ::app::Fuse::Animations::Change__Fuse_Layouts_Metric*>(__this->Animator_1)->Target(), ::uPtr< ::app::Fuse::Animations::Change__Fuse_Layouts_Metric*>(__this->Animator_1)->MixOp());
}

void ContinuousTrackChangeState__Fuse_Layouts_Metric__Disable(ContinuousTrackChangeState__Fuse_Layouts_Metric* __this)
{
    if (__this->mixHandle == NULL)
    {
        return;
    }

    ::app::Fuse::Animations::IMixerHandle__Fuse_Layouts_Metric::Unregister(::uPtr< ::uObject*>(__this->mixHandle));
    __this->mixHandle = NULL;
}

ContinuousTrackChangeState__Fuse_Layouts_Metric* ContinuousTrackChangeState__Fuse_Layouts_Metric__New_1(::uStatic* __this, ::app::Fuse::Animations::Change__Fuse_Layouts_Metric* animator, ::app::Fuse::Animations::CreateStateParams* p)
{
    ContinuousTrackChangeState__Fuse_Layouts_Metric* inst = (ContinuousTrackChangeState__Fuse_Layouts_Metric*)::uAllocObject(sizeof(ContinuousTrackChangeState__Fuse_Layouts_Metric), ContinuousTrackChangeState__Fuse_Layouts_Metric__typeof());
    inst->_ObjInit_2(animator, p);
    return inst;
}

void ContinuousTrackChangeState__Fuse_Layouts_Metric__SeekValue(ContinuousTrackChangeState__Fuse_Layouts_Metric* __this, ::app::Uno::Float4 value, float strength)
{
    if (__this->mixHandle == NULL)
    {
        ::app::Uno::Diagnostics::Debug__Log_5(NULL, ::uGetConstString("Invalid Seek"), 1, ::uGetConstString("C:\\ProgramData\\Uno\\Packages\\Fuse.Animations\\0.11.3\\$.uno"), 454);
        return;
    }

    ::app::Fuse::Animations::IMixerHandle__Fuse_Layouts_Metric::Set(::uPtr< ::uObject*>(__this->mixHandle), ::uPtr< ::app::Fuse::Animations::Converter__Fuse_Layouts_Metric*>(::uPtr< ::app::Fuse::Animations::Change__Fuse_Layouts_Metric*>(__this->Animator_1)->ContinuousConverter)->Out(value), strength);
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Animations\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

ContinuousTrackChangeState__Fuse_Layouts_Orientation__uType* ContinuousTrackChangeState__Fuse_Layouts_Orientation__typeof()
{
    static ::uStaticStrong<ContinuousTrackChangeState__Fuse_Layouts_Orientation__uType*> type;
    if (type != NULL) return type;

    type = (ContinuousTrackChangeState__Fuse_Layouts_Orientation__uType*)::uAllocClassType(sizeof(ContinuousTrackChangeState__Fuse_Layouts_Orientation__uType), "Fuse.Animations.ContinuousTrackChangeState<Fuse.Layouts.Orientation>", false, 0, 2, 0);

    type->SetBaseType(::app::Fuse::Animations::TrackAnimatorState__typeof());
    type->__fp_Disable = (void(*)(::app::Fuse::Animations::AnimatorState*))ContinuousTrackChangeState__Fuse_Layouts_Orientation__Disable;
    type->__fp_SeekValue = (void(*)(::app::Fuse::Animations::TrackAnimatorState*, ::app::Uno::Float4, float))ContinuousTrackChangeState__Fuse_Layouts_Orientation__SeekValue;

    type->SetStrongRefs(
        "Animator", offsetof(ContinuousTrackChangeState__Fuse_Layouts_Orientation, Animator_1),
        "mixHandle", offsetof(ContinuousTrackChangeState__Fuse_Layouts_Orientation, mixHandle));

    return type;
}

void ContinuousTrackChangeState__Fuse_Layouts_Orientation___ObjInit_2(ContinuousTrackChangeState__Fuse_Layouts_Orientation* __this, ::app::Fuse::Animations::Change__Fuse_Layouts_Orientation* animator, ::app::Fuse::Animations::CreateStateParams* p)
{
    ::app::Fuse::Animations::TrackAnimatorState___ObjInit_1(__this, (::app::Fuse::Animations::TrackAnimator*)animator, p, NULL);
    __this->Animator_1 = animator;
    __this->mixHandle = ::app::Fuse::Animations::IMixer::Register__Fuse_Layouts_Orientation(::uPtr< ::uObject*>(::uPtr< ::app::Fuse::Animations::Change__Fuse_Layouts_Orientation*>(__this->Animator_1)->Mixer), ::uPtr< ::app::Fuse::Animations::Change__Fuse_Layouts_Orientation*>(__this->Animator_1)->Target(), ::uPtr< ::app::Fuse::Animations::Change__Fuse_Layouts_Orientation*>(__this->Animator_1)->MixOp());
}

void ContinuousTrackChangeState__Fuse_Layouts_Orientation__Disable(ContinuousTrackChangeState__Fuse_Layouts_Orientation* __this)
{
    if (__this->mixHandle == NULL)
    {
        return;
    }

    ::app::Fuse::Animations::IMixerHandle__Fuse_Layouts_Orientation::Unregister(::uPtr< ::uObject*>(__this->mixHandle));
    __this->mixHandle = NULL;
}

ContinuousTrackChangeState__Fuse_Layouts_Orientation* ContinuousTrackChangeState__Fuse_Layouts_Orientation__New_1(::uStatic* __this, ::app::Fuse::Animations::Change__Fuse_Layouts_Orientation* animator, ::app::Fuse::Animations::CreateStateParams* p)
{
    ContinuousTrackChangeState__Fuse_Layouts_Orientation* inst = (ContinuousTrackChangeState__Fuse_Layouts_Orientation*)::uAllocObject(sizeof(ContinuousTrackChangeState__Fuse_Layouts_Orientation), ContinuousTrackChangeState__Fuse_Layouts_Orientation__typeof());
    inst->_ObjInit_2(animator, p);
    return inst;
}

void ContinuousTrackChangeState__Fuse_Layouts_Orientation__SeekValue(ContinuousTrackChangeState__Fuse_Layouts_Orientation* __this, ::app::Uno::Float4 value, float strength)
{
    if (__this->mixHandle == NULL)
    {
        ::app::Uno::Diagnostics::Debug__Log_5(NULL, ::uGetConstString("Invalid Seek"), 1, ::uGetConstString("C:\\ProgramData\\Uno\\Packages\\Fuse.Animations\\0.11.3\\$.uno"), 454);
        return;
    }

    ::app::Fuse::Animations::IMixerHandle__Fuse_Layouts_Orientation::Set(::uPtr< ::uObject*>(__this->mixHandle), ::uPtr< ::app::Fuse::Animations::Converter__Fuse_Layouts_Orientation*>(::uPtr< ::app::Fuse::Animations::Change__Fuse_Layouts_Orientation*>(__this->Animator_1)->ContinuousConverter)->Out(value), strength);
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Animations\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

ContinuousTrackChangeState__Fuse_Navigation_NavigationDirection__uType* ContinuousTrackChangeState__Fuse_Navigation_NavigationDirection__typeof()
{
    static ::uStaticStrong<ContinuousTrackChangeState__Fuse_Navigation_NavigationDirection__uType*> type;
    if (type != NULL) return type;

    type = (ContinuousTrackChangeState__Fuse_Navigation_NavigationDirection__uType*)::uAllocClassType(sizeof(ContinuousTrackChangeState__Fuse_Navigation_NavigationDirection__uType), "Fuse.Animations.ContinuousTrackChangeState<Fuse.Navigation.NavigationDirection>", false, 0, 2, 0);

    type->SetBaseType(::app::Fuse::Animations::TrackAnimatorState__typeof());
    type->__fp_Disable = (void(*)(::app::Fuse::Animations::AnimatorState*))ContinuousTrackChangeState__Fuse_Navigation_NavigationDirection__Disable;
    type->__fp_SeekValue = (void(*)(::app::Fuse::Animations::TrackAnimatorState*, ::app::Uno::Float4, float))ContinuousTrackChangeState__Fuse_Navigation_NavigationDirection__SeekValue;

    type->SetStrongRefs(
        "Animator", offsetof(ContinuousTrackChangeState__Fuse_Navigation_NavigationDirection, Animator_1),
        "mixHandle", offsetof(ContinuousTrackChangeState__Fuse_Navigation_NavigationDirection, mixHandle));

    return type;
}

void ContinuousTrackChangeState__Fuse_Navigation_NavigationDirection___ObjInit_2(ContinuousTrackChangeState__Fuse_Navigation_NavigationDirection* __this, ::app::Fuse::Animations::Change__Fuse_Navigation_NavigationDirection* animator, ::app::Fuse::Animations::CreateStateParams* p)
{
    ::app::Fuse::Animations::TrackAnimatorState___ObjInit_1(__this, (::app::Fuse::Animations::TrackAnimator*)animator, p, NULL);
    __this->Animator_1 = animator;
    __this->mixHandle = ::app::Fuse::Animations::IMixer::Register__Fuse_Navigation_NavigationDirection(::uPtr< ::uObject*>(::uPtr< ::app::Fuse::Animations::Change__Fuse_Navigation_NavigationDirection*>(__this->Animator_1)->Mixer), ::uPtr< ::app::Fuse::Animations::Change__Fuse_Navigation_NavigationDirection*>(__this->Animator_1)->Target(), ::uPtr< ::app::Fuse::Animations::Change__Fuse_Navigation_NavigationDirection*>(__this->Animator_1)->MixOp());
}

void ContinuousTrackChangeState__Fuse_Navigation_NavigationDirection__Disable(ContinuousTrackChangeState__Fuse_Navigation_NavigationDirection* __this)
{
    if (__this->mixHandle == NULL)
    {
        return;
    }

    ::app::Fuse::Animations::IMixerHandle__Fuse_Navigation_NavigationDirection::Unregister(::uPtr< ::uObject*>(__this->mixHandle));
    __this->mixHandle = NULL;
}

ContinuousTrackChangeState__Fuse_Navigation_NavigationDirection* ContinuousTrackChangeState__Fuse_Navigation_NavigationDirection__New_1(::uStatic* __this, ::app::Fuse::Animations::Change__Fuse_Navigation_NavigationDirection* animator, ::app::Fuse::Animations::CreateStateParams* p)
{
    ContinuousTrackChangeState__Fuse_Navigation_NavigationDirection* inst = (ContinuousTrackChangeState__Fuse_Navigation_NavigationDirection*)::uAllocObject(sizeof(ContinuousTrackChangeState__Fuse_Navigation_NavigationDirection), ContinuousTrackChangeState__Fuse_Navigation_NavigationDirection__typeof());
    inst->_ObjInit_2(animator, p);
    return inst;
}

void ContinuousTrackChangeState__Fuse_Navigation_NavigationDirection__SeekValue(ContinuousTrackChangeState__Fuse_Navigation_NavigationDirection* __this, ::app::Uno::Float4 value, float strength)
{
    if (__this->mixHandle == NULL)
    {
        ::app::Uno::Diagnostics::Debug__Log_5(NULL, ::uGetConstString("Invalid Seek"), 1, ::uGetConstString("C:\\ProgramData\\Uno\\Packages\\Fuse.Animations\\0.11.3\\$.uno"), 454);
        return;
    }

    ::app::Fuse::Animations::IMixerHandle__Fuse_Navigation_NavigationDirection::Set(::uPtr< ::uObject*>(__this->mixHandle), ::uPtr< ::app::Fuse::Animations::Converter__Fuse_Navigation_NavigationDirection*>(::uPtr< ::app::Fuse::Animations::Change__Fuse_Navigation_NavigationDirection*>(__this->Animator_1)->ContinuousConverter)->Out(value), strength);
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Animations\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

ContinuousTrackChangeState__Fuse_Navigation_NavigationEdge__uType* ContinuousTrackChangeState__Fuse_Navigation_NavigationEdge__typeof()
{
    static ::uStaticStrong<ContinuousTrackChangeState__Fuse_Navigation_NavigationEdge__uType*> type;
    if (type != NULL) return type;

    type = (ContinuousTrackChangeState__Fuse_Navigation_NavigationEdge__uType*)::uAllocClassType(sizeof(ContinuousTrackChangeState__Fuse_Navigation_NavigationEdge__uType), "Fuse.Animations.ContinuousTrackChangeState<Fuse.Navigation.NavigationEdge>", false, 0, 2, 0);

    type->SetBaseType(::app::Fuse::Animations::TrackAnimatorState__typeof());
    type->__fp_Disable = (void(*)(::app::Fuse::Animations::AnimatorState*))ContinuousTrackChangeState__Fuse_Navigation_NavigationEdge__Disable;
    type->__fp_SeekValue = (void(*)(::app::Fuse::Animations::TrackAnimatorState*, ::app::Uno::Float4, float))ContinuousTrackChangeState__Fuse_Navigation_NavigationEdge__SeekValue;

    type->SetStrongRefs(
        "Animator", offsetof(ContinuousTrackChangeState__Fuse_Navigation_NavigationEdge, Animator_1),
        "mixHandle", offsetof(ContinuousTrackChangeState__Fuse_Navigation_NavigationEdge, mixHandle));

    return type;
}

void ContinuousTrackChangeState__Fuse_Navigation_NavigationEdge___ObjInit_2(ContinuousTrackChangeState__Fuse_Navigation_NavigationEdge* __this, ::app::Fuse::Animations::Change__Fuse_Navigation_NavigationEdge* animator, ::app::Fuse::Animations::CreateStateParams* p)
{
    ::app::Fuse::Animations::TrackAnimatorState___ObjInit_1(__this, (::app::Fuse::Animations::TrackAnimator*)animator, p, NULL);
    __this->Animator_1 = animator;
    __this->mixHandle = ::app::Fuse::Animations::IMixer::Register__Fuse_Navigation_NavigationEdge(::uPtr< ::uObject*>(::uPtr< ::app::Fuse::Animations::Change__Fuse_Navigation_NavigationEdge*>(__this->Animator_1)->Mixer), ::uPtr< ::app::Fuse::Animations::Change__Fuse_Navigation_NavigationEdge*>(__this->Animator_1)->Target(), ::uPtr< ::app::Fuse::Animations::Change__Fuse_Navigation_NavigationEdge*>(__this->Animator_1)->MixOp());
}

void ContinuousTrackChangeState__Fuse_Navigation_NavigationEdge__Disable(ContinuousTrackChangeState__Fuse_Navigation_NavigationEdge* __this)
{
    if (__this->mixHandle == NULL)
    {
        return;
    }

    ::app::Fuse::Animations::IMixerHandle__Fuse_Navigation_NavigationEdge::Unregister(::uPtr< ::uObject*>(__this->mixHandle));
    __this->mixHandle = NULL;
}

ContinuousTrackChangeState__Fuse_Navigation_NavigationEdge* ContinuousTrackChangeState__Fuse_Navigation_NavigationEdge__New_1(::uStatic* __this, ::app::Fuse::Animations::Change__Fuse_Navigation_NavigationEdge* animator, ::app::Fuse::Animations::CreateStateParams* p)
{
    ContinuousTrackChangeState__Fuse_Navigation_NavigationEdge* inst = (ContinuousTrackChangeState__Fuse_Navigation_NavigationEdge*)::uAllocObject(sizeof(ContinuousTrackChangeState__Fuse_Navigation_NavigationEdge), ContinuousTrackChangeState__Fuse_Navigation_NavigationEdge__typeof());
    inst->_ObjInit_2(animator, p);
    return inst;
}

void ContinuousTrackChangeState__Fuse_Navigation_NavigationEdge__SeekValue(ContinuousTrackChangeState__Fuse_Navigation_NavigationEdge* __this, ::app::Uno::Float4 value, float strength)
{
    if (__this->mixHandle == NULL)
    {
        ::app::Uno::Diagnostics::Debug__Log_5(NULL, ::uGetConstString("Invalid Seek"), 1, ::uGetConstString("C:\\ProgramData\\Uno\\Packages\\Fuse.Animations\\0.11.3\\$.uno"), 454);
        return;
    }

    ::app::Fuse::Animations::IMixerHandle__Fuse_Navigation_NavigationEdge::Set(::uPtr< ::uObject*>(__this->mixHandle), ::uPtr< ::app::Fuse::Animations::Converter__Fuse_Navigation_NavigationEdge*>(::uPtr< ::app::Fuse::Animations::Change__Fuse_Navigation_NavigationEdge*>(__this->Animator_1)->ContinuousConverter)->Out(value), strength);
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Animations\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

ContinuousTrackChangeState__Fuse_Navigation_NavigationGotoMode__uType* ContinuousTrackChangeState__Fuse_Navigation_NavigationGotoMode__typeof()
{
    static ::uStaticStrong<ContinuousTrackChangeState__Fuse_Navigation_NavigationGotoMode__uType*> type;
    if (type != NULL) return type;

    type = (ContinuousTrackChangeState__Fuse_Navigation_NavigationGotoMode__uType*)::uAllocClassType(sizeof(ContinuousTrackChangeState__Fuse_Navigation_NavigationGotoMode__uType), "Fuse.Animations.ContinuousTrackChangeState<Fuse.Navigation.NavigationGotoMode>", false, 0, 2, 0);

    type->SetBaseType(::app::Fuse::Animations::TrackAnimatorState__typeof());
    type->__fp_Disable = (void(*)(::app::Fuse::Animations::AnimatorState*))ContinuousTrackChangeState__Fuse_Navigation_NavigationGotoMode__Disable;
    type->__fp_SeekValue = (void(*)(::app::Fuse::Animations::TrackAnimatorState*, ::app::Uno::Float4, float))ContinuousTrackChangeState__Fuse_Navigation_NavigationGotoMode__SeekValue;

    type->SetStrongRefs(
        "Animator", offsetof(ContinuousTrackChangeState__Fuse_Navigation_NavigationGotoMode, Animator_1),
        "mixHandle", offsetof(ContinuousTrackChangeState__Fuse_Navigation_NavigationGotoMode, mixHandle));

    return type;
}

void ContinuousTrackChangeState__Fuse_Navigation_NavigationGotoMode___ObjInit_2(ContinuousTrackChangeState__Fuse_Navigation_NavigationGotoMode* __this, ::app::Fuse::Animations::Change__Fuse_Navigation_NavigationGotoMode* animator, ::app::Fuse::Animations::CreateStateParams* p)
{
    ::app::Fuse::Animations::TrackAnimatorState___ObjInit_1(__this, (::app::Fuse::Animations::TrackAnimator*)animator, p, NULL);
    __this->Animator_1 = animator;
    __this->mixHandle = ::app::Fuse::Animations::IMixer::Register__Fuse_Navigation_NavigationGotoMode(::uPtr< ::uObject*>(::uPtr< ::app::Fuse::Animations::Change__Fuse_Navigation_NavigationGotoMode*>(__this->Animator_1)->Mixer), ::uPtr< ::app::Fuse::Animations::Change__Fuse_Navigation_NavigationGotoMode*>(__this->Animator_1)->Target(), ::uPtr< ::app::Fuse::Animations::Change__Fuse_Navigation_NavigationGotoMode*>(__this->Animator_1)->MixOp());
}

void ContinuousTrackChangeState__Fuse_Navigation_NavigationGotoMode__Disable(ContinuousTrackChangeState__Fuse_Navigation_NavigationGotoMode* __this)
{
    if (__this->mixHandle == NULL)
    {
        return;
    }

    ::app::Fuse::Animations::IMixerHandle__Fuse_Navigation_NavigationGotoMode::Unregister(::uPtr< ::uObject*>(__this->mixHandle));
    __this->mixHandle = NULL;
}

ContinuousTrackChangeState__Fuse_Navigation_NavigationGotoMode* ContinuousTrackChangeState__Fuse_Navigation_NavigationGotoMode__New_1(::uStatic* __this, ::app::Fuse::Animations::Change__Fuse_Navigation_NavigationGotoMode* animator, ::app::Fuse::Animations::CreateStateParams* p)
{
    ContinuousTrackChangeState__Fuse_Navigation_NavigationGotoMode* inst = (ContinuousTrackChangeState__Fuse_Navigation_NavigationGotoMode*)::uAllocObject(sizeof(ContinuousTrackChangeState__Fuse_Navigation_NavigationGotoMode), ContinuousTrackChangeState__Fuse_Navigation_NavigationGotoMode__typeof());
    inst->_ObjInit_2(animator, p);
    return inst;
}

void ContinuousTrackChangeState__Fuse_Navigation_NavigationGotoMode__SeekValue(ContinuousTrackChangeState__Fuse_Navigation_NavigationGotoMode* __this, ::app::Uno::Float4 value, float strength)
{
    if (__this->mixHandle == NULL)
    {
        ::app::Uno::Diagnostics::Debug__Log_5(NULL, ::uGetConstString("Invalid Seek"), 1, ::uGetConstString("C:\\ProgramData\\Uno\\Packages\\Fuse.Animations\\0.11.3\\$.uno"), 454);
        return;
    }

    ::app::Fuse::Animations::IMixerHandle__Fuse_Navigation_NavigationGotoMode::Set(::uPtr< ::uObject*>(__this->mixHandle), ::uPtr< ::app::Fuse::Animations::Converter__Fuse_Navigation_NavigationGotoMode*>(::uPtr< ::app::Fuse::Animations::Change__Fuse_Navigation_NavigationGotoMode*>(__this->Animator_1)->ContinuousConverter)->Out(value), strength);
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Animations\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

ContinuousTrackChangeState__Fuse_Navigation_SnapTo__uType* ContinuousTrackChangeState__Fuse_Navigation_SnapTo__typeof()
{
    static ::uStaticStrong<ContinuousTrackChangeState__Fuse_Navigation_SnapTo__uType*> type;
    if (type != NULL) return type;

    type = (ContinuousTrackChangeState__Fuse_Navigation_SnapTo__uType*)::uAllocClassType(sizeof(ContinuousTrackChangeState__Fuse_Navigation_SnapTo__uType), "Fuse.Animations.ContinuousTrackChangeState<Fuse.Navigation.SnapTo>", false, 0, 2, 0);

    type->SetBaseType(::app::Fuse::Animations::TrackAnimatorState__typeof());
    type->__fp_Disable = (void(*)(::app::Fuse::Animations::AnimatorState*))ContinuousTrackChangeState__Fuse_Navigation_SnapTo__Disable;
    type->__fp_SeekValue = (void(*)(::app::Fuse::Animations::TrackAnimatorState*, ::app::Uno::Float4, float))ContinuousTrackChangeState__Fuse_Navigation_SnapTo__SeekValue;

    type->SetStrongRefs(
        "Animator", offsetof(ContinuousTrackChangeState__Fuse_Navigation_SnapTo, Animator_1),
        "mixHandle", offsetof(ContinuousTrackChangeState__Fuse_Navigation_SnapTo, mixHandle));

    return type;
}

void ContinuousTrackChangeState__Fuse_Navigation_SnapTo___ObjInit_2(ContinuousTrackChangeState__Fuse_Navigation_SnapTo* __this, ::app::Fuse::Animations::Change__Fuse_Navigation_SnapTo* animator, ::app::Fuse::Animations::CreateStateParams* p)
{
    ::app::Fuse::Animations::TrackAnimatorState___ObjInit_1(__this, (::app::Fuse::Animations::TrackAnimator*)animator, p, NULL);
    __this->Animator_1 = animator;
    __this->mixHandle = ::app::Fuse::Animations::IMixer::Register__Fuse_Navigation_SnapTo(::uPtr< ::uObject*>(::uPtr< ::app::Fuse::Animations::Change__Fuse_Navigation_SnapTo*>(__this->Animator_1)->Mixer), ::uPtr< ::app::Fuse::Animations::Change__Fuse_Navigation_SnapTo*>(__this->Animator_1)->Target(), ::uPtr< ::app::Fuse::Animations::Change__Fuse_Navigation_SnapTo*>(__this->Animator_1)->MixOp());
}

void ContinuousTrackChangeState__Fuse_Navigation_SnapTo__Disable(ContinuousTrackChangeState__Fuse_Navigation_SnapTo* __this)
{
    if (__this->mixHandle == NULL)
    {
        return;
    }

    ::app::Fuse::Animations::IMixerHandle__Fuse_Navigation_SnapTo::Unregister(::uPtr< ::uObject*>(__this->mixHandle));
    __this->mixHandle = NULL;
}

ContinuousTrackChangeState__Fuse_Navigation_SnapTo* ContinuousTrackChangeState__Fuse_Navigation_SnapTo__New_1(::uStatic* __this, ::app::Fuse::Animations::Change__Fuse_Navigation_SnapTo* animator, ::app::Fuse::Animations::CreateStateParams* p)
{
    ContinuousTrackChangeState__Fuse_Navigation_SnapTo* inst = (ContinuousTrackChangeState__Fuse_Navigation_SnapTo*)::uAllocObject(sizeof(ContinuousTrackChangeState__Fuse_Navigation_SnapTo), ContinuousTrackChangeState__Fuse_Navigation_SnapTo__typeof());
    inst->_ObjInit_2(animator, p);
    return inst;
}

void ContinuousTrackChangeState__Fuse_Navigation_SnapTo__SeekValue(ContinuousTrackChangeState__Fuse_Navigation_SnapTo* __this, ::app::Uno::Float4 value, float strength)
{
    if (__this->mixHandle == NULL)
    {
        ::app::Uno::Diagnostics::Debug__Log_5(NULL, ::uGetConstString("Invalid Seek"), 1, ::uGetConstString("C:\\ProgramData\\Uno\\Packages\\Fuse.Animations\\0.11.3\\$.uno"), 454);
        return;
    }

    ::app::Fuse::Animations::IMixerHandle__Fuse_Navigation_SnapTo::Set(::uPtr< ::uObject*>(__this->mixHandle), ::uPtr< ::app::Fuse::Animations::Converter__Fuse_Navigation_SnapTo*>(::uPtr< ::app::Fuse::Animations::Change__Fuse_Navigation_SnapTo*>(__this->Animator_1)->ContinuousConverter)->Out(value), strength);
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Animations\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

ContinuousTrackChangeState__Fuse_Navigation_SwipeDirection__uType* ContinuousTrackChangeState__Fuse_Navigation_SwipeDirection__typeof()
{
    static ::uStaticStrong<ContinuousTrackChangeState__Fuse_Navigation_SwipeDirection__uType*> type;
    if (type != NULL) return type;

    type = (ContinuousTrackChangeState__Fuse_Navigation_SwipeDirection__uType*)::uAllocClassType(sizeof(ContinuousTrackChangeState__Fuse_Navigation_SwipeDirection__uType), "Fuse.Animations.ContinuousTrackChangeState<Fuse.Navigation.SwipeDirection>", false, 0, 2, 0);

    type->SetBaseType(::app::Fuse::Animations::TrackAnimatorState__typeof());
    type->__fp_Disable = (void(*)(::app::Fuse::Animations::AnimatorState*))ContinuousTrackChangeState__Fuse_Navigation_SwipeDirection__Disable;
    type->__fp_SeekValue = (void(*)(::app::Fuse::Animations::TrackAnimatorState*, ::app::Uno::Float4, float))ContinuousTrackChangeState__Fuse_Navigation_SwipeDirection__SeekValue;

    type->SetStrongRefs(
        "Animator", offsetof(ContinuousTrackChangeState__Fuse_Navigation_SwipeDirection, Animator_1),
        "mixHandle", offsetof(ContinuousTrackChangeState__Fuse_Navigation_SwipeDirection, mixHandle));

    return type;
}

void ContinuousTrackChangeState__Fuse_Navigation_SwipeDirection___ObjInit_2(ContinuousTrackChangeState__Fuse_Navigation_SwipeDirection* __this, ::app::Fuse::Animations::Change__Fuse_Navigation_SwipeDirection* animator, ::app::Fuse::Animations::CreateStateParams* p)
{
    ::app::Fuse::Animations::TrackAnimatorState___ObjInit_1(__this, (::app::Fuse::Animations::TrackAnimator*)animator, p, NULL);
    __this->Animator_1 = animator;
    __this->mixHandle = ::app::Fuse::Animations::IMixer::Register__Fuse_Navigation_SwipeDirection(::uPtr< ::uObject*>(::uPtr< ::app::Fuse::Animations::Change__Fuse_Navigation_SwipeDirection*>(__this->Animator_1)->Mixer), ::uPtr< ::app::Fuse::Animations::Change__Fuse_Navigation_SwipeDirection*>(__this->Animator_1)->Target(), ::uPtr< ::app::Fuse::Animations::Change__Fuse_Navigation_SwipeDirection*>(__this->Animator_1)->MixOp());
}

void ContinuousTrackChangeState__Fuse_Navigation_SwipeDirection__Disable(ContinuousTrackChangeState__Fuse_Navigation_SwipeDirection* __this)
{
    if (__this->mixHandle == NULL)
    {
        return;
    }

    ::app::Fuse::Animations::IMixerHandle__Fuse_Navigation_SwipeDirection::Unregister(::uPtr< ::uObject*>(__this->mixHandle));
    __this->mixHandle = NULL;
}

ContinuousTrackChangeState__Fuse_Navigation_SwipeDirection* ContinuousTrackChangeState__Fuse_Navigation_SwipeDirection__New_1(::uStatic* __this, ::app::Fuse::Animations::Change__Fuse_Navigation_SwipeDirection* animator, ::app::Fuse::Animations::CreateStateParams* p)
{
    ContinuousTrackChangeState__Fuse_Navigation_SwipeDirection* inst = (ContinuousTrackChangeState__Fuse_Navigation_SwipeDirection*)::uAllocObject(sizeof(ContinuousTrackChangeState__Fuse_Navigation_SwipeDirection), ContinuousTrackChangeState__Fuse_Navigation_SwipeDirection__typeof());
    inst->_ObjInit_2(animator, p);
    return inst;
}

void ContinuousTrackChangeState__Fuse_Navigation_SwipeDirection__SeekValue(ContinuousTrackChangeState__Fuse_Navigation_SwipeDirection* __this, ::app::Uno::Float4 value, float strength)
{
    if (__this->mixHandle == NULL)
    {
        ::app::Uno::Diagnostics::Debug__Log_5(NULL, ::uGetConstString("Invalid Seek"), 1, ::uGetConstString("C:\\ProgramData\\Uno\\Packages\\Fuse.Animations\\0.11.3\\$.uno"), 454);
        return;
    }

    ::app::Fuse::Animations::IMixerHandle__Fuse_Navigation_SwipeDirection::Set(::uPtr< ::uObject*>(__this->mixHandle), ::uPtr< ::app::Fuse::Animations::Converter__Fuse_Navigation_SwipeDirection*>(::uPtr< ::app::Fuse::Animations::Change__Fuse_Navigation_SwipeDirection*>(__this->Animator_1)->ContinuousConverter)->Out(value), strength);
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Animations\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

ContinuousTrackChangeState__Fuse_Navigation_SwipeEnds__uType* ContinuousTrackChangeState__Fuse_Navigation_SwipeEnds__typeof()
{
    static ::uStaticStrong<ContinuousTrackChangeState__Fuse_Navigation_SwipeEnds__uType*> type;
    if (type != NULL) return type;

    type = (ContinuousTrackChangeState__Fuse_Navigation_SwipeEnds__uType*)::uAllocClassType(sizeof(ContinuousTrackChangeState__Fuse_Navigation_SwipeEnds__uType), "Fuse.Animations.ContinuousTrackChangeState<Fuse.Navigation.SwipeEnds>", false, 0, 2, 0);

    type->SetBaseType(::app::Fuse::Animations::TrackAnimatorState__typeof());
    type->__fp_Disable = (void(*)(::app::Fuse::Animations::AnimatorState*))ContinuousTrackChangeState__Fuse_Navigation_SwipeEnds__Disable;
    type->__fp_SeekValue = (void(*)(::app::Fuse::Animations::TrackAnimatorState*, ::app::Uno::Float4, float))ContinuousTrackChangeState__Fuse_Navigation_SwipeEnds__SeekValue;

    type->SetStrongRefs(
        "Animator", offsetof(ContinuousTrackChangeState__Fuse_Navigation_SwipeEnds, Animator_1),
        "mixHandle", offsetof(ContinuousTrackChangeState__Fuse_Navigation_SwipeEnds, mixHandle));

    return type;
}

void ContinuousTrackChangeState__Fuse_Navigation_SwipeEnds___ObjInit_2(ContinuousTrackChangeState__Fuse_Navigation_SwipeEnds* __this, ::app::Fuse::Animations::Change__Fuse_Navigation_SwipeEnds* animator, ::app::Fuse::Animations::CreateStateParams* p)
{
    ::app::Fuse::Animations::TrackAnimatorState___ObjInit_1(__this, (::app::Fuse::Animations::TrackAnimator*)animator, p, NULL);
    __this->Animator_1 = animator;
    __this->mixHandle = ::app::Fuse::Animations::IMixer::Register__Fuse_Navigation_SwipeEnds(::uPtr< ::uObject*>(::uPtr< ::app::Fuse::Animations::Change__Fuse_Navigation_SwipeEnds*>(__this->Animator_1)->Mixer), ::uPtr< ::app::Fuse::Animations::Change__Fuse_Navigation_SwipeEnds*>(__this->Animator_1)->Target(), ::uPtr< ::app::Fuse::Animations::Change__Fuse_Navigation_SwipeEnds*>(__this->Animator_1)->MixOp());
}

void ContinuousTrackChangeState__Fuse_Navigation_SwipeEnds__Disable(ContinuousTrackChangeState__Fuse_Navigation_SwipeEnds* __this)
{
    if (__this->mixHandle == NULL)
    {
        return;
    }

    ::app::Fuse::Animations::IMixerHandle__Fuse_Navigation_SwipeEnds::Unregister(::uPtr< ::uObject*>(__this->mixHandle));
    __this->mixHandle = NULL;
}

ContinuousTrackChangeState__Fuse_Navigation_SwipeEnds* ContinuousTrackChangeState__Fuse_Navigation_SwipeEnds__New_1(::uStatic* __this, ::app::Fuse::Animations::Change__Fuse_Navigation_SwipeEnds* animator, ::app::Fuse::Animations::CreateStateParams* p)
{
    ContinuousTrackChangeState__Fuse_Navigation_SwipeEnds* inst = (ContinuousTrackChangeState__Fuse_Navigation_SwipeEnds*)::uAllocObject(sizeof(ContinuousTrackChangeState__Fuse_Navigation_SwipeEnds), ContinuousTrackChangeState__Fuse_Navigation_SwipeEnds__typeof());
    inst->_ObjInit_2(animator, p);
    return inst;
}

void ContinuousTrackChangeState__Fuse_Navigation_SwipeEnds__SeekValue(ContinuousTrackChangeState__Fuse_Navigation_SwipeEnds* __this, ::app::Uno::Float4 value, float strength)
{
    if (__this->mixHandle == NULL)
    {
        ::app::Uno::Diagnostics::Debug__Log_5(NULL, ::uGetConstString("Invalid Seek"), 1, ::uGetConstString("C:\\ProgramData\\Uno\\Packages\\Fuse.Animations\\0.11.3\\$.uno"), 454);
        return;
    }

    ::app::Fuse::Animations::IMixerHandle__Fuse_Navigation_SwipeEnds::Set(::uPtr< ::uObject*>(__this->mixHandle), ::uPtr< ::app::Fuse::Animations::Converter__Fuse_Navigation_SwipeEnds*>(::uPtr< ::app::Fuse::Animations::Change__Fuse_Navigation_SwipeEnds*>(__this->Animator_1)->ContinuousConverter)->Out(value), strength);
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Animations\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

ContinuousTrackChangeState__Fuse_Node__uType* ContinuousTrackChangeState__Fuse_Node__typeof()
{
    static ::uStaticStrong<ContinuousTrackChangeState__Fuse_Node__uType*> type;
    if (type != NULL) return type;

    type = (ContinuousTrackChangeState__Fuse_Node__uType*)::uAllocClassType(sizeof(ContinuousTrackChangeState__Fuse_Node__uType), "Fuse.Animations.ContinuousTrackChangeState<Fuse.Node>", false, 0, 2, 0);

    type->SetBaseType(::app::Fuse::Animations::TrackAnimatorState__typeof());
    type->__fp_Disable = (void(*)(::app::Fuse::Animations::AnimatorState*))ContinuousTrackChangeState__Fuse_Node__Disable;
    type->__fp_SeekValue = (void(*)(::app::Fuse::Animations::TrackAnimatorState*, ::app::Uno::Float4, float))ContinuousTrackChangeState__Fuse_Node__SeekValue;

    type->SetStrongRefs(
        "Animator", offsetof(ContinuousTrackChangeState__Fuse_Node, Animator_1),
        "mixHandle", offsetof(ContinuousTrackChangeState__Fuse_Node, mixHandle));

    return type;
}

void ContinuousTrackChangeState__Fuse_Node___ObjInit_2(ContinuousTrackChangeState__Fuse_Node* __this, ::app::Fuse::Animations::Change__Fuse_Node* animator, ::app::Fuse::Animations::CreateStateParams* p)
{
    ::app::Fuse::Animations::TrackAnimatorState___ObjInit_1(__this, (::app::Fuse::Animations::TrackAnimator*)animator, p, NULL);
    __this->Animator_1 = animator;
    __this->mixHandle = ::app::Fuse::Animations::IMixer::Register__Fuse_Node(::uPtr< ::uObject*>(::uPtr< ::app::Fuse::Animations::Change__Fuse_Node*>(__this->Animator_1)->Mixer), ::uPtr< ::app::Fuse::Animations::Change__Fuse_Node*>(__this->Animator_1)->Target(), ::uPtr< ::app::Fuse::Animations::Change__Fuse_Node*>(__this->Animator_1)->MixOp());
}

void ContinuousTrackChangeState__Fuse_Node__Disable(ContinuousTrackChangeState__Fuse_Node* __this)
{
    if (__this->mixHandle == NULL)
    {
        return;
    }

    ::app::Fuse::Animations::IMixerHandle__Fuse_Node::Unregister(::uPtr< ::uObject*>(__this->mixHandle));
    __this->mixHandle = NULL;
}

ContinuousTrackChangeState__Fuse_Node* ContinuousTrackChangeState__Fuse_Node__New_1(::uStatic* __this, ::app::Fuse::Animations::Change__Fuse_Node* animator, ::app::Fuse::Animations::CreateStateParams* p)
{
    ContinuousTrackChangeState__Fuse_Node* inst = (ContinuousTrackChangeState__Fuse_Node*)::uAllocObject(sizeof(ContinuousTrackChangeState__Fuse_Node), ContinuousTrackChangeState__Fuse_Node__typeof());
    inst->_ObjInit_2(animator, p);
    return inst;
}

void ContinuousTrackChangeState__Fuse_Node__SeekValue(ContinuousTrackChangeState__Fuse_Node* __this, ::app::Uno::Float4 value, float strength)
{
    if (__this->mixHandle == NULL)
    {
        ::app::Uno::Diagnostics::Debug__Log_5(NULL, ::uGetConstString("Invalid Seek"), 1, ::uGetConstString("C:\\ProgramData\\Uno\\Packages\\Fuse.Animations\\0.11.3\\$.uno"), 454);
        return;
    }

    ::app::Fuse::Animations::IMixerHandle__Fuse_Node::Set(::uPtr< ::uObject*>(__this->mixHandle), ::uPtr< ::app::Fuse::Animations::Converter__Fuse_Node*>(::uPtr< ::app::Fuse::Animations::Change__Fuse_Node*>(__this->Animator_1)->ContinuousConverter)->Out(value), strength);
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Animations\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

ContinuousTrackChangeState__Fuse_Resources_ImageSource__uType* ContinuousTrackChangeState__Fuse_Resources_ImageSource__typeof()
{
    static ::uStaticStrong<ContinuousTrackChangeState__Fuse_Resources_ImageSource__uType*> type;
    if (type != NULL) return type;

    type = (ContinuousTrackChangeState__Fuse_Resources_ImageSource__uType*)::uAllocClassType(sizeof(ContinuousTrackChangeState__Fuse_Resources_ImageSource__uType), "Fuse.Animations.ContinuousTrackChangeState<Fuse.Resources.ImageSource>", false, 0, 2, 0);

    type->SetBaseType(::app::Fuse::Animations::TrackAnimatorState__typeof());
    type->__fp_Disable = (void(*)(::app::Fuse::Animations::AnimatorState*))ContinuousTrackChangeState__Fuse_Resources_ImageSource__Disable;
    type->__fp_SeekValue = (void(*)(::app::Fuse::Animations::TrackAnimatorState*, ::app::Uno::Float4, float))ContinuousTrackChangeState__Fuse_Resources_ImageSource__SeekValue;

    type->SetStrongRefs(
        "Animator", offsetof(ContinuousTrackChangeState__Fuse_Resources_ImageSource, Animator_1),
        "mixHandle", offsetof(ContinuousTrackChangeState__Fuse_Resources_ImageSource, mixHandle));

    return type;
}

void ContinuousTrackChangeState__Fuse_Resources_ImageSource___ObjInit_2(ContinuousTrackChangeState__Fuse_Resources_ImageSource* __this, ::app::Fuse::Animations::Change__Fuse_Resources_ImageSource* animator, ::app::Fuse::Animations::CreateStateParams* p)
{
    ::app::Fuse::Animations::TrackAnimatorState___ObjInit_1(__this, (::app::Fuse::Animations::TrackAnimator*)animator, p, NULL);
    __this->Animator_1 = animator;
    __this->mixHandle = ::app::Fuse::Animations::IMixer::Register__Fuse_Resources_ImageSource(::uPtr< ::uObject*>(::uPtr< ::app::Fuse::Animations::Change__Fuse_Resources_ImageSource*>(__this->Animator_1)->Mixer), ::uPtr< ::app::Fuse::Animations::Change__Fuse_Resources_ImageSource*>(__this->Animator_1)->Target(), ::uPtr< ::app::Fuse::Animations::Change__Fuse_Resources_ImageSource*>(__this->Animator_1)->MixOp());
}

void ContinuousTrackChangeState__Fuse_Resources_ImageSource__Disable(ContinuousTrackChangeState__Fuse_Resources_ImageSource* __this)
{
    if (__this->mixHandle == NULL)
    {
        return;
    }

    ::app::Fuse::Animations::IMixerHandle__Fuse_Resources_ImageSource::Unregister(::uPtr< ::uObject*>(__this->mixHandle));
    __this->mixHandle = NULL;
}

ContinuousTrackChangeState__Fuse_Resources_ImageSource* ContinuousTrackChangeState__Fuse_Resources_ImageSource__New_1(::uStatic* __this, ::app::Fuse::Animations::Change__Fuse_Resources_ImageSource* animator, ::app::Fuse::Animations::CreateStateParams* p)
{
    ContinuousTrackChangeState__Fuse_Resources_ImageSource* inst = (ContinuousTrackChangeState__Fuse_Resources_ImageSource*)::uAllocObject(sizeof(ContinuousTrackChangeState__Fuse_Resources_ImageSource), ContinuousTrackChangeState__Fuse_Resources_ImageSource__typeof());
    inst->_ObjInit_2(animator, p);
    return inst;
}

void ContinuousTrackChangeState__Fuse_Resources_ImageSource__SeekValue(ContinuousTrackChangeState__Fuse_Resources_ImageSource* __this, ::app::Uno::Float4 value, float strength)
{
    if (__this->mixHandle == NULL)
    {
        ::app::Uno::Diagnostics::Debug__Log_5(NULL, ::uGetConstString("Invalid Seek"), 1, ::uGetConstString("C:\\ProgramData\\Uno\\Packages\\Fuse.Animations\\0.11.3\\$.uno"), 454);
        return;
    }

    ::app::Fuse::Animations::IMixerHandle__Fuse_Resources_ImageSource::Set(::uPtr< ::uObject*>(__this->mixHandle), ::uPtr< ::app::Fuse::Animations::Converter__Fuse_Resources_ImageSource*>(::uPtr< ::app::Fuse::Animations::Change__Fuse_Resources_ImageSource*>(__this->Animator_1)->ContinuousConverter)->Out(value), strength);
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Animations\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

ContinuousTrackChangeState__Fuse_Triggers_Actions_TriggerDirection__uType* ContinuousTrackChangeState__Fuse_Triggers_Actions_TriggerDirection__typeof()
{
    static ::uStaticStrong<ContinuousTrackChangeState__Fuse_Triggers_Actions_TriggerDirection__uType*> type;
    if (type != NULL) return type;

    type = (ContinuousTrackChangeState__Fuse_Triggers_Actions_TriggerDirection__uType*)::uAllocClassType(sizeof(ContinuousTrackChangeState__Fuse_Triggers_Actions_TriggerDirection__uType), "Fuse.Animations.ContinuousTrackChangeState<Fuse.Triggers.Actions.TriggerDirection>", false, 0, 2, 0);

    type->SetBaseType(::app::Fuse::Animations::TrackAnimatorState__typeof());
    type->__fp_Disable = (void(*)(::app::Fuse::Animations::AnimatorState*))ContinuousTrackChangeState__Fuse_Triggers_Actions_TriggerDirection__Disable;
    type->__fp_SeekValue = (void(*)(::app::Fuse::Animations::TrackAnimatorState*, ::app::Uno::Float4, float))ContinuousTrackChangeState__Fuse_Triggers_Actions_TriggerDirection__SeekValue;

    type->SetStrongRefs(
        "Animator", offsetof(ContinuousTrackChangeState__Fuse_Triggers_Actions_TriggerDirection, Animator_1),
        "mixHandle", offsetof(ContinuousTrackChangeState__Fuse_Triggers_Actions_TriggerDirection, mixHandle));

    return type;
}

void ContinuousTrackChangeState__Fuse_Triggers_Actions_TriggerDirection___ObjInit_2(ContinuousTrackChangeState__Fuse_Triggers_Actions_TriggerDirection* __this, ::app::Fuse::Animations::Change__Fuse_Triggers_Actions_TriggerDirection* animator, ::app::Fuse::Animations::CreateStateParams* p)
{
    ::app::Fuse::Animations::TrackAnimatorState___ObjInit_1(__this, (::app::Fuse::Animations::TrackAnimator*)animator, p, NULL);
    __this->Animator_1 = animator;
    __this->mixHandle = ::app::Fuse::Animations::IMixer::Register__Fuse_Triggers_Actions_TriggerDirection(::uPtr< ::uObject*>(::uPtr< ::app::Fuse::Animations::Change__Fuse_Triggers_Actions_TriggerDirection*>(__this->Animator_1)->Mixer), ::uPtr< ::app::Fuse::Animations::Change__Fuse_Triggers_Actions_TriggerDirection*>(__this->Animator_1)->Target(), ::uPtr< ::app::Fuse::Animations::Change__Fuse_Triggers_Actions_TriggerDirection*>(__this->Animator_1)->MixOp());
}

void ContinuousTrackChangeState__Fuse_Triggers_Actions_TriggerDirection__Disable(ContinuousTrackChangeState__Fuse_Triggers_Actions_TriggerDirection* __this)
{
    if (__this->mixHandle == NULL)
    {
        return;
    }

    ::app::Fuse::Animations::IMixerHandle__Fuse_Triggers_Actions_TriggerDirection::Unregister(::uPtr< ::uObject*>(__this->mixHandle));
    __this->mixHandle = NULL;
}

ContinuousTrackChangeState__Fuse_Triggers_Actions_TriggerDirection* ContinuousTrackChangeState__Fuse_Triggers_Actions_TriggerDirection__New_1(::uStatic* __this, ::app::Fuse::Animations::Change__Fuse_Triggers_Actions_TriggerDirection* animator, ::app::Fuse::Animations::CreateStateParams* p)
{
    ContinuousTrackChangeState__Fuse_Triggers_Actions_TriggerDirection* inst = (ContinuousTrackChangeState__Fuse_Triggers_Actions_TriggerDirection*)::uAllocObject(sizeof(ContinuousTrackChangeState__Fuse_Triggers_Actions_TriggerDirection), ContinuousTrackChangeState__Fuse_Triggers_Actions_TriggerDirection__typeof());
    inst->_ObjInit_2(animator, p);
    return inst;
}

void ContinuousTrackChangeState__Fuse_Triggers_Actions_TriggerDirection__SeekValue(ContinuousTrackChangeState__Fuse_Triggers_Actions_TriggerDirection* __this, ::app::Uno::Float4 value, float strength)
{
    if (__this->mixHandle == NULL)
    {
        ::app::Uno::Diagnostics::Debug__Log_5(NULL, ::uGetConstString("Invalid Seek"), 1, ::uGetConstString("C:\\ProgramData\\Uno\\Packages\\Fuse.Animations\\0.11.3\\$.uno"), 454);
        return;
    }

    ::app::Fuse::Animations::IMixerHandle__Fuse_Triggers_Actions_TriggerDirection::Set(::uPtr< ::uObject*>(__this->mixHandle), ::uPtr< ::app::Fuse::Animations::Converter__Fuse_Triggers_Actions_TriggerDirection*>(::uPtr< ::app::Fuse::Animations::Change__Fuse_Triggers_Actions_TriggerDirection*>(__this->Animator_1)->ContinuousConverter)->Out(value), strength);
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Animations\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

ContinuousTrackChangeState__Fuse_Triggers_State__uType* ContinuousTrackChangeState__Fuse_Triggers_State__typeof()
{
    static ::uStaticStrong<ContinuousTrackChangeState__Fuse_Triggers_State__uType*> type;
    if (type != NULL) return type;

    type = (ContinuousTrackChangeState__Fuse_Triggers_State__uType*)::uAllocClassType(sizeof(ContinuousTrackChangeState__Fuse_Triggers_State__uType), "Fuse.Animations.ContinuousTrackChangeState<Fuse.Triggers.State>", false, 0, 2, 0);

    type->SetBaseType(::app::Fuse::Animations::TrackAnimatorState__typeof());
    type->__fp_Disable = (void(*)(::app::Fuse::Animations::AnimatorState*))ContinuousTrackChangeState__Fuse_Triggers_State__Disable;
    type->__fp_SeekValue = (void(*)(::app::Fuse::Animations::TrackAnimatorState*, ::app::Uno::Float4, float))ContinuousTrackChangeState__Fuse_Triggers_State__SeekValue;

    type->SetStrongRefs(
        "Animator", offsetof(ContinuousTrackChangeState__Fuse_Triggers_State, Animator_1),
        "mixHandle", offsetof(ContinuousTrackChangeState__Fuse_Triggers_State, mixHandle));

    return type;
}

void ContinuousTrackChangeState__Fuse_Triggers_State___ObjInit_2(ContinuousTrackChangeState__Fuse_Triggers_State* __this, ::app::Fuse::Animations::Change__Fuse_Triggers_State* animator, ::app::Fuse::Animations::CreateStateParams* p)
{
    ::app::Fuse::Animations::TrackAnimatorState___ObjInit_1(__this, (::app::Fuse::Animations::TrackAnimator*)animator, p, NULL);
    __this->Animator_1 = animator;
    __this->mixHandle = ::app::Fuse::Animations::IMixer::Register__Fuse_Triggers_State(::uPtr< ::uObject*>(::uPtr< ::app::Fuse::Animations::Change__Fuse_Triggers_State*>(__this->Animator_1)->Mixer), ::uPtr< ::app::Fuse::Animations::Change__Fuse_Triggers_State*>(__this->Animator_1)->Target(), ::uPtr< ::app::Fuse::Animations::Change__Fuse_Triggers_State*>(__this->Animator_1)->MixOp());
}

void ContinuousTrackChangeState__Fuse_Triggers_State__Disable(ContinuousTrackChangeState__Fuse_Triggers_State* __this)
{
    if (__this->mixHandle == NULL)
    {
        return;
    }

    ::app::Fuse::Animations::IMixerHandle__Fuse_Triggers_State::Unregister(::uPtr< ::uObject*>(__this->mixHandle));
    __this->mixHandle = NULL;
}

ContinuousTrackChangeState__Fuse_Triggers_State* ContinuousTrackChangeState__Fuse_Triggers_State__New_1(::uStatic* __this, ::app::Fuse::Animations::Change__Fuse_Triggers_State* animator, ::app::Fuse::Animations::CreateStateParams* p)
{
    ContinuousTrackChangeState__Fuse_Triggers_State* inst = (ContinuousTrackChangeState__Fuse_Triggers_State*)::uAllocObject(sizeof(ContinuousTrackChangeState__Fuse_Triggers_State), ContinuousTrackChangeState__Fuse_Triggers_State__typeof());
    inst->_ObjInit_2(animator, p);
    return inst;
}

void ContinuousTrackChangeState__Fuse_Triggers_State__SeekValue(ContinuousTrackChangeState__Fuse_Triggers_State* __this, ::app::Uno::Float4 value, float strength)
{
    if (__this->mixHandle == NULL)
    {
        ::app::Uno::Diagnostics::Debug__Log_5(NULL, ::uGetConstString("Invalid Seek"), 1, ::uGetConstString("C:\\ProgramData\\Uno\\Packages\\Fuse.Animations\\0.11.3\\$.uno"), 454);
        return;
    }

    ::app::Fuse::Animations::IMixerHandle__Fuse_Triggers_State::Set(::uPtr< ::uObject*>(__this->mixHandle), ::uPtr< ::app::Fuse::Animations::Converter__Fuse_Triggers_State*>(::uPtr< ::app::Fuse::Animations::Change__Fuse_Triggers_State*>(__this->Animator_1)->ContinuousConverter)->Out(value), strength);
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Animations\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

ContinuousTrackChangeState__Fuse_Triggers_StateTransition__uType* ContinuousTrackChangeState__Fuse_Triggers_StateTransition__typeof()
{
    static ::uStaticStrong<ContinuousTrackChangeState__Fuse_Triggers_StateTransition__uType*> type;
    if (type != NULL) return type;

    type = (ContinuousTrackChangeState__Fuse_Triggers_StateTransition__uType*)::uAllocClassType(sizeof(ContinuousTrackChangeState__Fuse_Triggers_StateTransition__uType), "Fuse.Animations.ContinuousTrackChangeState<Fuse.Triggers.StateTransition>", false, 0, 2, 0);

    type->SetBaseType(::app::Fuse::Animations::TrackAnimatorState__typeof());
    type->__fp_Disable = (void(*)(::app::Fuse::Animations::AnimatorState*))ContinuousTrackChangeState__Fuse_Triggers_StateTransition__Disable;
    type->__fp_SeekValue = (void(*)(::app::Fuse::Animations::TrackAnimatorState*, ::app::Uno::Float4, float))ContinuousTrackChangeState__Fuse_Triggers_StateTransition__SeekValue;

    type->SetStrongRefs(
        "Animator", offsetof(ContinuousTrackChangeState__Fuse_Triggers_StateTransition, Animator_1),
        "mixHandle", offsetof(ContinuousTrackChangeState__Fuse_Triggers_StateTransition, mixHandle));

    return type;
}

void ContinuousTrackChangeState__Fuse_Triggers_StateTransition___ObjInit_2(ContinuousTrackChangeState__Fuse_Triggers_StateTransition* __this, ::app::Fuse::Animations::Change__Fuse_Triggers_StateTransition* animator, ::app::Fuse::Animations::CreateStateParams* p)
{
    ::app::Fuse::Animations::TrackAnimatorState___ObjInit_1(__this, (::app::Fuse::Animations::TrackAnimator*)animator, p, NULL);
    __this->Animator_1 = animator;
    __this->mixHandle = ::app::Fuse::Animations::IMixer::Register__Fuse_Triggers_StateTransition(::uPtr< ::uObject*>(::uPtr< ::app::Fuse::Animations::Change__Fuse_Triggers_StateTransition*>(__this->Animator_1)->Mixer), ::uPtr< ::app::Fuse::Animations::Change__Fuse_Triggers_StateTransition*>(__this->Animator_1)->Target(), ::uPtr< ::app::Fuse::Animations::Change__Fuse_Triggers_StateTransition*>(__this->Animator_1)->MixOp());
}

void ContinuousTrackChangeState__Fuse_Triggers_StateTransition__Disable(ContinuousTrackChangeState__Fuse_Triggers_StateTransition* __this)
{
    if (__this->mixHandle == NULL)
    {
        return;
    }

    ::app::Fuse::Animations::IMixerHandle__Fuse_Triggers_StateTransition::Unregister(::uPtr< ::uObject*>(__this->mixHandle));
    __this->mixHandle = NULL;
}

ContinuousTrackChangeState__Fuse_Triggers_StateTransition* ContinuousTrackChangeState__Fuse_Triggers_StateTransition__New_1(::uStatic* __this, ::app::Fuse::Animations::Change__Fuse_Triggers_StateTransition* animator, ::app::Fuse::Animations::CreateStateParams* p)
{
    ContinuousTrackChangeState__Fuse_Triggers_StateTransition* inst = (ContinuousTrackChangeState__Fuse_Triggers_StateTransition*)::uAllocObject(sizeof(ContinuousTrackChangeState__Fuse_Triggers_StateTransition), ContinuousTrackChangeState__Fuse_Triggers_StateTransition__typeof());
    inst->_ObjInit_2(animator, p);
    return inst;
}

void ContinuousTrackChangeState__Fuse_Triggers_StateTransition__SeekValue(ContinuousTrackChangeState__Fuse_Triggers_StateTransition* __this, ::app::Uno::Float4 value, float strength)
{
    if (__this->mixHandle == NULL)
    {
        ::app::Uno::Diagnostics::Debug__Log_5(NULL, ::uGetConstString("Invalid Seek"), 1, ::uGetConstString("C:\\ProgramData\\Uno\\Packages\\Fuse.Animations\\0.11.3\\$.uno"), 454);
        return;
    }

    ::app::Fuse::Animations::IMixerHandle__Fuse_Triggers_StateTransition::Set(::uPtr< ::uObject*>(__this->mixHandle), ::uPtr< ::app::Fuse::Animations::Converter__Fuse_Triggers_StateTransition*>(::uPtr< ::app::Fuse::Animations::Change__Fuse_Triggers_StateTransition*>(__this->Animator_1)->ContinuousConverter)->Out(value), strength);
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Animations\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

ContinuousTrackChangeState__Fuse_Triggers_TriggerBypassMode__uType* ContinuousTrackChangeState__Fuse_Triggers_TriggerBypassMode__typeof()
{
    static ::uStaticStrong<ContinuousTrackChangeState__Fuse_Triggers_TriggerBypassMode__uType*> type;
    if (type != NULL) return type;

    type = (ContinuousTrackChangeState__Fuse_Triggers_TriggerBypassMode__uType*)::uAllocClassType(sizeof(ContinuousTrackChangeState__Fuse_Triggers_TriggerBypassMode__uType), "Fuse.Animations.ContinuousTrackChangeState<Fuse.Triggers.TriggerBypassMode>", false, 0, 2, 0);

    type->SetBaseType(::app::Fuse::Animations::TrackAnimatorState__typeof());
    type->__fp_Disable = (void(*)(::app::Fuse::Animations::AnimatorState*))ContinuousTrackChangeState__Fuse_Triggers_TriggerBypassMode__Disable;
    type->__fp_SeekValue = (void(*)(::app::Fuse::Animations::TrackAnimatorState*, ::app::Uno::Float4, float))ContinuousTrackChangeState__Fuse_Triggers_TriggerBypassMode__SeekValue;

    type->SetStrongRefs(
        "Animator", offsetof(ContinuousTrackChangeState__Fuse_Triggers_TriggerBypassMode, Animator_1),
        "mixHandle", offsetof(ContinuousTrackChangeState__Fuse_Triggers_TriggerBypassMode, mixHandle));

    return type;
}

void ContinuousTrackChangeState__Fuse_Triggers_TriggerBypassMode___ObjInit_2(ContinuousTrackChangeState__Fuse_Triggers_TriggerBypassMode* __this, ::app::Fuse::Animations::Change__Fuse_Triggers_TriggerBypassMode* animator, ::app::Fuse::Animations::CreateStateParams* p)
{
    ::app::Fuse::Animations::TrackAnimatorState___ObjInit_1(__this, (::app::Fuse::Animations::TrackAnimator*)animator, p, NULL);
    __this->Animator_1 = animator;
    __this->mixHandle = ::app::Fuse::Animations::IMixer::Register__Fuse_Triggers_TriggerBypassMode(::uPtr< ::uObject*>(::uPtr< ::app::Fuse::Animations::Change__Fuse_Triggers_TriggerBypassMode*>(__this->Animator_1)->Mixer), ::uPtr< ::app::Fuse::Animations::Change__Fuse_Triggers_TriggerBypassMode*>(__this->Animator_1)->Target(), ::uPtr< ::app::Fuse::Animations::Change__Fuse_Triggers_TriggerBypassMode*>(__this->Animator_1)->MixOp());
}

void ContinuousTrackChangeState__Fuse_Triggers_TriggerBypassMode__Disable(ContinuousTrackChangeState__Fuse_Triggers_TriggerBypassMode* __this)
{
    if (__this->mixHandle == NULL)
    {
        return;
    }

    ::app::Fuse::Animations::IMixerHandle__Fuse_Triggers_TriggerBypassMode::Unregister(::uPtr< ::uObject*>(__this->mixHandle));
    __this->mixHandle = NULL;
}

ContinuousTrackChangeState__Fuse_Triggers_TriggerBypassMode* ContinuousTrackChangeState__Fuse_Triggers_TriggerBypassMode__New_1(::uStatic* __this, ::app::Fuse::Animations::Change__Fuse_Triggers_TriggerBypassMode* animator, ::app::Fuse::Animations::CreateStateParams* p)
{
    ContinuousTrackChangeState__Fuse_Triggers_TriggerBypassMode* inst = (ContinuousTrackChangeState__Fuse_Triggers_TriggerBypassMode*)::uAllocObject(sizeof(ContinuousTrackChangeState__Fuse_Triggers_TriggerBypassMode), ContinuousTrackChangeState__Fuse_Triggers_TriggerBypassMode__typeof());
    inst->_ObjInit_2(animator, p);
    return inst;
}

void ContinuousTrackChangeState__Fuse_Triggers_TriggerBypassMode__SeekValue(ContinuousTrackChangeState__Fuse_Triggers_TriggerBypassMode* __this, ::app::Uno::Float4 value, float strength)
{
    if (__this->mixHandle == NULL)
    {
        ::app::Uno::Diagnostics::Debug__Log_5(NULL, ::uGetConstString("Invalid Seek"), 1, ::uGetConstString("C:\\ProgramData\\Uno\\Packages\\Fuse.Animations\\0.11.3\\$.uno"), 454);
        return;
    }

    ::app::Fuse::Animations::IMixerHandle__Fuse_Triggers_TriggerBypassMode::Set(::uPtr< ::uObject*>(__this->mixHandle), ::uPtr< ::app::Fuse::Animations::Converter__Fuse_Triggers_TriggerBypassMode*>(::uPtr< ::app::Fuse::Animations::Change__Fuse_Triggers_TriggerBypassMode*>(__this->Animator_1)->ContinuousConverter)->Out(value), strength);
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Animations\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

ContinuousTrackChangeState__int__uType* ContinuousTrackChangeState__int__typeof()
{
    static ::uStaticStrong<ContinuousTrackChangeState__int__uType*> type;
    if (type != NULL) return type;

    type = (ContinuousTrackChangeState__int__uType*)::uAllocClassType(sizeof(ContinuousTrackChangeState__int__uType), "Fuse.Animations.ContinuousTrackChangeState<int>", false, 0, 2, 0);

    type->SetBaseType(::app::Fuse::Animations::TrackAnimatorState__typeof());
    type->__fp_Disable = (void(*)(::app::Fuse::Animations::AnimatorState*))ContinuousTrackChangeState__int__Disable;
    type->__fp_SeekValue = (void(*)(::app::Fuse::Animations::TrackAnimatorState*, ::app::Uno::Float4, float))ContinuousTrackChangeState__int__SeekValue;

    type->SetStrongRefs(
        "Animator", offsetof(ContinuousTrackChangeState__int, Animator_1),
        "mixHandle", offsetof(ContinuousTrackChangeState__int, mixHandle));

    return type;
}

void ContinuousTrackChangeState__int___ObjInit_2(ContinuousTrackChangeState__int* __this, ::app::Fuse::Animations::Change__int* animator, ::app::Fuse::Animations::CreateStateParams* p)
{
    ::app::Fuse::Animations::TrackAnimatorState___ObjInit_1(__this, (::app::Fuse::Animations::TrackAnimator*)animator, p, NULL);
    __this->Animator_1 = animator;
    __this->mixHandle = ::app::Fuse::Animations::IMixer::Register__int(::uPtr< ::uObject*>(::uPtr< ::app::Fuse::Animations::Change__int*>(__this->Animator_1)->Mixer), ::uPtr< ::app::Fuse::Animations::Change__int*>(__this->Animator_1)->Target(), ::uPtr< ::app::Fuse::Animations::Change__int*>(__this->Animator_1)->MixOp());
}

void ContinuousTrackChangeState__int__Disable(ContinuousTrackChangeState__int* __this)
{
    if (__this->mixHandle == NULL)
    {
        return;
    }

    ::app::Fuse::Animations::IMixerHandle__int::Unregister(::uPtr< ::uObject*>(__this->mixHandle));
    __this->mixHandle = NULL;
}

ContinuousTrackChangeState__int* ContinuousTrackChangeState__int__New_1(::uStatic* __this, ::app::Fuse::Animations::Change__int* animator, ::app::Fuse::Animations::CreateStateParams* p)
{
    ContinuousTrackChangeState__int* inst = (ContinuousTrackChangeState__int*)::uAllocObject(sizeof(ContinuousTrackChangeState__int), ContinuousTrackChangeState__int__typeof());
    inst->_ObjInit_2(animator, p);
    return inst;
}

void ContinuousTrackChangeState__int__SeekValue(ContinuousTrackChangeState__int* __this, ::app::Uno::Float4 value, float strength)
{
    if (__this->mixHandle == NULL)
    {
        ::app::Uno::Diagnostics::Debug__Log_5(NULL, ::uGetConstString("Invalid Seek"), 1, ::uGetConstString("C:\\ProgramData\\Uno\\Packages\\Fuse.Animations\\0.11.3\\$.uno"), 454);
        return;
    }

    ::app::Fuse::Animations::IMixerHandle__int::Set(::uPtr< ::uObject*>(__this->mixHandle), ::uPtr< ::app::Fuse::Animations::Converter__int*>(::uPtr< ::app::Fuse::Animations::Change__int*>(__this->Animator_1)->ContinuousConverter)->Out(value), strength);
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Animations\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

ContinuousTrackChangeState__int2__uType* ContinuousTrackChangeState__int2__typeof()
{
    static ::uStaticStrong<ContinuousTrackChangeState__int2__uType*> type;
    if (type != NULL) return type;

    type = (ContinuousTrackChangeState__int2__uType*)::uAllocClassType(sizeof(ContinuousTrackChangeState__int2__uType), "Fuse.Animations.ContinuousTrackChangeState<int2>", false, 0, 2, 0);

    type->SetBaseType(::app::Fuse::Animations::TrackAnimatorState__typeof());
    type->__fp_Disable = (void(*)(::app::Fuse::Animations::AnimatorState*))ContinuousTrackChangeState__int2__Disable;
    type->__fp_SeekValue = (void(*)(::app::Fuse::Animations::TrackAnimatorState*, ::app::Uno::Float4, float))ContinuousTrackChangeState__int2__SeekValue;

    type->SetStrongRefs(
        "Animator", offsetof(ContinuousTrackChangeState__int2, Animator_1),
        "mixHandle", offsetof(ContinuousTrackChangeState__int2, mixHandle));

    return type;
}

void ContinuousTrackChangeState__int2___ObjInit_2(ContinuousTrackChangeState__int2* __this, ::app::Fuse::Animations::Change__int2* animator, ::app::Fuse::Animations::CreateStateParams* p)
{
    ::app::Fuse::Animations::TrackAnimatorState___ObjInit_1(__this, (::app::Fuse::Animations::TrackAnimator*)animator, p, NULL);
    __this->Animator_1 = animator;
    __this->mixHandle = ::app::Fuse::Animations::IMixer::Register__int2(::uPtr< ::uObject*>(::uPtr< ::app::Fuse::Animations::Change__int2*>(__this->Animator_1)->Mixer), ::uPtr< ::app::Fuse::Animations::Change__int2*>(__this->Animator_1)->Target(), ::uPtr< ::app::Fuse::Animations::Change__int2*>(__this->Animator_1)->MixOp());
}

void ContinuousTrackChangeState__int2__Disable(ContinuousTrackChangeState__int2* __this)
{
    if (__this->mixHandle == NULL)
    {
        return;
    }

    ::app::Fuse::Animations::IMixerHandle__int2::Unregister(::uPtr< ::uObject*>(__this->mixHandle));
    __this->mixHandle = NULL;
}

ContinuousTrackChangeState__int2* ContinuousTrackChangeState__int2__New_1(::uStatic* __this, ::app::Fuse::Animations::Change__int2* animator, ::app::Fuse::Animations::CreateStateParams* p)
{
    ContinuousTrackChangeState__int2* inst = (ContinuousTrackChangeState__int2*)::uAllocObject(sizeof(ContinuousTrackChangeState__int2), ContinuousTrackChangeState__int2__typeof());
    inst->_ObjInit_2(animator, p);
    return inst;
}

void ContinuousTrackChangeState__int2__SeekValue(ContinuousTrackChangeState__int2* __this, ::app::Uno::Float4 value, float strength)
{
    if (__this->mixHandle == NULL)
    {
        ::app::Uno::Diagnostics::Debug__Log_5(NULL, ::uGetConstString("Invalid Seek"), 1, ::uGetConstString("C:\\ProgramData\\Uno\\Packages\\Fuse.Animations\\0.11.3\\$.uno"), 454);
        return;
    }

    ::app::Fuse::Animations::IMixerHandle__int2::Set(::uPtr< ::uObject*>(__this->mixHandle), ::uPtr< ::app::Fuse::Animations::Converter__int2*>(::uPtr< ::app::Fuse::Animations::Change__int2*>(__this->Animator_1)->ContinuousConverter)->Out(value), strength);
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Animations\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

ContinuousTrackChangeState__int3__uType* ContinuousTrackChangeState__int3__typeof()
{
    static ::uStaticStrong<ContinuousTrackChangeState__int3__uType*> type;
    if (type != NULL) return type;

    type = (ContinuousTrackChangeState__int3__uType*)::uAllocClassType(sizeof(ContinuousTrackChangeState__int3__uType), "Fuse.Animations.ContinuousTrackChangeState<int3>", false, 0, 2, 0);

    type->SetBaseType(::app::Fuse::Animations::TrackAnimatorState__typeof());
    type->__fp_Disable = (void(*)(::app::Fuse::Animations::AnimatorState*))ContinuousTrackChangeState__int3__Disable;
    type->__fp_SeekValue = (void(*)(::app::Fuse::Animations::TrackAnimatorState*, ::app::Uno::Float4, float))ContinuousTrackChangeState__int3__SeekValue;

    type->SetStrongRefs(
        "Animator", offsetof(ContinuousTrackChangeState__int3, Animator_1),
        "mixHandle", offsetof(ContinuousTrackChangeState__int3, mixHandle));

    return type;
}

void ContinuousTrackChangeState__int3___ObjInit_2(ContinuousTrackChangeState__int3* __this, ::app::Fuse::Animations::Change__int3* animator, ::app::Fuse::Animations::CreateStateParams* p)
{
    ::app::Fuse::Animations::TrackAnimatorState___ObjInit_1(__this, (::app::Fuse::Animations::TrackAnimator*)animator, p, NULL);
    __this->Animator_1 = animator;
    __this->mixHandle = ::app::Fuse::Animations::IMixer::Register__int3(::uPtr< ::uObject*>(::uPtr< ::app::Fuse::Animations::Change__int3*>(__this->Animator_1)->Mixer), ::uPtr< ::app::Fuse::Animations::Change__int3*>(__this->Animator_1)->Target(), ::uPtr< ::app::Fuse::Animations::Change__int3*>(__this->Animator_1)->MixOp());
}

void ContinuousTrackChangeState__int3__Disable(ContinuousTrackChangeState__int3* __this)
{
    if (__this->mixHandle == NULL)
    {
        return;
    }

    ::app::Fuse::Animations::IMixerHandle__int3::Unregister(::uPtr< ::uObject*>(__this->mixHandle));
    __this->mixHandle = NULL;
}

ContinuousTrackChangeState__int3* ContinuousTrackChangeState__int3__New_1(::uStatic* __this, ::app::Fuse::Animations::Change__int3* animator, ::app::Fuse::Animations::CreateStateParams* p)
{
    ContinuousTrackChangeState__int3* inst = (ContinuousTrackChangeState__int3*)::uAllocObject(sizeof(ContinuousTrackChangeState__int3), ContinuousTrackChangeState__int3__typeof());
    inst->_ObjInit_2(animator, p);
    return inst;
}

void ContinuousTrackChangeState__int3__SeekValue(ContinuousTrackChangeState__int3* __this, ::app::Uno::Float4 value, float strength)
{
    if (__this->mixHandle == NULL)
    {
        ::app::Uno::Diagnostics::Debug__Log_5(NULL, ::uGetConstString("Invalid Seek"), 1, ::uGetConstString("C:\\ProgramData\\Uno\\Packages\\Fuse.Animations\\0.11.3\\$.uno"), 454);
        return;
    }

    ::app::Fuse::Animations::IMixerHandle__int3::Set(::uPtr< ::uObject*>(__this->mixHandle), ::uPtr< ::app::Fuse::Animations::Converter__int3*>(::uPtr< ::app::Fuse::Animations::Change__int3*>(__this->Animator_1)->ContinuousConverter)->Out(value), strength);
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Animations\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

ContinuousTrackChangeState__int4__uType* ContinuousTrackChangeState__int4__typeof()
{
    static ::uStaticStrong<ContinuousTrackChangeState__int4__uType*> type;
    if (type != NULL) return type;

    type = (ContinuousTrackChangeState__int4__uType*)::uAllocClassType(sizeof(ContinuousTrackChangeState__int4__uType), "Fuse.Animations.ContinuousTrackChangeState<int4>", false, 0, 2, 0);

    type->SetBaseType(::app::Fuse::Animations::TrackAnimatorState__typeof());
    type->__fp_Disable = (void(*)(::app::Fuse::Animations::AnimatorState*))ContinuousTrackChangeState__int4__Disable;
    type->__fp_SeekValue = (void(*)(::app::Fuse::Animations::TrackAnimatorState*, ::app::Uno::Float4, float))ContinuousTrackChangeState__int4__SeekValue;

    type->SetStrongRefs(
        "Animator", offsetof(ContinuousTrackChangeState__int4, Animator_1),
        "mixHandle", offsetof(ContinuousTrackChangeState__int4, mixHandle));

    return type;
}

void ContinuousTrackChangeState__int4___ObjInit_2(ContinuousTrackChangeState__int4* __this, ::app::Fuse::Animations::Change__int4* animator, ::app::Fuse::Animations::CreateStateParams* p)
{
    ::app::Fuse::Animations::TrackAnimatorState___ObjInit_1(__this, (::app::Fuse::Animations::TrackAnimator*)animator, p, NULL);
    __this->Animator_1 = animator;
    __this->mixHandle = ::app::Fuse::Animations::IMixer::Register__int4(::uPtr< ::uObject*>(::uPtr< ::app::Fuse::Animations::Change__int4*>(__this->Animator_1)->Mixer), ::uPtr< ::app::Fuse::Animations::Change__int4*>(__this->Animator_1)->Target(), ::uPtr< ::app::Fuse::Animations::Change__int4*>(__this->Animator_1)->MixOp());
}

void ContinuousTrackChangeState__int4__Disable(ContinuousTrackChangeState__int4* __this)
{
    if (__this->mixHandle == NULL)
    {
        return;
    }

    ::app::Fuse::Animations::IMixerHandle__int4::Unregister(::uPtr< ::uObject*>(__this->mixHandle));
    __this->mixHandle = NULL;
}

ContinuousTrackChangeState__int4* ContinuousTrackChangeState__int4__New_1(::uStatic* __this, ::app::Fuse::Animations::Change__int4* animator, ::app::Fuse::Animations::CreateStateParams* p)
{
    ContinuousTrackChangeState__int4* inst = (ContinuousTrackChangeState__int4*)::uAllocObject(sizeof(ContinuousTrackChangeState__int4), ContinuousTrackChangeState__int4__typeof());
    inst->_ObjInit_2(animator, p);
    return inst;
}

void ContinuousTrackChangeState__int4__SeekValue(ContinuousTrackChangeState__int4* __this, ::app::Uno::Float4 value, float strength)
{
    if (__this->mixHandle == NULL)
    {
        ::app::Uno::Diagnostics::Debug__Log_5(NULL, ::uGetConstString("Invalid Seek"), 1, ::uGetConstString("C:\\ProgramData\\Uno\\Packages\\Fuse.Animations\\0.11.3\\$.uno"), 454);
        return;
    }

    ::app::Fuse::Animations::IMixerHandle__int4::Set(::uPtr< ::uObject*>(__this->mixHandle), ::uPtr< ::app::Fuse::Animations::Converter__int4*>(::uPtr< ::app::Fuse::Animations::Change__int4*>(__this->Animator_1)->ContinuousConverter)->Out(value), strength);
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Animations\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

ContinuousTrackChangeState__long__uType* ContinuousTrackChangeState__long__typeof()
{
    static ::uStaticStrong<ContinuousTrackChangeState__long__uType*> type;
    if (type != NULL) return type;

    type = (ContinuousTrackChangeState__long__uType*)::uAllocClassType(sizeof(ContinuousTrackChangeState__long__uType), "Fuse.Animations.ContinuousTrackChangeState<long>", false, 0, 2, 0);

    type->SetBaseType(::app::Fuse::Animations::TrackAnimatorState__typeof());
    type->__fp_Disable = (void(*)(::app::Fuse::Animations::AnimatorState*))ContinuousTrackChangeState__long__Disable;
    type->__fp_SeekValue = (void(*)(::app::Fuse::Animations::TrackAnimatorState*, ::app::Uno::Float4, float))ContinuousTrackChangeState__long__SeekValue;

    type->SetStrongRefs(
        "Animator", offsetof(ContinuousTrackChangeState__long, Animator_1),
        "mixHandle", offsetof(ContinuousTrackChangeState__long, mixHandle));

    return type;
}

void ContinuousTrackChangeState__long___ObjInit_2(ContinuousTrackChangeState__long* __this, ::app::Fuse::Animations::Change__long* animator, ::app::Fuse::Animations::CreateStateParams* p)
{
    ::app::Fuse::Animations::TrackAnimatorState___ObjInit_1(__this, (::app::Fuse::Animations::TrackAnimator*)animator, p, NULL);
    __this->Animator_1 = animator;
    __this->mixHandle = ::app::Fuse::Animations::IMixer::Register__long(::uPtr< ::uObject*>(::uPtr< ::app::Fuse::Animations::Change__long*>(__this->Animator_1)->Mixer), ::uPtr< ::app::Fuse::Animations::Change__long*>(__this->Animator_1)->Target(), ::uPtr< ::app::Fuse::Animations::Change__long*>(__this->Animator_1)->MixOp());
}

void ContinuousTrackChangeState__long__Disable(ContinuousTrackChangeState__long* __this)
{
    if (__this->mixHandle == NULL)
    {
        return;
    }

    ::app::Fuse::Animations::IMixerHandle__long::Unregister(::uPtr< ::uObject*>(__this->mixHandle));
    __this->mixHandle = NULL;
}

ContinuousTrackChangeState__long* ContinuousTrackChangeState__long__New_1(::uStatic* __this, ::app::Fuse::Animations::Change__long* animator, ::app::Fuse::Animations::CreateStateParams* p)
{
    ContinuousTrackChangeState__long* inst = (ContinuousTrackChangeState__long*)::uAllocObject(sizeof(ContinuousTrackChangeState__long), ContinuousTrackChangeState__long__typeof());
    inst->_ObjInit_2(animator, p);
    return inst;
}

void ContinuousTrackChangeState__long__SeekValue(ContinuousTrackChangeState__long* __this, ::app::Uno::Float4 value, float strength)
{
    if (__this->mixHandle == NULL)
    {
        ::app::Uno::Diagnostics::Debug__Log_5(NULL, ::uGetConstString("Invalid Seek"), 1, ::uGetConstString("C:\\ProgramData\\Uno\\Packages\\Fuse.Animations\\0.11.3\\$.uno"), 454);
        return;
    }

    ::app::Fuse::Animations::IMixerHandle__long::Set(::uPtr< ::uObject*>(__this->mixHandle), ::uPtr< ::app::Fuse::Animations::Converter__long*>(::uPtr< ::app::Fuse::Animations::Change__long*>(__this->Animator_1)->ContinuousConverter)->Out(value), strength);
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Animations\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

ContinuousTrackChangeState__object__uType* ContinuousTrackChangeState__object__typeof()
{
    static ::uStaticStrong<ContinuousTrackChangeState__object__uType*> type;
    if (type != NULL) return type;

    type = (ContinuousTrackChangeState__object__uType*)::uAllocClassType(sizeof(ContinuousTrackChangeState__object__uType), "Fuse.Animations.ContinuousTrackChangeState<object>", false, 0, 2, 0);

    type->SetBaseType(::app::Fuse::Animations::TrackAnimatorState__typeof());
    type->__fp_Disable = (void(*)(::app::Fuse::Animations::AnimatorState*))ContinuousTrackChangeState__object__Disable;
    type->__fp_SeekValue = (void(*)(::app::Fuse::Animations::TrackAnimatorState*, ::app::Uno::Float4, float))ContinuousTrackChangeState__object__SeekValue;

    type->SetStrongRefs(
        "Animator", offsetof(ContinuousTrackChangeState__object, Animator_1),
        "mixHandle", offsetof(ContinuousTrackChangeState__object, mixHandle));

    return type;
}

void ContinuousTrackChangeState__object___ObjInit_2(ContinuousTrackChangeState__object* __this, ::app::Fuse::Animations::Change__object* animator, ::app::Fuse::Animations::CreateStateParams* p)
{
    ::app::Fuse::Animations::TrackAnimatorState___ObjInit_1(__this, (::app::Fuse::Animations::TrackAnimator*)animator, p, NULL);
    __this->Animator_1 = animator;
    __this->mixHandle = ::app::Fuse::Animations::IMixer::Register__object(::uPtr< ::uObject*>(::uPtr< ::app::Fuse::Animations::Change__object*>(__this->Animator_1)->Mixer), ::uPtr< ::app::Fuse::Animations::Change__object*>(__this->Animator_1)->Target(), ::uPtr< ::app::Fuse::Animations::Change__object*>(__this->Animator_1)->MixOp());
}

void ContinuousTrackChangeState__object__Disable(ContinuousTrackChangeState__object* __this)
{
    if (__this->mixHandle == NULL)
    {
        return;
    }

    ::app::Fuse::Animations::IMixerHandle__object::Unregister(::uPtr< ::uObject*>(__this->mixHandle));
    __this->mixHandle = NULL;
}

ContinuousTrackChangeState__object* ContinuousTrackChangeState__object__New_1(::uStatic* __this, ::app::Fuse::Animations::Change__object* animator, ::app::Fuse::Animations::CreateStateParams* p)
{
    ContinuousTrackChangeState__object* inst = (ContinuousTrackChangeState__object*)::uAllocObject(sizeof(ContinuousTrackChangeState__object), ContinuousTrackChangeState__object__typeof());
    inst->_ObjInit_2(animator, p);
    return inst;
}

void ContinuousTrackChangeState__object__SeekValue(ContinuousTrackChangeState__object* __this, ::app::Uno::Float4 value, float strength)
{
    if (__this->mixHandle == NULL)
    {
        ::app::Uno::Diagnostics::Debug__Log_5(NULL, ::uGetConstString("Invalid Seek"), 1, ::uGetConstString("C:\\ProgramData\\Uno\\Packages\\Fuse.Animations\\0.11.3\\$.uno"), 454);
        return;
    }

    ::app::Fuse::Animations::IMixerHandle__object::Set(::uPtr< ::uObject*>(__this->mixHandle), ::uPtr< ::app::Fuse::Animations::Converter__object*>(::uPtr< ::app::Fuse::Animations::Change__object*>(__this->Animator_1)->ContinuousConverter)->Out(value), strength);
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Animations\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

ContinuousTrackChangeState__short__uType* ContinuousTrackChangeState__short__typeof()
{
    static ::uStaticStrong<ContinuousTrackChangeState__short__uType*> type;
    if (type != NULL) return type;

    type = (ContinuousTrackChangeState__short__uType*)::uAllocClassType(sizeof(ContinuousTrackChangeState__short__uType), "Fuse.Animations.ContinuousTrackChangeState<short>", false, 0, 2, 0);

    type->SetBaseType(::app::Fuse::Animations::TrackAnimatorState__typeof());
    type->__fp_Disable = (void(*)(::app::Fuse::Animations::AnimatorState*))ContinuousTrackChangeState__short__Disable;
    type->__fp_SeekValue = (void(*)(::app::Fuse::Animations::TrackAnimatorState*, ::app::Uno::Float4, float))ContinuousTrackChangeState__short__SeekValue;

    type->SetStrongRefs(
        "Animator", offsetof(ContinuousTrackChangeState__short, Animator_1),
        "mixHandle", offsetof(ContinuousTrackChangeState__short, mixHandle));

    return type;
}

void ContinuousTrackChangeState__short___ObjInit_2(ContinuousTrackChangeState__short* __this, ::app::Fuse::Animations::Change__short* animator, ::app::Fuse::Animations::CreateStateParams* p)
{
    ::app::Fuse::Animations::TrackAnimatorState___ObjInit_1(__this, (::app::Fuse::Animations::TrackAnimator*)animator, p, NULL);
    __this->Animator_1 = animator;
    __this->mixHandle = ::app::Fuse::Animations::IMixer::Register__short(::uPtr< ::uObject*>(::uPtr< ::app::Fuse::Animations::Change__short*>(__this->Animator_1)->Mixer), ::uPtr< ::app::Fuse::Animations::Change__short*>(__this->Animator_1)->Target(), ::uPtr< ::app::Fuse::Animations::Change__short*>(__this->Animator_1)->MixOp());
}

void ContinuousTrackChangeState__short__Disable(ContinuousTrackChangeState__short* __this)
{
    if (__this->mixHandle == NULL)
    {
        return;
    }

    ::app::Fuse::Animations::IMixerHandle__short::Unregister(::uPtr< ::uObject*>(__this->mixHandle));
    __this->mixHandle = NULL;
}

ContinuousTrackChangeState__short* ContinuousTrackChangeState__short__New_1(::uStatic* __this, ::app::Fuse::Animations::Change__short* animator, ::app::Fuse::Animations::CreateStateParams* p)
{
    ContinuousTrackChangeState__short* inst = (ContinuousTrackChangeState__short*)::uAllocObject(sizeof(ContinuousTrackChangeState__short), ContinuousTrackChangeState__short__typeof());
    inst->_ObjInit_2(animator, p);
    return inst;
}

void ContinuousTrackChangeState__short__SeekValue(ContinuousTrackChangeState__short* __this, ::app::Uno::Float4 value, float strength)
{
    if (__this->mixHandle == NULL)
    {
        ::app::Uno::Diagnostics::Debug__Log_5(NULL, ::uGetConstString("Invalid Seek"), 1, ::uGetConstString("C:\\ProgramData\\Uno\\Packages\\Fuse.Animations\\0.11.3\\$.uno"), 454);
        return;
    }

    ::app::Fuse::Animations::IMixerHandle__short::Set(::uPtr< ::uObject*>(__this->mixHandle), ::uPtr< ::app::Fuse::Animations::Converter__short*>(::uPtr< ::app::Fuse::Animations::Change__short*>(__this->Animator_1)->ContinuousConverter)->Out(value), strength);
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Animations\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

ContinuousTrackChangeState__string__uType* ContinuousTrackChangeState__string__typeof()
{
    static ::uStaticStrong<ContinuousTrackChangeState__string__uType*> type;
    if (type != NULL) return type;

    type = (ContinuousTrackChangeState__string__uType*)::uAllocClassType(sizeof(ContinuousTrackChangeState__string__uType), "Fuse.Animations.ContinuousTrackChangeState<string>", false, 0, 2, 0);

    type->SetBaseType(::app::Fuse::Animations::TrackAnimatorState__typeof());
    type->__fp_Disable = (void(*)(::app::Fuse::Animations::AnimatorState*))ContinuousTrackChangeState__string__Disable;
    type->__fp_SeekValue = (void(*)(::app::Fuse::Animations::TrackAnimatorState*, ::app::Uno::Float4, float))ContinuousTrackChangeState__string__SeekValue;

    type->SetStrongRefs(
        "Animator", offsetof(ContinuousTrackChangeState__string, Animator_1),
        "mixHandle", offsetof(ContinuousTrackChangeState__string, mixHandle));

    return type;
}

void ContinuousTrackChangeState__string___ObjInit_2(ContinuousTrackChangeState__string* __this, ::app::Fuse::Animations::Change__string* animator, ::app::Fuse::Animations::CreateStateParams* p)
{
    ::app::Fuse::Animations::TrackAnimatorState___ObjInit_1(__this, (::app::Fuse::Animations::TrackAnimator*)animator, p, NULL);
    __this->Animator_1 = animator;
    __this->mixHandle = ::app::Fuse::Animations::IMixer::Register__string(::uPtr< ::uObject*>(::uPtr< ::app::Fuse::Animations::Change__string*>(__this->Animator_1)->Mixer), ::uPtr< ::app::Fuse::Animations::Change__string*>(__this->Animator_1)->Target(), ::uPtr< ::app::Fuse::Animations::Change__string*>(__this->Animator_1)->MixOp());
}

void ContinuousTrackChangeState__string__Disable(ContinuousTrackChangeState__string* __this)
{
    if (__this->mixHandle == NULL)
    {
        return;
    }

    ::app::Fuse::Animations::IMixerHandle__string::Unregister(::uPtr< ::uObject*>(__this->mixHandle));
    __this->mixHandle = NULL;
}

ContinuousTrackChangeState__string* ContinuousTrackChangeState__string__New_1(::uStatic* __this, ::app::Fuse::Animations::Change__string* animator, ::app::Fuse::Animations::CreateStateParams* p)
{
    ContinuousTrackChangeState__string* inst = (ContinuousTrackChangeState__string*)::uAllocObject(sizeof(ContinuousTrackChangeState__string), ContinuousTrackChangeState__string__typeof());
    inst->_ObjInit_2(animator, p);
    return inst;
}

void ContinuousTrackChangeState__string__SeekValue(ContinuousTrackChangeState__string* __this, ::app::Uno::Float4 value, float strength)
{
    if (__this->mixHandle == NULL)
    {
        ::app::Uno::Diagnostics::Debug__Log_5(NULL, ::uGetConstString("Invalid Seek"), 1, ::uGetConstString("C:\\ProgramData\\Uno\\Packages\\Fuse.Animations\\0.11.3\\$.uno"), 454);
        return;
    }

    ::app::Fuse::Animations::IMixerHandle__string::Set(::uPtr< ::uObject*>(__this->mixHandle), ::uPtr< ::app::Fuse::Animations::Converter__string*>(::uPtr< ::app::Fuse::Animations::Change__string*>(__this->Animator_1)->ContinuousConverter)->Out(value), strength);
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Animations\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

ContinuousTrackChangeState__Uno_EventArgs__uType* ContinuousTrackChangeState__Uno_EventArgs__typeof()
{
    static ::uStaticStrong<ContinuousTrackChangeState__Uno_EventArgs__uType*> type;
    if (type != NULL) return type;

    type = (ContinuousTrackChangeState__Uno_EventArgs__uType*)::uAllocClassType(sizeof(ContinuousTrackChangeState__Uno_EventArgs__uType), "Fuse.Animations.ContinuousTrackChangeState<Uno.EventArgs>", false, 0, 2, 0);

    type->SetBaseType(::app::Fuse::Animations::TrackAnimatorState__typeof());
    type->__fp_Disable = (void(*)(::app::Fuse::Animations::AnimatorState*))ContinuousTrackChangeState__Uno_EventArgs__Disable;
    type->__fp_SeekValue = (void(*)(::app::Fuse::Animations::TrackAnimatorState*, ::app::Uno::Float4, float))ContinuousTrackChangeState__Uno_EventArgs__SeekValue;

    type->SetStrongRefs(
        "Animator", offsetof(ContinuousTrackChangeState__Uno_EventArgs, Animator_1),
        "mixHandle", offsetof(ContinuousTrackChangeState__Uno_EventArgs, mixHandle));

    return type;
}

void ContinuousTrackChangeState__Uno_EventArgs___ObjInit_2(ContinuousTrackChangeState__Uno_EventArgs* __this, ::app::Fuse::Animations::Change__Uno_EventArgs* animator, ::app::Fuse::Animations::CreateStateParams* p)
{
    ::app::Fuse::Animations::TrackAnimatorState___ObjInit_1(__this, (::app::Fuse::Animations::TrackAnimator*)animator, p, NULL);
    __this->Animator_1 = animator;
    __this->mixHandle = ::app::Fuse::Animations::IMixer::Register__Uno_EventArgs(::uPtr< ::uObject*>(::uPtr< ::app::Fuse::Animations::Change__Uno_EventArgs*>(__this->Animator_1)->Mixer), ::uPtr< ::app::Fuse::Animations::Change__Uno_EventArgs*>(__this->Animator_1)->Target(), ::uPtr< ::app::Fuse::Animations::Change__Uno_EventArgs*>(__this->Animator_1)->MixOp());
}

void ContinuousTrackChangeState__Uno_EventArgs__Disable(ContinuousTrackChangeState__Uno_EventArgs* __this)
{
    if (__this->mixHandle == NULL)
    {
        return;
    }

    ::app::Fuse::Animations::IMixerHandle__Uno_EventArgs::Unregister(::uPtr< ::uObject*>(__this->mixHandle));
    __this->mixHandle = NULL;
}

ContinuousTrackChangeState__Uno_EventArgs* ContinuousTrackChangeState__Uno_EventArgs__New_1(::uStatic* __this, ::app::Fuse::Animations::Change__Uno_EventArgs* animator, ::app::Fuse::Animations::CreateStateParams* p)
{
    ContinuousTrackChangeState__Uno_EventArgs* inst = (ContinuousTrackChangeState__Uno_EventArgs*)::uAllocObject(sizeof(ContinuousTrackChangeState__Uno_EventArgs), ContinuousTrackChangeState__Uno_EventArgs__typeof());
    inst->_ObjInit_2(animator, p);
    return inst;
}

void ContinuousTrackChangeState__Uno_EventArgs__SeekValue(ContinuousTrackChangeState__Uno_EventArgs* __this, ::app::Uno::Float4 value, float strength)
{
    if (__this->mixHandle == NULL)
    {
        ::app::Uno::Diagnostics::Debug__Log_5(NULL, ::uGetConstString("Invalid Seek"), 1, ::uGetConstString("C:\\ProgramData\\Uno\\Packages\\Fuse.Animations\\0.11.3\\$.uno"), 454);
        return;
    }

    ::app::Fuse::Animations::IMixerHandle__Uno_EventArgs::Set(::uPtr< ::uObject*>(__this->mixHandle), ::uPtr< ::app::Fuse::Animations::Converter__Uno_EventArgs*>(::uPtr< ::app::Fuse::Animations::Change__Uno_EventArgs*>(__this->Animator_1)->ContinuousConverter)->Out(value), strength);
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Animations\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

ContinuousTrackChangeState__Uno_Platform_iOS_StatusBarStyle__uType* ContinuousTrackChangeState__Uno_Platform_iOS_StatusBarStyle__typeof()
{
    static ::uStaticStrong<ContinuousTrackChangeState__Uno_Platform_iOS_StatusBarStyle__uType*> type;
    if (type != NULL) return type;

    type = (ContinuousTrackChangeState__Uno_Platform_iOS_StatusBarStyle__uType*)::uAllocClassType(sizeof(ContinuousTrackChangeState__Uno_Platform_iOS_StatusBarStyle__uType), "Fuse.Animations.ContinuousTrackChangeState<Uno.Platform.iOS.StatusBarStyle>", false, 0, 2, 0);

    type->SetBaseType(::app::Fuse::Animations::TrackAnimatorState__typeof());
    type->__fp_Disable = (void(*)(::app::Fuse::Animations::AnimatorState*))ContinuousTrackChangeState__Uno_Platform_iOS_StatusBarStyle__Disable;
    type->__fp_SeekValue = (void(*)(::app::Fuse::Animations::TrackAnimatorState*, ::app::Uno::Float4, float))ContinuousTrackChangeState__Uno_Platform_iOS_StatusBarStyle__SeekValue;

    type->SetStrongRefs(
        "Animator", offsetof(ContinuousTrackChangeState__Uno_Platform_iOS_StatusBarStyle, Animator_1),
        "mixHandle", offsetof(ContinuousTrackChangeState__Uno_Platform_iOS_StatusBarStyle, mixHandle));

    return type;
}

void ContinuousTrackChangeState__Uno_Platform_iOS_StatusBarStyle___ObjInit_2(ContinuousTrackChangeState__Uno_Platform_iOS_StatusBarStyle* __this, ::app::Fuse::Animations::Change__Uno_Platform_iOS_StatusBarStyle* animator, ::app::Fuse::Animations::CreateStateParams* p)
{
    ::app::Fuse::Animations::TrackAnimatorState___ObjInit_1(__this, (::app::Fuse::Animations::TrackAnimator*)animator, p, NULL);
    __this->Animator_1 = animator;
    __this->mixHandle = ::app::Fuse::Animations::IMixer::Register__Uno_Platform_iOS_StatusBarStyle(::uPtr< ::uObject*>(::uPtr< ::app::Fuse::Animations::Change__Uno_Platform_iOS_StatusBarStyle*>(__this->Animator_1)->Mixer), ::uPtr< ::app::Fuse::Animations::Change__Uno_Platform_iOS_StatusBarStyle*>(__this->Animator_1)->Target(), ::uPtr< ::app::Fuse::Animations::Change__Uno_Platform_iOS_StatusBarStyle*>(__this->Animator_1)->MixOp());
}

void ContinuousTrackChangeState__Uno_Platform_iOS_StatusBarStyle__Disable(ContinuousTrackChangeState__Uno_Platform_iOS_StatusBarStyle* __this)
{
    if (__this->mixHandle == NULL)
    {
        return;
    }

    ::app::Fuse::Animations::IMixerHandle__Uno_Platform_iOS_StatusBarStyle::Unregister(::uPtr< ::uObject*>(__this->mixHandle));
    __this->mixHandle = NULL;
}

ContinuousTrackChangeState__Uno_Platform_iOS_StatusBarStyle* ContinuousTrackChangeState__Uno_Platform_iOS_StatusBarStyle__New_1(::uStatic* __this, ::app::Fuse::Animations::Change__Uno_Platform_iOS_StatusBarStyle* animator, ::app::Fuse::Animations::CreateStateParams* p)
{
    ContinuousTrackChangeState__Uno_Platform_iOS_StatusBarStyle* inst = (ContinuousTrackChangeState__Uno_Platform_iOS_StatusBarStyle*)::uAllocObject(sizeof(ContinuousTrackChangeState__Uno_Platform_iOS_StatusBarStyle), ContinuousTrackChangeState__Uno_Platform_iOS_StatusBarStyle__typeof());
    inst->_ObjInit_2(animator, p);
    return inst;
}

void ContinuousTrackChangeState__Uno_Platform_iOS_StatusBarStyle__SeekValue(ContinuousTrackChangeState__Uno_Platform_iOS_StatusBarStyle* __this, ::app::Uno::Float4 value, float strength)
{
    if (__this->mixHandle == NULL)
    {
        ::app::Uno::Diagnostics::Debug__Log_5(NULL, ::uGetConstString("Invalid Seek"), 1, ::uGetConstString("C:\\ProgramData\\Uno\\Packages\\Fuse.Animations\\0.11.3\\$.uno"), 454);
        return;
    }

    ::app::Fuse::Animations::IMixerHandle__Uno_Platform_iOS_StatusBarStyle::Set(::uPtr< ::uObject*>(__this->mixHandle), ::uPtr< ::app::Fuse::Animations::Converter__Uno_Platform_iOS_StatusBarStyle*>(::uPtr< ::app::Fuse::Animations::Change__Uno_Platform_iOS_StatusBarStyle*>(__this->Animator_1)->ContinuousConverter)->Out(value), strength);
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Animations\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

ContinuousTrackChangeState__Uno_UX_FileSource__uType* ContinuousTrackChangeState__Uno_UX_FileSource__typeof()
{
    static ::uStaticStrong<ContinuousTrackChangeState__Uno_UX_FileSource__uType*> type;
    if (type != NULL) return type;

    type = (ContinuousTrackChangeState__Uno_UX_FileSource__uType*)::uAllocClassType(sizeof(ContinuousTrackChangeState__Uno_UX_FileSource__uType), "Fuse.Animations.ContinuousTrackChangeState<Uno.UX.FileSource>", false, 0, 2, 0);

    type->SetBaseType(::app::Fuse::Animations::TrackAnimatorState__typeof());
    type->__fp_Disable = (void(*)(::app::Fuse::Animations::AnimatorState*))ContinuousTrackChangeState__Uno_UX_FileSource__Disable;
    type->__fp_SeekValue = (void(*)(::app::Fuse::Animations::TrackAnimatorState*, ::app::Uno::Float4, float))ContinuousTrackChangeState__Uno_UX_FileSource__SeekValue;

    type->SetStrongRefs(
        "Animator", offsetof(ContinuousTrackChangeState__Uno_UX_FileSource, Animator_1),
        "mixHandle", offsetof(ContinuousTrackChangeState__Uno_UX_FileSource, mixHandle));

    return type;
}

void ContinuousTrackChangeState__Uno_UX_FileSource___ObjInit_2(ContinuousTrackChangeState__Uno_UX_FileSource* __this, ::app::Fuse::Animations::Change__Uno_UX_FileSource* animator, ::app::Fuse::Animations::CreateStateParams* p)
{
    ::app::Fuse::Animations::TrackAnimatorState___ObjInit_1(__this, (::app::Fuse::Animations::TrackAnimator*)animator, p, NULL);
    __this->Animator_1 = animator;
    __this->mixHandle = ::app::Fuse::Animations::IMixer::Register__Uno_UX_FileSource(::uPtr< ::uObject*>(::uPtr< ::app::Fuse::Animations::Change__Uno_UX_FileSource*>(__this->Animator_1)->Mixer), ::uPtr< ::app::Fuse::Animations::Change__Uno_UX_FileSource*>(__this->Animator_1)->Target(), ::uPtr< ::app::Fuse::Animations::Change__Uno_UX_FileSource*>(__this->Animator_1)->MixOp());
}

void ContinuousTrackChangeState__Uno_UX_FileSource__Disable(ContinuousTrackChangeState__Uno_UX_FileSource* __this)
{
    if (__this->mixHandle == NULL)
    {
        return;
    }

    ::app::Fuse::Animations::IMixerHandle__Uno_UX_FileSource::Unregister(::uPtr< ::uObject*>(__this->mixHandle));
    __this->mixHandle = NULL;
}

ContinuousTrackChangeState__Uno_UX_FileSource* ContinuousTrackChangeState__Uno_UX_FileSource__New_1(::uStatic* __this, ::app::Fuse::Animations::Change__Uno_UX_FileSource* animator, ::app::Fuse::Animations::CreateStateParams* p)
{
    ContinuousTrackChangeState__Uno_UX_FileSource* inst = (ContinuousTrackChangeState__Uno_UX_FileSource*)::uAllocObject(sizeof(ContinuousTrackChangeState__Uno_UX_FileSource), ContinuousTrackChangeState__Uno_UX_FileSource__typeof());
    inst->_ObjInit_2(animator, p);
    return inst;
}

void ContinuousTrackChangeState__Uno_UX_FileSource__SeekValue(ContinuousTrackChangeState__Uno_UX_FileSource* __this, ::app::Uno::Float4 value, float strength)
{
    if (__this->mixHandle == NULL)
    {
        ::app::Uno::Diagnostics::Debug__Log_5(NULL, ::uGetConstString("Invalid Seek"), 1, ::uGetConstString("C:\\ProgramData\\Uno\\Packages\\Fuse.Animations\\0.11.3\\$.uno"), 454);
        return;
    }

    ::app::Fuse::Animations::IMixerHandle__Uno_UX_FileSource::Set(::uPtr< ::uObject*>(__this->mixHandle), ::uPtr< ::app::Fuse::Animations::Converter__Uno_UX_FileSource*>(::uPtr< ::app::Fuse::Animations::Change__Uno_UX_FileSource*>(__this->Animator_1)->ContinuousConverter)->Out(value), strength);
}

}}}
