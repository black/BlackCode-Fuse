// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Entities\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_FUSE_ENTITIES_TRIANGLE_MESH_INTERSECTER_H__
#define __APP_FUSE_ENTITIES_TRIANGLE_MESH_INTERSECTER_H__

#include <app/Uno.Object.h>
#include <Uno.h>
namespace app { namespace Uno { namespace Geometry { struct Ray; } } }
namespace app { namespace Uno { namespace Geometry { struct Triangle; } } }

namespace app {
namespace Fuse {
namespace Entities {

struct TriangleMeshIntersecter;

struct TriangleMeshIntersecter__uType : ::uClassType
{
    ::app::Uno::Geometry::Triangle(*__fp_GetTriangle)(TriangleMeshIntersecter*, int);
};

TriangleMeshIntersecter__uType* TriangleMeshIntersecter__typeof();

void TriangleMeshIntersecter___ObjInit(TriangleMeshIntersecter* __this, int count);
bool TriangleMeshIntersecter__IntersectsRay(TriangleMeshIntersecter* __this, ::app::Uno::Geometry::Ray objRay, float* outDistance);

struct TriangleMeshIntersecter : ::uObject
{
    int _count;

    void _ObjInit(int count) { TriangleMeshIntersecter___ObjInit(this, count); }
    ::app::Uno::Geometry::Triangle GetTriangle(int index);
    bool IntersectsRay(::app::Uno::Geometry::Ray objRay, float* outDistance);
};

}}}

#include <app/Uno.Geometry.Ray.h>
#include <app/Uno.Geometry.Triangle.h>

namespace app {
namespace Fuse {
namespace Entities {

inline ::app::Uno::Geometry::Triangle TriangleMeshIntersecter::GetTriangle(int index) { return (((TriangleMeshIntersecter__uType*)this->__obj_type)->__fp_GetTriangle)(this, index); }
inline bool TriangleMeshIntersecter::IntersectsRay(::app::Uno::Geometry::Ray objRay, float* outDistance) { return TriangleMeshIntersecter__IntersectsRay(this, objRay, outDistance); }

}}}


#endif
