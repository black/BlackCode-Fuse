// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Reactive\0.18.8\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Behavior.h>
namespace g{namespace Fuse{namespace Reactive{struct Binding;}}}
namespace g{namespace Fuse{struct Node;}}

namespace g{
namespace Fuse{
namespace Reactive{

// public abstract class Binding :450
// {
struct Binding_type : ::g::Fuse::Behavior_type
{
    void(*fp_NewValue)(::g::Fuse::Reactive::Binding*, uObject*);
};

Binding_type* Binding_typeof();
void Binding__ctor_1_fn(Binding* __this, uString* key);
void Binding__get_Key_fn(Binding* __this, uString** __retval);
void Binding__set_Key_fn(Binding* __this, uString* value);
void Binding__get_Node_fn(Binding* __this, ::g::Fuse::Node** __retval);
void Binding__OnRooted_fn(Binding* __this, ::g::Fuse::Node* n);
void Binding__OnUnrooted_fn(Binding* __this, ::g::Fuse::Node* n);

struct Binding : ::g::Fuse::Behavior
{
    uStrong<uObject*> _pathSubscription;
    uStrong<uString*> _Key;

    void ctor_1(uString* key);
    uString* Key();
    void Key(uString* value);
    void NewValue(uObject* obj) { (((Binding_type*)__type)->fp_NewValue)(this, obj); }
    ::g::Fuse::Node* Node();
};
// }

}}} // ::g::Fuse::Reactive
