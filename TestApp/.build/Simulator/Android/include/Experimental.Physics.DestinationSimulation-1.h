// This file was generated based on 'C:\ProgramData\Uno\Packages\Experimental.Physics\0.18.8\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Experimental.Physics.MotionSimulation-1.h>
#include <Experimental.Physics.Simulation.h>
#include <Uno.Object.h>

namespace g{
namespace Experimental{
namespace Physics{

// public abstract interface DestinationSimulation<T> :721
// {
uInterfaceType* DestinationSimulation_typeof();

struct DestinationSimulation
{
    void(*fp_get_Destination)(uObject*, uTRef);
    void(*fp_set_Destination)(uObject*, void*);
    void(*fp_Reset)(uObject*, void*);
    template<class T>
    static T Destination(const uInterface& __this) { T __retval; return __this.VTable<DestinationSimulation>()->fp_get_Destination(__this, &__retval), __retval; }
    static void get_Destination_ex(const uInterface& __this, uTRef __retval) { __this.VTable<DestinationSimulation>()->fp_get_Destination(__this, __retval); }
    template<class T>
    static void Destination(const uInterface& __this, T value) { __this.VTable<DestinationSimulation>()->fp_set_Destination(__this, uConstrain(__this->__type->GetBase(DestinationSimulation_typeof())->T(0), value)); }
    static void set_Destination_ex(const uInterface& __this, void* value) { __this.VTable<DestinationSimulation>()->fp_set_Destination(__this, value); }
    template<class T>
    static void Reset(const uInterface& __this, T destination) { __this.VTable<DestinationSimulation>()->fp_Reset(__this, uConstrain(__this->__type->GetBase(DestinationSimulation_typeof())->T(0), destination)); }
    static void Reset_ex(const uInterface& __this, void* destination) { __this.VTable<DestinationSimulation>()->fp_Reset(__this, destination); }
};
// }

}}} // ::g::Experimental::Physics
