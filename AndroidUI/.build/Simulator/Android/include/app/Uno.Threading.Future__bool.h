// This file was generated based on 'C:\ProgramData\Uno\Packages\Uno.Threading\0.13.2\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_UNO_THREADING_FUTURE__BOOL_H__
#define __APP_UNO_THREADING_FUTURE__BOOL_H__

#include <app/Uno.Threading.Future.h>
#include <Uno.h>
namespace app { namespace Uno { namespace Collections { struct Queue__Uno_Action_bool_; } } }
namespace app { namespace Uno { namespace Collections { struct Queue__Uno_Action_Uno_Exception_; } } }
namespace app { namespace Uno { namespace Collections { struct Queue__Uno_Threading_Promise_bool_; } } }
namespace app { namespace Uno { namespace Threading { struct Mutex; } } }
namespace app { namespace Uno { struct Exception; } }

namespace app {
namespace Uno {
namespace Threading {

struct Future__bool;

struct Future__bool__uType : ::app::Uno::Threading::Future__uType
{
};

Future__bool__uType* Future__bool__typeof();

void Future__bool___ObjInit_1(Future__bool* __this);
void Future__bool___ObjInit_2(Future__bool* __this, ::uObject* dispatcher);
void Future__bool__Cancel(Future__bool* __this, bool shutdownGracefully);
Future__bool* Future__bool__Catch(Future__bool* __this, ::uDelegate* failure);
void Future__bool__InternalReject(Future__bool* __this, ::app::Uno::Exception* reason);
void Future__bool__InternalResolve(Future__bool* __this, bool result);
void Future__bool__Invoke__bool(Future__bool* __this, ::uDelegate* action, bool arg);
void Future__bool__Invoke__Uno_Exception(Future__bool* __this, ::uDelegate* action, ::app::Uno::Exception* arg);
Future__bool* Future__bool__Then(Future__bool* __this, ::uDelegate* action);
Future__bool* Future__bool__Then_1(Future__bool* __this, ::uDelegate* fulfilled, ::uDelegate* rejected);
void Future__bool__Wait(Future__bool* __this);

struct Future__bool : ::app::Uno::Threading::Future
{
    bool Result;
    ::uStrong< ::app::Uno::Exception*> Reason;
    ::uStrong< ::uObject*> _dispatcher;
    ::uStrong< ::app::Uno::Threading::Mutex*> _mutex;
    ::uStrong< ::app::Uno::Collections::Queue__Uno_Action_Uno_Exception_*> _catchables;
    ::uStrong< ::app::Uno::Collections::Queue__Uno_Action_bool_*> _thenables;
    ::uStrong< ::app::Uno::Collections::Queue__Uno_Threading_Promise_bool_*> _chainables;

    void _ObjInit_1() { Future__bool___ObjInit_1(this); }
    void _ObjInit_2(::uObject* dispatcher) { Future__bool___ObjInit_2(this, dispatcher); }
    Future__bool* Catch(::uDelegate* failure) { return Future__bool__Catch(this, failure); }
    void InternalReject(::app::Uno::Exception* reason) { Future__bool__InternalReject(this, reason); }
    void InternalResolve(bool result) { Future__bool__InternalResolve(this, result); }
    void Invoke__bool(::uDelegate* action, bool arg) { Future__bool__Invoke__bool(this, action, arg); }
    void Invoke__Uno_Exception(::uDelegate* action, ::app::Uno::Exception* arg) { Future__bool__Invoke__Uno_Exception(this, action, arg); }
    Future__bool* Then(::uDelegate* action) { return Future__bool__Then(this, action); }
    Future__bool* Then_1(::uDelegate* fulfilled, ::uDelegate* rejected) { return Future__bool__Then_1(this, fulfilled, rejected); }
};

}}}


#endif
