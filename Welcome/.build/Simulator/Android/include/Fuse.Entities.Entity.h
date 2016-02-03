// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Entities\0.19.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Node.h>
#include <Fuse.Scripting.INameScope.h>
namespace g{namespace Fuse{namespace Entities{struct Component;}}}
namespace g{namespace Fuse{namespace Entities{struct Entity;}}}
namespace g{namespace Fuse{namespace Entities{struct Frustum;}}}
namespace g{namespace Fuse{namespace Entities{struct MeshRenderer;}}}
namespace g{namespace Fuse{namespace Entities{struct Transform3D;}}}
namespace g{namespace Fuse{struct DrawContext;}}
namespace g{namespace Fuse{struct HitTestContext;}}
namespace g{namespace Fuse{struct NodeBounds;}}
namespace g{namespace Uno{namespace Collections{struct ObservableList;}}}
namespace g{namespace Uno{namespace Content{namespace Models{struct Model;}}}}
namespace g{namespace Uno{namespace Geometry{struct Box;}}}
namespace g{namespace Uno{struct Float3;}}
namespace g{namespace Uno{struct Float4;}}

namespace g{
namespace Fuse{
namespace Entities{

// public sealed class Entity :360
// {
::g::Fuse::Node_type* Entity_typeof();
void Entity__ctor_1_fn(Entity* __this);
void Entity__ctor_2_fn(Entity* __this, uArray* initComponents);
void Entity__get_Children_fn(Entity* __this, uObject** __retval);
void Entity__add_ComponentDraw_fn(Entity* __this, uDelegate* value);
void Entity__remove_ComponentDraw_fn(Entity* __this, uDelegate* value);
void Entity__add_ComponentHitTest_fn(Entity* __this, uDelegate* value);
void Entity__remove_ComponentHitTest_fn(Entity* __this, uDelegate* value);
void Entity__get_Components_fn(Entity* __this, uObject** __retval);
void Entity__Draw_fn(Entity* __this, ::g::Fuse::DrawContext* dc);
void Entity__FindAllComponents_fn(Entity* __this, uType* __type, uDelegate* callback, bool* recursive);
void Entity__FindComponent_fn(Entity* __this, uType* __type, uObject** __retval);
void Entity__FromModel_fn(::g::Uno::Content::Models::Model* model, Entity** __retval);
void Entity__get_Frustum_fn(Entity* __this, ::g::Fuse::Entities::Frustum** __retval);
void Entity__get_FrustumComponent_fn(Entity* __this, uObject** __retval);
void Entity__GetSubNode_fn(Entity* __this, int* index, ::g::Fuse::Node** __retval);
void Entity__get_HasChildren_fn(Entity* __this, bool* __retval);
void Entity__get_HitTestBounds_fn(Entity* __this, ::g::Fuse::NodeBounds** __retval);
void Entity__get_LocalBounds_fn(Entity* __this, ::g::Uno::Geometry::Box* __retval);
void Entity__get_MeshRenderer_fn(Entity* __this, ::g::Fuse::Entities::MeshRenderer** __retval);
void Entity__set_MeshRenderer_fn(Entity* __this, ::g::Fuse::Entities::MeshRenderer* value);
void Entity__New1_fn(Entity** __retval);
void Entity__New2_fn(uArray* initComponents, Entity** __retval);
void Entity__OnChildAdded_fn(Entity* __this, Entity* c);
void Entity__OnChildRemoved_fn(Entity* __this, Entity* c);
void Entity__OnComponentAdded_fn(Entity* __this, ::g::Fuse::Entities::Component* c);
void Entity__OnComponentRemoved_fn(Entity* __this, ::g::Fuse::Entities::Component* c);
void Entity__OnHitTest_fn(Entity* __this, ::g::Fuse::HitTestContext* htc);
void Entity__get_ParentEntity_fn(Entity* __this, Entity** __retval);
void Entity__get_SubNodeCount_fn(Entity* __this, int* __retval);
void Entity__get_Transform_fn(Entity* __this, ::g::Fuse::Entities::Transform3D** __retval);
void Entity__get_WorldForward_fn(Entity* __this, ::g::Uno::Float3* __retval);
void Entity__get_WorldPosition1_fn(Entity* __this, ::g::Uno::Float3* __retval);
void Entity__set_WorldPosition_fn(Entity* __this, ::g::Uno::Float3* value);
void Entity__get_WorldRight_fn(Entity* __this, ::g::Uno::Float3* __retval);
void Entity__get_WorldRotationQuaternion_fn(Entity* __this, ::g::Uno::Float4* __retval);
void Entity__set_WorldRotationQuaternion_fn(Entity* __this, ::g::Uno::Float4* value);
void Entity__get_WorldUp_fn(Entity* __this, ::g::Uno::Float3* __retval);

struct Entity : ::g::Fuse::Node
{
    uStrong< ::g::Uno::Collections::ObservableList*> _children;
    uStrong< ::g::Uno::Collections::ObservableList*> _components;
    uStrong<uObject*> _frustumComponent;
    uStrong< ::g::Fuse::Entities::MeshRenderer*> _MeshRenderer;
    uStrong<uDelegate*> ComponentDraw1;
    uStrong<uDelegate*> ComponentHitTest1;

    void ctor_1();
    void ctor_2(uArray* initComponents);
    uObject* Children();
    void add_ComponentDraw(uDelegate* value);
    void remove_ComponentDraw(uDelegate* value);
    void add_ComponentHitTest(uDelegate* value);
    void remove_ComponentHitTest(uDelegate* value);
    uObject* Components();
    void FindAllComponents(uType* __type, uDelegate* callback, bool recursive);
    uObject* FindComponent(uType* __type);
    ::g::Fuse::Entities::Frustum* Frustum();
    uObject* FrustumComponent();
    bool HasChildren();
    ::g::Fuse::Entities::MeshRenderer* MeshRenderer();
    void MeshRenderer(::g::Fuse::Entities::MeshRenderer* value);
    void OnChildAdded(Entity* c);
    void OnChildRemoved(Entity* c);
    void OnComponentAdded(::g::Fuse::Entities::Component* c);
    void OnComponentRemoved(::g::Fuse::Entities::Component* c);
    Entity* ParentEntity();
    ::g::Fuse::Entities::Transform3D* Transform();
    ::g::Uno::Float3 WorldForward();
    ::g::Uno::Float3 WorldPosition1();
    void WorldPosition1(::g::Uno::Float3 value);
    ::g::Uno::Float3 WorldRight();
    ::g::Uno::Float4 WorldRotationQuaternion();
    void WorldRotationQuaternion(::g::Uno::Float4 value);
    ::g::Uno::Float3 WorldUp();
    static Entity* FromModel(::g::Uno::Content::Models::Model* model);
    static Entity* New1();
    static Entity* New2(uArray* initComponents);
};
// }

}}} // ::g::Fuse::Entities
