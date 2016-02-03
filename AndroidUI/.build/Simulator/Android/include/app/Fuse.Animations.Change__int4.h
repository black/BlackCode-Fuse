// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Animations\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_FUSE_ANIMATIONS_CHANGE__INT4_H__
#define __APP_FUSE_ANIMATIONS_CHANGE__INT4_H__

#include <app/Fuse.Animations.TrackAnimator.h>
#include <Uno.h>
namespace app { namespace Fuse { namespace Animations { struct AnimatorState; } } }
namespace app { namespace Fuse { namespace Animations { struct Converter__int4; } } }
namespace app { namespace Fuse { namespace Animations { struct CreateStateParams; } } }
namespace app { namespace Uno { namespace UX { struct Property__int4; } } }
namespace app { namespace Uno { struct Float2; } }
namespace app { namespace Uno { struct Int4; } }

namespace app {
namespace Fuse {
namespace Animations {

struct Change__int4;

struct Change__int4__uType : ::app::Fuse::Animations::TrackAnimator__uType
{
};

Change__int4__uType* Change__int4__typeof();

void Change__int4___ObjInit_2(Change__int4* __this, ::app::Uno::UX::Property__int4* target);
::app::Fuse::Animations::AnimatorState* Change__int4__CreateState(Change__int4* __this, ::app::Fuse::Animations::CreateStateParams* p);
float Change__int4__get_DegreesX(Change__int4* __this);
::app::Uno::Float2 Change__int4__get_DegreesXY(Change__int4* __this);
float Change__int4__get_DegreesY(Change__int4* __this);
float Change__int4__get_DegreesZ(Change__int4* __this);
bool Change__int4__get_IsContinuous(Change__int4* __this);
::app::Uno::UX::Property__int4* Change__int4__get_Target(Change__int4* __this);
::app::Uno::Int4 Change__int4__get_Value(Change__int4* __this);
float Change__int4__get_X(Change__int4* __this);
::app::Uno::Float2 Change__int4__get_XY(Change__int4* __this);
float Change__int4__get_Y(Change__int4* __this);
float Change__int4__get_Z(Change__int4* __this);
Change__int4* Change__int4__New_1(::uStatic* __this, ::app::Uno::UX::Property__int4* target);
void Change__int4__set_DegreesX(Change__int4* __this, float value);
void Change__int4__set_DegreesXY(Change__int4* __this, ::app::Uno::Float2 value);
void Change__int4__set_DegreesY(Change__int4* __this, float value);
void Change__int4__set_DegreesZ(Change__int4* __this, float value);
void Change__int4__set_Target(Change__int4* __this, ::app::Uno::UX::Property__int4* value);
void Change__int4__set_Value(Change__int4* __this, ::app::Uno::Int4 value);
void Change__int4__set_X(Change__int4* __this, float value);
void Change__int4__set_XY(Change__int4* __this, ::app::Uno::Float2 value);
void Change__int4__set_Y(Change__int4* __this, float value);
void Change__int4__set_Z(Change__int4* __this, float value);

struct Change__int4 : ::app::Fuse::Animations::TrackAnimator
{
    ::uStrong< ::app::Fuse::Animations::Converter__int4*> ContinuousConverter;
    ::uStrong< ::app::Uno::UX::Property__int4*> _Target;

    void _ObjInit_2(::app::Uno::UX::Property__int4* target) { Change__int4___ObjInit_2(this, target); }
    float DegreesX() { return Change__int4__get_DegreesX(this); }
    ::app::Uno::Float2 DegreesXY();
    float DegreesY() { return Change__int4__get_DegreesY(this); }
    float DegreesZ() { return Change__int4__get_DegreesZ(this); }
    bool IsContinuous() { return Change__int4__get_IsContinuous(this); }
    ::app::Uno::UX::Property__int4* Target() { return Change__int4__get_Target(this); }
    ::app::Uno::Int4 Value();
    float X() { return Change__int4__get_X(this); }
    ::app::Uno::Float2 XY();
    float Y() { return Change__int4__get_Y(this); }
    float Z() { return Change__int4__get_Z(this); }
    void DegreesX(float value) { Change__int4__set_DegreesX(this, value); }
    void DegreesXY(::app::Uno::Float2 value);
    void DegreesY(float value) { Change__int4__set_DegreesY(this, value); }
    void DegreesZ(float value) { Change__int4__set_DegreesZ(this, value); }
    void Target(::app::Uno::UX::Property__int4* value) { Change__int4__set_Target(this, value); }
    void Value(::app::Uno::Int4 value);
    void X(float value) { Change__int4__set_X(this, value); }
    void XY(::app::Uno::Float2 value);
    void Y(float value) { Change__int4__set_Y(this, value); }
    void Z(float value) { Change__int4__set_Z(this, value); }
};

}}}

#include <app/Uno.Float2.h>
#include <app/Uno.Int4.h>

namespace app {
namespace Fuse {
namespace Animations {

inline ::app::Uno::Float2 Change__int4::DegreesXY() { return Change__int4__get_DegreesXY(this); }
inline ::app::Uno::Int4 Change__int4::Value() { return Change__int4__get_Value(this); }
inline ::app::Uno::Float2 Change__int4::XY() { return Change__int4__get_XY(this); }
inline void Change__int4::DegreesXY(::app::Uno::Float2 value) { Change__int4__set_DegreesXY(this, value); }
inline void Change__int4::Value(::app::Uno::Int4 value) { Change__int4__set_Value(this, value); }
inline void Change__int4::XY(::app::Uno::Float2 value) { Change__int4__set_XY(this, value); }

}}}


#endif
