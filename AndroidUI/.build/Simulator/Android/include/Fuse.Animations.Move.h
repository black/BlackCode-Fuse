// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Animations\0.18.8\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Animations.TransformAnimator-1.h>
#include <Fuse.Translation.h>
namespace g{namespace Fuse{namespace Animations{struct Move;}}}
namespace g{namespace Fuse{struct Node;}}
namespace g{namespace Uno{struct Float4;}}

namespace g{
namespace Fuse{
namespace Animations{

// public sealed class Move :3152
// {
::g::Fuse::Animations::TransformAnimator_type* Move_typeof();
void Move__ctor_3_fn(Move* __this);
void Move__New1_fn(Move** __retval);
void Move__get_RelativeTo_fn(Move* __this, uObject** __retval);
void Move__set_RelativeTo_fn(Move* __this, uObject* value);
void Move__Update_fn(Move* __this, ::g::Fuse::Node* elm, ::g::Fuse::Translation* t, ::g::Uno::Float4* value);

struct Move : ::g::Fuse::Animations::TransformAnimator
{
    uStrong<uObject*> _relativeTo;

    void ctor_3();
    uObject* RelativeTo();
    void RelativeTo(uObject* value);
    static Move* New1();
};
// }

}}} // ::g::Fuse::Animations
