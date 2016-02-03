// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Animations\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_FUSE_ANIMATIONS_CHANGE__LONG_H__
#define __APP_FUSE_ANIMATIONS_CHANGE__LONG_H__

#include <app/Fuse.Animations.TrackAnimator.h>
#include <Uno.h>
namespace app { namespace Fuse { namespace Animations { struct AnimatorState; } } }
namespace app { namespace Fuse { namespace Animations { struct Converter__long; } } }
namespace app { namespace Fuse { namespace Animations { struct CreateStateParams; } } }
namespace app { namespace Uno { namespace UX { struct Property__long; } } }
namespace app { namespace Uno { struct Float2; } }

namespace app {
namespace Fuse {
namespace Animations {

struct Change__long;

struct Change__long__uType : ::app::Fuse::Animations::TrackAnimator__uType
{
};

Change__long__uType* Change__long__typeof();

void Change__long___ObjInit_2(Change__long* __this, ::app::Uno::UX::Property__long* target);
::app::Fuse::Animations::AnimatorState* Change__long__CreateState(Change__long* __this, ::app::Fuse::Animations::CreateStateParams* p);
float Change__long__get_DegreesX(Change__long* __this);
::app::Uno::Float2 Change__long__get_DegreesXY(Change__long* __this);
float Change__long__get_DegreesY(Change__long* __this);
float Change__long__get_DegreesZ(Change__long* __this);
bool Change__long__get_IsContinuous(Change__long* __this);
::app::Uno::UX::Property__long* Change__long__get_Target(Change__long* __this);
::uLong Change__long__get_Value(Change__long* __this);
float Change__long__get_X(Change__long* __this);
::app::Uno::Float2 Change__long__get_XY(Change__long* __this);
float Change__long__get_Y(Change__long* __this);
float Change__long__get_Z(Change__long* __this);
Change__long* Change__long__New_1(::uStatic* __this, ::app::Uno::UX::Property__long* target);
void Change__long__set_DegreesX(Change__long* __this, float value);
void Change__long__set_DegreesXY(Change__long* __this, ::app::Uno::Float2 value);
void Change__long__set_DegreesY(Change__long* __this, float value);
void Change__long__set_DegreesZ(Change__long* __this, float value);
void Change__long__set_Target(Change__long* __this, ::app::Uno::UX::Property__long* value);
void Change__long__set_Value(Change__long* __this, ::uLong value);
void Change__long__set_X(Change__long* __this, float value);
void Change__long__set_XY(Change__long* __this, ::app::Uno::Float2 value);
void Change__long__set_Y(Change__long* __this, float value);
void Change__long__set_Z(Change__long* __this, float value);

struct Change__long : ::app::Fuse::Animations::TrackAnimator
{
    ::uStrong< ::app::Fuse::Animations::Converter__long*> ContinuousConverter;
    ::uStrong< ::app::Uno::UX::Property__long*> _Target;

    void _ObjInit_2(::app::Uno::UX::Property__long* target) { Change__long___ObjInit_2(this, target); }
    float DegreesX() { return Change__long__get_DegreesX(this); }
    ::app::Uno::Float2 DegreesXY();
    float DegreesY() { return Change__long__get_DegreesY(this); }
    float DegreesZ() { return Change__long__get_DegreesZ(this); }
    bool IsContinuous() { return Change__long__get_IsContinuous(this); }
    ::app::Uno::UX::Property__long* Target() { return Change__long__get_Target(this); }
    ::uLong Value() { return Change__long__get_Value(this); }
    float X() { return Change__long__get_X(this); }
    ::app::Uno::Float2 XY();
    float Y() { return Change__long__get_Y(this); }
    float Z() { return Change__long__get_Z(this); }
    void DegreesX(float value) { Change__long__set_DegreesX(this, value); }
    void DegreesXY(::app::Uno::Float2 value);
    void DegreesY(float value) { Change__long__set_DegreesY(this, value); }
    void DegreesZ(float value) { Change__long__set_DegreesZ(this, value); }
    void Target(::app::Uno::UX::Property__long* value) { Change__long__set_Target(this, value); }
    void Value(::uLong value) { Change__long__set_Value(this, value); }
    void X(float value) { Change__long__set_X(this, value); }
    void XY(::app::Uno::Float2 value);
    void Y(float value) { Change__long__set_Y(this, value); }
    void Z(float value) { Change__long__set_Z(this, value); }
};

}}}

#include <app/Uno.Float2.h>

namespace app {
namespace Fuse {
namespace Animations {

inline ::app::Uno::Float2 Change__long::DegreesXY() { return Change__long__get_DegreesXY(this); }
inline ::app::Uno::Float2 Change__long::XY() { return Change__long__get_XY(this); }
inline void Change__long::DegreesXY(::app::Uno::Float2 value) { Change__long__set_DegreesXY(this, value); }
inline void Change__long::XY(::app::Uno::Float2 value) { Change__long__set_XY(this, value); }

}}}


#endif
