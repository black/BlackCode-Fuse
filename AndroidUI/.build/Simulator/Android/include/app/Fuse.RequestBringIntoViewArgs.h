// This file was generated based on 'C:\ProgramData\Uno\Packages\FuseCore\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_FUSE_REQUEST_BRING_INTO_VIEW_ARGS_H__
#define __APP_FUSE_REQUEST_BRING_INTO_VIEW_ARGS_H__

#include <app/Uno.EventArgs.h>
#include <Uno.h>
namespace app { namespace Fuse { struct Node; } }

namespace app {
namespace Fuse {

struct RequestBringIntoViewArgs;

struct RequestBringIntoViewArgs__uType : ::app::Uno::EventArgs__uType
{
};

RequestBringIntoViewArgs__uType* RequestBringIntoViewArgs__typeof();

void RequestBringIntoViewArgs___ObjInit_1(RequestBringIntoViewArgs* __this, ::app::Fuse::Node* elm);
::app::Fuse::Node* RequestBringIntoViewArgs__get_Node(RequestBringIntoViewArgs* __this);
RequestBringIntoViewArgs* RequestBringIntoViewArgs__New_2(::uStatic* __this, ::app::Fuse::Node* elm);
void RequestBringIntoViewArgs__set_Node(RequestBringIntoViewArgs* __this, ::app::Fuse::Node* value);

struct RequestBringIntoViewArgs : ::app::Uno::EventArgs
{
    ::uStrong< ::app::Fuse::Node*> _Node;

    void _ObjInit_1(::app::Fuse::Node* elm) { RequestBringIntoViewArgs___ObjInit_1(this, elm); }
    ::app::Fuse::Node* Node() { return RequestBringIntoViewArgs__get_Node(this); }
    void Node(::app::Fuse::Node* value) { RequestBringIntoViewArgs__set_Node(this, value); }
};

}}


#endif
