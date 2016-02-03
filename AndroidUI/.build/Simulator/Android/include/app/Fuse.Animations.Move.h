// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Animations\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_FUSE_ANIMATIONS_MOVE_H__
#define __APP_FUSE_ANIMATIONS_MOVE_H__

#include <app/Fuse.Animations.TransformAnimator__Fuse_Translation.h>
#include <Uno.h>
namespace app { namespace Fuse { struct Node; } }
namespace app { namespace Fuse { struct Translation; } }
namespace app { namespace Uno { struct Float4; } }

namespace app {
namespace Fuse {
namespace Animations {

struct Move;

struct Move__uType : ::app::Fuse::Animations::TransformAnimator__Fuse_Translation__uType
{
};

Move__uType* Move__typeof();

void Move___ObjInit_3(Move* __this);
::app::Fuse::Node* Move__get_RelativeNode(Move* __this);
::uObject* Move__get_RelativeTo(Move* __this);
Move* Move__New_1(::uStatic* __this);
void Move__set_RelativeNode(Move* __this, ::app::Fuse::Node* value);
void Move__set_RelativeTo(Move* __this, ::uObject* value);
void Move__Update(Move* __this, ::app::Fuse::Node* elm, ::app::Fuse::Translation* t, ::app::Uno::Float4 value);

struct Move : ::app::Fuse::Animations::TransformAnimator__Fuse_Translation
{
    ::uStrong< ::uObject*> _relativeTo;
    ::uStrong< ::app::Fuse::Node*> _RelativeNode;

    void _ObjInit_3() { Move___ObjInit_3(this); }
    ::app::Fuse::Node* RelativeNode() { return Move__get_RelativeNode(this); }
    ::uObject* RelativeTo() { return Move__get_RelativeTo(this); }
    void RelativeNode(::app::Fuse::Node* value) { Move__set_RelativeNode(this, value); }
    void RelativeTo(::uObject* value) { Move__set_RelativeTo(this, value); }
};

}}}


#endif
