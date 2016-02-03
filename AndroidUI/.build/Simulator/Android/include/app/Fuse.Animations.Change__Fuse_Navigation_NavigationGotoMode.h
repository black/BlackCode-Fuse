// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Animations\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_FUSE_ANIMATIONS_CHANGE__FUSE_NAVIGATION_NAVIGATION_GOTO_MODE_H__
#define __APP_FUSE_ANIMATIONS_CHANGE__FUSE_NAVIGATION_NAVIGATION_GOTO_MODE_H__

#include <app/Fuse.Animations.TrackAnimator.h>
#include <Uno.h>
namespace app { namespace Fuse { namespace Animations { struct AnimatorState; } } }
namespace app { namespace Fuse { namespace Animations { struct Converter__Fuse_Navigation_NavigationGotoMode; } } }
namespace app { namespace Fuse { namespace Animations { struct CreateStateParams; } } }
namespace app { namespace Uno { namespace UX { struct Property__Fuse_Navigation_NavigationGotoMode; } } }
namespace app { namespace Uno { struct Float2; } }

namespace app {
namespace Fuse {
namespace Animations {

struct Change__Fuse_Navigation_NavigationGotoMode;

struct Change__Fuse_Navigation_NavigationGotoMode__uType : ::app::Fuse::Animations::TrackAnimator__uType
{
};

Change__Fuse_Navigation_NavigationGotoMode__uType* Change__Fuse_Navigation_NavigationGotoMode__typeof();

void Change__Fuse_Navigation_NavigationGotoMode___ObjInit_2(Change__Fuse_Navigation_NavigationGotoMode* __this, ::app::Uno::UX::Property__Fuse_Navigation_NavigationGotoMode* target);
::app::Fuse::Animations::AnimatorState* Change__Fuse_Navigation_NavigationGotoMode__CreateState(Change__Fuse_Navigation_NavigationGotoMode* __this, ::app::Fuse::Animations::CreateStateParams* p);
float Change__Fuse_Navigation_NavigationGotoMode__get_DegreesX(Change__Fuse_Navigation_NavigationGotoMode* __this);
::app::Uno::Float2 Change__Fuse_Navigation_NavigationGotoMode__get_DegreesXY(Change__Fuse_Navigation_NavigationGotoMode* __this);
float Change__Fuse_Navigation_NavigationGotoMode__get_DegreesY(Change__Fuse_Navigation_NavigationGotoMode* __this);
float Change__Fuse_Navigation_NavigationGotoMode__get_DegreesZ(Change__Fuse_Navigation_NavigationGotoMode* __this);
bool Change__Fuse_Navigation_NavigationGotoMode__get_IsContinuous(Change__Fuse_Navigation_NavigationGotoMode* __this);
::app::Uno::UX::Property__Fuse_Navigation_NavigationGotoMode* Change__Fuse_Navigation_NavigationGotoMode__get_Target(Change__Fuse_Navigation_NavigationGotoMode* __this);
int Change__Fuse_Navigation_NavigationGotoMode__get_Value(Change__Fuse_Navigation_NavigationGotoMode* __this);
float Change__Fuse_Navigation_NavigationGotoMode__get_X(Change__Fuse_Navigation_NavigationGotoMode* __this);
::app::Uno::Float2 Change__Fuse_Navigation_NavigationGotoMode__get_XY(Change__Fuse_Navigation_NavigationGotoMode* __this);
float Change__Fuse_Navigation_NavigationGotoMode__get_Y(Change__Fuse_Navigation_NavigationGotoMode* __this);
float Change__Fuse_Navigation_NavigationGotoMode__get_Z(Change__Fuse_Navigation_NavigationGotoMode* __this);
Change__Fuse_Navigation_NavigationGotoMode* Change__Fuse_Navigation_NavigationGotoMode__New_1(::uStatic* __this, ::app::Uno::UX::Property__Fuse_Navigation_NavigationGotoMode* target);
void Change__Fuse_Navigation_NavigationGotoMode__set_DegreesX(Change__Fuse_Navigation_NavigationGotoMode* __this, float value);
void Change__Fuse_Navigation_NavigationGotoMode__set_DegreesXY(Change__Fuse_Navigation_NavigationGotoMode* __this, ::app::Uno::Float2 value);
void Change__Fuse_Navigation_NavigationGotoMode__set_DegreesY(Change__Fuse_Navigation_NavigationGotoMode* __this, float value);
void Change__Fuse_Navigation_NavigationGotoMode__set_DegreesZ(Change__Fuse_Navigation_NavigationGotoMode* __this, float value);
void Change__Fuse_Navigation_NavigationGotoMode__set_Target(Change__Fuse_Navigation_NavigationGotoMode* __this, ::app::Uno::UX::Property__Fuse_Navigation_NavigationGotoMode* value);
void Change__Fuse_Navigation_NavigationGotoMode__set_Value(Change__Fuse_Navigation_NavigationGotoMode* __this, int value);
void Change__Fuse_Navigation_NavigationGotoMode__set_X(Change__Fuse_Navigation_NavigationGotoMode* __this, float value);
void Change__Fuse_Navigation_NavigationGotoMode__set_XY(Change__Fuse_Navigation_NavigationGotoMode* __this, ::app::Uno::Float2 value);
void Change__Fuse_Navigation_NavigationGotoMode__set_Y(Change__Fuse_Navigation_NavigationGotoMode* __this, float value);
void Change__Fuse_Navigation_NavigationGotoMode__set_Z(Change__Fuse_Navigation_NavigationGotoMode* __this, float value);

struct Change__Fuse_Navigation_NavigationGotoMode : ::app::Fuse::Animations::TrackAnimator
{
    ::uStrong< ::app::Fuse::Animations::Converter__Fuse_Navigation_NavigationGotoMode*> ContinuousConverter;
    ::uStrong< ::app::Uno::UX::Property__Fuse_Navigation_NavigationGotoMode*> _Target;

    void _ObjInit_2(::app::Uno::UX::Property__Fuse_Navigation_NavigationGotoMode* target) { Change__Fuse_Navigation_NavigationGotoMode___ObjInit_2(this, target); }
    float DegreesX() { return Change__Fuse_Navigation_NavigationGotoMode__get_DegreesX(this); }
    ::app::Uno::Float2 DegreesXY();
    float DegreesY() { return Change__Fuse_Navigation_NavigationGotoMode__get_DegreesY(this); }
    float DegreesZ() { return Change__Fuse_Navigation_NavigationGotoMode__get_DegreesZ(this); }
    bool IsContinuous() { return Change__Fuse_Navigation_NavigationGotoMode__get_IsContinuous(this); }
    ::app::Uno::UX::Property__Fuse_Navigation_NavigationGotoMode* Target() { return Change__Fuse_Navigation_NavigationGotoMode__get_Target(this); }
    int Value() { return Change__Fuse_Navigation_NavigationGotoMode__get_Value(this); }
    float X() { return Change__Fuse_Navigation_NavigationGotoMode__get_X(this); }
    ::app::Uno::Float2 XY();
    float Y() { return Change__Fuse_Navigation_NavigationGotoMode__get_Y(this); }
    float Z() { return Change__Fuse_Navigation_NavigationGotoMode__get_Z(this); }
    void DegreesX(float value) { Change__Fuse_Navigation_NavigationGotoMode__set_DegreesX(this, value); }
    void DegreesXY(::app::Uno::Float2 value);
    void DegreesY(float value) { Change__Fuse_Navigation_NavigationGotoMode__set_DegreesY(this, value); }
    void DegreesZ(float value) { Change__Fuse_Navigation_NavigationGotoMode__set_DegreesZ(this, value); }
    void Target(::app::Uno::UX::Property__Fuse_Navigation_NavigationGotoMode* value) { Change__Fuse_Navigation_NavigationGotoMode__set_Target(this, value); }
    void Value(int value) { Change__Fuse_Navigation_NavigationGotoMode__set_Value(this, value); }
    void X(float value) { Change__Fuse_Navigation_NavigationGotoMode__set_X(this, value); }
    void XY(::app::Uno::Float2 value);
    void Y(float value) { Change__Fuse_Navigation_NavigationGotoMode__set_Y(this, value); }
    void Z(float value) { Change__Fuse_Navigation_NavigationGotoMode__set_Z(this, value); }
};

}}}

#include <app/Uno.Float2.h>

namespace app {
namespace Fuse {
namespace Animations {

inline ::app::Uno::Float2 Change__Fuse_Navigation_NavigationGotoMode::DegreesXY() { return Change__Fuse_Navigation_NavigationGotoMode__get_DegreesXY(this); }
inline ::app::Uno::Float2 Change__Fuse_Navigation_NavigationGotoMode::XY() { return Change__Fuse_Navigation_NavigationGotoMode__get_XY(this); }
inline void Change__Fuse_Navigation_NavigationGotoMode::DegreesXY(::app::Uno::Float2 value) { Change__Fuse_Navigation_NavigationGotoMode__set_DegreesXY(this, value); }
inline void Change__Fuse_Navigation_NavigationGotoMode::XY(::app::Uno::Float2 value) { Change__Fuse_Navigation_NavigationGotoMode__set_XY(this, value); }

}}}


#endif
