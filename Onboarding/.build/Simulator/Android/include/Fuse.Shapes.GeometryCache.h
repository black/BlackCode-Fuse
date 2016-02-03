// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Shapes\0.19.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.Object.h>
namespace g{namespace Fuse{namespace Drawing{struct PathGeometry;}}}
namespace g{namespace Fuse{namespace Shapes{struct GeometryCache;}}}
namespace g{namespace Fuse{namespace Shapes{struct GeometryCacheEntry;}}}
namespace g{namespace Uno{namespace Collections{struct Dictionary;}}}

namespace g{
namespace Fuse{
namespace Shapes{

// internal sealed class GeometryCache :239
// {
uType* GeometryCache_typeof();
void GeometryCache__ctor__fn(GeometryCache* __this);
void GeometryCache__GetOrCreateImpl_fn(GeometryCache* __this, uString* data, ::g::Fuse::Drawing::PathGeometry** __retval);
void GeometryCache__GetOrParse_fn(uString* data, ::g::Fuse::Drawing::PathGeometry** __retval);
void GeometryCache__New1_fn(GeometryCache** __retval);
void GeometryCache__Update_fn(GeometryCache* __this);

struct GeometryCache : uObject
{
    uStrong< ::g::Uno::Collections::Dictionary*> _cache;
    int _frame;
    static uSStrong<GeometryCache*> _instance_;
    static uSStrong<GeometryCache*>& _instance() { return _instance_; }

    void ctor_();
    ::g::Fuse::Drawing::PathGeometry* GetOrCreateImpl(uString* data);
    void Update();
    static ::g::Fuse::Drawing::PathGeometry* GetOrParse(uString* data);
    static GeometryCache* New1();
};
// }

}}} // ::g::Fuse::Shapes
