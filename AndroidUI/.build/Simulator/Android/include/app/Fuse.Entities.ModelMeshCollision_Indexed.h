// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Entities\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_FUSE_ENTITIES_MODEL_MESH_COLLISION_INDEXED_H__
#define __APP_FUSE_ENTITIES_MODEL_MESH_COLLISION_INDEXED_H__

#include <app/Fuse.Entities.TriangleMeshIntersecter.h>
#include <Uno.h>
namespace app { namespace Uno { namespace Content { namespace Models { struct IndexArray; } } } }
namespace app { namespace Uno { namespace Content { namespace Models { struct VertexAttributeArray; } } } }
namespace app { namespace Uno { namespace Geometry { struct Triangle; } } }

namespace app {
namespace Fuse {
namespace Entities {

struct ModelMeshCollision_Indexed;

struct ModelMeshCollision_Indexed__uType : ::app::Fuse::Entities::TriangleMeshIntersecter__uType
{
};

ModelMeshCollision_Indexed__uType* ModelMeshCollision_Indexed__typeof();

void ModelMeshCollision_Indexed___ObjInit_1(ModelMeshCollision_Indexed* __this, ::app::Uno::Content::Models::VertexAttributeArray* positions, ::app::Uno::Content::Models::IndexArray* indices, int indexCount);
::app::Uno::Geometry::Triangle ModelMeshCollision_Indexed__GetTriangle(ModelMeshCollision_Indexed* __this, int t);
ModelMeshCollision_Indexed* ModelMeshCollision_Indexed__New_1(::uStatic* __this, ::app::Uno::Content::Models::VertexAttributeArray* positions, ::app::Uno::Content::Models::IndexArray* indices, int indexCount);

struct ModelMeshCollision_Indexed : ::app::Fuse::Entities::TriangleMeshIntersecter
{
    ::uStrong< ::app::Uno::Content::Models::VertexAttributeArray*> _positions;
    ::uStrong< ::app::Uno::Content::Models::IndexArray*> _indices;

    void _ObjInit_1(::app::Uno::Content::Models::VertexAttributeArray* positions, ::app::Uno::Content::Models::IndexArray* indices, int indexCount) { ModelMeshCollision_Indexed___ObjInit_1(this, positions, indices, indexCount); }
};

}}}


#endif
