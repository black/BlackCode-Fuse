// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Animations\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_FUSE_ANIMATIONS_AVERAGE_MIXER_H__
#define __APP_FUSE_ANIMATIONS_AVERAGE_MIXER_H__

#include <app/Fuse.Animations.IMixer.h>
#include <app/Fuse.Animations.MixerBase.h>
#include <Uno.h>
namespace app { namespace Fuse { namespace Animations { struct MasterBase__Fuse_Transform; } } }
namespace app { namespace Fuse { namespace Animations { struct MasterProperty__bool; } } }
namespace app { namespace Fuse { namespace Animations { struct MasterProperty__char; } } }
namespace app { namespace Fuse { namespace Animations { struct MasterProperty__double; } } }
namespace app { namespace Fuse { namespace Animations { struct MasterProperty__float; } } }
namespace app { namespace Fuse { namespace Animations { struct MasterProperty__float2; } } }
namespace app { namespace Fuse { namespace Animations { struct MasterProperty__float3; } } }
namespace app { namespace Fuse { namespace Animations { struct MasterProperty__float4; } } }
namespace app { namespace Fuse { namespace Animations { struct MasterProperty__Fuse_Animations_AnimationVariant; } } }
namespace app { namespace Fuse { namespace Animations { struct MasterProperty__Fuse_Animations_Easing; } } }
namespace app { namespace Fuse { namespace Animations { struct MasterProperty__Fuse_Animations_KeyframeInterpolation; } } }
namespace app { namespace Fuse { namespace Animations { struct MasterProperty__Fuse_Animations_MixOp; } } }
namespace app { namespace Fuse { namespace Animations { struct MasterProperty__Fuse_Drawing_BlendMode; } } }
namespace app { namespace Fuse { namespace Animations { struct MasterProperty__Fuse_Drawing_Brush; } } }
namespace app { namespace Fuse { namespace Animations { struct MasterProperty__Fuse_Drawing_DynamicBrush; } } }
namespace app { namespace Fuse { namespace Animations { struct MasterProperty__Fuse_Drawing_GradientStop; } } }
namespace app { namespace Fuse { namespace Animations { struct MasterProperty__Fuse_Drawing_LinearGradient; } } }
namespace app { namespace Fuse { namespace Animations { struct MasterProperty__Fuse_Drawing_SolidColor; } } }
namespace app { namespace Fuse { namespace Animations { struct MasterProperty__Fuse_Drawing_StaticBrush; } } }
namespace app { namespace Fuse { namespace Animations { struct MasterProperty__Fuse_Elements_Alignment; } } }
namespace app { namespace Fuse { namespace Animations { struct MasterProperty__Fuse_Elements_CachingMode; } } }
namespace app { namespace Fuse { namespace Animations { struct MasterProperty__Fuse_Elements_Element; } } }
namespace app { namespace Fuse { namespace Animations { struct MasterProperty__Fuse_Elements_HitTestMode; } } }
namespace app { namespace Fuse { namespace Animations { struct MasterProperty__Fuse_Elements_SizeUnit; } } }
namespace app { namespace Fuse { namespace Animations { struct MasterProperty__Fuse_Elements_StretchDirection; } } }
namespace app { namespace Fuse { namespace Animations { struct MasterProperty__Fuse_Elements_StretchMode; } } }
namespace app { namespace Fuse { namespace Animations { struct MasterProperty__Fuse_Elements_StretchSizing; } } }
namespace app { namespace Fuse { namespace Animations { struct MasterProperty__Fuse_Elements_TextAlignment; } } }
namespace app { namespace Fuse { namespace Animations { struct MasterProperty__Fuse_Elements_TextWrapping; } } }
namespace app { namespace Fuse { namespace Animations { struct MasterProperty__Fuse_Elements_Visibility; } } }
namespace app { namespace Fuse { namespace Animations { struct MasterProperty__Fuse_Font; } } }
namespace app { namespace Fuse { namespace Animations { struct MasterProperty__Fuse_Gestures_Edge; } } }
namespace app { namespace Fuse { namespace Animations { struct MasterProperty__Fuse_Gestures_ScrollDirections; } } }
namespace app { namespace Fuse { namespace Animations { struct MasterProperty__Fuse_Layouts_Dock; } } }
namespace app { namespace Fuse { namespace Animations { struct MasterProperty__Fuse_Layouts_FlowDirection; } } }
namespace app { namespace Fuse { namespace Animations { struct MasterProperty__Fuse_Layouts_Metric; } } }
namespace app { namespace Fuse { namespace Animations { struct MasterProperty__Fuse_Layouts_Orientation; } } }
namespace app { namespace Fuse { namespace Animations { struct MasterProperty__Fuse_Navigation_NavigationDirection; } } }
namespace app { namespace Fuse { namespace Animations { struct MasterProperty__Fuse_Navigation_NavigationEdge; } } }
namespace app { namespace Fuse { namespace Animations { struct MasterProperty__Fuse_Navigation_NavigationGotoMode; } } }
namespace app { namespace Fuse { namespace Animations { struct MasterProperty__Fuse_Navigation_SnapTo; } } }
namespace app { namespace Fuse { namespace Animations { struct MasterProperty__Fuse_Navigation_SwipeDirection; } } }
namespace app { namespace Fuse { namespace Animations { struct MasterProperty__Fuse_Navigation_SwipeEnds; } } }
namespace app { namespace Fuse { namespace Animations { struct MasterProperty__Fuse_Node; } } }
namespace app { namespace Fuse { namespace Animations { struct MasterProperty__Fuse_Resources_ImageSource; } } }
namespace app { namespace Fuse { namespace Animations { struct MasterProperty__Fuse_Triggers_Actions_TriggerDirection; } } }
namespace app { namespace Fuse { namespace Animations { struct MasterProperty__Fuse_Triggers_State; } } }
namespace app { namespace Fuse { namespace Animations { struct MasterProperty__Fuse_Triggers_StateTransition; } } }
namespace app { namespace Fuse { namespace Animations { struct MasterProperty__Fuse_Triggers_TriggerBypassMode; } } }
namespace app { namespace Fuse { namespace Animations { struct MasterProperty__int; } } }
namespace app { namespace Fuse { namespace Animations { struct MasterProperty__int2; } } }
namespace app { namespace Fuse { namespace Animations { struct MasterProperty__int3; } } }
namespace app { namespace Fuse { namespace Animations { struct MasterProperty__int4; } } }
namespace app { namespace Fuse { namespace Animations { struct MasterProperty__long; } } }
namespace app { namespace Fuse { namespace Animations { struct MasterProperty__object; } } }
namespace app { namespace Fuse { namespace Animations { struct MasterProperty__short; } } }
namespace app { namespace Fuse { namespace Animations { struct MasterProperty__string; } } }
namespace app { namespace Fuse { namespace Animations { struct MasterProperty__Uno_EventArgs; } } }
namespace app { namespace Fuse { namespace Animations { struct MasterProperty__Uno_Platform_iOS_StatusBarStyle; } } }
namespace app { namespace Fuse { namespace Animations { struct MasterProperty__Uno_UX_FileSource; } } }
namespace app { namespace Fuse { struct Node; } }
namespace app { namespace Uno { namespace UX { struct Property__bool; } } }
namespace app { namespace Uno { namespace UX { struct Property__char; } } }
namespace app { namespace Uno { namespace UX { struct Property__double; } } }
namespace app { namespace Uno { namespace UX { struct Property__float; } } }
namespace app { namespace Uno { namespace UX { struct Property__float2; } } }
namespace app { namespace Uno { namespace UX { struct Property__float3; } } }
namespace app { namespace Uno { namespace UX { struct Property__float4; } } }
namespace app { namespace Uno { namespace UX { struct Property__Fuse_Animations_AnimationVariant; } } }
namespace app { namespace Uno { namespace UX { struct Property__Fuse_Animations_Easing; } } }
namespace app { namespace Uno { namespace UX { struct Property__Fuse_Animations_KeyframeInterpolation; } } }
namespace app { namespace Uno { namespace UX { struct Property__Fuse_Animations_MixOp; } } }
namespace app { namespace Uno { namespace UX { struct Property__Fuse_Drawing_BlendMode; } } }
namespace app { namespace Uno { namespace UX { struct Property__Fuse_Drawing_Brush; } } }
namespace app { namespace Uno { namespace UX { struct Property__Fuse_Drawing_DynamicBrush; } } }
namespace app { namespace Uno { namespace UX { struct Property__Fuse_Drawing_GradientStop; } } }
namespace app { namespace Uno { namespace UX { struct Property__Fuse_Drawing_LinearGradient; } } }
namespace app { namespace Uno { namespace UX { struct Property__Fuse_Drawing_SolidColor; } } }
namespace app { namespace Uno { namespace UX { struct Property__Fuse_Drawing_StaticBrush; } } }
namespace app { namespace Uno { namespace UX { struct Property__Fuse_Elements_Alignment; } } }
namespace app { namespace Uno { namespace UX { struct Property__Fuse_Elements_CachingMode; } } }
namespace app { namespace Uno { namespace UX { struct Property__Fuse_Elements_Element; } } }
namespace app { namespace Uno { namespace UX { struct Property__Fuse_Elements_HitTestMode; } } }
namespace app { namespace Uno { namespace UX { struct Property__Fuse_Elements_SizeUnit; } } }
namespace app { namespace Uno { namespace UX { struct Property__Fuse_Elements_StretchDirection; } } }
namespace app { namespace Uno { namespace UX { struct Property__Fuse_Elements_StretchMode; } } }
namespace app { namespace Uno { namespace UX { struct Property__Fuse_Elements_StretchSizing; } } }
namespace app { namespace Uno { namespace UX { struct Property__Fuse_Elements_TextAlignment; } } }
namespace app { namespace Uno { namespace UX { struct Property__Fuse_Elements_TextWrapping; } } }
namespace app { namespace Uno { namespace UX { struct Property__Fuse_Elements_Visibility; } } }
namespace app { namespace Uno { namespace UX { struct Property__Fuse_Font; } } }
namespace app { namespace Uno { namespace UX { struct Property__Fuse_Gestures_Edge; } } }
namespace app { namespace Uno { namespace UX { struct Property__Fuse_Gestures_ScrollDirections; } } }
namespace app { namespace Uno { namespace UX { struct Property__Fuse_Layouts_Dock; } } }
namespace app { namespace Uno { namespace UX { struct Property__Fuse_Layouts_FlowDirection; } } }
namespace app { namespace Uno { namespace UX { struct Property__Fuse_Layouts_Metric; } } }
namespace app { namespace Uno { namespace UX { struct Property__Fuse_Layouts_Orientation; } } }
namespace app { namespace Uno { namespace UX { struct Property__Fuse_Navigation_NavigationDirection; } } }
namespace app { namespace Uno { namespace UX { struct Property__Fuse_Navigation_NavigationEdge; } } }
namespace app { namespace Uno { namespace UX { struct Property__Fuse_Navigation_NavigationGotoMode; } } }
namespace app { namespace Uno { namespace UX { struct Property__Fuse_Navigation_SnapTo; } } }
namespace app { namespace Uno { namespace UX { struct Property__Fuse_Navigation_SwipeDirection; } } }
namespace app { namespace Uno { namespace UX { struct Property__Fuse_Navigation_SwipeEnds; } } }
namespace app { namespace Uno { namespace UX { struct Property__Fuse_Node; } } }
namespace app { namespace Uno { namespace UX { struct Property__Fuse_Resources_ImageSource; } } }
namespace app { namespace Uno { namespace UX { struct Property__Fuse_Triggers_Actions_TriggerDirection; } } }
namespace app { namespace Uno { namespace UX { struct Property__Fuse_Triggers_State; } } }
namespace app { namespace Uno { namespace UX { struct Property__Fuse_Triggers_StateTransition; } } }
namespace app { namespace Uno { namespace UX { struct Property__Fuse_Triggers_TriggerBypassMode; } } }
namespace app { namespace Uno { namespace UX { struct Property__int; } } }
namespace app { namespace Uno { namespace UX { struct Property__int2; } } }
namespace app { namespace Uno { namespace UX { struct Property__int3; } } }
namespace app { namespace Uno { namespace UX { struct Property__int4; } } }
namespace app { namespace Uno { namespace UX { struct Property__long; } } }
namespace app { namespace Uno { namespace UX { struct Property__object; } } }
namespace app { namespace Uno { namespace UX { struct Property__short; } } }
namespace app { namespace Uno { namespace UX { struct Property__string; } } }
namespace app { namespace Uno { namespace UX { struct Property__Uno_EventArgs; } } }
namespace app { namespace Uno { namespace UX { struct Property__Uno_Platform_iOS_StatusBarStyle; } } }
namespace app { namespace Uno { namespace UX { struct Property__Uno_UX_FileSource; } } }

namespace app {
namespace Fuse {
namespace Animations {

struct AverageMixer;

struct AverageMixer__uType : ::app::Fuse::Animations::MixerBase__uType
{
};

AverageMixer__uType* AverageMixer__typeof();

void AverageMixer___ObjInit_1(AverageMixer* __this);
::app::Fuse::Animations::MasterProperty__bool* AverageMixer__CreateMaster__bool(AverageMixer* __this, ::app::Uno::UX::Property__bool* property, ::app::Fuse::Animations::MixerBase* mixerBase);
::app::Fuse::Animations::MasterProperty__char* AverageMixer__CreateMaster__char(AverageMixer* __this, ::app::Uno::UX::Property__char* property, ::app::Fuse::Animations::MixerBase* mixerBase);
::app::Fuse::Animations::MasterProperty__double* AverageMixer__CreateMaster__double(AverageMixer* __this, ::app::Uno::UX::Property__double* property, ::app::Fuse::Animations::MixerBase* mixerBase);
::app::Fuse::Animations::MasterProperty__float* AverageMixer__CreateMaster__float(AverageMixer* __this, ::app::Uno::UX::Property__float* property, ::app::Fuse::Animations::MixerBase* mixerBase);
::app::Fuse::Animations::MasterProperty__float2* AverageMixer__CreateMaster__float2(AverageMixer* __this, ::app::Uno::UX::Property__float2* property, ::app::Fuse::Animations::MixerBase* mixerBase);
::app::Fuse::Animations::MasterProperty__float3* AverageMixer__CreateMaster__float3(AverageMixer* __this, ::app::Uno::UX::Property__float3* property, ::app::Fuse::Animations::MixerBase* mixerBase);
::app::Fuse::Animations::MasterProperty__float4* AverageMixer__CreateMaster__float4(AverageMixer* __this, ::app::Uno::UX::Property__float4* property, ::app::Fuse::Animations::MixerBase* mixerBase);
::app::Fuse::Animations::MasterProperty__Fuse_Animations_AnimationVariant* AverageMixer__CreateMaster__Fuse_Animations_AnimationVariant(AverageMixer* __this, ::app::Uno::UX::Property__Fuse_Animations_AnimationVariant* property, ::app::Fuse::Animations::MixerBase* mixerBase);
::app::Fuse::Animations::MasterProperty__Fuse_Animations_Easing* AverageMixer__CreateMaster__Fuse_Animations_Easing(AverageMixer* __this, ::app::Uno::UX::Property__Fuse_Animations_Easing* property, ::app::Fuse::Animations::MixerBase* mixerBase);
::app::Fuse::Animations::MasterProperty__Fuse_Animations_KeyframeInterpolation* AverageMixer__CreateMaster__Fuse_Animations_KeyframeInterpolation(AverageMixer* __this, ::app::Uno::UX::Property__Fuse_Animations_KeyframeInterpolation* property, ::app::Fuse::Animations::MixerBase* mixerBase);
::app::Fuse::Animations::MasterProperty__Fuse_Animations_MixOp* AverageMixer__CreateMaster__Fuse_Animations_MixOp(AverageMixer* __this, ::app::Uno::UX::Property__Fuse_Animations_MixOp* property, ::app::Fuse::Animations::MixerBase* mixerBase);
::app::Fuse::Animations::MasterProperty__Fuse_Drawing_BlendMode* AverageMixer__CreateMaster__Fuse_Drawing_BlendMode(AverageMixer* __this, ::app::Uno::UX::Property__Fuse_Drawing_BlendMode* property, ::app::Fuse::Animations::MixerBase* mixerBase);
::app::Fuse::Animations::MasterProperty__Fuse_Drawing_Brush* AverageMixer__CreateMaster__Fuse_Drawing_Brush(AverageMixer* __this, ::app::Uno::UX::Property__Fuse_Drawing_Brush* property, ::app::Fuse::Animations::MixerBase* mixerBase);
::app::Fuse::Animations::MasterProperty__Fuse_Drawing_DynamicBrush* AverageMixer__CreateMaster__Fuse_Drawing_DynamicBrush(AverageMixer* __this, ::app::Uno::UX::Property__Fuse_Drawing_DynamicBrush* property, ::app::Fuse::Animations::MixerBase* mixerBase);
::app::Fuse::Animations::MasterProperty__Fuse_Drawing_GradientStop* AverageMixer__CreateMaster__Fuse_Drawing_GradientStop(AverageMixer* __this, ::app::Uno::UX::Property__Fuse_Drawing_GradientStop* property, ::app::Fuse::Animations::MixerBase* mixerBase);
::app::Fuse::Animations::MasterProperty__Fuse_Drawing_LinearGradient* AverageMixer__CreateMaster__Fuse_Drawing_LinearGradient(AverageMixer* __this, ::app::Uno::UX::Property__Fuse_Drawing_LinearGradient* property, ::app::Fuse::Animations::MixerBase* mixerBase);
::app::Fuse::Animations::MasterProperty__Fuse_Drawing_SolidColor* AverageMixer__CreateMaster__Fuse_Drawing_SolidColor(AverageMixer* __this, ::app::Uno::UX::Property__Fuse_Drawing_SolidColor* property, ::app::Fuse::Animations::MixerBase* mixerBase);
::app::Fuse::Animations::MasterProperty__Fuse_Drawing_StaticBrush* AverageMixer__CreateMaster__Fuse_Drawing_StaticBrush(AverageMixer* __this, ::app::Uno::UX::Property__Fuse_Drawing_StaticBrush* property, ::app::Fuse::Animations::MixerBase* mixerBase);
::app::Fuse::Animations::MasterProperty__Fuse_Elements_Alignment* AverageMixer__CreateMaster__Fuse_Elements_Alignment(AverageMixer* __this, ::app::Uno::UX::Property__Fuse_Elements_Alignment* property, ::app::Fuse::Animations::MixerBase* mixerBase);
::app::Fuse::Animations::MasterProperty__Fuse_Elements_CachingMode* AverageMixer__CreateMaster__Fuse_Elements_CachingMode(AverageMixer* __this, ::app::Uno::UX::Property__Fuse_Elements_CachingMode* property, ::app::Fuse::Animations::MixerBase* mixerBase);
::app::Fuse::Animations::MasterProperty__Fuse_Elements_Element* AverageMixer__CreateMaster__Fuse_Elements_Element(AverageMixer* __this, ::app::Uno::UX::Property__Fuse_Elements_Element* property, ::app::Fuse::Animations::MixerBase* mixerBase);
::app::Fuse::Animations::MasterProperty__Fuse_Elements_HitTestMode* AverageMixer__CreateMaster__Fuse_Elements_HitTestMode(AverageMixer* __this, ::app::Uno::UX::Property__Fuse_Elements_HitTestMode* property, ::app::Fuse::Animations::MixerBase* mixerBase);
::app::Fuse::Animations::MasterProperty__Fuse_Elements_SizeUnit* AverageMixer__CreateMaster__Fuse_Elements_SizeUnit(AverageMixer* __this, ::app::Uno::UX::Property__Fuse_Elements_SizeUnit* property, ::app::Fuse::Animations::MixerBase* mixerBase);
::app::Fuse::Animations::MasterProperty__Fuse_Elements_StretchDirection* AverageMixer__CreateMaster__Fuse_Elements_StretchDirection(AverageMixer* __this, ::app::Uno::UX::Property__Fuse_Elements_StretchDirection* property, ::app::Fuse::Animations::MixerBase* mixerBase);
::app::Fuse::Animations::MasterProperty__Fuse_Elements_StretchMode* AverageMixer__CreateMaster__Fuse_Elements_StretchMode(AverageMixer* __this, ::app::Uno::UX::Property__Fuse_Elements_StretchMode* property, ::app::Fuse::Animations::MixerBase* mixerBase);
::app::Fuse::Animations::MasterProperty__Fuse_Elements_StretchSizing* AverageMixer__CreateMaster__Fuse_Elements_StretchSizing(AverageMixer* __this, ::app::Uno::UX::Property__Fuse_Elements_StretchSizing* property, ::app::Fuse::Animations::MixerBase* mixerBase);
::app::Fuse::Animations::MasterProperty__Fuse_Elements_TextAlignment* AverageMixer__CreateMaster__Fuse_Elements_TextAlignment(AverageMixer* __this, ::app::Uno::UX::Property__Fuse_Elements_TextAlignment* property, ::app::Fuse::Animations::MixerBase* mixerBase);
::app::Fuse::Animations::MasterProperty__Fuse_Elements_TextWrapping* AverageMixer__CreateMaster__Fuse_Elements_TextWrapping(AverageMixer* __this, ::app::Uno::UX::Property__Fuse_Elements_TextWrapping* property, ::app::Fuse::Animations::MixerBase* mixerBase);
::app::Fuse::Animations::MasterProperty__Fuse_Elements_Visibility* AverageMixer__CreateMaster__Fuse_Elements_Visibility(AverageMixer* __this, ::app::Uno::UX::Property__Fuse_Elements_Visibility* property, ::app::Fuse::Animations::MixerBase* mixerBase);
::app::Fuse::Animations::MasterProperty__Fuse_Font* AverageMixer__CreateMaster__Fuse_Font(AverageMixer* __this, ::app::Uno::UX::Property__Fuse_Font* property, ::app::Fuse::Animations::MixerBase* mixerBase);
::app::Fuse::Animations::MasterProperty__Fuse_Gestures_Edge* AverageMixer__CreateMaster__Fuse_Gestures_Edge(AverageMixer* __this, ::app::Uno::UX::Property__Fuse_Gestures_Edge* property, ::app::Fuse::Animations::MixerBase* mixerBase);
::app::Fuse::Animations::MasterProperty__Fuse_Gestures_ScrollDirections* AverageMixer__CreateMaster__Fuse_Gestures_ScrollDirections(AverageMixer* __this, ::app::Uno::UX::Property__Fuse_Gestures_ScrollDirections* property, ::app::Fuse::Animations::MixerBase* mixerBase);
::app::Fuse::Animations::MasterProperty__Fuse_Layouts_Dock* AverageMixer__CreateMaster__Fuse_Layouts_Dock(AverageMixer* __this, ::app::Uno::UX::Property__Fuse_Layouts_Dock* property, ::app::Fuse::Animations::MixerBase* mixerBase);
::app::Fuse::Animations::MasterProperty__Fuse_Layouts_FlowDirection* AverageMixer__CreateMaster__Fuse_Layouts_FlowDirection(AverageMixer* __this, ::app::Uno::UX::Property__Fuse_Layouts_FlowDirection* property, ::app::Fuse::Animations::MixerBase* mixerBase);
::app::Fuse::Animations::MasterProperty__Fuse_Layouts_Metric* AverageMixer__CreateMaster__Fuse_Layouts_Metric(AverageMixer* __this, ::app::Uno::UX::Property__Fuse_Layouts_Metric* property, ::app::Fuse::Animations::MixerBase* mixerBase);
::app::Fuse::Animations::MasterProperty__Fuse_Layouts_Orientation* AverageMixer__CreateMaster__Fuse_Layouts_Orientation(AverageMixer* __this, ::app::Uno::UX::Property__Fuse_Layouts_Orientation* property, ::app::Fuse::Animations::MixerBase* mixerBase);
::app::Fuse::Animations::MasterProperty__Fuse_Navigation_NavigationDirection* AverageMixer__CreateMaster__Fuse_Navigation_NavigationDirection(AverageMixer* __this, ::app::Uno::UX::Property__Fuse_Navigation_NavigationDirection* property, ::app::Fuse::Animations::MixerBase* mixerBase);
::app::Fuse::Animations::MasterProperty__Fuse_Navigation_NavigationEdge* AverageMixer__CreateMaster__Fuse_Navigation_NavigationEdge(AverageMixer* __this, ::app::Uno::UX::Property__Fuse_Navigation_NavigationEdge* property, ::app::Fuse::Animations::MixerBase* mixerBase);
::app::Fuse::Animations::MasterProperty__Fuse_Navigation_NavigationGotoMode* AverageMixer__CreateMaster__Fuse_Navigation_NavigationGotoMode(AverageMixer* __this, ::app::Uno::UX::Property__Fuse_Navigation_NavigationGotoMode* property, ::app::Fuse::Animations::MixerBase* mixerBase);
::app::Fuse::Animations::MasterProperty__Fuse_Navigation_SnapTo* AverageMixer__CreateMaster__Fuse_Navigation_SnapTo(AverageMixer* __this, ::app::Uno::UX::Property__Fuse_Navigation_SnapTo* property, ::app::Fuse::Animations::MixerBase* mixerBase);
::app::Fuse::Animations::MasterProperty__Fuse_Navigation_SwipeDirection* AverageMixer__CreateMaster__Fuse_Navigation_SwipeDirection(AverageMixer* __this, ::app::Uno::UX::Property__Fuse_Navigation_SwipeDirection* property, ::app::Fuse::Animations::MixerBase* mixerBase);
::app::Fuse::Animations::MasterProperty__Fuse_Navigation_SwipeEnds* AverageMixer__CreateMaster__Fuse_Navigation_SwipeEnds(AverageMixer* __this, ::app::Uno::UX::Property__Fuse_Navigation_SwipeEnds* property, ::app::Fuse::Animations::MixerBase* mixerBase);
::app::Fuse::Animations::MasterProperty__Fuse_Node* AverageMixer__CreateMaster__Fuse_Node(AverageMixer* __this, ::app::Uno::UX::Property__Fuse_Node* property, ::app::Fuse::Animations::MixerBase* mixerBase);
::app::Fuse::Animations::MasterProperty__Fuse_Resources_ImageSource* AverageMixer__CreateMaster__Fuse_Resources_ImageSource(AverageMixer* __this, ::app::Uno::UX::Property__Fuse_Resources_ImageSource* property, ::app::Fuse::Animations::MixerBase* mixerBase);
::app::Fuse::Animations::MasterProperty__Fuse_Triggers_Actions_TriggerDirection* AverageMixer__CreateMaster__Fuse_Triggers_Actions_TriggerDirection(AverageMixer* __this, ::app::Uno::UX::Property__Fuse_Triggers_Actions_TriggerDirection* property, ::app::Fuse::Animations::MixerBase* mixerBase);
::app::Fuse::Animations::MasterProperty__Fuse_Triggers_State* AverageMixer__CreateMaster__Fuse_Triggers_State(AverageMixer* __this, ::app::Uno::UX::Property__Fuse_Triggers_State* property, ::app::Fuse::Animations::MixerBase* mixerBase);
::app::Fuse::Animations::MasterProperty__Fuse_Triggers_StateTransition* AverageMixer__CreateMaster__Fuse_Triggers_StateTransition(AverageMixer* __this, ::app::Uno::UX::Property__Fuse_Triggers_StateTransition* property, ::app::Fuse::Animations::MixerBase* mixerBase);
::app::Fuse::Animations::MasterProperty__Fuse_Triggers_TriggerBypassMode* AverageMixer__CreateMaster__Fuse_Triggers_TriggerBypassMode(AverageMixer* __this, ::app::Uno::UX::Property__Fuse_Triggers_TriggerBypassMode* property, ::app::Fuse::Animations::MixerBase* mixerBase);
::app::Fuse::Animations::MasterProperty__int* AverageMixer__CreateMaster__int(AverageMixer* __this, ::app::Uno::UX::Property__int* property, ::app::Fuse::Animations::MixerBase* mixerBase);
::app::Fuse::Animations::MasterProperty__int2* AverageMixer__CreateMaster__int2(AverageMixer* __this, ::app::Uno::UX::Property__int2* property, ::app::Fuse::Animations::MixerBase* mixerBase);
::app::Fuse::Animations::MasterProperty__int3* AverageMixer__CreateMaster__int3(AverageMixer* __this, ::app::Uno::UX::Property__int3* property, ::app::Fuse::Animations::MixerBase* mixerBase);
::app::Fuse::Animations::MasterProperty__int4* AverageMixer__CreateMaster__int4(AverageMixer* __this, ::app::Uno::UX::Property__int4* property, ::app::Fuse::Animations::MixerBase* mixerBase);
::app::Fuse::Animations::MasterProperty__long* AverageMixer__CreateMaster__long(AverageMixer* __this, ::app::Uno::UX::Property__long* property, ::app::Fuse::Animations::MixerBase* mixerBase);
::app::Fuse::Animations::MasterProperty__object* AverageMixer__CreateMaster__object(AverageMixer* __this, ::app::Uno::UX::Property__object* property, ::app::Fuse::Animations::MixerBase* mixerBase);
::app::Fuse::Animations::MasterProperty__short* AverageMixer__CreateMaster__short(AverageMixer* __this, ::app::Uno::UX::Property__short* property, ::app::Fuse::Animations::MixerBase* mixerBase);
::app::Fuse::Animations::MasterProperty__string* AverageMixer__CreateMaster__string(AverageMixer* __this, ::app::Uno::UX::Property__string* property, ::app::Fuse::Animations::MixerBase* mixerBase);
::app::Fuse::Animations::MasterProperty__Uno_EventArgs* AverageMixer__CreateMaster__Uno_EventArgs(AverageMixer* __this, ::app::Uno::UX::Property__Uno_EventArgs* property, ::app::Fuse::Animations::MixerBase* mixerBase);
::app::Fuse::Animations::MasterProperty__Uno_Platform_iOS_StatusBarStyle* AverageMixer__CreateMaster__Uno_Platform_iOS_StatusBarStyle(AverageMixer* __this, ::app::Uno::UX::Property__Uno_Platform_iOS_StatusBarStyle* property, ::app::Fuse::Animations::MixerBase* mixerBase);
::app::Fuse::Animations::MasterProperty__Uno_UX_FileSource* AverageMixer__CreateMaster__Uno_UX_FileSource(AverageMixer* __this, ::app::Uno::UX::Property__Uno_UX_FileSource* property, ::app::Fuse::Animations::MixerBase* mixerBase);
::app::Fuse::Animations::MasterBase__Fuse_Transform* AverageMixer__CreateMasterTransform(AverageMixer* __this, ::app::Fuse::Node* element, ::app::Fuse::Animations::MixerBase* mixerBase);
AverageMixer* AverageMixer__New_1(::uStatic* __this);

struct AverageMixer : ::app::Fuse::Animations::MixerBase
{
    void _ObjInit_1() { AverageMixer___ObjInit_1(this); }
};

}}}


#endif
