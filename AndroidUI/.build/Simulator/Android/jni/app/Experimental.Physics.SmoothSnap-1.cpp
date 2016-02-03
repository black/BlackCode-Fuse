#include <app/Experimental.Physics.SmoothSnap__float.h>
#include <app/Experimental.Physics.SmoothSnap__float2.h>
#include <app/Fuse.Internal.Blender__float.h>
#include <app/Fuse.Internal.Blender__float2.h>
#include <app/Fuse.Internal.BlenderMap.h>
#include <app/Uno.Bool.h>
#include <app/Uno.Double.h>
#include <app/Uno.Float.h>

namespace app {
namespace Experimental {
namespace Physics {

// This file was generated based on 'C:\ProgramData\Uno\Packages\Experimental.Physics\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

SmoothSnap__float__uType* SmoothSnap__float__typeof()
{
    static ::uStaticStrong<SmoothSnap__float__uType*> type;
    if (type != NULL) return type;

    type = (SmoothSnap__float__uType*)::uAllocClassType(sizeof(SmoothSnap__float__uType), "Experimental.Physics.SmoothSnap<float>", false, 3, 1, 0);

    type->__interface_0.__fp_get_Destination = (float(*)(void*))SmoothSnap__float__get_Destination;
    type->__interface_0.__fp_set_Destination = (void(*)(void*, float))SmoothSnap__float__set_Destination;
    type->__interface_1.__fp_get_Position = (float(*)(void*))SmoothSnap__float__get_Position;
    type->__interface_1.__fp_set_Position = (void(*)(void*, float))SmoothSnap__float__set_Position;
    type->__interface_1.__fp_get_Velocity = (float(*)(void*))SmoothSnap__float__get_Velocity;
    type->__interface_1.__fp_set_Velocity = (void(*)(void*, float))SmoothSnap__float__set_Velocity;
    type->__interface_2.__fp_Update = (void(*)(void*, double))SmoothSnap__float__Update;
    type->__interface_2.__fp_get_IsStatic = (bool(*)(void*))SmoothSnap__float__get_IsStatic;

    type->SetInterfaces(
        ::app::Experimental::Physics::DestinationSimulation__float__typeof(), offsetof(SmoothSnap__float__uType, __interface_0),
        ::app::Experimental::Physics::MotionSimulation__float__typeof(), offsetof(SmoothSnap__float__uType, __interface_1),
        ::app::Experimental::Physics::Simulation__typeof(), offsetof(SmoothSnap__float__uType, __interface_2));

    type->SetStrongRefs(
        "_blender", offsetof(SmoothSnap__float, _blender));

    type->SetFields(5,
        ::uNewField("_blender", NULL, offsetof(SmoothSnap__float, _blender), ::app::Fuse::Internal::Blender__float__typeof()),
        ::uNewField("_scale", NULL, offsetof(SmoothSnap__float, _scale), ::app::Uno::Float__typeof()),
        ::uNewField("_speed", NULL, offsetof(SmoothSnap__float, _speed), ::app::Uno::Float__typeof()),
        ::uNewField("_speedDropoutDistance", NULL, offsetof(SmoothSnap__float, _speedDropoutDistance), ::app::Uno::Float__typeof()),
        ::uNewField("_speedMin", NULL, offsetof(SmoothSnap__float, _speedMin), ::app::Uno::Float__typeof()));

    type->SetFunctions(14,
        ::uNewFunction("CreateNormalized", SmoothSnap__float__CreateNormalized, 0, true, SmoothSnap__float__typeof()),
        ::uNewFunction("CreatePoints", SmoothSnap__float__CreatePoints, 0, true, SmoothSnap__float__typeof()),
        ::uNewFunction("get_Destination", SmoothSnap__float__get_Destination, 0, false, ::app::Uno::Float__typeof()),
        ::uNewFunction("get_IsStatic", SmoothSnap__float__get_IsStatic, 0, false, ::app::Uno::Bool__typeof()),
        ::uNewFunction("get_Position", SmoothSnap__float__get_Position, 0, false, ::app::Uno::Float__typeof()),
        ::uNewFunction("get_Speed", SmoothSnap__float__get_Speed, 0, false, ::app::Uno::Float__typeof()),
        ::uNewFunction("get_Velocity", SmoothSnap__float__get_Velocity, 0, false, ::app::Uno::Float__typeof()),
        ::uNewFunction(".ctor", SmoothSnap__float__New_1, 0, true, SmoothSnap__float__typeof(), ::app::Uno::Float__typeof()),
        ::uNewFunctionVoid("Reset", SmoothSnap__float__Reset, 0, false, ::app::Uno::Float__typeof()),
        ::uNewFunctionVoid("set_Destination", SmoothSnap__float__set_Destination, 0, false, ::app::Uno::Float__typeof()),
        ::uNewFunctionVoid("set_Position", SmoothSnap__float__set_Position, 0, false, ::app::Uno::Float__typeof()),
        ::uNewFunctionVoid("set_Speed", SmoothSnap__float__set_Speed, 0, false, ::app::Uno::Float__typeof()),
        ::uNewFunctionVoid("set_Velocity", SmoothSnap__float__set_Velocity, 0, false, ::app::Uno::Float__typeof()),
        ::uNewFunctionVoid("Update", SmoothSnap__float__Update, 0, false, ::app::Uno::Double__typeof()));

    ::uRegisterType(type);
    return type;
}

void SmoothSnap__float___ObjInit(SmoothSnap__float* __this, float scale)
{
    __this->_blender = ::app::Fuse::Internal::BlenderMap__Get__float(NULL);
    __this->_scale = 1.0f;
    __this->_speedMin = 25.0f;
    __this->_speedDropoutDistance = 100.0f;
    __this->_speed = 600.0f;
    __this->_scale = scale;
}

SmoothSnap__float* SmoothSnap__float__CreateNormalized(::uStatic* __this)
{
    SmoothSnap__float* s = SmoothSnap__float__New_1(NULL, 1e-05f);
    ::uPtr< SmoothSnap__float*>(s)->_speedMin = 0.2f;
    s->_speedDropoutDistance = 0.4f;
    s->_speed = 3.5f;
    return s;
}

SmoothSnap__float* SmoothSnap__float__CreatePoints(::uStatic* __this)
{
    SmoothSnap__float* s = SmoothSnap__float__New_1(NULL, 1e-05f);
    ::uPtr< SmoothSnap__float*>(s)->_speedMin = 25.0f;
    s->_speedDropoutDistance = 100.0f;
    s->_speed = 600.0f;
    return s;
}

float SmoothSnap__float__get_Destination(SmoothSnap__float* __this)
{
    return __this->_Destination;
}

bool SmoothSnap__float__get_IsStatic(SmoothSnap__float* __this)
{
    return ::uPtr< ::app::Fuse::Internal::Blender__float*>(__this->_blender)->Length(::uPtr< ::app::Fuse::Internal::Blender__float*>(__this->_blender)->Sub(__this->Destination(), __this->Position())) < (double)__this->_scale;
}

float SmoothSnap__float__get_Position(SmoothSnap__float* __this)
{
    return __this->_Position;
}

float SmoothSnap__float__get_Speed(SmoothSnap__float* __this)
{
    return __this->_speed;
}

float SmoothSnap__float__get_Velocity(SmoothSnap__float* __this)
{
    return __this->_Velocity;
}

SmoothSnap__float* SmoothSnap__float__New_1(::uStatic* __this, float scale)
{
    SmoothSnap__float* inst = (SmoothSnap__float*)::uAllocObject(sizeof(SmoothSnap__float), SmoothSnap__float__typeof());
    inst->_ObjInit(scale);
    return inst;
}

void SmoothSnap__float__Reset(SmoothSnap__float* __this, float destination)
{
    __this->Destination(destination);
    __this->Velocity(::uPtr< ::app::Fuse::Internal::Blender__float*>(__this->_blender)->Zero());
    __this->Position(destination);
}

void SmoothSnap__float__set_Destination(SmoothSnap__float* __this, float value)
{
    __this->_Destination = value;
}

void SmoothSnap__float__set_Position(SmoothSnap__float* __this, float value)
{
    __this->_Position = value;
}

void SmoothSnap__float__set_Speed(SmoothSnap__float* __this, float value)
{
    __this->_speed = value;
}

void SmoothSnap__float__set_Velocity(SmoothSnap__float* __this, float value)
{
    __this->_Velocity = value;
}

void SmoothSnap__float__Update(SmoothSnap__float* __this, double elapsed)
{
    float off = ::uPtr< ::app::Fuse::Internal::Blender__float*>(__this->_blender)->Sub(__this->Destination(), __this->Position());
    double offLen = double();
    float offUnit = ::uPtr< ::app::Fuse::Internal::Blender__float*>(__this->_blender)->ToUnit(off, &offLen);
    float useSpeed = __this->Speed();

    if (offLen < (double)__this->_speedDropoutDistance)
    {
        useSpeed = (((float)offLen / __this->_speedDropoutDistance) * (__this->Speed() - __this->_speedMin)) + __this->_speedMin;
    }

    if (offLen < ((double)useSpeed * elapsed))
    {
        __this->Position(__this->Destination());
        __this->Velocity(::uPtr< ::app::Fuse::Internal::Blender__float*>(__this->_blender)->Zero());
        return;
    }

    __this->Velocity(::uPtr< ::app::Fuse::Internal::Blender__float*>(__this->_blender)->Weight(offUnit, (double)useSpeed));
    __this->Position(::uPtr< ::app::Fuse::Internal::Blender__float*>(__this->_blender)->Add(__this->Position(), ::uPtr< ::app::Fuse::Internal::Blender__float*>(__this->_blender)->Weight(__this->Velocity(), (double)(float)elapsed)));
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\Experimental.Physics\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

SmoothSnap__float2__uType* SmoothSnap__float2__typeof()
{
    static ::uStaticStrong<SmoothSnap__float2__uType*> type;
    if (type != NULL) return type;

    type = (SmoothSnap__float2__uType*)::uAllocClassType(sizeof(SmoothSnap__float2__uType), "Experimental.Physics.SmoothSnap<float2>", false, 3, 1, 0);

    type->__interface_0.__fp_get_Destination = (::app::Uno::Float2(*)(void*))SmoothSnap__float2__get_Destination;
    type->__interface_0.__fp_set_Destination = (void(*)(void*, ::app::Uno::Float2))SmoothSnap__float2__set_Destination;
    type->__interface_1.__fp_get_Position = (::app::Uno::Float2(*)(void*))SmoothSnap__float2__get_Position;
    type->__interface_1.__fp_set_Position = (void(*)(void*, ::app::Uno::Float2))SmoothSnap__float2__set_Position;
    type->__interface_1.__fp_get_Velocity = (::app::Uno::Float2(*)(void*))SmoothSnap__float2__get_Velocity;
    type->__interface_1.__fp_set_Velocity = (void(*)(void*, ::app::Uno::Float2))SmoothSnap__float2__set_Velocity;
    type->__interface_2.__fp_Update = (void(*)(void*, double))SmoothSnap__float2__Update;
    type->__interface_2.__fp_get_IsStatic = (bool(*)(void*))SmoothSnap__float2__get_IsStatic;

    type->SetInterfaces(
        ::app::Experimental::Physics::DestinationSimulation__float2__typeof(), offsetof(SmoothSnap__float2__uType, __interface_0),
        ::app::Experimental::Physics::MotionSimulation__float2__typeof(), offsetof(SmoothSnap__float2__uType, __interface_1),
        ::app::Experimental::Physics::Simulation__typeof(), offsetof(SmoothSnap__float2__uType, __interface_2));

    type->SetStrongRefs(
        "_blender", offsetof(SmoothSnap__float2, _blender));

    type->SetFields(5,
        ::uNewField("_blender", NULL, offsetof(SmoothSnap__float2, _blender), ::app::Fuse::Internal::Blender__float2__typeof()),
        ::uNewField("_scale", NULL, offsetof(SmoothSnap__float2, _scale), ::app::Uno::Float__typeof()),
        ::uNewField("_speed", NULL, offsetof(SmoothSnap__float2, _speed), ::app::Uno::Float__typeof()),
        ::uNewField("_speedDropoutDistance", NULL, offsetof(SmoothSnap__float2, _speedDropoutDistance), ::app::Uno::Float__typeof()),
        ::uNewField("_speedMin", NULL, offsetof(SmoothSnap__float2, _speedMin), ::app::Uno::Float__typeof()));

    type->SetFunctions(14,
        ::uNewFunction("CreateNormalized", SmoothSnap__float2__CreateNormalized, 0, true, SmoothSnap__float2__typeof()),
        ::uNewFunction("CreatePoints", SmoothSnap__float2__CreatePoints, 0, true, SmoothSnap__float2__typeof()),
        ::uNewFunction("get_Destination", SmoothSnap__float2__get_Destination, 0, false, ::app::Uno::Float2__typeof()),
        ::uNewFunction("get_IsStatic", SmoothSnap__float2__get_IsStatic, 0, false, ::app::Uno::Bool__typeof()),
        ::uNewFunction("get_Position", SmoothSnap__float2__get_Position, 0, false, ::app::Uno::Float2__typeof()),
        ::uNewFunction("get_Speed", SmoothSnap__float2__get_Speed, 0, false, ::app::Uno::Float__typeof()),
        ::uNewFunction("get_Velocity", SmoothSnap__float2__get_Velocity, 0, false, ::app::Uno::Float2__typeof()),
        ::uNewFunction(".ctor", SmoothSnap__float2__New_1, 0, true, SmoothSnap__float2__typeof(), ::app::Uno::Float__typeof()),
        ::uNewFunctionVoid("Reset", SmoothSnap__float2__Reset, 0, false, ::app::Uno::Float2__typeof()),
        ::uNewFunctionVoid("set_Destination", SmoothSnap__float2__set_Destination, 0, false, ::app::Uno::Float2__typeof()),
        ::uNewFunctionVoid("set_Position", SmoothSnap__float2__set_Position, 0, false, ::app::Uno::Float2__typeof()),
        ::uNewFunctionVoid("set_Speed", SmoothSnap__float2__set_Speed, 0, false, ::app::Uno::Float__typeof()),
        ::uNewFunctionVoid("set_Velocity", SmoothSnap__float2__set_Velocity, 0, false, ::app::Uno::Float2__typeof()),
        ::uNewFunctionVoid("Update", SmoothSnap__float2__Update, 0, false, ::app::Uno::Double__typeof()));

    ::uRegisterType(type);
    return type;
}

void SmoothSnap__float2___ObjInit(SmoothSnap__float2* __this, float scale)
{
    __this->_blender = ::app::Fuse::Internal::BlenderMap__Get__float2(NULL);
    __this->_scale = 1.0f;
    __this->_speedMin = 25.0f;
    __this->_speedDropoutDistance = 100.0f;
    __this->_speed = 600.0f;
    __this->_scale = scale;
}

SmoothSnap__float2* SmoothSnap__float2__CreateNormalized(::uStatic* __this)
{
    SmoothSnap__float2* s = SmoothSnap__float2__New_1(NULL, 1e-05f);
    ::uPtr< SmoothSnap__float2*>(s)->_speedMin = 0.2f;
    s->_speedDropoutDistance = 0.4f;
    s->_speed = 3.5f;
    return s;
}

SmoothSnap__float2* SmoothSnap__float2__CreatePoints(::uStatic* __this)
{
    SmoothSnap__float2* s = SmoothSnap__float2__New_1(NULL, 1e-05f);
    ::uPtr< SmoothSnap__float2*>(s)->_speedMin = 25.0f;
    s->_speedDropoutDistance = 100.0f;
    s->_speed = 600.0f;
    return s;
}

::app::Uno::Float2 SmoothSnap__float2__get_Destination(SmoothSnap__float2* __this)
{
    return __this->_Destination;
}

bool SmoothSnap__float2__get_IsStatic(SmoothSnap__float2* __this)
{
    return ::uPtr< ::app::Fuse::Internal::Blender__float2*>(__this->_blender)->Length(::uPtr< ::app::Fuse::Internal::Blender__float2*>(__this->_blender)->Sub(__this->Destination(), __this->Position())) < (double)__this->_scale;
}

::app::Uno::Float2 SmoothSnap__float2__get_Position(SmoothSnap__float2* __this)
{
    return __this->_Position;
}

float SmoothSnap__float2__get_Speed(SmoothSnap__float2* __this)
{
    return __this->_speed;
}

::app::Uno::Float2 SmoothSnap__float2__get_Velocity(SmoothSnap__float2* __this)
{
    return __this->_Velocity;
}

SmoothSnap__float2* SmoothSnap__float2__New_1(::uStatic* __this, float scale)
{
    SmoothSnap__float2* inst = (SmoothSnap__float2*)::uAllocObject(sizeof(SmoothSnap__float2), SmoothSnap__float2__typeof());
    inst->_ObjInit(scale);
    return inst;
}

void SmoothSnap__float2__Reset(SmoothSnap__float2* __this, ::app::Uno::Float2 destination)
{
    __this->Destination(destination);
    __this->Velocity(::uPtr< ::app::Fuse::Internal::Blender__float2*>(__this->_blender)->Zero());
    __this->Position(destination);
}

void SmoothSnap__float2__set_Destination(SmoothSnap__float2* __this, ::app::Uno::Float2 value)
{
    __this->_Destination = value;
}

void SmoothSnap__float2__set_Position(SmoothSnap__float2* __this, ::app::Uno::Float2 value)
{
    __this->_Position = value;
}

void SmoothSnap__float2__set_Speed(SmoothSnap__float2* __this, float value)
{
    __this->_speed = value;
}

void SmoothSnap__float2__set_Velocity(SmoothSnap__float2* __this, ::app::Uno::Float2 value)
{
    __this->_Velocity = value;
}

void SmoothSnap__float2__Update(SmoothSnap__float2* __this, double elapsed)
{
    ::app::Uno::Float2 off = ::uPtr< ::app::Fuse::Internal::Blender__float2*>(__this->_blender)->Sub(__this->Destination(), __this->Position());
    double offLen = double();
    ::app::Uno::Float2 offUnit = ::uPtr< ::app::Fuse::Internal::Blender__float2*>(__this->_blender)->ToUnit(off, &offLen);
    float useSpeed = __this->Speed();

    if (offLen < (double)__this->_speedDropoutDistance)
    {
        useSpeed = (((float)offLen / __this->_speedDropoutDistance) * (__this->Speed() - __this->_speedMin)) + __this->_speedMin;
    }

    if (offLen < ((double)useSpeed * elapsed))
    {
        __this->Position(__this->Destination());
        __this->Velocity(::uPtr< ::app::Fuse::Internal::Blender__float2*>(__this->_blender)->Zero());
        return;
    }

    __this->Velocity(::uPtr< ::app::Fuse::Internal::Blender__float2*>(__this->_blender)->Weight(offUnit, (double)useSpeed));
    __this->Position(::uPtr< ::app::Fuse::Internal::Blender__float2*>(__this->_blender)->Add(__this->Position(), ::uPtr< ::app::Fuse::Internal::Blender__float2*>(__this->_blender)->Weight(__this->Velocity(), (double)(float)elapsed)));
}

}}}
