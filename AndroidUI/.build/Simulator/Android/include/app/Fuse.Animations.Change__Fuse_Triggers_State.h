// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Animations\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_FUSE_ANIMATIONS_CHANGE__FUSE_TRIGGERS_STATE_H__
#define __APP_FUSE_ANIMATIONS_CHANGE__FUSE_TRIGGERS_STATE_H__

#include <app/Fuse.Animations.TrackAnimator.h>
#include <Uno.h>
namespace app { namespace Fuse { namespace Animations { struct AnimatorState; } } }
namespace app { namespace Fuse { namespace Animations { struct Converter__Fuse_Triggers_State; } } }
namespace app { namespace Fuse { namespace Animations { struct CreateStateParams; } } }
namespace app { namespace Fuse { namespace Triggers { struct State; } } }
namespace app { namespace Uno { namespace UX { struct Property__Fuse_Triggers_State; } } }
namespace app { namespace Uno { struct Float2; } }

namespace app {
namespace Fuse {
namespace Animations {

struct Change__Fuse_Triggers_State;

struct Change__Fuse_Triggers_State__uType : ::app::Fuse::Animations::TrackAnimator__uType
{
};

Change__Fuse_Triggers_State__uType* Change__Fuse_Triggers_State__typeof();

void Change__Fuse_Triggers_State___ObjInit_2(Change__Fuse_Triggers_State* __this, ::app::Uno::UX::Property__Fuse_Triggers_State* target);
::app::Fuse::Animations::AnimatorState* Change__Fuse_Triggers_State__CreateState(Change__Fuse_Triggers_State* __this, ::app::Fuse::Animations::CreateStateParams* p);
float Change__Fuse_Triggers_State__get_DegreesX(Change__Fuse_Triggers_State* __this);
::app::Uno::Float2 Change__Fuse_Triggers_State__get_DegreesXY(Change__Fuse_Triggers_State* __this);
float Change__Fuse_Triggers_State__get_DegreesY(Change__Fuse_Triggers_State* __this);
float Change__Fuse_Triggers_State__get_DegreesZ(Change__Fuse_Triggers_State* __this);
bool Change__Fuse_Triggers_State__get_IsContinuous(Change__Fuse_Triggers_State* __this);
::app::Uno::UX::Property__Fuse_Triggers_State* Change__Fuse_Triggers_State__get_Target(Change__Fuse_Triggers_State* __this);
::app::Fuse::Triggers::State* Change__Fuse_Triggers_State__get_Value(Change__Fuse_Triggers_State* __this);
float Change__Fuse_Triggers_State__get_X(Change__Fuse_Triggers_State* __this);
::app::Uno::Float2 Change__Fuse_Triggers_State__get_XY(Change__Fuse_Triggers_State* __this);
float Change__Fuse_Triggers_State__get_Y(Change__Fuse_Triggers_State* __this);
float Change__Fuse_Triggers_State__get_Z(Change__Fuse_Triggers_State* __this);
Change__Fuse_Triggers_State* Change__Fuse_Triggers_State__New_1(::uStatic* __this, ::app::Uno::UX::Property__Fuse_Triggers_State* target);
void Change__Fuse_Triggers_State__set_DegreesX(Change__Fuse_Triggers_State* __this, float value);
void Change__Fuse_Triggers_State__set_DegreesXY(Change__Fuse_Triggers_State* __this, ::app::Uno::Float2 value);
void Change__Fuse_Triggers_State__set_DegreesY(Change__Fuse_Triggers_State* __this, float value);
void Change__Fuse_Triggers_State__set_DegreesZ(Change__Fuse_Triggers_State* __this, float value);
void Change__Fuse_Triggers_State__set_Target(Change__Fuse_Triggers_State* __this, ::app::Uno::UX::Property__Fuse_Triggers_State* value);
void Change__Fuse_Triggers_State__set_Value(Change__Fuse_Triggers_State* __this, ::app::Fuse::Triggers::State* value);
void Change__Fuse_Triggers_State__set_X(Change__Fuse_Triggers_State* __this, float value);
void Change__Fuse_Triggers_State__set_XY(Change__Fuse_Triggers_State* __this, ::app::Uno::Float2 value);
void Change__Fuse_Triggers_State__set_Y(Change__Fuse_Triggers_State* __this, float value);
void Change__Fuse_Triggers_State__set_Z(Change__Fuse_Triggers_State* __this, float value);

struct Change__Fuse_Triggers_State : ::app::Fuse::Animations::TrackAnimator
{
    ::uStrong< ::app::Fuse::Animations::Converter__Fuse_Triggers_State*> ContinuousConverter;
    ::uStrong< ::app::Uno::UX::Property__Fuse_Triggers_State*> _Target;

    void _ObjInit_2(::app::Uno::UX::Property__Fuse_Triggers_State* target) { Change__Fuse_Triggers_State___ObjInit_2(this, target); }
    float DegreesX() { return Change__Fuse_Triggers_State__get_DegreesX(this); }
    ::app::Uno::Float2 DegreesXY();
    float DegreesY() { return Change__Fuse_Triggers_State__get_DegreesY(this); }
    float DegreesZ() { return Change__Fuse_Triggers_State__get_DegreesZ(this); }
    bool IsContinuous() { return Change__Fuse_Triggers_State__get_IsContinuous(this); }
    ::app::Uno::UX::Property__Fuse_Triggers_State* Target() { return Change__Fuse_Triggers_State__get_Target(this); }
    ::app::Fuse::Triggers::State* Value() { return Change__Fuse_Triggers_State__get_Value(this); }
    float X() { return Change__Fuse_Triggers_State__get_X(this); }
    ::app::Uno::Float2 XY();
    float Y() { return Change__Fuse_Triggers_State__get_Y(this); }
    float Z() { return Change__Fuse_Triggers_State__get_Z(this); }
    void DegreesX(float value) { Change__Fuse_Triggers_State__set_DegreesX(this, value); }
    void DegreesXY(::app::Uno::Float2 value);
    void DegreesY(float value) { Change__Fuse_Triggers_State__set_DegreesY(this, value); }
    void DegreesZ(float value) { Change__Fuse_Triggers_State__set_DegreesZ(this, value); }
    void Target(::app::Uno::UX::Property__Fuse_Triggers_State* value) { Change__Fuse_Triggers_State__set_Target(this, value); }
    void Value(::app::Fuse::Triggers::State* value) { Change__Fuse_Triggers_State__set_Value(this, value); }
    void X(float value) { Change__Fuse_Triggers_State__set_X(this, value); }
    void XY(::app::Uno::Float2 value);
    void Y(float value) { Change__Fuse_Triggers_State__set_Y(this, value); }
    void Z(float value) { Change__Fuse_Triggers_State__set_Z(this, value); }
};

}}}

#include <app/Uno.Float2.h>

namespace app {
namespace Fuse {
namespace Animations {

inline ::app::Uno::Float2 Change__Fuse_Triggers_State::DegreesXY() { return Change__Fuse_Triggers_State__get_DegreesXY(this); }
inline ::app::Uno::Float2 Change__Fuse_Triggers_State::XY() { return Change__Fuse_Triggers_State__get_XY(this); }
inline void Change__Fuse_Triggers_State::DegreesXY(::app::Uno::Float2 value) { Change__Fuse_Triggers_State__set_DegreesXY(this, value); }
inline void Change__Fuse_Triggers_State::XY(::app::Uno::Float2 value) { Change__Fuse_Triggers_State__set_XY(this, value); }

}}}


#endif
