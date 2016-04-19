// This file was generated based on '(multiple files)'.
// WARNING: Changes might be lost if you edit this file directly.

#include <Fuse.DrawArgs.h>
#include <Fuse.DrawContext.h>
#include <Fuse.DrawHandler.h>
#include <Fuse.Entities.Entity.h>
#include <Fuse.Entities.Transform3D.h>
#include <Fuse.FastMatrix.h>
#include <Fuse.HitTestContext.h>
#include <Fuse.HitTestHandler.h>
#include <Fuse.IFrustum.h>
#include <Fuse.Node.h>
#include <Fuse.NodeBounds.h>
#include <Uno.Action-1.h>
#include <Uno.Bool.h>
#include <Uno.Collections.ICollection-1.h>
#include <Uno.Collections.IList-1.h>
#include <Uno.Collections.ObservableList-1.h>
#include <Uno.Delegate.h>
#include <Uno.Float.h>
#include <Uno.Int.h>
#include <Uno.Math.h>
#include <Uno.Object.h>
#include <Uno.Quaternion.h>
static uType* TYPES[13];

namespace g{
namespace Fuse{
namespace Entities{

// C:\ProgramData\Uno\Packages\Fuse.Entities\0.19.3\$.uno(360)
// -----------------------------------------------------------

// public sealed class Entity :360
// {
::g::Fuse::Node_type* Entity_typeof()
{
    static uSStrong< ::g::Fuse::Node_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 55;
    options.ObjectSize = sizeof(Entity);
    options.TypeSize = sizeof(::g::Fuse::Node_type);
    type = (::g::Fuse::Node_type*)uClassType::New("Fuse.Entities.Entity", options);
    type->SetBase(::g::Fuse::Node_typeof());
    type->fp_Draw = (void(*)(::g::Fuse::Node*, ::g::Fuse::DrawContext*))Entity__Draw_fn;
    type->fp_GetSubNode = (void(*)(::g::Fuse::Node*, int*, ::g::Fuse::Node**))Entity__GetSubNode_fn;
    type->fp_get_HitTestBounds = (void(*)(::g::Fuse::Node*, ::g::Fuse::NodeBounds**))Entity__get_HitTestBounds_fn;
    type->fp_OnHitTest = (void(*)(::g::Fuse::Node*, ::g::Fuse::HitTestContext*))Entity__OnHitTest_fn;
    type->fp_get_SubNodeCount = (void(*)(::g::Fuse::Node*, int*))Entity__get_SubNodeCount_fn;
    ::TYPES[0] = ::g::Uno::Delegate_typeof();
    ::TYPES[1] = ::g::Fuse::DrawHandler_typeof();
    ::TYPES[2] = uObject_typeof();
    ::TYPES[3] = ::g::Uno::Collections::ObservableList_typeof()->MakeType(Entity_typeof());
    ::TYPES[4] = ::g::Fuse::Node_typeof();
    ::TYPES[5] = ::g::Uno::Collections::IList_typeof()->MakeType(Entity_typeof());
    ::TYPES[6] = ::g::Fuse::HitTestHandler_typeof();
    ::TYPES[7] = ::g::Uno::Action1_typeof()->MakeType(Entity_typeof());
    ::TYPES[8] = ::g::Fuse::NodeBounds_typeof();
    ::TYPES[9] = ::g::Uno::Collections::ICollection_typeof()->MakeType(Entity_typeof());
    type->SetFields(51,
        ::g::Uno::Collections::ObservableList_typeof()->MakeType(Entity_typeof()), offsetof(::g::Fuse::Entities::Entity, _children), 0,
        ::g::Fuse::IFrustum_typeof(), offsetof(::g::Fuse::Entities::Entity, _frustumComponent), 0,
        ::g::Fuse::DrawHandler_typeof(), offsetof(::g::Fuse::Entities::Entity, ComponentDraw1), 0,
        ::g::Fuse::HitTestHandler_typeof(), offsetof(::g::Fuse::Entities::Entity, ComponentHitTest1), 0);
    return type;
}

// public Uno.Collections.IList<Fuse.Entities.Entity> get_Children() :367
void Entity__get_Children_fn(Entity* __this, uObject** __retval)
{
    *__retval = __this->Children();
}

// public generated void add_ComponentDraw(Fuse.DrawHandler value) :556
void Entity__add_ComponentDraw_fn(Entity* __this, uDelegate* value)
{
    __this->add_ComponentDraw(value);
}

// public generated void remove_ComponentDraw(Fuse.DrawHandler value) :556
void Entity__remove_ComponentDraw_fn(Entity* __this, uDelegate* value)
{
    __this->remove_ComponentDraw(value);
}

// public generated void add_ComponentHitTest(Fuse.HitTestHandler value) :574
void Entity__add_ComponentHitTest_fn(Entity* __this, uDelegate* value)
{
    __this->add_ComponentHitTest(value);
}

// public generated void remove_ComponentHitTest(Fuse.HitTestHandler value) :574
void Entity__remove_ComponentHitTest_fn(Entity* __this, uDelegate* value)
{
    __this->remove_ComponentHitTest(value);
}

// public override sealed void Draw(Fuse.DrawContext dc) :558
void Entity__Draw_fn(Entity* __this, ::g::Fuse::DrawContext* dc)
{
    Entity* ret3;

    if (::g::Uno::Delegate::op_Inequality(__this->ComponentDraw1, NULL))
        uPtr(__this->ComponentDraw1)->Invoke(2, __this, (::g::Fuse::DrawArgs*)::g::Fuse::DrawArgs::New2(dc));

    if (__this->HasChildren())

        for (int i = 0; i < uPtr(__this->_children)->Count(); i++)
            uPtr((::g::Uno::Collections::ObservableList__get_Item_fn(uPtr(__this->_children), uCRef<int>(i), &ret3), ret3))->Draw(dc);
}

// public override sealed Fuse.Node GetSubNode(int index) :603
void Entity__GetSubNode_fn(Entity* __this, int* index, ::g::Fuse::Node** __retval)
{
    Entity* ret10;
    int index_ = *index;
    return *__retval = (::g::Uno::Collections::IList::get_Item_ex(uInterface(uPtr(__this->Children()), ::TYPES[5/*Uno.Collections.IList<Fuse.Entities.Entity>*/]), uCRef<int>(index_), &ret10), ret10), void();
}

// public bool get_HasChildren() :374
void Entity__get_HasChildren_fn(Entity* __this, bool* __retval)
{
    *__retval = __this->HasChildren();
}

// public override sealed Fuse.NodeBounds get_HitTestBounds() :595
void Entity__get_HitTestBounds_fn(Entity* __this, ::g::Fuse::NodeBounds** __retval)
{
    return *__retval = ::g::Fuse::NodeBounds::Infinite(), void();
}

// private void OnChildAdded(Fuse.Entities.Entity c) :376
void Entity__OnChildAdded_fn(Entity* __this, Entity* c)
{
    __this->OnChildAdded(c);
}

// private void OnChildRemoved(Fuse.Entities.Entity c) :382
void Entity__OnChildRemoved_fn(Entity* __this, Entity* c)
{
    __this->OnChildRemoved(c);
}

// protected override sealed void OnHitTest(Fuse.HitTestContext htc) :576
void Entity__OnHitTest_fn(Entity* __this, ::g::Fuse::HitTestContext* htc)
{
    Entity* ret11;

    if (::g::Uno::Delegate::op_Inequality(__this->ComponentHitTest1, NULL))
        uPtr(__this->ComponentHitTest1)->Invoke(2, __this, htc);

    if (__this->HasChildren())

        for (int i = 0; i < uPtr(__this->_children)->Count(); i++)
            uPtr((::g::Uno::Collections::ObservableList__get_Item_fn(uPtr(__this->_children), uCRef<int>(i), &ret11), ret11))->HitTest(htc);
}

// public override sealed int get_SubNodeCount() :600
void Entity__get_SubNodeCount_fn(Entity* __this, int* __retval)
{
    return *__retval = ::g::Uno::Collections::ICollection::Count(uInterface(uPtr(__this->Children()), ::TYPES[9/*Uno.Collections.ICollection<Fuse.Entities.Entity>*/])), void();
}

// public Uno.Collections.IList<Fuse.Entities.Entity> get_Children() [instance] :367
uObject* Entity::Children()
{
    if (_children == NULL)
        _children = ((::g::Uno::Collections::ObservableList*)::g::Uno::Collections::ObservableList::New1(::TYPES[3/*Uno.Collections.ObservableList<Fuse.Entities.Entity>*/], uDelegate::New(::TYPES[7/*Uno.Action<Fuse.Entities.Entity>*/], (void*)Entity__OnChildAdded_fn, this), uDelegate::New(::TYPES[7/*Uno.Action<Fuse.Entities.Entity>*/], (void*)Entity__OnChildRemoved_fn, this)));

    return (uObject*)_children;
}

// public generated void add_ComponentDraw(Fuse.DrawHandler value) [instance] :556
void Entity::add_ComponentDraw(uDelegate* value)
{
    ComponentDraw1 = uCast<uDelegate*>(::g::Uno::Delegate::Combine(ComponentDraw1, value), ::TYPES[1/*Fuse.DrawHandler*/]);
}

// public generated void remove_ComponentDraw(Fuse.DrawHandler value) [instance] :556
void Entity::remove_ComponentDraw(uDelegate* value)
{
    ComponentDraw1 = uCast<uDelegate*>(::g::Uno::Delegate::Remove(ComponentDraw1, value), ::TYPES[1/*Fuse.DrawHandler*/]);
}

// public generated void add_ComponentHitTest(Fuse.HitTestHandler value) [instance] :574
void Entity::add_ComponentHitTest(uDelegate* value)
{
    ComponentHitTest1 = uCast<uDelegate*>(::g::Uno::Delegate::Combine(ComponentHitTest1, value), ::TYPES[6/*Fuse.HitTestHandler*/]);
}

// public generated void remove_ComponentHitTest(Fuse.HitTestHandler value) [instance] :574
void Entity::remove_ComponentHitTest(uDelegate* value)
{
    ComponentHitTest1 = uCast<uDelegate*>(::g::Uno::Delegate::Remove(ComponentHitTest1, value), ::TYPES[6/*Fuse.HitTestHandler*/]);
}

// public bool get_HasChildren() [instance] :374
bool Entity::HasChildren()
{
    return (_children != NULL) && (uPtr(_children)->Count() > 0);
}

// private void OnChildAdded(Fuse.Entities.Entity c) [instance] :376
void Entity::OnChildAdded(Entity* c)
{
    uPtr(c)->OnAdded(this);
    _frustumComponent = NULL;
}

// private void OnChildRemoved(Fuse.Entities.Entity c) [instance] :382
void Entity::OnChildRemoved(Entity* c)
{
    uPtr(c)->OnRemoved(this);
    _frustumComponent = NULL;
}
// }

// C:\ProgramData\Uno\Packages\Fuse.Entities\0.19.3\$.uno(2606)
// ------------------------------------------------------------

// public sealed class Transform3D :2606
// {
::g::Fuse::Transform_type* Transform3D_typeof()
{
    static uSStrong< ::g::Fuse::Transform_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 9;
    options.ObjectSize = sizeof(Transform3D);
    options.TypeSize = sizeof(::g::Fuse::Transform_type);
    type = (::g::Fuse::Transform_type*)uClassType::New("Fuse.Entities.Transform3D", options);
    type->SetBase(::g::Fuse::Transform_typeof());
    type->fp_AppendTo = (void(*)(::g::Fuse::Transform*, ::g::Fuse::FastMatrix*, float*))Transform3D__AppendTo_fn;
    type->fp_get_IsFlat = (void(*)(::g::Fuse::Transform*, bool*))Transform3D__get_IsFlat_fn;
    type->fp_OnAdded = (void(*)(::g::Fuse::Transform*))Transform3D__OnAdded_fn;
    type->fp_OnRemoved = (void(*)(::g::Fuse::Transform*))Transform3D__OnRemoved_fn;
    type->fp_PrependTo = (void(*)(::g::Fuse::Transform*, ::g::Fuse::FastMatrix*))Transform3D__PrependTo_fn;
    ::TYPES[10] = ::g::Fuse::Entities::Entity_typeof();
    ::TYPES[11] = ::g::Fuse::Transform_typeof();
    ::TYPES[12] = ::g::Uno::Float3_typeof();
    type->SetFields(4,
        ::g::Uno::Float3_typeof(), offsetof(::g::Fuse::Entities::Transform3D, position), 0,
        ::g::Uno::Float3_typeof(), offsetof(::g::Fuse::Entities::Transform3D, rotationDegrees), 0,
        ::g::Uno::Float4_typeof(), offsetof(::g::Fuse::Entities::Transform3D, rotationQuaternion), 0,
        ::g::Uno::Float3_typeof(), offsetof(::g::Fuse::Entities::Transform3D, scale), 0,
        ::g::Fuse::Entities::Entity_typeof(), offsetof(::g::Fuse::Entities::Transform3D, _Entity), 0);
    return type;
}

// public override sealed void AppendTo(Fuse.FastMatrix m, float weight) :2625
void Transform3D__AppendTo_fn(Transform3D* __this, ::g::Fuse::FastMatrix* m, float* weight)
{
    float weight_ = *weight;

    if (::g::Uno::Float3::op_Inequality(__this->Scaling(), ::g::Uno::Float3__New1(1.0f)))
        uPtr(m)->AppendScale1(::g::Uno::Math::Lerp4(::g::Uno::Float3__New1(1.0f), __this->Scaling(), weight_));

    if (::g::Uno::Float4::op_Inequality(__this->RotationQuaternion(), ::g::Uno::Float4__New2(0.0f, 0.0f, 0.0f, 1.0f)))
        m->AppendRotationQuaternion(::g::Uno::Float4__op_Multiply1(__this->RotationQuaternion(), weight_));

    if (::g::Uno::Float3::op_Inequality(__this->Position(), ::g::Uno::Float3__New1(0.0f)))
        m->AppendTranslation1(::g::Uno::Float3__op_Multiply1(__this->Position(), weight_));
}

// public generated Fuse.Entities.Entity get_Entity() :2613
void Transform3D__get_Entity_fn(Transform3D* __this, ::g::Fuse::Entities::Entity** __retval)
{
    *__retval = __this->Entity();
}

// private generated void set_Entity(Fuse.Entities.Entity value) :2613
void Transform3D__set_Entity_fn(Transform3D* __this, ::g::Fuse::Entities::Entity* value)
{
    __this->Entity(value);
}

// public void InvalidateLocal() :2608
void Transform3D__InvalidateLocal_fn(Transform3D* __this)
{
    __this->InvalidateLocal();
}

// public override sealed bool get_IsFlat() :2736
void Transform3D__get_IsFlat_fn(Transform3D* __this, bool* __retval)
{
    return *__retval = ((::g::Uno::Math::Abs1(__this->RotationDegrees().X) < 1e-05f) && (::g::Uno::Math::Abs1(__this->RotationDegrees().Y) < 1e-05f)) && (::g::Uno::Math::Abs1(__this->Position().Z) < 1e-05f), void();
}

// protected override sealed void OnAdded() :2615
void Transform3D__OnAdded_fn(Transform3D* __this)
{
    __this->Entity(uAs< ::g::Fuse::Entities::Entity*>(__this->Node, ::TYPES[10/*Fuse.Entities.Entity*/]));
}

// protected override sealed void OnRemoved() :2620
void Transform3D__OnRemoved_fn(Transform3D* __this)
{
    __this->Entity(NULL);
}

// public float3 get_Position() :2667
void Transform3D__get_Position_fn(Transform3D* __this, ::g::Uno::Float3* __retval)
{
    *__retval = __this->Position();
}

// public void set_Position(float3 value) :2671
void Transform3D__set_Position_fn(Transform3D* __this, ::g::Uno::Float3* value)
{
    __this->Position(*value);
}

// public override sealed void PrependTo(Fuse.FastMatrix m) :2632
void Transform3D__PrependTo_fn(Transform3D* __this, ::g::Fuse::FastMatrix* m)
{
    if (::g::Uno::Float3::op_Inequality(__this->Position(), ::g::Uno::Float3__New1(0.0f)))
        uPtr(m)->PrependTranslation1(__this->Position());

    if (::g::Uno::Float4::op_Inequality(__this->RotationQuaternion(), ::g::Uno::Float4__New2(0.0f, 0.0f, 0.0f, 1.0f)))
        m->PrependRotationQuaternion(__this->RotationQuaternion());

    if (::g::Uno::Float3::op_Inequality(__this->Scaling(), ::g::Uno::Float3__New1(1.0f)))
        m->PrependScale1(__this->Scaling());
}

// public float3 get_RotationDegrees() :2699
void Transform3D__get_RotationDegrees_fn(Transform3D* __this, ::g::Uno::Float3* __retval)
{
    *__retval = __this->RotationDegrees();
}

// public void set_RotationDegrees(float3 value) :2703
void Transform3D__set_RotationDegrees_fn(Transform3D* __this, ::g::Uno::Float3* value)
{
    __this->RotationDegrees(*value);
}

// public float4 get_RotationQuaternion() :2684
void Transform3D__get_RotationQuaternion_fn(Transform3D* __this, ::g::Uno::Float4* __retval)
{
    *__retval = __this->RotationQuaternion();
}

// public void set_RotationQuaternion(float4 value) :2688
void Transform3D__set_RotationQuaternion_fn(Transform3D* __this, ::g::Uno::Float4* value)
{
    __this->RotationQuaternion(*value);
}

// public float3 get_Scaling() :2713
void Transform3D__get_Scaling_fn(Transform3D* __this, ::g::Uno::Float3* __retval)
{
    *__retval = __this->Scaling();
}

// public void set_Scaling(float3 value) :2717
void Transform3D__set_Scaling_fn(Transform3D* __this, ::g::Uno::Float3* value)
{
    __this->Scaling(*value);
}

// public generated Fuse.Entities.Entity get_Entity() [instance] :2613
::g::Fuse::Entities::Entity* Transform3D::Entity()
{
    return _Entity;
}

// private generated void set_Entity(Fuse.Entities.Entity value) [instance] :2613
void Transform3D::Entity(::g::Fuse::Entities::Entity* value)
{
    _Entity = value;
}

// public void InvalidateLocal() [instance] :2608
void Transform3D::InvalidateLocal()
{
    OnMatrixChanged();
}

// public float3 get_Position() [instance] :2667
::g::Uno::Float3 Transform3D::Position()
{
    return position;
}

// public void set_Position(float3 value) [instance] :2671
void Transform3D::Position(::g::Uno::Float3 value)
{
    if (::g::Uno::Float3::op_Inequality(position, value))
    {
        position = value;
        InvalidateLocal();
    }
}

// public float3 get_RotationDegrees() [instance] :2699
::g::Uno::Float3 Transform3D::RotationDegrees()
{
    return rotationDegrees;
}

// public void set_RotationDegrees(float3 value) [instance] :2703
void Transform3D::RotationDegrees(::g::Uno::Float3 value)
{
    rotationDegrees = value;
    rotationQuaternion = ::g::Uno::Quaternion::FromEulerAngleDegrees1(value);
    InvalidateLocal();
}

// public float4 get_RotationQuaternion() [instance] :2684
::g::Uno::Float4 Transform3D::RotationQuaternion()
{
    return rotationQuaternion;
}

// public void set_RotationQuaternion(float4 value) [instance] :2688
void Transform3D::RotationQuaternion(::g::Uno::Float4 value)
{
    rotationQuaternion = value;
    rotationDegrees = ::g::Uno::Quaternion::ToEulerAngleDegrees(value);
    InvalidateLocal();
}

// public float3 get_Scaling() [instance] :2713
::g::Uno::Float3 Transform3D::Scaling()
{
    return scale;
}

// public void set_Scaling(float3 value) [instance] :2717
void Transform3D::Scaling(::g::Uno::Float3 value)
{
    scale = value;
    InvalidateLocal();
}
// }

}}} // ::g::Fuse::Entities
