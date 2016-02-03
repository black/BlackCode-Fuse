// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Animations\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_FUSE_ANIMATIONS_CHANGE__FLOAT3_H__
#define __APP_FUSE_ANIMATIONS_CHANGE__FLOAT3_H__

#include <app/Fuse.Animations.TrackAnimator.h>
#include <Uno.h>
namespace app { namespace Fuse { namespace Animations { struct AnimatorState; } } }
namespace app { namespace Fuse { namespace Animations { struct Converter__float3; } } }
namespace app { namespace Fuse { namespace Animations { struct CreateStateParams; } } }
namespace app { namespace Uno { namespace UX { struct Property__float3; } } }
namespace app { namespace Uno { struct Float2; } }
namespace app { namespace Uno { struct Float3; } }

namespace app {
namespace Fuse {
namespace Animations {

struct Change__float3;

struct Change__float3__uType : ::app::Fuse::Animations::TrackAnimator__uType
{
};

Change__float3__uType* Change__float3__typeof();

void Change__float3___ObjInit_2(Change__float3* __this, ::app::Uno::UX::Property__float3* target);
::app::Fuse::Animations::AnimatorState* Change__float3__CreateState(Change__float3* __this, ::app::Fuse::Animations::CreateStateParams* p);
float Change__float3__get_DegreesX(Change__float3* __this);
::app::Uno::Float2 Change__float3__get_DegreesXY(Change__float3* __this);
float Change__float3__get_DegreesY(Change__float3* __this);
float Change__float3__get_DegreesZ(Change__float3* __this);
bool Change__float3__get_IsContinuous(Change__float3* __this);
::app::Uno::UX::Property__float3* Change__float3__get_Target(Change__float3* __this);
::app::Uno::Float3 Change__float3__get_Value(Change__float3* __this);
float Change__float3__get_X(Change__float3* __this);
::app::Uno::Float2 Change__float3__get_XY(Change__float3* __this);
float Change__float3__get_Y(Change__float3* __this);
float Change__float3__get_Z(Change__float3* __this);
Change__float3* Change__float3__New_1(::uStatic* __this, ::app::Uno::UX::Property__float3* target);
void Change__float3__set_DegreesX(Change__float3* __this, float value);
void Change__float3__set_DegreesXY(Change__float3* __this, ::app::Uno::Float2 value);
void Change__float3__set_DegreesY(Change__float3* __this, float value);
void Change__float3__set_DegreesZ(Change__float3* __this, float value);
void Change__float3__set_Target(Change__float3* __this, ::app::Uno::UX::Property__float3* value);
void Change__float3__set_Value(Change__float3* __this, ::app::Uno::Float3 value);
void Change__float3__set_X(Change__float3* __this, float value);
void Change__float3__set_XY(Change__float3* __this, ::app::Uno::Float2 value);
void Change__float3__set_Y(Change__float3* __this, float value);
void Change__float3__set_Z(Change__float3* __this, float value);

struct Change__float3 : ::app::Fuse::Animations::TrackAnimator
{
    ::uStrong< ::app::Fuse::Animations::Converter__float3*> ContinuousConverter;
    ::uStrong< ::app::Uno::UX::Property__float3*> _Target;

    void _ObjInit_2(::app::Uno::UX::Property__float3* target) { Change__float3___ObjInit_2(this, target); }
    float DegreesX() { return Change__float3__get_DegreesX(this); }
    ::app::Uno::Float2 DegreesXY();
    float DegreesY() { return Change__float3__get_DegreesY(this); }
    float DegreesZ() { return Change__float3__get_DegreesZ(this); }
    bool IsContinuous() { return Change__float3__get_IsContinuous(this); }
    ::app::Uno::UX::Property__float3* Target() { return Change__float3__get_Target(this); }
    ::app::Uno::Float3 Value();
    float X() { return Change__float3__get_X(this); }
    ::app::Uno::Float2 XY();
    float Y() { return Change__float3__get_Y(this); }
    float Z() { return Change__float3__get_Z(this); }
    void DegreesX(float value) { Change__float3__set_DegreesX(this, value); }
    void DegreesXY(::app::Uno::Float2 value);
    void DegreesY(float value) { Change__float3__set_DegreesY(this, value); }
    void DegreesZ(float value) { Change__float3__set_DegreesZ(this, value); }
    void Target(::app::Uno::UX::Property__float3* value) { Change__float3__set_Target(this, value); }
    void Value(::app::Uno::Float3 value);
    void X(float value) { Change__float3__set_X(this, value); }
    void XY(::app::Uno::Float2 value);
    void Y(float value) { Change__float3__set_Y(this, value); }
    void Z(float value) { Change__float3__set_Z(this, value); }
};

}}}

#include <app/Uno.Float2.h>
#include <app/Uno.Float3.h>

namespace app {
namespace Fuse {
namespace Animations {

inline ::app::Uno::Float2 Change__float3::DegreesXY() { return Change__float3__get_DegreesXY(this); }
inline ::app::Uno::Float3 Change__float3::Value() { return Change__float3__get_Value(this); }
inline ::app::Uno::Float2 Change__float3::XY() { return Change__float3__get_XY(this); }
inline void Change__float3::DegreesXY(::app::Uno::Float2 value) { Change__float3__set_DegreesXY(this, value); }
inline void Change__float3::Value(::app::Uno::Float3 value) { Change__float3__set_Value(this, value); }
inline void Change__float3::XY(::app::Uno::Float2 value) { Change__float3__set_XY(this, value); }

}}}


#endif
