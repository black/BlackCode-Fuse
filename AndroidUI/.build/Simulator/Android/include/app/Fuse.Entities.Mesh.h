// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Entities\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_FUSE_ENTITIES_MESH_H__
#define __APP_FUSE_ENTITIES_MESH_H__

#include <app/Uno.Geometry.Box.h>
#include <app/Uno.Geometry.Sphere.h>
#include <app/Uno.IDisposable.h>
#include <app/Uno.Object.h>
#include <Uno.h>
namespace app { namespace Fuse { namespace Drawing { namespace Batching { struct Batch; } } } }
namespace app { namespace Fuse { namespace Drawing { namespace Batching { struct MeshBatcher; } } } }
namespace app { namespace Uno { namespace Content { namespace Models { struct ModelDrawable; } } } }
namespace app { namespace Uno { namespace Content { namespace Models { struct ModelMesh; } } } }

namespace app {
namespace Fuse {
namespace Entities {

struct Mesh;

struct Mesh__uType : ::uClassType
{
    ::app::Uno::IDisposable __interface_0;
};

Mesh__uType* Mesh__typeof();

void Mesh___ObjInit(Mesh* __this, ::app::Uno::Content::Models::ModelDrawable* modelDrawable);
void Mesh___ObjInit_1(Mesh* __this, ::app::Uno::Content::Models::ModelMesh* modelMesh);
void Mesh__Dispose(Mesh* __this);
void Mesh__Flush(Mesh* __this);
::uArray* Mesh__get_Batches(Mesh* __this);
::app::Uno::Geometry::Box Mesh__get_BoundingBox(Mesh* __this);
::app::Uno::Geometry::Sphere Mesh__get_BoundingSphere(Mesh* __this);
::app::Uno::Content::Models::ModelDrawable* Mesh__get_Drawable(Mesh* __this);
::app::Fuse::Drawing::Batching::Batch* Mesh__get_FirstBatch(Mesh* __this);
::app::Uno::Content::Models::ModelMesh* Mesh__get_ModelMesh(Mesh* __this);
void Mesh__Invalidate(Mesh* __this);
Mesh* Mesh__New_1(::uStatic* __this, ::app::Uno::Content::Models::ModelDrawable* modelDrawable);
Mesh* Mesh__New_2(::uStatic* __this, ::app::Uno::Content::Models::ModelMesh* modelMesh);

struct Mesh : ::uObject
{
    ::uStrong< ::app::Uno::Content::Models::ModelDrawable*> _drawable;
    bool _meshBoxDirty;
    ::app::Uno::Geometry::Box _meshBox;
    bool isDirty;
    ::uStrong< ::uArray*> batches;
    ::uStrong< ::app::Fuse::Drawing::Batching::MeshBatcher*> batcher;
    bool _meshSphereDirty;
    ::app::Uno::Geometry::Sphere _meshSphere;

    void _ObjInit(::app::Uno::Content::Models::ModelDrawable* modelDrawable) { Mesh___ObjInit(this, modelDrawable); }
    void _ObjInit_1(::app::Uno::Content::Models::ModelMesh* modelMesh) { Mesh___ObjInit_1(this, modelMesh); }
    void Dispose() { Mesh__Dispose(this); }
    void Flush() { Mesh__Flush(this); }
    ::uArray* Batches() { return Mesh__get_Batches(this); }
    ::app::Uno::Geometry::Box BoundingBox() { return Mesh__get_BoundingBox(this); }
    ::app::Uno::Geometry::Sphere BoundingSphere() { return Mesh__get_BoundingSphere(this); }
    ::app::Uno::Content::Models::ModelDrawable* Drawable() { return Mesh__get_Drawable(this); }
    ::app::Fuse::Drawing::Batching::Batch* FirstBatch() { return Mesh__get_FirstBatch(this); }
    ::app::Uno::Content::Models::ModelMesh* ModelMesh() { return Mesh__get_ModelMesh(this); }
    void Invalidate() { Mesh__Invalidate(this); }
};

}}}


#endif
