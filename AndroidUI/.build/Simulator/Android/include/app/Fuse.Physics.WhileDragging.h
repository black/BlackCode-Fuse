// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Physics\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_FUSE_PHYSICS_WHILE_DRAGGING_H__
#define __APP_FUSE_PHYSICS_WHILE_DRAGGING_H__

#include <app/Fuse.Triggers.Trigger.h>
#include <Uno.h>
namespace app { namespace Fuse { struct Node; } }

namespace app {
namespace Fuse {
namespace Physics {

struct WhileDragging;

struct WhileDragging__uType : ::app::Fuse::Triggers::Trigger__uType
{
};

WhileDragging__uType* WhileDragging__typeof();

void WhileDragging___ObjInit_2(WhileDragging* __this);
void WhileDragging__Begin(::uStatic* __this, ::app::Fuse::Node* n);
void WhileDragging__End(::uStatic* __this, ::app::Fuse::Node* n);
WhileDragging* WhileDragging__New_1(::uStatic* __this);

struct WhileDragging : ::app::Fuse::Triggers::Trigger
{
    void _ObjInit_2() { WhileDragging___ObjInit_2(this); }
};

}}}


#endif
