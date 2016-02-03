// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Triggers\0.19.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Triggers.Trigger.h>
namespace g{namespace Fuse{namespace Triggers{struct WhileKeyboardVisible;}}}
namespace g{namespace Fuse{struct Node;}}
namespace g{namespace Uno{namespace Platform{struct SystemUIWillResizeEventArgs;}}}
namespace g{namespace Uno{struct Rect;}}

namespace g{
namespace Fuse{
namespace Triggers{

// public sealed class WhileKeyboardVisible :108
// {
::g::Fuse::Triggers::Trigger_type* WhileKeyboardVisible_typeof();
void WhileKeyboardVisible__ctor_2_fn(WhileKeyboardVisible* __this);
void WhileKeyboardVisible__GetHeight_fn(WhileKeyboardVisible* __this, ::g::Uno::Rect* r, float* __retval);
void WhileKeyboardVisible__New1_fn(WhileKeyboardVisible** __retval);
void WhileKeyboardVisible__OnBottomBarResize_fn(WhileKeyboardVisible* __this, uObject* sender, ::g::Uno::Platform::SystemUIWillResizeEventArgs* args);
void WhileKeyboardVisible__OnRooted_fn(WhileKeyboardVisible* __this, ::g::Fuse::Node* parentNode);
void WhileKeyboardVisible__OnUnrooted_fn(WhileKeyboardVisible* __this, ::g::Fuse::Node* parentNode);
void WhileKeyboardVisible__get_Threshold_fn(WhileKeyboardVisible* __this, float* __retval);

struct WhileKeyboardVisible : ::g::Fuse::Triggers::Trigger
{
    float _baseHeight;
    static float _deltaY_;
    static float& _deltaY() { return WhileKeyboardVisible_typeof()->Init(), _deltaY_; }
    float _threshold;
    static uSStrong<uObject*> Keyboard_;
    static uSStrong<uObject*>& Keyboard() { return WhileKeyboardVisible_typeof()->Init(), Keyboard_; }

    void ctor_2();
    float GetHeight(::g::Uno::Rect r);
    void OnBottomBarResize(uObject* sender, ::g::Uno::Platform::SystemUIWillResizeEventArgs* args);
    float Threshold();
    static WhileKeyboardVisible* New1();
};
// }

}}} // ::g::Fuse::Triggers
