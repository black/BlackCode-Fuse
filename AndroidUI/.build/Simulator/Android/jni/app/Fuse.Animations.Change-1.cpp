#include <app/Fuse.Animations.AnimationVariant.h>
#include <app/Fuse.Animations.Animator.h>
#include <app/Fuse.Animations.AnimatorState.h>
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
#include <app/Fuse.Animations.ConverterDouble.h>
#include <app/Fuse.Animations.ConverterFloat.h>
#include <app/Fuse.Animations.ConverterFloat2.h>
#include <app/Fuse.Animations.ConverterFloat3.h>
#include <app/Fuse.Animations.ConverterFloat4.h>
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
#include <app/Fuse.Animations.KeyframeInterpolation.h>
#include <app/Fuse.Animations.Mixer.h>
#include <app/Fuse.Animations.MixOp.h>
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
#include <app/Uno.ArgumentNullException.h>
#include <app/Uno.Bool.h>
#include <app/Uno.Char.h>
#include <app/Uno.Double.h>
#include <app/Uno.EventArgs.h>
#include <app/Uno.Exception.h>
#include <app/Uno.Float.h>
#include <app/Uno.Float3.h>
#include <app/Uno.Float4.h>
#include <app/Uno.Int.h>
#include <app/Uno.Long.h>
#include <app/Uno.Math.h>
#include <app/Uno.Object.h>
#include <app/Uno.Platform.iOS.StatusBarStyle.h>
#include <app/Uno.Short.h>
#include <app/Uno.String.h>
#include <app/Uno.Type.h>
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

Change__bool__uType* Change__bool__typeof()
{
    static ::uStaticStrong<Change__bool__uType*> type;
    if (type != NULL) return type;

    type = (Change__bool__uType*)::uAllocClassType(sizeof(Change__bool__uType), "Fuse.Animations.Change<bool>", false, 0, 2, 0);

    type->SetBaseType(::app::Fuse::Animations::TrackAnimator__typeof());
    type->__fp_CreateState = (::app::Fuse::Animations::AnimatorState*(*)(::app::Fuse::Animations::Animator*, ::app::Fuse::Animations::CreateStateParams*))Change__bool__CreateState;

    type->SetStrongRefs(
        "_Target", offsetof(Change__bool, _Target),
        "ContinuousConverter", offsetof(Change__bool, ContinuousConverter));

    type->SetFields(1,
        ::uNewField("ContinuousConverter", NULL, offsetof(Change__bool, ContinuousConverter), ::app::Fuse::Animations::Converter__bool__typeof()));

    type->SetFunctions(22,
        ::uNewFunction("get_DegreesX", Change__bool__get_DegreesX, 0, false, ::app::Uno::Float__typeof()),
        ::uNewFunction("get_DegreesXY", Change__bool__get_DegreesXY, 0, false, ::app::Uno::Float2__typeof()),
        ::uNewFunction("get_DegreesY", Change__bool__get_DegreesY, 0, false, ::app::Uno::Float__typeof()),
        ::uNewFunction("get_DegreesZ", Change__bool__get_DegreesZ, 0, false, ::app::Uno::Float__typeof()),
        ::uNewFunction("get_IsContinuous", Change__bool__get_IsContinuous, 0, false, ::app::Uno::Bool__typeof()),
        ::uNewFunction("get_Target", Change__bool__get_Target, 0, false, ::app::Uno::UX::Property__bool__typeof()),
        ::uNewFunction("get_Value", Change__bool__get_Value, 0, false, ::app::Uno::Bool__typeof()),
        ::uNewFunction("get_X", Change__bool__get_X, 0, false, ::app::Uno::Float__typeof()),
        ::uNewFunction("get_XY", Change__bool__get_XY, 0, false, ::app::Uno::Float2__typeof()),
        ::uNewFunction("get_Y", Change__bool__get_Y, 0, false, ::app::Uno::Float__typeof()),
        ::uNewFunction("get_Z", Change__bool__get_Z, 0, false, ::app::Uno::Float__typeof()),
        ::uNewFunction(".ctor", Change__bool__New_1, 0, true, Change__bool__typeof(), ::app::Uno::UX::Property__bool__typeof()),
        ::uNewFunctionVoid("set_DegreesX", Change__bool__set_DegreesX, 0, false, ::app::Uno::Float__typeof()),
        ::uNewFunctionVoid("set_DegreesXY", Change__bool__set_DegreesXY, 0, false, ::app::Uno::Float2__typeof()),
        ::uNewFunctionVoid("set_DegreesY", Change__bool__set_DegreesY, 0, false, ::app::Uno::Float__typeof()),
        ::uNewFunctionVoid("set_DegreesZ", Change__bool__set_DegreesZ, 0, false, ::app::Uno::Float__typeof()),
        ::uNewFunctionVoid("set_Target", Change__bool__set_Target, 0, false, ::app::Uno::UX::Property__bool__typeof()),
        ::uNewFunctionVoid("set_Value", Change__bool__set_Value, 0, false, ::app::Uno::Bool__typeof()),
        ::uNewFunctionVoid("set_X", Change__bool__set_X, 0, false, ::app::Uno::Float__typeof()),
        ::uNewFunctionVoid("set_XY", Change__bool__set_XY, 0, false, ::app::Uno::Float2__typeof()),
        ::uNewFunctionVoid("set_Y", Change__bool__set_Y, 0, false, ::app::Uno::Float__typeof()),
        ::uNewFunctionVoid("set_Z", Change__bool__set_Z, 0, false, ::app::Uno::Float__typeof()));

    ::uRegisterType(type);
    return type;
}

void Change__bool___ObjInit_2(Change__bool* __this, ::app::Uno::UX::Property__bool* target)
{
    ::app::Fuse::Animations::TrackAnimator___ObjInit_1(__this);

    if (target == NULL)
    {
        U_THROW(::app::Uno::ArgumentNullException__New_5(NULL, ::uGetConstString("target")));
    }

    __this->Target(target);

    if (__this->IsContinuous())
    {
        ::uObject* v;

        if ((::uType*)::app::Uno::Bool__typeof() == (::uType*)::app::Uno::Float__typeof())
        {
            v = (::uObject*)::app::Fuse::Animations::ConverterFloat__Singleton;
        }
        else if ((::uType*)::app::Uno::Bool__typeof() == (::uType*)::app::Uno::Float2__typeof())
        {
            v = (::uObject*)::app::Fuse::Animations::ConverterFloat2__Singleton;
        }
        else if ((::uType*)::app::Uno::Bool__typeof() == (::uType*)::app::Uno::Float3__typeof())
        {
            v = (::uObject*)::app::Fuse::Animations::ConverterFloat3__Singleton;
        }
        else if ((::uType*)::app::Uno::Bool__typeof() == (::uType*)::app::Uno::Float4__typeof())
        {
            v = (::uObject*)::app::Fuse::Animations::ConverterFloat4__Singleton;
        }
        else if ((::uType*)::app::Uno::Bool__typeof() == (::uType*)::app::Uno::Double__typeof())
        {
            v = (::uObject*)::app::Fuse::Animations::ConverterDouble__Singleton;
        }
        else
        {
            U_THROW(::app::Uno::Exception__New_2(NULL, ::app::Uno::String__op_Addition_1(NULL, ::uGetConstString("Unsupported change type: "), (::uObject*)(::uType*)::app::Uno::Bool__typeof())));
        }

        __this->ContinuousConverter = ::uCast< ::app::Fuse::Animations::Converter__bool*>(v, ::app::Fuse::Animations::Converter__bool__typeof());
    }
    else
    {
        __this->Mixer = ::app::Fuse::Animations::Mixer__get_DefaultDiscrete(NULL);
        __this->MarkDiscrete();
    }
}

::app::Fuse::Animations::AnimatorState* Change__bool__CreateState(Change__bool* __this, ::app::Fuse::Animations::CreateStateParams* p)
{
    if (__this->IsContinuous())
    {
        return (::app::Fuse::Animations::AnimatorState*)::app::Fuse::Animations::ContinuousTrackChangeState__bool__New_1(NULL, __this, p);
    }

    return (::app::Fuse::Animations::AnimatorState*)::app::Fuse::Animations::DiscreteTrackChangeState__bool__New_1(NULL, __this, p);
}

float Change__bool__get_DegreesX(Change__bool* __this)
{
    return ::app::Uno::Math__RadiansToDegrees_1(NULL, __this->X());
}

::app::Uno::Float2 Change__bool__get_DegreesXY(Change__bool* __this)
{
    return ::app::Uno::Float2__New_2(NULL, ::app::Uno::Math__RadiansToDegrees_1(NULL, __this->X()), ::app::Uno::Math__RadiansToDegrees_1(NULL, __this->Y()));
}

float Change__bool__get_DegreesY(Change__bool* __this)
{
    return ::app::Uno::Math__RadiansToDegrees_1(NULL, __this->Y());
}

float Change__bool__get_DegreesZ(Change__bool* __this)
{
    return ::app::Uno::Math__RadiansToDegrees_1(NULL, __this->Y());
}

bool Change__bool__get_IsContinuous(Change__bool* __this)
{
    return (((((::uType*)::app::Uno::Bool__typeof() == (::uType*)::app::Uno::Float__typeof()) || ((::uType*)::app::Uno::Bool__typeof() == (::uType*)::app::Uno::Float2__typeof())) || ((::uType*)::app::Uno::Bool__typeof() == (::uType*)::app::Uno::Float3__typeof())) || ((::uType*)::app::Uno::Bool__typeof() == (::uType*)::app::Uno::Float4__typeof())) || ((::uType*)::app::Uno::Bool__typeof() == (::uType*)::app::Uno::Double__typeof());
}

::app::Uno::UX::Property__bool* Change__bool__get_Target(Change__bool* __this)
{
    return __this->_Target;
}

bool Change__bool__get_Value(Change__bool* __this)
{
    return __this->IsContinuous() ? ::uPtr< ::app::Fuse::Animations::Converter__bool*>(__this->ContinuousConverter)->Out(__this->_vectorValue) : ::uUnbox< bool>(::app::Uno::Bool__typeof(), __this->_objectValue);
}

float Change__bool__get_X(Change__bool* __this)
{
    return __this->_vectorValue.X;
}

::app::Uno::Float2 Change__bool__get_XY(Change__bool* __this)
{
    ::app::Uno::Float4 ind_123 = __this->_vectorValue;
    return ::app::Uno::Float2__New_2(NULL, ind_123.X, ind_123.Y);
}

float Change__bool__get_Y(Change__bool* __this)
{
    return __this->_vectorValue.Y;
}

float Change__bool__get_Z(Change__bool* __this)
{
    return __this->_vectorValue.Z;
}

Change__bool* Change__bool__New_1(::uStatic* __this, ::app::Uno::UX::Property__bool* target)
{
    Change__bool* inst = (Change__bool*)::uAllocObject(sizeof(Change__bool), Change__bool__typeof());
    inst->_ObjInit_2(target);
    return inst;
}

void Change__bool__set_DegreesX(Change__bool* __this, float value)
{
    __this->X(::app::Uno::Math__DegreesToRadians_1(NULL, value));
}

void Change__bool__set_DegreesXY(Change__bool* __this, ::app::Uno::Float2 value)
{
    __this->XY(::app::Uno::Float2__New_2(NULL, ::app::Uno::Math__DegreesToRadians_1(NULL, value.X), ::app::Uno::Math__DegreesToRadians_1(NULL, value.Y)));
}

void Change__bool__set_DegreesY(Change__bool* __this, float value)
{
    __this->Y(::app::Uno::Math__DegreesToRadians_1(NULL, value));
}

void Change__bool__set_DegreesZ(Change__bool* __this, float value)
{
    __this->Y(::app::Uno::Math__DegreesToRadians_1(NULL, value));
}

void Change__bool__set_Target(Change__bool* __this, ::app::Uno::UX::Property__bool* value)
{
    __this->_Target = value;
}

void Change__bool__set_Value(Change__bool* __this, bool value)
{
    if (__this->IsContinuous())
    {
        __this->_vectorValue = ::uPtr< ::app::Fuse::Animations::Converter__bool*>(__this->ContinuousConverter)->In(value);
    }
    else
    {
        __this->_objectValue = ::uBox(::app::Uno::Bool__typeof(), value);
    }
}

void Change__bool__set_X(Change__bool* __this, float value)
{
    __this->_vectorValue.X = value;
}

void Change__bool__set_XY(Change__bool* __this, ::app::Uno::Float2 value)
{
    __this->_vectorValue = ::app::Uno::Float4__New_6(NULL, value, __this->_vectorValue.Z, __this->_vectorValue.W);
}

void Change__bool__set_Y(Change__bool* __this, float value)
{
    __this->_vectorValue.Y = value;
}

void Change__bool__set_Z(Change__bool* __this, float value)
{
    __this->_vectorValue.Z = value;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Animations\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

Change__char__uType* Change__char__typeof()
{
    static ::uStaticStrong<Change__char__uType*> type;
    if (type != NULL) return type;

    type = (Change__char__uType*)::uAllocClassType(sizeof(Change__char__uType), "Fuse.Animations.Change<char>", false, 0, 2, 0);

    type->SetBaseType(::app::Fuse::Animations::TrackAnimator__typeof());
    type->__fp_CreateState = (::app::Fuse::Animations::AnimatorState*(*)(::app::Fuse::Animations::Animator*, ::app::Fuse::Animations::CreateStateParams*))Change__char__CreateState;

    type->SetStrongRefs(
        "_Target", offsetof(Change__char, _Target),
        "ContinuousConverter", offsetof(Change__char, ContinuousConverter));

    type->SetFields(1,
        ::uNewField("ContinuousConverter", NULL, offsetof(Change__char, ContinuousConverter), ::app::Fuse::Animations::Converter__char__typeof()));

    type->SetFunctions(22,
        ::uNewFunction("get_DegreesX", Change__char__get_DegreesX, 0, false, ::app::Uno::Float__typeof()),
        ::uNewFunction("get_DegreesXY", Change__char__get_DegreesXY, 0, false, ::app::Uno::Float2__typeof()),
        ::uNewFunction("get_DegreesY", Change__char__get_DegreesY, 0, false, ::app::Uno::Float__typeof()),
        ::uNewFunction("get_DegreesZ", Change__char__get_DegreesZ, 0, false, ::app::Uno::Float__typeof()),
        ::uNewFunction("get_IsContinuous", Change__char__get_IsContinuous, 0, false, ::app::Uno::Bool__typeof()),
        ::uNewFunction("get_Target", Change__char__get_Target, 0, false, ::app::Uno::UX::Property__char__typeof()),
        ::uNewFunction("get_Value", Change__char__get_Value, 0, false, ::app::Uno::Char__typeof()),
        ::uNewFunction("get_X", Change__char__get_X, 0, false, ::app::Uno::Float__typeof()),
        ::uNewFunction("get_XY", Change__char__get_XY, 0, false, ::app::Uno::Float2__typeof()),
        ::uNewFunction("get_Y", Change__char__get_Y, 0, false, ::app::Uno::Float__typeof()),
        ::uNewFunction("get_Z", Change__char__get_Z, 0, false, ::app::Uno::Float__typeof()),
        ::uNewFunction(".ctor", Change__char__New_1, 0, true, Change__char__typeof(), ::app::Uno::UX::Property__char__typeof()),
        ::uNewFunctionVoid("set_DegreesX", Change__char__set_DegreesX, 0, false, ::app::Uno::Float__typeof()),
        ::uNewFunctionVoid("set_DegreesXY", Change__char__set_DegreesXY, 0, false, ::app::Uno::Float2__typeof()),
        ::uNewFunctionVoid("set_DegreesY", Change__char__set_DegreesY, 0, false, ::app::Uno::Float__typeof()),
        ::uNewFunctionVoid("set_DegreesZ", Change__char__set_DegreesZ, 0, false, ::app::Uno::Float__typeof()),
        ::uNewFunctionVoid("set_Target", Change__char__set_Target, 0, false, ::app::Uno::UX::Property__char__typeof()),
        ::uNewFunctionVoid("set_Value", Change__char__set_Value, 0, false, ::app::Uno::Char__typeof()),
        ::uNewFunctionVoid("set_X", Change__char__set_X, 0, false, ::app::Uno::Float__typeof()),
        ::uNewFunctionVoid("set_XY", Change__char__set_XY, 0, false, ::app::Uno::Float2__typeof()),
        ::uNewFunctionVoid("set_Y", Change__char__set_Y, 0, false, ::app::Uno::Float__typeof()),
        ::uNewFunctionVoid("set_Z", Change__char__set_Z, 0, false, ::app::Uno::Float__typeof()));

    ::uRegisterType(type);
    return type;
}

void Change__char___ObjInit_2(Change__char* __this, ::app::Uno::UX::Property__char* target)
{
    ::app::Fuse::Animations::TrackAnimator___ObjInit_1(__this);

    if (target == NULL)
    {
        U_THROW(::app::Uno::ArgumentNullException__New_5(NULL, ::uGetConstString("target")));
    }

    __this->Target(target);

    if (__this->IsContinuous())
    {
        ::uObject* v;

        if ((::uType*)::app::Uno::Char__typeof() == (::uType*)::app::Uno::Float__typeof())
        {
            v = (::uObject*)::app::Fuse::Animations::ConverterFloat__Singleton;
        }
        else if ((::uType*)::app::Uno::Char__typeof() == (::uType*)::app::Uno::Float2__typeof())
        {
            v = (::uObject*)::app::Fuse::Animations::ConverterFloat2__Singleton;
        }
        else if ((::uType*)::app::Uno::Char__typeof() == (::uType*)::app::Uno::Float3__typeof())
        {
            v = (::uObject*)::app::Fuse::Animations::ConverterFloat3__Singleton;
        }
        else if ((::uType*)::app::Uno::Char__typeof() == (::uType*)::app::Uno::Float4__typeof())
        {
            v = (::uObject*)::app::Fuse::Animations::ConverterFloat4__Singleton;
        }
        else if ((::uType*)::app::Uno::Char__typeof() == (::uType*)::app::Uno::Double__typeof())
        {
            v = (::uObject*)::app::Fuse::Animations::ConverterDouble__Singleton;
        }
        else
        {
            U_THROW(::app::Uno::Exception__New_2(NULL, ::app::Uno::String__op_Addition_1(NULL, ::uGetConstString("Unsupported change type: "), (::uObject*)(::uType*)::app::Uno::Char__typeof())));
        }

        __this->ContinuousConverter = ::uCast< ::app::Fuse::Animations::Converter__char*>(v, ::app::Fuse::Animations::Converter__char__typeof());
    }
    else
    {
        __this->Mixer = ::app::Fuse::Animations::Mixer__get_DefaultDiscrete(NULL);
        __this->MarkDiscrete();
    }
}

::app::Fuse::Animations::AnimatorState* Change__char__CreateState(Change__char* __this, ::app::Fuse::Animations::CreateStateParams* p)
{
    if (__this->IsContinuous())
    {
        return (::app::Fuse::Animations::AnimatorState*)::app::Fuse::Animations::ContinuousTrackChangeState__char__New_1(NULL, __this, p);
    }

    return (::app::Fuse::Animations::AnimatorState*)::app::Fuse::Animations::DiscreteTrackChangeState__char__New_1(NULL, __this, p);
}

float Change__char__get_DegreesX(Change__char* __this)
{
    return ::app::Uno::Math__RadiansToDegrees_1(NULL, __this->X());
}

::app::Uno::Float2 Change__char__get_DegreesXY(Change__char* __this)
{
    return ::app::Uno::Float2__New_2(NULL, ::app::Uno::Math__RadiansToDegrees_1(NULL, __this->X()), ::app::Uno::Math__RadiansToDegrees_1(NULL, __this->Y()));
}

float Change__char__get_DegreesY(Change__char* __this)
{
    return ::app::Uno::Math__RadiansToDegrees_1(NULL, __this->Y());
}

float Change__char__get_DegreesZ(Change__char* __this)
{
    return ::app::Uno::Math__RadiansToDegrees_1(NULL, __this->Y());
}

bool Change__char__get_IsContinuous(Change__char* __this)
{
    return (((((::uType*)::app::Uno::Char__typeof() == (::uType*)::app::Uno::Float__typeof()) || ((::uType*)::app::Uno::Char__typeof() == (::uType*)::app::Uno::Float2__typeof())) || ((::uType*)::app::Uno::Char__typeof() == (::uType*)::app::Uno::Float3__typeof())) || ((::uType*)::app::Uno::Char__typeof() == (::uType*)::app::Uno::Float4__typeof())) || ((::uType*)::app::Uno::Char__typeof() == (::uType*)::app::Uno::Double__typeof());
}

::app::Uno::UX::Property__char* Change__char__get_Target(Change__char* __this)
{
    return __this->_Target;
}

::uChar Change__char__get_Value(Change__char* __this)
{
    return __this->IsContinuous() ? ::uPtr< ::app::Fuse::Animations::Converter__char*>(__this->ContinuousConverter)->Out(__this->_vectorValue) : ::uUnbox< ::uChar>(::app::Uno::Char__typeof(), __this->_objectValue);
}

float Change__char__get_X(Change__char* __this)
{
    return __this->_vectorValue.X;
}

::app::Uno::Float2 Change__char__get_XY(Change__char* __this)
{
    ::app::Uno::Float4 ind_123 = __this->_vectorValue;
    return ::app::Uno::Float2__New_2(NULL, ind_123.X, ind_123.Y);
}

float Change__char__get_Y(Change__char* __this)
{
    return __this->_vectorValue.Y;
}

float Change__char__get_Z(Change__char* __this)
{
    return __this->_vectorValue.Z;
}

Change__char* Change__char__New_1(::uStatic* __this, ::app::Uno::UX::Property__char* target)
{
    Change__char* inst = (Change__char*)::uAllocObject(sizeof(Change__char), Change__char__typeof());
    inst->_ObjInit_2(target);
    return inst;
}

void Change__char__set_DegreesX(Change__char* __this, float value)
{
    __this->X(::app::Uno::Math__DegreesToRadians_1(NULL, value));
}

void Change__char__set_DegreesXY(Change__char* __this, ::app::Uno::Float2 value)
{
    __this->XY(::app::Uno::Float2__New_2(NULL, ::app::Uno::Math__DegreesToRadians_1(NULL, value.X), ::app::Uno::Math__DegreesToRadians_1(NULL, value.Y)));
}

void Change__char__set_DegreesY(Change__char* __this, float value)
{
    __this->Y(::app::Uno::Math__DegreesToRadians_1(NULL, value));
}

void Change__char__set_DegreesZ(Change__char* __this, float value)
{
    __this->Y(::app::Uno::Math__DegreesToRadians_1(NULL, value));
}

void Change__char__set_Target(Change__char* __this, ::app::Uno::UX::Property__char* value)
{
    __this->_Target = value;
}

void Change__char__set_Value(Change__char* __this, ::uChar value)
{
    if (__this->IsContinuous())
    {
        __this->_vectorValue = ::uPtr< ::app::Fuse::Animations::Converter__char*>(__this->ContinuousConverter)->In(value);
    }
    else
    {
        __this->_objectValue = ::uBox< ::uChar>(::app::Uno::Char__typeof(), value);
    }
}

void Change__char__set_X(Change__char* __this, float value)
{
    __this->_vectorValue.X = value;
}

void Change__char__set_XY(Change__char* __this, ::app::Uno::Float2 value)
{
    __this->_vectorValue = ::app::Uno::Float4__New_6(NULL, value, __this->_vectorValue.Z, __this->_vectorValue.W);
}

void Change__char__set_Y(Change__char* __this, float value)
{
    __this->_vectorValue.Y = value;
}

void Change__char__set_Z(Change__char* __this, float value)
{
    __this->_vectorValue.Z = value;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Animations\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

Change__double__uType* Change__double__typeof()
{
    static ::uStaticStrong<Change__double__uType*> type;
    if (type != NULL) return type;

    type = (Change__double__uType*)::uAllocClassType(sizeof(Change__double__uType), "Fuse.Animations.Change<double>", false, 0, 2, 0);

    type->SetBaseType(::app::Fuse::Animations::TrackAnimator__typeof());
    type->__fp_CreateState = (::app::Fuse::Animations::AnimatorState*(*)(::app::Fuse::Animations::Animator*, ::app::Fuse::Animations::CreateStateParams*))Change__double__CreateState;

    type->SetStrongRefs(
        "_Target", offsetof(Change__double, _Target),
        "ContinuousConverter", offsetof(Change__double, ContinuousConverter));

    type->SetFields(1,
        ::uNewField("ContinuousConverter", NULL, offsetof(Change__double, ContinuousConverter), ::app::Fuse::Animations::Converter__double__typeof()));

    type->SetFunctions(22,
        ::uNewFunction("get_DegreesX", Change__double__get_DegreesX, 0, false, ::app::Uno::Float__typeof()),
        ::uNewFunction("get_DegreesXY", Change__double__get_DegreesXY, 0, false, ::app::Uno::Float2__typeof()),
        ::uNewFunction("get_DegreesY", Change__double__get_DegreesY, 0, false, ::app::Uno::Float__typeof()),
        ::uNewFunction("get_DegreesZ", Change__double__get_DegreesZ, 0, false, ::app::Uno::Float__typeof()),
        ::uNewFunction("get_IsContinuous", Change__double__get_IsContinuous, 0, false, ::app::Uno::Bool__typeof()),
        ::uNewFunction("get_Target", Change__double__get_Target, 0, false, ::app::Uno::UX::Property__double__typeof()),
        ::uNewFunction("get_Value", Change__double__get_Value, 0, false, ::app::Uno::Double__typeof()),
        ::uNewFunction("get_X", Change__double__get_X, 0, false, ::app::Uno::Float__typeof()),
        ::uNewFunction("get_XY", Change__double__get_XY, 0, false, ::app::Uno::Float2__typeof()),
        ::uNewFunction("get_Y", Change__double__get_Y, 0, false, ::app::Uno::Float__typeof()),
        ::uNewFunction("get_Z", Change__double__get_Z, 0, false, ::app::Uno::Float__typeof()),
        ::uNewFunction(".ctor", Change__double__New_1, 0, true, Change__double__typeof(), ::app::Uno::UX::Property__double__typeof()),
        ::uNewFunctionVoid("set_DegreesX", Change__double__set_DegreesX, 0, false, ::app::Uno::Float__typeof()),
        ::uNewFunctionVoid("set_DegreesXY", Change__double__set_DegreesXY, 0, false, ::app::Uno::Float2__typeof()),
        ::uNewFunctionVoid("set_DegreesY", Change__double__set_DegreesY, 0, false, ::app::Uno::Float__typeof()),
        ::uNewFunctionVoid("set_DegreesZ", Change__double__set_DegreesZ, 0, false, ::app::Uno::Float__typeof()),
        ::uNewFunctionVoid("set_Target", Change__double__set_Target, 0, false, ::app::Uno::UX::Property__double__typeof()),
        ::uNewFunctionVoid("set_Value", Change__double__set_Value, 0, false, ::app::Uno::Double__typeof()),
        ::uNewFunctionVoid("set_X", Change__double__set_X, 0, false, ::app::Uno::Float__typeof()),
        ::uNewFunctionVoid("set_XY", Change__double__set_XY, 0, false, ::app::Uno::Float2__typeof()),
        ::uNewFunctionVoid("set_Y", Change__double__set_Y, 0, false, ::app::Uno::Float__typeof()),
        ::uNewFunctionVoid("set_Z", Change__double__set_Z, 0, false, ::app::Uno::Float__typeof()));

    ::uRegisterType(type);
    return type;
}

void Change__double___ObjInit_2(Change__double* __this, ::app::Uno::UX::Property__double* target)
{
    ::app::Fuse::Animations::TrackAnimator___ObjInit_1(__this);

    if (target == NULL)
    {
        U_THROW(::app::Uno::ArgumentNullException__New_5(NULL, ::uGetConstString("target")));
    }

    __this->Target(target);

    if (__this->IsContinuous())
    {
        ::uObject* v;

        if ((::uType*)::app::Uno::Double__typeof() == (::uType*)::app::Uno::Float__typeof())
        {
            v = (::uObject*)::app::Fuse::Animations::ConverterFloat__Singleton;
        }
        else if ((::uType*)::app::Uno::Double__typeof() == (::uType*)::app::Uno::Float2__typeof())
        {
            v = (::uObject*)::app::Fuse::Animations::ConverterFloat2__Singleton;
        }
        else if ((::uType*)::app::Uno::Double__typeof() == (::uType*)::app::Uno::Float3__typeof())
        {
            v = (::uObject*)::app::Fuse::Animations::ConverterFloat3__Singleton;
        }
        else if ((::uType*)::app::Uno::Double__typeof() == (::uType*)::app::Uno::Float4__typeof())
        {
            v = (::uObject*)::app::Fuse::Animations::ConverterFloat4__Singleton;
        }
        else if ((::uType*)::app::Uno::Double__typeof() == (::uType*)::app::Uno::Double__typeof())
        {
            v = (::uObject*)::app::Fuse::Animations::ConverterDouble__Singleton;
        }
        else
        {
            U_THROW(::app::Uno::Exception__New_2(NULL, ::app::Uno::String__op_Addition_1(NULL, ::uGetConstString("Unsupported change type: "), (::uObject*)(::uType*)::app::Uno::Double__typeof())));
        }

        __this->ContinuousConverter = ::uCast< ::app::Fuse::Animations::Converter__double*>(v, ::app::Fuse::Animations::Converter__double__typeof());
    }
    else
    {
        __this->Mixer = ::app::Fuse::Animations::Mixer__get_DefaultDiscrete(NULL);
        __this->MarkDiscrete();
    }
}

::app::Fuse::Animations::AnimatorState* Change__double__CreateState(Change__double* __this, ::app::Fuse::Animations::CreateStateParams* p)
{
    if (__this->IsContinuous())
    {
        return (::app::Fuse::Animations::AnimatorState*)::app::Fuse::Animations::ContinuousTrackChangeState__double__New_1(NULL, __this, p);
    }

    return (::app::Fuse::Animations::AnimatorState*)::app::Fuse::Animations::DiscreteTrackChangeState__double__New_1(NULL, __this, p);
}

float Change__double__get_DegreesX(Change__double* __this)
{
    return ::app::Uno::Math__RadiansToDegrees_1(NULL, __this->X());
}

::app::Uno::Float2 Change__double__get_DegreesXY(Change__double* __this)
{
    return ::app::Uno::Float2__New_2(NULL, ::app::Uno::Math__RadiansToDegrees_1(NULL, __this->X()), ::app::Uno::Math__RadiansToDegrees_1(NULL, __this->Y()));
}

float Change__double__get_DegreesY(Change__double* __this)
{
    return ::app::Uno::Math__RadiansToDegrees_1(NULL, __this->Y());
}

float Change__double__get_DegreesZ(Change__double* __this)
{
    return ::app::Uno::Math__RadiansToDegrees_1(NULL, __this->Y());
}

bool Change__double__get_IsContinuous(Change__double* __this)
{
    return (((((::uType*)::app::Uno::Double__typeof() == (::uType*)::app::Uno::Float__typeof()) || ((::uType*)::app::Uno::Double__typeof() == (::uType*)::app::Uno::Float2__typeof())) || ((::uType*)::app::Uno::Double__typeof() == (::uType*)::app::Uno::Float3__typeof())) || ((::uType*)::app::Uno::Double__typeof() == (::uType*)::app::Uno::Float4__typeof())) || ((::uType*)::app::Uno::Double__typeof() == (::uType*)::app::Uno::Double__typeof());
}

::app::Uno::UX::Property__double* Change__double__get_Target(Change__double* __this)
{
    return __this->_Target;
}

double Change__double__get_Value(Change__double* __this)
{
    return __this->IsContinuous() ? ::uPtr< ::app::Fuse::Animations::Converter__double*>(__this->ContinuousConverter)->Out(__this->_vectorValue) : ::uUnbox< double>(::app::Uno::Double__typeof(), __this->_objectValue);
}

float Change__double__get_X(Change__double* __this)
{
    return __this->_vectorValue.X;
}

::app::Uno::Float2 Change__double__get_XY(Change__double* __this)
{
    ::app::Uno::Float4 ind_123 = __this->_vectorValue;
    return ::app::Uno::Float2__New_2(NULL, ind_123.X, ind_123.Y);
}

float Change__double__get_Y(Change__double* __this)
{
    return __this->_vectorValue.Y;
}

float Change__double__get_Z(Change__double* __this)
{
    return __this->_vectorValue.Z;
}

Change__double* Change__double__New_1(::uStatic* __this, ::app::Uno::UX::Property__double* target)
{
    Change__double* inst = (Change__double*)::uAllocObject(sizeof(Change__double), Change__double__typeof());
    inst->_ObjInit_2(target);
    return inst;
}

void Change__double__set_DegreesX(Change__double* __this, float value)
{
    __this->X(::app::Uno::Math__DegreesToRadians_1(NULL, value));
}

void Change__double__set_DegreesXY(Change__double* __this, ::app::Uno::Float2 value)
{
    __this->XY(::app::Uno::Float2__New_2(NULL, ::app::Uno::Math__DegreesToRadians_1(NULL, value.X), ::app::Uno::Math__DegreesToRadians_1(NULL, value.Y)));
}

void Change__double__set_DegreesY(Change__double* __this, float value)
{
    __this->Y(::app::Uno::Math__DegreesToRadians_1(NULL, value));
}

void Change__double__set_DegreesZ(Change__double* __this, float value)
{
    __this->Y(::app::Uno::Math__DegreesToRadians_1(NULL, value));
}

void Change__double__set_Target(Change__double* __this, ::app::Uno::UX::Property__double* value)
{
    __this->_Target = value;
}

void Change__double__set_Value(Change__double* __this, double value)
{
    if (__this->IsContinuous())
    {
        __this->_vectorValue = ::uPtr< ::app::Fuse::Animations::Converter__double*>(__this->ContinuousConverter)->In(value);
    }
    else
    {
        __this->_objectValue = ::uBox(::app::Uno::Double__typeof(), value);
    }
}

void Change__double__set_X(Change__double* __this, float value)
{
    __this->_vectorValue.X = value;
}

void Change__double__set_XY(Change__double* __this, ::app::Uno::Float2 value)
{
    __this->_vectorValue = ::app::Uno::Float4__New_6(NULL, value, __this->_vectorValue.Z, __this->_vectorValue.W);
}

void Change__double__set_Y(Change__double* __this, float value)
{
    __this->_vectorValue.Y = value;
}

void Change__double__set_Z(Change__double* __this, float value)
{
    __this->_vectorValue.Z = value;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Animations\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

Change__float__uType* Change__float__typeof()
{
    static ::uStaticStrong<Change__float__uType*> type;
    if (type != NULL) return type;

    type = (Change__float__uType*)::uAllocClassType(sizeof(Change__float__uType), "Fuse.Animations.Change<float>", false, 0, 2, 0);

    type->SetBaseType(::app::Fuse::Animations::TrackAnimator__typeof());
    type->__fp_CreateState = (::app::Fuse::Animations::AnimatorState*(*)(::app::Fuse::Animations::Animator*, ::app::Fuse::Animations::CreateStateParams*))Change__float__CreateState;

    type->SetStrongRefs(
        "_Target", offsetof(Change__float, _Target),
        "ContinuousConverter", offsetof(Change__float, ContinuousConverter));

    type->SetFields(1,
        ::uNewField("ContinuousConverter", NULL, offsetof(Change__float, ContinuousConverter), ::app::Fuse::Animations::Converter__float__typeof()));

    type->SetFunctions(22,
        ::uNewFunction("get_DegreesX", Change__float__get_DegreesX, 0, false, ::app::Uno::Float__typeof()),
        ::uNewFunction("get_DegreesXY", Change__float__get_DegreesXY, 0, false, ::app::Uno::Float2__typeof()),
        ::uNewFunction("get_DegreesY", Change__float__get_DegreesY, 0, false, ::app::Uno::Float__typeof()),
        ::uNewFunction("get_DegreesZ", Change__float__get_DegreesZ, 0, false, ::app::Uno::Float__typeof()),
        ::uNewFunction("get_IsContinuous", Change__float__get_IsContinuous, 0, false, ::app::Uno::Bool__typeof()),
        ::uNewFunction("get_Target", Change__float__get_Target, 0, false, ::app::Uno::UX::Property__float__typeof()),
        ::uNewFunction("get_Value", Change__float__get_Value, 0, false, ::app::Uno::Float__typeof()),
        ::uNewFunction("get_X", Change__float__get_X, 0, false, ::app::Uno::Float__typeof()),
        ::uNewFunction("get_XY", Change__float__get_XY, 0, false, ::app::Uno::Float2__typeof()),
        ::uNewFunction("get_Y", Change__float__get_Y, 0, false, ::app::Uno::Float__typeof()),
        ::uNewFunction("get_Z", Change__float__get_Z, 0, false, ::app::Uno::Float__typeof()),
        ::uNewFunction(".ctor", Change__float__New_1, 0, true, Change__float__typeof(), ::app::Uno::UX::Property__float__typeof()),
        ::uNewFunctionVoid("set_DegreesX", Change__float__set_DegreesX, 0, false, ::app::Uno::Float__typeof()),
        ::uNewFunctionVoid("set_DegreesXY", Change__float__set_DegreesXY, 0, false, ::app::Uno::Float2__typeof()),
        ::uNewFunctionVoid("set_DegreesY", Change__float__set_DegreesY, 0, false, ::app::Uno::Float__typeof()),
        ::uNewFunctionVoid("set_DegreesZ", Change__float__set_DegreesZ, 0, false, ::app::Uno::Float__typeof()),
        ::uNewFunctionVoid("set_Target", Change__float__set_Target, 0, false, ::app::Uno::UX::Property__float__typeof()),
        ::uNewFunctionVoid("set_Value", Change__float__set_Value, 0, false, ::app::Uno::Float__typeof()),
        ::uNewFunctionVoid("set_X", Change__float__set_X, 0, false, ::app::Uno::Float__typeof()),
        ::uNewFunctionVoid("set_XY", Change__float__set_XY, 0, false, ::app::Uno::Float2__typeof()),
        ::uNewFunctionVoid("set_Y", Change__float__set_Y, 0, false, ::app::Uno::Float__typeof()),
        ::uNewFunctionVoid("set_Z", Change__float__set_Z, 0, false, ::app::Uno::Float__typeof()));

    ::uRegisterType(type);
    return type;
}

void Change__float___ObjInit_2(Change__float* __this, ::app::Uno::UX::Property__float* target)
{
    ::app::Fuse::Animations::TrackAnimator___ObjInit_1(__this);

    if (target == NULL)
    {
        U_THROW(::app::Uno::ArgumentNullException__New_5(NULL, ::uGetConstString("target")));
    }

    __this->Target(target);

    if (__this->IsContinuous())
    {
        ::uObject* v;

        if ((::uType*)::app::Uno::Float__typeof() == (::uType*)::app::Uno::Float__typeof())
        {
            v = (::uObject*)::app::Fuse::Animations::ConverterFloat__Singleton;
        }
        else if ((::uType*)::app::Uno::Float__typeof() == (::uType*)::app::Uno::Float2__typeof())
        {
            v = (::uObject*)::app::Fuse::Animations::ConverterFloat2__Singleton;
        }
        else if ((::uType*)::app::Uno::Float__typeof() == (::uType*)::app::Uno::Float3__typeof())
        {
            v = (::uObject*)::app::Fuse::Animations::ConverterFloat3__Singleton;
        }
        else if ((::uType*)::app::Uno::Float__typeof() == (::uType*)::app::Uno::Float4__typeof())
        {
            v = (::uObject*)::app::Fuse::Animations::ConverterFloat4__Singleton;
        }
        else if ((::uType*)::app::Uno::Float__typeof() == (::uType*)::app::Uno::Double__typeof())
        {
            v = (::uObject*)::app::Fuse::Animations::ConverterDouble__Singleton;
        }
        else
        {
            U_THROW(::app::Uno::Exception__New_2(NULL, ::app::Uno::String__op_Addition_1(NULL, ::uGetConstString("Unsupported change type: "), (::uObject*)(::uType*)::app::Uno::Float__typeof())));
        }

        __this->ContinuousConverter = ::uCast< ::app::Fuse::Animations::Converter__float*>(v, ::app::Fuse::Animations::Converter__float__typeof());
    }
    else
    {
        __this->Mixer = ::app::Fuse::Animations::Mixer__get_DefaultDiscrete(NULL);
        __this->MarkDiscrete();
    }
}

::app::Fuse::Animations::AnimatorState* Change__float__CreateState(Change__float* __this, ::app::Fuse::Animations::CreateStateParams* p)
{
    if (__this->IsContinuous())
    {
        return (::app::Fuse::Animations::AnimatorState*)::app::Fuse::Animations::ContinuousTrackChangeState__float__New_1(NULL, __this, p);
    }

    return (::app::Fuse::Animations::AnimatorState*)::app::Fuse::Animations::DiscreteTrackChangeState__float__New_1(NULL, __this, p);
}

float Change__float__get_DegreesX(Change__float* __this)
{
    return ::app::Uno::Math__RadiansToDegrees_1(NULL, __this->X());
}

::app::Uno::Float2 Change__float__get_DegreesXY(Change__float* __this)
{
    return ::app::Uno::Float2__New_2(NULL, ::app::Uno::Math__RadiansToDegrees_1(NULL, __this->X()), ::app::Uno::Math__RadiansToDegrees_1(NULL, __this->Y()));
}

float Change__float__get_DegreesY(Change__float* __this)
{
    return ::app::Uno::Math__RadiansToDegrees_1(NULL, __this->Y());
}

float Change__float__get_DegreesZ(Change__float* __this)
{
    return ::app::Uno::Math__RadiansToDegrees_1(NULL, __this->Y());
}

bool Change__float__get_IsContinuous(Change__float* __this)
{
    return (((((::uType*)::app::Uno::Float__typeof() == (::uType*)::app::Uno::Float__typeof()) || ((::uType*)::app::Uno::Float__typeof() == (::uType*)::app::Uno::Float2__typeof())) || ((::uType*)::app::Uno::Float__typeof() == (::uType*)::app::Uno::Float3__typeof())) || ((::uType*)::app::Uno::Float__typeof() == (::uType*)::app::Uno::Float4__typeof())) || ((::uType*)::app::Uno::Float__typeof() == (::uType*)::app::Uno::Double__typeof());
}

::app::Uno::UX::Property__float* Change__float__get_Target(Change__float* __this)
{
    return __this->_Target;
}

float Change__float__get_Value(Change__float* __this)
{
    return __this->IsContinuous() ? ::uPtr< ::app::Fuse::Animations::Converter__float*>(__this->ContinuousConverter)->Out(__this->_vectorValue) : ::uUnbox< float>(::app::Uno::Float__typeof(), __this->_objectValue);
}

float Change__float__get_X(Change__float* __this)
{
    return __this->_vectorValue.X;
}

::app::Uno::Float2 Change__float__get_XY(Change__float* __this)
{
    ::app::Uno::Float4 ind_123 = __this->_vectorValue;
    return ::app::Uno::Float2__New_2(NULL, ind_123.X, ind_123.Y);
}

float Change__float__get_Y(Change__float* __this)
{
    return __this->_vectorValue.Y;
}

float Change__float__get_Z(Change__float* __this)
{
    return __this->_vectorValue.Z;
}

Change__float* Change__float__New_1(::uStatic* __this, ::app::Uno::UX::Property__float* target)
{
    Change__float* inst = (Change__float*)::uAllocObject(sizeof(Change__float), Change__float__typeof());
    inst->_ObjInit_2(target);
    return inst;
}

void Change__float__set_DegreesX(Change__float* __this, float value)
{
    __this->X(::app::Uno::Math__DegreesToRadians_1(NULL, value));
}

void Change__float__set_DegreesXY(Change__float* __this, ::app::Uno::Float2 value)
{
    __this->XY(::app::Uno::Float2__New_2(NULL, ::app::Uno::Math__DegreesToRadians_1(NULL, value.X), ::app::Uno::Math__DegreesToRadians_1(NULL, value.Y)));
}

void Change__float__set_DegreesY(Change__float* __this, float value)
{
    __this->Y(::app::Uno::Math__DegreesToRadians_1(NULL, value));
}

void Change__float__set_DegreesZ(Change__float* __this, float value)
{
    __this->Y(::app::Uno::Math__DegreesToRadians_1(NULL, value));
}

void Change__float__set_Target(Change__float* __this, ::app::Uno::UX::Property__float* value)
{
    __this->_Target = value;
}

void Change__float__set_Value(Change__float* __this, float value)
{
    if (__this->IsContinuous())
    {
        __this->_vectorValue = ::uPtr< ::app::Fuse::Animations::Converter__float*>(__this->ContinuousConverter)->In(value);
    }
    else
    {
        __this->_objectValue = ::uBox(::app::Uno::Float__typeof(), value);
    }
}

void Change__float__set_X(Change__float* __this, float value)
{
    __this->_vectorValue.X = value;
}

void Change__float__set_XY(Change__float* __this, ::app::Uno::Float2 value)
{
    __this->_vectorValue = ::app::Uno::Float4__New_6(NULL, value, __this->_vectorValue.Z, __this->_vectorValue.W);
}

void Change__float__set_Y(Change__float* __this, float value)
{
    __this->_vectorValue.Y = value;
}

void Change__float__set_Z(Change__float* __this, float value)
{
    __this->_vectorValue.Z = value;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Animations\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

Change__float2__uType* Change__float2__typeof()
{
    static ::uStaticStrong<Change__float2__uType*> type;
    if (type != NULL) return type;

    type = (Change__float2__uType*)::uAllocClassType(sizeof(Change__float2__uType), "Fuse.Animations.Change<float2>", false, 0, 2, 0);

    type->SetBaseType(::app::Fuse::Animations::TrackAnimator__typeof());
    type->__fp_CreateState = (::app::Fuse::Animations::AnimatorState*(*)(::app::Fuse::Animations::Animator*, ::app::Fuse::Animations::CreateStateParams*))Change__float2__CreateState;

    type->SetStrongRefs(
        "_Target", offsetof(Change__float2, _Target),
        "ContinuousConverter", offsetof(Change__float2, ContinuousConverter));

    type->SetFields(1,
        ::uNewField("ContinuousConverter", NULL, offsetof(Change__float2, ContinuousConverter), ::app::Fuse::Animations::Converter__float2__typeof()));

    type->SetFunctions(22,
        ::uNewFunction("get_DegreesX", Change__float2__get_DegreesX, 0, false, ::app::Uno::Float__typeof()),
        ::uNewFunction("get_DegreesXY", Change__float2__get_DegreesXY, 0, false, ::app::Uno::Float2__typeof()),
        ::uNewFunction("get_DegreesY", Change__float2__get_DegreesY, 0, false, ::app::Uno::Float__typeof()),
        ::uNewFunction("get_DegreesZ", Change__float2__get_DegreesZ, 0, false, ::app::Uno::Float__typeof()),
        ::uNewFunction("get_IsContinuous", Change__float2__get_IsContinuous, 0, false, ::app::Uno::Bool__typeof()),
        ::uNewFunction("get_Target", Change__float2__get_Target, 0, false, ::app::Uno::UX::Property__float2__typeof()),
        ::uNewFunction("get_Value", Change__float2__get_Value, 0, false, ::app::Uno::Float2__typeof()),
        ::uNewFunction("get_X", Change__float2__get_X, 0, false, ::app::Uno::Float__typeof()),
        ::uNewFunction("get_XY", Change__float2__get_XY, 0, false, ::app::Uno::Float2__typeof()),
        ::uNewFunction("get_Y", Change__float2__get_Y, 0, false, ::app::Uno::Float__typeof()),
        ::uNewFunction("get_Z", Change__float2__get_Z, 0, false, ::app::Uno::Float__typeof()),
        ::uNewFunction(".ctor", Change__float2__New_1, 0, true, Change__float2__typeof(), ::app::Uno::UX::Property__float2__typeof()),
        ::uNewFunctionVoid("set_DegreesX", Change__float2__set_DegreesX, 0, false, ::app::Uno::Float__typeof()),
        ::uNewFunctionVoid("set_DegreesXY", Change__float2__set_DegreesXY, 0, false, ::app::Uno::Float2__typeof()),
        ::uNewFunctionVoid("set_DegreesY", Change__float2__set_DegreesY, 0, false, ::app::Uno::Float__typeof()),
        ::uNewFunctionVoid("set_DegreesZ", Change__float2__set_DegreesZ, 0, false, ::app::Uno::Float__typeof()),
        ::uNewFunctionVoid("set_Target", Change__float2__set_Target, 0, false, ::app::Uno::UX::Property__float2__typeof()),
        ::uNewFunctionVoid("set_Value", Change__float2__set_Value, 0, false, ::app::Uno::Float2__typeof()),
        ::uNewFunctionVoid("set_X", Change__float2__set_X, 0, false, ::app::Uno::Float__typeof()),
        ::uNewFunctionVoid("set_XY", Change__float2__set_XY, 0, false, ::app::Uno::Float2__typeof()),
        ::uNewFunctionVoid("set_Y", Change__float2__set_Y, 0, false, ::app::Uno::Float__typeof()),
        ::uNewFunctionVoid("set_Z", Change__float2__set_Z, 0, false, ::app::Uno::Float__typeof()));

    ::uRegisterType(type);
    return type;
}

void Change__float2___ObjInit_2(Change__float2* __this, ::app::Uno::UX::Property__float2* target)
{
    ::app::Fuse::Animations::TrackAnimator___ObjInit_1(__this);

    if (target == NULL)
    {
        U_THROW(::app::Uno::ArgumentNullException__New_5(NULL, ::uGetConstString("target")));
    }

    __this->Target(target);

    if (__this->IsContinuous())
    {
        ::uObject* v;

        if ((::uType*)::app::Uno::Float2__typeof() == (::uType*)::app::Uno::Float__typeof())
        {
            v = (::uObject*)::app::Fuse::Animations::ConverterFloat__Singleton;
        }
        else if ((::uType*)::app::Uno::Float2__typeof() == (::uType*)::app::Uno::Float2__typeof())
        {
            v = (::uObject*)::app::Fuse::Animations::ConverterFloat2__Singleton;
        }
        else if ((::uType*)::app::Uno::Float2__typeof() == (::uType*)::app::Uno::Float3__typeof())
        {
            v = (::uObject*)::app::Fuse::Animations::ConverterFloat3__Singleton;
        }
        else if ((::uType*)::app::Uno::Float2__typeof() == (::uType*)::app::Uno::Float4__typeof())
        {
            v = (::uObject*)::app::Fuse::Animations::ConverterFloat4__Singleton;
        }
        else if ((::uType*)::app::Uno::Float2__typeof() == (::uType*)::app::Uno::Double__typeof())
        {
            v = (::uObject*)::app::Fuse::Animations::ConverterDouble__Singleton;
        }
        else
        {
            U_THROW(::app::Uno::Exception__New_2(NULL, ::app::Uno::String__op_Addition_1(NULL, ::uGetConstString("Unsupported change type: "), (::uObject*)(::uType*)::app::Uno::Float2__typeof())));
        }

        __this->ContinuousConverter = ::uCast< ::app::Fuse::Animations::Converter__float2*>(v, ::app::Fuse::Animations::Converter__float2__typeof());
    }
    else
    {
        __this->Mixer = ::app::Fuse::Animations::Mixer__get_DefaultDiscrete(NULL);
        __this->MarkDiscrete();
    }
}

::app::Fuse::Animations::AnimatorState* Change__float2__CreateState(Change__float2* __this, ::app::Fuse::Animations::CreateStateParams* p)
{
    if (__this->IsContinuous())
    {
        return (::app::Fuse::Animations::AnimatorState*)::app::Fuse::Animations::ContinuousTrackChangeState__float2__New_1(NULL, __this, p);
    }

    return (::app::Fuse::Animations::AnimatorState*)::app::Fuse::Animations::DiscreteTrackChangeState__float2__New_1(NULL, __this, p);
}

float Change__float2__get_DegreesX(Change__float2* __this)
{
    return ::app::Uno::Math__RadiansToDegrees_1(NULL, __this->X());
}

::app::Uno::Float2 Change__float2__get_DegreesXY(Change__float2* __this)
{
    return ::app::Uno::Float2__New_2(NULL, ::app::Uno::Math__RadiansToDegrees_1(NULL, __this->X()), ::app::Uno::Math__RadiansToDegrees_1(NULL, __this->Y()));
}

float Change__float2__get_DegreesY(Change__float2* __this)
{
    return ::app::Uno::Math__RadiansToDegrees_1(NULL, __this->Y());
}

float Change__float2__get_DegreesZ(Change__float2* __this)
{
    return ::app::Uno::Math__RadiansToDegrees_1(NULL, __this->Y());
}

bool Change__float2__get_IsContinuous(Change__float2* __this)
{
    return (((((::uType*)::app::Uno::Float2__typeof() == (::uType*)::app::Uno::Float__typeof()) || ((::uType*)::app::Uno::Float2__typeof() == (::uType*)::app::Uno::Float2__typeof())) || ((::uType*)::app::Uno::Float2__typeof() == (::uType*)::app::Uno::Float3__typeof())) || ((::uType*)::app::Uno::Float2__typeof() == (::uType*)::app::Uno::Float4__typeof())) || ((::uType*)::app::Uno::Float2__typeof() == (::uType*)::app::Uno::Double__typeof());
}

::app::Uno::UX::Property__float2* Change__float2__get_Target(Change__float2* __this)
{
    return __this->_Target;
}

::app::Uno::Float2 Change__float2__get_Value(Change__float2* __this)
{
    return __this->IsContinuous() ? ::uPtr< ::app::Fuse::Animations::Converter__float2*>(__this->ContinuousConverter)->Out(__this->_vectorValue) : ::uUnbox< ::app::Uno::Float2>(::app::Uno::Float2__typeof(), __this->_objectValue);
}

float Change__float2__get_X(Change__float2* __this)
{
    return __this->_vectorValue.X;
}

::app::Uno::Float2 Change__float2__get_XY(Change__float2* __this)
{
    ::app::Uno::Float4 ind_123 = __this->_vectorValue;
    return ::app::Uno::Float2__New_2(NULL, ind_123.X, ind_123.Y);
}

float Change__float2__get_Y(Change__float2* __this)
{
    return __this->_vectorValue.Y;
}

float Change__float2__get_Z(Change__float2* __this)
{
    return __this->_vectorValue.Z;
}

Change__float2* Change__float2__New_1(::uStatic* __this, ::app::Uno::UX::Property__float2* target)
{
    Change__float2* inst = (Change__float2*)::uAllocObject(sizeof(Change__float2), Change__float2__typeof());
    inst->_ObjInit_2(target);
    return inst;
}

void Change__float2__set_DegreesX(Change__float2* __this, float value)
{
    __this->X(::app::Uno::Math__DegreesToRadians_1(NULL, value));
}

void Change__float2__set_DegreesXY(Change__float2* __this, ::app::Uno::Float2 value)
{
    __this->XY(::app::Uno::Float2__New_2(NULL, ::app::Uno::Math__DegreesToRadians_1(NULL, value.X), ::app::Uno::Math__DegreesToRadians_1(NULL, value.Y)));
}

void Change__float2__set_DegreesY(Change__float2* __this, float value)
{
    __this->Y(::app::Uno::Math__DegreesToRadians_1(NULL, value));
}

void Change__float2__set_DegreesZ(Change__float2* __this, float value)
{
    __this->Y(::app::Uno::Math__DegreesToRadians_1(NULL, value));
}

void Change__float2__set_Target(Change__float2* __this, ::app::Uno::UX::Property__float2* value)
{
    __this->_Target = value;
}

void Change__float2__set_Value(Change__float2* __this, ::app::Uno::Float2 value)
{
    if (__this->IsContinuous())
    {
        __this->_vectorValue = ::uPtr< ::app::Fuse::Animations::Converter__float2*>(__this->ContinuousConverter)->In(value);
    }
    else
    {
        __this->_objectValue = ::uBox(::app::Uno::Float2__typeof(), value);
    }
}

void Change__float2__set_X(Change__float2* __this, float value)
{
    __this->_vectorValue.X = value;
}

void Change__float2__set_XY(Change__float2* __this, ::app::Uno::Float2 value)
{
    __this->_vectorValue = ::app::Uno::Float4__New_6(NULL, value, __this->_vectorValue.Z, __this->_vectorValue.W);
}

void Change__float2__set_Y(Change__float2* __this, float value)
{
    __this->_vectorValue.Y = value;
}

void Change__float2__set_Z(Change__float2* __this, float value)
{
    __this->_vectorValue.Z = value;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Animations\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

Change__float3__uType* Change__float3__typeof()
{
    static ::uStaticStrong<Change__float3__uType*> type;
    if (type != NULL) return type;

    type = (Change__float3__uType*)::uAllocClassType(sizeof(Change__float3__uType), "Fuse.Animations.Change<float3>", false, 0, 2, 0);

    type->SetBaseType(::app::Fuse::Animations::TrackAnimator__typeof());
    type->__fp_CreateState = (::app::Fuse::Animations::AnimatorState*(*)(::app::Fuse::Animations::Animator*, ::app::Fuse::Animations::CreateStateParams*))Change__float3__CreateState;

    type->SetStrongRefs(
        "_Target", offsetof(Change__float3, _Target),
        "ContinuousConverter", offsetof(Change__float3, ContinuousConverter));

    type->SetFields(1,
        ::uNewField("ContinuousConverter", NULL, offsetof(Change__float3, ContinuousConverter), ::app::Fuse::Animations::Converter__float3__typeof()));

    type->SetFunctions(22,
        ::uNewFunction("get_DegreesX", Change__float3__get_DegreesX, 0, false, ::app::Uno::Float__typeof()),
        ::uNewFunction("get_DegreesXY", Change__float3__get_DegreesXY, 0, false, ::app::Uno::Float2__typeof()),
        ::uNewFunction("get_DegreesY", Change__float3__get_DegreesY, 0, false, ::app::Uno::Float__typeof()),
        ::uNewFunction("get_DegreesZ", Change__float3__get_DegreesZ, 0, false, ::app::Uno::Float__typeof()),
        ::uNewFunction("get_IsContinuous", Change__float3__get_IsContinuous, 0, false, ::app::Uno::Bool__typeof()),
        ::uNewFunction("get_Target", Change__float3__get_Target, 0, false, ::app::Uno::UX::Property__float3__typeof()),
        ::uNewFunction("get_Value", Change__float3__get_Value, 0, false, ::app::Uno::Float3__typeof()),
        ::uNewFunction("get_X", Change__float3__get_X, 0, false, ::app::Uno::Float__typeof()),
        ::uNewFunction("get_XY", Change__float3__get_XY, 0, false, ::app::Uno::Float2__typeof()),
        ::uNewFunction("get_Y", Change__float3__get_Y, 0, false, ::app::Uno::Float__typeof()),
        ::uNewFunction("get_Z", Change__float3__get_Z, 0, false, ::app::Uno::Float__typeof()),
        ::uNewFunction(".ctor", Change__float3__New_1, 0, true, Change__float3__typeof(), ::app::Uno::UX::Property__float3__typeof()),
        ::uNewFunctionVoid("set_DegreesX", Change__float3__set_DegreesX, 0, false, ::app::Uno::Float__typeof()),
        ::uNewFunctionVoid("set_DegreesXY", Change__float3__set_DegreesXY, 0, false, ::app::Uno::Float2__typeof()),
        ::uNewFunctionVoid("set_DegreesY", Change__float3__set_DegreesY, 0, false, ::app::Uno::Float__typeof()),
        ::uNewFunctionVoid("set_DegreesZ", Change__float3__set_DegreesZ, 0, false, ::app::Uno::Float__typeof()),
        ::uNewFunctionVoid("set_Target", Change__float3__set_Target, 0, false, ::app::Uno::UX::Property__float3__typeof()),
        ::uNewFunctionVoid("set_Value", Change__float3__set_Value, 0, false, ::app::Uno::Float3__typeof()),
        ::uNewFunctionVoid("set_X", Change__float3__set_X, 0, false, ::app::Uno::Float__typeof()),
        ::uNewFunctionVoid("set_XY", Change__float3__set_XY, 0, false, ::app::Uno::Float2__typeof()),
        ::uNewFunctionVoid("set_Y", Change__float3__set_Y, 0, false, ::app::Uno::Float__typeof()),
        ::uNewFunctionVoid("set_Z", Change__float3__set_Z, 0, false, ::app::Uno::Float__typeof()));

    ::uRegisterType(type);
    return type;
}

void Change__float3___ObjInit_2(Change__float3* __this, ::app::Uno::UX::Property__float3* target)
{
    ::app::Fuse::Animations::TrackAnimator___ObjInit_1(__this);

    if (target == NULL)
    {
        U_THROW(::app::Uno::ArgumentNullException__New_5(NULL, ::uGetConstString("target")));
    }

    __this->Target(target);

    if (__this->IsContinuous())
    {
        ::uObject* v;

        if ((::uType*)::app::Uno::Float3__typeof() == (::uType*)::app::Uno::Float__typeof())
        {
            v = (::uObject*)::app::Fuse::Animations::ConverterFloat__Singleton;
        }
        else if ((::uType*)::app::Uno::Float3__typeof() == (::uType*)::app::Uno::Float2__typeof())
        {
            v = (::uObject*)::app::Fuse::Animations::ConverterFloat2__Singleton;
        }
        else if ((::uType*)::app::Uno::Float3__typeof() == (::uType*)::app::Uno::Float3__typeof())
        {
            v = (::uObject*)::app::Fuse::Animations::ConverterFloat3__Singleton;
        }
        else if ((::uType*)::app::Uno::Float3__typeof() == (::uType*)::app::Uno::Float4__typeof())
        {
            v = (::uObject*)::app::Fuse::Animations::ConverterFloat4__Singleton;
        }
        else if ((::uType*)::app::Uno::Float3__typeof() == (::uType*)::app::Uno::Double__typeof())
        {
            v = (::uObject*)::app::Fuse::Animations::ConverterDouble__Singleton;
        }
        else
        {
            U_THROW(::app::Uno::Exception__New_2(NULL, ::app::Uno::String__op_Addition_1(NULL, ::uGetConstString("Unsupported change type: "), (::uObject*)(::uType*)::app::Uno::Float3__typeof())));
        }

        __this->ContinuousConverter = ::uCast< ::app::Fuse::Animations::Converter__float3*>(v, ::app::Fuse::Animations::Converter__float3__typeof());
    }
    else
    {
        __this->Mixer = ::app::Fuse::Animations::Mixer__get_DefaultDiscrete(NULL);
        __this->MarkDiscrete();
    }
}

::app::Fuse::Animations::AnimatorState* Change__float3__CreateState(Change__float3* __this, ::app::Fuse::Animations::CreateStateParams* p)
{
    if (__this->IsContinuous())
    {
        return (::app::Fuse::Animations::AnimatorState*)::app::Fuse::Animations::ContinuousTrackChangeState__float3__New_1(NULL, __this, p);
    }

    return (::app::Fuse::Animations::AnimatorState*)::app::Fuse::Animations::DiscreteTrackChangeState__float3__New_1(NULL, __this, p);
}

float Change__float3__get_DegreesX(Change__float3* __this)
{
    return ::app::Uno::Math__RadiansToDegrees_1(NULL, __this->X());
}

::app::Uno::Float2 Change__float3__get_DegreesXY(Change__float3* __this)
{
    return ::app::Uno::Float2__New_2(NULL, ::app::Uno::Math__RadiansToDegrees_1(NULL, __this->X()), ::app::Uno::Math__RadiansToDegrees_1(NULL, __this->Y()));
}

float Change__float3__get_DegreesY(Change__float3* __this)
{
    return ::app::Uno::Math__RadiansToDegrees_1(NULL, __this->Y());
}

float Change__float3__get_DegreesZ(Change__float3* __this)
{
    return ::app::Uno::Math__RadiansToDegrees_1(NULL, __this->Y());
}

bool Change__float3__get_IsContinuous(Change__float3* __this)
{
    return (((((::uType*)::app::Uno::Float3__typeof() == (::uType*)::app::Uno::Float__typeof()) || ((::uType*)::app::Uno::Float3__typeof() == (::uType*)::app::Uno::Float2__typeof())) || ((::uType*)::app::Uno::Float3__typeof() == (::uType*)::app::Uno::Float3__typeof())) || ((::uType*)::app::Uno::Float3__typeof() == (::uType*)::app::Uno::Float4__typeof())) || ((::uType*)::app::Uno::Float3__typeof() == (::uType*)::app::Uno::Double__typeof());
}

::app::Uno::UX::Property__float3* Change__float3__get_Target(Change__float3* __this)
{
    return __this->_Target;
}

::app::Uno::Float3 Change__float3__get_Value(Change__float3* __this)
{
    return __this->IsContinuous() ? ::uPtr< ::app::Fuse::Animations::Converter__float3*>(__this->ContinuousConverter)->Out(__this->_vectorValue) : ::uUnbox< ::app::Uno::Float3>(::app::Uno::Float3__typeof(), __this->_objectValue);
}

float Change__float3__get_X(Change__float3* __this)
{
    return __this->_vectorValue.X;
}

::app::Uno::Float2 Change__float3__get_XY(Change__float3* __this)
{
    ::app::Uno::Float4 ind_123 = __this->_vectorValue;
    return ::app::Uno::Float2__New_2(NULL, ind_123.X, ind_123.Y);
}

float Change__float3__get_Y(Change__float3* __this)
{
    return __this->_vectorValue.Y;
}

float Change__float3__get_Z(Change__float3* __this)
{
    return __this->_vectorValue.Z;
}

Change__float3* Change__float3__New_1(::uStatic* __this, ::app::Uno::UX::Property__float3* target)
{
    Change__float3* inst = (Change__float3*)::uAllocObject(sizeof(Change__float3), Change__float3__typeof());
    inst->_ObjInit_2(target);
    return inst;
}

void Change__float3__set_DegreesX(Change__float3* __this, float value)
{
    __this->X(::app::Uno::Math__DegreesToRadians_1(NULL, value));
}

void Change__float3__set_DegreesXY(Change__float3* __this, ::app::Uno::Float2 value)
{
    __this->XY(::app::Uno::Float2__New_2(NULL, ::app::Uno::Math__DegreesToRadians_1(NULL, value.X), ::app::Uno::Math__DegreesToRadians_1(NULL, value.Y)));
}

void Change__float3__set_DegreesY(Change__float3* __this, float value)
{
    __this->Y(::app::Uno::Math__DegreesToRadians_1(NULL, value));
}

void Change__float3__set_DegreesZ(Change__float3* __this, float value)
{
    __this->Y(::app::Uno::Math__DegreesToRadians_1(NULL, value));
}

void Change__float3__set_Target(Change__float3* __this, ::app::Uno::UX::Property__float3* value)
{
    __this->_Target = value;
}

void Change__float3__set_Value(Change__float3* __this, ::app::Uno::Float3 value)
{
    if (__this->IsContinuous())
    {
        __this->_vectorValue = ::uPtr< ::app::Fuse::Animations::Converter__float3*>(__this->ContinuousConverter)->In(value);
    }
    else
    {
        __this->_objectValue = ::uBox(::app::Uno::Float3__typeof(), value);
    }
}

void Change__float3__set_X(Change__float3* __this, float value)
{
    __this->_vectorValue.X = value;
}

void Change__float3__set_XY(Change__float3* __this, ::app::Uno::Float2 value)
{
    __this->_vectorValue = ::app::Uno::Float4__New_6(NULL, value, __this->_vectorValue.Z, __this->_vectorValue.W);
}

void Change__float3__set_Y(Change__float3* __this, float value)
{
    __this->_vectorValue.Y = value;
}

void Change__float3__set_Z(Change__float3* __this, float value)
{
    __this->_vectorValue.Z = value;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Animations\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

Change__float4__uType* Change__float4__typeof()
{
    static ::uStaticStrong<Change__float4__uType*> type;
    if (type != NULL) return type;

    type = (Change__float4__uType*)::uAllocClassType(sizeof(Change__float4__uType), "Fuse.Animations.Change<float4>", false, 0, 2, 0);

    type->SetBaseType(::app::Fuse::Animations::TrackAnimator__typeof());
    type->__fp_CreateState = (::app::Fuse::Animations::AnimatorState*(*)(::app::Fuse::Animations::Animator*, ::app::Fuse::Animations::CreateStateParams*))Change__float4__CreateState;

    type->SetStrongRefs(
        "_Target", offsetof(Change__float4, _Target),
        "ContinuousConverter", offsetof(Change__float4, ContinuousConverter));

    type->SetFields(1,
        ::uNewField("ContinuousConverter", NULL, offsetof(Change__float4, ContinuousConverter), ::app::Fuse::Animations::Converter__float4__typeof()));

    type->SetFunctions(22,
        ::uNewFunction("get_DegreesX", Change__float4__get_DegreesX, 0, false, ::app::Uno::Float__typeof()),
        ::uNewFunction("get_DegreesXY", Change__float4__get_DegreesXY, 0, false, ::app::Uno::Float2__typeof()),
        ::uNewFunction("get_DegreesY", Change__float4__get_DegreesY, 0, false, ::app::Uno::Float__typeof()),
        ::uNewFunction("get_DegreesZ", Change__float4__get_DegreesZ, 0, false, ::app::Uno::Float__typeof()),
        ::uNewFunction("get_IsContinuous", Change__float4__get_IsContinuous, 0, false, ::app::Uno::Bool__typeof()),
        ::uNewFunction("get_Target", Change__float4__get_Target, 0, false, ::app::Uno::UX::Property__float4__typeof()),
        ::uNewFunction("get_Value", Change__float4__get_Value, 0, false, ::app::Uno::Float4__typeof()),
        ::uNewFunction("get_X", Change__float4__get_X, 0, false, ::app::Uno::Float__typeof()),
        ::uNewFunction("get_XY", Change__float4__get_XY, 0, false, ::app::Uno::Float2__typeof()),
        ::uNewFunction("get_Y", Change__float4__get_Y, 0, false, ::app::Uno::Float__typeof()),
        ::uNewFunction("get_Z", Change__float4__get_Z, 0, false, ::app::Uno::Float__typeof()),
        ::uNewFunction(".ctor", Change__float4__New_1, 0, true, Change__float4__typeof(), ::app::Uno::UX::Property__float4__typeof()),
        ::uNewFunctionVoid("set_DegreesX", Change__float4__set_DegreesX, 0, false, ::app::Uno::Float__typeof()),
        ::uNewFunctionVoid("set_DegreesXY", Change__float4__set_DegreesXY, 0, false, ::app::Uno::Float2__typeof()),
        ::uNewFunctionVoid("set_DegreesY", Change__float4__set_DegreesY, 0, false, ::app::Uno::Float__typeof()),
        ::uNewFunctionVoid("set_DegreesZ", Change__float4__set_DegreesZ, 0, false, ::app::Uno::Float__typeof()),
        ::uNewFunctionVoid("set_Target", Change__float4__set_Target, 0, false, ::app::Uno::UX::Property__float4__typeof()),
        ::uNewFunctionVoid("set_Value", Change__float4__set_Value, 0, false, ::app::Uno::Float4__typeof()),
        ::uNewFunctionVoid("set_X", Change__float4__set_X, 0, false, ::app::Uno::Float__typeof()),
        ::uNewFunctionVoid("set_XY", Change__float4__set_XY, 0, false, ::app::Uno::Float2__typeof()),
        ::uNewFunctionVoid("set_Y", Change__float4__set_Y, 0, false, ::app::Uno::Float__typeof()),
        ::uNewFunctionVoid("set_Z", Change__float4__set_Z, 0, false, ::app::Uno::Float__typeof()));

    ::uRegisterType(type);
    return type;
}

void Change__float4___ObjInit_2(Change__float4* __this, ::app::Uno::UX::Property__float4* target)
{
    ::app::Fuse::Animations::TrackAnimator___ObjInit_1(__this);

    if (target == NULL)
    {
        U_THROW(::app::Uno::ArgumentNullException__New_5(NULL, ::uGetConstString("target")));
    }

    __this->Target(target);

    if (__this->IsContinuous())
    {
        ::uObject* v;

        if ((::uType*)::app::Uno::Float4__typeof() == (::uType*)::app::Uno::Float__typeof())
        {
            v = (::uObject*)::app::Fuse::Animations::ConverterFloat__Singleton;
        }
        else if ((::uType*)::app::Uno::Float4__typeof() == (::uType*)::app::Uno::Float2__typeof())
        {
            v = (::uObject*)::app::Fuse::Animations::ConverterFloat2__Singleton;
        }
        else if ((::uType*)::app::Uno::Float4__typeof() == (::uType*)::app::Uno::Float3__typeof())
        {
            v = (::uObject*)::app::Fuse::Animations::ConverterFloat3__Singleton;
        }
        else if ((::uType*)::app::Uno::Float4__typeof() == (::uType*)::app::Uno::Float4__typeof())
        {
            v = (::uObject*)::app::Fuse::Animations::ConverterFloat4__Singleton;
        }
        else if ((::uType*)::app::Uno::Float4__typeof() == (::uType*)::app::Uno::Double__typeof())
        {
            v = (::uObject*)::app::Fuse::Animations::ConverterDouble__Singleton;
        }
        else
        {
            U_THROW(::app::Uno::Exception__New_2(NULL, ::app::Uno::String__op_Addition_1(NULL, ::uGetConstString("Unsupported change type: "), (::uObject*)(::uType*)::app::Uno::Float4__typeof())));
        }

        __this->ContinuousConverter = ::uCast< ::app::Fuse::Animations::Converter__float4*>(v, ::app::Fuse::Animations::Converter__float4__typeof());
    }
    else
    {
        __this->Mixer = ::app::Fuse::Animations::Mixer__get_DefaultDiscrete(NULL);
        __this->MarkDiscrete();
    }
}

::app::Fuse::Animations::AnimatorState* Change__float4__CreateState(Change__float4* __this, ::app::Fuse::Animations::CreateStateParams* p)
{
    if (__this->IsContinuous())
    {
        return (::app::Fuse::Animations::AnimatorState*)::app::Fuse::Animations::ContinuousTrackChangeState__float4__New_1(NULL, __this, p);
    }

    return (::app::Fuse::Animations::AnimatorState*)::app::Fuse::Animations::DiscreteTrackChangeState__float4__New_1(NULL, __this, p);
}

float Change__float4__get_DegreesX(Change__float4* __this)
{
    return ::app::Uno::Math__RadiansToDegrees_1(NULL, __this->X());
}

::app::Uno::Float2 Change__float4__get_DegreesXY(Change__float4* __this)
{
    return ::app::Uno::Float2__New_2(NULL, ::app::Uno::Math__RadiansToDegrees_1(NULL, __this->X()), ::app::Uno::Math__RadiansToDegrees_1(NULL, __this->Y()));
}

float Change__float4__get_DegreesY(Change__float4* __this)
{
    return ::app::Uno::Math__RadiansToDegrees_1(NULL, __this->Y());
}

float Change__float4__get_DegreesZ(Change__float4* __this)
{
    return ::app::Uno::Math__RadiansToDegrees_1(NULL, __this->Y());
}

bool Change__float4__get_IsContinuous(Change__float4* __this)
{
    return (((((::uType*)::app::Uno::Float4__typeof() == (::uType*)::app::Uno::Float__typeof()) || ((::uType*)::app::Uno::Float4__typeof() == (::uType*)::app::Uno::Float2__typeof())) || ((::uType*)::app::Uno::Float4__typeof() == (::uType*)::app::Uno::Float3__typeof())) || ((::uType*)::app::Uno::Float4__typeof() == (::uType*)::app::Uno::Float4__typeof())) || ((::uType*)::app::Uno::Float4__typeof() == (::uType*)::app::Uno::Double__typeof());
}

::app::Uno::UX::Property__float4* Change__float4__get_Target(Change__float4* __this)
{
    return __this->_Target;
}

::app::Uno::Float4 Change__float4__get_Value(Change__float4* __this)
{
    return __this->IsContinuous() ? ::uPtr< ::app::Fuse::Animations::Converter__float4*>(__this->ContinuousConverter)->Out(__this->_vectorValue) : ::uUnbox< ::app::Uno::Float4>(::app::Uno::Float4__typeof(), __this->_objectValue);
}

float Change__float4__get_X(Change__float4* __this)
{
    return __this->_vectorValue.X;
}

::app::Uno::Float2 Change__float4__get_XY(Change__float4* __this)
{
    ::app::Uno::Float4 ind_123 = __this->_vectorValue;
    return ::app::Uno::Float2__New_2(NULL, ind_123.X, ind_123.Y);
}

float Change__float4__get_Y(Change__float4* __this)
{
    return __this->_vectorValue.Y;
}

float Change__float4__get_Z(Change__float4* __this)
{
    return __this->_vectorValue.Z;
}

Change__float4* Change__float4__New_1(::uStatic* __this, ::app::Uno::UX::Property__float4* target)
{
    Change__float4* inst = (Change__float4*)::uAllocObject(sizeof(Change__float4), Change__float4__typeof());
    inst->_ObjInit_2(target);
    return inst;
}

void Change__float4__set_DegreesX(Change__float4* __this, float value)
{
    __this->X(::app::Uno::Math__DegreesToRadians_1(NULL, value));
}

void Change__float4__set_DegreesXY(Change__float4* __this, ::app::Uno::Float2 value)
{
    __this->XY(::app::Uno::Float2__New_2(NULL, ::app::Uno::Math__DegreesToRadians_1(NULL, value.X), ::app::Uno::Math__DegreesToRadians_1(NULL, value.Y)));
}

void Change__float4__set_DegreesY(Change__float4* __this, float value)
{
    __this->Y(::app::Uno::Math__DegreesToRadians_1(NULL, value));
}

void Change__float4__set_DegreesZ(Change__float4* __this, float value)
{
    __this->Y(::app::Uno::Math__DegreesToRadians_1(NULL, value));
}

void Change__float4__set_Target(Change__float4* __this, ::app::Uno::UX::Property__float4* value)
{
    __this->_Target = value;
}

void Change__float4__set_Value(Change__float4* __this, ::app::Uno::Float4 value)
{
    if (__this->IsContinuous())
    {
        __this->_vectorValue = ::uPtr< ::app::Fuse::Animations::Converter__float4*>(__this->ContinuousConverter)->In(value);
    }
    else
    {
        __this->_objectValue = ::uBox(::app::Uno::Float4__typeof(), value);
    }
}

void Change__float4__set_X(Change__float4* __this, float value)
{
    __this->_vectorValue.X = value;
}

void Change__float4__set_XY(Change__float4* __this, ::app::Uno::Float2 value)
{
    __this->_vectorValue = ::app::Uno::Float4__New_6(NULL, value, __this->_vectorValue.Z, __this->_vectorValue.W);
}

void Change__float4__set_Y(Change__float4* __this, float value)
{
    __this->_vectorValue.Y = value;
}

void Change__float4__set_Z(Change__float4* __this, float value)
{
    __this->_vectorValue.Z = value;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Animations\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

Change__Fuse_Animations_AnimationVariant__uType* Change__Fuse_Animations_AnimationVariant__typeof()
{
    static ::uStaticStrong<Change__Fuse_Animations_AnimationVariant__uType*> type;
    if (type != NULL) return type;

    type = (Change__Fuse_Animations_AnimationVariant__uType*)::uAllocClassType(sizeof(Change__Fuse_Animations_AnimationVariant__uType), "Fuse.Animations.Change<Fuse.Animations.AnimationVariant>", false, 0, 2, 0);

    type->SetBaseType(::app::Fuse::Animations::TrackAnimator__typeof());
    type->__fp_CreateState = (::app::Fuse::Animations::AnimatorState*(*)(::app::Fuse::Animations::Animator*, ::app::Fuse::Animations::CreateStateParams*))Change__Fuse_Animations_AnimationVariant__CreateState;

    type->SetStrongRefs(
        "_Target", offsetof(Change__Fuse_Animations_AnimationVariant, _Target),
        "ContinuousConverter", offsetof(Change__Fuse_Animations_AnimationVariant, ContinuousConverter));

    type->SetFields(1,
        ::uNewField("ContinuousConverter", NULL, offsetof(Change__Fuse_Animations_AnimationVariant, ContinuousConverter), ::app::Fuse::Animations::Converter__Fuse_Animations_AnimationVariant__typeof()));

    type->SetFunctions(22,
        ::uNewFunction("get_DegreesX", Change__Fuse_Animations_AnimationVariant__get_DegreesX, 0, false, ::app::Uno::Float__typeof()),
        ::uNewFunction("get_DegreesXY", Change__Fuse_Animations_AnimationVariant__get_DegreesXY, 0, false, ::app::Uno::Float2__typeof()),
        ::uNewFunction("get_DegreesY", Change__Fuse_Animations_AnimationVariant__get_DegreesY, 0, false, ::app::Uno::Float__typeof()),
        ::uNewFunction("get_DegreesZ", Change__Fuse_Animations_AnimationVariant__get_DegreesZ, 0, false, ::app::Uno::Float__typeof()),
        ::uNewFunction("get_IsContinuous", Change__Fuse_Animations_AnimationVariant__get_IsContinuous, 0, false, ::app::Uno::Bool__typeof()),
        ::uNewFunction("get_Target", Change__Fuse_Animations_AnimationVariant__get_Target, 0, false, ::app::Uno::UX::Property__Fuse_Animations_AnimationVariant__typeof()),
        ::uNewFunction("get_Value", Change__Fuse_Animations_AnimationVariant__get_Value, 0, false, ::app::Fuse::Animations::AnimationVariant__typeof()),
        ::uNewFunction("get_X", Change__Fuse_Animations_AnimationVariant__get_X, 0, false, ::app::Uno::Float__typeof()),
        ::uNewFunction("get_XY", Change__Fuse_Animations_AnimationVariant__get_XY, 0, false, ::app::Uno::Float2__typeof()),
        ::uNewFunction("get_Y", Change__Fuse_Animations_AnimationVariant__get_Y, 0, false, ::app::Uno::Float__typeof()),
        ::uNewFunction("get_Z", Change__Fuse_Animations_AnimationVariant__get_Z, 0, false, ::app::Uno::Float__typeof()),
        ::uNewFunction(".ctor", Change__Fuse_Animations_AnimationVariant__New_1, 0, true, Change__Fuse_Animations_AnimationVariant__typeof(), ::app::Uno::UX::Property__Fuse_Animations_AnimationVariant__typeof()),
        ::uNewFunctionVoid("set_DegreesX", Change__Fuse_Animations_AnimationVariant__set_DegreesX, 0, false, ::app::Uno::Float__typeof()),
        ::uNewFunctionVoid("set_DegreesXY", Change__Fuse_Animations_AnimationVariant__set_DegreesXY, 0, false, ::app::Uno::Float2__typeof()),
        ::uNewFunctionVoid("set_DegreesY", Change__Fuse_Animations_AnimationVariant__set_DegreesY, 0, false, ::app::Uno::Float__typeof()),
        ::uNewFunctionVoid("set_DegreesZ", Change__Fuse_Animations_AnimationVariant__set_DegreesZ, 0, false, ::app::Uno::Float__typeof()),
        ::uNewFunctionVoid("set_Target", Change__Fuse_Animations_AnimationVariant__set_Target, 0, false, ::app::Uno::UX::Property__Fuse_Animations_AnimationVariant__typeof()),
        ::uNewFunctionVoid("set_Value", Change__Fuse_Animations_AnimationVariant__set_Value, 0, false, ::app::Fuse::Animations::AnimationVariant__typeof()),
        ::uNewFunctionVoid("set_X", Change__Fuse_Animations_AnimationVariant__set_X, 0, false, ::app::Uno::Float__typeof()),
        ::uNewFunctionVoid("set_XY", Change__Fuse_Animations_AnimationVariant__set_XY, 0, false, ::app::Uno::Float2__typeof()),
        ::uNewFunctionVoid("set_Y", Change__Fuse_Animations_AnimationVariant__set_Y, 0, false, ::app::Uno::Float__typeof()),
        ::uNewFunctionVoid("set_Z", Change__Fuse_Animations_AnimationVariant__set_Z, 0, false, ::app::Uno::Float__typeof()));

    ::uRegisterType(type);
    return type;
}

void Change__Fuse_Animations_AnimationVariant___ObjInit_2(Change__Fuse_Animations_AnimationVariant* __this, ::app::Uno::UX::Property__Fuse_Animations_AnimationVariant* target)
{
    ::app::Fuse::Animations::TrackAnimator___ObjInit_1(__this);

    if (target == NULL)
    {
        U_THROW(::app::Uno::ArgumentNullException__New_5(NULL, ::uGetConstString("target")));
    }

    __this->Target(target);

    if (__this->IsContinuous())
    {
        ::uObject* v;

        if ((::uType*)::app::Fuse::Animations::AnimationVariant__typeof() == (::uType*)::app::Uno::Float__typeof())
        {
            v = (::uObject*)::app::Fuse::Animations::ConverterFloat__Singleton;
        }
        else if ((::uType*)::app::Fuse::Animations::AnimationVariant__typeof() == (::uType*)::app::Uno::Float2__typeof())
        {
            v = (::uObject*)::app::Fuse::Animations::ConverterFloat2__Singleton;
        }
        else if ((::uType*)::app::Fuse::Animations::AnimationVariant__typeof() == (::uType*)::app::Uno::Float3__typeof())
        {
            v = (::uObject*)::app::Fuse::Animations::ConverterFloat3__Singleton;
        }
        else if ((::uType*)::app::Fuse::Animations::AnimationVariant__typeof() == (::uType*)::app::Uno::Float4__typeof())
        {
            v = (::uObject*)::app::Fuse::Animations::ConverterFloat4__Singleton;
        }
        else if ((::uType*)::app::Fuse::Animations::AnimationVariant__typeof() == (::uType*)::app::Uno::Double__typeof())
        {
            v = (::uObject*)::app::Fuse::Animations::ConverterDouble__Singleton;
        }
        else
        {
            U_THROW(::app::Uno::Exception__New_2(NULL, ::app::Uno::String__op_Addition_1(NULL, ::uGetConstString("Unsupported change type: "), (::uObject*)(::uType*)::app::Fuse::Animations::AnimationVariant__typeof())));
        }

        __this->ContinuousConverter = ::uCast< ::app::Fuse::Animations::Converter__Fuse_Animations_AnimationVariant*>(v, ::app::Fuse::Animations::Converter__Fuse_Animations_AnimationVariant__typeof());
    }
    else
    {
        __this->Mixer = ::app::Fuse::Animations::Mixer__get_DefaultDiscrete(NULL);
        __this->MarkDiscrete();
    }
}

::app::Fuse::Animations::AnimatorState* Change__Fuse_Animations_AnimationVariant__CreateState(Change__Fuse_Animations_AnimationVariant* __this, ::app::Fuse::Animations::CreateStateParams* p)
{
    if (__this->IsContinuous())
    {
        return (::app::Fuse::Animations::AnimatorState*)::app::Fuse::Animations::ContinuousTrackChangeState__Fuse_Animations_AnimationVariant__New_1(NULL, __this, p);
    }

    return (::app::Fuse::Animations::AnimatorState*)::app::Fuse::Animations::DiscreteTrackChangeState__Fuse_Animations_AnimationVariant__New_1(NULL, __this, p);
}

float Change__Fuse_Animations_AnimationVariant__get_DegreesX(Change__Fuse_Animations_AnimationVariant* __this)
{
    return ::app::Uno::Math__RadiansToDegrees_1(NULL, __this->X());
}

::app::Uno::Float2 Change__Fuse_Animations_AnimationVariant__get_DegreesXY(Change__Fuse_Animations_AnimationVariant* __this)
{
    return ::app::Uno::Float2__New_2(NULL, ::app::Uno::Math__RadiansToDegrees_1(NULL, __this->X()), ::app::Uno::Math__RadiansToDegrees_1(NULL, __this->Y()));
}

float Change__Fuse_Animations_AnimationVariant__get_DegreesY(Change__Fuse_Animations_AnimationVariant* __this)
{
    return ::app::Uno::Math__RadiansToDegrees_1(NULL, __this->Y());
}

float Change__Fuse_Animations_AnimationVariant__get_DegreesZ(Change__Fuse_Animations_AnimationVariant* __this)
{
    return ::app::Uno::Math__RadiansToDegrees_1(NULL, __this->Y());
}

bool Change__Fuse_Animations_AnimationVariant__get_IsContinuous(Change__Fuse_Animations_AnimationVariant* __this)
{
    return (((((::uType*)::app::Fuse::Animations::AnimationVariant__typeof() == (::uType*)::app::Uno::Float__typeof()) || ((::uType*)::app::Fuse::Animations::AnimationVariant__typeof() == (::uType*)::app::Uno::Float2__typeof())) || ((::uType*)::app::Fuse::Animations::AnimationVariant__typeof() == (::uType*)::app::Uno::Float3__typeof())) || ((::uType*)::app::Fuse::Animations::AnimationVariant__typeof() == (::uType*)::app::Uno::Float4__typeof())) || ((::uType*)::app::Fuse::Animations::AnimationVariant__typeof() == (::uType*)::app::Uno::Double__typeof());
}

::app::Uno::UX::Property__Fuse_Animations_AnimationVariant* Change__Fuse_Animations_AnimationVariant__get_Target(Change__Fuse_Animations_AnimationVariant* __this)
{
    return __this->_Target;
}

int Change__Fuse_Animations_AnimationVariant__get_Value(Change__Fuse_Animations_AnimationVariant* __this)
{
    return __this->IsContinuous() ? ::uPtr< ::app::Fuse::Animations::Converter__Fuse_Animations_AnimationVariant*>(__this->ContinuousConverter)->Out(__this->_vectorValue) : ::uUnbox< int>(::app::Fuse::Animations::AnimationVariant__typeof(), __this->_objectValue);
}

float Change__Fuse_Animations_AnimationVariant__get_X(Change__Fuse_Animations_AnimationVariant* __this)
{
    return __this->_vectorValue.X;
}

::app::Uno::Float2 Change__Fuse_Animations_AnimationVariant__get_XY(Change__Fuse_Animations_AnimationVariant* __this)
{
    ::app::Uno::Float4 ind_123 = __this->_vectorValue;
    return ::app::Uno::Float2__New_2(NULL, ind_123.X, ind_123.Y);
}

float Change__Fuse_Animations_AnimationVariant__get_Y(Change__Fuse_Animations_AnimationVariant* __this)
{
    return __this->_vectorValue.Y;
}

float Change__Fuse_Animations_AnimationVariant__get_Z(Change__Fuse_Animations_AnimationVariant* __this)
{
    return __this->_vectorValue.Z;
}

Change__Fuse_Animations_AnimationVariant* Change__Fuse_Animations_AnimationVariant__New_1(::uStatic* __this, ::app::Uno::UX::Property__Fuse_Animations_AnimationVariant* target)
{
    Change__Fuse_Animations_AnimationVariant* inst = (Change__Fuse_Animations_AnimationVariant*)::uAllocObject(sizeof(Change__Fuse_Animations_AnimationVariant), Change__Fuse_Animations_AnimationVariant__typeof());
    inst->_ObjInit_2(target);
    return inst;
}

void Change__Fuse_Animations_AnimationVariant__set_DegreesX(Change__Fuse_Animations_AnimationVariant* __this, float value)
{
    __this->X(::app::Uno::Math__DegreesToRadians_1(NULL, value));
}

void Change__Fuse_Animations_AnimationVariant__set_DegreesXY(Change__Fuse_Animations_AnimationVariant* __this, ::app::Uno::Float2 value)
{
    __this->XY(::app::Uno::Float2__New_2(NULL, ::app::Uno::Math__DegreesToRadians_1(NULL, value.X), ::app::Uno::Math__DegreesToRadians_1(NULL, value.Y)));
}

void Change__Fuse_Animations_AnimationVariant__set_DegreesY(Change__Fuse_Animations_AnimationVariant* __this, float value)
{
    __this->Y(::app::Uno::Math__DegreesToRadians_1(NULL, value));
}

void Change__Fuse_Animations_AnimationVariant__set_DegreesZ(Change__Fuse_Animations_AnimationVariant* __this, float value)
{
    __this->Y(::app::Uno::Math__DegreesToRadians_1(NULL, value));
}

void Change__Fuse_Animations_AnimationVariant__set_Target(Change__Fuse_Animations_AnimationVariant* __this, ::app::Uno::UX::Property__Fuse_Animations_AnimationVariant* value)
{
    __this->_Target = value;
}

void Change__Fuse_Animations_AnimationVariant__set_Value(Change__Fuse_Animations_AnimationVariant* __this, int value)
{
    if (__this->IsContinuous())
    {
        __this->_vectorValue = ::uPtr< ::app::Fuse::Animations::Converter__Fuse_Animations_AnimationVariant*>(__this->ContinuousConverter)->In(value);
    }
    else
    {
        __this->_objectValue = ::uBox< int>(::app::Fuse::Animations::AnimationVariant__typeof(), value);
    }
}

void Change__Fuse_Animations_AnimationVariant__set_X(Change__Fuse_Animations_AnimationVariant* __this, float value)
{
    __this->_vectorValue.X = value;
}

void Change__Fuse_Animations_AnimationVariant__set_XY(Change__Fuse_Animations_AnimationVariant* __this, ::app::Uno::Float2 value)
{
    __this->_vectorValue = ::app::Uno::Float4__New_6(NULL, value, __this->_vectorValue.Z, __this->_vectorValue.W);
}

void Change__Fuse_Animations_AnimationVariant__set_Y(Change__Fuse_Animations_AnimationVariant* __this, float value)
{
    __this->_vectorValue.Y = value;
}

void Change__Fuse_Animations_AnimationVariant__set_Z(Change__Fuse_Animations_AnimationVariant* __this, float value)
{
    __this->_vectorValue.Z = value;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Animations\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

Change__Fuse_Animations_Easing__uType* Change__Fuse_Animations_Easing__typeof()
{
    static ::uStaticStrong<Change__Fuse_Animations_Easing__uType*> type;
    if (type != NULL) return type;

    type = (Change__Fuse_Animations_Easing__uType*)::uAllocClassType(sizeof(Change__Fuse_Animations_Easing__uType), "Fuse.Animations.Change<Fuse.Animations.Easing>", false, 0, 2, 0);

    type->SetBaseType(::app::Fuse::Animations::TrackAnimator__typeof());
    type->__fp_CreateState = (::app::Fuse::Animations::AnimatorState*(*)(::app::Fuse::Animations::Animator*, ::app::Fuse::Animations::CreateStateParams*))Change__Fuse_Animations_Easing__CreateState;

    type->SetStrongRefs(
        "_Target", offsetof(Change__Fuse_Animations_Easing, _Target),
        "ContinuousConverter", offsetof(Change__Fuse_Animations_Easing, ContinuousConverter));

    type->SetFields(1,
        ::uNewField("ContinuousConverter", NULL, offsetof(Change__Fuse_Animations_Easing, ContinuousConverter), ::app::Fuse::Animations::Converter__Fuse_Animations_Easing__typeof()));

    type->SetFunctions(22,
        ::uNewFunction("get_DegreesX", Change__Fuse_Animations_Easing__get_DegreesX, 0, false, ::app::Uno::Float__typeof()),
        ::uNewFunction("get_DegreesXY", Change__Fuse_Animations_Easing__get_DegreesXY, 0, false, ::app::Uno::Float2__typeof()),
        ::uNewFunction("get_DegreesY", Change__Fuse_Animations_Easing__get_DegreesY, 0, false, ::app::Uno::Float__typeof()),
        ::uNewFunction("get_DegreesZ", Change__Fuse_Animations_Easing__get_DegreesZ, 0, false, ::app::Uno::Float__typeof()),
        ::uNewFunction("get_IsContinuous", Change__Fuse_Animations_Easing__get_IsContinuous, 0, false, ::app::Uno::Bool__typeof()),
        ::uNewFunction("get_Target", Change__Fuse_Animations_Easing__get_Target, 0, false, ::app::Uno::UX::Property__Fuse_Animations_Easing__typeof()),
        ::uNewFunction("get_Value", Change__Fuse_Animations_Easing__get_Value, 0, false, ::app::Fuse::Animations::Easing__typeof()),
        ::uNewFunction("get_X", Change__Fuse_Animations_Easing__get_X, 0, false, ::app::Uno::Float__typeof()),
        ::uNewFunction("get_XY", Change__Fuse_Animations_Easing__get_XY, 0, false, ::app::Uno::Float2__typeof()),
        ::uNewFunction("get_Y", Change__Fuse_Animations_Easing__get_Y, 0, false, ::app::Uno::Float__typeof()),
        ::uNewFunction("get_Z", Change__Fuse_Animations_Easing__get_Z, 0, false, ::app::Uno::Float__typeof()),
        ::uNewFunction(".ctor", Change__Fuse_Animations_Easing__New_1, 0, true, Change__Fuse_Animations_Easing__typeof(), ::app::Uno::UX::Property__Fuse_Animations_Easing__typeof()),
        ::uNewFunctionVoid("set_DegreesX", Change__Fuse_Animations_Easing__set_DegreesX, 0, false, ::app::Uno::Float__typeof()),
        ::uNewFunctionVoid("set_DegreesXY", Change__Fuse_Animations_Easing__set_DegreesXY, 0, false, ::app::Uno::Float2__typeof()),
        ::uNewFunctionVoid("set_DegreesY", Change__Fuse_Animations_Easing__set_DegreesY, 0, false, ::app::Uno::Float__typeof()),
        ::uNewFunctionVoid("set_DegreesZ", Change__Fuse_Animations_Easing__set_DegreesZ, 0, false, ::app::Uno::Float__typeof()),
        ::uNewFunctionVoid("set_Target", Change__Fuse_Animations_Easing__set_Target, 0, false, ::app::Uno::UX::Property__Fuse_Animations_Easing__typeof()),
        ::uNewFunctionVoid("set_Value", Change__Fuse_Animations_Easing__set_Value, 0, false, ::app::Fuse::Animations::Easing__typeof()),
        ::uNewFunctionVoid("set_X", Change__Fuse_Animations_Easing__set_X, 0, false, ::app::Uno::Float__typeof()),
        ::uNewFunctionVoid("set_XY", Change__Fuse_Animations_Easing__set_XY, 0, false, ::app::Uno::Float2__typeof()),
        ::uNewFunctionVoid("set_Y", Change__Fuse_Animations_Easing__set_Y, 0, false, ::app::Uno::Float__typeof()),
        ::uNewFunctionVoid("set_Z", Change__Fuse_Animations_Easing__set_Z, 0, false, ::app::Uno::Float__typeof()));

    ::uRegisterType(type);
    return type;
}

void Change__Fuse_Animations_Easing___ObjInit_2(Change__Fuse_Animations_Easing* __this, ::app::Uno::UX::Property__Fuse_Animations_Easing* target)
{
    ::app::Fuse::Animations::TrackAnimator___ObjInit_1(__this);

    if (target == NULL)
    {
        U_THROW(::app::Uno::ArgumentNullException__New_5(NULL, ::uGetConstString("target")));
    }

    __this->Target(target);

    if (__this->IsContinuous())
    {
        ::uObject* v;

        if ((::uType*)::app::Fuse::Animations::Easing__typeof() == (::uType*)::app::Uno::Float__typeof())
        {
            v = (::uObject*)::app::Fuse::Animations::ConverterFloat__Singleton;
        }
        else if ((::uType*)::app::Fuse::Animations::Easing__typeof() == (::uType*)::app::Uno::Float2__typeof())
        {
            v = (::uObject*)::app::Fuse::Animations::ConverterFloat2__Singleton;
        }
        else if ((::uType*)::app::Fuse::Animations::Easing__typeof() == (::uType*)::app::Uno::Float3__typeof())
        {
            v = (::uObject*)::app::Fuse::Animations::ConverterFloat3__Singleton;
        }
        else if ((::uType*)::app::Fuse::Animations::Easing__typeof() == (::uType*)::app::Uno::Float4__typeof())
        {
            v = (::uObject*)::app::Fuse::Animations::ConverterFloat4__Singleton;
        }
        else if ((::uType*)::app::Fuse::Animations::Easing__typeof() == (::uType*)::app::Uno::Double__typeof())
        {
            v = (::uObject*)::app::Fuse::Animations::ConverterDouble__Singleton;
        }
        else
        {
            U_THROW(::app::Uno::Exception__New_2(NULL, ::app::Uno::String__op_Addition_1(NULL, ::uGetConstString("Unsupported change type: "), (::uObject*)(::uType*)::app::Fuse::Animations::Easing__typeof())));
        }

        __this->ContinuousConverter = ::uCast< ::app::Fuse::Animations::Converter__Fuse_Animations_Easing*>(v, ::app::Fuse::Animations::Converter__Fuse_Animations_Easing__typeof());
    }
    else
    {
        __this->Mixer = ::app::Fuse::Animations::Mixer__get_DefaultDiscrete(NULL);
        __this->MarkDiscrete();
    }
}

::app::Fuse::Animations::AnimatorState* Change__Fuse_Animations_Easing__CreateState(Change__Fuse_Animations_Easing* __this, ::app::Fuse::Animations::CreateStateParams* p)
{
    if (__this->IsContinuous())
    {
        return (::app::Fuse::Animations::AnimatorState*)::app::Fuse::Animations::ContinuousTrackChangeState__Fuse_Animations_Easing__New_1(NULL, __this, p);
    }

    return (::app::Fuse::Animations::AnimatorState*)::app::Fuse::Animations::DiscreteTrackChangeState__Fuse_Animations_Easing__New_1(NULL, __this, p);
}

float Change__Fuse_Animations_Easing__get_DegreesX(Change__Fuse_Animations_Easing* __this)
{
    return ::app::Uno::Math__RadiansToDegrees_1(NULL, __this->X());
}

::app::Uno::Float2 Change__Fuse_Animations_Easing__get_DegreesXY(Change__Fuse_Animations_Easing* __this)
{
    return ::app::Uno::Float2__New_2(NULL, ::app::Uno::Math__RadiansToDegrees_1(NULL, __this->X()), ::app::Uno::Math__RadiansToDegrees_1(NULL, __this->Y()));
}

float Change__Fuse_Animations_Easing__get_DegreesY(Change__Fuse_Animations_Easing* __this)
{
    return ::app::Uno::Math__RadiansToDegrees_1(NULL, __this->Y());
}

float Change__Fuse_Animations_Easing__get_DegreesZ(Change__Fuse_Animations_Easing* __this)
{
    return ::app::Uno::Math__RadiansToDegrees_1(NULL, __this->Y());
}

bool Change__Fuse_Animations_Easing__get_IsContinuous(Change__Fuse_Animations_Easing* __this)
{
    return (((((::uType*)::app::Fuse::Animations::Easing__typeof() == (::uType*)::app::Uno::Float__typeof()) || ((::uType*)::app::Fuse::Animations::Easing__typeof() == (::uType*)::app::Uno::Float2__typeof())) || ((::uType*)::app::Fuse::Animations::Easing__typeof() == (::uType*)::app::Uno::Float3__typeof())) || ((::uType*)::app::Fuse::Animations::Easing__typeof() == (::uType*)::app::Uno::Float4__typeof())) || ((::uType*)::app::Fuse::Animations::Easing__typeof() == (::uType*)::app::Uno::Double__typeof());
}

::app::Uno::UX::Property__Fuse_Animations_Easing* Change__Fuse_Animations_Easing__get_Target(Change__Fuse_Animations_Easing* __this)
{
    return __this->_Target;
}

int Change__Fuse_Animations_Easing__get_Value(Change__Fuse_Animations_Easing* __this)
{
    return __this->IsContinuous() ? ::uPtr< ::app::Fuse::Animations::Converter__Fuse_Animations_Easing*>(__this->ContinuousConverter)->Out(__this->_vectorValue) : ::uUnbox< int>(::app::Fuse::Animations::Easing__typeof(), __this->_objectValue);
}

float Change__Fuse_Animations_Easing__get_X(Change__Fuse_Animations_Easing* __this)
{
    return __this->_vectorValue.X;
}

::app::Uno::Float2 Change__Fuse_Animations_Easing__get_XY(Change__Fuse_Animations_Easing* __this)
{
    ::app::Uno::Float4 ind_123 = __this->_vectorValue;
    return ::app::Uno::Float2__New_2(NULL, ind_123.X, ind_123.Y);
}

float Change__Fuse_Animations_Easing__get_Y(Change__Fuse_Animations_Easing* __this)
{
    return __this->_vectorValue.Y;
}

float Change__Fuse_Animations_Easing__get_Z(Change__Fuse_Animations_Easing* __this)
{
    return __this->_vectorValue.Z;
}

Change__Fuse_Animations_Easing* Change__Fuse_Animations_Easing__New_1(::uStatic* __this, ::app::Uno::UX::Property__Fuse_Animations_Easing* target)
{
    Change__Fuse_Animations_Easing* inst = (Change__Fuse_Animations_Easing*)::uAllocObject(sizeof(Change__Fuse_Animations_Easing), Change__Fuse_Animations_Easing__typeof());
    inst->_ObjInit_2(target);
    return inst;
}

void Change__Fuse_Animations_Easing__set_DegreesX(Change__Fuse_Animations_Easing* __this, float value)
{
    __this->X(::app::Uno::Math__DegreesToRadians_1(NULL, value));
}

void Change__Fuse_Animations_Easing__set_DegreesXY(Change__Fuse_Animations_Easing* __this, ::app::Uno::Float2 value)
{
    __this->XY(::app::Uno::Float2__New_2(NULL, ::app::Uno::Math__DegreesToRadians_1(NULL, value.X), ::app::Uno::Math__DegreesToRadians_1(NULL, value.Y)));
}

void Change__Fuse_Animations_Easing__set_DegreesY(Change__Fuse_Animations_Easing* __this, float value)
{
    __this->Y(::app::Uno::Math__DegreesToRadians_1(NULL, value));
}

void Change__Fuse_Animations_Easing__set_DegreesZ(Change__Fuse_Animations_Easing* __this, float value)
{
    __this->Y(::app::Uno::Math__DegreesToRadians_1(NULL, value));
}

void Change__Fuse_Animations_Easing__set_Target(Change__Fuse_Animations_Easing* __this, ::app::Uno::UX::Property__Fuse_Animations_Easing* value)
{
    __this->_Target = value;
}

void Change__Fuse_Animations_Easing__set_Value(Change__Fuse_Animations_Easing* __this, int value)
{
    if (__this->IsContinuous())
    {
        __this->_vectorValue = ::uPtr< ::app::Fuse::Animations::Converter__Fuse_Animations_Easing*>(__this->ContinuousConverter)->In(value);
    }
    else
    {
        __this->_objectValue = ::uBox< int>(::app::Fuse::Animations::Easing__typeof(), value);
    }
}

void Change__Fuse_Animations_Easing__set_X(Change__Fuse_Animations_Easing* __this, float value)
{
    __this->_vectorValue.X = value;
}

void Change__Fuse_Animations_Easing__set_XY(Change__Fuse_Animations_Easing* __this, ::app::Uno::Float2 value)
{
    __this->_vectorValue = ::app::Uno::Float4__New_6(NULL, value, __this->_vectorValue.Z, __this->_vectorValue.W);
}

void Change__Fuse_Animations_Easing__set_Y(Change__Fuse_Animations_Easing* __this, float value)
{
    __this->_vectorValue.Y = value;
}

void Change__Fuse_Animations_Easing__set_Z(Change__Fuse_Animations_Easing* __this, float value)
{
    __this->_vectorValue.Z = value;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Animations\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

Change__Fuse_Animations_KeyframeInterpolation__uType* Change__Fuse_Animations_KeyframeInterpolation__typeof()
{
    static ::uStaticStrong<Change__Fuse_Animations_KeyframeInterpolation__uType*> type;
    if (type != NULL) return type;

    type = (Change__Fuse_Animations_KeyframeInterpolation__uType*)::uAllocClassType(sizeof(Change__Fuse_Animations_KeyframeInterpolation__uType), "Fuse.Animations.Change<Fuse.Animations.KeyframeInterpolation>", false, 0, 2, 0);

    type->SetBaseType(::app::Fuse::Animations::TrackAnimator__typeof());
    type->__fp_CreateState = (::app::Fuse::Animations::AnimatorState*(*)(::app::Fuse::Animations::Animator*, ::app::Fuse::Animations::CreateStateParams*))Change__Fuse_Animations_KeyframeInterpolation__CreateState;

    type->SetStrongRefs(
        "_Target", offsetof(Change__Fuse_Animations_KeyframeInterpolation, _Target),
        "ContinuousConverter", offsetof(Change__Fuse_Animations_KeyframeInterpolation, ContinuousConverter));

    type->SetFields(1,
        ::uNewField("ContinuousConverter", NULL, offsetof(Change__Fuse_Animations_KeyframeInterpolation, ContinuousConverter), ::app::Fuse::Animations::Converter__Fuse_Animations_KeyframeInterpolation__typeof()));

    type->SetFunctions(22,
        ::uNewFunction("get_DegreesX", Change__Fuse_Animations_KeyframeInterpolation__get_DegreesX, 0, false, ::app::Uno::Float__typeof()),
        ::uNewFunction("get_DegreesXY", Change__Fuse_Animations_KeyframeInterpolation__get_DegreesXY, 0, false, ::app::Uno::Float2__typeof()),
        ::uNewFunction("get_DegreesY", Change__Fuse_Animations_KeyframeInterpolation__get_DegreesY, 0, false, ::app::Uno::Float__typeof()),
        ::uNewFunction("get_DegreesZ", Change__Fuse_Animations_KeyframeInterpolation__get_DegreesZ, 0, false, ::app::Uno::Float__typeof()),
        ::uNewFunction("get_IsContinuous", Change__Fuse_Animations_KeyframeInterpolation__get_IsContinuous, 0, false, ::app::Uno::Bool__typeof()),
        ::uNewFunction("get_Target", Change__Fuse_Animations_KeyframeInterpolation__get_Target, 0, false, ::app::Uno::UX::Property__Fuse_Animations_KeyframeInterpolation__typeof()),
        ::uNewFunction("get_Value", Change__Fuse_Animations_KeyframeInterpolation__get_Value, 0, false, ::app::Fuse::Animations::KeyframeInterpolation__typeof()),
        ::uNewFunction("get_X", Change__Fuse_Animations_KeyframeInterpolation__get_X, 0, false, ::app::Uno::Float__typeof()),
        ::uNewFunction("get_XY", Change__Fuse_Animations_KeyframeInterpolation__get_XY, 0, false, ::app::Uno::Float2__typeof()),
        ::uNewFunction("get_Y", Change__Fuse_Animations_KeyframeInterpolation__get_Y, 0, false, ::app::Uno::Float__typeof()),
        ::uNewFunction("get_Z", Change__Fuse_Animations_KeyframeInterpolation__get_Z, 0, false, ::app::Uno::Float__typeof()),
        ::uNewFunction(".ctor", Change__Fuse_Animations_KeyframeInterpolation__New_1, 0, true, Change__Fuse_Animations_KeyframeInterpolation__typeof(), ::app::Uno::UX::Property__Fuse_Animations_KeyframeInterpolation__typeof()),
        ::uNewFunctionVoid("set_DegreesX", Change__Fuse_Animations_KeyframeInterpolation__set_DegreesX, 0, false, ::app::Uno::Float__typeof()),
        ::uNewFunctionVoid("set_DegreesXY", Change__Fuse_Animations_KeyframeInterpolation__set_DegreesXY, 0, false, ::app::Uno::Float2__typeof()),
        ::uNewFunctionVoid("set_DegreesY", Change__Fuse_Animations_KeyframeInterpolation__set_DegreesY, 0, false, ::app::Uno::Float__typeof()),
        ::uNewFunctionVoid("set_DegreesZ", Change__Fuse_Animations_KeyframeInterpolation__set_DegreesZ, 0, false, ::app::Uno::Float__typeof()),
        ::uNewFunctionVoid("set_Target", Change__Fuse_Animations_KeyframeInterpolation__set_Target, 0, false, ::app::Uno::UX::Property__Fuse_Animations_KeyframeInterpolation__typeof()),
        ::uNewFunctionVoid("set_Value", Change__Fuse_Animations_KeyframeInterpolation__set_Value, 0, false, ::app::Fuse::Animations::KeyframeInterpolation__typeof()),
        ::uNewFunctionVoid("set_X", Change__Fuse_Animations_KeyframeInterpolation__set_X, 0, false, ::app::Uno::Float__typeof()),
        ::uNewFunctionVoid("set_XY", Change__Fuse_Animations_KeyframeInterpolation__set_XY, 0, false, ::app::Uno::Float2__typeof()),
        ::uNewFunctionVoid("set_Y", Change__Fuse_Animations_KeyframeInterpolation__set_Y, 0, false, ::app::Uno::Float__typeof()),
        ::uNewFunctionVoid("set_Z", Change__Fuse_Animations_KeyframeInterpolation__set_Z, 0, false, ::app::Uno::Float__typeof()));

    ::uRegisterType(type);
    return type;
}

void Change__Fuse_Animations_KeyframeInterpolation___ObjInit_2(Change__Fuse_Animations_KeyframeInterpolation* __this, ::app::Uno::UX::Property__Fuse_Animations_KeyframeInterpolation* target)
{
    ::app::Fuse::Animations::TrackAnimator___ObjInit_1(__this);

    if (target == NULL)
    {
        U_THROW(::app::Uno::ArgumentNullException__New_5(NULL, ::uGetConstString("target")));
    }

    __this->Target(target);

    if (__this->IsContinuous())
    {
        ::uObject* v;

        if ((::uType*)::app::Fuse::Animations::KeyframeInterpolation__typeof() == (::uType*)::app::Uno::Float__typeof())
        {
            v = (::uObject*)::app::Fuse::Animations::ConverterFloat__Singleton;
        }
        else if ((::uType*)::app::Fuse::Animations::KeyframeInterpolation__typeof() == (::uType*)::app::Uno::Float2__typeof())
        {
            v = (::uObject*)::app::Fuse::Animations::ConverterFloat2__Singleton;
        }
        else if ((::uType*)::app::Fuse::Animations::KeyframeInterpolation__typeof() == (::uType*)::app::Uno::Float3__typeof())
        {
            v = (::uObject*)::app::Fuse::Animations::ConverterFloat3__Singleton;
        }
        else if ((::uType*)::app::Fuse::Animations::KeyframeInterpolation__typeof() == (::uType*)::app::Uno::Float4__typeof())
        {
            v = (::uObject*)::app::Fuse::Animations::ConverterFloat4__Singleton;
        }
        else if ((::uType*)::app::Fuse::Animations::KeyframeInterpolation__typeof() == (::uType*)::app::Uno::Double__typeof())
        {
            v = (::uObject*)::app::Fuse::Animations::ConverterDouble__Singleton;
        }
        else
        {
            U_THROW(::app::Uno::Exception__New_2(NULL, ::app::Uno::String__op_Addition_1(NULL, ::uGetConstString("Unsupported change type: "), (::uObject*)(::uType*)::app::Fuse::Animations::KeyframeInterpolation__typeof())));
        }

        __this->ContinuousConverter = ::uCast< ::app::Fuse::Animations::Converter__Fuse_Animations_KeyframeInterpolation*>(v, ::app::Fuse::Animations::Converter__Fuse_Animations_KeyframeInterpolation__typeof());
    }
    else
    {
        __this->Mixer = ::app::Fuse::Animations::Mixer__get_DefaultDiscrete(NULL);
        __this->MarkDiscrete();
    }
}

::app::Fuse::Animations::AnimatorState* Change__Fuse_Animations_KeyframeInterpolation__CreateState(Change__Fuse_Animations_KeyframeInterpolation* __this, ::app::Fuse::Animations::CreateStateParams* p)
{
    if (__this->IsContinuous())
    {
        return (::app::Fuse::Animations::AnimatorState*)::app::Fuse::Animations::ContinuousTrackChangeState__Fuse_Animations_KeyframeInterpolation__New_1(NULL, __this, p);
    }

    return (::app::Fuse::Animations::AnimatorState*)::app::Fuse::Animations::DiscreteTrackChangeState__Fuse_Animations_KeyframeInterpolation__New_1(NULL, __this, p);
}

float Change__Fuse_Animations_KeyframeInterpolation__get_DegreesX(Change__Fuse_Animations_KeyframeInterpolation* __this)
{
    return ::app::Uno::Math__RadiansToDegrees_1(NULL, __this->X());
}

::app::Uno::Float2 Change__Fuse_Animations_KeyframeInterpolation__get_DegreesXY(Change__Fuse_Animations_KeyframeInterpolation* __this)
{
    return ::app::Uno::Float2__New_2(NULL, ::app::Uno::Math__RadiansToDegrees_1(NULL, __this->X()), ::app::Uno::Math__RadiansToDegrees_1(NULL, __this->Y()));
}

float Change__Fuse_Animations_KeyframeInterpolation__get_DegreesY(Change__Fuse_Animations_KeyframeInterpolation* __this)
{
    return ::app::Uno::Math__RadiansToDegrees_1(NULL, __this->Y());
}

float Change__Fuse_Animations_KeyframeInterpolation__get_DegreesZ(Change__Fuse_Animations_KeyframeInterpolation* __this)
{
    return ::app::Uno::Math__RadiansToDegrees_1(NULL, __this->Y());
}

bool Change__Fuse_Animations_KeyframeInterpolation__get_IsContinuous(Change__Fuse_Animations_KeyframeInterpolation* __this)
{
    return (((((::uType*)::app::Fuse::Animations::KeyframeInterpolation__typeof() == (::uType*)::app::Uno::Float__typeof()) || ((::uType*)::app::Fuse::Animations::KeyframeInterpolation__typeof() == (::uType*)::app::Uno::Float2__typeof())) || ((::uType*)::app::Fuse::Animations::KeyframeInterpolation__typeof() == (::uType*)::app::Uno::Float3__typeof())) || ((::uType*)::app::Fuse::Animations::KeyframeInterpolation__typeof() == (::uType*)::app::Uno::Float4__typeof())) || ((::uType*)::app::Fuse::Animations::KeyframeInterpolation__typeof() == (::uType*)::app::Uno::Double__typeof());
}

::app::Uno::UX::Property__Fuse_Animations_KeyframeInterpolation* Change__Fuse_Animations_KeyframeInterpolation__get_Target(Change__Fuse_Animations_KeyframeInterpolation* __this)
{
    return __this->_Target;
}

int Change__Fuse_Animations_KeyframeInterpolation__get_Value(Change__Fuse_Animations_KeyframeInterpolation* __this)
{
    return __this->IsContinuous() ? ::uPtr< ::app::Fuse::Animations::Converter__Fuse_Animations_KeyframeInterpolation*>(__this->ContinuousConverter)->Out(__this->_vectorValue) : ::uUnbox< int>(::app::Fuse::Animations::KeyframeInterpolation__typeof(), __this->_objectValue);
}

float Change__Fuse_Animations_KeyframeInterpolation__get_X(Change__Fuse_Animations_KeyframeInterpolation* __this)
{
    return __this->_vectorValue.X;
}

::app::Uno::Float2 Change__Fuse_Animations_KeyframeInterpolation__get_XY(Change__Fuse_Animations_KeyframeInterpolation* __this)
{
    ::app::Uno::Float4 ind_123 = __this->_vectorValue;
    return ::app::Uno::Float2__New_2(NULL, ind_123.X, ind_123.Y);
}

float Change__Fuse_Animations_KeyframeInterpolation__get_Y(Change__Fuse_Animations_KeyframeInterpolation* __this)
{
    return __this->_vectorValue.Y;
}

float Change__Fuse_Animations_KeyframeInterpolation__get_Z(Change__Fuse_Animations_KeyframeInterpolation* __this)
{
    return __this->_vectorValue.Z;
}

Change__Fuse_Animations_KeyframeInterpolation* Change__Fuse_Animations_KeyframeInterpolation__New_1(::uStatic* __this, ::app::Uno::UX::Property__Fuse_Animations_KeyframeInterpolation* target)
{
    Change__Fuse_Animations_KeyframeInterpolation* inst = (Change__Fuse_Animations_KeyframeInterpolation*)::uAllocObject(sizeof(Change__Fuse_Animations_KeyframeInterpolation), Change__Fuse_Animations_KeyframeInterpolation__typeof());
    inst->_ObjInit_2(target);
    return inst;
}

void Change__Fuse_Animations_KeyframeInterpolation__set_DegreesX(Change__Fuse_Animations_KeyframeInterpolation* __this, float value)
{
    __this->X(::app::Uno::Math__DegreesToRadians_1(NULL, value));
}

void Change__Fuse_Animations_KeyframeInterpolation__set_DegreesXY(Change__Fuse_Animations_KeyframeInterpolation* __this, ::app::Uno::Float2 value)
{
    __this->XY(::app::Uno::Float2__New_2(NULL, ::app::Uno::Math__DegreesToRadians_1(NULL, value.X), ::app::Uno::Math__DegreesToRadians_1(NULL, value.Y)));
}

void Change__Fuse_Animations_KeyframeInterpolation__set_DegreesY(Change__Fuse_Animations_KeyframeInterpolation* __this, float value)
{
    __this->Y(::app::Uno::Math__DegreesToRadians_1(NULL, value));
}

void Change__Fuse_Animations_KeyframeInterpolation__set_DegreesZ(Change__Fuse_Animations_KeyframeInterpolation* __this, float value)
{
    __this->Y(::app::Uno::Math__DegreesToRadians_1(NULL, value));
}

void Change__Fuse_Animations_KeyframeInterpolation__set_Target(Change__Fuse_Animations_KeyframeInterpolation* __this, ::app::Uno::UX::Property__Fuse_Animations_KeyframeInterpolation* value)
{
    __this->_Target = value;
}

void Change__Fuse_Animations_KeyframeInterpolation__set_Value(Change__Fuse_Animations_KeyframeInterpolation* __this, int value)
{
    if (__this->IsContinuous())
    {
        __this->_vectorValue = ::uPtr< ::app::Fuse::Animations::Converter__Fuse_Animations_KeyframeInterpolation*>(__this->ContinuousConverter)->In(value);
    }
    else
    {
        __this->_objectValue = ::uBox< int>(::app::Fuse::Animations::KeyframeInterpolation__typeof(), value);
    }
}

void Change__Fuse_Animations_KeyframeInterpolation__set_X(Change__Fuse_Animations_KeyframeInterpolation* __this, float value)
{
    __this->_vectorValue.X = value;
}

void Change__Fuse_Animations_KeyframeInterpolation__set_XY(Change__Fuse_Animations_KeyframeInterpolation* __this, ::app::Uno::Float2 value)
{
    __this->_vectorValue = ::app::Uno::Float4__New_6(NULL, value, __this->_vectorValue.Z, __this->_vectorValue.W);
}

void Change__Fuse_Animations_KeyframeInterpolation__set_Y(Change__Fuse_Animations_KeyframeInterpolation* __this, float value)
{
    __this->_vectorValue.Y = value;
}

void Change__Fuse_Animations_KeyframeInterpolation__set_Z(Change__Fuse_Animations_KeyframeInterpolation* __this, float value)
{
    __this->_vectorValue.Z = value;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Animations\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

Change__Fuse_Animations_MixOp__uType* Change__Fuse_Animations_MixOp__typeof()
{
    static ::uStaticStrong<Change__Fuse_Animations_MixOp__uType*> type;
    if (type != NULL) return type;

    type = (Change__Fuse_Animations_MixOp__uType*)::uAllocClassType(sizeof(Change__Fuse_Animations_MixOp__uType), "Fuse.Animations.Change<Fuse.Animations.MixOp>", false, 0, 2, 0);

    type->SetBaseType(::app::Fuse::Animations::TrackAnimator__typeof());
    type->__fp_CreateState = (::app::Fuse::Animations::AnimatorState*(*)(::app::Fuse::Animations::Animator*, ::app::Fuse::Animations::CreateStateParams*))Change__Fuse_Animations_MixOp__CreateState;

    type->SetStrongRefs(
        "_Target", offsetof(Change__Fuse_Animations_MixOp, _Target),
        "ContinuousConverter", offsetof(Change__Fuse_Animations_MixOp, ContinuousConverter));

    type->SetFields(1,
        ::uNewField("ContinuousConverter", NULL, offsetof(Change__Fuse_Animations_MixOp, ContinuousConverter), ::app::Fuse::Animations::Converter__Fuse_Animations_MixOp__typeof()));

    type->SetFunctions(22,
        ::uNewFunction("get_DegreesX", Change__Fuse_Animations_MixOp__get_DegreesX, 0, false, ::app::Uno::Float__typeof()),
        ::uNewFunction("get_DegreesXY", Change__Fuse_Animations_MixOp__get_DegreesXY, 0, false, ::app::Uno::Float2__typeof()),
        ::uNewFunction("get_DegreesY", Change__Fuse_Animations_MixOp__get_DegreesY, 0, false, ::app::Uno::Float__typeof()),
        ::uNewFunction("get_DegreesZ", Change__Fuse_Animations_MixOp__get_DegreesZ, 0, false, ::app::Uno::Float__typeof()),
        ::uNewFunction("get_IsContinuous", Change__Fuse_Animations_MixOp__get_IsContinuous, 0, false, ::app::Uno::Bool__typeof()),
        ::uNewFunction("get_Target", Change__Fuse_Animations_MixOp__get_Target, 0, false, ::app::Uno::UX::Property__Fuse_Animations_MixOp__typeof()),
        ::uNewFunction("get_Value", Change__Fuse_Animations_MixOp__get_Value, 0, false, ::app::Fuse::Animations::MixOp__typeof()),
        ::uNewFunction("get_X", Change__Fuse_Animations_MixOp__get_X, 0, false, ::app::Uno::Float__typeof()),
        ::uNewFunction("get_XY", Change__Fuse_Animations_MixOp__get_XY, 0, false, ::app::Uno::Float2__typeof()),
        ::uNewFunction("get_Y", Change__Fuse_Animations_MixOp__get_Y, 0, false, ::app::Uno::Float__typeof()),
        ::uNewFunction("get_Z", Change__Fuse_Animations_MixOp__get_Z, 0, false, ::app::Uno::Float__typeof()),
        ::uNewFunction(".ctor", Change__Fuse_Animations_MixOp__New_1, 0, true, Change__Fuse_Animations_MixOp__typeof(), ::app::Uno::UX::Property__Fuse_Animations_MixOp__typeof()),
        ::uNewFunctionVoid("set_DegreesX", Change__Fuse_Animations_MixOp__set_DegreesX, 0, false, ::app::Uno::Float__typeof()),
        ::uNewFunctionVoid("set_DegreesXY", Change__Fuse_Animations_MixOp__set_DegreesXY, 0, false, ::app::Uno::Float2__typeof()),
        ::uNewFunctionVoid("set_DegreesY", Change__Fuse_Animations_MixOp__set_DegreesY, 0, false, ::app::Uno::Float__typeof()),
        ::uNewFunctionVoid("set_DegreesZ", Change__Fuse_Animations_MixOp__set_DegreesZ, 0, false, ::app::Uno::Float__typeof()),
        ::uNewFunctionVoid("set_Target", Change__Fuse_Animations_MixOp__set_Target, 0, false, ::app::Uno::UX::Property__Fuse_Animations_MixOp__typeof()),
        ::uNewFunctionVoid("set_Value", Change__Fuse_Animations_MixOp__set_Value, 0, false, ::app::Fuse::Animations::MixOp__typeof()),
        ::uNewFunctionVoid("set_X", Change__Fuse_Animations_MixOp__set_X, 0, false, ::app::Uno::Float__typeof()),
        ::uNewFunctionVoid("set_XY", Change__Fuse_Animations_MixOp__set_XY, 0, false, ::app::Uno::Float2__typeof()),
        ::uNewFunctionVoid("set_Y", Change__Fuse_Animations_MixOp__set_Y, 0, false, ::app::Uno::Float__typeof()),
        ::uNewFunctionVoid("set_Z", Change__Fuse_Animations_MixOp__set_Z, 0, false, ::app::Uno::Float__typeof()));

    ::uRegisterType(type);
    return type;
}

void Change__Fuse_Animations_MixOp___ObjInit_2(Change__Fuse_Animations_MixOp* __this, ::app::Uno::UX::Property__Fuse_Animations_MixOp* target)
{
    ::app::Fuse::Animations::TrackAnimator___ObjInit_1(__this);

    if (target == NULL)
    {
        U_THROW(::app::Uno::ArgumentNullException__New_5(NULL, ::uGetConstString("target")));
    }

    __this->Target(target);

    if (__this->IsContinuous())
    {
        ::uObject* v;

        if ((::uType*)::app::Fuse::Animations::MixOp__typeof() == (::uType*)::app::Uno::Float__typeof())
        {
            v = (::uObject*)::app::Fuse::Animations::ConverterFloat__Singleton;
        }
        else if ((::uType*)::app::Fuse::Animations::MixOp__typeof() == (::uType*)::app::Uno::Float2__typeof())
        {
            v = (::uObject*)::app::Fuse::Animations::ConverterFloat2__Singleton;
        }
        else if ((::uType*)::app::Fuse::Animations::MixOp__typeof() == (::uType*)::app::Uno::Float3__typeof())
        {
            v = (::uObject*)::app::Fuse::Animations::ConverterFloat3__Singleton;
        }
        else if ((::uType*)::app::Fuse::Animations::MixOp__typeof() == (::uType*)::app::Uno::Float4__typeof())
        {
            v = (::uObject*)::app::Fuse::Animations::ConverterFloat4__Singleton;
        }
        else if ((::uType*)::app::Fuse::Animations::MixOp__typeof() == (::uType*)::app::Uno::Double__typeof())
        {
            v = (::uObject*)::app::Fuse::Animations::ConverterDouble__Singleton;
        }
        else
        {
            U_THROW(::app::Uno::Exception__New_2(NULL, ::app::Uno::String__op_Addition_1(NULL, ::uGetConstString("Unsupported change type: "), (::uObject*)(::uType*)::app::Fuse::Animations::MixOp__typeof())));
        }

        __this->ContinuousConverter = ::uCast< ::app::Fuse::Animations::Converter__Fuse_Animations_MixOp*>(v, ::app::Fuse::Animations::Converter__Fuse_Animations_MixOp__typeof());
    }
    else
    {
        __this->Mixer = ::app::Fuse::Animations::Mixer__get_DefaultDiscrete(NULL);
        __this->MarkDiscrete();
    }
}

::app::Fuse::Animations::AnimatorState* Change__Fuse_Animations_MixOp__CreateState(Change__Fuse_Animations_MixOp* __this, ::app::Fuse::Animations::CreateStateParams* p)
{
    if (__this->IsContinuous())
    {
        return (::app::Fuse::Animations::AnimatorState*)::app::Fuse::Animations::ContinuousTrackChangeState__Fuse_Animations_MixOp__New_1(NULL, __this, p);
    }

    return (::app::Fuse::Animations::AnimatorState*)::app::Fuse::Animations::DiscreteTrackChangeState__Fuse_Animations_MixOp__New_1(NULL, __this, p);
}

float Change__Fuse_Animations_MixOp__get_DegreesX(Change__Fuse_Animations_MixOp* __this)
{
    return ::app::Uno::Math__RadiansToDegrees_1(NULL, __this->X());
}

::app::Uno::Float2 Change__Fuse_Animations_MixOp__get_DegreesXY(Change__Fuse_Animations_MixOp* __this)
{
    return ::app::Uno::Float2__New_2(NULL, ::app::Uno::Math__RadiansToDegrees_1(NULL, __this->X()), ::app::Uno::Math__RadiansToDegrees_1(NULL, __this->Y()));
}

float Change__Fuse_Animations_MixOp__get_DegreesY(Change__Fuse_Animations_MixOp* __this)
{
    return ::app::Uno::Math__RadiansToDegrees_1(NULL, __this->Y());
}

float Change__Fuse_Animations_MixOp__get_DegreesZ(Change__Fuse_Animations_MixOp* __this)
{
    return ::app::Uno::Math__RadiansToDegrees_1(NULL, __this->Y());
}

bool Change__Fuse_Animations_MixOp__get_IsContinuous(Change__Fuse_Animations_MixOp* __this)
{
    return (((((::uType*)::app::Fuse::Animations::MixOp__typeof() == (::uType*)::app::Uno::Float__typeof()) || ((::uType*)::app::Fuse::Animations::MixOp__typeof() == (::uType*)::app::Uno::Float2__typeof())) || ((::uType*)::app::Fuse::Animations::MixOp__typeof() == (::uType*)::app::Uno::Float3__typeof())) || ((::uType*)::app::Fuse::Animations::MixOp__typeof() == (::uType*)::app::Uno::Float4__typeof())) || ((::uType*)::app::Fuse::Animations::MixOp__typeof() == (::uType*)::app::Uno::Double__typeof());
}

::app::Uno::UX::Property__Fuse_Animations_MixOp* Change__Fuse_Animations_MixOp__get_Target(Change__Fuse_Animations_MixOp* __this)
{
    return __this->_Target;
}

int Change__Fuse_Animations_MixOp__get_Value(Change__Fuse_Animations_MixOp* __this)
{
    return __this->IsContinuous() ? ::uPtr< ::app::Fuse::Animations::Converter__Fuse_Animations_MixOp*>(__this->ContinuousConverter)->Out(__this->_vectorValue) : ::uUnbox< int>(::app::Fuse::Animations::MixOp__typeof(), __this->_objectValue);
}

float Change__Fuse_Animations_MixOp__get_X(Change__Fuse_Animations_MixOp* __this)
{
    return __this->_vectorValue.X;
}

::app::Uno::Float2 Change__Fuse_Animations_MixOp__get_XY(Change__Fuse_Animations_MixOp* __this)
{
    ::app::Uno::Float4 ind_123 = __this->_vectorValue;
    return ::app::Uno::Float2__New_2(NULL, ind_123.X, ind_123.Y);
}

float Change__Fuse_Animations_MixOp__get_Y(Change__Fuse_Animations_MixOp* __this)
{
    return __this->_vectorValue.Y;
}

float Change__Fuse_Animations_MixOp__get_Z(Change__Fuse_Animations_MixOp* __this)
{
    return __this->_vectorValue.Z;
}

Change__Fuse_Animations_MixOp* Change__Fuse_Animations_MixOp__New_1(::uStatic* __this, ::app::Uno::UX::Property__Fuse_Animations_MixOp* target)
{
    Change__Fuse_Animations_MixOp* inst = (Change__Fuse_Animations_MixOp*)::uAllocObject(sizeof(Change__Fuse_Animations_MixOp), Change__Fuse_Animations_MixOp__typeof());
    inst->_ObjInit_2(target);
    return inst;
}

void Change__Fuse_Animations_MixOp__set_DegreesX(Change__Fuse_Animations_MixOp* __this, float value)
{
    __this->X(::app::Uno::Math__DegreesToRadians_1(NULL, value));
}

void Change__Fuse_Animations_MixOp__set_DegreesXY(Change__Fuse_Animations_MixOp* __this, ::app::Uno::Float2 value)
{
    __this->XY(::app::Uno::Float2__New_2(NULL, ::app::Uno::Math__DegreesToRadians_1(NULL, value.X), ::app::Uno::Math__DegreesToRadians_1(NULL, value.Y)));
}

void Change__Fuse_Animations_MixOp__set_DegreesY(Change__Fuse_Animations_MixOp* __this, float value)
{
    __this->Y(::app::Uno::Math__DegreesToRadians_1(NULL, value));
}

void Change__Fuse_Animations_MixOp__set_DegreesZ(Change__Fuse_Animations_MixOp* __this, float value)
{
    __this->Y(::app::Uno::Math__DegreesToRadians_1(NULL, value));
}

void Change__Fuse_Animations_MixOp__set_Target(Change__Fuse_Animations_MixOp* __this, ::app::Uno::UX::Property__Fuse_Animations_MixOp* value)
{
    __this->_Target = value;
}

void Change__Fuse_Animations_MixOp__set_Value(Change__Fuse_Animations_MixOp* __this, int value)
{
    if (__this->IsContinuous())
    {
        __this->_vectorValue = ::uPtr< ::app::Fuse::Animations::Converter__Fuse_Animations_MixOp*>(__this->ContinuousConverter)->In(value);
    }
    else
    {
        __this->_objectValue = ::uBox< int>(::app::Fuse::Animations::MixOp__typeof(), value);
    }
}

void Change__Fuse_Animations_MixOp__set_X(Change__Fuse_Animations_MixOp* __this, float value)
{
    __this->_vectorValue.X = value;
}

void Change__Fuse_Animations_MixOp__set_XY(Change__Fuse_Animations_MixOp* __this, ::app::Uno::Float2 value)
{
    __this->_vectorValue = ::app::Uno::Float4__New_6(NULL, value, __this->_vectorValue.Z, __this->_vectorValue.W);
}

void Change__Fuse_Animations_MixOp__set_Y(Change__Fuse_Animations_MixOp* __this, float value)
{
    __this->_vectorValue.Y = value;
}

void Change__Fuse_Animations_MixOp__set_Z(Change__Fuse_Animations_MixOp* __this, float value)
{
    __this->_vectorValue.Z = value;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Animations\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

Change__Fuse_Drawing_BlendMode__uType* Change__Fuse_Drawing_BlendMode__typeof()
{
    static ::uStaticStrong<Change__Fuse_Drawing_BlendMode__uType*> type;
    if (type != NULL) return type;

    type = (Change__Fuse_Drawing_BlendMode__uType*)::uAllocClassType(sizeof(Change__Fuse_Drawing_BlendMode__uType), "Fuse.Animations.Change<Fuse.Drawing.BlendMode>", false, 0, 2, 0);

    type->SetBaseType(::app::Fuse::Animations::TrackAnimator__typeof());
    type->__fp_CreateState = (::app::Fuse::Animations::AnimatorState*(*)(::app::Fuse::Animations::Animator*, ::app::Fuse::Animations::CreateStateParams*))Change__Fuse_Drawing_BlendMode__CreateState;

    type->SetStrongRefs(
        "_Target", offsetof(Change__Fuse_Drawing_BlendMode, _Target),
        "ContinuousConverter", offsetof(Change__Fuse_Drawing_BlendMode, ContinuousConverter));

    type->SetFields(1,
        ::uNewField("ContinuousConverter", NULL, offsetof(Change__Fuse_Drawing_BlendMode, ContinuousConverter), ::app::Fuse::Animations::Converter__Fuse_Drawing_BlendMode__typeof()));

    type->SetFunctions(22,
        ::uNewFunction("get_DegreesX", Change__Fuse_Drawing_BlendMode__get_DegreesX, 0, false, ::app::Uno::Float__typeof()),
        ::uNewFunction("get_DegreesXY", Change__Fuse_Drawing_BlendMode__get_DegreesXY, 0, false, ::app::Uno::Float2__typeof()),
        ::uNewFunction("get_DegreesY", Change__Fuse_Drawing_BlendMode__get_DegreesY, 0, false, ::app::Uno::Float__typeof()),
        ::uNewFunction("get_DegreesZ", Change__Fuse_Drawing_BlendMode__get_DegreesZ, 0, false, ::app::Uno::Float__typeof()),
        ::uNewFunction("get_IsContinuous", Change__Fuse_Drawing_BlendMode__get_IsContinuous, 0, false, ::app::Uno::Bool__typeof()),
        ::uNewFunction("get_Target", Change__Fuse_Drawing_BlendMode__get_Target, 0, false, ::app::Uno::UX::Property__Fuse_Drawing_BlendMode__typeof()),
        ::uNewFunction("get_Value", Change__Fuse_Drawing_BlendMode__get_Value, 0, false, ::app::Fuse::Drawing::BlendMode__typeof()),
        ::uNewFunction("get_X", Change__Fuse_Drawing_BlendMode__get_X, 0, false, ::app::Uno::Float__typeof()),
        ::uNewFunction("get_XY", Change__Fuse_Drawing_BlendMode__get_XY, 0, false, ::app::Uno::Float2__typeof()),
        ::uNewFunction("get_Y", Change__Fuse_Drawing_BlendMode__get_Y, 0, false, ::app::Uno::Float__typeof()),
        ::uNewFunction("get_Z", Change__Fuse_Drawing_BlendMode__get_Z, 0, false, ::app::Uno::Float__typeof()),
        ::uNewFunction(".ctor", Change__Fuse_Drawing_BlendMode__New_1, 0, true, Change__Fuse_Drawing_BlendMode__typeof(), ::app::Uno::UX::Property__Fuse_Drawing_BlendMode__typeof()),
        ::uNewFunctionVoid("set_DegreesX", Change__Fuse_Drawing_BlendMode__set_DegreesX, 0, false, ::app::Uno::Float__typeof()),
        ::uNewFunctionVoid("set_DegreesXY", Change__Fuse_Drawing_BlendMode__set_DegreesXY, 0, false, ::app::Uno::Float2__typeof()),
        ::uNewFunctionVoid("set_DegreesY", Change__Fuse_Drawing_BlendMode__set_DegreesY, 0, false, ::app::Uno::Float__typeof()),
        ::uNewFunctionVoid("set_DegreesZ", Change__Fuse_Drawing_BlendMode__set_DegreesZ, 0, false, ::app::Uno::Float__typeof()),
        ::uNewFunctionVoid("set_Target", Change__Fuse_Drawing_BlendMode__set_Target, 0, false, ::app::Uno::UX::Property__Fuse_Drawing_BlendMode__typeof()),
        ::uNewFunctionVoid("set_Value", Change__Fuse_Drawing_BlendMode__set_Value, 0, false, ::app::Fuse::Drawing::BlendMode__typeof()),
        ::uNewFunctionVoid("set_X", Change__Fuse_Drawing_BlendMode__set_X, 0, false, ::app::Uno::Float__typeof()),
        ::uNewFunctionVoid("set_XY", Change__Fuse_Drawing_BlendMode__set_XY, 0, false, ::app::Uno::Float2__typeof()),
        ::uNewFunctionVoid("set_Y", Change__Fuse_Drawing_BlendMode__set_Y, 0, false, ::app::Uno::Float__typeof()),
        ::uNewFunctionVoid("set_Z", Change__Fuse_Drawing_BlendMode__set_Z, 0, false, ::app::Uno::Float__typeof()));

    ::uRegisterType(type);
    return type;
}

void Change__Fuse_Drawing_BlendMode___ObjInit_2(Change__Fuse_Drawing_BlendMode* __this, ::app::Uno::UX::Property__Fuse_Drawing_BlendMode* target)
{
    ::app::Fuse::Animations::TrackAnimator___ObjInit_1(__this);

    if (target == NULL)
    {
        U_THROW(::app::Uno::ArgumentNullException__New_5(NULL, ::uGetConstString("target")));
    }

    __this->Target(target);

    if (__this->IsContinuous())
    {
        ::uObject* v;

        if ((::uType*)::app::Fuse::Drawing::BlendMode__typeof() == (::uType*)::app::Uno::Float__typeof())
        {
            v = (::uObject*)::app::Fuse::Animations::ConverterFloat__Singleton;
        }
        else if ((::uType*)::app::Fuse::Drawing::BlendMode__typeof() == (::uType*)::app::Uno::Float2__typeof())
        {
            v = (::uObject*)::app::Fuse::Animations::ConverterFloat2__Singleton;
        }
        else if ((::uType*)::app::Fuse::Drawing::BlendMode__typeof() == (::uType*)::app::Uno::Float3__typeof())
        {
            v = (::uObject*)::app::Fuse::Animations::ConverterFloat3__Singleton;
        }
        else if ((::uType*)::app::Fuse::Drawing::BlendMode__typeof() == (::uType*)::app::Uno::Float4__typeof())
        {
            v = (::uObject*)::app::Fuse::Animations::ConverterFloat4__Singleton;
        }
        else if ((::uType*)::app::Fuse::Drawing::BlendMode__typeof() == (::uType*)::app::Uno::Double__typeof())
        {
            v = (::uObject*)::app::Fuse::Animations::ConverterDouble__Singleton;
        }
        else
        {
            U_THROW(::app::Uno::Exception__New_2(NULL, ::app::Uno::String__op_Addition_1(NULL, ::uGetConstString("Unsupported change type: "), (::uObject*)(::uType*)::app::Fuse::Drawing::BlendMode__typeof())));
        }

        __this->ContinuousConverter = ::uCast< ::app::Fuse::Animations::Converter__Fuse_Drawing_BlendMode*>(v, ::app::Fuse::Animations::Converter__Fuse_Drawing_BlendMode__typeof());
    }
    else
    {
        __this->Mixer = ::app::Fuse::Animations::Mixer__get_DefaultDiscrete(NULL);
        __this->MarkDiscrete();
    }
}

::app::Fuse::Animations::AnimatorState* Change__Fuse_Drawing_BlendMode__CreateState(Change__Fuse_Drawing_BlendMode* __this, ::app::Fuse::Animations::CreateStateParams* p)
{
    if (__this->IsContinuous())
    {
        return (::app::Fuse::Animations::AnimatorState*)::app::Fuse::Animations::ContinuousTrackChangeState__Fuse_Drawing_BlendMode__New_1(NULL, __this, p);
    }

    return (::app::Fuse::Animations::AnimatorState*)::app::Fuse::Animations::DiscreteTrackChangeState__Fuse_Drawing_BlendMode__New_1(NULL, __this, p);
}

float Change__Fuse_Drawing_BlendMode__get_DegreesX(Change__Fuse_Drawing_BlendMode* __this)
{
    return ::app::Uno::Math__RadiansToDegrees_1(NULL, __this->X());
}

::app::Uno::Float2 Change__Fuse_Drawing_BlendMode__get_DegreesXY(Change__Fuse_Drawing_BlendMode* __this)
{
    return ::app::Uno::Float2__New_2(NULL, ::app::Uno::Math__RadiansToDegrees_1(NULL, __this->X()), ::app::Uno::Math__RadiansToDegrees_1(NULL, __this->Y()));
}

float Change__Fuse_Drawing_BlendMode__get_DegreesY(Change__Fuse_Drawing_BlendMode* __this)
{
    return ::app::Uno::Math__RadiansToDegrees_1(NULL, __this->Y());
}

float Change__Fuse_Drawing_BlendMode__get_DegreesZ(Change__Fuse_Drawing_BlendMode* __this)
{
    return ::app::Uno::Math__RadiansToDegrees_1(NULL, __this->Y());
}

bool Change__Fuse_Drawing_BlendMode__get_IsContinuous(Change__Fuse_Drawing_BlendMode* __this)
{
    return (((((::uType*)::app::Fuse::Drawing::BlendMode__typeof() == (::uType*)::app::Uno::Float__typeof()) || ((::uType*)::app::Fuse::Drawing::BlendMode__typeof() == (::uType*)::app::Uno::Float2__typeof())) || ((::uType*)::app::Fuse::Drawing::BlendMode__typeof() == (::uType*)::app::Uno::Float3__typeof())) || ((::uType*)::app::Fuse::Drawing::BlendMode__typeof() == (::uType*)::app::Uno::Float4__typeof())) || ((::uType*)::app::Fuse::Drawing::BlendMode__typeof() == (::uType*)::app::Uno::Double__typeof());
}

::app::Uno::UX::Property__Fuse_Drawing_BlendMode* Change__Fuse_Drawing_BlendMode__get_Target(Change__Fuse_Drawing_BlendMode* __this)
{
    return __this->_Target;
}

int Change__Fuse_Drawing_BlendMode__get_Value(Change__Fuse_Drawing_BlendMode* __this)
{
    return __this->IsContinuous() ? ::uPtr< ::app::Fuse::Animations::Converter__Fuse_Drawing_BlendMode*>(__this->ContinuousConverter)->Out(__this->_vectorValue) : ::uUnbox< int>(::app::Fuse::Drawing::BlendMode__typeof(), __this->_objectValue);
}

float Change__Fuse_Drawing_BlendMode__get_X(Change__Fuse_Drawing_BlendMode* __this)
{
    return __this->_vectorValue.X;
}

::app::Uno::Float2 Change__Fuse_Drawing_BlendMode__get_XY(Change__Fuse_Drawing_BlendMode* __this)
{
    ::app::Uno::Float4 ind_123 = __this->_vectorValue;
    return ::app::Uno::Float2__New_2(NULL, ind_123.X, ind_123.Y);
}

float Change__Fuse_Drawing_BlendMode__get_Y(Change__Fuse_Drawing_BlendMode* __this)
{
    return __this->_vectorValue.Y;
}

float Change__Fuse_Drawing_BlendMode__get_Z(Change__Fuse_Drawing_BlendMode* __this)
{
    return __this->_vectorValue.Z;
}

Change__Fuse_Drawing_BlendMode* Change__Fuse_Drawing_BlendMode__New_1(::uStatic* __this, ::app::Uno::UX::Property__Fuse_Drawing_BlendMode* target)
{
    Change__Fuse_Drawing_BlendMode* inst = (Change__Fuse_Drawing_BlendMode*)::uAllocObject(sizeof(Change__Fuse_Drawing_BlendMode), Change__Fuse_Drawing_BlendMode__typeof());
    inst->_ObjInit_2(target);
    return inst;
}

void Change__Fuse_Drawing_BlendMode__set_DegreesX(Change__Fuse_Drawing_BlendMode* __this, float value)
{
    __this->X(::app::Uno::Math__DegreesToRadians_1(NULL, value));
}

void Change__Fuse_Drawing_BlendMode__set_DegreesXY(Change__Fuse_Drawing_BlendMode* __this, ::app::Uno::Float2 value)
{
    __this->XY(::app::Uno::Float2__New_2(NULL, ::app::Uno::Math__DegreesToRadians_1(NULL, value.X), ::app::Uno::Math__DegreesToRadians_1(NULL, value.Y)));
}

void Change__Fuse_Drawing_BlendMode__set_DegreesY(Change__Fuse_Drawing_BlendMode* __this, float value)
{
    __this->Y(::app::Uno::Math__DegreesToRadians_1(NULL, value));
}

void Change__Fuse_Drawing_BlendMode__set_DegreesZ(Change__Fuse_Drawing_BlendMode* __this, float value)
{
    __this->Y(::app::Uno::Math__DegreesToRadians_1(NULL, value));
}

void Change__Fuse_Drawing_BlendMode__set_Target(Change__Fuse_Drawing_BlendMode* __this, ::app::Uno::UX::Property__Fuse_Drawing_BlendMode* value)
{
    __this->_Target = value;
}

void Change__Fuse_Drawing_BlendMode__set_Value(Change__Fuse_Drawing_BlendMode* __this, int value)
{
    if (__this->IsContinuous())
    {
        __this->_vectorValue = ::uPtr< ::app::Fuse::Animations::Converter__Fuse_Drawing_BlendMode*>(__this->ContinuousConverter)->In(value);
    }
    else
    {
        __this->_objectValue = ::uBox< int>(::app::Fuse::Drawing::BlendMode__typeof(), value);
    }
}

void Change__Fuse_Drawing_BlendMode__set_X(Change__Fuse_Drawing_BlendMode* __this, float value)
{
    __this->_vectorValue.X = value;
}

void Change__Fuse_Drawing_BlendMode__set_XY(Change__Fuse_Drawing_BlendMode* __this, ::app::Uno::Float2 value)
{
    __this->_vectorValue = ::app::Uno::Float4__New_6(NULL, value, __this->_vectorValue.Z, __this->_vectorValue.W);
}

void Change__Fuse_Drawing_BlendMode__set_Y(Change__Fuse_Drawing_BlendMode* __this, float value)
{
    __this->_vectorValue.Y = value;
}

void Change__Fuse_Drawing_BlendMode__set_Z(Change__Fuse_Drawing_BlendMode* __this, float value)
{
    __this->_vectorValue.Z = value;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Animations\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

Change__Fuse_Drawing_Brush__uType* Change__Fuse_Drawing_Brush__typeof()
{
    static ::uStaticStrong<Change__Fuse_Drawing_Brush__uType*> type;
    if (type != NULL) return type;

    type = (Change__Fuse_Drawing_Brush__uType*)::uAllocClassType(sizeof(Change__Fuse_Drawing_Brush__uType), "Fuse.Animations.Change<Fuse.Drawing.Brush>", false, 0, 2, 0);

    type->SetBaseType(::app::Fuse::Animations::TrackAnimator__typeof());
    type->__fp_CreateState = (::app::Fuse::Animations::AnimatorState*(*)(::app::Fuse::Animations::Animator*, ::app::Fuse::Animations::CreateStateParams*))Change__Fuse_Drawing_Brush__CreateState;

    type->SetStrongRefs(
        "_Target", offsetof(Change__Fuse_Drawing_Brush, _Target),
        "ContinuousConverter", offsetof(Change__Fuse_Drawing_Brush, ContinuousConverter));

    type->SetFields(1,
        ::uNewField("ContinuousConverter", NULL, offsetof(Change__Fuse_Drawing_Brush, ContinuousConverter), ::app::Fuse::Animations::Converter__Fuse_Drawing_Brush__typeof()));

    type->SetFunctions(22,
        ::uNewFunction("get_DegreesX", Change__Fuse_Drawing_Brush__get_DegreesX, 0, false, ::app::Uno::Float__typeof()),
        ::uNewFunction("get_DegreesXY", Change__Fuse_Drawing_Brush__get_DegreesXY, 0, false, ::app::Uno::Float2__typeof()),
        ::uNewFunction("get_DegreesY", Change__Fuse_Drawing_Brush__get_DegreesY, 0, false, ::app::Uno::Float__typeof()),
        ::uNewFunction("get_DegreesZ", Change__Fuse_Drawing_Brush__get_DegreesZ, 0, false, ::app::Uno::Float__typeof()),
        ::uNewFunction("get_IsContinuous", Change__Fuse_Drawing_Brush__get_IsContinuous, 0, false, ::app::Uno::Bool__typeof()),
        ::uNewFunction("get_Target", Change__Fuse_Drawing_Brush__get_Target, 0, false, ::app::Uno::UX::Property__Fuse_Drawing_Brush__typeof()),
        ::uNewFunction("get_Value", Change__Fuse_Drawing_Brush__get_Value, 0, false, ::app::Fuse::Drawing::Brush__typeof()),
        ::uNewFunction("get_X", Change__Fuse_Drawing_Brush__get_X, 0, false, ::app::Uno::Float__typeof()),
        ::uNewFunction("get_XY", Change__Fuse_Drawing_Brush__get_XY, 0, false, ::app::Uno::Float2__typeof()),
        ::uNewFunction("get_Y", Change__Fuse_Drawing_Brush__get_Y, 0, false, ::app::Uno::Float__typeof()),
        ::uNewFunction("get_Z", Change__Fuse_Drawing_Brush__get_Z, 0, false, ::app::Uno::Float__typeof()),
        ::uNewFunction(".ctor", Change__Fuse_Drawing_Brush__New_1, 0, true, Change__Fuse_Drawing_Brush__typeof(), ::app::Uno::UX::Property__Fuse_Drawing_Brush__typeof()),
        ::uNewFunctionVoid("set_DegreesX", Change__Fuse_Drawing_Brush__set_DegreesX, 0, false, ::app::Uno::Float__typeof()),
        ::uNewFunctionVoid("set_DegreesXY", Change__Fuse_Drawing_Brush__set_DegreesXY, 0, false, ::app::Uno::Float2__typeof()),
        ::uNewFunctionVoid("set_DegreesY", Change__Fuse_Drawing_Brush__set_DegreesY, 0, false, ::app::Uno::Float__typeof()),
        ::uNewFunctionVoid("set_DegreesZ", Change__Fuse_Drawing_Brush__set_DegreesZ, 0, false, ::app::Uno::Float__typeof()),
        ::uNewFunctionVoid("set_Target", Change__Fuse_Drawing_Brush__set_Target, 0, false, ::app::Uno::UX::Property__Fuse_Drawing_Brush__typeof()),
        ::uNewFunctionVoid("set_Value", Change__Fuse_Drawing_Brush__set_Value, 0, false, ::app::Fuse::Drawing::Brush__typeof()),
        ::uNewFunctionVoid("set_X", Change__Fuse_Drawing_Brush__set_X, 0, false, ::app::Uno::Float__typeof()),
        ::uNewFunctionVoid("set_XY", Change__Fuse_Drawing_Brush__set_XY, 0, false, ::app::Uno::Float2__typeof()),
        ::uNewFunctionVoid("set_Y", Change__Fuse_Drawing_Brush__set_Y, 0, false, ::app::Uno::Float__typeof()),
        ::uNewFunctionVoid("set_Z", Change__Fuse_Drawing_Brush__set_Z, 0, false, ::app::Uno::Float__typeof()));

    ::uRegisterType(type);
    return type;
}

void Change__Fuse_Drawing_Brush___ObjInit_2(Change__Fuse_Drawing_Brush* __this, ::app::Uno::UX::Property__Fuse_Drawing_Brush* target)
{
    ::app::Fuse::Animations::TrackAnimator___ObjInit_1(__this);

    if (target == NULL)
    {
        U_THROW(::app::Uno::ArgumentNullException__New_5(NULL, ::uGetConstString("target")));
    }

    __this->Target(target);

    if (__this->IsContinuous())
    {
        ::uObject* v;

        if ((::uType*)::app::Fuse::Drawing::Brush__typeof() == (::uType*)::app::Uno::Float__typeof())
        {
            v = (::uObject*)::app::Fuse::Animations::ConverterFloat__Singleton;
        }
        else if ((::uType*)::app::Fuse::Drawing::Brush__typeof() == (::uType*)::app::Uno::Float2__typeof())
        {
            v = (::uObject*)::app::Fuse::Animations::ConverterFloat2__Singleton;
        }
        else if ((::uType*)::app::Fuse::Drawing::Brush__typeof() == (::uType*)::app::Uno::Float3__typeof())
        {
            v = (::uObject*)::app::Fuse::Animations::ConverterFloat3__Singleton;
        }
        else if ((::uType*)::app::Fuse::Drawing::Brush__typeof() == (::uType*)::app::Uno::Float4__typeof())
        {
            v = (::uObject*)::app::Fuse::Animations::ConverterFloat4__Singleton;
        }
        else if ((::uType*)::app::Fuse::Drawing::Brush__typeof() == (::uType*)::app::Uno::Double__typeof())
        {
            v = (::uObject*)::app::Fuse::Animations::ConverterDouble__Singleton;
        }
        else
        {
            U_THROW(::app::Uno::Exception__New_2(NULL, ::app::Uno::String__op_Addition_1(NULL, ::uGetConstString("Unsupported change type: "), (::uObject*)(::uType*)::app::Fuse::Drawing::Brush__typeof())));
        }

        __this->ContinuousConverter = ::uCast< ::app::Fuse::Animations::Converter__Fuse_Drawing_Brush*>(v, ::app::Fuse::Animations::Converter__Fuse_Drawing_Brush__typeof());
    }
    else
    {
        __this->Mixer = ::app::Fuse::Animations::Mixer__get_DefaultDiscrete(NULL);
        __this->MarkDiscrete();
    }
}

::app::Fuse::Animations::AnimatorState* Change__Fuse_Drawing_Brush__CreateState(Change__Fuse_Drawing_Brush* __this, ::app::Fuse::Animations::CreateStateParams* p)
{
    if (__this->IsContinuous())
    {
        return (::app::Fuse::Animations::AnimatorState*)::app::Fuse::Animations::ContinuousTrackChangeState__Fuse_Drawing_Brush__New_1(NULL, __this, p);
    }

    return (::app::Fuse::Animations::AnimatorState*)::app::Fuse::Animations::DiscreteTrackChangeState__Fuse_Drawing_Brush__New_1(NULL, __this, p);
}

float Change__Fuse_Drawing_Brush__get_DegreesX(Change__Fuse_Drawing_Brush* __this)
{
    return ::app::Uno::Math__RadiansToDegrees_1(NULL, __this->X());
}

::app::Uno::Float2 Change__Fuse_Drawing_Brush__get_DegreesXY(Change__Fuse_Drawing_Brush* __this)
{
    return ::app::Uno::Float2__New_2(NULL, ::app::Uno::Math__RadiansToDegrees_1(NULL, __this->X()), ::app::Uno::Math__RadiansToDegrees_1(NULL, __this->Y()));
}

float Change__Fuse_Drawing_Brush__get_DegreesY(Change__Fuse_Drawing_Brush* __this)
{
    return ::app::Uno::Math__RadiansToDegrees_1(NULL, __this->Y());
}

float Change__Fuse_Drawing_Brush__get_DegreesZ(Change__Fuse_Drawing_Brush* __this)
{
    return ::app::Uno::Math__RadiansToDegrees_1(NULL, __this->Y());
}

bool Change__Fuse_Drawing_Brush__get_IsContinuous(Change__Fuse_Drawing_Brush* __this)
{
    return (((((::uType*)::app::Fuse::Drawing::Brush__typeof() == (::uType*)::app::Uno::Float__typeof()) || ((::uType*)::app::Fuse::Drawing::Brush__typeof() == (::uType*)::app::Uno::Float2__typeof())) || ((::uType*)::app::Fuse::Drawing::Brush__typeof() == (::uType*)::app::Uno::Float3__typeof())) || ((::uType*)::app::Fuse::Drawing::Brush__typeof() == (::uType*)::app::Uno::Float4__typeof())) || ((::uType*)::app::Fuse::Drawing::Brush__typeof() == (::uType*)::app::Uno::Double__typeof());
}

::app::Uno::UX::Property__Fuse_Drawing_Brush* Change__Fuse_Drawing_Brush__get_Target(Change__Fuse_Drawing_Brush* __this)
{
    return __this->_Target;
}

::app::Fuse::Drawing::Brush* Change__Fuse_Drawing_Brush__get_Value(Change__Fuse_Drawing_Brush* __this)
{
    return __this->IsContinuous() ? ::uPtr< ::app::Fuse::Animations::Converter__Fuse_Drawing_Brush*>(__this->ContinuousConverter)->Out(__this->_vectorValue) : ::uCast< ::app::Fuse::Drawing::Brush*>(__this->_objectValue, ::app::Fuse::Drawing::Brush__typeof());
}

float Change__Fuse_Drawing_Brush__get_X(Change__Fuse_Drawing_Brush* __this)
{
    return __this->_vectorValue.X;
}

::app::Uno::Float2 Change__Fuse_Drawing_Brush__get_XY(Change__Fuse_Drawing_Brush* __this)
{
    ::app::Uno::Float4 ind_123 = __this->_vectorValue;
    return ::app::Uno::Float2__New_2(NULL, ind_123.X, ind_123.Y);
}

float Change__Fuse_Drawing_Brush__get_Y(Change__Fuse_Drawing_Brush* __this)
{
    return __this->_vectorValue.Y;
}

float Change__Fuse_Drawing_Brush__get_Z(Change__Fuse_Drawing_Brush* __this)
{
    return __this->_vectorValue.Z;
}

Change__Fuse_Drawing_Brush* Change__Fuse_Drawing_Brush__New_1(::uStatic* __this, ::app::Uno::UX::Property__Fuse_Drawing_Brush* target)
{
    Change__Fuse_Drawing_Brush* inst = (Change__Fuse_Drawing_Brush*)::uAllocObject(sizeof(Change__Fuse_Drawing_Brush), Change__Fuse_Drawing_Brush__typeof());
    inst->_ObjInit_2(target);
    return inst;
}

void Change__Fuse_Drawing_Brush__set_DegreesX(Change__Fuse_Drawing_Brush* __this, float value)
{
    __this->X(::app::Uno::Math__DegreesToRadians_1(NULL, value));
}

void Change__Fuse_Drawing_Brush__set_DegreesXY(Change__Fuse_Drawing_Brush* __this, ::app::Uno::Float2 value)
{
    __this->XY(::app::Uno::Float2__New_2(NULL, ::app::Uno::Math__DegreesToRadians_1(NULL, value.X), ::app::Uno::Math__DegreesToRadians_1(NULL, value.Y)));
}

void Change__Fuse_Drawing_Brush__set_DegreesY(Change__Fuse_Drawing_Brush* __this, float value)
{
    __this->Y(::app::Uno::Math__DegreesToRadians_1(NULL, value));
}

void Change__Fuse_Drawing_Brush__set_DegreesZ(Change__Fuse_Drawing_Brush* __this, float value)
{
    __this->Y(::app::Uno::Math__DegreesToRadians_1(NULL, value));
}

void Change__Fuse_Drawing_Brush__set_Target(Change__Fuse_Drawing_Brush* __this, ::app::Uno::UX::Property__Fuse_Drawing_Brush* value)
{
    __this->_Target = value;
}

void Change__Fuse_Drawing_Brush__set_Value(Change__Fuse_Drawing_Brush* __this, ::app::Fuse::Drawing::Brush* value)
{
    if (__this->IsContinuous())
    {
        __this->_vectorValue = ::uPtr< ::app::Fuse::Animations::Converter__Fuse_Drawing_Brush*>(__this->ContinuousConverter)->In(value);
    }
    else
    {
        __this->_objectValue = (::uObject*)value;
    }
}

void Change__Fuse_Drawing_Brush__set_X(Change__Fuse_Drawing_Brush* __this, float value)
{
    __this->_vectorValue.X = value;
}

void Change__Fuse_Drawing_Brush__set_XY(Change__Fuse_Drawing_Brush* __this, ::app::Uno::Float2 value)
{
    __this->_vectorValue = ::app::Uno::Float4__New_6(NULL, value, __this->_vectorValue.Z, __this->_vectorValue.W);
}

void Change__Fuse_Drawing_Brush__set_Y(Change__Fuse_Drawing_Brush* __this, float value)
{
    __this->_vectorValue.Y = value;
}

void Change__Fuse_Drawing_Brush__set_Z(Change__Fuse_Drawing_Brush* __this, float value)
{
    __this->_vectorValue.Z = value;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Animations\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

Change__Fuse_Drawing_DynamicBrush__uType* Change__Fuse_Drawing_DynamicBrush__typeof()
{
    static ::uStaticStrong<Change__Fuse_Drawing_DynamicBrush__uType*> type;
    if (type != NULL) return type;

    type = (Change__Fuse_Drawing_DynamicBrush__uType*)::uAllocClassType(sizeof(Change__Fuse_Drawing_DynamicBrush__uType), "Fuse.Animations.Change<Fuse.Drawing.DynamicBrush>", false, 0, 2, 0);

    type->SetBaseType(::app::Fuse::Animations::TrackAnimator__typeof());
    type->__fp_CreateState = (::app::Fuse::Animations::AnimatorState*(*)(::app::Fuse::Animations::Animator*, ::app::Fuse::Animations::CreateStateParams*))Change__Fuse_Drawing_DynamicBrush__CreateState;

    type->SetStrongRefs(
        "_Target", offsetof(Change__Fuse_Drawing_DynamicBrush, _Target),
        "ContinuousConverter", offsetof(Change__Fuse_Drawing_DynamicBrush, ContinuousConverter));

    type->SetFields(1,
        ::uNewField("ContinuousConverter", NULL, offsetof(Change__Fuse_Drawing_DynamicBrush, ContinuousConverter), ::app::Fuse::Animations::Converter__Fuse_Drawing_DynamicBrush__typeof()));

    type->SetFunctions(22,
        ::uNewFunction("get_DegreesX", Change__Fuse_Drawing_DynamicBrush__get_DegreesX, 0, false, ::app::Uno::Float__typeof()),
        ::uNewFunction("get_DegreesXY", Change__Fuse_Drawing_DynamicBrush__get_DegreesXY, 0, false, ::app::Uno::Float2__typeof()),
        ::uNewFunction("get_DegreesY", Change__Fuse_Drawing_DynamicBrush__get_DegreesY, 0, false, ::app::Uno::Float__typeof()),
        ::uNewFunction("get_DegreesZ", Change__Fuse_Drawing_DynamicBrush__get_DegreesZ, 0, false, ::app::Uno::Float__typeof()),
        ::uNewFunction("get_IsContinuous", Change__Fuse_Drawing_DynamicBrush__get_IsContinuous, 0, false, ::app::Uno::Bool__typeof()),
        ::uNewFunction("get_Target", Change__Fuse_Drawing_DynamicBrush__get_Target, 0, false, ::app::Uno::UX::Property__Fuse_Drawing_DynamicBrush__typeof()),
        ::uNewFunction("get_Value", Change__Fuse_Drawing_DynamicBrush__get_Value, 0, false, ::app::Fuse::Drawing::DynamicBrush__typeof()),
        ::uNewFunction("get_X", Change__Fuse_Drawing_DynamicBrush__get_X, 0, false, ::app::Uno::Float__typeof()),
        ::uNewFunction("get_XY", Change__Fuse_Drawing_DynamicBrush__get_XY, 0, false, ::app::Uno::Float2__typeof()),
        ::uNewFunction("get_Y", Change__Fuse_Drawing_DynamicBrush__get_Y, 0, false, ::app::Uno::Float__typeof()),
        ::uNewFunction("get_Z", Change__Fuse_Drawing_DynamicBrush__get_Z, 0, false, ::app::Uno::Float__typeof()),
        ::uNewFunction(".ctor", Change__Fuse_Drawing_DynamicBrush__New_1, 0, true, Change__Fuse_Drawing_DynamicBrush__typeof(), ::app::Uno::UX::Property__Fuse_Drawing_DynamicBrush__typeof()),
        ::uNewFunctionVoid("set_DegreesX", Change__Fuse_Drawing_DynamicBrush__set_DegreesX, 0, false, ::app::Uno::Float__typeof()),
        ::uNewFunctionVoid("set_DegreesXY", Change__Fuse_Drawing_DynamicBrush__set_DegreesXY, 0, false, ::app::Uno::Float2__typeof()),
        ::uNewFunctionVoid("set_DegreesY", Change__Fuse_Drawing_DynamicBrush__set_DegreesY, 0, false, ::app::Uno::Float__typeof()),
        ::uNewFunctionVoid("set_DegreesZ", Change__Fuse_Drawing_DynamicBrush__set_DegreesZ, 0, false, ::app::Uno::Float__typeof()),
        ::uNewFunctionVoid("set_Target", Change__Fuse_Drawing_DynamicBrush__set_Target, 0, false, ::app::Uno::UX::Property__Fuse_Drawing_DynamicBrush__typeof()),
        ::uNewFunctionVoid("set_Value", Change__Fuse_Drawing_DynamicBrush__set_Value, 0, false, ::app::Fuse::Drawing::DynamicBrush__typeof()),
        ::uNewFunctionVoid("set_X", Change__Fuse_Drawing_DynamicBrush__set_X, 0, false, ::app::Uno::Float__typeof()),
        ::uNewFunctionVoid("set_XY", Change__Fuse_Drawing_DynamicBrush__set_XY, 0, false, ::app::Uno::Float2__typeof()),
        ::uNewFunctionVoid("set_Y", Change__Fuse_Drawing_DynamicBrush__set_Y, 0, false, ::app::Uno::Float__typeof()),
        ::uNewFunctionVoid("set_Z", Change__Fuse_Drawing_DynamicBrush__set_Z, 0, false, ::app::Uno::Float__typeof()));

    ::uRegisterType(type);
    return type;
}

void Change__Fuse_Drawing_DynamicBrush___ObjInit_2(Change__Fuse_Drawing_DynamicBrush* __this, ::app::Uno::UX::Property__Fuse_Drawing_DynamicBrush* target)
{
    ::app::Fuse::Animations::TrackAnimator___ObjInit_1(__this);

    if (target == NULL)
    {
        U_THROW(::app::Uno::ArgumentNullException__New_5(NULL, ::uGetConstString("target")));
    }

    __this->Target(target);

    if (__this->IsContinuous())
    {
        ::uObject* v;

        if ((::uType*)::app::Fuse::Drawing::DynamicBrush__typeof() == (::uType*)::app::Uno::Float__typeof())
        {
            v = (::uObject*)::app::Fuse::Animations::ConverterFloat__Singleton;
        }
        else if ((::uType*)::app::Fuse::Drawing::DynamicBrush__typeof() == (::uType*)::app::Uno::Float2__typeof())
        {
            v = (::uObject*)::app::Fuse::Animations::ConverterFloat2__Singleton;
        }
        else if ((::uType*)::app::Fuse::Drawing::DynamicBrush__typeof() == (::uType*)::app::Uno::Float3__typeof())
        {
            v = (::uObject*)::app::Fuse::Animations::ConverterFloat3__Singleton;
        }
        else if ((::uType*)::app::Fuse::Drawing::DynamicBrush__typeof() == (::uType*)::app::Uno::Float4__typeof())
        {
            v = (::uObject*)::app::Fuse::Animations::ConverterFloat4__Singleton;
        }
        else if ((::uType*)::app::Fuse::Drawing::DynamicBrush__typeof() == (::uType*)::app::Uno::Double__typeof())
        {
            v = (::uObject*)::app::Fuse::Animations::ConverterDouble__Singleton;
        }
        else
        {
            U_THROW(::app::Uno::Exception__New_2(NULL, ::app::Uno::String__op_Addition_1(NULL, ::uGetConstString("Unsupported change type: "), (::uObject*)(::uType*)::app::Fuse::Drawing::DynamicBrush__typeof())));
        }

        __this->ContinuousConverter = ::uCast< ::app::Fuse::Animations::Converter__Fuse_Drawing_DynamicBrush*>(v, ::app::Fuse::Animations::Converter__Fuse_Drawing_DynamicBrush__typeof());
    }
    else
    {
        __this->Mixer = ::app::Fuse::Animations::Mixer__get_DefaultDiscrete(NULL);
        __this->MarkDiscrete();
    }
}

::app::Fuse::Animations::AnimatorState* Change__Fuse_Drawing_DynamicBrush__CreateState(Change__Fuse_Drawing_DynamicBrush* __this, ::app::Fuse::Animations::CreateStateParams* p)
{
    if (__this->IsContinuous())
    {
        return (::app::Fuse::Animations::AnimatorState*)::app::Fuse::Animations::ContinuousTrackChangeState__Fuse_Drawing_DynamicBrush__New_1(NULL, __this, p);
    }

    return (::app::Fuse::Animations::AnimatorState*)::app::Fuse::Animations::DiscreteTrackChangeState__Fuse_Drawing_DynamicBrush__New_1(NULL, __this, p);
}

float Change__Fuse_Drawing_DynamicBrush__get_DegreesX(Change__Fuse_Drawing_DynamicBrush* __this)
{
    return ::app::Uno::Math__RadiansToDegrees_1(NULL, __this->X());
}

::app::Uno::Float2 Change__Fuse_Drawing_DynamicBrush__get_DegreesXY(Change__Fuse_Drawing_DynamicBrush* __this)
{
    return ::app::Uno::Float2__New_2(NULL, ::app::Uno::Math__RadiansToDegrees_1(NULL, __this->X()), ::app::Uno::Math__RadiansToDegrees_1(NULL, __this->Y()));
}

float Change__Fuse_Drawing_DynamicBrush__get_DegreesY(Change__Fuse_Drawing_DynamicBrush* __this)
{
    return ::app::Uno::Math__RadiansToDegrees_1(NULL, __this->Y());
}

float Change__Fuse_Drawing_DynamicBrush__get_DegreesZ(Change__Fuse_Drawing_DynamicBrush* __this)
{
    return ::app::Uno::Math__RadiansToDegrees_1(NULL, __this->Y());
}

bool Change__Fuse_Drawing_DynamicBrush__get_IsContinuous(Change__Fuse_Drawing_DynamicBrush* __this)
{
    return (((((::uType*)::app::Fuse::Drawing::DynamicBrush__typeof() == (::uType*)::app::Uno::Float__typeof()) || ((::uType*)::app::Fuse::Drawing::DynamicBrush__typeof() == (::uType*)::app::Uno::Float2__typeof())) || ((::uType*)::app::Fuse::Drawing::DynamicBrush__typeof() == (::uType*)::app::Uno::Float3__typeof())) || ((::uType*)::app::Fuse::Drawing::DynamicBrush__typeof() == (::uType*)::app::Uno::Float4__typeof())) || ((::uType*)::app::Fuse::Drawing::DynamicBrush__typeof() == (::uType*)::app::Uno::Double__typeof());
}

::app::Uno::UX::Property__Fuse_Drawing_DynamicBrush* Change__Fuse_Drawing_DynamicBrush__get_Target(Change__Fuse_Drawing_DynamicBrush* __this)
{
    return __this->_Target;
}

::app::Fuse::Drawing::DynamicBrush* Change__Fuse_Drawing_DynamicBrush__get_Value(Change__Fuse_Drawing_DynamicBrush* __this)
{
    return __this->IsContinuous() ? ::uPtr< ::app::Fuse::Animations::Converter__Fuse_Drawing_DynamicBrush*>(__this->ContinuousConverter)->Out(__this->_vectorValue) : ::uCast< ::app::Fuse::Drawing::DynamicBrush*>(__this->_objectValue, ::app::Fuse::Drawing::DynamicBrush__typeof());
}

float Change__Fuse_Drawing_DynamicBrush__get_X(Change__Fuse_Drawing_DynamicBrush* __this)
{
    return __this->_vectorValue.X;
}

::app::Uno::Float2 Change__Fuse_Drawing_DynamicBrush__get_XY(Change__Fuse_Drawing_DynamicBrush* __this)
{
    ::app::Uno::Float4 ind_123 = __this->_vectorValue;
    return ::app::Uno::Float2__New_2(NULL, ind_123.X, ind_123.Y);
}

float Change__Fuse_Drawing_DynamicBrush__get_Y(Change__Fuse_Drawing_DynamicBrush* __this)
{
    return __this->_vectorValue.Y;
}

float Change__Fuse_Drawing_DynamicBrush__get_Z(Change__Fuse_Drawing_DynamicBrush* __this)
{
    return __this->_vectorValue.Z;
}

Change__Fuse_Drawing_DynamicBrush* Change__Fuse_Drawing_DynamicBrush__New_1(::uStatic* __this, ::app::Uno::UX::Property__Fuse_Drawing_DynamicBrush* target)
{
    Change__Fuse_Drawing_DynamicBrush* inst = (Change__Fuse_Drawing_DynamicBrush*)::uAllocObject(sizeof(Change__Fuse_Drawing_DynamicBrush), Change__Fuse_Drawing_DynamicBrush__typeof());
    inst->_ObjInit_2(target);
    return inst;
}

void Change__Fuse_Drawing_DynamicBrush__set_DegreesX(Change__Fuse_Drawing_DynamicBrush* __this, float value)
{
    __this->X(::app::Uno::Math__DegreesToRadians_1(NULL, value));
}

void Change__Fuse_Drawing_DynamicBrush__set_DegreesXY(Change__Fuse_Drawing_DynamicBrush* __this, ::app::Uno::Float2 value)
{
    __this->XY(::app::Uno::Float2__New_2(NULL, ::app::Uno::Math__DegreesToRadians_1(NULL, value.X), ::app::Uno::Math__DegreesToRadians_1(NULL, value.Y)));
}

void Change__Fuse_Drawing_DynamicBrush__set_DegreesY(Change__Fuse_Drawing_DynamicBrush* __this, float value)
{
    __this->Y(::app::Uno::Math__DegreesToRadians_1(NULL, value));
}

void Change__Fuse_Drawing_DynamicBrush__set_DegreesZ(Change__Fuse_Drawing_DynamicBrush* __this, float value)
{
    __this->Y(::app::Uno::Math__DegreesToRadians_1(NULL, value));
}

void Change__Fuse_Drawing_DynamicBrush__set_Target(Change__Fuse_Drawing_DynamicBrush* __this, ::app::Uno::UX::Property__Fuse_Drawing_DynamicBrush* value)
{
    __this->_Target = value;
}

void Change__Fuse_Drawing_DynamicBrush__set_Value(Change__Fuse_Drawing_DynamicBrush* __this, ::app::Fuse::Drawing::DynamicBrush* value)
{
    if (__this->IsContinuous())
    {
        __this->_vectorValue = ::uPtr< ::app::Fuse::Animations::Converter__Fuse_Drawing_DynamicBrush*>(__this->ContinuousConverter)->In(value);
    }
    else
    {
        __this->_objectValue = (::uObject*)value;
    }
}

void Change__Fuse_Drawing_DynamicBrush__set_X(Change__Fuse_Drawing_DynamicBrush* __this, float value)
{
    __this->_vectorValue.X = value;
}

void Change__Fuse_Drawing_DynamicBrush__set_XY(Change__Fuse_Drawing_DynamicBrush* __this, ::app::Uno::Float2 value)
{
    __this->_vectorValue = ::app::Uno::Float4__New_6(NULL, value, __this->_vectorValue.Z, __this->_vectorValue.W);
}

void Change__Fuse_Drawing_DynamicBrush__set_Y(Change__Fuse_Drawing_DynamicBrush* __this, float value)
{
    __this->_vectorValue.Y = value;
}

void Change__Fuse_Drawing_DynamicBrush__set_Z(Change__Fuse_Drawing_DynamicBrush* __this, float value)
{
    __this->_vectorValue.Z = value;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Animations\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

Change__Fuse_Drawing_GradientStop__uType* Change__Fuse_Drawing_GradientStop__typeof()
{
    static ::uStaticStrong<Change__Fuse_Drawing_GradientStop__uType*> type;
    if (type != NULL) return type;

    type = (Change__Fuse_Drawing_GradientStop__uType*)::uAllocClassType(sizeof(Change__Fuse_Drawing_GradientStop__uType), "Fuse.Animations.Change<Fuse.Drawing.GradientStop>", false, 0, 2, 0);

    type->SetBaseType(::app::Fuse::Animations::TrackAnimator__typeof());
    type->__fp_CreateState = (::app::Fuse::Animations::AnimatorState*(*)(::app::Fuse::Animations::Animator*, ::app::Fuse::Animations::CreateStateParams*))Change__Fuse_Drawing_GradientStop__CreateState;

    type->SetStrongRefs(
        "_Target", offsetof(Change__Fuse_Drawing_GradientStop, _Target),
        "ContinuousConverter", offsetof(Change__Fuse_Drawing_GradientStop, ContinuousConverter));

    type->SetFields(1,
        ::uNewField("ContinuousConverter", NULL, offsetof(Change__Fuse_Drawing_GradientStop, ContinuousConverter), ::app::Fuse::Animations::Converter__Fuse_Drawing_GradientStop__typeof()));

    type->SetFunctions(22,
        ::uNewFunction("get_DegreesX", Change__Fuse_Drawing_GradientStop__get_DegreesX, 0, false, ::app::Uno::Float__typeof()),
        ::uNewFunction("get_DegreesXY", Change__Fuse_Drawing_GradientStop__get_DegreesXY, 0, false, ::app::Uno::Float2__typeof()),
        ::uNewFunction("get_DegreesY", Change__Fuse_Drawing_GradientStop__get_DegreesY, 0, false, ::app::Uno::Float__typeof()),
        ::uNewFunction("get_DegreesZ", Change__Fuse_Drawing_GradientStop__get_DegreesZ, 0, false, ::app::Uno::Float__typeof()),
        ::uNewFunction("get_IsContinuous", Change__Fuse_Drawing_GradientStop__get_IsContinuous, 0, false, ::app::Uno::Bool__typeof()),
        ::uNewFunction("get_Target", Change__Fuse_Drawing_GradientStop__get_Target, 0, false, ::app::Uno::UX::Property__Fuse_Drawing_GradientStop__typeof()),
        ::uNewFunction("get_Value", Change__Fuse_Drawing_GradientStop__get_Value, 0, false, ::app::Fuse::Drawing::GradientStop__typeof()),
        ::uNewFunction("get_X", Change__Fuse_Drawing_GradientStop__get_X, 0, false, ::app::Uno::Float__typeof()),
        ::uNewFunction("get_XY", Change__Fuse_Drawing_GradientStop__get_XY, 0, false, ::app::Uno::Float2__typeof()),
        ::uNewFunction("get_Y", Change__Fuse_Drawing_GradientStop__get_Y, 0, false, ::app::Uno::Float__typeof()),
        ::uNewFunction("get_Z", Change__Fuse_Drawing_GradientStop__get_Z, 0, false, ::app::Uno::Float__typeof()),
        ::uNewFunction(".ctor", Change__Fuse_Drawing_GradientStop__New_1, 0, true, Change__Fuse_Drawing_GradientStop__typeof(), ::app::Uno::UX::Property__Fuse_Drawing_GradientStop__typeof()),
        ::uNewFunctionVoid("set_DegreesX", Change__Fuse_Drawing_GradientStop__set_DegreesX, 0, false, ::app::Uno::Float__typeof()),
        ::uNewFunctionVoid("set_DegreesXY", Change__Fuse_Drawing_GradientStop__set_DegreesXY, 0, false, ::app::Uno::Float2__typeof()),
        ::uNewFunctionVoid("set_DegreesY", Change__Fuse_Drawing_GradientStop__set_DegreesY, 0, false, ::app::Uno::Float__typeof()),
        ::uNewFunctionVoid("set_DegreesZ", Change__Fuse_Drawing_GradientStop__set_DegreesZ, 0, false, ::app::Uno::Float__typeof()),
        ::uNewFunctionVoid("set_Target", Change__Fuse_Drawing_GradientStop__set_Target, 0, false, ::app::Uno::UX::Property__Fuse_Drawing_GradientStop__typeof()),
        ::uNewFunctionVoid("set_Value", Change__Fuse_Drawing_GradientStop__set_Value, 0, false, ::app::Fuse::Drawing::GradientStop__typeof()),
        ::uNewFunctionVoid("set_X", Change__Fuse_Drawing_GradientStop__set_X, 0, false, ::app::Uno::Float__typeof()),
        ::uNewFunctionVoid("set_XY", Change__Fuse_Drawing_GradientStop__set_XY, 0, false, ::app::Uno::Float2__typeof()),
        ::uNewFunctionVoid("set_Y", Change__Fuse_Drawing_GradientStop__set_Y, 0, false, ::app::Uno::Float__typeof()),
        ::uNewFunctionVoid("set_Z", Change__Fuse_Drawing_GradientStop__set_Z, 0, false, ::app::Uno::Float__typeof()));

    ::uRegisterType(type);
    return type;
}

void Change__Fuse_Drawing_GradientStop___ObjInit_2(Change__Fuse_Drawing_GradientStop* __this, ::app::Uno::UX::Property__Fuse_Drawing_GradientStop* target)
{
    ::app::Fuse::Animations::TrackAnimator___ObjInit_1(__this);

    if (target == NULL)
    {
        U_THROW(::app::Uno::ArgumentNullException__New_5(NULL, ::uGetConstString("target")));
    }

    __this->Target(target);

    if (__this->IsContinuous())
    {
        ::uObject* v;

        if ((::uType*)::app::Fuse::Drawing::GradientStop__typeof() == (::uType*)::app::Uno::Float__typeof())
        {
            v = (::uObject*)::app::Fuse::Animations::ConverterFloat__Singleton;
        }
        else if ((::uType*)::app::Fuse::Drawing::GradientStop__typeof() == (::uType*)::app::Uno::Float2__typeof())
        {
            v = (::uObject*)::app::Fuse::Animations::ConverterFloat2__Singleton;
        }
        else if ((::uType*)::app::Fuse::Drawing::GradientStop__typeof() == (::uType*)::app::Uno::Float3__typeof())
        {
            v = (::uObject*)::app::Fuse::Animations::ConverterFloat3__Singleton;
        }
        else if ((::uType*)::app::Fuse::Drawing::GradientStop__typeof() == (::uType*)::app::Uno::Float4__typeof())
        {
            v = (::uObject*)::app::Fuse::Animations::ConverterFloat4__Singleton;
        }
        else if ((::uType*)::app::Fuse::Drawing::GradientStop__typeof() == (::uType*)::app::Uno::Double__typeof())
        {
            v = (::uObject*)::app::Fuse::Animations::ConverterDouble__Singleton;
        }
        else
        {
            U_THROW(::app::Uno::Exception__New_2(NULL, ::app::Uno::String__op_Addition_1(NULL, ::uGetConstString("Unsupported change type: "), (::uObject*)(::uType*)::app::Fuse::Drawing::GradientStop__typeof())));
        }

        __this->ContinuousConverter = ::uCast< ::app::Fuse::Animations::Converter__Fuse_Drawing_GradientStop*>(v, ::app::Fuse::Animations::Converter__Fuse_Drawing_GradientStop__typeof());
    }
    else
    {
        __this->Mixer = ::app::Fuse::Animations::Mixer__get_DefaultDiscrete(NULL);
        __this->MarkDiscrete();
    }
}

::app::Fuse::Animations::AnimatorState* Change__Fuse_Drawing_GradientStop__CreateState(Change__Fuse_Drawing_GradientStop* __this, ::app::Fuse::Animations::CreateStateParams* p)
{
    if (__this->IsContinuous())
    {
        return (::app::Fuse::Animations::AnimatorState*)::app::Fuse::Animations::ContinuousTrackChangeState__Fuse_Drawing_GradientStop__New_1(NULL, __this, p);
    }

    return (::app::Fuse::Animations::AnimatorState*)::app::Fuse::Animations::DiscreteTrackChangeState__Fuse_Drawing_GradientStop__New_1(NULL, __this, p);
}

float Change__Fuse_Drawing_GradientStop__get_DegreesX(Change__Fuse_Drawing_GradientStop* __this)
{
    return ::app::Uno::Math__RadiansToDegrees_1(NULL, __this->X());
}

::app::Uno::Float2 Change__Fuse_Drawing_GradientStop__get_DegreesXY(Change__Fuse_Drawing_GradientStop* __this)
{
    return ::app::Uno::Float2__New_2(NULL, ::app::Uno::Math__RadiansToDegrees_1(NULL, __this->X()), ::app::Uno::Math__RadiansToDegrees_1(NULL, __this->Y()));
}

float Change__Fuse_Drawing_GradientStop__get_DegreesY(Change__Fuse_Drawing_GradientStop* __this)
{
    return ::app::Uno::Math__RadiansToDegrees_1(NULL, __this->Y());
}

float Change__Fuse_Drawing_GradientStop__get_DegreesZ(Change__Fuse_Drawing_GradientStop* __this)
{
    return ::app::Uno::Math__RadiansToDegrees_1(NULL, __this->Y());
}

bool Change__Fuse_Drawing_GradientStop__get_IsContinuous(Change__Fuse_Drawing_GradientStop* __this)
{
    return (((((::uType*)::app::Fuse::Drawing::GradientStop__typeof() == (::uType*)::app::Uno::Float__typeof()) || ((::uType*)::app::Fuse::Drawing::GradientStop__typeof() == (::uType*)::app::Uno::Float2__typeof())) || ((::uType*)::app::Fuse::Drawing::GradientStop__typeof() == (::uType*)::app::Uno::Float3__typeof())) || ((::uType*)::app::Fuse::Drawing::GradientStop__typeof() == (::uType*)::app::Uno::Float4__typeof())) || ((::uType*)::app::Fuse::Drawing::GradientStop__typeof() == (::uType*)::app::Uno::Double__typeof());
}

::app::Uno::UX::Property__Fuse_Drawing_GradientStop* Change__Fuse_Drawing_GradientStop__get_Target(Change__Fuse_Drawing_GradientStop* __this)
{
    return __this->_Target;
}

::app::Fuse::Drawing::GradientStop* Change__Fuse_Drawing_GradientStop__get_Value(Change__Fuse_Drawing_GradientStop* __this)
{
    return __this->IsContinuous() ? ::uPtr< ::app::Fuse::Animations::Converter__Fuse_Drawing_GradientStop*>(__this->ContinuousConverter)->Out(__this->_vectorValue) : ::uCast< ::app::Fuse::Drawing::GradientStop*>(__this->_objectValue, ::app::Fuse::Drawing::GradientStop__typeof());
}

float Change__Fuse_Drawing_GradientStop__get_X(Change__Fuse_Drawing_GradientStop* __this)
{
    return __this->_vectorValue.X;
}

::app::Uno::Float2 Change__Fuse_Drawing_GradientStop__get_XY(Change__Fuse_Drawing_GradientStop* __this)
{
    ::app::Uno::Float4 ind_123 = __this->_vectorValue;
    return ::app::Uno::Float2__New_2(NULL, ind_123.X, ind_123.Y);
}

float Change__Fuse_Drawing_GradientStop__get_Y(Change__Fuse_Drawing_GradientStop* __this)
{
    return __this->_vectorValue.Y;
}

float Change__Fuse_Drawing_GradientStop__get_Z(Change__Fuse_Drawing_GradientStop* __this)
{
    return __this->_vectorValue.Z;
}

Change__Fuse_Drawing_GradientStop* Change__Fuse_Drawing_GradientStop__New_1(::uStatic* __this, ::app::Uno::UX::Property__Fuse_Drawing_GradientStop* target)
{
    Change__Fuse_Drawing_GradientStop* inst = (Change__Fuse_Drawing_GradientStop*)::uAllocObject(sizeof(Change__Fuse_Drawing_GradientStop), Change__Fuse_Drawing_GradientStop__typeof());
    inst->_ObjInit_2(target);
    return inst;
}

void Change__Fuse_Drawing_GradientStop__set_DegreesX(Change__Fuse_Drawing_GradientStop* __this, float value)
{
    __this->X(::app::Uno::Math__DegreesToRadians_1(NULL, value));
}

void Change__Fuse_Drawing_GradientStop__set_DegreesXY(Change__Fuse_Drawing_GradientStop* __this, ::app::Uno::Float2 value)
{
    __this->XY(::app::Uno::Float2__New_2(NULL, ::app::Uno::Math__DegreesToRadians_1(NULL, value.X), ::app::Uno::Math__DegreesToRadians_1(NULL, value.Y)));
}

void Change__Fuse_Drawing_GradientStop__set_DegreesY(Change__Fuse_Drawing_GradientStop* __this, float value)
{
    __this->Y(::app::Uno::Math__DegreesToRadians_1(NULL, value));
}

void Change__Fuse_Drawing_GradientStop__set_DegreesZ(Change__Fuse_Drawing_GradientStop* __this, float value)
{
    __this->Y(::app::Uno::Math__DegreesToRadians_1(NULL, value));
}

void Change__Fuse_Drawing_GradientStop__set_Target(Change__Fuse_Drawing_GradientStop* __this, ::app::Uno::UX::Property__Fuse_Drawing_GradientStop* value)
{
    __this->_Target = value;
}

void Change__Fuse_Drawing_GradientStop__set_Value(Change__Fuse_Drawing_GradientStop* __this, ::app::Fuse::Drawing::GradientStop* value)
{
    if (__this->IsContinuous())
    {
        __this->_vectorValue = ::uPtr< ::app::Fuse::Animations::Converter__Fuse_Drawing_GradientStop*>(__this->ContinuousConverter)->In(value);
    }
    else
    {
        __this->_objectValue = (::uObject*)value;
    }
}

void Change__Fuse_Drawing_GradientStop__set_X(Change__Fuse_Drawing_GradientStop* __this, float value)
{
    __this->_vectorValue.X = value;
}

void Change__Fuse_Drawing_GradientStop__set_XY(Change__Fuse_Drawing_GradientStop* __this, ::app::Uno::Float2 value)
{
    __this->_vectorValue = ::app::Uno::Float4__New_6(NULL, value, __this->_vectorValue.Z, __this->_vectorValue.W);
}

void Change__Fuse_Drawing_GradientStop__set_Y(Change__Fuse_Drawing_GradientStop* __this, float value)
{
    __this->_vectorValue.Y = value;
}

void Change__Fuse_Drawing_GradientStop__set_Z(Change__Fuse_Drawing_GradientStop* __this, float value)
{
    __this->_vectorValue.Z = value;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Animations\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

Change__Fuse_Drawing_LinearGradient__uType* Change__Fuse_Drawing_LinearGradient__typeof()
{
    static ::uStaticStrong<Change__Fuse_Drawing_LinearGradient__uType*> type;
    if (type != NULL) return type;

    type = (Change__Fuse_Drawing_LinearGradient__uType*)::uAllocClassType(sizeof(Change__Fuse_Drawing_LinearGradient__uType), "Fuse.Animations.Change<Fuse.Drawing.LinearGradient>", false, 0, 2, 0);

    type->SetBaseType(::app::Fuse::Animations::TrackAnimator__typeof());
    type->__fp_CreateState = (::app::Fuse::Animations::AnimatorState*(*)(::app::Fuse::Animations::Animator*, ::app::Fuse::Animations::CreateStateParams*))Change__Fuse_Drawing_LinearGradient__CreateState;

    type->SetStrongRefs(
        "_Target", offsetof(Change__Fuse_Drawing_LinearGradient, _Target),
        "ContinuousConverter", offsetof(Change__Fuse_Drawing_LinearGradient, ContinuousConverter));

    type->SetFields(1,
        ::uNewField("ContinuousConverter", NULL, offsetof(Change__Fuse_Drawing_LinearGradient, ContinuousConverter), ::app::Fuse::Animations::Converter__Fuse_Drawing_LinearGradient__typeof()));

    type->SetFunctions(22,
        ::uNewFunction("get_DegreesX", Change__Fuse_Drawing_LinearGradient__get_DegreesX, 0, false, ::app::Uno::Float__typeof()),
        ::uNewFunction("get_DegreesXY", Change__Fuse_Drawing_LinearGradient__get_DegreesXY, 0, false, ::app::Uno::Float2__typeof()),
        ::uNewFunction("get_DegreesY", Change__Fuse_Drawing_LinearGradient__get_DegreesY, 0, false, ::app::Uno::Float__typeof()),
        ::uNewFunction("get_DegreesZ", Change__Fuse_Drawing_LinearGradient__get_DegreesZ, 0, false, ::app::Uno::Float__typeof()),
        ::uNewFunction("get_IsContinuous", Change__Fuse_Drawing_LinearGradient__get_IsContinuous, 0, false, ::app::Uno::Bool__typeof()),
        ::uNewFunction("get_Target", Change__Fuse_Drawing_LinearGradient__get_Target, 0, false, ::app::Uno::UX::Property__Fuse_Drawing_LinearGradient__typeof()),
        ::uNewFunction("get_Value", Change__Fuse_Drawing_LinearGradient__get_Value, 0, false, ::app::Fuse::Drawing::LinearGradient__typeof()),
        ::uNewFunction("get_X", Change__Fuse_Drawing_LinearGradient__get_X, 0, false, ::app::Uno::Float__typeof()),
        ::uNewFunction("get_XY", Change__Fuse_Drawing_LinearGradient__get_XY, 0, false, ::app::Uno::Float2__typeof()),
        ::uNewFunction("get_Y", Change__Fuse_Drawing_LinearGradient__get_Y, 0, false, ::app::Uno::Float__typeof()),
        ::uNewFunction("get_Z", Change__Fuse_Drawing_LinearGradient__get_Z, 0, false, ::app::Uno::Float__typeof()),
        ::uNewFunction(".ctor", Change__Fuse_Drawing_LinearGradient__New_1, 0, true, Change__Fuse_Drawing_LinearGradient__typeof(), ::app::Uno::UX::Property__Fuse_Drawing_LinearGradient__typeof()),
        ::uNewFunctionVoid("set_DegreesX", Change__Fuse_Drawing_LinearGradient__set_DegreesX, 0, false, ::app::Uno::Float__typeof()),
        ::uNewFunctionVoid("set_DegreesXY", Change__Fuse_Drawing_LinearGradient__set_DegreesXY, 0, false, ::app::Uno::Float2__typeof()),
        ::uNewFunctionVoid("set_DegreesY", Change__Fuse_Drawing_LinearGradient__set_DegreesY, 0, false, ::app::Uno::Float__typeof()),
        ::uNewFunctionVoid("set_DegreesZ", Change__Fuse_Drawing_LinearGradient__set_DegreesZ, 0, false, ::app::Uno::Float__typeof()),
        ::uNewFunctionVoid("set_Target", Change__Fuse_Drawing_LinearGradient__set_Target, 0, false, ::app::Uno::UX::Property__Fuse_Drawing_LinearGradient__typeof()),
        ::uNewFunctionVoid("set_Value", Change__Fuse_Drawing_LinearGradient__set_Value, 0, false, ::app::Fuse::Drawing::LinearGradient__typeof()),
        ::uNewFunctionVoid("set_X", Change__Fuse_Drawing_LinearGradient__set_X, 0, false, ::app::Uno::Float__typeof()),
        ::uNewFunctionVoid("set_XY", Change__Fuse_Drawing_LinearGradient__set_XY, 0, false, ::app::Uno::Float2__typeof()),
        ::uNewFunctionVoid("set_Y", Change__Fuse_Drawing_LinearGradient__set_Y, 0, false, ::app::Uno::Float__typeof()),
        ::uNewFunctionVoid("set_Z", Change__Fuse_Drawing_LinearGradient__set_Z, 0, false, ::app::Uno::Float__typeof()));

    ::uRegisterType(type);
    return type;
}

void Change__Fuse_Drawing_LinearGradient___ObjInit_2(Change__Fuse_Drawing_LinearGradient* __this, ::app::Uno::UX::Property__Fuse_Drawing_LinearGradient* target)
{
    ::app::Fuse::Animations::TrackAnimator___ObjInit_1(__this);

    if (target == NULL)
    {
        U_THROW(::app::Uno::ArgumentNullException__New_5(NULL, ::uGetConstString("target")));
    }

    __this->Target(target);

    if (__this->IsContinuous())
    {
        ::uObject* v;

        if ((::uType*)::app::Fuse::Drawing::LinearGradient__typeof() == (::uType*)::app::Uno::Float__typeof())
        {
            v = (::uObject*)::app::Fuse::Animations::ConverterFloat__Singleton;
        }
        else if ((::uType*)::app::Fuse::Drawing::LinearGradient__typeof() == (::uType*)::app::Uno::Float2__typeof())
        {
            v = (::uObject*)::app::Fuse::Animations::ConverterFloat2__Singleton;
        }
        else if ((::uType*)::app::Fuse::Drawing::LinearGradient__typeof() == (::uType*)::app::Uno::Float3__typeof())
        {
            v = (::uObject*)::app::Fuse::Animations::ConverterFloat3__Singleton;
        }
        else if ((::uType*)::app::Fuse::Drawing::LinearGradient__typeof() == (::uType*)::app::Uno::Float4__typeof())
        {
            v = (::uObject*)::app::Fuse::Animations::ConverterFloat4__Singleton;
        }
        else if ((::uType*)::app::Fuse::Drawing::LinearGradient__typeof() == (::uType*)::app::Uno::Double__typeof())
        {
            v = (::uObject*)::app::Fuse::Animations::ConverterDouble__Singleton;
        }
        else
        {
            U_THROW(::app::Uno::Exception__New_2(NULL, ::app::Uno::String__op_Addition_1(NULL, ::uGetConstString("Unsupported change type: "), (::uObject*)(::uType*)::app::Fuse::Drawing::LinearGradient__typeof())));
        }

        __this->ContinuousConverter = ::uCast< ::app::Fuse::Animations::Converter__Fuse_Drawing_LinearGradient*>(v, ::app::Fuse::Animations::Converter__Fuse_Drawing_LinearGradient__typeof());
    }
    else
    {
        __this->Mixer = ::app::Fuse::Animations::Mixer__get_DefaultDiscrete(NULL);
        __this->MarkDiscrete();
    }
}

::app::Fuse::Animations::AnimatorState* Change__Fuse_Drawing_LinearGradient__CreateState(Change__Fuse_Drawing_LinearGradient* __this, ::app::Fuse::Animations::CreateStateParams* p)
{
    if (__this->IsContinuous())
    {
        return (::app::Fuse::Animations::AnimatorState*)::app::Fuse::Animations::ContinuousTrackChangeState__Fuse_Drawing_LinearGradient__New_1(NULL, __this, p);
    }

    return (::app::Fuse::Animations::AnimatorState*)::app::Fuse::Animations::DiscreteTrackChangeState__Fuse_Drawing_LinearGradient__New_1(NULL, __this, p);
}

float Change__Fuse_Drawing_LinearGradient__get_DegreesX(Change__Fuse_Drawing_LinearGradient* __this)
{
    return ::app::Uno::Math__RadiansToDegrees_1(NULL, __this->X());
}

::app::Uno::Float2 Change__Fuse_Drawing_LinearGradient__get_DegreesXY(Change__Fuse_Drawing_LinearGradient* __this)
{
    return ::app::Uno::Float2__New_2(NULL, ::app::Uno::Math__RadiansToDegrees_1(NULL, __this->X()), ::app::Uno::Math__RadiansToDegrees_1(NULL, __this->Y()));
}

float Change__Fuse_Drawing_LinearGradient__get_DegreesY(Change__Fuse_Drawing_LinearGradient* __this)
{
    return ::app::Uno::Math__RadiansToDegrees_1(NULL, __this->Y());
}

float Change__Fuse_Drawing_LinearGradient__get_DegreesZ(Change__Fuse_Drawing_LinearGradient* __this)
{
    return ::app::Uno::Math__RadiansToDegrees_1(NULL, __this->Y());
}

bool Change__Fuse_Drawing_LinearGradient__get_IsContinuous(Change__Fuse_Drawing_LinearGradient* __this)
{
    return (((((::uType*)::app::Fuse::Drawing::LinearGradient__typeof() == (::uType*)::app::Uno::Float__typeof()) || ((::uType*)::app::Fuse::Drawing::LinearGradient__typeof() == (::uType*)::app::Uno::Float2__typeof())) || ((::uType*)::app::Fuse::Drawing::LinearGradient__typeof() == (::uType*)::app::Uno::Float3__typeof())) || ((::uType*)::app::Fuse::Drawing::LinearGradient__typeof() == (::uType*)::app::Uno::Float4__typeof())) || ((::uType*)::app::Fuse::Drawing::LinearGradient__typeof() == (::uType*)::app::Uno::Double__typeof());
}

::app::Uno::UX::Property__Fuse_Drawing_LinearGradient* Change__Fuse_Drawing_LinearGradient__get_Target(Change__Fuse_Drawing_LinearGradient* __this)
{
    return __this->_Target;
}

::app::Fuse::Drawing::LinearGradient* Change__Fuse_Drawing_LinearGradient__get_Value(Change__Fuse_Drawing_LinearGradient* __this)
{
    return __this->IsContinuous() ? ::uPtr< ::app::Fuse::Animations::Converter__Fuse_Drawing_LinearGradient*>(__this->ContinuousConverter)->Out(__this->_vectorValue) : ::uCast< ::app::Fuse::Drawing::LinearGradient*>(__this->_objectValue, ::app::Fuse::Drawing::LinearGradient__typeof());
}

float Change__Fuse_Drawing_LinearGradient__get_X(Change__Fuse_Drawing_LinearGradient* __this)
{
    return __this->_vectorValue.X;
}

::app::Uno::Float2 Change__Fuse_Drawing_LinearGradient__get_XY(Change__Fuse_Drawing_LinearGradient* __this)
{
    ::app::Uno::Float4 ind_123 = __this->_vectorValue;
    return ::app::Uno::Float2__New_2(NULL, ind_123.X, ind_123.Y);
}

float Change__Fuse_Drawing_LinearGradient__get_Y(Change__Fuse_Drawing_LinearGradient* __this)
{
    return __this->_vectorValue.Y;
}

float Change__Fuse_Drawing_LinearGradient__get_Z(Change__Fuse_Drawing_LinearGradient* __this)
{
    return __this->_vectorValue.Z;
}

Change__Fuse_Drawing_LinearGradient* Change__Fuse_Drawing_LinearGradient__New_1(::uStatic* __this, ::app::Uno::UX::Property__Fuse_Drawing_LinearGradient* target)
{
    Change__Fuse_Drawing_LinearGradient* inst = (Change__Fuse_Drawing_LinearGradient*)::uAllocObject(sizeof(Change__Fuse_Drawing_LinearGradient), Change__Fuse_Drawing_LinearGradient__typeof());
    inst->_ObjInit_2(target);
    return inst;
}

void Change__Fuse_Drawing_LinearGradient__set_DegreesX(Change__Fuse_Drawing_LinearGradient* __this, float value)
{
    __this->X(::app::Uno::Math__DegreesToRadians_1(NULL, value));
}

void Change__Fuse_Drawing_LinearGradient__set_DegreesXY(Change__Fuse_Drawing_LinearGradient* __this, ::app::Uno::Float2 value)
{
    __this->XY(::app::Uno::Float2__New_2(NULL, ::app::Uno::Math__DegreesToRadians_1(NULL, value.X), ::app::Uno::Math__DegreesToRadians_1(NULL, value.Y)));
}

void Change__Fuse_Drawing_LinearGradient__set_DegreesY(Change__Fuse_Drawing_LinearGradient* __this, float value)
{
    __this->Y(::app::Uno::Math__DegreesToRadians_1(NULL, value));
}

void Change__Fuse_Drawing_LinearGradient__set_DegreesZ(Change__Fuse_Drawing_LinearGradient* __this, float value)
{
    __this->Y(::app::Uno::Math__DegreesToRadians_1(NULL, value));
}

void Change__Fuse_Drawing_LinearGradient__set_Target(Change__Fuse_Drawing_LinearGradient* __this, ::app::Uno::UX::Property__Fuse_Drawing_LinearGradient* value)
{
    __this->_Target = value;
}

void Change__Fuse_Drawing_LinearGradient__set_Value(Change__Fuse_Drawing_LinearGradient* __this, ::app::Fuse::Drawing::LinearGradient* value)
{
    if (__this->IsContinuous())
    {
        __this->_vectorValue = ::uPtr< ::app::Fuse::Animations::Converter__Fuse_Drawing_LinearGradient*>(__this->ContinuousConverter)->In(value);
    }
    else
    {
        __this->_objectValue = (::uObject*)value;
    }
}

void Change__Fuse_Drawing_LinearGradient__set_X(Change__Fuse_Drawing_LinearGradient* __this, float value)
{
    __this->_vectorValue.X = value;
}

void Change__Fuse_Drawing_LinearGradient__set_XY(Change__Fuse_Drawing_LinearGradient* __this, ::app::Uno::Float2 value)
{
    __this->_vectorValue = ::app::Uno::Float4__New_6(NULL, value, __this->_vectorValue.Z, __this->_vectorValue.W);
}

void Change__Fuse_Drawing_LinearGradient__set_Y(Change__Fuse_Drawing_LinearGradient* __this, float value)
{
    __this->_vectorValue.Y = value;
}

void Change__Fuse_Drawing_LinearGradient__set_Z(Change__Fuse_Drawing_LinearGradient* __this, float value)
{
    __this->_vectorValue.Z = value;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Animations\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

Change__Fuse_Drawing_SolidColor__uType* Change__Fuse_Drawing_SolidColor__typeof()
{
    static ::uStaticStrong<Change__Fuse_Drawing_SolidColor__uType*> type;
    if (type != NULL) return type;

    type = (Change__Fuse_Drawing_SolidColor__uType*)::uAllocClassType(sizeof(Change__Fuse_Drawing_SolidColor__uType), "Fuse.Animations.Change<Fuse.Drawing.SolidColor>", false, 0, 2, 0);

    type->SetBaseType(::app::Fuse::Animations::TrackAnimator__typeof());
    type->__fp_CreateState = (::app::Fuse::Animations::AnimatorState*(*)(::app::Fuse::Animations::Animator*, ::app::Fuse::Animations::CreateStateParams*))Change__Fuse_Drawing_SolidColor__CreateState;

    type->SetStrongRefs(
        "_Target", offsetof(Change__Fuse_Drawing_SolidColor, _Target),
        "ContinuousConverter", offsetof(Change__Fuse_Drawing_SolidColor, ContinuousConverter));

    type->SetFields(1,
        ::uNewField("ContinuousConverter", NULL, offsetof(Change__Fuse_Drawing_SolidColor, ContinuousConverter), ::app::Fuse::Animations::Converter__Fuse_Drawing_SolidColor__typeof()));

    type->SetFunctions(22,
        ::uNewFunction("get_DegreesX", Change__Fuse_Drawing_SolidColor__get_DegreesX, 0, false, ::app::Uno::Float__typeof()),
        ::uNewFunction("get_DegreesXY", Change__Fuse_Drawing_SolidColor__get_DegreesXY, 0, false, ::app::Uno::Float2__typeof()),
        ::uNewFunction("get_DegreesY", Change__Fuse_Drawing_SolidColor__get_DegreesY, 0, false, ::app::Uno::Float__typeof()),
        ::uNewFunction("get_DegreesZ", Change__Fuse_Drawing_SolidColor__get_DegreesZ, 0, false, ::app::Uno::Float__typeof()),
        ::uNewFunction("get_IsContinuous", Change__Fuse_Drawing_SolidColor__get_IsContinuous, 0, false, ::app::Uno::Bool__typeof()),
        ::uNewFunction("get_Target", Change__Fuse_Drawing_SolidColor__get_Target, 0, false, ::app::Uno::UX::Property__Fuse_Drawing_SolidColor__typeof()),
        ::uNewFunction("get_Value", Change__Fuse_Drawing_SolidColor__get_Value, 0, false, ::app::Fuse::Drawing::SolidColor__typeof()),
        ::uNewFunction("get_X", Change__Fuse_Drawing_SolidColor__get_X, 0, false, ::app::Uno::Float__typeof()),
        ::uNewFunction("get_XY", Change__Fuse_Drawing_SolidColor__get_XY, 0, false, ::app::Uno::Float2__typeof()),
        ::uNewFunction("get_Y", Change__Fuse_Drawing_SolidColor__get_Y, 0, false, ::app::Uno::Float__typeof()),
        ::uNewFunction("get_Z", Change__Fuse_Drawing_SolidColor__get_Z, 0, false, ::app::Uno::Float__typeof()),
        ::uNewFunction(".ctor", Change__Fuse_Drawing_SolidColor__New_1, 0, true, Change__Fuse_Drawing_SolidColor__typeof(), ::app::Uno::UX::Property__Fuse_Drawing_SolidColor__typeof()),
        ::uNewFunctionVoid("set_DegreesX", Change__Fuse_Drawing_SolidColor__set_DegreesX, 0, false, ::app::Uno::Float__typeof()),
        ::uNewFunctionVoid("set_DegreesXY", Change__Fuse_Drawing_SolidColor__set_DegreesXY, 0, false, ::app::Uno::Float2__typeof()),
        ::uNewFunctionVoid("set_DegreesY", Change__Fuse_Drawing_SolidColor__set_DegreesY, 0, false, ::app::Uno::Float__typeof()),
        ::uNewFunctionVoid("set_DegreesZ", Change__Fuse_Drawing_SolidColor__set_DegreesZ, 0, false, ::app::Uno::Float__typeof()),
        ::uNewFunctionVoid("set_Target", Change__Fuse_Drawing_SolidColor__set_Target, 0, false, ::app::Uno::UX::Property__Fuse_Drawing_SolidColor__typeof()),
        ::uNewFunctionVoid("set_Value", Change__Fuse_Drawing_SolidColor__set_Value, 0, false, ::app::Fuse::Drawing::SolidColor__typeof()),
        ::uNewFunctionVoid("set_X", Change__Fuse_Drawing_SolidColor__set_X, 0, false, ::app::Uno::Float__typeof()),
        ::uNewFunctionVoid("set_XY", Change__Fuse_Drawing_SolidColor__set_XY, 0, false, ::app::Uno::Float2__typeof()),
        ::uNewFunctionVoid("set_Y", Change__Fuse_Drawing_SolidColor__set_Y, 0, false, ::app::Uno::Float__typeof()),
        ::uNewFunctionVoid("set_Z", Change__Fuse_Drawing_SolidColor__set_Z, 0, false, ::app::Uno::Float__typeof()));

    ::uRegisterType(type);
    return type;
}

void Change__Fuse_Drawing_SolidColor___ObjInit_2(Change__Fuse_Drawing_SolidColor* __this, ::app::Uno::UX::Property__Fuse_Drawing_SolidColor* target)
{
    ::app::Fuse::Animations::TrackAnimator___ObjInit_1(__this);

    if (target == NULL)
    {
        U_THROW(::app::Uno::ArgumentNullException__New_5(NULL, ::uGetConstString("target")));
    }

    __this->Target(target);

    if (__this->IsContinuous())
    {
        ::uObject* v;

        if ((::uType*)::app::Fuse::Drawing::SolidColor__typeof() == (::uType*)::app::Uno::Float__typeof())
        {
            v = (::uObject*)::app::Fuse::Animations::ConverterFloat__Singleton;
        }
        else if ((::uType*)::app::Fuse::Drawing::SolidColor__typeof() == (::uType*)::app::Uno::Float2__typeof())
        {
            v = (::uObject*)::app::Fuse::Animations::ConverterFloat2__Singleton;
        }
        else if ((::uType*)::app::Fuse::Drawing::SolidColor__typeof() == (::uType*)::app::Uno::Float3__typeof())
        {
            v = (::uObject*)::app::Fuse::Animations::ConverterFloat3__Singleton;
        }
        else if ((::uType*)::app::Fuse::Drawing::SolidColor__typeof() == (::uType*)::app::Uno::Float4__typeof())
        {
            v = (::uObject*)::app::Fuse::Animations::ConverterFloat4__Singleton;
        }
        else if ((::uType*)::app::Fuse::Drawing::SolidColor__typeof() == (::uType*)::app::Uno::Double__typeof())
        {
            v = (::uObject*)::app::Fuse::Animations::ConverterDouble__Singleton;
        }
        else
        {
            U_THROW(::app::Uno::Exception__New_2(NULL, ::app::Uno::String__op_Addition_1(NULL, ::uGetConstString("Unsupported change type: "), (::uObject*)(::uType*)::app::Fuse::Drawing::SolidColor__typeof())));
        }

        __this->ContinuousConverter = ::uCast< ::app::Fuse::Animations::Converter__Fuse_Drawing_SolidColor*>(v, ::app::Fuse::Animations::Converter__Fuse_Drawing_SolidColor__typeof());
    }
    else
    {
        __this->Mixer = ::app::Fuse::Animations::Mixer__get_DefaultDiscrete(NULL);
        __this->MarkDiscrete();
    }
}

::app::Fuse::Animations::AnimatorState* Change__Fuse_Drawing_SolidColor__CreateState(Change__Fuse_Drawing_SolidColor* __this, ::app::Fuse::Animations::CreateStateParams* p)
{
    if (__this->IsContinuous())
    {
        return (::app::Fuse::Animations::AnimatorState*)::app::Fuse::Animations::ContinuousTrackChangeState__Fuse_Drawing_SolidColor__New_1(NULL, __this, p);
    }

    return (::app::Fuse::Animations::AnimatorState*)::app::Fuse::Animations::DiscreteTrackChangeState__Fuse_Drawing_SolidColor__New_1(NULL, __this, p);
}

float Change__Fuse_Drawing_SolidColor__get_DegreesX(Change__Fuse_Drawing_SolidColor* __this)
{
    return ::app::Uno::Math__RadiansToDegrees_1(NULL, __this->X());
}

::app::Uno::Float2 Change__Fuse_Drawing_SolidColor__get_DegreesXY(Change__Fuse_Drawing_SolidColor* __this)
{
    return ::app::Uno::Float2__New_2(NULL, ::app::Uno::Math__RadiansToDegrees_1(NULL, __this->X()), ::app::Uno::Math__RadiansToDegrees_1(NULL, __this->Y()));
}

float Change__Fuse_Drawing_SolidColor__get_DegreesY(Change__Fuse_Drawing_SolidColor* __this)
{
    return ::app::Uno::Math__RadiansToDegrees_1(NULL, __this->Y());
}

float Change__Fuse_Drawing_SolidColor__get_DegreesZ(Change__Fuse_Drawing_SolidColor* __this)
{
    return ::app::Uno::Math__RadiansToDegrees_1(NULL, __this->Y());
}

bool Change__Fuse_Drawing_SolidColor__get_IsContinuous(Change__Fuse_Drawing_SolidColor* __this)
{
    return (((((::uType*)::app::Fuse::Drawing::SolidColor__typeof() == (::uType*)::app::Uno::Float__typeof()) || ((::uType*)::app::Fuse::Drawing::SolidColor__typeof() == (::uType*)::app::Uno::Float2__typeof())) || ((::uType*)::app::Fuse::Drawing::SolidColor__typeof() == (::uType*)::app::Uno::Float3__typeof())) || ((::uType*)::app::Fuse::Drawing::SolidColor__typeof() == (::uType*)::app::Uno::Float4__typeof())) || ((::uType*)::app::Fuse::Drawing::SolidColor__typeof() == (::uType*)::app::Uno::Double__typeof());
}

::app::Uno::UX::Property__Fuse_Drawing_SolidColor* Change__Fuse_Drawing_SolidColor__get_Target(Change__Fuse_Drawing_SolidColor* __this)
{
    return __this->_Target;
}

::app::Fuse::Drawing::SolidColor* Change__Fuse_Drawing_SolidColor__get_Value(Change__Fuse_Drawing_SolidColor* __this)
{
    return __this->IsContinuous() ? ::uPtr< ::app::Fuse::Animations::Converter__Fuse_Drawing_SolidColor*>(__this->ContinuousConverter)->Out(__this->_vectorValue) : ::uCast< ::app::Fuse::Drawing::SolidColor*>(__this->_objectValue, ::app::Fuse::Drawing::SolidColor__typeof());
}

float Change__Fuse_Drawing_SolidColor__get_X(Change__Fuse_Drawing_SolidColor* __this)
{
    return __this->_vectorValue.X;
}

::app::Uno::Float2 Change__Fuse_Drawing_SolidColor__get_XY(Change__Fuse_Drawing_SolidColor* __this)
{
    ::app::Uno::Float4 ind_123 = __this->_vectorValue;
    return ::app::Uno::Float2__New_2(NULL, ind_123.X, ind_123.Y);
}

float Change__Fuse_Drawing_SolidColor__get_Y(Change__Fuse_Drawing_SolidColor* __this)
{
    return __this->_vectorValue.Y;
}

float Change__Fuse_Drawing_SolidColor__get_Z(Change__Fuse_Drawing_SolidColor* __this)
{
    return __this->_vectorValue.Z;
}

Change__Fuse_Drawing_SolidColor* Change__Fuse_Drawing_SolidColor__New_1(::uStatic* __this, ::app::Uno::UX::Property__Fuse_Drawing_SolidColor* target)
{
    Change__Fuse_Drawing_SolidColor* inst = (Change__Fuse_Drawing_SolidColor*)::uAllocObject(sizeof(Change__Fuse_Drawing_SolidColor), Change__Fuse_Drawing_SolidColor__typeof());
    inst->_ObjInit_2(target);
    return inst;
}

void Change__Fuse_Drawing_SolidColor__set_DegreesX(Change__Fuse_Drawing_SolidColor* __this, float value)
{
    __this->X(::app::Uno::Math__DegreesToRadians_1(NULL, value));
}

void Change__Fuse_Drawing_SolidColor__set_DegreesXY(Change__Fuse_Drawing_SolidColor* __this, ::app::Uno::Float2 value)
{
    __this->XY(::app::Uno::Float2__New_2(NULL, ::app::Uno::Math__DegreesToRadians_1(NULL, value.X), ::app::Uno::Math__DegreesToRadians_1(NULL, value.Y)));
}

void Change__Fuse_Drawing_SolidColor__set_DegreesY(Change__Fuse_Drawing_SolidColor* __this, float value)
{
    __this->Y(::app::Uno::Math__DegreesToRadians_1(NULL, value));
}

void Change__Fuse_Drawing_SolidColor__set_DegreesZ(Change__Fuse_Drawing_SolidColor* __this, float value)
{
    __this->Y(::app::Uno::Math__DegreesToRadians_1(NULL, value));
}

void Change__Fuse_Drawing_SolidColor__set_Target(Change__Fuse_Drawing_SolidColor* __this, ::app::Uno::UX::Property__Fuse_Drawing_SolidColor* value)
{
    __this->_Target = value;
}

void Change__Fuse_Drawing_SolidColor__set_Value(Change__Fuse_Drawing_SolidColor* __this, ::app::Fuse::Drawing::SolidColor* value)
{
    if (__this->IsContinuous())
    {
        __this->_vectorValue = ::uPtr< ::app::Fuse::Animations::Converter__Fuse_Drawing_SolidColor*>(__this->ContinuousConverter)->In(value);
    }
    else
    {
        __this->_objectValue = (::uObject*)value;
    }
}

void Change__Fuse_Drawing_SolidColor__set_X(Change__Fuse_Drawing_SolidColor* __this, float value)
{
    __this->_vectorValue.X = value;
}

void Change__Fuse_Drawing_SolidColor__set_XY(Change__Fuse_Drawing_SolidColor* __this, ::app::Uno::Float2 value)
{
    __this->_vectorValue = ::app::Uno::Float4__New_6(NULL, value, __this->_vectorValue.Z, __this->_vectorValue.W);
}

void Change__Fuse_Drawing_SolidColor__set_Y(Change__Fuse_Drawing_SolidColor* __this, float value)
{
    __this->_vectorValue.Y = value;
}

void Change__Fuse_Drawing_SolidColor__set_Z(Change__Fuse_Drawing_SolidColor* __this, float value)
{
    __this->_vectorValue.Z = value;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Animations\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

Change__Fuse_Drawing_StaticBrush__uType* Change__Fuse_Drawing_StaticBrush__typeof()
{
    static ::uStaticStrong<Change__Fuse_Drawing_StaticBrush__uType*> type;
    if (type != NULL) return type;

    type = (Change__Fuse_Drawing_StaticBrush__uType*)::uAllocClassType(sizeof(Change__Fuse_Drawing_StaticBrush__uType), "Fuse.Animations.Change<Fuse.Drawing.StaticBrush>", false, 0, 2, 0);

    type->SetBaseType(::app::Fuse::Animations::TrackAnimator__typeof());
    type->__fp_CreateState = (::app::Fuse::Animations::AnimatorState*(*)(::app::Fuse::Animations::Animator*, ::app::Fuse::Animations::CreateStateParams*))Change__Fuse_Drawing_StaticBrush__CreateState;

    type->SetStrongRefs(
        "_Target", offsetof(Change__Fuse_Drawing_StaticBrush, _Target),
        "ContinuousConverter", offsetof(Change__Fuse_Drawing_StaticBrush, ContinuousConverter));

    type->SetFields(1,
        ::uNewField("ContinuousConverter", NULL, offsetof(Change__Fuse_Drawing_StaticBrush, ContinuousConverter), ::app::Fuse::Animations::Converter__Fuse_Drawing_StaticBrush__typeof()));

    type->SetFunctions(22,
        ::uNewFunction("get_DegreesX", Change__Fuse_Drawing_StaticBrush__get_DegreesX, 0, false, ::app::Uno::Float__typeof()),
        ::uNewFunction("get_DegreesXY", Change__Fuse_Drawing_StaticBrush__get_DegreesXY, 0, false, ::app::Uno::Float2__typeof()),
        ::uNewFunction("get_DegreesY", Change__Fuse_Drawing_StaticBrush__get_DegreesY, 0, false, ::app::Uno::Float__typeof()),
        ::uNewFunction("get_DegreesZ", Change__Fuse_Drawing_StaticBrush__get_DegreesZ, 0, false, ::app::Uno::Float__typeof()),
        ::uNewFunction("get_IsContinuous", Change__Fuse_Drawing_StaticBrush__get_IsContinuous, 0, false, ::app::Uno::Bool__typeof()),
        ::uNewFunction("get_Target", Change__Fuse_Drawing_StaticBrush__get_Target, 0, false, ::app::Uno::UX::Property__Fuse_Drawing_StaticBrush__typeof()),
        ::uNewFunction("get_Value", Change__Fuse_Drawing_StaticBrush__get_Value, 0, false, ::app::Fuse::Drawing::StaticBrush__typeof()),
        ::uNewFunction("get_X", Change__Fuse_Drawing_StaticBrush__get_X, 0, false, ::app::Uno::Float__typeof()),
        ::uNewFunction("get_XY", Change__Fuse_Drawing_StaticBrush__get_XY, 0, false, ::app::Uno::Float2__typeof()),
        ::uNewFunction("get_Y", Change__Fuse_Drawing_StaticBrush__get_Y, 0, false, ::app::Uno::Float__typeof()),
        ::uNewFunction("get_Z", Change__Fuse_Drawing_StaticBrush__get_Z, 0, false, ::app::Uno::Float__typeof()),
        ::uNewFunction(".ctor", Change__Fuse_Drawing_StaticBrush__New_1, 0, true, Change__Fuse_Drawing_StaticBrush__typeof(), ::app::Uno::UX::Property__Fuse_Drawing_StaticBrush__typeof()),
        ::uNewFunctionVoid("set_DegreesX", Change__Fuse_Drawing_StaticBrush__set_DegreesX, 0, false, ::app::Uno::Float__typeof()),
        ::uNewFunctionVoid("set_DegreesXY", Change__Fuse_Drawing_StaticBrush__set_DegreesXY, 0, false, ::app::Uno::Float2__typeof()),
        ::uNewFunctionVoid("set_DegreesY", Change__Fuse_Drawing_StaticBrush__set_DegreesY, 0, false, ::app::Uno::Float__typeof()),
        ::uNewFunctionVoid("set_DegreesZ", Change__Fuse_Drawing_StaticBrush__set_DegreesZ, 0, false, ::app::Uno::Float__typeof()),
        ::uNewFunctionVoid("set_Target", Change__Fuse_Drawing_StaticBrush__set_Target, 0, false, ::app::Uno::UX::Property__Fuse_Drawing_StaticBrush__typeof()),
        ::uNewFunctionVoid("set_Value", Change__Fuse_Drawing_StaticBrush__set_Value, 0, false, ::app::Fuse::Drawing::StaticBrush__typeof()),
        ::uNewFunctionVoid("set_X", Change__Fuse_Drawing_StaticBrush__set_X, 0, false, ::app::Uno::Float__typeof()),
        ::uNewFunctionVoid("set_XY", Change__Fuse_Drawing_StaticBrush__set_XY, 0, false, ::app::Uno::Float2__typeof()),
        ::uNewFunctionVoid("set_Y", Change__Fuse_Drawing_StaticBrush__set_Y, 0, false, ::app::Uno::Float__typeof()),
        ::uNewFunctionVoid("set_Z", Change__Fuse_Drawing_StaticBrush__set_Z, 0, false, ::app::Uno::Float__typeof()));

    ::uRegisterType(type);
    return type;
}

void Change__Fuse_Drawing_StaticBrush___ObjInit_2(Change__Fuse_Drawing_StaticBrush* __this, ::app::Uno::UX::Property__Fuse_Drawing_StaticBrush* target)
{
    ::app::Fuse::Animations::TrackAnimator___ObjInit_1(__this);

    if (target == NULL)
    {
        U_THROW(::app::Uno::ArgumentNullException__New_5(NULL, ::uGetConstString("target")));
    }

    __this->Target(target);

    if (__this->IsContinuous())
    {
        ::uObject* v;

        if ((::uType*)::app::Fuse::Drawing::StaticBrush__typeof() == (::uType*)::app::Uno::Float__typeof())
        {
            v = (::uObject*)::app::Fuse::Animations::ConverterFloat__Singleton;
        }
        else if ((::uType*)::app::Fuse::Drawing::StaticBrush__typeof() == (::uType*)::app::Uno::Float2__typeof())
        {
            v = (::uObject*)::app::Fuse::Animations::ConverterFloat2__Singleton;
        }
        else if ((::uType*)::app::Fuse::Drawing::StaticBrush__typeof() == (::uType*)::app::Uno::Float3__typeof())
        {
            v = (::uObject*)::app::Fuse::Animations::ConverterFloat3__Singleton;
        }
        else if ((::uType*)::app::Fuse::Drawing::StaticBrush__typeof() == (::uType*)::app::Uno::Float4__typeof())
        {
            v = (::uObject*)::app::Fuse::Animations::ConverterFloat4__Singleton;
        }
        else if ((::uType*)::app::Fuse::Drawing::StaticBrush__typeof() == (::uType*)::app::Uno::Double__typeof())
        {
            v = (::uObject*)::app::Fuse::Animations::ConverterDouble__Singleton;
        }
        else
        {
            U_THROW(::app::Uno::Exception__New_2(NULL, ::app::Uno::String__op_Addition_1(NULL, ::uGetConstString("Unsupported change type: "), (::uObject*)(::uType*)::app::Fuse::Drawing::StaticBrush__typeof())));
        }

        __this->ContinuousConverter = ::uCast< ::app::Fuse::Animations::Converter__Fuse_Drawing_StaticBrush*>(v, ::app::Fuse::Animations::Converter__Fuse_Drawing_StaticBrush__typeof());
    }
    else
    {
        __this->Mixer = ::app::Fuse::Animations::Mixer__get_DefaultDiscrete(NULL);
        __this->MarkDiscrete();
    }
}

::app::Fuse::Animations::AnimatorState* Change__Fuse_Drawing_StaticBrush__CreateState(Change__Fuse_Drawing_StaticBrush* __this, ::app::Fuse::Animations::CreateStateParams* p)
{
    if (__this->IsContinuous())
    {
        return (::app::Fuse::Animations::AnimatorState*)::app::Fuse::Animations::ContinuousTrackChangeState__Fuse_Drawing_StaticBrush__New_1(NULL, __this, p);
    }

    return (::app::Fuse::Animations::AnimatorState*)::app::Fuse::Animations::DiscreteTrackChangeState__Fuse_Drawing_StaticBrush__New_1(NULL, __this, p);
}

float Change__Fuse_Drawing_StaticBrush__get_DegreesX(Change__Fuse_Drawing_StaticBrush* __this)
{
    return ::app::Uno::Math__RadiansToDegrees_1(NULL, __this->X());
}

::app::Uno::Float2 Change__Fuse_Drawing_StaticBrush__get_DegreesXY(Change__Fuse_Drawing_StaticBrush* __this)
{
    return ::app::Uno::Float2__New_2(NULL, ::app::Uno::Math__RadiansToDegrees_1(NULL, __this->X()), ::app::Uno::Math__RadiansToDegrees_1(NULL, __this->Y()));
}

float Change__Fuse_Drawing_StaticBrush__get_DegreesY(Change__Fuse_Drawing_StaticBrush* __this)
{
    return ::app::Uno::Math__RadiansToDegrees_1(NULL, __this->Y());
}

float Change__Fuse_Drawing_StaticBrush__get_DegreesZ(Change__Fuse_Drawing_StaticBrush* __this)
{
    return ::app::Uno::Math__RadiansToDegrees_1(NULL, __this->Y());
}

bool Change__Fuse_Drawing_StaticBrush__get_IsContinuous(Change__Fuse_Drawing_StaticBrush* __this)
{
    return (((((::uType*)::app::Fuse::Drawing::StaticBrush__typeof() == (::uType*)::app::Uno::Float__typeof()) || ((::uType*)::app::Fuse::Drawing::StaticBrush__typeof() == (::uType*)::app::Uno::Float2__typeof())) || ((::uType*)::app::Fuse::Drawing::StaticBrush__typeof() == (::uType*)::app::Uno::Float3__typeof())) || ((::uType*)::app::Fuse::Drawing::StaticBrush__typeof() == (::uType*)::app::Uno::Float4__typeof())) || ((::uType*)::app::Fuse::Drawing::StaticBrush__typeof() == (::uType*)::app::Uno::Double__typeof());
}

::app::Uno::UX::Property__Fuse_Drawing_StaticBrush* Change__Fuse_Drawing_StaticBrush__get_Target(Change__Fuse_Drawing_StaticBrush* __this)
{
    return __this->_Target;
}

::app::Fuse::Drawing::StaticBrush* Change__Fuse_Drawing_StaticBrush__get_Value(Change__Fuse_Drawing_StaticBrush* __this)
{
    return __this->IsContinuous() ? ::uPtr< ::app::Fuse::Animations::Converter__Fuse_Drawing_StaticBrush*>(__this->ContinuousConverter)->Out(__this->_vectorValue) : ::uCast< ::app::Fuse::Drawing::StaticBrush*>(__this->_objectValue, ::app::Fuse::Drawing::StaticBrush__typeof());
}

float Change__Fuse_Drawing_StaticBrush__get_X(Change__Fuse_Drawing_StaticBrush* __this)
{
    return __this->_vectorValue.X;
}

::app::Uno::Float2 Change__Fuse_Drawing_StaticBrush__get_XY(Change__Fuse_Drawing_StaticBrush* __this)
{
    ::app::Uno::Float4 ind_123 = __this->_vectorValue;
    return ::app::Uno::Float2__New_2(NULL, ind_123.X, ind_123.Y);
}

float Change__Fuse_Drawing_StaticBrush__get_Y(Change__Fuse_Drawing_StaticBrush* __this)
{
    return __this->_vectorValue.Y;
}

float Change__Fuse_Drawing_StaticBrush__get_Z(Change__Fuse_Drawing_StaticBrush* __this)
{
    return __this->_vectorValue.Z;
}

Change__Fuse_Drawing_StaticBrush* Change__Fuse_Drawing_StaticBrush__New_1(::uStatic* __this, ::app::Uno::UX::Property__Fuse_Drawing_StaticBrush* target)
{
    Change__Fuse_Drawing_StaticBrush* inst = (Change__Fuse_Drawing_StaticBrush*)::uAllocObject(sizeof(Change__Fuse_Drawing_StaticBrush), Change__Fuse_Drawing_StaticBrush__typeof());
    inst->_ObjInit_2(target);
    return inst;
}

void Change__Fuse_Drawing_StaticBrush__set_DegreesX(Change__Fuse_Drawing_StaticBrush* __this, float value)
{
    __this->X(::app::Uno::Math__DegreesToRadians_1(NULL, value));
}

void Change__Fuse_Drawing_StaticBrush__set_DegreesXY(Change__Fuse_Drawing_StaticBrush* __this, ::app::Uno::Float2 value)
{
    __this->XY(::app::Uno::Float2__New_2(NULL, ::app::Uno::Math__DegreesToRadians_1(NULL, value.X), ::app::Uno::Math__DegreesToRadians_1(NULL, value.Y)));
}

void Change__Fuse_Drawing_StaticBrush__set_DegreesY(Change__Fuse_Drawing_StaticBrush* __this, float value)
{
    __this->Y(::app::Uno::Math__DegreesToRadians_1(NULL, value));
}

void Change__Fuse_Drawing_StaticBrush__set_DegreesZ(Change__Fuse_Drawing_StaticBrush* __this, float value)
{
    __this->Y(::app::Uno::Math__DegreesToRadians_1(NULL, value));
}

void Change__Fuse_Drawing_StaticBrush__set_Target(Change__Fuse_Drawing_StaticBrush* __this, ::app::Uno::UX::Property__Fuse_Drawing_StaticBrush* value)
{
    __this->_Target = value;
}

void Change__Fuse_Drawing_StaticBrush__set_Value(Change__Fuse_Drawing_StaticBrush* __this, ::app::Fuse::Drawing::StaticBrush* value)
{
    if (__this->IsContinuous())
    {
        __this->_vectorValue = ::uPtr< ::app::Fuse::Animations::Converter__Fuse_Drawing_StaticBrush*>(__this->ContinuousConverter)->In(value);
    }
    else
    {
        __this->_objectValue = (::uObject*)value;
    }
}

void Change__Fuse_Drawing_StaticBrush__set_X(Change__Fuse_Drawing_StaticBrush* __this, float value)
{
    __this->_vectorValue.X = value;
}

void Change__Fuse_Drawing_StaticBrush__set_XY(Change__Fuse_Drawing_StaticBrush* __this, ::app::Uno::Float2 value)
{
    __this->_vectorValue = ::app::Uno::Float4__New_6(NULL, value, __this->_vectorValue.Z, __this->_vectorValue.W);
}

void Change__Fuse_Drawing_StaticBrush__set_Y(Change__Fuse_Drawing_StaticBrush* __this, float value)
{
    __this->_vectorValue.Y = value;
}

void Change__Fuse_Drawing_StaticBrush__set_Z(Change__Fuse_Drawing_StaticBrush* __this, float value)
{
    __this->_vectorValue.Z = value;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Animations\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

Change__Fuse_Elements_Alignment__uType* Change__Fuse_Elements_Alignment__typeof()
{
    static ::uStaticStrong<Change__Fuse_Elements_Alignment__uType*> type;
    if (type != NULL) return type;

    type = (Change__Fuse_Elements_Alignment__uType*)::uAllocClassType(sizeof(Change__Fuse_Elements_Alignment__uType), "Fuse.Animations.Change<Fuse.Elements.Alignment>", false, 0, 2, 0);

    type->SetBaseType(::app::Fuse::Animations::TrackAnimator__typeof());
    type->__fp_CreateState = (::app::Fuse::Animations::AnimatorState*(*)(::app::Fuse::Animations::Animator*, ::app::Fuse::Animations::CreateStateParams*))Change__Fuse_Elements_Alignment__CreateState;

    type->SetStrongRefs(
        "_Target", offsetof(Change__Fuse_Elements_Alignment, _Target),
        "ContinuousConverter", offsetof(Change__Fuse_Elements_Alignment, ContinuousConverter));

    type->SetFields(1,
        ::uNewField("ContinuousConverter", NULL, offsetof(Change__Fuse_Elements_Alignment, ContinuousConverter), ::app::Fuse::Animations::Converter__Fuse_Elements_Alignment__typeof()));

    type->SetFunctions(22,
        ::uNewFunction("get_DegreesX", Change__Fuse_Elements_Alignment__get_DegreesX, 0, false, ::app::Uno::Float__typeof()),
        ::uNewFunction("get_DegreesXY", Change__Fuse_Elements_Alignment__get_DegreesXY, 0, false, ::app::Uno::Float2__typeof()),
        ::uNewFunction("get_DegreesY", Change__Fuse_Elements_Alignment__get_DegreesY, 0, false, ::app::Uno::Float__typeof()),
        ::uNewFunction("get_DegreesZ", Change__Fuse_Elements_Alignment__get_DegreesZ, 0, false, ::app::Uno::Float__typeof()),
        ::uNewFunction("get_IsContinuous", Change__Fuse_Elements_Alignment__get_IsContinuous, 0, false, ::app::Uno::Bool__typeof()),
        ::uNewFunction("get_Target", Change__Fuse_Elements_Alignment__get_Target, 0, false, ::app::Uno::UX::Property__Fuse_Elements_Alignment__typeof()),
        ::uNewFunction("get_Value", Change__Fuse_Elements_Alignment__get_Value, 0, false, ::app::Fuse::Elements::Alignment__typeof()),
        ::uNewFunction("get_X", Change__Fuse_Elements_Alignment__get_X, 0, false, ::app::Uno::Float__typeof()),
        ::uNewFunction("get_XY", Change__Fuse_Elements_Alignment__get_XY, 0, false, ::app::Uno::Float2__typeof()),
        ::uNewFunction("get_Y", Change__Fuse_Elements_Alignment__get_Y, 0, false, ::app::Uno::Float__typeof()),
        ::uNewFunction("get_Z", Change__Fuse_Elements_Alignment__get_Z, 0, false, ::app::Uno::Float__typeof()),
        ::uNewFunction(".ctor", Change__Fuse_Elements_Alignment__New_1, 0, true, Change__Fuse_Elements_Alignment__typeof(), ::app::Uno::UX::Property__Fuse_Elements_Alignment__typeof()),
        ::uNewFunctionVoid("set_DegreesX", Change__Fuse_Elements_Alignment__set_DegreesX, 0, false, ::app::Uno::Float__typeof()),
        ::uNewFunctionVoid("set_DegreesXY", Change__Fuse_Elements_Alignment__set_DegreesXY, 0, false, ::app::Uno::Float2__typeof()),
        ::uNewFunctionVoid("set_DegreesY", Change__Fuse_Elements_Alignment__set_DegreesY, 0, false, ::app::Uno::Float__typeof()),
        ::uNewFunctionVoid("set_DegreesZ", Change__Fuse_Elements_Alignment__set_DegreesZ, 0, false, ::app::Uno::Float__typeof()),
        ::uNewFunctionVoid("set_Target", Change__Fuse_Elements_Alignment__set_Target, 0, false, ::app::Uno::UX::Property__Fuse_Elements_Alignment__typeof()),
        ::uNewFunctionVoid("set_Value", Change__Fuse_Elements_Alignment__set_Value, 0, false, ::app::Fuse::Elements::Alignment__typeof()),
        ::uNewFunctionVoid("set_X", Change__Fuse_Elements_Alignment__set_X, 0, false, ::app::Uno::Float__typeof()),
        ::uNewFunctionVoid("set_XY", Change__Fuse_Elements_Alignment__set_XY, 0, false, ::app::Uno::Float2__typeof()),
        ::uNewFunctionVoid("set_Y", Change__Fuse_Elements_Alignment__set_Y, 0, false, ::app::Uno::Float__typeof()),
        ::uNewFunctionVoid("set_Z", Change__Fuse_Elements_Alignment__set_Z, 0, false, ::app::Uno::Float__typeof()));

    ::uRegisterType(type);
    return type;
}

void Change__Fuse_Elements_Alignment___ObjInit_2(Change__Fuse_Elements_Alignment* __this, ::app::Uno::UX::Property__Fuse_Elements_Alignment* target)
{
    ::app::Fuse::Animations::TrackAnimator___ObjInit_1(__this);

    if (target == NULL)
    {
        U_THROW(::app::Uno::ArgumentNullException__New_5(NULL, ::uGetConstString("target")));
    }

    __this->Target(target);

    if (__this->IsContinuous())
    {
        ::uObject* v;

        if ((::uType*)::app::Fuse::Elements::Alignment__typeof() == (::uType*)::app::Uno::Float__typeof())
        {
            v = (::uObject*)::app::Fuse::Animations::ConverterFloat__Singleton;
        }
        else if ((::uType*)::app::Fuse::Elements::Alignment__typeof() == (::uType*)::app::Uno::Float2__typeof())
        {
            v = (::uObject*)::app::Fuse::Animations::ConverterFloat2__Singleton;
        }
        else if ((::uType*)::app::Fuse::Elements::Alignment__typeof() == (::uType*)::app::Uno::Float3__typeof())
        {
            v = (::uObject*)::app::Fuse::Animations::ConverterFloat3__Singleton;
        }
        else if ((::uType*)::app::Fuse::Elements::Alignment__typeof() == (::uType*)::app::Uno::Float4__typeof())
        {
            v = (::uObject*)::app::Fuse::Animations::ConverterFloat4__Singleton;
        }
        else if ((::uType*)::app::Fuse::Elements::Alignment__typeof() == (::uType*)::app::Uno::Double__typeof())
        {
            v = (::uObject*)::app::Fuse::Animations::ConverterDouble__Singleton;
        }
        else
        {
            U_THROW(::app::Uno::Exception__New_2(NULL, ::app::Uno::String__op_Addition_1(NULL, ::uGetConstString("Unsupported change type: "), (::uObject*)(::uType*)::app::Fuse::Elements::Alignment__typeof())));
        }

        __this->ContinuousConverter = ::uCast< ::app::Fuse::Animations::Converter__Fuse_Elements_Alignment*>(v, ::app::Fuse::Animations::Converter__Fuse_Elements_Alignment__typeof());
    }
    else
    {
        __this->Mixer = ::app::Fuse::Animations::Mixer__get_DefaultDiscrete(NULL);
        __this->MarkDiscrete();
    }
}

::app::Fuse::Animations::AnimatorState* Change__Fuse_Elements_Alignment__CreateState(Change__Fuse_Elements_Alignment* __this, ::app::Fuse::Animations::CreateStateParams* p)
{
    if (__this->IsContinuous())
    {
        return (::app::Fuse::Animations::AnimatorState*)::app::Fuse::Animations::ContinuousTrackChangeState__Fuse_Elements_Alignment__New_1(NULL, __this, p);
    }

    return (::app::Fuse::Animations::AnimatorState*)::app::Fuse::Animations::DiscreteTrackChangeState__Fuse_Elements_Alignment__New_1(NULL, __this, p);
}

float Change__Fuse_Elements_Alignment__get_DegreesX(Change__Fuse_Elements_Alignment* __this)
{
    return ::app::Uno::Math__RadiansToDegrees_1(NULL, __this->X());
}

::app::Uno::Float2 Change__Fuse_Elements_Alignment__get_DegreesXY(Change__Fuse_Elements_Alignment* __this)
{
    return ::app::Uno::Float2__New_2(NULL, ::app::Uno::Math__RadiansToDegrees_1(NULL, __this->X()), ::app::Uno::Math__RadiansToDegrees_1(NULL, __this->Y()));
}

float Change__Fuse_Elements_Alignment__get_DegreesY(Change__Fuse_Elements_Alignment* __this)
{
    return ::app::Uno::Math__RadiansToDegrees_1(NULL, __this->Y());
}

float Change__Fuse_Elements_Alignment__get_DegreesZ(Change__Fuse_Elements_Alignment* __this)
{
    return ::app::Uno::Math__RadiansToDegrees_1(NULL, __this->Y());
}

bool Change__Fuse_Elements_Alignment__get_IsContinuous(Change__Fuse_Elements_Alignment* __this)
{
    return (((((::uType*)::app::Fuse::Elements::Alignment__typeof() == (::uType*)::app::Uno::Float__typeof()) || ((::uType*)::app::Fuse::Elements::Alignment__typeof() == (::uType*)::app::Uno::Float2__typeof())) || ((::uType*)::app::Fuse::Elements::Alignment__typeof() == (::uType*)::app::Uno::Float3__typeof())) || ((::uType*)::app::Fuse::Elements::Alignment__typeof() == (::uType*)::app::Uno::Float4__typeof())) || ((::uType*)::app::Fuse::Elements::Alignment__typeof() == (::uType*)::app::Uno::Double__typeof());
}

::app::Uno::UX::Property__Fuse_Elements_Alignment* Change__Fuse_Elements_Alignment__get_Target(Change__Fuse_Elements_Alignment* __this)
{
    return __this->_Target;
}

int Change__Fuse_Elements_Alignment__get_Value(Change__Fuse_Elements_Alignment* __this)
{
    return __this->IsContinuous() ? ::uPtr< ::app::Fuse::Animations::Converter__Fuse_Elements_Alignment*>(__this->ContinuousConverter)->Out(__this->_vectorValue) : ::uUnbox< int>(::app::Fuse::Elements::Alignment__typeof(), __this->_objectValue);
}

float Change__Fuse_Elements_Alignment__get_X(Change__Fuse_Elements_Alignment* __this)
{
    return __this->_vectorValue.X;
}

::app::Uno::Float2 Change__Fuse_Elements_Alignment__get_XY(Change__Fuse_Elements_Alignment* __this)
{
    ::app::Uno::Float4 ind_123 = __this->_vectorValue;
    return ::app::Uno::Float2__New_2(NULL, ind_123.X, ind_123.Y);
}

float Change__Fuse_Elements_Alignment__get_Y(Change__Fuse_Elements_Alignment* __this)
{
    return __this->_vectorValue.Y;
}

float Change__Fuse_Elements_Alignment__get_Z(Change__Fuse_Elements_Alignment* __this)
{
    return __this->_vectorValue.Z;
}

Change__Fuse_Elements_Alignment* Change__Fuse_Elements_Alignment__New_1(::uStatic* __this, ::app::Uno::UX::Property__Fuse_Elements_Alignment* target)
{
    Change__Fuse_Elements_Alignment* inst = (Change__Fuse_Elements_Alignment*)::uAllocObject(sizeof(Change__Fuse_Elements_Alignment), Change__Fuse_Elements_Alignment__typeof());
    inst->_ObjInit_2(target);
    return inst;
}

void Change__Fuse_Elements_Alignment__set_DegreesX(Change__Fuse_Elements_Alignment* __this, float value)
{
    __this->X(::app::Uno::Math__DegreesToRadians_1(NULL, value));
}

void Change__Fuse_Elements_Alignment__set_DegreesXY(Change__Fuse_Elements_Alignment* __this, ::app::Uno::Float2 value)
{
    __this->XY(::app::Uno::Float2__New_2(NULL, ::app::Uno::Math__DegreesToRadians_1(NULL, value.X), ::app::Uno::Math__DegreesToRadians_1(NULL, value.Y)));
}

void Change__Fuse_Elements_Alignment__set_DegreesY(Change__Fuse_Elements_Alignment* __this, float value)
{
    __this->Y(::app::Uno::Math__DegreesToRadians_1(NULL, value));
}

void Change__Fuse_Elements_Alignment__set_DegreesZ(Change__Fuse_Elements_Alignment* __this, float value)
{
    __this->Y(::app::Uno::Math__DegreesToRadians_1(NULL, value));
}

void Change__Fuse_Elements_Alignment__set_Target(Change__Fuse_Elements_Alignment* __this, ::app::Uno::UX::Property__Fuse_Elements_Alignment* value)
{
    __this->_Target = value;
}

void Change__Fuse_Elements_Alignment__set_Value(Change__Fuse_Elements_Alignment* __this, int value)
{
    if (__this->IsContinuous())
    {
        __this->_vectorValue = ::uPtr< ::app::Fuse::Animations::Converter__Fuse_Elements_Alignment*>(__this->ContinuousConverter)->In(value);
    }
    else
    {
        __this->_objectValue = ::uBox< int>(::app::Fuse::Elements::Alignment__typeof(), value);
    }
}

void Change__Fuse_Elements_Alignment__set_X(Change__Fuse_Elements_Alignment* __this, float value)
{
    __this->_vectorValue.X = value;
}

void Change__Fuse_Elements_Alignment__set_XY(Change__Fuse_Elements_Alignment* __this, ::app::Uno::Float2 value)
{
    __this->_vectorValue = ::app::Uno::Float4__New_6(NULL, value, __this->_vectorValue.Z, __this->_vectorValue.W);
}

void Change__Fuse_Elements_Alignment__set_Y(Change__Fuse_Elements_Alignment* __this, float value)
{
    __this->_vectorValue.Y = value;
}

void Change__Fuse_Elements_Alignment__set_Z(Change__Fuse_Elements_Alignment* __this, float value)
{
    __this->_vectorValue.Z = value;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Animations\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

Change__Fuse_Elements_CachingMode__uType* Change__Fuse_Elements_CachingMode__typeof()
{
    static ::uStaticStrong<Change__Fuse_Elements_CachingMode__uType*> type;
    if (type != NULL) return type;

    type = (Change__Fuse_Elements_CachingMode__uType*)::uAllocClassType(sizeof(Change__Fuse_Elements_CachingMode__uType), "Fuse.Animations.Change<Fuse.Elements.CachingMode>", false, 0, 2, 0);

    type->SetBaseType(::app::Fuse::Animations::TrackAnimator__typeof());
    type->__fp_CreateState = (::app::Fuse::Animations::AnimatorState*(*)(::app::Fuse::Animations::Animator*, ::app::Fuse::Animations::CreateStateParams*))Change__Fuse_Elements_CachingMode__CreateState;

    type->SetStrongRefs(
        "_Target", offsetof(Change__Fuse_Elements_CachingMode, _Target),
        "ContinuousConverter", offsetof(Change__Fuse_Elements_CachingMode, ContinuousConverter));

    type->SetFields(1,
        ::uNewField("ContinuousConverter", NULL, offsetof(Change__Fuse_Elements_CachingMode, ContinuousConverter), ::app::Fuse::Animations::Converter__Fuse_Elements_CachingMode__typeof()));

    type->SetFunctions(22,
        ::uNewFunction("get_DegreesX", Change__Fuse_Elements_CachingMode__get_DegreesX, 0, false, ::app::Uno::Float__typeof()),
        ::uNewFunction("get_DegreesXY", Change__Fuse_Elements_CachingMode__get_DegreesXY, 0, false, ::app::Uno::Float2__typeof()),
        ::uNewFunction("get_DegreesY", Change__Fuse_Elements_CachingMode__get_DegreesY, 0, false, ::app::Uno::Float__typeof()),
        ::uNewFunction("get_DegreesZ", Change__Fuse_Elements_CachingMode__get_DegreesZ, 0, false, ::app::Uno::Float__typeof()),
        ::uNewFunction("get_IsContinuous", Change__Fuse_Elements_CachingMode__get_IsContinuous, 0, false, ::app::Uno::Bool__typeof()),
        ::uNewFunction("get_Target", Change__Fuse_Elements_CachingMode__get_Target, 0, false, ::app::Uno::UX::Property__Fuse_Elements_CachingMode__typeof()),
        ::uNewFunction("get_Value", Change__Fuse_Elements_CachingMode__get_Value, 0, false, ::app::Fuse::Elements::CachingMode__typeof()),
        ::uNewFunction("get_X", Change__Fuse_Elements_CachingMode__get_X, 0, false, ::app::Uno::Float__typeof()),
        ::uNewFunction("get_XY", Change__Fuse_Elements_CachingMode__get_XY, 0, false, ::app::Uno::Float2__typeof()),
        ::uNewFunction("get_Y", Change__Fuse_Elements_CachingMode__get_Y, 0, false, ::app::Uno::Float__typeof()),
        ::uNewFunction("get_Z", Change__Fuse_Elements_CachingMode__get_Z, 0, false, ::app::Uno::Float__typeof()),
        ::uNewFunction(".ctor", Change__Fuse_Elements_CachingMode__New_1, 0, true, Change__Fuse_Elements_CachingMode__typeof(), ::app::Uno::UX::Property__Fuse_Elements_CachingMode__typeof()),
        ::uNewFunctionVoid("set_DegreesX", Change__Fuse_Elements_CachingMode__set_DegreesX, 0, false, ::app::Uno::Float__typeof()),
        ::uNewFunctionVoid("set_DegreesXY", Change__Fuse_Elements_CachingMode__set_DegreesXY, 0, false, ::app::Uno::Float2__typeof()),
        ::uNewFunctionVoid("set_DegreesY", Change__Fuse_Elements_CachingMode__set_DegreesY, 0, false, ::app::Uno::Float__typeof()),
        ::uNewFunctionVoid("set_DegreesZ", Change__Fuse_Elements_CachingMode__set_DegreesZ, 0, false, ::app::Uno::Float__typeof()),
        ::uNewFunctionVoid("set_Target", Change__Fuse_Elements_CachingMode__set_Target, 0, false, ::app::Uno::UX::Property__Fuse_Elements_CachingMode__typeof()),
        ::uNewFunctionVoid("set_Value", Change__Fuse_Elements_CachingMode__set_Value, 0, false, ::app::Fuse::Elements::CachingMode__typeof()),
        ::uNewFunctionVoid("set_X", Change__Fuse_Elements_CachingMode__set_X, 0, false, ::app::Uno::Float__typeof()),
        ::uNewFunctionVoid("set_XY", Change__Fuse_Elements_CachingMode__set_XY, 0, false, ::app::Uno::Float2__typeof()),
        ::uNewFunctionVoid("set_Y", Change__Fuse_Elements_CachingMode__set_Y, 0, false, ::app::Uno::Float__typeof()),
        ::uNewFunctionVoid("set_Z", Change__Fuse_Elements_CachingMode__set_Z, 0, false, ::app::Uno::Float__typeof()));

    ::uRegisterType(type);
    return type;
}

void Change__Fuse_Elements_CachingMode___ObjInit_2(Change__Fuse_Elements_CachingMode* __this, ::app::Uno::UX::Property__Fuse_Elements_CachingMode* target)
{
    ::app::Fuse::Animations::TrackAnimator___ObjInit_1(__this);

    if (target == NULL)
    {
        U_THROW(::app::Uno::ArgumentNullException__New_5(NULL, ::uGetConstString("target")));
    }

    __this->Target(target);

    if (__this->IsContinuous())
    {
        ::uObject* v;

        if ((::uType*)::app::Fuse::Elements::CachingMode__typeof() == (::uType*)::app::Uno::Float__typeof())
        {
            v = (::uObject*)::app::Fuse::Animations::ConverterFloat__Singleton;
        }
        else if ((::uType*)::app::Fuse::Elements::CachingMode__typeof() == (::uType*)::app::Uno::Float2__typeof())
        {
            v = (::uObject*)::app::Fuse::Animations::ConverterFloat2__Singleton;
        }
        else if ((::uType*)::app::Fuse::Elements::CachingMode__typeof() == (::uType*)::app::Uno::Float3__typeof())
        {
            v = (::uObject*)::app::Fuse::Animations::ConverterFloat3__Singleton;
        }
        else if ((::uType*)::app::Fuse::Elements::CachingMode__typeof() == (::uType*)::app::Uno::Float4__typeof())
        {
            v = (::uObject*)::app::Fuse::Animations::ConverterFloat4__Singleton;
        }
        else if ((::uType*)::app::Fuse::Elements::CachingMode__typeof() == (::uType*)::app::Uno::Double__typeof())
        {
            v = (::uObject*)::app::Fuse::Animations::ConverterDouble__Singleton;
        }
        else
        {
            U_THROW(::app::Uno::Exception__New_2(NULL, ::app::Uno::String__op_Addition_1(NULL, ::uGetConstString("Unsupported change type: "), (::uObject*)(::uType*)::app::Fuse::Elements::CachingMode__typeof())));
        }

        __this->ContinuousConverter = ::uCast< ::app::Fuse::Animations::Converter__Fuse_Elements_CachingMode*>(v, ::app::Fuse::Animations::Converter__Fuse_Elements_CachingMode__typeof());
    }
    else
    {
        __this->Mixer = ::app::Fuse::Animations::Mixer__get_DefaultDiscrete(NULL);
        __this->MarkDiscrete();
    }
}

::app::Fuse::Animations::AnimatorState* Change__Fuse_Elements_CachingMode__CreateState(Change__Fuse_Elements_CachingMode* __this, ::app::Fuse::Animations::CreateStateParams* p)
{
    if (__this->IsContinuous())
    {
        return (::app::Fuse::Animations::AnimatorState*)::app::Fuse::Animations::ContinuousTrackChangeState__Fuse_Elements_CachingMode__New_1(NULL, __this, p);
    }

    return (::app::Fuse::Animations::AnimatorState*)::app::Fuse::Animations::DiscreteTrackChangeState__Fuse_Elements_CachingMode__New_1(NULL, __this, p);
}

float Change__Fuse_Elements_CachingMode__get_DegreesX(Change__Fuse_Elements_CachingMode* __this)
{
    return ::app::Uno::Math__RadiansToDegrees_1(NULL, __this->X());
}

::app::Uno::Float2 Change__Fuse_Elements_CachingMode__get_DegreesXY(Change__Fuse_Elements_CachingMode* __this)
{
    return ::app::Uno::Float2__New_2(NULL, ::app::Uno::Math__RadiansToDegrees_1(NULL, __this->X()), ::app::Uno::Math__RadiansToDegrees_1(NULL, __this->Y()));
}

float Change__Fuse_Elements_CachingMode__get_DegreesY(Change__Fuse_Elements_CachingMode* __this)
{
    return ::app::Uno::Math__RadiansToDegrees_1(NULL, __this->Y());
}

float Change__Fuse_Elements_CachingMode__get_DegreesZ(Change__Fuse_Elements_CachingMode* __this)
{
    return ::app::Uno::Math__RadiansToDegrees_1(NULL, __this->Y());
}

bool Change__Fuse_Elements_CachingMode__get_IsContinuous(Change__Fuse_Elements_CachingMode* __this)
{
    return (((((::uType*)::app::Fuse::Elements::CachingMode__typeof() == (::uType*)::app::Uno::Float__typeof()) || ((::uType*)::app::Fuse::Elements::CachingMode__typeof() == (::uType*)::app::Uno::Float2__typeof())) || ((::uType*)::app::Fuse::Elements::CachingMode__typeof() == (::uType*)::app::Uno::Float3__typeof())) || ((::uType*)::app::Fuse::Elements::CachingMode__typeof() == (::uType*)::app::Uno::Float4__typeof())) || ((::uType*)::app::Fuse::Elements::CachingMode__typeof() == (::uType*)::app::Uno::Double__typeof());
}

::app::Uno::UX::Property__Fuse_Elements_CachingMode* Change__Fuse_Elements_CachingMode__get_Target(Change__Fuse_Elements_CachingMode* __this)
{
    return __this->_Target;
}

int Change__Fuse_Elements_CachingMode__get_Value(Change__Fuse_Elements_CachingMode* __this)
{
    return __this->IsContinuous() ? ::uPtr< ::app::Fuse::Animations::Converter__Fuse_Elements_CachingMode*>(__this->ContinuousConverter)->Out(__this->_vectorValue) : ::uUnbox< int>(::app::Fuse::Elements::CachingMode__typeof(), __this->_objectValue);
}

float Change__Fuse_Elements_CachingMode__get_X(Change__Fuse_Elements_CachingMode* __this)
{
    return __this->_vectorValue.X;
}

::app::Uno::Float2 Change__Fuse_Elements_CachingMode__get_XY(Change__Fuse_Elements_CachingMode* __this)
{
    ::app::Uno::Float4 ind_123 = __this->_vectorValue;
    return ::app::Uno::Float2__New_2(NULL, ind_123.X, ind_123.Y);
}

float Change__Fuse_Elements_CachingMode__get_Y(Change__Fuse_Elements_CachingMode* __this)
{
    return __this->_vectorValue.Y;
}

float Change__Fuse_Elements_CachingMode__get_Z(Change__Fuse_Elements_CachingMode* __this)
{
    return __this->_vectorValue.Z;
}

Change__Fuse_Elements_CachingMode* Change__Fuse_Elements_CachingMode__New_1(::uStatic* __this, ::app::Uno::UX::Property__Fuse_Elements_CachingMode* target)
{
    Change__Fuse_Elements_CachingMode* inst = (Change__Fuse_Elements_CachingMode*)::uAllocObject(sizeof(Change__Fuse_Elements_CachingMode), Change__Fuse_Elements_CachingMode__typeof());
    inst->_ObjInit_2(target);
    return inst;
}

void Change__Fuse_Elements_CachingMode__set_DegreesX(Change__Fuse_Elements_CachingMode* __this, float value)
{
    __this->X(::app::Uno::Math__DegreesToRadians_1(NULL, value));
}

void Change__Fuse_Elements_CachingMode__set_DegreesXY(Change__Fuse_Elements_CachingMode* __this, ::app::Uno::Float2 value)
{
    __this->XY(::app::Uno::Float2__New_2(NULL, ::app::Uno::Math__DegreesToRadians_1(NULL, value.X), ::app::Uno::Math__DegreesToRadians_1(NULL, value.Y)));
}

void Change__Fuse_Elements_CachingMode__set_DegreesY(Change__Fuse_Elements_CachingMode* __this, float value)
{
    __this->Y(::app::Uno::Math__DegreesToRadians_1(NULL, value));
}

void Change__Fuse_Elements_CachingMode__set_DegreesZ(Change__Fuse_Elements_CachingMode* __this, float value)
{
    __this->Y(::app::Uno::Math__DegreesToRadians_1(NULL, value));
}

void Change__Fuse_Elements_CachingMode__set_Target(Change__Fuse_Elements_CachingMode* __this, ::app::Uno::UX::Property__Fuse_Elements_CachingMode* value)
{
    __this->_Target = value;
}

void Change__Fuse_Elements_CachingMode__set_Value(Change__Fuse_Elements_CachingMode* __this, int value)
{
    if (__this->IsContinuous())
    {
        __this->_vectorValue = ::uPtr< ::app::Fuse::Animations::Converter__Fuse_Elements_CachingMode*>(__this->ContinuousConverter)->In(value);
    }
    else
    {
        __this->_objectValue = ::uBox< int>(::app::Fuse::Elements::CachingMode__typeof(), value);
    }
}

void Change__Fuse_Elements_CachingMode__set_X(Change__Fuse_Elements_CachingMode* __this, float value)
{
    __this->_vectorValue.X = value;
}

void Change__Fuse_Elements_CachingMode__set_XY(Change__Fuse_Elements_CachingMode* __this, ::app::Uno::Float2 value)
{
    __this->_vectorValue = ::app::Uno::Float4__New_6(NULL, value, __this->_vectorValue.Z, __this->_vectorValue.W);
}

void Change__Fuse_Elements_CachingMode__set_Y(Change__Fuse_Elements_CachingMode* __this, float value)
{
    __this->_vectorValue.Y = value;
}

void Change__Fuse_Elements_CachingMode__set_Z(Change__Fuse_Elements_CachingMode* __this, float value)
{
    __this->_vectorValue.Z = value;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Animations\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

Change__Fuse_Elements_Element__uType* Change__Fuse_Elements_Element__typeof()
{
    static ::uStaticStrong<Change__Fuse_Elements_Element__uType*> type;
    if (type != NULL) return type;

    type = (Change__Fuse_Elements_Element__uType*)::uAllocClassType(sizeof(Change__Fuse_Elements_Element__uType), "Fuse.Animations.Change<Fuse.Elements.Element>", false, 0, 2, 0);

    type->SetBaseType(::app::Fuse::Animations::TrackAnimator__typeof());
    type->__fp_CreateState = (::app::Fuse::Animations::AnimatorState*(*)(::app::Fuse::Animations::Animator*, ::app::Fuse::Animations::CreateStateParams*))Change__Fuse_Elements_Element__CreateState;

    type->SetStrongRefs(
        "_Target", offsetof(Change__Fuse_Elements_Element, _Target),
        "ContinuousConverter", offsetof(Change__Fuse_Elements_Element, ContinuousConverter));

    type->SetFields(1,
        ::uNewField("ContinuousConverter", NULL, offsetof(Change__Fuse_Elements_Element, ContinuousConverter), ::app::Fuse::Animations::Converter__Fuse_Elements_Element__typeof()));

    type->SetFunctions(22,
        ::uNewFunction("get_DegreesX", Change__Fuse_Elements_Element__get_DegreesX, 0, false, ::app::Uno::Float__typeof()),
        ::uNewFunction("get_DegreesXY", Change__Fuse_Elements_Element__get_DegreesXY, 0, false, ::app::Uno::Float2__typeof()),
        ::uNewFunction("get_DegreesY", Change__Fuse_Elements_Element__get_DegreesY, 0, false, ::app::Uno::Float__typeof()),
        ::uNewFunction("get_DegreesZ", Change__Fuse_Elements_Element__get_DegreesZ, 0, false, ::app::Uno::Float__typeof()),
        ::uNewFunction("get_IsContinuous", Change__Fuse_Elements_Element__get_IsContinuous, 0, false, ::app::Uno::Bool__typeof()),
        ::uNewFunction("get_Target", Change__Fuse_Elements_Element__get_Target, 0, false, ::app::Uno::UX::Property__Fuse_Elements_Element__typeof()),
        ::uNewFunction("get_Value", Change__Fuse_Elements_Element__get_Value, 0, false, ::app::Fuse::Elements::Element__typeof()),
        ::uNewFunction("get_X", Change__Fuse_Elements_Element__get_X, 0, false, ::app::Uno::Float__typeof()),
        ::uNewFunction("get_XY", Change__Fuse_Elements_Element__get_XY, 0, false, ::app::Uno::Float2__typeof()),
        ::uNewFunction("get_Y", Change__Fuse_Elements_Element__get_Y, 0, false, ::app::Uno::Float__typeof()),
        ::uNewFunction("get_Z", Change__Fuse_Elements_Element__get_Z, 0, false, ::app::Uno::Float__typeof()),
        ::uNewFunction(".ctor", Change__Fuse_Elements_Element__New_1, 0, true, Change__Fuse_Elements_Element__typeof(), ::app::Uno::UX::Property__Fuse_Elements_Element__typeof()),
        ::uNewFunctionVoid("set_DegreesX", Change__Fuse_Elements_Element__set_DegreesX, 0, false, ::app::Uno::Float__typeof()),
        ::uNewFunctionVoid("set_DegreesXY", Change__Fuse_Elements_Element__set_DegreesXY, 0, false, ::app::Uno::Float2__typeof()),
        ::uNewFunctionVoid("set_DegreesY", Change__Fuse_Elements_Element__set_DegreesY, 0, false, ::app::Uno::Float__typeof()),
        ::uNewFunctionVoid("set_DegreesZ", Change__Fuse_Elements_Element__set_DegreesZ, 0, false, ::app::Uno::Float__typeof()),
        ::uNewFunctionVoid("set_Target", Change__Fuse_Elements_Element__set_Target, 0, false, ::app::Uno::UX::Property__Fuse_Elements_Element__typeof()),
        ::uNewFunctionVoid("set_Value", Change__Fuse_Elements_Element__set_Value, 0, false, ::app::Fuse::Elements::Element__typeof()),
        ::uNewFunctionVoid("set_X", Change__Fuse_Elements_Element__set_X, 0, false, ::app::Uno::Float__typeof()),
        ::uNewFunctionVoid("set_XY", Change__Fuse_Elements_Element__set_XY, 0, false, ::app::Uno::Float2__typeof()),
        ::uNewFunctionVoid("set_Y", Change__Fuse_Elements_Element__set_Y, 0, false, ::app::Uno::Float__typeof()),
        ::uNewFunctionVoid("set_Z", Change__Fuse_Elements_Element__set_Z, 0, false, ::app::Uno::Float__typeof()));

    ::uRegisterType(type);
    return type;
}

void Change__Fuse_Elements_Element___ObjInit_2(Change__Fuse_Elements_Element* __this, ::app::Uno::UX::Property__Fuse_Elements_Element* target)
{
    ::app::Fuse::Animations::TrackAnimator___ObjInit_1(__this);

    if (target == NULL)
    {
        U_THROW(::app::Uno::ArgumentNullException__New_5(NULL, ::uGetConstString("target")));
    }

    __this->Target(target);

    if (__this->IsContinuous())
    {
        ::uObject* v;

        if ((::uType*)::app::Fuse::Elements::Element__typeof() == (::uType*)::app::Uno::Float__typeof())
        {
            v = (::uObject*)::app::Fuse::Animations::ConverterFloat__Singleton;
        }
        else if ((::uType*)::app::Fuse::Elements::Element__typeof() == (::uType*)::app::Uno::Float2__typeof())
        {
            v = (::uObject*)::app::Fuse::Animations::ConverterFloat2__Singleton;
        }
        else if ((::uType*)::app::Fuse::Elements::Element__typeof() == (::uType*)::app::Uno::Float3__typeof())
        {
            v = (::uObject*)::app::Fuse::Animations::ConverterFloat3__Singleton;
        }
        else if ((::uType*)::app::Fuse::Elements::Element__typeof() == (::uType*)::app::Uno::Float4__typeof())
        {
            v = (::uObject*)::app::Fuse::Animations::ConverterFloat4__Singleton;
        }
        else if ((::uType*)::app::Fuse::Elements::Element__typeof() == (::uType*)::app::Uno::Double__typeof())
        {
            v = (::uObject*)::app::Fuse::Animations::ConverterDouble__Singleton;
        }
        else
        {
            U_THROW(::app::Uno::Exception__New_2(NULL, ::app::Uno::String__op_Addition_1(NULL, ::uGetConstString("Unsupported change type: "), (::uObject*)(::uType*)::app::Fuse::Elements::Element__typeof())));
        }

        __this->ContinuousConverter = ::uCast< ::app::Fuse::Animations::Converter__Fuse_Elements_Element*>(v, ::app::Fuse::Animations::Converter__Fuse_Elements_Element__typeof());
    }
    else
    {
        __this->Mixer = ::app::Fuse::Animations::Mixer__get_DefaultDiscrete(NULL);
        __this->MarkDiscrete();
    }
}

::app::Fuse::Animations::AnimatorState* Change__Fuse_Elements_Element__CreateState(Change__Fuse_Elements_Element* __this, ::app::Fuse::Animations::CreateStateParams* p)
{
    if (__this->IsContinuous())
    {
        return (::app::Fuse::Animations::AnimatorState*)::app::Fuse::Animations::ContinuousTrackChangeState__Fuse_Elements_Element__New_1(NULL, __this, p);
    }

    return (::app::Fuse::Animations::AnimatorState*)::app::Fuse::Animations::DiscreteTrackChangeState__Fuse_Elements_Element__New_1(NULL, __this, p);
}

float Change__Fuse_Elements_Element__get_DegreesX(Change__Fuse_Elements_Element* __this)
{
    return ::app::Uno::Math__RadiansToDegrees_1(NULL, __this->X());
}

::app::Uno::Float2 Change__Fuse_Elements_Element__get_DegreesXY(Change__Fuse_Elements_Element* __this)
{
    return ::app::Uno::Float2__New_2(NULL, ::app::Uno::Math__RadiansToDegrees_1(NULL, __this->X()), ::app::Uno::Math__RadiansToDegrees_1(NULL, __this->Y()));
}

float Change__Fuse_Elements_Element__get_DegreesY(Change__Fuse_Elements_Element* __this)
{
    return ::app::Uno::Math__RadiansToDegrees_1(NULL, __this->Y());
}

float Change__Fuse_Elements_Element__get_DegreesZ(Change__Fuse_Elements_Element* __this)
{
    return ::app::Uno::Math__RadiansToDegrees_1(NULL, __this->Y());
}

bool Change__Fuse_Elements_Element__get_IsContinuous(Change__Fuse_Elements_Element* __this)
{
    return (((((::uType*)::app::Fuse::Elements::Element__typeof() == (::uType*)::app::Uno::Float__typeof()) || ((::uType*)::app::Fuse::Elements::Element__typeof() == (::uType*)::app::Uno::Float2__typeof())) || ((::uType*)::app::Fuse::Elements::Element__typeof() == (::uType*)::app::Uno::Float3__typeof())) || ((::uType*)::app::Fuse::Elements::Element__typeof() == (::uType*)::app::Uno::Float4__typeof())) || ((::uType*)::app::Fuse::Elements::Element__typeof() == (::uType*)::app::Uno::Double__typeof());
}

::app::Uno::UX::Property__Fuse_Elements_Element* Change__Fuse_Elements_Element__get_Target(Change__Fuse_Elements_Element* __this)
{
    return __this->_Target;
}

::app::Fuse::Elements::Element* Change__Fuse_Elements_Element__get_Value(Change__Fuse_Elements_Element* __this)
{
    return __this->IsContinuous() ? ::uPtr< ::app::Fuse::Animations::Converter__Fuse_Elements_Element*>(__this->ContinuousConverter)->Out(__this->_vectorValue) : ::uCast< ::app::Fuse::Elements::Element*>(__this->_objectValue, ::app::Fuse::Elements::Element__typeof());
}

float Change__Fuse_Elements_Element__get_X(Change__Fuse_Elements_Element* __this)
{
    return __this->_vectorValue.X;
}

::app::Uno::Float2 Change__Fuse_Elements_Element__get_XY(Change__Fuse_Elements_Element* __this)
{
    ::app::Uno::Float4 ind_123 = __this->_vectorValue;
    return ::app::Uno::Float2__New_2(NULL, ind_123.X, ind_123.Y);
}

float Change__Fuse_Elements_Element__get_Y(Change__Fuse_Elements_Element* __this)
{
    return __this->_vectorValue.Y;
}

float Change__Fuse_Elements_Element__get_Z(Change__Fuse_Elements_Element* __this)
{
    return __this->_vectorValue.Z;
}

Change__Fuse_Elements_Element* Change__Fuse_Elements_Element__New_1(::uStatic* __this, ::app::Uno::UX::Property__Fuse_Elements_Element* target)
{
    Change__Fuse_Elements_Element* inst = (Change__Fuse_Elements_Element*)::uAllocObject(sizeof(Change__Fuse_Elements_Element), Change__Fuse_Elements_Element__typeof());
    inst->_ObjInit_2(target);
    return inst;
}

void Change__Fuse_Elements_Element__set_DegreesX(Change__Fuse_Elements_Element* __this, float value)
{
    __this->X(::app::Uno::Math__DegreesToRadians_1(NULL, value));
}

void Change__Fuse_Elements_Element__set_DegreesXY(Change__Fuse_Elements_Element* __this, ::app::Uno::Float2 value)
{
    __this->XY(::app::Uno::Float2__New_2(NULL, ::app::Uno::Math__DegreesToRadians_1(NULL, value.X), ::app::Uno::Math__DegreesToRadians_1(NULL, value.Y)));
}

void Change__Fuse_Elements_Element__set_DegreesY(Change__Fuse_Elements_Element* __this, float value)
{
    __this->Y(::app::Uno::Math__DegreesToRadians_1(NULL, value));
}

void Change__Fuse_Elements_Element__set_DegreesZ(Change__Fuse_Elements_Element* __this, float value)
{
    __this->Y(::app::Uno::Math__DegreesToRadians_1(NULL, value));
}

void Change__Fuse_Elements_Element__set_Target(Change__Fuse_Elements_Element* __this, ::app::Uno::UX::Property__Fuse_Elements_Element* value)
{
    __this->_Target = value;
}

void Change__Fuse_Elements_Element__set_Value(Change__Fuse_Elements_Element* __this, ::app::Fuse::Elements::Element* value)
{
    if (__this->IsContinuous())
    {
        __this->_vectorValue = ::uPtr< ::app::Fuse::Animations::Converter__Fuse_Elements_Element*>(__this->ContinuousConverter)->In(value);
    }
    else
    {
        __this->_objectValue = (::uObject*)value;
    }
}

void Change__Fuse_Elements_Element__set_X(Change__Fuse_Elements_Element* __this, float value)
{
    __this->_vectorValue.X = value;
}

void Change__Fuse_Elements_Element__set_XY(Change__Fuse_Elements_Element* __this, ::app::Uno::Float2 value)
{
    __this->_vectorValue = ::app::Uno::Float4__New_6(NULL, value, __this->_vectorValue.Z, __this->_vectorValue.W);
}

void Change__Fuse_Elements_Element__set_Y(Change__Fuse_Elements_Element* __this, float value)
{
    __this->_vectorValue.Y = value;
}

void Change__Fuse_Elements_Element__set_Z(Change__Fuse_Elements_Element* __this, float value)
{
    __this->_vectorValue.Z = value;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Animations\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

Change__Fuse_Elements_HitTestMode__uType* Change__Fuse_Elements_HitTestMode__typeof()
{
    static ::uStaticStrong<Change__Fuse_Elements_HitTestMode__uType*> type;
    if (type != NULL) return type;

    type = (Change__Fuse_Elements_HitTestMode__uType*)::uAllocClassType(sizeof(Change__Fuse_Elements_HitTestMode__uType), "Fuse.Animations.Change<Fuse.Elements.HitTestMode>", false, 0, 2, 0);

    type->SetBaseType(::app::Fuse::Animations::TrackAnimator__typeof());
    type->__fp_CreateState = (::app::Fuse::Animations::AnimatorState*(*)(::app::Fuse::Animations::Animator*, ::app::Fuse::Animations::CreateStateParams*))Change__Fuse_Elements_HitTestMode__CreateState;

    type->SetStrongRefs(
        "_Target", offsetof(Change__Fuse_Elements_HitTestMode, _Target),
        "ContinuousConverter", offsetof(Change__Fuse_Elements_HitTestMode, ContinuousConverter));

    type->SetFields(1,
        ::uNewField("ContinuousConverter", NULL, offsetof(Change__Fuse_Elements_HitTestMode, ContinuousConverter), ::app::Fuse::Animations::Converter__Fuse_Elements_HitTestMode__typeof()));

    type->SetFunctions(22,
        ::uNewFunction("get_DegreesX", Change__Fuse_Elements_HitTestMode__get_DegreesX, 0, false, ::app::Uno::Float__typeof()),
        ::uNewFunction("get_DegreesXY", Change__Fuse_Elements_HitTestMode__get_DegreesXY, 0, false, ::app::Uno::Float2__typeof()),
        ::uNewFunction("get_DegreesY", Change__Fuse_Elements_HitTestMode__get_DegreesY, 0, false, ::app::Uno::Float__typeof()),
        ::uNewFunction("get_DegreesZ", Change__Fuse_Elements_HitTestMode__get_DegreesZ, 0, false, ::app::Uno::Float__typeof()),
        ::uNewFunction("get_IsContinuous", Change__Fuse_Elements_HitTestMode__get_IsContinuous, 0, false, ::app::Uno::Bool__typeof()),
        ::uNewFunction("get_Target", Change__Fuse_Elements_HitTestMode__get_Target, 0, false, ::app::Uno::UX::Property__Fuse_Elements_HitTestMode__typeof()),
        ::uNewFunction("get_Value", Change__Fuse_Elements_HitTestMode__get_Value, 0, false, ::app::Fuse::Elements::HitTestMode__typeof()),
        ::uNewFunction("get_X", Change__Fuse_Elements_HitTestMode__get_X, 0, false, ::app::Uno::Float__typeof()),
        ::uNewFunction("get_XY", Change__Fuse_Elements_HitTestMode__get_XY, 0, false, ::app::Uno::Float2__typeof()),
        ::uNewFunction("get_Y", Change__Fuse_Elements_HitTestMode__get_Y, 0, false, ::app::Uno::Float__typeof()),
        ::uNewFunction("get_Z", Change__Fuse_Elements_HitTestMode__get_Z, 0, false, ::app::Uno::Float__typeof()),
        ::uNewFunction(".ctor", Change__Fuse_Elements_HitTestMode__New_1, 0, true, Change__Fuse_Elements_HitTestMode__typeof(), ::app::Uno::UX::Property__Fuse_Elements_HitTestMode__typeof()),
        ::uNewFunctionVoid("set_DegreesX", Change__Fuse_Elements_HitTestMode__set_DegreesX, 0, false, ::app::Uno::Float__typeof()),
        ::uNewFunctionVoid("set_DegreesXY", Change__Fuse_Elements_HitTestMode__set_DegreesXY, 0, false, ::app::Uno::Float2__typeof()),
        ::uNewFunctionVoid("set_DegreesY", Change__Fuse_Elements_HitTestMode__set_DegreesY, 0, false, ::app::Uno::Float__typeof()),
        ::uNewFunctionVoid("set_DegreesZ", Change__Fuse_Elements_HitTestMode__set_DegreesZ, 0, false, ::app::Uno::Float__typeof()),
        ::uNewFunctionVoid("set_Target", Change__Fuse_Elements_HitTestMode__set_Target, 0, false, ::app::Uno::UX::Property__Fuse_Elements_HitTestMode__typeof()),
        ::uNewFunctionVoid("set_Value", Change__Fuse_Elements_HitTestMode__set_Value, 0, false, ::app::Fuse::Elements::HitTestMode__typeof()),
        ::uNewFunctionVoid("set_X", Change__Fuse_Elements_HitTestMode__set_X, 0, false, ::app::Uno::Float__typeof()),
        ::uNewFunctionVoid("set_XY", Change__Fuse_Elements_HitTestMode__set_XY, 0, false, ::app::Uno::Float2__typeof()),
        ::uNewFunctionVoid("set_Y", Change__Fuse_Elements_HitTestMode__set_Y, 0, false, ::app::Uno::Float__typeof()),
        ::uNewFunctionVoid("set_Z", Change__Fuse_Elements_HitTestMode__set_Z, 0, false, ::app::Uno::Float__typeof()));

    ::uRegisterType(type);
    return type;
}

void Change__Fuse_Elements_HitTestMode___ObjInit_2(Change__Fuse_Elements_HitTestMode* __this, ::app::Uno::UX::Property__Fuse_Elements_HitTestMode* target)
{
    ::app::Fuse::Animations::TrackAnimator___ObjInit_1(__this);

    if (target == NULL)
    {
        U_THROW(::app::Uno::ArgumentNullException__New_5(NULL, ::uGetConstString("target")));
    }

    __this->Target(target);

    if (__this->IsContinuous())
    {
        ::uObject* v;

        if ((::uType*)::app::Fuse::Elements::HitTestMode__typeof() == (::uType*)::app::Uno::Float__typeof())
        {
            v = (::uObject*)::app::Fuse::Animations::ConverterFloat__Singleton;
        }
        else if ((::uType*)::app::Fuse::Elements::HitTestMode__typeof() == (::uType*)::app::Uno::Float2__typeof())
        {
            v = (::uObject*)::app::Fuse::Animations::ConverterFloat2__Singleton;
        }
        else if ((::uType*)::app::Fuse::Elements::HitTestMode__typeof() == (::uType*)::app::Uno::Float3__typeof())
        {
            v = (::uObject*)::app::Fuse::Animations::ConverterFloat3__Singleton;
        }
        else if ((::uType*)::app::Fuse::Elements::HitTestMode__typeof() == (::uType*)::app::Uno::Float4__typeof())
        {
            v = (::uObject*)::app::Fuse::Animations::ConverterFloat4__Singleton;
        }
        else if ((::uType*)::app::Fuse::Elements::HitTestMode__typeof() == (::uType*)::app::Uno::Double__typeof())
        {
            v = (::uObject*)::app::Fuse::Animations::ConverterDouble__Singleton;
        }
        else
        {
            U_THROW(::app::Uno::Exception__New_2(NULL, ::app::Uno::String__op_Addition_1(NULL, ::uGetConstString("Unsupported change type: "), (::uObject*)(::uType*)::app::Fuse::Elements::HitTestMode__typeof())));
        }

        __this->ContinuousConverter = ::uCast< ::app::Fuse::Animations::Converter__Fuse_Elements_HitTestMode*>(v, ::app::Fuse::Animations::Converter__Fuse_Elements_HitTestMode__typeof());
    }
    else
    {
        __this->Mixer = ::app::Fuse::Animations::Mixer__get_DefaultDiscrete(NULL);
        __this->MarkDiscrete();
    }
}

::app::Fuse::Animations::AnimatorState* Change__Fuse_Elements_HitTestMode__CreateState(Change__Fuse_Elements_HitTestMode* __this, ::app::Fuse::Animations::CreateStateParams* p)
{
    if (__this->IsContinuous())
    {
        return (::app::Fuse::Animations::AnimatorState*)::app::Fuse::Animations::ContinuousTrackChangeState__Fuse_Elements_HitTestMode__New_1(NULL, __this, p);
    }

    return (::app::Fuse::Animations::AnimatorState*)::app::Fuse::Animations::DiscreteTrackChangeState__Fuse_Elements_HitTestMode__New_1(NULL, __this, p);
}

float Change__Fuse_Elements_HitTestMode__get_DegreesX(Change__Fuse_Elements_HitTestMode* __this)
{
    return ::app::Uno::Math__RadiansToDegrees_1(NULL, __this->X());
}

::app::Uno::Float2 Change__Fuse_Elements_HitTestMode__get_DegreesXY(Change__Fuse_Elements_HitTestMode* __this)
{
    return ::app::Uno::Float2__New_2(NULL, ::app::Uno::Math__RadiansToDegrees_1(NULL, __this->X()), ::app::Uno::Math__RadiansToDegrees_1(NULL, __this->Y()));
}

float Change__Fuse_Elements_HitTestMode__get_DegreesY(Change__Fuse_Elements_HitTestMode* __this)
{
    return ::app::Uno::Math__RadiansToDegrees_1(NULL, __this->Y());
}

float Change__Fuse_Elements_HitTestMode__get_DegreesZ(Change__Fuse_Elements_HitTestMode* __this)
{
    return ::app::Uno::Math__RadiansToDegrees_1(NULL, __this->Y());
}

bool Change__Fuse_Elements_HitTestMode__get_IsContinuous(Change__Fuse_Elements_HitTestMode* __this)
{
    return (((((::uType*)::app::Fuse::Elements::HitTestMode__typeof() == (::uType*)::app::Uno::Float__typeof()) || ((::uType*)::app::Fuse::Elements::HitTestMode__typeof() == (::uType*)::app::Uno::Float2__typeof())) || ((::uType*)::app::Fuse::Elements::HitTestMode__typeof() == (::uType*)::app::Uno::Float3__typeof())) || ((::uType*)::app::Fuse::Elements::HitTestMode__typeof() == (::uType*)::app::Uno::Float4__typeof())) || ((::uType*)::app::Fuse::Elements::HitTestMode__typeof() == (::uType*)::app::Uno::Double__typeof());
}

::app::Uno::UX::Property__Fuse_Elements_HitTestMode* Change__Fuse_Elements_HitTestMode__get_Target(Change__Fuse_Elements_HitTestMode* __this)
{
    return __this->_Target;
}

int Change__Fuse_Elements_HitTestMode__get_Value(Change__Fuse_Elements_HitTestMode* __this)
{
    return __this->IsContinuous() ? ::uPtr< ::app::Fuse::Animations::Converter__Fuse_Elements_HitTestMode*>(__this->ContinuousConverter)->Out(__this->_vectorValue) : ::uUnbox< int>(::app::Fuse::Elements::HitTestMode__typeof(), __this->_objectValue);
}

float Change__Fuse_Elements_HitTestMode__get_X(Change__Fuse_Elements_HitTestMode* __this)
{
    return __this->_vectorValue.X;
}

::app::Uno::Float2 Change__Fuse_Elements_HitTestMode__get_XY(Change__Fuse_Elements_HitTestMode* __this)
{
    ::app::Uno::Float4 ind_123 = __this->_vectorValue;
    return ::app::Uno::Float2__New_2(NULL, ind_123.X, ind_123.Y);
}

float Change__Fuse_Elements_HitTestMode__get_Y(Change__Fuse_Elements_HitTestMode* __this)
{
    return __this->_vectorValue.Y;
}

float Change__Fuse_Elements_HitTestMode__get_Z(Change__Fuse_Elements_HitTestMode* __this)
{
    return __this->_vectorValue.Z;
}

Change__Fuse_Elements_HitTestMode* Change__Fuse_Elements_HitTestMode__New_1(::uStatic* __this, ::app::Uno::UX::Property__Fuse_Elements_HitTestMode* target)
{
    Change__Fuse_Elements_HitTestMode* inst = (Change__Fuse_Elements_HitTestMode*)::uAllocObject(sizeof(Change__Fuse_Elements_HitTestMode), Change__Fuse_Elements_HitTestMode__typeof());
    inst->_ObjInit_2(target);
    return inst;
}

void Change__Fuse_Elements_HitTestMode__set_DegreesX(Change__Fuse_Elements_HitTestMode* __this, float value)
{
    __this->X(::app::Uno::Math__DegreesToRadians_1(NULL, value));
}

void Change__Fuse_Elements_HitTestMode__set_DegreesXY(Change__Fuse_Elements_HitTestMode* __this, ::app::Uno::Float2 value)
{
    __this->XY(::app::Uno::Float2__New_2(NULL, ::app::Uno::Math__DegreesToRadians_1(NULL, value.X), ::app::Uno::Math__DegreesToRadians_1(NULL, value.Y)));
}

void Change__Fuse_Elements_HitTestMode__set_DegreesY(Change__Fuse_Elements_HitTestMode* __this, float value)
{
    __this->Y(::app::Uno::Math__DegreesToRadians_1(NULL, value));
}

void Change__Fuse_Elements_HitTestMode__set_DegreesZ(Change__Fuse_Elements_HitTestMode* __this, float value)
{
    __this->Y(::app::Uno::Math__DegreesToRadians_1(NULL, value));
}

void Change__Fuse_Elements_HitTestMode__set_Target(Change__Fuse_Elements_HitTestMode* __this, ::app::Uno::UX::Property__Fuse_Elements_HitTestMode* value)
{
    __this->_Target = value;
}

void Change__Fuse_Elements_HitTestMode__set_Value(Change__Fuse_Elements_HitTestMode* __this, int value)
{
    if (__this->IsContinuous())
    {
        __this->_vectorValue = ::uPtr< ::app::Fuse::Animations::Converter__Fuse_Elements_HitTestMode*>(__this->ContinuousConverter)->In(value);
    }
    else
    {
        __this->_objectValue = ::uBox< int>(::app::Fuse::Elements::HitTestMode__typeof(), value);
    }
}

void Change__Fuse_Elements_HitTestMode__set_X(Change__Fuse_Elements_HitTestMode* __this, float value)
{
    __this->_vectorValue.X = value;
}

void Change__Fuse_Elements_HitTestMode__set_XY(Change__Fuse_Elements_HitTestMode* __this, ::app::Uno::Float2 value)
{
    __this->_vectorValue = ::app::Uno::Float4__New_6(NULL, value, __this->_vectorValue.Z, __this->_vectorValue.W);
}

void Change__Fuse_Elements_HitTestMode__set_Y(Change__Fuse_Elements_HitTestMode* __this, float value)
{
    __this->_vectorValue.Y = value;
}

void Change__Fuse_Elements_HitTestMode__set_Z(Change__Fuse_Elements_HitTestMode* __this, float value)
{
    __this->_vectorValue.Z = value;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Animations\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

Change__Fuse_Elements_SizeUnit__uType* Change__Fuse_Elements_SizeUnit__typeof()
{
    static ::uStaticStrong<Change__Fuse_Elements_SizeUnit__uType*> type;
    if (type != NULL) return type;

    type = (Change__Fuse_Elements_SizeUnit__uType*)::uAllocClassType(sizeof(Change__Fuse_Elements_SizeUnit__uType), "Fuse.Animations.Change<Fuse.Elements.SizeUnit>", false, 0, 2, 0);

    type->SetBaseType(::app::Fuse::Animations::TrackAnimator__typeof());
    type->__fp_CreateState = (::app::Fuse::Animations::AnimatorState*(*)(::app::Fuse::Animations::Animator*, ::app::Fuse::Animations::CreateStateParams*))Change__Fuse_Elements_SizeUnit__CreateState;

    type->SetStrongRefs(
        "_Target", offsetof(Change__Fuse_Elements_SizeUnit, _Target),
        "ContinuousConverter", offsetof(Change__Fuse_Elements_SizeUnit, ContinuousConverter));

    type->SetFields(1,
        ::uNewField("ContinuousConverter", NULL, offsetof(Change__Fuse_Elements_SizeUnit, ContinuousConverter), ::app::Fuse::Animations::Converter__Fuse_Elements_SizeUnit__typeof()));

    type->SetFunctions(22,
        ::uNewFunction("get_DegreesX", Change__Fuse_Elements_SizeUnit__get_DegreesX, 0, false, ::app::Uno::Float__typeof()),
        ::uNewFunction("get_DegreesXY", Change__Fuse_Elements_SizeUnit__get_DegreesXY, 0, false, ::app::Uno::Float2__typeof()),
        ::uNewFunction("get_DegreesY", Change__Fuse_Elements_SizeUnit__get_DegreesY, 0, false, ::app::Uno::Float__typeof()),
        ::uNewFunction("get_DegreesZ", Change__Fuse_Elements_SizeUnit__get_DegreesZ, 0, false, ::app::Uno::Float__typeof()),
        ::uNewFunction("get_IsContinuous", Change__Fuse_Elements_SizeUnit__get_IsContinuous, 0, false, ::app::Uno::Bool__typeof()),
        ::uNewFunction("get_Target", Change__Fuse_Elements_SizeUnit__get_Target, 0, false, ::app::Uno::UX::Property__Fuse_Elements_SizeUnit__typeof()),
        ::uNewFunction("get_Value", Change__Fuse_Elements_SizeUnit__get_Value, 0, false, ::app::Fuse::Elements::SizeUnit__typeof()),
        ::uNewFunction("get_X", Change__Fuse_Elements_SizeUnit__get_X, 0, false, ::app::Uno::Float__typeof()),
        ::uNewFunction("get_XY", Change__Fuse_Elements_SizeUnit__get_XY, 0, false, ::app::Uno::Float2__typeof()),
        ::uNewFunction("get_Y", Change__Fuse_Elements_SizeUnit__get_Y, 0, false, ::app::Uno::Float__typeof()),
        ::uNewFunction("get_Z", Change__Fuse_Elements_SizeUnit__get_Z, 0, false, ::app::Uno::Float__typeof()),
        ::uNewFunction(".ctor", Change__Fuse_Elements_SizeUnit__New_1, 0, true, Change__Fuse_Elements_SizeUnit__typeof(), ::app::Uno::UX::Property__Fuse_Elements_SizeUnit__typeof()),
        ::uNewFunctionVoid("set_DegreesX", Change__Fuse_Elements_SizeUnit__set_DegreesX, 0, false, ::app::Uno::Float__typeof()),
        ::uNewFunctionVoid("set_DegreesXY", Change__Fuse_Elements_SizeUnit__set_DegreesXY, 0, false, ::app::Uno::Float2__typeof()),
        ::uNewFunctionVoid("set_DegreesY", Change__Fuse_Elements_SizeUnit__set_DegreesY, 0, false, ::app::Uno::Float__typeof()),
        ::uNewFunctionVoid("set_DegreesZ", Change__Fuse_Elements_SizeUnit__set_DegreesZ, 0, false, ::app::Uno::Float__typeof()),
        ::uNewFunctionVoid("set_Target", Change__Fuse_Elements_SizeUnit__set_Target, 0, false, ::app::Uno::UX::Property__Fuse_Elements_SizeUnit__typeof()),
        ::uNewFunctionVoid("set_Value", Change__Fuse_Elements_SizeUnit__set_Value, 0, false, ::app::Fuse::Elements::SizeUnit__typeof()),
        ::uNewFunctionVoid("set_X", Change__Fuse_Elements_SizeUnit__set_X, 0, false, ::app::Uno::Float__typeof()),
        ::uNewFunctionVoid("set_XY", Change__Fuse_Elements_SizeUnit__set_XY, 0, false, ::app::Uno::Float2__typeof()),
        ::uNewFunctionVoid("set_Y", Change__Fuse_Elements_SizeUnit__set_Y, 0, false, ::app::Uno::Float__typeof()),
        ::uNewFunctionVoid("set_Z", Change__Fuse_Elements_SizeUnit__set_Z, 0, false, ::app::Uno::Float__typeof()));

    ::uRegisterType(type);
    return type;
}

void Change__Fuse_Elements_SizeUnit___ObjInit_2(Change__Fuse_Elements_SizeUnit* __this, ::app::Uno::UX::Property__Fuse_Elements_SizeUnit* target)
{
    ::app::Fuse::Animations::TrackAnimator___ObjInit_1(__this);

    if (target == NULL)
    {
        U_THROW(::app::Uno::ArgumentNullException__New_5(NULL, ::uGetConstString("target")));
    }

    __this->Target(target);

    if (__this->IsContinuous())
    {
        ::uObject* v;

        if ((::uType*)::app::Fuse::Elements::SizeUnit__typeof() == (::uType*)::app::Uno::Float__typeof())
        {
            v = (::uObject*)::app::Fuse::Animations::ConverterFloat__Singleton;
        }
        else if ((::uType*)::app::Fuse::Elements::SizeUnit__typeof() == (::uType*)::app::Uno::Float2__typeof())
        {
            v = (::uObject*)::app::Fuse::Animations::ConverterFloat2__Singleton;
        }
        else if ((::uType*)::app::Fuse::Elements::SizeUnit__typeof() == (::uType*)::app::Uno::Float3__typeof())
        {
            v = (::uObject*)::app::Fuse::Animations::ConverterFloat3__Singleton;
        }
        else if ((::uType*)::app::Fuse::Elements::SizeUnit__typeof() == (::uType*)::app::Uno::Float4__typeof())
        {
            v = (::uObject*)::app::Fuse::Animations::ConverterFloat4__Singleton;
        }
        else if ((::uType*)::app::Fuse::Elements::SizeUnit__typeof() == (::uType*)::app::Uno::Double__typeof())
        {
            v = (::uObject*)::app::Fuse::Animations::ConverterDouble__Singleton;
        }
        else
        {
            U_THROW(::app::Uno::Exception__New_2(NULL, ::app::Uno::String__op_Addition_1(NULL, ::uGetConstString("Unsupported change type: "), (::uObject*)(::uType*)::app::Fuse::Elements::SizeUnit__typeof())));
        }

        __this->ContinuousConverter = ::uCast< ::app::Fuse::Animations::Converter__Fuse_Elements_SizeUnit*>(v, ::app::Fuse::Animations::Converter__Fuse_Elements_SizeUnit__typeof());
    }
    else
    {
        __this->Mixer = ::app::Fuse::Animations::Mixer__get_DefaultDiscrete(NULL);
        __this->MarkDiscrete();
    }
}

::app::Fuse::Animations::AnimatorState* Change__Fuse_Elements_SizeUnit__CreateState(Change__Fuse_Elements_SizeUnit* __this, ::app::Fuse::Animations::CreateStateParams* p)
{
    if (__this->IsContinuous())
    {
        return (::app::Fuse::Animations::AnimatorState*)::app::Fuse::Animations::ContinuousTrackChangeState__Fuse_Elements_SizeUnit__New_1(NULL, __this, p);
    }

    return (::app::Fuse::Animations::AnimatorState*)::app::Fuse::Animations::DiscreteTrackChangeState__Fuse_Elements_SizeUnit__New_1(NULL, __this, p);
}

float Change__Fuse_Elements_SizeUnit__get_DegreesX(Change__Fuse_Elements_SizeUnit* __this)
{
    return ::app::Uno::Math__RadiansToDegrees_1(NULL, __this->X());
}

::app::Uno::Float2 Change__Fuse_Elements_SizeUnit__get_DegreesXY(Change__Fuse_Elements_SizeUnit* __this)
{
    return ::app::Uno::Float2__New_2(NULL, ::app::Uno::Math__RadiansToDegrees_1(NULL, __this->X()), ::app::Uno::Math__RadiansToDegrees_1(NULL, __this->Y()));
}

float Change__Fuse_Elements_SizeUnit__get_DegreesY(Change__Fuse_Elements_SizeUnit* __this)
{
    return ::app::Uno::Math__RadiansToDegrees_1(NULL, __this->Y());
}

float Change__Fuse_Elements_SizeUnit__get_DegreesZ(Change__Fuse_Elements_SizeUnit* __this)
{
    return ::app::Uno::Math__RadiansToDegrees_1(NULL, __this->Y());
}

bool Change__Fuse_Elements_SizeUnit__get_IsContinuous(Change__Fuse_Elements_SizeUnit* __this)
{
    return (((((::uType*)::app::Fuse::Elements::SizeUnit__typeof() == (::uType*)::app::Uno::Float__typeof()) || ((::uType*)::app::Fuse::Elements::SizeUnit__typeof() == (::uType*)::app::Uno::Float2__typeof())) || ((::uType*)::app::Fuse::Elements::SizeUnit__typeof() == (::uType*)::app::Uno::Float3__typeof())) || ((::uType*)::app::Fuse::Elements::SizeUnit__typeof() == (::uType*)::app::Uno::Float4__typeof())) || ((::uType*)::app::Fuse::Elements::SizeUnit__typeof() == (::uType*)::app::Uno::Double__typeof());
}

::app::Uno::UX::Property__Fuse_Elements_SizeUnit* Change__Fuse_Elements_SizeUnit__get_Target(Change__Fuse_Elements_SizeUnit* __this)
{
    return __this->_Target;
}

int Change__Fuse_Elements_SizeUnit__get_Value(Change__Fuse_Elements_SizeUnit* __this)
{
    return __this->IsContinuous() ? ::uPtr< ::app::Fuse::Animations::Converter__Fuse_Elements_SizeUnit*>(__this->ContinuousConverter)->Out(__this->_vectorValue) : ::uUnbox< int>(::app::Fuse::Elements::SizeUnit__typeof(), __this->_objectValue);
}

float Change__Fuse_Elements_SizeUnit__get_X(Change__Fuse_Elements_SizeUnit* __this)
{
    return __this->_vectorValue.X;
}

::app::Uno::Float2 Change__Fuse_Elements_SizeUnit__get_XY(Change__Fuse_Elements_SizeUnit* __this)
{
    ::app::Uno::Float4 ind_123 = __this->_vectorValue;
    return ::app::Uno::Float2__New_2(NULL, ind_123.X, ind_123.Y);
}

float Change__Fuse_Elements_SizeUnit__get_Y(Change__Fuse_Elements_SizeUnit* __this)
{
    return __this->_vectorValue.Y;
}

float Change__Fuse_Elements_SizeUnit__get_Z(Change__Fuse_Elements_SizeUnit* __this)
{
    return __this->_vectorValue.Z;
}

Change__Fuse_Elements_SizeUnit* Change__Fuse_Elements_SizeUnit__New_1(::uStatic* __this, ::app::Uno::UX::Property__Fuse_Elements_SizeUnit* target)
{
    Change__Fuse_Elements_SizeUnit* inst = (Change__Fuse_Elements_SizeUnit*)::uAllocObject(sizeof(Change__Fuse_Elements_SizeUnit), Change__Fuse_Elements_SizeUnit__typeof());
    inst->_ObjInit_2(target);
    return inst;
}

void Change__Fuse_Elements_SizeUnit__set_DegreesX(Change__Fuse_Elements_SizeUnit* __this, float value)
{
    __this->X(::app::Uno::Math__DegreesToRadians_1(NULL, value));
}

void Change__Fuse_Elements_SizeUnit__set_DegreesXY(Change__Fuse_Elements_SizeUnit* __this, ::app::Uno::Float2 value)
{
    __this->XY(::app::Uno::Float2__New_2(NULL, ::app::Uno::Math__DegreesToRadians_1(NULL, value.X), ::app::Uno::Math__DegreesToRadians_1(NULL, value.Y)));
}

void Change__Fuse_Elements_SizeUnit__set_DegreesY(Change__Fuse_Elements_SizeUnit* __this, float value)
{
    __this->Y(::app::Uno::Math__DegreesToRadians_1(NULL, value));
}

void Change__Fuse_Elements_SizeUnit__set_DegreesZ(Change__Fuse_Elements_SizeUnit* __this, float value)
{
    __this->Y(::app::Uno::Math__DegreesToRadians_1(NULL, value));
}

void Change__Fuse_Elements_SizeUnit__set_Target(Change__Fuse_Elements_SizeUnit* __this, ::app::Uno::UX::Property__Fuse_Elements_SizeUnit* value)
{
    __this->_Target = value;
}

void Change__Fuse_Elements_SizeUnit__set_Value(Change__Fuse_Elements_SizeUnit* __this, int value)
{
    if (__this->IsContinuous())
    {
        __this->_vectorValue = ::uPtr< ::app::Fuse::Animations::Converter__Fuse_Elements_SizeUnit*>(__this->ContinuousConverter)->In(value);
    }
    else
    {
        __this->_objectValue = ::uBox< int>(::app::Fuse::Elements::SizeUnit__typeof(), value);
    }
}

void Change__Fuse_Elements_SizeUnit__set_X(Change__Fuse_Elements_SizeUnit* __this, float value)
{
    __this->_vectorValue.X = value;
}

void Change__Fuse_Elements_SizeUnit__set_XY(Change__Fuse_Elements_SizeUnit* __this, ::app::Uno::Float2 value)
{
    __this->_vectorValue = ::app::Uno::Float4__New_6(NULL, value, __this->_vectorValue.Z, __this->_vectorValue.W);
}

void Change__Fuse_Elements_SizeUnit__set_Y(Change__Fuse_Elements_SizeUnit* __this, float value)
{
    __this->_vectorValue.Y = value;
}

void Change__Fuse_Elements_SizeUnit__set_Z(Change__Fuse_Elements_SizeUnit* __this, float value)
{
    __this->_vectorValue.Z = value;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Animations\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

Change__Fuse_Elements_StretchDirection__uType* Change__Fuse_Elements_StretchDirection__typeof()
{
    static ::uStaticStrong<Change__Fuse_Elements_StretchDirection__uType*> type;
    if (type != NULL) return type;

    type = (Change__Fuse_Elements_StretchDirection__uType*)::uAllocClassType(sizeof(Change__Fuse_Elements_StretchDirection__uType), "Fuse.Animations.Change<Fuse.Elements.StretchDirection>", false, 0, 2, 0);

    type->SetBaseType(::app::Fuse::Animations::TrackAnimator__typeof());
    type->__fp_CreateState = (::app::Fuse::Animations::AnimatorState*(*)(::app::Fuse::Animations::Animator*, ::app::Fuse::Animations::CreateStateParams*))Change__Fuse_Elements_StretchDirection__CreateState;

    type->SetStrongRefs(
        "_Target", offsetof(Change__Fuse_Elements_StretchDirection, _Target),
        "ContinuousConverter", offsetof(Change__Fuse_Elements_StretchDirection, ContinuousConverter));

    type->SetFields(1,
        ::uNewField("ContinuousConverter", NULL, offsetof(Change__Fuse_Elements_StretchDirection, ContinuousConverter), ::app::Fuse::Animations::Converter__Fuse_Elements_StretchDirection__typeof()));

    type->SetFunctions(22,
        ::uNewFunction("get_DegreesX", Change__Fuse_Elements_StretchDirection__get_DegreesX, 0, false, ::app::Uno::Float__typeof()),
        ::uNewFunction("get_DegreesXY", Change__Fuse_Elements_StretchDirection__get_DegreesXY, 0, false, ::app::Uno::Float2__typeof()),
        ::uNewFunction("get_DegreesY", Change__Fuse_Elements_StretchDirection__get_DegreesY, 0, false, ::app::Uno::Float__typeof()),
        ::uNewFunction("get_DegreesZ", Change__Fuse_Elements_StretchDirection__get_DegreesZ, 0, false, ::app::Uno::Float__typeof()),
        ::uNewFunction("get_IsContinuous", Change__Fuse_Elements_StretchDirection__get_IsContinuous, 0, false, ::app::Uno::Bool__typeof()),
        ::uNewFunction("get_Target", Change__Fuse_Elements_StretchDirection__get_Target, 0, false, ::app::Uno::UX::Property__Fuse_Elements_StretchDirection__typeof()),
        ::uNewFunction("get_Value", Change__Fuse_Elements_StretchDirection__get_Value, 0, false, ::app::Fuse::Elements::StretchDirection__typeof()),
        ::uNewFunction("get_X", Change__Fuse_Elements_StretchDirection__get_X, 0, false, ::app::Uno::Float__typeof()),
        ::uNewFunction("get_XY", Change__Fuse_Elements_StretchDirection__get_XY, 0, false, ::app::Uno::Float2__typeof()),
        ::uNewFunction("get_Y", Change__Fuse_Elements_StretchDirection__get_Y, 0, false, ::app::Uno::Float__typeof()),
        ::uNewFunction("get_Z", Change__Fuse_Elements_StretchDirection__get_Z, 0, false, ::app::Uno::Float__typeof()),
        ::uNewFunction(".ctor", Change__Fuse_Elements_StretchDirection__New_1, 0, true, Change__Fuse_Elements_StretchDirection__typeof(), ::app::Uno::UX::Property__Fuse_Elements_StretchDirection__typeof()),
        ::uNewFunctionVoid("set_DegreesX", Change__Fuse_Elements_StretchDirection__set_DegreesX, 0, false, ::app::Uno::Float__typeof()),
        ::uNewFunctionVoid("set_DegreesXY", Change__Fuse_Elements_StretchDirection__set_DegreesXY, 0, false, ::app::Uno::Float2__typeof()),
        ::uNewFunctionVoid("set_DegreesY", Change__Fuse_Elements_StretchDirection__set_DegreesY, 0, false, ::app::Uno::Float__typeof()),
        ::uNewFunctionVoid("set_DegreesZ", Change__Fuse_Elements_StretchDirection__set_DegreesZ, 0, false, ::app::Uno::Float__typeof()),
        ::uNewFunctionVoid("set_Target", Change__Fuse_Elements_StretchDirection__set_Target, 0, false, ::app::Uno::UX::Property__Fuse_Elements_StretchDirection__typeof()),
        ::uNewFunctionVoid("set_Value", Change__Fuse_Elements_StretchDirection__set_Value, 0, false, ::app::Fuse::Elements::StretchDirection__typeof()),
        ::uNewFunctionVoid("set_X", Change__Fuse_Elements_StretchDirection__set_X, 0, false, ::app::Uno::Float__typeof()),
        ::uNewFunctionVoid("set_XY", Change__Fuse_Elements_StretchDirection__set_XY, 0, false, ::app::Uno::Float2__typeof()),
        ::uNewFunctionVoid("set_Y", Change__Fuse_Elements_StretchDirection__set_Y, 0, false, ::app::Uno::Float__typeof()),
        ::uNewFunctionVoid("set_Z", Change__Fuse_Elements_StretchDirection__set_Z, 0, false, ::app::Uno::Float__typeof()));

    ::uRegisterType(type);
    return type;
}

void Change__Fuse_Elements_StretchDirection___ObjInit_2(Change__Fuse_Elements_StretchDirection* __this, ::app::Uno::UX::Property__Fuse_Elements_StretchDirection* target)
{
    ::app::Fuse::Animations::TrackAnimator___ObjInit_1(__this);

    if (target == NULL)
    {
        U_THROW(::app::Uno::ArgumentNullException__New_5(NULL, ::uGetConstString("target")));
    }

    __this->Target(target);

    if (__this->IsContinuous())
    {
        ::uObject* v;

        if ((::uType*)::app::Fuse::Elements::StretchDirection__typeof() == (::uType*)::app::Uno::Float__typeof())
        {
            v = (::uObject*)::app::Fuse::Animations::ConverterFloat__Singleton;
        }
        else if ((::uType*)::app::Fuse::Elements::StretchDirection__typeof() == (::uType*)::app::Uno::Float2__typeof())
        {
            v = (::uObject*)::app::Fuse::Animations::ConverterFloat2__Singleton;
        }
        else if ((::uType*)::app::Fuse::Elements::StretchDirection__typeof() == (::uType*)::app::Uno::Float3__typeof())
        {
            v = (::uObject*)::app::Fuse::Animations::ConverterFloat3__Singleton;
        }
        else if ((::uType*)::app::Fuse::Elements::StretchDirection__typeof() == (::uType*)::app::Uno::Float4__typeof())
        {
            v = (::uObject*)::app::Fuse::Animations::ConverterFloat4__Singleton;
        }
        else if ((::uType*)::app::Fuse::Elements::StretchDirection__typeof() == (::uType*)::app::Uno::Double__typeof())
        {
            v = (::uObject*)::app::Fuse::Animations::ConverterDouble__Singleton;
        }
        else
        {
            U_THROW(::app::Uno::Exception__New_2(NULL, ::app::Uno::String__op_Addition_1(NULL, ::uGetConstString("Unsupported change type: "), (::uObject*)(::uType*)::app::Fuse::Elements::StretchDirection__typeof())));
        }

        __this->ContinuousConverter = ::uCast< ::app::Fuse::Animations::Converter__Fuse_Elements_StretchDirection*>(v, ::app::Fuse::Animations::Converter__Fuse_Elements_StretchDirection__typeof());
    }
    else
    {
        __this->Mixer = ::app::Fuse::Animations::Mixer__get_DefaultDiscrete(NULL);
        __this->MarkDiscrete();
    }
}

::app::Fuse::Animations::AnimatorState* Change__Fuse_Elements_StretchDirection__CreateState(Change__Fuse_Elements_StretchDirection* __this, ::app::Fuse::Animations::CreateStateParams* p)
{
    if (__this->IsContinuous())
    {
        return (::app::Fuse::Animations::AnimatorState*)::app::Fuse::Animations::ContinuousTrackChangeState__Fuse_Elements_StretchDirection__New_1(NULL, __this, p);
    }

    return (::app::Fuse::Animations::AnimatorState*)::app::Fuse::Animations::DiscreteTrackChangeState__Fuse_Elements_StretchDirection__New_1(NULL, __this, p);
}

float Change__Fuse_Elements_StretchDirection__get_DegreesX(Change__Fuse_Elements_StretchDirection* __this)
{
    return ::app::Uno::Math__RadiansToDegrees_1(NULL, __this->X());
}

::app::Uno::Float2 Change__Fuse_Elements_StretchDirection__get_DegreesXY(Change__Fuse_Elements_StretchDirection* __this)
{
    return ::app::Uno::Float2__New_2(NULL, ::app::Uno::Math__RadiansToDegrees_1(NULL, __this->X()), ::app::Uno::Math__RadiansToDegrees_1(NULL, __this->Y()));
}

float Change__Fuse_Elements_StretchDirection__get_DegreesY(Change__Fuse_Elements_StretchDirection* __this)
{
    return ::app::Uno::Math__RadiansToDegrees_1(NULL, __this->Y());
}

float Change__Fuse_Elements_StretchDirection__get_DegreesZ(Change__Fuse_Elements_StretchDirection* __this)
{
    return ::app::Uno::Math__RadiansToDegrees_1(NULL, __this->Y());
}

bool Change__Fuse_Elements_StretchDirection__get_IsContinuous(Change__Fuse_Elements_StretchDirection* __this)
{
    return (((((::uType*)::app::Fuse::Elements::StretchDirection__typeof() == (::uType*)::app::Uno::Float__typeof()) || ((::uType*)::app::Fuse::Elements::StretchDirection__typeof() == (::uType*)::app::Uno::Float2__typeof())) || ((::uType*)::app::Fuse::Elements::StretchDirection__typeof() == (::uType*)::app::Uno::Float3__typeof())) || ((::uType*)::app::Fuse::Elements::StretchDirection__typeof() == (::uType*)::app::Uno::Float4__typeof())) || ((::uType*)::app::Fuse::Elements::StretchDirection__typeof() == (::uType*)::app::Uno::Double__typeof());
}

::app::Uno::UX::Property__Fuse_Elements_StretchDirection* Change__Fuse_Elements_StretchDirection__get_Target(Change__Fuse_Elements_StretchDirection* __this)
{
    return __this->_Target;
}

int Change__Fuse_Elements_StretchDirection__get_Value(Change__Fuse_Elements_StretchDirection* __this)
{
    return __this->IsContinuous() ? ::uPtr< ::app::Fuse::Animations::Converter__Fuse_Elements_StretchDirection*>(__this->ContinuousConverter)->Out(__this->_vectorValue) : ::uUnbox< int>(::app::Fuse::Elements::StretchDirection__typeof(), __this->_objectValue);
}

float Change__Fuse_Elements_StretchDirection__get_X(Change__Fuse_Elements_StretchDirection* __this)
{
    return __this->_vectorValue.X;
}

::app::Uno::Float2 Change__Fuse_Elements_StretchDirection__get_XY(Change__Fuse_Elements_StretchDirection* __this)
{
    ::app::Uno::Float4 ind_123 = __this->_vectorValue;
    return ::app::Uno::Float2__New_2(NULL, ind_123.X, ind_123.Y);
}

float Change__Fuse_Elements_StretchDirection__get_Y(Change__Fuse_Elements_StretchDirection* __this)
{
    return __this->_vectorValue.Y;
}

float Change__Fuse_Elements_StretchDirection__get_Z(Change__Fuse_Elements_StretchDirection* __this)
{
    return __this->_vectorValue.Z;
}

Change__Fuse_Elements_StretchDirection* Change__Fuse_Elements_StretchDirection__New_1(::uStatic* __this, ::app::Uno::UX::Property__Fuse_Elements_StretchDirection* target)
{
    Change__Fuse_Elements_StretchDirection* inst = (Change__Fuse_Elements_StretchDirection*)::uAllocObject(sizeof(Change__Fuse_Elements_StretchDirection), Change__Fuse_Elements_StretchDirection__typeof());
    inst->_ObjInit_2(target);
    return inst;
}

void Change__Fuse_Elements_StretchDirection__set_DegreesX(Change__Fuse_Elements_StretchDirection* __this, float value)
{
    __this->X(::app::Uno::Math__DegreesToRadians_1(NULL, value));
}

void Change__Fuse_Elements_StretchDirection__set_DegreesXY(Change__Fuse_Elements_StretchDirection* __this, ::app::Uno::Float2 value)
{
    __this->XY(::app::Uno::Float2__New_2(NULL, ::app::Uno::Math__DegreesToRadians_1(NULL, value.X), ::app::Uno::Math__DegreesToRadians_1(NULL, value.Y)));
}

void Change__Fuse_Elements_StretchDirection__set_DegreesY(Change__Fuse_Elements_StretchDirection* __this, float value)
{
    __this->Y(::app::Uno::Math__DegreesToRadians_1(NULL, value));
}

void Change__Fuse_Elements_StretchDirection__set_DegreesZ(Change__Fuse_Elements_StretchDirection* __this, float value)
{
    __this->Y(::app::Uno::Math__DegreesToRadians_1(NULL, value));
}

void Change__Fuse_Elements_StretchDirection__set_Target(Change__Fuse_Elements_StretchDirection* __this, ::app::Uno::UX::Property__Fuse_Elements_StretchDirection* value)
{
    __this->_Target = value;
}

void Change__Fuse_Elements_StretchDirection__set_Value(Change__Fuse_Elements_StretchDirection* __this, int value)
{
    if (__this->IsContinuous())
    {
        __this->_vectorValue = ::uPtr< ::app::Fuse::Animations::Converter__Fuse_Elements_StretchDirection*>(__this->ContinuousConverter)->In(value);
    }
    else
    {
        __this->_objectValue = ::uBox< int>(::app::Fuse::Elements::StretchDirection__typeof(), value);
    }
}

void Change__Fuse_Elements_StretchDirection__set_X(Change__Fuse_Elements_StretchDirection* __this, float value)
{
    __this->_vectorValue.X = value;
}

void Change__Fuse_Elements_StretchDirection__set_XY(Change__Fuse_Elements_StretchDirection* __this, ::app::Uno::Float2 value)
{
    __this->_vectorValue = ::app::Uno::Float4__New_6(NULL, value, __this->_vectorValue.Z, __this->_vectorValue.W);
}

void Change__Fuse_Elements_StretchDirection__set_Y(Change__Fuse_Elements_StretchDirection* __this, float value)
{
    __this->_vectorValue.Y = value;
}

void Change__Fuse_Elements_StretchDirection__set_Z(Change__Fuse_Elements_StretchDirection* __this, float value)
{
    __this->_vectorValue.Z = value;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Animations\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

Change__Fuse_Elements_StretchMode__uType* Change__Fuse_Elements_StretchMode__typeof()
{
    static ::uStaticStrong<Change__Fuse_Elements_StretchMode__uType*> type;
    if (type != NULL) return type;

    type = (Change__Fuse_Elements_StretchMode__uType*)::uAllocClassType(sizeof(Change__Fuse_Elements_StretchMode__uType), "Fuse.Animations.Change<Fuse.Elements.StretchMode>", false, 0, 2, 0);

    type->SetBaseType(::app::Fuse::Animations::TrackAnimator__typeof());
    type->__fp_CreateState = (::app::Fuse::Animations::AnimatorState*(*)(::app::Fuse::Animations::Animator*, ::app::Fuse::Animations::CreateStateParams*))Change__Fuse_Elements_StretchMode__CreateState;

    type->SetStrongRefs(
        "_Target", offsetof(Change__Fuse_Elements_StretchMode, _Target),
        "ContinuousConverter", offsetof(Change__Fuse_Elements_StretchMode, ContinuousConverter));

    type->SetFields(1,
        ::uNewField("ContinuousConverter", NULL, offsetof(Change__Fuse_Elements_StretchMode, ContinuousConverter), ::app::Fuse::Animations::Converter__Fuse_Elements_StretchMode__typeof()));

    type->SetFunctions(22,
        ::uNewFunction("get_DegreesX", Change__Fuse_Elements_StretchMode__get_DegreesX, 0, false, ::app::Uno::Float__typeof()),
        ::uNewFunction("get_DegreesXY", Change__Fuse_Elements_StretchMode__get_DegreesXY, 0, false, ::app::Uno::Float2__typeof()),
        ::uNewFunction("get_DegreesY", Change__Fuse_Elements_StretchMode__get_DegreesY, 0, false, ::app::Uno::Float__typeof()),
        ::uNewFunction("get_DegreesZ", Change__Fuse_Elements_StretchMode__get_DegreesZ, 0, false, ::app::Uno::Float__typeof()),
        ::uNewFunction("get_IsContinuous", Change__Fuse_Elements_StretchMode__get_IsContinuous, 0, false, ::app::Uno::Bool__typeof()),
        ::uNewFunction("get_Target", Change__Fuse_Elements_StretchMode__get_Target, 0, false, ::app::Uno::UX::Property__Fuse_Elements_StretchMode__typeof()),
        ::uNewFunction("get_Value", Change__Fuse_Elements_StretchMode__get_Value, 0, false, ::app::Fuse::Elements::StretchMode__typeof()),
        ::uNewFunction("get_X", Change__Fuse_Elements_StretchMode__get_X, 0, false, ::app::Uno::Float__typeof()),
        ::uNewFunction("get_XY", Change__Fuse_Elements_StretchMode__get_XY, 0, false, ::app::Uno::Float2__typeof()),
        ::uNewFunction("get_Y", Change__Fuse_Elements_StretchMode__get_Y, 0, false, ::app::Uno::Float__typeof()),
        ::uNewFunction("get_Z", Change__Fuse_Elements_StretchMode__get_Z, 0, false, ::app::Uno::Float__typeof()),
        ::uNewFunction(".ctor", Change__Fuse_Elements_StretchMode__New_1, 0, true, Change__Fuse_Elements_StretchMode__typeof(), ::app::Uno::UX::Property__Fuse_Elements_StretchMode__typeof()),
        ::uNewFunctionVoid("set_DegreesX", Change__Fuse_Elements_StretchMode__set_DegreesX, 0, false, ::app::Uno::Float__typeof()),
        ::uNewFunctionVoid("set_DegreesXY", Change__Fuse_Elements_StretchMode__set_DegreesXY, 0, false, ::app::Uno::Float2__typeof()),
        ::uNewFunctionVoid("set_DegreesY", Change__Fuse_Elements_StretchMode__set_DegreesY, 0, false, ::app::Uno::Float__typeof()),
        ::uNewFunctionVoid("set_DegreesZ", Change__Fuse_Elements_StretchMode__set_DegreesZ, 0, false, ::app::Uno::Float__typeof()),
        ::uNewFunctionVoid("set_Target", Change__Fuse_Elements_StretchMode__set_Target, 0, false, ::app::Uno::UX::Property__Fuse_Elements_StretchMode__typeof()),
        ::uNewFunctionVoid("set_Value", Change__Fuse_Elements_StretchMode__set_Value, 0, false, ::app::Fuse::Elements::StretchMode__typeof()),
        ::uNewFunctionVoid("set_X", Change__Fuse_Elements_StretchMode__set_X, 0, false, ::app::Uno::Float__typeof()),
        ::uNewFunctionVoid("set_XY", Change__Fuse_Elements_StretchMode__set_XY, 0, false, ::app::Uno::Float2__typeof()),
        ::uNewFunctionVoid("set_Y", Change__Fuse_Elements_StretchMode__set_Y, 0, false, ::app::Uno::Float__typeof()),
        ::uNewFunctionVoid("set_Z", Change__Fuse_Elements_StretchMode__set_Z, 0, false, ::app::Uno::Float__typeof()));

    ::uRegisterType(type);
    return type;
}

void Change__Fuse_Elements_StretchMode___ObjInit_2(Change__Fuse_Elements_StretchMode* __this, ::app::Uno::UX::Property__Fuse_Elements_StretchMode* target)
{
    ::app::Fuse::Animations::TrackAnimator___ObjInit_1(__this);

    if (target == NULL)
    {
        U_THROW(::app::Uno::ArgumentNullException__New_5(NULL, ::uGetConstString("target")));
    }

    __this->Target(target);

    if (__this->IsContinuous())
    {
        ::uObject* v;

        if ((::uType*)::app::Fuse::Elements::StretchMode__typeof() == (::uType*)::app::Uno::Float__typeof())
        {
            v = (::uObject*)::app::Fuse::Animations::ConverterFloat__Singleton;
        }
        else if ((::uType*)::app::Fuse::Elements::StretchMode__typeof() == (::uType*)::app::Uno::Float2__typeof())
        {
            v = (::uObject*)::app::Fuse::Animations::ConverterFloat2__Singleton;
        }
        else if ((::uType*)::app::Fuse::Elements::StretchMode__typeof() == (::uType*)::app::Uno::Float3__typeof())
        {
            v = (::uObject*)::app::Fuse::Animations::ConverterFloat3__Singleton;
        }
        else if ((::uType*)::app::Fuse::Elements::StretchMode__typeof() == (::uType*)::app::Uno::Float4__typeof())
        {
            v = (::uObject*)::app::Fuse::Animations::ConverterFloat4__Singleton;
        }
        else if ((::uType*)::app::Fuse::Elements::StretchMode__typeof() == (::uType*)::app::Uno::Double__typeof())
        {
            v = (::uObject*)::app::Fuse::Animations::ConverterDouble__Singleton;
        }
        else
        {
            U_THROW(::app::Uno::Exception__New_2(NULL, ::app::Uno::String__op_Addition_1(NULL, ::uGetConstString("Unsupported change type: "), (::uObject*)(::uType*)::app::Fuse::Elements::StretchMode__typeof())));
        }

        __this->ContinuousConverter = ::uCast< ::app::Fuse::Animations::Converter__Fuse_Elements_StretchMode*>(v, ::app::Fuse::Animations::Converter__Fuse_Elements_StretchMode__typeof());
    }
    else
    {
        __this->Mixer = ::app::Fuse::Animations::Mixer__get_DefaultDiscrete(NULL);
        __this->MarkDiscrete();
    }
}

::app::Fuse::Animations::AnimatorState* Change__Fuse_Elements_StretchMode__CreateState(Change__Fuse_Elements_StretchMode* __this, ::app::Fuse::Animations::CreateStateParams* p)
{
    if (__this->IsContinuous())
    {
        return (::app::Fuse::Animations::AnimatorState*)::app::Fuse::Animations::ContinuousTrackChangeState__Fuse_Elements_StretchMode__New_1(NULL, __this, p);
    }

    return (::app::Fuse::Animations::AnimatorState*)::app::Fuse::Animations::DiscreteTrackChangeState__Fuse_Elements_StretchMode__New_1(NULL, __this, p);
}

float Change__Fuse_Elements_StretchMode__get_DegreesX(Change__Fuse_Elements_StretchMode* __this)
{
    return ::app::Uno::Math__RadiansToDegrees_1(NULL, __this->X());
}

::app::Uno::Float2 Change__Fuse_Elements_StretchMode__get_DegreesXY(Change__Fuse_Elements_StretchMode* __this)
{
    return ::app::Uno::Float2__New_2(NULL, ::app::Uno::Math__RadiansToDegrees_1(NULL, __this->X()), ::app::Uno::Math__RadiansToDegrees_1(NULL, __this->Y()));
}

float Change__Fuse_Elements_StretchMode__get_DegreesY(Change__Fuse_Elements_StretchMode* __this)
{
    return ::app::Uno::Math__RadiansToDegrees_1(NULL, __this->Y());
}

float Change__Fuse_Elements_StretchMode__get_DegreesZ(Change__Fuse_Elements_StretchMode* __this)
{
    return ::app::Uno::Math__RadiansToDegrees_1(NULL, __this->Y());
}

bool Change__Fuse_Elements_StretchMode__get_IsContinuous(Change__Fuse_Elements_StretchMode* __this)
{
    return (((((::uType*)::app::Fuse::Elements::StretchMode__typeof() == (::uType*)::app::Uno::Float__typeof()) || ((::uType*)::app::Fuse::Elements::StretchMode__typeof() == (::uType*)::app::Uno::Float2__typeof())) || ((::uType*)::app::Fuse::Elements::StretchMode__typeof() == (::uType*)::app::Uno::Float3__typeof())) || ((::uType*)::app::Fuse::Elements::StretchMode__typeof() == (::uType*)::app::Uno::Float4__typeof())) || ((::uType*)::app::Fuse::Elements::StretchMode__typeof() == (::uType*)::app::Uno::Double__typeof());
}

::app::Uno::UX::Property__Fuse_Elements_StretchMode* Change__Fuse_Elements_StretchMode__get_Target(Change__Fuse_Elements_StretchMode* __this)
{
    return __this->_Target;
}

int Change__Fuse_Elements_StretchMode__get_Value(Change__Fuse_Elements_StretchMode* __this)
{
    return __this->IsContinuous() ? ::uPtr< ::app::Fuse::Animations::Converter__Fuse_Elements_StretchMode*>(__this->ContinuousConverter)->Out(__this->_vectorValue) : ::uUnbox< int>(::app::Fuse::Elements::StretchMode__typeof(), __this->_objectValue);
}

float Change__Fuse_Elements_StretchMode__get_X(Change__Fuse_Elements_StretchMode* __this)
{
    return __this->_vectorValue.X;
}

::app::Uno::Float2 Change__Fuse_Elements_StretchMode__get_XY(Change__Fuse_Elements_StretchMode* __this)
{
    ::app::Uno::Float4 ind_123 = __this->_vectorValue;
    return ::app::Uno::Float2__New_2(NULL, ind_123.X, ind_123.Y);
}

float Change__Fuse_Elements_StretchMode__get_Y(Change__Fuse_Elements_StretchMode* __this)
{
    return __this->_vectorValue.Y;
}

float Change__Fuse_Elements_StretchMode__get_Z(Change__Fuse_Elements_StretchMode* __this)
{
    return __this->_vectorValue.Z;
}

Change__Fuse_Elements_StretchMode* Change__Fuse_Elements_StretchMode__New_1(::uStatic* __this, ::app::Uno::UX::Property__Fuse_Elements_StretchMode* target)
{
    Change__Fuse_Elements_StretchMode* inst = (Change__Fuse_Elements_StretchMode*)::uAllocObject(sizeof(Change__Fuse_Elements_StretchMode), Change__Fuse_Elements_StretchMode__typeof());
    inst->_ObjInit_2(target);
    return inst;
}

void Change__Fuse_Elements_StretchMode__set_DegreesX(Change__Fuse_Elements_StretchMode* __this, float value)
{
    __this->X(::app::Uno::Math__DegreesToRadians_1(NULL, value));
}

void Change__Fuse_Elements_StretchMode__set_DegreesXY(Change__Fuse_Elements_StretchMode* __this, ::app::Uno::Float2 value)
{
    __this->XY(::app::Uno::Float2__New_2(NULL, ::app::Uno::Math__DegreesToRadians_1(NULL, value.X), ::app::Uno::Math__DegreesToRadians_1(NULL, value.Y)));
}

void Change__Fuse_Elements_StretchMode__set_DegreesY(Change__Fuse_Elements_StretchMode* __this, float value)
{
    __this->Y(::app::Uno::Math__DegreesToRadians_1(NULL, value));
}

void Change__Fuse_Elements_StretchMode__set_DegreesZ(Change__Fuse_Elements_StretchMode* __this, float value)
{
    __this->Y(::app::Uno::Math__DegreesToRadians_1(NULL, value));
}

void Change__Fuse_Elements_StretchMode__set_Target(Change__Fuse_Elements_StretchMode* __this, ::app::Uno::UX::Property__Fuse_Elements_StretchMode* value)
{
    __this->_Target = value;
}

void Change__Fuse_Elements_StretchMode__set_Value(Change__Fuse_Elements_StretchMode* __this, int value)
{
    if (__this->IsContinuous())
    {
        __this->_vectorValue = ::uPtr< ::app::Fuse::Animations::Converter__Fuse_Elements_StretchMode*>(__this->ContinuousConverter)->In(value);
    }
    else
    {
        __this->_objectValue = ::uBox< int>(::app::Fuse::Elements::StretchMode__typeof(), value);
    }
}

void Change__Fuse_Elements_StretchMode__set_X(Change__Fuse_Elements_StretchMode* __this, float value)
{
    __this->_vectorValue.X = value;
}

void Change__Fuse_Elements_StretchMode__set_XY(Change__Fuse_Elements_StretchMode* __this, ::app::Uno::Float2 value)
{
    __this->_vectorValue = ::app::Uno::Float4__New_6(NULL, value, __this->_vectorValue.Z, __this->_vectorValue.W);
}

void Change__Fuse_Elements_StretchMode__set_Y(Change__Fuse_Elements_StretchMode* __this, float value)
{
    __this->_vectorValue.Y = value;
}

void Change__Fuse_Elements_StretchMode__set_Z(Change__Fuse_Elements_StretchMode* __this, float value)
{
    __this->_vectorValue.Z = value;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Animations\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

Change__Fuse_Elements_StretchSizing__uType* Change__Fuse_Elements_StretchSizing__typeof()
{
    static ::uStaticStrong<Change__Fuse_Elements_StretchSizing__uType*> type;
    if (type != NULL) return type;

    type = (Change__Fuse_Elements_StretchSizing__uType*)::uAllocClassType(sizeof(Change__Fuse_Elements_StretchSizing__uType), "Fuse.Animations.Change<Fuse.Elements.StretchSizing>", false, 0, 2, 0);

    type->SetBaseType(::app::Fuse::Animations::TrackAnimator__typeof());
    type->__fp_CreateState = (::app::Fuse::Animations::AnimatorState*(*)(::app::Fuse::Animations::Animator*, ::app::Fuse::Animations::CreateStateParams*))Change__Fuse_Elements_StretchSizing__CreateState;

    type->SetStrongRefs(
        "_Target", offsetof(Change__Fuse_Elements_StretchSizing, _Target),
        "ContinuousConverter", offsetof(Change__Fuse_Elements_StretchSizing, ContinuousConverter));

    type->SetFields(1,
        ::uNewField("ContinuousConverter", NULL, offsetof(Change__Fuse_Elements_StretchSizing, ContinuousConverter), ::app::Fuse::Animations::Converter__Fuse_Elements_StretchSizing__typeof()));

    type->SetFunctions(22,
        ::uNewFunction("get_DegreesX", Change__Fuse_Elements_StretchSizing__get_DegreesX, 0, false, ::app::Uno::Float__typeof()),
        ::uNewFunction("get_DegreesXY", Change__Fuse_Elements_StretchSizing__get_DegreesXY, 0, false, ::app::Uno::Float2__typeof()),
        ::uNewFunction("get_DegreesY", Change__Fuse_Elements_StretchSizing__get_DegreesY, 0, false, ::app::Uno::Float__typeof()),
        ::uNewFunction("get_DegreesZ", Change__Fuse_Elements_StretchSizing__get_DegreesZ, 0, false, ::app::Uno::Float__typeof()),
        ::uNewFunction("get_IsContinuous", Change__Fuse_Elements_StretchSizing__get_IsContinuous, 0, false, ::app::Uno::Bool__typeof()),
        ::uNewFunction("get_Target", Change__Fuse_Elements_StretchSizing__get_Target, 0, false, ::app::Uno::UX::Property__Fuse_Elements_StretchSizing__typeof()),
        ::uNewFunction("get_Value", Change__Fuse_Elements_StretchSizing__get_Value, 0, false, ::app::Fuse::Elements::StretchSizing__typeof()),
        ::uNewFunction("get_X", Change__Fuse_Elements_StretchSizing__get_X, 0, false, ::app::Uno::Float__typeof()),
        ::uNewFunction("get_XY", Change__Fuse_Elements_StretchSizing__get_XY, 0, false, ::app::Uno::Float2__typeof()),
        ::uNewFunction("get_Y", Change__Fuse_Elements_StretchSizing__get_Y, 0, false, ::app::Uno::Float__typeof()),
        ::uNewFunction("get_Z", Change__Fuse_Elements_StretchSizing__get_Z, 0, false, ::app::Uno::Float__typeof()),
        ::uNewFunction(".ctor", Change__Fuse_Elements_StretchSizing__New_1, 0, true, Change__Fuse_Elements_StretchSizing__typeof(), ::app::Uno::UX::Property__Fuse_Elements_StretchSizing__typeof()),
        ::uNewFunctionVoid("set_DegreesX", Change__Fuse_Elements_StretchSizing__set_DegreesX, 0, false, ::app::Uno::Float__typeof()),
        ::uNewFunctionVoid("set_DegreesXY", Change__Fuse_Elements_StretchSizing__set_DegreesXY, 0, false, ::app::Uno::Float2__typeof()),
        ::uNewFunctionVoid("set_DegreesY", Change__Fuse_Elements_StretchSizing__set_DegreesY, 0, false, ::app::Uno::Float__typeof()),
        ::uNewFunctionVoid("set_DegreesZ", Change__Fuse_Elements_StretchSizing__set_DegreesZ, 0, false, ::app::Uno::Float__typeof()),
        ::uNewFunctionVoid("set_Target", Change__Fuse_Elements_StretchSizing__set_Target, 0, false, ::app::Uno::UX::Property__Fuse_Elements_StretchSizing__typeof()),
        ::uNewFunctionVoid("set_Value", Change__Fuse_Elements_StretchSizing__set_Value, 0, false, ::app::Fuse::Elements::StretchSizing__typeof()),
        ::uNewFunctionVoid("set_X", Change__Fuse_Elements_StretchSizing__set_X, 0, false, ::app::Uno::Float__typeof()),
        ::uNewFunctionVoid("set_XY", Change__Fuse_Elements_StretchSizing__set_XY, 0, false, ::app::Uno::Float2__typeof()),
        ::uNewFunctionVoid("set_Y", Change__Fuse_Elements_StretchSizing__set_Y, 0, false, ::app::Uno::Float__typeof()),
        ::uNewFunctionVoid("set_Z", Change__Fuse_Elements_StretchSizing__set_Z, 0, false, ::app::Uno::Float__typeof()));

    ::uRegisterType(type);
    return type;
}

void Change__Fuse_Elements_StretchSizing___ObjInit_2(Change__Fuse_Elements_StretchSizing* __this, ::app::Uno::UX::Property__Fuse_Elements_StretchSizing* target)
{
    ::app::Fuse::Animations::TrackAnimator___ObjInit_1(__this);

    if (target == NULL)
    {
        U_THROW(::app::Uno::ArgumentNullException__New_5(NULL, ::uGetConstString("target")));
    }

    __this->Target(target);

    if (__this->IsContinuous())
    {
        ::uObject* v;

        if ((::uType*)::app::Fuse::Elements::StretchSizing__typeof() == (::uType*)::app::Uno::Float__typeof())
        {
            v = (::uObject*)::app::Fuse::Animations::ConverterFloat__Singleton;
        }
        else if ((::uType*)::app::Fuse::Elements::StretchSizing__typeof() == (::uType*)::app::Uno::Float2__typeof())
        {
            v = (::uObject*)::app::Fuse::Animations::ConverterFloat2__Singleton;
        }
        else if ((::uType*)::app::Fuse::Elements::StretchSizing__typeof() == (::uType*)::app::Uno::Float3__typeof())
        {
            v = (::uObject*)::app::Fuse::Animations::ConverterFloat3__Singleton;
        }
        else if ((::uType*)::app::Fuse::Elements::StretchSizing__typeof() == (::uType*)::app::Uno::Float4__typeof())
        {
            v = (::uObject*)::app::Fuse::Animations::ConverterFloat4__Singleton;
        }
        else if ((::uType*)::app::Fuse::Elements::StretchSizing__typeof() == (::uType*)::app::Uno::Double__typeof())
        {
            v = (::uObject*)::app::Fuse::Animations::ConverterDouble__Singleton;
        }
        else
        {
            U_THROW(::app::Uno::Exception__New_2(NULL, ::app::Uno::String__op_Addition_1(NULL, ::uGetConstString("Unsupported change type: "), (::uObject*)(::uType*)::app::Fuse::Elements::StretchSizing__typeof())));
        }

        __this->ContinuousConverter = ::uCast< ::app::Fuse::Animations::Converter__Fuse_Elements_StretchSizing*>(v, ::app::Fuse::Animations::Converter__Fuse_Elements_StretchSizing__typeof());
    }
    else
    {
        __this->Mixer = ::app::Fuse::Animations::Mixer__get_DefaultDiscrete(NULL);
        __this->MarkDiscrete();
    }
}

::app::Fuse::Animations::AnimatorState* Change__Fuse_Elements_StretchSizing__CreateState(Change__Fuse_Elements_StretchSizing* __this, ::app::Fuse::Animations::CreateStateParams* p)
{
    if (__this->IsContinuous())
    {
        return (::app::Fuse::Animations::AnimatorState*)::app::Fuse::Animations::ContinuousTrackChangeState__Fuse_Elements_StretchSizing__New_1(NULL, __this, p);
    }

    return (::app::Fuse::Animations::AnimatorState*)::app::Fuse::Animations::DiscreteTrackChangeState__Fuse_Elements_StretchSizing__New_1(NULL, __this, p);
}

float Change__Fuse_Elements_StretchSizing__get_DegreesX(Change__Fuse_Elements_StretchSizing* __this)
{
    return ::app::Uno::Math__RadiansToDegrees_1(NULL, __this->X());
}

::app::Uno::Float2 Change__Fuse_Elements_StretchSizing__get_DegreesXY(Change__Fuse_Elements_StretchSizing* __this)
{
    return ::app::Uno::Float2__New_2(NULL, ::app::Uno::Math__RadiansToDegrees_1(NULL, __this->X()), ::app::Uno::Math__RadiansToDegrees_1(NULL, __this->Y()));
}

float Change__Fuse_Elements_StretchSizing__get_DegreesY(Change__Fuse_Elements_StretchSizing* __this)
{
    return ::app::Uno::Math__RadiansToDegrees_1(NULL, __this->Y());
}

float Change__Fuse_Elements_StretchSizing__get_DegreesZ(Change__Fuse_Elements_StretchSizing* __this)
{
    return ::app::Uno::Math__RadiansToDegrees_1(NULL, __this->Y());
}

bool Change__Fuse_Elements_StretchSizing__get_IsContinuous(Change__Fuse_Elements_StretchSizing* __this)
{
    return (((((::uType*)::app::Fuse::Elements::StretchSizing__typeof() == (::uType*)::app::Uno::Float__typeof()) || ((::uType*)::app::Fuse::Elements::StretchSizing__typeof() == (::uType*)::app::Uno::Float2__typeof())) || ((::uType*)::app::Fuse::Elements::StretchSizing__typeof() == (::uType*)::app::Uno::Float3__typeof())) || ((::uType*)::app::Fuse::Elements::StretchSizing__typeof() == (::uType*)::app::Uno::Float4__typeof())) || ((::uType*)::app::Fuse::Elements::StretchSizing__typeof() == (::uType*)::app::Uno::Double__typeof());
}

::app::Uno::UX::Property__Fuse_Elements_StretchSizing* Change__Fuse_Elements_StretchSizing__get_Target(Change__Fuse_Elements_StretchSizing* __this)
{
    return __this->_Target;
}

int Change__Fuse_Elements_StretchSizing__get_Value(Change__Fuse_Elements_StretchSizing* __this)
{
    return __this->IsContinuous() ? ::uPtr< ::app::Fuse::Animations::Converter__Fuse_Elements_StretchSizing*>(__this->ContinuousConverter)->Out(__this->_vectorValue) : ::uUnbox< int>(::app::Fuse::Elements::StretchSizing__typeof(), __this->_objectValue);
}

float Change__Fuse_Elements_StretchSizing__get_X(Change__Fuse_Elements_StretchSizing* __this)
{
    return __this->_vectorValue.X;
}

::app::Uno::Float2 Change__Fuse_Elements_StretchSizing__get_XY(Change__Fuse_Elements_StretchSizing* __this)
{
    ::app::Uno::Float4 ind_123 = __this->_vectorValue;
    return ::app::Uno::Float2__New_2(NULL, ind_123.X, ind_123.Y);
}

float Change__Fuse_Elements_StretchSizing__get_Y(Change__Fuse_Elements_StretchSizing* __this)
{
    return __this->_vectorValue.Y;
}

float Change__Fuse_Elements_StretchSizing__get_Z(Change__Fuse_Elements_StretchSizing* __this)
{
    return __this->_vectorValue.Z;
}

Change__Fuse_Elements_StretchSizing* Change__Fuse_Elements_StretchSizing__New_1(::uStatic* __this, ::app::Uno::UX::Property__Fuse_Elements_StretchSizing* target)
{
    Change__Fuse_Elements_StretchSizing* inst = (Change__Fuse_Elements_StretchSizing*)::uAllocObject(sizeof(Change__Fuse_Elements_StretchSizing), Change__Fuse_Elements_StretchSizing__typeof());
    inst->_ObjInit_2(target);
    return inst;
}

void Change__Fuse_Elements_StretchSizing__set_DegreesX(Change__Fuse_Elements_StretchSizing* __this, float value)
{
    __this->X(::app::Uno::Math__DegreesToRadians_1(NULL, value));
}

void Change__Fuse_Elements_StretchSizing__set_DegreesXY(Change__Fuse_Elements_StretchSizing* __this, ::app::Uno::Float2 value)
{
    __this->XY(::app::Uno::Float2__New_2(NULL, ::app::Uno::Math__DegreesToRadians_1(NULL, value.X), ::app::Uno::Math__DegreesToRadians_1(NULL, value.Y)));
}

void Change__Fuse_Elements_StretchSizing__set_DegreesY(Change__Fuse_Elements_StretchSizing* __this, float value)
{
    __this->Y(::app::Uno::Math__DegreesToRadians_1(NULL, value));
}

void Change__Fuse_Elements_StretchSizing__set_DegreesZ(Change__Fuse_Elements_StretchSizing* __this, float value)
{
    __this->Y(::app::Uno::Math__DegreesToRadians_1(NULL, value));
}

void Change__Fuse_Elements_StretchSizing__set_Target(Change__Fuse_Elements_StretchSizing* __this, ::app::Uno::UX::Property__Fuse_Elements_StretchSizing* value)
{
    __this->_Target = value;
}

void Change__Fuse_Elements_StretchSizing__set_Value(Change__Fuse_Elements_StretchSizing* __this, int value)
{
    if (__this->IsContinuous())
    {
        __this->_vectorValue = ::uPtr< ::app::Fuse::Animations::Converter__Fuse_Elements_StretchSizing*>(__this->ContinuousConverter)->In(value);
    }
    else
    {
        __this->_objectValue = ::uBox< int>(::app::Fuse::Elements::StretchSizing__typeof(), value);
    }
}

void Change__Fuse_Elements_StretchSizing__set_X(Change__Fuse_Elements_StretchSizing* __this, float value)
{
    __this->_vectorValue.X = value;
}

void Change__Fuse_Elements_StretchSizing__set_XY(Change__Fuse_Elements_StretchSizing* __this, ::app::Uno::Float2 value)
{
    __this->_vectorValue = ::app::Uno::Float4__New_6(NULL, value, __this->_vectorValue.Z, __this->_vectorValue.W);
}

void Change__Fuse_Elements_StretchSizing__set_Y(Change__Fuse_Elements_StretchSizing* __this, float value)
{
    __this->_vectorValue.Y = value;
}

void Change__Fuse_Elements_StretchSizing__set_Z(Change__Fuse_Elements_StretchSizing* __this, float value)
{
    __this->_vectorValue.Z = value;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Animations\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

Change__Fuse_Elements_TextAlignment__uType* Change__Fuse_Elements_TextAlignment__typeof()
{
    static ::uStaticStrong<Change__Fuse_Elements_TextAlignment__uType*> type;
    if (type != NULL) return type;

    type = (Change__Fuse_Elements_TextAlignment__uType*)::uAllocClassType(sizeof(Change__Fuse_Elements_TextAlignment__uType), "Fuse.Animations.Change<Fuse.Elements.TextAlignment>", false, 0, 2, 0);

    type->SetBaseType(::app::Fuse::Animations::TrackAnimator__typeof());
    type->__fp_CreateState = (::app::Fuse::Animations::AnimatorState*(*)(::app::Fuse::Animations::Animator*, ::app::Fuse::Animations::CreateStateParams*))Change__Fuse_Elements_TextAlignment__CreateState;

    type->SetStrongRefs(
        "_Target", offsetof(Change__Fuse_Elements_TextAlignment, _Target),
        "ContinuousConverter", offsetof(Change__Fuse_Elements_TextAlignment, ContinuousConverter));

    type->SetFields(1,
        ::uNewField("ContinuousConverter", NULL, offsetof(Change__Fuse_Elements_TextAlignment, ContinuousConverter), ::app::Fuse::Animations::Converter__Fuse_Elements_TextAlignment__typeof()));

    type->SetFunctions(22,
        ::uNewFunction("get_DegreesX", Change__Fuse_Elements_TextAlignment__get_DegreesX, 0, false, ::app::Uno::Float__typeof()),
        ::uNewFunction("get_DegreesXY", Change__Fuse_Elements_TextAlignment__get_DegreesXY, 0, false, ::app::Uno::Float2__typeof()),
        ::uNewFunction("get_DegreesY", Change__Fuse_Elements_TextAlignment__get_DegreesY, 0, false, ::app::Uno::Float__typeof()),
        ::uNewFunction("get_DegreesZ", Change__Fuse_Elements_TextAlignment__get_DegreesZ, 0, false, ::app::Uno::Float__typeof()),
        ::uNewFunction("get_IsContinuous", Change__Fuse_Elements_TextAlignment__get_IsContinuous, 0, false, ::app::Uno::Bool__typeof()),
        ::uNewFunction("get_Target", Change__Fuse_Elements_TextAlignment__get_Target, 0, false, ::app::Uno::UX::Property__Fuse_Elements_TextAlignment__typeof()),
        ::uNewFunction("get_Value", Change__Fuse_Elements_TextAlignment__get_Value, 0, false, ::app::Fuse::Elements::TextAlignment__typeof()),
        ::uNewFunction("get_X", Change__Fuse_Elements_TextAlignment__get_X, 0, false, ::app::Uno::Float__typeof()),
        ::uNewFunction("get_XY", Change__Fuse_Elements_TextAlignment__get_XY, 0, false, ::app::Uno::Float2__typeof()),
        ::uNewFunction("get_Y", Change__Fuse_Elements_TextAlignment__get_Y, 0, false, ::app::Uno::Float__typeof()),
        ::uNewFunction("get_Z", Change__Fuse_Elements_TextAlignment__get_Z, 0, false, ::app::Uno::Float__typeof()),
        ::uNewFunction(".ctor", Change__Fuse_Elements_TextAlignment__New_1, 0, true, Change__Fuse_Elements_TextAlignment__typeof(), ::app::Uno::UX::Property__Fuse_Elements_TextAlignment__typeof()),
        ::uNewFunctionVoid("set_DegreesX", Change__Fuse_Elements_TextAlignment__set_DegreesX, 0, false, ::app::Uno::Float__typeof()),
        ::uNewFunctionVoid("set_DegreesXY", Change__Fuse_Elements_TextAlignment__set_DegreesXY, 0, false, ::app::Uno::Float2__typeof()),
        ::uNewFunctionVoid("set_DegreesY", Change__Fuse_Elements_TextAlignment__set_DegreesY, 0, false, ::app::Uno::Float__typeof()),
        ::uNewFunctionVoid("set_DegreesZ", Change__Fuse_Elements_TextAlignment__set_DegreesZ, 0, false, ::app::Uno::Float__typeof()),
        ::uNewFunctionVoid("set_Target", Change__Fuse_Elements_TextAlignment__set_Target, 0, false, ::app::Uno::UX::Property__Fuse_Elements_TextAlignment__typeof()),
        ::uNewFunctionVoid("set_Value", Change__Fuse_Elements_TextAlignment__set_Value, 0, false, ::app::Fuse::Elements::TextAlignment__typeof()),
        ::uNewFunctionVoid("set_X", Change__Fuse_Elements_TextAlignment__set_X, 0, false, ::app::Uno::Float__typeof()),
        ::uNewFunctionVoid("set_XY", Change__Fuse_Elements_TextAlignment__set_XY, 0, false, ::app::Uno::Float2__typeof()),
        ::uNewFunctionVoid("set_Y", Change__Fuse_Elements_TextAlignment__set_Y, 0, false, ::app::Uno::Float__typeof()),
        ::uNewFunctionVoid("set_Z", Change__Fuse_Elements_TextAlignment__set_Z, 0, false, ::app::Uno::Float__typeof()));

    ::uRegisterType(type);
    return type;
}

void Change__Fuse_Elements_TextAlignment___ObjInit_2(Change__Fuse_Elements_TextAlignment* __this, ::app::Uno::UX::Property__Fuse_Elements_TextAlignment* target)
{
    ::app::Fuse::Animations::TrackAnimator___ObjInit_1(__this);

    if (target == NULL)
    {
        U_THROW(::app::Uno::ArgumentNullException__New_5(NULL, ::uGetConstString("target")));
    }

    __this->Target(target);

    if (__this->IsContinuous())
    {
        ::uObject* v;

        if ((::uType*)::app::Fuse::Elements::TextAlignment__typeof() == (::uType*)::app::Uno::Float__typeof())
        {
            v = (::uObject*)::app::Fuse::Animations::ConverterFloat__Singleton;
        }
        else if ((::uType*)::app::Fuse::Elements::TextAlignment__typeof() == (::uType*)::app::Uno::Float2__typeof())
        {
            v = (::uObject*)::app::Fuse::Animations::ConverterFloat2__Singleton;
        }
        else if ((::uType*)::app::Fuse::Elements::TextAlignment__typeof() == (::uType*)::app::Uno::Float3__typeof())
        {
            v = (::uObject*)::app::Fuse::Animations::ConverterFloat3__Singleton;
        }
        else if ((::uType*)::app::Fuse::Elements::TextAlignment__typeof() == (::uType*)::app::Uno::Float4__typeof())
        {
            v = (::uObject*)::app::Fuse::Animations::ConverterFloat4__Singleton;
        }
        else if ((::uType*)::app::Fuse::Elements::TextAlignment__typeof() == (::uType*)::app::Uno::Double__typeof())
        {
            v = (::uObject*)::app::Fuse::Animations::ConverterDouble__Singleton;
        }
        else
        {
            U_THROW(::app::Uno::Exception__New_2(NULL, ::app::Uno::String__op_Addition_1(NULL, ::uGetConstString("Unsupported change type: "), (::uObject*)(::uType*)::app::Fuse::Elements::TextAlignment__typeof())));
        }

        __this->ContinuousConverter = ::uCast< ::app::Fuse::Animations::Converter__Fuse_Elements_TextAlignment*>(v, ::app::Fuse::Animations::Converter__Fuse_Elements_TextAlignment__typeof());
    }
    else
    {
        __this->Mixer = ::app::Fuse::Animations::Mixer__get_DefaultDiscrete(NULL);
        __this->MarkDiscrete();
    }
}

::app::Fuse::Animations::AnimatorState* Change__Fuse_Elements_TextAlignment__CreateState(Change__Fuse_Elements_TextAlignment* __this, ::app::Fuse::Animations::CreateStateParams* p)
{
    if (__this->IsContinuous())
    {
        return (::app::Fuse::Animations::AnimatorState*)::app::Fuse::Animations::ContinuousTrackChangeState__Fuse_Elements_TextAlignment__New_1(NULL, __this, p);
    }

    return (::app::Fuse::Animations::AnimatorState*)::app::Fuse::Animations::DiscreteTrackChangeState__Fuse_Elements_TextAlignment__New_1(NULL, __this, p);
}

float Change__Fuse_Elements_TextAlignment__get_DegreesX(Change__Fuse_Elements_TextAlignment* __this)
{
    return ::app::Uno::Math__RadiansToDegrees_1(NULL, __this->X());
}

::app::Uno::Float2 Change__Fuse_Elements_TextAlignment__get_DegreesXY(Change__Fuse_Elements_TextAlignment* __this)
{
    return ::app::Uno::Float2__New_2(NULL, ::app::Uno::Math__RadiansToDegrees_1(NULL, __this->X()), ::app::Uno::Math__RadiansToDegrees_1(NULL, __this->Y()));
}

float Change__Fuse_Elements_TextAlignment__get_DegreesY(Change__Fuse_Elements_TextAlignment* __this)
{
    return ::app::Uno::Math__RadiansToDegrees_1(NULL, __this->Y());
}

float Change__Fuse_Elements_TextAlignment__get_DegreesZ(Change__Fuse_Elements_TextAlignment* __this)
{
    return ::app::Uno::Math__RadiansToDegrees_1(NULL, __this->Y());
}

bool Change__Fuse_Elements_TextAlignment__get_IsContinuous(Change__Fuse_Elements_TextAlignment* __this)
{
    return (((((::uType*)::app::Fuse::Elements::TextAlignment__typeof() == (::uType*)::app::Uno::Float__typeof()) || ((::uType*)::app::Fuse::Elements::TextAlignment__typeof() == (::uType*)::app::Uno::Float2__typeof())) || ((::uType*)::app::Fuse::Elements::TextAlignment__typeof() == (::uType*)::app::Uno::Float3__typeof())) || ((::uType*)::app::Fuse::Elements::TextAlignment__typeof() == (::uType*)::app::Uno::Float4__typeof())) || ((::uType*)::app::Fuse::Elements::TextAlignment__typeof() == (::uType*)::app::Uno::Double__typeof());
}

::app::Uno::UX::Property__Fuse_Elements_TextAlignment* Change__Fuse_Elements_TextAlignment__get_Target(Change__Fuse_Elements_TextAlignment* __this)
{
    return __this->_Target;
}

int Change__Fuse_Elements_TextAlignment__get_Value(Change__Fuse_Elements_TextAlignment* __this)
{
    return __this->IsContinuous() ? ::uPtr< ::app::Fuse::Animations::Converter__Fuse_Elements_TextAlignment*>(__this->ContinuousConverter)->Out(__this->_vectorValue) : ::uUnbox< int>(::app::Fuse::Elements::TextAlignment__typeof(), __this->_objectValue);
}

float Change__Fuse_Elements_TextAlignment__get_X(Change__Fuse_Elements_TextAlignment* __this)
{
    return __this->_vectorValue.X;
}

::app::Uno::Float2 Change__Fuse_Elements_TextAlignment__get_XY(Change__Fuse_Elements_TextAlignment* __this)
{
    ::app::Uno::Float4 ind_123 = __this->_vectorValue;
    return ::app::Uno::Float2__New_2(NULL, ind_123.X, ind_123.Y);
}

float Change__Fuse_Elements_TextAlignment__get_Y(Change__Fuse_Elements_TextAlignment* __this)
{
    return __this->_vectorValue.Y;
}

float Change__Fuse_Elements_TextAlignment__get_Z(Change__Fuse_Elements_TextAlignment* __this)
{
    return __this->_vectorValue.Z;
}

Change__Fuse_Elements_TextAlignment* Change__Fuse_Elements_TextAlignment__New_1(::uStatic* __this, ::app::Uno::UX::Property__Fuse_Elements_TextAlignment* target)
{
    Change__Fuse_Elements_TextAlignment* inst = (Change__Fuse_Elements_TextAlignment*)::uAllocObject(sizeof(Change__Fuse_Elements_TextAlignment), Change__Fuse_Elements_TextAlignment__typeof());
    inst->_ObjInit_2(target);
    return inst;
}

void Change__Fuse_Elements_TextAlignment__set_DegreesX(Change__Fuse_Elements_TextAlignment* __this, float value)
{
    __this->X(::app::Uno::Math__DegreesToRadians_1(NULL, value));
}

void Change__Fuse_Elements_TextAlignment__set_DegreesXY(Change__Fuse_Elements_TextAlignment* __this, ::app::Uno::Float2 value)
{
    __this->XY(::app::Uno::Float2__New_2(NULL, ::app::Uno::Math__DegreesToRadians_1(NULL, value.X), ::app::Uno::Math__DegreesToRadians_1(NULL, value.Y)));
}

void Change__Fuse_Elements_TextAlignment__set_DegreesY(Change__Fuse_Elements_TextAlignment* __this, float value)
{
    __this->Y(::app::Uno::Math__DegreesToRadians_1(NULL, value));
}

void Change__Fuse_Elements_TextAlignment__set_DegreesZ(Change__Fuse_Elements_TextAlignment* __this, float value)
{
    __this->Y(::app::Uno::Math__DegreesToRadians_1(NULL, value));
}

void Change__Fuse_Elements_TextAlignment__set_Target(Change__Fuse_Elements_TextAlignment* __this, ::app::Uno::UX::Property__Fuse_Elements_TextAlignment* value)
{
    __this->_Target = value;
}

void Change__Fuse_Elements_TextAlignment__set_Value(Change__Fuse_Elements_TextAlignment* __this, int value)
{
    if (__this->IsContinuous())
    {
        __this->_vectorValue = ::uPtr< ::app::Fuse::Animations::Converter__Fuse_Elements_TextAlignment*>(__this->ContinuousConverter)->In(value);
    }
    else
    {
        __this->_objectValue = ::uBox< int>(::app::Fuse::Elements::TextAlignment__typeof(), value);
    }
}

void Change__Fuse_Elements_TextAlignment__set_X(Change__Fuse_Elements_TextAlignment* __this, float value)
{
    __this->_vectorValue.X = value;
}

void Change__Fuse_Elements_TextAlignment__set_XY(Change__Fuse_Elements_TextAlignment* __this, ::app::Uno::Float2 value)
{
    __this->_vectorValue = ::app::Uno::Float4__New_6(NULL, value, __this->_vectorValue.Z, __this->_vectorValue.W);
}

void Change__Fuse_Elements_TextAlignment__set_Y(Change__Fuse_Elements_TextAlignment* __this, float value)
{
    __this->_vectorValue.Y = value;
}

void Change__Fuse_Elements_TextAlignment__set_Z(Change__Fuse_Elements_TextAlignment* __this, float value)
{
    __this->_vectorValue.Z = value;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Animations\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

Change__Fuse_Elements_TextWrapping__uType* Change__Fuse_Elements_TextWrapping__typeof()
{
    static ::uStaticStrong<Change__Fuse_Elements_TextWrapping__uType*> type;
    if (type != NULL) return type;

    type = (Change__Fuse_Elements_TextWrapping__uType*)::uAllocClassType(sizeof(Change__Fuse_Elements_TextWrapping__uType), "Fuse.Animations.Change<Fuse.Elements.TextWrapping>", false, 0, 2, 0);

    type->SetBaseType(::app::Fuse::Animations::TrackAnimator__typeof());
    type->__fp_CreateState = (::app::Fuse::Animations::AnimatorState*(*)(::app::Fuse::Animations::Animator*, ::app::Fuse::Animations::CreateStateParams*))Change__Fuse_Elements_TextWrapping__CreateState;

    type->SetStrongRefs(
        "_Target", offsetof(Change__Fuse_Elements_TextWrapping, _Target),
        "ContinuousConverter", offsetof(Change__Fuse_Elements_TextWrapping, ContinuousConverter));

    type->SetFields(1,
        ::uNewField("ContinuousConverter", NULL, offsetof(Change__Fuse_Elements_TextWrapping, ContinuousConverter), ::app::Fuse::Animations::Converter__Fuse_Elements_TextWrapping__typeof()));

    type->SetFunctions(22,
        ::uNewFunction("get_DegreesX", Change__Fuse_Elements_TextWrapping__get_DegreesX, 0, false, ::app::Uno::Float__typeof()),
        ::uNewFunction("get_DegreesXY", Change__Fuse_Elements_TextWrapping__get_DegreesXY, 0, false, ::app::Uno::Float2__typeof()),
        ::uNewFunction("get_DegreesY", Change__Fuse_Elements_TextWrapping__get_DegreesY, 0, false, ::app::Uno::Float__typeof()),
        ::uNewFunction("get_DegreesZ", Change__Fuse_Elements_TextWrapping__get_DegreesZ, 0, false, ::app::Uno::Float__typeof()),
        ::uNewFunction("get_IsContinuous", Change__Fuse_Elements_TextWrapping__get_IsContinuous, 0, false, ::app::Uno::Bool__typeof()),
        ::uNewFunction("get_Target", Change__Fuse_Elements_TextWrapping__get_Target, 0, false, ::app::Uno::UX::Property__Fuse_Elements_TextWrapping__typeof()),
        ::uNewFunction("get_Value", Change__Fuse_Elements_TextWrapping__get_Value, 0, false, ::app::Fuse::Elements::TextWrapping__typeof()),
        ::uNewFunction("get_X", Change__Fuse_Elements_TextWrapping__get_X, 0, false, ::app::Uno::Float__typeof()),
        ::uNewFunction("get_XY", Change__Fuse_Elements_TextWrapping__get_XY, 0, false, ::app::Uno::Float2__typeof()),
        ::uNewFunction("get_Y", Change__Fuse_Elements_TextWrapping__get_Y, 0, false, ::app::Uno::Float__typeof()),
        ::uNewFunction("get_Z", Change__Fuse_Elements_TextWrapping__get_Z, 0, false, ::app::Uno::Float__typeof()),
        ::uNewFunction(".ctor", Change__Fuse_Elements_TextWrapping__New_1, 0, true, Change__Fuse_Elements_TextWrapping__typeof(), ::app::Uno::UX::Property__Fuse_Elements_TextWrapping__typeof()),
        ::uNewFunctionVoid("set_DegreesX", Change__Fuse_Elements_TextWrapping__set_DegreesX, 0, false, ::app::Uno::Float__typeof()),
        ::uNewFunctionVoid("set_DegreesXY", Change__Fuse_Elements_TextWrapping__set_DegreesXY, 0, false, ::app::Uno::Float2__typeof()),
        ::uNewFunctionVoid("set_DegreesY", Change__Fuse_Elements_TextWrapping__set_DegreesY, 0, false, ::app::Uno::Float__typeof()),
        ::uNewFunctionVoid("set_DegreesZ", Change__Fuse_Elements_TextWrapping__set_DegreesZ, 0, false, ::app::Uno::Float__typeof()),
        ::uNewFunctionVoid("set_Target", Change__Fuse_Elements_TextWrapping__set_Target, 0, false, ::app::Uno::UX::Property__Fuse_Elements_TextWrapping__typeof()),
        ::uNewFunctionVoid("set_Value", Change__Fuse_Elements_TextWrapping__set_Value, 0, false, ::app::Fuse::Elements::TextWrapping__typeof()),
        ::uNewFunctionVoid("set_X", Change__Fuse_Elements_TextWrapping__set_X, 0, false, ::app::Uno::Float__typeof()),
        ::uNewFunctionVoid("set_XY", Change__Fuse_Elements_TextWrapping__set_XY, 0, false, ::app::Uno::Float2__typeof()),
        ::uNewFunctionVoid("set_Y", Change__Fuse_Elements_TextWrapping__set_Y, 0, false, ::app::Uno::Float__typeof()),
        ::uNewFunctionVoid("set_Z", Change__Fuse_Elements_TextWrapping__set_Z, 0, false, ::app::Uno::Float__typeof()));

    ::uRegisterType(type);
    return type;
}

void Change__Fuse_Elements_TextWrapping___ObjInit_2(Change__Fuse_Elements_TextWrapping* __this, ::app::Uno::UX::Property__Fuse_Elements_TextWrapping* target)
{
    ::app::Fuse::Animations::TrackAnimator___ObjInit_1(__this);

    if (target == NULL)
    {
        U_THROW(::app::Uno::ArgumentNullException__New_5(NULL, ::uGetConstString("target")));
    }

    __this->Target(target);

    if (__this->IsContinuous())
    {
        ::uObject* v;

        if ((::uType*)::app::Fuse::Elements::TextWrapping__typeof() == (::uType*)::app::Uno::Float__typeof())
        {
            v = (::uObject*)::app::Fuse::Animations::ConverterFloat__Singleton;
        }
        else if ((::uType*)::app::Fuse::Elements::TextWrapping__typeof() == (::uType*)::app::Uno::Float2__typeof())
        {
            v = (::uObject*)::app::Fuse::Animations::ConverterFloat2__Singleton;
        }
        else if ((::uType*)::app::Fuse::Elements::TextWrapping__typeof() == (::uType*)::app::Uno::Float3__typeof())
        {
            v = (::uObject*)::app::Fuse::Animations::ConverterFloat3__Singleton;
        }
        else if ((::uType*)::app::Fuse::Elements::TextWrapping__typeof() == (::uType*)::app::Uno::Float4__typeof())
        {
            v = (::uObject*)::app::Fuse::Animations::ConverterFloat4__Singleton;
        }
        else if ((::uType*)::app::Fuse::Elements::TextWrapping__typeof() == (::uType*)::app::Uno::Double__typeof())
        {
            v = (::uObject*)::app::Fuse::Animations::ConverterDouble__Singleton;
        }
        else
        {
            U_THROW(::app::Uno::Exception__New_2(NULL, ::app::Uno::String__op_Addition_1(NULL, ::uGetConstString("Unsupported change type: "), (::uObject*)(::uType*)::app::Fuse::Elements::TextWrapping__typeof())));
        }

        __this->ContinuousConverter = ::uCast< ::app::Fuse::Animations::Converter__Fuse_Elements_TextWrapping*>(v, ::app::Fuse::Animations::Converter__Fuse_Elements_TextWrapping__typeof());
    }
    else
    {
        __this->Mixer = ::app::Fuse::Animations::Mixer__get_DefaultDiscrete(NULL);
        __this->MarkDiscrete();
    }
}

::app::Fuse::Animations::AnimatorState* Change__Fuse_Elements_TextWrapping__CreateState(Change__Fuse_Elements_TextWrapping* __this, ::app::Fuse::Animations::CreateStateParams* p)
{
    if (__this->IsContinuous())
    {
        return (::app::Fuse::Animations::AnimatorState*)::app::Fuse::Animations::ContinuousTrackChangeState__Fuse_Elements_TextWrapping__New_1(NULL, __this, p);
    }

    return (::app::Fuse::Animations::AnimatorState*)::app::Fuse::Animations::DiscreteTrackChangeState__Fuse_Elements_TextWrapping__New_1(NULL, __this, p);
}

float Change__Fuse_Elements_TextWrapping__get_DegreesX(Change__Fuse_Elements_TextWrapping* __this)
{
    return ::app::Uno::Math__RadiansToDegrees_1(NULL, __this->X());
}

::app::Uno::Float2 Change__Fuse_Elements_TextWrapping__get_DegreesXY(Change__Fuse_Elements_TextWrapping* __this)
{
    return ::app::Uno::Float2__New_2(NULL, ::app::Uno::Math__RadiansToDegrees_1(NULL, __this->X()), ::app::Uno::Math__RadiansToDegrees_1(NULL, __this->Y()));
}

float Change__Fuse_Elements_TextWrapping__get_DegreesY(Change__Fuse_Elements_TextWrapping* __this)
{
    return ::app::Uno::Math__RadiansToDegrees_1(NULL, __this->Y());
}

float Change__Fuse_Elements_TextWrapping__get_DegreesZ(Change__Fuse_Elements_TextWrapping* __this)
{
    return ::app::Uno::Math__RadiansToDegrees_1(NULL, __this->Y());
}

bool Change__Fuse_Elements_TextWrapping__get_IsContinuous(Change__Fuse_Elements_TextWrapping* __this)
{
    return (((((::uType*)::app::Fuse::Elements::TextWrapping__typeof() == (::uType*)::app::Uno::Float__typeof()) || ((::uType*)::app::Fuse::Elements::TextWrapping__typeof() == (::uType*)::app::Uno::Float2__typeof())) || ((::uType*)::app::Fuse::Elements::TextWrapping__typeof() == (::uType*)::app::Uno::Float3__typeof())) || ((::uType*)::app::Fuse::Elements::TextWrapping__typeof() == (::uType*)::app::Uno::Float4__typeof())) || ((::uType*)::app::Fuse::Elements::TextWrapping__typeof() == (::uType*)::app::Uno::Double__typeof());
}

::app::Uno::UX::Property__Fuse_Elements_TextWrapping* Change__Fuse_Elements_TextWrapping__get_Target(Change__Fuse_Elements_TextWrapping* __this)
{
    return __this->_Target;
}

int Change__Fuse_Elements_TextWrapping__get_Value(Change__Fuse_Elements_TextWrapping* __this)
{
    return __this->IsContinuous() ? ::uPtr< ::app::Fuse::Animations::Converter__Fuse_Elements_TextWrapping*>(__this->ContinuousConverter)->Out(__this->_vectorValue) : ::uUnbox< int>(::app::Fuse::Elements::TextWrapping__typeof(), __this->_objectValue);
}

float Change__Fuse_Elements_TextWrapping__get_X(Change__Fuse_Elements_TextWrapping* __this)
{
    return __this->_vectorValue.X;
}

::app::Uno::Float2 Change__Fuse_Elements_TextWrapping__get_XY(Change__Fuse_Elements_TextWrapping* __this)
{
    ::app::Uno::Float4 ind_123 = __this->_vectorValue;
    return ::app::Uno::Float2__New_2(NULL, ind_123.X, ind_123.Y);
}

float Change__Fuse_Elements_TextWrapping__get_Y(Change__Fuse_Elements_TextWrapping* __this)
{
    return __this->_vectorValue.Y;
}

float Change__Fuse_Elements_TextWrapping__get_Z(Change__Fuse_Elements_TextWrapping* __this)
{
    return __this->_vectorValue.Z;
}

Change__Fuse_Elements_TextWrapping* Change__Fuse_Elements_TextWrapping__New_1(::uStatic* __this, ::app::Uno::UX::Property__Fuse_Elements_TextWrapping* target)
{
    Change__Fuse_Elements_TextWrapping* inst = (Change__Fuse_Elements_TextWrapping*)::uAllocObject(sizeof(Change__Fuse_Elements_TextWrapping), Change__Fuse_Elements_TextWrapping__typeof());
    inst->_ObjInit_2(target);
    return inst;
}

void Change__Fuse_Elements_TextWrapping__set_DegreesX(Change__Fuse_Elements_TextWrapping* __this, float value)
{
    __this->X(::app::Uno::Math__DegreesToRadians_1(NULL, value));
}

void Change__Fuse_Elements_TextWrapping__set_DegreesXY(Change__Fuse_Elements_TextWrapping* __this, ::app::Uno::Float2 value)
{
    __this->XY(::app::Uno::Float2__New_2(NULL, ::app::Uno::Math__DegreesToRadians_1(NULL, value.X), ::app::Uno::Math__DegreesToRadians_1(NULL, value.Y)));
}

void Change__Fuse_Elements_TextWrapping__set_DegreesY(Change__Fuse_Elements_TextWrapping* __this, float value)
{
    __this->Y(::app::Uno::Math__DegreesToRadians_1(NULL, value));
}

void Change__Fuse_Elements_TextWrapping__set_DegreesZ(Change__Fuse_Elements_TextWrapping* __this, float value)
{
    __this->Y(::app::Uno::Math__DegreesToRadians_1(NULL, value));
}

void Change__Fuse_Elements_TextWrapping__set_Target(Change__Fuse_Elements_TextWrapping* __this, ::app::Uno::UX::Property__Fuse_Elements_TextWrapping* value)
{
    __this->_Target = value;
}

void Change__Fuse_Elements_TextWrapping__set_Value(Change__Fuse_Elements_TextWrapping* __this, int value)
{
    if (__this->IsContinuous())
    {
        __this->_vectorValue = ::uPtr< ::app::Fuse::Animations::Converter__Fuse_Elements_TextWrapping*>(__this->ContinuousConverter)->In(value);
    }
    else
    {
        __this->_objectValue = ::uBox< int>(::app::Fuse::Elements::TextWrapping__typeof(), value);
    }
}

void Change__Fuse_Elements_TextWrapping__set_X(Change__Fuse_Elements_TextWrapping* __this, float value)
{
    __this->_vectorValue.X = value;
}

void Change__Fuse_Elements_TextWrapping__set_XY(Change__Fuse_Elements_TextWrapping* __this, ::app::Uno::Float2 value)
{
    __this->_vectorValue = ::app::Uno::Float4__New_6(NULL, value, __this->_vectorValue.Z, __this->_vectorValue.W);
}

void Change__Fuse_Elements_TextWrapping__set_Y(Change__Fuse_Elements_TextWrapping* __this, float value)
{
    __this->_vectorValue.Y = value;
}

void Change__Fuse_Elements_TextWrapping__set_Z(Change__Fuse_Elements_TextWrapping* __this, float value)
{
    __this->_vectorValue.Z = value;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Animations\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

Change__Fuse_Elements_Visibility__uType* Change__Fuse_Elements_Visibility__typeof()
{
    static ::uStaticStrong<Change__Fuse_Elements_Visibility__uType*> type;
    if (type != NULL) return type;

    type = (Change__Fuse_Elements_Visibility__uType*)::uAllocClassType(sizeof(Change__Fuse_Elements_Visibility__uType), "Fuse.Animations.Change<Fuse.Elements.Visibility>", false, 0, 2, 0);

    type->SetBaseType(::app::Fuse::Animations::TrackAnimator__typeof());
    type->__fp_CreateState = (::app::Fuse::Animations::AnimatorState*(*)(::app::Fuse::Animations::Animator*, ::app::Fuse::Animations::CreateStateParams*))Change__Fuse_Elements_Visibility__CreateState;

    type->SetStrongRefs(
        "_Target", offsetof(Change__Fuse_Elements_Visibility, _Target),
        "ContinuousConverter", offsetof(Change__Fuse_Elements_Visibility, ContinuousConverter));

    type->SetFields(1,
        ::uNewField("ContinuousConverter", NULL, offsetof(Change__Fuse_Elements_Visibility, ContinuousConverter), ::app::Fuse::Animations::Converter__Fuse_Elements_Visibility__typeof()));

    type->SetFunctions(22,
        ::uNewFunction("get_DegreesX", Change__Fuse_Elements_Visibility__get_DegreesX, 0, false, ::app::Uno::Float__typeof()),
        ::uNewFunction("get_DegreesXY", Change__Fuse_Elements_Visibility__get_DegreesXY, 0, false, ::app::Uno::Float2__typeof()),
        ::uNewFunction("get_DegreesY", Change__Fuse_Elements_Visibility__get_DegreesY, 0, false, ::app::Uno::Float__typeof()),
        ::uNewFunction("get_DegreesZ", Change__Fuse_Elements_Visibility__get_DegreesZ, 0, false, ::app::Uno::Float__typeof()),
        ::uNewFunction("get_IsContinuous", Change__Fuse_Elements_Visibility__get_IsContinuous, 0, false, ::app::Uno::Bool__typeof()),
        ::uNewFunction("get_Target", Change__Fuse_Elements_Visibility__get_Target, 0, false, ::app::Uno::UX::Property__Fuse_Elements_Visibility__typeof()),
        ::uNewFunction("get_Value", Change__Fuse_Elements_Visibility__get_Value, 0, false, ::app::Fuse::Elements::Visibility__typeof()),
        ::uNewFunction("get_X", Change__Fuse_Elements_Visibility__get_X, 0, false, ::app::Uno::Float__typeof()),
        ::uNewFunction("get_XY", Change__Fuse_Elements_Visibility__get_XY, 0, false, ::app::Uno::Float2__typeof()),
        ::uNewFunction("get_Y", Change__Fuse_Elements_Visibility__get_Y, 0, false, ::app::Uno::Float__typeof()),
        ::uNewFunction("get_Z", Change__Fuse_Elements_Visibility__get_Z, 0, false, ::app::Uno::Float__typeof()),
        ::uNewFunction(".ctor", Change__Fuse_Elements_Visibility__New_1, 0, true, Change__Fuse_Elements_Visibility__typeof(), ::app::Uno::UX::Property__Fuse_Elements_Visibility__typeof()),
        ::uNewFunctionVoid("set_DegreesX", Change__Fuse_Elements_Visibility__set_DegreesX, 0, false, ::app::Uno::Float__typeof()),
        ::uNewFunctionVoid("set_DegreesXY", Change__Fuse_Elements_Visibility__set_DegreesXY, 0, false, ::app::Uno::Float2__typeof()),
        ::uNewFunctionVoid("set_DegreesY", Change__Fuse_Elements_Visibility__set_DegreesY, 0, false, ::app::Uno::Float__typeof()),
        ::uNewFunctionVoid("set_DegreesZ", Change__Fuse_Elements_Visibility__set_DegreesZ, 0, false, ::app::Uno::Float__typeof()),
        ::uNewFunctionVoid("set_Target", Change__Fuse_Elements_Visibility__set_Target, 0, false, ::app::Uno::UX::Property__Fuse_Elements_Visibility__typeof()),
        ::uNewFunctionVoid("set_Value", Change__Fuse_Elements_Visibility__set_Value, 0, false, ::app::Fuse::Elements::Visibility__typeof()),
        ::uNewFunctionVoid("set_X", Change__Fuse_Elements_Visibility__set_X, 0, false, ::app::Uno::Float__typeof()),
        ::uNewFunctionVoid("set_XY", Change__Fuse_Elements_Visibility__set_XY, 0, false, ::app::Uno::Float2__typeof()),
        ::uNewFunctionVoid("set_Y", Change__Fuse_Elements_Visibility__set_Y, 0, false, ::app::Uno::Float__typeof()),
        ::uNewFunctionVoid("set_Z", Change__Fuse_Elements_Visibility__set_Z, 0, false, ::app::Uno::Float__typeof()));

    ::uRegisterType(type);
    return type;
}

void Change__Fuse_Elements_Visibility___ObjInit_2(Change__Fuse_Elements_Visibility* __this, ::app::Uno::UX::Property__Fuse_Elements_Visibility* target)
{
    ::app::Fuse::Animations::TrackAnimator___ObjInit_1(__this);

    if (target == NULL)
    {
        U_THROW(::app::Uno::ArgumentNullException__New_5(NULL, ::uGetConstString("target")));
    }

    __this->Target(target);

    if (__this->IsContinuous())
    {
        ::uObject* v;

        if ((::uType*)::app::Fuse::Elements::Visibility__typeof() == (::uType*)::app::Uno::Float__typeof())
        {
            v = (::uObject*)::app::Fuse::Animations::ConverterFloat__Singleton;
        }
        else if ((::uType*)::app::Fuse::Elements::Visibility__typeof() == (::uType*)::app::Uno::Float2__typeof())
        {
            v = (::uObject*)::app::Fuse::Animations::ConverterFloat2__Singleton;
        }
        else if ((::uType*)::app::Fuse::Elements::Visibility__typeof() == (::uType*)::app::Uno::Float3__typeof())
        {
            v = (::uObject*)::app::Fuse::Animations::ConverterFloat3__Singleton;
        }
        else if ((::uType*)::app::Fuse::Elements::Visibility__typeof() == (::uType*)::app::Uno::Float4__typeof())
        {
            v = (::uObject*)::app::Fuse::Animations::ConverterFloat4__Singleton;
        }
        else if ((::uType*)::app::Fuse::Elements::Visibility__typeof() == (::uType*)::app::Uno::Double__typeof())
        {
            v = (::uObject*)::app::Fuse::Animations::ConverterDouble__Singleton;
        }
        else
        {
            U_THROW(::app::Uno::Exception__New_2(NULL, ::app::Uno::String__op_Addition_1(NULL, ::uGetConstString("Unsupported change type: "), (::uObject*)(::uType*)::app::Fuse::Elements::Visibility__typeof())));
        }

        __this->ContinuousConverter = ::uCast< ::app::Fuse::Animations::Converter__Fuse_Elements_Visibility*>(v, ::app::Fuse::Animations::Converter__Fuse_Elements_Visibility__typeof());
    }
    else
    {
        __this->Mixer = ::app::Fuse::Animations::Mixer__get_DefaultDiscrete(NULL);
        __this->MarkDiscrete();
    }
}

::app::Fuse::Animations::AnimatorState* Change__Fuse_Elements_Visibility__CreateState(Change__Fuse_Elements_Visibility* __this, ::app::Fuse::Animations::CreateStateParams* p)
{
    if (__this->IsContinuous())
    {
        return (::app::Fuse::Animations::AnimatorState*)::app::Fuse::Animations::ContinuousTrackChangeState__Fuse_Elements_Visibility__New_1(NULL, __this, p);
    }

    return (::app::Fuse::Animations::AnimatorState*)::app::Fuse::Animations::DiscreteTrackChangeState__Fuse_Elements_Visibility__New_1(NULL, __this, p);
}

float Change__Fuse_Elements_Visibility__get_DegreesX(Change__Fuse_Elements_Visibility* __this)
{
    return ::app::Uno::Math__RadiansToDegrees_1(NULL, __this->X());
}

::app::Uno::Float2 Change__Fuse_Elements_Visibility__get_DegreesXY(Change__Fuse_Elements_Visibility* __this)
{
    return ::app::Uno::Float2__New_2(NULL, ::app::Uno::Math__RadiansToDegrees_1(NULL, __this->X()), ::app::Uno::Math__RadiansToDegrees_1(NULL, __this->Y()));
}

float Change__Fuse_Elements_Visibility__get_DegreesY(Change__Fuse_Elements_Visibility* __this)
{
    return ::app::Uno::Math__RadiansToDegrees_1(NULL, __this->Y());
}

float Change__Fuse_Elements_Visibility__get_DegreesZ(Change__Fuse_Elements_Visibility* __this)
{
    return ::app::Uno::Math__RadiansToDegrees_1(NULL, __this->Y());
}

bool Change__Fuse_Elements_Visibility__get_IsContinuous(Change__Fuse_Elements_Visibility* __this)
{
    return (((((::uType*)::app::Fuse::Elements::Visibility__typeof() == (::uType*)::app::Uno::Float__typeof()) || ((::uType*)::app::Fuse::Elements::Visibility__typeof() == (::uType*)::app::Uno::Float2__typeof())) || ((::uType*)::app::Fuse::Elements::Visibility__typeof() == (::uType*)::app::Uno::Float3__typeof())) || ((::uType*)::app::Fuse::Elements::Visibility__typeof() == (::uType*)::app::Uno::Float4__typeof())) || ((::uType*)::app::Fuse::Elements::Visibility__typeof() == (::uType*)::app::Uno::Double__typeof());
}

::app::Uno::UX::Property__Fuse_Elements_Visibility* Change__Fuse_Elements_Visibility__get_Target(Change__Fuse_Elements_Visibility* __this)
{
    return __this->_Target;
}

int Change__Fuse_Elements_Visibility__get_Value(Change__Fuse_Elements_Visibility* __this)
{
    return __this->IsContinuous() ? ::uPtr< ::app::Fuse::Animations::Converter__Fuse_Elements_Visibility*>(__this->ContinuousConverter)->Out(__this->_vectorValue) : ::uUnbox< int>(::app::Fuse::Elements::Visibility__typeof(), __this->_objectValue);
}

float Change__Fuse_Elements_Visibility__get_X(Change__Fuse_Elements_Visibility* __this)
{
    return __this->_vectorValue.X;
}

::app::Uno::Float2 Change__Fuse_Elements_Visibility__get_XY(Change__Fuse_Elements_Visibility* __this)
{
    ::app::Uno::Float4 ind_123 = __this->_vectorValue;
    return ::app::Uno::Float2__New_2(NULL, ind_123.X, ind_123.Y);
}

float Change__Fuse_Elements_Visibility__get_Y(Change__Fuse_Elements_Visibility* __this)
{
    return __this->_vectorValue.Y;
}

float Change__Fuse_Elements_Visibility__get_Z(Change__Fuse_Elements_Visibility* __this)
{
    return __this->_vectorValue.Z;
}

Change__Fuse_Elements_Visibility* Change__Fuse_Elements_Visibility__New_1(::uStatic* __this, ::app::Uno::UX::Property__Fuse_Elements_Visibility* target)
{
    Change__Fuse_Elements_Visibility* inst = (Change__Fuse_Elements_Visibility*)::uAllocObject(sizeof(Change__Fuse_Elements_Visibility), Change__Fuse_Elements_Visibility__typeof());
    inst->_ObjInit_2(target);
    return inst;
}

void Change__Fuse_Elements_Visibility__set_DegreesX(Change__Fuse_Elements_Visibility* __this, float value)
{
    __this->X(::app::Uno::Math__DegreesToRadians_1(NULL, value));
}

void Change__Fuse_Elements_Visibility__set_DegreesXY(Change__Fuse_Elements_Visibility* __this, ::app::Uno::Float2 value)
{
    __this->XY(::app::Uno::Float2__New_2(NULL, ::app::Uno::Math__DegreesToRadians_1(NULL, value.X), ::app::Uno::Math__DegreesToRadians_1(NULL, value.Y)));
}

void Change__Fuse_Elements_Visibility__set_DegreesY(Change__Fuse_Elements_Visibility* __this, float value)
{
    __this->Y(::app::Uno::Math__DegreesToRadians_1(NULL, value));
}

void Change__Fuse_Elements_Visibility__set_DegreesZ(Change__Fuse_Elements_Visibility* __this, float value)
{
    __this->Y(::app::Uno::Math__DegreesToRadians_1(NULL, value));
}

void Change__Fuse_Elements_Visibility__set_Target(Change__Fuse_Elements_Visibility* __this, ::app::Uno::UX::Property__Fuse_Elements_Visibility* value)
{
    __this->_Target = value;
}

void Change__Fuse_Elements_Visibility__set_Value(Change__Fuse_Elements_Visibility* __this, int value)
{
    if (__this->IsContinuous())
    {
        __this->_vectorValue = ::uPtr< ::app::Fuse::Animations::Converter__Fuse_Elements_Visibility*>(__this->ContinuousConverter)->In(value);
    }
    else
    {
        __this->_objectValue = ::uBox< int>(::app::Fuse::Elements::Visibility__typeof(), value);
    }
}

void Change__Fuse_Elements_Visibility__set_X(Change__Fuse_Elements_Visibility* __this, float value)
{
    __this->_vectorValue.X = value;
}

void Change__Fuse_Elements_Visibility__set_XY(Change__Fuse_Elements_Visibility* __this, ::app::Uno::Float2 value)
{
    __this->_vectorValue = ::app::Uno::Float4__New_6(NULL, value, __this->_vectorValue.Z, __this->_vectorValue.W);
}

void Change__Fuse_Elements_Visibility__set_Y(Change__Fuse_Elements_Visibility* __this, float value)
{
    __this->_vectorValue.Y = value;
}

void Change__Fuse_Elements_Visibility__set_Z(Change__Fuse_Elements_Visibility* __this, float value)
{
    __this->_vectorValue.Z = value;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Animations\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

Change__Fuse_Font__uType* Change__Fuse_Font__typeof()
{
    static ::uStaticStrong<Change__Fuse_Font__uType*> type;
    if (type != NULL) return type;

    type = (Change__Fuse_Font__uType*)::uAllocClassType(sizeof(Change__Fuse_Font__uType), "Fuse.Animations.Change<Fuse.Font>", false, 0, 2, 0);

    type->SetBaseType(::app::Fuse::Animations::TrackAnimator__typeof());
    type->__fp_CreateState = (::app::Fuse::Animations::AnimatorState*(*)(::app::Fuse::Animations::Animator*, ::app::Fuse::Animations::CreateStateParams*))Change__Fuse_Font__CreateState;

    type->SetStrongRefs(
        "_Target", offsetof(Change__Fuse_Font, _Target),
        "ContinuousConverter", offsetof(Change__Fuse_Font, ContinuousConverter));

    type->SetFields(1,
        ::uNewField("ContinuousConverter", NULL, offsetof(Change__Fuse_Font, ContinuousConverter), ::app::Fuse::Animations::Converter__Fuse_Font__typeof()));

    type->SetFunctions(22,
        ::uNewFunction("get_DegreesX", Change__Fuse_Font__get_DegreesX, 0, false, ::app::Uno::Float__typeof()),
        ::uNewFunction("get_DegreesXY", Change__Fuse_Font__get_DegreesXY, 0, false, ::app::Uno::Float2__typeof()),
        ::uNewFunction("get_DegreesY", Change__Fuse_Font__get_DegreesY, 0, false, ::app::Uno::Float__typeof()),
        ::uNewFunction("get_DegreesZ", Change__Fuse_Font__get_DegreesZ, 0, false, ::app::Uno::Float__typeof()),
        ::uNewFunction("get_IsContinuous", Change__Fuse_Font__get_IsContinuous, 0, false, ::app::Uno::Bool__typeof()),
        ::uNewFunction("get_Target", Change__Fuse_Font__get_Target, 0, false, ::app::Uno::UX::Property__Fuse_Font__typeof()),
        ::uNewFunction("get_Value", Change__Fuse_Font__get_Value, 0, false, ::app::Fuse::Font__typeof()),
        ::uNewFunction("get_X", Change__Fuse_Font__get_X, 0, false, ::app::Uno::Float__typeof()),
        ::uNewFunction("get_XY", Change__Fuse_Font__get_XY, 0, false, ::app::Uno::Float2__typeof()),
        ::uNewFunction("get_Y", Change__Fuse_Font__get_Y, 0, false, ::app::Uno::Float__typeof()),
        ::uNewFunction("get_Z", Change__Fuse_Font__get_Z, 0, false, ::app::Uno::Float__typeof()),
        ::uNewFunction(".ctor", Change__Fuse_Font__New_1, 0, true, Change__Fuse_Font__typeof(), ::app::Uno::UX::Property__Fuse_Font__typeof()),
        ::uNewFunctionVoid("set_DegreesX", Change__Fuse_Font__set_DegreesX, 0, false, ::app::Uno::Float__typeof()),
        ::uNewFunctionVoid("set_DegreesXY", Change__Fuse_Font__set_DegreesXY, 0, false, ::app::Uno::Float2__typeof()),
        ::uNewFunctionVoid("set_DegreesY", Change__Fuse_Font__set_DegreesY, 0, false, ::app::Uno::Float__typeof()),
        ::uNewFunctionVoid("set_DegreesZ", Change__Fuse_Font__set_DegreesZ, 0, false, ::app::Uno::Float__typeof()),
        ::uNewFunctionVoid("set_Target", Change__Fuse_Font__set_Target, 0, false, ::app::Uno::UX::Property__Fuse_Font__typeof()),
        ::uNewFunctionVoid("set_Value", Change__Fuse_Font__set_Value, 0, false, ::app::Fuse::Font__typeof()),
        ::uNewFunctionVoid("set_X", Change__Fuse_Font__set_X, 0, false, ::app::Uno::Float__typeof()),
        ::uNewFunctionVoid("set_XY", Change__Fuse_Font__set_XY, 0, false, ::app::Uno::Float2__typeof()),
        ::uNewFunctionVoid("set_Y", Change__Fuse_Font__set_Y, 0, false, ::app::Uno::Float__typeof()),
        ::uNewFunctionVoid("set_Z", Change__Fuse_Font__set_Z, 0, false, ::app::Uno::Float__typeof()));

    ::uRegisterType(type);
    return type;
}

void Change__Fuse_Font___ObjInit_2(Change__Fuse_Font* __this, ::app::Uno::UX::Property__Fuse_Font* target)
{
    ::app::Fuse::Animations::TrackAnimator___ObjInit_1(__this);

    if (target == NULL)
    {
        U_THROW(::app::Uno::ArgumentNullException__New_5(NULL, ::uGetConstString("target")));
    }

    __this->Target(target);

    if (__this->IsContinuous())
    {
        ::uObject* v;

        if ((::uType*)::app::Fuse::Font__typeof() == (::uType*)::app::Uno::Float__typeof())
        {
            v = (::uObject*)::app::Fuse::Animations::ConverterFloat__Singleton;
        }
        else if ((::uType*)::app::Fuse::Font__typeof() == (::uType*)::app::Uno::Float2__typeof())
        {
            v = (::uObject*)::app::Fuse::Animations::ConverterFloat2__Singleton;
        }
        else if ((::uType*)::app::Fuse::Font__typeof() == (::uType*)::app::Uno::Float3__typeof())
        {
            v = (::uObject*)::app::Fuse::Animations::ConverterFloat3__Singleton;
        }
        else if ((::uType*)::app::Fuse::Font__typeof() == (::uType*)::app::Uno::Float4__typeof())
        {
            v = (::uObject*)::app::Fuse::Animations::ConverterFloat4__Singleton;
        }
        else if ((::uType*)::app::Fuse::Font__typeof() == (::uType*)::app::Uno::Double__typeof())
        {
            v = (::uObject*)::app::Fuse::Animations::ConverterDouble__Singleton;
        }
        else
        {
            U_THROW(::app::Uno::Exception__New_2(NULL, ::app::Uno::String__op_Addition_1(NULL, ::uGetConstString("Unsupported change type: "), (::uObject*)(::uType*)::app::Fuse::Font__typeof())));
        }

        __this->ContinuousConverter = ::uCast< ::app::Fuse::Animations::Converter__Fuse_Font*>(v, ::app::Fuse::Animations::Converter__Fuse_Font__typeof());
    }
    else
    {
        __this->Mixer = ::app::Fuse::Animations::Mixer__get_DefaultDiscrete(NULL);
        __this->MarkDiscrete();
    }
}

::app::Fuse::Animations::AnimatorState* Change__Fuse_Font__CreateState(Change__Fuse_Font* __this, ::app::Fuse::Animations::CreateStateParams* p)
{
    if (__this->IsContinuous())
    {
        return (::app::Fuse::Animations::AnimatorState*)::app::Fuse::Animations::ContinuousTrackChangeState__Fuse_Font__New_1(NULL, __this, p);
    }

    return (::app::Fuse::Animations::AnimatorState*)::app::Fuse::Animations::DiscreteTrackChangeState__Fuse_Font__New_1(NULL, __this, p);
}

float Change__Fuse_Font__get_DegreesX(Change__Fuse_Font* __this)
{
    return ::app::Uno::Math__RadiansToDegrees_1(NULL, __this->X());
}

::app::Uno::Float2 Change__Fuse_Font__get_DegreesXY(Change__Fuse_Font* __this)
{
    return ::app::Uno::Float2__New_2(NULL, ::app::Uno::Math__RadiansToDegrees_1(NULL, __this->X()), ::app::Uno::Math__RadiansToDegrees_1(NULL, __this->Y()));
}

float Change__Fuse_Font__get_DegreesY(Change__Fuse_Font* __this)
{
    return ::app::Uno::Math__RadiansToDegrees_1(NULL, __this->Y());
}

float Change__Fuse_Font__get_DegreesZ(Change__Fuse_Font* __this)
{
    return ::app::Uno::Math__RadiansToDegrees_1(NULL, __this->Y());
}

bool Change__Fuse_Font__get_IsContinuous(Change__Fuse_Font* __this)
{
    return (((((::uType*)::app::Fuse::Font__typeof() == (::uType*)::app::Uno::Float__typeof()) || ((::uType*)::app::Fuse::Font__typeof() == (::uType*)::app::Uno::Float2__typeof())) || ((::uType*)::app::Fuse::Font__typeof() == (::uType*)::app::Uno::Float3__typeof())) || ((::uType*)::app::Fuse::Font__typeof() == (::uType*)::app::Uno::Float4__typeof())) || ((::uType*)::app::Fuse::Font__typeof() == (::uType*)::app::Uno::Double__typeof());
}

::app::Uno::UX::Property__Fuse_Font* Change__Fuse_Font__get_Target(Change__Fuse_Font* __this)
{
    return __this->_Target;
}

::app::Fuse::Font* Change__Fuse_Font__get_Value(Change__Fuse_Font* __this)
{
    return __this->IsContinuous() ? ::uPtr< ::app::Fuse::Animations::Converter__Fuse_Font*>(__this->ContinuousConverter)->Out(__this->_vectorValue) : ::uCast< ::app::Fuse::Font*>(__this->_objectValue, ::app::Fuse::Font__typeof());
}

float Change__Fuse_Font__get_X(Change__Fuse_Font* __this)
{
    return __this->_vectorValue.X;
}

::app::Uno::Float2 Change__Fuse_Font__get_XY(Change__Fuse_Font* __this)
{
    ::app::Uno::Float4 ind_123 = __this->_vectorValue;
    return ::app::Uno::Float2__New_2(NULL, ind_123.X, ind_123.Y);
}

float Change__Fuse_Font__get_Y(Change__Fuse_Font* __this)
{
    return __this->_vectorValue.Y;
}

float Change__Fuse_Font__get_Z(Change__Fuse_Font* __this)
{
    return __this->_vectorValue.Z;
}

Change__Fuse_Font* Change__Fuse_Font__New_1(::uStatic* __this, ::app::Uno::UX::Property__Fuse_Font* target)
{
    Change__Fuse_Font* inst = (Change__Fuse_Font*)::uAllocObject(sizeof(Change__Fuse_Font), Change__Fuse_Font__typeof());
    inst->_ObjInit_2(target);
    return inst;
}

void Change__Fuse_Font__set_DegreesX(Change__Fuse_Font* __this, float value)
{
    __this->X(::app::Uno::Math__DegreesToRadians_1(NULL, value));
}

void Change__Fuse_Font__set_DegreesXY(Change__Fuse_Font* __this, ::app::Uno::Float2 value)
{
    __this->XY(::app::Uno::Float2__New_2(NULL, ::app::Uno::Math__DegreesToRadians_1(NULL, value.X), ::app::Uno::Math__DegreesToRadians_1(NULL, value.Y)));
}

void Change__Fuse_Font__set_DegreesY(Change__Fuse_Font* __this, float value)
{
    __this->Y(::app::Uno::Math__DegreesToRadians_1(NULL, value));
}

void Change__Fuse_Font__set_DegreesZ(Change__Fuse_Font* __this, float value)
{
    __this->Y(::app::Uno::Math__DegreesToRadians_1(NULL, value));
}

void Change__Fuse_Font__set_Target(Change__Fuse_Font* __this, ::app::Uno::UX::Property__Fuse_Font* value)
{
    __this->_Target = value;
}

void Change__Fuse_Font__set_Value(Change__Fuse_Font* __this, ::app::Fuse::Font* value)
{
    if (__this->IsContinuous())
    {
        __this->_vectorValue = ::uPtr< ::app::Fuse::Animations::Converter__Fuse_Font*>(__this->ContinuousConverter)->In(value);
    }
    else
    {
        __this->_objectValue = (::uObject*)value;
    }
}

void Change__Fuse_Font__set_X(Change__Fuse_Font* __this, float value)
{
    __this->_vectorValue.X = value;
}

void Change__Fuse_Font__set_XY(Change__Fuse_Font* __this, ::app::Uno::Float2 value)
{
    __this->_vectorValue = ::app::Uno::Float4__New_6(NULL, value, __this->_vectorValue.Z, __this->_vectorValue.W);
}

void Change__Fuse_Font__set_Y(Change__Fuse_Font* __this, float value)
{
    __this->_vectorValue.Y = value;
}

void Change__Fuse_Font__set_Z(Change__Fuse_Font* __this, float value)
{
    __this->_vectorValue.Z = value;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Animations\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

Change__Fuse_Gestures_Edge__uType* Change__Fuse_Gestures_Edge__typeof()
{
    static ::uStaticStrong<Change__Fuse_Gestures_Edge__uType*> type;
    if (type != NULL) return type;

    type = (Change__Fuse_Gestures_Edge__uType*)::uAllocClassType(sizeof(Change__Fuse_Gestures_Edge__uType), "Fuse.Animations.Change<Fuse.Gestures.Edge>", false, 0, 2, 0);

    type->SetBaseType(::app::Fuse::Animations::TrackAnimator__typeof());
    type->__fp_CreateState = (::app::Fuse::Animations::AnimatorState*(*)(::app::Fuse::Animations::Animator*, ::app::Fuse::Animations::CreateStateParams*))Change__Fuse_Gestures_Edge__CreateState;

    type->SetStrongRefs(
        "_Target", offsetof(Change__Fuse_Gestures_Edge, _Target),
        "ContinuousConverter", offsetof(Change__Fuse_Gestures_Edge, ContinuousConverter));

    type->SetFields(1,
        ::uNewField("ContinuousConverter", NULL, offsetof(Change__Fuse_Gestures_Edge, ContinuousConverter), ::app::Fuse::Animations::Converter__Fuse_Gestures_Edge__typeof()));

    type->SetFunctions(22,
        ::uNewFunction("get_DegreesX", Change__Fuse_Gestures_Edge__get_DegreesX, 0, false, ::app::Uno::Float__typeof()),
        ::uNewFunction("get_DegreesXY", Change__Fuse_Gestures_Edge__get_DegreesXY, 0, false, ::app::Uno::Float2__typeof()),
        ::uNewFunction("get_DegreesY", Change__Fuse_Gestures_Edge__get_DegreesY, 0, false, ::app::Uno::Float__typeof()),
        ::uNewFunction("get_DegreesZ", Change__Fuse_Gestures_Edge__get_DegreesZ, 0, false, ::app::Uno::Float__typeof()),
        ::uNewFunction("get_IsContinuous", Change__Fuse_Gestures_Edge__get_IsContinuous, 0, false, ::app::Uno::Bool__typeof()),
        ::uNewFunction("get_Target", Change__Fuse_Gestures_Edge__get_Target, 0, false, ::app::Uno::UX::Property__Fuse_Gestures_Edge__typeof()),
        ::uNewFunction("get_Value", Change__Fuse_Gestures_Edge__get_Value, 0, false, ::app::Fuse::Gestures::Edge__typeof()),
        ::uNewFunction("get_X", Change__Fuse_Gestures_Edge__get_X, 0, false, ::app::Uno::Float__typeof()),
        ::uNewFunction("get_XY", Change__Fuse_Gestures_Edge__get_XY, 0, false, ::app::Uno::Float2__typeof()),
        ::uNewFunction("get_Y", Change__Fuse_Gestures_Edge__get_Y, 0, false, ::app::Uno::Float__typeof()),
        ::uNewFunction("get_Z", Change__Fuse_Gestures_Edge__get_Z, 0, false, ::app::Uno::Float__typeof()),
        ::uNewFunction(".ctor", Change__Fuse_Gestures_Edge__New_1, 0, true, Change__Fuse_Gestures_Edge__typeof(), ::app::Uno::UX::Property__Fuse_Gestures_Edge__typeof()),
        ::uNewFunctionVoid("set_DegreesX", Change__Fuse_Gestures_Edge__set_DegreesX, 0, false, ::app::Uno::Float__typeof()),
        ::uNewFunctionVoid("set_DegreesXY", Change__Fuse_Gestures_Edge__set_DegreesXY, 0, false, ::app::Uno::Float2__typeof()),
        ::uNewFunctionVoid("set_DegreesY", Change__Fuse_Gestures_Edge__set_DegreesY, 0, false, ::app::Uno::Float__typeof()),
        ::uNewFunctionVoid("set_DegreesZ", Change__Fuse_Gestures_Edge__set_DegreesZ, 0, false, ::app::Uno::Float__typeof()),
        ::uNewFunctionVoid("set_Target", Change__Fuse_Gestures_Edge__set_Target, 0, false, ::app::Uno::UX::Property__Fuse_Gestures_Edge__typeof()),
        ::uNewFunctionVoid("set_Value", Change__Fuse_Gestures_Edge__set_Value, 0, false, ::app::Fuse::Gestures::Edge__typeof()),
        ::uNewFunctionVoid("set_X", Change__Fuse_Gestures_Edge__set_X, 0, false, ::app::Uno::Float__typeof()),
        ::uNewFunctionVoid("set_XY", Change__Fuse_Gestures_Edge__set_XY, 0, false, ::app::Uno::Float2__typeof()),
        ::uNewFunctionVoid("set_Y", Change__Fuse_Gestures_Edge__set_Y, 0, false, ::app::Uno::Float__typeof()),
        ::uNewFunctionVoid("set_Z", Change__Fuse_Gestures_Edge__set_Z, 0, false, ::app::Uno::Float__typeof()));

    ::uRegisterType(type);
    return type;
}

void Change__Fuse_Gestures_Edge___ObjInit_2(Change__Fuse_Gestures_Edge* __this, ::app::Uno::UX::Property__Fuse_Gestures_Edge* target)
{
    ::app::Fuse::Animations::TrackAnimator___ObjInit_1(__this);

    if (target == NULL)
    {
        U_THROW(::app::Uno::ArgumentNullException__New_5(NULL, ::uGetConstString("target")));
    }

    __this->Target(target);

    if (__this->IsContinuous())
    {
        ::uObject* v;

        if ((::uType*)::app::Fuse::Gestures::Edge__typeof() == (::uType*)::app::Uno::Float__typeof())
        {
            v = (::uObject*)::app::Fuse::Animations::ConverterFloat__Singleton;
        }
        else if ((::uType*)::app::Fuse::Gestures::Edge__typeof() == (::uType*)::app::Uno::Float2__typeof())
        {
            v = (::uObject*)::app::Fuse::Animations::ConverterFloat2__Singleton;
        }
        else if ((::uType*)::app::Fuse::Gestures::Edge__typeof() == (::uType*)::app::Uno::Float3__typeof())
        {
            v = (::uObject*)::app::Fuse::Animations::ConverterFloat3__Singleton;
        }
        else if ((::uType*)::app::Fuse::Gestures::Edge__typeof() == (::uType*)::app::Uno::Float4__typeof())
        {
            v = (::uObject*)::app::Fuse::Animations::ConverterFloat4__Singleton;
        }
        else if ((::uType*)::app::Fuse::Gestures::Edge__typeof() == (::uType*)::app::Uno::Double__typeof())
        {
            v = (::uObject*)::app::Fuse::Animations::ConverterDouble__Singleton;
        }
        else
        {
            U_THROW(::app::Uno::Exception__New_2(NULL, ::app::Uno::String__op_Addition_1(NULL, ::uGetConstString("Unsupported change type: "), (::uObject*)(::uType*)::app::Fuse::Gestures::Edge__typeof())));
        }

        __this->ContinuousConverter = ::uCast< ::app::Fuse::Animations::Converter__Fuse_Gestures_Edge*>(v, ::app::Fuse::Animations::Converter__Fuse_Gestures_Edge__typeof());
    }
    else
    {
        __this->Mixer = ::app::Fuse::Animations::Mixer__get_DefaultDiscrete(NULL);
        __this->MarkDiscrete();
    }
}

::app::Fuse::Animations::AnimatorState* Change__Fuse_Gestures_Edge__CreateState(Change__Fuse_Gestures_Edge* __this, ::app::Fuse::Animations::CreateStateParams* p)
{
    if (__this->IsContinuous())
    {
        return (::app::Fuse::Animations::AnimatorState*)::app::Fuse::Animations::ContinuousTrackChangeState__Fuse_Gestures_Edge__New_1(NULL, __this, p);
    }

    return (::app::Fuse::Animations::AnimatorState*)::app::Fuse::Animations::DiscreteTrackChangeState__Fuse_Gestures_Edge__New_1(NULL, __this, p);
}

float Change__Fuse_Gestures_Edge__get_DegreesX(Change__Fuse_Gestures_Edge* __this)
{
    return ::app::Uno::Math__RadiansToDegrees_1(NULL, __this->X());
}

::app::Uno::Float2 Change__Fuse_Gestures_Edge__get_DegreesXY(Change__Fuse_Gestures_Edge* __this)
{
    return ::app::Uno::Float2__New_2(NULL, ::app::Uno::Math__RadiansToDegrees_1(NULL, __this->X()), ::app::Uno::Math__RadiansToDegrees_1(NULL, __this->Y()));
}

float Change__Fuse_Gestures_Edge__get_DegreesY(Change__Fuse_Gestures_Edge* __this)
{
    return ::app::Uno::Math__RadiansToDegrees_1(NULL, __this->Y());
}

float Change__Fuse_Gestures_Edge__get_DegreesZ(Change__Fuse_Gestures_Edge* __this)
{
    return ::app::Uno::Math__RadiansToDegrees_1(NULL, __this->Y());
}

bool Change__Fuse_Gestures_Edge__get_IsContinuous(Change__Fuse_Gestures_Edge* __this)
{
    return (((((::uType*)::app::Fuse::Gestures::Edge__typeof() == (::uType*)::app::Uno::Float__typeof()) || ((::uType*)::app::Fuse::Gestures::Edge__typeof() == (::uType*)::app::Uno::Float2__typeof())) || ((::uType*)::app::Fuse::Gestures::Edge__typeof() == (::uType*)::app::Uno::Float3__typeof())) || ((::uType*)::app::Fuse::Gestures::Edge__typeof() == (::uType*)::app::Uno::Float4__typeof())) || ((::uType*)::app::Fuse::Gestures::Edge__typeof() == (::uType*)::app::Uno::Double__typeof());
}

::app::Uno::UX::Property__Fuse_Gestures_Edge* Change__Fuse_Gestures_Edge__get_Target(Change__Fuse_Gestures_Edge* __this)
{
    return __this->_Target;
}

int Change__Fuse_Gestures_Edge__get_Value(Change__Fuse_Gestures_Edge* __this)
{
    return __this->IsContinuous() ? ::uPtr< ::app::Fuse::Animations::Converter__Fuse_Gestures_Edge*>(__this->ContinuousConverter)->Out(__this->_vectorValue) : ::uUnbox< int>(::app::Fuse::Gestures::Edge__typeof(), __this->_objectValue);
}

float Change__Fuse_Gestures_Edge__get_X(Change__Fuse_Gestures_Edge* __this)
{
    return __this->_vectorValue.X;
}

::app::Uno::Float2 Change__Fuse_Gestures_Edge__get_XY(Change__Fuse_Gestures_Edge* __this)
{
    ::app::Uno::Float4 ind_123 = __this->_vectorValue;
    return ::app::Uno::Float2__New_2(NULL, ind_123.X, ind_123.Y);
}

float Change__Fuse_Gestures_Edge__get_Y(Change__Fuse_Gestures_Edge* __this)
{
    return __this->_vectorValue.Y;
}

float Change__Fuse_Gestures_Edge__get_Z(Change__Fuse_Gestures_Edge* __this)
{
    return __this->_vectorValue.Z;
}

Change__Fuse_Gestures_Edge* Change__Fuse_Gestures_Edge__New_1(::uStatic* __this, ::app::Uno::UX::Property__Fuse_Gestures_Edge* target)
{
    Change__Fuse_Gestures_Edge* inst = (Change__Fuse_Gestures_Edge*)::uAllocObject(sizeof(Change__Fuse_Gestures_Edge), Change__Fuse_Gestures_Edge__typeof());
    inst->_ObjInit_2(target);
    return inst;
}

void Change__Fuse_Gestures_Edge__set_DegreesX(Change__Fuse_Gestures_Edge* __this, float value)
{
    __this->X(::app::Uno::Math__DegreesToRadians_1(NULL, value));
}

void Change__Fuse_Gestures_Edge__set_DegreesXY(Change__Fuse_Gestures_Edge* __this, ::app::Uno::Float2 value)
{
    __this->XY(::app::Uno::Float2__New_2(NULL, ::app::Uno::Math__DegreesToRadians_1(NULL, value.X), ::app::Uno::Math__DegreesToRadians_1(NULL, value.Y)));
}

void Change__Fuse_Gestures_Edge__set_DegreesY(Change__Fuse_Gestures_Edge* __this, float value)
{
    __this->Y(::app::Uno::Math__DegreesToRadians_1(NULL, value));
}

void Change__Fuse_Gestures_Edge__set_DegreesZ(Change__Fuse_Gestures_Edge* __this, float value)
{
    __this->Y(::app::Uno::Math__DegreesToRadians_1(NULL, value));
}

void Change__Fuse_Gestures_Edge__set_Target(Change__Fuse_Gestures_Edge* __this, ::app::Uno::UX::Property__Fuse_Gestures_Edge* value)
{
    __this->_Target = value;
}

void Change__Fuse_Gestures_Edge__set_Value(Change__Fuse_Gestures_Edge* __this, int value)
{
    if (__this->IsContinuous())
    {
        __this->_vectorValue = ::uPtr< ::app::Fuse::Animations::Converter__Fuse_Gestures_Edge*>(__this->ContinuousConverter)->In(value);
    }
    else
    {
        __this->_objectValue = ::uBox< int>(::app::Fuse::Gestures::Edge__typeof(), value);
    }
}

void Change__Fuse_Gestures_Edge__set_X(Change__Fuse_Gestures_Edge* __this, float value)
{
    __this->_vectorValue.X = value;
}

void Change__Fuse_Gestures_Edge__set_XY(Change__Fuse_Gestures_Edge* __this, ::app::Uno::Float2 value)
{
    __this->_vectorValue = ::app::Uno::Float4__New_6(NULL, value, __this->_vectorValue.Z, __this->_vectorValue.W);
}

void Change__Fuse_Gestures_Edge__set_Y(Change__Fuse_Gestures_Edge* __this, float value)
{
    __this->_vectorValue.Y = value;
}

void Change__Fuse_Gestures_Edge__set_Z(Change__Fuse_Gestures_Edge* __this, float value)
{
    __this->_vectorValue.Z = value;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Animations\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

Change__Fuse_Gestures_ScrollDirections__uType* Change__Fuse_Gestures_ScrollDirections__typeof()
{
    static ::uStaticStrong<Change__Fuse_Gestures_ScrollDirections__uType*> type;
    if (type != NULL) return type;

    type = (Change__Fuse_Gestures_ScrollDirections__uType*)::uAllocClassType(sizeof(Change__Fuse_Gestures_ScrollDirections__uType), "Fuse.Animations.Change<Fuse.Gestures.ScrollDirections>", false, 0, 2, 0);

    type->SetBaseType(::app::Fuse::Animations::TrackAnimator__typeof());
    type->__fp_CreateState = (::app::Fuse::Animations::AnimatorState*(*)(::app::Fuse::Animations::Animator*, ::app::Fuse::Animations::CreateStateParams*))Change__Fuse_Gestures_ScrollDirections__CreateState;

    type->SetStrongRefs(
        "_Target", offsetof(Change__Fuse_Gestures_ScrollDirections, _Target),
        "ContinuousConverter", offsetof(Change__Fuse_Gestures_ScrollDirections, ContinuousConverter));

    type->SetFields(1,
        ::uNewField("ContinuousConverter", NULL, offsetof(Change__Fuse_Gestures_ScrollDirections, ContinuousConverter), ::app::Fuse::Animations::Converter__Fuse_Gestures_ScrollDirections__typeof()));

    type->SetFunctions(22,
        ::uNewFunction("get_DegreesX", Change__Fuse_Gestures_ScrollDirections__get_DegreesX, 0, false, ::app::Uno::Float__typeof()),
        ::uNewFunction("get_DegreesXY", Change__Fuse_Gestures_ScrollDirections__get_DegreesXY, 0, false, ::app::Uno::Float2__typeof()),
        ::uNewFunction("get_DegreesY", Change__Fuse_Gestures_ScrollDirections__get_DegreesY, 0, false, ::app::Uno::Float__typeof()),
        ::uNewFunction("get_DegreesZ", Change__Fuse_Gestures_ScrollDirections__get_DegreesZ, 0, false, ::app::Uno::Float__typeof()),
        ::uNewFunction("get_IsContinuous", Change__Fuse_Gestures_ScrollDirections__get_IsContinuous, 0, false, ::app::Uno::Bool__typeof()),
        ::uNewFunction("get_Target", Change__Fuse_Gestures_ScrollDirections__get_Target, 0, false, ::app::Uno::UX::Property__Fuse_Gestures_ScrollDirections__typeof()),
        ::uNewFunction("get_Value", Change__Fuse_Gestures_ScrollDirections__get_Value, 0, false, ::app::Fuse::Gestures::ScrollDirections__typeof()),
        ::uNewFunction("get_X", Change__Fuse_Gestures_ScrollDirections__get_X, 0, false, ::app::Uno::Float__typeof()),
        ::uNewFunction("get_XY", Change__Fuse_Gestures_ScrollDirections__get_XY, 0, false, ::app::Uno::Float2__typeof()),
        ::uNewFunction("get_Y", Change__Fuse_Gestures_ScrollDirections__get_Y, 0, false, ::app::Uno::Float__typeof()),
        ::uNewFunction("get_Z", Change__Fuse_Gestures_ScrollDirections__get_Z, 0, false, ::app::Uno::Float__typeof()),
        ::uNewFunction(".ctor", Change__Fuse_Gestures_ScrollDirections__New_1, 0, true, Change__Fuse_Gestures_ScrollDirections__typeof(), ::app::Uno::UX::Property__Fuse_Gestures_ScrollDirections__typeof()),
        ::uNewFunctionVoid("set_DegreesX", Change__Fuse_Gestures_ScrollDirections__set_DegreesX, 0, false, ::app::Uno::Float__typeof()),
        ::uNewFunctionVoid("set_DegreesXY", Change__Fuse_Gestures_ScrollDirections__set_DegreesXY, 0, false, ::app::Uno::Float2__typeof()),
        ::uNewFunctionVoid("set_DegreesY", Change__Fuse_Gestures_ScrollDirections__set_DegreesY, 0, false, ::app::Uno::Float__typeof()),
        ::uNewFunctionVoid("set_DegreesZ", Change__Fuse_Gestures_ScrollDirections__set_DegreesZ, 0, false, ::app::Uno::Float__typeof()),
        ::uNewFunctionVoid("set_Target", Change__Fuse_Gestures_ScrollDirections__set_Target, 0, false, ::app::Uno::UX::Property__Fuse_Gestures_ScrollDirections__typeof()),
        ::uNewFunctionVoid("set_Value", Change__Fuse_Gestures_ScrollDirections__set_Value, 0, false, ::app::Fuse::Gestures::ScrollDirections__typeof()),
        ::uNewFunctionVoid("set_X", Change__Fuse_Gestures_ScrollDirections__set_X, 0, false, ::app::Uno::Float__typeof()),
        ::uNewFunctionVoid("set_XY", Change__Fuse_Gestures_ScrollDirections__set_XY, 0, false, ::app::Uno::Float2__typeof()),
        ::uNewFunctionVoid("set_Y", Change__Fuse_Gestures_ScrollDirections__set_Y, 0, false, ::app::Uno::Float__typeof()),
        ::uNewFunctionVoid("set_Z", Change__Fuse_Gestures_ScrollDirections__set_Z, 0, false, ::app::Uno::Float__typeof()));

    ::uRegisterType(type);
    return type;
}

void Change__Fuse_Gestures_ScrollDirections___ObjInit_2(Change__Fuse_Gestures_ScrollDirections* __this, ::app::Uno::UX::Property__Fuse_Gestures_ScrollDirections* target)
{
    ::app::Fuse::Animations::TrackAnimator___ObjInit_1(__this);

    if (target == NULL)
    {
        U_THROW(::app::Uno::ArgumentNullException__New_5(NULL, ::uGetConstString("target")));
    }

    __this->Target(target);

    if (__this->IsContinuous())
    {
        ::uObject* v;

        if ((::uType*)::app::Fuse::Gestures::ScrollDirections__typeof() == (::uType*)::app::Uno::Float__typeof())
        {
            v = (::uObject*)::app::Fuse::Animations::ConverterFloat__Singleton;
        }
        else if ((::uType*)::app::Fuse::Gestures::ScrollDirections__typeof() == (::uType*)::app::Uno::Float2__typeof())
        {
            v = (::uObject*)::app::Fuse::Animations::ConverterFloat2__Singleton;
        }
        else if ((::uType*)::app::Fuse::Gestures::ScrollDirections__typeof() == (::uType*)::app::Uno::Float3__typeof())
        {
            v = (::uObject*)::app::Fuse::Animations::ConverterFloat3__Singleton;
        }
        else if ((::uType*)::app::Fuse::Gestures::ScrollDirections__typeof() == (::uType*)::app::Uno::Float4__typeof())
        {
            v = (::uObject*)::app::Fuse::Animations::ConverterFloat4__Singleton;
        }
        else if ((::uType*)::app::Fuse::Gestures::ScrollDirections__typeof() == (::uType*)::app::Uno::Double__typeof())
        {
            v = (::uObject*)::app::Fuse::Animations::ConverterDouble__Singleton;
        }
        else
        {
            U_THROW(::app::Uno::Exception__New_2(NULL, ::app::Uno::String__op_Addition_1(NULL, ::uGetConstString("Unsupported change type: "), (::uObject*)(::uType*)::app::Fuse::Gestures::ScrollDirections__typeof())));
        }

        __this->ContinuousConverter = ::uCast< ::app::Fuse::Animations::Converter__Fuse_Gestures_ScrollDirections*>(v, ::app::Fuse::Animations::Converter__Fuse_Gestures_ScrollDirections__typeof());
    }
    else
    {
        __this->Mixer = ::app::Fuse::Animations::Mixer__get_DefaultDiscrete(NULL);
        __this->MarkDiscrete();
    }
}

::app::Fuse::Animations::AnimatorState* Change__Fuse_Gestures_ScrollDirections__CreateState(Change__Fuse_Gestures_ScrollDirections* __this, ::app::Fuse::Animations::CreateStateParams* p)
{
    if (__this->IsContinuous())
    {
        return (::app::Fuse::Animations::AnimatorState*)::app::Fuse::Animations::ContinuousTrackChangeState__Fuse_Gestures_ScrollDirections__New_1(NULL, __this, p);
    }

    return (::app::Fuse::Animations::AnimatorState*)::app::Fuse::Animations::DiscreteTrackChangeState__Fuse_Gestures_ScrollDirections__New_1(NULL, __this, p);
}

float Change__Fuse_Gestures_ScrollDirections__get_DegreesX(Change__Fuse_Gestures_ScrollDirections* __this)
{
    return ::app::Uno::Math__RadiansToDegrees_1(NULL, __this->X());
}

::app::Uno::Float2 Change__Fuse_Gestures_ScrollDirections__get_DegreesXY(Change__Fuse_Gestures_ScrollDirections* __this)
{
    return ::app::Uno::Float2__New_2(NULL, ::app::Uno::Math__RadiansToDegrees_1(NULL, __this->X()), ::app::Uno::Math__RadiansToDegrees_1(NULL, __this->Y()));
}

float Change__Fuse_Gestures_ScrollDirections__get_DegreesY(Change__Fuse_Gestures_ScrollDirections* __this)
{
    return ::app::Uno::Math__RadiansToDegrees_1(NULL, __this->Y());
}

float Change__Fuse_Gestures_ScrollDirections__get_DegreesZ(Change__Fuse_Gestures_ScrollDirections* __this)
{
    return ::app::Uno::Math__RadiansToDegrees_1(NULL, __this->Y());
}

bool Change__Fuse_Gestures_ScrollDirections__get_IsContinuous(Change__Fuse_Gestures_ScrollDirections* __this)
{
    return (((((::uType*)::app::Fuse::Gestures::ScrollDirections__typeof() == (::uType*)::app::Uno::Float__typeof()) || ((::uType*)::app::Fuse::Gestures::ScrollDirections__typeof() == (::uType*)::app::Uno::Float2__typeof())) || ((::uType*)::app::Fuse::Gestures::ScrollDirections__typeof() == (::uType*)::app::Uno::Float3__typeof())) || ((::uType*)::app::Fuse::Gestures::ScrollDirections__typeof() == (::uType*)::app::Uno::Float4__typeof())) || ((::uType*)::app::Fuse::Gestures::ScrollDirections__typeof() == (::uType*)::app::Uno::Double__typeof());
}

::app::Uno::UX::Property__Fuse_Gestures_ScrollDirections* Change__Fuse_Gestures_ScrollDirections__get_Target(Change__Fuse_Gestures_ScrollDirections* __this)
{
    return __this->_Target;
}

int Change__Fuse_Gestures_ScrollDirections__get_Value(Change__Fuse_Gestures_ScrollDirections* __this)
{
    return __this->IsContinuous() ? ::uPtr< ::app::Fuse::Animations::Converter__Fuse_Gestures_ScrollDirections*>(__this->ContinuousConverter)->Out(__this->_vectorValue) : ::uUnbox< int>(::app::Fuse::Gestures::ScrollDirections__typeof(), __this->_objectValue);
}

float Change__Fuse_Gestures_ScrollDirections__get_X(Change__Fuse_Gestures_ScrollDirections* __this)
{
    return __this->_vectorValue.X;
}

::app::Uno::Float2 Change__Fuse_Gestures_ScrollDirections__get_XY(Change__Fuse_Gestures_ScrollDirections* __this)
{
    ::app::Uno::Float4 ind_123 = __this->_vectorValue;
    return ::app::Uno::Float2__New_2(NULL, ind_123.X, ind_123.Y);
}

float Change__Fuse_Gestures_ScrollDirections__get_Y(Change__Fuse_Gestures_ScrollDirections* __this)
{
    return __this->_vectorValue.Y;
}

float Change__Fuse_Gestures_ScrollDirections__get_Z(Change__Fuse_Gestures_ScrollDirections* __this)
{
    return __this->_vectorValue.Z;
}

Change__Fuse_Gestures_ScrollDirections* Change__Fuse_Gestures_ScrollDirections__New_1(::uStatic* __this, ::app::Uno::UX::Property__Fuse_Gestures_ScrollDirections* target)
{
    Change__Fuse_Gestures_ScrollDirections* inst = (Change__Fuse_Gestures_ScrollDirections*)::uAllocObject(sizeof(Change__Fuse_Gestures_ScrollDirections), Change__Fuse_Gestures_ScrollDirections__typeof());
    inst->_ObjInit_2(target);
    return inst;
}

void Change__Fuse_Gestures_ScrollDirections__set_DegreesX(Change__Fuse_Gestures_ScrollDirections* __this, float value)
{
    __this->X(::app::Uno::Math__DegreesToRadians_1(NULL, value));
}

void Change__Fuse_Gestures_ScrollDirections__set_DegreesXY(Change__Fuse_Gestures_ScrollDirections* __this, ::app::Uno::Float2 value)
{
    __this->XY(::app::Uno::Float2__New_2(NULL, ::app::Uno::Math__DegreesToRadians_1(NULL, value.X), ::app::Uno::Math__DegreesToRadians_1(NULL, value.Y)));
}

void Change__Fuse_Gestures_ScrollDirections__set_DegreesY(Change__Fuse_Gestures_ScrollDirections* __this, float value)
{
    __this->Y(::app::Uno::Math__DegreesToRadians_1(NULL, value));
}

void Change__Fuse_Gestures_ScrollDirections__set_DegreesZ(Change__Fuse_Gestures_ScrollDirections* __this, float value)
{
    __this->Y(::app::Uno::Math__DegreesToRadians_1(NULL, value));
}

void Change__Fuse_Gestures_ScrollDirections__set_Target(Change__Fuse_Gestures_ScrollDirections* __this, ::app::Uno::UX::Property__Fuse_Gestures_ScrollDirections* value)
{
    __this->_Target = value;
}

void Change__Fuse_Gestures_ScrollDirections__set_Value(Change__Fuse_Gestures_ScrollDirections* __this, int value)
{
    if (__this->IsContinuous())
    {
        __this->_vectorValue = ::uPtr< ::app::Fuse::Animations::Converter__Fuse_Gestures_ScrollDirections*>(__this->ContinuousConverter)->In(value);
    }
    else
    {
        __this->_objectValue = ::uBox< int>(::app::Fuse::Gestures::ScrollDirections__typeof(), value);
    }
}

void Change__Fuse_Gestures_ScrollDirections__set_X(Change__Fuse_Gestures_ScrollDirections* __this, float value)
{
    __this->_vectorValue.X = value;
}

void Change__Fuse_Gestures_ScrollDirections__set_XY(Change__Fuse_Gestures_ScrollDirections* __this, ::app::Uno::Float2 value)
{
    __this->_vectorValue = ::app::Uno::Float4__New_6(NULL, value, __this->_vectorValue.Z, __this->_vectorValue.W);
}

void Change__Fuse_Gestures_ScrollDirections__set_Y(Change__Fuse_Gestures_ScrollDirections* __this, float value)
{
    __this->_vectorValue.Y = value;
}

void Change__Fuse_Gestures_ScrollDirections__set_Z(Change__Fuse_Gestures_ScrollDirections* __this, float value)
{
    __this->_vectorValue.Z = value;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Animations\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

Change__Fuse_Layouts_Dock__uType* Change__Fuse_Layouts_Dock__typeof()
{
    static ::uStaticStrong<Change__Fuse_Layouts_Dock__uType*> type;
    if (type != NULL) return type;

    type = (Change__Fuse_Layouts_Dock__uType*)::uAllocClassType(sizeof(Change__Fuse_Layouts_Dock__uType), "Fuse.Animations.Change<Fuse.Layouts.Dock>", false, 0, 2, 0);

    type->SetBaseType(::app::Fuse::Animations::TrackAnimator__typeof());
    type->__fp_CreateState = (::app::Fuse::Animations::AnimatorState*(*)(::app::Fuse::Animations::Animator*, ::app::Fuse::Animations::CreateStateParams*))Change__Fuse_Layouts_Dock__CreateState;

    type->SetStrongRefs(
        "_Target", offsetof(Change__Fuse_Layouts_Dock, _Target),
        "ContinuousConverter", offsetof(Change__Fuse_Layouts_Dock, ContinuousConverter));

    type->SetFields(1,
        ::uNewField("ContinuousConverter", NULL, offsetof(Change__Fuse_Layouts_Dock, ContinuousConverter), ::app::Fuse::Animations::Converter__Fuse_Layouts_Dock__typeof()));

    type->SetFunctions(22,
        ::uNewFunction("get_DegreesX", Change__Fuse_Layouts_Dock__get_DegreesX, 0, false, ::app::Uno::Float__typeof()),
        ::uNewFunction("get_DegreesXY", Change__Fuse_Layouts_Dock__get_DegreesXY, 0, false, ::app::Uno::Float2__typeof()),
        ::uNewFunction("get_DegreesY", Change__Fuse_Layouts_Dock__get_DegreesY, 0, false, ::app::Uno::Float__typeof()),
        ::uNewFunction("get_DegreesZ", Change__Fuse_Layouts_Dock__get_DegreesZ, 0, false, ::app::Uno::Float__typeof()),
        ::uNewFunction("get_IsContinuous", Change__Fuse_Layouts_Dock__get_IsContinuous, 0, false, ::app::Uno::Bool__typeof()),
        ::uNewFunction("get_Target", Change__Fuse_Layouts_Dock__get_Target, 0, false, ::app::Uno::UX::Property__Fuse_Layouts_Dock__typeof()),
        ::uNewFunction("get_Value", Change__Fuse_Layouts_Dock__get_Value, 0, false, ::app::Fuse::Layouts::Dock__typeof()),
        ::uNewFunction("get_X", Change__Fuse_Layouts_Dock__get_X, 0, false, ::app::Uno::Float__typeof()),
        ::uNewFunction("get_XY", Change__Fuse_Layouts_Dock__get_XY, 0, false, ::app::Uno::Float2__typeof()),
        ::uNewFunction("get_Y", Change__Fuse_Layouts_Dock__get_Y, 0, false, ::app::Uno::Float__typeof()),
        ::uNewFunction("get_Z", Change__Fuse_Layouts_Dock__get_Z, 0, false, ::app::Uno::Float__typeof()),
        ::uNewFunction(".ctor", Change__Fuse_Layouts_Dock__New_1, 0, true, Change__Fuse_Layouts_Dock__typeof(), ::app::Uno::UX::Property__Fuse_Layouts_Dock__typeof()),
        ::uNewFunctionVoid("set_DegreesX", Change__Fuse_Layouts_Dock__set_DegreesX, 0, false, ::app::Uno::Float__typeof()),
        ::uNewFunctionVoid("set_DegreesXY", Change__Fuse_Layouts_Dock__set_DegreesXY, 0, false, ::app::Uno::Float2__typeof()),
        ::uNewFunctionVoid("set_DegreesY", Change__Fuse_Layouts_Dock__set_DegreesY, 0, false, ::app::Uno::Float__typeof()),
        ::uNewFunctionVoid("set_DegreesZ", Change__Fuse_Layouts_Dock__set_DegreesZ, 0, false, ::app::Uno::Float__typeof()),
        ::uNewFunctionVoid("set_Target", Change__Fuse_Layouts_Dock__set_Target, 0, false, ::app::Uno::UX::Property__Fuse_Layouts_Dock__typeof()),
        ::uNewFunctionVoid("set_Value", Change__Fuse_Layouts_Dock__set_Value, 0, false, ::app::Fuse::Layouts::Dock__typeof()),
        ::uNewFunctionVoid("set_X", Change__Fuse_Layouts_Dock__set_X, 0, false, ::app::Uno::Float__typeof()),
        ::uNewFunctionVoid("set_XY", Change__Fuse_Layouts_Dock__set_XY, 0, false, ::app::Uno::Float2__typeof()),
        ::uNewFunctionVoid("set_Y", Change__Fuse_Layouts_Dock__set_Y, 0, false, ::app::Uno::Float__typeof()),
        ::uNewFunctionVoid("set_Z", Change__Fuse_Layouts_Dock__set_Z, 0, false, ::app::Uno::Float__typeof()));

    ::uRegisterType(type);
    return type;
}

void Change__Fuse_Layouts_Dock___ObjInit_2(Change__Fuse_Layouts_Dock* __this, ::app::Uno::UX::Property__Fuse_Layouts_Dock* target)
{
    ::app::Fuse::Animations::TrackAnimator___ObjInit_1(__this);

    if (target == NULL)
    {
        U_THROW(::app::Uno::ArgumentNullException__New_5(NULL, ::uGetConstString("target")));
    }

    __this->Target(target);

    if (__this->IsContinuous())
    {
        ::uObject* v;

        if ((::uType*)::app::Fuse::Layouts::Dock__typeof() == (::uType*)::app::Uno::Float__typeof())
        {
            v = (::uObject*)::app::Fuse::Animations::ConverterFloat__Singleton;
        }
        else if ((::uType*)::app::Fuse::Layouts::Dock__typeof() == (::uType*)::app::Uno::Float2__typeof())
        {
            v = (::uObject*)::app::Fuse::Animations::ConverterFloat2__Singleton;
        }
        else if ((::uType*)::app::Fuse::Layouts::Dock__typeof() == (::uType*)::app::Uno::Float3__typeof())
        {
            v = (::uObject*)::app::Fuse::Animations::ConverterFloat3__Singleton;
        }
        else if ((::uType*)::app::Fuse::Layouts::Dock__typeof() == (::uType*)::app::Uno::Float4__typeof())
        {
            v = (::uObject*)::app::Fuse::Animations::ConverterFloat4__Singleton;
        }
        else if ((::uType*)::app::Fuse::Layouts::Dock__typeof() == (::uType*)::app::Uno::Double__typeof())
        {
            v = (::uObject*)::app::Fuse::Animations::ConverterDouble__Singleton;
        }
        else
        {
            U_THROW(::app::Uno::Exception__New_2(NULL, ::app::Uno::String__op_Addition_1(NULL, ::uGetConstString("Unsupported change type: "), (::uObject*)(::uType*)::app::Fuse::Layouts::Dock__typeof())));
        }

        __this->ContinuousConverter = ::uCast< ::app::Fuse::Animations::Converter__Fuse_Layouts_Dock*>(v, ::app::Fuse::Animations::Converter__Fuse_Layouts_Dock__typeof());
    }
    else
    {
        __this->Mixer = ::app::Fuse::Animations::Mixer__get_DefaultDiscrete(NULL);
        __this->MarkDiscrete();
    }
}

::app::Fuse::Animations::AnimatorState* Change__Fuse_Layouts_Dock__CreateState(Change__Fuse_Layouts_Dock* __this, ::app::Fuse::Animations::CreateStateParams* p)
{
    if (__this->IsContinuous())
    {
        return (::app::Fuse::Animations::AnimatorState*)::app::Fuse::Animations::ContinuousTrackChangeState__Fuse_Layouts_Dock__New_1(NULL, __this, p);
    }

    return (::app::Fuse::Animations::AnimatorState*)::app::Fuse::Animations::DiscreteTrackChangeState__Fuse_Layouts_Dock__New_1(NULL, __this, p);
}

float Change__Fuse_Layouts_Dock__get_DegreesX(Change__Fuse_Layouts_Dock* __this)
{
    return ::app::Uno::Math__RadiansToDegrees_1(NULL, __this->X());
}

::app::Uno::Float2 Change__Fuse_Layouts_Dock__get_DegreesXY(Change__Fuse_Layouts_Dock* __this)
{
    return ::app::Uno::Float2__New_2(NULL, ::app::Uno::Math__RadiansToDegrees_1(NULL, __this->X()), ::app::Uno::Math__RadiansToDegrees_1(NULL, __this->Y()));
}

float Change__Fuse_Layouts_Dock__get_DegreesY(Change__Fuse_Layouts_Dock* __this)
{
    return ::app::Uno::Math__RadiansToDegrees_1(NULL, __this->Y());
}

float Change__Fuse_Layouts_Dock__get_DegreesZ(Change__Fuse_Layouts_Dock* __this)
{
    return ::app::Uno::Math__RadiansToDegrees_1(NULL, __this->Y());
}

bool Change__Fuse_Layouts_Dock__get_IsContinuous(Change__Fuse_Layouts_Dock* __this)
{
    return (((((::uType*)::app::Fuse::Layouts::Dock__typeof() == (::uType*)::app::Uno::Float__typeof()) || ((::uType*)::app::Fuse::Layouts::Dock__typeof() == (::uType*)::app::Uno::Float2__typeof())) || ((::uType*)::app::Fuse::Layouts::Dock__typeof() == (::uType*)::app::Uno::Float3__typeof())) || ((::uType*)::app::Fuse::Layouts::Dock__typeof() == (::uType*)::app::Uno::Float4__typeof())) || ((::uType*)::app::Fuse::Layouts::Dock__typeof() == (::uType*)::app::Uno::Double__typeof());
}

::app::Uno::UX::Property__Fuse_Layouts_Dock* Change__Fuse_Layouts_Dock__get_Target(Change__Fuse_Layouts_Dock* __this)
{
    return __this->_Target;
}

int Change__Fuse_Layouts_Dock__get_Value(Change__Fuse_Layouts_Dock* __this)
{
    return __this->IsContinuous() ? ::uPtr< ::app::Fuse::Animations::Converter__Fuse_Layouts_Dock*>(__this->ContinuousConverter)->Out(__this->_vectorValue) : ::uUnbox< int>(::app::Fuse::Layouts::Dock__typeof(), __this->_objectValue);
}

float Change__Fuse_Layouts_Dock__get_X(Change__Fuse_Layouts_Dock* __this)
{
    return __this->_vectorValue.X;
}

::app::Uno::Float2 Change__Fuse_Layouts_Dock__get_XY(Change__Fuse_Layouts_Dock* __this)
{
    ::app::Uno::Float4 ind_123 = __this->_vectorValue;
    return ::app::Uno::Float2__New_2(NULL, ind_123.X, ind_123.Y);
}

float Change__Fuse_Layouts_Dock__get_Y(Change__Fuse_Layouts_Dock* __this)
{
    return __this->_vectorValue.Y;
}

float Change__Fuse_Layouts_Dock__get_Z(Change__Fuse_Layouts_Dock* __this)
{
    return __this->_vectorValue.Z;
}

Change__Fuse_Layouts_Dock* Change__Fuse_Layouts_Dock__New_1(::uStatic* __this, ::app::Uno::UX::Property__Fuse_Layouts_Dock* target)
{
    Change__Fuse_Layouts_Dock* inst = (Change__Fuse_Layouts_Dock*)::uAllocObject(sizeof(Change__Fuse_Layouts_Dock), Change__Fuse_Layouts_Dock__typeof());
    inst->_ObjInit_2(target);
    return inst;
}

void Change__Fuse_Layouts_Dock__set_DegreesX(Change__Fuse_Layouts_Dock* __this, float value)
{
    __this->X(::app::Uno::Math__DegreesToRadians_1(NULL, value));
}

void Change__Fuse_Layouts_Dock__set_DegreesXY(Change__Fuse_Layouts_Dock* __this, ::app::Uno::Float2 value)
{
    __this->XY(::app::Uno::Float2__New_2(NULL, ::app::Uno::Math__DegreesToRadians_1(NULL, value.X), ::app::Uno::Math__DegreesToRadians_1(NULL, value.Y)));
}

void Change__Fuse_Layouts_Dock__set_DegreesY(Change__Fuse_Layouts_Dock* __this, float value)
{
    __this->Y(::app::Uno::Math__DegreesToRadians_1(NULL, value));
}

void Change__Fuse_Layouts_Dock__set_DegreesZ(Change__Fuse_Layouts_Dock* __this, float value)
{
    __this->Y(::app::Uno::Math__DegreesToRadians_1(NULL, value));
}

void Change__Fuse_Layouts_Dock__set_Target(Change__Fuse_Layouts_Dock* __this, ::app::Uno::UX::Property__Fuse_Layouts_Dock* value)
{
    __this->_Target = value;
}

void Change__Fuse_Layouts_Dock__set_Value(Change__Fuse_Layouts_Dock* __this, int value)
{
    if (__this->IsContinuous())
    {
        __this->_vectorValue = ::uPtr< ::app::Fuse::Animations::Converter__Fuse_Layouts_Dock*>(__this->ContinuousConverter)->In(value);
    }
    else
    {
        __this->_objectValue = ::uBox< int>(::app::Fuse::Layouts::Dock__typeof(), value);
    }
}

void Change__Fuse_Layouts_Dock__set_X(Change__Fuse_Layouts_Dock* __this, float value)
{
    __this->_vectorValue.X = value;
}

void Change__Fuse_Layouts_Dock__set_XY(Change__Fuse_Layouts_Dock* __this, ::app::Uno::Float2 value)
{
    __this->_vectorValue = ::app::Uno::Float4__New_6(NULL, value, __this->_vectorValue.Z, __this->_vectorValue.W);
}

void Change__Fuse_Layouts_Dock__set_Y(Change__Fuse_Layouts_Dock* __this, float value)
{
    __this->_vectorValue.Y = value;
}

void Change__Fuse_Layouts_Dock__set_Z(Change__Fuse_Layouts_Dock* __this, float value)
{
    __this->_vectorValue.Z = value;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Animations\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

Change__Fuse_Layouts_FlowDirection__uType* Change__Fuse_Layouts_FlowDirection__typeof()
{
    static ::uStaticStrong<Change__Fuse_Layouts_FlowDirection__uType*> type;
    if (type != NULL) return type;

    type = (Change__Fuse_Layouts_FlowDirection__uType*)::uAllocClassType(sizeof(Change__Fuse_Layouts_FlowDirection__uType), "Fuse.Animations.Change<Fuse.Layouts.FlowDirection>", false, 0, 2, 0);

    type->SetBaseType(::app::Fuse::Animations::TrackAnimator__typeof());
    type->__fp_CreateState = (::app::Fuse::Animations::AnimatorState*(*)(::app::Fuse::Animations::Animator*, ::app::Fuse::Animations::CreateStateParams*))Change__Fuse_Layouts_FlowDirection__CreateState;

    type->SetStrongRefs(
        "_Target", offsetof(Change__Fuse_Layouts_FlowDirection, _Target),
        "ContinuousConverter", offsetof(Change__Fuse_Layouts_FlowDirection, ContinuousConverter));

    type->SetFields(1,
        ::uNewField("ContinuousConverter", NULL, offsetof(Change__Fuse_Layouts_FlowDirection, ContinuousConverter), ::app::Fuse::Animations::Converter__Fuse_Layouts_FlowDirection__typeof()));

    type->SetFunctions(22,
        ::uNewFunction("get_DegreesX", Change__Fuse_Layouts_FlowDirection__get_DegreesX, 0, false, ::app::Uno::Float__typeof()),
        ::uNewFunction("get_DegreesXY", Change__Fuse_Layouts_FlowDirection__get_DegreesXY, 0, false, ::app::Uno::Float2__typeof()),
        ::uNewFunction("get_DegreesY", Change__Fuse_Layouts_FlowDirection__get_DegreesY, 0, false, ::app::Uno::Float__typeof()),
        ::uNewFunction("get_DegreesZ", Change__Fuse_Layouts_FlowDirection__get_DegreesZ, 0, false, ::app::Uno::Float__typeof()),
        ::uNewFunction("get_IsContinuous", Change__Fuse_Layouts_FlowDirection__get_IsContinuous, 0, false, ::app::Uno::Bool__typeof()),
        ::uNewFunction("get_Target", Change__Fuse_Layouts_FlowDirection__get_Target, 0, false, ::app::Uno::UX::Property__Fuse_Layouts_FlowDirection__typeof()),
        ::uNewFunction("get_Value", Change__Fuse_Layouts_FlowDirection__get_Value, 0, false, ::app::Fuse::Layouts::FlowDirection__typeof()),
        ::uNewFunction("get_X", Change__Fuse_Layouts_FlowDirection__get_X, 0, false, ::app::Uno::Float__typeof()),
        ::uNewFunction("get_XY", Change__Fuse_Layouts_FlowDirection__get_XY, 0, false, ::app::Uno::Float2__typeof()),
        ::uNewFunction("get_Y", Change__Fuse_Layouts_FlowDirection__get_Y, 0, false, ::app::Uno::Float__typeof()),
        ::uNewFunction("get_Z", Change__Fuse_Layouts_FlowDirection__get_Z, 0, false, ::app::Uno::Float__typeof()),
        ::uNewFunction(".ctor", Change__Fuse_Layouts_FlowDirection__New_1, 0, true, Change__Fuse_Layouts_FlowDirection__typeof(), ::app::Uno::UX::Property__Fuse_Layouts_FlowDirection__typeof()),
        ::uNewFunctionVoid("set_DegreesX", Change__Fuse_Layouts_FlowDirection__set_DegreesX, 0, false, ::app::Uno::Float__typeof()),
        ::uNewFunctionVoid("set_DegreesXY", Change__Fuse_Layouts_FlowDirection__set_DegreesXY, 0, false, ::app::Uno::Float2__typeof()),
        ::uNewFunctionVoid("set_DegreesY", Change__Fuse_Layouts_FlowDirection__set_DegreesY, 0, false, ::app::Uno::Float__typeof()),
        ::uNewFunctionVoid("set_DegreesZ", Change__Fuse_Layouts_FlowDirection__set_DegreesZ, 0, false, ::app::Uno::Float__typeof()),
        ::uNewFunctionVoid("set_Target", Change__Fuse_Layouts_FlowDirection__set_Target, 0, false, ::app::Uno::UX::Property__Fuse_Layouts_FlowDirection__typeof()),
        ::uNewFunctionVoid("set_Value", Change__Fuse_Layouts_FlowDirection__set_Value, 0, false, ::app::Fuse::Layouts::FlowDirection__typeof()),
        ::uNewFunctionVoid("set_X", Change__Fuse_Layouts_FlowDirection__set_X, 0, false, ::app::Uno::Float__typeof()),
        ::uNewFunctionVoid("set_XY", Change__Fuse_Layouts_FlowDirection__set_XY, 0, false, ::app::Uno::Float2__typeof()),
        ::uNewFunctionVoid("set_Y", Change__Fuse_Layouts_FlowDirection__set_Y, 0, false, ::app::Uno::Float__typeof()),
        ::uNewFunctionVoid("set_Z", Change__Fuse_Layouts_FlowDirection__set_Z, 0, false, ::app::Uno::Float__typeof()));

    ::uRegisterType(type);
    return type;
}

void Change__Fuse_Layouts_FlowDirection___ObjInit_2(Change__Fuse_Layouts_FlowDirection* __this, ::app::Uno::UX::Property__Fuse_Layouts_FlowDirection* target)
{
    ::app::Fuse::Animations::TrackAnimator___ObjInit_1(__this);

    if (target == NULL)
    {
        U_THROW(::app::Uno::ArgumentNullException__New_5(NULL, ::uGetConstString("target")));
    }

    __this->Target(target);

    if (__this->IsContinuous())
    {
        ::uObject* v;

        if ((::uType*)::app::Fuse::Layouts::FlowDirection__typeof() == (::uType*)::app::Uno::Float__typeof())
        {
            v = (::uObject*)::app::Fuse::Animations::ConverterFloat__Singleton;
        }
        else if ((::uType*)::app::Fuse::Layouts::FlowDirection__typeof() == (::uType*)::app::Uno::Float2__typeof())
        {
            v = (::uObject*)::app::Fuse::Animations::ConverterFloat2__Singleton;
        }
        else if ((::uType*)::app::Fuse::Layouts::FlowDirection__typeof() == (::uType*)::app::Uno::Float3__typeof())
        {
            v = (::uObject*)::app::Fuse::Animations::ConverterFloat3__Singleton;
        }
        else if ((::uType*)::app::Fuse::Layouts::FlowDirection__typeof() == (::uType*)::app::Uno::Float4__typeof())
        {
            v = (::uObject*)::app::Fuse::Animations::ConverterFloat4__Singleton;
        }
        else if ((::uType*)::app::Fuse::Layouts::FlowDirection__typeof() == (::uType*)::app::Uno::Double__typeof())
        {
            v = (::uObject*)::app::Fuse::Animations::ConverterDouble__Singleton;
        }
        else
        {
            U_THROW(::app::Uno::Exception__New_2(NULL, ::app::Uno::String__op_Addition_1(NULL, ::uGetConstString("Unsupported change type: "), (::uObject*)(::uType*)::app::Fuse::Layouts::FlowDirection__typeof())));
        }

        __this->ContinuousConverter = ::uCast< ::app::Fuse::Animations::Converter__Fuse_Layouts_FlowDirection*>(v, ::app::Fuse::Animations::Converter__Fuse_Layouts_FlowDirection__typeof());
    }
    else
    {
        __this->Mixer = ::app::Fuse::Animations::Mixer__get_DefaultDiscrete(NULL);
        __this->MarkDiscrete();
    }
}

::app::Fuse::Animations::AnimatorState* Change__Fuse_Layouts_FlowDirection__CreateState(Change__Fuse_Layouts_FlowDirection* __this, ::app::Fuse::Animations::CreateStateParams* p)
{
    if (__this->IsContinuous())
    {
        return (::app::Fuse::Animations::AnimatorState*)::app::Fuse::Animations::ContinuousTrackChangeState__Fuse_Layouts_FlowDirection__New_1(NULL, __this, p);
    }

    return (::app::Fuse::Animations::AnimatorState*)::app::Fuse::Animations::DiscreteTrackChangeState__Fuse_Layouts_FlowDirection__New_1(NULL, __this, p);
}

float Change__Fuse_Layouts_FlowDirection__get_DegreesX(Change__Fuse_Layouts_FlowDirection* __this)
{
    return ::app::Uno::Math__RadiansToDegrees_1(NULL, __this->X());
}

::app::Uno::Float2 Change__Fuse_Layouts_FlowDirection__get_DegreesXY(Change__Fuse_Layouts_FlowDirection* __this)
{
    return ::app::Uno::Float2__New_2(NULL, ::app::Uno::Math__RadiansToDegrees_1(NULL, __this->X()), ::app::Uno::Math__RadiansToDegrees_1(NULL, __this->Y()));
}

float Change__Fuse_Layouts_FlowDirection__get_DegreesY(Change__Fuse_Layouts_FlowDirection* __this)
{
    return ::app::Uno::Math__RadiansToDegrees_1(NULL, __this->Y());
}

float Change__Fuse_Layouts_FlowDirection__get_DegreesZ(Change__Fuse_Layouts_FlowDirection* __this)
{
    return ::app::Uno::Math__RadiansToDegrees_1(NULL, __this->Y());
}

bool Change__Fuse_Layouts_FlowDirection__get_IsContinuous(Change__Fuse_Layouts_FlowDirection* __this)
{
    return (((((::uType*)::app::Fuse::Layouts::FlowDirection__typeof() == (::uType*)::app::Uno::Float__typeof()) || ((::uType*)::app::Fuse::Layouts::FlowDirection__typeof() == (::uType*)::app::Uno::Float2__typeof())) || ((::uType*)::app::Fuse::Layouts::FlowDirection__typeof() == (::uType*)::app::Uno::Float3__typeof())) || ((::uType*)::app::Fuse::Layouts::FlowDirection__typeof() == (::uType*)::app::Uno::Float4__typeof())) || ((::uType*)::app::Fuse::Layouts::FlowDirection__typeof() == (::uType*)::app::Uno::Double__typeof());
}

::app::Uno::UX::Property__Fuse_Layouts_FlowDirection* Change__Fuse_Layouts_FlowDirection__get_Target(Change__Fuse_Layouts_FlowDirection* __this)
{
    return __this->_Target;
}

int Change__Fuse_Layouts_FlowDirection__get_Value(Change__Fuse_Layouts_FlowDirection* __this)
{
    return __this->IsContinuous() ? ::uPtr< ::app::Fuse::Animations::Converter__Fuse_Layouts_FlowDirection*>(__this->ContinuousConverter)->Out(__this->_vectorValue) : ::uUnbox< int>(::app::Fuse::Layouts::FlowDirection__typeof(), __this->_objectValue);
}

float Change__Fuse_Layouts_FlowDirection__get_X(Change__Fuse_Layouts_FlowDirection* __this)
{
    return __this->_vectorValue.X;
}

::app::Uno::Float2 Change__Fuse_Layouts_FlowDirection__get_XY(Change__Fuse_Layouts_FlowDirection* __this)
{
    ::app::Uno::Float4 ind_123 = __this->_vectorValue;
    return ::app::Uno::Float2__New_2(NULL, ind_123.X, ind_123.Y);
}

float Change__Fuse_Layouts_FlowDirection__get_Y(Change__Fuse_Layouts_FlowDirection* __this)
{
    return __this->_vectorValue.Y;
}

float Change__Fuse_Layouts_FlowDirection__get_Z(Change__Fuse_Layouts_FlowDirection* __this)
{
    return __this->_vectorValue.Z;
}

Change__Fuse_Layouts_FlowDirection* Change__Fuse_Layouts_FlowDirection__New_1(::uStatic* __this, ::app::Uno::UX::Property__Fuse_Layouts_FlowDirection* target)
{
    Change__Fuse_Layouts_FlowDirection* inst = (Change__Fuse_Layouts_FlowDirection*)::uAllocObject(sizeof(Change__Fuse_Layouts_FlowDirection), Change__Fuse_Layouts_FlowDirection__typeof());
    inst->_ObjInit_2(target);
    return inst;
}

void Change__Fuse_Layouts_FlowDirection__set_DegreesX(Change__Fuse_Layouts_FlowDirection* __this, float value)
{
    __this->X(::app::Uno::Math__DegreesToRadians_1(NULL, value));
}

void Change__Fuse_Layouts_FlowDirection__set_DegreesXY(Change__Fuse_Layouts_FlowDirection* __this, ::app::Uno::Float2 value)
{
    __this->XY(::app::Uno::Float2__New_2(NULL, ::app::Uno::Math__DegreesToRadians_1(NULL, value.X), ::app::Uno::Math__DegreesToRadians_1(NULL, value.Y)));
}

void Change__Fuse_Layouts_FlowDirection__set_DegreesY(Change__Fuse_Layouts_FlowDirection* __this, float value)
{
    __this->Y(::app::Uno::Math__DegreesToRadians_1(NULL, value));
}

void Change__Fuse_Layouts_FlowDirection__set_DegreesZ(Change__Fuse_Layouts_FlowDirection* __this, float value)
{
    __this->Y(::app::Uno::Math__DegreesToRadians_1(NULL, value));
}

void Change__Fuse_Layouts_FlowDirection__set_Target(Change__Fuse_Layouts_FlowDirection* __this, ::app::Uno::UX::Property__Fuse_Layouts_FlowDirection* value)
{
    __this->_Target = value;
}

void Change__Fuse_Layouts_FlowDirection__set_Value(Change__Fuse_Layouts_FlowDirection* __this, int value)
{
    if (__this->IsContinuous())
    {
        __this->_vectorValue = ::uPtr< ::app::Fuse::Animations::Converter__Fuse_Layouts_FlowDirection*>(__this->ContinuousConverter)->In(value);
    }
    else
    {
        __this->_objectValue = ::uBox< int>(::app::Fuse::Layouts::FlowDirection__typeof(), value);
    }
}

void Change__Fuse_Layouts_FlowDirection__set_X(Change__Fuse_Layouts_FlowDirection* __this, float value)
{
    __this->_vectorValue.X = value;
}

void Change__Fuse_Layouts_FlowDirection__set_XY(Change__Fuse_Layouts_FlowDirection* __this, ::app::Uno::Float2 value)
{
    __this->_vectorValue = ::app::Uno::Float4__New_6(NULL, value, __this->_vectorValue.Z, __this->_vectorValue.W);
}

void Change__Fuse_Layouts_FlowDirection__set_Y(Change__Fuse_Layouts_FlowDirection* __this, float value)
{
    __this->_vectorValue.Y = value;
}

void Change__Fuse_Layouts_FlowDirection__set_Z(Change__Fuse_Layouts_FlowDirection* __this, float value)
{
    __this->_vectorValue.Z = value;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Animations\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

Change__Fuse_Layouts_Metric__uType* Change__Fuse_Layouts_Metric__typeof()
{
    static ::uStaticStrong<Change__Fuse_Layouts_Metric__uType*> type;
    if (type != NULL) return type;

    type = (Change__Fuse_Layouts_Metric__uType*)::uAllocClassType(sizeof(Change__Fuse_Layouts_Metric__uType), "Fuse.Animations.Change<Fuse.Layouts.Metric>", false, 0, 2, 0);

    type->SetBaseType(::app::Fuse::Animations::TrackAnimator__typeof());
    type->__fp_CreateState = (::app::Fuse::Animations::AnimatorState*(*)(::app::Fuse::Animations::Animator*, ::app::Fuse::Animations::CreateStateParams*))Change__Fuse_Layouts_Metric__CreateState;

    type->SetStrongRefs(
        "_Target", offsetof(Change__Fuse_Layouts_Metric, _Target),
        "ContinuousConverter", offsetof(Change__Fuse_Layouts_Metric, ContinuousConverter));

    type->SetFields(1,
        ::uNewField("ContinuousConverter", NULL, offsetof(Change__Fuse_Layouts_Metric, ContinuousConverter), ::app::Fuse::Animations::Converter__Fuse_Layouts_Metric__typeof()));

    type->SetFunctions(22,
        ::uNewFunction("get_DegreesX", Change__Fuse_Layouts_Metric__get_DegreesX, 0, false, ::app::Uno::Float__typeof()),
        ::uNewFunction("get_DegreesXY", Change__Fuse_Layouts_Metric__get_DegreesXY, 0, false, ::app::Uno::Float2__typeof()),
        ::uNewFunction("get_DegreesY", Change__Fuse_Layouts_Metric__get_DegreesY, 0, false, ::app::Uno::Float__typeof()),
        ::uNewFunction("get_DegreesZ", Change__Fuse_Layouts_Metric__get_DegreesZ, 0, false, ::app::Uno::Float__typeof()),
        ::uNewFunction("get_IsContinuous", Change__Fuse_Layouts_Metric__get_IsContinuous, 0, false, ::app::Uno::Bool__typeof()),
        ::uNewFunction("get_Target", Change__Fuse_Layouts_Metric__get_Target, 0, false, ::app::Uno::UX::Property__Fuse_Layouts_Metric__typeof()),
        ::uNewFunction("get_Value", Change__Fuse_Layouts_Metric__get_Value, 0, false, ::app::Fuse::Layouts::Metric__typeof()),
        ::uNewFunction("get_X", Change__Fuse_Layouts_Metric__get_X, 0, false, ::app::Uno::Float__typeof()),
        ::uNewFunction("get_XY", Change__Fuse_Layouts_Metric__get_XY, 0, false, ::app::Uno::Float2__typeof()),
        ::uNewFunction("get_Y", Change__Fuse_Layouts_Metric__get_Y, 0, false, ::app::Uno::Float__typeof()),
        ::uNewFunction("get_Z", Change__Fuse_Layouts_Metric__get_Z, 0, false, ::app::Uno::Float__typeof()),
        ::uNewFunction(".ctor", Change__Fuse_Layouts_Metric__New_1, 0, true, Change__Fuse_Layouts_Metric__typeof(), ::app::Uno::UX::Property__Fuse_Layouts_Metric__typeof()),
        ::uNewFunctionVoid("set_DegreesX", Change__Fuse_Layouts_Metric__set_DegreesX, 0, false, ::app::Uno::Float__typeof()),
        ::uNewFunctionVoid("set_DegreesXY", Change__Fuse_Layouts_Metric__set_DegreesXY, 0, false, ::app::Uno::Float2__typeof()),
        ::uNewFunctionVoid("set_DegreesY", Change__Fuse_Layouts_Metric__set_DegreesY, 0, false, ::app::Uno::Float__typeof()),
        ::uNewFunctionVoid("set_DegreesZ", Change__Fuse_Layouts_Metric__set_DegreesZ, 0, false, ::app::Uno::Float__typeof()),
        ::uNewFunctionVoid("set_Target", Change__Fuse_Layouts_Metric__set_Target, 0, false, ::app::Uno::UX::Property__Fuse_Layouts_Metric__typeof()),
        ::uNewFunctionVoid("set_Value", Change__Fuse_Layouts_Metric__set_Value, 0, false, ::app::Fuse::Layouts::Metric__typeof()),
        ::uNewFunctionVoid("set_X", Change__Fuse_Layouts_Metric__set_X, 0, false, ::app::Uno::Float__typeof()),
        ::uNewFunctionVoid("set_XY", Change__Fuse_Layouts_Metric__set_XY, 0, false, ::app::Uno::Float2__typeof()),
        ::uNewFunctionVoid("set_Y", Change__Fuse_Layouts_Metric__set_Y, 0, false, ::app::Uno::Float__typeof()),
        ::uNewFunctionVoid("set_Z", Change__Fuse_Layouts_Metric__set_Z, 0, false, ::app::Uno::Float__typeof()));

    ::uRegisterType(type);
    return type;
}

void Change__Fuse_Layouts_Metric___ObjInit_2(Change__Fuse_Layouts_Metric* __this, ::app::Uno::UX::Property__Fuse_Layouts_Metric* target)
{
    ::app::Fuse::Animations::TrackAnimator___ObjInit_1(__this);

    if (target == NULL)
    {
        U_THROW(::app::Uno::ArgumentNullException__New_5(NULL, ::uGetConstString("target")));
    }

    __this->Target(target);

    if (__this->IsContinuous())
    {
        ::uObject* v;

        if ((::uType*)::app::Fuse::Layouts::Metric__typeof() == (::uType*)::app::Uno::Float__typeof())
        {
            v = (::uObject*)::app::Fuse::Animations::ConverterFloat__Singleton;
        }
        else if ((::uType*)::app::Fuse::Layouts::Metric__typeof() == (::uType*)::app::Uno::Float2__typeof())
        {
            v = (::uObject*)::app::Fuse::Animations::ConverterFloat2__Singleton;
        }
        else if ((::uType*)::app::Fuse::Layouts::Metric__typeof() == (::uType*)::app::Uno::Float3__typeof())
        {
            v = (::uObject*)::app::Fuse::Animations::ConverterFloat3__Singleton;
        }
        else if ((::uType*)::app::Fuse::Layouts::Metric__typeof() == (::uType*)::app::Uno::Float4__typeof())
        {
            v = (::uObject*)::app::Fuse::Animations::ConverterFloat4__Singleton;
        }
        else if ((::uType*)::app::Fuse::Layouts::Metric__typeof() == (::uType*)::app::Uno::Double__typeof())
        {
            v = (::uObject*)::app::Fuse::Animations::ConverterDouble__Singleton;
        }
        else
        {
            U_THROW(::app::Uno::Exception__New_2(NULL, ::app::Uno::String__op_Addition_1(NULL, ::uGetConstString("Unsupported change type: "), (::uObject*)(::uType*)::app::Fuse::Layouts::Metric__typeof())));
        }

        __this->ContinuousConverter = ::uCast< ::app::Fuse::Animations::Converter__Fuse_Layouts_Metric*>(v, ::app::Fuse::Animations::Converter__Fuse_Layouts_Metric__typeof());
    }
    else
    {
        __this->Mixer = ::app::Fuse::Animations::Mixer__get_DefaultDiscrete(NULL);
        __this->MarkDiscrete();
    }
}

::app::Fuse::Animations::AnimatorState* Change__Fuse_Layouts_Metric__CreateState(Change__Fuse_Layouts_Metric* __this, ::app::Fuse::Animations::CreateStateParams* p)
{
    if (__this->IsContinuous())
    {
        return (::app::Fuse::Animations::AnimatorState*)::app::Fuse::Animations::ContinuousTrackChangeState__Fuse_Layouts_Metric__New_1(NULL, __this, p);
    }

    return (::app::Fuse::Animations::AnimatorState*)::app::Fuse::Animations::DiscreteTrackChangeState__Fuse_Layouts_Metric__New_1(NULL, __this, p);
}

float Change__Fuse_Layouts_Metric__get_DegreesX(Change__Fuse_Layouts_Metric* __this)
{
    return ::app::Uno::Math__RadiansToDegrees_1(NULL, __this->X());
}

::app::Uno::Float2 Change__Fuse_Layouts_Metric__get_DegreesXY(Change__Fuse_Layouts_Metric* __this)
{
    return ::app::Uno::Float2__New_2(NULL, ::app::Uno::Math__RadiansToDegrees_1(NULL, __this->X()), ::app::Uno::Math__RadiansToDegrees_1(NULL, __this->Y()));
}

float Change__Fuse_Layouts_Metric__get_DegreesY(Change__Fuse_Layouts_Metric* __this)
{
    return ::app::Uno::Math__RadiansToDegrees_1(NULL, __this->Y());
}

float Change__Fuse_Layouts_Metric__get_DegreesZ(Change__Fuse_Layouts_Metric* __this)
{
    return ::app::Uno::Math__RadiansToDegrees_1(NULL, __this->Y());
}

bool Change__Fuse_Layouts_Metric__get_IsContinuous(Change__Fuse_Layouts_Metric* __this)
{
    return (((((::uType*)::app::Fuse::Layouts::Metric__typeof() == (::uType*)::app::Uno::Float__typeof()) || ((::uType*)::app::Fuse::Layouts::Metric__typeof() == (::uType*)::app::Uno::Float2__typeof())) || ((::uType*)::app::Fuse::Layouts::Metric__typeof() == (::uType*)::app::Uno::Float3__typeof())) || ((::uType*)::app::Fuse::Layouts::Metric__typeof() == (::uType*)::app::Uno::Float4__typeof())) || ((::uType*)::app::Fuse::Layouts::Metric__typeof() == (::uType*)::app::Uno::Double__typeof());
}

::app::Uno::UX::Property__Fuse_Layouts_Metric* Change__Fuse_Layouts_Metric__get_Target(Change__Fuse_Layouts_Metric* __this)
{
    return __this->_Target;
}

int Change__Fuse_Layouts_Metric__get_Value(Change__Fuse_Layouts_Metric* __this)
{
    return __this->IsContinuous() ? ::uPtr< ::app::Fuse::Animations::Converter__Fuse_Layouts_Metric*>(__this->ContinuousConverter)->Out(__this->_vectorValue) : ::uUnbox< int>(::app::Fuse::Layouts::Metric__typeof(), __this->_objectValue);
}

float Change__Fuse_Layouts_Metric__get_X(Change__Fuse_Layouts_Metric* __this)
{
    return __this->_vectorValue.X;
}

::app::Uno::Float2 Change__Fuse_Layouts_Metric__get_XY(Change__Fuse_Layouts_Metric* __this)
{
    ::app::Uno::Float4 ind_123 = __this->_vectorValue;
    return ::app::Uno::Float2__New_2(NULL, ind_123.X, ind_123.Y);
}

float Change__Fuse_Layouts_Metric__get_Y(Change__Fuse_Layouts_Metric* __this)
{
    return __this->_vectorValue.Y;
}

float Change__Fuse_Layouts_Metric__get_Z(Change__Fuse_Layouts_Metric* __this)
{
    return __this->_vectorValue.Z;
}

Change__Fuse_Layouts_Metric* Change__Fuse_Layouts_Metric__New_1(::uStatic* __this, ::app::Uno::UX::Property__Fuse_Layouts_Metric* target)
{
    Change__Fuse_Layouts_Metric* inst = (Change__Fuse_Layouts_Metric*)::uAllocObject(sizeof(Change__Fuse_Layouts_Metric), Change__Fuse_Layouts_Metric__typeof());
    inst->_ObjInit_2(target);
    return inst;
}

void Change__Fuse_Layouts_Metric__set_DegreesX(Change__Fuse_Layouts_Metric* __this, float value)
{
    __this->X(::app::Uno::Math__DegreesToRadians_1(NULL, value));
}

void Change__Fuse_Layouts_Metric__set_DegreesXY(Change__Fuse_Layouts_Metric* __this, ::app::Uno::Float2 value)
{
    __this->XY(::app::Uno::Float2__New_2(NULL, ::app::Uno::Math__DegreesToRadians_1(NULL, value.X), ::app::Uno::Math__DegreesToRadians_1(NULL, value.Y)));
}

void Change__Fuse_Layouts_Metric__set_DegreesY(Change__Fuse_Layouts_Metric* __this, float value)
{
    __this->Y(::app::Uno::Math__DegreesToRadians_1(NULL, value));
}

void Change__Fuse_Layouts_Metric__set_DegreesZ(Change__Fuse_Layouts_Metric* __this, float value)
{
    __this->Y(::app::Uno::Math__DegreesToRadians_1(NULL, value));
}

void Change__Fuse_Layouts_Metric__set_Target(Change__Fuse_Layouts_Metric* __this, ::app::Uno::UX::Property__Fuse_Layouts_Metric* value)
{
    __this->_Target = value;
}

void Change__Fuse_Layouts_Metric__set_Value(Change__Fuse_Layouts_Metric* __this, int value)
{
    if (__this->IsContinuous())
    {
        __this->_vectorValue = ::uPtr< ::app::Fuse::Animations::Converter__Fuse_Layouts_Metric*>(__this->ContinuousConverter)->In(value);
    }
    else
    {
        __this->_objectValue = ::uBox< int>(::app::Fuse::Layouts::Metric__typeof(), value);
    }
}

void Change__Fuse_Layouts_Metric__set_X(Change__Fuse_Layouts_Metric* __this, float value)
{
    __this->_vectorValue.X = value;
}

void Change__Fuse_Layouts_Metric__set_XY(Change__Fuse_Layouts_Metric* __this, ::app::Uno::Float2 value)
{
    __this->_vectorValue = ::app::Uno::Float4__New_6(NULL, value, __this->_vectorValue.Z, __this->_vectorValue.W);
}

void Change__Fuse_Layouts_Metric__set_Y(Change__Fuse_Layouts_Metric* __this, float value)
{
    __this->_vectorValue.Y = value;
}

void Change__Fuse_Layouts_Metric__set_Z(Change__Fuse_Layouts_Metric* __this, float value)
{
    __this->_vectorValue.Z = value;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Animations\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

Change__Fuse_Layouts_Orientation__uType* Change__Fuse_Layouts_Orientation__typeof()
{
    static ::uStaticStrong<Change__Fuse_Layouts_Orientation__uType*> type;
    if (type != NULL) return type;

    type = (Change__Fuse_Layouts_Orientation__uType*)::uAllocClassType(sizeof(Change__Fuse_Layouts_Orientation__uType), "Fuse.Animations.Change<Fuse.Layouts.Orientation>", false, 0, 2, 0);

    type->SetBaseType(::app::Fuse::Animations::TrackAnimator__typeof());
    type->__fp_CreateState = (::app::Fuse::Animations::AnimatorState*(*)(::app::Fuse::Animations::Animator*, ::app::Fuse::Animations::CreateStateParams*))Change__Fuse_Layouts_Orientation__CreateState;

    type->SetStrongRefs(
        "_Target", offsetof(Change__Fuse_Layouts_Orientation, _Target),
        "ContinuousConverter", offsetof(Change__Fuse_Layouts_Orientation, ContinuousConverter));

    type->SetFields(1,
        ::uNewField("ContinuousConverter", NULL, offsetof(Change__Fuse_Layouts_Orientation, ContinuousConverter), ::app::Fuse::Animations::Converter__Fuse_Layouts_Orientation__typeof()));

    type->SetFunctions(22,
        ::uNewFunction("get_DegreesX", Change__Fuse_Layouts_Orientation__get_DegreesX, 0, false, ::app::Uno::Float__typeof()),
        ::uNewFunction("get_DegreesXY", Change__Fuse_Layouts_Orientation__get_DegreesXY, 0, false, ::app::Uno::Float2__typeof()),
        ::uNewFunction("get_DegreesY", Change__Fuse_Layouts_Orientation__get_DegreesY, 0, false, ::app::Uno::Float__typeof()),
        ::uNewFunction("get_DegreesZ", Change__Fuse_Layouts_Orientation__get_DegreesZ, 0, false, ::app::Uno::Float__typeof()),
        ::uNewFunction("get_IsContinuous", Change__Fuse_Layouts_Orientation__get_IsContinuous, 0, false, ::app::Uno::Bool__typeof()),
        ::uNewFunction("get_Target", Change__Fuse_Layouts_Orientation__get_Target, 0, false, ::app::Uno::UX::Property__Fuse_Layouts_Orientation__typeof()),
        ::uNewFunction("get_Value", Change__Fuse_Layouts_Orientation__get_Value, 0, false, ::app::Fuse::Layouts::Orientation__typeof()),
        ::uNewFunction("get_X", Change__Fuse_Layouts_Orientation__get_X, 0, false, ::app::Uno::Float__typeof()),
        ::uNewFunction("get_XY", Change__Fuse_Layouts_Orientation__get_XY, 0, false, ::app::Uno::Float2__typeof()),
        ::uNewFunction("get_Y", Change__Fuse_Layouts_Orientation__get_Y, 0, false, ::app::Uno::Float__typeof()),
        ::uNewFunction("get_Z", Change__Fuse_Layouts_Orientation__get_Z, 0, false, ::app::Uno::Float__typeof()),
        ::uNewFunction(".ctor", Change__Fuse_Layouts_Orientation__New_1, 0, true, Change__Fuse_Layouts_Orientation__typeof(), ::app::Uno::UX::Property__Fuse_Layouts_Orientation__typeof()),
        ::uNewFunctionVoid("set_DegreesX", Change__Fuse_Layouts_Orientation__set_DegreesX, 0, false, ::app::Uno::Float__typeof()),
        ::uNewFunctionVoid("set_DegreesXY", Change__Fuse_Layouts_Orientation__set_DegreesXY, 0, false, ::app::Uno::Float2__typeof()),
        ::uNewFunctionVoid("set_DegreesY", Change__Fuse_Layouts_Orientation__set_DegreesY, 0, false, ::app::Uno::Float__typeof()),
        ::uNewFunctionVoid("set_DegreesZ", Change__Fuse_Layouts_Orientation__set_DegreesZ, 0, false, ::app::Uno::Float__typeof()),
        ::uNewFunctionVoid("set_Target", Change__Fuse_Layouts_Orientation__set_Target, 0, false, ::app::Uno::UX::Property__Fuse_Layouts_Orientation__typeof()),
        ::uNewFunctionVoid("set_Value", Change__Fuse_Layouts_Orientation__set_Value, 0, false, ::app::Fuse::Layouts::Orientation__typeof()),
        ::uNewFunctionVoid("set_X", Change__Fuse_Layouts_Orientation__set_X, 0, false, ::app::Uno::Float__typeof()),
        ::uNewFunctionVoid("set_XY", Change__Fuse_Layouts_Orientation__set_XY, 0, false, ::app::Uno::Float2__typeof()),
        ::uNewFunctionVoid("set_Y", Change__Fuse_Layouts_Orientation__set_Y, 0, false, ::app::Uno::Float__typeof()),
        ::uNewFunctionVoid("set_Z", Change__Fuse_Layouts_Orientation__set_Z, 0, false, ::app::Uno::Float__typeof()));

    ::uRegisterType(type);
    return type;
}

void Change__Fuse_Layouts_Orientation___ObjInit_2(Change__Fuse_Layouts_Orientation* __this, ::app::Uno::UX::Property__Fuse_Layouts_Orientation* target)
{
    ::app::Fuse::Animations::TrackAnimator___ObjInit_1(__this);

    if (target == NULL)
    {
        U_THROW(::app::Uno::ArgumentNullException__New_5(NULL, ::uGetConstString("target")));
    }

    __this->Target(target);

    if (__this->IsContinuous())
    {
        ::uObject* v;

        if ((::uType*)::app::Fuse::Layouts::Orientation__typeof() == (::uType*)::app::Uno::Float__typeof())
        {
            v = (::uObject*)::app::Fuse::Animations::ConverterFloat__Singleton;
        }
        else if ((::uType*)::app::Fuse::Layouts::Orientation__typeof() == (::uType*)::app::Uno::Float2__typeof())
        {
            v = (::uObject*)::app::Fuse::Animations::ConverterFloat2__Singleton;
        }
        else if ((::uType*)::app::Fuse::Layouts::Orientation__typeof() == (::uType*)::app::Uno::Float3__typeof())
        {
            v = (::uObject*)::app::Fuse::Animations::ConverterFloat3__Singleton;
        }
        else if ((::uType*)::app::Fuse::Layouts::Orientation__typeof() == (::uType*)::app::Uno::Float4__typeof())
        {
            v = (::uObject*)::app::Fuse::Animations::ConverterFloat4__Singleton;
        }
        else if ((::uType*)::app::Fuse::Layouts::Orientation__typeof() == (::uType*)::app::Uno::Double__typeof())
        {
            v = (::uObject*)::app::Fuse::Animations::ConverterDouble__Singleton;
        }
        else
        {
            U_THROW(::app::Uno::Exception__New_2(NULL, ::app::Uno::String__op_Addition_1(NULL, ::uGetConstString("Unsupported change type: "), (::uObject*)(::uType*)::app::Fuse::Layouts::Orientation__typeof())));
        }

        __this->ContinuousConverter = ::uCast< ::app::Fuse::Animations::Converter__Fuse_Layouts_Orientation*>(v, ::app::Fuse::Animations::Converter__Fuse_Layouts_Orientation__typeof());
    }
    else
    {
        __this->Mixer = ::app::Fuse::Animations::Mixer__get_DefaultDiscrete(NULL);
        __this->MarkDiscrete();
    }
}

::app::Fuse::Animations::AnimatorState* Change__Fuse_Layouts_Orientation__CreateState(Change__Fuse_Layouts_Orientation* __this, ::app::Fuse::Animations::CreateStateParams* p)
{
    if (__this->IsContinuous())
    {
        return (::app::Fuse::Animations::AnimatorState*)::app::Fuse::Animations::ContinuousTrackChangeState__Fuse_Layouts_Orientation__New_1(NULL, __this, p);
    }

    return (::app::Fuse::Animations::AnimatorState*)::app::Fuse::Animations::DiscreteTrackChangeState__Fuse_Layouts_Orientation__New_1(NULL, __this, p);
}

float Change__Fuse_Layouts_Orientation__get_DegreesX(Change__Fuse_Layouts_Orientation* __this)
{
    return ::app::Uno::Math__RadiansToDegrees_1(NULL, __this->X());
}

::app::Uno::Float2 Change__Fuse_Layouts_Orientation__get_DegreesXY(Change__Fuse_Layouts_Orientation* __this)
{
    return ::app::Uno::Float2__New_2(NULL, ::app::Uno::Math__RadiansToDegrees_1(NULL, __this->X()), ::app::Uno::Math__RadiansToDegrees_1(NULL, __this->Y()));
}

float Change__Fuse_Layouts_Orientation__get_DegreesY(Change__Fuse_Layouts_Orientation* __this)
{
    return ::app::Uno::Math__RadiansToDegrees_1(NULL, __this->Y());
}

float Change__Fuse_Layouts_Orientation__get_DegreesZ(Change__Fuse_Layouts_Orientation* __this)
{
    return ::app::Uno::Math__RadiansToDegrees_1(NULL, __this->Y());
}

bool Change__Fuse_Layouts_Orientation__get_IsContinuous(Change__Fuse_Layouts_Orientation* __this)
{
    return (((((::uType*)::app::Fuse::Layouts::Orientation__typeof() == (::uType*)::app::Uno::Float__typeof()) || ((::uType*)::app::Fuse::Layouts::Orientation__typeof() == (::uType*)::app::Uno::Float2__typeof())) || ((::uType*)::app::Fuse::Layouts::Orientation__typeof() == (::uType*)::app::Uno::Float3__typeof())) || ((::uType*)::app::Fuse::Layouts::Orientation__typeof() == (::uType*)::app::Uno::Float4__typeof())) || ((::uType*)::app::Fuse::Layouts::Orientation__typeof() == (::uType*)::app::Uno::Double__typeof());
}

::app::Uno::UX::Property__Fuse_Layouts_Orientation* Change__Fuse_Layouts_Orientation__get_Target(Change__Fuse_Layouts_Orientation* __this)
{
    return __this->_Target;
}

int Change__Fuse_Layouts_Orientation__get_Value(Change__Fuse_Layouts_Orientation* __this)
{
    return __this->IsContinuous() ? ::uPtr< ::app::Fuse::Animations::Converter__Fuse_Layouts_Orientation*>(__this->ContinuousConverter)->Out(__this->_vectorValue) : ::uUnbox< int>(::app::Fuse::Layouts::Orientation__typeof(), __this->_objectValue);
}

float Change__Fuse_Layouts_Orientation__get_X(Change__Fuse_Layouts_Orientation* __this)
{
    return __this->_vectorValue.X;
}

::app::Uno::Float2 Change__Fuse_Layouts_Orientation__get_XY(Change__Fuse_Layouts_Orientation* __this)
{
    ::app::Uno::Float4 ind_123 = __this->_vectorValue;
    return ::app::Uno::Float2__New_2(NULL, ind_123.X, ind_123.Y);
}

float Change__Fuse_Layouts_Orientation__get_Y(Change__Fuse_Layouts_Orientation* __this)
{
    return __this->_vectorValue.Y;
}

float Change__Fuse_Layouts_Orientation__get_Z(Change__Fuse_Layouts_Orientation* __this)
{
    return __this->_vectorValue.Z;
}

Change__Fuse_Layouts_Orientation* Change__Fuse_Layouts_Orientation__New_1(::uStatic* __this, ::app::Uno::UX::Property__Fuse_Layouts_Orientation* target)
{
    Change__Fuse_Layouts_Orientation* inst = (Change__Fuse_Layouts_Orientation*)::uAllocObject(sizeof(Change__Fuse_Layouts_Orientation), Change__Fuse_Layouts_Orientation__typeof());
    inst->_ObjInit_2(target);
    return inst;
}

void Change__Fuse_Layouts_Orientation__set_DegreesX(Change__Fuse_Layouts_Orientation* __this, float value)
{
    __this->X(::app::Uno::Math__DegreesToRadians_1(NULL, value));
}

void Change__Fuse_Layouts_Orientation__set_DegreesXY(Change__Fuse_Layouts_Orientation* __this, ::app::Uno::Float2 value)
{
    __this->XY(::app::Uno::Float2__New_2(NULL, ::app::Uno::Math__DegreesToRadians_1(NULL, value.X), ::app::Uno::Math__DegreesToRadians_1(NULL, value.Y)));
}

void Change__Fuse_Layouts_Orientation__set_DegreesY(Change__Fuse_Layouts_Orientation* __this, float value)
{
    __this->Y(::app::Uno::Math__DegreesToRadians_1(NULL, value));
}

void Change__Fuse_Layouts_Orientation__set_DegreesZ(Change__Fuse_Layouts_Orientation* __this, float value)
{
    __this->Y(::app::Uno::Math__DegreesToRadians_1(NULL, value));
}

void Change__Fuse_Layouts_Orientation__set_Target(Change__Fuse_Layouts_Orientation* __this, ::app::Uno::UX::Property__Fuse_Layouts_Orientation* value)
{
    __this->_Target = value;
}

void Change__Fuse_Layouts_Orientation__set_Value(Change__Fuse_Layouts_Orientation* __this, int value)
{
    if (__this->IsContinuous())
    {
        __this->_vectorValue = ::uPtr< ::app::Fuse::Animations::Converter__Fuse_Layouts_Orientation*>(__this->ContinuousConverter)->In(value);
    }
    else
    {
        __this->_objectValue = ::uBox< int>(::app::Fuse::Layouts::Orientation__typeof(), value);
    }
}

void Change__Fuse_Layouts_Orientation__set_X(Change__Fuse_Layouts_Orientation* __this, float value)
{
    __this->_vectorValue.X = value;
}

void Change__Fuse_Layouts_Orientation__set_XY(Change__Fuse_Layouts_Orientation* __this, ::app::Uno::Float2 value)
{
    __this->_vectorValue = ::app::Uno::Float4__New_6(NULL, value, __this->_vectorValue.Z, __this->_vectorValue.W);
}

void Change__Fuse_Layouts_Orientation__set_Y(Change__Fuse_Layouts_Orientation* __this, float value)
{
    __this->_vectorValue.Y = value;
}

void Change__Fuse_Layouts_Orientation__set_Z(Change__Fuse_Layouts_Orientation* __this, float value)
{
    __this->_vectorValue.Z = value;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Animations\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

Change__Fuse_Navigation_NavigationDirection__uType* Change__Fuse_Navigation_NavigationDirection__typeof()
{
    static ::uStaticStrong<Change__Fuse_Navigation_NavigationDirection__uType*> type;
    if (type != NULL) return type;

    type = (Change__Fuse_Navigation_NavigationDirection__uType*)::uAllocClassType(sizeof(Change__Fuse_Navigation_NavigationDirection__uType), "Fuse.Animations.Change<Fuse.Navigation.NavigationDirection>", false, 0, 2, 0);

    type->SetBaseType(::app::Fuse::Animations::TrackAnimator__typeof());
    type->__fp_CreateState = (::app::Fuse::Animations::AnimatorState*(*)(::app::Fuse::Animations::Animator*, ::app::Fuse::Animations::CreateStateParams*))Change__Fuse_Navigation_NavigationDirection__CreateState;

    type->SetStrongRefs(
        "_Target", offsetof(Change__Fuse_Navigation_NavigationDirection, _Target),
        "ContinuousConverter", offsetof(Change__Fuse_Navigation_NavigationDirection, ContinuousConverter));

    type->SetFields(1,
        ::uNewField("ContinuousConverter", NULL, offsetof(Change__Fuse_Navigation_NavigationDirection, ContinuousConverter), ::app::Fuse::Animations::Converter__Fuse_Navigation_NavigationDirection__typeof()));

    type->SetFunctions(22,
        ::uNewFunction("get_DegreesX", Change__Fuse_Navigation_NavigationDirection__get_DegreesX, 0, false, ::app::Uno::Float__typeof()),
        ::uNewFunction("get_DegreesXY", Change__Fuse_Navigation_NavigationDirection__get_DegreesXY, 0, false, ::app::Uno::Float2__typeof()),
        ::uNewFunction("get_DegreesY", Change__Fuse_Navigation_NavigationDirection__get_DegreesY, 0, false, ::app::Uno::Float__typeof()),
        ::uNewFunction("get_DegreesZ", Change__Fuse_Navigation_NavigationDirection__get_DegreesZ, 0, false, ::app::Uno::Float__typeof()),
        ::uNewFunction("get_IsContinuous", Change__Fuse_Navigation_NavigationDirection__get_IsContinuous, 0, false, ::app::Uno::Bool__typeof()),
        ::uNewFunction("get_Target", Change__Fuse_Navigation_NavigationDirection__get_Target, 0, false, ::app::Uno::UX::Property__Fuse_Navigation_NavigationDirection__typeof()),
        ::uNewFunction("get_Value", Change__Fuse_Navigation_NavigationDirection__get_Value, 0, false, ::app::Fuse::Navigation::NavigationDirection__typeof()),
        ::uNewFunction("get_X", Change__Fuse_Navigation_NavigationDirection__get_X, 0, false, ::app::Uno::Float__typeof()),
        ::uNewFunction("get_XY", Change__Fuse_Navigation_NavigationDirection__get_XY, 0, false, ::app::Uno::Float2__typeof()),
        ::uNewFunction("get_Y", Change__Fuse_Navigation_NavigationDirection__get_Y, 0, false, ::app::Uno::Float__typeof()),
        ::uNewFunction("get_Z", Change__Fuse_Navigation_NavigationDirection__get_Z, 0, false, ::app::Uno::Float__typeof()),
        ::uNewFunction(".ctor", Change__Fuse_Navigation_NavigationDirection__New_1, 0, true, Change__Fuse_Navigation_NavigationDirection__typeof(), ::app::Uno::UX::Property__Fuse_Navigation_NavigationDirection__typeof()),
        ::uNewFunctionVoid("set_DegreesX", Change__Fuse_Navigation_NavigationDirection__set_DegreesX, 0, false, ::app::Uno::Float__typeof()),
        ::uNewFunctionVoid("set_DegreesXY", Change__Fuse_Navigation_NavigationDirection__set_DegreesXY, 0, false, ::app::Uno::Float2__typeof()),
        ::uNewFunctionVoid("set_DegreesY", Change__Fuse_Navigation_NavigationDirection__set_DegreesY, 0, false, ::app::Uno::Float__typeof()),
        ::uNewFunctionVoid("set_DegreesZ", Change__Fuse_Navigation_NavigationDirection__set_DegreesZ, 0, false, ::app::Uno::Float__typeof()),
        ::uNewFunctionVoid("set_Target", Change__Fuse_Navigation_NavigationDirection__set_Target, 0, false, ::app::Uno::UX::Property__Fuse_Navigation_NavigationDirection__typeof()),
        ::uNewFunctionVoid("set_Value", Change__Fuse_Navigation_NavigationDirection__set_Value, 0, false, ::app::Fuse::Navigation::NavigationDirection__typeof()),
        ::uNewFunctionVoid("set_X", Change__Fuse_Navigation_NavigationDirection__set_X, 0, false, ::app::Uno::Float__typeof()),
        ::uNewFunctionVoid("set_XY", Change__Fuse_Navigation_NavigationDirection__set_XY, 0, false, ::app::Uno::Float2__typeof()),
        ::uNewFunctionVoid("set_Y", Change__Fuse_Navigation_NavigationDirection__set_Y, 0, false, ::app::Uno::Float__typeof()),
        ::uNewFunctionVoid("set_Z", Change__Fuse_Navigation_NavigationDirection__set_Z, 0, false, ::app::Uno::Float__typeof()));

    ::uRegisterType(type);
    return type;
}

void Change__Fuse_Navigation_NavigationDirection___ObjInit_2(Change__Fuse_Navigation_NavigationDirection* __this, ::app::Uno::UX::Property__Fuse_Navigation_NavigationDirection* target)
{
    ::app::Fuse::Animations::TrackAnimator___ObjInit_1(__this);

    if (target == NULL)
    {
        U_THROW(::app::Uno::ArgumentNullException__New_5(NULL, ::uGetConstString("target")));
    }

    __this->Target(target);

    if (__this->IsContinuous())
    {
        ::uObject* v;

        if ((::uType*)::app::Fuse::Navigation::NavigationDirection__typeof() == (::uType*)::app::Uno::Float__typeof())
        {
            v = (::uObject*)::app::Fuse::Animations::ConverterFloat__Singleton;
        }
        else if ((::uType*)::app::Fuse::Navigation::NavigationDirection__typeof() == (::uType*)::app::Uno::Float2__typeof())
        {
            v = (::uObject*)::app::Fuse::Animations::ConverterFloat2__Singleton;
        }
        else if ((::uType*)::app::Fuse::Navigation::NavigationDirection__typeof() == (::uType*)::app::Uno::Float3__typeof())
        {
            v = (::uObject*)::app::Fuse::Animations::ConverterFloat3__Singleton;
        }
        else if ((::uType*)::app::Fuse::Navigation::NavigationDirection__typeof() == (::uType*)::app::Uno::Float4__typeof())
        {
            v = (::uObject*)::app::Fuse::Animations::ConverterFloat4__Singleton;
        }
        else if ((::uType*)::app::Fuse::Navigation::NavigationDirection__typeof() == (::uType*)::app::Uno::Double__typeof())
        {
            v = (::uObject*)::app::Fuse::Animations::ConverterDouble__Singleton;
        }
        else
        {
            U_THROW(::app::Uno::Exception__New_2(NULL, ::app::Uno::String__op_Addition_1(NULL, ::uGetConstString("Unsupported change type: "), (::uObject*)(::uType*)::app::Fuse::Navigation::NavigationDirection__typeof())));
        }

        __this->ContinuousConverter = ::uCast< ::app::Fuse::Animations::Converter__Fuse_Navigation_NavigationDirection*>(v, ::app::Fuse::Animations::Converter__Fuse_Navigation_NavigationDirection__typeof());
    }
    else
    {
        __this->Mixer = ::app::Fuse::Animations::Mixer__get_DefaultDiscrete(NULL);
        __this->MarkDiscrete();
    }
}

::app::Fuse::Animations::AnimatorState* Change__Fuse_Navigation_NavigationDirection__CreateState(Change__Fuse_Navigation_NavigationDirection* __this, ::app::Fuse::Animations::CreateStateParams* p)
{
    if (__this->IsContinuous())
    {
        return (::app::Fuse::Animations::AnimatorState*)::app::Fuse::Animations::ContinuousTrackChangeState__Fuse_Navigation_NavigationDirection__New_1(NULL, __this, p);
    }

    return (::app::Fuse::Animations::AnimatorState*)::app::Fuse::Animations::DiscreteTrackChangeState__Fuse_Navigation_NavigationDirection__New_1(NULL, __this, p);
}

float Change__Fuse_Navigation_NavigationDirection__get_DegreesX(Change__Fuse_Navigation_NavigationDirection* __this)
{
    return ::app::Uno::Math__RadiansToDegrees_1(NULL, __this->X());
}

::app::Uno::Float2 Change__Fuse_Navigation_NavigationDirection__get_DegreesXY(Change__Fuse_Navigation_NavigationDirection* __this)
{
    return ::app::Uno::Float2__New_2(NULL, ::app::Uno::Math__RadiansToDegrees_1(NULL, __this->X()), ::app::Uno::Math__RadiansToDegrees_1(NULL, __this->Y()));
}

float Change__Fuse_Navigation_NavigationDirection__get_DegreesY(Change__Fuse_Navigation_NavigationDirection* __this)
{
    return ::app::Uno::Math__RadiansToDegrees_1(NULL, __this->Y());
}

float Change__Fuse_Navigation_NavigationDirection__get_DegreesZ(Change__Fuse_Navigation_NavigationDirection* __this)
{
    return ::app::Uno::Math__RadiansToDegrees_1(NULL, __this->Y());
}

bool Change__Fuse_Navigation_NavigationDirection__get_IsContinuous(Change__Fuse_Navigation_NavigationDirection* __this)
{
    return (((((::uType*)::app::Fuse::Navigation::NavigationDirection__typeof() == (::uType*)::app::Uno::Float__typeof()) || ((::uType*)::app::Fuse::Navigation::NavigationDirection__typeof() == (::uType*)::app::Uno::Float2__typeof())) || ((::uType*)::app::Fuse::Navigation::NavigationDirection__typeof() == (::uType*)::app::Uno::Float3__typeof())) || ((::uType*)::app::Fuse::Navigation::NavigationDirection__typeof() == (::uType*)::app::Uno::Float4__typeof())) || ((::uType*)::app::Fuse::Navigation::NavigationDirection__typeof() == (::uType*)::app::Uno::Double__typeof());
}

::app::Uno::UX::Property__Fuse_Navigation_NavigationDirection* Change__Fuse_Navigation_NavigationDirection__get_Target(Change__Fuse_Navigation_NavigationDirection* __this)
{
    return __this->_Target;
}

int Change__Fuse_Navigation_NavigationDirection__get_Value(Change__Fuse_Navigation_NavigationDirection* __this)
{
    return __this->IsContinuous() ? ::uPtr< ::app::Fuse::Animations::Converter__Fuse_Navigation_NavigationDirection*>(__this->ContinuousConverter)->Out(__this->_vectorValue) : ::uUnbox< int>(::app::Fuse::Navigation::NavigationDirection__typeof(), __this->_objectValue);
}

float Change__Fuse_Navigation_NavigationDirection__get_X(Change__Fuse_Navigation_NavigationDirection* __this)
{
    return __this->_vectorValue.X;
}

::app::Uno::Float2 Change__Fuse_Navigation_NavigationDirection__get_XY(Change__Fuse_Navigation_NavigationDirection* __this)
{
    ::app::Uno::Float4 ind_123 = __this->_vectorValue;
    return ::app::Uno::Float2__New_2(NULL, ind_123.X, ind_123.Y);
}

float Change__Fuse_Navigation_NavigationDirection__get_Y(Change__Fuse_Navigation_NavigationDirection* __this)
{
    return __this->_vectorValue.Y;
}

float Change__Fuse_Navigation_NavigationDirection__get_Z(Change__Fuse_Navigation_NavigationDirection* __this)
{
    return __this->_vectorValue.Z;
}

Change__Fuse_Navigation_NavigationDirection* Change__Fuse_Navigation_NavigationDirection__New_1(::uStatic* __this, ::app::Uno::UX::Property__Fuse_Navigation_NavigationDirection* target)
{
    Change__Fuse_Navigation_NavigationDirection* inst = (Change__Fuse_Navigation_NavigationDirection*)::uAllocObject(sizeof(Change__Fuse_Navigation_NavigationDirection), Change__Fuse_Navigation_NavigationDirection__typeof());
    inst->_ObjInit_2(target);
    return inst;
}

void Change__Fuse_Navigation_NavigationDirection__set_DegreesX(Change__Fuse_Navigation_NavigationDirection* __this, float value)
{
    __this->X(::app::Uno::Math__DegreesToRadians_1(NULL, value));
}

void Change__Fuse_Navigation_NavigationDirection__set_DegreesXY(Change__Fuse_Navigation_NavigationDirection* __this, ::app::Uno::Float2 value)
{
    __this->XY(::app::Uno::Float2__New_2(NULL, ::app::Uno::Math__DegreesToRadians_1(NULL, value.X), ::app::Uno::Math__DegreesToRadians_1(NULL, value.Y)));
}

void Change__Fuse_Navigation_NavigationDirection__set_DegreesY(Change__Fuse_Navigation_NavigationDirection* __this, float value)
{
    __this->Y(::app::Uno::Math__DegreesToRadians_1(NULL, value));
}

void Change__Fuse_Navigation_NavigationDirection__set_DegreesZ(Change__Fuse_Navigation_NavigationDirection* __this, float value)
{
    __this->Y(::app::Uno::Math__DegreesToRadians_1(NULL, value));
}

void Change__Fuse_Navigation_NavigationDirection__set_Target(Change__Fuse_Navigation_NavigationDirection* __this, ::app::Uno::UX::Property__Fuse_Navigation_NavigationDirection* value)
{
    __this->_Target = value;
}

void Change__Fuse_Navigation_NavigationDirection__set_Value(Change__Fuse_Navigation_NavigationDirection* __this, int value)
{
    if (__this->IsContinuous())
    {
        __this->_vectorValue = ::uPtr< ::app::Fuse::Animations::Converter__Fuse_Navigation_NavigationDirection*>(__this->ContinuousConverter)->In(value);
    }
    else
    {
        __this->_objectValue = ::uBox< int>(::app::Fuse::Navigation::NavigationDirection__typeof(), value);
    }
}

void Change__Fuse_Navigation_NavigationDirection__set_X(Change__Fuse_Navigation_NavigationDirection* __this, float value)
{
    __this->_vectorValue.X = value;
}

void Change__Fuse_Navigation_NavigationDirection__set_XY(Change__Fuse_Navigation_NavigationDirection* __this, ::app::Uno::Float2 value)
{
    __this->_vectorValue = ::app::Uno::Float4__New_6(NULL, value, __this->_vectorValue.Z, __this->_vectorValue.W);
}

void Change__Fuse_Navigation_NavigationDirection__set_Y(Change__Fuse_Navigation_NavigationDirection* __this, float value)
{
    __this->_vectorValue.Y = value;
}

void Change__Fuse_Navigation_NavigationDirection__set_Z(Change__Fuse_Navigation_NavigationDirection* __this, float value)
{
    __this->_vectorValue.Z = value;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Animations\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

Change__Fuse_Navigation_NavigationEdge__uType* Change__Fuse_Navigation_NavigationEdge__typeof()
{
    static ::uStaticStrong<Change__Fuse_Navigation_NavigationEdge__uType*> type;
    if (type != NULL) return type;

    type = (Change__Fuse_Navigation_NavigationEdge__uType*)::uAllocClassType(sizeof(Change__Fuse_Navigation_NavigationEdge__uType), "Fuse.Animations.Change<Fuse.Navigation.NavigationEdge>", false, 0, 2, 0);

    type->SetBaseType(::app::Fuse::Animations::TrackAnimator__typeof());
    type->__fp_CreateState = (::app::Fuse::Animations::AnimatorState*(*)(::app::Fuse::Animations::Animator*, ::app::Fuse::Animations::CreateStateParams*))Change__Fuse_Navigation_NavigationEdge__CreateState;

    type->SetStrongRefs(
        "_Target", offsetof(Change__Fuse_Navigation_NavigationEdge, _Target),
        "ContinuousConverter", offsetof(Change__Fuse_Navigation_NavigationEdge, ContinuousConverter));

    type->SetFields(1,
        ::uNewField("ContinuousConverter", NULL, offsetof(Change__Fuse_Navigation_NavigationEdge, ContinuousConverter), ::app::Fuse::Animations::Converter__Fuse_Navigation_NavigationEdge__typeof()));

    type->SetFunctions(22,
        ::uNewFunction("get_DegreesX", Change__Fuse_Navigation_NavigationEdge__get_DegreesX, 0, false, ::app::Uno::Float__typeof()),
        ::uNewFunction("get_DegreesXY", Change__Fuse_Navigation_NavigationEdge__get_DegreesXY, 0, false, ::app::Uno::Float2__typeof()),
        ::uNewFunction("get_DegreesY", Change__Fuse_Navigation_NavigationEdge__get_DegreesY, 0, false, ::app::Uno::Float__typeof()),
        ::uNewFunction("get_DegreesZ", Change__Fuse_Navigation_NavigationEdge__get_DegreesZ, 0, false, ::app::Uno::Float__typeof()),
        ::uNewFunction("get_IsContinuous", Change__Fuse_Navigation_NavigationEdge__get_IsContinuous, 0, false, ::app::Uno::Bool__typeof()),
        ::uNewFunction("get_Target", Change__Fuse_Navigation_NavigationEdge__get_Target, 0, false, ::app::Uno::UX::Property__Fuse_Navigation_NavigationEdge__typeof()),
        ::uNewFunction("get_Value", Change__Fuse_Navigation_NavigationEdge__get_Value, 0, false, ::app::Fuse::Navigation::NavigationEdge__typeof()),
        ::uNewFunction("get_X", Change__Fuse_Navigation_NavigationEdge__get_X, 0, false, ::app::Uno::Float__typeof()),
        ::uNewFunction("get_XY", Change__Fuse_Navigation_NavigationEdge__get_XY, 0, false, ::app::Uno::Float2__typeof()),
        ::uNewFunction("get_Y", Change__Fuse_Navigation_NavigationEdge__get_Y, 0, false, ::app::Uno::Float__typeof()),
        ::uNewFunction("get_Z", Change__Fuse_Navigation_NavigationEdge__get_Z, 0, false, ::app::Uno::Float__typeof()),
        ::uNewFunction(".ctor", Change__Fuse_Navigation_NavigationEdge__New_1, 0, true, Change__Fuse_Navigation_NavigationEdge__typeof(), ::app::Uno::UX::Property__Fuse_Navigation_NavigationEdge__typeof()),
        ::uNewFunctionVoid("set_DegreesX", Change__Fuse_Navigation_NavigationEdge__set_DegreesX, 0, false, ::app::Uno::Float__typeof()),
        ::uNewFunctionVoid("set_DegreesXY", Change__Fuse_Navigation_NavigationEdge__set_DegreesXY, 0, false, ::app::Uno::Float2__typeof()),
        ::uNewFunctionVoid("set_DegreesY", Change__Fuse_Navigation_NavigationEdge__set_DegreesY, 0, false, ::app::Uno::Float__typeof()),
        ::uNewFunctionVoid("set_DegreesZ", Change__Fuse_Navigation_NavigationEdge__set_DegreesZ, 0, false, ::app::Uno::Float__typeof()),
        ::uNewFunctionVoid("set_Target", Change__Fuse_Navigation_NavigationEdge__set_Target, 0, false, ::app::Uno::UX::Property__Fuse_Navigation_NavigationEdge__typeof()),
        ::uNewFunctionVoid("set_Value", Change__Fuse_Navigation_NavigationEdge__set_Value, 0, false, ::app::Fuse::Navigation::NavigationEdge__typeof()),
        ::uNewFunctionVoid("set_X", Change__Fuse_Navigation_NavigationEdge__set_X, 0, false, ::app::Uno::Float__typeof()),
        ::uNewFunctionVoid("set_XY", Change__Fuse_Navigation_NavigationEdge__set_XY, 0, false, ::app::Uno::Float2__typeof()),
        ::uNewFunctionVoid("set_Y", Change__Fuse_Navigation_NavigationEdge__set_Y, 0, false, ::app::Uno::Float__typeof()),
        ::uNewFunctionVoid("set_Z", Change__Fuse_Navigation_NavigationEdge__set_Z, 0, false, ::app::Uno::Float__typeof()));

    ::uRegisterType(type);
    return type;
}

void Change__Fuse_Navigation_NavigationEdge___ObjInit_2(Change__Fuse_Navigation_NavigationEdge* __this, ::app::Uno::UX::Property__Fuse_Navigation_NavigationEdge* target)
{
    ::app::Fuse::Animations::TrackAnimator___ObjInit_1(__this);

    if (target == NULL)
    {
        U_THROW(::app::Uno::ArgumentNullException__New_5(NULL, ::uGetConstString("target")));
    }

    __this->Target(target);

    if (__this->IsContinuous())
    {
        ::uObject* v;

        if ((::uType*)::app::Fuse::Navigation::NavigationEdge__typeof() == (::uType*)::app::Uno::Float__typeof())
        {
            v = (::uObject*)::app::Fuse::Animations::ConverterFloat__Singleton;
        }
        else if ((::uType*)::app::Fuse::Navigation::NavigationEdge__typeof() == (::uType*)::app::Uno::Float2__typeof())
        {
            v = (::uObject*)::app::Fuse::Animations::ConverterFloat2__Singleton;
        }
        else if ((::uType*)::app::Fuse::Navigation::NavigationEdge__typeof() == (::uType*)::app::Uno::Float3__typeof())
        {
            v = (::uObject*)::app::Fuse::Animations::ConverterFloat3__Singleton;
        }
        else if ((::uType*)::app::Fuse::Navigation::NavigationEdge__typeof() == (::uType*)::app::Uno::Float4__typeof())
        {
            v = (::uObject*)::app::Fuse::Animations::ConverterFloat4__Singleton;
        }
        else if ((::uType*)::app::Fuse::Navigation::NavigationEdge__typeof() == (::uType*)::app::Uno::Double__typeof())
        {
            v = (::uObject*)::app::Fuse::Animations::ConverterDouble__Singleton;
        }
        else
        {
            U_THROW(::app::Uno::Exception__New_2(NULL, ::app::Uno::String__op_Addition_1(NULL, ::uGetConstString("Unsupported change type: "), (::uObject*)(::uType*)::app::Fuse::Navigation::NavigationEdge__typeof())));
        }

        __this->ContinuousConverter = ::uCast< ::app::Fuse::Animations::Converter__Fuse_Navigation_NavigationEdge*>(v, ::app::Fuse::Animations::Converter__Fuse_Navigation_NavigationEdge__typeof());
    }
    else
    {
        __this->Mixer = ::app::Fuse::Animations::Mixer__get_DefaultDiscrete(NULL);
        __this->MarkDiscrete();
    }
}

::app::Fuse::Animations::AnimatorState* Change__Fuse_Navigation_NavigationEdge__CreateState(Change__Fuse_Navigation_NavigationEdge* __this, ::app::Fuse::Animations::CreateStateParams* p)
{
    if (__this->IsContinuous())
    {
        return (::app::Fuse::Animations::AnimatorState*)::app::Fuse::Animations::ContinuousTrackChangeState__Fuse_Navigation_NavigationEdge__New_1(NULL, __this, p);
    }

    return (::app::Fuse::Animations::AnimatorState*)::app::Fuse::Animations::DiscreteTrackChangeState__Fuse_Navigation_NavigationEdge__New_1(NULL, __this, p);
}

float Change__Fuse_Navigation_NavigationEdge__get_DegreesX(Change__Fuse_Navigation_NavigationEdge* __this)
{
    return ::app::Uno::Math__RadiansToDegrees_1(NULL, __this->X());
}

::app::Uno::Float2 Change__Fuse_Navigation_NavigationEdge__get_DegreesXY(Change__Fuse_Navigation_NavigationEdge* __this)
{
    return ::app::Uno::Float2__New_2(NULL, ::app::Uno::Math__RadiansToDegrees_1(NULL, __this->X()), ::app::Uno::Math__RadiansToDegrees_1(NULL, __this->Y()));
}

float Change__Fuse_Navigation_NavigationEdge__get_DegreesY(Change__Fuse_Navigation_NavigationEdge* __this)
{
    return ::app::Uno::Math__RadiansToDegrees_1(NULL, __this->Y());
}

float Change__Fuse_Navigation_NavigationEdge__get_DegreesZ(Change__Fuse_Navigation_NavigationEdge* __this)
{
    return ::app::Uno::Math__RadiansToDegrees_1(NULL, __this->Y());
}

bool Change__Fuse_Navigation_NavigationEdge__get_IsContinuous(Change__Fuse_Navigation_NavigationEdge* __this)
{
    return (((((::uType*)::app::Fuse::Navigation::NavigationEdge__typeof() == (::uType*)::app::Uno::Float__typeof()) || ((::uType*)::app::Fuse::Navigation::NavigationEdge__typeof() == (::uType*)::app::Uno::Float2__typeof())) || ((::uType*)::app::Fuse::Navigation::NavigationEdge__typeof() == (::uType*)::app::Uno::Float3__typeof())) || ((::uType*)::app::Fuse::Navigation::NavigationEdge__typeof() == (::uType*)::app::Uno::Float4__typeof())) || ((::uType*)::app::Fuse::Navigation::NavigationEdge__typeof() == (::uType*)::app::Uno::Double__typeof());
}

::app::Uno::UX::Property__Fuse_Navigation_NavigationEdge* Change__Fuse_Navigation_NavigationEdge__get_Target(Change__Fuse_Navigation_NavigationEdge* __this)
{
    return __this->_Target;
}

int Change__Fuse_Navigation_NavigationEdge__get_Value(Change__Fuse_Navigation_NavigationEdge* __this)
{
    return __this->IsContinuous() ? ::uPtr< ::app::Fuse::Animations::Converter__Fuse_Navigation_NavigationEdge*>(__this->ContinuousConverter)->Out(__this->_vectorValue) : ::uUnbox< int>(::app::Fuse::Navigation::NavigationEdge__typeof(), __this->_objectValue);
}

float Change__Fuse_Navigation_NavigationEdge__get_X(Change__Fuse_Navigation_NavigationEdge* __this)
{
    return __this->_vectorValue.X;
}

::app::Uno::Float2 Change__Fuse_Navigation_NavigationEdge__get_XY(Change__Fuse_Navigation_NavigationEdge* __this)
{
    ::app::Uno::Float4 ind_123 = __this->_vectorValue;
    return ::app::Uno::Float2__New_2(NULL, ind_123.X, ind_123.Y);
}

float Change__Fuse_Navigation_NavigationEdge__get_Y(Change__Fuse_Navigation_NavigationEdge* __this)
{
    return __this->_vectorValue.Y;
}

float Change__Fuse_Navigation_NavigationEdge__get_Z(Change__Fuse_Navigation_NavigationEdge* __this)
{
    return __this->_vectorValue.Z;
}

Change__Fuse_Navigation_NavigationEdge* Change__Fuse_Navigation_NavigationEdge__New_1(::uStatic* __this, ::app::Uno::UX::Property__Fuse_Navigation_NavigationEdge* target)
{
    Change__Fuse_Navigation_NavigationEdge* inst = (Change__Fuse_Navigation_NavigationEdge*)::uAllocObject(sizeof(Change__Fuse_Navigation_NavigationEdge), Change__Fuse_Navigation_NavigationEdge__typeof());
    inst->_ObjInit_2(target);
    return inst;
}

void Change__Fuse_Navigation_NavigationEdge__set_DegreesX(Change__Fuse_Navigation_NavigationEdge* __this, float value)
{
    __this->X(::app::Uno::Math__DegreesToRadians_1(NULL, value));
}

void Change__Fuse_Navigation_NavigationEdge__set_DegreesXY(Change__Fuse_Navigation_NavigationEdge* __this, ::app::Uno::Float2 value)
{
    __this->XY(::app::Uno::Float2__New_2(NULL, ::app::Uno::Math__DegreesToRadians_1(NULL, value.X), ::app::Uno::Math__DegreesToRadians_1(NULL, value.Y)));
}

void Change__Fuse_Navigation_NavigationEdge__set_DegreesY(Change__Fuse_Navigation_NavigationEdge* __this, float value)
{
    __this->Y(::app::Uno::Math__DegreesToRadians_1(NULL, value));
}

void Change__Fuse_Navigation_NavigationEdge__set_DegreesZ(Change__Fuse_Navigation_NavigationEdge* __this, float value)
{
    __this->Y(::app::Uno::Math__DegreesToRadians_1(NULL, value));
}

void Change__Fuse_Navigation_NavigationEdge__set_Target(Change__Fuse_Navigation_NavigationEdge* __this, ::app::Uno::UX::Property__Fuse_Navigation_NavigationEdge* value)
{
    __this->_Target = value;
}

void Change__Fuse_Navigation_NavigationEdge__set_Value(Change__Fuse_Navigation_NavigationEdge* __this, int value)
{
    if (__this->IsContinuous())
    {
        __this->_vectorValue = ::uPtr< ::app::Fuse::Animations::Converter__Fuse_Navigation_NavigationEdge*>(__this->ContinuousConverter)->In(value);
    }
    else
    {
        __this->_objectValue = ::uBox< int>(::app::Fuse::Navigation::NavigationEdge__typeof(), value);
    }
}

void Change__Fuse_Navigation_NavigationEdge__set_X(Change__Fuse_Navigation_NavigationEdge* __this, float value)
{
    __this->_vectorValue.X = value;
}

void Change__Fuse_Navigation_NavigationEdge__set_XY(Change__Fuse_Navigation_NavigationEdge* __this, ::app::Uno::Float2 value)
{
    __this->_vectorValue = ::app::Uno::Float4__New_6(NULL, value, __this->_vectorValue.Z, __this->_vectorValue.W);
}

void Change__Fuse_Navigation_NavigationEdge__set_Y(Change__Fuse_Navigation_NavigationEdge* __this, float value)
{
    __this->_vectorValue.Y = value;
}

void Change__Fuse_Navigation_NavigationEdge__set_Z(Change__Fuse_Navigation_NavigationEdge* __this, float value)
{
    __this->_vectorValue.Z = value;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Animations\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

Change__Fuse_Navigation_NavigationGotoMode__uType* Change__Fuse_Navigation_NavigationGotoMode__typeof()
{
    static ::uStaticStrong<Change__Fuse_Navigation_NavigationGotoMode__uType*> type;
    if (type != NULL) return type;

    type = (Change__Fuse_Navigation_NavigationGotoMode__uType*)::uAllocClassType(sizeof(Change__Fuse_Navigation_NavigationGotoMode__uType), "Fuse.Animations.Change<Fuse.Navigation.NavigationGotoMode>", false, 0, 2, 0);

    type->SetBaseType(::app::Fuse::Animations::TrackAnimator__typeof());
    type->__fp_CreateState = (::app::Fuse::Animations::AnimatorState*(*)(::app::Fuse::Animations::Animator*, ::app::Fuse::Animations::CreateStateParams*))Change__Fuse_Navigation_NavigationGotoMode__CreateState;

    type->SetStrongRefs(
        "_Target", offsetof(Change__Fuse_Navigation_NavigationGotoMode, _Target),
        "ContinuousConverter", offsetof(Change__Fuse_Navigation_NavigationGotoMode, ContinuousConverter));

    type->SetFields(1,
        ::uNewField("ContinuousConverter", NULL, offsetof(Change__Fuse_Navigation_NavigationGotoMode, ContinuousConverter), ::app::Fuse::Animations::Converter__Fuse_Navigation_NavigationGotoMode__typeof()));

    type->SetFunctions(22,
        ::uNewFunction("get_DegreesX", Change__Fuse_Navigation_NavigationGotoMode__get_DegreesX, 0, false, ::app::Uno::Float__typeof()),
        ::uNewFunction("get_DegreesXY", Change__Fuse_Navigation_NavigationGotoMode__get_DegreesXY, 0, false, ::app::Uno::Float2__typeof()),
        ::uNewFunction("get_DegreesY", Change__Fuse_Navigation_NavigationGotoMode__get_DegreesY, 0, false, ::app::Uno::Float__typeof()),
        ::uNewFunction("get_DegreesZ", Change__Fuse_Navigation_NavigationGotoMode__get_DegreesZ, 0, false, ::app::Uno::Float__typeof()),
        ::uNewFunction("get_IsContinuous", Change__Fuse_Navigation_NavigationGotoMode__get_IsContinuous, 0, false, ::app::Uno::Bool__typeof()),
        ::uNewFunction("get_Target", Change__Fuse_Navigation_NavigationGotoMode__get_Target, 0, false, ::app::Uno::UX::Property__Fuse_Navigation_NavigationGotoMode__typeof()),
        ::uNewFunction("get_Value", Change__Fuse_Navigation_NavigationGotoMode__get_Value, 0, false, ::app::Fuse::Navigation::NavigationGotoMode__typeof()),
        ::uNewFunction("get_X", Change__Fuse_Navigation_NavigationGotoMode__get_X, 0, false, ::app::Uno::Float__typeof()),
        ::uNewFunction("get_XY", Change__Fuse_Navigation_NavigationGotoMode__get_XY, 0, false, ::app::Uno::Float2__typeof()),
        ::uNewFunction("get_Y", Change__Fuse_Navigation_NavigationGotoMode__get_Y, 0, false, ::app::Uno::Float__typeof()),
        ::uNewFunction("get_Z", Change__Fuse_Navigation_NavigationGotoMode__get_Z, 0, false, ::app::Uno::Float__typeof()),
        ::uNewFunction(".ctor", Change__Fuse_Navigation_NavigationGotoMode__New_1, 0, true, Change__Fuse_Navigation_NavigationGotoMode__typeof(), ::app::Uno::UX::Property__Fuse_Navigation_NavigationGotoMode__typeof()),
        ::uNewFunctionVoid("set_DegreesX", Change__Fuse_Navigation_NavigationGotoMode__set_DegreesX, 0, false, ::app::Uno::Float__typeof()),
        ::uNewFunctionVoid("set_DegreesXY", Change__Fuse_Navigation_NavigationGotoMode__set_DegreesXY, 0, false, ::app::Uno::Float2__typeof()),
        ::uNewFunctionVoid("set_DegreesY", Change__Fuse_Navigation_NavigationGotoMode__set_DegreesY, 0, false, ::app::Uno::Float__typeof()),
        ::uNewFunctionVoid("set_DegreesZ", Change__Fuse_Navigation_NavigationGotoMode__set_DegreesZ, 0, false, ::app::Uno::Float__typeof()),
        ::uNewFunctionVoid("set_Target", Change__Fuse_Navigation_NavigationGotoMode__set_Target, 0, false, ::app::Uno::UX::Property__Fuse_Navigation_NavigationGotoMode__typeof()),
        ::uNewFunctionVoid("set_Value", Change__Fuse_Navigation_NavigationGotoMode__set_Value, 0, false, ::app::Fuse::Navigation::NavigationGotoMode__typeof()),
        ::uNewFunctionVoid("set_X", Change__Fuse_Navigation_NavigationGotoMode__set_X, 0, false, ::app::Uno::Float__typeof()),
        ::uNewFunctionVoid("set_XY", Change__Fuse_Navigation_NavigationGotoMode__set_XY, 0, false, ::app::Uno::Float2__typeof()),
        ::uNewFunctionVoid("set_Y", Change__Fuse_Navigation_NavigationGotoMode__set_Y, 0, false, ::app::Uno::Float__typeof()),
        ::uNewFunctionVoid("set_Z", Change__Fuse_Navigation_NavigationGotoMode__set_Z, 0, false, ::app::Uno::Float__typeof()));

    ::uRegisterType(type);
    return type;
}

void Change__Fuse_Navigation_NavigationGotoMode___ObjInit_2(Change__Fuse_Navigation_NavigationGotoMode* __this, ::app::Uno::UX::Property__Fuse_Navigation_NavigationGotoMode* target)
{
    ::app::Fuse::Animations::TrackAnimator___ObjInit_1(__this);

    if (target == NULL)
    {
        U_THROW(::app::Uno::ArgumentNullException__New_5(NULL, ::uGetConstString("target")));
    }

    __this->Target(target);

    if (__this->IsContinuous())
    {
        ::uObject* v;

        if ((::uType*)::app::Fuse::Navigation::NavigationGotoMode__typeof() == (::uType*)::app::Uno::Float__typeof())
        {
            v = (::uObject*)::app::Fuse::Animations::ConverterFloat__Singleton;
        }
        else if ((::uType*)::app::Fuse::Navigation::NavigationGotoMode__typeof() == (::uType*)::app::Uno::Float2__typeof())
        {
            v = (::uObject*)::app::Fuse::Animations::ConverterFloat2__Singleton;
        }
        else if ((::uType*)::app::Fuse::Navigation::NavigationGotoMode__typeof() == (::uType*)::app::Uno::Float3__typeof())
        {
            v = (::uObject*)::app::Fuse::Animations::ConverterFloat3__Singleton;
        }
        else if ((::uType*)::app::Fuse::Navigation::NavigationGotoMode__typeof() == (::uType*)::app::Uno::Float4__typeof())
        {
            v = (::uObject*)::app::Fuse::Animations::ConverterFloat4__Singleton;
        }
        else if ((::uType*)::app::Fuse::Navigation::NavigationGotoMode__typeof() == (::uType*)::app::Uno::Double__typeof())
        {
            v = (::uObject*)::app::Fuse::Animations::ConverterDouble__Singleton;
        }
        else
        {
            U_THROW(::app::Uno::Exception__New_2(NULL, ::app::Uno::String__op_Addition_1(NULL, ::uGetConstString("Unsupported change type: "), (::uObject*)(::uType*)::app::Fuse::Navigation::NavigationGotoMode__typeof())));
        }

        __this->ContinuousConverter = ::uCast< ::app::Fuse::Animations::Converter__Fuse_Navigation_NavigationGotoMode*>(v, ::app::Fuse::Animations::Converter__Fuse_Navigation_NavigationGotoMode__typeof());
    }
    else
    {
        __this->Mixer = ::app::Fuse::Animations::Mixer__get_DefaultDiscrete(NULL);
        __this->MarkDiscrete();
    }
}

::app::Fuse::Animations::AnimatorState* Change__Fuse_Navigation_NavigationGotoMode__CreateState(Change__Fuse_Navigation_NavigationGotoMode* __this, ::app::Fuse::Animations::CreateStateParams* p)
{
    if (__this->IsContinuous())
    {
        return (::app::Fuse::Animations::AnimatorState*)::app::Fuse::Animations::ContinuousTrackChangeState__Fuse_Navigation_NavigationGotoMode__New_1(NULL, __this, p);
    }

    return (::app::Fuse::Animations::AnimatorState*)::app::Fuse::Animations::DiscreteTrackChangeState__Fuse_Navigation_NavigationGotoMode__New_1(NULL, __this, p);
}

float Change__Fuse_Navigation_NavigationGotoMode__get_DegreesX(Change__Fuse_Navigation_NavigationGotoMode* __this)
{
    return ::app::Uno::Math__RadiansToDegrees_1(NULL, __this->X());
}

::app::Uno::Float2 Change__Fuse_Navigation_NavigationGotoMode__get_DegreesXY(Change__Fuse_Navigation_NavigationGotoMode* __this)
{
    return ::app::Uno::Float2__New_2(NULL, ::app::Uno::Math__RadiansToDegrees_1(NULL, __this->X()), ::app::Uno::Math__RadiansToDegrees_1(NULL, __this->Y()));
}

float Change__Fuse_Navigation_NavigationGotoMode__get_DegreesY(Change__Fuse_Navigation_NavigationGotoMode* __this)
{
    return ::app::Uno::Math__RadiansToDegrees_1(NULL, __this->Y());
}

float Change__Fuse_Navigation_NavigationGotoMode__get_DegreesZ(Change__Fuse_Navigation_NavigationGotoMode* __this)
{
    return ::app::Uno::Math__RadiansToDegrees_1(NULL, __this->Y());
}

bool Change__Fuse_Navigation_NavigationGotoMode__get_IsContinuous(Change__Fuse_Navigation_NavigationGotoMode* __this)
{
    return (((((::uType*)::app::Fuse::Navigation::NavigationGotoMode__typeof() == (::uType*)::app::Uno::Float__typeof()) || ((::uType*)::app::Fuse::Navigation::NavigationGotoMode__typeof() == (::uType*)::app::Uno::Float2__typeof())) || ((::uType*)::app::Fuse::Navigation::NavigationGotoMode__typeof() == (::uType*)::app::Uno::Float3__typeof())) || ((::uType*)::app::Fuse::Navigation::NavigationGotoMode__typeof() == (::uType*)::app::Uno::Float4__typeof())) || ((::uType*)::app::Fuse::Navigation::NavigationGotoMode__typeof() == (::uType*)::app::Uno::Double__typeof());
}

::app::Uno::UX::Property__Fuse_Navigation_NavigationGotoMode* Change__Fuse_Navigation_NavigationGotoMode__get_Target(Change__Fuse_Navigation_NavigationGotoMode* __this)
{
    return __this->_Target;
}

int Change__Fuse_Navigation_NavigationGotoMode__get_Value(Change__Fuse_Navigation_NavigationGotoMode* __this)
{
    return __this->IsContinuous() ? ::uPtr< ::app::Fuse::Animations::Converter__Fuse_Navigation_NavigationGotoMode*>(__this->ContinuousConverter)->Out(__this->_vectorValue) : ::uUnbox< int>(::app::Fuse::Navigation::NavigationGotoMode__typeof(), __this->_objectValue);
}

float Change__Fuse_Navigation_NavigationGotoMode__get_X(Change__Fuse_Navigation_NavigationGotoMode* __this)
{
    return __this->_vectorValue.X;
}

::app::Uno::Float2 Change__Fuse_Navigation_NavigationGotoMode__get_XY(Change__Fuse_Navigation_NavigationGotoMode* __this)
{
    ::app::Uno::Float4 ind_123 = __this->_vectorValue;
    return ::app::Uno::Float2__New_2(NULL, ind_123.X, ind_123.Y);
}

float Change__Fuse_Navigation_NavigationGotoMode__get_Y(Change__Fuse_Navigation_NavigationGotoMode* __this)
{
    return __this->_vectorValue.Y;
}

float Change__Fuse_Navigation_NavigationGotoMode__get_Z(Change__Fuse_Navigation_NavigationGotoMode* __this)
{
    return __this->_vectorValue.Z;
}

Change__Fuse_Navigation_NavigationGotoMode* Change__Fuse_Navigation_NavigationGotoMode__New_1(::uStatic* __this, ::app::Uno::UX::Property__Fuse_Navigation_NavigationGotoMode* target)
{
    Change__Fuse_Navigation_NavigationGotoMode* inst = (Change__Fuse_Navigation_NavigationGotoMode*)::uAllocObject(sizeof(Change__Fuse_Navigation_NavigationGotoMode), Change__Fuse_Navigation_NavigationGotoMode__typeof());
    inst->_ObjInit_2(target);
    return inst;
}

void Change__Fuse_Navigation_NavigationGotoMode__set_DegreesX(Change__Fuse_Navigation_NavigationGotoMode* __this, float value)
{
    __this->X(::app::Uno::Math__DegreesToRadians_1(NULL, value));
}

void Change__Fuse_Navigation_NavigationGotoMode__set_DegreesXY(Change__Fuse_Navigation_NavigationGotoMode* __this, ::app::Uno::Float2 value)
{
    __this->XY(::app::Uno::Float2__New_2(NULL, ::app::Uno::Math__DegreesToRadians_1(NULL, value.X), ::app::Uno::Math__DegreesToRadians_1(NULL, value.Y)));
}

void Change__Fuse_Navigation_NavigationGotoMode__set_DegreesY(Change__Fuse_Navigation_NavigationGotoMode* __this, float value)
{
    __this->Y(::app::Uno::Math__DegreesToRadians_1(NULL, value));
}

void Change__Fuse_Navigation_NavigationGotoMode__set_DegreesZ(Change__Fuse_Navigation_NavigationGotoMode* __this, float value)
{
    __this->Y(::app::Uno::Math__DegreesToRadians_1(NULL, value));
}

void Change__Fuse_Navigation_NavigationGotoMode__set_Target(Change__Fuse_Navigation_NavigationGotoMode* __this, ::app::Uno::UX::Property__Fuse_Navigation_NavigationGotoMode* value)
{
    __this->_Target = value;
}

void Change__Fuse_Navigation_NavigationGotoMode__set_Value(Change__Fuse_Navigation_NavigationGotoMode* __this, int value)
{
    if (__this->IsContinuous())
    {
        __this->_vectorValue = ::uPtr< ::app::Fuse::Animations::Converter__Fuse_Navigation_NavigationGotoMode*>(__this->ContinuousConverter)->In(value);
    }
    else
    {
        __this->_objectValue = ::uBox< int>(::app::Fuse::Navigation::NavigationGotoMode__typeof(), value);
    }
}

void Change__Fuse_Navigation_NavigationGotoMode__set_X(Change__Fuse_Navigation_NavigationGotoMode* __this, float value)
{
    __this->_vectorValue.X = value;
}

void Change__Fuse_Navigation_NavigationGotoMode__set_XY(Change__Fuse_Navigation_NavigationGotoMode* __this, ::app::Uno::Float2 value)
{
    __this->_vectorValue = ::app::Uno::Float4__New_6(NULL, value, __this->_vectorValue.Z, __this->_vectorValue.W);
}

void Change__Fuse_Navigation_NavigationGotoMode__set_Y(Change__Fuse_Navigation_NavigationGotoMode* __this, float value)
{
    __this->_vectorValue.Y = value;
}

void Change__Fuse_Navigation_NavigationGotoMode__set_Z(Change__Fuse_Navigation_NavigationGotoMode* __this, float value)
{
    __this->_vectorValue.Z = value;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Animations\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

Change__Fuse_Navigation_SnapTo__uType* Change__Fuse_Navigation_SnapTo__typeof()
{
    static ::uStaticStrong<Change__Fuse_Navigation_SnapTo__uType*> type;
    if (type != NULL) return type;

    type = (Change__Fuse_Navigation_SnapTo__uType*)::uAllocClassType(sizeof(Change__Fuse_Navigation_SnapTo__uType), "Fuse.Animations.Change<Fuse.Navigation.SnapTo>", false, 0, 2, 0);

    type->SetBaseType(::app::Fuse::Animations::TrackAnimator__typeof());
    type->__fp_CreateState = (::app::Fuse::Animations::AnimatorState*(*)(::app::Fuse::Animations::Animator*, ::app::Fuse::Animations::CreateStateParams*))Change__Fuse_Navigation_SnapTo__CreateState;

    type->SetStrongRefs(
        "_Target", offsetof(Change__Fuse_Navigation_SnapTo, _Target),
        "ContinuousConverter", offsetof(Change__Fuse_Navigation_SnapTo, ContinuousConverter));

    type->SetFields(1,
        ::uNewField("ContinuousConverter", NULL, offsetof(Change__Fuse_Navigation_SnapTo, ContinuousConverter), ::app::Fuse::Animations::Converter__Fuse_Navigation_SnapTo__typeof()));

    type->SetFunctions(22,
        ::uNewFunction("get_DegreesX", Change__Fuse_Navigation_SnapTo__get_DegreesX, 0, false, ::app::Uno::Float__typeof()),
        ::uNewFunction("get_DegreesXY", Change__Fuse_Navigation_SnapTo__get_DegreesXY, 0, false, ::app::Uno::Float2__typeof()),
        ::uNewFunction("get_DegreesY", Change__Fuse_Navigation_SnapTo__get_DegreesY, 0, false, ::app::Uno::Float__typeof()),
        ::uNewFunction("get_DegreesZ", Change__Fuse_Navigation_SnapTo__get_DegreesZ, 0, false, ::app::Uno::Float__typeof()),
        ::uNewFunction("get_IsContinuous", Change__Fuse_Navigation_SnapTo__get_IsContinuous, 0, false, ::app::Uno::Bool__typeof()),
        ::uNewFunction("get_Target", Change__Fuse_Navigation_SnapTo__get_Target, 0, false, ::app::Uno::UX::Property__Fuse_Navigation_SnapTo__typeof()),
        ::uNewFunction("get_Value", Change__Fuse_Navigation_SnapTo__get_Value, 0, false, ::app::Fuse::Navigation::SnapTo__typeof()),
        ::uNewFunction("get_X", Change__Fuse_Navigation_SnapTo__get_X, 0, false, ::app::Uno::Float__typeof()),
        ::uNewFunction("get_XY", Change__Fuse_Navigation_SnapTo__get_XY, 0, false, ::app::Uno::Float2__typeof()),
        ::uNewFunction("get_Y", Change__Fuse_Navigation_SnapTo__get_Y, 0, false, ::app::Uno::Float__typeof()),
        ::uNewFunction("get_Z", Change__Fuse_Navigation_SnapTo__get_Z, 0, false, ::app::Uno::Float__typeof()),
        ::uNewFunction(".ctor", Change__Fuse_Navigation_SnapTo__New_1, 0, true, Change__Fuse_Navigation_SnapTo__typeof(), ::app::Uno::UX::Property__Fuse_Navigation_SnapTo__typeof()),
        ::uNewFunctionVoid("set_DegreesX", Change__Fuse_Navigation_SnapTo__set_DegreesX, 0, false, ::app::Uno::Float__typeof()),
        ::uNewFunctionVoid("set_DegreesXY", Change__Fuse_Navigation_SnapTo__set_DegreesXY, 0, false, ::app::Uno::Float2__typeof()),
        ::uNewFunctionVoid("set_DegreesY", Change__Fuse_Navigation_SnapTo__set_DegreesY, 0, false, ::app::Uno::Float__typeof()),
        ::uNewFunctionVoid("set_DegreesZ", Change__Fuse_Navigation_SnapTo__set_DegreesZ, 0, false, ::app::Uno::Float__typeof()),
        ::uNewFunctionVoid("set_Target", Change__Fuse_Navigation_SnapTo__set_Target, 0, false, ::app::Uno::UX::Property__Fuse_Navigation_SnapTo__typeof()),
        ::uNewFunctionVoid("set_Value", Change__Fuse_Navigation_SnapTo__set_Value, 0, false, ::app::Fuse::Navigation::SnapTo__typeof()),
        ::uNewFunctionVoid("set_X", Change__Fuse_Navigation_SnapTo__set_X, 0, false, ::app::Uno::Float__typeof()),
        ::uNewFunctionVoid("set_XY", Change__Fuse_Navigation_SnapTo__set_XY, 0, false, ::app::Uno::Float2__typeof()),
        ::uNewFunctionVoid("set_Y", Change__Fuse_Navigation_SnapTo__set_Y, 0, false, ::app::Uno::Float__typeof()),
        ::uNewFunctionVoid("set_Z", Change__Fuse_Navigation_SnapTo__set_Z, 0, false, ::app::Uno::Float__typeof()));

    ::uRegisterType(type);
    return type;
}

void Change__Fuse_Navigation_SnapTo___ObjInit_2(Change__Fuse_Navigation_SnapTo* __this, ::app::Uno::UX::Property__Fuse_Navigation_SnapTo* target)
{
    ::app::Fuse::Animations::TrackAnimator___ObjInit_1(__this);

    if (target == NULL)
    {
        U_THROW(::app::Uno::ArgumentNullException__New_5(NULL, ::uGetConstString("target")));
    }

    __this->Target(target);

    if (__this->IsContinuous())
    {
        ::uObject* v;

        if ((::uType*)::app::Fuse::Navigation::SnapTo__typeof() == (::uType*)::app::Uno::Float__typeof())
        {
            v = (::uObject*)::app::Fuse::Animations::ConverterFloat__Singleton;
        }
        else if ((::uType*)::app::Fuse::Navigation::SnapTo__typeof() == (::uType*)::app::Uno::Float2__typeof())
        {
            v = (::uObject*)::app::Fuse::Animations::ConverterFloat2__Singleton;
        }
        else if ((::uType*)::app::Fuse::Navigation::SnapTo__typeof() == (::uType*)::app::Uno::Float3__typeof())
        {
            v = (::uObject*)::app::Fuse::Animations::ConverterFloat3__Singleton;
        }
        else if ((::uType*)::app::Fuse::Navigation::SnapTo__typeof() == (::uType*)::app::Uno::Float4__typeof())
        {
            v = (::uObject*)::app::Fuse::Animations::ConverterFloat4__Singleton;
        }
        else if ((::uType*)::app::Fuse::Navigation::SnapTo__typeof() == (::uType*)::app::Uno::Double__typeof())
        {
            v = (::uObject*)::app::Fuse::Animations::ConverterDouble__Singleton;
        }
        else
        {
            U_THROW(::app::Uno::Exception__New_2(NULL, ::app::Uno::String__op_Addition_1(NULL, ::uGetConstString("Unsupported change type: "), (::uObject*)(::uType*)::app::Fuse::Navigation::SnapTo__typeof())));
        }

        __this->ContinuousConverter = ::uCast< ::app::Fuse::Animations::Converter__Fuse_Navigation_SnapTo*>(v, ::app::Fuse::Animations::Converter__Fuse_Navigation_SnapTo__typeof());
    }
    else
    {
        __this->Mixer = ::app::Fuse::Animations::Mixer__get_DefaultDiscrete(NULL);
        __this->MarkDiscrete();
    }
}

::app::Fuse::Animations::AnimatorState* Change__Fuse_Navigation_SnapTo__CreateState(Change__Fuse_Navigation_SnapTo* __this, ::app::Fuse::Animations::CreateStateParams* p)
{
    if (__this->IsContinuous())
    {
        return (::app::Fuse::Animations::AnimatorState*)::app::Fuse::Animations::ContinuousTrackChangeState__Fuse_Navigation_SnapTo__New_1(NULL, __this, p);
    }

    return (::app::Fuse::Animations::AnimatorState*)::app::Fuse::Animations::DiscreteTrackChangeState__Fuse_Navigation_SnapTo__New_1(NULL, __this, p);
}

float Change__Fuse_Navigation_SnapTo__get_DegreesX(Change__Fuse_Navigation_SnapTo* __this)
{
    return ::app::Uno::Math__RadiansToDegrees_1(NULL, __this->X());
}

::app::Uno::Float2 Change__Fuse_Navigation_SnapTo__get_DegreesXY(Change__Fuse_Navigation_SnapTo* __this)
{
    return ::app::Uno::Float2__New_2(NULL, ::app::Uno::Math__RadiansToDegrees_1(NULL, __this->X()), ::app::Uno::Math__RadiansToDegrees_1(NULL, __this->Y()));
}

float Change__Fuse_Navigation_SnapTo__get_DegreesY(Change__Fuse_Navigation_SnapTo* __this)
{
    return ::app::Uno::Math__RadiansToDegrees_1(NULL, __this->Y());
}

float Change__Fuse_Navigation_SnapTo__get_DegreesZ(Change__Fuse_Navigation_SnapTo* __this)
{
    return ::app::Uno::Math__RadiansToDegrees_1(NULL, __this->Y());
}

bool Change__Fuse_Navigation_SnapTo__get_IsContinuous(Change__Fuse_Navigation_SnapTo* __this)
{
    return (((((::uType*)::app::Fuse::Navigation::SnapTo__typeof() == (::uType*)::app::Uno::Float__typeof()) || ((::uType*)::app::Fuse::Navigation::SnapTo__typeof() == (::uType*)::app::Uno::Float2__typeof())) || ((::uType*)::app::Fuse::Navigation::SnapTo__typeof() == (::uType*)::app::Uno::Float3__typeof())) || ((::uType*)::app::Fuse::Navigation::SnapTo__typeof() == (::uType*)::app::Uno::Float4__typeof())) || ((::uType*)::app::Fuse::Navigation::SnapTo__typeof() == (::uType*)::app::Uno::Double__typeof());
}

::app::Uno::UX::Property__Fuse_Navigation_SnapTo* Change__Fuse_Navigation_SnapTo__get_Target(Change__Fuse_Navigation_SnapTo* __this)
{
    return __this->_Target;
}

int Change__Fuse_Navigation_SnapTo__get_Value(Change__Fuse_Navigation_SnapTo* __this)
{
    return __this->IsContinuous() ? ::uPtr< ::app::Fuse::Animations::Converter__Fuse_Navigation_SnapTo*>(__this->ContinuousConverter)->Out(__this->_vectorValue) : ::uUnbox< int>(::app::Fuse::Navigation::SnapTo__typeof(), __this->_objectValue);
}

float Change__Fuse_Navigation_SnapTo__get_X(Change__Fuse_Navigation_SnapTo* __this)
{
    return __this->_vectorValue.X;
}

::app::Uno::Float2 Change__Fuse_Navigation_SnapTo__get_XY(Change__Fuse_Navigation_SnapTo* __this)
{
    ::app::Uno::Float4 ind_123 = __this->_vectorValue;
    return ::app::Uno::Float2__New_2(NULL, ind_123.X, ind_123.Y);
}

float Change__Fuse_Navigation_SnapTo__get_Y(Change__Fuse_Navigation_SnapTo* __this)
{
    return __this->_vectorValue.Y;
}

float Change__Fuse_Navigation_SnapTo__get_Z(Change__Fuse_Navigation_SnapTo* __this)
{
    return __this->_vectorValue.Z;
}

Change__Fuse_Navigation_SnapTo* Change__Fuse_Navigation_SnapTo__New_1(::uStatic* __this, ::app::Uno::UX::Property__Fuse_Navigation_SnapTo* target)
{
    Change__Fuse_Navigation_SnapTo* inst = (Change__Fuse_Navigation_SnapTo*)::uAllocObject(sizeof(Change__Fuse_Navigation_SnapTo), Change__Fuse_Navigation_SnapTo__typeof());
    inst->_ObjInit_2(target);
    return inst;
}

void Change__Fuse_Navigation_SnapTo__set_DegreesX(Change__Fuse_Navigation_SnapTo* __this, float value)
{
    __this->X(::app::Uno::Math__DegreesToRadians_1(NULL, value));
}

void Change__Fuse_Navigation_SnapTo__set_DegreesXY(Change__Fuse_Navigation_SnapTo* __this, ::app::Uno::Float2 value)
{
    __this->XY(::app::Uno::Float2__New_2(NULL, ::app::Uno::Math__DegreesToRadians_1(NULL, value.X), ::app::Uno::Math__DegreesToRadians_1(NULL, value.Y)));
}

void Change__Fuse_Navigation_SnapTo__set_DegreesY(Change__Fuse_Navigation_SnapTo* __this, float value)
{
    __this->Y(::app::Uno::Math__DegreesToRadians_1(NULL, value));
}

void Change__Fuse_Navigation_SnapTo__set_DegreesZ(Change__Fuse_Navigation_SnapTo* __this, float value)
{
    __this->Y(::app::Uno::Math__DegreesToRadians_1(NULL, value));
}

void Change__Fuse_Navigation_SnapTo__set_Target(Change__Fuse_Navigation_SnapTo* __this, ::app::Uno::UX::Property__Fuse_Navigation_SnapTo* value)
{
    __this->_Target = value;
}

void Change__Fuse_Navigation_SnapTo__set_Value(Change__Fuse_Navigation_SnapTo* __this, int value)
{
    if (__this->IsContinuous())
    {
        __this->_vectorValue = ::uPtr< ::app::Fuse::Animations::Converter__Fuse_Navigation_SnapTo*>(__this->ContinuousConverter)->In(value);
    }
    else
    {
        __this->_objectValue = ::uBox< int>(::app::Fuse::Navigation::SnapTo__typeof(), value);
    }
}

void Change__Fuse_Navigation_SnapTo__set_X(Change__Fuse_Navigation_SnapTo* __this, float value)
{
    __this->_vectorValue.X = value;
}

void Change__Fuse_Navigation_SnapTo__set_XY(Change__Fuse_Navigation_SnapTo* __this, ::app::Uno::Float2 value)
{
    __this->_vectorValue = ::app::Uno::Float4__New_6(NULL, value, __this->_vectorValue.Z, __this->_vectorValue.W);
}

void Change__Fuse_Navigation_SnapTo__set_Y(Change__Fuse_Navigation_SnapTo* __this, float value)
{
    __this->_vectorValue.Y = value;
}

void Change__Fuse_Navigation_SnapTo__set_Z(Change__Fuse_Navigation_SnapTo* __this, float value)
{
    __this->_vectorValue.Z = value;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Animations\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

Change__Fuse_Navigation_SwipeDirection__uType* Change__Fuse_Navigation_SwipeDirection__typeof()
{
    static ::uStaticStrong<Change__Fuse_Navigation_SwipeDirection__uType*> type;
    if (type != NULL) return type;

    type = (Change__Fuse_Navigation_SwipeDirection__uType*)::uAllocClassType(sizeof(Change__Fuse_Navigation_SwipeDirection__uType), "Fuse.Animations.Change<Fuse.Navigation.SwipeDirection>", false, 0, 2, 0);

    type->SetBaseType(::app::Fuse::Animations::TrackAnimator__typeof());
    type->__fp_CreateState = (::app::Fuse::Animations::AnimatorState*(*)(::app::Fuse::Animations::Animator*, ::app::Fuse::Animations::CreateStateParams*))Change__Fuse_Navigation_SwipeDirection__CreateState;

    type->SetStrongRefs(
        "_Target", offsetof(Change__Fuse_Navigation_SwipeDirection, _Target),
        "ContinuousConverter", offsetof(Change__Fuse_Navigation_SwipeDirection, ContinuousConverter));

    type->SetFields(1,
        ::uNewField("ContinuousConverter", NULL, offsetof(Change__Fuse_Navigation_SwipeDirection, ContinuousConverter), ::app::Fuse::Animations::Converter__Fuse_Navigation_SwipeDirection__typeof()));

    type->SetFunctions(22,
        ::uNewFunction("get_DegreesX", Change__Fuse_Navigation_SwipeDirection__get_DegreesX, 0, false, ::app::Uno::Float__typeof()),
        ::uNewFunction("get_DegreesXY", Change__Fuse_Navigation_SwipeDirection__get_DegreesXY, 0, false, ::app::Uno::Float2__typeof()),
        ::uNewFunction("get_DegreesY", Change__Fuse_Navigation_SwipeDirection__get_DegreesY, 0, false, ::app::Uno::Float__typeof()),
        ::uNewFunction("get_DegreesZ", Change__Fuse_Navigation_SwipeDirection__get_DegreesZ, 0, false, ::app::Uno::Float__typeof()),
        ::uNewFunction("get_IsContinuous", Change__Fuse_Navigation_SwipeDirection__get_IsContinuous, 0, false, ::app::Uno::Bool__typeof()),
        ::uNewFunction("get_Target", Change__Fuse_Navigation_SwipeDirection__get_Target, 0, false, ::app::Uno::UX::Property__Fuse_Navigation_SwipeDirection__typeof()),
        ::uNewFunction("get_Value", Change__Fuse_Navigation_SwipeDirection__get_Value, 0, false, ::app::Fuse::Navigation::SwipeDirection__typeof()),
        ::uNewFunction("get_X", Change__Fuse_Navigation_SwipeDirection__get_X, 0, false, ::app::Uno::Float__typeof()),
        ::uNewFunction("get_XY", Change__Fuse_Navigation_SwipeDirection__get_XY, 0, false, ::app::Uno::Float2__typeof()),
        ::uNewFunction("get_Y", Change__Fuse_Navigation_SwipeDirection__get_Y, 0, false, ::app::Uno::Float__typeof()),
        ::uNewFunction("get_Z", Change__Fuse_Navigation_SwipeDirection__get_Z, 0, false, ::app::Uno::Float__typeof()),
        ::uNewFunction(".ctor", Change__Fuse_Navigation_SwipeDirection__New_1, 0, true, Change__Fuse_Navigation_SwipeDirection__typeof(), ::app::Uno::UX::Property__Fuse_Navigation_SwipeDirection__typeof()),
        ::uNewFunctionVoid("set_DegreesX", Change__Fuse_Navigation_SwipeDirection__set_DegreesX, 0, false, ::app::Uno::Float__typeof()),
        ::uNewFunctionVoid("set_DegreesXY", Change__Fuse_Navigation_SwipeDirection__set_DegreesXY, 0, false, ::app::Uno::Float2__typeof()),
        ::uNewFunctionVoid("set_DegreesY", Change__Fuse_Navigation_SwipeDirection__set_DegreesY, 0, false, ::app::Uno::Float__typeof()),
        ::uNewFunctionVoid("set_DegreesZ", Change__Fuse_Navigation_SwipeDirection__set_DegreesZ, 0, false, ::app::Uno::Float__typeof()),
        ::uNewFunctionVoid("set_Target", Change__Fuse_Navigation_SwipeDirection__set_Target, 0, false, ::app::Uno::UX::Property__Fuse_Navigation_SwipeDirection__typeof()),
        ::uNewFunctionVoid("set_Value", Change__Fuse_Navigation_SwipeDirection__set_Value, 0, false, ::app::Fuse::Navigation::SwipeDirection__typeof()),
        ::uNewFunctionVoid("set_X", Change__Fuse_Navigation_SwipeDirection__set_X, 0, false, ::app::Uno::Float__typeof()),
        ::uNewFunctionVoid("set_XY", Change__Fuse_Navigation_SwipeDirection__set_XY, 0, false, ::app::Uno::Float2__typeof()),
        ::uNewFunctionVoid("set_Y", Change__Fuse_Navigation_SwipeDirection__set_Y, 0, false, ::app::Uno::Float__typeof()),
        ::uNewFunctionVoid("set_Z", Change__Fuse_Navigation_SwipeDirection__set_Z, 0, false, ::app::Uno::Float__typeof()));

    ::uRegisterType(type);
    return type;
}

void Change__Fuse_Navigation_SwipeDirection___ObjInit_2(Change__Fuse_Navigation_SwipeDirection* __this, ::app::Uno::UX::Property__Fuse_Navigation_SwipeDirection* target)
{
    ::app::Fuse::Animations::TrackAnimator___ObjInit_1(__this);

    if (target == NULL)
    {
        U_THROW(::app::Uno::ArgumentNullException__New_5(NULL, ::uGetConstString("target")));
    }

    __this->Target(target);

    if (__this->IsContinuous())
    {
        ::uObject* v;

        if ((::uType*)::app::Fuse::Navigation::SwipeDirection__typeof() == (::uType*)::app::Uno::Float__typeof())
        {
            v = (::uObject*)::app::Fuse::Animations::ConverterFloat__Singleton;
        }
        else if ((::uType*)::app::Fuse::Navigation::SwipeDirection__typeof() == (::uType*)::app::Uno::Float2__typeof())
        {
            v = (::uObject*)::app::Fuse::Animations::ConverterFloat2__Singleton;
        }
        else if ((::uType*)::app::Fuse::Navigation::SwipeDirection__typeof() == (::uType*)::app::Uno::Float3__typeof())
        {
            v = (::uObject*)::app::Fuse::Animations::ConverterFloat3__Singleton;
        }
        else if ((::uType*)::app::Fuse::Navigation::SwipeDirection__typeof() == (::uType*)::app::Uno::Float4__typeof())
        {
            v = (::uObject*)::app::Fuse::Animations::ConverterFloat4__Singleton;
        }
        else if ((::uType*)::app::Fuse::Navigation::SwipeDirection__typeof() == (::uType*)::app::Uno::Double__typeof())
        {
            v = (::uObject*)::app::Fuse::Animations::ConverterDouble__Singleton;
        }
        else
        {
            U_THROW(::app::Uno::Exception__New_2(NULL, ::app::Uno::String__op_Addition_1(NULL, ::uGetConstString("Unsupported change type: "), (::uObject*)(::uType*)::app::Fuse::Navigation::SwipeDirection__typeof())));
        }

        __this->ContinuousConverter = ::uCast< ::app::Fuse::Animations::Converter__Fuse_Navigation_SwipeDirection*>(v, ::app::Fuse::Animations::Converter__Fuse_Navigation_SwipeDirection__typeof());
    }
    else
    {
        __this->Mixer = ::app::Fuse::Animations::Mixer__get_DefaultDiscrete(NULL);
        __this->MarkDiscrete();
    }
}

::app::Fuse::Animations::AnimatorState* Change__Fuse_Navigation_SwipeDirection__CreateState(Change__Fuse_Navigation_SwipeDirection* __this, ::app::Fuse::Animations::CreateStateParams* p)
{
    if (__this->IsContinuous())
    {
        return (::app::Fuse::Animations::AnimatorState*)::app::Fuse::Animations::ContinuousTrackChangeState__Fuse_Navigation_SwipeDirection__New_1(NULL, __this, p);
    }

    return (::app::Fuse::Animations::AnimatorState*)::app::Fuse::Animations::DiscreteTrackChangeState__Fuse_Navigation_SwipeDirection__New_1(NULL, __this, p);
}

float Change__Fuse_Navigation_SwipeDirection__get_DegreesX(Change__Fuse_Navigation_SwipeDirection* __this)
{
    return ::app::Uno::Math__RadiansToDegrees_1(NULL, __this->X());
}

::app::Uno::Float2 Change__Fuse_Navigation_SwipeDirection__get_DegreesXY(Change__Fuse_Navigation_SwipeDirection* __this)
{
    return ::app::Uno::Float2__New_2(NULL, ::app::Uno::Math__RadiansToDegrees_1(NULL, __this->X()), ::app::Uno::Math__RadiansToDegrees_1(NULL, __this->Y()));
}

float Change__Fuse_Navigation_SwipeDirection__get_DegreesY(Change__Fuse_Navigation_SwipeDirection* __this)
{
    return ::app::Uno::Math__RadiansToDegrees_1(NULL, __this->Y());
}

float Change__Fuse_Navigation_SwipeDirection__get_DegreesZ(Change__Fuse_Navigation_SwipeDirection* __this)
{
    return ::app::Uno::Math__RadiansToDegrees_1(NULL, __this->Y());
}

bool Change__Fuse_Navigation_SwipeDirection__get_IsContinuous(Change__Fuse_Navigation_SwipeDirection* __this)
{
    return (((((::uType*)::app::Fuse::Navigation::SwipeDirection__typeof() == (::uType*)::app::Uno::Float__typeof()) || ((::uType*)::app::Fuse::Navigation::SwipeDirection__typeof() == (::uType*)::app::Uno::Float2__typeof())) || ((::uType*)::app::Fuse::Navigation::SwipeDirection__typeof() == (::uType*)::app::Uno::Float3__typeof())) || ((::uType*)::app::Fuse::Navigation::SwipeDirection__typeof() == (::uType*)::app::Uno::Float4__typeof())) || ((::uType*)::app::Fuse::Navigation::SwipeDirection__typeof() == (::uType*)::app::Uno::Double__typeof());
}

::app::Uno::UX::Property__Fuse_Navigation_SwipeDirection* Change__Fuse_Navigation_SwipeDirection__get_Target(Change__Fuse_Navigation_SwipeDirection* __this)
{
    return __this->_Target;
}

int Change__Fuse_Navigation_SwipeDirection__get_Value(Change__Fuse_Navigation_SwipeDirection* __this)
{
    return __this->IsContinuous() ? ::uPtr< ::app::Fuse::Animations::Converter__Fuse_Navigation_SwipeDirection*>(__this->ContinuousConverter)->Out(__this->_vectorValue) : ::uUnbox< int>(::app::Fuse::Navigation::SwipeDirection__typeof(), __this->_objectValue);
}

float Change__Fuse_Navigation_SwipeDirection__get_X(Change__Fuse_Navigation_SwipeDirection* __this)
{
    return __this->_vectorValue.X;
}

::app::Uno::Float2 Change__Fuse_Navigation_SwipeDirection__get_XY(Change__Fuse_Navigation_SwipeDirection* __this)
{
    ::app::Uno::Float4 ind_123 = __this->_vectorValue;
    return ::app::Uno::Float2__New_2(NULL, ind_123.X, ind_123.Y);
}

float Change__Fuse_Navigation_SwipeDirection__get_Y(Change__Fuse_Navigation_SwipeDirection* __this)
{
    return __this->_vectorValue.Y;
}

float Change__Fuse_Navigation_SwipeDirection__get_Z(Change__Fuse_Navigation_SwipeDirection* __this)
{
    return __this->_vectorValue.Z;
}

Change__Fuse_Navigation_SwipeDirection* Change__Fuse_Navigation_SwipeDirection__New_1(::uStatic* __this, ::app::Uno::UX::Property__Fuse_Navigation_SwipeDirection* target)
{
    Change__Fuse_Navigation_SwipeDirection* inst = (Change__Fuse_Navigation_SwipeDirection*)::uAllocObject(sizeof(Change__Fuse_Navigation_SwipeDirection), Change__Fuse_Navigation_SwipeDirection__typeof());
    inst->_ObjInit_2(target);
    return inst;
}

void Change__Fuse_Navigation_SwipeDirection__set_DegreesX(Change__Fuse_Navigation_SwipeDirection* __this, float value)
{
    __this->X(::app::Uno::Math__DegreesToRadians_1(NULL, value));
}

void Change__Fuse_Navigation_SwipeDirection__set_DegreesXY(Change__Fuse_Navigation_SwipeDirection* __this, ::app::Uno::Float2 value)
{
    __this->XY(::app::Uno::Float2__New_2(NULL, ::app::Uno::Math__DegreesToRadians_1(NULL, value.X), ::app::Uno::Math__DegreesToRadians_1(NULL, value.Y)));
}

void Change__Fuse_Navigation_SwipeDirection__set_DegreesY(Change__Fuse_Navigation_SwipeDirection* __this, float value)
{
    __this->Y(::app::Uno::Math__DegreesToRadians_1(NULL, value));
}

void Change__Fuse_Navigation_SwipeDirection__set_DegreesZ(Change__Fuse_Navigation_SwipeDirection* __this, float value)
{
    __this->Y(::app::Uno::Math__DegreesToRadians_1(NULL, value));
}

void Change__Fuse_Navigation_SwipeDirection__set_Target(Change__Fuse_Navigation_SwipeDirection* __this, ::app::Uno::UX::Property__Fuse_Navigation_SwipeDirection* value)
{
    __this->_Target = value;
}

void Change__Fuse_Navigation_SwipeDirection__set_Value(Change__Fuse_Navigation_SwipeDirection* __this, int value)
{
    if (__this->IsContinuous())
    {
        __this->_vectorValue = ::uPtr< ::app::Fuse::Animations::Converter__Fuse_Navigation_SwipeDirection*>(__this->ContinuousConverter)->In(value);
    }
    else
    {
        __this->_objectValue = ::uBox< int>(::app::Fuse::Navigation::SwipeDirection__typeof(), value);
    }
}

void Change__Fuse_Navigation_SwipeDirection__set_X(Change__Fuse_Navigation_SwipeDirection* __this, float value)
{
    __this->_vectorValue.X = value;
}

void Change__Fuse_Navigation_SwipeDirection__set_XY(Change__Fuse_Navigation_SwipeDirection* __this, ::app::Uno::Float2 value)
{
    __this->_vectorValue = ::app::Uno::Float4__New_6(NULL, value, __this->_vectorValue.Z, __this->_vectorValue.W);
}

void Change__Fuse_Navigation_SwipeDirection__set_Y(Change__Fuse_Navigation_SwipeDirection* __this, float value)
{
    __this->_vectorValue.Y = value;
}

void Change__Fuse_Navigation_SwipeDirection__set_Z(Change__Fuse_Navigation_SwipeDirection* __this, float value)
{
    __this->_vectorValue.Z = value;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Animations\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

Change__Fuse_Navigation_SwipeEnds__uType* Change__Fuse_Navigation_SwipeEnds__typeof()
{
    static ::uStaticStrong<Change__Fuse_Navigation_SwipeEnds__uType*> type;
    if (type != NULL) return type;

    type = (Change__Fuse_Navigation_SwipeEnds__uType*)::uAllocClassType(sizeof(Change__Fuse_Navigation_SwipeEnds__uType), "Fuse.Animations.Change<Fuse.Navigation.SwipeEnds>", false, 0, 2, 0);

    type->SetBaseType(::app::Fuse::Animations::TrackAnimator__typeof());
    type->__fp_CreateState = (::app::Fuse::Animations::AnimatorState*(*)(::app::Fuse::Animations::Animator*, ::app::Fuse::Animations::CreateStateParams*))Change__Fuse_Navigation_SwipeEnds__CreateState;

    type->SetStrongRefs(
        "_Target", offsetof(Change__Fuse_Navigation_SwipeEnds, _Target),
        "ContinuousConverter", offsetof(Change__Fuse_Navigation_SwipeEnds, ContinuousConverter));

    type->SetFields(1,
        ::uNewField("ContinuousConverter", NULL, offsetof(Change__Fuse_Navigation_SwipeEnds, ContinuousConverter), ::app::Fuse::Animations::Converter__Fuse_Navigation_SwipeEnds__typeof()));

    type->SetFunctions(22,
        ::uNewFunction("get_DegreesX", Change__Fuse_Navigation_SwipeEnds__get_DegreesX, 0, false, ::app::Uno::Float__typeof()),
        ::uNewFunction("get_DegreesXY", Change__Fuse_Navigation_SwipeEnds__get_DegreesXY, 0, false, ::app::Uno::Float2__typeof()),
        ::uNewFunction("get_DegreesY", Change__Fuse_Navigation_SwipeEnds__get_DegreesY, 0, false, ::app::Uno::Float__typeof()),
        ::uNewFunction("get_DegreesZ", Change__Fuse_Navigation_SwipeEnds__get_DegreesZ, 0, false, ::app::Uno::Float__typeof()),
        ::uNewFunction("get_IsContinuous", Change__Fuse_Navigation_SwipeEnds__get_IsContinuous, 0, false, ::app::Uno::Bool__typeof()),
        ::uNewFunction("get_Target", Change__Fuse_Navigation_SwipeEnds__get_Target, 0, false, ::app::Uno::UX::Property__Fuse_Navigation_SwipeEnds__typeof()),
        ::uNewFunction("get_Value", Change__Fuse_Navigation_SwipeEnds__get_Value, 0, false, ::app::Fuse::Navigation::SwipeEnds__typeof()),
        ::uNewFunction("get_X", Change__Fuse_Navigation_SwipeEnds__get_X, 0, false, ::app::Uno::Float__typeof()),
        ::uNewFunction("get_XY", Change__Fuse_Navigation_SwipeEnds__get_XY, 0, false, ::app::Uno::Float2__typeof()),
        ::uNewFunction("get_Y", Change__Fuse_Navigation_SwipeEnds__get_Y, 0, false, ::app::Uno::Float__typeof()),
        ::uNewFunction("get_Z", Change__Fuse_Navigation_SwipeEnds__get_Z, 0, false, ::app::Uno::Float__typeof()),
        ::uNewFunction(".ctor", Change__Fuse_Navigation_SwipeEnds__New_1, 0, true, Change__Fuse_Navigation_SwipeEnds__typeof(), ::app::Uno::UX::Property__Fuse_Navigation_SwipeEnds__typeof()),
        ::uNewFunctionVoid("set_DegreesX", Change__Fuse_Navigation_SwipeEnds__set_DegreesX, 0, false, ::app::Uno::Float__typeof()),
        ::uNewFunctionVoid("set_DegreesXY", Change__Fuse_Navigation_SwipeEnds__set_DegreesXY, 0, false, ::app::Uno::Float2__typeof()),
        ::uNewFunctionVoid("set_DegreesY", Change__Fuse_Navigation_SwipeEnds__set_DegreesY, 0, false, ::app::Uno::Float__typeof()),
        ::uNewFunctionVoid("set_DegreesZ", Change__Fuse_Navigation_SwipeEnds__set_DegreesZ, 0, false, ::app::Uno::Float__typeof()),
        ::uNewFunctionVoid("set_Target", Change__Fuse_Navigation_SwipeEnds__set_Target, 0, false, ::app::Uno::UX::Property__Fuse_Navigation_SwipeEnds__typeof()),
        ::uNewFunctionVoid("set_Value", Change__Fuse_Navigation_SwipeEnds__set_Value, 0, false, ::app::Fuse::Navigation::SwipeEnds__typeof()),
        ::uNewFunctionVoid("set_X", Change__Fuse_Navigation_SwipeEnds__set_X, 0, false, ::app::Uno::Float__typeof()),
        ::uNewFunctionVoid("set_XY", Change__Fuse_Navigation_SwipeEnds__set_XY, 0, false, ::app::Uno::Float2__typeof()),
        ::uNewFunctionVoid("set_Y", Change__Fuse_Navigation_SwipeEnds__set_Y, 0, false, ::app::Uno::Float__typeof()),
        ::uNewFunctionVoid("set_Z", Change__Fuse_Navigation_SwipeEnds__set_Z, 0, false, ::app::Uno::Float__typeof()));

    ::uRegisterType(type);
    return type;
}

void Change__Fuse_Navigation_SwipeEnds___ObjInit_2(Change__Fuse_Navigation_SwipeEnds* __this, ::app::Uno::UX::Property__Fuse_Navigation_SwipeEnds* target)
{
    ::app::Fuse::Animations::TrackAnimator___ObjInit_1(__this);

    if (target == NULL)
    {
        U_THROW(::app::Uno::ArgumentNullException__New_5(NULL, ::uGetConstString("target")));
    }

    __this->Target(target);

    if (__this->IsContinuous())
    {
        ::uObject* v;

        if ((::uType*)::app::Fuse::Navigation::SwipeEnds__typeof() == (::uType*)::app::Uno::Float__typeof())
        {
            v = (::uObject*)::app::Fuse::Animations::ConverterFloat__Singleton;
        }
        else if ((::uType*)::app::Fuse::Navigation::SwipeEnds__typeof() == (::uType*)::app::Uno::Float2__typeof())
        {
            v = (::uObject*)::app::Fuse::Animations::ConverterFloat2__Singleton;
        }
        else if ((::uType*)::app::Fuse::Navigation::SwipeEnds__typeof() == (::uType*)::app::Uno::Float3__typeof())
        {
            v = (::uObject*)::app::Fuse::Animations::ConverterFloat3__Singleton;
        }
        else if ((::uType*)::app::Fuse::Navigation::SwipeEnds__typeof() == (::uType*)::app::Uno::Float4__typeof())
        {
            v = (::uObject*)::app::Fuse::Animations::ConverterFloat4__Singleton;
        }
        else if ((::uType*)::app::Fuse::Navigation::SwipeEnds__typeof() == (::uType*)::app::Uno::Double__typeof())
        {
            v = (::uObject*)::app::Fuse::Animations::ConverterDouble__Singleton;
        }
        else
        {
            U_THROW(::app::Uno::Exception__New_2(NULL, ::app::Uno::String__op_Addition_1(NULL, ::uGetConstString("Unsupported change type: "), (::uObject*)(::uType*)::app::Fuse::Navigation::SwipeEnds__typeof())));
        }

        __this->ContinuousConverter = ::uCast< ::app::Fuse::Animations::Converter__Fuse_Navigation_SwipeEnds*>(v, ::app::Fuse::Animations::Converter__Fuse_Navigation_SwipeEnds__typeof());
    }
    else
    {
        __this->Mixer = ::app::Fuse::Animations::Mixer__get_DefaultDiscrete(NULL);
        __this->MarkDiscrete();
    }
}

::app::Fuse::Animations::AnimatorState* Change__Fuse_Navigation_SwipeEnds__CreateState(Change__Fuse_Navigation_SwipeEnds* __this, ::app::Fuse::Animations::CreateStateParams* p)
{
    if (__this->IsContinuous())
    {
        return (::app::Fuse::Animations::AnimatorState*)::app::Fuse::Animations::ContinuousTrackChangeState__Fuse_Navigation_SwipeEnds__New_1(NULL, __this, p);
    }

    return (::app::Fuse::Animations::AnimatorState*)::app::Fuse::Animations::DiscreteTrackChangeState__Fuse_Navigation_SwipeEnds__New_1(NULL, __this, p);
}

float Change__Fuse_Navigation_SwipeEnds__get_DegreesX(Change__Fuse_Navigation_SwipeEnds* __this)
{
    return ::app::Uno::Math__RadiansToDegrees_1(NULL, __this->X());
}

::app::Uno::Float2 Change__Fuse_Navigation_SwipeEnds__get_DegreesXY(Change__Fuse_Navigation_SwipeEnds* __this)
{
    return ::app::Uno::Float2__New_2(NULL, ::app::Uno::Math__RadiansToDegrees_1(NULL, __this->X()), ::app::Uno::Math__RadiansToDegrees_1(NULL, __this->Y()));
}

float Change__Fuse_Navigation_SwipeEnds__get_DegreesY(Change__Fuse_Navigation_SwipeEnds* __this)
{
    return ::app::Uno::Math__RadiansToDegrees_1(NULL, __this->Y());
}

float Change__Fuse_Navigation_SwipeEnds__get_DegreesZ(Change__Fuse_Navigation_SwipeEnds* __this)
{
    return ::app::Uno::Math__RadiansToDegrees_1(NULL, __this->Y());
}

bool Change__Fuse_Navigation_SwipeEnds__get_IsContinuous(Change__Fuse_Navigation_SwipeEnds* __this)
{
    return (((((::uType*)::app::Fuse::Navigation::SwipeEnds__typeof() == (::uType*)::app::Uno::Float__typeof()) || ((::uType*)::app::Fuse::Navigation::SwipeEnds__typeof() == (::uType*)::app::Uno::Float2__typeof())) || ((::uType*)::app::Fuse::Navigation::SwipeEnds__typeof() == (::uType*)::app::Uno::Float3__typeof())) || ((::uType*)::app::Fuse::Navigation::SwipeEnds__typeof() == (::uType*)::app::Uno::Float4__typeof())) || ((::uType*)::app::Fuse::Navigation::SwipeEnds__typeof() == (::uType*)::app::Uno::Double__typeof());
}

::app::Uno::UX::Property__Fuse_Navigation_SwipeEnds* Change__Fuse_Navigation_SwipeEnds__get_Target(Change__Fuse_Navigation_SwipeEnds* __this)
{
    return __this->_Target;
}

int Change__Fuse_Navigation_SwipeEnds__get_Value(Change__Fuse_Navigation_SwipeEnds* __this)
{
    return __this->IsContinuous() ? ::uPtr< ::app::Fuse::Animations::Converter__Fuse_Navigation_SwipeEnds*>(__this->ContinuousConverter)->Out(__this->_vectorValue) : ::uUnbox< int>(::app::Fuse::Navigation::SwipeEnds__typeof(), __this->_objectValue);
}

float Change__Fuse_Navigation_SwipeEnds__get_X(Change__Fuse_Navigation_SwipeEnds* __this)
{
    return __this->_vectorValue.X;
}

::app::Uno::Float2 Change__Fuse_Navigation_SwipeEnds__get_XY(Change__Fuse_Navigation_SwipeEnds* __this)
{
    ::app::Uno::Float4 ind_123 = __this->_vectorValue;
    return ::app::Uno::Float2__New_2(NULL, ind_123.X, ind_123.Y);
}

float Change__Fuse_Navigation_SwipeEnds__get_Y(Change__Fuse_Navigation_SwipeEnds* __this)
{
    return __this->_vectorValue.Y;
}

float Change__Fuse_Navigation_SwipeEnds__get_Z(Change__Fuse_Navigation_SwipeEnds* __this)
{
    return __this->_vectorValue.Z;
}

Change__Fuse_Navigation_SwipeEnds* Change__Fuse_Navigation_SwipeEnds__New_1(::uStatic* __this, ::app::Uno::UX::Property__Fuse_Navigation_SwipeEnds* target)
{
    Change__Fuse_Navigation_SwipeEnds* inst = (Change__Fuse_Navigation_SwipeEnds*)::uAllocObject(sizeof(Change__Fuse_Navigation_SwipeEnds), Change__Fuse_Navigation_SwipeEnds__typeof());
    inst->_ObjInit_2(target);
    return inst;
}

void Change__Fuse_Navigation_SwipeEnds__set_DegreesX(Change__Fuse_Navigation_SwipeEnds* __this, float value)
{
    __this->X(::app::Uno::Math__DegreesToRadians_1(NULL, value));
}

void Change__Fuse_Navigation_SwipeEnds__set_DegreesXY(Change__Fuse_Navigation_SwipeEnds* __this, ::app::Uno::Float2 value)
{
    __this->XY(::app::Uno::Float2__New_2(NULL, ::app::Uno::Math__DegreesToRadians_1(NULL, value.X), ::app::Uno::Math__DegreesToRadians_1(NULL, value.Y)));
}

void Change__Fuse_Navigation_SwipeEnds__set_DegreesY(Change__Fuse_Navigation_SwipeEnds* __this, float value)
{
    __this->Y(::app::Uno::Math__DegreesToRadians_1(NULL, value));
}

void Change__Fuse_Navigation_SwipeEnds__set_DegreesZ(Change__Fuse_Navigation_SwipeEnds* __this, float value)
{
    __this->Y(::app::Uno::Math__DegreesToRadians_1(NULL, value));
}

void Change__Fuse_Navigation_SwipeEnds__set_Target(Change__Fuse_Navigation_SwipeEnds* __this, ::app::Uno::UX::Property__Fuse_Navigation_SwipeEnds* value)
{
    __this->_Target = value;
}

void Change__Fuse_Navigation_SwipeEnds__set_Value(Change__Fuse_Navigation_SwipeEnds* __this, int value)
{
    if (__this->IsContinuous())
    {
        __this->_vectorValue = ::uPtr< ::app::Fuse::Animations::Converter__Fuse_Navigation_SwipeEnds*>(__this->ContinuousConverter)->In(value);
    }
    else
    {
        __this->_objectValue = ::uBox< int>(::app::Fuse::Navigation::SwipeEnds__typeof(), value);
    }
}

void Change__Fuse_Navigation_SwipeEnds__set_X(Change__Fuse_Navigation_SwipeEnds* __this, float value)
{
    __this->_vectorValue.X = value;
}

void Change__Fuse_Navigation_SwipeEnds__set_XY(Change__Fuse_Navigation_SwipeEnds* __this, ::app::Uno::Float2 value)
{
    __this->_vectorValue = ::app::Uno::Float4__New_6(NULL, value, __this->_vectorValue.Z, __this->_vectorValue.W);
}

void Change__Fuse_Navigation_SwipeEnds__set_Y(Change__Fuse_Navigation_SwipeEnds* __this, float value)
{
    __this->_vectorValue.Y = value;
}

void Change__Fuse_Navigation_SwipeEnds__set_Z(Change__Fuse_Navigation_SwipeEnds* __this, float value)
{
    __this->_vectorValue.Z = value;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Animations\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

Change__Fuse_Node__uType* Change__Fuse_Node__typeof()
{
    static ::uStaticStrong<Change__Fuse_Node__uType*> type;
    if (type != NULL) return type;

    type = (Change__Fuse_Node__uType*)::uAllocClassType(sizeof(Change__Fuse_Node__uType), "Fuse.Animations.Change<Fuse.Node>", false, 0, 2, 0);

    type->SetBaseType(::app::Fuse::Animations::TrackAnimator__typeof());
    type->__fp_CreateState = (::app::Fuse::Animations::AnimatorState*(*)(::app::Fuse::Animations::Animator*, ::app::Fuse::Animations::CreateStateParams*))Change__Fuse_Node__CreateState;

    type->SetStrongRefs(
        "_Target", offsetof(Change__Fuse_Node, _Target),
        "ContinuousConverter", offsetof(Change__Fuse_Node, ContinuousConverter));

    type->SetFields(1,
        ::uNewField("ContinuousConverter", NULL, offsetof(Change__Fuse_Node, ContinuousConverter), ::app::Fuse::Animations::Converter__Fuse_Node__typeof()));

    type->SetFunctions(22,
        ::uNewFunction("get_DegreesX", Change__Fuse_Node__get_DegreesX, 0, false, ::app::Uno::Float__typeof()),
        ::uNewFunction("get_DegreesXY", Change__Fuse_Node__get_DegreesXY, 0, false, ::app::Uno::Float2__typeof()),
        ::uNewFunction("get_DegreesY", Change__Fuse_Node__get_DegreesY, 0, false, ::app::Uno::Float__typeof()),
        ::uNewFunction("get_DegreesZ", Change__Fuse_Node__get_DegreesZ, 0, false, ::app::Uno::Float__typeof()),
        ::uNewFunction("get_IsContinuous", Change__Fuse_Node__get_IsContinuous, 0, false, ::app::Uno::Bool__typeof()),
        ::uNewFunction("get_Target", Change__Fuse_Node__get_Target, 0, false, ::app::Uno::UX::Property__Fuse_Node__typeof()),
        ::uNewFunction("get_Value", Change__Fuse_Node__get_Value, 0, false, ::app::Fuse::Node__typeof()),
        ::uNewFunction("get_X", Change__Fuse_Node__get_X, 0, false, ::app::Uno::Float__typeof()),
        ::uNewFunction("get_XY", Change__Fuse_Node__get_XY, 0, false, ::app::Uno::Float2__typeof()),
        ::uNewFunction("get_Y", Change__Fuse_Node__get_Y, 0, false, ::app::Uno::Float__typeof()),
        ::uNewFunction("get_Z", Change__Fuse_Node__get_Z, 0, false, ::app::Uno::Float__typeof()),
        ::uNewFunction(".ctor", Change__Fuse_Node__New_1, 0, true, Change__Fuse_Node__typeof(), ::app::Uno::UX::Property__Fuse_Node__typeof()),
        ::uNewFunctionVoid("set_DegreesX", Change__Fuse_Node__set_DegreesX, 0, false, ::app::Uno::Float__typeof()),
        ::uNewFunctionVoid("set_DegreesXY", Change__Fuse_Node__set_DegreesXY, 0, false, ::app::Uno::Float2__typeof()),
        ::uNewFunctionVoid("set_DegreesY", Change__Fuse_Node__set_DegreesY, 0, false, ::app::Uno::Float__typeof()),
        ::uNewFunctionVoid("set_DegreesZ", Change__Fuse_Node__set_DegreesZ, 0, false, ::app::Uno::Float__typeof()),
        ::uNewFunctionVoid("set_Target", Change__Fuse_Node__set_Target, 0, false, ::app::Uno::UX::Property__Fuse_Node__typeof()),
        ::uNewFunctionVoid("set_Value", Change__Fuse_Node__set_Value, 0, false, ::app::Fuse::Node__typeof()),
        ::uNewFunctionVoid("set_X", Change__Fuse_Node__set_X, 0, false, ::app::Uno::Float__typeof()),
        ::uNewFunctionVoid("set_XY", Change__Fuse_Node__set_XY, 0, false, ::app::Uno::Float2__typeof()),
        ::uNewFunctionVoid("set_Y", Change__Fuse_Node__set_Y, 0, false, ::app::Uno::Float__typeof()),
        ::uNewFunctionVoid("set_Z", Change__Fuse_Node__set_Z, 0, false, ::app::Uno::Float__typeof()));

    ::uRegisterType(type);
    return type;
}

void Change__Fuse_Node___ObjInit_2(Change__Fuse_Node* __this, ::app::Uno::UX::Property__Fuse_Node* target)
{
    ::app::Fuse::Animations::TrackAnimator___ObjInit_1(__this);

    if (target == NULL)
    {
        U_THROW(::app::Uno::ArgumentNullException__New_5(NULL, ::uGetConstString("target")));
    }

    __this->Target(target);

    if (__this->IsContinuous())
    {
        ::uObject* v;

        if ((::uType*)::app::Fuse::Node__typeof() == (::uType*)::app::Uno::Float__typeof())
        {
            v = (::uObject*)::app::Fuse::Animations::ConverterFloat__Singleton;
        }
        else if ((::uType*)::app::Fuse::Node__typeof() == (::uType*)::app::Uno::Float2__typeof())
        {
            v = (::uObject*)::app::Fuse::Animations::ConverterFloat2__Singleton;
        }
        else if ((::uType*)::app::Fuse::Node__typeof() == (::uType*)::app::Uno::Float3__typeof())
        {
            v = (::uObject*)::app::Fuse::Animations::ConverterFloat3__Singleton;
        }
        else if ((::uType*)::app::Fuse::Node__typeof() == (::uType*)::app::Uno::Float4__typeof())
        {
            v = (::uObject*)::app::Fuse::Animations::ConverterFloat4__Singleton;
        }
        else if ((::uType*)::app::Fuse::Node__typeof() == (::uType*)::app::Uno::Double__typeof())
        {
            v = (::uObject*)::app::Fuse::Animations::ConverterDouble__Singleton;
        }
        else
        {
            U_THROW(::app::Uno::Exception__New_2(NULL, ::app::Uno::String__op_Addition_1(NULL, ::uGetConstString("Unsupported change type: "), (::uObject*)(::uType*)::app::Fuse::Node__typeof())));
        }

        __this->ContinuousConverter = ::uCast< ::app::Fuse::Animations::Converter__Fuse_Node*>(v, ::app::Fuse::Animations::Converter__Fuse_Node__typeof());
    }
    else
    {
        __this->Mixer = ::app::Fuse::Animations::Mixer__get_DefaultDiscrete(NULL);
        __this->MarkDiscrete();
    }
}

::app::Fuse::Animations::AnimatorState* Change__Fuse_Node__CreateState(Change__Fuse_Node* __this, ::app::Fuse::Animations::CreateStateParams* p)
{
    if (__this->IsContinuous())
    {
        return (::app::Fuse::Animations::AnimatorState*)::app::Fuse::Animations::ContinuousTrackChangeState__Fuse_Node__New_1(NULL, __this, p);
    }

    return (::app::Fuse::Animations::AnimatorState*)::app::Fuse::Animations::DiscreteTrackChangeState__Fuse_Node__New_1(NULL, __this, p);
}

float Change__Fuse_Node__get_DegreesX(Change__Fuse_Node* __this)
{
    return ::app::Uno::Math__RadiansToDegrees_1(NULL, __this->X());
}

::app::Uno::Float2 Change__Fuse_Node__get_DegreesXY(Change__Fuse_Node* __this)
{
    return ::app::Uno::Float2__New_2(NULL, ::app::Uno::Math__RadiansToDegrees_1(NULL, __this->X()), ::app::Uno::Math__RadiansToDegrees_1(NULL, __this->Y()));
}

float Change__Fuse_Node__get_DegreesY(Change__Fuse_Node* __this)
{
    return ::app::Uno::Math__RadiansToDegrees_1(NULL, __this->Y());
}

float Change__Fuse_Node__get_DegreesZ(Change__Fuse_Node* __this)
{
    return ::app::Uno::Math__RadiansToDegrees_1(NULL, __this->Y());
}

bool Change__Fuse_Node__get_IsContinuous(Change__Fuse_Node* __this)
{
    return (((((::uType*)::app::Fuse::Node__typeof() == (::uType*)::app::Uno::Float__typeof()) || ((::uType*)::app::Fuse::Node__typeof() == (::uType*)::app::Uno::Float2__typeof())) || ((::uType*)::app::Fuse::Node__typeof() == (::uType*)::app::Uno::Float3__typeof())) || ((::uType*)::app::Fuse::Node__typeof() == (::uType*)::app::Uno::Float4__typeof())) || ((::uType*)::app::Fuse::Node__typeof() == (::uType*)::app::Uno::Double__typeof());
}

::app::Uno::UX::Property__Fuse_Node* Change__Fuse_Node__get_Target(Change__Fuse_Node* __this)
{
    return __this->_Target;
}

::app::Fuse::Node* Change__Fuse_Node__get_Value(Change__Fuse_Node* __this)
{
    return __this->IsContinuous() ? ::uPtr< ::app::Fuse::Animations::Converter__Fuse_Node*>(__this->ContinuousConverter)->Out(__this->_vectorValue) : ::uCast< ::app::Fuse::Node*>(__this->_objectValue, ::app::Fuse::Node__typeof());
}

float Change__Fuse_Node__get_X(Change__Fuse_Node* __this)
{
    return __this->_vectorValue.X;
}

::app::Uno::Float2 Change__Fuse_Node__get_XY(Change__Fuse_Node* __this)
{
    ::app::Uno::Float4 ind_123 = __this->_vectorValue;
    return ::app::Uno::Float2__New_2(NULL, ind_123.X, ind_123.Y);
}

float Change__Fuse_Node__get_Y(Change__Fuse_Node* __this)
{
    return __this->_vectorValue.Y;
}

float Change__Fuse_Node__get_Z(Change__Fuse_Node* __this)
{
    return __this->_vectorValue.Z;
}

Change__Fuse_Node* Change__Fuse_Node__New_1(::uStatic* __this, ::app::Uno::UX::Property__Fuse_Node* target)
{
    Change__Fuse_Node* inst = (Change__Fuse_Node*)::uAllocObject(sizeof(Change__Fuse_Node), Change__Fuse_Node__typeof());
    inst->_ObjInit_2(target);
    return inst;
}

void Change__Fuse_Node__set_DegreesX(Change__Fuse_Node* __this, float value)
{
    __this->X(::app::Uno::Math__DegreesToRadians_1(NULL, value));
}

void Change__Fuse_Node__set_DegreesXY(Change__Fuse_Node* __this, ::app::Uno::Float2 value)
{
    __this->XY(::app::Uno::Float2__New_2(NULL, ::app::Uno::Math__DegreesToRadians_1(NULL, value.X), ::app::Uno::Math__DegreesToRadians_1(NULL, value.Y)));
}

void Change__Fuse_Node__set_DegreesY(Change__Fuse_Node* __this, float value)
{
    __this->Y(::app::Uno::Math__DegreesToRadians_1(NULL, value));
}

void Change__Fuse_Node__set_DegreesZ(Change__Fuse_Node* __this, float value)
{
    __this->Y(::app::Uno::Math__DegreesToRadians_1(NULL, value));
}

void Change__Fuse_Node__set_Target(Change__Fuse_Node* __this, ::app::Uno::UX::Property__Fuse_Node* value)
{
    __this->_Target = value;
}

void Change__Fuse_Node__set_Value(Change__Fuse_Node* __this, ::app::Fuse::Node* value)
{
    if (__this->IsContinuous())
    {
        __this->_vectorValue = ::uPtr< ::app::Fuse::Animations::Converter__Fuse_Node*>(__this->ContinuousConverter)->In(value);
    }
    else
    {
        __this->_objectValue = (::uObject*)value;
    }
}

void Change__Fuse_Node__set_X(Change__Fuse_Node* __this, float value)
{
    __this->_vectorValue.X = value;
}

void Change__Fuse_Node__set_XY(Change__Fuse_Node* __this, ::app::Uno::Float2 value)
{
    __this->_vectorValue = ::app::Uno::Float4__New_6(NULL, value, __this->_vectorValue.Z, __this->_vectorValue.W);
}

void Change__Fuse_Node__set_Y(Change__Fuse_Node* __this, float value)
{
    __this->_vectorValue.Y = value;
}

void Change__Fuse_Node__set_Z(Change__Fuse_Node* __this, float value)
{
    __this->_vectorValue.Z = value;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Animations\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

Change__Fuse_Resources_ImageSource__uType* Change__Fuse_Resources_ImageSource__typeof()
{
    static ::uStaticStrong<Change__Fuse_Resources_ImageSource__uType*> type;
    if (type != NULL) return type;

    type = (Change__Fuse_Resources_ImageSource__uType*)::uAllocClassType(sizeof(Change__Fuse_Resources_ImageSource__uType), "Fuse.Animations.Change<Fuse.Resources.ImageSource>", false, 0, 2, 0);

    type->SetBaseType(::app::Fuse::Animations::TrackAnimator__typeof());
    type->__fp_CreateState = (::app::Fuse::Animations::AnimatorState*(*)(::app::Fuse::Animations::Animator*, ::app::Fuse::Animations::CreateStateParams*))Change__Fuse_Resources_ImageSource__CreateState;

    type->SetStrongRefs(
        "_Target", offsetof(Change__Fuse_Resources_ImageSource, _Target),
        "ContinuousConverter", offsetof(Change__Fuse_Resources_ImageSource, ContinuousConverter));

    type->SetFields(1,
        ::uNewField("ContinuousConverter", NULL, offsetof(Change__Fuse_Resources_ImageSource, ContinuousConverter), ::app::Fuse::Animations::Converter__Fuse_Resources_ImageSource__typeof()));

    type->SetFunctions(22,
        ::uNewFunction("get_DegreesX", Change__Fuse_Resources_ImageSource__get_DegreesX, 0, false, ::app::Uno::Float__typeof()),
        ::uNewFunction("get_DegreesXY", Change__Fuse_Resources_ImageSource__get_DegreesXY, 0, false, ::app::Uno::Float2__typeof()),
        ::uNewFunction("get_DegreesY", Change__Fuse_Resources_ImageSource__get_DegreesY, 0, false, ::app::Uno::Float__typeof()),
        ::uNewFunction("get_DegreesZ", Change__Fuse_Resources_ImageSource__get_DegreesZ, 0, false, ::app::Uno::Float__typeof()),
        ::uNewFunction("get_IsContinuous", Change__Fuse_Resources_ImageSource__get_IsContinuous, 0, false, ::app::Uno::Bool__typeof()),
        ::uNewFunction("get_Target", Change__Fuse_Resources_ImageSource__get_Target, 0, false, ::app::Uno::UX::Property__Fuse_Resources_ImageSource__typeof()),
        ::uNewFunction("get_Value", Change__Fuse_Resources_ImageSource__get_Value, 0, false, ::app::Fuse::Resources::ImageSource__typeof()),
        ::uNewFunction("get_X", Change__Fuse_Resources_ImageSource__get_X, 0, false, ::app::Uno::Float__typeof()),
        ::uNewFunction("get_XY", Change__Fuse_Resources_ImageSource__get_XY, 0, false, ::app::Uno::Float2__typeof()),
        ::uNewFunction("get_Y", Change__Fuse_Resources_ImageSource__get_Y, 0, false, ::app::Uno::Float__typeof()),
        ::uNewFunction("get_Z", Change__Fuse_Resources_ImageSource__get_Z, 0, false, ::app::Uno::Float__typeof()),
        ::uNewFunction(".ctor", Change__Fuse_Resources_ImageSource__New_1, 0, true, Change__Fuse_Resources_ImageSource__typeof(), ::app::Uno::UX::Property__Fuse_Resources_ImageSource__typeof()),
        ::uNewFunctionVoid("set_DegreesX", Change__Fuse_Resources_ImageSource__set_DegreesX, 0, false, ::app::Uno::Float__typeof()),
        ::uNewFunctionVoid("set_DegreesXY", Change__Fuse_Resources_ImageSource__set_DegreesXY, 0, false, ::app::Uno::Float2__typeof()),
        ::uNewFunctionVoid("set_DegreesY", Change__Fuse_Resources_ImageSource__set_DegreesY, 0, false, ::app::Uno::Float__typeof()),
        ::uNewFunctionVoid("set_DegreesZ", Change__Fuse_Resources_ImageSource__set_DegreesZ, 0, false, ::app::Uno::Float__typeof()),
        ::uNewFunctionVoid("set_Target", Change__Fuse_Resources_ImageSource__set_Target, 0, false, ::app::Uno::UX::Property__Fuse_Resources_ImageSource__typeof()),
        ::uNewFunctionVoid("set_Value", Change__Fuse_Resources_ImageSource__set_Value, 0, false, ::app::Fuse::Resources::ImageSource__typeof()),
        ::uNewFunctionVoid("set_X", Change__Fuse_Resources_ImageSource__set_X, 0, false, ::app::Uno::Float__typeof()),
        ::uNewFunctionVoid("set_XY", Change__Fuse_Resources_ImageSource__set_XY, 0, false, ::app::Uno::Float2__typeof()),
        ::uNewFunctionVoid("set_Y", Change__Fuse_Resources_ImageSource__set_Y, 0, false, ::app::Uno::Float__typeof()),
        ::uNewFunctionVoid("set_Z", Change__Fuse_Resources_ImageSource__set_Z, 0, false, ::app::Uno::Float__typeof()));

    ::uRegisterType(type);
    return type;
}

void Change__Fuse_Resources_ImageSource___ObjInit_2(Change__Fuse_Resources_ImageSource* __this, ::app::Uno::UX::Property__Fuse_Resources_ImageSource* target)
{
    ::app::Fuse::Animations::TrackAnimator___ObjInit_1(__this);

    if (target == NULL)
    {
        U_THROW(::app::Uno::ArgumentNullException__New_5(NULL, ::uGetConstString("target")));
    }

    __this->Target(target);

    if (__this->IsContinuous())
    {
        ::uObject* v;

        if ((::uType*)::app::Fuse::Resources::ImageSource__typeof() == (::uType*)::app::Uno::Float__typeof())
        {
            v = (::uObject*)::app::Fuse::Animations::ConverterFloat__Singleton;
        }
        else if ((::uType*)::app::Fuse::Resources::ImageSource__typeof() == (::uType*)::app::Uno::Float2__typeof())
        {
            v = (::uObject*)::app::Fuse::Animations::ConverterFloat2__Singleton;
        }
        else if ((::uType*)::app::Fuse::Resources::ImageSource__typeof() == (::uType*)::app::Uno::Float3__typeof())
        {
            v = (::uObject*)::app::Fuse::Animations::ConverterFloat3__Singleton;
        }
        else if ((::uType*)::app::Fuse::Resources::ImageSource__typeof() == (::uType*)::app::Uno::Float4__typeof())
        {
            v = (::uObject*)::app::Fuse::Animations::ConverterFloat4__Singleton;
        }
        else if ((::uType*)::app::Fuse::Resources::ImageSource__typeof() == (::uType*)::app::Uno::Double__typeof())
        {
            v = (::uObject*)::app::Fuse::Animations::ConverterDouble__Singleton;
        }
        else
        {
            U_THROW(::app::Uno::Exception__New_2(NULL, ::app::Uno::String__op_Addition_1(NULL, ::uGetConstString("Unsupported change type: "), (::uObject*)(::uType*)::app::Fuse::Resources::ImageSource__typeof())));
        }

        __this->ContinuousConverter = ::uCast< ::app::Fuse::Animations::Converter__Fuse_Resources_ImageSource*>(v, ::app::Fuse::Animations::Converter__Fuse_Resources_ImageSource__typeof());
    }
    else
    {
        __this->Mixer = ::app::Fuse::Animations::Mixer__get_DefaultDiscrete(NULL);
        __this->MarkDiscrete();
    }
}

::app::Fuse::Animations::AnimatorState* Change__Fuse_Resources_ImageSource__CreateState(Change__Fuse_Resources_ImageSource* __this, ::app::Fuse::Animations::CreateStateParams* p)
{
    if (__this->IsContinuous())
    {
        return (::app::Fuse::Animations::AnimatorState*)::app::Fuse::Animations::ContinuousTrackChangeState__Fuse_Resources_ImageSource__New_1(NULL, __this, p);
    }

    return (::app::Fuse::Animations::AnimatorState*)::app::Fuse::Animations::DiscreteTrackChangeState__Fuse_Resources_ImageSource__New_1(NULL, __this, p);
}

float Change__Fuse_Resources_ImageSource__get_DegreesX(Change__Fuse_Resources_ImageSource* __this)
{
    return ::app::Uno::Math__RadiansToDegrees_1(NULL, __this->X());
}

::app::Uno::Float2 Change__Fuse_Resources_ImageSource__get_DegreesXY(Change__Fuse_Resources_ImageSource* __this)
{
    return ::app::Uno::Float2__New_2(NULL, ::app::Uno::Math__RadiansToDegrees_1(NULL, __this->X()), ::app::Uno::Math__RadiansToDegrees_1(NULL, __this->Y()));
}

float Change__Fuse_Resources_ImageSource__get_DegreesY(Change__Fuse_Resources_ImageSource* __this)
{
    return ::app::Uno::Math__RadiansToDegrees_1(NULL, __this->Y());
}

float Change__Fuse_Resources_ImageSource__get_DegreesZ(Change__Fuse_Resources_ImageSource* __this)
{
    return ::app::Uno::Math__RadiansToDegrees_1(NULL, __this->Y());
}

bool Change__Fuse_Resources_ImageSource__get_IsContinuous(Change__Fuse_Resources_ImageSource* __this)
{
    return (((((::uType*)::app::Fuse::Resources::ImageSource__typeof() == (::uType*)::app::Uno::Float__typeof()) || ((::uType*)::app::Fuse::Resources::ImageSource__typeof() == (::uType*)::app::Uno::Float2__typeof())) || ((::uType*)::app::Fuse::Resources::ImageSource__typeof() == (::uType*)::app::Uno::Float3__typeof())) || ((::uType*)::app::Fuse::Resources::ImageSource__typeof() == (::uType*)::app::Uno::Float4__typeof())) || ((::uType*)::app::Fuse::Resources::ImageSource__typeof() == (::uType*)::app::Uno::Double__typeof());
}

::app::Uno::UX::Property__Fuse_Resources_ImageSource* Change__Fuse_Resources_ImageSource__get_Target(Change__Fuse_Resources_ImageSource* __this)
{
    return __this->_Target;
}

::app::Fuse::Resources::ImageSource* Change__Fuse_Resources_ImageSource__get_Value(Change__Fuse_Resources_ImageSource* __this)
{
    return __this->IsContinuous() ? ::uPtr< ::app::Fuse::Animations::Converter__Fuse_Resources_ImageSource*>(__this->ContinuousConverter)->Out(__this->_vectorValue) : ::uCast< ::app::Fuse::Resources::ImageSource*>(__this->_objectValue, ::app::Fuse::Resources::ImageSource__typeof());
}

float Change__Fuse_Resources_ImageSource__get_X(Change__Fuse_Resources_ImageSource* __this)
{
    return __this->_vectorValue.X;
}

::app::Uno::Float2 Change__Fuse_Resources_ImageSource__get_XY(Change__Fuse_Resources_ImageSource* __this)
{
    ::app::Uno::Float4 ind_123 = __this->_vectorValue;
    return ::app::Uno::Float2__New_2(NULL, ind_123.X, ind_123.Y);
}

float Change__Fuse_Resources_ImageSource__get_Y(Change__Fuse_Resources_ImageSource* __this)
{
    return __this->_vectorValue.Y;
}

float Change__Fuse_Resources_ImageSource__get_Z(Change__Fuse_Resources_ImageSource* __this)
{
    return __this->_vectorValue.Z;
}

Change__Fuse_Resources_ImageSource* Change__Fuse_Resources_ImageSource__New_1(::uStatic* __this, ::app::Uno::UX::Property__Fuse_Resources_ImageSource* target)
{
    Change__Fuse_Resources_ImageSource* inst = (Change__Fuse_Resources_ImageSource*)::uAllocObject(sizeof(Change__Fuse_Resources_ImageSource), Change__Fuse_Resources_ImageSource__typeof());
    inst->_ObjInit_2(target);
    return inst;
}

void Change__Fuse_Resources_ImageSource__set_DegreesX(Change__Fuse_Resources_ImageSource* __this, float value)
{
    __this->X(::app::Uno::Math__DegreesToRadians_1(NULL, value));
}

void Change__Fuse_Resources_ImageSource__set_DegreesXY(Change__Fuse_Resources_ImageSource* __this, ::app::Uno::Float2 value)
{
    __this->XY(::app::Uno::Float2__New_2(NULL, ::app::Uno::Math__DegreesToRadians_1(NULL, value.X), ::app::Uno::Math__DegreesToRadians_1(NULL, value.Y)));
}

void Change__Fuse_Resources_ImageSource__set_DegreesY(Change__Fuse_Resources_ImageSource* __this, float value)
{
    __this->Y(::app::Uno::Math__DegreesToRadians_1(NULL, value));
}

void Change__Fuse_Resources_ImageSource__set_DegreesZ(Change__Fuse_Resources_ImageSource* __this, float value)
{
    __this->Y(::app::Uno::Math__DegreesToRadians_1(NULL, value));
}

void Change__Fuse_Resources_ImageSource__set_Target(Change__Fuse_Resources_ImageSource* __this, ::app::Uno::UX::Property__Fuse_Resources_ImageSource* value)
{
    __this->_Target = value;
}

void Change__Fuse_Resources_ImageSource__set_Value(Change__Fuse_Resources_ImageSource* __this, ::app::Fuse::Resources::ImageSource* value)
{
    if (__this->IsContinuous())
    {
        __this->_vectorValue = ::uPtr< ::app::Fuse::Animations::Converter__Fuse_Resources_ImageSource*>(__this->ContinuousConverter)->In(value);
    }
    else
    {
        __this->_objectValue = (::uObject*)value;
    }
}

void Change__Fuse_Resources_ImageSource__set_X(Change__Fuse_Resources_ImageSource* __this, float value)
{
    __this->_vectorValue.X = value;
}

void Change__Fuse_Resources_ImageSource__set_XY(Change__Fuse_Resources_ImageSource* __this, ::app::Uno::Float2 value)
{
    __this->_vectorValue = ::app::Uno::Float4__New_6(NULL, value, __this->_vectorValue.Z, __this->_vectorValue.W);
}

void Change__Fuse_Resources_ImageSource__set_Y(Change__Fuse_Resources_ImageSource* __this, float value)
{
    __this->_vectorValue.Y = value;
}

void Change__Fuse_Resources_ImageSource__set_Z(Change__Fuse_Resources_ImageSource* __this, float value)
{
    __this->_vectorValue.Z = value;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Animations\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

Change__Fuse_Triggers_Actions_TriggerDirection__uType* Change__Fuse_Triggers_Actions_TriggerDirection__typeof()
{
    static ::uStaticStrong<Change__Fuse_Triggers_Actions_TriggerDirection__uType*> type;
    if (type != NULL) return type;

    type = (Change__Fuse_Triggers_Actions_TriggerDirection__uType*)::uAllocClassType(sizeof(Change__Fuse_Triggers_Actions_TriggerDirection__uType), "Fuse.Animations.Change<Fuse.Triggers.Actions.TriggerDirection>", false, 0, 2, 0);

    type->SetBaseType(::app::Fuse::Animations::TrackAnimator__typeof());
    type->__fp_CreateState = (::app::Fuse::Animations::AnimatorState*(*)(::app::Fuse::Animations::Animator*, ::app::Fuse::Animations::CreateStateParams*))Change__Fuse_Triggers_Actions_TriggerDirection__CreateState;

    type->SetStrongRefs(
        "_Target", offsetof(Change__Fuse_Triggers_Actions_TriggerDirection, _Target),
        "ContinuousConverter", offsetof(Change__Fuse_Triggers_Actions_TriggerDirection, ContinuousConverter));

    type->SetFields(1,
        ::uNewField("ContinuousConverter", NULL, offsetof(Change__Fuse_Triggers_Actions_TriggerDirection, ContinuousConverter), ::app::Fuse::Animations::Converter__Fuse_Triggers_Actions_TriggerDirection__typeof()));

    type->SetFunctions(22,
        ::uNewFunction("get_DegreesX", Change__Fuse_Triggers_Actions_TriggerDirection__get_DegreesX, 0, false, ::app::Uno::Float__typeof()),
        ::uNewFunction("get_DegreesXY", Change__Fuse_Triggers_Actions_TriggerDirection__get_DegreesXY, 0, false, ::app::Uno::Float2__typeof()),
        ::uNewFunction("get_DegreesY", Change__Fuse_Triggers_Actions_TriggerDirection__get_DegreesY, 0, false, ::app::Uno::Float__typeof()),
        ::uNewFunction("get_DegreesZ", Change__Fuse_Triggers_Actions_TriggerDirection__get_DegreesZ, 0, false, ::app::Uno::Float__typeof()),
        ::uNewFunction("get_IsContinuous", Change__Fuse_Triggers_Actions_TriggerDirection__get_IsContinuous, 0, false, ::app::Uno::Bool__typeof()),
        ::uNewFunction("get_Target", Change__Fuse_Triggers_Actions_TriggerDirection__get_Target, 0, false, ::app::Uno::UX::Property__Fuse_Triggers_Actions_TriggerDirection__typeof()),
        ::uNewFunction("get_Value", Change__Fuse_Triggers_Actions_TriggerDirection__get_Value, 0, false, ::app::Fuse::Triggers::Actions::TriggerDirection__typeof()),
        ::uNewFunction("get_X", Change__Fuse_Triggers_Actions_TriggerDirection__get_X, 0, false, ::app::Uno::Float__typeof()),
        ::uNewFunction("get_XY", Change__Fuse_Triggers_Actions_TriggerDirection__get_XY, 0, false, ::app::Uno::Float2__typeof()),
        ::uNewFunction("get_Y", Change__Fuse_Triggers_Actions_TriggerDirection__get_Y, 0, false, ::app::Uno::Float__typeof()),
        ::uNewFunction("get_Z", Change__Fuse_Triggers_Actions_TriggerDirection__get_Z, 0, false, ::app::Uno::Float__typeof()),
        ::uNewFunction(".ctor", Change__Fuse_Triggers_Actions_TriggerDirection__New_1, 0, true, Change__Fuse_Triggers_Actions_TriggerDirection__typeof(), ::app::Uno::UX::Property__Fuse_Triggers_Actions_TriggerDirection__typeof()),
        ::uNewFunctionVoid("set_DegreesX", Change__Fuse_Triggers_Actions_TriggerDirection__set_DegreesX, 0, false, ::app::Uno::Float__typeof()),
        ::uNewFunctionVoid("set_DegreesXY", Change__Fuse_Triggers_Actions_TriggerDirection__set_DegreesXY, 0, false, ::app::Uno::Float2__typeof()),
        ::uNewFunctionVoid("set_DegreesY", Change__Fuse_Triggers_Actions_TriggerDirection__set_DegreesY, 0, false, ::app::Uno::Float__typeof()),
        ::uNewFunctionVoid("set_DegreesZ", Change__Fuse_Triggers_Actions_TriggerDirection__set_DegreesZ, 0, false, ::app::Uno::Float__typeof()),
        ::uNewFunctionVoid("set_Target", Change__Fuse_Triggers_Actions_TriggerDirection__set_Target, 0, false, ::app::Uno::UX::Property__Fuse_Triggers_Actions_TriggerDirection__typeof()),
        ::uNewFunctionVoid("set_Value", Change__Fuse_Triggers_Actions_TriggerDirection__set_Value, 0, false, ::app::Fuse::Triggers::Actions::TriggerDirection__typeof()),
        ::uNewFunctionVoid("set_X", Change__Fuse_Triggers_Actions_TriggerDirection__set_X, 0, false, ::app::Uno::Float__typeof()),
        ::uNewFunctionVoid("set_XY", Change__Fuse_Triggers_Actions_TriggerDirection__set_XY, 0, false, ::app::Uno::Float2__typeof()),
        ::uNewFunctionVoid("set_Y", Change__Fuse_Triggers_Actions_TriggerDirection__set_Y, 0, false, ::app::Uno::Float__typeof()),
        ::uNewFunctionVoid("set_Z", Change__Fuse_Triggers_Actions_TriggerDirection__set_Z, 0, false, ::app::Uno::Float__typeof()));

    ::uRegisterType(type);
    return type;
}

void Change__Fuse_Triggers_Actions_TriggerDirection___ObjInit_2(Change__Fuse_Triggers_Actions_TriggerDirection* __this, ::app::Uno::UX::Property__Fuse_Triggers_Actions_TriggerDirection* target)
{
    ::app::Fuse::Animations::TrackAnimator___ObjInit_1(__this);

    if (target == NULL)
    {
        U_THROW(::app::Uno::ArgumentNullException__New_5(NULL, ::uGetConstString("target")));
    }

    __this->Target(target);

    if (__this->IsContinuous())
    {
        ::uObject* v;

        if ((::uType*)::app::Fuse::Triggers::Actions::TriggerDirection__typeof() == (::uType*)::app::Uno::Float__typeof())
        {
            v = (::uObject*)::app::Fuse::Animations::ConverterFloat__Singleton;
        }
        else if ((::uType*)::app::Fuse::Triggers::Actions::TriggerDirection__typeof() == (::uType*)::app::Uno::Float2__typeof())
        {
            v = (::uObject*)::app::Fuse::Animations::ConverterFloat2__Singleton;
        }
        else if ((::uType*)::app::Fuse::Triggers::Actions::TriggerDirection__typeof() == (::uType*)::app::Uno::Float3__typeof())
        {
            v = (::uObject*)::app::Fuse::Animations::ConverterFloat3__Singleton;
        }
        else if ((::uType*)::app::Fuse::Triggers::Actions::TriggerDirection__typeof() == (::uType*)::app::Uno::Float4__typeof())
        {
            v = (::uObject*)::app::Fuse::Animations::ConverterFloat4__Singleton;
        }
        else if ((::uType*)::app::Fuse::Triggers::Actions::TriggerDirection__typeof() == (::uType*)::app::Uno::Double__typeof())
        {
            v = (::uObject*)::app::Fuse::Animations::ConverterDouble__Singleton;
        }
        else
        {
            U_THROW(::app::Uno::Exception__New_2(NULL, ::app::Uno::String__op_Addition_1(NULL, ::uGetConstString("Unsupported change type: "), (::uObject*)(::uType*)::app::Fuse::Triggers::Actions::TriggerDirection__typeof())));
        }

        __this->ContinuousConverter = ::uCast< ::app::Fuse::Animations::Converter__Fuse_Triggers_Actions_TriggerDirection*>(v, ::app::Fuse::Animations::Converter__Fuse_Triggers_Actions_TriggerDirection__typeof());
    }
    else
    {
        __this->Mixer = ::app::Fuse::Animations::Mixer__get_DefaultDiscrete(NULL);
        __this->MarkDiscrete();
    }
}

::app::Fuse::Animations::AnimatorState* Change__Fuse_Triggers_Actions_TriggerDirection__CreateState(Change__Fuse_Triggers_Actions_TriggerDirection* __this, ::app::Fuse::Animations::CreateStateParams* p)
{
    if (__this->IsContinuous())
    {
        return (::app::Fuse::Animations::AnimatorState*)::app::Fuse::Animations::ContinuousTrackChangeState__Fuse_Triggers_Actions_TriggerDirection__New_1(NULL, __this, p);
    }

    return (::app::Fuse::Animations::AnimatorState*)::app::Fuse::Animations::DiscreteTrackChangeState__Fuse_Triggers_Actions_TriggerDirection__New_1(NULL, __this, p);
}

float Change__Fuse_Triggers_Actions_TriggerDirection__get_DegreesX(Change__Fuse_Triggers_Actions_TriggerDirection* __this)
{
    return ::app::Uno::Math__RadiansToDegrees_1(NULL, __this->X());
}

::app::Uno::Float2 Change__Fuse_Triggers_Actions_TriggerDirection__get_DegreesXY(Change__Fuse_Triggers_Actions_TriggerDirection* __this)
{
    return ::app::Uno::Float2__New_2(NULL, ::app::Uno::Math__RadiansToDegrees_1(NULL, __this->X()), ::app::Uno::Math__RadiansToDegrees_1(NULL, __this->Y()));
}

float Change__Fuse_Triggers_Actions_TriggerDirection__get_DegreesY(Change__Fuse_Triggers_Actions_TriggerDirection* __this)
{
    return ::app::Uno::Math__RadiansToDegrees_1(NULL, __this->Y());
}

float Change__Fuse_Triggers_Actions_TriggerDirection__get_DegreesZ(Change__Fuse_Triggers_Actions_TriggerDirection* __this)
{
    return ::app::Uno::Math__RadiansToDegrees_1(NULL, __this->Y());
}

bool Change__Fuse_Triggers_Actions_TriggerDirection__get_IsContinuous(Change__Fuse_Triggers_Actions_TriggerDirection* __this)
{
    return (((((::uType*)::app::Fuse::Triggers::Actions::TriggerDirection__typeof() == (::uType*)::app::Uno::Float__typeof()) || ((::uType*)::app::Fuse::Triggers::Actions::TriggerDirection__typeof() == (::uType*)::app::Uno::Float2__typeof())) || ((::uType*)::app::Fuse::Triggers::Actions::TriggerDirection__typeof() == (::uType*)::app::Uno::Float3__typeof())) || ((::uType*)::app::Fuse::Triggers::Actions::TriggerDirection__typeof() == (::uType*)::app::Uno::Float4__typeof())) || ((::uType*)::app::Fuse::Triggers::Actions::TriggerDirection__typeof() == (::uType*)::app::Uno::Double__typeof());
}

::app::Uno::UX::Property__Fuse_Triggers_Actions_TriggerDirection* Change__Fuse_Triggers_Actions_TriggerDirection__get_Target(Change__Fuse_Triggers_Actions_TriggerDirection* __this)
{
    return __this->_Target;
}

int Change__Fuse_Triggers_Actions_TriggerDirection__get_Value(Change__Fuse_Triggers_Actions_TriggerDirection* __this)
{
    return __this->IsContinuous() ? ::uPtr< ::app::Fuse::Animations::Converter__Fuse_Triggers_Actions_TriggerDirection*>(__this->ContinuousConverter)->Out(__this->_vectorValue) : ::uUnbox< int>(::app::Fuse::Triggers::Actions::TriggerDirection__typeof(), __this->_objectValue);
}

float Change__Fuse_Triggers_Actions_TriggerDirection__get_X(Change__Fuse_Triggers_Actions_TriggerDirection* __this)
{
    return __this->_vectorValue.X;
}

::app::Uno::Float2 Change__Fuse_Triggers_Actions_TriggerDirection__get_XY(Change__Fuse_Triggers_Actions_TriggerDirection* __this)
{
    ::app::Uno::Float4 ind_123 = __this->_vectorValue;
    return ::app::Uno::Float2__New_2(NULL, ind_123.X, ind_123.Y);
}

float Change__Fuse_Triggers_Actions_TriggerDirection__get_Y(Change__Fuse_Triggers_Actions_TriggerDirection* __this)
{
    return __this->_vectorValue.Y;
}

float Change__Fuse_Triggers_Actions_TriggerDirection__get_Z(Change__Fuse_Triggers_Actions_TriggerDirection* __this)
{
    return __this->_vectorValue.Z;
}

Change__Fuse_Triggers_Actions_TriggerDirection* Change__Fuse_Triggers_Actions_TriggerDirection__New_1(::uStatic* __this, ::app::Uno::UX::Property__Fuse_Triggers_Actions_TriggerDirection* target)
{
    Change__Fuse_Triggers_Actions_TriggerDirection* inst = (Change__Fuse_Triggers_Actions_TriggerDirection*)::uAllocObject(sizeof(Change__Fuse_Triggers_Actions_TriggerDirection), Change__Fuse_Triggers_Actions_TriggerDirection__typeof());
    inst->_ObjInit_2(target);
    return inst;
}

void Change__Fuse_Triggers_Actions_TriggerDirection__set_DegreesX(Change__Fuse_Triggers_Actions_TriggerDirection* __this, float value)
{
    __this->X(::app::Uno::Math__DegreesToRadians_1(NULL, value));
}

void Change__Fuse_Triggers_Actions_TriggerDirection__set_DegreesXY(Change__Fuse_Triggers_Actions_TriggerDirection* __this, ::app::Uno::Float2 value)
{
    __this->XY(::app::Uno::Float2__New_2(NULL, ::app::Uno::Math__DegreesToRadians_1(NULL, value.X), ::app::Uno::Math__DegreesToRadians_1(NULL, value.Y)));
}

void Change__Fuse_Triggers_Actions_TriggerDirection__set_DegreesY(Change__Fuse_Triggers_Actions_TriggerDirection* __this, float value)
{
    __this->Y(::app::Uno::Math__DegreesToRadians_1(NULL, value));
}

void Change__Fuse_Triggers_Actions_TriggerDirection__set_DegreesZ(Change__Fuse_Triggers_Actions_TriggerDirection* __this, float value)
{
    __this->Y(::app::Uno::Math__DegreesToRadians_1(NULL, value));
}

void Change__Fuse_Triggers_Actions_TriggerDirection__set_Target(Change__Fuse_Triggers_Actions_TriggerDirection* __this, ::app::Uno::UX::Property__Fuse_Triggers_Actions_TriggerDirection* value)
{
    __this->_Target = value;
}

void Change__Fuse_Triggers_Actions_TriggerDirection__set_Value(Change__Fuse_Triggers_Actions_TriggerDirection* __this, int value)
{
    if (__this->IsContinuous())
    {
        __this->_vectorValue = ::uPtr< ::app::Fuse::Animations::Converter__Fuse_Triggers_Actions_TriggerDirection*>(__this->ContinuousConverter)->In(value);
    }
    else
    {
        __this->_objectValue = ::uBox< int>(::app::Fuse::Triggers::Actions::TriggerDirection__typeof(), value);
    }
}

void Change__Fuse_Triggers_Actions_TriggerDirection__set_X(Change__Fuse_Triggers_Actions_TriggerDirection* __this, float value)
{
    __this->_vectorValue.X = value;
}

void Change__Fuse_Triggers_Actions_TriggerDirection__set_XY(Change__Fuse_Triggers_Actions_TriggerDirection* __this, ::app::Uno::Float2 value)
{
    __this->_vectorValue = ::app::Uno::Float4__New_6(NULL, value, __this->_vectorValue.Z, __this->_vectorValue.W);
}

void Change__Fuse_Triggers_Actions_TriggerDirection__set_Y(Change__Fuse_Triggers_Actions_TriggerDirection* __this, float value)
{
    __this->_vectorValue.Y = value;
}

void Change__Fuse_Triggers_Actions_TriggerDirection__set_Z(Change__Fuse_Triggers_Actions_TriggerDirection* __this, float value)
{
    __this->_vectorValue.Z = value;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Animations\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

Change__Fuse_Triggers_State__uType* Change__Fuse_Triggers_State__typeof()
{
    static ::uStaticStrong<Change__Fuse_Triggers_State__uType*> type;
    if (type != NULL) return type;

    type = (Change__Fuse_Triggers_State__uType*)::uAllocClassType(sizeof(Change__Fuse_Triggers_State__uType), "Fuse.Animations.Change<Fuse.Triggers.State>", false, 0, 2, 0);

    type->SetBaseType(::app::Fuse::Animations::TrackAnimator__typeof());
    type->__fp_CreateState = (::app::Fuse::Animations::AnimatorState*(*)(::app::Fuse::Animations::Animator*, ::app::Fuse::Animations::CreateStateParams*))Change__Fuse_Triggers_State__CreateState;

    type->SetStrongRefs(
        "_Target", offsetof(Change__Fuse_Triggers_State, _Target),
        "ContinuousConverter", offsetof(Change__Fuse_Triggers_State, ContinuousConverter));

    type->SetFields(1,
        ::uNewField("ContinuousConverter", NULL, offsetof(Change__Fuse_Triggers_State, ContinuousConverter), ::app::Fuse::Animations::Converter__Fuse_Triggers_State__typeof()));

    type->SetFunctions(22,
        ::uNewFunction("get_DegreesX", Change__Fuse_Triggers_State__get_DegreesX, 0, false, ::app::Uno::Float__typeof()),
        ::uNewFunction("get_DegreesXY", Change__Fuse_Triggers_State__get_DegreesXY, 0, false, ::app::Uno::Float2__typeof()),
        ::uNewFunction("get_DegreesY", Change__Fuse_Triggers_State__get_DegreesY, 0, false, ::app::Uno::Float__typeof()),
        ::uNewFunction("get_DegreesZ", Change__Fuse_Triggers_State__get_DegreesZ, 0, false, ::app::Uno::Float__typeof()),
        ::uNewFunction("get_IsContinuous", Change__Fuse_Triggers_State__get_IsContinuous, 0, false, ::app::Uno::Bool__typeof()),
        ::uNewFunction("get_Target", Change__Fuse_Triggers_State__get_Target, 0, false, ::app::Uno::UX::Property__Fuse_Triggers_State__typeof()),
        ::uNewFunction("get_Value", Change__Fuse_Triggers_State__get_Value, 0, false, ::app::Fuse::Triggers::State__typeof()),
        ::uNewFunction("get_X", Change__Fuse_Triggers_State__get_X, 0, false, ::app::Uno::Float__typeof()),
        ::uNewFunction("get_XY", Change__Fuse_Triggers_State__get_XY, 0, false, ::app::Uno::Float2__typeof()),
        ::uNewFunction("get_Y", Change__Fuse_Triggers_State__get_Y, 0, false, ::app::Uno::Float__typeof()),
        ::uNewFunction("get_Z", Change__Fuse_Triggers_State__get_Z, 0, false, ::app::Uno::Float__typeof()),
        ::uNewFunction(".ctor", Change__Fuse_Triggers_State__New_1, 0, true, Change__Fuse_Triggers_State__typeof(), ::app::Uno::UX::Property__Fuse_Triggers_State__typeof()),
        ::uNewFunctionVoid("set_DegreesX", Change__Fuse_Triggers_State__set_DegreesX, 0, false, ::app::Uno::Float__typeof()),
        ::uNewFunctionVoid("set_DegreesXY", Change__Fuse_Triggers_State__set_DegreesXY, 0, false, ::app::Uno::Float2__typeof()),
        ::uNewFunctionVoid("set_DegreesY", Change__Fuse_Triggers_State__set_DegreesY, 0, false, ::app::Uno::Float__typeof()),
        ::uNewFunctionVoid("set_DegreesZ", Change__Fuse_Triggers_State__set_DegreesZ, 0, false, ::app::Uno::Float__typeof()),
        ::uNewFunctionVoid("set_Target", Change__Fuse_Triggers_State__set_Target, 0, false, ::app::Uno::UX::Property__Fuse_Triggers_State__typeof()),
        ::uNewFunctionVoid("set_Value", Change__Fuse_Triggers_State__set_Value, 0, false, ::app::Fuse::Triggers::State__typeof()),
        ::uNewFunctionVoid("set_X", Change__Fuse_Triggers_State__set_X, 0, false, ::app::Uno::Float__typeof()),
        ::uNewFunctionVoid("set_XY", Change__Fuse_Triggers_State__set_XY, 0, false, ::app::Uno::Float2__typeof()),
        ::uNewFunctionVoid("set_Y", Change__Fuse_Triggers_State__set_Y, 0, false, ::app::Uno::Float__typeof()),
        ::uNewFunctionVoid("set_Z", Change__Fuse_Triggers_State__set_Z, 0, false, ::app::Uno::Float__typeof()));

    ::uRegisterType(type);
    return type;
}

void Change__Fuse_Triggers_State___ObjInit_2(Change__Fuse_Triggers_State* __this, ::app::Uno::UX::Property__Fuse_Triggers_State* target)
{
    ::app::Fuse::Animations::TrackAnimator___ObjInit_1(__this);

    if (target == NULL)
    {
        U_THROW(::app::Uno::ArgumentNullException__New_5(NULL, ::uGetConstString("target")));
    }

    __this->Target(target);

    if (__this->IsContinuous())
    {
        ::uObject* v;

        if ((::uType*)::app::Fuse::Triggers::State__typeof() == (::uType*)::app::Uno::Float__typeof())
        {
            v = (::uObject*)::app::Fuse::Animations::ConverterFloat__Singleton;
        }
        else if ((::uType*)::app::Fuse::Triggers::State__typeof() == (::uType*)::app::Uno::Float2__typeof())
        {
            v = (::uObject*)::app::Fuse::Animations::ConverterFloat2__Singleton;
        }
        else if ((::uType*)::app::Fuse::Triggers::State__typeof() == (::uType*)::app::Uno::Float3__typeof())
        {
            v = (::uObject*)::app::Fuse::Animations::ConverterFloat3__Singleton;
        }
        else if ((::uType*)::app::Fuse::Triggers::State__typeof() == (::uType*)::app::Uno::Float4__typeof())
        {
            v = (::uObject*)::app::Fuse::Animations::ConverterFloat4__Singleton;
        }
        else if ((::uType*)::app::Fuse::Triggers::State__typeof() == (::uType*)::app::Uno::Double__typeof())
        {
            v = (::uObject*)::app::Fuse::Animations::ConverterDouble__Singleton;
        }
        else
        {
            U_THROW(::app::Uno::Exception__New_2(NULL, ::app::Uno::String__op_Addition_1(NULL, ::uGetConstString("Unsupported change type: "), (::uObject*)(::uType*)::app::Fuse::Triggers::State__typeof())));
        }

        __this->ContinuousConverter = ::uCast< ::app::Fuse::Animations::Converter__Fuse_Triggers_State*>(v, ::app::Fuse::Animations::Converter__Fuse_Triggers_State__typeof());
    }
    else
    {
        __this->Mixer = ::app::Fuse::Animations::Mixer__get_DefaultDiscrete(NULL);
        __this->MarkDiscrete();
    }
}

::app::Fuse::Animations::AnimatorState* Change__Fuse_Triggers_State__CreateState(Change__Fuse_Triggers_State* __this, ::app::Fuse::Animations::CreateStateParams* p)
{
    if (__this->IsContinuous())
    {
        return (::app::Fuse::Animations::AnimatorState*)::app::Fuse::Animations::ContinuousTrackChangeState__Fuse_Triggers_State__New_1(NULL, __this, p);
    }

    return (::app::Fuse::Animations::AnimatorState*)::app::Fuse::Animations::DiscreteTrackChangeState__Fuse_Triggers_State__New_1(NULL, __this, p);
}

float Change__Fuse_Triggers_State__get_DegreesX(Change__Fuse_Triggers_State* __this)
{
    return ::app::Uno::Math__RadiansToDegrees_1(NULL, __this->X());
}

::app::Uno::Float2 Change__Fuse_Triggers_State__get_DegreesXY(Change__Fuse_Triggers_State* __this)
{
    return ::app::Uno::Float2__New_2(NULL, ::app::Uno::Math__RadiansToDegrees_1(NULL, __this->X()), ::app::Uno::Math__RadiansToDegrees_1(NULL, __this->Y()));
}

float Change__Fuse_Triggers_State__get_DegreesY(Change__Fuse_Triggers_State* __this)
{
    return ::app::Uno::Math__RadiansToDegrees_1(NULL, __this->Y());
}

float Change__Fuse_Triggers_State__get_DegreesZ(Change__Fuse_Triggers_State* __this)
{
    return ::app::Uno::Math__RadiansToDegrees_1(NULL, __this->Y());
}

bool Change__Fuse_Triggers_State__get_IsContinuous(Change__Fuse_Triggers_State* __this)
{
    return (((((::uType*)::app::Fuse::Triggers::State__typeof() == (::uType*)::app::Uno::Float__typeof()) || ((::uType*)::app::Fuse::Triggers::State__typeof() == (::uType*)::app::Uno::Float2__typeof())) || ((::uType*)::app::Fuse::Triggers::State__typeof() == (::uType*)::app::Uno::Float3__typeof())) || ((::uType*)::app::Fuse::Triggers::State__typeof() == (::uType*)::app::Uno::Float4__typeof())) || ((::uType*)::app::Fuse::Triggers::State__typeof() == (::uType*)::app::Uno::Double__typeof());
}

::app::Uno::UX::Property__Fuse_Triggers_State* Change__Fuse_Triggers_State__get_Target(Change__Fuse_Triggers_State* __this)
{
    return __this->_Target;
}

::app::Fuse::Triggers::State* Change__Fuse_Triggers_State__get_Value(Change__Fuse_Triggers_State* __this)
{
    return __this->IsContinuous() ? ::uPtr< ::app::Fuse::Animations::Converter__Fuse_Triggers_State*>(__this->ContinuousConverter)->Out(__this->_vectorValue) : ::uCast< ::app::Fuse::Triggers::State*>(__this->_objectValue, ::app::Fuse::Triggers::State__typeof());
}

float Change__Fuse_Triggers_State__get_X(Change__Fuse_Triggers_State* __this)
{
    return __this->_vectorValue.X;
}

::app::Uno::Float2 Change__Fuse_Triggers_State__get_XY(Change__Fuse_Triggers_State* __this)
{
    ::app::Uno::Float4 ind_123 = __this->_vectorValue;
    return ::app::Uno::Float2__New_2(NULL, ind_123.X, ind_123.Y);
}

float Change__Fuse_Triggers_State__get_Y(Change__Fuse_Triggers_State* __this)
{
    return __this->_vectorValue.Y;
}

float Change__Fuse_Triggers_State__get_Z(Change__Fuse_Triggers_State* __this)
{
    return __this->_vectorValue.Z;
}

Change__Fuse_Triggers_State* Change__Fuse_Triggers_State__New_1(::uStatic* __this, ::app::Uno::UX::Property__Fuse_Triggers_State* target)
{
    Change__Fuse_Triggers_State* inst = (Change__Fuse_Triggers_State*)::uAllocObject(sizeof(Change__Fuse_Triggers_State), Change__Fuse_Triggers_State__typeof());
    inst->_ObjInit_2(target);
    return inst;
}

void Change__Fuse_Triggers_State__set_DegreesX(Change__Fuse_Triggers_State* __this, float value)
{
    __this->X(::app::Uno::Math__DegreesToRadians_1(NULL, value));
}

void Change__Fuse_Triggers_State__set_DegreesXY(Change__Fuse_Triggers_State* __this, ::app::Uno::Float2 value)
{
    __this->XY(::app::Uno::Float2__New_2(NULL, ::app::Uno::Math__DegreesToRadians_1(NULL, value.X), ::app::Uno::Math__DegreesToRadians_1(NULL, value.Y)));
}

void Change__Fuse_Triggers_State__set_DegreesY(Change__Fuse_Triggers_State* __this, float value)
{
    __this->Y(::app::Uno::Math__DegreesToRadians_1(NULL, value));
}

void Change__Fuse_Triggers_State__set_DegreesZ(Change__Fuse_Triggers_State* __this, float value)
{
    __this->Y(::app::Uno::Math__DegreesToRadians_1(NULL, value));
}

void Change__Fuse_Triggers_State__set_Target(Change__Fuse_Triggers_State* __this, ::app::Uno::UX::Property__Fuse_Triggers_State* value)
{
    __this->_Target = value;
}

void Change__Fuse_Triggers_State__set_Value(Change__Fuse_Triggers_State* __this, ::app::Fuse::Triggers::State* value)
{
    if (__this->IsContinuous())
    {
        __this->_vectorValue = ::uPtr< ::app::Fuse::Animations::Converter__Fuse_Triggers_State*>(__this->ContinuousConverter)->In(value);
    }
    else
    {
        __this->_objectValue = (::uObject*)value;
    }
}

void Change__Fuse_Triggers_State__set_X(Change__Fuse_Triggers_State* __this, float value)
{
    __this->_vectorValue.X = value;
}

void Change__Fuse_Triggers_State__set_XY(Change__Fuse_Triggers_State* __this, ::app::Uno::Float2 value)
{
    __this->_vectorValue = ::app::Uno::Float4__New_6(NULL, value, __this->_vectorValue.Z, __this->_vectorValue.W);
}

void Change__Fuse_Triggers_State__set_Y(Change__Fuse_Triggers_State* __this, float value)
{
    __this->_vectorValue.Y = value;
}

void Change__Fuse_Triggers_State__set_Z(Change__Fuse_Triggers_State* __this, float value)
{
    __this->_vectorValue.Z = value;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Animations\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

Change__Fuse_Triggers_StateTransition__uType* Change__Fuse_Triggers_StateTransition__typeof()
{
    static ::uStaticStrong<Change__Fuse_Triggers_StateTransition__uType*> type;
    if (type != NULL) return type;

    type = (Change__Fuse_Triggers_StateTransition__uType*)::uAllocClassType(sizeof(Change__Fuse_Triggers_StateTransition__uType), "Fuse.Animations.Change<Fuse.Triggers.StateTransition>", false, 0, 2, 0);

    type->SetBaseType(::app::Fuse::Animations::TrackAnimator__typeof());
    type->__fp_CreateState = (::app::Fuse::Animations::AnimatorState*(*)(::app::Fuse::Animations::Animator*, ::app::Fuse::Animations::CreateStateParams*))Change__Fuse_Triggers_StateTransition__CreateState;

    type->SetStrongRefs(
        "_Target", offsetof(Change__Fuse_Triggers_StateTransition, _Target),
        "ContinuousConverter", offsetof(Change__Fuse_Triggers_StateTransition, ContinuousConverter));

    type->SetFields(1,
        ::uNewField("ContinuousConverter", NULL, offsetof(Change__Fuse_Triggers_StateTransition, ContinuousConverter), ::app::Fuse::Animations::Converter__Fuse_Triggers_StateTransition__typeof()));

    type->SetFunctions(22,
        ::uNewFunction("get_DegreesX", Change__Fuse_Triggers_StateTransition__get_DegreesX, 0, false, ::app::Uno::Float__typeof()),
        ::uNewFunction("get_DegreesXY", Change__Fuse_Triggers_StateTransition__get_DegreesXY, 0, false, ::app::Uno::Float2__typeof()),
        ::uNewFunction("get_DegreesY", Change__Fuse_Triggers_StateTransition__get_DegreesY, 0, false, ::app::Uno::Float__typeof()),
        ::uNewFunction("get_DegreesZ", Change__Fuse_Triggers_StateTransition__get_DegreesZ, 0, false, ::app::Uno::Float__typeof()),
        ::uNewFunction("get_IsContinuous", Change__Fuse_Triggers_StateTransition__get_IsContinuous, 0, false, ::app::Uno::Bool__typeof()),
        ::uNewFunction("get_Target", Change__Fuse_Triggers_StateTransition__get_Target, 0, false, ::app::Uno::UX::Property__Fuse_Triggers_StateTransition__typeof()),
        ::uNewFunction("get_Value", Change__Fuse_Triggers_StateTransition__get_Value, 0, false, ::app::Fuse::Triggers::StateTransition__typeof()),
        ::uNewFunction("get_X", Change__Fuse_Triggers_StateTransition__get_X, 0, false, ::app::Uno::Float__typeof()),
        ::uNewFunction("get_XY", Change__Fuse_Triggers_StateTransition__get_XY, 0, false, ::app::Uno::Float2__typeof()),
        ::uNewFunction("get_Y", Change__Fuse_Triggers_StateTransition__get_Y, 0, false, ::app::Uno::Float__typeof()),
        ::uNewFunction("get_Z", Change__Fuse_Triggers_StateTransition__get_Z, 0, false, ::app::Uno::Float__typeof()),
        ::uNewFunction(".ctor", Change__Fuse_Triggers_StateTransition__New_1, 0, true, Change__Fuse_Triggers_StateTransition__typeof(), ::app::Uno::UX::Property__Fuse_Triggers_StateTransition__typeof()),
        ::uNewFunctionVoid("set_DegreesX", Change__Fuse_Triggers_StateTransition__set_DegreesX, 0, false, ::app::Uno::Float__typeof()),
        ::uNewFunctionVoid("set_DegreesXY", Change__Fuse_Triggers_StateTransition__set_DegreesXY, 0, false, ::app::Uno::Float2__typeof()),
        ::uNewFunctionVoid("set_DegreesY", Change__Fuse_Triggers_StateTransition__set_DegreesY, 0, false, ::app::Uno::Float__typeof()),
        ::uNewFunctionVoid("set_DegreesZ", Change__Fuse_Triggers_StateTransition__set_DegreesZ, 0, false, ::app::Uno::Float__typeof()),
        ::uNewFunctionVoid("set_Target", Change__Fuse_Triggers_StateTransition__set_Target, 0, false, ::app::Uno::UX::Property__Fuse_Triggers_StateTransition__typeof()),
        ::uNewFunctionVoid("set_Value", Change__Fuse_Triggers_StateTransition__set_Value, 0, false, ::app::Fuse::Triggers::StateTransition__typeof()),
        ::uNewFunctionVoid("set_X", Change__Fuse_Triggers_StateTransition__set_X, 0, false, ::app::Uno::Float__typeof()),
        ::uNewFunctionVoid("set_XY", Change__Fuse_Triggers_StateTransition__set_XY, 0, false, ::app::Uno::Float2__typeof()),
        ::uNewFunctionVoid("set_Y", Change__Fuse_Triggers_StateTransition__set_Y, 0, false, ::app::Uno::Float__typeof()),
        ::uNewFunctionVoid("set_Z", Change__Fuse_Triggers_StateTransition__set_Z, 0, false, ::app::Uno::Float__typeof()));

    ::uRegisterType(type);
    return type;
}

void Change__Fuse_Triggers_StateTransition___ObjInit_2(Change__Fuse_Triggers_StateTransition* __this, ::app::Uno::UX::Property__Fuse_Triggers_StateTransition* target)
{
    ::app::Fuse::Animations::TrackAnimator___ObjInit_1(__this);

    if (target == NULL)
    {
        U_THROW(::app::Uno::ArgumentNullException__New_5(NULL, ::uGetConstString("target")));
    }

    __this->Target(target);

    if (__this->IsContinuous())
    {
        ::uObject* v;

        if ((::uType*)::app::Fuse::Triggers::StateTransition__typeof() == (::uType*)::app::Uno::Float__typeof())
        {
            v = (::uObject*)::app::Fuse::Animations::ConverterFloat__Singleton;
        }
        else if ((::uType*)::app::Fuse::Triggers::StateTransition__typeof() == (::uType*)::app::Uno::Float2__typeof())
        {
            v = (::uObject*)::app::Fuse::Animations::ConverterFloat2__Singleton;
        }
        else if ((::uType*)::app::Fuse::Triggers::StateTransition__typeof() == (::uType*)::app::Uno::Float3__typeof())
        {
            v = (::uObject*)::app::Fuse::Animations::ConverterFloat3__Singleton;
        }
        else if ((::uType*)::app::Fuse::Triggers::StateTransition__typeof() == (::uType*)::app::Uno::Float4__typeof())
        {
            v = (::uObject*)::app::Fuse::Animations::ConverterFloat4__Singleton;
        }
        else if ((::uType*)::app::Fuse::Triggers::StateTransition__typeof() == (::uType*)::app::Uno::Double__typeof())
        {
            v = (::uObject*)::app::Fuse::Animations::ConverterDouble__Singleton;
        }
        else
        {
            U_THROW(::app::Uno::Exception__New_2(NULL, ::app::Uno::String__op_Addition_1(NULL, ::uGetConstString("Unsupported change type: "), (::uObject*)(::uType*)::app::Fuse::Triggers::StateTransition__typeof())));
        }

        __this->ContinuousConverter = ::uCast< ::app::Fuse::Animations::Converter__Fuse_Triggers_StateTransition*>(v, ::app::Fuse::Animations::Converter__Fuse_Triggers_StateTransition__typeof());
    }
    else
    {
        __this->Mixer = ::app::Fuse::Animations::Mixer__get_DefaultDiscrete(NULL);
        __this->MarkDiscrete();
    }
}

::app::Fuse::Animations::AnimatorState* Change__Fuse_Triggers_StateTransition__CreateState(Change__Fuse_Triggers_StateTransition* __this, ::app::Fuse::Animations::CreateStateParams* p)
{
    if (__this->IsContinuous())
    {
        return (::app::Fuse::Animations::AnimatorState*)::app::Fuse::Animations::ContinuousTrackChangeState__Fuse_Triggers_StateTransition__New_1(NULL, __this, p);
    }

    return (::app::Fuse::Animations::AnimatorState*)::app::Fuse::Animations::DiscreteTrackChangeState__Fuse_Triggers_StateTransition__New_1(NULL, __this, p);
}

float Change__Fuse_Triggers_StateTransition__get_DegreesX(Change__Fuse_Triggers_StateTransition* __this)
{
    return ::app::Uno::Math__RadiansToDegrees_1(NULL, __this->X());
}

::app::Uno::Float2 Change__Fuse_Triggers_StateTransition__get_DegreesXY(Change__Fuse_Triggers_StateTransition* __this)
{
    return ::app::Uno::Float2__New_2(NULL, ::app::Uno::Math__RadiansToDegrees_1(NULL, __this->X()), ::app::Uno::Math__RadiansToDegrees_1(NULL, __this->Y()));
}

float Change__Fuse_Triggers_StateTransition__get_DegreesY(Change__Fuse_Triggers_StateTransition* __this)
{
    return ::app::Uno::Math__RadiansToDegrees_1(NULL, __this->Y());
}

float Change__Fuse_Triggers_StateTransition__get_DegreesZ(Change__Fuse_Triggers_StateTransition* __this)
{
    return ::app::Uno::Math__RadiansToDegrees_1(NULL, __this->Y());
}

bool Change__Fuse_Triggers_StateTransition__get_IsContinuous(Change__Fuse_Triggers_StateTransition* __this)
{
    return (((((::uType*)::app::Fuse::Triggers::StateTransition__typeof() == (::uType*)::app::Uno::Float__typeof()) || ((::uType*)::app::Fuse::Triggers::StateTransition__typeof() == (::uType*)::app::Uno::Float2__typeof())) || ((::uType*)::app::Fuse::Triggers::StateTransition__typeof() == (::uType*)::app::Uno::Float3__typeof())) || ((::uType*)::app::Fuse::Triggers::StateTransition__typeof() == (::uType*)::app::Uno::Float4__typeof())) || ((::uType*)::app::Fuse::Triggers::StateTransition__typeof() == (::uType*)::app::Uno::Double__typeof());
}

::app::Uno::UX::Property__Fuse_Triggers_StateTransition* Change__Fuse_Triggers_StateTransition__get_Target(Change__Fuse_Triggers_StateTransition* __this)
{
    return __this->_Target;
}

int Change__Fuse_Triggers_StateTransition__get_Value(Change__Fuse_Triggers_StateTransition* __this)
{
    return __this->IsContinuous() ? ::uPtr< ::app::Fuse::Animations::Converter__Fuse_Triggers_StateTransition*>(__this->ContinuousConverter)->Out(__this->_vectorValue) : ::uUnbox< int>(::app::Fuse::Triggers::StateTransition__typeof(), __this->_objectValue);
}

float Change__Fuse_Triggers_StateTransition__get_X(Change__Fuse_Triggers_StateTransition* __this)
{
    return __this->_vectorValue.X;
}

::app::Uno::Float2 Change__Fuse_Triggers_StateTransition__get_XY(Change__Fuse_Triggers_StateTransition* __this)
{
    ::app::Uno::Float4 ind_123 = __this->_vectorValue;
    return ::app::Uno::Float2__New_2(NULL, ind_123.X, ind_123.Y);
}

float Change__Fuse_Triggers_StateTransition__get_Y(Change__Fuse_Triggers_StateTransition* __this)
{
    return __this->_vectorValue.Y;
}

float Change__Fuse_Triggers_StateTransition__get_Z(Change__Fuse_Triggers_StateTransition* __this)
{
    return __this->_vectorValue.Z;
}

Change__Fuse_Triggers_StateTransition* Change__Fuse_Triggers_StateTransition__New_1(::uStatic* __this, ::app::Uno::UX::Property__Fuse_Triggers_StateTransition* target)
{
    Change__Fuse_Triggers_StateTransition* inst = (Change__Fuse_Triggers_StateTransition*)::uAllocObject(sizeof(Change__Fuse_Triggers_StateTransition), Change__Fuse_Triggers_StateTransition__typeof());
    inst->_ObjInit_2(target);
    return inst;
}

void Change__Fuse_Triggers_StateTransition__set_DegreesX(Change__Fuse_Triggers_StateTransition* __this, float value)
{
    __this->X(::app::Uno::Math__DegreesToRadians_1(NULL, value));
}

void Change__Fuse_Triggers_StateTransition__set_DegreesXY(Change__Fuse_Triggers_StateTransition* __this, ::app::Uno::Float2 value)
{
    __this->XY(::app::Uno::Float2__New_2(NULL, ::app::Uno::Math__DegreesToRadians_1(NULL, value.X), ::app::Uno::Math__DegreesToRadians_1(NULL, value.Y)));
}

void Change__Fuse_Triggers_StateTransition__set_DegreesY(Change__Fuse_Triggers_StateTransition* __this, float value)
{
    __this->Y(::app::Uno::Math__DegreesToRadians_1(NULL, value));
}

void Change__Fuse_Triggers_StateTransition__set_DegreesZ(Change__Fuse_Triggers_StateTransition* __this, float value)
{
    __this->Y(::app::Uno::Math__DegreesToRadians_1(NULL, value));
}

void Change__Fuse_Triggers_StateTransition__set_Target(Change__Fuse_Triggers_StateTransition* __this, ::app::Uno::UX::Property__Fuse_Triggers_StateTransition* value)
{
    __this->_Target = value;
}

void Change__Fuse_Triggers_StateTransition__set_Value(Change__Fuse_Triggers_StateTransition* __this, int value)
{
    if (__this->IsContinuous())
    {
        __this->_vectorValue = ::uPtr< ::app::Fuse::Animations::Converter__Fuse_Triggers_StateTransition*>(__this->ContinuousConverter)->In(value);
    }
    else
    {
        __this->_objectValue = ::uBox< int>(::app::Fuse::Triggers::StateTransition__typeof(), value);
    }
}

void Change__Fuse_Triggers_StateTransition__set_X(Change__Fuse_Triggers_StateTransition* __this, float value)
{
    __this->_vectorValue.X = value;
}

void Change__Fuse_Triggers_StateTransition__set_XY(Change__Fuse_Triggers_StateTransition* __this, ::app::Uno::Float2 value)
{
    __this->_vectorValue = ::app::Uno::Float4__New_6(NULL, value, __this->_vectorValue.Z, __this->_vectorValue.W);
}

void Change__Fuse_Triggers_StateTransition__set_Y(Change__Fuse_Triggers_StateTransition* __this, float value)
{
    __this->_vectorValue.Y = value;
}

void Change__Fuse_Triggers_StateTransition__set_Z(Change__Fuse_Triggers_StateTransition* __this, float value)
{
    __this->_vectorValue.Z = value;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Animations\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

Change__Fuse_Triggers_TriggerBypassMode__uType* Change__Fuse_Triggers_TriggerBypassMode__typeof()
{
    static ::uStaticStrong<Change__Fuse_Triggers_TriggerBypassMode__uType*> type;
    if (type != NULL) return type;

    type = (Change__Fuse_Triggers_TriggerBypassMode__uType*)::uAllocClassType(sizeof(Change__Fuse_Triggers_TriggerBypassMode__uType), "Fuse.Animations.Change<Fuse.Triggers.TriggerBypassMode>", false, 0, 2, 0);

    type->SetBaseType(::app::Fuse::Animations::TrackAnimator__typeof());
    type->__fp_CreateState = (::app::Fuse::Animations::AnimatorState*(*)(::app::Fuse::Animations::Animator*, ::app::Fuse::Animations::CreateStateParams*))Change__Fuse_Triggers_TriggerBypassMode__CreateState;

    type->SetStrongRefs(
        "_Target", offsetof(Change__Fuse_Triggers_TriggerBypassMode, _Target),
        "ContinuousConverter", offsetof(Change__Fuse_Triggers_TriggerBypassMode, ContinuousConverter));

    type->SetFields(1,
        ::uNewField("ContinuousConverter", NULL, offsetof(Change__Fuse_Triggers_TriggerBypassMode, ContinuousConverter), ::app::Fuse::Animations::Converter__Fuse_Triggers_TriggerBypassMode__typeof()));

    type->SetFunctions(22,
        ::uNewFunction("get_DegreesX", Change__Fuse_Triggers_TriggerBypassMode__get_DegreesX, 0, false, ::app::Uno::Float__typeof()),
        ::uNewFunction("get_DegreesXY", Change__Fuse_Triggers_TriggerBypassMode__get_DegreesXY, 0, false, ::app::Uno::Float2__typeof()),
        ::uNewFunction("get_DegreesY", Change__Fuse_Triggers_TriggerBypassMode__get_DegreesY, 0, false, ::app::Uno::Float__typeof()),
        ::uNewFunction("get_DegreesZ", Change__Fuse_Triggers_TriggerBypassMode__get_DegreesZ, 0, false, ::app::Uno::Float__typeof()),
        ::uNewFunction("get_IsContinuous", Change__Fuse_Triggers_TriggerBypassMode__get_IsContinuous, 0, false, ::app::Uno::Bool__typeof()),
        ::uNewFunction("get_Target", Change__Fuse_Triggers_TriggerBypassMode__get_Target, 0, false, ::app::Uno::UX::Property__Fuse_Triggers_TriggerBypassMode__typeof()),
        ::uNewFunction("get_Value", Change__Fuse_Triggers_TriggerBypassMode__get_Value, 0, false, ::app::Fuse::Triggers::TriggerBypassMode__typeof()),
        ::uNewFunction("get_X", Change__Fuse_Triggers_TriggerBypassMode__get_X, 0, false, ::app::Uno::Float__typeof()),
        ::uNewFunction("get_XY", Change__Fuse_Triggers_TriggerBypassMode__get_XY, 0, false, ::app::Uno::Float2__typeof()),
        ::uNewFunction("get_Y", Change__Fuse_Triggers_TriggerBypassMode__get_Y, 0, false, ::app::Uno::Float__typeof()),
        ::uNewFunction("get_Z", Change__Fuse_Triggers_TriggerBypassMode__get_Z, 0, false, ::app::Uno::Float__typeof()),
        ::uNewFunction(".ctor", Change__Fuse_Triggers_TriggerBypassMode__New_1, 0, true, Change__Fuse_Triggers_TriggerBypassMode__typeof(), ::app::Uno::UX::Property__Fuse_Triggers_TriggerBypassMode__typeof()),
        ::uNewFunctionVoid("set_DegreesX", Change__Fuse_Triggers_TriggerBypassMode__set_DegreesX, 0, false, ::app::Uno::Float__typeof()),
        ::uNewFunctionVoid("set_DegreesXY", Change__Fuse_Triggers_TriggerBypassMode__set_DegreesXY, 0, false, ::app::Uno::Float2__typeof()),
        ::uNewFunctionVoid("set_DegreesY", Change__Fuse_Triggers_TriggerBypassMode__set_DegreesY, 0, false, ::app::Uno::Float__typeof()),
        ::uNewFunctionVoid("set_DegreesZ", Change__Fuse_Triggers_TriggerBypassMode__set_DegreesZ, 0, false, ::app::Uno::Float__typeof()),
        ::uNewFunctionVoid("set_Target", Change__Fuse_Triggers_TriggerBypassMode__set_Target, 0, false, ::app::Uno::UX::Property__Fuse_Triggers_TriggerBypassMode__typeof()),
        ::uNewFunctionVoid("set_Value", Change__Fuse_Triggers_TriggerBypassMode__set_Value, 0, false, ::app::Fuse::Triggers::TriggerBypassMode__typeof()),
        ::uNewFunctionVoid("set_X", Change__Fuse_Triggers_TriggerBypassMode__set_X, 0, false, ::app::Uno::Float__typeof()),
        ::uNewFunctionVoid("set_XY", Change__Fuse_Triggers_TriggerBypassMode__set_XY, 0, false, ::app::Uno::Float2__typeof()),
        ::uNewFunctionVoid("set_Y", Change__Fuse_Triggers_TriggerBypassMode__set_Y, 0, false, ::app::Uno::Float__typeof()),
        ::uNewFunctionVoid("set_Z", Change__Fuse_Triggers_TriggerBypassMode__set_Z, 0, false, ::app::Uno::Float__typeof()));

    ::uRegisterType(type);
    return type;
}

void Change__Fuse_Triggers_TriggerBypassMode___ObjInit_2(Change__Fuse_Triggers_TriggerBypassMode* __this, ::app::Uno::UX::Property__Fuse_Triggers_TriggerBypassMode* target)
{
    ::app::Fuse::Animations::TrackAnimator___ObjInit_1(__this);

    if (target == NULL)
    {
        U_THROW(::app::Uno::ArgumentNullException__New_5(NULL, ::uGetConstString("target")));
    }

    __this->Target(target);

    if (__this->IsContinuous())
    {
        ::uObject* v;

        if ((::uType*)::app::Fuse::Triggers::TriggerBypassMode__typeof() == (::uType*)::app::Uno::Float__typeof())
        {
            v = (::uObject*)::app::Fuse::Animations::ConverterFloat__Singleton;
        }
        else if ((::uType*)::app::Fuse::Triggers::TriggerBypassMode__typeof() == (::uType*)::app::Uno::Float2__typeof())
        {
            v = (::uObject*)::app::Fuse::Animations::ConverterFloat2__Singleton;
        }
        else if ((::uType*)::app::Fuse::Triggers::TriggerBypassMode__typeof() == (::uType*)::app::Uno::Float3__typeof())
        {
            v = (::uObject*)::app::Fuse::Animations::ConverterFloat3__Singleton;
        }
        else if ((::uType*)::app::Fuse::Triggers::TriggerBypassMode__typeof() == (::uType*)::app::Uno::Float4__typeof())
        {
            v = (::uObject*)::app::Fuse::Animations::ConverterFloat4__Singleton;
        }
        else if ((::uType*)::app::Fuse::Triggers::TriggerBypassMode__typeof() == (::uType*)::app::Uno::Double__typeof())
        {
            v = (::uObject*)::app::Fuse::Animations::ConverterDouble__Singleton;
        }
        else
        {
            U_THROW(::app::Uno::Exception__New_2(NULL, ::app::Uno::String__op_Addition_1(NULL, ::uGetConstString("Unsupported change type: "), (::uObject*)(::uType*)::app::Fuse::Triggers::TriggerBypassMode__typeof())));
        }

        __this->ContinuousConverter = ::uCast< ::app::Fuse::Animations::Converter__Fuse_Triggers_TriggerBypassMode*>(v, ::app::Fuse::Animations::Converter__Fuse_Triggers_TriggerBypassMode__typeof());
    }
    else
    {
        __this->Mixer = ::app::Fuse::Animations::Mixer__get_DefaultDiscrete(NULL);
        __this->MarkDiscrete();
    }
}

::app::Fuse::Animations::AnimatorState* Change__Fuse_Triggers_TriggerBypassMode__CreateState(Change__Fuse_Triggers_TriggerBypassMode* __this, ::app::Fuse::Animations::CreateStateParams* p)
{
    if (__this->IsContinuous())
    {
        return (::app::Fuse::Animations::AnimatorState*)::app::Fuse::Animations::ContinuousTrackChangeState__Fuse_Triggers_TriggerBypassMode__New_1(NULL, __this, p);
    }

    return (::app::Fuse::Animations::AnimatorState*)::app::Fuse::Animations::DiscreteTrackChangeState__Fuse_Triggers_TriggerBypassMode__New_1(NULL, __this, p);
}

float Change__Fuse_Triggers_TriggerBypassMode__get_DegreesX(Change__Fuse_Triggers_TriggerBypassMode* __this)
{
    return ::app::Uno::Math__RadiansToDegrees_1(NULL, __this->X());
}

::app::Uno::Float2 Change__Fuse_Triggers_TriggerBypassMode__get_DegreesXY(Change__Fuse_Triggers_TriggerBypassMode* __this)
{
    return ::app::Uno::Float2__New_2(NULL, ::app::Uno::Math__RadiansToDegrees_1(NULL, __this->X()), ::app::Uno::Math__RadiansToDegrees_1(NULL, __this->Y()));
}

float Change__Fuse_Triggers_TriggerBypassMode__get_DegreesY(Change__Fuse_Triggers_TriggerBypassMode* __this)
{
    return ::app::Uno::Math__RadiansToDegrees_1(NULL, __this->Y());
}

float Change__Fuse_Triggers_TriggerBypassMode__get_DegreesZ(Change__Fuse_Triggers_TriggerBypassMode* __this)
{
    return ::app::Uno::Math__RadiansToDegrees_1(NULL, __this->Y());
}

bool Change__Fuse_Triggers_TriggerBypassMode__get_IsContinuous(Change__Fuse_Triggers_TriggerBypassMode* __this)
{
    return (((((::uType*)::app::Fuse::Triggers::TriggerBypassMode__typeof() == (::uType*)::app::Uno::Float__typeof()) || ((::uType*)::app::Fuse::Triggers::TriggerBypassMode__typeof() == (::uType*)::app::Uno::Float2__typeof())) || ((::uType*)::app::Fuse::Triggers::TriggerBypassMode__typeof() == (::uType*)::app::Uno::Float3__typeof())) || ((::uType*)::app::Fuse::Triggers::TriggerBypassMode__typeof() == (::uType*)::app::Uno::Float4__typeof())) || ((::uType*)::app::Fuse::Triggers::TriggerBypassMode__typeof() == (::uType*)::app::Uno::Double__typeof());
}

::app::Uno::UX::Property__Fuse_Triggers_TriggerBypassMode* Change__Fuse_Triggers_TriggerBypassMode__get_Target(Change__Fuse_Triggers_TriggerBypassMode* __this)
{
    return __this->_Target;
}

int Change__Fuse_Triggers_TriggerBypassMode__get_Value(Change__Fuse_Triggers_TriggerBypassMode* __this)
{
    return __this->IsContinuous() ? ::uPtr< ::app::Fuse::Animations::Converter__Fuse_Triggers_TriggerBypassMode*>(__this->ContinuousConverter)->Out(__this->_vectorValue) : ::uUnbox< int>(::app::Fuse::Triggers::TriggerBypassMode__typeof(), __this->_objectValue);
}

float Change__Fuse_Triggers_TriggerBypassMode__get_X(Change__Fuse_Triggers_TriggerBypassMode* __this)
{
    return __this->_vectorValue.X;
}

::app::Uno::Float2 Change__Fuse_Triggers_TriggerBypassMode__get_XY(Change__Fuse_Triggers_TriggerBypassMode* __this)
{
    ::app::Uno::Float4 ind_123 = __this->_vectorValue;
    return ::app::Uno::Float2__New_2(NULL, ind_123.X, ind_123.Y);
}

float Change__Fuse_Triggers_TriggerBypassMode__get_Y(Change__Fuse_Triggers_TriggerBypassMode* __this)
{
    return __this->_vectorValue.Y;
}

float Change__Fuse_Triggers_TriggerBypassMode__get_Z(Change__Fuse_Triggers_TriggerBypassMode* __this)
{
    return __this->_vectorValue.Z;
}

Change__Fuse_Triggers_TriggerBypassMode* Change__Fuse_Triggers_TriggerBypassMode__New_1(::uStatic* __this, ::app::Uno::UX::Property__Fuse_Triggers_TriggerBypassMode* target)
{
    Change__Fuse_Triggers_TriggerBypassMode* inst = (Change__Fuse_Triggers_TriggerBypassMode*)::uAllocObject(sizeof(Change__Fuse_Triggers_TriggerBypassMode), Change__Fuse_Triggers_TriggerBypassMode__typeof());
    inst->_ObjInit_2(target);
    return inst;
}

void Change__Fuse_Triggers_TriggerBypassMode__set_DegreesX(Change__Fuse_Triggers_TriggerBypassMode* __this, float value)
{
    __this->X(::app::Uno::Math__DegreesToRadians_1(NULL, value));
}

void Change__Fuse_Triggers_TriggerBypassMode__set_DegreesXY(Change__Fuse_Triggers_TriggerBypassMode* __this, ::app::Uno::Float2 value)
{
    __this->XY(::app::Uno::Float2__New_2(NULL, ::app::Uno::Math__DegreesToRadians_1(NULL, value.X), ::app::Uno::Math__DegreesToRadians_1(NULL, value.Y)));
}

void Change__Fuse_Triggers_TriggerBypassMode__set_DegreesY(Change__Fuse_Triggers_TriggerBypassMode* __this, float value)
{
    __this->Y(::app::Uno::Math__DegreesToRadians_1(NULL, value));
}

void Change__Fuse_Triggers_TriggerBypassMode__set_DegreesZ(Change__Fuse_Triggers_TriggerBypassMode* __this, float value)
{
    __this->Y(::app::Uno::Math__DegreesToRadians_1(NULL, value));
}

void Change__Fuse_Triggers_TriggerBypassMode__set_Target(Change__Fuse_Triggers_TriggerBypassMode* __this, ::app::Uno::UX::Property__Fuse_Triggers_TriggerBypassMode* value)
{
    __this->_Target = value;
}

void Change__Fuse_Triggers_TriggerBypassMode__set_Value(Change__Fuse_Triggers_TriggerBypassMode* __this, int value)
{
    if (__this->IsContinuous())
    {
        __this->_vectorValue = ::uPtr< ::app::Fuse::Animations::Converter__Fuse_Triggers_TriggerBypassMode*>(__this->ContinuousConverter)->In(value);
    }
    else
    {
        __this->_objectValue = ::uBox< int>(::app::Fuse::Triggers::TriggerBypassMode__typeof(), value);
    }
}

void Change__Fuse_Triggers_TriggerBypassMode__set_X(Change__Fuse_Triggers_TriggerBypassMode* __this, float value)
{
    __this->_vectorValue.X = value;
}

void Change__Fuse_Triggers_TriggerBypassMode__set_XY(Change__Fuse_Triggers_TriggerBypassMode* __this, ::app::Uno::Float2 value)
{
    __this->_vectorValue = ::app::Uno::Float4__New_6(NULL, value, __this->_vectorValue.Z, __this->_vectorValue.W);
}

void Change__Fuse_Triggers_TriggerBypassMode__set_Y(Change__Fuse_Triggers_TriggerBypassMode* __this, float value)
{
    __this->_vectorValue.Y = value;
}

void Change__Fuse_Triggers_TriggerBypassMode__set_Z(Change__Fuse_Triggers_TriggerBypassMode* __this, float value)
{
    __this->_vectorValue.Z = value;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Animations\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

Change__int__uType* Change__int__typeof()
{
    static ::uStaticStrong<Change__int__uType*> type;
    if (type != NULL) return type;

    type = (Change__int__uType*)::uAllocClassType(sizeof(Change__int__uType), "Fuse.Animations.Change<int>", false, 0, 2, 0);

    type->SetBaseType(::app::Fuse::Animations::TrackAnimator__typeof());
    type->__fp_CreateState = (::app::Fuse::Animations::AnimatorState*(*)(::app::Fuse::Animations::Animator*, ::app::Fuse::Animations::CreateStateParams*))Change__int__CreateState;

    type->SetStrongRefs(
        "_Target", offsetof(Change__int, _Target),
        "ContinuousConverter", offsetof(Change__int, ContinuousConverter));

    type->SetFields(1,
        ::uNewField("ContinuousConverter", NULL, offsetof(Change__int, ContinuousConverter), ::app::Fuse::Animations::Converter__int__typeof()));

    type->SetFunctions(22,
        ::uNewFunction("get_DegreesX", Change__int__get_DegreesX, 0, false, ::app::Uno::Float__typeof()),
        ::uNewFunction("get_DegreesXY", Change__int__get_DegreesXY, 0, false, ::app::Uno::Float2__typeof()),
        ::uNewFunction("get_DegreesY", Change__int__get_DegreesY, 0, false, ::app::Uno::Float__typeof()),
        ::uNewFunction("get_DegreesZ", Change__int__get_DegreesZ, 0, false, ::app::Uno::Float__typeof()),
        ::uNewFunction("get_IsContinuous", Change__int__get_IsContinuous, 0, false, ::app::Uno::Bool__typeof()),
        ::uNewFunction("get_Target", Change__int__get_Target, 0, false, ::app::Uno::UX::Property__int__typeof()),
        ::uNewFunction("get_Value", Change__int__get_Value, 0, false, ::app::Uno::Int__typeof()),
        ::uNewFunction("get_X", Change__int__get_X, 0, false, ::app::Uno::Float__typeof()),
        ::uNewFunction("get_XY", Change__int__get_XY, 0, false, ::app::Uno::Float2__typeof()),
        ::uNewFunction("get_Y", Change__int__get_Y, 0, false, ::app::Uno::Float__typeof()),
        ::uNewFunction("get_Z", Change__int__get_Z, 0, false, ::app::Uno::Float__typeof()),
        ::uNewFunction(".ctor", Change__int__New_1, 0, true, Change__int__typeof(), ::app::Uno::UX::Property__int__typeof()),
        ::uNewFunctionVoid("set_DegreesX", Change__int__set_DegreesX, 0, false, ::app::Uno::Float__typeof()),
        ::uNewFunctionVoid("set_DegreesXY", Change__int__set_DegreesXY, 0, false, ::app::Uno::Float2__typeof()),
        ::uNewFunctionVoid("set_DegreesY", Change__int__set_DegreesY, 0, false, ::app::Uno::Float__typeof()),
        ::uNewFunctionVoid("set_DegreesZ", Change__int__set_DegreesZ, 0, false, ::app::Uno::Float__typeof()),
        ::uNewFunctionVoid("set_Target", Change__int__set_Target, 0, false, ::app::Uno::UX::Property__int__typeof()),
        ::uNewFunctionVoid("set_Value", Change__int__set_Value, 0, false, ::app::Uno::Int__typeof()),
        ::uNewFunctionVoid("set_X", Change__int__set_X, 0, false, ::app::Uno::Float__typeof()),
        ::uNewFunctionVoid("set_XY", Change__int__set_XY, 0, false, ::app::Uno::Float2__typeof()),
        ::uNewFunctionVoid("set_Y", Change__int__set_Y, 0, false, ::app::Uno::Float__typeof()),
        ::uNewFunctionVoid("set_Z", Change__int__set_Z, 0, false, ::app::Uno::Float__typeof()));

    ::uRegisterType(type);
    return type;
}

void Change__int___ObjInit_2(Change__int* __this, ::app::Uno::UX::Property__int* target)
{
    ::app::Fuse::Animations::TrackAnimator___ObjInit_1(__this);

    if (target == NULL)
    {
        U_THROW(::app::Uno::ArgumentNullException__New_5(NULL, ::uGetConstString("target")));
    }

    __this->Target(target);

    if (__this->IsContinuous())
    {
        ::uObject* v;

        if ((::uType*)::app::Uno::Int__typeof() == (::uType*)::app::Uno::Float__typeof())
        {
            v = (::uObject*)::app::Fuse::Animations::ConverterFloat__Singleton;
        }
        else if ((::uType*)::app::Uno::Int__typeof() == (::uType*)::app::Uno::Float2__typeof())
        {
            v = (::uObject*)::app::Fuse::Animations::ConverterFloat2__Singleton;
        }
        else if ((::uType*)::app::Uno::Int__typeof() == (::uType*)::app::Uno::Float3__typeof())
        {
            v = (::uObject*)::app::Fuse::Animations::ConverterFloat3__Singleton;
        }
        else if ((::uType*)::app::Uno::Int__typeof() == (::uType*)::app::Uno::Float4__typeof())
        {
            v = (::uObject*)::app::Fuse::Animations::ConverterFloat4__Singleton;
        }
        else if ((::uType*)::app::Uno::Int__typeof() == (::uType*)::app::Uno::Double__typeof())
        {
            v = (::uObject*)::app::Fuse::Animations::ConverterDouble__Singleton;
        }
        else
        {
            U_THROW(::app::Uno::Exception__New_2(NULL, ::app::Uno::String__op_Addition_1(NULL, ::uGetConstString("Unsupported change type: "), (::uObject*)(::uType*)::app::Uno::Int__typeof())));
        }

        __this->ContinuousConverter = ::uCast< ::app::Fuse::Animations::Converter__int*>(v, ::app::Fuse::Animations::Converter__int__typeof());
    }
    else
    {
        __this->Mixer = ::app::Fuse::Animations::Mixer__get_DefaultDiscrete(NULL);
        __this->MarkDiscrete();
    }
}

::app::Fuse::Animations::AnimatorState* Change__int__CreateState(Change__int* __this, ::app::Fuse::Animations::CreateStateParams* p)
{
    if (__this->IsContinuous())
    {
        return (::app::Fuse::Animations::AnimatorState*)::app::Fuse::Animations::ContinuousTrackChangeState__int__New_1(NULL, __this, p);
    }

    return (::app::Fuse::Animations::AnimatorState*)::app::Fuse::Animations::DiscreteTrackChangeState__int__New_1(NULL, __this, p);
}

float Change__int__get_DegreesX(Change__int* __this)
{
    return ::app::Uno::Math__RadiansToDegrees_1(NULL, __this->X());
}

::app::Uno::Float2 Change__int__get_DegreesXY(Change__int* __this)
{
    return ::app::Uno::Float2__New_2(NULL, ::app::Uno::Math__RadiansToDegrees_1(NULL, __this->X()), ::app::Uno::Math__RadiansToDegrees_1(NULL, __this->Y()));
}

float Change__int__get_DegreesY(Change__int* __this)
{
    return ::app::Uno::Math__RadiansToDegrees_1(NULL, __this->Y());
}

float Change__int__get_DegreesZ(Change__int* __this)
{
    return ::app::Uno::Math__RadiansToDegrees_1(NULL, __this->Y());
}

bool Change__int__get_IsContinuous(Change__int* __this)
{
    return (((((::uType*)::app::Uno::Int__typeof() == (::uType*)::app::Uno::Float__typeof()) || ((::uType*)::app::Uno::Int__typeof() == (::uType*)::app::Uno::Float2__typeof())) || ((::uType*)::app::Uno::Int__typeof() == (::uType*)::app::Uno::Float3__typeof())) || ((::uType*)::app::Uno::Int__typeof() == (::uType*)::app::Uno::Float4__typeof())) || ((::uType*)::app::Uno::Int__typeof() == (::uType*)::app::Uno::Double__typeof());
}

::app::Uno::UX::Property__int* Change__int__get_Target(Change__int* __this)
{
    return __this->_Target;
}

int Change__int__get_Value(Change__int* __this)
{
    return __this->IsContinuous() ? ::uPtr< ::app::Fuse::Animations::Converter__int*>(__this->ContinuousConverter)->Out(__this->_vectorValue) : ::uUnbox< int>(::app::Uno::Int__typeof(), __this->_objectValue);
}

float Change__int__get_X(Change__int* __this)
{
    return __this->_vectorValue.X;
}

::app::Uno::Float2 Change__int__get_XY(Change__int* __this)
{
    ::app::Uno::Float4 ind_123 = __this->_vectorValue;
    return ::app::Uno::Float2__New_2(NULL, ind_123.X, ind_123.Y);
}

float Change__int__get_Y(Change__int* __this)
{
    return __this->_vectorValue.Y;
}

float Change__int__get_Z(Change__int* __this)
{
    return __this->_vectorValue.Z;
}

Change__int* Change__int__New_1(::uStatic* __this, ::app::Uno::UX::Property__int* target)
{
    Change__int* inst = (Change__int*)::uAllocObject(sizeof(Change__int), Change__int__typeof());
    inst->_ObjInit_2(target);
    return inst;
}

void Change__int__set_DegreesX(Change__int* __this, float value)
{
    __this->X(::app::Uno::Math__DegreesToRadians_1(NULL, value));
}

void Change__int__set_DegreesXY(Change__int* __this, ::app::Uno::Float2 value)
{
    __this->XY(::app::Uno::Float2__New_2(NULL, ::app::Uno::Math__DegreesToRadians_1(NULL, value.X), ::app::Uno::Math__DegreesToRadians_1(NULL, value.Y)));
}

void Change__int__set_DegreesY(Change__int* __this, float value)
{
    __this->Y(::app::Uno::Math__DegreesToRadians_1(NULL, value));
}

void Change__int__set_DegreesZ(Change__int* __this, float value)
{
    __this->Y(::app::Uno::Math__DegreesToRadians_1(NULL, value));
}

void Change__int__set_Target(Change__int* __this, ::app::Uno::UX::Property__int* value)
{
    __this->_Target = value;
}

void Change__int__set_Value(Change__int* __this, int value)
{
    if (__this->IsContinuous())
    {
        __this->_vectorValue = ::uPtr< ::app::Fuse::Animations::Converter__int*>(__this->ContinuousConverter)->In(value);
    }
    else
    {
        __this->_objectValue = ::uBox< int>(::app::Uno::Int__typeof(), value);
    }
}

void Change__int__set_X(Change__int* __this, float value)
{
    __this->_vectorValue.X = value;
}

void Change__int__set_XY(Change__int* __this, ::app::Uno::Float2 value)
{
    __this->_vectorValue = ::app::Uno::Float4__New_6(NULL, value, __this->_vectorValue.Z, __this->_vectorValue.W);
}

void Change__int__set_Y(Change__int* __this, float value)
{
    __this->_vectorValue.Y = value;
}

void Change__int__set_Z(Change__int* __this, float value)
{
    __this->_vectorValue.Z = value;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Animations\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

Change__int2__uType* Change__int2__typeof()
{
    static ::uStaticStrong<Change__int2__uType*> type;
    if (type != NULL) return type;

    type = (Change__int2__uType*)::uAllocClassType(sizeof(Change__int2__uType), "Fuse.Animations.Change<int2>", false, 0, 2, 0);

    type->SetBaseType(::app::Fuse::Animations::TrackAnimator__typeof());
    type->__fp_CreateState = (::app::Fuse::Animations::AnimatorState*(*)(::app::Fuse::Animations::Animator*, ::app::Fuse::Animations::CreateStateParams*))Change__int2__CreateState;

    type->SetStrongRefs(
        "_Target", offsetof(Change__int2, _Target),
        "ContinuousConverter", offsetof(Change__int2, ContinuousConverter));

    type->SetFields(1,
        ::uNewField("ContinuousConverter", NULL, offsetof(Change__int2, ContinuousConverter), ::app::Fuse::Animations::Converter__int2__typeof()));

    type->SetFunctions(22,
        ::uNewFunction("get_DegreesX", Change__int2__get_DegreesX, 0, false, ::app::Uno::Float__typeof()),
        ::uNewFunction("get_DegreesXY", Change__int2__get_DegreesXY, 0, false, ::app::Uno::Float2__typeof()),
        ::uNewFunction("get_DegreesY", Change__int2__get_DegreesY, 0, false, ::app::Uno::Float__typeof()),
        ::uNewFunction("get_DegreesZ", Change__int2__get_DegreesZ, 0, false, ::app::Uno::Float__typeof()),
        ::uNewFunction("get_IsContinuous", Change__int2__get_IsContinuous, 0, false, ::app::Uno::Bool__typeof()),
        ::uNewFunction("get_Target", Change__int2__get_Target, 0, false, ::app::Uno::UX::Property__int2__typeof()),
        ::uNewFunction("get_Value", Change__int2__get_Value, 0, false, ::app::Uno::Int2__typeof()),
        ::uNewFunction("get_X", Change__int2__get_X, 0, false, ::app::Uno::Float__typeof()),
        ::uNewFunction("get_XY", Change__int2__get_XY, 0, false, ::app::Uno::Float2__typeof()),
        ::uNewFunction("get_Y", Change__int2__get_Y, 0, false, ::app::Uno::Float__typeof()),
        ::uNewFunction("get_Z", Change__int2__get_Z, 0, false, ::app::Uno::Float__typeof()),
        ::uNewFunction(".ctor", Change__int2__New_1, 0, true, Change__int2__typeof(), ::app::Uno::UX::Property__int2__typeof()),
        ::uNewFunctionVoid("set_DegreesX", Change__int2__set_DegreesX, 0, false, ::app::Uno::Float__typeof()),
        ::uNewFunctionVoid("set_DegreesXY", Change__int2__set_DegreesXY, 0, false, ::app::Uno::Float2__typeof()),
        ::uNewFunctionVoid("set_DegreesY", Change__int2__set_DegreesY, 0, false, ::app::Uno::Float__typeof()),
        ::uNewFunctionVoid("set_DegreesZ", Change__int2__set_DegreesZ, 0, false, ::app::Uno::Float__typeof()),
        ::uNewFunctionVoid("set_Target", Change__int2__set_Target, 0, false, ::app::Uno::UX::Property__int2__typeof()),
        ::uNewFunctionVoid("set_Value", Change__int2__set_Value, 0, false, ::app::Uno::Int2__typeof()),
        ::uNewFunctionVoid("set_X", Change__int2__set_X, 0, false, ::app::Uno::Float__typeof()),
        ::uNewFunctionVoid("set_XY", Change__int2__set_XY, 0, false, ::app::Uno::Float2__typeof()),
        ::uNewFunctionVoid("set_Y", Change__int2__set_Y, 0, false, ::app::Uno::Float__typeof()),
        ::uNewFunctionVoid("set_Z", Change__int2__set_Z, 0, false, ::app::Uno::Float__typeof()));

    ::uRegisterType(type);
    return type;
}

void Change__int2___ObjInit_2(Change__int2* __this, ::app::Uno::UX::Property__int2* target)
{
    ::app::Fuse::Animations::TrackAnimator___ObjInit_1(__this);

    if (target == NULL)
    {
        U_THROW(::app::Uno::ArgumentNullException__New_5(NULL, ::uGetConstString("target")));
    }

    __this->Target(target);

    if (__this->IsContinuous())
    {
        ::uObject* v;

        if ((::uType*)::app::Uno::Int2__typeof() == (::uType*)::app::Uno::Float__typeof())
        {
            v = (::uObject*)::app::Fuse::Animations::ConverterFloat__Singleton;
        }
        else if ((::uType*)::app::Uno::Int2__typeof() == (::uType*)::app::Uno::Float2__typeof())
        {
            v = (::uObject*)::app::Fuse::Animations::ConverterFloat2__Singleton;
        }
        else if ((::uType*)::app::Uno::Int2__typeof() == (::uType*)::app::Uno::Float3__typeof())
        {
            v = (::uObject*)::app::Fuse::Animations::ConverterFloat3__Singleton;
        }
        else if ((::uType*)::app::Uno::Int2__typeof() == (::uType*)::app::Uno::Float4__typeof())
        {
            v = (::uObject*)::app::Fuse::Animations::ConverterFloat4__Singleton;
        }
        else if ((::uType*)::app::Uno::Int2__typeof() == (::uType*)::app::Uno::Double__typeof())
        {
            v = (::uObject*)::app::Fuse::Animations::ConverterDouble__Singleton;
        }
        else
        {
            U_THROW(::app::Uno::Exception__New_2(NULL, ::app::Uno::String__op_Addition_1(NULL, ::uGetConstString("Unsupported change type: "), (::uObject*)(::uType*)::app::Uno::Int2__typeof())));
        }

        __this->ContinuousConverter = ::uCast< ::app::Fuse::Animations::Converter__int2*>(v, ::app::Fuse::Animations::Converter__int2__typeof());
    }
    else
    {
        __this->Mixer = ::app::Fuse::Animations::Mixer__get_DefaultDiscrete(NULL);
        __this->MarkDiscrete();
    }
}

::app::Fuse::Animations::AnimatorState* Change__int2__CreateState(Change__int2* __this, ::app::Fuse::Animations::CreateStateParams* p)
{
    if (__this->IsContinuous())
    {
        return (::app::Fuse::Animations::AnimatorState*)::app::Fuse::Animations::ContinuousTrackChangeState__int2__New_1(NULL, __this, p);
    }

    return (::app::Fuse::Animations::AnimatorState*)::app::Fuse::Animations::DiscreteTrackChangeState__int2__New_1(NULL, __this, p);
}

float Change__int2__get_DegreesX(Change__int2* __this)
{
    return ::app::Uno::Math__RadiansToDegrees_1(NULL, __this->X());
}

::app::Uno::Float2 Change__int2__get_DegreesXY(Change__int2* __this)
{
    return ::app::Uno::Float2__New_2(NULL, ::app::Uno::Math__RadiansToDegrees_1(NULL, __this->X()), ::app::Uno::Math__RadiansToDegrees_1(NULL, __this->Y()));
}

float Change__int2__get_DegreesY(Change__int2* __this)
{
    return ::app::Uno::Math__RadiansToDegrees_1(NULL, __this->Y());
}

float Change__int2__get_DegreesZ(Change__int2* __this)
{
    return ::app::Uno::Math__RadiansToDegrees_1(NULL, __this->Y());
}

bool Change__int2__get_IsContinuous(Change__int2* __this)
{
    return (((((::uType*)::app::Uno::Int2__typeof() == (::uType*)::app::Uno::Float__typeof()) || ((::uType*)::app::Uno::Int2__typeof() == (::uType*)::app::Uno::Float2__typeof())) || ((::uType*)::app::Uno::Int2__typeof() == (::uType*)::app::Uno::Float3__typeof())) || ((::uType*)::app::Uno::Int2__typeof() == (::uType*)::app::Uno::Float4__typeof())) || ((::uType*)::app::Uno::Int2__typeof() == (::uType*)::app::Uno::Double__typeof());
}

::app::Uno::UX::Property__int2* Change__int2__get_Target(Change__int2* __this)
{
    return __this->_Target;
}

::app::Uno::Int2 Change__int2__get_Value(Change__int2* __this)
{
    return __this->IsContinuous() ? ::uPtr< ::app::Fuse::Animations::Converter__int2*>(__this->ContinuousConverter)->Out(__this->_vectorValue) : ::uUnbox< ::app::Uno::Int2>(::app::Uno::Int2__typeof(), __this->_objectValue);
}

float Change__int2__get_X(Change__int2* __this)
{
    return __this->_vectorValue.X;
}

::app::Uno::Float2 Change__int2__get_XY(Change__int2* __this)
{
    ::app::Uno::Float4 ind_123 = __this->_vectorValue;
    return ::app::Uno::Float2__New_2(NULL, ind_123.X, ind_123.Y);
}

float Change__int2__get_Y(Change__int2* __this)
{
    return __this->_vectorValue.Y;
}

float Change__int2__get_Z(Change__int2* __this)
{
    return __this->_vectorValue.Z;
}

Change__int2* Change__int2__New_1(::uStatic* __this, ::app::Uno::UX::Property__int2* target)
{
    Change__int2* inst = (Change__int2*)::uAllocObject(sizeof(Change__int2), Change__int2__typeof());
    inst->_ObjInit_2(target);
    return inst;
}

void Change__int2__set_DegreesX(Change__int2* __this, float value)
{
    __this->X(::app::Uno::Math__DegreesToRadians_1(NULL, value));
}

void Change__int2__set_DegreesXY(Change__int2* __this, ::app::Uno::Float2 value)
{
    __this->XY(::app::Uno::Float2__New_2(NULL, ::app::Uno::Math__DegreesToRadians_1(NULL, value.X), ::app::Uno::Math__DegreesToRadians_1(NULL, value.Y)));
}

void Change__int2__set_DegreesY(Change__int2* __this, float value)
{
    __this->Y(::app::Uno::Math__DegreesToRadians_1(NULL, value));
}

void Change__int2__set_DegreesZ(Change__int2* __this, float value)
{
    __this->Y(::app::Uno::Math__DegreesToRadians_1(NULL, value));
}

void Change__int2__set_Target(Change__int2* __this, ::app::Uno::UX::Property__int2* value)
{
    __this->_Target = value;
}

void Change__int2__set_Value(Change__int2* __this, ::app::Uno::Int2 value)
{
    if (__this->IsContinuous())
    {
        __this->_vectorValue = ::uPtr< ::app::Fuse::Animations::Converter__int2*>(__this->ContinuousConverter)->In(value);
    }
    else
    {
        __this->_objectValue = ::uBox(::app::Uno::Int2__typeof(), value);
    }
}

void Change__int2__set_X(Change__int2* __this, float value)
{
    __this->_vectorValue.X = value;
}

void Change__int2__set_XY(Change__int2* __this, ::app::Uno::Float2 value)
{
    __this->_vectorValue = ::app::Uno::Float4__New_6(NULL, value, __this->_vectorValue.Z, __this->_vectorValue.W);
}

void Change__int2__set_Y(Change__int2* __this, float value)
{
    __this->_vectorValue.Y = value;
}

void Change__int2__set_Z(Change__int2* __this, float value)
{
    __this->_vectorValue.Z = value;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Animations\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

Change__int3__uType* Change__int3__typeof()
{
    static ::uStaticStrong<Change__int3__uType*> type;
    if (type != NULL) return type;

    type = (Change__int3__uType*)::uAllocClassType(sizeof(Change__int3__uType), "Fuse.Animations.Change<int3>", false, 0, 2, 0);

    type->SetBaseType(::app::Fuse::Animations::TrackAnimator__typeof());
    type->__fp_CreateState = (::app::Fuse::Animations::AnimatorState*(*)(::app::Fuse::Animations::Animator*, ::app::Fuse::Animations::CreateStateParams*))Change__int3__CreateState;

    type->SetStrongRefs(
        "_Target", offsetof(Change__int3, _Target),
        "ContinuousConverter", offsetof(Change__int3, ContinuousConverter));

    type->SetFields(1,
        ::uNewField("ContinuousConverter", NULL, offsetof(Change__int3, ContinuousConverter), ::app::Fuse::Animations::Converter__int3__typeof()));

    type->SetFunctions(22,
        ::uNewFunction("get_DegreesX", Change__int3__get_DegreesX, 0, false, ::app::Uno::Float__typeof()),
        ::uNewFunction("get_DegreesXY", Change__int3__get_DegreesXY, 0, false, ::app::Uno::Float2__typeof()),
        ::uNewFunction("get_DegreesY", Change__int3__get_DegreesY, 0, false, ::app::Uno::Float__typeof()),
        ::uNewFunction("get_DegreesZ", Change__int3__get_DegreesZ, 0, false, ::app::Uno::Float__typeof()),
        ::uNewFunction("get_IsContinuous", Change__int3__get_IsContinuous, 0, false, ::app::Uno::Bool__typeof()),
        ::uNewFunction("get_Target", Change__int3__get_Target, 0, false, ::app::Uno::UX::Property__int3__typeof()),
        ::uNewFunction("get_Value", Change__int3__get_Value, 0, false, ::app::Uno::Int3__typeof()),
        ::uNewFunction("get_X", Change__int3__get_X, 0, false, ::app::Uno::Float__typeof()),
        ::uNewFunction("get_XY", Change__int3__get_XY, 0, false, ::app::Uno::Float2__typeof()),
        ::uNewFunction("get_Y", Change__int3__get_Y, 0, false, ::app::Uno::Float__typeof()),
        ::uNewFunction("get_Z", Change__int3__get_Z, 0, false, ::app::Uno::Float__typeof()),
        ::uNewFunction(".ctor", Change__int3__New_1, 0, true, Change__int3__typeof(), ::app::Uno::UX::Property__int3__typeof()),
        ::uNewFunctionVoid("set_DegreesX", Change__int3__set_DegreesX, 0, false, ::app::Uno::Float__typeof()),
        ::uNewFunctionVoid("set_DegreesXY", Change__int3__set_DegreesXY, 0, false, ::app::Uno::Float2__typeof()),
        ::uNewFunctionVoid("set_DegreesY", Change__int3__set_DegreesY, 0, false, ::app::Uno::Float__typeof()),
        ::uNewFunctionVoid("set_DegreesZ", Change__int3__set_DegreesZ, 0, false, ::app::Uno::Float__typeof()),
        ::uNewFunctionVoid("set_Target", Change__int3__set_Target, 0, false, ::app::Uno::UX::Property__int3__typeof()),
        ::uNewFunctionVoid("set_Value", Change__int3__set_Value, 0, false, ::app::Uno::Int3__typeof()),
        ::uNewFunctionVoid("set_X", Change__int3__set_X, 0, false, ::app::Uno::Float__typeof()),
        ::uNewFunctionVoid("set_XY", Change__int3__set_XY, 0, false, ::app::Uno::Float2__typeof()),
        ::uNewFunctionVoid("set_Y", Change__int3__set_Y, 0, false, ::app::Uno::Float__typeof()),
        ::uNewFunctionVoid("set_Z", Change__int3__set_Z, 0, false, ::app::Uno::Float__typeof()));

    ::uRegisterType(type);
    return type;
}

void Change__int3___ObjInit_2(Change__int3* __this, ::app::Uno::UX::Property__int3* target)
{
    ::app::Fuse::Animations::TrackAnimator___ObjInit_1(__this);

    if (target == NULL)
    {
        U_THROW(::app::Uno::ArgumentNullException__New_5(NULL, ::uGetConstString("target")));
    }

    __this->Target(target);

    if (__this->IsContinuous())
    {
        ::uObject* v;

        if ((::uType*)::app::Uno::Int3__typeof() == (::uType*)::app::Uno::Float__typeof())
        {
            v = (::uObject*)::app::Fuse::Animations::ConverterFloat__Singleton;
        }
        else if ((::uType*)::app::Uno::Int3__typeof() == (::uType*)::app::Uno::Float2__typeof())
        {
            v = (::uObject*)::app::Fuse::Animations::ConverterFloat2__Singleton;
        }
        else if ((::uType*)::app::Uno::Int3__typeof() == (::uType*)::app::Uno::Float3__typeof())
        {
            v = (::uObject*)::app::Fuse::Animations::ConverterFloat3__Singleton;
        }
        else if ((::uType*)::app::Uno::Int3__typeof() == (::uType*)::app::Uno::Float4__typeof())
        {
            v = (::uObject*)::app::Fuse::Animations::ConverterFloat4__Singleton;
        }
        else if ((::uType*)::app::Uno::Int3__typeof() == (::uType*)::app::Uno::Double__typeof())
        {
            v = (::uObject*)::app::Fuse::Animations::ConverterDouble__Singleton;
        }
        else
        {
            U_THROW(::app::Uno::Exception__New_2(NULL, ::app::Uno::String__op_Addition_1(NULL, ::uGetConstString("Unsupported change type: "), (::uObject*)(::uType*)::app::Uno::Int3__typeof())));
        }

        __this->ContinuousConverter = ::uCast< ::app::Fuse::Animations::Converter__int3*>(v, ::app::Fuse::Animations::Converter__int3__typeof());
    }
    else
    {
        __this->Mixer = ::app::Fuse::Animations::Mixer__get_DefaultDiscrete(NULL);
        __this->MarkDiscrete();
    }
}

::app::Fuse::Animations::AnimatorState* Change__int3__CreateState(Change__int3* __this, ::app::Fuse::Animations::CreateStateParams* p)
{
    if (__this->IsContinuous())
    {
        return (::app::Fuse::Animations::AnimatorState*)::app::Fuse::Animations::ContinuousTrackChangeState__int3__New_1(NULL, __this, p);
    }

    return (::app::Fuse::Animations::AnimatorState*)::app::Fuse::Animations::DiscreteTrackChangeState__int3__New_1(NULL, __this, p);
}

float Change__int3__get_DegreesX(Change__int3* __this)
{
    return ::app::Uno::Math__RadiansToDegrees_1(NULL, __this->X());
}

::app::Uno::Float2 Change__int3__get_DegreesXY(Change__int3* __this)
{
    return ::app::Uno::Float2__New_2(NULL, ::app::Uno::Math__RadiansToDegrees_1(NULL, __this->X()), ::app::Uno::Math__RadiansToDegrees_1(NULL, __this->Y()));
}

float Change__int3__get_DegreesY(Change__int3* __this)
{
    return ::app::Uno::Math__RadiansToDegrees_1(NULL, __this->Y());
}

float Change__int3__get_DegreesZ(Change__int3* __this)
{
    return ::app::Uno::Math__RadiansToDegrees_1(NULL, __this->Y());
}

bool Change__int3__get_IsContinuous(Change__int3* __this)
{
    return (((((::uType*)::app::Uno::Int3__typeof() == (::uType*)::app::Uno::Float__typeof()) || ((::uType*)::app::Uno::Int3__typeof() == (::uType*)::app::Uno::Float2__typeof())) || ((::uType*)::app::Uno::Int3__typeof() == (::uType*)::app::Uno::Float3__typeof())) || ((::uType*)::app::Uno::Int3__typeof() == (::uType*)::app::Uno::Float4__typeof())) || ((::uType*)::app::Uno::Int3__typeof() == (::uType*)::app::Uno::Double__typeof());
}

::app::Uno::UX::Property__int3* Change__int3__get_Target(Change__int3* __this)
{
    return __this->_Target;
}

::app::Uno::Int3 Change__int3__get_Value(Change__int3* __this)
{
    return __this->IsContinuous() ? ::uPtr< ::app::Fuse::Animations::Converter__int3*>(__this->ContinuousConverter)->Out(__this->_vectorValue) : ::uUnbox< ::app::Uno::Int3>(::app::Uno::Int3__typeof(), __this->_objectValue);
}

float Change__int3__get_X(Change__int3* __this)
{
    return __this->_vectorValue.X;
}

::app::Uno::Float2 Change__int3__get_XY(Change__int3* __this)
{
    ::app::Uno::Float4 ind_123 = __this->_vectorValue;
    return ::app::Uno::Float2__New_2(NULL, ind_123.X, ind_123.Y);
}

float Change__int3__get_Y(Change__int3* __this)
{
    return __this->_vectorValue.Y;
}

float Change__int3__get_Z(Change__int3* __this)
{
    return __this->_vectorValue.Z;
}

Change__int3* Change__int3__New_1(::uStatic* __this, ::app::Uno::UX::Property__int3* target)
{
    Change__int3* inst = (Change__int3*)::uAllocObject(sizeof(Change__int3), Change__int3__typeof());
    inst->_ObjInit_2(target);
    return inst;
}

void Change__int3__set_DegreesX(Change__int3* __this, float value)
{
    __this->X(::app::Uno::Math__DegreesToRadians_1(NULL, value));
}

void Change__int3__set_DegreesXY(Change__int3* __this, ::app::Uno::Float2 value)
{
    __this->XY(::app::Uno::Float2__New_2(NULL, ::app::Uno::Math__DegreesToRadians_1(NULL, value.X), ::app::Uno::Math__DegreesToRadians_1(NULL, value.Y)));
}

void Change__int3__set_DegreesY(Change__int3* __this, float value)
{
    __this->Y(::app::Uno::Math__DegreesToRadians_1(NULL, value));
}

void Change__int3__set_DegreesZ(Change__int3* __this, float value)
{
    __this->Y(::app::Uno::Math__DegreesToRadians_1(NULL, value));
}

void Change__int3__set_Target(Change__int3* __this, ::app::Uno::UX::Property__int3* value)
{
    __this->_Target = value;
}

void Change__int3__set_Value(Change__int3* __this, ::app::Uno::Int3 value)
{
    if (__this->IsContinuous())
    {
        __this->_vectorValue = ::uPtr< ::app::Fuse::Animations::Converter__int3*>(__this->ContinuousConverter)->In(value);
    }
    else
    {
        __this->_objectValue = ::uBox(::app::Uno::Int3__typeof(), value);
    }
}

void Change__int3__set_X(Change__int3* __this, float value)
{
    __this->_vectorValue.X = value;
}

void Change__int3__set_XY(Change__int3* __this, ::app::Uno::Float2 value)
{
    __this->_vectorValue = ::app::Uno::Float4__New_6(NULL, value, __this->_vectorValue.Z, __this->_vectorValue.W);
}

void Change__int3__set_Y(Change__int3* __this, float value)
{
    __this->_vectorValue.Y = value;
}

void Change__int3__set_Z(Change__int3* __this, float value)
{
    __this->_vectorValue.Z = value;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Animations\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

Change__int4__uType* Change__int4__typeof()
{
    static ::uStaticStrong<Change__int4__uType*> type;
    if (type != NULL) return type;

    type = (Change__int4__uType*)::uAllocClassType(sizeof(Change__int4__uType), "Fuse.Animations.Change<int4>", false, 0, 2, 0);

    type->SetBaseType(::app::Fuse::Animations::TrackAnimator__typeof());
    type->__fp_CreateState = (::app::Fuse::Animations::AnimatorState*(*)(::app::Fuse::Animations::Animator*, ::app::Fuse::Animations::CreateStateParams*))Change__int4__CreateState;

    type->SetStrongRefs(
        "_Target", offsetof(Change__int4, _Target),
        "ContinuousConverter", offsetof(Change__int4, ContinuousConverter));

    type->SetFields(1,
        ::uNewField("ContinuousConverter", NULL, offsetof(Change__int4, ContinuousConverter), ::app::Fuse::Animations::Converter__int4__typeof()));

    type->SetFunctions(22,
        ::uNewFunction("get_DegreesX", Change__int4__get_DegreesX, 0, false, ::app::Uno::Float__typeof()),
        ::uNewFunction("get_DegreesXY", Change__int4__get_DegreesXY, 0, false, ::app::Uno::Float2__typeof()),
        ::uNewFunction("get_DegreesY", Change__int4__get_DegreesY, 0, false, ::app::Uno::Float__typeof()),
        ::uNewFunction("get_DegreesZ", Change__int4__get_DegreesZ, 0, false, ::app::Uno::Float__typeof()),
        ::uNewFunction("get_IsContinuous", Change__int4__get_IsContinuous, 0, false, ::app::Uno::Bool__typeof()),
        ::uNewFunction("get_Target", Change__int4__get_Target, 0, false, ::app::Uno::UX::Property__int4__typeof()),
        ::uNewFunction("get_Value", Change__int4__get_Value, 0, false, ::app::Uno::Int4__typeof()),
        ::uNewFunction("get_X", Change__int4__get_X, 0, false, ::app::Uno::Float__typeof()),
        ::uNewFunction("get_XY", Change__int4__get_XY, 0, false, ::app::Uno::Float2__typeof()),
        ::uNewFunction("get_Y", Change__int4__get_Y, 0, false, ::app::Uno::Float__typeof()),
        ::uNewFunction("get_Z", Change__int4__get_Z, 0, false, ::app::Uno::Float__typeof()),
        ::uNewFunction(".ctor", Change__int4__New_1, 0, true, Change__int4__typeof(), ::app::Uno::UX::Property__int4__typeof()),
        ::uNewFunctionVoid("set_DegreesX", Change__int4__set_DegreesX, 0, false, ::app::Uno::Float__typeof()),
        ::uNewFunctionVoid("set_DegreesXY", Change__int4__set_DegreesXY, 0, false, ::app::Uno::Float2__typeof()),
        ::uNewFunctionVoid("set_DegreesY", Change__int4__set_DegreesY, 0, false, ::app::Uno::Float__typeof()),
        ::uNewFunctionVoid("set_DegreesZ", Change__int4__set_DegreesZ, 0, false, ::app::Uno::Float__typeof()),
        ::uNewFunctionVoid("set_Target", Change__int4__set_Target, 0, false, ::app::Uno::UX::Property__int4__typeof()),
        ::uNewFunctionVoid("set_Value", Change__int4__set_Value, 0, false, ::app::Uno::Int4__typeof()),
        ::uNewFunctionVoid("set_X", Change__int4__set_X, 0, false, ::app::Uno::Float__typeof()),
        ::uNewFunctionVoid("set_XY", Change__int4__set_XY, 0, false, ::app::Uno::Float2__typeof()),
        ::uNewFunctionVoid("set_Y", Change__int4__set_Y, 0, false, ::app::Uno::Float__typeof()),
        ::uNewFunctionVoid("set_Z", Change__int4__set_Z, 0, false, ::app::Uno::Float__typeof()));

    ::uRegisterType(type);
    return type;
}

void Change__int4___ObjInit_2(Change__int4* __this, ::app::Uno::UX::Property__int4* target)
{
    ::app::Fuse::Animations::TrackAnimator___ObjInit_1(__this);

    if (target == NULL)
    {
        U_THROW(::app::Uno::ArgumentNullException__New_5(NULL, ::uGetConstString("target")));
    }

    __this->Target(target);

    if (__this->IsContinuous())
    {
        ::uObject* v;

        if ((::uType*)::app::Uno::Int4__typeof() == (::uType*)::app::Uno::Float__typeof())
        {
            v = (::uObject*)::app::Fuse::Animations::ConverterFloat__Singleton;
        }
        else if ((::uType*)::app::Uno::Int4__typeof() == (::uType*)::app::Uno::Float2__typeof())
        {
            v = (::uObject*)::app::Fuse::Animations::ConverterFloat2__Singleton;
        }
        else if ((::uType*)::app::Uno::Int4__typeof() == (::uType*)::app::Uno::Float3__typeof())
        {
            v = (::uObject*)::app::Fuse::Animations::ConverterFloat3__Singleton;
        }
        else if ((::uType*)::app::Uno::Int4__typeof() == (::uType*)::app::Uno::Float4__typeof())
        {
            v = (::uObject*)::app::Fuse::Animations::ConverterFloat4__Singleton;
        }
        else if ((::uType*)::app::Uno::Int4__typeof() == (::uType*)::app::Uno::Double__typeof())
        {
            v = (::uObject*)::app::Fuse::Animations::ConverterDouble__Singleton;
        }
        else
        {
            U_THROW(::app::Uno::Exception__New_2(NULL, ::app::Uno::String__op_Addition_1(NULL, ::uGetConstString("Unsupported change type: "), (::uObject*)(::uType*)::app::Uno::Int4__typeof())));
        }

        __this->ContinuousConverter = ::uCast< ::app::Fuse::Animations::Converter__int4*>(v, ::app::Fuse::Animations::Converter__int4__typeof());
    }
    else
    {
        __this->Mixer = ::app::Fuse::Animations::Mixer__get_DefaultDiscrete(NULL);
        __this->MarkDiscrete();
    }
}

::app::Fuse::Animations::AnimatorState* Change__int4__CreateState(Change__int4* __this, ::app::Fuse::Animations::CreateStateParams* p)
{
    if (__this->IsContinuous())
    {
        return (::app::Fuse::Animations::AnimatorState*)::app::Fuse::Animations::ContinuousTrackChangeState__int4__New_1(NULL, __this, p);
    }

    return (::app::Fuse::Animations::AnimatorState*)::app::Fuse::Animations::DiscreteTrackChangeState__int4__New_1(NULL, __this, p);
}

float Change__int4__get_DegreesX(Change__int4* __this)
{
    return ::app::Uno::Math__RadiansToDegrees_1(NULL, __this->X());
}

::app::Uno::Float2 Change__int4__get_DegreesXY(Change__int4* __this)
{
    return ::app::Uno::Float2__New_2(NULL, ::app::Uno::Math__RadiansToDegrees_1(NULL, __this->X()), ::app::Uno::Math__RadiansToDegrees_1(NULL, __this->Y()));
}

float Change__int4__get_DegreesY(Change__int4* __this)
{
    return ::app::Uno::Math__RadiansToDegrees_1(NULL, __this->Y());
}

float Change__int4__get_DegreesZ(Change__int4* __this)
{
    return ::app::Uno::Math__RadiansToDegrees_1(NULL, __this->Y());
}

bool Change__int4__get_IsContinuous(Change__int4* __this)
{
    return (((((::uType*)::app::Uno::Int4__typeof() == (::uType*)::app::Uno::Float__typeof()) || ((::uType*)::app::Uno::Int4__typeof() == (::uType*)::app::Uno::Float2__typeof())) || ((::uType*)::app::Uno::Int4__typeof() == (::uType*)::app::Uno::Float3__typeof())) || ((::uType*)::app::Uno::Int4__typeof() == (::uType*)::app::Uno::Float4__typeof())) || ((::uType*)::app::Uno::Int4__typeof() == (::uType*)::app::Uno::Double__typeof());
}

::app::Uno::UX::Property__int4* Change__int4__get_Target(Change__int4* __this)
{
    return __this->_Target;
}

::app::Uno::Int4 Change__int4__get_Value(Change__int4* __this)
{
    return __this->IsContinuous() ? ::uPtr< ::app::Fuse::Animations::Converter__int4*>(__this->ContinuousConverter)->Out(__this->_vectorValue) : ::uUnbox< ::app::Uno::Int4>(::app::Uno::Int4__typeof(), __this->_objectValue);
}

float Change__int4__get_X(Change__int4* __this)
{
    return __this->_vectorValue.X;
}

::app::Uno::Float2 Change__int4__get_XY(Change__int4* __this)
{
    ::app::Uno::Float4 ind_123 = __this->_vectorValue;
    return ::app::Uno::Float2__New_2(NULL, ind_123.X, ind_123.Y);
}

float Change__int4__get_Y(Change__int4* __this)
{
    return __this->_vectorValue.Y;
}

float Change__int4__get_Z(Change__int4* __this)
{
    return __this->_vectorValue.Z;
}

Change__int4* Change__int4__New_1(::uStatic* __this, ::app::Uno::UX::Property__int4* target)
{
    Change__int4* inst = (Change__int4*)::uAllocObject(sizeof(Change__int4), Change__int4__typeof());
    inst->_ObjInit_2(target);
    return inst;
}

void Change__int4__set_DegreesX(Change__int4* __this, float value)
{
    __this->X(::app::Uno::Math__DegreesToRadians_1(NULL, value));
}

void Change__int4__set_DegreesXY(Change__int4* __this, ::app::Uno::Float2 value)
{
    __this->XY(::app::Uno::Float2__New_2(NULL, ::app::Uno::Math__DegreesToRadians_1(NULL, value.X), ::app::Uno::Math__DegreesToRadians_1(NULL, value.Y)));
}

void Change__int4__set_DegreesY(Change__int4* __this, float value)
{
    __this->Y(::app::Uno::Math__DegreesToRadians_1(NULL, value));
}

void Change__int4__set_DegreesZ(Change__int4* __this, float value)
{
    __this->Y(::app::Uno::Math__DegreesToRadians_1(NULL, value));
}

void Change__int4__set_Target(Change__int4* __this, ::app::Uno::UX::Property__int4* value)
{
    __this->_Target = value;
}

void Change__int4__set_Value(Change__int4* __this, ::app::Uno::Int4 value)
{
    if (__this->IsContinuous())
    {
        __this->_vectorValue = ::uPtr< ::app::Fuse::Animations::Converter__int4*>(__this->ContinuousConverter)->In(value);
    }
    else
    {
        __this->_objectValue = ::uBox(::app::Uno::Int4__typeof(), value);
    }
}

void Change__int4__set_X(Change__int4* __this, float value)
{
    __this->_vectorValue.X = value;
}

void Change__int4__set_XY(Change__int4* __this, ::app::Uno::Float2 value)
{
    __this->_vectorValue = ::app::Uno::Float4__New_6(NULL, value, __this->_vectorValue.Z, __this->_vectorValue.W);
}

void Change__int4__set_Y(Change__int4* __this, float value)
{
    __this->_vectorValue.Y = value;
}

void Change__int4__set_Z(Change__int4* __this, float value)
{
    __this->_vectorValue.Z = value;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Animations\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

Change__long__uType* Change__long__typeof()
{
    static ::uStaticStrong<Change__long__uType*> type;
    if (type != NULL) return type;

    type = (Change__long__uType*)::uAllocClassType(sizeof(Change__long__uType), "Fuse.Animations.Change<long>", false, 0, 2, 0);

    type->SetBaseType(::app::Fuse::Animations::TrackAnimator__typeof());
    type->__fp_CreateState = (::app::Fuse::Animations::AnimatorState*(*)(::app::Fuse::Animations::Animator*, ::app::Fuse::Animations::CreateStateParams*))Change__long__CreateState;

    type->SetStrongRefs(
        "_Target", offsetof(Change__long, _Target),
        "ContinuousConverter", offsetof(Change__long, ContinuousConverter));

    type->SetFields(1,
        ::uNewField("ContinuousConverter", NULL, offsetof(Change__long, ContinuousConverter), ::app::Fuse::Animations::Converter__long__typeof()));

    type->SetFunctions(22,
        ::uNewFunction("get_DegreesX", Change__long__get_DegreesX, 0, false, ::app::Uno::Float__typeof()),
        ::uNewFunction("get_DegreesXY", Change__long__get_DegreesXY, 0, false, ::app::Uno::Float2__typeof()),
        ::uNewFunction("get_DegreesY", Change__long__get_DegreesY, 0, false, ::app::Uno::Float__typeof()),
        ::uNewFunction("get_DegreesZ", Change__long__get_DegreesZ, 0, false, ::app::Uno::Float__typeof()),
        ::uNewFunction("get_IsContinuous", Change__long__get_IsContinuous, 0, false, ::app::Uno::Bool__typeof()),
        ::uNewFunction("get_Target", Change__long__get_Target, 0, false, ::app::Uno::UX::Property__long__typeof()),
        ::uNewFunction("get_Value", Change__long__get_Value, 0, false, ::app::Uno::Long__typeof()),
        ::uNewFunction("get_X", Change__long__get_X, 0, false, ::app::Uno::Float__typeof()),
        ::uNewFunction("get_XY", Change__long__get_XY, 0, false, ::app::Uno::Float2__typeof()),
        ::uNewFunction("get_Y", Change__long__get_Y, 0, false, ::app::Uno::Float__typeof()),
        ::uNewFunction("get_Z", Change__long__get_Z, 0, false, ::app::Uno::Float__typeof()),
        ::uNewFunction(".ctor", Change__long__New_1, 0, true, Change__long__typeof(), ::app::Uno::UX::Property__long__typeof()),
        ::uNewFunctionVoid("set_DegreesX", Change__long__set_DegreesX, 0, false, ::app::Uno::Float__typeof()),
        ::uNewFunctionVoid("set_DegreesXY", Change__long__set_DegreesXY, 0, false, ::app::Uno::Float2__typeof()),
        ::uNewFunctionVoid("set_DegreesY", Change__long__set_DegreesY, 0, false, ::app::Uno::Float__typeof()),
        ::uNewFunctionVoid("set_DegreesZ", Change__long__set_DegreesZ, 0, false, ::app::Uno::Float__typeof()),
        ::uNewFunctionVoid("set_Target", Change__long__set_Target, 0, false, ::app::Uno::UX::Property__long__typeof()),
        ::uNewFunctionVoid("set_Value", Change__long__set_Value, 0, false, ::app::Uno::Long__typeof()),
        ::uNewFunctionVoid("set_X", Change__long__set_X, 0, false, ::app::Uno::Float__typeof()),
        ::uNewFunctionVoid("set_XY", Change__long__set_XY, 0, false, ::app::Uno::Float2__typeof()),
        ::uNewFunctionVoid("set_Y", Change__long__set_Y, 0, false, ::app::Uno::Float__typeof()),
        ::uNewFunctionVoid("set_Z", Change__long__set_Z, 0, false, ::app::Uno::Float__typeof()));

    ::uRegisterType(type);
    return type;
}

void Change__long___ObjInit_2(Change__long* __this, ::app::Uno::UX::Property__long* target)
{
    ::app::Fuse::Animations::TrackAnimator___ObjInit_1(__this);

    if (target == NULL)
    {
        U_THROW(::app::Uno::ArgumentNullException__New_5(NULL, ::uGetConstString("target")));
    }

    __this->Target(target);

    if (__this->IsContinuous())
    {
        ::uObject* v;

        if ((::uType*)::app::Uno::Long__typeof() == (::uType*)::app::Uno::Float__typeof())
        {
            v = (::uObject*)::app::Fuse::Animations::ConverterFloat__Singleton;
        }
        else if ((::uType*)::app::Uno::Long__typeof() == (::uType*)::app::Uno::Float2__typeof())
        {
            v = (::uObject*)::app::Fuse::Animations::ConverterFloat2__Singleton;
        }
        else if ((::uType*)::app::Uno::Long__typeof() == (::uType*)::app::Uno::Float3__typeof())
        {
            v = (::uObject*)::app::Fuse::Animations::ConverterFloat3__Singleton;
        }
        else if ((::uType*)::app::Uno::Long__typeof() == (::uType*)::app::Uno::Float4__typeof())
        {
            v = (::uObject*)::app::Fuse::Animations::ConverterFloat4__Singleton;
        }
        else if ((::uType*)::app::Uno::Long__typeof() == (::uType*)::app::Uno::Double__typeof())
        {
            v = (::uObject*)::app::Fuse::Animations::ConverterDouble__Singleton;
        }
        else
        {
            U_THROW(::app::Uno::Exception__New_2(NULL, ::app::Uno::String__op_Addition_1(NULL, ::uGetConstString("Unsupported change type: "), (::uObject*)(::uType*)::app::Uno::Long__typeof())));
        }

        __this->ContinuousConverter = ::uCast< ::app::Fuse::Animations::Converter__long*>(v, ::app::Fuse::Animations::Converter__long__typeof());
    }
    else
    {
        __this->Mixer = ::app::Fuse::Animations::Mixer__get_DefaultDiscrete(NULL);
        __this->MarkDiscrete();
    }
}

::app::Fuse::Animations::AnimatorState* Change__long__CreateState(Change__long* __this, ::app::Fuse::Animations::CreateStateParams* p)
{
    if (__this->IsContinuous())
    {
        return (::app::Fuse::Animations::AnimatorState*)::app::Fuse::Animations::ContinuousTrackChangeState__long__New_1(NULL, __this, p);
    }

    return (::app::Fuse::Animations::AnimatorState*)::app::Fuse::Animations::DiscreteTrackChangeState__long__New_1(NULL, __this, p);
}

float Change__long__get_DegreesX(Change__long* __this)
{
    return ::app::Uno::Math__RadiansToDegrees_1(NULL, __this->X());
}

::app::Uno::Float2 Change__long__get_DegreesXY(Change__long* __this)
{
    return ::app::Uno::Float2__New_2(NULL, ::app::Uno::Math__RadiansToDegrees_1(NULL, __this->X()), ::app::Uno::Math__RadiansToDegrees_1(NULL, __this->Y()));
}

float Change__long__get_DegreesY(Change__long* __this)
{
    return ::app::Uno::Math__RadiansToDegrees_1(NULL, __this->Y());
}

float Change__long__get_DegreesZ(Change__long* __this)
{
    return ::app::Uno::Math__RadiansToDegrees_1(NULL, __this->Y());
}

bool Change__long__get_IsContinuous(Change__long* __this)
{
    return (((((::uType*)::app::Uno::Long__typeof() == (::uType*)::app::Uno::Float__typeof()) || ((::uType*)::app::Uno::Long__typeof() == (::uType*)::app::Uno::Float2__typeof())) || ((::uType*)::app::Uno::Long__typeof() == (::uType*)::app::Uno::Float3__typeof())) || ((::uType*)::app::Uno::Long__typeof() == (::uType*)::app::Uno::Float4__typeof())) || ((::uType*)::app::Uno::Long__typeof() == (::uType*)::app::Uno::Double__typeof());
}

::app::Uno::UX::Property__long* Change__long__get_Target(Change__long* __this)
{
    return __this->_Target;
}

::uLong Change__long__get_Value(Change__long* __this)
{
    return __this->IsContinuous() ? ::uPtr< ::app::Fuse::Animations::Converter__long*>(__this->ContinuousConverter)->Out(__this->_vectorValue) : ::uUnbox< ::uLong>(::app::Uno::Long__typeof(), __this->_objectValue);
}

float Change__long__get_X(Change__long* __this)
{
    return __this->_vectorValue.X;
}

::app::Uno::Float2 Change__long__get_XY(Change__long* __this)
{
    ::app::Uno::Float4 ind_123 = __this->_vectorValue;
    return ::app::Uno::Float2__New_2(NULL, ind_123.X, ind_123.Y);
}

float Change__long__get_Y(Change__long* __this)
{
    return __this->_vectorValue.Y;
}

float Change__long__get_Z(Change__long* __this)
{
    return __this->_vectorValue.Z;
}

Change__long* Change__long__New_1(::uStatic* __this, ::app::Uno::UX::Property__long* target)
{
    Change__long* inst = (Change__long*)::uAllocObject(sizeof(Change__long), Change__long__typeof());
    inst->_ObjInit_2(target);
    return inst;
}

void Change__long__set_DegreesX(Change__long* __this, float value)
{
    __this->X(::app::Uno::Math__DegreesToRadians_1(NULL, value));
}

void Change__long__set_DegreesXY(Change__long* __this, ::app::Uno::Float2 value)
{
    __this->XY(::app::Uno::Float2__New_2(NULL, ::app::Uno::Math__DegreesToRadians_1(NULL, value.X), ::app::Uno::Math__DegreesToRadians_1(NULL, value.Y)));
}

void Change__long__set_DegreesY(Change__long* __this, float value)
{
    __this->Y(::app::Uno::Math__DegreesToRadians_1(NULL, value));
}

void Change__long__set_DegreesZ(Change__long* __this, float value)
{
    __this->Y(::app::Uno::Math__DegreesToRadians_1(NULL, value));
}

void Change__long__set_Target(Change__long* __this, ::app::Uno::UX::Property__long* value)
{
    __this->_Target = value;
}

void Change__long__set_Value(Change__long* __this, ::uLong value)
{
    if (__this->IsContinuous())
    {
        __this->_vectorValue = ::uPtr< ::app::Fuse::Animations::Converter__long*>(__this->ContinuousConverter)->In(value);
    }
    else
    {
        __this->_objectValue = ::uBox< ::uLong>(::app::Uno::Long__typeof(), value);
    }
}

void Change__long__set_X(Change__long* __this, float value)
{
    __this->_vectorValue.X = value;
}

void Change__long__set_XY(Change__long* __this, ::app::Uno::Float2 value)
{
    __this->_vectorValue = ::app::Uno::Float4__New_6(NULL, value, __this->_vectorValue.Z, __this->_vectorValue.W);
}

void Change__long__set_Y(Change__long* __this, float value)
{
    __this->_vectorValue.Y = value;
}

void Change__long__set_Z(Change__long* __this, float value)
{
    __this->_vectorValue.Z = value;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Animations\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

Change__object__uType* Change__object__typeof()
{
    static ::uStaticStrong<Change__object__uType*> type;
    if (type != NULL) return type;

    type = (Change__object__uType*)::uAllocClassType(sizeof(Change__object__uType), "Fuse.Animations.Change<object>", false, 0, 2, 0);

    type->SetBaseType(::app::Fuse::Animations::TrackAnimator__typeof());
    type->__fp_CreateState = (::app::Fuse::Animations::AnimatorState*(*)(::app::Fuse::Animations::Animator*, ::app::Fuse::Animations::CreateStateParams*))Change__object__CreateState;

    type->SetStrongRefs(
        "_Target", offsetof(Change__object, _Target),
        "ContinuousConverter", offsetof(Change__object, ContinuousConverter));

    type->SetFields(1,
        ::uNewField("ContinuousConverter", NULL, offsetof(Change__object, ContinuousConverter), ::app::Fuse::Animations::Converter__object__typeof()));

    type->SetFunctions(22,
        ::uNewFunction("get_DegreesX", Change__object__get_DegreesX, 0, false, ::app::Uno::Float__typeof()),
        ::uNewFunction("get_DegreesXY", Change__object__get_DegreesXY, 0, false, ::app::Uno::Float2__typeof()),
        ::uNewFunction("get_DegreesY", Change__object__get_DegreesY, 0, false, ::app::Uno::Float__typeof()),
        ::uNewFunction("get_DegreesZ", Change__object__get_DegreesZ, 0, false, ::app::Uno::Float__typeof()),
        ::uNewFunction("get_IsContinuous", Change__object__get_IsContinuous, 0, false, ::app::Uno::Bool__typeof()),
        ::uNewFunction("get_Target", Change__object__get_Target, 0, false, ::app::Uno::UX::Property__object__typeof()),
        ::uNewFunction("get_Value", Change__object__get_Value, 0, false, ::uObject__typeof()),
        ::uNewFunction("get_X", Change__object__get_X, 0, false, ::app::Uno::Float__typeof()),
        ::uNewFunction("get_XY", Change__object__get_XY, 0, false, ::app::Uno::Float2__typeof()),
        ::uNewFunction("get_Y", Change__object__get_Y, 0, false, ::app::Uno::Float__typeof()),
        ::uNewFunction("get_Z", Change__object__get_Z, 0, false, ::app::Uno::Float__typeof()),
        ::uNewFunction(".ctor", Change__object__New_1, 0, true, Change__object__typeof(), ::app::Uno::UX::Property__object__typeof()),
        ::uNewFunctionVoid("set_DegreesX", Change__object__set_DegreesX, 0, false, ::app::Uno::Float__typeof()),
        ::uNewFunctionVoid("set_DegreesXY", Change__object__set_DegreesXY, 0, false, ::app::Uno::Float2__typeof()),
        ::uNewFunctionVoid("set_DegreesY", Change__object__set_DegreesY, 0, false, ::app::Uno::Float__typeof()),
        ::uNewFunctionVoid("set_DegreesZ", Change__object__set_DegreesZ, 0, false, ::app::Uno::Float__typeof()),
        ::uNewFunctionVoid("set_Target", Change__object__set_Target, 0, false, ::app::Uno::UX::Property__object__typeof()),
        ::uNewFunctionVoid("set_Value", Change__object__set_Value, 0, false, ::uObject__typeof()),
        ::uNewFunctionVoid("set_X", Change__object__set_X, 0, false, ::app::Uno::Float__typeof()),
        ::uNewFunctionVoid("set_XY", Change__object__set_XY, 0, false, ::app::Uno::Float2__typeof()),
        ::uNewFunctionVoid("set_Y", Change__object__set_Y, 0, false, ::app::Uno::Float__typeof()),
        ::uNewFunctionVoid("set_Z", Change__object__set_Z, 0, false, ::app::Uno::Float__typeof()));

    ::uRegisterType(type);
    return type;
}

void Change__object___ObjInit_2(Change__object* __this, ::app::Uno::UX::Property__object* target)
{
    ::app::Fuse::Animations::TrackAnimator___ObjInit_1(__this);

    if (target == NULL)
    {
        U_THROW(::app::Uno::ArgumentNullException__New_5(NULL, ::uGetConstString("target")));
    }

    __this->Target(target);

    if (__this->IsContinuous())
    {
        ::uObject* v;

        if ((::uType*)::uObject__typeof() == (::uType*)::app::Uno::Float__typeof())
        {
            v = (::uObject*)::app::Fuse::Animations::ConverterFloat__Singleton;
        }
        else if ((::uType*)::uObject__typeof() == (::uType*)::app::Uno::Float2__typeof())
        {
            v = (::uObject*)::app::Fuse::Animations::ConverterFloat2__Singleton;
        }
        else if ((::uType*)::uObject__typeof() == (::uType*)::app::Uno::Float3__typeof())
        {
            v = (::uObject*)::app::Fuse::Animations::ConverterFloat3__Singleton;
        }
        else if ((::uType*)::uObject__typeof() == (::uType*)::app::Uno::Float4__typeof())
        {
            v = (::uObject*)::app::Fuse::Animations::ConverterFloat4__Singleton;
        }
        else if ((::uType*)::uObject__typeof() == (::uType*)::app::Uno::Double__typeof())
        {
            v = (::uObject*)::app::Fuse::Animations::ConverterDouble__Singleton;
        }
        else
        {
            U_THROW(::app::Uno::Exception__New_2(NULL, ::app::Uno::String__op_Addition_1(NULL, ::uGetConstString("Unsupported change type: "), (::uObject*)(::uType*)::uObject__typeof())));
        }

        __this->ContinuousConverter = ::uCast< ::app::Fuse::Animations::Converter__object*>(v, ::app::Fuse::Animations::Converter__object__typeof());
    }
    else
    {
        __this->Mixer = ::app::Fuse::Animations::Mixer__get_DefaultDiscrete(NULL);
        __this->MarkDiscrete();
    }
}

::app::Fuse::Animations::AnimatorState* Change__object__CreateState(Change__object* __this, ::app::Fuse::Animations::CreateStateParams* p)
{
    if (__this->IsContinuous())
    {
        return (::app::Fuse::Animations::AnimatorState*)::app::Fuse::Animations::ContinuousTrackChangeState__object__New_1(NULL, __this, p);
    }

    return (::app::Fuse::Animations::AnimatorState*)::app::Fuse::Animations::DiscreteTrackChangeState__object__New_1(NULL, __this, p);
}

float Change__object__get_DegreesX(Change__object* __this)
{
    return ::app::Uno::Math__RadiansToDegrees_1(NULL, __this->X());
}

::app::Uno::Float2 Change__object__get_DegreesXY(Change__object* __this)
{
    return ::app::Uno::Float2__New_2(NULL, ::app::Uno::Math__RadiansToDegrees_1(NULL, __this->X()), ::app::Uno::Math__RadiansToDegrees_1(NULL, __this->Y()));
}

float Change__object__get_DegreesY(Change__object* __this)
{
    return ::app::Uno::Math__RadiansToDegrees_1(NULL, __this->Y());
}

float Change__object__get_DegreesZ(Change__object* __this)
{
    return ::app::Uno::Math__RadiansToDegrees_1(NULL, __this->Y());
}

bool Change__object__get_IsContinuous(Change__object* __this)
{
    return (((((::uType*)::uObject__typeof() == (::uType*)::app::Uno::Float__typeof()) || ((::uType*)::uObject__typeof() == (::uType*)::app::Uno::Float2__typeof())) || ((::uType*)::uObject__typeof() == (::uType*)::app::Uno::Float3__typeof())) || ((::uType*)::uObject__typeof() == (::uType*)::app::Uno::Float4__typeof())) || ((::uType*)::uObject__typeof() == (::uType*)::app::Uno::Double__typeof());
}

::app::Uno::UX::Property__object* Change__object__get_Target(Change__object* __this)
{
    return __this->_Target;
}

::uObject* Change__object__get_Value(Change__object* __this)
{
    return __this->IsContinuous() ? ::uPtr< ::app::Fuse::Animations::Converter__object*>(__this->ContinuousConverter)->Out(__this->_vectorValue) : __this->_objectValue;
}

float Change__object__get_X(Change__object* __this)
{
    return __this->_vectorValue.X;
}

::app::Uno::Float2 Change__object__get_XY(Change__object* __this)
{
    ::app::Uno::Float4 ind_123 = __this->_vectorValue;
    return ::app::Uno::Float2__New_2(NULL, ind_123.X, ind_123.Y);
}

float Change__object__get_Y(Change__object* __this)
{
    return __this->_vectorValue.Y;
}

float Change__object__get_Z(Change__object* __this)
{
    return __this->_vectorValue.Z;
}

Change__object* Change__object__New_1(::uStatic* __this, ::app::Uno::UX::Property__object* target)
{
    Change__object* inst = (Change__object*)::uAllocObject(sizeof(Change__object), Change__object__typeof());
    inst->_ObjInit_2(target);
    return inst;
}

void Change__object__set_DegreesX(Change__object* __this, float value)
{
    __this->X(::app::Uno::Math__DegreesToRadians_1(NULL, value));
}

void Change__object__set_DegreesXY(Change__object* __this, ::app::Uno::Float2 value)
{
    __this->XY(::app::Uno::Float2__New_2(NULL, ::app::Uno::Math__DegreesToRadians_1(NULL, value.X), ::app::Uno::Math__DegreesToRadians_1(NULL, value.Y)));
}

void Change__object__set_DegreesY(Change__object* __this, float value)
{
    __this->Y(::app::Uno::Math__DegreesToRadians_1(NULL, value));
}

void Change__object__set_DegreesZ(Change__object* __this, float value)
{
    __this->Y(::app::Uno::Math__DegreesToRadians_1(NULL, value));
}

void Change__object__set_Target(Change__object* __this, ::app::Uno::UX::Property__object* value)
{
    __this->_Target = value;
}

void Change__object__set_Value(Change__object* __this, ::uObject* value)
{
    if (__this->IsContinuous())
    {
        __this->_vectorValue = ::uPtr< ::app::Fuse::Animations::Converter__object*>(__this->ContinuousConverter)->In(value);
    }
    else
    {
        __this->_objectValue = value;
    }
}

void Change__object__set_X(Change__object* __this, float value)
{
    __this->_vectorValue.X = value;
}

void Change__object__set_XY(Change__object* __this, ::app::Uno::Float2 value)
{
    __this->_vectorValue = ::app::Uno::Float4__New_6(NULL, value, __this->_vectorValue.Z, __this->_vectorValue.W);
}

void Change__object__set_Y(Change__object* __this, float value)
{
    __this->_vectorValue.Y = value;
}

void Change__object__set_Z(Change__object* __this, float value)
{
    __this->_vectorValue.Z = value;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Animations\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

Change__short__uType* Change__short__typeof()
{
    static ::uStaticStrong<Change__short__uType*> type;
    if (type != NULL) return type;

    type = (Change__short__uType*)::uAllocClassType(sizeof(Change__short__uType), "Fuse.Animations.Change<short>", false, 0, 2, 0);

    type->SetBaseType(::app::Fuse::Animations::TrackAnimator__typeof());
    type->__fp_CreateState = (::app::Fuse::Animations::AnimatorState*(*)(::app::Fuse::Animations::Animator*, ::app::Fuse::Animations::CreateStateParams*))Change__short__CreateState;

    type->SetStrongRefs(
        "_Target", offsetof(Change__short, _Target),
        "ContinuousConverter", offsetof(Change__short, ContinuousConverter));

    type->SetFields(1,
        ::uNewField("ContinuousConverter", NULL, offsetof(Change__short, ContinuousConverter), ::app::Fuse::Animations::Converter__short__typeof()));

    type->SetFunctions(22,
        ::uNewFunction("get_DegreesX", Change__short__get_DegreesX, 0, false, ::app::Uno::Float__typeof()),
        ::uNewFunction("get_DegreesXY", Change__short__get_DegreesXY, 0, false, ::app::Uno::Float2__typeof()),
        ::uNewFunction("get_DegreesY", Change__short__get_DegreesY, 0, false, ::app::Uno::Float__typeof()),
        ::uNewFunction("get_DegreesZ", Change__short__get_DegreesZ, 0, false, ::app::Uno::Float__typeof()),
        ::uNewFunction("get_IsContinuous", Change__short__get_IsContinuous, 0, false, ::app::Uno::Bool__typeof()),
        ::uNewFunction("get_Target", Change__short__get_Target, 0, false, ::app::Uno::UX::Property__short__typeof()),
        ::uNewFunction("get_Value", Change__short__get_Value, 0, false, ::app::Uno::Short__typeof()),
        ::uNewFunction("get_X", Change__short__get_X, 0, false, ::app::Uno::Float__typeof()),
        ::uNewFunction("get_XY", Change__short__get_XY, 0, false, ::app::Uno::Float2__typeof()),
        ::uNewFunction("get_Y", Change__short__get_Y, 0, false, ::app::Uno::Float__typeof()),
        ::uNewFunction("get_Z", Change__short__get_Z, 0, false, ::app::Uno::Float__typeof()),
        ::uNewFunction(".ctor", Change__short__New_1, 0, true, Change__short__typeof(), ::app::Uno::UX::Property__short__typeof()),
        ::uNewFunctionVoid("set_DegreesX", Change__short__set_DegreesX, 0, false, ::app::Uno::Float__typeof()),
        ::uNewFunctionVoid("set_DegreesXY", Change__short__set_DegreesXY, 0, false, ::app::Uno::Float2__typeof()),
        ::uNewFunctionVoid("set_DegreesY", Change__short__set_DegreesY, 0, false, ::app::Uno::Float__typeof()),
        ::uNewFunctionVoid("set_DegreesZ", Change__short__set_DegreesZ, 0, false, ::app::Uno::Float__typeof()),
        ::uNewFunctionVoid("set_Target", Change__short__set_Target, 0, false, ::app::Uno::UX::Property__short__typeof()),
        ::uNewFunctionVoid("set_Value", Change__short__set_Value, 0, false, ::app::Uno::Short__typeof()),
        ::uNewFunctionVoid("set_X", Change__short__set_X, 0, false, ::app::Uno::Float__typeof()),
        ::uNewFunctionVoid("set_XY", Change__short__set_XY, 0, false, ::app::Uno::Float2__typeof()),
        ::uNewFunctionVoid("set_Y", Change__short__set_Y, 0, false, ::app::Uno::Float__typeof()),
        ::uNewFunctionVoid("set_Z", Change__short__set_Z, 0, false, ::app::Uno::Float__typeof()));

    ::uRegisterType(type);
    return type;
}

void Change__short___ObjInit_2(Change__short* __this, ::app::Uno::UX::Property__short* target)
{
    ::app::Fuse::Animations::TrackAnimator___ObjInit_1(__this);

    if (target == NULL)
    {
        U_THROW(::app::Uno::ArgumentNullException__New_5(NULL, ::uGetConstString("target")));
    }

    __this->Target(target);

    if (__this->IsContinuous())
    {
        ::uObject* v;

        if ((::uType*)::app::Uno::Short__typeof() == (::uType*)::app::Uno::Float__typeof())
        {
            v = (::uObject*)::app::Fuse::Animations::ConverterFloat__Singleton;
        }
        else if ((::uType*)::app::Uno::Short__typeof() == (::uType*)::app::Uno::Float2__typeof())
        {
            v = (::uObject*)::app::Fuse::Animations::ConverterFloat2__Singleton;
        }
        else if ((::uType*)::app::Uno::Short__typeof() == (::uType*)::app::Uno::Float3__typeof())
        {
            v = (::uObject*)::app::Fuse::Animations::ConverterFloat3__Singleton;
        }
        else if ((::uType*)::app::Uno::Short__typeof() == (::uType*)::app::Uno::Float4__typeof())
        {
            v = (::uObject*)::app::Fuse::Animations::ConverterFloat4__Singleton;
        }
        else if ((::uType*)::app::Uno::Short__typeof() == (::uType*)::app::Uno::Double__typeof())
        {
            v = (::uObject*)::app::Fuse::Animations::ConverterDouble__Singleton;
        }
        else
        {
            U_THROW(::app::Uno::Exception__New_2(NULL, ::app::Uno::String__op_Addition_1(NULL, ::uGetConstString("Unsupported change type: "), (::uObject*)(::uType*)::app::Uno::Short__typeof())));
        }

        __this->ContinuousConverter = ::uCast< ::app::Fuse::Animations::Converter__short*>(v, ::app::Fuse::Animations::Converter__short__typeof());
    }
    else
    {
        __this->Mixer = ::app::Fuse::Animations::Mixer__get_DefaultDiscrete(NULL);
        __this->MarkDiscrete();
    }
}

::app::Fuse::Animations::AnimatorState* Change__short__CreateState(Change__short* __this, ::app::Fuse::Animations::CreateStateParams* p)
{
    if (__this->IsContinuous())
    {
        return (::app::Fuse::Animations::AnimatorState*)::app::Fuse::Animations::ContinuousTrackChangeState__short__New_1(NULL, __this, p);
    }

    return (::app::Fuse::Animations::AnimatorState*)::app::Fuse::Animations::DiscreteTrackChangeState__short__New_1(NULL, __this, p);
}

float Change__short__get_DegreesX(Change__short* __this)
{
    return ::app::Uno::Math__RadiansToDegrees_1(NULL, __this->X());
}

::app::Uno::Float2 Change__short__get_DegreesXY(Change__short* __this)
{
    return ::app::Uno::Float2__New_2(NULL, ::app::Uno::Math__RadiansToDegrees_1(NULL, __this->X()), ::app::Uno::Math__RadiansToDegrees_1(NULL, __this->Y()));
}

float Change__short__get_DegreesY(Change__short* __this)
{
    return ::app::Uno::Math__RadiansToDegrees_1(NULL, __this->Y());
}

float Change__short__get_DegreesZ(Change__short* __this)
{
    return ::app::Uno::Math__RadiansToDegrees_1(NULL, __this->Y());
}

bool Change__short__get_IsContinuous(Change__short* __this)
{
    return (((((::uType*)::app::Uno::Short__typeof() == (::uType*)::app::Uno::Float__typeof()) || ((::uType*)::app::Uno::Short__typeof() == (::uType*)::app::Uno::Float2__typeof())) || ((::uType*)::app::Uno::Short__typeof() == (::uType*)::app::Uno::Float3__typeof())) || ((::uType*)::app::Uno::Short__typeof() == (::uType*)::app::Uno::Float4__typeof())) || ((::uType*)::app::Uno::Short__typeof() == (::uType*)::app::Uno::Double__typeof());
}

::app::Uno::UX::Property__short* Change__short__get_Target(Change__short* __this)
{
    return __this->_Target;
}

::uShort Change__short__get_Value(Change__short* __this)
{
    return __this->IsContinuous() ? ::uPtr< ::app::Fuse::Animations::Converter__short*>(__this->ContinuousConverter)->Out(__this->_vectorValue) : ::uUnbox< ::uShort>(::app::Uno::Short__typeof(), __this->_objectValue);
}

float Change__short__get_X(Change__short* __this)
{
    return __this->_vectorValue.X;
}

::app::Uno::Float2 Change__short__get_XY(Change__short* __this)
{
    ::app::Uno::Float4 ind_123 = __this->_vectorValue;
    return ::app::Uno::Float2__New_2(NULL, ind_123.X, ind_123.Y);
}

float Change__short__get_Y(Change__short* __this)
{
    return __this->_vectorValue.Y;
}

float Change__short__get_Z(Change__short* __this)
{
    return __this->_vectorValue.Z;
}

Change__short* Change__short__New_1(::uStatic* __this, ::app::Uno::UX::Property__short* target)
{
    Change__short* inst = (Change__short*)::uAllocObject(sizeof(Change__short), Change__short__typeof());
    inst->_ObjInit_2(target);
    return inst;
}

void Change__short__set_DegreesX(Change__short* __this, float value)
{
    __this->X(::app::Uno::Math__DegreesToRadians_1(NULL, value));
}

void Change__short__set_DegreesXY(Change__short* __this, ::app::Uno::Float2 value)
{
    __this->XY(::app::Uno::Float2__New_2(NULL, ::app::Uno::Math__DegreesToRadians_1(NULL, value.X), ::app::Uno::Math__DegreesToRadians_1(NULL, value.Y)));
}

void Change__short__set_DegreesY(Change__short* __this, float value)
{
    __this->Y(::app::Uno::Math__DegreesToRadians_1(NULL, value));
}

void Change__short__set_DegreesZ(Change__short* __this, float value)
{
    __this->Y(::app::Uno::Math__DegreesToRadians_1(NULL, value));
}

void Change__short__set_Target(Change__short* __this, ::app::Uno::UX::Property__short* value)
{
    __this->_Target = value;
}

void Change__short__set_Value(Change__short* __this, ::uShort value)
{
    if (__this->IsContinuous())
    {
        __this->_vectorValue = ::uPtr< ::app::Fuse::Animations::Converter__short*>(__this->ContinuousConverter)->In(value);
    }
    else
    {
        __this->_objectValue = ::uBox< ::uShort>(::app::Uno::Short__typeof(), value);
    }
}

void Change__short__set_X(Change__short* __this, float value)
{
    __this->_vectorValue.X = value;
}

void Change__short__set_XY(Change__short* __this, ::app::Uno::Float2 value)
{
    __this->_vectorValue = ::app::Uno::Float4__New_6(NULL, value, __this->_vectorValue.Z, __this->_vectorValue.W);
}

void Change__short__set_Y(Change__short* __this, float value)
{
    __this->_vectorValue.Y = value;
}

void Change__short__set_Z(Change__short* __this, float value)
{
    __this->_vectorValue.Z = value;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Animations\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

Change__string__uType* Change__string__typeof()
{
    static ::uStaticStrong<Change__string__uType*> type;
    if (type != NULL) return type;

    type = (Change__string__uType*)::uAllocClassType(sizeof(Change__string__uType), "Fuse.Animations.Change<string>", false, 0, 2, 0);

    type->SetBaseType(::app::Fuse::Animations::TrackAnimator__typeof());
    type->__fp_CreateState = (::app::Fuse::Animations::AnimatorState*(*)(::app::Fuse::Animations::Animator*, ::app::Fuse::Animations::CreateStateParams*))Change__string__CreateState;

    type->SetStrongRefs(
        "_Target", offsetof(Change__string, _Target),
        "ContinuousConverter", offsetof(Change__string, ContinuousConverter));

    type->SetFields(1,
        ::uNewField("ContinuousConverter", NULL, offsetof(Change__string, ContinuousConverter), ::app::Fuse::Animations::Converter__string__typeof()));

    type->SetFunctions(22,
        ::uNewFunction("get_DegreesX", Change__string__get_DegreesX, 0, false, ::app::Uno::Float__typeof()),
        ::uNewFunction("get_DegreesXY", Change__string__get_DegreesXY, 0, false, ::app::Uno::Float2__typeof()),
        ::uNewFunction("get_DegreesY", Change__string__get_DegreesY, 0, false, ::app::Uno::Float__typeof()),
        ::uNewFunction("get_DegreesZ", Change__string__get_DegreesZ, 0, false, ::app::Uno::Float__typeof()),
        ::uNewFunction("get_IsContinuous", Change__string__get_IsContinuous, 0, false, ::app::Uno::Bool__typeof()),
        ::uNewFunction("get_Target", Change__string__get_Target, 0, false, ::app::Uno::UX::Property__string__typeof()),
        ::uNewFunction("get_Value", Change__string__get_Value, 0, false, ::app::Uno::String__typeof()),
        ::uNewFunction("get_X", Change__string__get_X, 0, false, ::app::Uno::Float__typeof()),
        ::uNewFunction("get_XY", Change__string__get_XY, 0, false, ::app::Uno::Float2__typeof()),
        ::uNewFunction("get_Y", Change__string__get_Y, 0, false, ::app::Uno::Float__typeof()),
        ::uNewFunction("get_Z", Change__string__get_Z, 0, false, ::app::Uno::Float__typeof()),
        ::uNewFunction(".ctor", Change__string__New_1, 0, true, Change__string__typeof(), ::app::Uno::UX::Property__string__typeof()),
        ::uNewFunctionVoid("set_DegreesX", Change__string__set_DegreesX, 0, false, ::app::Uno::Float__typeof()),
        ::uNewFunctionVoid("set_DegreesXY", Change__string__set_DegreesXY, 0, false, ::app::Uno::Float2__typeof()),
        ::uNewFunctionVoid("set_DegreesY", Change__string__set_DegreesY, 0, false, ::app::Uno::Float__typeof()),
        ::uNewFunctionVoid("set_DegreesZ", Change__string__set_DegreesZ, 0, false, ::app::Uno::Float__typeof()),
        ::uNewFunctionVoid("set_Target", Change__string__set_Target, 0, false, ::app::Uno::UX::Property__string__typeof()),
        ::uNewFunctionVoid("set_Value", Change__string__set_Value, 0, false, ::app::Uno::String__typeof()),
        ::uNewFunctionVoid("set_X", Change__string__set_X, 0, false, ::app::Uno::Float__typeof()),
        ::uNewFunctionVoid("set_XY", Change__string__set_XY, 0, false, ::app::Uno::Float2__typeof()),
        ::uNewFunctionVoid("set_Y", Change__string__set_Y, 0, false, ::app::Uno::Float__typeof()),
        ::uNewFunctionVoid("set_Z", Change__string__set_Z, 0, false, ::app::Uno::Float__typeof()));

    ::uRegisterType(type);
    return type;
}

void Change__string___ObjInit_2(Change__string* __this, ::app::Uno::UX::Property__string* target)
{
    ::app::Fuse::Animations::TrackAnimator___ObjInit_1(__this);

    if (target == NULL)
    {
        U_THROW(::app::Uno::ArgumentNullException__New_5(NULL, ::uGetConstString("target")));
    }

    __this->Target(target);

    if (__this->IsContinuous())
    {
        ::uObject* v;

        if ((::uType*)::app::Uno::String__typeof() == (::uType*)::app::Uno::Float__typeof())
        {
            v = (::uObject*)::app::Fuse::Animations::ConverterFloat__Singleton;
        }
        else if ((::uType*)::app::Uno::String__typeof() == (::uType*)::app::Uno::Float2__typeof())
        {
            v = (::uObject*)::app::Fuse::Animations::ConverterFloat2__Singleton;
        }
        else if ((::uType*)::app::Uno::String__typeof() == (::uType*)::app::Uno::Float3__typeof())
        {
            v = (::uObject*)::app::Fuse::Animations::ConverterFloat3__Singleton;
        }
        else if ((::uType*)::app::Uno::String__typeof() == (::uType*)::app::Uno::Float4__typeof())
        {
            v = (::uObject*)::app::Fuse::Animations::ConverterFloat4__Singleton;
        }
        else if ((::uType*)::app::Uno::String__typeof() == (::uType*)::app::Uno::Double__typeof())
        {
            v = (::uObject*)::app::Fuse::Animations::ConverterDouble__Singleton;
        }
        else
        {
            U_THROW(::app::Uno::Exception__New_2(NULL, ::app::Uno::String__op_Addition_1(NULL, ::uGetConstString("Unsupported change type: "), (::uObject*)(::uType*)::app::Uno::String__typeof())));
        }

        __this->ContinuousConverter = ::uCast< ::app::Fuse::Animations::Converter__string*>(v, ::app::Fuse::Animations::Converter__string__typeof());
    }
    else
    {
        __this->Mixer = ::app::Fuse::Animations::Mixer__get_DefaultDiscrete(NULL);
        __this->MarkDiscrete();
    }
}

::app::Fuse::Animations::AnimatorState* Change__string__CreateState(Change__string* __this, ::app::Fuse::Animations::CreateStateParams* p)
{
    if (__this->IsContinuous())
    {
        return (::app::Fuse::Animations::AnimatorState*)::app::Fuse::Animations::ContinuousTrackChangeState__string__New_1(NULL, __this, p);
    }

    return (::app::Fuse::Animations::AnimatorState*)::app::Fuse::Animations::DiscreteTrackChangeState__string__New_1(NULL, __this, p);
}

float Change__string__get_DegreesX(Change__string* __this)
{
    return ::app::Uno::Math__RadiansToDegrees_1(NULL, __this->X());
}

::app::Uno::Float2 Change__string__get_DegreesXY(Change__string* __this)
{
    return ::app::Uno::Float2__New_2(NULL, ::app::Uno::Math__RadiansToDegrees_1(NULL, __this->X()), ::app::Uno::Math__RadiansToDegrees_1(NULL, __this->Y()));
}

float Change__string__get_DegreesY(Change__string* __this)
{
    return ::app::Uno::Math__RadiansToDegrees_1(NULL, __this->Y());
}

float Change__string__get_DegreesZ(Change__string* __this)
{
    return ::app::Uno::Math__RadiansToDegrees_1(NULL, __this->Y());
}

bool Change__string__get_IsContinuous(Change__string* __this)
{
    return (((((::uType*)::app::Uno::String__typeof() == (::uType*)::app::Uno::Float__typeof()) || ((::uType*)::app::Uno::String__typeof() == (::uType*)::app::Uno::Float2__typeof())) || ((::uType*)::app::Uno::String__typeof() == (::uType*)::app::Uno::Float3__typeof())) || ((::uType*)::app::Uno::String__typeof() == (::uType*)::app::Uno::Float4__typeof())) || ((::uType*)::app::Uno::String__typeof() == (::uType*)::app::Uno::Double__typeof());
}

::app::Uno::UX::Property__string* Change__string__get_Target(Change__string* __this)
{
    return __this->_Target;
}

::uString* Change__string__get_Value(Change__string* __this)
{
    return __this->IsContinuous() ? ::uPtr< ::app::Fuse::Animations::Converter__string*>(__this->ContinuousConverter)->Out(__this->_vectorValue) : ::uCast< ::uString*>(__this->_objectValue, ::app::Uno::String__typeof());
}

float Change__string__get_X(Change__string* __this)
{
    return __this->_vectorValue.X;
}

::app::Uno::Float2 Change__string__get_XY(Change__string* __this)
{
    ::app::Uno::Float4 ind_123 = __this->_vectorValue;
    return ::app::Uno::Float2__New_2(NULL, ind_123.X, ind_123.Y);
}

float Change__string__get_Y(Change__string* __this)
{
    return __this->_vectorValue.Y;
}

float Change__string__get_Z(Change__string* __this)
{
    return __this->_vectorValue.Z;
}

Change__string* Change__string__New_1(::uStatic* __this, ::app::Uno::UX::Property__string* target)
{
    Change__string* inst = (Change__string*)::uAllocObject(sizeof(Change__string), Change__string__typeof());
    inst->_ObjInit_2(target);
    return inst;
}

void Change__string__set_DegreesX(Change__string* __this, float value)
{
    __this->X(::app::Uno::Math__DegreesToRadians_1(NULL, value));
}

void Change__string__set_DegreesXY(Change__string* __this, ::app::Uno::Float2 value)
{
    __this->XY(::app::Uno::Float2__New_2(NULL, ::app::Uno::Math__DegreesToRadians_1(NULL, value.X), ::app::Uno::Math__DegreesToRadians_1(NULL, value.Y)));
}

void Change__string__set_DegreesY(Change__string* __this, float value)
{
    __this->Y(::app::Uno::Math__DegreesToRadians_1(NULL, value));
}

void Change__string__set_DegreesZ(Change__string* __this, float value)
{
    __this->Y(::app::Uno::Math__DegreesToRadians_1(NULL, value));
}

void Change__string__set_Target(Change__string* __this, ::app::Uno::UX::Property__string* value)
{
    __this->_Target = value;
}

void Change__string__set_Value(Change__string* __this, ::uString* value)
{
    if (__this->IsContinuous())
    {
        __this->_vectorValue = ::uPtr< ::app::Fuse::Animations::Converter__string*>(__this->ContinuousConverter)->In(value);
    }
    else
    {
        __this->_objectValue = (::uObject*)value;
    }
}

void Change__string__set_X(Change__string* __this, float value)
{
    __this->_vectorValue.X = value;
}

void Change__string__set_XY(Change__string* __this, ::app::Uno::Float2 value)
{
    __this->_vectorValue = ::app::Uno::Float4__New_6(NULL, value, __this->_vectorValue.Z, __this->_vectorValue.W);
}

void Change__string__set_Y(Change__string* __this, float value)
{
    __this->_vectorValue.Y = value;
}

void Change__string__set_Z(Change__string* __this, float value)
{
    __this->_vectorValue.Z = value;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Animations\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

Change__Uno_EventArgs__uType* Change__Uno_EventArgs__typeof()
{
    static ::uStaticStrong<Change__Uno_EventArgs__uType*> type;
    if (type != NULL) return type;

    type = (Change__Uno_EventArgs__uType*)::uAllocClassType(sizeof(Change__Uno_EventArgs__uType), "Fuse.Animations.Change<Uno.EventArgs>", false, 0, 2, 0);

    type->SetBaseType(::app::Fuse::Animations::TrackAnimator__typeof());
    type->__fp_CreateState = (::app::Fuse::Animations::AnimatorState*(*)(::app::Fuse::Animations::Animator*, ::app::Fuse::Animations::CreateStateParams*))Change__Uno_EventArgs__CreateState;

    type->SetStrongRefs(
        "_Target", offsetof(Change__Uno_EventArgs, _Target),
        "ContinuousConverter", offsetof(Change__Uno_EventArgs, ContinuousConverter));

    type->SetFields(1,
        ::uNewField("ContinuousConverter", NULL, offsetof(Change__Uno_EventArgs, ContinuousConverter), ::app::Fuse::Animations::Converter__Uno_EventArgs__typeof()));

    type->SetFunctions(22,
        ::uNewFunction("get_DegreesX", Change__Uno_EventArgs__get_DegreesX, 0, false, ::app::Uno::Float__typeof()),
        ::uNewFunction("get_DegreesXY", Change__Uno_EventArgs__get_DegreesXY, 0, false, ::app::Uno::Float2__typeof()),
        ::uNewFunction("get_DegreesY", Change__Uno_EventArgs__get_DegreesY, 0, false, ::app::Uno::Float__typeof()),
        ::uNewFunction("get_DegreesZ", Change__Uno_EventArgs__get_DegreesZ, 0, false, ::app::Uno::Float__typeof()),
        ::uNewFunction("get_IsContinuous", Change__Uno_EventArgs__get_IsContinuous, 0, false, ::app::Uno::Bool__typeof()),
        ::uNewFunction("get_Target", Change__Uno_EventArgs__get_Target, 0, false, ::app::Uno::UX::Property__Uno_EventArgs__typeof()),
        ::uNewFunction("get_Value", Change__Uno_EventArgs__get_Value, 0, false, ::app::Uno::EventArgs__typeof()),
        ::uNewFunction("get_X", Change__Uno_EventArgs__get_X, 0, false, ::app::Uno::Float__typeof()),
        ::uNewFunction("get_XY", Change__Uno_EventArgs__get_XY, 0, false, ::app::Uno::Float2__typeof()),
        ::uNewFunction("get_Y", Change__Uno_EventArgs__get_Y, 0, false, ::app::Uno::Float__typeof()),
        ::uNewFunction("get_Z", Change__Uno_EventArgs__get_Z, 0, false, ::app::Uno::Float__typeof()),
        ::uNewFunction(".ctor", Change__Uno_EventArgs__New_1, 0, true, Change__Uno_EventArgs__typeof(), ::app::Uno::UX::Property__Uno_EventArgs__typeof()),
        ::uNewFunctionVoid("set_DegreesX", Change__Uno_EventArgs__set_DegreesX, 0, false, ::app::Uno::Float__typeof()),
        ::uNewFunctionVoid("set_DegreesXY", Change__Uno_EventArgs__set_DegreesXY, 0, false, ::app::Uno::Float2__typeof()),
        ::uNewFunctionVoid("set_DegreesY", Change__Uno_EventArgs__set_DegreesY, 0, false, ::app::Uno::Float__typeof()),
        ::uNewFunctionVoid("set_DegreesZ", Change__Uno_EventArgs__set_DegreesZ, 0, false, ::app::Uno::Float__typeof()),
        ::uNewFunctionVoid("set_Target", Change__Uno_EventArgs__set_Target, 0, false, ::app::Uno::UX::Property__Uno_EventArgs__typeof()),
        ::uNewFunctionVoid("set_Value", Change__Uno_EventArgs__set_Value, 0, false, ::app::Uno::EventArgs__typeof()),
        ::uNewFunctionVoid("set_X", Change__Uno_EventArgs__set_X, 0, false, ::app::Uno::Float__typeof()),
        ::uNewFunctionVoid("set_XY", Change__Uno_EventArgs__set_XY, 0, false, ::app::Uno::Float2__typeof()),
        ::uNewFunctionVoid("set_Y", Change__Uno_EventArgs__set_Y, 0, false, ::app::Uno::Float__typeof()),
        ::uNewFunctionVoid("set_Z", Change__Uno_EventArgs__set_Z, 0, false, ::app::Uno::Float__typeof()));

    ::uRegisterType(type);
    return type;
}

void Change__Uno_EventArgs___ObjInit_2(Change__Uno_EventArgs* __this, ::app::Uno::UX::Property__Uno_EventArgs* target)
{
    ::app::Fuse::Animations::TrackAnimator___ObjInit_1(__this);

    if (target == NULL)
    {
        U_THROW(::app::Uno::ArgumentNullException__New_5(NULL, ::uGetConstString("target")));
    }

    __this->Target(target);

    if (__this->IsContinuous())
    {
        ::uObject* v;

        if ((::uType*)::app::Uno::EventArgs__typeof() == (::uType*)::app::Uno::Float__typeof())
        {
            v = (::uObject*)::app::Fuse::Animations::ConverterFloat__Singleton;
        }
        else if ((::uType*)::app::Uno::EventArgs__typeof() == (::uType*)::app::Uno::Float2__typeof())
        {
            v = (::uObject*)::app::Fuse::Animations::ConverterFloat2__Singleton;
        }
        else if ((::uType*)::app::Uno::EventArgs__typeof() == (::uType*)::app::Uno::Float3__typeof())
        {
            v = (::uObject*)::app::Fuse::Animations::ConverterFloat3__Singleton;
        }
        else if ((::uType*)::app::Uno::EventArgs__typeof() == (::uType*)::app::Uno::Float4__typeof())
        {
            v = (::uObject*)::app::Fuse::Animations::ConverterFloat4__Singleton;
        }
        else if ((::uType*)::app::Uno::EventArgs__typeof() == (::uType*)::app::Uno::Double__typeof())
        {
            v = (::uObject*)::app::Fuse::Animations::ConverterDouble__Singleton;
        }
        else
        {
            U_THROW(::app::Uno::Exception__New_2(NULL, ::app::Uno::String__op_Addition_1(NULL, ::uGetConstString("Unsupported change type: "), (::uObject*)(::uType*)::app::Uno::EventArgs__typeof())));
        }

        __this->ContinuousConverter = ::uCast< ::app::Fuse::Animations::Converter__Uno_EventArgs*>(v, ::app::Fuse::Animations::Converter__Uno_EventArgs__typeof());
    }
    else
    {
        __this->Mixer = ::app::Fuse::Animations::Mixer__get_DefaultDiscrete(NULL);
        __this->MarkDiscrete();
    }
}

::app::Fuse::Animations::AnimatorState* Change__Uno_EventArgs__CreateState(Change__Uno_EventArgs* __this, ::app::Fuse::Animations::CreateStateParams* p)
{
    if (__this->IsContinuous())
    {
        return (::app::Fuse::Animations::AnimatorState*)::app::Fuse::Animations::ContinuousTrackChangeState__Uno_EventArgs__New_1(NULL, __this, p);
    }

    return (::app::Fuse::Animations::AnimatorState*)::app::Fuse::Animations::DiscreteTrackChangeState__Uno_EventArgs__New_1(NULL, __this, p);
}

float Change__Uno_EventArgs__get_DegreesX(Change__Uno_EventArgs* __this)
{
    return ::app::Uno::Math__RadiansToDegrees_1(NULL, __this->X());
}

::app::Uno::Float2 Change__Uno_EventArgs__get_DegreesXY(Change__Uno_EventArgs* __this)
{
    return ::app::Uno::Float2__New_2(NULL, ::app::Uno::Math__RadiansToDegrees_1(NULL, __this->X()), ::app::Uno::Math__RadiansToDegrees_1(NULL, __this->Y()));
}

float Change__Uno_EventArgs__get_DegreesY(Change__Uno_EventArgs* __this)
{
    return ::app::Uno::Math__RadiansToDegrees_1(NULL, __this->Y());
}

float Change__Uno_EventArgs__get_DegreesZ(Change__Uno_EventArgs* __this)
{
    return ::app::Uno::Math__RadiansToDegrees_1(NULL, __this->Y());
}

bool Change__Uno_EventArgs__get_IsContinuous(Change__Uno_EventArgs* __this)
{
    return (((((::uType*)::app::Uno::EventArgs__typeof() == (::uType*)::app::Uno::Float__typeof()) || ((::uType*)::app::Uno::EventArgs__typeof() == (::uType*)::app::Uno::Float2__typeof())) || ((::uType*)::app::Uno::EventArgs__typeof() == (::uType*)::app::Uno::Float3__typeof())) || ((::uType*)::app::Uno::EventArgs__typeof() == (::uType*)::app::Uno::Float4__typeof())) || ((::uType*)::app::Uno::EventArgs__typeof() == (::uType*)::app::Uno::Double__typeof());
}

::app::Uno::UX::Property__Uno_EventArgs* Change__Uno_EventArgs__get_Target(Change__Uno_EventArgs* __this)
{
    return __this->_Target;
}

::app::Uno::EventArgs* Change__Uno_EventArgs__get_Value(Change__Uno_EventArgs* __this)
{
    return __this->IsContinuous() ? ::uPtr< ::app::Fuse::Animations::Converter__Uno_EventArgs*>(__this->ContinuousConverter)->Out(__this->_vectorValue) : ::uCast< ::app::Uno::EventArgs*>(__this->_objectValue, ::app::Uno::EventArgs__typeof());
}

float Change__Uno_EventArgs__get_X(Change__Uno_EventArgs* __this)
{
    return __this->_vectorValue.X;
}

::app::Uno::Float2 Change__Uno_EventArgs__get_XY(Change__Uno_EventArgs* __this)
{
    ::app::Uno::Float4 ind_123 = __this->_vectorValue;
    return ::app::Uno::Float2__New_2(NULL, ind_123.X, ind_123.Y);
}

float Change__Uno_EventArgs__get_Y(Change__Uno_EventArgs* __this)
{
    return __this->_vectorValue.Y;
}

float Change__Uno_EventArgs__get_Z(Change__Uno_EventArgs* __this)
{
    return __this->_vectorValue.Z;
}

Change__Uno_EventArgs* Change__Uno_EventArgs__New_1(::uStatic* __this, ::app::Uno::UX::Property__Uno_EventArgs* target)
{
    Change__Uno_EventArgs* inst = (Change__Uno_EventArgs*)::uAllocObject(sizeof(Change__Uno_EventArgs), Change__Uno_EventArgs__typeof());
    inst->_ObjInit_2(target);
    return inst;
}

void Change__Uno_EventArgs__set_DegreesX(Change__Uno_EventArgs* __this, float value)
{
    __this->X(::app::Uno::Math__DegreesToRadians_1(NULL, value));
}

void Change__Uno_EventArgs__set_DegreesXY(Change__Uno_EventArgs* __this, ::app::Uno::Float2 value)
{
    __this->XY(::app::Uno::Float2__New_2(NULL, ::app::Uno::Math__DegreesToRadians_1(NULL, value.X), ::app::Uno::Math__DegreesToRadians_1(NULL, value.Y)));
}

void Change__Uno_EventArgs__set_DegreesY(Change__Uno_EventArgs* __this, float value)
{
    __this->Y(::app::Uno::Math__DegreesToRadians_1(NULL, value));
}

void Change__Uno_EventArgs__set_DegreesZ(Change__Uno_EventArgs* __this, float value)
{
    __this->Y(::app::Uno::Math__DegreesToRadians_1(NULL, value));
}

void Change__Uno_EventArgs__set_Target(Change__Uno_EventArgs* __this, ::app::Uno::UX::Property__Uno_EventArgs* value)
{
    __this->_Target = value;
}

void Change__Uno_EventArgs__set_Value(Change__Uno_EventArgs* __this, ::app::Uno::EventArgs* value)
{
    if (__this->IsContinuous())
    {
        __this->_vectorValue = ::uPtr< ::app::Fuse::Animations::Converter__Uno_EventArgs*>(__this->ContinuousConverter)->In(value);
    }
    else
    {
        __this->_objectValue = (::uObject*)value;
    }
}

void Change__Uno_EventArgs__set_X(Change__Uno_EventArgs* __this, float value)
{
    __this->_vectorValue.X = value;
}

void Change__Uno_EventArgs__set_XY(Change__Uno_EventArgs* __this, ::app::Uno::Float2 value)
{
    __this->_vectorValue = ::app::Uno::Float4__New_6(NULL, value, __this->_vectorValue.Z, __this->_vectorValue.W);
}

void Change__Uno_EventArgs__set_Y(Change__Uno_EventArgs* __this, float value)
{
    __this->_vectorValue.Y = value;
}

void Change__Uno_EventArgs__set_Z(Change__Uno_EventArgs* __this, float value)
{
    __this->_vectorValue.Z = value;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Animations\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

Change__Uno_Platform_iOS_StatusBarStyle__uType* Change__Uno_Platform_iOS_StatusBarStyle__typeof()
{
    static ::uStaticStrong<Change__Uno_Platform_iOS_StatusBarStyle__uType*> type;
    if (type != NULL) return type;

    type = (Change__Uno_Platform_iOS_StatusBarStyle__uType*)::uAllocClassType(sizeof(Change__Uno_Platform_iOS_StatusBarStyle__uType), "Fuse.Animations.Change<Uno.Platform.iOS.StatusBarStyle>", false, 0, 2, 0);

    type->SetBaseType(::app::Fuse::Animations::TrackAnimator__typeof());
    type->__fp_CreateState = (::app::Fuse::Animations::AnimatorState*(*)(::app::Fuse::Animations::Animator*, ::app::Fuse::Animations::CreateStateParams*))Change__Uno_Platform_iOS_StatusBarStyle__CreateState;

    type->SetStrongRefs(
        "_Target", offsetof(Change__Uno_Platform_iOS_StatusBarStyle, _Target),
        "ContinuousConverter", offsetof(Change__Uno_Platform_iOS_StatusBarStyle, ContinuousConverter));

    type->SetFields(1,
        ::uNewField("ContinuousConverter", NULL, offsetof(Change__Uno_Platform_iOS_StatusBarStyle, ContinuousConverter), ::app::Fuse::Animations::Converter__Uno_Platform_iOS_StatusBarStyle__typeof()));

    type->SetFunctions(22,
        ::uNewFunction("get_DegreesX", Change__Uno_Platform_iOS_StatusBarStyle__get_DegreesX, 0, false, ::app::Uno::Float__typeof()),
        ::uNewFunction("get_DegreesXY", Change__Uno_Platform_iOS_StatusBarStyle__get_DegreesXY, 0, false, ::app::Uno::Float2__typeof()),
        ::uNewFunction("get_DegreesY", Change__Uno_Platform_iOS_StatusBarStyle__get_DegreesY, 0, false, ::app::Uno::Float__typeof()),
        ::uNewFunction("get_DegreesZ", Change__Uno_Platform_iOS_StatusBarStyle__get_DegreesZ, 0, false, ::app::Uno::Float__typeof()),
        ::uNewFunction("get_IsContinuous", Change__Uno_Platform_iOS_StatusBarStyle__get_IsContinuous, 0, false, ::app::Uno::Bool__typeof()),
        ::uNewFunction("get_Target", Change__Uno_Platform_iOS_StatusBarStyle__get_Target, 0, false, ::app::Uno::UX::Property__Uno_Platform_iOS_StatusBarStyle__typeof()),
        ::uNewFunction("get_Value", Change__Uno_Platform_iOS_StatusBarStyle__get_Value, 0, false, ::app::Uno::Platform::iOS::StatusBarStyle__typeof()),
        ::uNewFunction("get_X", Change__Uno_Platform_iOS_StatusBarStyle__get_X, 0, false, ::app::Uno::Float__typeof()),
        ::uNewFunction("get_XY", Change__Uno_Platform_iOS_StatusBarStyle__get_XY, 0, false, ::app::Uno::Float2__typeof()),
        ::uNewFunction("get_Y", Change__Uno_Platform_iOS_StatusBarStyle__get_Y, 0, false, ::app::Uno::Float__typeof()),
        ::uNewFunction("get_Z", Change__Uno_Platform_iOS_StatusBarStyle__get_Z, 0, false, ::app::Uno::Float__typeof()),
        ::uNewFunction(".ctor", Change__Uno_Platform_iOS_StatusBarStyle__New_1, 0, true, Change__Uno_Platform_iOS_StatusBarStyle__typeof(), ::app::Uno::UX::Property__Uno_Platform_iOS_StatusBarStyle__typeof()),
        ::uNewFunctionVoid("set_DegreesX", Change__Uno_Platform_iOS_StatusBarStyle__set_DegreesX, 0, false, ::app::Uno::Float__typeof()),
        ::uNewFunctionVoid("set_DegreesXY", Change__Uno_Platform_iOS_StatusBarStyle__set_DegreesXY, 0, false, ::app::Uno::Float2__typeof()),
        ::uNewFunctionVoid("set_DegreesY", Change__Uno_Platform_iOS_StatusBarStyle__set_DegreesY, 0, false, ::app::Uno::Float__typeof()),
        ::uNewFunctionVoid("set_DegreesZ", Change__Uno_Platform_iOS_StatusBarStyle__set_DegreesZ, 0, false, ::app::Uno::Float__typeof()),
        ::uNewFunctionVoid("set_Target", Change__Uno_Platform_iOS_StatusBarStyle__set_Target, 0, false, ::app::Uno::UX::Property__Uno_Platform_iOS_StatusBarStyle__typeof()),
        ::uNewFunctionVoid("set_Value", Change__Uno_Platform_iOS_StatusBarStyle__set_Value, 0, false, ::app::Uno::Platform::iOS::StatusBarStyle__typeof()),
        ::uNewFunctionVoid("set_X", Change__Uno_Platform_iOS_StatusBarStyle__set_X, 0, false, ::app::Uno::Float__typeof()),
        ::uNewFunctionVoid("set_XY", Change__Uno_Platform_iOS_StatusBarStyle__set_XY, 0, false, ::app::Uno::Float2__typeof()),
        ::uNewFunctionVoid("set_Y", Change__Uno_Platform_iOS_StatusBarStyle__set_Y, 0, false, ::app::Uno::Float__typeof()),
        ::uNewFunctionVoid("set_Z", Change__Uno_Platform_iOS_StatusBarStyle__set_Z, 0, false, ::app::Uno::Float__typeof()));

    ::uRegisterType(type);
    return type;
}

void Change__Uno_Platform_iOS_StatusBarStyle___ObjInit_2(Change__Uno_Platform_iOS_StatusBarStyle* __this, ::app::Uno::UX::Property__Uno_Platform_iOS_StatusBarStyle* target)
{
    ::app::Fuse::Animations::TrackAnimator___ObjInit_1(__this);

    if (target == NULL)
    {
        U_THROW(::app::Uno::ArgumentNullException__New_5(NULL, ::uGetConstString("target")));
    }

    __this->Target(target);

    if (__this->IsContinuous())
    {
        ::uObject* v;

        if ((::uType*)::app::Uno::Platform::iOS::StatusBarStyle__typeof() == (::uType*)::app::Uno::Float__typeof())
        {
            v = (::uObject*)::app::Fuse::Animations::ConverterFloat__Singleton;
        }
        else if ((::uType*)::app::Uno::Platform::iOS::StatusBarStyle__typeof() == (::uType*)::app::Uno::Float2__typeof())
        {
            v = (::uObject*)::app::Fuse::Animations::ConverterFloat2__Singleton;
        }
        else if ((::uType*)::app::Uno::Platform::iOS::StatusBarStyle__typeof() == (::uType*)::app::Uno::Float3__typeof())
        {
            v = (::uObject*)::app::Fuse::Animations::ConverterFloat3__Singleton;
        }
        else if ((::uType*)::app::Uno::Platform::iOS::StatusBarStyle__typeof() == (::uType*)::app::Uno::Float4__typeof())
        {
            v = (::uObject*)::app::Fuse::Animations::ConverterFloat4__Singleton;
        }
        else if ((::uType*)::app::Uno::Platform::iOS::StatusBarStyle__typeof() == (::uType*)::app::Uno::Double__typeof())
        {
            v = (::uObject*)::app::Fuse::Animations::ConverterDouble__Singleton;
        }
        else
        {
            U_THROW(::app::Uno::Exception__New_2(NULL, ::app::Uno::String__op_Addition_1(NULL, ::uGetConstString("Unsupported change type: "), (::uObject*)(::uType*)::app::Uno::Platform::iOS::StatusBarStyle__typeof())));
        }

        __this->ContinuousConverter = ::uCast< ::app::Fuse::Animations::Converter__Uno_Platform_iOS_StatusBarStyle*>(v, ::app::Fuse::Animations::Converter__Uno_Platform_iOS_StatusBarStyle__typeof());
    }
    else
    {
        __this->Mixer = ::app::Fuse::Animations::Mixer__get_DefaultDiscrete(NULL);
        __this->MarkDiscrete();
    }
}

::app::Fuse::Animations::AnimatorState* Change__Uno_Platform_iOS_StatusBarStyle__CreateState(Change__Uno_Platform_iOS_StatusBarStyle* __this, ::app::Fuse::Animations::CreateStateParams* p)
{
    if (__this->IsContinuous())
    {
        return (::app::Fuse::Animations::AnimatorState*)::app::Fuse::Animations::ContinuousTrackChangeState__Uno_Platform_iOS_StatusBarStyle__New_1(NULL, __this, p);
    }

    return (::app::Fuse::Animations::AnimatorState*)::app::Fuse::Animations::DiscreteTrackChangeState__Uno_Platform_iOS_StatusBarStyle__New_1(NULL, __this, p);
}

float Change__Uno_Platform_iOS_StatusBarStyle__get_DegreesX(Change__Uno_Platform_iOS_StatusBarStyle* __this)
{
    return ::app::Uno::Math__RadiansToDegrees_1(NULL, __this->X());
}

::app::Uno::Float2 Change__Uno_Platform_iOS_StatusBarStyle__get_DegreesXY(Change__Uno_Platform_iOS_StatusBarStyle* __this)
{
    return ::app::Uno::Float2__New_2(NULL, ::app::Uno::Math__RadiansToDegrees_1(NULL, __this->X()), ::app::Uno::Math__RadiansToDegrees_1(NULL, __this->Y()));
}

float Change__Uno_Platform_iOS_StatusBarStyle__get_DegreesY(Change__Uno_Platform_iOS_StatusBarStyle* __this)
{
    return ::app::Uno::Math__RadiansToDegrees_1(NULL, __this->Y());
}

float Change__Uno_Platform_iOS_StatusBarStyle__get_DegreesZ(Change__Uno_Platform_iOS_StatusBarStyle* __this)
{
    return ::app::Uno::Math__RadiansToDegrees_1(NULL, __this->Y());
}

bool Change__Uno_Platform_iOS_StatusBarStyle__get_IsContinuous(Change__Uno_Platform_iOS_StatusBarStyle* __this)
{
    return (((((::uType*)::app::Uno::Platform::iOS::StatusBarStyle__typeof() == (::uType*)::app::Uno::Float__typeof()) || ((::uType*)::app::Uno::Platform::iOS::StatusBarStyle__typeof() == (::uType*)::app::Uno::Float2__typeof())) || ((::uType*)::app::Uno::Platform::iOS::StatusBarStyle__typeof() == (::uType*)::app::Uno::Float3__typeof())) || ((::uType*)::app::Uno::Platform::iOS::StatusBarStyle__typeof() == (::uType*)::app::Uno::Float4__typeof())) || ((::uType*)::app::Uno::Platform::iOS::StatusBarStyle__typeof() == (::uType*)::app::Uno::Double__typeof());
}

::app::Uno::UX::Property__Uno_Platform_iOS_StatusBarStyle* Change__Uno_Platform_iOS_StatusBarStyle__get_Target(Change__Uno_Platform_iOS_StatusBarStyle* __this)
{
    return __this->_Target;
}

int Change__Uno_Platform_iOS_StatusBarStyle__get_Value(Change__Uno_Platform_iOS_StatusBarStyle* __this)
{
    return __this->IsContinuous() ? ::uPtr< ::app::Fuse::Animations::Converter__Uno_Platform_iOS_StatusBarStyle*>(__this->ContinuousConverter)->Out(__this->_vectorValue) : ::uUnbox< int>(::app::Uno::Platform::iOS::StatusBarStyle__typeof(), __this->_objectValue);
}

float Change__Uno_Platform_iOS_StatusBarStyle__get_X(Change__Uno_Platform_iOS_StatusBarStyle* __this)
{
    return __this->_vectorValue.X;
}

::app::Uno::Float2 Change__Uno_Platform_iOS_StatusBarStyle__get_XY(Change__Uno_Platform_iOS_StatusBarStyle* __this)
{
    ::app::Uno::Float4 ind_123 = __this->_vectorValue;
    return ::app::Uno::Float2__New_2(NULL, ind_123.X, ind_123.Y);
}

float Change__Uno_Platform_iOS_StatusBarStyle__get_Y(Change__Uno_Platform_iOS_StatusBarStyle* __this)
{
    return __this->_vectorValue.Y;
}

float Change__Uno_Platform_iOS_StatusBarStyle__get_Z(Change__Uno_Platform_iOS_StatusBarStyle* __this)
{
    return __this->_vectorValue.Z;
}

Change__Uno_Platform_iOS_StatusBarStyle* Change__Uno_Platform_iOS_StatusBarStyle__New_1(::uStatic* __this, ::app::Uno::UX::Property__Uno_Platform_iOS_StatusBarStyle* target)
{
    Change__Uno_Platform_iOS_StatusBarStyle* inst = (Change__Uno_Platform_iOS_StatusBarStyle*)::uAllocObject(sizeof(Change__Uno_Platform_iOS_StatusBarStyle), Change__Uno_Platform_iOS_StatusBarStyle__typeof());
    inst->_ObjInit_2(target);
    return inst;
}

void Change__Uno_Platform_iOS_StatusBarStyle__set_DegreesX(Change__Uno_Platform_iOS_StatusBarStyle* __this, float value)
{
    __this->X(::app::Uno::Math__DegreesToRadians_1(NULL, value));
}

void Change__Uno_Platform_iOS_StatusBarStyle__set_DegreesXY(Change__Uno_Platform_iOS_StatusBarStyle* __this, ::app::Uno::Float2 value)
{
    __this->XY(::app::Uno::Float2__New_2(NULL, ::app::Uno::Math__DegreesToRadians_1(NULL, value.X), ::app::Uno::Math__DegreesToRadians_1(NULL, value.Y)));
}

void Change__Uno_Platform_iOS_StatusBarStyle__set_DegreesY(Change__Uno_Platform_iOS_StatusBarStyle* __this, float value)
{
    __this->Y(::app::Uno::Math__DegreesToRadians_1(NULL, value));
}

void Change__Uno_Platform_iOS_StatusBarStyle__set_DegreesZ(Change__Uno_Platform_iOS_StatusBarStyle* __this, float value)
{
    __this->Y(::app::Uno::Math__DegreesToRadians_1(NULL, value));
}

void Change__Uno_Platform_iOS_StatusBarStyle__set_Target(Change__Uno_Platform_iOS_StatusBarStyle* __this, ::app::Uno::UX::Property__Uno_Platform_iOS_StatusBarStyle* value)
{
    __this->_Target = value;
}

void Change__Uno_Platform_iOS_StatusBarStyle__set_Value(Change__Uno_Platform_iOS_StatusBarStyle* __this, int value)
{
    if (__this->IsContinuous())
    {
        __this->_vectorValue = ::uPtr< ::app::Fuse::Animations::Converter__Uno_Platform_iOS_StatusBarStyle*>(__this->ContinuousConverter)->In(value);
    }
    else
    {
        __this->_objectValue = ::uBox< int>(::app::Uno::Platform::iOS::StatusBarStyle__typeof(), value);
    }
}

void Change__Uno_Platform_iOS_StatusBarStyle__set_X(Change__Uno_Platform_iOS_StatusBarStyle* __this, float value)
{
    __this->_vectorValue.X = value;
}

void Change__Uno_Platform_iOS_StatusBarStyle__set_XY(Change__Uno_Platform_iOS_StatusBarStyle* __this, ::app::Uno::Float2 value)
{
    __this->_vectorValue = ::app::Uno::Float4__New_6(NULL, value, __this->_vectorValue.Z, __this->_vectorValue.W);
}

void Change__Uno_Platform_iOS_StatusBarStyle__set_Y(Change__Uno_Platform_iOS_StatusBarStyle* __this, float value)
{
    __this->_vectorValue.Y = value;
}

void Change__Uno_Platform_iOS_StatusBarStyle__set_Z(Change__Uno_Platform_iOS_StatusBarStyle* __this, float value)
{
    __this->_vectorValue.Z = value;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Animations\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

Change__Uno_UX_FileSource__uType* Change__Uno_UX_FileSource__typeof()
{
    static ::uStaticStrong<Change__Uno_UX_FileSource__uType*> type;
    if (type != NULL) return type;

    type = (Change__Uno_UX_FileSource__uType*)::uAllocClassType(sizeof(Change__Uno_UX_FileSource__uType), "Fuse.Animations.Change<Uno.UX.FileSource>", false, 0, 2, 0);

    type->SetBaseType(::app::Fuse::Animations::TrackAnimator__typeof());
    type->__fp_CreateState = (::app::Fuse::Animations::AnimatorState*(*)(::app::Fuse::Animations::Animator*, ::app::Fuse::Animations::CreateStateParams*))Change__Uno_UX_FileSource__CreateState;

    type->SetStrongRefs(
        "_Target", offsetof(Change__Uno_UX_FileSource, _Target),
        "ContinuousConverter", offsetof(Change__Uno_UX_FileSource, ContinuousConverter));

    type->SetFields(1,
        ::uNewField("ContinuousConverter", NULL, offsetof(Change__Uno_UX_FileSource, ContinuousConverter), ::app::Fuse::Animations::Converter__Uno_UX_FileSource__typeof()));

    type->SetFunctions(22,
        ::uNewFunction("get_DegreesX", Change__Uno_UX_FileSource__get_DegreesX, 0, false, ::app::Uno::Float__typeof()),
        ::uNewFunction("get_DegreesXY", Change__Uno_UX_FileSource__get_DegreesXY, 0, false, ::app::Uno::Float2__typeof()),
        ::uNewFunction("get_DegreesY", Change__Uno_UX_FileSource__get_DegreesY, 0, false, ::app::Uno::Float__typeof()),
        ::uNewFunction("get_DegreesZ", Change__Uno_UX_FileSource__get_DegreesZ, 0, false, ::app::Uno::Float__typeof()),
        ::uNewFunction("get_IsContinuous", Change__Uno_UX_FileSource__get_IsContinuous, 0, false, ::app::Uno::Bool__typeof()),
        ::uNewFunction("get_Target", Change__Uno_UX_FileSource__get_Target, 0, false, ::app::Uno::UX::Property__Uno_UX_FileSource__typeof()),
        ::uNewFunction("get_Value", Change__Uno_UX_FileSource__get_Value, 0, false, ::app::Uno::UX::FileSource__typeof()),
        ::uNewFunction("get_X", Change__Uno_UX_FileSource__get_X, 0, false, ::app::Uno::Float__typeof()),
        ::uNewFunction("get_XY", Change__Uno_UX_FileSource__get_XY, 0, false, ::app::Uno::Float2__typeof()),
        ::uNewFunction("get_Y", Change__Uno_UX_FileSource__get_Y, 0, false, ::app::Uno::Float__typeof()),
        ::uNewFunction("get_Z", Change__Uno_UX_FileSource__get_Z, 0, false, ::app::Uno::Float__typeof()),
        ::uNewFunction(".ctor", Change__Uno_UX_FileSource__New_1, 0, true, Change__Uno_UX_FileSource__typeof(), ::app::Uno::UX::Property__Uno_UX_FileSource__typeof()),
        ::uNewFunctionVoid("set_DegreesX", Change__Uno_UX_FileSource__set_DegreesX, 0, false, ::app::Uno::Float__typeof()),
        ::uNewFunctionVoid("set_DegreesXY", Change__Uno_UX_FileSource__set_DegreesXY, 0, false, ::app::Uno::Float2__typeof()),
        ::uNewFunctionVoid("set_DegreesY", Change__Uno_UX_FileSource__set_DegreesY, 0, false, ::app::Uno::Float__typeof()),
        ::uNewFunctionVoid("set_DegreesZ", Change__Uno_UX_FileSource__set_DegreesZ, 0, false, ::app::Uno::Float__typeof()),
        ::uNewFunctionVoid("set_Target", Change__Uno_UX_FileSource__set_Target, 0, false, ::app::Uno::UX::Property__Uno_UX_FileSource__typeof()),
        ::uNewFunctionVoid("set_Value", Change__Uno_UX_FileSource__set_Value, 0, false, ::app::Uno::UX::FileSource__typeof()),
        ::uNewFunctionVoid("set_X", Change__Uno_UX_FileSource__set_X, 0, false, ::app::Uno::Float__typeof()),
        ::uNewFunctionVoid("set_XY", Change__Uno_UX_FileSource__set_XY, 0, false, ::app::Uno::Float2__typeof()),
        ::uNewFunctionVoid("set_Y", Change__Uno_UX_FileSource__set_Y, 0, false, ::app::Uno::Float__typeof()),
        ::uNewFunctionVoid("set_Z", Change__Uno_UX_FileSource__set_Z, 0, false, ::app::Uno::Float__typeof()));

    ::uRegisterType(type);
    return type;
}

void Change__Uno_UX_FileSource___ObjInit_2(Change__Uno_UX_FileSource* __this, ::app::Uno::UX::Property__Uno_UX_FileSource* target)
{
    ::app::Fuse::Animations::TrackAnimator___ObjInit_1(__this);

    if (target == NULL)
    {
        U_THROW(::app::Uno::ArgumentNullException__New_5(NULL, ::uGetConstString("target")));
    }

    __this->Target(target);

    if (__this->IsContinuous())
    {
        ::uObject* v;

        if ((::uType*)::app::Uno::UX::FileSource__typeof() == (::uType*)::app::Uno::Float__typeof())
        {
            v = (::uObject*)::app::Fuse::Animations::ConverterFloat__Singleton;
        }
        else if ((::uType*)::app::Uno::UX::FileSource__typeof() == (::uType*)::app::Uno::Float2__typeof())
        {
            v = (::uObject*)::app::Fuse::Animations::ConverterFloat2__Singleton;
        }
        else if ((::uType*)::app::Uno::UX::FileSource__typeof() == (::uType*)::app::Uno::Float3__typeof())
        {
            v = (::uObject*)::app::Fuse::Animations::ConverterFloat3__Singleton;
        }
        else if ((::uType*)::app::Uno::UX::FileSource__typeof() == (::uType*)::app::Uno::Float4__typeof())
        {
            v = (::uObject*)::app::Fuse::Animations::ConverterFloat4__Singleton;
        }
        else if ((::uType*)::app::Uno::UX::FileSource__typeof() == (::uType*)::app::Uno::Double__typeof())
        {
            v = (::uObject*)::app::Fuse::Animations::ConverterDouble__Singleton;
        }
        else
        {
            U_THROW(::app::Uno::Exception__New_2(NULL, ::app::Uno::String__op_Addition_1(NULL, ::uGetConstString("Unsupported change type: "), (::uObject*)(::uType*)::app::Uno::UX::FileSource__typeof())));
        }

        __this->ContinuousConverter = ::uCast< ::app::Fuse::Animations::Converter__Uno_UX_FileSource*>(v, ::app::Fuse::Animations::Converter__Uno_UX_FileSource__typeof());
    }
    else
    {
        __this->Mixer = ::app::Fuse::Animations::Mixer__get_DefaultDiscrete(NULL);
        __this->MarkDiscrete();
    }
}

::app::Fuse::Animations::AnimatorState* Change__Uno_UX_FileSource__CreateState(Change__Uno_UX_FileSource* __this, ::app::Fuse::Animations::CreateStateParams* p)
{
    if (__this->IsContinuous())
    {
        return (::app::Fuse::Animations::AnimatorState*)::app::Fuse::Animations::ContinuousTrackChangeState__Uno_UX_FileSource__New_1(NULL, __this, p);
    }

    return (::app::Fuse::Animations::AnimatorState*)::app::Fuse::Animations::DiscreteTrackChangeState__Uno_UX_FileSource__New_1(NULL, __this, p);
}

float Change__Uno_UX_FileSource__get_DegreesX(Change__Uno_UX_FileSource* __this)
{
    return ::app::Uno::Math__RadiansToDegrees_1(NULL, __this->X());
}

::app::Uno::Float2 Change__Uno_UX_FileSource__get_DegreesXY(Change__Uno_UX_FileSource* __this)
{
    return ::app::Uno::Float2__New_2(NULL, ::app::Uno::Math__RadiansToDegrees_1(NULL, __this->X()), ::app::Uno::Math__RadiansToDegrees_1(NULL, __this->Y()));
}

float Change__Uno_UX_FileSource__get_DegreesY(Change__Uno_UX_FileSource* __this)
{
    return ::app::Uno::Math__RadiansToDegrees_1(NULL, __this->Y());
}

float Change__Uno_UX_FileSource__get_DegreesZ(Change__Uno_UX_FileSource* __this)
{
    return ::app::Uno::Math__RadiansToDegrees_1(NULL, __this->Y());
}

bool Change__Uno_UX_FileSource__get_IsContinuous(Change__Uno_UX_FileSource* __this)
{
    return (((((::uType*)::app::Uno::UX::FileSource__typeof() == (::uType*)::app::Uno::Float__typeof()) || ((::uType*)::app::Uno::UX::FileSource__typeof() == (::uType*)::app::Uno::Float2__typeof())) || ((::uType*)::app::Uno::UX::FileSource__typeof() == (::uType*)::app::Uno::Float3__typeof())) || ((::uType*)::app::Uno::UX::FileSource__typeof() == (::uType*)::app::Uno::Float4__typeof())) || ((::uType*)::app::Uno::UX::FileSource__typeof() == (::uType*)::app::Uno::Double__typeof());
}

::app::Uno::UX::Property__Uno_UX_FileSource* Change__Uno_UX_FileSource__get_Target(Change__Uno_UX_FileSource* __this)
{
    return __this->_Target;
}

::app::Uno::UX::FileSource* Change__Uno_UX_FileSource__get_Value(Change__Uno_UX_FileSource* __this)
{
    return __this->IsContinuous() ? ::uPtr< ::app::Fuse::Animations::Converter__Uno_UX_FileSource*>(__this->ContinuousConverter)->Out(__this->_vectorValue) : ::uCast< ::app::Uno::UX::FileSource*>(__this->_objectValue, ::app::Uno::UX::FileSource__typeof());
}

float Change__Uno_UX_FileSource__get_X(Change__Uno_UX_FileSource* __this)
{
    return __this->_vectorValue.X;
}

::app::Uno::Float2 Change__Uno_UX_FileSource__get_XY(Change__Uno_UX_FileSource* __this)
{
    ::app::Uno::Float4 ind_123 = __this->_vectorValue;
    return ::app::Uno::Float2__New_2(NULL, ind_123.X, ind_123.Y);
}

float Change__Uno_UX_FileSource__get_Y(Change__Uno_UX_FileSource* __this)
{
    return __this->_vectorValue.Y;
}

float Change__Uno_UX_FileSource__get_Z(Change__Uno_UX_FileSource* __this)
{
    return __this->_vectorValue.Z;
}

Change__Uno_UX_FileSource* Change__Uno_UX_FileSource__New_1(::uStatic* __this, ::app::Uno::UX::Property__Uno_UX_FileSource* target)
{
    Change__Uno_UX_FileSource* inst = (Change__Uno_UX_FileSource*)::uAllocObject(sizeof(Change__Uno_UX_FileSource), Change__Uno_UX_FileSource__typeof());
    inst->_ObjInit_2(target);
    return inst;
}

void Change__Uno_UX_FileSource__set_DegreesX(Change__Uno_UX_FileSource* __this, float value)
{
    __this->X(::app::Uno::Math__DegreesToRadians_1(NULL, value));
}

void Change__Uno_UX_FileSource__set_DegreesXY(Change__Uno_UX_FileSource* __this, ::app::Uno::Float2 value)
{
    __this->XY(::app::Uno::Float2__New_2(NULL, ::app::Uno::Math__DegreesToRadians_1(NULL, value.X), ::app::Uno::Math__DegreesToRadians_1(NULL, value.Y)));
}

void Change__Uno_UX_FileSource__set_DegreesY(Change__Uno_UX_FileSource* __this, float value)
{
    __this->Y(::app::Uno::Math__DegreesToRadians_1(NULL, value));
}

void Change__Uno_UX_FileSource__set_DegreesZ(Change__Uno_UX_FileSource* __this, float value)
{
    __this->Y(::app::Uno::Math__DegreesToRadians_1(NULL, value));
}

void Change__Uno_UX_FileSource__set_Target(Change__Uno_UX_FileSource* __this, ::app::Uno::UX::Property__Uno_UX_FileSource* value)
{
    __this->_Target = value;
}

void Change__Uno_UX_FileSource__set_Value(Change__Uno_UX_FileSource* __this, ::app::Uno::UX::FileSource* value)
{
    if (__this->IsContinuous())
    {
        __this->_vectorValue = ::uPtr< ::app::Fuse::Animations::Converter__Uno_UX_FileSource*>(__this->ContinuousConverter)->In(value);
    }
    else
    {
        __this->_objectValue = (::uObject*)value;
    }
}

void Change__Uno_UX_FileSource__set_X(Change__Uno_UX_FileSource* __this, float value)
{
    __this->_vectorValue.X = value;
}

void Change__Uno_UX_FileSource__set_XY(Change__Uno_UX_FileSource* __this, ::app::Uno::Float2 value)
{
    __this->_vectorValue = ::app::Uno::Float4__New_6(NULL, value, __this->_vectorValue.Z, __this->_vectorValue.W);
}

void Change__Uno_UX_FileSource__set_Y(Change__Uno_UX_FileSource* __this, float value)
{
    __this->_vectorValue.Y = value;
}

void Change__Uno_UX_FileSource__set_Z(Change__Uno_UX_FileSource* __this, float value)
{
    __this->_vectorValue.Z = value;
}

}}}
