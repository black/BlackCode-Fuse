// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Triggers\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_FUSE_TRIGGERS_WHILE_FOCUSED_H__
#define __APP_FUSE_TRIGGERS_WHILE_FOCUSED_H__

#include <app/Fuse.Triggers.Trigger.h>
#include <Uno.h>
namespace app { namespace Fuse { struct Node; } }
namespace app { namespace Uno { struct EventArgs; } }

namespace app {
namespace Fuse {
namespace Triggers {

struct WhileFocused;

struct WhileFocused__uType : ::app::Fuse::Triggers::Trigger__uType
{
};

WhileFocused__uType* WhileFocused__typeof();

void WhileFocused___ObjInit_2(WhileFocused* __this);
WhileFocused* WhileFocused__New_1(::uStatic* __this);
void WhileFocused__OnGotFocus(WhileFocused* __this, ::uObject* sender, ::app::Uno::EventArgs* args);
void WhileFocused__OnLostFocus(WhileFocused* __this, ::uObject* sender, ::app::Uno::EventArgs* args);
void WhileFocused__OnRooted(WhileFocused* __this, ::app::Fuse::Node* elm);
void WhileFocused__OnUnrooted(WhileFocused* __this, ::app::Fuse::Node* elm);

struct WhileFocused : ::app::Fuse::Triggers::Trigger
{
    void _ObjInit_2() { WhileFocused___ObjInit_2(this); }
    void OnGotFocus(::uObject* sender, ::app::Uno::EventArgs* args) { WhileFocused__OnGotFocus(this, sender, args); }
    void OnLostFocus(::uObject* sender, ::app::Uno::EventArgs* args) { WhileFocused__OnLostFocus(this, sender, args); }
};

}}}


#endif
