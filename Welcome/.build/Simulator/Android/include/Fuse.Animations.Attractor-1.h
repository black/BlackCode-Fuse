// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Animations\0.19.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Behavior.h>
namespace g{namespace Fuse{namespace Animations{struct Attractor;}}}
namespace g{namespace Fuse{struct Node;}}
namespace g{namespace Uno{namespace UX{struct Property;}}}

namespace g{
namespace Fuse{
namespace Animations{

// public sealed class Attractor<T> :88
// {
::g::Fuse::Behavior_type* Attractor_typeof();
void Attractor__ctor_1_fn(Attractor* __this);
void Attractor__ctor_2_fn(Attractor* __this, ::g::Uno::UX::Property* target);
void Attractor__New1_fn(uType* __type, Attractor** __retval);
void Attractor__New2_fn(uType* __type, ::g::Uno::UX::Property* target, Attractor** __retval);
void Attractor__OnRooted_fn(Attractor* __this, ::g::Fuse::Node* parentNode);
void Attractor__OnUnrooted_fn(Attractor* __this, ::g::Fuse::Node* parentNode);
void Attractor__get_Simulation_fn(Attractor* __this, uObject** __retval);
void Attractor__set_Simulation_fn(Attractor* __this, uObject* value);
void Attractor__get_SimulationType_fn(Attractor* __this, int* __retval);
void Attractor__set_SimulationType_fn(Attractor* __this, int* value);
void Attractor__get_Target_fn(Attractor* __this, ::g::Uno::UX::Property** __retval);
void Attractor__set_Target_fn(Attractor* __this, ::g::Uno::UX::Property* value);
void Attractor__get_TimeMultiplier_fn(Attractor* __this, float* __retval);
void Attractor__set_TimeMultiplier_fn(Attractor* __this, float* value);
void Attractor__Update_fn(Attractor* __this);
void Attractor__get_Value_fn(Attractor* __this, uTRef __retval);
void Attractor__set_Value_fn(Attractor* __this, void* value);

struct Attractor : ::g::Fuse::Behavior
{
    bool _isUpdate;
    int _simulationType;
    uStrong<uObject*> _target;
    float _timeMultiplier;
    uStrong< ::g::Uno::UX::Property*> _Target;

    void ctor_1();
    void ctor_2(::g::Uno::UX::Property* target);
    uObject* Simulation();
    void Simulation(uObject* value);
    int SimulationType();
    void SimulationType(int value);
    ::g::Uno::UX::Property* Target();
    void Target(::g::Uno::UX::Property* value);
    float TimeMultiplier();
    void TimeMultiplier(float value);
    void Update();
    template<class T>
    T Value() { T __retval; return Attractor__get_Value_fn(this, &__retval), __retval; }
    template<class T>
    void Value(T value) { Attractor__set_Value_fn(this, uConstrain(__type->T(0), value)); }
    static Attractor* New1(uType* __type);
    static Attractor* New2(uType* __type, ::g::Uno::UX::Property* target);
};
// }

}}} // ::g::Fuse::Animations
