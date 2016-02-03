// This file was generated based on '(multiple files)'.
// WARNING: Changes might be lost if you edit this file directly.

#include <Experimental.Physics.BasicBoundedRegion2D.h>
#include <Experimental.Physics.BasicBoundedRegion2D.MoveMode.h>
#include <Experimental.Physics.BoundedRegion2D.h>
#include <Experimental.Physics.DestinationSimulation-1.h>
#include <Experimental.Physics.DestinationSimulationFactory-1.h>
#include <Experimental.Physics.DestinationSimulationType.h>
#include <Experimental.Physics.ElasticForce-1.h>
#include <Experimental.Physics.Friction-1.h>
#include <Experimental.Physics.MotionSimulation-1.h>
#include <Experimental.Physics.PointerVelocity-1.h>
#include <Experimental.Physics.Simulation.h>
#include <Experimental.Physics.SmoothSnap-1.h>
#include <Fuse.Internal.Blender-1.h>
#include <Fuse.Internal.BlenderMap.h>
#include <Fuse.Internal.Statistics.h>
#include <Uno.Bool.h>
#include <Uno.Double.h>
#include <Uno.Exception.h>
#include <Uno.Float.h>
#include <Uno.Int.h>
#include <Uno.Math.h>
#include <Uno.Object.h>
#include <Uno.String.h>
#include <Uno.Vector.h>
static uString* STRINGS[1];
static uType* TYPES[16];

namespace g{
namespace Experimental{
namespace Physics{

// C:\ProgramData\Uno\Packages\Experimental.Physics\0.18.8\$.uno(23)
// -----------------------------------------------------------------

// public sealed class BasicBoundedRegion2D :23
// {
BasicBoundedRegion2D_type* BasicBoundedRegion2D_typeof()
{
    static uSStrong<BasicBoundedRegion2D_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 9;
    options.InterfaceCount = 3;
    options.ObjectSize = sizeof(BasicBoundedRegion2D);
    options.TypeSize = sizeof(BasicBoundedRegion2D_type);
    type = (BasicBoundedRegion2D_type*)uClassType::New("Experimental.Physics.BasicBoundedRegion2D", options);
    type->fp_ctor_ = (void*)BasicBoundedRegion2D__New1_fn;
    type->interface0.fp_StartUser = (void(*)(uObject*))BasicBoundedRegion2D__StartUser_fn;
    type->interface0.fp_StepUser = (void(*)(uObject*, ::g::Uno::Float2*))BasicBoundedRegion2D__StepUser_fn;
    type->interface0.fp_EndUser = (void(*)(uObject*, ::g::Uno::Float2*))BasicBoundedRegion2D__EndUser_fn;
    type->interface0.fp_MoveTo = (void(*)(uObject*, ::g::Uno::Float2*))BasicBoundedRegion2D__MoveTo_fn;
    type->interface0.fp_get_MaxPosition = (void(*)(uObject*, ::g::Uno::Float2*))BasicBoundedRegion2D__get_MaxPosition_fn;
    type->interface0.fp_set_MaxPosition = (void(*)(uObject*, ::g::Uno::Float2*))BasicBoundedRegion2D__set_MaxPosition_fn;
    type->interface0.fp_get_MinPosition = (void(*)(uObject*, ::g::Uno::Float2*))BasicBoundedRegion2D__get_MinPosition_fn;
    type->interface0.fp_set_MinPosition = (void(*)(uObject*, ::g::Uno::Float2*))BasicBoundedRegion2D__set_MinPosition_fn;
    type->interface0.fp_get_OverflowExtent = (void(*)(uObject*, ::g::Uno::Float2*))BasicBoundedRegion2D__get_OverflowExtent_fn;
    type->interface0.fp_set_OverflowExtent = (void(*)(uObject*, ::g::Uno::Float2*))BasicBoundedRegion2D__set_OverflowExtent_fn;
    type->interface0.fp_get_IsUser = (void(*)(uObject*, bool*))BasicBoundedRegion2D__get_IsUser_fn;
    type->interface1.fp_get_Position = (void(*)(uObject*, uTRef))BasicBoundedRegion2D__get_Position_fn;
    type->interface1.fp_set_Position = (void(*)(uObject*, void*))BasicBoundedRegion2D__set_Position_fn;
    type->interface1.fp_get_Velocity = (void(*)(uObject*, uTRef))BasicBoundedRegion2D__get_Velocity_fn;
    type->interface1.fp_set_Velocity = (void(*)(uObject*, void*))BasicBoundedRegion2D__set_Velocity_fn;
    type->interface2.fp_Update = (void(*)(uObject*, double*))BasicBoundedRegion2D__Update_fn;
    type->interface2.fp_get_IsStatic = (void(*)(uObject*, bool*))BasicBoundedRegion2D__get_IsStatic_fn;
    ::TYPES[0] = ::g::Experimental::Physics::Friction_typeof()->MakeType(::g::Uno::Float2_typeof());
    ::TYPES[1] = ::g::Experimental::Physics::DestinationSimulation_typeof()->MakeType(::g::Uno::Float2_typeof());
    ::TYPES[2] = ::g::Experimental::Physics::SmoothSnap_typeof()->MakeType(::g::Uno::Float2_typeof());
    ::TYPES[3] = ::g::Uno::Float2_typeof();
    ::TYPES[4] = ::g::Experimental::Physics::ElasticForce_typeof()->MakeType(::g::Uno::Float2_typeof());
    ::TYPES[5] = ::g::Experimental::Physics::Simulation_typeof();
    ::TYPES[6] = ::g::Experimental::Physics::MotionSimulation_typeof()->MakeType(::g::Uno::Float2_typeof());
    ::TYPES[7] = ::g::Uno::Int_typeof();
    type->SetInterfaces(
        ::g::Experimental::Physics::BoundedRegion2D_typeof(), offsetof(BasicBoundedRegion2D_type, interface0),
        ::g::Experimental::Physics::MotionSimulation_typeof()->MakeType(::g::Uno::Float2_typeof()), offsetof(BasicBoundedRegion2D_type, interface1),
        ::g::Experimental::Physics::Simulation_typeof(), offsetof(BasicBoundedRegion2D_type, interface2));
    type->SetFields(0,
        ::g::Experimental::Physics::DestinationSimulation_typeof()->MakeType(::g::Uno::Float2_typeof()), offsetof(::g::Experimental::Physics::BasicBoundedRegion2D, _destination), 0,
        ::g::Experimental::Physics::Friction_typeof()->MakeType(::g::Uno::Float2_typeof()), offsetof(::g::Experimental::Physics::BasicBoundedRegion2D, _friction), 0,
        BasicBoundedRegion2D__MoveMode_typeof(), offsetof(::g::Experimental::Physics::BasicBoundedRegion2D, _moveMode), 0,
        ::g::Experimental::Physics::DestinationSimulation_typeof()->MakeType(::g::Uno::Float2_typeof()), offsetof(::g::Experimental::Physics::BasicBoundedRegion2D, _snap), 0,
        ::g::Uno::Float2_typeof(), offsetof(::g::Experimental::Physics::BasicBoundedRegion2D, _snapLimit), 0,
        ::g::Uno::Float2_typeof(), offsetof(::g::Experimental::Physics::BasicBoundedRegion2D, _velocity), 0,
        ::g::Uno::Float2_typeof(), offsetof(::g::Experimental::Physics::BasicBoundedRegion2D, _MaxPosition), 0,
        ::g::Uno::Float2_typeof(), offsetof(::g::Experimental::Physics::BasicBoundedRegion2D, _MinPosition), 0,
        ::g::Uno::Float2_typeof(), offsetof(::g::Experimental::Physics::BasicBoundedRegion2D, _Position), 0);
    type->Reflection.SetFunctions(19,
        new uFunction("CreatePoints", NULL, (void*)BasicBoundedRegion2D__CreatePoints_fn, 0, true, BasicBoundedRegion2D_typeof(), 0),
        new uFunction("get_Destination", NULL, (void*)BasicBoundedRegion2D__get_Destination_fn, 0, false, ::g::Uno::Float2_typeof(), 0),
        new uFunction("EndUser", NULL, (void*)BasicBoundedRegion2D__EndUser_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::Float2_typeof()),
        new uFunction("get_IsStatic", NULL, (void*)BasicBoundedRegion2D__get_IsStatic_fn, 0, false, ::g::Uno::Bool_typeof(), 0),
        new uFunction("get_IsUser", NULL, (void*)BasicBoundedRegion2D__get_IsUser_fn, 0, false, ::g::Uno::Bool_typeof(), 0),
        new uFunction("get_MaxPosition", NULL, (void*)BasicBoundedRegion2D__get_MaxPosition_fn, 0, false, ::g::Uno::Float2_typeof(), 0),
        new uFunction("set_MaxPosition", NULL, (void*)BasicBoundedRegion2D__set_MaxPosition_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::Float2_typeof()),
        new uFunction("get_MinPosition", NULL, (void*)BasicBoundedRegion2D__get_MinPosition_fn, 0, false, ::g::Uno::Float2_typeof(), 0),
        new uFunction("set_MinPosition", NULL, (void*)BasicBoundedRegion2D__set_MinPosition_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::Float2_typeof()),
        new uFunction("MoveTo", NULL, (void*)BasicBoundedRegion2D__MoveTo_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::Float2_typeof()),
        new uFunction("get_OverflowExtent", NULL, (void*)BasicBoundedRegion2D__get_OverflowExtent_fn, 0, false, ::g::Uno::Float2_typeof(), 0),
        new uFunction("set_OverflowExtent", NULL, (void*)BasicBoundedRegion2D__set_OverflowExtent_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::Float2_typeof()),
        new uFunction("get_Position", NULL, (void*)BasicBoundedRegion2D__get_Position_fn, 0, false, ::g::Uno::Float2_typeof(), 0),
        new uFunction("set_Position", NULL, (void*)BasicBoundedRegion2D__set_Position_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::Float2_typeof()),
        new uFunction("StartUser", NULL, (void*)BasicBoundedRegion2D__StartUser_fn, 0, false, uVoid_typeof(), 0),
        new uFunction("StepUser", NULL, (void*)BasicBoundedRegion2D__StepUser_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::Float2_typeof()),
        new uFunction("Update", NULL, (void*)BasicBoundedRegion2D__Update_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::Double_typeof()),
        new uFunction("get_Velocity", NULL, (void*)BasicBoundedRegion2D__get_Velocity_fn, 0, false, ::g::Uno::Float2_typeof(), 0),
        new uFunction("set_Velocity", NULL, (void*)BasicBoundedRegion2D__set_Velocity_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::Float2_typeof()));
    return type;
}

// private BasicBoundedRegion2D() :33
void BasicBoundedRegion2D__ctor__fn(BasicBoundedRegion2D* __this)
{
    __this->ctor_();
}

// private float2 CalcOver(float2 sp) :223
void BasicBoundedRegion2D__CalcOver_fn(BasicBoundedRegion2D* __this, ::g::Uno::Float2* sp, ::g::Uno::Float2* __retval)
{
    *__retval = __this->CalcOver(*sp);
}

// public static Experimental.Physics.BasicBoundedRegion2D CreatePoints() :25
void BasicBoundedRegion2D__CreatePoints_fn(BasicBoundedRegion2D** __retval)
{
    *__retval = BasicBoundedRegion2D::CreatePoints();
}

// public float2 get_Destination() :92
void BasicBoundedRegion2D__get_Destination_fn(BasicBoundedRegion2D* __this, ::g::Uno::Float2* __retval)
{
    *__retval = __this->Destination();
}

// public void EndUser([float2 velocity]) :68
void BasicBoundedRegion2D__EndUser_fn(BasicBoundedRegion2D* __this, ::g::Uno::Float2* velocity)
{
    __this->EndUser(*velocity);
}

// public bool get_IsStatic() :97
void BasicBoundedRegion2D__get_IsStatic_fn(BasicBoundedRegion2D* __this, bool* __retval)
{
    *__retval = __this->IsStatic();
}

// public bool get_IsUser() :76
void BasicBoundedRegion2D__get_IsUser_fn(BasicBoundedRegion2D* __this, bool* __retval)
{
    *__retval = __this->IsUser();
}

// public generated float2 get_MaxPosition() :47
void BasicBoundedRegion2D__get_MaxPosition_fn(BasicBoundedRegion2D* __this, ::g::Uno::Float2* __retval)
{
    *__retval = __this->MaxPosition();
}

// public generated void set_MaxPosition(float2 value) :47
void BasicBoundedRegion2D__set_MaxPosition_fn(BasicBoundedRegion2D* __this, ::g::Uno::Float2* value)
{
    __this->MaxPosition(*value);
}

// public generated float2 get_MinPosition() :48
void BasicBoundedRegion2D__get_MinPosition_fn(BasicBoundedRegion2D* __this, ::g::Uno::Float2* __retval)
{
    *__retval = __this->MinPosition();
}

// public generated void set_MinPosition(float2 value) :48
void BasicBoundedRegion2D__set_MinPosition_fn(BasicBoundedRegion2D* __this, ::g::Uno::Float2* value)
{
    __this->MinPosition(*value);
}

// private void MoveDestination(double elapsed) :203
void BasicBoundedRegion2D__MoveDestination_fn(BasicBoundedRegion2D* __this, double* elapsed)
{
    __this->MoveDestination(*elapsed);
}

// private void MoveFriction(double elapsed) :136
void BasicBoundedRegion2D__MoveFriction_fn(BasicBoundedRegion2D* __this, double* elapsed)
{
    __this->MoveFriction(*elapsed);
}

// private bool MoveSnap(double elapsed, [bool X], [bool Y]) :169
void BasicBoundedRegion2D__MoveSnap_fn(BasicBoundedRegion2D* __this, double* elapsed, bool* X, bool* Y, bool* __retval)
{
    *__retval = __this->MoveSnap(*elapsed, *X, *Y);
}

// public void MoveTo(float2 target) :82
void BasicBoundedRegion2D__MoveTo_fn(BasicBoundedRegion2D* __this, ::g::Uno::Float2* target)
{
    __this->MoveTo(*target);
}

// private BasicBoundedRegion2D New() :33
void BasicBoundedRegion2D__New1_fn(BasicBoundedRegion2D** __retval)
{
    *__retval = BasicBoundedRegion2D::New1();
}

// public float2 get_OverflowExtent() :53
void BasicBoundedRegion2D__get_OverflowExtent_fn(BasicBoundedRegion2D* __this, ::g::Uno::Float2* __retval)
{
    *__retval = __this->OverflowExtent();
}

// public void set_OverflowExtent(float2 value) :54
void BasicBoundedRegion2D__set_OverflowExtent_fn(BasicBoundedRegion2D* __this, ::g::Uno::Float2* value)
{
    __this->OverflowExtent(*value);
}

// public generated float2 get_Position() :79
void BasicBoundedRegion2D__get_Position_fn(BasicBoundedRegion2D* __this, ::g::Uno::Float2* __retval)
{
    *__retval = __this->Position();
}

// public generated void set_Position(float2 value) :79
void BasicBoundedRegion2D__set_Position_fn(BasicBoundedRegion2D* __this, ::g::Uno::Float2* value)
{
    __this->Position(*value);
}

// private float2 SnapValue(float2 p, float2 v) :157
void BasicBoundedRegion2D__SnapValue_fn(BasicBoundedRegion2D* __this, ::g::Uno::Float2* p, ::g::Uno::Float2* v, ::g::Uno::Float2* __retval)
{
    *__retval = __this->SnapValue(*p, *v);
}

// public void StartUser() :57
void BasicBoundedRegion2D__StartUser_fn(BasicBoundedRegion2D* __this)
{
    __this->StartUser();
}

// public void StepUser(float2 offset) :62
void BasicBoundedRegion2D__StepUser_fn(BasicBoundedRegion2D* __this, ::g::Uno::Float2* offset)
{
    __this->StepUser(*offset);
}

// public void Update(double elapsed) :100
void BasicBoundedRegion2D__Update_fn(BasicBoundedRegion2D* __this, double* elapsed)
{
    __this->Update(*elapsed);
}

// public float2 get_Velocity() :126
void BasicBoundedRegion2D__get_Velocity_fn(BasicBoundedRegion2D* __this, ::g::Uno::Float2* __retval)
{
    *__retval = __this->Velocity();
}

// public void set_Velocity(float2 value) :127
void BasicBoundedRegion2D__set_Velocity_fn(BasicBoundedRegion2D* __this, ::g::Uno::Float2* value)
{
    __this->Velocity(*value);
}

// private BasicBoundedRegion2D() [instance] :33
void BasicBoundedRegion2D::ctor_()
{
    _snapLimit = ::g::Uno::Float2__New1(150.0f);
    _friction = ((::g::Experimental::Physics::Friction*)::g::Experimental::Physics::Friction::CreatePoints(::TYPES[0/*Experimental.Physics.Friction<float2>*/]));
    _snap = (uObject*)((::g::Experimental::Physics::SmoothSnap*)::g::Experimental::Physics::SmoothSnap::CreatePoints(::TYPES[2/*Experimental.Physics.SmoothSnap<float2>*/]));
}

// private float2 CalcOver(float2 sp) [instance] :223
::g::Uno::Float2 BasicBoundedRegion2D::CalcOver(::g::Uno::Float2 sp)
{
    ::g::Uno::Float2 min = MinPosition();
    ::g::Uno::Float2 max = MaxPosition();
    ::g::Uno::Float2 over = ::g::Uno::Float2__New1(0.0f);

    if (sp.X < min.X)
        over.X = (sp.X - min.X);
    else if (sp.X > max.X)
        over.X = (sp.X - max.X);

    if (sp.Y < min.Y)
        over.Y = (sp.Y - min.Y);
    else if (sp.Y > max.Y)
        over.Y = (sp.Y - max.Y);

    return over;
}

// public float2 get_Destination() [instance] :92
::g::Uno::Float2 BasicBoundedRegion2D::Destination()
{
    ::g::Uno::Float2 ret11;
    return (::g::Experimental::Physics::DestinationSimulation::get_Destination_ex(uInterface(uPtr(_destination), ::TYPES[1/*Experimental.Physics.DestinationSimulation<float2>*/]), &ret11), ret11);
}

// public void EndUser([float2 velocity]) [instance] :68
void BasicBoundedRegion2D::EndUser(::g::Uno::Float2 velocity)
{
    _velocity = velocity;
    _moveMode = 2;
}

// public bool get_IsStatic() [instance] :97
bool BasicBoundedRegion2D::IsStatic()
{
    return _moveMode == 0;
}

// public bool get_IsUser() [instance] :76
bool BasicBoundedRegion2D::IsUser()
{
    return _moveMode == 1;
}

// public generated float2 get_MaxPosition() [instance] :47
::g::Uno::Float2 BasicBoundedRegion2D::MaxPosition()
{
    return _MaxPosition;
}

// public generated void set_MaxPosition(float2 value) [instance] :47
void BasicBoundedRegion2D::MaxPosition(::g::Uno::Float2 value)
{
    _MaxPosition = value;
}

// public generated float2 get_MinPosition() [instance] :48
::g::Uno::Float2 BasicBoundedRegion2D::MinPosition()
{
    return _MinPosition;
}

// public generated void set_MinPosition(float2 value) [instance] :48
void BasicBoundedRegion2D::MinPosition(::g::Uno::Float2 value)
{
    _MinPosition = value;
}

// private void MoveDestination(double elapsed) [instance] :203
void BasicBoundedRegion2D::MoveDestination(double elapsed)
{
    ::g::Uno::Float2 ret2;
    ::g::Uno::Float2 ret3;
    ::g::Experimental::Physics::Simulation::Update(uInterface(uPtr(_destination), ::TYPES[5/*Experimental.Physics.Simulation*/]), elapsed);

    if (::g::Experimental::Physics::Simulation::IsStatic(uInterface(uPtr(_destination), ::TYPES[5/*Experimental.Physics.Simulation*/])))
        _moveMode = 0;

    Velocity((::g::Experimental::Physics::MotionSimulation::get_Velocity_ex(uInterface(uPtr(_destination), ::TYPES[6/*Experimental.Physics.MotionSimulation<float2>*/]), &ret2), ret2));
    Position((::g::Experimental::Physics::MotionSimulation::get_Position_ex(uInterface(uPtr(_destination), ::TYPES[6/*Experimental.Physics.MotionSimulation<float2>*/]), &ret3), ret3));
}

// private void MoveFriction(double elapsed) [instance] :136
void BasicBoundedRegion2D::MoveFriction(double elapsed)
{
    ::g::Uno::Float2 ret4;
    ::g::Uno::Float2 ret5;
    ::g::Experimental::Physics::Friction__set_Velocity_fn(uPtr(_friction), uCRef(SnapValue(Position(), _velocity)));
    ::g::Experimental::Physics::Friction__set_Position_fn(uPtr(_friction), uCRef(Position()));
    uPtr(_friction)->Update(elapsed);

    if (uPtr(_friction)->IsStatic())
    {
        _moveMode = 3;
        return;
    }

    _velocity = (::g::Experimental::Physics::Friction__get_Velocity_fn(uPtr(_friction), &ret4), ret4);
    Position((::g::Experimental::Physics::Friction__get_Position_fn(uPtr(_friction), &ret5), ret5));
    MoveSnap(elapsed, ::g::Uno::Math::Abs1(_velocity.X) < 1e-05f, ::g::Uno::Math::Abs1(_velocity.Y) < 1e-05f);
}

// private bool MoveSnap(double elapsed, [bool X], [bool Y]) [instance] :169
bool BasicBoundedRegion2D::MoveSnap(double elapsed, bool X, bool Y)
{
    ::g::Uno::Float2 ret6;
    ::g::Uno::Float2 ret7;
    ::g::Uno::Float2 ret8;
    ::g::Uno::Float2 ret9;
    ::g::Uno::Float2 ret10;
    ::g::Uno::Float2 over = CalcOver(Position());
    float off = ::g::Uno::Vector::Length(over);

    if (off <= 0.0f)
        return true;

    ::g::Experimental::Physics::MotionSimulation::set_Position_ex(uInterface(uPtr(_snap), ::TYPES[6/*Experimental.Physics.MotionSimulation<float2>*/]), uCRef(Position()));
    ::g::Experimental::Physics::MotionSimulation::set_Velocity_ex(uInterface(uPtr(_snap), ::TYPES[6/*Experimental.Physics.MotionSimulation<float2>*/]), uCRef(Velocity()));
    ::g::Experimental::Physics::DestinationSimulation::set_Destination_ex(uInterface(uPtr(_snap), ::TYPES[1/*Experimental.Physics.DestinationSimulation<float2>*/]), uCRef(::g::Uno::Float2__op_Subtraction2(Position(), over)));
    ::g::Experimental::Physics::Simulation::Update(uInterface(uPtr(_snap), ::TYPES[5/*Experimental.Physics.Simulation*/]), elapsed);
    Position((::g::Experimental::Physics::MotionSimulation::get_Position_ex(uInterface(uPtr(_snap), ::TYPES[6/*Experimental.Physics.MotionSimulation<float2>*/]), &ret6), ret6));
    ::g::Uno::Float2 nv = Velocity();
    ::g::Uno::Float2 np = Position();

    if (X)
    {
        nv.X = (::g::Experimental::Physics::MotionSimulation::get_Velocity_ex(uInterface(uPtr(_snap), ::TYPES[6/*Experimental.Physics.MotionSimulation<float2>*/]), &ret7), ret7).X;
        np.X = (::g::Experimental::Physics::MotionSimulation::get_Position_ex(uInterface(uPtr(_snap), ::TYPES[6/*Experimental.Physics.MotionSimulation<float2>*/]), &ret8), ret8).X;
    }

    if (Y)
    {
        nv.Y = (::g::Experimental::Physics::MotionSimulation::get_Velocity_ex(uInterface(uPtr(_snap), ::TYPES[6/*Experimental.Physics.MotionSimulation<float2>*/]), &ret9), ret9).Y;
        np.Y = (::g::Experimental::Physics::MotionSimulation::get_Position_ex(uInterface(uPtr(_snap), ::TYPES[6/*Experimental.Physics.MotionSimulation<float2>*/]), &ret10), ret10).Y;
    }

    Velocity(nv);
    Position(np);
    return ::g::Experimental::Physics::Simulation::IsStatic(uInterface(uPtr(_snap), ::TYPES[5/*Experimental.Physics.Simulation*/]));
}

// public void MoveTo(float2 target) [instance] :82
void BasicBoundedRegion2D::MoveTo(::g::Uno::Float2 target)
{
    ::g::Experimental::Physics::DestinationSimulation::set_Destination_ex(uInterface(uPtr(_destination), ::TYPES[1/*Experimental.Physics.DestinationSimulation<float2>*/]), uCRef(::g::Uno::Math::Clamp3(target, MinPosition(), MaxPosition())));
    ::g::Experimental::Physics::MotionSimulation::set_Position_ex(uInterface(uPtr(_destination), ::TYPES[6/*Experimental.Physics.MotionSimulation<float2>*/]), uCRef(Position()));
    ::g::Experimental::Physics::MotionSimulation::set_Velocity_ex(uInterface(uPtr(_destination), ::TYPES[6/*Experimental.Physics.MotionSimulation<float2>*/]), uCRef(Velocity()));
    _moveMode = 4;
}

// public float2 get_OverflowExtent() [instance] :53
::g::Uno::Float2 BasicBoundedRegion2D::OverflowExtent()
{
    return _snapLimit;
}

// public void set_OverflowExtent(float2 value) [instance] :54
void BasicBoundedRegion2D::OverflowExtent(::g::Uno::Float2 value)
{
    _snapLimit = value;
}

// public generated float2 get_Position() [instance] :79
::g::Uno::Float2 BasicBoundedRegion2D::Position()
{
    return _Position;
}

// public generated void set_Position(float2 value) [instance] :79
void BasicBoundedRegion2D::Position(::g::Uno::Float2 value)
{
    _Position = value;
}

// private float2 SnapValue(float2 p, float2 v) [instance] :157
::g::Uno::Float2 BasicBoundedRegion2D::SnapValue(::g::Uno::Float2 p, ::g::Uno::Float2 v)
{
    ::g::Uno::Float2 over = CalcOver(p);

    if ((::g::Uno::Math::Abs1(over.X) + ::g::Uno::Math::Abs1(over.Y)) > 1e-05f)
    {
        ::g::Uno::Float2 f = ::g::Uno::Math::Clamp3(::g::Uno::Float2__op_Subtraction2(::g::Uno::Float2__New1(1.0f), ::g::Uno::Float2__op_Division2(::g::Uno::Math::Abs2(over), _snapLimit)), ::g::Uno::Float2__New1(0.0f), ::g::Uno::Float2__New1(1.0f));
        v = ::g::Uno::Float2__op_Multiply2(v, f);
    }

    return v;
}

// public void StartUser() [instance] :57
void BasicBoundedRegion2D::StartUser()
{
    _moveMode = 1;
}

// public void StepUser(float2 offset) [instance] :62
void BasicBoundedRegion2D::StepUser(::g::Uno::Float2 offset)
{
    offset = SnapValue(::g::Uno::Float2__op_Addition2(offset, Position()), offset);
    Position(::g::Uno::Float2__op_Addition2(Position(), offset));
}

// public void Update(double elapsed) [instance] :100
void BasicBoundedRegion2D::Update(double elapsed)
{
    switch (_moveMode)
    {
        case 0:
        case 1:
            return;
        case 2:
        {
            MoveFriction(elapsed);
            break;
        }
        case 3:
        {
            if (MoveSnap(elapsed, true, true))
                _moveMode = 0;

            break;
        }
        case 4:
        {
            MoveDestination(elapsed);
            break;
        }
    }
}

// public float2 get_Velocity() [instance] :126
::g::Uno::Float2 BasicBoundedRegion2D::Velocity()
{
    return _velocity;
}

// public void set_Velocity(float2 value) [instance] :127
void BasicBoundedRegion2D::Velocity(::g::Uno::Float2 value)
{
    _velocity = value;

    if (_moveMode == 0)
        _moveMode = 2;
}

// public static Experimental.Physics.BasicBoundedRegion2D CreatePoints() [static] :25
BasicBoundedRegion2D* BasicBoundedRegion2D::CreatePoints()
{
    BasicBoundedRegion2D* region = BasicBoundedRegion2D::New1();
    ::g::Experimental::Physics::ElasticForce* dest = (::g::Experimental::Physics::ElasticForce*)::g::Experimental::Physics::ElasticForce::CreatePoints(::TYPES[4/*Experimental.Physics.ElasticForce<float2>*/]);
    region->_destination = (uObject*)dest;
    return region;
}

// private BasicBoundedRegion2D New() [static] :33
BasicBoundedRegion2D* BasicBoundedRegion2D::New1()
{
    BasicBoundedRegion2D* obj1 = (BasicBoundedRegion2D*)uNew(BasicBoundedRegion2D_typeof());
    obj1->ctor_();
    return obj1;
}
// }

// C:\ProgramData\Uno\Packages\Experimental.Physics\0.18.8\$.uno(8)
// ----------------------------------------------------------------

// public abstract interface BoundedRegion2D :8
// {
uInterfaceType* BoundedRegion2D_typeof()
{
    static uSStrong<uInterfaceType*> type;
    if (type != NULL) return type;

    type = uInterfaceType::New("Experimental.Physics.BoundedRegion2D", 0, 0);
    type->Reflection.SetFunctions(11,
        new uFunction("EndUser", NULL, NULL, offsetof(BoundedRegion2D, fp_EndUser), false, uVoid_typeof(), 1, ::g::Uno::Float2_typeof()),
        new uFunction("get_IsUser", NULL, NULL, offsetof(BoundedRegion2D, fp_get_IsUser), false, ::g::Uno::Bool_typeof(), 0),
        new uFunction("get_MaxPosition", NULL, NULL, offsetof(BoundedRegion2D, fp_get_MaxPosition), false, ::g::Uno::Float2_typeof(), 0),
        new uFunction("set_MaxPosition", NULL, NULL, offsetof(BoundedRegion2D, fp_set_MaxPosition), false, uVoid_typeof(), 1, ::g::Uno::Float2_typeof()),
        new uFunction("get_MinPosition", NULL, NULL, offsetof(BoundedRegion2D, fp_get_MinPosition), false, ::g::Uno::Float2_typeof(), 0),
        new uFunction("set_MinPosition", NULL, NULL, offsetof(BoundedRegion2D, fp_set_MinPosition), false, uVoid_typeof(), 1, ::g::Uno::Float2_typeof()),
        new uFunction("MoveTo", NULL, NULL, offsetof(BoundedRegion2D, fp_MoveTo), false, uVoid_typeof(), 1, ::g::Uno::Float2_typeof()),
        new uFunction("get_OverflowExtent", NULL, NULL, offsetof(BoundedRegion2D, fp_get_OverflowExtent), false, ::g::Uno::Float2_typeof(), 0),
        new uFunction("set_OverflowExtent", NULL, NULL, offsetof(BoundedRegion2D, fp_set_OverflowExtent), false, uVoid_typeof(), 1, ::g::Uno::Float2_typeof()),
        new uFunction("StartUser", NULL, NULL, offsetof(BoundedRegion2D, fp_StartUser), false, uVoid_typeof(), 0),
        new uFunction("StepUser", NULL, NULL, offsetof(BoundedRegion2D, fp_StepUser), false, uVoid_typeof(), 1, ::g::Uno::Float2_typeof()));
    return type;
}
// }

// C:\ProgramData\Uno\Packages\Experimental.Physics\0.18.8\$.uno(721)
// ------------------------------------------------------------------

// public abstract interface DestinationSimulation<T> :721
// {
uInterfaceType* DestinationSimulation_typeof()
{
    static uSStrong<uInterfaceType*> type;
    if (type != NULL) return type;

    type = uInterfaceType::New("Experimental.Physics.DestinationSimulation`1", 1, 0);
    type->Reflection.SetFunctions(3,
        new uFunction("get_Destination", NULL, NULL, offsetof(DestinationSimulation, fp_get_Destination), false, type->T(0), 0),
        new uFunction("set_Destination", NULL, NULL, offsetof(DestinationSimulation, fp_set_Destination), false, uVoid_typeof(), 1, type->T(0)),
        new uFunction("Reset", NULL, NULL, offsetof(DestinationSimulation, fp_Reset), false, uVoid_typeof(), 1, type->T(0)));
    return type;
}
// }

// C:\ProgramData\Uno\Packages\Experimental.Physics\0.18.8\$.uno(737)
// ------------------------------------------------------------------

// public static class DestinationSimulationFactory<T> :737
// {
uClassType* DestinationSimulationFactory_typeof()
{
    static uSStrong<uClassType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.GenericCount = 1;
    options.PrecalcCount = 3;
    options.TypeSize = sizeof(uClassType);
    type = uClassType::New("Experimental.Physics.DestinationSimulationFactory`1", options);
    ::STRINGS[0] = uString::Const("Invalid DestinationSimulationType parameter");
    ::TYPES[8] = ::g::Experimental::Physics::DestinationSimulation_typeof();
    ::TYPES[9] = ::g::Experimental::Physics::SmoothSnap_typeof();
    ::TYPES[10] = ::g::Experimental::Physics::ElasticForce_typeof();
    type->SetPrecalc(
        ::TYPES[8/*Experimental.Physics.DestinationSimulation`1*/]->MakeType(type->T(0)),
        ::TYPES[9/*Experimental.Physics.SmoothSnap`1*/]->MakeType(type->T(0)),
        ::TYPES[10/*Experimental.Physics.ElasticForce`1*/]->MakeType(type->T(0)));
    type->Reflection.SetFunctions(1,
        new uFunction("Create", type, (void*)DestinationSimulationFactory__Create_fn, 0, true, ::g::Experimental::Physics::DestinationSimulation_typeof()->MakeType(type->T(0)), 1, ::g::Experimental::Physics::DestinationSimulationType_typeof()));
    return type;
}

// public static Experimental.Physics.DestinationSimulation<T> Create(Experimental.Physics.DestinationSimulationType t) :739
void DestinationSimulationFactory__Create_fn(uType* __type, int* t, uObject** __retval)
{
    *__retval = DestinationSimulationFactory::Create(__type, *t);
}

// public static Experimental.Physics.DestinationSimulation<T> Create(Experimental.Physics.DestinationSimulationType t) [static] :739
uObject* DestinationSimulationFactory::Create(uType* __type, int t)
{
    uType* __types[] = {
        __type->Precalced(0/*Experimental.Physics.DestinationSimulation<T>*/),
        __type->T(0),
        __type->Precalced(1/*Experimental.Physics.SmoothSnap<T>*/),
        __type->Precalced(2/*Experimental.Physics.ElasticForce<T>*/),
    };

    switch (t)
    {
        case 0:
            return (uObject*)((::g::Experimental::Physics::SmoothSnap*)::g::Experimental::Physics::SmoothSnap::CreateNormalized(__types[2]));
        case 1:
            return (uObject*)((::g::Experimental::Physics::SmoothSnap*)::g::Experimental::Physics::SmoothSnap::CreatePoints(__types[2]));
        case 2:
            return (uObject*)((::g::Experimental::Physics::ElasticForce*)::g::Experimental::Physics::ElasticForce::CreatePoints(__types[3]));
        case 3:
            return (uObject*)((::g::Experimental::Physics::ElasticForce*)::g::Experimental::Physics::ElasticForce::CreateRadians(__types[3]));
        case 4:
            return (uObject*)((::g::Experimental::Physics::ElasticForce*)::g::Experimental::Physics::ElasticForce::CreateDegrees(__types[3]));
    }

    U_THROW(::g::Uno::Exception::New2(::STRINGS[0/*"Invalid Des...*/]));
}
// }

// C:\ProgramData\Uno\Packages\Experimental.Physics\0.18.8\$.uno(728)
// ------------------------------------------------------------------

// public enum DestinationSimulationType :728
uEnumType* DestinationSimulationType_typeof()
{
    static uSStrong<uEnumType*> type;
    if (type != NULL) return type;

    type = uEnumType::New("Experimental.Physics.DestinationSimulationType", ::g::Uno::Int_typeof(), 5);
    type->SetLiterals(
        "SmoothSnapNormalized", 0LL,
        "SmoothSnapPoints", 1LL,
        "ElasticForcePoints", 2LL,
        "ElasticForceRadians", 3LL,
        "ElasticForceDegrees", 4LL);
    return type;
}

// C:\ProgramData\Uno\Packages\Experimental.Physics\0.18.8\$.uno(250)
// ------------------------------------------------------------------

// public sealed class ElasticForce<T> :250
// {
ElasticForce_type* ElasticForce_typeof()
{
    static uSStrong<ElasticForce_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 15;
    options.GenericCount = 1;
    options.InterfaceCount = 3;
    options.PrecalcCount = 2;
    options.ObjectSize = sizeof(ElasticForce);
    options.TypeSize = sizeof(ElasticForce_type);
    type = (ElasticForce_type*)uClassType::New("Experimental.Physics.ElasticForce`1", options);
    type->interface0.fp_Reset = (void(*)(uObject*, void*))ElasticForce__Reset_fn;
    type->interface0.fp_get_Destination = (void(*)(uObject*, uTRef))ElasticForce__get_Destination_fn;
    type->interface0.fp_set_Destination = (void(*)(uObject*, void*))ElasticForce__set_Destination_fn;
    type->interface1.fp_get_Position = (void(*)(uObject*, uTRef))ElasticForce__get_Position_fn;
    type->interface1.fp_set_Position = (void(*)(uObject*, void*))ElasticForce__set_Position_fn;
    type->interface1.fp_get_Velocity = (void(*)(uObject*, uTRef))ElasticForce__get_Velocity_fn;
    type->interface1.fp_set_Velocity = (void(*)(uObject*, void*))ElasticForce__set_Velocity_fn;
    type->interface2.fp_Update = (void(*)(uObject*, double*))ElasticForce__Update_fn;
    type->interface2.fp_get_IsStatic = (void(*)(uObject*, bool*))ElasticForce__get_IsStatic_fn;
    ::TYPES[11] = ::g::Fuse::Internal::BlenderMap_typeof();
    ::TYPES[12] = ::g::Uno::Double_typeof();
    ::TYPES[13] = ::g::Uno::Float_typeof();
    ::TYPES[14] = ::g::Uno::Bool_typeof();
    ::TYPES[15] = ::g::Fuse::Internal::Blender_typeof();
    type->SetPrecalc(
        ::TYPES[11/*Fuse.Internal.BlenderMap*/]->MakeMethod(1, type->T(0)),
        ::TYPES[15/*Fuse.Internal.Blender`1*/]->MakeType(type->T(0)));
    type->SetInterfaces(
        ::g::Experimental::Physics::DestinationSimulation_typeof()->MakeType(type->T(0)), offsetof(ElasticForce_type, interface0),
        ::g::Experimental::Physics::MotionSimulation_typeof()->MakeType(type->T(0)), offsetof(ElasticForce_type, interface1),
        ::g::Experimental::Physics::Simulation_typeof(), offsetof(ElasticForce_type, interface2));
    type->SetFields(0,
        ::g::Uno::Float_typeof(), offsetof(::g::Experimental::Physics::ElasticForce, _attractionCurve), 0,
        type->T(0), (uintptr_t)0, uFieldFlagsConstrained,
        ::g::Uno::Float_typeof(), offsetof(::g::Experimental::Physics::ElasticForce, _attractionForce), 0,
        ::g::Fuse::Internal::Blender_typeof()->MakeType(type->T(0)), offsetof(::g::Experimental::Physics::ElasticForce, _blender), 0,
        ::g::Uno::Float_typeof(), offsetof(::g::Experimental::Physics::ElasticForce, _damping), 0,
        ::g::Uno::Float_typeof(), offsetof(::g::Experimental::Physics::ElasticForce, _energyEps), 0,
        ::g::Uno::Bool_typeof(), offsetof(::g::Experimental::Physics::ElasticForce, _hasMaxSpeed), 0,
        ::g::Uno::Bool_typeof(), offsetof(::g::Experimental::Physics::ElasticForce, _isStatic), 0,
        ::g::Uno::Float_typeof(), offsetof(::g::Experimental::Physics::ElasticForce, _maxSpeed), 0,
        ::g::Uno::Double_typeof(), offsetof(::g::Experimental::Physics::ElasticForce, _remainTime), 0,
        ::g::Uno::Float_typeof(), offsetof(::g::Experimental::Physics::ElasticForce, _scale), 0,
        type->T(0), (uintptr_t)0, uFieldFlagsConstrained,
        ::g::Uno::Double_typeof(), offsetof(::g::Experimental::Physics::ElasticForce, timeStep), 0,
        ::g::Uno::Bool_typeof(), offsetof(::g::Experimental::Physics::ElasticForce, _IsLocked), 0,
        type->T(0), (uintptr_t)0, uFieldFlagsConstrained);
    type->Reflection.SetFunctions(26,
        new uFunction("get_AttractionCurve", NULL, (void*)ElasticForce__get_AttractionCurve_fn, 0, false, ::g::Uno::Float_typeof(), 0),
        new uFunction("set_AttractionCurve", NULL, (void*)ElasticForce__set_AttractionCurve_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::Float_typeof()),
        new uFunction("get_AttractionForce", NULL, (void*)ElasticForce__get_AttractionForce_fn, 0, false, ::g::Uno::Float_typeof(), 0),
        new uFunction("set_AttractionForce", NULL, (void*)ElasticForce__set_AttractionForce_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::Float_typeof()),
        new uFunction("CreateDegrees", type, (void*)ElasticForce__CreateDegrees_fn, 0, true, type, 0),
        new uFunction("CreatePoints", type, (void*)ElasticForce__CreatePoints_fn, 0, true, type, 0),
        new uFunction("CreateRadians", type, (void*)ElasticForce__CreateRadians_fn, 0, true, type, 0),
        new uFunction("get_Damping", NULL, (void*)ElasticForce__get_Damping_fn, 0, false, ::g::Uno::Float_typeof(), 0),
        new uFunction("set_Damping", NULL, (void*)ElasticForce__set_Damping_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::Float_typeof()),
        new uFunction("get_Destination", NULL, (void*)ElasticForce__get_Destination_fn, 0, false, type->T(0), 0),
        new uFunction("set_Destination", NULL, (void*)ElasticForce__set_Destination_fn, 0, false, uVoid_typeof(), 1, type->T(0)),
        new uFunction("get_EnergyEps", NULL, (void*)ElasticForce__get_EnergyEps_fn, 0, false, ::g::Uno::Float_typeof(), 0),
        new uFunction("set_EnergyEps", NULL, (void*)ElasticForce__set_EnergyEps_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::Float_typeof()),
        new uFunction("get_IsLocked", NULL, (void*)ElasticForce__get_IsLocked_fn, 0, false, ::g::Uno::Bool_typeof(), 0),
        new uFunction("set_IsLocked", NULL, (void*)ElasticForce__set_IsLocked_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::Bool_typeof()),
        new uFunction("get_IsStatic", NULL, (void*)ElasticForce__get_IsStatic_fn, 0, false, ::g::Uno::Bool_typeof(), 0),
        new uFunction("set_IsStatic", NULL, (void*)ElasticForce__set_IsStatic_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::Bool_typeof()),
        new uFunction("get_MaxSpeed", NULL, (void*)ElasticForce__get_MaxSpeed_fn, 0, false, ::g::Uno::Float_typeof(), 0),
        new uFunction("set_MaxSpeed", NULL, (void*)ElasticForce__set_MaxSpeed_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::Float_typeof()),
        new uFunction(".ctor", type, (void*)ElasticForce__New1_fn, 0, true, type, 1, ::g::Uno::Float_typeof()),
        new uFunction("get_Position", NULL, (void*)ElasticForce__get_Position_fn, 0, false, type->T(0), 0),
        new uFunction("set_Position", NULL, (void*)ElasticForce__set_Position_fn, 0, false, uVoid_typeof(), 1, type->T(0)),
        new uFunction("Reset", NULL, (void*)ElasticForce__Reset_fn, 0, false, uVoid_typeof(), 1, type->T(0)),
        new uFunction("Update", NULL, (void*)ElasticForce__Update_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::Double_typeof()),
        new uFunction("get_Velocity", NULL, (void*)ElasticForce__get_Velocity_fn, 0, false, type->T(0), 0),
        new uFunction("set_Velocity", NULL, (void*)ElasticForce__set_Velocity_fn, 0, false, uVoid_typeof(), 1, type->T(0)));
    return type;
}

// public ElasticForce([float scale]) :286
void ElasticForce__ctor__fn(ElasticForce* __this, float* scale)
{
    __this->ctor_(*scale);
}

// private T get_Attraction() :400
void ElasticForce__get_Attraction_fn(ElasticForce* __this, uTRef __retval)
{
    uType* __types[] = {
        __this->__type->T(0),
        __this->__type->Precalced(1/*Fuse.Internal.Blender<T>*/),
    };
    uT ret17(__types[0], U_ALLOCA(__types[0]->ValueSize));
    uT ret18(__types[0], U_ALLOCA(__types[0]->ValueSize));
    uT ret19(__types[0], U_ALLOCA(__types[0]->ValueSize));
    uT ret20(__types[0], U_ALLOCA(__types[0]->ValueSize));
    uT ret21(__types[0], U_ALLOCA(__types[0]->ValueSize));
    uT ret22(__types[0], U_ALLOCA(__types[0]->ValueSize));
    uT v(__types[0], U_ALLOCA(__types[0]->ValueSize));
    uT unit(__types[0], U_ALLOCA(__types[0]->ValueSize));
    ;
    ;
    ;
    ;
    ;
    ;
    v = (uPtr(__this->_blender)->Sub_ex((ElasticForce__get_Destination_fn(__this, &ret18), ret18), (ElasticForce__get_Position_fn(__this, &ret19), ret19), &ret17), ret17);
    double dlength;
    unit = (uPtr(__this->_blender)->ToUnit_ex(v, &dlength, &ret20), ret20);
    float length = (float)dlength;

    if (length < __this->_scale)
        return __retval.Store((uPtr(__this->_blender)->get_Zero_ex(&ret21), ret21)), void();

    float p = ::g::Uno::Math::Pow1(length, __this->AttractionCurve());
    return __retval.Store((uPtr(__this->_blender)->Weight_ex(unit, uCRef((double)p), &ret22), ret22)), void();
}

// public float get_AttractionCurve() :335
void ElasticForce__get_AttractionCurve_fn(ElasticForce* __this, float* __retval)
{
    *__retval = __this->AttractionCurve();
}

// public void set_AttractionCurve(float value) :336
void ElasticForce__set_AttractionCurve_fn(ElasticForce* __this, float* value)
{
    __this->AttractionCurve(*value);
}

// public float get_AttractionForce() :328
void ElasticForce__get_AttractionForce_fn(ElasticForce* __this, float* __retval)
{
    *__retval = __this->AttractionForce();
}

// public void set_AttractionForce(float value) :329
void ElasticForce__set_AttractionForce_fn(ElasticForce* __this, float* value)
{
    __this->AttractionForce(*value);
}

// public static Experimental.Physics.ElasticForce<T> CreateDegrees() :274
void ElasticForce__CreateDegrees_fn(uType* __type, ElasticForce** __retval)
{
    *__retval = ElasticForce::CreateDegrees(__type);
}

// public static Experimental.Physics.ElasticForce<T> CreatePoints() :254
void ElasticForce__CreatePoints_fn(uType* __type, ElasticForce** __retval)
{
    *__retval = ElasticForce::CreatePoints(__type);
}

// public static Experimental.Physics.ElasticForce<T> CreateRadians() :263
void ElasticForce__CreateRadians_fn(uType* __type, ElasticForce** __retval)
{
    *__retval = ElasticForce::CreateRadians(__type);
}

// public float get_Damping() :342
void ElasticForce__get_Damping_fn(ElasticForce* __this, float* __retval)
{
    *__retval = __this->Damping();
}

// public void set_Damping(float value) :343
void ElasticForce__set_Damping_fn(ElasticForce* __this, float* value)
{
    __this->Damping(*value);
}

// public T get_Destination() :317
void ElasticForce__get_Destination_fn(ElasticForce* __this, uTRef __retval)
{
    return __retval.Store(__this->_attractionDestination()), void();
}

// public void set_Destination(T value) :318
void ElasticForce__set_Destination_fn(ElasticForce* __this, void* value)
{
    uType* __types[] = {
        __this->__type->T(0),
    };
    __this->_attractionDestination() = value;
    __this->_isStatic = false;
}

// private float get_Energy() :417
void ElasticForce__get_Energy_fn(ElasticForce* __this, float* __retval)
{
    *__retval = __this->Energy();
}

// public float get_EnergyEps() :349
void ElasticForce__get_EnergyEps_fn(ElasticForce* __this, float* __retval)
{
    *__retval = __this->EnergyEps();
}

// public void set_EnergyEps(float value) :350
void ElasticForce__set_EnergyEps_fn(ElasticForce* __this, float* value)
{
    __this->EnergyEps(*value);
}

// public generated bool get_IsLocked() :293
void ElasticForce__get_IsLocked_fn(ElasticForce* __this, bool* __retval)
{
    *__retval = __this->IsLocked();
}

// public generated void set_IsLocked(bool value) :294
void ElasticForce__set_IsLocked_fn(ElasticForce* __this, bool* value)
{
    __this->IsLocked(*value);
}

// public bool get_IsStatic() :373
void ElasticForce__get_IsStatic_fn(ElasticForce* __this, bool* __retval)
{
    *__retval = __this->IsStatic();
}

// public void set_IsStatic(bool value) :374
void ElasticForce__set_IsStatic_fn(ElasticForce* __this, bool* value)
{
    __this->IsStatic(*value);
}

// private void Iterate() :420
void ElasticForce__Iterate_fn(ElasticForce* __this)
{
    __this->Iterate();
}

// public float get_MaxSpeed() :357
void ElasticForce__get_MaxSpeed_fn(ElasticForce* __this, float* __retval)
{
    *__retval = __this->MaxSpeed();
}

// public void set_MaxSpeed(float value) :358
void ElasticForce__set_MaxSpeed_fn(ElasticForce* __this, float* value)
{
    __this->MaxSpeed(*value);
}

// public ElasticForce New([float scale]) :286
void ElasticForce__New1_fn(uType* __type, float* scale, ElasticForce** __retval)
{
    *__retval = ElasticForce::New1(__type, *scale);
}

// public generated T get_Position() :299
void ElasticForce__get_Position_fn(ElasticForce* __this, uTRef __retval)
{
    return __retval.Store(__this->_Position()), void();
}

// public generated void set_Position(T value) :300
void ElasticForce__set_Position_fn(ElasticForce* __this, void* value)
{
    uType* __types[] = {
        __this->__type->T(0),
    };
    __this->_Position() = value;
}

// public void Reset(T value) :446
void ElasticForce__Reset_fn(ElasticForce* __this, void* value)
{
    uType* __types[] = {
        __this->__type->T(0),
        __this->__type->Precalced(1/*Fuse.Internal.Blender<T>*/),
    };
    uT ret14(__types[0], U_ALLOCA(__types[0]->ValueSize));
    ;
    ElasticForce__set_Position_fn(__this, value);
    ElasticForce__set_Destination_fn(__this, value);
    ElasticForce__set_Velocity_fn(__this, (uPtr(__this->_blender)->get_Zero_ex(&ret14), ret14));
}

// public void Update(double elapsed) :386
void ElasticForce__Update_fn(ElasticForce* __this, double* elapsed)
{
    __this->Update(*elapsed);
}

// public T get_Velocity() :306
void ElasticForce__get_Velocity_fn(ElasticForce* __this, uTRef __retval)
{
    return __retval.Store(__this->_velocity()), void();
}

// public void set_Velocity(T value) :307
void ElasticForce__set_Velocity_fn(ElasticForce* __this, void* value)
{
    uType* __types[] = {
        __this->__type->T(0),
    };
    __this->_velocity() = value;
    __this->_isStatic = false;
}

// public ElasticForce([float scale]) [instance] :286
void ElasticForce::ctor_(float scale)
{
    uType* __types[] = {
        __type->Precalced(0/*Fuse.Internal.BlenderMap.Get<T>*/),
        __type->T(0),
    };
    _blender = ((::g::Fuse::Internal::Blender*)::g::Fuse::Internal::BlenderMap::Get(__types[0]));
    _attractionForce = 500.0f;
    _attractionCurve = 0.65f;
    _damping = 10.0f;
    _energyEps = 0.01f;
    timeStep = 0.001;
    _remainTime = 0.0;
    _scale = scale;
}

// public float get_AttractionCurve() [instance] :335
float ElasticForce::AttractionCurve()
{
    return _attractionCurve;
}

// public void set_AttractionCurve(float value) [instance] :336
void ElasticForce::AttractionCurve(float value)
{
    _attractionCurve = value;
}

// public float get_AttractionForce() [instance] :328
float ElasticForce::AttractionForce()
{
    return _attractionForce;
}

// public void set_AttractionForce(float value) [instance] :329
void ElasticForce::AttractionForce(float value)
{
    _attractionForce = value;
}

// public float get_Damping() [instance] :342
float ElasticForce::Damping()
{
    return _damping;
}

// public void set_Damping(float value) [instance] :343
void ElasticForce::Damping(float value)
{
    _damping = value;
}

// private float get_Energy() [instance] :417
float ElasticForce::Energy()
{
    uType* __types[] = {
        __type->T(0),
    };
    uT ret24(__types[0], U_ALLOCA(__types[0]->ValueSize));
    uT ret26(__types[0], U_ALLOCA(__types[0]->ValueSize));
    double ret23;
    ;
    double ret25;
    ;
    return (float)((uPtr(_blender)->Length_ex((ElasticForce__get_Attraction_fn(this, &ret24), ret24), &ret23), ret23) + (uPtr(_blender)->Length_ex((ElasticForce__get_Velocity_fn(this, &ret26), ret26), &ret25), ret25));
}

// public float get_EnergyEps() [instance] :349
float ElasticForce::EnergyEps()
{
    return _energyEps;
}

// public void set_EnergyEps(float value) [instance] :350
void ElasticForce::EnergyEps(float value)
{
    _energyEps = value;
}

// public generated bool get_IsLocked() [instance] :293
bool ElasticForce::IsLocked()
{
    return _IsLocked;
}

// public generated void set_IsLocked(bool value) [instance] :294
void ElasticForce::IsLocked(bool value)
{
    _IsLocked = value;
}

// public bool get_IsStatic() [instance] :373
bool ElasticForce::IsStatic()
{
    return _isStatic;
}

// public void set_IsStatic(bool value) [instance] :374
void ElasticForce::IsStatic(bool value)
{
    if (_isStatic != value)
        _isStatic = value;
}

// private void Iterate() [instance] :420
void ElasticForce::Iterate()
{
    uType* __types[] = {
        __type->T(0),
    };
    uT ret2(__types[0], U_ALLOCA(__types[0]->ValueSize));
    uT ret3(__types[0], U_ALLOCA(__types[0]->ValueSize));
    uT ret4(__types[0], U_ALLOCA(__types[0]->ValueSize));
    uT ret5(__types[0], U_ALLOCA(__types[0]->ValueSize));
    uT ret6(__types[0], U_ALLOCA(__types[0]->ValueSize));
    uT ret7(__types[0], U_ALLOCA(__types[0]->ValueSize));
    uT ret8(__types[0], U_ALLOCA(__types[0]->ValueSize));
    uT ret9(__types[0], U_ALLOCA(__types[0]->ValueSize));
    uT ret10(__types[0], U_ALLOCA(__types[0]->ValueSize));
    uT ret11(__types[0], U_ALLOCA(__types[0]->ValueSize));
    uT ret12(__types[0], U_ALLOCA(__types[0]->ValueSize));
    uT ret13(__types[0], U_ALLOCA(__types[0]->ValueSize));
    uT acc(__types[0], U_ALLOCA(__types[0]->ValueSize));
    uT unit(__types[0], U_ALLOCA(__types[0]->ValueSize));
    uT step(__types[0], U_ALLOCA(__types[0]->ValueSize));
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    acc = (uPtr(_blender)->Weight_ex((ElasticForce__get_Attraction_fn(this, &ret3), ret3), uCRef((double)(float)((double)AttractionForce() * timeStep)), &ret2), ret2);
    ElasticForce__set_Velocity_fn(this, (uPtr(_blender)->Add_ex((ElasticForce__get_Velocity_fn(this, &ret5), ret5), acc, &ret4), ret4));

    if (_hasMaxSpeed)
    {
        double length;
        unit = (uPtr(_blender)->ToUnit_ex((ElasticForce__get_Velocity_fn(this, &ret7), ret7), &length, &ret6), ret6);

        if (length > (double)_maxSpeed)
            ElasticForce__set_Velocity_fn(this, (uPtr(_blender)->Weight_ex(unit, uCRef((double)_maxSpeed), &ret8), ret8));
    }

    if (!IsLocked())
    {
        step = (uPtr(_blender)->Weight_ex((ElasticForce__get_Velocity_fn(this, &ret10), ret10), uCRef((double)(float)timeStep), &ret9), ret9);
        ElasticForce__set_Position_fn(this, (uPtr(_blender)->Add_ex((ElasticForce__get_Position_fn(this, &ret12), ret12), step, &ret11), ret11));

        if (Energy() < EnergyEps())
        {
            ElasticForce__set_Position_fn(this, (ElasticForce__get_Destination_fn(this, &ret13), ret13));
            IsStatic(true);
        }
    }
}

// public float get_MaxSpeed() [instance] :357
float ElasticForce::MaxSpeed()
{
    return _maxSpeed;
}

// public void set_MaxSpeed(float value) [instance] :358
void ElasticForce::MaxSpeed(float value)
{
    _hasMaxSpeed = true;
    _maxSpeed = value;
}

// public void Update(double elapsed) [instance] :386
void ElasticForce::Update(double elapsed)
{
    uType* __types[] = {
        __type->T(0),
    };
    uT ret15(__types[0], U_ALLOCA(__types[0]->ValueSize));
    uT ret16(__types[0], U_ALLOCA(__types[0]->ValueSize));
    ;
    ;
    _remainTime = (_remainTime + elapsed);

    while (_remainTime > 0.0)
    {
        Iterate();
        _remainTime = (_remainTime - timeStep);
    }

    ElasticForce__set_Velocity_fn(this, (uPtr(_blender)->Weight_ex((ElasticForce__get_Velocity_fn(this, &ret16), ret16), uCRef((double)(float)(1.0 - ::g::Uno::Math::Min(1.0, (double)Damping() * elapsed))), &ret15), ret15));
}

// public static Experimental.Physics.ElasticForce<T> CreateDegrees() [static] :274
ElasticForce* ElasticForce::CreateDegrees(uType* __type)
{
    ElasticForce* a = ElasticForce::CreateRadians(__type);
    float m = 57.2957764f;
    uPtr(a)->AttractionForce(uPtr(a)->AttractionForce() * m);
    a->Damping(a->Damping() * m);
    a->EnergyEps(a->EnergyEps() * m);
    a->MaxSpeed(a->MaxSpeed() * m);
    return a;
}

// public static Experimental.Physics.ElasticForce<T> CreatePoints() [static] :254
ElasticForce* ElasticForce::CreatePoints(uType* __type)
{
    ElasticForce* a = ElasticForce::New1(__type, 0.01f);
    a->AttractionForce(200.0f);
    a->AttractionCurve(0.65f);
    a->Damping(10.0f);
    return a;
}

// public static Experimental.Physics.ElasticForce<T> CreateRadians() [static] :263
ElasticForce* ElasticForce::CreateRadians(uType* __type)
{
    ElasticForce* a = ElasticForce::New1(__type, 0.01f);
    a->AttractionForce(200.0f);
    a->Damping(15.0f);
    a->AttractionCurve(0.75f);
    a->EnergyEps(0.01f);
    a->MaxSpeed(3.14159274f);
    return a;
}

// public ElasticForce New([float scale]) [static] :286
ElasticForce* ElasticForce::New1(uType* __type, float scale)
{
    ElasticForce* obj1 = (ElasticForce*)uNew(__type);
    obj1->ctor_(scale);
    return obj1;
}
// }

// C:\ProgramData\Uno\Packages\Experimental.Physics\0.18.8\$.uno(463)
// ------------------------------------------------------------------

// public sealed class Friction<T> :463
// {
Friction_type* Friction_typeof()
{
    static uSStrong<Friction_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 8;
    options.GenericCount = 1;
    options.InterfaceCount = 2;
    options.PrecalcCount = 2;
    options.ObjectSize = sizeof(Friction);
    options.TypeSize = sizeof(Friction_type);
    type = (Friction_type*)uClassType::New("Experimental.Physics.Friction`1", options);
    type->fp_ctor_ = (void*)Friction__New1_fn;
    type->interface0.fp_get_Position = (void(*)(uObject*, uTRef))Friction__get_Position_fn;
    type->interface0.fp_set_Position = (void(*)(uObject*, void*))Friction__set_Position_fn;
    type->interface0.fp_get_Velocity = (void(*)(uObject*, uTRef))Friction__get_Velocity_fn;
    type->interface0.fp_set_Velocity = (void(*)(uObject*, void*))Friction__set_Velocity_fn;
    type->interface1.fp_Update = (void(*)(uObject*, double*))Friction__Update_fn;
    type->interface1.fp_get_IsStatic = (void(*)(uObject*, bool*))Friction__get_IsStatic_fn;
    ::TYPES[11] = ::g::Fuse::Internal::BlenderMap_typeof();
    ::TYPES[12] = ::g::Uno::Double_typeof();
    ::TYPES[13] = ::g::Uno::Float_typeof();
    ::TYPES[15] = ::g::Fuse::Internal::Blender_typeof();
    type->SetPrecalc(
        ::TYPES[11/*Fuse.Internal.BlenderMap*/]->MakeMethod(1, type->T(0)),
        ::TYPES[15/*Fuse.Internal.Blender`1*/]->MakeType(type->T(0)));
    type->SetInterfaces(
        ::g::Experimental::Physics::MotionSimulation_typeof()->MakeType(type->T(0)), offsetof(Friction_type, interface0),
        ::g::Experimental::Physics::Simulation_typeof(), offsetof(Friction_type, interface1));
    type->SetFields(0,
        ::g::Fuse::Internal::Blender_typeof()->MakeType(type->T(0)), offsetof(::g::Experimental::Physics::Friction, _blender), 0,
        ::g::Uno::Float_typeof(), offsetof(::g::Experimental::Physics::Friction, _highFluidDeceleration), 0,
        ::g::Uno::Bool_typeof(), offsetof(::g::Experimental::Physics::Friction, _isStatic), 0,
        ::g::Uno::Float_typeof(), offsetof(::g::Experimental::Physics::Friction, _kineticDeceleration), 0,
        ::g::Uno::Float_typeof(), offsetof(::g::Experimental::Physics::Friction, _lowFluidDeceleration), 0,
        type->T(0), (uintptr_t)0, uFieldFlagsConstrained,
        ::g::Uno::Float_typeof(), offsetof(::g::Experimental::Physics::Friction, _speedDropout), 0,
        type->T(0), (uintptr_t)0, uFieldFlagsConstrained);
    type->Reflection.SetFunctions(17,
        new uFunction("CreatePoints", type, (void*)Friction__CreatePoints_fn, 0, true, type, 0),
        new uFunction("CreateRadians", type, (void*)Friction__CreateRadians_fn, 0, true, type, 0),
        new uFunction("get_HighFluidDeceleration", NULL, (void*)Friction__get_HighFluidDeceleration_fn, 0, false, ::g::Uno::Float_typeof(), 0),
        new uFunction("set_HighFluidDeceleration", NULL, (void*)Friction__set_HighFluidDeceleration_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::Float_typeof()),
        new uFunction("get_IsStatic", NULL, (void*)Friction__get_IsStatic_fn, 0, false, ::g::Uno::Bool_typeof(), 0),
        new uFunction("get_KineticDeceleration", NULL, (void*)Friction__get_KineticDeceleration_fn, 0, false, ::g::Uno::Float_typeof(), 0),
        new uFunction("set_KineticDeceleration", NULL, (void*)Friction__set_KineticDeceleration_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::Float_typeof()),
        new uFunction("get_LowFluidDeceleration", NULL, (void*)Friction__get_LowFluidDeceleration_fn, 0, false, ::g::Uno::Float_typeof(), 0),
        new uFunction("set_LowFluidDeceleration", NULL, (void*)Friction__set_LowFluidDeceleration_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::Float_typeof()),
        new uFunction(".ctor", type, (void*)Friction__New1_fn, 0, true, type, 0),
        new uFunction("get_Position", NULL, (void*)Friction__get_Position_fn, 0, false, type->T(0), 0),
        new uFunction("set_Position", NULL, (void*)Friction__set_Position_fn, 0, false, uVoid_typeof(), 1, type->T(0)),
        new uFunction("get_SpeedDropout", NULL, (void*)Friction__get_SpeedDropout_fn, 0, false, ::g::Uno::Float_typeof(), 0),
        new uFunction("set_SpeedDropout", NULL, (void*)Friction__set_SpeedDropout_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::Float_typeof()),
        new uFunction("Update", NULL, (void*)Friction__Update_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::Double_typeof()),
        new uFunction("get_Velocity", NULL, (void*)Friction__get_Velocity_fn, 0, false, type->T(0), 0),
        new uFunction("set_Velocity", NULL, (void*)Friction__set_Velocity_fn, 0, false, uVoid_typeof(), 1, type->T(0)));
    return type;
}

// public generated Friction() :463
void Friction__ctor__fn(Friction* __this)
{
    __this->ctor_();
}

// public static Experimental.Physics.Friction<T> CreatePoints() :466
void Friction__CreatePoints_fn(uType* __type, Friction** __retval)
{
    *__retval = Friction::CreatePoints(__type);
}

// public static Experimental.Physics.Friction<T> CreateRadians() :476
void Friction__CreateRadians_fn(uType* __type, Friction** __retval)
{
    *__retval = Friction::CreateRadians(__type);
}

// public float get_HighFluidDeceleration() :512
void Friction__get_HighFluidDeceleration_fn(Friction* __this, float* __retval)
{
    *__retval = __this->HighFluidDeceleration();
}

// public void set_HighFluidDeceleration(float value) :513
void Friction__set_HighFluidDeceleration_fn(Friction* __this, float* value)
{
    __this->HighFluidDeceleration(*value);
}

// public bool get_IsStatic() :537
void Friction__get_IsStatic_fn(Friction* __this, bool* __retval)
{
    *__retval = __this->IsStatic();
}

// public float get_KineticDeceleration() :498
void Friction__get_KineticDeceleration_fn(Friction* __this, float* __retval)
{
    *__retval = __this->KineticDeceleration();
}

// public void set_KineticDeceleration(float value) :499
void Friction__set_KineticDeceleration_fn(Friction* __this, float* value)
{
    __this->KineticDeceleration(*value);
}

// public float get_LowFluidDeceleration() :505
void Friction__get_LowFluidDeceleration_fn(Friction* __this, float* __retval)
{
    *__retval = __this->LowFluidDeceleration();
}

// public void set_LowFluidDeceleration(float value) :506
void Friction__set_LowFluidDeceleration_fn(Friction* __this, float* value)
{
    __this->LowFluidDeceleration(*value);
}

// public generated Friction New() :463
void Friction__New1_fn(uType* __type, Friction** __retval)
{
    *__retval = Friction::New1(__type);
}

// public T get_Position() :530
void Friction__get_Position_fn(Friction* __this, uTRef __retval)
{
    return __retval.Store(__this->_position()), void();
}

// public void set_Position(T value) :531
void Friction__set_Position_fn(Friction* __this, void* value)
{
    uType* __types[] = {
        __this->__type->T(0),
    };
    __this->_position() = value;
}

// public float get_SpeedDropout() :491
void Friction__get_SpeedDropout_fn(Friction* __this, float* __retval)
{
    *__retval = __this->SpeedDropout();
}

// public void set_SpeedDropout(float value) :492
void Friction__set_SpeedDropout_fn(Friction* __this, float* value)
{
    __this->SpeedDropout(*value);
}

// public void Update(double elapsed) :540
void Friction__Update_fn(Friction* __this, double* elapsed)
{
    __this->Update(*elapsed);
}

// public T get_Velocity() :519
void Friction__get_Velocity_fn(Friction* __this, uTRef __retval)
{
    return __retval.Store(__this->_velocity()), void();
}

// public void set_Velocity(T value) :520
void Friction__set_Velocity_fn(Friction* __this, void* value)
{
    uType* __types[] = {
        __this->__type->T(0),
    };
    __this->_velocity() = value;
    __this->_isStatic = false;
}

// public generated Friction() [instance] :463
void Friction::ctor_()
{
    uType* __types[] = {
        __type->Precalced(0/*Fuse.Internal.BlenderMap.Get<T>*/),
        __type->T(0),
    };
    _blender = ((::g::Fuse::Internal::Blender*)::g::Fuse::Internal::BlenderMap::Get(__types[0]));
    _speedDropout = 25.0f;
    _kineticDeceleration = 60.0f;
    _lowFluidDeceleration = 1.5f;
}

// public float get_HighFluidDeceleration() [instance] :512
float Friction::HighFluidDeceleration()
{
    return _highFluidDeceleration;
}

// public void set_HighFluidDeceleration(float value) [instance] :513
void Friction::HighFluidDeceleration(float value)
{
    _highFluidDeceleration = value;
}

// public bool get_IsStatic() [instance] :537
bool Friction::IsStatic()
{
    return _isStatic;
}

// public float get_KineticDeceleration() [instance] :498
float Friction::KineticDeceleration()
{
    return _kineticDeceleration;
}

// public void set_KineticDeceleration(float value) [instance] :499
void Friction::KineticDeceleration(float value)
{
    _kineticDeceleration = value;
}

// public float get_LowFluidDeceleration() [instance] :505
float Friction::LowFluidDeceleration()
{
    return _lowFluidDeceleration;
}

// public void set_LowFluidDeceleration(float value) [instance] :506
void Friction::LowFluidDeceleration(float value)
{
    _lowFluidDeceleration = value;
}

// public float get_SpeedDropout() [instance] :491
float Friction::SpeedDropout()
{
    return _speedDropout;
}

// public void set_SpeedDropout(float value) [instance] :492
void Friction::SpeedDropout(float value)
{
    _speedDropout = value;
}

// public void Update(double elapsed) [instance] :540
void Friction::Update(double elapsed)
{
    uType* __types[] = {
        __type->T(0),
        __type->Precalced(1/*Fuse.Internal.Blender<T>*/),
    };
    uT ret2(__types[0], U_ALLOCA(__types[0]->ValueSize));
    uT ret3(__types[0], U_ALLOCA(__types[0]->ValueSize));
    uT ret5(__types[0], U_ALLOCA(__types[0]->ValueSize));
    uT ret6(__types[0], U_ALLOCA(__types[0]->ValueSize));
    uT ret7(__types[0], U_ALLOCA(__types[0]->ValueSize));
    uT step(__types[0], U_ALLOCA(__types[0]->ValueSize));
    ;
    ;
    double ret4;
    ;
    ;
    ;
    step = (uPtr(_blender)->Weight_ex(_velocity(), uCRef((double)(float)elapsed), &ret2), ret2);
    _position() = (uPtr(_blender)->Add_ex(_position(), step, &ret3), ret3);
    double linear = (uPtr(_blender)->Length_ex(_velocity(), &ret4), ret4);

    if (linear < (double)_speedDropout)
    {
        _velocity() = (uPtr(_blender)->get_Zero_ex(&ret5), ret5);
        _isStatic = true;
        return;
    }

    double fluid = (double)_kineticDeceleration + (linear * (double)_lowFluidDeceleration);
    linear = linear + (-fluid * (double)(float)elapsed);

    if (linear < (double)_speedDropout)
    {
        _velocity() = (uPtr(_blender)->get_Zero_ex(&ret6), ret6);
        _isStatic = true;
        return;
    }

    _velocity() = (::g::Fuse::Internal::Blender__UnitWeight_fn(uPtr(_blender), _velocity(), uCRef(linear), &ret7), ret7);
}

// public static Experimental.Physics.Friction<T> CreatePoints() [static] :466
Friction* Friction::CreatePoints(uType* __type)
{
    Friction* n = Friction::New1(__type);
    n->SpeedDropout(25.0f);
    n->KineticDeceleration(60.0f);
    n->LowFluidDeceleration(1.5f);
    n->HighFluidDeceleration(0.0f);
    return n;
}

// public static Experimental.Physics.Friction<T> CreateRadians() [static] :476
Friction* Friction::CreateRadians(uType* __type)
{
    Friction* n = Friction::New1(__type);
    n->SpeedDropout(0.02f);
    n->KineticDeceleration(2.0f);
    n->LowFluidDeceleration(0.8f);
    n->HighFluidDeceleration(0.0f);
    return n;
}

// public generated Friction New() [static] :463
Friction* Friction::New1(uType* __type)
{
    Friction* obj1 = (Friction*)uNew(__type);
    obj1->ctor_();
    return obj1;
}
// }

// C:\ProgramData\Uno\Packages\Experimental.Physics\0.18.8\$.uno(715)
// ------------------------------------------------------------------

// public abstract interface MotionSimulation<T> :715
// {
uInterfaceType* MotionSimulation_typeof()
{
    static uSStrong<uInterfaceType*> type;
    if (type != NULL) return type;

    type = uInterfaceType::New("Experimental.Physics.MotionSimulation`1", 1, 0);
    type->Reflection.SetFunctions(4,
        new uFunction("get_Position", NULL, NULL, offsetof(MotionSimulation, fp_get_Position), false, type->T(0), 0),
        new uFunction("set_Position", NULL, NULL, offsetof(MotionSimulation, fp_set_Position), false, uVoid_typeof(), 1, type->T(0)),
        new uFunction("get_Velocity", NULL, NULL, offsetof(MotionSimulation, fp_get_Velocity), false, type->T(0), 0),
        new uFunction("set_Velocity", NULL, NULL, offsetof(MotionSimulation, fp_set_Velocity), false, uVoid_typeof(), 1, type->T(0)));
    return type;
}
// }

// C:\ProgramData\Uno\Packages\Experimental.Physics\0.18.8\$.uno(37)
// -----------------------------------------------------------------

// private enum BasicBoundedRegion2D.MoveMode :37
uEnumType* BasicBoundedRegion2D__MoveMode_typeof()
{
    static uSStrong<uEnumType*> type;
    if (type != NULL) return type;

    type = uEnumType::New("Experimental.Physics.BasicBoundedRegion2D.MoveMode", ::g::Uno::Int_typeof(), 5);
    type->SetLiterals(
        "Stop", 0LL,
        "User", 1LL,
        "Friction", 2LL,
        "Snap", 3LL,
        "Destination", 4LL);
    return type;
}

// C:\ProgramData\Uno\Packages\Experimental.Physics\0.18.8\$.uno(576)
// ------------------------------------------------------------------

// public sealed class PointerVelocity<T> :576
// {
uType* PointerVelocity_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 15;
    options.GenericCount = 1;
    options.PrecalcCount = 2;
    options.ObjectSize = sizeof(PointerVelocity);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Experimental.Physics.PointerVelocity`1", options);
    type->fp_ctor_ = (void*)PointerVelocity__New1_fn;
    ::TYPES[11] = ::g::Fuse::Internal::BlenderMap_typeof();
    ::TYPES[15] = ::g::Fuse::Internal::Blender_typeof();
    ::TYPES[12] = ::g::Uno::Double_typeof();
    ::TYPES[13] = ::g::Uno::Float_typeof();
    type->SetPrecalc(
        ::TYPES[11/*Fuse.Internal.BlenderMap*/]->MakeMethod(1, type->T(0)),
        ::TYPES[15/*Fuse.Internal.Blender`1*/]->MakeType(type->T(0)));
    type->SetFields(0,
        ::g::Uno::Float_typeof(), offsetof(::g::Experimental::Physics::PointerVelocity, _accelFactor), 0,
        ::g::Uno::Float_typeof(), offsetof(::g::Experimental::Physics::PointerVelocity, _accelLimit), 0,
        ::g::Uno::Float_typeof(), offsetof(::g::Experimental::Physics::PointerVelocity, _accelThreshold), 0,
        ::g::Fuse::Internal::Blender_typeof()->MakeType(type->T(0)), offsetof(::g::Experimental::Physics::PointerVelocity, _blender), 0,
        type->T(0), (uintptr_t)0, uFieldFlagsConstrained,
        ::g::Uno::Float_typeof(), offsetof(::g::Experimental::Physics::PointerVelocity, _elapsedLimit), 0,
        ::g::Uno::Float_typeof(), offsetof(::g::Experimental::Physics::PointerVelocity, _inSpeedLimit), 0,
        ::g::Uno::Float_typeof(), offsetof(::g::Experimental::Physics::PointerVelocity, _moveThreshold), 0,
        ::g::Uno::Float_typeof(), offsetof(::g::Experimental::Physics::PointerVelocity, _period), 0,
        ::g::Uno::Float_typeof(), offsetof(::g::Experimental::Physics::PointerVelocity, _speedDistanceThreshold), 0,
        type->T(0), (uintptr_t)0, uFieldFlagsConstrained,
        ::g::Uno::Double_typeof(), offsetof(::g::Experimental::Physics::PointerVelocity, _totalDistance), 0,
        ::g::Uno::Double_typeof(), offsetof(::g::Experimental::Physics::PointerVelocity, _totalTime), 0,
        type->T(0), (uintptr_t)0, uFieldFlagsConstrained,
        ::g::Uno::Float_typeof(), offsetof(::g::Experimental::Physics::PointerVelocity, _zeroElapsed), 0);
    type->Reflection.SetFunctions(10,
        new uFunction("AddSample", NULL, (void*)PointerVelocity__AddSample_fn, 0, false, uVoid_typeof(), 3, type->T(0), ::g::Uno::Float_typeof(), ::g::Uno::Bool_typeof()),
        new uFunction("get_AverageVelocity", NULL, (void*)PointerVelocity__get_AverageVelocity_fn, 0, false, type->T(0), 0),
        new uFunction("get_CurrentVelocity", NULL, (void*)PointerVelocity__get_CurrentVelocity_fn, 0, false, type->T(0), 0),
        new uFunction("set_CurrentVelocity", NULL, (void*)PointerVelocity__set_CurrentVelocity_fn, 0, false, uVoid_typeof(), 1, type->T(0)),
        new uFunction(".ctor", type, (void*)PointerVelocity__New1_fn, 0, true, type, 0),
        new uFunction("get_Period", NULL, (void*)PointerVelocity__get_Period_fn, 0, false, ::g::Uno::Float_typeof(), 0),
        new uFunction("set_Period", NULL, (void*)PointerVelocity__set_Period_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::Float_typeof()),
        new uFunction("Reset", NULL, (void*)PointerVelocity__Reset_fn, 0, false, uVoid_typeof(), 1, type->T(0)),
        new uFunction("Reset", NULL, (void*)PointerVelocity__Reset1_fn, 0, false, uVoid_typeof(), 2, type->T(0), type->T(0)),
        new uFunction("get_TotalDistance", NULL, (void*)PointerVelocity__get_TotalDistance_fn, 0, false, ::g::Uno::Double_typeof(), 0));
    return type;
}

// public generated PointerVelocity() :576
void PointerVelocity__ctor__fn(PointerVelocity* __this)
{
    __this->ctor_();
}

// public void AddSample(T location, float elapsed, [bool tentative]) :639
void PointerVelocity__AddSample_fn(PointerVelocity* __this, void* location, float* elapsed, bool* tentative)
{
    uType* __types[] = {
        __this->__type->T(0),
        __this->__type->Precalced(1/*Fuse.Internal.Blender<T>*/),
    };
    uT ret2(__types[0], U_ALLOCA(__types[0]->ValueSize));
    uT ret3(__types[0], U_ALLOCA(__types[0]->ValueSize));
    uT ret4(__types[0], U_ALLOCA(__types[0]->ValueSize));
    uT ret5(__types[0], U_ALLOCA(__types[0]->ValueSize));
    uT ret6(__types[0], U_ALLOCA(__types[0]->ValueSize));
    uT diff(__types[0], U_ALLOCA(__types[0]->ValueSize));
    uT unit(__types[0], U_ALLOCA(__types[0]->ValueSize));
    uT sample(__types[0], U_ALLOCA(__types[0]->ValueSize));
    ;
    ;
    ;
    float elapsed_ = *elapsed;
    ;
    ;
    diff = (uPtr(__this->_blender)->Sub_ex(location, __this->_currentLocation(), &ret2), ret2);
    double length;
    unit = (uPtr(__this->_blender)->ToUnit_ex(diff, &length, &ret3), ret3);

    if (length < 9.9999997473787516e-06)
        unit = (uPtr(__this->_blender)->get_Zero_ex(&ret4), ret4);

    __this->_totalDistance = (__this->_totalDistance + length);
    __this->_currentLocation() = location;

    if (elapsed_ < 1e-05f)
        return;

    if ((elapsed_ + __this->_zeroElapsed) > __this->_elapsedLimit)
    {
        __this->_velocity() = (uPtr(__this->_blender)->get_Zero_ex(&ret5), ret5);
        elapsed_ = __this->_elapsedLimit;
        __this->_zeroElapsed = 0.0f;
        return;
    }
    else if (length < (double)__this->_moveThreshold)
        __this->_zeroElapsed = (__this->_zeroElapsed + elapsed_);

    float speed = (float)(length / (double)elapsed_);
    double tdP = ::g::Uno::Math::Clamp(__this->_totalDistance / (double)__this->_speedDistanceThreshold, 0.0, 1.0);
    speed = ::g::Uno::Math::Min1((float)((double)__this->_inSpeedLimit * tdP), speed);
    float aSpeed = speed;

    if (tdP >= 1.0)
    {
        float accelRange = ::g::Uno::Math::Clamp1(speed, __this->_accelThreshold, __this->_accelLimit) / (__this->_accelLimit - __this->_accelThreshold);
        float accel = accelRange * __this->_accelFactor;
        aSpeed = speed * accel;
    }

    sample = (uPtr(__this->_blender)->Weight_ex(unit, uCRef((double)aSpeed), &ret6), ret6);
    PointerVelocity__ApplySample_fn(__this, sample, uCRef(elapsed_));
}

// private void ApplySample(T sample, float elapsed) :684
void PointerVelocity__ApplySample_fn(PointerVelocity* __this, void* sample, float* elapsed)
{
    uType* __types[] = {
        __this->__type->T(0),
    };
    uT ret7(__types[0], U_ALLOCA(__types[0]->ValueSize));
    float elapsed_ = *elapsed;
    ;

    if (__this->_totalTime < 9.9999997473787516e-06)
        __this->_velocity() = sample;
    else
    {
        float alpha = ::g::Fuse::Internal::Statistics::ContinuousFilterAlpha(elapsed_, __this->_period);
        __this->_velocity() = (uPtr(__this->_blender)->Lerp_ex(__this->_velocity(), sample, uCRef((double)alpha), &ret7), ret7);
    }

    __this->_totalTime = (__this->_totalTime + (double)elapsed_);
}

// public T get_AverageVelocity() :599
void PointerVelocity__get_AverageVelocity_fn(PointerVelocity* __this, uTRef __retval)
{
    uType* __types[] = {
        __this->__type->T(0),
    };
    uT ret9(__types[0], U_ALLOCA(__types[0]->ValueSize));
    uT ret10(__types[0], U_ALLOCA(__types[0]->ValueSize));
    uT ret11(__types[0], U_ALLOCA(__types[0]->ValueSize));
    uT v(__types[0], U_ALLOCA(__types[0]->ValueSize));
    uT unit(__types[0], U_ALLOCA(__types[0]->ValueSize));
    ;
    ;
    ;
    v = (uPtr(__this->_blender)->Sub_ex(__this->_currentLocation(), __this->_startLocation(), &ret9), ret9);
    double length;
    unit = (uPtr(__this->_blender)->ToUnit_ex(v, &length, &ret10), ret10);
    float s = ((__this->_totalTime > 9.9999997473787516e-06) && (length > 9.9999997473787516e-06)) ? (float)(length / __this->_totalTime) : 0.0f;
    return __retval.Store((uPtr(__this->_blender)->Weight_ex(unit, uCRef((double)s), &ret11), ret11)), void();
}

// public T get_CurrentVelocity() :592
void PointerVelocity__get_CurrentVelocity_fn(PointerVelocity* __this, uTRef __retval)
{
    return __retval.Store(__this->_velocity()), void();
}

// public void set_CurrentVelocity(T value) :593
void PointerVelocity__set_CurrentVelocity_fn(PointerVelocity* __this, void* value)
{
    uType* __types[] = {
        __this->__type->T(0),
    };
    __this->_velocity() = value;
}

// public generated PointerVelocity New() :576
void PointerVelocity__New1_fn(uType* __type, PointerVelocity** __retval)
{
    *__retval = PointerVelocity::New1(__type);
}

// public float get_Period() :585
void PointerVelocity__get_Period_fn(PointerVelocity* __this, float* __retval)
{
    *__retval = __this->Period();
}

// public void set_Period(float value) :586
void PointerVelocity__set_Period_fn(PointerVelocity* __this, float* value)
{
    __this->Period(*value);
}

// public void Reset(T location0) :624
void PointerVelocity__Reset_fn(PointerVelocity* __this, void* location0)
{
    uType* __types[] = {
        __this->__type->T(0),
        __this->__type->Precalced(1/*Fuse.Internal.Blender<T>*/),
    };
    uT ret8(__types[0], U_ALLOCA(__types[0]->ValueSize));
    ;
    PointerVelocity__Reset1_fn(__this, location0, (uPtr(__this->_blender)->get_Zero_ex(&ret8), ret8));
}

// public void Reset(T location0, T velocity0) :629
void PointerVelocity__Reset1_fn(PointerVelocity* __this, void* location0, void* velocity0)
{
    uType* __types[] = {
        __this->__type->T(0),
    };
    __this->_velocity() = velocity0;
    __this->_totalTime = 0.0;
    __this->_startLocation() = (__this->_currentLocation() = location0);
    __this->_totalDistance = 0.0;
    __this->_zeroElapsed = 0.0f;
}

// public double get_TotalDistance() :612
void PointerVelocity__get_TotalDistance_fn(PointerVelocity* __this, double* __retval)
{
    *__retval = __this->TotalDistance();
}

// public generated PointerVelocity() [instance] :576
void PointerVelocity::ctor_()
{
    uType* __types[] = {
        __type->Precalced(0/*Fuse.Internal.BlenderMap.Get<T>*/),
        __type->T(0),
    };
    _blender = ((::g::Fuse::Internal::Blender*)::g::Fuse::Internal::BlenderMap::Get(__types[0]));
    _moveThreshold = 1.5f;
    _elapsedLimit = 0.045f;
    _period = 0.12f;
    _accelThreshold = 1000.0f;
    _accelLimit = 2000.0f;
    _accelFactor = 1.5f;
    _inSpeedLimit = 2000.0f;
    _speedDistanceThreshold = 50.0f;
}

// public float get_Period() [instance] :585
float PointerVelocity::Period()
{
    return _period;
}

// public void set_Period(float value) [instance] :586
void PointerVelocity::Period(float value)
{
    _period = value;
}

// public double get_TotalDistance() [instance] :612
double PointerVelocity::TotalDistance()
{
    return _totalDistance;
}

// public generated PointerVelocity New() [static] :576
PointerVelocity* PointerVelocity::New1(uType* __type)
{
    PointerVelocity* obj1 = (PointerVelocity*)uNew(__type);
    obj1->ctor_();
    return obj1;
}
// }

// C:\ProgramData\Uno\Packages\Experimental.Physics\0.18.8\$.uno(708)
// ------------------------------------------------------------------

// public abstract interface Simulation :708
// {
uInterfaceType* Simulation_typeof()
{
    static uSStrong<uInterfaceType*> type;
    if (type != NULL) return type;

    type = uInterfaceType::New("Experimental.Physics.Simulation", 0, 0);
    type->Reflection.SetFunctions(2,
        new uFunction("get_IsStatic", NULL, NULL, offsetof(Simulation, fp_get_IsStatic), false, ::g::Uno::Bool_typeof(), 0),
        new uFunction("Update", NULL, NULL, offsetof(Simulation, fp_Update), false, uVoid_typeof(), 1, ::g::Uno::Double_typeof()));
    return type;
}
// }

// C:\ProgramData\Uno\Packages\Experimental.Physics\0.18.8\$.uno(767)
// ------------------------------------------------------------------

// public sealed class SmoothSnap<T> :767
// {
SmoothSnap_type* SmoothSnap_typeof()
{
    static uSStrong<SmoothSnap_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 8;
    options.GenericCount = 1;
    options.InterfaceCount = 3;
    options.PrecalcCount = 2;
    options.ObjectSize = sizeof(SmoothSnap);
    options.TypeSize = sizeof(SmoothSnap_type);
    type = (SmoothSnap_type*)uClassType::New("Experimental.Physics.SmoothSnap`1", options);
    type->interface0.fp_Reset = (void(*)(uObject*, void*))SmoothSnap__Reset_fn;
    type->interface0.fp_get_Destination = (void(*)(uObject*, uTRef))SmoothSnap__get_Destination_fn;
    type->interface0.fp_set_Destination = (void(*)(uObject*, void*))SmoothSnap__set_Destination_fn;
    type->interface1.fp_get_Position = (void(*)(uObject*, uTRef))SmoothSnap__get_Position_fn;
    type->interface1.fp_set_Position = (void(*)(uObject*, void*))SmoothSnap__set_Position_fn;
    type->interface1.fp_get_Velocity = (void(*)(uObject*, uTRef))SmoothSnap__get_Velocity_fn;
    type->interface1.fp_set_Velocity = (void(*)(uObject*, void*))SmoothSnap__set_Velocity_fn;
    type->interface2.fp_Update = (void(*)(uObject*, double*))SmoothSnap__Update_fn;
    type->interface2.fp_get_IsStatic = (void(*)(uObject*, bool*))SmoothSnap__get_IsStatic_fn;
    ::TYPES[11] = ::g::Fuse::Internal::BlenderMap_typeof();
    ::TYPES[15] = ::g::Fuse::Internal::Blender_typeof();
    ::TYPES[12] = ::g::Uno::Double_typeof();
    ::TYPES[13] = ::g::Uno::Float_typeof();
    type->SetPrecalc(
        ::TYPES[11/*Fuse.Internal.BlenderMap*/]->MakeMethod(1, type->T(0)),
        ::TYPES[15/*Fuse.Internal.Blender`1*/]->MakeType(type->T(0)));
    type->SetInterfaces(
        ::g::Experimental::Physics::DestinationSimulation_typeof()->MakeType(type->T(0)), offsetof(SmoothSnap_type, interface0),
        ::g::Experimental::Physics::MotionSimulation_typeof()->MakeType(type->T(0)), offsetof(SmoothSnap_type, interface1),
        ::g::Experimental::Physics::Simulation_typeof(), offsetof(SmoothSnap_type, interface2));
    type->SetFields(0,
        ::g::Fuse::Internal::Blender_typeof()->MakeType(type->T(0)), offsetof(::g::Experimental::Physics::SmoothSnap, _blender), 0,
        ::g::Uno::Float_typeof(), offsetof(::g::Experimental::Physics::SmoothSnap, _scale), 0,
        ::g::Uno::Float_typeof(), offsetof(::g::Experimental::Physics::SmoothSnap, _speed), 0,
        ::g::Uno::Float_typeof(), offsetof(::g::Experimental::Physics::SmoothSnap, _speedDropoutDistance), 0,
        ::g::Uno::Float_typeof(), offsetof(::g::Experimental::Physics::SmoothSnap, _speedMin), 0,
        type->T(0), (uintptr_t)0, uFieldFlagsConstrained,
        type->T(0), (uintptr_t)0, uFieldFlagsConstrained,
        type->T(0), (uintptr_t)0, uFieldFlagsConstrained);
    type->Reflection.SetFunctions(14,
        new uFunction("CreateNormalized", type, (void*)SmoothSnap__CreateNormalized_fn, 0, true, type, 0),
        new uFunction("CreatePoints", type, (void*)SmoothSnap__CreatePoints_fn, 0, true, type, 0),
        new uFunction("get_Destination", NULL, (void*)SmoothSnap__get_Destination_fn, 0, false, type->T(0), 0),
        new uFunction("set_Destination", NULL, (void*)SmoothSnap__set_Destination_fn, 0, false, uVoid_typeof(), 1, type->T(0)),
        new uFunction("get_IsStatic", NULL, (void*)SmoothSnap__get_IsStatic_fn, 0, false, ::g::Uno::Bool_typeof(), 0),
        new uFunction(".ctor", type, (void*)SmoothSnap__New1_fn, 0, true, type, 1, ::g::Uno::Float_typeof()),
        new uFunction("get_Position", NULL, (void*)SmoothSnap__get_Position_fn, 0, false, type->T(0), 0),
        new uFunction("set_Position", NULL, (void*)SmoothSnap__set_Position_fn, 0, false, uVoid_typeof(), 1, type->T(0)),
        new uFunction("Reset", NULL, (void*)SmoothSnap__Reset_fn, 0, false, uVoid_typeof(), 1, type->T(0)),
        new uFunction("get_Speed", NULL, (void*)SmoothSnap__get_Speed_fn, 0, false, ::g::Uno::Float_typeof(), 0),
        new uFunction("set_Speed", NULL, (void*)SmoothSnap__set_Speed_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::Float_typeof()),
        new uFunction("Update", NULL, (void*)SmoothSnap__Update_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::Double_typeof()),
        new uFunction("get_Velocity", NULL, (void*)SmoothSnap__get_Velocity_fn, 0, false, type->T(0), 0),
        new uFunction("set_Velocity", NULL, (void*)SmoothSnap__set_Velocity_fn, 0, false, uVoid_typeof(), 1, type->T(0)));
    return type;
}

// public SmoothSnap([float scale]) :790
void SmoothSnap__ctor__fn(SmoothSnap* __this, float* scale)
{
    __this->ctor_(*scale);
}

// public static Experimental.Physics.SmoothSnap<T> CreateNormalized() :771
void SmoothSnap__CreateNormalized_fn(uType* __type, SmoothSnap** __retval)
{
    *__retval = SmoothSnap::CreateNormalized(__type);
}

// public static Experimental.Physics.SmoothSnap<T> CreatePoints() :780
void SmoothSnap__CreatePoints_fn(uType* __type, SmoothSnap** __retval)
{
    *__retval = SmoothSnap::CreatePoints(__type);
}

// public generated T get_Destination() :797
void SmoothSnap__get_Destination_fn(SmoothSnap* __this, uTRef __retval)
{
    return __retval.Store(__this->_Destination()), void();
}

// public generated void set_Destination(T value) :797
void SmoothSnap__set_Destination_fn(SmoothSnap* __this, void* value)
{
    uType* __types[] = {
        __this->__type->T(0),
    };
    __this->_Destination() = value;
}

// public bool get_IsStatic() :819
void SmoothSnap__get_IsStatic_fn(SmoothSnap* __this, bool* __retval)
{
    *__retval = __this->IsStatic();
}

// public SmoothSnap New([float scale]) :790
void SmoothSnap__New1_fn(uType* __type, float* scale, SmoothSnap** __retval)
{
    *__retval = SmoothSnap::New1(__type, *scale);
}

// public generated T get_Position() :795
void SmoothSnap__get_Position_fn(SmoothSnap* __this, uTRef __retval)
{
    return __retval.Store(__this->_Position()), void();
}

// public generated void set_Position(T value) :795
void SmoothSnap__set_Position_fn(SmoothSnap* __this, void* value)
{
    uType* __types[] = {
        __this->__type->T(0),
    };
    __this->_Position() = value;
}

// public void Reset(T destination) :799
void SmoothSnap__Reset_fn(SmoothSnap* __this, void* destination)
{
    uType* __types[] = {
        __this->__type->T(0),
        __this->__type->Precalced(1/*Fuse.Internal.Blender<T>*/),
    };
    uT ret2(__types[0], U_ALLOCA(__types[0]->ValueSize));
    ;
    SmoothSnap__set_Destination_fn(__this, destination);
    SmoothSnap__set_Velocity_fn(__this, (uPtr(__this->_blender)->get_Zero_ex(&ret2), ret2));
    SmoothSnap__set_Position_fn(__this, destination);
}

// public float get_Speed() :813
void SmoothSnap__get_Speed_fn(SmoothSnap* __this, float* __retval)
{
    *__retval = __this->Speed();
}

// public void set_Speed(float value) :814
void SmoothSnap__set_Speed_fn(SmoothSnap* __this, float* value)
{
    __this->Speed(*value);
}

// public void Update(double elapsed) :825
void SmoothSnap__Update_fn(SmoothSnap* __this, double* elapsed)
{
    __this->Update(*elapsed);
}

// public generated T get_Velocity() :796
void SmoothSnap__get_Velocity_fn(SmoothSnap* __this, uTRef __retval)
{
    return __retval.Store(__this->_Velocity()), void();
}

// public generated void set_Velocity(T value) :796
void SmoothSnap__set_Velocity_fn(SmoothSnap* __this, void* value)
{
    uType* __types[] = {
        __this->__type->T(0),
    };
    __this->_Velocity() = value;
}

// public SmoothSnap([float scale]) [instance] :790
void SmoothSnap::ctor_(float scale)
{
    uType* __types[] = {
        __type->Precalced(0/*Fuse.Internal.BlenderMap.Get<T>*/),
        __type->T(0),
    };
    _blender = ((::g::Fuse::Internal::Blender*)::g::Fuse::Internal::BlenderMap::Get(__types[0]));
    _scale = 1.0f;
    _speedMin = 25.0f;
    _speedDropoutDistance = 100.0f;
    _speed = 600.0f;
    _scale = scale;
}

// public bool get_IsStatic() [instance] :819
bool SmoothSnap::IsStatic()
{
    uType* __types[] = {
        __type->T(0),
    };
    uT ret15(__types[0], U_ALLOCA(__types[0]->ValueSize));
    uT ret16(__types[0], U_ALLOCA(__types[0]->ValueSize));
    uT ret17(__types[0], U_ALLOCA(__types[0]->ValueSize));
    double ret14;
    ;
    ;
    ;
    return (uPtr(_blender)->Length_ex((uPtr(_blender)->Sub_ex((SmoothSnap__get_Destination_fn(this, &ret16), ret16), (SmoothSnap__get_Position_fn(this, &ret17), ret17), &ret15), ret15), &ret14), ret14) < (double)_scale;
}

// public float get_Speed() [instance] :813
float SmoothSnap::Speed()
{
    return _speed;
}

// public void set_Speed(float value) [instance] :814
void SmoothSnap::Speed(float value)
{
    _speed = value;
}

// public void Update(double elapsed) [instance] :825
void SmoothSnap::Update(double elapsed)
{
    uType* __types[] = {
        __type->T(0),
        __type->Precalced(1/*Fuse.Internal.Blender<T>*/),
    };
    uT ret3(__types[0], U_ALLOCA(__types[0]->ValueSize));
    uT ret4(__types[0], U_ALLOCA(__types[0]->ValueSize));
    uT ret5(__types[0], U_ALLOCA(__types[0]->ValueSize));
    uT ret6(__types[0], U_ALLOCA(__types[0]->ValueSize));
    uT ret7(__types[0], U_ALLOCA(__types[0]->ValueSize));
    uT ret8(__types[0], U_ALLOCA(__types[0]->ValueSize));
    uT ret9(__types[0], U_ALLOCA(__types[0]->ValueSize));
    uT ret10(__types[0], U_ALLOCA(__types[0]->ValueSize));
    uT ret11(__types[0], U_ALLOCA(__types[0]->ValueSize));
    uT ret12(__types[0], U_ALLOCA(__types[0]->ValueSize));
    uT ret13(__types[0], U_ALLOCA(__types[0]->ValueSize));
    uT off(__types[0], U_ALLOCA(__types[0]->ValueSize));
    uT offUnit(__types[0], U_ALLOCA(__types[0]->ValueSize));
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    off = (uPtr(_blender)->Sub_ex((SmoothSnap__get_Destination_fn(this, &ret4), ret4), (SmoothSnap__get_Position_fn(this, &ret5), ret5), &ret3), ret3);
    double offLen;
    offUnit = (uPtr(_blender)->ToUnit_ex(off, &offLen, &ret6), ret6);
    float useSpeed = Speed();

    if (offLen < (double)_speedDropoutDistance)
        useSpeed = (((float)offLen / _speedDropoutDistance) * (Speed() - _speedMin)) + _speedMin;

    if (offLen < ((double)useSpeed * elapsed))
    {
        SmoothSnap__set_Position_fn(this, (SmoothSnap__get_Destination_fn(this, &ret7), ret7));
        SmoothSnap__set_Velocity_fn(this, (uPtr(_blender)->get_Zero_ex(&ret8), ret8));
        return;
    }

    SmoothSnap__set_Velocity_fn(this, (uPtr(_blender)->Weight_ex(offUnit, uCRef((double)useSpeed), &ret9), ret9));
    SmoothSnap__set_Position_fn(this, (uPtr(_blender)->Add_ex((SmoothSnap__get_Position_fn(this, &ret11), ret11), (uPtr(_blender)->Weight_ex((SmoothSnap__get_Velocity_fn(this, &ret13), ret13), uCRef((double)(float)elapsed), &ret12), ret12), &ret10), ret10));
}

// public static Experimental.Physics.SmoothSnap<T> CreateNormalized() [static] :771
SmoothSnap* SmoothSnap::CreateNormalized(uType* __type)
{
    SmoothSnap* s = SmoothSnap::New1(__type, 1e-05f);
    s->_speedMin = 0.2f;
    s->_speedDropoutDistance = 0.4f;
    s->_speed = 3.5f;
    return s;
}

// public static Experimental.Physics.SmoothSnap<T> CreatePoints() [static] :780
SmoothSnap* SmoothSnap::CreatePoints(uType* __type)
{
    SmoothSnap* s = SmoothSnap::New1(__type, 1e-05f);
    s->_speedMin = 25.0f;
    s->_speedDropoutDistance = 100.0f;
    s->_speed = 600.0f;
    return s;
}

// public SmoothSnap New([float scale]) [static] :790
SmoothSnap* SmoothSnap::New1(uType* __type, float scale)
{
    SmoothSnap* obj1 = (SmoothSnap*)uNew(__type);
    obj1->ctor_(scale);
    return obj1;
}
// }

}}} // ::g::Experimental::Physics
