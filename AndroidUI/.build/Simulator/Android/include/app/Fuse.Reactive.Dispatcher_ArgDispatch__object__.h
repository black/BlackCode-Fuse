// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Reactive\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_FUSE_REACTIVE_DISPATCHER_ARG_DISPATCH__OBJECT___H__
#define __APP_FUSE_REACTIVE_DISPATCHER_ARG_DISPATCH__OBJECT___H__

#include <app/Uno.Object.h>
#include <Uno.h>

namespace app {
namespace Fuse {
namespace Reactive {

struct Dispatcher_ArgDispatch__object__;

struct Dispatcher_ArgDispatch__object____uType : ::uClassType
{
};

Dispatcher_ArgDispatch__object____uType* Dispatcher_ArgDispatch__object____typeof();

void Dispatcher_ArgDispatch__object_____ObjInit(Dispatcher_ArgDispatch__object__* __this, ::uDelegate* action, ::uArray* arg);
Dispatcher_ArgDispatch__object__* Dispatcher_ArgDispatch__object____New_1(::uStatic* __this, ::uDelegate* action, ::uArray* arg);
void Dispatcher_ArgDispatch__object____Run(Dispatcher_ArgDispatch__object__* __this);

struct Dispatcher_ArgDispatch__object__ : ::uObject
{
    ::uStrong< ::uDelegate*> _action;
    ::uStrong< ::uArray*> _arg;

    void _ObjInit(::uDelegate* action, ::uArray* arg) { Dispatcher_ArgDispatch__object_____ObjInit(this, action, arg); }
    void Run() { Dispatcher_ArgDispatch__object____Run(this); }
};

}}}


#endif
