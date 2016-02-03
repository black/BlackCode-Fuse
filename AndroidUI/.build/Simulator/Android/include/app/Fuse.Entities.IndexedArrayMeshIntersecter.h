// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Entities\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_FUSE_ENTITIES_INDEXED_ARRAY_MESH_INTERSECTER_H__
#define __APP_FUSE_ENTITIES_INDEXED_ARRAY_MESH_INTERSECTER_H__

#include <app/Fuse.Entities.TriangleMeshIntersecter.h>
#include <app/Uno.Float3.h>
#include <Uno.h>
namespace app { namespace Uno { namespace Geometry { struct Triangle; } } }

namespace app {
namespace Fuse {
namespace Entities {

struct IndexedArrayMeshIntersecter;

struct IndexedArrayMeshIntersecter__uType : ::app::Fuse::Entities::TriangleMeshIntersecter__uType
{
};

IndexedArrayMeshIntersecter__uType* IndexedArrayMeshIntersecter__typeof();

void IndexedArrayMeshIntersecter___ObjInit_1(IndexedArrayMeshIntersecter* __this, ::uArray* positions, ::uArray* indices);
::app::Uno::Geometry::Triangle IndexedArrayMeshIntersecter__GetTriangle(IndexedArrayMeshIntersecter* __this, int t);
IndexedArrayMeshIntersecter* IndexedArrayMeshIntersecter__New_1(::uStatic* __this, ::uArray* positions, ::uArray* indices);

struct IndexedArrayMeshIntersecter : ::app::Fuse::Entities::TriangleMeshIntersecter
{
    ::uStrong< ::uArray*> _indices;
    ::uStrong< ::uArray*> _positions;

    void _ObjInit_1(::uArray* positions, ::uArray* indices) { IndexedArrayMeshIntersecter___ObjInit_1(this, positions, indices); }
};

}}}


#endif
