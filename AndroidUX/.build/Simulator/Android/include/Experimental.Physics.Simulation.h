// This file was generated based on 'C:\ProgramData\Uno\Packages\Experimental.Physics\0.18.8\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.Object.h>

namespace g{
namespace Experimental{
namespace Physics{

// public abstract interface Simulation :708
// {
uInterfaceType* Simulation_typeof();

struct Simulation
{
    void(*fp_get_IsStatic)(uObject*, bool*);
    void(*fp_Update)(uObject*, double*);
    static bool IsStatic(const uInterface& __this) { bool __retval; return __this.VTable<Simulation>()->fp_get_IsStatic(__this, &__retval), __retval; }
    static void Update(const uInterface& __this, double elapsed) { __this.VTable<Simulation>()->fp_Update(__this, &elapsed); }
};
// }

}}} // ::g::Experimental::Physics
