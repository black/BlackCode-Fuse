// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Triggers\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_FUSE_TRIGGERS_WHILE_NOT_FOCUSED_H__
#define __APP_FUSE_TRIGGERS_WHILE_NOT_FOCUSED_H__

#include <app/Fuse.Triggers.Trigger.h>
#include <Uno.h>
namespace app { namespace Fuse { struct Node; } }
namespace app { namespace Uno { struct EventArgs; } }

namespace app {
namespace Fuse {
namespace Triggers {

struct WhileNotFocused;

struct WhileNotFocused__uType : ::app::Fuse::Triggers::Trigger__uType
{
};

WhileNotFocused__uType* WhileNotFocused__typeof();

void WhileNotFocused___ObjInit_2(WhileNotFocused* __this);
WhileNotFocused* WhileNotFocused__New_1(::uStatic* __this);
void WhileNotFocused__OnGotFocus(WhileNotFocused* __this, ::uObject* sender, ::app::Uno::EventArgs* args);
void WhileNotFocused__OnLostFocus(WhileNotFocused* __this, ::uObject* sender, ::app::Uno::EventArgs* args);
void WhileNotFocused__OnRooted(WhileNotFocused* __this, ::app::Fuse::Node* elm);
void WhileNotFocused__OnUnrooted(WhileNotFocused* __this, ::app::Fuse::Node* elm);

struct WhileNotFocused : ::app::Fuse::Triggers::Trigger
{
    void _ObjInit_2() { WhileNotFocused___ObjInit_2(this); }
    void OnGotFocus(::uObject* sender, ::app::Uno::EventArgs* args) { WhileNotFocused__OnGotFocus(this, sender, args); }
    void OnLostFocus(::uObject* sender, ::app::Uno::EventArgs* args) { WhileNotFocused__OnLostFocus(this, sender, args); }
};

}}}


#endif
