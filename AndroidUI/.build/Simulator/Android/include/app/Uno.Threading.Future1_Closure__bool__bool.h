// This file was generated based on 'C:\ProgramData\Uno\Packages\Uno.Threading\0.13.2\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_UNO_THREADING_FUTURE1_CLOSURE__BOOL__BOOL_H__
#define __APP_UNO_THREADING_FUTURE1_CLOSURE__BOOL__BOOL_H__

#include <app/Uno.Object.h>
#include <Uno.h>

namespace app {
namespace Uno {
namespace Threading {

struct Future1_Closure__bool__bool;

struct Future1_Closure__bool__bool__uType : ::uClassType
{
};

Future1_Closure__bool__bool__uType* Future1_Closure__bool__bool__typeof();

void Future1_Closure__bool__bool___ObjInit(Future1_Closure__bool__bool* __this, ::uDelegate* action, bool result);
Future1_Closure__bool__bool* Future1_Closure__bool__bool__New_1(::uStatic* __this, ::uDelegate* action, bool result);
void Future1_Closure__bool__bool__Run(Future1_Closure__bool__bool* __this);

struct Future1_Closure__bool__bool : ::uObject
{
    ::uStrong< ::uDelegate*> _action;
    bool _result;

    void _ObjInit(::uDelegate* action, bool result) { Future1_Closure__bool__bool___ObjInit(this, action, result); }
    void Run() { Future1_Closure__bool__bool__Run(this); }
};

}}}


#endif
