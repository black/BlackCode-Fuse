// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Triggers\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_FUSE_TRIGGERS_WHILE_WINDOW_PORTRAIT_H__
#define __APP_FUSE_TRIGGERS_WHILE_WINDOW_PORTRAIT_H__

#include <app/Fuse.Triggers.WhileWindowAspect.h>
#include <Uno.h>

namespace app {
namespace Fuse {
namespace Triggers {

struct WhileWindowPortrait;

struct WhileWindowPortrait__uType : ::app::Fuse::Triggers::WhileWindowAspect__uType
{
};

WhileWindowPortrait__uType* WhileWindowPortrait__typeof();

void WhileWindowPortrait___ObjInit_4(WhileWindowPortrait* __this);
bool WhileWindowPortrait__get_IsActive(WhileWindowPortrait* __this);
WhileWindowPortrait* WhileWindowPortrait__New_1(::uStatic* __this);

struct WhileWindowPortrait : ::app::Fuse::Triggers::WhileWindowAspect
{
    void _ObjInit_4() { WhileWindowPortrait___ObjInit_4(this); }
};

}}}


#endif
