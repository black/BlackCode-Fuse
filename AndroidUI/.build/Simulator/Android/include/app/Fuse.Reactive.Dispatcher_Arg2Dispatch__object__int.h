// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Reactive\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_FUSE_REACTIVE_DISPATCHER_ARG2_DISPATCH__OBJECT__INT_H__
#define __APP_FUSE_REACTIVE_DISPATCHER_ARG2_DISPATCH__OBJECT__INT_H__

#include <app/Uno.Object.h>
#include <Uno.h>

namespace app {
namespace Fuse {
namespace Reactive {

struct Dispatcher_Arg2Dispatch__object__int;

struct Dispatcher_Arg2Dispatch__object__int__uType : ::uClassType
{
};

Dispatcher_Arg2Dispatch__object__int__uType* Dispatcher_Arg2Dispatch__object__int__typeof();

void Dispatcher_Arg2Dispatch__object__int___ObjInit(Dispatcher_Arg2Dispatch__object__int* __this, ::uDelegate* action, ::uObject* arg1, int arg2);
Dispatcher_Arg2Dispatch__object__int* Dispatcher_Arg2Dispatch__object__int__New_1(::uStatic* __this, ::uDelegate* action, ::uObject* arg1, int arg2);
void Dispatcher_Arg2Dispatch__object__int__Run(Dispatcher_Arg2Dispatch__object__int* __this);

struct Dispatcher_Arg2Dispatch__object__int : ::uObject
{
    ::uStrong< ::uDelegate*> _action;
    ::uStrong< ::uObject*> _arg1;
    int _arg2;

    void _ObjInit(::uDelegate* action, ::uObject* arg1, int arg2) { Dispatcher_Arg2Dispatch__object__int___ObjInit(this, action, arg1, arg2); }
    void Run() { Dispatcher_Arg2Dispatch__object__int__Run(this); }
};

}}}


#endif
