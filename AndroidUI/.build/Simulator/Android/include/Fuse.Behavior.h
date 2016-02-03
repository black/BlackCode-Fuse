// This file was generated based on 'C:\ProgramData\Uno\Packages\FuseCore\0.18.8\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.Object.h>
namespace g{namespace Fuse{struct Behavior;}}
namespace g{namespace Fuse{struct Node;}}

namespace g{
namespace Fuse{

// public abstract class Behavior :230
// {
struct Behavior_type : uType
{
    void(*fp_OnRooted)(::g::Fuse::Behavior*, ::g::Fuse::Node*);
    void(*fp_OnUnrooted)(::g::Fuse::Behavior*, ::g::Fuse::Node*);
};

Behavior_type* Behavior_typeof();
void Behavior__ctor__fn(Behavior* __this);
void Behavior__get_IsRooted_fn(Behavior* __this, bool* __retval);
void Behavior__OnRooted_fn(Behavior* __this, ::g::Fuse::Node* parentNode);
void Behavior__OnUnrooted_fn(Behavior* __this, ::g::Fuse::Node* parentNode);
void Behavior__get_OverridesDefault_fn(Behavior* __this, bool* __retval);
void Behavior__get_ParentNode_fn(Behavior* __this, ::g::Fuse::Node** __retval);
void Behavior__set_ParentNode_fn(Behavior* __this, ::g::Fuse::Node* value);
void Behavior__Rooted_fn(Behavior* __this, ::g::Fuse::Node* e);
void Behavior__get_TriggerCanStartTest_fn(Behavior* __this, bool* __retval);
void Behavior__Unrooted_fn(Behavior* __this, ::g::Fuse::Node* e);

struct Behavior : uObject
{
    int _status;
    bool AddedByStyle;
    uStrong< ::g::Fuse::Node*> _ParentNode;

    void ctor_();
    bool IsRooted();
    void OnRooted(::g::Fuse::Node* parentNode) { (((Behavior_type*)__type)->fp_OnRooted)(this, parentNode); }
    void OnUnrooted(::g::Fuse::Node* parentNode) { (((Behavior_type*)__type)->fp_OnUnrooted)(this, parentNode); }
    bool OverridesDefault();
    ::g::Fuse::Node* ParentNode();
    void ParentNode(::g::Fuse::Node* value);
    void Rooted(::g::Fuse::Node* e);
    bool TriggerCanStartTest();
    void Unrooted(::g::Fuse::Node* e);
    static void OnRooted(Behavior* __this, ::g::Fuse::Node* parentNode) { Behavior__OnRooted_fn(__this, parentNode); }
    static void OnUnrooted(Behavior* __this, ::g::Fuse::Node* parentNode) { Behavior__OnUnrooted_fn(__this, parentNode); }
};
// }

}} // ::g::Fuse
