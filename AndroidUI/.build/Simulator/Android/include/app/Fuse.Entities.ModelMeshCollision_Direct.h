// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Entities\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_FUSE_ENTITIES_MODEL_MESH_COLLISION_DIRECT_H__
#define __APP_FUSE_ENTITIES_MODEL_MESH_COLLISION_DIRECT_H__

#include <app/Fuse.Entities.TriangleMeshIntersecter.h>
#include <Uno.h>
namespace app { namespace Uno { namespace Content { namespace Models { struct VertexAttributeArray; } } } }
namespace app { namespace Uno { namespace Geometry { struct Triangle; } } }

namespace app {
namespace Fuse {
namespace Entities {

struct ModelMeshCollision_Direct;

struct ModelMeshCollision_Direct__uType : ::app::Fuse::Entities::TriangleMeshIntersecter__uType
{
};

ModelMeshCollision_Direct__uType* ModelMeshCollision_Direct__typeof();

void ModelMeshCollision_Direct___ObjInit_1(ModelMeshCollision_Direct* __this, ::app::Uno::Content::Models::VertexAttributeArray* positions, int vertexCount);
::app::Uno::Geometry::Triangle ModelMeshCollision_Direct__GetTriangle(ModelMeshCollision_Direct* __this, int t);
ModelMeshCollision_Direct* ModelMeshCollision_Direct__New_1(::uStatic* __this, ::app::Uno::Content::Models::VertexAttributeArray* positions, int vertexCount);

struct ModelMeshCollision_Direct : ::app::Fuse::Entities::TriangleMeshIntersecter
{
    ::uStrong< ::app::Uno::Content::Models::VertexAttributeArray*> _positions;

    void _ObjInit_1(::app::Uno::Content::Models::VertexAttributeArray* positions, int vertexCount) { ModelMeshCollision_Direct___ObjInit_1(this, positions, vertexCount); }
};

}}}


#endif
