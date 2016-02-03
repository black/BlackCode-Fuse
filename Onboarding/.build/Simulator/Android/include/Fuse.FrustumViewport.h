// This file was generated based on 'C:\ProgramData\Uno\Packages\FuseCore\0.19.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.Float4x4.h>
#include <Uno.Object.h>
namespace g{namespace Fuse{struct FrustumViewport;}}
namespace g{namespace Fuse{struct Node;}}
namespace g{namespace Uno{namespace Geometry{struct Ray;}}}
namespace g{namespace Uno{struct Float2;}}

namespace g{
namespace Fuse{

// internal sealed class FrustumViewport :1922
// {
uType* FrustumViewport_typeof();
void FrustumViewport__ctor__fn(FrustumViewport* __this);
void FrustumViewport__New1_fn(FrustumViewport** __retval);
void FrustumViewport__PointToWorldRay_fn(uObject* viewport, ::g::Uno::Float2* pointPos, ::g::Uno::Geometry::Ray* __retval);
void FrustumViewport__Update_fn(FrustumViewport* __this, uObject* viewport, uObject* frustum);
void FrustumViewport__WorldToLocalRay_fn(uObject* viewport, ::g::Fuse::Node* where, ::g::Uno::Geometry::Ray* world, ::g::Uno::Geometry::Ray* __retval);

struct FrustumViewport : uObject
{
    ::g::Uno::Float4x4 ProjectionTransform;
    ::g::Uno::Float4x4 ProjectionTransformInverse;
    ::g::Uno::Float4x4 ViewProjectionTransform;
    ::g::Uno::Float4x4 ViewProjectionTransformInverse;
    ::g::Uno::Float4x4 ViewTransform;
    ::g::Uno::Float4x4 ViewTransformInverse;

    void ctor_();
    void Update(uObject* viewport, uObject* frustum);
    static FrustumViewport* New1();
    static ::g::Uno::Geometry::Ray PointToWorldRay(uObject* viewport, ::g::Uno::Float2 pointPos);
    static ::g::Uno::Geometry::Ray WorldToLocalRay(uObject* viewport, ::g::Fuse::Node* where, ::g::Uno::Geometry::Ray world);
};
// }

}} // ::g::Fuse
