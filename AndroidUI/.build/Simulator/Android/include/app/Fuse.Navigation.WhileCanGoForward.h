// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Navigation\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_FUSE_NAVIGATION_WHILE_CAN_GO_FORWARD_H__
#define __APP_FUSE_NAVIGATION_WHILE_CAN_GO_FORWARD_H__

#include <app/Fuse.Navigation.WhileHistoryTrigger.h>
#include <Uno.h>

namespace app {
namespace Fuse {
namespace Navigation {

struct WhileCanGoForward;

struct WhileCanGoForward__uType : ::app::Fuse::Navigation::WhileHistoryTrigger__uType
{
};

WhileCanGoForward__uType* WhileCanGoForward__typeof();

void WhileCanGoForward___ObjInit_4(WhileCanGoForward* __this);
bool WhileCanGoForward__get_IsOn(WhileCanGoForward* __this);
WhileCanGoForward* WhileCanGoForward__New_1(::uStatic* __this);

struct WhileCanGoForward : ::app::Fuse::Navigation::WhileHistoryTrigger
{
    void _ObjInit_4() { WhileCanGoForward___ObjInit_4(this); }
};

}}}


#endif
