// This file was generated based on 'C:\ProgramData\Uno\Packages\FuseCore\0.19.3\Input\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.NodeEventArgs.h>
namespace g{namespace Fuse{namespace Input{struct FocusLostArgs;}}}
namespace g{namespace Fuse{struct Node;}}

namespace g{
namespace Fuse{
namespace Input{

// public sealed class FocusLostArgs :27
// {
uType* FocusLostArgs_typeof();
void FocusLostArgs__ctor_2_fn(FocusLostArgs* __this, ::g::Fuse::Node* node);
void FocusLostArgs__New3_fn(::g::Fuse::Node* node, FocusLostArgs** __retval);

struct FocusLostArgs : ::g::Fuse::NodeEventArgs
{
    void ctor_2(::g::Fuse::Node* node);
    static FocusLostArgs* New3(::g::Fuse::Node* node);
};
// }

}}} // ::g::Fuse::Input
