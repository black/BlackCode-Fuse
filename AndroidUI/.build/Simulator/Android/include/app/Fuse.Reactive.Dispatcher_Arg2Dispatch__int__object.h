// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Reactive\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_FUSE_REACTIVE_DISPATCHER_ARG2_DISPATCH__INT__OBJECT_H__
#define __APP_FUSE_REACTIVE_DISPATCHER_ARG2_DISPATCH__INT__OBJECT_H__

#include <app/Uno.Object.h>
#include <Uno.h>

namespace app {
namespace Fuse {
namespace Reactive {

struct Dispatcher_Arg2Dispatch__int__object;

struct Dispatcher_Arg2Dispatch__int__object__uType : ::uClassType
{
};

Dispatcher_Arg2Dispatch__int__object__uType* Dispatcher_Arg2Dispatch__int__object__typeof();

void Dispatcher_Arg2Dispatch__int__object___ObjInit(Dispatcher_Arg2Dispatch__int__object* __this, ::uDelegate* action, int arg1, ::uObject* arg2);
Dispatcher_Arg2Dispatch__int__object* Dispatcher_Arg2Dispatch__int__object__New_1(::uStatic* __this, ::uDelegate* action, int arg1, ::uObject* arg2);
void Dispatcher_Arg2Dispatch__int__object__Run(Dispatcher_Arg2Dispatch__int__object* __this);

struct Dispatcher_Arg2Dispatch__int__object : ::uObject
{
    ::uStrong< ::uDelegate*> _action;
    int _arg1;
    ::uStrong< ::uObject*> _arg2;

    void _ObjInit(::uDelegate* action, int arg1, ::uObject* arg2) { Dispatcher_Arg2Dispatch__int__object___ObjInit(this, action, arg1, arg2); }
    void Run() { Dispatcher_Arg2Dispatch__int__object__Run(this); }
};

}}}


#endif
