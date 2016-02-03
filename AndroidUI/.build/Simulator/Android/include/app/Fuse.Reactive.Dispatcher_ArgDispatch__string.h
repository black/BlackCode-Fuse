// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Reactive\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_FUSE_REACTIVE_DISPATCHER_ARG_DISPATCH__STRING_H__
#define __APP_FUSE_REACTIVE_DISPATCHER_ARG_DISPATCH__STRING_H__

#include <app/Uno.Object.h>
#include <Uno.h>

namespace app {
namespace Fuse {
namespace Reactive {

struct Dispatcher_ArgDispatch__string;

struct Dispatcher_ArgDispatch__string__uType : ::uClassType
{
};

Dispatcher_ArgDispatch__string__uType* Dispatcher_ArgDispatch__string__typeof();

void Dispatcher_ArgDispatch__string___ObjInit(Dispatcher_ArgDispatch__string* __this, ::uDelegate* action, ::uString* arg);
Dispatcher_ArgDispatch__string* Dispatcher_ArgDispatch__string__New_1(::uStatic* __this, ::uDelegate* action, ::uString* arg);
void Dispatcher_ArgDispatch__string__Run(Dispatcher_ArgDispatch__string* __this);

struct Dispatcher_ArgDispatch__string : ::uObject
{
    ::uStrong< ::uDelegate*> _action;
    ::uStrong< ::uString*> _arg;

    void _ObjInit(::uDelegate* action, ::uString* arg) { Dispatcher_ArgDispatch__string___ObjInit(this, action, arg); }
    void Run() { Dispatcher_ArgDispatch__string__Run(this); }
};

}}}


#endif
