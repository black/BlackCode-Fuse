// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Triggers\0.19.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Triggers.Trigger.h>
namespace g{namespace Fuse{namespace Triggers{struct RemovingAnimation;}}}
namespace g{namespace Fuse{struct BeginRemoveArgs;}}
namespace g{namespace Fuse{struct Node;}}

namespace g{
namespace Fuse{
namespace Triggers{

// public sealed class RemovingAnimation :317
// {
::g::Fuse::Triggers::Trigger_type* RemovingAnimation_typeof();
void RemovingAnimation__ctor_2_fn(RemovingAnimation* __this);
void RemovingAnimation__New1_fn(RemovingAnimation** __retval);
void RemovingAnimation__OnBeginRemove_fn(RemovingAnimation* __this, uObject* sender, ::g::Fuse::BeginRemoveArgs* args);
void RemovingAnimation__OnDone_fn(RemovingAnimation* __this);
void RemovingAnimation__OnRooted_fn(RemovingAnimation* __this, ::g::Fuse::Node* parentNode);
void RemovingAnimation__OnUnrooted_fn(RemovingAnimation* __this, ::g::Fuse::Node* parentNode);

struct RemovingAnimation : ::g::Fuse::Triggers::Trigger
{
    uStrong< ::g::Fuse::BeginRemoveArgs*> _args;

    void ctor_2();
    void OnBeginRemove(uObject* sender, ::g::Fuse::BeginRemoveArgs* args);
    void OnDone();
    static RemovingAnimation* New1();
};
// }

}}} // ::g::Fuse::Triggers
