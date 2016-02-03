// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Reactive\0.19.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Triggers.Trigger.h>
namespace g{namespace Fuse{namespace Reactive{struct Select;}}}
namespace g{namespace Fuse{struct Node;}}

namespace g{
namespace Fuse{
namespace Reactive{

// public sealed class Select :2067
// {
::g::Fuse::Triggers::Trigger_type* Select_typeof();
void Select__ctor_2_fn(Select* __this);
void Select__get_Data_fn(Select* __this, uObject** __retval);
void Select__set_Data_fn(Select* __this, uObject* value);
void Select__get_IsOn_fn(Select* __this, bool* __retval);
void Select__New1_fn(Select** __retval);
void Select__OnChanged_fn(Select* __this);
void Select__OnNodeAdded_fn(Select* __this, ::g::Fuse::Node* n);
void Select__OnRooted_fn(Select* __this, ::g::Fuse::Node* parentNode);
void Select__UpdateNodes_fn(Select* __this);

struct Select : ::g::Fuse::Triggers::Trigger
{
    uStrong<uObject*> _data;

    void ctor_2();
    uObject* Data();
    void Data(uObject* value);
    bool IsOn();
    void OnChanged();
    void UpdateNodes();
    static Select* New1();
};
// }

}}} // ::g::Fuse::Reactive
