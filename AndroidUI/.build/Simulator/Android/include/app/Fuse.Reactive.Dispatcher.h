// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Reactive\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_FUSE_REACTIVE_DISPATCHER_H__
#define __APP_FUSE_REACTIVE_DISPATCHER_H__

#include <app/Uno.Object.h>
#include <Uno.h>

namespace app {
namespace Fuse {
namespace Reactive {

struct Dispatcher;

extern ::uStaticStrong< Dispatcher*> Dispatcher___uiThread;

struct Dispatcher__uType : ::uClassType
{
    void(*__fp_Dispatch)(Dispatcher*, ::uDelegate*);
};

Dispatcher__uType* Dispatcher__typeof();

void Dispatcher___ObjInit(Dispatcher* __this);
void Dispatcher__Dispatch1__int(Dispatcher* __this, ::uDelegate* action, int arg);
void Dispatcher__Dispatch1__object(Dispatcher* __this, ::uDelegate* action, ::uObject* arg);
void Dispatcher__Dispatch1__object__(Dispatcher* __this, ::uDelegate* action, ::uArray* arg);
void Dispatcher__Dispatch1__string(Dispatcher* __this, ::uDelegate* action, ::uString* arg);
void Dispatcher__Dispatch2__int__object(Dispatcher* __this, ::uDelegate* action, int arg1, ::uObject* arg2);
void Dispatcher__Dispatch2__object__int(Dispatcher* __this, ::uDelegate* action, ::uObject* arg1, int arg2);
Dispatcher* Dispatcher__get_UIThread(::uStatic* __this);

struct Dispatcher : ::uObject
{
    void _ObjInit() { Dispatcher___ObjInit(this); }
    void Dispatch(::uDelegate* action) { (((Dispatcher__uType*)this->__obj_type)->__fp_Dispatch)(this, action); }
    void Dispatch1__int(::uDelegate* action, int arg) { Dispatcher__Dispatch1__int(this, action, arg); }
    void Dispatch1__object(::uDelegate* action, ::uObject* arg) { Dispatcher__Dispatch1__object(this, action, arg); }
    void Dispatch1__object__(::uDelegate* action, ::uArray* arg) { Dispatcher__Dispatch1__object__(this, action, arg); }
    void Dispatch1__string(::uDelegate* action, ::uString* arg) { Dispatcher__Dispatch1__string(this, action, arg); }
    void Dispatch2__int__object(::uDelegate* action, int arg1, ::uObject* arg2) { Dispatcher__Dispatch2__int__object(this, action, arg1, arg2); }
    void Dispatch2__object__int(::uDelegate* action, ::uObject* arg1, int arg2) { Dispatcher__Dispatch2__object__int(this, action, arg1, arg2); }
};

}}}


#endif
