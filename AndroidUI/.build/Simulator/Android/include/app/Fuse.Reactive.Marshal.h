// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Reactive\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_FUSE_REACTIVE_MARSHAL_H__
#define __APP_FUSE_REACTIVE_MARSHAL_H__

#include <Uno.h>
namespace app { namespace Fuse { namespace Drawing { struct Brush; } } }

namespace app {
namespace Fuse {
namespace Reactive {

struct Marshal__uType : ::uClassType
{
};

Marshal__uType* Marshal__typeof();

int Marshal__ToAlignment(::uStatic* __this, ::uObject* obj);
bool Marshal__ToBool(::uStatic* __this, ::uObject* obj);
::app::Fuse::Drawing::Brush* Marshal__ToBrush(::uStatic* __this, ::uObject* o);
double Marshal__ToDouble(::uStatic* __this, ::uObject* o);
void Marshal__ToFileSource(::uStatic* __this, ::uObject* obj, ::uDelegate* callback);
float Marshal__ToFloat(::uStatic* __this, ::uObject* o);
void Marshal__ToFloat4(::uStatic* __this, ::uObject* o, ::uDelegate* callback);
int Marshal__ToInt(::uStatic* __this, ::uObject* o);
void Marshal__ToType__bool(::uStatic* __this, ::uObject* o, ::uDelegate* callback);
void Marshal__ToType__char(::uStatic* __this, ::uObject* o, ::uDelegate* callback);
void Marshal__ToType__double(::uStatic* __this, ::uObject* o, ::uDelegate* callback);
void Marshal__ToType__float(::uStatic* __this, ::uObject* o, ::uDelegate* callback);
void Marshal__ToType__float2(::uStatic* __this, ::uObject* o, ::uDelegate* callback);
void Marshal__ToType__float3(::uStatic* __this, ::uObject* o, ::uDelegate* callback);
void Marshal__ToType__float4(::uStatic* __this, ::uObject* o, ::uDelegate* callback);
void Marshal__ToType__Fuse_Animations_AnimationVariant(::uStatic* __this, ::uObject* o, ::uDelegate* callback);
void Marshal__ToType__Fuse_Animations_Easing(::uStatic* __this, ::uObject* o, ::uDelegate* callback);
void Marshal__ToType__Fuse_Animations_KeyframeInterpolation(::uStatic* __this, ::uObject* o, ::uDelegate* callback);
void Marshal__ToType__Fuse_Animations_MixOp(::uStatic* __this, ::uObject* o, ::uDelegate* callback);
void Marshal__ToType__Fuse_Drawing_BlendMode(::uStatic* __this, ::uObject* o, ::uDelegate* callback);
void Marshal__ToType__Fuse_Drawing_Brush(::uStatic* __this, ::uObject* o, ::uDelegate* callback);
void Marshal__ToType__Fuse_Drawing_DynamicBrush(::uStatic* __this, ::uObject* o, ::uDelegate* callback);
void Marshal__ToType__Fuse_Drawing_GradientStop(::uStatic* __this, ::uObject* o, ::uDelegate* callback);
void Marshal__ToType__Fuse_Drawing_LinearGradient(::uStatic* __this, ::uObject* o, ::uDelegate* callback);
void Marshal__ToType__Fuse_Drawing_SolidColor(::uStatic* __this, ::uObject* o, ::uDelegate* callback);
void Marshal__ToType__Fuse_Drawing_StaticBrush(::uStatic* __this, ::uObject* o, ::uDelegate* callback);
void Marshal__ToType__Fuse_Elements_Alignment(::uStatic* __this, ::uObject* o, ::uDelegate* callback);
void Marshal__ToType__Fuse_Elements_CachingMode(::uStatic* __this, ::uObject* o, ::uDelegate* callback);
void Marshal__ToType__Fuse_Elements_Element(::uStatic* __this, ::uObject* o, ::uDelegate* callback);
void Marshal__ToType__Fuse_Elements_HitTestMode(::uStatic* __this, ::uObject* o, ::uDelegate* callback);
void Marshal__ToType__Fuse_Elements_SizeUnit(::uStatic* __this, ::uObject* o, ::uDelegate* callback);
void Marshal__ToType__Fuse_Elements_StretchDirection(::uStatic* __this, ::uObject* o, ::uDelegate* callback);
void Marshal__ToType__Fuse_Elements_StretchMode(::uStatic* __this, ::uObject* o, ::uDelegate* callback);
void Marshal__ToType__Fuse_Elements_StretchSizing(::uStatic* __this, ::uObject* o, ::uDelegate* callback);
void Marshal__ToType__Fuse_Elements_TextAlignment(::uStatic* __this, ::uObject* o, ::uDelegate* callback);
void Marshal__ToType__Fuse_Elements_TextWrapping(::uStatic* __this, ::uObject* o, ::uDelegate* callback);
void Marshal__ToType__Fuse_Elements_Visibility(::uStatic* __this, ::uObject* o, ::uDelegate* callback);
void Marshal__ToType__Fuse_Font(::uStatic* __this, ::uObject* o, ::uDelegate* callback);
void Marshal__ToType__Fuse_Gestures_Edge(::uStatic* __this, ::uObject* o, ::uDelegate* callback);
void Marshal__ToType__Fuse_Gestures_ScrollDirections(::uStatic* __this, ::uObject* o, ::uDelegate* callback);
void Marshal__ToType__Fuse_Layouts_Dock(::uStatic* __this, ::uObject* o, ::uDelegate* callback);
void Marshal__ToType__Fuse_Layouts_FlowDirection(::uStatic* __this, ::uObject* o, ::uDelegate* callback);
void Marshal__ToType__Fuse_Layouts_Metric(::uStatic* __this, ::uObject* o, ::uDelegate* callback);
void Marshal__ToType__Fuse_Layouts_Orientation(::uStatic* __this, ::uObject* o, ::uDelegate* callback);
void Marshal__ToType__Fuse_Navigation_NavigationDirection(::uStatic* __this, ::uObject* o, ::uDelegate* callback);
void Marshal__ToType__Fuse_Navigation_NavigationEdge(::uStatic* __this, ::uObject* o, ::uDelegate* callback);
void Marshal__ToType__Fuse_Navigation_NavigationGotoMode(::uStatic* __this, ::uObject* o, ::uDelegate* callback);
void Marshal__ToType__Fuse_Navigation_SnapTo(::uStatic* __this, ::uObject* o, ::uDelegate* callback);
void Marshal__ToType__Fuse_Navigation_SwipeDirection(::uStatic* __this, ::uObject* o, ::uDelegate* callback);
void Marshal__ToType__Fuse_Navigation_SwipeEnds(::uStatic* __this, ::uObject* o, ::uDelegate* callback);
void Marshal__ToType__Fuse_Node(::uStatic* __this, ::uObject* o, ::uDelegate* callback);
void Marshal__ToType__Fuse_Resources_ImageSource(::uStatic* __this, ::uObject* o, ::uDelegate* callback);
void Marshal__ToType__Fuse_Triggers_Actions_TriggerDirection(::uStatic* __this, ::uObject* o, ::uDelegate* callback);
void Marshal__ToType__Fuse_Triggers_State(::uStatic* __this, ::uObject* o, ::uDelegate* callback);
void Marshal__ToType__Fuse_Triggers_StateTransition(::uStatic* __this, ::uObject* o, ::uDelegate* callback);
void Marshal__ToType__Fuse_Triggers_TriggerBypassMode(::uStatic* __this, ::uObject* o, ::uDelegate* callback);
void Marshal__ToType__int(::uStatic* __this, ::uObject* o, ::uDelegate* callback);
void Marshal__ToType__int2(::uStatic* __this, ::uObject* o, ::uDelegate* callback);
void Marshal__ToType__int3(::uStatic* __this, ::uObject* o, ::uDelegate* callback);
void Marshal__ToType__int4(::uStatic* __this, ::uObject* o, ::uDelegate* callback);
void Marshal__ToType__long(::uStatic* __this, ::uObject* o, ::uDelegate* callback);
void Marshal__ToType__object(::uStatic* __this, ::uObject* o, ::uDelegate* callback);
void Marshal__ToType__short(::uStatic* __this, ::uObject* o, ::uDelegate* callback);
void Marshal__ToType__string(::uStatic* __this, ::uObject* o, ::uDelegate* callback);
void Marshal__ToType__Uno_EventArgs(::uStatic* __this, ::uObject* o, ::uDelegate* callback);
void Marshal__ToType__Uno_Platform_iOS_StatusBarStyle(::uStatic* __this, ::uObject* o, ::uDelegate* callback);
void Marshal__ToType__Uno_UX_FileSource(::uStatic* __this, ::uObject* o, ::uDelegate* callback);
int Marshal__ToVisibility(::uStatic* __this, ::uObject* obj);

}}}


#endif
