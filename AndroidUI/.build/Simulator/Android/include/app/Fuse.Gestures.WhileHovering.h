// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Gestures\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_FUSE_GESTURES_WHILE_HOVERING_H__
#define __APP_FUSE_GESTURES_WHILE_HOVERING_H__

#include <app/Fuse.Triggers.Trigger.h>
#include <Uno.h>
namespace app { namespace Fuse { struct Node; } }

namespace app {
namespace Fuse {
namespace Gestures {

struct WhileHovering;

struct WhileHovering__uType : ::app::Fuse::Triggers::Trigger__uType
{
};

WhileHovering__uType* WhileHovering__typeof();

void WhileHovering___ObjInit_2(WhileHovering* __this);
WhileHovering* WhileHovering__New_1(::uStatic* __this);
void WhileHovering__OnIsEnabledChanged(WhileHovering* __this, ::uObject* s, ::uObject* a);
void WhileHovering__OnPointerEntered(WhileHovering* __this, ::uObject* sender, ::uObject* args);
void WhileHovering__OnPointerLeft(WhileHovering* __this, ::uObject* sender, ::uObject* args);
void WhileHovering__OnRooted(WhileHovering* __this, ::app::Fuse::Node* elm);
void WhileHovering__OnUnrooted(WhileHovering* __this, ::app::Fuse::Node* elm);

struct WhileHovering : ::app::Fuse::Triggers::Trigger
{
    void _ObjInit_2() { WhileHovering___ObjInit_2(this); }
    void OnIsEnabledChanged(::uObject* s, ::uObject* a) { WhileHovering__OnIsEnabledChanged(this, s, a); }
    void OnPointerEntered(::uObject* sender, ::uObject* args) { WhileHovering__OnPointerEntered(this, sender, args); }
    void OnPointerLeft(::uObject* sender, ::uObject* args) { WhileHovering__OnPointerLeft(this, sender, args); }
};

}}}


#endif
