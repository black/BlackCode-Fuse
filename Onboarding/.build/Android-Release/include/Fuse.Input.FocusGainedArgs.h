// This file was generated based on 'C:\ProgramData\Uno\Packages\FuseCore\0.19.3\Input\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.NodeEventArgs.h>
namespace g{namespace Fuse{namespace Input{struct FocusGainedArgs;}}}
namespace g{namespace Fuse{struct Node;}}

namespace g{
namespace Fuse{
namespace Input{

// public sealed class FocusGainedArgs :9
// {
uType* FocusGainedArgs_typeof();
void FocusGainedArgs__ctor_2_fn(FocusGainedArgs* __this, ::g::Fuse::Node* node);
void FocusGainedArgs__New3_fn(::g::Fuse::Node* node, FocusGainedArgs** __retval);

struct FocusGainedArgs : ::g::Fuse::NodeEventArgs
{
    void ctor_2(::g::Fuse::Node* node);
    static FocusGainedArgs* New3(::g::Fuse::Node* node);
};
// }

}}} // ::g::Fuse::Input
