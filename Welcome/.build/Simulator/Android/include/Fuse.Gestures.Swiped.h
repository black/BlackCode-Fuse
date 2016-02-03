// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Gestures\0.19.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Triggers.Trigger.h>
namespace g{namespace Fuse{namespace Gestures{namespace Internal{struct SwipeRegion;}}}}
namespace g{namespace Fuse{namespace Gestures{struct Swiped;}}}
namespace g{namespace Fuse{namespace Gestures{struct SwipeGesture;}}}
namespace g{namespace Fuse{struct Node;}}

namespace g{
namespace Fuse{
namespace Gestures{

// public sealed class Swiped :707
// {
::g::Fuse::Triggers::Trigger_type* Swiped_typeof();
void Swiped__ctor_2_fn(Swiped* __this, ::g::Fuse::Gestures::SwipeGesture* source);
void Swiped__get_How_fn(Swiped* __this, int* __retval);
void Swiped__set_How_fn(Swiped* __this, int* value);
void Swiped__New1_fn(::g::Fuse::Gestures::SwipeGesture* source, Swiped** __retval);
void Swiped__OnRooted_fn(Swiped* __this, ::g::Fuse::Node* n);
void Swiped__OnSwiped_fn(Swiped* __this, bool* v);
void Swiped__OnUnrooted_fn(Swiped* __this, ::g::Fuse::Node* n);
void Swiped__get_Source_fn(Swiped* __this, ::g::Fuse::Gestures::SwipeGesture** __retval);
void Swiped__set_Source_fn(Swiped* __this, ::g::Fuse::Gestures::SwipeGesture* value);

struct Swiped : ::g::Fuse::Triggers::Trigger
{
    int _how;
    uStrong< ::g::Fuse::Gestures::Internal::SwipeRegion*> _region;
    uStrong< ::g::Fuse::Gestures::SwipeGesture*> _Source;

    void ctor_2(::g::Fuse::Gestures::SwipeGesture* source);
    int How();
    void How(int value);
    void OnSwiped(bool v);
    ::g::Fuse::Gestures::SwipeGesture* Source();
    void Source(::g::Fuse::Gestures::SwipeGesture* value);
    static Swiped* New1(::g::Fuse::Gestures::SwipeGesture* source);
};
// }

}}} // ::g::Fuse::Gestures
