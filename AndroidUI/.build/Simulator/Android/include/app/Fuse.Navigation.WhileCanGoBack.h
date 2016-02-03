// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Navigation\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_FUSE_NAVIGATION_WHILE_CAN_GO_BACK_H__
#define __APP_FUSE_NAVIGATION_WHILE_CAN_GO_BACK_H__

#include <app/Fuse.Navigation.WhileHistoryTrigger.h>
#include <Uno.h>

namespace app {
namespace Fuse {
namespace Navigation {

struct WhileCanGoBack;

struct WhileCanGoBack__uType : ::app::Fuse::Navigation::WhileHistoryTrigger__uType
{
};

WhileCanGoBack__uType* WhileCanGoBack__typeof();

void WhileCanGoBack___ObjInit_4(WhileCanGoBack* __this);
bool WhileCanGoBack__get_IsOn(WhileCanGoBack* __this);
WhileCanGoBack* WhileCanGoBack__New_1(::uStatic* __this);

struct WhileCanGoBack : ::app::Fuse::Navigation::WhileHistoryTrigger
{
    void _ObjInit_4() { WhileCanGoBack___ObjInit_4(this); }
};

}}}


#endif
