// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Controls\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_FUSE_CONTROLS_BEGIN_REMOVE_ARGS_IMPL_H__
#define __APP_FUSE_CONTROLS_BEGIN_REMOVE_ARGS_IMPL_H__

#include <app/Fuse.BeginRemoveArgs.h>
#include <Uno.h>
namespace app { namespace Fuse { namespace Controls { struct Panel; } } }
namespace app { namespace Fuse { struct Node; } }

namespace app {
namespace Fuse {
namespace Controls {

struct BeginRemoveArgsImpl;

struct BeginRemoveArgsImpl__uType : ::app::Fuse::BeginRemoveArgs__uType
{
};

BeginRemoveArgsImpl__uType* BeginRemoveArgsImpl__typeof();

void BeginRemoveArgsImpl___ObjInit_2(BeginRemoveArgsImpl* __this, ::app::Fuse::Node* child, ::app::Fuse::Controls::Panel* parent);
::app::Fuse::Node* BeginRemoveArgsImpl__get_Child(BeginRemoveArgsImpl* __this);
::app::Fuse::Controls::Panel* BeginRemoveArgsImpl__get_Parent(BeginRemoveArgsImpl* __this);
BeginRemoveArgsImpl* BeginRemoveArgsImpl__New_2(::uStatic* __this, ::app::Fuse::Node* child, ::app::Fuse::Controls::Panel* parent);
void BeginRemoveArgsImpl__Remove(BeginRemoveArgsImpl* __this);
void BeginRemoveArgsImpl__set_Child(BeginRemoveArgsImpl* __this, ::app::Fuse::Node* value);
void BeginRemoveArgsImpl__set_Parent(BeginRemoveArgsImpl* __this, ::app::Fuse::Controls::Panel* value);

struct BeginRemoveArgsImpl : ::app::Fuse::BeginRemoveArgs
{
    ::uStrong< ::app::Fuse::Controls::Panel*> _Parent;
    ::uStrong< ::app::Fuse::Node*> _Child;

    void _ObjInit_2(::app::Fuse::Node* child, ::app::Fuse::Controls::Panel* parent) { BeginRemoveArgsImpl___ObjInit_2(this, child, parent); }
    ::app::Fuse::Node* Child() { return BeginRemoveArgsImpl__get_Child(this); }
    ::app::Fuse::Controls::Panel* Parent() { return BeginRemoveArgsImpl__get_Parent(this); }
    void Child(::app::Fuse::Node* value) { BeginRemoveArgsImpl__set_Child(this, value); }
    void Parent(::app::Fuse::Controls::Panel* value) { BeginRemoveArgsImpl__set_Parent(this, value); }
};

}}}


#endif
