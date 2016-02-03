#include <app/Fuse.Animations.AnimationVariant.h>
#include <app/Fuse.Animations.Animator.h>
#include <app/Fuse.Animations.AnimatorState.h>
#include <app/Fuse.Animations.AnimatorVariant.h>
#include <app/Fuse.Animations.AverageMasterProperty__bool.h>
#include <app/Fuse.Animations.AverageMasterProperty__char.h>
#include <app/Fuse.Animations.AverageMasterProperty__double.h>
#include <app/Fuse.Animations.AverageMasterProperty__float.h>
#include <app/Fuse.Animations.AverageMasterProperty__float2.h>
#include <app/Fuse.Animations.AverageMasterProperty__float3.h>
#include <app/Fuse.Animations.AverageMasterProperty__float4.h>
#include <app/Fuse.Animations.AverageMasterProperty__Fuse_Animations_AnimationVariant.h>
#include <app/Fuse.Animations.AverageMasterProperty__Fuse_Animations_Easing.h>
#include <app/Fuse.Animations.AverageMasterProperty__Fuse_Animations_Keyframe-9f124c6f.h>
#include <app/Fuse.Animations.AverageMasterProperty__Fuse_Animations_MixOp.h>
#include <app/Fuse.Animations.AverageMasterProperty__Fuse_Drawing_BlendMode.h>
#include <app/Fuse.Animations.AverageMasterProperty__Fuse_Drawing_Brush.h>
#include <app/Fuse.Animations.AverageMasterProperty__Fuse_Drawing_DynamicBrush.h>
#include <app/Fuse.Animations.AverageMasterProperty__Fuse_Drawing_GradientStop.h>
#include <app/Fuse.Animations.AverageMasterProperty__Fuse_Drawing_LinearGradient.h>
#include <app/Fuse.Animations.AverageMasterProperty__Fuse_Drawing_SolidColor.h>
#include <app/Fuse.Animations.AverageMasterProperty__Fuse_Drawing_StaticBrush.h>
#include <app/Fuse.Animations.AverageMasterProperty__Fuse_Elements_Alignment.h>
#include <app/Fuse.Animations.AverageMasterProperty__Fuse_Elements_CachingMode.h>
#include <app/Fuse.Animations.AverageMasterProperty__Fuse_Elements_Element.h>
#include <app/Fuse.Animations.AverageMasterProperty__Fuse_Elements_HitTestMode.h>
#include <app/Fuse.Animations.AverageMasterProperty__Fuse_Elements_SizeUnit.h>
#include <app/Fuse.Animations.AverageMasterProperty__Fuse_Elements_StretchDirection.h>
#include <app/Fuse.Animations.AverageMasterProperty__Fuse_Elements_StretchMode.h>
#include <app/Fuse.Animations.AverageMasterProperty__Fuse_Elements_StretchSizing.h>
#include <app/Fuse.Animations.AverageMasterProperty__Fuse_Elements_TextAlignment.h>
#include <app/Fuse.Animations.AverageMasterProperty__Fuse_Elements_TextWrapping.h>
#include <app/Fuse.Animations.AverageMasterProperty__Fuse_Elements_Visibility.h>
#include <app/Fuse.Animations.AverageMasterProperty__Fuse_Font.h>
#include <app/Fuse.Animations.AverageMasterProperty__Fuse_Gestures_Edge.h>
#include <app/Fuse.Animations.AverageMasterProperty__Fuse_Gestures_ScrollDirections.h>
#include <app/Fuse.Animations.AverageMasterProperty__Fuse_Layouts_Dock.h>
#include <app/Fuse.Animations.AverageMasterProperty__Fuse_Layouts_FlowDirection.h>
#include <app/Fuse.Animations.AverageMasterProperty__Fuse_Layouts_Metric.h>
#include <app/Fuse.Animations.AverageMasterProperty__Fuse_Layouts_Orientation.h>
#include <app/Fuse.Animations.AverageMasterProperty__Fuse_Navigation_Navigati-8d5cd7f2.h>
#include <app/Fuse.Animations.AverageMasterProperty__Fuse_Navigation_Navigati-a511774f.h>
#include <app/Fuse.Animations.AverageMasterProperty__Fuse_Navigation_NavigationEdge.h>
#include <app/Fuse.Animations.AverageMasterProperty__Fuse_Navigation_SnapTo.h>
#include <app/Fuse.Animations.AverageMasterProperty__Fuse_Navigation_SwipeDirection.h>
#include <app/Fuse.Animations.AverageMasterProperty__Fuse_Navigation_SwipeEnds.h>
#include <app/Fuse.Animations.AverageMasterProperty__Fuse_Node.h>
#include <app/Fuse.Animations.AverageMasterProperty__Fuse_Resources_ImageSource.h>
#include <app/Fuse.Animations.AverageMasterProperty__Fuse_Triggers_Actions_Tr-b73057a2.h>
#include <app/Fuse.Animations.AverageMasterProperty__Fuse_Triggers_State.h>
#include <app/Fuse.Animations.AverageMasterProperty__Fuse_Triggers_StateTransition.h>
#include <app/Fuse.Animations.AverageMasterProperty__Fuse_Triggers_TriggerBypassMode.h>
#include <app/Fuse.Animations.AverageMasterProperty__int.h>
#include <app/Fuse.Animations.AverageMasterProperty__int2.h>
#include <app/Fuse.Animations.AverageMasterProperty__int3.h>
#include <app/Fuse.Animations.AverageMasterProperty__int4.h>
#include <app/Fuse.Animations.AverageMasterProperty__long.h>
#include <app/Fuse.Animations.AverageMasterProperty__object.h>
#include <app/Fuse.Animations.AverageMasterProperty__short.h>
#include <app/Fuse.Animations.AverageMasterProperty__string.h>
#include <app/Fuse.Animations.AverageMasterProperty__Uno_EventArgs.h>
#include <app/Fuse.Animations.AverageMasterProperty__Uno_Platform_iOS_StatusBarStyle.h>
#include <app/Fuse.Animations.AverageMasterProperty__Uno_UX_FileSource.h>
#include <app/Fuse.Animations.AverageMasterTransform.h>
#include <app/Fuse.Animations.AverageMixer.h>
#include <app/Fuse.Animations.ContinuousTrackProvider.h>
#include <app/Fuse.Animations.ConverterDouble.h>
#include <app/Fuse.Animations.ConverterFloat.h>
#include <app/Fuse.Animations.ConverterFloat2.h>
#include <app/Fuse.Animations.ConverterFloat3.h>
#include <app/Fuse.Animations.ConverterFloat4.h>
#include <app/Fuse.Animations.CreateStateParams.h>
#include <app/Fuse.Animations.DiscreteKeyframeTrack.h>
#include <app/Fuse.Animations.DiscreteMasterProperty__bool.h>
#include <app/Fuse.Animations.DiscreteMasterProperty__char.h>
#include <app/Fuse.Animations.DiscreteMasterProperty__double.h>
#include <app/Fuse.Animations.DiscreteMasterProperty__float.h>
#include <app/Fuse.Animations.DiscreteMasterProperty__float2.h>
#include <app/Fuse.Animations.DiscreteMasterProperty__float3.h>
#include <app/Fuse.Animations.DiscreteMasterProperty__float4.h>
#include <app/Fuse.Animations.DiscreteMasterProperty__Fuse_Animations_AnimationVariant.h>
#include <app/Fuse.Animations.DiscreteMasterProperty__Fuse_Animations_Easing.h>
#include <app/Fuse.Animations.DiscreteMasterProperty__Fuse_Animations_Keyfram-a47b2a4d.h>
#include <app/Fuse.Animations.DiscreteMasterProperty__Fuse_Animations_MixOp.h>
#include <app/Fuse.Animations.DiscreteMasterProperty__Fuse_Drawing_BlendMode.h>
#include <app/Fuse.Animations.DiscreteMasterProperty__Fuse_Drawing_Brush.h>
#include <app/Fuse.Animations.DiscreteMasterProperty__Fuse_Drawing_DynamicBrush.h>
#include <app/Fuse.Animations.DiscreteMasterProperty__Fuse_Drawing_GradientStop.h>
#include <app/Fuse.Animations.DiscreteMasterProperty__Fuse_Drawing_LinearGradient.h>
#include <app/Fuse.Animations.DiscreteMasterProperty__Fuse_Drawing_SolidColor.h>
#include <app/Fuse.Animations.DiscreteMasterProperty__Fuse_Drawing_StaticBrush.h>
#include <app/Fuse.Animations.DiscreteMasterProperty__Fuse_Elements_Alignment.h>
#include <app/Fuse.Animations.DiscreteMasterProperty__Fuse_Elements_CachingMode.h>
#include <app/Fuse.Animations.DiscreteMasterProperty__Fuse_Elements_Element.h>
#include <app/Fuse.Animations.DiscreteMasterProperty__Fuse_Elements_HitTestMode.h>
#include <app/Fuse.Animations.DiscreteMasterProperty__Fuse_Elements_SizeUnit.h>
#include <app/Fuse.Animations.DiscreteMasterProperty__Fuse_Elements_StretchDirection.h>
#include <app/Fuse.Animations.DiscreteMasterProperty__Fuse_Elements_StretchMode.h>
#include <app/Fuse.Animations.DiscreteMasterProperty__Fuse_Elements_StretchSizing.h>
#include <app/Fuse.Animations.DiscreteMasterProperty__Fuse_Elements_TextAlignment.h>
#include <app/Fuse.Animations.DiscreteMasterProperty__Fuse_Elements_TextWrapping.h>
#include <app/Fuse.Animations.DiscreteMasterProperty__Fuse_Elements_Visibility.h>
#include <app/Fuse.Animations.DiscreteMasterProperty__Fuse_Font.h>
#include <app/Fuse.Animations.DiscreteMasterProperty__Fuse_Gestures_Edge.h>
#include <app/Fuse.Animations.DiscreteMasterProperty__Fuse_Gestures_ScrollDirections.h>
#include <app/Fuse.Animations.DiscreteMasterProperty__Fuse_Layouts_Dock.h>
#include <app/Fuse.Animations.DiscreteMasterProperty__Fuse_Layouts_FlowDirection.h>
#include <app/Fuse.Animations.DiscreteMasterProperty__Fuse_Layouts_Metric.h>
#include <app/Fuse.Animations.DiscreteMasterProperty__Fuse_Layouts_Orientation.h>
#include <app/Fuse.Animations.DiscreteMasterProperty__Fuse_Navigation_Navigat-97e82488.h>
#include <app/Fuse.Animations.DiscreteMasterProperty__Fuse_Navigation_Navigat-e5f74e2f.h>
#include <app/Fuse.Animations.DiscreteMasterProperty__Fuse_Navigation_NavigationEdge.h>
#include <app/Fuse.Animations.DiscreteMasterProperty__Fuse_Navigation_SnapTo.h>
#include <app/Fuse.Animations.DiscreteMasterProperty__Fuse_Navigation_SwipeDirection.h>
#include <app/Fuse.Animations.DiscreteMasterProperty__Fuse_Navigation_SwipeEnds.h>
#include <app/Fuse.Animations.DiscreteMasterProperty__Fuse_Node.h>
#include <app/Fuse.Animations.DiscreteMasterProperty__Fuse_Resources_ImageSource.h>
#include <app/Fuse.Animations.DiscreteMasterProperty__Fuse_Triggers_Actions_T-5fdac1d3.h>
#include <app/Fuse.Animations.DiscreteMasterProperty__Fuse_Triggers_State.h>
#include <app/Fuse.Animations.DiscreteMasterProperty__Fuse_Triggers_StateTransition.h>
#include <app/Fuse.Animations.DiscreteMasterProperty__Fuse_Triggers_TriggerBypassMode.h>
#include <app/Fuse.Animations.DiscreteMasterProperty__int.h>
#include <app/Fuse.Animations.DiscreteMasterProperty__int2.h>
#include <app/Fuse.Animations.DiscreteMasterProperty__int3.h>
#include <app/Fuse.Animations.DiscreteMasterProperty__int4.h>
#include <app/Fuse.Animations.DiscreteMasterProperty__long.h>
#include <app/Fuse.Animations.DiscreteMasterProperty__object.h>
#include <app/Fuse.Animations.DiscreteMasterProperty__short.h>
#include <app/Fuse.Animations.DiscreteMasterProperty__string.h>
#include <app/Fuse.Animations.DiscreteMasterProperty__Uno_EventArgs.h>
#include <app/Fuse.Animations.DiscreteMasterProperty__Uno_Platform_iOS_StatusBarStyle.h>
#include <app/Fuse.Animations.DiscreteMasterProperty__Uno_UX_FileSource.h>
#include <app/Fuse.Animations.DiscreteMasterTransform.h>
#include <app/Fuse.Animations.DiscreteMixer.h>
#include <app/Fuse.Animations.DiscreteSingleTrack.h>
#include <app/Fuse.Animations.DiscreteTrackProvider.h>
#include <app/Fuse.Animations.Easing.h>
#include <app/Fuse.Animations.EasingFunction.h>
#include <app/Fuse.Animations.EasingFunctions.h>
#include <app/Fuse.Animations.EasingTrack.h>
#include <app/Fuse.Animations.FastMatrixTransform.h>
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
#include <app/Fuse.Animations.IMixerHandle__Fuse_Transform.h>
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
#include <app/Fuse.Animations.IMixerMaster.h>
#include <app/Fuse.Animations.IResize.h>
#include <app/Fuse.Animations.IResizeMode.h>
#include <app/Fuse.Animations.ITrackProvider.h>
#include <app/Fuse.Animations.Keyframe.h>
#include <app/Fuse.Animations.KeyframeInterpolation.h>
#include <app/Fuse.Animations.KeyframeTrack.h>
#include <app/Fuse.Animations.MasterBase__bool.h>
#include <app/Fuse.Animations.MasterBase__char.h>
#include <app/Fuse.Animations.MasterBase__double.h>
#include <app/Fuse.Animations.MasterBase__float.h>
#include <app/Fuse.Animations.MasterBase__float2.h>
#include <app/Fuse.Animations.MasterBase__float3.h>
#include <app/Fuse.Animations.MasterBase__float4.h>
#include <app/Fuse.Animations.MasterBase__Fuse_Animations_AnimationVariant.h>
#include <app/Fuse.Animations.MasterBase__Fuse_Animations_Easing.h>
#include <app/Fuse.Animations.MasterBase__Fuse_Animations_KeyframeInterpolation.h>
#include <app/Fuse.Animations.MasterBase__Fuse_Animations_MixOp.h>
#include <app/Fuse.Animations.MasterBase__Fuse_Drawing_BlendMode.h>
#include <app/Fuse.Animations.MasterBase__Fuse_Drawing_Brush.h>
#include <app/Fuse.Animations.MasterBase__Fuse_Drawing_DynamicBrush.h>
#include <app/Fuse.Animations.MasterBase__Fuse_Drawing_GradientStop.h>
#include <app/Fuse.Animations.MasterBase__Fuse_Drawing_LinearGradient.h>
#include <app/Fuse.Animations.MasterBase__Fuse_Drawing_SolidColor.h>
#include <app/Fuse.Animations.MasterBase__Fuse_Drawing_StaticBrush.h>
#include <app/Fuse.Animations.MasterBase__Fuse_Elements_Alignment.h>
#include <app/Fuse.Animations.MasterBase__Fuse_Elements_CachingMode.h>
#include <app/Fuse.Animations.MasterBase__Fuse_Elements_Element.h>
#include <app/Fuse.Animations.MasterBase__Fuse_Elements_HitTestMode.h>
#include <app/Fuse.Animations.MasterBase__Fuse_Elements_SizeUnit.h>
#include <app/Fuse.Animations.MasterBase__Fuse_Elements_StretchDirection.h>
#include <app/Fuse.Animations.MasterBase__Fuse_Elements_StretchMode.h>
#include <app/Fuse.Animations.MasterBase__Fuse_Elements_StretchSizing.h>
#include <app/Fuse.Animations.MasterBase__Fuse_Elements_TextAlignment.h>
#include <app/Fuse.Animations.MasterBase__Fuse_Elements_TextWrapping.h>
#include <app/Fuse.Animations.MasterBase__Fuse_Elements_Visibility.h>
#include <app/Fuse.Animations.MasterBase__Fuse_Font.h>
#include <app/Fuse.Animations.MasterBase__Fuse_Gestures_Edge.h>
#include <app/Fuse.Animations.MasterBase__Fuse_Gestures_ScrollDirections.h>
#include <app/Fuse.Animations.MasterBase__Fuse_Layouts_Dock.h>
#include <app/Fuse.Animations.MasterBase__Fuse_Layouts_FlowDirection.h>
#include <app/Fuse.Animations.MasterBase__Fuse_Layouts_Metric.h>
#include <app/Fuse.Animations.MasterBase__Fuse_Layouts_Orientation.h>
#include <app/Fuse.Animations.MasterBase__Fuse_Navigation_NavigationDirection.h>
#include <app/Fuse.Animations.MasterBase__Fuse_Navigation_NavigationEdge.h>
#include <app/Fuse.Animations.MasterBase__Fuse_Navigation_NavigationGotoMode.h>
#include <app/Fuse.Animations.MasterBase__Fuse_Navigation_SnapTo.h>
#include <app/Fuse.Animations.MasterBase__Fuse_Navigation_SwipeDirection.h>
#include <app/Fuse.Animations.MasterBase__Fuse_Navigation_SwipeEnds.h>
#include <app/Fuse.Animations.MasterBase__Fuse_Node.h>
#include <app/Fuse.Animations.MasterBase__Fuse_Resources_ImageSource.h>
#include <app/Fuse.Animations.MasterBase__Fuse_Transform.h>
#include <app/Fuse.Animations.MasterBase__Fuse_Triggers_Actions_TriggerDirection.h>
#include <app/Fuse.Animations.MasterBase__Fuse_Triggers_State.h>
#include <app/Fuse.Animations.MasterBase__Fuse_Triggers_StateTransition.h>
#include <app/Fuse.Animations.MasterBase__Fuse_Triggers_TriggerBypassMode.h>
#include <app/Fuse.Animations.MasterBase__int.h>
#include <app/Fuse.Animations.MasterBase__int2.h>
#include <app/Fuse.Animations.MasterBase__int3.h>
#include <app/Fuse.Animations.MasterBase__int4.h>
#include <app/Fuse.Animations.MasterBase__long.h>
#include <app/Fuse.Animations.MasterBase__object.h>
#include <app/Fuse.Animations.MasterBase__short.h>
#include <app/Fuse.Animations.MasterBase__string.h>
#include <app/Fuse.Animations.MasterBase__Uno_EventArgs.h>
#include <app/Fuse.Animations.MasterBase__Uno_Platform_iOS_StatusBarStyle.h>
#include <app/Fuse.Animations.MasterBase__Uno_UX_FileSource.h>
#include <app/Fuse.Animations.MasterBase1_GFWResult__Fuse_Transform.h>
#include <app/Fuse.Animations.MasterProperty__bool.h>
#include <app/Fuse.Animations.MasterProperty__char.h>
#include <app/Fuse.Animations.MasterProperty__double.h>
#include <app/Fuse.Animations.MasterProperty__float.h>
#include <app/Fuse.Animations.MasterProperty__float2.h>
#include <app/Fuse.Animations.MasterProperty__float3.h>
#include <app/Fuse.Animations.MasterProperty__float4.h>
#include <app/Fuse.Animations.MasterProperty__Fuse_Animations_AnimationVariant.h>
#include <app/Fuse.Animations.MasterProperty__Fuse_Animations_Easing.h>
#include <app/Fuse.Animations.MasterProperty__Fuse_Animations_KeyframeInterpolation.h>
#include <app/Fuse.Animations.MasterProperty__Fuse_Animations_MixOp.h>
#include <app/Fuse.Animations.MasterProperty__Fuse_Drawing_BlendMode.h>
#include <app/Fuse.Animations.MasterProperty__Fuse_Drawing_Brush.h>
#include <app/Fuse.Animations.MasterProperty__Fuse_Drawing_DynamicBrush.h>
#include <app/Fuse.Animations.MasterProperty__Fuse_Drawing_GradientStop.h>
#include <app/Fuse.Animations.MasterProperty__Fuse_Drawing_LinearGradient.h>
#include <app/Fuse.Animations.MasterProperty__Fuse_Drawing_SolidColor.h>
#include <app/Fuse.Animations.MasterProperty__Fuse_Drawing_StaticBrush.h>
#include <app/Fuse.Animations.MasterProperty__Fuse_Elements_Alignment.h>
#include <app/Fuse.Animations.MasterProperty__Fuse_Elements_CachingMode.h>
#include <app/Fuse.Animations.MasterProperty__Fuse_Elements_Element.h>
#include <app/Fuse.Animations.MasterProperty__Fuse_Elements_HitTestMode.h>
#include <app/Fuse.Animations.MasterProperty__Fuse_Elements_SizeUnit.h>
#include <app/Fuse.Animations.MasterProperty__Fuse_Elements_StretchDirection.h>
#include <app/Fuse.Animations.MasterProperty__Fuse_Elements_StretchMode.h>
#include <app/Fuse.Animations.MasterProperty__Fuse_Elements_StretchSizing.h>
#include <app/Fuse.Animations.MasterProperty__Fuse_Elements_TextAlignment.h>
#include <app/Fuse.Animations.MasterProperty__Fuse_Elements_TextWrapping.h>
#include <app/Fuse.Animations.MasterProperty__Fuse_Elements_Visibility.h>
#include <app/Fuse.Animations.MasterProperty__Fuse_Font.h>
#include <app/Fuse.Animations.MasterProperty__Fuse_Gestures_Edge.h>
#include <app/Fuse.Animations.MasterProperty__Fuse_Gestures_ScrollDirections.h>
#include <app/Fuse.Animations.MasterProperty__Fuse_Layouts_Dock.h>
#include <app/Fuse.Animations.MasterProperty__Fuse_Layouts_FlowDirection.h>
#include <app/Fuse.Animations.MasterProperty__Fuse_Layouts_Metric.h>
#include <app/Fuse.Animations.MasterProperty__Fuse_Layouts_Orientation.h>
#include <app/Fuse.Animations.MasterProperty__Fuse_Navigation_NavigationDirection.h>
#include <app/Fuse.Animations.MasterProperty__Fuse_Navigation_NavigationEdge.h>
#include <app/Fuse.Animations.MasterProperty__Fuse_Navigation_NavigationGotoMode.h>
#include <app/Fuse.Animations.MasterProperty__Fuse_Navigation_SnapTo.h>
#include <app/Fuse.Animations.MasterProperty__Fuse_Navigation_SwipeDirection.h>
#include <app/Fuse.Animations.MasterProperty__Fuse_Navigation_SwipeEnds.h>
#include <app/Fuse.Animations.MasterProperty__Fuse_Node.h>
#include <app/Fuse.Animations.MasterProperty__Fuse_Resources_ImageSource.h>
#include <app/Fuse.Animations.MasterProperty__Fuse_Triggers_Actions_TriggerDirection.h>
#include <app/Fuse.Animations.MasterProperty__Fuse_Triggers_State.h>
#include <app/Fuse.Animations.MasterProperty__Fuse_Triggers_StateTransition.h>
#include <app/Fuse.Animations.MasterProperty__Fuse_Triggers_TriggerBypassMode.h>
#include <app/Fuse.Animations.MasterProperty__int.h>
#include <app/Fuse.Animations.MasterProperty__int2.h>
#include <app/Fuse.Animations.MasterProperty__int3.h>
#include <app/Fuse.Animations.MasterProperty__int4.h>
#include <app/Fuse.Animations.MasterProperty__long.h>
#include <app/Fuse.Animations.MasterProperty__object.h>
#include <app/Fuse.Animations.MasterProperty__short.h>
#include <app/Fuse.Animations.MasterProperty__string.h>
#include <app/Fuse.Animations.MasterProperty__Uno_EventArgs.h>
#include <app/Fuse.Animations.MasterProperty__Uno_Platform_iOS_StatusBarStyle.h>
#include <app/Fuse.Animations.MasterProperty__Uno_UX_FileSource.h>
#include <app/Fuse.Animations.MasterPropertyGet.h>
#include <app/Fuse.Animations.MasterTransform.h>
#include <app/Fuse.Animations.Mixer.h>
#include <app/Fuse.Animations.MixerBase.h>
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
#include <app/Fuse.Animations.MixOp.h>
#include <app/Fuse.Animations.Move.h>
#include <app/Fuse.Animations.Nothing.h>
#include <app/Fuse.Animations.NothingAnimatorState.h>
#include <app/Fuse.Animations.OpenAnimator.h>
#include <app/Fuse.Animations.OpenAnimatorState.h>
#include <app/Fuse.Animations.Player.h>
#include <app/Fuse.Animations.PlayerPart.h>
#include <app/Fuse.Animations.Resize.h>
#include <app/Fuse.Animations.ResizeAnimatorState.h>
#include <app/Fuse.Animations.Rotate.h>
#include <app/Fuse.Animations.Scale.h>
#include <app/Fuse.Animations.SeekDirection.h>
#include <app/Fuse.Animations.Skew.h>
#include <app/Fuse.Animations.Spin.h>
#include <app/Fuse.Animations.SpinState.h>
#include <app/Fuse.Animations.SplineTrack.h>
#include <app/Fuse.Animations.SplineTrack_PointInterpolater.h>
#include <app/Fuse.Animations.TrackAnimator.h>
#include <app/Fuse.Animations.TrackAnimatorState.h>
#include <app/Fuse.Animations.TrackProvider.h>
#include <app/Fuse.Animations.TriggerAnimation.h>
#include <app/Fuse.Animations.TriggerAnimationState.h>
#include <app/Fuse.Animations.TriggerAnimationState_SeekFlags.h>
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
#include <app/Fuse.FastMatrix.h>
#include <app/Fuse.Font.h>
#include <app/Fuse.Gestures.Edge.h>
#include <app/Fuse.Gestures.ScrollDirections.h>
#include <app/Fuse.ITranslationMode.h>
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
#include <app/Fuse.Properties.h>
#include <app/Fuse.PropertyHandle.h>
#include <app/Fuse.Resources.ImageSource.h>
#include <app/Fuse.Rotation.h>
#include <app/Fuse.Scaling.h>
#include <app/Fuse.Shear.h>
#include <app/Fuse.Time.h>
#include <app/Fuse.Transform.h>
#include <app/Fuse.Translation.h>
#include <app/Fuse.TranslationModes.h>
#include <app/Fuse.Triggers.Actions.TriggerDirection.h>
#include <app/Fuse.Triggers.State.h>
#include <app/Fuse.Triggers.StateTransition.h>
#include <app/Fuse.Triggers.TriggerBypassMode.h>
#include <app/Fuse.UpdateManager.h>
#include <app/Fuse.UpdateStage.h>
#include <app/Uno.Action.h>
#include <app/Uno.Action__object.h>
#include <app/Uno.Bool.h>
#include <app/Uno.Char.h>
#include <app/Uno.Collections.ConcurrentCollection__Fuse_Animations_IMixerMaster.h>
#include <app/Uno.Collections.Dictionary__object__object.h>
#include <app/Uno.Collections.ICollection__Fuse_Animations_Keyframe.h>
#include <app/Uno.Collections.ICollection__Fuse_Transform.h>
#include <app/Uno.Collections.IList__Fuse_Animations_Animator.h>
#include <app/Uno.Collections.IList__Fuse_Animations_Keyframe.h>
#include <app/Uno.Collections.IList__Fuse_Transform.h>
#include <app/Uno.Collections.List__Fuse_Animations_Animator.h>
#include <app/Uno.Collections.List__Fuse_Animations_Keyframe.h>
#include <app/Uno.Collections.List__Fuse_Animations_MixerHandle_Fuse_Transform_.h>
#include <app/Uno.Collections.List1_Enumerator__Fuse_Animations_MixerHandle_F-5f679295.h>
#include <app/Uno.Delegate.h>
#include <app/Uno.Diagnostics.Debug.h>
#include <app/Uno.Diagnostics.DebugMessageType.h>
#include <app/Uno.Double.h>
#include <app/Uno.EventArgs.h>
#include <app/Uno.EventHandler.h>
#include <app/Uno.Float.h>
#include <app/Uno.Float2.h>
#include <app/Uno.Float3.h>
#include <app/Uno.Float4.h>
#include <app/Uno.Float4x4.h>
#include <app/Uno.IDisposable.h>
#include <app/Uno.Int.h>
#include <app/Uno.Long.h>
#include <app/Uno.Math.h>
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

::uEnumType* AnimationVariant__typeof()
{
    static ::uStaticStrong< ::uEnumType*> type;
    if (type != NULL) return type;

    type = ::uAllocEnumType("Fuse.Animations.AnimationVariant", ::app::Uno::Int__typeof(), 2);

    type->SetLiterals(
        "Forward", 0LL,
        "Backward", 1LL);

    ::uRegisterType(type);
    return type;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Animations\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

Animator__uType* Animator__typeof()
{
    static ::uStaticStrong<Animator__uType*> type;
    if (type != NULL) return type;

    type = (Animator__uType*)::uAllocClassType(sizeof(Animator__uType), "Fuse.Animations.Animator", false, 0, 1, 0);

    type->__fp_get_AnimatorVariant = Animator__get_AnimatorVariant;
    type->__fp_GetDurationWithDelay = Animator__GetDurationWithDelay;

    type->SetStrongRefs(
        "Mixer", offsetof(Animator, Mixer));

    type->SetFields(2,
        ::uNewField("_mixOp", NULL, offsetof(Animator, _mixOp), ::app::Fuse::Animations::MixOp__typeof()),
        ::uNewField("Mixer", NULL, offsetof(Animator, Mixer), ::app::Fuse::Animations::IMixer__typeof()));

    type->SetFunctions(7,
        ::uNewFunction("CreateState", type->__fp_CreateState, offsetof(Animator__uType, __fp_CreateState), false, ::app::Fuse::Animations::AnimatorState__typeof(), ::app::Fuse::Animations::CreateStateParams__typeof()),
        ::uNewFunction("get_AnimatorVariant", type->__fp_get_AnimatorVariant, offsetof(Animator__uType, __fp_get_AnimatorVariant), false, ::app::Fuse::Animations::AnimatorVariant__typeof()),
        ::uNewFunction("get_Delay", Animator__get_Delay, 0, false, ::app::Uno::Double__typeof()),
        ::uNewFunction("get_MixOp", Animator__get_MixOp, 0, false, ::app::Fuse::Animations::MixOp__typeof()),
        ::uNewFunction("GetDurationWithDelay", type->__fp_GetDurationWithDelay, offsetof(Animator__uType, __fp_GetDurationWithDelay), false, ::app::Uno::Double__typeof(), ::app::Fuse::Animations::AnimationVariant__typeof()),
        ::uNewFunctionVoid("set_Delay", Animator__set_Delay, 0, false, ::app::Uno::Double__typeof()),
        ::uNewFunctionVoid("set_MixOp", Animator__set_MixOp, 0, false, ::app::Fuse::Animations::MixOp__typeof()));

    ::uRegisterType(type);
    return type;
}

void Animator___ObjInit(Animator* __this)
{
    __this->Mixer = ::app::Fuse::Animations::Mixer__get_Default(NULL);
    __this->_mixOp = 1;
}

int Animator__get_AnimatorVariant(Animator* __this)
{
    return 0;
}

double Animator__get_Delay(Animator* __this)
{
    return __this->_Delay;
}

int Animator__get_MixOp(Animator* __this)
{
    return __this->_mixOp;
}

double Animator__GetDurationWithDelay(Animator* __this, int dir)
{
    return __this->Delay();
}

void Animator__set_Delay(Animator* __this, double value)
{
    __this->_Delay = value;
}

void Animator__set_MixOp(Animator* __this, int value)
{
    __this->_mixOp = value;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Animations\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

AnimatorState__uType* AnimatorState__typeof()
{
    static ::uStaticStrong<AnimatorState__uType*> type;
    if (type != NULL) return type;

    type = (AnimatorState__uType*)::uAllocClassType(sizeof(AnimatorState__uType), "Fuse.Animations.AnimatorState", false, 0, 1, 0);

    type->__fp_Disable = AnimatorState__Disable;
    type->__fp_get_IsOpenEnd = AnimatorState__get_IsOpenEnd;

    type->SetStrongRefs(
        "Node", offsetof(AnimatorState, Node));

    type->SetFields(3,
        ::uNewField("Node", NULL, offsetof(AnimatorState, Node), ::app::Fuse::Node__typeof()),
        ::uNewField("TotalDuration", NULL, offsetof(AnimatorState, TotalDuration), ::app::Uno::Double__typeof()),
        ::uNewField("Variant", NULL, offsetof(AnimatorState, Variant), ::app::Fuse::Animations::AnimationVariant__typeof()));

    type->SetFunctions(4,
        ::uNewFunctionVoid("Disable", type->__fp_Disable, offsetof(AnimatorState__uType, __fp_Disable), false),
        ::uNewFunction("get_IsOpenEnd", type->__fp_get_IsOpenEnd, offsetof(AnimatorState__uType, __fp_get_IsOpenEnd), false, ::app::Uno::Bool__typeof()),
        ::uNewFunction("SeekProgress", type->__fp_SeekProgress, offsetof(AnimatorState__uType, __fp_SeekProgress), false, ::app::Uno::Bool__typeof(), ::app::Uno::Double__typeof(), ::app::Uno::Double__typeof(), ::app::Fuse::Animations::SeekDirection__typeof(), ::app::Uno::Double__typeof()),
        ::uNewFunction("SeekTime", type->__fp_SeekTime, offsetof(AnimatorState__uType, __fp_SeekTime), false, ::app::Uno::Bool__typeof(), ::app::Uno::Double__typeof(), ::app::Uno::Double__typeof(), ::app::Fuse::Animations::SeekDirection__typeof(), ::app::Uno::Double__typeof()));

    ::uRegisterType(type);
    return type;
}

void AnimatorState___ObjInit(AnimatorState* __this, ::app::Fuse::Animations::CreateStateParams* p, ::app::Fuse::Node* useNode)
{
    __this->Variant = ::uPtr< ::app::Fuse::Animations::CreateStateParams*>(p)->Variant;
    __this->Node = (useNode != NULL) ? useNode : p->Attached;
    __this->TotalDuration = p->TotalDuration;
}

void AnimatorState__Disable(AnimatorState* __this)
{
}

bool AnimatorState__get_IsOpenEnd(AnimatorState* __this)
{
    return false;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Animations\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

::uEnumType* AnimatorVariant__typeof()
{
    static ::uStaticStrong< ::uEnumType*> type;
    if (type != NULL) return type;

    type = ::uAllocEnumType("Fuse.Animations.AnimatorVariant", ::app::Uno::Int__typeof(), 3);

    type->SetLiterals(
        "Allow", 0LL,
        "Disallow", 1LL,
        "HasBackward", 2LL);

    ::uRegisterType(type);
    return type;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Animations\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

AverageMasterTransform__uType* AverageMasterTransform__typeof()
{
    static ::uStaticStrong<AverageMasterTransform__uType*> type;
    if (type != NULL) return type;

    type = (AverageMasterTransform__uType*)::uAllocClassType(sizeof(AverageMasterTransform__uType), "Fuse.Animations.AverageMasterTransform", false, 1, 0, 0);

    type->SetBaseType(::app::Fuse::Animations::MasterTransform__typeof());
    type->__fp_OnComplete = (void(*)(::app::Fuse::Animations::MasterBase__Fuse_Transform*))AverageMasterTransform__OnComplete;

    type->SetInterfaces(
        ::app::Fuse::Animations::IMixerMaster__typeof(), offsetof(AverageMasterTransform__uType, __interface_0));

    type->SetFunctions(1,
        ::uNewFunction(".ctor", AverageMasterTransform__New_1, 0, true, AverageMasterTransform__typeof(), ::app::Fuse::Node__typeof(), ::app::Fuse::Animations::MixerBase__typeof()));

    ::uRegisterType(type);
    return type;
}

void AverageMasterTransform___ObjInit_2(AverageMasterTransform* __this, ::app::Fuse::Node* node, ::app::Fuse::Animations::MixerBase* mixerBase)
{
    ::app::Fuse::Animations::MasterTransform___ObjInit_1(__this, node, mixerBase);
}

AverageMasterTransform* AverageMasterTransform__New_1(::uStatic* __this, ::app::Fuse::Node* node, ::app::Fuse::Animations::MixerBase* mixerBase)
{
    AverageMasterTransform* inst = (AverageMasterTransform*)::uAllocObject(sizeof(AverageMasterTransform), AverageMasterTransform__typeof());
    inst->_ObjInit_2(node, mixerBase);
    return inst;
}

void AverageMasterTransform__OnComplete(AverageMasterTransform* __this)
{
    ::app::Fuse::Animations::MasterBase1_GFWResult__Fuse_Transform weight = __this->GetFullWeight();
    ::app::Fuse::FastMatrix* nv = ::app::Fuse::FastMatrix__Identity(NULL);
    int c = ::uPtr< ::app::Uno::Collections::List__Fuse_Animations_MixerHandle_Fuse_Transform_*>(__this->Handles)->Count();

    for (int i = 0; i < c; ++i)
    {
        ::app::Fuse::Animations::MixerHandle__Fuse_Transform* v = ::uPtr< ::app::Uno::Collections::List__Fuse_Animations_MixerHandle_Fuse_Transform_*>(__this->Handles)->Item(i);

        if (!::uPtr< ::app::Fuse::Animations::MixerHandle__Fuse_Transform*>(v)->HasValue())
        {
            continue;
        }

        if (::uPtr< ::app::Fuse::Animations::MixerHandle__Fuse_Transform*>(v)->MixOp() == 1)
        {
            ::uPtr< ::app::Fuse::Transform*>(::uPtr< ::app::Fuse::Animations::MixerHandle__Fuse_Transform*>(v)->Value)->AppendTo(nv, ::uPtr< ::app::Fuse::Animations::MixerHandle__Fuse_Transform*>(v)->Strength / weight.Full);
        }
        else
        {
            ::uPtr< ::app::Fuse::Transform*>(v->Value)->AppendTo(nv, v->Strength);
        }
    }

    if (!::uPtr< ::app::Fuse::FastMatrix*>(nv)->Matrix().Equals(::uBox(::app::Uno::Float4x4__typeof(), ::uPtr< ::app::Fuse::FastMatrix*>(::uPtr< ::app::Fuse::Animations::FastMatrixTransform*>(__this->FMT)->Matrix)->Matrix())))
    {
        ::uPtr< ::app::Fuse::Animations::FastMatrixTransform*>(__this->FMT)->Matrix = nv;
        ::uPtr< ::app::Fuse::Animations::FastMatrixTransform*>(__this->FMT)->Changed();
    }
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Animations\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

AverageMixer__uType* AverageMixer__typeof()
{
    static ::uStaticStrong<AverageMixer__uType*> type;
    if (type != NULL) return type;

    type = (AverageMixer__uType*)::uAllocClassType(sizeof(AverageMixer__uType), "Fuse.Animations.AverageMixer", false, 1, 0, 0);

    type->SetBaseType(::app::Fuse::Animations::MixerBase__typeof());
    type->__fp_CreateMaster__bool = (::app::Fuse::Animations::MasterProperty__bool*(*)(::app::Fuse::Animations::MixerBase*, ::app::Uno::UX::Property__bool*, ::app::Fuse::Animations::MixerBase*))AverageMixer__CreateMaster__bool;
    type->__fp_CreateMaster__char = (::app::Fuse::Animations::MasterProperty__char*(*)(::app::Fuse::Animations::MixerBase*, ::app::Uno::UX::Property__char*, ::app::Fuse::Animations::MixerBase*))AverageMixer__CreateMaster__char;
    type->__fp_CreateMaster__double = (::app::Fuse::Animations::MasterProperty__double*(*)(::app::Fuse::Animations::MixerBase*, ::app::Uno::UX::Property__double*, ::app::Fuse::Animations::MixerBase*))AverageMixer__CreateMaster__double;
    type->__fp_CreateMaster__float = (::app::Fuse::Animations::MasterProperty__float*(*)(::app::Fuse::Animations::MixerBase*, ::app::Uno::UX::Property__float*, ::app::Fuse::Animations::MixerBase*))AverageMixer__CreateMaster__float;
    type->__fp_CreateMaster__float2 = (::app::Fuse::Animations::MasterProperty__float2*(*)(::app::Fuse::Animations::MixerBase*, ::app::Uno::UX::Property__float2*, ::app::Fuse::Animations::MixerBase*))AverageMixer__CreateMaster__float2;
    type->__fp_CreateMaster__float3 = (::app::Fuse::Animations::MasterProperty__float3*(*)(::app::Fuse::Animations::MixerBase*, ::app::Uno::UX::Property__float3*, ::app::Fuse::Animations::MixerBase*))AverageMixer__CreateMaster__float3;
    type->__fp_CreateMaster__float4 = (::app::Fuse::Animations::MasterProperty__float4*(*)(::app::Fuse::Animations::MixerBase*, ::app::Uno::UX::Property__float4*, ::app::Fuse::Animations::MixerBase*))AverageMixer__CreateMaster__float4;
    type->__fp_CreateMaster__Fuse_Animations_AnimationVariant = (::app::Fuse::Animations::MasterProperty__Fuse_Animations_AnimationVariant*(*)(::app::Fuse::Animations::MixerBase*, ::app::Uno::UX::Property__Fuse_Animations_AnimationVariant*, ::app::Fuse::Animations::MixerBase*))AverageMixer__CreateMaster__Fuse_Animations_AnimationVariant;
    type->__fp_CreateMaster__Fuse_Animations_Easing = (::app::Fuse::Animations::MasterProperty__Fuse_Animations_Easing*(*)(::app::Fuse::Animations::MixerBase*, ::app::Uno::UX::Property__Fuse_Animations_Easing*, ::app::Fuse::Animations::MixerBase*))AverageMixer__CreateMaster__Fuse_Animations_Easing;
    type->__fp_CreateMaster__Fuse_Animations_KeyframeInterpolation = (::app::Fuse::Animations::MasterProperty__Fuse_Animations_KeyframeInterpolation*(*)(::app::Fuse::Animations::MixerBase*, ::app::Uno::UX::Property__Fuse_Animations_KeyframeInterpolation*, ::app::Fuse::Animations::MixerBase*))AverageMixer__CreateMaster__Fuse_Animations_KeyframeInterpolation;
    type->__fp_CreateMaster__Fuse_Animations_MixOp = (::app::Fuse::Animations::MasterProperty__Fuse_Animations_MixOp*(*)(::app::Fuse::Animations::MixerBase*, ::app::Uno::UX::Property__Fuse_Animations_MixOp*, ::app::Fuse::Animations::MixerBase*))AverageMixer__CreateMaster__Fuse_Animations_MixOp;
    type->__fp_CreateMaster__Fuse_Drawing_BlendMode = (::app::Fuse::Animations::MasterProperty__Fuse_Drawing_BlendMode*(*)(::app::Fuse::Animations::MixerBase*, ::app::Uno::UX::Property__Fuse_Drawing_BlendMode*, ::app::Fuse::Animations::MixerBase*))AverageMixer__CreateMaster__Fuse_Drawing_BlendMode;
    type->__fp_CreateMaster__Fuse_Drawing_Brush = (::app::Fuse::Animations::MasterProperty__Fuse_Drawing_Brush*(*)(::app::Fuse::Animations::MixerBase*, ::app::Uno::UX::Property__Fuse_Drawing_Brush*, ::app::Fuse::Animations::MixerBase*))AverageMixer__CreateMaster__Fuse_Drawing_Brush;
    type->__fp_CreateMaster__Fuse_Drawing_DynamicBrush = (::app::Fuse::Animations::MasterProperty__Fuse_Drawing_DynamicBrush*(*)(::app::Fuse::Animations::MixerBase*, ::app::Uno::UX::Property__Fuse_Drawing_DynamicBrush*, ::app::Fuse::Animations::MixerBase*))AverageMixer__CreateMaster__Fuse_Drawing_DynamicBrush;
    type->__fp_CreateMaster__Fuse_Drawing_GradientStop = (::app::Fuse::Animations::MasterProperty__Fuse_Drawing_GradientStop*(*)(::app::Fuse::Animations::MixerBase*, ::app::Uno::UX::Property__Fuse_Drawing_GradientStop*, ::app::Fuse::Animations::MixerBase*))AverageMixer__CreateMaster__Fuse_Drawing_GradientStop;
    type->__fp_CreateMaster__Fuse_Drawing_LinearGradient = (::app::Fuse::Animations::MasterProperty__Fuse_Drawing_LinearGradient*(*)(::app::Fuse::Animations::MixerBase*, ::app::Uno::UX::Property__Fuse_Drawing_LinearGradient*, ::app::Fuse::Animations::MixerBase*))AverageMixer__CreateMaster__Fuse_Drawing_LinearGradient;
    type->__fp_CreateMaster__Fuse_Drawing_SolidColor = (::app::Fuse::Animations::MasterProperty__Fuse_Drawing_SolidColor*(*)(::app::Fuse::Animations::MixerBase*, ::app::Uno::UX::Property__Fuse_Drawing_SolidColor*, ::app::Fuse::Animations::MixerBase*))AverageMixer__CreateMaster__Fuse_Drawing_SolidColor;
    type->__fp_CreateMaster__Fuse_Drawing_StaticBrush = (::app::Fuse::Animations::MasterProperty__Fuse_Drawing_StaticBrush*(*)(::app::Fuse::Animations::MixerBase*, ::app::Uno::UX::Property__Fuse_Drawing_StaticBrush*, ::app::Fuse::Animations::MixerBase*))AverageMixer__CreateMaster__Fuse_Drawing_StaticBrush;
    type->__fp_CreateMaster__Fuse_Elements_Alignment = (::app::Fuse::Animations::MasterProperty__Fuse_Elements_Alignment*(*)(::app::Fuse::Animations::MixerBase*, ::app::Uno::UX::Property__Fuse_Elements_Alignment*, ::app::Fuse::Animations::MixerBase*))AverageMixer__CreateMaster__Fuse_Elements_Alignment;
    type->__fp_CreateMaster__Fuse_Elements_CachingMode = (::app::Fuse::Animations::MasterProperty__Fuse_Elements_CachingMode*(*)(::app::Fuse::Animations::MixerBase*, ::app::Uno::UX::Property__Fuse_Elements_CachingMode*, ::app::Fuse::Animations::MixerBase*))AverageMixer__CreateMaster__Fuse_Elements_CachingMode;
    type->__fp_CreateMaster__Fuse_Elements_Element = (::app::Fuse::Animations::MasterProperty__Fuse_Elements_Element*(*)(::app::Fuse::Animations::MixerBase*, ::app::Uno::UX::Property__Fuse_Elements_Element*, ::app::Fuse::Animations::MixerBase*))AverageMixer__CreateMaster__Fuse_Elements_Element;
    type->__fp_CreateMaster__Fuse_Elements_HitTestMode = (::app::Fuse::Animations::MasterProperty__Fuse_Elements_HitTestMode*(*)(::app::Fuse::Animations::MixerBase*, ::app::Uno::UX::Property__Fuse_Elements_HitTestMode*, ::app::Fuse::Animations::MixerBase*))AverageMixer__CreateMaster__Fuse_Elements_HitTestMode;
    type->__fp_CreateMaster__Fuse_Elements_SizeUnit = (::app::Fuse::Animations::MasterProperty__Fuse_Elements_SizeUnit*(*)(::app::Fuse::Animations::MixerBase*, ::app::Uno::UX::Property__Fuse_Elements_SizeUnit*, ::app::Fuse::Animations::MixerBase*))AverageMixer__CreateMaster__Fuse_Elements_SizeUnit;
    type->__fp_CreateMaster__Fuse_Elements_StretchDirection = (::app::Fuse::Animations::MasterProperty__Fuse_Elements_StretchDirection*(*)(::app::Fuse::Animations::MixerBase*, ::app::Uno::UX::Property__Fuse_Elements_StretchDirection*, ::app::Fuse::Animations::MixerBase*))AverageMixer__CreateMaster__Fuse_Elements_StretchDirection;
    type->__fp_CreateMaster__Fuse_Elements_StretchMode = (::app::Fuse::Animations::MasterProperty__Fuse_Elements_StretchMode*(*)(::app::Fuse::Animations::MixerBase*, ::app::Uno::UX::Property__Fuse_Elements_StretchMode*, ::app::Fuse::Animations::MixerBase*))AverageMixer__CreateMaster__Fuse_Elements_StretchMode;
    type->__fp_CreateMaster__Fuse_Elements_StretchSizing = (::app::Fuse::Animations::MasterProperty__Fuse_Elements_StretchSizing*(*)(::app::Fuse::Animations::MixerBase*, ::app::Uno::UX::Property__Fuse_Elements_StretchSizing*, ::app::Fuse::Animations::MixerBase*))AverageMixer__CreateMaster__Fuse_Elements_StretchSizing;
    type->__fp_CreateMaster__Fuse_Elements_TextAlignment = (::app::Fuse::Animations::MasterProperty__Fuse_Elements_TextAlignment*(*)(::app::Fuse::Animations::MixerBase*, ::app::Uno::UX::Property__Fuse_Elements_TextAlignment*, ::app::Fuse::Animations::MixerBase*))AverageMixer__CreateMaster__Fuse_Elements_TextAlignment;
    type->__fp_CreateMaster__Fuse_Elements_TextWrapping = (::app::Fuse::Animations::MasterProperty__Fuse_Elements_TextWrapping*(*)(::app::Fuse::Animations::MixerBase*, ::app::Uno::UX::Property__Fuse_Elements_TextWrapping*, ::app::Fuse::Animations::MixerBase*))AverageMixer__CreateMaster__Fuse_Elements_TextWrapping;
    type->__fp_CreateMaster__Fuse_Elements_Visibility = (::app::Fuse::Animations::MasterProperty__Fuse_Elements_Visibility*(*)(::app::Fuse::Animations::MixerBase*, ::app::Uno::UX::Property__Fuse_Elements_Visibility*, ::app::Fuse::Animations::MixerBase*))AverageMixer__CreateMaster__Fuse_Elements_Visibility;
    type->__fp_CreateMaster__Fuse_Font = (::app::Fuse::Animations::MasterProperty__Fuse_Font*(*)(::app::Fuse::Animations::MixerBase*, ::app::Uno::UX::Property__Fuse_Font*, ::app::Fuse::Animations::MixerBase*))AverageMixer__CreateMaster__Fuse_Font;
    type->__fp_CreateMaster__Fuse_Gestures_Edge = (::app::Fuse::Animations::MasterProperty__Fuse_Gestures_Edge*(*)(::app::Fuse::Animations::MixerBase*, ::app::Uno::UX::Property__Fuse_Gestures_Edge*, ::app::Fuse::Animations::MixerBase*))AverageMixer__CreateMaster__Fuse_Gestures_Edge;
    type->__fp_CreateMaster__Fuse_Gestures_ScrollDirections = (::app::Fuse::Animations::MasterProperty__Fuse_Gestures_ScrollDirections*(*)(::app::Fuse::Animations::MixerBase*, ::app::Uno::UX::Property__Fuse_Gestures_ScrollDirections*, ::app::Fuse::Animations::MixerBase*))AverageMixer__CreateMaster__Fuse_Gestures_ScrollDirections;
    type->__fp_CreateMaster__Fuse_Layouts_Dock = (::app::Fuse::Animations::MasterProperty__Fuse_Layouts_Dock*(*)(::app::Fuse::Animations::MixerBase*, ::app::Uno::UX::Property__Fuse_Layouts_Dock*, ::app::Fuse::Animations::MixerBase*))AverageMixer__CreateMaster__Fuse_Layouts_Dock;
    type->__fp_CreateMaster__Fuse_Layouts_FlowDirection = (::app::Fuse::Animations::MasterProperty__Fuse_Layouts_FlowDirection*(*)(::app::Fuse::Animations::MixerBase*, ::app::Uno::UX::Property__Fuse_Layouts_FlowDirection*, ::app::Fuse::Animations::MixerBase*))AverageMixer__CreateMaster__Fuse_Layouts_FlowDirection;
    type->__fp_CreateMaster__Fuse_Layouts_Metric = (::app::Fuse::Animations::MasterProperty__Fuse_Layouts_Metric*(*)(::app::Fuse::Animations::MixerBase*, ::app::Uno::UX::Property__Fuse_Layouts_Metric*, ::app::Fuse::Animations::MixerBase*))AverageMixer__CreateMaster__Fuse_Layouts_Metric;
    type->__fp_CreateMaster__Fuse_Layouts_Orientation = (::app::Fuse::Animations::MasterProperty__Fuse_Layouts_Orientation*(*)(::app::Fuse::Animations::MixerBase*, ::app::Uno::UX::Property__Fuse_Layouts_Orientation*, ::app::Fuse::Animations::MixerBase*))AverageMixer__CreateMaster__Fuse_Layouts_Orientation;
    type->__fp_CreateMaster__Fuse_Navigation_NavigationDirection = (::app::Fuse::Animations::MasterProperty__Fuse_Navigation_NavigationDirection*(*)(::app::Fuse::Animations::MixerBase*, ::app::Uno::UX::Property__Fuse_Navigation_NavigationDirection*, ::app::Fuse::Animations::MixerBase*))AverageMixer__CreateMaster__Fuse_Navigation_NavigationDirection;
    type->__fp_CreateMaster__Fuse_Navigation_NavigationEdge = (::app::Fuse::Animations::MasterProperty__Fuse_Navigation_NavigationEdge*(*)(::app::Fuse::Animations::MixerBase*, ::app::Uno::UX::Property__Fuse_Navigation_NavigationEdge*, ::app::Fuse::Animations::MixerBase*))AverageMixer__CreateMaster__Fuse_Navigation_NavigationEdge;
    type->__fp_CreateMaster__Fuse_Navigation_NavigationGotoMode = (::app::Fuse::Animations::MasterProperty__Fuse_Navigation_NavigationGotoMode*(*)(::app::Fuse::Animations::MixerBase*, ::app::Uno::UX::Property__Fuse_Navigation_NavigationGotoMode*, ::app::Fuse::Animations::MixerBase*))AverageMixer__CreateMaster__Fuse_Navigation_NavigationGotoMode;
    type->__fp_CreateMaster__Fuse_Navigation_SnapTo = (::app::Fuse::Animations::MasterProperty__Fuse_Navigation_SnapTo*(*)(::app::Fuse::Animations::MixerBase*, ::app::Uno::UX::Property__Fuse_Navigation_SnapTo*, ::app::Fuse::Animations::MixerBase*))AverageMixer__CreateMaster__Fuse_Navigation_SnapTo;
    type->__fp_CreateMaster__Fuse_Navigation_SwipeDirection = (::app::Fuse::Animations::MasterProperty__Fuse_Navigation_SwipeDirection*(*)(::app::Fuse::Animations::MixerBase*, ::app::Uno::UX::Property__Fuse_Navigation_SwipeDirection*, ::app::Fuse::Animations::MixerBase*))AverageMixer__CreateMaster__Fuse_Navigation_SwipeDirection;
    type->__fp_CreateMaster__Fuse_Navigation_SwipeEnds = (::app::Fuse::Animations::MasterProperty__Fuse_Navigation_SwipeEnds*(*)(::app::Fuse::Animations::MixerBase*, ::app::Uno::UX::Property__Fuse_Navigation_SwipeEnds*, ::app::Fuse::Animations::MixerBase*))AverageMixer__CreateMaster__Fuse_Navigation_SwipeEnds;
    type->__fp_CreateMaster__Fuse_Node = (::app::Fuse::Animations::MasterProperty__Fuse_Node*(*)(::app::Fuse::Animations::MixerBase*, ::app::Uno::UX::Property__Fuse_Node*, ::app::Fuse::Animations::MixerBase*))AverageMixer__CreateMaster__Fuse_Node;
    type->__fp_CreateMaster__Fuse_Resources_ImageSource = (::app::Fuse::Animations::MasterProperty__Fuse_Resources_ImageSource*(*)(::app::Fuse::Animations::MixerBase*, ::app::Uno::UX::Property__Fuse_Resources_ImageSource*, ::app::Fuse::Animations::MixerBase*))AverageMixer__CreateMaster__Fuse_Resources_ImageSource;
    type->__fp_CreateMaster__Fuse_Triggers_Actions_TriggerDirection = (::app::Fuse::Animations::MasterProperty__Fuse_Triggers_Actions_TriggerDirection*(*)(::app::Fuse::Animations::MixerBase*, ::app::Uno::UX::Property__Fuse_Triggers_Actions_TriggerDirection*, ::app::Fuse::Animations::MixerBase*))AverageMixer__CreateMaster__Fuse_Triggers_Actions_TriggerDirection;
    type->__fp_CreateMaster__Fuse_Triggers_State = (::app::Fuse::Animations::MasterProperty__Fuse_Triggers_State*(*)(::app::Fuse::Animations::MixerBase*, ::app::Uno::UX::Property__Fuse_Triggers_State*, ::app::Fuse::Animations::MixerBase*))AverageMixer__CreateMaster__Fuse_Triggers_State;
    type->__fp_CreateMaster__Fuse_Triggers_StateTransition = (::app::Fuse::Animations::MasterProperty__Fuse_Triggers_StateTransition*(*)(::app::Fuse::Animations::MixerBase*, ::app::Uno::UX::Property__Fuse_Triggers_StateTransition*, ::app::Fuse::Animations::MixerBase*))AverageMixer__CreateMaster__Fuse_Triggers_StateTransition;
    type->__fp_CreateMaster__Fuse_Triggers_TriggerBypassMode = (::app::Fuse::Animations::MasterProperty__Fuse_Triggers_TriggerBypassMode*(*)(::app::Fuse::Animations::MixerBase*, ::app::Uno::UX::Property__Fuse_Triggers_TriggerBypassMode*, ::app::Fuse::Animations::MixerBase*))AverageMixer__CreateMaster__Fuse_Triggers_TriggerBypassMode;
    type->__fp_CreateMaster__int = (::app::Fuse::Animations::MasterProperty__int*(*)(::app::Fuse::Animations::MixerBase*, ::app::Uno::UX::Property__int*, ::app::Fuse::Animations::MixerBase*))AverageMixer__CreateMaster__int;
    type->__fp_CreateMaster__int2 = (::app::Fuse::Animations::MasterProperty__int2*(*)(::app::Fuse::Animations::MixerBase*, ::app::Uno::UX::Property__int2*, ::app::Fuse::Animations::MixerBase*))AverageMixer__CreateMaster__int2;
    type->__fp_CreateMaster__int3 = (::app::Fuse::Animations::MasterProperty__int3*(*)(::app::Fuse::Animations::MixerBase*, ::app::Uno::UX::Property__int3*, ::app::Fuse::Animations::MixerBase*))AverageMixer__CreateMaster__int3;
    type->__fp_CreateMaster__int4 = (::app::Fuse::Animations::MasterProperty__int4*(*)(::app::Fuse::Animations::MixerBase*, ::app::Uno::UX::Property__int4*, ::app::Fuse::Animations::MixerBase*))AverageMixer__CreateMaster__int4;
    type->__fp_CreateMaster__long = (::app::Fuse::Animations::MasterProperty__long*(*)(::app::Fuse::Animations::MixerBase*, ::app::Uno::UX::Property__long*, ::app::Fuse::Animations::MixerBase*))AverageMixer__CreateMaster__long;
    type->__fp_CreateMaster__object = (::app::Fuse::Animations::MasterProperty__object*(*)(::app::Fuse::Animations::MixerBase*, ::app::Uno::UX::Property__object*, ::app::Fuse::Animations::MixerBase*))AverageMixer__CreateMaster__object;
    type->__fp_CreateMaster__short = (::app::Fuse::Animations::MasterProperty__short*(*)(::app::Fuse::Animations::MixerBase*, ::app::Uno::UX::Property__short*, ::app::Fuse::Animations::MixerBase*))AverageMixer__CreateMaster__short;
    type->__fp_CreateMaster__string = (::app::Fuse::Animations::MasterProperty__string*(*)(::app::Fuse::Animations::MixerBase*, ::app::Uno::UX::Property__string*, ::app::Fuse::Animations::MixerBase*))AverageMixer__CreateMaster__string;
    type->__fp_CreateMaster__Uno_EventArgs = (::app::Fuse::Animations::MasterProperty__Uno_EventArgs*(*)(::app::Fuse::Animations::MixerBase*, ::app::Uno::UX::Property__Uno_EventArgs*, ::app::Fuse::Animations::MixerBase*))AverageMixer__CreateMaster__Uno_EventArgs;
    type->__fp_CreateMaster__Uno_Platform_iOS_StatusBarStyle = (::app::Fuse::Animations::MasterProperty__Uno_Platform_iOS_StatusBarStyle*(*)(::app::Fuse::Animations::MixerBase*, ::app::Uno::UX::Property__Uno_Platform_iOS_StatusBarStyle*, ::app::Fuse::Animations::MixerBase*))AverageMixer__CreateMaster__Uno_Platform_iOS_StatusBarStyle;
    type->__fp_CreateMaster__Uno_UX_FileSource = (::app::Fuse::Animations::MasterProperty__Uno_UX_FileSource*(*)(::app::Fuse::Animations::MixerBase*, ::app::Uno::UX::Property__Uno_UX_FileSource*, ::app::Fuse::Animations::MixerBase*))AverageMixer__CreateMaster__Uno_UX_FileSource;
    type->__fp_CreateMasterTransform = (::app::Fuse::Animations::MasterBase__Fuse_Transform*(*)(::app::Fuse::Animations::MixerBase*, ::app::Fuse::Node*, ::app::Fuse::Animations::MixerBase*))AverageMixer__CreateMasterTransform;

    type->SetInterfaces(
        ::app::Fuse::Animations::IMixer__typeof(), offsetof(AverageMixer__uType, __interface_0));

    type->SetFunctions(1,
        ::uNewFunction(".ctor", AverageMixer__New_1, 0, true, AverageMixer__typeof()));

    ::uRegisterType(type);
    return type;
}

void AverageMixer___ObjInit_1(AverageMixer* __this)
{
    ::app::Fuse::Animations::MixerBase___ObjInit(__this);
}

::app::Fuse::Animations::MasterProperty__bool* AverageMixer__CreateMaster__bool(AverageMixer* __this, ::app::Uno::UX::Property__bool* property, ::app::Fuse::Animations::MixerBase* mixerBase)
{
    return (::app::Fuse::Animations::MasterProperty__bool*)::app::Fuse::Animations::AverageMasterProperty__bool__New_1(NULL, property, mixerBase);
}

::app::Fuse::Animations::MasterProperty__char* AverageMixer__CreateMaster__char(AverageMixer* __this, ::app::Uno::UX::Property__char* property, ::app::Fuse::Animations::MixerBase* mixerBase)
{
    return (::app::Fuse::Animations::MasterProperty__char*)::app::Fuse::Animations::AverageMasterProperty__char__New_1(NULL, property, mixerBase);
}

::app::Fuse::Animations::MasterProperty__double* AverageMixer__CreateMaster__double(AverageMixer* __this, ::app::Uno::UX::Property__double* property, ::app::Fuse::Animations::MixerBase* mixerBase)
{
    return (::app::Fuse::Animations::MasterProperty__double*)::app::Fuse::Animations::AverageMasterProperty__double__New_1(NULL, property, mixerBase);
}

::app::Fuse::Animations::MasterProperty__float* AverageMixer__CreateMaster__float(AverageMixer* __this, ::app::Uno::UX::Property__float* property, ::app::Fuse::Animations::MixerBase* mixerBase)
{
    return (::app::Fuse::Animations::MasterProperty__float*)::app::Fuse::Animations::AverageMasterProperty__float__New_1(NULL, property, mixerBase);
}

::app::Fuse::Animations::MasterProperty__float2* AverageMixer__CreateMaster__float2(AverageMixer* __this, ::app::Uno::UX::Property__float2* property, ::app::Fuse::Animations::MixerBase* mixerBase)
{
    return (::app::Fuse::Animations::MasterProperty__float2*)::app::Fuse::Animations::AverageMasterProperty__float2__New_1(NULL, property, mixerBase);
}

::app::Fuse::Animations::MasterProperty__float3* AverageMixer__CreateMaster__float3(AverageMixer* __this, ::app::Uno::UX::Property__float3* property, ::app::Fuse::Animations::MixerBase* mixerBase)
{
    return (::app::Fuse::Animations::MasterProperty__float3*)::app::Fuse::Animations::AverageMasterProperty__float3__New_1(NULL, property, mixerBase);
}

::app::Fuse::Animations::MasterProperty__float4* AverageMixer__CreateMaster__float4(AverageMixer* __this, ::app::Uno::UX::Property__float4* property, ::app::Fuse::Animations::MixerBase* mixerBase)
{
    return (::app::Fuse::Animations::MasterProperty__float4*)::app::Fuse::Animations::AverageMasterProperty__float4__New_1(NULL, property, mixerBase);
}

::app::Fuse::Animations::MasterProperty__Fuse_Animations_AnimationVariant* AverageMixer__CreateMaster__Fuse_Animations_AnimationVariant(AverageMixer* __this, ::app::Uno::UX::Property__Fuse_Animations_AnimationVariant* property, ::app::Fuse::Animations::MixerBase* mixerBase)
{
    return (::app::Fuse::Animations::MasterProperty__Fuse_Animations_AnimationVariant*)::app::Fuse::Animations::AverageMasterProperty__Fuse_Animations_AnimationVariant__New_1(NULL, property, mixerBase);
}

::app::Fuse::Animations::MasterProperty__Fuse_Animations_Easing* AverageMixer__CreateMaster__Fuse_Animations_Easing(AverageMixer* __this, ::app::Uno::UX::Property__Fuse_Animations_Easing* property, ::app::Fuse::Animations::MixerBase* mixerBase)
{
    return (::app::Fuse::Animations::MasterProperty__Fuse_Animations_Easing*)::app::Fuse::Animations::AverageMasterProperty__Fuse_Animations_Easing__New_1(NULL, property, mixerBase);
}

::app::Fuse::Animations::MasterProperty__Fuse_Animations_KeyframeInterpolation* AverageMixer__CreateMaster__Fuse_Animations_KeyframeInterpolation(AverageMixer* __this, ::app::Uno::UX::Property__Fuse_Animations_KeyframeInterpolation* property, ::app::Fuse::Animations::MixerBase* mixerBase)
{
    return (::app::Fuse::Animations::MasterProperty__Fuse_Animations_KeyframeInterpolation*)::app::Fuse::Animations::AverageMasterProperty__Fuse_Animations_KeyframeInterpolation__New_1(NULL, property, mixerBase);
}

::app::Fuse::Animations::MasterProperty__Fuse_Animations_MixOp* AverageMixer__CreateMaster__Fuse_Animations_MixOp(AverageMixer* __this, ::app::Uno::UX::Property__Fuse_Animations_MixOp* property, ::app::Fuse::Animations::MixerBase* mixerBase)
{
    return (::app::Fuse::Animations::MasterProperty__Fuse_Animations_MixOp*)::app::Fuse::Animations::AverageMasterProperty__Fuse_Animations_MixOp__New_1(NULL, property, mixerBase);
}

::app::Fuse::Animations::MasterProperty__Fuse_Drawing_BlendMode* AverageMixer__CreateMaster__Fuse_Drawing_BlendMode(AverageMixer* __this, ::app::Uno::UX::Property__Fuse_Drawing_BlendMode* property, ::app::Fuse::Animations::MixerBase* mixerBase)
{
    return (::app::Fuse::Animations::MasterProperty__Fuse_Drawing_BlendMode*)::app::Fuse::Animations::AverageMasterProperty__Fuse_Drawing_BlendMode__New_1(NULL, property, mixerBase);
}

::app::Fuse::Animations::MasterProperty__Fuse_Drawing_Brush* AverageMixer__CreateMaster__Fuse_Drawing_Brush(AverageMixer* __this, ::app::Uno::UX::Property__Fuse_Drawing_Brush* property, ::app::Fuse::Animations::MixerBase* mixerBase)
{
    return (::app::Fuse::Animations::MasterProperty__Fuse_Drawing_Brush*)::app::Fuse::Animations::AverageMasterProperty__Fuse_Drawing_Brush__New_1(NULL, property, mixerBase);
}

::app::Fuse::Animations::MasterProperty__Fuse_Drawing_DynamicBrush* AverageMixer__CreateMaster__Fuse_Drawing_DynamicBrush(AverageMixer* __this, ::app::Uno::UX::Property__Fuse_Drawing_DynamicBrush* property, ::app::Fuse::Animations::MixerBase* mixerBase)
{
    return (::app::Fuse::Animations::MasterProperty__Fuse_Drawing_DynamicBrush*)::app::Fuse::Animations::AverageMasterProperty__Fuse_Drawing_DynamicBrush__New_1(NULL, property, mixerBase);
}

::app::Fuse::Animations::MasterProperty__Fuse_Drawing_GradientStop* AverageMixer__CreateMaster__Fuse_Drawing_GradientStop(AverageMixer* __this, ::app::Uno::UX::Property__Fuse_Drawing_GradientStop* property, ::app::Fuse::Animations::MixerBase* mixerBase)
{
    return (::app::Fuse::Animations::MasterProperty__Fuse_Drawing_GradientStop*)::app::Fuse::Animations::AverageMasterProperty__Fuse_Drawing_GradientStop__New_1(NULL, property, mixerBase);
}

::app::Fuse::Animations::MasterProperty__Fuse_Drawing_LinearGradient* AverageMixer__CreateMaster__Fuse_Drawing_LinearGradient(AverageMixer* __this, ::app::Uno::UX::Property__Fuse_Drawing_LinearGradient* property, ::app::Fuse::Animations::MixerBase* mixerBase)
{
    return (::app::Fuse::Animations::MasterProperty__Fuse_Drawing_LinearGradient*)::app::Fuse::Animations::AverageMasterProperty__Fuse_Drawing_LinearGradient__New_1(NULL, property, mixerBase);
}

::app::Fuse::Animations::MasterProperty__Fuse_Drawing_SolidColor* AverageMixer__CreateMaster__Fuse_Drawing_SolidColor(AverageMixer* __this, ::app::Uno::UX::Property__Fuse_Drawing_SolidColor* property, ::app::Fuse::Animations::MixerBase* mixerBase)
{
    return (::app::Fuse::Animations::MasterProperty__Fuse_Drawing_SolidColor*)::app::Fuse::Animations::AverageMasterProperty__Fuse_Drawing_SolidColor__New_1(NULL, property, mixerBase);
}

::app::Fuse::Animations::MasterProperty__Fuse_Drawing_StaticBrush* AverageMixer__CreateMaster__Fuse_Drawing_StaticBrush(AverageMixer* __this, ::app::Uno::UX::Property__Fuse_Drawing_StaticBrush* property, ::app::Fuse::Animations::MixerBase* mixerBase)
{
    return (::app::Fuse::Animations::MasterProperty__Fuse_Drawing_StaticBrush*)::app::Fuse::Animations::AverageMasterProperty__Fuse_Drawing_StaticBrush__New_1(NULL, property, mixerBase);
}

::app::Fuse::Animations::MasterProperty__Fuse_Elements_Alignment* AverageMixer__CreateMaster__Fuse_Elements_Alignment(AverageMixer* __this, ::app::Uno::UX::Property__Fuse_Elements_Alignment* property, ::app::Fuse::Animations::MixerBase* mixerBase)
{
    return (::app::Fuse::Animations::MasterProperty__Fuse_Elements_Alignment*)::app::Fuse::Animations::AverageMasterProperty__Fuse_Elements_Alignment__New_1(NULL, property, mixerBase);
}

::app::Fuse::Animations::MasterProperty__Fuse_Elements_CachingMode* AverageMixer__CreateMaster__Fuse_Elements_CachingMode(AverageMixer* __this, ::app::Uno::UX::Property__Fuse_Elements_CachingMode* property, ::app::Fuse::Animations::MixerBase* mixerBase)
{
    return (::app::Fuse::Animations::MasterProperty__Fuse_Elements_CachingMode*)::app::Fuse::Animations::AverageMasterProperty__Fuse_Elements_CachingMode__New_1(NULL, property, mixerBase);
}

::app::Fuse::Animations::MasterProperty__Fuse_Elements_Element* AverageMixer__CreateMaster__Fuse_Elements_Element(AverageMixer* __this, ::app::Uno::UX::Property__Fuse_Elements_Element* property, ::app::Fuse::Animations::MixerBase* mixerBase)
{
    return (::app::Fuse::Animations::MasterProperty__Fuse_Elements_Element*)::app::Fuse::Animations::AverageMasterProperty__Fuse_Elements_Element__New_1(NULL, property, mixerBase);
}

::app::Fuse::Animations::MasterProperty__Fuse_Elements_HitTestMode* AverageMixer__CreateMaster__Fuse_Elements_HitTestMode(AverageMixer* __this, ::app::Uno::UX::Property__Fuse_Elements_HitTestMode* property, ::app::Fuse::Animations::MixerBase* mixerBase)
{
    return (::app::Fuse::Animations::MasterProperty__Fuse_Elements_HitTestMode*)::app::Fuse::Animations::AverageMasterProperty__Fuse_Elements_HitTestMode__New_1(NULL, property, mixerBase);
}

::app::Fuse::Animations::MasterProperty__Fuse_Elements_SizeUnit* AverageMixer__CreateMaster__Fuse_Elements_SizeUnit(AverageMixer* __this, ::app::Uno::UX::Property__Fuse_Elements_SizeUnit* property, ::app::Fuse::Animations::MixerBase* mixerBase)
{
    return (::app::Fuse::Animations::MasterProperty__Fuse_Elements_SizeUnit*)::app::Fuse::Animations::AverageMasterProperty__Fuse_Elements_SizeUnit__New_1(NULL, property, mixerBase);
}

::app::Fuse::Animations::MasterProperty__Fuse_Elements_StretchDirection* AverageMixer__CreateMaster__Fuse_Elements_StretchDirection(AverageMixer* __this, ::app::Uno::UX::Property__Fuse_Elements_StretchDirection* property, ::app::Fuse::Animations::MixerBase* mixerBase)
{
    return (::app::Fuse::Animations::MasterProperty__Fuse_Elements_StretchDirection*)::app::Fuse::Animations::AverageMasterProperty__Fuse_Elements_StretchDirection__New_1(NULL, property, mixerBase);
}

::app::Fuse::Animations::MasterProperty__Fuse_Elements_StretchMode* AverageMixer__CreateMaster__Fuse_Elements_StretchMode(AverageMixer* __this, ::app::Uno::UX::Property__Fuse_Elements_StretchMode* property, ::app::Fuse::Animations::MixerBase* mixerBase)
{
    return (::app::Fuse::Animations::MasterProperty__Fuse_Elements_StretchMode*)::app::Fuse::Animations::AverageMasterProperty__Fuse_Elements_StretchMode__New_1(NULL, property, mixerBase);
}

::app::Fuse::Animations::MasterProperty__Fuse_Elements_StretchSizing* AverageMixer__CreateMaster__Fuse_Elements_StretchSizing(AverageMixer* __this, ::app::Uno::UX::Property__Fuse_Elements_StretchSizing* property, ::app::Fuse::Animations::MixerBase* mixerBase)
{
    return (::app::Fuse::Animations::MasterProperty__Fuse_Elements_StretchSizing*)::app::Fuse::Animations::AverageMasterProperty__Fuse_Elements_StretchSizing__New_1(NULL, property, mixerBase);
}

::app::Fuse::Animations::MasterProperty__Fuse_Elements_TextAlignment* AverageMixer__CreateMaster__Fuse_Elements_TextAlignment(AverageMixer* __this, ::app::Uno::UX::Property__Fuse_Elements_TextAlignment* property, ::app::Fuse::Animations::MixerBase* mixerBase)
{
    return (::app::Fuse::Animations::MasterProperty__Fuse_Elements_TextAlignment*)::app::Fuse::Animations::AverageMasterProperty__Fuse_Elements_TextAlignment__New_1(NULL, property, mixerBase);
}

::app::Fuse::Animations::MasterProperty__Fuse_Elements_TextWrapping* AverageMixer__CreateMaster__Fuse_Elements_TextWrapping(AverageMixer* __this, ::app::Uno::UX::Property__Fuse_Elements_TextWrapping* property, ::app::Fuse::Animations::MixerBase* mixerBase)
{
    return (::app::Fuse::Animations::MasterProperty__Fuse_Elements_TextWrapping*)::app::Fuse::Animations::AverageMasterProperty__Fuse_Elements_TextWrapping__New_1(NULL, property, mixerBase);
}

::app::Fuse::Animations::MasterProperty__Fuse_Elements_Visibility* AverageMixer__CreateMaster__Fuse_Elements_Visibility(AverageMixer* __this, ::app::Uno::UX::Property__Fuse_Elements_Visibility* property, ::app::Fuse::Animations::MixerBase* mixerBase)
{
    return (::app::Fuse::Animations::MasterProperty__Fuse_Elements_Visibility*)::app::Fuse::Animations::AverageMasterProperty__Fuse_Elements_Visibility__New_1(NULL, property, mixerBase);
}

::app::Fuse::Animations::MasterProperty__Fuse_Font* AverageMixer__CreateMaster__Fuse_Font(AverageMixer* __this, ::app::Uno::UX::Property__Fuse_Font* property, ::app::Fuse::Animations::MixerBase* mixerBase)
{
    return (::app::Fuse::Animations::MasterProperty__Fuse_Font*)::app::Fuse::Animations::AverageMasterProperty__Fuse_Font__New_1(NULL, property, mixerBase);
}

::app::Fuse::Animations::MasterProperty__Fuse_Gestures_Edge* AverageMixer__CreateMaster__Fuse_Gestures_Edge(AverageMixer* __this, ::app::Uno::UX::Property__Fuse_Gestures_Edge* property, ::app::Fuse::Animations::MixerBase* mixerBase)
{
    return (::app::Fuse::Animations::MasterProperty__Fuse_Gestures_Edge*)::app::Fuse::Animations::AverageMasterProperty__Fuse_Gestures_Edge__New_1(NULL, property, mixerBase);
}

::app::Fuse::Animations::MasterProperty__Fuse_Gestures_ScrollDirections* AverageMixer__CreateMaster__Fuse_Gestures_ScrollDirections(AverageMixer* __this, ::app::Uno::UX::Property__Fuse_Gestures_ScrollDirections* property, ::app::Fuse::Animations::MixerBase* mixerBase)
{
    return (::app::Fuse::Animations::MasterProperty__Fuse_Gestures_ScrollDirections*)::app::Fuse::Animations::AverageMasterProperty__Fuse_Gestures_ScrollDirections__New_1(NULL, property, mixerBase);
}

::app::Fuse::Animations::MasterProperty__Fuse_Layouts_Dock* AverageMixer__CreateMaster__Fuse_Layouts_Dock(AverageMixer* __this, ::app::Uno::UX::Property__Fuse_Layouts_Dock* property, ::app::Fuse::Animations::MixerBase* mixerBase)
{
    return (::app::Fuse::Animations::MasterProperty__Fuse_Layouts_Dock*)::app::Fuse::Animations::AverageMasterProperty__Fuse_Layouts_Dock__New_1(NULL, property, mixerBase);
}

::app::Fuse::Animations::MasterProperty__Fuse_Layouts_FlowDirection* AverageMixer__CreateMaster__Fuse_Layouts_FlowDirection(AverageMixer* __this, ::app::Uno::UX::Property__Fuse_Layouts_FlowDirection* property, ::app::Fuse::Animations::MixerBase* mixerBase)
{
    return (::app::Fuse::Animations::MasterProperty__Fuse_Layouts_FlowDirection*)::app::Fuse::Animations::AverageMasterProperty__Fuse_Layouts_FlowDirection__New_1(NULL, property, mixerBase);
}

::app::Fuse::Animations::MasterProperty__Fuse_Layouts_Metric* AverageMixer__CreateMaster__Fuse_Layouts_Metric(AverageMixer* __this, ::app::Uno::UX::Property__Fuse_Layouts_Metric* property, ::app::Fuse::Animations::MixerBase* mixerBase)
{
    return (::app::Fuse::Animations::MasterProperty__Fuse_Layouts_Metric*)::app::Fuse::Animations::AverageMasterProperty__Fuse_Layouts_Metric__New_1(NULL, property, mixerBase);
}

::app::Fuse::Animations::MasterProperty__Fuse_Layouts_Orientation* AverageMixer__CreateMaster__Fuse_Layouts_Orientation(AverageMixer* __this, ::app::Uno::UX::Property__Fuse_Layouts_Orientation* property, ::app::Fuse::Animations::MixerBase* mixerBase)
{
    return (::app::Fuse::Animations::MasterProperty__Fuse_Layouts_Orientation*)::app::Fuse::Animations::AverageMasterProperty__Fuse_Layouts_Orientation__New_1(NULL, property, mixerBase);
}

::app::Fuse::Animations::MasterProperty__Fuse_Navigation_NavigationDirection* AverageMixer__CreateMaster__Fuse_Navigation_NavigationDirection(AverageMixer* __this, ::app::Uno::UX::Property__Fuse_Navigation_NavigationDirection* property, ::app::Fuse::Animations::MixerBase* mixerBase)
{
    return (::app::Fuse::Animations::MasterProperty__Fuse_Navigation_NavigationDirection*)::app::Fuse::Animations::AverageMasterProperty__Fuse_Navigation_NavigationDirection__New_1(NULL, property, mixerBase);
}

::app::Fuse::Animations::MasterProperty__Fuse_Navigation_NavigationEdge* AverageMixer__CreateMaster__Fuse_Navigation_NavigationEdge(AverageMixer* __this, ::app::Uno::UX::Property__Fuse_Navigation_NavigationEdge* property, ::app::Fuse::Animations::MixerBase* mixerBase)
{
    return (::app::Fuse::Animations::MasterProperty__Fuse_Navigation_NavigationEdge*)::app::Fuse::Animations::AverageMasterProperty__Fuse_Navigation_NavigationEdge__New_1(NULL, property, mixerBase);
}

::app::Fuse::Animations::MasterProperty__Fuse_Navigation_NavigationGotoMode* AverageMixer__CreateMaster__Fuse_Navigation_NavigationGotoMode(AverageMixer* __this, ::app::Uno::UX::Property__Fuse_Navigation_NavigationGotoMode* property, ::app::Fuse::Animations::MixerBase* mixerBase)
{
    return (::app::Fuse::Animations::MasterProperty__Fuse_Navigation_NavigationGotoMode*)::app::Fuse::Animations::AverageMasterProperty__Fuse_Navigation_NavigationGotoMode__New_1(NULL, property, mixerBase);
}

::app::Fuse::Animations::MasterProperty__Fuse_Navigation_SnapTo* AverageMixer__CreateMaster__Fuse_Navigation_SnapTo(AverageMixer* __this, ::app::Uno::UX::Property__Fuse_Navigation_SnapTo* property, ::app::Fuse::Animations::MixerBase* mixerBase)
{
    return (::app::Fuse::Animations::MasterProperty__Fuse_Navigation_SnapTo*)::app::Fuse::Animations::AverageMasterProperty__Fuse_Navigation_SnapTo__New_1(NULL, property, mixerBase);
}

::app::Fuse::Animations::MasterProperty__Fuse_Navigation_SwipeDirection* AverageMixer__CreateMaster__Fuse_Navigation_SwipeDirection(AverageMixer* __this, ::app::Uno::UX::Property__Fuse_Navigation_SwipeDirection* property, ::app::Fuse::Animations::MixerBase* mixerBase)
{
    return (::app::Fuse::Animations::MasterProperty__Fuse_Navigation_SwipeDirection*)::app::Fuse::Animations::AverageMasterProperty__Fuse_Navigation_SwipeDirection__New_1(NULL, property, mixerBase);
}

::app::Fuse::Animations::MasterProperty__Fuse_Navigation_SwipeEnds* AverageMixer__CreateMaster__Fuse_Navigation_SwipeEnds(AverageMixer* __this, ::app::Uno::UX::Property__Fuse_Navigation_SwipeEnds* property, ::app::Fuse::Animations::MixerBase* mixerBase)
{
    return (::app::Fuse::Animations::MasterProperty__Fuse_Navigation_SwipeEnds*)::app::Fuse::Animations::AverageMasterProperty__Fuse_Navigation_SwipeEnds__New_1(NULL, property, mixerBase);
}

::app::Fuse::Animations::MasterProperty__Fuse_Node* AverageMixer__CreateMaster__Fuse_Node(AverageMixer* __this, ::app::Uno::UX::Property__Fuse_Node* property, ::app::Fuse::Animations::MixerBase* mixerBase)
{
    return (::app::Fuse::Animations::MasterProperty__Fuse_Node*)::app::Fuse::Animations::AverageMasterProperty__Fuse_Node__New_1(NULL, property, mixerBase);
}

::app::Fuse::Animations::MasterProperty__Fuse_Resources_ImageSource* AverageMixer__CreateMaster__Fuse_Resources_ImageSource(AverageMixer* __this, ::app::Uno::UX::Property__Fuse_Resources_ImageSource* property, ::app::Fuse::Animations::MixerBase* mixerBase)
{
    return (::app::Fuse::Animations::MasterProperty__Fuse_Resources_ImageSource*)::app::Fuse::Animations::AverageMasterProperty__Fuse_Resources_ImageSource__New_1(NULL, property, mixerBase);
}

::app::Fuse::Animations::MasterProperty__Fuse_Triggers_Actions_TriggerDirection* AverageMixer__CreateMaster__Fuse_Triggers_Actions_TriggerDirection(AverageMixer* __this, ::app::Uno::UX::Property__Fuse_Triggers_Actions_TriggerDirection* property, ::app::Fuse::Animations::MixerBase* mixerBase)
{
    return (::app::Fuse::Animations::MasterProperty__Fuse_Triggers_Actions_TriggerDirection*)::app::Fuse::Animations::AverageMasterProperty__Fuse_Triggers_Actions_TriggerDirection__New_1(NULL, property, mixerBase);
}

::app::Fuse::Animations::MasterProperty__Fuse_Triggers_State* AverageMixer__CreateMaster__Fuse_Triggers_State(AverageMixer* __this, ::app::Uno::UX::Property__Fuse_Triggers_State* property, ::app::Fuse::Animations::MixerBase* mixerBase)
{
    return (::app::Fuse::Animations::MasterProperty__Fuse_Triggers_State*)::app::Fuse::Animations::AverageMasterProperty__Fuse_Triggers_State__New_1(NULL, property, mixerBase);
}

::app::Fuse::Animations::MasterProperty__Fuse_Triggers_StateTransition* AverageMixer__CreateMaster__Fuse_Triggers_StateTransition(AverageMixer* __this, ::app::Uno::UX::Property__Fuse_Triggers_StateTransition* property, ::app::Fuse::Animations::MixerBase* mixerBase)
{
    return (::app::Fuse::Animations::MasterProperty__Fuse_Triggers_StateTransition*)::app::Fuse::Animations::AverageMasterProperty__Fuse_Triggers_StateTransition__New_1(NULL, property, mixerBase);
}

::app::Fuse::Animations::MasterProperty__Fuse_Triggers_TriggerBypassMode* AverageMixer__CreateMaster__Fuse_Triggers_TriggerBypassMode(AverageMixer* __this, ::app::Uno::UX::Property__Fuse_Triggers_TriggerBypassMode* property, ::app::Fuse::Animations::MixerBase* mixerBase)
{
    return (::app::Fuse::Animations::MasterProperty__Fuse_Triggers_TriggerBypassMode*)::app::Fuse::Animations::AverageMasterProperty__Fuse_Triggers_TriggerBypassMode__New_1(NULL, property, mixerBase);
}

::app::Fuse::Animations::MasterProperty__int* AverageMixer__CreateMaster__int(AverageMixer* __this, ::app::Uno::UX::Property__int* property, ::app::Fuse::Animations::MixerBase* mixerBase)
{
    return (::app::Fuse::Animations::MasterProperty__int*)::app::Fuse::Animations::AverageMasterProperty__int__New_1(NULL, property, mixerBase);
}

::app::Fuse::Animations::MasterProperty__int2* AverageMixer__CreateMaster__int2(AverageMixer* __this, ::app::Uno::UX::Property__int2* property, ::app::Fuse::Animations::MixerBase* mixerBase)
{
    return (::app::Fuse::Animations::MasterProperty__int2*)::app::Fuse::Animations::AverageMasterProperty__int2__New_1(NULL, property, mixerBase);
}

::app::Fuse::Animations::MasterProperty__int3* AverageMixer__CreateMaster__int3(AverageMixer* __this, ::app::Uno::UX::Property__int3* property, ::app::Fuse::Animations::MixerBase* mixerBase)
{
    return (::app::Fuse::Animations::MasterProperty__int3*)::app::Fuse::Animations::AverageMasterProperty__int3__New_1(NULL, property, mixerBase);
}

::app::Fuse::Animations::MasterProperty__int4* AverageMixer__CreateMaster__int4(AverageMixer* __this, ::app::Uno::UX::Property__int4* property, ::app::Fuse::Animations::MixerBase* mixerBase)
{
    return (::app::Fuse::Animations::MasterProperty__int4*)::app::Fuse::Animations::AverageMasterProperty__int4__New_1(NULL, property, mixerBase);
}

::app::Fuse::Animations::MasterProperty__long* AverageMixer__CreateMaster__long(AverageMixer* __this, ::app::Uno::UX::Property__long* property, ::app::Fuse::Animations::MixerBase* mixerBase)
{
    return (::app::Fuse::Animations::MasterProperty__long*)::app::Fuse::Animations::AverageMasterProperty__long__New_1(NULL, property, mixerBase);
}

::app::Fuse::Animations::MasterProperty__object* AverageMixer__CreateMaster__object(AverageMixer* __this, ::app::Uno::UX::Property__object* property, ::app::Fuse::Animations::MixerBase* mixerBase)
{
    return (::app::Fuse::Animations::MasterProperty__object*)::app::Fuse::Animations::AverageMasterProperty__object__New_1(NULL, property, mixerBase);
}

::app::Fuse::Animations::MasterProperty__short* AverageMixer__CreateMaster__short(AverageMixer* __this, ::app::Uno::UX::Property__short* property, ::app::Fuse::Animations::MixerBase* mixerBase)
{
    return (::app::Fuse::Animations::MasterProperty__short*)::app::Fuse::Animations::AverageMasterProperty__short__New_1(NULL, property, mixerBase);
}

::app::Fuse::Animations::MasterProperty__string* AverageMixer__CreateMaster__string(AverageMixer* __this, ::app::Uno::UX::Property__string* property, ::app::Fuse::Animations::MixerBase* mixerBase)
{
    return (::app::Fuse::Animations::MasterProperty__string*)::app::Fuse::Animations::AverageMasterProperty__string__New_1(NULL, property, mixerBase);
}

::app::Fuse::Animations::MasterProperty__Uno_EventArgs* AverageMixer__CreateMaster__Uno_EventArgs(AverageMixer* __this, ::app::Uno::UX::Property__Uno_EventArgs* property, ::app::Fuse::Animations::MixerBase* mixerBase)
{
    return (::app::Fuse::Animations::MasterProperty__Uno_EventArgs*)::app::Fuse::Animations::AverageMasterProperty__Uno_EventArgs__New_1(NULL, property, mixerBase);
}

::app::Fuse::Animations::MasterProperty__Uno_Platform_iOS_StatusBarStyle* AverageMixer__CreateMaster__Uno_Platform_iOS_StatusBarStyle(AverageMixer* __this, ::app::Uno::UX::Property__Uno_Platform_iOS_StatusBarStyle* property, ::app::Fuse::Animations::MixerBase* mixerBase)
{
    return (::app::Fuse::Animations::MasterProperty__Uno_Platform_iOS_StatusBarStyle*)::app::Fuse::Animations::AverageMasterProperty__Uno_Platform_iOS_StatusBarStyle__New_1(NULL, property, mixerBase);
}

::app::Fuse::Animations::MasterProperty__Uno_UX_FileSource* AverageMixer__CreateMaster__Uno_UX_FileSource(AverageMixer* __this, ::app::Uno::UX::Property__Uno_UX_FileSource* property, ::app::Fuse::Animations::MixerBase* mixerBase)
{
    return (::app::Fuse::Animations::MasterProperty__Uno_UX_FileSource*)::app::Fuse::Animations::AverageMasterProperty__Uno_UX_FileSource__New_1(NULL, property, mixerBase);
}

::app::Fuse::Animations::MasterBase__Fuse_Transform* AverageMixer__CreateMasterTransform(AverageMixer* __this, ::app::Fuse::Node* element, ::app::Fuse::Animations::MixerBase* mixerBase)
{
    return (::app::Fuse::Animations::MasterBase__Fuse_Transform*)::app::Fuse::Animations::AverageMasterTransform__New_1(NULL, element, mixerBase);
}

AverageMixer* AverageMixer__New_1(::uStatic* __this)
{
    AverageMixer* inst = (AverageMixer*)::uAllocObject(sizeof(AverageMixer), AverageMixer__typeof());
    inst->_ObjInit_1();
    return inst;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Animations\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

::uInterfaceType* ContinuousTrackProvider__typeof()
{
    static ::uStaticStrong< ::uInterfaceType*> type;
    if (type != NULL) return type;

    type = ::uAllocInterfaceType("Fuse.Animations.ContinuousTrackProvider");

    ::uRegisterType(type);
    return type;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Animations\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

::uStaticStrong< ConverterDouble*> ConverterDouble__Singleton;

ConverterDouble__uType* ConverterDouble__typeof()
{
    static ::uStaticStrong<ConverterDouble__uType*> type;
    if (type != NULL) return type;

    type = (ConverterDouble__uType*)::uAllocClassType(sizeof(ConverterDouble__uType), "Fuse.Animations.ConverterDouble", false, 0, 0, 0);

    type->SetBaseType(::app::Fuse::Animations::Converter__double__typeof());
    type->__fp_In = (::app::Uno::Float4(*)(::app::Fuse::Animations::Converter__double*, double))ConverterDouble__In;
    type->__fp_Out = (double(*)(::app::Fuse::Animations::Converter__double*, ::app::Uno::Float4))ConverterDouble__Out;

    type->SetFields(1,
        ::uNewField("Singleton", &ConverterDouble__Singleton, 0, ConverterDouble__typeof()));

    type->SetFunctions(1,
        ::uNewFunction(".ctor", ConverterDouble__New_1, 0, true, ConverterDouble__typeof()));

    ::uRegisterType(type);
    return type;
}

void ConverterDouble___ObjInit_1(ConverterDouble* __this)
{
    ::app::Fuse::Animations::Converter__double___ObjInit(__this);
}

void ConverterDouble___TypeInit(::uStatic* __this)
{
    ConverterDouble__Singleton = ConverterDouble__New_1(NULL);
}

::app::Uno::Float4 ConverterDouble__In(ConverterDouble* __this, double value)
{
    return ::app::Uno::Float4__New_2(NULL, (float)value, 0.0f, 0.0f, 0.0f);
}

ConverterDouble* ConverterDouble__New_1(::uStatic* __this)
{
    ConverterDouble* inst = (ConverterDouble*)::uAllocObject(sizeof(ConverterDouble), ConverterDouble__typeof());
    inst->_ObjInit_1();
    return inst;
}

double ConverterDouble__Out(ConverterDouble* __this, ::app::Uno::Float4 value)
{
    return (double)value.X;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Animations\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

::uStaticStrong< ConverterFloat*> ConverterFloat__Singleton;

ConverterFloat__uType* ConverterFloat__typeof()
{
    static ::uStaticStrong<ConverterFloat__uType*> type;
    if (type != NULL) return type;

    type = (ConverterFloat__uType*)::uAllocClassType(sizeof(ConverterFloat__uType), "Fuse.Animations.ConverterFloat", false, 0, 0, 0);

    type->SetBaseType(::app::Fuse::Animations::Converter__float__typeof());
    type->__fp_In = (::app::Uno::Float4(*)(::app::Fuse::Animations::Converter__float*, float))ConverterFloat__In;
    type->__fp_Out = (float(*)(::app::Fuse::Animations::Converter__float*, ::app::Uno::Float4))ConverterFloat__Out;

    type->SetFields(1,
        ::uNewField("Singleton", &ConverterFloat__Singleton, 0, ConverterFloat__typeof()));

    type->SetFunctions(1,
        ::uNewFunction(".ctor", ConverterFloat__New_1, 0, true, ConverterFloat__typeof()));

    ::uRegisterType(type);
    return type;
}

void ConverterFloat___ObjInit_1(ConverterFloat* __this)
{
    ::app::Fuse::Animations::Converter__float___ObjInit(__this);
}

void ConverterFloat___TypeInit(::uStatic* __this)
{
    ConverterFloat__Singleton = ConverterFloat__New_1(NULL);
}

::app::Uno::Float4 ConverterFloat__In(ConverterFloat* __this, float value)
{
    return ::app::Uno::Float4__New_2(NULL, value, 0.0f, 0.0f, 0.0f);
}

ConverterFloat* ConverterFloat__New_1(::uStatic* __this)
{
    ConverterFloat* inst = (ConverterFloat*)::uAllocObject(sizeof(ConverterFloat), ConverterFloat__typeof());
    inst->_ObjInit_1();
    return inst;
}

float ConverterFloat__Out(ConverterFloat* __this, ::app::Uno::Float4 value)
{
    return value.X;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Animations\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

::uStaticStrong< ConverterFloat2*> ConverterFloat2__Singleton;

ConverterFloat2__uType* ConverterFloat2__typeof()
{
    static ::uStaticStrong<ConverterFloat2__uType*> type;
    if (type != NULL) return type;

    type = (ConverterFloat2__uType*)::uAllocClassType(sizeof(ConverterFloat2__uType), "Fuse.Animations.ConverterFloat2", false, 0, 0, 0);

    type->SetBaseType(::app::Fuse::Animations::Converter__float2__typeof());
    type->__fp_In = (::app::Uno::Float4(*)(::app::Fuse::Animations::Converter__float2*, ::app::Uno::Float2))ConverterFloat2__In;
    type->__fp_Out = (::app::Uno::Float2(*)(::app::Fuse::Animations::Converter__float2*, ::app::Uno::Float4))ConverterFloat2__Out;

    type->SetFields(1,
        ::uNewField("Singleton", &ConverterFloat2__Singleton, 0, ConverterFloat2__typeof()));

    type->SetFunctions(1,
        ::uNewFunction(".ctor", ConverterFloat2__New_1, 0, true, ConverterFloat2__typeof()));

    ::uRegisterType(type);
    return type;
}

void ConverterFloat2___ObjInit_1(ConverterFloat2* __this)
{
    ::app::Fuse::Animations::Converter__float2___ObjInit(__this);
}

void ConverterFloat2___TypeInit(::uStatic* __this)
{
    ConverterFloat2__Singleton = ConverterFloat2__New_1(NULL);
}

::app::Uno::Float4 ConverterFloat2__In(ConverterFloat2* __this, ::app::Uno::Float2 value)
{
    return ::app::Uno::Float4__New_6(NULL, value, 0.0f, 0.0f);
}

ConverterFloat2* ConverterFloat2__New_1(::uStatic* __this)
{
    ConverterFloat2* inst = (ConverterFloat2*)::uAllocObject(sizeof(ConverterFloat2), ConverterFloat2__typeof());
    inst->_ObjInit_1();
    return inst;
}

::app::Uno::Float2 ConverterFloat2__Out(ConverterFloat2* __this, ::app::Uno::Float4 value)
{
    return ::app::Uno::Float2__New_2(NULL, value.X, value.Y);
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Animations\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

::uStaticStrong< ConverterFloat3*> ConverterFloat3__Singleton;

ConverterFloat3__uType* ConverterFloat3__typeof()
{
    static ::uStaticStrong<ConverterFloat3__uType*> type;
    if (type != NULL) return type;

    type = (ConverterFloat3__uType*)::uAllocClassType(sizeof(ConverterFloat3__uType), "Fuse.Animations.ConverterFloat3", false, 0, 0, 0);

    type->SetBaseType(::app::Fuse::Animations::Converter__float3__typeof());
    type->__fp_In = (::app::Uno::Float4(*)(::app::Fuse::Animations::Converter__float3*, ::app::Uno::Float3))ConverterFloat3__In;
    type->__fp_Out = (::app::Uno::Float3(*)(::app::Fuse::Animations::Converter__float3*, ::app::Uno::Float4))ConverterFloat3__Out;

    type->SetFields(1,
        ::uNewField("Singleton", &ConverterFloat3__Singleton, 0, ConverterFloat3__typeof()));

    type->SetFunctions(1,
        ::uNewFunction(".ctor", ConverterFloat3__New_1, 0, true, ConverterFloat3__typeof()));

    ::uRegisterType(type);
    return type;
}

void ConverterFloat3___ObjInit_1(ConverterFloat3* __this)
{
    ::app::Fuse::Animations::Converter__float3___ObjInit(__this);
}

void ConverterFloat3___TypeInit(::uStatic* __this)
{
    ConverterFloat3__Singleton = ConverterFloat3__New_1(NULL);
}

::app::Uno::Float4 ConverterFloat3__In(ConverterFloat3* __this, ::app::Uno::Float3 value)
{
    return ::app::Uno::Float4__New_8(NULL, value, 0.0f);
}

ConverterFloat3* ConverterFloat3__New_1(::uStatic* __this)
{
    ConverterFloat3* inst = (ConverterFloat3*)::uAllocObject(sizeof(ConverterFloat3), ConverterFloat3__typeof());
    inst->_ObjInit_1();
    return inst;
}

::app::Uno::Float3 ConverterFloat3__Out(ConverterFloat3* __this, ::app::Uno::Float4 value)
{
    return ::app::Uno::Float3__New_2(NULL, value.X, value.Y, value.Z);
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Animations\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

::uStaticStrong< ConverterFloat4*> ConverterFloat4__Singleton;

ConverterFloat4__uType* ConverterFloat4__typeof()
{
    static ::uStaticStrong<ConverterFloat4__uType*> type;
    if (type != NULL) return type;

    type = (ConverterFloat4__uType*)::uAllocClassType(sizeof(ConverterFloat4__uType), "Fuse.Animations.ConverterFloat4", false, 0, 0, 0);

    type->SetBaseType(::app::Fuse::Animations::Converter__float4__typeof());
    type->__fp_In = (::app::Uno::Float4(*)(::app::Fuse::Animations::Converter__float4*, ::app::Uno::Float4))ConverterFloat4__In;
    type->__fp_Out = (::app::Uno::Float4(*)(::app::Fuse::Animations::Converter__float4*, ::app::Uno::Float4))ConverterFloat4__Out;

    type->SetFields(1,
        ::uNewField("Singleton", &ConverterFloat4__Singleton, 0, ConverterFloat4__typeof()));

    type->SetFunctions(1,
        ::uNewFunction(".ctor", ConverterFloat4__New_1, 0, true, ConverterFloat4__typeof()));

    ::uRegisterType(type);
    return type;
}

void ConverterFloat4___ObjInit_1(ConverterFloat4* __this)
{
    ::app::Fuse::Animations::Converter__float4___ObjInit(__this);
}

void ConverterFloat4___TypeInit(::uStatic* __this)
{
    ConverterFloat4__Singleton = ConverterFloat4__New_1(NULL);
}

::app::Uno::Float4 ConverterFloat4__In(ConverterFloat4* __this, ::app::Uno::Float4 value)
{
    return value;
}

ConverterFloat4* ConverterFloat4__New_1(::uStatic* __this)
{
    ConverterFloat4* inst = (ConverterFloat4*)::uAllocObject(sizeof(ConverterFloat4), ConverterFloat4__typeof());
    inst->_ObjInit_1();
    return inst;
}

::app::Uno::Float4 ConverterFloat4__Out(ConverterFloat4* __this, ::app::Uno::Float4 value)
{
    return value;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Animations\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

CreateStateParams__uType* CreateStateParams__typeof()
{
    static ::uStaticStrong<CreateStateParams__uType*> type;
    if (type != NULL) return type;

    type = (CreateStateParams__uType*)::uAllocClassType(sizeof(CreateStateParams__uType), "Fuse.Animations.CreateStateParams", false, 0, 1, 0);

    type->SetStrongRefs(
        "Attached", offsetof(CreateStateParams, Attached));

    type->SetFields(3,
        ::uNewField("Attached", NULL, offsetof(CreateStateParams, Attached), ::app::Fuse::Node__typeof()),
        ::uNewField("TotalDuration", NULL, offsetof(CreateStateParams, TotalDuration), ::app::Uno::Double__typeof()),
        ::uNewField("Variant", NULL, offsetof(CreateStateParams, Variant), ::app::Fuse::Animations::AnimationVariant__typeof()));

    type->SetFunctions(1,
        ::uNewFunction(".ctor", CreateStateParams__New_1, 0, true, CreateStateParams__typeof()));

    ::uRegisterType(type);
    return type;
}

void CreateStateParams___ObjInit(CreateStateParams* __this)
{
}

CreateStateParams* CreateStateParams__New_1(::uStatic* __this)
{
    CreateStateParams* inst = (CreateStateParams*)::uAllocObject(sizeof(CreateStateParams), CreateStateParams__typeof());
    inst->_ObjInit();
    return inst;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Animations\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

DiscreteKeyframeTrack__uType* DiscreteKeyframeTrack__typeof()
{
    static ::uStaticStrong<DiscreteKeyframeTrack__uType*> type;
    if (type != NULL) return type;

    type = (DiscreteKeyframeTrack__uType*)::uAllocClassType(sizeof(DiscreteKeyframeTrack__uType), "Fuse.Animations.DiscreteKeyframeTrack", false, 4, 1, 0);

    type->__interface_3.__fp_GetDuration = (double(*)(void*, ::app::Fuse::Animations::TrackAnimator*, int))DiscreteKeyframeTrack__Fuse_Animations_TrackProvider_GetDuration;
    type->__interface_3.__fp_GetAnimatorVariant = (int(*)(void*, ::app::Fuse::Animations::TrackAnimator*))DiscreteKeyframeTrack__Fuse_Animations_TrackProvider_GetAnimatorVariant;
    type->__interface_0.__fp_GetSeekProgress = (bool(*)(void*, ::app::Fuse::Animations::TrackAnimatorState*, double, double, int, ::uObject**, double*))DiscreteKeyframeTrack__Fuse_Animations_DiscreteTrackProvider_GetSeekProgress;
    type->__interface_0.__fp_GetSeekTime = (bool(*)(void*, ::app::Fuse::Animations::TrackAnimatorState*, double, double, int, ::uObject**, double*))DiscreteKeyframeTrack__Fuse_Animations_DiscreteTrackProvider_GetSeekTime;
    type->__interface_2.__fp_get_Keyframes = (::uObject*(*)(void*))DiscreteKeyframeTrack__get_Keyframes;
    type->__interface_2.__fp_get_Interpolation = (int(*)(void*))DiscreteKeyframeTrack__get_Interpolation;
    type->__interface_2.__fp_set_Interpolation = (void(*)(void*, int))DiscreteKeyframeTrack__set_Interpolation;

    type->SetInterfaces(
        ::app::Fuse::Animations::DiscreteTrackProvider__typeof(), offsetof(DiscreteKeyframeTrack__uType, __interface_0),
        ::app::Fuse::Animations::ITrackProvider__typeof(), offsetof(DiscreteKeyframeTrack__uType, __interface_1),
        ::app::Fuse::Animations::KeyframeTrack__typeof(), offsetof(DiscreteKeyframeTrack__uType, __interface_2),
        ::app::Fuse::Animations::TrackProvider__typeof(), offsetof(DiscreteKeyframeTrack__uType, __interface_3));

    type->SetStrongRefs(
        "_frames", offsetof(DiscreteKeyframeTrack, _frames));

    type->SetFields(3,
        ::uNewField("_duration", NULL, offsetof(DiscreteKeyframeTrack, _duration), ::app::Uno::Double__typeof()),
        ::uNewField("_frames", NULL, offsetof(DiscreteKeyframeTrack, _frames), ::app::Uno::Collections::List__Fuse_Animations_Keyframe__typeof()),
        ::uNewField("_init", NULL, offsetof(DiscreteKeyframeTrack, _init), ::app::Uno::Bool__typeof()));

    type->SetFunctions(9,
        ::uNewFunction("Fuse.Animations.DiscreteTrackProvider.GetSeekProgress", DiscreteKeyframeTrack__Fuse_Animations_DiscreteTrackProvider_GetSeekProgress, 0, false, ::app::Uno::Bool__typeof(), ::app::Fuse::Animations::TrackAnimatorState__typeof(), ::app::Uno::Double__typeof(), ::app::Uno::Double__typeof(), ::app::Fuse::Animations::SeekDirection__typeof(), ::uObject__typeof(), ::app::Uno::Double__typeof()),
        ::uNewFunction("Fuse.Animations.DiscreteTrackProvider.GetSeekTime", DiscreteKeyframeTrack__Fuse_Animations_DiscreteTrackProvider_GetSeekTime, 0, false, ::app::Uno::Bool__typeof(), ::app::Fuse::Animations::TrackAnimatorState__typeof(), ::app::Uno::Double__typeof(), ::app::Uno::Double__typeof(), ::app::Fuse::Animations::SeekDirection__typeof(), ::uObject__typeof(), ::app::Uno::Double__typeof()),
        ::uNewFunction("Fuse.Animations.TrackProvider.GetAnimatorVariant", DiscreteKeyframeTrack__Fuse_Animations_TrackProvider_GetAnimatorVariant, 0, false, ::app::Fuse::Animations::AnimatorVariant__typeof(), ::app::Fuse::Animations::TrackAnimator__typeof()),
        ::uNewFunction("Fuse.Animations.TrackProvider.GetDuration", DiscreteKeyframeTrack__Fuse_Animations_TrackProvider_GetDuration, 0, false, ::app::Uno::Double__typeof(), ::app::Fuse::Animations::TrackAnimator__typeof(), ::app::Fuse::Animations::AnimationVariant__typeof()),
        ::uNewFunction("get_Interpolation", DiscreteKeyframeTrack__get_Interpolation, 0, false, ::app::Fuse::Animations::KeyframeInterpolation__typeof()),
        ::uNewFunction("get_Keyframes", DiscreteKeyframeTrack__get_Keyframes, 0, false, ::app::Uno::Collections::IList__Fuse_Animations_Keyframe__typeof()),
        ::uNewFunctionVoid("Init", DiscreteKeyframeTrack__Init, 0, false),
        ::uNewFunction(".ctor", DiscreteKeyframeTrack__New_1, 0, true, DiscreteKeyframeTrack__typeof()),
        ::uNewFunctionVoid("set_Interpolation", DiscreteKeyframeTrack__set_Interpolation, 0, false, ::app::Fuse::Animations::KeyframeInterpolation__typeof()));

    ::uRegisterType(type);
    return type;
}

void DiscreteKeyframeTrack___ObjInit(DiscreteKeyframeTrack* __this)
{
    __this->_frames = ::app::Uno::Collections::List__Fuse_Animations_Keyframe__New_1(NULL);
}

bool DiscreteKeyframeTrack__Fuse_Animations_DiscreteTrackProvider_GetSeekProgress(DiscreteKeyframeTrack* __this, ::app::Fuse::Animations::TrackAnimatorState* tas, double progress, double interval, int dir, ::uObject** value, double* strength)
{
    return ::app::Fuse::Animations::DiscreteTrackProvider::GetSeekTime(::uPtr< ::uObject*>(::uAs< ::uObject*>(__this, ::app::Fuse::Animations::DiscreteTrackProvider__typeof())), tas, progress * __this->_duration, interval, dir, value, strength);
}

bool DiscreteKeyframeTrack__Fuse_Animations_DiscreteTrackProvider_GetSeekTime(DiscreteKeyframeTrack* __this, ::app::Fuse::Animations::TrackAnimatorState* tas, double elapsed, double interval, int dir, ::uObject** value, double* strength)
{
    __this->Init();

    if (::uPtr< ::app::Uno::Collections::List__Fuse_Animations_Keyframe*>(__this->_frames)->Count() == 0)
    {
        *value = NULL;
        *strength = 0.0;
        return true;
    }

    int segment = -1;

    while ((segment < (::uPtr< ::app::Uno::Collections::List__Fuse_Animations_Keyframe*>(__this->_frames)->Count() - 2)) && (::uPtr< ::app::Fuse::Animations::Keyframe*>(::uPtr< ::app::Uno::Collections::List__Fuse_Animations_Keyframe*>(__this->_frames)->Item(segment + 1))->Time() <= elapsed))
    {
        ++segment;
    }

    if (segment == -1)
    {
        *value = ::uPtr< ::app::Fuse::Animations::Keyframe*>(::uPtr< ::app::Uno::Collections::List__Fuse_Animations_Keyframe*>(__this->_frames)->Item(0))->ObjectValue();
        *strength = 0.0;
    }
    else
    {
        *value = ::uPtr< ::app::Fuse::Animations::Keyframe*>(::uPtr< ::app::Uno::Collections::List__Fuse_Animations_Keyframe*>(__this->_frames)->Item(segment))->ObjectValue();
        *strength = 1.0;
    }

    return (dir == 0) ? (elapsed >= 0.0) : (elapsed <= 0.0);
}

int DiscreteKeyframeTrack__Fuse_Animations_TrackProvider_GetAnimatorVariant(DiscreteKeyframeTrack* __this, ::app::Fuse::Animations::TrackAnimator* ta)
{
    return 0;
}

double DiscreteKeyframeTrack__Fuse_Animations_TrackProvider_GetDuration(DiscreteKeyframeTrack* __this, ::app::Fuse::Animations::TrackAnimator* ta, int variant)
{
    __this->Init();
    return __this->_duration;
}

int DiscreteKeyframeTrack__get_Interpolation(DiscreteKeyframeTrack* __this)
{
    return __this->_Interpolation;
}

::uObject* DiscreteKeyframeTrack__get_Keyframes(DiscreteKeyframeTrack* __this)
{
    return (::uObject*)__this->_frames;
}

void DiscreteKeyframeTrack__Init(DiscreteKeyframeTrack* __this)
{
    if (__this->_init)
    {
        return;
    }

    __this->_duration = ::app::Fuse::Animations::Keyframe__CompleteFrames(NULL, (::uObject*)__this->_frames, 0.0f, 0.0f, 0.0f);
    __this->_init = true;
}

DiscreteKeyframeTrack* DiscreteKeyframeTrack__New_1(::uStatic* __this)
{
    DiscreteKeyframeTrack* inst = (DiscreteKeyframeTrack*)::uAllocObject(sizeof(DiscreteKeyframeTrack), DiscreteKeyframeTrack__typeof());
    inst->_ObjInit();
    return inst;
}

void DiscreteKeyframeTrack__set_Interpolation(DiscreteKeyframeTrack* __this, int value)
{
    __this->_Interpolation = value;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Animations\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

DiscreteMasterTransform__uType* DiscreteMasterTransform__typeof()
{
    static ::uStaticStrong<DiscreteMasterTransform__uType*> type;
    if (type != NULL) return type;

    type = (DiscreteMasterTransform__uType*)::uAllocClassType(sizeof(DiscreteMasterTransform__uType), "Fuse.Animations.DiscreteMasterTransform", false, 1, 0, 0);

    type->SetBaseType(::app::Fuse::Animations::MasterTransform__typeof());
    type->__fp_OnComplete = (void(*)(::app::Fuse::Animations::MasterBase__Fuse_Transform*))DiscreteMasterTransform__OnComplete;

    type->SetInterfaces(
        ::app::Fuse::Animations::IMixerMaster__typeof(), offsetof(DiscreteMasterTransform__uType, __interface_0));

    type->SetFunctions(1,
        ::uNewFunction(".ctor", DiscreteMasterTransform__New_1, 0, true, DiscreteMasterTransform__typeof(), ::app::Fuse::Node__typeof(), ::app::Fuse::Animations::MixerBase__typeof()));

    ::uRegisterType(type);
    return type;
}

void DiscreteMasterTransform___ObjInit_2(DiscreteMasterTransform* __this, ::app::Fuse::Node* node, ::app::Fuse::Animations::MixerBase* mixerBase)
{
    ::app::Fuse::Animations::MasterTransform___ObjInit_1(__this, node, mixerBase);
}

DiscreteMasterTransform* DiscreteMasterTransform__New_1(::uStatic* __this, ::app::Fuse::Node* node, ::app::Fuse::Animations::MixerBase* mixerBase)
{
    DiscreteMasterTransform* inst = (DiscreteMasterTransform*)::uAllocObject(sizeof(DiscreteMasterTransform), DiscreteMasterTransform__typeof());
    inst->_ObjInit_2(node, mixerBase);
    return inst;
}

void DiscreteMasterTransform__OnComplete(DiscreteMasterTransform* __this)
{
    ::uPtr< ::app::Fuse::FastMatrix*>(::uPtr< ::app::Fuse::Animations::FastMatrixTransform*>(__this->FMT)->Matrix)->ResetIdentity();
    float str = 0.5f;
    ::app::Fuse::Transform* value = NULL;

    for (::app::Uno::Collections::List1_Enumerator__Fuse_Animations_MixerHandle_Fuse_Transform_ enum_123 = ::uPtr< ::app::Uno::Collections::List__Fuse_Animations_MixerHandle_Fuse_Transform_*>(__this->Handles)->GetEnumerator(); enum_123.MoveNext(); )
    {
        ::app::Fuse::Animations::MixerHandle__Fuse_Transform* v = enum_123.Current();

        if (::uPtr< ::app::Fuse::Animations::MixerHandle__Fuse_Transform*>(v)->HasValue() && (::uPtr< ::app::Fuse::Animations::MixerHandle__Fuse_Transform*>(v)->Strength > str))
        {
            value = ::uPtr< ::app::Fuse::Animations::MixerHandle__Fuse_Transform*>(v)->Value;
            str = v->Strength;
        }
    }

    if (value != NULL)
    {
        ::uPtr< ::app::Fuse::Transform*>(value)->AppendTo(::uPtr< ::app::Fuse::Animations::FastMatrixTransform*>(__this->FMT)->Matrix, 1.0f);
    }

    ::uPtr< ::app::Fuse::Animations::FastMatrixTransform*>(__this->FMT)->Changed();
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Animations\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

DiscreteMixer__uType* DiscreteMixer__typeof()
{
    static ::uStaticStrong<DiscreteMixer__uType*> type;
    if (type != NULL) return type;

    type = (DiscreteMixer__uType*)::uAllocClassType(sizeof(DiscreteMixer__uType), "Fuse.Animations.DiscreteMixer", false, 1, 0, 0);

    type->SetBaseType(::app::Fuse::Animations::MixerBase__typeof());
    type->__fp_CreateMaster__bool = (::app::Fuse::Animations::MasterProperty__bool*(*)(::app::Fuse::Animations::MixerBase*, ::app::Uno::UX::Property__bool*, ::app::Fuse::Animations::MixerBase*))DiscreteMixer__CreateMaster__bool;
    type->__fp_CreateMaster__char = (::app::Fuse::Animations::MasterProperty__char*(*)(::app::Fuse::Animations::MixerBase*, ::app::Uno::UX::Property__char*, ::app::Fuse::Animations::MixerBase*))DiscreteMixer__CreateMaster__char;
    type->__fp_CreateMaster__double = (::app::Fuse::Animations::MasterProperty__double*(*)(::app::Fuse::Animations::MixerBase*, ::app::Uno::UX::Property__double*, ::app::Fuse::Animations::MixerBase*))DiscreteMixer__CreateMaster__double;
    type->__fp_CreateMaster__float = (::app::Fuse::Animations::MasterProperty__float*(*)(::app::Fuse::Animations::MixerBase*, ::app::Uno::UX::Property__float*, ::app::Fuse::Animations::MixerBase*))DiscreteMixer__CreateMaster__float;
    type->__fp_CreateMaster__float2 = (::app::Fuse::Animations::MasterProperty__float2*(*)(::app::Fuse::Animations::MixerBase*, ::app::Uno::UX::Property__float2*, ::app::Fuse::Animations::MixerBase*))DiscreteMixer__CreateMaster__float2;
    type->__fp_CreateMaster__float3 = (::app::Fuse::Animations::MasterProperty__float3*(*)(::app::Fuse::Animations::MixerBase*, ::app::Uno::UX::Property__float3*, ::app::Fuse::Animations::MixerBase*))DiscreteMixer__CreateMaster__float3;
    type->__fp_CreateMaster__float4 = (::app::Fuse::Animations::MasterProperty__float4*(*)(::app::Fuse::Animations::MixerBase*, ::app::Uno::UX::Property__float4*, ::app::Fuse::Animations::MixerBase*))DiscreteMixer__CreateMaster__float4;
    type->__fp_CreateMaster__Fuse_Animations_AnimationVariant = (::app::Fuse::Animations::MasterProperty__Fuse_Animations_AnimationVariant*(*)(::app::Fuse::Animations::MixerBase*, ::app::Uno::UX::Property__Fuse_Animations_AnimationVariant*, ::app::Fuse::Animations::MixerBase*))DiscreteMixer__CreateMaster__Fuse_Animations_AnimationVariant;
    type->__fp_CreateMaster__Fuse_Animations_Easing = (::app::Fuse::Animations::MasterProperty__Fuse_Animations_Easing*(*)(::app::Fuse::Animations::MixerBase*, ::app::Uno::UX::Property__Fuse_Animations_Easing*, ::app::Fuse::Animations::MixerBase*))DiscreteMixer__CreateMaster__Fuse_Animations_Easing;
    type->__fp_CreateMaster__Fuse_Animations_KeyframeInterpolation = (::app::Fuse::Animations::MasterProperty__Fuse_Animations_KeyframeInterpolation*(*)(::app::Fuse::Animations::MixerBase*, ::app::Uno::UX::Property__Fuse_Animations_KeyframeInterpolation*, ::app::Fuse::Animations::MixerBase*))DiscreteMixer__CreateMaster__Fuse_Animations_KeyframeInterpolation;
    type->__fp_CreateMaster__Fuse_Animations_MixOp = (::app::Fuse::Animations::MasterProperty__Fuse_Animations_MixOp*(*)(::app::Fuse::Animations::MixerBase*, ::app::Uno::UX::Property__Fuse_Animations_MixOp*, ::app::Fuse::Animations::MixerBase*))DiscreteMixer__CreateMaster__Fuse_Animations_MixOp;
    type->__fp_CreateMaster__Fuse_Drawing_BlendMode = (::app::Fuse::Animations::MasterProperty__Fuse_Drawing_BlendMode*(*)(::app::Fuse::Animations::MixerBase*, ::app::Uno::UX::Property__Fuse_Drawing_BlendMode*, ::app::Fuse::Animations::MixerBase*))DiscreteMixer__CreateMaster__Fuse_Drawing_BlendMode;
    type->__fp_CreateMaster__Fuse_Drawing_Brush = (::app::Fuse::Animations::MasterProperty__Fuse_Drawing_Brush*(*)(::app::Fuse::Animations::MixerBase*, ::app::Uno::UX::Property__Fuse_Drawing_Brush*, ::app::Fuse::Animations::MixerBase*))DiscreteMixer__CreateMaster__Fuse_Drawing_Brush;
    type->__fp_CreateMaster__Fuse_Drawing_DynamicBrush = (::app::Fuse::Animations::MasterProperty__Fuse_Drawing_DynamicBrush*(*)(::app::Fuse::Animations::MixerBase*, ::app::Uno::UX::Property__Fuse_Drawing_DynamicBrush*, ::app::Fuse::Animations::MixerBase*))DiscreteMixer__CreateMaster__Fuse_Drawing_DynamicBrush;
    type->__fp_CreateMaster__Fuse_Drawing_GradientStop = (::app::Fuse::Animations::MasterProperty__Fuse_Drawing_GradientStop*(*)(::app::Fuse::Animations::MixerBase*, ::app::Uno::UX::Property__Fuse_Drawing_GradientStop*, ::app::Fuse::Animations::MixerBase*))DiscreteMixer__CreateMaster__Fuse_Drawing_GradientStop;
    type->__fp_CreateMaster__Fuse_Drawing_LinearGradient = (::app::Fuse::Animations::MasterProperty__Fuse_Drawing_LinearGradient*(*)(::app::Fuse::Animations::MixerBase*, ::app::Uno::UX::Property__Fuse_Drawing_LinearGradient*, ::app::Fuse::Animations::MixerBase*))DiscreteMixer__CreateMaster__Fuse_Drawing_LinearGradient;
    type->__fp_CreateMaster__Fuse_Drawing_SolidColor = (::app::Fuse::Animations::MasterProperty__Fuse_Drawing_SolidColor*(*)(::app::Fuse::Animations::MixerBase*, ::app::Uno::UX::Property__Fuse_Drawing_SolidColor*, ::app::Fuse::Animations::MixerBase*))DiscreteMixer__CreateMaster__Fuse_Drawing_SolidColor;
    type->__fp_CreateMaster__Fuse_Drawing_StaticBrush = (::app::Fuse::Animations::MasterProperty__Fuse_Drawing_StaticBrush*(*)(::app::Fuse::Animations::MixerBase*, ::app::Uno::UX::Property__Fuse_Drawing_StaticBrush*, ::app::Fuse::Animations::MixerBase*))DiscreteMixer__CreateMaster__Fuse_Drawing_StaticBrush;
    type->__fp_CreateMaster__Fuse_Elements_Alignment = (::app::Fuse::Animations::MasterProperty__Fuse_Elements_Alignment*(*)(::app::Fuse::Animations::MixerBase*, ::app::Uno::UX::Property__Fuse_Elements_Alignment*, ::app::Fuse::Animations::MixerBase*))DiscreteMixer__CreateMaster__Fuse_Elements_Alignment;
    type->__fp_CreateMaster__Fuse_Elements_CachingMode = (::app::Fuse::Animations::MasterProperty__Fuse_Elements_CachingMode*(*)(::app::Fuse::Animations::MixerBase*, ::app::Uno::UX::Property__Fuse_Elements_CachingMode*, ::app::Fuse::Animations::MixerBase*))DiscreteMixer__CreateMaster__Fuse_Elements_CachingMode;
    type->__fp_CreateMaster__Fuse_Elements_Element = (::app::Fuse::Animations::MasterProperty__Fuse_Elements_Element*(*)(::app::Fuse::Animations::MixerBase*, ::app::Uno::UX::Property__Fuse_Elements_Element*, ::app::Fuse::Animations::MixerBase*))DiscreteMixer__CreateMaster__Fuse_Elements_Element;
    type->__fp_CreateMaster__Fuse_Elements_HitTestMode = (::app::Fuse::Animations::MasterProperty__Fuse_Elements_HitTestMode*(*)(::app::Fuse::Animations::MixerBase*, ::app::Uno::UX::Property__Fuse_Elements_HitTestMode*, ::app::Fuse::Animations::MixerBase*))DiscreteMixer__CreateMaster__Fuse_Elements_HitTestMode;
    type->__fp_CreateMaster__Fuse_Elements_SizeUnit = (::app::Fuse::Animations::MasterProperty__Fuse_Elements_SizeUnit*(*)(::app::Fuse::Animations::MixerBase*, ::app::Uno::UX::Property__Fuse_Elements_SizeUnit*, ::app::Fuse::Animations::MixerBase*))DiscreteMixer__CreateMaster__Fuse_Elements_SizeUnit;
    type->__fp_CreateMaster__Fuse_Elements_StretchDirection = (::app::Fuse::Animations::MasterProperty__Fuse_Elements_StretchDirection*(*)(::app::Fuse::Animations::MixerBase*, ::app::Uno::UX::Property__Fuse_Elements_StretchDirection*, ::app::Fuse::Animations::MixerBase*))DiscreteMixer__CreateMaster__Fuse_Elements_StretchDirection;
    type->__fp_CreateMaster__Fuse_Elements_StretchMode = (::app::Fuse::Animations::MasterProperty__Fuse_Elements_StretchMode*(*)(::app::Fuse::Animations::MixerBase*, ::app::Uno::UX::Property__Fuse_Elements_StretchMode*, ::app::Fuse::Animations::MixerBase*))DiscreteMixer__CreateMaster__Fuse_Elements_StretchMode;
    type->__fp_CreateMaster__Fuse_Elements_StretchSizing = (::app::Fuse::Animations::MasterProperty__Fuse_Elements_StretchSizing*(*)(::app::Fuse::Animations::MixerBase*, ::app::Uno::UX::Property__Fuse_Elements_StretchSizing*, ::app::Fuse::Animations::MixerBase*))DiscreteMixer__CreateMaster__Fuse_Elements_StretchSizing;
    type->__fp_CreateMaster__Fuse_Elements_TextAlignment = (::app::Fuse::Animations::MasterProperty__Fuse_Elements_TextAlignment*(*)(::app::Fuse::Animations::MixerBase*, ::app::Uno::UX::Property__Fuse_Elements_TextAlignment*, ::app::Fuse::Animations::MixerBase*))DiscreteMixer__CreateMaster__Fuse_Elements_TextAlignment;
    type->__fp_CreateMaster__Fuse_Elements_TextWrapping = (::app::Fuse::Animations::MasterProperty__Fuse_Elements_TextWrapping*(*)(::app::Fuse::Animations::MixerBase*, ::app::Uno::UX::Property__Fuse_Elements_TextWrapping*, ::app::Fuse::Animations::MixerBase*))DiscreteMixer__CreateMaster__Fuse_Elements_TextWrapping;
    type->__fp_CreateMaster__Fuse_Elements_Visibility = (::app::Fuse::Animations::MasterProperty__Fuse_Elements_Visibility*(*)(::app::Fuse::Animations::MixerBase*, ::app::Uno::UX::Property__Fuse_Elements_Visibility*, ::app::Fuse::Animations::MixerBase*))DiscreteMixer__CreateMaster__Fuse_Elements_Visibility;
    type->__fp_CreateMaster__Fuse_Font = (::app::Fuse::Animations::MasterProperty__Fuse_Font*(*)(::app::Fuse::Animations::MixerBase*, ::app::Uno::UX::Property__Fuse_Font*, ::app::Fuse::Animations::MixerBase*))DiscreteMixer__CreateMaster__Fuse_Font;
    type->__fp_CreateMaster__Fuse_Gestures_Edge = (::app::Fuse::Animations::MasterProperty__Fuse_Gestures_Edge*(*)(::app::Fuse::Animations::MixerBase*, ::app::Uno::UX::Property__Fuse_Gestures_Edge*, ::app::Fuse::Animations::MixerBase*))DiscreteMixer__CreateMaster__Fuse_Gestures_Edge;
    type->__fp_CreateMaster__Fuse_Gestures_ScrollDirections = (::app::Fuse::Animations::MasterProperty__Fuse_Gestures_ScrollDirections*(*)(::app::Fuse::Animations::MixerBase*, ::app::Uno::UX::Property__Fuse_Gestures_ScrollDirections*, ::app::Fuse::Animations::MixerBase*))DiscreteMixer__CreateMaster__Fuse_Gestures_ScrollDirections;
    type->__fp_CreateMaster__Fuse_Layouts_Dock = (::app::Fuse::Animations::MasterProperty__Fuse_Layouts_Dock*(*)(::app::Fuse::Animations::MixerBase*, ::app::Uno::UX::Property__Fuse_Layouts_Dock*, ::app::Fuse::Animations::MixerBase*))DiscreteMixer__CreateMaster__Fuse_Layouts_Dock;
    type->__fp_CreateMaster__Fuse_Layouts_FlowDirection = (::app::Fuse::Animations::MasterProperty__Fuse_Layouts_FlowDirection*(*)(::app::Fuse::Animations::MixerBase*, ::app::Uno::UX::Property__Fuse_Layouts_FlowDirection*, ::app::Fuse::Animations::MixerBase*))DiscreteMixer__CreateMaster__Fuse_Layouts_FlowDirection;
    type->__fp_CreateMaster__Fuse_Layouts_Metric = (::app::Fuse::Animations::MasterProperty__Fuse_Layouts_Metric*(*)(::app::Fuse::Animations::MixerBase*, ::app::Uno::UX::Property__Fuse_Layouts_Metric*, ::app::Fuse::Animations::MixerBase*))DiscreteMixer__CreateMaster__Fuse_Layouts_Metric;
    type->__fp_CreateMaster__Fuse_Layouts_Orientation = (::app::Fuse::Animations::MasterProperty__Fuse_Layouts_Orientation*(*)(::app::Fuse::Animations::MixerBase*, ::app::Uno::UX::Property__Fuse_Layouts_Orientation*, ::app::Fuse::Animations::MixerBase*))DiscreteMixer__CreateMaster__Fuse_Layouts_Orientation;
    type->__fp_CreateMaster__Fuse_Navigation_NavigationDirection = (::app::Fuse::Animations::MasterProperty__Fuse_Navigation_NavigationDirection*(*)(::app::Fuse::Animations::MixerBase*, ::app::Uno::UX::Property__Fuse_Navigation_NavigationDirection*, ::app::Fuse::Animations::MixerBase*))DiscreteMixer__CreateMaster__Fuse_Navigation_NavigationDirection;
    type->__fp_CreateMaster__Fuse_Navigation_NavigationEdge = (::app::Fuse::Animations::MasterProperty__Fuse_Navigation_NavigationEdge*(*)(::app::Fuse::Animations::MixerBase*, ::app::Uno::UX::Property__Fuse_Navigation_NavigationEdge*, ::app::Fuse::Animations::MixerBase*))DiscreteMixer__CreateMaster__Fuse_Navigation_NavigationEdge;
    type->__fp_CreateMaster__Fuse_Navigation_NavigationGotoMode = (::app::Fuse::Animations::MasterProperty__Fuse_Navigation_NavigationGotoMode*(*)(::app::Fuse::Animations::MixerBase*, ::app::Uno::UX::Property__Fuse_Navigation_NavigationGotoMode*, ::app::Fuse::Animations::MixerBase*))DiscreteMixer__CreateMaster__Fuse_Navigation_NavigationGotoMode;
    type->__fp_CreateMaster__Fuse_Navigation_SnapTo = (::app::Fuse::Animations::MasterProperty__Fuse_Navigation_SnapTo*(*)(::app::Fuse::Animations::MixerBase*, ::app::Uno::UX::Property__Fuse_Navigation_SnapTo*, ::app::Fuse::Animations::MixerBase*))DiscreteMixer__CreateMaster__Fuse_Navigation_SnapTo;
    type->__fp_CreateMaster__Fuse_Navigation_SwipeDirection = (::app::Fuse::Animations::MasterProperty__Fuse_Navigation_SwipeDirection*(*)(::app::Fuse::Animations::MixerBase*, ::app::Uno::UX::Property__Fuse_Navigation_SwipeDirection*, ::app::Fuse::Animations::MixerBase*))DiscreteMixer__CreateMaster__Fuse_Navigation_SwipeDirection;
    type->__fp_CreateMaster__Fuse_Navigation_SwipeEnds = (::app::Fuse::Animations::MasterProperty__Fuse_Navigation_SwipeEnds*(*)(::app::Fuse::Animations::MixerBase*, ::app::Uno::UX::Property__Fuse_Navigation_SwipeEnds*, ::app::Fuse::Animations::MixerBase*))DiscreteMixer__CreateMaster__Fuse_Navigation_SwipeEnds;
    type->__fp_CreateMaster__Fuse_Node = (::app::Fuse::Animations::MasterProperty__Fuse_Node*(*)(::app::Fuse::Animations::MixerBase*, ::app::Uno::UX::Property__Fuse_Node*, ::app::Fuse::Animations::MixerBase*))DiscreteMixer__CreateMaster__Fuse_Node;
    type->__fp_CreateMaster__Fuse_Resources_ImageSource = (::app::Fuse::Animations::MasterProperty__Fuse_Resources_ImageSource*(*)(::app::Fuse::Animations::MixerBase*, ::app::Uno::UX::Property__Fuse_Resources_ImageSource*, ::app::Fuse::Animations::MixerBase*))DiscreteMixer__CreateMaster__Fuse_Resources_ImageSource;
    type->__fp_CreateMaster__Fuse_Triggers_Actions_TriggerDirection = (::app::Fuse::Animations::MasterProperty__Fuse_Triggers_Actions_TriggerDirection*(*)(::app::Fuse::Animations::MixerBase*, ::app::Uno::UX::Property__Fuse_Triggers_Actions_TriggerDirection*, ::app::Fuse::Animations::MixerBase*))DiscreteMixer__CreateMaster__Fuse_Triggers_Actions_TriggerDirection;
    type->__fp_CreateMaster__Fuse_Triggers_State = (::app::Fuse::Animations::MasterProperty__Fuse_Triggers_State*(*)(::app::Fuse::Animations::MixerBase*, ::app::Uno::UX::Property__Fuse_Triggers_State*, ::app::Fuse::Animations::MixerBase*))DiscreteMixer__CreateMaster__Fuse_Triggers_State;
    type->__fp_CreateMaster__Fuse_Triggers_StateTransition = (::app::Fuse::Animations::MasterProperty__Fuse_Triggers_StateTransition*(*)(::app::Fuse::Animations::MixerBase*, ::app::Uno::UX::Property__Fuse_Triggers_StateTransition*, ::app::Fuse::Animations::MixerBase*))DiscreteMixer__CreateMaster__Fuse_Triggers_StateTransition;
    type->__fp_CreateMaster__Fuse_Triggers_TriggerBypassMode = (::app::Fuse::Animations::MasterProperty__Fuse_Triggers_TriggerBypassMode*(*)(::app::Fuse::Animations::MixerBase*, ::app::Uno::UX::Property__Fuse_Triggers_TriggerBypassMode*, ::app::Fuse::Animations::MixerBase*))DiscreteMixer__CreateMaster__Fuse_Triggers_TriggerBypassMode;
    type->__fp_CreateMaster__int = (::app::Fuse::Animations::MasterProperty__int*(*)(::app::Fuse::Animations::MixerBase*, ::app::Uno::UX::Property__int*, ::app::Fuse::Animations::MixerBase*))DiscreteMixer__CreateMaster__int;
    type->__fp_CreateMaster__int2 = (::app::Fuse::Animations::MasterProperty__int2*(*)(::app::Fuse::Animations::MixerBase*, ::app::Uno::UX::Property__int2*, ::app::Fuse::Animations::MixerBase*))DiscreteMixer__CreateMaster__int2;
    type->__fp_CreateMaster__int3 = (::app::Fuse::Animations::MasterProperty__int3*(*)(::app::Fuse::Animations::MixerBase*, ::app::Uno::UX::Property__int3*, ::app::Fuse::Animations::MixerBase*))DiscreteMixer__CreateMaster__int3;
    type->__fp_CreateMaster__int4 = (::app::Fuse::Animations::MasterProperty__int4*(*)(::app::Fuse::Animations::MixerBase*, ::app::Uno::UX::Property__int4*, ::app::Fuse::Animations::MixerBase*))DiscreteMixer__CreateMaster__int4;
    type->__fp_CreateMaster__long = (::app::Fuse::Animations::MasterProperty__long*(*)(::app::Fuse::Animations::MixerBase*, ::app::Uno::UX::Property__long*, ::app::Fuse::Animations::MixerBase*))DiscreteMixer__CreateMaster__long;
    type->__fp_CreateMaster__object = (::app::Fuse::Animations::MasterProperty__object*(*)(::app::Fuse::Animations::MixerBase*, ::app::Uno::UX::Property__object*, ::app::Fuse::Animations::MixerBase*))DiscreteMixer__CreateMaster__object;
    type->__fp_CreateMaster__short = (::app::Fuse::Animations::MasterProperty__short*(*)(::app::Fuse::Animations::MixerBase*, ::app::Uno::UX::Property__short*, ::app::Fuse::Animations::MixerBase*))DiscreteMixer__CreateMaster__short;
    type->__fp_CreateMaster__string = (::app::Fuse::Animations::MasterProperty__string*(*)(::app::Fuse::Animations::MixerBase*, ::app::Uno::UX::Property__string*, ::app::Fuse::Animations::MixerBase*))DiscreteMixer__CreateMaster__string;
    type->__fp_CreateMaster__Uno_EventArgs = (::app::Fuse::Animations::MasterProperty__Uno_EventArgs*(*)(::app::Fuse::Animations::MixerBase*, ::app::Uno::UX::Property__Uno_EventArgs*, ::app::Fuse::Animations::MixerBase*))DiscreteMixer__CreateMaster__Uno_EventArgs;
    type->__fp_CreateMaster__Uno_Platform_iOS_StatusBarStyle = (::app::Fuse::Animations::MasterProperty__Uno_Platform_iOS_StatusBarStyle*(*)(::app::Fuse::Animations::MixerBase*, ::app::Uno::UX::Property__Uno_Platform_iOS_StatusBarStyle*, ::app::Fuse::Animations::MixerBase*))DiscreteMixer__CreateMaster__Uno_Platform_iOS_StatusBarStyle;
    type->__fp_CreateMaster__Uno_UX_FileSource = (::app::Fuse::Animations::MasterProperty__Uno_UX_FileSource*(*)(::app::Fuse::Animations::MixerBase*, ::app::Uno::UX::Property__Uno_UX_FileSource*, ::app::Fuse::Animations::MixerBase*))DiscreteMixer__CreateMaster__Uno_UX_FileSource;
    type->__fp_CreateMasterTransform = (::app::Fuse::Animations::MasterBase__Fuse_Transform*(*)(::app::Fuse::Animations::MixerBase*, ::app::Fuse::Node*, ::app::Fuse::Animations::MixerBase*))DiscreteMixer__CreateMasterTransform;

    type->SetInterfaces(
        ::app::Fuse::Animations::IMixer__typeof(), offsetof(DiscreteMixer__uType, __interface_0));

    type->SetFunctions(1,
        ::uNewFunction(".ctor", DiscreteMixer__New_1, 0, true, DiscreteMixer__typeof()));

    ::uRegisterType(type);
    return type;
}

void DiscreteMixer___ObjInit_1(DiscreteMixer* __this)
{
    ::app::Fuse::Animations::MixerBase___ObjInit(__this);
}

::app::Fuse::Animations::MasterProperty__bool* DiscreteMixer__CreateMaster__bool(DiscreteMixer* __this, ::app::Uno::UX::Property__bool* property, ::app::Fuse::Animations::MixerBase* mixerBase)
{
    return (::app::Fuse::Animations::MasterProperty__bool*)::app::Fuse::Animations::DiscreteMasterProperty__bool__New_1(NULL, property, mixerBase);
}

::app::Fuse::Animations::MasterProperty__char* DiscreteMixer__CreateMaster__char(DiscreteMixer* __this, ::app::Uno::UX::Property__char* property, ::app::Fuse::Animations::MixerBase* mixerBase)
{
    return (::app::Fuse::Animations::MasterProperty__char*)::app::Fuse::Animations::DiscreteMasterProperty__char__New_1(NULL, property, mixerBase);
}

::app::Fuse::Animations::MasterProperty__double* DiscreteMixer__CreateMaster__double(DiscreteMixer* __this, ::app::Uno::UX::Property__double* property, ::app::Fuse::Animations::MixerBase* mixerBase)
{
    return (::app::Fuse::Animations::MasterProperty__double*)::app::Fuse::Animations::DiscreteMasterProperty__double__New_1(NULL, property, mixerBase);
}

::app::Fuse::Animations::MasterProperty__float* DiscreteMixer__CreateMaster__float(DiscreteMixer* __this, ::app::Uno::UX::Property__float* property, ::app::Fuse::Animations::MixerBase* mixerBase)
{
    return (::app::Fuse::Animations::MasterProperty__float*)::app::Fuse::Animations::DiscreteMasterProperty__float__New_1(NULL, property, mixerBase);
}

::app::Fuse::Animations::MasterProperty__float2* DiscreteMixer__CreateMaster__float2(DiscreteMixer* __this, ::app::Uno::UX::Property__float2* property, ::app::Fuse::Animations::MixerBase* mixerBase)
{
    return (::app::Fuse::Animations::MasterProperty__float2*)::app::Fuse::Animations::DiscreteMasterProperty__float2__New_1(NULL, property, mixerBase);
}

::app::Fuse::Animations::MasterProperty__float3* DiscreteMixer__CreateMaster__float3(DiscreteMixer* __this, ::app::Uno::UX::Property__float3* property, ::app::Fuse::Animations::MixerBase* mixerBase)
{
    return (::app::Fuse::Animations::MasterProperty__float3*)::app::Fuse::Animations::DiscreteMasterProperty__float3__New_1(NULL, property, mixerBase);
}

::app::Fuse::Animations::MasterProperty__float4* DiscreteMixer__CreateMaster__float4(DiscreteMixer* __this, ::app::Uno::UX::Property__float4* property, ::app::Fuse::Animations::MixerBase* mixerBase)
{
    return (::app::Fuse::Animations::MasterProperty__float4*)::app::Fuse::Animations::DiscreteMasterProperty__float4__New_1(NULL, property, mixerBase);
}

::app::Fuse::Animations::MasterProperty__Fuse_Animations_AnimationVariant* DiscreteMixer__CreateMaster__Fuse_Animations_AnimationVariant(DiscreteMixer* __this, ::app::Uno::UX::Property__Fuse_Animations_AnimationVariant* property, ::app::Fuse::Animations::MixerBase* mixerBase)
{
    return (::app::Fuse::Animations::MasterProperty__Fuse_Animations_AnimationVariant*)::app::Fuse::Animations::DiscreteMasterProperty__Fuse_Animations_AnimationVariant__New_1(NULL, property, mixerBase);
}

::app::Fuse::Animations::MasterProperty__Fuse_Animations_Easing* DiscreteMixer__CreateMaster__Fuse_Animations_Easing(DiscreteMixer* __this, ::app::Uno::UX::Property__Fuse_Animations_Easing* property, ::app::Fuse::Animations::MixerBase* mixerBase)
{
    return (::app::Fuse::Animations::MasterProperty__Fuse_Animations_Easing*)::app::Fuse::Animations::DiscreteMasterProperty__Fuse_Animations_Easing__New_1(NULL, property, mixerBase);
}

::app::Fuse::Animations::MasterProperty__Fuse_Animations_KeyframeInterpolation* DiscreteMixer__CreateMaster__Fuse_Animations_KeyframeInterpolation(DiscreteMixer* __this, ::app::Uno::UX::Property__Fuse_Animations_KeyframeInterpolation* property, ::app::Fuse::Animations::MixerBase* mixerBase)
{
    return (::app::Fuse::Animations::MasterProperty__Fuse_Animations_KeyframeInterpolation*)::app::Fuse::Animations::DiscreteMasterProperty__Fuse_Animations_KeyframeInterpolation__New_1(NULL, property, mixerBase);
}

::app::Fuse::Animations::MasterProperty__Fuse_Animations_MixOp* DiscreteMixer__CreateMaster__Fuse_Animations_MixOp(DiscreteMixer* __this, ::app::Uno::UX::Property__Fuse_Animations_MixOp* property, ::app::Fuse::Animations::MixerBase* mixerBase)
{
    return (::app::Fuse::Animations::MasterProperty__Fuse_Animations_MixOp*)::app::Fuse::Animations::DiscreteMasterProperty__Fuse_Animations_MixOp__New_1(NULL, property, mixerBase);
}

::app::Fuse::Animations::MasterProperty__Fuse_Drawing_BlendMode* DiscreteMixer__CreateMaster__Fuse_Drawing_BlendMode(DiscreteMixer* __this, ::app::Uno::UX::Property__Fuse_Drawing_BlendMode* property, ::app::Fuse::Animations::MixerBase* mixerBase)
{
    return (::app::Fuse::Animations::MasterProperty__Fuse_Drawing_BlendMode*)::app::Fuse::Animations::DiscreteMasterProperty__Fuse_Drawing_BlendMode__New_1(NULL, property, mixerBase);
}

::app::Fuse::Animations::MasterProperty__Fuse_Drawing_Brush* DiscreteMixer__CreateMaster__Fuse_Drawing_Brush(DiscreteMixer* __this, ::app::Uno::UX::Property__Fuse_Drawing_Brush* property, ::app::Fuse::Animations::MixerBase* mixerBase)
{
    return (::app::Fuse::Animations::MasterProperty__Fuse_Drawing_Brush*)::app::Fuse::Animations::DiscreteMasterProperty__Fuse_Drawing_Brush__New_1(NULL, property, mixerBase);
}

::app::Fuse::Animations::MasterProperty__Fuse_Drawing_DynamicBrush* DiscreteMixer__CreateMaster__Fuse_Drawing_DynamicBrush(DiscreteMixer* __this, ::app::Uno::UX::Property__Fuse_Drawing_DynamicBrush* property, ::app::Fuse::Animations::MixerBase* mixerBase)
{
    return (::app::Fuse::Animations::MasterProperty__Fuse_Drawing_DynamicBrush*)::app::Fuse::Animations::DiscreteMasterProperty__Fuse_Drawing_DynamicBrush__New_1(NULL, property, mixerBase);
}

::app::Fuse::Animations::MasterProperty__Fuse_Drawing_GradientStop* DiscreteMixer__CreateMaster__Fuse_Drawing_GradientStop(DiscreteMixer* __this, ::app::Uno::UX::Property__Fuse_Drawing_GradientStop* property, ::app::Fuse::Animations::MixerBase* mixerBase)
{
    return (::app::Fuse::Animations::MasterProperty__Fuse_Drawing_GradientStop*)::app::Fuse::Animations::DiscreteMasterProperty__Fuse_Drawing_GradientStop__New_1(NULL, property, mixerBase);
}

::app::Fuse::Animations::MasterProperty__Fuse_Drawing_LinearGradient* DiscreteMixer__CreateMaster__Fuse_Drawing_LinearGradient(DiscreteMixer* __this, ::app::Uno::UX::Property__Fuse_Drawing_LinearGradient* property, ::app::Fuse::Animations::MixerBase* mixerBase)
{
    return (::app::Fuse::Animations::MasterProperty__Fuse_Drawing_LinearGradient*)::app::Fuse::Animations::DiscreteMasterProperty__Fuse_Drawing_LinearGradient__New_1(NULL, property, mixerBase);
}

::app::Fuse::Animations::MasterProperty__Fuse_Drawing_SolidColor* DiscreteMixer__CreateMaster__Fuse_Drawing_SolidColor(DiscreteMixer* __this, ::app::Uno::UX::Property__Fuse_Drawing_SolidColor* property, ::app::Fuse::Animations::MixerBase* mixerBase)
{
    return (::app::Fuse::Animations::MasterProperty__Fuse_Drawing_SolidColor*)::app::Fuse::Animations::DiscreteMasterProperty__Fuse_Drawing_SolidColor__New_1(NULL, property, mixerBase);
}

::app::Fuse::Animations::MasterProperty__Fuse_Drawing_StaticBrush* DiscreteMixer__CreateMaster__Fuse_Drawing_StaticBrush(DiscreteMixer* __this, ::app::Uno::UX::Property__Fuse_Drawing_StaticBrush* property, ::app::Fuse::Animations::MixerBase* mixerBase)
{
    return (::app::Fuse::Animations::MasterProperty__Fuse_Drawing_StaticBrush*)::app::Fuse::Animations::DiscreteMasterProperty__Fuse_Drawing_StaticBrush__New_1(NULL, property, mixerBase);
}

::app::Fuse::Animations::MasterProperty__Fuse_Elements_Alignment* DiscreteMixer__CreateMaster__Fuse_Elements_Alignment(DiscreteMixer* __this, ::app::Uno::UX::Property__Fuse_Elements_Alignment* property, ::app::Fuse::Animations::MixerBase* mixerBase)
{
    return (::app::Fuse::Animations::MasterProperty__Fuse_Elements_Alignment*)::app::Fuse::Animations::DiscreteMasterProperty__Fuse_Elements_Alignment__New_1(NULL, property, mixerBase);
}

::app::Fuse::Animations::MasterProperty__Fuse_Elements_CachingMode* DiscreteMixer__CreateMaster__Fuse_Elements_CachingMode(DiscreteMixer* __this, ::app::Uno::UX::Property__Fuse_Elements_CachingMode* property, ::app::Fuse::Animations::MixerBase* mixerBase)
{
    return (::app::Fuse::Animations::MasterProperty__Fuse_Elements_CachingMode*)::app::Fuse::Animations::DiscreteMasterProperty__Fuse_Elements_CachingMode__New_1(NULL, property, mixerBase);
}

::app::Fuse::Animations::MasterProperty__Fuse_Elements_Element* DiscreteMixer__CreateMaster__Fuse_Elements_Element(DiscreteMixer* __this, ::app::Uno::UX::Property__Fuse_Elements_Element* property, ::app::Fuse::Animations::MixerBase* mixerBase)
{
    return (::app::Fuse::Animations::MasterProperty__Fuse_Elements_Element*)::app::Fuse::Animations::DiscreteMasterProperty__Fuse_Elements_Element__New_1(NULL, property, mixerBase);
}

::app::Fuse::Animations::MasterProperty__Fuse_Elements_HitTestMode* DiscreteMixer__CreateMaster__Fuse_Elements_HitTestMode(DiscreteMixer* __this, ::app::Uno::UX::Property__Fuse_Elements_HitTestMode* property, ::app::Fuse::Animations::MixerBase* mixerBase)
{
    return (::app::Fuse::Animations::MasterProperty__Fuse_Elements_HitTestMode*)::app::Fuse::Animations::DiscreteMasterProperty__Fuse_Elements_HitTestMode__New_1(NULL, property, mixerBase);
}

::app::Fuse::Animations::MasterProperty__Fuse_Elements_SizeUnit* DiscreteMixer__CreateMaster__Fuse_Elements_SizeUnit(DiscreteMixer* __this, ::app::Uno::UX::Property__Fuse_Elements_SizeUnit* property, ::app::Fuse::Animations::MixerBase* mixerBase)
{
    return (::app::Fuse::Animations::MasterProperty__Fuse_Elements_SizeUnit*)::app::Fuse::Animations::DiscreteMasterProperty__Fuse_Elements_SizeUnit__New_1(NULL, property, mixerBase);
}

::app::Fuse::Animations::MasterProperty__Fuse_Elements_StretchDirection* DiscreteMixer__CreateMaster__Fuse_Elements_StretchDirection(DiscreteMixer* __this, ::app::Uno::UX::Property__Fuse_Elements_StretchDirection* property, ::app::Fuse::Animations::MixerBase* mixerBase)
{
    return (::app::Fuse::Animations::MasterProperty__Fuse_Elements_StretchDirection*)::app::Fuse::Animations::DiscreteMasterProperty__Fuse_Elements_StretchDirection__New_1(NULL, property, mixerBase);
}

::app::Fuse::Animations::MasterProperty__Fuse_Elements_StretchMode* DiscreteMixer__CreateMaster__Fuse_Elements_StretchMode(DiscreteMixer* __this, ::app::Uno::UX::Property__Fuse_Elements_StretchMode* property, ::app::Fuse::Animations::MixerBase* mixerBase)
{
    return (::app::Fuse::Animations::MasterProperty__Fuse_Elements_StretchMode*)::app::Fuse::Animations::DiscreteMasterProperty__Fuse_Elements_StretchMode__New_1(NULL, property, mixerBase);
}

::app::Fuse::Animations::MasterProperty__Fuse_Elements_StretchSizing* DiscreteMixer__CreateMaster__Fuse_Elements_StretchSizing(DiscreteMixer* __this, ::app::Uno::UX::Property__Fuse_Elements_StretchSizing* property, ::app::Fuse::Animations::MixerBase* mixerBase)
{
    return (::app::Fuse::Animations::MasterProperty__Fuse_Elements_StretchSizing*)::app::Fuse::Animations::DiscreteMasterProperty__Fuse_Elements_StretchSizing__New_1(NULL, property, mixerBase);
}

::app::Fuse::Animations::MasterProperty__Fuse_Elements_TextAlignment* DiscreteMixer__CreateMaster__Fuse_Elements_TextAlignment(DiscreteMixer* __this, ::app::Uno::UX::Property__Fuse_Elements_TextAlignment* property, ::app::Fuse::Animations::MixerBase* mixerBase)
{
    return (::app::Fuse::Animations::MasterProperty__Fuse_Elements_TextAlignment*)::app::Fuse::Animations::DiscreteMasterProperty__Fuse_Elements_TextAlignment__New_1(NULL, property, mixerBase);
}

::app::Fuse::Animations::MasterProperty__Fuse_Elements_TextWrapping* DiscreteMixer__CreateMaster__Fuse_Elements_TextWrapping(DiscreteMixer* __this, ::app::Uno::UX::Property__Fuse_Elements_TextWrapping* property, ::app::Fuse::Animations::MixerBase* mixerBase)
{
    return (::app::Fuse::Animations::MasterProperty__Fuse_Elements_TextWrapping*)::app::Fuse::Animations::DiscreteMasterProperty__Fuse_Elements_TextWrapping__New_1(NULL, property, mixerBase);
}

::app::Fuse::Animations::MasterProperty__Fuse_Elements_Visibility* DiscreteMixer__CreateMaster__Fuse_Elements_Visibility(DiscreteMixer* __this, ::app::Uno::UX::Property__Fuse_Elements_Visibility* property, ::app::Fuse::Animations::MixerBase* mixerBase)
{
    return (::app::Fuse::Animations::MasterProperty__Fuse_Elements_Visibility*)::app::Fuse::Animations::DiscreteMasterProperty__Fuse_Elements_Visibility__New_1(NULL, property, mixerBase);
}

::app::Fuse::Animations::MasterProperty__Fuse_Font* DiscreteMixer__CreateMaster__Fuse_Font(DiscreteMixer* __this, ::app::Uno::UX::Property__Fuse_Font* property, ::app::Fuse::Animations::MixerBase* mixerBase)
{
    return (::app::Fuse::Animations::MasterProperty__Fuse_Font*)::app::Fuse::Animations::DiscreteMasterProperty__Fuse_Font__New_1(NULL, property, mixerBase);
}

::app::Fuse::Animations::MasterProperty__Fuse_Gestures_Edge* DiscreteMixer__CreateMaster__Fuse_Gestures_Edge(DiscreteMixer* __this, ::app::Uno::UX::Property__Fuse_Gestures_Edge* property, ::app::Fuse::Animations::MixerBase* mixerBase)
{
    return (::app::Fuse::Animations::MasterProperty__Fuse_Gestures_Edge*)::app::Fuse::Animations::DiscreteMasterProperty__Fuse_Gestures_Edge__New_1(NULL, property, mixerBase);
}

::app::Fuse::Animations::MasterProperty__Fuse_Gestures_ScrollDirections* DiscreteMixer__CreateMaster__Fuse_Gestures_ScrollDirections(DiscreteMixer* __this, ::app::Uno::UX::Property__Fuse_Gestures_ScrollDirections* property, ::app::Fuse::Animations::MixerBase* mixerBase)
{
    return (::app::Fuse::Animations::MasterProperty__Fuse_Gestures_ScrollDirections*)::app::Fuse::Animations::DiscreteMasterProperty__Fuse_Gestures_ScrollDirections__New_1(NULL, property, mixerBase);
}

::app::Fuse::Animations::MasterProperty__Fuse_Layouts_Dock* DiscreteMixer__CreateMaster__Fuse_Layouts_Dock(DiscreteMixer* __this, ::app::Uno::UX::Property__Fuse_Layouts_Dock* property, ::app::Fuse::Animations::MixerBase* mixerBase)
{
    return (::app::Fuse::Animations::MasterProperty__Fuse_Layouts_Dock*)::app::Fuse::Animations::DiscreteMasterProperty__Fuse_Layouts_Dock__New_1(NULL, property, mixerBase);
}

::app::Fuse::Animations::MasterProperty__Fuse_Layouts_FlowDirection* DiscreteMixer__CreateMaster__Fuse_Layouts_FlowDirection(DiscreteMixer* __this, ::app::Uno::UX::Property__Fuse_Layouts_FlowDirection* property, ::app::Fuse::Animations::MixerBase* mixerBase)
{
    return (::app::Fuse::Animations::MasterProperty__Fuse_Layouts_FlowDirection*)::app::Fuse::Animations::DiscreteMasterProperty__Fuse_Layouts_FlowDirection__New_1(NULL, property, mixerBase);
}

::app::Fuse::Animations::MasterProperty__Fuse_Layouts_Metric* DiscreteMixer__CreateMaster__Fuse_Layouts_Metric(DiscreteMixer* __this, ::app::Uno::UX::Property__Fuse_Layouts_Metric* property, ::app::Fuse::Animations::MixerBase* mixerBase)
{
    return (::app::Fuse::Animations::MasterProperty__Fuse_Layouts_Metric*)::app::Fuse::Animations::DiscreteMasterProperty__Fuse_Layouts_Metric__New_1(NULL, property, mixerBase);
}

::app::Fuse::Animations::MasterProperty__Fuse_Layouts_Orientation* DiscreteMixer__CreateMaster__Fuse_Layouts_Orientation(DiscreteMixer* __this, ::app::Uno::UX::Property__Fuse_Layouts_Orientation* property, ::app::Fuse::Animations::MixerBase* mixerBase)
{
    return (::app::Fuse::Animations::MasterProperty__Fuse_Layouts_Orientation*)::app::Fuse::Animations::DiscreteMasterProperty__Fuse_Layouts_Orientation__New_1(NULL, property, mixerBase);
}

::app::Fuse::Animations::MasterProperty__Fuse_Navigation_NavigationDirection* DiscreteMixer__CreateMaster__Fuse_Navigation_NavigationDirection(DiscreteMixer* __this, ::app::Uno::UX::Property__Fuse_Navigation_NavigationDirection* property, ::app::Fuse::Animations::MixerBase* mixerBase)
{
    return (::app::Fuse::Animations::MasterProperty__Fuse_Navigation_NavigationDirection*)::app::Fuse::Animations::DiscreteMasterProperty__Fuse_Navigation_NavigationDirection__New_1(NULL, property, mixerBase);
}

::app::Fuse::Animations::MasterProperty__Fuse_Navigation_NavigationEdge* DiscreteMixer__CreateMaster__Fuse_Navigation_NavigationEdge(DiscreteMixer* __this, ::app::Uno::UX::Property__Fuse_Navigation_NavigationEdge* property, ::app::Fuse::Animations::MixerBase* mixerBase)
{
    return (::app::Fuse::Animations::MasterProperty__Fuse_Navigation_NavigationEdge*)::app::Fuse::Animations::DiscreteMasterProperty__Fuse_Navigation_NavigationEdge__New_1(NULL, property, mixerBase);
}

::app::Fuse::Animations::MasterProperty__Fuse_Navigation_NavigationGotoMode* DiscreteMixer__CreateMaster__Fuse_Navigation_NavigationGotoMode(DiscreteMixer* __this, ::app::Uno::UX::Property__Fuse_Navigation_NavigationGotoMode* property, ::app::Fuse::Animations::MixerBase* mixerBase)
{
    return (::app::Fuse::Animations::MasterProperty__Fuse_Navigation_NavigationGotoMode*)::app::Fuse::Animations::DiscreteMasterProperty__Fuse_Navigation_NavigationGotoMode__New_1(NULL, property, mixerBase);
}

::app::Fuse::Animations::MasterProperty__Fuse_Navigation_SnapTo* DiscreteMixer__CreateMaster__Fuse_Navigation_SnapTo(DiscreteMixer* __this, ::app::Uno::UX::Property__Fuse_Navigation_SnapTo* property, ::app::Fuse::Animations::MixerBase* mixerBase)
{
    return (::app::Fuse::Animations::MasterProperty__Fuse_Navigation_SnapTo*)::app::Fuse::Animations::DiscreteMasterProperty__Fuse_Navigation_SnapTo__New_1(NULL, property, mixerBase);
}

::app::Fuse::Animations::MasterProperty__Fuse_Navigation_SwipeDirection* DiscreteMixer__CreateMaster__Fuse_Navigation_SwipeDirection(DiscreteMixer* __this, ::app::Uno::UX::Property__Fuse_Navigation_SwipeDirection* property, ::app::Fuse::Animations::MixerBase* mixerBase)
{
    return (::app::Fuse::Animations::MasterProperty__Fuse_Navigation_SwipeDirection*)::app::Fuse::Animations::DiscreteMasterProperty__Fuse_Navigation_SwipeDirection__New_1(NULL, property, mixerBase);
}

::app::Fuse::Animations::MasterProperty__Fuse_Navigation_SwipeEnds* DiscreteMixer__CreateMaster__Fuse_Navigation_SwipeEnds(DiscreteMixer* __this, ::app::Uno::UX::Property__Fuse_Navigation_SwipeEnds* property, ::app::Fuse::Animations::MixerBase* mixerBase)
{
    return (::app::Fuse::Animations::MasterProperty__Fuse_Navigation_SwipeEnds*)::app::Fuse::Animations::DiscreteMasterProperty__Fuse_Navigation_SwipeEnds__New_1(NULL, property, mixerBase);
}

::app::Fuse::Animations::MasterProperty__Fuse_Node* DiscreteMixer__CreateMaster__Fuse_Node(DiscreteMixer* __this, ::app::Uno::UX::Property__Fuse_Node* property, ::app::Fuse::Animations::MixerBase* mixerBase)
{
    return (::app::Fuse::Animations::MasterProperty__Fuse_Node*)::app::Fuse::Animations::DiscreteMasterProperty__Fuse_Node__New_1(NULL, property, mixerBase);
}

::app::Fuse::Animations::MasterProperty__Fuse_Resources_ImageSource* DiscreteMixer__CreateMaster__Fuse_Resources_ImageSource(DiscreteMixer* __this, ::app::Uno::UX::Property__Fuse_Resources_ImageSource* property, ::app::Fuse::Animations::MixerBase* mixerBase)
{
    return (::app::Fuse::Animations::MasterProperty__Fuse_Resources_ImageSource*)::app::Fuse::Animations::DiscreteMasterProperty__Fuse_Resources_ImageSource__New_1(NULL, property, mixerBase);
}

::app::Fuse::Animations::MasterProperty__Fuse_Triggers_Actions_TriggerDirection* DiscreteMixer__CreateMaster__Fuse_Triggers_Actions_TriggerDirection(DiscreteMixer* __this, ::app::Uno::UX::Property__Fuse_Triggers_Actions_TriggerDirection* property, ::app::Fuse::Animations::MixerBase* mixerBase)
{
    return (::app::Fuse::Animations::MasterProperty__Fuse_Triggers_Actions_TriggerDirection*)::app::Fuse::Animations::DiscreteMasterProperty__Fuse_Triggers_Actions_TriggerDirection__New_1(NULL, property, mixerBase);
}

::app::Fuse::Animations::MasterProperty__Fuse_Triggers_State* DiscreteMixer__CreateMaster__Fuse_Triggers_State(DiscreteMixer* __this, ::app::Uno::UX::Property__Fuse_Triggers_State* property, ::app::Fuse::Animations::MixerBase* mixerBase)
{
    return (::app::Fuse::Animations::MasterProperty__Fuse_Triggers_State*)::app::Fuse::Animations::DiscreteMasterProperty__Fuse_Triggers_State__New_1(NULL, property, mixerBase);
}

::app::Fuse::Animations::MasterProperty__Fuse_Triggers_StateTransition* DiscreteMixer__CreateMaster__Fuse_Triggers_StateTransition(DiscreteMixer* __this, ::app::Uno::UX::Property__Fuse_Triggers_StateTransition* property, ::app::Fuse::Animations::MixerBase* mixerBase)
{
    return (::app::Fuse::Animations::MasterProperty__Fuse_Triggers_StateTransition*)::app::Fuse::Animations::DiscreteMasterProperty__Fuse_Triggers_StateTransition__New_1(NULL, property, mixerBase);
}

::app::Fuse::Animations::MasterProperty__Fuse_Triggers_TriggerBypassMode* DiscreteMixer__CreateMaster__Fuse_Triggers_TriggerBypassMode(DiscreteMixer* __this, ::app::Uno::UX::Property__Fuse_Triggers_TriggerBypassMode* property, ::app::Fuse::Animations::MixerBase* mixerBase)
{
    return (::app::Fuse::Animations::MasterProperty__Fuse_Triggers_TriggerBypassMode*)::app::Fuse::Animations::DiscreteMasterProperty__Fuse_Triggers_TriggerBypassMode__New_1(NULL, property, mixerBase);
}

::app::Fuse::Animations::MasterProperty__int* DiscreteMixer__CreateMaster__int(DiscreteMixer* __this, ::app::Uno::UX::Property__int* property, ::app::Fuse::Animations::MixerBase* mixerBase)
{
    return (::app::Fuse::Animations::MasterProperty__int*)::app::Fuse::Animations::DiscreteMasterProperty__int__New_1(NULL, property, mixerBase);
}

::app::Fuse::Animations::MasterProperty__int2* DiscreteMixer__CreateMaster__int2(DiscreteMixer* __this, ::app::Uno::UX::Property__int2* property, ::app::Fuse::Animations::MixerBase* mixerBase)
{
    return (::app::Fuse::Animations::MasterProperty__int2*)::app::Fuse::Animations::DiscreteMasterProperty__int2__New_1(NULL, property, mixerBase);
}

::app::Fuse::Animations::MasterProperty__int3* DiscreteMixer__CreateMaster__int3(DiscreteMixer* __this, ::app::Uno::UX::Property__int3* property, ::app::Fuse::Animations::MixerBase* mixerBase)
{
    return (::app::Fuse::Animations::MasterProperty__int3*)::app::Fuse::Animations::DiscreteMasterProperty__int3__New_1(NULL, property, mixerBase);
}

::app::Fuse::Animations::MasterProperty__int4* DiscreteMixer__CreateMaster__int4(DiscreteMixer* __this, ::app::Uno::UX::Property__int4* property, ::app::Fuse::Animations::MixerBase* mixerBase)
{
    return (::app::Fuse::Animations::MasterProperty__int4*)::app::Fuse::Animations::DiscreteMasterProperty__int4__New_1(NULL, property, mixerBase);
}

::app::Fuse::Animations::MasterProperty__long* DiscreteMixer__CreateMaster__long(DiscreteMixer* __this, ::app::Uno::UX::Property__long* property, ::app::Fuse::Animations::MixerBase* mixerBase)
{
    return (::app::Fuse::Animations::MasterProperty__long*)::app::Fuse::Animations::DiscreteMasterProperty__long__New_1(NULL, property, mixerBase);
}

::app::Fuse::Animations::MasterProperty__object* DiscreteMixer__CreateMaster__object(DiscreteMixer* __this, ::app::Uno::UX::Property__object* property, ::app::Fuse::Animations::MixerBase* mixerBase)
{
    return (::app::Fuse::Animations::MasterProperty__object*)::app::Fuse::Animations::DiscreteMasterProperty__object__New_1(NULL, property, mixerBase);
}

::app::Fuse::Animations::MasterProperty__short* DiscreteMixer__CreateMaster__short(DiscreteMixer* __this, ::app::Uno::UX::Property__short* property, ::app::Fuse::Animations::MixerBase* mixerBase)
{
    return (::app::Fuse::Animations::MasterProperty__short*)::app::Fuse::Animations::DiscreteMasterProperty__short__New_1(NULL, property, mixerBase);
}

::app::Fuse::Animations::MasterProperty__string* DiscreteMixer__CreateMaster__string(DiscreteMixer* __this, ::app::Uno::UX::Property__string* property, ::app::Fuse::Animations::MixerBase* mixerBase)
{
    return (::app::Fuse::Animations::MasterProperty__string*)::app::Fuse::Animations::DiscreteMasterProperty__string__New_1(NULL, property, mixerBase);
}

::app::Fuse::Animations::MasterProperty__Uno_EventArgs* DiscreteMixer__CreateMaster__Uno_EventArgs(DiscreteMixer* __this, ::app::Uno::UX::Property__Uno_EventArgs* property, ::app::Fuse::Animations::MixerBase* mixerBase)
{
    return (::app::Fuse::Animations::MasterProperty__Uno_EventArgs*)::app::Fuse::Animations::DiscreteMasterProperty__Uno_EventArgs__New_1(NULL, property, mixerBase);
}

::app::Fuse::Animations::MasterProperty__Uno_Platform_iOS_StatusBarStyle* DiscreteMixer__CreateMaster__Uno_Platform_iOS_StatusBarStyle(DiscreteMixer* __this, ::app::Uno::UX::Property__Uno_Platform_iOS_StatusBarStyle* property, ::app::Fuse::Animations::MixerBase* mixerBase)
{
    return (::app::Fuse::Animations::MasterProperty__Uno_Platform_iOS_StatusBarStyle*)::app::Fuse::Animations::DiscreteMasterProperty__Uno_Platform_iOS_StatusBarStyle__New_1(NULL, property, mixerBase);
}

::app::Fuse::Animations::MasterProperty__Uno_UX_FileSource* DiscreteMixer__CreateMaster__Uno_UX_FileSource(DiscreteMixer* __this, ::app::Uno::UX::Property__Uno_UX_FileSource* property, ::app::Fuse::Animations::MixerBase* mixerBase)
{
    return (::app::Fuse::Animations::MasterProperty__Uno_UX_FileSource*)::app::Fuse::Animations::DiscreteMasterProperty__Uno_UX_FileSource__New_1(NULL, property, mixerBase);
}

::app::Fuse::Animations::MasterBase__Fuse_Transform* DiscreteMixer__CreateMasterTransform(DiscreteMixer* __this, ::app::Fuse::Node* element, ::app::Fuse::Animations::MixerBase* mixerBase)
{
    return (::app::Fuse::Animations::MasterBase__Fuse_Transform*)::app::Fuse::Animations::DiscreteMasterTransform__New_1(NULL, element, mixerBase);
}

DiscreteMixer* DiscreteMixer__New_1(::uStatic* __this)
{
    DiscreteMixer* inst = (DiscreteMixer*)::uAllocObject(sizeof(DiscreteMixer), DiscreteMixer__typeof());
    inst->_ObjInit_1();
    return inst;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Animations\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

::uStaticStrong< DiscreteSingleTrack*> DiscreteSingleTrack__Singleton;

DiscreteSingleTrack__uType* DiscreteSingleTrack__typeof()
{
    static ::uStaticStrong<DiscreteSingleTrack__uType*> type;
    if (type != NULL) return type;

    type = (DiscreteSingleTrack__uType*)::uAllocClassType(sizeof(DiscreteSingleTrack__uType), "Fuse.Animations.DiscreteSingleTrack", false, 3, 0, 0);

    type->__interface_2.__fp_GetDuration = (double(*)(void*, ::app::Fuse::Animations::TrackAnimator*, int))DiscreteSingleTrack__Fuse_Animations_TrackProvider_GetDuration;
    type->__interface_2.__fp_GetAnimatorVariant = (int(*)(void*, ::app::Fuse::Animations::TrackAnimator*))DiscreteSingleTrack__Fuse_Animations_TrackProvider_GetAnimatorVariant;
    type->__interface_0.__fp_GetSeekProgress = (bool(*)(void*, ::app::Fuse::Animations::TrackAnimatorState*, double, double, int, ::uObject**, double*))DiscreteSingleTrack__Fuse_Animations_DiscreteTrackProvider_GetSeekProgress;
    type->__interface_0.__fp_GetSeekTime = (bool(*)(void*, ::app::Fuse::Animations::TrackAnimatorState*, double, double, int, ::uObject**, double*))DiscreteSingleTrack__Fuse_Animations_DiscreteTrackProvider_GetSeekTime;

    type->SetInterfaces(
        ::app::Fuse::Animations::DiscreteTrackProvider__typeof(), offsetof(DiscreteSingleTrack__uType, __interface_0),
        ::app::Fuse::Animations::ITrackProvider__typeof(), offsetof(DiscreteSingleTrack__uType, __interface_1),
        ::app::Fuse::Animations::TrackProvider__typeof(), offsetof(DiscreteSingleTrack__uType, __interface_2));

    type->SetFields(1,
        ::uNewField("Singleton", &DiscreteSingleTrack__Singleton, 0, DiscreteSingleTrack__typeof()));

    type->SetFunctions(5,
        ::uNewFunction("Fuse.Animations.DiscreteTrackProvider.GetSeekProgress", DiscreteSingleTrack__Fuse_Animations_DiscreteTrackProvider_GetSeekProgress, 0, false, ::app::Uno::Bool__typeof(), ::app::Fuse::Animations::TrackAnimatorState__typeof(), ::app::Uno::Double__typeof(), ::app::Uno::Double__typeof(), ::app::Fuse::Animations::SeekDirection__typeof(), ::uObject__typeof(), ::app::Uno::Double__typeof()),
        ::uNewFunction("Fuse.Animations.DiscreteTrackProvider.GetSeekTime", DiscreteSingleTrack__Fuse_Animations_DiscreteTrackProvider_GetSeekTime, 0, false, ::app::Uno::Bool__typeof(), ::app::Fuse::Animations::TrackAnimatorState__typeof(), ::app::Uno::Double__typeof(), ::app::Uno::Double__typeof(), ::app::Fuse::Animations::SeekDirection__typeof(), ::uObject__typeof(), ::app::Uno::Double__typeof()),
        ::uNewFunction("Fuse.Animations.TrackProvider.GetAnimatorVariant", DiscreteSingleTrack__Fuse_Animations_TrackProvider_GetAnimatorVariant, 0, false, ::app::Fuse::Animations::AnimatorVariant__typeof(), ::app::Fuse::Animations::TrackAnimator__typeof()),
        ::uNewFunction("Fuse.Animations.TrackProvider.GetDuration", DiscreteSingleTrack__Fuse_Animations_TrackProvider_GetDuration, 0, false, ::app::Uno::Double__typeof(), ::app::Fuse::Animations::TrackAnimator__typeof(), ::app::Fuse::Animations::AnimationVariant__typeof()),
        ::uNewFunction(".ctor", DiscreteSingleTrack__New_1, 0, true, DiscreteSingleTrack__typeof()));

    ::uRegisterType(type);
    return type;
}

void DiscreteSingleTrack___ObjInit(DiscreteSingleTrack* __this)
{
}

void DiscreteSingleTrack___TypeInit(::uStatic* __this)
{
    DiscreteSingleTrack__Singleton = DiscreteSingleTrack__New_1(NULL);
}

bool DiscreteSingleTrack__Fuse_Animations_DiscreteTrackProvider_GetSeekProgress(DiscreteSingleTrack* __this, ::app::Fuse::Animations::TrackAnimatorState* tas, double progress, double interval, int dir, ::uObject** value, double* strength)
{
    *strength = progress;
    *value = ::uPtr< ::app::Fuse::Animations::TrackAnimator*>(::uPtr< ::app::Fuse::Animations::TrackAnimatorState*>(tas)->Animator)->_objectValue;
    return (dir == 0) ? (progress >= 1.0) : (progress <= 0.0);
}

bool DiscreteSingleTrack__Fuse_Animations_DiscreteTrackProvider_GetSeekTime(DiscreteSingleTrack* __this, ::app::Fuse::Animations::TrackAnimatorState* tas, double elapsed, double interval, int dir, ::uObject** value, double* strength)
{
    double duration = ::uPtr< ::app::Fuse::Animations::TrackAnimatorState*>(tas)->Duration();
    float progress = float();

    if (duration < 9.9999997473787516e-06)
    {
        progress = (float)(((dir == 0) ? (elapsed >= -9.9999997473787516e-06) : (elapsed > 9.9999997473787516e-06)) ? 1 : 0);
    }
    else
    {
        progress = (float)(elapsed / duration);
    }

    *strength = (double)::app::Uno::Math__Clamp_1(NULL, progress, 0.0f, 1.0f);
    *value = ::uPtr< ::app::Fuse::Animations::TrackAnimator*>(tas->Animator)->_objectValue;
    return (dir == 0) ? (elapsed >= 0.0) : (elapsed <= 0.0);
}

int DiscreteSingleTrack__Fuse_Animations_TrackProvider_GetAnimatorVariant(DiscreteSingleTrack* __this, ::app::Fuse::Animations::TrackAnimator* ta)
{
    return ::uPtr< ::app::Fuse::Animations::TrackAnimator*>(ta)->HasBack() ? 2 : 0;
}

double DiscreteSingleTrack__Fuse_Animations_TrackProvider_GetDuration(DiscreteSingleTrack* __this, ::app::Fuse::Animations::TrackAnimator* ta, int variant)
{
    return (variant == 1) ? ::uPtr< ::app::Fuse::Animations::TrackAnimator*>(ta)->DurationBack() : ::uPtr< ::app::Fuse::Animations::TrackAnimator*>(ta)->Duration();
}

DiscreteSingleTrack* DiscreteSingleTrack__New_1(::uStatic* __this)
{
    DiscreteSingleTrack* inst = (DiscreteSingleTrack*)::uAllocObject(sizeof(DiscreteSingleTrack), DiscreteSingleTrack__typeof());
    inst->_ObjInit();
    return inst;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Animations\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

::uInterfaceType* DiscreteTrackProvider__typeof()
{
    static ::uStaticStrong< ::uInterfaceType*> type;
    if (type != NULL) return type;

    type = ::uAllocInterfaceType("Fuse.Animations.DiscreteTrackProvider");

    ::uRegisterType(type);
    return type;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Animations\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

::uEnumType* Easing__typeof()
{
    static ::uStaticStrong< ::uEnumType*> type;
    if (type != NULL) return type;

    type = ::uAllocEnumType("Fuse.Animations.Easing", ::app::Uno::Int__typeof(), 31);

    type->SetLiterals(
        "Linear", 0LL,
        "QuadraticIn", 1LL,
        "QuadraticOut", 2LL,
        "QuadraticInOut", 3LL,
        "CubicIn", 4LL,
        "CubicOut", 5LL,
        "CubicInOut", 6LL,
        "QuarticIn", 7LL,
        "QuarticOut", 8LL,
        "QuarticInOut", 9LL,
        "QuinticIn", 10LL,
        "QuinticOut", 11LL,
        "QuinticInOut", 12LL,
        "SinusoidalIn", 13LL,
        "SinusoidalOut", 14LL,
        "SinusoidalInOut", 15LL,
        "ExponentialIn", 16LL,
        "ExponentialOut", 17LL,
        "ExponentialInOut", 18LL,
        "CircularIn", 19LL,
        "CircularOut", 20LL,
        "CircularInOut", 21LL,
        "ElasticIn", 22LL,
        "ElasticOut", 23LL,
        "ElasticInOut", 24LL,
        "BackIn", 25LL,
        "BackOut", 26LL,
        "BackInOut", 27LL,
        "BounceIn", 28LL,
        "BounceOut", 29LL,
        "BounceInOut", 30LL);

    ::uRegisterType(type);
    return type;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Animations\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

::uDelegateType* EasingFunction__typeof()
{
    static ::uStaticStrong< ::uDelegateType*> type;
    if (type != NULL) return type;

    type = ::uAllocDelegateType("Fuse.Animations.EasingFunction", 1);

    type->SetSignature(::app::Uno::Float__typeof(),
        ::app::Uno::Float__typeof());

    ::uRegisterType(type);
    return type;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Animations\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

EasingFunctions__uType* EasingFunctions__typeof()
{
    static ::uStaticStrong<EasingFunctions__uType*> type;
    if (type != NULL) return type;

    type = (EasingFunctions__uType*)::uAllocClassType(sizeof(EasingFunctions__uType), "Fuse.Animations.EasingFunctions");

    type->SetFunctions(32,
        ::uNewFunction("BackIn", EasingFunctions__BackIn, 0, true, ::app::Uno::Float__typeof(), ::app::Uno::Float__typeof()),
        ::uNewFunction("BackInOut", EasingFunctions__BackInOut, 0, true, ::app::Uno::Float__typeof(), ::app::Uno::Float__typeof()),
        ::uNewFunction("BackOut", EasingFunctions__BackOut, 0, true, ::app::Uno::Float__typeof(), ::app::Uno::Float__typeof()),
        ::uNewFunction("BounceIn", EasingFunctions__BounceIn, 0, true, ::app::Uno::Float__typeof(), ::app::Uno::Float__typeof()),
        ::uNewFunction("BounceInOut", EasingFunctions__BounceInOut, 0, true, ::app::Uno::Float__typeof(), ::app::Uno::Float__typeof()),
        ::uNewFunction("BounceOut", EasingFunctions__BounceOut, 0, true, ::app::Uno::Float__typeof(), ::app::Uno::Float__typeof()),
        ::uNewFunction("CircularIn", EasingFunctions__CircularIn, 0, true, ::app::Uno::Float__typeof(), ::app::Uno::Float__typeof()),
        ::uNewFunction("CircularInOut", EasingFunctions__CircularInOut, 0, true, ::app::Uno::Float__typeof(), ::app::Uno::Float__typeof()),
        ::uNewFunction("CircularOut", EasingFunctions__CircularOut, 0, true, ::app::Uno::Float__typeof(), ::app::Uno::Float__typeof()),
        ::uNewFunction("CubicIn", EasingFunctions__CubicIn, 0, true, ::app::Uno::Float__typeof(), ::app::Uno::Float__typeof()),
        ::uNewFunction("CubicInOut", EasingFunctions__CubicInOut, 0, true, ::app::Uno::Float__typeof(), ::app::Uno::Float__typeof()),
        ::uNewFunction("CubicOut", EasingFunctions__CubicOut, 0, true, ::app::Uno::Float__typeof(), ::app::Uno::Float__typeof()),
        ::uNewFunction("ElasticIn", EasingFunctions__ElasticIn, 0, true, ::app::Uno::Float__typeof(), ::app::Uno::Float__typeof()),
        ::uNewFunction("ElasticInOut", EasingFunctions__ElasticInOut, 0, true, ::app::Uno::Float__typeof(), ::app::Uno::Float__typeof()),
        ::uNewFunction("ElasticOut", EasingFunctions__ElasticOut, 0, true, ::app::Uno::Float__typeof(), ::app::Uno::Float__typeof()),
        ::uNewFunction("ExponentialIn", EasingFunctions__ExponentialIn, 0, true, ::app::Uno::Float__typeof(), ::app::Uno::Float__typeof()),
        ::uNewFunction("ExponentialInOut", EasingFunctions__ExponentialInOut, 0, true, ::app::Uno::Float__typeof(), ::app::Uno::Float__typeof()),
        ::uNewFunction("ExponentialOut", EasingFunctions__ExponentialOut, 0, true, ::app::Uno::Float__typeof(), ::app::Uno::Float__typeof()),
        ::uNewFunction("FromEasing", EasingFunctions__FromEasing, 0, true, ::app::Fuse::Animations::EasingFunction__typeof(), ::app::Fuse::Animations::Easing__typeof()),
        ::uNewFunction("Linear", EasingFunctions__Linear, 0, true, ::app::Uno::Float__typeof(), ::app::Uno::Float__typeof()),
        ::uNewFunction("QuadraticIn", EasingFunctions__QuadraticIn, 0, true, ::app::Uno::Float__typeof(), ::app::Uno::Float__typeof()),
        ::uNewFunction("QuadraticInOut", EasingFunctions__QuadraticInOut, 0, true, ::app::Uno::Float__typeof(), ::app::Uno::Float__typeof()),
        ::uNewFunction("QuadraticOut", EasingFunctions__QuadraticOut, 0, true, ::app::Uno::Float__typeof(), ::app::Uno::Float__typeof()),
        ::uNewFunction("QuarticIn", EasingFunctions__QuarticIn, 0, true, ::app::Uno::Float__typeof(), ::app::Uno::Float__typeof()),
        ::uNewFunction("QuarticInOut", EasingFunctions__QuarticInOut, 0, true, ::app::Uno::Float__typeof(), ::app::Uno::Float__typeof()),
        ::uNewFunction("QuarticOut", EasingFunctions__QuarticOut, 0, true, ::app::Uno::Float__typeof(), ::app::Uno::Float__typeof()),
        ::uNewFunction("QuinticIn", EasingFunctions__QuinticIn, 0, true, ::app::Uno::Float__typeof(), ::app::Uno::Float__typeof()),
        ::uNewFunction("QuinticInOut", EasingFunctions__QuinticInOut, 0, true, ::app::Uno::Float__typeof(), ::app::Uno::Float__typeof()),
        ::uNewFunction("QuinticOut", EasingFunctions__QuinticOut, 0, true, ::app::Uno::Float__typeof(), ::app::Uno::Float__typeof()),
        ::uNewFunction("SinusoidalIn", EasingFunctions__SinusoidalIn, 0, true, ::app::Uno::Float__typeof(), ::app::Uno::Float__typeof()),
        ::uNewFunction("SinusoidalInOut", EasingFunctions__SinusoidalInOut, 0, true, ::app::Uno::Float__typeof(), ::app::Uno::Float__typeof()),
        ::uNewFunction("SinusoidalOut", EasingFunctions__SinusoidalOut, 0, true, ::app::Uno::Float__typeof(), ::app::Uno::Float__typeof()));

    ::uRegisterType(type);
    return type;
}

float EasingFunctions__BackIn(::uStatic* __this, float k)
{
    float s = 1.70158f;
    return (k * k) * (((s + 1.0f) * k) - s);
}

float EasingFunctions__BackInOut(::uStatic* __this, float k)
{
    float s = 2.59490943f;
    k = k * 2.0f;

    if (k < 1.0f)
    {
        return 0.5f * ((k * k) * (((s + 1.0f) * k) - s));
    }

    k = k - 2.0f;
    return 0.5f * (((k * k) * (((s + 1.0f) * k) + s)) + 2.0f);
}

float EasingFunctions__BackOut(::uStatic* __this, float k)
{
    float s = 1.70158f;
    k = k - 1.0f;
    return ((k * k) * (((s + 1.0f) * k) + s)) + 1.0f;
}

float EasingFunctions__BounceIn(::uStatic* __this, float k)
{
    return 1.0f - EasingFunctions__BounceOut(NULL, 1.0f - k);
}

float EasingFunctions__BounceInOut(::uStatic* __this, float k)
{
    if (k < 0.5f)
    {
        return EasingFunctions__BounceIn(NULL, k * 2.0f) * 0.5f;
    }

    return (EasingFunctions__BounceOut(NULL, (k * 2.0f) - 1.0f) * 0.5f) + 0.5f;
}

float EasingFunctions__BounceOut(::uStatic* __this, float k)
{
    if (k < 0.363636374f)
    {
        return (7.5625f * k) * k;
    }
    else if (k < 0.727272749f)
    {
        k = k - 0.545454562f;
        return ((7.5625f * k) * k) + 0.75f;
    }
    else if (k < 0.909090936f)
    {
        k = k - 0.8181818f;
        return ((7.562f * k) * k) + 0.9375f;
    }
    else
    {
        k = k - 0.954545438f;
        return ((7.5625f * k) * k) + 0.984375f;
    }
}

float EasingFunctions__CircularIn(::uStatic* __this, float k)
{
    return 1.0f - ::app::Uno::Math__Sqrt_1(NULL, 1.0f - (k * k));
}

float EasingFunctions__CircularInOut(::uStatic* __this, float k)
{
    k = k * 2.0f;

    if (k < 1.0f)
    {
        return -0.5f * (::app::Uno::Math__Sqrt_1(NULL, 1.0f - (k * k)) - 1.0f);
    }

    k = k - 2.0f;
    return 0.5f * (::app::Uno::Math__Sqrt_1(NULL, 1.0f - (k * k)) + 1.0f);
}

float EasingFunctions__CircularOut(::uStatic* __this, float k)
{
    k = k - 1.0f;
    return ::app::Uno::Math__Sqrt_1(NULL, 1.0f - (k * k));
}

float EasingFunctions__CubicIn(::uStatic* __this, float k)
{
    return (k * k) * k;
}

float EasingFunctions__CubicInOut(::uStatic* __this, float k)
{
    k = k * 2.0f;

    if (k < 1.0f)
    {
        return ((0.5f * k) * k) * k;
    }

    k = k - 2.0f;
    return 0.5f * (((k * k) * k) + 2.0f);
}

float EasingFunctions__CubicOut(::uStatic* __this, float k)
{
    k = k - 1.0f;
    return ((k * k) * k) + 1.0f;
}

float EasingFunctions__ElasticIn(::uStatic* __this, float k)
{
    if (k == 0.0f)
    {
        return 0.0f;
    }

    if (k == 1.0f)
    {
        return 1.0f;
    }

    k = k - 1.0f;
    return -::app::Uno::Math__Pow_1(NULL, 2.0f, 10.0f * k) * ::app::Uno::Math__Sin_1(NULL, ((k - 0.1f) * 6.28318548f) * 2.5f);
}

float EasingFunctions__ElasticInOut(::uStatic* __this, float k)
{
    if (k == 0.0f)
    {
        return 0.0f;
    }

    if (k == 1.0f)
    {
        return 1.0f;
    }

    k = (k * 2.0f) - 1.0f;

    if (k < 0.0f)
    {
        return (-0.5f * ::app::Uno::Math__Pow_1(NULL, 2.0f, 10.0f * k)) * ::app::Uno::Math__Sin_1(NULL, ((k - 0.1f) * 6.28318548f) * 2.5f);
    }

    return ((::app::Uno::Math__Pow_1(NULL, 2.0f, -10.0f * k) * ::app::Uno::Math__Sin_1(NULL, ((k - 0.1f) * 6.28318548f) * 2.5f)) * 0.5f) + 1.0f;
}

float EasingFunctions__ElasticOut(::uStatic* __this, float k)
{
    if (k == 0.0f)
    {
        return 0.0f;
    }

    if (k == 1.0f)
    {
        return 1.0f;
    }

    return (::app::Uno::Math__Pow_1(NULL, 2.0f, -10.0f * k) * ::app::Uno::Math__Sin_1(NULL, ((k - 0.1f) * 6.28318548f) * 2.5f)) + 1.0f;
}

float EasingFunctions__ExponentialIn(::uStatic* __this, float k)
{
    return (k == 0.0f) ? 0.0f : ::app::Uno::Math__Pow_1(NULL, 1024.0f, k - 1.0f);
}

float EasingFunctions__ExponentialInOut(::uStatic* __this, float k)
{
    if (k == 0.0f)
    {
        return 0.0f;
    }

    if (k == 1.0f)
    {
        return 1.0f;
    }

    k = k * 2.0f;

    if (k < 1.0f)
    {
        return 0.5f * ::app::Uno::Math__Pow_1(NULL, 1024.0f, k - 1.0f);
    }

    return 0.5f * (-::app::Uno::Math__Pow_1(NULL, 2.0f, -10.0f * (k - 1.0f)) + 2.0f);
}

float EasingFunctions__ExponentialOut(::uStatic* __this, float k)
{
    return (k == 1.0f) ? 1.0f : (1.0f - ::app::Uno::Math__Pow_1(NULL, 2.0f, -10.0f * k));
}

::uDelegate* EasingFunctions__FromEasing(::uStatic* __this, int e)
{
    switch (e)
    {
        case 0:
        {
            return ::uNewDelegateNonVirt(::app::Fuse::Animations::EasingFunction__typeof(), (const void*)EasingFunctions__Linear);
        }
        case 1:
        {
            return ::uNewDelegateNonVirt(::app::Fuse::Animations::EasingFunction__typeof(), (const void*)EasingFunctions__QuadraticIn);
        }
        case 2:
        {
            return ::uNewDelegateNonVirt(::app::Fuse::Animations::EasingFunction__typeof(), (const void*)EasingFunctions__QuadraticOut);
        }
        case 3:
        {
            return ::uNewDelegateNonVirt(::app::Fuse::Animations::EasingFunction__typeof(), (const void*)EasingFunctions__QuadraticInOut);
        }
        case 4:
        {
            return ::uNewDelegateNonVirt(::app::Fuse::Animations::EasingFunction__typeof(), (const void*)EasingFunctions__CubicIn);
        }
        case 5:
        {
            return ::uNewDelegateNonVirt(::app::Fuse::Animations::EasingFunction__typeof(), (const void*)EasingFunctions__CubicOut);
        }
        case 6:
        {
            return ::uNewDelegateNonVirt(::app::Fuse::Animations::EasingFunction__typeof(), (const void*)EasingFunctions__CubicInOut);
        }
        case 7:
        {
            return ::uNewDelegateNonVirt(::app::Fuse::Animations::EasingFunction__typeof(), (const void*)EasingFunctions__QuarticIn);
        }
        case 8:
        {
            return ::uNewDelegateNonVirt(::app::Fuse::Animations::EasingFunction__typeof(), (const void*)EasingFunctions__QuarticOut);
        }
        case 9:
        {
            return ::uNewDelegateNonVirt(::app::Fuse::Animations::EasingFunction__typeof(), (const void*)EasingFunctions__QuarticInOut);
        }
        case 10:
        {
            return ::uNewDelegateNonVirt(::app::Fuse::Animations::EasingFunction__typeof(), (const void*)EasingFunctions__QuinticIn);
        }
        case 11:
        {
            return ::uNewDelegateNonVirt(::app::Fuse::Animations::EasingFunction__typeof(), (const void*)EasingFunctions__QuinticOut);
        }
        case 12:
        {
            return ::uNewDelegateNonVirt(::app::Fuse::Animations::EasingFunction__typeof(), (const void*)EasingFunctions__QuinticInOut);
        }
        case 13:
        {
            return ::uNewDelegateNonVirt(::app::Fuse::Animations::EasingFunction__typeof(), (const void*)EasingFunctions__SinusoidalIn);
        }
        case 14:
        {
            return ::uNewDelegateNonVirt(::app::Fuse::Animations::EasingFunction__typeof(), (const void*)EasingFunctions__SinusoidalOut);
        }
        case 15:
        {
            return ::uNewDelegateNonVirt(::app::Fuse::Animations::EasingFunction__typeof(), (const void*)EasingFunctions__SinusoidalInOut);
        }
        case 16:
        {
            return ::uNewDelegateNonVirt(::app::Fuse::Animations::EasingFunction__typeof(), (const void*)EasingFunctions__ExponentialIn);
        }
        case 17:
        {
            return ::uNewDelegateNonVirt(::app::Fuse::Animations::EasingFunction__typeof(), (const void*)EasingFunctions__ExponentialOut);
        }
        case 18:
        {
            return ::uNewDelegateNonVirt(::app::Fuse::Animations::EasingFunction__typeof(), (const void*)EasingFunctions__ExponentialInOut);
        }
        case 19:
        {
            return ::uNewDelegateNonVirt(::app::Fuse::Animations::EasingFunction__typeof(), (const void*)EasingFunctions__CircularIn);
        }
        case 20:
        {
            return ::uNewDelegateNonVirt(::app::Fuse::Animations::EasingFunction__typeof(), (const void*)EasingFunctions__CircularOut);
        }
        case 21:
        {
            return ::uNewDelegateNonVirt(::app::Fuse::Animations::EasingFunction__typeof(), (const void*)EasingFunctions__CircularInOut);
        }
        case 22:
        {
            return ::uNewDelegateNonVirt(::app::Fuse::Animations::EasingFunction__typeof(), (const void*)EasingFunctions__ElasticIn);
        }
        case 23:
        {
            return ::uNewDelegateNonVirt(::app::Fuse::Animations::EasingFunction__typeof(), (const void*)EasingFunctions__ElasticOut);
        }
        case 24:
        {
            return ::uNewDelegateNonVirt(::app::Fuse::Animations::EasingFunction__typeof(), (const void*)EasingFunctions__ElasticInOut);
        }
        case 25:
        {
            return ::uNewDelegateNonVirt(::app::Fuse::Animations::EasingFunction__typeof(), (const void*)EasingFunctions__BackIn);
        }
        case 26:
        {
            return ::uNewDelegateNonVirt(::app::Fuse::Animations::EasingFunction__typeof(), (const void*)EasingFunctions__BackOut);
        }
        case 27:
        {
            return ::uNewDelegateNonVirt(::app::Fuse::Animations::EasingFunction__typeof(), (const void*)EasingFunctions__BackInOut);
        }
        case 28:
        {
            return ::uNewDelegateNonVirt(::app::Fuse::Animations::EasingFunction__typeof(), (const void*)EasingFunctions__BounceIn);
        }
        case 29:
        {
            return ::uNewDelegateNonVirt(::app::Fuse::Animations::EasingFunction__typeof(), (const void*)EasingFunctions__BounceOut);
        }
        case 30:
        {
            return ::uNewDelegateNonVirt(::app::Fuse::Animations::EasingFunction__typeof(), (const void*)EasingFunctions__BounceInOut);
        }
        default:
        {
            return ::uNewDelegateNonVirt(::app::Fuse::Animations::EasingFunction__typeof(), (const void*)EasingFunctions__Linear);
        }
    }
}

float EasingFunctions__Linear(::uStatic* __this, float k)
{
    return k;
}

float EasingFunctions__QuadraticIn(::uStatic* __this, float k)
{
    return k * k;
}

float EasingFunctions__QuadraticInOut(::uStatic* __this, float k)
{
    k = k * 2.0f;

    if (k < 1.0f)
    {
        return (0.5f * k) * k;
    }

    k = k - 1.0f;
    return -0.5f * ((k * (k - 2.0f)) - 1.0f);
}

float EasingFunctions__QuadraticOut(::uStatic* __this, float k)
{
    return k * (2.0f - k);
}

float EasingFunctions__QuarticIn(::uStatic* __this, float k)
{
    return ((k * k) * k) * k;
}

float EasingFunctions__QuarticInOut(::uStatic* __this, float k)
{
    k = k * 2.0f;

    if (k < 1.0f)
    {
        return (((0.5f * k) * k) * k) * k;
    }

    k = k - 2.0f;
    return -0.5f * ((((k * k) * k) * k) - 2.0f);
}

float EasingFunctions__QuarticOut(::uStatic* __this, float k)
{
    k = k - 1.0f;
    return 1.0f - (((k * k) * k) * k);
}

float EasingFunctions__QuinticIn(::uStatic* __this, float k)
{
    return (((k * k) * k) * k) * k;
}

float EasingFunctions__QuinticInOut(::uStatic* __this, float k)
{
    k = k * 2.0f;

    if (k < 1.0f)
    {
        return ((((0.5f * k) * k) * k) * k) * k;
    }

    k = k - 2.0f;
    return 0.5f * (((((k * k) * k) * k) * k) + 2.0f);
}

float EasingFunctions__QuinticOut(::uStatic* __this, float k)
{
    k = k - 1.0f;
    return ((((k * k) * k) * k) * k) + 1.0f;
}

float EasingFunctions__SinusoidalIn(::uStatic* __this, float k)
{
    return 1.0f - ::app::Uno::Math__Cos_1(NULL, (k * 3.14159274f) / 2.0f);
}

float EasingFunctions__SinusoidalInOut(::uStatic* __this, float k)
{
    return 0.5f * (1.0f - ::app::Uno::Math__Cos_1(NULL, 3.14159274f * k));
}

float EasingFunctions__SinusoidalOut(::uStatic* __this, float k)
{
    return ::app::Uno::Math__Sin_1(NULL, (k * 3.14159274f) / 2.0f);
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Animations\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

::uStaticStrong< EasingTrack*> EasingTrack__Singleton;

EasingTrack__uType* EasingTrack__typeof()
{
    static ::uStaticStrong<EasingTrack__uType*> type;
    if (type != NULL) return type;

    type = (EasingTrack__uType*)::uAllocClassType(sizeof(EasingTrack__uType), "Fuse.Animations.EasingTrack", false, 3, 0, 0);

    type->__interface_2.__fp_GetDuration = (double(*)(void*, ::app::Fuse::Animations::TrackAnimator*, int))EasingTrack__Fuse_Animations_TrackProvider_GetDuration;
    type->__interface_2.__fp_GetAnimatorVariant = (int(*)(void*, ::app::Fuse::Animations::TrackAnimator*))EasingTrack__Fuse_Animations_TrackProvider_GetAnimatorVariant;
    type->__interface_0.__fp_GetSeekProgress = (bool(*)(void*, ::app::Fuse::Animations::TrackAnimatorState*, double, double, int, ::app::Uno::Float4*, double*))EasingTrack__Fuse_Animations_ContinuousTrackProvider_GetSeekProgress;
    type->__interface_0.__fp_GetSeekTime = (bool(*)(void*, ::app::Fuse::Animations::TrackAnimatorState*, double, double, int, ::app::Uno::Float4*, double*))EasingTrack__Fuse_Animations_ContinuousTrackProvider_GetSeekTime;

    type->SetInterfaces(
        ::app::Fuse::Animations::ContinuousTrackProvider__typeof(), offsetof(EasingTrack__uType, __interface_0),
        ::app::Fuse::Animations::ITrackProvider__typeof(), offsetof(EasingTrack__uType, __interface_1),
        ::app::Fuse::Animations::TrackProvider__typeof(), offsetof(EasingTrack__uType, __interface_2));

    type->SetFields(1,
        ::uNewField("Singleton", &EasingTrack__Singleton, 0, EasingTrack__typeof()));

    type->SetFunctions(5,
        ::uNewFunction("Fuse.Animations.ContinuousTrackProvider.GetSeekProgress", EasingTrack__Fuse_Animations_ContinuousTrackProvider_GetSeekProgress, 0, false, ::app::Uno::Bool__typeof(), ::app::Fuse::Animations::TrackAnimatorState__typeof(), ::app::Uno::Double__typeof(), ::app::Uno::Double__typeof(), ::app::Fuse::Animations::SeekDirection__typeof(), ::app::Uno::Float4__typeof(), ::app::Uno::Double__typeof()),
        ::uNewFunction("Fuse.Animations.ContinuousTrackProvider.GetSeekTime", EasingTrack__Fuse_Animations_ContinuousTrackProvider_GetSeekTime, 0, false, ::app::Uno::Bool__typeof(), ::app::Fuse::Animations::TrackAnimatorState__typeof(), ::app::Uno::Double__typeof(), ::app::Uno::Double__typeof(), ::app::Fuse::Animations::SeekDirection__typeof(), ::app::Uno::Float4__typeof(), ::app::Uno::Double__typeof()),
        ::uNewFunction("Fuse.Animations.TrackProvider.GetAnimatorVariant", EasingTrack__Fuse_Animations_TrackProvider_GetAnimatorVariant, 0, false, ::app::Fuse::Animations::AnimatorVariant__typeof(), ::app::Fuse::Animations::TrackAnimator__typeof()),
        ::uNewFunction("Fuse.Animations.TrackProvider.GetDuration", EasingTrack__Fuse_Animations_TrackProvider_GetDuration, 0, false, ::app::Uno::Double__typeof(), ::app::Fuse::Animations::TrackAnimator__typeof(), ::app::Fuse::Animations::AnimationVariant__typeof()),
        ::uNewFunction(".ctor", EasingTrack__New_1, 0, true, EasingTrack__typeof()));

    ::uRegisterType(type);
    return type;
}

void EasingTrack___ObjInit(EasingTrack* __this)
{
}

void EasingTrack___TypeInit(::uStatic* __this)
{
    EasingTrack__Singleton = EasingTrack__New_1(NULL);
}

bool EasingTrack__Fuse_Animations_ContinuousTrackProvider_GetSeekProgress(EasingTrack* __this, ::app::Fuse::Animations::TrackAnimatorState* tas, double progress, double interval, int dir, ::app::Uno::Float4* value, double* strength)
{
    progress = ::app::Uno::Math__Clamp(NULL, progress, 0.0, 1.0);
    float ease = ::uPtr< ::uDelegate*>(::app::Fuse::Animations::EasingFunctions__FromEasing(NULL, ::uPtr< ::app::Fuse::Animations::TrackAnimatorState*>(tas)->Easing()))->Invoke< float, float>((float)progress);
    *strength = (double)ease;
    *value = ::uPtr< ::app::Fuse::Animations::TrackAnimator*>(tas->Animator)->_vectorValue;
    return (dir == 0) ? (progress >= 1.0) : (progress <= 0.0);
}

bool EasingTrack__Fuse_Animations_ContinuousTrackProvider_GetSeekTime(EasingTrack* __this, ::app::Fuse::Animations::TrackAnimatorState* tas, double elapsed, double interval, int dir, ::app::Uno::Float4* value, double* strength)
{
    double duration = ::uPtr< ::app::Fuse::Animations::TrackAnimatorState*>(tas)->Duration();
    float progress = float();

    if (duration < 9.9999997473787516e-06)
    {
        progress = (float)(((dir == 0) ? (elapsed >= -9.9999997473787516e-06) : (elapsed > 9.9999997473787516e-06)) ? 1 : 0);
    }
    else
    {
        progress = (float)(elapsed / duration);
    }

    return ::app::Fuse::Animations::ContinuousTrackProvider::GetSeekProgress(::uPtr< ::uObject*>(::uAs< ::uObject*>(__this, ::app::Fuse::Animations::ContinuousTrackProvider__typeof())), tas, (double)progress, interval, dir, value, strength);
}

int EasingTrack__Fuse_Animations_TrackProvider_GetAnimatorVariant(EasingTrack* __this, ::app::Fuse::Animations::TrackAnimator* ta)
{
    return ::uPtr< ::app::Fuse::Animations::TrackAnimator*>(ta)->HasBack() ? 2 : 0;
}

double EasingTrack__Fuse_Animations_TrackProvider_GetDuration(EasingTrack* __this, ::app::Fuse::Animations::TrackAnimator* ta, int variant)
{
    return ((variant == 1) && ::uPtr< ::app::Fuse::Animations::TrackAnimator*>(ta)->HasBack()) ? ::uPtr< ::app::Fuse::Animations::TrackAnimator*>(ta)->DurationBack() : ::uPtr< ::app::Fuse::Animations::TrackAnimator*>(ta)->Duration();
}

EasingTrack* EasingTrack__New_1(::uStatic* __this)
{
    EasingTrack* inst = (EasingTrack*)::uAllocObject(sizeof(EasingTrack), EasingTrack__typeof());
    inst->_ObjInit();
    return inst;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Animations\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

FastMatrixTransform__uType* FastMatrixTransform__typeof()
{
    static ::uStaticStrong<FastMatrixTransform__uType*> type;
    if (type != NULL) return type;

    type = (FastMatrixTransform__uType*)::uAllocClassType(sizeof(FastMatrixTransform__uType), "Fuse.Animations.FastMatrixTransform", false, 0, 1, 0);

    type->SetBaseType(::app::Fuse::Transform__typeof());
    type->__fp_AppendTo = (void(*)(::app::Fuse::Transform*, ::app::Fuse::FastMatrix*, float))FastMatrixTransform__AppendTo;
    type->__fp_get_IsFlat = (bool(*)(::app::Fuse::Transform*))FastMatrixTransform__get_IsFlat;
    type->__fp_PrependTo = (void(*)(::app::Fuse::Transform*, ::app::Fuse::FastMatrix*))FastMatrixTransform__PrependTo;

    type->SetStrongRefs(
        "Matrix", offsetof(FastMatrixTransform, Matrix));

    type->SetFields(1,
        ::uNewField("Matrix", NULL, offsetof(FastMatrixTransform, Matrix), ::app::Fuse::FastMatrix__typeof()));

    type->SetFunctions(2,
        ::uNewFunctionVoid("Changed", FastMatrixTransform__Changed, 0, false),
        ::uNewFunction(".ctor", FastMatrixTransform__New_1, 0, true, FastMatrixTransform__typeof()));

    ::uRegisterType(type);
    return type;
}

void FastMatrixTransform___ObjInit_1(FastMatrixTransform* __this)
{
    __this->Matrix = ::app::Fuse::FastMatrix__Identity(NULL);
    ::app::Fuse::Transform___ObjInit(__this);
}

void FastMatrixTransform__AppendTo(FastMatrixTransform* __this, ::app::Fuse::FastMatrix* m, float weight)
{
    ::uPtr< ::app::Fuse::FastMatrix*>(m)->AppendFastMatrix(__this->Matrix);
}

void FastMatrixTransform__Changed(FastMatrixTransform* __this)
{
    __this->OnMatrixChanged();
}

bool FastMatrixTransform__get_IsFlat(FastMatrixTransform* __this)
{
    ::app::Uno::Float4x4 m = ::uPtr< ::app::Fuse::FastMatrix*>(__this->Matrix)->Matrix();
    bool q = (((((::app::Uno::Math__Abs_1(NULL, m.M13) < 1e-05f) && (::app::Uno::Math__Abs_1(NULL, m.M23) < 1e-05f)) && (::app::Uno::Math__Abs_1(NULL, m.M43) < 1e-05f)) && (::app::Uno::Math__Abs_1(NULL, m.M14) < 1e-05f)) && (::app::Uno::Math__Abs_1(NULL, m.M24) < 1e-05f)) && (::app::Uno::Math__Abs_1(NULL, m.M34) < 1e-05f);
    return q;
}

FastMatrixTransform* FastMatrixTransform__New_1(::uStatic* __this)
{
    FastMatrixTransform* inst = (FastMatrixTransform*)::uAllocObject(sizeof(FastMatrixTransform), FastMatrixTransform__typeof());
    inst->_ObjInit_1();
    return inst;
}

void FastMatrixTransform__PrependTo(FastMatrixTransform* __this, ::app::Fuse::FastMatrix* m)
{
    ::uPtr< ::app::Fuse::FastMatrix*>(m)->PrependFastMatrix(__this->Matrix);
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Animations\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

::uInterfaceType* IMixer__typeof()
{
    static ::uStaticStrong< ::uInterfaceType*> type;
    if (type != NULL) return type;

    type = ::uAllocInterfaceType("Fuse.Animations.IMixer");

    ::uRegisterType(type);
    return type;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Animations\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

::uInterfaceType* IMixerHandle__bool__typeof()
{
    static ::uStaticStrong< ::uInterfaceType*> type;
    if (type != NULL) return type;

    type = ::uAllocInterfaceType("Fuse.Animations.IMixerHandle<bool>");

    ::uRegisterType(type);
    return type;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Animations\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

::uInterfaceType* IMixerHandle__char__typeof()
{
    static ::uStaticStrong< ::uInterfaceType*> type;
    if (type != NULL) return type;

    type = ::uAllocInterfaceType("Fuse.Animations.IMixerHandle<char>");

    ::uRegisterType(type);
    return type;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Animations\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

::uInterfaceType* IMixerHandle__double__typeof()
{
    static ::uStaticStrong< ::uInterfaceType*> type;
    if (type != NULL) return type;

    type = ::uAllocInterfaceType("Fuse.Animations.IMixerHandle<double>");

    ::uRegisterType(type);
    return type;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Animations\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

::uInterfaceType* IMixerHandle__float__typeof()
{
    static ::uStaticStrong< ::uInterfaceType*> type;
    if (type != NULL) return type;

    type = ::uAllocInterfaceType("Fuse.Animations.IMixerHandle<float>");

    ::uRegisterType(type);
    return type;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Animations\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

::uInterfaceType* IMixerHandle__float2__typeof()
{
    static ::uStaticStrong< ::uInterfaceType*> type;
    if (type != NULL) return type;

    type = ::uAllocInterfaceType("Fuse.Animations.IMixerHandle<float2>");

    ::uRegisterType(type);
    return type;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Animations\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

::uInterfaceType* IMixerHandle__float3__typeof()
{
    static ::uStaticStrong< ::uInterfaceType*> type;
    if (type != NULL) return type;

    type = ::uAllocInterfaceType("Fuse.Animations.IMixerHandle<float3>");

    ::uRegisterType(type);
    return type;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Animations\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

::uInterfaceType* IMixerHandle__float4__typeof()
{
    static ::uStaticStrong< ::uInterfaceType*> type;
    if (type != NULL) return type;

    type = ::uAllocInterfaceType("Fuse.Animations.IMixerHandle<float4>");

    ::uRegisterType(type);
    return type;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Animations\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

::uInterfaceType* IMixerHandle__Fuse_Animations_AnimationVariant__typeof()
{
    static ::uStaticStrong< ::uInterfaceType*> type;
    if (type != NULL) return type;

    type = ::uAllocInterfaceType("Fuse.Animations.IMixerHandle<Fuse.Animations.AnimationVariant>");

    ::uRegisterType(type);
    return type;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Animations\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

::uInterfaceType* IMixerHandle__Fuse_Animations_Easing__typeof()
{
    static ::uStaticStrong< ::uInterfaceType*> type;
    if (type != NULL) return type;

    type = ::uAllocInterfaceType("Fuse.Animations.IMixerHandle<Fuse.Animations.Easing>");

    ::uRegisterType(type);
    return type;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Animations\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

::uInterfaceType* IMixerHandle__Fuse_Animations_KeyframeInterpolation__typeof()
{
    static ::uStaticStrong< ::uInterfaceType*> type;
    if (type != NULL) return type;

    type = ::uAllocInterfaceType("Fuse.Animations.IMixerHandle<Fuse.Animations.KeyframeInterpolation>");

    ::uRegisterType(type);
    return type;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Animations\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

::uInterfaceType* IMixerHandle__Fuse_Animations_MixOp__typeof()
{
    static ::uStaticStrong< ::uInterfaceType*> type;
    if (type != NULL) return type;

    type = ::uAllocInterfaceType("Fuse.Animations.IMixerHandle<Fuse.Animations.MixOp>");

    ::uRegisterType(type);
    return type;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Animations\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

::uInterfaceType* IMixerHandle__Fuse_Drawing_BlendMode__typeof()
{
    static ::uStaticStrong< ::uInterfaceType*> type;
    if (type != NULL) return type;

    type = ::uAllocInterfaceType("Fuse.Animations.IMixerHandle<Fuse.Drawing.BlendMode>");

    ::uRegisterType(type);
    return type;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Animations\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

::uInterfaceType* IMixerHandle__Fuse_Drawing_Brush__typeof()
{
    static ::uStaticStrong< ::uInterfaceType*> type;
    if (type != NULL) return type;

    type = ::uAllocInterfaceType("Fuse.Animations.IMixerHandle<Fuse.Drawing.Brush>");

    ::uRegisterType(type);
    return type;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Animations\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

::uInterfaceType* IMixerHandle__Fuse_Drawing_DynamicBrush__typeof()
{
    static ::uStaticStrong< ::uInterfaceType*> type;
    if (type != NULL) return type;

    type = ::uAllocInterfaceType("Fuse.Animations.IMixerHandle<Fuse.Drawing.DynamicBrush>");

    ::uRegisterType(type);
    return type;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Animations\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

::uInterfaceType* IMixerHandle__Fuse_Drawing_GradientStop__typeof()
{
    static ::uStaticStrong< ::uInterfaceType*> type;
    if (type != NULL) return type;

    type = ::uAllocInterfaceType("Fuse.Animations.IMixerHandle<Fuse.Drawing.GradientStop>");

    ::uRegisterType(type);
    return type;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Animations\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

::uInterfaceType* IMixerHandle__Fuse_Drawing_LinearGradient__typeof()
{
    static ::uStaticStrong< ::uInterfaceType*> type;
    if (type != NULL) return type;

    type = ::uAllocInterfaceType("Fuse.Animations.IMixerHandle<Fuse.Drawing.LinearGradient>");

    ::uRegisterType(type);
    return type;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Animations\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

::uInterfaceType* IMixerHandle__Fuse_Drawing_SolidColor__typeof()
{
    static ::uStaticStrong< ::uInterfaceType*> type;
    if (type != NULL) return type;

    type = ::uAllocInterfaceType("Fuse.Animations.IMixerHandle<Fuse.Drawing.SolidColor>");

    ::uRegisterType(type);
    return type;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Animations\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

::uInterfaceType* IMixerHandle__Fuse_Drawing_StaticBrush__typeof()
{
    static ::uStaticStrong< ::uInterfaceType*> type;
    if (type != NULL) return type;

    type = ::uAllocInterfaceType("Fuse.Animations.IMixerHandle<Fuse.Drawing.StaticBrush>");

    ::uRegisterType(type);
    return type;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Animations\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

::uInterfaceType* IMixerHandle__Fuse_Elements_Alignment__typeof()
{
    static ::uStaticStrong< ::uInterfaceType*> type;
    if (type != NULL) return type;

    type = ::uAllocInterfaceType("Fuse.Animations.IMixerHandle<Fuse.Elements.Alignment>");

    ::uRegisterType(type);
    return type;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Animations\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

::uInterfaceType* IMixerHandle__Fuse_Elements_CachingMode__typeof()
{
    static ::uStaticStrong< ::uInterfaceType*> type;
    if (type != NULL) return type;

    type = ::uAllocInterfaceType("Fuse.Animations.IMixerHandle<Fuse.Elements.CachingMode>");

    ::uRegisterType(type);
    return type;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Animations\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

::uInterfaceType* IMixerHandle__Fuse_Elements_Element__typeof()
{
    static ::uStaticStrong< ::uInterfaceType*> type;
    if (type != NULL) return type;

    type = ::uAllocInterfaceType("Fuse.Animations.IMixerHandle<Fuse.Elements.Element>");

    ::uRegisterType(type);
    return type;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Animations\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

::uInterfaceType* IMixerHandle__Fuse_Elements_HitTestMode__typeof()
{
    static ::uStaticStrong< ::uInterfaceType*> type;
    if (type != NULL) return type;

    type = ::uAllocInterfaceType("Fuse.Animations.IMixerHandle<Fuse.Elements.HitTestMode>");

    ::uRegisterType(type);
    return type;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Animations\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

::uInterfaceType* IMixerHandle__Fuse_Elements_SizeUnit__typeof()
{
    static ::uStaticStrong< ::uInterfaceType*> type;
    if (type != NULL) return type;

    type = ::uAllocInterfaceType("Fuse.Animations.IMixerHandle<Fuse.Elements.SizeUnit>");

    ::uRegisterType(type);
    return type;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Animations\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

::uInterfaceType* IMixerHandle__Fuse_Elements_StretchDirection__typeof()
{
    static ::uStaticStrong< ::uInterfaceType*> type;
    if (type != NULL) return type;

    type = ::uAllocInterfaceType("Fuse.Animations.IMixerHandle<Fuse.Elements.StretchDirection>");

    ::uRegisterType(type);
    return type;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Animations\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

::uInterfaceType* IMixerHandle__Fuse_Elements_StretchMode__typeof()
{
    static ::uStaticStrong< ::uInterfaceType*> type;
    if (type != NULL) return type;

    type = ::uAllocInterfaceType("Fuse.Animations.IMixerHandle<Fuse.Elements.StretchMode>");

    ::uRegisterType(type);
    return type;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Animations\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

::uInterfaceType* IMixerHandle__Fuse_Elements_StretchSizing__typeof()
{
    static ::uStaticStrong< ::uInterfaceType*> type;
    if (type != NULL) return type;

    type = ::uAllocInterfaceType("Fuse.Animations.IMixerHandle<Fuse.Elements.StretchSizing>");

    ::uRegisterType(type);
    return type;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Animations\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

::uInterfaceType* IMixerHandle__Fuse_Elements_TextAlignment__typeof()
{
    static ::uStaticStrong< ::uInterfaceType*> type;
    if (type != NULL) return type;

    type = ::uAllocInterfaceType("Fuse.Animations.IMixerHandle<Fuse.Elements.TextAlignment>");

    ::uRegisterType(type);
    return type;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Animations\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

::uInterfaceType* IMixerHandle__Fuse_Elements_TextWrapping__typeof()
{
    static ::uStaticStrong< ::uInterfaceType*> type;
    if (type != NULL) return type;

    type = ::uAllocInterfaceType("Fuse.Animations.IMixerHandle<Fuse.Elements.TextWrapping>");

    ::uRegisterType(type);
    return type;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Animations\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

::uInterfaceType* IMixerHandle__Fuse_Elements_Visibility__typeof()
{
    static ::uStaticStrong< ::uInterfaceType*> type;
    if (type != NULL) return type;

    type = ::uAllocInterfaceType("Fuse.Animations.IMixerHandle<Fuse.Elements.Visibility>");

    ::uRegisterType(type);
    return type;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Animations\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

::uInterfaceType* IMixerHandle__Fuse_Font__typeof()
{
    static ::uStaticStrong< ::uInterfaceType*> type;
    if (type != NULL) return type;

    type = ::uAllocInterfaceType("Fuse.Animations.IMixerHandle<Fuse.Font>");

    ::uRegisterType(type);
    return type;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Animations\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

::uInterfaceType* IMixerHandle__Fuse_Gestures_Edge__typeof()
{
    static ::uStaticStrong< ::uInterfaceType*> type;
    if (type != NULL) return type;

    type = ::uAllocInterfaceType("Fuse.Animations.IMixerHandle<Fuse.Gestures.Edge>");

    ::uRegisterType(type);
    return type;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Animations\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

::uInterfaceType* IMixerHandle__Fuse_Gestures_ScrollDirections__typeof()
{
    static ::uStaticStrong< ::uInterfaceType*> type;
    if (type != NULL) return type;

    type = ::uAllocInterfaceType("Fuse.Animations.IMixerHandle<Fuse.Gestures.ScrollDirections>");

    ::uRegisterType(type);
    return type;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Animations\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

::uInterfaceType* IMixerHandle__Fuse_Layouts_Dock__typeof()
{
    static ::uStaticStrong< ::uInterfaceType*> type;
    if (type != NULL) return type;

    type = ::uAllocInterfaceType("Fuse.Animations.IMixerHandle<Fuse.Layouts.Dock>");

    ::uRegisterType(type);
    return type;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Animations\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

::uInterfaceType* IMixerHandle__Fuse_Layouts_FlowDirection__typeof()
{
    static ::uStaticStrong< ::uInterfaceType*> type;
    if (type != NULL) return type;

    type = ::uAllocInterfaceType("Fuse.Animations.IMixerHandle<Fuse.Layouts.FlowDirection>");

    ::uRegisterType(type);
    return type;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Animations\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

::uInterfaceType* IMixerHandle__Fuse_Layouts_Metric__typeof()
{
    static ::uStaticStrong< ::uInterfaceType*> type;
    if (type != NULL) return type;

    type = ::uAllocInterfaceType("Fuse.Animations.IMixerHandle<Fuse.Layouts.Metric>");

    ::uRegisterType(type);
    return type;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Animations\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

::uInterfaceType* IMixerHandle__Fuse_Layouts_Orientation__typeof()
{
    static ::uStaticStrong< ::uInterfaceType*> type;
    if (type != NULL) return type;

    type = ::uAllocInterfaceType("Fuse.Animations.IMixerHandle<Fuse.Layouts.Orientation>");

    ::uRegisterType(type);
    return type;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Animations\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

::uInterfaceType* IMixerHandle__Fuse_Navigation_NavigationDirection__typeof()
{
    static ::uStaticStrong< ::uInterfaceType*> type;
    if (type != NULL) return type;

    type = ::uAllocInterfaceType("Fuse.Animations.IMixerHandle<Fuse.Navigation.NavigationDirection>");

    ::uRegisterType(type);
    return type;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Animations\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

::uInterfaceType* IMixerHandle__Fuse_Navigation_NavigationEdge__typeof()
{
    static ::uStaticStrong< ::uInterfaceType*> type;
    if (type != NULL) return type;

    type = ::uAllocInterfaceType("Fuse.Animations.IMixerHandle<Fuse.Navigation.NavigationEdge>");

    ::uRegisterType(type);
    return type;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Animations\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

::uInterfaceType* IMixerHandle__Fuse_Navigation_NavigationGotoMode__typeof()
{
    static ::uStaticStrong< ::uInterfaceType*> type;
    if (type != NULL) return type;

    type = ::uAllocInterfaceType("Fuse.Animations.IMixerHandle<Fuse.Navigation.NavigationGotoMode>");

    ::uRegisterType(type);
    return type;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Animations\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

::uInterfaceType* IMixerHandle__Fuse_Navigation_SnapTo__typeof()
{
    static ::uStaticStrong< ::uInterfaceType*> type;
    if (type != NULL) return type;

    type = ::uAllocInterfaceType("Fuse.Animations.IMixerHandle<Fuse.Navigation.SnapTo>");

    ::uRegisterType(type);
    return type;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Animations\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

::uInterfaceType* IMixerHandle__Fuse_Navigation_SwipeDirection__typeof()
{
    static ::uStaticStrong< ::uInterfaceType*> type;
    if (type != NULL) return type;

    type = ::uAllocInterfaceType("Fuse.Animations.IMixerHandle<Fuse.Navigation.SwipeDirection>");

    ::uRegisterType(type);
    return type;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Animations\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

::uInterfaceType* IMixerHandle__Fuse_Navigation_SwipeEnds__typeof()
{
    static ::uStaticStrong< ::uInterfaceType*> type;
    if (type != NULL) return type;

    type = ::uAllocInterfaceType("Fuse.Animations.IMixerHandle<Fuse.Navigation.SwipeEnds>");

    ::uRegisterType(type);
    return type;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Animations\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

::uInterfaceType* IMixerHandle__Fuse_Node__typeof()
{
    static ::uStaticStrong< ::uInterfaceType*> type;
    if (type != NULL) return type;

    type = ::uAllocInterfaceType("Fuse.Animations.IMixerHandle<Fuse.Node>");

    ::uRegisterType(type);
    return type;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Animations\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

::uInterfaceType* IMixerHandle__Fuse_Resources_ImageSource__typeof()
{
    static ::uStaticStrong< ::uInterfaceType*> type;
    if (type != NULL) return type;

    type = ::uAllocInterfaceType("Fuse.Animations.IMixerHandle<Fuse.Resources.ImageSource>");

    ::uRegisterType(type);
    return type;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Animations\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

::uInterfaceType* IMixerHandle__Fuse_Transform__typeof()
{
    static ::uStaticStrong< ::uInterfaceType*> type;
    if (type != NULL) return type;

    type = ::uAllocInterfaceType("Fuse.Animations.IMixerHandle<Fuse.Transform>");

    ::uRegisterType(type);
    return type;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Animations\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

::uInterfaceType* IMixerHandle__Fuse_Triggers_Actions_TriggerDirection__typeof()
{
    static ::uStaticStrong< ::uInterfaceType*> type;
    if (type != NULL) return type;

    type = ::uAllocInterfaceType("Fuse.Animations.IMixerHandle<Fuse.Triggers.Actions.TriggerDirection>");

    ::uRegisterType(type);
    return type;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Animations\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

::uInterfaceType* IMixerHandle__Fuse_Triggers_State__typeof()
{
    static ::uStaticStrong< ::uInterfaceType*> type;
    if (type != NULL) return type;

    type = ::uAllocInterfaceType("Fuse.Animations.IMixerHandle<Fuse.Triggers.State>");

    ::uRegisterType(type);
    return type;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Animations\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

::uInterfaceType* IMixerHandle__Fuse_Triggers_StateTransition__typeof()
{
    static ::uStaticStrong< ::uInterfaceType*> type;
    if (type != NULL) return type;

    type = ::uAllocInterfaceType("Fuse.Animations.IMixerHandle<Fuse.Triggers.StateTransition>");

    ::uRegisterType(type);
    return type;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Animations\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

::uInterfaceType* IMixerHandle__Fuse_Triggers_TriggerBypassMode__typeof()
{
    static ::uStaticStrong< ::uInterfaceType*> type;
    if (type != NULL) return type;

    type = ::uAllocInterfaceType("Fuse.Animations.IMixerHandle<Fuse.Triggers.TriggerBypassMode>");

    ::uRegisterType(type);
    return type;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Animations\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

::uInterfaceType* IMixerHandle__int__typeof()
{
    static ::uStaticStrong< ::uInterfaceType*> type;
    if (type != NULL) return type;

    type = ::uAllocInterfaceType("Fuse.Animations.IMixerHandle<int>");

    ::uRegisterType(type);
    return type;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Animations\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

::uInterfaceType* IMixerHandle__int2__typeof()
{
    static ::uStaticStrong< ::uInterfaceType*> type;
    if (type != NULL) return type;

    type = ::uAllocInterfaceType("Fuse.Animations.IMixerHandle<int2>");

    ::uRegisterType(type);
    return type;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Animations\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

::uInterfaceType* IMixerHandle__int3__typeof()
{
    static ::uStaticStrong< ::uInterfaceType*> type;
    if (type != NULL) return type;

    type = ::uAllocInterfaceType("Fuse.Animations.IMixerHandle<int3>");

    ::uRegisterType(type);
    return type;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Animations\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

::uInterfaceType* IMixerHandle__int4__typeof()
{
    static ::uStaticStrong< ::uInterfaceType*> type;
    if (type != NULL) return type;

    type = ::uAllocInterfaceType("Fuse.Animations.IMixerHandle<int4>");

    ::uRegisterType(type);
    return type;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Animations\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

::uInterfaceType* IMixerHandle__long__typeof()
{
    static ::uStaticStrong< ::uInterfaceType*> type;
    if (type != NULL) return type;

    type = ::uAllocInterfaceType("Fuse.Animations.IMixerHandle<long>");

    ::uRegisterType(type);
    return type;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Animations\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

::uInterfaceType* IMixerHandle__object__typeof()
{
    static ::uStaticStrong< ::uInterfaceType*> type;
    if (type != NULL) return type;

    type = ::uAllocInterfaceType("Fuse.Animations.IMixerHandle<object>");

    ::uRegisterType(type);
    return type;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Animations\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

::uInterfaceType* IMixerHandle__short__typeof()
{
    static ::uStaticStrong< ::uInterfaceType*> type;
    if (type != NULL) return type;

    type = ::uAllocInterfaceType("Fuse.Animations.IMixerHandle<short>");

    ::uRegisterType(type);
    return type;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Animations\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

::uInterfaceType* IMixerHandle__string__typeof()
{
    static ::uStaticStrong< ::uInterfaceType*> type;
    if (type != NULL) return type;

    type = ::uAllocInterfaceType("Fuse.Animations.IMixerHandle<string>");

    ::uRegisterType(type);
    return type;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Animations\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

::uInterfaceType* IMixerHandle__Uno_EventArgs__typeof()
{
    static ::uStaticStrong< ::uInterfaceType*> type;
    if (type != NULL) return type;

    type = ::uAllocInterfaceType("Fuse.Animations.IMixerHandle<Uno.EventArgs>");

    ::uRegisterType(type);
    return type;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Animations\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

::uInterfaceType* IMixerHandle__Uno_Platform_iOS_StatusBarStyle__typeof()
{
    static ::uStaticStrong< ::uInterfaceType*> type;
    if (type != NULL) return type;

    type = ::uAllocInterfaceType("Fuse.Animations.IMixerHandle<Uno.Platform.iOS.StatusBarStyle>");

    ::uRegisterType(type);
    return type;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Animations\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

::uInterfaceType* IMixerHandle__Uno_UX_FileSource__typeof()
{
    static ::uStaticStrong< ::uInterfaceType*> type;
    if (type != NULL) return type;

    type = ::uAllocInterfaceType("Fuse.Animations.IMixerHandle<Uno.UX.FileSource>");

    ::uRegisterType(type);
    return type;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Animations\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

::uInterfaceType* IMixerMaster__typeof()
{
    static ::uStaticStrong< ::uInterfaceType*> type;
    if (type != NULL) return type;

    type = ::uAllocInterfaceType("Fuse.Animations.IMixerMaster");

    ::uRegisterType(type);
    return type;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Animations\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

::uInterfaceType* IResize__typeof()
{
    static ::uStaticStrong< ::uInterfaceType*> type;
    if (type != NULL) return type;

    type = ::uAllocInterfaceType("Fuse.Animations.IResize");

    ::uRegisterType(type);
    return type;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Animations\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

::uInterfaceType* IResizeMode__typeof()
{
    static ::uStaticStrong< ::uInterfaceType*> type;
    if (type != NULL) return type;

    type = ::uAllocInterfaceType("Fuse.Animations.IResizeMode");

    ::uRegisterType(type);
    return type;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Animations\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

::uInterfaceType* ITrackProvider__typeof()
{
    static ::uStaticStrong< ::uInterfaceType*> type;
    if (type != NULL) return type;

    type = ::uAllocInterfaceType("Fuse.Animations.ITrackProvider");

    ::uRegisterType(type);
    return type;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Animations\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

Keyframe__uType* Keyframe__typeof()
{
    static ::uStaticStrong<Keyframe__uType*> type;
    if (type != NULL) return type;

    type = (Keyframe__uType*)::uAllocClassType(sizeof(Keyframe__uType), "Fuse.Animations.Keyframe", false, 0, 1, 0);

    type->SetStrongRefs(
        "_objectValue", offsetof(Keyframe, _objectValue));

    type->SetFields(10,
        ::uNewField("_hasTangentIn", NULL, offsetof(Keyframe, _hasTangentIn), ::app::Uno::Bool__typeof()),
        ::uNewField("_hasTangentOut", NULL, offsetof(Keyframe, _hasTangentOut), ::app::Uno::Bool__typeof()),
        ::uNewField("_hasTime", NULL, offsetof(Keyframe, _hasTime), ::app::Uno::Bool__typeof()),
        ::uNewField("_hasTimeDelta", NULL, offsetof(Keyframe, _hasTimeDelta), ::app::Uno::Bool__typeof()),
        ::uNewField("_objectValue", NULL, offsetof(Keyframe, _objectValue), ::uObject__typeof()),
        ::uNewField("_tangentIn", NULL, offsetof(Keyframe, _tangentIn), ::app::Uno::Float4__typeof()),
        ::uNewField("_tangentOut", NULL, offsetof(Keyframe, _tangentOut), ::app::Uno::Float4__typeof()),
        ::uNewField("_time", NULL, offsetof(Keyframe, _time), ::app::Uno::Double__typeof()),
        ::uNewField("_timeDelta", NULL, offsetof(Keyframe, _timeDelta), ::app::Uno::Double__typeof()),
        ::uNewField("_value", NULL, offsetof(Keyframe, _value), ::app::Uno::Float4__typeof()));

    type->SetFunctions(33,
        ::uNewFunction("CompleteFrames", Keyframe__CompleteFrames, 0, true, ::app::Uno::Double__typeof(), ::app::Uno::Collections::IList__Fuse_Animations_Keyframe__typeof(), ::app::Uno::Float__typeof(), ::app::Uno::Float__typeof(), ::app::Uno::Float__typeof()),
        ::uNewFunction("get_DegreesX", Keyframe__get_DegreesX, 0, false, ::app::Uno::Float__typeof()),
        ::uNewFunction("get_DegreesXY", Keyframe__get_DegreesXY, 0, false, ::app::Uno::Float2__typeof()),
        ::uNewFunction("get_DegreesY", Keyframe__get_DegreesY, 0, false, ::app::Uno::Float__typeof()),
        ::uNewFunction("get_DegreesZ", Keyframe__get_DegreesZ, 0, false, ::app::Uno::Float__typeof()),
        ::uNewFunction("get_ObjectValue", Keyframe__get_ObjectValue, 0, false, ::uObject__typeof()),
        ::uNewFunction("get_TangentIn", Keyframe__get_TangentIn, 0, false, ::app::Uno::Float4__typeof()),
        ::uNewFunction("get_TangentOut", Keyframe__get_TangentOut, 0, false, ::app::Uno::Float4__typeof()),
        ::uNewFunction("get_Time", Keyframe__get_Time, 0, false, ::app::Uno::Double__typeof()),
        ::uNewFunction("get_TimeDelta", Keyframe__get_TimeDelta, 0, false, ::app::Uno::Double__typeof()),
        ::uNewFunction("get_Value", Keyframe__get_Value, 0, false, ::app::Uno::Float4__typeof()),
        ::uNewFunction("get_X", Keyframe__get_X, 0, false, ::app::Uno::Float__typeof()),
        ::uNewFunction("get_XY", Keyframe__get_XY, 0, false, ::app::Uno::Float2__typeof()),
        ::uNewFunction("get_XYZ", Keyframe__get_XYZ, 0, false, ::app::Uno::Float3__typeof()),
        ::uNewFunction("get_Y", Keyframe__get_Y, 0, false, ::app::Uno::Float__typeof()),
        ::uNewFunction("get_Z", Keyframe__get_Z, 0, false, ::app::Uno::Float__typeof()),
        ::uNewFunctionVoid("KochanekBartelTangent", Keyframe__KochanekBartelTangent, 0, true, ::app::Uno::Float4__typeof(), ::app::Uno::Float4__typeof(), ::app::Uno::Float4__typeof(), ::app::Uno::Float4__typeof(), ::app::Uno::Float__typeof(), ::app::Uno::Float__typeof(), ::app::Uno::Float__typeof(), ::app::Uno::Float4__typeof(), ::app::Uno::Float4__typeof()),
        ::uNewFunction(".ctor", Keyframe__New_1, 0, true, Keyframe__typeof()),
        ::uNewFunctionVoid("set_DegreesX", Keyframe__set_DegreesX, 0, false, ::app::Uno::Float__typeof()),
        ::uNewFunctionVoid("set_DegreesXY", Keyframe__set_DegreesXY, 0, false, ::app::Uno::Float2__typeof()),
        ::uNewFunctionVoid("set_DegreesY", Keyframe__set_DegreesY, 0, false, ::app::Uno::Float__typeof()),
        ::uNewFunctionVoid("set_DegreesZ", Keyframe__set_DegreesZ, 0, false, ::app::Uno::Float__typeof()),
        ::uNewFunctionVoid("set_ObjectValue", Keyframe__set_ObjectValue, 0, false, ::uObject__typeof()),
        ::uNewFunctionVoid("set_TangentIn", Keyframe__set_TangentIn, 0, false, ::app::Uno::Float4__typeof()),
        ::uNewFunctionVoid("set_TangentOut", Keyframe__set_TangentOut, 0, false, ::app::Uno::Float4__typeof()),
        ::uNewFunctionVoid("set_Time", Keyframe__set_Time, 0, false, ::app::Uno::Double__typeof()),
        ::uNewFunctionVoid("set_TimeDelta", Keyframe__set_TimeDelta, 0, false, ::app::Uno::Double__typeof()),
        ::uNewFunctionVoid("set_Value", Keyframe__set_Value, 0, false, ::app::Uno::Float4__typeof()),
        ::uNewFunctionVoid("set_X", Keyframe__set_X, 0, false, ::app::Uno::Float__typeof()),
        ::uNewFunctionVoid("set_XY", Keyframe__set_XY, 0, false, ::app::Uno::Float2__typeof()),
        ::uNewFunctionVoid("set_XYZ", Keyframe__set_XYZ, 0, false, ::app::Uno::Float3__typeof()),
        ::uNewFunctionVoid("set_Y", Keyframe__set_Y, 0, false, ::app::Uno::Float__typeof()),
        ::uNewFunctionVoid("set_Z", Keyframe__set_Z, 0, false, ::app::Uno::Float__typeof()));

    ::uRegisterType(type);
    return type;
}

void Keyframe___ObjInit(Keyframe* __this)
{
}

double Keyframe__CompleteFrames(::uStatic* __this, ::uObject* frames, float tension, float bias, float continuity)
{
    double time = 0.0;

    for (int i = 0; i < ::app::Uno::Collections::ICollection__Fuse_Animations_Keyframe::Count(::uPtr< ::uObject*>(frames)); ++i)
    {
        Keyframe* prev = ::app::Uno::Collections::IList__Fuse_Animations_Keyframe::Item(::uPtr< ::uObject*>(frames), ::app::Uno::Math__Max_8(NULL, 0, i - 1));
        Keyframe* frame = ::app::Uno::Collections::IList__Fuse_Animations_Keyframe::Item(frames, i);
        Keyframe* next = ::app::Uno::Collections::IList__Fuse_Animations_Keyframe::Item(frames, ::app::Uno::Math__Min_8(NULL, ::app::Uno::Collections::ICollection__Fuse_Animations_Keyframe::Count(frames) - 1, i + 1));
        Keyframe* next2 = ::app::Uno::Collections::IList__Fuse_Animations_Keyframe::Item(frames, ::app::Uno::Math__Min_8(NULL, ::app::Uno::Collections::ICollection__Fuse_Animations_Keyframe::Count(frames) - 1, i + 2));

        if (::uPtr< Keyframe*>(frame)->_hasTime)
        {
            ::uPtr< Keyframe*>(frame)->_timeDelta = ::uPtr< Keyframe*>(frame)->_time - time;
            time = frame->_time;
        }
        else if (::uPtr< Keyframe*>(frame)->_hasTimeDelta)
        {
            time = time + ::uPtr< Keyframe*>(frame)->_timeDelta;
            frame->_time = time;
        }
        else
        {
            ::uPtr< Keyframe*>(frame)->_time = time;
            frame->_timeDelta = 0.0;
        }

        ::app::Uno::Float4 ta = ::app::Uno::Float4();
        ::app::Uno::Float4 tb = ::app::Uno::Float4();
        Keyframe__KochanekBartelTangent(NULL, ::uPtr< Keyframe*>(prev)->Value(), ::uPtr< Keyframe*>(frame)->Value(), ::uPtr< Keyframe*>(next)->Value(), ::uPtr< Keyframe*>(next2)->Value(), tension, bias, continuity, &ta, &tb);

        if ((i > 0) && !frame->_hasTangentOut)
        {
            frame->_tangentOut = ta;
        }

        if (!next->_hasTangentIn)
        {
            next->_tangentIn = tb;
        }
    }

    return time;
}

float Keyframe__get_DegreesX(Keyframe* __this)
{
    return ::app::Uno::Math__RadiansToDegrees_1(NULL, __this->_value.X);
}

::app::Uno::Float2 Keyframe__get_DegreesXY(Keyframe* __this)
{
    return ::app::Uno::Float2__New_2(NULL, ::app::Uno::Math__RadiansToDegrees_1(NULL, __this->_value.X), ::app::Uno::Math__RadiansToDegrees_1(NULL, __this->_value.Y));
}

float Keyframe__get_DegreesY(Keyframe* __this)
{
    return ::app::Uno::Math__RadiansToDegrees_1(NULL, __this->_value.Y);
}

float Keyframe__get_DegreesZ(Keyframe* __this)
{
    return ::app::Uno::Math__RadiansToDegrees_1(NULL, __this->_value.Z);
}

::uObject* Keyframe__get_ObjectValue(Keyframe* __this)
{
    return __this->_objectValue;
}

::app::Uno::Float4 Keyframe__get_TangentIn(Keyframe* __this)
{
    return __this->_tangentIn;
}

::app::Uno::Float4 Keyframe__get_TangentOut(Keyframe* __this)
{
    return __this->_tangentOut;
}

double Keyframe__get_Time(Keyframe* __this)
{
    return __this->_time;
}

double Keyframe__get_TimeDelta(Keyframe* __this)
{
    return __this->_timeDelta;
}

::app::Uno::Float4 Keyframe__get_Value(Keyframe* __this)
{
    return __this->_value;
}

float Keyframe__get_X(Keyframe* __this)
{
    return __this->_value.X;
}

::app::Uno::Float2 Keyframe__get_XY(Keyframe* __this)
{
    ::app::Uno::Float4 ind_123 = __this->_value;
    return ::app::Uno::Float2__New_2(NULL, ind_123.X, ind_123.Y);
}

::app::Uno::Float3 Keyframe__get_XYZ(Keyframe* __this)
{
    ::app::Uno::Float4 ind_124 = __this->_value;
    return ::app::Uno::Float3__New_2(NULL, ind_124.X, ind_124.Y, ind_124.Z);
}

float Keyframe__get_Y(Keyframe* __this)
{
    return __this->_value.Y;
}

float Keyframe__get_Z(Keyframe* __this)
{
    return __this->_value.Z;
}

void Keyframe__KochanekBartelTangent(::uStatic* __this, ::app::Uno::Float4 pa, ::app::Uno::Float4 pb, ::app::Uno::Float4 pc, ::app::Uno::Float4 pd, float t, float b, float c, ::app::Uno::Float4* tangentIn, ::app::Uno::Float4* tangentOut)
{
    *tangentIn = ::app::Uno::Float4__op_Addition_2(NULL, ::app::Uno::Float4__op_Multiply(NULL, (((1.0f - t) * (1.0f + b)) * (1.0f + c)) / 2.0f, ::app::Uno::Float4__op_Subtraction_2(NULL, pb, pa)), ::app::Uno::Float4__op_Multiply(NULL, (((1.0f - t) * (1.0f - b)) * (1.0f - c)) / 2.0f, ::app::Uno::Float4__op_Subtraction_2(NULL, pc, pb)));
    *tangentOut = ::app::Uno::Float4__op_Addition_2(NULL, ::app::Uno::Float4__op_Multiply(NULL, (((1.0f - t) * (1.0f + b)) * (1.0f - c)) / 2.0f, ::app::Uno::Float4__op_Subtraction_2(NULL, pc, pb)), ::app::Uno::Float4__op_Multiply(NULL, (((1.0f - t) * (1.0f - b)) * (1.0f + c)) / 2.0f, ::app::Uno::Float4__op_Subtraction_2(NULL, pd, pc)));
}

Keyframe* Keyframe__New_1(::uStatic* __this)
{
    Keyframe* inst = (Keyframe*)::uAllocObject(sizeof(Keyframe), Keyframe__typeof());
    inst->_ObjInit();
    return inst;
}

void Keyframe__set_DegreesX(Keyframe* __this, float value)
{
    __this->_value.X = ::app::Uno::Math__DegreesToRadians_1(NULL, value);
}

void Keyframe__set_DegreesXY(Keyframe* __this, ::app::Uno::Float2 value)
{
    __this->_value = ::app::Uno::Float4__New_2(NULL, ::app::Uno::Math__DegreesToRadians_1(NULL, value.X), ::app::Uno::Math__DegreesToRadians_1(NULL, value.Y), __this->_value.Z, __this->_value.W);
}

void Keyframe__set_DegreesY(Keyframe* __this, float value)
{
    __this->_value.Y = ::app::Uno::Math__DegreesToRadians_1(NULL, value);
}

void Keyframe__set_DegreesZ(Keyframe* __this, float value)
{
    __this->_value.Z = ::app::Uno::Math__DegreesToRadians_1(NULL, value);
}

void Keyframe__set_ObjectValue(Keyframe* __this, ::uObject* value)
{
    __this->_objectValue = value;
}

void Keyframe__set_TangentIn(Keyframe* __this, ::app::Uno::Float4 value)
{
    __this->_tangentIn = value;
    __this->_hasTangentIn = true;
}

void Keyframe__set_TangentOut(Keyframe* __this, ::app::Uno::Float4 value)
{
    __this->_tangentOut = value;
    __this->_hasTangentOut = true;
}

void Keyframe__set_Time(Keyframe* __this, double value)
{
    __this->_time = value;
    __this->_hasTime = true;
}

void Keyframe__set_TimeDelta(Keyframe* __this, double value)
{
    __this->_timeDelta = value;
    __this->_hasTimeDelta = true;
}

void Keyframe__set_Value(Keyframe* __this, ::app::Uno::Float4 value)
{
    __this->_value = value;
}

void Keyframe__set_X(Keyframe* __this, float value)
{
    __this->_value.X = value;
}

void Keyframe__set_XY(Keyframe* __this, ::app::Uno::Float2 value)
{
    __this->_value = ::app::Uno::Float4__New_6(NULL, value, __this->_value.Z, __this->_value.W);
}

void Keyframe__set_XYZ(Keyframe* __this, ::app::Uno::Float3 value)
{
    __this->_value = ::app::Uno::Float4__New_8(NULL, value, __this->_value.W);
}

void Keyframe__set_Y(Keyframe* __this, float value)
{
    __this->_value.Y = value;
}

void Keyframe__set_Z(Keyframe* __this, float value)
{
    __this->_value.Z = value;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Animations\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

::uEnumType* KeyframeInterpolation__typeof()
{
    static ::uStaticStrong< ::uEnumType*> type;
    if (type != NULL) return type;

    type = ::uAllocEnumType("Fuse.Animations.KeyframeInterpolation", ::app::Uno::Int__typeof(), 3);

    type->SetLiterals(
        "Linear", 0LL,
        "CatmullRom", 1LL,
        "Custom", 2LL);

    ::uRegisterType(type);
    return type;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Animations\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

::uInterfaceType* KeyframeTrack__typeof()
{
    static ::uStaticStrong< ::uInterfaceType*> type;
    if (type != NULL) return type;

    type = ::uAllocInterfaceType("Fuse.Animations.KeyframeTrack");

    ::uRegisterType(type);
    return type;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Animations\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

::uInterfaceType* MasterPropertyGet__typeof()
{
    static ::uStaticStrong< ::uInterfaceType*> type;
    if (type != NULL) return type;

    type = ::uAllocInterfaceType("Fuse.Animations.MasterPropertyGet");

    ::uRegisterType(type);
    return type;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Animations\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

::uStaticStrong< ::app::Fuse::Transform*> MasterTransform__identity;

MasterTransform__uType* MasterTransform__typeof()
{
    static ::uStaticStrong<MasterTransform__uType*> type;
    if (type != NULL) return type;

    type = (MasterTransform__uType*)::uAllocClassType(sizeof(MasterTransform__uType), "Fuse.Animations.MasterTransform", false, 1, 2, 0);

    type->SetBaseType(::app::Fuse::Animations::MasterBase__Fuse_Transform__typeof());
    type->__fp_get_PostLayout = (bool(*)(::app::Fuse::Animations::MasterBase__Fuse_Transform*))MasterTransform__get_PostLayout;
    type->__fp_get_RestValue = (::app::Fuse::Transform*(*)(::app::Fuse::Animations::MasterBase__Fuse_Transform*))MasterTransform__get_RestValue;
    type->__fp_OnActive = (void(*)(::app::Fuse::Animations::MasterBase__Fuse_Transform*))MasterTransform__OnActive;
    type->__fp_OnInactive = (void(*)(::app::Fuse::Animations::MasterBase__Fuse_Transform*))MasterTransform__OnInactive;

    type->SetInterfaces(
        ::app::Fuse::Animations::IMixerMaster__typeof(), offsetof(MasterTransform__uType, __interface_0));

    type->SetStrongRefs(
        "FMT", offsetof(MasterTransform, FMT),
        "Node", offsetof(MasterTransform, Node));

    type->SetFields(3,
        ::uNewField("FMT", NULL, offsetof(MasterTransform, FMT), ::app::Fuse::Animations::FastMatrixTransform__typeof()),
        ::uNewField("identity", &MasterTransform__identity, 0, ::app::Fuse::Transform__typeof()),
        ::uNewField("Node", NULL, offsetof(MasterTransform, Node), ::app::Fuse::Node__typeof()));

    ::uRegisterType(type);
    return type;
}

void MasterTransform___ObjInit_1(MasterTransform* __this, ::app::Fuse::Node* node, ::app::Fuse::Animations::MixerBase* mixerBase)
{
    ::app::Fuse::Animations::MasterBase__Fuse_Transform___ObjInit(__this, mixerBase);
    __this->Node = node;
}

void MasterTransform___TypeInit(::uStatic* __this)
{
    MasterTransform__identity = (::app::Fuse::Transform*)::app::Fuse::Translation__New_1(NULL);
}

bool MasterTransform__get_PostLayout(MasterTransform* __this)
{
    return true;
}

::app::Fuse::Transform* MasterTransform__get_RestValue(MasterTransform* __this)
{
    return MasterTransform__identity;
}

void MasterTransform__OnActive(MasterTransform* __this)
{
    __this->FMT = ::app::Fuse::Animations::FastMatrixTransform__New_1(NULL);
    ::app::Uno::Collections::ICollection__Fuse_Transform::Add(::uPtr< ::uObject*>(::uPtr< ::app::Fuse::Node*>(__this->Node)->Transforms()), (::app::Fuse::Transform*)__this->FMT);
}

void MasterTransform__OnInactive(MasterTransform* __this)
{
    ::app::Uno::Collections::ICollection__Fuse_Transform::Remove(::uPtr< ::uObject*>(::uPtr< ::app::Fuse::Node*>(__this->Node)->Transforms()), (::app::Fuse::Transform*)__this->FMT);
    __this->FMT = NULL;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Animations\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

::uStaticStrong< ::uObject*> Mixer___default;
::uStaticStrong< ::uObject*> Mixer___defaultDiscrete;
::uStaticStrong< ::app::Uno::Collections::ConcurrentCollection__Fuse_Animations_IMixerMaster*> Mixer__PostMasters;
::uStaticStrong< ::app::Uno::Collections::ConcurrentCollection__Fuse_Animations_IMixerMaster*> Mixer__PreMasters;

Mixer__uType* Mixer__typeof()
{
    static ::uStaticStrong<Mixer__uType*> type;
    if (type != NULL) return type;

    type = (Mixer__uType*)::uAllocClassType(sizeof(Mixer__uType), "Fuse.Animations.Mixer", false, 0, 0, 0);

    type->SetFields(4,
        ::uNewField("_default", &Mixer___default, 0, ::app::Fuse::Animations::IMixer__typeof()),
        ::uNewField("_defaultDiscrete", &Mixer___defaultDiscrete, 0, ::app::Fuse::Animations::IMixer__typeof()),
        ::uNewField("PostMasters", &Mixer__PostMasters, 0, ::app::Uno::Collections::ConcurrentCollection__Fuse_Animations_IMixerMaster__typeof()),
        ::uNewField("PreMasters", &Mixer__PreMasters, 0, ::app::Uno::Collections::ConcurrentCollection__Fuse_Animations_IMixerMaster__typeof()));

    type->SetFunctions(7,
        ::uNewFunctionVoid("AddMaster", Mixer__AddMaster, 0, true, ::app::Fuse::Animations::IMixerMaster__typeof(), ::app::Uno::Bool__typeof()),
        ::uNewFunctionVoid("CompletePost", Mixer__CompletePost, 0, true),
        ::uNewFunctionVoid("CompletePre", Mixer__CompletePre, 0, true),
        ::uNewFunction("get_Default", Mixer__get_Default, 0, true, ::app::Fuse::Animations::IMixer__typeof()),
        ::uNewFunction("get_DefaultDiscrete", Mixer__get_DefaultDiscrete, 0, true, ::app::Fuse::Animations::IMixer__typeof()),
        ::uNewFunction(".ctor", Mixer__New_1, 0, true, Mixer__typeof()),
        ::uNewFunctionVoid("RemoveMaster", Mixer__RemoveMaster, 0, true, ::app::Fuse::Animations::IMixerMaster__typeof(), ::app::Uno::Bool__typeof()));

    ::uRegisterType(type);
    return type;
}

void Mixer___ObjInit(Mixer* __this)
{
}

void Mixer___TypeInit(::uStatic* __this)
{
    Mixer___default = (::uObject*)::app::Fuse::Animations::AverageMixer__New_1(NULL);
    Mixer___defaultDiscrete = (::uObject*)::app::Fuse::Animations::DiscreteMixer__New_1(NULL);
    Mixer__PreMasters = ::app::Uno::Collections::ConcurrentCollection__Fuse_Animations_IMixerMaster__New_1(NULL);
    Mixer__PostMasters = ::app::Uno::Collections::ConcurrentCollection__Fuse_Animations_IMixerMaster__New_1(NULL);
}

void Mixer__AddMaster(::uStatic* __this, ::uObject* master, bool postLayout)
{
    ::app::Uno::Collections::ConcurrentCollection__Fuse_Animations_IMixerMaster* list = postLayout ? Mixer__PostMasters : Mixer__PreMasters;
    int stage = postLayout ? 3 : 1;
    ::uDelegate* act = postLayout ? ::uNewDelegateNonVirt(::app::Uno::Action__typeof(), (const void*)Mixer__CompletePost) : ::uNewDelegateNonVirt(::app::Uno::Action__typeof(), (const void*)Mixer__CompletePre);

    if (::uPtr< ::app::Uno::Collections::ConcurrentCollection__Fuse_Animations_IMixerMaster*>(list)->Count() == 0)
    {
        ::app::Fuse::UpdateManager__AddAction(NULL, act, stage);
    }

    ::uPtr< ::app::Uno::Collections::ConcurrentCollection__Fuse_Animations_IMixerMaster*>(list)->Add(master);
}

void Mixer__CompletePost(::uStatic* __this)
{
    {
        ::uObject* l = ::uPtr< ::app::Uno::Collections::ConcurrentCollection__Fuse_Animations_IMixerMaster*>(Mixer__PostMasters)->DeferLock();

        try
        {
            {
                int c = ::uPtr< ::app::Uno::Collections::ConcurrentCollection__Fuse_Animations_IMixerMaster*>(Mixer__PostMasters)->Count();

                for (int i = 0; i < c; ++i)
                {
                    ::app::Fuse::Animations::IMixerMaster::Complete(::uPtr< ::uObject*>(::uPtr< ::app::Uno::Collections::ConcurrentCollection__Fuse_Animations_IMixerMaster*>(Mixer__PostMasters)->Item(i)));
                }
            }
        }
        catch (const ::uThrowable& __t)
        {
            ::app::Uno::IDisposable::Dispose(::uPtr< ::uObject*>(l));
            throw __t;
        }
        // finally
        {
            ::app::Uno::IDisposable::Dispose(::uPtr< ::uObject*>(l));
        }
    }
}

void Mixer__CompletePre(::uStatic* __this)
{
    {
        ::uObject* l = ::uPtr< ::app::Uno::Collections::ConcurrentCollection__Fuse_Animations_IMixerMaster*>(Mixer__PreMasters)->DeferLock();

        try
        {
            {
                int c = ::uPtr< ::app::Uno::Collections::ConcurrentCollection__Fuse_Animations_IMixerMaster*>(Mixer__PreMasters)->Count();

                for (int i = 0; i < c; ++i)
                {
                    ::app::Fuse::Animations::IMixerMaster::Complete(::uPtr< ::uObject*>(::uPtr< ::app::Uno::Collections::ConcurrentCollection__Fuse_Animations_IMixerMaster*>(Mixer__PreMasters)->Item(i)));
                }
            }
        }
        catch (const ::uThrowable& __t)
        {
            ::app::Uno::IDisposable::Dispose(::uPtr< ::uObject*>(l));
            throw __t;
        }
        // finally
        {
            ::app::Uno::IDisposable::Dispose(::uPtr< ::uObject*>(l));
        }
    }
}

::uObject* Mixer__get_Default(::uStatic* __this)
{
    return Mixer___default;
}

::uObject* Mixer__get_DefaultDiscrete(::uStatic* __this)
{
    return Mixer___defaultDiscrete;
}

Mixer* Mixer__New_1(::uStatic* __this)
{
    Mixer* inst = (Mixer*)::uAllocObject(sizeof(Mixer), Mixer__typeof());
    inst->_ObjInit();
    return inst;
}

void Mixer__RemoveMaster(::uStatic* __this, ::uObject* master, bool postLayout)
{
    ::app::Uno::Collections::ConcurrentCollection__Fuse_Animations_IMixerMaster* list = postLayout ? Mixer__PostMasters : Mixer__PreMasters;
    int stage = postLayout ? 3 : 1;
    ::uDelegate* act = postLayout ? ::uNewDelegateNonVirt(::app::Uno::Action__typeof(), (const void*)Mixer__CompletePost) : ::uNewDelegateNonVirt(::app::Uno::Action__typeof(), (const void*)Mixer__CompletePre);
    ::uPtr< ::app::Uno::Collections::ConcurrentCollection__Fuse_Animations_IMixerMaster*>(list)->Remove(master);

    if (list->Count() == 0)
    {
        ::app::Fuse::UpdateManager__RemoveAction(NULL, act, stage);
    }
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Animations\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

MixerBase__uType* MixerBase__typeof()
{
    static ::uStaticStrong<MixerBase__uType*> type;
    if (type != NULL) return type;

    type = (MixerBase__uType*)::uAllocClassType(sizeof(MixerBase__uType), "Fuse.Animations.MixerBase", false, 1, 2, 0);

    type->__interface_0.__fp_RegisterTransform = (::uObject*(*)(void*, ::app::Fuse::Node*, int, int))MixerBase__RegisterTransform;
    type->__interface_0.__fp_Register__float4 = (::uObject*(*)(void*, ::app::Uno::UX::Property__float4*, int))MixerBase__Register__float4;
    type->__interface_0.__fp_Register__bool = (::uObject*(*)(void*, ::app::Uno::UX::Property__bool*, int))MixerBase__Register__bool;
    type->__interface_0.__fp_Register__Uno_Platform_iOS_StatusBarStyle = (::uObject*(*)(void*, ::app::Uno::UX::Property__Uno_Platform_iOS_StatusBarStyle*, int))MixerBase__Register__Uno_Platform_iOS_StatusBarStyle;
    type->__interface_0.__fp_Register__float = (::uObject*(*)(void*, ::app::Uno::UX::Property__float*, int))MixerBase__Register__float;
    type->__interface_0.__fp_Register__char = (::uObject*(*)(void*, ::app::Uno::UX::Property__char*, int))MixerBase__Register__char;
    type->__interface_0.__fp_Register__double = (::uObject*(*)(void*, ::app::Uno::UX::Property__double*, int))MixerBase__Register__double;
    type->__interface_0.__fp_Register__float2 = (::uObject*(*)(void*, ::app::Uno::UX::Property__float2*, int))MixerBase__Register__float2;
    type->__interface_0.__fp_Register__float3 = (::uObject*(*)(void*, ::app::Uno::UX::Property__float3*, int))MixerBase__Register__float3;
    type->__interface_0.__fp_Register__Uno_UX_FileSource = (::uObject*(*)(void*, ::app::Uno::UX::Property__Uno_UX_FileSource*, int))MixerBase__Register__Uno_UX_FileSource;
    type->__interface_0.__fp_Register__Fuse_Animations_AnimationVariant = (::uObject*(*)(void*, ::app::Uno::UX::Property__Fuse_Animations_AnimationVariant*, int))MixerBase__Register__Fuse_Animations_AnimationVariant;
    type->__interface_0.__fp_Register__Fuse_Animations_Easing = (::uObject*(*)(void*, ::app::Uno::UX::Property__Fuse_Animations_Easing*, int))MixerBase__Register__Fuse_Animations_Easing;
    type->__interface_0.__fp_Register__Fuse_Animations_KeyframeInterpolation = (::uObject*(*)(void*, ::app::Uno::UX::Property__Fuse_Animations_KeyframeInterpolation*, int))MixerBase__Register__Fuse_Animations_KeyframeInterpolation;
    type->__interface_0.__fp_Register__Fuse_Animations_MixOp = (::uObject*(*)(void*, ::app::Uno::UX::Property__Fuse_Animations_MixOp*, int))MixerBase__Register__Fuse_Animations_MixOp;
    type->__interface_0.__fp_Register__Fuse_Drawing_BlendMode = (::uObject*(*)(void*, ::app::Uno::UX::Property__Fuse_Drawing_BlendMode*, int))MixerBase__Register__Fuse_Drawing_BlendMode;
    type->__interface_0.__fp_Register__Fuse_Drawing_DynamicBrush = (::uObject*(*)(void*, ::app::Uno::UX::Property__Fuse_Drawing_DynamicBrush*, int))MixerBase__Register__Fuse_Drawing_DynamicBrush;
    type->__interface_0.__fp_Register__Fuse_Drawing_GradientStop = (::uObject*(*)(void*, ::app::Uno::UX::Property__Fuse_Drawing_GradientStop*, int))MixerBase__Register__Fuse_Drawing_GradientStop;
    type->__interface_0.__fp_Register__Fuse_Drawing_LinearGradient = (::uObject*(*)(void*, ::app::Uno::UX::Property__Fuse_Drawing_LinearGradient*, int))MixerBase__Register__Fuse_Drawing_LinearGradient;
    type->__interface_0.__fp_Register__Fuse_Drawing_SolidColor = (::uObject*(*)(void*, ::app::Uno::UX::Property__Fuse_Drawing_SolidColor*, int))MixerBase__Register__Fuse_Drawing_SolidColor;
    type->__interface_0.__fp_Register__Fuse_Drawing_StaticBrush = (::uObject*(*)(void*, ::app::Uno::UX::Property__Fuse_Drawing_StaticBrush*, int))MixerBase__Register__Fuse_Drawing_StaticBrush;
    type->__interface_0.__fp_Register__Fuse_Elements_Alignment = (::uObject*(*)(void*, ::app::Uno::UX::Property__Fuse_Elements_Alignment*, int))MixerBase__Register__Fuse_Elements_Alignment;
    type->__interface_0.__fp_Register__Fuse_Elements_CachingMode = (::uObject*(*)(void*, ::app::Uno::UX::Property__Fuse_Elements_CachingMode*, int))MixerBase__Register__Fuse_Elements_CachingMode;
    type->__interface_0.__fp_Register__Fuse_Elements_Element = (::uObject*(*)(void*, ::app::Uno::UX::Property__Fuse_Elements_Element*, int))MixerBase__Register__Fuse_Elements_Element;
    type->__interface_0.__fp_Register__Fuse_Elements_HitTestMode = (::uObject*(*)(void*, ::app::Uno::UX::Property__Fuse_Elements_HitTestMode*, int))MixerBase__Register__Fuse_Elements_HitTestMode;
    type->__interface_0.__fp_Register__Fuse_Elements_SizeUnit = (::uObject*(*)(void*, ::app::Uno::UX::Property__Fuse_Elements_SizeUnit*, int))MixerBase__Register__Fuse_Elements_SizeUnit;
    type->__interface_0.__fp_Register__Fuse_Elements_StretchDirection = (::uObject*(*)(void*, ::app::Uno::UX::Property__Fuse_Elements_StretchDirection*, int))MixerBase__Register__Fuse_Elements_StretchDirection;
    type->__interface_0.__fp_Register__Fuse_Elements_StretchMode = (::uObject*(*)(void*, ::app::Uno::UX::Property__Fuse_Elements_StretchMode*, int))MixerBase__Register__Fuse_Elements_StretchMode;
    type->__interface_0.__fp_Register__Fuse_Elements_StretchSizing = (::uObject*(*)(void*, ::app::Uno::UX::Property__Fuse_Elements_StretchSizing*, int))MixerBase__Register__Fuse_Elements_StretchSizing;
    type->__interface_0.__fp_Register__Fuse_Elements_TextAlignment = (::uObject*(*)(void*, ::app::Uno::UX::Property__Fuse_Elements_TextAlignment*, int))MixerBase__Register__Fuse_Elements_TextAlignment;
    type->__interface_0.__fp_Register__Fuse_Elements_TextWrapping = (::uObject*(*)(void*, ::app::Uno::UX::Property__Fuse_Elements_TextWrapping*, int))MixerBase__Register__Fuse_Elements_TextWrapping;
    type->__interface_0.__fp_Register__Fuse_Elements_Visibility = (::uObject*(*)(void*, ::app::Uno::UX::Property__Fuse_Elements_Visibility*, int))MixerBase__Register__Fuse_Elements_Visibility;
    type->__interface_0.__fp_Register__Fuse_Gestures_Edge = (::uObject*(*)(void*, ::app::Uno::UX::Property__Fuse_Gestures_Edge*, int))MixerBase__Register__Fuse_Gestures_Edge;
    type->__interface_0.__fp_Register__Fuse_Gestures_ScrollDirections = (::uObject*(*)(void*, ::app::Uno::UX::Property__Fuse_Gestures_ScrollDirections*, int))MixerBase__Register__Fuse_Gestures_ScrollDirections;
    type->__interface_0.__fp_Register__Fuse_Layouts_Dock = (::uObject*(*)(void*, ::app::Uno::UX::Property__Fuse_Layouts_Dock*, int))MixerBase__Register__Fuse_Layouts_Dock;
    type->__interface_0.__fp_Register__Fuse_Layouts_FlowDirection = (::uObject*(*)(void*, ::app::Uno::UX::Property__Fuse_Layouts_FlowDirection*, int))MixerBase__Register__Fuse_Layouts_FlowDirection;
    type->__interface_0.__fp_Register__Fuse_Layouts_Metric = (::uObject*(*)(void*, ::app::Uno::UX::Property__Fuse_Layouts_Metric*, int))MixerBase__Register__Fuse_Layouts_Metric;
    type->__interface_0.__fp_Register__Fuse_Layouts_Orientation = (::uObject*(*)(void*, ::app::Uno::UX::Property__Fuse_Layouts_Orientation*, int))MixerBase__Register__Fuse_Layouts_Orientation;
    type->__interface_0.__fp_Register__Fuse_Navigation_NavigationDirection = (::uObject*(*)(void*, ::app::Uno::UX::Property__Fuse_Navigation_NavigationDirection*, int))MixerBase__Register__Fuse_Navigation_NavigationDirection;
    type->__interface_0.__fp_Register__Fuse_Navigation_NavigationEdge = (::uObject*(*)(void*, ::app::Uno::UX::Property__Fuse_Navigation_NavigationEdge*, int))MixerBase__Register__Fuse_Navigation_NavigationEdge;
    type->__interface_0.__fp_Register__Fuse_Navigation_NavigationGotoMode = (::uObject*(*)(void*, ::app::Uno::UX::Property__Fuse_Navigation_NavigationGotoMode*, int))MixerBase__Register__Fuse_Navigation_NavigationGotoMode;
    type->__interface_0.__fp_Register__Fuse_Navigation_SnapTo = (::uObject*(*)(void*, ::app::Uno::UX::Property__Fuse_Navigation_SnapTo*, int))MixerBase__Register__Fuse_Navigation_SnapTo;
    type->__interface_0.__fp_Register__Fuse_Navigation_SwipeDirection = (::uObject*(*)(void*, ::app::Uno::UX::Property__Fuse_Navigation_SwipeDirection*, int))MixerBase__Register__Fuse_Navigation_SwipeDirection;
    type->__interface_0.__fp_Register__Fuse_Navigation_SwipeEnds = (::uObject*(*)(void*, ::app::Uno::UX::Property__Fuse_Navigation_SwipeEnds*, int))MixerBase__Register__Fuse_Navigation_SwipeEnds;
    type->__interface_0.__fp_Register__Fuse_Triggers_Actions_TriggerDirection = (::uObject*(*)(void*, ::app::Uno::UX::Property__Fuse_Triggers_Actions_TriggerDirection*, int))MixerBase__Register__Fuse_Triggers_Actions_TriggerDirection;
    type->__interface_0.__fp_Register__Fuse_Triggers_StateTransition = (::uObject*(*)(void*, ::app::Uno::UX::Property__Fuse_Triggers_StateTransition*, int))MixerBase__Register__Fuse_Triggers_StateTransition;
    type->__interface_0.__fp_Register__Fuse_Triggers_TriggerBypassMode = (::uObject*(*)(void*, ::app::Uno::UX::Property__Fuse_Triggers_TriggerBypassMode*, int))MixerBase__Register__Fuse_Triggers_TriggerBypassMode;
    type->__interface_0.__fp_Register__Fuse_Triggers_State = (::uObject*(*)(void*, ::app::Uno::UX::Property__Fuse_Triggers_State*, int))MixerBase__Register__Fuse_Triggers_State;
    type->__interface_0.__fp_Register__Fuse_Drawing_Brush = (::uObject*(*)(void*, ::app::Uno::UX::Property__Fuse_Drawing_Brush*, int))MixerBase__Register__Fuse_Drawing_Brush;
    type->__interface_0.__fp_Register__int2 = (::uObject*(*)(void*, ::app::Uno::UX::Property__int2*, int))MixerBase__Register__int2;
    type->__interface_0.__fp_Register__int3 = (::uObject*(*)(void*, ::app::Uno::UX::Property__int3*, int))MixerBase__Register__int3;
    type->__interface_0.__fp_Register__int4 = (::uObject*(*)(void*, ::app::Uno::UX::Property__int4*, int))MixerBase__Register__int4;
    type->__interface_0.__fp_Register__int = (::uObject*(*)(void*, ::app::Uno::UX::Property__int*, int))MixerBase__Register__int;
    type->__interface_0.__fp_Register__long = (::uObject*(*)(void*, ::app::Uno::UX::Property__long*, int))MixerBase__Register__long;
    type->__interface_0.__fp_Register__object = (::uObject*(*)(void*, ::app::Uno::UX::Property__object*, int))MixerBase__Register__object;
    type->__interface_0.__fp_Register__short = (::uObject*(*)(void*, ::app::Uno::UX::Property__short*, int))MixerBase__Register__short;
    type->__interface_0.__fp_Register__string = (::uObject*(*)(void*, ::app::Uno::UX::Property__string*, int))MixerBase__Register__string;
    type->__interface_0.__fp_Register__Uno_EventArgs = (::uObject*(*)(void*, ::app::Uno::UX::Property__Uno_EventArgs*, int))MixerBase__Register__Uno_EventArgs;
    type->__interface_0.__fp_Register__Fuse_Node = (::uObject*(*)(void*, ::app::Uno::UX::Property__Fuse_Node*, int))MixerBase__Register__Fuse_Node;
    type->__interface_0.__fp_Register__Fuse_Resources_ImageSource = (::uObject*(*)(void*, ::app::Uno::UX::Property__Fuse_Resources_ImageSource*, int))MixerBase__Register__Fuse_Resources_ImageSource;
    type->__interface_0.__fp_Register__Fuse_Font = (::uObject*(*)(void*, ::app::Uno::UX::Property__Fuse_Font*, int))MixerBase__Register__Fuse_Font;

    type->SetInterfaces(
        ::app::Fuse::Animations::IMixer__typeof(), offsetof(MixerBase__uType, __interface_0));

    type->SetStrongRefs(
        "_propHandle", offsetof(MixerBase, _propHandle),
        "Masters", offsetof(MixerBase, Masters));

    type->SetFields(2,
        ::uNewField("_propHandle", NULL, offsetof(MixerBase, _propHandle), ::app::Fuse::PropertyHandle__typeof()),
        ::uNewField("Masters", NULL, offsetof(MixerBase, Masters), ::app::Uno::Collections::Dictionary__object__object__typeof()));

    type->SetFunctions(62,
        ::uNewFunction("CreateMasterTransform", type->__fp_CreateMasterTransform, offsetof(MixerBase__uType, __fp_CreateMasterTransform), false, ::app::Fuse::Animations::MasterBase__Fuse_Transform__typeof(), ::app::Fuse::Node__typeof(), MixerBase__typeof()),
        ::uNewFunction("Register", MixerBase__Register__bool, 0, false, ::app::Fuse::Animations::IMixerHandle__bool__typeof(), ::app::Uno::UX::Property__bool__typeof(), ::app::Fuse::Animations::MixOp__typeof()),
        ::uNewFunction("Register", MixerBase__Register__char, 0, false, ::app::Fuse::Animations::IMixerHandle__char__typeof(), ::app::Uno::UX::Property__char__typeof(), ::app::Fuse::Animations::MixOp__typeof()),
        ::uNewFunction("Register", MixerBase__Register__double, 0, false, ::app::Fuse::Animations::IMixerHandle__double__typeof(), ::app::Uno::UX::Property__double__typeof(), ::app::Fuse::Animations::MixOp__typeof()),
        ::uNewFunction("Register", MixerBase__Register__float, 0, false, ::app::Fuse::Animations::IMixerHandle__float__typeof(), ::app::Uno::UX::Property__float__typeof(), ::app::Fuse::Animations::MixOp__typeof()),
        ::uNewFunction("Register", MixerBase__Register__float2, 0, false, ::app::Fuse::Animations::IMixerHandle__float2__typeof(), ::app::Uno::UX::Property__float2__typeof(), ::app::Fuse::Animations::MixOp__typeof()),
        ::uNewFunction("Register", MixerBase__Register__float3, 0, false, ::app::Fuse::Animations::IMixerHandle__float3__typeof(), ::app::Uno::UX::Property__float3__typeof(), ::app::Fuse::Animations::MixOp__typeof()),
        ::uNewFunction("Register", MixerBase__Register__float4, 0, false, ::app::Fuse::Animations::IMixerHandle__float4__typeof(), ::app::Uno::UX::Property__float4__typeof(), ::app::Fuse::Animations::MixOp__typeof()),
        ::uNewFunction("Register", MixerBase__Register__Fuse_Animations_AnimationVariant, 0, false, ::app::Fuse::Animations::IMixerHandle__Fuse_Animations_AnimationVariant__typeof(), ::app::Uno::UX::Property__Fuse_Animations_AnimationVariant__typeof(), ::app::Fuse::Animations::MixOp__typeof()),
        ::uNewFunction("Register", MixerBase__Register__Fuse_Animations_Easing, 0, false, ::app::Fuse::Animations::IMixerHandle__Fuse_Animations_Easing__typeof(), ::app::Uno::UX::Property__Fuse_Animations_Easing__typeof(), ::app::Fuse::Animations::MixOp__typeof()),
        ::uNewFunction("Register", MixerBase__Register__Fuse_Animations_KeyframeInterpolation, 0, false, ::app::Fuse::Animations::IMixerHandle__Fuse_Animations_KeyframeInterpolation__typeof(), ::app::Uno::UX::Property__Fuse_Animations_KeyframeInterpolation__typeof(), ::app::Fuse::Animations::MixOp__typeof()),
        ::uNewFunction("Register", MixerBase__Register__Fuse_Animations_MixOp, 0, false, ::app::Fuse::Animations::IMixerHandle__Fuse_Animations_MixOp__typeof(), ::app::Uno::UX::Property__Fuse_Animations_MixOp__typeof(), ::app::Fuse::Animations::MixOp__typeof()),
        ::uNewFunction("Register", MixerBase__Register__Fuse_Drawing_BlendMode, 0, false, ::app::Fuse::Animations::IMixerHandle__Fuse_Drawing_BlendMode__typeof(), ::app::Uno::UX::Property__Fuse_Drawing_BlendMode__typeof(), ::app::Fuse::Animations::MixOp__typeof()),
        ::uNewFunction("Register", MixerBase__Register__Fuse_Drawing_Brush, 0, false, ::app::Fuse::Animations::IMixerHandle__Fuse_Drawing_Brush__typeof(), ::app::Uno::UX::Property__Fuse_Drawing_Brush__typeof(), ::app::Fuse::Animations::MixOp__typeof()),
        ::uNewFunction("Register", MixerBase__Register__Fuse_Drawing_DynamicBrush, 0, false, ::app::Fuse::Animations::IMixerHandle__Fuse_Drawing_DynamicBrush__typeof(), ::app::Uno::UX::Property__Fuse_Drawing_DynamicBrush__typeof(), ::app::Fuse::Animations::MixOp__typeof()),
        ::uNewFunction("Register", MixerBase__Register__Fuse_Drawing_GradientStop, 0, false, ::app::Fuse::Animations::IMixerHandle__Fuse_Drawing_GradientStop__typeof(), ::app::Uno::UX::Property__Fuse_Drawing_GradientStop__typeof(), ::app::Fuse::Animations::MixOp__typeof()),
        ::uNewFunction("Register", MixerBase__Register__Fuse_Drawing_LinearGradient, 0, false, ::app::Fuse::Animations::IMixerHandle__Fuse_Drawing_LinearGradient__typeof(), ::app::Uno::UX::Property__Fuse_Drawing_LinearGradient__typeof(), ::app::Fuse::Animations::MixOp__typeof()),
        ::uNewFunction("Register", MixerBase__Register__Fuse_Drawing_SolidColor, 0, false, ::app::Fuse::Animations::IMixerHandle__Fuse_Drawing_SolidColor__typeof(), ::app::Uno::UX::Property__Fuse_Drawing_SolidColor__typeof(), ::app::Fuse::Animations::MixOp__typeof()),
        ::uNewFunction("Register", MixerBase__Register__Fuse_Drawing_StaticBrush, 0, false, ::app::Fuse::Animations::IMixerHandle__Fuse_Drawing_StaticBrush__typeof(), ::app::Uno::UX::Property__Fuse_Drawing_StaticBrush__typeof(), ::app::Fuse::Animations::MixOp__typeof()),
        ::uNewFunction("Register", MixerBase__Register__Fuse_Elements_Alignment, 0, false, ::app::Fuse::Animations::IMixerHandle__Fuse_Elements_Alignment__typeof(), ::app::Uno::UX::Property__Fuse_Elements_Alignment__typeof(), ::app::Fuse::Animations::MixOp__typeof()),
        ::uNewFunction("Register", MixerBase__Register__Fuse_Elements_CachingMode, 0, false, ::app::Fuse::Animations::IMixerHandle__Fuse_Elements_CachingMode__typeof(), ::app::Uno::UX::Property__Fuse_Elements_CachingMode__typeof(), ::app::Fuse::Animations::MixOp__typeof()),
        ::uNewFunction("Register", MixerBase__Register__Fuse_Elements_Element, 0, false, ::app::Fuse::Animations::IMixerHandle__Fuse_Elements_Element__typeof(), ::app::Uno::UX::Property__Fuse_Elements_Element__typeof(), ::app::Fuse::Animations::MixOp__typeof()),
        ::uNewFunction("Register", MixerBase__Register__Fuse_Elements_HitTestMode, 0, false, ::app::Fuse::Animations::IMixerHandle__Fuse_Elements_HitTestMode__typeof(), ::app::Uno::UX::Property__Fuse_Elements_HitTestMode__typeof(), ::app::Fuse::Animations::MixOp__typeof()),
        ::uNewFunction("Register", MixerBase__Register__Fuse_Elements_SizeUnit, 0, false, ::app::Fuse::Animations::IMixerHandle__Fuse_Elements_SizeUnit__typeof(), ::app::Uno::UX::Property__Fuse_Elements_SizeUnit__typeof(), ::app::Fuse::Animations::MixOp__typeof()),
        ::uNewFunction("Register", MixerBase__Register__Fuse_Elements_StretchDirection, 0, false, ::app::Fuse::Animations::IMixerHandle__Fuse_Elements_StretchDirection__typeof(), ::app::Uno::UX::Property__Fuse_Elements_StretchDirection__typeof(), ::app::Fuse::Animations::MixOp__typeof()),
        ::uNewFunction("Register", MixerBase__Register__Fuse_Elements_StretchMode, 0, false, ::app::Fuse::Animations::IMixerHandle__Fuse_Elements_StretchMode__typeof(), ::app::Uno::UX::Property__Fuse_Elements_StretchMode__typeof(), ::app::Fuse::Animations::MixOp__typeof()),
        ::uNewFunction("Register", MixerBase__Register__Fuse_Elements_StretchSizing, 0, false, ::app::Fuse::Animations::IMixerHandle__Fuse_Elements_StretchSizing__typeof(), ::app::Uno::UX::Property__Fuse_Elements_StretchSizing__typeof(), ::app::Fuse::Animations::MixOp__typeof()),
        ::uNewFunction("Register", MixerBase__Register__Fuse_Elements_TextAlignment, 0, false, ::app::Fuse::Animations::IMixerHandle__Fuse_Elements_TextAlignment__typeof(), ::app::Uno::UX::Property__Fuse_Elements_TextAlignment__typeof(), ::app::Fuse::Animations::MixOp__typeof()),
        ::uNewFunction("Register", MixerBase__Register__Fuse_Elements_TextWrapping, 0, false, ::app::Fuse::Animations::IMixerHandle__Fuse_Elements_TextWrapping__typeof(), ::app::Uno::UX::Property__Fuse_Elements_TextWrapping__typeof(), ::app::Fuse::Animations::MixOp__typeof()),
        ::uNewFunction("Register", MixerBase__Register__Fuse_Elements_Visibility, 0, false, ::app::Fuse::Animations::IMixerHandle__Fuse_Elements_Visibility__typeof(), ::app::Uno::UX::Property__Fuse_Elements_Visibility__typeof(), ::app::Fuse::Animations::MixOp__typeof()),
        ::uNewFunction("Register", MixerBase__Register__Fuse_Font, 0, false, ::app::Fuse::Animations::IMixerHandle__Fuse_Font__typeof(), ::app::Uno::UX::Property__Fuse_Font__typeof(), ::app::Fuse::Animations::MixOp__typeof()),
        ::uNewFunction("Register", MixerBase__Register__Fuse_Gestures_Edge, 0, false, ::app::Fuse::Animations::IMixerHandle__Fuse_Gestures_Edge__typeof(), ::app::Uno::UX::Property__Fuse_Gestures_Edge__typeof(), ::app::Fuse::Animations::MixOp__typeof()),
        ::uNewFunction("Register", MixerBase__Register__Fuse_Gestures_ScrollDirections, 0, false, ::app::Fuse::Animations::IMixerHandle__Fuse_Gestures_ScrollDirections__typeof(), ::app::Uno::UX::Property__Fuse_Gestures_ScrollDirections__typeof(), ::app::Fuse::Animations::MixOp__typeof()),
        ::uNewFunction("Register", MixerBase__Register__Fuse_Layouts_Dock, 0, false, ::app::Fuse::Animations::IMixerHandle__Fuse_Layouts_Dock__typeof(), ::app::Uno::UX::Property__Fuse_Layouts_Dock__typeof(), ::app::Fuse::Animations::MixOp__typeof()),
        ::uNewFunction("Register", MixerBase__Register__Fuse_Layouts_FlowDirection, 0, false, ::app::Fuse::Animations::IMixerHandle__Fuse_Layouts_FlowDirection__typeof(), ::app::Uno::UX::Property__Fuse_Layouts_FlowDirection__typeof(), ::app::Fuse::Animations::MixOp__typeof()),
        ::uNewFunction("Register", MixerBase__Register__Fuse_Layouts_Metric, 0, false, ::app::Fuse::Animations::IMixerHandle__Fuse_Layouts_Metric__typeof(), ::app::Uno::UX::Property__Fuse_Layouts_Metric__typeof(), ::app::Fuse::Animations::MixOp__typeof()),
        ::uNewFunction("Register", MixerBase__Register__Fuse_Layouts_Orientation, 0, false, ::app::Fuse::Animations::IMixerHandle__Fuse_Layouts_Orientation__typeof(), ::app::Uno::UX::Property__Fuse_Layouts_Orientation__typeof(), ::app::Fuse::Animations::MixOp__typeof()),
        ::uNewFunction("Register", MixerBase__Register__Fuse_Navigation_NavigationDirection, 0, false, ::app::Fuse::Animations::IMixerHandle__Fuse_Navigation_NavigationDirection__typeof(), ::app::Uno::UX::Property__Fuse_Navigation_NavigationDirection__typeof(), ::app::Fuse::Animations::MixOp__typeof()),
        ::uNewFunction("Register", MixerBase__Register__Fuse_Navigation_NavigationEdge, 0, false, ::app::Fuse::Animations::IMixerHandle__Fuse_Navigation_NavigationEdge__typeof(), ::app::Uno::UX::Property__Fuse_Navigation_NavigationEdge__typeof(), ::app::Fuse::Animations::MixOp__typeof()),
        ::uNewFunction("Register", MixerBase__Register__Fuse_Navigation_NavigationGotoMode, 0, false, ::app::Fuse::Animations::IMixerHandle__Fuse_Navigation_NavigationGotoMode__typeof(), ::app::Uno::UX::Property__Fuse_Navigation_NavigationGotoMode__typeof(), ::app::Fuse::Animations::MixOp__typeof()),
        ::uNewFunction("Register", MixerBase__Register__Fuse_Navigation_SnapTo, 0, false, ::app::Fuse::Animations::IMixerHandle__Fuse_Navigation_SnapTo__typeof(), ::app::Uno::UX::Property__Fuse_Navigation_SnapTo__typeof(), ::app::Fuse::Animations::MixOp__typeof()),
        ::uNewFunction("Register", MixerBase__Register__Fuse_Navigation_SwipeDirection, 0, false, ::app::Fuse::Animations::IMixerHandle__Fuse_Navigation_SwipeDirection__typeof(), ::app::Uno::UX::Property__Fuse_Navigation_SwipeDirection__typeof(), ::app::Fuse::Animations::MixOp__typeof()),
        ::uNewFunction("Register", MixerBase__Register__Fuse_Navigation_SwipeEnds, 0, false, ::app::Fuse::Animations::IMixerHandle__Fuse_Navigation_SwipeEnds__typeof(), ::app::Uno::UX::Property__Fuse_Navigation_SwipeEnds__typeof(), ::app::Fuse::Animations::MixOp__typeof()),
        ::uNewFunction("Register", MixerBase__Register__Fuse_Node, 0, false, ::app::Fuse::Animations::IMixerHandle__Fuse_Node__typeof(), ::app::Uno::UX::Property__Fuse_Node__typeof(), ::app::Fuse::Animations::MixOp__typeof()),
        ::uNewFunction("Register", MixerBase__Register__Fuse_Resources_ImageSource, 0, false, ::app::Fuse::Animations::IMixerHandle__Fuse_Resources_ImageSource__typeof(), ::app::Uno::UX::Property__Fuse_Resources_ImageSource__typeof(), ::app::Fuse::Animations::MixOp__typeof()),
        ::uNewFunction("Register", MixerBase__Register__Fuse_Triggers_Actions_TriggerDirection, 0, false, ::app::Fuse::Animations::IMixerHandle__Fuse_Triggers_Actions_TriggerDirection__typeof(), ::app::Uno::UX::Property__Fuse_Triggers_Actions_TriggerDirection__typeof(), ::app::Fuse::Animations::MixOp__typeof()),
        ::uNewFunction("Register", MixerBase__Register__Fuse_Triggers_State, 0, false, ::app::Fuse::Animations::IMixerHandle__Fuse_Triggers_State__typeof(), ::app::Uno::UX::Property__Fuse_Triggers_State__typeof(), ::app::Fuse::Animations::MixOp__typeof()),
        ::uNewFunction("Register", MixerBase__Register__Fuse_Triggers_StateTransition, 0, false, ::app::Fuse::Animations::IMixerHandle__Fuse_Triggers_StateTransition__typeof(), ::app::Uno::UX::Property__Fuse_Triggers_StateTransition__typeof(), ::app::Fuse::Animations::MixOp__typeof()),
        ::uNewFunction("Register", MixerBase__Register__Fuse_Triggers_TriggerBypassMode, 0, false, ::app::Fuse::Animations::IMixerHandle__Fuse_Triggers_TriggerBypassMode__typeof(), ::app::Uno::UX::Property__Fuse_Triggers_TriggerBypassMode__typeof(), ::app::Fuse::Animations::MixOp__typeof()),
        ::uNewFunction("Register", MixerBase__Register__int, 0, false, ::app::Fuse::Animations::IMixerHandle__int__typeof(), ::app::Uno::UX::Property__int__typeof(), ::app::Fuse::Animations::MixOp__typeof()),
        ::uNewFunction("Register", MixerBase__Register__int2, 0, false, ::app::Fuse::Animations::IMixerHandle__int2__typeof(), ::app::Uno::UX::Property__int2__typeof(), ::app::Fuse::Animations::MixOp__typeof()),
        ::uNewFunction("Register", MixerBase__Register__int3, 0, false, ::app::Fuse::Animations::IMixerHandle__int3__typeof(), ::app::Uno::UX::Property__int3__typeof(), ::app::Fuse::Animations::MixOp__typeof()),
        ::uNewFunction("Register", MixerBase__Register__int4, 0, false, ::app::Fuse::Animations::IMixerHandle__int4__typeof(), ::app::Uno::UX::Property__int4__typeof(), ::app::Fuse::Animations::MixOp__typeof()),
        ::uNewFunction("Register", MixerBase__Register__long, 0, false, ::app::Fuse::Animations::IMixerHandle__long__typeof(), ::app::Uno::UX::Property__long__typeof(), ::app::Fuse::Animations::MixOp__typeof()),
        ::uNewFunction("Register", MixerBase__Register__object, 0, false, ::app::Fuse::Animations::IMixerHandle__object__typeof(), ::app::Uno::UX::Property__object__typeof(), ::app::Fuse::Animations::MixOp__typeof()),
        ::uNewFunction("Register", MixerBase__Register__short, 0, false, ::app::Fuse::Animations::IMixerHandle__short__typeof(), ::app::Uno::UX::Property__short__typeof(), ::app::Fuse::Animations::MixOp__typeof()),
        ::uNewFunction("Register", MixerBase__Register__string, 0, false, ::app::Fuse::Animations::IMixerHandle__string__typeof(), ::app::Uno::UX::Property__string__typeof(), ::app::Fuse::Animations::MixOp__typeof()),
        ::uNewFunction("Register", MixerBase__Register__Uno_EventArgs, 0, false, ::app::Fuse::Animations::IMixerHandle__Uno_EventArgs__typeof(), ::app::Uno::UX::Property__Uno_EventArgs__typeof(), ::app::Fuse::Animations::MixOp__typeof()),
        ::uNewFunction("Register", MixerBase__Register__Uno_Platform_iOS_StatusBarStyle, 0, false, ::app::Fuse::Animations::IMixerHandle__Uno_Platform_iOS_StatusBarStyle__typeof(), ::app::Uno::UX::Property__Uno_Platform_iOS_StatusBarStyle__typeof(), ::app::Fuse::Animations::MixOp__typeof()),
        ::uNewFunction("Register", MixerBase__Register__Uno_UX_FileSource, 0, false, ::app::Fuse::Animations::IMixerHandle__Uno_UX_FileSource__typeof(), ::app::Uno::UX::Property__Uno_UX_FileSource__typeof(), ::app::Fuse::Animations::MixOp__typeof()),
        ::uNewFunction("RegisterTransform", MixerBase__RegisterTransform, 0, false, ::app::Fuse::Animations::IMixerHandle__Fuse_Transform__typeof(), ::app::Fuse::Node__typeof(), ::app::Fuse::Animations::MixOp__typeof(), ::app::Uno::Int__typeof()),
        ::uNewFunctionVoid("Unused", MixerBase__Unused, 0, false, ::app::Fuse::Animations::IMixerMaster__typeof()));

    ::uRegisterType(type);
    return type;
}

void MixerBase___ObjInit(MixerBase* __this)
{
    __this->Masters = ::app::Uno::Collections::Dictionary__object__object__New_1(NULL);
    __this->_propHandle = ::app::Fuse::Properties__CreateHandle(NULL);
}

::uObject* MixerBase__Register__bool(MixerBase* __this, ::app::Uno::UX::Property__bool* property, int mode)
{
    ::uObject* master;

    if (!::uPtr< ::app::Uno::Collections::Dictionary__object__object*>(__this->Masters)->TryGetValue((::uObject*)property, &master))
    {
        master = ::uCast< ::uObject*>((::uObject*)__this->CreateMaster__bool(property, __this), ::uObject__typeof());
        ::uPtr< ::app::Uno::Collections::Dictionary__object__object*>(__this->Masters)->Add((::uObject*)property, master);
    }

    ::app::Fuse::Animations::MasterBase__bool* masterT = ::uCast< ::app::Fuse::Animations::MasterBase__bool*>(master, ::app::Fuse::Animations::MasterBase__bool__typeof());
    return (::uObject*)::app::Fuse::Animations::MixerHandle__bool__New_1(NULL, masterT, mode, 0);
}

::uObject* MixerBase__Register__char(MixerBase* __this, ::app::Uno::UX::Property__char* property, int mode)
{
    ::uObject* master;

    if (!::uPtr< ::app::Uno::Collections::Dictionary__object__object*>(__this->Masters)->TryGetValue((::uObject*)property, &master))
    {
        master = ::uCast< ::uObject*>((::uObject*)__this->CreateMaster__char(property, __this), ::uObject__typeof());
        ::uPtr< ::app::Uno::Collections::Dictionary__object__object*>(__this->Masters)->Add((::uObject*)property, master);
    }

    ::app::Fuse::Animations::MasterBase__char* masterT = ::uCast< ::app::Fuse::Animations::MasterBase__char*>(master, ::app::Fuse::Animations::MasterBase__char__typeof());
    return (::uObject*)::app::Fuse::Animations::MixerHandle__char__New_1(NULL, masterT, mode, 0);
}

::uObject* MixerBase__Register__double(MixerBase* __this, ::app::Uno::UX::Property__double* property, int mode)
{
    ::uObject* master;

    if (!::uPtr< ::app::Uno::Collections::Dictionary__object__object*>(__this->Masters)->TryGetValue((::uObject*)property, &master))
    {
        master = ::uCast< ::uObject*>((::uObject*)__this->CreateMaster__double(property, __this), ::uObject__typeof());
        ::uPtr< ::app::Uno::Collections::Dictionary__object__object*>(__this->Masters)->Add((::uObject*)property, master);
    }

    ::app::Fuse::Animations::MasterBase__double* masterT = ::uCast< ::app::Fuse::Animations::MasterBase__double*>(master, ::app::Fuse::Animations::MasterBase__double__typeof());
    return (::uObject*)::app::Fuse::Animations::MixerHandle__double__New_1(NULL, masterT, mode, 0);
}

::uObject* MixerBase__Register__float(MixerBase* __this, ::app::Uno::UX::Property__float* property, int mode)
{
    ::uObject* master;

    if (!::uPtr< ::app::Uno::Collections::Dictionary__object__object*>(__this->Masters)->TryGetValue((::uObject*)property, &master))
    {
        master = ::uCast< ::uObject*>((::uObject*)__this->CreateMaster__float(property, __this), ::uObject__typeof());
        ::uPtr< ::app::Uno::Collections::Dictionary__object__object*>(__this->Masters)->Add((::uObject*)property, master);
    }

    ::app::Fuse::Animations::MasterBase__float* masterT = ::uCast< ::app::Fuse::Animations::MasterBase__float*>(master, ::app::Fuse::Animations::MasterBase__float__typeof());
    return (::uObject*)::app::Fuse::Animations::MixerHandle__float__New_1(NULL, masterT, mode, 0);
}

::uObject* MixerBase__Register__float2(MixerBase* __this, ::app::Uno::UX::Property__float2* property, int mode)
{
    ::uObject* master;

    if (!::uPtr< ::app::Uno::Collections::Dictionary__object__object*>(__this->Masters)->TryGetValue((::uObject*)property, &master))
    {
        master = ::uCast< ::uObject*>((::uObject*)__this->CreateMaster__float2(property, __this), ::uObject__typeof());
        ::uPtr< ::app::Uno::Collections::Dictionary__object__object*>(__this->Masters)->Add((::uObject*)property, master);
    }

    ::app::Fuse::Animations::MasterBase__float2* masterT = ::uCast< ::app::Fuse::Animations::MasterBase__float2*>(master, ::app::Fuse::Animations::MasterBase__float2__typeof());
    return (::uObject*)::app::Fuse::Animations::MixerHandle__float2__New_1(NULL, masterT, mode, 0);
}

::uObject* MixerBase__Register__float3(MixerBase* __this, ::app::Uno::UX::Property__float3* property, int mode)
{
    ::uObject* master;

    if (!::uPtr< ::app::Uno::Collections::Dictionary__object__object*>(__this->Masters)->TryGetValue((::uObject*)property, &master))
    {
        master = ::uCast< ::uObject*>((::uObject*)__this->CreateMaster__float3(property, __this), ::uObject__typeof());
        ::uPtr< ::app::Uno::Collections::Dictionary__object__object*>(__this->Masters)->Add((::uObject*)property, master);
    }

    ::app::Fuse::Animations::MasterBase__float3* masterT = ::uCast< ::app::Fuse::Animations::MasterBase__float3*>(master, ::app::Fuse::Animations::MasterBase__float3__typeof());
    return (::uObject*)::app::Fuse::Animations::MixerHandle__float3__New_1(NULL, masterT, mode, 0);
}

::uObject* MixerBase__Register__float4(MixerBase* __this, ::app::Uno::UX::Property__float4* property, int mode)
{
    ::uObject* master;

    if (!::uPtr< ::app::Uno::Collections::Dictionary__object__object*>(__this->Masters)->TryGetValue((::uObject*)property, &master))
    {
        master = ::uCast< ::uObject*>((::uObject*)__this->CreateMaster__float4(property, __this), ::uObject__typeof());
        ::uPtr< ::app::Uno::Collections::Dictionary__object__object*>(__this->Masters)->Add((::uObject*)property, master);
    }

    ::app::Fuse::Animations::MasterBase__float4* masterT = ::uCast< ::app::Fuse::Animations::MasterBase__float4*>(master, ::app::Fuse::Animations::MasterBase__float4__typeof());
    return (::uObject*)::app::Fuse::Animations::MixerHandle__float4__New_1(NULL, masterT, mode, 0);
}

::uObject* MixerBase__Register__Fuse_Animations_AnimationVariant(MixerBase* __this, ::app::Uno::UX::Property__Fuse_Animations_AnimationVariant* property, int mode)
{
    ::uObject* master;

    if (!::uPtr< ::app::Uno::Collections::Dictionary__object__object*>(__this->Masters)->TryGetValue((::uObject*)property, &master))
    {
        master = ::uCast< ::uObject*>((::uObject*)__this->CreateMaster__Fuse_Animations_AnimationVariant(property, __this), ::uObject__typeof());
        ::uPtr< ::app::Uno::Collections::Dictionary__object__object*>(__this->Masters)->Add((::uObject*)property, master);
    }

    ::app::Fuse::Animations::MasterBase__Fuse_Animations_AnimationVariant* masterT = ::uCast< ::app::Fuse::Animations::MasterBase__Fuse_Animations_AnimationVariant*>(master, ::app::Fuse::Animations::MasterBase__Fuse_Animations_AnimationVariant__typeof());
    return (::uObject*)::app::Fuse::Animations::MixerHandle__Fuse_Animations_AnimationVariant__New_1(NULL, masterT, mode, 0);
}

::uObject* MixerBase__Register__Fuse_Animations_Easing(MixerBase* __this, ::app::Uno::UX::Property__Fuse_Animations_Easing* property, int mode)
{
    ::uObject* master;

    if (!::uPtr< ::app::Uno::Collections::Dictionary__object__object*>(__this->Masters)->TryGetValue((::uObject*)property, &master))
    {
        master = ::uCast< ::uObject*>((::uObject*)__this->CreateMaster__Fuse_Animations_Easing(property, __this), ::uObject__typeof());
        ::uPtr< ::app::Uno::Collections::Dictionary__object__object*>(__this->Masters)->Add((::uObject*)property, master);
    }

    ::app::Fuse::Animations::MasterBase__Fuse_Animations_Easing* masterT = ::uCast< ::app::Fuse::Animations::MasterBase__Fuse_Animations_Easing*>(master, ::app::Fuse::Animations::MasterBase__Fuse_Animations_Easing__typeof());
    return (::uObject*)::app::Fuse::Animations::MixerHandle__Fuse_Animations_Easing__New_1(NULL, masterT, mode, 0);
}

::uObject* MixerBase__Register__Fuse_Animations_KeyframeInterpolation(MixerBase* __this, ::app::Uno::UX::Property__Fuse_Animations_KeyframeInterpolation* property, int mode)
{
    ::uObject* master;

    if (!::uPtr< ::app::Uno::Collections::Dictionary__object__object*>(__this->Masters)->TryGetValue((::uObject*)property, &master))
    {
        master = ::uCast< ::uObject*>((::uObject*)__this->CreateMaster__Fuse_Animations_KeyframeInterpolation(property, __this), ::uObject__typeof());
        ::uPtr< ::app::Uno::Collections::Dictionary__object__object*>(__this->Masters)->Add((::uObject*)property, master);
    }

    ::app::Fuse::Animations::MasterBase__Fuse_Animations_KeyframeInterpolation* masterT = ::uCast< ::app::Fuse::Animations::MasterBase__Fuse_Animations_KeyframeInterpolation*>(master, ::app::Fuse::Animations::MasterBase__Fuse_Animations_KeyframeInterpolation__typeof());
    return (::uObject*)::app::Fuse::Animations::MixerHandle__Fuse_Animations_KeyframeInterpolation__New_1(NULL, masterT, mode, 0);
}

::uObject* MixerBase__Register__Fuse_Animations_MixOp(MixerBase* __this, ::app::Uno::UX::Property__Fuse_Animations_MixOp* property, int mode)
{
    ::uObject* master;

    if (!::uPtr< ::app::Uno::Collections::Dictionary__object__object*>(__this->Masters)->TryGetValue((::uObject*)property, &master))
    {
        master = ::uCast< ::uObject*>((::uObject*)__this->CreateMaster__Fuse_Animations_MixOp(property, __this), ::uObject__typeof());
        ::uPtr< ::app::Uno::Collections::Dictionary__object__object*>(__this->Masters)->Add((::uObject*)property, master);
    }

    ::app::Fuse::Animations::MasterBase__Fuse_Animations_MixOp* masterT = ::uCast< ::app::Fuse::Animations::MasterBase__Fuse_Animations_MixOp*>(master, ::app::Fuse::Animations::MasterBase__Fuse_Animations_MixOp__typeof());
    return (::uObject*)::app::Fuse::Animations::MixerHandle__Fuse_Animations_MixOp__New_1(NULL, masterT, mode, 0);
}

::uObject* MixerBase__Register__Fuse_Drawing_BlendMode(MixerBase* __this, ::app::Uno::UX::Property__Fuse_Drawing_BlendMode* property, int mode)
{
    ::uObject* master;

    if (!::uPtr< ::app::Uno::Collections::Dictionary__object__object*>(__this->Masters)->TryGetValue((::uObject*)property, &master))
    {
        master = ::uCast< ::uObject*>((::uObject*)__this->CreateMaster__Fuse_Drawing_BlendMode(property, __this), ::uObject__typeof());
        ::uPtr< ::app::Uno::Collections::Dictionary__object__object*>(__this->Masters)->Add((::uObject*)property, master);
    }

    ::app::Fuse::Animations::MasterBase__Fuse_Drawing_BlendMode* masterT = ::uCast< ::app::Fuse::Animations::MasterBase__Fuse_Drawing_BlendMode*>(master, ::app::Fuse::Animations::MasterBase__Fuse_Drawing_BlendMode__typeof());
    return (::uObject*)::app::Fuse::Animations::MixerHandle__Fuse_Drawing_BlendMode__New_1(NULL, masterT, mode, 0);
}

::uObject* MixerBase__Register__Fuse_Drawing_Brush(MixerBase* __this, ::app::Uno::UX::Property__Fuse_Drawing_Brush* property, int mode)
{
    ::uObject* master;

    if (!::uPtr< ::app::Uno::Collections::Dictionary__object__object*>(__this->Masters)->TryGetValue((::uObject*)property, &master))
    {
        master = ::uCast< ::uObject*>((::uObject*)__this->CreateMaster__Fuse_Drawing_Brush(property, __this), ::uObject__typeof());
        ::uPtr< ::app::Uno::Collections::Dictionary__object__object*>(__this->Masters)->Add((::uObject*)property, master);
    }

    ::app::Fuse::Animations::MasterBase__Fuse_Drawing_Brush* masterT = ::uCast< ::app::Fuse::Animations::MasterBase__Fuse_Drawing_Brush*>(master, ::app::Fuse::Animations::MasterBase__Fuse_Drawing_Brush__typeof());
    return (::uObject*)::app::Fuse::Animations::MixerHandle__Fuse_Drawing_Brush__New_1(NULL, masterT, mode, 0);
}

::uObject* MixerBase__Register__Fuse_Drawing_DynamicBrush(MixerBase* __this, ::app::Uno::UX::Property__Fuse_Drawing_DynamicBrush* property, int mode)
{
    ::uObject* master;

    if (!::uPtr< ::app::Uno::Collections::Dictionary__object__object*>(__this->Masters)->TryGetValue((::uObject*)property, &master))
    {
        master = ::uCast< ::uObject*>((::uObject*)__this->CreateMaster__Fuse_Drawing_DynamicBrush(property, __this), ::uObject__typeof());
        ::uPtr< ::app::Uno::Collections::Dictionary__object__object*>(__this->Masters)->Add((::uObject*)property, master);
    }

    ::app::Fuse::Animations::MasterBase__Fuse_Drawing_DynamicBrush* masterT = ::uCast< ::app::Fuse::Animations::MasterBase__Fuse_Drawing_DynamicBrush*>(master, ::app::Fuse::Animations::MasterBase__Fuse_Drawing_DynamicBrush__typeof());
    return (::uObject*)::app::Fuse::Animations::MixerHandle__Fuse_Drawing_DynamicBrush__New_1(NULL, masterT, mode, 0);
}

::uObject* MixerBase__Register__Fuse_Drawing_GradientStop(MixerBase* __this, ::app::Uno::UX::Property__Fuse_Drawing_GradientStop* property, int mode)
{
    ::uObject* master;

    if (!::uPtr< ::app::Uno::Collections::Dictionary__object__object*>(__this->Masters)->TryGetValue((::uObject*)property, &master))
    {
        master = ::uCast< ::uObject*>((::uObject*)__this->CreateMaster__Fuse_Drawing_GradientStop(property, __this), ::uObject__typeof());
        ::uPtr< ::app::Uno::Collections::Dictionary__object__object*>(__this->Masters)->Add((::uObject*)property, master);
    }

    ::app::Fuse::Animations::MasterBase__Fuse_Drawing_GradientStop* masterT = ::uCast< ::app::Fuse::Animations::MasterBase__Fuse_Drawing_GradientStop*>(master, ::app::Fuse::Animations::MasterBase__Fuse_Drawing_GradientStop__typeof());
    return (::uObject*)::app::Fuse::Animations::MixerHandle__Fuse_Drawing_GradientStop__New_1(NULL, masterT, mode, 0);
}

::uObject* MixerBase__Register__Fuse_Drawing_LinearGradient(MixerBase* __this, ::app::Uno::UX::Property__Fuse_Drawing_LinearGradient* property, int mode)
{
    ::uObject* master;

    if (!::uPtr< ::app::Uno::Collections::Dictionary__object__object*>(__this->Masters)->TryGetValue((::uObject*)property, &master))
    {
        master = ::uCast< ::uObject*>((::uObject*)__this->CreateMaster__Fuse_Drawing_LinearGradient(property, __this), ::uObject__typeof());
        ::uPtr< ::app::Uno::Collections::Dictionary__object__object*>(__this->Masters)->Add((::uObject*)property, master);
    }

    ::app::Fuse::Animations::MasterBase__Fuse_Drawing_LinearGradient* masterT = ::uCast< ::app::Fuse::Animations::MasterBase__Fuse_Drawing_LinearGradient*>(master, ::app::Fuse::Animations::MasterBase__Fuse_Drawing_LinearGradient__typeof());
    return (::uObject*)::app::Fuse::Animations::MixerHandle__Fuse_Drawing_LinearGradient__New_1(NULL, masterT, mode, 0);
}

::uObject* MixerBase__Register__Fuse_Drawing_SolidColor(MixerBase* __this, ::app::Uno::UX::Property__Fuse_Drawing_SolidColor* property, int mode)
{
    ::uObject* master;

    if (!::uPtr< ::app::Uno::Collections::Dictionary__object__object*>(__this->Masters)->TryGetValue((::uObject*)property, &master))
    {
        master = ::uCast< ::uObject*>((::uObject*)__this->CreateMaster__Fuse_Drawing_SolidColor(property, __this), ::uObject__typeof());
        ::uPtr< ::app::Uno::Collections::Dictionary__object__object*>(__this->Masters)->Add((::uObject*)property, master);
    }

    ::app::Fuse::Animations::MasterBase__Fuse_Drawing_SolidColor* masterT = ::uCast< ::app::Fuse::Animations::MasterBase__Fuse_Drawing_SolidColor*>(master, ::app::Fuse::Animations::MasterBase__Fuse_Drawing_SolidColor__typeof());
    return (::uObject*)::app::Fuse::Animations::MixerHandle__Fuse_Drawing_SolidColor__New_1(NULL, masterT, mode, 0);
}

::uObject* MixerBase__Register__Fuse_Drawing_StaticBrush(MixerBase* __this, ::app::Uno::UX::Property__Fuse_Drawing_StaticBrush* property, int mode)
{
    ::uObject* master;

    if (!::uPtr< ::app::Uno::Collections::Dictionary__object__object*>(__this->Masters)->TryGetValue((::uObject*)property, &master))
    {
        master = ::uCast< ::uObject*>((::uObject*)__this->CreateMaster__Fuse_Drawing_StaticBrush(property, __this), ::uObject__typeof());
        ::uPtr< ::app::Uno::Collections::Dictionary__object__object*>(__this->Masters)->Add((::uObject*)property, master);
    }

    ::app::Fuse::Animations::MasterBase__Fuse_Drawing_StaticBrush* masterT = ::uCast< ::app::Fuse::Animations::MasterBase__Fuse_Drawing_StaticBrush*>(master, ::app::Fuse::Animations::MasterBase__Fuse_Drawing_StaticBrush__typeof());
    return (::uObject*)::app::Fuse::Animations::MixerHandle__Fuse_Drawing_StaticBrush__New_1(NULL, masterT, mode, 0);
}

::uObject* MixerBase__Register__Fuse_Elements_Alignment(MixerBase* __this, ::app::Uno::UX::Property__Fuse_Elements_Alignment* property, int mode)
{
    ::uObject* master;

    if (!::uPtr< ::app::Uno::Collections::Dictionary__object__object*>(__this->Masters)->TryGetValue((::uObject*)property, &master))
    {
        master = ::uCast< ::uObject*>((::uObject*)__this->CreateMaster__Fuse_Elements_Alignment(property, __this), ::uObject__typeof());
        ::uPtr< ::app::Uno::Collections::Dictionary__object__object*>(__this->Masters)->Add((::uObject*)property, master);
    }

    ::app::Fuse::Animations::MasterBase__Fuse_Elements_Alignment* masterT = ::uCast< ::app::Fuse::Animations::MasterBase__Fuse_Elements_Alignment*>(master, ::app::Fuse::Animations::MasterBase__Fuse_Elements_Alignment__typeof());
    return (::uObject*)::app::Fuse::Animations::MixerHandle__Fuse_Elements_Alignment__New_1(NULL, masterT, mode, 0);
}

::uObject* MixerBase__Register__Fuse_Elements_CachingMode(MixerBase* __this, ::app::Uno::UX::Property__Fuse_Elements_CachingMode* property, int mode)
{
    ::uObject* master;

    if (!::uPtr< ::app::Uno::Collections::Dictionary__object__object*>(__this->Masters)->TryGetValue((::uObject*)property, &master))
    {
        master = ::uCast< ::uObject*>((::uObject*)__this->CreateMaster__Fuse_Elements_CachingMode(property, __this), ::uObject__typeof());
        ::uPtr< ::app::Uno::Collections::Dictionary__object__object*>(__this->Masters)->Add((::uObject*)property, master);
    }

    ::app::Fuse::Animations::MasterBase__Fuse_Elements_CachingMode* masterT = ::uCast< ::app::Fuse::Animations::MasterBase__Fuse_Elements_CachingMode*>(master, ::app::Fuse::Animations::MasterBase__Fuse_Elements_CachingMode__typeof());
    return (::uObject*)::app::Fuse::Animations::MixerHandle__Fuse_Elements_CachingMode__New_1(NULL, masterT, mode, 0);
}

::uObject* MixerBase__Register__Fuse_Elements_Element(MixerBase* __this, ::app::Uno::UX::Property__Fuse_Elements_Element* property, int mode)
{
    ::uObject* master;

    if (!::uPtr< ::app::Uno::Collections::Dictionary__object__object*>(__this->Masters)->TryGetValue((::uObject*)property, &master))
    {
        master = ::uCast< ::uObject*>((::uObject*)__this->CreateMaster__Fuse_Elements_Element(property, __this), ::uObject__typeof());
        ::uPtr< ::app::Uno::Collections::Dictionary__object__object*>(__this->Masters)->Add((::uObject*)property, master);
    }

    ::app::Fuse::Animations::MasterBase__Fuse_Elements_Element* masterT = ::uCast< ::app::Fuse::Animations::MasterBase__Fuse_Elements_Element*>(master, ::app::Fuse::Animations::MasterBase__Fuse_Elements_Element__typeof());
    return (::uObject*)::app::Fuse::Animations::MixerHandle__Fuse_Elements_Element__New_1(NULL, masterT, mode, 0);
}

::uObject* MixerBase__Register__Fuse_Elements_HitTestMode(MixerBase* __this, ::app::Uno::UX::Property__Fuse_Elements_HitTestMode* property, int mode)
{
    ::uObject* master;

    if (!::uPtr< ::app::Uno::Collections::Dictionary__object__object*>(__this->Masters)->TryGetValue((::uObject*)property, &master))
    {
        master = ::uCast< ::uObject*>((::uObject*)__this->CreateMaster__Fuse_Elements_HitTestMode(property, __this), ::uObject__typeof());
        ::uPtr< ::app::Uno::Collections::Dictionary__object__object*>(__this->Masters)->Add((::uObject*)property, master);
    }

    ::app::Fuse::Animations::MasterBase__Fuse_Elements_HitTestMode* masterT = ::uCast< ::app::Fuse::Animations::MasterBase__Fuse_Elements_HitTestMode*>(master, ::app::Fuse::Animations::MasterBase__Fuse_Elements_HitTestMode__typeof());
    return (::uObject*)::app::Fuse::Animations::MixerHandle__Fuse_Elements_HitTestMode__New_1(NULL, masterT, mode, 0);
}

::uObject* MixerBase__Register__Fuse_Elements_SizeUnit(MixerBase* __this, ::app::Uno::UX::Property__Fuse_Elements_SizeUnit* property, int mode)
{
    ::uObject* master;

    if (!::uPtr< ::app::Uno::Collections::Dictionary__object__object*>(__this->Masters)->TryGetValue((::uObject*)property, &master))
    {
        master = ::uCast< ::uObject*>((::uObject*)__this->CreateMaster__Fuse_Elements_SizeUnit(property, __this), ::uObject__typeof());
        ::uPtr< ::app::Uno::Collections::Dictionary__object__object*>(__this->Masters)->Add((::uObject*)property, master);
    }

    ::app::Fuse::Animations::MasterBase__Fuse_Elements_SizeUnit* masterT = ::uCast< ::app::Fuse::Animations::MasterBase__Fuse_Elements_SizeUnit*>(master, ::app::Fuse::Animations::MasterBase__Fuse_Elements_SizeUnit__typeof());
    return (::uObject*)::app::Fuse::Animations::MixerHandle__Fuse_Elements_SizeUnit__New_1(NULL, masterT, mode, 0);
}

::uObject* MixerBase__Register__Fuse_Elements_StretchDirection(MixerBase* __this, ::app::Uno::UX::Property__Fuse_Elements_StretchDirection* property, int mode)
{
    ::uObject* master;

    if (!::uPtr< ::app::Uno::Collections::Dictionary__object__object*>(__this->Masters)->TryGetValue((::uObject*)property, &master))
    {
        master = ::uCast< ::uObject*>((::uObject*)__this->CreateMaster__Fuse_Elements_StretchDirection(property, __this), ::uObject__typeof());
        ::uPtr< ::app::Uno::Collections::Dictionary__object__object*>(__this->Masters)->Add((::uObject*)property, master);
    }

    ::app::Fuse::Animations::MasterBase__Fuse_Elements_StretchDirection* masterT = ::uCast< ::app::Fuse::Animations::MasterBase__Fuse_Elements_StretchDirection*>(master, ::app::Fuse::Animations::MasterBase__Fuse_Elements_StretchDirection__typeof());
    return (::uObject*)::app::Fuse::Animations::MixerHandle__Fuse_Elements_StretchDirection__New_1(NULL, masterT, mode, 0);
}

::uObject* MixerBase__Register__Fuse_Elements_StretchMode(MixerBase* __this, ::app::Uno::UX::Property__Fuse_Elements_StretchMode* property, int mode)
{
    ::uObject* master;

    if (!::uPtr< ::app::Uno::Collections::Dictionary__object__object*>(__this->Masters)->TryGetValue((::uObject*)property, &master))
    {
        master = ::uCast< ::uObject*>((::uObject*)__this->CreateMaster__Fuse_Elements_StretchMode(property, __this), ::uObject__typeof());
        ::uPtr< ::app::Uno::Collections::Dictionary__object__object*>(__this->Masters)->Add((::uObject*)property, master);
    }

    ::app::Fuse::Animations::MasterBase__Fuse_Elements_StretchMode* masterT = ::uCast< ::app::Fuse::Animations::MasterBase__Fuse_Elements_StretchMode*>(master, ::app::Fuse::Animations::MasterBase__Fuse_Elements_StretchMode__typeof());
    return (::uObject*)::app::Fuse::Animations::MixerHandle__Fuse_Elements_StretchMode__New_1(NULL, masterT, mode, 0);
}

::uObject* MixerBase__Register__Fuse_Elements_StretchSizing(MixerBase* __this, ::app::Uno::UX::Property__Fuse_Elements_StretchSizing* property, int mode)
{
    ::uObject* master;

    if (!::uPtr< ::app::Uno::Collections::Dictionary__object__object*>(__this->Masters)->TryGetValue((::uObject*)property, &master))
    {
        master = ::uCast< ::uObject*>((::uObject*)__this->CreateMaster__Fuse_Elements_StretchSizing(property, __this), ::uObject__typeof());
        ::uPtr< ::app::Uno::Collections::Dictionary__object__object*>(__this->Masters)->Add((::uObject*)property, master);
    }

    ::app::Fuse::Animations::MasterBase__Fuse_Elements_StretchSizing* masterT = ::uCast< ::app::Fuse::Animations::MasterBase__Fuse_Elements_StretchSizing*>(master, ::app::Fuse::Animations::MasterBase__Fuse_Elements_StretchSizing__typeof());
    return (::uObject*)::app::Fuse::Animations::MixerHandle__Fuse_Elements_StretchSizing__New_1(NULL, masterT, mode, 0);
}

::uObject* MixerBase__Register__Fuse_Elements_TextAlignment(MixerBase* __this, ::app::Uno::UX::Property__Fuse_Elements_TextAlignment* property, int mode)
{
    ::uObject* master;

    if (!::uPtr< ::app::Uno::Collections::Dictionary__object__object*>(__this->Masters)->TryGetValue((::uObject*)property, &master))
    {
        master = ::uCast< ::uObject*>((::uObject*)__this->CreateMaster__Fuse_Elements_TextAlignment(property, __this), ::uObject__typeof());
        ::uPtr< ::app::Uno::Collections::Dictionary__object__object*>(__this->Masters)->Add((::uObject*)property, master);
    }

    ::app::Fuse::Animations::MasterBase__Fuse_Elements_TextAlignment* masterT = ::uCast< ::app::Fuse::Animations::MasterBase__Fuse_Elements_TextAlignment*>(master, ::app::Fuse::Animations::MasterBase__Fuse_Elements_TextAlignment__typeof());
    return (::uObject*)::app::Fuse::Animations::MixerHandle__Fuse_Elements_TextAlignment__New_1(NULL, masterT, mode, 0);
}

::uObject* MixerBase__Register__Fuse_Elements_TextWrapping(MixerBase* __this, ::app::Uno::UX::Property__Fuse_Elements_TextWrapping* property, int mode)
{
    ::uObject* master;

    if (!::uPtr< ::app::Uno::Collections::Dictionary__object__object*>(__this->Masters)->TryGetValue((::uObject*)property, &master))
    {
        master = ::uCast< ::uObject*>((::uObject*)__this->CreateMaster__Fuse_Elements_TextWrapping(property, __this), ::uObject__typeof());
        ::uPtr< ::app::Uno::Collections::Dictionary__object__object*>(__this->Masters)->Add((::uObject*)property, master);
    }

    ::app::Fuse::Animations::MasterBase__Fuse_Elements_TextWrapping* masterT = ::uCast< ::app::Fuse::Animations::MasterBase__Fuse_Elements_TextWrapping*>(master, ::app::Fuse::Animations::MasterBase__Fuse_Elements_TextWrapping__typeof());
    return (::uObject*)::app::Fuse::Animations::MixerHandle__Fuse_Elements_TextWrapping__New_1(NULL, masterT, mode, 0);
}

::uObject* MixerBase__Register__Fuse_Elements_Visibility(MixerBase* __this, ::app::Uno::UX::Property__Fuse_Elements_Visibility* property, int mode)
{
    ::uObject* master;

    if (!::uPtr< ::app::Uno::Collections::Dictionary__object__object*>(__this->Masters)->TryGetValue((::uObject*)property, &master))
    {
        master = ::uCast< ::uObject*>((::uObject*)__this->CreateMaster__Fuse_Elements_Visibility(property, __this), ::uObject__typeof());
        ::uPtr< ::app::Uno::Collections::Dictionary__object__object*>(__this->Masters)->Add((::uObject*)property, master);
    }

    ::app::Fuse::Animations::MasterBase__Fuse_Elements_Visibility* masterT = ::uCast< ::app::Fuse::Animations::MasterBase__Fuse_Elements_Visibility*>(master, ::app::Fuse::Animations::MasterBase__Fuse_Elements_Visibility__typeof());
    return (::uObject*)::app::Fuse::Animations::MixerHandle__Fuse_Elements_Visibility__New_1(NULL, masterT, mode, 0);
}

::uObject* MixerBase__Register__Fuse_Font(MixerBase* __this, ::app::Uno::UX::Property__Fuse_Font* property, int mode)
{
    ::uObject* master;

    if (!::uPtr< ::app::Uno::Collections::Dictionary__object__object*>(__this->Masters)->TryGetValue((::uObject*)property, &master))
    {
        master = ::uCast< ::uObject*>((::uObject*)__this->CreateMaster__Fuse_Font(property, __this), ::uObject__typeof());
        ::uPtr< ::app::Uno::Collections::Dictionary__object__object*>(__this->Masters)->Add((::uObject*)property, master);
    }

    ::app::Fuse::Animations::MasterBase__Fuse_Font* masterT = ::uCast< ::app::Fuse::Animations::MasterBase__Fuse_Font*>(master, ::app::Fuse::Animations::MasterBase__Fuse_Font__typeof());
    return (::uObject*)::app::Fuse::Animations::MixerHandle__Fuse_Font__New_1(NULL, masterT, mode, 0);
}

::uObject* MixerBase__Register__Fuse_Gestures_Edge(MixerBase* __this, ::app::Uno::UX::Property__Fuse_Gestures_Edge* property, int mode)
{
    ::uObject* master;

    if (!::uPtr< ::app::Uno::Collections::Dictionary__object__object*>(__this->Masters)->TryGetValue((::uObject*)property, &master))
    {
        master = ::uCast< ::uObject*>((::uObject*)__this->CreateMaster__Fuse_Gestures_Edge(property, __this), ::uObject__typeof());
        ::uPtr< ::app::Uno::Collections::Dictionary__object__object*>(__this->Masters)->Add((::uObject*)property, master);
    }

    ::app::Fuse::Animations::MasterBase__Fuse_Gestures_Edge* masterT = ::uCast< ::app::Fuse::Animations::MasterBase__Fuse_Gestures_Edge*>(master, ::app::Fuse::Animations::MasterBase__Fuse_Gestures_Edge__typeof());
    return (::uObject*)::app::Fuse::Animations::MixerHandle__Fuse_Gestures_Edge__New_1(NULL, masterT, mode, 0);
}

::uObject* MixerBase__Register__Fuse_Gestures_ScrollDirections(MixerBase* __this, ::app::Uno::UX::Property__Fuse_Gestures_ScrollDirections* property, int mode)
{
    ::uObject* master;

    if (!::uPtr< ::app::Uno::Collections::Dictionary__object__object*>(__this->Masters)->TryGetValue((::uObject*)property, &master))
    {
        master = ::uCast< ::uObject*>((::uObject*)__this->CreateMaster__Fuse_Gestures_ScrollDirections(property, __this), ::uObject__typeof());
        ::uPtr< ::app::Uno::Collections::Dictionary__object__object*>(__this->Masters)->Add((::uObject*)property, master);
    }

    ::app::Fuse::Animations::MasterBase__Fuse_Gestures_ScrollDirections* masterT = ::uCast< ::app::Fuse::Animations::MasterBase__Fuse_Gestures_ScrollDirections*>(master, ::app::Fuse::Animations::MasterBase__Fuse_Gestures_ScrollDirections__typeof());
    return (::uObject*)::app::Fuse::Animations::MixerHandle__Fuse_Gestures_ScrollDirections__New_1(NULL, masterT, mode, 0);
}

::uObject* MixerBase__Register__Fuse_Layouts_Dock(MixerBase* __this, ::app::Uno::UX::Property__Fuse_Layouts_Dock* property, int mode)
{
    ::uObject* master;

    if (!::uPtr< ::app::Uno::Collections::Dictionary__object__object*>(__this->Masters)->TryGetValue((::uObject*)property, &master))
    {
        master = ::uCast< ::uObject*>((::uObject*)__this->CreateMaster__Fuse_Layouts_Dock(property, __this), ::uObject__typeof());
        ::uPtr< ::app::Uno::Collections::Dictionary__object__object*>(__this->Masters)->Add((::uObject*)property, master);
    }

    ::app::Fuse::Animations::MasterBase__Fuse_Layouts_Dock* masterT = ::uCast< ::app::Fuse::Animations::MasterBase__Fuse_Layouts_Dock*>(master, ::app::Fuse::Animations::MasterBase__Fuse_Layouts_Dock__typeof());
    return (::uObject*)::app::Fuse::Animations::MixerHandle__Fuse_Layouts_Dock__New_1(NULL, masterT, mode, 0);
}

::uObject* MixerBase__Register__Fuse_Layouts_FlowDirection(MixerBase* __this, ::app::Uno::UX::Property__Fuse_Layouts_FlowDirection* property, int mode)
{
    ::uObject* master;

    if (!::uPtr< ::app::Uno::Collections::Dictionary__object__object*>(__this->Masters)->TryGetValue((::uObject*)property, &master))
    {
        master = ::uCast< ::uObject*>((::uObject*)__this->CreateMaster__Fuse_Layouts_FlowDirection(property, __this), ::uObject__typeof());
        ::uPtr< ::app::Uno::Collections::Dictionary__object__object*>(__this->Masters)->Add((::uObject*)property, master);
    }

    ::app::Fuse::Animations::MasterBase__Fuse_Layouts_FlowDirection* masterT = ::uCast< ::app::Fuse::Animations::MasterBase__Fuse_Layouts_FlowDirection*>(master, ::app::Fuse::Animations::MasterBase__Fuse_Layouts_FlowDirection__typeof());
    return (::uObject*)::app::Fuse::Animations::MixerHandle__Fuse_Layouts_FlowDirection__New_1(NULL, masterT, mode, 0);
}

::uObject* MixerBase__Register__Fuse_Layouts_Metric(MixerBase* __this, ::app::Uno::UX::Property__Fuse_Layouts_Metric* property, int mode)
{
    ::uObject* master;

    if (!::uPtr< ::app::Uno::Collections::Dictionary__object__object*>(__this->Masters)->TryGetValue((::uObject*)property, &master))
    {
        master = ::uCast< ::uObject*>((::uObject*)__this->CreateMaster__Fuse_Layouts_Metric(property, __this), ::uObject__typeof());
        ::uPtr< ::app::Uno::Collections::Dictionary__object__object*>(__this->Masters)->Add((::uObject*)property, master);
    }

    ::app::Fuse::Animations::MasterBase__Fuse_Layouts_Metric* masterT = ::uCast< ::app::Fuse::Animations::MasterBase__Fuse_Layouts_Metric*>(master, ::app::Fuse::Animations::MasterBase__Fuse_Layouts_Metric__typeof());
    return (::uObject*)::app::Fuse::Animations::MixerHandle__Fuse_Layouts_Metric__New_1(NULL, masterT, mode, 0);
}

::uObject* MixerBase__Register__Fuse_Layouts_Orientation(MixerBase* __this, ::app::Uno::UX::Property__Fuse_Layouts_Orientation* property, int mode)
{
    ::uObject* master;

    if (!::uPtr< ::app::Uno::Collections::Dictionary__object__object*>(__this->Masters)->TryGetValue((::uObject*)property, &master))
    {
        master = ::uCast< ::uObject*>((::uObject*)__this->CreateMaster__Fuse_Layouts_Orientation(property, __this), ::uObject__typeof());
        ::uPtr< ::app::Uno::Collections::Dictionary__object__object*>(__this->Masters)->Add((::uObject*)property, master);
    }

    ::app::Fuse::Animations::MasterBase__Fuse_Layouts_Orientation* masterT = ::uCast< ::app::Fuse::Animations::MasterBase__Fuse_Layouts_Orientation*>(master, ::app::Fuse::Animations::MasterBase__Fuse_Layouts_Orientation__typeof());
    return (::uObject*)::app::Fuse::Animations::MixerHandle__Fuse_Layouts_Orientation__New_1(NULL, masterT, mode, 0);
}

::uObject* MixerBase__Register__Fuse_Navigation_NavigationDirection(MixerBase* __this, ::app::Uno::UX::Property__Fuse_Navigation_NavigationDirection* property, int mode)
{
    ::uObject* master;

    if (!::uPtr< ::app::Uno::Collections::Dictionary__object__object*>(__this->Masters)->TryGetValue((::uObject*)property, &master))
    {
        master = ::uCast< ::uObject*>((::uObject*)__this->CreateMaster__Fuse_Navigation_NavigationDirection(property, __this), ::uObject__typeof());
        ::uPtr< ::app::Uno::Collections::Dictionary__object__object*>(__this->Masters)->Add((::uObject*)property, master);
    }

    ::app::Fuse::Animations::MasterBase__Fuse_Navigation_NavigationDirection* masterT = ::uCast< ::app::Fuse::Animations::MasterBase__Fuse_Navigation_NavigationDirection*>(master, ::app::Fuse::Animations::MasterBase__Fuse_Navigation_NavigationDirection__typeof());
    return (::uObject*)::app::Fuse::Animations::MixerHandle__Fuse_Navigation_NavigationDirection__New_1(NULL, masterT, mode, 0);
}

::uObject* MixerBase__Register__Fuse_Navigation_NavigationEdge(MixerBase* __this, ::app::Uno::UX::Property__Fuse_Navigation_NavigationEdge* property, int mode)
{
    ::uObject* master;

    if (!::uPtr< ::app::Uno::Collections::Dictionary__object__object*>(__this->Masters)->TryGetValue((::uObject*)property, &master))
    {
        master = ::uCast< ::uObject*>((::uObject*)__this->CreateMaster__Fuse_Navigation_NavigationEdge(property, __this), ::uObject__typeof());
        ::uPtr< ::app::Uno::Collections::Dictionary__object__object*>(__this->Masters)->Add((::uObject*)property, master);
    }

    ::app::Fuse::Animations::MasterBase__Fuse_Navigation_NavigationEdge* masterT = ::uCast< ::app::Fuse::Animations::MasterBase__Fuse_Navigation_NavigationEdge*>(master, ::app::Fuse::Animations::MasterBase__Fuse_Navigation_NavigationEdge__typeof());
    return (::uObject*)::app::Fuse::Animations::MixerHandle__Fuse_Navigation_NavigationEdge__New_1(NULL, masterT, mode, 0);
}

::uObject* MixerBase__Register__Fuse_Navigation_NavigationGotoMode(MixerBase* __this, ::app::Uno::UX::Property__Fuse_Navigation_NavigationGotoMode* property, int mode)
{
    ::uObject* master;

    if (!::uPtr< ::app::Uno::Collections::Dictionary__object__object*>(__this->Masters)->TryGetValue((::uObject*)property, &master))
    {
        master = ::uCast< ::uObject*>((::uObject*)__this->CreateMaster__Fuse_Navigation_NavigationGotoMode(property, __this), ::uObject__typeof());
        ::uPtr< ::app::Uno::Collections::Dictionary__object__object*>(__this->Masters)->Add((::uObject*)property, master);
    }

    ::app::Fuse::Animations::MasterBase__Fuse_Navigation_NavigationGotoMode* masterT = ::uCast< ::app::Fuse::Animations::MasterBase__Fuse_Navigation_NavigationGotoMode*>(master, ::app::Fuse::Animations::MasterBase__Fuse_Navigation_NavigationGotoMode__typeof());
    return (::uObject*)::app::Fuse::Animations::MixerHandle__Fuse_Navigation_NavigationGotoMode__New_1(NULL, masterT, mode, 0);
}

::uObject* MixerBase__Register__Fuse_Navigation_SnapTo(MixerBase* __this, ::app::Uno::UX::Property__Fuse_Navigation_SnapTo* property, int mode)
{
    ::uObject* master;

    if (!::uPtr< ::app::Uno::Collections::Dictionary__object__object*>(__this->Masters)->TryGetValue((::uObject*)property, &master))
    {
        master = ::uCast< ::uObject*>((::uObject*)__this->CreateMaster__Fuse_Navigation_SnapTo(property, __this), ::uObject__typeof());
        ::uPtr< ::app::Uno::Collections::Dictionary__object__object*>(__this->Masters)->Add((::uObject*)property, master);
    }

    ::app::Fuse::Animations::MasterBase__Fuse_Navigation_SnapTo* masterT = ::uCast< ::app::Fuse::Animations::MasterBase__Fuse_Navigation_SnapTo*>(master, ::app::Fuse::Animations::MasterBase__Fuse_Navigation_SnapTo__typeof());
    return (::uObject*)::app::Fuse::Animations::MixerHandle__Fuse_Navigation_SnapTo__New_1(NULL, masterT, mode, 0);
}

::uObject* MixerBase__Register__Fuse_Navigation_SwipeDirection(MixerBase* __this, ::app::Uno::UX::Property__Fuse_Navigation_SwipeDirection* property, int mode)
{
    ::uObject* master;

    if (!::uPtr< ::app::Uno::Collections::Dictionary__object__object*>(__this->Masters)->TryGetValue((::uObject*)property, &master))
    {
        master = ::uCast< ::uObject*>((::uObject*)__this->CreateMaster__Fuse_Navigation_SwipeDirection(property, __this), ::uObject__typeof());
        ::uPtr< ::app::Uno::Collections::Dictionary__object__object*>(__this->Masters)->Add((::uObject*)property, master);
    }

    ::app::Fuse::Animations::MasterBase__Fuse_Navigation_SwipeDirection* masterT = ::uCast< ::app::Fuse::Animations::MasterBase__Fuse_Navigation_SwipeDirection*>(master, ::app::Fuse::Animations::MasterBase__Fuse_Navigation_SwipeDirection__typeof());
    return (::uObject*)::app::Fuse::Animations::MixerHandle__Fuse_Navigation_SwipeDirection__New_1(NULL, masterT, mode, 0);
}

::uObject* MixerBase__Register__Fuse_Navigation_SwipeEnds(MixerBase* __this, ::app::Uno::UX::Property__Fuse_Navigation_SwipeEnds* property, int mode)
{
    ::uObject* master;

    if (!::uPtr< ::app::Uno::Collections::Dictionary__object__object*>(__this->Masters)->TryGetValue((::uObject*)property, &master))
    {
        master = ::uCast< ::uObject*>((::uObject*)__this->CreateMaster__Fuse_Navigation_SwipeEnds(property, __this), ::uObject__typeof());
        ::uPtr< ::app::Uno::Collections::Dictionary__object__object*>(__this->Masters)->Add((::uObject*)property, master);
    }

    ::app::Fuse::Animations::MasterBase__Fuse_Navigation_SwipeEnds* masterT = ::uCast< ::app::Fuse::Animations::MasterBase__Fuse_Navigation_SwipeEnds*>(master, ::app::Fuse::Animations::MasterBase__Fuse_Navigation_SwipeEnds__typeof());
    return (::uObject*)::app::Fuse::Animations::MixerHandle__Fuse_Navigation_SwipeEnds__New_1(NULL, masterT, mode, 0);
}

::uObject* MixerBase__Register__Fuse_Node(MixerBase* __this, ::app::Uno::UX::Property__Fuse_Node* property, int mode)
{
    ::uObject* master;

    if (!::uPtr< ::app::Uno::Collections::Dictionary__object__object*>(__this->Masters)->TryGetValue((::uObject*)property, &master))
    {
        master = ::uCast< ::uObject*>((::uObject*)__this->CreateMaster__Fuse_Node(property, __this), ::uObject__typeof());
        ::uPtr< ::app::Uno::Collections::Dictionary__object__object*>(__this->Masters)->Add((::uObject*)property, master);
    }

    ::app::Fuse::Animations::MasterBase__Fuse_Node* masterT = ::uCast< ::app::Fuse::Animations::MasterBase__Fuse_Node*>(master, ::app::Fuse::Animations::MasterBase__Fuse_Node__typeof());
    return (::uObject*)::app::Fuse::Animations::MixerHandle__Fuse_Node__New_1(NULL, masterT, mode, 0);
}

::uObject* MixerBase__Register__Fuse_Resources_ImageSource(MixerBase* __this, ::app::Uno::UX::Property__Fuse_Resources_ImageSource* property, int mode)
{
    ::uObject* master;

    if (!::uPtr< ::app::Uno::Collections::Dictionary__object__object*>(__this->Masters)->TryGetValue((::uObject*)property, &master))
    {
        master = ::uCast< ::uObject*>((::uObject*)__this->CreateMaster__Fuse_Resources_ImageSource(property, __this), ::uObject__typeof());
        ::uPtr< ::app::Uno::Collections::Dictionary__object__object*>(__this->Masters)->Add((::uObject*)property, master);
    }

    ::app::Fuse::Animations::MasterBase__Fuse_Resources_ImageSource* masterT = ::uCast< ::app::Fuse::Animations::MasterBase__Fuse_Resources_ImageSource*>(master, ::app::Fuse::Animations::MasterBase__Fuse_Resources_ImageSource__typeof());
    return (::uObject*)::app::Fuse::Animations::MixerHandle__Fuse_Resources_ImageSource__New_1(NULL, masterT, mode, 0);
}

::uObject* MixerBase__Register__Fuse_Triggers_Actions_TriggerDirection(MixerBase* __this, ::app::Uno::UX::Property__Fuse_Triggers_Actions_TriggerDirection* property, int mode)
{
    ::uObject* master;

    if (!::uPtr< ::app::Uno::Collections::Dictionary__object__object*>(__this->Masters)->TryGetValue((::uObject*)property, &master))
    {
        master = ::uCast< ::uObject*>((::uObject*)__this->CreateMaster__Fuse_Triggers_Actions_TriggerDirection(property, __this), ::uObject__typeof());
        ::uPtr< ::app::Uno::Collections::Dictionary__object__object*>(__this->Masters)->Add((::uObject*)property, master);
    }

    ::app::Fuse::Animations::MasterBase__Fuse_Triggers_Actions_TriggerDirection* masterT = ::uCast< ::app::Fuse::Animations::MasterBase__Fuse_Triggers_Actions_TriggerDirection*>(master, ::app::Fuse::Animations::MasterBase__Fuse_Triggers_Actions_TriggerDirection__typeof());
    return (::uObject*)::app::Fuse::Animations::MixerHandle__Fuse_Triggers_Actions_TriggerDirection__New_1(NULL, masterT, mode, 0);
}

::uObject* MixerBase__Register__Fuse_Triggers_State(MixerBase* __this, ::app::Uno::UX::Property__Fuse_Triggers_State* property, int mode)
{
    ::uObject* master;

    if (!::uPtr< ::app::Uno::Collections::Dictionary__object__object*>(__this->Masters)->TryGetValue((::uObject*)property, &master))
    {
        master = ::uCast< ::uObject*>((::uObject*)__this->CreateMaster__Fuse_Triggers_State(property, __this), ::uObject__typeof());
        ::uPtr< ::app::Uno::Collections::Dictionary__object__object*>(__this->Masters)->Add((::uObject*)property, master);
    }

    ::app::Fuse::Animations::MasterBase__Fuse_Triggers_State* masterT = ::uCast< ::app::Fuse::Animations::MasterBase__Fuse_Triggers_State*>(master, ::app::Fuse::Animations::MasterBase__Fuse_Triggers_State__typeof());
    return (::uObject*)::app::Fuse::Animations::MixerHandle__Fuse_Triggers_State__New_1(NULL, masterT, mode, 0);
}

::uObject* MixerBase__Register__Fuse_Triggers_StateTransition(MixerBase* __this, ::app::Uno::UX::Property__Fuse_Triggers_StateTransition* property, int mode)
{
    ::uObject* master;

    if (!::uPtr< ::app::Uno::Collections::Dictionary__object__object*>(__this->Masters)->TryGetValue((::uObject*)property, &master))
    {
        master = ::uCast< ::uObject*>((::uObject*)__this->CreateMaster__Fuse_Triggers_StateTransition(property, __this), ::uObject__typeof());
        ::uPtr< ::app::Uno::Collections::Dictionary__object__object*>(__this->Masters)->Add((::uObject*)property, master);
    }

    ::app::Fuse::Animations::MasterBase__Fuse_Triggers_StateTransition* masterT = ::uCast< ::app::Fuse::Animations::MasterBase__Fuse_Triggers_StateTransition*>(master, ::app::Fuse::Animations::MasterBase__Fuse_Triggers_StateTransition__typeof());
    return (::uObject*)::app::Fuse::Animations::MixerHandle__Fuse_Triggers_StateTransition__New_1(NULL, masterT, mode, 0);
}

::uObject* MixerBase__Register__Fuse_Triggers_TriggerBypassMode(MixerBase* __this, ::app::Uno::UX::Property__Fuse_Triggers_TriggerBypassMode* property, int mode)
{
    ::uObject* master;

    if (!::uPtr< ::app::Uno::Collections::Dictionary__object__object*>(__this->Masters)->TryGetValue((::uObject*)property, &master))
    {
        master = ::uCast< ::uObject*>((::uObject*)__this->CreateMaster__Fuse_Triggers_TriggerBypassMode(property, __this), ::uObject__typeof());
        ::uPtr< ::app::Uno::Collections::Dictionary__object__object*>(__this->Masters)->Add((::uObject*)property, master);
    }

    ::app::Fuse::Animations::MasterBase__Fuse_Triggers_TriggerBypassMode* masterT = ::uCast< ::app::Fuse::Animations::MasterBase__Fuse_Triggers_TriggerBypassMode*>(master, ::app::Fuse::Animations::MasterBase__Fuse_Triggers_TriggerBypassMode__typeof());
    return (::uObject*)::app::Fuse::Animations::MixerHandle__Fuse_Triggers_TriggerBypassMode__New_1(NULL, masterT, mode, 0);
}

::uObject* MixerBase__Register__int(MixerBase* __this, ::app::Uno::UX::Property__int* property, int mode)
{
    ::uObject* master;

    if (!::uPtr< ::app::Uno::Collections::Dictionary__object__object*>(__this->Masters)->TryGetValue((::uObject*)property, &master))
    {
        master = ::uCast< ::uObject*>((::uObject*)__this->CreateMaster__int(property, __this), ::uObject__typeof());
        ::uPtr< ::app::Uno::Collections::Dictionary__object__object*>(__this->Masters)->Add((::uObject*)property, master);
    }

    ::app::Fuse::Animations::MasterBase__int* masterT = ::uCast< ::app::Fuse::Animations::MasterBase__int*>(master, ::app::Fuse::Animations::MasterBase__int__typeof());
    return (::uObject*)::app::Fuse::Animations::MixerHandle__int__New_1(NULL, masterT, mode, 0);
}

::uObject* MixerBase__Register__int2(MixerBase* __this, ::app::Uno::UX::Property__int2* property, int mode)
{
    ::uObject* master;

    if (!::uPtr< ::app::Uno::Collections::Dictionary__object__object*>(__this->Masters)->TryGetValue((::uObject*)property, &master))
    {
        master = ::uCast< ::uObject*>((::uObject*)__this->CreateMaster__int2(property, __this), ::uObject__typeof());
        ::uPtr< ::app::Uno::Collections::Dictionary__object__object*>(__this->Masters)->Add((::uObject*)property, master);
    }

    ::app::Fuse::Animations::MasterBase__int2* masterT = ::uCast< ::app::Fuse::Animations::MasterBase__int2*>(master, ::app::Fuse::Animations::MasterBase__int2__typeof());
    return (::uObject*)::app::Fuse::Animations::MixerHandle__int2__New_1(NULL, masterT, mode, 0);
}

::uObject* MixerBase__Register__int3(MixerBase* __this, ::app::Uno::UX::Property__int3* property, int mode)
{
    ::uObject* master;

    if (!::uPtr< ::app::Uno::Collections::Dictionary__object__object*>(__this->Masters)->TryGetValue((::uObject*)property, &master))
    {
        master = ::uCast< ::uObject*>((::uObject*)__this->CreateMaster__int3(property, __this), ::uObject__typeof());
        ::uPtr< ::app::Uno::Collections::Dictionary__object__object*>(__this->Masters)->Add((::uObject*)property, master);
    }

    ::app::Fuse::Animations::MasterBase__int3* masterT = ::uCast< ::app::Fuse::Animations::MasterBase__int3*>(master, ::app::Fuse::Animations::MasterBase__int3__typeof());
    return (::uObject*)::app::Fuse::Animations::MixerHandle__int3__New_1(NULL, masterT, mode, 0);
}

::uObject* MixerBase__Register__int4(MixerBase* __this, ::app::Uno::UX::Property__int4* property, int mode)
{
    ::uObject* master;

    if (!::uPtr< ::app::Uno::Collections::Dictionary__object__object*>(__this->Masters)->TryGetValue((::uObject*)property, &master))
    {
        master = ::uCast< ::uObject*>((::uObject*)__this->CreateMaster__int4(property, __this), ::uObject__typeof());
        ::uPtr< ::app::Uno::Collections::Dictionary__object__object*>(__this->Masters)->Add((::uObject*)property, master);
    }

    ::app::Fuse::Animations::MasterBase__int4* masterT = ::uCast< ::app::Fuse::Animations::MasterBase__int4*>(master, ::app::Fuse::Animations::MasterBase__int4__typeof());
    return (::uObject*)::app::Fuse::Animations::MixerHandle__int4__New_1(NULL, masterT, mode, 0);
}

::uObject* MixerBase__Register__long(MixerBase* __this, ::app::Uno::UX::Property__long* property, int mode)
{
    ::uObject* master;

    if (!::uPtr< ::app::Uno::Collections::Dictionary__object__object*>(__this->Masters)->TryGetValue((::uObject*)property, &master))
    {
        master = ::uCast< ::uObject*>((::uObject*)__this->CreateMaster__long(property, __this), ::uObject__typeof());
        ::uPtr< ::app::Uno::Collections::Dictionary__object__object*>(__this->Masters)->Add((::uObject*)property, master);
    }

    ::app::Fuse::Animations::MasterBase__long* masterT = ::uCast< ::app::Fuse::Animations::MasterBase__long*>(master, ::app::Fuse::Animations::MasterBase__long__typeof());
    return (::uObject*)::app::Fuse::Animations::MixerHandle__long__New_1(NULL, masterT, mode, 0);
}

::uObject* MixerBase__Register__object(MixerBase* __this, ::app::Uno::UX::Property__object* property, int mode)
{
    ::uObject* master;

    if (!::uPtr< ::app::Uno::Collections::Dictionary__object__object*>(__this->Masters)->TryGetValue((::uObject*)property, &master))
    {
        master = ::uCast< ::uObject*>((::uObject*)__this->CreateMaster__object(property, __this), ::uObject__typeof());
        ::uPtr< ::app::Uno::Collections::Dictionary__object__object*>(__this->Masters)->Add((::uObject*)property, master);
    }

    ::app::Fuse::Animations::MasterBase__object* masterT = ::uCast< ::app::Fuse::Animations::MasterBase__object*>(master, ::app::Fuse::Animations::MasterBase__object__typeof());
    return (::uObject*)::app::Fuse::Animations::MixerHandle__object__New_1(NULL, masterT, mode, 0);
}

::uObject* MixerBase__Register__short(MixerBase* __this, ::app::Uno::UX::Property__short* property, int mode)
{
    ::uObject* master;

    if (!::uPtr< ::app::Uno::Collections::Dictionary__object__object*>(__this->Masters)->TryGetValue((::uObject*)property, &master))
    {
        master = ::uCast< ::uObject*>((::uObject*)__this->CreateMaster__short(property, __this), ::uObject__typeof());
        ::uPtr< ::app::Uno::Collections::Dictionary__object__object*>(__this->Masters)->Add((::uObject*)property, master);
    }

    ::app::Fuse::Animations::MasterBase__short* masterT = ::uCast< ::app::Fuse::Animations::MasterBase__short*>(master, ::app::Fuse::Animations::MasterBase__short__typeof());
    return (::uObject*)::app::Fuse::Animations::MixerHandle__short__New_1(NULL, masterT, mode, 0);
}

::uObject* MixerBase__Register__string(MixerBase* __this, ::app::Uno::UX::Property__string* property, int mode)
{
    ::uObject* master;

    if (!::uPtr< ::app::Uno::Collections::Dictionary__object__object*>(__this->Masters)->TryGetValue((::uObject*)property, &master))
    {
        master = ::uCast< ::uObject*>((::uObject*)__this->CreateMaster__string(property, __this), ::uObject__typeof());
        ::uPtr< ::app::Uno::Collections::Dictionary__object__object*>(__this->Masters)->Add((::uObject*)property, master);
    }

    ::app::Fuse::Animations::MasterBase__string* masterT = ::uCast< ::app::Fuse::Animations::MasterBase__string*>(master, ::app::Fuse::Animations::MasterBase__string__typeof());
    return (::uObject*)::app::Fuse::Animations::MixerHandle__string__New_1(NULL, masterT, mode, 0);
}

::uObject* MixerBase__Register__Uno_EventArgs(MixerBase* __this, ::app::Uno::UX::Property__Uno_EventArgs* property, int mode)
{
    ::uObject* master;

    if (!::uPtr< ::app::Uno::Collections::Dictionary__object__object*>(__this->Masters)->TryGetValue((::uObject*)property, &master))
    {
        master = ::uCast< ::uObject*>((::uObject*)__this->CreateMaster__Uno_EventArgs(property, __this), ::uObject__typeof());
        ::uPtr< ::app::Uno::Collections::Dictionary__object__object*>(__this->Masters)->Add((::uObject*)property, master);
    }

    ::app::Fuse::Animations::MasterBase__Uno_EventArgs* masterT = ::uCast< ::app::Fuse::Animations::MasterBase__Uno_EventArgs*>(master, ::app::Fuse::Animations::MasterBase__Uno_EventArgs__typeof());
    return (::uObject*)::app::Fuse::Animations::MixerHandle__Uno_EventArgs__New_1(NULL, masterT, mode, 0);
}

::uObject* MixerBase__Register__Uno_Platform_iOS_StatusBarStyle(MixerBase* __this, ::app::Uno::UX::Property__Uno_Platform_iOS_StatusBarStyle* property, int mode)
{
    ::uObject* master;

    if (!::uPtr< ::app::Uno::Collections::Dictionary__object__object*>(__this->Masters)->TryGetValue((::uObject*)property, &master))
    {
        master = ::uCast< ::uObject*>((::uObject*)__this->CreateMaster__Uno_Platform_iOS_StatusBarStyle(property, __this), ::uObject__typeof());
        ::uPtr< ::app::Uno::Collections::Dictionary__object__object*>(__this->Masters)->Add((::uObject*)property, master);
    }

    ::app::Fuse::Animations::MasterBase__Uno_Platform_iOS_StatusBarStyle* masterT = ::uCast< ::app::Fuse::Animations::MasterBase__Uno_Platform_iOS_StatusBarStyle*>(master, ::app::Fuse::Animations::MasterBase__Uno_Platform_iOS_StatusBarStyle__typeof());
    return (::uObject*)::app::Fuse::Animations::MixerHandle__Uno_Platform_iOS_StatusBarStyle__New_1(NULL, masterT, mode, 0);
}

::uObject* MixerBase__Register__Uno_UX_FileSource(MixerBase* __this, ::app::Uno::UX::Property__Uno_UX_FileSource* property, int mode)
{
    ::uObject* master;

    if (!::uPtr< ::app::Uno::Collections::Dictionary__object__object*>(__this->Masters)->TryGetValue((::uObject*)property, &master))
    {
        master = ::uCast< ::uObject*>((::uObject*)__this->CreateMaster__Uno_UX_FileSource(property, __this), ::uObject__typeof());
        ::uPtr< ::app::Uno::Collections::Dictionary__object__object*>(__this->Masters)->Add((::uObject*)property, master);
    }

    ::app::Fuse::Animations::MasterBase__Uno_UX_FileSource* masterT = ::uCast< ::app::Fuse::Animations::MasterBase__Uno_UX_FileSource*>(master, ::app::Fuse::Animations::MasterBase__Uno_UX_FileSource__typeof());
    return (::uObject*)::app::Fuse::Animations::MixerHandle__Uno_UX_FileSource__New_1(NULL, masterT, mode, 0);
}

::uObject* MixerBase__RegisterTransform(MixerBase* __this, ::app::Fuse::Node* element, int mode, int priority)
{
    ::uObject* master;

    if (!::uPtr< ::app::Fuse::Properties*>(::uPtr< ::app::Fuse::Node*>(element)->Properties())->TryGet(__this->_propHandle, &master))
    {
        master = (::uObject*)__this->CreateMasterTransform(element, __this);
        ::uPtr< ::app::Fuse::Properties*>(::uPtr< ::app::Fuse::Node*>(element)->Properties())->Set(__this->_propHandle, master);
    }

    ::app::Fuse::Animations::MasterBase__Fuse_Transform* masterT = ::uCast< ::app::Fuse::Animations::MasterBase__Fuse_Transform*>(master, ::app::Fuse::Animations::MasterBase__Fuse_Transform__typeof());
    return (::uObject*)::app::Fuse::Animations::MixerHandle__Fuse_Transform__New_1(NULL, masterT, mode, priority);
}

void MixerBase__Unused(MixerBase* __this, ::uObject* mb)
{
    ::uObject* prop = ::uAs< ::uObject*>(mb, ::app::Fuse::Animations::MasterPropertyGet__typeof());

    if (prop != NULL)
    {
        ::uPtr< ::app::Uno::Collections::Dictionary__object__object*>(__this->Masters)->Remove(::app::Fuse::Animations::MasterPropertyGet::GetPropertyObject(::uPtr< ::uObject*>(prop)));
    }

    ::app::Fuse::Animations::MasterTransform* trans = ::uAs< ::app::Fuse::Animations::MasterTransform*>(mb, ::app::Fuse::Animations::MasterTransform__typeof());

    if (trans != NULL)
    {
        ::uPtr< ::app::Fuse::Properties*>(::uPtr< ::app::Fuse::Node*>(::uPtr< ::app::Fuse::Animations::MasterTransform*>(trans)->Node)->Properties())->Clear(__this->_propHandle);
    }
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Animations\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

::uEnumType* MixOp__typeof()
{
    static ::uStaticStrong< ::uEnumType*> type;
    if (type != NULL) return type;

    type = ::uAllocEnumType("Fuse.Animations.MixOp", ::app::Uno::Int__typeof(), 2);

    type->SetLiterals(
        "Add", 0LL,
        "Weight", 1LL);

    ::uRegisterType(type);
    return type;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Animations\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

Move__uType* Move__typeof()
{
    static ::uStaticStrong<Move__uType*> type;
    if (type != NULL) return type;

    type = (Move__uType*)::uAllocClassType(sizeof(Move__uType), "Fuse.Animations.Move", false, 0, 2, 0);

    type->SetBaseType(::app::Fuse::Animations::TransformAnimator__Fuse_Translation__typeof());
    type->__fp_Update = (void(*)(::app::Fuse::Animations::TransformAnimator__Fuse_Translation*, ::app::Fuse::Node*, ::app::Fuse::Translation*, ::app::Uno::Float4))Move__Update;

    type->SetStrongRefs(
        "_RelativeNode", offsetof(Move, _RelativeNode),
        "_relativeTo", offsetof(Move, _relativeTo));

    type->SetFields(1,
        ::uNewField("_relativeTo", NULL, offsetof(Move, _relativeTo), ::app::Fuse::ITranslationMode__typeof()));

    type->SetFunctions(5,
        ::uNewFunction("get_RelativeNode", Move__get_RelativeNode, 0, false, ::app::Fuse::Node__typeof()),
        ::uNewFunction("get_RelativeTo", Move__get_RelativeTo, 0, false, ::app::Fuse::ITranslationMode__typeof()),
        ::uNewFunction(".ctor", Move__New_1, 0, true, Move__typeof()),
        ::uNewFunctionVoid("set_RelativeNode", Move__set_RelativeNode, 0, false, ::app::Fuse::Node__typeof()),
        ::uNewFunctionVoid("set_RelativeTo", Move__set_RelativeTo, 0, false, ::app::Fuse::ITranslationMode__typeof()));

    ::uRegisterType(type);
    return type;
}

void Move___ObjInit_3(Move* __this)
{
    __this->_relativeTo = ::app::Fuse::TranslationModes__Local;
    ::app::Fuse::Animations::TransformAnimator__Fuse_Translation___ObjInit_2(__this);
    __this->Priority(1000);
}

::app::Fuse::Node* Move__get_RelativeNode(Move* __this)
{
    return __this->_RelativeNode;
}

::uObject* Move__get_RelativeTo(Move* __this)
{
    return __this->_relativeTo;
}

Move* Move__New_1(::uStatic* __this)
{
    Move* inst = (Move*)::uAllocObject(sizeof(Move), Move__typeof());
    inst->_ObjInit_3();
    return inst;
}

void Move__set_RelativeNode(Move* __this, ::app::Fuse::Node* value)
{
    __this->_RelativeNode = value;
}

void Move__set_RelativeTo(Move* __this, ::uObject* value)
{
    __this->_relativeTo = value;
}

void Move__Update(Move* __this, ::app::Fuse::Node* elm, ::app::Fuse::Translation* t, ::app::Uno::Float4 value)
{
    ::app::Fuse::Node* ind_123;
    ::uPtr< ::app::Fuse::Translation*>(t)->RelativeNode((ind_123 = __this->RelativeNode(), (ind_123 != NULL) ? ind_123 : elm));
    t->RelativeTo(__this->RelativeTo());
    t->Vector(::app::Uno::Float3__New_2(NULL, value.X, value.Y, value.Z));
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Animations\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

Nothing__uType* Nothing__typeof()
{
    static ::uStaticStrong<Nothing__uType*> type;
    if (type != NULL) return type;

    type = (Nothing__uType*)::uAllocClassType(sizeof(Nothing__uType), "Fuse.Animations.Nothing", false, 0, 0, 0);

    type->SetBaseType(::app::Fuse::Animations::TrackAnimator__typeof());
    type->__fp_CreateState = (::app::Fuse::Animations::AnimatorState*(*)(::app::Fuse::Animations::Animator*, ::app::Fuse::Animations::CreateStateParams*))Nothing__CreateState;

    type->SetFunctions(1,
        ::uNewFunction(".ctor", Nothing__New_1, 0, true, Nothing__typeof()));

    ::uRegisterType(type);
    return type;
}

void Nothing___ObjInit_2(Nothing* __this)
{
    ::app::Fuse::Animations::TrackAnimator___ObjInit_1(__this);
}

::app::Fuse::Animations::AnimatorState* Nothing__CreateState(Nothing* __this, ::app::Fuse::Animations::CreateStateParams* p)
{
    return (::app::Fuse::Animations::AnimatorState*)::app::Fuse::Animations::NothingAnimatorState__New_1(NULL, __this, p);
}

Nothing* Nothing__New_1(::uStatic* __this)
{
    Nothing* inst = (Nothing*)::uAllocObject(sizeof(Nothing), Nothing__typeof());
    inst->_ObjInit_2();
    return inst;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Animations\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

NothingAnimatorState__uType* NothingAnimatorState__typeof()
{
    static ::uStaticStrong<NothingAnimatorState__uType*> type;
    if (type != NULL) return type;

    type = (NothingAnimatorState__uType*)::uAllocClassType(sizeof(NothingAnimatorState__uType), "Fuse.Animations.NothingAnimatorState", false, 0, 0, 0);

    type->SetBaseType(::app::Fuse::Animations::TrackAnimatorState__typeof());

    type->SetFunctions(1,
        ::uNewFunction(".ctor", NothingAnimatorState__New_1, 0, true, NothingAnimatorState__typeof(), ::app::Fuse::Animations::Nothing__typeof(), ::app::Fuse::Animations::CreateStateParams__typeof()));

    ::uRegisterType(type);
    return type;
}

void NothingAnimatorState___ObjInit_2(NothingAnimatorState* __this, ::app::Fuse::Animations::Nothing* animator, ::app::Fuse::Animations::CreateStateParams* p)
{
    ::app::Fuse::Animations::TrackAnimatorState___ObjInit_1(__this, (::app::Fuse::Animations::TrackAnimator*)animator, p, NULL);
}

NothingAnimatorState* NothingAnimatorState__New_1(::uStatic* __this, ::app::Fuse::Animations::Nothing* animator, ::app::Fuse::Animations::CreateStateParams* p)
{
    NothingAnimatorState* inst = (NothingAnimatorState*)::uAllocObject(sizeof(NothingAnimatorState), NothingAnimatorState__typeof());
    inst->_ObjInit_2(animator, p);
    return inst;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Animations\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

OpenAnimator__uType* OpenAnimator__typeof()
{
    static ::uStaticStrong<OpenAnimator__uType*> type;
    if (type != NULL) return type;

    type = (OpenAnimator__uType*)::uAllocClassType(sizeof(OpenAnimator__uType), "Fuse.Animations.OpenAnimator", false, 0, 0, 0);

    type->SetBaseType(::app::Fuse::Animations::Animator__typeof());
    type->__fp_get_AnimatorVariant = (int(*)(::app::Fuse::Animations::Animator*))OpenAnimator__get_AnimatorVariant;
    type->__fp_GetDurationWithDelay = (double(*)(::app::Fuse::Animations::Animator*, int))OpenAnimator__GetDurationWithDelay;

    type->SetFields(2,
        ::uNewField("_duration", NULL, offsetof(OpenAnimator, _duration), ::app::Uno::Double__typeof()),
        ::uNewField("_hasDuration", NULL, offsetof(OpenAnimator, _hasDuration), ::app::Uno::Bool__typeof()));

    type->SetFunctions(5,
        ::uNewFunction("get_Duration", OpenAnimator__get_Duration, 0, false, ::app::Uno::Double__typeof()),
        ::uNewFunction("get_HasDuration", OpenAnimator__get_HasDuration, 0, false, ::app::Uno::Bool__typeof()),
        ::uNewFunction("GetDelay", OpenAnimator__GetDelay, 0, false, ::app::Uno::Double__typeof(), ::app::Fuse::Animations::AnimationVariant__typeof(), ::app::Uno::Double__typeof()),
        ::uNewFunctionVoid("ResetDuration", OpenAnimator__ResetDuration, 0, false),
        ::uNewFunctionVoid("set_Duration", OpenAnimator__set_Duration, 0, false, ::app::Uno::Double__typeof()));

    ::uRegisterType(type);
    return type;
}

void OpenAnimator___ObjInit_1(OpenAnimator* __this)
{
    ::app::Fuse::Animations::Animator___ObjInit(__this);
}

int OpenAnimator__get_AnimatorVariant(OpenAnimator* __this)
{
    return 1;
}

double OpenAnimator__get_Duration(OpenAnimator* __this)
{
    return __this->_duration;
}

bool OpenAnimator__get_HasDuration(OpenAnimator* __this)
{
    return __this->_hasDuration;
}

double OpenAnimator__GetDelay(OpenAnimator* __this, int dir, double totalDuration)
{
    return __this->Delay();
}

double OpenAnimator__GetDurationWithDelay(OpenAnimator* __this, int dir)
{
    return __this->Delay() + __this->Duration();
}

void OpenAnimator__ResetDuration(OpenAnimator* __this)
{
    __this->_duration = 0.0;
    __this->_hasDuration = false;
}

void OpenAnimator__set_Duration(OpenAnimator* __this, double value)
{
    __this->_duration = value;
    __this->_hasDuration = true;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Animations\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

OpenAnimatorState__uType* OpenAnimatorState__typeof()
{
    static ::uStaticStrong<OpenAnimatorState__uType*> type;
    if (type != NULL) return type;

    type = (OpenAnimatorState__uType*)::uAllocClassType(sizeof(OpenAnimatorState__uType), "Fuse.Animations.OpenAnimatorState", false, 0, 1, 0);

    type->SetBaseType(::app::Fuse::Animations::AnimatorState__typeof());
    type->__fp_get_IsOpenEnd = (bool(*)(::app::Fuse::Animations::AnimatorState*))OpenAnimatorState__get_IsOpenEnd;
    type->__fp_SeekProgress = (bool(*)(::app::Fuse::Animations::AnimatorState*, double, double, int, double))OpenAnimatorState__SeekProgress;
    type->__fp_SeekTime = (bool(*)(::app::Fuse::Animations::AnimatorState*, double, double, int, double))OpenAnimatorState__SeekTime;

    type->SetStrongRefs(
        "Animator", offsetof(OpenAnimatorState, Animator));

    type->SetFields(2,
        ::uNewField("_seekDone", NULL, offsetof(OpenAnimatorState, _seekDone), ::app::Uno::Bool__typeof()),
        ::uNewField("Animator", NULL, offsetof(OpenAnimatorState, Animator), ::app::Fuse::Animations::OpenAnimator__typeof()));

    type->SetFunctions(1,
        ::uNewFunction("Seek", type->__fp_Seek, offsetof(OpenAnimatorState__uType, __fp_Seek), false, ::app::Uno::Bool__typeof(), ::app::Uno::Bool__typeof(), ::app::Uno::Float__typeof(), ::app::Uno::Float__typeof(), ::app::Fuse::Animations::SeekDirection__typeof()));

    ::uRegisterType(type);
    return type;
}

void OpenAnimatorState___ObjInit_1(OpenAnimatorState* __this, ::app::Fuse::Animations::OpenAnimator* animator, ::app::Fuse::Animations::CreateStateParams* p, ::app::Fuse::Node* useNode)
{
    __this->_seekDone = true;
    ::app::Fuse::Animations::AnimatorState___ObjInit(__this, p, useNode);
    __this->Animator = animator;
}

bool OpenAnimatorState__get_IsOpenEnd(OpenAnimatorState* __this)
{
    return true;
}

bool OpenAnimatorState__SeekProgress(OpenAnimatorState* __this, double progress, double interval, int dir, double strength)
{
    return __this->SeekTime(progress * __this->TotalDuration, interval, dir, strength);
}

bool OpenAnimatorState__SeekTime(OpenAnimatorState* __this, double nominal, double interval, int dir, double strength)
{
    double delay = ::uPtr< ::app::Fuse::Animations::OpenAnimator*>(__this->Animator)->GetDelay(__this->Variant, __this->TotalDuration);
    bool on = (dir == 0) ? (nominal > (delay - 9.9999997473787516e-06)) : (nominal > (delay + 9.9999997473787516e-06));

    if (::uPtr< ::app::Fuse::Animations::OpenAnimator*>(__this->Animator)->HasDuration() && (nominal > ((delay + ::uPtr< ::app::Fuse::Animations::OpenAnimator*>(__this->Animator)->Duration()) - 9.9999997473787516e-06)))
    {
        on = false;
    }

    bool mayEnd = (dir == 0) ? (nominal >= (::uPtr< ::app::Fuse::Animations::OpenAnimator*>(__this->Animator)->GetDurationWithDelay(__this->Variant) - 9.9999997473787516e-06)) : (nominal <= (delay + 9.9999997473787516e-06));

    if (on || !__this->_seekDone)
    {
        __this->_seekDone = __this->Seek(on, (float)interval, (float)strength, dir);
    }

    return __this->_seekDone && mayEnd;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Animations\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

Player__uType* Player__typeof()
{
    static ::uStaticStrong<Player__uType*> type;
    if (type != NULL) return type;

    type = (Player__uType*)::uAllocClassType(sizeof(Player__uType), "Fuse.Animations.Player", false, 0, 8, 0);

    type->SetStrongRefs(
        "_Animation", offsetof(Player, _Animation),
        "_DoneCallback", offsetof(Player, _DoneCallback),
        "_Node", offsetof(Player, _Node),
        "_progress", offsetof(Player, _progress),
        "_states", offsetof(Player, _states),
        "_strength", offsetof(Player, _strength),
        "ProgressUpdated", offsetof(Player, ProgressUpdated),
        "StrengthUpdated", offsetof(Player, StrengthUpdated));

    type->SetFields(8,
        ::uNewField("_isDone", NULL, offsetof(Player, _isDone), ::app::Uno::Bool__typeof()),
        ::uNewField("_isStarted", NULL, offsetof(Player, _isStarted), ::app::Uno::Bool__typeof()),
        ::uNewField("_progress", NULL, offsetof(Player, _progress), ::app::Fuse::Animations::PlayerPart__typeof()),
        ::uNewField("_seekDirection", NULL, offsetof(Player, _seekDirection), ::app::Fuse::Animations::SeekDirection__typeof()),
        ::uNewField("_states", NULL, offsetof(Player, _states), ::uGetArrayType(::app::Fuse::Animations::AnimatorState__typeof())),
        ::uNewField("_strength", NULL, offsetof(Player, _strength), ::app::Fuse::Animations::PlayerPart__typeof()),
        ::uNewField("ProgressUpdated", NULL, offsetof(Player, ProgressUpdated), ::app::Uno::Action__object__typeof()),
        ::uNewField("StrengthUpdated", NULL, offsetof(Player, StrengthUpdated), ::app::Uno::Action__object__typeof()));

    type->SetFunctions(33,
        ::uNewFunctionVoid("CheckUpdate", Player__CheckUpdate, 0, false, ::app::Uno::Bool__typeof()),
        ::uNewFunctionVoid("CheckUpdateAction", Player__CheckUpdateAction, 0, false),
        ::uNewFunctionVoid("Disable", Player__Disable, 0, false),
        ::uNewFunctionVoid("Done", Player__Done, 0, false),
        ::uNewFunctionVoid("FadeIn", Player__FadeIn, 0, false, ::app::Uno::Double__typeof()),
        ::uNewFunctionVoid("FadeOut", Player__FadeOut, 0, false, ::app::Uno::Double__typeof()),
        ::uNewFunction("get_Animation", Player__get_Animation, 0, false, ::app::Fuse::Animations::TriggerAnimation__typeof()),
        ::uNewFunction("get_AnyEffect", Player__get_AnyEffect, 0, false, ::app::Uno::Bool__typeof()),
        ::uNewFunction("get_DoneCallback", Player__get_DoneCallback, 0, false, ::app::Uno::Action__object__typeof()),
        ::uNewFunction("get_IsDone", Player__get_IsDone, 0, false, ::app::Uno::Bool__typeof()),
        ::uNewFunction("get_IsSyncState", Player__get_IsSyncState, 0, false, ::app::Uno::Bool__typeof()),
        ::uNewFunction("get_Node", Player__get_Node, 0, false, ::app::Fuse::Node__typeof()),
        ::uNewFunction("get_Progress", Player__get_Progress, 0, false, ::app::Uno::Double__typeof()),
        ::uNewFunction("get_RemainTime", Player__get_RemainTime, 0, false, ::app::Uno::Double__typeof()),
        ::uNewFunction("get_States", Player__get_States, 0, false, ::uGetArrayType(::app::Fuse::Animations::AnimatorState__typeof())),
        ::uNewFunction("get_Strength", Player__get_Strength, 0, false, ::app::Uno::Double__typeof()),
        ::uNewFunction("get_TotalDuration", Player__get_TotalDuration, 0, false, ::app::Uno::Double__typeof()),
        ::uNewFunction("get_Variant", Player__get_Variant, 0, false, ::app::Fuse::Animations::AnimationVariant__typeof()),
        ::uNewFunction(".ctor", Player__New_1, 0, true, Player__typeof(), ::app::Fuse::Node__typeof(), ::app::Fuse::Animations::TriggerAnimation__typeof(), ::app::Fuse::Animations::AnimationVariant__typeof()),
        ::uNewFunctionVoid("PlayToEnd", Player__PlayToEnd, 0, false),
        ::uNewFunctionVoid("PlayToProgress", Player__PlayToProgress, 0, false, ::app::Uno::Double__typeof()),
        ::uNewFunctionVoid("PlayToStart", Player__PlayToStart, 0, false),
        ::uNewFunctionVoid("SeekProgress", Player__SeekProgress, 0, false, ::app::Uno::Double__typeof(), ::app::Uno::Bool__typeof()),
        ::uNewFunctionVoid("set_Animation", Player__set_Animation, 0, false, ::app::Fuse::Animations::TriggerAnimation__typeof()),
        ::uNewFunctionVoid("set_DoneCallback", Player__set_DoneCallback, 0, false, ::app::Uno::Action__object__typeof()),
        ::uNewFunctionVoid("set_Node", Player__set_Node, 0, false, ::app::Fuse::Node__typeof()),
        ::uNewFunctionVoid("set_Strength", Player__set_Strength, 0, false, ::app::Uno::Double__typeof()),
        ::uNewFunctionVoid("set_Variant", Player__set_Variant, 0, false, ::app::Fuse::Animations::AnimationVariant__typeof()),
        ::uNewFunctionVoid("Start", Player__Start, 0, false),
        ::uNewFunctionVoid("Stop", Player__Stop, 0, false),
        ::uNewFunctionVoid("Suspend", Player__Suspend, 0, false),
        ::uNewFunctionVoid("Update", Player__Update, 0, false, ::uObject__typeof(), ::uObject__typeof()),
        ::uNewFunction("UpdateStates", Player__UpdateStates, 0, false, ::app::Uno::Bool__typeof(), ::app::Uno::Bool__typeof()));

    ::uRegisterType(type);
    return type;
}

void Player___ObjInit(Player* __this, ::app::Fuse::Node* elm, ::app::Fuse::Animations::TriggerAnimation* animation, int variant)
{
    __this->_progress = ::app::Fuse::Animations::PlayerPart__New_1(NULL, 0.0);
    __this->_seekDirection = 1;
    __this->_strength = ::app::Fuse::Animations::PlayerPart__New_1(NULL, 1.0);
    __this->Animation(animation);
    __this->Node(elm);
    __this->Variant(variant);
    ::uPtr< ::app::Fuse::Animations::PlayerPart*>(__this->_progress)->AlterDuration(::uPtr< ::app::Fuse::Animations::TriggerAnimation*>(__this->Animation())->GetTotalDuration(__this->Variant()));
}

void Player__CheckUpdate(Player* __this, bool interval)
{
    bool running = false;

    if (::uPtr< ::app::Fuse::Animations::PlayerPart*>(__this->_progress)->Animate)
    {
        running = true;
        ::uPtr< ::app::Fuse::Animations::PlayerPart*>(__this->_progress)->Step();

        if (::app::Uno::Delegate__op_Inequality(NULL, (::uDelegate*)__this->ProgressUpdated, NULL))
        {
            ::uPtr< ::uDelegate*>(__this->ProgressUpdated)->InvokeVoid< ::uObject*>((::uObject*)__this);
        }
    }

    if (::uPtr< ::app::Fuse::Animations::PlayerPart*>(__this->_strength)->Animate)
    {
        running = true;
        ::uPtr< ::app::Fuse::Animations::PlayerPart*>(__this->_strength)->Step();

        if (::app::Uno::Delegate__op_Inequality(NULL, (::uDelegate*)__this->StrengthUpdated, NULL))
        {
            ::uPtr< ::uDelegate*>(__this->StrengthUpdated)->InvokeVoid< ::uObject*>((::uObject*)__this);
        }
    }

    bool stable = __this->UpdateStates(interval);

    if (stable && !running)
    {
        __this->Stop();
    }
    else
    {
        __this->Start();
    }

    if (!running)
    {
        __this->Done();
    }
}

void Player__CheckUpdateAction(Player* __this)
{
    __this->CheckUpdate(true);
}

void Player__Disable(Player* __this)
{
    __this->Stop();

    if (__this->_states != NULL)
    {
        for (int i = 0; i < ::uPtr< ::uArray*>(__this->_states)->Length(); i++)
        {
            ::uPtr< ::app::Fuse::Animations::AnimatorState*>(::uPtr< ::uArray*>(__this->_states)->Item< ::app::Fuse::Animations::AnimatorState*>(i))->Disable();
        }

        __this->_states = NULL;
    }
}

void Player__Done(Player* __this)
{
    ::uPtr< ::app::Fuse::Animations::PlayerPart*>(__this->_progress)->Animate = false;
    ::uPtr< ::app::Fuse::Animations::PlayerPart*>(__this->_strength)->Animate = false;

    if (!__this->_isDone)
    {
        __this->_isDone = true;

        if (::app::Uno::Delegate__op_Inequality(NULL, (::uDelegate*)__this->DoneCallback(), NULL))
        {
            ::uPtr< ::uDelegate*>(__this->DoneCallback())->InvokeVoid< ::uObject*>((::uObject*)__this);
        }
    }
}

void Player__FadeIn(Player* __this, double time)
{
    ::uPtr< ::app::Fuse::Animations::PlayerPart*>(__this->_strength)->AlterDuration(time);
    ::uPtr< ::app::Fuse::Animations::PlayerPart*>(__this->_strength)->PlayToEnd();
    __this->CheckUpdate(false);
}

void Player__FadeOut(Player* __this, double time)
{
    ::uPtr< ::app::Fuse::Animations::PlayerPart*>(__this->_strength)->AlterDuration(time);
    ::uPtr< ::app::Fuse::Animations::PlayerPart*>(__this->_strength)->PlayToStart();
    __this->CheckUpdate(false);
}

::app::Fuse::Animations::TriggerAnimation* Player__get_Animation(Player* __this)
{
    return __this->_Animation;
}

bool Player__get_AnyEffect(Player* __this)
{
    return (::uPtr< ::app::Fuse::Animations::PlayerPart*>(__this->_progress)->Current > 0.0) && (::uPtr< ::app::Fuse::Animations::PlayerPart*>(__this->_strength)->Current > 0.0);
}

::uDelegate* Player__get_DoneCallback(Player* __this)
{
    return __this->_DoneCallback;
}

bool Player__get_IsDone(Player* __this)
{
    return __this->_isDone;
}

bool Player__get_IsSyncState(Player* __this)
{
    return (::uPtr< ::app::Fuse::Animations::PlayerPart*>(__this->_progress)->Current == 0.0) || (::uPtr< ::app::Fuse::Animations::PlayerPart*>(__this->_progress)->Progress() == 1.0);
}

::app::Fuse::Node* Player__get_Node(Player* __this)
{
    return __this->_Node;
}

double Player__get_Progress(Player* __this)
{
    return ::uPtr< ::app::Fuse::Animations::PlayerPart*>(__this->_progress)->Progress();
}

double Player__get_RemainTime(Player* __this)
{
    if (::uPtr< ::app::Fuse::Animations::PlayerPart*>(__this->_progress)->IsProgress || (::uPtr< ::app::Fuse::Animations::PlayerPart*>(__this->_progress)->Duration < 9.9999997473787516e-06))
    {
        return 0.0;
    }

    return (__this->Variant() == 0) ? (::uPtr< ::app::Fuse::Animations::PlayerPart*>(__this->_progress)->Duration - ::uPtr< ::app::Fuse::Animations::PlayerPart*>(__this->_progress)->Current) : ::uPtr< ::app::Fuse::Animations::PlayerPart*>(__this->_progress)->Current;
}

::uArray* Player__get_States(Player* __this)
{
    if (__this->_states == NULL)
    {
        __this->_states = ::uPtr< ::app::Fuse::Animations::TriggerAnimation*>(__this->Animation())->CreateAnimatorsState(__this->Variant(), __this->Node());
    }

    return __this->_states;
}

double Player__get_Strength(Player* __this)
{
    return ::uPtr< ::app::Fuse::Animations::PlayerPart*>(__this->_strength)->Progress();
}

double Player__get_TotalDuration(Player* __this)
{
    return ::uPtr< ::app::Fuse::Animations::PlayerPart*>(__this->_progress)->Duration;
}

int Player__get_Variant(Player* __this)
{
    return __this->_Variant;
}

Player* Player__New_1(::uStatic* __this, ::app::Fuse::Node* elm, ::app::Fuse::Animations::TriggerAnimation* animation, int variant)
{
    Player* inst = (Player*)::uAllocObject(sizeof(Player), Player__typeof());
    inst->_ObjInit(elm, animation, variant);
    return inst;
}

void Player__PlayToEnd(Player* __this)
{
    __this->_seekDirection = 0;
    ::uPtr< ::app::Fuse::Animations::PlayerPart*>(__this->_progress)->PlayToEnd();
    __this->_isDone = false;
    __this->CheckUpdate(false);
}

void Player__PlayToProgress(Player* __this, double progress)
{
    if (progress != ::uPtr< ::app::Fuse::Animations::PlayerPart*>(__this->_progress)->Progress())
    {
        __this->_seekDirection = (progress > ::uPtr< ::app::Fuse::Animations::PlayerPart*>(__this->_progress)->Progress()) ? 0 : 1;
    }

    ::uPtr< ::app::Fuse::Animations::PlayerPart*>(__this->_progress)->PlayToProgress(progress);
    __this->_isDone = false;
    __this->CheckUpdate(false);
}

void Player__PlayToStart(Player* __this)
{
    __this->_seekDirection = 1;
    ::uPtr< ::app::Fuse::Animations::PlayerPart*>(__this->_progress)->PlayToStart();
    __this->_isDone = false;
    __this->CheckUpdate(false);
}

void Player__SeekProgress(Player* __this, double progress, bool triggerUpdate)
{
    ::uPtr< ::app::Fuse::Animations::PlayerPart*>(__this->_progress)->SeekProgress(progress);
    __this->_isDone = true;
    __this->CheckUpdate(false);

    if (triggerUpdate && ::app::Uno::Delegate__op_Inequality(NULL, (::uDelegate*)__this->ProgressUpdated, NULL))
    {
        ::uPtr< ::uDelegate*>(__this->ProgressUpdated)->InvokeVoid< ::uObject*>((::uObject*)__this);
    }
}

void Player__set_Animation(Player* __this, ::app::Fuse::Animations::TriggerAnimation* value)
{
    __this->_Animation = value;
}

void Player__set_DoneCallback(Player* __this, ::uDelegate* value)
{
    __this->_DoneCallback = value;
}

void Player__set_Node(Player* __this, ::app::Fuse::Node* value)
{
    __this->_Node = value;
}

void Player__set_Strength(Player* __this, double value)
{
    ::uPtr< ::app::Fuse::Animations::PlayerPart*>(__this->_strength)->SeekProgress(value);
    __this->CheckUpdate(false);
}

void Player__set_Variant(Player* __this, int value)
{
    __this->_Variant = value;
}

void Player__Start(Player* __this)
{
    if (!__this->_isStarted)
    {
        __this->_isStarted = true;

        if (__this->Node() != NULL)
        {
            ::uPtr< ::app::Fuse::Node*>(__this->Node())->add_Update(::uNewDelegateNonVirt(::app::Uno::EventHandler__typeof(), (const void*)Player__Update, __this));
        }
        else
        {
            ::app::Fuse::UpdateManager__AddAction(NULL, ::uNewDelegateNonVirt(::app::Uno::Action__typeof(), (const void*)Player__CheckUpdateAction, __this), 0);
        }
    }
}

void Player__Stop(Player* __this)
{
    if (__this->_isStarted)
    {
        __this->_isStarted = false;

        if (__this->Node() != NULL)
        {
            ::uPtr< ::app::Fuse::Node*>(__this->Node())->remove_Update(::uNewDelegateNonVirt(::app::Uno::EventHandler__typeof(), (const void*)Player__Update, __this));
        }
        else
        {
            ::app::Fuse::UpdateManager__RemoveAction(NULL, ::uNewDelegateNonVirt(::app::Uno::Action__typeof(), (const void*)Player__CheckUpdateAction, __this), 0);
        }

        if (!__this->AnyEffect())
        {
            __this->Disable();
        }
    }
}

void Player__Suspend(Player* __this)
{
    ::uPtr< ::app::Fuse::Animations::PlayerPart*>(__this->_progress)->Animate = false;
    ::uPtr< ::app::Fuse::Animations::PlayerPart*>(__this->_strength)->Animate = false;
    __this->CheckUpdate(false);
}

void Player__Update(Player* __this, ::uObject* s, ::uObject* a)
{
    __this->CheckUpdate(true);
}

bool Player__UpdateStates(Player* __this, bool isInterval)
{
    ::uArray* array_123;
    int index_124 = int();
    int length_125 = int();
    bool allStable = true;
    double interval = isInterval ? ::app::Fuse::Time__get_FrameInterval(NULL) : 0.0;

    if (__this->_seekDirection == 1)
    {
        interval = -interval;
    }

    for (array_123 = __this->States(), index_124 = 0, length_125 = ::uPtr< ::uArray*>(array_123)->Length(); index_124 < length_125; ++index_124)
    {
        ::app::Fuse::Animations::AnimatorState* s = ::uPtr< ::uArray*>(array_123)->Item< ::app::Fuse::Animations::AnimatorState*>(index_124);
        bool stable = bool();

        if (::uPtr< ::app::Fuse::Animations::PlayerPart*>(__this->_progress)->IsProgress)
        {
            stable = ::uPtr< ::app::Fuse::Animations::AnimatorState*>(s)->SeekProgress(::uPtr< ::app::Fuse::Animations::PlayerPart*>(__this->_progress)->Current, interval, __this->_seekDirection, ::uPtr< ::app::Fuse::Animations::PlayerPart*>(__this->_strength)->Progress());
        }
        else
        {
            stable = s->SeekTime(::uPtr< ::app::Fuse::Animations::PlayerPart*>(__this->_progress)->Current, interval, __this->_seekDirection, ::uPtr< ::app::Fuse::Animations::PlayerPart*>(__this->_strength)->Progress());
        }

        allStable = allStable && stable;
    }

    return allStable;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Animations\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

PlayerPart__uType* PlayerPart__typeof()
{
    static ::uStaticStrong<PlayerPart__uType*> type;
    if (type != NULL) return type;

    type = (PlayerPart__uType*)::uAllocClassType(sizeof(PlayerPart__uType), "Fuse.Animations.PlayerPart", false, 0, 0, 0);

    type->SetFields(7,
        ::uNewField("Animate", NULL, offsetof(PlayerPart, Animate), ::app::Uno::Bool__typeof()),
        ::uNewField("Current", NULL, offsetof(PlayerPart, Current), ::app::Uno::Double__typeof()),
        ::uNewField("Duration", NULL, offsetof(PlayerPart, Duration), ::app::Uno::Double__typeof()),
        ::uNewField("IsProgress", NULL, offsetof(PlayerPart, IsProgress), ::app::Uno::Bool__typeof()),
        ::uNewField("Source", NULL, offsetof(PlayerPart, Source), ::app::Uno::Double__typeof()),
        ::uNewField("SourceTime", NULL, offsetof(PlayerPart, SourceTime), ::app::Uno::Double__typeof()),
        ::uNewField("Target", NULL, offsetof(PlayerPart, Target), ::app::Uno::Double__typeof()));

    type->SetFunctions(9,
        ::uNewFunctionVoid("AlterDuration", PlayerPart__AlterDuration, 0, false, ::app::Uno::Double__typeof()),
        ::uNewFunction("get_Progress", PlayerPart__get_Progress, 0, false, ::app::Uno::Double__typeof()),
        ::uNewFunctionVoid("MarkSource", PlayerPart__MarkSource, 0, false),
        ::uNewFunction(".ctor", PlayerPart__New_1, 0, true, PlayerPart__typeof(), ::app::Uno::Double__typeof()),
        ::uNewFunctionVoid("PlayToEnd", PlayerPart__PlayToEnd, 0, false),
        ::uNewFunctionVoid("PlayToProgress", PlayerPart__PlayToProgress, 0, false, ::app::Uno::Double__typeof()),
        ::uNewFunctionVoid("PlayToStart", PlayerPart__PlayToStart, 0, false),
        ::uNewFunctionVoid("SeekProgress", PlayerPart__SeekProgress, 0, false, ::app::Uno::Double__typeof()),
        ::uNewFunction("Step", PlayerPart__Step, 0, false, ::app::Uno::Bool__typeof()));

    ::uRegisterType(type);
    return type;
}

void PlayerPart___ObjInit(PlayerPart* __this, double currentProgress)
{
    __this->IsProgress = true;
    __this->Current = currentProgress;
}

void PlayerPart__AlterDuration(PlayerPart* __this, double t)
{
    double p = __this->Progress();
    __this->Duration = t;
    __this->SeekProgress(p);
}

double PlayerPart__get_Progress(PlayerPart* __this)
{
    if (__this->IsProgress)
    {
        return __this->Current;
    }
    else
    {
        return ::app::Uno::Math__Clamp(NULL, __this->Current / __this->Duration, 0.0, 1.0);
    }
}

void PlayerPart__MarkSource(PlayerPart* __this)
{
    __this->Source = __this->Current;
    __this->SourceTime = ::app::Fuse::Time__get_FrameTime(NULL);
}

PlayerPart* PlayerPart__New_1(::uStatic* __this, double currentProgress)
{
    PlayerPart* inst = (PlayerPart*)::uAllocObject(sizeof(PlayerPart), PlayerPart__typeof());
    inst->_ObjInit(currentProgress);
    return inst;
}

void PlayerPart__PlayToEnd(PlayerPart* __this)
{
    __this->PlayToProgress(1.0);
}

void PlayerPart__PlayToProgress(PlayerPart* __this, double progress)
{
    __this->Animate = true;
    __this->MarkSource();

    if (__this->Duration < 9.9999997473787516e-06)
    {
        __this->IsProgress = true;
        __this->Target = progress;
    }
    else
    {
        __this->IsProgress = false;
        __this->Target = progress * __this->Duration;
    }
}

void PlayerPart__PlayToStart(PlayerPart* __this)
{
    __this->PlayToProgress(0.0);
}

void PlayerPart__SeekProgress(PlayerPart* __this, double p)
{
    p = ::app::Uno::Math__Clamp(NULL, p, 0.0, 1.0);
    __this->Animate = false;

    if (__this->Duration < 9.9999997473787516e-06)
    {
        __this->IsProgress = true;
        __this->Current = p;
    }
    else
    {
        __this->IsProgress = false;
        __this->Current = p * __this->Duration;
    }
}

bool PlayerPart__Step(PlayerPart* __this)
{
    double elapsed = ::app::Fuse::Time__get_FrameTime(NULL) - __this->SourceTime;

    if (__this->Target > __this->Source)
    {
        __this->Current = __this->IsProgress ? 1.0 : ::app::Uno::Math__Min(NULL, elapsed + __this->Source, __this->Duration);
    }
    else
    {
        __this->Current = __this->IsProgress ? 0.0 : ::app::Uno::Math__Max(NULL, __this->Source - elapsed, 0.0);
    }

    if (((__this->Target >= __this->Source) && (__this->Current >= __this->Target)) || ((__this->Target <= __this->Source) && (__this->Current <= __this->Target)))
    {
        __this->Current = __this->Target;
        __this->Animate = false;
        return true;
    }

    return false;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Animations\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

Resize__uType* Resize__typeof()
{
    static ::uStaticStrong<Resize__uType*> type;
    if (type != NULL) return type;

    type = (Resize__uType*)::uAllocClassType(sizeof(Resize__uType), "Fuse.Animations.Resize", false, 0, 2, 0);

    type->SetBaseType(::app::Fuse::Animations::TrackAnimator__typeof());
    type->__fp_CreateState = (::app::Fuse::Animations::AnimatorState*(*)(::app::Fuse::Animations::Animator*, ::app::Fuse::Animations::CreateStateParams*))Resize__CreateState;

    type->SetStrongRefs(
        "_resizeMode", offsetof(Resize, _resizeMode),
        "_Target", offsetof(Resize, _Target));

    type->SetFields(1,
        ::uNewField("_resizeMode", NULL, offsetof(Resize, _resizeMode), ::app::Fuse::Animations::IResizeMode__typeof()));

    type->SetFunctions(11,
        ::uNewFunction("get_RelativeTo", Resize__get_RelativeTo, 0, false, ::app::Fuse::Animations::IResizeMode__typeof()),
        ::uNewFunction("get_Target", Resize__get_Target, 0, false, ::app::Fuse::Node__typeof()),
        ::uNewFunction("get_Vector", Resize__get_Vector, 0, false, ::app::Uno::Float2__typeof()),
        ::uNewFunction("get_X", Resize__get_X, 0, false, ::app::Uno::Float__typeof()),
        ::uNewFunction("get_Y", Resize__get_Y, 0, false, ::app::Uno::Float__typeof()),
        ::uNewFunction(".ctor", Resize__New_1, 0, true, Resize__typeof()),
        ::uNewFunctionVoid("set_RelativeTo", Resize__set_RelativeTo, 0, false, ::app::Fuse::Animations::IResizeMode__typeof()),
        ::uNewFunctionVoid("set_Target", Resize__set_Target, 0, false, ::app::Fuse::Node__typeof()),
        ::uNewFunctionVoid("set_Vector", Resize__set_Vector, 0, false, ::app::Uno::Float2__typeof()),
        ::uNewFunctionVoid("set_X", Resize__set_X, 0, false, ::app::Uno::Float__typeof()),
        ::uNewFunctionVoid("set_Y", Resize__set_Y, 0, false, ::app::Uno::Float__typeof()));

    ::uRegisterType(type);
    return type;
}

void Resize___ObjInit_2(Resize* __this)
{
    ::app::Fuse::Animations::TrackAnimator___ObjInit_1(__this);
}

::app::Fuse::Animations::AnimatorState* Resize__CreateState(Resize* __this, ::app::Fuse::Animations::CreateStateParams* p)
{
    return (::app::Fuse::Animations::AnimatorState*)::app::Fuse::Animations::ResizeAnimatorState__New_1(NULL, __this, p);
}

::uObject* Resize__get_RelativeTo(Resize* __this)
{
    return __this->_resizeMode;
}

::app::Fuse::Node* Resize__get_Target(Resize* __this)
{
    return __this->_Target;
}

::app::Uno::Float2 Resize__get_Vector(Resize* __this)
{
    ::app::Uno::Float4 ind_123 = __this->_vectorValue;
    return ::app::Uno::Float2__New_2(NULL, ind_123.X, ind_123.Y);
}

float Resize__get_X(Resize* __this)
{
    return __this->_vectorValue.X;
}

float Resize__get_Y(Resize* __this)
{
    return __this->_vectorValue.Y;
}

Resize* Resize__New_1(::uStatic* __this)
{
    Resize* inst = (Resize*)::uAllocObject(sizeof(Resize), Resize__typeof());
    inst->_ObjInit_2();
    return inst;
}

void Resize__set_RelativeTo(Resize* __this, ::uObject* value)
{
    __this->_resizeMode = value;
}

void Resize__set_Target(Resize* __this, ::app::Fuse::Node* value)
{
    __this->_Target = value;
}

void Resize__set_Vector(Resize* __this, ::app::Uno::Float2 value)
{
    ::app::Uno::Float4 ind_124 = ::app::Uno::Float4();
    __this->_vectorValue = ::app::Uno::Float4__New_7(NULL, value, (ind_124 = __this->_vectorValue, ::app::Uno::Float2__New_2(NULL, ind_124.Z, ind_124.W)));
}

void Resize__set_X(Resize* __this, float value)
{
    __this->_vectorValue.X = value;
}

void Resize__set_Y(Resize* __this, float value)
{
    __this->_vectorValue.Y = value;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Animations\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

ResizeAnimatorState__uType* ResizeAnimatorState__typeof()
{
    static ::uStaticStrong<ResizeAnimatorState__uType*> type;
    if (type != NULL) return type;

    type = (ResizeAnimatorState__uType*)::uAllocClassType(sizeof(ResizeAnimatorState__uType), "Fuse.Animations.ResizeAnimatorState", false, 0, 1, 0);

    type->SetBaseType(::app::Fuse::Animations::TrackAnimatorState__typeof());
    type->__fp_SeekValue = (void(*)(::app::Fuse::Animations::TrackAnimatorState*, ::app::Uno::Float4, float))ResizeAnimatorState__SeekValue;

    type->SetStrongRefs(
        "_resize", offsetof(ResizeAnimatorState, _resize));

    type->SetFields(1,
        ::uNewField("_resize", NULL, offsetof(ResizeAnimatorState, _resize), ::app::Fuse::Animations::Resize__typeof()));

    type->SetFunctions(1,
        ::uNewFunction(".ctor", ResizeAnimatorState__New_1, 0, true, ResizeAnimatorState__typeof(), ::app::Fuse::Animations::Resize__typeof(), ::app::Fuse::Animations::CreateStateParams__typeof()));

    ::uRegisterType(type);
    return type;
}

void ResizeAnimatorState___ObjInit_2(ResizeAnimatorState* __this, ::app::Fuse::Animations::Resize* r, ::app::Fuse::Animations::CreateStateParams* p)
{
    ::app::Fuse::Animations::TrackAnimatorState___ObjInit_1(__this, (::app::Fuse::Animations::TrackAnimator*)r, p, ::uPtr< ::app::Fuse::Animations::Resize*>(r)->Target());
    __this->_resize = r;
}

ResizeAnimatorState* ResizeAnimatorState__New_1(::uStatic* __this, ::app::Fuse::Animations::Resize* r, ::app::Fuse::Animations::CreateStateParams* p)
{
    ResizeAnimatorState* inst = (ResizeAnimatorState*)::uAllocObject(sizeof(ResizeAnimatorState), ResizeAnimatorState__typeof());
    inst->_ObjInit_2(r, p);
    return inst;
}

void ResizeAnimatorState__SeekValue(ResizeAnimatorState* __this, ::app::Uno::Float4 value, float strength)
{
    ::uObject* ir = ::uAs< ::uObject*>(__this->Node, ::app::Fuse::Animations::IResize__typeof());

    if (ir == NULL)
    {
        return;
    }

    if (::uPtr< ::app::Fuse::Animations::Resize*>(__this->_resize)->RelativeTo() == NULL)
    {
        return;
    }

    ::app::Uno::Float2 baseSize = ::app::Uno::Float2();
    ::app::Uno::Float2 deltaSize = ::app::Uno::Float2();

    if (::app::Fuse::Animations::IResizeMode::GetSizeChange(::uPtr< ::uObject*>(::uPtr< ::app::Fuse::Animations::Resize*>(__this->_resize)->RelativeTo()), __this->Node, &baseSize, &deltaSize))
    {
        ::app::Uno::Float2 sz = ::app::Uno::Float2__op_Addition_2(NULL, baseSize, ::app::Uno::Float2__op_Multiply_1(NULL, ::app::Uno::Float2__op_Multiply_2(NULL, deltaSize, ::app::Uno::Float2__New_2(NULL, value.X, value.Y)), strength));
        ::app::Fuse::Animations::IResize::SetSize(::uPtr< ::uObject*>(ir), sz);
    }
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Animations\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

Rotate__uType* Rotate__typeof()
{
    static ::uStaticStrong<Rotate__uType*> type;
    if (type != NULL) return type;

    type = (Rotate__uType*)::uAllocClassType(sizeof(Rotate__uType), "Fuse.Animations.Rotate", false, 0, 0, 0);

    type->SetBaseType(::app::Fuse::Animations::TransformAnimator__Fuse_Rotation__typeof());
    type->__fp_Update = (void(*)(::app::Fuse::Animations::TransformAnimator__Fuse_Rotation*, ::app::Fuse::Node*, ::app::Fuse::Rotation*, ::app::Uno::Float4))Rotate__Update;

    type->SetFunctions(9,
        ::uNewFunction("get_Degrees", Rotate__get_Degrees, 0, false, ::app::Uno::Float__typeof()),
        ::uNewFunction("get_DegreesX", Rotate__get_DegreesX, 0, false, ::app::Uno::Float__typeof()),
        ::uNewFunction("get_DegreesY", Rotate__get_DegreesY, 0, false, ::app::Uno::Float__typeof()),
        ::uNewFunction("get_DegreesZ", Rotate__get_DegreesZ, 0, false, ::app::Uno::Float__typeof()),
        ::uNewFunction(".ctor", Rotate__New_1, 0, true, Rotate__typeof()),
        ::uNewFunctionVoid("set_Degrees", Rotate__set_Degrees, 0, false, ::app::Uno::Float__typeof()),
        ::uNewFunctionVoid("set_DegreesX", Rotate__set_DegreesX, 0, false, ::app::Uno::Float__typeof()),
        ::uNewFunctionVoid("set_DegreesY", Rotate__set_DegreesY, 0, false, ::app::Uno::Float__typeof()),
        ::uNewFunctionVoid("set_DegreesZ", Rotate__set_DegreesZ, 0, false, ::app::Uno::Float__typeof()));

    ::uRegisterType(type);
    return type;
}

void Rotate___ObjInit_3(Rotate* __this)
{
    ::app::Fuse::Animations::TransformAnimator__Fuse_Rotation___ObjInit_2(__this);
    __this->Priority(3000);
}

float Rotate__get_Degrees(Rotate* __this)
{
    return __this->DegreesZ();
}

float Rotate__get_DegreesX(Rotate* __this)
{
    return ::app::Uno::Math__RadiansToDegrees_1(NULL, __this->X());
}

float Rotate__get_DegreesY(Rotate* __this)
{
    return ::app::Uno::Math__RadiansToDegrees_1(NULL, __this->Y());
}

float Rotate__get_DegreesZ(Rotate* __this)
{
    return ::app::Uno::Math__RadiansToDegrees_1(NULL, __this->Z());
}

Rotate* Rotate__New_1(::uStatic* __this)
{
    Rotate* inst = (Rotate*)::uAllocObject(sizeof(Rotate), Rotate__typeof());
    inst->_ObjInit_3();
    return inst;
}

void Rotate__set_Degrees(Rotate* __this, float value)
{
    __this->DegreesZ(value);
}

void Rotate__set_DegreesX(Rotate* __this, float value)
{
    __this->X(::app::Uno::Math__DegreesToRadians_1(NULL, value));
}

void Rotate__set_DegreesY(Rotate* __this, float value)
{
    __this->Y(::app::Uno::Math__DegreesToRadians_1(NULL, value));
}

void Rotate__set_DegreesZ(Rotate* __this, float value)
{
    __this->Z(::app::Uno::Math__DegreesToRadians_1(NULL, value));
}

void Rotate__Update(Rotate* __this, ::app::Fuse::Node* elm, ::app::Fuse::Rotation* t, ::app::Uno::Float4 value)
{
    ::uPtr< ::app::Fuse::Rotation*>(t)->EulerAngle(::app::Uno::Float3__New_2(NULL, value.X, value.Y, value.Z));
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Animations\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

Scale__uType* Scale__typeof()
{
    static ::uStaticStrong<Scale__uType*> type;
    if (type != NULL) return type;

    type = (Scale__uType*)::uAllocClassType(sizeof(Scale__uType), "Fuse.Animations.Scale", false, 0, 0, 0);

    type->SetBaseType(::app::Fuse::Animations::TransformAnimator__Fuse_Scaling__typeof());
    type->__fp_Update = (void(*)(::app::Fuse::Animations::TransformAnimator__Fuse_Scaling*, ::app::Fuse::Node*, ::app::Fuse::Scaling*, ::app::Uno::Float4))Scale__Update;

    type->SetFunctions(3,
        ::uNewFunction("get_Factor", Scale__get_Factor, 0, false, ::app::Uno::Float__typeof()),
        ::uNewFunction(".ctor", Scale__New_1, 0, true, Scale__typeof()),
        ::uNewFunctionVoid("set_Factor", Scale__set_Factor, 0, false, ::app::Uno::Float__typeof()));

    ::uRegisterType(type);
    return type;
}

void Scale___ObjInit_3(Scale* __this)
{
    ::app::Fuse::Animations::TransformAnimator__Fuse_Scaling___ObjInit_2(__this);
    __this->Priority(2000);
    __this->_vectorValue = ::app::Uno::Float4__New_1(NULL, 1.0f);
}

float Scale__get_Factor(Scale* __this)
{
    return __this->X();
}

Scale* Scale__New_1(::uStatic* __this)
{
    Scale* inst = (Scale*)::uAllocObject(sizeof(Scale), Scale__typeof());
    inst->_ObjInit_3();
    return inst;
}

void Scale__set_Factor(Scale* __this, float value)
{
    __this->_vectorValue = ::app::Uno::Float4__New_1(NULL, value);
}

void Scale__Update(Scale* __this, ::app::Fuse::Node* elm, ::app::Fuse::Scaling* t, ::app::Uno::Float4 value)
{
    ::uPtr< ::app::Fuse::Scaling*>(t)->Vector(::app::Uno::Float3__New_2(NULL, value.X, value.Y, value.Z));
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Animations\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

::uEnumType* SeekDirection__typeof()
{
    static ::uStaticStrong< ::uEnumType*> type;
    if (type != NULL) return type;

    type = ::uAllocEnumType("Fuse.Animations.SeekDirection", ::app::Uno::Int__typeof(), 2);

    type->SetLiterals(
        "Forward", 0LL,
        "Backward", 1LL);

    ::uRegisterType(type);
    return type;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Animations\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

Skew__uType* Skew__typeof()
{
    static ::uStaticStrong<Skew__uType*> type;
    if (type != NULL) return type;

    type = (Skew__uType*)::uAllocClassType(sizeof(Skew__uType), "Fuse.Animations.Skew", false, 0, 0, 0);

    type->SetBaseType(::app::Fuse::Animations::TransformAnimator__Fuse_Shear__typeof());
    type->__fp_Update = (void(*)(::app::Fuse::Animations::TransformAnimator__Fuse_Shear*, ::app::Fuse::Node*, ::app::Fuse::Shear*, ::app::Uno::Float4))Skew__Update;

    type->SetFunctions(9,
        ::uNewFunction("get_DegreesX", Skew__get_DegreesX, 0, false, ::app::Uno::Float__typeof()),
        ::uNewFunction("get_DegreesXY", Skew__get_DegreesXY, 0, false, ::app::Uno::Float2__typeof()),
        ::uNewFunction("get_DegreesY", Skew__get_DegreesY, 0, false, ::app::Uno::Float__typeof()),
        ::uNewFunction("get_XY", Skew__get_XY, 0, false, ::app::Uno::Float2__typeof()),
        ::uNewFunction(".ctor", Skew__New_1, 0, true, Skew__typeof()),
        ::uNewFunctionVoid("set_DegreesX", Skew__set_DegreesX, 0, false, ::app::Uno::Float__typeof()),
        ::uNewFunctionVoid("set_DegreesXY", Skew__set_DegreesXY, 0, false, ::app::Uno::Float2__typeof()),
        ::uNewFunctionVoid("set_DegreesY", Skew__set_DegreesY, 0, false, ::app::Uno::Float__typeof()),
        ::uNewFunctionVoid("set_XY", Skew__set_XY, 0, false, ::app::Uno::Float2__typeof()));

    ::uRegisterType(type);
    return type;
}

void Skew___ObjInit_3(Skew* __this)
{
    ::app::Fuse::Animations::TransformAnimator__Fuse_Shear___ObjInit_2(__this);
    __this->Priority(4000);
}

float Skew__get_DegreesX(Skew* __this)
{
    return ::app::Uno::Math__RadiansToDegrees_1(NULL, __this->X());
}

::app::Uno::Float2 Skew__get_DegreesXY(Skew* __this)
{
    return ::app::Uno::Float2__New_2(NULL, ::app::Uno::Math__RadiansToDegrees_1(NULL, __this->X()), ::app::Uno::Math__RadiansToDegrees_1(NULL, __this->Y()));
}

float Skew__get_DegreesY(Skew* __this)
{
    return ::app::Uno::Math__RadiansToDegrees_1(NULL, __this->Y());
}

::app::Uno::Float2 Skew__get_XY(Skew* __this)
{
    ::app::Uno::Float4 ind_123 = __this->_vectorValue;
    return ::app::Uno::Float2__New_2(NULL, ind_123.X, ind_123.Y);
}

Skew* Skew__New_1(::uStatic* __this)
{
    Skew* inst = (Skew*)::uAllocObject(sizeof(Skew), Skew__typeof());
    inst->_ObjInit_3();
    return inst;
}

void Skew__set_DegreesX(Skew* __this, float value)
{
    __this->X(::app::Uno::Math__DegreesToRadians_1(NULL, value));
}

void Skew__set_DegreesXY(Skew* __this, ::app::Uno::Float2 value)
{
    __this->XY(::app::Uno::Float2__New_2(NULL, ::app::Uno::Math__DegreesToRadians_1(NULL, value.X), ::app::Uno::Math__DegreesToRadians_1(NULL, value.Y)));
}

void Skew__set_DegreesY(Skew* __this, float value)
{
    __this->Y(::app::Uno::Math__DegreesToRadians_1(NULL, value));
}

void Skew__set_XY(Skew* __this, ::app::Uno::Float2 value)
{
    __this->_vectorValue = ::app::Uno::Float4__New_6(NULL, value, __this->_vectorValue.Z, __this->_vectorValue.W);
}

void Skew__Update(Skew* __this, ::app::Fuse::Node* elm, ::app::Fuse::Shear* t, ::app::Uno::Float4 value)
{
    ::uPtr< ::app::Fuse::Shear*>(t)->Vector(::app::Uno::Float2__New_2(NULL, value.X, value.Y));
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Animations\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

Spin__uType* Spin__typeof()
{
    static ::uStaticStrong<Spin__uType*> type;
    if (type != NULL) return type;

    type = (Spin__uType*)::uAllocClassType(sizeof(Spin__uType), "Fuse.Animations.Spin", false, 0, 1, 0);

    type->SetBaseType(::app::Fuse::Animations::OpenAnimator__typeof());
    type->__fp_CreateState = (::app::Fuse::Animations::AnimatorState*(*)(::app::Fuse::Animations::Animator*, ::app::Fuse::Animations::CreateStateParams*))Spin__CreateState;

    type->SetStrongRefs(
        "_Target", offsetof(Spin, _Target));

    type->SetFields(1,
        ::uNewField("_hertz", NULL, offsetof(Spin, _hertz), ::app::Uno::Double__typeof()));

    type->SetFunctions(5,
        ::uNewFunction("get_Frequency", Spin__get_Frequency, 0, false, ::app::Uno::Double__typeof()),
        ::uNewFunction("get_Target", Spin__get_Target, 0, false, ::app::Fuse::Node__typeof()),
        ::uNewFunction(".ctor", Spin__New_1, 0, true, Spin__typeof()),
        ::uNewFunctionVoid("set_Frequency", Spin__set_Frequency, 0, false, ::app::Uno::Double__typeof()),
        ::uNewFunctionVoid("set_Target", Spin__set_Target, 0, false, ::app::Fuse::Node__typeof()));

    ::uRegisterType(type);
    return type;
}

void Spin___ObjInit_2(Spin* __this)
{
    __this->_hertz = 1.0;
    ::app::Fuse::Animations::OpenAnimator___ObjInit_1(__this);
    __this->MixOp(0);
}

::app::Fuse::Animations::AnimatorState* Spin__CreateState(Spin* __this, ::app::Fuse::Animations::CreateStateParams* p)
{
    return (::app::Fuse::Animations::AnimatorState*)::app::Fuse::Animations::SpinState__New_1(NULL, __this, p);
}

double Spin__get_Frequency(Spin* __this)
{
    return __this->_hertz;
}

::app::Fuse::Node* Spin__get_Target(Spin* __this)
{
    return __this->_Target;
}

Spin* Spin__New_1(::uStatic* __this)
{
    Spin* inst = (Spin*)::uAllocObject(sizeof(Spin), Spin__typeof());
    inst->_ObjInit_2();
    return inst;
}

void Spin__set_Frequency(Spin* __this, double value)
{
    __this->_hertz = value;
}

void Spin__set_Target(Spin* __this, ::app::Fuse::Node* value)
{
    __this->_Target = value;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Animations\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

SpinState__uType* SpinState__typeof()
{
    static ::uStaticStrong<SpinState__uType*> type;
    if (type != NULL) return type;

    type = (SpinState__uType*)::uAllocClassType(sizeof(SpinState__uType), "Fuse.Animations.SpinState", false, 0, 3, 0);

    type->SetBaseType(::app::Fuse::Animations::OpenAnimatorState__typeof());
    type->__fp_Disable = (void(*)(::app::Fuse::Animations::AnimatorState*))SpinState__Disable;
    type->__fp_Seek = (bool(*)(::app::Fuse::Animations::OpenAnimatorState*, bool, float, float, int))SpinState__Seek;

    type->SetStrongRefs(
        "Animator", offsetof(SpinState, Animator_1),
        "mixHandle", offsetof(SpinState, mixHandle),
        "transform", offsetof(SpinState, transform));

    type->SetFields(4,
        ::uNewField("Animator", NULL, offsetof(SpinState, Animator_1), ::app::Fuse::Animations::Spin__typeof()),
        ::uNewField("degrees", NULL, offsetof(SpinState, degrees), ::app::Uno::Double__typeof()),
        ::uNewField("mixHandle", NULL, offsetof(SpinState, mixHandle), ::app::Fuse::Animations::IMixerHandle__Fuse_Transform__typeof()),
        ::uNewField("transform", NULL, offsetof(SpinState, transform), ::app::Fuse::Rotation__typeof()));

    type->SetFunctions(1,
        ::uNewFunction(".ctor", SpinState__New_1, 0, true, SpinState__typeof(), ::app::Fuse::Animations::Spin__typeof(), ::app::Fuse::Animations::CreateStateParams__typeof()));

    ::uRegisterType(type);
    return type;
}

void SpinState___ObjInit_2(SpinState* __this, ::app::Fuse::Animations::Spin* animator, ::app::Fuse::Animations::CreateStateParams* p)
{
    __this->transform = ::app::Fuse::Rotation__New_1(NULL);
    ::app::Fuse::Animations::OpenAnimatorState___ObjInit_1(__this, (::app::Fuse::Animations::OpenAnimator*)animator, p, ::uPtr< ::app::Fuse::Animations::Spin*>(animator)->Target());
    __this->Animator_1 = animator;
    __this->mixHandle = ::app::Fuse::Animations::IMixer::RegisterTransform(::uPtr< ::uObject*>(::uPtr< ::app::Fuse::Animations::Spin*>(__this->Animator_1)->Mixer), __this->Node, ::uPtr< ::app::Fuse::Animations::Spin*>(__this->Animator_1)->MixOp(), 3000);
}

void SpinState__Disable(SpinState* __this)
{
    if (__this->mixHandle == NULL)
    {
        return;
    }

    __this->degrees = 0.0;
    ::app::Fuse::Animations::IMixerHandle__Fuse_Transform::Unregister(::uPtr< ::uObject*>(__this->mixHandle));
    __this->mixHandle = NULL;
}

SpinState* SpinState__New_1(::uStatic* __this, ::app::Fuse::Animations::Spin* animator, ::app::Fuse::Animations::CreateStateParams* p)
{
    SpinState* inst = (SpinState*)::uAllocObject(sizeof(SpinState), SpinState__typeof());
    inst->_ObjInit_2(animator, p);
    return inst;
}

bool SpinState__Seek(SpinState* __this, bool on, float interval, float strength, int dir)
{
    if ((__this->mixHandle == NULL) || (__this->transform == NULL))
    {
        ::app::Uno::Diagnostics::Debug__Log_5(NULL, ::uGetConstString("Invalid seek"), 1, ::uGetConstString("C:\\ProgramData\\Uno\\Packages\\Fuse.Animations\\0.11.3\\$.uno"), 2450);
        return true;
    }

    bool done = false;
    double oldDegrees = __this->degrees;
    __this->degrees = __this->degrees + ((double)(interval * 360.0f) * ::uPtr< ::app::Fuse::Animations::Spin*>(__this->Animator_1)->Frequency());

    if (on)
    {
        __this->degrees = ::app::Uno::Math__Mod(NULL, __this->degrees, 360.0);
    }
    else if ((((oldDegrees <= 9.9999997473787516e-06) || (__this->degrees <= 9.9999997473787516e-06)) || (oldDegrees >= 360.0)) || (__this->degrees >= 360.0))
    {
        __this->degrees = 0.0;
        done = true;
    }

    ::uPtr< ::app::Fuse::Rotation*>(__this->transform)->Degrees((float)__this->degrees);
    ::app::Fuse::Animations::IMixerHandle__Fuse_Transform::Set(::uPtr< ::uObject*>(__this->mixHandle), (::app::Fuse::Transform*)__this->transform, strength);
    return done;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Animations\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

SplineTrack__uType* SplineTrack__typeof()
{
    static ::uStaticStrong<SplineTrack__uType*> type;
    if (type != NULL) return type;

    type = (SplineTrack__uType*)::uAllocClassType(sizeof(SplineTrack__uType), "Fuse.Animations.SplineTrack", false, 4, 2, 0);

    type->__interface_3.__fp_GetDuration = (double(*)(void*, ::app::Fuse::Animations::TrackAnimator*, int))SplineTrack__Fuse_Animations_TrackProvider_GetDuration;
    type->__interface_3.__fp_GetAnimatorVariant = (int(*)(void*, ::app::Fuse::Animations::TrackAnimator*))SplineTrack__Fuse_Animations_TrackProvider_GetAnimatorVariant;
    type->__interface_0.__fp_GetSeekProgress = (bool(*)(void*, ::app::Fuse::Animations::TrackAnimatorState*, double, double, int, ::app::Uno::Float4*, double*))SplineTrack__Fuse_Animations_ContinuousTrackProvider_GetSeekProgress;
    type->__interface_0.__fp_GetSeekTime = (bool(*)(void*, ::app::Fuse::Animations::TrackAnimatorState*, double, double, int, ::app::Uno::Float4*, double*))SplineTrack__Fuse_Animations_ContinuousTrackProvider_GetSeekTime;
    type->__interface_2.__fp_get_Keyframes = (::uObject*(*)(void*))SplineTrack__get_Keyframes;
    type->__interface_2.__fp_get_Interpolation = (int(*)(void*))SplineTrack__get_Interpolation;
    type->__interface_2.__fp_set_Interpolation = (void(*)(void*, int))SplineTrack__set_Interpolation;

    type->SetInterfaces(
        ::app::Fuse::Animations::ContinuousTrackProvider__typeof(), offsetof(SplineTrack__uType, __interface_0),
        ::app::Fuse::Animations::ITrackProvider__typeof(), offsetof(SplineTrack__uType, __interface_1),
        ::app::Fuse::Animations::KeyframeTrack__typeof(), offsetof(SplineTrack__uType, __interface_2),
        ::app::Fuse::Animations::TrackProvider__typeof(), offsetof(SplineTrack__uType, __interface_3));

    type->SetStrongRefs(
        "_frames", offsetof(SplineTrack, _frames),
        "_pointInterpolater", offsetof(SplineTrack, _pointInterpolater));

    type->SetFields(8,
        ::uNewField("_bias", NULL, offsetof(SplineTrack, _bias), ::app::Uno::Float__typeof()),
        ::uNewField("_continuity", NULL, offsetof(SplineTrack, _continuity), ::app::Uno::Float__typeof()),
        ::uNewField("_duration", NULL, offsetof(SplineTrack, _duration), ::app::Uno::Double__typeof()),
        ::uNewField("_frames", NULL, offsetof(SplineTrack, _frames), ::app::Uno::Collections::List__Fuse_Animations_Keyframe__typeof()),
        ::uNewField("_init", NULL, offsetof(SplineTrack, _init), ::app::Uno::Bool__typeof()),
        ::uNewField("_pointInterpolater", NULL, offsetof(SplineTrack, _pointInterpolater), ::app::Fuse::Animations::SplineTrack_PointInterpolater__typeof()),
        ::uNewField("_style", NULL, offsetof(SplineTrack, _style), ::app::Fuse::Animations::KeyframeInterpolation__typeof()),
        ::uNewField("_tension", NULL, offsetof(SplineTrack, _tension), ::app::Uno::Float__typeof()));

    type->SetFunctions(18,
        ::uNewFunction("BezierPoint", SplineTrack__BezierPoint, 0, true, ::app::Uno::Float4__typeof(), ::app::Uno::Float4__typeof(), ::app::Uno::Float4__typeof(), ::app::Uno::Float4__typeof(), ::app::Uno::Float4__typeof(), ::app::Uno::Float__typeof()),
        ::uNewFunction("CubicHermitePoint", SplineTrack__CubicHermitePoint, 0, true, ::app::Uno::Float4__typeof(), ::app::Uno::Float4__typeof(), ::app::Uno::Float4__typeof(), ::app::Uno::Float4__typeof(), ::app::Uno::Float4__typeof(), ::app::Uno::Float__typeof()),
        ::uNewFunction("Fuse.Animations.ContinuousTrackProvider.GetSeekProgress", SplineTrack__Fuse_Animations_ContinuousTrackProvider_GetSeekProgress, 0, false, ::app::Uno::Bool__typeof(), ::app::Fuse::Animations::TrackAnimatorState__typeof(), ::app::Uno::Double__typeof(), ::app::Uno::Double__typeof(), ::app::Fuse::Animations::SeekDirection__typeof(), ::app::Uno::Float4__typeof(), ::app::Uno::Double__typeof()),
        ::uNewFunction("Fuse.Animations.ContinuousTrackProvider.GetSeekTime", SplineTrack__Fuse_Animations_ContinuousTrackProvider_GetSeekTime, 0, false, ::app::Uno::Bool__typeof(), ::app::Fuse::Animations::TrackAnimatorState__typeof(), ::app::Uno::Double__typeof(), ::app::Uno::Double__typeof(), ::app::Fuse::Animations::SeekDirection__typeof(), ::app::Uno::Float4__typeof(), ::app::Uno::Double__typeof()),
        ::uNewFunction("Fuse.Animations.TrackProvider.GetAnimatorVariant", SplineTrack__Fuse_Animations_TrackProvider_GetAnimatorVariant, 0, false, ::app::Fuse::Animations::AnimatorVariant__typeof(), ::app::Fuse::Animations::TrackAnimator__typeof()),
        ::uNewFunction("Fuse.Animations.TrackProvider.GetDuration", SplineTrack__Fuse_Animations_TrackProvider_GetDuration, 0, false, ::app::Uno::Double__typeof(), ::app::Fuse::Animations::TrackAnimator__typeof(), ::app::Fuse::Animations::AnimationVariant__typeof()),
        ::uNewFunction("get_Bias", SplineTrack__get_Bias, 0, false, ::app::Uno::Float__typeof()),
        ::uNewFunction("get_Continuity", SplineTrack__get_Continuity, 0, false, ::app::Uno::Float__typeof()),
        ::uNewFunction("get_Interpolation", SplineTrack__get_Interpolation, 0, false, ::app::Fuse::Animations::KeyframeInterpolation__typeof()),
        ::uNewFunction("get_Keyframes", SplineTrack__get_Keyframes, 0, false, ::app::Uno::Collections::IList__Fuse_Animations_Keyframe__typeof()),
        ::uNewFunction("get_Tension", SplineTrack__get_Tension, 0, false, ::app::Uno::Float__typeof()),
        ::uNewFunctionVoid("Init", SplineTrack__Init, 0, false),
        ::uNewFunction("LinearPoint", SplineTrack__LinearPoint, 0, true, ::app::Uno::Float4__typeof(), ::app::Uno::Float4__typeof(), ::app::Uno::Float4__typeof(), ::app::Uno::Float4__typeof(), ::app::Uno::Float4__typeof(), ::app::Uno::Float__typeof()),
        ::uNewFunction(".ctor", SplineTrack__New_1, 0, true, SplineTrack__typeof()),
        ::uNewFunctionVoid("set_Bias", SplineTrack__set_Bias, 0, false, ::app::Uno::Float__typeof()),
        ::uNewFunctionVoid("set_Continuity", SplineTrack__set_Continuity, 0, false, ::app::Uno::Float__typeof()),
        ::uNewFunctionVoid("set_Interpolation", SplineTrack__set_Interpolation, 0, false, ::app::Fuse::Animations::KeyframeInterpolation__typeof()),
        ::uNewFunctionVoid("set_Tension", SplineTrack__set_Tension, 0, false, ::app::Uno::Float__typeof()));

    ::uRegisterType(type);
    return type;
}

void SplineTrack___ObjInit(SplineTrack* __this)
{
    __this->_frames = ::app::Uno::Collections::List__Fuse_Animations_Keyframe__New_1(NULL);
    __this->_tension = 1.0f;
    __this->_continuity = -1.0f;
    __this->_pointInterpolater = ::uNewDelegateNonVirt(::app::Fuse::Animations::SplineTrack_PointInterpolater__typeof(), (const void*)SplineTrack__LinearPoint);
}

::app::Uno::Float4 SplineTrack__BezierPoint(::uStatic* __this, ::app::Uno::Float4 p0, ::app::Uno::Float4 p3, ::app::Uno::Float4 m0, ::app::Uno::Float4 m1, float t)
{
    float t2 = t * t;
    float t3 = t2 * t;
    ::app::Uno::Float4 p1 = ::app::Uno::Float4__op_Addition_2(NULL, p0, m0);
    ::app::Uno::Float4 p2 = ::app::Uno::Float4__op_Addition_2(NULL, p3, m1);
    return ::app::Uno::Float4__op_Addition_2(NULL, ::app::Uno::Float4__op_Addition_2(NULL, ::app::Uno::Float4__op_Addition_2(NULL, ::app::Uno::Float4__op_Multiply(NULL, ((1.0f - (3.0f * t)) + (3.0f * t2)) - t3, p0), ::app::Uno::Float4__op_Multiply(NULL, ((3.0f * t) - (6.0f * t2)) + (3.0f * t3), p1)), ::app::Uno::Float4__op_Multiply(NULL, (3.0f * t2) - (3.0f * t3), p2)), ::app::Uno::Float4__op_Multiply(NULL, t3, p3));
}

::app::Uno::Float4 SplineTrack__CubicHermitePoint(::uStatic* __this, ::app::Uno::Float4 p0, ::app::Uno::Float4 p1, ::app::Uno::Float4 m0, ::app::Uno::Float4 m1, float t)
{
    float t2 = t * t;
    float t3 = t2 * t;
    return ::app::Uno::Float4__op_Addition_2(NULL, ::app::Uno::Float4__op_Addition_2(NULL, ::app::Uno::Float4__op_Addition_2(NULL, ::app::Uno::Float4__op_Multiply(NULL, ((2.0f * t3) - (3.0f * t2)) + 1.0f, p0), ::app::Uno::Float4__op_Multiply(NULL, (t3 - (2.0f * t2)) + t, m0)), ::app::Uno::Float4__op_Multiply(NULL, (-2.0f * t3) + (3.0f * t2), p1)), ::app::Uno::Float4__op_Multiply(NULL, t3 - t2, m1));
}

bool SplineTrack__Fuse_Animations_ContinuousTrackProvider_GetSeekProgress(SplineTrack* __this, ::app::Fuse::Animations::TrackAnimatorState* tas, double progress, double interval, int dir, ::app::Uno::Float4* value, double* strength)
{
    return ::app::Fuse::Animations::ContinuousTrackProvider::GetSeekTime(::uPtr< ::uObject*>(::uAs< ::uObject*>(__this, ::app::Fuse::Animations::ContinuousTrackProvider__typeof())), tas, progress * __this->_duration, interval, dir, value, strength);
}

bool SplineTrack__Fuse_Animations_ContinuousTrackProvider_GetSeekTime(SplineTrack* __this, ::app::Fuse::Animations::TrackAnimatorState* tas, double elapsed, double interval, int dir, ::app::Uno::Float4* value, double* strength)
{
    __this->Init();

    if (::uPtr< ::app::Uno::Collections::List__Fuse_Animations_Keyframe*>(__this->_frames)->Count() == 0)
    {
        *value = ::app::Uno::Float4__New_1(NULL, 0.0f);
        *strength = 0.0;
        return true;
    }

    int segment = 0;

    while ((segment < (::uPtr< ::app::Uno::Collections::List__Fuse_Animations_Keyframe*>(__this->_frames)->Count() - 1)) && (::uPtr< ::app::Fuse::Animations::Keyframe*>(::uPtr< ::app::Uno::Collections::List__Fuse_Animations_Keyframe*>(__this->_frames)->Item(segment))->Time() <= elapsed))
    {
        ++segment;
    }

    if (segment == 0)
    {
        double segmentProgress = elapsed / ::uPtr< ::app::Fuse::Animations::Keyframe*>(::uPtr< ::app::Uno::Collections::List__Fuse_Animations_Keyframe*>(__this->_frames)->Item(0))->TimeDelta();
        *value = ::uPtr< ::app::Fuse::Animations::Keyframe*>(::uPtr< ::app::Uno::Collections::List__Fuse_Animations_Keyframe*>(__this->_frames)->Item(0))->Value();
        *strength = segmentProgress;
    }
    else
    {
        int previous = segment - 1;
        double segmentProgress = (::uPtr< ::app::Fuse::Animations::Keyframe*>(::uPtr< ::app::Uno::Collections::List__Fuse_Animations_Keyframe*>(__this->_frames)->Item(segment))->TimeDelta() < 9.9999997473787516e-06) ? 0.0 : ::app::Uno::Math__Clamp(NULL, (elapsed - ::uPtr< ::app::Fuse::Animations::Keyframe*>(::uPtr< ::app::Uno::Collections::List__Fuse_Animations_Keyframe*>(__this->_frames)->Item(previous))->Time()) / ::uPtr< ::app::Fuse::Animations::Keyframe*>(::uPtr< ::app::Uno::Collections::List__Fuse_Animations_Keyframe*>(__this->_frames)->Item(segment))->TimeDelta(), 0.0, 1.0);
        *value = ::uPtr< ::uDelegate*>(__this->_pointInterpolater)->Invoke< ::app::Uno::Float4, ::app::Uno::Float4, ::app::Uno::Float4, ::app::Uno::Float4, ::app::Uno::Float4, float>(::uPtr< ::app::Fuse::Animations::Keyframe*>(::uPtr< ::app::Uno::Collections::List__Fuse_Animations_Keyframe*>(__this->_frames)->Item(previous))->Value(), ::uPtr< ::app::Fuse::Animations::Keyframe*>(::uPtr< ::app::Uno::Collections::List__Fuse_Animations_Keyframe*>(__this->_frames)->Item(segment))->Value(), ::uPtr< ::app::Fuse::Animations::Keyframe*>(::uPtr< ::app::Uno::Collections::List__Fuse_Animations_Keyframe*>(__this->_frames)->Item(previous))->TangentOut(), ::uPtr< ::app::Fuse::Animations::Keyframe*>(::uPtr< ::app::Uno::Collections::List__Fuse_Animations_Keyframe*>(__this->_frames)->Item(segment))->TangentIn(), (float)segmentProgress);
        *strength = 1.0;
    }

    return (dir == 0) ? (elapsed >= __this->_duration) : (elapsed <= 0.0);
}

int SplineTrack__Fuse_Animations_TrackProvider_GetAnimatorVariant(SplineTrack* __this, ::app::Fuse::Animations::TrackAnimator* tas)
{
    return 0;
}

double SplineTrack__Fuse_Animations_TrackProvider_GetDuration(SplineTrack* __this, ::app::Fuse::Animations::TrackAnimator* ta, int variant)
{
    __this->Init();
    return __this->_duration;
}

float SplineTrack__get_Bias(SplineTrack* __this)
{
    return __this->_bias;
}

float SplineTrack__get_Continuity(SplineTrack* __this)
{
    return __this->_continuity;
}

int SplineTrack__get_Interpolation(SplineTrack* __this)
{
    return __this->_style;
}

::uObject* SplineTrack__get_Keyframes(SplineTrack* __this)
{
    return (::uObject*)__this->_frames;
}

float SplineTrack__get_Tension(SplineTrack* __this)
{
    return __this->_tension;
}

void SplineTrack__Init(SplineTrack* __this)
{
    if (__this->_init)
    {
        return;
    }

    __this->_duration = ::app::Fuse::Animations::Keyframe__CompleteFrames(NULL, (::uObject*)__this->_frames, __this->Tension(), __this->Bias(), __this->Continuity());
    __this->_init = true;
}

::app::Uno::Float4 SplineTrack__LinearPoint(::uStatic* __this, ::app::Uno::Float4 p0, ::app::Uno::Float4 p1, ::app::Uno::Float4 m0, ::app::Uno::Float4 m1, float t)
{
    return ::app::Uno::Float4__op_Addition_2(NULL, p0, ::app::Uno::Float4__op_Multiply(NULL, t, ::app::Uno::Float4__op_Subtraction_2(NULL, p1, p0)));
}

SplineTrack* SplineTrack__New_1(::uStatic* __this)
{
    SplineTrack* inst = (SplineTrack*)::uAllocObject(sizeof(SplineTrack), SplineTrack__typeof());
    inst->_ObjInit();
    return inst;
}

void SplineTrack__set_Bias(SplineTrack* __this, float value)
{
    __this->_bias = value;
    __this->_style = 2;
}

void SplineTrack__set_Continuity(SplineTrack* __this, float value)
{
    __this->_continuity = value;
    __this->_style = 2;
}

void SplineTrack__set_Interpolation(SplineTrack* __this, int value)
{
    __this->_style = value;

    switch (__this->_style)
    {
        case 0:
        {
            __this->_bias = 0.0f;
            __this->_tension = 1.0f;
            __this->_continuity = -1.0f;
            __this->_pointInterpolater = ::uNewDelegateNonVirt(::app::Fuse::Animations::SplineTrack_PointInterpolater__typeof(), (const void*)SplineTrack__LinearPoint);
            break;
        }
        case 1:
        {
            __this->_bias = 0.0f;
            __this->_tension = 0.0f;
            __this->_continuity = 0.0f;
            __this->_pointInterpolater = ::uNewDelegateNonVirt(::app::Fuse::Animations::SplineTrack_PointInterpolater__typeof(), (const void*)SplineTrack__CubicHermitePoint);
            break;
        }
        default:
        {
            __this->_pointInterpolater = ::uNewDelegateNonVirt(::app::Fuse::Animations::SplineTrack_PointInterpolater__typeof(), (const void*)SplineTrack__CubicHermitePoint);
            break;
        }
    }
}

void SplineTrack__set_Tension(SplineTrack* __this, float value)
{
    __this->_tension = value;
    __this->_style = 2;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Animations\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

::uDelegateType* SplineTrack_PointInterpolater__typeof()
{
    static ::uStaticStrong< ::uDelegateType*> type;
    if (type != NULL) return type;

    type = ::uAllocDelegateType("Fuse.Animations.SplineTrack.PointInterpolater", 5);

    type->SetSignature(::app::Uno::Float4__typeof(),
        ::app::Uno::Float4__typeof(),
        ::app::Uno::Float4__typeof(),
        ::app::Uno::Float4__typeof(),
        ::app::Uno::Float4__typeof(),
        ::app::Uno::Float__typeof());

    return type;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Animations\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

TrackAnimator__uType* TrackAnimator__typeof()
{
    static ::uStaticStrong<TrackAnimator__uType*> type;
    if (type != NULL) return type;

    type = (TrackAnimator__uType*)::uAllocClassType(sizeof(TrackAnimator__uType), "Fuse.Animations.TrackAnimator", false, 0, 4, 0);

    type->SetBaseType(::app::Fuse::Animations::Animator__typeof());
    type->__fp_get_AnimatorVariant = (int(*)(::app::Fuse::Animations::Animator*))TrackAnimator__get_AnimatorVariant;
    type->__fp_GetDurationWithDelay = (double(*)(::app::Fuse::Animations::Animator*, int))TrackAnimator__GetDurationWithDelay;

    type->SetStrongRefs(
        "_continuousProvider", offsetof(TrackAnimator, _continuousProvider),
        "_discreteProvider", offsetof(TrackAnimator, _discreteProvider),
        "_keyframeTrack", offsetof(TrackAnimator, _keyframeTrack),
        "_objectValue", offsetof(TrackAnimator, _objectValue));

    type->SetFields(13,
        ::uNewField("_continuousProvider", NULL, offsetof(TrackAnimator, _continuousProvider), ::app::Fuse::Animations::TrackProvider__typeof()),
        ::uNewField("_delayBack", NULL, offsetof(TrackAnimator, _delayBack), ::app::Uno::Double__typeof()),
        ::uNewField("_discreteProvider", NULL, offsetof(TrackAnimator, _discreteProvider), ::app::Fuse::Animations::TrackProvider__typeof()),
        ::uNewField("_durationBack", NULL, offsetof(TrackAnimator, _durationBack), ::app::Uno::Double__typeof()),
        ::uNewField("_easing", NULL, offsetof(TrackAnimator, _easing), ::app::Fuse::Animations::Easing__typeof()),
        ::uNewField("_easingBack", NULL, offsetof(TrackAnimator, _easingBack), ::app::Fuse::Animations::Easing__typeof()),
        ::uNewField("_hasDelayBack", NULL, offsetof(TrackAnimator, _hasDelayBack), ::app::Uno::Bool__typeof()),
        ::uNewField("_hasDurationBack", NULL, offsetof(TrackAnimator, _hasDurationBack), ::app::Uno::Bool__typeof()),
        ::uNewField("_hasEasingBack", NULL, offsetof(TrackAnimator, _hasEasingBack), ::app::Uno::Bool__typeof()),
        ::uNewField("_isDiscrete", NULL, offsetof(TrackAnimator, _isDiscrete), ::app::Uno::Bool__typeof()),
        ::uNewField("_keyframeTrack", NULL, offsetof(TrackAnimator, _keyframeTrack), ::app::Fuse::Animations::KeyframeTrack__typeof()),
        ::uNewField("_objectValue", NULL, offsetof(TrackAnimator, _objectValue), ::uObject__typeof()),
        ::uNewField("_vectorValue", NULL, offsetof(TrackAnimator, _vectorValue), ::app::Uno::Float4__typeof()));

    type->SetFunctions(21,
        ::uNewFunction("get_Delay", TrackAnimator__get_Delay_1, 0, false, ::app::Uno::Double__typeof()),
        ::uNewFunction("get_DelayBack", TrackAnimator__get_DelayBack, 0, false, ::app::Uno::Double__typeof()),
        ::uNewFunction("get_Duration", TrackAnimator__get_Duration, 0, false, ::app::Uno::Double__typeof()),
        ::uNewFunction("get_DurationBack", TrackAnimator__get_DurationBack, 0, false, ::app::Uno::Double__typeof()),
        ::uNewFunction("get_Easing", TrackAnimator__get_Easing, 0, false, ::app::Fuse::Animations::Easing__typeof()),
        ::uNewFunction("get_EasingBack", TrackAnimator__get_EasingBack, 0, false, ::app::Fuse::Animations::Easing__typeof()),
        ::uNewFunction("get_HasBack", TrackAnimator__get_HasBack, 0, false, ::app::Uno::Bool__typeof()),
        ::uNewFunction("get_KeyframeInterpolation", TrackAnimator__get_KeyframeInterpolation, 0, false, ::app::Fuse::Animations::KeyframeInterpolation__typeof()),
        ::uNewFunction("get_Keyframes", TrackAnimator__get_Keyframes, 0, false, ::app::Uno::Collections::IList__Fuse_Animations_Keyframe__typeof()),
        ::uNewFunction("get_KeyframeTrack", TrackAnimator__get_KeyframeTrack, 0, false, ::app::Fuse::Animations::KeyframeTrack__typeof()),
        ::uNewFunction("get_Provider", TrackAnimator__get_Provider, 0, false, ::app::Fuse::Animations::ITrackProvider__typeof()),
        ::uNewFunction("GetProvider", TrackAnimator__GetProvider, 0, false, ::app::Fuse::Animations::TrackProvider__typeof(), ::app::Fuse::Animations::AnimationVariant__typeof()),
        ::uNewFunctionVoid("MarkDiscrete", TrackAnimator__MarkDiscrete, 0, false),
        ::uNewFunctionVoid("set_Delay", TrackAnimator__set_Delay_1, 0, false, ::app::Uno::Double__typeof()),
        ::uNewFunctionVoid("set_DelayBack", TrackAnimator__set_DelayBack, 0, false, ::app::Uno::Double__typeof()),
        ::uNewFunctionVoid("set_Duration", TrackAnimator__set_Duration, 0, false, ::app::Uno::Double__typeof()),
        ::uNewFunctionVoid("set_DurationBack", TrackAnimator__set_DurationBack, 0, false, ::app::Uno::Double__typeof()),
        ::uNewFunctionVoid("set_Easing", TrackAnimator__set_Easing, 0, false, ::app::Fuse::Animations::Easing__typeof()),
        ::uNewFunctionVoid("set_EasingBack", TrackAnimator__set_EasingBack, 0, false, ::app::Fuse::Animations::Easing__typeof()),
        ::uNewFunctionVoid("set_KeyframeInterpolation", TrackAnimator__set_KeyframeInterpolation, 0, false, ::app::Fuse::Animations::KeyframeInterpolation__typeof()),
        ::uNewFunctionVoid("set_Provider", TrackAnimator__set_Provider, 0, false, ::app::Fuse::Animations::ITrackProvider__typeof()));

    ::uRegisterType(type);
    return type;
}

void TrackAnimator___ObjInit_1(TrackAnimator* __this)
{
    __this->_continuousProvider = (::uObject*)::app::Fuse::Animations::EasingTrack__Singleton;
    ::app::Fuse::Animations::Animator___ObjInit(__this);
}

int TrackAnimator__get_AnimatorVariant(TrackAnimator* __this)
{
    if (__this->_discreteProvider != NULL)
    {
        return ::app::Fuse::Animations::TrackProvider::GetAnimatorVariant(::uPtr< ::uObject*>(__this->_discreteProvider), __this);
    }
    else if (__this->_continuousProvider != NULL)
    {
        return ::app::Fuse::Animations::TrackProvider::GetAnimatorVariant(::uPtr< ::uObject*>(__this->_continuousProvider), __this);
    }

    return 0;
}

double TrackAnimator__get_Delay_1(TrackAnimator* __this)
{
    return __this->_Delay_1;
}

double TrackAnimator__get_DelayBack(TrackAnimator* __this)
{
    return __this->_hasDelayBack ? __this->_delayBack : 0.0;
}

double TrackAnimator__get_Duration(TrackAnimator* __this)
{
    return __this->_Duration;
}

double TrackAnimator__get_DurationBack(TrackAnimator* __this)
{
    return __this->_hasDurationBack ? __this->_durationBack : __this->Duration();
}

int TrackAnimator__get_Easing(TrackAnimator* __this)
{
    return __this->_easing;
}

int TrackAnimator__get_EasingBack(TrackAnimator* __this)
{
    return __this->_hasEasingBack ? __this->_easingBack : __this->_easing;
}

bool TrackAnimator__get_HasBack(TrackAnimator* __this)
{
    return (__this->_hasDelayBack || __this->_hasDurationBack) || __this->_hasEasingBack;
}

int TrackAnimator__get_KeyframeInterpolation(TrackAnimator* __this)
{
    return ::app::Fuse::Animations::KeyframeTrack::Interpolation(::uPtr< ::uObject*>(__this->KeyframeTrack()));
}

::uObject* TrackAnimator__get_Keyframes(TrackAnimator* __this)
{
    return ::app::Fuse::Animations::KeyframeTrack::Keyframes(::uPtr< ::uObject*>(__this->KeyframeTrack()));
}

::uObject* TrackAnimator__get_KeyframeTrack(TrackAnimator* __this)
{
    if (__this->_keyframeTrack == NULL)
    {
        if (__this->_isDiscrete)
        {
            ::app::Fuse::Animations::DiscreteKeyframeTrack* t = ::app::Fuse::Animations::DiscreteKeyframeTrack__New_1(NULL);
            __this->_keyframeTrack = (::uObject*)t;
            __this->_discreteProvider = (::uObject*)t;
        }
        else
        {
            ::app::Fuse::Animations::SplineTrack* t = ::app::Fuse::Animations::SplineTrack__New_1(NULL);
            __this->_keyframeTrack = (::uObject*)t;
            __this->_continuousProvider = (::uObject*)t;
        }
    }

    return __this->_keyframeTrack;
}

::uObject* TrackAnimator__get_Provider(TrackAnimator* __this)
{
    if (__this->_continuousProvider != NULL)
    {
        return ::uAs< ::uObject*>(__this->_continuousProvider, ::app::Fuse::Animations::ITrackProvider__typeof());
    }

    return NULL;
}

double TrackAnimator__GetDurationWithDelay(TrackAnimator* __this, int dir)
{
    double duration = 0.0;

    if (__this->_discreteProvider != NULL)
    {
        duration = ::app::Fuse::Animations::TrackProvider::GetDuration(::uPtr< ::uObject*>(__this->_discreteProvider), __this, dir);
    }
    else if (__this->_continuousProvider != NULL)
    {
        duration = ::app::Fuse::Animations::TrackProvider::GetDuration(::uPtr< ::uObject*>(__this->_continuousProvider), __this, dir);
    }

    return (((dir == 1) && __this->HasBack()) ? __this->DelayBack() : __this->Delay_1()) + duration;
}

::uObject* TrackAnimator__GetProvider(TrackAnimator* __this, int variant)
{
    ::uObject* ind_123 = __this->_discreteProvider;
    return (ind_123 != NULL) ? ind_123 : __this->_continuousProvider;
}

void TrackAnimator__MarkDiscrete(TrackAnimator* __this)
{
    __this->_discreteProvider = (::uObject*)::app::Fuse::Animations::DiscreteSingleTrack__Singleton;
    __this->_continuousProvider = NULL;
    __this->_isDiscrete = true;
}

void TrackAnimator__set_Delay_1(TrackAnimator* __this, double value)
{
    __this->_Delay_1 = value;
}

void TrackAnimator__set_DelayBack(TrackAnimator* __this, double value)
{
    __this->_delayBack = value;
    __this->_hasDelayBack = true;
}

void TrackAnimator__set_Duration(TrackAnimator* __this, double value)
{
    __this->_Duration = value;
}

void TrackAnimator__set_DurationBack(TrackAnimator* __this, double value)
{
    __this->_durationBack = value;
    __this->_hasDurationBack = true;
}

void TrackAnimator__set_Easing(TrackAnimator* __this, int value)
{
    __this->_easing = value;
}

void TrackAnimator__set_EasingBack(TrackAnimator* __this, int value)
{
    __this->_easingBack = value;
    __this->_hasEasingBack = true;
}

void TrackAnimator__set_KeyframeInterpolation(TrackAnimator* __this, int value)
{
    ::app::Fuse::Animations::KeyframeTrack::Interpolation(::uPtr< ::uObject*>(__this->KeyframeTrack()), value);
}

void TrackAnimator__set_Provider(TrackAnimator* __this, ::uObject* value)
{
    __this->_continuousProvider = NULL;

    if (::uIs(value, ::app::Fuse::Animations::ContinuousTrackProvider__typeof()))
    {
        __this->_continuousProvider = ::uAs< ::uObject*>(value, ::app::Fuse::Animations::TrackProvider__typeof());
    }
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Animations\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

TrackAnimatorState__uType* TrackAnimatorState__typeof()
{
    static ::uStaticStrong<TrackAnimatorState__uType*> type;
    if (type != NULL) return type;

    type = (TrackAnimatorState__uType*)::uAllocClassType(sizeof(TrackAnimatorState__uType), "Fuse.Animations.TrackAnimatorState", false, 0, 3, 0);

    type->SetBaseType(::app::Fuse::Animations::AnimatorState__typeof());
    type->__fp_SeekObjectValue = TrackAnimatorState__SeekObjectValue;
    type->__fp_SeekProgress = (bool(*)(::app::Fuse::Animations::AnimatorState*, double, double, int, double))TrackAnimatorState__SeekProgress;
    type->__fp_SeekTime = (bool(*)(::app::Fuse::Animations::AnimatorState*, double, double, int, double))TrackAnimatorState__SeekTime;
    type->__fp_SeekValue = TrackAnimatorState__SeekValue;

    type->SetStrongRefs(
        "_continuousProvider", offsetof(TrackAnimatorState, _continuousProvider),
        "_discreteProvider", offsetof(TrackAnimatorState, _discreteProvider),
        "Animator", offsetof(TrackAnimatorState, Animator));

    type->SetFields(3,
        ::uNewField("_continuousProvider", NULL, offsetof(TrackAnimatorState, _continuousProvider), ::app::Fuse::Animations::ContinuousTrackProvider__typeof()),
        ::uNewField("_discreteProvider", NULL, offsetof(TrackAnimatorState, _discreteProvider), ::app::Fuse::Animations::DiscreteTrackProvider__typeof()),
        ::uNewField("Animator", NULL, offsetof(TrackAnimatorState, Animator), ::app::Fuse::Animations::TrackAnimator__typeof()));

    type->SetFunctions(5,
        ::uNewFunction("get_Duration", TrackAnimatorState__get_Duration, 0, false, ::app::Uno::Double__typeof()),
        ::uNewFunction("get_Easing", TrackAnimatorState__get_Easing, 0, false, ::app::Fuse::Animations::Easing__typeof()),
        ::uNewFunction("get_IsBackward", TrackAnimatorState__get_IsBackward, 0, false, ::app::Uno::Bool__typeof()),
        ::uNewFunctionVoid("SeekObjectValue", type->__fp_SeekObjectValue, offsetof(TrackAnimatorState__uType, __fp_SeekObjectValue), false, ::uObject__typeof(), ::app::Uno::Float__typeof()),
        ::uNewFunctionVoid("SeekValue", type->__fp_SeekValue, offsetof(TrackAnimatorState__uType, __fp_SeekValue), false, ::app::Uno::Float4__typeof(), ::app::Uno::Float__typeof()));

    ::uRegisterType(type);
    return type;
}

void TrackAnimatorState___ObjInit_1(TrackAnimatorState* __this, ::app::Fuse::Animations::TrackAnimator* animator, ::app::Fuse::Animations::CreateStateParams* p, ::app::Fuse::Node* useNode)
{
    ::app::Fuse::Animations::AnimatorState___ObjInit(__this, p, useNode);
    __this->Animator = animator;
    ::uObject* pr = ::uPtr< ::app::Fuse::Animations::TrackAnimator*>(animator)->GetProvider(__this->Variant);
    __this->_continuousProvider = ::uAs< ::uObject*>(pr, ::app::Fuse::Animations::ContinuousTrackProvider__typeof());
    __this->_discreteProvider = ::uAs< ::uObject*>(pr, ::app::Fuse::Animations::DiscreteTrackProvider__typeof());
}

double TrackAnimatorState__get_Duration(TrackAnimatorState* __this)
{
    return __this->IsBackward() ? ::uPtr< ::app::Fuse::Animations::TrackAnimator*>(__this->Animator)->DurationBack() : ::uPtr< ::app::Fuse::Animations::TrackAnimator*>(__this->Animator)->Duration();
}

int TrackAnimatorState__get_Easing(TrackAnimatorState* __this)
{
    return __this->IsBackward() ? ::uPtr< ::app::Fuse::Animations::TrackAnimator*>(__this->Animator)->EasingBack() : ::uPtr< ::app::Fuse::Animations::TrackAnimator*>(__this->Animator)->Easing();
}

bool TrackAnimatorState__get_IsBackward(TrackAnimatorState* __this)
{
    return __this->Variant == 1;
}

void TrackAnimatorState__SeekObjectValue(TrackAnimatorState* __this, ::uObject* value, float strength)
{
}

bool TrackAnimatorState__SeekProgress(TrackAnimatorState* __this, double progress, double interval, int dir, double strength)
{
    if (__this->_continuousProvider != NULL)
    {
        double oStrength = double();
        ::app::Uno::Float4 oValue = ::app::Uno::Float4();
        bool r = ::app::Fuse::Animations::ContinuousTrackProvider::GetSeekProgress(::uPtr< ::uObject*>(__this->_continuousProvider), __this, progress, interval, dir, &oValue, &oStrength);
        __this->SeekValue(oValue, (float)(oStrength * strength));
        return r;
    }

    if (__this->_discreteProvider != NULL)
    {
        double oStrength = double();
        ::uObject* oValue;
        bool r = ::app::Fuse::Animations::DiscreteTrackProvider::GetSeekProgress(::uPtr< ::uObject*>(__this->_discreteProvider), __this, progress, interval, dir, &oValue, &oStrength);
        __this->SeekObjectValue(oValue, (float)(oStrength * strength));
        return r;
    }

    return true;
}

bool TrackAnimatorState__SeekTime(TrackAnimatorState* __this, double elapsed, double interval, int dir, double strength)
{
    double relTime = double();

    if (__this->IsBackward() && ::uPtr< ::app::Fuse::Animations::TrackAnimator*>(__this->Animator)->HasBack())
    {
        relTime = elapsed - ((__this->TotalDuration - ::uPtr< ::app::Fuse::Animations::TrackAnimator*>(__this->Animator)->DelayBack()) - ::uPtr< ::app::Fuse::Animations::TrackAnimator*>(__this->Animator)->DurationBack());
    }
    else
    {
        relTime = elapsed - ::uPtr< ::app::Fuse::Animations::TrackAnimator*>(__this->Animator)->Delay_1();
    }

    if (__this->_continuousProvider != NULL)
    {
        double oStrength = double();
        ::app::Uno::Float4 oValue = ::app::Uno::Float4();
        bool r = ::app::Fuse::Animations::ContinuousTrackProvider::GetSeekTime(::uPtr< ::uObject*>(__this->_continuousProvider), __this, relTime, interval, dir, &oValue, &oStrength);
        __this->SeekValue(oValue, (float)(oStrength * strength));
        return r;
    }

    if (__this->_discreteProvider != NULL)
    {
        double oStrength = double();
        ::uObject* oValue;
        bool r = ::app::Fuse::Animations::DiscreteTrackProvider::GetSeekTime(::uPtr< ::uObject*>(__this->_discreteProvider), __this, relTime, interval, dir, &oValue, &oStrength);
        __this->SeekObjectValue(oValue, (float)(oStrength * strength));
        return r;
    }

    return true;
}

void TrackAnimatorState__SeekValue(TrackAnimatorState* __this, ::app::Uno::Float4 value, float strength)
{
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Animations\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

::uInterfaceType* TrackProvider__typeof()
{
    static ::uStaticStrong< ::uInterfaceType*> type;
    if (type != NULL) return type;

    type = ::uAllocInterfaceType("Fuse.Animations.TrackProvider");

    ::uRegisterType(type);
    return type;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Animations\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

TriggerAnimation__uType* TriggerAnimation__typeof()
{
    static ::uStaticStrong<TriggerAnimation__uType*> type;
    if (type != NULL) return type;

    type = (TriggerAnimation__uType*)::uAllocClassType(sizeof(TriggerAnimation__uType), "Fuse.Animations.TriggerAnimation", false, 0, 2, 0);

    type->SetStrongRefs(
        "_animators", offsetof(TriggerAnimation, _animators),
        "_backward", offsetof(TriggerAnimation, _backward));

    type->SetFields(2,
        ::uNewField("_animators", NULL, offsetof(TriggerAnimation, _animators), ::app::Uno::Collections::List__Fuse_Animations_Animator__typeof()),
        ::uNewField("_backward", NULL, offsetof(TriggerAnimation, _backward), TriggerAnimation__typeof()));

    type->SetFunctions(11,
        ::uNewFunction("CreateAnimatorsState", TriggerAnimation__CreateAnimatorsState, 0, false, ::uGetArrayType(::app::Fuse::Animations::AnimatorState__typeof()), ::app::Fuse::Animations::AnimationVariant__typeof(), ::app::Fuse::Node__typeof()),
        ::uNewFunction("CreatePlayer", TriggerAnimation__CreatePlayer, 0, false, ::app::Fuse::Animations::Player__typeof(), ::app::Fuse::Node__typeof(), ::app::Fuse::Animations::AnimationVariant__typeof()),
        ::uNewFunction("CreateState", TriggerAnimation__CreateState, 0, false, ::app::Fuse::Animations::TriggerAnimationState__typeof(), ::app::Fuse::Node__typeof()),
        ::uNewFunction("get_Animators", TriggerAnimation__get_Animators, 0, false, ::app::Uno::Collections::IList__Fuse_Animations_Animator__typeof()),
        ::uNewFunction("get_Backward", TriggerAnimation__get_Backward, 0, false, TriggerAnimation__typeof()),
        ::uNewFunction("get_HasAnimators", TriggerAnimation__get_HasAnimators, 0, false, ::app::Uno::Bool__typeof()),
        ::uNewFunction("get_HasDirectionVariant", TriggerAnimation__get_HasDirectionVariant, 0, false, ::app::Uno::Bool__typeof()),
        ::uNewFunction("GetTotalDuration", TriggerAnimation__GetTotalDuration, 0, false, ::app::Uno::Double__typeof(), ::app::Fuse::Animations::AnimationVariant__typeof()),
        ::uNewFunction(".ctor", TriggerAnimation__New_1, 0, true, TriggerAnimation__typeof()),
        ::uNewFunction("RestrictVariant", TriggerAnimation__RestrictVariant, 0, false, ::app::Fuse::Animations::AnimationVariant__typeof(), ::app::Fuse::Animations::AnimationVariant__typeof()),
        ::uNewFunctionVoid("set_Backward", TriggerAnimation__set_Backward, 0, false, TriggerAnimation__typeof()));

    ::uRegisterType(type);
    return type;
}

void TriggerAnimation___ObjInit(TriggerAnimation* __this)
{
}

::uArray* TriggerAnimation__CreateAnimatorsState(TriggerAnimation* __this, int variant, ::app::Fuse::Node* elm)
{
    ::app::Fuse::Animations::CreateStateParams* collection_123;
    collection_123 = ::app::Fuse::Animations::CreateStateParams__New_1(NULL);
    ::uPtr< ::app::Fuse::Animations::CreateStateParams*>(collection_123)->Variant = variant;
    collection_123->TotalDuration = __this->GetTotalDuration(variant);
    collection_123->Attached = elm;
    ::app::Fuse::Animations::CreateStateParams* csp = collection_123;

    if (__this->_animators == NULL)
    {
        return ::uNewArray(::app::Fuse::Animations::AnimatorState__typeof(), 0);
    }

    ::uArray* state = ::uNewArray(::app::Fuse::Animations::AnimatorState__typeof(), ::uPtr< ::app::Uno::Collections::List__Fuse_Animations_Animator*>(__this->_animators)->Count());

    for (int i = 0; i < ::uPtr< ::app::Uno::Collections::List__Fuse_Animations_Animator*>(__this->_animators)->Count(); ++i)
    {
        state->ItemStrong< ::app::Fuse::Animations::AnimatorState*>(i) = ::uPtr< ::app::Fuse::Animations::Animator*>(::uPtr< ::app::Uno::Collections::List__Fuse_Animations_Animator*>(__this->_animators)->Item(i))->CreateState(csp);
    }

    return state;
}

::app::Fuse::Animations::Player* TriggerAnimation__CreatePlayer(TriggerAnimation* __this, ::app::Fuse::Node* node, int variant)
{
    variant = __this->RestrictVariant(variant);

    if (variant == 0)
    {
        return ::app::Fuse::Animations::Player__New_1(NULL, node, __this, 0);
    }

    if (__this->_backward != NULL)
    {
        return ::app::Fuse::Animations::Player__New_1(NULL, node, __this->_backward, 0);
    }

    return ::app::Fuse::Animations::Player__New_1(NULL, node, __this, 1);
}

::app::Fuse::Animations::TriggerAnimationState* TriggerAnimation__CreateState(TriggerAnimation* __this, ::app::Fuse::Node* elm)
{
    return ::app::Fuse::Animations::TriggerAnimationState__New_1(NULL, __this, elm);
}

::uObject* TriggerAnimation__get_Animators(TriggerAnimation* __this)
{
    if (__this->_animators == NULL)
    {
        __this->_animators = ::app::Uno::Collections::List__Fuse_Animations_Animator__New_1(NULL);
    }

    return (::uObject*)__this->_animators;
}

TriggerAnimation* TriggerAnimation__get_Backward(TriggerAnimation* __this)
{
    if (__this->_backward == NULL)
    {
        __this->_backward = TriggerAnimation__New_1(NULL);
    }

    return __this->_backward;
}

bool TriggerAnimation__get_HasAnimators(TriggerAnimation* __this)
{
    return (__this->_animators != NULL) && (::uPtr< ::app::Uno::Collections::List__Fuse_Animations_Animator*>(__this->_animators)->Count() > 0);
}

bool TriggerAnimation__get_HasDirectionVariant(TriggerAnimation* __this)
{
    if (__this->_animators == NULL)
    {
        return false;
    }

    bool has = false;
    int c = ::uPtr< ::app::Uno::Collections::List__Fuse_Animations_Animator*>(__this->_animators)->Count();

    for (int i = 0; i < c; ++i)
    {
        int v = ::uPtr< ::app::Fuse::Animations::Animator*>(::uPtr< ::app::Uno::Collections::List__Fuse_Animations_Animator*>(__this->_animators)->Item(i))->AnimatorVariant();

        if (v == 2)
        {
            has = true;
        }

        if (v == 1)
        {
            return false;
        }
    }

    return has;
}

double TriggerAnimation__GetTotalDuration(TriggerAnimation* __this, int variant)
{
    if (__this->_animators == NULL)
    {
        return 0.0;
    }

    double max = 0.0;
    int c = ::uPtr< ::app::Uno::Collections::List__Fuse_Animations_Animator*>(__this->_animators)->Count();

    for (int i = 0; i < c; ++i)
    {
        max = ::app::Uno::Math__Max(NULL, max, ::uPtr< ::app::Fuse::Animations::Animator*>(::uPtr< ::app::Uno::Collections::List__Fuse_Animations_Animator*>(__this->_animators)->Item(i))->GetDurationWithDelay(variant));
    }

    return max;
}

TriggerAnimation* TriggerAnimation__New_1(::uStatic* __this)
{
    TriggerAnimation* inst = (TriggerAnimation*)::uAllocObject(sizeof(TriggerAnimation), TriggerAnimation__typeof());
    inst->_ObjInit();
    return inst;
}

int TriggerAnimation__RestrictVariant(TriggerAnimation* __this, int variant)
{
    if (!__this->HasDirectionVariant() && (__this->_backward == NULL))
    {
        return 0;
    }

    return variant;
}

void TriggerAnimation__set_Backward(TriggerAnimation* __this, TriggerAnimation* value)
{
    __this->_backward = value;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Animations\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

TriggerAnimationState__uType* TriggerAnimationState__typeof()
{
    static ::uStaticStrong<TriggerAnimationState__uType*> type;
    if (type != NULL) return type;

    type = (TriggerAnimationState__uType*)::uAllocClassType(sizeof(TriggerAnimationState__uType), "Fuse.Animations.TriggerAnimationState", false, 0, 7, 0);

    type->SetStrongRefs(
        "_Animation", offsetof(TriggerAnimationState, _Animation),
        "_backPlayer", offsetof(TriggerAnimationState, _backPlayer),
        "_curPlayer", offsetof(TriggerAnimationState, _curPlayer),
        "_forePlayer", offsetof(TriggerAnimationState, _forePlayer),
        "_node", offsetof(TriggerAnimationState, _node),
        "PlaybackDone", offsetof(TriggerAnimationState, PlaybackDone),
        "ProgressUpdated", offsetof(TriggerAnimationState, ProgressUpdated));

    type->SetFields(6,
        ::uNewField("_backPlayer", NULL, offsetof(TriggerAnimationState, _backPlayer), ::app::Fuse::Animations::Player__typeof()),
        ::uNewField("_curPlayer", NULL, offsetof(TriggerAnimationState, _curPlayer), ::app::Fuse::Animations::Player__typeof()),
        ::uNewField("_curPlayerVariant", NULL, offsetof(TriggerAnimationState, _curPlayerVariant), ::app::Fuse::Animations::AnimationVariant__typeof()),
        ::uNewField("_forePlayer", NULL, offsetof(TriggerAnimationState, _forePlayer), ::app::Fuse::Animations::Player__typeof()),
        ::uNewField("_node", NULL, offsetof(TriggerAnimationState, _node), ::app::Fuse::Node__typeof()),
        ::uNewField("_prevProgress", NULL, offsetof(TriggerAnimationState, _prevProgress), ::app::Uno::Double__typeof()));

    type->SetFunctions(22,
        ::uNewFunctionVoid("add_PlaybackDone", TriggerAnimationState__add_PlaybackDone, 0, false, ::app::Uno::Action__object__typeof()),
        ::uNewFunctionVoid("add_ProgressUpdated", TriggerAnimationState__add_ProgressUpdated, 0, false, ::app::Uno::Action__object__typeof()),
        ::uNewFunctionVoid("Dispose", TriggerAnimationState__Dispose, 0, false),
        ::uNewFunction("get_Animation", TriggerAnimationState__get_Animation, 0, false, ::app::Fuse::Animations::TriggerAnimation__typeof()),
        ::uNewFunction("get_CurrentTotalDuration", TriggerAnimationState__get_CurrentTotalDuration, 0, false, ::app::Uno::Double__typeof()),
        ::uNewFunction("get_PreviousProgress", TriggerAnimationState__get_PreviousProgress, 0, false, ::app::Uno::Double__typeof()),
        ::uNewFunction("get_Progress", TriggerAnimationState__get_Progress, 0, false, ::app::Uno::Double__typeof()),
        ::uNewFunction("get_ProgressFullOff", TriggerAnimationState__get_ProgressFullOff, 0, false, ::app::Uno::Bool__typeof()),
        ::uNewFunction("get_ProgressFullOn", TriggerAnimationState__get_ProgressFullOn, 0, false, ::app::Uno::Bool__typeof()),
        ::uNewFunction("GetCurrentPlayer", TriggerAnimationState__GetCurrentPlayer, 0, false, ::app::Fuse::Animations::Player__typeof(), ::app::Fuse::Animations::AnimationVariant__typeof()),
        ::uNewFunction("GetPlayer", TriggerAnimationState__GetPlayer, 0, false, ::app::Fuse::Animations::Player__typeof(), ::app::Fuse::Animations::AnimationVariant__typeof(), ::app::Uno::Bool__typeof()),
        ::uNewFunctionVoid("OnPlaybackDone", TriggerAnimationState__OnPlaybackDone, 0, false, ::uObject__typeof()),
        ::uNewFunctionVoid("OnProgressUpdated", TriggerAnimationState__OnProgressUpdated, 0, false, ::uObject__typeof()),
        ::uNewFunctionVoid("PlayEnd", TriggerAnimationState__PlayEnd, 0, false, ::app::Uno::Bool__typeof()),
        ::uNewFunctionVoid("PlayOff", TriggerAnimationState__PlayOff, 0, false),
        ::uNewFunctionVoid("PlayOn", TriggerAnimationState__PlayOn, 0, false),
        ::uNewFunctionVoid("PlayToProgress", TriggerAnimationState__PlayToProgress, 0, false, ::app::Uno::Double__typeof(), ::app::Fuse::Animations::AnimationVariant__typeof()),
        ::uNewFunctionVoid("remove_PlaybackDone", TriggerAnimationState__remove_PlaybackDone, 0, false, ::app::Uno::Action__object__typeof()),
        ::uNewFunctionVoid("remove_ProgressUpdated", TriggerAnimationState__remove_ProgressUpdated, 0, false, ::app::Uno::Action__object__typeof()),
        ::uNewFunctionVoid("SeekProgress", TriggerAnimationState__SeekProgress, 0, false, ::app::Uno::Double__typeof(), ::app::Fuse::Animations::AnimationVariant__typeof(), ::app::Fuse::Animations::TriggerAnimationState_SeekFlags__typeof()),
        ::uNewFunctionVoid("set_Animation", TriggerAnimationState__set_Animation, 0, false, ::app::Fuse::Animations::TriggerAnimation__typeof()),
        ::uNewFunctionVoid("TrackProgress", TriggerAnimationState__TrackProgress, 0, false, ::app::Fuse::Animations::Player__typeof()));

    ::uRegisterType(type);
    return type;
}

void TriggerAnimationState___ObjInit(TriggerAnimationState* __this, ::app::Fuse::Animations::TriggerAnimation* animation, ::app::Fuse::Node* node)
{
    __this->Animation(animation);
    __this->_node = node;
}

void TriggerAnimationState__add_PlaybackDone(TriggerAnimationState* __this, ::uDelegate* value)
{
    __this->PlaybackDone = ::uCast< ::uDelegate*>(::app::Uno::Delegate__Combine(NULL, (::uDelegate*)__this->PlaybackDone, (::uDelegate*)value), ::app::Uno::Action__object__typeof());
}

void TriggerAnimationState__add_ProgressUpdated(TriggerAnimationState* __this, ::uDelegate* value)
{
    __this->ProgressUpdated = ::uCast< ::uDelegate*>(::app::Uno::Delegate__Combine(NULL, (::uDelegate*)__this->ProgressUpdated, (::uDelegate*)value), ::app::Uno::Action__object__typeof());
}

void TriggerAnimationState__Dispose(TriggerAnimationState* __this)
{
    if (__this->_forePlayer != NULL)
    {
        ::uPtr< ::app::Fuse::Animations::Player*>(__this->_forePlayer)->Disable();
        __this->_forePlayer = NULL;
    }

    if (__this->_backPlayer != NULL)
    {
        ::uPtr< ::app::Fuse::Animations::Player*>(__this->_backPlayer)->Disable();
        __this->_backPlayer = NULL;
    }

    __this->_curPlayer = NULL;
    __this->_node = NULL;
}

::app::Fuse::Animations::TriggerAnimation* TriggerAnimationState__get_Animation(TriggerAnimationState* __this)
{
    return __this->_Animation;
}

double TriggerAnimationState__get_CurrentTotalDuration(TriggerAnimationState* __this)
{
    if (__this->_curPlayer == NULL)
    {
        return ::uPtr< ::app::Fuse::Animations::TriggerAnimation*>(__this->Animation())->GetTotalDuration(0);
    }

    return ::uPtr< ::app::Fuse::Animations::Player*>(__this->_curPlayer)->TotalDuration();
}

double TriggerAnimationState__get_PreviousProgress(TriggerAnimationState* __this)
{
    return __this->_prevProgress;
}

double TriggerAnimationState__get_Progress(TriggerAnimationState* __this)
{
    if (__this->_curPlayer != NULL)
    {
        return ::uPtr< ::app::Fuse::Animations::Player*>(__this->_curPlayer)->Progress();
    }

    return 0.0;
}

bool TriggerAnimationState__get_ProgressFullOff(TriggerAnimationState* __this)
{
    return __this->Progress() <= 0.0;
}

bool TriggerAnimationState__get_ProgressFullOn(TriggerAnimationState* __this)
{
    return __this->Progress() >= 1.0;
}

::app::Fuse::Animations::Player* TriggerAnimationState__GetCurrentPlayer(TriggerAnimationState* __this, int tendTo)
{
    if (((__this->_curPlayer != NULL) && (::uPtr< ::app::Fuse::Animations::Player*>(__this->_curPlayer)->Progress() < 1.0)) && (::uPtr< ::app::Fuse::Animations::Player*>(__this->_curPlayer)->Progress() > 0.0))
    {
        return __this->_curPlayer;
    }

    return ::uAs< ::app::Fuse::Animations::Player*>(__this->GetPlayer(tendTo, false), ::app::Fuse::Animations::Player__typeof());
}

::app::Fuse::Animations::Player* TriggerAnimationState__GetPlayer(TriggerAnimationState* __this, int variant, bool noFade)
{
    ::app::Fuse::Animations::Player* cur;
    ::app::Fuse::Animations::Player* prev;
    variant = ::uPtr< ::app::Fuse::Animations::TriggerAnimation*>(__this->Animation())->RestrictVariant(variant);

    if ((__this->_curPlayer != NULL) && (__this->_curPlayerVariant == variant))
    {
        return __this->_curPlayer;
    }

    bool isNew = false;

    if (variant == 0)
    {
        if (__this->_forePlayer == NULL)
        {
            __this->_forePlayer = ::uPtr< ::app::Fuse::Animations::TriggerAnimation*>(__this->Animation())->CreatePlayer(__this->_node, variant);
            isNew = true;
        }

        cur = __this->_forePlayer;
        prev = __this->_backPlayer;
    }
    else
    {
        if (__this->_backPlayer == NULL)
        {
            __this->_backPlayer = ::uPtr< ::app::Fuse::Animations::TriggerAnimation*>(__this->Animation())->CreatePlayer(__this->_node, variant);
            ::uPtr< ::app::Fuse::Animations::Player*>(__this->_backPlayer)->SeekProgress(1.0, false);
            isNew = true;
        }

        cur = __this->_backPlayer;
        prev = __this->_forePlayer;
    }

    if (isNew)
    {
        __this->TrackProgress(cur);
    }

    __this->_curPlayer = cur;
    __this->_curPlayerVariant = variant;

    if (prev != NULL)
    {
        double prevProgress = ::uPtr< ::app::Fuse::Animations::Player*>(prev)->Progress();
        prev->SeekProgress(prevProgress, false);
        ::uPtr< ::app::Fuse::Animations::Player*>(cur)->SeekProgress(prevProgress, false);

        if (isNew)
        {
            cur->Strength(0.0);
        }

        double remainTime = prev->RemainTime();

        if ((prev->IsSyncState() || (remainTime < 9.9999997473787516e-06)) || noFade)
        {
            ::uPtr< ::app::Fuse::Animations::Player*>(prev)->Strength(0.0);
            ::uPtr< ::app::Fuse::Animations::Player*>(cur)->Strength(1.0);
        }
        else
        {
            double fadeTime = ::app::Uno::Math__Min(NULL, remainTime, 0.5);
            ::uPtr< ::app::Fuse::Animations::Player*>(cur)->FadeIn(fadeTime);
            ::uPtr< ::app::Fuse::Animations::Player*>(prev)->FadeOut(fadeTime);
        }
    }

    return cur;
}

TriggerAnimationState* TriggerAnimationState__New_1(::uStatic* __this, ::app::Fuse::Animations::TriggerAnimation* animation, ::app::Fuse::Node* node)
{
    TriggerAnimationState* inst = (TriggerAnimationState*)::uAllocObject(sizeof(TriggerAnimationState), TriggerAnimationState__typeof());
    inst->_ObjInit(animation, node);
    return inst;
}

void TriggerAnimationState__OnPlaybackDone(TriggerAnimationState* __this, ::uObject* s)
{
    if (s != __this->_curPlayer)
    {
        return;
    }

    if (::app::Uno::Delegate__op_Inequality(NULL, (::uDelegate*)__this->PlaybackDone, NULL))
    {
        ::uPtr< ::uDelegate*>(__this->PlaybackDone)->InvokeVoid< ::uObject*>((::uObject*)__this);
    }
}

void TriggerAnimationState__OnProgressUpdated(TriggerAnimationState* __this, ::uObject* s)
{
    if (s != __this->_curPlayer)
    {
        return;
    }

    if (::app::Uno::Delegate__op_Inequality(NULL, (::uDelegate*)__this->ProgressUpdated, NULL))
    {
        ::uPtr< ::uDelegate*>(__this->ProgressUpdated)->InvokeVoid< ::uObject*>((::uObject*)__this);
    }

    __this->_prevProgress = __this->Progress();
}

void TriggerAnimationState__PlayEnd(TriggerAnimationState* __this, bool on)
{
    if (on)
    {
        __this->PlayOn();
    }
    else
    {
        __this->PlayOff();
    }
}

void TriggerAnimationState__PlayOff(TriggerAnimationState* __this)
{
    ::app::Fuse::Animations::Player* p = __this->GetPlayer(1, false);
    ::uPtr< ::app::Fuse::Animations::Player*>(p)->PlayToStart();
}

void TriggerAnimationState__PlayOn(TriggerAnimationState* __this)
{
    ::app::Fuse::Animations::Player* p = __this->GetPlayer(0, false);
    ::uPtr< ::app::Fuse::Animations::Player*>(p)->PlayToEnd();
}

void TriggerAnimationState__PlayToProgress(TriggerAnimationState* __this, double progress, int tendTo)
{
    ::app::Fuse::Animations::Player* player = __this->GetCurrentPlayer(tendTo);
    ::uPtr< ::app::Fuse::Animations::Player*>(player)->PlayToProgress(progress);
}

void TriggerAnimationState__remove_PlaybackDone(TriggerAnimationState* __this, ::uDelegate* value)
{
    __this->PlaybackDone = ::uCast< ::uDelegate*>(::app::Uno::Delegate__Remove(NULL, (::uDelegate*)__this->PlaybackDone, (::uDelegate*)value), ::app::Uno::Action__object__typeof());
}

void TriggerAnimationState__remove_ProgressUpdated(TriggerAnimationState* __this, ::uDelegate* value)
{
    __this->ProgressUpdated = ::uCast< ::uDelegate*>(::app::Uno::Delegate__Remove(NULL, (::uDelegate*)__this->ProgressUpdated, (::uDelegate*)value), ::app::Uno::Action__object__typeof());
}

void TriggerAnimationState__SeekProgress(TriggerAnimationState* __this, double newProgress, int tendTo, int flags)
{
    bool bypassUpdate = (flags & 2) == 2;
    ::app::Fuse::Animations::Player* player = ((flags & 1) == 1) ? __this->GetPlayer(tendTo, true) : __this->GetCurrentPlayer(tendTo);

    if (bypassUpdate)
    {
        __this->_prevProgress = newProgress;
    }

    ::uPtr< ::app::Fuse::Animations::Player*>(player)->SeekProgress(newProgress, !bypassUpdate);
}

void TriggerAnimationState__set_Animation(TriggerAnimationState* __this, ::app::Fuse::Animations::TriggerAnimation* value)
{
    __this->_Animation = value;
}

void TriggerAnimationState__TrackProgress(TriggerAnimationState* __this, ::app::Fuse::Animations::Player* player)
{
    ::uPtr< ::app::Fuse::Animations::Player*>(player)->ProgressUpdated = ::uNewDelegateNonVirt(::app::Uno::Action__object__typeof(), (const void*)TriggerAnimationState__OnProgressUpdated, __this);
    player->DoneCallback(::uNewDelegateNonVirt(::app::Uno::Action__object__typeof(), (const void*)TriggerAnimationState__OnPlaybackDone, __this));
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Animations\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

::uEnumType* TriggerAnimationState_SeekFlags__typeof()
{
    static ::uStaticStrong< ::uEnumType*> type;
    if (type != NULL) return type;

    type = ::uAllocEnumType("Fuse.Animations.TriggerAnimationState.SeekFlags", ::app::Uno::Int__typeof(), 2);

    type->SetLiterals(
        "ForcePlayer", 1LL,
        "BypassUpdate", 2LL);

    ::uRegisterType(type);
    return type;
}

}}}
