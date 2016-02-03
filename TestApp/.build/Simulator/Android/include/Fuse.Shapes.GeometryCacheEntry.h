// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Shapes\0.18.8\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.Object.h>
namespace g{namespace Fuse{namespace Drawing{struct PathGeometry;}}}
namespace g{namespace Fuse{namespace Shapes{struct GeometryCacheEntry;}}}

namespace g{
namespace Fuse{
namespace Shapes{

// internal sealed class GeometryCacheEntry :229
// {
uType* GeometryCacheEntry_typeof();
void GeometryCacheEntry__ctor__fn(GeometryCacheEntry* __this, ::g::Fuse::Drawing::PathGeometry* geometry);
void GeometryCacheEntry__New1_fn(::g::Fuse::Drawing::PathGeometry* geometry, GeometryCacheEntry** __retval);

struct GeometryCacheEntry : uObject
{
    uStrong< ::g::Fuse::Drawing::PathGeometry*> Geometry;
    int LastUse;

    void ctor_(::g::Fuse::Drawing::PathGeometry* geometry);
    static GeometryCacheEntry* New1(::g::Fuse::Drawing::PathGeometry* geometry);
};
// }

}}} // ::g::Fuse::Shapes
