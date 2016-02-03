// This file was generated based on 'C:\ProgramData\Uno\Packages\FuseCore\0.11.3\Internal\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_FUSE_INTERNAL_BLENDER_MAP_H__
#define __APP_FUSE_INTERNAL_BLENDER_MAP_H__

#include <app/Uno.Object.h>
#include <Uno.h>
namespace app { namespace Fuse { namespace Internal { struct Blender__bool; } } }
namespace app { namespace Fuse { namespace Internal { struct Blender__char; } } }
namespace app { namespace Fuse { namespace Internal { struct Blender__double; } } }
namespace app { namespace Fuse { namespace Internal { struct Blender__float; } } }
namespace app { namespace Fuse { namespace Internal { struct Blender__float2; } } }
namespace app { namespace Fuse { namespace Internal { struct Blender__float3; } } }
namespace app { namespace Fuse { namespace Internal { struct Blender__float4; } } }
namespace app { namespace Fuse { namespace Internal { struct Blender__Fuse_Animations_AnimationVariant; } } }
namespace app { namespace Fuse { namespace Internal { struct Blender__Fuse_Animations_Easing; } } }
namespace app { namespace Fuse { namespace Internal { struct Blender__Fuse_Animations_KeyframeInterpolation; } } }
namespace app { namespace Fuse { namespace Internal { struct Blender__Fuse_Animations_MixOp; } } }
namespace app { namespace Fuse { namespace Internal { struct Blender__Fuse_Drawing_BlendMode; } } }
namespace app { namespace Fuse { namespace Internal { struct Blender__Fuse_Drawing_Brush; } } }
namespace app { namespace Fuse { namespace Internal { struct Blender__Fuse_Drawing_DynamicBrush; } } }
namespace app { namespace Fuse { namespace Internal { struct Blender__Fuse_Drawing_GradientStop; } } }
namespace app { namespace Fuse { namespace Internal { struct Blender__Fuse_Drawing_LinearGradient; } } }
namespace app { namespace Fuse { namespace Internal { struct Blender__Fuse_Drawing_SolidColor; } } }
namespace app { namespace Fuse { namespace Internal { struct Blender__Fuse_Drawing_StaticBrush; } } }
namespace app { namespace Fuse { namespace Internal { struct Blender__Fuse_Elements_Alignment; } } }
namespace app { namespace Fuse { namespace Internal { struct Blender__Fuse_Elements_CachingMode; } } }
namespace app { namespace Fuse { namespace Internal { struct Blender__Fuse_Elements_Element; } } }
namespace app { namespace Fuse { namespace Internal { struct Blender__Fuse_Elements_HitTestMode; } } }
namespace app { namespace Fuse { namespace Internal { struct Blender__Fuse_Elements_SizeUnit; } } }
namespace app { namespace Fuse { namespace Internal { struct Blender__Fuse_Elements_StretchDirection; } } }
namespace app { namespace Fuse { namespace Internal { struct Blender__Fuse_Elements_StretchMode; } } }
namespace app { namespace Fuse { namespace Internal { struct Blender__Fuse_Elements_StretchSizing; } } }
namespace app { namespace Fuse { namespace Internal { struct Blender__Fuse_Elements_TextAlignment; } } }
namespace app { namespace Fuse { namespace Internal { struct Blender__Fuse_Elements_TextWrapping; } } }
namespace app { namespace Fuse { namespace Internal { struct Blender__Fuse_Elements_Visibility; } } }
namespace app { namespace Fuse { namespace Internal { struct Blender__Fuse_Font; } } }
namespace app { namespace Fuse { namespace Internal { struct Blender__Fuse_Gestures_Edge; } } }
namespace app { namespace Fuse { namespace Internal { struct Blender__Fuse_Gestures_ScrollDirections; } } }
namespace app { namespace Fuse { namespace Internal { struct Blender__Fuse_Layouts_Dock; } } }
namespace app { namespace Fuse { namespace Internal { struct Blender__Fuse_Layouts_FlowDirection; } } }
namespace app { namespace Fuse { namespace Internal { struct Blender__Fuse_Layouts_Metric; } } }
namespace app { namespace Fuse { namespace Internal { struct Blender__Fuse_Layouts_Orientation; } } }
namespace app { namespace Fuse { namespace Internal { struct Blender__Fuse_Navigation_NavigationDirection; } } }
namespace app { namespace Fuse { namespace Internal { struct Blender__Fuse_Navigation_NavigationEdge; } } }
namespace app { namespace Fuse { namespace Internal { struct Blender__Fuse_Navigation_NavigationGotoMode; } } }
namespace app { namespace Fuse { namespace Internal { struct Blender__Fuse_Navigation_SnapTo; } } }
namespace app { namespace Fuse { namespace Internal { struct Blender__Fuse_Navigation_SwipeDirection; } } }
namespace app { namespace Fuse { namespace Internal { struct Blender__Fuse_Navigation_SwipeEnds; } } }
namespace app { namespace Fuse { namespace Internal { struct Blender__Fuse_Node; } } }
namespace app { namespace Fuse { namespace Internal { struct Blender__Fuse_Resources_ImageSource; } } }
namespace app { namespace Fuse { namespace Internal { struct Blender__Fuse_Triggers_Actions_TriggerDirection; } } }
namespace app { namespace Fuse { namespace Internal { struct Blender__Fuse_Triggers_State; } } }
namespace app { namespace Fuse { namespace Internal { struct Blender__Fuse_Triggers_StateTransition; } } }
namespace app { namespace Fuse { namespace Internal { struct Blender__Fuse_Triggers_TriggerBypassMode; } } }
namespace app { namespace Fuse { namespace Internal { struct Blender__int; } } }
namespace app { namespace Fuse { namespace Internal { struct Blender__int2; } } }
namespace app { namespace Fuse { namespace Internal { struct Blender__int3; } } }
namespace app { namespace Fuse { namespace Internal { struct Blender__int4; } } }
namespace app { namespace Fuse { namespace Internal { struct Blender__long; } } }
namespace app { namespace Fuse { namespace Internal { struct Blender__object; } } }
namespace app { namespace Fuse { namespace Internal { struct Blender__short; } } }
namespace app { namespace Fuse { namespace Internal { struct Blender__string; } } }
namespace app { namespace Fuse { namespace Internal { struct Blender__Uno_EventArgs; } } }
namespace app { namespace Fuse { namespace Internal { struct Blender__Uno_Platform_iOS_StatusBarStyle; } } }
namespace app { namespace Fuse { namespace Internal { struct Blender__Uno_UX_FileSource; } } }
namespace app { namespace Uno { namespace Collections { struct Dictionary__Uno_Type__object; } } }

namespace app {
namespace Fuse {
namespace Internal {

struct BlenderMap;

extern ::uStaticStrong< ::app::Uno::Collections::Dictionary__Uno_Type__object*> BlenderMap___blenders;

struct BlenderMap__uType : ::uClassType
{
};

BlenderMap__uType* BlenderMap__typeof();

void BlenderMap___ObjInit(BlenderMap* __this);
void BlenderMap___TypeInit(::uStatic* __this);
::app::Fuse::Internal::Blender__bool* BlenderMap__Get__bool(::uStatic* __this);
::app::Fuse::Internal::Blender__char* BlenderMap__Get__char(::uStatic* __this);
::app::Fuse::Internal::Blender__double* BlenderMap__Get__double(::uStatic* __this);
::app::Fuse::Internal::Blender__float* BlenderMap__Get__float(::uStatic* __this);
::app::Fuse::Internal::Blender__float2* BlenderMap__Get__float2(::uStatic* __this);
::app::Fuse::Internal::Blender__float3* BlenderMap__Get__float3(::uStatic* __this);
::app::Fuse::Internal::Blender__float4* BlenderMap__Get__float4(::uStatic* __this);
::app::Fuse::Internal::Blender__Fuse_Animations_AnimationVariant* BlenderMap__Get__Fuse_Animations_AnimationVariant(::uStatic* __this);
::app::Fuse::Internal::Blender__Fuse_Animations_Easing* BlenderMap__Get__Fuse_Animations_Easing(::uStatic* __this);
::app::Fuse::Internal::Blender__Fuse_Animations_KeyframeInterpolation* BlenderMap__Get__Fuse_Animations_KeyframeInterpolation(::uStatic* __this);
::app::Fuse::Internal::Blender__Fuse_Animations_MixOp* BlenderMap__Get__Fuse_Animations_MixOp(::uStatic* __this);
::app::Fuse::Internal::Blender__Fuse_Drawing_BlendMode* BlenderMap__Get__Fuse_Drawing_BlendMode(::uStatic* __this);
::app::Fuse::Internal::Blender__Fuse_Drawing_Brush* BlenderMap__Get__Fuse_Drawing_Brush(::uStatic* __this);
::app::Fuse::Internal::Blender__Fuse_Drawing_DynamicBrush* BlenderMap__Get__Fuse_Drawing_DynamicBrush(::uStatic* __this);
::app::Fuse::Internal::Blender__Fuse_Drawing_GradientStop* BlenderMap__Get__Fuse_Drawing_GradientStop(::uStatic* __this);
::app::Fuse::Internal::Blender__Fuse_Drawing_LinearGradient* BlenderMap__Get__Fuse_Drawing_LinearGradient(::uStatic* __this);
::app::Fuse::Internal::Blender__Fuse_Drawing_SolidColor* BlenderMap__Get__Fuse_Drawing_SolidColor(::uStatic* __this);
::app::Fuse::Internal::Blender__Fuse_Drawing_StaticBrush* BlenderMap__Get__Fuse_Drawing_StaticBrush(::uStatic* __this);
::app::Fuse::Internal::Blender__Fuse_Elements_Alignment* BlenderMap__Get__Fuse_Elements_Alignment(::uStatic* __this);
::app::Fuse::Internal::Blender__Fuse_Elements_CachingMode* BlenderMap__Get__Fuse_Elements_CachingMode(::uStatic* __this);
::app::Fuse::Internal::Blender__Fuse_Elements_Element* BlenderMap__Get__Fuse_Elements_Element(::uStatic* __this);
::app::Fuse::Internal::Blender__Fuse_Elements_HitTestMode* BlenderMap__Get__Fuse_Elements_HitTestMode(::uStatic* __this);
::app::Fuse::Internal::Blender__Fuse_Elements_SizeUnit* BlenderMap__Get__Fuse_Elements_SizeUnit(::uStatic* __this);
::app::Fuse::Internal::Blender__Fuse_Elements_StretchDirection* BlenderMap__Get__Fuse_Elements_StretchDirection(::uStatic* __this);
::app::Fuse::Internal::Blender__Fuse_Elements_StretchMode* BlenderMap__Get__Fuse_Elements_StretchMode(::uStatic* __this);
::app::Fuse::Internal::Blender__Fuse_Elements_StretchSizing* BlenderMap__Get__Fuse_Elements_StretchSizing(::uStatic* __this);
::app::Fuse::Internal::Blender__Fuse_Elements_TextAlignment* BlenderMap__Get__Fuse_Elements_TextAlignment(::uStatic* __this);
::app::Fuse::Internal::Blender__Fuse_Elements_TextWrapping* BlenderMap__Get__Fuse_Elements_TextWrapping(::uStatic* __this);
::app::Fuse::Internal::Blender__Fuse_Elements_Visibility* BlenderMap__Get__Fuse_Elements_Visibility(::uStatic* __this);
::app::Fuse::Internal::Blender__Fuse_Font* BlenderMap__Get__Fuse_Font(::uStatic* __this);
::app::Fuse::Internal::Blender__Fuse_Gestures_Edge* BlenderMap__Get__Fuse_Gestures_Edge(::uStatic* __this);
::app::Fuse::Internal::Blender__Fuse_Gestures_ScrollDirections* BlenderMap__Get__Fuse_Gestures_ScrollDirections(::uStatic* __this);
::app::Fuse::Internal::Blender__Fuse_Layouts_Dock* BlenderMap__Get__Fuse_Layouts_Dock(::uStatic* __this);
::app::Fuse::Internal::Blender__Fuse_Layouts_FlowDirection* BlenderMap__Get__Fuse_Layouts_FlowDirection(::uStatic* __this);
::app::Fuse::Internal::Blender__Fuse_Layouts_Metric* BlenderMap__Get__Fuse_Layouts_Metric(::uStatic* __this);
::app::Fuse::Internal::Blender__Fuse_Layouts_Orientation* BlenderMap__Get__Fuse_Layouts_Orientation(::uStatic* __this);
::app::Fuse::Internal::Blender__Fuse_Navigation_NavigationDirection* BlenderMap__Get__Fuse_Navigation_NavigationDirection(::uStatic* __this);
::app::Fuse::Internal::Blender__Fuse_Navigation_NavigationEdge* BlenderMap__Get__Fuse_Navigation_NavigationEdge(::uStatic* __this);
::app::Fuse::Internal::Blender__Fuse_Navigation_NavigationGotoMode* BlenderMap__Get__Fuse_Navigation_NavigationGotoMode(::uStatic* __this);
::app::Fuse::Internal::Blender__Fuse_Navigation_SnapTo* BlenderMap__Get__Fuse_Navigation_SnapTo(::uStatic* __this);
::app::Fuse::Internal::Blender__Fuse_Navigation_SwipeDirection* BlenderMap__Get__Fuse_Navigation_SwipeDirection(::uStatic* __this);
::app::Fuse::Internal::Blender__Fuse_Navigation_SwipeEnds* BlenderMap__Get__Fuse_Navigation_SwipeEnds(::uStatic* __this);
::app::Fuse::Internal::Blender__Fuse_Node* BlenderMap__Get__Fuse_Node(::uStatic* __this);
::app::Fuse::Internal::Blender__Fuse_Resources_ImageSource* BlenderMap__Get__Fuse_Resources_ImageSource(::uStatic* __this);
::app::Fuse::Internal::Blender__Fuse_Triggers_Actions_TriggerDirection* BlenderMap__Get__Fuse_Triggers_Actions_TriggerDirection(::uStatic* __this);
::app::Fuse::Internal::Blender__Fuse_Triggers_State* BlenderMap__Get__Fuse_Triggers_State(::uStatic* __this);
::app::Fuse::Internal::Blender__Fuse_Triggers_StateTransition* BlenderMap__Get__Fuse_Triggers_StateTransition(::uStatic* __this);
::app::Fuse::Internal::Blender__Fuse_Triggers_TriggerBypassMode* BlenderMap__Get__Fuse_Triggers_TriggerBypassMode(::uStatic* __this);
::app::Fuse::Internal::Blender__int* BlenderMap__Get__int(::uStatic* __this);
::app::Fuse::Internal::Blender__int2* BlenderMap__Get__int2(::uStatic* __this);
::app::Fuse::Internal::Blender__int3* BlenderMap__Get__int3(::uStatic* __this);
::app::Fuse::Internal::Blender__int4* BlenderMap__Get__int4(::uStatic* __this);
::app::Fuse::Internal::Blender__long* BlenderMap__Get__long(::uStatic* __this);
::app::Fuse::Internal::Blender__object* BlenderMap__Get__object(::uStatic* __this);
::app::Fuse::Internal::Blender__short* BlenderMap__Get__short(::uStatic* __this);
::app::Fuse::Internal::Blender__string* BlenderMap__Get__string(::uStatic* __this);
::app::Fuse::Internal::Blender__Uno_EventArgs* BlenderMap__Get__Uno_EventArgs(::uStatic* __this);
::app::Fuse::Internal::Blender__Uno_Platform_iOS_StatusBarStyle* BlenderMap__Get__Uno_Platform_iOS_StatusBarStyle(::uStatic* __this);
::app::Fuse::Internal::Blender__Uno_UX_FileSource* BlenderMap__Get__Uno_UX_FileSource(::uStatic* __this);
BlenderMap* BlenderMap__New_1(::uStatic* __this);

struct BlenderMap : ::uObject
{
    void _ObjInit() { BlenderMap___ObjInit(this); }
};

}}}


#endif
