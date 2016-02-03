// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Animations\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_FUSE_ANIMATIONS_RESIZE_H__
#define __APP_FUSE_ANIMATIONS_RESIZE_H__

#include <app/Fuse.Animations.TrackAnimator.h>
#include <Uno.h>
namespace app { namespace Fuse { namespace Animations { struct AnimatorState; } } }
namespace app { namespace Fuse { namespace Animations { struct CreateStateParams; } } }
namespace app { namespace Fuse { struct Node; } }
namespace app { namespace Uno { struct Float2; } }

namespace app {
namespace Fuse {
namespace Animations {

struct Resize;

struct Resize__uType : ::app::Fuse::Animations::TrackAnimator__uType
{
};

Resize__uType* Resize__typeof();

void Resize___ObjInit_2(Resize* __this);
::app::Fuse::Animations::AnimatorState* Resize__CreateState(Resize* __this, ::app::Fuse::Animations::CreateStateParams* p);
::uObject* Resize__get_RelativeTo(Resize* __this);
::app::Fuse::Node* Resize__get_Target(Resize* __this);
::app::Uno::Float2 Resize__get_Vector(Resize* __this);
float Resize__get_X(Resize* __this);
float Resize__get_Y(Resize* __this);
Resize* Resize__New_1(::uStatic* __this);
void Resize__set_RelativeTo(Resize* __this, ::uObject* value);
void Resize__set_Target(Resize* __this, ::app::Fuse::Node* value);
void Resize__set_Vector(Resize* __this, ::app::Uno::Float2 value);
void Resize__set_X(Resize* __this, float value);
void Resize__set_Y(Resize* __this, float value);

struct Resize : ::app::Fuse::Animations::TrackAnimator
{
    ::uStrong< ::uObject*> _resizeMode;
    ::uStrong< ::app::Fuse::Node*> _Target;

    void _ObjInit_2() { Resize___ObjInit_2(this); }
    ::uObject* RelativeTo() { return Resize__get_RelativeTo(this); }
    ::app::Fuse::Node* Target() { return Resize__get_Target(this); }
    ::app::Uno::Float2 Vector();
    float X() { return Resize__get_X(this); }
    float Y() { return Resize__get_Y(this); }
    void RelativeTo(::uObject* value) { Resize__set_RelativeTo(this, value); }
    void Target(::app::Fuse::Node* value) { Resize__set_Target(this, value); }
    void Vector(::app::Uno::Float2 value);
    void X(float value) { Resize__set_X(this, value); }
    void Y(float value) { Resize__set_Y(this, value); }
};

}}}

#include <app/Uno.Float2.h>

namespace app {
namespace Fuse {
namespace Animations {

inline ::app::Uno::Float2 Resize::Vector() { return Resize__get_Vector(this); }
inline void Resize::Vector(::app::Uno::Float2 value) { Resize__set_Vector(this, value); }

}}}


#endif
