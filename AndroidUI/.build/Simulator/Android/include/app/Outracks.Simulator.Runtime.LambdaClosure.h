// This file was generated based on 'C:\ProgramData\Uno\Packages\Outracks.Simulator.Client.Uno\0.1.0\Runtime\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_OUTRACKS_SIMULATOR_RUNTIME_LAMBDA_CLOSURE_H__
#define __APP_OUTRACKS_SIMULATOR_RUNTIME_LAMBDA_CLOSURE_H__

#include <app/Uno.Object.h>
#include <Uno.h>
namespace app { namespace Outracks { namespace Simulator { namespace Bytecode { struct Lambda; } } } }

namespace app {
namespace Outracks {
namespace Simulator {
namespace Runtime {

struct LambdaClosure;

struct LambdaClosure__uType : ::uClassType
{
};

LambdaClosure__uType* LambdaClosure__typeof();

void LambdaClosure___ObjInit(LambdaClosure* __this, ::app::Outracks::Simulator::Bytecode::Lambda* lambda, ::uDelegate* execute);
void LambdaClosure__Action(LambdaClosure* __this);
void LambdaClosure__Action_1(LambdaClosure* __this, ::uObject* a1);
void LambdaClosure__Action_2(LambdaClosure* __this, ::uObject* a1, ::uObject* a2);
void LambdaClosure__Action_3(LambdaClosure* __this, ::uObject* a1, ::uObject* a2, ::uObject* a3);
::uObject* LambdaClosure__Func(LambdaClosure* __this);
::uObject* LambdaClosure__Func_1(LambdaClosure* __this, ::uObject* a1);
::uObject* LambdaClosure__Func_2(LambdaClosure* __this, ::uObject* a1, ::uObject* a2);
::uObject* LambdaClosure__Func_3(LambdaClosure* __this, ::uObject* a1, ::uObject* a2, ::uObject* a3);
LambdaClosure* LambdaClosure__New_1(::uStatic* __this, ::app::Outracks::Simulator::Bytecode::Lambda* lambda, ::uDelegate* execute);

struct LambdaClosure : ::uObject
{
    ::uStrong< ::app::Outracks::Simulator::Bytecode::Lambda*> _lambda;
    ::uStrong< ::uDelegate*> _execute;

    void _ObjInit(::app::Outracks::Simulator::Bytecode::Lambda* lambda, ::uDelegate* execute) { LambdaClosure___ObjInit(this, lambda, execute); }
    void Action() { LambdaClosure__Action(this); }
    void Action_1(::uObject* a1) { LambdaClosure__Action_1(this, a1); }
    void Action_2(::uObject* a1, ::uObject* a2) { LambdaClosure__Action_2(this, a1, a2); }
    void Action_3(::uObject* a1, ::uObject* a2, ::uObject* a3) { LambdaClosure__Action_3(this, a1, a2, a3); }
    ::uObject* Func() { return LambdaClosure__Func(this); }
    ::uObject* Func_1(::uObject* a1) { return LambdaClosure__Func_1(this, a1); }
    ::uObject* Func_2(::uObject* a1, ::uObject* a2) { return LambdaClosure__Func_2(this, a1, a2); }
    ::uObject* Func_3(::uObject* a1, ::uObject* a2, ::uObject* a3) { return LambdaClosure__Func_3(this, a1, a2, a3); }
};

}}}}


#endif
