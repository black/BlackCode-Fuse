// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Triggers\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_FUSE_TRIGGERS_ADDING_ANIMATION_H__
#define __APP_FUSE_TRIGGERS_ADDING_ANIMATION_H__

#include <app/Fuse.Triggers.Trigger.h>
#include <Uno.h>
namespace app { namespace Fuse { struct Node; } }

namespace app {
namespace Fuse {
namespace Triggers {

struct AddingAnimation;

struct AddingAnimation__uType : ::app::Fuse::Triggers::Trigger__uType
{
};

AddingAnimation__uType* AddingAnimation__typeof();

void AddingAnimation___ObjInit_2(AddingAnimation* __this);
AddingAnimation* AddingAnimation__New_1(::uStatic* __this);
void AddingAnimation__OnRooted(AddingAnimation* __this, ::app::Fuse::Node* n);

struct AddingAnimation : ::app::Fuse::Triggers::Trigger
{
    void _ObjInit_2() { AddingAnimation___ObjInit_2(this); }
};

}}}


#endif
