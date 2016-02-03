// This file was generated based on 'C:\ProgramData\Uno\Packages\Uno.Threading\0.13.2\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_UNO_THREADING_PROMISE__STRING_H__
#define __APP_UNO_THREADING_PROMISE__STRING_H__

#include <app/Uno.Threading.Future__string.h>
#include <Uno.h>
namespace app { namespace Uno { struct Exception; } }

namespace app {
namespace Uno {
namespace Threading {

struct Promise__string;

struct Promise__string__uType : ::app::Uno::Threading::Future__string__uType
{
};

Promise__string__uType* Promise__string__typeof();

void Promise__string___ObjInit_3(Promise__string* __this);
void Promise__string___ObjInit_4(Promise__string* __this, ::uObject* dispatcher);
void Promise__string___ObjInit_5(Promise__string* __this, ::uObject* dispatcher, ::uString* result);
void Promise__string___ObjInit_6(Promise__string* __this, ::uString* result);
Promise__string* Promise__string__New_1(::uStatic* __this);
Promise__string* Promise__string__New_2(::uStatic* __this, ::uObject* dispatcher);
Promise__string* Promise__string__New_3(::uStatic* __this, ::uObject* dispatcher, ::uString* result);
Promise__string* Promise__string__New_4(::uStatic* __this, ::uString* result);
void Promise__string__Reject(Promise__string* __this, ::app::Uno::Exception* reason);
void Promise__string__Resolve(Promise__string* __this, ::uString* result);

struct Promise__string : ::app::Uno::Threading::Future__string
{
    void _ObjInit_3() { Promise__string___ObjInit_3(this); }
    void _ObjInit_4(::uObject* dispatcher) { Promise__string___ObjInit_4(this, dispatcher); }
    void _ObjInit_5(::uObject* dispatcher, ::uString* result) { Promise__string___ObjInit_5(this, dispatcher, result); }
    void _ObjInit_6(::uString* result) { Promise__string___ObjInit_6(this, result); }
    void Reject(::app::Uno::Exception* reason) { Promise__string__Reject(this, reason); }
    void Resolve(::uString* result) { Promise__string__Resolve(this, result); }
};

}}}


#endif
