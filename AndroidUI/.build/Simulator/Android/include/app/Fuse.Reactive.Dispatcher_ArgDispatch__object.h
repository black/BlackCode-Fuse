// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Reactive\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_FUSE_REACTIVE_DISPATCHER_ARG_DISPATCH__OBJECT_H__
#define __APP_FUSE_REACTIVE_DISPATCHER_ARG_DISPATCH__OBJECT_H__

#include <app/Uno.Object.h>
#include <Uno.h>

namespace app {
namespace Fuse {
namespace Reactive {

struct Dispatcher_ArgDispatch__object;

struct Dispatcher_ArgDispatch__object__uType : ::uClassType
{
};

Dispatcher_ArgDispatch__object__uType* Dispatcher_ArgDispatch__object__typeof();

void Dispatcher_ArgDispatch__object___ObjInit(Dispatcher_ArgDispatch__object* __this, ::uDelegate* action, ::uObject* arg);
Dispatcher_ArgDispatch__object* Dispatcher_ArgDispatch__object__New_1(::uStatic* __this, ::uDelegate* action, ::uObject* arg);
void Dispatcher_ArgDispatch__object__Run(Dispatcher_ArgDispatch__object* __this);

struct Dispatcher_ArgDispatch__object : ::uObject
{
    ::uStrong< ::uDelegate*> _action;
    ::uStrong< ::uObject*> _arg;

    void _ObjInit(::uDelegate* action, ::uObject* arg) { Dispatcher_ArgDispatch__object___ObjInit(this, action, arg); }
    void Run() { Dispatcher_ArgDispatch__object__Run(this); }
};

}}}


#endif
