// This file was generated based on 'C:\ProgramData\Uno\Packages\Uno.Threading\0.13.2\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_UNO_THREADING_FUTURE1_CLOSURE__STRING__UNO_EXCEPTION_H__
#define __APP_UNO_THREADING_FUTURE1_CLOSURE__STRING__UNO_EXCEPTION_H__

#include <app/Uno.Object.h>
#include <Uno.h>
namespace app { namespace Uno { struct Exception; } }

namespace app {
namespace Uno {
namespace Threading {

struct Future1_Closure__string__Uno_Exception;

struct Future1_Closure__string__Uno_Exception__uType : ::uClassType
{
};

Future1_Closure__string__Uno_Exception__uType* Future1_Closure__string__Uno_Exception__typeof();

void Future1_Closure__string__Uno_Exception___ObjInit(Future1_Closure__string__Uno_Exception* __this, ::uDelegate* action, ::app::Uno::Exception* result);
Future1_Closure__string__Uno_Exception* Future1_Closure__string__Uno_Exception__New_1(::uStatic* __this, ::uDelegate* action, ::app::Uno::Exception* result);
void Future1_Closure__string__Uno_Exception__Run(Future1_Closure__string__Uno_Exception* __this);

struct Future1_Closure__string__Uno_Exception : ::uObject
{
    ::uStrong< ::uDelegate*> _action;
    ::uStrong< ::app::Uno::Exception*> _result;

    void _ObjInit(::uDelegate* action, ::app::Uno::Exception* result) { Future1_Closure__string__Uno_Exception___ObjInit(this, action, result); }
    void Run() { Future1_Closure__string__Uno_Exception__Run(this); }
};

}}}


#endif
