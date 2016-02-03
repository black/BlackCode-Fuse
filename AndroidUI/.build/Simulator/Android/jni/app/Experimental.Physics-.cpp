#include <app/Experimental.Physics.BasicBoundedRegion2D.h>
#include <app/Experimental.Physics.BasicBoundedRegion2D_MoveMode.h>
#include <app/Experimental.Physics.BoundedRegion2D.h>
#include <app/Experimental.Physics.DestinationSimulation__float.h>
#include <app/Experimental.Physics.DestinationSimulation__float2.h>
#include <app/Experimental.Physics.DestinationSimulation__float4.h>
#include <app/Experimental.Physics.ElasticForce__float2.h>
#include <app/Experimental.Physics.Friction__float2.h>
#include <app/Experimental.Physics.MotionSimulation__float.h>
#include <app/Experimental.Physics.MotionSimulation__float2.h>
#include <app/Experimental.Physics.MotionSimulation__float4.h>
#include <app/Experimental.Physics.Simulation.h>
#include <app/Experimental.Physics.SmoothSnap__float2.h>
#include <app/Uno.Bool.h>
#include <app/Uno.Double.h>
#include <app/Uno.Float.h>
#include <app/Uno.Int.h>
#include <app/Uno.Math.h>
#include <app/Uno.Vector.h>

namespace app {
namespace Experimental {
namespace Physics {

// This file was generated based on 'C:\ProgramData\Uno\Packages\Experimental.Physics\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

BasicBoundedRegion2D__uType* BasicBoundedRegion2D__typeof()
{
    static ::uStaticStrong<BasicBoundedRegion2D__uType*> type;
    if (type != NULL) return type;

    type = (BasicBoundedRegion2D__uType*)::uAllocClassType(sizeof(BasicBoundedRegion2D__uType), "Experimental.Physics.BasicBoundedRegion2D", false, 3, 3, 0);

    type->__interface_0.__fp_StartUser = (void(*)(void*))BasicBoundedRegion2D__StartUser;
    type->__interface_0.__fp_StepUser = (void(*)(void*, ::app::Uno::Float2))BasicBoundedRegion2D__StepUser;
    type->__interface_0.__fp_EndUser = (void(*)(void*, ::app::Uno::Float2))BasicBoundedRegion2D__EndUser;
    type->__interface_0.__fp_MoveTo = (void(*)(void*, ::app::Uno::Float2))BasicBoundedRegion2D__MoveTo;
    type->__interface_0.__fp_get_MaxPosition = (::app::Uno::Float2(*)(void*))BasicBoundedRegion2D__get_MaxPosition;
    type->__interface_0.__fp_set_MaxPosition = (void(*)(void*, ::app::Uno::Float2))BasicBoundedRegion2D__set_MaxPosition;
    type->__interface_0.__fp_get_MinPosition = (::app::Uno::Float2(*)(void*))BasicBoundedRegion2D__get_MinPosition;
    type->__interface_0.__fp_set_MinPosition = (void(*)(void*, ::app::Uno::Float2))BasicBoundedRegion2D__set_MinPosition;
    type->__interface_0.__fp_get_OverflowExtent = (::app::Uno::Float2(*)(void*))BasicBoundedRegion2D__get_OverflowExtent;
    type->__interface_0.__fp_set_OverflowExtent = (void(*)(void*, ::app::Uno::Float2))BasicBoundedRegion2D__set_OverflowExtent;
    type->__interface_0.__fp_get_IsUser = (bool(*)(void*))BasicBoundedRegion2D__get_IsUser;
    type->__interface_0.__fp_get_Destination = (::app::Uno::Float2(*)(void*))BasicBoundedRegion2D__get_Destination;
    type->__interface_1.__fp_get_Position = (::app::Uno::Float2(*)(void*))BasicBoundedRegion2D__get_Position;
    type->__interface_1.__fp_set_Position = (void(*)(void*, ::app::Uno::Float2))BasicBoundedRegion2D__set_Position;
    type->__interface_1.__fp_get_Velocity = (::app::Uno::Float2(*)(void*))BasicBoundedRegion2D__get_Velocity;
    type->__interface_1.__fp_set_Velocity = (void(*)(void*, ::app::Uno::Float2))BasicBoundedRegion2D__set_Velocity;
    type->__interface_2.__fp_Update = (void(*)(void*, double))BasicBoundedRegion2D__Update;
    type->__interface_2.__fp_get_IsStatic = (bool(*)(void*))BasicBoundedRegion2D__get_IsStatic;

    type->SetInterfaces(
        ::app::Experimental::Physics::BoundedRegion2D__typeof(), offsetof(BasicBoundedRegion2D__uType, __interface_0),
        ::app::Experimental::Physics::MotionSimulation__float2__typeof(), offsetof(BasicBoundedRegion2D__uType, __interface_1),
        ::app::Experimental::Physics::Simulation__typeof(), offsetof(BasicBoundedRegion2D__uType, __interface_2));

    type->SetStrongRefs(
        "_destination", offsetof(BasicBoundedRegion2D, _destination),
        "_friction", offsetof(BasicBoundedRegion2D, _friction),
        "_snap", offsetof(BasicBoundedRegion2D, _snap));

    type->SetFields(6,
        ::uNewField("_destination", NULL, offsetof(BasicBoundedRegion2D, _destination), ::app::Experimental::Physics::DestinationSimulation__float2__typeof()),
        ::uNewField("_friction", NULL, offsetof(BasicBoundedRegion2D, _friction), ::app::Experimental::Physics::Friction__float2__typeof()),
        ::uNewField("_moveMode", NULL, offsetof(BasicBoundedRegion2D, _moveMode), ::app::Experimental::Physics::BasicBoundedRegion2D_MoveMode__typeof()),
        ::uNewField("_snap", NULL, offsetof(BasicBoundedRegion2D, _snap), ::app::Experimental::Physics::DestinationSimulation__float2__typeof()),
        ::uNewField("_snapLimit", NULL, offsetof(BasicBoundedRegion2D, _snapLimit), ::app::Uno::Float2__typeof()),
        ::uNewField("_velocity", NULL, offsetof(BasicBoundedRegion2D, _velocity), ::app::Uno::Float2__typeof()));

    type->SetFunctions(25,
        ::uNewFunction("CalcOver", BasicBoundedRegion2D__CalcOver, 0, false, ::app::Uno::Float2__typeof(), ::app::Uno::Float2__typeof()),
        ::uNewFunction("CreatePoints", BasicBoundedRegion2D__CreatePoints, 0, true, BasicBoundedRegion2D__typeof()),
        ::uNewFunctionVoid("EndUser", BasicBoundedRegion2D__EndUser, 0, false, ::app::Uno::Float2__typeof()),
        ::uNewFunction("get_Destination", BasicBoundedRegion2D__get_Destination, 0, false, ::app::Uno::Float2__typeof()),
        ::uNewFunction("get_IsStatic", BasicBoundedRegion2D__get_IsStatic, 0, false, ::app::Uno::Bool__typeof()),
        ::uNewFunction("get_IsUser", BasicBoundedRegion2D__get_IsUser, 0, false, ::app::Uno::Bool__typeof()),
        ::uNewFunction("get_MaxPosition", BasicBoundedRegion2D__get_MaxPosition, 0, false, ::app::Uno::Float2__typeof()),
        ::uNewFunction("get_MinPosition", BasicBoundedRegion2D__get_MinPosition, 0, false, ::app::Uno::Float2__typeof()),
        ::uNewFunction("get_OverflowExtent", BasicBoundedRegion2D__get_OverflowExtent, 0, false, ::app::Uno::Float2__typeof()),
        ::uNewFunction("get_Position", BasicBoundedRegion2D__get_Position, 0, false, ::app::Uno::Float2__typeof()),
        ::uNewFunction("get_Velocity", BasicBoundedRegion2D__get_Velocity, 0, false, ::app::Uno::Float2__typeof()),
        ::uNewFunctionVoid("MoveDestination", BasicBoundedRegion2D__MoveDestination, 0, false, ::app::Uno::Double__typeof()),
        ::uNewFunctionVoid("MoveFriction", BasicBoundedRegion2D__MoveFriction, 0, false, ::app::Uno::Double__typeof()),
        ::uNewFunction("MoveSnap", BasicBoundedRegion2D__MoveSnap, 0, false, ::app::Uno::Bool__typeof(), ::app::Uno::Double__typeof(), ::app::Uno::Bool__typeof(), ::app::Uno::Bool__typeof()),
        ::uNewFunctionVoid("MoveTo", BasicBoundedRegion2D__MoveTo, 0, false, ::app::Uno::Float2__typeof()),
        ::uNewFunction("QuadraticInOut", BasicBoundedRegion2D__QuadraticInOut, 0, true, ::app::Uno::Float__typeof(), ::app::Uno::Float__typeof()),
        ::uNewFunctionVoid("set_MaxPosition", BasicBoundedRegion2D__set_MaxPosition, 0, false, ::app::Uno::Float2__typeof()),
        ::uNewFunctionVoid("set_MinPosition", BasicBoundedRegion2D__set_MinPosition, 0, false, ::app::Uno::Float2__typeof()),
        ::uNewFunctionVoid("set_OverflowExtent", BasicBoundedRegion2D__set_OverflowExtent, 0, false, ::app::Uno::Float2__typeof()),
        ::uNewFunctionVoid("set_Position", BasicBoundedRegion2D__set_Position, 0, false, ::app::Uno::Float2__typeof()),
        ::uNewFunctionVoid("set_Velocity", BasicBoundedRegion2D__set_Velocity, 0, false, ::app::Uno::Float2__typeof()),
        ::uNewFunction("SnapValue", BasicBoundedRegion2D__SnapValue, 0, false, ::app::Uno::Float2__typeof(), ::app::Uno::Float2__typeof(), ::app::Uno::Float2__typeof()),
        ::uNewFunctionVoid("StartUser", BasicBoundedRegion2D__StartUser, 0, false),
        ::uNewFunctionVoid("StepUser", BasicBoundedRegion2D__StepUser, 0, false, ::app::Uno::Float2__typeof()),
        ::uNewFunctionVoid("Update", BasicBoundedRegion2D__Update, 0, false, ::app::Uno::Double__typeof()));

    ::uRegisterType(type);
    return type;
}

void BasicBoundedRegion2D___ObjInit(BasicBoundedRegion2D* __this)
{
    __this->_snapLimit = ::app::Uno::Float2__New_1(NULL, 150.0f);
    __this->_friction = ::app::Experimental::Physics::Friction__float2__CreatePoints(NULL);
    __this->_snap = (::uObject*)::app::Experimental::Physics::SmoothSnap__float2__CreatePoints(NULL);
}

::app::Uno::Float2 BasicBoundedRegion2D__CalcOver(BasicBoundedRegion2D* __this, ::app::Uno::Float2 sp)
{
    ::app::Uno::Float2 min = __this->MinPosition();
    ::app::Uno::Float2 max = __this->MaxPosition();
    ::app::Uno::Float2 over = ::app::Uno::Float2__New_1(NULL, 0.0f);

    if (sp.X < min.X)
    {
        over.X = sp.X - min.X;
    }
    else if (sp.X > max.X)
    {
        over.X = sp.X - max.X;
    }

    if (sp.Y < min.Y)
    {
        over.Y = sp.Y - min.Y;
    }
    else if (sp.Y > max.Y)
    {
        over.Y = sp.Y - max.Y;
    }

    return over;
}

BasicBoundedRegion2D* BasicBoundedRegion2D__CreatePoints(::uStatic* __this)
{
    BasicBoundedRegion2D* region = BasicBoundedRegion2D__New_1(NULL);
    ::app::Experimental::Physics::ElasticForce__float2* dest = ::app::Experimental::Physics::ElasticForce__float2__CreatePoints(NULL);
    ::uPtr< BasicBoundedRegion2D*>(region)->_destination = (::uObject*)dest;
    return region;
}

void BasicBoundedRegion2D__EndUser(BasicBoundedRegion2D* __this, ::app::Uno::Float2 velocity)
{
    __this->_velocity = velocity;
    __this->_moveMode = 2;
}

::app::Uno::Float2 BasicBoundedRegion2D__get_Destination(BasicBoundedRegion2D* __this)
{
    return ::app::Experimental::Physics::DestinationSimulation__float2::Destination(::uPtr< ::uObject*>(__this->_destination));
}

bool BasicBoundedRegion2D__get_IsStatic(BasicBoundedRegion2D* __this)
{
    return __this->_moveMode == 0;
}

bool BasicBoundedRegion2D__get_IsUser(BasicBoundedRegion2D* __this)
{
    return __this->_moveMode == 1;
}

::app::Uno::Float2 BasicBoundedRegion2D__get_MaxPosition(BasicBoundedRegion2D* __this)
{
    return __this->_MaxPosition;
}

::app::Uno::Float2 BasicBoundedRegion2D__get_MinPosition(BasicBoundedRegion2D* __this)
{
    return __this->_MinPosition;
}

::app::Uno::Float2 BasicBoundedRegion2D__get_OverflowExtent(BasicBoundedRegion2D* __this)
{
    return __this->_snapLimit;
}

::app::Uno::Float2 BasicBoundedRegion2D__get_Position(BasicBoundedRegion2D* __this)
{
    return __this->_Position;
}

::app::Uno::Float2 BasicBoundedRegion2D__get_Velocity(BasicBoundedRegion2D* __this)
{
    return __this->_velocity;
}

void BasicBoundedRegion2D__MoveDestination(BasicBoundedRegion2D* __this, double elapsed)
{
    ::app::Experimental::Physics::Simulation::Update(::uPtr< ::uObject*>(__this->_destination), elapsed);

    if (::app::Experimental::Physics::Simulation::IsStatic(::uPtr< ::uObject*>(__this->_destination)))
    {
        __this->_moveMode = 0;
    }

    __this->Velocity(::app::Experimental::Physics::MotionSimulation__float2::Velocity(::uPtr< ::uObject*>(__this->_destination)));
    __this->Position(::app::Experimental::Physics::MotionSimulation__float2::Position(::uPtr< ::uObject*>(__this->_destination)));
}

void BasicBoundedRegion2D__MoveFriction(BasicBoundedRegion2D* __this, double elapsed)
{
    ::uPtr< ::app::Experimental::Physics::Friction__float2*>(__this->_friction)->Velocity(__this->SnapValue(__this->Position(), __this->_velocity));
    ::uPtr< ::app::Experimental::Physics::Friction__float2*>(__this->_friction)->Position(__this->Position());
    ::uPtr< ::app::Experimental::Physics::Friction__float2*>(__this->_friction)->Update(elapsed);

    if (::uPtr< ::app::Experimental::Physics::Friction__float2*>(__this->_friction)->IsStatic())
    {
        __this->_moveMode = 3;
        return;
    }

    __this->_velocity = ::uPtr< ::app::Experimental::Physics::Friction__float2*>(__this->_friction)->Velocity();
    __this->Position(::uPtr< ::app::Experimental::Physics::Friction__float2*>(__this->_friction)->Position());
    __this->MoveSnap(elapsed, ::app::Uno::Math__Abs_1(NULL, __this->_velocity.X) < 1e-05f, ::app::Uno::Math__Abs_1(NULL, __this->_velocity.Y) < 1e-05f);
}

bool BasicBoundedRegion2D__MoveSnap(BasicBoundedRegion2D* __this, double elapsed, bool X, bool Y)
{
    ::app::Uno::Float2 over = __this->CalcOver(__this->Position());
    float off = ::app::Uno::Vector__Length(NULL, over);

    if (off <= 0.0f)
    {
        return true;
    }

    ::app::Experimental::Physics::MotionSimulation__float2::Position(::uPtr< ::uObject*>(__this->_snap), __this->Position());
    ::app::Experimental::Physics::MotionSimulation__float2::Velocity(::uPtr< ::uObject*>(__this->_snap), __this->Velocity());
    ::app::Experimental::Physics::DestinationSimulation__float2::Destination(::uPtr< ::uObject*>(__this->_snap), ::app::Uno::Float2__op_Subtraction_2(NULL, __this->Position(), over));
    ::app::Experimental::Physics::Simulation::Update(::uPtr< ::uObject*>(__this->_snap), elapsed);
    __this->Position(::app::Experimental::Physics::MotionSimulation__float2::Position(::uPtr< ::uObject*>(__this->_snap)));
    ::app::Uno::Float2 nv = __this->Velocity();
    ::app::Uno::Float2 np = __this->Position();

    if (X)
    {
        nv.X = ::app::Experimental::Physics::MotionSimulation__float2::Velocity(::uPtr< ::uObject*>(__this->_snap)).X;
        np.X = ::app::Experimental::Physics::MotionSimulation__float2::Position(::uPtr< ::uObject*>(__this->_snap)).X;
    }

    if (Y)
    {
        nv.Y = ::app::Experimental::Physics::MotionSimulation__float2::Velocity(::uPtr< ::uObject*>(__this->_snap)).Y;
        np.Y = ::app::Experimental::Physics::MotionSimulation__float2::Position(::uPtr< ::uObject*>(__this->_snap)).Y;
    }

    __this->Velocity(nv);
    __this->Position(np);
    return ::app::Experimental::Physics::Simulation::IsStatic(::uPtr< ::uObject*>(__this->_snap));
}

void BasicBoundedRegion2D__MoveTo(BasicBoundedRegion2D* __this, ::app::Uno::Float2 target)
{
    ::app::Experimental::Physics::DestinationSimulation__float2::Destination(::uPtr< ::uObject*>(__this->_destination), ::app::Uno::Math__Clamp_3(NULL, target, __this->MinPosition(), __this->MaxPosition()));
    ::app::Experimental::Physics::MotionSimulation__float2::Position(::uPtr< ::uObject*>(__this->_destination), __this->Position());
    ::app::Experimental::Physics::MotionSimulation__float2::Velocity(::uPtr< ::uObject*>(__this->_destination), __this->Velocity());
    __this->_moveMode = 4;
}

BasicBoundedRegion2D* BasicBoundedRegion2D__New_1(::uStatic* __this)
{
    BasicBoundedRegion2D* inst = (BasicBoundedRegion2D*)::uAllocObject(sizeof(BasicBoundedRegion2D), BasicBoundedRegion2D__typeof());
    inst->_ObjInit();
    return inst;
}

float BasicBoundedRegion2D__QuadraticInOut(::uStatic* __this, float k)
{
    if ((k = k * 2.0f) < 1.0f)
    {
        return (0.5f * k) * k;
    }

    k = k - 1.0f;
    return -0.5f * ((k * (k - 2.0f)) - 1.0f);
}

void BasicBoundedRegion2D__set_MaxPosition(BasicBoundedRegion2D* __this, ::app::Uno::Float2 value)
{
    __this->_MaxPosition = value;
}

void BasicBoundedRegion2D__set_MinPosition(BasicBoundedRegion2D* __this, ::app::Uno::Float2 value)
{
    __this->_MinPosition = value;
}

void BasicBoundedRegion2D__set_OverflowExtent(BasicBoundedRegion2D* __this, ::app::Uno::Float2 value)
{
    __this->_snapLimit = value;
}

void BasicBoundedRegion2D__set_Position(BasicBoundedRegion2D* __this, ::app::Uno::Float2 value)
{
    __this->_Position = value;
}

void BasicBoundedRegion2D__set_Velocity(BasicBoundedRegion2D* __this, ::app::Uno::Float2 value)
{
    __this->_velocity = value;

    if (__this->_moveMode == 0)
    {
        __this->_moveMode = 2;
    }
}

::app::Uno::Float2 BasicBoundedRegion2D__SnapValue(BasicBoundedRegion2D* __this, ::app::Uno::Float2 p, ::app::Uno::Float2 v)
{
    ::app::Uno::Float2 over = __this->CalcOver(p);

    if ((::app::Uno::Math__Abs_1(NULL, over.X) + ::app::Uno::Math__Abs_1(NULL, over.Y)) > 1e-05f)
    {
        ::app::Uno::Float2 f = ::app::Uno::Math__Clamp_3(NULL, ::app::Uno::Float2__op_Subtraction_2(NULL, ::app::Uno::Float2__New_1(NULL, 1.0f), ::app::Uno::Float2__op_Division_2(NULL, ::app::Uno::Math__Abs_2(NULL, over), __this->_snapLimit)), ::app::Uno::Float2__New_1(NULL, 0.0f), ::app::Uno::Float2__New_1(NULL, 1.0f));
        v = ::app::Uno::Float2__op_Multiply_2(NULL, v, f);
    }

    return v;
}

void BasicBoundedRegion2D__StartUser(BasicBoundedRegion2D* __this)
{
    __this->_moveMode = 1;
}

void BasicBoundedRegion2D__StepUser(BasicBoundedRegion2D* __this, ::app::Uno::Float2 offset)
{
    offset = __this->SnapValue(::app::Uno::Float2__op_Addition_2(NULL, offset, __this->Position()), offset);
    __this->Position(::app::Uno::Float2__op_Addition_2(NULL, __this->Position(), offset));
}

void BasicBoundedRegion2D__Update(BasicBoundedRegion2D* __this, double elapsed)
{
    switch (__this->_moveMode)
    {
        case 0:
        case 1:
        {
            return;
        }
        case 2:
        {
            __this->MoveFriction(elapsed);
            break;
        }
        case 3:
        {
            if (__this->MoveSnap(elapsed, true, true))
            {
                __this->_moveMode = 0;
            }

            break;
        }
        case 4:
        {
            __this->MoveDestination(elapsed);
            break;
        }
    }
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\Experimental.Physics\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

::uEnumType* BasicBoundedRegion2D_MoveMode__typeof()
{
    static ::uStaticStrong< ::uEnumType*> type;
    if (type != NULL) return type;

    type = ::uAllocEnumType("Experimental.Physics.BasicBoundedRegion2D.MoveMode", ::app::Uno::Int__typeof(), 5);

    type->SetLiterals(
        "Stop", 0LL,
        "User", 1LL,
        "Friction", 2LL,
        "Snap", 3LL,
        "Destination", 4LL);

    return type;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\Experimental.Physics\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

::uInterfaceType* BoundedRegion2D__typeof()
{
    static ::uStaticStrong< ::uInterfaceType*> type;
    if (type != NULL) return type;

    type = ::uAllocInterfaceType("Experimental.Physics.BoundedRegion2D");

    ::uRegisterType(type);
    return type;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\Experimental.Physics\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

::uInterfaceType* DestinationSimulation__float__typeof()
{
    static ::uStaticStrong< ::uInterfaceType*> type;
    if (type != NULL) return type;

    type = ::uAllocInterfaceType("Experimental.Physics.DestinationSimulation<float>");

    ::uRegisterType(type);
    return type;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\Experimental.Physics\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

::uInterfaceType* DestinationSimulation__float2__typeof()
{
    static ::uStaticStrong< ::uInterfaceType*> type;
    if (type != NULL) return type;

    type = ::uAllocInterfaceType("Experimental.Physics.DestinationSimulation<float2>");

    ::uRegisterType(type);
    return type;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\Experimental.Physics\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

::uInterfaceType* DestinationSimulation__float4__typeof()
{
    static ::uStaticStrong< ::uInterfaceType*> type;
    if (type != NULL) return type;

    type = ::uAllocInterfaceType("Experimental.Physics.DestinationSimulation<float4>");

    ::uRegisterType(type);
    return type;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\Experimental.Physics\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

::uInterfaceType* MotionSimulation__float__typeof()
{
    static ::uStaticStrong< ::uInterfaceType*> type;
    if (type != NULL) return type;

    type = ::uAllocInterfaceType("Experimental.Physics.MotionSimulation<float>");

    ::uRegisterType(type);
    return type;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\Experimental.Physics\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

::uInterfaceType* MotionSimulation__float2__typeof()
{
    static ::uStaticStrong< ::uInterfaceType*> type;
    if (type != NULL) return type;

    type = ::uAllocInterfaceType("Experimental.Physics.MotionSimulation<float2>");

    ::uRegisterType(type);
    return type;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\Experimental.Physics\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

::uInterfaceType* MotionSimulation__float4__typeof()
{
    static ::uStaticStrong< ::uInterfaceType*> type;
    if (type != NULL) return type;

    type = ::uAllocInterfaceType("Experimental.Physics.MotionSimulation<float4>");

    ::uRegisterType(type);
    return type;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\Experimental.Physics\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

::uInterfaceType* Simulation__typeof()
{
    static ::uStaticStrong< ::uInterfaceType*> type;
    if (type != NULL) return type;

    type = ::uAllocInterfaceType("Experimental.Physics.Simulation");

    ::uRegisterType(type);
    return type;
}

}}}
