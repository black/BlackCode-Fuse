// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Shapes\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_FUSE_SHAPES_GEOMETRY_CACHE_ENTRY_H__
#define __APP_FUSE_SHAPES_GEOMETRY_CACHE_ENTRY_H__

#include <app/Uno.Object.h>
#include <Uno.h>
namespace app { namespace Fuse { namespace Drawing { struct PathGeometry; } } }

namespace app {
namespace Fuse {
namespace Shapes {

struct GeometryCacheEntry;

struct GeometryCacheEntry__uType : ::uClassType
{
};

GeometryCacheEntry__uType* GeometryCacheEntry__typeof();

void GeometryCacheEntry___ObjInit(GeometryCacheEntry* __this, ::app::Fuse::Drawing::PathGeometry* geometry);
GeometryCacheEntry* GeometryCacheEntry__New_1(::uStatic* __this, ::app::Fuse::Drawing::PathGeometry* geometry);

struct GeometryCacheEntry : ::uObject
{
    ::uStrong< ::app::Fuse::Drawing::PathGeometry*> Geometry;
    int LastUse;

    void _ObjInit(::app::Fuse::Drawing::PathGeometry* geometry) { GeometryCacheEntry___ObjInit(this, geometry); }
};

}}}


#endif
