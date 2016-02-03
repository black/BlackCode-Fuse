// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Entities\0.11.3\Internal\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_FUSE_ENTITIES_INTERNAL_SCENE_GRAPH_BUILDER_H__
#define __APP_FUSE_ENTITIES_INTERNAL_SCENE_GRAPH_BUILDER_H__

#include <app/Uno.Object.h>
#include <Uno.h>
namespace app { namespace Fuse { namespace Entities { namespace Internal { struct SceneGraphBuilderVisitor; } } } }
namespace app { namespace Fuse { namespace Entities { struct Entity; } } }
namespace app { namespace Fuse { namespace Entities { struct Material; } } }
namespace app { namespace Fuse { namespace Entities { struct Mesh; } } }
namespace app { namespace Fuse { namespace Entities { struct MeshRenderer; } } }
namespace app { namespace Fuse { namespace Entities { struct Transform3D; } } }
namespace app { namespace Uno { namespace Content { namespace Models { struct Model; } } } }
namespace app { namespace Uno { namespace Content { namespace Models { struct ModelDrawable; } } } }
namespace app { namespace Uno { namespace Content { namespace Models { struct ModelNode; } } } }
namespace app { namespace Uno { struct Float4x4; } }

namespace app {
namespace Fuse {
namespace Entities {
namespace Internal {

struct SceneGraphBuilder;

struct SceneGraphBuilder__uType : ::uClassType
{
};

SceneGraphBuilder__uType* SceneGraphBuilder__typeof();

void SceneGraphBuilder___ObjInit(SceneGraphBuilder* __this, ::app::Fuse::Entities::Internal::SceneGraphBuilderVisitor* visitor);
::app::Fuse::Entities::Entity* SceneGraphBuilder__Build(SceneGraphBuilder* __this, ::app::Uno::Content::Models::Model* model);
::app::Fuse::Entities::Material* SceneGraphBuilder__CreateMaterial(SceneGraphBuilder* __this);
::app::Fuse::Entities::Mesh* SceneGraphBuilder__CreateMesh(SceneGraphBuilder* __this, ::app::Uno::Content::Models::ModelDrawable* dr);
::app::Fuse::Entities::MeshRenderer* SceneGraphBuilder__CreateMeshRenderer(SceneGraphBuilder* __this, ::app::Fuse::Entities::Material* mat);
::app::Fuse::Entities::MeshRenderer* SceneGraphBuilder__CreateMeshRenderer_1(SceneGraphBuilder* __this, ::app::Fuse::Entities::Mesh* mesh);
::app::Fuse::Entities::Entity* SceneGraphBuilder__CreateNode(SceneGraphBuilder* __this, ::app::Uno::Content::Models::ModelNode* node, bool isRoot);
::app::Fuse::Entities::Transform3D* SceneGraphBuilder__CreateTransform(SceneGraphBuilder* __this);
bool SceneGraphBuilder__IsIdentity(::uStatic* __this, ::app::Uno::Float4x4 mat);
::app::Uno::Float4x4 SceneGraphBuilder__MakeMatrix(::uStatic* __this, ::uObject* transforms);
SceneGraphBuilder* SceneGraphBuilder__New_1(::uStatic* __this, ::app::Fuse::Entities::Internal::SceneGraphBuilderVisitor* visitor);
::app::Fuse::Entities::Transform3D* SceneGraphBuilder__TryCreateCompositTransform(SceneGraphBuilder* __this, ::app::Uno::Content::Models::ModelNode* node);

struct SceneGraphBuilder : ::uObject
{
    ::uStrong< ::app::Fuse::Entities::Internal::SceneGraphBuilderVisitor*> _visitor;

    void _ObjInit(::app::Fuse::Entities::Internal::SceneGraphBuilderVisitor* visitor) { SceneGraphBuilder___ObjInit(this, visitor); }
    ::app::Fuse::Entities::Entity* Build(::app::Uno::Content::Models::Model* model) { return SceneGraphBuilder__Build(this, model); }
    ::app::Fuse::Entities::Material* CreateMaterial() { return SceneGraphBuilder__CreateMaterial(this); }
    ::app::Fuse::Entities::Mesh* CreateMesh(::app::Uno::Content::Models::ModelDrawable* dr) { return SceneGraphBuilder__CreateMesh(this, dr); }
    ::app::Fuse::Entities::MeshRenderer* CreateMeshRenderer(::app::Fuse::Entities::Material* mat) { return SceneGraphBuilder__CreateMeshRenderer(this, mat); }
    ::app::Fuse::Entities::MeshRenderer* CreateMeshRenderer_1(::app::Fuse::Entities::Mesh* mesh) { return SceneGraphBuilder__CreateMeshRenderer_1(this, mesh); }
    ::app::Fuse::Entities::Entity* CreateNode(::app::Uno::Content::Models::ModelNode* node, bool isRoot) { return SceneGraphBuilder__CreateNode(this, node, isRoot); }
    ::app::Fuse::Entities::Transform3D* CreateTransform() { return SceneGraphBuilder__CreateTransform(this); }
    ::app::Fuse::Entities::Transform3D* TryCreateCompositTransform(::app::Uno::Content::Models::ModelNode* node) { return SceneGraphBuilder__TryCreateCompositTransform(this, node); }
};

}}}}


#endif
