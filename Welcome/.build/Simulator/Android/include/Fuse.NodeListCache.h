// This file was generated based on 'C:\ProgramData\Uno\Packages\FuseCore\0.19.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.h>
namespace g{namespace Fuse{struct Node;}}
namespace g{namespace Fuse{struct NodeListCache;}}
namespace g{namespace Uno{namespace Collections{struct List;}}}

namespace g{
namespace Fuse{

// internal static class NodeListCache :850
// {
uClassType* NodeListCache_typeof();
void NodeListCache__Acquire_fn(::g::Uno::Collections::List** __retval);
void NodeListCache__Release_fn(::g::Uno::Collections::List* list);

struct NodeListCache : uObject
{
    static uSStrong< ::g::Uno::Collections::List*> _nodeListCache_;
    static uSStrong< ::g::Uno::Collections::List*>& _nodeListCache() { return NodeListCache_typeof()->Init(), _nodeListCache_; }

    static ::g::Uno::Collections::List* Acquire();
    static void Release(::g::Uno::Collections::List* list);
};
// }

}} // ::g::Fuse
