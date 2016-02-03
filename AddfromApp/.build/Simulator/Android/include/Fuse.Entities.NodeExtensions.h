// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Entities\0.19.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.h>
namespace g{namespace Fuse{namespace Entities{struct NodeExtensions;}}}
namespace g{namespace Fuse{struct Node;}}

namespace g{
namespace Fuse{
namespace Entities{

// public static class NodeExtensions :1679
// {
uClassType* NodeExtensions_typeof();
void NodeExtensions__IsInSubtreeOf_fn(::g::Fuse::Node* self, ::g::Fuse::Node* parent, bool* __retval);

struct NodeExtensions : uObject
{
    static bool IsInSubtreeOf(::g::Fuse::Node* self, ::g::Fuse::Node* parent);
};
// }

}}} // ::g::Fuse::Entities
