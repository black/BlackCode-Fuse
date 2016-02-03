// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Animations\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_FUSE_ANIMATIONS_CHANGE__SHORT_H__
#define __APP_FUSE_ANIMATIONS_CHANGE__SHORT_H__

#include <app/Fuse.Animations.TrackAnimator.h>
#include <Uno.h>
namespace app { namespace Fuse { namespace Animations { struct AnimatorState; } } }
namespace app { namespace Fuse { namespace Animations { struct Converter__short; } } }
namespace app { namespace Fuse { namespace Animations { struct CreateStateParams; } } }
namespace app { namespace Uno { namespace UX { struct Property__short; } } }
namespace app { namespace Uno { struct Float2; } }

namespace app {
namespace Fuse {
namespace Animations {

struct Change__short;

struct Change__short__uType : ::app::Fuse::Animations::TrackAnimator__uType
{
};

Change__short__uType* Change__short__typeof();

void Change__short___ObjInit_2(Change__short* __this, ::app::Uno::UX::Property__short* target);
::app::Fuse::Animations::AnimatorState* Change__short__CreateState(Change__short* __this, ::app::Fuse::Animations::CreateStateParams* p);
float Change__short__get_DegreesX(Change__short* __this);
::app::Uno::Float2 Change__short__get_DegreesXY(Change__short* __this);
float Change__short__get_DegreesY(Change__short* __this);
float Change__short__get_DegreesZ(Change__short* __this);
bool Change__short__get_IsContinuous(Change__short* __this);
::app::Uno::UX::Property__short* Change__short__get_Target(Change__short* __this);
::uShort Change__short__get_Value(Change__short* __this);
float Change__short__get_X(Change__short* __this);
::app::Uno::Float2 Change__short__get_XY(Change__short* __this);
float Change__short__get_Y(Change__short* __this);
float Change__short__get_Z(Change__short* __this);
Change__short* Change__short__New_1(::uStatic* __this, ::app::Uno::UX::Property__short* target);
void Change__short__set_DegreesX(Change__short* __this, float value);
void Change__short__set_DegreesXY(Change__short* __this, ::app::Uno::Float2 value);
void Change__short__set_DegreesY(Change__short* __this, float value);
void Change__short__set_DegreesZ(Change__short* __this, float value);
void Change__short__set_Target(Change__short* __this, ::app::Uno::UX::Property__short* value);
void Change__short__set_Value(Change__short* __this, ::uShort value);
void Change__short__set_X(Change__short* __this, float value);
void Change__short__set_XY(Change__short* __this, ::app::Uno::Float2 value);
void Change__short__set_Y(Change__short* __this, float value);
void Change__short__set_Z(Change__short* __this, float value);

struct Change__short : ::app::Fuse::Animations::TrackAnimator
{
    ::uStrong< ::app::Fuse::Animations::Converter__short*> ContinuousConverter;
    ::uStrong< ::app::Uno::UX::Property__short*> _Target;

    void _ObjInit_2(::app::Uno::UX::Property__short* target) { Change__short___ObjInit_2(this, target); }
    float DegreesX() { return Change__short__get_DegreesX(this); }
    ::app::Uno::Float2 DegreesXY();
    float DegreesY() { return Change__short__get_DegreesY(this); }
    float DegreesZ() { return Change__short__get_DegreesZ(this); }
    bool IsContinuous() { return Change__short__get_IsContinuous(this); }
    ::app::Uno::UX::Property__short* Target() { return Change__short__get_Target(this); }
    ::uShort Value() { return Change__short__get_Value(this); }
    float X() { return Change__short__get_X(this); }
    ::app::Uno::Float2 XY();
    float Y() { return Change__short__get_Y(this); }
    float Z() { return Change__short__get_Z(this); }
    void DegreesX(float value) { Change__short__set_DegreesX(this, value); }
    void DegreesXY(::app::Uno::Float2 value);
    void DegreesY(float value) { Change__short__set_DegreesY(this, value); }
    void DegreesZ(float value) { Change__short__set_DegreesZ(this, value); }
    void Target(::app::Uno::UX::Property__short* value) { Change__short__set_Target(this, value); }
    void Value(::uShort value) { Change__short__set_Value(this, value); }
    void X(float value) { Change__short__set_X(this, value); }
    void XY(::app::Uno::Float2 value);
    void Y(float value) { Change__short__set_Y(this, value); }
    void Z(float value) { Change__short__set_Z(this, value); }
};

}}}

#include <app/Uno.Float2.h>

namespace app {
namespace Fuse {
namespace Animations {

inline ::app::Uno::Float2 Change__short::DegreesXY() { return Change__short__get_DegreesXY(this); }
inline ::app::Uno::Float2 Change__short::XY() { return Change__short__get_XY(this); }
inline void Change__short::DegreesXY(::app::Uno::Float2 value) { Change__short__set_DegreesXY(this, value); }
inline void Change__short::XY(::app::Uno::Float2 value) { Change__short__set_XY(this, value); }

}}}


#endif
