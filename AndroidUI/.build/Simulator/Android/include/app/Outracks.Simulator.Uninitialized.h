// This file was generated based on 'C:\ProgramData\Uno\Packages\Outracks.Simulator.Client.Uno\0.1.0\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_OUTRACKS_SIMULATOR_UNINITIALIZED_H__
#define __APP_OUTRACKS_SIMULATOR_UNINITIALIZED_H__

#include <app/Outracks.Simulator.State.h>
#include <Uno.h>

namespace app {
namespace Outracks {
namespace Simulator {

struct Uninitialized;

struct Uninitialized__uType : ::app::Outracks::Simulator::State__uType
{
};

Uninitialized__uType* Uninitialized__typeof();

void Uninitialized___ObjInit_1(Uninitialized* __this);
Uninitialized* Uninitialized__New_1(::uStatic* __this);
::app::Outracks::Simulator::State* Uninitialized__OnUpdate(Uninitialized* __this);

struct Uninitialized : ::app::Outracks::Simulator::State
{
    void _ObjInit_1() { Uninitialized___ObjInit_1(this); }
};

}}}


#endif
