// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.UserEvents\0.18.8\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Triggers.Trigger.h>
namespace g{namespace Fuse{namespace Triggers{struct OnUserEvent;}}}
namespace g{namespace Fuse{struct Node;}}
namespace g{namespace Fuse{struct UserEventArgs;}}
namespace g{namespace Fuse{struct UserEventDispatch;}}

namespace g{
namespace Fuse{
namespace Triggers{

// public sealed class OnUserEvent :12
// {
::g::Fuse::Triggers::Trigger_type* OnUserEvent_typeof();
void OnUserEvent__ctor_2_fn(OnUserEvent* __this);
void OnUserEvent__get_Filter_fn(OnUserEvent* __this, int* __retval);
void OnUserEvent__set_Filter_fn(OnUserEvent* __this, int* value);
void OnUserEvent__add_Handler_fn(OnUserEvent* __this, uDelegate* value);
void OnUserEvent__remove_Handler_fn(OnUserEvent* __this, uDelegate* value);
void OnUserEvent__get_Name_fn(OnUserEvent* __this, uString** __retval);
void OnUserEvent__set_Name_fn(OnUserEvent* __this, uString* value);
void OnUserEvent__New1_fn(OnUserEvent** __retval);
void OnUserEvent__OnRaised_fn(OnUserEvent* __this, uObject* s, ::g::Fuse::UserEventArgs* args);
void OnUserEvent__OnRooted_fn(OnUserEvent* __this, ::g::Fuse::Node* parentNode);
void OnUserEvent__OnUnrooted_fn(OnUserEvent* __this, ::g::Fuse::Node* parentNode);

struct OnUserEvent : ::g::Fuse::Triggers::Trigger
{
    int _filter;
    uStrong< ::g::Fuse::UserEventDispatch*> _rootedEvent;
    uStrong< ::g::Fuse::Node*> _scope;
    uStrong<uString*> _Name;
    uStrong<uDelegate*> Handler1;

    void ctor_2();
    int Filter();
    void Filter(int value);
    void add_Handler(uDelegate* value);
    void remove_Handler(uDelegate* value);
    uString* Name();
    void Name(uString* value);
    void OnRaised(uObject* s, ::g::Fuse::UserEventArgs* args);
    static OnUserEvent* New1();
};
// }

}}} // ::g::Fuse::Triggers
