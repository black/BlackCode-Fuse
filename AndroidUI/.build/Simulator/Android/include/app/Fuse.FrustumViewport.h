// This file was generated based on 'C:\ProgramData\Uno\Packages\FuseCore\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_FUSE_FRUSTUM_VIEWPORT_H__
#define __APP_FUSE_FRUSTUM_VIEWPORT_H__

#include <app/Uno.Float4x4.h>
#include <app/Uno.Object.h>
#include <Uno.h>
namespace app { namespace Fuse { struct Node; } }
namespace app { namespace Uno { namespace Geometry { struct Ray; } } }
namespace app { namespace Uno { struct Float2; } }

namespace app {
namespace Fuse {

struct FrustumViewport;

struct FrustumViewport__uType : ::uClassType
{
};

FrustumViewport__uType* FrustumViewport__typeof();

void FrustumViewport___ObjInit(FrustumViewport* __this);
FrustumViewport* FrustumViewport__New_1(::uStatic* __this);
::app::Uno::Geometry::Ray FrustumViewport__PointToWorldRay(::uStatic* __this, ::uObject* viewport, ::app::Uno::Float2 pointPos);
void FrustumViewport__Update(FrustumViewport* __this, ::uObject* viewport, ::uObject* frustum);
::app::Uno::Geometry::Ray FrustumViewport__WorldToLocalRay(::uStatic* __this, ::uObject* viewport, ::app::Fuse::Node* where, ::app::Uno::Geometry::Ray world);

struct FrustumViewport : ::uObject
{
    ::app::Uno::Float4x4 ProjectionTransform;
    ::app::Uno::Float4x4 ProjectionTransformInverse;
    ::app::Uno::Float4x4 ViewProjectionTransform;
    ::app::Uno::Float4x4 ViewProjectionTransformInverse;
    ::app::Uno::Float4x4 ViewTransform;
    ::app::Uno::Float4x4 ViewTransformInverse;

    void _ObjInit() { FrustumViewport___ObjInit(this); }
    void Update(::uObject* viewport, ::uObject* frustum) { FrustumViewport__Update(this, viewport, frustum); }
};

}}


#endif
