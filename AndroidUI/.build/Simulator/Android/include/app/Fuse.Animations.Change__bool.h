// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Animations\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_FUSE_ANIMATIONS_CHANGE__BOOL_H__
#define __APP_FUSE_ANIMATIONS_CHANGE__BOOL_H__

#include <app/Fuse.Animations.TrackAnimator.h>
#include <Uno.h>
namespace app { namespace Fuse { namespace Animations { struct AnimatorState; } } }
namespace app { namespace Fuse { namespace Animations { struct Converter__bool; } } }
namespace app { namespace Fuse { namespace Animations { struct CreateStateParams; } } }
namespace app { namespace Uno { namespace UX { struct Property__bool; } } }
namespace app { namespace Uno { struct Float2; } }

namespace app {
namespace Fuse {
namespace Animations {

struct Change__bool;

struct Change__bool__uType : ::app::Fuse::Animations::TrackAnimator__uType
{
};

Change__bool__uType* Change__bool__typeof();

void Change__bool___ObjInit_2(Change__bool* __this, ::app::Uno::UX::Property__bool* target);
::app::Fuse::Animations::AnimatorState* Change__bool__CreateState(Change__bool* __this, ::app::Fuse::Animations::CreateStateParams* p);
float Change__bool__get_DegreesX(Change__bool* __this);
::app::Uno::Float2 Change__bool__get_DegreesXY(Change__bool* __this);
float Change__bool__get_DegreesY(Change__bool* __this);
float Change__bool__get_DegreesZ(Change__bool* __this);
bool Change__bool__get_IsContinuous(Change__bool* __this);
::app::Uno::UX::Property__bool* Change__bool__get_Target(Change__bool* __this);
bool Change__bool__get_Value(Change__bool* __this);
float Change__bool__get_X(Change__bool* __this);
::app::Uno::Float2 Change__bool__get_XY(Change__bool* __this);
float Change__bool__get_Y(Change__bool* __this);
float Change__bool__get_Z(Change__bool* __this);
Change__bool* Change__bool__New_1(::uStatic* __this, ::app::Uno::UX::Property__bool* target);
void Change__bool__set_DegreesX(Change__bool* __this, float value);
void Change__bool__set_DegreesXY(Change__bool* __this, ::app::Uno::Float2 value);
void Change__bool__set_DegreesY(Change__bool* __this, float value);
void Change__bool__set_DegreesZ(Change__bool* __this, float value);
void Change__bool__set_Target(Change__bool* __this, ::app::Uno::UX::Property__bool* value);
void Change__bool__set_Value(Change__bool* __this, bool value);
void Change__bool__set_X(Change__bool* __this, float value);
void Change__bool__set_XY(Change__bool* __this, ::app::Uno::Float2 value);
void Change__bool__set_Y(Change__bool* __this, float value);
void Change__bool__set_Z(Change__bool* __this, float value);

struct Change__bool : ::app::Fuse::Animations::TrackAnimator
{
    ::uStrong< ::app::Fuse::Animations::Converter__bool*> ContinuousConverter;
    ::uStrong< ::app::Uno::UX::Property__bool*> _Target;

    void _ObjInit_2(::app::Uno::UX::Property__bool* target) { Change__bool___ObjInit_2(this, target); }
    float DegreesX() { return Change__bool__get_DegreesX(this); }
    ::app::Uno::Float2 DegreesXY();
    float DegreesY() { return Change__bool__get_DegreesY(this); }
    float DegreesZ() { return Change__bool__get_DegreesZ(this); }
    bool IsContinuous() { return Change__bool__get_IsContinuous(this); }
    ::app::Uno::UX::Property__bool* Target() { return Change__bool__get_Target(this); }
    bool Value() { return Change__bool__get_Value(this); }
    float X() { return Change__bool__get_X(this); }
    ::app::Uno::Float2 XY();
    float Y() { return Change__bool__get_Y(this); }
    float Z() { return Change__bool__get_Z(this); }
    void DegreesX(float value) { Change__bool__set_DegreesX(this, value); }
    void DegreesXY(::app::Uno::Float2 value);
    void DegreesY(float value) { Change__bool__set_DegreesY(this, value); }
    void DegreesZ(float value) { Change__bool__set_DegreesZ(this, value); }
    void Target(::app::Uno::UX::Property__bool* value) { Change__bool__set_Target(this, value); }
    void Value(bool value) { Change__bool__set_Value(this, value); }
    void X(float value) { Change__bool__set_X(this, value); }
    void XY(::app::Uno::Float2 value);
    void Y(float value) { Change__bool__set_Y(this, value); }
    void Z(float value) { Change__bool__set_Z(this, value); }
};

}}}

#include <app/Uno.Float2.h>

namespace app {
namespace Fuse {
namespace Animations {

inline ::app::Uno::Float2 Change__bool::DegreesXY() { return Change__bool__get_DegreesXY(this); }
inline ::app::Uno::Float2 Change__bool::XY() { return Change__bool__get_XY(this); }
inline void Change__bool::DegreesXY(::app::Uno::Float2 value) { Change__bool__set_DegreesXY(this, value); }
inline void Change__bool::XY(::app::Uno::Float2 value) { Change__bool__set_XY(this, value); }

}}}


#endif
