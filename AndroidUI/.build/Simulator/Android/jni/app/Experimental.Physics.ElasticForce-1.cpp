#include <app/Experimental.Physics.ElasticForce__float2.h>
#include <app/Experimental.Physics.ElasticForce__float4.h>
#include <app/Fuse.Internal.Blender__float2.h>
#include <app/Fuse.Internal.Blender__float4.h>
#include <app/Fuse.Internal.BlenderMap.h>
#include <app/Uno.Bool.h>
#include <app/Uno.Double.h>
#include <app/Uno.Float.h>
#include <app/Uno.Math.h>

namespace app {
namespace Experimental {
namespace Physics {

// This file was generated based on 'C:\ProgramData\Uno\Packages\Experimental.Physics\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

ElasticForce__float2__uType* ElasticForce__float2__typeof()
{
    static ::uStaticStrong<ElasticForce__float2__uType*> type;
    if (type != NULL) return type;

    type = (ElasticForce__float2__uType*)::uAllocClassType(sizeof(ElasticForce__float2__uType), "Experimental.Physics.ElasticForce<float2>", false, 3, 1, 0);

    type->__interface_0.__fp_get_Destination = (::app::Uno::Float2(*)(void*))ElasticForce__float2__get_Destination;
    type->__interface_0.__fp_set_Destination = (void(*)(void*, ::app::Uno::Float2))ElasticForce__float2__set_Destination;
    type->__interface_1.__fp_get_Position = (::app::Uno::Float2(*)(void*))ElasticForce__float2__get_Position;
    type->__interface_1.__fp_set_Position = (void(*)(void*, ::app::Uno::Float2))ElasticForce__float2__set_Position;
    type->__interface_1.__fp_get_Velocity = (::app::Uno::Float2(*)(void*))ElasticForce__float2__get_Velocity;
    type->__interface_1.__fp_set_Velocity = (void(*)(void*, ::app::Uno::Float2))ElasticForce__float2__set_Velocity;
    type->__interface_2.__fp_Update = (void(*)(void*, double))ElasticForce__float2__Update;
    type->__interface_2.__fp_get_IsStatic = (bool(*)(void*))ElasticForce__float2__get_IsStatic;

    type->SetInterfaces(
        ::app::Experimental::Physics::DestinationSimulation__float2__typeof(), offsetof(ElasticForce__float2__uType, __interface_0),
        ::app::Experimental::Physics::MotionSimulation__float2__typeof(), offsetof(ElasticForce__float2__uType, __interface_1),
        ::app::Experimental::Physics::Simulation__typeof(), offsetof(ElasticForce__float2__uType, __interface_2));

    type->SetStrongRefs(
        "_blender", offsetof(ElasticForce__float2, _blender));

    type->SetFields(13,
        ::uNewField("_attractionCurve", NULL, offsetof(ElasticForce__float2, _attractionCurve), ::app::Uno::Float__typeof()),
        ::uNewField("_attractionDestination", NULL, offsetof(ElasticForce__float2, _attractionDestination), ::app::Uno::Float2__typeof()),
        ::uNewField("_attractionForce", NULL, offsetof(ElasticForce__float2, _attractionForce), ::app::Uno::Float__typeof()),
        ::uNewField("_blender", NULL, offsetof(ElasticForce__float2, _blender), ::app::Fuse::Internal::Blender__float2__typeof()),
        ::uNewField("_damping", NULL, offsetof(ElasticForce__float2, _damping), ::app::Uno::Float__typeof()),
        ::uNewField("_energyEps", NULL, offsetof(ElasticForce__float2, _energyEps), ::app::Uno::Float__typeof()),
        ::uNewField("_hasMaxSpeed", NULL, offsetof(ElasticForce__float2, _hasMaxSpeed), ::app::Uno::Bool__typeof()),
        ::uNewField("_isStatic", NULL, offsetof(ElasticForce__float2, _isStatic), ::app::Uno::Bool__typeof()),
        ::uNewField("_maxSpeed", NULL, offsetof(ElasticForce__float2, _maxSpeed), ::app::Uno::Float__typeof()),
        ::uNewField("_remainTime", NULL, offsetof(ElasticForce__float2, _remainTime), ::app::Uno::Double__typeof()),
        ::uNewField("_scale", NULL, offsetof(ElasticForce__float2, _scale), ::app::Uno::Float__typeof()),
        ::uNewField("_velocity", NULL, offsetof(ElasticForce__float2, _velocity), ::app::Uno::Float2__typeof()),
        ::uNewField("timeStep", NULL, offsetof(ElasticForce__float2, timeStep), ::app::Uno::Double__typeof()));

    type->SetFunctions(29,
        ::uNewFunction("CreateDegrees", ElasticForce__float2__CreateDegrees, 0, true, ElasticForce__float2__typeof()),
        ::uNewFunction("CreatePoints", ElasticForce__float2__CreatePoints, 0, true, ElasticForce__float2__typeof()),
        ::uNewFunction("CreateRadians", ElasticForce__float2__CreateRadians, 0, true, ElasticForce__float2__typeof()),
        ::uNewFunction("get_Attraction", ElasticForce__float2__get_Attraction, 0, false, ::app::Uno::Float2__typeof()),
        ::uNewFunction("get_AttractionCurve", ElasticForce__float2__get_AttractionCurve, 0, false, ::app::Uno::Float__typeof()),
        ::uNewFunction("get_AttractionForce", ElasticForce__float2__get_AttractionForce, 0, false, ::app::Uno::Float__typeof()),
        ::uNewFunction("get_Damping", ElasticForce__float2__get_Damping, 0, false, ::app::Uno::Float__typeof()),
        ::uNewFunction("get_Destination", ElasticForce__float2__get_Destination, 0, false, ::app::Uno::Float2__typeof()),
        ::uNewFunction("get_Energy", ElasticForce__float2__get_Energy, 0, false, ::app::Uno::Float__typeof()),
        ::uNewFunction("get_EnergyEps", ElasticForce__float2__get_EnergyEps, 0, false, ::app::Uno::Float__typeof()),
        ::uNewFunction("get_IsLocked", ElasticForce__float2__get_IsLocked, 0, false, ::app::Uno::Bool__typeof()),
        ::uNewFunction("get_IsStatic", ElasticForce__float2__get_IsStatic, 0, false, ::app::Uno::Bool__typeof()),
        ::uNewFunction("get_MaxSpeed", ElasticForce__float2__get_MaxSpeed, 0, false, ::app::Uno::Float__typeof()),
        ::uNewFunction("get_Position", ElasticForce__float2__get_Position, 0, false, ::app::Uno::Float2__typeof()),
        ::uNewFunction("get_Velocity", ElasticForce__float2__get_Velocity, 0, false, ::app::Uno::Float2__typeof()),
        ::uNewFunction(".ctor", ElasticForce__float2__New_1, 0, true, ElasticForce__float2__typeof(), ::app::Uno::Float__typeof()),
        ::uNewFunctionVoid("Reset", ElasticForce__float2__Reset, 0, false, ::app::Uno::Float2__typeof()),
        ::uNewFunctionVoid("ResetMaxSpeed", ElasticForce__float2__ResetMaxSpeed, 0, false),
        ::uNewFunctionVoid("set_AttractionCurve", ElasticForce__float2__set_AttractionCurve, 0, false, ::app::Uno::Float__typeof()),
        ::uNewFunctionVoid("set_AttractionForce", ElasticForce__float2__set_AttractionForce, 0, false, ::app::Uno::Float__typeof()),
        ::uNewFunctionVoid("set_Damping", ElasticForce__float2__set_Damping, 0, false, ::app::Uno::Float__typeof()),
        ::uNewFunctionVoid("set_Destination", ElasticForce__float2__set_Destination, 0, false, ::app::Uno::Float2__typeof()),
        ::uNewFunctionVoid("set_EnergyEps", ElasticForce__float2__set_EnergyEps, 0, false, ::app::Uno::Float__typeof()),
        ::uNewFunctionVoid("set_IsLocked", ElasticForce__float2__set_IsLocked, 0, false, ::app::Uno::Bool__typeof()),
        ::uNewFunctionVoid("set_IsStatic", ElasticForce__float2__set_IsStatic, 0, false, ::app::Uno::Bool__typeof()),
        ::uNewFunctionVoid("set_MaxSpeed", ElasticForce__float2__set_MaxSpeed, 0, false, ::app::Uno::Float__typeof()),
        ::uNewFunctionVoid("set_Position", ElasticForce__float2__set_Position, 0, false, ::app::Uno::Float2__typeof()),
        ::uNewFunctionVoid("set_Velocity", ElasticForce__float2__set_Velocity, 0, false, ::app::Uno::Float2__typeof()),
        ::uNewFunctionVoid("Update", ElasticForce__float2__Update, 0, false, ::app::Uno::Double__typeof()));

    ::uRegisterType(type);
    return type;
}

void ElasticForce__float2___ObjInit(ElasticForce__float2* __this, float scale)
{
    __this->_blender = ::app::Fuse::Internal::BlenderMap__Get__float2(NULL);
    __this->_attractionForce = 500.0f;
    __this->_attractionCurve = 0.65f;
    __this->_damping = 10.0f;
    __this->_energyEps = 0.01f;
    __this->timeStep = 0.001;
    __this->_remainTime = 0.0;
    __this->_scale = scale;
}

ElasticForce__float2* ElasticForce__float2__CreateDegrees(::uStatic* __this)
{
    ElasticForce__float2* a = ElasticForce__float2__CreateRadians(NULL);
    float m = 57.2957764f;
    ::uPtr< ElasticForce__float2*>(a)->AttractionForce(::uPtr< ElasticForce__float2*>(a)->AttractionForce() * m);
    a->Damping(a->Damping() * m);
    a->EnergyEps(a->EnergyEps() * m);
    a->MaxSpeed(a->MaxSpeed() * m);
    return a;
}

ElasticForce__float2* ElasticForce__float2__CreatePoints(::uStatic* __this)
{
    ElasticForce__float2* a = ElasticForce__float2__New_1(NULL, 0.01f);
    ::uPtr< ElasticForce__float2*>(a)->AttractionForce(200.0f);
    a->AttractionCurve(0.65f);
    a->Damping(10.0f);
    return a;
}

ElasticForce__float2* ElasticForce__float2__CreateRadians(::uStatic* __this)
{
    ElasticForce__float2* a = ElasticForce__float2__New_1(NULL, 0.01f);
    ::uPtr< ElasticForce__float2*>(a)->AttractionForce(200.0f);
    a->Damping(15.0f);
    a->AttractionCurve(0.75f);
    a->EnergyEps(0.01f);
    a->MaxSpeed(3.14159274f);
    return a;
}

::app::Uno::Float2 ElasticForce__float2__get_Attraction(ElasticForce__float2* __this)
{
    ::app::Uno::Float2 v = ::uPtr< ::app::Fuse::Internal::Blender__float2*>(__this->_blender)->Sub(__this->Destination(), __this->Position());
    double dlength = double();
    ::app::Uno::Float2 unit = ::uPtr< ::app::Fuse::Internal::Blender__float2*>(__this->_blender)->ToUnit(v, &dlength);
    float length = (float)dlength;

    if (length < __this->_scale)
    {
        return ::uPtr< ::app::Fuse::Internal::Blender__float2*>(__this->_blender)->Zero();
    }

    float p = ::app::Uno::Math__Pow_1(NULL, length, __this->AttractionCurve());
    return ::uPtr< ::app::Fuse::Internal::Blender__float2*>(__this->_blender)->Weight(unit, (double)p);
}

float ElasticForce__float2__get_AttractionCurve(ElasticForce__float2* __this)
{
    return __this->_attractionCurve;
}

float ElasticForce__float2__get_AttractionForce(ElasticForce__float2* __this)
{
    return __this->_attractionForce;
}

float ElasticForce__float2__get_Damping(ElasticForce__float2* __this)
{
    return __this->_damping;
}

::app::Uno::Float2 ElasticForce__float2__get_Destination(ElasticForce__float2* __this)
{
    return __this->_attractionDestination;
}

float ElasticForce__float2__get_Energy(ElasticForce__float2* __this)
{
    return (float)(::uPtr< ::app::Fuse::Internal::Blender__float2*>(__this->_blender)->Length(__this->Attraction()) + ::uPtr< ::app::Fuse::Internal::Blender__float2*>(__this->_blender)->Length(__this->Velocity()));
}

float ElasticForce__float2__get_EnergyEps(ElasticForce__float2* __this)
{
    return __this->_energyEps;
}

bool ElasticForce__float2__get_IsLocked(ElasticForce__float2* __this)
{
    return __this->_IsLocked;
}

bool ElasticForce__float2__get_IsStatic(ElasticForce__float2* __this)
{
    return __this->_isStatic;
}

float ElasticForce__float2__get_MaxSpeed(ElasticForce__float2* __this)
{
    return __this->_maxSpeed;
}

::app::Uno::Float2 ElasticForce__float2__get_Position(ElasticForce__float2* __this)
{
    return __this->_Position;
}

::app::Uno::Float2 ElasticForce__float2__get_Velocity(ElasticForce__float2* __this)
{
    return __this->_velocity;
}

void ElasticForce__float2__Iterate(ElasticForce__float2* __this)
{
    ::app::Uno::Float2 acc = ::uPtr< ::app::Fuse::Internal::Blender__float2*>(__this->_blender)->Weight(__this->Attraction(), (double)(float)((double)__this->AttractionForce() * __this->timeStep));
    __this->Velocity(::uPtr< ::app::Fuse::Internal::Blender__float2*>(__this->_blender)->Add(__this->Velocity(), acc));

    if (__this->_hasMaxSpeed)
    {
        double length = double();
        ::app::Uno::Float2 unit = ::uPtr< ::app::Fuse::Internal::Blender__float2*>(__this->_blender)->ToUnit(__this->Velocity(), &length);

        if (length > (double)__this->_maxSpeed)
        {
            __this->Velocity(::uPtr< ::app::Fuse::Internal::Blender__float2*>(__this->_blender)->Weight(unit, (double)__this->_maxSpeed));
        }
    }

    if (!__this->IsLocked())
    {
        ::app::Uno::Float2 step = ::uPtr< ::app::Fuse::Internal::Blender__float2*>(__this->_blender)->Weight(__this->Velocity(), (double)(float)__this->timeStep);
        __this->Position(::uPtr< ::app::Fuse::Internal::Blender__float2*>(__this->_blender)->Add(__this->Position(), step));

        if (__this->Energy() < __this->EnergyEps())
        {
            __this->Position(__this->Destination());
            __this->IsStatic(true);
        }
    }
}

ElasticForce__float2* ElasticForce__float2__New_1(::uStatic* __this, float scale)
{
    ElasticForce__float2* inst = (ElasticForce__float2*)::uAllocObject(sizeof(ElasticForce__float2), ElasticForce__float2__typeof());
    inst->_ObjInit(scale);
    return inst;
}

void ElasticForce__float2__Reset(ElasticForce__float2* __this, ::app::Uno::Float2 value)
{
    __this->Position(value);
    __this->Destination(value);
    __this->Velocity(::uPtr< ::app::Fuse::Internal::Blender__float2*>(__this->_blender)->Zero());
}

void ElasticForce__float2__ResetMaxSpeed(ElasticForce__float2* __this)
{
    __this->_hasMaxSpeed = false;
}

void ElasticForce__float2__set_AttractionCurve(ElasticForce__float2* __this, float value)
{
    __this->_attractionCurve = value;
}

void ElasticForce__float2__set_AttractionForce(ElasticForce__float2* __this, float value)
{
    __this->_attractionForce = value;
}

void ElasticForce__float2__set_Damping(ElasticForce__float2* __this, float value)
{
    __this->_damping = value;
}

void ElasticForce__float2__set_Destination(ElasticForce__float2* __this, ::app::Uno::Float2 value)
{
    __this->_attractionDestination = value;
    __this->_isStatic = false;
}

void ElasticForce__float2__set_EnergyEps(ElasticForce__float2* __this, float value)
{
    __this->_energyEps = value;
}

void ElasticForce__float2__set_IsLocked(ElasticForce__float2* __this, bool value)
{
    __this->_IsLocked = value;
}

void ElasticForce__float2__set_IsStatic(ElasticForce__float2* __this, bool value)
{
    if (__this->_isStatic != value)
    {
        __this->_isStatic = value;
    }
}

void ElasticForce__float2__set_MaxSpeed(ElasticForce__float2* __this, float value)
{
    __this->_hasMaxSpeed = true;
    __this->_maxSpeed = value;
}

void ElasticForce__float2__set_Position(ElasticForce__float2* __this, ::app::Uno::Float2 value)
{
    __this->_Position = value;
}

void ElasticForce__float2__set_Velocity(ElasticForce__float2* __this, ::app::Uno::Float2 value)
{
    __this->_velocity = value;
    __this->_isStatic = false;
}

void ElasticForce__float2__Update(ElasticForce__float2* __this, double elapsed)
{
    __this->_remainTime = __this->_remainTime + elapsed;

    while (__this->_remainTime > 0.0)
    {
        __this->Iterate();
        __this->_remainTime = __this->_remainTime - __this->timeStep;
    }

    __this->Velocity(::uPtr< ::app::Fuse::Internal::Blender__float2*>(__this->_blender)->Weight(__this->Velocity(), (double)(float)(1.0 - ::app::Uno::Math__Min(NULL, 1.0, (double)__this->Damping() * elapsed))));
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\Experimental.Physics\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

ElasticForce__float4__uType* ElasticForce__float4__typeof()
{
    static ::uStaticStrong<ElasticForce__float4__uType*> type;
    if (type != NULL) return type;

    type = (ElasticForce__float4__uType*)::uAllocClassType(sizeof(ElasticForce__float4__uType), "Experimental.Physics.ElasticForce<float4>", false, 3, 1, 0);

    type->__interface_0.__fp_get_Destination = (::app::Uno::Float4(*)(void*))ElasticForce__float4__get_Destination;
    type->__interface_0.__fp_set_Destination = (void(*)(void*, ::app::Uno::Float4))ElasticForce__float4__set_Destination;
    type->__interface_1.__fp_get_Position = (::app::Uno::Float4(*)(void*))ElasticForce__float4__get_Position;
    type->__interface_1.__fp_set_Position = (void(*)(void*, ::app::Uno::Float4))ElasticForce__float4__set_Position;
    type->__interface_2.__fp_Update = (void(*)(void*, double))ElasticForce__float4__Update;
    type->__interface_2.__fp_get_IsStatic = (bool(*)(void*))ElasticForce__float4__get_IsStatic;

    type->SetInterfaces(
        ::app::Experimental::Physics::DestinationSimulation__float4__typeof(), offsetof(ElasticForce__float4__uType, __interface_0),
        ::app::Experimental::Physics::MotionSimulation__float4__typeof(), offsetof(ElasticForce__float4__uType, __interface_1),
        ::app::Experimental::Physics::Simulation__typeof(), offsetof(ElasticForce__float4__uType, __interface_2));

    type->SetStrongRefs(
        "_blender", offsetof(ElasticForce__float4, _blender));

    type->SetFields(13,
        ::uNewField("_attractionCurve", NULL, offsetof(ElasticForce__float4, _attractionCurve), ::app::Uno::Float__typeof()),
        ::uNewField("_attractionDestination", NULL, offsetof(ElasticForce__float4, _attractionDestination), ::app::Uno::Float4__typeof()),
        ::uNewField("_attractionForce", NULL, offsetof(ElasticForce__float4, _attractionForce), ::app::Uno::Float__typeof()),
        ::uNewField("_blender", NULL, offsetof(ElasticForce__float4, _blender), ::app::Fuse::Internal::Blender__float4__typeof()),
        ::uNewField("_damping", NULL, offsetof(ElasticForce__float4, _damping), ::app::Uno::Float__typeof()),
        ::uNewField("_energyEps", NULL, offsetof(ElasticForce__float4, _energyEps), ::app::Uno::Float__typeof()),
        ::uNewField("_hasMaxSpeed", NULL, offsetof(ElasticForce__float4, _hasMaxSpeed), ::app::Uno::Bool__typeof()),
        ::uNewField("_isStatic", NULL, offsetof(ElasticForce__float4, _isStatic), ::app::Uno::Bool__typeof()),
        ::uNewField("_maxSpeed", NULL, offsetof(ElasticForce__float4, _maxSpeed), ::app::Uno::Float__typeof()),
        ::uNewField("_remainTime", NULL, offsetof(ElasticForce__float4, _remainTime), ::app::Uno::Double__typeof()),
        ::uNewField("_scale", NULL, offsetof(ElasticForce__float4, _scale), ::app::Uno::Float__typeof()),
        ::uNewField("_velocity", NULL, offsetof(ElasticForce__float4, _velocity), ::app::Uno::Float4__typeof()),
        ::uNewField("timeStep", NULL, offsetof(ElasticForce__float4, timeStep), ::app::Uno::Double__typeof()));

    type->SetFunctions(29,
        ::uNewFunction("CreateDegrees", ElasticForce__float4__CreateDegrees, 0, true, ElasticForce__float4__typeof()),
        ::uNewFunction("CreatePoints", ElasticForce__float4__CreatePoints, 0, true, ElasticForce__float4__typeof()),
        ::uNewFunction("CreateRadians", ElasticForce__float4__CreateRadians, 0, true, ElasticForce__float4__typeof()),
        ::uNewFunction("get_Attraction", ElasticForce__float4__get_Attraction, 0, false, ::app::Uno::Float4__typeof()),
        ::uNewFunction("get_AttractionCurve", ElasticForce__float4__get_AttractionCurve, 0, false, ::app::Uno::Float__typeof()),
        ::uNewFunction("get_AttractionForce", ElasticForce__float4__get_AttractionForce, 0, false, ::app::Uno::Float__typeof()),
        ::uNewFunction("get_Damping", ElasticForce__float4__get_Damping, 0, false, ::app::Uno::Float__typeof()),
        ::uNewFunction("get_Destination", ElasticForce__float4__get_Destination, 0, false, ::app::Uno::Float4__typeof()),
        ::uNewFunction("get_Energy", ElasticForce__float4__get_Energy, 0, false, ::app::Uno::Float__typeof()),
        ::uNewFunction("get_EnergyEps", ElasticForce__float4__get_EnergyEps, 0, false, ::app::Uno::Float__typeof()),
        ::uNewFunction("get_IsLocked", ElasticForce__float4__get_IsLocked, 0, false, ::app::Uno::Bool__typeof()),
        ::uNewFunction("get_IsStatic", ElasticForce__float4__get_IsStatic, 0, false, ::app::Uno::Bool__typeof()),
        ::uNewFunction("get_MaxSpeed", ElasticForce__float4__get_MaxSpeed, 0, false, ::app::Uno::Float__typeof()),
        ::uNewFunction("get_Position", ElasticForce__float4__get_Position, 0, false, ::app::Uno::Float4__typeof()),
        ::uNewFunction("get_Velocity", ElasticForce__float4__get_Velocity, 0, false, ::app::Uno::Float4__typeof()),
        ::uNewFunction(".ctor", ElasticForce__float4__New_1, 0, true, ElasticForce__float4__typeof(), ::app::Uno::Float__typeof()),
        ::uNewFunctionVoid("Reset", ElasticForce__float4__Reset, 0, false, ::app::Uno::Float4__typeof()),
        ::uNewFunctionVoid("ResetMaxSpeed", ElasticForce__float4__ResetMaxSpeed, 0, false),
        ::uNewFunctionVoid("set_AttractionCurve", ElasticForce__float4__set_AttractionCurve, 0, false, ::app::Uno::Float__typeof()),
        ::uNewFunctionVoid("set_AttractionForce", ElasticForce__float4__set_AttractionForce, 0, false, ::app::Uno::Float__typeof()),
        ::uNewFunctionVoid("set_Damping", ElasticForce__float4__set_Damping, 0, false, ::app::Uno::Float__typeof()),
        ::uNewFunctionVoid("set_Destination", ElasticForce__float4__set_Destination, 0, false, ::app::Uno::Float4__typeof()),
        ::uNewFunctionVoid("set_EnergyEps", ElasticForce__float4__set_EnergyEps, 0, false, ::app::Uno::Float__typeof()),
        ::uNewFunctionVoid("set_IsLocked", ElasticForce__float4__set_IsLocked, 0, false, ::app::Uno::Bool__typeof()),
        ::uNewFunctionVoid("set_IsStatic", ElasticForce__float4__set_IsStatic, 0, false, ::app::Uno::Bool__typeof()),
        ::uNewFunctionVoid("set_MaxSpeed", ElasticForce__float4__set_MaxSpeed, 0, false, ::app::Uno::Float__typeof()),
        ::uNewFunctionVoid("set_Position", ElasticForce__float4__set_Position, 0, false, ::app::Uno::Float4__typeof()),
        ::uNewFunctionVoid("set_Velocity", ElasticForce__float4__set_Velocity, 0, false, ::app::Uno::Float4__typeof()),
        ::uNewFunctionVoid("Update", ElasticForce__float4__Update, 0, false, ::app::Uno::Double__typeof()));

    ::uRegisterType(type);
    return type;
}

void ElasticForce__float4___ObjInit(ElasticForce__float4* __this, float scale)
{
    __this->_blender = ::app::Fuse::Internal::BlenderMap__Get__float4(NULL);
    __this->_attractionForce = 500.0f;
    __this->_attractionCurve = 0.65f;
    __this->_damping = 10.0f;
    __this->_energyEps = 0.01f;
    __this->timeStep = 0.001;
    __this->_remainTime = 0.0;
    __this->_scale = scale;
}

ElasticForce__float4* ElasticForce__float4__CreateDegrees(::uStatic* __this)
{
    ElasticForce__float4* a = ElasticForce__float4__CreateRadians(NULL);
    float m = 57.2957764f;
    ::uPtr< ElasticForce__float4*>(a)->AttractionForce(::uPtr< ElasticForce__float4*>(a)->AttractionForce() * m);
    a->Damping(a->Damping() * m);
    a->EnergyEps(a->EnergyEps() * m);
    a->MaxSpeed(a->MaxSpeed() * m);
    return a;
}

ElasticForce__float4* ElasticForce__float4__CreatePoints(::uStatic* __this)
{
    ElasticForce__float4* a = ElasticForce__float4__New_1(NULL, 0.01f);
    ::uPtr< ElasticForce__float4*>(a)->AttractionForce(200.0f);
    a->AttractionCurve(0.65f);
    a->Damping(10.0f);
    return a;
}

ElasticForce__float4* ElasticForce__float4__CreateRadians(::uStatic* __this)
{
    ElasticForce__float4* a = ElasticForce__float4__New_1(NULL, 0.01f);
    ::uPtr< ElasticForce__float4*>(a)->AttractionForce(200.0f);
    a->Damping(15.0f);
    a->AttractionCurve(0.75f);
    a->EnergyEps(0.01f);
    a->MaxSpeed(3.14159274f);
    return a;
}

::app::Uno::Float4 ElasticForce__float4__get_Attraction(ElasticForce__float4* __this)
{
    ::app::Uno::Float4 v = ::uPtr< ::app::Fuse::Internal::Blender__float4*>(__this->_blender)->Sub(__this->Destination(), __this->Position());
    double dlength = double();
    ::app::Uno::Float4 unit = ::uPtr< ::app::Fuse::Internal::Blender__float4*>(__this->_blender)->ToUnit(v, &dlength);
    float length = (float)dlength;

    if (length < __this->_scale)
    {
        return ::uPtr< ::app::Fuse::Internal::Blender__float4*>(__this->_blender)->Zero();
    }

    float p = ::app::Uno::Math__Pow_1(NULL, length, __this->AttractionCurve());
    return ::uPtr< ::app::Fuse::Internal::Blender__float4*>(__this->_blender)->Weight(unit, (double)p);
}

float ElasticForce__float4__get_AttractionCurve(ElasticForce__float4* __this)
{
    return __this->_attractionCurve;
}

float ElasticForce__float4__get_AttractionForce(ElasticForce__float4* __this)
{
    return __this->_attractionForce;
}

float ElasticForce__float4__get_Damping(ElasticForce__float4* __this)
{
    return __this->_damping;
}

::app::Uno::Float4 ElasticForce__float4__get_Destination(ElasticForce__float4* __this)
{
    return __this->_attractionDestination;
}

float ElasticForce__float4__get_Energy(ElasticForce__float4* __this)
{
    return (float)(::uPtr< ::app::Fuse::Internal::Blender__float4*>(__this->_blender)->Length(__this->Attraction()) + ::uPtr< ::app::Fuse::Internal::Blender__float4*>(__this->_blender)->Length(__this->Velocity()));
}

float ElasticForce__float4__get_EnergyEps(ElasticForce__float4* __this)
{
    return __this->_energyEps;
}

bool ElasticForce__float4__get_IsLocked(ElasticForce__float4* __this)
{
    return __this->_IsLocked;
}

bool ElasticForce__float4__get_IsStatic(ElasticForce__float4* __this)
{
    return __this->_isStatic;
}

float ElasticForce__float4__get_MaxSpeed(ElasticForce__float4* __this)
{
    return __this->_maxSpeed;
}

::app::Uno::Float4 ElasticForce__float4__get_Position(ElasticForce__float4* __this)
{
    return __this->_Position;
}

::app::Uno::Float4 ElasticForce__float4__get_Velocity(ElasticForce__float4* __this)
{
    return __this->_velocity;
}

void ElasticForce__float4__Iterate(ElasticForce__float4* __this)
{
    ::app::Uno::Float4 acc = ::uPtr< ::app::Fuse::Internal::Blender__float4*>(__this->_blender)->Weight(__this->Attraction(), (double)(float)((double)__this->AttractionForce() * __this->timeStep));
    __this->Velocity(::uPtr< ::app::Fuse::Internal::Blender__float4*>(__this->_blender)->Add(__this->Velocity(), acc));

    if (__this->_hasMaxSpeed)
    {
        double length = double();
        ::app::Uno::Float4 unit = ::uPtr< ::app::Fuse::Internal::Blender__float4*>(__this->_blender)->ToUnit(__this->Velocity(), &length);

        if (length > (double)__this->_maxSpeed)
        {
            __this->Velocity(::uPtr< ::app::Fuse::Internal::Blender__float4*>(__this->_blender)->Weight(unit, (double)__this->_maxSpeed));
        }
    }

    if (!__this->IsLocked())
    {
        ::app::Uno::Float4 step = ::uPtr< ::app::Fuse::Internal::Blender__float4*>(__this->_blender)->Weight(__this->Velocity(), (double)(float)__this->timeStep);
        __this->Position(::uPtr< ::app::Fuse::Internal::Blender__float4*>(__this->_blender)->Add(__this->Position(), step));

        if (__this->Energy() < __this->EnergyEps())
        {
            __this->Position(__this->Destination());
            __this->IsStatic(true);
        }
    }
}

ElasticForce__float4* ElasticForce__float4__New_1(::uStatic* __this, float scale)
{
    ElasticForce__float4* inst = (ElasticForce__float4*)::uAllocObject(sizeof(ElasticForce__float4), ElasticForce__float4__typeof());
    inst->_ObjInit(scale);
    return inst;
}

void ElasticForce__float4__Reset(ElasticForce__float4* __this, ::app::Uno::Float4 value)
{
    __this->Position(value);
    __this->Destination(value);
    __this->Velocity(::uPtr< ::app::Fuse::Internal::Blender__float4*>(__this->_blender)->Zero());
}

void ElasticForce__float4__ResetMaxSpeed(ElasticForce__float4* __this)
{
    __this->_hasMaxSpeed = false;
}

void ElasticForce__float4__set_AttractionCurve(ElasticForce__float4* __this, float value)
{
    __this->_attractionCurve = value;
}

void ElasticForce__float4__set_AttractionForce(ElasticForce__float4* __this, float value)
{
    __this->_attractionForce = value;
}

void ElasticForce__float4__set_Damping(ElasticForce__float4* __this, float value)
{
    __this->_damping = value;
}

void ElasticForce__float4__set_Destination(ElasticForce__float4* __this, ::app::Uno::Float4 value)
{
    __this->_attractionDestination = value;
    __this->_isStatic = false;
}

void ElasticForce__float4__set_EnergyEps(ElasticForce__float4* __this, float value)
{
    __this->_energyEps = value;
}

void ElasticForce__float4__set_IsLocked(ElasticForce__float4* __this, bool value)
{
    __this->_IsLocked = value;
}

void ElasticForce__float4__set_IsStatic(ElasticForce__float4* __this, bool value)
{
    if (__this->_isStatic != value)
    {
        __this->_isStatic = value;
    }
}

void ElasticForce__float4__set_MaxSpeed(ElasticForce__float4* __this, float value)
{
    __this->_hasMaxSpeed = true;
    __this->_maxSpeed = value;
}

void ElasticForce__float4__set_Position(ElasticForce__float4* __this, ::app::Uno::Float4 value)
{
    __this->_Position = value;
}

void ElasticForce__float4__set_Velocity(ElasticForce__float4* __this, ::app::Uno::Float4 value)
{
    __this->_velocity = value;
    __this->_isStatic = false;
}

void ElasticForce__float4__Update(ElasticForce__float4* __this, double elapsed)
{
    __this->_remainTime = __this->_remainTime + elapsed;

    while (__this->_remainTime > 0.0)
    {
        __this->Iterate();
        __this->_remainTime = __this->_remainTime - __this->timeStep;
    }

    __this->Velocity(::uPtr< ::app::Fuse::Internal::Blender__float4*>(__this->_blender)->Weight(__this->Velocity(), (double)(float)(1.0 - ::app::Uno::Math__Min(NULL, 1.0, (double)__this->Damping() * elapsed))));
}

}}}
