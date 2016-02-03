// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Gestures\0.19.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Triggers.Trigger.h>
namespace g{namespace Fuse{namespace Elements{struct Element;}}}
namespace g{namespace Fuse{namespace Gestures{namespace Internal{struct EdgeSwiper;}}}}
namespace g{namespace Fuse{namespace Gestures{struct EdgeSwipeAnimation;}}}
namespace g{namespace Fuse{struct Node;}}

namespace g{
namespace Fuse{
namespace Gestures{

// public sealed class EdgeSwipeAnimation :1096
// {
::g::Fuse::Triggers::Trigger_type* EdgeSwipeAnimation_typeof();
void EdgeSwipeAnimation__ctor_2_fn(EdgeSwipeAnimation* __this);
void EdgeSwipeAnimation__Disable_fn(EdgeSwipeAnimation* __this);
void EdgeSwipeAnimation__get_Edge_fn(EdgeSwipeAnimation* __this, int* __retval);
void EdgeSwipeAnimation__set_Edge_fn(EdgeSwipeAnimation* __this, int* value);
void EdgeSwipeAnimation__get_EdgeThreshold_fn(EdgeSwipeAnimation* __this, float* __retval);
void EdgeSwipeAnimation__set_EdgeThreshold_fn(EdgeSwipeAnimation* __this, float* value);
void EdgeSwipeAnimation__Enable_fn(EdgeSwipeAnimation* __this);
void EdgeSwipeAnimation__get_IsEnabled_fn(EdgeSwipeAnimation* __this, bool* __retval);
void EdgeSwipeAnimation__New1_fn(EdgeSwipeAnimation** __retval);
void EdgeSwipeAnimation__OnProgressChanged1_fn(EdgeSwipeAnimation* __this, uObject* s, double* progress);
void EdgeSwipeAnimation__OnRooted_fn(EdgeSwipeAnimation* __this, ::g::Fuse::Node* parentNode);
void EdgeSwipeAnimation__OnUnrooted_fn(EdgeSwipeAnimation* __this, ::g::Fuse::Node* parentNode);
void EdgeSwipeAnimation__get_Target_fn(EdgeSwipeAnimation* __this, ::g::Fuse::Elements::Element** __retval);
void EdgeSwipeAnimation__set_Target_fn(EdgeSwipeAnimation* __this, ::g::Fuse::Elements::Element* value);

struct EdgeSwipeAnimation : ::g::Fuse::Triggers::Trigger
{
    uStrong< ::g::Fuse::Gestures::Internal::EdgeSwiper*> _swiper;

    void ctor_2();
    void Disable();
    int Edge();
    void Edge(int value);
    float EdgeThreshold();
    void EdgeThreshold(float value);
    void Enable();
    bool IsEnabled();
    void OnProgressChanged1(uObject* s, double progress);
    ::g::Fuse::Elements::Element* Target();
    void Target(::g::Fuse::Elements::Element* value);
    static EdgeSwipeAnimation* New1();
};
// }

}}} // ::g::Fuse::Gestures
