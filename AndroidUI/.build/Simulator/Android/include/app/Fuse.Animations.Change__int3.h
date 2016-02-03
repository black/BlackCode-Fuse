// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Animations\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_FUSE_ANIMATIONS_CHANGE__INT3_H__
#define __APP_FUSE_ANIMATIONS_CHANGE__INT3_H__

#include <app/Fuse.Animations.TrackAnimator.h>
#include <Uno.h>
namespace app { namespace Fuse { namespace Animations { struct AnimatorState; } } }
namespace app { namespace Fuse { namespace Animations { struct Converter__int3; } } }
namespace app { namespace Fuse { namespace Animations { struct CreateStateParams; } } }
namespace app { namespace Uno { namespace UX { struct Property__int3; } } }
namespace app { namespace Uno { struct Float2; } }
namespace app { namespace Uno { struct Int3; } }

namespace app {
namespace Fuse {
namespace Animations {

struct Change__int3;

struct Change__int3__uType : ::app::Fuse::Animations::TrackAnimator__uType
{
};

Change__int3__uType* Change__int3__typeof();

void Change__int3___ObjInit_2(Change__int3* __this, ::app::Uno::UX::Property__int3* target);
::app::Fuse::Animations::AnimatorState* Change__int3__CreateState(Change__int3* __this, ::app::Fuse::Animations::CreateStateParams* p);
float Change__int3__get_DegreesX(Change__int3* __this);
::app::Uno::Float2 Change__int3__get_DegreesXY(Change__int3* __this);
float Change__int3__get_DegreesY(Change__int3* __this);
float Change__int3__get_DegreesZ(Change__int3* __this);
bool Change__int3__get_IsContinuous(Change__int3* __this);
::app::Uno::UX::Property__int3* Change__int3__get_Target(Change__int3* __this);
::app::Uno::Int3 Change__int3__get_Value(Change__int3* __this);
float Change__int3__get_X(Change__int3* __this);
::app::Uno::Float2 Change__int3__get_XY(Change__int3* __this);
float Change__int3__get_Y(Change__int3* __this);
float Change__int3__get_Z(Change__int3* __this);
Change__int3* Change__int3__New_1(::uStatic* __this, ::app::Uno::UX::Property__int3* target);
void Change__int3__set_DegreesX(Change__int3* __this, float value);
void Change__int3__set_DegreesXY(Change__int3* __this, ::app::Uno::Float2 value);
void Change__int3__set_DegreesY(Change__int3* __this, float value);
void Change__int3__set_DegreesZ(Change__int3* __this, float value);
void Change__int3__set_Target(Change__int3* __this, ::app::Uno::UX::Property__int3* value);
void Change__int3__set_Value(Change__int3* __this, ::app::Uno::Int3 value);
void Change__int3__set_X(Change__int3* __this, float value);
void Change__int3__set_XY(Change__int3* __this, ::app::Uno::Float2 value);
void Change__int3__set_Y(Change__int3* __this, float value);
void Change__int3__set_Z(Change__int3* __this, float value);

struct Change__int3 : ::app::Fuse::Animations::TrackAnimator
{
    ::uStrong< ::app::Fuse::Animations::Converter__int3*> ContinuousConverter;
    ::uStrong< ::app::Uno::UX::Property__int3*> _Target;

    void _ObjInit_2(::app::Uno::UX::Property__int3* target) { Change__int3___ObjInit_2(this, target); }
    float DegreesX() { return Change__int3__get_DegreesX(this); }
    ::app::Uno::Float2 DegreesXY();
    float DegreesY() { return Change__int3__get_DegreesY(this); }
    float DegreesZ() { return Change__int3__get_DegreesZ(this); }
    bool IsContinuous() { return Change__int3__get_IsContinuous(this); }
    ::app::Uno::UX::Property__int3* Target() { return Change__int3__get_Target(this); }
    ::app::Uno::Int3 Value();
    float X() { return Change__int3__get_X(this); }
    ::app::Uno::Float2 XY();
    float Y() { return Change__int3__get_Y(this); }
    float Z() { return Change__int3__get_Z(this); }
    void DegreesX(float value) { Change__int3__set_DegreesX(this, value); }
    void DegreesXY(::app::Uno::Float2 value);
    void DegreesY(float value) { Change__int3__set_DegreesY(this, value); }
    void DegreesZ(float value) { Change__int3__set_DegreesZ(this, value); }
    void Target(::app::Uno::UX::Property__int3* value) { Change__int3__set_Target(this, value); }
    void Value(::app::Uno::Int3 value);
    void X(float value) { Change__int3__set_X(this, value); }
    void XY(::app::Uno::Float2 value);
    void Y(float value) { Change__int3__set_Y(this, value); }
    void Z(float value) { Change__int3__set_Z(this, value); }
};

}}}

#include <app/Uno.Float2.h>
#include <app/Uno.Int3.h>

namespace app {
namespace Fuse {
namespace Animations {

inline ::app::Uno::Float2 Change__int3::DegreesXY() { return Change__int3__get_DegreesXY(this); }
inline ::app::Uno::Int3 Change__int3::Value() { return Change__int3__get_Value(this); }
inline ::app::Uno::Float2 Change__int3::XY() { return Change__int3__get_XY(this); }
inline void Change__int3::DegreesXY(::app::Uno::Float2 value) { Change__int3__set_DegreesXY(this, value); }
inline void Change__int3::Value(::app::Uno::Int3 value) { Change__int3__set_Value(this, value); }
inline void Change__int3::XY(::app::Uno::Float2 value) { Change__int3__set_XY(this, value); }

}}}


#endif
