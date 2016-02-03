// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Animations\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_FUSE_ANIMATIONS_CHANGE__STRING_H__
#define __APP_FUSE_ANIMATIONS_CHANGE__STRING_H__

#include <app/Fuse.Animations.TrackAnimator.h>
#include <Uno.h>
namespace app { namespace Fuse { namespace Animations { struct AnimatorState; } } }
namespace app { namespace Fuse { namespace Animations { struct Converter__string; } } }
namespace app { namespace Fuse { namespace Animations { struct CreateStateParams; } } }
namespace app { namespace Uno { namespace UX { struct Property__string; } } }
namespace app { namespace Uno { struct Float2; } }

namespace app {
namespace Fuse {
namespace Animations {

struct Change__string;

struct Change__string__uType : ::app::Fuse::Animations::TrackAnimator__uType
{
};

Change__string__uType* Change__string__typeof();

void Change__string___ObjInit_2(Change__string* __this, ::app::Uno::UX::Property__string* target);
::app::Fuse::Animations::AnimatorState* Change__string__CreateState(Change__string* __this, ::app::Fuse::Animations::CreateStateParams* p);
float Change__string__get_DegreesX(Change__string* __this);
::app::Uno::Float2 Change__string__get_DegreesXY(Change__string* __this);
float Change__string__get_DegreesY(Change__string* __this);
float Change__string__get_DegreesZ(Change__string* __this);
bool Change__string__get_IsContinuous(Change__string* __this);
::app::Uno::UX::Property__string* Change__string__get_Target(Change__string* __this);
::uString* Change__string__get_Value(Change__string* __this);
float Change__string__get_X(Change__string* __this);
::app::Uno::Float2 Change__string__get_XY(Change__string* __this);
float Change__string__get_Y(Change__string* __this);
float Change__string__get_Z(Change__string* __this);
Change__string* Change__string__New_1(::uStatic* __this, ::app::Uno::UX::Property__string* target);
void Change__string__set_DegreesX(Change__string* __this, float value);
void Change__string__set_DegreesXY(Change__string* __this, ::app::Uno::Float2 value);
void Change__string__set_DegreesY(Change__string* __this, float value);
void Change__string__set_DegreesZ(Change__string* __this, float value);
void Change__string__set_Target(Change__string* __this, ::app::Uno::UX::Property__string* value);
void Change__string__set_Value(Change__string* __this, ::uString* value);
void Change__string__set_X(Change__string* __this, float value);
void Change__string__set_XY(Change__string* __this, ::app::Uno::Float2 value);
void Change__string__set_Y(Change__string* __this, float value);
void Change__string__set_Z(Change__string* __this, float value);

struct Change__string : ::app::Fuse::Animations::TrackAnimator
{
    ::uStrong< ::app::Fuse::Animations::Converter__string*> ContinuousConverter;
    ::uStrong< ::app::Uno::UX::Property__string*> _Target;

    void _ObjInit_2(::app::Uno::UX::Property__string* target) { Change__string___ObjInit_2(this, target); }
    float DegreesX() { return Change__string__get_DegreesX(this); }
    ::app::Uno::Float2 DegreesXY();
    float DegreesY() { return Change__string__get_DegreesY(this); }
    float DegreesZ() { return Change__string__get_DegreesZ(this); }
    bool IsContinuous() { return Change__string__get_IsContinuous(this); }
    ::app::Uno::UX::Property__string* Target() { return Change__string__get_Target(this); }
    ::uString* Value() { return Change__string__get_Value(this); }
    float X() { return Change__string__get_X(this); }
    ::app::Uno::Float2 XY();
    float Y() { return Change__string__get_Y(this); }
    float Z() { return Change__string__get_Z(this); }
    void DegreesX(float value) { Change__string__set_DegreesX(this, value); }
    void DegreesXY(::app::Uno::Float2 value);
    void DegreesY(float value) { Change__string__set_DegreesY(this, value); }
    void DegreesZ(float value) { Change__string__set_DegreesZ(this, value); }
    void Target(::app::Uno::UX::Property__string* value) { Change__string__set_Target(this, value); }
    void Value(::uString* value) { Change__string__set_Value(this, value); }
    void X(float value) { Change__string__set_X(this, value); }
    void XY(::app::Uno::Float2 value);
    void Y(float value) { Change__string__set_Y(this, value); }
    void Z(float value) { Change__string__set_Z(this, value); }
};

}}}

#include <app/Uno.Float2.h>

namespace app {
namespace Fuse {
namespace Animations {

inline ::app::Uno::Float2 Change__string::DegreesXY() { return Change__string__get_DegreesXY(this); }
inline ::app::Uno::Float2 Change__string::XY() { return Change__string__get_XY(this); }
inline void Change__string::DegreesXY(::app::Uno::Float2 value) { Change__string__set_DegreesXY(this, value); }
inline void Change__string::XY(::app::Uno::Float2 value) { Change__string__set_XY(this, value); }

}}}


#endif
