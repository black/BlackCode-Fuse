// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Animations\0.18.8\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Animations.TrackAnimator.h>
namespace g{namespace Fuse{namespace Animations{struct AnimatorState;}}}
namespace g{namespace Fuse{namespace Animations{struct CreateStateParams;}}}
namespace g{namespace Fuse{namespace Animations{struct Resize;}}}
namespace g{namespace Fuse{struct Node;}}
namespace g{namespace Uno{struct Float2;}}

namespace g{
namespace Fuse{
namespace Animations{

// public sealed class Resize :2405
// {
::g::Fuse::Animations::Animator_type* Resize_typeof();
void Resize__ctor_2_fn(Resize* __this);
void Resize__CreateState_fn(Resize* __this, ::g::Fuse::Animations::CreateStateParams* p, ::g::Fuse::Animations::AnimatorState** __retval);
void Resize__New1_fn(Resize** __retval);
void Resize__get_RelativeTo_fn(Resize* __this, uObject** __retval);
void Resize__set_RelativeTo_fn(Resize* __this, uObject* value);
void Resize__get_Target_fn(Resize* __this, ::g::Fuse::Node** __retval);
void Resize__set_Target_fn(Resize* __this, ::g::Fuse::Node* value);
void Resize__get_Vector_fn(Resize* __this, ::g::Uno::Float2* __retval);
void Resize__set_Vector_fn(Resize* __this, ::g::Uno::Float2* value);
void Resize__get_X_fn(Resize* __this, float* __retval);
void Resize__set_X_fn(Resize* __this, float* value);
void Resize__get_Y_fn(Resize* __this, float* __retval);
void Resize__set_Y_fn(Resize* __this, float* value);

struct Resize : ::g::Fuse::Animations::TrackAnimator
{
    uStrong<uObject*> _resizeMode;
    uStrong< ::g::Fuse::Node*> _Target;

    void ctor_2();
    uObject* RelativeTo();
    void RelativeTo(uObject* value);
    ::g::Fuse::Node* Target();
    void Target(::g::Fuse::Node* value);
    ::g::Uno::Float2 Vector();
    void Vector(::g::Uno::Float2 value);
    float X();
    void X(float value);
    float Y();
    void Y(float value);
    static Resize* New1();
};
// }

}}} // ::g::Fuse::Animations
