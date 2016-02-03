// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Entities\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_FUSE_ENTITIES_DIRECT_ARRAY_MESH_INTERSECTER_H__
#define __APP_FUSE_ENTITIES_DIRECT_ARRAY_MESH_INTERSECTER_H__

#include <app/Fuse.Entities.TriangleMeshIntersecter.h>
#include <app/Uno.Float3.h>
#include <Uno.h>
namespace app { namespace Uno { namespace Geometry { struct Triangle; } } }

namespace app {
namespace Fuse {
namespace Entities {

struct DirectArrayMeshIntersecter;

struct DirectArrayMeshIntersecter__uType : ::app::Fuse::Entities::TriangleMeshIntersecter__uType
{
};

DirectArrayMeshIntersecter__uType* DirectArrayMeshIntersecter__typeof();

void DirectArrayMeshIntersecter___ObjInit_1(DirectArrayMeshIntersecter* __this, ::uArray* positions);
::app::Uno::Geometry::Triangle DirectArrayMeshIntersecter__GetTriangle(DirectArrayMeshIntersecter* __this, int t);
DirectArrayMeshIntersecter* DirectArrayMeshIntersecter__New_1(::uStatic* __this, ::uArray* positions);

struct DirectArrayMeshIntersecter : ::app::Fuse::Entities::TriangleMeshIntersecter
{
    ::uStrong< ::uArray*> _positions;

    void _ObjInit_1(::uArray* positions) { DirectArrayMeshIntersecter___ObjInit_1(this, positions); }
};

}}}


#endif
