// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Scripting.Duktape\0.18.8\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.Object.h>
namespace g{namespace Fuse{namespace Scripting{namespace Duktape{struct CallbackClosure;}}}}

namespace g{
namespace Fuse{
namespace Scripting{
namespace Duktape{

// internal sealed extern class CallbackClosure :84
// {
uType* CallbackClosure_typeof();
void CallbackClosure__ctor__fn(CallbackClosure* __this, void** context, uDelegate* callback);
void CallbackClosure__New1_fn(void** context, uDelegate* callback, CallbackClosure** __retval);
void CallbackClosure__Proxy_fn(CallbackClosure* __this, uArray* args, uObject** __retval);

struct CallbackClosure : uObject
{
    uStrong<uDelegate*> _callback;
    void* _context;

    void ctor_(void* context, uDelegate* callback);
    uObject* Proxy(uArray* args);
    static CallbackClosure* New1(void* context, uDelegate* callback);
};
// }

}}}} // ::g::Fuse::Scripting::Duktape
