// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Scripting.Duktape\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_FUSE_SCRIPTING_DUKTAPE_CALLBACK_CLOSURE_H__
#define __APP_FUSE_SCRIPTING_DUKTAPE_CALLBACK_CLOSURE_H__

#include <app/Uno.Object.h>
#include <Uno.h>

namespace app {
namespace Fuse {
namespace Scripting {
namespace Duktape {

struct CallbackClosure;

struct CallbackClosure__uType : ::uClassType
{
};

CallbackClosure__uType* CallbackClosure__typeof();

void CallbackClosure___ObjInit(CallbackClosure* __this, void* context, ::uDelegate* callback);
CallbackClosure* CallbackClosure__New_1(::uStatic* __this, void* context, ::uDelegate* callback);
::uObject* CallbackClosure__Proxy(CallbackClosure* __this, ::uArray* args);

struct CallbackClosure : ::uObject
{
    void* _context;
    ::uStrong< ::uDelegate*> _callback;

    void _ObjInit(void* context, ::uDelegate* callback) { CallbackClosure___ObjInit(this, context, callback); }
    ::uObject* Proxy(::uArray* args) { return CallbackClosure__Proxy(this, args); }
};

}}}}


#endif
