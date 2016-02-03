// This file was generated based on 'C:\ProgramData\Uno\Packages\FuseCore\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_FUSE_UPDATE_DISPATCHER_H__
#define __APP_FUSE_UPDATE_DISPATCHER_H__

#include <app/Uno.Object.h>
#include <app/Uno.Threading.IDispatcher.h>
#include <Uno.h>

namespace app {
namespace Fuse {

struct UpdateDispatcher;

struct UpdateDispatcher__uType : ::uClassType
{
    ::app::Uno::Threading::IDispatcher __interface_0;
};

UpdateDispatcher__uType* UpdateDispatcher__typeof();

void UpdateDispatcher___ObjInit(UpdateDispatcher* __this, int stage);
void UpdateDispatcher__Invoke(UpdateDispatcher* __this, ::uDelegate* action);
UpdateDispatcher* UpdateDispatcher__New_1(::uStatic* __this, int stage);

struct UpdateDispatcher : ::uObject
{
    int _stage;

    void _ObjInit(int stage) { UpdateDispatcher___ObjInit(this, stage); }
    void Invoke(::uDelegate* action) { UpdateDispatcher__Invoke(this, action); }
};

}}


#endif
