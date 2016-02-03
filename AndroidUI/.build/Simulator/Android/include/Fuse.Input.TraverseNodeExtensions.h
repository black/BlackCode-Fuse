// This file was generated based on 'C:\ProgramData\Uno\Packages\FuseCore\0.18.8\Input\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.h>
namespace g{namespace Fuse{namespace Input{struct TraverseNodeExtensions;}}}
namespace g{namespace Fuse{struct Node;}}

namespace g{
namespace Fuse{
namespace Input{

// internal static class TraverseNodeExtensions :86
// {
uClassType* TraverseNodeExtensions_typeof();
void TraverseNodeExtensions__FindNextChild_fn(::g::Fuse::Node* node, ::g::Fuse::Node* currentChild, ::g::Fuse::Node** __retval);
void TraverseNodeExtensions__FindNextChild1_fn(::g::Fuse::Node* node, uDelegate* filter, ::g::Fuse::Node** __retval);
void TraverseNodeExtensions__FindNextSibling_fn(::g::Fuse::Node* node, ::g::Fuse::Node** __retval);
void TraverseNodeExtensions__FindPreviousChild_fn(::g::Fuse::Node* node, ::g::Fuse::Node* currentChild, ::g::Fuse::Node** __retval);
void TraverseNodeExtensions__FindPreviousChild1_fn(::g::Fuse::Node* node, uDelegate* filter, ::g::Fuse::Node** __retval);
void TraverseNodeExtensions__FindPreviousSibling_fn(::g::Fuse::Node* node, ::g::Fuse::Node** __retval);

struct TraverseNodeExtensions : uObject
{
    static ::g::Fuse::Node* FindNextChild(::g::Fuse::Node* node, ::g::Fuse::Node* currentChild);
    static ::g::Fuse::Node* FindNextChild1(::g::Fuse::Node* node, uDelegate* filter);
    static ::g::Fuse::Node* FindNextSibling(::g::Fuse::Node* node);
    static ::g::Fuse::Node* FindPreviousChild(::g::Fuse::Node* node, ::g::Fuse::Node* currentChild);
    static ::g::Fuse::Node* FindPreviousChild1(::g::Fuse::Node* node, uDelegate* filter);
    static ::g::Fuse::Node* FindPreviousSibling(::g::Fuse::Node* node);
};
// }

}}} // ::g::Fuse::Input
