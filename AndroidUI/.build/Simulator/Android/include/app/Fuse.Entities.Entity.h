// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Entities\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_FUSE_ENTITIES_ENTITY_H__
#define __APP_FUSE_ENTITIES_ENTITY_H__

#include <app/Fuse.Node.h>
#include <app/Fuse.Scripting.INameScope.h>
#include <Uno.h>
namespace app { namespace Fuse { namespace Entities { struct Component; } } }
namespace app { namespace Fuse { namespace Entities { struct Frustum; } } }
namespace app { namespace Fuse { namespace Entities { struct MeshRenderer; } } }
namespace app { namespace Fuse { namespace Entities { struct Transform3D; } } }
namespace app { namespace Fuse { struct DrawContext; } }
namespace app { namespace Fuse { struct HitTestContext; } }
namespace app { namespace Fuse { struct NodeBounds; } }
namespace app { namespace Uno { namespace Collections { struct ObservableList__Fuse_Entities_Component; } } }
namespace app { namespace Uno { namespace Collections { struct ObservableList__Fuse_Entities_Entity; } } }
namespace app { namespace Uno { namespace Content { namespace Models { struct Model; } } } }
namespace app { namespace Uno { namespace Geometry { struct Box; } } }
namespace app { namespace Uno { struct Float3; } }
namespace app { namespace Uno { struct Float4; } }

namespace app {
namespace Fuse {
namespace Entities {

struct Entity;

struct Entity__uType : ::app::Fuse::Node__uType
{
};

Entity__uType* Entity__typeof();

void Entity___ObjInit_1(Entity* __this);
void Entity___ObjInit_2(Entity* __this, ::uArray* initComponents);
void Entity__add_ComponentDraw(Entity* __this, ::uDelegate* value);
void Entity__add_ComponentHitTest(Entity* __this, ::uDelegate* value);
void Entity__Draw(Entity* __this, ::app::Fuse::DrawContext* dc);
void Entity__FindAllComponents__Fuse_Entities_MeshRenderer(Entity* __this, ::uDelegate* callback, bool recursive);
::uObject* Entity__FindComponent__Fuse_IFrustum(Entity* __this);
Entity* Entity__FromModel(::uStatic* __this, ::app::Uno::Content::Models::Model* model);
::uObject* Entity__get_Children(Entity* __this);
::uObject* Entity__get_Components(Entity* __this);
::app::Fuse::Entities::Frustum* Entity__get_Frustum(Entity* __this);
::uObject* Entity__get_FrustumComponent(Entity* __this);
bool Entity__get_HasChildren(Entity* __this);
::app::Fuse::NodeBounds* Entity__get_HitTestBounds(Entity* __this);
::app::Uno::Geometry::Box Entity__get_LocalBounds(Entity* __this);
::app::Fuse::Entities::MeshRenderer* Entity__get_MeshRenderer(Entity* __this);
Entity* Entity__get_ParentEntity(Entity* __this);
int Entity__get_SubNodeCount(Entity* __this);
::app::Fuse::Entities::Transform3D* Entity__get_Transform(Entity* __this);
::app::Uno::Float3 Entity__get_WorldForward(Entity* __this);
::app::Uno::Float3 Entity__get_WorldPosition_1(Entity* __this);
::app::Uno::Float3 Entity__get_WorldRight(Entity* __this);
::app::Uno::Float4 Entity__get_WorldRotationQuaternion(Entity* __this);
::app::Uno::Float3 Entity__get_WorldUp(Entity* __this);
::app::Fuse::Node* Entity__GetSubNode(Entity* __this, int index);
Entity* Entity__New_1(::uStatic* __this);
Entity* Entity__New_2(::uStatic* __this, ::uArray* initComponents);
void Entity__OnChildAdded(Entity* __this, Entity* c);
void Entity__OnChildRemoved(Entity* __this, Entity* c);
void Entity__OnComponentAdded(Entity* __this, ::app::Fuse::Entities::Component* c);
void Entity__OnComponentRemoved(Entity* __this, ::app::Fuse::Entities::Component* c);
void Entity__OnHitTest(Entity* __this, ::app::Fuse::HitTestContext* htc);
void Entity__remove_ComponentDraw(Entity* __this, ::uDelegate* value);
void Entity__remove_ComponentHitTest(Entity* __this, ::uDelegate* value);
void Entity__set_MeshRenderer(Entity* __this, ::app::Fuse::Entities::MeshRenderer* value);
void Entity__set_WorldPosition(Entity* __this, ::app::Uno::Float3 value);
void Entity__set_WorldRotationQuaternion(Entity* __this, ::app::Uno::Float4 value);

struct Entity : ::app::Fuse::Node
{
    ::uStrong< ::app::Uno::Collections::ObservableList__Fuse_Entities_Entity*> _children;
    ::uStrong< ::uObject*> _frustumComponent;
    ::uStrong< ::app::Uno::Collections::ObservableList__Fuse_Entities_Component*> _components;
    ::uStrong< ::uDelegate*> ComponentDraw;
    ::uStrong< ::uDelegate*> ComponentHitTest;
    ::uStrong< ::app::Fuse::Entities::MeshRenderer*> _MeshRenderer;

    void _ObjInit_1() { Entity___ObjInit_1(this); }
    void _ObjInit_2(::uArray* initComponents) { Entity___ObjInit_2(this, initComponents); }
    void add_ComponentDraw(::uDelegate* value) { Entity__add_ComponentDraw(this, value); }
    void add_ComponentHitTest(::uDelegate* value) { Entity__add_ComponentHitTest(this, value); }
    void FindAllComponents__Fuse_Entities_MeshRenderer(::uDelegate* callback, bool recursive) { Entity__FindAllComponents__Fuse_Entities_MeshRenderer(this, callback, recursive); }
    ::uObject* FindComponent__Fuse_IFrustum() { return Entity__FindComponent__Fuse_IFrustum(this); }
    ::uObject* Children() { return Entity__get_Children(this); }
    ::uObject* Components() { return Entity__get_Components(this); }
    ::app::Fuse::Entities::Frustum* Frustum() { return Entity__get_Frustum(this); }
    ::uObject* FrustumComponent() { return Entity__get_FrustumComponent(this); }
    bool HasChildren() { return Entity__get_HasChildren(this); }
    ::app::Fuse::Entities::MeshRenderer* MeshRenderer() { return Entity__get_MeshRenderer(this); }
    Entity* ParentEntity() { return Entity__get_ParentEntity(this); }
    ::app::Fuse::Entities::Transform3D* Transform() { return Entity__get_Transform(this); }
    ::app::Uno::Float3 WorldForward();
    ::app::Uno::Float3 WorldPosition_1();
    ::app::Uno::Float3 WorldRight();
    ::app::Uno::Float4 WorldRotationQuaternion();
    ::app::Uno::Float3 WorldUp();
    void OnChildAdded(Entity* c) { Entity__OnChildAdded(this, c); }
    void OnChildRemoved(Entity* c) { Entity__OnChildRemoved(this, c); }
    void OnComponentAdded(::app::Fuse::Entities::Component* c) { Entity__OnComponentAdded(this, c); }
    void OnComponentRemoved(::app::Fuse::Entities::Component* c) { Entity__OnComponentRemoved(this, c); }
    void remove_ComponentDraw(::uDelegate* value) { Entity__remove_ComponentDraw(this, value); }
    void remove_ComponentHitTest(::uDelegate* value) { Entity__remove_ComponentHitTest(this, value); }
    void MeshRenderer(::app::Fuse::Entities::MeshRenderer* value) { Entity__set_MeshRenderer(this, value); }
    void WorldPosition_1(::app::Uno::Float3 value);
    void WorldRotationQuaternion(::app::Uno::Float4 value);
};

}}}

#include <app/Uno.Float3.h>
#include <app/Uno.Float4.h>
#include <app/Uno.Geometry.Box.h>

namespace app {
namespace Fuse {
namespace Entities {

inline ::app::Uno::Float3 Entity::WorldForward() { return Entity__get_WorldForward(this); }
inline ::app::Uno::Float3 Entity::WorldPosition_1() { return Entity__get_WorldPosition_1(this); }
inline ::app::Uno::Float3 Entity::WorldRight() { return Entity__get_WorldRight(this); }
inline ::app::Uno::Float4 Entity::WorldRotationQuaternion() { return Entity__get_WorldRotationQuaternion(this); }
inline ::app::Uno::Float3 Entity::WorldUp() { return Entity__get_WorldUp(this); }
inline void Entity::WorldPosition_1(::app::Uno::Float3 value) { Entity__set_WorldPosition(this, value); }
inline void Entity::WorldRotationQuaternion(::app::Uno::Float4 value) { Entity__set_WorldRotationQuaternion(this, value); }

}}}


#endif
