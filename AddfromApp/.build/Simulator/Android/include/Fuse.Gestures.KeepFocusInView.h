// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Gestures\0.19.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Gestures.KeepInViewCommon.h>
namespace g{namespace Fuse{namespace Gestures{struct KeepFocusInView;}}}
namespace g{namespace Fuse{namespace Input{struct FocusGainedArgs;}}}
namespace g{namespace Fuse{struct Node;}}

namespace g{
namespace Fuse{
namespace Gestures{

// public sealed class KeepFocusInView :185
// {
::g::Fuse::Behavior_type* KeepFocusInView_typeof();
void KeepFocusInView__ctor_2_fn(KeepFocusInView* __this);
void KeepFocusInView__New2_fn(KeepFocusInView** __retval);
void KeepFocusInView__OnGotFocus_fn(KeepFocusInView* __this, uObject* s, ::g::Fuse::Input::FocusGainedArgs* fga);
void KeepFocusInView__OnLostFocus_fn(KeepFocusInView* __this, uObject* s, uObject* a);
void KeepFocusInView__OnRooted_fn(KeepFocusInView* __this, ::g::Fuse::Node* parentNode);
void KeepFocusInView__OnUnrooted_fn(KeepFocusInView* __this, ::g::Fuse::Node* parentNode);

struct KeepFocusInView : ::g::Fuse::Gestures::KeepInViewCommon
{
    void ctor_2();
    void OnGotFocus(uObject* s, ::g::Fuse::Input::FocusGainedArgs* fga);
    void OnLostFocus(uObject* s, uObject* a);
    static KeepFocusInView* New2();
};
// }

}}} // ::g::Fuse::Gestures
