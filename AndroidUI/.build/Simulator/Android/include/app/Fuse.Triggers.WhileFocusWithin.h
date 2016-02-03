// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Triggers\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_FUSE_TRIGGERS_WHILE_FOCUS_WITHIN_H__
#define __APP_FUSE_TRIGGERS_WHILE_FOCUS_WITHIN_H__

#include <app/Fuse.Triggers.WhileTrigger.h>
#include <Uno.h>
namespace app { namespace Fuse { struct Node; } }
namespace app { namespace Uno { struct EventArgs; } }

namespace app {
namespace Fuse {
namespace Triggers {

struct WhileFocusWithin;

struct WhileFocusWithin__uType : ::app::Fuse::Triggers::WhileTrigger__uType
{
};

WhileFocusWithin__uType* WhileFocusWithin__typeof();

void WhileFocusWithin___ObjInit_3(WhileFocusWithin* __this);
bool WhileFocusWithin__get_IsOn(WhileFocusWithin* __this);
WhileFocusWithin* WhileFocusWithin__New_1(::uStatic* __this);
void WhileFocusWithin__OnFocusChange(WhileFocusWithin* __this, ::uObject* sender, ::app::Uno::EventArgs* args);
void WhileFocusWithin__OnRooted(WhileFocusWithin* __this, ::app::Fuse::Node* elm);
void WhileFocusWithin__OnUnrooted(WhileFocusWithin* __this, ::app::Fuse::Node* elm);

struct WhileFocusWithin : ::app::Fuse::Triggers::WhileTrigger
{
    void _ObjInit_3() { WhileFocusWithin___ObjInit_3(this); }
    bool IsOn() { return WhileFocusWithin__get_IsOn(this); }
    void OnFocusChange(::uObject* sender, ::app::Uno::EventArgs* args) { WhileFocusWithin__OnFocusChange(this, sender, args); }
};

}}}


#endif
