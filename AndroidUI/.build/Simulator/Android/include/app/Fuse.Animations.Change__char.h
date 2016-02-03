// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Animations\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_FUSE_ANIMATIONS_CHANGE__CHAR_H__
#define __APP_FUSE_ANIMATIONS_CHANGE__CHAR_H__

#include <app/Fuse.Animations.TrackAnimator.h>
#include <Uno.h>
namespace app { namespace Fuse { namespace Animations { struct AnimatorState; } } }
namespace app { namespace Fuse { namespace Animations { struct Converter__char; } } }
namespace app { namespace Fuse { namespace Animations { struct CreateStateParams; } } }
namespace app { namespace Uno { namespace UX { struct Property__char; } } }
namespace app { namespace Uno { struct Float2; } }

namespace app {
namespace Fuse {
namespace Animations {

struct Change__char;

struct Change__char__uType : ::app::Fuse::Animations::TrackAnimator__uType
{
};

Change__char__uType* Change__char__typeof();

void Change__char___ObjInit_2(Change__char* __this, ::app::Uno::UX::Property__char* target);
::app::Fuse::Animations::AnimatorState* Change__char__CreateState(Change__char* __this, ::app::Fuse::Animations::CreateStateParams* p);
float Change__char__get_DegreesX(Change__char* __this);
::app::Uno::Float2 Change__char__get_DegreesXY(Change__char* __this);
float Change__char__get_DegreesY(Change__char* __this);
float Change__char__get_DegreesZ(Change__char* __this);
bool Change__char__get_IsContinuous(Change__char* __this);
::app::Uno::UX::Property__char* Change__char__get_Target(Change__char* __this);
::uChar Change__char__get_Value(Change__char* __this);
float Change__char__get_X(Change__char* __this);
::app::Uno::Float2 Change__char__get_XY(Change__char* __this);
float Change__char__get_Y(Change__char* __this);
float Change__char__get_Z(Change__char* __this);
Change__char* Change__char__New_1(::uStatic* __this, ::app::Uno::UX::Property__char* target);
void Change__char__set_DegreesX(Change__char* __this, float value);
void Change__char__set_DegreesXY(Change__char* __this, ::app::Uno::Float2 value);
void Change__char__set_DegreesY(Change__char* __this, float value);
void Change__char__set_DegreesZ(Change__char* __this, float value);
void Change__char__set_Target(Change__char* __this, ::app::Uno::UX::Property__char* value);
void Change__char__set_Value(Change__char* __this, ::uChar value);
void Change__char__set_X(Change__char* __this, float value);
void Change__char__set_XY(Change__char* __this, ::app::Uno::Float2 value);
void Change__char__set_Y(Change__char* __this, float value);
void Change__char__set_Z(Change__char* __this, float value);

struct Change__char : ::app::Fuse::Animations::TrackAnimator
{
    ::uStrong< ::app::Fuse::Animations::Converter__char*> ContinuousConverter;
    ::uStrong< ::app::Uno::UX::Property__char*> _Target;

    void _ObjInit_2(::app::Uno::UX::Property__char* target) { Change__char___ObjInit_2(this, target); }
    float DegreesX() { return Change__char__get_DegreesX(this); }
    ::app::Uno::Float2 DegreesXY();
    float DegreesY() { return Change__char__get_DegreesY(this); }
    float DegreesZ() { return Change__char__get_DegreesZ(this); }
    bool IsContinuous() { return Change__char__get_IsContinuous(this); }
    ::app::Uno::UX::Property__char* Target() { return Change__char__get_Target(this); }
    ::uChar Value() { return Change__char__get_Value(this); }
    float X() { return Change__char__get_X(this); }
    ::app::Uno::Float2 XY();
    float Y() { return Change__char__get_Y(this); }
    float Z() { return Change__char__get_Z(this); }
    void DegreesX(float value) { Change__char__set_DegreesX(this, value); }
    void DegreesXY(::app::Uno::Float2 value);
    void DegreesY(float value) { Change__char__set_DegreesY(this, value); }
    void DegreesZ(float value) { Change__char__set_DegreesZ(this, value); }
    void Target(::app::Uno::UX::Property__char* value) { Change__char__set_Target(this, value); }
    void Value(::uChar value) { Change__char__set_Value(this, value); }
    void X(float value) { Change__char__set_X(this, value); }
    void XY(::app::Uno::Float2 value);
    void Y(float value) { Change__char__set_Y(this, value); }
    void Z(float value) { Change__char__set_Z(this, value); }
};

}}}

#include <app/Uno.Float2.h>

namespace app {
namespace Fuse {
namespace Animations {

inline ::app::Uno::Float2 Change__char::DegreesXY() { return Change__char__get_DegreesXY(this); }
inline ::app::Uno::Float2 Change__char::XY() { return Change__char__get_XY(this); }
inline void Change__char::DegreesXY(::app::Uno::Float2 value) { Change__char__set_DegreesXY(this, value); }
inline void Change__char::XY(::app::Uno::Float2 value) { Change__char__set_XY(this, value); }

}}}


#endif
