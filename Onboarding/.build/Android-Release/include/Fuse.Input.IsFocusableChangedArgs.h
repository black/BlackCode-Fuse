// This file was generated based on 'C:\ProgramData\Uno\Packages\FuseCore\0.19.3\Input\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.NodeEventArgs.h>
namespace g{namespace Fuse{namespace Input{struct IsFocusableChangedArgs;}}}
namespace g{namespace Fuse{struct Node;}}

namespace g{
namespace Fuse{
namespace Input{

// public sealed class IsFocusableChangedArgs :43
// {
uType* IsFocusableChangedArgs_typeof();
void IsFocusableChangedArgs__ctor_2_fn(IsFocusableChangedArgs* __this, ::g::Fuse::Node* node);
void IsFocusableChangedArgs__New3_fn(::g::Fuse::Node* node, IsFocusableChangedArgs** __retval);

struct IsFocusableChangedArgs : ::g::Fuse::NodeEventArgs
{
    void ctor_2(::g::Fuse::Node* node);
    static IsFocusableChangedArgs* New3(::g::Fuse::Node* node);
};
// }

}}} // ::g::Fuse::Input
