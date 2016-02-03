// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Physics\0.18.8\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Triggers.Trigger.h>
namespace g{namespace Fuse{namespace Physics{struct WhileDragging;}}}
namespace g{namespace Fuse{struct Node;}}

namespace g{
namespace Fuse{
namespace Physics{

// public sealed class WhileDragging :275
// {
::g::Fuse::Triggers::Trigger_type* WhileDragging_typeof();
void WhileDragging__ctor_2_fn(WhileDragging* __this);
void WhileDragging__Begin_fn(::g::Fuse::Node* n);
void WhileDragging__End_fn(::g::Fuse::Node* n);
void WhileDragging__New1_fn(WhileDragging** __retval);

struct WhileDragging : ::g::Fuse::Triggers::Trigger
{
    void ctor_2();
    static void Begin(::g::Fuse::Node* n);
    static void End(::g::Fuse::Node* n);
    static WhileDragging* New1();
};
// }

}}} // ::g::Fuse::Physics
