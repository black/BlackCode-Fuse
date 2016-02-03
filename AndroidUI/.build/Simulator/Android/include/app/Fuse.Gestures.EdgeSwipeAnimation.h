// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Gestures\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_FUSE_GESTURES_EDGE_SWIPE_ANIMATION_H__
#define __APP_FUSE_GESTURES_EDGE_SWIPE_ANIMATION_H__

#include <app/Fuse.Triggers.Trigger.h>
#include <Uno.h>
namespace app { namespace Fuse { namespace Elements { struct Element; } } }
namespace app { namespace Fuse { namespace Gestures { namespace Internal { struct EdgeSwiper; } } } }
namespace app { namespace Fuse { struct Node; } }

namespace app {
namespace Fuse {
namespace Gestures {

struct EdgeSwipeAnimation;

struct EdgeSwipeAnimation__uType : ::app::Fuse::Triggers::Trigger__uType
{
};

EdgeSwipeAnimation__uType* EdgeSwipeAnimation__typeof();

void EdgeSwipeAnimation___ObjInit_2(EdgeSwipeAnimation* __this);
void EdgeSwipeAnimation__Disable(EdgeSwipeAnimation* __this);
void EdgeSwipeAnimation__Enable(EdgeSwipeAnimation* __this);
int EdgeSwipeAnimation__get_Edge(EdgeSwipeAnimation* __this);
float EdgeSwipeAnimation__get_EdgeThreshold(EdgeSwipeAnimation* __this);
bool EdgeSwipeAnimation__get_IsEnabled(EdgeSwipeAnimation* __this);
::app::Fuse::Elements::Element* EdgeSwipeAnimation__get_Target(EdgeSwipeAnimation* __this);
EdgeSwipeAnimation* EdgeSwipeAnimation__New_1(::uStatic* __this);
void EdgeSwipeAnimation__OnProgressChanged_1(EdgeSwipeAnimation* __this, ::uObject* s, double progress);
void EdgeSwipeAnimation__OnRooted(EdgeSwipeAnimation* __this, ::app::Fuse::Node* e);
void EdgeSwipeAnimation__OnUnrooted(EdgeSwipeAnimation* __this, ::app::Fuse::Node* e);
void EdgeSwipeAnimation__set_Edge(EdgeSwipeAnimation* __this, int value);
void EdgeSwipeAnimation__set_EdgeThreshold(EdgeSwipeAnimation* __this, float value);
void EdgeSwipeAnimation__set_Target(EdgeSwipeAnimation* __this, ::app::Fuse::Elements::Element* value);

struct EdgeSwipeAnimation : ::app::Fuse::Triggers::Trigger
{
    ::uStrong< ::app::Fuse::Gestures::Internal::EdgeSwiper*> _swiper;

    void _ObjInit_2() { EdgeSwipeAnimation___ObjInit_2(this); }
    void Disable() { EdgeSwipeAnimation__Disable(this); }
    void Enable() { EdgeSwipeAnimation__Enable(this); }
    int Edge() { return EdgeSwipeAnimation__get_Edge(this); }
    float EdgeThreshold() { return EdgeSwipeAnimation__get_EdgeThreshold(this); }
    bool IsEnabled() { return EdgeSwipeAnimation__get_IsEnabled(this); }
    ::app::Fuse::Elements::Element* Target() { return EdgeSwipeAnimation__get_Target(this); }
    void OnProgressChanged_1(::uObject* s, double progress) { EdgeSwipeAnimation__OnProgressChanged_1(this, s, progress); }
    void Edge(int value) { EdgeSwipeAnimation__set_Edge(this, value); }
    void EdgeThreshold(float value) { EdgeSwipeAnimation__set_EdgeThreshold(this, value); }
    void Target(::app::Fuse::Elements::Element* value) { EdgeSwipeAnimation__set_Target(this, value); }
};

}}}


#endif
