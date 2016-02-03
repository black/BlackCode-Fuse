// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Entities\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_FUSE_ENTITIES_MODEL_MESH_COLLISION_H__
#define __APP_FUSE_ENTITIES_MODEL_MESH_COLLISION_H__

#include <app/Uno.Object.h>
#include <Uno.h>
namespace app { namespace Uno { namespace Content { namespace Models { struct ModelMesh; } } } }
namespace app { namespace Uno { namespace Geometry { struct Ray; } } }

namespace app {
namespace Fuse {
namespace Entities {

struct ModelMeshCollision;

struct ModelMeshCollision__uType : ::uClassType
{
};

ModelMeshCollision__uType* ModelMeshCollision__typeof();

void ModelMeshCollision___ObjInit(ModelMeshCollision* __this);
ModelMeshCollision* ModelMeshCollision__New_1(::uStatic* __this);
bool ModelMeshCollision__RayIntersectsModelMesh(::uStatic* __this, ::app::Uno::Geometry::Ray objRay, ::app::Uno::Content::Models::ModelMesh* modelMesh, float* outDistance);

struct ModelMeshCollision : ::uObject
{
    void _ObjInit() { ModelMeshCollision___ObjInit(this); }
};

}}}


#endif
