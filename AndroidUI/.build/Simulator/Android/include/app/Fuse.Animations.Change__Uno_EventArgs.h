// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Animations\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_FUSE_ANIMATIONS_CHANGE__UNO_EVENT_ARGS_H__
#define __APP_FUSE_ANIMATIONS_CHANGE__UNO_EVENT_ARGS_H__

#include <app/Fuse.Animations.TrackAnimator.h>
#include <Uno.h>
namespace app { namespace Fuse { namespace Animations { struct AnimatorState; } } }
namespace app { namespace Fuse { namespace Animations { struct Converter__Uno_EventArgs; } } }
namespace app { namespace Fuse { namespace Animations { struct CreateStateParams; } } }
namespace app { namespace Uno { namespace UX { struct Property__Uno_EventArgs; } } }
namespace app { namespace Uno { struct EventArgs; } }
namespace app { namespace Uno { struct Float2; } }

namespace app {
namespace Fuse {
namespace Animations {

struct Change__Uno_EventArgs;

struct Change__Uno_EventArgs__uType : ::app::Fuse::Animations::TrackAnimator__uType
{
};

Change__Uno_EventArgs__uType* Change__Uno_EventArgs__typeof();

void Change__Uno_EventArgs___ObjInit_2(Change__Uno_EventArgs* __this, ::app::Uno::UX::Property__Uno_EventArgs* target);
::app::Fuse::Animations::AnimatorState* Change__Uno_EventArgs__CreateState(Change__Uno_EventArgs* __this, ::app::Fuse::Animations::CreateStateParams* p);
float Change__Uno_EventArgs__get_DegreesX(Change__Uno_EventArgs* __this);
::app::Uno::Float2 Change__Uno_EventArgs__get_DegreesXY(Change__Uno_EventArgs* __this);
float Change__Uno_EventArgs__get_DegreesY(Change__Uno_EventArgs* __this);
float Change__Uno_EventArgs__get_DegreesZ(Change__Uno_EventArgs* __this);
bool Change__Uno_EventArgs__get_IsContinuous(Change__Uno_EventArgs* __this);
::app::Uno::UX::Property__Uno_EventArgs* Change__Uno_EventArgs__get_Target(Change__Uno_EventArgs* __this);
::app::Uno::EventArgs* Change__Uno_EventArgs__get_Value(Change__Uno_EventArgs* __this);
float Change__Uno_EventArgs__get_X(Change__Uno_EventArgs* __this);
::app::Uno::Float2 Change__Uno_EventArgs__get_XY(Change__Uno_EventArgs* __this);
float Change__Uno_EventArgs__get_Y(Change__Uno_EventArgs* __this);
float Change__Uno_EventArgs__get_Z(Change__Uno_EventArgs* __this);
Change__Uno_EventArgs* Change__Uno_EventArgs__New_1(::uStatic* __this, ::app::Uno::UX::Property__Uno_EventArgs* target);
void Change__Uno_EventArgs__set_DegreesX(Change__Uno_EventArgs* __this, float value);
void Change__Uno_EventArgs__set_DegreesXY(Change__Uno_EventArgs* __this, ::app::Uno::Float2 value);
void Change__Uno_EventArgs__set_DegreesY(Change__Uno_EventArgs* __this, float value);
void Change__Uno_EventArgs__set_DegreesZ(Change__Uno_EventArgs* __this, float value);
void Change__Uno_EventArgs__set_Target(Change__Uno_EventArgs* __this, ::app::Uno::UX::Property__Uno_EventArgs* value);
void Change__Uno_EventArgs__set_Value(Change__Uno_EventArgs* __this, ::app::Uno::EventArgs* value);
void Change__Uno_EventArgs__set_X(Change__Uno_EventArgs* __this, float value);
void Change__Uno_EventArgs__set_XY(Change__Uno_EventArgs* __this, ::app::Uno::Float2 value);
void Change__Uno_EventArgs__set_Y(Change__Uno_EventArgs* __this, float value);
void Change__Uno_EventArgs__set_Z(Change__Uno_EventArgs* __this, float value);

struct Change__Uno_EventArgs : ::app::Fuse::Animations::TrackAnimator
{
    ::uStrong< ::app::Fuse::Animations::Converter__Uno_EventArgs*> ContinuousConverter;
    ::uStrong< ::app::Uno::UX::Property__Uno_EventArgs*> _Target;

    void _ObjInit_2(::app::Uno::UX::Property__Uno_EventArgs* target) { Change__Uno_EventArgs___ObjInit_2(this, target); }
    float DegreesX() { return Change__Uno_EventArgs__get_DegreesX(this); }
    ::app::Uno::Float2 DegreesXY();
    float DegreesY() { return Change__Uno_EventArgs__get_DegreesY(this); }
    float DegreesZ() { return Change__Uno_EventArgs__get_DegreesZ(this); }
    bool IsContinuous() { return Change__Uno_EventArgs__get_IsContinuous(this); }
    ::app::Uno::UX::Property__Uno_EventArgs* Target() { return Change__Uno_EventArgs__get_Target(this); }
    ::app::Uno::EventArgs* Value() { return Change__Uno_EventArgs__get_Value(this); }
    float X() { return Change__Uno_EventArgs__get_X(this); }
    ::app::Uno::Float2 XY();
    float Y() { return Change__Uno_EventArgs__get_Y(this); }
    float Z() { return Change__Uno_EventArgs__get_Z(this); }
    void DegreesX(float value) { Change__Uno_EventArgs__set_DegreesX(this, value); }
    void DegreesXY(::app::Uno::Float2 value);
    void DegreesY(float value) { Change__Uno_EventArgs__set_DegreesY(this, value); }
    void DegreesZ(float value) { Change__Uno_EventArgs__set_DegreesZ(this, value); }
    void Target(::app::Uno::UX::Property__Uno_EventArgs* value) { Change__Uno_EventArgs__set_Target(this, value); }
    void Value(::app::Uno::EventArgs* value) { Change__Uno_EventArgs__set_Value(this, value); }
    void X(float value) { Change__Uno_EventArgs__set_X(this, value); }
    void XY(::app::Uno::Float2 value);
    void Y(float value) { Change__Uno_EventArgs__set_Y(this, value); }
    void Z(float value) { Change__Uno_EventArgs__set_Z(this, value); }
};

}}}

#include <app/Uno.Float2.h>

namespace app {
namespace Fuse {
namespace Animations {

inline ::app::Uno::Float2 Change__Uno_EventArgs::DegreesXY() { return Change__Uno_EventArgs__get_DegreesXY(this); }
inline ::app::Uno::Float2 Change__Uno_EventArgs::XY() { return Change__Uno_EventArgs__get_XY(this); }
inline void Change__Uno_EventArgs::DegreesXY(::app::Uno::Float2 value) { Change__Uno_EventArgs__set_DegreesXY(this, value); }
inline void Change__Uno_EventArgs::XY(::app::Uno::Float2 value) { Change__Uno_EventArgs__set_XY(this, value); }

}}}


#endif
