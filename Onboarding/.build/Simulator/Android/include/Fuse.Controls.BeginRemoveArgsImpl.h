// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Controls\0.19.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.BeginRemoveArgs.h>
namespace g{namespace Fuse{namespace Controls{struct BeginRemoveArgsImpl;}}}
namespace g{namespace Fuse{namespace Controls{struct Panel;}}}
namespace g{namespace Fuse{struct Node;}}

namespace g{
namespace Fuse{
namespace Controls{

// internal sealed class BeginRemoveArgsImpl :1774
// {
::g::Fuse::BeginRemoveArgs_type* BeginRemoveArgsImpl_typeof();
void BeginRemoveArgsImpl__ctor_2_fn(BeginRemoveArgsImpl* __this, ::g::Fuse::Node* child, ::g::Fuse::Controls::Panel* parent);
void BeginRemoveArgsImpl__get_Child_fn(BeginRemoveArgsImpl* __this, ::g::Fuse::Node** __retval);
void BeginRemoveArgsImpl__set_Child_fn(BeginRemoveArgsImpl* __this, ::g::Fuse::Node* value);
void BeginRemoveArgsImpl__New2_fn(::g::Fuse::Node* child, ::g::Fuse::Controls::Panel* parent, BeginRemoveArgsImpl** __retval);
void BeginRemoveArgsImpl__OnRemoved_fn(BeginRemoveArgsImpl* __this);
void BeginRemoveArgsImpl__get_Parent_fn(BeginRemoveArgsImpl* __this, ::g::Fuse::Controls::Panel** __retval);
void BeginRemoveArgsImpl__set_Parent_fn(BeginRemoveArgsImpl* __this, ::g::Fuse::Controls::Panel* value);

struct BeginRemoveArgsImpl : ::g::Fuse::BeginRemoveArgs
{
    uStrong< ::g::Fuse::Node*> _Child;
    uStrong< ::g::Fuse::Controls::Panel*> _Parent;

    void ctor_2(::g::Fuse::Node* child, ::g::Fuse::Controls::Panel* parent);
    ::g::Fuse::Node* Child();
    void Child(::g::Fuse::Node* value);
    ::g::Fuse::Controls::Panel* Parent();
    void Parent(::g::Fuse::Controls::Panel* value);
    static BeginRemoveArgsImpl* New2(::g::Fuse::Node* child, ::g::Fuse::Controls::Panel* parent);
};
// }

}}} // ::g::Fuse::Controls
