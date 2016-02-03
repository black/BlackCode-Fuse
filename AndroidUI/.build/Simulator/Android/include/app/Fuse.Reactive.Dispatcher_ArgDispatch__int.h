// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Reactive\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_FUSE_REACTIVE_DISPATCHER_ARG_DISPATCH__INT_H__
#define __APP_FUSE_REACTIVE_DISPATCHER_ARG_DISPATCH__INT_H__

#include <app/Uno.Object.h>
#include <Uno.h>

namespace app {
namespace Fuse {
namespace Reactive {

struct Dispatcher_ArgDispatch__int;

struct Dispatcher_ArgDispatch__int__uType : ::uClassType
{
};

Dispatcher_ArgDispatch__int__uType* Dispatcher_ArgDispatch__int__typeof();

void Dispatcher_ArgDispatch__int___ObjInit(Dispatcher_ArgDispatch__int* __this, ::uDelegate* action, int arg);
Dispatcher_ArgDispatch__int* Dispatcher_ArgDispatch__int__New_1(::uStatic* __this, ::uDelegate* action, int arg);
void Dispatcher_ArgDispatch__int__Run(Dispatcher_ArgDispatch__int* __this);

struct Dispatcher_ArgDispatch__int : ::uObject
{
    ::uStrong< ::uDelegate*> _action;
    int _arg;

    void _ObjInit(::uDelegate* action, int arg) { Dispatcher_ArgDispatch__int___ObjInit(this, action, arg); }
    void Run() { Dispatcher_ArgDispatch__int__Run(this); }
};

}}}


#endif
