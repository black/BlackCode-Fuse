// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Animations\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_FUSE_ANIMATIONS_CHANGE__DOUBLE_H__
#define __APP_FUSE_ANIMATIONS_CHANGE__DOUBLE_H__

#include <app/Fuse.Animations.TrackAnimator.h>
#include <Uno.h>
namespace app { namespace Fuse { namespace Animations { struct AnimatorState; } } }
namespace app { namespace Fuse { namespace Animations { struct Converter__double; } } }
namespace app { namespace Fuse { namespace Animations { struct CreateStateParams; } } }
namespace app { namespace Uno { namespace UX { struct Property__double; } } }
namespace app { namespace Uno { struct Float2; } }

namespace app {
namespace Fuse {
namespace Animations {

struct Change__double;

struct Change__double__uType : ::app::Fuse::Animations::TrackAnimator__uType
{
};

Change__double__uType* Change__double__typeof();

void Change__double___ObjInit_2(Change__double* __this, ::app::Uno::UX::Property__double* target);
::app::Fuse::Animations::AnimatorState* Change__double__CreateState(Change__double* __this, ::app::Fuse::Animations::CreateStateParams* p);
float Change__double__get_DegreesX(Change__double* __this);
::app::Uno::Float2 Change__double__get_DegreesXY(Change__double* __this);
float Change__double__get_DegreesY(Change__double* __this);
float Change__double__get_DegreesZ(Change__double* __this);
bool Change__double__get_IsContinuous(Change__double* __this);
::app::Uno::UX::Property__double* Change__double__get_Target(Change__double* __this);
double Change__double__get_Value(Change__double* __this);
float Change__double__get_X(Change__double* __this);
::app::Uno::Float2 Change__double__get_XY(Change__double* __this);
float Change__double__get_Y(Change__double* __this);
float Change__double__get_Z(Change__double* __this);
Change__double* Change__double__New_1(::uStatic* __this, ::app::Uno::UX::Property__double* target);
void Change__double__set_DegreesX(Change__double* __this, float value);
void Change__double__set_DegreesXY(Change__double* __this, ::app::Uno::Float2 value);
void Change__double__set_DegreesY(Change__double* __this, float value);
void Change__double__set_DegreesZ(Change__double* __this, float value);
void Change__double__set_Target(Change__double* __this, ::app::Uno::UX::Property__double* value);
void Change__double__set_Value(Change__double* __this, double value);
void Change__double__set_X(Change__double* __this, float value);
void Change__double__set_XY(Change__double* __this, ::app::Uno::Float2 value);
void Change__double__set_Y(Change__double* __this, float value);
void Change__double__set_Z(Change__double* __this, float value);

struct Change__double : ::app::Fuse::Animations::TrackAnimator
{
    ::uStrong< ::app::Fuse::Animations::Converter__double*> ContinuousConverter;
    ::uStrong< ::app::Uno::UX::Property__double*> _Target;

    void _ObjInit_2(::app::Uno::UX::Property__double* target) { Change__double___ObjInit_2(this, target); }
    float DegreesX() { return Change__double__get_DegreesX(this); }
    ::app::Uno::Float2 DegreesXY();
    float DegreesY() { return Change__double__get_DegreesY(this); }
    float DegreesZ() { return Change__double__get_DegreesZ(this); }
    bool IsContinuous() { return Change__double__get_IsContinuous(this); }
    ::app::Uno::UX::Property__double* Target() { return Change__double__get_Target(this); }
    double Value() { return Change__double__get_Value(this); }
    float X() { return Change__double__get_X(this); }
    ::app::Uno::Float2 XY();
    float Y() { return Change__double__get_Y(this); }
    float Z() { return Change__double__get_Z(this); }
    void DegreesX(float value) { Change__double__set_DegreesX(this, value); }
    void DegreesXY(::app::Uno::Float2 value);
    void DegreesY(float value) { Change__double__set_DegreesY(this, value); }
    void DegreesZ(float value) { Change__double__set_DegreesZ(this, value); }
    void Target(::app::Uno::UX::Property__double* value) { Change__double__set_Target(this, value); }
    void Value(double value) { Change__double__set_Value(this, value); }
    void X(float value) { Change__double__set_X(this, value); }
    void XY(::app::Uno::Float2 value);
    void Y(float value) { Change__double__set_Y(this, value); }
    void Z(float value) { Change__double__set_Z(this, value); }
};

}}}

#include <app/Uno.Float2.h>

namespace app {
namespace Fuse {
namespace Animations {

inline ::app::Uno::Float2 Change__double::DegreesXY() { return Change__double__get_DegreesXY(this); }
inline ::app::Uno::Float2 Change__double::XY() { return Change__double__get_XY(this); }
inline void Change__double::DegreesXY(::app::Uno::Float2 value) { Change__double__set_DegreesXY(this, value); }
inline void Change__double::XY(::app::Uno::Float2 value) { Change__double__set_XY(this, value); }

}}}


#endif
