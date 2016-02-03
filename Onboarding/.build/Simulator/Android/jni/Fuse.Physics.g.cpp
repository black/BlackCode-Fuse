// This file was generated based on '(multiple files)'.
// WARNING: Changes might be lost if you edit this file directly.

#include <Fuse.Animations.AnimationVariant.h>
#include <Fuse.Behavior.h>
#include <Fuse.Elements.Element.h>
#include <Fuse.Input.Pointer.h>
#include <Fuse.Input.PointerEnteredHandler.h>
#include <Fuse.Input.PointerEventArgs.h>
#include <Fuse.Input.PointerLeftHandler.h>
#include <Fuse.Input.PointerMovedArgs.h>
#include <Fuse.Input.PointerMovedHandler.h>
#include <Fuse.Input.PointerPressedArgs.h>
#include <Fuse.Input.PointerPressedHandler.h>
#include <Fuse.Input.PointerReleasedArgs.h>
#include <Fuse.Input.PointerReleasedHandler.h>
#include <Fuse.Input.PointerWheelMovedHandler.h>
#include <Fuse.Node.h>
#include <Fuse.NodeEventArgs.h>
#include <Fuse.Physics.Body.h>
#include <Fuse.Physics.Draggable.h>
#include <Fuse.Physics.EnteredForceField.h>
#include <Fuse.Physics.ExitedForceField.h>
#include <Fuse.Physics.ForceField.h>
#include <Fuse.Physics.ForceFieldEventArgs.h>
#include <Fuse.Physics.ForceFieldEventHandler.h>
#include <Fuse.Physics.ForceFieldEventTrigger.h>
#include <Fuse.Physics.ForceFieldTrigger.h>
#include <Fuse.Physics.InForceFieldAnimation.h>
#include <Fuse.Physics.IRule.h>
#include <Fuse.Physics.PointAttractor.h>
#include <Fuse.Physics.Spring.h>
#include <Fuse.Physics.WhileDragging.h>
#include <Fuse.Physics.World.h>
#include <Fuse.Properties.h>
#include <Fuse.PropertyHandle.h>
#include <Fuse.Scripting.IEventSerializer.h>
#include <Fuse.Time.h>
#include <Fuse.Transform.h>
#include <Fuse.Translation.h>
#include <Fuse.Triggers.Trigger.h>
#include <Fuse.UpdateManager.h>
#include <Fuse.UpdateStage.h>
#include <Uno.Action.h>
#include <Uno.Bool.h>
#include <Uno.Collections.ICollection-1.h>
#include <Uno.Collections.IEnumerable-1.h>
#include <Uno.Collections.IEnumerator.h>
#include <Uno.Collections.IEnumerator-1.h>
#include <Uno.Collections.IList-1.h>
#include <Uno.Collections.List-1.Enumerator.h>
#include <Uno.Collections.List-1.h>
#include <Uno.Delegate.h>
#include <Uno.Double.h>
#include <Uno.Float.h>
#include <Uno.Float2.h>
#include <Uno.Float3.h>
#include <Uno.Float4.h>
#include <Uno.Float4x4.h>
#include <Uno.Geometry.Box.h>
#include <Uno.Int.h>
#include <Uno.Math.h>
#include <Uno.Object.h>
#include <Uno.String.h>
#include <Uno.Vector.h>
static uString* STRINGS[1];
static uType* TYPES[36];

namespace g{
namespace Fuse{
namespace Physics{

// C:\ProgramData\Uno\Packages\Fuse.Physics\0.19.3\$.uno(10)
// ---------------------------------------------------------

// internal sealed class Body :10
// {
// static Body() :10
static void Body__cctor__fn(uType* __type)
{
    Body::_frictionHandle_ = ::g::Fuse::Properties::CreateHandle();
}

uType* Body_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 9;
    options.ObjectSize = sizeof(Body);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Fuse.Physics.Body", options);
    type->fp_cctor_ = Body__cctor__fn;
    ::TYPES[0] = ::g::Fuse::Node_typeof();
    ::TYPES[1] = ::g::Fuse::Transform_typeof();
    ::TYPES[2] = ::g::Uno::Float_typeof();
    ::TYPES[3] = uObject_typeof();
    ::TYPES[4] = ::g::Fuse::Translation_typeof();
    ::TYPES[5] = ::g::Fuse::Elements::Element_typeof();
    ::TYPES[6] = ::g::Uno::Float3_typeof();
    ::TYPES[7] = ::g::Uno::Float2_typeof();
    ::TYPES[8] = ::g::Uno::Double_typeof();
    ::TYPES[9] = ::g::Uno::Geometry::Box_typeof();
    ::TYPES[10] = ::g::Uno::Float4_typeof();
    type->SetFields(0,
        ::g::Fuse::Elements::Element_typeof(), offsetof(::g::Fuse::Physics::Body, _constraint), 0,
        uObject_typeof(), offsetof(::g::Fuse::Physics::Body, _motionOwner), 0,
        ::g::Uno::Float3_typeof(), offsetof(::g::Fuse::Physics::Body, _position), 0,
        ::g::Fuse::Translation_typeof(), offsetof(::g::Fuse::Physics::Body, _translation), 0,
        ::g::Uno::Float3_typeof(), offsetof(::g::Fuse::Physics::Body, _velocity), 0,
        ::g::Fuse::Node_typeof(), offsetof(::g::Fuse::Physics::Body, Node), 0,
        ::g::Uno::Int_typeof(), offsetof(::g::Fuse::Physics::Body, PinCount), 0,
        ::g::Fuse::Physics::World_typeof(), offsetof(::g::Fuse::Physics::Body, World), 0,
        ::g::Fuse::PropertyHandle_typeof(), (uintptr_t)&::g::Fuse::Physics::Body::_frictionHandle_, uFieldFlagsStatic);
    return type;
}

// internal Body(Fuse.Physics.World world, Fuse.Node node) :46
void Body__ctor__fn(Body* __this, ::g::Fuse::Physics::World* world, ::g::Fuse::Node* node)
{
    __this->ctor_(world, node);
}

// internal void ApplyForce(float3 force) :98
void Body__ApplyForce_fn(Body* __this, ::g::Uno::Float3* force)
{
    __this->ApplyForce(*force);
}

// private void ApplyFriction(double deltaTime) :154
void Body__ApplyFriction_fn(Body* __this, double* deltaTime)
{
    __this->ApplyFriction(*deltaTime);
}

// private void ApplyMotion(double deltaTime) :164
void Body__ApplyMotion_fn(Body* __this, double* deltaTime)
{
    __this->ApplyMotion(*deltaTime);
}

// internal float3 get_CenterPosition() :43
void Body__get_CenterPosition_fn(Body* __this, ::g::Uno::Float3* __retval)
{
    *__retval = __this->CenterPosition();
}

// internal void ConstrainToBounds(Fuse.Elements.Element elm) :92
void Body__ConstrainToBounds_fn(Body* __this, ::g::Fuse::Elements::Element* elm)
{
    __this->ConstrainToBounds(elm);
}

// internal void Dispose() :55
void Body__Dispose_fn(Body* __this)
{
    __this->Dispose();
}

// internal float get_Friction() :30
void Body__get_Friction_fn(Body* __this, float* __retval)
{
    *__retval = __this->Friction();
}

// internal void set_Friction(float value) :31
void Body__set_Friction_fn(Body* __this, float* value)
{
    __this->Friction(*value);
}

// public static float GetFriction(Fuse.Node n) :15
void Body__GetFriction_fn(::g::Fuse::Node* n, float* __retval)
{
    *__retval = Body::GetFriction(n);
}

// internal void Move(float3 delta) :85
void Body__Move_fn(Body* __this, ::g::Uno::Float3* delta)
{
    __this->Move(*delta);
}

// internal Body New(Fuse.Physics.World world, Fuse.Node node) :46
void Body__New1_fn(::g::Fuse::Physics::World* world, ::g::Fuse::Node* node, Body** __retval)
{
    *__retval = Body::New1(world, node);
}

// internal static Fuse.Physics.Body Pin(Fuse.Node n) :60
void Body__Pin_fn(::g::Fuse::Node* n, Body** __retval)
{
    *__retval = Body::Pin(n);
}

// public static void SetFriction(Fuse.Node n, float friction) :23
void Body__SetFriction_fn(::g::Fuse::Node* n, float* friction)
{
    Body::SetFriction(n, *friction);
}

// internal bool TryLockMotion(object owner) :72
void Body__TryLockMotion_fn(Body* __this, uObject* owner, bool* __retval)
{
    *__retval = __this->TryLockMotion(owner);
}

// internal void UnlockMotion() :80
void Body__UnlockMotion_fn(Body* __this)
{
    __this->UnlockMotion();
}

// internal void Unpin() :65
void Body__Unpin_fn(Body* __this)
{
    __this->Unpin();
}

// internal void Update(double deltaTime) :116
void Body__Update_fn(Body* __this, double* deltaTime)
{
    __this->Update(*deltaTime);
}

// internal float3 get_WorldPosition() :107
void Body__get_WorldPosition_fn(Body* __this, ::g::Uno::Float3* __retval)
{
    *__retval = __this->WorldPosition();
}

uSStrong< ::g::Fuse::PropertyHandle*> Body::_frictionHandle_;

// internal Body(Fuse.Physics.World world, Fuse.Node node) [instance] :46
void Body::ctor_(::g::Fuse::Physics::World* world, ::g::Fuse::Node* node)
{
    Node = node;
    _translation = ::g::Fuse::Translation::New1();
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(Node)->Transforms()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::TYPES[1/*Fuse.Transform*/])), _translation);
    World = world;
}

// internal void ApplyForce(float3 force) [instance] :98
void Body::ApplyForce(::g::Uno::Float3 force)
{
    _velocity = ::g::Uno::Float3__op_Addition2(_velocity, force);
}

// private void ApplyFriction(double deltaTime) [instance] :154
void Body::ApplyFriction(double deltaTime)
{
    float friction = Friction();

    for (double t = 0.0; t < deltaTime; t = t + 0.001)
        _velocity = ::g::Uno::Float3__op_Multiply1(_velocity, 1.0f - friction);
}

// private void ApplyMotion(double deltaTime) [instance] :164
void Body::ApplyMotion(double deltaTime)
{
    if (_motionOwner != NULL)
        return;

    _position = ::g::Uno::Float3__op_Addition2(_position, ::g::Uno::Float3__op_Multiply1(::g::Uno::Float3__op_Multiply1(_velocity, (float)deltaTime), 5.0f));
}

// internal float3 get_CenterPosition() [instance] :43
::g::Uno::Float3 Body::CenterPosition()
{
    ::g::Uno::Float4 ind1 = ::g::Uno::Vector::Transform4(uPtr(Node)->LocalBounds().Center(), uPtr(Node)->WorldTransform());
    return ::g::Uno::Float3__New2(ind1.X, ind1.Y, ind1.Z);
}

// internal void ConstrainToBounds(Fuse.Elements.Element elm) [instance] :92
void Body::ConstrainToBounds(::g::Fuse::Elements::Element* elm)
{
    _constraint = elm;
}

// internal void Dispose() [instance] :55
void Body::Dispose()
{
    bool ret3;
    ::g::Uno::Collections::ICollection::Remove_ex(uInterface(uPtr(uPtr(Node)->Transforms()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::TYPES[1/*Fuse.Transform*/])), _translation, &ret3);
}

// internal float get_Friction() [instance] :30
float Body::Friction()
{
    return Body::GetFriction(Node);
}

// internal void set_Friction(float value) [instance] :31
void Body::Friction(float value)
{
    Body::SetFriction(Node, value);
}

// internal void Move(float3 delta) [instance] :85
void Body::Move(::g::Uno::Float3 delta)
{
    _position = ::g::Uno::Float3__op_Addition2(_position, delta);
}

// internal bool TryLockMotion(object owner) [instance] :72
bool Body::TryLockMotion(uObject* owner)
{
    if (_motionOwner != NULL)
        return false;

    _motionOwner = owner;
    return true;
}

// internal void UnlockMotion() [instance] :80
void Body::UnlockMotion()
{
    _motionOwner = NULL;
}

// internal void Unpin() [instance] :65
void Body::Unpin()
{
    uPtr(World)->UnpinBody(this);
}

// internal void Update(double deltaTime) [instance] :116
void Body::Update(double deltaTime)
{
    ApplyFriction(deltaTime);
    ApplyMotion(deltaTime);
    uPtr(_translation)->Vector(_position);

    if (_constraint != NULL)
    {
        ::g::Uno::Float3 p = WorldPosition();
        ::g::Uno::Float2 s = ::g::Uno::Float2__New1(0.0f);

        if (uIs(Node, ::TYPES[5/*Fuse.Elements.Element*/]))
            s = uPtr(uAs< ::g::Fuse::Elements::Element*>(Node, ::TYPES[5/*Fuse.Elements.Element*/]))->ActualSize();

        ::g::Uno::Float3 bmin = uPtr(_constraint)->WorldPosition();
        ::g::Uno::Float3 bmax = ::g::Uno::Float3__op_Addition2(::g::Uno::Float3__New4(uPtr(_constraint)->ActualSize(), 0.0f), bmin);
        p.X = ::g::Uno::Math::Max1(p.X, bmin.X);
        p.Y = ::g::Uno::Math::Max1(p.Y, bmin.Y);
        p.Z = ::g::Uno::Math::Max1(p.Z, bmin.Z);
        p.X = ::g::Uno::Math::Min1(p.X, bmax.X - s.X);
        p.Y = ::g::Uno::Math::Min1(p.Y, bmax.Y - s.Y);
        p.Z = ::g::Uno::Math::Max1(p.Z, bmax.Z);
        ::g::Uno::Float3 d = ::g::Uno::Float3__op_Subtraction2(p, WorldPosition());

        if ((double)::g::Uno::Vector::Length1(d) > 0.01)
        {
            _position = ::g::Uno::Float3__op_Addition2(_position, d);
            uPtr(_translation)->Vector(_position);
            _velocity = ::g::Uno::Float3__New1(0.0f);
        }
    }
}

// internal float3 get_WorldPosition() [instance] :107
::g::Uno::Float3 Body::WorldPosition()
{
    return uPtr(Node)->WorldPosition();
}

// public static float GetFriction(Fuse.Node n) [static] :15
float Body::GetFriction(::g::Fuse::Node* n)
{
    Body_typeof()->Init();
    uObject* f = uPtr(uPtr(n)->Properties())->Get(Body::_frictionHandle());

    if (f == NULL)
        return 0.05f;
    else
        return uUnbox<float>(::TYPES[2/*float*/], f);
}

// internal Body New(Fuse.Physics.World world, Fuse.Node node) [static] :46
Body* Body::New1(::g::Fuse::Physics::World* world, ::g::Fuse::Node* node)
{
    Body* obj2 = (Body*)uNew(Body_typeof());
    obj2->ctor_(world, node);
    return obj2;
}

// internal static Fuse.Physics.Body Pin(Fuse.Node n) [static] :60
Body* Body::Pin(::g::Fuse::Node* n)
{
    Body_typeof()->Init();
    return uPtr(::g::Fuse::Physics::World::FindWorld(n))->PinBody(n);
}

// public static void SetFriction(Fuse.Node n, float friction) [static] :23
void Body::SetFriction(::g::Fuse::Node* n, float friction)
{
    Body_typeof()->Init();
    uPtr(uPtr(n)->Properties())->Set(Body::_frictionHandle(), uBox(::TYPES[2/*float*/], friction));
}
// }

// C:\ProgramData\Uno\Packages\Fuse.Physics\0.19.3\$.uno(178)
// ----------------------------------------------------------

// public sealed class Draggable :178
// {
Draggable_type* Draggable_typeof()
{
    static uSStrong<Draggable_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 8;
    options.InterfaceCount = 1;
    options.ObjectSize = sizeof(Draggable);
    options.TypeSize = sizeof(Draggable_type);
    type = (Draggable_type*)uClassType::New("Fuse.Physics.Draggable", options);
    type->SetBase(::g::Fuse::Behavior_typeof());
    type->fp_ctor_ = (void*)Draggable__New1_fn;
    type->fp_OnRooted = (void(*)(::g::Fuse::Behavior*, ::g::Fuse::Node*))Draggable__OnRooted_fn;
    type->fp_OnUnrooted = (void(*)(::g::Fuse::Behavior*, ::g::Fuse::Node*))Draggable__OnUnrooted_fn;
    type->interface0.fp_Update = (void(*)(uObject*, double*, ::g::Fuse::Physics::World*))Draggable__Fuse_Physics_IRule_Update_fn;
    ::TYPES[2] = ::g::Uno::Float_typeof();
    ::TYPES[11] = ::g::Fuse::Input::PointerEventArgs_typeof();
    ::TYPES[12] = ::g::Uno::Bool_typeof();
    ::TYPES[13] = ::g::Fuse::Physics::Body_typeof();
    ::TYPES[3] = uObject_typeof();
    ::TYPES[14] = ::g::Uno::Action_typeof();
    ::TYPES[15] = ::g::Fuse::NodeEventArgs_typeof();
    ::TYPES[16] = ::g::Fuse::Behavior_typeof();
    ::TYPES[17] = ::g::Fuse::Physics::IRule_typeof();
    ::TYPES[18] = ::g::Fuse::Input::PointerPressedHandler_typeof();
    ::TYPES[19] = ::g::Fuse::Input::PointerMovedHandler_typeof();
    ::TYPES[20] = ::g::Fuse::Input::PointerReleasedHandler_typeof();
    type->SetInterfaces(
        ::g::Fuse::Physics::IRule_typeof(), offsetof(Draggable_type, interface0));
    type->SetFields(3,
        ::g::Fuse::Physics::Body_typeof(), offsetof(::g::Fuse::Physics::Draggable, _body), 0,
        ::g::Uno::Float3_typeof(), offsetof(::g::Fuse::Physics::Draggable, _forceMotion), 0,
        ::g::Uno::Bool_typeof(), offsetof(::g::Fuse::Physics::Draggable, _hasLock), 0,
        ::g::Uno::Float3_typeof(), offsetof(::g::Fuse::Physics::Draggable, _pos), 0,
        ::g::Fuse::Elements::Element_typeof(), offsetof(::g::Fuse::Physics::Draggable, _Bounds), 0);
    type->Reflection.SetFunctions(3,
        new uFunction("get_Bounds", NULL, (void*)Draggable__get_Bounds_fn, 0, false, ::g::Fuse::Elements::Element_typeof(), 0),
        new uFunction("set_Bounds", NULL, (void*)Draggable__set_Bounds_fn, 0, false, uVoid_typeof(), 1, ::g::Fuse::Elements::Element_typeof()),
        new uFunction(".ctor", NULL, (void*)Draggable__New1_fn, 0, true, Draggable_typeof(), 0));
    return type;
}

// public generated Draggable() :178
void Draggable__ctor_1_fn(Draggable* __this)
{
    __this->ctor_1();
}

// public generated Fuse.Elements.Element get_Bounds() :182
void Draggable__get_Bounds_fn(Draggable* __this, ::g::Fuse::Elements::Element** __retval)
{
    *__retval = __this->Bounds();
}

// public generated void set_Bounds(Fuse.Elements.Element value) :182
void Draggable__set_Bounds_fn(Draggable* __this, ::g::Fuse::Elements::Element* value)
{
    __this->Bounds(value);
}

// private void Fuse.Physics.IRule.Update(double deltaTime, Fuse.Physics.World world) :264
void Draggable__Fuse_Physics_IRule_Update_fn(Draggable* __this, double* deltaTime, ::g::Fuse::Physics::World* world)
{
    double deltaTime_ = *deltaTime;
    uPtr(__this->_body)->Move(__this->_forceMotion);
    uPtr(__this->_body)->ApplyForce(::g::Uno::Float3__op_Division1(::g::Uno::Float3__op_Multiply1(__this->_forceMotion, 0.3f), (float)deltaTime_));
    uPtr(__this->_body)->ConstrainToBounds(__this->Bounds());
    __this->_forceMotion = ::g::Uno::Float3__New1(0.0f);
}

// private float3 GetPointerPosition(Fuse.Input.PointerEventArgs args) :205
void Draggable__GetPointerPosition_fn(Draggable* __this, ::g::Fuse::Input::PointerEventArgs* args, ::g::Uno::Float3* __retval)
{
    *__retval = __this->GetPointerPosition(args);
}

// public generated Draggable New() :178
void Draggable__New1_fn(Draggable** __retval)
{
    *__retval = Draggable::New1();
}

// private void OnMoved(object sender, Fuse.Input.PointerMovedArgs args) :241
void Draggable__OnMoved_fn(Draggable* __this, uObject* sender, ::g::Fuse::Input::PointerMovedArgs* args)
{
    __this->OnMoved(sender, args);
}

// private void OnPointerLost() :229
void Draggable__OnPointerLost_fn(Draggable* __this)
{
    __this->OnPointerLost();
}

// private void OnPressed(object sender, Fuse.Input.PointerPressedArgs args) :214
void Draggable__OnPressed_fn(Draggable* __this, uObject* sender, ::g::Fuse::Input::PointerPressedArgs* args)
{
    __this->OnPressed(sender, args);
}

// private void OnReleased(object sender, Fuse.Input.PointerReleasedArgs args) :252
void Draggable__OnReleased_fn(Draggable* __this, uObject* sender, ::g::Fuse::Input::PointerReleasedArgs* args)
{
    __this->OnReleased(sender, args);
}

// protected override sealed void OnRooted(Fuse.Node parentNode) :184
void Draggable__OnRooted_fn(Draggable* __this, ::g::Fuse::Node* parentNode)
{
    ::g::Fuse::Behavior__OnRooted_fn(__this, parentNode);
    __this->_body = ::g::Fuse::Physics::Body::Pin(__this->ParentNode());
    uPtr(uPtr(__this->_body)->World)->AddRule((uObject*)__this);
    ::g::Fuse::Input::Pointer::AddHandlers(__this->ParentNode(), uDelegate::New(::TYPES[18/*Fuse.Input.PointerPressedHandler*/], (void*)Draggable__OnPressed_fn, __this), uDelegate::New(::TYPES[19/*Fuse.Input.PointerMovedHandler*/], (void*)Draggable__OnMoved_fn, __this), uDelegate::New(::TYPES[20/*Fuse.Input.PointerReleasedHandler*/], (void*)Draggable__OnReleased_fn, __this), NULL, NULL, NULL);
}

// protected override sealed void OnUnrooted(Fuse.Node parentNode) :194
void Draggable__OnUnrooted_fn(Draggable* __this, ::g::Fuse::Node* parentNode)
{
    uPtr(uPtr(__this->_body)->World)->RemoveRule((uObject*)__this);
    uPtr(__this->_body)->Unpin();
    __this->_body = NULL;
    ::g::Fuse::Input::Pointer::RemoveHandlers(__this->ParentNode(), uDelegate::New(::TYPES[18/*Fuse.Input.PointerPressedHandler*/], (void*)Draggable__OnPressed_fn, __this), uDelegate::New(::TYPES[19/*Fuse.Input.PointerMovedHandler*/], (void*)Draggable__OnMoved_fn, __this), uDelegate::New(::TYPES[20/*Fuse.Input.PointerReleasedHandler*/], (void*)Draggable__OnReleased_fn, __this), NULL, NULL, NULL);
    ::g::Fuse::Behavior__OnUnrooted_fn(__this, parentNode);
}

// public generated Draggable() [instance] :178
void Draggable::ctor_1()
{
    ctor_();
}

// public generated Fuse.Elements.Element get_Bounds() [instance] :182
::g::Fuse::Elements::Element* Draggable::Bounds()
{
    return _Bounds;
}

// public generated void set_Bounds(Fuse.Elements.Element value) [instance] :182
void Draggable::Bounds(::g::Fuse::Elements::Element* value)
{
    _Bounds = value;
}

// private float3 GetPointerPosition(Fuse.Input.PointerEventArgs args) [instance] :205
::g::Uno::Float3 Draggable::GetPointerPosition(::g::Fuse::Input::PointerEventArgs* args)
{
    return ::g::Uno::Float3__New4(uPtr(args)->WindowPoint(), 0.0f);
}

// private void OnMoved(object sender, Fuse.Input.PointerMovedArgs args) [instance] :241
void Draggable::OnMoved(uObject* sender, ::g::Fuse::Input::PointerMovedArgs* args)
{
    if (!_hasLock)
        return;

    ::g::Uno::Float3 newPos = GetPointerPosition(args);
    ::g::Uno::Float3 delta = ::g::Uno::Float3__op_Subtraction2(newPos, _pos);
    _pos = newPos;
    _forceMotion = ::g::Uno::Float3__op_Addition2(_forceMotion, delta);
}

// private void OnPointerLost() [instance] :229
void Draggable::OnPointerLost()
{
    if (_hasLock)
    {
        _hasLock = false;
        uPtr(_body)->UnlockMotion();
        ::g::Fuse::Physics::WhileDragging::End(uPtr(_body)->Node);
    }
}

// private void OnPressed(object sender, Fuse.Input.PointerPressedArgs args) [instance] :214
void Draggable::OnPressed(uObject* sender, ::g::Fuse::Input::PointerPressedArgs* args)
{
    if (_hasLock)
        return;

    if (uPtr(args)->TryHardCapture(this, uDelegate::New(::TYPES[14/*Uno.Action*/], (void*)Draggable__OnPointerLost_fn, this), uPtr(args)->Node()))
    {
        _hasLock = uPtr(_body)->TryLockMotion(this);

        if (!_hasLock)
            return;

        ::g::Fuse::Physics::WhileDragging::Begin(uPtr(_body)->Node);
        _pos = GetPointerPosition(args);
    }
}

// private void OnReleased(object sender, Fuse.Input.PointerReleasedArgs args) [instance] :252
void Draggable::OnReleased(uObject* sender, ::g::Fuse::Input::PointerReleasedArgs* args)
{
    if (_hasLock)
    {
        uPtr(args)->ReleaseHardCapture(this);
        _hasLock = false;
        uPtr(_body)->UnlockMotion();
        ::g::Fuse::Physics::WhileDragging::End(uPtr(_body)->Node);
    }
}

// public generated Draggable New() [static] :178
Draggable* Draggable::New1()
{
    Draggable* obj1 = (Draggable*)uNew(Draggable_typeof());
    obj1->ctor_1();
    return obj1;
}
// }

// C:\ProgramData\Uno\Packages\Fuse.Physics\0.19.3\$.uno(396)
// ----------------------------------------------------------

// public sealed class EnteredForceField :396
// {
::g::Fuse::Physics::ForceFieldTrigger_type* EnteredForceField_typeof()
{
    static uSStrong< ::g::Fuse::Physics::ForceFieldTrigger_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 18;
    options.ObjectSize = sizeof(EnteredForceField);
    options.TypeSize = sizeof(::g::Fuse::Physics::ForceFieldTrigger_type);
    type = (::g::Fuse::Physics::ForceFieldTrigger_type*)uClassType::New("Fuse.Physics.EnteredForceField", options);
    type->SetBase(::g::Fuse::Physics::ForceFieldEventTrigger_typeof());
    type->fp_ctor_ = (void*)EnteredForceField__New1_fn;
    type->fp_SetForce = (void(*)(::g::Fuse::Physics::ForceFieldTrigger*, ::g::Fuse::Physics::Body*, float*))EnteredForceField__SetForce_fn;
    type->SetFields(16,
        ::g::Uno::Float_typeof(), offsetof(::g::Fuse::Physics::EnteredForceField, _oldForce), 0,
        ::g::Uno::Float_typeof(), offsetof(::g::Fuse::Physics::EnteredForceField, _Threshold), 0);
    type->Reflection.SetFunctions(3,
        new uFunction(".ctor", NULL, (void*)EnteredForceField__New1_fn, 0, true, EnteredForceField_typeof(), 0),
        new uFunction("get_Threshold", NULL, (void*)EnteredForceField__get_Threshold_fn, 0, false, ::g::Uno::Float_typeof(), 0),
        new uFunction("set_Threshold", NULL, (void*)EnteredForceField__set_Threshold_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::Float_typeof()));
    return type;
}

// public generated EnteredForceField() :396
void EnteredForceField__ctor_4_fn(EnteredForceField* __this)
{
    __this->ctor_4();
}

// public generated EnteredForceField New() :396
void EnteredForceField__New1_fn(EnteredForceField** __retval)
{
    *__retval = EnteredForceField::New1();
}

// protected internal override sealed void SetForce(Fuse.Physics.Body body, float force) :402
void EnteredForceField__SetForce_fn(EnteredForceField* __this, ::g::Fuse::Physics::Body* body, float* force)
{
    float force_ = *force;

    if ((__this->_oldForce <= __this->Threshold()) && (force_ > __this->Threshold()))
        __this->OnTriggered(body);

    __this->_oldForce = force_;
}

// public generated float get_Threshold() :398
void EnteredForceField__get_Threshold_fn(EnteredForceField* __this, float* __retval)
{
    *__retval = __this->Threshold();
}

// public generated void set_Threshold(float value) :398
void EnteredForceField__set_Threshold_fn(EnteredForceField* __this, float* value)
{
    __this->Threshold(*value);
}

// public generated EnteredForceField() [instance] :396
void EnteredForceField::ctor_4()
{
    ctor_3();
}

// public generated float get_Threshold() [instance] :398
float EnteredForceField::Threshold()
{
    return _Threshold;
}

// public generated void set_Threshold(float value) [instance] :398
void EnteredForceField::Threshold(float value)
{
    _Threshold = value;
}

// public generated EnteredForceField New() [static] :396
EnteredForceField* EnteredForceField::New1()
{
    EnteredForceField* obj1 = (EnteredForceField*)uNew(EnteredForceField_typeof());
    obj1->ctor_4();
    return obj1;
}
// }

// C:\ProgramData\Uno\Packages\Fuse.Physics\0.19.3\$.uno(409)
// ----------------------------------------------------------

// public sealed class ExitedForceField :409
// {
::g::Fuse::Physics::ForceFieldTrigger_type* ExitedForceField_typeof()
{
    static uSStrong< ::g::Fuse::Physics::ForceFieldTrigger_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 18;
    options.ObjectSize = sizeof(ExitedForceField);
    options.TypeSize = sizeof(::g::Fuse::Physics::ForceFieldTrigger_type);
    type = (::g::Fuse::Physics::ForceFieldTrigger_type*)uClassType::New("Fuse.Physics.ExitedForceField", options);
    type->SetBase(::g::Fuse::Physics::ForceFieldEventTrigger_typeof());
    type->fp_ctor_ = (void*)ExitedForceField__New1_fn;
    type->fp_SetForce = (void(*)(::g::Fuse::Physics::ForceFieldTrigger*, ::g::Fuse::Physics::Body*, float*))ExitedForceField__SetForce_fn;
    type->SetFields(16,
        ::g::Uno::Float_typeof(), offsetof(::g::Fuse::Physics::ExitedForceField, _oldForce), 0,
        ::g::Uno::Float_typeof(), offsetof(::g::Fuse::Physics::ExitedForceField, _Threshold), 0);
    type->Reflection.SetFunctions(3,
        new uFunction(".ctor", NULL, (void*)ExitedForceField__New1_fn, 0, true, ExitedForceField_typeof(), 0),
        new uFunction("get_Threshold", NULL, (void*)ExitedForceField__get_Threshold_fn, 0, false, ::g::Uno::Float_typeof(), 0),
        new uFunction("set_Threshold", NULL, (void*)ExitedForceField__set_Threshold_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::Float_typeof()));
    return type;
}

// public generated ExitedForceField() :409
void ExitedForceField__ctor_4_fn(ExitedForceField* __this)
{
    __this->ctor_4();
}

// public generated ExitedForceField New() :409
void ExitedForceField__New1_fn(ExitedForceField** __retval)
{
    *__retval = ExitedForceField::New1();
}

// protected internal override sealed void SetForce(Fuse.Physics.Body body, float force) :415
void ExitedForceField__SetForce_fn(ExitedForceField* __this, ::g::Fuse::Physics::Body* body, float* force)
{
    float force_ = *force;

    if ((__this->_oldForce > __this->Threshold()) && (force_ <= __this->Threshold()))
        __this->OnTriggered(body);

    __this->_oldForce = force_;
}

// public generated float get_Threshold() :411
void ExitedForceField__get_Threshold_fn(ExitedForceField* __this, float* __retval)
{
    *__retval = __this->Threshold();
}

// public generated void set_Threshold(float value) :411
void ExitedForceField__set_Threshold_fn(ExitedForceField* __this, float* value)
{
    __this->Threshold(*value);
}

// public generated ExitedForceField() [instance] :409
void ExitedForceField::ctor_4()
{
    ctor_3();
}

// public generated float get_Threshold() [instance] :411
float ExitedForceField::Threshold()
{
    return _Threshold;
}

// public generated void set_Threshold(float value) [instance] :411
void ExitedForceField::Threshold(float value)
{
    _Threshold = value;
}

// public generated ExitedForceField New() [static] :409
ExitedForceField* ExitedForceField::New1()
{
    ExitedForceField* obj1 = (ExitedForceField*)uNew(ExitedForceField_typeof());
    obj1->ctor_4();
    return obj1;
}
// }

// C:\ProgramData\Uno\Packages\Fuse.Physics\0.19.3\$.uno(302)
// ----------------------------------------------------------

// public abstract class ForceField :302
// {
ForceField_type* ForceField_typeof()
{
    static uSStrong<ForceField_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 4;
    options.InterfaceCount = 1;
    options.ObjectSize = sizeof(ForceField);
    options.TypeSize = sizeof(ForceField_type);
    type = (ForceField_type*)uClassType::New("Fuse.Physics.ForceField", options);
    type->SetBase(::g::Fuse::Behavior_typeof());
    type->fp_OnRooted = (void(*)(::g::Fuse::Behavior*, ::g::Fuse::Node*))ForceField__OnRooted_fn;
    type->fp_OnUnrooted = (void(*)(::g::Fuse::Behavior*, ::g::Fuse::Node*))ForceField__OnUnrooted_fn;
    type->interface0.fp_Update = (void(*)(uObject*, double*, ::g::Fuse::Physics::World*))ForceField__Fuse_Physics_IRule_Update_fn;
    ::TYPES[16] = ::g::Fuse::Behavior_typeof();
    ::TYPES[17] = ::g::Fuse::Physics::IRule_typeof();
    type->SetInterfaces(
        ::g::Fuse::Physics::IRule_typeof(), offsetof(ForceField_type, interface0));
    type->SetFields(3,
        ::g::Fuse::Physics::World_typeof(), offsetof(::g::Fuse::Physics::ForceField, _world), 0);
    return type;
}

// protected generated ForceField() :302
void ForceField__ctor_1_fn(ForceField* __this)
{
    __this->ctor_1();
}

// private void Fuse.Physics.IRule.Update(double deltaTime, Fuse.Physics.World world) :324
void ForceField__Fuse_Physics_IRule_Update_fn(ForceField* __this, double* deltaTime, ::g::Fuse::Physics::World* world)
{
    double deltaTime_ = *deltaTime;
    __this->OnUpdate(deltaTime_, world);
}

// protected override sealed void OnRooted(Fuse.Node parentNode) :308
void ForceField__OnRooted_fn(ForceField* __this, ::g::Fuse::Node* parentNode)
{
    ::g::Fuse::Behavior__OnRooted_fn(__this, parentNode);
    __this->_world = ::g::Fuse::Physics::World::FindWorld(__this->ParentNode());
    uPtr(__this->_world)->AddRule((uObject*)__this);
}

// protected override sealed void OnUnrooted(Fuse.Node parentNode) :317
void ForceField__OnUnrooted_fn(ForceField* __this, ::g::Fuse::Node* parentNode)
{
    uPtr(__this->_world)->RemoveRule((uObject*)__this);
    ::g::Fuse::Behavior__OnUnrooted_fn(__this, parentNode);
}

// internal Fuse.Physics.World get_World() :306
void ForceField__get_World_fn(ForceField* __this, ::g::Fuse::Physics::World** __retval)
{
    *__retval = __this->World();
}

// protected generated ForceField() [instance] :302
void ForceField::ctor_1()
{
    ctor_();
}

// internal Fuse.Physics.World get_World() [instance] :306
::g::Fuse::Physics::World* ForceField::World()
{
    return _world;
}
// }

// C:\ProgramData\Uno\Packages\Fuse.Physics\0.19.3\$.uno(361)
// ----------------------------------------------------------

// public sealed class ForceFieldEventArgs :361
// {
ForceFieldEventArgs_type* ForceFieldEventArgs_typeof()
{
    static uSStrong<ForceFieldEventArgs_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 2;
    options.InterfaceCount = 1;
    options.ObjectSize = sizeof(ForceFieldEventArgs);
    options.TypeSize = sizeof(ForceFieldEventArgs_type);
    type = (ForceFieldEventArgs_type*)uClassType::New("Fuse.Physics.ForceFieldEventArgs", options);
    type->SetBase(::g::Uno::EventArgs_typeof());
    type->interface0.fp_Serialize = (void(*)(uObject*, uObject*))ForceFieldEventArgs__Fuse_Scripting_IScriptEvent_Serialize_fn;
    ::STRINGS[0] = uString::Const("targetData");
    ::TYPES[0] = ::g::Fuse::Node_typeof();
    ::TYPES[16] = ::g::Fuse::Behavior_typeof();
    ::TYPES[13] = ::g::Fuse::Physics::Body_typeof();
    type->SetInterfaces(
        ::g::Fuse::Scripting::IScriptEvent_typeof(), offsetof(ForceFieldEventArgs_type, interface0));
    type->SetFields(0,
        ::g::Fuse::Physics::Body_typeof(), offsetof(::g::Fuse::Physics::ForceFieldEventArgs, _Body), 0,
        ::g::Fuse::Physics::ForceField_typeof(), offsetof(::g::Fuse::Physics::ForceFieldEventArgs, _ForceField), 0);
    type->Reflection.SetFunctions(1,
        new uFunction("get_Node", NULL, (void*)ForceFieldEventArgs__get_Node_fn, 0, false, ::g::Fuse::Node_typeof(), 0));
    return type;
}

// internal ForceFieldEventArgs(Fuse.Physics.Body body, Fuse.Physics.ForceField field) :368
void ForceFieldEventArgs__ctor_1_fn(ForceFieldEventArgs* __this, ::g::Fuse::Physics::Body* body, ::g::Fuse::Physics::ForceField* field)
{
    __this->ctor_1(body, field);
}

// internal generated Fuse.Physics.Body get_Body() :363
void ForceFieldEventArgs__get_Body_fn(ForceFieldEventArgs* __this, ::g::Fuse::Physics::Body** __retval)
{
    *__retval = __this->Body();
}

// private generated void set_Body(Fuse.Physics.Body value) :363
void ForceFieldEventArgs__set_Body_fn(ForceFieldEventArgs* __this, ::g::Fuse::Physics::Body* value)
{
    __this->Body(value);
}

// internal generated Fuse.Physics.ForceField get_ForceField() :364
void ForceFieldEventArgs__get_ForceField_fn(ForceFieldEventArgs* __this, ::g::Fuse::Physics::ForceField** __retval)
{
    *__retval = __this->ForceField();
}

// private generated void set_ForceField(Fuse.Physics.ForceField value) :364
void ForceFieldEventArgs__set_ForceField_fn(ForceFieldEventArgs* __this, ::g::Fuse::Physics::ForceField* value)
{
    __this->ForceField(value);
}

// private void Fuse.Scripting.IScriptEvent.Serialize(Fuse.Scripting.IEventSerializer s) :373
void ForceFieldEventArgs__Fuse_Scripting_IScriptEvent_Serialize_fn(ForceFieldEventArgs* __this, uObject* s)
{
    ::g::Fuse::Scripting::IEventSerializer::AddObject(uInterface(uPtr(s), ::g::Fuse::Scripting::IEventSerializer_typeof()), ::STRINGS[0/*"targetData"*/], uPtr(uPtr(__this->ForceField())->ParentNode())->DataContext());
}

// internal ForceFieldEventArgs New(Fuse.Physics.Body body, Fuse.Physics.ForceField field) :368
void ForceFieldEventArgs__New2_fn(::g::Fuse::Physics::Body* body, ::g::Fuse::Physics::ForceField* field, ForceFieldEventArgs** __retval)
{
    *__retval = ForceFieldEventArgs::New2(body, field);
}

// public Fuse.Node get_Node() :366
void ForceFieldEventArgs__get_Node_fn(ForceFieldEventArgs* __this, ::g::Fuse::Node** __retval)
{
    *__retval = __this->Node();
}

// internal ForceFieldEventArgs(Fuse.Physics.Body body, Fuse.Physics.ForceField field) [instance] :368
void ForceFieldEventArgs::ctor_1(::g::Fuse::Physics::Body* body, ::g::Fuse::Physics::ForceField* field)
{
    ctor_();
    Body(body);
    ForceField(field);
}

// internal generated Fuse.Physics.Body get_Body() [instance] :363
::g::Fuse::Physics::Body* ForceFieldEventArgs::Body()
{
    return _Body;
}

// private generated void set_Body(Fuse.Physics.Body value) [instance] :363
void ForceFieldEventArgs::Body(::g::Fuse::Physics::Body* value)
{
    _Body = value;
}

// internal generated Fuse.Physics.ForceField get_ForceField() [instance] :364
::g::Fuse::Physics::ForceField* ForceFieldEventArgs::ForceField()
{
    return _ForceField;
}

// private generated void set_ForceField(Fuse.Physics.ForceField value) [instance] :364
void ForceFieldEventArgs::ForceField(::g::Fuse::Physics::ForceField* value)
{
    _ForceField = value;
}

// public Fuse.Node get_Node() [instance] :366
::g::Fuse::Node* ForceFieldEventArgs::Node()
{
    return uPtr(Body())->Node;
}

// internal ForceFieldEventArgs New(Fuse.Physics.Body body, Fuse.Physics.ForceField field) [static] :368
ForceFieldEventArgs* ForceFieldEventArgs::New2(::g::Fuse::Physics::Body* body, ::g::Fuse::Physics::ForceField* field)
{
    ForceFieldEventArgs* obj1 = (ForceFieldEventArgs*)uNew(ForceFieldEventArgs_typeof());
    obj1->ctor_1(body, field);
    return obj1;
}
// }

// C:\ProgramData\Uno\Packages\Fuse.Physics\0.19.3\$.uno(379)
// ----------------------------------------------------------

// public delegate void ForceFieldEventHandler(object sender, Fuse.Physics.ForceFieldEventArgs args) :379
uDelegateType* ForceFieldEventHandler_typeof()
{
    static uSStrong<uDelegateType*> type;
    if (type != NULL) return type;

    type = uDelegateType::New("Fuse.Physics.ForceFieldEventHandler", 2, 0);
    type->SetSignature(uVoid_typeof(),
        uObject_typeof(),
        ::g::Fuse::Physics::ForceFieldEventArgs_typeof());
    return type;
}

// C:\ProgramData\Uno\Packages\Fuse.Physics\0.19.3\$.uno(381)
// ----------------------------------------------------------

// public abstract class ForceFieldEventTrigger :381
// {
::g::Fuse::Physics::ForceFieldTrigger_type* ForceFieldEventTrigger_typeof()
{
    static uSStrong< ::g::Fuse::Physics::ForceFieldTrigger_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 16;
    options.ObjectSize = sizeof(ForceFieldEventTrigger);
    options.TypeSize = sizeof(::g::Fuse::Physics::ForceFieldTrigger_type);
    type = (::g::Fuse::Physics::ForceFieldTrigger_type*)uClassType::New("Fuse.Physics.ForceFieldEventTrigger", options);
    type->SetBase(::g::Fuse::Physics::ForceFieldTrigger_typeof());
    ::TYPES[21] = ::g::Uno::Delegate_typeof();
    ::TYPES[22] = ::g::Fuse::Physics::ForceFieldTrigger_typeof();
    ::TYPES[23] = ::g::Fuse::Physics::ForceFieldEventHandler_typeof();
    ::TYPES[3] = uObject_typeof();
    type->SetFields(15,
        ::g::Fuse::Physics::ForceFieldEventHandler_typeof(), offsetof(::g::Fuse::Physics::ForceFieldEventTrigger, Handler1), 0);
    type->Reflection.SetFunctions(2,
        new uFunction("add_Handler", NULL, (void*)ForceFieldEventTrigger__add_Handler_fn, 0, false, uVoid_typeof(), 1, ::g::Fuse::Physics::ForceFieldEventHandler_typeof()),
        new uFunction("remove_Handler", NULL, (void*)ForceFieldEventTrigger__remove_Handler_fn, 0, false, uVoid_typeof(), 1, ::g::Fuse::Physics::ForceFieldEventHandler_typeof()));
    return type;
}

// protected generated ForceFieldEventTrigger() :381
void ForceFieldEventTrigger__ctor_3_fn(ForceFieldEventTrigger* __this)
{
    __this->ctor_3();
}

// public generated void add_Handler(Fuse.Physics.ForceFieldEventHandler value) :383
void ForceFieldEventTrigger__add_Handler_fn(ForceFieldEventTrigger* __this, uDelegate* value)
{
    __this->add_Handler(value);
}

// public generated void remove_Handler(Fuse.Physics.ForceFieldEventHandler value) :383
void ForceFieldEventTrigger__remove_Handler_fn(ForceFieldEventTrigger* __this, uDelegate* value)
{
    __this->remove_Handler(value);
}

// protected internal void OnTriggered(Fuse.Physics.Body body) :385
void ForceFieldEventTrigger__OnTriggered_fn(ForceFieldEventTrigger* __this, ::g::Fuse::Physics::Body* body)
{
    __this->OnTriggered(body);
}

// protected generated ForceFieldEventTrigger() [instance] :381
void ForceFieldEventTrigger::ctor_3()
{
    ctor_2();
}

// public generated void add_Handler(Fuse.Physics.ForceFieldEventHandler value) [instance] :383
void ForceFieldEventTrigger::add_Handler(uDelegate* value)
{
    Handler1 = uCast<uDelegate*>(::g::Uno::Delegate::Combine(Handler1, value), ::TYPES[23/*Fuse.Physics.ForceFieldEventHandler*/]);
}

// public generated void remove_Handler(Fuse.Physics.ForceFieldEventHandler value) [instance] :383
void ForceFieldEventTrigger::remove_Handler(uDelegate* value)
{
    Handler1 = uCast<uDelegate*>(::g::Uno::Delegate::Remove(Handler1, value), ::TYPES[23/*Fuse.Physics.ForceFieldEventHandler*/]);
}

// protected internal void OnTriggered(Fuse.Physics.Body body) [instance] :385
void ForceFieldEventTrigger::OnTriggered(::g::Fuse::Physics::Body* body)
{
    Pulse();

    if (::g::Uno::Delegate::op_Inequality(Handler1, NULL))
    {
        ::g::Fuse::Physics::ForceFieldEventArgs* args = ::g::Fuse::Physics::ForceFieldEventArgs::New2(body, ForceField());
        uPtr(Handler1)->Invoke(2, this, args);
    }
}
// }

// C:\ProgramData\Uno\Packages\Fuse.Physics\0.19.3\$.uno(340)
// ----------------------------------------------------------

// public abstract class ForceFieldTrigger :340
// {
ForceFieldTrigger_type* ForceFieldTrigger_typeof()
{
    static uSStrong<ForceFieldTrigger_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 15;
    options.ObjectSize = sizeof(ForceFieldTrigger);
    options.TypeSize = sizeof(ForceFieldTrigger_type);
    type = (ForceFieldTrigger_type*)uClassType::New("Fuse.Physics.ForceFieldTrigger", options);
    type->SetBase(::g::Fuse::Triggers::Trigger_typeof());
    ::TYPES[24] = ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Behavior_typeof());
    ::TYPES[0] = ::g::Fuse::Node_typeof();
    ::TYPES[13] = ::g::Fuse::Physics::Body_typeof();
    ::TYPES[25] = ::g::Uno::Collections::IList_typeof()->MakeType(::g::Fuse::Behavior_typeof());
    type->SetFields(14,
        ::g::Fuse::Physics::ForceField_typeof(), offsetof(::g::Fuse::Physics::ForceFieldTrigger, _ForceField), 0);
    type->Reflection.SetFunctions(2,
        new uFunction("get_ForceField", NULL, (void*)ForceFieldTrigger__get_ForceField_fn, 0, false, ::g::Fuse::Physics::ForceField_typeof(), 0),
        new uFunction("set_ForceField", NULL, (void*)ForceFieldTrigger__set_ForceField_fn, 0, false, uVoid_typeof(), 1, ::g::Fuse::Physics::ForceField_typeof()));
    return type;
}

// protected generated ForceFieldTrigger() :340
void ForceFieldTrigger__ctor_2_fn(ForceFieldTrigger* __this)
{
    __this->ctor_2();
}

// public generated Fuse.Physics.ForceField get_ForceField() :342
void ForceFieldTrigger__get_ForceField_fn(ForceFieldTrigger* __this, ::g::Fuse::Physics::ForceField** __retval)
{
    *__retval = __this->ForceField();
}

// public generated void set_ForceField(Fuse.Physics.ForceField value) :342
void ForceFieldTrigger__set_ForceField_fn(ForceFieldTrigger* __this, ::g::Fuse::Physics::ForceField* value)
{
    __this->ForceField(value);
}

// internal static void SetForce(Fuse.Physics.ForceField field, Fuse.Physics.Body body, float force) :344
void ForceFieldTrigger__SetForce1_fn(::g::Fuse::Physics::ForceField* field, ::g::Fuse::Physics::Body* body, float* force)
{
    ForceFieldTrigger::SetForce1(field, body, *force);
}

// protected generated ForceFieldTrigger() [instance] :340
void ForceFieldTrigger::ctor_2()
{
    ctor_1();
}

// public generated Fuse.Physics.ForceField get_ForceField() [instance] :342
::g::Fuse::Physics::ForceField* ForceFieldTrigger::ForceField()
{
    return _ForceField;
}

// public generated void set_ForceField(Fuse.Physics.ForceField value) [instance] :342
void ForceFieldTrigger::ForceField(::g::Fuse::Physics::ForceField* value)
{
    _ForceField = value;
}

// internal static void SetForce(Fuse.Physics.ForceField field, Fuse.Physics.Body body, float force) [static] :344
void ForceFieldTrigger::SetForce1(::g::Fuse::Physics::ForceField* field, ::g::Fuse::Physics::Body* body, float force)
{
    ::g::Fuse::Behavior* ret1;

    for (int i = 0; i < ::g::Uno::Collections::ICollection::Count(uInterface(uPtr(uPtr(uPtr(body)->Node)->Behaviors()), ::TYPES[24/*Uno.Collections.ICollection<Fuse.Behavior>*/])); i++)
    {
        ::g::Fuse::Behavior* b = (::g::Uno::Collections::IList::get_Item_ex(uInterface(uPtr(uPtr(uPtr(body)->Node)->Behaviors()), ::TYPES[25/*Uno.Collections.IList<Fuse.Behavior>*/]), uCRef<int>(i), &ret1), ret1);
        ForceFieldTrigger* fft = uAs<ForceFieldTrigger*>(b, ForceFieldTrigger_typeof());

        if ((fft != NULL) && (uPtr(fft)->ForceField() == field))
            uPtr(fft)->SetForce(body, force);
    }
}
// }

// C:\ProgramData\Uno\Packages\Fuse.Physics\0.19.3\$.uno(422)
// ----------------------------------------------------------

// public sealed class InForceFieldAnimation :422
// {
::g::Fuse::Physics::ForceFieldTrigger_type* InForceFieldAnimation_typeof()
{
    static uSStrong< ::g::Fuse::Physics::ForceFieldTrigger_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 17;
    options.ObjectSize = sizeof(InForceFieldAnimation);
    options.TypeSize = sizeof(::g::Fuse::Physics::ForceFieldTrigger_type);
    type = (::g::Fuse::Physics::ForceFieldTrigger_type*)uClassType::New("Fuse.Physics.InForceFieldAnimation", options);
    type->SetBase(::g::Fuse::Physics::ForceFieldTrigger_typeof());
    type->fp_ctor_ = (void*)InForceFieldAnimation__New1_fn;
    type->fp_SetForce = (void(*)(::g::Fuse::Physics::ForceFieldTrigger*, ::g::Fuse::Physics::Body*, float*))InForceFieldAnimation__SetForce_fn;
    ::TYPES[8] = ::g::Uno::Double_typeof();
    type->SetFields(15,
        ::g::Uno::Float_typeof(), offsetof(::g::Fuse::Physics::InForceFieldAnimation, _From), 0,
        ::g::Uno::Float_typeof(), offsetof(::g::Fuse::Physics::InForceFieldAnimation, _To), 0);
    type->Reflection.SetFunctions(5,
        new uFunction("get_From", NULL, (void*)InForceFieldAnimation__get_From_fn, 0, false, ::g::Uno::Float_typeof(), 0),
        new uFunction("set_From", NULL, (void*)InForceFieldAnimation__set_From_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::Float_typeof()),
        new uFunction(".ctor", NULL, (void*)InForceFieldAnimation__New1_fn, 0, true, InForceFieldAnimation_typeof(), 0),
        new uFunction("get_To", NULL, (void*)InForceFieldAnimation__get_To_fn, 0, false, ::g::Uno::Float_typeof(), 0),
        new uFunction("set_To", NULL, (void*)InForceFieldAnimation__set_To_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::Float_typeof()));
    return type;
}

// public InForceFieldAnimation() :427
void InForceFieldAnimation__ctor_3_fn(InForceFieldAnimation* __this)
{
    __this->ctor_3();
}

// public generated float get_From() :424
void InForceFieldAnimation__get_From_fn(InForceFieldAnimation* __this, float* __retval)
{
    *__retval = __this->From();
}

// public generated void set_From(float value) :424
void InForceFieldAnimation__set_From_fn(InForceFieldAnimation* __this, float* value)
{
    __this->From(*value);
}

// public InForceFieldAnimation New() :427
void InForceFieldAnimation__New1_fn(InForceFieldAnimation** __retval)
{
    *__retval = InForceFieldAnimation::New1();
}

// protected internal override sealed void SetForce(Fuse.Physics.Body body, float force) :433
void InForceFieldAnimation__SetForce_fn(InForceFieldAnimation* __this, ::g::Fuse::Physics::Body* body, float* force)
{
    float force_ = *force;
    float f = ::g::Uno::Math::Clamp1((force_ - __this->From()) / (__this->To() - __this->From()), 0.0f, 1.0f);
    __this->Seek1((double)f, 0);
}

// public generated float get_To() :425
void InForceFieldAnimation__get_To_fn(InForceFieldAnimation* __this, float* __retval)
{
    *__retval = __this->To();
}

// public generated void set_To(float value) :425
void InForceFieldAnimation__set_To_fn(InForceFieldAnimation* __this, float* value)
{
    __this->To(*value);
}

// public InForceFieldAnimation() [instance] :427
void InForceFieldAnimation::ctor_3()
{
    ctor_2();
    From(0.0f);
    To(1.0f);
}

// public generated float get_From() [instance] :424
float InForceFieldAnimation::From()
{
    return _From;
}

// public generated void set_From(float value) [instance] :424
void InForceFieldAnimation::From(float value)
{
    _From = value;
}

// public generated float get_To() [instance] :425
float InForceFieldAnimation::To()
{
    return _To;
}

// public generated void set_To(float value) [instance] :425
void InForceFieldAnimation::To(float value)
{
    _To = value;
}

// public InForceFieldAnimation New() [static] :427
InForceFieldAnimation* InForceFieldAnimation::New1()
{
    InForceFieldAnimation* obj1 = (InForceFieldAnimation*)uNew(InForceFieldAnimation_typeof());
    obj1->ctor_3();
    return obj1;
}
// }

// C:\ProgramData\Uno\Packages\Fuse.Physics\0.19.3\$.uno(638)
// ----------------------------------------------------------

// internal abstract interface IRule :638
// {
uInterfaceType* IRule_typeof()
{
    static uSStrong<uInterfaceType*> type;
    if (type != NULL) return type;

    type = uInterfaceType::New("Fuse.Physics.IRule", 0, 0);
    return type;
}
// }

// C:\ProgramData\Uno\Packages\Fuse.Physics\0.19.3\$.uno(446)
// ----------------------------------------------------------

// public sealed class PointAttractor :446
// {
::g::Fuse::Physics::ForceField_type* PointAttractor_typeof()
{
    static uSStrong< ::g::Fuse::Physics::ForceField_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 9;
    options.InterfaceCount = 1;
    options.ObjectSize = sizeof(PointAttractor);
    options.TypeSize = sizeof(::g::Fuse::Physics::ForceField_type);
    type = (::g::Fuse::Physics::ForceField_type*)uClassType::New("Fuse.Physics.PointAttractor", options);
    type->SetBase(::g::Fuse::Physics::ForceField_typeof());
    type->fp_ctor_ = (void*)PointAttractor__New1_fn;
    type->fp_OnUpdate = (void(*)(::g::Fuse::Physics::ForceField*, double*, ::g::Fuse::Physics::World*))PointAttractor__OnUpdate_fn;
    type->interface0.fp_Update = (void(*)(uObject*, double*, ::g::Fuse::Physics::World*))::g::Fuse::Physics::ForceField__Fuse_Physics_IRule_Update_fn;
    ::TYPES[26] = ::g::Fuse::Physics::World_typeof();
    ::TYPES[27] = ::g::Uno::Collections::IEnumerator1_typeof()->MakeType(::g::Fuse::Physics::IRule_typeof());
    ::TYPES[2] = ::g::Uno::Float_typeof();
    ::TYPES[8] = ::g::Uno::Double_typeof();
    ::TYPES[13] = ::g::Fuse::Physics::Body_typeof();
    ::TYPES[28] = ::g::Fuse::Physics::ForceField_typeof();
    ::TYPES[29] = ::g::Uno::Collections::List__Enumerator_typeof()->MakeType(::g::Fuse::Physics::Body_typeof());
    ::TYPES[16] = ::g::Fuse::Behavior_typeof();
    ::TYPES[9] = ::g::Uno::Geometry::Box_typeof();
    ::TYPES[0] = ::g::Fuse::Node_typeof();
    ::TYPES[10] = ::g::Uno::Float4_typeof();
    type->SetInterfaces(
        ::g::Fuse::Physics::IRule_typeof(), offsetof(::g::Fuse::Physics::ForceField_type, interface0));
    type->SetFields(4,
        ::g::Uno::Float3_typeof(), offsetof(::g::Fuse::Physics::PointAttractor, _offset), 0,
        ::g::Uno::Float_typeof(), offsetof(::g::Fuse::Physics::PointAttractor, _radius), 0,
        ::g::Uno::Float_typeof(), offsetof(::g::Fuse::Physics::PointAttractor, _strength), 0,
        ::g::Uno::Bool_typeof(), offsetof(::g::Fuse::Physics::PointAttractor, _Exclusive), 0,
        ::g::Uno::String_typeof(), offsetof(::g::Fuse::Physics::PointAttractor, _Tag), 0);
    type->Reflection.SetFunctions(11,
        new uFunction("get_Exclusive", NULL, (void*)PointAttractor__get_Exclusive_fn, 0, false, ::g::Uno::Bool_typeof(), 0),
        new uFunction("set_Exclusive", NULL, (void*)PointAttractor__set_Exclusive_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::Bool_typeof()),
        new uFunction(".ctor", NULL, (void*)PointAttractor__New1_fn, 0, true, PointAttractor_typeof(), 0),
        new uFunction("get_Offset", NULL, (void*)PointAttractor__get_Offset_fn, 0, false, ::g::Uno::Float3_typeof(), 0),
        new uFunction("set_Offset", NULL, (void*)PointAttractor__set_Offset_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::Float3_typeof()),
        new uFunction("get_Radius", NULL, (void*)PointAttractor__get_Radius_fn, 0, false, ::g::Uno::Float_typeof(), 0),
        new uFunction("set_Radius", NULL, (void*)PointAttractor__set_Radius_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::Float_typeof()),
        new uFunction("get_Strength", NULL, (void*)PointAttractor__get_Strength_fn, 0, false, ::g::Uno::Float_typeof(), 0),
        new uFunction("set_Strength", NULL, (void*)PointAttractor__set_Strength_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::Float_typeof()),
        new uFunction("get_Tag", NULL, (void*)PointAttractor__get_Tag_fn, 0, false, ::g::Uno::String_typeof(), 0),
        new uFunction("set_Tag", NULL, (void*)PointAttractor__set_Tag_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::String_typeof()));
    return type;
}

// public generated PointAttractor() :446
void PointAttractor__ctor_2_fn(PointAttractor* __this)
{
    __this->ctor_2();
}

// private bool AnyStrongerForce(Fuse.Physics.Body b, float force, Fuse.Physics.World w) :487
void PointAttractor__AnyStrongerForce_fn(PointAttractor* __this, ::g::Fuse::Physics::Body* b, float* force, ::g::Fuse::Physics::World* w, bool* __retval)
{
    *__retval = __this->AnyStrongerForce(b, *force, w);
}

// private float CalcForce(Fuse.Physics.Body b) :481
void PointAttractor__CalcForce_fn(PointAttractor* __this, ::g::Fuse::Physics::Body* b, float* __retval)
{
    *__retval = __this->CalcForce(b);
}

// private float Curve(float x) :505
void PointAttractor__Curve_fn(PointAttractor* __this, float* x, float* __retval)
{
    *__retval = __this->Curve(*x);
}

// private float3 DirectionTo(Fuse.Physics.Body b) :476
void PointAttractor__DirectionTo_fn(PointAttractor* __this, ::g::Fuse::Physics::Body* b, ::g::Uno::Float3* __retval)
{
    *__retval = __this->DirectionTo(b);
}

// public generated bool get_Exclusive() :474
void PointAttractor__get_Exclusive_fn(PointAttractor* __this, bool* __retval)
{
    *__retval = __this->Exclusive();
}

// public generated void set_Exclusive(bool value) :474
void PointAttractor__set_Exclusive_fn(PointAttractor* __this, bool* value)
{
    __this->Exclusive(*value);
}

// public generated PointAttractor New() :446
void PointAttractor__New1_fn(PointAttractor** __retval)
{
    *__retval = PointAttractor::New1();
}

// public float3 get_Offset() :451
void PointAttractor__get_Offset_fn(PointAttractor* __this, ::g::Uno::Float3* __retval)
{
    *__retval = __this->Offset();
}

// public void set_Offset(float3 value) :452
void PointAttractor__set_Offset_fn(PointAttractor* __this, ::g::Uno::Float3* value)
{
    __this->Offset(*value);
}

// protected override sealed void OnUpdate(double deltaTime, Fuse.Physics.World world) :510
void PointAttractor__OnUpdate_fn(PointAttractor* __this, double* deltaTime, ::g::Fuse::Physics::World* world)
{
    ::g::Uno::Collections::List__Enumerator<uStrong< ::g::Fuse::Physics::Body*> > ret6;
    double deltaTime_ = *deltaTime;

    for (::g::Uno::Collections::List__Enumerator<uStrong< ::g::Fuse::Physics::Body*> > enum2 = (::g::Uno::Collections::List__GetEnumerator_fn(uPtr(uPtr(__this->World())->Bodies()), &ret6), ret6); enum2.MoveNext(::TYPES[29/*Uno.Collections.List<Fuse.Physics.Body>.Enumerator*/]); )
    {
        ::g::Fuse::Physics::Body* b = enum2.Current(::TYPES[29/*Uno.Collections.List<Fuse.Physics.Body>.Enumerator*/]);

        if (uPtr(b)->Node == __this->ParentNode())
            continue;

        float force = __this->CalcForce(b);
        ::g::Fuse::Physics::ForceFieldTrigger::SetForce1(__this, b, force);

        if (force == 0.0f)
            continue;

        if (__this->Exclusive())
        {
            if (__this->AnyStrongerForce(b, force, world))
                continue;
        }

        ::g::Uno::Float3 dir = __this->DirectionTo(b);
        float dist = ::g::Uno::Vector::Length1(dir);

        if (dist < 0.5f)
            return;

        dir = ::g::Uno::Float3__op_Division1(dir, dist);
        dir = ::g::Uno::Float3__op_Multiply1(dir, (__this->Curve(force) * 50.0f) * __this->_strength);
        ::g::Uno::Float3 f = ::g::Uno::Float3__op_Multiply1(dir, (float)deltaTime_);
        uPtr(b)->ApplyForce(f);
    }
}

// public float get_Radius() :458
void PointAttractor__get_Radius_fn(PointAttractor* __this, float* __retval)
{
    *__retval = __this->Radius();
}

// public void set_Radius(float value) :459
void PointAttractor__set_Radius_fn(PointAttractor* __this, float* value)
{
    __this->Radius(*value);
}

// public float get_Strength() :465
void PointAttractor__get_Strength_fn(PointAttractor* __this, float* __retval)
{
    *__retval = __this->Strength();
}

// public void set_Strength(float value) :466
void PointAttractor__set_Strength_fn(PointAttractor* __this, float* value)
{
    __this->Strength(*value);
}

// public generated string get_Tag() :503
void PointAttractor__get_Tag_fn(PointAttractor* __this, uString** __retval)
{
    *__retval = __this->Tag();
}

// public generated void set_Tag(string value) :503
void PointAttractor__set_Tag_fn(PointAttractor* __this, uString* value)
{
    __this->Tag(value);
}

// private float3 get_TargetPoint() :471
void PointAttractor__get_TargetPoint_fn(PointAttractor* __this, ::g::Uno::Float3* __retval)
{
    *__retval = __this->TargetPoint();
}

// public generated PointAttractor() [instance] :446
void PointAttractor::ctor_2()
{
    _radius = 100.0f;
    _strength = 100.0f;
    ctor_1();
}

// private bool AnyStrongerForce(Fuse.Physics.Body b, float force, Fuse.Physics.World w) [instance] :487
bool PointAttractor::AnyStrongerForce(::g::Fuse::Physics::Body* b, float force, ::g::Fuse::Physics::World* w)
{
    uObject* ret5;

    for (uObject* enum1 = (uObject*)::g::Uno::Collections::IEnumerable::GetEnumerator(uInterface(uPtr(uPtr(w)->Rules()), ::TYPES[35/*Uno.Collections.IEnumerable<Fuse.Physics.IRule>*/])); ::g::Uno::Collections::IEnumerator::MoveNext(uInterface(uPtr(enum1), ::g::Uno::Collections::IEnumerator_typeof())); )
    {
        uObject* r = (::g::Uno::Collections::IEnumerator1::get_Current_ex(uInterface(uPtr(enum1), ::TYPES[27/*Uno.Collections.IEnumerator<Fuse.Physics.IRule>*/]), &ret5), ret5);

        if (r == this)
            continue;

        PointAttractor* pa = uAs<PointAttractor*>(r, PointAttractor_typeof());

        if (pa != NULL)
        {
            if (uPtr(pa)->CalcForce(b) > force)
                return true;
        }
    }

    return false;
}

// private float CalcForce(Fuse.Physics.Body b) [instance] :481
float PointAttractor::CalcForce(::g::Fuse::Physics::Body* b)
{
    float dist = ::g::Uno::Vector::Length1(DirectionTo(b));
    return ::g::Uno::Math::Max1(_radius - dist, 0.0f) / _radius;
}

// private float Curve(float x) [instance] :505
float PointAttractor::Curve(float x)
{
    return (float)::g::Uno::Math::Sin((double)(x * x) * 3.1415926535897931);
}

// private float3 DirectionTo(Fuse.Physics.Body b) [instance] :476
::g::Uno::Float3 PointAttractor::DirectionTo(::g::Fuse::Physics::Body* b)
{
    return ::g::Uno::Float3__op_Subtraction2(TargetPoint(), uPtr(b)->CenterPosition());
}

// public generated bool get_Exclusive() [instance] :474
bool PointAttractor::Exclusive()
{
    return _Exclusive;
}

// public generated void set_Exclusive(bool value) [instance] :474
void PointAttractor::Exclusive(bool value)
{
    _Exclusive = value;
}

// public float3 get_Offset() [instance] :451
::g::Uno::Float3 PointAttractor::Offset()
{
    return _offset;
}

// public void set_Offset(float3 value) [instance] :452
void PointAttractor::Offset(::g::Uno::Float3 value)
{
    _offset = value;
}

// public float get_Radius() [instance] :458
float PointAttractor::Radius()
{
    return _radius;
}

// public void set_Radius(float value) [instance] :459
void PointAttractor::Radius(float value)
{
    _radius = value;
}

// public float get_Strength() [instance] :465
float PointAttractor::Strength()
{
    return _strength;
}

// public void set_Strength(float value) [instance] :466
void PointAttractor::Strength(float value)
{
    _strength = value;
}

// public generated string get_Tag() [instance] :503
uString* PointAttractor::Tag()
{
    return _Tag;
}

// public generated void set_Tag(string value) [instance] :503
void PointAttractor::Tag(uString* value)
{
    _Tag = value;
}

// private float3 get_TargetPoint() [instance] :471
::g::Uno::Float3 PointAttractor::TargetPoint()
{
    ::g::Uno::Float4 ind3;
    return ::g::Uno::Float3__op_Addition2((ind3 = ::g::Uno::Vector::Transform4(uPtr(ParentNode())->LocalBounds().Center(), uPtr(ParentNode())->WorldTransform()), ::g::Uno::Float3__New2(ind3.X, ind3.Y, ind3.Z)), Offset());
}

// public generated PointAttractor New() [static] :446
PointAttractor* PointAttractor::New1()
{
    PointAttractor* obj4 = (PointAttractor*)uNew(PointAttractor_typeof());
    obj4->ctor_2();
    return obj4;
}
// }

// C:\ProgramData\Uno\Packages\Fuse.Physics\0.19.3\$.uno(548)
// ----------------------------------------------------------

// public sealed class Spring :548
// {
Spring_type* Spring_typeof()
{
    static uSStrong<Spring_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 8;
    options.InterfaceCount = 1;
    options.ObjectSize = sizeof(Spring);
    options.TypeSize = sizeof(Spring_type);
    type = (Spring_type*)uClassType::New("Fuse.Physics.Spring", options);
    type->SetBase(::g::Fuse::Behavior_typeof());
    type->fp_ctor_ = (void*)Spring__New1_fn;
    type->fp_OnRooted = (void(*)(::g::Fuse::Behavior*, ::g::Fuse::Node*))Spring__OnRooted_fn;
    type->fp_OnUnrooted = (void(*)(::g::Fuse::Behavior*, ::g::Fuse::Node*))Spring__OnUnrooted_fn;
    type->interface0.fp_Update = (void(*)(uObject*, double*, ::g::Fuse::Physics::World*))Spring__Fuse_Physics_IRule_Update_fn;
    ::TYPES[13] = ::g::Fuse::Physics::Body_typeof();
    ::TYPES[2] = ::g::Uno::Float_typeof();
    ::TYPES[16] = ::g::Fuse::Behavior_typeof();
    ::TYPES[17] = ::g::Fuse::Physics::IRule_typeof();
    type->SetInterfaces(
        ::g::Fuse::Physics::IRule_typeof(), offsetof(Spring_type, interface0));
    type->SetFields(3,
        ::g::Fuse::Physics::Body_typeof(), offsetof(::g::Fuse::Physics::Spring, _body), 0,
        ::g::Uno::Float_typeof(), offsetof(::g::Fuse::Physics::Spring, _length), 0,
        ::g::Uno::Float_typeof(), offsetof(::g::Fuse::Physics::Spring, _stiffness), 0,
        ::g::Fuse::Node_typeof(), offsetof(::g::Fuse::Physics::Spring, _target), 0,
        ::g::Fuse::Physics::Body_typeof(), offsetof(::g::Fuse::Physics::Spring, _targetBody), 0);
    type->Reflection.SetFunctions(7,
        new uFunction("get_Length", NULL, (void*)Spring__get_Length_fn, 0, false, ::g::Uno::Float_typeof(), 0),
        new uFunction("set_Length", NULL, (void*)Spring__set_Length_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::Float_typeof()),
        new uFunction(".ctor", NULL, (void*)Spring__New1_fn, 0, true, Spring_typeof(), 0),
        new uFunction("get_Stiffness", NULL, (void*)Spring__get_Stiffness_fn, 0, false, ::g::Uno::Float_typeof(), 0),
        new uFunction("set_Stiffness", NULL, (void*)Spring__set_Stiffness_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::Float_typeof()),
        new uFunction("get_Target", NULL, (void*)Spring__get_Target_fn, 0, false, ::g::Fuse::Node_typeof(), 0),
        new uFunction("set_Target", NULL, (void*)Spring__set_Target_fn, 0, false, uVoid_typeof(), 1, ::g::Fuse::Node_typeof()));
    return type;
}

// public generated Spring() :548
void Spring__ctor_1_fn(Spring* __this)
{
    __this->ctor_1();
}

// private void Fuse.Physics.IRule.Update(double deltaTime, Fuse.Physics.World world) :611
void Spring__Fuse_Physics_IRule_Update_fn(Spring* __this, double* deltaTime, ::g::Fuse::Physics::World* world)
{
    double deltaTime_ = *deltaTime;

    if ((__this->_body == NULL) || (__this->_targetBody == NULL))
        return;

    ::g::Uno::Float3 vec = ::g::Uno::Float3__op_Subtraction2(uPtr(__this->_body)->WorldPosition(), uPtr(__this->_targetBody)->WorldPosition());
    float dist = ::g::Uno::Vector::Length1(vec);

    if (::g::Uno::Math::Abs1(dist) < 0.001f)
        return;

    ::g::Uno::Float3 dir = ::g::Uno::Float3__op_Division1(vec, dist);
    ::g::Uno::Float3 force = ::g::Uno::Float3__op_Multiply1(::g::Uno::Float3__op_Multiply1(::g::Uno::Float3__op_Multiply1(::g::Uno::Float3__op_Multiply1(dir, dist - __this->Length()), (float)deltaTime_), __this->_stiffness), 100.0f);
    uPtr(__this->_targetBody)->ApplyForce(force);
    uPtr(__this->_body)->ApplyForce(::g::Uno::Float3__op_Multiply1(force, -1.0f));
}

// private bool get_IsRooted() :582
void Spring__get_IsRooted1_fn(Spring* __this, bool* __retval)
{
    *__retval = __this->IsRooted1();
}

// public float get_Length() :571
void Spring__get_Length_fn(Spring* __this, float* __retval)
{
    *__retval = __this->Length();
}

// public void set_Length(float value) :572
void Spring__set_Length_fn(Spring* __this, float* value)
{
    __this->Length(*value);
}

// public generated Spring New() :548
void Spring__New1_fn(Spring** __retval)
{
    *__retval = Spring::New1();
}

// protected override sealed void OnRooted(Fuse.Node parentNode) :586
void Spring__OnRooted_fn(Spring* __this, ::g::Fuse::Node* parentNode)
{
    ::g::Fuse::Behavior__OnRooted_fn(__this, parentNode);
    __this->_body = ::g::Fuse::Physics::Body::Pin(__this->ParentNode());
    uPtr(uPtr(__this->_body)->World)->AddRule((uObject*)__this);

    if (__this->_target != NULL)
        __this->_targetBody = ::g::Fuse::Physics::Body::Pin(__this->_target);
}

// protected override sealed void OnUnrooted(Fuse.Node parentNode) :595
void Spring__OnUnrooted_fn(Spring* __this, ::g::Fuse::Node* parentNode)
{
    uPtr(uPtr(__this->_body)->World)->RemoveRule((uObject*)__this);
    uPtr(__this->_body)->Unpin();
    __this->_body = NULL;

    if (__this->_targetBody != NULL)
    {
        uPtr(__this->_targetBody)->Unpin();
        __this->_targetBody = NULL;
    }

    ::g::Fuse::Behavior__OnUnrooted_fn(__this, parentNode);
}

// public float get_Stiffness() :578
void Spring__get_Stiffness_fn(Spring* __this, float* __retval)
{
    *__retval = __this->Stiffness();
}

// public void set_Stiffness(float value) :579
void Spring__set_Stiffness_fn(Spring* __this, float* value)
{
    __this->Stiffness(*value);
}

// public Fuse.Node get_Target() :554
void Spring__get_Target_fn(Spring* __this, ::g::Fuse::Node** __retval)
{
    *__retval = __this->Target();
}

// public void set_Target(Fuse.Node value) :555
void Spring__set_Target_fn(Spring* __this, ::g::Fuse::Node* value)
{
    __this->Target(value);
}

// public generated Spring() [instance] :548
void Spring::ctor_1()
{
    _length = 1.0f;
    _stiffness = 1.0f;
    ctor_();
}

// private bool get_IsRooted() [instance] :582
bool Spring::IsRooted1()
{
    return _body != NULL;
}

// public float get_Length() [instance] :571
float Spring::Length()
{
    return _length;
}

// public void set_Length(float value) [instance] :572
void Spring::Length(float value)
{
    _length = value;
}

// public float get_Stiffness() [instance] :578
float Spring::Stiffness()
{
    return _stiffness;
}

// public void set_Stiffness(float value) [instance] :579
void Spring::Stiffness(float value)
{
    _stiffness = value;
}

// public Fuse.Node get_Target() [instance] :554
::g::Fuse::Node* Spring::Target()
{
    return _target;
}

// public void set_Target(Fuse.Node value) [instance] :555
void Spring::Target(::g::Fuse::Node* value)
{
    _target = value;

    if (IsRooted1())
    {
        if (_targetBody != NULL)
            uPtr(_targetBody)->Unpin();

        if (_target != NULL)
            _targetBody = ::g::Fuse::Physics::Body::Pin(_target);
        else
            _targetBody = NULL;
    }
}

// public generated Spring New() [static] :548
Spring* Spring::New1()
{
    Spring* obj1 = (Spring*)uNew(Spring_typeof());
    obj1->ctor_1();
    return obj1;
}
// }

// C:\ProgramData\Uno\Packages\Fuse.Physics\0.19.3\$.uno(275)
// ----------------------------------------------------------

// public sealed class WhileDragging :275
// {
::g::Fuse::Triggers::Trigger_type* WhileDragging_typeof()
{
    static uSStrong< ::g::Fuse::Triggers::Trigger_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 14;
    options.ObjectSize = sizeof(WhileDragging);
    options.TypeSize = sizeof(::g::Fuse::Triggers::Trigger_type);
    type = (::g::Fuse::Triggers::Trigger_type*)uClassType::New("Fuse.Physics.WhileDragging", options);
    type->SetBase(::g::Fuse::Triggers::Trigger_typeof());
    type->fp_ctor_ = (void*)WhileDragging__New1_fn;
    ::TYPES[0] = ::g::Fuse::Node_typeof();
    ::TYPES[30] = ::g::Uno::Collections::IEnumerator1_typeof()->MakeType(::g::Fuse::Behavior_typeof());
    type->SetFields(14);
    type->Reflection.SetFunctions(1,
        new uFunction(".ctor", NULL, (void*)WhileDragging__New1_fn, 0, true, WhileDragging_typeof(), 0));
    return type;
}

// public generated WhileDragging() :275
void WhileDragging__ctor_2_fn(WhileDragging* __this)
{
    __this->ctor_2();
}

// internal static void Begin(Fuse.Node n) :277
void WhileDragging__Begin_fn(::g::Fuse::Node* n)
{
    WhileDragging::Begin(n);
}

// internal static void End(Fuse.Node n) :286
void WhileDragging__End_fn(::g::Fuse::Node* n)
{
    WhileDragging::End(n);
}

// public generated WhileDragging New() :275
void WhileDragging__New1_fn(WhileDragging** __retval)
{
    *__retval = WhileDragging::New1();
}

// public generated WhileDragging() [instance] :275
void WhileDragging::ctor_2()
{
    ctor_1();
}

// internal static void Begin(Fuse.Node n) [static] :277
void WhileDragging::Begin(::g::Fuse::Node* n)
{
    ::g::Fuse::Behavior* ret4;

    for (uObject* enum1 = (uObject*)::g::Uno::Collections::IEnumerable::GetEnumerator(uInterface(uPtr(uPtr(n)->Behaviors()), ::g::Uno::Collections::IEnumerable_typeof()->MakeType(::TYPES[16/*Fuse.Behavior*/]))); ::g::Uno::Collections::IEnumerator::MoveNext(uInterface(uPtr(enum1), ::g::Uno::Collections::IEnumerator_typeof())); )
    {
        ::g::Fuse::Behavior* b = (::g::Uno::Collections::IEnumerator1::get_Current_ex(uInterface(uPtr(enum1), ::TYPES[30/*Uno.Collections.IEnumerator<Fuse.Behavior>*/]), &ret4), ret4);
        WhileDragging* wd = uAs<WhileDragging*>(b, WhileDragging_typeof());

        if (wd != NULL)
            uPtr(wd)->Activate(NULL);
    }
}

// internal static void End(Fuse.Node n) [static] :286
void WhileDragging::End(::g::Fuse::Node* n)
{
    ::g::Fuse::Behavior* ret5;

    for (uObject* enum2 = (uObject*)::g::Uno::Collections::IEnumerable::GetEnumerator(uInterface(uPtr(uPtr(n)->Behaviors()), ::g::Uno::Collections::IEnumerable_typeof()->MakeType(::TYPES[16/*Fuse.Behavior*/]))); ::g::Uno::Collections::IEnumerator::MoveNext(uInterface(uPtr(enum2), ::g::Uno::Collections::IEnumerator_typeof())); )
    {
        ::g::Fuse::Behavior* b = (::g::Uno::Collections::IEnumerator1::get_Current_ex(uInterface(uPtr(enum2), ::TYPES[30/*Uno.Collections.IEnumerator<Fuse.Behavior>*/]), &ret5), ret5);
        WhileDragging* wd = uAs<WhileDragging*>(b, WhileDragging_typeof());

        if (wd != NULL)
            uPtr(wd)->Deactivate();
    }
}

// public generated WhileDragging New() [static] :275
WhileDragging* WhileDragging::New1()
{
    WhileDragging* obj3 = (WhileDragging*)uNew(WhileDragging_typeof());
    obj3->ctor_2();
    return obj3;
}
// }

// C:\ProgramData\Uno\Packages\Fuse.Physics\0.19.3\$.uno(645)
// ----------------------------------------------------------

// public sealed class World :645
// {
// static World() :645
static void World__cctor__fn(uType* __type)
{
    World::_globalWorld_ = World::New1();
    World::_worldHandle_ = ::g::Fuse::Properties::CreateHandle();
}

uType* World_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 7;
    options.ObjectSize = sizeof(World);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Fuse.Physics.World", options);
    type->fp_ctor_ = (void*)World__New1_fn;
    type->fp_cctor_ = World__cctor__fn;
    ::TYPES[31] = ::g::Uno::Collections::List_typeof()->MakeType(::g::Fuse::Physics::Body_typeof());
    ::TYPES[32] = ::g::Uno::Collections::List_typeof()->MakeType(::g::Fuse::Physics::IRule_typeof());
    ::TYPES[14] = ::g::Uno::Action_typeof();
    ::TYPES[0] = ::g::Fuse::Node_typeof();
    ::TYPES[33] = ::g::Fuse::Time_typeof();
    ::TYPES[34] = ::g::Uno::Collections::List__Enumerator_typeof()->MakeType(::g::Fuse::Physics::IRule_typeof());
    ::TYPES[29] = ::g::Uno::Collections::List__Enumerator_typeof()->MakeType(::g::Fuse::Physics::Body_typeof());
    ::TYPES[3] = uObject_typeof();
    ::TYPES[13] = ::g::Fuse::Physics::Body_typeof();
    ::TYPES[35] = ::g::Uno::Collections::IEnumerable_typeof()->MakeType(::g::Fuse::Physics::IRule_typeof());
    type->SetFields(0,
        ::g::Uno::Collections::List_typeof()->MakeType(::g::Fuse::Physics::Body_typeof()), offsetof(::g::Fuse::Physics::World, _bodies), 0,
        ::g::Fuse::PropertyHandle_typeof(), offsetof(::g::Fuse::Physics::World, _bodyHandle), 0,
        ::g::Uno::Bool_typeof(), offsetof(::g::Fuse::Physics::World, _firstFrame), 0,
        ::g::Uno::Bool_typeof(), offsetof(::g::Fuse::Physics::World, _isSimulating), 0,
        ::g::Uno::Collections::List_typeof()->MakeType(::g::Fuse::Physics::IRule_typeof()), offsetof(::g::Fuse::Physics::World, _rules), 0,
        World_typeof(), (uintptr_t)&::g::Fuse::Physics::World::_globalWorld_, uFieldFlagsStatic,
        ::g::Fuse::PropertyHandle_typeof(), (uintptr_t)&::g::Fuse::Physics::World::_worldHandle_, uFieldFlagsStatic);
    type->Reflection.SetFunctions(4,
        new uFunction("GetIsPhysicsWorld", NULL, (void*)World__GetIsPhysicsWorld_fn, 0, true, ::g::Uno::Bool_typeof(), 1, ::g::Fuse::Node_typeof()),
        new uFunction("get_Rules", NULL, (void*)World__get_Rules_fn, 0, false, ::g::Uno::Collections::IEnumerable_typeof()->MakeType(::g::Fuse::Physics::IRule_typeof()), 0),
        new uFunction("SetIsPhysicsWorld", NULL, (void*)World__SetIsPhysicsWorld_fn, 0, true, uVoid_typeof(), 2, ::g::Fuse::Node_typeof(), ::g::Uno::Bool_typeof()),
        new uFunction("SetIsPhysicsWorldStyle", NULL, (void*)World__SetIsPhysicsWorldStyle_fn, 0, true, uVoid_typeof(), 2, ::g::Fuse::Node_typeof(), ::g::Uno::Bool_typeof()));
    return type;
}

// private World() :647
void World__ctor__fn(World* __this)
{
    __this->ctor_();
}

// internal void AddRule(Fuse.Physics.IRule rule) :754
void World__AddRule_fn(World* __this, uObject* rule)
{
    __this->AddRule(rule);
}

// internal Uno.Collections.List<Fuse.Physics.Body> get_Bodies() :691
void World__get_Bodies_fn(World* __this, ::g::Uno::Collections::List** __retval)
{
    *__retval = __this->Bodies();
}

// private void EndSimulation() :744
void World__EndSimulation_fn(World* __this)
{
    __this->EndSimulation();
}

// private void EnsureSimulation() :737
void World__EnsureSimulation_fn(World* __this)
{
    __this->EnsureSimulation();
}

// internal static Fuse.Physics.World FindWorld(Fuse.Node n) :679
void World__FindWorld_fn(::g::Fuse::Node* n, World** __retval)
{
    *__retval = World::FindWorld(n);
}

// public static bool GetIsPhysicsWorld(Fuse.Node n) :674
void World__GetIsPhysicsWorld_fn(::g::Fuse::Node* n, bool* __retval)
{
    *__retval = World::GetIsPhysicsWorld(n);
}

// private World New() :647
void World__New1_fn(World** __retval)
{
    *__retval = World::New1();
}

// private void OnUpdate() :766
void World__OnUpdate_fn(World* __this)
{
    __this->OnUpdate();
}

// internal Fuse.Physics.Body PinBody(Fuse.Node node) :700
void World__PinBody_fn(World* __this, ::g::Fuse::Node* node, ::g::Fuse::Physics::Body** __retval)
{
    *__retval = __this->PinBody(node);
}

// internal void RemoveRule(Fuse.Physics.IRule rule) :759
void World__RemoveRule_fn(World* __this, uObject* rule)
{
    __this->RemoveRule(rule);
}

// public Uno.Collections.IEnumerable<Fuse.Physics.IRule> get_Rules() :752
void World__get_Rules_fn(World* __this, uObject** __retval)
{
    *__retval = __this->Rules();
}

// public static void SetIsPhysicsWorld(Fuse.Node n, bool isPhysicsWorld) :654
void World__SetIsPhysicsWorld_fn(::g::Fuse::Node* n, bool* isPhysicsWorld)
{
    World::SetIsPhysicsWorld(n, *isPhysicsWorld);
}

// public static void SetIsPhysicsWorldStyle(Fuse.Node n, bool isPhysicsWorld) :668
void World__SetIsPhysicsWorldStyle_fn(::g::Fuse::Node* n, bool* isPhysicsWorld)
{
    World::SetIsPhysicsWorldStyle(n, *isPhysicsWorld);
}

// internal Fuse.Physics.Body TryGetBody(Fuse.Node node) :695
void World__TryGetBody_fn(World* __this, ::g::Fuse::Node* node, ::g::Fuse::Physics::Body** __retval)
{
    *__retval = __this->TryGetBody(node);
}

// internal void UnpinBody(Fuse.Physics.Body body) :718
void World__UnpinBody_fn(World* __this, ::g::Fuse::Physics::Body* body)
{
    __this->UnpinBody(body);
}

uSStrong<World*> World::_globalWorld_;
uSStrong< ::g::Fuse::PropertyHandle*> World::_worldHandle_;

// private World() [instance] :647
void World::ctor_()
{
    _bodies = ((::g::Uno::Collections::List*)::g::Uno::Collections::List::New1(::TYPES[31/*Uno.Collections.List<Fuse.Physics.Body>*/]));
    _bodyHandle = ::g::Fuse::Properties::CreateHandle();
    _rules = ((::g::Uno::Collections::List*)::g::Uno::Collections::List::New1(::TYPES[32/*Uno.Collections.List<Fuse.Physics.IRule>*/]));
    _firstFrame = true;
}

// internal void AddRule(Fuse.Physics.IRule rule) [instance] :754
void World::AddRule(uObject* rule)
{
    ::g::Uno::Collections::List__Add_fn(uPtr(_rules), rule);
}

// internal Uno.Collections.List<Fuse.Physics.Body> get_Bodies() [instance] :691
::g::Uno::Collections::List* World::Bodies()
{
    return _bodies;
}

// private void EndSimulation() [instance] :744
void World::EndSimulation()
{
    ::g::Fuse::UpdateManager::RemoveAction(uDelegate::New(::TYPES[14/*Uno.Action*/], (void*)World__OnUpdate_fn, this), 0);
    _isSimulating = false;
}

// private void EnsureSimulation() [instance] :737
void World::EnsureSimulation()
{
    if (_isSimulating)
        return;

    ::g::Fuse::UpdateManager::AddAction(uDelegate::New(::TYPES[14/*Uno.Action*/], (void*)World__OnUpdate_fn, this), 0);
    _isSimulating = true;
}

// private void OnUpdate() [instance] :766
void World::OnUpdate()
{
    ::g::Uno::Collections::List__Enumerator<uStrong<uObject*> > ret4;
    ::g::Uno::Collections::List__Enumerator<uStrong< ::g::Fuse::Physics::Body*> > ret5;

    if (_firstFrame)
    {
        _firstFrame = false;
        return;
    }

    double deltaTime = ::g::Fuse::Time::FrameInterval();

    for (::g::Uno::Collections::List__Enumerator<uStrong<uObject*> > enum1 = (::g::Uno::Collections::List__GetEnumerator_fn(uPtr(_rules), &ret4), ret4); enum1.MoveNext(::TYPES[34/*Uno.Collections.List<Fuse.Physics.IRule>.Enumerator*/]); )
    {
        uObject* r = enum1.Current(::TYPES[34/*Uno.Collections.List<Fuse.Physics.IRule>.Enumerator*/]);
        ::g::Fuse::Physics::IRule::Update(uInterface(uPtr(r), ::TYPES[17/*Fuse.Physics.IRule*/]), deltaTime, this);
    }

    for (::g::Uno::Collections::List__Enumerator<uStrong< ::g::Fuse::Physics::Body*> > enum2 = (::g::Uno::Collections::List__GetEnumerator_fn(uPtr(_bodies), &ret5), ret5); enum2.MoveNext(::TYPES[29/*Uno.Collections.List<Fuse.Physics.Body>.Enumerator*/]); )
    {
        ::g::Fuse::Physics::Body* b = enum2.Current(::TYPES[29/*Uno.Collections.List<Fuse.Physics.Body>.Enumerator*/]);
        uPtr(b)->Update(deltaTime);
    }
}

// internal Fuse.Physics.Body PinBody(Fuse.Node node) [instance] :700
::g::Fuse::Physics::Body* World::PinBody(::g::Fuse::Node* node)
{
    ::g::Fuse::Physics::Body* body = TryGetBody(node);

    if (body == NULL)
    {
        body = ::g::Fuse::Physics::Body::New1(this, node);
        uPtr(uPtr(node)->Properties())->Set(_bodyHandle, body);
        ::g::Uno::Collections::List__Add_fn(uPtr(_bodies), body);
    }

    uPtr(body)->PinCount++;
    EnsureSimulation();
    return body;
}

// internal void RemoveRule(Fuse.Physics.IRule rule) [instance] :759
void World::RemoveRule(uObject* rule)
{
    bool ret6;
    ::g::Uno::Collections::List__Remove_fn(uPtr(_rules), rule, &ret6);
}

// public Uno.Collections.IEnumerable<Fuse.Physics.IRule> get_Rules() [instance] :752
uObject* World::Rules()
{
    return (uObject*)_rules;
}

// internal Fuse.Physics.Body TryGetBody(Fuse.Node node) [instance] :695
::g::Fuse::Physics::Body* World::TryGetBody(::g::Fuse::Node* node)
{
    return uAs< ::g::Fuse::Physics::Body*>(uPtr(uPtr(node)->Properties())->Get(_bodyHandle), ::TYPES[13/*Fuse.Physics.Body*/]);
}

// internal void UnpinBody(Fuse.Physics.Body body) [instance] :718
void World::UnpinBody(::g::Fuse::Physics::Body* body)
{
    bool ret7;
    uPtr(body)->PinCount--;

    if (body->PinCount == 0)
    {
        uPtr(uPtr(uPtr(body)->Node)->Properties())->Clear(_bodyHandle);
        ::g::Uno::Collections::List__Remove_fn(uPtr(_bodies), body, &ret7);
        body->Dispose();
    }

    if (uPtr(_bodies)->Count() == 0)
        EndSimulation();
}

// internal static Fuse.Physics.World FindWorld(Fuse.Node n) [static] :679
World* World::FindWorld(::g::Fuse::Node* n)
{
    World_typeof()->Init();
    World* w = uAs<World*>(uPtr(uPtr(n)->Properties())->Get(World::_worldHandle()), World_typeof());

    if (w != NULL)
        return w;

    if (n->Parent() != NULL)
        return World::FindWorld(n->Parent());

    return World::_globalWorld();
}

// public static bool GetIsPhysicsWorld(Fuse.Node n) [static] :674
bool World::GetIsPhysicsWorld(::g::Fuse::Node* n)
{
    World_typeof()->Init();
    return uPtr(uPtr(n)->Properties())->Get(World::_worldHandle()) != NULL;
}

// private World New() [static] :647
World* World::New1()
{
    World* obj3 = (World*)uNew(World_typeof());
    obj3->ctor_();
    return obj3;
}

// public static void SetIsPhysicsWorld(Fuse.Node n, bool isPhysicsWorld) [static] :654
void World::SetIsPhysicsWorld(::g::Fuse::Node* n, bool isPhysicsWorld)
{
    World_typeof()->Init();

    if (isPhysicsWorld)
    {
        if (uPtr(uPtr(n)->Properties())->Get(World::_worldHandle()) == NULL)
            uPtr(uPtr(n)->Properties())->Set(World::_worldHandle(), World::New1());
    }
    else
        uPtr(uPtr(n)->Properties())->Clear(World::_worldHandle());
}

// public static void SetIsPhysicsWorldStyle(Fuse.Node n, bool isPhysicsWorld) [static] :668
void World::SetIsPhysicsWorldStyle(::g::Fuse::Node* n, bool isPhysicsWorld)
{
    World_typeof()->Init();
    World::SetIsPhysicsWorld(n, isPhysicsWorld);
}
// }

}}} // ::g::Fuse::Physics
