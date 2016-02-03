// This file was generated based on 'C:\ProgramData\Uno\Packages\Uno.Threading\0.13.2\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_UNO_THREADING_PROMISE__BOOL_H__
#define __APP_UNO_THREADING_PROMISE__BOOL_H__

#include <app/Uno.Threading.Future__bool.h>
#include <Uno.h>
namespace app { namespace Uno { struct Exception; } }

namespace app {
namespace Uno {
namespace Threading {

struct Promise__bool;

struct Promise__bool__uType : ::app::Uno::Threading::Future__bool__uType
{
};

Promise__bool__uType* Promise__bool__typeof();

void Promise__bool___ObjInit_3(Promise__bool* __this);
void Promise__bool___ObjInit_4(Promise__bool* __this, bool result);
void Promise__bool___ObjInit_5(Promise__bool* __this, ::uObject* dispatcher);
void Promise__bool___ObjInit_6(Promise__bool* __this, ::uObject* dispatcher, bool result);
Promise__bool* Promise__bool__New_1(::uStatic* __this);
Promise__bool* Promise__bool__New_2(::uStatic* __this, bool result);
Promise__bool* Promise__bool__New_3(::uStatic* __this, ::uObject* dispatcher);
Promise__bool* Promise__bool__New_4(::uStatic* __this, ::uObject* dispatcher, bool result);
void Promise__bool__Reject(Promise__bool* __this, ::app::Uno::Exception* reason);
void Promise__bool__Resolve(Promise__bool* __this, bool result);

struct Promise__bool : ::app::Uno::Threading::Future__bool
{
    void _ObjInit_3() { Promise__bool___ObjInit_3(this); }
    void _ObjInit_4(bool result) { Promise__bool___ObjInit_4(this, result); }
    void _ObjInit_5(::uObject* dispatcher) { Promise__bool___ObjInit_5(this, dispatcher); }
    void _ObjInit_6(::uObject* dispatcher, bool result) { Promise__bool___ObjInit_6(this, dispatcher, result); }
    void Reject(::app::Uno::Exception* reason) { Promise__bool__Reject(this, reason); }
    void Resolve(bool result) { Promise__bool__Resolve(this, result); }
};

}}}


#endif
