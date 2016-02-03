// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Elements\0.19.3\Triggers\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.NodeEventArgs.h>
#include <Fuse.Scripting.IScriptEvent.h>
namespace g{namespace Fuse{namespace Triggers{struct LayoutTransitionedArgs;}}}
namespace g{namespace Fuse{struct Node;}}

namespace g{
namespace Fuse{
namespace Triggers{

// internal sealed class LayoutTransitionedArgs :10
// {
::g::Fuse::NodeEventArgs_type* LayoutTransitionedArgs_typeof();
void LayoutTransitionedArgs__ctor_2_fn(LayoutTransitionedArgs* __this, ::g::Fuse::Node* node);
void LayoutTransitionedArgs__New3_fn(::g::Fuse::Node* node, LayoutTransitionedArgs** __retval);

struct LayoutTransitionedArgs : ::g::Fuse::NodeEventArgs
{
    void ctor_2(::g::Fuse::Node* node);
    static LayoutTransitionedArgs* New3(::g::Fuse::Node* node);
};
// }

}}} // ::g::Fuse::Triggers
