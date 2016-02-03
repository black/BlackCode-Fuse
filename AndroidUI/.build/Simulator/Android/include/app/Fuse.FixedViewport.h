// This file was generated based on 'C:\ProgramData\Uno\Packages\FuseCore\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_FUSE_FIXED_VIEWPORT_H__
#define __APP_FUSE_FIXED_VIEWPORT_H__

#include <app/Fuse.IViewport.h>
#include <app/Uno.Float2.h>
#include <app/Uno.Object.h>
#include <Uno.h>
namespace app { namespace Fuse { struct FrustumViewport; } }
namespace app { namespace Uno { namespace Geometry { struct Ray; } } }
namespace app { namespace Uno { struct Float3; } }
namespace app { namespace Uno { struct Float4x4; } }
namespace app { namespace Uno { struct Int2; } }

namespace app {
namespace Fuse {

struct FixedViewport;

struct FixedViewport__uType : ::uClassType
{
    ::app::Fuse::IViewport __interface_0;
};

FixedViewport__uType* FixedViewport__typeof();

void FixedViewport___ObjInit(FixedViewport* __this, ::app::Uno::Int2 pixelSize, float pointDensity, ::uObject* frustum);
::app::Uno::Float2 FixedViewport__get_PixelSize(FixedViewport* __this);
float FixedViewport__get_PointDensity(FixedViewport* __this);
::app::Uno::Float4x4 FixedViewport__get_ProjectionTransform(FixedViewport* __this);
::app::Uno::Float4x4 FixedViewport__get_ProjectionTransformInverse(FixedViewport* __this);
::app::Uno::Float2 FixedViewport__get_Size(FixedViewport* __this);
::app::Uno::Float3 FixedViewport__get_ViewOrigin(FixedViewport* __this);
::app::Uno::Float4x4 FixedViewport__get_ViewProjectionTransform(FixedViewport* __this);
::app::Uno::Float4x4 FixedViewport__get_ViewProjectionTransformInverse(FixedViewport* __this);
::app::Uno::Float2 FixedViewport__get_ViewRange(FixedViewport* __this);
::app::Uno::Float4x4 FixedViewport__get_ViewTransform(FixedViewport* __this);
::app::Uno::Float4x4 FixedViewport__get_ViewTransformInverse(FixedViewport* __this);
FixedViewport* FixedViewport__New_1(::uStatic* __this, ::app::Uno::Int2 pixelSize, float pointDensity, ::uObject* frustum);
::app::Uno::Geometry::Ray FixedViewport__PointToWorldRay(FixedViewport* __this, ::app::Uno::Float2 pointPos);

struct FixedViewport : ::uObject
{
    float _pointDensity;
    ::app::Uno::Float2 _pixelSize;
    ::uStrong< ::app::Fuse::FrustumViewport*> _frustumViewport;
    ::uStrong< ::uObject*> _frustum;

    void _ObjInit(::app::Uno::Int2 pixelSize, float pointDensity, ::uObject* frustum);
    ::app::Uno::Float2 PixelSize();
    float PointDensity() { return FixedViewport__get_PointDensity(this); }
    ::app::Uno::Float4x4 ProjectionTransform();
    ::app::Uno::Float4x4 ProjectionTransformInverse();
    ::app::Uno::Float2 Size();
    ::app::Uno::Float3 ViewOrigin();
    ::app::Uno::Float4x4 ViewProjectionTransform();
    ::app::Uno::Float4x4 ViewProjectionTransformInverse();
    ::app::Uno::Float2 ViewRange();
    ::app::Uno::Float4x4 ViewTransform();
    ::app::Uno::Float4x4 ViewTransformInverse();
    ::app::Uno::Geometry::Ray PointToWorldRay(::app::Uno::Float2 pointPos);
};

}}

#include <app/Uno.Float3.h>
#include <app/Uno.Float4x4.h>
#include <app/Uno.Geometry.Ray.h>
#include <app/Uno.Int2.h>

namespace app {
namespace Fuse {

inline void FixedViewport::_ObjInit(::app::Uno::Int2 pixelSize, float pointDensity, ::uObject* frustum) { FixedViewport___ObjInit(this, pixelSize, pointDensity, frustum); }
inline ::app::Uno::Float2 FixedViewport::PixelSize() { return FixedViewport__get_PixelSize(this); }
inline ::app::Uno::Float4x4 FixedViewport::ProjectionTransform() { return FixedViewport__get_ProjectionTransform(this); }
inline ::app::Uno::Float4x4 FixedViewport::ProjectionTransformInverse() { return FixedViewport__get_ProjectionTransformInverse(this); }
inline ::app::Uno::Float2 FixedViewport::Size() { return FixedViewport__get_Size(this); }
inline ::app::Uno::Float3 FixedViewport::ViewOrigin() { return FixedViewport__get_ViewOrigin(this); }
inline ::app::Uno::Float4x4 FixedViewport::ViewProjectionTransform() { return FixedViewport__get_ViewProjectionTransform(this); }
inline ::app::Uno::Float4x4 FixedViewport::ViewProjectionTransformInverse() { return FixedViewport__get_ViewProjectionTransformInverse(this); }
inline ::app::Uno::Float2 FixedViewport::ViewRange() { return FixedViewport__get_ViewRange(this); }
inline ::app::Uno::Float4x4 FixedViewport::ViewTransform() { return FixedViewport__get_ViewTransform(this); }
inline ::app::Uno::Float4x4 FixedViewport::ViewTransformInverse() { return FixedViewport__get_ViewTransformInverse(this); }
inline ::app::Uno::Geometry::Ray FixedViewport::PointToWorldRay(::app::Uno::Float2 pointPos) { return FixedViewport__PointToWorldRay(this, pointPos); }

}}


#endif
