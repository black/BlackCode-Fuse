// This file was generated based on 'C:\ProgramData\Uno\Packages\Uno.Threading\0.13.2\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_UNO_THREADING_SYNC_DISPATCHER_H__
#define __APP_UNO_THREADING_SYNC_DISPATCHER_H__

#include <app/Uno.Object.h>
#include <app/Uno.Threading.IDispatcher.h>
#include <Uno.h>

namespace app {
namespace Uno {
namespace Threading {

struct SyncDispatcher;

struct SyncDispatcher__uType : ::uClassType
{
    ::app::Uno::Threading::IDispatcher __interface_0;
};

SyncDispatcher__uType* SyncDispatcher__typeof();

void SyncDispatcher___ObjInit(SyncDispatcher* __this);
void SyncDispatcher__Invoke(SyncDispatcher* __this, ::uDelegate* action);
SyncDispatcher* SyncDispatcher__New_1(::uStatic* __this);

struct SyncDispatcher : ::uObject
{
    void _ObjInit() { SyncDispatcher___ObjInit(this); }
    void Invoke(::uDelegate* action) { SyncDispatcher__Invoke(this, action); }
};

}}}


#endif
