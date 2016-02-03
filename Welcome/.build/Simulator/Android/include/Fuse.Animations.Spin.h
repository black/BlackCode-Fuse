// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Animations\0.19.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Animations.OpenAnimator.h>
namespace g{namespace Fuse{namespace Animations{struct AnimatorState;}}}
namespace g{namespace Fuse{namespace Animations{struct CreateStateParams;}}}
namespace g{namespace Fuse{namespace Animations{struct Spin;}}}
namespace g{namespace Fuse{struct Node;}}

namespace g{
namespace Fuse{
namespace Animations{

// public sealed class Spin :2472
// {
::g::Fuse::Animations::Animator_type* Spin_typeof();
void Spin__ctor_2_fn(Spin* __this);
void Spin__CreateState_fn(Spin* __this, ::g::Fuse::Animations::CreateStateParams* p, ::g::Fuse::Animations::AnimatorState** __retval);
void Spin__get_Frequency_fn(Spin* __this, double* __retval);
void Spin__set_Frequency_fn(Spin* __this, double* value);
void Spin__New1_fn(Spin** __retval);
void Spin__get_Target_fn(Spin* __this, ::g::Fuse::Node** __retval);
void Spin__set_Target_fn(Spin* __this, ::g::Fuse::Node* value);

struct Spin : ::g::Fuse::Animations::OpenAnimator
{
    double _hertz;
    uStrong< ::g::Fuse::Node*> _Target;

    void ctor_2();
    double Frequency();
    void Frequency(double value);
    ::g::Fuse::Node* Target();
    void Target(::g::Fuse::Node* value);
    static Spin* New1();
};
// }

}}} // ::g::Fuse::Animations
