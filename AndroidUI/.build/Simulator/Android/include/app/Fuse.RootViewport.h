// This file was generated based on 'C:\ProgramData\Uno\Packages\FuseCore\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_FUSE_ROOT_VIEWPORT_H__
#define __APP_FUSE_ROOT_VIEWPORT_H__

#include <app/Fuse.IViewport.h>
#include <app/Fuse.Node.h>
#include <app/Fuse.Scripting.INameScope.h>
#include <Uno.h>
namespace app { namespace Fuse { struct FrustumViewport; } }
namespace app { namespace Fuse { struct HitTestContext; } }
namespace app { namespace Uno { namespace Geometry { struct Ray; } } }
namespace app { namespace Uno { namespace Platform { struct Window; } } }
namespace app { namespace Uno { struct EventArgs; } }
namespace app { namespace Uno { struct Float2; } }
namespace app { namespace Uno { struct Float3; } }
namespace app { namespace Uno { struct Float4x4; } }

namespace app {
namespace Fuse {

struct RootViewport;

extern float RootViewport___defaultDensity;

struct RootViewport__uType : ::app::Fuse::Node__uType
{
    ::app::Fuse::IViewport __interface_1;
};

RootViewport__uType* RootViewport__typeof();

void RootViewport___ObjInit_1(RootViewport* __this, ::app::Uno::Platform::Window* window, float pointDensity);
void RootViewport___TypeInit_1(::uStatic* __this);
::app::Fuse::Node* RootViewport__get_Content(RootViewport* __this);
float RootViewport__get_DefaultDensity(::uStatic* __this);
::app::Uno::Float2 RootViewport__get_PixelSize(RootViewport* __this);
float RootViewport__get_PointDensity_1(RootViewport* __this);
::app::Uno::Float4x4 RootViewport__get_ProjectionTransform(RootViewport* __this);
::app::Uno::Float4x4 RootViewport__get_ProjectionTransformInverse(RootViewport* __this);
::app::Uno::Float2 RootViewport__get_Size(RootViewport* __this);
int RootViewport__get_SubNodeCount(RootViewport* __this);
::app::Uno::Float3 RootViewport__get_ViewOrigin(RootViewport* __this);
::app::Uno::Float4x4 RootViewport__get_ViewProjectionTransform(RootViewport* __this);
::app::Uno::Float4x4 RootViewport__get_ViewProjectionTransformInverse(RootViewport* __this);
::app::Uno::Float2 RootViewport__get_ViewRange(RootViewport* __this);
::app::Uno::Float4x4 RootViewport__get_ViewTransform(RootViewport* __this);
::app::Uno::Float4x4 RootViewport__get_ViewTransformInverse(RootViewport* __this);
::app::Fuse::Node* RootViewport__GetSubNode(RootViewport* __this, int i);
RootViewport* RootViewport__New_1(::uStatic* __this, ::app::Uno::Platform::Window* window, float pointDensity);
::app::Uno::Float2 RootViewport__OnArrangeMarginBox(RootViewport* __this, ::app::Uno::Float2 position, ::app::Uno::Float2 availableSize, int availSet);
void RootViewport__OnGotFocus(RootViewport* __this, ::uObject* sender, ::app::Uno::EventArgs* args);
void RootViewport__OnHitTest(RootViewport* __this, ::app::Fuse::HitTestContext* htc);
void RootViewport__OnLostFocus(RootViewport* __this, ::uObject* sender, ::app::Uno::EventArgs* args);
void RootViewport__OnResized(RootViewport* __this, ::uObject* s, ::uObject* a);
::app::Uno::Geometry::Ray RootViewport__PointToWorldRay(RootViewport* __this, ::app::Uno::Float2 pixelPos);
void RootViewport__set_Content(RootViewport* __this, ::app::Fuse::Node* value);

struct RootViewport : ::app::Fuse::Node
{
    ::uStrong< ::app::Uno::Platform::Window*> Window;
    ::uStrong< ::app::Fuse::Node*> _root;
    ::uStrong< ::uObject*> Frustum;
    ::uStrong< ::app::Fuse::FrustumViewport*> _frustumViewport;
    float _pointDensity;

    void _ObjInit_1(::app::Uno::Platform::Window* window, float pointDensity) { RootViewport___ObjInit_1(this, window, pointDensity); }
    ::app::Fuse::Node* Content() { return RootViewport__get_Content(this); }
    ::app::Uno::Float2 PixelSize();
    float PointDensity_1() { return RootViewport__get_PointDensity_1(this); }
    ::app::Uno::Float4x4 ProjectionTransform();
    ::app::Uno::Float4x4 ProjectionTransformInverse();
    ::app::Uno::Float2 Size();
    ::app::Uno::Float3 ViewOrigin();
    ::app::Uno::Float4x4 ViewProjectionTransform();
    ::app::Uno::Float4x4 ViewProjectionTransformInverse();
    ::app::Uno::Float2 ViewRange();
    ::app::Uno::Float4x4 ViewTransform();
    ::app::Uno::Float4x4 ViewTransformInverse();
    void OnGotFocus(::uObject* sender, ::app::Uno::EventArgs* args) { RootViewport__OnGotFocus(this, sender, args); }
    void OnLostFocus(::uObject* sender, ::app::Uno::EventArgs* args) { RootViewport__OnLostFocus(this, sender, args); }
    void OnResized(::uObject* s, ::uObject* a) { RootViewport__OnResized(this, s, a); }
    ::app::Uno::Geometry::Ray PointToWorldRay(::app::Uno::Float2 pixelPos);
    void Content(::app::Fuse::Node* value) { RootViewport__set_Content(this, value); }
};

}}

#include <app/Uno.Float2.h>
#include <app/Uno.Float3.h>
#include <app/Uno.Float4x4.h>
#include <app/Uno.Geometry.Ray.h>

namespace app {
namespace Fuse {

inline ::app::Uno::Float2 RootViewport::PixelSize() { return RootViewport__get_PixelSize(this); }
inline ::app::Uno::Float4x4 RootViewport::ProjectionTransform() { return RootViewport__get_ProjectionTransform(this); }
inline ::app::Uno::Float4x4 RootViewport::ProjectionTransformInverse() { return RootViewport__get_ProjectionTransformInverse(this); }
inline ::app::Uno::Float2 RootViewport::Size() { return RootViewport__get_Size(this); }
inline ::app::Uno::Float3 RootViewport::ViewOrigin() { return RootViewport__get_ViewOrigin(this); }
inline ::app::Uno::Float4x4 RootViewport::ViewProjectionTransform() { return RootViewport__get_ViewProjectionTransform(this); }
inline ::app::Uno::Float4x4 RootViewport::ViewProjectionTransformInverse() { return RootViewport__get_ViewProjectionTransformInverse(this); }
inline ::app::Uno::Float2 RootViewport::ViewRange() { return RootViewport__get_ViewRange(this); }
inline ::app::Uno::Float4x4 RootViewport::ViewTransform() { return RootViewport__get_ViewTransform(this); }
inline ::app::Uno::Float4x4 RootViewport::ViewTransformInverse() { return RootViewport__get_ViewTransformInverse(this); }
inline ::app::Uno::Geometry::Ray RootViewport::PointToWorldRay(::app::Uno::Float2 pixelPos) { return RootViewport__PointToWorldRay(this, pixelPos); }

}}


#endif
