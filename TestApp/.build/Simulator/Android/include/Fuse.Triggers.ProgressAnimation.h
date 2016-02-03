// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Triggers\0.18.8\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Triggers.Trigger.h>
namespace g{namespace Fuse{namespace Triggers{struct ProgressAnimation;}}}
namespace g{namespace Fuse{struct Node;}}

namespace g{
namespace Fuse{
namespace Triggers{

// public sealed class ProgressAnimation :267
// {
::g::Fuse::Triggers::Trigger_type* ProgressAnimation_typeof();
void ProgressAnimation__ctor_2_fn(ProgressAnimation* __this);
void ProgressAnimation__New1_fn(ProgressAnimation** __retval);
void ProgressAnimation__OnChanged_fn(ProgressAnimation* __this, uObject* s, uObject* a);
void ProgressAnimation__OnRooted_fn(ProgressAnimation* __this, ::g::Fuse::Node* parentNode);
void ProgressAnimation__OnUnrooted_fn(ProgressAnimation* __this, ::g::Fuse::Node* parentNode);
void ProgressAnimation__get_Source_fn(ProgressAnimation* __this, uObject** __retval);
void ProgressAnimation__set_Source_fn(ProgressAnimation* __this, uObject* value);

struct ProgressAnimation : ::g::Fuse::Triggers::Trigger
{
    double _prevValue;
    uStrong<uObject*> _progress;
    uStrong<uObject*> _Source;

    void ctor_2();
    void OnChanged(uObject* s, uObject* a);
    uObject* Source();
    void Source(uObject* value);
    static ProgressAnimation* New1();
};
// }

}}} // ::g::Fuse::Triggers
