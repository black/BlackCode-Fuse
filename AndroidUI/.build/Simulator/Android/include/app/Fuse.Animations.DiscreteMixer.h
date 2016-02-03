// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Animations\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_FUSE_ANIMATIONS_DISCRETE_MIXER_H__
#define __APP_FUSE_ANIMATIONS_DISCRETE_MIXER_H__

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

struct DiscreteMixer;

struct DiscreteMixer__uType : ::app::Fuse::Animations::MixerBase__uType
{
};

DiscreteMixer__uType* DiscreteMixer__typeof();

void DiscreteMixer___ObjInit_1(DiscreteMixer* __this);
::app::Fuse::Animations::MasterProperty__bool* DiscreteMixer__CreateMaster__bool(DiscreteMixer* __this, ::app::Uno::UX::Property__bool* property, ::app::Fuse::Animations::MixerBase* mixerBase);
::app::Fuse::Animations::MasterProperty__char* DiscreteMixer__CreateMaster__char(DiscreteMixer* __this, ::app::Uno::UX::Property__char* property, ::app::Fuse::Animations::MixerBase* mixerBase);
::app::Fuse::Animations::MasterProperty__double* DiscreteMixer__CreateMaster__double(DiscreteMixer* __this, ::app::Uno::UX::Property__double* property, ::app::Fuse::Animations::MixerBase* mixerBase);
::app::Fuse::Animations::MasterProperty__float* DiscreteMixer__CreateMaster__float(DiscreteMixer* __this, ::app::Uno::UX::Property__float* property, ::app::Fuse::Animations::MixerBase* mixerBase);
::app::Fuse::Animations::MasterProperty__float2* DiscreteMixer__CreateMaster__float2(DiscreteMixer* __this, ::app::Uno::UX::Property__float2* property, ::app::Fuse::Animations::MixerBase* mixerBase);
::app::Fuse::Animations::MasterProperty__float3* DiscreteMixer__CreateMaster__float3(DiscreteMixer* __this, ::app::Uno::UX::Property__float3* property, ::app::Fuse::Animations::MixerBase* mixerBase);
::app::Fuse::Animations::MasterProperty__float4* DiscreteMixer__CreateMaster__float4(DiscreteMixer* __this, ::app::Uno::UX::Property__float4* property, ::app::Fuse::Animations::MixerBase* mixerBase);
::app::Fuse::Animations::MasterProperty__Fuse_Animations_AnimationVariant* DiscreteMixer__CreateMaster__Fuse_Animations_AnimationVariant(DiscreteMixer* __this, ::app::Uno::UX::Property__Fuse_Animations_AnimationVariant* property, ::app::Fuse::Animations::MixerBase* mixerBase);
::app::Fuse::Animations::MasterProperty__Fuse_Animations_Easing* DiscreteMixer__CreateMaster__Fuse_Animations_Easing(DiscreteMixer* __this, ::app::Uno::UX::Property__Fuse_Animations_Easing* property, ::app::Fuse::Animations::MixerBase* mixerBase);
::app::Fuse::Animations::MasterProperty__Fuse_Animations_KeyframeInterpolation* DiscreteMixer__CreateMaster__Fuse_Animations_KeyframeInterpolation(DiscreteMixer* __this, ::app::Uno::UX::Property__Fuse_Animations_KeyframeInterpolation* property, ::app::Fuse::Animations::MixerBase* mixerBase);
::app::Fuse::Animations::MasterProperty__Fuse_Animations_MixOp* DiscreteMixer__CreateMaster__Fuse_Animations_MixOp(DiscreteMixer* __this, ::app::Uno::UX::Property__Fuse_Animations_MixOp* property, ::app::Fuse::Animations::MixerBase* mixerBase);
::app::Fuse::Animations::MasterProperty__Fuse_Drawing_BlendMode* DiscreteMixer__CreateMaster__Fuse_Drawing_BlendMode(DiscreteMixer* __this, ::app::Uno::UX::Property__Fuse_Drawing_BlendMode* property, ::app::Fuse::Animations::MixerBase* mixerBase);
::app::Fuse::Animations::MasterProperty__Fuse_Drawing_Brush* DiscreteMixer__CreateMaster__Fuse_Drawing_Brush(DiscreteMixer* __this, ::app::Uno::UX::Property__Fuse_Drawing_Brush* property, ::app::Fuse::Animations::MixerBase* mixerBase);
::app::Fuse::Animations::MasterProperty__Fuse_Drawing_DynamicBrush* DiscreteMixer__CreateMaster__Fuse_Drawing_DynamicBrush(DiscreteMixer* __this, ::app::Uno::UX::Property__Fuse_Drawing_DynamicBrush* property, ::app::Fuse::Animations::MixerBase* mixerBase);
::app::Fuse::Animations::MasterProperty__Fuse_Drawing_GradientStop* DiscreteMixer__CreateMaster__Fuse_Drawing_GradientStop(DiscreteMixer* __this, ::app::Uno::UX::Property__Fuse_Drawing_GradientStop* property, ::app::Fuse::Animations::MixerBase* mixerBase);
::app::Fuse::Animations::MasterProperty__Fuse_Drawing_LinearGradient* DiscreteMixer__CreateMaster__Fuse_Drawing_LinearGradient(DiscreteMixer* __this, ::app::Uno::UX::Property__Fuse_Drawing_LinearGradient* property, ::app::Fuse::Animations::MixerBase* mixerBase);
::app::Fuse::Animations::MasterProperty__Fuse_Drawing_SolidColor* DiscreteMixer__CreateMaster__Fuse_Drawing_SolidColor(DiscreteMixer* __this, ::app::Uno::UX::Property__Fuse_Drawing_SolidColor* property, ::app::Fuse::Animations::MixerBase* mixerBase);
::app::Fuse::Animations::MasterProperty__Fuse_Drawing_StaticBrush* DiscreteMixer__CreateMaster__Fuse_Drawing_StaticBrush(DiscreteMixer* __this, ::app::Uno::UX::Property__Fuse_Drawing_StaticBrush* property, ::app::Fuse::Animations::MixerBase* mixerBase);
::app::Fuse::Animations::MasterProperty__Fuse_Elements_Alignment* DiscreteMixer__CreateMaster__Fuse_Elements_Alignment(DiscreteMixer* __this, ::app::Uno::UX::Property__Fuse_Elements_Alignment* property, ::app::Fuse::Animations::MixerBase* mixerBase);
::app::Fuse::Animations::MasterProperty__Fuse_Elements_CachingMode* DiscreteMixer__CreateMaster__Fuse_Elements_CachingMode(DiscreteMixer* __this, ::app::Uno::UX::Property__Fuse_Elements_CachingMode* property, ::app::Fuse::Animations::MixerBase* mixerBase);
::app::Fuse::Animations::MasterProperty__Fuse_Elements_Element* DiscreteMixer__CreateMaster__Fuse_Elements_Element(DiscreteMixer* __this, ::app::Uno::UX::Property__Fuse_Elements_Element* property, ::app::Fuse::Animations::MixerBase* mixerBase);
::app::Fuse::Animations::MasterProperty__Fuse_Elements_HitTestMode* DiscreteMixer__CreateMaster__Fuse_Elements_HitTestMode(DiscreteMixer* __this, ::app::Uno::UX::Property__Fuse_Elements_HitTestMode* property, ::app::Fuse::Animations::MixerBase* mixerBase);
::app::Fuse::Animations::MasterProperty__Fuse_Elements_SizeUnit* DiscreteMixer__CreateMaster__Fuse_Elements_SizeUnit(DiscreteMixer* __this, ::app::Uno::UX::Property__Fuse_Elements_SizeUnit* property, ::app::Fuse::Animations::MixerBase* mixerBase);
::app::Fuse::Animations::MasterProperty__Fuse_Elements_StretchDirection* DiscreteMixer__CreateMaster__Fuse_Elements_StretchDirection(DiscreteMixer* __this, ::app::Uno::UX::Property__Fuse_Elements_StretchDirection* property, ::app::Fuse::Animations::MixerBase* mixerBase);
::app::Fuse::Animations::MasterProperty__Fuse_Elements_StretchMode* DiscreteMixer__CreateMaster__Fuse_Elements_StretchMode(DiscreteMixer* __this, ::app::Uno::UX::Property__Fuse_Elements_StretchMode* property, ::app::Fuse::Animations::MixerBase* mixerBase);
::app::Fuse::Animations::MasterProperty__Fuse_Elements_StretchSizing* DiscreteMixer__CreateMaster__Fuse_Elements_StretchSizing(DiscreteMixer* __this, ::app::Uno::UX::Property__Fuse_Elements_StretchSizing* property, ::app::Fuse::Animations::MixerBase* mixerBase);
::app::Fuse::Animations::MasterProperty__Fuse_Elements_TextAlignment* DiscreteMixer__CreateMaster__Fuse_Elements_TextAlignment(DiscreteMixer* __this, ::app::Uno::UX::Property__Fuse_Elements_TextAlignment* property, ::app::Fuse::Animations::MixerBase* mixerBase);
::app::Fuse::Animations::MasterProperty__Fuse_Elements_TextWrapping* DiscreteMixer__CreateMaster__Fuse_Elements_TextWrapping(DiscreteMixer* __this, ::app::Uno::UX::Property__Fuse_Elements_TextWrapping* property, ::app::Fuse::Animations::MixerBase* mixerBase);
::app::Fuse::Animations::MasterProperty__Fuse_Elements_Visibility* DiscreteMixer__CreateMaster__Fuse_Elements_Visibility(DiscreteMixer* __this, ::app::Uno::UX::Property__Fuse_Elements_Visibility* property, ::app::Fuse::Animations::MixerBase* mixerBase);
::app::Fuse::Animations::MasterProperty__Fuse_Font* DiscreteMixer__CreateMaster__Fuse_Font(DiscreteMixer* __this, ::app::Uno::UX::Property__Fuse_Font* property, ::app::Fuse::Animations::MixerBase* mixerBase);
::app::Fuse::Animations::MasterProperty__Fuse_Gestures_Edge* DiscreteMixer__CreateMaster__Fuse_Gestures_Edge(DiscreteMixer* __this, ::app::Uno::UX::Property__Fuse_Gestures_Edge* property, ::app::Fuse::Animations::MixerBase* mixerBase);
::app::Fuse::Animations::MasterProperty__Fuse_Gestures_ScrollDirections* DiscreteMixer__CreateMaster__Fuse_Gestures_ScrollDirections(DiscreteMixer* __this, ::app::Uno::UX::Property__Fuse_Gestures_ScrollDirections* property, ::app::Fuse::Animations::MixerBase* mixerBase);
::app::Fuse::Animations::MasterProperty__Fuse_Layouts_Dock* DiscreteMixer__CreateMaster__Fuse_Layouts_Dock(DiscreteMixer* __this, ::app::Uno::UX::Property__Fuse_Layouts_Dock* property, ::app::Fuse::Animations::MixerBase* mixerBase);
::app::Fuse::Animations::MasterProperty__Fuse_Layouts_FlowDirection* DiscreteMixer__CreateMaster__Fuse_Layouts_FlowDirection(DiscreteMixer* __this, ::app::Uno::UX::Property__Fuse_Layouts_FlowDirection* property, ::app::Fuse::Animations::MixerBase* mixerBase);
::app::Fuse::Animations::MasterProperty__Fuse_Layouts_Metric* DiscreteMixer__CreateMaster__Fuse_Layouts_Metric(DiscreteMixer* __this, ::app::Uno::UX::Property__Fuse_Layouts_Metric* property, ::app::Fuse::Animations::MixerBase* mixerBase);
::app::Fuse::Animations::MasterProperty__Fuse_Layouts_Orientation* DiscreteMixer__CreateMaster__Fuse_Layouts_Orientation(DiscreteMixer* __this, ::app::Uno::UX::Property__Fuse_Layouts_Orientation* property, ::app::Fuse::Animations::MixerBase* mixerBase);
::app::Fuse::Animations::MasterProperty__Fuse_Navigation_NavigationDirection* DiscreteMixer__CreateMaster__Fuse_Navigation_NavigationDirection(DiscreteMixer* __this, ::app::Uno::UX::Property__Fuse_Navigation_NavigationDirection* property, ::app::Fuse::Animations::MixerBase* mixerBase);
::app::Fuse::Animations::MasterProperty__Fuse_Navigation_NavigationEdge* DiscreteMixer__CreateMaster__Fuse_Navigation_NavigationEdge(DiscreteMixer* __this, ::app::Uno::UX::Property__Fuse_Navigation_NavigationEdge* property, ::app::Fuse::Animations::MixerBase* mixerBase);
::app::Fuse::Animations::MasterProperty__Fuse_Navigation_NavigationGotoMode* DiscreteMixer__CreateMaster__Fuse_Navigation_NavigationGotoMode(DiscreteMixer* __this, ::app::Uno::UX::Property__Fuse_Navigation_NavigationGotoMode* property, ::app::Fuse::Animations::MixerBase* mixerBase);
::app::Fuse::Animations::MasterProperty__Fuse_Navigation_SnapTo* DiscreteMixer__CreateMaster__Fuse_Navigation_SnapTo(DiscreteMixer* __this, ::app::Uno::UX::Property__Fuse_Navigation_SnapTo* property, ::app::Fuse::Animations::MixerBase* mixerBase);
::app::Fuse::Animations::MasterProperty__Fuse_Navigation_SwipeDirection* DiscreteMixer__CreateMaster__Fuse_Navigation_SwipeDirection(DiscreteMixer* __this, ::app::Uno::UX::Property__Fuse_Navigation_SwipeDirection* property, ::app::Fuse::Animations::MixerBase* mixerBase);
::app::Fuse::Animations::MasterProperty__Fuse_Navigation_SwipeEnds* DiscreteMixer__CreateMaster__Fuse_Navigation_SwipeEnds(DiscreteMixer* __this, ::app::Uno::UX::Property__Fuse_Navigation_SwipeEnds* property, ::app::Fuse::Animations::MixerBase* mixerBase);
::app::Fuse::Animations::MasterProperty__Fuse_Node* DiscreteMixer__CreateMaster__Fuse_Node(DiscreteMixer* __this, ::app::Uno::UX::Property__Fuse_Node* property, ::app::Fuse::Animations::MixerBase* mixerBase);
::app::Fuse::Animations::MasterProperty__Fuse_Resources_ImageSource* DiscreteMixer__CreateMaster__Fuse_Resources_ImageSource(DiscreteMixer* __this, ::app::Uno::UX::Property__Fuse_Resources_ImageSource* property, ::app::Fuse::Animations::MixerBase* mixerBase);
::app::Fuse::Animations::MasterProperty__Fuse_Triggers_Actions_TriggerDirection* DiscreteMixer__CreateMaster__Fuse_Triggers_Actions_TriggerDirection(DiscreteMixer* __this, ::app::Uno::UX::Property__Fuse_Triggers_Actions_TriggerDirection* property, ::app::Fuse::Animations::MixerBase* mixerBase);
::app::Fuse::Animations::MasterProperty__Fuse_Triggers_State* DiscreteMixer__CreateMaster__Fuse_Triggers_State(DiscreteMixer* __this, ::app::Uno::UX::Property__Fuse_Triggers_State* property, ::app::Fuse::Animations::MixerBase* mixerBase);
::app::Fuse::Animations::MasterProperty__Fuse_Triggers_StateTransition* DiscreteMixer__CreateMaster__Fuse_Triggers_StateTransition(DiscreteMixer* __this, ::app::Uno::UX::Property__Fuse_Triggers_StateTransition* property, ::app::Fuse::Animations::MixerBase* mixerBase);
::app::Fuse::Animations::MasterProperty__Fuse_Triggers_TriggerBypassMode* DiscreteMixer__CreateMaster__Fuse_Triggers_TriggerBypassMode(DiscreteMixer* __this, ::app::Uno::UX::Property__Fuse_Triggers_TriggerBypassMode* property, ::app::Fuse::Animations::MixerBase* mixerBase);
::app::Fuse::Animations::MasterProperty__int* DiscreteMixer__CreateMaster__int(DiscreteMixer* __this, ::app::Uno::UX::Property__int* property, ::app::Fuse::Animations::MixerBase* mixerBase);
::app::Fuse::Animations::MasterProperty__int2* DiscreteMixer__CreateMaster__int2(DiscreteMixer* __this, ::app::Uno::UX::Property__int2* property, ::app::Fuse::Animations::MixerBase* mixerBase);
::app::Fuse::Animations::MasterProperty__int3* DiscreteMixer__CreateMaster__int3(DiscreteMixer* __this, ::app::Uno::UX::Property__int3* property, ::app::Fuse::Animations::MixerBase* mixerBase);
::app::Fuse::Animations::MasterProperty__int4* DiscreteMixer__CreateMaster__int4(DiscreteMixer* __this, ::app::Uno::UX::Property__int4* property, ::app::Fuse::Animations::MixerBase* mixerBase);
::app::Fuse::Animations::MasterProperty__long* DiscreteMixer__CreateMaster__long(DiscreteMixer* __this, ::app::Uno::UX::Property__long* property, ::app::Fuse::Animations::MixerBase* mixerBase);
::app::Fuse::Animations::MasterProperty__object* DiscreteMixer__CreateMaster__object(DiscreteMixer* __this, ::app::Uno::UX::Property__object* property, ::app::Fuse::Animations::MixerBase* mixerBase);
::app::Fuse::Animations::MasterProperty__short* DiscreteMixer__CreateMaster__short(DiscreteMixer* __this, ::app::Uno::UX::Property__short* property, ::app::Fuse::Animations::MixerBase* mixerBase);
::app::Fuse::Animations::MasterProperty__string* DiscreteMixer__CreateMaster__string(DiscreteMixer* __this, ::app::Uno::UX::Property__string* property, ::app::Fuse::Animations::MixerBase* mixerBase);
::app::Fuse::Animations::MasterProperty__Uno_EventArgs* DiscreteMixer__CreateMaster__Uno_EventArgs(DiscreteMixer* __this, ::app::Uno::UX::Property__Uno_EventArgs* property, ::app::Fuse::Animations::MixerBase* mixerBase);
::app::Fuse::Animations::MasterProperty__Uno_Platform_iOS_StatusBarStyle* DiscreteMixer__CreateMaster__Uno_Platform_iOS_StatusBarStyle(DiscreteMixer* __this, ::app::Uno::UX::Property__Uno_Platform_iOS_StatusBarStyle* property, ::app::Fuse::Animations::MixerBase* mixerBase);
::app::Fuse::Animations::MasterProperty__Uno_UX_FileSource* DiscreteMixer__CreateMaster__Uno_UX_FileSource(DiscreteMixer* __this, ::app::Uno::UX::Property__Uno_UX_FileSource* property, ::app::Fuse::Animations::MixerBase* mixerBase);
::app::Fuse::Animations::MasterBase__Fuse_Transform* DiscreteMixer__CreateMasterTransform(DiscreteMixer* __this, ::app::Fuse::Node* element, ::app::Fuse::Animations::MixerBase* mixerBase);
DiscreteMixer* DiscreteMixer__New_1(::uStatic* __this);

struct DiscreteMixer : ::app::Fuse::Animations::MixerBase
{
    void _ObjInit_1() { DiscreteMixer___ObjInit_1(this); }
};

}}}


#endif
