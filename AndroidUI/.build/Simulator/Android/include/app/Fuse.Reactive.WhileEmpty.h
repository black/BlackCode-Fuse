// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Reactive\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_FUSE_REACTIVE_WHILE_EMPTY_H__
#define __APP_FUSE_REACTIVE_WHILE_EMPTY_H__

#include <app/Fuse.Reactive.IObserver.h>
#include <app/Fuse.Reactive.WhileCount.h>
#include <Uno.h>

namespace app {
namespace Fuse {
namespace Reactive {

struct WhileEmpty;

struct WhileEmpty__uType : ::app::Fuse::Reactive::WhileCount__uType
{
};

WhileEmpty__uType* WhileEmpty__typeof();

void WhileEmpty___ObjInit_3(WhileEmpty* __this);
WhileEmpty* WhileEmpty__New_2(::uStatic* __this);

struct WhileEmpty : ::app::Fuse::Reactive::WhileCount
{
    void _ObjInit_3() { WhileEmpty___ObjInit_3(this); }
};

}}}


#endif
