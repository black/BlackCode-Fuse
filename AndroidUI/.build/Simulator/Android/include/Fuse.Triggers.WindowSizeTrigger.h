// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Triggers\0.18.8\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Triggers.WhileTrigger.h>
namespace g{namespace Fuse{namespace Triggers{struct WindowSizeTrigger;}}}
namespace g{namespace Fuse{struct Node;}}
namespace g{namespace Fuse{struct RootViewport;}}
namespace g{namespace Uno{struct EventArgs;}}

namespace g{
namespace Fuse{
namespace Triggers{

// public abstract class WindowSizeTrigger :1739
// {
struct WindowSizeTrigger_type : ::g::Fuse::Triggers::Trigger_type
{
    void(*fp_get_IsActive)(::g::Fuse::Triggers::WindowSizeTrigger*, bool*);
};

WindowSizeTrigger_type* WindowSizeTrigger_typeof();
void WindowSizeTrigger__ctor_3_fn(WindowSizeTrigger* __this);
void WindowSizeTrigger__OnResize_fn(WindowSizeTrigger* __this, uObject* sender, ::g::Uno::EventArgs* args);
void WindowSizeTrigger__OnRooted_fn(WindowSizeTrigger* __this, ::g::Fuse::Node* parentNode);
void WindowSizeTrigger__OnUnrooted_fn(WindowSizeTrigger* __this, ::g::Fuse::Node* parentNode);
void WindowSizeTrigger__get_Viewport_fn(WindowSizeTrigger* __this, ::g::Fuse::RootViewport** __retval);
void WindowSizeTrigger__set_Viewport_fn(WindowSizeTrigger* __this, ::g::Fuse::RootViewport* value);

struct WindowSizeTrigger : ::g::Fuse::Triggers::WhileTrigger
{
    uStrong< ::g::Fuse::RootViewport*> _Viewport;

    void ctor_3();
    bool IsActive() { bool __retval; return (((WindowSizeTrigger_type*)__type)->fp_get_IsActive)(this, &__retval), __retval; }
    void OnResize(uObject* sender, ::g::Uno::EventArgs* args);
    ::g::Fuse::RootViewport* Viewport();
    void Viewport(::g::Fuse::RootViewport* value);
};
// }

}}} // ::g::Fuse::Triggers
