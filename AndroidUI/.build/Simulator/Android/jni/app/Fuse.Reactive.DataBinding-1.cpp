#include <app/Fuse.Animations.AnimationVariant.h>
#include <app/Fuse.Animations.Easing.h>
#include <app/Fuse.Animations.KeyframeInterpolation.h>
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
#include <app/Fuse.Reactive.DataBinding__bool.h>
#include <app/Fuse.Reactive.DataBinding__char.h>
#include <app/Fuse.Reactive.DataBinding__double.h>
#include <app/Fuse.Reactive.DataBinding__float.h>
#include <app/Fuse.Reactive.DataBinding__float2.h>
#include <app/Fuse.Reactive.DataBinding__float3.h>
#include <app/Fuse.Reactive.DataBinding__float4.h>
#include <app/Fuse.Reactive.DataBinding__Fuse_Animations_AnimationVariant.h>
#include <app/Fuse.Reactive.DataBinding__Fuse_Animations_Easing.h>
#include <app/Fuse.Reactive.DataBinding__Fuse_Animations_KeyframeInterpolation.h>
#include <app/Fuse.Reactive.DataBinding__Fuse_Animations_MixOp.h>
#include <app/Fuse.Reactive.DataBinding__Fuse_Drawing_BlendMode.h>
#include <app/Fuse.Reactive.DataBinding__Fuse_Drawing_Brush.h>
#include <app/Fuse.Reactive.DataBinding__Fuse_Drawing_DynamicBrush.h>
#include <app/Fuse.Reactive.DataBinding__Fuse_Drawing_GradientStop.h>
#include <app/Fuse.Reactive.DataBinding__Fuse_Drawing_LinearGradient.h>
#include <app/Fuse.Reactive.DataBinding__Fuse_Drawing_SolidColor.h>
#include <app/Fuse.Reactive.DataBinding__Fuse_Drawing_StaticBrush.h>
#include <app/Fuse.Reactive.DataBinding__Fuse_Elements_Alignment.h>
#include <app/Fuse.Reactive.DataBinding__Fuse_Elements_CachingMode.h>
#include <app/Fuse.Reactive.DataBinding__Fuse_Elements_Element.h>
#include <app/Fuse.Reactive.DataBinding__Fuse_Elements_HitTestMode.h>
#include <app/Fuse.Reactive.DataBinding__Fuse_Elements_SizeUnit.h>
#include <app/Fuse.Reactive.DataBinding__Fuse_Elements_StretchDirection.h>
#include <app/Fuse.Reactive.DataBinding__Fuse_Elements_StretchMode.h>
#include <app/Fuse.Reactive.DataBinding__Fuse_Elements_StretchSizing.h>
#include <app/Fuse.Reactive.DataBinding__Fuse_Elements_TextAlignment.h>
#include <app/Fuse.Reactive.DataBinding__Fuse_Elements_TextWrapping.h>
#include <app/Fuse.Reactive.DataBinding__Fuse_Elements_Visibility.h>
#include <app/Fuse.Reactive.DataBinding__Fuse_Font.h>
#include <app/Fuse.Reactive.DataBinding__Fuse_Gestures_Edge.h>
#include <app/Fuse.Reactive.DataBinding__Fuse_Gestures_ScrollDirections.h>
#include <app/Fuse.Reactive.DataBinding__Fuse_Layouts_Dock.h>
#include <app/Fuse.Reactive.DataBinding__Fuse_Layouts_FlowDirection.h>
#include <app/Fuse.Reactive.DataBinding__Fuse_Layouts_Metric.h>
#include <app/Fuse.Reactive.DataBinding__Fuse_Layouts_Orientation.h>
#include <app/Fuse.Reactive.DataBinding__Fuse_Navigation_NavigationDirection.h>
#include <app/Fuse.Reactive.DataBinding__Fuse_Navigation_NavigationEdge.h>
#include <app/Fuse.Reactive.DataBinding__Fuse_Navigation_NavigationGotoMode.h>
#include <app/Fuse.Reactive.DataBinding__Fuse_Navigation_SnapTo.h>
#include <app/Fuse.Reactive.DataBinding__Fuse_Navigation_SwipeDirection.h>
#include <app/Fuse.Reactive.DataBinding__Fuse_Navigation_SwipeEnds.h>
#include <app/Fuse.Reactive.DataBinding__Fuse_Node.h>
#include <app/Fuse.Reactive.DataBinding__Fuse_Resources_ImageSource.h>
#include <app/Fuse.Reactive.DataBinding__Fuse_Triggers_Actions_TriggerDirection.h>
#include <app/Fuse.Reactive.DataBinding__Fuse_Triggers_State.h>
#include <app/Fuse.Reactive.DataBinding__Fuse_Triggers_StateTransition.h>
#include <app/Fuse.Reactive.DataBinding__Fuse_Triggers_TriggerBypassMode.h>
#include <app/Fuse.Reactive.DataBinding__int.h>
#include <app/Fuse.Reactive.DataBinding__int2.h>
#include <app/Fuse.Reactive.DataBinding__int3.h>
#include <app/Fuse.Reactive.DataBinding__int4.h>
#include <app/Fuse.Reactive.DataBinding__long.h>
#include <app/Fuse.Reactive.DataBinding__object.h>
#include <app/Fuse.Reactive.DataBinding__short.h>
#include <app/Fuse.Reactive.DataBinding__string.h>
#include <app/Fuse.Reactive.DataBinding__Uno_EventArgs.h>
#include <app/Fuse.Reactive.DataBinding__Uno_Platform_iOS_StatusBarStyle.h>
#include <app/Fuse.Reactive.DataBinding__Uno_UX_FileSource.h>
#include <app/Fuse.Reactive.IObservable.h>
#include <app/Fuse.Reactive.ISubscription.h>
#include <app/Fuse.Reactive.Marshal.h>
#include <app/Fuse.Resources.ImageSource.h>
#include <app/Fuse.Scripting.NameRegistry.h>
#include <app/Fuse.Triggers.Actions.TriggerDirection.h>
#include <app/Fuse.Triggers.State.h>
#include <app/Fuse.Triggers.StateTransition.h>
#include <app/Fuse.Triggers.TriggerBypassMode.h>
#include <app/Uno.Action__bool.h>
#include <app/Uno.Action__char.h>
#include <app/Uno.Action__double.h>
#include <app/Uno.Action__float.h>
#include <app/Uno.Action__float2.h>
#include <app/Uno.Action__float3.h>
#include <app/Uno.Action__float4.h>
#include <app/Uno.Action__Fuse_Animations_AnimationVariant.h>
#include <app/Uno.Action__Fuse_Animations_Easing.h>
#include <app/Uno.Action__Fuse_Animations_KeyframeInterpolation.h>
#include <app/Uno.Action__Fuse_Animations_MixOp.h>
#include <app/Uno.Action__Fuse_Drawing_BlendMode.h>
#include <app/Uno.Action__Fuse_Drawing_Brush.h>
#include <app/Uno.Action__Fuse_Drawing_DynamicBrush.h>
#include <app/Uno.Action__Fuse_Drawing_GradientStop.h>
#include <app/Uno.Action__Fuse_Drawing_LinearGradient.h>
#include <app/Uno.Action__Fuse_Drawing_SolidColor.h>
#include <app/Uno.Action__Fuse_Drawing_StaticBrush.h>
#include <app/Uno.Action__Fuse_Elements_Alignment.h>
#include <app/Uno.Action__Fuse_Elements_CachingMode.h>
#include <app/Uno.Action__Fuse_Elements_Element.h>
#include <app/Uno.Action__Fuse_Elements_HitTestMode.h>
#include <app/Uno.Action__Fuse_Elements_SizeUnit.h>
#include <app/Uno.Action__Fuse_Elements_StretchDirection.h>
#include <app/Uno.Action__Fuse_Elements_StretchMode.h>
#include <app/Uno.Action__Fuse_Elements_StretchSizing.h>
#include <app/Uno.Action__Fuse_Elements_TextAlignment.h>
#include <app/Uno.Action__Fuse_Elements_TextWrapping.h>
#include <app/Uno.Action__Fuse_Elements_Visibility.h>
#include <app/Uno.Action__Fuse_Font.h>
#include <app/Uno.Action__Fuse_Gestures_Edge.h>
#include <app/Uno.Action__Fuse_Gestures_ScrollDirections.h>
#include <app/Uno.Action__Fuse_Layouts_Dock.h>
#include <app/Uno.Action__Fuse_Layouts_FlowDirection.h>
#include <app/Uno.Action__Fuse_Layouts_Metric.h>
#include <app/Uno.Action__Fuse_Layouts_Orientation.h>
#include <app/Uno.Action__Fuse_Navigation_NavigationDirection.h>
#include <app/Uno.Action__Fuse_Navigation_NavigationEdge.h>
#include <app/Uno.Action__Fuse_Navigation_NavigationGotoMode.h>
#include <app/Uno.Action__Fuse_Navigation_SnapTo.h>
#include <app/Uno.Action__Fuse_Navigation_SwipeDirection.h>
#include <app/Uno.Action__Fuse_Navigation_SwipeEnds.h>
#include <app/Uno.Action__Fuse_Node.h>
#include <app/Uno.Action__Fuse_Resources_ImageSource.h>
#include <app/Uno.Action__Fuse_Triggers_Actions_TriggerDirection.h>
#include <app/Uno.Action__Fuse_Triggers_State.h>
#include <app/Uno.Action__Fuse_Triggers_StateTransition.h>
#include <app/Uno.Action__Fuse_Triggers_TriggerBypassMode.h>
#include <app/Uno.Action__int.h>
#include <app/Uno.Action__int2.h>
#include <app/Uno.Action__int3.h>
#include <app/Uno.Action__int4.h>
#include <app/Uno.Action__long.h>
#include <app/Uno.Action__object.h>
#include <app/Uno.Action__short.h>
#include <app/Uno.Action__string.h>
#include <app/Uno.Action__Uno_EventArgs.h>
#include <app/Uno.Action__Uno_Platform_iOS_StatusBarStyle.h>
#include <app/Uno.Action__Uno_UX_FileSource.h>
#include <app/Uno.Bool.h>
#include <app/Uno.Char.h>
#include <app/Uno.Double.h>
#include <app/Uno.EventArgs.h>
#include <app/Uno.Exception.h>
#include <app/Uno.Float.h>
#include <app/Uno.IDisposable.h>
#include <app/Uno.Int.h>
#include <app/Uno.Long.h>
#include <app/Uno.Object.h>
#include <app/Uno.Platform.iOS.StatusBarStyle.h>
#include <app/Uno.Predicate__object.h>
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
#include <app/Uno.UX.ValueChangedArgs__bool.h>
#include <app/Uno.UX.ValueChangedArgs__char.h>
#include <app/Uno.UX.ValueChangedArgs__double.h>
#include <app/Uno.UX.ValueChangedArgs__float.h>
#include <app/Uno.UX.ValueChangedArgs__float2.h>
#include <app/Uno.UX.ValueChangedArgs__float3.h>
#include <app/Uno.UX.ValueChangedArgs__float4.h>
#include <app/Uno.UX.ValueChangedArgs__Fuse_Animations_AnimationVariant.h>
#include <app/Uno.UX.ValueChangedArgs__Fuse_Animations_Easing.h>
#include <app/Uno.UX.ValueChangedArgs__Fuse_Animations_KeyframeInterpolation.h>
#include <app/Uno.UX.ValueChangedArgs__Fuse_Animations_MixOp.h>
#include <app/Uno.UX.ValueChangedArgs__Fuse_Drawing_BlendMode.h>
#include <app/Uno.UX.ValueChangedArgs__Fuse_Drawing_Brush.h>
#include <app/Uno.UX.ValueChangedArgs__Fuse_Drawing_DynamicBrush.h>
#include <app/Uno.UX.ValueChangedArgs__Fuse_Drawing_GradientStop.h>
#include <app/Uno.UX.ValueChangedArgs__Fuse_Drawing_LinearGradient.h>
#include <app/Uno.UX.ValueChangedArgs__Fuse_Drawing_SolidColor.h>
#include <app/Uno.UX.ValueChangedArgs__Fuse_Drawing_StaticBrush.h>
#include <app/Uno.UX.ValueChangedArgs__Fuse_Elements_Alignment.h>
#include <app/Uno.UX.ValueChangedArgs__Fuse_Elements_CachingMode.h>
#include <app/Uno.UX.ValueChangedArgs__Fuse_Elements_Element.h>
#include <app/Uno.UX.ValueChangedArgs__Fuse_Elements_HitTestMode.h>
#include <app/Uno.UX.ValueChangedArgs__Fuse_Elements_SizeUnit.h>
#include <app/Uno.UX.ValueChangedArgs__Fuse_Elements_StretchDirection.h>
#include <app/Uno.UX.ValueChangedArgs__Fuse_Elements_StretchMode.h>
#include <app/Uno.UX.ValueChangedArgs__Fuse_Elements_StretchSizing.h>
#include <app/Uno.UX.ValueChangedArgs__Fuse_Elements_TextAlignment.h>
#include <app/Uno.UX.ValueChangedArgs__Fuse_Elements_TextWrapping.h>
#include <app/Uno.UX.ValueChangedArgs__Fuse_Elements_Visibility.h>
#include <app/Uno.UX.ValueChangedArgs__Fuse_Font.h>
#include <app/Uno.UX.ValueChangedArgs__Fuse_Gestures_Edge.h>
#include <app/Uno.UX.ValueChangedArgs__Fuse_Gestures_ScrollDirections.h>
#include <app/Uno.UX.ValueChangedArgs__Fuse_Layouts_Dock.h>
#include <app/Uno.UX.ValueChangedArgs__Fuse_Layouts_FlowDirection.h>
#include <app/Uno.UX.ValueChangedArgs__Fuse_Layouts_Metric.h>
#include <app/Uno.UX.ValueChangedArgs__Fuse_Layouts_Orientation.h>
#include <app/Uno.UX.ValueChangedArgs__Fuse_Navigation_NavigationDirection.h>
#include <app/Uno.UX.ValueChangedArgs__Fuse_Navigation_NavigationEdge.h>
#include <app/Uno.UX.ValueChangedArgs__Fuse_Navigation_NavigationGotoMode.h>
#include <app/Uno.UX.ValueChangedArgs__Fuse_Navigation_SnapTo.h>
#include <app/Uno.UX.ValueChangedArgs__Fuse_Navigation_SwipeDirection.h>
#include <app/Uno.UX.ValueChangedArgs__Fuse_Navigation_SwipeEnds.h>
#include <app/Uno.UX.ValueChangedArgs__Fuse_Node.h>
#include <app/Uno.UX.ValueChangedArgs__Fuse_Resources_ImageSource.h>
#include <app/Uno.UX.ValueChangedArgs__Fuse_Triggers_Actions_TriggerDirection.h>
#include <app/Uno.UX.ValueChangedArgs__Fuse_Triggers_State.h>
#include <app/Uno.UX.ValueChangedArgs__Fuse_Triggers_StateTransition.h>
#include <app/Uno.UX.ValueChangedArgs__Fuse_Triggers_TriggerBypassMode.h>
#include <app/Uno.UX.ValueChangedArgs__int.h>
#include <app/Uno.UX.ValueChangedArgs__int2.h>
#include <app/Uno.UX.ValueChangedArgs__int3.h>
#include <app/Uno.UX.ValueChangedArgs__int4.h>
#include <app/Uno.UX.ValueChangedArgs__long.h>
#include <app/Uno.UX.ValueChangedArgs__object.h>
#include <app/Uno.UX.ValueChangedArgs__short.h>
#include <app/Uno.UX.ValueChangedArgs__string.h>
#include <app/Uno.UX.ValueChangedArgs__Uno_EventArgs.h>
#include <app/Uno.UX.ValueChangedArgs__Uno_Platform_iOS_StatusBarStyle.h>
#include <app/Uno.UX.ValueChangedArgs__Uno_UX_FileSource.h>
#include <app/Uno.UX.ValueChangedHandler__bool.h>
#include <app/Uno.UX.ValueChangedHandler__char.h>
#include <app/Uno.UX.ValueChangedHandler__double.h>
#include <app/Uno.UX.ValueChangedHandler__float.h>
#include <app/Uno.UX.ValueChangedHandler__float2.h>
#include <app/Uno.UX.ValueChangedHandler__float3.h>
#include <app/Uno.UX.ValueChangedHandler__float4.h>
#include <app/Uno.UX.ValueChangedHandler__Fuse_Animations_AnimationVariant.h>
#include <app/Uno.UX.ValueChangedHandler__Fuse_Animations_Easing.h>
#include <app/Uno.UX.ValueChangedHandler__Fuse_Animations_KeyframeInterpolation.h>
#include <app/Uno.UX.ValueChangedHandler__Fuse_Animations_MixOp.h>
#include <app/Uno.UX.ValueChangedHandler__Fuse_Drawing_BlendMode.h>
#include <app/Uno.UX.ValueChangedHandler__Fuse_Drawing_Brush.h>
#include <app/Uno.UX.ValueChangedHandler__Fuse_Drawing_DynamicBrush.h>
#include <app/Uno.UX.ValueChangedHandler__Fuse_Drawing_GradientStop.h>
#include <app/Uno.UX.ValueChangedHandler__Fuse_Drawing_LinearGradient.h>
#include <app/Uno.UX.ValueChangedHandler__Fuse_Drawing_SolidColor.h>
#include <app/Uno.UX.ValueChangedHandler__Fuse_Drawing_StaticBrush.h>
#include <app/Uno.UX.ValueChangedHandler__Fuse_Elements_Alignment.h>
#include <app/Uno.UX.ValueChangedHandler__Fuse_Elements_CachingMode.h>
#include <app/Uno.UX.ValueChangedHandler__Fuse_Elements_Element.h>
#include <app/Uno.UX.ValueChangedHandler__Fuse_Elements_HitTestMode.h>
#include <app/Uno.UX.ValueChangedHandler__Fuse_Elements_SizeUnit.h>
#include <app/Uno.UX.ValueChangedHandler__Fuse_Elements_StretchDirection.h>
#include <app/Uno.UX.ValueChangedHandler__Fuse_Elements_StretchMode.h>
#include <app/Uno.UX.ValueChangedHandler__Fuse_Elements_StretchSizing.h>
#include <app/Uno.UX.ValueChangedHandler__Fuse_Elements_TextAlignment.h>
#include <app/Uno.UX.ValueChangedHandler__Fuse_Elements_TextWrapping.h>
#include <app/Uno.UX.ValueChangedHandler__Fuse_Elements_Visibility.h>
#include <app/Uno.UX.ValueChangedHandler__Fuse_Font.h>
#include <app/Uno.UX.ValueChangedHandler__Fuse_Gestures_Edge.h>
#include <app/Uno.UX.ValueChangedHandler__Fuse_Gestures_ScrollDirections.h>
#include <app/Uno.UX.ValueChangedHandler__Fuse_Layouts_Dock.h>
#include <app/Uno.UX.ValueChangedHandler__Fuse_Layouts_FlowDirection.h>
#include <app/Uno.UX.ValueChangedHandler__Fuse_Layouts_Metric.h>
#include <app/Uno.UX.ValueChangedHandler__Fuse_Layouts_Orientation.h>
#include <app/Uno.UX.ValueChangedHandler__Fuse_Navigation_NavigationDirection.h>
#include <app/Uno.UX.ValueChangedHandler__Fuse_Navigation_NavigationEdge.h>
#include <app/Uno.UX.ValueChangedHandler__Fuse_Navigation_NavigationGotoMode.h>
#include <app/Uno.UX.ValueChangedHandler__Fuse_Navigation_SnapTo.h>
#include <app/Uno.UX.ValueChangedHandler__Fuse_Navigation_SwipeDirection.h>
#include <app/Uno.UX.ValueChangedHandler__Fuse_Navigation_SwipeEnds.h>
#include <app/Uno.UX.ValueChangedHandler__Fuse_Node.h>
#include <app/Uno.UX.ValueChangedHandler__Fuse_Resources_ImageSource.h>
#include <app/Uno.UX.ValueChangedHandler__Fuse_Triggers_Actions_TriggerDirection.h>
#include <app/Uno.UX.ValueChangedHandler__Fuse_Triggers_State.h>
#include <app/Uno.UX.ValueChangedHandler__Fuse_Triggers_StateTransition.h>
#include <app/Uno.UX.ValueChangedHandler__Fuse_Triggers_TriggerBypassMode.h>
#include <app/Uno.UX.ValueChangedHandler__int.h>
#include <app/Uno.UX.ValueChangedHandler__int2.h>
#include <app/Uno.UX.ValueChangedHandler__int3.h>
#include <app/Uno.UX.ValueChangedHandler__int4.h>
#include <app/Uno.UX.ValueChangedHandler__long.h>
#include <app/Uno.UX.ValueChangedHandler__object.h>
#include <app/Uno.UX.ValueChangedHandler__short.h>
#include <app/Uno.UX.ValueChangedHandler__string.h>
#include <app/Uno.UX.ValueChangedHandler__Uno_EventArgs.h>
#include <app/Uno.UX.ValueChangedHandler__Uno_Platform_iOS_StatusBarStyle.h>
#include <app/Uno.UX.ValueChangedHandler__Uno_UX_FileSource.h>

namespace app {
namespace Fuse {
namespace Reactive {

// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Reactive\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

DataBinding__bool__uType* DataBinding__bool__typeof()
{
    static ::uStaticStrong<DataBinding__bool__uType*> type;
    if (type != NULL) return type;

    type = (DataBinding__bool__uType*)::uAllocClassType(sizeof(DataBinding__bool__uType), "Fuse.Reactive.DataBinding<bool>", false, 2, 3, 0);

    type->SetBaseType(::app::Fuse::Reactive::Binding__typeof());
    type->__fp_NewValue = (void(*)(::app::Fuse::Reactive::Binding*, ::uObject*))DataBinding__bool__NewValue;
    type->__fp_OnRooted = (void(*)(::app::Fuse::Behavior*, ::app::Fuse::Node*))DataBinding__bool__OnRooted;
    type->__fp_OnUnrooted = (void(*)(::app::Fuse::Behavior*, ::app::Fuse::Node*))DataBinding__bool__OnUnrooted;
    type->__interface_0.__fp_OnSet = (void(*)(void*, ::uObject*))DataBinding__bool__Fuse_Reactive_IObserver_OnSet;
    type->__interface_0.__fp_OnAdd = (void(*)(void*, ::uObject*))DataBinding__bool__Fuse_Reactive_IObserver_OnAdd;
    type->__interface_0.__fp_OnNewAt = (void(*)(void*, int, ::uObject*))DataBinding__bool__Fuse_Reactive_IObserver_OnNewAt;
    type->__interface_0.__fp_OnFailed = (void(*)(void*, ::uString*))DataBinding__bool__Fuse_Reactive_IObserver_OnFailed;
    type->__interface_0.__fp_OnNewAll = (void(*)(void*, int))DataBinding__bool__Fuse_Reactive_IObserver_OnNewAll;
    type->__interface_0.__fp_OnRemove = (void(*)(void*, ::uObject*, int))DataBinding__bool__Fuse_Reactive_IObserver_OnRemove;
    type->__interface_1.__fp_OnNameChanged = (void(*)(void*, ::uObject*, ::uString*))DataBinding__bool__Fuse_Scripting_INameListener_OnNameChanged;

    type->SetInterfaces(
        ::app::Fuse::Reactive::IObserver__typeof(), offsetof(DataBinding__bool__uType, __interface_0),
        ::app::Fuse::Scripting::INameListener__typeof(), offsetof(DataBinding__bool__uType, __interface_1));

    type->SetStrongRefs(
        "_currentValue", offsetof(DataBinding__bool, _currentValue),
        "_subscription", offsetof(DataBinding__bool, _subscription),
        "_Target", offsetof(DataBinding__bool, _Target));

    type->SetFields(2,
        ::uNewField("_currentValue", NULL, offsetof(DataBinding__bool, _currentValue), ::uObject__typeof()),
        ::uNewField("_subscription", NULL, offsetof(DataBinding__bool, _subscription), ::app::Fuse::Reactive::ISubscription__typeof()));

    type->SetFunctions(3,
        ::uNewFunction("get_Target", DataBinding__bool__get_Target, 0, false, ::app::Uno::UX::Property__bool__typeof()),
        ::uNewFunction(".ctor", DataBinding__bool__New_1, 0, true, DataBinding__bool__typeof(), ::app::Uno::UX::Property__bool__typeof(), ::app::Uno::String__typeof()),
        ::uNewFunctionVoid("set_Target", DataBinding__bool__set_Target, 0, false, ::app::Uno::UX::Property__bool__typeof()));

    ::uRegisterType(type);
    return type;
}

void DataBinding__bool___ObjInit_2(DataBinding__bool* __this, ::app::Uno::UX::Property__bool* target, ::uString* key)
{
    ::app::Fuse::Reactive::Binding___ObjInit_1(__this, key);
    __this->Target(target);
}

bool DataBinding__bool__Acceptor(DataBinding__bool* __this, ::uObject* obj)
{
    return ::uIs(obj, ::app::Uno::Bool__typeof());
}

void DataBinding__bool__Fuse_Reactive_IObserver_OnAdd(DataBinding__bool* __this, ::uObject* addedValue)
{
    U_THROW(::app::Uno::Exception__New_2(NULL, ::uGetConstString("Not handled: OnAdd")));
}

void DataBinding__bool__Fuse_Reactive_IObserver_OnFailed(DataBinding__bool* __this, ::uString* message)
{
    U_THROW(::app::Uno::Exception__New_2(NULL, ::uGetConstString("Not handled: OnFailed")));
}

void DataBinding__bool__Fuse_Reactive_IObserver_OnNewAll(DataBinding__bool* __this, int length)
{
    if (length > 0)
    {
        U_THROW(::app::Uno::Exception__New_2(NULL, ::uGetConstString("Not handled: OnNewAll")));
    }
}

void DataBinding__bool__Fuse_Reactive_IObserver_OnNewAt(DataBinding__bool* __this, int index, ::uObject* value)
{
    U_THROW(::app::Uno::Exception__New_2(NULL, ::uGetConstString("Not handled: OnNewAt")));
}

void DataBinding__bool__Fuse_Reactive_IObserver_OnRemove(DataBinding__bool* __this, ::uObject* value, int index)
{
    U_THROW(::app::Uno::Exception__New_2(NULL, ::uGetConstString("Not handled: OnRemoveAt")));
}

void DataBinding__bool__Fuse_Reactive_IObserver_OnSet(DataBinding__bool* __this, ::uObject* newValue)
{
    __this->PushValue(newValue);
}

void DataBinding__bool__Fuse_Scripting_INameListener_OnNameChanged(DataBinding__bool* __this, ::uObject* obj, ::uString* name)
{
    __this->PushValue(__this->_currentValue);
}

::app::Uno::UX::Property__bool* DataBinding__bool__get_Target(DataBinding__bool* __this)
{
    return __this->_Target;
}

DataBinding__bool* DataBinding__bool__New_1(::uStatic* __this, ::app::Uno::UX::Property__bool* target, ::uString* key)
{
    DataBinding__bool* inst = (DataBinding__bool*)::uAllocObject(sizeof(DataBinding__bool), DataBinding__bool__typeof());
    inst->_ObjInit_2(target, key);
    return inst;
}

void DataBinding__bool__NewValue(DataBinding__bool* __this, ::uObject* value)
{
    if (::uIs(value, ::app::Uno::Bool__typeof()))
    {
        __this->PushValue(value);
    }
    else if (::uIs(value, ::app::Fuse::Reactive::IObservable__typeof()))
    {
        if (__this->_subscription != NULL)
        {
            ::app::Uno::IDisposable::Dispose(::uPtr< ::uObject*>(__this->_subscription));
            __this->_subscription = NULL;
        }

        ::uObject* obs = ::uAs< ::uObject*>(value, ::app::Fuse::Reactive::IObservable__typeof());

        if (obs != NULL)
        {
            __this->_subscription = ::app::Fuse::Reactive::IObservable::Subscribe(::uPtr< ::uObject*>(obs), (::uObject*)__this);
        }
    }
    else
    {
        __this->PushValue(value);
    }
}

void DataBinding__bool__OnRooted(DataBinding__bool* __this, ::app::Fuse::Node* n)
{
    ::uPtr< ::app::Uno::UX::Property__bool*>(__this->Target())->add_ValueChanged(::uNewDelegateNonVirt(::app::Uno::UX::ValueChangedHandler__bool__typeof(), (const void*)DataBinding__bool__OnValueChanged, __this));
    ::app::Fuse::Reactive::Binding__OnRooted(__this, n);
}

void DataBinding__bool__OnUnrooted(DataBinding__bool* __this, ::app::Fuse::Node* n)
{
    ::app::Fuse::Scripting::NameRegistry__RemoveListener(NULL, (::uObject*)__this);
    ::uPtr< ::app::Uno::UX::Property__bool*>(__this->Target())->remove_ValueChanged(::uNewDelegateNonVirt(::app::Uno::UX::ValueChangedHandler__bool__typeof(), (const void*)DataBinding__bool__OnValueChanged, __this));

    if (__this->_subscription != NULL)
    {
        ::app::Uno::IDisposable::Dispose(::uPtr< ::uObject*>(__this->_subscription));
        __this->_subscription = NULL;
    }

    ::app::Fuse::Reactive::Binding__OnUnrooted(__this, n);
}

void DataBinding__bool__OnValueChanged(DataBinding__bool* __this, ::uObject* sender, ::app::Uno::UX::ValueChangedArgs__bool* args)
{
    if ((__this->_subscription != NULL) && (::uPtr< ::app::Uno::UX::ValueChangedArgs__bool*>(args)->Origin() != __this))
    {
        ::app::Fuse::Reactive::ISubscription::SetExclusive(::uPtr< ::uObject*>(__this->_subscription), ::uBox(::app::Uno::Bool__typeof(), ::uPtr< ::app::Uno::UX::ValueChangedArgs__bool*>(args)->Value()));
    }
}

void DataBinding__bool__PushValue(DataBinding__bool* __this, ::uObject* newValue)
{
    __this->_currentValue = newValue;

    if (::uIs(newValue, ::app::Uno::Bool__typeof()))
    {
        ::app::Fuse::Scripting::NameRegistry__RemoveListener(NULL, (::uObject*)__this);
        ::uPtr< ::app::Uno::UX::Property__bool*>(__this->Target())->SetRestState(::uUnbox< bool>(::app::Uno::Bool__typeof(), newValue), (::uObject*)__this);
        return;
    }

    ::uString* name = ::uAs< ::uString*>(newValue, ::app::Uno::String__typeof());

    if (::app::Uno::String__op_Inequality(NULL, name, NULL) && (__this->Node() != NULL))
    {
        ::app::Fuse::Scripting::NameRegistry__AddListener(NULL, name, (::uObject*)__this);
        ::app::Fuse::Node* k = ::uPtr< ::app::Fuse::Node*>(__this->Node())->FindNodeByName(::uCast< ::uString*>(newValue, ::app::Uno::String__typeof()));

        if (::uIs(k, ::app::Uno::Bool__typeof()))
        {
            ::uPtr< ::app::Uno::UX::Property__bool*>(__this->Target())->SetRestState(::uUnbox< bool>(::app::Uno::Bool__typeof(), (::uObject*)k), (::uObject*)__this);
            return;
        }
        else
        {
            ::uObject* candidate = ::uPtr< ::app::Fuse::Node*>(__this->Node())->FindObjectByName(::uCast< ::uString*>(newValue, ::app::Uno::String__typeof()), ::uNewDelegateNonVirt(::app::Uno::Predicate__object__typeof(), (const void*)DataBinding__bool__Acceptor, __this));

            if (::uIs(candidate, ::app::Uno::Bool__typeof()))
            {
                ::uPtr< ::app::Uno::UX::Property__bool*>(__this->Target())->SetRestState(::uUnbox< bool>(::app::Uno::Bool__typeof(), candidate), (::uObject*)__this);
                return;
            }
        }
    }

    ::app::Fuse::Reactive::Marshal__ToType__bool(NULL, newValue, ::uNewDelegateNonVirt(::app::Uno::Action__bool__typeof(), (const void*)DataBinding__bool__SetValue, __this));
}

void DataBinding__bool__set_Target(DataBinding__bool* __this, ::app::Uno::UX::Property__bool* value)
{
    __this->_Target = value;
}

void DataBinding__bool__SetValue(DataBinding__bool* __this, bool value)
{
    ::uPtr< ::app::Uno::UX::Property__bool*>(__this->Target())->SetRestState(value, (::uObject*)__this);
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Reactive\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

DataBinding__char__uType* DataBinding__char__typeof()
{
    static ::uStaticStrong<DataBinding__char__uType*> type;
    if (type != NULL) return type;

    type = (DataBinding__char__uType*)::uAllocClassType(sizeof(DataBinding__char__uType), "Fuse.Reactive.DataBinding<char>", false, 2, 3, 0);

    type->SetBaseType(::app::Fuse::Reactive::Binding__typeof());
    type->__fp_NewValue = (void(*)(::app::Fuse::Reactive::Binding*, ::uObject*))DataBinding__char__NewValue;
    type->__fp_OnRooted = (void(*)(::app::Fuse::Behavior*, ::app::Fuse::Node*))DataBinding__char__OnRooted;
    type->__fp_OnUnrooted = (void(*)(::app::Fuse::Behavior*, ::app::Fuse::Node*))DataBinding__char__OnUnrooted;
    type->__interface_0.__fp_OnSet = (void(*)(void*, ::uObject*))DataBinding__char__Fuse_Reactive_IObserver_OnSet;
    type->__interface_0.__fp_OnAdd = (void(*)(void*, ::uObject*))DataBinding__char__Fuse_Reactive_IObserver_OnAdd;
    type->__interface_0.__fp_OnNewAt = (void(*)(void*, int, ::uObject*))DataBinding__char__Fuse_Reactive_IObserver_OnNewAt;
    type->__interface_0.__fp_OnFailed = (void(*)(void*, ::uString*))DataBinding__char__Fuse_Reactive_IObserver_OnFailed;
    type->__interface_0.__fp_OnNewAll = (void(*)(void*, int))DataBinding__char__Fuse_Reactive_IObserver_OnNewAll;
    type->__interface_0.__fp_OnRemove = (void(*)(void*, ::uObject*, int))DataBinding__char__Fuse_Reactive_IObserver_OnRemove;
    type->__interface_1.__fp_OnNameChanged = (void(*)(void*, ::uObject*, ::uString*))DataBinding__char__Fuse_Scripting_INameListener_OnNameChanged;

    type->SetInterfaces(
        ::app::Fuse::Reactive::IObserver__typeof(), offsetof(DataBinding__char__uType, __interface_0),
        ::app::Fuse::Scripting::INameListener__typeof(), offsetof(DataBinding__char__uType, __interface_1));

    type->SetStrongRefs(
        "_currentValue", offsetof(DataBinding__char, _currentValue),
        "_subscription", offsetof(DataBinding__char, _subscription),
        "_Target", offsetof(DataBinding__char, _Target));

    type->SetFields(2,
        ::uNewField("_currentValue", NULL, offsetof(DataBinding__char, _currentValue), ::uObject__typeof()),
        ::uNewField("_subscription", NULL, offsetof(DataBinding__char, _subscription), ::app::Fuse::Reactive::ISubscription__typeof()));

    type->SetFunctions(3,
        ::uNewFunction("get_Target", DataBinding__char__get_Target, 0, false, ::app::Uno::UX::Property__char__typeof()),
        ::uNewFunction(".ctor", DataBinding__char__New_1, 0, true, DataBinding__char__typeof(), ::app::Uno::UX::Property__char__typeof(), ::app::Uno::String__typeof()),
        ::uNewFunctionVoid("set_Target", DataBinding__char__set_Target, 0, false, ::app::Uno::UX::Property__char__typeof()));

    ::uRegisterType(type);
    return type;
}

void DataBinding__char___ObjInit_2(DataBinding__char* __this, ::app::Uno::UX::Property__char* target, ::uString* key)
{
    ::app::Fuse::Reactive::Binding___ObjInit_1(__this, key);
    __this->Target(target);
}

bool DataBinding__char__Acceptor(DataBinding__char* __this, ::uObject* obj)
{
    return ::uIs(obj, ::app::Uno::Char__typeof());
}

void DataBinding__char__Fuse_Reactive_IObserver_OnAdd(DataBinding__char* __this, ::uObject* addedValue)
{
    U_THROW(::app::Uno::Exception__New_2(NULL, ::uGetConstString("Not handled: OnAdd")));
}

void DataBinding__char__Fuse_Reactive_IObserver_OnFailed(DataBinding__char* __this, ::uString* message)
{
    U_THROW(::app::Uno::Exception__New_2(NULL, ::uGetConstString("Not handled: OnFailed")));
}

void DataBinding__char__Fuse_Reactive_IObserver_OnNewAll(DataBinding__char* __this, int length)
{
    if (length > 0)
    {
        U_THROW(::app::Uno::Exception__New_2(NULL, ::uGetConstString("Not handled: OnNewAll")));
    }
}

void DataBinding__char__Fuse_Reactive_IObserver_OnNewAt(DataBinding__char* __this, int index, ::uObject* value)
{
    U_THROW(::app::Uno::Exception__New_2(NULL, ::uGetConstString("Not handled: OnNewAt")));
}

void DataBinding__char__Fuse_Reactive_IObserver_OnRemove(DataBinding__char* __this, ::uObject* value, int index)
{
    U_THROW(::app::Uno::Exception__New_2(NULL, ::uGetConstString("Not handled: OnRemoveAt")));
}

void DataBinding__char__Fuse_Reactive_IObserver_OnSet(DataBinding__char* __this, ::uObject* newValue)
{
    __this->PushValue(newValue);
}

void DataBinding__char__Fuse_Scripting_INameListener_OnNameChanged(DataBinding__char* __this, ::uObject* obj, ::uString* name)
{
    __this->PushValue(__this->_currentValue);
}

::app::Uno::UX::Property__char* DataBinding__char__get_Target(DataBinding__char* __this)
{
    return __this->_Target;
}

DataBinding__char* DataBinding__char__New_1(::uStatic* __this, ::app::Uno::UX::Property__char* target, ::uString* key)
{
    DataBinding__char* inst = (DataBinding__char*)::uAllocObject(sizeof(DataBinding__char), DataBinding__char__typeof());
    inst->_ObjInit_2(target, key);
    return inst;
}

void DataBinding__char__NewValue(DataBinding__char* __this, ::uObject* value)
{
    if (::uIs(value, ::app::Uno::Char__typeof()))
    {
        __this->PushValue(value);
    }
    else if (::uIs(value, ::app::Fuse::Reactive::IObservable__typeof()))
    {
        if (__this->_subscription != NULL)
        {
            ::app::Uno::IDisposable::Dispose(::uPtr< ::uObject*>(__this->_subscription));
            __this->_subscription = NULL;
        }

        ::uObject* obs = ::uAs< ::uObject*>(value, ::app::Fuse::Reactive::IObservable__typeof());

        if (obs != NULL)
        {
            __this->_subscription = ::app::Fuse::Reactive::IObservable::Subscribe(::uPtr< ::uObject*>(obs), (::uObject*)__this);
        }
    }
    else
    {
        __this->PushValue(value);
    }
}

void DataBinding__char__OnRooted(DataBinding__char* __this, ::app::Fuse::Node* n)
{
    ::uPtr< ::app::Uno::UX::Property__char*>(__this->Target())->add_ValueChanged(::uNewDelegateNonVirt(::app::Uno::UX::ValueChangedHandler__char__typeof(), (const void*)DataBinding__char__OnValueChanged, __this));
    ::app::Fuse::Reactive::Binding__OnRooted(__this, n);
}

void DataBinding__char__OnUnrooted(DataBinding__char* __this, ::app::Fuse::Node* n)
{
    ::app::Fuse::Scripting::NameRegistry__RemoveListener(NULL, (::uObject*)__this);
    ::uPtr< ::app::Uno::UX::Property__char*>(__this->Target())->remove_ValueChanged(::uNewDelegateNonVirt(::app::Uno::UX::ValueChangedHandler__char__typeof(), (const void*)DataBinding__char__OnValueChanged, __this));

    if (__this->_subscription != NULL)
    {
        ::app::Uno::IDisposable::Dispose(::uPtr< ::uObject*>(__this->_subscription));
        __this->_subscription = NULL;
    }

    ::app::Fuse::Reactive::Binding__OnUnrooted(__this, n);
}

void DataBinding__char__OnValueChanged(DataBinding__char* __this, ::uObject* sender, ::app::Uno::UX::ValueChangedArgs__char* args)
{
    if ((__this->_subscription != NULL) && (::uPtr< ::app::Uno::UX::ValueChangedArgs__char*>(args)->Origin() != __this))
    {
        ::app::Fuse::Reactive::ISubscription::SetExclusive(::uPtr< ::uObject*>(__this->_subscription), ::uBox< ::uChar>(::app::Uno::Char__typeof(), ::uPtr< ::app::Uno::UX::ValueChangedArgs__char*>(args)->Value()));
    }
}

void DataBinding__char__PushValue(DataBinding__char* __this, ::uObject* newValue)
{
    __this->_currentValue = newValue;

    if (::uIs(newValue, ::app::Uno::Char__typeof()))
    {
        ::app::Fuse::Scripting::NameRegistry__RemoveListener(NULL, (::uObject*)__this);
        ::uPtr< ::app::Uno::UX::Property__char*>(__this->Target())->SetRestState(::uUnbox< ::uChar>(::app::Uno::Char__typeof(), newValue), (::uObject*)__this);
        return;
    }

    ::uString* name = ::uAs< ::uString*>(newValue, ::app::Uno::String__typeof());

    if (::app::Uno::String__op_Inequality(NULL, name, NULL) && (__this->Node() != NULL))
    {
        ::app::Fuse::Scripting::NameRegistry__AddListener(NULL, name, (::uObject*)__this);
        ::app::Fuse::Node* k = ::uPtr< ::app::Fuse::Node*>(__this->Node())->FindNodeByName(::uCast< ::uString*>(newValue, ::app::Uno::String__typeof()));

        if (::uIs(k, ::app::Uno::Char__typeof()))
        {
            ::uPtr< ::app::Uno::UX::Property__char*>(__this->Target())->SetRestState(::uUnbox< ::uChar>(::app::Uno::Char__typeof(), (::uObject*)k), (::uObject*)__this);
            return;
        }
        else
        {
            ::uObject* candidate = ::uPtr< ::app::Fuse::Node*>(__this->Node())->FindObjectByName(::uCast< ::uString*>(newValue, ::app::Uno::String__typeof()), ::uNewDelegateNonVirt(::app::Uno::Predicate__object__typeof(), (const void*)DataBinding__char__Acceptor, __this));

            if (::uIs(candidate, ::app::Uno::Char__typeof()))
            {
                ::uPtr< ::app::Uno::UX::Property__char*>(__this->Target())->SetRestState(::uUnbox< ::uChar>(::app::Uno::Char__typeof(), candidate), (::uObject*)__this);
                return;
            }
        }
    }

    ::app::Fuse::Reactive::Marshal__ToType__char(NULL, newValue, ::uNewDelegateNonVirt(::app::Uno::Action__char__typeof(), (const void*)DataBinding__char__SetValue, __this));
}

void DataBinding__char__set_Target(DataBinding__char* __this, ::app::Uno::UX::Property__char* value)
{
    __this->_Target = value;
}

void DataBinding__char__SetValue(DataBinding__char* __this, ::uChar value)
{
    ::uPtr< ::app::Uno::UX::Property__char*>(__this->Target())->SetRestState(value, (::uObject*)__this);
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Reactive\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

DataBinding__double__uType* DataBinding__double__typeof()
{
    static ::uStaticStrong<DataBinding__double__uType*> type;
    if (type != NULL) return type;

    type = (DataBinding__double__uType*)::uAllocClassType(sizeof(DataBinding__double__uType), "Fuse.Reactive.DataBinding<double>", false, 2, 3, 0);

    type->SetBaseType(::app::Fuse::Reactive::Binding__typeof());
    type->__fp_NewValue = (void(*)(::app::Fuse::Reactive::Binding*, ::uObject*))DataBinding__double__NewValue;
    type->__fp_OnRooted = (void(*)(::app::Fuse::Behavior*, ::app::Fuse::Node*))DataBinding__double__OnRooted;
    type->__fp_OnUnrooted = (void(*)(::app::Fuse::Behavior*, ::app::Fuse::Node*))DataBinding__double__OnUnrooted;
    type->__interface_0.__fp_OnSet = (void(*)(void*, ::uObject*))DataBinding__double__Fuse_Reactive_IObserver_OnSet;
    type->__interface_0.__fp_OnAdd = (void(*)(void*, ::uObject*))DataBinding__double__Fuse_Reactive_IObserver_OnAdd;
    type->__interface_0.__fp_OnNewAt = (void(*)(void*, int, ::uObject*))DataBinding__double__Fuse_Reactive_IObserver_OnNewAt;
    type->__interface_0.__fp_OnFailed = (void(*)(void*, ::uString*))DataBinding__double__Fuse_Reactive_IObserver_OnFailed;
    type->__interface_0.__fp_OnNewAll = (void(*)(void*, int))DataBinding__double__Fuse_Reactive_IObserver_OnNewAll;
    type->__interface_0.__fp_OnRemove = (void(*)(void*, ::uObject*, int))DataBinding__double__Fuse_Reactive_IObserver_OnRemove;
    type->__interface_1.__fp_OnNameChanged = (void(*)(void*, ::uObject*, ::uString*))DataBinding__double__Fuse_Scripting_INameListener_OnNameChanged;

    type->SetInterfaces(
        ::app::Fuse::Reactive::IObserver__typeof(), offsetof(DataBinding__double__uType, __interface_0),
        ::app::Fuse::Scripting::INameListener__typeof(), offsetof(DataBinding__double__uType, __interface_1));

    type->SetStrongRefs(
        "_currentValue", offsetof(DataBinding__double, _currentValue),
        "_subscription", offsetof(DataBinding__double, _subscription),
        "_Target", offsetof(DataBinding__double, _Target));

    type->SetFields(2,
        ::uNewField("_currentValue", NULL, offsetof(DataBinding__double, _currentValue), ::uObject__typeof()),
        ::uNewField("_subscription", NULL, offsetof(DataBinding__double, _subscription), ::app::Fuse::Reactive::ISubscription__typeof()));

    type->SetFunctions(3,
        ::uNewFunction("get_Target", DataBinding__double__get_Target, 0, false, ::app::Uno::UX::Property__double__typeof()),
        ::uNewFunction(".ctor", DataBinding__double__New_1, 0, true, DataBinding__double__typeof(), ::app::Uno::UX::Property__double__typeof(), ::app::Uno::String__typeof()),
        ::uNewFunctionVoid("set_Target", DataBinding__double__set_Target, 0, false, ::app::Uno::UX::Property__double__typeof()));

    ::uRegisterType(type);
    return type;
}

void DataBinding__double___ObjInit_2(DataBinding__double* __this, ::app::Uno::UX::Property__double* target, ::uString* key)
{
    ::app::Fuse::Reactive::Binding___ObjInit_1(__this, key);
    __this->Target(target);
}

bool DataBinding__double__Acceptor(DataBinding__double* __this, ::uObject* obj)
{
    return ::uIs(obj, ::app::Uno::Double__typeof());
}

void DataBinding__double__Fuse_Reactive_IObserver_OnAdd(DataBinding__double* __this, ::uObject* addedValue)
{
    U_THROW(::app::Uno::Exception__New_2(NULL, ::uGetConstString("Not handled: OnAdd")));
}

void DataBinding__double__Fuse_Reactive_IObserver_OnFailed(DataBinding__double* __this, ::uString* message)
{
    U_THROW(::app::Uno::Exception__New_2(NULL, ::uGetConstString("Not handled: OnFailed")));
}

void DataBinding__double__Fuse_Reactive_IObserver_OnNewAll(DataBinding__double* __this, int length)
{
    if (length > 0)
    {
        U_THROW(::app::Uno::Exception__New_2(NULL, ::uGetConstString("Not handled: OnNewAll")));
    }
}

void DataBinding__double__Fuse_Reactive_IObserver_OnNewAt(DataBinding__double* __this, int index, ::uObject* value)
{
    U_THROW(::app::Uno::Exception__New_2(NULL, ::uGetConstString("Not handled: OnNewAt")));
}

void DataBinding__double__Fuse_Reactive_IObserver_OnRemove(DataBinding__double* __this, ::uObject* value, int index)
{
    U_THROW(::app::Uno::Exception__New_2(NULL, ::uGetConstString("Not handled: OnRemoveAt")));
}

void DataBinding__double__Fuse_Reactive_IObserver_OnSet(DataBinding__double* __this, ::uObject* newValue)
{
    __this->PushValue(newValue);
}

void DataBinding__double__Fuse_Scripting_INameListener_OnNameChanged(DataBinding__double* __this, ::uObject* obj, ::uString* name)
{
    __this->PushValue(__this->_currentValue);
}

::app::Uno::UX::Property__double* DataBinding__double__get_Target(DataBinding__double* __this)
{
    return __this->_Target;
}

DataBinding__double* DataBinding__double__New_1(::uStatic* __this, ::app::Uno::UX::Property__double* target, ::uString* key)
{
    DataBinding__double* inst = (DataBinding__double*)::uAllocObject(sizeof(DataBinding__double), DataBinding__double__typeof());
    inst->_ObjInit_2(target, key);
    return inst;
}

void DataBinding__double__NewValue(DataBinding__double* __this, ::uObject* value)
{
    if (::uIs(value, ::app::Uno::Double__typeof()))
    {
        __this->PushValue(value);
    }
    else if (::uIs(value, ::app::Fuse::Reactive::IObservable__typeof()))
    {
        if (__this->_subscription != NULL)
        {
            ::app::Uno::IDisposable::Dispose(::uPtr< ::uObject*>(__this->_subscription));
            __this->_subscription = NULL;
        }

        ::uObject* obs = ::uAs< ::uObject*>(value, ::app::Fuse::Reactive::IObservable__typeof());

        if (obs != NULL)
        {
            __this->_subscription = ::app::Fuse::Reactive::IObservable::Subscribe(::uPtr< ::uObject*>(obs), (::uObject*)__this);
        }
    }
    else
    {
        __this->PushValue(value);
    }
}

void DataBinding__double__OnRooted(DataBinding__double* __this, ::app::Fuse::Node* n)
{
    ::uPtr< ::app::Uno::UX::Property__double*>(__this->Target())->add_ValueChanged(::uNewDelegateNonVirt(::app::Uno::UX::ValueChangedHandler__double__typeof(), (const void*)DataBinding__double__OnValueChanged, __this));
    ::app::Fuse::Reactive::Binding__OnRooted(__this, n);
}

void DataBinding__double__OnUnrooted(DataBinding__double* __this, ::app::Fuse::Node* n)
{
    ::app::Fuse::Scripting::NameRegistry__RemoveListener(NULL, (::uObject*)__this);
    ::uPtr< ::app::Uno::UX::Property__double*>(__this->Target())->remove_ValueChanged(::uNewDelegateNonVirt(::app::Uno::UX::ValueChangedHandler__double__typeof(), (const void*)DataBinding__double__OnValueChanged, __this));

    if (__this->_subscription != NULL)
    {
        ::app::Uno::IDisposable::Dispose(::uPtr< ::uObject*>(__this->_subscription));
        __this->_subscription = NULL;
    }

    ::app::Fuse::Reactive::Binding__OnUnrooted(__this, n);
}

void DataBinding__double__OnValueChanged(DataBinding__double* __this, ::uObject* sender, ::app::Uno::UX::ValueChangedArgs__double* args)
{
    if ((__this->_subscription != NULL) && (::uPtr< ::app::Uno::UX::ValueChangedArgs__double*>(args)->Origin() != __this))
    {
        ::app::Fuse::Reactive::ISubscription::SetExclusive(::uPtr< ::uObject*>(__this->_subscription), ::uBox(::app::Uno::Double__typeof(), ::uPtr< ::app::Uno::UX::ValueChangedArgs__double*>(args)->Value()));
    }
}

void DataBinding__double__PushValue(DataBinding__double* __this, ::uObject* newValue)
{
    __this->_currentValue = newValue;

    if (::uIs(newValue, ::app::Uno::Double__typeof()))
    {
        ::app::Fuse::Scripting::NameRegistry__RemoveListener(NULL, (::uObject*)__this);
        ::uPtr< ::app::Uno::UX::Property__double*>(__this->Target())->SetRestState(::uUnbox< double>(::app::Uno::Double__typeof(), newValue), (::uObject*)__this);
        return;
    }

    ::uString* name = ::uAs< ::uString*>(newValue, ::app::Uno::String__typeof());

    if (::app::Uno::String__op_Inequality(NULL, name, NULL) && (__this->Node() != NULL))
    {
        ::app::Fuse::Scripting::NameRegistry__AddListener(NULL, name, (::uObject*)__this);
        ::app::Fuse::Node* k = ::uPtr< ::app::Fuse::Node*>(__this->Node())->FindNodeByName(::uCast< ::uString*>(newValue, ::app::Uno::String__typeof()));

        if (::uIs(k, ::app::Uno::Double__typeof()))
        {
            ::uPtr< ::app::Uno::UX::Property__double*>(__this->Target())->SetRestState(::uUnbox< double>(::app::Uno::Double__typeof(), (::uObject*)k), (::uObject*)__this);
            return;
        }
        else
        {
            ::uObject* candidate = ::uPtr< ::app::Fuse::Node*>(__this->Node())->FindObjectByName(::uCast< ::uString*>(newValue, ::app::Uno::String__typeof()), ::uNewDelegateNonVirt(::app::Uno::Predicate__object__typeof(), (const void*)DataBinding__double__Acceptor, __this));

            if (::uIs(candidate, ::app::Uno::Double__typeof()))
            {
                ::uPtr< ::app::Uno::UX::Property__double*>(__this->Target())->SetRestState(::uUnbox< double>(::app::Uno::Double__typeof(), candidate), (::uObject*)__this);
                return;
            }
        }
    }

    ::app::Fuse::Reactive::Marshal__ToType__double(NULL, newValue, ::uNewDelegateNonVirt(::app::Uno::Action__double__typeof(), (const void*)DataBinding__double__SetValue, __this));
}

void DataBinding__double__set_Target(DataBinding__double* __this, ::app::Uno::UX::Property__double* value)
{
    __this->_Target = value;
}

void DataBinding__double__SetValue(DataBinding__double* __this, double value)
{
    ::uPtr< ::app::Uno::UX::Property__double*>(__this->Target())->SetRestState(value, (::uObject*)__this);
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Reactive\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

DataBinding__float__uType* DataBinding__float__typeof()
{
    static ::uStaticStrong<DataBinding__float__uType*> type;
    if (type != NULL) return type;

    type = (DataBinding__float__uType*)::uAllocClassType(sizeof(DataBinding__float__uType), "Fuse.Reactive.DataBinding<float>", false, 2, 3, 0);

    type->SetBaseType(::app::Fuse::Reactive::Binding__typeof());
    type->__fp_NewValue = (void(*)(::app::Fuse::Reactive::Binding*, ::uObject*))DataBinding__float__NewValue;
    type->__fp_OnRooted = (void(*)(::app::Fuse::Behavior*, ::app::Fuse::Node*))DataBinding__float__OnRooted;
    type->__fp_OnUnrooted = (void(*)(::app::Fuse::Behavior*, ::app::Fuse::Node*))DataBinding__float__OnUnrooted;
    type->__interface_0.__fp_OnSet = (void(*)(void*, ::uObject*))DataBinding__float__Fuse_Reactive_IObserver_OnSet;
    type->__interface_0.__fp_OnAdd = (void(*)(void*, ::uObject*))DataBinding__float__Fuse_Reactive_IObserver_OnAdd;
    type->__interface_0.__fp_OnNewAt = (void(*)(void*, int, ::uObject*))DataBinding__float__Fuse_Reactive_IObserver_OnNewAt;
    type->__interface_0.__fp_OnFailed = (void(*)(void*, ::uString*))DataBinding__float__Fuse_Reactive_IObserver_OnFailed;
    type->__interface_0.__fp_OnNewAll = (void(*)(void*, int))DataBinding__float__Fuse_Reactive_IObserver_OnNewAll;
    type->__interface_0.__fp_OnRemove = (void(*)(void*, ::uObject*, int))DataBinding__float__Fuse_Reactive_IObserver_OnRemove;
    type->__interface_1.__fp_OnNameChanged = (void(*)(void*, ::uObject*, ::uString*))DataBinding__float__Fuse_Scripting_INameListener_OnNameChanged;

    type->SetInterfaces(
        ::app::Fuse::Reactive::IObserver__typeof(), offsetof(DataBinding__float__uType, __interface_0),
        ::app::Fuse::Scripting::INameListener__typeof(), offsetof(DataBinding__float__uType, __interface_1));

    type->SetStrongRefs(
        "_currentValue", offsetof(DataBinding__float, _currentValue),
        "_subscription", offsetof(DataBinding__float, _subscription),
        "_Target", offsetof(DataBinding__float, _Target));

    type->SetFields(2,
        ::uNewField("_currentValue", NULL, offsetof(DataBinding__float, _currentValue), ::uObject__typeof()),
        ::uNewField("_subscription", NULL, offsetof(DataBinding__float, _subscription), ::app::Fuse::Reactive::ISubscription__typeof()));

    type->SetFunctions(3,
        ::uNewFunction("get_Target", DataBinding__float__get_Target, 0, false, ::app::Uno::UX::Property__float__typeof()),
        ::uNewFunction(".ctor", DataBinding__float__New_1, 0, true, DataBinding__float__typeof(), ::app::Uno::UX::Property__float__typeof(), ::app::Uno::String__typeof()),
        ::uNewFunctionVoid("set_Target", DataBinding__float__set_Target, 0, false, ::app::Uno::UX::Property__float__typeof()));

    ::uRegisterType(type);
    return type;
}

void DataBinding__float___ObjInit_2(DataBinding__float* __this, ::app::Uno::UX::Property__float* target, ::uString* key)
{
    ::app::Fuse::Reactive::Binding___ObjInit_1(__this, key);
    __this->Target(target);
}

bool DataBinding__float__Acceptor(DataBinding__float* __this, ::uObject* obj)
{
    return ::uIs(obj, ::app::Uno::Float__typeof());
}

void DataBinding__float__Fuse_Reactive_IObserver_OnAdd(DataBinding__float* __this, ::uObject* addedValue)
{
    U_THROW(::app::Uno::Exception__New_2(NULL, ::uGetConstString("Not handled: OnAdd")));
}

void DataBinding__float__Fuse_Reactive_IObserver_OnFailed(DataBinding__float* __this, ::uString* message)
{
    U_THROW(::app::Uno::Exception__New_2(NULL, ::uGetConstString("Not handled: OnFailed")));
}

void DataBinding__float__Fuse_Reactive_IObserver_OnNewAll(DataBinding__float* __this, int length)
{
    if (length > 0)
    {
        U_THROW(::app::Uno::Exception__New_2(NULL, ::uGetConstString("Not handled: OnNewAll")));
    }
}

void DataBinding__float__Fuse_Reactive_IObserver_OnNewAt(DataBinding__float* __this, int index, ::uObject* value)
{
    U_THROW(::app::Uno::Exception__New_2(NULL, ::uGetConstString("Not handled: OnNewAt")));
}

void DataBinding__float__Fuse_Reactive_IObserver_OnRemove(DataBinding__float* __this, ::uObject* value, int index)
{
    U_THROW(::app::Uno::Exception__New_2(NULL, ::uGetConstString("Not handled: OnRemoveAt")));
}

void DataBinding__float__Fuse_Reactive_IObserver_OnSet(DataBinding__float* __this, ::uObject* newValue)
{
    __this->PushValue(newValue);
}

void DataBinding__float__Fuse_Scripting_INameListener_OnNameChanged(DataBinding__float* __this, ::uObject* obj, ::uString* name)
{
    __this->PushValue(__this->_currentValue);
}

::app::Uno::UX::Property__float* DataBinding__float__get_Target(DataBinding__float* __this)
{
    return __this->_Target;
}

DataBinding__float* DataBinding__float__New_1(::uStatic* __this, ::app::Uno::UX::Property__float* target, ::uString* key)
{
    DataBinding__float* inst = (DataBinding__float*)::uAllocObject(sizeof(DataBinding__float), DataBinding__float__typeof());
    inst->_ObjInit_2(target, key);
    return inst;
}

void DataBinding__float__NewValue(DataBinding__float* __this, ::uObject* value)
{
    if (::uIs(value, ::app::Uno::Float__typeof()))
    {
        __this->PushValue(value);
    }
    else if (::uIs(value, ::app::Fuse::Reactive::IObservable__typeof()))
    {
        if (__this->_subscription != NULL)
        {
            ::app::Uno::IDisposable::Dispose(::uPtr< ::uObject*>(__this->_subscription));
            __this->_subscription = NULL;
        }

        ::uObject* obs = ::uAs< ::uObject*>(value, ::app::Fuse::Reactive::IObservable__typeof());

        if (obs != NULL)
        {
            __this->_subscription = ::app::Fuse::Reactive::IObservable::Subscribe(::uPtr< ::uObject*>(obs), (::uObject*)__this);
        }
    }
    else
    {
        __this->PushValue(value);
    }
}

void DataBinding__float__OnRooted(DataBinding__float* __this, ::app::Fuse::Node* n)
{
    ::uPtr< ::app::Uno::UX::Property__float*>(__this->Target())->add_ValueChanged(::uNewDelegateNonVirt(::app::Uno::UX::ValueChangedHandler__float__typeof(), (const void*)DataBinding__float__OnValueChanged, __this));
    ::app::Fuse::Reactive::Binding__OnRooted(__this, n);
}

void DataBinding__float__OnUnrooted(DataBinding__float* __this, ::app::Fuse::Node* n)
{
    ::app::Fuse::Scripting::NameRegistry__RemoveListener(NULL, (::uObject*)__this);
    ::uPtr< ::app::Uno::UX::Property__float*>(__this->Target())->remove_ValueChanged(::uNewDelegateNonVirt(::app::Uno::UX::ValueChangedHandler__float__typeof(), (const void*)DataBinding__float__OnValueChanged, __this));

    if (__this->_subscription != NULL)
    {
        ::app::Uno::IDisposable::Dispose(::uPtr< ::uObject*>(__this->_subscription));
        __this->_subscription = NULL;
    }

    ::app::Fuse::Reactive::Binding__OnUnrooted(__this, n);
}

void DataBinding__float__OnValueChanged(DataBinding__float* __this, ::uObject* sender, ::app::Uno::UX::ValueChangedArgs__float* args)
{
    if ((__this->_subscription != NULL) && (::uPtr< ::app::Uno::UX::ValueChangedArgs__float*>(args)->Origin() != __this))
    {
        ::app::Fuse::Reactive::ISubscription::SetExclusive(::uPtr< ::uObject*>(__this->_subscription), ::uBox(::app::Uno::Float__typeof(), ::uPtr< ::app::Uno::UX::ValueChangedArgs__float*>(args)->Value()));
    }
}

void DataBinding__float__PushValue(DataBinding__float* __this, ::uObject* newValue)
{
    __this->_currentValue = newValue;

    if (::uIs(newValue, ::app::Uno::Float__typeof()))
    {
        ::app::Fuse::Scripting::NameRegistry__RemoveListener(NULL, (::uObject*)__this);
        ::uPtr< ::app::Uno::UX::Property__float*>(__this->Target())->SetRestState(::uUnbox< float>(::app::Uno::Float__typeof(), newValue), (::uObject*)__this);
        return;
    }

    ::uString* name = ::uAs< ::uString*>(newValue, ::app::Uno::String__typeof());

    if (::app::Uno::String__op_Inequality(NULL, name, NULL) && (__this->Node() != NULL))
    {
        ::app::Fuse::Scripting::NameRegistry__AddListener(NULL, name, (::uObject*)__this);
        ::app::Fuse::Node* k = ::uPtr< ::app::Fuse::Node*>(__this->Node())->FindNodeByName(::uCast< ::uString*>(newValue, ::app::Uno::String__typeof()));

        if (::uIs(k, ::app::Uno::Float__typeof()))
        {
            ::uPtr< ::app::Uno::UX::Property__float*>(__this->Target())->SetRestState(::uUnbox< float>(::app::Uno::Float__typeof(), (::uObject*)k), (::uObject*)__this);
            return;
        }
        else
        {
            ::uObject* candidate = ::uPtr< ::app::Fuse::Node*>(__this->Node())->FindObjectByName(::uCast< ::uString*>(newValue, ::app::Uno::String__typeof()), ::uNewDelegateNonVirt(::app::Uno::Predicate__object__typeof(), (const void*)DataBinding__float__Acceptor, __this));

            if (::uIs(candidate, ::app::Uno::Float__typeof()))
            {
                ::uPtr< ::app::Uno::UX::Property__float*>(__this->Target())->SetRestState(::uUnbox< float>(::app::Uno::Float__typeof(), candidate), (::uObject*)__this);
                return;
            }
        }
    }

    ::app::Fuse::Reactive::Marshal__ToType__float(NULL, newValue, ::uNewDelegateNonVirt(::app::Uno::Action__float__typeof(), (const void*)DataBinding__float__SetValue, __this));
}

void DataBinding__float__set_Target(DataBinding__float* __this, ::app::Uno::UX::Property__float* value)
{
    __this->_Target = value;
}

void DataBinding__float__SetValue(DataBinding__float* __this, float value)
{
    ::uPtr< ::app::Uno::UX::Property__float*>(__this->Target())->SetRestState(value, (::uObject*)__this);
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Reactive\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

DataBinding__float2__uType* DataBinding__float2__typeof()
{
    static ::uStaticStrong<DataBinding__float2__uType*> type;
    if (type != NULL) return type;

    type = (DataBinding__float2__uType*)::uAllocClassType(sizeof(DataBinding__float2__uType), "Fuse.Reactive.DataBinding<float2>", false, 2, 3, 0);

    type->SetBaseType(::app::Fuse::Reactive::Binding__typeof());
    type->__fp_NewValue = (void(*)(::app::Fuse::Reactive::Binding*, ::uObject*))DataBinding__float2__NewValue;
    type->__fp_OnRooted = (void(*)(::app::Fuse::Behavior*, ::app::Fuse::Node*))DataBinding__float2__OnRooted;
    type->__fp_OnUnrooted = (void(*)(::app::Fuse::Behavior*, ::app::Fuse::Node*))DataBinding__float2__OnUnrooted;
    type->__interface_0.__fp_OnSet = (void(*)(void*, ::uObject*))DataBinding__float2__Fuse_Reactive_IObserver_OnSet;
    type->__interface_0.__fp_OnAdd = (void(*)(void*, ::uObject*))DataBinding__float2__Fuse_Reactive_IObserver_OnAdd;
    type->__interface_0.__fp_OnNewAt = (void(*)(void*, int, ::uObject*))DataBinding__float2__Fuse_Reactive_IObserver_OnNewAt;
    type->__interface_0.__fp_OnFailed = (void(*)(void*, ::uString*))DataBinding__float2__Fuse_Reactive_IObserver_OnFailed;
    type->__interface_0.__fp_OnNewAll = (void(*)(void*, int))DataBinding__float2__Fuse_Reactive_IObserver_OnNewAll;
    type->__interface_0.__fp_OnRemove = (void(*)(void*, ::uObject*, int))DataBinding__float2__Fuse_Reactive_IObserver_OnRemove;
    type->__interface_1.__fp_OnNameChanged = (void(*)(void*, ::uObject*, ::uString*))DataBinding__float2__Fuse_Scripting_INameListener_OnNameChanged;

    type->SetInterfaces(
        ::app::Fuse::Reactive::IObserver__typeof(), offsetof(DataBinding__float2__uType, __interface_0),
        ::app::Fuse::Scripting::INameListener__typeof(), offsetof(DataBinding__float2__uType, __interface_1));

    type->SetStrongRefs(
        "_currentValue", offsetof(DataBinding__float2, _currentValue),
        "_subscription", offsetof(DataBinding__float2, _subscription),
        "_Target", offsetof(DataBinding__float2, _Target));

    type->SetFields(2,
        ::uNewField("_currentValue", NULL, offsetof(DataBinding__float2, _currentValue), ::uObject__typeof()),
        ::uNewField("_subscription", NULL, offsetof(DataBinding__float2, _subscription), ::app::Fuse::Reactive::ISubscription__typeof()));

    type->SetFunctions(3,
        ::uNewFunction("get_Target", DataBinding__float2__get_Target, 0, false, ::app::Uno::UX::Property__float2__typeof()),
        ::uNewFunction(".ctor", DataBinding__float2__New_1, 0, true, DataBinding__float2__typeof(), ::app::Uno::UX::Property__float2__typeof(), ::app::Uno::String__typeof()),
        ::uNewFunctionVoid("set_Target", DataBinding__float2__set_Target, 0, false, ::app::Uno::UX::Property__float2__typeof()));

    ::uRegisterType(type);
    return type;
}

void DataBinding__float2___ObjInit_2(DataBinding__float2* __this, ::app::Uno::UX::Property__float2* target, ::uString* key)
{
    ::app::Fuse::Reactive::Binding___ObjInit_1(__this, key);
    __this->Target(target);
}

bool DataBinding__float2__Acceptor(DataBinding__float2* __this, ::uObject* obj)
{
    return ::uIs(obj, ::app::Uno::Float2__typeof());
}

void DataBinding__float2__Fuse_Reactive_IObserver_OnAdd(DataBinding__float2* __this, ::uObject* addedValue)
{
    U_THROW(::app::Uno::Exception__New_2(NULL, ::uGetConstString("Not handled: OnAdd")));
}

void DataBinding__float2__Fuse_Reactive_IObserver_OnFailed(DataBinding__float2* __this, ::uString* message)
{
    U_THROW(::app::Uno::Exception__New_2(NULL, ::uGetConstString("Not handled: OnFailed")));
}

void DataBinding__float2__Fuse_Reactive_IObserver_OnNewAll(DataBinding__float2* __this, int length)
{
    if (length > 0)
    {
        U_THROW(::app::Uno::Exception__New_2(NULL, ::uGetConstString("Not handled: OnNewAll")));
    }
}

void DataBinding__float2__Fuse_Reactive_IObserver_OnNewAt(DataBinding__float2* __this, int index, ::uObject* value)
{
    U_THROW(::app::Uno::Exception__New_2(NULL, ::uGetConstString("Not handled: OnNewAt")));
}

void DataBinding__float2__Fuse_Reactive_IObserver_OnRemove(DataBinding__float2* __this, ::uObject* value, int index)
{
    U_THROW(::app::Uno::Exception__New_2(NULL, ::uGetConstString("Not handled: OnRemoveAt")));
}

void DataBinding__float2__Fuse_Reactive_IObserver_OnSet(DataBinding__float2* __this, ::uObject* newValue)
{
    __this->PushValue(newValue);
}

void DataBinding__float2__Fuse_Scripting_INameListener_OnNameChanged(DataBinding__float2* __this, ::uObject* obj, ::uString* name)
{
    __this->PushValue(__this->_currentValue);
}

::app::Uno::UX::Property__float2* DataBinding__float2__get_Target(DataBinding__float2* __this)
{
    return __this->_Target;
}

DataBinding__float2* DataBinding__float2__New_1(::uStatic* __this, ::app::Uno::UX::Property__float2* target, ::uString* key)
{
    DataBinding__float2* inst = (DataBinding__float2*)::uAllocObject(sizeof(DataBinding__float2), DataBinding__float2__typeof());
    inst->_ObjInit_2(target, key);
    return inst;
}

void DataBinding__float2__NewValue(DataBinding__float2* __this, ::uObject* value)
{
    if (::uIs(value, ::app::Uno::Float2__typeof()))
    {
        __this->PushValue(value);
    }
    else if (::uIs(value, ::app::Fuse::Reactive::IObservable__typeof()))
    {
        if (__this->_subscription != NULL)
        {
            ::app::Uno::IDisposable::Dispose(::uPtr< ::uObject*>(__this->_subscription));
            __this->_subscription = NULL;
        }

        ::uObject* obs = ::uAs< ::uObject*>(value, ::app::Fuse::Reactive::IObservable__typeof());

        if (obs != NULL)
        {
            __this->_subscription = ::app::Fuse::Reactive::IObservable::Subscribe(::uPtr< ::uObject*>(obs), (::uObject*)__this);
        }
    }
    else
    {
        __this->PushValue(value);
    }
}

void DataBinding__float2__OnRooted(DataBinding__float2* __this, ::app::Fuse::Node* n)
{
    ::uPtr< ::app::Uno::UX::Property__float2*>(__this->Target())->add_ValueChanged(::uNewDelegateNonVirt(::app::Uno::UX::ValueChangedHandler__float2__typeof(), (const void*)DataBinding__float2__OnValueChanged, __this));
    ::app::Fuse::Reactive::Binding__OnRooted(__this, n);
}

void DataBinding__float2__OnUnrooted(DataBinding__float2* __this, ::app::Fuse::Node* n)
{
    ::app::Fuse::Scripting::NameRegistry__RemoveListener(NULL, (::uObject*)__this);
    ::uPtr< ::app::Uno::UX::Property__float2*>(__this->Target())->remove_ValueChanged(::uNewDelegateNonVirt(::app::Uno::UX::ValueChangedHandler__float2__typeof(), (const void*)DataBinding__float2__OnValueChanged, __this));

    if (__this->_subscription != NULL)
    {
        ::app::Uno::IDisposable::Dispose(::uPtr< ::uObject*>(__this->_subscription));
        __this->_subscription = NULL;
    }

    ::app::Fuse::Reactive::Binding__OnUnrooted(__this, n);
}

void DataBinding__float2__OnValueChanged(DataBinding__float2* __this, ::uObject* sender, ::app::Uno::UX::ValueChangedArgs__float2* args)
{
    if ((__this->_subscription != NULL) && (::uPtr< ::app::Uno::UX::ValueChangedArgs__float2*>(args)->Origin() != __this))
    {
        ::app::Fuse::Reactive::ISubscription::SetExclusive(::uPtr< ::uObject*>(__this->_subscription), ::uBox(::app::Uno::Float2__typeof(), ::uPtr< ::app::Uno::UX::ValueChangedArgs__float2*>(args)->Value()));
    }
}

void DataBinding__float2__PushValue(DataBinding__float2* __this, ::uObject* newValue)
{
    __this->_currentValue = newValue;

    if (::uIs(newValue, ::app::Uno::Float2__typeof()))
    {
        ::app::Fuse::Scripting::NameRegistry__RemoveListener(NULL, (::uObject*)__this);
        ::uPtr< ::app::Uno::UX::Property__float2*>(__this->Target())->SetRestState(::uUnbox< ::app::Uno::Float2>(::app::Uno::Float2__typeof(), newValue), (::uObject*)__this);
        return;
    }

    ::uString* name = ::uAs< ::uString*>(newValue, ::app::Uno::String__typeof());

    if (::app::Uno::String__op_Inequality(NULL, name, NULL) && (__this->Node() != NULL))
    {
        ::app::Fuse::Scripting::NameRegistry__AddListener(NULL, name, (::uObject*)__this);
        ::app::Fuse::Node* k = ::uPtr< ::app::Fuse::Node*>(__this->Node())->FindNodeByName(::uCast< ::uString*>(newValue, ::app::Uno::String__typeof()));

        if (::uIs(k, ::app::Uno::Float2__typeof()))
        {
            ::uPtr< ::app::Uno::UX::Property__float2*>(__this->Target())->SetRestState(::uUnbox< ::app::Uno::Float2>(::app::Uno::Float2__typeof(), (::uObject*)k), (::uObject*)__this);
            return;
        }
        else
        {
            ::uObject* candidate = ::uPtr< ::app::Fuse::Node*>(__this->Node())->FindObjectByName(::uCast< ::uString*>(newValue, ::app::Uno::String__typeof()), ::uNewDelegateNonVirt(::app::Uno::Predicate__object__typeof(), (const void*)DataBinding__float2__Acceptor, __this));

            if (::uIs(candidate, ::app::Uno::Float2__typeof()))
            {
                ::uPtr< ::app::Uno::UX::Property__float2*>(__this->Target())->SetRestState(::uUnbox< ::app::Uno::Float2>(::app::Uno::Float2__typeof(), candidate), (::uObject*)__this);
                return;
            }
        }
    }

    ::app::Fuse::Reactive::Marshal__ToType__float2(NULL, newValue, ::uNewDelegateNonVirt(::app::Uno::Action__float2__typeof(), (const void*)DataBinding__float2__SetValue, __this));
}

void DataBinding__float2__set_Target(DataBinding__float2* __this, ::app::Uno::UX::Property__float2* value)
{
    __this->_Target = value;
}

void DataBinding__float2__SetValue(DataBinding__float2* __this, ::app::Uno::Float2 value)
{
    ::uPtr< ::app::Uno::UX::Property__float2*>(__this->Target())->SetRestState(value, (::uObject*)__this);
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Reactive\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

DataBinding__float3__uType* DataBinding__float3__typeof()
{
    static ::uStaticStrong<DataBinding__float3__uType*> type;
    if (type != NULL) return type;

    type = (DataBinding__float3__uType*)::uAllocClassType(sizeof(DataBinding__float3__uType), "Fuse.Reactive.DataBinding<float3>", false, 2, 3, 0);

    type->SetBaseType(::app::Fuse::Reactive::Binding__typeof());
    type->__fp_NewValue = (void(*)(::app::Fuse::Reactive::Binding*, ::uObject*))DataBinding__float3__NewValue;
    type->__fp_OnRooted = (void(*)(::app::Fuse::Behavior*, ::app::Fuse::Node*))DataBinding__float3__OnRooted;
    type->__fp_OnUnrooted = (void(*)(::app::Fuse::Behavior*, ::app::Fuse::Node*))DataBinding__float3__OnUnrooted;
    type->__interface_0.__fp_OnSet = (void(*)(void*, ::uObject*))DataBinding__float3__Fuse_Reactive_IObserver_OnSet;
    type->__interface_0.__fp_OnAdd = (void(*)(void*, ::uObject*))DataBinding__float3__Fuse_Reactive_IObserver_OnAdd;
    type->__interface_0.__fp_OnNewAt = (void(*)(void*, int, ::uObject*))DataBinding__float3__Fuse_Reactive_IObserver_OnNewAt;
    type->__interface_0.__fp_OnFailed = (void(*)(void*, ::uString*))DataBinding__float3__Fuse_Reactive_IObserver_OnFailed;
    type->__interface_0.__fp_OnNewAll = (void(*)(void*, int))DataBinding__float3__Fuse_Reactive_IObserver_OnNewAll;
    type->__interface_0.__fp_OnRemove = (void(*)(void*, ::uObject*, int))DataBinding__float3__Fuse_Reactive_IObserver_OnRemove;
    type->__interface_1.__fp_OnNameChanged = (void(*)(void*, ::uObject*, ::uString*))DataBinding__float3__Fuse_Scripting_INameListener_OnNameChanged;

    type->SetInterfaces(
        ::app::Fuse::Reactive::IObserver__typeof(), offsetof(DataBinding__float3__uType, __interface_0),
        ::app::Fuse::Scripting::INameListener__typeof(), offsetof(DataBinding__float3__uType, __interface_1));

    type->SetStrongRefs(
        "_currentValue", offsetof(DataBinding__float3, _currentValue),
        "_subscription", offsetof(DataBinding__float3, _subscription),
        "_Target", offsetof(DataBinding__float3, _Target));

    type->SetFields(2,
        ::uNewField("_currentValue", NULL, offsetof(DataBinding__float3, _currentValue), ::uObject__typeof()),
        ::uNewField("_subscription", NULL, offsetof(DataBinding__float3, _subscription), ::app::Fuse::Reactive::ISubscription__typeof()));

    type->SetFunctions(3,
        ::uNewFunction("get_Target", DataBinding__float3__get_Target, 0, false, ::app::Uno::UX::Property__float3__typeof()),
        ::uNewFunction(".ctor", DataBinding__float3__New_1, 0, true, DataBinding__float3__typeof(), ::app::Uno::UX::Property__float3__typeof(), ::app::Uno::String__typeof()),
        ::uNewFunctionVoid("set_Target", DataBinding__float3__set_Target, 0, false, ::app::Uno::UX::Property__float3__typeof()));

    ::uRegisterType(type);
    return type;
}

void DataBinding__float3___ObjInit_2(DataBinding__float3* __this, ::app::Uno::UX::Property__float3* target, ::uString* key)
{
    ::app::Fuse::Reactive::Binding___ObjInit_1(__this, key);
    __this->Target(target);
}

bool DataBinding__float3__Acceptor(DataBinding__float3* __this, ::uObject* obj)
{
    return ::uIs(obj, ::app::Uno::Float3__typeof());
}

void DataBinding__float3__Fuse_Reactive_IObserver_OnAdd(DataBinding__float3* __this, ::uObject* addedValue)
{
    U_THROW(::app::Uno::Exception__New_2(NULL, ::uGetConstString("Not handled: OnAdd")));
}

void DataBinding__float3__Fuse_Reactive_IObserver_OnFailed(DataBinding__float3* __this, ::uString* message)
{
    U_THROW(::app::Uno::Exception__New_2(NULL, ::uGetConstString("Not handled: OnFailed")));
}

void DataBinding__float3__Fuse_Reactive_IObserver_OnNewAll(DataBinding__float3* __this, int length)
{
    if (length > 0)
    {
        U_THROW(::app::Uno::Exception__New_2(NULL, ::uGetConstString("Not handled: OnNewAll")));
    }
}

void DataBinding__float3__Fuse_Reactive_IObserver_OnNewAt(DataBinding__float3* __this, int index, ::uObject* value)
{
    U_THROW(::app::Uno::Exception__New_2(NULL, ::uGetConstString("Not handled: OnNewAt")));
}

void DataBinding__float3__Fuse_Reactive_IObserver_OnRemove(DataBinding__float3* __this, ::uObject* value, int index)
{
    U_THROW(::app::Uno::Exception__New_2(NULL, ::uGetConstString("Not handled: OnRemoveAt")));
}

void DataBinding__float3__Fuse_Reactive_IObserver_OnSet(DataBinding__float3* __this, ::uObject* newValue)
{
    __this->PushValue(newValue);
}

void DataBinding__float3__Fuse_Scripting_INameListener_OnNameChanged(DataBinding__float3* __this, ::uObject* obj, ::uString* name)
{
    __this->PushValue(__this->_currentValue);
}

::app::Uno::UX::Property__float3* DataBinding__float3__get_Target(DataBinding__float3* __this)
{
    return __this->_Target;
}

DataBinding__float3* DataBinding__float3__New_1(::uStatic* __this, ::app::Uno::UX::Property__float3* target, ::uString* key)
{
    DataBinding__float3* inst = (DataBinding__float3*)::uAllocObject(sizeof(DataBinding__float3), DataBinding__float3__typeof());
    inst->_ObjInit_2(target, key);
    return inst;
}

void DataBinding__float3__NewValue(DataBinding__float3* __this, ::uObject* value)
{
    if (::uIs(value, ::app::Uno::Float3__typeof()))
    {
        __this->PushValue(value);
    }
    else if (::uIs(value, ::app::Fuse::Reactive::IObservable__typeof()))
    {
        if (__this->_subscription != NULL)
        {
            ::app::Uno::IDisposable::Dispose(::uPtr< ::uObject*>(__this->_subscription));
            __this->_subscription = NULL;
        }

        ::uObject* obs = ::uAs< ::uObject*>(value, ::app::Fuse::Reactive::IObservable__typeof());

        if (obs != NULL)
        {
            __this->_subscription = ::app::Fuse::Reactive::IObservable::Subscribe(::uPtr< ::uObject*>(obs), (::uObject*)__this);
        }
    }
    else
    {
        __this->PushValue(value);
    }
}

void DataBinding__float3__OnRooted(DataBinding__float3* __this, ::app::Fuse::Node* n)
{
    ::uPtr< ::app::Uno::UX::Property__float3*>(__this->Target())->add_ValueChanged(::uNewDelegateNonVirt(::app::Uno::UX::ValueChangedHandler__float3__typeof(), (const void*)DataBinding__float3__OnValueChanged, __this));
    ::app::Fuse::Reactive::Binding__OnRooted(__this, n);
}

void DataBinding__float3__OnUnrooted(DataBinding__float3* __this, ::app::Fuse::Node* n)
{
    ::app::Fuse::Scripting::NameRegistry__RemoveListener(NULL, (::uObject*)__this);
    ::uPtr< ::app::Uno::UX::Property__float3*>(__this->Target())->remove_ValueChanged(::uNewDelegateNonVirt(::app::Uno::UX::ValueChangedHandler__float3__typeof(), (const void*)DataBinding__float3__OnValueChanged, __this));

    if (__this->_subscription != NULL)
    {
        ::app::Uno::IDisposable::Dispose(::uPtr< ::uObject*>(__this->_subscription));
        __this->_subscription = NULL;
    }

    ::app::Fuse::Reactive::Binding__OnUnrooted(__this, n);
}

void DataBinding__float3__OnValueChanged(DataBinding__float3* __this, ::uObject* sender, ::app::Uno::UX::ValueChangedArgs__float3* args)
{
    if ((__this->_subscription != NULL) && (::uPtr< ::app::Uno::UX::ValueChangedArgs__float3*>(args)->Origin() != __this))
    {
        ::app::Fuse::Reactive::ISubscription::SetExclusive(::uPtr< ::uObject*>(__this->_subscription), ::uBox(::app::Uno::Float3__typeof(), ::uPtr< ::app::Uno::UX::ValueChangedArgs__float3*>(args)->Value()));
    }
}

void DataBinding__float3__PushValue(DataBinding__float3* __this, ::uObject* newValue)
{
    __this->_currentValue = newValue;

    if (::uIs(newValue, ::app::Uno::Float3__typeof()))
    {
        ::app::Fuse::Scripting::NameRegistry__RemoveListener(NULL, (::uObject*)__this);
        ::uPtr< ::app::Uno::UX::Property__float3*>(__this->Target())->SetRestState(::uUnbox< ::app::Uno::Float3>(::app::Uno::Float3__typeof(), newValue), (::uObject*)__this);
        return;
    }

    ::uString* name = ::uAs< ::uString*>(newValue, ::app::Uno::String__typeof());

    if (::app::Uno::String__op_Inequality(NULL, name, NULL) && (__this->Node() != NULL))
    {
        ::app::Fuse::Scripting::NameRegistry__AddListener(NULL, name, (::uObject*)__this);
        ::app::Fuse::Node* k = ::uPtr< ::app::Fuse::Node*>(__this->Node())->FindNodeByName(::uCast< ::uString*>(newValue, ::app::Uno::String__typeof()));

        if (::uIs(k, ::app::Uno::Float3__typeof()))
        {
            ::uPtr< ::app::Uno::UX::Property__float3*>(__this->Target())->SetRestState(::uUnbox< ::app::Uno::Float3>(::app::Uno::Float3__typeof(), (::uObject*)k), (::uObject*)__this);
            return;
        }
        else
        {
            ::uObject* candidate = ::uPtr< ::app::Fuse::Node*>(__this->Node())->FindObjectByName(::uCast< ::uString*>(newValue, ::app::Uno::String__typeof()), ::uNewDelegateNonVirt(::app::Uno::Predicate__object__typeof(), (const void*)DataBinding__float3__Acceptor, __this));

            if (::uIs(candidate, ::app::Uno::Float3__typeof()))
            {
                ::uPtr< ::app::Uno::UX::Property__float3*>(__this->Target())->SetRestState(::uUnbox< ::app::Uno::Float3>(::app::Uno::Float3__typeof(), candidate), (::uObject*)__this);
                return;
            }
        }
    }

    ::app::Fuse::Reactive::Marshal__ToType__float3(NULL, newValue, ::uNewDelegateNonVirt(::app::Uno::Action__float3__typeof(), (const void*)DataBinding__float3__SetValue, __this));
}

void DataBinding__float3__set_Target(DataBinding__float3* __this, ::app::Uno::UX::Property__float3* value)
{
    __this->_Target = value;
}

void DataBinding__float3__SetValue(DataBinding__float3* __this, ::app::Uno::Float3 value)
{
    ::uPtr< ::app::Uno::UX::Property__float3*>(__this->Target())->SetRestState(value, (::uObject*)__this);
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Reactive\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

DataBinding__float4__uType* DataBinding__float4__typeof()
{
    static ::uStaticStrong<DataBinding__float4__uType*> type;
    if (type != NULL) return type;

    type = (DataBinding__float4__uType*)::uAllocClassType(sizeof(DataBinding__float4__uType), "Fuse.Reactive.DataBinding<float4>", false, 2, 3, 0);

    type->SetBaseType(::app::Fuse::Reactive::Binding__typeof());
    type->__fp_NewValue = (void(*)(::app::Fuse::Reactive::Binding*, ::uObject*))DataBinding__float4__NewValue;
    type->__fp_OnRooted = (void(*)(::app::Fuse::Behavior*, ::app::Fuse::Node*))DataBinding__float4__OnRooted;
    type->__fp_OnUnrooted = (void(*)(::app::Fuse::Behavior*, ::app::Fuse::Node*))DataBinding__float4__OnUnrooted;
    type->__interface_0.__fp_OnSet = (void(*)(void*, ::uObject*))DataBinding__float4__Fuse_Reactive_IObserver_OnSet;
    type->__interface_0.__fp_OnAdd = (void(*)(void*, ::uObject*))DataBinding__float4__Fuse_Reactive_IObserver_OnAdd;
    type->__interface_0.__fp_OnNewAt = (void(*)(void*, int, ::uObject*))DataBinding__float4__Fuse_Reactive_IObserver_OnNewAt;
    type->__interface_0.__fp_OnFailed = (void(*)(void*, ::uString*))DataBinding__float4__Fuse_Reactive_IObserver_OnFailed;
    type->__interface_0.__fp_OnNewAll = (void(*)(void*, int))DataBinding__float4__Fuse_Reactive_IObserver_OnNewAll;
    type->__interface_0.__fp_OnRemove = (void(*)(void*, ::uObject*, int))DataBinding__float4__Fuse_Reactive_IObserver_OnRemove;
    type->__interface_1.__fp_OnNameChanged = (void(*)(void*, ::uObject*, ::uString*))DataBinding__float4__Fuse_Scripting_INameListener_OnNameChanged;

    type->SetInterfaces(
        ::app::Fuse::Reactive::IObserver__typeof(), offsetof(DataBinding__float4__uType, __interface_0),
        ::app::Fuse::Scripting::INameListener__typeof(), offsetof(DataBinding__float4__uType, __interface_1));

    type->SetStrongRefs(
        "_currentValue", offsetof(DataBinding__float4, _currentValue),
        "_subscription", offsetof(DataBinding__float4, _subscription),
        "_Target", offsetof(DataBinding__float4, _Target));

    type->SetFields(2,
        ::uNewField("_currentValue", NULL, offsetof(DataBinding__float4, _currentValue), ::uObject__typeof()),
        ::uNewField("_subscription", NULL, offsetof(DataBinding__float4, _subscription), ::app::Fuse::Reactive::ISubscription__typeof()));

    type->SetFunctions(3,
        ::uNewFunction("get_Target", DataBinding__float4__get_Target, 0, false, ::app::Uno::UX::Property__float4__typeof()),
        ::uNewFunction(".ctor", DataBinding__float4__New_1, 0, true, DataBinding__float4__typeof(), ::app::Uno::UX::Property__float4__typeof(), ::app::Uno::String__typeof()),
        ::uNewFunctionVoid("set_Target", DataBinding__float4__set_Target, 0, false, ::app::Uno::UX::Property__float4__typeof()));

    ::uRegisterType(type);
    return type;
}

void DataBinding__float4___ObjInit_2(DataBinding__float4* __this, ::app::Uno::UX::Property__float4* target, ::uString* key)
{
    ::app::Fuse::Reactive::Binding___ObjInit_1(__this, key);
    __this->Target(target);
}

bool DataBinding__float4__Acceptor(DataBinding__float4* __this, ::uObject* obj)
{
    return ::uIs(obj, ::app::Uno::Float4__typeof());
}

void DataBinding__float4__Fuse_Reactive_IObserver_OnAdd(DataBinding__float4* __this, ::uObject* addedValue)
{
    U_THROW(::app::Uno::Exception__New_2(NULL, ::uGetConstString("Not handled: OnAdd")));
}

void DataBinding__float4__Fuse_Reactive_IObserver_OnFailed(DataBinding__float4* __this, ::uString* message)
{
    U_THROW(::app::Uno::Exception__New_2(NULL, ::uGetConstString("Not handled: OnFailed")));
}

void DataBinding__float4__Fuse_Reactive_IObserver_OnNewAll(DataBinding__float4* __this, int length)
{
    if (length > 0)
    {
        U_THROW(::app::Uno::Exception__New_2(NULL, ::uGetConstString("Not handled: OnNewAll")));
    }
}

void DataBinding__float4__Fuse_Reactive_IObserver_OnNewAt(DataBinding__float4* __this, int index, ::uObject* value)
{
    U_THROW(::app::Uno::Exception__New_2(NULL, ::uGetConstString("Not handled: OnNewAt")));
}

void DataBinding__float4__Fuse_Reactive_IObserver_OnRemove(DataBinding__float4* __this, ::uObject* value, int index)
{
    U_THROW(::app::Uno::Exception__New_2(NULL, ::uGetConstString("Not handled: OnRemoveAt")));
}

void DataBinding__float4__Fuse_Reactive_IObserver_OnSet(DataBinding__float4* __this, ::uObject* newValue)
{
    __this->PushValue(newValue);
}

void DataBinding__float4__Fuse_Scripting_INameListener_OnNameChanged(DataBinding__float4* __this, ::uObject* obj, ::uString* name)
{
    __this->PushValue(__this->_currentValue);
}

::app::Uno::UX::Property__float4* DataBinding__float4__get_Target(DataBinding__float4* __this)
{
    return __this->_Target;
}

DataBinding__float4* DataBinding__float4__New_1(::uStatic* __this, ::app::Uno::UX::Property__float4* target, ::uString* key)
{
    DataBinding__float4* inst = (DataBinding__float4*)::uAllocObject(sizeof(DataBinding__float4), DataBinding__float4__typeof());
    inst->_ObjInit_2(target, key);
    return inst;
}

void DataBinding__float4__NewValue(DataBinding__float4* __this, ::uObject* value)
{
    if (::uIs(value, ::app::Uno::Float4__typeof()))
    {
        __this->PushValue(value);
    }
    else if (::uIs(value, ::app::Fuse::Reactive::IObservable__typeof()))
    {
        if (__this->_subscription != NULL)
        {
            ::app::Uno::IDisposable::Dispose(::uPtr< ::uObject*>(__this->_subscription));
            __this->_subscription = NULL;
        }

        ::uObject* obs = ::uAs< ::uObject*>(value, ::app::Fuse::Reactive::IObservable__typeof());

        if (obs != NULL)
        {
            __this->_subscription = ::app::Fuse::Reactive::IObservable::Subscribe(::uPtr< ::uObject*>(obs), (::uObject*)__this);
        }
    }
    else
    {
        __this->PushValue(value);
    }
}

void DataBinding__float4__OnRooted(DataBinding__float4* __this, ::app::Fuse::Node* n)
{
    ::uPtr< ::app::Uno::UX::Property__float4*>(__this->Target())->add_ValueChanged(::uNewDelegateNonVirt(::app::Uno::UX::ValueChangedHandler__float4__typeof(), (const void*)DataBinding__float4__OnValueChanged, __this));
    ::app::Fuse::Reactive::Binding__OnRooted(__this, n);
}

void DataBinding__float4__OnUnrooted(DataBinding__float4* __this, ::app::Fuse::Node* n)
{
    ::app::Fuse::Scripting::NameRegistry__RemoveListener(NULL, (::uObject*)__this);
    ::uPtr< ::app::Uno::UX::Property__float4*>(__this->Target())->remove_ValueChanged(::uNewDelegateNonVirt(::app::Uno::UX::ValueChangedHandler__float4__typeof(), (const void*)DataBinding__float4__OnValueChanged, __this));

    if (__this->_subscription != NULL)
    {
        ::app::Uno::IDisposable::Dispose(::uPtr< ::uObject*>(__this->_subscription));
        __this->_subscription = NULL;
    }

    ::app::Fuse::Reactive::Binding__OnUnrooted(__this, n);
}

void DataBinding__float4__OnValueChanged(DataBinding__float4* __this, ::uObject* sender, ::app::Uno::UX::ValueChangedArgs__float4* args)
{
    if ((__this->_subscription != NULL) && (::uPtr< ::app::Uno::UX::ValueChangedArgs__float4*>(args)->Origin() != __this))
    {
        ::app::Fuse::Reactive::ISubscription::SetExclusive(::uPtr< ::uObject*>(__this->_subscription), ::uBox(::app::Uno::Float4__typeof(), ::uPtr< ::app::Uno::UX::ValueChangedArgs__float4*>(args)->Value()));
    }
}

void DataBinding__float4__PushValue(DataBinding__float4* __this, ::uObject* newValue)
{
    __this->_currentValue = newValue;

    if (::uIs(newValue, ::app::Uno::Float4__typeof()))
    {
        ::app::Fuse::Scripting::NameRegistry__RemoveListener(NULL, (::uObject*)__this);
        ::uPtr< ::app::Uno::UX::Property__float4*>(__this->Target())->SetRestState(::uUnbox< ::app::Uno::Float4>(::app::Uno::Float4__typeof(), newValue), (::uObject*)__this);
        return;
    }

    ::uString* name = ::uAs< ::uString*>(newValue, ::app::Uno::String__typeof());

    if (::app::Uno::String__op_Inequality(NULL, name, NULL) && (__this->Node() != NULL))
    {
        ::app::Fuse::Scripting::NameRegistry__AddListener(NULL, name, (::uObject*)__this);
        ::app::Fuse::Node* k = ::uPtr< ::app::Fuse::Node*>(__this->Node())->FindNodeByName(::uCast< ::uString*>(newValue, ::app::Uno::String__typeof()));

        if (::uIs(k, ::app::Uno::Float4__typeof()))
        {
            ::uPtr< ::app::Uno::UX::Property__float4*>(__this->Target())->SetRestState(::uUnbox< ::app::Uno::Float4>(::app::Uno::Float4__typeof(), (::uObject*)k), (::uObject*)__this);
            return;
        }
        else
        {
            ::uObject* candidate = ::uPtr< ::app::Fuse::Node*>(__this->Node())->FindObjectByName(::uCast< ::uString*>(newValue, ::app::Uno::String__typeof()), ::uNewDelegateNonVirt(::app::Uno::Predicate__object__typeof(), (const void*)DataBinding__float4__Acceptor, __this));

            if (::uIs(candidate, ::app::Uno::Float4__typeof()))
            {
                ::uPtr< ::app::Uno::UX::Property__float4*>(__this->Target())->SetRestState(::uUnbox< ::app::Uno::Float4>(::app::Uno::Float4__typeof(), candidate), (::uObject*)__this);
                return;
            }
        }
    }

    ::app::Fuse::Reactive::Marshal__ToType__float4(NULL, newValue, ::uNewDelegateNonVirt(::app::Uno::Action__float4__typeof(), (const void*)DataBinding__float4__SetValue, __this));
}

void DataBinding__float4__set_Target(DataBinding__float4* __this, ::app::Uno::UX::Property__float4* value)
{
    __this->_Target = value;
}

void DataBinding__float4__SetValue(DataBinding__float4* __this, ::app::Uno::Float4 value)
{
    ::uPtr< ::app::Uno::UX::Property__float4*>(__this->Target())->SetRestState(value, (::uObject*)__this);
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Reactive\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

DataBinding__Fuse_Animations_AnimationVariant__uType* DataBinding__Fuse_Animations_AnimationVariant__typeof()
{
    static ::uStaticStrong<DataBinding__Fuse_Animations_AnimationVariant__uType*> type;
    if (type != NULL) return type;

    type = (DataBinding__Fuse_Animations_AnimationVariant__uType*)::uAllocClassType(sizeof(DataBinding__Fuse_Animations_AnimationVariant__uType), "Fuse.Reactive.DataBinding<Fuse.Animations.AnimationVariant>", false, 2, 3, 0);

    type->SetBaseType(::app::Fuse::Reactive::Binding__typeof());
    type->__fp_NewValue = (void(*)(::app::Fuse::Reactive::Binding*, ::uObject*))DataBinding__Fuse_Animations_AnimationVariant__NewValue;
    type->__fp_OnRooted = (void(*)(::app::Fuse::Behavior*, ::app::Fuse::Node*))DataBinding__Fuse_Animations_AnimationVariant__OnRooted;
    type->__fp_OnUnrooted = (void(*)(::app::Fuse::Behavior*, ::app::Fuse::Node*))DataBinding__Fuse_Animations_AnimationVariant__OnUnrooted;
    type->__interface_0.__fp_OnSet = (void(*)(void*, ::uObject*))DataBinding__Fuse_Animations_AnimationVariant__Fuse_Reactive_IObserver_OnSet;
    type->__interface_0.__fp_OnAdd = (void(*)(void*, ::uObject*))DataBinding__Fuse_Animations_AnimationVariant__Fuse_Reactive_IObserver_OnAdd;
    type->__interface_0.__fp_OnNewAt = (void(*)(void*, int, ::uObject*))DataBinding__Fuse_Animations_AnimationVariant__Fuse_Reactive_IObserver_OnNewAt;
    type->__interface_0.__fp_OnFailed = (void(*)(void*, ::uString*))DataBinding__Fuse_Animations_AnimationVariant__Fuse_Reactive_IObserver_OnFailed;
    type->__interface_0.__fp_OnNewAll = (void(*)(void*, int))DataBinding__Fuse_Animations_AnimationVariant__Fuse_Reactive_IObserver_OnNewAll;
    type->__interface_0.__fp_OnRemove = (void(*)(void*, ::uObject*, int))DataBinding__Fuse_Animations_AnimationVariant__Fuse_Reactive_IObserver_OnRemove;
    type->__interface_1.__fp_OnNameChanged = (void(*)(void*, ::uObject*, ::uString*))DataBinding__Fuse_Animations_AnimationVariant__Fuse_Scripting_INameListener_OnNameChanged;

    type->SetInterfaces(
        ::app::Fuse::Reactive::IObserver__typeof(), offsetof(DataBinding__Fuse_Animations_AnimationVariant__uType, __interface_0),
        ::app::Fuse::Scripting::INameListener__typeof(), offsetof(DataBinding__Fuse_Animations_AnimationVariant__uType, __interface_1));

    type->SetStrongRefs(
        "_currentValue", offsetof(DataBinding__Fuse_Animations_AnimationVariant, _currentValue),
        "_subscription", offsetof(DataBinding__Fuse_Animations_AnimationVariant, _subscription),
        "_Target", offsetof(DataBinding__Fuse_Animations_AnimationVariant, _Target));

    type->SetFields(2,
        ::uNewField("_currentValue", NULL, offsetof(DataBinding__Fuse_Animations_AnimationVariant, _currentValue), ::uObject__typeof()),
        ::uNewField("_subscription", NULL, offsetof(DataBinding__Fuse_Animations_AnimationVariant, _subscription), ::app::Fuse::Reactive::ISubscription__typeof()));

    type->SetFunctions(3,
        ::uNewFunction("get_Target", DataBinding__Fuse_Animations_AnimationVariant__get_Target, 0, false, ::app::Uno::UX::Property__Fuse_Animations_AnimationVariant__typeof()),
        ::uNewFunction(".ctor", DataBinding__Fuse_Animations_AnimationVariant__New_1, 0, true, DataBinding__Fuse_Animations_AnimationVariant__typeof(), ::app::Uno::UX::Property__Fuse_Animations_AnimationVariant__typeof(), ::app::Uno::String__typeof()),
        ::uNewFunctionVoid("set_Target", DataBinding__Fuse_Animations_AnimationVariant__set_Target, 0, false, ::app::Uno::UX::Property__Fuse_Animations_AnimationVariant__typeof()));

    ::uRegisterType(type);
    return type;
}

void DataBinding__Fuse_Animations_AnimationVariant___ObjInit_2(DataBinding__Fuse_Animations_AnimationVariant* __this, ::app::Uno::UX::Property__Fuse_Animations_AnimationVariant* target, ::uString* key)
{
    ::app::Fuse::Reactive::Binding___ObjInit_1(__this, key);
    __this->Target(target);
}

bool DataBinding__Fuse_Animations_AnimationVariant__Acceptor(DataBinding__Fuse_Animations_AnimationVariant* __this, ::uObject* obj)
{
    return ::uIs(obj, ::app::Fuse::Animations::AnimationVariant__typeof());
}

void DataBinding__Fuse_Animations_AnimationVariant__Fuse_Reactive_IObserver_OnAdd(DataBinding__Fuse_Animations_AnimationVariant* __this, ::uObject* addedValue)
{
    U_THROW(::app::Uno::Exception__New_2(NULL, ::uGetConstString("Not handled: OnAdd")));
}

void DataBinding__Fuse_Animations_AnimationVariant__Fuse_Reactive_IObserver_OnFailed(DataBinding__Fuse_Animations_AnimationVariant* __this, ::uString* message)
{
    U_THROW(::app::Uno::Exception__New_2(NULL, ::uGetConstString("Not handled: OnFailed")));
}

void DataBinding__Fuse_Animations_AnimationVariant__Fuse_Reactive_IObserver_OnNewAll(DataBinding__Fuse_Animations_AnimationVariant* __this, int length)
{
    if (length > 0)
    {
        U_THROW(::app::Uno::Exception__New_2(NULL, ::uGetConstString("Not handled: OnNewAll")));
    }
}

void DataBinding__Fuse_Animations_AnimationVariant__Fuse_Reactive_IObserver_OnNewAt(DataBinding__Fuse_Animations_AnimationVariant* __this, int index, ::uObject* value)
{
    U_THROW(::app::Uno::Exception__New_2(NULL, ::uGetConstString("Not handled: OnNewAt")));
}

void DataBinding__Fuse_Animations_AnimationVariant__Fuse_Reactive_IObserver_OnRemove(DataBinding__Fuse_Animations_AnimationVariant* __this, ::uObject* value, int index)
{
    U_THROW(::app::Uno::Exception__New_2(NULL, ::uGetConstString("Not handled: OnRemoveAt")));
}

void DataBinding__Fuse_Animations_AnimationVariant__Fuse_Reactive_IObserver_OnSet(DataBinding__Fuse_Animations_AnimationVariant* __this, ::uObject* newValue)
{
    __this->PushValue(newValue);
}

void DataBinding__Fuse_Animations_AnimationVariant__Fuse_Scripting_INameListener_OnNameChanged(DataBinding__Fuse_Animations_AnimationVariant* __this, ::uObject* obj, ::uString* name)
{
    __this->PushValue(__this->_currentValue);
}

::app::Uno::UX::Property__Fuse_Animations_AnimationVariant* DataBinding__Fuse_Animations_AnimationVariant__get_Target(DataBinding__Fuse_Animations_AnimationVariant* __this)
{
    return __this->_Target;
}

DataBinding__Fuse_Animations_AnimationVariant* DataBinding__Fuse_Animations_AnimationVariant__New_1(::uStatic* __this, ::app::Uno::UX::Property__Fuse_Animations_AnimationVariant* target, ::uString* key)
{
    DataBinding__Fuse_Animations_AnimationVariant* inst = (DataBinding__Fuse_Animations_AnimationVariant*)::uAllocObject(sizeof(DataBinding__Fuse_Animations_AnimationVariant), DataBinding__Fuse_Animations_AnimationVariant__typeof());
    inst->_ObjInit_2(target, key);
    return inst;
}

void DataBinding__Fuse_Animations_AnimationVariant__NewValue(DataBinding__Fuse_Animations_AnimationVariant* __this, ::uObject* value)
{
    if (::uIs(value, ::app::Fuse::Animations::AnimationVariant__typeof()))
    {
        __this->PushValue(value);
    }
    else if (::uIs(value, ::app::Fuse::Reactive::IObservable__typeof()))
    {
        if (__this->_subscription != NULL)
        {
            ::app::Uno::IDisposable::Dispose(::uPtr< ::uObject*>(__this->_subscription));
            __this->_subscription = NULL;
        }

        ::uObject* obs = ::uAs< ::uObject*>(value, ::app::Fuse::Reactive::IObservable__typeof());

        if (obs != NULL)
        {
            __this->_subscription = ::app::Fuse::Reactive::IObservable::Subscribe(::uPtr< ::uObject*>(obs), (::uObject*)__this);
        }
    }
    else
    {
        __this->PushValue(value);
    }
}

void DataBinding__Fuse_Animations_AnimationVariant__OnRooted(DataBinding__Fuse_Animations_AnimationVariant* __this, ::app::Fuse::Node* n)
{
    ::uPtr< ::app::Uno::UX::Property__Fuse_Animations_AnimationVariant*>(__this->Target())->add_ValueChanged(::uNewDelegateNonVirt(::app::Uno::UX::ValueChangedHandler__Fuse_Animations_AnimationVariant__typeof(), (const void*)DataBinding__Fuse_Animations_AnimationVariant__OnValueChanged, __this));
    ::app::Fuse::Reactive::Binding__OnRooted(__this, n);
}

void DataBinding__Fuse_Animations_AnimationVariant__OnUnrooted(DataBinding__Fuse_Animations_AnimationVariant* __this, ::app::Fuse::Node* n)
{
    ::app::Fuse::Scripting::NameRegistry__RemoveListener(NULL, (::uObject*)__this);
    ::uPtr< ::app::Uno::UX::Property__Fuse_Animations_AnimationVariant*>(__this->Target())->remove_ValueChanged(::uNewDelegateNonVirt(::app::Uno::UX::ValueChangedHandler__Fuse_Animations_AnimationVariant__typeof(), (const void*)DataBinding__Fuse_Animations_AnimationVariant__OnValueChanged, __this));

    if (__this->_subscription != NULL)
    {
        ::app::Uno::IDisposable::Dispose(::uPtr< ::uObject*>(__this->_subscription));
        __this->_subscription = NULL;
    }

    ::app::Fuse::Reactive::Binding__OnUnrooted(__this, n);
}

void DataBinding__Fuse_Animations_AnimationVariant__OnValueChanged(DataBinding__Fuse_Animations_AnimationVariant* __this, ::uObject* sender, ::app::Uno::UX::ValueChangedArgs__Fuse_Animations_AnimationVariant* args)
{
    if ((__this->_subscription != NULL) && (::uPtr< ::app::Uno::UX::ValueChangedArgs__Fuse_Animations_AnimationVariant*>(args)->Origin() != __this))
    {
        ::app::Fuse::Reactive::ISubscription::SetExclusive(::uPtr< ::uObject*>(__this->_subscription), ::uBox< int>(::app::Fuse::Animations::AnimationVariant__typeof(), ::uPtr< ::app::Uno::UX::ValueChangedArgs__Fuse_Animations_AnimationVariant*>(args)->Value()));
    }
}

void DataBinding__Fuse_Animations_AnimationVariant__PushValue(DataBinding__Fuse_Animations_AnimationVariant* __this, ::uObject* newValue)
{
    __this->_currentValue = newValue;

    if (::uIs(newValue, ::app::Fuse::Animations::AnimationVariant__typeof()))
    {
        ::app::Fuse::Scripting::NameRegistry__RemoveListener(NULL, (::uObject*)__this);
        ::uPtr< ::app::Uno::UX::Property__Fuse_Animations_AnimationVariant*>(__this->Target())->SetRestState(::uUnbox< int>(::app::Fuse::Animations::AnimationVariant__typeof(), newValue), (::uObject*)__this);
        return;
    }

    ::uString* name = ::uAs< ::uString*>(newValue, ::app::Uno::String__typeof());

    if (::app::Uno::String__op_Inequality(NULL, name, NULL) && (__this->Node() != NULL))
    {
        ::app::Fuse::Scripting::NameRegistry__AddListener(NULL, name, (::uObject*)__this);
        ::app::Fuse::Node* k = ::uPtr< ::app::Fuse::Node*>(__this->Node())->FindNodeByName(::uCast< ::uString*>(newValue, ::app::Uno::String__typeof()));

        if (::uIs(k, ::app::Fuse::Animations::AnimationVariant__typeof()))
        {
            ::uPtr< ::app::Uno::UX::Property__Fuse_Animations_AnimationVariant*>(__this->Target())->SetRestState(::uUnbox< int>(::app::Fuse::Animations::AnimationVariant__typeof(), (::uObject*)k), (::uObject*)__this);
            return;
        }
        else
        {
            ::uObject* candidate = ::uPtr< ::app::Fuse::Node*>(__this->Node())->FindObjectByName(::uCast< ::uString*>(newValue, ::app::Uno::String__typeof()), ::uNewDelegateNonVirt(::app::Uno::Predicate__object__typeof(), (const void*)DataBinding__Fuse_Animations_AnimationVariant__Acceptor, __this));

            if (::uIs(candidate, ::app::Fuse::Animations::AnimationVariant__typeof()))
            {
                ::uPtr< ::app::Uno::UX::Property__Fuse_Animations_AnimationVariant*>(__this->Target())->SetRestState(::uUnbox< int>(::app::Fuse::Animations::AnimationVariant__typeof(), candidate), (::uObject*)__this);
                return;
            }
        }
    }

    ::app::Fuse::Reactive::Marshal__ToType__Fuse_Animations_AnimationVariant(NULL, newValue, ::uNewDelegateNonVirt(::app::Uno::Action__Fuse_Animations_AnimationVariant__typeof(), (const void*)DataBinding__Fuse_Animations_AnimationVariant__SetValue, __this));
}

void DataBinding__Fuse_Animations_AnimationVariant__set_Target(DataBinding__Fuse_Animations_AnimationVariant* __this, ::app::Uno::UX::Property__Fuse_Animations_AnimationVariant* value)
{
    __this->_Target = value;
}

void DataBinding__Fuse_Animations_AnimationVariant__SetValue(DataBinding__Fuse_Animations_AnimationVariant* __this, int value)
{
    ::uPtr< ::app::Uno::UX::Property__Fuse_Animations_AnimationVariant*>(__this->Target())->SetRestState(value, (::uObject*)__this);
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Reactive\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

DataBinding__Fuse_Animations_Easing__uType* DataBinding__Fuse_Animations_Easing__typeof()
{
    static ::uStaticStrong<DataBinding__Fuse_Animations_Easing__uType*> type;
    if (type != NULL) return type;

    type = (DataBinding__Fuse_Animations_Easing__uType*)::uAllocClassType(sizeof(DataBinding__Fuse_Animations_Easing__uType), "Fuse.Reactive.DataBinding<Fuse.Animations.Easing>", false, 2, 3, 0);

    type->SetBaseType(::app::Fuse::Reactive::Binding__typeof());
    type->__fp_NewValue = (void(*)(::app::Fuse::Reactive::Binding*, ::uObject*))DataBinding__Fuse_Animations_Easing__NewValue;
    type->__fp_OnRooted = (void(*)(::app::Fuse::Behavior*, ::app::Fuse::Node*))DataBinding__Fuse_Animations_Easing__OnRooted;
    type->__fp_OnUnrooted = (void(*)(::app::Fuse::Behavior*, ::app::Fuse::Node*))DataBinding__Fuse_Animations_Easing__OnUnrooted;
    type->__interface_0.__fp_OnSet = (void(*)(void*, ::uObject*))DataBinding__Fuse_Animations_Easing__Fuse_Reactive_IObserver_OnSet;
    type->__interface_0.__fp_OnAdd = (void(*)(void*, ::uObject*))DataBinding__Fuse_Animations_Easing__Fuse_Reactive_IObserver_OnAdd;
    type->__interface_0.__fp_OnNewAt = (void(*)(void*, int, ::uObject*))DataBinding__Fuse_Animations_Easing__Fuse_Reactive_IObserver_OnNewAt;
    type->__interface_0.__fp_OnFailed = (void(*)(void*, ::uString*))DataBinding__Fuse_Animations_Easing__Fuse_Reactive_IObserver_OnFailed;
    type->__interface_0.__fp_OnNewAll = (void(*)(void*, int))DataBinding__Fuse_Animations_Easing__Fuse_Reactive_IObserver_OnNewAll;
    type->__interface_0.__fp_OnRemove = (void(*)(void*, ::uObject*, int))DataBinding__Fuse_Animations_Easing__Fuse_Reactive_IObserver_OnRemove;
    type->__interface_1.__fp_OnNameChanged = (void(*)(void*, ::uObject*, ::uString*))DataBinding__Fuse_Animations_Easing__Fuse_Scripting_INameListener_OnNameChanged;

    type->SetInterfaces(
        ::app::Fuse::Reactive::IObserver__typeof(), offsetof(DataBinding__Fuse_Animations_Easing__uType, __interface_0),
        ::app::Fuse::Scripting::INameListener__typeof(), offsetof(DataBinding__Fuse_Animations_Easing__uType, __interface_1));

    type->SetStrongRefs(
        "_currentValue", offsetof(DataBinding__Fuse_Animations_Easing, _currentValue),
        "_subscription", offsetof(DataBinding__Fuse_Animations_Easing, _subscription),
        "_Target", offsetof(DataBinding__Fuse_Animations_Easing, _Target));

    type->SetFields(2,
        ::uNewField("_currentValue", NULL, offsetof(DataBinding__Fuse_Animations_Easing, _currentValue), ::uObject__typeof()),
        ::uNewField("_subscription", NULL, offsetof(DataBinding__Fuse_Animations_Easing, _subscription), ::app::Fuse::Reactive::ISubscription__typeof()));

    type->SetFunctions(3,
        ::uNewFunction("get_Target", DataBinding__Fuse_Animations_Easing__get_Target, 0, false, ::app::Uno::UX::Property__Fuse_Animations_Easing__typeof()),
        ::uNewFunction(".ctor", DataBinding__Fuse_Animations_Easing__New_1, 0, true, DataBinding__Fuse_Animations_Easing__typeof(), ::app::Uno::UX::Property__Fuse_Animations_Easing__typeof(), ::app::Uno::String__typeof()),
        ::uNewFunctionVoid("set_Target", DataBinding__Fuse_Animations_Easing__set_Target, 0, false, ::app::Uno::UX::Property__Fuse_Animations_Easing__typeof()));

    ::uRegisterType(type);
    return type;
}

void DataBinding__Fuse_Animations_Easing___ObjInit_2(DataBinding__Fuse_Animations_Easing* __this, ::app::Uno::UX::Property__Fuse_Animations_Easing* target, ::uString* key)
{
    ::app::Fuse::Reactive::Binding___ObjInit_1(__this, key);
    __this->Target(target);
}

bool DataBinding__Fuse_Animations_Easing__Acceptor(DataBinding__Fuse_Animations_Easing* __this, ::uObject* obj)
{
    return ::uIs(obj, ::app::Fuse::Animations::Easing__typeof());
}

void DataBinding__Fuse_Animations_Easing__Fuse_Reactive_IObserver_OnAdd(DataBinding__Fuse_Animations_Easing* __this, ::uObject* addedValue)
{
    U_THROW(::app::Uno::Exception__New_2(NULL, ::uGetConstString("Not handled: OnAdd")));
}

void DataBinding__Fuse_Animations_Easing__Fuse_Reactive_IObserver_OnFailed(DataBinding__Fuse_Animations_Easing* __this, ::uString* message)
{
    U_THROW(::app::Uno::Exception__New_2(NULL, ::uGetConstString("Not handled: OnFailed")));
}

void DataBinding__Fuse_Animations_Easing__Fuse_Reactive_IObserver_OnNewAll(DataBinding__Fuse_Animations_Easing* __this, int length)
{
    if (length > 0)
    {
        U_THROW(::app::Uno::Exception__New_2(NULL, ::uGetConstString("Not handled: OnNewAll")));
    }
}

void DataBinding__Fuse_Animations_Easing__Fuse_Reactive_IObserver_OnNewAt(DataBinding__Fuse_Animations_Easing* __this, int index, ::uObject* value)
{
    U_THROW(::app::Uno::Exception__New_2(NULL, ::uGetConstString("Not handled: OnNewAt")));
}

void DataBinding__Fuse_Animations_Easing__Fuse_Reactive_IObserver_OnRemove(DataBinding__Fuse_Animations_Easing* __this, ::uObject* value, int index)
{
    U_THROW(::app::Uno::Exception__New_2(NULL, ::uGetConstString("Not handled: OnRemoveAt")));
}

void DataBinding__Fuse_Animations_Easing__Fuse_Reactive_IObserver_OnSet(DataBinding__Fuse_Animations_Easing* __this, ::uObject* newValue)
{
    __this->PushValue(newValue);
}

void DataBinding__Fuse_Animations_Easing__Fuse_Scripting_INameListener_OnNameChanged(DataBinding__Fuse_Animations_Easing* __this, ::uObject* obj, ::uString* name)
{
    __this->PushValue(__this->_currentValue);
}

::app::Uno::UX::Property__Fuse_Animations_Easing* DataBinding__Fuse_Animations_Easing__get_Target(DataBinding__Fuse_Animations_Easing* __this)
{
    return __this->_Target;
}

DataBinding__Fuse_Animations_Easing* DataBinding__Fuse_Animations_Easing__New_1(::uStatic* __this, ::app::Uno::UX::Property__Fuse_Animations_Easing* target, ::uString* key)
{
    DataBinding__Fuse_Animations_Easing* inst = (DataBinding__Fuse_Animations_Easing*)::uAllocObject(sizeof(DataBinding__Fuse_Animations_Easing), DataBinding__Fuse_Animations_Easing__typeof());
    inst->_ObjInit_2(target, key);
    return inst;
}

void DataBinding__Fuse_Animations_Easing__NewValue(DataBinding__Fuse_Animations_Easing* __this, ::uObject* value)
{
    if (::uIs(value, ::app::Fuse::Animations::Easing__typeof()))
    {
        __this->PushValue(value);
    }
    else if (::uIs(value, ::app::Fuse::Reactive::IObservable__typeof()))
    {
        if (__this->_subscription != NULL)
        {
            ::app::Uno::IDisposable::Dispose(::uPtr< ::uObject*>(__this->_subscription));
            __this->_subscription = NULL;
        }

        ::uObject* obs = ::uAs< ::uObject*>(value, ::app::Fuse::Reactive::IObservable__typeof());

        if (obs != NULL)
        {
            __this->_subscription = ::app::Fuse::Reactive::IObservable::Subscribe(::uPtr< ::uObject*>(obs), (::uObject*)__this);
        }
    }
    else
    {
        __this->PushValue(value);
    }
}

void DataBinding__Fuse_Animations_Easing__OnRooted(DataBinding__Fuse_Animations_Easing* __this, ::app::Fuse::Node* n)
{
    ::uPtr< ::app::Uno::UX::Property__Fuse_Animations_Easing*>(__this->Target())->add_ValueChanged(::uNewDelegateNonVirt(::app::Uno::UX::ValueChangedHandler__Fuse_Animations_Easing__typeof(), (const void*)DataBinding__Fuse_Animations_Easing__OnValueChanged, __this));
    ::app::Fuse::Reactive::Binding__OnRooted(__this, n);
}

void DataBinding__Fuse_Animations_Easing__OnUnrooted(DataBinding__Fuse_Animations_Easing* __this, ::app::Fuse::Node* n)
{
    ::app::Fuse::Scripting::NameRegistry__RemoveListener(NULL, (::uObject*)__this);
    ::uPtr< ::app::Uno::UX::Property__Fuse_Animations_Easing*>(__this->Target())->remove_ValueChanged(::uNewDelegateNonVirt(::app::Uno::UX::ValueChangedHandler__Fuse_Animations_Easing__typeof(), (const void*)DataBinding__Fuse_Animations_Easing__OnValueChanged, __this));

    if (__this->_subscription != NULL)
    {
        ::app::Uno::IDisposable::Dispose(::uPtr< ::uObject*>(__this->_subscription));
        __this->_subscription = NULL;
    }

    ::app::Fuse::Reactive::Binding__OnUnrooted(__this, n);
}

void DataBinding__Fuse_Animations_Easing__OnValueChanged(DataBinding__Fuse_Animations_Easing* __this, ::uObject* sender, ::app::Uno::UX::ValueChangedArgs__Fuse_Animations_Easing* args)
{
    if ((__this->_subscription != NULL) && (::uPtr< ::app::Uno::UX::ValueChangedArgs__Fuse_Animations_Easing*>(args)->Origin() != __this))
    {
        ::app::Fuse::Reactive::ISubscription::SetExclusive(::uPtr< ::uObject*>(__this->_subscription), ::uBox< int>(::app::Fuse::Animations::Easing__typeof(), ::uPtr< ::app::Uno::UX::ValueChangedArgs__Fuse_Animations_Easing*>(args)->Value()));
    }
}

void DataBinding__Fuse_Animations_Easing__PushValue(DataBinding__Fuse_Animations_Easing* __this, ::uObject* newValue)
{
    __this->_currentValue = newValue;

    if (::uIs(newValue, ::app::Fuse::Animations::Easing__typeof()))
    {
        ::app::Fuse::Scripting::NameRegistry__RemoveListener(NULL, (::uObject*)__this);
        ::uPtr< ::app::Uno::UX::Property__Fuse_Animations_Easing*>(__this->Target())->SetRestState(::uUnbox< int>(::app::Fuse::Animations::Easing__typeof(), newValue), (::uObject*)__this);
        return;
    }

    ::uString* name = ::uAs< ::uString*>(newValue, ::app::Uno::String__typeof());

    if (::app::Uno::String__op_Inequality(NULL, name, NULL) && (__this->Node() != NULL))
    {
        ::app::Fuse::Scripting::NameRegistry__AddListener(NULL, name, (::uObject*)__this);
        ::app::Fuse::Node* k = ::uPtr< ::app::Fuse::Node*>(__this->Node())->FindNodeByName(::uCast< ::uString*>(newValue, ::app::Uno::String__typeof()));

        if (::uIs(k, ::app::Fuse::Animations::Easing__typeof()))
        {
            ::uPtr< ::app::Uno::UX::Property__Fuse_Animations_Easing*>(__this->Target())->SetRestState(::uUnbox< int>(::app::Fuse::Animations::Easing__typeof(), (::uObject*)k), (::uObject*)__this);
            return;
        }
        else
        {
            ::uObject* candidate = ::uPtr< ::app::Fuse::Node*>(__this->Node())->FindObjectByName(::uCast< ::uString*>(newValue, ::app::Uno::String__typeof()), ::uNewDelegateNonVirt(::app::Uno::Predicate__object__typeof(), (const void*)DataBinding__Fuse_Animations_Easing__Acceptor, __this));

            if (::uIs(candidate, ::app::Fuse::Animations::Easing__typeof()))
            {
                ::uPtr< ::app::Uno::UX::Property__Fuse_Animations_Easing*>(__this->Target())->SetRestState(::uUnbox< int>(::app::Fuse::Animations::Easing__typeof(), candidate), (::uObject*)__this);
                return;
            }
        }
    }

    ::app::Fuse::Reactive::Marshal__ToType__Fuse_Animations_Easing(NULL, newValue, ::uNewDelegateNonVirt(::app::Uno::Action__Fuse_Animations_Easing__typeof(), (const void*)DataBinding__Fuse_Animations_Easing__SetValue, __this));
}

void DataBinding__Fuse_Animations_Easing__set_Target(DataBinding__Fuse_Animations_Easing* __this, ::app::Uno::UX::Property__Fuse_Animations_Easing* value)
{
    __this->_Target = value;
}

void DataBinding__Fuse_Animations_Easing__SetValue(DataBinding__Fuse_Animations_Easing* __this, int value)
{
    ::uPtr< ::app::Uno::UX::Property__Fuse_Animations_Easing*>(__this->Target())->SetRestState(value, (::uObject*)__this);
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Reactive\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

DataBinding__Fuse_Animations_KeyframeInterpolation__uType* DataBinding__Fuse_Animations_KeyframeInterpolation__typeof()
{
    static ::uStaticStrong<DataBinding__Fuse_Animations_KeyframeInterpolation__uType*> type;
    if (type != NULL) return type;

    type = (DataBinding__Fuse_Animations_KeyframeInterpolation__uType*)::uAllocClassType(sizeof(DataBinding__Fuse_Animations_KeyframeInterpolation__uType), "Fuse.Reactive.DataBinding<Fuse.Animations.KeyframeInterpolation>", false, 2, 3, 0);

    type->SetBaseType(::app::Fuse::Reactive::Binding__typeof());
    type->__fp_NewValue = (void(*)(::app::Fuse::Reactive::Binding*, ::uObject*))DataBinding__Fuse_Animations_KeyframeInterpolation__NewValue;
    type->__fp_OnRooted = (void(*)(::app::Fuse::Behavior*, ::app::Fuse::Node*))DataBinding__Fuse_Animations_KeyframeInterpolation__OnRooted;
    type->__fp_OnUnrooted = (void(*)(::app::Fuse::Behavior*, ::app::Fuse::Node*))DataBinding__Fuse_Animations_KeyframeInterpolation__OnUnrooted;
    type->__interface_0.__fp_OnSet = (void(*)(void*, ::uObject*))DataBinding__Fuse_Animations_KeyframeInterpolation__Fuse_Reactive_IObserver_OnSet;
    type->__interface_0.__fp_OnAdd = (void(*)(void*, ::uObject*))DataBinding__Fuse_Animations_KeyframeInterpolation__Fuse_Reactive_IObserver_OnAdd;
    type->__interface_0.__fp_OnNewAt = (void(*)(void*, int, ::uObject*))DataBinding__Fuse_Animations_KeyframeInterpolation__Fuse_Reactive_IObserver_OnNewAt;
    type->__interface_0.__fp_OnFailed = (void(*)(void*, ::uString*))DataBinding__Fuse_Animations_KeyframeInterpolation__Fuse_Reactive_IObserver_OnFailed;
    type->__interface_0.__fp_OnNewAll = (void(*)(void*, int))DataBinding__Fuse_Animations_KeyframeInterpolation__Fuse_Reactive_IObserver_OnNewAll;
    type->__interface_0.__fp_OnRemove = (void(*)(void*, ::uObject*, int))DataBinding__Fuse_Animations_KeyframeInterpolation__Fuse_Reactive_IObserver_OnRemove;
    type->__interface_1.__fp_OnNameChanged = (void(*)(void*, ::uObject*, ::uString*))DataBinding__Fuse_Animations_KeyframeInterpolation__Fuse_Scripting_INameListener_OnNameChanged;

    type->SetInterfaces(
        ::app::Fuse::Reactive::IObserver__typeof(), offsetof(DataBinding__Fuse_Animations_KeyframeInterpolation__uType, __interface_0),
        ::app::Fuse::Scripting::INameListener__typeof(), offsetof(DataBinding__Fuse_Animations_KeyframeInterpolation__uType, __interface_1));

    type->SetStrongRefs(
        "_currentValue", offsetof(DataBinding__Fuse_Animations_KeyframeInterpolation, _currentValue),
        "_subscription", offsetof(DataBinding__Fuse_Animations_KeyframeInterpolation, _subscription),
        "_Target", offsetof(DataBinding__Fuse_Animations_KeyframeInterpolation, _Target));

    type->SetFields(2,
        ::uNewField("_currentValue", NULL, offsetof(DataBinding__Fuse_Animations_KeyframeInterpolation, _currentValue), ::uObject__typeof()),
        ::uNewField("_subscription", NULL, offsetof(DataBinding__Fuse_Animations_KeyframeInterpolation, _subscription), ::app::Fuse::Reactive::ISubscription__typeof()));

    type->SetFunctions(3,
        ::uNewFunction("get_Target", DataBinding__Fuse_Animations_KeyframeInterpolation__get_Target, 0, false, ::app::Uno::UX::Property__Fuse_Animations_KeyframeInterpolation__typeof()),
        ::uNewFunction(".ctor", DataBinding__Fuse_Animations_KeyframeInterpolation__New_1, 0, true, DataBinding__Fuse_Animations_KeyframeInterpolation__typeof(), ::app::Uno::UX::Property__Fuse_Animations_KeyframeInterpolation__typeof(), ::app::Uno::String__typeof()),
        ::uNewFunctionVoid("set_Target", DataBinding__Fuse_Animations_KeyframeInterpolation__set_Target, 0, false, ::app::Uno::UX::Property__Fuse_Animations_KeyframeInterpolation__typeof()));

    ::uRegisterType(type);
    return type;
}

void DataBinding__Fuse_Animations_KeyframeInterpolation___ObjInit_2(DataBinding__Fuse_Animations_KeyframeInterpolation* __this, ::app::Uno::UX::Property__Fuse_Animations_KeyframeInterpolation* target, ::uString* key)
{
    ::app::Fuse::Reactive::Binding___ObjInit_1(__this, key);
    __this->Target(target);
}

bool DataBinding__Fuse_Animations_KeyframeInterpolation__Acceptor(DataBinding__Fuse_Animations_KeyframeInterpolation* __this, ::uObject* obj)
{
    return ::uIs(obj, ::app::Fuse::Animations::KeyframeInterpolation__typeof());
}

void DataBinding__Fuse_Animations_KeyframeInterpolation__Fuse_Reactive_IObserver_OnAdd(DataBinding__Fuse_Animations_KeyframeInterpolation* __this, ::uObject* addedValue)
{
    U_THROW(::app::Uno::Exception__New_2(NULL, ::uGetConstString("Not handled: OnAdd")));
}

void DataBinding__Fuse_Animations_KeyframeInterpolation__Fuse_Reactive_IObserver_OnFailed(DataBinding__Fuse_Animations_KeyframeInterpolation* __this, ::uString* message)
{
    U_THROW(::app::Uno::Exception__New_2(NULL, ::uGetConstString("Not handled: OnFailed")));
}

void DataBinding__Fuse_Animations_KeyframeInterpolation__Fuse_Reactive_IObserver_OnNewAll(DataBinding__Fuse_Animations_KeyframeInterpolation* __this, int length)
{
    if (length > 0)
    {
        U_THROW(::app::Uno::Exception__New_2(NULL, ::uGetConstString("Not handled: OnNewAll")));
    }
}

void DataBinding__Fuse_Animations_KeyframeInterpolation__Fuse_Reactive_IObserver_OnNewAt(DataBinding__Fuse_Animations_KeyframeInterpolation* __this, int index, ::uObject* value)
{
    U_THROW(::app::Uno::Exception__New_2(NULL, ::uGetConstString("Not handled: OnNewAt")));
}

void DataBinding__Fuse_Animations_KeyframeInterpolation__Fuse_Reactive_IObserver_OnRemove(DataBinding__Fuse_Animations_KeyframeInterpolation* __this, ::uObject* value, int index)
{
    U_THROW(::app::Uno::Exception__New_2(NULL, ::uGetConstString("Not handled: OnRemoveAt")));
}

void DataBinding__Fuse_Animations_KeyframeInterpolation__Fuse_Reactive_IObserver_OnSet(DataBinding__Fuse_Animations_KeyframeInterpolation* __this, ::uObject* newValue)
{
    __this->PushValue(newValue);
}

void DataBinding__Fuse_Animations_KeyframeInterpolation__Fuse_Scripting_INameListener_OnNameChanged(DataBinding__Fuse_Animations_KeyframeInterpolation* __this, ::uObject* obj, ::uString* name)
{
    __this->PushValue(__this->_currentValue);
}

::app::Uno::UX::Property__Fuse_Animations_KeyframeInterpolation* DataBinding__Fuse_Animations_KeyframeInterpolation__get_Target(DataBinding__Fuse_Animations_KeyframeInterpolation* __this)
{
    return __this->_Target;
}

DataBinding__Fuse_Animations_KeyframeInterpolation* DataBinding__Fuse_Animations_KeyframeInterpolation__New_1(::uStatic* __this, ::app::Uno::UX::Property__Fuse_Animations_KeyframeInterpolation* target, ::uString* key)
{
    DataBinding__Fuse_Animations_KeyframeInterpolation* inst = (DataBinding__Fuse_Animations_KeyframeInterpolation*)::uAllocObject(sizeof(DataBinding__Fuse_Animations_KeyframeInterpolation), DataBinding__Fuse_Animations_KeyframeInterpolation__typeof());
    inst->_ObjInit_2(target, key);
    return inst;
}

void DataBinding__Fuse_Animations_KeyframeInterpolation__NewValue(DataBinding__Fuse_Animations_KeyframeInterpolation* __this, ::uObject* value)
{
    if (::uIs(value, ::app::Fuse::Animations::KeyframeInterpolation__typeof()))
    {
        __this->PushValue(value);
    }
    else if (::uIs(value, ::app::Fuse::Reactive::IObservable__typeof()))
    {
        if (__this->_subscription != NULL)
        {
            ::app::Uno::IDisposable::Dispose(::uPtr< ::uObject*>(__this->_subscription));
            __this->_subscription = NULL;
        }

        ::uObject* obs = ::uAs< ::uObject*>(value, ::app::Fuse::Reactive::IObservable__typeof());

        if (obs != NULL)
        {
            __this->_subscription = ::app::Fuse::Reactive::IObservable::Subscribe(::uPtr< ::uObject*>(obs), (::uObject*)__this);
        }
    }
    else
    {
        __this->PushValue(value);
    }
}

void DataBinding__Fuse_Animations_KeyframeInterpolation__OnRooted(DataBinding__Fuse_Animations_KeyframeInterpolation* __this, ::app::Fuse::Node* n)
{
    ::uPtr< ::app::Uno::UX::Property__Fuse_Animations_KeyframeInterpolation*>(__this->Target())->add_ValueChanged(::uNewDelegateNonVirt(::app::Uno::UX::ValueChangedHandler__Fuse_Animations_KeyframeInterpolation__typeof(), (const void*)DataBinding__Fuse_Animations_KeyframeInterpolation__OnValueChanged, __this));
    ::app::Fuse::Reactive::Binding__OnRooted(__this, n);
}

void DataBinding__Fuse_Animations_KeyframeInterpolation__OnUnrooted(DataBinding__Fuse_Animations_KeyframeInterpolation* __this, ::app::Fuse::Node* n)
{
    ::app::Fuse::Scripting::NameRegistry__RemoveListener(NULL, (::uObject*)__this);
    ::uPtr< ::app::Uno::UX::Property__Fuse_Animations_KeyframeInterpolation*>(__this->Target())->remove_ValueChanged(::uNewDelegateNonVirt(::app::Uno::UX::ValueChangedHandler__Fuse_Animations_KeyframeInterpolation__typeof(), (const void*)DataBinding__Fuse_Animations_KeyframeInterpolation__OnValueChanged, __this));

    if (__this->_subscription != NULL)
    {
        ::app::Uno::IDisposable::Dispose(::uPtr< ::uObject*>(__this->_subscription));
        __this->_subscription = NULL;
    }

    ::app::Fuse::Reactive::Binding__OnUnrooted(__this, n);
}

void DataBinding__Fuse_Animations_KeyframeInterpolation__OnValueChanged(DataBinding__Fuse_Animations_KeyframeInterpolation* __this, ::uObject* sender, ::app::Uno::UX::ValueChangedArgs__Fuse_Animations_KeyframeInterpolation* args)
{
    if ((__this->_subscription != NULL) && (::uPtr< ::app::Uno::UX::ValueChangedArgs__Fuse_Animations_KeyframeInterpolation*>(args)->Origin() != __this))
    {
        ::app::Fuse::Reactive::ISubscription::SetExclusive(::uPtr< ::uObject*>(__this->_subscription), ::uBox< int>(::app::Fuse::Animations::KeyframeInterpolation__typeof(), ::uPtr< ::app::Uno::UX::ValueChangedArgs__Fuse_Animations_KeyframeInterpolation*>(args)->Value()));
    }
}

void DataBinding__Fuse_Animations_KeyframeInterpolation__PushValue(DataBinding__Fuse_Animations_KeyframeInterpolation* __this, ::uObject* newValue)
{
    __this->_currentValue = newValue;

    if (::uIs(newValue, ::app::Fuse::Animations::KeyframeInterpolation__typeof()))
    {
        ::app::Fuse::Scripting::NameRegistry__RemoveListener(NULL, (::uObject*)__this);
        ::uPtr< ::app::Uno::UX::Property__Fuse_Animations_KeyframeInterpolation*>(__this->Target())->SetRestState(::uUnbox< int>(::app::Fuse::Animations::KeyframeInterpolation__typeof(), newValue), (::uObject*)__this);
        return;
    }

    ::uString* name = ::uAs< ::uString*>(newValue, ::app::Uno::String__typeof());

    if (::app::Uno::String__op_Inequality(NULL, name, NULL) && (__this->Node() != NULL))
    {
        ::app::Fuse::Scripting::NameRegistry__AddListener(NULL, name, (::uObject*)__this);
        ::app::Fuse::Node* k = ::uPtr< ::app::Fuse::Node*>(__this->Node())->FindNodeByName(::uCast< ::uString*>(newValue, ::app::Uno::String__typeof()));

        if (::uIs(k, ::app::Fuse::Animations::KeyframeInterpolation__typeof()))
        {
            ::uPtr< ::app::Uno::UX::Property__Fuse_Animations_KeyframeInterpolation*>(__this->Target())->SetRestState(::uUnbox< int>(::app::Fuse::Animations::KeyframeInterpolation__typeof(), (::uObject*)k), (::uObject*)__this);
            return;
        }
        else
        {
            ::uObject* candidate = ::uPtr< ::app::Fuse::Node*>(__this->Node())->FindObjectByName(::uCast< ::uString*>(newValue, ::app::Uno::String__typeof()), ::uNewDelegateNonVirt(::app::Uno::Predicate__object__typeof(), (const void*)DataBinding__Fuse_Animations_KeyframeInterpolation__Acceptor, __this));

            if (::uIs(candidate, ::app::Fuse::Animations::KeyframeInterpolation__typeof()))
            {
                ::uPtr< ::app::Uno::UX::Property__Fuse_Animations_KeyframeInterpolation*>(__this->Target())->SetRestState(::uUnbox< int>(::app::Fuse::Animations::KeyframeInterpolation__typeof(), candidate), (::uObject*)__this);
                return;
            }
        }
    }

    ::app::Fuse::Reactive::Marshal__ToType__Fuse_Animations_KeyframeInterpolation(NULL, newValue, ::uNewDelegateNonVirt(::app::Uno::Action__Fuse_Animations_KeyframeInterpolation__typeof(), (const void*)DataBinding__Fuse_Animations_KeyframeInterpolation__SetValue, __this));
}

void DataBinding__Fuse_Animations_KeyframeInterpolation__set_Target(DataBinding__Fuse_Animations_KeyframeInterpolation* __this, ::app::Uno::UX::Property__Fuse_Animations_KeyframeInterpolation* value)
{
    __this->_Target = value;
}

void DataBinding__Fuse_Animations_KeyframeInterpolation__SetValue(DataBinding__Fuse_Animations_KeyframeInterpolation* __this, int value)
{
    ::uPtr< ::app::Uno::UX::Property__Fuse_Animations_KeyframeInterpolation*>(__this->Target())->SetRestState(value, (::uObject*)__this);
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Reactive\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

DataBinding__Fuse_Animations_MixOp__uType* DataBinding__Fuse_Animations_MixOp__typeof()
{
    static ::uStaticStrong<DataBinding__Fuse_Animations_MixOp__uType*> type;
    if (type != NULL) return type;

    type = (DataBinding__Fuse_Animations_MixOp__uType*)::uAllocClassType(sizeof(DataBinding__Fuse_Animations_MixOp__uType), "Fuse.Reactive.DataBinding<Fuse.Animations.MixOp>", false, 2, 3, 0);

    type->SetBaseType(::app::Fuse::Reactive::Binding__typeof());
    type->__fp_NewValue = (void(*)(::app::Fuse::Reactive::Binding*, ::uObject*))DataBinding__Fuse_Animations_MixOp__NewValue;
    type->__fp_OnRooted = (void(*)(::app::Fuse::Behavior*, ::app::Fuse::Node*))DataBinding__Fuse_Animations_MixOp__OnRooted;
    type->__fp_OnUnrooted = (void(*)(::app::Fuse::Behavior*, ::app::Fuse::Node*))DataBinding__Fuse_Animations_MixOp__OnUnrooted;
    type->__interface_0.__fp_OnSet = (void(*)(void*, ::uObject*))DataBinding__Fuse_Animations_MixOp__Fuse_Reactive_IObserver_OnSet;
    type->__interface_0.__fp_OnAdd = (void(*)(void*, ::uObject*))DataBinding__Fuse_Animations_MixOp__Fuse_Reactive_IObserver_OnAdd;
    type->__interface_0.__fp_OnNewAt = (void(*)(void*, int, ::uObject*))DataBinding__Fuse_Animations_MixOp__Fuse_Reactive_IObserver_OnNewAt;
    type->__interface_0.__fp_OnFailed = (void(*)(void*, ::uString*))DataBinding__Fuse_Animations_MixOp__Fuse_Reactive_IObserver_OnFailed;
    type->__interface_0.__fp_OnNewAll = (void(*)(void*, int))DataBinding__Fuse_Animations_MixOp__Fuse_Reactive_IObserver_OnNewAll;
    type->__interface_0.__fp_OnRemove = (void(*)(void*, ::uObject*, int))DataBinding__Fuse_Animations_MixOp__Fuse_Reactive_IObserver_OnRemove;
    type->__interface_1.__fp_OnNameChanged = (void(*)(void*, ::uObject*, ::uString*))DataBinding__Fuse_Animations_MixOp__Fuse_Scripting_INameListener_OnNameChanged;

    type->SetInterfaces(
        ::app::Fuse::Reactive::IObserver__typeof(), offsetof(DataBinding__Fuse_Animations_MixOp__uType, __interface_0),
        ::app::Fuse::Scripting::INameListener__typeof(), offsetof(DataBinding__Fuse_Animations_MixOp__uType, __interface_1));

    type->SetStrongRefs(
        "_currentValue", offsetof(DataBinding__Fuse_Animations_MixOp, _currentValue),
        "_subscription", offsetof(DataBinding__Fuse_Animations_MixOp, _subscription),
        "_Target", offsetof(DataBinding__Fuse_Animations_MixOp, _Target));

    type->SetFields(2,
        ::uNewField("_currentValue", NULL, offsetof(DataBinding__Fuse_Animations_MixOp, _currentValue), ::uObject__typeof()),
        ::uNewField("_subscription", NULL, offsetof(DataBinding__Fuse_Animations_MixOp, _subscription), ::app::Fuse::Reactive::ISubscription__typeof()));

    type->SetFunctions(3,
        ::uNewFunction("get_Target", DataBinding__Fuse_Animations_MixOp__get_Target, 0, false, ::app::Uno::UX::Property__Fuse_Animations_MixOp__typeof()),
        ::uNewFunction(".ctor", DataBinding__Fuse_Animations_MixOp__New_1, 0, true, DataBinding__Fuse_Animations_MixOp__typeof(), ::app::Uno::UX::Property__Fuse_Animations_MixOp__typeof(), ::app::Uno::String__typeof()),
        ::uNewFunctionVoid("set_Target", DataBinding__Fuse_Animations_MixOp__set_Target, 0, false, ::app::Uno::UX::Property__Fuse_Animations_MixOp__typeof()));

    ::uRegisterType(type);
    return type;
}

void DataBinding__Fuse_Animations_MixOp___ObjInit_2(DataBinding__Fuse_Animations_MixOp* __this, ::app::Uno::UX::Property__Fuse_Animations_MixOp* target, ::uString* key)
{
    ::app::Fuse::Reactive::Binding___ObjInit_1(__this, key);
    __this->Target(target);
}

bool DataBinding__Fuse_Animations_MixOp__Acceptor(DataBinding__Fuse_Animations_MixOp* __this, ::uObject* obj)
{
    return ::uIs(obj, ::app::Fuse::Animations::MixOp__typeof());
}

void DataBinding__Fuse_Animations_MixOp__Fuse_Reactive_IObserver_OnAdd(DataBinding__Fuse_Animations_MixOp* __this, ::uObject* addedValue)
{
    U_THROW(::app::Uno::Exception__New_2(NULL, ::uGetConstString("Not handled: OnAdd")));
}

void DataBinding__Fuse_Animations_MixOp__Fuse_Reactive_IObserver_OnFailed(DataBinding__Fuse_Animations_MixOp* __this, ::uString* message)
{
    U_THROW(::app::Uno::Exception__New_2(NULL, ::uGetConstString("Not handled: OnFailed")));
}

void DataBinding__Fuse_Animations_MixOp__Fuse_Reactive_IObserver_OnNewAll(DataBinding__Fuse_Animations_MixOp* __this, int length)
{
    if (length > 0)
    {
        U_THROW(::app::Uno::Exception__New_2(NULL, ::uGetConstString("Not handled: OnNewAll")));
    }
}

void DataBinding__Fuse_Animations_MixOp__Fuse_Reactive_IObserver_OnNewAt(DataBinding__Fuse_Animations_MixOp* __this, int index, ::uObject* value)
{
    U_THROW(::app::Uno::Exception__New_2(NULL, ::uGetConstString("Not handled: OnNewAt")));
}

void DataBinding__Fuse_Animations_MixOp__Fuse_Reactive_IObserver_OnRemove(DataBinding__Fuse_Animations_MixOp* __this, ::uObject* value, int index)
{
    U_THROW(::app::Uno::Exception__New_2(NULL, ::uGetConstString("Not handled: OnRemoveAt")));
}

void DataBinding__Fuse_Animations_MixOp__Fuse_Reactive_IObserver_OnSet(DataBinding__Fuse_Animations_MixOp* __this, ::uObject* newValue)
{
    __this->PushValue(newValue);
}

void DataBinding__Fuse_Animations_MixOp__Fuse_Scripting_INameListener_OnNameChanged(DataBinding__Fuse_Animations_MixOp* __this, ::uObject* obj, ::uString* name)
{
    __this->PushValue(__this->_currentValue);
}

::app::Uno::UX::Property__Fuse_Animations_MixOp* DataBinding__Fuse_Animations_MixOp__get_Target(DataBinding__Fuse_Animations_MixOp* __this)
{
    return __this->_Target;
}

DataBinding__Fuse_Animations_MixOp* DataBinding__Fuse_Animations_MixOp__New_1(::uStatic* __this, ::app::Uno::UX::Property__Fuse_Animations_MixOp* target, ::uString* key)
{
    DataBinding__Fuse_Animations_MixOp* inst = (DataBinding__Fuse_Animations_MixOp*)::uAllocObject(sizeof(DataBinding__Fuse_Animations_MixOp), DataBinding__Fuse_Animations_MixOp__typeof());
    inst->_ObjInit_2(target, key);
    return inst;
}

void DataBinding__Fuse_Animations_MixOp__NewValue(DataBinding__Fuse_Animations_MixOp* __this, ::uObject* value)
{
    if (::uIs(value, ::app::Fuse::Animations::MixOp__typeof()))
    {
        __this->PushValue(value);
    }
    else if (::uIs(value, ::app::Fuse::Reactive::IObservable__typeof()))
    {
        if (__this->_subscription != NULL)
        {
            ::app::Uno::IDisposable::Dispose(::uPtr< ::uObject*>(__this->_subscription));
            __this->_subscription = NULL;
        }

        ::uObject* obs = ::uAs< ::uObject*>(value, ::app::Fuse::Reactive::IObservable__typeof());

        if (obs != NULL)
        {
            __this->_subscription = ::app::Fuse::Reactive::IObservable::Subscribe(::uPtr< ::uObject*>(obs), (::uObject*)__this);
        }
    }
    else
    {
        __this->PushValue(value);
    }
}

void DataBinding__Fuse_Animations_MixOp__OnRooted(DataBinding__Fuse_Animations_MixOp* __this, ::app::Fuse::Node* n)
{
    ::uPtr< ::app::Uno::UX::Property__Fuse_Animations_MixOp*>(__this->Target())->add_ValueChanged(::uNewDelegateNonVirt(::app::Uno::UX::ValueChangedHandler__Fuse_Animations_MixOp__typeof(), (const void*)DataBinding__Fuse_Animations_MixOp__OnValueChanged, __this));
    ::app::Fuse::Reactive::Binding__OnRooted(__this, n);
}

void DataBinding__Fuse_Animations_MixOp__OnUnrooted(DataBinding__Fuse_Animations_MixOp* __this, ::app::Fuse::Node* n)
{
    ::app::Fuse::Scripting::NameRegistry__RemoveListener(NULL, (::uObject*)__this);
    ::uPtr< ::app::Uno::UX::Property__Fuse_Animations_MixOp*>(__this->Target())->remove_ValueChanged(::uNewDelegateNonVirt(::app::Uno::UX::ValueChangedHandler__Fuse_Animations_MixOp__typeof(), (const void*)DataBinding__Fuse_Animations_MixOp__OnValueChanged, __this));

    if (__this->_subscription != NULL)
    {
        ::app::Uno::IDisposable::Dispose(::uPtr< ::uObject*>(__this->_subscription));
        __this->_subscription = NULL;
    }

    ::app::Fuse::Reactive::Binding__OnUnrooted(__this, n);
}

void DataBinding__Fuse_Animations_MixOp__OnValueChanged(DataBinding__Fuse_Animations_MixOp* __this, ::uObject* sender, ::app::Uno::UX::ValueChangedArgs__Fuse_Animations_MixOp* args)
{
    if ((__this->_subscription != NULL) && (::uPtr< ::app::Uno::UX::ValueChangedArgs__Fuse_Animations_MixOp*>(args)->Origin() != __this))
    {
        ::app::Fuse::Reactive::ISubscription::SetExclusive(::uPtr< ::uObject*>(__this->_subscription), ::uBox< int>(::app::Fuse::Animations::MixOp__typeof(), ::uPtr< ::app::Uno::UX::ValueChangedArgs__Fuse_Animations_MixOp*>(args)->Value()));
    }
}

void DataBinding__Fuse_Animations_MixOp__PushValue(DataBinding__Fuse_Animations_MixOp* __this, ::uObject* newValue)
{
    __this->_currentValue = newValue;

    if (::uIs(newValue, ::app::Fuse::Animations::MixOp__typeof()))
    {
        ::app::Fuse::Scripting::NameRegistry__RemoveListener(NULL, (::uObject*)__this);
        ::uPtr< ::app::Uno::UX::Property__Fuse_Animations_MixOp*>(__this->Target())->SetRestState(::uUnbox< int>(::app::Fuse::Animations::MixOp__typeof(), newValue), (::uObject*)__this);
        return;
    }

    ::uString* name = ::uAs< ::uString*>(newValue, ::app::Uno::String__typeof());

    if (::app::Uno::String__op_Inequality(NULL, name, NULL) && (__this->Node() != NULL))
    {
        ::app::Fuse::Scripting::NameRegistry__AddListener(NULL, name, (::uObject*)__this);
        ::app::Fuse::Node* k = ::uPtr< ::app::Fuse::Node*>(__this->Node())->FindNodeByName(::uCast< ::uString*>(newValue, ::app::Uno::String__typeof()));

        if (::uIs(k, ::app::Fuse::Animations::MixOp__typeof()))
        {
            ::uPtr< ::app::Uno::UX::Property__Fuse_Animations_MixOp*>(__this->Target())->SetRestState(::uUnbox< int>(::app::Fuse::Animations::MixOp__typeof(), (::uObject*)k), (::uObject*)__this);
            return;
        }
        else
        {
            ::uObject* candidate = ::uPtr< ::app::Fuse::Node*>(__this->Node())->FindObjectByName(::uCast< ::uString*>(newValue, ::app::Uno::String__typeof()), ::uNewDelegateNonVirt(::app::Uno::Predicate__object__typeof(), (const void*)DataBinding__Fuse_Animations_MixOp__Acceptor, __this));

            if (::uIs(candidate, ::app::Fuse::Animations::MixOp__typeof()))
            {
                ::uPtr< ::app::Uno::UX::Property__Fuse_Animations_MixOp*>(__this->Target())->SetRestState(::uUnbox< int>(::app::Fuse::Animations::MixOp__typeof(), candidate), (::uObject*)__this);
                return;
            }
        }
    }

    ::app::Fuse::Reactive::Marshal__ToType__Fuse_Animations_MixOp(NULL, newValue, ::uNewDelegateNonVirt(::app::Uno::Action__Fuse_Animations_MixOp__typeof(), (const void*)DataBinding__Fuse_Animations_MixOp__SetValue, __this));
}

void DataBinding__Fuse_Animations_MixOp__set_Target(DataBinding__Fuse_Animations_MixOp* __this, ::app::Uno::UX::Property__Fuse_Animations_MixOp* value)
{
    __this->_Target = value;
}

void DataBinding__Fuse_Animations_MixOp__SetValue(DataBinding__Fuse_Animations_MixOp* __this, int value)
{
    ::uPtr< ::app::Uno::UX::Property__Fuse_Animations_MixOp*>(__this->Target())->SetRestState(value, (::uObject*)__this);
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Reactive\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

DataBinding__Fuse_Drawing_BlendMode__uType* DataBinding__Fuse_Drawing_BlendMode__typeof()
{
    static ::uStaticStrong<DataBinding__Fuse_Drawing_BlendMode__uType*> type;
    if (type != NULL) return type;

    type = (DataBinding__Fuse_Drawing_BlendMode__uType*)::uAllocClassType(sizeof(DataBinding__Fuse_Drawing_BlendMode__uType), "Fuse.Reactive.DataBinding<Fuse.Drawing.BlendMode>", false, 2, 3, 0);

    type->SetBaseType(::app::Fuse::Reactive::Binding__typeof());
    type->__fp_NewValue = (void(*)(::app::Fuse::Reactive::Binding*, ::uObject*))DataBinding__Fuse_Drawing_BlendMode__NewValue;
    type->__fp_OnRooted = (void(*)(::app::Fuse::Behavior*, ::app::Fuse::Node*))DataBinding__Fuse_Drawing_BlendMode__OnRooted;
    type->__fp_OnUnrooted = (void(*)(::app::Fuse::Behavior*, ::app::Fuse::Node*))DataBinding__Fuse_Drawing_BlendMode__OnUnrooted;
    type->__interface_0.__fp_OnSet = (void(*)(void*, ::uObject*))DataBinding__Fuse_Drawing_BlendMode__Fuse_Reactive_IObserver_OnSet;
    type->__interface_0.__fp_OnAdd = (void(*)(void*, ::uObject*))DataBinding__Fuse_Drawing_BlendMode__Fuse_Reactive_IObserver_OnAdd;
    type->__interface_0.__fp_OnNewAt = (void(*)(void*, int, ::uObject*))DataBinding__Fuse_Drawing_BlendMode__Fuse_Reactive_IObserver_OnNewAt;
    type->__interface_0.__fp_OnFailed = (void(*)(void*, ::uString*))DataBinding__Fuse_Drawing_BlendMode__Fuse_Reactive_IObserver_OnFailed;
    type->__interface_0.__fp_OnNewAll = (void(*)(void*, int))DataBinding__Fuse_Drawing_BlendMode__Fuse_Reactive_IObserver_OnNewAll;
    type->__interface_0.__fp_OnRemove = (void(*)(void*, ::uObject*, int))DataBinding__Fuse_Drawing_BlendMode__Fuse_Reactive_IObserver_OnRemove;
    type->__interface_1.__fp_OnNameChanged = (void(*)(void*, ::uObject*, ::uString*))DataBinding__Fuse_Drawing_BlendMode__Fuse_Scripting_INameListener_OnNameChanged;

    type->SetInterfaces(
        ::app::Fuse::Reactive::IObserver__typeof(), offsetof(DataBinding__Fuse_Drawing_BlendMode__uType, __interface_0),
        ::app::Fuse::Scripting::INameListener__typeof(), offsetof(DataBinding__Fuse_Drawing_BlendMode__uType, __interface_1));

    type->SetStrongRefs(
        "_currentValue", offsetof(DataBinding__Fuse_Drawing_BlendMode, _currentValue),
        "_subscription", offsetof(DataBinding__Fuse_Drawing_BlendMode, _subscription),
        "_Target", offsetof(DataBinding__Fuse_Drawing_BlendMode, _Target));

    type->SetFields(2,
        ::uNewField("_currentValue", NULL, offsetof(DataBinding__Fuse_Drawing_BlendMode, _currentValue), ::uObject__typeof()),
        ::uNewField("_subscription", NULL, offsetof(DataBinding__Fuse_Drawing_BlendMode, _subscription), ::app::Fuse::Reactive::ISubscription__typeof()));

    type->SetFunctions(3,
        ::uNewFunction("get_Target", DataBinding__Fuse_Drawing_BlendMode__get_Target, 0, false, ::app::Uno::UX::Property__Fuse_Drawing_BlendMode__typeof()),
        ::uNewFunction(".ctor", DataBinding__Fuse_Drawing_BlendMode__New_1, 0, true, DataBinding__Fuse_Drawing_BlendMode__typeof(), ::app::Uno::UX::Property__Fuse_Drawing_BlendMode__typeof(), ::app::Uno::String__typeof()),
        ::uNewFunctionVoid("set_Target", DataBinding__Fuse_Drawing_BlendMode__set_Target, 0, false, ::app::Uno::UX::Property__Fuse_Drawing_BlendMode__typeof()));

    ::uRegisterType(type);
    return type;
}

void DataBinding__Fuse_Drawing_BlendMode___ObjInit_2(DataBinding__Fuse_Drawing_BlendMode* __this, ::app::Uno::UX::Property__Fuse_Drawing_BlendMode* target, ::uString* key)
{
    ::app::Fuse::Reactive::Binding___ObjInit_1(__this, key);
    __this->Target(target);
}

bool DataBinding__Fuse_Drawing_BlendMode__Acceptor(DataBinding__Fuse_Drawing_BlendMode* __this, ::uObject* obj)
{
    return ::uIs(obj, ::app::Fuse::Drawing::BlendMode__typeof());
}

void DataBinding__Fuse_Drawing_BlendMode__Fuse_Reactive_IObserver_OnAdd(DataBinding__Fuse_Drawing_BlendMode* __this, ::uObject* addedValue)
{
    U_THROW(::app::Uno::Exception__New_2(NULL, ::uGetConstString("Not handled: OnAdd")));
}

void DataBinding__Fuse_Drawing_BlendMode__Fuse_Reactive_IObserver_OnFailed(DataBinding__Fuse_Drawing_BlendMode* __this, ::uString* message)
{
    U_THROW(::app::Uno::Exception__New_2(NULL, ::uGetConstString("Not handled: OnFailed")));
}

void DataBinding__Fuse_Drawing_BlendMode__Fuse_Reactive_IObserver_OnNewAll(DataBinding__Fuse_Drawing_BlendMode* __this, int length)
{
    if (length > 0)
    {
        U_THROW(::app::Uno::Exception__New_2(NULL, ::uGetConstString("Not handled: OnNewAll")));
    }
}

void DataBinding__Fuse_Drawing_BlendMode__Fuse_Reactive_IObserver_OnNewAt(DataBinding__Fuse_Drawing_BlendMode* __this, int index, ::uObject* value)
{
    U_THROW(::app::Uno::Exception__New_2(NULL, ::uGetConstString("Not handled: OnNewAt")));
}

void DataBinding__Fuse_Drawing_BlendMode__Fuse_Reactive_IObserver_OnRemove(DataBinding__Fuse_Drawing_BlendMode* __this, ::uObject* value, int index)
{
    U_THROW(::app::Uno::Exception__New_2(NULL, ::uGetConstString("Not handled: OnRemoveAt")));
}

void DataBinding__Fuse_Drawing_BlendMode__Fuse_Reactive_IObserver_OnSet(DataBinding__Fuse_Drawing_BlendMode* __this, ::uObject* newValue)
{
    __this->PushValue(newValue);
}

void DataBinding__Fuse_Drawing_BlendMode__Fuse_Scripting_INameListener_OnNameChanged(DataBinding__Fuse_Drawing_BlendMode* __this, ::uObject* obj, ::uString* name)
{
    __this->PushValue(__this->_currentValue);
}

::app::Uno::UX::Property__Fuse_Drawing_BlendMode* DataBinding__Fuse_Drawing_BlendMode__get_Target(DataBinding__Fuse_Drawing_BlendMode* __this)
{
    return __this->_Target;
}

DataBinding__Fuse_Drawing_BlendMode* DataBinding__Fuse_Drawing_BlendMode__New_1(::uStatic* __this, ::app::Uno::UX::Property__Fuse_Drawing_BlendMode* target, ::uString* key)
{
    DataBinding__Fuse_Drawing_BlendMode* inst = (DataBinding__Fuse_Drawing_BlendMode*)::uAllocObject(sizeof(DataBinding__Fuse_Drawing_BlendMode), DataBinding__Fuse_Drawing_BlendMode__typeof());
    inst->_ObjInit_2(target, key);
    return inst;
}

void DataBinding__Fuse_Drawing_BlendMode__NewValue(DataBinding__Fuse_Drawing_BlendMode* __this, ::uObject* value)
{
    if (::uIs(value, ::app::Fuse::Drawing::BlendMode__typeof()))
    {
        __this->PushValue(value);
    }
    else if (::uIs(value, ::app::Fuse::Reactive::IObservable__typeof()))
    {
        if (__this->_subscription != NULL)
        {
            ::app::Uno::IDisposable::Dispose(::uPtr< ::uObject*>(__this->_subscription));
            __this->_subscription = NULL;
        }

        ::uObject* obs = ::uAs< ::uObject*>(value, ::app::Fuse::Reactive::IObservable__typeof());

        if (obs != NULL)
        {
            __this->_subscription = ::app::Fuse::Reactive::IObservable::Subscribe(::uPtr< ::uObject*>(obs), (::uObject*)__this);
        }
    }
    else
    {
        __this->PushValue(value);
    }
}

void DataBinding__Fuse_Drawing_BlendMode__OnRooted(DataBinding__Fuse_Drawing_BlendMode* __this, ::app::Fuse::Node* n)
{
    ::uPtr< ::app::Uno::UX::Property__Fuse_Drawing_BlendMode*>(__this->Target())->add_ValueChanged(::uNewDelegateNonVirt(::app::Uno::UX::ValueChangedHandler__Fuse_Drawing_BlendMode__typeof(), (const void*)DataBinding__Fuse_Drawing_BlendMode__OnValueChanged, __this));
    ::app::Fuse::Reactive::Binding__OnRooted(__this, n);
}

void DataBinding__Fuse_Drawing_BlendMode__OnUnrooted(DataBinding__Fuse_Drawing_BlendMode* __this, ::app::Fuse::Node* n)
{
    ::app::Fuse::Scripting::NameRegistry__RemoveListener(NULL, (::uObject*)__this);
    ::uPtr< ::app::Uno::UX::Property__Fuse_Drawing_BlendMode*>(__this->Target())->remove_ValueChanged(::uNewDelegateNonVirt(::app::Uno::UX::ValueChangedHandler__Fuse_Drawing_BlendMode__typeof(), (const void*)DataBinding__Fuse_Drawing_BlendMode__OnValueChanged, __this));

    if (__this->_subscription != NULL)
    {
        ::app::Uno::IDisposable::Dispose(::uPtr< ::uObject*>(__this->_subscription));
        __this->_subscription = NULL;
    }

    ::app::Fuse::Reactive::Binding__OnUnrooted(__this, n);
}

void DataBinding__Fuse_Drawing_BlendMode__OnValueChanged(DataBinding__Fuse_Drawing_BlendMode* __this, ::uObject* sender, ::app::Uno::UX::ValueChangedArgs__Fuse_Drawing_BlendMode* args)
{
    if ((__this->_subscription != NULL) && (::uPtr< ::app::Uno::UX::ValueChangedArgs__Fuse_Drawing_BlendMode*>(args)->Origin() != __this))
    {
        ::app::Fuse::Reactive::ISubscription::SetExclusive(::uPtr< ::uObject*>(__this->_subscription), ::uBox< int>(::app::Fuse::Drawing::BlendMode__typeof(), ::uPtr< ::app::Uno::UX::ValueChangedArgs__Fuse_Drawing_BlendMode*>(args)->Value()));
    }
}

void DataBinding__Fuse_Drawing_BlendMode__PushValue(DataBinding__Fuse_Drawing_BlendMode* __this, ::uObject* newValue)
{
    __this->_currentValue = newValue;

    if (::uIs(newValue, ::app::Fuse::Drawing::BlendMode__typeof()))
    {
        ::app::Fuse::Scripting::NameRegistry__RemoveListener(NULL, (::uObject*)__this);
        ::uPtr< ::app::Uno::UX::Property__Fuse_Drawing_BlendMode*>(__this->Target())->SetRestState(::uUnbox< int>(::app::Fuse::Drawing::BlendMode__typeof(), newValue), (::uObject*)__this);
        return;
    }

    ::uString* name = ::uAs< ::uString*>(newValue, ::app::Uno::String__typeof());

    if (::app::Uno::String__op_Inequality(NULL, name, NULL) && (__this->Node() != NULL))
    {
        ::app::Fuse::Scripting::NameRegistry__AddListener(NULL, name, (::uObject*)__this);
        ::app::Fuse::Node* k = ::uPtr< ::app::Fuse::Node*>(__this->Node())->FindNodeByName(::uCast< ::uString*>(newValue, ::app::Uno::String__typeof()));

        if (::uIs(k, ::app::Fuse::Drawing::BlendMode__typeof()))
        {
            ::uPtr< ::app::Uno::UX::Property__Fuse_Drawing_BlendMode*>(__this->Target())->SetRestState(::uUnbox< int>(::app::Fuse::Drawing::BlendMode__typeof(), (::uObject*)k), (::uObject*)__this);
            return;
        }
        else
        {
            ::uObject* candidate = ::uPtr< ::app::Fuse::Node*>(__this->Node())->FindObjectByName(::uCast< ::uString*>(newValue, ::app::Uno::String__typeof()), ::uNewDelegateNonVirt(::app::Uno::Predicate__object__typeof(), (const void*)DataBinding__Fuse_Drawing_BlendMode__Acceptor, __this));

            if (::uIs(candidate, ::app::Fuse::Drawing::BlendMode__typeof()))
            {
                ::uPtr< ::app::Uno::UX::Property__Fuse_Drawing_BlendMode*>(__this->Target())->SetRestState(::uUnbox< int>(::app::Fuse::Drawing::BlendMode__typeof(), candidate), (::uObject*)__this);
                return;
            }
        }
    }

    ::app::Fuse::Reactive::Marshal__ToType__Fuse_Drawing_BlendMode(NULL, newValue, ::uNewDelegateNonVirt(::app::Uno::Action__Fuse_Drawing_BlendMode__typeof(), (const void*)DataBinding__Fuse_Drawing_BlendMode__SetValue, __this));
}

void DataBinding__Fuse_Drawing_BlendMode__set_Target(DataBinding__Fuse_Drawing_BlendMode* __this, ::app::Uno::UX::Property__Fuse_Drawing_BlendMode* value)
{
    __this->_Target = value;
}

void DataBinding__Fuse_Drawing_BlendMode__SetValue(DataBinding__Fuse_Drawing_BlendMode* __this, int value)
{
    ::uPtr< ::app::Uno::UX::Property__Fuse_Drawing_BlendMode*>(__this->Target())->SetRestState(value, (::uObject*)__this);
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Reactive\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

DataBinding__Fuse_Drawing_Brush__uType* DataBinding__Fuse_Drawing_Brush__typeof()
{
    static ::uStaticStrong<DataBinding__Fuse_Drawing_Brush__uType*> type;
    if (type != NULL) return type;

    type = (DataBinding__Fuse_Drawing_Brush__uType*)::uAllocClassType(sizeof(DataBinding__Fuse_Drawing_Brush__uType), "Fuse.Reactive.DataBinding<Fuse.Drawing.Brush>", false, 2, 3, 0);

    type->SetBaseType(::app::Fuse::Reactive::Binding__typeof());
    type->__fp_NewValue = (void(*)(::app::Fuse::Reactive::Binding*, ::uObject*))DataBinding__Fuse_Drawing_Brush__NewValue;
    type->__fp_OnRooted = (void(*)(::app::Fuse::Behavior*, ::app::Fuse::Node*))DataBinding__Fuse_Drawing_Brush__OnRooted;
    type->__fp_OnUnrooted = (void(*)(::app::Fuse::Behavior*, ::app::Fuse::Node*))DataBinding__Fuse_Drawing_Brush__OnUnrooted;
    type->__interface_0.__fp_OnSet = (void(*)(void*, ::uObject*))DataBinding__Fuse_Drawing_Brush__Fuse_Reactive_IObserver_OnSet;
    type->__interface_0.__fp_OnAdd = (void(*)(void*, ::uObject*))DataBinding__Fuse_Drawing_Brush__Fuse_Reactive_IObserver_OnAdd;
    type->__interface_0.__fp_OnNewAt = (void(*)(void*, int, ::uObject*))DataBinding__Fuse_Drawing_Brush__Fuse_Reactive_IObserver_OnNewAt;
    type->__interface_0.__fp_OnFailed = (void(*)(void*, ::uString*))DataBinding__Fuse_Drawing_Brush__Fuse_Reactive_IObserver_OnFailed;
    type->__interface_0.__fp_OnNewAll = (void(*)(void*, int))DataBinding__Fuse_Drawing_Brush__Fuse_Reactive_IObserver_OnNewAll;
    type->__interface_0.__fp_OnRemove = (void(*)(void*, ::uObject*, int))DataBinding__Fuse_Drawing_Brush__Fuse_Reactive_IObserver_OnRemove;
    type->__interface_1.__fp_OnNameChanged = (void(*)(void*, ::uObject*, ::uString*))DataBinding__Fuse_Drawing_Brush__Fuse_Scripting_INameListener_OnNameChanged;

    type->SetInterfaces(
        ::app::Fuse::Reactive::IObserver__typeof(), offsetof(DataBinding__Fuse_Drawing_Brush__uType, __interface_0),
        ::app::Fuse::Scripting::INameListener__typeof(), offsetof(DataBinding__Fuse_Drawing_Brush__uType, __interface_1));

    type->SetStrongRefs(
        "_currentValue", offsetof(DataBinding__Fuse_Drawing_Brush, _currentValue),
        "_subscription", offsetof(DataBinding__Fuse_Drawing_Brush, _subscription),
        "_Target", offsetof(DataBinding__Fuse_Drawing_Brush, _Target));

    type->SetFields(2,
        ::uNewField("_currentValue", NULL, offsetof(DataBinding__Fuse_Drawing_Brush, _currentValue), ::uObject__typeof()),
        ::uNewField("_subscription", NULL, offsetof(DataBinding__Fuse_Drawing_Brush, _subscription), ::app::Fuse::Reactive::ISubscription__typeof()));

    type->SetFunctions(3,
        ::uNewFunction("get_Target", DataBinding__Fuse_Drawing_Brush__get_Target, 0, false, ::app::Uno::UX::Property__Fuse_Drawing_Brush__typeof()),
        ::uNewFunction(".ctor", DataBinding__Fuse_Drawing_Brush__New_1, 0, true, DataBinding__Fuse_Drawing_Brush__typeof(), ::app::Uno::UX::Property__Fuse_Drawing_Brush__typeof(), ::app::Uno::String__typeof()),
        ::uNewFunctionVoid("set_Target", DataBinding__Fuse_Drawing_Brush__set_Target, 0, false, ::app::Uno::UX::Property__Fuse_Drawing_Brush__typeof()));

    ::uRegisterType(type);
    return type;
}

void DataBinding__Fuse_Drawing_Brush___ObjInit_2(DataBinding__Fuse_Drawing_Brush* __this, ::app::Uno::UX::Property__Fuse_Drawing_Brush* target, ::uString* key)
{
    ::app::Fuse::Reactive::Binding___ObjInit_1(__this, key);
    __this->Target(target);
}

bool DataBinding__Fuse_Drawing_Brush__Acceptor(DataBinding__Fuse_Drawing_Brush* __this, ::uObject* obj)
{
    return ::uIs(obj, ::app::Fuse::Drawing::Brush__typeof());
}

void DataBinding__Fuse_Drawing_Brush__Fuse_Reactive_IObserver_OnAdd(DataBinding__Fuse_Drawing_Brush* __this, ::uObject* addedValue)
{
    U_THROW(::app::Uno::Exception__New_2(NULL, ::uGetConstString("Not handled: OnAdd")));
}

void DataBinding__Fuse_Drawing_Brush__Fuse_Reactive_IObserver_OnFailed(DataBinding__Fuse_Drawing_Brush* __this, ::uString* message)
{
    U_THROW(::app::Uno::Exception__New_2(NULL, ::uGetConstString("Not handled: OnFailed")));
}

void DataBinding__Fuse_Drawing_Brush__Fuse_Reactive_IObserver_OnNewAll(DataBinding__Fuse_Drawing_Brush* __this, int length)
{
    if (length > 0)
    {
        U_THROW(::app::Uno::Exception__New_2(NULL, ::uGetConstString("Not handled: OnNewAll")));
    }
}

void DataBinding__Fuse_Drawing_Brush__Fuse_Reactive_IObserver_OnNewAt(DataBinding__Fuse_Drawing_Brush* __this, int index, ::uObject* value)
{
    U_THROW(::app::Uno::Exception__New_2(NULL, ::uGetConstString("Not handled: OnNewAt")));
}

void DataBinding__Fuse_Drawing_Brush__Fuse_Reactive_IObserver_OnRemove(DataBinding__Fuse_Drawing_Brush* __this, ::uObject* value, int index)
{
    U_THROW(::app::Uno::Exception__New_2(NULL, ::uGetConstString("Not handled: OnRemoveAt")));
}

void DataBinding__Fuse_Drawing_Brush__Fuse_Reactive_IObserver_OnSet(DataBinding__Fuse_Drawing_Brush* __this, ::uObject* newValue)
{
    __this->PushValue(newValue);
}

void DataBinding__Fuse_Drawing_Brush__Fuse_Scripting_INameListener_OnNameChanged(DataBinding__Fuse_Drawing_Brush* __this, ::uObject* obj, ::uString* name)
{
    __this->PushValue(__this->_currentValue);
}

::app::Uno::UX::Property__Fuse_Drawing_Brush* DataBinding__Fuse_Drawing_Brush__get_Target(DataBinding__Fuse_Drawing_Brush* __this)
{
    return __this->_Target;
}

DataBinding__Fuse_Drawing_Brush* DataBinding__Fuse_Drawing_Brush__New_1(::uStatic* __this, ::app::Uno::UX::Property__Fuse_Drawing_Brush* target, ::uString* key)
{
    DataBinding__Fuse_Drawing_Brush* inst = (DataBinding__Fuse_Drawing_Brush*)::uAllocObject(sizeof(DataBinding__Fuse_Drawing_Brush), DataBinding__Fuse_Drawing_Brush__typeof());
    inst->_ObjInit_2(target, key);
    return inst;
}

void DataBinding__Fuse_Drawing_Brush__NewValue(DataBinding__Fuse_Drawing_Brush* __this, ::uObject* value)
{
    if (::uIs(value, ::app::Fuse::Drawing::Brush__typeof()))
    {
        __this->PushValue(value);
    }
    else if (::uIs(value, ::app::Fuse::Reactive::IObservable__typeof()))
    {
        if (__this->_subscription != NULL)
        {
            ::app::Uno::IDisposable::Dispose(::uPtr< ::uObject*>(__this->_subscription));
            __this->_subscription = NULL;
        }

        ::uObject* obs = ::uAs< ::uObject*>(value, ::app::Fuse::Reactive::IObservable__typeof());

        if (obs != NULL)
        {
            __this->_subscription = ::app::Fuse::Reactive::IObservable::Subscribe(::uPtr< ::uObject*>(obs), (::uObject*)__this);
        }
    }
    else
    {
        __this->PushValue(value);
    }
}

void DataBinding__Fuse_Drawing_Brush__OnRooted(DataBinding__Fuse_Drawing_Brush* __this, ::app::Fuse::Node* n)
{
    ::uPtr< ::app::Uno::UX::Property__Fuse_Drawing_Brush*>(__this->Target())->add_ValueChanged(::uNewDelegateNonVirt(::app::Uno::UX::ValueChangedHandler__Fuse_Drawing_Brush__typeof(), (const void*)DataBinding__Fuse_Drawing_Brush__OnValueChanged, __this));
    ::app::Fuse::Reactive::Binding__OnRooted(__this, n);
}

void DataBinding__Fuse_Drawing_Brush__OnUnrooted(DataBinding__Fuse_Drawing_Brush* __this, ::app::Fuse::Node* n)
{
    ::app::Fuse::Scripting::NameRegistry__RemoveListener(NULL, (::uObject*)__this);
    ::uPtr< ::app::Uno::UX::Property__Fuse_Drawing_Brush*>(__this->Target())->remove_ValueChanged(::uNewDelegateNonVirt(::app::Uno::UX::ValueChangedHandler__Fuse_Drawing_Brush__typeof(), (const void*)DataBinding__Fuse_Drawing_Brush__OnValueChanged, __this));

    if (__this->_subscription != NULL)
    {
        ::app::Uno::IDisposable::Dispose(::uPtr< ::uObject*>(__this->_subscription));
        __this->_subscription = NULL;
    }

    ::app::Fuse::Reactive::Binding__OnUnrooted(__this, n);
}

void DataBinding__Fuse_Drawing_Brush__OnValueChanged(DataBinding__Fuse_Drawing_Brush* __this, ::uObject* sender, ::app::Uno::UX::ValueChangedArgs__Fuse_Drawing_Brush* args)
{
    if ((__this->_subscription != NULL) && (::uPtr< ::app::Uno::UX::ValueChangedArgs__Fuse_Drawing_Brush*>(args)->Origin() != __this))
    {
        ::app::Fuse::Reactive::ISubscription::SetExclusive(::uPtr< ::uObject*>(__this->_subscription), (::uObject*)::uPtr< ::app::Uno::UX::ValueChangedArgs__Fuse_Drawing_Brush*>(args)->Value());
    }
}

void DataBinding__Fuse_Drawing_Brush__PushValue(DataBinding__Fuse_Drawing_Brush* __this, ::uObject* newValue)
{
    __this->_currentValue = newValue;

    if (::uIs(newValue, ::app::Fuse::Drawing::Brush__typeof()))
    {
        ::app::Fuse::Scripting::NameRegistry__RemoveListener(NULL, (::uObject*)__this);
        ::uPtr< ::app::Uno::UX::Property__Fuse_Drawing_Brush*>(__this->Target())->SetRestState(::uCast< ::app::Fuse::Drawing::Brush*>(newValue, ::app::Fuse::Drawing::Brush__typeof()), (::uObject*)__this);
        return;
    }

    ::uString* name = ::uAs< ::uString*>(newValue, ::app::Uno::String__typeof());

    if (::app::Uno::String__op_Inequality(NULL, name, NULL) && (__this->Node() != NULL))
    {
        ::app::Fuse::Scripting::NameRegistry__AddListener(NULL, name, (::uObject*)__this);
        ::app::Fuse::Node* k = ::uPtr< ::app::Fuse::Node*>(__this->Node())->FindNodeByName(::uCast< ::uString*>(newValue, ::app::Uno::String__typeof()));

        if (::uIs(k, ::app::Fuse::Drawing::Brush__typeof()))
        {
            ::uPtr< ::app::Uno::UX::Property__Fuse_Drawing_Brush*>(__this->Target())->SetRestState(::uCast< ::app::Fuse::Drawing::Brush*>((::uObject*)k, ::app::Fuse::Drawing::Brush__typeof()), (::uObject*)__this);
            return;
        }
        else
        {
            ::uObject* candidate = ::uPtr< ::app::Fuse::Node*>(__this->Node())->FindObjectByName(::uCast< ::uString*>(newValue, ::app::Uno::String__typeof()), ::uNewDelegateNonVirt(::app::Uno::Predicate__object__typeof(), (const void*)DataBinding__Fuse_Drawing_Brush__Acceptor, __this));

            if (::uIs(candidate, ::app::Fuse::Drawing::Brush__typeof()))
            {
                ::uPtr< ::app::Uno::UX::Property__Fuse_Drawing_Brush*>(__this->Target())->SetRestState(::uCast< ::app::Fuse::Drawing::Brush*>(candidate, ::app::Fuse::Drawing::Brush__typeof()), (::uObject*)__this);
                return;
            }
        }
    }

    ::app::Fuse::Reactive::Marshal__ToType__Fuse_Drawing_Brush(NULL, newValue, ::uNewDelegateNonVirt(::app::Uno::Action__Fuse_Drawing_Brush__typeof(), (const void*)DataBinding__Fuse_Drawing_Brush__SetValue, __this));
}

void DataBinding__Fuse_Drawing_Brush__set_Target(DataBinding__Fuse_Drawing_Brush* __this, ::app::Uno::UX::Property__Fuse_Drawing_Brush* value)
{
    __this->_Target = value;
}

void DataBinding__Fuse_Drawing_Brush__SetValue(DataBinding__Fuse_Drawing_Brush* __this, ::app::Fuse::Drawing::Brush* value)
{
    ::uPtr< ::app::Uno::UX::Property__Fuse_Drawing_Brush*>(__this->Target())->SetRestState(value, (::uObject*)__this);
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Reactive\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

DataBinding__Fuse_Drawing_DynamicBrush__uType* DataBinding__Fuse_Drawing_DynamicBrush__typeof()
{
    static ::uStaticStrong<DataBinding__Fuse_Drawing_DynamicBrush__uType*> type;
    if (type != NULL) return type;

    type = (DataBinding__Fuse_Drawing_DynamicBrush__uType*)::uAllocClassType(sizeof(DataBinding__Fuse_Drawing_DynamicBrush__uType), "Fuse.Reactive.DataBinding<Fuse.Drawing.DynamicBrush>", false, 2, 3, 0);

    type->SetBaseType(::app::Fuse::Reactive::Binding__typeof());
    type->__fp_NewValue = (void(*)(::app::Fuse::Reactive::Binding*, ::uObject*))DataBinding__Fuse_Drawing_DynamicBrush__NewValue;
    type->__fp_OnRooted = (void(*)(::app::Fuse::Behavior*, ::app::Fuse::Node*))DataBinding__Fuse_Drawing_DynamicBrush__OnRooted;
    type->__fp_OnUnrooted = (void(*)(::app::Fuse::Behavior*, ::app::Fuse::Node*))DataBinding__Fuse_Drawing_DynamicBrush__OnUnrooted;
    type->__interface_0.__fp_OnSet = (void(*)(void*, ::uObject*))DataBinding__Fuse_Drawing_DynamicBrush__Fuse_Reactive_IObserver_OnSet;
    type->__interface_0.__fp_OnAdd = (void(*)(void*, ::uObject*))DataBinding__Fuse_Drawing_DynamicBrush__Fuse_Reactive_IObserver_OnAdd;
    type->__interface_0.__fp_OnNewAt = (void(*)(void*, int, ::uObject*))DataBinding__Fuse_Drawing_DynamicBrush__Fuse_Reactive_IObserver_OnNewAt;
    type->__interface_0.__fp_OnFailed = (void(*)(void*, ::uString*))DataBinding__Fuse_Drawing_DynamicBrush__Fuse_Reactive_IObserver_OnFailed;
    type->__interface_0.__fp_OnNewAll = (void(*)(void*, int))DataBinding__Fuse_Drawing_DynamicBrush__Fuse_Reactive_IObserver_OnNewAll;
    type->__interface_0.__fp_OnRemove = (void(*)(void*, ::uObject*, int))DataBinding__Fuse_Drawing_DynamicBrush__Fuse_Reactive_IObserver_OnRemove;
    type->__interface_1.__fp_OnNameChanged = (void(*)(void*, ::uObject*, ::uString*))DataBinding__Fuse_Drawing_DynamicBrush__Fuse_Scripting_INameListener_OnNameChanged;

    type->SetInterfaces(
        ::app::Fuse::Reactive::IObserver__typeof(), offsetof(DataBinding__Fuse_Drawing_DynamicBrush__uType, __interface_0),
        ::app::Fuse::Scripting::INameListener__typeof(), offsetof(DataBinding__Fuse_Drawing_DynamicBrush__uType, __interface_1));

    type->SetStrongRefs(
        "_currentValue", offsetof(DataBinding__Fuse_Drawing_DynamicBrush, _currentValue),
        "_subscription", offsetof(DataBinding__Fuse_Drawing_DynamicBrush, _subscription),
        "_Target", offsetof(DataBinding__Fuse_Drawing_DynamicBrush, _Target));

    type->SetFields(2,
        ::uNewField("_currentValue", NULL, offsetof(DataBinding__Fuse_Drawing_DynamicBrush, _currentValue), ::uObject__typeof()),
        ::uNewField("_subscription", NULL, offsetof(DataBinding__Fuse_Drawing_DynamicBrush, _subscription), ::app::Fuse::Reactive::ISubscription__typeof()));

    type->SetFunctions(3,
        ::uNewFunction("get_Target", DataBinding__Fuse_Drawing_DynamicBrush__get_Target, 0, false, ::app::Uno::UX::Property__Fuse_Drawing_DynamicBrush__typeof()),
        ::uNewFunction(".ctor", DataBinding__Fuse_Drawing_DynamicBrush__New_1, 0, true, DataBinding__Fuse_Drawing_DynamicBrush__typeof(), ::app::Uno::UX::Property__Fuse_Drawing_DynamicBrush__typeof(), ::app::Uno::String__typeof()),
        ::uNewFunctionVoid("set_Target", DataBinding__Fuse_Drawing_DynamicBrush__set_Target, 0, false, ::app::Uno::UX::Property__Fuse_Drawing_DynamicBrush__typeof()));

    ::uRegisterType(type);
    return type;
}

void DataBinding__Fuse_Drawing_DynamicBrush___ObjInit_2(DataBinding__Fuse_Drawing_DynamicBrush* __this, ::app::Uno::UX::Property__Fuse_Drawing_DynamicBrush* target, ::uString* key)
{
    ::app::Fuse::Reactive::Binding___ObjInit_1(__this, key);
    __this->Target(target);
}

bool DataBinding__Fuse_Drawing_DynamicBrush__Acceptor(DataBinding__Fuse_Drawing_DynamicBrush* __this, ::uObject* obj)
{
    return ::uIs(obj, ::app::Fuse::Drawing::DynamicBrush__typeof());
}

void DataBinding__Fuse_Drawing_DynamicBrush__Fuse_Reactive_IObserver_OnAdd(DataBinding__Fuse_Drawing_DynamicBrush* __this, ::uObject* addedValue)
{
    U_THROW(::app::Uno::Exception__New_2(NULL, ::uGetConstString("Not handled: OnAdd")));
}

void DataBinding__Fuse_Drawing_DynamicBrush__Fuse_Reactive_IObserver_OnFailed(DataBinding__Fuse_Drawing_DynamicBrush* __this, ::uString* message)
{
    U_THROW(::app::Uno::Exception__New_2(NULL, ::uGetConstString("Not handled: OnFailed")));
}

void DataBinding__Fuse_Drawing_DynamicBrush__Fuse_Reactive_IObserver_OnNewAll(DataBinding__Fuse_Drawing_DynamicBrush* __this, int length)
{
    if (length > 0)
    {
        U_THROW(::app::Uno::Exception__New_2(NULL, ::uGetConstString("Not handled: OnNewAll")));
    }
}

void DataBinding__Fuse_Drawing_DynamicBrush__Fuse_Reactive_IObserver_OnNewAt(DataBinding__Fuse_Drawing_DynamicBrush* __this, int index, ::uObject* value)
{
    U_THROW(::app::Uno::Exception__New_2(NULL, ::uGetConstString("Not handled: OnNewAt")));
}

void DataBinding__Fuse_Drawing_DynamicBrush__Fuse_Reactive_IObserver_OnRemove(DataBinding__Fuse_Drawing_DynamicBrush* __this, ::uObject* value, int index)
{
    U_THROW(::app::Uno::Exception__New_2(NULL, ::uGetConstString("Not handled: OnRemoveAt")));
}

void DataBinding__Fuse_Drawing_DynamicBrush__Fuse_Reactive_IObserver_OnSet(DataBinding__Fuse_Drawing_DynamicBrush* __this, ::uObject* newValue)
{
    __this->PushValue(newValue);
}

void DataBinding__Fuse_Drawing_DynamicBrush__Fuse_Scripting_INameListener_OnNameChanged(DataBinding__Fuse_Drawing_DynamicBrush* __this, ::uObject* obj, ::uString* name)
{
    __this->PushValue(__this->_currentValue);
}

::app::Uno::UX::Property__Fuse_Drawing_DynamicBrush* DataBinding__Fuse_Drawing_DynamicBrush__get_Target(DataBinding__Fuse_Drawing_DynamicBrush* __this)
{
    return __this->_Target;
}

DataBinding__Fuse_Drawing_DynamicBrush* DataBinding__Fuse_Drawing_DynamicBrush__New_1(::uStatic* __this, ::app::Uno::UX::Property__Fuse_Drawing_DynamicBrush* target, ::uString* key)
{
    DataBinding__Fuse_Drawing_DynamicBrush* inst = (DataBinding__Fuse_Drawing_DynamicBrush*)::uAllocObject(sizeof(DataBinding__Fuse_Drawing_DynamicBrush), DataBinding__Fuse_Drawing_DynamicBrush__typeof());
    inst->_ObjInit_2(target, key);
    return inst;
}

void DataBinding__Fuse_Drawing_DynamicBrush__NewValue(DataBinding__Fuse_Drawing_DynamicBrush* __this, ::uObject* value)
{
    if (::uIs(value, ::app::Fuse::Drawing::DynamicBrush__typeof()))
    {
        __this->PushValue(value);
    }
    else if (::uIs(value, ::app::Fuse::Reactive::IObservable__typeof()))
    {
        if (__this->_subscription != NULL)
        {
            ::app::Uno::IDisposable::Dispose(::uPtr< ::uObject*>(__this->_subscription));
            __this->_subscription = NULL;
        }

        ::uObject* obs = ::uAs< ::uObject*>(value, ::app::Fuse::Reactive::IObservable__typeof());

        if (obs != NULL)
        {
            __this->_subscription = ::app::Fuse::Reactive::IObservable::Subscribe(::uPtr< ::uObject*>(obs), (::uObject*)__this);
        }
    }
    else
    {
        __this->PushValue(value);
    }
}

void DataBinding__Fuse_Drawing_DynamicBrush__OnRooted(DataBinding__Fuse_Drawing_DynamicBrush* __this, ::app::Fuse::Node* n)
{
    ::uPtr< ::app::Uno::UX::Property__Fuse_Drawing_DynamicBrush*>(__this->Target())->add_ValueChanged(::uNewDelegateNonVirt(::app::Uno::UX::ValueChangedHandler__Fuse_Drawing_DynamicBrush__typeof(), (const void*)DataBinding__Fuse_Drawing_DynamicBrush__OnValueChanged, __this));
    ::app::Fuse::Reactive::Binding__OnRooted(__this, n);
}

void DataBinding__Fuse_Drawing_DynamicBrush__OnUnrooted(DataBinding__Fuse_Drawing_DynamicBrush* __this, ::app::Fuse::Node* n)
{
    ::app::Fuse::Scripting::NameRegistry__RemoveListener(NULL, (::uObject*)__this);
    ::uPtr< ::app::Uno::UX::Property__Fuse_Drawing_DynamicBrush*>(__this->Target())->remove_ValueChanged(::uNewDelegateNonVirt(::app::Uno::UX::ValueChangedHandler__Fuse_Drawing_DynamicBrush__typeof(), (const void*)DataBinding__Fuse_Drawing_DynamicBrush__OnValueChanged, __this));

    if (__this->_subscription != NULL)
    {
        ::app::Uno::IDisposable::Dispose(::uPtr< ::uObject*>(__this->_subscription));
        __this->_subscription = NULL;
    }

    ::app::Fuse::Reactive::Binding__OnUnrooted(__this, n);
}

void DataBinding__Fuse_Drawing_DynamicBrush__OnValueChanged(DataBinding__Fuse_Drawing_DynamicBrush* __this, ::uObject* sender, ::app::Uno::UX::ValueChangedArgs__Fuse_Drawing_DynamicBrush* args)
{
    if ((__this->_subscription != NULL) && (::uPtr< ::app::Uno::UX::ValueChangedArgs__Fuse_Drawing_DynamicBrush*>(args)->Origin() != __this))
    {
        ::app::Fuse::Reactive::ISubscription::SetExclusive(::uPtr< ::uObject*>(__this->_subscription), (::uObject*)::uPtr< ::app::Uno::UX::ValueChangedArgs__Fuse_Drawing_DynamicBrush*>(args)->Value());
    }
}

void DataBinding__Fuse_Drawing_DynamicBrush__PushValue(DataBinding__Fuse_Drawing_DynamicBrush* __this, ::uObject* newValue)
{
    __this->_currentValue = newValue;

    if (::uIs(newValue, ::app::Fuse::Drawing::DynamicBrush__typeof()))
    {
        ::app::Fuse::Scripting::NameRegistry__RemoveListener(NULL, (::uObject*)__this);
        ::uPtr< ::app::Uno::UX::Property__Fuse_Drawing_DynamicBrush*>(__this->Target())->SetRestState(::uCast< ::app::Fuse::Drawing::DynamicBrush*>(newValue, ::app::Fuse::Drawing::DynamicBrush__typeof()), (::uObject*)__this);
        return;
    }

    ::uString* name = ::uAs< ::uString*>(newValue, ::app::Uno::String__typeof());

    if (::app::Uno::String__op_Inequality(NULL, name, NULL) && (__this->Node() != NULL))
    {
        ::app::Fuse::Scripting::NameRegistry__AddListener(NULL, name, (::uObject*)__this);
        ::app::Fuse::Node* k = ::uPtr< ::app::Fuse::Node*>(__this->Node())->FindNodeByName(::uCast< ::uString*>(newValue, ::app::Uno::String__typeof()));

        if (::uIs(k, ::app::Fuse::Drawing::DynamicBrush__typeof()))
        {
            ::uPtr< ::app::Uno::UX::Property__Fuse_Drawing_DynamicBrush*>(__this->Target())->SetRestState(::uCast< ::app::Fuse::Drawing::DynamicBrush*>((::uObject*)k, ::app::Fuse::Drawing::DynamicBrush__typeof()), (::uObject*)__this);
            return;
        }
        else
        {
            ::uObject* candidate = ::uPtr< ::app::Fuse::Node*>(__this->Node())->FindObjectByName(::uCast< ::uString*>(newValue, ::app::Uno::String__typeof()), ::uNewDelegateNonVirt(::app::Uno::Predicate__object__typeof(), (const void*)DataBinding__Fuse_Drawing_DynamicBrush__Acceptor, __this));

            if (::uIs(candidate, ::app::Fuse::Drawing::DynamicBrush__typeof()))
            {
                ::uPtr< ::app::Uno::UX::Property__Fuse_Drawing_DynamicBrush*>(__this->Target())->SetRestState(::uCast< ::app::Fuse::Drawing::DynamicBrush*>(candidate, ::app::Fuse::Drawing::DynamicBrush__typeof()), (::uObject*)__this);
                return;
            }
        }
    }

    ::app::Fuse::Reactive::Marshal__ToType__Fuse_Drawing_DynamicBrush(NULL, newValue, ::uNewDelegateNonVirt(::app::Uno::Action__Fuse_Drawing_DynamicBrush__typeof(), (const void*)DataBinding__Fuse_Drawing_DynamicBrush__SetValue, __this));
}

void DataBinding__Fuse_Drawing_DynamicBrush__set_Target(DataBinding__Fuse_Drawing_DynamicBrush* __this, ::app::Uno::UX::Property__Fuse_Drawing_DynamicBrush* value)
{
    __this->_Target = value;
}

void DataBinding__Fuse_Drawing_DynamicBrush__SetValue(DataBinding__Fuse_Drawing_DynamicBrush* __this, ::app::Fuse::Drawing::DynamicBrush* value)
{
    ::uPtr< ::app::Uno::UX::Property__Fuse_Drawing_DynamicBrush*>(__this->Target())->SetRestState(value, (::uObject*)__this);
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Reactive\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

DataBinding__Fuse_Drawing_GradientStop__uType* DataBinding__Fuse_Drawing_GradientStop__typeof()
{
    static ::uStaticStrong<DataBinding__Fuse_Drawing_GradientStop__uType*> type;
    if (type != NULL) return type;

    type = (DataBinding__Fuse_Drawing_GradientStop__uType*)::uAllocClassType(sizeof(DataBinding__Fuse_Drawing_GradientStop__uType), "Fuse.Reactive.DataBinding<Fuse.Drawing.GradientStop>", false, 2, 3, 0);

    type->SetBaseType(::app::Fuse::Reactive::Binding__typeof());
    type->__fp_NewValue = (void(*)(::app::Fuse::Reactive::Binding*, ::uObject*))DataBinding__Fuse_Drawing_GradientStop__NewValue;
    type->__fp_OnRooted = (void(*)(::app::Fuse::Behavior*, ::app::Fuse::Node*))DataBinding__Fuse_Drawing_GradientStop__OnRooted;
    type->__fp_OnUnrooted = (void(*)(::app::Fuse::Behavior*, ::app::Fuse::Node*))DataBinding__Fuse_Drawing_GradientStop__OnUnrooted;
    type->__interface_0.__fp_OnSet = (void(*)(void*, ::uObject*))DataBinding__Fuse_Drawing_GradientStop__Fuse_Reactive_IObserver_OnSet;
    type->__interface_0.__fp_OnAdd = (void(*)(void*, ::uObject*))DataBinding__Fuse_Drawing_GradientStop__Fuse_Reactive_IObserver_OnAdd;
    type->__interface_0.__fp_OnNewAt = (void(*)(void*, int, ::uObject*))DataBinding__Fuse_Drawing_GradientStop__Fuse_Reactive_IObserver_OnNewAt;
    type->__interface_0.__fp_OnFailed = (void(*)(void*, ::uString*))DataBinding__Fuse_Drawing_GradientStop__Fuse_Reactive_IObserver_OnFailed;
    type->__interface_0.__fp_OnNewAll = (void(*)(void*, int))DataBinding__Fuse_Drawing_GradientStop__Fuse_Reactive_IObserver_OnNewAll;
    type->__interface_0.__fp_OnRemove = (void(*)(void*, ::uObject*, int))DataBinding__Fuse_Drawing_GradientStop__Fuse_Reactive_IObserver_OnRemove;
    type->__interface_1.__fp_OnNameChanged = (void(*)(void*, ::uObject*, ::uString*))DataBinding__Fuse_Drawing_GradientStop__Fuse_Scripting_INameListener_OnNameChanged;

    type->SetInterfaces(
        ::app::Fuse::Reactive::IObserver__typeof(), offsetof(DataBinding__Fuse_Drawing_GradientStop__uType, __interface_0),
        ::app::Fuse::Scripting::INameListener__typeof(), offsetof(DataBinding__Fuse_Drawing_GradientStop__uType, __interface_1));

    type->SetStrongRefs(
        "_currentValue", offsetof(DataBinding__Fuse_Drawing_GradientStop, _currentValue),
        "_subscription", offsetof(DataBinding__Fuse_Drawing_GradientStop, _subscription),
        "_Target", offsetof(DataBinding__Fuse_Drawing_GradientStop, _Target));

    type->SetFields(2,
        ::uNewField("_currentValue", NULL, offsetof(DataBinding__Fuse_Drawing_GradientStop, _currentValue), ::uObject__typeof()),
        ::uNewField("_subscription", NULL, offsetof(DataBinding__Fuse_Drawing_GradientStop, _subscription), ::app::Fuse::Reactive::ISubscription__typeof()));

    type->SetFunctions(3,
        ::uNewFunction("get_Target", DataBinding__Fuse_Drawing_GradientStop__get_Target, 0, false, ::app::Uno::UX::Property__Fuse_Drawing_GradientStop__typeof()),
        ::uNewFunction(".ctor", DataBinding__Fuse_Drawing_GradientStop__New_1, 0, true, DataBinding__Fuse_Drawing_GradientStop__typeof(), ::app::Uno::UX::Property__Fuse_Drawing_GradientStop__typeof(), ::app::Uno::String__typeof()),
        ::uNewFunctionVoid("set_Target", DataBinding__Fuse_Drawing_GradientStop__set_Target, 0, false, ::app::Uno::UX::Property__Fuse_Drawing_GradientStop__typeof()));

    ::uRegisterType(type);
    return type;
}

void DataBinding__Fuse_Drawing_GradientStop___ObjInit_2(DataBinding__Fuse_Drawing_GradientStop* __this, ::app::Uno::UX::Property__Fuse_Drawing_GradientStop* target, ::uString* key)
{
    ::app::Fuse::Reactive::Binding___ObjInit_1(__this, key);
    __this->Target(target);
}

bool DataBinding__Fuse_Drawing_GradientStop__Acceptor(DataBinding__Fuse_Drawing_GradientStop* __this, ::uObject* obj)
{
    return ::uIs(obj, ::app::Fuse::Drawing::GradientStop__typeof());
}

void DataBinding__Fuse_Drawing_GradientStop__Fuse_Reactive_IObserver_OnAdd(DataBinding__Fuse_Drawing_GradientStop* __this, ::uObject* addedValue)
{
    U_THROW(::app::Uno::Exception__New_2(NULL, ::uGetConstString("Not handled: OnAdd")));
}

void DataBinding__Fuse_Drawing_GradientStop__Fuse_Reactive_IObserver_OnFailed(DataBinding__Fuse_Drawing_GradientStop* __this, ::uString* message)
{
    U_THROW(::app::Uno::Exception__New_2(NULL, ::uGetConstString("Not handled: OnFailed")));
}

void DataBinding__Fuse_Drawing_GradientStop__Fuse_Reactive_IObserver_OnNewAll(DataBinding__Fuse_Drawing_GradientStop* __this, int length)
{
    if (length > 0)
    {
        U_THROW(::app::Uno::Exception__New_2(NULL, ::uGetConstString("Not handled: OnNewAll")));
    }
}

void DataBinding__Fuse_Drawing_GradientStop__Fuse_Reactive_IObserver_OnNewAt(DataBinding__Fuse_Drawing_GradientStop* __this, int index, ::uObject* value)
{
    U_THROW(::app::Uno::Exception__New_2(NULL, ::uGetConstString("Not handled: OnNewAt")));
}

void DataBinding__Fuse_Drawing_GradientStop__Fuse_Reactive_IObserver_OnRemove(DataBinding__Fuse_Drawing_GradientStop* __this, ::uObject* value, int index)
{
    U_THROW(::app::Uno::Exception__New_2(NULL, ::uGetConstString("Not handled: OnRemoveAt")));
}

void DataBinding__Fuse_Drawing_GradientStop__Fuse_Reactive_IObserver_OnSet(DataBinding__Fuse_Drawing_GradientStop* __this, ::uObject* newValue)
{
    __this->PushValue(newValue);
}

void DataBinding__Fuse_Drawing_GradientStop__Fuse_Scripting_INameListener_OnNameChanged(DataBinding__Fuse_Drawing_GradientStop* __this, ::uObject* obj, ::uString* name)
{
    __this->PushValue(__this->_currentValue);
}

::app::Uno::UX::Property__Fuse_Drawing_GradientStop* DataBinding__Fuse_Drawing_GradientStop__get_Target(DataBinding__Fuse_Drawing_GradientStop* __this)
{
    return __this->_Target;
}

DataBinding__Fuse_Drawing_GradientStop* DataBinding__Fuse_Drawing_GradientStop__New_1(::uStatic* __this, ::app::Uno::UX::Property__Fuse_Drawing_GradientStop* target, ::uString* key)
{
    DataBinding__Fuse_Drawing_GradientStop* inst = (DataBinding__Fuse_Drawing_GradientStop*)::uAllocObject(sizeof(DataBinding__Fuse_Drawing_GradientStop), DataBinding__Fuse_Drawing_GradientStop__typeof());
    inst->_ObjInit_2(target, key);
    return inst;
}

void DataBinding__Fuse_Drawing_GradientStop__NewValue(DataBinding__Fuse_Drawing_GradientStop* __this, ::uObject* value)
{
    if (::uIs(value, ::app::Fuse::Drawing::GradientStop__typeof()))
    {
        __this->PushValue(value);
    }
    else if (::uIs(value, ::app::Fuse::Reactive::IObservable__typeof()))
    {
        if (__this->_subscription != NULL)
        {
            ::app::Uno::IDisposable::Dispose(::uPtr< ::uObject*>(__this->_subscription));
            __this->_subscription = NULL;
        }

        ::uObject* obs = ::uAs< ::uObject*>(value, ::app::Fuse::Reactive::IObservable__typeof());

        if (obs != NULL)
        {
            __this->_subscription = ::app::Fuse::Reactive::IObservable::Subscribe(::uPtr< ::uObject*>(obs), (::uObject*)__this);
        }
    }
    else
    {
        __this->PushValue(value);
    }
}

void DataBinding__Fuse_Drawing_GradientStop__OnRooted(DataBinding__Fuse_Drawing_GradientStop* __this, ::app::Fuse::Node* n)
{
    ::uPtr< ::app::Uno::UX::Property__Fuse_Drawing_GradientStop*>(__this->Target())->add_ValueChanged(::uNewDelegateNonVirt(::app::Uno::UX::ValueChangedHandler__Fuse_Drawing_GradientStop__typeof(), (const void*)DataBinding__Fuse_Drawing_GradientStop__OnValueChanged, __this));
    ::app::Fuse::Reactive::Binding__OnRooted(__this, n);
}

void DataBinding__Fuse_Drawing_GradientStop__OnUnrooted(DataBinding__Fuse_Drawing_GradientStop* __this, ::app::Fuse::Node* n)
{
    ::app::Fuse::Scripting::NameRegistry__RemoveListener(NULL, (::uObject*)__this);
    ::uPtr< ::app::Uno::UX::Property__Fuse_Drawing_GradientStop*>(__this->Target())->remove_ValueChanged(::uNewDelegateNonVirt(::app::Uno::UX::ValueChangedHandler__Fuse_Drawing_GradientStop__typeof(), (const void*)DataBinding__Fuse_Drawing_GradientStop__OnValueChanged, __this));

    if (__this->_subscription != NULL)
    {
        ::app::Uno::IDisposable::Dispose(::uPtr< ::uObject*>(__this->_subscription));
        __this->_subscription = NULL;
    }

    ::app::Fuse::Reactive::Binding__OnUnrooted(__this, n);
}

void DataBinding__Fuse_Drawing_GradientStop__OnValueChanged(DataBinding__Fuse_Drawing_GradientStop* __this, ::uObject* sender, ::app::Uno::UX::ValueChangedArgs__Fuse_Drawing_GradientStop* args)
{
    if ((__this->_subscription != NULL) && (::uPtr< ::app::Uno::UX::ValueChangedArgs__Fuse_Drawing_GradientStop*>(args)->Origin() != __this))
    {
        ::app::Fuse::Reactive::ISubscription::SetExclusive(::uPtr< ::uObject*>(__this->_subscription), (::uObject*)::uPtr< ::app::Uno::UX::ValueChangedArgs__Fuse_Drawing_GradientStop*>(args)->Value());
    }
}

void DataBinding__Fuse_Drawing_GradientStop__PushValue(DataBinding__Fuse_Drawing_GradientStop* __this, ::uObject* newValue)
{
    __this->_currentValue = newValue;

    if (::uIs(newValue, ::app::Fuse::Drawing::GradientStop__typeof()))
    {
        ::app::Fuse::Scripting::NameRegistry__RemoveListener(NULL, (::uObject*)__this);
        ::uPtr< ::app::Uno::UX::Property__Fuse_Drawing_GradientStop*>(__this->Target())->SetRestState(::uCast< ::app::Fuse::Drawing::GradientStop*>(newValue, ::app::Fuse::Drawing::GradientStop__typeof()), (::uObject*)__this);
        return;
    }

    ::uString* name = ::uAs< ::uString*>(newValue, ::app::Uno::String__typeof());

    if (::app::Uno::String__op_Inequality(NULL, name, NULL) && (__this->Node() != NULL))
    {
        ::app::Fuse::Scripting::NameRegistry__AddListener(NULL, name, (::uObject*)__this);
        ::app::Fuse::Node* k = ::uPtr< ::app::Fuse::Node*>(__this->Node())->FindNodeByName(::uCast< ::uString*>(newValue, ::app::Uno::String__typeof()));

        if (::uIs(k, ::app::Fuse::Drawing::GradientStop__typeof()))
        {
            ::uPtr< ::app::Uno::UX::Property__Fuse_Drawing_GradientStop*>(__this->Target())->SetRestState(::uCast< ::app::Fuse::Drawing::GradientStop*>((::uObject*)k, ::app::Fuse::Drawing::GradientStop__typeof()), (::uObject*)__this);
            return;
        }
        else
        {
            ::uObject* candidate = ::uPtr< ::app::Fuse::Node*>(__this->Node())->FindObjectByName(::uCast< ::uString*>(newValue, ::app::Uno::String__typeof()), ::uNewDelegateNonVirt(::app::Uno::Predicate__object__typeof(), (const void*)DataBinding__Fuse_Drawing_GradientStop__Acceptor, __this));

            if (::uIs(candidate, ::app::Fuse::Drawing::GradientStop__typeof()))
            {
                ::uPtr< ::app::Uno::UX::Property__Fuse_Drawing_GradientStop*>(__this->Target())->SetRestState(::uCast< ::app::Fuse::Drawing::GradientStop*>(candidate, ::app::Fuse::Drawing::GradientStop__typeof()), (::uObject*)__this);
                return;
            }
        }
    }

    ::app::Fuse::Reactive::Marshal__ToType__Fuse_Drawing_GradientStop(NULL, newValue, ::uNewDelegateNonVirt(::app::Uno::Action__Fuse_Drawing_GradientStop__typeof(), (const void*)DataBinding__Fuse_Drawing_GradientStop__SetValue, __this));
}

void DataBinding__Fuse_Drawing_GradientStop__set_Target(DataBinding__Fuse_Drawing_GradientStop* __this, ::app::Uno::UX::Property__Fuse_Drawing_GradientStop* value)
{
    __this->_Target = value;
}

void DataBinding__Fuse_Drawing_GradientStop__SetValue(DataBinding__Fuse_Drawing_GradientStop* __this, ::app::Fuse::Drawing::GradientStop* value)
{
    ::uPtr< ::app::Uno::UX::Property__Fuse_Drawing_GradientStop*>(__this->Target())->SetRestState(value, (::uObject*)__this);
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Reactive\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

DataBinding__Fuse_Drawing_LinearGradient__uType* DataBinding__Fuse_Drawing_LinearGradient__typeof()
{
    static ::uStaticStrong<DataBinding__Fuse_Drawing_LinearGradient__uType*> type;
    if (type != NULL) return type;

    type = (DataBinding__Fuse_Drawing_LinearGradient__uType*)::uAllocClassType(sizeof(DataBinding__Fuse_Drawing_LinearGradient__uType), "Fuse.Reactive.DataBinding<Fuse.Drawing.LinearGradient>", false, 2, 3, 0);

    type->SetBaseType(::app::Fuse::Reactive::Binding__typeof());
    type->__fp_NewValue = (void(*)(::app::Fuse::Reactive::Binding*, ::uObject*))DataBinding__Fuse_Drawing_LinearGradient__NewValue;
    type->__fp_OnRooted = (void(*)(::app::Fuse::Behavior*, ::app::Fuse::Node*))DataBinding__Fuse_Drawing_LinearGradient__OnRooted;
    type->__fp_OnUnrooted = (void(*)(::app::Fuse::Behavior*, ::app::Fuse::Node*))DataBinding__Fuse_Drawing_LinearGradient__OnUnrooted;
    type->__interface_0.__fp_OnSet = (void(*)(void*, ::uObject*))DataBinding__Fuse_Drawing_LinearGradient__Fuse_Reactive_IObserver_OnSet;
    type->__interface_0.__fp_OnAdd = (void(*)(void*, ::uObject*))DataBinding__Fuse_Drawing_LinearGradient__Fuse_Reactive_IObserver_OnAdd;
    type->__interface_0.__fp_OnNewAt = (void(*)(void*, int, ::uObject*))DataBinding__Fuse_Drawing_LinearGradient__Fuse_Reactive_IObserver_OnNewAt;
    type->__interface_0.__fp_OnFailed = (void(*)(void*, ::uString*))DataBinding__Fuse_Drawing_LinearGradient__Fuse_Reactive_IObserver_OnFailed;
    type->__interface_0.__fp_OnNewAll = (void(*)(void*, int))DataBinding__Fuse_Drawing_LinearGradient__Fuse_Reactive_IObserver_OnNewAll;
    type->__interface_0.__fp_OnRemove = (void(*)(void*, ::uObject*, int))DataBinding__Fuse_Drawing_LinearGradient__Fuse_Reactive_IObserver_OnRemove;
    type->__interface_1.__fp_OnNameChanged = (void(*)(void*, ::uObject*, ::uString*))DataBinding__Fuse_Drawing_LinearGradient__Fuse_Scripting_INameListener_OnNameChanged;

    type->SetInterfaces(
        ::app::Fuse::Reactive::IObserver__typeof(), offsetof(DataBinding__Fuse_Drawing_LinearGradient__uType, __interface_0),
        ::app::Fuse::Scripting::INameListener__typeof(), offsetof(DataBinding__Fuse_Drawing_LinearGradient__uType, __interface_1));

    type->SetStrongRefs(
        "_currentValue", offsetof(DataBinding__Fuse_Drawing_LinearGradient, _currentValue),
        "_subscription", offsetof(DataBinding__Fuse_Drawing_LinearGradient, _subscription),
        "_Target", offsetof(DataBinding__Fuse_Drawing_LinearGradient, _Target));

    type->SetFields(2,
        ::uNewField("_currentValue", NULL, offsetof(DataBinding__Fuse_Drawing_LinearGradient, _currentValue), ::uObject__typeof()),
        ::uNewField("_subscription", NULL, offsetof(DataBinding__Fuse_Drawing_LinearGradient, _subscription), ::app::Fuse::Reactive::ISubscription__typeof()));

    type->SetFunctions(3,
        ::uNewFunction("get_Target", DataBinding__Fuse_Drawing_LinearGradient__get_Target, 0, false, ::app::Uno::UX::Property__Fuse_Drawing_LinearGradient__typeof()),
        ::uNewFunction(".ctor", DataBinding__Fuse_Drawing_LinearGradient__New_1, 0, true, DataBinding__Fuse_Drawing_LinearGradient__typeof(), ::app::Uno::UX::Property__Fuse_Drawing_LinearGradient__typeof(), ::app::Uno::String__typeof()),
        ::uNewFunctionVoid("set_Target", DataBinding__Fuse_Drawing_LinearGradient__set_Target, 0, false, ::app::Uno::UX::Property__Fuse_Drawing_LinearGradient__typeof()));

    ::uRegisterType(type);
    return type;
}

void DataBinding__Fuse_Drawing_LinearGradient___ObjInit_2(DataBinding__Fuse_Drawing_LinearGradient* __this, ::app::Uno::UX::Property__Fuse_Drawing_LinearGradient* target, ::uString* key)
{
    ::app::Fuse::Reactive::Binding___ObjInit_1(__this, key);
    __this->Target(target);
}

bool DataBinding__Fuse_Drawing_LinearGradient__Acceptor(DataBinding__Fuse_Drawing_LinearGradient* __this, ::uObject* obj)
{
    return ::uIs(obj, ::app::Fuse::Drawing::LinearGradient__typeof());
}

void DataBinding__Fuse_Drawing_LinearGradient__Fuse_Reactive_IObserver_OnAdd(DataBinding__Fuse_Drawing_LinearGradient* __this, ::uObject* addedValue)
{
    U_THROW(::app::Uno::Exception__New_2(NULL, ::uGetConstString("Not handled: OnAdd")));
}

void DataBinding__Fuse_Drawing_LinearGradient__Fuse_Reactive_IObserver_OnFailed(DataBinding__Fuse_Drawing_LinearGradient* __this, ::uString* message)
{
    U_THROW(::app::Uno::Exception__New_2(NULL, ::uGetConstString("Not handled: OnFailed")));
}

void DataBinding__Fuse_Drawing_LinearGradient__Fuse_Reactive_IObserver_OnNewAll(DataBinding__Fuse_Drawing_LinearGradient* __this, int length)
{
    if (length > 0)
    {
        U_THROW(::app::Uno::Exception__New_2(NULL, ::uGetConstString("Not handled: OnNewAll")));
    }
}

void DataBinding__Fuse_Drawing_LinearGradient__Fuse_Reactive_IObserver_OnNewAt(DataBinding__Fuse_Drawing_LinearGradient* __this, int index, ::uObject* value)
{
    U_THROW(::app::Uno::Exception__New_2(NULL, ::uGetConstString("Not handled: OnNewAt")));
}

void DataBinding__Fuse_Drawing_LinearGradient__Fuse_Reactive_IObserver_OnRemove(DataBinding__Fuse_Drawing_LinearGradient* __this, ::uObject* value, int index)
{
    U_THROW(::app::Uno::Exception__New_2(NULL, ::uGetConstString("Not handled: OnRemoveAt")));
}

void DataBinding__Fuse_Drawing_LinearGradient__Fuse_Reactive_IObserver_OnSet(DataBinding__Fuse_Drawing_LinearGradient* __this, ::uObject* newValue)
{
    __this->PushValue(newValue);
}

void DataBinding__Fuse_Drawing_LinearGradient__Fuse_Scripting_INameListener_OnNameChanged(DataBinding__Fuse_Drawing_LinearGradient* __this, ::uObject* obj, ::uString* name)
{
    __this->PushValue(__this->_currentValue);
}

::app::Uno::UX::Property__Fuse_Drawing_LinearGradient* DataBinding__Fuse_Drawing_LinearGradient__get_Target(DataBinding__Fuse_Drawing_LinearGradient* __this)
{
    return __this->_Target;
}

DataBinding__Fuse_Drawing_LinearGradient* DataBinding__Fuse_Drawing_LinearGradient__New_1(::uStatic* __this, ::app::Uno::UX::Property__Fuse_Drawing_LinearGradient* target, ::uString* key)
{
    DataBinding__Fuse_Drawing_LinearGradient* inst = (DataBinding__Fuse_Drawing_LinearGradient*)::uAllocObject(sizeof(DataBinding__Fuse_Drawing_LinearGradient), DataBinding__Fuse_Drawing_LinearGradient__typeof());
    inst->_ObjInit_2(target, key);
    return inst;
}

void DataBinding__Fuse_Drawing_LinearGradient__NewValue(DataBinding__Fuse_Drawing_LinearGradient* __this, ::uObject* value)
{
    if (::uIs(value, ::app::Fuse::Drawing::LinearGradient__typeof()))
    {
        __this->PushValue(value);
    }
    else if (::uIs(value, ::app::Fuse::Reactive::IObservable__typeof()))
    {
        if (__this->_subscription != NULL)
        {
            ::app::Uno::IDisposable::Dispose(::uPtr< ::uObject*>(__this->_subscription));
            __this->_subscription = NULL;
        }

        ::uObject* obs = ::uAs< ::uObject*>(value, ::app::Fuse::Reactive::IObservable__typeof());

        if (obs != NULL)
        {
            __this->_subscription = ::app::Fuse::Reactive::IObservable::Subscribe(::uPtr< ::uObject*>(obs), (::uObject*)__this);
        }
    }
    else
    {
        __this->PushValue(value);
    }
}

void DataBinding__Fuse_Drawing_LinearGradient__OnRooted(DataBinding__Fuse_Drawing_LinearGradient* __this, ::app::Fuse::Node* n)
{
    ::uPtr< ::app::Uno::UX::Property__Fuse_Drawing_LinearGradient*>(__this->Target())->add_ValueChanged(::uNewDelegateNonVirt(::app::Uno::UX::ValueChangedHandler__Fuse_Drawing_LinearGradient__typeof(), (const void*)DataBinding__Fuse_Drawing_LinearGradient__OnValueChanged, __this));
    ::app::Fuse::Reactive::Binding__OnRooted(__this, n);
}

void DataBinding__Fuse_Drawing_LinearGradient__OnUnrooted(DataBinding__Fuse_Drawing_LinearGradient* __this, ::app::Fuse::Node* n)
{
    ::app::Fuse::Scripting::NameRegistry__RemoveListener(NULL, (::uObject*)__this);
    ::uPtr< ::app::Uno::UX::Property__Fuse_Drawing_LinearGradient*>(__this->Target())->remove_ValueChanged(::uNewDelegateNonVirt(::app::Uno::UX::ValueChangedHandler__Fuse_Drawing_LinearGradient__typeof(), (const void*)DataBinding__Fuse_Drawing_LinearGradient__OnValueChanged, __this));

    if (__this->_subscription != NULL)
    {
        ::app::Uno::IDisposable::Dispose(::uPtr< ::uObject*>(__this->_subscription));
        __this->_subscription = NULL;
    }

    ::app::Fuse::Reactive::Binding__OnUnrooted(__this, n);
}

void DataBinding__Fuse_Drawing_LinearGradient__OnValueChanged(DataBinding__Fuse_Drawing_LinearGradient* __this, ::uObject* sender, ::app::Uno::UX::ValueChangedArgs__Fuse_Drawing_LinearGradient* args)
{
    if ((__this->_subscription != NULL) && (::uPtr< ::app::Uno::UX::ValueChangedArgs__Fuse_Drawing_LinearGradient*>(args)->Origin() != __this))
    {
        ::app::Fuse::Reactive::ISubscription::SetExclusive(::uPtr< ::uObject*>(__this->_subscription), (::uObject*)::uPtr< ::app::Uno::UX::ValueChangedArgs__Fuse_Drawing_LinearGradient*>(args)->Value());
    }
}

void DataBinding__Fuse_Drawing_LinearGradient__PushValue(DataBinding__Fuse_Drawing_LinearGradient* __this, ::uObject* newValue)
{
    __this->_currentValue = newValue;

    if (::uIs(newValue, ::app::Fuse::Drawing::LinearGradient__typeof()))
    {
        ::app::Fuse::Scripting::NameRegistry__RemoveListener(NULL, (::uObject*)__this);
        ::uPtr< ::app::Uno::UX::Property__Fuse_Drawing_LinearGradient*>(__this->Target())->SetRestState(::uCast< ::app::Fuse::Drawing::LinearGradient*>(newValue, ::app::Fuse::Drawing::LinearGradient__typeof()), (::uObject*)__this);
        return;
    }

    ::uString* name = ::uAs< ::uString*>(newValue, ::app::Uno::String__typeof());

    if (::app::Uno::String__op_Inequality(NULL, name, NULL) && (__this->Node() != NULL))
    {
        ::app::Fuse::Scripting::NameRegistry__AddListener(NULL, name, (::uObject*)__this);
        ::app::Fuse::Node* k = ::uPtr< ::app::Fuse::Node*>(__this->Node())->FindNodeByName(::uCast< ::uString*>(newValue, ::app::Uno::String__typeof()));

        if (::uIs(k, ::app::Fuse::Drawing::LinearGradient__typeof()))
        {
            ::uPtr< ::app::Uno::UX::Property__Fuse_Drawing_LinearGradient*>(__this->Target())->SetRestState(::uCast< ::app::Fuse::Drawing::LinearGradient*>((::uObject*)k, ::app::Fuse::Drawing::LinearGradient__typeof()), (::uObject*)__this);
            return;
        }
        else
        {
            ::uObject* candidate = ::uPtr< ::app::Fuse::Node*>(__this->Node())->FindObjectByName(::uCast< ::uString*>(newValue, ::app::Uno::String__typeof()), ::uNewDelegateNonVirt(::app::Uno::Predicate__object__typeof(), (const void*)DataBinding__Fuse_Drawing_LinearGradient__Acceptor, __this));

            if (::uIs(candidate, ::app::Fuse::Drawing::LinearGradient__typeof()))
            {
                ::uPtr< ::app::Uno::UX::Property__Fuse_Drawing_LinearGradient*>(__this->Target())->SetRestState(::uCast< ::app::Fuse::Drawing::LinearGradient*>(candidate, ::app::Fuse::Drawing::LinearGradient__typeof()), (::uObject*)__this);
                return;
            }
        }
    }

    ::app::Fuse::Reactive::Marshal__ToType__Fuse_Drawing_LinearGradient(NULL, newValue, ::uNewDelegateNonVirt(::app::Uno::Action__Fuse_Drawing_LinearGradient__typeof(), (const void*)DataBinding__Fuse_Drawing_LinearGradient__SetValue, __this));
}

void DataBinding__Fuse_Drawing_LinearGradient__set_Target(DataBinding__Fuse_Drawing_LinearGradient* __this, ::app::Uno::UX::Property__Fuse_Drawing_LinearGradient* value)
{
    __this->_Target = value;
}

void DataBinding__Fuse_Drawing_LinearGradient__SetValue(DataBinding__Fuse_Drawing_LinearGradient* __this, ::app::Fuse::Drawing::LinearGradient* value)
{
    ::uPtr< ::app::Uno::UX::Property__Fuse_Drawing_LinearGradient*>(__this->Target())->SetRestState(value, (::uObject*)__this);
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Reactive\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

DataBinding__Fuse_Drawing_SolidColor__uType* DataBinding__Fuse_Drawing_SolidColor__typeof()
{
    static ::uStaticStrong<DataBinding__Fuse_Drawing_SolidColor__uType*> type;
    if (type != NULL) return type;

    type = (DataBinding__Fuse_Drawing_SolidColor__uType*)::uAllocClassType(sizeof(DataBinding__Fuse_Drawing_SolidColor__uType), "Fuse.Reactive.DataBinding<Fuse.Drawing.SolidColor>", false, 2, 3, 0);

    type->SetBaseType(::app::Fuse::Reactive::Binding__typeof());
    type->__fp_NewValue = (void(*)(::app::Fuse::Reactive::Binding*, ::uObject*))DataBinding__Fuse_Drawing_SolidColor__NewValue;
    type->__fp_OnRooted = (void(*)(::app::Fuse::Behavior*, ::app::Fuse::Node*))DataBinding__Fuse_Drawing_SolidColor__OnRooted;
    type->__fp_OnUnrooted = (void(*)(::app::Fuse::Behavior*, ::app::Fuse::Node*))DataBinding__Fuse_Drawing_SolidColor__OnUnrooted;
    type->__interface_0.__fp_OnSet = (void(*)(void*, ::uObject*))DataBinding__Fuse_Drawing_SolidColor__Fuse_Reactive_IObserver_OnSet;
    type->__interface_0.__fp_OnAdd = (void(*)(void*, ::uObject*))DataBinding__Fuse_Drawing_SolidColor__Fuse_Reactive_IObserver_OnAdd;
    type->__interface_0.__fp_OnNewAt = (void(*)(void*, int, ::uObject*))DataBinding__Fuse_Drawing_SolidColor__Fuse_Reactive_IObserver_OnNewAt;
    type->__interface_0.__fp_OnFailed = (void(*)(void*, ::uString*))DataBinding__Fuse_Drawing_SolidColor__Fuse_Reactive_IObserver_OnFailed;
    type->__interface_0.__fp_OnNewAll = (void(*)(void*, int))DataBinding__Fuse_Drawing_SolidColor__Fuse_Reactive_IObserver_OnNewAll;
    type->__interface_0.__fp_OnRemove = (void(*)(void*, ::uObject*, int))DataBinding__Fuse_Drawing_SolidColor__Fuse_Reactive_IObserver_OnRemove;
    type->__interface_1.__fp_OnNameChanged = (void(*)(void*, ::uObject*, ::uString*))DataBinding__Fuse_Drawing_SolidColor__Fuse_Scripting_INameListener_OnNameChanged;

    type->SetInterfaces(
        ::app::Fuse::Reactive::IObserver__typeof(), offsetof(DataBinding__Fuse_Drawing_SolidColor__uType, __interface_0),
        ::app::Fuse::Scripting::INameListener__typeof(), offsetof(DataBinding__Fuse_Drawing_SolidColor__uType, __interface_1));

    type->SetStrongRefs(
        "_currentValue", offsetof(DataBinding__Fuse_Drawing_SolidColor, _currentValue),
        "_subscription", offsetof(DataBinding__Fuse_Drawing_SolidColor, _subscription),
        "_Target", offsetof(DataBinding__Fuse_Drawing_SolidColor, _Target));

    type->SetFields(2,
        ::uNewField("_currentValue", NULL, offsetof(DataBinding__Fuse_Drawing_SolidColor, _currentValue), ::uObject__typeof()),
        ::uNewField("_subscription", NULL, offsetof(DataBinding__Fuse_Drawing_SolidColor, _subscription), ::app::Fuse::Reactive::ISubscription__typeof()));

    type->SetFunctions(3,
        ::uNewFunction("get_Target", DataBinding__Fuse_Drawing_SolidColor__get_Target, 0, false, ::app::Uno::UX::Property__Fuse_Drawing_SolidColor__typeof()),
        ::uNewFunction(".ctor", DataBinding__Fuse_Drawing_SolidColor__New_1, 0, true, DataBinding__Fuse_Drawing_SolidColor__typeof(), ::app::Uno::UX::Property__Fuse_Drawing_SolidColor__typeof(), ::app::Uno::String__typeof()),
        ::uNewFunctionVoid("set_Target", DataBinding__Fuse_Drawing_SolidColor__set_Target, 0, false, ::app::Uno::UX::Property__Fuse_Drawing_SolidColor__typeof()));

    ::uRegisterType(type);
    return type;
}

void DataBinding__Fuse_Drawing_SolidColor___ObjInit_2(DataBinding__Fuse_Drawing_SolidColor* __this, ::app::Uno::UX::Property__Fuse_Drawing_SolidColor* target, ::uString* key)
{
    ::app::Fuse::Reactive::Binding___ObjInit_1(__this, key);
    __this->Target(target);
}

bool DataBinding__Fuse_Drawing_SolidColor__Acceptor(DataBinding__Fuse_Drawing_SolidColor* __this, ::uObject* obj)
{
    return ::uIs(obj, ::app::Fuse::Drawing::SolidColor__typeof());
}

void DataBinding__Fuse_Drawing_SolidColor__Fuse_Reactive_IObserver_OnAdd(DataBinding__Fuse_Drawing_SolidColor* __this, ::uObject* addedValue)
{
    U_THROW(::app::Uno::Exception__New_2(NULL, ::uGetConstString("Not handled: OnAdd")));
}

void DataBinding__Fuse_Drawing_SolidColor__Fuse_Reactive_IObserver_OnFailed(DataBinding__Fuse_Drawing_SolidColor* __this, ::uString* message)
{
    U_THROW(::app::Uno::Exception__New_2(NULL, ::uGetConstString("Not handled: OnFailed")));
}

void DataBinding__Fuse_Drawing_SolidColor__Fuse_Reactive_IObserver_OnNewAll(DataBinding__Fuse_Drawing_SolidColor* __this, int length)
{
    if (length > 0)
    {
        U_THROW(::app::Uno::Exception__New_2(NULL, ::uGetConstString("Not handled: OnNewAll")));
    }
}

void DataBinding__Fuse_Drawing_SolidColor__Fuse_Reactive_IObserver_OnNewAt(DataBinding__Fuse_Drawing_SolidColor* __this, int index, ::uObject* value)
{
    U_THROW(::app::Uno::Exception__New_2(NULL, ::uGetConstString("Not handled: OnNewAt")));
}

void DataBinding__Fuse_Drawing_SolidColor__Fuse_Reactive_IObserver_OnRemove(DataBinding__Fuse_Drawing_SolidColor* __this, ::uObject* value, int index)
{
    U_THROW(::app::Uno::Exception__New_2(NULL, ::uGetConstString("Not handled: OnRemoveAt")));
}

void DataBinding__Fuse_Drawing_SolidColor__Fuse_Reactive_IObserver_OnSet(DataBinding__Fuse_Drawing_SolidColor* __this, ::uObject* newValue)
{
    __this->PushValue(newValue);
}

void DataBinding__Fuse_Drawing_SolidColor__Fuse_Scripting_INameListener_OnNameChanged(DataBinding__Fuse_Drawing_SolidColor* __this, ::uObject* obj, ::uString* name)
{
    __this->PushValue(__this->_currentValue);
}

::app::Uno::UX::Property__Fuse_Drawing_SolidColor* DataBinding__Fuse_Drawing_SolidColor__get_Target(DataBinding__Fuse_Drawing_SolidColor* __this)
{
    return __this->_Target;
}

DataBinding__Fuse_Drawing_SolidColor* DataBinding__Fuse_Drawing_SolidColor__New_1(::uStatic* __this, ::app::Uno::UX::Property__Fuse_Drawing_SolidColor* target, ::uString* key)
{
    DataBinding__Fuse_Drawing_SolidColor* inst = (DataBinding__Fuse_Drawing_SolidColor*)::uAllocObject(sizeof(DataBinding__Fuse_Drawing_SolidColor), DataBinding__Fuse_Drawing_SolidColor__typeof());
    inst->_ObjInit_2(target, key);
    return inst;
}

void DataBinding__Fuse_Drawing_SolidColor__NewValue(DataBinding__Fuse_Drawing_SolidColor* __this, ::uObject* value)
{
    if (::uIs(value, ::app::Fuse::Drawing::SolidColor__typeof()))
    {
        __this->PushValue(value);
    }
    else if (::uIs(value, ::app::Fuse::Reactive::IObservable__typeof()))
    {
        if (__this->_subscription != NULL)
        {
            ::app::Uno::IDisposable::Dispose(::uPtr< ::uObject*>(__this->_subscription));
            __this->_subscription = NULL;
        }

        ::uObject* obs = ::uAs< ::uObject*>(value, ::app::Fuse::Reactive::IObservable__typeof());

        if (obs != NULL)
        {
            __this->_subscription = ::app::Fuse::Reactive::IObservable::Subscribe(::uPtr< ::uObject*>(obs), (::uObject*)__this);
        }
    }
    else
    {
        __this->PushValue(value);
    }
}

void DataBinding__Fuse_Drawing_SolidColor__OnRooted(DataBinding__Fuse_Drawing_SolidColor* __this, ::app::Fuse::Node* n)
{
    ::uPtr< ::app::Uno::UX::Property__Fuse_Drawing_SolidColor*>(__this->Target())->add_ValueChanged(::uNewDelegateNonVirt(::app::Uno::UX::ValueChangedHandler__Fuse_Drawing_SolidColor__typeof(), (const void*)DataBinding__Fuse_Drawing_SolidColor__OnValueChanged, __this));
    ::app::Fuse::Reactive::Binding__OnRooted(__this, n);
}

void DataBinding__Fuse_Drawing_SolidColor__OnUnrooted(DataBinding__Fuse_Drawing_SolidColor* __this, ::app::Fuse::Node* n)
{
    ::app::Fuse::Scripting::NameRegistry__RemoveListener(NULL, (::uObject*)__this);
    ::uPtr< ::app::Uno::UX::Property__Fuse_Drawing_SolidColor*>(__this->Target())->remove_ValueChanged(::uNewDelegateNonVirt(::app::Uno::UX::ValueChangedHandler__Fuse_Drawing_SolidColor__typeof(), (const void*)DataBinding__Fuse_Drawing_SolidColor__OnValueChanged, __this));

    if (__this->_subscription != NULL)
    {
        ::app::Uno::IDisposable::Dispose(::uPtr< ::uObject*>(__this->_subscription));
        __this->_subscription = NULL;
    }

    ::app::Fuse::Reactive::Binding__OnUnrooted(__this, n);
}

void DataBinding__Fuse_Drawing_SolidColor__OnValueChanged(DataBinding__Fuse_Drawing_SolidColor* __this, ::uObject* sender, ::app::Uno::UX::ValueChangedArgs__Fuse_Drawing_SolidColor* args)
{
    if ((__this->_subscription != NULL) && (::uPtr< ::app::Uno::UX::ValueChangedArgs__Fuse_Drawing_SolidColor*>(args)->Origin() != __this))
    {
        ::app::Fuse::Reactive::ISubscription::SetExclusive(::uPtr< ::uObject*>(__this->_subscription), (::uObject*)::uPtr< ::app::Uno::UX::ValueChangedArgs__Fuse_Drawing_SolidColor*>(args)->Value());
    }
}

void DataBinding__Fuse_Drawing_SolidColor__PushValue(DataBinding__Fuse_Drawing_SolidColor* __this, ::uObject* newValue)
{
    __this->_currentValue = newValue;

    if (::uIs(newValue, ::app::Fuse::Drawing::SolidColor__typeof()))
    {
        ::app::Fuse::Scripting::NameRegistry__RemoveListener(NULL, (::uObject*)__this);
        ::uPtr< ::app::Uno::UX::Property__Fuse_Drawing_SolidColor*>(__this->Target())->SetRestState(::uCast< ::app::Fuse::Drawing::SolidColor*>(newValue, ::app::Fuse::Drawing::SolidColor__typeof()), (::uObject*)__this);
        return;
    }

    ::uString* name = ::uAs< ::uString*>(newValue, ::app::Uno::String__typeof());

    if (::app::Uno::String__op_Inequality(NULL, name, NULL) && (__this->Node() != NULL))
    {
        ::app::Fuse::Scripting::NameRegistry__AddListener(NULL, name, (::uObject*)__this);
        ::app::Fuse::Node* k = ::uPtr< ::app::Fuse::Node*>(__this->Node())->FindNodeByName(::uCast< ::uString*>(newValue, ::app::Uno::String__typeof()));

        if (::uIs(k, ::app::Fuse::Drawing::SolidColor__typeof()))
        {
            ::uPtr< ::app::Uno::UX::Property__Fuse_Drawing_SolidColor*>(__this->Target())->SetRestState(::uCast< ::app::Fuse::Drawing::SolidColor*>((::uObject*)k, ::app::Fuse::Drawing::SolidColor__typeof()), (::uObject*)__this);
            return;
        }
        else
        {
            ::uObject* candidate = ::uPtr< ::app::Fuse::Node*>(__this->Node())->FindObjectByName(::uCast< ::uString*>(newValue, ::app::Uno::String__typeof()), ::uNewDelegateNonVirt(::app::Uno::Predicate__object__typeof(), (const void*)DataBinding__Fuse_Drawing_SolidColor__Acceptor, __this));

            if (::uIs(candidate, ::app::Fuse::Drawing::SolidColor__typeof()))
            {
                ::uPtr< ::app::Uno::UX::Property__Fuse_Drawing_SolidColor*>(__this->Target())->SetRestState(::uCast< ::app::Fuse::Drawing::SolidColor*>(candidate, ::app::Fuse::Drawing::SolidColor__typeof()), (::uObject*)__this);
                return;
            }
        }
    }

    ::app::Fuse::Reactive::Marshal__ToType__Fuse_Drawing_SolidColor(NULL, newValue, ::uNewDelegateNonVirt(::app::Uno::Action__Fuse_Drawing_SolidColor__typeof(), (const void*)DataBinding__Fuse_Drawing_SolidColor__SetValue, __this));
}

void DataBinding__Fuse_Drawing_SolidColor__set_Target(DataBinding__Fuse_Drawing_SolidColor* __this, ::app::Uno::UX::Property__Fuse_Drawing_SolidColor* value)
{
    __this->_Target = value;
}

void DataBinding__Fuse_Drawing_SolidColor__SetValue(DataBinding__Fuse_Drawing_SolidColor* __this, ::app::Fuse::Drawing::SolidColor* value)
{
    ::uPtr< ::app::Uno::UX::Property__Fuse_Drawing_SolidColor*>(__this->Target())->SetRestState(value, (::uObject*)__this);
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Reactive\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

DataBinding__Fuse_Drawing_StaticBrush__uType* DataBinding__Fuse_Drawing_StaticBrush__typeof()
{
    static ::uStaticStrong<DataBinding__Fuse_Drawing_StaticBrush__uType*> type;
    if (type != NULL) return type;

    type = (DataBinding__Fuse_Drawing_StaticBrush__uType*)::uAllocClassType(sizeof(DataBinding__Fuse_Drawing_StaticBrush__uType), "Fuse.Reactive.DataBinding<Fuse.Drawing.StaticBrush>", false, 2, 3, 0);

    type->SetBaseType(::app::Fuse::Reactive::Binding__typeof());
    type->__fp_NewValue = (void(*)(::app::Fuse::Reactive::Binding*, ::uObject*))DataBinding__Fuse_Drawing_StaticBrush__NewValue;
    type->__fp_OnRooted = (void(*)(::app::Fuse::Behavior*, ::app::Fuse::Node*))DataBinding__Fuse_Drawing_StaticBrush__OnRooted;
    type->__fp_OnUnrooted = (void(*)(::app::Fuse::Behavior*, ::app::Fuse::Node*))DataBinding__Fuse_Drawing_StaticBrush__OnUnrooted;
    type->__interface_0.__fp_OnSet = (void(*)(void*, ::uObject*))DataBinding__Fuse_Drawing_StaticBrush__Fuse_Reactive_IObserver_OnSet;
    type->__interface_0.__fp_OnAdd = (void(*)(void*, ::uObject*))DataBinding__Fuse_Drawing_StaticBrush__Fuse_Reactive_IObserver_OnAdd;
    type->__interface_0.__fp_OnNewAt = (void(*)(void*, int, ::uObject*))DataBinding__Fuse_Drawing_StaticBrush__Fuse_Reactive_IObserver_OnNewAt;
    type->__interface_0.__fp_OnFailed = (void(*)(void*, ::uString*))DataBinding__Fuse_Drawing_StaticBrush__Fuse_Reactive_IObserver_OnFailed;
    type->__interface_0.__fp_OnNewAll = (void(*)(void*, int))DataBinding__Fuse_Drawing_StaticBrush__Fuse_Reactive_IObserver_OnNewAll;
    type->__interface_0.__fp_OnRemove = (void(*)(void*, ::uObject*, int))DataBinding__Fuse_Drawing_StaticBrush__Fuse_Reactive_IObserver_OnRemove;
    type->__interface_1.__fp_OnNameChanged = (void(*)(void*, ::uObject*, ::uString*))DataBinding__Fuse_Drawing_StaticBrush__Fuse_Scripting_INameListener_OnNameChanged;

    type->SetInterfaces(
        ::app::Fuse::Reactive::IObserver__typeof(), offsetof(DataBinding__Fuse_Drawing_StaticBrush__uType, __interface_0),
        ::app::Fuse::Scripting::INameListener__typeof(), offsetof(DataBinding__Fuse_Drawing_StaticBrush__uType, __interface_1));

    type->SetStrongRefs(
        "_currentValue", offsetof(DataBinding__Fuse_Drawing_StaticBrush, _currentValue),
        "_subscription", offsetof(DataBinding__Fuse_Drawing_StaticBrush, _subscription),
        "_Target", offsetof(DataBinding__Fuse_Drawing_StaticBrush, _Target));

    type->SetFields(2,
        ::uNewField("_currentValue", NULL, offsetof(DataBinding__Fuse_Drawing_StaticBrush, _currentValue), ::uObject__typeof()),
        ::uNewField("_subscription", NULL, offsetof(DataBinding__Fuse_Drawing_StaticBrush, _subscription), ::app::Fuse::Reactive::ISubscription__typeof()));

    type->SetFunctions(3,
        ::uNewFunction("get_Target", DataBinding__Fuse_Drawing_StaticBrush__get_Target, 0, false, ::app::Uno::UX::Property__Fuse_Drawing_StaticBrush__typeof()),
        ::uNewFunction(".ctor", DataBinding__Fuse_Drawing_StaticBrush__New_1, 0, true, DataBinding__Fuse_Drawing_StaticBrush__typeof(), ::app::Uno::UX::Property__Fuse_Drawing_StaticBrush__typeof(), ::app::Uno::String__typeof()),
        ::uNewFunctionVoid("set_Target", DataBinding__Fuse_Drawing_StaticBrush__set_Target, 0, false, ::app::Uno::UX::Property__Fuse_Drawing_StaticBrush__typeof()));

    ::uRegisterType(type);
    return type;
}

void DataBinding__Fuse_Drawing_StaticBrush___ObjInit_2(DataBinding__Fuse_Drawing_StaticBrush* __this, ::app::Uno::UX::Property__Fuse_Drawing_StaticBrush* target, ::uString* key)
{
    ::app::Fuse::Reactive::Binding___ObjInit_1(__this, key);
    __this->Target(target);
}

bool DataBinding__Fuse_Drawing_StaticBrush__Acceptor(DataBinding__Fuse_Drawing_StaticBrush* __this, ::uObject* obj)
{
    return ::uIs(obj, ::app::Fuse::Drawing::StaticBrush__typeof());
}

void DataBinding__Fuse_Drawing_StaticBrush__Fuse_Reactive_IObserver_OnAdd(DataBinding__Fuse_Drawing_StaticBrush* __this, ::uObject* addedValue)
{
    U_THROW(::app::Uno::Exception__New_2(NULL, ::uGetConstString("Not handled: OnAdd")));
}

void DataBinding__Fuse_Drawing_StaticBrush__Fuse_Reactive_IObserver_OnFailed(DataBinding__Fuse_Drawing_StaticBrush* __this, ::uString* message)
{
    U_THROW(::app::Uno::Exception__New_2(NULL, ::uGetConstString("Not handled: OnFailed")));
}

void DataBinding__Fuse_Drawing_StaticBrush__Fuse_Reactive_IObserver_OnNewAll(DataBinding__Fuse_Drawing_StaticBrush* __this, int length)
{
    if (length > 0)
    {
        U_THROW(::app::Uno::Exception__New_2(NULL, ::uGetConstString("Not handled: OnNewAll")));
    }
}

void DataBinding__Fuse_Drawing_StaticBrush__Fuse_Reactive_IObserver_OnNewAt(DataBinding__Fuse_Drawing_StaticBrush* __this, int index, ::uObject* value)
{
    U_THROW(::app::Uno::Exception__New_2(NULL, ::uGetConstString("Not handled: OnNewAt")));
}

void DataBinding__Fuse_Drawing_StaticBrush__Fuse_Reactive_IObserver_OnRemove(DataBinding__Fuse_Drawing_StaticBrush* __this, ::uObject* value, int index)
{
    U_THROW(::app::Uno::Exception__New_2(NULL, ::uGetConstString("Not handled: OnRemoveAt")));
}

void DataBinding__Fuse_Drawing_StaticBrush__Fuse_Reactive_IObserver_OnSet(DataBinding__Fuse_Drawing_StaticBrush* __this, ::uObject* newValue)
{
    __this->PushValue(newValue);
}

void DataBinding__Fuse_Drawing_StaticBrush__Fuse_Scripting_INameListener_OnNameChanged(DataBinding__Fuse_Drawing_StaticBrush* __this, ::uObject* obj, ::uString* name)
{
    __this->PushValue(__this->_currentValue);
}

::app::Uno::UX::Property__Fuse_Drawing_StaticBrush* DataBinding__Fuse_Drawing_StaticBrush__get_Target(DataBinding__Fuse_Drawing_StaticBrush* __this)
{
    return __this->_Target;
}

DataBinding__Fuse_Drawing_StaticBrush* DataBinding__Fuse_Drawing_StaticBrush__New_1(::uStatic* __this, ::app::Uno::UX::Property__Fuse_Drawing_StaticBrush* target, ::uString* key)
{
    DataBinding__Fuse_Drawing_StaticBrush* inst = (DataBinding__Fuse_Drawing_StaticBrush*)::uAllocObject(sizeof(DataBinding__Fuse_Drawing_StaticBrush), DataBinding__Fuse_Drawing_StaticBrush__typeof());
    inst->_ObjInit_2(target, key);
    return inst;
}

void DataBinding__Fuse_Drawing_StaticBrush__NewValue(DataBinding__Fuse_Drawing_StaticBrush* __this, ::uObject* value)
{
    if (::uIs(value, ::app::Fuse::Drawing::StaticBrush__typeof()))
    {
        __this->PushValue(value);
    }
    else if (::uIs(value, ::app::Fuse::Reactive::IObservable__typeof()))
    {
        if (__this->_subscription != NULL)
        {
            ::app::Uno::IDisposable::Dispose(::uPtr< ::uObject*>(__this->_subscription));
            __this->_subscription = NULL;
        }

        ::uObject* obs = ::uAs< ::uObject*>(value, ::app::Fuse::Reactive::IObservable__typeof());

        if (obs != NULL)
        {
            __this->_subscription = ::app::Fuse::Reactive::IObservable::Subscribe(::uPtr< ::uObject*>(obs), (::uObject*)__this);
        }
    }
    else
    {
        __this->PushValue(value);
    }
}

void DataBinding__Fuse_Drawing_StaticBrush__OnRooted(DataBinding__Fuse_Drawing_StaticBrush* __this, ::app::Fuse::Node* n)
{
    ::uPtr< ::app::Uno::UX::Property__Fuse_Drawing_StaticBrush*>(__this->Target())->add_ValueChanged(::uNewDelegateNonVirt(::app::Uno::UX::ValueChangedHandler__Fuse_Drawing_StaticBrush__typeof(), (const void*)DataBinding__Fuse_Drawing_StaticBrush__OnValueChanged, __this));
    ::app::Fuse::Reactive::Binding__OnRooted(__this, n);
}

void DataBinding__Fuse_Drawing_StaticBrush__OnUnrooted(DataBinding__Fuse_Drawing_StaticBrush* __this, ::app::Fuse::Node* n)
{
    ::app::Fuse::Scripting::NameRegistry__RemoveListener(NULL, (::uObject*)__this);
    ::uPtr< ::app::Uno::UX::Property__Fuse_Drawing_StaticBrush*>(__this->Target())->remove_ValueChanged(::uNewDelegateNonVirt(::app::Uno::UX::ValueChangedHandler__Fuse_Drawing_StaticBrush__typeof(), (const void*)DataBinding__Fuse_Drawing_StaticBrush__OnValueChanged, __this));

    if (__this->_subscription != NULL)
    {
        ::app::Uno::IDisposable::Dispose(::uPtr< ::uObject*>(__this->_subscription));
        __this->_subscription = NULL;
    }

    ::app::Fuse::Reactive::Binding__OnUnrooted(__this, n);
}

void DataBinding__Fuse_Drawing_StaticBrush__OnValueChanged(DataBinding__Fuse_Drawing_StaticBrush* __this, ::uObject* sender, ::app::Uno::UX::ValueChangedArgs__Fuse_Drawing_StaticBrush* args)
{
    if ((__this->_subscription != NULL) && (::uPtr< ::app::Uno::UX::ValueChangedArgs__Fuse_Drawing_StaticBrush*>(args)->Origin() != __this))
    {
        ::app::Fuse::Reactive::ISubscription::SetExclusive(::uPtr< ::uObject*>(__this->_subscription), (::uObject*)::uPtr< ::app::Uno::UX::ValueChangedArgs__Fuse_Drawing_StaticBrush*>(args)->Value());
    }
}

void DataBinding__Fuse_Drawing_StaticBrush__PushValue(DataBinding__Fuse_Drawing_StaticBrush* __this, ::uObject* newValue)
{
    __this->_currentValue = newValue;

    if (::uIs(newValue, ::app::Fuse::Drawing::StaticBrush__typeof()))
    {
        ::app::Fuse::Scripting::NameRegistry__RemoveListener(NULL, (::uObject*)__this);
        ::uPtr< ::app::Uno::UX::Property__Fuse_Drawing_StaticBrush*>(__this->Target())->SetRestState(::uCast< ::app::Fuse::Drawing::StaticBrush*>(newValue, ::app::Fuse::Drawing::StaticBrush__typeof()), (::uObject*)__this);
        return;
    }

    ::uString* name = ::uAs< ::uString*>(newValue, ::app::Uno::String__typeof());

    if (::app::Uno::String__op_Inequality(NULL, name, NULL) && (__this->Node() != NULL))
    {
        ::app::Fuse::Scripting::NameRegistry__AddListener(NULL, name, (::uObject*)__this);
        ::app::Fuse::Node* k = ::uPtr< ::app::Fuse::Node*>(__this->Node())->FindNodeByName(::uCast< ::uString*>(newValue, ::app::Uno::String__typeof()));

        if (::uIs(k, ::app::Fuse::Drawing::StaticBrush__typeof()))
        {
            ::uPtr< ::app::Uno::UX::Property__Fuse_Drawing_StaticBrush*>(__this->Target())->SetRestState(::uCast< ::app::Fuse::Drawing::StaticBrush*>((::uObject*)k, ::app::Fuse::Drawing::StaticBrush__typeof()), (::uObject*)__this);
            return;
        }
        else
        {
            ::uObject* candidate = ::uPtr< ::app::Fuse::Node*>(__this->Node())->FindObjectByName(::uCast< ::uString*>(newValue, ::app::Uno::String__typeof()), ::uNewDelegateNonVirt(::app::Uno::Predicate__object__typeof(), (const void*)DataBinding__Fuse_Drawing_StaticBrush__Acceptor, __this));

            if (::uIs(candidate, ::app::Fuse::Drawing::StaticBrush__typeof()))
            {
                ::uPtr< ::app::Uno::UX::Property__Fuse_Drawing_StaticBrush*>(__this->Target())->SetRestState(::uCast< ::app::Fuse::Drawing::StaticBrush*>(candidate, ::app::Fuse::Drawing::StaticBrush__typeof()), (::uObject*)__this);
                return;
            }
        }
    }

    ::app::Fuse::Reactive::Marshal__ToType__Fuse_Drawing_StaticBrush(NULL, newValue, ::uNewDelegateNonVirt(::app::Uno::Action__Fuse_Drawing_StaticBrush__typeof(), (const void*)DataBinding__Fuse_Drawing_StaticBrush__SetValue, __this));
}

void DataBinding__Fuse_Drawing_StaticBrush__set_Target(DataBinding__Fuse_Drawing_StaticBrush* __this, ::app::Uno::UX::Property__Fuse_Drawing_StaticBrush* value)
{
    __this->_Target = value;
}

void DataBinding__Fuse_Drawing_StaticBrush__SetValue(DataBinding__Fuse_Drawing_StaticBrush* __this, ::app::Fuse::Drawing::StaticBrush* value)
{
    ::uPtr< ::app::Uno::UX::Property__Fuse_Drawing_StaticBrush*>(__this->Target())->SetRestState(value, (::uObject*)__this);
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Reactive\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

DataBinding__Fuse_Elements_Alignment__uType* DataBinding__Fuse_Elements_Alignment__typeof()
{
    static ::uStaticStrong<DataBinding__Fuse_Elements_Alignment__uType*> type;
    if (type != NULL) return type;

    type = (DataBinding__Fuse_Elements_Alignment__uType*)::uAllocClassType(sizeof(DataBinding__Fuse_Elements_Alignment__uType), "Fuse.Reactive.DataBinding<Fuse.Elements.Alignment>", false, 2, 3, 0);

    type->SetBaseType(::app::Fuse::Reactive::Binding__typeof());
    type->__fp_NewValue = (void(*)(::app::Fuse::Reactive::Binding*, ::uObject*))DataBinding__Fuse_Elements_Alignment__NewValue;
    type->__fp_OnRooted = (void(*)(::app::Fuse::Behavior*, ::app::Fuse::Node*))DataBinding__Fuse_Elements_Alignment__OnRooted;
    type->__fp_OnUnrooted = (void(*)(::app::Fuse::Behavior*, ::app::Fuse::Node*))DataBinding__Fuse_Elements_Alignment__OnUnrooted;
    type->__interface_0.__fp_OnSet = (void(*)(void*, ::uObject*))DataBinding__Fuse_Elements_Alignment__Fuse_Reactive_IObserver_OnSet;
    type->__interface_0.__fp_OnAdd = (void(*)(void*, ::uObject*))DataBinding__Fuse_Elements_Alignment__Fuse_Reactive_IObserver_OnAdd;
    type->__interface_0.__fp_OnNewAt = (void(*)(void*, int, ::uObject*))DataBinding__Fuse_Elements_Alignment__Fuse_Reactive_IObserver_OnNewAt;
    type->__interface_0.__fp_OnFailed = (void(*)(void*, ::uString*))DataBinding__Fuse_Elements_Alignment__Fuse_Reactive_IObserver_OnFailed;
    type->__interface_0.__fp_OnNewAll = (void(*)(void*, int))DataBinding__Fuse_Elements_Alignment__Fuse_Reactive_IObserver_OnNewAll;
    type->__interface_0.__fp_OnRemove = (void(*)(void*, ::uObject*, int))DataBinding__Fuse_Elements_Alignment__Fuse_Reactive_IObserver_OnRemove;
    type->__interface_1.__fp_OnNameChanged = (void(*)(void*, ::uObject*, ::uString*))DataBinding__Fuse_Elements_Alignment__Fuse_Scripting_INameListener_OnNameChanged;

    type->SetInterfaces(
        ::app::Fuse::Reactive::IObserver__typeof(), offsetof(DataBinding__Fuse_Elements_Alignment__uType, __interface_0),
        ::app::Fuse::Scripting::INameListener__typeof(), offsetof(DataBinding__Fuse_Elements_Alignment__uType, __interface_1));

    type->SetStrongRefs(
        "_currentValue", offsetof(DataBinding__Fuse_Elements_Alignment, _currentValue),
        "_subscription", offsetof(DataBinding__Fuse_Elements_Alignment, _subscription),
        "_Target", offsetof(DataBinding__Fuse_Elements_Alignment, _Target));

    type->SetFields(2,
        ::uNewField("_currentValue", NULL, offsetof(DataBinding__Fuse_Elements_Alignment, _currentValue), ::uObject__typeof()),
        ::uNewField("_subscription", NULL, offsetof(DataBinding__Fuse_Elements_Alignment, _subscription), ::app::Fuse::Reactive::ISubscription__typeof()));

    type->SetFunctions(3,
        ::uNewFunction("get_Target", DataBinding__Fuse_Elements_Alignment__get_Target, 0, false, ::app::Uno::UX::Property__Fuse_Elements_Alignment__typeof()),
        ::uNewFunction(".ctor", DataBinding__Fuse_Elements_Alignment__New_1, 0, true, DataBinding__Fuse_Elements_Alignment__typeof(), ::app::Uno::UX::Property__Fuse_Elements_Alignment__typeof(), ::app::Uno::String__typeof()),
        ::uNewFunctionVoid("set_Target", DataBinding__Fuse_Elements_Alignment__set_Target, 0, false, ::app::Uno::UX::Property__Fuse_Elements_Alignment__typeof()));

    ::uRegisterType(type);
    return type;
}

void DataBinding__Fuse_Elements_Alignment___ObjInit_2(DataBinding__Fuse_Elements_Alignment* __this, ::app::Uno::UX::Property__Fuse_Elements_Alignment* target, ::uString* key)
{
    ::app::Fuse::Reactive::Binding___ObjInit_1(__this, key);
    __this->Target(target);
}

bool DataBinding__Fuse_Elements_Alignment__Acceptor(DataBinding__Fuse_Elements_Alignment* __this, ::uObject* obj)
{
    return ::uIs(obj, ::app::Fuse::Elements::Alignment__typeof());
}

void DataBinding__Fuse_Elements_Alignment__Fuse_Reactive_IObserver_OnAdd(DataBinding__Fuse_Elements_Alignment* __this, ::uObject* addedValue)
{
    U_THROW(::app::Uno::Exception__New_2(NULL, ::uGetConstString("Not handled: OnAdd")));
}

void DataBinding__Fuse_Elements_Alignment__Fuse_Reactive_IObserver_OnFailed(DataBinding__Fuse_Elements_Alignment* __this, ::uString* message)
{
    U_THROW(::app::Uno::Exception__New_2(NULL, ::uGetConstString("Not handled: OnFailed")));
}

void DataBinding__Fuse_Elements_Alignment__Fuse_Reactive_IObserver_OnNewAll(DataBinding__Fuse_Elements_Alignment* __this, int length)
{
    if (length > 0)
    {
        U_THROW(::app::Uno::Exception__New_2(NULL, ::uGetConstString("Not handled: OnNewAll")));
    }
}

void DataBinding__Fuse_Elements_Alignment__Fuse_Reactive_IObserver_OnNewAt(DataBinding__Fuse_Elements_Alignment* __this, int index, ::uObject* value)
{
    U_THROW(::app::Uno::Exception__New_2(NULL, ::uGetConstString("Not handled: OnNewAt")));
}

void DataBinding__Fuse_Elements_Alignment__Fuse_Reactive_IObserver_OnRemove(DataBinding__Fuse_Elements_Alignment* __this, ::uObject* value, int index)
{
    U_THROW(::app::Uno::Exception__New_2(NULL, ::uGetConstString("Not handled: OnRemoveAt")));
}

void DataBinding__Fuse_Elements_Alignment__Fuse_Reactive_IObserver_OnSet(DataBinding__Fuse_Elements_Alignment* __this, ::uObject* newValue)
{
    __this->PushValue(newValue);
}

void DataBinding__Fuse_Elements_Alignment__Fuse_Scripting_INameListener_OnNameChanged(DataBinding__Fuse_Elements_Alignment* __this, ::uObject* obj, ::uString* name)
{
    __this->PushValue(__this->_currentValue);
}

::app::Uno::UX::Property__Fuse_Elements_Alignment* DataBinding__Fuse_Elements_Alignment__get_Target(DataBinding__Fuse_Elements_Alignment* __this)
{
    return __this->_Target;
}

DataBinding__Fuse_Elements_Alignment* DataBinding__Fuse_Elements_Alignment__New_1(::uStatic* __this, ::app::Uno::UX::Property__Fuse_Elements_Alignment* target, ::uString* key)
{
    DataBinding__Fuse_Elements_Alignment* inst = (DataBinding__Fuse_Elements_Alignment*)::uAllocObject(sizeof(DataBinding__Fuse_Elements_Alignment), DataBinding__Fuse_Elements_Alignment__typeof());
    inst->_ObjInit_2(target, key);
    return inst;
}

void DataBinding__Fuse_Elements_Alignment__NewValue(DataBinding__Fuse_Elements_Alignment* __this, ::uObject* value)
{
    if (::uIs(value, ::app::Fuse::Elements::Alignment__typeof()))
    {
        __this->PushValue(value);
    }
    else if (::uIs(value, ::app::Fuse::Reactive::IObservable__typeof()))
    {
        if (__this->_subscription != NULL)
        {
            ::app::Uno::IDisposable::Dispose(::uPtr< ::uObject*>(__this->_subscription));
            __this->_subscription = NULL;
        }

        ::uObject* obs = ::uAs< ::uObject*>(value, ::app::Fuse::Reactive::IObservable__typeof());

        if (obs != NULL)
        {
            __this->_subscription = ::app::Fuse::Reactive::IObservable::Subscribe(::uPtr< ::uObject*>(obs), (::uObject*)__this);
        }
    }
    else
    {
        __this->PushValue(value);
    }
}

void DataBinding__Fuse_Elements_Alignment__OnRooted(DataBinding__Fuse_Elements_Alignment* __this, ::app::Fuse::Node* n)
{
    ::uPtr< ::app::Uno::UX::Property__Fuse_Elements_Alignment*>(__this->Target())->add_ValueChanged(::uNewDelegateNonVirt(::app::Uno::UX::ValueChangedHandler__Fuse_Elements_Alignment__typeof(), (const void*)DataBinding__Fuse_Elements_Alignment__OnValueChanged, __this));
    ::app::Fuse::Reactive::Binding__OnRooted(__this, n);
}

void DataBinding__Fuse_Elements_Alignment__OnUnrooted(DataBinding__Fuse_Elements_Alignment* __this, ::app::Fuse::Node* n)
{
    ::app::Fuse::Scripting::NameRegistry__RemoveListener(NULL, (::uObject*)__this);
    ::uPtr< ::app::Uno::UX::Property__Fuse_Elements_Alignment*>(__this->Target())->remove_ValueChanged(::uNewDelegateNonVirt(::app::Uno::UX::ValueChangedHandler__Fuse_Elements_Alignment__typeof(), (const void*)DataBinding__Fuse_Elements_Alignment__OnValueChanged, __this));

    if (__this->_subscription != NULL)
    {
        ::app::Uno::IDisposable::Dispose(::uPtr< ::uObject*>(__this->_subscription));
        __this->_subscription = NULL;
    }

    ::app::Fuse::Reactive::Binding__OnUnrooted(__this, n);
}

void DataBinding__Fuse_Elements_Alignment__OnValueChanged(DataBinding__Fuse_Elements_Alignment* __this, ::uObject* sender, ::app::Uno::UX::ValueChangedArgs__Fuse_Elements_Alignment* args)
{
    if ((__this->_subscription != NULL) && (::uPtr< ::app::Uno::UX::ValueChangedArgs__Fuse_Elements_Alignment*>(args)->Origin() != __this))
    {
        ::app::Fuse::Reactive::ISubscription::SetExclusive(::uPtr< ::uObject*>(__this->_subscription), ::uBox< int>(::app::Fuse::Elements::Alignment__typeof(), ::uPtr< ::app::Uno::UX::ValueChangedArgs__Fuse_Elements_Alignment*>(args)->Value()));
    }
}

void DataBinding__Fuse_Elements_Alignment__PushValue(DataBinding__Fuse_Elements_Alignment* __this, ::uObject* newValue)
{
    __this->_currentValue = newValue;

    if (::uIs(newValue, ::app::Fuse::Elements::Alignment__typeof()))
    {
        ::app::Fuse::Scripting::NameRegistry__RemoveListener(NULL, (::uObject*)__this);
        ::uPtr< ::app::Uno::UX::Property__Fuse_Elements_Alignment*>(__this->Target())->SetRestState(::uUnbox< int>(::app::Fuse::Elements::Alignment__typeof(), newValue), (::uObject*)__this);
        return;
    }

    ::uString* name = ::uAs< ::uString*>(newValue, ::app::Uno::String__typeof());

    if (::app::Uno::String__op_Inequality(NULL, name, NULL) && (__this->Node() != NULL))
    {
        ::app::Fuse::Scripting::NameRegistry__AddListener(NULL, name, (::uObject*)__this);
        ::app::Fuse::Node* k = ::uPtr< ::app::Fuse::Node*>(__this->Node())->FindNodeByName(::uCast< ::uString*>(newValue, ::app::Uno::String__typeof()));

        if (::uIs(k, ::app::Fuse::Elements::Alignment__typeof()))
        {
            ::uPtr< ::app::Uno::UX::Property__Fuse_Elements_Alignment*>(__this->Target())->SetRestState(::uUnbox< int>(::app::Fuse::Elements::Alignment__typeof(), (::uObject*)k), (::uObject*)__this);
            return;
        }
        else
        {
            ::uObject* candidate = ::uPtr< ::app::Fuse::Node*>(__this->Node())->FindObjectByName(::uCast< ::uString*>(newValue, ::app::Uno::String__typeof()), ::uNewDelegateNonVirt(::app::Uno::Predicate__object__typeof(), (const void*)DataBinding__Fuse_Elements_Alignment__Acceptor, __this));

            if (::uIs(candidate, ::app::Fuse::Elements::Alignment__typeof()))
            {
                ::uPtr< ::app::Uno::UX::Property__Fuse_Elements_Alignment*>(__this->Target())->SetRestState(::uUnbox< int>(::app::Fuse::Elements::Alignment__typeof(), candidate), (::uObject*)__this);
                return;
            }
        }
    }

    ::app::Fuse::Reactive::Marshal__ToType__Fuse_Elements_Alignment(NULL, newValue, ::uNewDelegateNonVirt(::app::Uno::Action__Fuse_Elements_Alignment__typeof(), (const void*)DataBinding__Fuse_Elements_Alignment__SetValue, __this));
}

void DataBinding__Fuse_Elements_Alignment__set_Target(DataBinding__Fuse_Elements_Alignment* __this, ::app::Uno::UX::Property__Fuse_Elements_Alignment* value)
{
    __this->_Target = value;
}

void DataBinding__Fuse_Elements_Alignment__SetValue(DataBinding__Fuse_Elements_Alignment* __this, int value)
{
    ::uPtr< ::app::Uno::UX::Property__Fuse_Elements_Alignment*>(__this->Target())->SetRestState(value, (::uObject*)__this);
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Reactive\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

DataBinding__Fuse_Elements_CachingMode__uType* DataBinding__Fuse_Elements_CachingMode__typeof()
{
    static ::uStaticStrong<DataBinding__Fuse_Elements_CachingMode__uType*> type;
    if (type != NULL) return type;

    type = (DataBinding__Fuse_Elements_CachingMode__uType*)::uAllocClassType(sizeof(DataBinding__Fuse_Elements_CachingMode__uType), "Fuse.Reactive.DataBinding<Fuse.Elements.CachingMode>", false, 2, 3, 0);

    type->SetBaseType(::app::Fuse::Reactive::Binding__typeof());
    type->__fp_NewValue = (void(*)(::app::Fuse::Reactive::Binding*, ::uObject*))DataBinding__Fuse_Elements_CachingMode__NewValue;
    type->__fp_OnRooted = (void(*)(::app::Fuse::Behavior*, ::app::Fuse::Node*))DataBinding__Fuse_Elements_CachingMode__OnRooted;
    type->__fp_OnUnrooted = (void(*)(::app::Fuse::Behavior*, ::app::Fuse::Node*))DataBinding__Fuse_Elements_CachingMode__OnUnrooted;
    type->__interface_0.__fp_OnSet = (void(*)(void*, ::uObject*))DataBinding__Fuse_Elements_CachingMode__Fuse_Reactive_IObserver_OnSet;
    type->__interface_0.__fp_OnAdd = (void(*)(void*, ::uObject*))DataBinding__Fuse_Elements_CachingMode__Fuse_Reactive_IObserver_OnAdd;
    type->__interface_0.__fp_OnNewAt = (void(*)(void*, int, ::uObject*))DataBinding__Fuse_Elements_CachingMode__Fuse_Reactive_IObserver_OnNewAt;
    type->__interface_0.__fp_OnFailed = (void(*)(void*, ::uString*))DataBinding__Fuse_Elements_CachingMode__Fuse_Reactive_IObserver_OnFailed;
    type->__interface_0.__fp_OnNewAll = (void(*)(void*, int))DataBinding__Fuse_Elements_CachingMode__Fuse_Reactive_IObserver_OnNewAll;
    type->__interface_0.__fp_OnRemove = (void(*)(void*, ::uObject*, int))DataBinding__Fuse_Elements_CachingMode__Fuse_Reactive_IObserver_OnRemove;
    type->__interface_1.__fp_OnNameChanged = (void(*)(void*, ::uObject*, ::uString*))DataBinding__Fuse_Elements_CachingMode__Fuse_Scripting_INameListener_OnNameChanged;

    type->SetInterfaces(
        ::app::Fuse::Reactive::IObserver__typeof(), offsetof(DataBinding__Fuse_Elements_CachingMode__uType, __interface_0),
        ::app::Fuse::Scripting::INameListener__typeof(), offsetof(DataBinding__Fuse_Elements_CachingMode__uType, __interface_1));

    type->SetStrongRefs(
        "_currentValue", offsetof(DataBinding__Fuse_Elements_CachingMode, _currentValue),
        "_subscription", offsetof(DataBinding__Fuse_Elements_CachingMode, _subscription),
        "_Target", offsetof(DataBinding__Fuse_Elements_CachingMode, _Target));

    type->SetFields(2,
        ::uNewField("_currentValue", NULL, offsetof(DataBinding__Fuse_Elements_CachingMode, _currentValue), ::uObject__typeof()),
        ::uNewField("_subscription", NULL, offsetof(DataBinding__Fuse_Elements_CachingMode, _subscription), ::app::Fuse::Reactive::ISubscription__typeof()));

    type->SetFunctions(3,
        ::uNewFunction("get_Target", DataBinding__Fuse_Elements_CachingMode__get_Target, 0, false, ::app::Uno::UX::Property__Fuse_Elements_CachingMode__typeof()),
        ::uNewFunction(".ctor", DataBinding__Fuse_Elements_CachingMode__New_1, 0, true, DataBinding__Fuse_Elements_CachingMode__typeof(), ::app::Uno::UX::Property__Fuse_Elements_CachingMode__typeof(), ::app::Uno::String__typeof()),
        ::uNewFunctionVoid("set_Target", DataBinding__Fuse_Elements_CachingMode__set_Target, 0, false, ::app::Uno::UX::Property__Fuse_Elements_CachingMode__typeof()));

    ::uRegisterType(type);
    return type;
}

void DataBinding__Fuse_Elements_CachingMode___ObjInit_2(DataBinding__Fuse_Elements_CachingMode* __this, ::app::Uno::UX::Property__Fuse_Elements_CachingMode* target, ::uString* key)
{
    ::app::Fuse::Reactive::Binding___ObjInit_1(__this, key);
    __this->Target(target);
}

bool DataBinding__Fuse_Elements_CachingMode__Acceptor(DataBinding__Fuse_Elements_CachingMode* __this, ::uObject* obj)
{
    return ::uIs(obj, ::app::Fuse::Elements::CachingMode__typeof());
}

void DataBinding__Fuse_Elements_CachingMode__Fuse_Reactive_IObserver_OnAdd(DataBinding__Fuse_Elements_CachingMode* __this, ::uObject* addedValue)
{
    U_THROW(::app::Uno::Exception__New_2(NULL, ::uGetConstString("Not handled: OnAdd")));
}

void DataBinding__Fuse_Elements_CachingMode__Fuse_Reactive_IObserver_OnFailed(DataBinding__Fuse_Elements_CachingMode* __this, ::uString* message)
{
    U_THROW(::app::Uno::Exception__New_2(NULL, ::uGetConstString("Not handled: OnFailed")));
}

void DataBinding__Fuse_Elements_CachingMode__Fuse_Reactive_IObserver_OnNewAll(DataBinding__Fuse_Elements_CachingMode* __this, int length)
{
    if (length > 0)
    {
        U_THROW(::app::Uno::Exception__New_2(NULL, ::uGetConstString("Not handled: OnNewAll")));
    }
}

void DataBinding__Fuse_Elements_CachingMode__Fuse_Reactive_IObserver_OnNewAt(DataBinding__Fuse_Elements_CachingMode* __this, int index, ::uObject* value)
{
    U_THROW(::app::Uno::Exception__New_2(NULL, ::uGetConstString("Not handled: OnNewAt")));
}

void DataBinding__Fuse_Elements_CachingMode__Fuse_Reactive_IObserver_OnRemove(DataBinding__Fuse_Elements_CachingMode* __this, ::uObject* value, int index)
{
    U_THROW(::app::Uno::Exception__New_2(NULL, ::uGetConstString("Not handled: OnRemoveAt")));
}

void DataBinding__Fuse_Elements_CachingMode__Fuse_Reactive_IObserver_OnSet(DataBinding__Fuse_Elements_CachingMode* __this, ::uObject* newValue)
{
    __this->PushValue(newValue);
}

void DataBinding__Fuse_Elements_CachingMode__Fuse_Scripting_INameListener_OnNameChanged(DataBinding__Fuse_Elements_CachingMode* __this, ::uObject* obj, ::uString* name)
{
    __this->PushValue(__this->_currentValue);
}

::app::Uno::UX::Property__Fuse_Elements_CachingMode* DataBinding__Fuse_Elements_CachingMode__get_Target(DataBinding__Fuse_Elements_CachingMode* __this)
{
    return __this->_Target;
}

DataBinding__Fuse_Elements_CachingMode* DataBinding__Fuse_Elements_CachingMode__New_1(::uStatic* __this, ::app::Uno::UX::Property__Fuse_Elements_CachingMode* target, ::uString* key)
{
    DataBinding__Fuse_Elements_CachingMode* inst = (DataBinding__Fuse_Elements_CachingMode*)::uAllocObject(sizeof(DataBinding__Fuse_Elements_CachingMode), DataBinding__Fuse_Elements_CachingMode__typeof());
    inst->_ObjInit_2(target, key);
    return inst;
}

void DataBinding__Fuse_Elements_CachingMode__NewValue(DataBinding__Fuse_Elements_CachingMode* __this, ::uObject* value)
{
    if (::uIs(value, ::app::Fuse::Elements::CachingMode__typeof()))
    {
        __this->PushValue(value);
    }
    else if (::uIs(value, ::app::Fuse::Reactive::IObservable__typeof()))
    {
        if (__this->_subscription != NULL)
        {
            ::app::Uno::IDisposable::Dispose(::uPtr< ::uObject*>(__this->_subscription));
            __this->_subscription = NULL;
        }

        ::uObject* obs = ::uAs< ::uObject*>(value, ::app::Fuse::Reactive::IObservable__typeof());

        if (obs != NULL)
        {
            __this->_subscription = ::app::Fuse::Reactive::IObservable::Subscribe(::uPtr< ::uObject*>(obs), (::uObject*)__this);
        }
    }
    else
    {
        __this->PushValue(value);
    }
}

void DataBinding__Fuse_Elements_CachingMode__OnRooted(DataBinding__Fuse_Elements_CachingMode* __this, ::app::Fuse::Node* n)
{
    ::uPtr< ::app::Uno::UX::Property__Fuse_Elements_CachingMode*>(__this->Target())->add_ValueChanged(::uNewDelegateNonVirt(::app::Uno::UX::ValueChangedHandler__Fuse_Elements_CachingMode__typeof(), (const void*)DataBinding__Fuse_Elements_CachingMode__OnValueChanged, __this));
    ::app::Fuse::Reactive::Binding__OnRooted(__this, n);
}

void DataBinding__Fuse_Elements_CachingMode__OnUnrooted(DataBinding__Fuse_Elements_CachingMode* __this, ::app::Fuse::Node* n)
{
    ::app::Fuse::Scripting::NameRegistry__RemoveListener(NULL, (::uObject*)__this);
    ::uPtr< ::app::Uno::UX::Property__Fuse_Elements_CachingMode*>(__this->Target())->remove_ValueChanged(::uNewDelegateNonVirt(::app::Uno::UX::ValueChangedHandler__Fuse_Elements_CachingMode__typeof(), (const void*)DataBinding__Fuse_Elements_CachingMode__OnValueChanged, __this));

    if (__this->_subscription != NULL)
    {
        ::app::Uno::IDisposable::Dispose(::uPtr< ::uObject*>(__this->_subscription));
        __this->_subscription = NULL;
    }

    ::app::Fuse::Reactive::Binding__OnUnrooted(__this, n);
}

void DataBinding__Fuse_Elements_CachingMode__OnValueChanged(DataBinding__Fuse_Elements_CachingMode* __this, ::uObject* sender, ::app::Uno::UX::ValueChangedArgs__Fuse_Elements_CachingMode* args)
{
    if ((__this->_subscription != NULL) && (::uPtr< ::app::Uno::UX::ValueChangedArgs__Fuse_Elements_CachingMode*>(args)->Origin() != __this))
    {
        ::app::Fuse::Reactive::ISubscription::SetExclusive(::uPtr< ::uObject*>(__this->_subscription), ::uBox< int>(::app::Fuse::Elements::CachingMode__typeof(), ::uPtr< ::app::Uno::UX::ValueChangedArgs__Fuse_Elements_CachingMode*>(args)->Value()));
    }
}

void DataBinding__Fuse_Elements_CachingMode__PushValue(DataBinding__Fuse_Elements_CachingMode* __this, ::uObject* newValue)
{
    __this->_currentValue = newValue;

    if (::uIs(newValue, ::app::Fuse::Elements::CachingMode__typeof()))
    {
        ::app::Fuse::Scripting::NameRegistry__RemoveListener(NULL, (::uObject*)__this);
        ::uPtr< ::app::Uno::UX::Property__Fuse_Elements_CachingMode*>(__this->Target())->SetRestState(::uUnbox< int>(::app::Fuse::Elements::CachingMode__typeof(), newValue), (::uObject*)__this);
        return;
    }

    ::uString* name = ::uAs< ::uString*>(newValue, ::app::Uno::String__typeof());

    if (::app::Uno::String__op_Inequality(NULL, name, NULL) && (__this->Node() != NULL))
    {
        ::app::Fuse::Scripting::NameRegistry__AddListener(NULL, name, (::uObject*)__this);
        ::app::Fuse::Node* k = ::uPtr< ::app::Fuse::Node*>(__this->Node())->FindNodeByName(::uCast< ::uString*>(newValue, ::app::Uno::String__typeof()));

        if (::uIs(k, ::app::Fuse::Elements::CachingMode__typeof()))
        {
            ::uPtr< ::app::Uno::UX::Property__Fuse_Elements_CachingMode*>(__this->Target())->SetRestState(::uUnbox< int>(::app::Fuse::Elements::CachingMode__typeof(), (::uObject*)k), (::uObject*)__this);
            return;
        }
        else
        {
            ::uObject* candidate = ::uPtr< ::app::Fuse::Node*>(__this->Node())->FindObjectByName(::uCast< ::uString*>(newValue, ::app::Uno::String__typeof()), ::uNewDelegateNonVirt(::app::Uno::Predicate__object__typeof(), (const void*)DataBinding__Fuse_Elements_CachingMode__Acceptor, __this));

            if (::uIs(candidate, ::app::Fuse::Elements::CachingMode__typeof()))
            {
                ::uPtr< ::app::Uno::UX::Property__Fuse_Elements_CachingMode*>(__this->Target())->SetRestState(::uUnbox< int>(::app::Fuse::Elements::CachingMode__typeof(), candidate), (::uObject*)__this);
                return;
            }
        }
    }

    ::app::Fuse::Reactive::Marshal__ToType__Fuse_Elements_CachingMode(NULL, newValue, ::uNewDelegateNonVirt(::app::Uno::Action__Fuse_Elements_CachingMode__typeof(), (const void*)DataBinding__Fuse_Elements_CachingMode__SetValue, __this));
}

void DataBinding__Fuse_Elements_CachingMode__set_Target(DataBinding__Fuse_Elements_CachingMode* __this, ::app::Uno::UX::Property__Fuse_Elements_CachingMode* value)
{
    __this->_Target = value;
}

void DataBinding__Fuse_Elements_CachingMode__SetValue(DataBinding__Fuse_Elements_CachingMode* __this, int value)
{
    ::uPtr< ::app::Uno::UX::Property__Fuse_Elements_CachingMode*>(__this->Target())->SetRestState(value, (::uObject*)__this);
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Reactive\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

DataBinding__Fuse_Elements_Element__uType* DataBinding__Fuse_Elements_Element__typeof()
{
    static ::uStaticStrong<DataBinding__Fuse_Elements_Element__uType*> type;
    if (type != NULL) return type;

    type = (DataBinding__Fuse_Elements_Element__uType*)::uAllocClassType(sizeof(DataBinding__Fuse_Elements_Element__uType), "Fuse.Reactive.DataBinding<Fuse.Elements.Element>", false, 2, 3, 0);

    type->SetBaseType(::app::Fuse::Reactive::Binding__typeof());
    type->__fp_NewValue = (void(*)(::app::Fuse::Reactive::Binding*, ::uObject*))DataBinding__Fuse_Elements_Element__NewValue;
    type->__fp_OnRooted = (void(*)(::app::Fuse::Behavior*, ::app::Fuse::Node*))DataBinding__Fuse_Elements_Element__OnRooted;
    type->__fp_OnUnrooted = (void(*)(::app::Fuse::Behavior*, ::app::Fuse::Node*))DataBinding__Fuse_Elements_Element__OnUnrooted;
    type->__interface_0.__fp_OnSet = (void(*)(void*, ::uObject*))DataBinding__Fuse_Elements_Element__Fuse_Reactive_IObserver_OnSet;
    type->__interface_0.__fp_OnAdd = (void(*)(void*, ::uObject*))DataBinding__Fuse_Elements_Element__Fuse_Reactive_IObserver_OnAdd;
    type->__interface_0.__fp_OnNewAt = (void(*)(void*, int, ::uObject*))DataBinding__Fuse_Elements_Element__Fuse_Reactive_IObserver_OnNewAt;
    type->__interface_0.__fp_OnFailed = (void(*)(void*, ::uString*))DataBinding__Fuse_Elements_Element__Fuse_Reactive_IObserver_OnFailed;
    type->__interface_0.__fp_OnNewAll = (void(*)(void*, int))DataBinding__Fuse_Elements_Element__Fuse_Reactive_IObserver_OnNewAll;
    type->__interface_0.__fp_OnRemove = (void(*)(void*, ::uObject*, int))DataBinding__Fuse_Elements_Element__Fuse_Reactive_IObserver_OnRemove;
    type->__interface_1.__fp_OnNameChanged = (void(*)(void*, ::uObject*, ::uString*))DataBinding__Fuse_Elements_Element__Fuse_Scripting_INameListener_OnNameChanged;

    type->SetInterfaces(
        ::app::Fuse::Reactive::IObserver__typeof(), offsetof(DataBinding__Fuse_Elements_Element__uType, __interface_0),
        ::app::Fuse::Scripting::INameListener__typeof(), offsetof(DataBinding__Fuse_Elements_Element__uType, __interface_1));

    type->SetStrongRefs(
        "_currentValue", offsetof(DataBinding__Fuse_Elements_Element, _currentValue),
        "_subscription", offsetof(DataBinding__Fuse_Elements_Element, _subscription),
        "_Target", offsetof(DataBinding__Fuse_Elements_Element, _Target));

    type->SetFields(2,
        ::uNewField("_currentValue", NULL, offsetof(DataBinding__Fuse_Elements_Element, _currentValue), ::uObject__typeof()),
        ::uNewField("_subscription", NULL, offsetof(DataBinding__Fuse_Elements_Element, _subscription), ::app::Fuse::Reactive::ISubscription__typeof()));

    type->SetFunctions(3,
        ::uNewFunction("get_Target", DataBinding__Fuse_Elements_Element__get_Target, 0, false, ::app::Uno::UX::Property__Fuse_Elements_Element__typeof()),
        ::uNewFunction(".ctor", DataBinding__Fuse_Elements_Element__New_1, 0, true, DataBinding__Fuse_Elements_Element__typeof(), ::app::Uno::UX::Property__Fuse_Elements_Element__typeof(), ::app::Uno::String__typeof()),
        ::uNewFunctionVoid("set_Target", DataBinding__Fuse_Elements_Element__set_Target, 0, false, ::app::Uno::UX::Property__Fuse_Elements_Element__typeof()));

    ::uRegisterType(type);
    return type;
}

void DataBinding__Fuse_Elements_Element___ObjInit_2(DataBinding__Fuse_Elements_Element* __this, ::app::Uno::UX::Property__Fuse_Elements_Element* target, ::uString* key)
{
    ::app::Fuse::Reactive::Binding___ObjInit_1(__this, key);
    __this->Target(target);
}

bool DataBinding__Fuse_Elements_Element__Acceptor(DataBinding__Fuse_Elements_Element* __this, ::uObject* obj)
{
    return ::uIs(obj, ::app::Fuse::Elements::Element__typeof());
}

void DataBinding__Fuse_Elements_Element__Fuse_Reactive_IObserver_OnAdd(DataBinding__Fuse_Elements_Element* __this, ::uObject* addedValue)
{
    U_THROW(::app::Uno::Exception__New_2(NULL, ::uGetConstString("Not handled: OnAdd")));
}

void DataBinding__Fuse_Elements_Element__Fuse_Reactive_IObserver_OnFailed(DataBinding__Fuse_Elements_Element* __this, ::uString* message)
{
    U_THROW(::app::Uno::Exception__New_2(NULL, ::uGetConstString("Not handled: OnFailed")));
}

void DataBinding__Fuse_Elements_Element__Fuse_Reactive_IObserver_OnNewAll(DataBinding__Fuse_Elements_Element* __this, int length)
{
    if (length > 0)
    {
        U_THROW(::app::Uno::Exception__New_2(NULL, ::uGetConstString("Not handled: OnNewAll")));
    }
}

void DataBinding__Fuse_Elements_Element__Fuse_Reactive_IObserver_OnNewAt(DataBinding__Fuse_Elements_Element* __this, int index, ::uObject* value)
{
    U_THROW(::app::Uno::Exception__New_2(NULL, ::uGetConstString("Not handled: OnNewAt")));
}

void DataBinding__Fuse_Elements_Element__Fuse_Reactive_IObserver_OnRemove(DataBinding__Fuse_Elements_Element* __this, ::uObject* value, int index)
{
    U_THROW(::app::Uno::Exception__New_2(NULL, ::uGetConstString("Not handled: OnRemoveAt")));
}

void DataBinding__Fuse_Elements_Element__Fuse_Reactive_IObserver_OnSet(DataBinding__Fuse_Elements_Element* __this, ::uObject* newValue)
{
    __this->PushValue(newValue);
}

void DataBinding__Fuse_Elements_Element__Fuse_Scripting_INameListener_OnNameChanged(DataBinding__Fuse_Elements_Element* __this, ::uObject* obj, ::uString* name)
{
    __this->PushValue(__this->_currentValue);
}

::app::Uno::UX::Property__Fuse_Elements_Element* DataBinding__Fuse_Elements_Element__get_Target(DataBinding__Fuse_Elements_Element* __this)
{
    return __this->_Target;
}

DataBinding__Fuse_Elements_Element* DataBinding__Fuse_Elements_Element__New_1(::uStatic* __this, ::app::Uno::UX::Property__Fuse_Elements_Element* target, ::uString* key)
{
    DataBinding__Fuse_Elements_Element* inst = (DataBinding__Fuse_Elements_Element*)::uAllocObject(sizeof(DataBinding__Fuse_Elements_Element), DataBinding__Fuse_Elements_Element__typeof());
    inst->_ObjInit_2(target, key);
    return inst;
}

void DataBinding__Fuse_Elements_Element__NewValue(DataBinding__Fuse_Elements_Element* __this, ::uObject* value)
{
    if (::uIs(value, ::app::Fuse::Elements::Element__typeof()))
    {
        __this->PushValue(value);
    }
    else if (::uIs(value, ::app::Fuse::Reactive::IObservable__typeof()))
    {
        if (__this->_subscription != NULL)
        {
            ::app::Uno::IDisposable::Dispose(::uPtr< ::uObject*>(__this->_subscription));
            __this->_subscription = NULL;
        }

        ::uObject* obs = ::uAs< ::uObject*>(value, ::app::Fuse::Reactive::IObservable__typeof());

        if (obs != NULL)
        {
            __this->_subscription = ::app::Fuse::Reactive::IObservable::Subscribe(::uPtr< ::uObject*>(obs), (::uObject*)__this);
        }
    }
    else
    {
        __this->PushValue(value);
    }
}

void DataBinding__Fuse_Elements_Element__OnRooted(DataBinding__Fuse_Elements_Element* __this, ::app::Fuse::Node* n)
{
    ::uPtr< ::app::Uno::UX::Property__Fuse_Elements_Element*>(__this->Target())->add_ValueChanged(::uNewDelegateNonVirt(::app::Uno::UX::ValueChangedHandler__Fuse_Elements_Element__typeof(), (const void*)DataBinding__Fuse_Elements_Element__OnValueChanged, __this));
    ::app::Fuse::Reactive::Binding__OnRooted(__this, n);
}

void DataBinding__Fuse_Elements_Element__OnUnrooted(DataBinding__Fuse_Elements_Element* __this, ::app::Fuse::Node* n)
{
    ::app::Fuse::Scripting::NameRegistry__RemoveListener(NULL, (::uObject*)__this);
    ::uPtr< ::app::Uno::UX::Property__Fuse_Elements_Element*>(__this->Target())->remove_ValueChanged(::uNewDelegateNonVirt(::app::Uno::UX::ValueChangedHandler__Fuse_Elements_Element__typeof(), (const void*)DataBinding__Fuse_Elements_Element__OnValueChanged, __this));

    if (__this->_subscription != NULL)
    {
        ::app::Uno::IDisposable::Dispose(::uPtr< ::uObject*>(__this->_subscription));
        __this->_subscription = NULL;
    }

    ::app::Fuse::Reactive::Binding__OnUnrooted(__this, n);
}

void DataBinding__Fuse_Elements_Element__OnValueChanged(DataBinding__Fuse_Elements_Element* __this, ::uObject* sender, ::app::Uno::UX::ValueChangedArgs__Fuse_Elements_Element* args)
{
    if ((__this->_subscription != NULL) && (::uPtr< ::app::Uno::UX::ValueChangedArgs__Fuse_Elements_Element*>(args)->Origin() != __this))
    {
        ::app::Fuse::Reactive::ISubscription::SetExclusive(::uPtr< ::uObject*>(__this->_subscription), (::uObject*)::uPtr< ::app::Uno::UX::ValueChangedArgs__Fuse_Elements_Element*>(args)->Value());
    }
}

void DataBinding__Fuse_Elements_Element__PushValue(DataBinding__Fuse_Elements_Element* __this, ::uObject* newValue)
{
    __this->_currentValue = newValue;

    if (::uIs(newValue, ::app::Fuse::Elements::Element__typeof()))
    {
        ::app::Fuse::Scripting::NameRegistry__RemoveListener(NULL, (::uObject*)__this);
        ::uPtr< ::app::Uno::UX::Property__Fuse_Elements_Element*>(__this->Target())->SetRestState(::uCast< ::app::Fuse::Elements::Element*>(newValue, ::app::Fuse::Elements::Element__typeof()), (::uObject*)__this);
        return;
    }

    ::uString* name = ::uAs< ::uString*>(newValue, ::app::Uno::String__typeof());

    if (::app::Uno::String__op_Inequality(NULL, name, NULL) && (__this->Node() != NULL))
    {
        ::app::Fuse::Scripting::NameRegistry__AddListener(NULL, name, (::uObject*)__this);
        ::app::Fuse::Node* k = ::uPtr< ::app::Fuse::Node*>(__this->Node())->FindNodeByName(::uCast< ::uString*>(newValue, ::app::Uno::String__typeof()));

        if (::uIs(k, ::app::Fuse::Elements::Element__typeof()))
        {
            ::uPtr< ::app::Uno::UX::Property__Fuse_Elements_Element*>(__this->Target())->SetRestState(::uCast< ::app::Fuse::Elements::Element*>(k, ::app::Fuse::Elements::Element__typeof()), (::uObject*)__this);
            return;
        }
        else
        {
            ::uObject* candidate = ::uPtr< ::app::Fuse::Node*>(__this->Node())->FindObjectByName(::uCast< ::uString*>(newValue, ::app::Uno::String__typeof()), ::uNewDelegateNonVirt(::app::Uno::Predicate__object__typeof(), (const void*)DataBinding__Fuse_Elements_Element__Acceptor, __this));

            if (::uIs(candidate, ::app::Fuse::Elements::Element__typeof()))
            {
                ::uPtr< ::app::Uno::UX::Property__Fuse_Elements_Element*>(__this->Target())->SetRestState(::uCast< ::app::Fuse::Elements::Element*>(candidate, ::app::Fuse::Elements::Element__typeof()), (::uObject*)__this);
                return;
            }
        }
    }

    ::app::Fuse::Reactive::Marshal__ToType__Fuse_Elements_Element(NULL, newValue, ::uNewDelegateNonVirt(::app::Uno::Action__Fuse_Elements_Element__typeof(), (const void*)DataBinding__Fuse_Elements_Element__SetValue, __this));
}

void DataBinding__Fuse_Elements_Element__set_Target(DataBinding__Fuse_Elements_Element* __this, ::app::Uno::UX::Property__Fuse_Elements_Element* value)
{
    __this->_Target = value;
}

void DataBinding__Fuse_Elements_Element__SetValue(DataBinding__Fuse_Elements_Element* __this, ::app::Fuse::Elements::Element* value)
{
    ::uPtr< ::app::Uno::UX::Property__Fuse_Elements_Element*>(__this->Target())->SetRestState(value, (::uObject*)__this);
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Reactive\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

DataBinding__Fuse_Elements_HitTestMode__uType* DataBinding__Fuse_Elements_HitTestMode__typeof()
{
    static ::uStaticStrong<DataBinding__Fuse_Elements_HitTestMode__uType*> type;
    if (type != NULL) return type;

    type = (DataBinding__Fuse_Elements_HitTestMode__uType*)::uAllocClassType(sizeof(DataBinding__Fuse_Elements_HitTestMode__uType), "Fuse.Reactive.DataBinding<Fuse.Elements.HitTestMode>", false, 2, 3, 0);

    type->SetBaseType(::app::Fuse::Reactive::Binding__typeof());
    type->__fp_NewValue = (void(*)(::app::Fuse::Reactive::Binding*, ::uObject*))DataBinding__Fuse_Elements_HitTestMode__NewValue;
    type->__fp_OnRooted = (void(*)(::app::Fuse::Behavior*, ::app::Fuse::Node*))DataBinding__Fuse_Elements_HitTestMode__OnRooted;
    type->__fp_OnUnrooted = (void(*)(::app::Fuse::Behavior*, ::app::Fuse::Node*))DataBinding__Fuse_Elements_HitTestMode__OnUnrooted;
    type->__interface_0.__fp_OnSet = (void(*)(void*, ::uObject*))DataBinding__Fuse_Elements_HitTestMode__Fuse_Reactive_IObserver_OnSet;
    type->__interface_0.__fp_OnAdd = (void(*)(void*, ::uObject*))DataBinding__Fuse_Elements_HitTestMode__Fuse_Reactive_IObserver_OnAdd;
    type->__interface_0.__fp_OnNewAt = (void(*)(void*, int, ::uObject*))DataBinding__Fuse_Elements_HitTestMode__Fuse_Reactive_IObserver_OnNewAt;
    type->__interface_0.__fp_OnFailed = (void(*)(void*, ::uString*))DataBinding__Fuse_Elements_HitTestMode__Fuse_Reactive_IObserver_OnFailed;
    type->__interface_0.__fp_OnNewAll = (void(*)(void*, int))DataBinding__Fuse_Elements_HitTestMode__Fuse_Reactive_IObserver_OnNewAll;
    type->__interface_0.__fp_OnRemove = (void(*)(void*, ::uObject*, int))DataBinding__Fuse_Elements_HitTestMode__Fuse_Reactive_IObserver_OnRemove;
    type->__interface_1.__fp_OnNameChanged = (void(*)(void*, ::uObject*, ::uString*))DataBinding__Fuse_Elements_HitTestMode__Fuse_Scripting_INameListener_OnNameChanged;

    type->SetInterfaces(
        ::app::Fuse::Reactive::IObserver__typeof(), offsetof(DataBinding__Fuse_Elements_HitTestMode__uType, __interface_0),
        ::app::Fuse::Scripting::INameListener__typeof(), offsetof(DataBinding__Fuse_Elements_HitTestMode__uType, __interface_1));

    type->SetStrongRefs(
        "_currentValue", offsetof(DataBinding__Fuse_Elements_HitTestMode, _currentValue),
        "_subscription", offsetof(DataBinding__Fuse_Elements_HitTestMode, _subscription),
        "_Target", offsetof(DataBinding__Fuse_Elements_HitTestMode, _Target));

    type->SetFields(2,
        ::uNewField("_currentValue", NULL, offsetof(DataBinding__Fuse_Elements_HitTestMode, _currentValue), ::uObject__typeof()),
        ::uNewField("_subscription", NULL, offsetof(DataBinding__Fuse_Elements_HitTestMode, _subscription), ::app::Fuse::Reactive::ISubscription__typeof()));

    type->SetFunctions(3,
        ::uNewFunction("get_Target", DataBinding__Fuse_Elements_HitTestMode__get_Target, 0, false, ::app::Uno::UX::Property__Fuse_Elements_HitTestMode__typeof()),
        ::uNewFunction(".ctor", DataBinding__Fuse_Elements_HitTestMode__New_1, 0, true, DataBinding__Fuse_Elements_HitTestMode__typeof(), ::app::Uno::UX::Property__Fuse_Elements_HitTestMode__typeof(), ::app::Uno::String__typeof()),
        ::uNewFunctionVoid("set_Target", DataBinding__Fuse_Elements_HitTestMode__set_Target, 0, false, ::app::Uno::UX::Property__Fuse_Elements_HitTestMode__typeof()));

    ::uRegisterType(type);
    return type;
}

void DataBinding__Fuse_Elements_HitTestMode___ObjInit_2(DataBinding__Fuse_Elements_HitTestMode* __this, ::app::Uno::UX::Property__Fuse_Elements_HitTestMode* target, ::uString* key)
{
    ::app::Fuse::Reactive::Binding___ObjInit_1(__this, key);
    __this->Target(target);
}

bool DataBinding__Fuse_Elements_HitTestMode__Acceptor(DataBinding__Fuse_Elements_HitTestMode* __this, ::uObject* obj)
{
    return ::uIs(obj, ::app::Fuse::Elements::HitTestMode__typeof());
}

void DataBinding__Fuse_Elements_HitTestMode__Fuse_Reactive_IObserver_OnAdd(DataBinding__Fuse_Elements_HitTestMode* __this, ::uObject* addedValue)
{
    U_THROW(::app::Uno::Exception__New_2(NULL, ::uGetConstString("Not handled: OnAdd")));
}

void DataBinding__Fuse_Elements_HitTestMode__Fuse_Reactive_IObserver_OnFailed(DataBinding__Fuse_Elements_HitTestMode* __this, ::uString* message)
{
    U_THROW(::app::Uno::Exception__New_2(NULL, ::uGetConstString("Not handled: OnFailed")));
}

void DataBinding__Fuse_Elements_HitTestMode__Fuse_Reactive_IObserver_OnNewAll(DataBinding__Fuse_Elements_HitTestMode* __this, int length)
{
    if (length > 0)
    {
        U_THROW(::app::Uno::Exception__New_2(NULL, ::uGetConstString("Not handled: OnNewAll")));
    }
}

void DataBinding__Fuse_Elements_HitTestMode__Fuse_Reactive_IObserver_OnNewAt(DataBinding__Fuse_Elements_HitTestMode* __this, int index, ::uObject* value)
{
    U_THROW(::app::Uno::Exception__New_2(NULL, ::uGetConstString("Not handled: OnNewAt")));
}

void DataBinding__Fuse_Elements_HitTestMode__Fuse_Reactive_IObserver_OnRemove(DataBinding__Fuse_Elements_HitTestMode* __this, ::uObject* value, int index)
{
    U_THROW(::app::Uno::Exception__New_2(NULL, ::uGetConstString("Not handled: OnRemoveAt")));
}

void DataBinding__Fuse_Elements_HitTestMode__Fuse_Reactive_IObserver_OnSet(DataBinding__Fuse_Elements_HitTestMode* __this, ::uObject* newValue)
{
    __this->PushValue(newValue);
}

void DataBinding__Fuse_Elements_HitTestMode__Fuse_Scripting_INameListener_OnNameChanged(DataBinding__Fuse_Elements_HitTestMode* __this, ::uObject* obj, ::uString* name)
{
    __this->PushValue(__this->_currentValue);
}

::app::Uno::UX::Property__Fuse_Elements_HitTestMode* DataBinding__Fuse_Elements_HitTestMode__get_Target(DataBinding__Fuse_Elements_HitTestMode* __this)
{
    return __this->_Target;
}

DataBinding__Fuse_Elements_HitTestMode* DataBinding__Fuse_Elements_HitTestMode__New_1(::uStatic* __this, ::app::Uno::UX::Property__Fuse_Elements_HitTestMode* target, ::uString* key)
{
    DataBinding__Fuse_Elements_HitTestMode* inst = (DataBinding__Fuse_Elements_HitTestMode*)::uAllocObject(sizeof(DataBinding__Fuse_Elements_HitTestMode), DataBinding__Fuse_Elements_HitTestMode__typeof());
    inst->_ObjInit_2(target, key);
    return inst;
}

void DataBinding__Fuse_Elements_HitTestMode__NewValue(DataBinding__Fuse_Elements_HitTestMode* __this, ::uObject* value)
{
    if (::uIs(value, ::app::Fuse::Elements::HitTestMode__typeof()))
    {
        __this->PushValue(value);
    }
    else if (::uIs(value, ::app::Fuse::Reactive::IObservable__typeof()))
    {
        if (__this->_subscription != NULL)
        {
            ::app::Uno::IDisposable::Dispose(::uPtr< ::uObject*>(__this->_subscription));
            __this->_subscription = NULL;
        }

        ::uObject* obs = ::uAs< ::uObject*>(value, ::app::Fuse::Reactive::IObservable__typeof());

        if (obs != NULL)
        {
            __this->_subscription = ::app::Fuse::Reactive::IObservable::Subscribe(::uPtr< ::uObject*>(obs), (::uObject*)__this);
        }
    }
    else
    {
        __this->PushValue(value);
    }
}

void DataBinding__Fuse_Elements_HitTestMode__OnRooted(DataBinding__Fuse_Elements_HitTestMode* __this, ::app::Fuse::Node* n)
{
    ::uPtr< ::app::Uno::UX::Property__Fuse_Elements_HitTestMode*>(__this->Target())->add_ValueChanged(::uNewDelegateNonVirt(::app::Uno::UX::ValueChangedHandler__Fuse_Elements_HitTestMode__typeof(), (const void*)DataBinding__Fuse_Elements_HitTestMode__OnValueChanged, __this));
    ::app::Fuse::Reactive::Binding__OnRooted(__this, n);
}

void DataBinding__Fuse_Elements_HitTestMode__OnUnrooted(DataBinding__Fuse_Elements_HitTestMode* __this, ::app::Fuse::Node* n)
{
    ::app::Fuse::Scripting::NameRegistry__RemoveListener(NULL, (::uObject*)__this);
    ::uPtr< ::app::Uno::UX::Property__Fuse_Elements_HitTestMode*>(__this->Target())->remove_ValueChanged(::uNewDelegateNonVirt(::app::Uno::UX::ValueChangedHandler__Fuse_Elements_HitTestMode__typeof(), (const void*)DataBinding__Fuse_Elements_HitTestMode__OnValueChanged, __this));

    if (__this->_subscription != NULL)
    {
        ::app::Uno::IDisposable::Dispose(::uPtr< ::uObject*>(__this->_subscription));
        __this->_subscription = NULL;
    }

    ::app::Fuse::Reactive::Binding__OnUnrooted(__this, n);
}

void DataBinding__Fuse_Elements_HitTestMode__OnValueChanged(DataBinding__Fuse_Elements_HitTestMode* __this, ::uObject* sender, ::app::Uno::UX::ValueChangedArgs__Fuse_Elements_HitTestMode* args)
{
    if ((__this->_subscription != NULL) && (::uPtr< ::app::Uno::UX::ValueChangedArgs__Fuse_Elements_HitTestMode*>(args)->Origin() != __this))
    {
        ::app::Fuse::Reactive::ISubscription::SetExclusive(::uPtr< ::uObject*>(__this->_subscription), ::uBox< int>(::app::Fuse::Elements::HitTestMode__typeof(), ::uPtr< ::app::Uno::UX::ValueChangedArgs__Fuse_Elements_HitTestMode*>(args)->Value()));
    }
}

void DataBinding__Fuse_Elements_HitTestMode__PushValue(DataBinding__Fuse_Elements_HitTestMode* __this, ::uObject* newValue)
{
    __this->_currentValue = newValue;

    if (::uIs(newValue, ::app::Fuse::Elements::HitTestMode__typeof()))
    {
        ::app::Fuse::Scripting::NameRegistry__RemoveListener(NULL, (::uObject*)__this);
        ::uPtr< ::app::Uno::UX::Property__Fuse_Elements_HitTestMode*>(__this->Target())->SetRestState(::uUnbox< int>(::app::Fuse::Elements::HitTestMode__typeof(), newValue), (::uObject*)__this);
        return;
    }

    ::uString* name = ::uAs< ::uString*>(newValue, ::app::Uno::String__typeof());

    if (::app::Uno::String__op_Inequality(NULL, name, NULL) && (__this->Node() != NULL))
    {
        ::app::Fuse::Scripting::NameRegistry__AddListener(NULL, name, (::uObject*)__this);
        ::app::Fuse::Node* k = ::uPtr< ::app::Fuse::Node*>(__this->Node())->FindNodeByName(::uCast< ::uString*>(newValue, ::app::Uno::String__typeof()));

        if (::uIs(k, ::app::Fuse::Elements::HitTestMode__typeof()))
        {
            ::uPtr< ::app::Uno::UX::Property__Fuse_Elements_HitTestMode*>(__this->Target())->SetRestState(::uUnbox< int>(::app::Fuse::Elements::HitTestMode__typeof(), (::uObject*)k), (::uObject*)__this);
            return;
        }
        else
        {
            ::uObject* candidate = ::uPtr< ::app::Fuse::Node*>(__this->Node())->FindObjectByName(::uCast< ::uString*>(newValue, ::app::Uno::String__typeof()), ::uNewDelegateNonVirt(::app::Uno::Predicate__object__typeof(), (const void*)DataBinding__Fuse_Elements_HitTestMode__Acceptor, __this));

            if (::uIs(candidate, ::app::Fuse::Elements::HitTestMode__typeof()))
            {
                ::uPtr< ::app::Uno::UX::Property__Fuse_Elements_HitTestMode*>(__this->Target())->SetRestState(::uUnbox< int>(::app::Fuse::Elements::HitTestMode__typeof(), candidate), (::uObject*)__this);
                return;
            }
        }
    }

    ::app::Fuse::Reactive::Marshal__ToType__Fuse_Elements_HitTestMode(NULL, newValue, ::uNewDelegateNonVirt(::app::Uno::Action__Fuse_Elements_HitTestMode__typeof(), (const void*)DataBinding__Fuse_Elements_HitTestMode__SetValue, __this));
}

void DataBinding__Fuse_Elements_HitTestMode__set_Target(DataBinding__Fuse_Elements_HitTestMode* __this, ::app::Uno::UX::Property__Fuse_Elements_HitTestMode* value)
{
    __this->_Target = value;
}

void DataBinding__Fuse_Elements_HitTestMode__SetValue(DataBinding__Fuse_Elements_HitTestMode* __this, int value)
{
    ::uPtr< ::app::Uno::UX::Property__Fuse_Elements_HitTestMode*>(__this->Target())->SetRestState(value, (::uObject*)__this);
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Reactive\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

DataBinding__Fuse_Elements_SizeUnit__uType* DataBinding__Fuse_Elements_SizeUnit__typeof()
{
    static ::uStaticStrong<DataBinding__Fuse_Elements_SizeUnit__uType*> type;
    if (type != NULL) return type;

    type = (DataBinding__Fuse_Elements_SizeUnit__uType*)::uAllocClassType(sizeof(DataBinding__Fuse_Elements_SizeUnit__uType), "Fuse.Reactive.DataBinding<Fuse.Elements.SizeUnit>", false, 2, 3, 0);

    type->SetBaseType(::app::Fuse::Reactive::Binding__typeof());
    type->__fp_NewValue = (void(*)(::app::Fuse::Reactive::Binding*, ::uObject*))DataBinding__Fuse_Elements_SizeUnit__NewValue;
    type->__fp_OnRooted = (void(*)(::app::Fuse::Behavior*, ::app::Fuse::Node*))DataBinding__Fuse_Elements_SizeUnit__OnRooted;
    type->__fp_OnUnrooted = (void(*)(::app::Fuse::Behavior*, ::app::Fuse::Node*))DataBinding__Fuse_Elements_SizeUnit__OnUnrooted;
    type->__interface_0.__fp_OnSet = (void(*)(void*, ::uObject*))DataBinding__Fuse_Elements_SizeUnit__Fuse_Reactive_IObserver_OnSet;
    type->__interface_0.__fp_OnAdd = (void(*)(void*, ::uObject*))DataBinding__Fuse_Elements_SizeUnit__Fuse_Reactive_IObserver_OnAdd;
    type->__interface_0.__fp_OnNewAt = (void(*)(void*, int, ::uObject*))DataBinding__Fuse_Elements_SizeUnit__Fuse_Reactive_IObserver_OnNewAt;
    type->__interface_0.__fp_OnFailed = (void(*)(void*, ::uString*))DataBinding__Fuse_Elements_SizeUnit__Fuse_Reactive_IObserver_OnFailed;
    type->__interface_0.__fp_OnNewAll = (void(*)(void*, int))DataBinding__Fuse_Elements_SizeUnit__Fuse_Reactive_IObserver_OnNewAll;
    type->__interface_0.__fp_OnRemove = (void(*)(void*, ::uObject*, int))DataBinding__Fuse_Elements_SizeUnit__Fuse_Reactive_IObserver_OnRemove;
    type->__interface_1.__fp_OnNameChanged = (void(*)(void*, ::uObject*, ::uString*))DataBinding__Fuse_Elements_SizeUnit__Fuse_Scripting_INameListener_OnNameChanged;

    type->SetInterfaces(
        ::app::Fuse::Reactive::IObserver__typeof(), offsetof(DataBinding__Fuse_Elements_SizeUnit__uType, __interface_0),
        ::app::Fuse::Scripting::INameListener__typeof(), offsetof(DataBinding__Fuse_Elements_SizeUnit__uType, __interface_1));

    type->SetStrongRefs(
        "_currentValue", offsetof(DataBinding__Fuse_Elements_SizeUnit, _currentValue),
        "_subscription", offsetof(DataBinding__Fuse_Elements_SizeUnit, _subscription),
        "_Target", offsetof(DataBinding__Fuse_Elements_SizeUnit, _Target));

    type->SetFields(2,
        ::uNewField("_currentValue", NULL, offsetof(DataBinding__Fuse_Elements_SizeUnit, _currentValue), ::uObject__typeof()),
        ::uNewField("_subscription", NULL, offsetof(DataBinding__Fuse_Elements_SizeUnit, _subscription), ::app::Fuse::Reactive::ISubscription__typeof()));

    type->SetFunctions(3,
        ::uNewFunction("get_Target", DataBinding__Fuse_Elements_SizeUnit__get_Target, 0, false, ::app::Uno::UX::Property__Fuse_Elements_SizeUnit__typeof()),
        ::uNewFunction(".ctor", DataBinding__Fuse_Elements_SizeUnit__New_1, 0, true, DataBinding__Fuse_Elements_SizeUnit__typeof(), ::app::Uno::UX::Property__Fuse_Elements_SizeUnit__typeof(), ::app::Uno::String__typeof()),
        ::uNewFunctionVoid("set_Target", DataBinding__Fuse_Elements_SizeUnit__set_Target, 0, false, ::app::Uno::UX::Property__Fuse_Elements_SizeUnit__typeof()));

    ::uRegisterType(type);
    return type;
}

void DataBinding__Fuse_Elements_SizeUnit___ObjInit_2(DataBinding__Fuse_Elements_SizeUnit* __this, ::app::Uno::UX::Property__Fuse_Elements_SizeUnit* target, ::uString* key)
{
    ::app::Fuse::Reactive::Binding___ObjInit_1(__this, key);
    __this->Target(target);
}

bool DataBinding__Fuse_Elements_SizeUnit__Acceptor(DataBinding__Fuse_Elements_SizeUnit* __this, ::uObject* obj)
{
    return ::uIs(obj, ::app::Fuse::Elements::SizeUnit__typeof());
}

void DataBinding__Fuse_Elements_SizeUnit__Fuse_Reactive_IObserver_OnAdd(DataBinding__Fuse_Elements_SizeUnit* __this, ::uObject* addedValue)
{
    U_THROW(::app::Uno::Exception__New_2(NULL, ::uGetConstString("Not handled: OnAdd")));
}

void DataBinding__Fuse_Elements_SizeUnit__Fuse_Reactive_IObserver_OnFailed(DataBinding__Fuse_Elements_SizeUnit* __this, ::uString* message)
{
    U_THROW(::app::Uno::Exception__New_2(NULL, ::uGetConstString("Not handled: OnFailed")));
}

void DataBinding__Fuse_Elements_SizeUnit__Fuse_Reactive_IObserver_OnNewAll(DataBinding__Fuse_Elements_SizeUnit* __this, int length)
{
    if (length > 0)
    {
        U_THROW(::app::Uno::Exception__New_2(NULL, ::uGetConstString("Not handled: OnNewAll")));
    }
}

void DataBinding__Fuse_Elements_SizeUnit__Fuse_Reactive_IObserver_OnNewAt(DataBinding__Fuse_Elements_SizeUnit* __this, int index, ::uObject* value)
{
    U_THROW(::app::Uno::Exception__New_2(NULL, ::uGetConstString("Not handled: OnNewAt")));
}

void DataBinding__Fuse_Elements_SizeUnit__Fuse_Reactive_IObserver_OnRemove(DataBinding__Fuse_Elements_SizeUnit* __this, ::uObject* value, int index)
{
    U_THROW(::app::Uno::Exception__New_2(NULL, ::uGetConstString("Not handled: OnRemoveAt")));
}

void DataBinding__Fuse_Elements_SizeUnit__Fuse_Reactive_IObserver_OnSet(DataBinding__Fuse_Elements_SizeUnit* __this, ::uObject* newValue)
{
    __this->PushValue(newValue);
}

void DataBinding__Fuse_Elements_SizeUnit__Fuse_Scripting_INameListener_OnNameChanged(DataBinding__Fuse_Elements_SizeUnit* __this, ::uObject* obj, ::uString* name)
{
    __this->PushValue(__this->_currentValue);
}

::app::Uno::UX::Property__Fuse_Elements_SizeUnit* DataBinding__Fuse_Elements_SizeUnit__get_Target(DataBinding__Fuse_Elements_SizeUnit* __this)
{
    return __this->_Target;
}

DataBinding__Fuse_Elements_SizeUnit* DataBinding__Fuse_Elements_SizeUnit__New_1(::uStatic* __this, ::app::Uno::UX::Property__Fuse_Elements_SizeUnit* target, ::uString* key)
{
    DataBinding__Fuse_Elements_SizeUnit* inst = (DataBinding__Fuse_Elements_SizeUnit*)::uAllocObject(sizeof(DataBinding__Fuse_Elements_SizeUnit), DataBinding__Fuse_Elements_SizeUnit__typeof());
    inst->_ObjInit_2(target, key);
    return inst;
}

void DataBinding__Fuse_Elements_SizeUnit__NewValue(DataBinding__Fuse_Elements_SizeUnit* __this, ::uObject* value)
{
    if (::uIs(value, ::app::Fuse::Elements::SizeUnit__typeof()))
    {
        __this->PushValue(value);
    }
    else if (::uIs(value, ::app::Fuse::Reactive::IObservable__typeof()))
    {
        if (__this->_subscription != NULL)
        {
            ::app::Uno::IDisposable::Dispose(::uPtr< ::uObject*>(__this->_subscription));
            __this->_subscription = NULL;
        }

        ::uObject* obs = ::uAs< ::uObject*>(value, ::app::Fuse::Reactive::IObservable__typeof());

        if (obs != NULL)
        {
            __this->_subscription = ::app::Fuse::Reactive::IObservable::Subscribe(::uPtr< ::uObject*>(obs), (::uObject*)__this);
        }
    }
    else
    {
        __this->PushValue(value);
    }
}

void DataBinding__Fuse_Elements_SizeUnit__OnRooted(DataBinding__Fuse_Elements_SizeUnit* __this, ::app::Fuse::Node* n)
{
    ::uPtr< ::app::Uno::UX::Property__Fuse_Elements_SizeUnit*>(__this->Target())->add_ValueChanged(::uNewDelegateNonVirt(::app::Uno::UX::ValueChangedHandler__Fuse_Elements_SizeUnit__typeof(), (const void*)DataBinding__Fuse_Elements_SizeUnit__OnValueChanged, __this));
    ::app::Fuse::Reactive::Binding__OnRooted(__this, n);
}

void DataBinding__Fuse_Elements_SizeUnit__OnUnrooted(DataBinding__Fuse_Elements_SizeUnit* __this, ::app::Fuse::Node* n)
{
    ::app::Fuse::Scripting::NameRegistry__RemoveListener(NULL, (::uObject*)__this);
    ::uPtr< ::app::Uno::UX::Property__Fuse_Elements_SizeUnit*>(__this->Target())->remove_ValueChanged(::uNewDelegateNonVirt(::app::Uno::UX::ValueChangedHandler__Fuse_Elements_SizeUnit__typeof(), (const void*)DataBinding__Fuse_Elements_SizeUnit__OnValueChanged, __this));

    if (__this->_subscription != NULL)
    {
        ::app::Uno::IDisposable::Dispose(::uPtr< ::uObject*>(__this->_subscription));
        __this->_subscription = NULL;
    }

    ::app::Fuse::Reactive::Binding__OnUnrooted(__this, n);
}

void DataBinding__Fuse_Elements_SizeUnit__OnValueChanged(DataBinding__Fuse_Elements_SizeUnit* __this, ::uObject* sender, ::app::Uno::UX::ValueChangedArgs__Fuse_Elements_SizeUnit* args)
{
    if ((__this->_subscription != NULL) && (::uPtr< ::app::Uno::UX::ValueChangedArgs__Fuse_Elements_SizeUnit*>(args)->Origin() != __this))
    {
        ::app::Fuse::Reactive::ISubscription::SetExclusive(::uPtr< ::uObject*>(__this->_subscription), ::uBox< int>(::app::Fuse::Elements::SizeUnit__typeof(), ::uPtr< ::app::Uno::UX::ValueChangedArgs__Fuse_Elements_SizeUnit*>(args)->Value()));
    }
}

void DataBinding__Fuse_Elements_SizeUnit__PushValue(DataBinding__Fuse_Elements_SizeUnit* __this, ::uObject* newValue)
{
    __this->_currentValue = newValue;

    if (::uIs(newValue, ::app::Fuse::Elements::SizeUnit__typeof()))
    {
        ::app::Fuse::Scripting::NameRegistry__RemoveListener(NULL, (::uObject*)__this);
        ::uPtr< ::app::Uno::UX::Property__Fuse_Elements_SizeUnit*>(__this->Target())->SetRestState(::uUnbox< int>(::app::Fuse::Elements::SizeUnit__typeof(), newValue), (::uObject*)__this);
        return;
    }

    ::uString* name = ::uAs< ::uString*>(newValue, ::app::Uno::String__typeof());

    if (::app::Uno::String__op_Inequality(NULL, name, NULL) && (__this->Node() != NULL))
    {
        ::app::Fuse::Scripting::NameRegistry__AddListener(NULL, name, (::uObject*)__this);
        ::app::Fuse::Node* k = ::uPtr< ::app::Fuse::Node*>(__this->Node())->FindNodeByName(::uCast< ::uString*>(newValue, ::app::Uno::String__typeof()));

        if (::uIs(k, ::app::Fuse::Elements::SizeUnit__typeof()))
        {
            ::uPtr< ::app::Uno::UX::Property__Fuse_Elements_SizeUnit*>(__this->Target())->SetRestState(::uUnbox< int>(::app::Fuse::Elements::SizeUnit__typeof(), (::uObject*)k), (::uObject*)__this);
            return;
        }
        else
        {
            ::uObject* candidate = ::uPtr< ::app::Fuse::Node*>(__this->Node())->FindObjectByName(::uCast< ::uString*>(newValue, ::app::Uno::String__typeof()), ::uNewDelegateNonVirt(::app::Uno::Predicate__object__typeof(), (const void*)DataBinding__Fuse_Elements_SizeUnit__Acceptor, __this));

            if (::uIs(candidate, ::app::Fuse::Elements::SizeUnit__typeof()))
            {
                ::uPtr< ::app::Uno::UX::Property__Fuse_Elements_SizeUnit*>(__this->Target())->SetRestState(::uUnbox< int>(::app::Fuse::Elements::SizeUnit__typeof(), candidate), (::uObject*)__this);
                return;
            }
        }
    }

    ::app::Fuse::Reactive::Marshal__ToType__Fuse_Elements_SizeUnit(NULL, newValue, ::uNewDelegateNonVirt(::app::Uno::Action__Fuse_Elements_SizeUnit__typeof(), (const void*)DataBinding__Fuse_Elements_SizeUnit__SetValue, __this));
}

void DataBinding__Fuse_Elements_SizeUnit__set_Target(DataBinding__Fuse_Elements_SizeUnit* __this, ::app::Uno::UX::Property__Fuse_Elements_SizeUnit* value)
{
    __this->_Target = value;
}

void DataBinding__Fuse_Elements_SizeUnit__SetValue(DataBinding__Fuse_Elements_SizeUnit* __this, int value)
{
    ::uPtr< ::app::Uno::UX::Property__Fuse_Elements_SizeUnit*>(__this->Target())->SetRestState(value, (::uObject*)__this);
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Reactive\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

DataBinding__Fuse_Elements_StretchDirection__uType* DataBinding__Fuse_Elements_StretchDirection__typeof()
{
    static ::uStaticStrong<DataBinding__Fuse_Elements_StretchDirection__uType*> type;
    if (type != NULL) return type;

    type = (DataBinding__Fuse_Elements_StretchDirection__uType*)::uAllocClassType(sizeof(DataBinding__Fuse_Elements_StretchDirection__uType), "Fuse.Reactive.DataBinding<Fuse.Elements.StretchDirection>", false, 2, 3, 0);

    type->SetBaseType(::app::Fuse::Reactive::Binding__typeof());
    type->__fp_NewValue = (void(*)(::app::Fuse::Reactive::Binding*, ::uObject*))DataBinding__Fuse_Elements_StretchDirection__NewValue;
    type->__fp_OnRooted = (void(*)(::app::Fuse::Behavior*, ::app::Fuse::Node*))DataBinding__Fuse_Elements_StretchDirection__OnRooted;
    type->__fp_OnUnrooted = (void(*)(::app::Fuse::Behavior*, ::app::Fuse::Node*))DataBinding__Fuse_Elements_StretchDirection__OnUnrooted;
    type->__interface_0.__fp_OnSet = (void(*)(void*, ::uObject*))DataBinding__Fuse_Elements_StretchDirection__Fuse_Reactive_IObserver_OnSet;
    type->__interface_0.__fp_OnAdd = (void(*)(void*, ::uObject*))DataBinding__Fuse_Elements_StretchDirection__Fuse_Reactive_IObserver_OnAdd;
    type->__interface_0.__fp_OnNewAt = (void(*)(void*, int, ::uObject*))DataBinding__Fuse_Elements_StretchDirection__Fuse_Reactive_IObserver_OnNewAt;
    type->__interface_0.__fp_OnFailed = (void(*)(void*, ::uString*))DataBinding__Fuse_Elements_StretchDirection__Fuse_Reactive_IObserver_OnFailed;
    type->__interface_0.__fp_OnNewAll = (void(*)(void*, int))DataBinding__Fuse_Elements_StretchDirection__Fuse_Reactive_IObserver_OnNewAll;
    type->__interface_0.__fp_OnRemove = (void(*)(void*, ::uObject*, int))DataBinding__Fuse_Elements_StretchDirection__Fuse_Reactive_IObserver_OnRemove;
    type->__interface_1.__fp_OnNameChanged = (void(*)(void*, ::uObject*, ::uString*))DataBinding__Fuse_Elements_StretchDirection__Fuse_Scripting_INameListener_OnNameChanged;

    type->SetInterfaces(
        ::app::Fuse::Reactive::IObserver__typeof(), offsetof(DataBinding__Fuse_Elements_StretchDirection__uType, __interface_0),
        ::app::Fuse::Scripting::INameListener__typeof(), offsetof(DataBinding__Fuse_Elements_StretchDirection__uType, __interface_1));

    type->SetStrongRefs(
        "_currentValue", offsetof(DataBinding__Fuse_Elements_StretchDirection, _currentValue),
        "_subscription", offsetof(DataBinding__Fuse_Elements_StretchDirection, _subscription),
        "_Target", offsetof(DataBinding__Fuse_Elements_StretchDirection, _Target));

    type->SetFields(2,
        ::uNewField("_currentValue", NULL, offsetof(DataBinding__Fuse_Elements_StretchDirection, _currentValue), ::uObject__typeof()),
        ::uNewField("_subscription", NULL, offsetof(DataBinding__Fuse_Elements_StretchDirection, _subscription), ::app::Fuse::Reactive::ISubscription__typeof()));

    type->SetFunctions(3,
        ::uNewFunction("get_Target", DataBinding__Fuse_Elements_StretchDirection__get_Target, 0, false, ::app::Uno::UX::Property__Fuse_Elements_StretchDirection__typeof()),
        ::uNewFunction(".ctor", DataBinding__Fuse_Elements_StretchDirection__New_1, 0, true, DataBinding__Fuse_Elements_StretchDirection__typeof(), ::app::Uno::UX::Property__Fuse_Elements_StretchDirection__typeof(), ::app::Uno::String__typeof()),
        ::uNewFunctionVoid("set_Target", DataBinding__Fuse_Elements_StretchDirection__set_Target, 0, false, ::app::Uno::UX::Property__Fuse_Elements_StretchDirection__typeof()));

    ::uRegisterType(type);
    return type;
}

void DataBinding__Fuse_Elements_StretchDirection___ObjInit_2(DataBinding__Fuse_Elements_StretchDirection* __this, ::app::Uno::UX::Property__Fuse_Elements_StretchDirection* target, ::uString* key)
{
    ::app::Fuse::Reactive::Binding___ObjInit_1(__this, key);
    __this->Target(target);
}

bool DataBinding__Fuse_Elements_StretchDirection__Acceptor(DataBinding__Fuse_Elements_StretchDirection* __this, ::uObject* obj)
{
    return ::uIs(obj, ::app::Fuse::Elements::StretchDirection__typeof());
}

void DataBinding__Fuse_Elements_StretchDirection__Fuse_Reactive_IObserver_OnAdd(DataBinding__Fuse_Elements_StretchDirection* __this, ::uObject* addedValue)
{
    U_THROW(::app::Uno::Exception__New_2(NULL, ::uGetConstString("Not handled: OnAdd")));
}

void DataBinding__Fuse_Elements_StretchDirection__Fuse_Reactive_IObserver_OnFailed(DataBinding__Fuse_Elements_StretchDirection* __this, ::uString* message)
{
    U_THROW(::app::Uno::Exception__New_2(NULL, ::uGetConstString("Not handled: OnFailed")));
}

void DataBinding__Fuse_Elements_StretchDirection__Fuse_Reactive_IObserver_OnNewAll(DataBinding__Fuse_Elements_StretchDirection* __this, int length)
{
    if (length > 0)
    {
        U_THROW(::app::Uno::Exception__New_2(NULL, ::uGetConstString("Not handled: OnNewAll")));
    }
}

void DataBinding__Fuse_Elements_StretchDirection__Fuse_Reactive_IObserver_OnNewAt(DataBinding__Fuse_Elements_StretchDirection* __this, int index, ::uObject* value)
{
    U_THROW(::app::Uno::Exception__New_2(NULL, ::uGetConstString("Not handled: OnNewAt")));
}

void DataBinding__Fuse_Elements_StretchDirection__Fuse_Reactive_IObserver_OnRemove(DataBinding__Fuse_Elements_StretchDirection* __this, ::uObject* value, int index)
{
    U_THROW(::app::Uno::Exception__New_2(NULL, ::uGetConstString("Not handled: OnRemoveAt")));
}

void DataBinding__Fuse_Elements_StretchDirection__Fuse_Reactive_IObserver_OnSet(DataBinding__Fuse_Elements_StretchDirection* __this, ::uObject* newValue)
{
    __this->PushValue(newValue);
}

void DataBinding__Fuse_Elements_StretchDirection__Fuse_Scripting_INameListener_OnNameChanged(DataBinding__Fuse_Elements_StretchDirection* __this, ::uObject* obj, ::uString* name)
{
    __this->PushValue(__this->_currentValue);
}

::app::Uno::UX::Property__Fuse_Elements_StretchDirection* DataBinding__Fuse_Elements_StretchDirection__get_Target(DataBinding__Fuse_Elements_StretchDirection* __this)
{
    return __this->_Target;
}

DataBinding__Fuse_Elements_StretchDirection* DataBinding__Fuse_Elements_StretchDirection__New_1(::uStatic* __this, ::app::Uno::UX::Property__Fuse_Elements_StretchDirection* target, ::uString* key)
{
    DataBinding__Fuse_Elements_StretchDirection* inst = (DataBinding__Fuse_Elements_StretchDirection*)::uAllocObject(sizeof(DataBinding__Fuse_Elements_StretchDirection), DataBinding__Fuse_Elements_StretchDirection__typeof());
    inst->_ObjInit_2(target, key);
    return inst;
}

void DataBinding__Fuse_Elements_StretchDirection__NewValue(DataBinding__Fuse_Elements_StretchDirection* __this, ::uObject* value)
{
    if (::uIs(value, ::app::Fuse::Elements::StretchDirection__typeof()))
    {
        __this->PushValue(value);
    }
    else if (::uIs(value, ::app::Fuse::Reactive::IObservable__typeof()))
    {
        if (__this->_subscription != NULL)
        {
            ::app::Uno::IDisposable::Dispose(::uPtr< ::uObject*>(__this->_subscription));
            __this->_subscription = NULL;
        }

        ::uObject* obs = ::uAs< ::uObject*>(value, ::app::Fuse::Reactive::IObservable__typeof());

        if (obs != NULL)
        {
            __this->_subscription = ::app::Fuse::Reactive::IObservable::Subscribe(::uPtr< ::uObject*>(obs), (::uObject*)__this);
        }
    }
    else
    {
        __this->PushValue(value);
    }
}

void DataBinding__Fuse_Elements_StretchDirection__OnRooted(DataBinding__Fuse_Elements_StretchDirection* __this, ::app::Fuse::Node* n)
{
    ::uPtr< ::app::Uno::UX::Property__Fuse_Elements_StretchDirection*>(__this->Target())->add_ValueChanged(::uNewDelegateNonVirt(::app::Uno::UX::ValueChangedHandler__Fuse_Elements_StretchDirection__typeof(), (const void*)DataBinding__Fuse_Elements_StretchDirection__OnValueChanged, __this));
    ::app::Fuse::Reactive::Binding__OnRooted(__this, n);
}

void DataBinding__Fuse_Elements_StretchDirection__OnUnrooted(DataBinding__Fuse_Elements_StretchDirection* __this, ::app::Fuse::Node* n)
{
    ::app::Fuse::Scripting::NameRegistry__RemoveListener(NULL, (::uObject*)__this);
    ::uPtr< ::app::Uno::UX::Property__Fuse_Elements_StretchDirection*>(__this->Target())->remove_ValueChanged(::uNewDelegateNonVirt(::app::Uno::UX::ValueChangedHandler__Fuse_Elements_StretchDirection__typeof(), (const void*)DataBinding__Fuse_Elements_StretchDirection__OnValueChanged, __this));

    if (__this->_subscription != NULL)
    {
        ::app::Uno::IDisposable::Dispose(::uPtr< ::uObject*>(__this->_subscription));
        __this->_subscription = NULL;
    }

    ::app::Fuse::Reactive::Binding__OnUnrooted(__this, n);
}

void DataBinding__Fuse_Elements_StretchDirection__OnValueChanged(DataBinding__Fuse_Elements_StretchDirection* __this, ::uObject* sender, ::app::Uno::UX::ValueChangedArgs__Fuse_Elements_StretchDirection* args)
{
    if ((__this->_subscription != NULL) && (::uPtr< ::app::Uno::UX::ValueChangedArgs__Fuse_Elements_StretchDirection*>(args)->Origin() != __this))
    {
        ::app::Fuse::Reactive::ISubscription::SetExclusive(::uPtr< ::uObject*>(__this->_subscription), ::uBox< int>(::app::Fuse::Elements::StretchDirection__typeof(), ::uPtr< ::app::Uno::UX::ValueChangedArgs__Fuse_Elements_StretchDirection*>(args)->Value()));
    }
}

void DataBinding__Fuse_Elements_StretchDirection__PushValue(DataBinding__Fuse_Elements_StretchDirection* __this, ::uObject* newValue)
{
    __this->_currentValue = newValue;

    if (::uIs(newValue, ::app::Fuse::Elements::StretchDirection__typeof()))
    {
        ::app::Fuse::Scripting::NameRegistry__RemoveListener(NULL, (::uObject*)__this);
        ::uPtr< ::app::Uno::UX::Property__Fuse_Elements_StretchDirection*>(__this->Target())->SetRestState(::uUnbox< int>(::app::Fuse::Elements::StretchDirection__typeof(), newValue), (::uObject*)__this);
        return;
    }

    ::uString* name = ::uAs< ::uString*>(newValue, ::app::Uno::String__typeof());

    if (::app::Uno::String__op_Inequality(NULL, name, NULL) && (__this->Node() != NULL))
    {
        ::app::Fuse::Scripting::NameRegistry__AddListener(NULL, name, (::uObject*)__this);
        ::app::Fuse::Node* k = ::uPtr< ::app::Fuse::Node*>(__this->Node())->FindNodeByName(::uCast< ::uString*>(newValue, ::app::Uno::String__typeof()));

        if (::uIs(k, ::app::Fuse::Elements::StretchDirection__typeof()))
        {
            ::uPtr< ::app::Uno::UX::Property__Fuse_Elements_StretchDirection*>(__this->Target())->SetRestState(::uUnbox< int>(::app::Fuse::Elements::StretchDirection__typeof(), (::uObject*)k), (::uObject*)__this);
            return;
        }
        else
        {
            ::uObject* candidate = ::uPtr< ::app::Fuse::Node*>(__this->Node())->FindObjectByName(::uCast< ::uString*>(newValue, ::app::Uno::String__typeof()), ::uNewDelegateNonVirt(::app::Uno::Predicate__object__typeof(), (const void*)DataBinding__Fuse_Elements_StretchDirection__Acceptor, __this));

            if (::uIs(candidate, ::app::Fuse::Elements::StretchDirection__typeof()))
            {
                ::uPtr< ::app::Uno::UX::Property__Fuse_Elements_StretchDirection*>(__this->Target())->SetRestState(::uUnbox< int>(::app::Fuse::Elements::StretchDirection__typeof(), candidate), (::uObject*)__this);
                return;
            }
        }
    }

    ::app::Fuse::Reactive::Marshal__ToType__Fuse_Elements_StretchDirection(NULL, newValue, ::uNewDelegateNonVirt(::app::Uno::Action__Fuse_Elements_StretchDirection__typeof(), (const void*)DataBinding__Fuse_Elements_StretchDirection__SetValue, __this));
}

void DataBinding__Fuse_Elements_StretchDirection__set_Target(DataBinding__Fuse_Elements_StretchDirection* __this, ::app::Uno::UX::Property__Fuse_Elements_StretchDirection* value)
{
    __this->_Target = value;
}

void DataBinding__Fuse_Elements_StretchDirection__SetValue(DataBinding__Fuse_Elements_StretchDirection* __this, int value)
{
    ::uPtr< ::app::Uno::UX::Property__Fuse_Elements_StretchDirection*>(__this->Target())->SetRestState(value, (::uObject*)__this);
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Reactive\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

DataBinding__Fuse_Elements_StretchMode__uType* DataBinding__Fuse_Elements_StretchMode__typeof()
{
    static ::uStaticStrong<DataBinding__Fuse_Elements_StretchMode__uType*> type;
    if (type != NULL) return type;

    type = (DataBinding__Fuse_Elements_StretchMode__uType*)::uAllocClassType(sizeof(DataBinding__Fuse_Elements_StretchMode__uType), "Fuse.Reactive.DataBinding<Fuse.Elements.StretchMode>", false, 2, 3, 0);

    type->SetBaseType(::app::Fuse::Reactive::Binding__typeof());
    type->__fp_NewValue = (void(*)(::app::Fuse::Reactive::Binding*, ::uObject*))DataBinding__Fuse_Elements_StretchMode__NewValue;
    type->__fp_OnRooted = (void(*)(::app::Fuse::Behavior*, ::app::Fuse::Node*))DataBinding__Fuse_Elements_StretchMode__OnRooted;
    type->__fp_OnUnrooted = (void(*)(::app::Fuse::Behavior*, ::app::Fuse::Node*))DataBinding__Fuse_Elements_StretchMode__OnUnrooted;
    type->__interface_0.__fp_OnSet = (void(*)(void*, ::uObject*))DataBinding__Fuse_Elements_StretchMode__Fuse_Reactive_IObserver_OnSet;
    type->__interface_0.__fp_OnAdd = (void(*)(void*, ::uObject*))DataBinding__Fuse_Elements_StretchMode__Fuse_Reactive_IObserver_OnAdd;
    type->__interface_0.__fp_OnNewAt = (void(*)(void*, int, ::uObject*))DataBinding__Fuse_Elements_StretchMode__Fuse_Reactive_IObserver_OnNewAt;
    type->__interface_0.__fp_OnFailed = (void(*)(void*, ::uString*))DataBinding__Fuse_Elements_StretchMode__Fuse_Reactive_IObserver_OnFailed;
    type->__interface_0.__fp_OnNewAll = (void(*)(void*, int))DataBinding__Fuse_Elements_StretchMode__Fuse_Reactive_IObserver_OnNewAll;
    type->__interface_0.__fp_OnRemove = (void(*)(void*, ::uObject*, int))DataBinding__Fuse_Elements_StretchMode__Fuse_Reactive_IObserver_OnRemove;
    type->__interface_1.__fp_OnNameChanged = (void(*)(void*, ::uObject*, ::uString*))DataBinding__Fuse_Elements_StretchMode__Fuse_Scripting_INameListener_OnNameChanged;

    type->SetInterfaces(
        ::app::Fuse::Reactive::IObserver__typeof(), offsetof(DataBinding__Fuse_Elements_StretchMode__uType, __interface_0),
        ::app::Fuse::Scripting::INameListener__typeof(), offsetof(DataBinding__Fuse_Elements_StretchMode__uType, __interface_1));

    type->SetStrongRefs(
        "_currentValue", offsetof(DataBinding__Fuse_Elements_StretchMode, _currentValue),
        "_subscription", offsetof(DataBinding__Fuse_Elements_StretchMode, _subscription),
        "_Target", offsetof(DataBinding__Fuse_Elements_StretchMode, _Target));

    type->SetFields(2,
        ::uNewField("_currentValue", NULL, offsetof(DataBinding__Fuse_Elements_StretchMode, _currentValue), ::uObject__typeof()),
        ::uNewField("_subscription", NULL, offsetof(DataBinding__Fuse_Elements_StretchMode, _subscription), ::app::Fuse::Reactive::ISubscription__typeof()));

    type->SetFunctions(3,
        ::uNewFunction("get_Target", DataBinding__Fuse_Elements_StretchMode__get_Target, 0, false, ::app::Uno::UX::Property__Fuse_Elements_StretchMode__typeof()),
        ::uNewFunction(".ctor", DataBinding__Fuse_Elements_StretchMode__New_1, 0, true, DataBinding__Fuse_Elements_StretchMode__typeof(), ::app::Uno::UX::Property__Fuse_Elements_StretchMode__typeof(), ::app::Uno::String__typeof()),
        ::uNewFunctionVoid("set_Target", DataBinding__Fuse_Elements_StretchMode__set_Target, 0, false, ::app::Uno::UX::Property__Fuse_Elements_StretchMode__typeof()));

    ::uRegisterType(type);
    return type;
}

void DataBinding__Fuse_Elements_StretchMode___ObjInit_2(DataBinding__Fuse_Elements_StretchMode* __this, ::app::Uno::UX::Property__Fuse_Elements_StretchMode* target, ::uString* key)
{
    ::app::Fuse::Reactive::Binding___ObjInit_1(__this, key);
    __this->Target(target);
}

bool DataBinding__Fuse_Elements_StretchMode__Acceptor(DataBinding__Fuse_Elements_StretchMode* __this, ::uObject* obj)
{
    return ::uIs(obj, ::app::Fuse::Elements::StretchMode__typeof());
}

void DataBinding__Fuse_Elements_StretchMode__Fuse_Reactive_IObserver_OnAdd(DataBinding__Fuse_Elements_StretchMode* __this, ::uObject* addedValue)
{
    U_THROW(::app::Uno::Exception__New_2(NULL, ::uGetConstString("Not handled: OnAdd")));
}

void DataBinding__Fuse_Elements_StretchMode__Fuse_Reactive_IObserver_OnFailed(DataBinding__Fuse_Elements_StretchMode* __this, ::uString* message)
{
    U_THROW(::app::Uno::Exception__New_2(NULL, ::uGetConstString("Not handled: OnFailed")));
}

void DataBinding__Fuse_Elements_StretchMode__Fuse_Reactive_IObserver_OnNewAll(DataBinding__Fuse_Elements_StretchMode* __this, int length)
{
    if (length > 0)
    {
        U_THROW(::app::Uno::Exception__New_2(NULL, ::uGetConstString("Not handled: OnNewAll")));
    }
}

void DataBinding__Fuse_Elements_StretchMode__Fuse_Reactive_IObserver_OnNewAt(DataBinding__Fuse_Elements_StretchMode* __this, int index, ::uObject* value)
{
    U_THROW(::app::Uno::Exception__New_2(NULL, ::uGetConstString("Not handled: OnNewAt")));
}

void DataBinding__Fuse_Elements_StretchMode__Fuse_Reactive_IObserver_OnRemove(DataBinding__Fuse_Elements_StretchMode* __this, ::uObject* value, int index)
{
    U_THROW(::app::Uno::Exception__New_2(NULL, ::uGetConstString("Not handled: OnRemoveAt")));
}

void DataBinding__Fuse_Elements_StretchMode__Fuse_Reactive_IObserver_OnSet(DataBinding__Fuse_Elements_StretchMode* __this, ::uObject* newValue)
{
    __this->PushValue(newValue);
}

void DataBinding__Fuse_Elements_StretchMode__Fuse_Scripting_INameListener_OnNameChanged(DataBinding__Fuse_Elements_StretchMode* __this, ::uObject* obj, ::uString* name)
{
    __this->PushValue(__this->_currentValue);
}

::app::Uno::UX::Property__Fuse_Elements_StretchMode* DataBinding__Fuse_Elements_StretchMode__get_Target(DataBinding__Fuse_Elements_StretchMode* __this)
{
    return __this->_Target;
}

DataBinding__Fuse_Elements_StretchMode* DataBinding__Fuse_Elements_StretchMode__New_1(::uStatic* __this, ::app::Uno::UX::Property__Fuse_Elements_StretchMode* target, ::uString* key)
{
    DataBinding__Fuse_Elements_StretchMode* inst = (DataBinding__Fuse_Elements_StretchMode*)::uAllocObject(sizeof(DataBinding__Fuse_Elements_StretchMode), DataBinding__Fuse_Elements_StretchMode__typeof());
    inst->_ObjInit_2(target, key);
    return inst;
}

void DataBinding__Fuse_Elements_StretchMode__NewValue(DataBinding__Fuse_Elements_StretchMode* __this, ::uObject* value)
{
    if (::uIs(value, ::app::Fuse::Elements::StretchMode__typeof()))
    {
        __this->PushValue(value);
    }
    else if (::uIs(value, ::app::Fuse::Reactive::IObservable__typeof()))
    {
        if (__this->_subscription != NULL)
        {
            ::app::Uno::IDisposable::Dispose(::uPtr< ::uObject*>(__this->_subscription));
            __this->_subscription = NULL;
        }

        ::uObject* obs = ::uAs< ::uObject*>(value, ::app::Fuse::Reactive::IObservable__typeof());

        if (obs != NULL)
        {
            __this->_subscription = ::app::Fuse::Reactive::IObservable::Subscribe(::uPtr< ::uObject*>(obs), (::uObject*)__this);
        }
    }
    else
    {
        __this->PushValue(value);
    }
}

void DataBinding__Fuse_Elements_StretchMode__OnRooted(DataBinding__Fuse_Elements_StretchMode* __this, ::app::Fuse::Node* n)
{
    ::uPtr< ::app::Uno::UX::Property__Fuse_Elements_StretchMode*>(__this->Target())->add_ValueChanged(::uNewDelegateNonVirt(::app::Uno::UX::ValueChangedHandler__Fuse_Elements_StretchMode__typeof(), (const void*)DataBinding__Fuse_Elements_StretchMode__OnValueChanged, __this));
    ::app::Fuse::Reactive::Binding__OnRooted(__this, n);
}

void DataBinding__Fuse_Elements_StretchMode__OnUnrooted(DataBinding__Fuse_Elements_StretchMode* __this, ::app::Fuse::Node* n)
{
    ::app::Fuse::Scripting::NameRegistry__RemoveListener(NULL, (::uObject*)__this);
    ::uPtr< ::app::Uno::UX::Property__Fuse_Elements_StretchMode*>(__this->Target())->remove_ValueChanged(::uNewDelegateNonVirt(::app::Uno::UX::ValueChangedHandler__Fuse_Elements_StretchMode__typeof(), (const void*)DataBinding__Fuse_Elements_StretchMode__OnValueChanged, __this));

    if (__this->_subscription != NULL)
    {
        ::app::Uno::IDisposable::Dispose(::uPtr< ::uObject*>(__this->_subscription));
        __this->_subscription = NULL;
    }

    ::app::Fuse::Reactive::Binding__OnUnrooted(__this, n);
}

void DataBinding__Fuse_Elements_StretchMode__OnValueChanged(DataBinding__Fuse_Elements_StretchMode* __this, ::uObject* sender, ::app::Uno::UX::ValueChangedArgs__Fuse_Elements_StretchMode* args)
{
    if ((__this->_subscription != NULL) && (::uPtr< ::app::Uno::UX::ValueChangedArgs__Fuse_Elements_StretchMode*>(args)->Origin() != __this))
    {
        ::app::Fuse::Reactive::ISubscription::SetExclusive(::uPtr< ::uObject*>(__this->_subscription), ::uBox< int>(::app::Fuse::Elements::StretchMode__typeof(), ::uPtr< ::app::Uno::UX::ValueChangedArgs__Fuse_Elements_StretchMode*>(args)->Value()));
    }
}

void DataBinding__Fuse_Elements_StretchMode__PushValue(DataBinding__Fuse_Elements_StretchMode* __this, ::uObject* newValue)
{
    __this->_currentValue = newValue;

    if (::uIs(newValue, ::app::Fuse::Elements::StretchMode__typeof()))
    {
        ::app::Fuse::Scripting::NameRegistry__RemoveListener(NULL, (::uObject*)__this);
        ::uPtr< ::app::Uno::UX::Property__Fuse_Elements_StretchMode*>(__this->Target())->SetRestState(::uUnbox< int>(::app::Fuse::Elements::StretchMode__typeof(), newValue), (::uObject*)__this);
        return;
    }

    ::uString* name = ::uAs< ::uString*>(newValue, ::app::Uno::String__typeof());

    if (::app::Uno::String__op_Inequality(NULL, name, NULL) && (__this->Node() != NULL))
    {
        ::app::Fuse::Scripting::NameRegistry__AddListener(NULL, name, (::uObject*)__this);
        ::app::Fuse::Node* k = ::uPtr< ::app::Fuse::Node*>(__this->Node())->FindNodeByName(::uCast< ::uString*>(newValue, ::app::Uno::String__typeof()));

        if (::uIs(k, ::app::Fuse::Elements::StretchMode__typeof()))
        {
            ::uPtr< ::app::Uno::UX::Property__Fuse_Elements_StretchMode*>(__this->Target())->SetRestState(::uUnbox< int>(::app::Fuse::Elements::StretchMode__typeof(), (::uObject*)k), (::uObject*)__this);
            return;
        }
        else
        {
            ::uObject* candidate = ::uPtr< ::app::Fuse::Node*>(__this->Node())->FindObjectByName(::uCast< ::uString*>(newValue, ::app::Uno::String__typeof()), ::uNewDelegateNonVirt(::app::Uno::Predicate__object__typeof(), (const void*)DataBinding__Fuse_Elements_StretchMode__Acceptor, __this));

            if (::uIs(candidate, ::app::Fuse::Elements::StretchMode__typeof()))
            {
                ::uPtr< ::app::Uno::UX::Property__Fuse_Elements_StretchMode*>(__this->Target())->SetRestState(::uUnbox< int>(::app::Fuse::Elements::StretchMode__typeof(), candidate), (::uObject*)__this);
                return;
            }
        }
    }

    ::app::Fuse::Reactive::Marshal__ToType__Fuse_Elements_StretchMode(NULL, newValue, ::uNewDelegateNonVirt(::app::Uno::Action__Fuse_Elements_StretchMode__typeof(), (const void*)DataBinding__Fuse_Elements_StretchMode__SetValue, __this));
}

void DataBinding__Fuse_Elements_StretchMode__set_Target(DataBinding__Fuse_Elements_StretchMode* __this, ::app::Uno::UX::Property__Fuse_Elements_StretchMode* value)
{
    __this->_Target = value;
}

void DataBinding__Fuse_Elements_StretchMode__SetValue(DataBinding__Fuse_Elements_StretchMode* __this, int value)
{
    ::uPtr< ::app::Uno::UX::Property__Fuse_Elements_StretchMode*>(__this->Target())->SetRestState(value, (::uObject*)__this);
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Reactive\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

DataBinding__Fuse_Elements_StretchSizing__uType* DataBinding__Fuse_Elements_StretchSizing__typeof()
{
    static ::uStaticStrong<DataBinding__Fuse_Elements_StretchSizing__uType*> type;
    if (type != NULL) return type;

    type = (DataBinding__Fuse_Elements_StretchSizing__uType*)::uAllocClassType(sizeof(DataBinding__Fuse_Elements_StretchSizing__uType), "Fuse.Reactive.DataBinding<Fuse.Elements.StretchSizing>", false, 2, 3, 0);

    type->SetBaseType(::app::Fuse::Reactive::Binding__typeof());
    type->__fp_NewValue = (void(*)(::app::Fuse::Reactive::Binding*, ::uObject*))DataBinding__Fuse_Elements_StretchSizing__NewValue;
    type->__fp_OnRooted = (void(*)(::app::Fuse::Behavior*, ::app::Fuse::Node*))DataBinding__Fuse_Elements_StretchSizing__OnRooted;
    type->__fp_OnUnrooted = (void(*)(::app::Fuse::Behavior*, ::app::Fuse::Node*))DataBinding__Fuse_Elements_StretchSizing__OnUnrooted;
    type->__interface_0.__fp_OnSet = (void(*)(void*, ::uObject*))DataBinding__Fuse_Elements_StretchSizing__Fuse_Reactive_IObserver_OnSet;
    type->__interface_0.__fp_OnAdd = (void(*)(void*, ::uObject*))DataBinding__Fuse_Elements_StretchSizing__Fuse_Reactive_IObserver_OnAdd;
    type->__interface_0.__fp_OnNewAt = (void(*)(void*, int, ::uObject*))DataBinding__Fuse_Elements_StretchSizing__Fuse_Reactive_IObserver_OnNewAt;
    type->__interface_0.__fp_OnFailed = (void(*)(void*, ::uString*))DataBinding__Fuse_Elements_StretchSizing__Fuse_Reactive_IObserver_OnFailed;
    type->__interface_0.__fp_OnNewAll = (void(*)(void*, int))DataBinding__Fuse_Elements_StretchSizing__Fuse_Reactive_IObserver_OnNewAll;
    type->__interface_0.__fp_OnRemove = (void(*)(void*, ::uObject*, int))DataBinding__Fuse_Elements_StretchSizing__Fuse_Reactive_IObserver_OnRemove;
    type->__interface_1.__fp_OnNameChanged = (void(*)(void*, ::uObject*, ::uString*))DataBinding__Fuse_Elements_StretchSizing__Fuse_Scripting_INameListener_OnNameChanged;

    type->SetInterfaces(
        ::app::Fuse::Reactive::IObserver__typeof(), offsetof(DataBinding__Fuse_Elements_StretchSizing__uType, __interface_0),
        ::app::Fuse::Scripting::INameListener__typeof(), offsetof(DataBinding__Fuse_Elements_StretchSizing__uType, __interface_1));

    type->SetStrongRefs(
        "_currentValue", offsetof(DataBinding__Fuse_Elements_StretchSizing, _currentValue),
        "_subscription", offsetof(DataBinding__Fuse_Elements_StretchSizing, _subscription),
        "_Target", offsetof(DataBinding__Fuse_Elements_StretchSizing, _Target));

    type->SetFields(2,
        ::uNewField("_currentValue", NULL, offsetof(DataBinding__Fuse_Elements_StretchSizing, _currentValue), ::uObject__typeof()),
        ::uNewField("_subscription", NULL, offsetof(DataBinding__Fuse_Elements_StretchSizing, _subscription), ::app::Fuse::Reactive::ISubscription__typeof()));

    type->SetFunctions(3,
        ::uNewFunction("get_Target", DataBinding__Fuse_Elements_StretchSizing__get_Target, 0, false, ::app::Uno::UX::Property__Fuse_Elements_StretchSizing__typeof()),
        ::uNewFunction(".ctor", DataBinding__Fuse_Elements_StretchSizing__New_1, 0, true, DataBinding__Fuse_Elements_StretchSizing__typeof(), ::app::Uno::UX::Property__Fuse_Elements_StretchSizing__typeof(), ::app::Uno::String__typeof()),
        ::uNewFunctionVoid("set_Target", DataBinding__Fuse_Elements_StretchSizing__set_Target, 0, false, ::app::Uno::UX::Property__Fuse_Elements_StretchSizing__typeof()));

    ::uRegisterType(type);
    return type;
}

void DataBinding__Fuse_Elements_StretchSizing___ObjInit_2(DataBinding__Fuse_Elements_StretchSizing* __this, ::app::Uno::UX::Property__Fuse_Elements_StretchSizing* target, ::uString* key)
{
    ::app::Fuse::Reactive::Binding___ObjInit_1(__this, key);
    __this->Target(target);
}

bool DataBinding__Fuse_Elements_StretchSizing__Acceptor(DataBinding__Fuse_Elements_StretchSizing* __this, ::uObject* obj)
{
    return ::uIs(obj, ::app::Fuse::Elements::StretchSizing__typeof());
}

void DataBinding__Fuse_Elements_StretchSizing__Fuse_Reactive_IObserver_OnAdd(DataBinding__Fuse_Elements_StretchSizing* __this, ::uObject* addedValue)
{
    U_THROW(::app::Uno::Exception__New_2(NULL, ::uGetConstString("Not handled: OnAdd")));
}

void DataBinding__Fuse_Elements_StretchSizing__Fuse_Reactive_IObserver_OnFailed(DataBinding__Fuse_Elements_StretchSizing* __this, ::uString* message)
{
    U_THROW(::app::Uno::Exception__New_2(NULL, ::uGetConstString("Not handled: OnFailed")));
}

void DataBinding__Fuse_Elements_StretchSizing__Fuse_Reactive_IObserver_OnNewAll(DataBinding__Fuse_Elements_StretchSizing* __this, int length)
{
    if (length > 0)
    {
        U_THROW(::app::Uno::Exception__New_2(NULL, ::uGetConstString("Not handled: OnNewAll")));
    }
}

void DataBinding__Fuse_Elements_StretchSizing__Fuse_Reactive_IObserver_OnNewAt(DataBinding__Fuse_Elements_StretchSizing* __this, int index, ::uObject* value)
{
    U_THROW(::app::Uno::Exception__New_2(NULL, ::uGetConstString("Not handled: OnNewAt")));
}

void DataBinding__Fuse_Elements_StretchSizing__Fuse_Reactive_IObserver_OnRemove(DataBinding__Fuse_Elements_StretchSizing* __this, ::uObject* value, int index)
{
    U_THROW(::app::Uno::Exception__New_2(NULL, ::uGetConstString("Not handled: OnRemoveAt")));
}

void DataBinding__Fuse_Elements_StretchSizing__Fuse_Reactive_IObserver_OnSet(DataBinding__Fuse_Elements_StretchSizing* __this, ::uObject* newValue)
{
    __this->PushValue(newValue);
}

void DataBinding__Fuse_Elements_StretchSizing__Fuse_Scripting_INameListener_OnNameChanged(DataBinding__Fuse_Elements_StretchSizing* __this, ::uObject* obj, ::uString* name)
{
    __this->PushValue(__this->_currentValue);
}

::app::Uno::UX::Property__Fuse_Elements_StretchSizing* DataBinding__Fuse_Elements_StretchSizing__get_Target(DataBinding__Fuse_Elements_StretchSizing* __this)
{
    return __this->_Target;
}

DataBinding__Fuse_Elements_StretchSizing* DataBinding__Fuse_Elements_StretchSizing__New_1(::uStatic* __this, ::app::Uno::UX::Property__Fuse_Elements_StretchSizing* target, ::uString* key)
{
    DataBinding__Fuse_Elements_StretchSizing* inst = (DataBinding__Fuse_Elements_StretchSizing*)::uAllocObject(sizeof(DataBinding__Fuse_Elements_StretchSizing), DataBinding__Fuse_Elements_StretchSizing__typeof());
    inst->_ObjInit_2(target, key);
    return inst;
}

void DataBinding__Fuse_Elements_StretchSizing__NewValue(DataBinding__Fuse_Elements_StretchSizing* __this, ::uObject* value)
{
    if (::uIs(value, ::app::Fuse::Elements::StretchSizing__typeof()))
    {
        __this->PushValue(value);
    }
    else if (::uIs(value, ::app::Fuse::Reactive::IObservable__typeof()))
    {
        if (__this->_subscription != NULL)
        {
            ::app::Uno::IDisposable::Dispose(::uPtr< ::uObject*>(__this->_subscription));
            __this->_subscription = NULL;
        }

        ::uObject* obs = ::uAs< ::uObject*>(value, ::app::Fuse::Reactive::IObservable__typeof());

        if (obs != NULL)
        {
            __this->_subscription = ::app::Fuse::Reactive::IObservable::Subscribe(::uPtr< ::uObject*>(obs), (::uObject*)__this);
        }
    }
    else
    {
        __this->PushValue(value);
    }
}

void DataBinding__Fuse_Elements_StretchSizing__OnRooted(DataBinding__Fuse_Elements_StretchSizing* __this, ::app::Fuse::Node* n)
{
    ::uPtr< ::app::Uno::UX::Property__Fuse_Elements_StretchSizing*>(__this->Target())->add_ValueChanged(::uNewDelegateNonVirt(::app::Uno::UX::ValueChangedHandler__Fuse_Elements_StretchSizing__typeof(), (const void*)DataBinding__Fuse_Elements_StretchSizing__OnValueChanged, __this));
    ::app::Fuse::Reactive::Binding__OnRooted(__this, n);
}

void DataBinding__Fuse_Elements_StretchSizing__OnUnrooted(DataBinding__Fuse_Elements_StretchSizing* __this, ::app::Fuse::Node* n)
{
    ::app::Fuse::Scripting::NameRegistry__RemoveListener(NULL, (::uObject*)__this);
    ::uPtr< ::app::Uno::UX::Property__Fuse_Elements_StretchSizing*>(__this->Target())->remove_ValueChanged(::uNewDelegateNonVirt(::app::Uno::UX::ValueChangedHandler__Fuse_Elements_StretchSizing__typeof(), (const void*)DataBinding__Fuse_Elements_StretchSizing__OnValueChanged, __this));

    if (__this->_subscription != NULL)
    {
        ::app::Uno::IDisposable::Dispose(::uPtr< ::uObject*>(__this->_subscription));
        __this->_subscription = NULL;
    }

    ::app::Fuse::Reactive::Binding__OnUnrooted(__this, n);
}

void DataBinding__Fuse_Elements_StretchSizing__OnValueChanged(DataBinding__Fuse_Elements_StretchSizing* __this, ::uObject* sender, ::app::Uno::UX::ValueChangedArgs__Fuse_Elements_StretchSizing* args)
{
    if ((__this->_subscription != NULL) && (::uPtr< ::app::Uno::UX::ValueChangedArgs__Fuse_Elements_StretchSizing*>(args)->Origin() != __this))
    {
        ::app::Fuse::Reactive::ISubscription::SetExclusive(::uPtr< ::uObject*>(__this->_subscription), ::uBox< int>(::app::Fuse::Elements::StretchSizing__typeof(), ::uPtr< ::app::Uno::UX::ValueChangedArgs__Fuse_Elements_StretchSizing*>(args)->Value()));
    }
}

void DataBinding__Fuse_Elements_StretchSizing__PushValue(DataBinding__Fuse_Elements_StretchSizing* __this, ::uObject* newValue)
{
    __this->_currentValue = newValue;

    if (::uIs(newValue, ::app::Fuse::Elements::StretchSizing__typeof()))
    {
        ::app::Fuse::Scripting::NameRegistry__RemoveListener(NULL, (::uObject*)__this);
        ::uPtr< ::app::Uno::UX::Property__Fuse_Elements_StretchSizing*>(__this->Target())->SetRestState(::uUnbox< int>(::app::Fuse::Elements::StretchSizing__typeof(), newValue), (::uObject*)__this);
        return;
    }

    ::uString* name = ::uAs< ::uString*>(newValue, ::app::Uno::String__typeof());

    if (::app::Uno::String__op_Inequality(NULL, name, NULL) && (__this->Node() != NULL))
    {
        ::app::Fuse::Scripting::NameRegistry__AddListener(NULL, name, (::uObject*)__this);
        ::app::Fuse::Node* k = ::uPtr< ::app::Fuse::Node*>(__this->Node())->FindNodeByName(::uCast< ::uString*>(newValue, ::app::Uno::String__typeof()));

        if (::uIs(k, ::app::Fuse::Elements::StretchSizing__typeof()))
        {
            ::uPtr< ::app::Uno::UX::Property__Fuse_Elements_StretchSizing*>(__this->Target())->SetRestState(::uUnbox< int>(::app::Fuse::Elements::StretchSizing__typeof(), (::uObject*)k), (::uObject*)__this);
            return;
        }
        else
        {
            ::uObject* candidate = ::uPtr< ::app::Fuse::Node*>(__this->Node())->FindObjectByName(::uCast< ::uString*>(newValue, ::app::Uno::String__typeof()), ::uNewDelegateNonVirt(::app::Uno::Predicate__object__typeof(), (const void*)DataBinding__Fuse_Elements_StretchSizing__Acceptor, __this));

            if (::uIs(candidate, ::app::Fuse::Elements::StretchSizing__typeof()))
            {
                ::uPtr< ::app::Uno::UX::Property__Fuse_Elements_StretchSizing*>(__this->Target())->SetRestState(::uUnbox< int>(::app::Fuse::Elements::StretchSizing__typeof(), candidate), (::uObject*)__this);
                return;
            }
        }
    }

    ::app::Fuse::Reactive::Marshal__ToType__Fuse_Elements_StretchSizing(NULL, newValue, ::uNewDelegateNonVirt(::app::Uno::Action__Fuse_Elements_StretchSizing__typeof(), (const void*)DataBinding__Fuse_Elements_StretchSizing__SetValue, __this));
}

void DataBinding__Fuse_Elements_StretchSizing__set_Target(DataBinding__Fuse_Elements_StretchSizing* __this, ::app::Uno::UX::Property__Fuse_Elements_StretchSizing* value)
{
    __this->_Target = value;
}

void DataBinding__Fuse_Elements_StretchSizing__SetValue(DataBinding__Fuse_Elements_StretchSizing* __this, int value)
{
    ::uPtr< ::app::Uno::UX::Property__Fuse_Elements_StretchSizing*>(__this->Target())->SetRestState(value, (::uObject*)__this);
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Reactive\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

DataBinding__Fuse_Elements_TextAlignment__uType* DataBinding__Fuse_Elements_TextAlignment__typeof()
{
    static ::uStaticStrong<DataBinding__Fuse_Elements_TextAlignment__uType*> type;
    if (type != NULL) return type;

    type = (DataBinding__Fuse_Elements_TextAlignment__uType*)::uAllocClassType(sizeof(DataBinding__Fuse_Elements_TextAlignment__uType), "Fuse.Reactive.DataBinding<Fuse.Elements.TextAlignment>", false, 2, 3, 0);

    type->SetBaseType(::app::Fuse::Reactive::Binding__typeof());
    type->__fp_NewValue = (void(*)(::app::Fuse::Reactive::Binding*, ::uObject*))DataBinding__Fuse_Elements_TextAlignment__NewValue;
    type->__fp_OnRooted = (void(*)(::app::Fuse::Behavior*, ::app::Fuse::Node*))DataBinding__Fuse_Elements_TextAlignment__OnRooted;
    type->__fp_OnUnrooted = (void(*)(::app::Fuse::Behavior*, ::app::Fuse::Node*))DataBinding__Fuse_Elements_TextAlignment__OnUnrooted;
    type->__interface_0.__fp_OnSet = (void(*)(void*, ::uObject*))DataBinding__Fuse_Elements_TextAlignment__Fuse_Reactive_IObserver_OnSet;
    type->__interface_0.__fp_OnAdd = (void(*)(void*, ::uObject*))DataBinding__Fuse_Elements_TextAlignment__Fuse_Reactive_IObserver_OnAdd;
    type->__interface_0.__fp_OnNewAt = (void(*)(void*, int, ::uObject*))DataBinding__Fuse_Elements_TextAlignment__Fuse_Reactive_IObserver_OnNewAt;
    type->__interface_0.__fp_OnFailed = (void(*)(void*, ::uString*))DataBinding__Fuse_Elements_TextAlignment__Fuse_Reactive_IObserver_OnFailed;
    type->__interface_0.__fp_OnNewAll = (void(*)(void*, int))DataBinding__Fuse_Elements_TextAlignment__Fuse_Reactive_IObserver_OnNewAll;
    type->__interface_0.__fp_OnRemove = (void(*)(void*, ::uObject*, int))DataBinding__Fuse_Elements_TextAlignment__Fuse_Reactive_IObserver_OnRemove;
    type->__interface_1.__fp_OnNameChanged = (void(*)(void*, ::uObject*, ::uString*))DataBinding__Fuse_Elements_TextAlignment__Fuse_Scripting_INameListener_OnNameChanged;

    type->SetInterfaces(
        ::app::Fuse::Reactive::IObserver__typeof(), offsetof(DataBinding__Fuse_Elements_TextAlignment__uType, __interface_0),
        ::app::Fuse::Scripting::INameListener__typeof(), offsetof(DataBinding__Fuse_Elements_TextAlignment__uType, __interface_1));

    type->SetStrongRefs(
        "_currentValue", offsetof(DataBinding__Fuse_Elements_TextAlignment, _currentValue),
        "_subscription", offsetof(DataBinding__Fuse_Elements_TextAlignment, _subscription),
        "_Target", offsetof(DataBinding__Fuse_Elements_TextAlignment, _Target));

    type->SetFields(2,
        ::uNewField("_currentValue", NULL, offsetof(DataBinding__Fuse_Elements_TextAlignment, _currentValue), ::uObject__typeof()),
        ::uNewField("_subscription", NULL, offsetof(DataBinding__Fuse_Elements_TextAlignment, _subscription), ::app::Fuse::Reactive::ISubscription__typeof()));

    type->SetFunctions(3,
        ::uNewFunction("get_Target", DataBinding__Fuse_Elements_TextAlignment__get_Target, 0, false, ::app::Uno::UX::Property__Fuse_Elements_TextAlignment__typeof()),
        ::uNewFunction(".ctor", DataBinding__Fuse_Elements_TextAlignment__New_1, 0, true, DataBinding__Fuse_Elements_TextAlignment__typeof(), ::app::Uno::UX::Property__Fuse_Elements_TextAlignment__typeof(), ::app::Uno::String__typeof()),
        ::uNewFunctionVoid("set_Target", DataBinding__Fuse_Elements_TextAlignment__set_Target, 0, false, ::app::Uno::UX::Property__Fuse_Elements_TextAlignment__typeof()));

    ::uRegisterType(type);
    return type;
}

void DataBinding__Fuse_Elements_TextAlignment___ObjInit_2(DataBinding__Fuse_Elements_TextAlignment* __this, ::app::Uno::UX::Property__Fuse_Elements_TextAlignment* target, ::uString* key)
{
    ::app::Fuse::Reactive::Binding___ObjInit_1(__this, key);
    __this->Target(target);
}

bool DataBinding__Fuse_Elements_TextAlignment__Acceptor(DataBinding__Fuse_Elements_TextAlignment* __this, ::uObject* obj)
{
    return ::uIs(obj, ::app::Fuse::Elements::TextAlignment__typeof());
}

void DataBinding__Fuse_Elements_TextAlignment__Fuse_Reactive_IObserver_OnAdd(DataBinding__Fuse_Elements_TextAlignment* __this, ::uObject* addedValue)
{
    U_THROW(::app::Uno::Exception__New_2(NULL, ::uGetConstString("Not handled: OnAdd")));
}

void DataBinding__Fuse_Elements_TextAlignment__Fuse_Reactive_IObserver_OnFailed(DataBinding__Fuse_Elements_TextAlignment* __this, ::uString* message)
{
    U_THROW(::app::Uno::Exception__New_2(NULL, ::uGetConstString("Not handled: OnFailed")));
}

void DataBinding__Fuse_Elements_TextAlignment__Fuse_Reactive_IObserver_OnNewAll(DataBinding__Fuse_Elements_TextAlignment* __this, int length)
{
    if (length > 0)
    {
        U_THROW(::app::Uno::Exception__New_2(NULL, ::uGetConstString("Not handled: OnNewAll")));
    }
}

void DataBinding__Fuse_Elements_TextAlignment__Fuse_Reactive_IObserver_OnNewAt(DataBinding__Fuse_Elements_TextAlignment* __this, int index, ::uObject* value)
{
    U_THROW(::app::Uno::Exception__New_2(NULL, ::uGetConstString("Not handled: OnNewAt")));
}

void DataBinding__Fuse_Elements_TextAlignment__Fuse_Reactive_IObserver_OnRemove(DataBinding__Fuse_Elements_TextAlignment* __this, ::uObject* value, int index)
{
    U_THROW(::app::Uno::Exception__New_2(NULL, ::uGetConstString("Not handled: OnRemoveAt")));
}

void DataBinding__Fuse_Elements_TextAlignment__Fuse_Reactive_IObserver_OnSet(DataBinding__Fuse_Elements_TextAlignment* __this, ::uObject* newValue)
{
    __this->PushValue(newValue);
}

void DataBinding__Fuse_Elements_TextAlignment__Fuse_Scripting_INameListener_OnNameChanged(DataBinding__Fuse_Elements_TextAlignment* __this, ::uObject* obj, ::uString* name)
{
    __this->PushValue(__this->_currentValue);
}

::app::Uno::UX::Property__Fuse_Elements_TextAlignment* DataBinding__Fuse_Elements_TextAlignment__get_Target(DataBinding__Fuse_Elements_TextAlignment* __this)
{
    return __this->_Target;
}

DataBinding__Fuse_Elements_TextAlignment* DataBinding__Fuse_Elements_TextAlignment__New_1(::uStatic* __this, ::app::Uno::UX::Property__Fuse_Elements_TextAlignment* target, ::uString* key)
{
    DataBinding__Fuse_Elements_TextAlignment* inst = (DataBinding__Fuse_Elements_TextAlignment*)::uAllocObject(sizeof(DataBinding__Fuse_Elements_TextAlignment), DataBinding__Fuse_Elements_TextAlignment__typeof());
    inst->_ObjInit_2(target, key);
    return inst;
}

void DataBinding__Fuse_Elements_TextAlignment__NewValue(DataBinding__Fuse_Elements_TextAlignment* __this, ::uObject* value)
{
    if (::uIs(value, ::app::Fuse::Elements::TextAlignment__typeof()))
    {
        __this->PushValue(value);
    }
    else if (::uIs(value, ::app::Fuse::Reactive::IObservable__typeof()))
    {
        if (__this->_subscription != NULL)
        {
            ::app::Uno::IDisposable::Dispose(::uPtr< ::uObject*>(__this->_subscription));
            __this->_subscription = NULL;
        }

        ::uObject* obs = ::uAs< ::uObject*>(value, ::app::Fuse::Reactive::IObservable__typeof());

        if (obs != NULL)
        {
            __this->_subscription = ::app::Fuse::Reactive::IObservable::Subscribe(::uPtr< ::uObject*>(obs), (::uObject*)__this);
        }
    }
    else
    {
        __this->PushValue(value);
    }
}

void DataBinding__Fuse_Elements_TextAlignment__OnRooted(DataBinding__Fuse_Elements_TextAlignment* __this, ::app::Fuse::Node* n)
{
    ::uPtr< ::app::Uno::UX::Property__Fuse_Elements_TextAlignment*>(__this->Target())->add_ValueChanged(::uNewDelegateNonVirt(::app::Uno::UX::ValueChangedHandler__Fuse_Elements_TextAlignment__typeof(), (const void*)DataBinding__Fuse_Elements_TextAlignment__OnValueChanged, __this));
    ::app::Fuse::Reactive::Binding__OnRooted(__this, n);
}

void DataBinding__Fuse_Elements_TextAlignment__OnUnrooted(DataBinding__Fuse_Elements_TextAlignment* __this, ::app::Fuse::Node* n)
{
    ::app::Fuse::Scripting::NameRegistry__RemoveListener(NULL, (::uObject*)__this);
    ::uPtr< ::app::Uno::UX::Property__Fuse_Elements_TextAlignment*>(__this->Target())->remove_ValueChanged(::uNewDelegateNonVirt(::app::Uno::UX::ValueChangedHandler__Fuse_Elements_TextAlignment__typeof(), (const void*)DataBinding__Fuse_Elements_TextAlignment__OnValueChanged, __this));

    if (__this->_subscription != NULL)
    {
        ::app::Uno::IDisposable::Dispose(::uPtr< ::uObject*>(__this->_subscription));
        __this->_subscription = NULL;
    }

    ::app::Fuse::Reactive::Binding__OnUnrooted(__this, n);
}

void DataBinding__Fuse_Elements_TextAlignment__OnValueChanged(DataBinding__Fuse_Elements_TextAlignment* __this, ::uObject* sender, ::app::Uno::UX::ValueChangedArgs__Fuse_Elements_TextAlignment* args)
{
    if ((__this->_subscription != NULL) && (::uPtr< ::app::Uno::UX::ValueChangedArgs__Fuse_Elements_TextAlignment*>(args)->Origin() != __this))
    {
        ::app::Fuse::Reactive::ISubscription::SetExclusive(::uPtr< ::uObject*>(__this->_subscription), ::uBox< int>(::app::Fuse::Elements::TextAlignment__typeof(), ::uPtr< ::app::Uno::UX::ValueChangedArgs__Fuse_Elements_TextAlignment*>(args)->Value()));
    }
}

void DataBinding__Fuse_Elements_TextAlignment__PushValue(DataBinding__Fuse_Elements_TextAlignment* __this, ::uObject* newValue)
{
    __this->_currentValue = newValue;

    if (::uIs(newValue, ::app::Fuse::Elements::TextAlignment__typeof()))
    {
        ::app::Fuse::Scripting::NameRegistry__RemoveListener(NULL, (::uObject*)__this);
        ::uPtr< ::app::Uno::UX::Property__Fuse_Elements_TextAlignment*>(__this->Target())->SetRestState(::uUnbox< int>(::app::Fuse::Elements::TextAlignment__typeof(), newValue), (::uObject*)__this);
        return;
    }

    ::uString* name = ::uAs< ::uString*>(newValue, ::app::Uno::String__typeof());

    if (::app::Uno::String__op_Inequality(NULL, name, NULL) && (__this->Node() != NULL))
    {
        ::app::Fuse::Scripting::NameRegistry__AddListener(NULL, name, (::uObject*)__this);
        ::app::Fuse::Node* k = ::uPtr< ::app::Fuse::Node*>(__this->Node())->FindNodeByName(::uCast< ::uString*>(newValue, ::app::Uno::String__typeof()));

        if (::uIs(k, ::app::Fuse::Elements::TextAlignment__typeof()))
        {
            ::uPtr< ::app::Uno::UX::Property__Fuse_Elements_TextAlignment*>(__this->Target())->SetRestState(::uUnbox< int>(::app::Fuse::Elements::TextAlignment__typeof(), (::uObject*)k), (::uObject*)__this);
            return;
        }
        else
        {
            ::uObject* candidate = ::uPtr< ::app::Fuse::Node*>(__this->Node())->FindObjectByName(::uCast< ::uString*>(newValue, ::app::Uno::String__typeof()), ::uNewDelegateNonVirt(::app::Uno::Predicate__object__typeof(), (const void*)DataBinding__Fuse_Elements_TextAlignment__Acceptor, __this));

            if (::uIs(candidate, ::app::Fuse::Elements::TextAlignment__typeof()))
            {
                ::uPtr< ::app::Uno::UX::Property__Fuse_Elements_TextAlignment*>(__this->Target())->SetRestState(::uUnbox< int>(::app::Fuse::Elements::TextAlignment__typeof(), candidate), (::uObject*)__this);
                return;
            }
        }
    }

    ::app::Fuse::Reactive::Marshal__ToType__Fuse_Elements_TextAlignment(NULL, newValue, ::uNewDelegateNonVirt(::app::Uno::Action__Fuse_Elements_TextAlignment__typeof(), (const void*)DataBinding__Fuse_Elements_TextAlignment__SetValue, __this));
}

void DataBinding__Fuse_Elements_TextAlignment__set_Target(DataBinding__Fuse_Elements_TextAlignment* __this, ::app::Uno::UX::Property__Fuse_Elements_TextAlignment* value)
{
    __this->_Target = value;
}

void DataBinding__Fuse_Elements_TextAlignment__SetValue(DataBinding__Fuse_Elements_TextAlignment* __this, int value)
{
    ::uPtr< ::app::Uno::UX::Property__Fuse_Elements_TextAlignment*>(__this->Target())->SetRestState(value, (::uObject*)__this);
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Reactive\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

DataBinding__Fuse_Elements_TextWrapping__uType* DataBinding__Fuse_Elements_TextWrapping__typeof()
{
    static ::uStaticStrong<DataBinding__Fuse_Elements_TextWrapping__uType*> type;
    if (type != NULL) return type;

    type = (DataBinding__Fuse_Elements_TextWrapping__uType*)::uAllocClassType(sizeof(DataBinding__Fuse_Elements_TextWrapping__uType), "Fuse.Reactive.DataBinding<Fuse.Elements.TextWrapping>", false, 2, 3, 0);

    type->SetBaseType(::app::Fuse::Reactive::Binding__typeof());
    type->__fp_NewValue = (void(*)(::app::Fuse::Reactive::Binding*, ::uObject*))DataBinding__Fuse_Elements_TextWrapping__NewValue;
    type->__fp_OnRooted = (void(*)(::app::Fuse::Behavior*, ::app::Fuse::Node*))DataBinding__Fuse_Elements_TextWrapping__OnRooted;
    type->__fp_OnUnrooted = (void(*)(::app::Fuse::Behavior*, ::app::Fuse::Node*))DataBinding__Fuse_Elements_TextWrapping__OnUnrooted;
    type->__interface_0.__fp_OnSet = (void(*)(void*, ::uObject*))DataBinding__Fuse_Elements_TextWrapping__Fuse_Reactive_IObserver_OnSet;
    type->__interface_0.__fp_OnAdd = (void(*)(void*, ::uObject*))DataBinding__Fuse_Elements_TextWrapping__Fuse_Reactive_IObserver_OnAdd;
    type->__interface_0.__fp_OnNewAt = (void(*)(void*, int, ::uObject*))DataBinding__Fuse_Elements_TextWrapping__Fuse_Reactive_IObserver_OnNewAt;
    type->__interface_0.__fp_OnFailed = (void(*)(void*, ::uString*))DataBinding__Fuse_Elements_TextWrapping__Fuse_Reactive_IObserver_OnFailed;
    type->__interface_0.__fp_OnNewAll = (void(*)(void*, int))DataBinding__Fuse_Elements_TextWrapping__Fuse_Reactive_IObserver_OnNewAll;
    type->__interface_0.__fp_OnRemove = (void(*)(void*, ::uObject*, int))DataBinding__Fuse_Elements_TextWrapping__Fuse_Reactive_IObserver_OnRemove;
    type->__interface_1.__fp_OnNameChanged = (void(*)(void*, ::uObject*, ::uString*))DataBinding__Fuse_Elements_TextWrapping__Fuse_Scripting_INameListener_OnNameChanged;

    type->SetInterfaces(
        ::app::Fuse::Reactive::IObserver__typeof(), offsetof(DataBinding__Fuse_Elements_TextWrapping__uType, __interface_0),
        ::app::Fuse::Scripting::INameListener__typeof(), offsetof(DataBinding__Fuse_Elements_TextWrapping__uType, __interface_1));

    type->SetStrongRefs(
        "_currentValue", offsetof(DataBinding__Fuse_Elements_TextWrapping, _currentValue),
        "_subscription", offsetof(DataBinding__Fuse_Elements_TextWrapping, _subscription),
        "_Target", offsetof(DataBinding__Fuse_Elements_TextWrapping, _Target));

    type->SetFields(2,
        ::uNewField("_currentValue", NULL, offsetof(DataBinding__Fuse_Elements_TextWrapping, _currentValue), ::uObject__typeof()),
        ::uNewField("_subscription", NULL, offsetof(DataBinding__Fuse_Elements_TextWrapping, _subscription), ::app::Fuse::Reactive::ISubscription__typeof()));

    type->SetFunctions(3,
        ::uNewFunction("get_Target", DataBinding__Fuse_Elements_TextWrapping__get_Target, 0, false, ::app::Uno::UX::Property__Fuse_Elements_TextWrapping__typeof()),
        ::uNewFunction(".ctor", DataBinding__Fuse_Elements_TextWrapping__New_1, 0, true, DataBinding__Fuse_Elements_TextWrapping__typeof(), ::app::Uno::UX::Property__Fuse_Elements_TextWrapping__typeof(), ::app::Uno::String__typeof()),
        ::uNewFunctionVoid("set_Target", DataBinding__Fuse_Elements_TextWrapping__set_Target, 0, false, ::app::Uno::UX::Property__Fuse_Elements_TextWrapping__typeof()));

    ::uRegisterType(type);
    return type;
}

void DataBinding__Fuse_Elements_TextWrapping___ObjInit_2(DataBinding__Fuse_Elements_TextWrapping* __this, ::app::Uno::UX::Property__Fuse_Elements_TextWrapping* target, ::uString* key)
{
    ::app::Fuse::Reactive::Binding___ObjInit_1(__this, key);
    __this->Target(target);
}

bool DataBinding__Fuse_Elements_TextWrapping__Acceptor(DataBinding__Fuse_Elements_TextWrapping* __this, ::uObject* obj)
{
    return ::uIs(obj, ::app::Fuse::Elements::TextWrapping__typeof());
}

void DataBinding__Fuse_Elements_TextWrapping__Fuse_Reactive_IObserver_OnAdd(DataBinding__Fuse_Elements_TextWrapping* __this, ::uObject* addedValue)
{
    U_THROW(::app::Uno::Exception__New_2(NULL, ::uGetConstString("Not handled: OnAdd")));
}

void DataBinding__Fuse_Elements_TextWrapping__Fuse_Reactive_IObserver_OnFailed(DataBinding__Fuse_Elements_TextWrapping* __this, ::uString* message)
{
    U_THROW(::app::Uno::Exception__New_2(NULL, ::uGetConstString("Not handled: OnFailed")));
}

void DataBinding__Fuse_Elements_TextWrapping__Fuse_Reactive_IObserver_OnNewAll(DataBinding__Fuse_Elements_TextWrapping* __this, int length)
{
    if (length > 0)
    {
        U_THROW(::app::Uno::Exception__New_2(NULL, ::uGetConstString("Not handled: OnNewAll")));
    }
}

void DataBinding__Fuse_Elements_TextWrapping__Fuse_Reactive_IObserver_OnNewAt(DataBinding__Fuse_Elements_TextWrapping* __this, int index, ::uObject* value)
{
    U_THROW(::app::Uno::Exception__New_2(NULL, ::uGetConstString("Not handled: OnNewAt")));
}

void DataBinding__Fuse_Elements_TextWrapping__Fuse_Reactive_IObserver_OnRemove(DataBinding__Fuse_Elements_TextWrapping* __this, ::uObject* value, int index)
{
    U_THROW(::app::Uno::Exception__New_2(NULL, ::uGetConstString("Not handled: OnRemoveAt")));
}

void DataBinding__Fuse_Elements_TextWrapping__Fuse_Reactive_IObserver_OnSet(DataBinding__Fuse_Elements_TextWrapping* __this, ::uObject* newValue)
{
    __this->PushValue(newValue);
}

void DataBinding__Fuse_Elements_TextWrapping__Fuse_Scripting_INameListener_OnNameChanged(DataBinding__Fuse_Elements_TextWrapping* __this, ::uObject* obj, ::uString* name)
{
    __this->PushValue(__this->_currentValue);
}

::app::Uno::UX::Property__Fuse_Elements_TextWrapping* DataBinding__Fuse_Elements_TextWrapping__get_Target(DataBinding__Fuse_Elements_TextWrapping* __this)
{
    return __this->_Target;
}

DataBinding__Fuse_Elements_TextWrapping* DataBinding__Fuse_Elements_TextWrapping__New_1(::uStatic* __this, ::app::Uno::UX::Property__Fuse_Elements_TextWrapping* target, ::uString* key)
{
    DataBinding__Fuse_Elements_TextWrapping* inst = (DataBinding__Fuse_Elements_TextWrapping*)::uAllocObject(sizeof(DataBinding__Fuse_Elements_TextWrapping), DataBinding__Fuse_Elements_TextWrapping__typeof());
    inst->_ObjInit_2(target, key);
    return inst;
}

void DataBinding__Fuse_Elements_TextWrapping__NewValue(DataBinding__Fuse_Elements_TextWrapping* __this, ::uObject* value)
{
    if (::uIs(value, ::app::Fuse::Elements::TextWrapping__typeof()))
    {
        __this->PushValue(value);
    }
    else if (::uIs(value, ::app::Fuse::Reactive::IObservable__typeof()))
    {
        if (__this->_subscription != NULL)
        {
            ::app::Uno::IDisposable::Dispose(::uPtr< ::uObject*>(__this->_subscription));
            __this->_subscription = NULL;
        }

        ::uObject* obs = ::uAs< ::uObject*>(value, ::app::Fuse::Reactive::IObservable__typeof());

        if (obs != NULL)
        {
            __this->_subscription = ::app::Fuse::Reactive::IObservable::Subscribe(::uPtr< ::uObject*>(obs), (::uObject*)__this);
        }
    }
    else
    {
        __this->PushValue(value);
    }
}

void DataBinding__Fuse_Elements_TextWrapping__OnRooted(DataBinding__Fuse_Elements_TextWrapping* __this, ::app::Fuse::Node* n)
{
    ::uPtr< ::app::Uno::UX::Property__Fuse_Elements_TextWrapping*>(__this->Target())->add_ValueChanged(::uNewDelegateNonVirt(::app::Uno::UX::ValueChangedHandler__Fuse_Elements_TextWrapping__typeof(), (const void*)DataBinding__Fuse_Elements_TextWrapping__OnValueChanged, __this));
    ::app::Fuse::Reactive::Binding__OnRooted(__this, n);
}

void DataBinding__Fuse_Elements_TextWrapping__OnUnrooted(DataBinding__Fuse_Elements_TextWrapping* __this, ::app::Fuse::Node* n)
{
    ::app::Fuse::Scripting::NameRegistry__RemoveListener(NULL, (::uObject*)__this);
    ::uPtr< ::app::Uno::UX::Property__Fuse_Elements_TextWrapping*>(__this->Target())->remove_ValueChanged(::uNewDelegateNonVirt(::app::Uno::UX::ValueChangedHandler__Fuse_Elements_TextWrapping__typeof(), (const void*)DataBinding__Fuse_Elements_TextWrapping__OnValueChanged, __this));

    if (__this->_subscription != NULL)
    {
        ::app::Uno::IDisposable::Dispose(::uPtr< ::uObject*>(__this->_subscription));
        __this->_subscription = NULL;
    }

    ::app::Fuse::Reactive::Binding__OnUnrooted(__this, n);
}

void DataBinding__Fuse_Elements_TextWrapping__OnValueChanged(DataBinding__Fuse_Elements_TextWrapping* __this, ::uObject* sender, ::app::Uno::UX::ValueChangedArgs__Fuse_Elements_TextWrapping* args)
{
    if ((__this->_subscription != NULL) && (::uPtr< ::app::Uno::UX::ValueChangedArgs__Fuse_Elements_TextWrapping*>(args)->Origin() != __this))
    {
        ::app::Fuse::Reactive::ISubscription::SetExclusive(::uPtr< ::uObject*>(__this->_subscription), ::uBox< int>(::app::Fuse::Elements::TextWrapping__typeof(), ::uPtr< ::app::Uno::UX::ValueChangedArgs__Fuse_Elements_TextWrapping*>(args)->Value()));
    }
}

void DataBinding__Fuse_Elements_TextWrapping__PushValue(DataBinding__Fuse_Elements_TextWrapping* __this, ::uObject* newValue)
{
    __this->_currentValue = newValue;

    if (::uIs(newValue, ::app::Fuse::Elements::TextWrapping__typeof()))
    {
        ::app::Fuse::Scripting::NameRegistry__RemoveListener(NULL, (::uObject*)__this);
        ::uPtr< ::app::Uno::UX::Property__Fuse_Elements_TextWrapping*>(__this->Target())->SetRestState(::uUnbox< int>(::app::Fuse::Elements::TextWrapping__typeof(), newValue), (::uObject*)__this);
        return;
    }

    ::uString* name = ::uAs< ::uString*>(newValue, ::app::Uno::String__typeof());

    if (::app::Uno::String__op_Inequality(NULL, name, NULL) && (__this->Node() != NULL))
    {
        ::app::Fuse::Scripting::NameRegistry__AddListener(NULL, name, (::uObject*)__this);
        ::app::Fuse::Node* k = ::uPtr< ::app::Fuse::Node*>(__this->Node())->FindNodeByName(::uCast< ::uString*>(newValue, ::app::Uno::String__typeof()));

        if (::uIs(k, ::app::Fuse::Elements::TextWrapping__typeof()))
        {
            ::uPtr< ::app::Uno::UX::Property__Fuse_Elements_TextWrapping*>(__this->Target())->SetRestState(::uUnbox< int>(::app::Fuse::Elements::TextWrapping__typeof(), (::uObject*)k), (::uObject*)__this);
            return;
        }
        else
        {
            ::uObject* candidate = ::uPtr< ::app::Fuse::Node*>(__this->Node())->FindObjectByName(::uCast< ::uString*>(newValue, ::app::Uno::String__typeof()), ::uNewDelegateNonVirt(::app::Uno::Predicate__object__typeof(), (const void*)DataBinding__Fuse_Elements_TextWrapping__Acceptor, __this));

            if (::uIs(candidate, ::app::Fuse::Elements::TextWrapping__typeof()))
            {
                ::uPtr< ::app::Uno::UX::Property__Fuse_Elements_TextWrapping*>(__this->Target())->SetRestState(::uUnbox< int>(::app::Fuse::Elements::TextWrapping__typeof(), candidate), (::uObject*)__this);
                return;
            }
        }
    }

    ::app::Fuse::Reactive::Marshal__ToType__Fuse_Elements_TextWrapping(NULL, newValue, ::uNewDelegateNonVirt(::app::Uno::Action__Fuse_Elements_TextWrapping__typeof(), (const void*)DataBinding__Fuse_Elements_TextWrapping__SetValue, __this));
}

void DataBinding__Fuse_Elements_TextWrapping__set_Target(DataBinding__Fuse_Elements_TextWrapping* __this, ::app::Uno::UX::Property__Fuse_Elements_TextWrapping* value)
{
    __this->_Target = value;
}

void DataBinding__Fuse_Elements_TextWrapping__SetValue(DataBinding__Fuse_Elements_TextWrapping* __this, int value)
{
    ::uPtr< ::app::Uno::UX::Property__Fuse_Elements_TextWrapping*>(__this->Target())->SetRestState(value, (::uObject*)__this);
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Reactive\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

DataBinding__Fuse_Elements_Visibility__uType* DataBinding__Fuse_Elements_Visibility__typeof()
{
    static ::uStaticStrong<DataBinding__Fuse_Elements_Visibility__uType*> type;
    if (type != NULL) return type;

    type = (DataBinding__Fuse_Elements_Visibility__uType*)::uAllocClassType(sizeof(DataBinding__Fuse_Elements_Visibility__uType), "Fuse.Reactive.DataBinding<Fuse.Elements.Visibility>", false, 2, 3, 0);

    type->SetBaseType(::app::Fuse::Reactive::Binding__typeof());
    type->__fp_NewValue = (void(*)(::app::Fuse::Reactive::Binding*, ::uObject*))DataBinding__Fuse_Elements_Visibility__NewValue;
    type->__fp_OnRooted = (void(*)(::app::Fuse::Behavior*, ::app::Fuse::Node*))DataBinding__Fuse_Elements_Visibility__OnRooted;
    type->__fp_OnUnrooted = (void(*)(::app::Fuse::Behavior*, ::app::Fuse::Node*))DataBinding__Fuse_Elements_Visibility__OnUnrooted;
    type->__interface_0.__fp_OnSet = (void(*)(void*, ::uObject*))DataBinding__Fuse_Elements_Visibility__Fuse_Reactive_IObserver_OnSet;
    type->__interface_0.__fp_OnAdd = (void(*)(void*, ::uObject*))DataBinding__Fuse_Elements_Visibility__Fuse_Reactive_IObserver_OnAdd;
    type->__interface_0.__fp_OnNewAt = (void(*)(void*, int, ::uObject*))DataBinding__Fuse_Elements_Visibility__Fuse_Reactive_IObserver_OnNewAt;
    type->__interface_0.__fp_OnFailed = (void(*)(void*, ::uString*))DataBinding__Fuse_Elements_Visibility__Fuse_Reactive_IObserver_OnFailed;
    type->__interface_0.__fp_OnNewAll = (void(*)(void*, int))DataBinding__Fuse_Elements_Visibility__Fuse_Reactive_IObserver_OnNewAll;
    type->__interface_0.__fp_OnRemove = (void(*)(void*, ::uObject*, int))DataBinding__Fuse_Elements_Visibility__Fuse_Reactive_IObserver_OnRemove;
    type->__interface_1.__fp_OnNameChanged = (void(*)(void*, ::uObject*, ::uString*))DataBinding__Fuse_Elements_Visibility__Fuse_Scripting_INameListener_OnNameChanged;

    type->SetInterfaces(
        ::app::Fuse::Reactive::IObserver__typeof(), offsetof(DataBinding__Fuse_Elements_Visibility__uType, __interface_0),
        ::app::Fuse::Scripting::INameListener__typeof(), offsetof(DataBinding__Fuse_Elements_Visibility__uType, __interface_1));

    type->SetStrongRefs(
        "_currentValue", offsetof(DataBinding__Fuse_Elements_Visibility, _currentValue),
        "_subscription", offsetof(DataBinding__Fuse_Elements_Visibility, _subscription),
        "_Target", offsetof(DataBinding__Fuse_Elements_Visibility, _Target));

    type->SetFields(2,
        ::uNewField("_currentValue", NULL, offsetof(DataBinding__Fuse_Elements_Visibility, _currentValue), ::uObject__typeof()),
        ::uNewField("_subscription", NULL, offsetof(DataBinding__Fuse_Elements_Visibility, _subscription), ::app::Fuse::Reactive::ISubscription__typeof()));

    type->SetFunctions(3,
        ::uNewFunction("get_Target", DataBinding__Fuse_Elements_Visibility__get_Target, 0, false, ::app::Uno::UX::Property__Fuse_Elements_Visibility__typeof()),
        ::uNewFunction(".ctor", DataBinding__Fuse_Elements_Visibility__New_1, 0, true, DataBinding__Fuse_Elements_Visibility__typeof(), ::app::Uno::UX::Property__Fuse_Elements_Visibility__typeof(), ::app::Uno::String__typeof()),
        ::uNewFunctionVoid("set_Target", DataBinding__Fuse_Elements_Visibility__set_Target, 0, false, ::app::Uno::UX::Property__Fuse_Elements_Visibility__typeof()));

    ::uRegisterType(type);
    return type;
}

void DataBinding__Fuse_Elements_Visibility___ObjInit_2(DataBinding__Fuse_Elements_Visibility* __this, ::app::Uno::UX::Property__Fuse_Elements_Visibility* target, ::uString* key)
{
    ::app::Fuse::Reactive::Binding___ObjInit_1(__this, key);
    __this->Target(target);
}

bool DataBinding__Fuse_Elements_Visibility__Acceptor(DataBinding__Fuse_Elements_Visibility* __this, ::uObject* obj)
{
    return ::uIs(obj, ::app::Fuse::Elements::Visibility__typeof());
}

void DataBinding__Fuse_Elements_Visibility__Fuse_Reactive_IObserver_OnAdd(DataBinding__Fuse_Elements_Visibility* __this, ::uObject* addedValue)
{
    U_THROW(::app::Uno::Exception__New_2(NULL, ::uGetConstString("Not handled: OnAdd")));
}

void DataBinding__Fuse_Elements_Visibility__Fuse_Reactive_IObserver_OnFailed(DataBinding__Fuse_Elements_Visibility* __this, ::uString* message)
{
    U_THROW(::app::Uno::Exception__New_2(NULL, ::uGetConstString("Not handled: OnFailed")));
}

void DataBinding__Fuse_Elements_Visibility__Fuse_Reactive_IObserver_OnNewAll(DataBinding__Fuse_Elements_Visibility* __this, int length)
{
    if (length > 0)
    {
        U_THROW(::app::Uno::Exception__New_2(NULL, ::uGetConstString("Not handled: OnNewAll")));
    }
}

void DataBinding__Fuse_Elements_Visibility__Fuse_Reactive_IObserver_OnNewAt(DataBinding__Fuse_Elements_Visibility* __this, int index, ::uObject* value)
{
    U_THROW(::app::Uno::Exception__New_2(NULL, ::uGetConstString("Not handled: OnNewAt")));
}

void DataBinding__Fuse_Elements_Visibility__Fuse_Reactive_IObserver_OnRemove(DataBinding__Fuse_Elements_Visibility* __this, ::uObject* value, int index)
{
    U_THROW(::app::Uno::Exception__New_2(NULL, ::uGetConstString("Not handled: OnRemoveAt")));
}

void DataBinding__Fuse_Elements_Visibility__Fuse_Reactive_IObserver_OnSet(DataBinding__Fuse_Elements_Visibility* __this, ::uObject* newValue)
{
    __this->PushValue(newValue);
}

void DataBinding__Fuse_Elements_Visibility__Fuse_Scripting_INameListener_OnNameChanged(DataBinding__Fuse_Elements_Visibility* __this, ::uObject* obj, ::uString* name)
{
    __this->PushValue(__this->_currentValue);
}

::app::Uno::UX::Property__Fuse_Elements_Visibility* DataBinding__Fuse_Elements_Visibility__get_Target(DataBinding__Fuse_Elements_Visibility* __this)
{
    return __this->_Target;
}

DataBinding__Fuse_Elements_Visibility* DataBinding__Fuse_Elements_Visibility__New_1(::uStatic* __this, ::app::Uno::UX::Property__Fuse_Elements_Visibility* target, ::uString* key)
{
    DataBinding__Fuse_Elements_Visibility* inst = (DataBinding__Fuse_Elements_Visibility*)::uAllocObject(sizeof(DataBinding__Fuse_Elements_Visibility), DataBinding__Fuse_Elements_Visibility__typeof());
    inst->_ObjInit_2(target, key);
    return inst;
}

void DataBinding__Fuse_Elements_Visibility__NewValue(DataBinding__Fuse_Elements_Visibility* __this, ::uObject* value)
{
    if (::uIs(value, ::app::Fuse::Elements::Visibility__typeof()))
    {
        __this->PushValue(value);
    }
    else if (::uIs(value, ::app::Fuse::Reactive::IObservable__typeof()))
    {
        if (__this->_subscription != NULL)
        {
            ::app::Uno::IDisposable::Dispose(::uPtr< ::uObject*>(__this->_subscription));
            __this->_subscription = NULL;
        }

        ::uObject* obs = ::uAs< ::uObject*>(value, ::app::Fuse::Reactive::IObservable__typeof());

        if (obs != NULL)
        {
            __this->_subscription = ::app::Fuse::Reactive::IObservable::Subscribe(::uPtr< ::uObject*>(obs), (::uObject*)__this);
        }
    }
    else
    {
        __this->PushValue(value);
    }
}

void DataBinding__Fuse_Elements_Visibility__OnRooted(DataBinding__Fuse_Elements_Visibility* __this, ::app::Fuse::Node* n)
{
    ::uPtr< ::app::Uno::UX::Property__Fuse_Elements_Visibility*>(__this->Target())->add_ValueChanged(::uNewDelegateNonVirt(::app::Uno::UX::ValueChangedHandler__Fuse_Elements_Visibility__typeof(), (const void*)DataBinding__Fuse_Elements_Visibility__OnValueChanged, __this));
    ::app::Fuse::Reactive::Binding__OnRooted(__this, n);
}

void DataBinding__Fuse_Elements_Visibility__OnUnrooted(DataBinding__Fuse_Elements_Visibility* __this, ::app::Fuse::Node* n)
{
    ::app::Fuse::Scripting::NameRegistry__RemoveListener(NULL, (::uObject*)__this);
    ::uPtr< ::app::Uno::UX::Property__Fuse_Elements_Visibility*>(__this->Target())->remove_ValueChanged(::uNewDelegateNonVirt(::app::Uno::UX::ValueChangedHandler__Fuse_Elements_Visibility__typeof(), (const void*)DataBinding__Fuse_Elements_Visibility__OnValueChanged, __this));

    if (__this->_subscription != NULL)
    {
        ::app::Uno::IDisposable::Dispose(::uPtr< ::uObject*>(__this->_subscription));
        __this->_subscription = NULL;
    }

    ::app::Fuse::Reactive::Binding__OnUnrooted(__this, n);
}

void DataBinding__Fuse_Elements_Visibility__OnValueChanged(DataBinding__Fuse_Elements_Visibility* __this, ::uObject* sender, ::app::Uno::UX::ValueChangedArgs__Fuse_Elements_Visibility* args)
{
    if ((__this->_subscription != NULL) && (::uPtr< ::app::Uno::UX::ValueChangedArgs__Fuse_Elements_Visibility*>(args)->Origin() != __this))
    {
        ::app::Fuse::Reactive::ISubscription::SetExclusive(::uPtr< ::uObject*>(__this->_subscription), ::uBox< int>(::app::Fuse::Elements::Visibility__typeof(), ::uPtr< ::app::Uno::UX::ValueChangedArgs__Fuse_Elements_Visibility*>(args)->Value()));
    }
}

void DataBinding__Fuse_Elements_Visibility__PushValue(DataBinding__Fuse_Elements_Visibility* __this, ::uObject* newValue)
{
    __this->_currentValue = newValue;

    if (::uIs(newValue, ::app::Fuse::Elements::Visibility__typeof()))
    {
        ::app::Fuse::Scripting::NameRegistry__RemoveListener(NULL, (::uObject*)__this);
        ::uPtr< ::app::Uno::UX::Property__Fuse_Elements_Visibility*>(__this->Target())->SetRestState(::uUnbox< int>(::app::Fuse::Elements::Visibility__typeof(), newValue), (::uObject*)__this);
        return;
    }

    ::uString* name = ::uAs< ::uString*>(newValue, ::app::Uno::String__typeof());

    if (::app::Uno::String__op_Inequality(NULL, name, NULL) && (__this->Node() != NULL))
    {
        ::app::Fuse::Scripting::NameRegistry__AddListener(NULL, name, (::uObject*)__this);
        ::app::Fuse::Node* k = ::uPtr< ::app::Fuse::Node*>(__this->Node())->FindNodeByName(::uCast< ::uString*>(newValue, ::app::Uno::String__typeof()));

        if (::uIs(k, ::app::Fuse::Elements::Visibility__typeof()))
        {
            ::uPtr< ::app::Uno::UX::Property__Fuse_Elements_Visibility*>(__this->Target())->SetRestState(::uUnbox< int>(::app::Fuse::Elements::Visibility__typeof(), (::uObject*)k), (::uObject*)__this);
            return;
        }
        else
        {
            ::uObject* candidate = ::uPtr< ::app::Fuse::Node*>(__this->Node())->FindObjectByName(::uCast< ::uString*>(newValue, ::app::Uno::String__typeof()), ::uNewDelegateNonVirt(::app::Uno::Predicate__object__typeof(), (const void*)DataBinding__Fuse_Elements_Visibility__Acceptor, __this));

            if (::uIs(candidate, ::app::Fuse::Elements::Visibility__typeof()))
            {
                ::uPtr< ::app::Uno::UX::Property__Fuse_Elements_Visibility*>(__this->Target())->SetRestState(::uUnbox< int>(::app::Fuse::Elements::Visibility__typeof(), candidate), (::uObject*)__this);
                return;
            }
        }
    }

    ::app::Fuse::Reactive::Marshal__ToType__Fuse_Elements_Visibility(NULL, newValue, ::uNewDelegateNonVirt(::app::Uno::Action__Fuse_Elements_Visibility__typeof(), (const void*)DataBinding__Fuse_Elements_Visibility__SetValue, __this));
}

void DataBinding__Fuse_Elements_Visibility__set_Target(DataBinding__Fuse_Elements_Visibility* __this, ::app::Uno::UX::Property__Fuse_Elements_Visibility* value)
{
    __this->_Target = value;
}

void DataBinding__Fuse_Elements_Visibility__SetValue(DataBinding__Fuse_Elements_Visibility* __this, int value)
{
    ::uPtr< ::app::Uno::UX::Property__Fuse_Elements_Visibility*>(__this->Target())->SetRestState(value, (::uObject*)__this);
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Reactive\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

DataBinding__Fuse_Font__uType* DataBinding__Fuse_Font__typeof()
{
    static ::uStaticStrong<DataBinding__Fuse_Font__uType*> type;
    if (type != NULL) return type;

    type = (DataBinding__Fuse_Font__uType*)::uAllocClassType(sizeof(DataBinding__Fuse_Font__uType), "Fuse.Reactive.DataBinding<Fuse.Font>", false, 2, 3, 0);

    type->SetBaseType(::app::Fuse::Reactive::Binding__typeof());
    type->__fp_NewValue = (void(*)(::app::Fuse::Reactive::Binding*, ::uObject*))DataBinding__Fuse_Font__NewValue;
    type->__fp_OnRooted = (void(*)(::app::Fuse::Behavior*, ::app::Fuse::Node*))DataBinding__Fuse_Font__OnRooted;
    type->__fp_OnUnrooted = (void(*)(::app::Fuse::Behavior*, ::app::Fuse::Node*))DataBinding__Fuse_Font__OnUnrooted;
    type->__interface_0.__fp_OnSet = (void(*)(void*, ::uObject*))DataBinding__Fuse_Font__Fuse_Reactive_IObserver_OnSet;
    type->__interface_0.__fp_OnAdd = (void(*)(void*, ::uObject*))DataBinding__Fuse_Font__Fuse_Reactive_IObserver_OnAdd;
    type->__interface_0.__fp_OnNewAt = (void(*)(void*, int, ::uObject*))DataBinding__Fuse_Font__Fuse_Reactive_IObserver_OnNewAt;
    type->__interface_0.__fp_OnFailed = (void(*)(void*, ::uString*))DataBinding__Fuse_Font__Fuse_Reactive_IObserver_OnFailed;
    type->__interface_0.__fp_OnNewAll = (void(*)(void*, int))DataBinding__Fuse_Font__Fuse_Reactive_IObserver_OnNewAll;
    type->__interface_0.__fp_OnRemove = (void(*)(void*, ::uObject*, int))DataBinding__Fuse_Font__Fuse_Reactive_IObserver_OnRemove;
    type->__interface_1.__fp_OnNameChanged = (void(*)(void*, ::uObject*, ::uString*))DataBinding__Fuse_Font__Fuse_Scripting_INameListener_OnNameChanged;

    type->SetInterfaces(
        ::app::Fuse::Reactive::IObserver__typeof(), offsetof(DataBinding__Fuse_Font__uType, __interface_0),
        ::app::Fuse::Scripting::INameListener__typeof(), offsetof(DataBinding__Fuse_Font__uType, __interface_1));

    type->SetStrongRefs(
        "_currentValue", offsetof(DataBinding__Fuse_Font, _currentValue),
        "_subscription", offsetof(DataBinding__Fuse_Font, _subscription),
        "_Target", offsetof(DataBinding__Fuse_Font, _Target));

    type->SetFields(2,
        ::uNewField("_currentValue", NULL, offsetof(DataBinding__Fuse_Font, _currentValue), ::uObject__typeof()),
        ::uNewField("_subscription", NULL, offsetof(DataBinding__Fuse_Font, _subscription), ::app::Fuse::Reactive::ISubscription__typeof()));

    type->SetFunctions(3,
        ::uNewFunction("get_Target", DataBinding__Fuse_Font__get_Target, 0, false, ::app::Uno::UX::Property__Fuse_Font__typeof()),
        ::uNewFunction(".ctor", DataBinding__Fuse_Font__New_1, 0, true, DataBinding__Fuse_Font__typeof(), ::app::Uno::UX::Property__Fuse_Font__typeof(), ::app::Uno::String__typeof()),
        ::uNewFunctionVoid("set_Target", DataBinding__Fuse_Font__set_Target, 0, false, ::app::Uno::UX::Property__Fuse_Font__typeof()));

    ::uRegisterType(type);
    return type;
}

void DataBinding__Fuse_Font___ObjInit_2(DataBinding__Fuse_Font* __this, ::app::Uno::UX::Property__Fuse_Font* target, ::uString* key)
{
    ::app::Fuse::Reactive::Binding___ObjInit_1(__this, key);
    __this->Target(target);
}

bool DataBinding__Fuse_Font__Acceptor(DataBinding__Fuse_Font* __this, ::uObject* obj)
{
    return ::uIs(obj, ::app::Fuse::Font__typeof());
}

void DataBinding__Fuse_Font__Fuse_Reactive_IObserver_OnAdd(DataBinding__Fuse_Font* __this, ::uObject* addedValue)
{
    U_THROW(::app::Uno::Exception__New_2(NULL, ::uGetConstString("Not handled: OnAdd")));
}

void DataBinding__Fuse_Font__Fuse_Reactive_IObserver_OnFailed(DataBinding__Fuse_Font* __this, ::uString* message)
{
    U_THROW(::app::Uno::Exception__New_2(NULL, ::uGetConstString("Not handled: OnFailed")));
}

void DataBinding__Fuse_Font__Fuse_Reactive_IObserver_OnNewAll(DataBinding__Fuse_Font* __this, int length)
{
    if (length > 0)
    {
        U_THROW(::app::Uno::Exception__New_2(NULL, ::uGetConstString("Not handled: OnNewAll")));
    }
}

void DataBinding__Fuse_Font__Fuse_Reactive_IObserver_OnNewAt(DataBinding__Fuse_Font* __this, int index, ::uObject* value)
{
    U_THROW(::app::Uno::Exception__New_2(NULL, ::uGetConstString("Not handled: OnNewAt")));
}

void DataBinding__Fuse_Font__Fuse_Reactive_IObserver_OnRemove(DataBinding__Fuse_Font* __this, ::uObject* value, int index)
{
    U_THROW(::app::Uno::Exception__New_2(NULL, ::uGetConstString("Not handled: OnRemoveAt")));
}

void DataBinding__Fuse_Font__Fuse_Reactive_IObserver_OnSet(DataBinding__Fuse_Font* __this, ::uObject* newValue)
{
    __this->PushValue(newValue);
}

void DataBinding__Fuse_Font__Fuse_Scripting_INameListener_OnNameChanged(DataBinding__Fuse_Font* __this, ::uObject* obj, ::uString* name)
{
    __this->PushValue(__this->_currentValue);
}

::app::Uno::UX::Property__Fuse_Font* DataBinding__Fuse_Font__get_Target(DataBinding__Fuse_Font* __this)
{
    return __this->_Target;
}

DataBinding__Fuse_Font* DataBinding__Fuse_Font__New_1(::uStatic* __this, ::app::Uno::UX::Property__Fuse_Font* target, ::uString* key)
{
    DataBinding__Fuse_Font* inst = (DataBinding__Fuse_Font*)::uAllocObject(sizeof(DataBinding__Fuse_Font), DataBinding__Fuse_Font__typeof());
    inst->_ObjInit_2(target, key);
    return inst;
}

void DataBinding__Fuse_Font__NewValue(DataBinding__Fuse_Font* __this, ::uObject* value)
{
    if (::uIs(value, ::app::Fuse::Font__typeof()))
    {
        __this->PushValue(value);
    }
    else if (::uIs(value, ::app::Fuse::Reactive::IObservable__typeof()))
    {
        if (__this->_subscription != NULL)
        {
            ::app::Uno::IDisposable::Dispose(::uPtr< ::uObject*>(__this->_subscription));
            __this->_subscription = NULL;
        }

        ::uObject* obs = ::uAs< ::uObject*>(value, ::app::Fuse::Reactive::IObservable__typeof());

        if (obs != NULL)
        {
            __this->_subscription = ::app::Fuse::Reactive::IObservable::Subscribe(::uPtr< ::uObject*>(obs), (::uObject*)__this);
        }
    }
    else
    {
        __this->PushValue(value);
    }
}

void DataBinding__Fuse_Font__OnRooted(DataBinding__Fuse_Font* __this, ::app::Fuse::Node* n)
{
    ::uPtr< ::app::Uno::UX::Property__Fuse_Font*>(__this->Target())->add_ValueChanged(::uNewDelegateNonVirt(::app::Uno::UX::ValueChangedHandler__Fuse_Font__typeof(), (const void*)DataBinding__Fuse_Font__OnValueChanged, __this));
    ::app::Fuse::Reactive::Binding__OnRooted(__this, n);
}

void DataBinding__Fuse_Font__OnUnrooted(DataBinding__Fuse_Font* __this, ::app::Fuse::Node* n)
{
    ::app::Fuse::Scripting::NameRegistry__RemoveListener(NULL, (::uObject*)__this);
    ::uPtr< ::app::Uno::UX::Property__Fuse_Font*>(__this->Target())->remove_ValueChanged(::uNewDelegateNonVirt(::app::Uno::UX::ValueChangedHandler__Fuse_Font__typeof(), (const void*)DataBinding__Fuse_Font__OnValueChanged, __this));

    if (__this->_subscription != NULL)
    {
        ::app::Uno::IDisposable::Dispose(::uPtr< ::uObject*>(__this->_subscription));
        __this->_subscription = NULL;
    }

    ::app::Fuse::Reactive::Binding__OnUnrooted(__this, n);
}

void DataBinding__Fuse_Font__OnValueChanged(DataBinding__Fuse_Font* __this, ::uObject* sender, ::app::Uno::UX::ValueChangedArgs__Fuse_Font* args)
{
    if ((__this->_subscription != NULL) && (::uPtr< ::app::Uno::UX::ValueChangedArgs__Fuse_Font*>(args)->Origin() != __this))
    {
        ::app::Fuse::Reactive::ISubscription::SetExclusive(::uPtr< ::uObject*>(__this->_subscription), (::uObject*)::uPtr< ::app::Uno::UX::ValueChangedArgs__Fuse_Font*>(args)->Value());
    }
}

void DataBinding__Fuse_Font__PushValue(DataBinding__Fuse_Font* __this, ::uObject* newValue)
{
    __this->_currentValue = newValue;

    if (::uIs(newValue, ::app::Fuse::Font__typeof()))
    {
        ::app::Fuse::Scripting::NameRegistry__RemoveListener(NULL, (::uObject*)__this);
        ::uPtr< ::app::Uno::UX::Property__Fuse_Font*>(__this->Target())->SetRestState(::uCast< ::app::Fuse::Font*>(newValue, ::app::Fuse::Font__typeof()), (::uObject*)__this);
        return;
    }

    ::uString* name = ::uAs< ::uString*>(newValue, ::app::Uno::String__typeof());

    if (::app::Uno::String__op_Inequality(NULL, name, NULL) && (__this->Node() != NULL))
    {
        ::app::Fuse::Scripting::NameRegistry__AddListener(NULL, name, (::uObject*)__this);
        ::app::Fuse::Node* k = ::uPtr< ::app::Fuse::Node*>(__this->Node())->FindNodeByName(::uCast< ::uString*>(newValue, ::app::Uno::String__typeof()));

        if (::uIs(k, ::app::Fuse::Font__typeof()))
        {
            ::uPtr< ::app::Uno::UX::Property__Fuse_Font*>(__this->Target())->SetRestState(::uCast< ::app::Fuse::Font*>((::uObject*)k, ::app::Fuse::Font__typeof()), (::uObject*)__this);
            return;
        }
        else
        {
            ::uObject* candidate = ::uPtr< ::app::Fuse::Node*>(__this->Node())->FindObjectByName(::uCast< ::uString*>(newValue, ::app::Uno::String__typeof()), ::uNewDelegateNonVirt(::app::Uno::Predicate__object__typeof(), (const void*)DataBinding__Fuse_Font__Acceptor, __this));

            if (::uIs(candidate, ::app::Fuse::Font__typeof()))
            {
                ::uPtr< ::app::Uno::UX::Property__Fuse_Font*>(__this->Target())->SetRestState(::uCast< ::app::Fuse::Font*>(candidate, ::app::Fuse::Font__typeof()), (::uObject*)__this);
                return;
            }
        }
    }

    ::app::Fuse::Reactive::Marshal__ToType__Fuse_Font(NULL, newValue, ::uNewDelegateNonVirt(::app::Uno::Action__Fuse_Font__typeof(), (const void*)DataBinding__Fuse_Font__SetValue, __this));
}

void DataBinding__Fuse_Font__set_Target(DataBinding__Fuse_Font* __this, ::app::Uno::UX::Property__Fuse_Font* value)
{
    __this->_Target = value;
}

void DataBinding__Fuse_Font__SetValue(DataBinding__Fuse_Font* __this, ::app::Fuse::Font* value)
{
    ::uPtr< ::app::Uno::UX::Property__Fuse_Font*>(__this->Target())->SetRestState(value, (::uObject*)__this);
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Reactive\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

DataBinding__Fuse_Gestures_Edge__uType* DataBinding__Fuse_Gestures_Edge__typeof()
{
    static ::uStaticStrong<DataBinding__Fuse_Gestures_Edge__uType*> type;
    if (type != NULL) return type;

    type = (DataBinding__Fuse_Gestures_Edge__uType*)::uAllocClassType(sizeof(DataBinding__Fuse_Gestures_Edge__uType), "Fuse.Reactive.DataBinding<Fuse.Gestures.Edge>", false, 2, 3, 0);

    type->SetBaseType(::app::Fuse::Reactive::Binding__typeof());
    type->__fp_NewValue = (void(*)(::app::Fuse::Reactive::Binding*, ::uObject*))DataBinding__Fuse_Gestures_Edge__NewValue;
    type->__fp_OnRooted = (void(*)(::app::Fuse::Behavior*, ::app::Fuse::Node*))DataBinding__Fuse_Gestures_Edge__OnRooted;
    type->__fp_OnUnrooted = (void(*)(::app::Fuse::Behavior*, ::app::Fuse::Node*))DataBinding__Fuse_Gestures_Edge__OnUnrooted;
    type->__interface_0.__fp_OnSet = (void(*)(void*, ::uObject*))DataBinding__Fuse_Gestures_Edge__Fuse_Reactive_IObserver_OnSet;
    type->__interface_0.__fp_OnAdd = (void(*)(void*, ::uObject*))DataBinding__Fuse_Gestures_Edge__Fuse_Reactive_IObserver_OnAdd;
    type->__interface_0.__fp_OnNewAt = (void(*)(void*, int, ::uObject*))DataBinding__Fuse_Gestures_Edge__Fuse_Reactive_IObserver_OnNewAt;
    type->__interface_0.__fp_OnFailed = (void(*)(void*, ::uString*))DataBinding__Fuse_Gestures_Edge__Fuse_Reactive_IObserver_OnFailed;
    type->__interface_0.__fp_OnNewAll = (void(*)(void*, int))DataBinding__Fuse_Gestures_Edge__Fuse_Reactive_IObserver_OnNewAll;
    type->__interface_0.__fp_OnRemove = (void(*)(void*, ::uObject*, int))DataBinding__Fuse_Gestures_Edge__Fuse_Reactive_IObserver_OnRemove;
    type->__interface_1.__fp_OnNameChanged = (void(*)(void*, ::uObject*, ::uString*))DataBinding__Fuse_Gestures_Edge__Fuse_Scripting_INameListener_OnNameChanged;

    type->SetInterfaces(
        ::app::Fuse::Reactive::IObserver__typeof(), offsetof(DataBinding__Fuse_Gestures_Edge__uType, __interface_0),
        ::app::Fuse::Scripting::INameListener__typeof(), offsetof(DataBinding__Fuse_Gestures_Edge__uType, __interface_1));

    type->SetStrongRefs(
        "_currentValue", offsetof(DataBinding__Fuse_Gestures_Edge, _currentValue),
        "_subscription", offsetof(DataBinding__Fuse_Gestures_Edge, _subscription),
        "_Target", offsetof(DataBinding__Fuse_Gestures_Edge, _Target));

    type->SetFields(2,
        ::uNewField("_currentValue", NULL, offsetof(DataBinding__Fuse_Gestures_Edge, _currentValue), ::uObject__typeof()),
        ::uNewField("_subscription", NULL, offsetof(DataBinding__Fuse_Gestures_Edge, _subscription), ::app::Fuse::Reactive::ISubscription__typeof()));

    type->SetFunctions(3,
        ::uNewFunction("get_Target", DataBinding__Fuse_Gestures_Edge__get_Target, 0, false, ::app::Uno::UX::Property__Fuse_Gestures_Edge__typeof()),
        ::uNewFunction(".ctor", DataBinding__Fuse_Gestures_Edge__New_1, 0, true, DataBinding__Fuse_Gestures_Edge__typeof(), ::app::Uno::UX::Property__Fuse_Gestures_Edge__typeof(), ::app::Uno::String__typeof()),
        ::uNewFunctionVoid("set_Target", DataBinding__Fuse_Gestures_Edge__set_Target, 0, false, ::app::Uno::UX::Property__Fuse_Gestures_Edge__typeof()));

    ::uRegisterType(type);
    return type;
}

void DataBinding__Fuse_Gestures_Edge___ObjInit_2(DataBinding__Fuse_Gestures_Edge* __this, ::app::Uno::UX::Property__Fuse_Gestures_Edge* target, ::uString* key)
{
    ::app::Fuse::Reactive::Binding___ObjInit_1(__this, key);
    __this->Target(target);
}

bool DataBinding__Fuse_Gestures_Edge__Acceptor(DataBinding__Fuse_Gestures_Edge* __this, ::uObject* obj)
{
    return ::uIs(obj, ::app::Fuse::Gestures::Edge__typeof());
}

void DataBinding__Fuse_Gestures_Edge__Fuse_Reactive_IObserver_OnAdd(DataBinding__Fuse_Gestures_Edge* __this, ::uObject* addedValue)
{
    U_THROW(::app::Uno::Exception__New_2(NULL, ::uGetConstString("Not handled: OnAdd")));
}

void DataBinding__Fuse_Gestures_Edge__Fuse_Reactive_IObserver_OnFailed(DataBinding__Fuse_Gestures_Edge* __this, ::uString* message)
{
    U_THROW(::app::Uno::Exception__New_2(NULL, ::uGetConstString("Not handled: OnFailed")));
}

void DataBinding__Fuse_Gestures_Edge__Fuse_Reactive_IObserver_OnNewAll(DataBinding__Fuse_Gestures_Edge* __this, int length)
{
    if (length > 0)
    {
        U_THROW(::app::Uno::Exception__New_2(NULL, ::uGetConstString("Not handled: OnNewAll")));
    }
}

void DataBinding__Fuse_Gestures_Edge__Fuse_Reactive_IObserver_OnNewAt(DataBinding__Fuse_Gestures_Edge* __this, int index, ::uObject* value)
{
    U_THROW(::app::Uno::Exception__New_2(NULL, ::uGetConstString("Not handled: OnNewAt")));
}

void DataBinding__Fuse_Gestures_Edge__Fuse_Reactive_IObserver_OnRemove(DataBinding__Fuse_Gestures_Edge* __this, ::uObject* value, int index)
{
    U_THROW(::app::Uno::Exception__New_2(NULL, ::uGetConstString("Not handled: OnRemoveAt")));
}

void DataBinding__Fuse_Gestures_Edge__Fuse_Reactive_IObserver_OnSet(DataBinding__Fuse_Gestures_Edge* __this, ::uObject* newValue)
{
    __this->PushValue(newValue);
}

void DataBinding__Fuse_Gestures_Edge__Fuse_Scripting_INameListener_OnNameChanged(DataBinding__Fuse_Gestures_Edge* __this, ::uObject* obj, ::uString* name)
{
    __this->PushValue(__this->_currentValue);
}

::app::Uno::UX::Property__Fuse_Gestures_Edge* DataBinding__Fuse_Gestures_Edge__get_Target(DataBinding__Fuse_Gestures_Edge* __this)
{
    return __this->_Target;
}

DataBinding__Fuse_Gestures_Edge* DataBinding__Fuse_Gestures_Edge__New_1(::uStatic* __this, ::app::Uno::UX::Property__Fuse_Gestures_Edge* target, ::uString* key)
{
    DataBinding__Fuse_Gestures_Edge* inst = (DataBinding__Fuse_Gestures_Edge*)::uAllocObject(sizeof(DataBinding__Fuse_Gestures_Edge), DataBinding__Fuse_Gestures_Edge__typeof());
    inst->_ObjInit_2(target, key);
    return inst;
}

void DataBinding__Fuse_Gestures_Edge__NewValue(DataBinding__Fuse_Gestures_Edge* __this, ::uObject* value)
{
    if (::uIs(value, ::app::Fuse::Gestures::Edge__typeof()))
    {
        __this->PushValue(value);
    }
    else if (::uIs(value, ::app::Fuse::Reactive::IObservable__typeof()))
    {
        if (__this->_subscription != NULL)
        {
            ::app::Uno::IDisposable::Dispose(::uPtr< ::uObject*>(__this->_subscription));
            __this->_subscription = NULL;
        }

        ::uObject* obs = ::uAs< ::uObject*>(value, ::app::Fuse::Reactive::IObservable__typeof());

        if (obs != NULL)
        {
            __this->_subscription = ::app::Fuse::Reactive::IObservable::Subscribe(::uPtr< ::uObject*>(obs), (::uObject*)__this);
        }
    }
    else
    {
        __this->PushValue(value);
    }
}

void DataBinding__Fuse_Gestures_Edge__OnRooted(DataBinding__Fuse_Gestures_Edge* __this, ::app::Fuse::Node* n)
{
    ::uPtr< ::app::Uno::UX::Property__Fuse_Gestures_Edge*>(__this->Target())->add_ValueChanged(::uNewDelegateNonVirt(::app::Uno::UX::ValueChangedHandler__Fuse_Gestures_Edge__typeof(), (const void*)DataBinding__Fuse_Gestures_Edge__OnValueChanged, __this));
    ::app::Fuse::Reactive::Binding__OnRooted(__this, n);
}

void DataBinding__Fuse_Gestures_Edge__OnUnrooted(DataBinding__Fuse_Gestures_Edge* __this, ::app::Fuse::Node* n)
{
    ::app::Fuse::Scripting::NameRegistry__RemoveListener(NULL, (::uObject*)__this);
    ::uPtr< ::app::Uno::UX::Property__Fuse_Gestures_Edge*>(__this->Target())->remove_ValueChanged(::uNewDelegateNonVirt(::app::Uno::UX::ValueChangedHandler__Fuse_Gestures_Edge__typeof(), (const void*)DataBinding__Fuse_Gestures_Edge__OnValueChanged, __this));

    if (__this->_subscription != NULL)
    {
        ::app::Uno::IDisposable::Dispose(::uPtr< ::uObject*>(__this->_subscription));
        __this->_subscription = NULL;
    }

    ::app::Fuse::Reactive::Binding__OnUnrooted(__this, n);
}

void DataBinding__Fuse_Gestures_Edge__OnValueChanged(DataBinding__Fuse_Gestures_Edge* __this, ::uObject* sender, ::app::Uno::UX::ValueChangedArgs__Fuse_Gestures_Edge* args)
{
    if ((__this->_subscription != NULL) && (::uPtr< ::app::Uno::UX::ValueChangedArgs__Fuse_Gestures_Edge*>(args)->Origin() != __this))
    {
        ::app::Fuse::Reactive::ISubscription::SetExclusive(::uPtr< ::uObject*>(__this->_subscription), ::uBox< int>(::app::Fuse::Gestures::Edge__typeof(), ::uPtr< ::app::Uno::UX::ValueChangedArgs__Fuse_Gestures_Edge*>(args)->Value()));
    }
}

void DataBinding__Fuse_Gestures_Edge__PushValue(DataBinding__Fuse_Gestures_Edge* __this, ::uObject* newValue)
{
    __this->_currentValue = newValue;

    if (::uIs(newValue, ::app::Fuse::Gestures::Edge__typeof()))
    {
        ::app::Fuse::Scripting::NameRegistry__RemoveListener(NULL, (::uObject*)__this);
        ::uPtr< ::app::Uno::UX::Property__Fuse_Gestures_Edge*>(__this->Target())->SetRestState(::uUnbox< int>(::app::Fuse::Gestures::Edge__typeof(), newValue), (::uObject*)__this);
        return;
    }

    ::uString* name = ::uAs< ::uString*>(newValue, ::app::Uno::String__typeof());

    if (::app::Uno::String__op_Inequality(NULL, name, NULL) && (__this->Node() != NULL))
    {
        ::app::Fuse::Scripting::NameRegistry__AddListener(NULL, name, (::uObject*)__this);
        ::app::Fuse::Node* k = ::uPtr< ::app::Fuse::Node*>(__this->Node())->FindNodeByName(::uCast< ::uString*>(newValue, ::app::Uno::String__typeof()));

        if (::uIs(k, ::app::Fuse::Gestures::Edge__typeof()))
        {
            ::uPtr< ::app::Uno::UX::Property__Fuse_Gestures_Edge*>(__this->Target())->SetRestState(::uUnbox< int>(::app::Fuse::Gestures::Edge__typeof(), (::uObject*)k), (::uObject*)__this);
            return;
        }
        else
        {
            ::uObject* candidate = ::uPtr< ::app::Fuse::Node*>(__this->Node())->FindObjectByName(::uCast< ::uString*>(newValue, ::app::Uno::String__typeof()), ::uNewDelegateNonVirt(::app::Uno::Predicate__object__typeof(), (const void*)DataBinding__Fuse_Gestures_Edge__Acceptor, __this));

            if (::uIs(candidate, ::app::Fuse::Gestures::Edge__typeof()))
            {
                ::uPtr< ::app::Uno::UX::Property__Fuse_Gestures_Edge*>(__this->Target())->SetRestState(::uUnbox< int>(::app::Fuse::Gestures::Edge__typeof(), candidate), (::uObject*)__this);
                return;
            }
        }
    }

    ::app::Fuse::Reactive::Marshal__ToType__Fuse_Gestures_Edge(NULL, newValue, ::uNewDelegateNonVirt(::app::Uno::Action__Fuse_Gestures_Edge__typeof(), (const void*)DataBinding__Fuse_Gestures_Edge__SetValue, __this));
}

void DataBinding__Fuse_Gestures_Edge__set_Target(DataBinding__Fuse_Gestures_Edge* __this, ::app::Uno::UX::Property__Fuse_Gestures_Edge* value)
{
    __this->_Target = value;
}

void DataBinding__Fuse_Gestures_Edge__SetValue(DataBinding__Fuse_Gestures_Edge* __this, int value)
{
    ::uPtr< ::app::Uno::UX::Property__Fuse_Gestures_Edge*>(__this->Target())->SetRestState(value, (::uObject*)__this);
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Reactive\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

DataBinding__Fuse_Gestures_ScrollDirections__uType* DataBinding__Fuse_Gestures_ScrollDirections__typeof()
{
    static ::uStaticStrong<DataBinding__Fuse_Gestures_ScrollDirections__uType*> type;
    if (type != NULL) return type;

    type = (DataBinding__Fuse_Gestures_ScrollDirections__uType*)::uAllocClassType(sizeof(DataBinding__Fuse_Gestures_ScrollDirections__uType), "Fuse.Reactive.DataBinding<Fuse.Gestures.ScrollDirections>", false, 2, 3, 0);

    type->SetBaseType(::app::Fuse::Reactive::Binding__typeof());
    type->__fp_NewValue = (void(*)(::app::Fuse::Reactive::Binding*, ::uObject*))DataBinding__Fuse_Gestures_ScrollDirections__NewValue;
    type->__fp_OnRooted = (void(*)(::app::Fuse::Behavior*, ::app::Fuse::Node*))DataBinding__Fuse_Gestures_ScrollDirections__OnRooted;
    type->__fp_OnUnrooted = (void(*)(::app::Fuse::Behavior*, ::app::Fuse::Node*))DataBinding__Fuse_Gestures_ScrollDirections__OnUnrooted;
    type->__interface_0.__fp_OnSet = (void(*)(void*, ::uObject*))DataBinding__Fuse_Gestures_ScrollDirections__Fuse_Reactive_IObserver_OnSet;
    type->__interface_0.__fp_OnAdd = (void(*)(void*, ::uObject*))DataBinding__Fuse_Gestures_ScrollDirections__Fuse_Reactive_IObserver_OnAdd;
    type->__interface_0.__fp_OnNewAt = (void(*)(void*, int, ::uObject*))DataBinding__Fuse_Gestures_ScrollDirections__Fuse_Reactive_IObserver_OnNewAt;
    type->__interface_0.__fp_OnFailed = (void(*)(void*, ::uString*))DataBinding__Fuse_Gestures_ScrollDirections__Fuse_Reactive_IObserver_OnFailed;
    type->__interface_0.__fp_OnNewAll = (void(*)(void*, int))DataBinding__Fuse_Gestures_ScrollDirections__Fuse_Reactive_IObserver_OnNewAll;
    type->__interface_0.__fp_OnRemove = (void(*)(void*, ::uObject*, int))DataBinding__Fuse_Gestures_ScrollDirections__Fuse_Reactive_IObserver_OnRemove;
    type->__interface_1.__fp_OnNameChanged = (void(*)(void*, ::uObject*, ::uString*))DataBinding__Fuse_Gestures_ScrollDirections__Fuse_Scripting_INameListener_OnNameChanged;

    type->SetInterfaces(
        ::app::Fuse::Reactive::IObserver__typeof(), offsetof(DataBinding__Fuse_Gestures_ScrollDirections__uType, __interface_0),
        ::app::Fuse::Scripting::INameListener__typeof(), offsetof(DataBinding__Fuse_Gestures_ScrollDirections__uType, __interface_1));

    type->SetStrongRefs(
        "_currentValue", offsetof(DataBinding__Fuse_Gestures_ScrollDirections, _currentValue),
        "_subscription", offsetof(DataBinding__Fuse_Gestures_ScrollDirections, _subscription),
        "_Target", offsetof(DataBinding__Fuse_Gestures_ScrollDirections, _Target));

    type->SetFields(2,
        ::uNewField("_currentValue", NULL, offsetof(DataBinding__Fuse_Gestures_ScrollDirections, _currentValue), ::uObject__typeof()),
        ::uNewField("_subscription", NULL, offsetof(DataBinding__Fuse_Gestures_ScrollDirections, _subscription), ::app::Fuse::Reactive::ISubscription__typeof()));

    type->SetFunctions(3,
        ::uNewFunction("get_Target", DataBinding__Fuse_Gestures_ScrollDirections__get_Target, 0, false, ::app::Uno::UX::Property__Fuse_Gestures_ScrollDirections__typeof()),
        ::uNewFunction(".ctor", DataBinding__Fuse_Gestures_ScrollDirections__New_1, 0, true, DataBinding__Fuse_Gestures_ScrollDirections__typeof(), ::app::Uno::UX::Property__Fuse_Gestures_ScrollDirections__typeof(), ::app::Uno::String__typeof()),
        ::uNewFunctionVoid("set_Target", DataBinding__Fuse_Gestures_ScrollDirections__set_Target, 0, false, ::app::Uno::UX::Property__Fuse_Gestures_ScrollDirections__typeof()));

    ::uRegisterType(type);
    return type;
}

void DataBinding__Fuse_Gestures_ScrollDirections___ObjInit_2(DataBinding__Fuse_Gestures_ScrollDirections* __this, ::app::Uno::UX::Property__Fuse_Gestures_ScrollDirections* target, ::uString* key)
{
    ::app::Fuse::Reactive::Binding___ObjInit_1(__this, key);
    __this->Target(target);
}

bool DataBinding__Fuse_Gestures_ScrollDirections__Acceptor(DataBinding__Fuse_Gestures_ScrollDirections* __this, ::uObject* obj)
{
    return ::uIs(obj, ::app::Fuse::Gestures::ScrollDirections__typeof());
}

void DataBinding__Fuse_Gestures_ScrollDirections__Fuse_Reactive_IObserver_OnAdd(DataBinding__Fuse_Gestures_ScrollDirections* __this, ::uObject* addedValue)
{
    U_THROW(::app::Uno::Exception__New_2(NULL, ::uGetConstString("Not handled: OnAdd")));
}

void DataBinding__Fuse_Gestures_ScrollDirections__Fuse_Reactive_IObserver_OnFailed(DataBinding__Fuse_Gestures_ScrollDirections* __this, ::uString* message)
{
    U_THROW(::app::Uno::Exception__New_2(NULL, ::uGetConstString("Not handled: OnFailed")));
}

void DataBinding__Fuse_Gestures_ScrollDirections__Fuse_Reactive_IObserver_OnNewAll(DataBinding__Fuse_Gestures_ScrollDirections* __this, int length)
{
    if (length > 0)
    {
        U_THROW(::app::Uno::Exception__New_2(NULL, ::uGetConstString("Not handled: OnNewAll")));
    }
}

void DataBinding__Fuse_Gestures_ScrollDirections__Fuse_Reactive_IObserver_OnNewAt(DataBinding__Fuse_Gestures_ScrollDirections* __this, int index, ::uObject* value)
{
    U_THROW(::app::Uno::Exception__New_2(NULL, ::uGetConstString("Not handled: OnNewAt")));
}

void DataBinding__Fuse_Gestures_ScrollDirections__Fuse_Reactive_IObserver_OnRemove(DataBinding__Fuse_Gestures_ScrollDirections* __this, ::uObject* value, int index)
{
    U_THROW(::app::Uno::Exception__New_2(NULL, ::uGetConstString("Not handled: OnRemoveAt")));
}

void DataBinding__Fuse_Gestures_ScrollDirections__Fuse_Reactive_IObserver_OnSet(DataBinding__Fuse_Gestures_ScrollDirections* __this, ::uObject* newValue)
{
    __this->PushValue(newValue);
}

void DataBinding__Fuse_Gestures_ScrollDirections__Fuse_Scripting_INameListener_OnNameChanged(DataBinding__Fuse_Gestures_ScrollDirections* __this, ::uObject* obj, ::uString* name)
{
    __this->PushValue(__this->_currentValue);
}

::app::Uno::UX::Property__Fuse_Gestures_ScrollDirections* DataBinding__Fuse_Gestures_ScrollDirections__get_Target(DataBinding__Fuse_Gestures_ScrollDirections* __this)
{
    return __this->_Target;
}

DataBinding__Fuse_Gestures_ScrollDirections* DataBinding__Fuse_Gestures_ScrollDirections__New_1(::uStatic* __this, ::app::Uno::UX::Property__Fuse_Gestures_ScrollDirections* target, ::uString* key)
{
    DataBinding__Fuse_Gestures_ScrollDirections* inst = (DataBinding__Fuse_Gestures_ScrollDirections*)::uAllocObject(sizeof(DataBinding__Fuse_Gestures_ScrollDirections), DataBinding__Fuse_Gestures_ScrollDirections__typeof());
    inst->_ObjInit_2(target, key);
    return inst;
}

void DataBinding__Fuse_Gestures_ScrollDirections__NewValue(DataBinding__Fuse_Gestures_ScrollDirections* __this, ::uObject* value)
{
    if (::uIs(value, ::app::Fuse::Gestures::ScrollDirections__typeof()))
    {
        __this->PushValue(value);
    }
    else if (::uIs(value, ::app::Fuse::Reactive::IObservable__typeof()))
    {
        if (__this->_subscription != NULL)
        {
            ::app::Uno::IDisposable::Dispose(::uPtr< ::uObject*>(__this->_subscription));
            __this->_subscription = NULL;
        }

        ::uObject* obs = ::uAs< ::uObject*>(value, ::app::Fuse::Reactive::IObservable__typeof());

        if (obs != NULL)
        {
            __this->_subscription = ::app::Fuse::Reactive::IObservable::Subscribe(::uPtr< ::uObject*>(obs), (::uObject*)__this);
        }
    }
    else
    {
        __this->PushValue(value);
    }
}

void DataBinding__Fuse_Gestures_ScrollDirections__OnRooted(DataBinding__Fuse_Gestures_ScrollDirections* __this, ::app::Fuse::Node* n)
{
    ::uPtr< ::app::Uno::UX::Property__Fuse_Gestures_ScrollDirections*>(__this->Target())->add_ValueChanged(::uNewDelegateNonVirt(::app::Uno::UX::ValueChangedHandler__Fuse_Gestures_ScrollDirections__typeof(), (const void*)DataBinding__Fuse_Gestures_ScrollDirections__OnValueChanged, __this));
    ::app::Fuse::Reactive::Binding__OnRooted(__this, n);
}

void DataBinding__Fuse_Gestures_ScrollDirections__OnUnrooted(DataBinding__Fuse_Gestures_ScrollDirections* __this, ::app::Fuse::Node* n)
{
    ::app::Fuse::Scripting::NameRegistry__RemoveListener(NULL, (::uObject*)__this);
    ::uPtr< ::app::Uno::UX::Property__Fuse_Gestures_ScrollDirections*>(__this->Target())->remove_ValueChanged(::uNewDelegateNonVirt(::app::Uno::UX::ValueChangedHandler__Fuse_Gestures_ScrollDirections__typeof(), (const void*)DataBinding__Fuse_Gestures_ScrollDirections__OnValueChanged, __this));

    if (__this->_subscription != NULL)
    {
        ::app::Uno::IDisposable::Dispose(::uPtr< ::uObject*>(__this->_subscription));
        __this->_subscription = NULL;
    }

    ::app::Fuse::Reactive::Binding__OnUnrooted(__this, n);
}

void DataBinding__Fuse_Gestures_ScrollDirections__OnValueChanged(DataBinding__Fuse_Gestures_ScrollDirections* __this, ::uObject* sender, ::app::Uno::UX::ValueChangedArgs__Fuse_Gestures_ScrollDirections* args)
{
    if ((__this->_subscription != NULL) && (::uPtr< ::app::Uno::UX::ValueChangedArgs__Fuse_Gestures_ScrollDirections*>(args)->Origin() != __this))
    {
        ::app::Fuse::Reactive::ISubscription::SetExclusive(::uPtr< ::uObject*>(__this->_subscription), ::uBox< int>(::app::Fuse::Gestures::ScrollDirections__typeof(), ::uPtr< ::app::Uno::UX::ValueChangedArgs__Fuse_Gestures_ScrollDirections*>(args)->Value()));
    }
}

void DataBinding__Fuse_Gestures_ScrollDirections__PushValue(DataBinding__Fuse_Gestures_ScrollDirections* __this, ::uObject* newValue)
{
    __this->_currentValue = newValue;

    if (::uIs(newValue, ::app::Fuse::Gestures::ScrollDirections__typeof()))
    {
        ::app::Fuse::Scripting::NameRegistry__RemoveListener(NULL, (::uObject*)__this);
        ::uPtr< ::app::Uno::UX::Property__Fuse_Gestures_ScrollDirections*>(__this->Target())->SetRestState(::uUnbox< int>(::app::Fuse::Gestures::ScrollDirections__typeof(), newValue), (::uObject*)__this);
        return;
    }

    ::uString* name = ::uAs< ::uString*>(newValue, ::app::Uno::String__typeof());

    if (::app::Uno::String__op_Inequality(NULL, name, NULL) && (__this->Node() != NULL))
    {
        ::app::Fuse::Scripting::NameRegistry__AddListener(NULL, name, (::uObject*)__this);
        ::app::Fuse::Node* k = ::uPtr< ::app::Fuse::Node*>(__this->Node())->FindNodeByName(::uCast< ::uString*>(newValue, ::app::Uno::String__typeof()));

        if (::uIs(k, ::app::Fuse::Gestures::ScrollDirections__typeof()))
        {
            ::uPtr< ::app::Uno::UX::Property__Fuse_Gestures_ScrollDirections*>(__this->Target())->SetRestState(::uUnbox< int>(::app::Fuse::Gestures::ScrollDirections__typeof(), (::uObject*)k), (::uObject*)__this);
            return;
        }
        else
        {
            ::uObject* candidate = ::uPtr< ::app::Fuse::Node*>(__this->Node())->FindObjectByName(::uCast< ::uString*>(newValue, ::app::Uno::String__typeof()), ::uNewDelegateNonVirt(::app::Uno::Predicate__object__typeof(), (const void*)DataBinding__Fuse_Gestures_ScrollDirections__Acceptor, __this));

            if (::uIs(candidate, ::app::Fuse::Gestures::ScrollDirections__typeof()))
            {
                ::uPtr< ::app::Uno::UX::Property__Fuse_Gestures_ScrollDirections*>(__this->Target())->SetRestState(::uUnbox< int>(::app::Fuse::Gestures::ScrollDirections__typeof(), candidate), (::uObject*)__this);
                return;
            }
        }
    }

    ::app::Fuse::Reactive::Marshal__ToType__Fuse_Gestures_ScrollDirections(NULL, newValue, ::uNewDelegateNonVirt(::app::Uno::Action__Fuse_Gestures_ScrollDirections__typeof(), (const void*)DataBinding__Fuse_Gestures_ScrollDirections__SetValue, __this));
}

void DataBinding__Fuse_Gestures_ScrollDirections__set_Target(DataBinding__Fuse_Gestures_ScrollDirections* __this, ::app::Uno::UX::Property__Fuse_Gestures_ScrollDirections* value)
{
    __this->_Target = value;
}

void DataBinding__Fuse_Gestures_ScrollDirections__SetValue(DataBinding__Fuse_Gestures_ScrollDirections* __this, int value)
{
    ::uPtr< ::app::Uno::UX::Property__Fuse_Gestures_ScrollDirections*>(__this->Target())->SetRestState(value, (::uObject*)__this);
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Reactive\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

DataBinding__Fuse_Layouts_Dock__uType* DataBinding__Fuse_Layouts_Dock__typeof()
{
    static ::uStaticStrong<DataBinding__Fuse_Layouts_Dock__uType*> type;
    if (type != NULL) return type;

    type = (DataBinding__Fuse_Layouts_Dock__uType*)::uAllocClassType(sizeof(DataBinding__Fuse_Layouts_Dock__uType), "Fuse.Reactive.DataBinding<Fuse.Layouts.Dock>", false, 2, 3, 0);

    type->SetBaseType(::app::Fuse::Reactive::Binding__typeof());
    type->__fp_NewValue = (void(*)(::app::Fuse::Reactive::Binding*, ::uObject*))DataBinding__Fuse_Layouts_Dock__NewValue;
    type->__fp_OnRooted = (void(*)(::app::Fuse::Behavior*, ::app::Fuse::Node*))DataBinding__Fuse_Layouts_Dock__OnRooted;
    type->__fp_OnUnrooted = (void(*)(::app::Fuse::Behavior*, ::app::Fuse::Node*))DataBinding__Fuse_Layouts_Dock__OnUnrooted;
    type->__interface_0.__fp_OnSet = (void(*)(void*, ::uObject*))DataBinding__Fuse_Layouts_Dock__Fuse_Reactive_IObserver_OnSet;
    type->__interface_0.__fp_OnAdd = (void(*)(void*, ::uObject*))DataBinding__Fuse_Layouts_Dock__Fuse_Reactive_IObserver_OnAdd;
    type->__interface_0.__fp_OnNewAt = (void(*)(void*, int, ::uObject*))DataBinding__Fuse_Layouts_Dock__Fuse_Reactive_IObserver_OnNewAt;
    type->__interface_0.__fp_OnFailed = (void(*)(void*, ::uString*))DataBinding__Fuse_Layouts_Dock__Fuse_Reactive_IObserver_OnFailed;
    type->__interface_0.__fp_OnNewAll = (void(*)(void*, int))DataBinding__Fuse_Layouts_Dock__Fuse_Reactive_IObserver_OnNewAll;
    type->__interface_0.__fp_OnRemove = (void(*)(void*, ::uObject*, int))DataBinding__Fuse_Layouts_Dock__Fuse_Reactive_IObserver_OnRemove;
    type->__interface_1.__fp_OnNameChanged = (void(*)(void*, ::uObject*, ::uString*))DataBinding__Fuse_Layouts_Dock__Fuse_Scripting_INameListener_OnNameChanged;

    type->SetInterfaces(
        ::app::Fuse::Reactive::IObserver__typeof(), offsetof(DataBinding__Fuse_Layouts_Dock__uType, __interface_0),
        ::app::Fuse::Scripting::INameListener__typeof(), offsetof(DataBinding__Fuse_Layouts_Dock__uType, __interface_1));

    type->SetStrongRefs(
        "_currentValue", offsetof(DataBinding__Fuse_Layouts_Dock, _currentValue),
        "_subscription", offsetof(DataBinding__Fuse_Layouts_Dock, _subscription),
        "_Target", offsetof(DataBinding__Fuse_Layouts_Dock, _Target));

    type->SetFields(2,
        ::uNewField("_currentValue", NULL, offsetof(DataBinding__Fuse_Layouts_Dock, _currentValue), ::uObject__typeof()),
        ::uNewField("_subscription", NULL, offsetof(DataBinding__Fuse_Layouts_Dock, _subscription), ::app::Fuse::Reactive::ISubscription__typeof()));

    type->SetFunctions(3,
        ::uNewFunction("get_Target", DataBinding__Fuse_Layouts_Dock__get_Target, 0, false, ::app::Uno::UX::Property__Fuse_Layouts_Dock__typeof()),
        ::uNewFunction(".ctor", DataBinding__Fuse_Layouts_Dock__New_1, 0, true, DataBinding__Fuse_Layouts_Dock__typeof(), ::app::Uno::UX::Property__Fuse_Layouts_Dock__typeof(), ::app::Uno::String__typeof()),
        ::uNewFunctionVoid("set_Target", DataBinding__Fuse_Layouts_Dock__set_Target, 0, false, ::app::Uno::UX::Property__Fuse_Layouts_Dock__typeof()));

    ::uRegisterType(type);
    return type;
}

void DataBinding__Fuse_Layouts_Dock___ObjInit_2(DataBinding__Fuse_Layouts_Dock* __this, ::app::Uno::UX::Property__Fuse_Layouts_Dock* target, ::uString* key)
{
    ::app::Fuse::Reactive::Binding___ObjInit_1(__this, key);
    __this->Target(target);
}

bool DataBinding__Fuse_Layouts_Dock__Acceptor(DataBinding__Fuse_Layouts_Dock* __this, ::uObject* obj)
{
    return ::uIs(obj, ::app::Fuse::Layouts::Dock__typeof());
}

void DataBinding__Fuse_Layouts_Dock__Fuse_Reactive_IObserver_OnAdd(DataBinding__Fuse_Layouts_Dock* __this, ::uObject* addedValue)
{
    U_THROW(::app::Uno::Exception__New_2(NULL, ::uGetConstString("Not handled: OnAdd")));
}

void DataBinding__Fuse_Layouts_Dock__Fuse_Reactive_IObserver_OnFailed(DataBinding__Fuse_Layouts_Dock* __this, ::uString* message)
{
    U_THROW(::app::Uno::Exception__New_2(NULL, ::uGetConstString("Not handled: OnFailed")));
}

void DataBinding__Fuse_Layouts_Dock__Fuse_Reactive_IObserver_OnNewAll(DataBinding__Fuse_Layouts_Dock* __this, int length)
{
    if (length > 0)
    {
        U_THROW(::app::Uno::Exception__New_2(NULL, ::uGetConstString("Not handled: OnNewAll")));
    }
}

void DataBinding__Fuse_Layouts_Dock__Fuse_Reactive_IObserver_OnNewAt(DataBinding__Fuse_Layouts_Dock* __this, int index, ::uObject* value)
{
    U_THROW(::app::Uno::Exception__New_2(NULL, ::uGetConstString("Not handled: OnNewAt")));
}

void DataBinding__Fuse_Layouts_Dock__Fuse_Reactive_IObserver_OnRemove(DataBinding__Fuse_Layouts_Dock* __this, ::uObject* value, int index)
{
    U_THROW(::app::Uno::Exception__New_2(NULL, ::uGetConstString("Not handled: OnRemoveAt")));
}

void DataBinding__Fuse_Layouts_Dock__Fuse_Reactive_IObserver_OnSet(DataBinding__Fuse_Layouts_Dock* __this, ::uObject* newValue)
{
    __this->PushValue(newValue);
}

void DataBinding__Fuse_Layouts_Dock__Fuse_Scripting_INameListener_OnNameChanged(DataBinding__Fuse_Layouts_Dock* __this, ::uObject* obj, ::uString* name)
{
    __this->PushValue(__this->_currentValue);
}

::app::Uno::UX::Property__Fuse_Layouts_Dock* DataBinding__Fuse_Layouts_Dock__get_Target(DataBinding__Fuse_Layouts_Dock* __this)
{
    return __this->_Target;
}

DataBinding__Fuse_Layouts_Dock* DataBinding__Fuse_Layouts_Dock__New_1(::uStatic* __this, ::app::Uno::UX::Property__Fuse_Layouts_Dock* target, ::uString* key)
{
    DataBinding__Fuse_Layouts_Dock* inst = (DataBinding__Fuse_Layouts_Dock*)::uAllocObject(sizeof(DataBinding__Fuse_Layouts_Dock), DataBinding__Fuse_Layouts_Dock__typeof());
    inst->_ObjInit_2(target, key);
    return inst;
}

void DataBinding__Fuse_Layouts_Dock__NewValue(DataBinding__Fuse_Layouts_Dock* __this, ::uObject* value)
{
    if (::uIs(value, ::app::Fuse::Layouts::Dock__typeof()))
    {
        __this->PushValue(value);
    }
    else if (::uIs(value, ::app::Fuse::Reactive::IObservable__typeof()))
    {
        if (__this->_subscription != NULL)
        {
            ::app::Uno::IDisposable::Dispose(::uPtr< ::uObject*>(__this->_subscription));
            __this->_subscription = NULL;
        }

        ::uObject* obs = ::uAs< ::uObject*>(value, ::app::Fuse::Reactive::IObservable__typeof());

        if (obs != NULL)
        {
            __this->_subscription = ::app::Fuse::Reactive::IObservable::Subscribe(::uPtr< ::uObject*>(obs), (::uObject*)__this);
        }
    }
    else
    {
        __this->PushValue(value);
    }
}

void DataBinding__Fuse_Layouts_Dock__OnRooted(DataBinding__Fuse_Layouts_Dock* __this, ::app::Fuse::Node* n)
{
    ::uPtr< ::app::Uno::UX::Property__Fuse_Layouts_Dock*>(__this->Target())->add_ValueChanged(::uNewDelegateNonVirt(::app::Uno::UX::ValueChangedHandler__Fuse_Layouts_Dock__typeof(), (const void*)DataBinding__Fuse_Layouts_Dock__OnValueChanged, __this));
    ::app::Fuse::Reactive::Binding__OnRooted(__this, n);
}

void DataBinding__Fuse_Layouts_Dock__OnUnrooted(DataBinding__Fuse_Layouts_Dock* __this, ::app::Fuse::Node* n)
{
    ::app::Fuse::Scripting::NameRegistry__RemoveListener(NULL, (::uObject*)__this);
    ::uPtr< ::app::Uno::UX::Property__Fuse_Layouts_Dock*>(__this->Target())->remove_ValueChanged(::uNewDelegateNonVirt(::app::Uno::UX::ValueChangedHandler__Fuse_Layouts_Dock__typeof(), (const void*)DataBinding__Fuse_Layouts_Dock__OnValueChanged, __this));

    if (__this->_subscription != NULL)
    {
        ::app::Uno::IDisposable::Dispose(::uPtr< ::uObject*>(__this->_subscription));
        __this->_subscription = NULL;
    }

    ::app::Fuse::Reactive::Binding__OnUnrooted(__this, n);
}

void DataBinding__Fuse_Layouts_Dock__OnValueChanged(DataBinding__Fuse_Layouts_Dock* __this, ::uObject* sender, ::app::Uno::UX::ValueChangedArgs__Fuse_Layouts_Dock* args)
{
    if ((__this->_subscription != NULL) && (::uPtr< ::app::Uno::UX::ValueChangedArgs__Fuse_Layouts_Dock*>(args)->Origin() != __this))
    {
        ::app::Fuse::Reactive::ISubscription::SetExclusive(::uPtr< ::uObject*>(__this->_subscription), ::uBox< int>(::app::Fuse::Layouts::Dock__typeof(), ::uPtr< ::app::Uno::UX::ValueChangedArgs__Fuse_Layouts_Dock*>(args)->Value()));
    }
}

void DataBinding__Fuse_Layouts_Dock__PushValue(DataBinding__Fuse_Layouts_Dock* __this, ::uObject* newValue)
{
    __this->_currentValue = newValue;

    if (::uIs(newValue, ::app::Fuse::Layouts::Dock__typeof()))
    {
        ::app::Fuse::Scripting::NameRegistry__RemoveListener(NULL, (::uObject*)__this);
        ::uPtr< ::app::Uno::UX::Property__Fuse_Layouts_Dock*>(__this->Target())->SetRestState(::uUnbox< int>(::app::Fuse::Layouts::Dock__typeof(), newValue), (::uObject*)__this);
        return;
    }

    ::uString* name = ::uAs< ::uString*>(newValue, ::app::Uno::String__typeof());

    if (::app::Uno::String__op_Inequality(NULL, name, NULL) && (__this->Node() != NULL))
    {
        ::app::Fuse::Scripting::NameRegistry__AddListener(NULL, name, (::uObject*)__this);
        ::app::Fuse::Node* k = ::uPtr< ::app::Fuse::Node*>(__this->Node())->FindNodeByName(::uCast< ::uString*>(newValue, ::app::Uno::String__typeof()));

        if (::uIs(k, ::app::Fuse::Layouts::Dock__typeof()))
        {
            ::uPtr< ::app::Uno::UX::Property__Fuse_Layouts_Dock*>(__this->Target())->SetRestState(::uUnbox< int>(::app::Fuse::Layouts::Dock__typeof(), (::uObject*)k), (::uObject*)__this);
            return;
        }
        else
        {
            ::uObject* candidate = ::uPtr< ::app::Fuse::Node*>(__this->Node())->FindObjectByName(::uCast< ::uString*>(newValue, ::app::Uno::String__typeof()), ::uNewDelegateNonVirt(::app::Uno::Predicate__object__typeof(), (const void*)DataBinding__Fuse_Layouts_Dock__Acceptor, __this));

            if (::uIs(candidate, ::app::Fuse::Layouts::Dock__typeof()))
            {
                ::uPtr< ::app::Uno::UX::Property__Fuse_Layouts_Dock*>(__this->Target())->SetRestState(::uUnbox< int>(::app::Fuse::Layouts::Dock__typeof(), candidate), (::uObject*)__this);
                return;
            }
        }
    }

    ::app::Fuse::Reactive::Marshal__ToType__Fuse_Layouts_Dock(NULL, newValue, ::uNewDelegateNonVirt(::app::Uno::Action__Fuse_Layouts_Dock__typeof(), (const void*)DataBinding__Fuse_Layouts_Dock__SetValue, __this));
}

void DataBinding__Fuse_Layouts_Dock__set_Target(DataBinding__Fuse_Layouts_Dock* __this, ::app::Uno::UX::Property__Fuse_Layouts_Dock* value)
{
    __this->_Target = value;
}

void DataBinding__Fuse_Layouts_Dock__SetValue(DataBinding__Fuse_Layouts_Dock* __this, int value)
{
    ::uPtr< ::app::Uno::UX::Property__Fuse_Layouts_Dock*>(__this->Target())->SetRestState(value, (::uObject*)__this);
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Reactive\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

DataBinding__Fuse_Layouts_FlowDirection__uType* DataBinding__Fuse_Layouts_FlowDirection__typeof()
{
    static ::uStaticStrong<DataBinding__Fuse_Layouts_FlowDirection__uType*> type;
    if (type != NULL) return type;

    type = (DataBinding__Fuse_Layouts_FlowDirection__uType*)::uAllocClassType(sizeof(DataBinding__Fuse_Layouts_FlowDirection__uType), "Fuse.Reactive.DataBinding<Fuse.Layouts.FlowDirection>", false, 2, 3, 0);

    type->SetBaseType(::app::Fuse::Reactive::Binding__typeof());
    type->__fp_NewValue = (void(*)(::app::Fuse::Reactive::Binding*, ::uObject*))DataBinding__Fuse_Layouts_FlowDirection__NewValue;
    type->__fp_OnRooted = (void(*)(::app::Fuse::Behavior*, ::app::Fuse::Node*))DataBinding__Fuse_Layouts_FlowDirection__OnRooted;
    type->__fp_OnUnrooted = (void(*)(::app::Fuse::Behavior*, ::app::Fuse::Node*))DataBinding__Fuse_Layouts_FlowDirection__OnUnrooted;
    type->__interface_0.__fp_OnSet = (void(*)(void*, ::uObject*))DataBinding__Fuse_Layouts_FlowDirection__Fuse_Reactive_IObserver_OnSet;
    type->__interface_0.__fp_OnAdd = (void(*)(void*, ::uObject*))DataBinding__Fuse_Layouts_FlowDirection__Fuse_Reactive_IObserver_OnAdd;
    type->__interface_0.__fp_OnNewAt = (void(*)(void*, int, ::uObject*))DataBinding__Fuse_Layouts_FlowDirection__Fuse_Reactive_IObserver_OnNewAt;
    type->__interface_0.__fp_OnFailed = (void(*)(void*, ::uString*))DataBinding__Fuse_Layouts_FlowDirection__Fuse_Reactive_IObserver_OnFailed;
    type->__interface_0.__fp_OnNewAll = (void(*)(void*, int))DataBinding__Fuse_Layouts_FlowDirection__Fuse_Reactive_IObserver_OnNewAll;
    type->__interface_0.__fp_OnRemove = (void(*)(void*, ::uObject*, int))DataBinding__Fuse_Layouts_FlowDirection__Fuse_Reactive_IObserver_OnRemove;
    type->__interface_1.__fp_OnNameChanged = (void(*)(void*, ::uObject*, ::uString*))DataBinding__Fuse_Layouts_FlowDirection__Fuse_Scripting_INameListener_OnNameChanged;

    type->SetInterfaces(
        ::app::Fuse::Reactive::IObserver__typeof(), offsetof(DataBinding__Fuse_Layouts_FlowDirection__uType, __interface_0),
        ::app::Fuse::Scripting::INameListener__typeof(), offsetof(DataBinding__Fuse_Layouts_FlowDirection__uType, __interface_1));

    type->SetStrongRefs(
        "_currentValue", offsetof(DataBinding__Fuse_Layouts_FlowDirection, _currentValue),
        "_subscription", offsetof(DataBinding__Fuse_Layouts_FlowDirection, _subscription),
        "_Target", offsetof(DataBinding__Fuse_Layouts_FlowDirection, _Target));

    type->SetFields(2,
        ::uNewField("_currentValue", NULL, offsetof(DataBinding__Fuse_Layouts_FlowDirection, _currentValue), ::uObject__typeof()),
        ::uNewField("_subscription", NULL, offsetof(DataBinding__Fuse_Layouts_FlowDirection, _subscription), ::app::Fuse::Reactive::ISubscription__typeof()));

    type->SetFunctions(3,
        ::uNewFunction("get_Target", DataBinding__Fuse_Layouts_FlowDirection__get_Target, 0, false, ::app::Uno::UX::Property__Fuse_Layouts_FlowDirection__typeof()),
        ::uNewFunction(".ctor", DataBinding__Fuse_Layouts_FlowDirection__New_1, 0, true, DataBinding__Fuse_Layouts_FlowDirection__typeof(), ::app::Uno::UX::Property__Fuse_Layouts_FlowDirection__typeof(), ::app::Uno::String__typeof()),
        ::uNewFunctionVoid("set_Target", DataBinding__Fuse_Layouts_FlowDirection__set_Target, 0, false, ::app::Uno::UX::Property__Fuse_Layouts_FlowDirection__typeof()));

    ::uRegisterType(type);
    return type;
}

void DataBinding__Fuse_Layouts_FlowDirection___ObjInit_2(DataBinding__Fuse_Layouts_FlowDirection* __this, ::app::Uno::UX::Property__Fuse_Layouts_FlowDirection* target, ::uString* key)
{
    ::app::Fuse::Reactive::Binding___ObjInit_1(__this, key);
    __this->Target(target);
}

bool DataBinding__Fuse_Layouts_FlowDirection__Acceptor(DataBinding__Fuse_Layouts_FlowDirection* __this, ::uObject* obj)
{
    return ::uIs(obj, ::app::Fuse::Layouts::FlowDirection__typeof());
}

void DataBinding__Fuse_Layouts_FlowDirection__Fuse_Reactive_IObserver_OnAdd(DataBinding__Fuse_Layouts_FlowDirection* __this, ::uObject* addedValue)
{
    U_THROW(::app::Uno::Exception__New_2(NULL, ::uGetConstString("Not handled: OnAdd")));
}

void DataBinding__Fuse_Layouts_FlowDirection__Fuse_Reactive_IObserver_OnFailed(DataBinding__Fuse_Layouts_FlowDirection* __this, ::uString* message)
{
    U_THROW(::app::Uno::Exception__New_2(NULL, ::uGetConstString("Not handled: OnFailed")));
}

void DataBinding__Fuse_Layouts_FlowDirection__Fuse_Reactive_IObserver_OnNewAll(DataBinding__Fuse_Layouts_FlowDirection* __this, int length)
{
    if (length > 0)
    {
        U_THROW(::app::Uno::Exception__New_2(NULL, ::uGetConstString("Not handled: OnNewAll")));
    }
}

void DataBinding__Fuse_Layouts_FlowDirection__Fuse_Reactive_IObserver_OnNewAt(DataBinding__Fuse_Layouts_FlowDirection* __this, int index, ::uObject* value)
{
    U_THROW(::app::Uno::Exception__New_2(NULL, ::uGetConstString("Not handled: OnNewAt")));
}

void DataBinding__Fuse_Layouts_FlowDirection__Fuse_Reactive_IObserver_OnRemove(DataBinding__Fuse_Layouts_FlowDirection* __this, ::uObject* value, int index)
{
    U_THROW(::app::Uno::Exception__New_2(NULL, ::uGetConstString("Not handled: OnRemoveAt")));
}

void DataBinding__Fuse_Layouts_FlowDirection__Fuse_Reactive_IObserver_OnSet(DataBinding__Fuse_Layouts_FlowDirection* __this, ::uObject* newValue)
{
    __this->PushValue(newValue);
}

void DataBinding__Fuse_Layouts_FlowDirection__Fuse_Scripting_INameListener_OnNameChanged(DataBinding__Fuse_Layouts_FlowDirection* __this, ::uObject* obj, ::uString* name)
{
    __this->PushValue(__this->_currentValue);
}

::app::Uno::UX::Property__Fuse_Layouts_FlowDirection* DataBinding__Fuse_Layouts_FlowDirection__get_Target(DataBinding__Fuse_Layouts_FlowDirection* __this)
{
    return __this->_Target;
}

DataBinding__Fuse_Layouts_FlowDirection* DataBinding__Fuse_Layouts_FlowDirection__New_1(::uStatic* __this, ::app::Uno::UX::Property__Fuse_Layouts_FlowDirection* target, ::uString* key)
{
    DataBinding__Fuse_Layouts_FlowDirection* inst = (DataBinding__Fuse_Layouts_FlowDirection*)::uAllocObject(sizeof(DataBinding__Fuse_Layouts_FlowDirection), DataBinding__Fuse_Layouts_FlowDirection__typeof());
    inst->_ObjInit_2(target, key);
    return inst;
}

void DataBinding__Fuse_Layouts_FlowDirection__NewValue(DataBinding__Fuse_Layouts_FlowDirection* __this, ::uObject* value)
{
    if (::uIs(value, ::app::Fuse::Layouts::FlowDirection__typeof()))
    {
        __this->PushValue(value);
    }
    else if (::uIs(value, ::app::Fuse::Reactive::IObservable__typeof()))
    {
        if (__this->_subscription != NULL)
        {
            ::app::Uno::IDisposable::Dispose(::uPtr< ::uObject*>(__this->_subscription));
            __this->_subscription = NULL;
        }

        ::uObject* obs = ::uAs< ::uObject*>(value, ::app::Fuse::Reactive::IObservable__typeof());

        if (obs != NULL)
        {
            __this->_subscription = ::app::Fuse::Reactive::IObservable::Subscribe(::uPtr< ::uObject*>(obs), (::uObject*)__this);
        }
    }
    else
    {
        __this->PushValue(value);
    }
}

void DataBinding__Fuse_Layouts_FlowDirection__OnRooted(DataBinding__Fuse_Layouts_FlowDirection* __this, ::app::Fuse::Node* n)
{
    ::uPtr< ::app::Uno::UX::Property__Fuse_Layouts_FlowDirection*>(__this->Target())->add_ValueChanged(::uNewDelegateNonVirt(::app::Uno::UX::ValueChangedHandler__Fuse_Layouts_FlowDirection__typeof(), (const void*)DataBinding__Fuse_Layouts_FlowDirection__OnValueChanged, __this));
    ::app::Fuse::Reactive::Binding__OnRooted(__this, n);
}

void DataBinding__Fuse_Layouts_FlowDirection__OnUnrooted(DataBinding__Fuse_Layouts_FlowDirection* __this, ::app::Fuse::Node* n)
{
    ::app::Fuse::Scripting::NameRegistry__RemoveListener(NULL, (::uObject*)__this);
    ::uPtr< ::app::Uno::UX::Property__Fuse_Layouts_FlowDirection*>(__this->Target())->remove_ValueChanged(::uNewDelegateNonVirt(::app::Uno::UX::ValueChangedHandler__Fuse_Layouts_FlowDirection__typeof(), (const void*)DataBinding__Fuse_Layouts_FlowDirection__OnValueChanged, __this));

    if (__this->_subscription != NULL)
    {
        ::app::Uno::IDisposable::Dispose(::uPtr< ::uObject*>(__this->_subscription));
        __this->_subscription = NULL;
    }

    ::app::Fuse::Reactive::Binding__OnUnrooted(__this, n);
}

void DataBinding__Fuse_Layouts_FlowDirection__OnValueChanged(DataBinding__Fuse_Layouts_FlowDirection* __this, ::uObject* sender, ::app::Uno::UX::ValueChangedArgs__Fuse_Layouts_FlowDirection* args)
{
    if ((__this->_subscription != NULL) && (::uPtr< ::app::Uno::UX::ValueChangedArgs__Fuse_Layouts_FlowDirection*>(args)->Origin() != __this))
    {
        ::app::Fuse::Reactive::ISubscription::SetExclusive(::uPtr< ::uObject*>(__this->_subscription), ::uBox< int>(::app::Fuse::Layouts::FlowDirection__typeof(), ::uPtr< ::app::Uno::UX::ValueChangedArgs__Fuse_Layouts_FlowDirection*>(args)->Value()));
    }
}

void DataBinding__Fuse_Layouts_FlowDirection__PushValue(DataBinding__Fuse_Layouts_FlowDirection* __this, ::uObject* newValue)
{
    __this->_currentValue = newValue;

    if (::uIs(newValue, ::app::Fuse::Layouts::FlowDirection__typeof()))
    {
        ::app::Fuse::Scripting::NameRegistry__RemoveListener(NULL, (::uObject*)__this);
        ::uPtr< ::app::Uno::UX::Property__Fuse_Layouts_FlowDirection*>(__this->Target())->SetRestState(::uUnbox< int>(::app::Fuse::Layouts::FlowDirection__typeof(), newValue), (::uObject*)__this);
        return;
    }

    ::uString* name = ::uAs< ::uString*>(newValue, ::app::Uno::String__typeof());

    if (::app::Uno::String__op_Inequality(NULL, name, NULL) && (__this->Node() != NULL))
    {
        ::app::Fuse::Scripting::NameRegistry__AddListener(NULL, name, (::uObject*)__this);
        ::app::Fuse::Node* k = ::uPtr< ::app::Fuse::Node*>(__this->Node())->FindNodeByName(::uCast< ::uString*>(newValue, ::app::Uno::String__typeof()));

        if (::uIs(k, ::app::Fuse::Layouts::FlowDirection__typeof()))
        {
            ::uPtr< ::app::Uno::UX::Property__Fuse_Layouts_FlowDirection*>(__this->Target())->SetRestState(::uUnbox< int>(::app::Fuse::Layouts::FlowDirection__typeof(), (::uObject*)k), (::uObject*)__this);
            return;
        }
        else
        {
            ::uObject* candidate = ::uPtr< ::app::Fuse::Node*>(__this->Node())->FindObjectByName(::uCast< ::uString*>(newValue, ::app::Uno::String__typeof()), ::uNewDelegateNonVirt(::app::Uno::Predicate__object__typeof(), (const void*)DataBinding__Fuse_Layouts_FlowDirection__Acceptor, __this));

            if (::uIs(candidate, ::app::Fuse::Layouts::FlowDirection__typeof()))
            {
                ::uPtr< ::app::Uno::UX::Property__Fuse_Layouts_FlowDirection*>(__this->Target())->SetRestState(::uUnbox< int>(::app::Fuse::Layouts::FlowDirection__typeof(), candidate), (::uObject*)__this);
                return;
            }
        }
    }

    ::app::Fuse::Reactive::Marshal__ToType__Fuse_Layouts_FlowDirection(NULL, newValue, ::uNewDelegateNonVirt(::app::Uno::Action__Fuse_Layouts_FlowDirection__typeof(), (const void*)DataBinding__Fuse_Layouts_FlowDirection__SetValue, __this));
}

void DataBinding__Fuse_Layouts_FlowDirection__set_Target(DataBinding__Fuse_Layouts_FlowDirection* __this, ::app::Uno::UX::Property__Fuse_Layouts_FlowDirection* value)
{
    __this->_Target = value;
}

void DataBinding__Fuse_Layouts_FlowDirection__SetValue(DataBinding__Fuse_Layouts_FlowDirection* __this, int value)
{
    ::uPtr< ::app::Uno::UX::Property__Fuse_Layouts_FlowDirection*>(__this->Target())->SetRestState(value, (::uObject*)__this);
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Reactive\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

DataBinding__Fuse_Layouts_Metric__uType* DataBinding__Fuse_Layouts_Metric__typeof()
{
    static ::uStaticStrong<DataBinding__Fuse_Layouts_Metric__uType*> type;
    if (type != NULL) return type;

    type = (DataBinding__Fuse_Layouts_Metric__uType*)::uAllocClassType(sizeof(DataBinding__Fuse_Layouts_Metric__uType), "Fuse.Reactive.DataBinding<Fuse.Layouts.Metric>", false, 2, 3, 0);

    type->SetBaseType(::app::Fuse::Reactive::Binding__typeof());
    type->__fp_NewValue = (void(*)(::app::Fuse::Reactive::Binding*, ::uObject*))DataBinding__Fuse_Layouts_Metric__NewValue;
    type->__fp_OnRooted = (void(*)(::app::Fuse::Behavior*, ::app::Fuse::Node*))DataBinding__Fuse_Layouts_Metric__OnRooted;
    type->__fp_OnUnrooted = (void(*)(::app::Fuse::Behavior*, ::app::Fuse::Node*))DataBinding__Fuse_Layouts_Metric__OnUnrooted;
    type->__interface_0.__fp_OnSet = (void(*)(void*, ::uObject*))DataBinding__Fuse_Layouts_Metric__Fuse_Reactive_IObserver_OnSet;
    type->__interface_0.__fp_OnAdd = (void(*)(void*, ::uObject*))DataBinding__Fuse_Layouts_Metric__Fuse_Reactive_IObserver_OnAdd;
    type->__interface_0.__fp_OnNewAt = (void(*)(void*, int, ::uObject*))DataBinding__Fuse_Layouts_Metric__Fuse_Reactive_IObserver_OnNewAt;
    type->__interface_0.__fp_OnFailed = (void(*)(void*, ::uString*))DataBinding__Fuse_Layouts_Metric__Fuse_Reactive_IObserver_OnFailed;
    type->__interface_0.__fp_OnNewAll = (void(*)(void*, int))DataBinding__Fuse_Layouts_Metric__Fuse_Reactive_IObserver_OnNewAll;
    type->__interface_0.__fp_OnRemove = (void(*)(void*, ::uObject*, int))DataBinding__Fuse_Layouts_Metric__Fuse_Reactive_IObserver_OnRemove;
    type->__interface_1.__fp_OnNameChanged = (void(*)(void*, ::uObject*, ::uString*))DataBinding__Fuse_Layouts_Metric__Fuse_Scripting_INameListener_OnNameChanged;

    type->SetInterfaces(
        ::app::Fuse::Reactive::IObserver__typeof(), offsetof(DataBinding__Fuse_Layouts_Metric__uType, __interface_0),
        ::app::Fuse::Scripting::INameListener__typeof(), offsetof(DataBinding__Fuse_Layouts_Metric__uType, __interface_1));

    type->SetStrongRefs(
        "_currentValue", offsetof(DataBinding__Fuse_Layouts_Metric, _currentValue),
        "_subscription", offsetof(DataBinding__Fuse_Layouts_Metric, _subscription),
        "_Target", offsetof(DataBinding__Fuse_Layouts_Metric, _Target));

    type->SetFields(2,
        ::uNewField("_currentValue", NULL, offsetof(DataBinding__Fuse_Layouts_Metric, _currentValue), ::uObject__typeof()),
        ::uNewField("_subscription", NULL, offsetof(DataBinding__Fuse_Layouts_Metric, _subscription), ::app::Fuse::Reactive::ISubscription__typeof()));

    type->SetFunctions(3,
        ::uNewFunction("get_Target", DataBinding__Fuse_Layouts_Metric__get_Target, 0, false, ::app::Uno::UX::Property__Fuse_Layouts_Metric__typeof()),
        ::uNewFunction(".ctor", DataBinding__Fuse_Layouts_Metric__New_1, 0, true, DataBinding__Fuse_Layouts_Metric__typeof(), ::app::Uno::UX::Property__Fuse_Layouts_Metric__typeof(), ::app::Uno::String__typeof()),
        ::uNewFunctionVoid("set_Target", DataBinding__Fuse_Layouts_Metric__set_Target, 0, false, ::app::Uno::UX::Property__Fuse_Layouts_Metric__typeof()));

    ::uRegisterType(type);
    return type;
}

void DataBinding__Fuse_Layouts_Metric___ObjInit_2(DataBinding__Fuse_Layouts_Metric* __this, ::app::Uno::UX::Property__Fuse_Layouts_Metric* target, ::uString* key)
{
    ::app::Fuse::Reactive::Binding___ObjInit_1(__this, key);
    __this->Target(target);
}

bool DataBinding__Fuse_Layouts_Metric__Acceptor(DataBinding__Fuse_Layouts_Metric* __this, ::uObject* obj)
{
    return ::uIs(obj, ::app::Fuse::Layouts::Metric__typeof());
}

void DataBinding__Fuse_Layouts_Metric__Fuse_Reactive_IObserver_OnAdd(DataBinding__Fuse_Layouts_Metric* __this, ::uObject* addedValue)
{
    U_THROW(::app::Uno::Exception__New_2(NULL, ::uGetConstString("Not handled: OnAdd")));
}

void DataBinding__Fuse_Layouts_Metric__Fuse_Reactive_IObserver_OnFailed(DataBinding__Fuse_Layouts_Metric* __this, ::uString* message)
{
    U_THROW(::app::Uno::Exception__New_2(NULL, ::uGetConstString("Not handled: OnFailed")));
}

void DataBinding__Fuse_Layouts_Metric__Fuse_Reactive_IObserver_OnNewAll(DataBinding__Fuse_Layouts_Metric* __this, int length)
{
    if (length > 0)
    {
        U_THROW(::app::Uno::Exception__New_2(NULL, ::uGetConstString("Not handled: OnNewAll")));
    }
}

void DataBinding__Fuse_Layouts_Metric__Fuse_Reactive_IObserver_OnNewAt(DataBinding__Fuse_Layouts_Metric* __this, int index, ::uObject* value)
{
    U_THROW(::app::Uno::Exception__New_2(NULL, ::uGetConstString("Not handled: OnNewAt")));
}

void DataBinding__Fuse_Layouts_Metric__Fuse_Reactive_IObserver_OnRemove(DataBinding__Fuse_Layouts_Metric* __this, ::uObject* value, int index)
{
    U_THROW(::app::Uno::Exception__New_2(NULL, ::uGetConstString("Not handled: OnRemoveAt")));
}

void DataBinding__Fuse_Layouts_Metric__Fuse_Reactive_IObserver_OnSet(DataBinding__Fuse_Layouts_Metric* __this, ::uObject* newValue)
{
    __this->PushValue(newValue);
}

void DataBinding__Fuse_Layouts_Metric__Fuse_Scripting_INameListener_OnNameChanged(DataBinding__Fuse_Layouts_Metric* __this, ::uObject* obj, ::uString* name)
{
    __this->PushValue(__this->_currentValue);
}

::app::Uno::UX::Property__Fuse_Layouts_Metric* DataBinding__Fuse_Layouts_Metric__get_Target(DataBinding__Fuse_Layouts_Metric* __this)
{
    return __this->_Target;
}

DataBinding__Fuse_Layouts_Metric* DataBinding__Fuse_Layouts_Metric__New_1(::uStatic* __this, ::app::Uno::UX::Property__Fuse_Layouts_Metric* target, ::uString* key)
{
    DataBinding__Fuse_Layouts_Metric* inst = (DataBinding__Fuse_Layouts_Metric*)::uAllocObject(sizeof(DataBinding__Fuse_Layouts_Metric), DataBinding__Fuse_Layouts_Metric__typeof());
    inst->_ObjInit_2(target, key);
    return inst;
}

void DataBinding__Fuse_Layouts_Metric__NewValue(DataBinding__Fuse_Layouts_Metric* __this, ::uObject* value)
{
    if (::uIs(value, ::app::Fuse::Layouts::Metric__typeof()))
    {
        __this->PushValue(value);
    }
    else if (::uIs(value, ::app::Fuse::Reactive::IObservable__typeof()))
    {
        if (__this->_subscription != NULL)
        {
            ::app::Uno::IDisposable::Dispose(::uPtr< ::uObject*>(__this->_subscription));
            __this->_subscription = NULL;
        }

        ::uObject* obs = ::uAs< ::uObject*>(value, ::app::Fuse::Reactive::IObservable__typeof());

        if (obs != NULL)
        {
            __this->_subscription = ::app::Fuse::Reactive::IObservable::Subscribe(::uPtr< ::uObject*>(obs), (::uObject*)__this);
        }
    }
    else
    {
        __this->PushValue(value);
    }
}

void DataBinding__Fuse_Layouts_Metric__OnRooted(DataBinding__Fuse_Layouts_Metric* __this, ::app::Fuse::Node* n)
{
    ::uPtr< ::app::Uno::UX::Property__Fuse_Layouts_Metric*>(__this->Target())->add_ValueChanged(::uNewDelegateNonVirt(::app::Uno::UX::ValueChangedHandler__Fuse_Layouts_Metric__typeof(), (const void*)DataBinding__Fuse_Layouts_Metric__OnValueChanged, __this));
    ::app::Fuse::Reactive::Binding__OnRooted(__this, n);
}

void DataBinding__Fuse_Layouts_Metric__OnUnrooted(DataBinding__Fuse_Layouts_Metric* __this, ::app::Fuse::Node* n)
{
    ::app::Fuse::Scripting::NameRegistry__RemoveListener(NULL, (::uObject*)__this);
    ::uPtr< ::app::Uno::UX::Property__Fuse_Layouts_Metric*>(__this->Target())->remove_ValueChanged(::uNewDelegateNonVirt(::app::Uno::UX::ValueChangedHandler__Fuse_Layouts_Metric__typeof(), (const void*)DataBinding__Fuse_Layouts_Metric__OnValueChanged, __this));

    if (__this->_subscription != NULL)
    {
        ::app::Uno::IDisposable::Dispose(::uPtr< ::uObject*>(__this->_subscription));
        __this->_subscription = NULL;
    }

    ::app::Fuse::Reactive::Binding__OnUnrooted(__this, n);
}

void DataBinding__Fuse_Layouts_Metric__OnValueChanged(DataBinding__Fuse_Layouts_Metric* __this, ::uObject* sender, ::app::Uno::UX::ValueChangedArgs__Fuse_Layouts_Metric* args)
{
    if ((__this->_subscription != NULL) && (::uPtr< ::app::Uno::UX::ValueChangedArgs__Fuse_Layouts_Metric*>(args)->Origin() != __this))
    {
        ::app::Fuse::Reactive::ISubscription::SetExclusive(::uPtr< ::uObject*>(__this->_subscription), ::uBox< int>(::app::Fuse::Layouts::Metric__typeof(), ::uPtr< ::app::Uno::UX::ValueChangedArgs__Fuse_Layouts_Metric*>(args)->Value()));
    }
}

void DataBinding__Fuse_Layouts_Metric__PushValue(DataBinding__Fuse_Layouts_Metric* __this, ::uObject* newValue)
{
    __this->_currentValue = newValue;

    if (::uIs(newValue, ::app::Fuse::Layouts::Metric__typeof()))
    {
        ::app::Fuse::Scripting::NameRegistry__RemoveListener(NULL, (::uObject*)__this);
        ::uPtr< ::app::Uno::UX::Property__Fuse_Layouts_Metric*>(__this->Target())->SetRestState(::uUnbox< int>(::app::Fuse::Layouts::Metric__typeof(), newValue), (::uObject*)__this);
        return;
    }

    ::uString* name = ::uAs< ::uString*>(newValue, ::app::Uno::String__typeof());

    if (::app::Uno::String__op_Inequality(NULL, name, NULL) && (__this->Node() != NULL))
    {
        ::app::Fuse::Scripting::NameRegistry__AddListener(NULL, name, (::uObject*)__this);
        ::app::Fuse::Node* k = ::uPtr< ::app::Fuse::Node*>(__this->Node())->FindNodeByName(::uCast< ::uString*>(newValue, ::app::Uno::String__typeof()));

        if (::uIs(k, ::app::Fuse::Layouts::Metric__typeof()))
        {
            ::uPtr< ::app::Uno::UX::Property__Fuse_Layouts_Metric*>(__this->Target())->SetRestState(::uUnbox< int>(::app::Fuse::Layouts::Metric__typeof(), (::uObject*)k), (::uObject*)__this);
            return;
        }
        else
        {
            ::uObject* candidate = ::uPtr< ::app::Fuse::Node*>(__this->Node())->FindObjectByName(::uCast< ::uString*>(newValue, ::app::Uno::String__typeof()), ::uNewDelegateNonVirt(::app::Uno::Predicate__object__typeof(), (const void*)DataBinding__Fuse_Layouts_Metric__Acceptor, __this));

            if (::uIs(candidate, ::app::Fuse::Layouts::Metric__typeof()))
            {
                ::uPtr< ::app::Uno::UX::Property__Fuse_Layouts_Metric*>(__this->Target())->SetRestState(::uUnbox< int>(::app::Fuse::Layouts::Metric__typeof(), candidate), (::uObject*)__this);
                return;
            }
        }
    }

    ::app::Fuse::Reactive::Marshal__ToType__Fuse_Layouts_Metric(NULL, newValue, ::uNewDelegateNonVirt(::app::Uno::Action__Fuse_Layouts_Metric__typeof(), (const void*)DataBinding__Fuse_Layouts_Metric__SetValue, __this));
}

void DataBinding__Fuse_Layouts_Metric__set_Target(DataBinding__Fuse_Layouts_Metric* __this, ::app::Uno::UX::Property__Fuse_Layouts_Metric* value)
{
    __this->_Target = value;
}

void DataBinding__Fuse_Layouts_Metric__SetValue(DataBinding__Fuse_Layouts_Metric* __this, int value)
{
    ::uPtr< ::app::Uno::UX::Property__Fuse_Layouts_Metric*>(__this->Target())->SetRestState(value, (::uObject*)__this);
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Reactive\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

DataBinding__Fuse_Layouts_Orientation__uType* DataBinding__Fuse_Layouts_Orientation__typeof()
{
    static ::uStaticStrong<DataBinding__Fuse_Layouts_Orientation__uType*> type;
    if (type != NULL) return type;

    type = (DataBinding__Fuse_Layouts_Orientation__uType*)::uAllocClassType(sizeof(DataBinding__Fuse_Layouts_Orientation__uType), "Fuse.Reactive.DataBinding<Fuse.Layouts.Orientation>", false, 2, 3, 0);

    type->SetBaseType(::app::Fuse::Reactive::Binding__typeof());
    type->__fp_NewValue = (void(*)(::app::Fuse::Reactive::Binding*, ::uObject*))DataBinding__Fuse_Layouts_Orientation__NewValue;
    type->__fp_OnRooted = (void(*)(::app::Fuse::Behavior*, ::app::Fuse::Node*))DataBinding__Fuse_Layouts_Orientation__OnRooted;
    type->__fp_OnUnrooted = (void(*)(::app::Fuse::Behavior*, ::app::Fuse::Node*))DataBinding__Fuse_Layouts_Orientation__OnUnrooted;
    type->__interface_0.__fp_OnSet = (void(*)(void*, ::uObject*))DataBinding__Fuse_Layouts_Orientation__Fuse_Reactive_IObserver_OnSet;
    type->__interface_0.__fp_OnAdd = (void(*)(void*, ::uObject*))DataBinding__Fuse_Layouts_Orientation__Fuse_Reactive_IObserver_OnAdd;
    type->__interface_0.__fp_OnNewAt = (void(*)(void*, int, ::uObject*))DataBinding__Fuse_Layouts_Orientation__Fuse_Reactive_IObserver_OnNewAt;
    type->__interface_0.__fp_OnFailed = (void(*)(void*, ::uString*))DataBinding__Fuse_Layouts_Orientation__Fuse_Reactive_IObserver_OnFailed;
    type->__interface_0.__fp_OnNewAll = (void(*)(void*, int))DataBinding__Fuse_Layouts_Orientation__Fuse_Reactive_IObserver_OnNewAll;
    type->__interface_0.__fp_OnRemove = (void(*)(void*, ::uObject*, int))DataBinding__Fuse_Layouts_Orientation__Fuse_Reactive_IObserver_OnRemove;
    type->__interface_1.__fp_OnNameChanged = (void(*)(void*, ::uObject*, ::uString*))DataBinding__Fuse_Layouts_Orientation__Fuse_Scripting_INameListener_OnNameChanged;

    type->SetInterfaces(
        ::app::Fuse::Reactive::IObserver__typeof(), offsetof(DataBinding__Fuse_Layouts_Orientation__uType, __interface_0),
        ::app::Fuse::Scripting::INameListener__typeof(), offsetof(DataBinding__Fuse_Layouts_Orientation__uType, __interface_1));

    type->SetStrongRefs(
        "_currentValue", offsetof(DataBinding__Fuse_Layouts_Orientation, _currentValue),
        "_subscription", offsetof(DataBinding__Fuse_Layouts_Orientation, _subscription),
        "_Target", offsetof(DataBinding__Fuse_Layouts_Orientation, _Target));

    type->SetFields(2,
        ::uNewField("_currentValue", NULL, offsetof(DataBinding__Fuse_Layouts_Orientation, _currentValue), ::uObject__typeof()),
        ::uNewField("_subscription", NULL, offsetof(DataBinding__Fuse_Layouts_Orientation, _subscription), ::app::Fuse::Reactive::ISubscription__typeof()));

    type->SetFunctions(3,
        ::uNewFunction("get_Target", DataBinding__Fuse_Layouts_Orientation__get_Target, 0, false, ::app::Uno::UX::Property__Fuse_Layouts_Orientation__typeof()),
        ::uNewFunction(".ctor", DataBinding__Fuse_Layouts_Orientation__New_1, 0, true, DataBinding__Fuse_Layouts_Orientation__typeof(), ::app::Uno::UX::Property__Fuse_Layouts_Orientation__typeof(), ::app::Uno::String__typeof()),
        ::uNewFunctionVoid("set_Target", DataBinding__Fuse_Layouts_Orientation__set_Target, 0, false, ::app::Uno::UX::Property__Fuse_Layouts_Orientation__typeof()));

    ::uRegisterType(type);
    return type;
}

void DataBinding__Fuse_Layouts_Orientation___ObjInit_2(DataBinding__Fuse_Layouts_Orientation* __this, ::app::Uno::UX::Property__Fuse_Layouts_Orientation* target, ::uString* key)
{
    ::app::Fuse::Reactive::Binding___ObjInit_1(__this, key);
    __this->Target(target);
}

bool DataBinding__Fuse_Layouts_Orientation__Acceptor(DataBinding__Fuse_Layouts_Orientation* __this, ::uObject* obj)
{
    return ::uIs(obj, ::app::Fuse::Layouts::Orientation__typeof());
}

void DataBinding__Fuse_Layouts_Orientation__Fuse_Reactive_IObserver_OnAdd(DataBinding__Fuse_Layouts_Orientation* __this, ::uObject* addedValue)
{
    U_THROW(::app::Uno::Exception__New_2(NULL, ::uGetConstString("Not handled: OnAdd")));
}

void DataBinding__Fuse_Layouts_Orientation__Fuse_Reactive_IObserver_OnFailed(DataBinding__Fuse_Layouts_Orientation* __this, ::uString* message)
{
    U_THROW(::app::Uno::Exception__New_2(NULL, ::uGetConstString("Not handled: OnFailed")));
}

void DataBinding__Fuse_Layouts_Orientation__Fuse_Reactive_IObserver_OnNewAll(DataBinding__Fuse_Layouts_Orientation* __this, int length)
{
    if (length > 0)
    {
        U_THROW(::app::Uno::Exception__New_2(NULL, ::uGetConstString("Not handled: OnNewAll")));
    }
}

void DataBinding__Fuse_Layouts_Orientation__Fuse_Reactive_IObserver_OnNewAt(DataBinding__Fuse_Layouts_Orientation* __this, int index, ::uObject* value)
{
    U_THROW(::app::Uno::Exception__New_2(NULL, ::uGetConstString("Not handled: OnNewAt")));
}

void DataBinding__Fuse_Layouts_Orientation__Fuse_Reactive_IObserver_OnRemove(DataBinding__Fuse_Layouts_Orientation* __this, ::uObject* value, int index)
{
    U_THROW(::app::Uno::Exception__New_2(NULL, ::uGetConstString("Not handled: OnRemoveAt")));
}

void DataBinding__Fuse_Layouts_Orientation__Fuse_Reactive_IObserver_OnSet(DataBinding__Fuse_Layouts_Orientation* __this, ::uObject* newValue)
{
    __this->PushValue(newValue);
}

void DataBinding__Fuse_Layouts_Orientation__Fuse_Scripting_INameListener_OnNameChanged(DataBinding__Fuse_Layouts_Orientation* __this, ::uObject* obj, ::uString* name)
{
    __this->PushValue(__this->_currentValue);
}

::app::Uno::UX::Property__Fuse_Layouts_Orientation* DataBinding__Fuse_Layouts_Orientation__get_Target(DataBinding__Fuse_Layouts_Orientation* __this)
{
    return __this->_Target;
}

DataBinding__Fuse_Layouts_Orientation* DataBinding__Fuse_Layouts_Orientation__New_1(::uStatic* __this, ::app::Uno::UX::Property__Fuse_Layouts_Orientation* target, ::uString* key)
{
    DataBinding__Fuse_Layouts_Orientation* inst = (DataBinding__Fuse_Layouts_Orientation*)::uAllocObject(sizeof(DataBinding__Fuse_Layouts_Orientation), DataBinding__Fuse_Layouts_Orientation__typeof());
    inst->_ObjInit_2(target, key);
    return inst;
}

void DataBinding__Fuse_Layouts_Orientation__NewValue(DataBinding__Fuse_Layouts_Orientation* __this, ::uObject* value)
{
    if (::uIs(value, ::app::Fuse::Layouts::Orientation__typeof()))
    {
        __this->PushValue(value);
    }
    else if (::uIs(value, ::app::Fuse::Reactive::IObservable__typeof()))
    {
        if (__this->_subscription != NULL)
        {
            ::app::Uno::IDisposable::Dispose(::uPtr< ::uObject*>(__this->_subscription));
            __this->_subscription = NULL;
        }

        ::uObject* obs = ::uAs< ::uObject*>(value, ::app::Fuse::Reactive::IObservable__typeof());

        if (obs != NULL)
        {
            __this->_subscription = ::app::Fuse::Reactive::IObservable::Subscribe(::uPtr< ::uObject*>(obs), (::uObject*)__this);
        }
    }
    else
    {
        __this->PushValue(value);
    }
}

void DataBinding__Fuse_Layouts_Orientation__OnRooted(DataBinding__Fuse_Layouts_Orientation* __this, ::app::Fuse::Node* n)
{
    ::uPtr< ::app::Uno::UX::Property__Fuse_Layouts_Orientation*>(__this->Target())->add_ValueChanged(::uNewDelegateNonVirt(::app::Uno::UX::ValueChangedHandler__Fuse_Layouts_Orientation__typeof(), (const void*)DataBinding__Fuse_Layouts_Orientation__OnValueChanged, __this));
    ::app::Fuse::Reactive::Binding__OnRooted(__this, n);
}

void DataBinding__Fuse_Layouts_Orientation__OnUnrooted(DataBinding__Fuse_Layouts_Orientation* __this, ::app::Fuse::Node* n)
{
    ::app::Fuse::Scripting::NameRegistry__RemoveListener(NULL, (::uObject*)__this);
    ::uPtr< ::app::Uno::UX::Property__Fuse_Layouts_Orientation*>(__this->Target())->remove_ValueChanged(::uNewDelegateNonVirt(::app::Uno::UX::ValueChangedHandler__Fuse_Layouts_Orientation__typeof(), (const void*)DataBinding__Fuse_Layouts_Orientation__OnValueChanged, __this));

    if (__this->_subscription != NULL)
    {
        ::app::Uno::IDisposable::Dispose(::uPtr< ::uObject*>(__this->_subscription));
        __this->_subscription = NULL;
    }

    ::app::Fuse::Reactive::Binding__OnUnrooted(__this, n);
}

void DataBinding__Fuse_Layouts_Orientation__OnValueChanged(DataBinding__Fuse_Layouts_Orientation* __this, ::uObject* sender, ::app::Uno::UX::ValueChangedArgs__Fuse_Layouts_Orientation* args)
{
    if ((__this->_subscription != NULL) && (::uPtr< ::app::Uno::UX::ValueChangedArgs__Fuse_Layouts_Orientation*>(args)->Origin() != __this))
    {
        ::app::Fuse::Reactive::ISubscription::SetExclusive(::uPtr< ::uObject*>(__this->_subscription), ::uBox< int>(::app::Fuse::Layouts::Orientation__typeof(), ::uPtr< ::app::Uno::UX::ValueChangedArgs__Fuse_Layouts_Orientation*>(args)->Value()));
    }
}

void DataBinding__Fuse_Layouts_Orientation__PushValue(DataBinding__Fuse_Layouts_Orientation* __this, ::uObject* newValue)
{
    __this->_currentValue = newValue;

    if (::uIs(newValue, ::app::Fuse::Layouts::Orientation__typeof()))
    {
        ::app::Fuse::Scripting::NameRegistry__RemoveListener(NULL, (::uObject*)__this);
        ::uPtr< ::app::Uno::UX::Property__Fuse_Layouts_Orientation*>(__this->Target())->SetRestState(::uUnbox< int>(::app::Fuse::Layouts::Orientation__typeof(), newValue), (::uObject*)__this);
        return;
    }

    ::uString* name = ::uAs< ::uString*>(newValue, ::app::Uno::String__typeof());

    if (::app::Uno::String__op_Inequality(NULL, name, NULL) && (__this->Node() != NULL))
    {
        ::app::Fuse::Scripting::NameRegistry__AddListener(NULL, name, (::uObject*)__this);
        ::app::Fuse::Node* k = ::uPtr< ::app::Fuse::Node*>(__this->Node())->FindNodeByName(::uCast< ::uString*>(newValue, ::app::Uno::String__typeof()));

        if (::uIs(k, ::app::Fuse::Layouts::Orientation__typeof()))
        {
            ::uPtr< ::app::Uno::UX::Property__Fuse_Layouts_Orientation*>(__this->Target())->SetRestState(::uUnbox< int>(::app::Fuse::Layouts::Orientation__typeof(), (::uObject*)k), (::uObject*)__this);
            return;
        }
        else
        {
            ::uObject* candidate = ::uPtr< ::app::Fuse::Node*>(__this->Node())->FindObjectByName(::uCast< ::uString*>(newValue, ::app::Uno::String__typeof()), ::uNewDelegateNonVirt(::app::Uno::Predicate__object__typeof(), (const void*)DataBinding__Fuse_Layouts_Orientation__Acceptor, __this));

            if (::uIs(candidate, ::app::Fuse::Layouts::Orientation__typeof()))
            {
                ::uPtr< ::app::Uno::UX::Property__Fuse_Layouts_Orientation*>(__this->Target())->SetRestState(::uUnbox< int>(::app::Fuse::Layouts::Orientation__typeof(), candidate), (::uObject*)__this);
                return;
            }
        }
    }

    ::app::Fuse::Reactive::Marshal__ToType__Fuse_Layouts_Orientation(NULL, newValue, ::uNewDelegateNonVirt(::app::Uno::Action__Fuse_Layouts_Orientation__typeof(), (const void*)DataBinding__Fuse_Layouts_Orientation__SetValue, __this));
}

void DataBinding__Fuse_Layouts_Orientation__set_Target(DataBinding__Fuse_Layouts_Orientation* __this, ::app::Uno::UX::Property__Fuse_Layouts_Orientation* value)
{
    __this->_Target = value;
}

void DataBinding__Fuse_Layouts_Orientation__SetValue(DataBinding__Fuse_Layouts_Orientation* __this, int value)
{
    ::uPtr< ::app::Uno::UX::Property__Fuse_Layouts_Orientation*>(__this->Target())->SetRestState(value, (::uObject*)__this);
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Reactive\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

DataBinding__Fuse_Navigation_NavigationDirection__uType* DataBinding__Fuse_Navigation_NavigationDirection__typeof()
{
    static ::uStaticStrong<DataBinding__Fuse_Navigation_NavigationDirection__uType*> type;
    if (type != NULL) return type;

    type = (DataBinding__Fuse_Navigation_NavigationDirection__uType*)::uAllocClassType(sizeof(DataBinding__Fuse_Navigation_NavigationDirection__uType), "Fuse.Reactive.DataBinding<Fuse.Navigation.NavigationDirection>", false, 2, 3, 0);

    type->SetBaseType(::app::Fuse::Reactive::Binding__typeof());
    type->__fp_NewValue = (void(*)(::app::Fuse::Reactive::Binding*, ::uObject*))DataBinding__Fuse_Navigation_NavigationDirection__NewValue;
    type->__fp_OnRooted = (void(*)(::app::Fuse::Behavior*, ::app::Fuse::Node*))DataBinding__Fuse_Navigation_NavigationDirection__OnRooted;
    type->__fp_OnUnrooted = (void(*)(::app::Fuse::Behavior*, ::app::Fuse::Node*))DataBinding__Fuse_Navigation_NavigationDirection__OnUnrooted;
    type->__interface_0.__fp_OnSet = (void(*)(void*, ::uObject*))DataBinding__Fuse_Navigation_NavigationDirection__Fuse_Reactive_IObserver_OnSet;
    type->__interface_0.__fp_OnAdd = (void(*)(void*, ::uObject*))DataBinding__Fuse_Navigation_NavigationDirection__Fuse_Reactive_IObserver_OnAdd;
    type->__interface_0.__fp_OnNewAt = (void(*)(void*, int, ::uObject*))DataBinding__Fuse_Navigation_NavigationDirection__Fuse_Reactive_IObserver_OnNewAt;
    type->__interface_0.__fp_OnFailed = (void(*)(void*, ::uString*))DataBinding__Fuse_Navigation_NavigationDirection__Fuse_Reactive_IObserver_OnFailed;
    type->__interface_0.__fp_OnNewAll = (void(*)(void*, int))DataBinding__Fuse_Navigation_NavigationDirection__Fuse_Reactive_IObserver_OnNewAll;
    type->__interface_0.__fp_OnRemove = (void(*)(void*, ::uObject*, int))DataBinding__Fuse_Navigation_NavigationDirection__Fuse_Reactive_IObserver_OnRemove;
    type->__interface_1.__fp_OnNameChanged = (void(*)(void*, ::uObject*, ::uString*))DataBinding__Fuse_Navigation_NavigationDirection__Fuse_Scripting_INameListener_OnNameChanged;

    type->SetInterfaces(
        ::app::Fuse::Reactive::IObserver__typeof(), offsetof(DataBinding__Fuse_Navigation_NavigationDirection__uType, __interface_0),
        ::app::Fuse::Scripting::INameListener__typeof(), offsetof(DataBinding__Fuse_Navigation_NavigationDirection__uType, __interface_1));

    type->SetStrongRefs(
        "_currentValue", offsetof(DataBinding__Fuse_Navigation_NavigationDirection, _currentValue),
        "_subscription", offsetof(DataBinding__Fuse_Navigation_NavigationDirection, _subscription),
        "_Target", offsetof(DataBinding__Fuse_Navigation_NavigationDirection, _Target));

    type->SetFields(2,
        ::uNewField("_currentValue", NULL, offsetof(DataBinding__Fuse_Navigation_NavigationDirection, _currentValue), ::uObject__typeof()),
        ::uNewField("_subscription", NULL, offsetof(DataBinding__Fuse_Navigation_NavigationDirection, _subscription), ::app::Fuse::Reactive::ISubscription__typeof()));

    type->SetFunctions(3,
        ::uNewFunction("get_Target", DataBinding__Fuse_Navigation_NavigationDirection__get_Target, 0, false, ::app::Uno::UX::Property__Fuse_Navigation_NavigationDirection__typeof()),
        ::uNewFunction(".ctor", DataBinding__Fuse_Navigation_NavigationDirection__New_1, 0, true, DataBinding__Fuse_Navigation_NavigationDirection__typeof(), ::app::Uno::UX::Property__Fuse_Navigation_NavigationDirection__typeof(), ::app::Uno::String__typeof()),
        ::uNewFunctionVoid("set_Target", DataBinding__Fuse_Navigation_NavigationDirection__set_Target, 0, false, ::app::Uno::UX::Property__Fuse_Navigation_NavigationDirection__typeof()));

    ::uRegisterType(type);
    return type;
}

void DataBinding__Fuse_Navigation_NavigationDirection___ObjInit_2(DataBinding__Fuse_Navigation_NavigationDirection* __this, ::app::Uno::UX::Property__Fuse_Navigation_NavigationDirection* target, ::uString* key)
{
    ::app::Fuse::Reactive::Binding___ObjInit_1(__this, key);
    __this->Target(target);
}

bool DataBinding__Fuse_Navigation_NavigationDirection__Acceptor(DataBinding__Fuse_Navigation_NavigationDirection* __this, ::uObject* obj)
{
    return ::uIs(obj, ::app::Fuse::Navigation::NavigationDirection__typeof());
}

void DataBinding__Fuse_Navigation_NavigationDirection__Fuse_Reactive_IObserver_OnAdd(DataBinding__Fuse_Navigation_NavigationDirection* __this, ::uObject* addedValue)
{
    U_THROW(::app::Uno::Exception__New_2(NULL, ::uGetConstString("Not handled: OnAdd")));
}

void DataBinding__Fuse_Navigation_NavigationDirection__Fuse_Reactive_IObserver_OnFailed(DataBinding__Fuse_Navigation_NavigationDirection* __this, ::uString* message)
{
    U_THROW(::app::Uno::Exception__New_2(NULL, ::uGetConstString("Not handled: OnFailed")));
}

void DataBinding__Fuse_Navigation_NavigationDirection__Fuse_Reactive_IObserver_OnNewAll(DataBinding__Fuse_Navigation_NavigationDirection* __this, int length)
{
    if (length > 0)
    {
        U_THROW(::app::Uno::Exception__New_2(NULL, ::uGetConstString("Not handled: OnNewAll")));
    }
}

void DataBinding__Fuse_Navigation_NavigationDirection__Fuse_Reactive_IObserver_OnNewAt(DataBinding__Fuse_Navigation_NavigationDirection* __this, int index, ::uObject* value)
{
    U_THROW(::app::Uno::Exception__New_2(NULL, ::uGetConstString("Not handled: OnNewAt")));
}

void DataBinding__Fuse_Navigation_NavigationDirection__Fuse_Reactive_IObserver_OnRemove(DataBinding__Fuse_Navigation_NavigationDirection* __this, ::uObject* value, int index)
{
    U_THROW(::app::Uno::Exception__New_2(NULL, ::uGetConstString("Not handled: OnRemoveAt")));
}

void DataBinding__Fuse_Navigation_NavigationDirection__Fuse_Reactive_IObserver_OnSet(DataBinding__Fuse_Navigation_NavigationDirection* __this, ::uObject* newValue)
{
    __this->PushValue(newValue);
}

void DataBinding__Fuse_Navigation_NavigationDirection__Fuse_Scripting_INameListener_OnNameChanged(DataBinding__Fuse_Navigation_NavigationDirection* __this, ::uObject* obj, ::uString* name)
{
    __this->PushValue(__this->_currentValue);
}

::app::Uno::UX::Property__Fuse_Navigation_NavigationDirection* DataBinding__Fuse_Navigation_NavigationDirection__get_Target(DataBinding__Fuse_Navigation_NavigationDirection* __this)
{
    return __this->_Target;
}

DataBinding__Fuse_Navigation_NavigationDirection* DataBinding__Fuse_Navigation_NavigationDirection__New_1(::uStatic* __this, ::app::Uno::UX::Property__Fuse_Navigation_NavigationDirection* target, ::uString* key)
{
    DataBinding__Fuse_Navigation_NavigationDirection* inst = (DataBinding__Fuse_Navigation_NavigationDirection*)::uAllocObject(sizeof(DataBinding__Fuse_Navigation_NavigationDirection), DataBinding__Fuse_Navigation_NavigationDirection__typeof());
    inst->_ObjInit_2(target, key);
    return inst;
}

void DataBinding__Fuse_Navigation_NavigationDirection__NewValue(DataBinding__Fuse_Navigation_NavigationDirection* __this, ::uObject* value)
{
    if (::uIs(value, ::app::Fuse::Navigation::NavigationDirection__typeof()))
    {
        __this->PushValue(value);
    }
    else if (::uIs(value, ::app::Fuse::Reactive::IObservable__typeof()))
    {
        if (__this->_subscription != NULL)
        {
            ::app::Uno::IDisposable::Dispose(::uPtr< ::uObject*>(__this->_subscription));
            __this->_subscription = NULL;
        }

        ::uObject* obs = ::uAs< ::uObject*>(value, ::app::Fuse::Reactive::IObservable__typeof());

        if (obs != NULL)
        {
            __this->_subscription = ::app::Fuse::Reactive::IObservable::Subscribe(::uPtr< ::uObject*>(obs), (::uObject*)__this);
        }
    }
    else
    {
        __this->PushValue(value);
    }
}

void DataBinding__Fuse_Navigation_NavigationDirection__OnRooted(DataBinding__Fuse_Navigation_NavigationDirection* __this, ::app::Fuse::Node* n)
{
    ::uPtr< ::app::Uno::UX::Property__Fuse_Navigation_NavigationDirection*>(__this->Target())->add_ValueChanged(::uNewDelegateNonVirt(::app::Uno::UX::ValueChangedHandler__Fuse_Navigation_NavigationDirection__typeof(), (const void*)DataBinding__Fuse_Navigation_NavigationDirection__OnValueChanged, __this));
    ::app::Fuse::Reactive::Binding__OnRooted(__this, n);
}

void DataBinding__Fuse_Navigation_NavigationDirection__OnUnrooted(DataBinding__Fuse_Navigation_NavigationDirection* __this, ::app::Fuse::Node* n)
{
    ::app::Fuse::Scripting::NameRegistry__RemoveListener(NULL, (::uObject*)__this);
    ::uPtr< ::app::Uno::UX::Property__Fuse_Navigation_NavigationDirection*>(__this->Target())->remove_ValueChanged(::uNewDelegateNonVirt(::app::Uno::UX::ValueChangedHandler__Fuse_Navigation_NavigationDirection__typeof(), (const void*)DataBinding__Fuse_Navigation_NavigationDirection__OnValueChanged, __this));

    if (__this->_subscription != NULL)
    {
        ::app::Uno::IDisposable::Dispose(::uPtr< ::uObject*>(__this->_subscription));
        __this->_subscription = NULL;
    }

    ::app::Fuse::Reactive::Binding__OnUnrooted(__this, n);
}

void DataBinding__Fuse_Navigation_NavigationDirection__OnValueChanged(DataBinding__Fuse_Navigation_NavigationDirection* __this, ::uObject* sender, ::app::Uno::UX::ValueChangedArgs__Fuse_Navigation_NavigationDirection* args)
{
    if ((__this->_subscription != NULL) && (::uPtr< ::app::Uno::UX::ValueChangedArgs__Fuse_Navigation_NavigationDirection*>(args)->Origin() != __this))
    {
        ::app::Fuse::Reactive::ISubscription::SetExclusive(::uPtr< ::uObject*>(__this->_subscription), ::uBox< int>(::app::Fuse::Navigation::NavigationDirection__typeof(), ::uPtr< ::app::Uno::UX::ValueChangedArgs__Fuse_Navigation_NavigationDirection*>(args)->Value()));
    }
}

void DataBinding__Fuse_Navigation_NavigationDirection__PushValue(DataBinding__Fuse_Navigation_NavigationDirection* __this, ::uObject* newValue)
{
    __this->_currentValue = newValue;

    if (::uIs(newValue, ::app::Fuse::Navigation::NavigationDirection__typeof()))
    {
        ::app::Fuse::Scripting::NameRegistry__RemoveListener(NULL, (::uObject*)__this);
        ::uPtr< ::app::Uno::UX::Property__Fuse_Navigation_NavigationDirection*>(__this->Target())->SetRestState(::uUnbox< int>(::app::Fuse::Navigation::NavigationDirection__typeof(), newValue), (::uObject*)__this);
        return;
    }

    ::uString* name = ::uAs< ::uString*>(newValue, ::app::Uno::String__typeof());

    if (::app::Uno::String__op_Inequality(NULL, name, NULL) && (__this->Node() != NULL))
    {
        ::app::Fuse::Scripting::NameRegistry__AddListener(NULL, name, (::uObject*)__this);
        ::app::Fuse::Node* k = ::uPtr< ::app::Fuse::Node*>(__this->Node())->FindNodeByName(::uCast< ::uString*>(newValue, ::app::Uno::String__typeof()));

        if (::uIs(k, ::app::Fuse::Navigation::NavigationDirection__typeof()))
        {
            ::uPtr< ::app::Uno::UX::Property__Fuse_Navigation_NavigationDirection*>(__this->Target())->SetRestState(::uUnbox< int>(::app::Fuse::Navigation::NavigationDirection__typeof(), (::uObject*)k), (::uObject*)__this);
            return;
        }
        else
        {
            ::uObject* candidate = ::uPtr< ::app::Fuse::Node*>(__this->Node())->FindObjectByName(::uCast< ::uString*>(newValue, ::app::Uno::String__typeof()), ::uNewDelegateNonVirt(::app::Uno::Predicate__object__typeof(), (const void*)DataBinding__Fuse_Navigation_NavigationDirection__Acceptor, __this));

            if (::uIs(candidate, ::app::Fuse::Navigation::NavigationDirection__typeof()))
            {
                ::uPtr< ::app::Uno::UX::Property__Fuse_Navigation_NavigationDirection*>(__this->Target())->SetRestState(::uUnbox< int>(::app::Fuse::Navigation::NavigationDirection__typeof(), candidate), (::uObject*)__this);
                return;
            }
        }
    }

    ::app::Fuse::Reactive::Marshal__ToType__Fuse_Navigation_NavigationDirection(NULL, newValue, ::uNewDelegateNonVirt(::app::Uno::Action__Fuse_Navigation_NavigationDirection__typeof(), (const void*)DataBinding__Fuse_Navigation_NavigationDirection__SetValue, __this));
}

void DataBinding__Fuse_Navigation_NavigationDirection__set_Target(DataBinding__Fuse_Navigation_NavigationDirection* __this, ::app::Uno::UX::Property__Fuse_Navigation_NavigationDirection* value)
{
    __this->_Target = value;
}

void DataBinding__Fuse_Navigation_NavigationDirection__SetValue(DataBinding__Fuse_Navigation_NavigationDirection* __this, int value)
{
    ::uPtr< ::app::Uno::UX::Property__Fuse_Navigation_NavigationDirection*>(__this->Target())->SetRestState(value, (::uObject*)__this);
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Reactive\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

DataBinding__Fuse_Navigation_NavigationEdge__uType* DataBinding__Fuse_Navigation_NavigationEdge__typeof()
{
    static ::uStaticStrong<DataBinding__Fuse_Navigation_NavigationEdge__uType*> type;
    if (type != NULL) return type;

    type = (DataBinding__Fuse_Navigation_NavigationEdge__uType*)::uAllocClassType(sizeof(DataBinding__Fuse_Navigation_NavigationEdge__uType), "Fuse.Reactive.DataBinding<Fuse.Navigation.NavigationEdge>", false, 2, 3, 0);

    type->SetBaseType(::app::Fuse::Reactive::Binding__typeof());
    type->__fp_NewValue = (void(*)(::app::Fuse::Reactive::Binding*, ::uObject*))DataBinding__Fuse_Navigation_NavigationEdge__NewValue;
    type->__fp_OnRooted = (void(*)(::app::Fuse::Behavior*, ::app::Fuse::Node*))DataBinding__Fuse_Navigation_NavigationEdge__OnRooted;
    type->__fp_OnUnrooted = (void(*)(::app::Fuse::Behavior*, ::app::Fuse::Node*))DataBinding__Fuse_Navigation_NavigationEdge__OnUnrooted;
    type->__interface_0.__fp_OnSet = (void(*)(void*, ::uObject*))DataBinding__Fuse_Navigation_NavigationEdge__Fuse_Reactive_IObserver_OnSet;
    type->__interface_0.__fp_OnAdd = (void(*)(void*, ::uObject*))DataBinding__Fuse_Navigation_NavigationEdge__Fuse_Reactive_IObserver_OnAdd;
    type->__interface_0.__fp_OnNewAt = (void(*)(void*, int, ::uObject*))DataBinding__Fuse_Navigation_NavigationEdge__Fuse_Reactive_IObserver_OnNewAt;
    type->__interface_0.__fp_OnFailed = (void(*)(void*, ::uString*))DataBinding__Fuse_Navigation_NavigationEdge__Fuse_Reactive_IObserver_OnFailed;
    type->__interface_0.__fp_OnNewAll = (void(*)(void*, int))DataBinding__Fuse_Navigation_NavigationEdge__Fuse_Reactive_IObserver_OnNewAll;
    type->__interface_0.__fp_OnRemove = (void(*)(void*, ::uObject*, int))DataBinding__Fuse_Navigation_NavigationEdge__Fuse_Reactive_IObserver_OnRemove;
    type->__interface_1.__fp_OnNameChanged = (void(*)(void*, ::uObject*, ::uString*))DataBinding__Fuse_Navigation_NavigationEdge__Fuse_Scripting_INameListener_OnNameChanged;

    type->SetInterfaces(
        ::app::Fuse::Reactive::IObserver__typeof(), offsetof(DataBinding__Fuse_Navigation_NavigationEdge__uType, __interface_0),
        ::app::Fuse::Scripting::INameListener__typeof(), offsetof(DataBinding__Fuse_Navigation_NavigationEdge__uType, __interface_1));

    type->SetStrongRefs(
        "_currentValue", offsetof(DataBinding__Fuse_Navigation_NavigationEdge, _currentValue),
        "_subscription", offsetof(DataBinding__Fuse_Navigation_NavigationEdge, _subscription),
        "_Target", offsetof(DataBinding__Fuse_Navigation_NavigationEdge, _Target));

    type->SetFields(2,
        ::uNewField("_currentValue", NULL, offsetof(DataBinding__Fuse_Navigation_NavigationEdge, _currentValue), ::uObject__typeof()),
        ::uNewField("_subscription", NULL, offsetof(DataBinding__Fuse_Navigation_NavigationEdge, _subscription), ::app::Fuse::Reactive::ISubscription__typeof()));

    type->SetFunctions(3,
        ::uNewFunction("get_Target", DataBinding__Fuse_Navigation_NavigationEdge__get_Target, 0, false, ::app::Uno::UX::Property__Fuse_Navigation_NavigationEdge__typeof()),
        ::uNewFunction(".ctor", DataBinding__Fuse_Navigation_NavigationEdge__New_1, 0, true, DataBinding__Fuse_Navigation_NavigationEdge__typeof(), ::app::Uno::UX::Property__Fuse_Navigation_NavigationEdge__typeof(), ::app::Uno::String__typeof()),
        ::uNewFunctionVoid("set_Target", DataBinding__Fuse_Navigation_NavigationEdge__set_Target, 0, false, ::app::Uno::UX::Property__Fuse_Navigation_NavigationEdge__typeof()));

    ::uRegisterType(type);
    return type;
}

void DataBinding__Fuse_Navigation_NavigationEdge___ObjInit_2(DataBinding__Fuse_Navigation_NavigationEdge* __this, ::app::Uno::UX::Property__Fuse_Navigation_NavigationEdge* target, ::uString* key)
{
    ::app::Fuse::Reactive::Binding___ObjInit_1(__this, key);
    __this->Target(target);
}

bool DataBinding__Fuse_Navigation_NavigationEdge__Acceptor(DataBinding__Fuse_Navigation_NavigationEdge* __this, ::uObject* obj)
{
    return ::uIs(obj, ::app::Fuse::Navigation::NavigationEdge__typeof());
}

void DataBinding__Fuse_Navigation_NavigationEdge__Fuse_Reactive_IObserver_OnAdd(DataBinding__Fuse_Navigation_NavigationEdge* __this, ::uObject* addedValue)
{
    U_THROW(::app::Uno::Exception__New_2(NULL, ::uGetConstString("Not handled: OnAdd")));
}

void DataBinding__Fuse_Navigation_NavigationEdge__Fuse_Reactive_IObserver_OnFailed(DataBinding__Fuse_Navigation_NavigationEdge* __this, ::uString* message)
{
    U_THROW(::app::Uno::Exception__New_2(NULL, ::uGetConstString("Not handled: OnFailed")));
}

void DataBinding__Fuse_Navigation_NavigationEdge__Fuse_Reactive_IObserver_OnNewAll(DataBinding__Fuse_Navigation_NavigationEdge* __this, int length)
{
    if (length > 0)
    {
        U_THROW(::app::Uno::Exception__New_2(NULL, ::uGetConstString("Not handled: OnNewAll")));
    }
}

void DataBinding__Fuse_Navigation_NavigationEdge__Fuse_Reactive_IObserver_OnNewAt(DataBinding__Fuse_Navigation_NavigationEdge* __this, int index, ::uObject* value)
{
    U_THROW(::app::Uno::Exception__New_2(NULL, ::uGetConstString("Not handled: OnNewAt")));
}

void DataBinding__Fuse_Navigation_NavigationEdge__Fuse_Reactive_IObserver_OnRemove(DataBinding__Fuse_Navigation_NavigationEdge* __this, ::uObject* value, int index)
{
    U_THROW(::app::Uno::Exception__New_2(NULL, ::uGetConstString("Not handled: OnRemoveAt")));
}

void DataBinding__Fuse_Navigation_NavigationEdge__Fuse_Reactive_IObserver_OnSet(DataBinding__Fuse_Navigation_NavigationEdge* __this, ::uObject* newValue)
{
    __this->PushValue(newValue);
}

void DataBinding__Fuse_Navigation_NavigationEdge__Fuse_Scripting_INameListener_OnNameChanged(DataBinding__Fuse_Navigation_NavigationEdge* __this, ::uObject* obj, ::uString* name)
{
    __this->PushValue(__this->_currentValue);
}

::app::Uno::UX::Property__Fuse_Navigation_NavigationEdge* DataBinding__Fuse_Navigation_NavigationEdge__get_Target(DataBinding__Fuse_Navigation_NavigationEdge* __this)
{
    return __this->_Target;
}

DataBinding__Fuse_Navigation_NavigationEdge* DataBinding__Fuse_Navigation_NavigationEdge__New_1(::uStatic* __this, ::app::Uno::UX::Property__Fuse_Navigation_NavigationEdge* target, ::uString* key)
{
    DataBinding__Fuse_Navigation_NavigationEdge* inst = (DataBinding__Fuse_Navigation_NavigationEdge*)::uAllocObject(sizeof(DataBinding__Fuse_Navigation_NavigationEdge), DataBinding__Fuse_Navigation_NavigationEdge__typeof());
    inst->_ObjInit_2(target, key);
    return inst;
}

void DataBinding__Fuse_Navigation_NavigationEdge__NewValue(DataBinding__Fuse_Navigation_NavigationEdge* __this, ::uObject* value)
{
    if (::uIs(value, ::app::Fuse::Navigation::NavigationEdge__typeof()))
    {
        __this->PushValue(value);
    }
    else if (::uIs(value, ::app::Fuse::Reactive::IObservable__typeof()))
    {
        if (__this->_subscription != NULL)
        {
            ::app::Uno::IDisposable::Dispose(::uPtr< ::uObject*>(__this->_subscription));
            __this->_subscription = NULL;
        }

        ::uObject* obs = ::uAs< ::uObject*>(value, ::app::Fuse::Reactive::IObservable__typeof());

        if (obs != NULL)
        {
            __this->_subscription = ::app::Fuse::Reactive::IObservable::Subscribe(::uPtr< ::uObject*>(obs), (::uObject*)__this);
        }
    }
    else
    {
        __this->PushValue(value);
    }
}

void DataBinding__Fuse_Navigation_NavigationEdge__OnRooted(DataBinding__Fuse_Navigation_NavigationEdge* __this, ::app::Fuse::Node* n)
{
    ::uPtr< ::app::Uno::UX::Property__Fuse_Navigation_NavigationEdge*>(__this->Target())->add_ValueChanged(::uNewDelegateNonVirt(::app::Uno::UX::ValueChangedHandler__Fuse_Navigation_NavigationEdge__typeof(), (const void*)DataBinding__Fuse_Navigation_NavigationEdge__OnValueChanged, __this));
    ::app::Fuse::Reactive::Binding__OnRooted(__this, n);
}

void DataBinding__Fuse_Navigation_NavigationEdge__OnUnrooted(DataBinding__Fuse_Navigation_NavigationEdge* __this, ::app::Fuse::Node* n)
{
    ::app::Fuse::Scripting::NameRegistry__RemoveListener(NULL, (::uObject*)__this);
    ::uPtr< ::app::Uno::UX::Property__Fuse_Navigation_NavigationEdge*>(__this->Target())->remove_ValueChanged(::uNewDelegateNonVirt(::app::Uno::UX::ValueChangedHandler__Fuse_Navigation_NavigationEdge__typeof(), (const void*)DataBinding__Fuse_Navigation_NavigationEdge__OnValueChanged, __this));

    if (__this->_subscription != NULL)
    {
        ::app::Uno::IDisposable::Dispose(::uPtr< ::uObject*>(__this->_subscription));
        __this->_subscription = NULL;
    }

    ::app::Fuse::Reactive::Binding__OnUnrooted(__this, n);
}

void DataBinding__Fuse_Navigation_NavigationEdge__OnValueChanged(DataBinding__Fuse_Navigation_NavigationEdge* __this, ::uObject* sender, ::app::Uno::UX::ValueChangedArgs__Fuse_Navigation_NavigationEdge* args)
{
    if ((__this->_subscription != NULL) && (::uPtr< ::app::Uno::UX::ValueChangedArgs__Fuse_Navigation_NavigationEdge*>(args)->Origin() != __this))
    {
        ::app::Fuse::Reactive::ISubscription::SetExclusive(::uPtr< ::uObject*>(__this->_subscription), ::uBox< int>(::app::Fuse::Navigation::NavigationEdge__typeof(), ::uPtr< ::app::Uno::UX::ValueChangedArgs__Fuse_Navigation_NavigationEdge*>(args)->Value()));
    }
}

void DataBinding__Fuse_Navigation_NavigationEdge__PushValue(DataBinding__Fuse_Navigation_NavigationEdge* __this, ::uObject* newValue)
{
    __this->_currentValue = newValue;

    if (::uIs(newValue, ::app::Fuse::Navigation::NavigationEdge__typeof()))
    {
        ::app::Fuse::Scripting::NameRegistry__RemoveListener(NULL, (::uObject*)__this);
        ::uPtr< ::app::Uno::UX::Property__Fuse_Navigation_NavigationEdge*>(__this->Target())->SetRestState(::uUnbox< int>(::app::Fuse::Navigation::NavigationEdge__typeof(), newValue), (::uObject*)__this);
        return;
    }

    ::uString* name = ::uAs< ::uString*>(newValue, ::app::Uno::String__typeof());

    if (::app::Uno::String__op_Inequality(NULL, name, NULL) && (__this->Node() != NULL))
    {
        ::app::Fuse::Scripting::NameRegistry__AddListener(NULL, name, (::uObject*)__this);
        ::app::Fuse::Node* k = ::uPtr< ::app::Fuse::Node*>(__this->Node())->FindNodeByName(::uCast< ::uString*>(newValue, ::app::Uno::String__typeof()));

        if (::uIs(k, ::app::Fuse::Navigation::NavigationEdge__typeof()))
        {
            ::uPtr< ::app::Uno::UX::Property__Fuse_Navigation_NavigationEdge*>(__this->Target())->SetRestState(::uUnbox< int>(::app::Fuse::Navigation::NavigationEdge__typeof(), (::uObject*)k), (::uObject*)__this);
            return;
        }
        else
        {
            ::uObject* candidate = ::uPtr< ::app::Fuse::Node*>(__this->Node())->FindObjectByName(::uCast< ::uString*>(newValue, ::app::Uno::String__typeof()), ::uNewDelegateNonVirt(::app::Uno::Predicate__object__typeof(), (const void*)DataBinding__Fuse_Navigation_NavigationEdge__Acceptor, __this));

            if (::uIs(candidate, ::app::Fuse::Navigation::NavigationEdge__typeof()))
            {
                ::uPtr< ::app::Uno::UX::Property__Fuse_Navigation_NavigationEdge*>(__this->Target())->SetRestState(::uUnbox< int>(::app::Fuse::Navigation::NavigationEdge__typeof(), candidate), (::uObject*)__this);
                return;
            }
        }
    }

    ::app::Fuse::Reactive::Marshal__ToType__Fuse_Navigation_NavigationEdge(NULL, newValue, ::uNewDelegateNonVirt(::app::Uno::Action__Fuse_Navigation_NavigationEdge__typeof(), (const void*)DataBinding__Fuse_Navigation_NavigationEdge__SetValue, __this));
}

void DataBinding__Fuse_Navigation_NavigationEdge__set_Target(DataBinding__Fuse_Navigation_NavigationEdge* __this, ::app::Uno::UX::Property__Fuse_Navigation_NavigationEdge* value)
{
    __this->_Target = value;
}

void DataBinding__Fuse_Navigation_NavigationEdge__SetValue(DataBinding__Fuse_Navigation_NavigationEdge* __this, int value)
{
    ::uPtr< ::app::Uno::UX::Property__Fuse_Navigation_NavigationEdge*>(__this->Target())->SetRestState(value, (::uObject*)__this);
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Reactive\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

DataBinding__Fuse_Navigation_NavigationGotoMode__uType* DataBinding__Fuse_Navigation_NavigationGotoMode__typeof()
{
    static ::uStaticStrong<DataBinding__Fuse_Navigation_NavigationGotoMode__uType*> type;
    if (type != NULL) return type;

    type = (DataBinding__Fuse_Navigation_NavigationGotoMode__uType*)::uAllocClassType(sizeof(DataBinding__Fuse_Navigation_NavigationGotoMode__uType), "Fuse.Reactive.DataBinding<Fuse.Navigation.NavigationGotoMode>", false, 2, 3, 0);

    type->SetBaseType(::app::Fuse::Reactive::Binding__typeof());
    type->__fp_NewValue = (void(*)(::app::Fuse::Reactive::Binding*, ::uObject*))DataBinding__Fuse_Navigation_NavigationGotoMode__NewValue;
    type->__fp_OnRooted = (void(*)(::app::Fuse::Behavior*, ::app::Fuse::Node*))DataBinding__Fuse_Navigation_NavigationGotoMode__OnRooted;
    type->__fp_OnUnrooted = (void(*)(::app::Fuse::Behavior*, ::app::Fuse::Node*))DataBinding__Fuse_Navigation_NavigationGotoMode__OnUnrooted;
    type->__interface_0.__fp_OnSet = (void(*)(void*, ::uObject*))DataBinding__Fuse_Navigation_NavigationGotoMode__Fuse_Reactive_IObserver_OnSet;
    type->__interface_0.__fp_OnAdd = (void(*)(void*, ::uObject*))DataBinding__Fuse_Navigation_NavigationGotoMode__Fuse_Reactive_IObserver_OnAdd;
    type->__interface_0.__fp_OnNewAt = (void(*)(void*, int, ::uObject*))DataBinding__Fuse_Navigation_NavigationGotoMode__Fuse_Reactive_IObserver_OnNewAt;
    type->__interface_0.__fp_OnFailed = (void(*)(void*, ::uString*))DataBinding__Fuse_Navigation_NavigationGotoMode__Fuse_Reactive_IObserver_OnFailed;
    type->__interface_0.__fp_OnNewAll = (void(*)(void*, int))DataBinding__Fuse_Navigation_NavigationGotoMode__Fuse_Reactive_IObserver_OnNewAll;
    type->__interface_0.__fp_OnRemove = (void(*)(void*, ::uObject*, int))DataBinding__Fuse_Navigation_NavigationGotoMode__Fuse_Reactive_IObserver_OnRemove;
    type->__interface_1.__fp_OnNameChanged = (void(*)(void*, ::uObject*, ::uString*))DataBinding__Fuse_Navigation_NavigationGotoMode__Fuse_Scripting_INameListener_OnNameChanged;

    type->SetInterfaces(
        ::app::Fuse::Reactive::IObserver__typeof(), offsetof(DataBinding__Fuse_Navigation_NavigationGotoMode__uType, __interface_0),
        ::app::Fuse::Scripting::INameListener__typeof(), offsetof(DataBinding__Fuse_Navigation_NavigationGotoMode__uType, __interface_1));

    type->SetStrongRefs(
        "_currentValue", offsetof(DataBinding__Fuse_Navigation_NavigationGotoMode, _currentValue),
        "_subscription", offsetof(DataBinding__Fuse_Navigation_NavigationGotoMode, _subscription),
        "_Target", offsetof(DataBinding__Fuse_Navigation_NavigationGotoMode, _Target));

    type->SetFields(2,
        ::uNewField("_currentValue", NULL, offsetof(DataBinding__Fuse_Navigation_NavigationGotoMode, _currentValue), ::uObject__typeof()),
        ::uNewField("_subscription", NULL, offsetof(DataBinding__Fuse_Navigation_NavigationGotoMode, _subscription), ::app::Fuse::Reactive::ISubscription__typeof()));

    type->SetFunctions(3,
        ::uNewFunction("get_Target", DataBinding__Fuse_Navigation_NavigationGotoMode__get_Target, 0, false, ::app::Uno::UX::Property__Fuse_Navigation_NavigationGotoMode__typeof()),
        ::uNewFunction(".ctor", DataBinding__Fuse_Navigation_NavigationGotoMode__New_1, 0, true, DataBinding__Fuse_Navigation_NavigationGotoMode__typeof(), ::app::Uno::UX::Property__Fuse_Navigation_NavigationGotoMode__typeof(), ::app::Uno::String__typeof()),
        ::uNewFunctionVoid("set_Target", DataBinding__Fuse_Navigation_NavigationGotoMode__set_Target, 0, false, ::app::Uno::UX::Property__Fuse_Navigation_NavigationGotoMode__typeof()));

    ::uRegisterType(type);
    return type;
}

void DataBinding__Fuse_Navigation_NavigationGotoMode___ObjInit_2(DataBinding__Fuse_Navigation_NavigationGotoMode* __this, ::app::Uno::UX::Property__Fuse_Navigation_NavigationGotoMode* target, ::uString* key)
{
    ::app::Fuse::Reactive::Binding___ObjInit_1(__this, key);
    __this->Target(target);
}

bool DataBinding__Fuse_Navigation_NavigationGotoMode__Acceptor(DataBinding__Fuse_Navigation_NavigationGotoMode* __this, ::uObject* obj)
{
    return ::uIs(obj, ::app::Fuse::Navigation::NavigationGotoMode__typeof());
}

void DataBinding__Fuse_Navigation_NavigationGotoMode__Fuse_Reactive_IObserver_OnAdd(DataBinding__Fuse_Navigation_NavigationGotoMode* __this, ::uObject* addedValue)
{
    U_THROW(::app::Uno::Exception__New_2(NULL, ::uGetConstString("Not handled: OnAdd")));
}

void DataBinding__Fuse_Navigation_NavigationGotoMode__Fuse_Reactive_IObserver_OnFailed(DataBinding__Fuse_Navigation_NavigationGotoMode* __this, ::uString* message)
{
    U_THROW(::app::Uno::Exception__New_2(NULL, ::uGetConstString("Not handled: OnFailed")));
}

void DataBinding__Fuse_Navigation_NavigationGotoMode__Fuse_Reactive_IObserver_OnNewAll(DataBinding__Fuse_Navigation_NavigationGotoMode* __this, int length)
{
    if (length > 0)
    {
        U_THROW(::app::Uno::Exception__New_2(NULL, ::uGetConstString("Not handled: OnNewAll")));
    }
}

void DataBinding__Fuse_Navigation_NavigationGotoMode__Fuse_Reactive_IObserver_OnNewAt(DataBinding__Fuse_Navigation_NavigationGotoMode* __this, int index, ::uObject* value)
{
    U_THROW(::app::Uno::Exception__New_2(NULL, ::uGetConstString("Not handled: OnNewAt")));
}

void DataBinding__Fuse_Navigation_NavigationGotoMode__Fuse_Reactive_IObserver_OnRemove(DataBinding__Fuse_Navigation_NavigationGotoMode* __this, ::uObject* value, int index)
{
    U_THROW(::app::Uno::Exception__New_2(NULL, ::uGetConstString("Not handled: OnRemoveAt")));
}

void DataBinding__Fuse_Navigation_NavigationGotoMode__Fuse_Reactive_IObserver_OnSet(DataBinding__Fuse_Navigation_NavigationGotoMode* __this, ::uObject* newValue)
{
    __this->PushValue(newValue);
}

void DataBinding__Fuse_Navigation_NavigationGotoMode__Fuse_Scripting_INameListener_OnNameChanged(DataBinding__Fuse_Navigation_NavigationGotoMode* __this, ::uObject* obj, ::uString* name)
{
    __this->PushValue(__this->_currentValue);
}

::app::Uno::UX::Property__Fuse_Navigation_NavigationGotoMode* DataBinding__Fuse_Navigation_NavigationGotoMode__get_Target(DataBinding__Fuse_Navigation_NavigationGotoMode* __this)
{
    return __this->_Target;
}

DataBinding__Fuse_Navigation_NavigationGotoMode* DataBinding__Fuse_Navigation_NavigationGotoMode__New_1(::uStatic* __this, ::app::Uno::UX::Property__Fuse_Navigation_NavigationGotoMode* target, ::uString* key)
{
    DataBinding__Fuse_Navigation_NavigationGotoMode* inst = (DataBinding__Fuse_Navigation_NavigationGotoMode*)::uAllocObject(sizeof(DataBinding__Fuse_Navigation_NavigationGotoMode), DataBinding__Fuse_Navigation_NavigationGotoMode__typeof());
    inst->_ObjInit_2(target, key);
    return inst;
}

void DataBinding__Fuse_Navigation_NavigationGotoMode__NewValue(DataBinding__Fuse_Navigation_NavigationGotoMode* __this, ::uObject* value)
{
    if (::uIs(value, ::app::Fuse::Navigation::NavigationGotoMode__typeof()))
    {
        __this->PushValue(value);
    }
    else if (::uIs(value, ::app::Fuse::Reactive::IObservable__typeof()))
    {
        if (__this->_subscription != NULL)
        {
            ::app::Uno::IDisposable::Dispose(::uPtr< ::uObject*>(__this->_subscription));
            __this->_subscription = NULL;
        }

        ::uObject* obs = ::uAs< ::uObject*>(value, ::app::Fuse::Reactive::IObservable__typeof());

        if (obs != NULL)
        {
            __this->_subscription = ::app::Fuse::Reactive::IObservable::Subscribe(::uPtr< ::uObject*>(obs), (::uObject*)__this);
        }
    }
    else
    {
        __this->PushValue(value);
    }
}

void DataBinding__Fuse_Navigation_NavigationGotoMode__OnRooted(DataBinding__Fuse_Navigation_NavigationGotoMode* __this, ::app::Fuse::Node* n)
{
    ::uPtr< ::app::Uno::UX::Property__Fuse_Navigation_NavigationGotoMode*>(__this->Target())->add_ValueChanged(::uNewDelegateNonVirt(::app::Uno::UX::ValueChangedHandler__Fuse_Navigation_NavigationGotoMode__typeof(), (const void*)DataBinding__Fuse_Navigation_NavigationGotoMode__OnValueChanged, __this));
    ::app::Fuse::Reactive::Binding__OnRooted(__this, n);
}

void DataBinding__Fuse_Navigation_NavigationGotoMode__OnUnrooted(DataBinding__Fuse_Navigation_NavigationGotoMode* __this, ::app::Fuse::Node* n)
{
    ::app::Fuse::Scripting::NameRegistry__RemoveListener(NULL, (::uObject*)__this);
    ::uPtr< ::app::Uno::UX::Property__Fuse_Navigation_NavigationGotoMode*>(__this->Target())->remove_ValueChanged(::uNewDelegateNonVirt(::app::Uno::UX::ValueChangedHandler__Fuse_Navigation_NavigationGotoMode__typeof(), (const void*)DataBinding__Fuse_Navigation_NavigationGotoMode__OnValueChanged, __this));

    if (__this->_subscription != NULL)
    {
        ::app::Uno::IDisposable::Dispose(::uPtr< ::uObject*>(__this->_subscription));
        __this->_subscription = NULL;
    }

    ::app::Fuse::Reactive::Binding__OnUnrooted(__this, n);
}

void DataBinding__Fuse_Navigation_NavigationGotoMode__OnValueChanged(DataBinding__Fuse_Navigation_NavigationGotoMode* __this, ::uObject* sender, ::app::Uno::UX::ValueChangedArgs__Fuse_Navigation_NavigationGotoMode* args)
{
    if ((__this->_subscription != NULL) && (::uPtr< ::app::Uno::UX::ValueChangedArgs__Fuse_Navigation_NavigationGotoMode*>(args)->Origin() != __this))
    {
        ::app::Fuse::Reactive::ISubscription::SetExclusive(::uPtr< ::uObject*>(__this->_subscription), ::uBox< int>(::app::Fuse::Navigation::NavigationGotoMode__typeof(), ::uPtr< ::app::Uno::UX::ValueChangedArgs__Fuse_Navigation_NavigationGotoMode*>(args)->Value()));
    }
}

void DataBinding__Fuse_Navigation_NavigationGotoMode__PushValue(DataBinding__Fuse_Navigation_NavigationGotoMode* __this, ::uObject* newValue)
{
    __this->_currentValue = newValue;

    if (::uIs(newValue, ::app::Fuse::Navigation::NavigationGotoMode__typeof()))
    {
        ::app::Fuse::Scripting::NameRegistry__RemoveListener(NULL, (::uObject*)__this);
        ::uPtr< ::app::Uno::UX::Property__Fuse_Navigation_NavigationGotoMode*>(__this->Target())->SetRestState(::uUnbox< int>(::app::Fuse::Navigation::NavigationGotoMode__typeof(), newValue), (::uObject*)__this);
        return;
    }

    ::uString* name = ::uAs< ::uString*>(newValue, ::app::Uno::String__typeof());

    if (::app::Uno::String__op_Inequality(NULL, name, NULL) && (__this->Node() != NULL))
    {
        ::app::Fuse::Scripting::NameRegistry__AddListener(NULL, name, (::uObject*)__this);
        ::app::Fuse::Node* k = ::uPtr< ::app::Fuse::Node*>(__this->Node())->FindNodeByName(::uCast< ::uString*>(newValue, ::app::Uno::String__typeof()));

        if (::uIs(k, ::app::Fuse::Navigation::NavigationGotoMode__typeof()))
        {
            ::uPtr< ::app::Uno::UX::Property__Fuse_Navigation_NavigationGotoMode*>(__this->Target())->SetRestState(::uUnbox< int>(::app::Fuse::Navigation::NavigationGotoMode__typeof(), (::uObject*)k), (::uObject*)__this);
            return;
        }
        else
        {
            ::uObject* candidate = ::uPtr< ::app::Fuse::Node*>(__this->Node())->FindObjectByName(::uCast< ::uString*>(newValue, ::app::Uno::String__typeof()), ::uNewDelegateNonVirt(::app::Uno::Predicate__object__typeof(), (const void*)DataBinding__Fuse_Navigation_NavigationGotoMode__Acceptor, __this));

            if (::uIs(candidate, ::app::Fuse::Navigation::NavigationGotoMode__typeof()))
            {
                ::uPtr< ::app::Uno::UX::Property__Fuse_Navigation_NavigationGotoMode*>(__this->Target())->SetRestState(::uUnbox< int>(::app::Fuse::Navigation::NavigationGotoMode__typeof(), candidate), (::uObject*)__this);
                return;
            }
        }
    }

    ::app::Fuse::Reactive::Marshal__ToType__Fuse_Navigation_NavigationGotoMode(NULL, newValue, ::uNewDelegateNonVirt(::app::Uno::Action__Fuse_Navigation_NavigationGotoMode__typeof(), (const void*)DataBinding__Fuse_Navigation_NavigationGotoMode__SetValue, __this));
}

void DataBinding__Fuse_Navigation_NavigationGotoMode__set_Target(DataBinding__Fuse_Navigation_NavigationGotoMode* __this, ::app::Uno::UX::Property__Fuse_Navigation_NavigationGotoMode* value)
{
    __this->_Target = value;
}

void DataBinding__Fuse_Navigation_NavigationGotoMode__SetValue(DataBinding__Fuse_Navigation_NavigationGotoMode* __this, int value)
{
    ::uPtr< ::app::Uno::UX::Property__Fuse_Navigation_NavigationGotoMode*>(__this->Target())->SetRestState(value, (::uObject*)__this);
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Reactive\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

DataBinding__Fuse_Navigation_SnapTo__uType* DataBinding__Fuse_Navigation_SnapTo__typeof()
{
    static ::uStaticStrong<DataBinding__Fuse_Navigation_SnapTo__uType*> type;
    if (type != NULL) return type;

    type = (DataBinding__Fuse_Navigation_SnapTo__uType*)::uAllocClassType(sizeof(DataBinding__Fuse_Navigation_SnapTo__uType), "Fuse.Reactive.DataBinding<Fuse.Navigation.SnapTo>", false, 2, 3, 0);

    type->SetBaseType(::app::Fuse::Reactive::Binding__typeof());
    type->__fp_NewValue = (void(*)(::app::Fuse::Reactive::Binding*, ::uObject*))DataBinding__Fuse_Navigation_SnapTo__NewValue;
    type->__fp_OnRooted = (void(*)(::app::Fuse::Behavior*, ::app::Fuse::Node*))DataBinding__Fuse_Navigation_SnapTo__OnRooted;
    type->__fp_OnUnrooted = (void(*)(::app::Fuse::Behavior*, ::app::Fuse::Node*))DataBinding__Fuse_Navigation_SnapTo__OnUnrooted;
    type->__interface_0.__fp_OnSet = (void(*)(void*, ::uObject*))DataBinding__Fuse_Navigation_SnapTo__Fuse_Reactive_IObserver_OnSet;
    type->__interface_0.__fp_OnAdd = (void(*)(void*, ::uObject*))DataBinding__Fuse_Navigation_SnapTo__Fuse_Reactive_IObserver_OnAdd;
    type->__interface_0.__fp_OnNewAt = (void(*)(void*, int, ::uObject*))DataBinding__Fuse_Navigation_SnapTo__Fuse_Reactive_IObserver_OnNewAt;
    type->__interface_0.__fp_OnFailed = (void(*)(void*, ::uString*))DataBinding__Fuse_Navigation_SnapTo__Fuse_Reactive_IObserver_OnFailed;
    type->__interface_0.__fp_OnNewAll = (void(*)(void*, int))DataBinding__Fuse_Navigation_SnapTo__Fuse_Reactive_IObserver_OnNewAll;
    type->__interface_0.__fp_OnRemove = (void(*)(void*, ::uObject*, int))DataBinding__Fuse_Navigation_SnapTo__Fuse_Reactive_IObserver_OnRemove;
    type->__interface_1.__fp_OnNameChanged = (void(*)(void*, ::uObject*, ::uString*))DataBinding__Fuse_Navigation_SnapTo__Fuse_Scripting_INameListener_OnNameChanged;

    type->SetInterfaces(
        ::app::Fuse::Reactive::IObserver__typeof(), offsetof(DataBinding__Fuse_Navigation_SnapTo__uType, __interface_0),
        ::app::Fuse::Scripting::INameListener__typeof(), offsetof(DataBinding__Fuse_Navigation_SnapTo__uType, __interface_1));

    type->SetStrongRefs(
        "_currentValue", offsetof(DataBinding__Fuse_Navigation_SnapTo, _currentValue),
        "_subscription", offsetof(DataBinding__Fuse_Navigation_SnapTo, _subscription),
        "_Target", offsetof(DataBinding__Fuse_Navigation_SnapTo, _Target));

    type->SetFields(2,
        ::uNewField("_currentValue", NULL, offsetof(DataBinding__Fuse_Navigation_SnapTo, _currentValue), ::uObject__typeof()),
        ::uNewField("_subscription", NULL, offsetof(DataBinding__Fuse_Navigation_SnapTo, _subscription), ::app::Fuse::Reactive::ISubscription__typeof()));

    type->SetFunctions(3,
        ::uNewFunction("get_Target", DataBinding__Fuse_Navigation_SnapTo__get_Target, 0, false, ::app::Uno::UX::Property__Fuse_Navigation_SnapTo__typeof()),
        ::uNewFunction(".ctor", DataBinding__Fuse_Navigation_SnapTo__New_1, 0, true, DataBinding__Fuse_Navigation_SnapTo__typeof(), ::app::Uno::UX::Property__Fuse_Navigation_SnapTo__typeof(), ::app::Uno::String__typeof()),
        ::uNewFunctionVoid("set_Target", DataBinding__Fuse_Navigation_SnapTo__set_Target, 0, false, ::app::Uno::UX::Property__Fuse_Navigation_SnapTo__typeof()));

    ::uRegisterType(type);
    return type;
}

void DataBinding__Fuse_Navigation_SnapTo___ObjInit_2(DataBinding__Fuse_Navigation_SnapTo* __this, ::app::Uno::UX::Property__Fuse_Navigation_SnapTo* target, ::uString* key)
{
    ::app::Fuse::Reactive::Binding___ObjInit_1(__this, key);
    __this->Target(target);
}

bool DataBinding__Fuse_Navigation_SnapTo__Acceptor(DataBinding__Fuse_Navigation_SnapTo* __this, ::uObject* obj)
{
    return ::uIs(obj, ::app::Fuse::Navigation::SnapTo__typeof());
}

void DataBinding__Fuse_Navigation_SnapTo__Fuse_Reactive_IObserver_OnAdd(DataBinding__Fuse_Navigation_SnapTo* __this, ::uObject* addedValue)
{
    U_THROW(::app::Uno::Exception__New_2(NULL, ::uGetConstString("Not handled: OnAdd")));
}

void DataBinding__Fuse_Navigation_SnapTo__Fuse_Reactive_IObserver_OnFailed(DataBinding__Fuse_Navigation_SnapTo* __this, ::uString* message)
{
    U_THROW(::app::Uno::Exception__New_2(NULL, ::uGetConstString("Not handled: OnFailed")));
}

void DataBinding__Fuse_Navigation_SnapTo__Fuse_Reactive_IObserver_OnNewAll(DataBinding__Fuse_Navigation_SnapTo* __this, int length)
{
    if (length > 0)
    {
        U_THROW(::app::Uno::Exception__New_2(NULL, ::uGetConstString("Not handled: OnNewAll")));
    }
}

void DataBinding__Fuse_Navigation_SnapTo__Fuse_Reactive_IObserver_OnNewAt(DataBinding__Fuse_Navigation_SnapTo* __this, int index, ::uObject* value)
{
    U_THROW(::app::Uno::Exception__New_2(NULL, ::uGetConstString("Not handled: OnNewAt")));
}

void DataBinding__Fuse_Navigation_SnapTo__Fuse_Reactive_IObserver_OnRemove(DataBinding__Fuse_Navigation_SnapTo* __this, ::uObject* value, int index)
{
    U_THROW(::app::Uno::Exception__New_2(NULL, ::uGetConstString("Not handled: OnRemoveAt")));
}

void DataBinding__Fuse_Navigation_SnapTo__Fuse_Reactive_IObserver_OnSet(DataBinding__Fuse_Navigation_SnapTo* __this, ::uObject* newValue)
{
    __this->PushValue(newValue);
}

void DataBinding__Fuse_Navigation_SnapTo__Fuse_Scripting_INameListener_OnNameChanged(DataBinding__Fuse_Navigation_SnapTo* __this, ::uObject* obj, ::uString* name)
{
    __this->PushValue(__this->_currentValue);
}

::app::Uno::UX::Property__Fuse_Navigation_SnapTo* DataBinding__Fuse_Navigation_SnapTo__get_Target(DataBinding__Fuse_Navigation_SnapTo* __this)
{
    return __this->_Target;
}

DataBinding__Fuse_Navigation_SnapTo* DataBinding__Fuse_Navigation_SnapTo__New_1(::uStatic* __this, ::app::Uno::UX::Property__Fuse_Navigation_SnapTo* target, ::uString* key)
{
    DataBinding__Fuse_Navigation_SnapTo* inst = (DataBinding__Fuse_Navigation_SnapTo*)::uAllocObject(sizeof(DataBinding__Fuse_Navigation_SnapTo), DataBinding__Fuse_Navigation_SnapTo__typeof());
    inst->_ObjInit_2(target, key);
    return inst;
}

void DataBinding__Fuse_Navigation_SnapTo__NewValue(DataBinding__Fuse_Navigation_SnapTo* __this, ::uObject* value)
{
    if (::uIs(value, ::app::Fuse::Navigation::SnapTo__typeof()))
    {
        __this->PushValue(value);
    }
    else if (::uIs(value, ::app::Fuse::Reactive::IObservable__typeof()))
    {
        if (__this->_subscription != NULL)
        {
            ::app::Uno::IDisposable::Dispose(::uPtr< ::uObject*>(__this->_subscription));
            __this->_subscription = NULL;
        }

        ::uObject* obs = ::uAs< ::uObject*>(value, ::app::Fuse::Reactive::IObservable__typeof());

        if (obs != NULL)
        {
            __this->_subscription = ::app::Fuse::Reactive::IObservable::Subscribe(::uPtr< ::uObject*>(obs), (::uObject*)__this);
        }
    }
    else
    {
        __this->PushValue(value);
    }
}

void DataBinding__Fuse_Navigation_SnapTo__OnRooted(DataBinding__Fuse_Navigation_SnapTo* __this, ::app::Fuse::Node* n)
{
    ::uPtr< ::app::Uno::UX::Property__Fuse_Navigation_SnapTo*>(__this->Target())->add_ValueChanged(::uNewDelegateNonVirt(::app::Uno::UX::ValueChangedHandler__Fuse_Navigation_SnapTo__typeof(), (const void*)DataBinding__Fuse_Navigation_SnapTo__OnValueChanged, __this));
    ::app::Fuse::Reactive::Binding__OnRooted(__this, n);
}

void DataBinding__Fuse_Navigation_SnapTo__OnUnrooted(DataBinding__Fuse_Navigation_SnapTo* __this, ::app::Fuse::Node* n)
{
    ::app::Fuse::Scripting::NameRegistry__RemoveListener(NULL, (::uObject*)__this);
    ::uPtr< ::app::Uno::UX::Property__Fuse_Navigation_SnapTo*>(__this->Target())->remove_ValueChanged(::uNewDelegateNonVirt(::app::Uno::UX::ValueChangedHandler__Fuse_Navigation_SnapTo__typeof(), (const void*)DataBinding__Fuse_Navigation_SnapTo__OnValueChanged, __this));

    if (__this->_subscription != NULL)
    {
        ::app::Uno::IDisposable::Dispose(::uPtr< ::uObject*>(__this->_subscription));
        __this->_subscription = NULL;
    }

    ::app::Fuse::Reactive::Binding__OnUnrooted(__this, n);
}

void DataBinding__Fuse_Navigation_SnapTo__OnValueChanged(DataBinding__Fuse_Navigation_SnapTo* __this, ::uObject* sender, ::app::Uno::UX::ValueChangedArgs__Fuse_Navigation_SnapTo* args)
{
    if ((__this->_subscription != NULL) && (::uPtr< ::app::Uno::UX::ValueChangedArgs__Fuse_Navigation_SnapTo*>(args)->Origin() != __this))
    {
        ::app::Fuse::Reactive::ISubscription::SetExclusive(::uPtr< ::uObject*>(__this->_subscription), ::uBox< int>(::app::Fuse::Navigation::SnapTo__typeof(), ::uPtr< ::app::Uno::UX::ValueChangedArgs__Fuse_Navigation_SnapTo*>(args)->Value()));
    }
}

void DataBinding__Fuse_Navigation_SnapTo__PushValue(DataBinding__Fuse_Navigation_SnapTo* __this, ::uObject* newValue)
{
    __this->_currentValue = newValue;

    if (::uIs(newValue, ::app::Fuse::Navigation::SnapTo__typeof()))
    {
        ::app::Fuse::Scripting::NameRegistry__RemoveListener(NULL, (::uObject*)__this);
        ::uPtr< ::app::Uno::UX::Property__Fuse_Navigation_SnapTo*>(__this->Target())->SetRestState(::uUnbox< int>(::app::Fuse::Navigation::SnapTo__typeof(), newValue), (::uObject*)__this);
        return;
    }

    ::uString* name = ::uAs< ::uString*>(newValue, ::app::Uno::String__typeof());

    if (::app::Uno::String__op_Inequality(NULL, name, NULL) && (__this->Node() != NULL))
    {
        ::app::Fuse::Scripting::NameRegistry__AddListener(NULL, name, (::uObject*)__this);
        ::app::Fuse::Node* k = ::uPtr< ::app::Fuse::Node*>(__this->Node())->FindNodeByName(::uCast< ::uString*>(newValue, ::app::Uno::String__typeof()));

        if (::uIs(k, ::app::Fuse::Navigation::SnapTo__typeof()))
        {
            ::uPtr< ::app::Uno::UX::Property__Fuse_Navigation_SnapTo*>(__this->Target())->SetRestState(::uUnbox< int>(::app::Fuse::Navigation::SnapTo__typeof(), (::uObject*)k), (::uObject*)__this);
            return;
        }
        else
        {
            ::uObject* candidate = ::uPtr< ::app::Fuse::Node*>(__this->Node())->FindObjectByName(::uCast< ::uString*>(newValue, ::app::Uno::String__typeof()), ::uNewDelegateNonVirt(::app::Uno::Predicate__object__typeof(), (const void*)DataBinding__Fuse_Navigation_SnapTo__Acceptor, __this));

            if (::uIs(candidate, ::app::Fuse::Navigation::SnapTo__typeof()))
            {
                ::uPtr< ::app::Uno::UX::Property__Fuse_Navigation_SnapTo*>(__this->Target())->SetRestState(::uUnbox< int>(::app::Fuse::Navigation::SnapTo__typeof(), candidate), (::uObject*)__this);
                return;
            }
        }
    }

    ::app::Fuse::Reactive::Marshal__ToType__Fuse_Navigation_SnapTo(NULL, newValue, ::uNewDelegateNonVirt(::app::Uno::Action__Fuse_Navigation_SnapTo__typeof(), (const void*)DataBinding__Fuse_Navigation_SnapTo__SetValue, __this));
}

void DataBinding__Fuse_Navigation_SnapTo__set_Target(DataBinding__Fuse_Navigation_SnapTo* __this, ::app::Uno::UX::Property__Fuse_Navigation_SnapTo* value)
{
    __this->_Target = value;
}

void DataBinding__Fuse_Navigation_SnapTo__SetValue(DataBinding__Fuse_Navigation_SnapTo* __this, int value)
{
    ::uPtr< ::app::Uno::UX::Property__Fuse_Navigation_SnapTo*>(__this->Target())->SetRestState(value, (::uObject*)__this);
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Reactive\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

DataBinding__Fuse_Navigation_SwipeDirection__uType* DataBinding__Fuse_Navigation_SwipeDirection__typeof()
{
    static ::uStaticStrong<DataBinding__Fuse_Navigation_SwipeDirection__uType*> type;
    if (type != NULL) return type;

    type = (DataBinding__Fuse_Navigation_SwipeDirection__uType*)::uAllocClassType(sizeof(DataBinding__Fuse_Navigation_SwipeDirection__uType), "Fuse.Reactive.DataBinding<Fuse.Navigation.SwipeDirection>", false, 2, 3, 0);

    type->SetBaseType(::app::Fuse::Reactive::Binding__typeof());
    type->__fp_NewValue = (void(*)(::app::Fuse::Reactive::Binding*, ::uObject*))DataBinding__Fuse_Navigation_SwipeDirection__NewValue;
    type->__fp_OnRooted = (void(*)(::app::Fuse::Behavior*, ::app::Fuse::Node*))DataBinding__Fuse_Navigation_SwipeDirection__OnRooted;
    type->__fp_OnUnrooted = (void(*)(::app::Fuse::Behavior*, ::app::Fuse::Node*))DataBinding__Fuse_Navigation_SwipeDirection__OnUnrooted;
    type->__interface_0.__fp_OnSet = (void(*)(void*, ::uObject*))DataBinding__Fuse_Navigation_SwipeDirection__Fuse_Reactive_IObserver_OnSet;
    type->__interface_0.__fp_OnAdd = (void(*)(void*, ::uObject*))DataBinding__Fuse_Navigation_SwipeDirection__Fuse_Reactive_IObserver_OnAdd;
    type->__interface_0.__fp_OnNewAt = (void(*)(void*, int, ::uObject*))DataBinding__Fuse_Navigation_SwipeDirection__Fuse_Reactive_IObserver_OnNewAt;
    type->__interface_0.__fp_OnFailed = (void(*)(void*, ::uString*))DataBinding__Fuse_Navigation_SwipeDirection__Fuse_Reactive_IObserver_OnFailed;
    type->__interface_0.__fp_OnNewAll = (void(*)(void*, int))DataBinding__Fuse_Navigation_SwipeDirection__Fuse_Reactive_IObserver_OnNewAll;
    type->__interface_0.__fp_OnRemove = (void(*)(void*, ::uObject*, int))DataBinding__Fuse_Navigation_SwipeDirection__Fuse_Reactive_IObserver_OnRemove;
    type->__interface_1.__fp_OnNameChanged = (void(*)(void*, ::uObject*, ::uString*))DataBinding__Fuse_Navigation_SwipeDirection__Fuse_Scripting_INameListener_OnNameChanged;

    type->SetInterfaces(
        ::app::Fuse::Reactive::IObserver__typeof(), offsetof(DataBinding__Fuse_Navigation_SwipeDirection__uType, __interface_0),
        ::app::Fuse::Scripting::INameListener__typeof(), offsetof(DataBinding__Fuse_Navigation_SwipeDirection__uType, __interface_1));

    type->SetStrongRefs(
        "_currentValue", offsetof(DataBinding__Fuse_Navigation_SwipeDirection, _currentValue),
        "_subscription", offsetof(DataBinding__Fuse_Navigation_SwipeDirection, _subscription),
        "_Target", offsetof(DataBinding__Fuse_Navigation_SwipeDirection, _Target));

    type->SetFields(2,
        ::uNewField("_currentValue", NULL, offsetof(DataBinding__Fuse_Navigation_SwipeDirection, _currentValue), ::uObject__typeof()),
        ::uNewField("_subscription", NULL, offsetof(DataBinding__Fuse_Navigation_SwipeDirection, _subscription), ::app::Fuse::Reactive::ISubscription__typeof()));

    type->SetFunctions(3,
        ::uNewFunction("get_Target", DataBinding__Fuse_Navigation_SwipeDirection__get_Target, 0, false, ::app::Uno::UX::Property__Fuse_Navigation_SwipeDirection__typeof()),
        ::uNewFunction(".ctor", DataBinding__Fuse_Navigation_SwipeDirection__New_1, 0, true, DataBinding__Fuse_Navigation_SwipeDirection__typeof(), ::app::Uno::UX::Property__Fuse_Navigation_SwipeDirection__typeof(), ::app::Uno::String__typeof()),
        ::uNewFunctionVoid("set_Target", DataBinding__Fuse_Navigation_SwipeDirection__set_Target, 0, false, ::app::Uno::UX::Property__Fuse_Navigation_SwipeDirection__typeof()));

    ::uRegisterType(type);
    return type;
}

void DataBinding__Fuse_Navigation_SwipeDirection___ObjInit_2(DataBinding__Fuse_Navigation_SwipeDirection* __this, ::app::Uno::UX::Property__Fuse_Navigation_SwipeDirection* target, ::uString* key)
{
    ::app::Fuse::Reactive::Binding___ObjInit_1(__this, key);
    __this->Target(target);
}

bool DataBinding__Fuse_Navigation_SwipeDirection__Acceptor(DataBinding__Fuse_Navigation_SwipeDirection* __this, ::uObject* obj)
{
    return ::uIs(obj, ::app::Fuse::Navigation::SwipeDirection__typeof());
}

void DataBinding__Fuse_Navigation_SwipeDirection__Fuse_Reactive_IObserver_OnAdd(DataBinding__Fuse_Navigation_SwipeDirection* __this, ::uObject* addedValue)
{
    U_THROW(::app::Uno::Exception__New_2(NULL, ::uGetConstString("Not handled: OnAdd")));
}

void DataBinding__Fuse_Navigation_SwipeDirection__Fuse_Reactive_IObserver_OnFailed(DataBinding__Fuse_Navigation_SwipeDirection* __this, ::uString* message)
{
    U_THROW(::app::Uno::Exception__New_2(NULL, ::uGetConstString("Not handled: OnFailed")));
}

void DataBinding__Fuse_Navigation_SwipeDirection__Fuse_Reactive_IObserver_OnNewAll(DataBinding__Fuse_Navigation_SwipeDirection* __this, int length)
{
    if (length > 0)
    {
        U_THROW(::app::Uno::Exception__New_2(NULL, ::uGetConstString("Not handled: OnNewAll")));
    }
}

void DataBinding__Fuse_Navigation_SwipeDirection__Fuse_Reactive_IObserver_OnNewAt(DataBinding__Fuse_Navigation_SwipeDirection* __this, int index, ::uObject* value)
{
    U_THROW(::app::Uno::Exception__New_2(NULL, ::uGetConstString("Not handled: OnNewAt")));
}

void DataBinding__Fuse_Navigation_SwipeDirection__Fuse_Reactive_IObserver_OnRemove(DataBinding__Fuse_Navigation_SwipeDirection* __this, ::uObject* value, int index)
{
    U_THROW(::app::Uno::Exception__New_2(NULL, ::uGetConstString("Not handled: OnRemoveAt")));
}

void DataBinding__Fuse_Navigation_SwipeDirection__Fuse_Reactive_IObserver_OnSet(DataBinding__Fuse_Navigation_SwipeDirection* __this, ::uObject* newValue)
{
    __this->PushValue(newValue);
}

void DataBinding__Fuse_Navigation_SwipeDirection__Fuse_Scripting_INameListener_OnNameChanged(DataBinding__Fuse_Navigation_SwipeDirection* __this, ::uObject* obj, ::uString* name)
{
    __this->PushValue(__this->_currentValue);
}

::app::Uno::UX::Property__Fuse_Navigation_SwipeDirection* DataBinding__Fuse_Navigation_SwipeDirection__get_Target(DataBinding__Fuse_Navigation_SwipeDirection* __this)
{
    return __this->_Target;
}

DataBinding__Fuse_Navigation_SwipeDirection* DataBinding__Fuse_Navigation_SwipeDirection__New_1(::uStatic* __this, ::app::Uno::UX::Property__Fuse_Navigation_SwipeDirection* target, ::uString* key)
{
    DataBinding__Fuse_Navigation_SwipeDirection* inst = (DataBinding__Fuse_Navigation_SwipeDirection*)::uAllocObject(sizeof(DataBinding__Fuse_Navigation_SwipeDirection), DataBinding__Fuse_Navigation_SwipeDirection__typeof());
    inst->_ObjInit_2(target, key);
    return inst;
}

void DataBinding__Fuse_Navigation_SwipeDirection__NewValue(DataBinding__Fuse_Navigation_SwipeDirection* __this, ::uObject* value)
{
    if (::uIs(value, ::app::Fuse::Navigation::SwipeDirection__typeof()))
    {
        __this->PushValue(value);
    }
    else if (::uIs(value, ::app::Fuse::Reactive::IObservable__typeof()))
    {
        if (__this->_subscription != NULL)
        {
            ::app::Uno::IDisposable::Dispose(::uPtr< ::uObject*>(__this->_subscription));
            __this->_subscription = NULL;
        }

        ::uObject* obs = ::uAs< ::uObject*>(value, ::app::Fuse::Reactive::IObservable__typeof());

        if (obs != NULL)
        {
            __this->_subscription = ::app::Fuse::Reactive::IObservable::Subscribe(::uPtr< ::uObject*>(obs), (::uObject*)__this);
        }
    }
    else
    {
        __this->PushValue(value);
    }
}

void DataBinding__Fuse_Navigation_SwipeDirection__OnRooted(DataBinding__Fuse_Navigation_SwipeDirection* __this, ::app::Fuse::Node* n)
{
    ::uPtr< ::app::Uno::UX::Property__Fuse_Navigation_SwipeDirection*>(__this->Target())->add_ValueChanged(::uNewDelegateNonVirt(::app::Uno::UX::ValueChangedHandler__Fuse_Navigation_SwipeDirection__typeof(), (const void*)DataBinding__Fuse_Navigation_SwipeDirection__OnValueChanged, __this));
    ::app::Fuse::Reactive::Binding__OnRooted(__this, n);
}

void DataBinding__Fuse_Navigation_SwipeDirection__OnUnrooted(DataBinding__Fuse_Navigation_SwipeDirection* __this, ::app::Fuse::Node* n)
{
    ::app::Fuse::Scripting::NameRegistry__RemoveListener(NULL, (::uObject*)__this);
    ::uPtr< ::app::Uno::UX::Property__Fuse_Navigation_SwipeDirection*>(__this->Target())->remove_ValueChanged(::uNewDelegateNonVirt(::app::Uno::UX::ValueChangedHandler__Fuse_Navigation_SwipeDirection__typeof(), (const void*)DataBinding__Fuse_Navigation_SwipeDirection__OnValueChanged, __this));

    if (__this->_subscription != NULL)
    {
        ::app::Uno::IDisposable::Dispose(::uPtr< ::uObject*>(__this->_subscription));
        __this->_subscription = NULL;
    }

    ::app::Fuse::Reactive::Binding__OnUnrooted(__this, n);
}

void DataBinding__Fuse_Navigation_SwipeDirection__OnValueChanged(DataBinding__Fuse_Navigation_SwipeDirection* __this, ::uObject* sender, ::app::Uno::UX::ValueChangedArgs__Fuse_Navigation_SwipeDirection* args)
{
    if ((__this->_subscription != NULL) && (::uPtr< ::app::Uno::UX::ValueChangedArgs__Fuse_Navigation_SwipeDirection*>(args)->Origin() != __this))
    {
        ::app::Fuse::Reactive::ISubscription::SetExclusive(::uPtr< ::uObject*>(__this->_subscription), ::uBox< int>(::app::Fuse::Navigation::SwipeDirection__typeof(), ::uPtr< ::app::Uno::UX::ValueChangedArgs__Fuse_Navigation_SwipeDirection*>(args)->Value()));
    }
}

void DataBinding__Fuse_Navigation_SwipeDirection__PushValue(DataBinding__Fuse_Navigation_SwipeDirection* __this, ::uObject* newValue)
{
    __this->_currentValue = newValue;

    if (::uIs(newValue, ::app::Fuse::Navigation::SwipeDirection__typeof()))
    {
        ::app::Fuse::Scripting::NameRegistry__RemoveListener(NULL, (::uObject*)__this);
        ::uPtr< ::app::Uno::UX::Property__Fuse_Navigation_SwipeDirection*>(__this->Target())->SetRestState(::uUnbox< int>(::app::Fuse::Navigation::SwipeDirection__typeof(), newValue), (::uObject*)__this);
        return;
    }

    ::uString* name = ::uAs< ::uString*>(newValue, ::app::Uno::String__typeof());

    if (::app::Uno::String__op_Inequality(NULL, name, NULL) && (__this->Node() != NULL))
    {
        ::app::Fuse::Scripting::NameRegistry__AddListener(NULL, name, (::uObject*)__this);
        ::app::Fuse::Node* k = ::uPtr< ::app::Fuse::Node*>(__this->Node())->FindNodeByName(::uCast< ::uString*>(newValue, ::app::Uno::String__typeof()));

        if (::uIs(k, ::app::Fuse::Navigation::SwipeDirection__typeof()))
        {
            ::uPtr< ::app::Uno::UX::Property__Fuse_Navigation_SwipeDirection*>(__this->Target())->SetRestState(::uUnbox< int>(::app::Fuse::Navigation::SwipeDirection__typeof(), (::uObject*)k), (::uObject*)__this);
            return;
        }
        else
        {
            ::uObject* candidate = ::uPtr< ::app::Fuse::Node*>(__this->Node())->FindObjectByName(::uCast< ::uString*>(newValue, ::app::Uno::String__typeof()), ::uNewDelegateNonVirt(::app::Uno::Predicate__object__typeof(), (const void*)DataBinding__Fuse_Navigation_SwipeDirection__Acceptor, __this));

            if (::uIs(candidate, ::app::Fuse::Navigation::SwipeDirection__typeof()))
            {
                ::uPtr< ::app::Uno::UX::Property__Fuse_Navigation_SwipeDirection*>(__this->Target())->SetRestState(::uUnbox< int>(::app::Fuse::Navigation::SwipeDirection__typeof(), candidate), (::uObject*)__this);
                return;
            }
        }
    }

    ::app::Fuse::Reactive::Marshal__ToType__Fuse_Navigation_SwipeDirection(NULL, newValue, ::uNewDelegateNonVirt(::app::Uno::Action__Fuse_Navigation_SwipeDirection__typeof(), (const void*)DataBinding__Fuse_Navigation_SwipeDirection__SetValue, __this));
}

void DataBinding__Fuse_Navigation_SwipeDirection__set_Target(DataBinding__Fuse_Navigation_SwipeDirection* __this, ::app::Uno::UX::Property__Fuse_Navigation_SwipeDirection* value)
{
    __this->_Target = value;
}

void DataBinding__Fuse_Navigation_SwipeDirection__SetValue(DataBinding__Fuse_Navigation_SwipeDirection* __this, int value)
{
    ::uPtr< ::app::Uno::UX::Property__Fuse_Navigation_SwipeDirection*>(__this->Target())->SetRestState(value, (::uObject*)__this);
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Reactive\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

DataBinding__Fuse_Navigation_SwipeEnds__uType* DataBinding__Fuse_Navigation_SwipeEnds__typeof()
{
    static ::uStaticStrong<DataBinding__Fuse_Navigation_SwipeEnds__uType*> type;
    if (type != NULL) return type;

    type = (DataBinding__Fuse_Navigation_SwipeEnds__uType*)::uAllocClassType(sizeof(DataBinding__Fuse_Navigation_SwipeEnds__uType), "Fuse.Reactive.DataBinding<Fuse.Navigation.SwipeEnds>", false, 2, 3, 0);

    type->SetBaseType(::app::Fuse::Reactive::Binding__typeof());
    type->__fp_NewValue = (void(*)(::app::Fuse::Reactive::Binding*, ::uObject*))DataBinding__Fuse_Navigation_SwipeEnds__NewValue;
    type->__fp_OnRooted = (void(*)(::app::Fuse::Behavior*, ::app::Fuse::Node*))DataBinding__Fuse_Navigation_SwipeEnds__OnRooted;
    type->__fp_OnUnrooted = (void(*)(::app::Fuse::Behavior*, ::app::Fuse::Node*))DataBinding__Fuse_Navigation_SwipeEnds__OnUnrooted;
    type->__interface_0.__fp_OnSet = (void(*)(void*, ::uObject*))DataBinding__Fuse_Navigation_SwipeEnds__Fuse_Reactive_IObserver_OnSet;
    type->__interface_0.__fp_OnAdd = (void(*)(void*, ::uObject*))DataBinding__Fuse_Navigation_SwipeEnds__Fuse_Reactive_IObserver_OnAdd;
    type->__interface_0.__fp_OnNewAt = (void(*)(void*, int, ::uObject*))DataBinding__Fuse_Navigation_SwipeEnds__Fuse_Reactive_IObserver_OnNewAt;
    type->__interface_0.__fp_OnFailed = (void(*)(void*, ::uString*))DataBinding__Fuse_Navigation_SwipeEnds__Fuse_Reactive_IObserver_OnFailed;
    type->__interface_0.__fp_OnNewAll = (void(*)(void*, int))DataBinding__Fuse_Navigation_SwipeEnds__Fuse_Reactive_IObserver_OnNewAll;
    type->__interface_0.__fp_OnRemove = (void(*)(void*, ::uObject*, int))DataBinding__Fuse_Navigation_SwipeEnds__Fuse_Reactive_IObserver_OnRemove;
    type->__interface_1.__fp_OnNameChanged = (void(*)(void*, ::uObject*, ::uString*))DataBinding__Fuse_Navigation_SwipeEnds__Fuse_Scripting_INameListener_OnNameChanged;

    type->SetInterfaces(
        ::app::Fuse::Reactive::IObserver__typeof(), offsetof(DataBinding__Fuse_Navigation_SwipeEnds__uType, __interface_0),
        ::app::Fuse::Scripting::INameListener__typeof(), offsetof(DataBinding__Fuse_Navigation_SwipeEnds__uType, __interface_1));

    type->SetStrongRefs(
        "_currentValue", offsetof(DataBinding__Fuse_Navigation_SwipeEnds, _currentValue),
        "_subscription", offsetof(DataBinding__Fuse_Navigation_SwipeEnds, _subscription),
        "_Target", offsetof(DataBinding__Fuse_Navigation_SwipeEnds, _Target));

    type->SetFields(2,
        ::uNewField("_currentValue", NULL, offsetof(DataBinding__Fuse_Navigation_SwipeEnds, _currentValue), ::uObject__typeof()),
        ::uNewField("_subscription", NULL, offsetof(DataBinding__Fuse_Navigation_SwipeEnds, _subscription), ::app::Fuse::Reactive::ISubscription__typeof()));

    type->SetFunctions(3,
        ::uNewFunction("get_Target", DataBinding__Fuse_Navigation_SwipeEnds__get_Target, 0, false, ::app::Uno::UX::Property__Fuse_Navigation_SwipeEnds__typeof()),
        ::uNewFunction(".ctor", DataBinding__Fuse_Navigation_SwipeEnds__New_1, 0, true, DataBinding__Fuse_Navigation_SwipeEnds__typeof(), ::app::Uno::UX::Property__Fuse_Navigation_SwipeEnds__typeof(), ::app::Uno::String__typeof()),
        ::uNewFunctionVoid("set_Target", DataBinding__Fuse_Navigation_SwipeEnds__set_Target, 0, false, ::app::Uno::UX::Property__Fuse_Navigation_SwipeEnds__typeof()));

    ::uRegisterType(type);
    return type;
}

void DataBinding__Fuse_Navigation_SwipeEnds___ObjInit_2(DataBinding__Fuse_Navigation_SwipeEnds* __this, ::app::Uno::UX::Property__Fuse_Navigation_SwipeEnds* target, ::uString* key)
{
    ::app::Fuse::Reactive::Binding___ObjInit_1(__this, key);
    __this->Target(target);
}

bool DataBinding__Fuse_Navigation_SwipeEnds__Acceptor(DataBinding__Fuse_Navigation_SwipeEnds* __this, ::uObject* obj)
{
    return ::uIs(obj, ::app::Fuse::Navigation::SwipeEnds__typeof());
}

void DataBinding__Fuse_Navigation_SwipeEnds__Fuse_Reactive_IObserver_OnAdd(DataBinding__Fuse_Navigation_SwipeEnds* __this, ::uObject* addedValue)
{
    U_THROW(::app::Uno::Exception__New_2(NULL, ::uGetConstString("Not handled: OnAdd")));
}

void DataBinding__Fuse_Navigation_SwipeEnds__Fuse_Reactive_IObserver_OnFailed(DataBinding__Fuse_Navigation_SwipeEnds* __this, ::uString* message)
{
    U_THROW(::app::Uno::Exception__New_2(NULL, ::uGetConstString("Not handled: OnFailed")));
}

void DataBinding__Fuse_Navigation_SwipeEnds__Fuse_Reactive_IObserver_OnNewAll(DataBinding__Fuse_Navigation_SwipeEnds* __this, int length)
{
    if (length > 0)
    {
        U_THROW(::app::Uno::Exception__New_2(NULL, ::uGetConstString("Not handled: OnNewAll")));
    }
}

void DataBinding__Fuse_Navigation_SwipeEnds__Fuse_Reactive_IObserver_OnNewAt(DataBinding__Fuse_Navigation_SwipeEnds* __this, int index, ::uObject* value)
{
    U_THROW(::app::Uno::Exception__New_2(NULL, ::uGetConstString("Not handled: OnNewAt")));
}

void DataBinding__Fuse_Navigation_SwipeEnds__Fuse_Reactive_IObserver_OnRemove(DataBinding__Fuse_Navigation_SwipeEnds* __this, ::uObject* value, int index)
{
    U_THROW(::app::Uno::Exception__New_2(NULL, ::uGetConstString("Not handled: OnRemoveAt")));
}

void DataBinding__Fuse_Navigation_SwipeEnds__Fuse_Reactive_IObserver_OnSet(DataBinding__Fuse_Navigation_SwipeEnds* __this, ::uObject* newValue)
{
    __this->PushValue(newValue);
}

void DataBinding__Fuse_Navigation_SwipeEnds__Fuse_Scripting_INameListener_OnNameChanged(DataBinding__Fuse_Navigation_SwipeEnds* __this, ::uObject* obj, ::uString* name)
{
    __this->PushValue(__this->_currentValue);
}

::app::Uno::UX::Property__Fuse_Navigation_SwipeEnds* DataBinding__Fuse_Navigation_SwipeEnds__get_Target(DataBinding__Fuse_Navigation_SwipeEnds* __this)
{
    return __this->_Target;
}

DataBinding__Fuse_Navigation_SwipeEnds* DataBinding__Fuse_Navigation_SwipeEnds__New_1(::uStatic* __this, ::app::Uno::UX::Property__Fuse_Navigation_SwipeEnds* target, ::uString* key)
{
    DataBinding__Fuse_Navigation_SwipeEnds* inst = (DataBinding__Fuse_Navigation_SwipeEnds*)::uAllocObject(sizeof(DataBinding__Fuse_Navigation_SwipeEnds), DataBinding__Fuse_Navigation_SwipeEnds__typeof());
    inst->_ObjInit_2(target, key);
    return inst;
}

void DataBinding__Fuse_Navigation_SwipeEnds__NewValue(DataBinding__Fuse_Navigation_SwipeEnds* __this, ::uObject* value)
{
    if (::uIs(value, ::app::Fuse::Navigation::SwipeEnds__typeof()))
    {
        __this->PushValue(value);
    }
    else if (::uIs(value, ::app::Fuse::Reactive::IObservable__typeof()))
    {
        if (__this->_subscription != NULL)
        {
            ::app::Uno::IDisposable::Dispose(::uPtr< ::uObject*>(__this->_subscription));
            __this->_subscription = NULL;
        }

        ::uObject* obs = ::uAs< ::uObject*>(value, ::app::Fuse::Reactive::IObservable__typeof());

        if (obs != NULL)
        {
            __this->_subscription = ::app::Fuse::Reactive::IObservable::Subscribe(::uPtr< ::uObject*>(obs), (::uObject*)__this);
        }
    }
    else
    {
        __this->PushValue(value);
    }
}

void DataBinding__Fuse_Navigation_SwipeEnds__OnRooted(DataBinding__Fuse_Navigation_SwipeEnds* __this, ::app::Fuse::Node* n)
{
    ::uPtr< ::app::Uno::UX::Property__Fuse_Navigation_SwipeEnds*>(__this->Target())->add_ValueChanged(::uNewDelegateNonVirt(::app::Uno::UX::ValueChangedHandler__Fuse_Navigation_SwipeEnds__typeof(), (const void*)DataBinding__Fuse_Navigation_SwipeEnds__OnValueChanged, __this));
    ::app::Fuse::Reactive::Binding__OnRooted(__this, n);
}

void DataBinding__Fuse_Navigation_SwipeEnds__OnUnrooted(DataBinding__Fuse_Navigation_SwipeEnds* __this, ::app::Fuse::Node* n)
{
    ::app::Fuse::Scripting::NameRegistry__RemoveListener(NULL, (::uObject*)__this);
    ::uPtr< ::app::Uno::UX::Property__Fuse_Navigation_SwipeEnds*>(__this->Target())->remove_ValueChanged(::uNewDelegateNonVirt(::app::Uno::UX::ValueChangedHandler__Fuse_Navigation_SwipeEnds__typeof(), (const void*)DataBinding__Fuse_Navigation_SwipeEnds__OnValueChanged, __this));

    if (__this->_subscription != NULL)
    {
        ::app::Uno::IDisposable::Dispose(::uPtr< ::uObject*>(__this->_subscription));
        __this->_subscription = NULL;
    }

    ::app::Fuse::Reactive::Binding__OnUnrooted(__this, n);
}

void DataBinding__Fuse_Navigation_SwipeEnds__OnValueChanged(DataBinding__Fuse_Navigation_SwipeEnds* __this, ::uObject* sender, ::app::Uno::UX::ValueChangedArgs__Fuse_Navigation_SwipeEnds* args)
{
    if ((__this->_subscription != NULL) && (::uPtr< ::app::Uno::UX::ValueChangedArgs__Fuse_Navigation_SwipeEnds*>(args)->Origin() != __this))
    {
        ::app::Fuse::Reactive::ISubscription::SetExclusive(::uPtr< ::uObject*>(__this->_subscription), ::uBox< int>(::app::Fuse::Navigation::SwipeEnds__typeof(), ::uPtr< ::app::Uno::UX::ValueChangedArgs__Fuse_Navigation_SwipeEnds*>(args)->Value()));
    }
}

void DataBinding__Fuse_Navigation_SwipeEnds__PushValue(DataBinding__Fuse_Navigation_SwipeEnds* __this, ::uObject* newValue)
{
    __this->_currentValue = newValue;

    if (::uIs(newValue, ::app::Fuse::Navigation::SwipeEnds__typeof()))
    {
        ::app::Fuse::Scripting::NameRegistry__RemoveListener(NULL, (::uObject*)__this);
        ::uPtr< ::app::Uno::UX::Property__Fuse_Navigation_SwipeEnds*>(__this->Target())->SetRestState(::uUnbox< int>(::app::Fuse::Navigation::SwipeEnds__typeof(), newValue), (::uObject*)__this);
        return;
    }

    ::uString* name = ::uAs< ::uString*>(newValue, ::app::Uno::String__typeof());

    if (::app::Uno::String__op_Inequality(NULL, name, NULL) && (__this->Node() != NULL))
    {
        ::app::Fuse::Scripting::NameRegistry__AddListener(NULL, name, (::uObject*)__this);
        ::app::Fuse::Node* k = ::uPtr< ::app::Fuse::Node*>(__this->Node())->FindNodeByName(::uCast< ::uString*>(newValue, ::app::Uno::String__typeof()));

        if (::uIs(k, ::app::Fuse::Navigation::SwipeEnds__typeof()))
        {
            ::uPtr< ::app::Uno::UX::Property__Fuse_Navigation_SwipeEnds*>(__this->Target())->SetRestState(::uUnbox< int>(::app::Fuse::Navigation::SwipeEnds__typeof(), (::uObject*)k), (::uObject*)__this);
            return;
        }
        else
        {
            ::uObject* candidate = ::uPtr< ::app::Fuse::Node*>(__this->Node())->FindObjectByName(::uCast< ::uString*>(newValue, ::app::Uno::String__typeof()), ::uNewDelegateNonVirt(::app::Uno::Predicate__object__typeof(), (const void*)DataBinding__Fuse_Navigation_SwipeEnds__Acceptor, __this));

            if (::uIs(candidate, ::app::Fuse::Navigation::SwipeEnds__typeof()))
            {
                ::uPtr< ::app::Uno::UX::Property__Fuse_Navigation_SwipeEnds*>(__this->Target())->SetRestState(::uUnbox< int>(::app::Fuse::Navigation::SwipeEnds__typeof(), candidate), (::uObject*)__this);
                return;
            }
        }
    }

    ::app::Fuse::Reactive::Marshal__ToType__Fuse_Navigation_SwipeEnds(NULL, newValue, ::uNewDelegateNonVirt(::app::Uno::Action__Fuse_Navigation_SwipeEnds__typeof(), (const void*)DataBinding__Fuse_Navigation_SwipeEnds__SetValue, __this));
}

void DataBinding__Fuse_Navigation_SwipeEnds__set_Target(DataBinding__Fuse_Navigation_SwipeEnds* __this, ::app::Uno::UX::Property__Fuse_Navigation_SwipeEnds* value)
{
    __this->_Target = value;
}

void DataBinding__Fuse_Navigation_SwipeEnds__SetValue(DataBinding__Fuse_Navigation_SwipeEnds* __this, int value)
{
    ::uPtr< ::app::Uno::UX::Property__Fuse_Navigation_SwipeEnds*>(__this->Target())->SetRestState(value, (::uObject*)__this);
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Reactive\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

DataBinding__Fuse_Node__uType* DataBinding__Fuse_Node__typeof()
{
    static ::uStaticStrong<DataBinding__Fuse_Node__uType*> type;
    if (type != NULL) return type;

    type = (DataBinding__Fuse_Node__uType*)::uAllocClassType(sizeof(DataBinding__Fuse_Node__uType), "Fuse.Reactive.DataBinding<Fuse.Node>", false, 2, 3, 0);

    type->SetBaseType(::app::Fuse::Reactive::Binding__typeof());
    type->__fp_NewValue = (void(*)(::app::Fuse::Reactive::Binding*, ::uObject*))DataBinding__Fuse_Node__NewValue;
    type->__fp_OnRooted = (void(*)(::app::Fuse::Behavior*, ::app::Fuse::Node*))DataBinding__Fuse_Node__OnRooted;
    type->__fp_OnUnrooted = (void(*)(::app::Fuse::Behavior*, ::app::Fuse::Node*))DataBinding__Fuse_Node__OnUnrooted;
    type->__interface_0.__fp_OnSet = (void(*)(void*, ::uObject*))DataBinding__Fuse_Node__Fuse_Reactive_IObserver_OnSet;
    type->__interface_0.__fp_OnAdd = (void(*)(void*, ::uObject*))DataBinding__Fuse_Node__Fuse_Reactive_IObserver_OnAdd;
    type->__interface_0.__fp_OnNewAt = (void(*)(void*, int, ::uObject*))DataBinding__Fuse_Node__Fuse_Reactive_IObserver_OnNewAt;
    type->__interface_0.__fp_OnFailed = (void(*)(void*, ::uString*))DataBinding__Fuse_Node__Fuse_Reactive_IObserver_OnFailed;
    type->__interface_0.__fp_OnNewAll = (void(*)(void*, int))DataBinding__Fuse_Node__Fuse_Reactive_IObserver_OnNewAll;
    type->__interface_0.__fp_OnRemove = (void(*)(void*, ::uObject*, int))DataBinding__Fuse_Node__Fuse_Reactive_IObserver_OnRemove;
    type->__interface_1.__fp_OnNameChanged = (void(*)(void*, ::uObject*, ::uString*))DataBinding__Fuse_Node__Fuse_Scripting_INameListener_OnNameChanged;

    type->SetInterfaces(
        ::app::Fuse::Reactive::IObserver__typeof(), offsetof(DataBinding__Fuse_Node__uType, __interface_0),
        ::app::Fuse::Scripting::INameListener__typeof(), offsetof(DataBinding__Fuse_Node__uType, __interface_1));

    type->SetStrongRefs(
        "_currentValue", offsetof(DataBinding__Fuse_Node, _currentValue),
        "_subscription", offsetof(DataBinding__Fuse_Node, _subscription),
        "_Target", offsetof(DataBinding__Fuse_Node, _Target));

    type->SetFields(2,
        ::uNewField("_currentValue", NULL, offsetof(DataBinding__Fuse_Node, _currentValue), ::uObject__typeof()),
        ::uNewField("_subscription", NULL, offsetof(DataBinding__Fuse_Node, _subscription), ::app::Fuse::Reactive::ISubscription__typeof()));

    type->SetFunctions(3,
        ::uNewFunction("get_Target", DataBinding__Fuse_Node__get_Target, 0, false, ::app::Uno::UX::Property__Fuse_Node__typeof()),
        ::uNewFunction(".ctor", DataBinding__Fuse_Node__New_1, 0, true, DataBinding__Fuse_Node__typeof(), ::app::Uno::UX::Property__Fuse_Node__typeof(), ::app::Uno::String__typeof()),
        ::uNewFunctionVoid("set_Target", DataBinding__Fuse_Node__set_Target, 0, false, ::app::Uno::UX::Property__Fuse_Node__typeof()));

    ::uRegisterType(type);
    return type;
}

void DataBinding__Fuse_Node___ObjInit_2(DataBinding__Fuse_Node* __this, ::app::Uno::UX::Property__Fuse_Node* target, ::uString* key)
{
    ::app::Fuse::Reactive::Binding___ObjInit_1(__this, key);
    __this->Target(target);
}

bool DataBinding__Fuse_Node__Acceptor(DataBinding__Fuse_Node* __this, ::uObject* obj)
{
    return ::uIs(obj, ::app::Fuse::Node__typeof());
}

void DataBinding__Fuse_Node__Fuse_Reactive_IObserver_OnAdd(DataBinding__Fuse_Node* __this, ::uObject* addedValue)
{
    U_THROW(::app::Uno::Exception__New_2(NULL, ::uGetConstString("Not handled: OnAdd")));
}

void DataBinding__Fuse_Node__Fuse_Reactive_IObserver_OnFailed(DataBinding__Fuse_Node* __this, ::uString* message)
{
    U_THROW(::app::Uno::Exception__New_2(NULL, ::uGetConstString("Not handled: OnFailed")));
}

void DataBinding__Fuse_Node__Fuse_Reactive_IObserver_OnNewAll(DataBinding__Fuse_Node* __this, int length)
{
    if (length > 0)
    {
        U_THROW(::app::Uno::Exception__New_2(NULL, ::uGetConstString("Not handled: OnNewAll")));
    }
}

void DataBinding__Fuse_Node__Fuse_Reactive_IObserver_OnNewAt(DataBinding__Fuse_Node* __this, int index, ::uObject* value)
{
    U_THROW(::app::Uno::Exception__New_2(NULL, ::uGetConstString("Not handled: OnNewAt")));
}

void DataBinding__Fuse_Node__Fuse_Reactive_IObserver_OnRemove(DataBinding__Fuse_Node* __this, ::uObject* value, int index)
{
    U_THROW(::app::Uno::Exception__New_2(NULL, ::uGetConstString("Not handled: OnRemoveAt")));
}

void DataBinding__Fuse_Node__Fuse_Reactive_IObserver_OnSet(DataBinding__Fuse_Node* __this, ::uObject* newValue)
{
    __this->PushValue(newValue);
}

void DataBinding__Fuse_Node__Fuse_Scripting_INameListener_OnNameChanged(DataBinding__Fuse_Node* __this, ::uObject* obj, ::uString* name)
{
    __this->PushValue(__this->_currentValue);
}

::app::Uno::UX::Property__Fuse_Node* DataBinding__Fuse_Node__get_Target(DataBinding__Fuse_Node* __this)
{
    return __this->_Target;
}

DataBinding__Fuse_Node* DataBinding__Fuse_Node__New_1(::uStatic* __this, ::app::Uno::UX::Property__Fuse_Node* target, ::uString* key)
{
    DataBinding__Fuse_Node* inst = (DataBinding__Fuse_Node*)::uAllocObject(sizeof(DataBinding__Fuse_Node), DataBinding__Fuse_Node__typeof());
    inst->_ObjInit_2(target, key);
    return inst;
}

void DataBinding__Fuse_Node__NewValue(DataBinding__Fuse_Node* __this, ::uObject* value)
{
    if (::uIs(value, ::app::Fuse::Node__typeof()))
    {
        __this->PushValue(value);
    }
    else if (::uIs(value, ::app::Fuse::Reactive::IObservable__typeof()))
    {
        if (__this->_subscription != NULL)
        {
            ::app::Uno::IDisposable::Dispose(::uPtr< ::uObject*>(__this->_subscription));
            __this->_subscription = NULL;
        }

        ::uObject* obs = ::uAs< ::uObject*>(value, ::app::Fuse::Reactive::IObservable__typeof());

        if (obs != NULL)
        {
            __this->_subscription = ::app::Fuse::Reactive::IObservable::Subscribe(::uPtr< ::uObject*>(obs), (::uObject*)__this);
        }
    }
    else
    {
        __this->PushValue(value);
    }
}

void DataBinding__Fuse_Node__OnRooted(DataBinding__Fuse_Node* __this, ::app::Fuse::Node* n)
{
    ::uPtr< ::app::Uno::UX::Property__Fuse_Node*>(__this->Target())->add_ValueChanged(::uNewDelegateNonVirt(::app::Uno::UX::ValueChangedHandler__Fuse_Node__typeof(), (const void*)DataBinding__Fuse_Node__OnValueChanged, __this));
    ::app::Fuse::Reactive::Binding__OnRooted(__this, n);
}

void DataBinding__Fuse_Node__OnUnrooted(DataBinding__Fuse_Node* __this, ::app::Fuse::Node* n)
{
    ::app::Fuse::Scripting::NameRegistry__RemoveListener(NULL, (::uObject*)__this);
    ::uPtr< ::app::Uno::UX::Property__Fuse_Node*>(__this->Target())->remove_ValueChanged(::uNewDelegateNonVirt(::app::Uno::UX::ValueChangedHandler__Fuse_Node__typeof(), (const void*)DataBinding__Fuse_Node__OnValueChanged, __this));

    if (__this->_subscription != NULL)
    {
        ::app::Uno::IDisposable::Dispose(::uPtr< ::uObject*>(__this->_subscription));
        __this->_subscription = NULL;
    }

    ::app::Fuse::Reactive::Binding__OnUnrooted(__this, n);
}

void DataBinding__Fuse_Node__OnValueChanged(DataBinding__Fuse_Node* __this, ::uObject* sender, ::app::Uno::UX::ValueChangedArgs__Fuse_Node* args)
{
    if ((__this->_subscription != NULL) && (::uPtr< ::app::Uno::UX::ValueChangedArgs__Fuse_Node*>(args)->Origin() != __this))
    {
        ::app::Fuse::Reactive::ISubscription::SetExclusive(::uPtr< ::uObject*>(__this->_subscription), (::uObject*)::uPtr< ::app::Uno::UX::ValueChangedArgs__Fuse_Node*>(args)->Value());
    }
}

void DataBinding__Fuse_Node__PushValue(DataBinding__Fuse_Node* __this, ::uObject* newValue)
{
    __this->_currentValue = newValue;

    if (::uIs(newValue, ::app::Fuse::Node__typeof()))
    {
        ::app::Fuse::Scripting::NameRegistry__RemoveListener(NULL, (::uObject*)__this);
        ::uPtr< ::app::Uno::UX::Property__Fuse_Node*>(__this->Target())->SetRestState(::uCast< ::app::Fuse::Node*>(newValue, ::app::Fuse::Node__typeof()), (::uObject*)__this);
        return;
    }

    ::uString* name = ::uAs< ::uString*>(newValue, ::app::Uno::String__typeof());

    if (::app::Uno::String__op_Inequality(NULL, name, NULL) && (__this->Node() != NULL))
    {
        ::app::Fuse::Scripting::NameRegistry__AddListener(NULL, name, (::uObject*)__this);
        ::app::Fuse::Node* k = ::uPtr< ::app::Fuse::Node*>(__this->Node())->FindNodeByName(::uCast< ::uString*>(newValue, ::app::Uno::String__typeof()));

        if (::uIs(k, ::app::Fuse::Node__typeof()))
        {
            ::uPtr< ::app::Uno::UX::Property__Fuse_Node*>(__this->Target())->SetRestState(k, (::uObject*)__this);
            return;
        }
        else
        {
            ::uObject* candidate = ::uPtr< ::app::Fuse::Node*>(__this->Node())->FindObjectByName(::uCast< ::uString*>(newValue, ::app::Uno::String__typeof()), ::uNewDelegateNonVirt(::app::Uno::Predicate__object__typeof(), (const void*)DataBinding__Fuse_Node__Acceptor, __this));

            if (::uIs(candidate, ::app::Fuse::Node__typeof()))
            {
                ::uPtr< ::app::Uno::UX::Property__Fuse_Node*>(__this->Target())->SetRestState(::uCast< ::app::Fuse::Node*>(candidate, ::app::Fuse::Node__typeof()), (::uObject*)__this);
                return;
            }
        }
    }

    ::app::Fuse::Reactive::Marshal__ToType__Fuse_Node(NULL, newValue, ::uNewDelegateNonVirt(::app::Uno::Action__Fuse_Node__typeof(), (const void*)DataBinding__Fuse_Node__SetValue, __this));
}

void DataBinding__Fuse_Node__set_Target(DataBinding__Fuse_Node* __this, ::app::Uno::UX::Property__Fuse_Node* value)
{
    __this->_Target = value;
}

void DataBinding__Fuse_Node__SetValue(DataBinding__Fuse_Node* __this, ::app::Fuse::Node* value)
{
    ::uPtr< ::app::Uno::UX::Property__Fuse_Node*>(__this->Target())->SetRestState(value, (::uObject*)__this);
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Reactive\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

DataBinding__Fuse_Resources_ImageSource__uType* DataBinding__Fuse_Resources_ImageSource__typeof()
{
    static ::uStaticStrong<DataBinding__Fuse_Resources_ImageSource__uType*> type;
    if (type != NULL) return type;

    type = (DataBinding__Fuse_Resources_ImageSource__uType*)::uAllocClassType(sizeof(DataBinding__Fuse_Resources_ImageSource__uType), "Fuse.Reactive.DataBinding<Fuse.Resources.ImageSource>", false, 2, 3, 0);

    type->SetBaseType(::app::Fuse::Reactive::Binding__typeof());
    type->__fp_NewValue = (void(*)(::app::Fuse::Reactive::Binding*, ::uObject*))DataBinding__Fuse_Resources_ImageSource__NewValue;
    type->__fp_OnRooted = (void(*)(::app::Fuse::Behavior*, ::app::Fuse::Node*))DataBinding__Fuse_Resources_ImageSource__OnRooted;
    type->__fp_OnUnrooted = (void(*)(::app::Fuse::Behavior*, ::app::Fuse::Node*))DataBinding__Fuse_Resources_ImageSource__OnUnrooted;
    type->__interface_0.__fp_OnSet = (void(*)(void*, ::uObject*))DataBinding__Fuse_Resources_ImageSource__Fuse_Reactive_IObserver_OnSet;
    type->__interface_0.__fp_OnAdd = (void(*)(void*, ::uObject*))DataBinding__Fuse_Resources_ImageSource__Fuse_Reactive_IObserver_OnAdd;
    type->__interface_0.__fp_OnNewAt = (void(*)(void*, int, ::uObject*))DataBinding__Fuse_Resources_ImageSource__Fuse_Reactive_IObserver_OnNewAt;
    type->__interface_0.__fp_OnFailed = (void(*)(void*, ::uString*))DataBinding__Fuse_Resources_ImageSource__Fuse_Reactive_IObserver_OnFailed;
    type->__interface_0.__fp_OnNewAll = (void(*)(void*, int))DataBinding__Fuse_Resources_ImageSource__Fuse_Reactive_IObserver_OnNewAll;
    type->__interface_0.__fp_OnRemove = (void(*)(void*, ::uObject*, int))DataBinding__Fuse_Resources_ImageSource__Fuse_Reactive_IObserver_OnRemove;
    type->__interface_1.__fp_OnNameChanged = (void(*)(void*, ::uObject*, ::uString*))DataBinding__Fuse_Resources_ImageSource__Fuse_Scripting_INameListener_OnNameChanged;

    type->SetInterfaces(
        ::app::Fuse::Reactive::IObserver__typeof(), offsetof(DataBinding__Fuse_Resources_ImageSource__uType, __interface_0),
        ::app::Fuse::Scripting::INameListener__typeof(), offsetof(DataBinding__Fuse_Resources_ImageSource__uType, __interface_1));

    type->SetStrongRefs(
        "_currentValue", offsetof(DataBinding__Fuse_Resources_ImageSource, _currentValue),
        "_subscription", offsetof(DataBinding__Fuse_Resources_ImageSource, _subscription),
        "_Target", offsetof(DataBinding__Fuse_Resources_ImageSource, _Target));

    type->SetFields(2,
        ::uNewField("_currentValue", NULL, offsetof(DataBinding__Fuse_Resources_ImageSource, _currentValue), ::uObject__typeof()),
        ::uNewField("_subscription", NULL, offsetof(DataBinding__Fuse_Resources_ImageSource, _subscription), ::app::Fuse::Reactive::ISubscription__typeof()));

    type->SetFunctions(3,
        ::uNewFunction("get_Target", DataBinding__Fuse_Resources_ImageSource__get_Target, 0, false, ::app::Uno::UX::Property__Fuse_Resources_ImageSource__typeof()),
        ::uNewFunction(".ctor", DataBinding__Fuse_Resources_ImageSource__New_1, 0, true, DataBinding__Fuse_Resources_ImageSource__typeof(), ::app::Uno::UX::Property__Fuse_Resources_ImageSource__typeof(), ::app::Uno::String__typeof()),
        ::uNewFunctionVoid("set_Target", DataBinding__Fuse_Resources_ImageSource__set_Target, 0, false, ::app::Uno::UX::Property__Fuse_Resources_ImageSource__typeof()));

    ::uRegisterType(type);
    return type;
}

void DataBinding__Fuse_Resources_ImageSource___ObjInit_2(DataBinding__Fuse_Resources_ImageSource* __this, ::app::Uno::UX::Property__Fuse_Resources_ImageSource* target, ::uString* key)
{
    ::app::Fuse::Reactive::Binding___ObjInit_1(__this, key);
    __this->Target(target);
}

bool DataBinding__Fuse_Resources_ImageSource__Acceptor(DataBinding__Fuse_Resources_ImageSource* __this, ::uObject* obj)
{
    return ::uIs(obj, ::app::Fuse::Resources::ImageSource__typeof());
}

void DataBinding__Fuse_Resources_ImageSource__Fuse_Reactive_IObserver_OnAdd(DataBinding__Fuse_Resources_ImageSource* __this, ::uObject* addedValue)
{
    U_THROW(::app::Uno::Exception__New_2(NULL, ::uGetConstString("Not handled: OnAdd")));
}

void DataBinding__Fuse_Resources_ImageSource__Fuse_Reactive_IObserver_OnFailed(DataBinding__Fuse_Resources_ImageSource* __this, ::uString* message)
{
    U_THROW(::app::Uno::Exception__New_2(NULL, ::uGetConstString("Not handled: OnFailed")));
}

void DataBinding__Fuse_Resources_ImageSource__Fuse_Reactive_IObserver_OnNewAll(DataBinding__Fuse_Resources_ImageSource* __this, int length)
{
    if (length > 0)
    {
        U_THROW(::app::Uno::Exception__New_2(NULL, ::uGetConstString("Not handled: OnNewAll")));
    }
}

void DataBinding__Fuse_Resources_ImageSource__Fuse_Reactive_IObserver_OnNewAt(DataBinding__Fuse_Resources_ImageSource* __this, int index, ::uObject* value)
{
    U_THROW(::app::Uno::Exception__New_2(NULL, ::uGetConstString("Not handled: OnNewAt")));
}

void DataBinding__Fuse_Resources_ImageSource__Fuse_Reactive_IObserver_OnRemove(DataBinding__Fuse_Resources_ImageSource* __this, ::uObject* value, int index)
{
    U_THROW(::app::Uno::Exception__New_2(NULL, ::uGetConstString("Not handled: OnRemoveAt")));
}

void DataBinding__Fuse_Resources_ImageSource__Fuse_Reactive_IObserver_OnSet(DataBinding__Fuse_Resources_ImageSource* __this, ::uObject* newValue)
{
    __this->PushValue(newValue);
}

void DataBinding__Fuse_Resources_ImageSource__Fuse_Scripting_INameListener_OnNameChanged(DataBinding__Fuse_Resources_ImageSource* __this, ::uObject* obj, ::uString* name)
{
    __this->PushValue(__this->_currentValue);
}

::app::Uno::UX::Property__Fuse_Resources_ImageSource* DataBinding__Fuse_Resources_ImageSource__get_Target(DataBinding__Fuse_Resources_ImageSource* __this)
{
    return __this->_Target;
}

DataBinding__Fuse_Resources_ImageSource* DataBinding__Fuse_Resources_ImageSource__New_1(::uStatic* __this, ::app::Uno::UX::Property__Fuse_Resources_ImageSource* target, ::uString* key)
{
    DataBinding__Fuse_Resources_ImageSource* inst = (DataBinding__Fuse_Resources_ImageSource*)::uAllocObject(sizeof(DataBinding__Fuse_Resources_ImageSource), DataBinding__Fuse_Resources_ImageSource__typeof());
    inst->_ObjInit_2(target, key);
    return inst;
}

void DataBinding__Fuse_Resources_ImageSource__NewValue(DataBinding__Fuse_Resources_ImageSource* __this, ::uObject* value)
{
    if (::uIs(value, ::app::Fuse::Resources::ImageSource__typeof()))
    {
        __this->PushValue(value);
    }
    else if (::uIs(value, ::app::Fuse::Reactive::IObservable__typeof()))
    {
        if (__this->_subscription != NULL)
        {
            ::app::Uno::IDisposable::Dispose(::uPtr< ::uObject*>(__this->_subscription));
            __this->_subscription = NULL;
        }

        ::uObject* obs = ::uAs< ::uObject*>(value, ::app::Fuse::Reactive::IObservable__typeof());

        if (obs != NULL)
        {
            __this->_subscription = ::app::Fuse::Reactive::IObservable::Subscribe(::uPtr< ::uObject*>(obs), (::uObject*)__this);
        }
    }
    else
    {
        __this->PushValue(value);
    }
}

void DataBinding__Fuse_Resources_ImageSource__OnRooted(DataBinding__Fuse_Resources_ImageSource* __this, ::app::Fuse::Node* n)
{
    ::uPtr< ::app::Uno::UX::Property__Fuse_Resources_ImageSource*>(__this->Target())->add_ValueChanged(::uNewDelegateNonVirt(::app::Uno::UX::ValueChangedHandler__Fuse_Resources_ImageSource__typeof(), (const void*)DataBinding__Fuse_Resources_ImageSource__OnValueChanged, __this));
    ::app::Fuse::Reactive::Binding__OnRooted(__this, n);
}

void DataBinding__Fuse_Resources_ImageSource__OnUnrooted(DataBinding__Fuse_Resources_ImageSource* __this, ::app::Fuse::Node* n)
{
    ::app::Fuse::Scripting::NameRegistry__RemoveListener(NULL, (::uObject*)__this);
    ::uPtr< ::app::Uno::UX::Property__Fuse_Resources_ImageSource*>(__this->Target())->remove_ValueChanged(::uNewDelegateNonVirt(::app::Uno::UX::ValueChangedHandler__Fuse_Resources_ImageSource__typeof(), (const void*)DataBinding__Fuse_Resources_ImageSource__OnValueChanged, __this));

    if (__this->_subscription != NULL)
    {
        ::app::Uno::IDisposable::Dispose(::uPtr< ::uObject*>(__this->_subscription));
        __this->_subscription = NULL;
    }

    ::app::Fuse::Reactive::Binding__OnUnrooted(__this, n);
}

void DataBinding__Fuse_Resources_ImageSource__OnValueChanged(DataBinding__Fuse_Resources_ImageSource* __this, ::uObject* sender, ::app::Uno::UX::ValueChangedArgs__Fuse_Resources_ImageSource* args)
{
    if ((__this->_subscription != NULL) && (::uPtr< ::app::Uno::UX::ValueChangedArgs__Fuse_Resources_ImageSource*>(args)->Origin() != __this))
    {
        ::app::Fuse::Reactive::ISubscription::SetExclusive(::uPtr< ::uObject*>(__this->_subscription), (::uObject*)::uPtr< ::app::Uno::UX::ValueChangedArgs__Fuse_Resources_ImageSource*>(args)->Value());
    }
}

void DataBinding__Fuse_Resources_ImageSource__PushValue(DataBinding__Fuse_Resources_ImageSource* __this, ::uObject* newValue)
{
    __this->_currentValue = newValue;

    if (::uIs(newValue, ::app::Fuse::Resources::ImageSource__typeof()))
    {
        ::app::Fuse::Scripting::NameRegistry__RemoveListener(NULL, (::uObject*)__this);
        ::uPtr< ::app::Uno::UX::Property__Fuse_Resources_ImageSource*>(__this->Target())->SetRestState(::uCast< ::app::Fuse::Resources::ImageSource*>(newValue, ::app::Fuse::Resources::ImageSource__typeof()), (::uObject*)__this);
        return;
    }

    ::uString* name = ::uAs< ::uString*>(newValue, ::app::Uno::String__typeof());

    if (::app::Uno::String__op_Inequality(NULL, name, NULL) && (__this->Node() != NULL))
    {
        ::app::Fuse::Scripting::NameRegistry__AddListener(NULL, name, (::uObject*)__this);
        ::app::Fuse::Node* k = ::uPtr< ::app::Fuse::Node*>(__this->Node())->FindNodeByName(::uCast< ::uString*>(newValue, ::app::Uno::String__typeof()));

        if (::uIs(k, ::app::Fuse::Resources::ImageSource__typeof()))
        {
            ::uPtr< ::app::Uno::UX::Property__Fuse_Resources_ImageSource*>(__this->Target())->SetRestState(::uCast< ::app::Fuse::Resources::ImageSource*>((::uObject*)k, ::app::Fuse::Resources::ImageSource__typeof()), (::uObject*)__this);
            return;
        }
        else
        {
            ::uObject* candidate = ::uPtr< ::app::Fuse::Node*>(__this->Node())->FindObjectByName(::uCast< ::uString*>(newValue, ::app::Uno::String__typeof()), ::uNewDelegateNonVirt(::app::Uno::Predicate__object__typeof(), (const void*)DataBinding__Fuse_Resources_ImageSource__Acceptor, __this));

            if (::uIs(candidate, ::app::Fuse::Resources::ImageSource__typeof()))
            {
                ::uPtr< ::app::Uno::UX::Property__Fuse_Resources_ImageSource*>(__this->Target())->SetRestState(::uCast< ::app::Fuse::Resources::ImageSource*>(candidate, ::app::Fuse::Resources::ImageSource__typeof()), (::uObject*)__this);
                return;
            }
        }
    }

    ::app::Fuse::Reactive::Marshal__ToType__Fuse_Resources_ImageSource(NULL, newValue, ::uNewDelegateNonVirt(::app::Uno::Action__Fuse_Resources_ImageSource__typeof(), (const void*)DataBinding__Fuse_Resources_ImageSource__SetValue, __this));
}

void DataBinding__Fuse_Resources_ImageSource__set_Target(DataBinding__Fuse_Resources_ImageSource* __this, ::app::Uno::UX::Property__Fuse_Resources_ImageSource* value)
{
    __this->_Target = value;
}

void DataBinding__Fuse_Resources_ImageSource__SetValue(DataBinding__Fuse_Resources_ImageSource* __this, ::app::Fuse::Resources::ImageSource* value)
{
    ::uPtr< ::app::Uno::UX::Property__Fuse_Resources_ImageSource*>(__this->Target())->SetRestState(value, (::uObject*)__this);
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Reactive\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

DataBinding__Fuse_Triggers_Actions_TriggerDirection__uType* DataBinding__Fuse_Triggers_Actions_TriggerDirection__typeof()
{
    static ::uStaticStrong<DataBinding__Fuse_Triggers_Actions_TriggerDirection__uType*> type;
    if (type != NULL) return type;

    type = (DataBinding__Fuse_Triggers_Actions_TriggerDirection__uType*)::uAllocClassType(sizeof(DataBinding__Fuse_Triggers_Actions_TriggerDirection__uType), "Fuse.Reactive.DataBinding<Fuse.Triggers.Actions.TriggerDirection>", false, 2, 3, 0);

    type->SetBaseType(::app::Fuse::Reactive::Binding__typeof());
    type->__fp_NewValue = (void(*)(::app::Fuse::Reactive::Binding*, ::uObject*))DataBinding__Fuse_Triggers_Actions_TriggerDirection__NewValue;
    type->__fp_OnRooted = (void(*)(::app::Fuse::Behavior*, ::app::Fuse::Node*))DataBinding__Fuse_Triggers_Actions_TriggerDirection__OnRooted;
    type->__fp_OnUnrooted = (void(*)(::app::Fuse::Behavior*, ::app::Fuse::Node*))DataBinding__Fuse_Triggers_Actions_TriggerDirection__OnUnrooted;
    type->__interface_0.__fp_OnSet = (void(*)(void*, ::uObject*))DataBinding__Fuse_Triggers_Actions_TriggerDirection__Fuse_Reactive_IObserver_OnSet;
    type->__interface_0.__fp_OnAdd = (void(*)(void*, ::uObject*))DataBinding__Fuse_Triggers_Actions_TriggerDirection__Fuse_Reactive_IObserver_OnAdd;
    type->__interface_0.__fp_OnNewAt = (void(*)(void*, int, ::uObject*))DataBinding__Fuse_Triggers_Actions_TriggerDirection__Fuse_Reactive_IObserver_OnNewAt;
    type->__interface_0.__fp_OnFailed = (void(*)(void*, ::uString*))DataBinding__Fuse_Triggers_Actions_TriggerDirection__Fuse_Reactive_IObserver_OnFailed;
    type->__interface_0.__fp_OnNewAll = (void(*)(void*, int))DataBinding__Fuse_Triggers_Actions_TriggerDirection__Fuse_Reactive_IObserver_OnNewAll;
    type->__interface_0.__fp_OnRemove = (void(*)(void*, ::uObject*, int))DataBinding__Fuse_Triggers_Actions_TriggerDirection__Fuse_Reactive_IObserver_OnRemove;
    type->__interface_1.__fp_OnNameChanged = (void(*)(void*, ::uObject*, ::uString*))DataBinding__Fuse_Triggers_Actions_TriggerDirection__Fuse_Scripting_INameListener_OnNameChanged;

    type->SetInterfaces(
        ::app::Fuse::Reactive::IObserver__typeof(), offsetof(DataBinding__Fuse_Triggers_Actions_TriggerDirection__uType, __interface_0),
        ::app::Fuse::Scripting::INameListener__typeof(), offsetof(DataBinding__Fuse_Triggers_Actions_TriggerDirection__uType, __interface_1));

    type->SetStrongRefs(
        "_currentValue", offsetof(DataBinding__Fuse_Triggers_Actions_TriggerDirection, _currentValue),
        "_subscription", offsetof(DataBinding__Fuse_Triggers_Actions_TriggerDirection, _subscription),
        "_Target", offsetof(DataBinding__Fuse_Triggers_Actions_TriggerDirection, _Target));

    type->SetFields(2,
        ::uNewField("_currentValue", NULL, offsetof(DataBinding__Fuse_Triggers_Actions_TriggerDirection, _currentValue), ::uObject__typeof()),
        ::uNewField("_subscription", NULL, offsetof(DataBinding__Fuse_Triggers_Actions_TriggerDirection, _subscription), ::app::Fuse::Reactive::ISubscription__typeof()));

    type->SetFunctions(3,
        ::uNewFunction("get_Target", DataBinding__Fuse_Triggers_Actions_TriggerDirection__get_Target, 0, false, ::app::Uno::UX::Property__Fuse_Triggers_Actions_TriggerDirection__typeof()),
        ::uNewFunction(".ctor", DataBinding__Fuse_Triggers_Actions_TriggerDirection__New_1, 0, true, DataBinding__Fuse_Triggers_Actions_TriggerDirection__typeof(), ::app::Uno::UX::Property__Fuse_Triggers_Actions_TriggerDirection__typeof(), ::app::Uno::String__typeof()),
        ::uNewFunctionVoid("set_Target", DataBinding__Fuse_Triggers_Actions_TriggerDirection__set_Target, 0, false, ::app::Uno::UX::Property__Fuse_Triggers_Actions_TriggerDirection__typeof()));

    ::uRegisterType(type);
    return type;
}

void DataBinding__Fuse_Triggers_Actions_TriggerDirection___ObjInit_2(DataBinding__Fuse_Triggers_Actions_TriggerDirection* __this, ::app::Uno::UX::Property__Fuse_Triggers_Actions_TriggerDirection* target, ::uString* key)
{
    ::app::Fuse::Reactive::Binding___ObjInit_1(__this, key);
    __this->Target(target);
}

bool DataBinding__Fuse_Triggers_Actions_TriggerDirection__Acceptor(DataBinding__Fuse_Triggers_Actions_TriggerDirection* __this, ::uObject* obj)
{
    return ::uIs(obj, ::app::Fuse::Triggers::Actions::TriggerDirection__typeof());
}

void DataBinding__Fuse_Triggers_Actions_TriggerDirection__Fuse_Reactive_IObserver_OnAdd(DataBinding__Fuse_Triggers_Actions_TriggerDirection* __this, ::uObject* addedValue)
{
    U_THROW(::app::Uno::Exception__New_2(NULL, ::uGetConstString("Not handled: OnAdd")));
}

void DataBinding__Fuse_Triggers_Actions_TriggerDirection__Fuse_Reactive_IObserver_OnFailed(DataBinding__Fuse_Triggers_Actions_TriggerDirection* __this, ::uString* message)
{
    U_THROW(::app::Uno::Exception__New_2(NULL, ::uGetConstString("Not handled: OnFailed")));
}

void DataBinding__Fuse_Triggers_Actions_TriggerDirection__Fuse_Reactive_IObserver_OnNewAll(DataBinding__Fuse_Triggers_Actions_TriggerDirection* __this, int length)
{
    if (length > 0)
    {
        U_THROW(::app::Uno::Exception__New_2(NULL, ::uGetConstString("Not handled: OnNewAll")));
    }
}

void DataBinding__Fuse_Triggers_Actions_TriggerDirection__Fuse_Reactive_IObserver_OnNewAt(DataBinding__Fuse_Triggers_Actions_TriggerDirection* __this, int index, ::uObject* value)
{
    U_THROW(::app::Uno::Exception__New_2(NULL, ::uGetConstString("Not handled: OnNewAt")));
}

void DataBinding__Fuse_Triggers_Actions_TriggerDirection__Fuse_Reactive_IObserver_OnRemove(DataBinding__Fuse_Triggers_Actions_TriggerDirection* __this, ::uObject* value, int index)
{
    U_THROW(::app::Uno::Exception__New_2(NULL, ::uGetConstString("Not handled: OnRemoveAt")));
}

void DataBinding__Fuse_Triggers_Actions_TriggerDirection__Fuse_Reactive_IObserver_OnSet(DataBinding__Fuse_Triggers_Actions_TriggerDirection* __this, ::uObject* newValue)
{
    __this->PushValue(newValue);
}

void DataBinding__Fuse_Triggers_Actions_TriggerDirection__Fuse_Scripting_INameListener_OnNameChanged(DataBinding__Fuse_Triggers_Actions_TriggerDirection* __this, ::uObject* obj, ::uString* name)
{
    __this->PushValue(__this->_currentValue);
}

::app::Uno::UX::Property__Fuse_Triggers_Actions_TriggerDirection* DataBinding__Fuse_Triggers_Actions_TriggerDirection__get_Target(DataBinding__Fuse_Triggers_Actions_TriggerDirection* __this)
{
    return __this->_Target;
}

DataBinding__Fuse_Triggers_Actions_TriggerDirection* DataBinding__Fuse_Triggers_Actions_TriggerDirection__New_1(::uStatic* __this, ::app::Uno::UX::Property__Fuse_Triggers_Actions_TriggerDirection* target, ::uString* key)
{
    DataBinding__Fuse_Triggers_Actions_TriggerDirection* inst = (DataBinding__Fuse_Triggers_Actions_TriggerDirection*)::uAllocObject(sizeof(DataBinding__Fuse_Triggers_Actions_TriggerDirection), DataBinding__Fuse_Triggers_Actions_TriggerDirection__typeof());
    inst->_ObjInit_2(target, key);
    return inst;
}

void DataBinding__Fuse_Triggers_Actions_TriggerDirection__NewValue(DataBinding__Fuse_Triggers_Actions_TriggerDirection* __this, ::uObject* value)
{
    if (::uIs(value, ::app::Fuse::Triggers::Actions::TriggerDirection__typeof()))
    {
        __this->PushValue(value);
    }
    else if (::uIs(value, ::app::Fuse::Reactive::IObservable__typeof()))
    {
        if (__this->_subscription != NULL)
        {
            ::app::Uno::IDisposable::Dispose(::uPtr< ::uObject*>(__this->_subscription));
            __this->_subscription = NULL;
        }

        ::uObject* obs = ::uAs< ::uObject*>(value, ::app::Fuse::Reactive::IObservable__typeof());

        if (obs != NULL)
        {
            __this->_subscription = ::app::Fuse::Reactive::IObservable::Subscribe(::uPtr< ::uObject*>(obs), (::uObject*)__this);
        }
    }
    else
    {
        __this->PushValue(value);
    }
}

void DataBinding__Fuse_Triggers_Actions_TriggerDirection__OnRooted(DataBinding__Fuse_Triggers_Actions_TriggerDirection* __this, ::app::Fuse::Node* n)
{
    ::uPtr< ::app::Uno::UX::Property__Fuse_Triggers_Actions_TriggerDirection*>(__this->Target())->add_ValueChanged(::uNewDelegateNonVirt(::app::Uno::UX::ValueChangedHandler__Fuse_Triggers_Actions_TriggerDirection__typeof(), (const void*)DataBinding__Fuse_Triggers_Actions_TriggerDirection__OnValueChanged, __this));
    ::app::Fuse::Reactive::Binding__OnRooted(__this, n);
}

void DataBinding__Fuse_Triggers_Actions_TriggerDirection__OnUnrooted(DataBinding__Fuse_Triggers_Actions_TriggerDirection* __this, ::app::Fuse::Node* n)
{
    ::app::Fuse::Scripting::NameRegistry__RemoveListener(NULL, (::uObject*)__this);
    ::uPtr< ::app::Uno::UX::Property__Fuse_Triggers_Actions_TriggerDirection*>(__this->Target())->remove_ValueChanged(::uNewDelegateNonVirt(::app::Uno::UX::ValueChangedHandler__Fuse_Triggers_Actions_TriggerDirection__typeof(), (const void*)DataBinding__Fuse_Triggers_Actions_TriggerDirection__OnValueChanged, __this));

    if (__this->_subscription != NULL)
    {
        ::app::Uno::IDisposable::Dispose(::uPtr< ::uObject*>(__this->_subscription));
        __this->_subscription = NULL;
    }

    ::app::Fuse::Reactive::Binding__OnUnrooted(__this, n);
}

void DataBinding__Fuse_Triggers_Actions_TriggerDirection__OnValueChanged(DataBinding__Fuse_Triggers_Actions_TriggerDirection* __this, ::uObject* sender, ::app::Uno::UX::ValueChangedArgs__Fuse_Triggers_Actions_TriggerDirection* args)
{
    if ((__this->_subscription != NULL) && (::uPtr< ::app::Uno::UX::ValueChangedArgs__Fuse_Triggers_Actions_TriggerDirection*>(args)->Origin() != __this))
    {
        ::app::Fuse::Reactive::ISubscription::SetExclusive(::uPtr< ::uObject*>(__this->_subscription), ::uBox< int>(::app::Fuse::Triggers::Actions::TriggerDirection__typeof(), ::uPtr< ::app::Uno::UX::ValueChangedArgs__Fuse_Triggers_Actions_TriggerDirection*>(args)->Value()));
    }
}

void DataBinding__Fuse_Triggers_Actions_TriggerDirection__PushValue(DataBinding__Fuse_Triggers_Actions_TriggerDirection* __this, ::uObject* newValue)
{
    __this->_currentValue = newValue;

    if (::uIs(newValue, ::app::Fuse::Triggers::Actions::TriggerDirection__typeof()))
    {
        ::app::Fuse::Scripting::NameRegistry__RemoveListener(NULL, (::uObject*)__this);
        ::uPtr< ::app::Uno::UX::Property__Fuse_Triggers_Actions_TriggerDirection*>(__this->Target())->SetRestState(::uUnbox< int>(::app::Fuse::Triggers::Actions::TriggerDirection__typeof(), newValue), (::uObject*)__this);
        return;
    }

    ::uString* name = ::uAs< ::uString*>(newValue, ::app::Uno::String__typeof());

    if (::app::Uno::String__op_Inequality(NULL, name, NULL) && (__this->Node() != NULL))
    {
        ::app::Fuse::Scripting::NameRegistry__AddListener(NULL, name, (::uObject*)__this);
        ::app::Fuse::Node* k = ::uPtr< ::app::Fuse::Node*>(__this->Node())->FindNodeByName(::uCast< ::uString*>(newValue, ::app::Uno::String__typeof()));

        if (::uIs(k, ::app::Fuse::Triggers::Actions::TriggerDirection__typeof()))
        {
            ::uPtr< ::app::Uno::UX::Property__Fuse_Triggers_Actions_TriggerDirection*>(__this->Target())->SetRestState(::uUnbox< int>(::app::Fuse::Triggers::Actions::TriggerDirection__typeof(), (::uObject*)k), (::uObject*)__this);
            return;
        }
        else
        {
            ::uObject* candidate = ::uPtr< ::app::Fuse::Node*>(__this->Node())->FindObjectByName(::uCast< ::uString*>(newValue, ::app::Uno::String__typeof()), ::uNewDelegateNonVirt(::app::Uno::Predicate__object__typeof(), (const void*)DataBinding__Fuse_Triggers_Actions_TriggerDirection__Acceptor, __this));

            if (::uIs(candidate, ::app::Fuse::Triggers::Actions::TriggerDirection__typeof()))
            {
                ::uPtr< ::app::Uno::UX::Property__Fuse_Triggers_Actions_TriggerDirection*>(__this->Target())->SetRestState(::uUnbox< int>(::app::Fuse::Triggers::Actions::TriggerDirection__typeof(), candidate), (::uObject*)__this);
                return;
            }
        }
    }

    ::app::Fuse::Reactive::Marshal__ToType__Fuse_Triggers_Actions_TriggerDirection(NULL, newValue, ::uNewDelegateNonVirt(::app::Uno::Action__Fuse_Triggers_Actions_TriggerDirection__typeof(), (const void*)DataBinding__Fuse_Triggers_Actions_TriggerDirection__SetValue, __this));
}

void DataBinding__Fuse_Triggers_Actions_TriggerDirection__set_Target(DataBinding__Fuse_Triggers_Actions_TriggerDirection* __this, ::app::Uno::UX::Property__Fuse_Triggers_Actions_TriggerDirection* value)
{
    __this->_Target = value;
}

void DataBinding__Fuse_Triggers_Actions_TriggerDirection__SetValue(DataBinding__Fuse_Triggers_Actions_TriggerDirection* __this, int value)
{
    ::uPtr< ::app::Uno::UX::Property__Fuse_Triggers_Actions_TriggerDirection*>(__this->Target())->SetRestState(value, (::uObject*)__this);
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Reactive\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

DataBinding__Fuse_Triggers_State__uType* DataBinding__Fuse_Triggers_State__typeof()
{
    static ::uStaticStrong<DataBinding__Fuse_Triggers_State__uType*> type;
    if (type != NULL) return type;

    type = (DataBinding__Fuse_Triggers_State__uType*)::uAllocClassType(sizeof(DataBinding__Fuse_Triggers_State__uType), "Fuse.Reactive.DataBinding<Fuse.Triggers.State>", false, 2, 3, 0);

    type->SetBaseType(::app::Fuse::Reactive::Binding__typeof());
    type->__fp_NewValue = (void(*)(::app::Fuse::Reactive::Binding*, ::uObject*))DataBinding__Fuse_Triggers_State__NewValue;
    type->__fp_OnRooted = (void(*)(::app::Fuse::Behavior*, ::app::Fuse::Node*))DataBinding__Fuse_Triggers_State__OnRooted;
    type->__fp_OnUnrooted = (void(*)(::app::Fuse::Behavior*, ::app::Fuse::Node*))DataBinding__Fuse_Triggers_State__OnUnrooted;
    type->__interface_0.__fp_OnSet = (void(*)(void*, ::uObject*))DataBinding__Fuse_Triggers_State__Fuse_Reactive_IObserver_OnSet;
    type->__interface_0.__fp_OnAdd = (void(*)(void*, ::uObject*))DataBinding__Fuse_Triggers_State__Fuse_Reactive_IObserver_OnAdd;
    type->__interface_0.__fp_OnNewAt = (void(*)(void*, int, ::uObject*))DataBinding__Fuse_Triggers_State__Fuse_Reactive_IObserver_OnNewAt;
    type->__interface_0.__fp_OnFailed = (void(*)(void*, ::uString*))DataBinding__Fuse_Triggers_State__Fuse_Reactive_IObserver_OnFailed;
    type->__interface_0.__fp_OnNewAll = (void(*)(void*, int))DataBinding__Fuse_Triggers_State__Fuse_Reactive_IObserver_OnNewAll;
    type->__interface_0.__fp_OnRemove = (void(*)(void*, ::uObject*, int))DataBinding__Fuse_Triggers_State__Fuse_Reactive_IObserver_OnRemove;
    type->__interface_1.__fp_OnNameChanged = (void(*)(void*, ::uObject*, ::uString*))DataBinding__Fuse_Triggers_State__Fuse_Scripting_INameListener_OnNameChanged;

    type->SetInterfaces(
        ::app::Fuse::Reactive::IObserver__typeof(), offsetof(DataBinding__Fuse_Triggers_State__uType, __interface_0),
        ::app::Fuse::Scripting::INameListener__typeof(), offsetof(DataBinding__Fuse_Triggers_State__uType, __interface_1));

    type->SetStrongRefs(
        "_currentValue", offsetof(DataBinding__Fuse_Triggers_State, _currentValue),
        "_subscription", offsetof(DataBinding__Fuse_Triggers_State, _subscription),
        "_Target", offsetof(DataBinding__Fuse_Triggers_State, _Target));

    type->SetFields(2,
        ::uNewField("_currentValue", NULL, offsetof(DataBinding__Fuse_Triggers_State, _currentValue), ::uObject__typeof()),
        ::uNewField("_subscription", NULL, offsetof(DataBinding__Fuse_Triggers_State, _subscription), ::app::Fuse::Reactive::ISubscription__typeof()));

    type->SetFunctions(3,
        ::uNewFunction("get_Target", DataBinding__Fuse_Triggers_State__get_Target, 0, false, ::app::Uno::UX::Property__Fuse_Triggers_State__typeof()),
        ::uNewFunction(".ctor", DataBinding__Fuse_Triggers_State__New_1, 0, true, DataBinding__Fuse_Triggers_State__typeof(), ::app::Uno::UX::Property__Fuse_Triggers_State__typeof(), ::app::Uno::String__typeof()),
        ::uNewFunctionVoid("set_Target", DataBinding__Fuse_Triggers_State__set_Target, 0, false, ::app::Uno::UX::Property__Fuse_Triggers_State__typeof()));

    ::uRegisterType(type);
    return type;
}

void DataBinding__Fuse_Triggers_State___ObjInit_2(DataBinding__Fuse_Triggers_State* __this, ::app::Uno::UX::Property__Fuse_Triggers_State* target, ::uString* key)
{
    ::app::Fuse::Reactive::Binding___ObjInit_1(__this, key);
    __this->Target(target);
}

bool DataBinding__Fuse_Triggers_State__Acceptor(DataBinding__Fuse_Triggers_State* __this, ::uObject* obj)
{
    return ::uIs(obj, ::app::Fuse::Triggers::State__typeof());
}

void DataBinding__Fuse_Triggers_State__Fuse_Reactive_IObserver_OnAdd(DataBinding__Fuse_Triggers_State* __this, ::uObject* addedValue)
{
    U_THROW(::app::Uno::Exception__New_2(NULL, ::uGetConstString("Not handled: OnAdd")));
}

void DataBinding__Fuse_Triggers_State__Fuse_Reactive_IObserver_OnFailed(DataBinding__Fuse_Triggers_State* __this, ::uString* message)
{
    U_THROW(::app::Uno::Exception__New_2(NULL, ::uGetConstString("Not handled: OnFailed")));
}

void DataBinding__Fuse_Triggers_State__Fuse_Reactive_IObserver_OnNewAll(DataBinding__Fuse_Triggers_State* __this, int length)
{
    if (length > 0)
    {
        U_THROW(::app::Uno::Exception__New_2(NULL, ::uGetConstString("Not handled: OnNewAll")));
    }
}

void DataBinding__Fuse_Triggers_State__Fuse_Reactive_IObserver_OnNewAt(DataBinding__Fuse_Triggers_State* __this, int index, ::uObject* value)
{
    U_THROW(::app::Uno::Exception__New_2(NULL, ::uGetConstString("Not handled: OnNewAt")));
}

void DataBinding__Fuse_Triggers_State__Fuse_Reactive_IObserver_OnRemove(DataBinding__Fuse_Triggers_State* __this, ::uObject* value, int index)
{
    U_THROW(::app::Uno::Exception__New_2(NULL, ::uGetConstString("Not handled: OnRemoveAt")));
}

void DataBinding__Fuse_Triggers_State__Fuse_Reactive_IObserver_OnSet(DataBinding__Fuse_Triggers_State* __this, ::uObject* newValue)
{
    __this->PushValue(newValue);
}

void DataBinding__Fuse_Triggers_State__Fuse_Scripting_INameListener_OnNameChanged(DataBinding__Fuse_Triggers_State* __this, ::uObject* obj, ::uString* name)
{
    __this->PushValue(__this->_currentValue);
}

::app::Uno::UX::Property__Fuse_Triggers_State* DataBinding__Fuse_Triggers_State__get_Target(DataBinding__Fuse_Triggers_State* __this)
{
    return __this->_Target;
}

DataBinding__Fuse_Triggers_State* DataBinding__Fuse_Triggers_State__New_1(::uStatic* __this, ::app::Uno::UX::Property__Fuse_Triggers_State* target, ::uString* key)
{
    DataBinding__Fuse_Triggers_State* inst = (DataBinding__Fuse_Triggers_State*)::uAllocObject(sizeof(DataBinding__Fuse_Triggers_State), DataBinding__Fuse_Triggers_State__typeof());
    inst->_ObjInit_2(target, key);
    return inst;
}

void DataBinding__Fuse_Triggers_State__NewValue(DataBinding__Fuse_Triggers_State* __this, ::uObject* value)
{
    if (::uIs(value, ::app::Fuse::Triggers::State__typeof()))
    {
        __this->PushValue(value);
    }
    else if (::uIs(value, ::app::Fuse::Reactive::IObservable__typeof()))
    {
        if (__this->_subscription != NULL)
        {
            ::app::Uno::IDisposable::Dispose(::uPtr< ::uObject*>(__this->_subscription));
            __this->_subscription = NULL;
        }

        ::uObject* obs = ::uAs< ::uObject*>(value, ::app::Fuse::Reactive::IObservable__typeof());

        if (obs != NULL)
        {
            __this->_subscription = ::app::Fuse::Reactive::IObservable::Subscribe(::uPtr< ::uObject*>(obs), (::uObject*)__this);
        }
    }
    else
    {
        __this->PushValue(value);
    }
}

void DataBinding__Fuse_Triggers_State__OnRooted(DataBinding__Fuse_Triggers_State* __this, ::app::Fuse::Node* n)
{
    ::uPtr< ::app::Uno::UX::Property__Fuse_Triggers_State*>(__this->Target())->add_ValueChanged(::uNewDelegateNonVirt(::app::Uno::UX::ValueChangedHandler__Fuse_Triggers_State__typeof(), (const void*)DataBinding__Fuse_Triggers_State__OnValueChanged, __this));
    ::app::Fuse::Reactive::Binding__OnRooted(__this, n);
}

void DataBinding__Fuse_Triggers_State__OnUnrooted(DataBinding__Fuse_Triggers_State* __this, ::app::Fuse::Node* n)
{
    ::app::Fuse::Scripting::NameRegistry__RemoveListener(NULL, (::uObject*)__this);
    ::uPtr< ::app::Uno::UX::Property__Fuse_Triggers_State*>(__this->Target())->remove_ValueChanged(::uNewDelegateNonVirt(::app::Uno::UX::ValueChangedHandler__Fuse_Triggers_State__typeof(), (const void*)DataBinding__Fuse_Triggers_State__OnValueChanged, __this));

    if (__this->_subscription != NULL)
    {
        ::app::Uno::IDisposable::Dispose(::uPtr< ::uObject*>(__this->_subscription));
        __this->_subscription = NULL;
    }

    ::app::Fuse::Reactive::Binding__OnUnrooted(__this, n);
}

void DataBinding__Fuse_Triggers_State__OnValueChanged(DataBinding__Fuse_Triggers_State* __this, ::uObject* sender, ::app::Uno::UX::ValueChangedArgs__Fuse_Triggers_State* args)
{
    if ((__this->_subscription != NULL) && (::uPtr< ::app::Uno::UX::ValueChangedArgs__Fuse_Triggers_State*>(args)->Origin() != __this))
    {
        ::app::Fuse::Reactive::ISubscription::SetExclusive(::uPtr< ::uObject*>(__this->_subscription), (::uObject*)::uPtr< ::app::Uno::UX::ValueChangedArgs__Fuse_Triggers_State*>(args)->Value());
    }
}

void DataBinding__Fuse_Triggers_State__PushValue(DataBinding__Fuse_Triggers_State* __this, ::uObject* newValue)
{
    __this->_currentValue = newValue;

    if (::uIs(newValue, ::app::Fuse::Triggers::State__typeof()))
    {
        ::app::Fuse::Scripting::NameRegistry__RemoveListener(NULL, (::uObject*)__this);
        ::uPtr< ::app::Uno::UX::Property__Fuse_Triggers_State*>(__this->Target())->SetRestState(::uCast< ::app::Fuse::Triggers::State*>(newValue, ::app::Fuse::Triggers::State__typeof()), (::uObject*)__this);
        return;
    }

    ::uString* name = ::uAs< ::uString*>(newValue, ::app::Uno::String__typeof());

    if (::app::Uno::String__op_Inequality(NULL, name, NULL) && (__this->Node() != NULL))
    {
        ::app::Fuse::Scripting::NameRegistry__AddListener(NULL, name, (::uObject*)__this);
        ::app::Fuse::Node* k = ::uPtr< ::app::Fuse::Node*>(__this->Node())->FindNodeByName(::uCast< ::uString*>(newValue, ::app::Uno::String__typeof()));

        if (::uIs(k, ::app::Fuse::Triggers::State__typeof()))
        {
            ::uPtr< ::app::Uno::UX::Property__Fuse_Triggers_State*>(__this->Target())->SetRestState(::uCast< ::app::Fuse::Triggers::State*>((::uObject*)k, ::app::Fuse::Triggers::State__typeof()), (::uObject*)__this);
            return;
        }
        else
        {
            ::uObject* candidate = ::uPtr< ::app::Fuse::Node*>(__this->Node())->FindObjectByName(::uCast< ::uString*>(newValue, ::app::Uno::String__typeof()), ::uNewDelegateNonVirt(::app::Uno::Predicate__object__typeof(), (const void*)DataBinding__Fuse_Triggers_State__Acceptor, __this));

            if (::uIs(candidate, ::app::Fuse::Triggers::State__typeof()))
            {
                ::uPtr< ::app::Uno::UX::Property__Fuse_Triggers_State*>(__this->Target())->SetRestState(::uCast< ::app::Fuse::Triggers::State*>(candidate, ::app::Fuse::Triggers::State__typeof()), (::uObject*)__this);
                return;
            }
        }
    }

    ::app::Fuse::Reactive::Marshal__ToType__Fuse_Triggers_State(NULL, newValue, ::uNewDelegateNonVirt(::app::Uno::Action__Fuse_Triggers_State__typeof(), (const void*)DataBinding__Fuse_Triggers_State__SetValue, __this));
}

void DataBinding__Fuse_Triggers_State__set_Target(DataBinding__Fuse_Triggers_State* __this, ::app::Uno::UX::Property__Fuse_Triggers_State* value)
{
    __this->_Target = value;
}

void DataBinding__Fuse_Triggers_State__SetValue(DataBinding__Fuse_Triggers_State* __this, ::app::Fuse::Triggers::State* value)
{
    ::uPtr< ::app::Uno::UX::Property__Fuse_Triggers_State*>(__this->Target())->SetRestState(value, (::uObject*)__this);
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Reactive\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

DataBinding__Fuse_Triggers_StateTransition__uType* DataBinding__Fuse_Triggers_StateTransition__typeof()
{
    static ::uStaticStrong<DataBinding__Fuse_Triggers_StateTransition__uType*> type;
    if (type != NULL) return type;

    type = (DataBinding__Fuse_Triggers_StateTransition__uType*)::uAllocClassType(sizeof(DataBinding__Fuse_Triggers_StateTransition__uType), "Fuse.Reactive.DataBinding<Fuse.Triggers.StateTransition>", false, 2, 3, 0);

    type->SetBaseType(::app::Fuse::Reactive::Binding__typeof());
    type->__fp_NewValue = (void(*)(::app::Fuse::Reactive::Binding*, ::uObject*))DataBinding__Fuse_Triggers_StateTransition__NewValue;
    type->__fp_OnRooted = (void(*)(::app::Fuse::Behavior*, ::app::Fuse::Node*))DataBinding__Fuse_Triggers_StateTransition__OnRooted;
    type->__fp_OnUnrooted = (void(*)(::app::Fuse::Behavior*, ::app::Fuse::Node*))DataBinding__Fuse_Triggers_StateTransition__OnUnrooted;
    type->__interface_0.__fp_OnSet = (void(*)(void*, ::uObject*))DataBinding__Fuse_Triggers_StateTransition__Fuse_Reactive_IObserver_OnSet;
    type->__interface_0.__fp_OnAdd = (void(*)(void*, ::uObject*))DataBinding__Fuse_Triggers_StateTransition__Fuse_Reactive_IObserver_OnAdd;
    type->__interface_0.__fp_OnNewAt = (void(*)(void*, int, ::uObject*))DataBinding__Fuse_Triggers_StateTransition__Fuse_Reactive_IObserver_OnNewAt;
    type->__interface_0.__fp_OnFailed = (void(*)(void*, ::uString*))DataBinding__Fuse_Triggers_StateTransition__Fuse_Reactive_IObserver_OnFailed;
    type->__interface_0.__fp_OnNewAll = (void(*)(void*, int))DataBinding__Fuse_Triggers_StateTransition__Fuse_Reactive_IObserver_OnNewAll;
    type->__interface_0.__fp_OnRemove = (void(*)(void*, ::uObject*, int))DataBinding__Fuse_Triggers_StateTransition__Fuse_Reactive_IObserver_OnRemove;
    type->__interface_1.__fp_OnNameChanged = (void(*)(void*, ::uObject*, ::uString*))DataBinding__Fuse_Triggers_StateTransition__Fuse_Scripting_INameListener_OnNameChanged;

    type->SetInterfaces(
        ::app::Fuse::Reactive::IObserver__typeof(), offsetof(DataBinding__Fuse_Triggers_StateTransition__uType, __interface_0),
        ::app::Fuse::Scripting::INameListener__typeof(), offsetof(DataBinding__Fuse_Triggers_StateTransition__uType, __interface_1));

    type->SetStrongRefs(
        "_currentValue", offsetof(DataBinding__Fuse_Triggers_StateTransition, _currentValue),
        "_subscription", offsetof(DataBinding__Fuse_Triggers_StateTransition, _subscription),
        "_Target", offsetof(DataBinding__Fuse_Triggers_StateTransition, _Target));

    type->SetFields(2,
        ::uNewField("_currentValue", NULL, offsetof(DataBinding__Fuse_Triggers_StateTransition, _currentValue), ::uObject__typeof()),
        ::uNewField("_subscription", NULL, offsetof(DataBinding__Fuse_Triggers_StateTransition, _subscription), ::app::Fuse::Reactive::ISubscription__typeof()));

    type->SetFunctions(3,
        ::uNewFunction("get_Target", DataBinding__Fuse_Triggers_StateTransition__get_Target, 0, false, ::app::Uno::UX::Property__Fuse_Triggers_StateTransition__typeof()),
        ::uNewFunction(".ctor", DataBinding__Fuse_Triggers_StateTransition__New_1, 0, true, DataBinding__Fuse_Triggers_StateTransition__typeof(), ::app::Uno::UX::Property__Fuse_Triggers_StateTransition__typeof(), ::app::Uno::String__typeof()),
        ::uNewFunctionVoid("set_Target", DataBinding__Fuse_Triggers_StateTransition__set_Target, 0, false, ::app::Uno::UX::Property__Fuse_Triggers_StateTransition__typeof()));

    ::uRegisterType(type);
    return type;
}

void DataBinding__Fuse_Triggers_StateTransition___ObjInit_2(DataBinding__Fuse_Triggers_StateTransition* __this, ::app::Uno::UX::Property__Fuse_Triggers_StateTransition* target, ::uString* key)
{
    ::app::Fuse::Reactive::Binding___ObjInit_1(__this, key);
    __this->Target(target);
}

bool DataBinding__Fuse_Triggers_StateTransition__Acceptor(DataBinding__Fuse_Triggers_StateTransition* __this, ::uObject* obj)
{
    return ::uIs(obj, ::app::Fuse::Triggers::StateTransition__typeof());
}

void DataBinding__Fuse_Triggers_StateTransition__Fuse_Reactive_IObserver_OnAdd(DataBinding__Fuse_Triggers_StateTransition* __this, ::uObject* addedValue)
{
    U_THROW(::app::Uno::Exception__New_2(NULL, ::uGetConstString("Not handled: OnAdd")));
}

void DataBinding__Fuse_Triggers_StateTransition__Fuse_Reactive_IObserver_OnFailed(DataBinding__Fuse_Triggers_StateTransition* __this, ::uString* message)
{
    U_THROW(::app::Uno::Exception__New_2(NULL, ::uGetConstString("Not handled: OnFailed")));
}

void DataBinding__Fuse_Triggers_StateTransition__Fuse_Reactive_IObserver_OnNewAll(DataBinding__Fuse_Triggers_StateTransition* __this, int length)
{
    if (length > 0)
    {
        U_THROW(::app::Uno::Exception__New_2(NULL, ::uGetConstString("Not handled: OnNewAll")));
    }
}

void DataBinding__Fuse_Triggers_StateTransition__Fuse_Reactive_IObserver_OnNewAt(DataBinding__Fuse_Triggers_StateTransition* __this, int index, ::uObject* value)
{
    U_THROW(::app::Uno::Exception__New_2(NULL, ::uGetConstString("Not handled: OnNewAt")));
}

void DataBinding__Fuse_Triggers_StateTransition__Fuse_Reactive_IObserver_OnRemove(DataBinding__Fuse_Triggers_StateTransition* __this, ::uObject* value, int index)
{
    U_THROW(::app::Uno::Exception__New_2(NULL, ::uGetConstString("Not handled: OnRemoveAt")));
}

void DataBinding__Fuse_Triggers_StateTransition__Fuse_Reactive_IObserver_OnSet(DataBinding__Fuse_Triggers_StateTransition* __this, ::uObject* newValue)
{
    __this->PushValue(newValue);
}

void DataBinding__Fuse_Triggers_StateTransition__Fuse_Scripting_INameListener_OnNameChanged(DataBinding__Fuse_Triggers_StateTransition* __this, ::uObject* obj, ::uString* name)
{
    __this->PushValue(__this->_currentValue);
}

::app::Uno::UX::Property__Fuse_Triggers_StateTransition* DataBinding__Fuse_Triggers_StateTransition__get_Target(DataBinding__Fuse_Triggers_StateTransition* __this)
{
    return __this->_Target;
}

DataBinding__Fuse_Triggers_StateTransition* DataBinding__Fuse_Triggers_StateTransition__New_1(::uStatic* __this, ::app::Uno::UX::Property__Fuse_Triggers_StateTransition* target, ::uString* key)
{
    DataBinding__Fuse_Triggers_StateTransition* inst = (DataBinding__Fuse_Triggers_StateTransition*)::uAllocObject(sizeof(DataBinding__Fuse_Triggers_StateTransition), DataBinding__Fuse_Triggers_StateTransition__typeof());
    inst->_ObjInit_2(target, key);
    return inst;
}

void DataBinding__Fuse_Triggers_StateTransition__NewValue(DataBinding__Fuse_Triggers_StateTransition* __this, ::uObject* value)
{
    if (::uIs(value, ::app::Fuse::Triggers::StateTransition__typeof()))
    {
        __this->PushValue(value);
    }
    else if (::uIs(value, ::app::Fuse::Reactive::IObservable__typeof()))
    {
        if (__this->_subscription != NULL)
        {
            ::app::Uno::IDisposable::Dispose(::uPtr< ::uObject*>(__this->_subscription));
            __this->_subscription = NULL;
        }

        ::uObject* obs = ::uAs< ::uObject*>(value, ::app::Fuse::Reactive::IObservable__typeof());

        if (obs != NULL)
        {
            __this->_subscription = ::app::Fuse::Reactive::IObservable::Subscribe(::uPtr< ::uObject*>(obs), (::uObject*)__this);
        }
    }
    else
    {
        __this->PushValue(value);
    }
}

void DataBinding__Fuse_Triggers_StateTransition__OnRooted(DataBinding__Fuse_Triggers_StateTransition* __this, ::app::Fuse::Node* n)
{
    ::uPtr< ::app::Uno::UX::Property__Fuse_Triggers_StateTransition*>(__this->Target())->add_ValueChanged(::uNewDelegateNonVirt(::app::Uno::UX::ValueChangedHandler__Fuse_Triggers_StateTransition__typeof(), (const void*)DataBinding__Fuse_Triggers_StateTransition__OnValueChanged, __this));
    ::app::Fuse::Reactive::Binding__OnRooted(__this, n);
}

void DataBinding__Fuse_Triggers_StateTransition__OnUnrooted(DataBinding__Fuse_Triggers_StateTransition* __this, ::app::Fuse::Node* n)
{
    ::app::Fuse::Scripting::NameRegistry__RemoveListener(NULL, (::uObject*)__this);
    ::uPtr< ::app::Uno::UX::Property__Fuse_Triggers_StateTransition*>(__this->Target())->remove_ValueChanged(::uNewDelegateNonVirt(::app::Uno::UX::ValueChangedHandler__Fuse_Triggers_StateTransition__typeof(), (const void*)DataBinding__Fuse_Triggers_StateTransition__OnValueChanged, __this));

    if (__this->_subscription != NULL)
    {
        ::app::Uno::IDisposable::Dispose(::uPtr< ::uObject*>(__this->_subscription));
        __this->_subscription = NULL;
    }

    ::app::Fuse::Reactive::Binding__OnUnrooted(__this, n);
}

void DataBinding__Fuse_Triggers_StateTransition__OnValueChanged(DataBinding__Fuse_Triggers_StateTransition* __this, ::uObject* sender, ::app::Uno::UX::ValueChangedArgs__Fuse_Triggers_StateTransition* args)
{
    if ((__this->_subscription != NULL) && (::uPtr< ::app::Uno::UX::ValueChangedArgs__Fuse_Triggers_StateTransition*>(args)->Origin() != __this))
    {
        ::app::Fuse::Reactive::ISubscription::SetExclusive(::uPtr< ::uObject*>(__this->_subscription), ::uBox< int>(::app::Fuse::Triggers::StateTransition__typeof(), ::uPtr< ::app::Uno::UX::ValueChangedArgs__Fuse_Triggers_StateTransition*>(args)->Value()));
    }
}

void DataBinding__Fuse_Triggers_StateTransition__PushValue(DataBinding__Fuse_Triggers_StateTransition* __this, ::uObject* newValue)
{
    __this->_currentValue = newValue;

    if (::uIs(newValue, ::app::Fuse::Triggers::StateTransition__typeof()))
    {
        ::app::Fuse::Scripting::NameRegistry__RemoveListener(NULL, (::uObject*)__this);
        ::uPtr< ::app::Uno::UX::Property__Fuse_Triggers_StateTransition*>(__this->Target())->SetRestState(::uUnbox< int>(::app::Fuse::Triggers::StateTransition__typeof(), newValue), (::uObject*)__this);
        return;
    }

    ::uString* name = ::uAs< ::uString*>(newValue, ::app::Uno::String__typeof());

    if (::app::Uno::String__op_Inequality(NULL, name, NULL) && (__this->Node() != NULL))
    {
        ::app::Fuse::Scripting::NameRegistry__AddListener(NULL, name, (::uObject*)__this);
        ::app::Fuse::Node* k = ::uPtr< ::app::Fuse::Node*>(__this->Node())->FindNodeByName(::uCast< ::uString*>(newValue, ::app::Uno::String__typeof()));

        if (::uIs(k, ::app::Fuse::Triggers::StateTransition__typeof()))
        {
            ::uPtr< ::app::Uno::UX::Property__Fuse_Triggers_StateTransition*>(__this->Target())->SetRestState(::uUnbox< int>(::app::Fuse::Triggers::StateTransition__typeof(), (::uObject*)k), (::uObject*)__this);
            return;
        }
        else
        {
            ::uObject* candidate = ::uPtr< ::app::Fuse::Node*>(__this->Node())->FindObjectByName(::uCast< ::uString*>(newValue, ::app::Uno::String__typeof()), ::uNewDelegateNonVirt(::app::Uno::Predicate__object__typeof(), (const void*)DataBinding__Fuse_Triggers_StateTransition__Acceptor, __this));

            if (::uIs(candidate, ::app::Fuse::Triggers::StateTransition__typeof()))
            {
                ::uPtr< ::app::Uno::UX::Property__Fuse_Triggers_StateTransition*>(__this->Target())->SetRestState(::uUnbox< int>(::app::Fuse::Triggers::StateTransition__typeof(), candidate), (::uObject*)__this);
                return;
            }
        }
    }

    ::app::Fuse::Reactive::Marshal__ToType__Fuse_Triggers_StateTransition(NULL, newValue, ::uNewDelegateNonVirt(::app::Uno::Action__Fuse_Triggers_StateTransition__typeof(), (const void*)DataBinding__Fuse_Triggers_StateTransition__SetValue, __this));
}

void DataBinding__Fuse_Triggers_StateTransition__set_Target(DataBinding__Fuse_Triggers_StateTransition* __this, ::app::Uno::UX::Property__Fuse_Triggers_StateTransition* value)
{
    __this->_Target = value;
}

void DataBinding__Fuse_Triggers_StateTransition__SetValue(DataBinding__Fuse_Triggers_StateTransition* __this, int value)
{
    ::uPtr< ::app::Uno::UX::Property__Fuse_Triggers_StateTransition*>(__this->Target())->SetRestState(value, (::uObject*)__this);
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Reactive\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

DataBinding__Fuse_Triggers_TriggerBypassMode__uType* DataBinding__Fuse_Triggers_TriggerBypassMode__typeof()
{
    static ::uStaticStrong<DataBinding__Fuse_Triggers_TriggerBypassMode__uType*> type;
    if (type != NULL) return type;

    type = (DataBinding__Fuse_Triggers_TriggerBypassMode__uType*)::uAllocClassType(sizeof(DataBinding__Fuse_Triggers_TriggerBypassMode__uType), "Fuse.Reactive.DataBinding<Fuse.Triggers.TriggerBypassMode>", false, 2, 3, 0);

    type->SetBaseType(::app::Fuse::Reactive::Binding__typeof());
    type->__fp_NewValue = (void(*)(::app::Fuse::Reactive::Binding*, ::uObject*))DataBinding__Fuse_Triggers_TriggerBypassMode__NewValue;
    type->__fp_OnRooted = (void(*)(::app::Fuse::Behavior*, ::app::Fuse::Node*))DataBinding__Fuse_Triggers_TriggerBypassMode__OnRooted;
    type->__fp_OnUnrooted = (void(*)(::app::Fuse::Behavior*, ::app::Fuse::Node*))DataBinding__Fuse_Triggers_TriggerBypassMode__OnUnrooted;
    type->__interface_0.__fp_OnSet = (void(*)(void*, ::uObject*))DataBinding__Fuse_Triggers_TriggerBypassMode__Fuse_Reactive_IObserver_OnSet;
    type->__interface_0.__fp_OnAdd = (void(*)(void*, ::uObject*))DataBinding__Fuse_Triggers_TriggerBypassMode__Fuse_Reactive_IObserver_OnAdd;
    type->__interface_0.__fp_OnNewAt = (void(*)(void*, int, ::uObject*))DataBinding__Fuse_Triggers_TriggerBypassMode__Fuse_Reactive_IObserver_OnNewAt;
    type->__interface_0.__fp_OnFailed = (void(*)(void*, ::uString*))DataBinding__Fuse_Triggers_TriggerBypassMode__Fuse_Reactive_IObserver_OnFailed;
    type->__interface_0.__fp_OnNewAll = (void(*)(void*, int))DataBinding__Fuse_Triggers_TriggerBypassMode__Fuse_Reactive_IObserver_OnNewAll;
    type->__interface_0.__fp_OnRemove = (void(*)(void*, ::uObject*, int))DataBinding__Fuse_Triggers_TriggerBypassMode__Fuse_Reactive_IObserver_OnRemove;
    type->__interface_1.__fp_OnNameChanged = (void(*)(void*, ::uObject*, ::uString*))DataBinding__Fuse_Triggers_TriggerBypassMode__Fuse_Scripting_INameListener_OnNameChanged;

    type->SetInterfaces(
        ::app::Fuse::Reactive::IObserver__typeof(), offsetof(DataBinding__Fuse_Triggers_TriggerBypassMode__uType, __interface_0),
        ::app::Fuse::Scripting::INameListener__typeof(), offsetof(DataBinding__Fuse_Triggers_TriggerBypassMode__uType, __interface_1));

    type->SetStrongRefs(
        "_currentValue", offsetof(DataBinding__Fuse_Triggers_TriggerBypassMode, _currentValue),
        "_subscription", offsetof(DataBinding__Fuse_Triggers_TriggerBypassMode, _subscription),
        "_Target", offsetof(DataBinding__Fuse_Triggers_TriggerBypassMode, _Target));

    type->SetFields(2,
        ::uNewField("_currentValue", NULL, offsetof(DataBinding__Fuse_Triggers_TriggerBypassMode, _currentValue), ::uObject__typeof()),
        ::uNewField("_subscription", NULL, offsetof(DataBinding__Fuse_Triggers_TriggerBypassMode, _subscription), ::app::Fuse::Reactive::ISubscription__typeof()));

    type->SetFunctions(3,
        ::uNewFunction("get_Target", DataBinding__Fuse_Triggers_TriggerBypassMode__get_Target, 0, false, ::app::Uno::UX::Property__Fuse_Triggers_TriggerBypassMode__typeof()),
        ::uNewFunction(".ctor", DataBinding__Fuse_Triggers_TriggerBypassMode__New_1, 0, true, DataBinding__Fuse_Triggers_TriggerBypassMode__typeof(), ::app::Uno::UX::Property__Fuse_Triggers_TriggerBypassMode__typeof(), ::app::Uno::String__typeof()),
        ::uNewFunctionVoid("set_Target", DataBinding__Fuse_Triggers_TriggerBypassMode__set_Target, 0, false, ::app::Uno::UX::Property__Fuse_Triggers_TriggerBypassMode__typeof()));

    ::uRegisterType(type);
    return type;
}

void DataBinding__Fuse_Triggers_TriggerBypassMode___ObjInit_2(DataBinding__Fuse_Triggers_TriggerBypassMode* __this, ::app::Uno::UX::Property__Fuse_Triggers_TriggerBypassMode* target, ::uString* key)
{
    ::app::Fuse::Reactive::Binding___ObjInit_1(__this, key);
    __this->Target(target);
}

bool DataBinding__Fuse_Triggers_TriggerBypassMode__Acceptor(DataBinding__Fuse_Triggers_TriggerBypassMode* __this, ::uObject* obj)
{
    return ::uIs(obj, ::app::Fuse::Triggers::TriggerBypassMode__typeof());
}

void DataBinding__Fuse_Triggers_TriggerBypassMode__Fuse_Reactive_IObserver_OnAdd(DataBinding__Fuse_Triggers_TriggerBypassMode* __this, ::uObject* addedValue)
{
    U_THROW(::app::Uno::Exception__New_2(NULL, ::uGetConstString("Not handled: OnAdd")));
}

void DataBinding__Fuse_Triggers_TriggerBypassMode__Fuse_Reactive_IObserver_OnFailed(DataBinding__Fuse_Triggers_TriggerBypassMode* __this, ::uString* message)
{
    U_THROW(::app::Uno::Exception__New_2(NULL, ::uGetConstString("Not handled: OnFailed")));
}

void DataBinding__Fuse_Triggers_TriggerBypassMode__Fuse_Reactive_IObserver_OnNewAll(DataBinding__Fuse_Triggers_TriggerBypassMode* __this, int length)
{
    if (length > 0)
    {
        U_THROW(::app::Uno::Exception__New_2(NULL, ::uGetConstString("Not handled: OnNewAll")));
    }
}

void DataBinding__Fuse_Triggers_TriggerBypassMode__Fuse_Reactive_IObserver_OnNewAt(DataBinding__Fuse_Triggers_TriggerBypassMode* __this, int index, ::uObject* value)
{
    U_THROW(::app::Uno::Exception__New_2(NULL, ::uGetConstString("Not handled: OnNewAt")));
}

void DataBinding__Fuse_Triggers_TriggerBypassMode__Fuse_Reactive_IObserver_OnRemove(DataBinding__Fuse_Triggers_TriggerBypassMode* __this, ::uObject* value, int index)
{
    U_THROW(::app::Uno::Exception__New_2(NULL, ::uGetConstString("Not handled: OnRemoveAt")));
}

void DataBinding__Fuse_Triggers_TriggerBypassMode__Fuse_Reactive_IObserver_OnSet(DataBinding__Fuse_Triggers_TriggerBypassMode* __this, ::uObject* newValue)
{
    __this->PushValue(newValue);
}

void DataBinding__Fuse_Triggers_TriggerBypassMode__Fuse_Scripting_INameListener_OnNameChanged(DataBinding__Fuse_Triggers_TriggerBypassMode* __this, ::uObject* obj, ::uString* name)
{
    __this->PushValue(__this->_currentValue);
}

::app::Uno::UX::Property__Fuse_Triggers_TriggerBypassMode* DataBinding__Fuse_Triggers_TriggerBypassMode__get_Target(DataBinding__Fuse_Triggers_TriggerBypassMode* __this)
{
    return __this->_Target;
}

DataBinding__Fuse_Triggers_TriggerBypassMode* DataBinding__Fuse_Triggers_TriggerBypassMode__New_1(::uStatic* __this, ::app::Uno::UX::Property__Fuse_Triggers_TriggerBypassMode* target, ::uString* key)
{
    DataBinding__Fuse_Triggers_TriggerBypassMode* inst = (DataBinding__Fuse_Triggers_TriggerBypassMode*)::uAllocObject(sizeof(DataBinding__Fuse_Triggers_TriggerBypassMode), DataBinding__Fuse_Triggers_TriggerBypassMode__typeof());
    inst->_ObjInit_2(target, key);
    return inst;
}

void DataBinding__Fuse_Triggers_TriggerBypassMode__NewValue(DataBinding__Fuse_Triggers_TriggerBypassMode* __this, ::uObject* value)
{
    if (::uIs(value, ::app::Fuse::Triggers::TriggerBypassMode__typeof()))
    {
        __this->PushValue(value);
    }
    else if (::uIs(value, ::app::Fuse::Reactive::IObservable__typeof()))
    {
        if (__this->_subscription != NULL)
        {
            ::app::Uno::IDisposable::Dispose(::uPtr< ::uObject*>(__this->_subscription));
            __this->_subscription = NULL;
        }

        ::uObject* obs = ::uAs< ::uObject*>(value, ::app::Fuse::Reactive::IObservable__typeof());

        if (obs != NULL)
        {
            __this->_subscription = ::app::Fuse::Reactive::IObservable::Subscribe(::uPtr< ::uObject*>(obs), (::uObject*)__this);
        }
    }
    else
    {
        __this->PushValue(value);
    }
}

void DataBinding__Fuse_Triggers_TriggerBypassMode__OnRooted(DataBinding__Fuse_Triggers_TriggerBypassMode* __this, ::app::Fuse::Node* n)
{
    ::uPtr< ::app::Uno::UX::Property__Fuse_Triggers_TriggerBypassMode*>(__this->Target())->add_ValueChanged(::uNewDelegateNonVirt(::app::Uno::UX::ValueChangedHandler__Fuse_Triggers_TriggerBypassMode__typeof(), (const void*)DataBinding__Fuse_Triggers_TriggerBypassMode__OnValueChanged, __this));
    ::app::Fuse::Reactive::Binding__OnRooted(__this, n);
}

void DataBinding__Fuse_Triggers_TriggerBypassMode__OnUnrooted(DataBinding__Fuse_Triggers_TriggerBypassMode* __this, ::app::Fuse::Node* n)
{
    ::app::Fuse::Scripting::NameRegistry__RemoveListener(NULL, (::uObject*)__this);
    ::uPtr< ::app::Uno::UX::Property__Fuse_Triggers_TriggerBypassMode*>(__this->Target())->remove_ValueChanged(::uNewDelegateNonVirt(::app::Uno::UX::ValueChangedHandler__Fuse_Triggers_TriggerBypassMode__typeof(), (const void*)DataBinding__Fuse_Triggers_TriggerBypassMode__OnValueChanged, __this));

    if (__this->_subscription != NULL)
    {
        ::app::Uno::IDisposable::Dispose(::uPtr< ::uObject*>(__this->_subscription));
        __this->_subscription = NULL;
    }

    ::app::Fuse::Reactive::Binding__OnUnrooted(__this, n);
}

void DataBinding__Fuse_Triggers_TriggerBypassMode__OnValueChanged(DataBinding__Fuse_Triggers_TriggerBypassMode* __this, ::uObject* sender, ::app::Uno::UX::ValueChangedArgs__Fuse_Triggers_TriggerBypassMode* args)
{
    if ((__this->_subscription != NULL) && (::uPtr< ::app::Uno::UX::ValueChangedArgs__Fuse_Triggers_TriggerBypassMode*>(args)->Origin() != __this))
    {
        ::app::Fuse::Reactive::ISubscription::SetExclusive(::uPtr< ::uObject*>(__this->_subscription), ::uBox< int>(::app::Fuse::Triggers::TriggerBypassMode__typeof(), ::uPtr< ::app::Uno::UX::ValueChangedArgs__Fuse_Triggers_TriggerBypassMode*>(args)->Value()));
    }
}

void DataBinding__Fuse_Triggers_TriggerBypassMode__PushValue(DataBinding__Fuse_Triggers_TriggerBypassMode* __this, ::uObject* newValue)
{
    __this->_currentValue = newValue;

    if (::uIs(newValue, ::app::Fuse::Triggers::TriggerBypassMode__typeof()))
    {
        ::app::Fuse::Scripting::NameRegistry__RemoveListener(NULL, (::uObject*)__this);
        ::uPtr< ::app::Uno::UX::Property__Fuse_Triggers_TriggerBypassMode*>(__this->Target())->SetRestState(::uUnbox< int>(::app::Fuse::Triggers::TriggerBypassMode__typeof(), newValue), (::uObject*)__this);
        return;
    }

    ::uString* name = ::uAs< ::uString*>(newValue, ::app::Uno::String__typeof());

    if (::app::Uno::String__op_Inequality(NULL, name, NULL) && (__this->Node() != NULL))
    {
        ::app::Fuse::Scripting::NameRegistry__AddListener(NULL, name, (::uObject*)__this);
        ::app::Fuse::Node* k = ::uPtr< ::app::Fuse::Node*>(__this->Node())->FindNodeByName(::uCast< ::uString*>(newValue, ::app::Uno::String__typeof()));

        if (::uIs(k, ::app::Fuse::Triggers::TriggerBypassMode__typeof()))
        {
            ::uPtr< ::app::Uno::UX::Property__Fuse_Triggers_TriggerBypassMode*>(__this->Target())->SetRestState(::uUnbox< int>(::app::Fuse::Triggers::TriggerBypassMode__typeof(), (::uObject*)k), (::uObject*)__this);
            return;
        }
        else
        {
            ::uObject* candidate = ::uPtr< ::app::Fuse::Node*>(__this->Node())->FindObjectByName(::uCast< ::uString*>(newValue, ::app::Uno::String__typeof()), ::uNewDelegateNonVirt(::app::Uno::Predicate__object__typeof(), (const void*)DataBinding__Fuse_Triggers_TriggerBypassMode__Acceptor, __this));

            if (::uIs(candidate, ::app::Fuse::Triggers::TriggerBypassMode__typeof()))
            {
                ::uPtr< ::app::Uno::UX::Property__Fuse_Triggers_TriggerBypassMode*>(__this->Target())->SetRestState(::uUnbox< int>(::app::Fuse::Triggers::TriggerBypassMode__typeof(), candidate), (::uObject*)__this);
                return;
            }
        }
    }

    ::app::Fuse::Reactive::Marshal__ToType__Fuse_Triggers_TriggerBypassMode(NULL, newValue, ::uNewDelegateNonVirt(::app::Uno::Action__Fuse_Triggers_TriggerBypassMode__typeof(), (const void*)DataBinding__Fuse_Triggers_TriggerBypassMode__SetValue, __this));
}

void DataBinding__Fuse_Triggers_TriggerBypassMode__set_Target(DataBinding__Fuse_Triggers_TriggerBypassMode* __this, ::app::Uno::UX::Property__Fuse_Triggers_TriggerBypassMode* value)
{
    __this->_Target = value;
}

void DataBinding__Fuse_Triggers_TriggerBypassMode__SetValue(DataBinding__Fuse_Triggers_TriggerBypassMode* __this, int value)
{
    ::uPtr< ::app::Uno::UX::Property__Fuse_Triggers_TriggerBypassMode*>(__this->Target())->SetRestState(value, (::uObject*)__this);
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Reactive\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

DataBinding__int__uType* DataBinding__int__typeof()
{
    static ::uStaticStrong<DataBinding__int__uType*> type;
    if (type != NULL) return type;

    type = (DataBinding__int__uType*)::uAllocClassType(sizeof(DataBinding__int__uType), "Fuse.Reactive.DataBinding<int>", false, 2, 3, 0);

    type->SetBaseType(::app::Fuse::Reactive::Binding__typeof());
    type->__fp_NewValue = (void(*)(::app::Fuse::Reactive::Binding*, ::uObject*))DataBinding__int__NewValue;
    type->__fp_OnRooted = (void(*)(::app::Fuse::Behavior*, ::app::Fuse::Node*))DataBinding__int__OnRooted;
    type->__fp_OnUnrooted = (void(*)(::app::Fuse::Behavior*, ::app::Fuse::Node*))DataBinding__int__OnUnrooted;
    type->__interface_0.__fp_OnSet = (void(*)(void*, ::uObject*))DataBinding__int__Fuse_Reactive_IObserver_OnSet;
    type->__interface_0.__fp_OnAdd = (void(*)(void*, ::uObject*))DataBinding__int__Fuse_Reactive_IObserver_OnAdd;
    type->__interface_0.__fp_OnNewAt = (void(*)(void*, int, ::uObject*))DataBinding__int__Fuse_Reactive_IObserver_OnNewAt;
    type->__interface_0.__fp_OnFailed = (void(*)(void*, ::uString*))DataBinding__int__Fuse_Reactive_IObserver_OnFailed;
    type->__interface_0.__fp_OnNewAll = (void(*)(void*, int))DataBinding__int__Fuse_Reactive_IObserver_OnNewAll;
    type->__interface_0.__fp_OnRemove = (void(*)(void*, ::uObject*, int))DataBinding__int__Fuse_Reactive_IObserver_OnRemove;
    type->__interface_1.__fp_OnNameChanged = (void(*)(void*, ::uObject*, ::uString*))DataBinding__int__Fuse_Scripting_INameListener_OnNameChanged;

    type->SetInterfaces(
        ::app::Fuse::Reactive::IObserver__typeof(), offsetof(DataBinding__int__uType, __interface_0),
        ::app::Fuse::Scripting::INameListener__typeof(), offsetof(DataBinding__int__uType, __interface_1));

    type->SetStrongRefs(
        "_currentValue", offsetof(DataBinding__int, _currentValue),
        "_subscription", offsetof(DataBinding__int, _subscription),
        "_Target", offsetof(DataBinding__int, _Target));

    type->SetFields(2,
        ::uNewField("_currentValue", NULL, offsetof(DataBinding__int, _currentValue), ::uObject__typeof()),
        ::uNewField("_subscription", NULL, offsetof(DataBinding__int, _subscription), ::app::Fuse::Reactive::ISubscription__typeof()));

    type->SetFunctions(3,
        ::uNewFunction("get_Target", DataBinding__int__get_Target, 0, false, ::app::Uno::UX::Property__int__typeof()),
        ::uNewFunction(".ctor", DataBinding__int__New_1, 0, true, DataBinding__int__typeof(), ::app::Uno::UX::Property__int__typeof(), ::app::Uno::String__typeof()),
        ::uNewFunctionVoid("set_Target", DataBinding__int__set_Target, 0, false, ::app::Uno::UX::Property__int__typeof()));

    ::uRegisterType(type);
    return type;
}

void DataBinding__int___ObjInit_2(DataBinding__int* __this, ::app::Uno::UX::Property__int* target, ::uString* key)
{
    ::app::Fuse::Reactive::Binding___ObjInit_1(__this, key);
    __this->Target(target);
}

bool DataBinding__int__Acceptor(DataBinding__int* __this, ::uObject* obj)
{
    return ::uIs(obj, ::app::Uno::Int__typeof());
}

void DataBinding__int__Fuse_Reactive_IObserver_OnAdd(DataBinding__int* __this, ::uObject* addedValue)
{
    U_THROW(::app::Uno::Exception__New_2(NULL, ::uGetConstString("Not handled: OnAdd")));
}

void DataBinding__int__Fuse_Reactive_IObserver_OnFailed(DataBinding__int* __this, ::uString* message)
{
    U_THROW(::app::Uno::Exception__New_2(NULL, ::uGetConstString("Not handled: OnFailed")));
}

void DataBinding__int__Fuse_Reactive_IObserver_OnNewAll(DataBinding__int* __this, int length)
{
    if (length > 0)
    {
        U_THROW(::app::Uno::Exception__New_2(NULL, ::uGetConstString("Not handled: OnNewAll")));
    }
}

void DataBinding__int__Fuse_Reactive_IObserver_OnNewAt(DataBinding__int* __this, int index, ::uObject* value)
{
    U_THROW(::app::Uno::Exception__New_2(NULL, ::uGetConstString("Not handled: OnNewAt")));
}

void DataBinding__int__Fuse_Reactive_IObserver_OnRemove(DataBinding__int* __this, ::uObject* value, int index)
{
    U_THROW(::app::Uno::Exception__New_2(NULL, ::uGetConstString("Not handled: OnRemoveAt")));
}

void DataBinding__int__Fuse_Reactive_IObserver_OnSet(DataBinding__int* __this, ::uObject* newValue)
{
    __this->PushValue(newValue);
}

void DataBinding__int__Fuse_Scripting_INameListener_OnNameChanged(DataBinding__int* __this, ::uObject* obj, ::uString* name)
{
    __this->PushValue(__this->_currentValue);
}

::app::Uno::UX::Property__int* DataBinding__int__get_Target(DataBinding__int* __this)
{
    return __this->_Target;
}

DataBinding__int* DataBinding__int__New_1(::uStatic* __this, ::app::Uno::UX::Property__int* target, ::uString* key)
{
    DataBinding__int* inst = (DataBinding__int*)::uAllocObject(sizeof(DataBinding__int), DataBinding__int__typeof());
    inst->_ObjInit_2(target, key);
    return inst;
}

void DataBinding__int__NewValue(DataBinding__int* __this, ::uObject* value)
{
    if (::uIs(value, ::app::Uno::Int__typeof()))
    {
        __this->PushValue(value);
    }
    else if (::uIs(value, ::app::Fuse::Reactive::IObservable__typeof()))
    {
        if (__this->_subscription != NULL)
        {
            ::app::Uno::IDisposable::Dispose(::uPtr< ::uObject*>(__this->_subscription));
            __this->_subscription = NULL;
        }

        ::uObject* obs = ::uAs< ::uObject*>(value, ::app::Fuse::Reactive::IObservable__typeof());

        if (obs != NULL)
        {
            __this->_subscription = ::app::Fuse::Reactive::IObservable::Subscribe(::uPtr< ::uObject*>(obs), (::uObject*)__this);
        }
    }
    else
    {
        __this->PushValue(value);
    }
}

void DataBinding__int__OnRooted(DataBinding__int* __this, ::app::Fuse::Node* n)
{
    ::uPtr< ::app::Uno::UX::Property__int*>(__this->Target())->add_ValueChanged(::uNewDelegateNonVirt(::app::Uno::UX::ValueChangedHandler__int__typeof(), (const void*)DataBinding__int__OnValueChanged, __this));
    ::app::Fuse::Reactive::Binding__OnRooted(__this, n);
}

void DataBinding__int__OnUnrooted(DataBinding__int* __this, ::app::Fuse::Node* n)
{
    ::app::Fuse::Scripting::NameRegistry__RemoveListener(NULL, (::uObject*)__this);
    ::uPtr< ::app::Uno::UX::Property__int*>(__this->Target())->remove_ValueChanged(::uNewDelegateNonVirt(::app::Uno::UX::ValueChangedHandler__int__typeof(), (const void*)DataBinding__int__OnValueChanged, __this));

    if (__this->_subscription != NULL)
    {
        ::app::Uno::IDisposable::Dispose(::uPtr< ::uObject*>(__this->_subscription));
        __this->_subscription = NULL;
    }

    ::app::Fuse::Reactive::Binding__OnUnrooted(__this, n);
}

void DataBinding__int__OnValueChanged(DataBinding__int* __this, ::uObject* sender, ::app::Uno::UX::ValueChangedArgs__int* args)
{
    if ((__this->_subscription != NULL) && (::uPtr< ::app::Uno::UX::ValueChangedArgs__int*>(args)->Origin() != __this))
    {
        ::app::Fuse::Reactive::ISubscription::SetExclusive(::uPtr< ::uObject*>(__this->_subscription), ::uBox< int>(::app::Uno::Int__typeof(), ::uPtr< ::app::Uno::UX::ValueChangedArgs__int*>(args)->Value()));
    }
}

void DataBinding__int__PushValue(DataBinding__int* __this, ::uObject* newValue)
{
    __this->_currentValue = newValue;

    if (::uIs(newValue, ::app::Uno::Int__typeof()))
    {
        ::app::Fuse::Scripting::NameRegistry__RemoveListener(NULL, (::uObject*)__this);
        ::uPtr< ::app::Uno::UX::Property__int*>(__this->Target())->SetRestState(::uUnbox< int>(::app::Uno::Int__typeof(), newValue), (::uObject*)__this);
        return;
    }

    ::uString* name = ::uAs< ::uString*>(newValue, ::app::Uno::String__typeof());

    if (::app::Uno::String__op_Inequality(NULL, name, NULL) && (__this->Node() != NULL))
    {
        ::app::Fuse::Scripting::NameRegistry__AddListener(NULL, name, (::uObject*)__this);
        ::app::Fuse::Node* k = ::uPtr< ::app::Fuse::Node*>(__this->Node())->FindNodeByName(::uCast< ::uString*>(newValue, ::app::Uno::String__typeof()));

        if (::uIs(k, ::app::Uno::Int__typeof()))
        {
            ::uPtr< ::app::Uno::UX::Property__int*>(__this->Target())->SetRestState(::uUnbox< int>(::app::Uno::Int__typeof(), (::uObject*)k), (::uObject*)__this);
            return;
        }
        else
        {
            ::uObject* candidate = ::uPtr< ::app::Fuse::Node*>(__this->Node())->FindObjectByName(::uCast< ::uString*>(newValue, ::app::Uno::String__typeof()), ::uNewDelegateNonVirt(::app::Uno::Predicate__object__typeof(), (const void*)DataBinding__int__Acceptor, __this));

            if (::uIs(candidate, ::app::Uno::Int__typeof()))
            {
                ::uPtr< ::app::Uno::UX::Property__int*>(__this->Target())->SetRestState(::uUnbox< int>(::app::Uno::Int__typeof(), candidate), (::uObject*)__this);
                return;
            }
        }
    }

    ::app::Fuse::Reactive::Marshal__ToType__int(NULL, newValue, ::uNewDelegateNonVirt(::app::Uno::Action__int__typeof(), (const void*)DataBinding__int__SetValue, __this));
}

void DataBinding__int__set_Target(DataBinding__int* __this, ::app::Uno::UX::Property__int* value)
{
    __this->_Target = value;
}

void DataBinding__int__SetValue(DataBinding__int* __this, int value)
{
    ::uPtr< ::app::Uno::UX::Property__int*>(__this->Target())->SetRestState(value, (::uObject*)__this);
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Reactive\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

DataBinding__int2__uType* DataBinding__int2__typeof()
{
    static ::uStaticStrong<DataBinding__int2__uType*> type;
    if (type != NULL) return type;

    type = (DataBinding__int2__uType*)::uAllocClassType(sizeof(DataBinding__int2__uType), "Fuse.Reactive.DataBinding<int2>", false, 2, 3, 0);

    type->SetBaseType(::app::Fuse::Reactive::Binding__typeof());
    type->__fp_NewValue = (void(*)(::app::Fuse::Reactive::Binding*, ::uObject*))DataBinding__int2__NewValue;
    type->__fp_OnRooted = (void(*)(::app::Fuse::Behavior*, ::app::Fuse::Node*))DataBinding__int2__OnRooted;
    type->__fp_OnUnrooted = (void(*)(::app::Fuse::Behavior*, ::app::Fuse::Node*))DataBinding__int2__OnUnrooted;
    type->__interface_0.__fp_OnSet = (void(*)(void*, ::uObject*))DataBinding__int2__Fuse_Reactive_IObserver_OnSet;
    type->__interface_0.__fp_OnAdd = (void(*)(void*, ::uObject*))DataBinding__int2__Fuse_Reactive_IObserver_OnAdd;
    type->__interface_0.__fp_OnNewAt = (void(*)(void*, int, ::uObject*))DataBinding__int2__Fuse_Reactive_IObserver_OnNewAt;
    type->__interface_0.__fp_OnFailed = (void(*)(void*, ::uString*))DataBinding__int2__Fuse_Reactive_IObserver_OnFailed;
    type->__interface_0.__fp_OnNewAll = (void(*)(void*, int))DataBinding__int2__Fuse_Reactive_IObserver_OnNewAll;
    type->__interface_0.__fp_OnRemove = (void(*)(void*, ::uObject*, int))DataBinding__int2__Fuse_Reactive_IObserver_OnRemove;
    type->__interface_1.__fp_OnNameChanged = (void(*)(void*, ::uObject*, ::uString*))DataBinding__int2__Fuse_Scripting_INameListener_OnNameChanged;

    type->SetInterfaces(
        ::app::Fuse::Reactive::IObserver__typeof(), offsetof(DataBinding__int2__uType, __interface_0),
        ::app::Fuse::Scripting::INameListener__typeof(), offsetof(DataBinding__int2__uType, __interface_1));

    type->SetStrongRefs(
        "_currentValue", offsetof(DataBinding__int2, _currentValue),
        "_subscription", offsetof(DataBinding__int2, _subscription),
        "_Target", offsetof(DataBinding__int2, _Target));

    type->SetFields(2,
        ::uNewField("_currentValue", NULL, offsetof(DataBinding__int2, _currentValue), ::uObject__typeof()),
        ::uNewField("_subscription", NULL, offsetof(DataBinding__int2, _subscription), ::app::Fuse::Reactive::ISubscription__typeof()));

    type->SetFunctions(3,
        ::uNewFunction("get_Target", DataBinding__int2__get_Target, 0, false, ::app::Uno::UX::Property__int2__typeof()),
        ::uNewFunction(".ctor", DataBinding__int2__New_1, 0, true, DataBinding__int2__typeof(), ::app::Uno::UX::Property__int2__typeof(), ::app::Uno::String__typeof()),
        ::uNewFunctionVoid("set_Target", DataBinding__int2__set_Target, 0, false, ::app::Uno::UX::Property__int2__typeof()));

    ::uRegisterType(type);
    return type;
}

void DataBinding__int2___ObjInit_2(DataBinding__int2* __this, ::app::Uno::UX::Property__int2* target, ::uString* key)
{
    ::app::Fuse::Reactive::Binding___ObjInit_1(__this, key);
    __this->Target(target);
}

bool DataBinding__int2__Acceptor(DataBinding__int2* __this, ::uObject* obj)
{
    return ::uIs(obj, ::app::Uno::Int2__typeof());
}

void DataBinding__int2__Fuse_Reactive_IObserver_OnAdd(DataBinding__int2* __this, ::uObject* addedValue)
{
    U_THROW(::app::Uno::Exception__New_2(NULL, ::uGetConstString("Not handled: OnAdd")));
}

void DataBinding__int2__Fuse_Reactive_IObserver_OnFailed(DataBinding__int2* __this, ::uString* message)
{
    U_THROW(::app::Uno::Exception__New_2(NULL, ::uGetConstString("Not handled: OnFailed")));
}

void DataBinding__int2__Fuse_Reactive_IObserver_OnNewAll(DataBinding__int2* __this, int length)
{
    if (length > 0)
    {
        U_THROW(::app::Uno::Exception__New_2(NULL, ::uGetConstString("Not handled: OnNewAll")));
    }
}

void DataBinding__int2__Fuse_Reactive_IObserver_OnNewAt(DataBinding__int2* __this, int index, ::uObject* value)
{
    U_THROW(::app::Uno::Exception__New_2(NULL, ::uGetConstString("Not handled: OnNewAt")));
}

void DataBinding__int2__Fuse_Reactive_IObserver_OnRemove(DataBinding__int2* __this, ::uObject* value, int index)
{
    U_THROW(::app::Uno::Exception__New_2(NULL, ::uGetConstString("Not handled: OnRemoveAt")));
}

void DataBinding__int2__Fuse_Reactive_IObserver_OnSet(DataBinding__int2* __this, ::uObject* newValue)
{
    __this->PushValue(newValue);
}

void DataBinding__int2__Fuse_Scripting_INameListener_OnNameChanged(DataBinding__int2* __this, ::uObject* obj, ::uString* name)
{
    __this->PushValue(__this->_currentValue);
}

::app::Uno::UX::Property__int2* DataBinding__int2__get_Target(DataBinding__int2* __this)
{
    return __this->_Target;
}

DataBinding__int2* DataBinding__int2__New_1(::uStatic* __this, ::app::Uno::UX::Property__int2* target, ::uString* key)
{
    DataBinding__int2* inst = (DataBinding__int2*)::uAllocObject(sizeof(DataBinding__int2), DataBinding__int2__typeof());
    inst->_ObjInit_2(target, key);
    return inst;
}

void DataBinding__int2__NewValue(DataBinding__int2* __this, ::uObject* value)
{
    if (::uIs(value, ::app::Uno::Int2__typeof()))
    {
        __this->PushValue(value);
    }
    else if (::uIs(value, ::app::Fuse::Reactive::IObservable__typeof()))
    {
        if (__this->_subscription != NULL)
        {
            ::app::Uno::IDisposable::Dispose(::uPtr< ::uObject*>(__this->_subscription));
            __this->_subscription = NULL;
        }

        ::uObject* obs = ::uAs< ::uObject*>(value, ::app::Fuse::Reactive::IObservable__typeof());

        if (obs != NULL)
        {
            __this->_subscription = ::app::Fuse::Reactive::IObservable::Subscribe(::uPtr< ::uObject*>(obs), (::uObject*)__this);
        }
    }
    else
    {
        __this->PushValue(value);
    }
}

void DataBinding__int2__OnRooted(DataBinding__int2* __this, ::app::Fuse::Node* n)
{
    ::uPtr< ::app::Uno::UX::Property__int2*>(__this->Target())->add_ValueChanged(::uNewDelegateNonVirt(::app::Uno::UX::ValueChangedHandler__int2__typeof(), (const void*)DataBinding__int2__OnValueChanged, __this));
    ::app::Fuse::Reactive::Binding__OnRooted(__this, n);
}

void DataBinding__int2__OnUnrooted(DataBinding__int2* __this, ::app::Fuse::Node* n)
{
    ::app::Fuse::Scripting::NameRegistry__RemoveListener(NULL, (::uObject*)__this);
    ::uPtr< ::app::Uno::UX::Property__int2*>(__this->Target())->remove_ValueChanged(::uNewDelegateNonVirt(::app::Uno::UX::ValueChangedHandler__int2__typeof(), (const void*)DataBinding__int2__OnValueChanged, __this));

    if (__this->_subscription != NULL)
    {
        ::app::Uno::IDisposable::Dispose(::uPtr< ::uObject*>(__this->_subscription));
        __this->_subscription = NULL;
    }

    ::app::Fuse::Reactive::Binding__OnUnrooted(__this, n);
}

void DataBinding__int2__OnValueChanged(DataBinding__int2* __this, ::uObject* sender, ::app::Uno::UX::ValueChangedArgs__int2* args)
{
    if ((__this->_subscription != NULL) && (::uPtr< ::app::Uno::UX::ValueChangedArgs__int2*>(args)->Origin() != __this))
    {
        ::app::Fuse::Reactive::ISubscription::SetExclusive(::uPtr< ::uObject*>(__this->_subscription), ::uBox(::app::Uno::Int2__typeof(), ::uPtr< ::app::Uno::UX::ValueChangedArgs__int2*>(args)->Value()));
    }
}

void DataBinding__int2__PushValue(DataBinding__int2* __this, ::uObject* newValue)
{
    __this->_currentValue = newValue;

    if (::uIs(newValue, ::app::Uno::Int2__typeof()))
    {
        ::app::Fuse::Scripting::NameRegistry__RemoveListener(NULL, (::uObject*)__this);
        ::uPtr< ::app::Uno::UX::Property__int2*>(__this->Target())->SetRestState(::uUnbox< ::app::Uno::Int2>(::app::Uno::Int2__typeof(), newValue), (::uObject*)__this);
        return;
    }

    ::uString* name = ::uAs< ::uString*>(newValue, ::app::Uno::String__typeof());

    if (::app::Uno::String__op_Inequality(NULL, name, NULL) && (__this->Node() != NULL))
    {
        ::app::Fuse::Scripting::NameRegistry__AddListener(NULL, name, (::uObject*)__this);
        ::app::Fuse::Node* k = ::uPtr< ::app::Fuse::Node*>(__this->Node())->FindNodeByName(::uCast< ::uString*>(newValue, ::app::Uno::String__typeof()));

        if (::uIs(k, ::app::Uno::Int2__typeof()))
        {
            ::uPtr< ::app::Uno::UX::Property__int2*>(__this->Target())->SetRestState(::uUnbox< ::app::Uno::Int2>(::app::Uno::Int2__typeof(), (::uObject*)k), (::uObject*)__this);
            return;
        }
        else
        {
            ::uObject* candidate = ::uPtr< ::app::Fuse::Node*>(__this->Node())->FindObjectByName(::uCast< ::uString*>(newValue, ::app::Uno::String__typeof()), ::uNewDelegateNonVirt(::app::Uno::Predicate__object__typeof(), (const void*)DataBinding__int2__Acceptor, __this));

            if (::uIs(candidate, ::app::Uno::Int2__typeof()))
            {
                ::uPtr< ::app::Uno::UX::Property__int2*>(__this->Target())->SetRestState(::uUnbox< ::app::Uno::Int2>(::app::Uno::Int2__typeof(), candidate), (::uObject*)__this);
                return;
            }
        }
    }

    ::app::Fuse::Reactive::Marshal__ToType__int2(NULL, newValue, ::uNewDelegateNonVirt(::app::Uno::Action__int2__typeof(), (const void*)DataBinding__int2__SetValue, __this));
}

void DataBinding__int2__set_Target(DataBinding__int2* __this, ::app::Uno::UX::Property__int2* value)
{
    __this->_Target = value;
}

void DataBinding__int2__SetValue(DataBinding__int2* __this, ::app::Uno::Int2 value)
{
    ::uPtr< ::app::Uno::UX::Property__int2*>(__this->Target())->SetRestState(value, (::uObject*)__this);
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Reactive\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

DataBinding__int3__uType* DataBinding__int3__typeof()
{
    static ::uStaticStrong<DataBinding__int3__uType*> type;
    if (type != NULL) return type;

    type = (DataBinding__int3__uType*)::uAllocClassType(sizeof(DataBinding__int3__uType), "Fuse.Reactive.DataBinding<int3>", false, 2, 3, 0);

    type->SetBaseType(::app::Fuse::Reactive::Binding__typeof());
    type->__fp_NewValue = (void(*)(::app::Fuse::Reactive::Binding*, ::uObject*))DataBinding__int3__NewValue;
    type->__fp_OnRooted = (void(*)(::app::Fuse::Behavior*, ::app::Fuse::Node*))DataBinding__int3__OnRooted;
    type->__fp_OnUnrooted = (void(*)(::app::Fuse::Behavior*, ::app::Fuse::Node*))DataBinding__int3__OnUnrooted;
    type->__interface_0.__fp_OnSet = (void(*)(void*, ::uObject*))DataBinding__int3__Fuse_Reactive_IObserver_OnSet;
    type->__interface_0.__fp_OnAdd = (void(*)(void*, ::uObject*))DataBinding__int3__Fuse_Reactive_IObserver_OnAdd;
    type->__interface_0.__fp_OnNewAt = (void(*)(void*, int, ::uObject*))DataBinding__int3__Fuse_Reactive_IObserver_OnNewAt;
    type->__interface_0.__fp_OnFailed = (void(*)(void*, ::uString*))DataBinding__int3__Fuse_Reactive_IObserver_OnFailed;
    type->__interface_0.__fp_OnNewAll = (void(*)(void*, int))DataBinding__int3__Fuse_Reactive_IObserver_OnNewAll;
    type->__interface_0.__fp_OnRemove = (void(*)(void*, ::uObject*, int))DataBinding__int3__Fuse_Reactive_IObserver_OnRemove;
    type->__interface_1.__fp_OnNameChanged = (void(*)(void*, ::uObject*, ::uString*))DataBinding__int3__Fuse_Scripting_INameListener_OnNameChanged;

    type->SetInterfaces(
        ::app::Fuse::Reactive::IObserver__typeof(), offsetof(DataBinding__int3__uType, __interface_0),
        ::app::Fuse::Scripting::INameListener__typeof(), offsetof(DataBinding__int3__uType, __interface_1));

    type->SetStrongRefs(
        "_currentValue", offsetof(DataBinding__int3, _currentValue),
        "_subscription", offsetof(DataBinding__int3, _subscription),
        "_Target", offsetof(DataBinding__int3, _Target));

    type->SetFields(2,
        ::uNewField("_currentValue", NULL, offsetof(DataBinding__int3, _currentValue), ::uObject__typeof()),
        ::uNewField("_subscription", NULL, offsetof(DataBinding__int3, _subscription), ::app::Fuse::Reactive::ISubscription__typeof()));

    type->SetFunctions(3,
        ::uNewFunction("get_Target", DataBinding__int3__get_Target, 0, false, ::app::Uno::UX::Property__int3__typeof()),
        ::uNewFunction(".ctor", DataBinding__int3__New_1, 0, true, DataBinding__int3__typeof(), ::app::Uno::UX::Property__int3__typeof(), ::app::Uno::String__typeof()),
        ::uNewFunctionVoid("set_Target", DataBinding__int3__set_Target, 0, false, ::app::Uno::UX::Property__int3__typeof()));

    ::uRegisterType(type);
    return type;
}

void DataBinding__int3___ObjInit_2(DataBinding__int3* __this, ::app::Uno::UX::Property__int3* target, ::uString* key)
{
    ::app::Fuse::Reactive::Binding___ObjInit_1(__this, key);
    __this->Target(target);
}

bool DataBinding__int3__Acceptor(DataBinding__int3* __this, ::uObject* obj)
{
    return ::uIs(obj, ::app::Uno::Int3__typeof());
}

void DataBinding__int3__Fuse_Reactive_IObserver_OnAdd(DataBinding__int3* __this, ::uObject* addedValue)
{
    U_THROW(::app::Uno::Exception__New_2(NULL, ::uGetConstString("Not handled: OnAdd")));
}

void DataBinding__int3__Fuse_Reactive_IObserver_OnFailed(DataBinding__int3* __this, ::uString* message)
{
    U_THROW(::app::Uno::Exception__New_2(NULL, ::uGetConstString("Not handled: OnFailed")));
}

void DataBinding__int3__Fuse_Reactive_IObserver_OnNewAll(DataBinding__int3* __this, int length)
{
    if (length > 0)
    {
        U_THROW(::app::Uno::Exception__New_2(NULL, ::uGetConstString("Not handled: OnNewAll")));
    }
}

void DataBinding__int3__Fuse_Reactive_IObserver_OnNewAt(DataBinding__int3* __this, int index, ::uObject* value)
{
    U_THROW(::app::Uno::Exception__New_2(NULL, ::uGetConstString("Not handled: OnNewAt")));
}

void DataBinding__int3__Fuse_Reactive_IObserver_OnRemove(DataBinding__int3* __this, ::uObject* value, int index)
{
    U_THROW(::app::Uno::Exception__New_2(NULL, ::uGetConstString("Not handled: OnRemoveAt")));
}

void DataBinding__int3__Fuse_Reactive_IObserver_OnSet(DataBinding__int3* __this, ::uObject* newValue)
{
    __this->PushValue(newValue);
}

void DataBinding__int3__Fuse_Scripting_INameListener_OnNameChanged(DataBinding__int3* __this, ::uObject* obj, ::uString* name)
{
    __this->PushValue(__this->_currentValue);
}

::app::Uno::UX::Property__int3* DataBinding__int3__get_Target(DataBinding__int3* __this)
{
    return __this->_Target;
}

DataBinding__int3* DataBinding__int3__New_1(::uStatic* __this, ::app::Uno::UX::Property__int3* target, ::uString* key)
{
    DataBinding__int3* inst = (DataBinding__int3*)::uAllocObject(sizeof(DataBinding__int3), DataBinding__int3__typeof());
    inst->_ObjInit_2(target, key);
    return inst;
}

void DataBinding__int3__NewValue(DataBinding__int3* __this, ::uObject* value)
{
    if (::uIs(value, ::app::Uno::Int3__typeof()))
    {
        __this->PushValue(value);
    }
    else if (::uIs(value, ::app::Fuse::Reactive::IObservable__typeof()))
    {
        if (__this->_subscription != NULL)
        {
            ::app::Uno::IDisposable::Dispose(::uPtr< ::uObject*>(__this->_subscription));
            __this->_subscription = NULL;
        }

        ::uObject* obs = ::uAs< ::uObject*>(value, ::app::Fuse::Reactive::IObservable__typeof());

        if (obs != NULL)
        {
            __this->_subscription = ::app::Fuse::Reactive::IObservable::Subscribe(::uPtr< ::uObject*>(obs), (::uObject*)__this);
        }
    }
    else
    {
        __this->PushValue(value);
    }
}

void DataBinding__int3__OnRooted(DataBinding__int3* __this, ::app::Fuse::Node* n)
{
    ::uPtr< ::app::Uno::UX::Property__int3*>(__this->Target())->add_ValueChanged(::uNewDelegateNonVirt(::app::Uno::UX::ValueChangedHandler__int3__typeof(), (const void*)DataBinding__int3__OnValueChanged, __this));
    ::app::Fuse::Reactive::Binding__OnRooted(__this, n);
}

void DataBinding__int3__OnUnrooted(DataBinding__int3* __this, ::app::Fuse::Node* n)
{
    ::app::Fuse::Scripting::NameRegistry__RemoveListener(NULL, (::uObject*)__this);
    ::uPtr< ::app::Uno::UX::Property__int3*>(__this->Target())->remove_ValueChanged(::uNewDelegateNonVirt(::app::Uno::UX::ValueChangedHandler__int3__typeof(), (const void*)DataBinding__int3__OnValueChanged, __this));

    if (__this->_subscription != NULL)
    {
        ::app::Uno::IDisposable::Dispose(::uPtr< ::uObject*>(__this->_subscription));
        __this->_subscription = NULL;
    }

    ::app::Fuse::Reactive::Binding__OnUnrooted(__this, n);
}

void DataBinding__int3__OnValueChanged(DataBinding__int3* __this, ::uObject* sender, ::app::Uno::UX::ValueChangedArgs__int3* args)
{
    if ((__this->_subscription != NULL) && (::uPtr< ::app::Uno::UX::ValueChangedArgs__int3*>(args)->Origin() != __this))
    {
        ::app::Fuse::Reactive::ISubscription::SetExclusive(::uPtr< ::uObject*>(__this->_subscription), ::uBox(::app::Uno::Int3__typeof(), ::uPtr< ::app::Uno::UX::ValueChangedArgs__int3*>(args)->Value()));
    }
}

void DataBinding__int3__PushValue(DataBinding__int3* __this, ::uObject* newValue)
{
    __this->_currentValue = newValue;

    if (::uIs(newValue, ::app::Uno::Int3__typeof()))
    {
        ::app::Fuse::Scripting::NameRegistry__RemoveListener(NULL, (::uObject*)__this);
        ::uPtr< ::app::Uno::UX::Property__int3*>(__this->Target())->SetRestState(::uUnbox< ::app::Uno::Int3>(::app::Uno::Int3__typeof(), newValue), (::uObject*)__this);
        return;
    }

    ::uString* name = ::uAs< ::uString*>(newValue, ::app::Uno::String__typeof());

    if (::app::Uno::String__op_Inequality(NULL, name, NULL) && (__this->Node() != NULL))
    {
        ::app::Fuse::Scripting::NameRegistry__AddListener(NULL, name, (::uObject*)__this);
        ::app::Fuse::Node* k = ::uPtr< ::app::Fuse::Node*>(__this->Node())->FindNodeByName(::uCast< ::uString*>(newValue, ::app::Uno::String__typeof()));

        if (::uIs(k, ::app::Uno::Int3__typeof()))
        {
            ::uPtr< ::app::Uno::UX::Property__int3*>(__this->Target())->SetRestState(::uUnbox< ::app::Uno::Int3>(::app::Uno::Int3__typeof(), (::uObject*)k), (::uObject*)__this);
            return;
        }
        else
        {
            ::uObject* candidate = ::uPtr< ::app::Fuse::Node*>(__this->Node())->FindObjectByName(::uCast< ::uString*>(newValue, ::app::Uno::String__typeof()), ::uNewDelegateNonVirt(::app::Uno::Predicate__object__typeof(), (const void*)DataBinding__int3__Acceptor, __this));

            if (::uIs(candidate, ::app::Uno::Int3__typeof()))
            {
                ::uPtr< ::app::Uno::UX::Property__int3*>(__this->Target())->SetRestState(::uUnbox< ::app::Uno::Int3>(::app::Uno::Int3__typeof(), candidate), (::uObject*)__this);
                return;
            }
        }
    }

    ::app::Fuse::Reactive::Marshal__ToType__int3(NULL, newValue, ::uNewDelegateNonVirt(::app::Uno::Action__int3__typeof(), (const void*)DataBinding__int3__SetValue, __this));
}

void DataBinding__int3__set_Target(DataBinding__int3* __this, ::app::Uno::UX::Property__int3* value)
{
    __this->_Target = value;
}

void DataBinding__int3__SetValue(DataBinding__int3* __this, ::app::Uno::Int3 value)
{
    ::uPtr< ::app::Uno::UX::Property__int3*>(__this->Target())->SetRestState(value, (::uObject*)__this);
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Reactive\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

DataBinding__int4__uType* DataBinding__int4__typeof()
{
    static ::uStaticStrong<DataBinding__int4__uType*> type;
    if (type != NULL) return type;

    type = (DataBinding__int4__uType*)::uAllocClassType(sizeof(DataBinding__int4__uType), "Fuse.Reactive.DataBinding<int4>", false, 2, 3, 0);

    type->SetBaseType(::app::Fuse::Reactive::Binding__typeof());
    type->__fp_NewValue = (void(*)(::app::Fuse::Reactive::Binding*, ::uObject*))DataBinding__int4__NewValue;
    type->__fp_OnRooted = (void(*)(::app::Fuse::Behavior*, ::app::Fuse::Node*))DataBinding__int4__OnRooted;
    type->__fp_OnUnrooted = (void(*)(::app::Fuse::Behavior*, ::app::Fuse::Node*))DataBinding__int4__OnUnrooted;
    type->__interface_0.__fp_OnSet = (void(*)(void*, ::uObject*))DataBinding__int4__Fuse_Reactive_IObserver_OnSet;
    type->__interface_0.__fp_OnAdd = (void(*)(void*, ::uObject*))DataBinding__int4__Fuse_Reactive_IObserver_OnAdd;
    type->__interface_0.__fp_OnNewAt = (void(*)(void*, int, ::uObject*))DataBinding__int4__Fuse_Reactive_IObserver_OnNewAt;
    type->__interface_0.__fp_OnFailed = (void(*)(void*, ::uString*))DataBinding__int4__Fuse_Reactive_IObserver_OnFailed;
    type->__interface_0.__fp_OnNewAll = (void(*)(void*, int))DataBinding__int4__Fuse_Reactive_IObserver_OnNewAll;
    type->__interface_0.__fp_OnRemove = (void(*)(void*, ::uObject*, int))DataBinding__int4__Fuse_Reactive_IObserver_OnRemove;
    type->__interface_1.__fp_OnNameChanged = (void(*)(void*, ::uObject*, ::uString*))DataBinding__int4__Fuse_Scripting_INameListener_OnNameChanged;

    type->SetInterfaces(
        ::app::Fuse::Reactive::IObserver__typeof(), offsetof(DataBinding__int4__uType, __interface_0),
        ::app::Fuse::Scripting::INameListener__typeof(), offsetof(DataBinding__int4__uType, __interface_1));

    type->SetStrongRefs(
        "_currentValue", offsetof(DataBinding__int4, _currentValue),
        "_subscription", offsetof(DataBinding__int4, _subscription),
        "_Target", offsetof(DataBinding__int4, _Target));

    type->SetFields(2,
        ::uNewField("_currentValue", NULL, offsetof(DataBinding__int4, _currentValue), ::uObject__typeof()),
        ::uNewField("_subscription", NULL, offsetof(DataBinding__int4, _subscription), ::app::Fuse::Reactive::ISubscription__typeof()));

    type->SetFunctions(3,
        ::uNewFunction("get_Target", DataBinding__int4__get_Target, 0, false, ::app::Uno::UX::Property__int4__typeof()),
        ::uNewFunction(".ctor", DataBinding__int4__New_1, 0, true, DataBinding__int4__typeof(), ::app::Uno::UX::Property__int4__typeof(), ::app::Uno::String__typeof()),
        ::uNewFunctionVoid("set_Target", DataBinding__int4__set_Target, 0, false, ::app::Uno::UX::Property__int4__typeof()));

    ::uRegisterType(type);
    return type;
}

void DataBinding__int4___ObjInit_2(DataBinding__int4* __this, ::app::Uno::UX::Property__int4* target, ::uString* key)
{
    ::app::Fuse::Reactive::Binding___ObjInit_1(__this, key);
    __this->Target(target);
}

bool DataBinding__int4__Acceptor(DataBinding__int4* __this, ::uObject* obj)
{
    return ::uIs(obj, ::app::Uno::Int4__typeof());
}

void DataBinding__int4__Fuse_Reactive_IObserver_OnAdd(DataBinding__int4* __this, ::uObject* addedValue)
{
    U_THROW(::app::Uno::Exception__New_2(NULL, ::uGetConstString("Not handled: OnAdd")));
}

void DataBinding__int4__Fuse_Reactive_IObserver_OnFailed(DataBinding__int4* __this, ::uString* message)
{
    U_THROW(::app::Uno::Exception__New_2(NULL, ::uGetConstString("Not handled: OnFailed")));
}

void DataBinding__int4__Fuse_Reactive_IObserver_OnNewAll(DataBinding__int4* __this, int length)
{
    if (length > 0)
    {
        U_THROW(::app::Uno::Exception__New_2(NULL, ::uGetConstString("Not handled: OnNewAll")));
    }
}

void DataBinding__int4__Fuse_Reactive_IObserver_OnNewAt(DataBinding__int4* __this, int index, ::uObject* value)
{
    U_THROW(::app::Uno::Exception__New_2(NULL, ::uGetConstString("Not handled: OnNewAt")));
}

void DataBinding__int4__Fuse_Reactive_IObserver_OnRemove(DataBinding__int4* __this, ::uObject* value, int index)
{
    U_THROW(::app::Uno::Exception__New_2(NULL, ::uGetConstString("Not handled: OnRemoveAt")));
}

void DataBinding__int4__Fuse_Reactive_IObserver_OnSet(DataBinding__int4* __this, ::uObject* newValue)
{
    __this->PushValue(newValue);
}

void DataBinding__int4__Fuse_Scripting_INameListener_OnNameChanged(DataBinding__int4* __this, ::uObject* obj, ::uString* name)
{
    __this->PushValue(__this->_currentValue);
}

::app::Uno::UX::Property__int4* DataBinding__int4__get_Target(DataBinding__int4* __this)
{
    return __this->_Target;
}

DataBinding__int4* DataBinding__int4__New_1(::uStatic* __this, ::app::Uno::UX::Property__int4* target, ::uString* key)
{
    DataBinding__int4* inst = (DataBinding__int4*)::uAllocObject(sizeof(DataBinding__int4), DataBinding__int4__typeof());
    inst->_ObjInit_2(target, key);
    return inst;
}

void DataBinding__int4__NewValue(DataBinding__int4* __this, ::uObject* value)
{
    if (::uIs(value, ::app::Uno::Int4__typeof()))
    {
        __this->PushValue(value);
    }
    else if (::uIs(value, ::app::Fuse::Reactive::IObservable__typeof()))
    {
        if (__this->_subscription != NULL)
        {
            ::app::Uno::IDisposable::Dispose(::uPtr< ::uObject*>(__this->_subscription));
            __this->_subscription = NULL;
        }

        ::uObject* obs = ::uAs< ::uObject*>(value, ::app::Fuse::Reactive::IObservable__typeof());

        if (obs != NULL)
        {
            __this->_subscription = ::app::Fuse::Reactive::IObservable::Subscribe(::uPtr< ::uObject*>(obs), (::uObject*)__this);
        }
    }
    else
    {
        __this->PushValue(value);
    }
}

void DataBinding__int4__OnRooted(DataBinding__int4* __this, ::app::Fuse::Node* n)
{
    ::uPtr< ::app::Uno::UX::Property__int4*>(__this->Target())->add_ValueChanged(::uNewDelegateNonVirt(::app::Uno::UX::ValueChangedHandler__int4__typeof(), (const void*)DataBinding__int4__OnValueChanged, __this));
    ::app::Fuse::Reactive::Binding__OnRooted(__this, n);
}

void DataBinding__int4__OnUnrooted(DataBinding__int4* __this, ::app::Fuse::Node* n)
{
    ::app::Fuse::Scripting::NameRegistry__RemoveListener(NULL, (::uObject*)__this);
    ::uPtr< ::app::Uno::UX::Property__int4*>(__this->Target())->remove_ValueChanged(::uNewDelegateNonVirt(::app::Uno::UX::ValueChangedHandler__int4__typeof(), (const void*)DataBinding__int4__OnValueChanged, __this));

    if (__this->_subscription != NULL)
    {
        ::app::Uno::IDisposable::Dispose(::uPtr< ::uObject*>(__this->_subscription));
        __this->_subscription = NULL;
    }

    ::app::Fuse::Reactive::Binding__OnUnrooted(__this, n);
}

void DataBinding__int4__OnValueChanged(DataBinding__int4* __this, ::uObject* sender, ::app::Uno::UX::ValueChangedArgs__int4* args)
{
    if ((__this->_subscription != NULL) && (::uPtr< ::app::Uno::UX::ValueChangedArgs__int4*>(args)->Origin() != __this))
    {
        ::app::Fuse::Reactive::ISubscription::SetExclusive(::uPtr< ::uObject*>(__this->_subscription), ::uBox(::app::Uno::Int4__typeof(), ::uPtr< ::app::Uno::UX::ValueChangedArgs__int4*>(args)->Value()));
    }
}

void DataBinding__int4__PushValue(DataBinding__int4* __this, ::uObject* newValue)
{
    __this->_currentValue = newValue;

    if (::uIs(newValue, ::app::Uno::Int4__typeof()))
    {
        ::app::Fuse::Scripting::NameRegistry__RemoveListener(NULL, (::uObject*)__this);
        ::uPtr< ::app::Uno::UX::Property__int4*>(__this->Target())->SetRestState(::uUnbox< ::app::Uno::Int4>(::app::Uno::Int4__typeof(), newValue), (::uObject*)__this);
        return;
    }

    ::uString* name = ::uAs< ::uString*>(newValue, ::app::Uno::String__typeof());

    if (::app::Uno::String__op_Inequality(NULL, name, NULL) && (__this->Node() != NULL))
    {
        ::app::Fuse::Scripting::NameRegistry__AddListener(NULL, name, (::uObject*)__this);
        ::app::Fuse::Node* k = ::uPtr< ::app::Fuse::Node*>(__this->Node())->FindNodeByName(::uCast< ::uString*>(newValue, ::app::Uno::String__typeof()));

        if (::uIs(k, ::app::Uno::Int4__typeof()))
        {
            ::uPtr< ::app::Uno::UX::Property__int4*>(__this->Target())->SetRestState(::uUnbox< ::app::Uno::Int4>(::app::Uno::Int4__typeof(), (::uObject*)k), (::uObject*)__this);
            return;
        }
        else
        {
            ::uObject* candidate = ::uPtr< ::app::Fuse::Node*>(__this->Node())->FindObjectByName(::uCast< ::uString*>(newValue, ::app::Uno::String__typeof()), ::uNewDelegateNonVirt(::app::Uno::Predicate__object__typeof(), (const void*)DataBinding__int4__Acceptor, __this));

            if (::uIs(candidate, ::app::Uno::Int4__typeof()))
            {
                ::uPtr< ::app::Uno::UX::Property__int4*>(__this->Target())->SetRestState(::uUnbox< ::app::Uno::Int4>(::app::Uno::Int4__typeof(), candidate), (::uObject*)__this);
                return;
            }
        }
    }

    ::app::Fuse::Reactive::Marshal__ToType__int4(NULL, newValue, ::uNewDelegateNonVirt(::app::Uno::Action__int4__typeof(), (const void*)DataBinding__int4__SetValue, __this));
}

void DataBinding__int4__set_Target(DataBinding__int4* __this, ::app::Uno::UX::Property__int4* value)
{
    __this->_Target = value;
}

void DataBinding__int4__SetValue(DataBinding__int4* __this, ::app::Uno::Int4 value)
{
    ::uPtr< ::app::Uno::UX::Property__int4*>(__this->Target())->SetRestState(value, (::uObject*)__this);
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Reactive\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

DataBinding__long__uType* DataBinding__long__typeof()
{
    static ::uStaticStrong<DataBinding__long__uType*> type;
    if (type != NULL) return type;

    type = (DataBinding__long__uType*)::uAllocClassType(sizeof(DataBinding__long__uType), "Fuse.Reactive.DataBinding<long>", false, 2, 3, 0);

    type->SetBaseType(::app::Fuse::Reactive::Binding__typeof());
    type->__fp_NewValue = (void(*)(::app::Fuse::Reactive::Binding*, ::uObject*))DataBinding__long__NewValue;
    type->__fp_OnRooted = (void(*)(::app::Fuse::Behavior*, ::app::Fuse::Node*))DataBinding__long__OnRooted;
    type->__fp_OnUnrooted = (void(*)(::app::Fuse::Behavior*, ::app::Fuse::Node*))DataBinding__long__OnUnrooted;
    type->__interface_0.__fp_OnSet = (void(*)(void*, ::uObject*))DataBinding__long__Fuse_Reactive_IObserver_OnSet;
    type->__interface_0.__fp_OnAdd = (void(*)(void*, ::uObject*))DataBinding__long__Fuse_Reactive_IObserver_OnAdd;
    type->__interface_0.__fp_OnNewAt = (void(*)(void*, int, ::uObject*))DataBinding__long__Fuse_Reactive_IObserver_OnNewAt;
    type->__interface_0.__fp_OnFailed = (void(*)(void*, ::uString*))DataBinding__long__Fuse_Reactive_IObserver_OnFailed;
    type->__interface_0.__fp_OnNewAll = (void(*)(void*, int))DataBinding__long__Fuse_Reactive_IObserver_OnNewAll;
    type->__interface_0.__fp_OnRemove = (void(*)(void*, ::uObject*, int))DataBinding__long__Fuse_Reactive_IObserver_OnRemove;
    type->__interface_1.__fp_OnNameChanged = (void(*)(void*, ::uObject*, ::uString*))DataBinding__long__Fuse_Scripting_INameListener_OnNameChanged;

    type->SetInterfaces(
        ::app::Fuse::Reactive::IObserver__typeof(), offsetof(DataBinding__long__uType, __interface_0),
        ::app::Fuse::Scripting::INameListener__typeof(), offsetof(DataBinding__long__uType, __interface_1));

    type->SetStrongRefs(
        "_currentValue", offsetof(DataBinding__long, _currentValue),
        "_subscription", offsetof(DataBinding__long, _subscription),
        "_Target", offsetof(DataBinding__long, _Target));

    type->SetFields(2,
        ::uNewField("_currentValue", NULL, offsetof(DataBinding__long, _currentValue), ::uObject__typeof()),
        ::uNewField("_subscription", NULL, offsetof(DataBinding__long, _subscription), ::app::Fuse::Reactive::ISubscription__typeof()));

    type->SetFunctions(3,
        ::uNewFunction("get_Target", DataBinding__long__get_Target, 0, false, ::app::Uno::UX::Property__long__typeof()),
        ::uNewFunction(".ctor", DataBinding__long__New_1, 0, true, DataBinding__long__typeof(), ::app::Uno::UX::Property__long__typeof(), ::app::Uno::String__typeof()),
        ::uNewFunctionVoid("set_Target", DataBinding__long__set_Target, 0, false, ::app::Uno::UX::Property__long__typeof()));

    ::uRegisterType(type);
    return type;
}

void DataBinding__long___ObjInit_2(DataBinding__long* __this, ::app::Uno::UX::Property__long* target, ::uString* key)
{
    ::app::Fuse::Reactive::Binding___ObjInit_1(__this, key);
    __this->Target(target);
}

bool DataBinding__long__Acceptor(DataBinding__long* __this, ::uObject* obj)
{
    return ::uIs(obj, ::app::Uno::Long__typeof());
}

void DataBinding__long__Fuse_Reactive_IObserver_OnAdd(DataBinding__long* __this, ::uObject* addedValue)
{
    U_THROW(::app::Uno::Exception__New_2(NULL, ::uGetConstString("Not handled: OnAdd")));
}

void DataBinding__long__Fuse_Reactive_IObserver_OnFailed(DataBinding__long* __this, ::uString* message)
{
    U_THROW(::app::Uno::Exception__New_2(NULL, ::uGetConstString("Not handled: OnFailed")));
}

void DataBinding__long__Fuse_Reactive_IObserver_OnNewAll(DataBinding__long* __this, int length)
{
    if (length > 0)
    {
        U_THROW(::app::Uno::Exception__New_2(NULL, ::uGetConstString("Not handled: OnNewAll")));
    }
}

void DataBinding__long__Fuse_Reactive_IObserver_OnNewAt(DataBinding__long* __this, int index, ::uObject* value)
{
    U_THROW(::app::Uno::Exception__New_2(NULL, ::uGetConstString("Not handled: OnNewAt")));
}

void DataBinding__long__Fuse_Reactive_IObserver_OnRemove(DataBinding__long* __this, ::uObject* value, int index)
{
    U_THROW(::app::Uno::Exception__New_2(NULL, ::uGetConstString("Not handled: OnRemoveAt")));
}

void DataBinding__long__Fuse_Reactive_IObserver_OnSet(DataBinding__long* __this, ::uObject* newValue)
{
    __this->PushValue(newValue);
}

void DataBinding__long__Fuse_Scripting_INameListener_OnNameChanged(DataBinding__long* __this, ::uObject* obj, ::uString* name)
{
    __this->PushValue(__this->_currentValue);
}

::app::Uno::UX::Property__long* DataBinding__long__get_Target(DataBinding__long* __this)
{
    return __this->_Target;
}

DataBinding__long* DataBinding__long__New_1(::uStatic* __this, ::app::Uno::UX::Property__long* target, ::uString* key)
{
    DataBinding__long* inst = (DataBinding__long*)::uAllocObject(sizeof(DataBinding__long), DataBinding__long__typeof());
    inst->_ObjInit_2(target, key);
    return inst;
}

void DataBinding__long__NewValue(DataBinding__long* __this, ::uObject* value)
{
    if (::uIs(value, ::app::Uno::Long__typeof()))
    {
        __this->PushValue(value);
    }
    else if (::uIs(value, ::app::Fuse::Reactive::IObservable__typeof()))
    {
        if (__this->_subscription != NULL)
        {
            ::app::Uno::IDisposable::Dispose(::uPtr< ::uObject*>(__this->_subscription));
            __this->_subscription = NULL;
        }

        ::uObject* obs = ::uAs< ::uObject*>(value, ::app::Fuse::Reactive::IObservable__typeof());

        if (obs != NULL)
        {
            __this->_subscription = ::app::Fuse::Reactive::IObservable::Subscribe(::uPtr< ::uObject*>(obs), (::uObject*)__this);
        }
    }
    else
    {
        __this->PushValue(value);
    }
}

void DataBinding__long__OnRooted(DataBinding__long* __this, ::app::Fuse::Node* n)
{
    ::uPtr< ::app::Uno::UX::Property__long*>(__this->Target())->add_ValueChanged(::uNewDelegateNonVirt(::app::Uno::UX::ValueChangedHandler__long__typeof(), (const void*)DataBinding__long__OnValueChanged, __this));
    ::app::Fuse::Reactive::Binding__OnRooted(__this, n);
}

void DataBinding__long__OnUnrooted(DataBinding__long* __this, ::app::Fuse::Node* n)
{
    ::app::Fuse::Scripting::NameRegistry__RemoveListener(NULL, (::uObject*)__this);
    ::uPtr< ::app::Uno::UX::Property__long*>(__this->Target())->remove_ValueChanged(::uNewDelegateNonVirt(::app::Uno::UX::ValueChangedHandler__long__typeof(), (const void*)DataBinding__long__OnValueChanged, __this));

    if (__this->_subscription != NULL)
    {
        ::app::Uno::IDisposable::Dispose(::uPtr< ::uObject*>(__this->_subscription));
        __this->_subscription = NULL;
    }

    ::app::Fuse::Reactive::Binding__OnUnrooted(__this, n);
}

void DataBinding__long__OnValueChanged(DataBinding__long* __this, ::uObject* sender, ::app::Uno::UX::ValueChangedArgs__long* args)
{
    if ((__this->_subscription != NULL) && (::uPtr< ::app::Uno::UX::ValueChangedArgs__long*>(args)->Origin() != __this))
    {
        ::app::Fuse::Reactive::ISubscription::SetExclusive(::uPtr< ::uObject*>(__this->_subscription), ::uBox< ::uLong>(::app::Uno::Long__typeof(), ::uPtr< ::app::Uno::UX::ValueChangedArgs__long*>(args)->Value()));
    }
}

void DataBinding__long__PushValue(DataBinding__long* __this, ::uObject* newValue)
{
    __this->_currentValue = newValue;

    if (::uIs(newValue, ::app::Uno::Long__typeof()))
    {
        ::app::Fuse::Scripting::NameRegistry__RemoveListener(NULL, (::uObject*)__this);
        ::uPtr< ::app::Uno::UX::Property__long*>(__this->Target())->SetRestState(::uUnbox< ::uLong>(::app::Uno::Long__typeof(), newValue), (::uObject*)__this);
        return;
    }

    ::uString* name = ::uAs< ::uString*>(newValue, ::app::Uno::String__typeof());

    if (::app::Uno::String__op_Inequality(NULL, name, NULL) && (__this->Node() != NULL))
    {
        ::app::Fuse::Scripting::NameRegistry__AddListener(NULL, name, (::uObject*)__this);
        ::app::Fuse::Node* k = ::uPtr< ::app::Fuse::Node*>(__this->Node())->FindNodeByName(::uCast< ::uString*>(newValue, ::app::Uno::String__typeof()));

        if (::uIs(k, ::app::Uno::Long__typeof()))
        {
            ::uPtr< ::app::Uno::UX::Property__long*>(__this->Target())->SetRestState(::uUnbox< ::uLong>(::app::Uno::Long__typeof(), (::uObject*)k), (::uObject*)__this);
            return;
        }
        else
        {
            ::uObject* candidate = ::uPtr< ::app::Fuse::Node*>(__this->Node())->FindObjectByName(::uCast< ::uString*>(newValue, ::app::Uno::String__typeof()), ::uNewDelegateNonVirt(::app::Uno::Predicate__object__typeof(), (const void*)DataBinding__long__Acceptor, __this));

            if (::uIs(candidate, ::app::Uno::Long__typeof()))
            {
                ::uPtr< ::app::Uno::UX::Property__long*>(__this->Target())->SetRestState(::uUnbox< ::uLong>(::app::Uno::Long__typeof(), candidate), (::uObject*)__this);
                return;
            }
        }
    }

    ::app::Fuse::Reactive::Marshal__ToType__long(NULL, newValue, ::uNewDelegateNonVirt(::app::Uno::Action__long__typeof(), (const void*)DataBinding__long__SetValue, __this));
}

void DataBinding__long__set_Target(DataBinding__long* __this, ::app::Uno::UX::Property__long* value)
{
    __this->_Target = value;
}

void DataBinding__long__SetValue(DataBinding__long* __this, ::uLong value)
{
    ::uPtr< ::app::Uno::UX::Property__long*>(__this->Target())->SetRestState(value, (::uObject*)__this);
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Reactive\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

DataBinding__object__uType* DataBinding__object__typeof()
{
    static ::uStaticStrong<DataBinding__object__uType*> type;
    if (type != NULL) return type;

    type = (DataBinding__object__uType*)::uAllocClassType(sizeof(DataBinding__object__uType), "Fuse.Reactive.DataBinding<object>", false, 2, 3, 0);

    type->SetBaseType(::app::Fuse::Reactive::Binding__typeof());
    type->__fp_NewValue = (void(*)(::app::Fuse::Reactive::Binding*, ::uObject*))DataBinding__object__NewValue;
    type->__fp_OnRooted = (void(*)(::app::Fuse::Behavior*, ::app::Fuse::Node*))DataBinding__object__OnRooted;
    type->__fp_OnUnrooted = (void(*)(::app::Fuse::Behavior*, ::app::Fuse::Node*))DataBinding__object__OnUnrooted;
    type->__interface_0.__fp_OnSet = (void(*)(void*, ::uObject*))DataBinding__object__Fuse_Reactive_IObserver_OnSet;
    type->__interface_0.__fp_OnAdd = (void(*)(void*, ::uObject*))DataBinding__object__Fuse_Reactive_IObserver_OnAdd;
    type->__interface_0.__fp_OnNewAt = (void(*)(void*, int, ::uObject*))DataBinding__object__Fuse_Reactive_IObserver_OnNewAt;
    type->__interface_0.__fp_OnFailed = (void(*)(void*, ::uString*))DataBinding__object__Fuse_Reactive_IObserver_OnFailed;
    type->__interface_0.__fp_OnNewAll = (void(*)(void*, int))DataBinding__object__Fuse_Reactive_IObserver_OnNewAll;
    type->__interface_0.__fp_OnRemove = (void(*)(void*, ::uObject*, int))DataBinding__object__Fuse_Reactive_IObserver_OnRemove;
    type->__interface_1.__fp_OnNameChanged = (void(*)(void*, ::uObject*, ::uString*))DataBinding__object__Fuse_Scripting_INameListener_OnNameChanged;

    type->SetInterfaces(
        ::app::Fuse::Reactive::IObserver__typeof(), offsetof(DataBinding__object__uType, __interface_0),
        ::app::Fuse::Scripting::INameListener__typeof(), offsetof(DataBinding__object__uType, __interface_1));

    type->SetStrongRefs(
        "_currentValue", offsetof(DataBinding__object, _currentValue),
        "_subscription", offsetof(DataBinding__object, _subscription),
        "_Target", offsetof(DataBinding__object, _Target));

    type->SetFields(2,
        ::uNewField("_currentValue", NULL, offsetof(DataBinding__object, _currentValue), ::uObject__typeof()),
        ::uNewField("_subscription", NULL, offsetof(DataBinding__object, _subscription), ::app::Fuse::Reactive::ISubscription__typeof()));

    type->SetFunctions(3,
        ::uNewFunction("get_Target", DataBinding__object__get_Target, 0, false, ::app::Uno::UX::Property__object__typeof()),
        ::uNewFunction(".ctor", DataBinding__object__New_1, 0, true, DataBinding__object__typeof(), ::app::Uno::UX::Property__object__typeof(), ::app::Uno::String__typeof()),
        ::uNewFunctionVoid("set_Target", DataBinding__object__set_Target, 0, false, ::app::Uno::UX::Property__object__typeof()));

    ::uRegisterType(type);
    return type;
}

void DataBinding__object___ObjInit_2(DataBinding__object* __this, ::app::Uno::UX::Property__object* target, ::uString* key)
{
    ::app::Fuse::Reactive::Binding___ObjInit_1(__this, key);
    __this->Target(target);
}

bool DataBinding__object__Acceptor(DataBinding__object* __this, ::uObject* obj)
{
    return ::uIs(obj, ::uObject__typeof());
}

void DataBinding__object__Fuse_Reactive_IObserver_OnAdd(DataBinding__object* __this, ::uObject* addedValue)
{
    U_THROW(::app::Uno::Exception__New_2(NULL, ::uGetConstString("Not handled: OnAdd")));
}

void DataBinding__object__Fuse_Reactive_IObserver_OnFailed(DataBinding__object* __this, ::uString* message)
{
    U_THROW(::app::Uno::Exception__New_2(NULL, ::uGetConstString("Not handled: OnFailed")));
}

void DataBinding__object__Fuse_Reactive_IObserver_OnNewAll(DataBinding__object* __this, int length)
{
    if (length > 0)
    {
        U_THROW(::app::Uno::Exception__New_2(NULL, ::uGetConstString("Not handled: OnNewAll")));
    }
}

void DataBinding__object__Fuse_Reactive_IObserver_OnNewAt(DataBinding__object* __this, int index, ::uObject* value)
{
    U_THROW(::app::Uno::Exception__New_2(NULL, ::uGetConstString("Not handled: OnNewAt")));
}

void DataBinding__object__Fuse_Reactive_IObserver_OnRemove(DataBinding__object* __this, ::uObject* value, int index)
{
    U_THROW(::app::Uno::Exception__New_2(NULL, ::uGetConstString("Not handled: OnRemoveAt")));
}

void DataBinding__object__Fuse_Reactive_IObserver_OnSet(DataBinding__object* __this, ::uObject* newValue)
{
    __this->PushValue(newValue);
}

void DataBinding__object__Fuse_Scripting_INameListener_OnNameChanged(DataBinding__object* __this, ::uObject* obj, ::uString* name)
{
    __this->PushValue(__this->_currentValue);
}

::app::Uno::UX::Property__object* DataBinding__object__get_Target(DataBinding__object* __this)
{
    return __this->_Target;
}

DataBinding__object* DataBinding__object__New_1(::uStatic* __this, ::app::Uno::UX::Property__object* target, ::uString* key)
{
    DataBinding__object* inst = (DataBinding__object*)::uAllocObject(sizeof(DataBinding__object), DataBinding__object__typeof());
    inst->_ObjInit_2(target, key);
    return inst;
}

void DataBinding__object__NewValue(DataBinding__object* __this, ::uObject* value)
{
    if (::uIs(value, ::uObject__typeof()))
    {
        __this->PushValue(value);
    }
    else if (::uIs(value, ::app::Fuse::Reactive::IObservable__typeof()))
    {
        if (__this->_subscription != NULL)
        {
            ::app::Uno::IDisposable::Dispose(::uPtr< ::uObject*>(__this->_subscription));
            __this->_subscription = NULL;
        }

        ::uObject* obs = ::uAs< ::uObject*>(value, ::app::Fuse::Reactive::IObservable__typeof());

        if (obs != NULL)
        {
            __this->_subscription = ::app::Fuse::Reactive::IObservable::Subscribe(::uPtr< ::uObject*>(obs), (::uObject*)__this);
        }
    }
    else
    {
        __this->PushValue(value);
    }
}

void DataBinding__object__OnRooted(DataBinding__object* __this, ::app::Fuse::Node* n)
{
    ::uPtr< ::app::Uno::UX::Property__object*>(__this->Target())->add_ValueChanged(::uNewDelegateNonVirt(::app::Uno::UX::ValueChangedHandler__object__typeof(), (const void*)DataBinding__object__OnValueChanged, __this));
    ::app::Fuse::Reactive::Binding__OnRooted(__this, n);
}

void DataBinding__object__OnUnrooted(DataBinding__object* __this, ::app::Fuse::Node* n)
{
    ::app::Fuse::Scripting::NameRegistry__RemoveListener(NULL, (::uObject*)__this);
    ::uPtr< ::app::Uno::UX::Property__object*>(__this->Target())->remove_ValueChanged(::uNewDelegateNonVirt(::app::Uno::UX::ValueChangedHandler__object__typeof(), (const void*)DataBinding__object__OnValueChanged, __this));

    if (__this->_subscription != NULL)
    {
        ::app::Uno::IDisposable::Dispose(::uPtr< ::uObject*>(__this->_subscription));
        __this->_subscription = NULL;
    }

    ::app::Fuse::Reactive::Binding__OnUnrooted(__this, n);
}

void DataBinding__object__OnValueChanged(DataBinding__object* __this, ::uObject* sender, ::app::Uno::UX::ValueChangedArgs__object* args)
{
    if ((__this->_subscription != NULL) && (::uPtr< ::app::Uno::UX::ValueChangedArgs__object*>(args)->Origin() != __this))
    {
        ::app::Fuse::Reactive::ISubscription::SetExclusive(::uPtr< ::uObject*>(__this->_subscription), ::uPtr< ::app::Uno::UX::ValueChangedArgs__object*>(args)->Value());
    }
}

void DataBinding__object__PushValue(DataBinding__object* __this, ::uObject* newValue)
{
    __this->_currentValue = newValue;

    if (::uIs(newValue, ::uObject__typeof()))
    {
        ::app::Fuse::Scripting::NameRegistry__RemoveListener(NULL, (::uObject*)__this);
        ::uPtr< ::app::Uno::UX::Property__object*>(__this->Target())->SetRestState(newValue, (::uObject*)__this);
        return;
    }

    ::uString* name = ::uAs< ::uString*>(newValue, ::app::Uno::String__typeof());

    if (::app::Uno::String__op_Inequality(NULL, name, NULL) && (__this->Node() != NULL))
    {
        ::app::Fuse::Scripting::NameRegistry__AddListener(NULL, name, (::uObject*)__this);
        ::app::Fuse::Node* k = ::uPtr< ::app::Fuse::Node*>(__this->Node())->FindNodeByName(::uCast< ::uString*>(newValue, ::app::Uno::String__typeof()));

        if (::uIs(k, ::uObject__typeof()))
        {
            ::uPtr< ::app::Uno::UX::Property__object*>(__this->Target())->SetRestState((::uObject*)k, (::uObject*)__this);
            return;
        }
        else
        {
            ::uObject* candidate = ::uPtr< ::app::Fuse::Node*>(__this->Node())->FindObjectByName(::uCast< ::uString*>(newValue, ::app::Uno::String__typeof()), ::uNewDelegateNonVirt(::app::Uno::Predicate__object__typeof(), (const void*)DataBinding__object__Acceptor, __this));

            if (::uIs(candidate, ::uObject__typeof()))
            {
                ::uPtr< ::app::Uno::UX::Property__object*>(__this->Target())->SetRestState(candidate, (::uObject*)__this);
                return;
            }
        }
    }

    ::app::Fuse::Reactive::Marshal__ToType__object(NULL, newValue, ::uNewDelegateNonVirt(::app::Uno::Action__object__typeof(), (const void*)DataBinding__object__SetValue, __this));
}

void DataBinding__object__set_Target(DataBinding__object* __this, ::app::Uno::UX::Property__object* value)
{
    __this->_Target = value;
}

void DataBinding__object__SetValue(DataBinding__object* __this, ::uObject* value)
{
    ::uPtr< ::app::Uno::UX::Property__object*>(__this->Target())->SetRestState(value, (::uObject*)__this);
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Reactive\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

DataBinding__short__uType* DataBinding__short__typeof()
{
    static ::uStaticStrong<DataBinding__short__uType*> type;
    if (type != NULL) return type;

    type = (DataBinding__short__uType*)::uAllocClassType(sizeof(DataBinding__short__uType), "Fuse.Reactive.DataBinding<short>", false, 2, 3, 0);

    type->SetBaseType(::app::Fuse::Reactive::Binding__typeof());
    type->__fp_NewValue = (void(*)(::app::Fuse::Reactive::Binding*, ::uObject*))DataBinding__short__NewValue;
    type->__fp_OnRooted = (void(*)(::app::Fuse::Behavior*, ::app::Fuse::Node*))DataBinding__short__OnRooted;
    type->__fp_OnUnrooted = (void(*)(::app::Fuse::Behavior*, ::app::Fuse::Node*))DataBinding__short__OnUnrooted;
    type->__interface_0.__fp_OnSet = (void(*)(void*, ::uObject*))DataBinding__short__Fuse_Reactive_IObserver_OnSet;
    type->__interface_0.__fp_OnAdd = (void(*)(void*, ::uObject*))DataBinding__short__Fuse_Reactive_IObserver_OnAdd;
    type->__interface_0.__fp_OnNewAt = (void(*)(void*, int, ::uObject*))DataBinding__short__Fuse_Reactive_IObserver_OnNewAt;
    type->__interface_0.__fp_OnFailed = (void(*)(void*, ::uString*))DataBinding__short__Fuse_Reactive_IObserver_OnFailed;
    type->__interface_0.__fp_OnNewAll = (void(*)(void*, int))DataBinding__short__Fuse_Reactive_IObserver_OnNewAll;
    type->__interface_0.__fp_OnRemove = (void(*)(void*, ::uObject*, int))DataBinding__short__Fuse_Reactive_IObserver_OnRemove;
    type->__interface_1.__fp_OnNameChanged = (void(*)(void*, ::uObject*, ::uString*))DataBinding__short__Fuse_Scripting_INameListener_OnNameChanged;

    type->SetInterfaces(
        ::app::Fuse::Reactive::IObserver__typeof(), offsetof(DataBinding__short__uType, __interface_0),
        ::app::Fuse::Scripting::INameListener__typeof(), offsetof(DataBinding__short__uType, __interface_1));

    type->SetStrongRefs(
        "_currentValue", offsetof(DataBinding__short, _currentValue),
        "_subscription", offsetof(DataBinding__short, _subscription),
        "_Target", offsetof(DataBinding__short, _Target));

    type->SetFields(2,
        ::uNewField("_currentValue", NULL, offsetof(DataBinding__short, _currentValue), ::uObject__typeof()),
        ::uNewField("_subscription", NULL, offsetof(DataBinding__short, _subscription), ::app::Fuse::Reactive::ISubscription__typeof()));

    type->SetFunctions(3,
        ::uNewFunction("get_Target", DataBinding__short__get_Target, 0, false, ::app::Uno::UX::Property__short__typeof()),
        ::uNewFunction(".ctor", DataBinding__short__New_1, 0, true, DataBinding__short__typeof(), ::app::Uno::UX::Property__short__typeof(), ::app::Uno::String__typeof()),
        ::uNewFunctionVoid("set_Target", DataBinding__short__set_Target, 0, false, ::app::Uno::UX::Property__short__typeof()));

    ::uRegisterType(type);
    return type;
}

void DataBinding__short___ObjInit_2(DataBinding__short* __this, ::app::Uno::UX::Property__short* target, ::uString* key)
{
    ::app::Fuse::Reactive::Binding___ObjInit_1(__this, key);
    __this->Target(target);
}

bool DataBinding__short__Acceptor(DataBinding__short* __this, ::uObject* obj)
{
    return ::uIs(obj, ::app::Uno::Short__typeof());
}

void DataBinding__short__Fuse_Reactive_IObserver_OnAdd(DataBinding__short* __this, ::uObject* addedValue)
{
    U_THROW(::app::Uno::Exception__New_2(NULL, ::uGetConstString("Not handled: OnAdd")));
}

void DataBinding__short__Fuse_Reactive_IObserver_OnFailed(DataBinding__short* __this, ::uString* message)
{
    U_THROW(::app::Uno::Exception__New_2(NULL, ::uGetConstString("Not handled: OnFailed")));
}

void DataBinding__short__Fuse_Reactive_IObserver_OnNewAll(DataBinding__short* __this, int length)
{
    if (length > 0)
    {
        U_THROW(::app::Uno::Exception__New_2(NULL, ::uGetConstString("Not handled: OnNewAll")));
    }
}

void DataBinding__short__Fuse_Reactive_IObserver_OnNewAt(DataBinding__short* __this, int index, ::uObject* value)
{
    U_THROW(::app::Uno::Exception__New_2(NULL, ::uGetConstString("Not handled: OnNewAt")));
}

void DataBinding__short__Fuse_Reactive_IObserver_OnRemove(DataBinding__short* __this, ::uObject* value, int index)
{
    U_THROW(::app::Uno::Exception__New_2(NULL, ::uGetConstString("Not handled: OnRemoveAt")));
}

void DataBinding__short__Fuse_Reactive_IObserver_OnSet(DataBinding__short* __this, ::uObject* newValue)
{
    __this->PushValue(newValue);
}

void DataBinding__short__Fuse_Scripting_INameListener_OnNameChanged(DataBinding__short* __this, ::uObject* obj, ::uString* name)
{
    __this->PushValue(__this->_currentValue);
}

::app::Uno::UX::Property__short* DataBinding__short__get_Target(DataBinding__short* __this)
{
    return __this->_Target;
}

DataBinding__short* DataBinding__short__New_1(::uStatic* __this, ::app::Uno::UX::Property__short* target, ::uString* key)
{
    DataBinding__short* inst = (DataBinding__short*)::uAllocObject(sizeof(DataBinding__short), DataBinding__short__typeof());
    inst->_ObjInit_2(target, key);
    return inst;
}

void DataBinding__short__NewValue(DataBinding__short* __this, ::uObject* value)
{
    if (::uIs(value, ::app::Uno::Short__typeof()))
    {
        __this->PushValue(value);
    }
    else if (::uIs(value, ::app::Fuse::Reactive::IObservable__typeof()))
    {
        if (__this->_subscription != NULL)
        {
            ::app::Uno::IDisposable::Dispose(::uPtr< ::uObject*>(__this->_subscription));
            __this->_subscription = NULL;
        }

        ::uObject* obs = ::uAs< ::uObject*>(value, ::app::Fuse::Reactive::IObservable__typeof());

        if (obs != NULL)
        {
            __this->_subscription = ::app::Fuse::Reactive::IObservable::Subscribe(::uPtr< ::uObject*>(obs), (::uObject*)__this);
        }
    }
    else
    {
        __this->PushValue(value);
    }
}

void DataBinding__short__OnRooted(DataBinding__short* __this, ::app::Fuse::Node* n)
{
    ::uPtr< ::app::Uno::UX::Property__short*>(__this->Target())->add_ValueChanged(::uNewDelegateNonVirt(::app::Uno::UX::ValueChangedHandler__short__typeof(), (const void*)DataBinding__short__OnValueChanged, __this));
    ::app::Fuse::Reactive::Binding__OnRooted(__this, n);
}

void DataBinding__short__OnUnrooted(DataBinding__short* __this, ::app::Fuse::Node* n)
{
    ::app::Fuse::Scripting::NameRegistry__RemoveListener(NULL, (::uObject*)__this);
    ::uPtr< ::app::Uno::UX::Property__short*>(__this->Target())->remove_ValueChanged(::uNewDelegateNonVirt(::app::Uno::UX::ValueChangedHandler__short__typeof(), (const void*)DataBinding__short__OnValueChanged, __this));

    if (__this->_subscription != NULL)
    {
        ::app::Uno::IDisposable::Dispose(::uPtr< ::uObject*>(__this->_subscription));
        __this->_subscription = NULL;
    }

    ::app::Fuse::Reactive::Binding__OnUnrooted(__this, n);
}

void DataBinding__short__OnValueChanged(DataBinding__short* __this, ::uObject* sender, ::app::Uno::UX::ValueChangedArgs__short* args)
{
    if ((__this->_subscription != NULL) && (::uPtr< ::app::Uno::UX::ValueChangedArgs__short*>(args)->Origin() != __this))
    {
        ::app::Fuse::Reactive::ISubscription::SetExclusive(::uPtr< ::uObject*>(__this->_subscription), ::uBox< ::uShort>(::app::Uno::Short__typeof(), ::uPtr< ::app::Uno::UX::ValueChangedArgs__short*>(args)->Value()));
    }
}

void DataBinding__short__PushValue(DataBinding__short* __this, ::uObject* newValue)
{
    __this->_currentValue = newValue;

    if (::uIs(newValue, ::app::Uno::Short__typeof()))
    {
        ::app::Fuse::Scripting::NameRegistry__RemoveListener(NULL, (::uObject*)__this);
        ::uPtr< ::app::Uno::UX::Property__short*>(__this->Target())->SetRestState(::uUnbox< ::uShort>(::app::Uno::Short__typeof(), newValue), (::uObject*)__this);
        return;
    }

    ::uString* name = ::uAs< ::uString*>(newValue, ::app::Uno::String__typeof());

    if (::app::Uno::String__op_Inequality(NULL, name, NULL) && (__this->Node() != NULL))
    {
        ::app::Fuse::Scripting::NameRegistry__AddListener(NULL, name, (::uObject*)__this);
        ::app::Fuse::Node* k = ::uPtr< ::app::Fuse::Node*>(__this->Node())->FindNodeByName(::uCast< ::uString*>(newValue, ::app::Uno::String__typeof()));

        if (::uIs(k, ::app::Uno::Short__typeof()))
        {
            ::uPtr< ::app::Uno::UX::Property__short*>(__this->Target())->SetRestState(::uUnbox< ::uShort>(::app::Uno::Short__typeof(), (::uObject*)k), (::uObject*)__this);
            return;
        }
        else
        {
            ::uObject* candidate = ::uPtr< ::app::Fuse::Node*>(__this->Node())->FindObjectByName(::uCast< ::uString*>(newValue, ::app::Uno::String__typeof()), ::uNewDelegateNonVirt(::app::Uno::Predicate__object__typeof(), (const void*)DataBinding__short__Acceptor, __this));

            if (::uIs(candidate, ::app::Uno::Short__typeof()))
            {
                ::uPtr< ::app::Uno::UX::Property__short*>(__this->Target())->SetRestState(::uUnbox< ::uShort>(::app::Uno::Short__typeof(), candidate), (::uObject*)__this);
                return;
            }
        }
    }

    ::app::Fuse::Reactive::Marshal__ToType__short(NULL, newValue, ::uNewDelegateNonVirt(::app::Uno::Action__short__typeof(), (const void*)DataBinding__short__SetValue, __this));
}

void DataBinding__short__set_Target(DataBinding__short* __this, ::app::Uno::UX::Property__short* value)
{
    __this->_Target = value;
}

void DataBinding__short__SetValue(DataBinding__short* __this, ::uShort value)
{
    ::uPtr< ::app::Uno::UX::Property__short*>(__this->Target())->SetRestState(value, (::uObject*)__this);
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Reactive\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

DataBinding__string__uType* DataBinding__string__typeof()
{
    static ::uStaticStrong<DataBinding__string__uType*> type;
    if (type != NULL) return type;

    type = (DataBinding__string__uType*)::uAllocClassType(sizeof(DataBinding__string__uType), "Fuse.Reactive.DataBinding<string>", false, 2, 3, 0);

    type->SetBaseType(::app::Fuse::Reactive::Binding__typeof());
    type->__fp_NewValue = (void(*)(::app::Fuse::Reactive::Binding*, ::uObject*))DataBinding__string__NewValue;
    type->__fp_OnRooted = (void(*)(::app::Fuse::Behavior*, ::app::Fuse::Node*))DataBinding__string__OnRooted;
    type->__fp_OnUnrooted = (void(*)(::app::Fuse::Behavior*, ::app::Fuse::Node*))DataBinding__string__OnUnrooted;
    type->__interface_0.__fp_OnSet = (void(*)(void*, ::uObject*))DataBinding__string__Fuse_Reactive_IObserver_OnSet;
    type->__interface_0.__fp_OnAdd = (void(*)(void*, ::uObject*))DataBinding__string__Fuse_Reactive_IObserver_OnAdd;
    type->__interface_0.__fp_OnNewAt = (void(*)(void*, int, ::uObject*))DataBinding__string__Fuse_Reactive_IObserver_OnNewAt;
    type->__interface_0.__fp_OnFailed = (void(*)(void*, ::uString*))DataBinding__string__Fuse_Reactive_IObserver_OnFailed;
    type->__interface_0.__fp_OnNewAll = (void(*)(void*, int))DataBinding__string__Fuse_Reactive_IObserver_OnNewAll;
    type->__interface_0.__fp_OnRemove = (void(*)(void*, ::uObject*, int))DataBinding__string__Fuse_Reactive_IObserver_OnRemove;
    type->__interface_1.__fp_OnNameChanged = (void(*)(void*, ::uObject*, ::uString*))DataBinding__string__Fuse_Scripting_INameListener_OnNameChanged;

    type->SetInterfaces(
        ::app::Fuse::Reactive::IObserver__typeof(), offsetof(DataBinding__string__uType, __interface_0),
        ::app::Fuse::Scripting::INameListener__typeof(), offsetof(DataBinding__string__uType, __interface_1));

    type->SetStrongRefs(
        "_currentValue", offsetof(DataBinding__string, _currentValue),
        "_subscription", offsetof(DataBinding__string, _subscription),
        "_Target", offsetof(DataBinding__string, _Target));

    type->SetFields(2,
        ::uNewField("_currentValue", NULL, offsetof(DataBinding__string, _currentValue), ::uObject__typeof()),
        ::uNewField("_subscription", NULL, offsetof(DataBinding__string, _subscription), ::app::Fuse::Reactive::ISubscription__typeof()));

    type->SetFunctions(3,
        ::uNewFunction("get_Target", DataBinding__string__get_Target, 0, false, ::app::Uno::UX::Property__string__typeof()),
        ::uNewFunction(".ctor", DataBinding__string__New_1, 0, true, DataBinding__string__typeof(), ::app::Uno::UX::Property__string__typeof(), ::app::Uno::String__typeof()),
        ::uNewFunctionVoid("set_Target", DataBinding__string__set_Target, 0, false, ::app::Uno::UX::Property__string__typeof()));

    ::uRegisterType(type);
    return type;
}

void DataBinding__string___ObjInit_2(DataBinding__string* __this, ::app::Uno::UX::Property__string* target, ::uString* key)
{
    ::app::Fuse::Reactive::Binding___ObjInit_1(__this, key);
    __this->Target(target);
}

bool DataBinding__string__Acceptor(DataBinding__string* __this, ::uObject* obj)
{
    return ::uIs(obj, ::app::Uno::String__typeof());
}

void DataBinding__string__Fuse_Reactive_IObserver_OnAdd(DataBinding__string* __this, ::uObject* addedValue)
{
    U_THROW(::app::Uno::Exception__New_2(NULL, ::uGetConstString("Not handled: OnAdd")));
}

void DataBinding__string__Fuse_Reactive_IObserver_OnFailed(DataBinding__string* __this, ::uString* message)
{
    U_THROW(::app::Uno::Exception__New_2(NULL, ::uGetConstString("Not handled: OnFailed")));
}

void DataBinding__string__Fuse_Reactive_IObserver_OnNewAll(DataBinding__string* __this, int length)
{
    if (length > 0)
    {
        U_THROW(::app::Uno::Exception__New_2(NULL, ::uGetConstString("Not handled: OnNewAll")));
    }
}

void DataBinding__string__Fuse_Reactive_IObserver_OnNewAt(DataBinding__string* __this, int index, ::uObject* value)
{
    U_THROW(::app::Uno::Exception__New_2(NULL, ::uGetConstString("Not handled: OnNewAt")));
}

void DataBinding__string__Fuse_Reactive_IObserver_OnRemove(DataBinding__string* __this, ::uObject* value, int index)
{
    U_THROW(::app::Uno::Exception__New_2(NULL, ::uGetConstString("Not handled: OnRemoveAt")));
}

void DataBinding__string__Fuse_Reactive_IObserver_OnSet(DataBinding__string* __this, ::uObject* newValue)
{
    __this->PushValue(newValue);
}

void DataBinding__string__Fuse_Scripting_INameListener_OnNameChanged(DataBinding__string* __this, ::uObject* obj, ::uString* name)
{
    __this->PushValue(__this->_currentValue);
}

::app::Uno::UX::Property__string* DataBinding__string__get_Target(DataBinding__string* __this)
{
    return __this->_Target;
}

DataBinding__string* DataBinding__string__New_1(::uStatic* __this, ::app::Uno::UX::Property__string* target, ::uString* key)
{
    DataBinding__string* inst = (DataBinding__string*)::uAllocObject(sizeof(DataBinding__string), DataBinding__string__typeof());
    inst->_ObjInit_2(target, key);
    return inst;
}

void DataBinding__string__NewValue(DataBinding__string* __this, ::uObject* value)
{
    if (::uIs(value, ::app::Uno::String__typeof()))
    {
        __this->PushValue(value);
    }
    else if (::uIs(value, ::app::Fuse::Reactive::IObservable__typeof()))
    {
        if (__this->_subscription != NULL)
        {
            ::app::Uno::IDisposable::Dispose(::uPtr< ::uObject*>(__this->_subscription));
            __this->_subscription = NULL;
        }

        ::uObject* obs = ::uAs< ::uObject*>(value, ::app::Fuse::Reactive::IObservable__typeof());

        if (obs != NULL)
        {
            __this->_subscription = ::app::Fuse::Reactive::IObservable::Subscribe(::uPtr< ::uObject*>(obs), (::uObject*)__this);
        }
    }
    else
    {
        __this->PushValue(value);
    }
}

void DataBinding__string__OnRooted(DataBinding__string* __this, ::app::Fuse::Node* n)
{
    ::uPtr< ::app::Uno::UX::Property__string*>(__this->Target())->add_ValueChanged(::uNewDelegateNonVirt(::app::Uno::UX::ValueChangedHandler__string__typeof(), (const void*)DataBinding__string__OnValueChanged, __this));
    ::app::Fuse::Reactive::Binding__OnRooted(__this, n);
}

void DataBinding__string__OnUnrooted(DataBinding__string* __this, ::app::Fuse::Node* n)
{
    ::app::Fuse::Scripting::NameRegistry__RemoveListener(NULL, (::uObject*)__this);
    ::uPtr< ::app::Uno::UX::Property__string*>(__this->Target())->remove_ValueChanged(::uNewDelegateNonVirt(::app::Uno::UX::ValueChangedHandler__string__typeof(), (const void*)DataBinding__string__OnValueChanged, __this));

    if (__this->_subscription != NULL)
    {
        ::app::Uno::IDisposable::Dispose(::uPtr< ::uObject*>(__this->_subscription));
        __this->_subscription = NULL;
    }

    ::app::Fuse::Reactive::Binding__OnUnrooted(__this, n);
}

void DataBinding__string__OnValueChanged(DataBinding__string* __this, ::uObject* sender, ::app::Uno::UX::ValueChangedArgs__string* args)
{
    if ((__this->_subscription != NULL) && (::uPtr< ::app::Uno::UX::ValueChangedArgs__string*>(args)->Origin() != __this))
    {
        ::app::Fuse::Reactive::ISubscription::SetExclusive(::uPtr< ::uObject*>(__this->_subscription), (::uObject*)::uPtr< ::app::Uno::UX::ValueChangedArgs__string*>(args)->Value());
    }
}

void DataBinding__string__PushValue(DataBinding__string* __this, ::uObject* newValue)
{
    __this->_currentValue = newValue;

    if (::uIs(newValue, ::app::Uno::String__typeof()))
    {
        ::app::Fuse::Scripting::NameRegistry__RemoveListener(NULL, (::uObject*)__this);
        ::uPtr< ::app::Uno::UX::Property__string*>(__this->Target())->SetRestState(::uCast< ::uString*>(newValue, ::app::Uno::String__typeof()), (::uObject*)__this);
        return;
    }

    ::uString* name = ::uAs< ::uString*>(newValue, ::app::Uno::String__typeof());

    if (::app::Uno::String__op_Inequality(NULL, name, NULL) && (__this->Node() != NULL))
    {
        ::app::Fuse::Scripting::NameRegistry__AddListener(NULL, name, (::uObject*)__this);
        ::app::Fuse::Node* k = ::uPtr< ::app::Fuse::Node*>(__this->Node())->FindNodeByName(::uCast< ::uString*>(newValue, ::app::Uno::String__typeof()));

        if (::uIs(k, ::app::Uno::String__typeof()))
        {
            ::uPtr< ::app::Uno::UX::Property__string*>(__this->Target())->SetRestState(::uCast< ::uString*>((::uObject*)k, ::app::Uno::String__typeof()), (::uObject*)__this);
            return;
        }
        else
        {
            ::uObject* candidate = ::uPtr< ::app::Fuse::Node*>(__this->Node())->FindObjectByName(::uCast< ::uString*>(newValue, ::app::Uno::String__typeof()), ::uNewDelegateNonVirt(::app::Uno::Predicate__object__typeof(), (const void*)DataBinding__string__Acceptor, __this));

            if (::uIs(candidate, ::app::Uno::String__typeof()))
            {
                ::uPtr< ::app::Uno::UX::Property__string*>(__this->Target())->SetRestState(::uCast< ::uString*>(candidate, ::app::Uno::String__typeof()), (::uObject*)__this);
                return;
            }
        }
    }

    ::app::Fuse::Reactive::Marshal__ToType__string(NULL, newValue, ::uNewDelegateNonVirt(::app::Uno::Action__string__typeof(), (const void*)DataBinding__string__SetValue, __this));
}

void DataBinding__string__set_Target(DataBinding__string* __this, ::app::Uno::UX::Property__string* value)
{
    __this->_Target = value;
}

void DataBinding__string__SetValue(DataBinding__string* __this, ::uString* value)
{
    ::uPtr< ::app::Uno::UX::Property__string*>(__this->Target())->SetRestState(value, (::uObject*)__this);
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Reactive\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

DataBinding__Uno_EventArgs__uType* DataBinding__Uno_EventArgs__typeof()
{
    static ::uStaticStrong<DataBinding__Uno_EventArgs__uType*> type;
    if (type != NULL) return type;

    type = (DataBinding__Uno_EventArgs__uType*)::uAllocClassType(sizeof(DataBinding__Uno_EventArgs__uType), "Fuse.Reactive.DataBinding<Uno.EventArgs>", false, 2, 3, 0);

    type->SetBaseType(::app::Fuse::Reactive::Binding__typeof());
    type->__fp_NewValue = (void(*)(::app::Fuse::Reactive::Binding*, ::uObject*))DataBinding__Uno_EventArgs__NewValue;
    type->__fp_OnRooted = (void(*)(::app::Fuse::Behavior*, ::app::Fuse::Node*))DataBinding__Uno_EventArgs__OnRooted;
    type->__fp_OnUnrooted = (void(*)(::app::Fuse::Behavior*, ::app::Fuse::Node*))DataBinding__Uno_EventArgs__OnUnrooted;
    type->__interface_0.__fp_OnSet = (void(*)(void*, ::uObject*))DataBinding__Uno_EventArgs__Fuse_Reactive_IObserver_OnSet;
    type->__interface_0.__fp_OnAdd = (void(*)(void*, ::uObject*))DataBinding__Uno_EventArgs__Fuse_Reactive_IObserver_OnAdd;
    type->__interface_0.__fp_OnNewAt = (void(*)(void*, int, ::uObject*))DataBinding__Uno_EventArgs__Fuse_Reactive_IObserver_OnNewAt;
    type->__interface_0.__fp_OnFailed = (void(*)(void*, ::uString*))DataBinding__Uno_EventArgs__Fuse_Reactive_IObserver_OnFailed;
    type->__interface_0.__fp_OnNewAll = (void(*)(void*, int))DataBinding__Uno_EventArgs__Fuse_Reactive_IObserver_OnNewAll;
    type->__interface_0.__fp_OnRemove = (void(*)(void*, ::uObject*, int))DataBinding__Uno_EventArgs__Fuse_Reactive_IObserver_OnRemove;
    type->__interface_1.__fp_OnNameChanged = (void(*)(void*, ::uObject*, ::uString*))DataBinding__Uno_EventArgs__Fuse_Scripting_INameListener_OnNameChanged;

    type->SetInterfaces(
        ::app::Fuse::Reactive::IObserver__typeof(), offsetof(DataBinding__Uno_EventArgs__uType, __interface_0),
        ::app::Fuse::Scripting::INameListener__typeof(), offsetof(DataBinding__Uno_EventArgs__uType, __interface_1));

    type->SetStrongRefs(
        "_currentValue", offsetof(DataBinding__Uno_EventArgs, _currentValue),
        "_subscription", offsetof(DataBinding__Uno_EventArgs, _subscription),
        "_Target", offsetof(DataBinding__Uno_EventArgs, _Target));

    type->SetFields(2,
        ::uNewField("_currentValue", NULL, offsetof(DataBinding__Uno_EventArgs, _currentValue), ::uObject__typeof()),
        ::uNewField("_subscription", NULL, offsetof(DataBinding__Uno_EventArgs, _subscription), ::app::Fuse::Reactive::ISubscription__typeof()));

    type->SetFunctions(3,
        ::uNewFunction("get_Target", DataBinding__Uno_EventArgs__get_Target, 0, false, ::app::Uno::UX::Property__Uno_EventArgs__typeof()),
        ::uNewFunction(".ctor", DataBinding__Uno_EventArgs__New_1, 0, true, DataBinding__Uno_EventArgs__typeof(), ::app::Uno::UX::Property__Uno_EventArgs__typeof(), ::app::Uno::String__typeof()),
        ::uNewFunctionVoid("set_Target", DataBinding__Uno_EventArgs__set_Target, 0, false, ::app::Uno::UX::Property__Uno_EventArgs__typeof()));

    ::uRegisterType(type);
    return type;
}

void DataBinding__Uno_EventArgs___ObjInit_2(DataBinding__Uno_EventArgs* __this, ::app::Uno::UX::Property__Uno_EventArgs* target, ::uString* key)
{
    ::app::Fuse::Reactive::Binding___ObjInit_1(__this, key);
    __this->Target(target);
}

bool DataBinding__Uno_EventArgs__Acceptor(DataBinding__Uno_EventArgs* __this, ::uObject* obj)
{
    return ::uIs(obj, ::app::Uno::EventArgs__typeof());
}

void DataBinding__Uno_EventArgs__Fuse_Reactive_IObserver_OnAdd(DataBinding__Uno_EventArgs* __this, ::uObject* addedValue)
{
    U_THROW(::app::Uno::Exception__New_2(NULL, ::uGetConstString("Not handled: OnAdd")));
}

void DataBinding__Uno_EventArgs__Fuse_Reactive_IObserver_OnFailed(DataBinding__Uno_EventArgs* __this, ::uString* message)
{
    U_THROW(::app::Uno::Exception__New_2(NULL, ::uGetConstString("Not handled: OnFailed")));
}

void DataBinding__Uno_EventArgs__Fuse_Reactive_IObserver_OnNewAll(DataBinding__Uno_EventArgs* __this, int length)
{
    if (length > 0)
    {
        U_THROW(::app::Uno::Exception__New_2(NULL, ::uGetConstString("Not handled: OnNewAll")));
    }
}

void DataBinding__Uno_EventArgs__Fuse_Reactive_IObserver_OnNewAt(DataBinding__Uno_EventArgs* __this, int index, ::uObject* value)
{
    U_THROW(::app::Uno::Exception__New_2(NULL, ::uGetConstString("Not handled: OnNewAt")));
}

void DataBinding__Uno_EventArgs__Fuse_Reactive_IObserver_OnRemove(DataBinding__Uno_EventArgs* __this, ::uObject* value, int index)
{
    U_THROW(::app::Uno::Exception__New_2(NULL, ::uGetConstString("Not handled: OnRemoveAt")));
}

void DataBinding__Uno_EventArgs__Fuse_Reactive_IObserver_OnSet(DataBinding__Uno_EventArgs* __this, ::uObject* newValue)
{
    __this->PushValue(newValue);
}

void DataBinding__Uno_EventArgs__Fuse_Scripting_INameListener_OnNameChanged(DataBinding__Uno_EventArgs* __this, ::uObject* obj, ::uString* name)
{
    __this->PushValue(__this->_currentValue);
}

::app::Uno::UX::Property__Uno_EventArgs* DataBinding__Uno_EventArgs__get_Target(DataBinding__Uno_EventArgs* __this)
{
    return __this->_Target;
}

DataBinding__Uno_EventArgs* DataBinding__Uno_EventArgs__New_1(::uStatic* __this, ::app::Uno::UX::Property__Uno_EventArgs* target, ::uString* key)
{
    DataBinding__Uno_EventArgs* inst = (DataBinding__Uno_EventArgs*)::uAllocObject(sizeof(DataBinding__Uno_EventArgs), DataBinding__Uno_EventArgs__typeof());
    inst->_ObjInit_2(target, key);
    return inst;
}

void DataBinding__Uno_EventArgs__NewValue(DataBinding__Uno_EventArgs* __this, ::uObject* value)
{
    if (::uIs(value, ::app::Uno::EventArgs__typeof()))
    {
        __this->PushValue(value);
    }
    else if (::uIs(value, ::app::Fuse::Reactive::IObservable__typeof()))
    {
        if (__this->_subscription != NULL)
        {
            ::app::Uno::IDisposable::Dispose(::uPtr< ::uObject*>(__this->_subscription));
            __this->_subscription = NULL;
        }

        ::uObject* obs = ::uAs< ::uObject*>(value, ::app::Fuse::Reactive::IObservable__typeof());

        if (obs != NULL)
        {
            __this->_subscription = ::app::Fuse::Reactive::IObservable::Subscribe(::uPtr< ::uObject*>(obs), (::uObject*)__this);
        }
    }
    else
    {
        __this->PushValue(value);
    }
}

void DataBinding__Uno_EventArgs__OnRooted(DataBinding__Uno_EventArgs* __this, ::app::Fuse::Node* n)
{
    ::uPtr< ::app::Uno::UX::Property__Uno_EventArgs*>(__this->Target())->add_ValueChanged(::uNewDelegateNonVirt(::app::Uno::UX::ValueChangedHandler__Uno_EventArgs__typeof(), (const void*)DataBinding__Uno_EventArgs__OnValueChanged, __this));
    ::app::Fuse::Reactive::Binding__OnRooted(__this, n);
}

void DataBinding__Uno_EventArgs__OnUnrooted(DataBinding__Uno_EventArgs* __this, ::app::Fuse::Node* n)
{
    ::app::Fuse::Scripting::NameRegistry__RemoveListener(NULL, (::uObject*)__this);
    ::uPtr< ::app::Uno::UX::Property__Uno_EventArgs*>(__this->Target())->remove_ValueChanged(::uNewDelegateNonVirt(::app::Uno::UX::ValueChangedHandler__Uno_EventArgs__typeof(), (const void*)DataBinding__Uno_EventArgs__OnValueChanged, __this));

    if (__this->_subscription != NULL)
    {
        ::app::Uno::IDisposable::Dispose(::uPtr< ::uObject*>(__this->_subscription));
        __this->_subscription = NULL;
    }

    ::app::Fuse::Reactive::Binding__OnUnrooted(__this, n);
}

void DataBinding__Uno_EventArgs__OnValueChanged(DataBinding__Uno_EventArgs* __this, ::uObject* sender, ::app::Uno::UX::ValueChangedArgs__Uno_EventArgs* args)
{
    if ((__this->_subscription != NULL) && (::uPtr< ::app::Uno::UX::ValueChangedArgs__Uno_EventArgs*>(args)->Origin() != __this))
    {
        ::app::Fuse::Reactive::ISubscription::SetExclusive(::uPtr< ::uObject*>(__this->_subscription), (::uObject*)::uPtr< ::app::Uno::UX::ValueChangedArgs__Uno_EventArgs*>(args)->Value());
    }
}

void DataBinding__Uno_EventArgs__PushValue(DataBinding__Uno_EventArgs* __this, ::uObject* newValue)
{
    __this->_currentValue = newValue;

    if (::uIs(newValue, ::app::Uno::EventArgs__typeof()))
    {
        ::app::Fuse::Scripting::NameRegistry__RemoveListener(NULL, (::uObject*)__this);
        ::uPtr< ::app::Uno::UX::Property__Uno_EventArgs*>(__this->Target())->SetRestState(::uCast< ::app::Uno::EventArgs*>(newValue, ::app::Uno::EventArgs__typeof()), (::uObject*)__this);
        return;
    }

    ::uString* name = ::uAs< ::uString*>(newValue, ::app::Uno::String__typeof());

    if (::app::Uno::String__op_Inequality(NULL, name, NULL) && (__this->Node() != NULL))
    {
        ::app::Fuse::Scripting::NameRegistry__AddListener(NULL, name, (::uObject*)__this);
        ::app::Fuse::Node* k = ::uPtr< ::app::Fuse::Node*>(__this->Node())->FindNodeByName(::uCast< ::uString*>(newValue, ::app::Uno::String__typeof()));

        if (::uIs(k, ::app::Uno::EventArgs__typeof()))
        {
            ::uPtr< ::app::Uno::UX::Property__Uno_EventArgs*>(__this->Target())->SetRestState(::uCast< ::app::Uno::EventArgs*>((::uObject*)k, ::app::Uno::EventArgs__typeof()), (::uObject*)__this);
            return;
        }
        else
        {
            ::uObject* candidate = ::uPtr< ::app::Fuse::Node*>(__this->Node())->FindObjectByName(::uCast< ::uString*>(newValue, ::app::Uno::String__typeof()), ::uNewDelegateNonVirt(::app::Uno::Predicate__object__typeof(), (const void*)DataBinding__Uno_EventArgs__Acceptor, __this));

            if (::uIs(candidate, ::app::Uno::EventArgs__typeof()))
            {
                ::uPtr< ::app::Uno::UX::Property__Uno_EventArgs*>(__this->Target())->SetRestState(::uCast< ::app::Uno::EventArgs*>(candidate, ::app::Uno::EventArgs__typeof()), (::uObject*)__this);
                return;
            }
        }
    }

    ::app::Fuse::Reactive::Marshal__ToType__Uno_EventArgs(NULL, newValue, ::uNewDelegateNonVirt(::app::Uno::Action__Uno_EventArgs__typeof(), (const void*)DataBinding__Uno_EventArgs__SetValue, __this));
}

void DataBinding__Uno_EventArgs__set_Target(DataBinding__Uno_EventArgs* __this, ::app::Uno::UX::Property__Uno_EventArgs* value)
{
    __this->_Target = value;
}

void DataBinding__Uno_EventArgs__SetValue(DataBinding__Uno_EventArgs* __this, ::app::Uno::EventArgs* value)
{
    ::uPtr< ::app::Uno::UX::Property__Uno_EventArgs*>(__this->Target())->SetRestState(value, (::uObject*)__this);
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Reactive\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

DataBinding__Uno_Platform_iOS_StatusBarStyle__uType* DataBinding__Uno_Platform_iOS_StatusBarStyle__typeof()
{
    static ::uStaticStrong<DataBinding__Uno_Platform_iOS_StatusBarStyle__uType*> type;
    if (type != NULL) return type;

    type = (DataBinding__Uno_Platform_iOS_StatusBarStyle__uType*)::uAllocClassType(sizeof(DataBinding__Uno_Platform_iOS_StatusBarStyle__uType), "Fuse.Reactive.DataBinding<Uno.Platform.iOS.StatusBarStyle>", false, 2, 3, 0);

    type->SetBaseType(::app::Fuse::Reactive::Binding__typeof());
    type->__fp_NewValue = (void(*)(::app::Fuse::Reactive::Binding*, ::uObject*))DataBinding__Uno_Platform_iOS_StatusBarStyle__NewValue;
    type->__fp_OnRooted = (void(*)(::app::Fuse::Behavior*, ::app::Fuse::Node*))DataBinding__Uno_Platform_iOS_StatusBarStyle__OnRooted;
    type->__fp_OnUnrooted = (void(*)(::app::Fuse::Behavior*, ::app::Fuse::Node*))DataBinding__Uno_Platform_iOS_StatusBarStyle__OnUnrooted;
    type->__interface_0.__fp_OnSet = (void(*)(void*, ::uObject*))DataBinding__Uno_Platform_iOS_StatusBarStyle__Fuse_Reactive_IObserver_OnSet;
    type->__interface_0.__fp_OnAdd = (void(*)(void*, ::uObject*))DataBinding__Uno_Platform_iOS_StatusBarStyle__Fuse_Reactive_IObserver_OnAdd;
    type->__interface_0.__fp_OnNewAt = (void(*)(void*, int, ::uObject*))DataBinding__Uno_Platform_iOS_StatusBarStyle__Fuse_Reactive_IObserver_OnNewAt;
    type->__interface_0.__fp_OnFailed = (void(*)(void*, ::uString*))DataBinding__Uno_Platform_iOS_StatusBarStyle__Fuse_Reactive_IObserver_OnFailed;
    type->__interface_0.__fp_OnNewAll = (void(*)(void*, int))DataBinding__Uno_Platform_iOS_StatusBarStyle__Fuse_Reactive_IObserver_OnNewAll;
    type->__interface_0.__fp_OnRemove = (void(*)(void*, ::uObject*, int))DataBinding__Uno_Platform_iOS_StatusBarStyle__Fuse_Reactive_IObserver_OnRemove;
    type->__interface_1.__fp_OnNameChanged = (void(*)(void*, ::uObject*, ::uString*))DataBinding__Uno_Platform_iOS_StatusBarStyle__Fuse_Scripting_INameListener_OnNameChanged;

    type->SetInterfaces(
        ::app::Fuse::Reactive::IObserver__typeof(), offsetof(DataBinding__Uno_Platform_iOS_StatusBarStyle__uType, __interface_0),
        ::app::Fuse::Scripting::INameListener__typeof(), offsetof(DataBinding__Uno_Platform_iOS_StatusBarStyle__uType, __interface_1));

    type->SetStrongRefs(
        "_currentValue", offsetof(DataBinding__Uno_Platform_iOS_StatusBarStyle, _currentValue),
        "_subscription", offsetof(DataBinding__Uno_Platform_iOS_StatusBarStyle, _subscription),
        "_Target", offsetof(DataBinding__Uno_Platform_iOS_StatusBarStyle, _Target));

    type->SetFields(2,
        ::uNewField("_currentValue", NULL, offsetof(DataBinding__Uno_Platform_iOS_StatusBarStyle, _currentValue), ::uObject__typeof()),
        ::uNewField("_subscription", NULL, offsetof(DataBinding__Uno_Platform_iOS_StatusBarStyle, _subscription), ::app::Fuse::Reactive::ISubscription__typeof()));

    type->SetFunctions(3,
        ::uNewFunction("get_Target", DataBinding__Uno_Platform_iOS_StatusBarStyle__get_Target, 0, false, ::app::Uno::UX::Property__Uno_Platform_iOS_StatusBarStyle__typeof()),
        ::uNewFunction(".ctor", DataBinding__Uno_Platform_iOS_StatusBarStyle__New_1, 0, true, DataBinding__Uno_Platform_iOS_StatusBarStyle__typeof(), ::app::Uno::UX::Property__Uno_Platform_iOS_StatusBarStyle__typeof(), ::app::Uno::String__typeof()),
        ::uNewFunctionVoid("set_Target", DataBinding__Uno_Platform_iOS_StatusBarStyle__set_Target, 0, false, ::app::Uno::UX::Property__Uno_Platform_iOS_StatusBarStyle__typeof()));

    ::uRegisterType(type);
    return type;
}

void DataBinding__Uno_Platform_iOS_StatusBarStyle___ObjInit_2(DataBinding__Uno_Platform_iOS_StatusBarStyle* __this, ::app::Uno::UX::Property__Uno_Platform_iOS_StatusBarStyle* target, ::uString* key)
{
    ::app::Fuse::Reactive::Binding___ObjInit_1(__this, key);
    __this->Target(target);
}

bool DataBinding__Uno_Platform_iOS_StatusBarStyle__Acceptor(DataBinding__Uno_Platform_iOS_StatusBarStyle* __this, ::uObject* obj)
{
    return ::uIs(obj, ::app::Uno::Platform::iOS::StatusBarStyle__typeof());
}

void DataBinding__Uno_Platform_iOS_StatusBarStyle__Fuse_Reactive_IObserver_OnAdd(DataBinding__Uno_Platform_iOS_StatusBarStyle* __this, ::uObject* addedValue)
{
    U_THROW(::app::Uno::Exception__New_2(NULL, ::uGetConstString("Not handled: OnAdd")));
}

void DataBinding__Uno_Platform_iOS_StatusBarStyle__Fuse_Reactive_IObserver_OnFailed(DataBinding__Uno_Platform_iOS_StatusBarStyle* __this, ::uString* message)
{
    U_THROW(::app::Uno::Exception__New_2(NULL, ::uGetConstString("Not handled: OnFailed")));
}

void DataBinding__Uno_Platform_iOS_StatusBarStyle__Fuse_Reactive_IObserver_OnNewAll(DataBinding__Uno_Platform_iOS_StatusBarStyle* __this, int length)
{
    if (length > 0)
    {
        U_THROW(::app::Uno::Exception__New_2(NULL, ::uGetConstString("Not handled: OnNewAll")));
    }
}

void DataBinding__Uno_Platform_iOS_StatusBarStyle__Fuse_Reactive_IObserver_OnNewAt(DataBinding__Uno_Platform_iOS_StatusBarStyle* __this, int index, ::uObject* value)
{
    U_THROW(::app::Uno::Exception__New_2(NULL, ::uGetConstString("Not handled: OnNewAt")));
}

void DataBinding__Uno_Platform_iOS_StatusBarStyle__Fuse_Reactive_IObserver_OnRemove(DataBinding__Uno_Platform_iOS_StatusBarStyle* __this, ::uObject* value, int index)
{
    U_THROW(::app::Uno::Exception__New_2(NULL, ::uGetConstString("Not handled: OnRemoveAt")));
}

void DataBinding__Uno_Platform_iOS_StatusBarStyle__Fuse_Reactive_IObserver_OnSet(DataBinding__Uno_Platform_iOS_StatusBarStyle* __this, ::uObject* newValue)
{
    __this->PushValue(newValue);
}

void DataBinding__Uno_Platform_iOS_StatusBarStyle__Fuse_Scripting_INameListener_OnNameChanged(DataBinding__Uno_Platform_iOS_StatusBarStyle* __this, ::uObject* obj, ::uString* name)
{
    __this->PushValue(__this->_currentValue);
}

::app::Uno::UX::Property__Uno_Platform_iOS_StatusBarStyle* DataBinding__Uno_Platform_iOS_StatusBarStyle__get_Target(DataBinding__Uno_Platform_iOS_StatusBarStyle* __this)
{
    return __this->_Target;
}

DataBinding__Uno_Platform_iOS_StatusBarStyle* DataBinding__Uno_Platform_iOS_StatusBarStyle__New_1(::uStatic* __this, ::app::Uno::UX::Property__Uno_Platform_iOS_StatusBarStyle* target, ::uString* key)
{
    DataBinding__Uno_Platform_iOS_StatusBarStyle* inst = (DataBinding__Uno_Platform_iOS_StatusBarStyle*)::uAllocObject(sizeof(DataBinding__Uno_Platform_iOS_StatusBarStyle), DataBinding__Uno_Platform_iOS_StatusBarStyle__typeof());
    inst->_ObjInit_2(target, key);
    return inst;
}

void DataBinding__Uno_Platform_iOS_StatusBarStyle__NewValue(DataBinding__Uno_Platform_iOS_StatusBarStyle* __this, ::uObject* value)
{
    if (::uIs(value, ::app::Uno::Platform::iOS::StatusBarStyle__typeof()))
    {
        __this->PushValue(value);
    }
    else if (::uIs(value, ::app::Fuse::Reactive::IObservable__typeof()))
    {
        if (__this->_subscription != NULL)
        {
            ::app::Uno::IDisposable::Dispose(::uPtr< ::uObject*>(__this->_subscription));
            __this->_subscription = NULL;
        }

        ::uObject* obs = ::uAs< ::uObject*>(value, ::app::Fuse::Reactive::IObservable__typeof());

        if (obs != NULL)
        {
            __this->_subscription = ::app::Fuse::Reactive::IObservable::Subscribe(::uPtr< ::uObject*>(obs), (::uObject*)__this);
        }
    }
    else
    {
        __this->PushValue(value);
    }
}

void DataBinding__Uno_Platform_iOS_StatusBarStyle__OnRooted(DataBinding__Uno_Platform_iOS_StatusBarStyle* __this, ::app::Fuse::Node* n)
{
    ::uPtr< ::app::Uno::UX::Property__Uno_Platform_iOS_StatusBarStyle*>(__this->Target())->add_ValueChanged(::uNewDelegateNonVirt(::app::Uno::UX::ValueChangedHandler__Uno_Platform_iOS_StatusBarStyle__typeof(), (const void*)DataBinding__Uno_Platform_iOS_StatusBarStyle__OnValueChanged, __this));
    ::app::Fuse::Reactive::Binding__OnRooted(__this, n);
}

void DataBinding__Uno_Platform_iOS_StatusBarStyle__OnUnrooted(DataBinding__Uno_Platform_iOS_StatusBarStyle* __this, ::app::Fuse::Node* n)
{
    ::app::Fuse::Scripting::NameRegistry__RemoveListener(NULL, (::uObject*)__this);
    ::uPtr< ::app::Uno::UX::Property__Uno_Platform_iOS_StatusBarStyle*>(__this->Target())->remove_ValueChanged(::uNewDelegateNonVirt(::app::Uno::UX::ValueChangedHandler__Uno_Platform_iOS_StatusBarStyle__typeof(), (const void*)DataBinding__Uno_Platform_iOS_StatusBarStyle__OnValueChanged, __this));

    if (__this->_subscription != NULL)
    {
        ::app::Uno::IDisposable::Dispose(::uPtr< ::uObject*>(__this->_subscription));
        __this->_subscription = NULL;
    }

    ::app::Fuse::Reactive::Binding__OnUnrooted(__this, n);
}

void DataBinding__Uno_Platform_iOS_StatusBarStyle__OnValueChanged(DataBinding__Uno_Platform_iOS_StatusBarStyle* __this, ::uObject* sender, ::app::Uno::UX::ValueChangedArgs__Uno_Platform_iOS_StatusBarStyle* args)
{
    if ((__this->_subscription != NULL) && (::uPtr< ::app::Uno::UX::ValueChangedArgs__Uno_Platform_iOS_StatusBarStyle*>(args)->Origin() != __this))
    {
        ::app::Fuse::Reactive::ISubscription::SetExclusive(::uPtr< ::uObject*>(__this->_subscription), ::uBox< int>(::app::Uno::Platform::iOS::StatusBarStyle__typeof(), ::uPtr< ::app::Uno::UX::ValueChangedArgs__Uno_Platform_iOS_StatusBarStyle*>(args)->Value()));
    }
}

void DataBinding__Uno_Platform_iOS_StatusBarStyle__PushValue(DataBinding__Uno_Platform_iOS_StatusBarStyle* __this, ::uObject* newValue)
{
    __this->_currentValue = newValue;

    if (::uIs(newValue, ::app::Uno::Platform::iOS::StatusBarStyle__typeof()))
    {
        ::app::Fuse::Scripting::NameRegistry__RemoveListener(NULL, (::uObject*)__this);
        ::uPtr< ::app::Uno::UX::Property__Uno_Platform_iOS_StatusBarStyle*>(__this->Target())->SetRestState(::uUnbox< int>(::app::Uno::Platform::iOS::StatusBarStyle__typeof(), newValue), (::uObject*)__this);
        return;
    }

    ::uString* name = ::uAs< ::uString*>(newValue, ::app::Uno::String__typeof());

    if (::app::Uno::String__op_Inequality(NULL, name, NULL) && (__this->Node() != NULL))
    {
        ::app::Fuse::Scripting::NameRegistry__AddListener(NULL, name, (::uObject*)__this);
        ::app::Fuse::Node* k = ::uPtr< ::app::Fuse::Node*>(__this->Node())->FindNodeByName(::uCast< ::uString*>(newValue, ::app::Uno::String__typeof()));

        if (::uIs(k, ::app::Uno::Platform::iOS::StatusBarStyle__typeof()))
        {
            ::uPtr< ::app::Uno::UX::Property__Uno_Platform_iOS_StatusBarStyle*>(__this->Target())->SetRestState(::uUnbox< int>(::app::Uno::Platform::iOS::StatusBarStyle__typeof(), (::uObject*)k), (::uObject*)__this);
            return;
        }
        else
        {
            ::uObject* candidate = ::uPtr< ::app::Fuse::Node*>(__this->Node())->FindObjectByName(::uCast< ::uString*>(newValue, ::app::Uno::String__typeof()), ::uNewDelegateNonVirt(::app::Uno::Predicate__object__typeof(), (const void*)DataBinding__Uno_Platform_iOS_StatusBarStyle__Acceptor, __this));

            if (::uIs(candidate, ::app::Uno::Platform::iOS::StatusBarStyle__typeof()))
            {
                ::uPtr< ::app::Uno::UX::Property__Uno_Platform_iOS_StatusBarStyle*>(__this->Target())->SetRestState(::uUnbox< int>(::app::Uno::Platform::iOS::StatusBarStyle__typeof(), candidate), (::uObject*)__this);
                return;
            }
        }
    }

    ::app::Fuse::Reactive::Marshal__ToType__Uno_Platform_iOS_StatusBarStyle(NULL, newValue, ::uNewDelegateNonVirt(::app::Uno::Action__Uno_Platform_iOS_StatusBarStyle__typeof(), (const void*)DataBinding__Uno_Platform_iOS_StatusBarStyle__SetValue, __this));
}

void DataBinding__Uno_Platform_iOS_StatusBarStyle__set_Target(DataBinding__Uno_Platform_iOS_StatusBarStyle* __this, ::app::Uno::UX::Property__Uno_Platform_iOS_StatusBarStyle* value)
{
    __this->_Target = value;
}

void DataBinding__Uno_Platform_iOS_StatusBarStyle__SetValue(DataBinding__Uno_Platform_iOS_StatusBarStyle* __this, int value)
{
    ::uPtr< ::app::Uno::UX::Property__Uno_Platform_iOS_StatusBarStyle*>(__this->Target())->SetRestState(value, (::uObject*)__this);
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Reactive\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

DataBinding__Uno_UX_FileSource__uType* DataBinding__Uno_UX_FileSource__typeof()
{
    static ::uStaticStrong<DataBinding__Uno_UX_FileSource__uType*> type;
    if (type != NULL) return type;

    type = (DataBinding__Uno_UX_FileSource__uType*)::uAllocClassType(sizeof(DataBinding__Uno_UX_FileSource__uType), "Fuse.Reactive.DataBinding<Uno.UX.FileSource>", false, 2, 3, 0);

    type->SetBaseType(::app::Fuse::Reactive::Binding__typeof());
    type->__fp_NewValue = (void(*)(::app::Fuse::Reactive::Binding*, ::uObject*))DataBinding__Uno_UX_FileSource__NewValue;
    type->__fp_OnRooted = (void(*)(::app::Fuse::Behavior*, ::app::Fuse::Node*))DataBinding__Uno_UX_FileSource__OnRooted;
    type->__fp_OnUnrooted = (void(*)(::app::Fuse::Behavior*, ::app::Fuse::Node*))DataBinding__Uno_UX_FileSource__OnUnrooted;
    type->__interface_0.__fp_OnSet = (void(*)(void*, ::uObject*))DataBinding__Uno_UX_FileSource__Fuse_Reactive_IObserver_OnSet;
    type->__interface_0.__fp_OnAdd = (void(*)(void*, ::uObject*))DataBinding__Uno_UX_FileSource__Fuse_Reactive_IObserver_OnAdd;
    type->__interface_0.__fp_OnNewAt = (void(*)(void*, int, ::uObject*))DataBinding__Uno_UX_FileSource__Fuse_Reactive_IObserver_OnNewAt;
    type->__interface_0.__fp_OnFailed = (void(*)(void*, ::uString*))DataBinding__Uno_UX_FileSource__Fuse_Reactive_IObserver_OnFailed;
    type->__interface_0.__fp_OnNewAll = (void(*)(void*, int))DataBinding__Uno_UX_FileSource__Fuse_Reactive_IObserver_OnNewAll;
    type->__interface_0.__fp_OnRemove = (void(*)(void*, ::uObject*, int))DataBinding__Uno_UX_FileSource__Fuse_Reactive_IObserver_OnRemove;
    type->__interface_1.__fp_OnNameChanged = (void(*)(void*, ::uObject*, ::uString*))DataBinding__Uno_UX_FileSource__Fuse_Scripting_INameListener_OnNameChanged;

    type->SetInterfaces(
        ::app::Fuse::Reactive::IObserver__typeof(), offsetof(DataBinding__Uno_UX_FileSource__uType, __interface_0),
        ::app::Fuse::Scripting::INameListener__typeof(), offsetof(DataBinding__Uno_UX_FileSource__uType, __interface_1));

    type->SetStrongRefs(
        "_currentValue", offsetof(DataBinding__Uno_UX_FileSource, _currentValue),
        "_subscription", offsetof(DataBinding__Uno_UX_FileSource, _subscription),
        "_Target", offsetof(DataBinding__Uno_UX_FileSource, _Target));

    type->SetFields(2,
        ::uNewField("_currentValue", NULL, offsetof(DataBinding__Uno_UX_FileSource, _currentValue), ::uObject__typeof()),
        ::uNewField("_subscription", NULL, offsetof(DataBinding__Uno_UX_FileSource, _subscription), ::app::Fuse::Reactive::ISubscription__typeof()));

    type->SetFunctions(3,
        ::uNewFunction("get_Target", DataBinding__Uno_UX_FileSource__get_Target, 0, false, ::app::Uno::UX::Property__Uno_UX_FileSource__typeof()),
        ::uNewFunction(".ctor", DataBinding__Uno_UX_FileSource__New_1, 0, true, DataBinding__Uno_UX_FileSource__typeof(), ::app::Uno::UX::Property__Uno_UX_FileSource__typeof(), ::app::Uno::String__typeof()),
        ::uNewFunctionVoid("set_Target", DataBinding__Uno_UX_FileSource__set_Target, 0, false, ::app::Uno::UX::Property__Uno_UX_FileSource__typeof()));

    ::uRegisterType(type);
    return type;
}

void DataBinding__Uno_UX_FileSource___ObjInit_2(DataBinding__Uno_UX_FileSource* __this, ::app::Uno::UX::Property__Uno_UX_FileSource* target, ::uString* key)
{
    ::app::Fuse::Reactive::Binding___ObjInit_1(__this, key);
    __this->Target(target);
}

bool DataBinding__Uno_UX_FileSource__Acceptor(DataBinding__Uno_UX_FileSource* __this, ::uObject* obj)
{
    return ::uIs(obj, ::app::Uno::UX::FileSource__typeof());
}

void DataBinding__Uno_UX_FileSource__Fuse_Reactive_IObserver_OnAdd(DataBinding__Uno_UX_FileSource* __this, ::uObject* addedValue)
{
    U_THROW(::app::Uno::Exception__New_2(NULL, ::uGetConstString("Not handled: OnAdd")));
}

void DataBinding__Uno_UX_FileSource__Fuse_Reactive_IObserver_OnFailed(DataBinding__Uno_UX_FileSource* __this, ::uString* message)
{
    U_THROW(::app::Uno::Exception__New_2(NULL, ::uGetConstString("Not handled: OnFailed")));
}

void DataBinding__Uno_UX_FileSource__Fuse_Reactive_IObserver_OnNewAll(DataBinding__Uno_UX_FileSource* __this, int length)
{
    if (length > 0)
    {
        U_THROW(::app::Uno::Exception__New_2(NULL, ::uGetConstString("Not handled: OnNewAll")));
    }
}

void DataBinding__Uno_UX_FileSource__Fuse_Reactive_IObserver_OnNewAt(DataBinding__Uno_UX_FileSource* __this, int index, ::uObject* value)
{
    U_THROW(::app::Uno::Exception__New_2(NULL, ::uGetConstString("Not handled: OnNewAt")));
}

void DataBinding__Uno_UX_FileSource__Fuse_Reactive_IObserver_OnRemove(DataBinding__Uno_UX_FileSource* __this, ::uObject* value, int index)
{
    U_THROW(::app::Uno::Exception__New_2(NULL, ::uGetConstString("Not handled: OnRemoveAt")));
}

void DataBinding__Uno_UX_FileSource__Fuse_Reactive_IObserver_OnSet(DataBinding__Uno_UX_FileSource* __this, ::uObject* newValue)
{
    __this->PushValue(newValue);
}

void DataBinding__Uno_UX_FileSource__Fuse_Scripting_INameListener_OnNameChanged(DataBinding__Uno_UX_FileSource* __this, ::uObject* obj, ::uString* name)
{
    __this->PushValue(__this->_currentValue);
}

::app::Uno::UX::Property__Uno_UX_FileSource* DataBinding__Uno_UX_FileSource__get_Target(DataBinding__Uno_UX_FileSource* __this)
{
    return __this->_Target;
}

DataBinding__Uno_UX_FileSource* DataBinding__Uno_UX_FileSource__New_1(::uStatic* __this, ::app::Uno::UX::Property__Uno_UX_FileSource* target, ::uString* key)
{
    DataBinding__Uno_UX_FileSource* inst = (DataBinding__Uno_UX_FileSource*)::uAllocObject(sizeof(DataBinding__Uno_UX_FileSource), DataBinding__Uno_UX_FileSource__typeof());
    inst->_ObjInit_2(target, key);
    return inst;
}

void DataBinding__Uno_UX_FileSource__NewValue(DataBinding__Uno_UX_FileSource* __this, ::uObject* value)
{
    if (::uIs(value, ::app::Uno::UX::FileSource__typeof()))
    {
        __this->PushValue(value);
    }
    else if (::uIs(value, ::app::Fuse::Reactive::IObservable__typeof()))
    {
        if (__this->_subscription != NULL)
        {
            ::app::Uno::IDisposable::Dispose(::uPtr< ::uObject*>(__this->_subscription));
            __this->_subscription = NULL;
        }

        ::uObject* obs = ::uAs< ::uObject*>(value, ::app::Fuse::Reactive::IObservable__typeof());

        if (obs != NULL)
        {
            __this->_subscription = ::app::Fuse::Reactive::IObservable::Subscribe(::uPtr< ::uObject*>(obs), (::uObject*)__this);
        }
    }
    else
    {
        __this->PushValue(value);
    }
}

void DataBinding__Uno_UX_FileSource__OnRooted(DataBinding__Uno_UX_FileSource* __this, ::app::Fuse::Node* n)
{
    ::uPtr< ::app::Uno::UX::Property__Uno_UX_FileSource*>(__this->Target())->add_ValueChanged(::uNewDelegateNonVirt(::app::Uno::UX::ValueChangedHandler__Uno_UX_FileSource__typeof(), (const void*)DataBinding__Uno_UX_FileSource__OnValueChanged, __this));
    ::app::Fuse::Reactive::Binding__OnRooted(__this, n);
}

void DataBinding__Uno_UX_FileSource__OnUnrooted(DataBinding__Uno_UX_FileSource* __this, ::app::Fuse::Node* n)
{
    ::app::Fuse::Scripting::NameRegistry__RemoveListener(NULL, (::uObject*)__this);
    ::uPtr< ::app::Uno::UX::Property__Uno_UX_FileSource*>(__this->Target())->remove_ValueChanged(::uNewDelegateNonVirt(::app::Uno::UX::ValueChangedHandler__Uno_UX_FileSource__typeof(), (const void*)DataBinding__Uno_UX_FileSource__OnValueChanged, __this));

    if (__this->_subscription != NULL)
    {
        ::app::Uno::IDisposable::Dispose(::uPtr< ::uObject*>(__this->_subscription));
        __this->_subscription = NULL;
    }

    ::app::Fuse::Reactive::Binding__OnUnrooted(__this, n);
}

void DataBinding__Uno_UX_FileSource__OnValueChanged(DataBinding__Uno_UX_FileSource* __this, ::uObject* sender, ::app::Uno::UX::ValueChangedArgs__Uno_UX_FileSource* args)
{
    if ((__this->_subscription != NULL) && (::uPtr< ::app::Uno::UX::ValueChangedArgs__Uno_UX_FileSource*>(args)->Origin() != __this))
    {
        ::app::Fuse::Reactive::ISubscription::SetExclusive(::uPtr< ::uObject*>(__this->_subscription), (::uObject*)::uPtr< ::app::Uno::UX::ValueChangedArgs__Uno_UX_FileSource*>(args)->Value());
    }
}

void DataBinding__Uno_UX_FileSource__PushValue(DataBinding__Uno_UX_FileSource* __this, ::uObject* newValue)
{
    __this->_currentValue = newValue;

    if (::uIs(newValue, ::app::Uno::UX::FileSource__typeof()))
    {
        ::app::Fuse::Scripting::NameRegistry__RemoveListener(NULL, (::uObject*)__this);
        ::uPtr< ::app::Uno::UX::Property__Uno_UX_FileSource*>(__this->Target())->SetRestState(::uCast< ::app::Uno::UX::FileSource*>(newValue, ::app::Uno::UX::FileSource__typeof()), (::uObject*)__this);
        return;
    }

    ::uString* name = ::uAs< ::uString*>(newValue, ::app::Uno::String__typeof());

    if (::app::Uno::String__op_Inequality(NULL, name, NULL) && (__this->Node() != NULL))
    {
        ::app::Fuse::Scripting::NameRegistry__AddListener(NULL, name, (::uObject*)__this);
        ::app::Fuse::Node* k = ::uPtr< ::app::Fuse::Node*>(__this->Node())->FindNodeByName(::uCast< ::uString*>(newValue, ::app::Uno::String__typeof()));

        if (::uIs(k, ::app::Uno::UX::FileSource__typeof()))
        {
            ::uPtr< ::app::Uno::UX::Property__Uno_UX_FileSource*>(__this->Target())->SetRestState(::uCast< ::app::Uno::UX::FileSource*>((::uObject*)k, ::app::Uno::UX::FileSource__typeof()), (::uObject*)__this);
            return;
        }
        else
        {
            ::uObject* candidate = ::uPtr< ::app::Fuse::Node*>(__this->Node())->FindObjectByName(::uCast< ::uString*>(newValue, ::app::Uno::String__typeof()), ::uNewDelegateNonVirt(::app::Uno::Predicate__object__typeof(), (const void*)DataBinding__Uno_UX_FileSource__Acceptor, __this));

            if (::uIs(candidate, ::app::Uno::UX::FileSource__typeof()))
            {
                ::uPtr< ::app::Uno::UX::Property__Uno_UX_FileSource*>(__this->Target())->SetRestState(::uCast< ::app::Uno::UX::FileSource*>(candidate, ::app::Uno::UX::FileSource__typeof()), (::uObject*)__this);
                return;
            }
        }
    }

    ::app::Fuse::Reactive::Marshal__ToType__Uno_UX_FileSource(NULL, newValue, ::uNewDelegateNonVirt(::app::Uno::Action__Uno_UX_FileSource__typeof(), (const void*)DataBinding__Uno_UX_FileSource__SetValue, __this));
}

void DataBinding__Uno_UX_FileSource__set_Target(DataBinding__Uno_UX_FileSource* __this, ::app::Uno::UX::Property__Uno_UX_FileSource* value)
{
    __this->_Target = value;
}

void DataBinding__Uno_UX_FileSource__SetValue(DataBinding__Uno_UX_FileSource* __this, ::app::Uno::UX::FileSource* value)
{
    ::uPtr< ::app::Uno::UX::Property__Uno_UX_FileSource*>(__this->Target())->SetRestState(value, (::uObject*)__this);
}

}}}
