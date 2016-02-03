// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Entities\0.11.3\Internal\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_FUSE_ENTITIES_INTERNAL_SCENE_GRAPH_BUILDER_VISITOR_H__
#define __APP_FUSE_ENTITIES_INTERNAL_SCENE_GRAPH_BUILDER_VISITOR_H__

#include <app/Uno.Object.h>
#include <Uno.h>
namespace app { namespace Fuse { namespace Entities { struct Entity; } } }
namespace app { namespace Fuse { namespace Entities { struct Material; } } }
namespace app { namespace Fuse { namespace Entities { struct Mesh; } } }
namespace app { namespace Fuse { namespace Entities { struct MeshRenderer; } } }
namespace app { namespace Fuse { namespace Entities { struct Transform3D; } } }
namespace app { namespace Uno { namespace Collections { struct List__Fuse_Entities_Entity; } } }
namespace app { namespace Uno { namespace Content { namespace Models { struct ModelDrawable; } } } }
namespace app { namespace Uno { namespace Content { namespace Models { struct ModelNode; } } } }

namespace app {
namespace Fuse {
namespace Entities {
namespace Internal {

struct SceneGraphBuilderVisitor;

struct SceneGraphBuilderVisitor__uType : ::uClassType
{
};

SceneGraphBuilderVisitor__uType* SceneGraphBuilderVisitor__typeof();

void SceneGraphBuilderVisitor___ObjInit(SceneGraphBuilderVisitor* __this);
::app::Fuse::Entities::Entity* SceneGraphBuilderVisitor__get_Peek(SceneGraphBuilderVisitor* __this);
SceneGraphBuilderVisitor* SceneGraphBuilderVisitor__New_1(::uStatic* __this);
void SceneGraphBuilderVisitor__Pop(SceneGraphBuilderVisitor* __this);
void SceneGraphBuilderVisitor__Push(SceneGraphBuilderVisitor* __this, ::app::Fuse::Entities::Entity* e);
void SceneGraphBuilderVisitor__Visit(SceneGraphBuilderVisitor* __this, ::app::Fuse::Entities::Entity* e);
void SceneGraphBuilderVisitor__Visit_1(SceneGraphBuilderVisitor* __this, ::app::Fuse::Entities::Entity* e, ::app::Uno::Content::Models::ModelNode* n);
void SceneGraphBuilderVisitor__Visit_2(SceneGraphBuilderVisitor* __this, ::app::Fuse::Entities::Material* m);
void SceneGraphBuilderVisitor__Visit_3(SceneGraphBuilderVisitor* __this, ::app::Fuse::Entities::Material* m, ::app::Uno::Content::Models::ModelNode* n);
void SceneGraphBuilderVisitor__Visit_4(SceneGraphBuilderVisitor* __this, ::app::Fuse::Entities::Mesh* m, ::app::Uno::Content::Models::ModelDrawable* d);
void SceneGraphBuilderVisitor__Visit_5(SceneGraphBuilderVisitor* __this, ::app::Fuse::Entities::MeshRenderer* m);
void SceneGraphBuilderVisitor__Visit_6(SceneGraphBuilderVisitor* __this, ::app::Fuse::Entities::Transform3D* t);
void SceneGraphBuilderVisitor__Visit_7(SceneGraphBuilderVisitor* __this, ::app::Fuse::Entities::Transform3D* t, ::app::Uno::Content::Models::ModelNode* n);

struct SceneGraphBuilderVisitor : ::uObject
{
    ::uStrong< ::app::Uno::Collections::List__Fuse_Entities_Entity*> _entities;

    void _ObjInit() { SceneGraphBuilderVisitor___ObjInit(this); }
    ::app::Fuse::Entities::Entity* Peek() { return SceneGraphBuilderVisitor__get_Peek(this); }
    void Pop() { SceneGraphBuilderVisitor__Pop(this); }
    void Push(::app::Fuse::Entities::Entity* e) { SceneGraphBuilderVisitor__Push(this, e); }
    void Visit(::app::Fuse::Entities::Entity* e) { SceneGraphBuilderVisitor__Visit(this, e); }
    void Visit_1(::app::Fuse::Entities::Entity* e, ::app::Uno::Content::Models::ModelNode* n) { SceneGraphBuilderVisitor__Visit_1(this, e, n); }
    void Visit_2(::app::Fuse::Entities::Material* m) { SceneGraphBuilderVisitor__Visit_2(this, m); }
    void Visit_3(::app::Fuse::Entities::Material* m, ::app::Uno::Content::Models::ModelNode* n) { SceneGraphBuilderVisitor__Visit_3(this, m, n); }
    void Visit_4(::app::Fuse::Entities::Mesh* m, ::app::Uno::Content::Models::ModelDrawable* d) { SceneGraphBuilderVisitor__Visit_4(this, m, d); }
    void Visit_5(::app::Fuse::Entities::MeshRenderer* m) { SceneGraphBuilderVisitor__Visit_5(this, m); }
    void Visit_6(::app::Fuse::Entities::Transform3D* t) { SceneGraphBuilderVisitor__Visit_6(this, t); }
    void Visit_7(::app::Fuse::Entities::Transform3D* t, ::app::Uno::Content::Models::ModelNode* n) { SceneGraphBuilderVisitor__Visit_7(this, t, n); }
};

}}}}


#endif
