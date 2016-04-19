// This file was generated based on 'C:\ProgramData\Uno\Packages\FuseCore\0.19.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.IViewport.h>
#include <Fuse.Node.h>
namespace g{namespace Fuse{struct FrustumViewport;}}
namespace g{namespace Fuse{struct HitTestContext;}}
namespace g{namespace Fuse{struct RootViewport;}}
namespace g{namespace Uno{namespace Geometry{struct Ray;}}}
namespace g{namespace Uno{namespace Platform{struct Window;}}}
namespace g{namespace Uno{struct EventArgs;}}
namespace g{namespace Uno{struct Float2;}}
namespace g{namespace Uno{struct Float4x4;}}

namespace g{
namespace Fuse{

// public sealed class RootViewport :1747
// {
struct RootViewport_type : ::g::Fuse::Node_type
{
    ::g::Fuse::IViewport interface0;
};

RootViewport_type* RootViewport_typeof();
void RootViewport__ctor_1_fn(RootViewport* __this, ::g::Uno::Platform::Window* window, float* pointDensity);
void RootViewport__get_Content_fn(RootViewport* __this, ::g::Fuse::Node** __retval);
void RootViewport__set_Content_fn(RootViewport* __this, ::g::Fuse::Node* value);
void RootViewport__get_DefaultDensity_fn(float* __retval);
void RootViewport__GetSubNode_fn(RootViewport* __this, int* i, ::g::Fuse::Node** __retval);
void RootViewport__New1_fn(::g::Uno::Platform::Window* window, float* pointDensity, RootViewport** __retval);
void RootViewport__OnArrangeMarginBox_fn(RootViewport* __this, ::g::Uno::Float2* position, ::g::Uno::Float2* availableSize, int* availSet, ::g::Uno::Float2* __retval);
void RootViewport__OnGotFocus_fn(RootViewport* __this, uObject* sender, ::g::Uno::EventArgs* args);
void RootViewport__OnHitTest_fn(RootViewport* __this, ::g::Fuse::HitTestContext* htc);
void RootViewport__OnLostFocus_fn(RootViewport* __this, uObject* sender, ::g::Uno::EventArgs* args);
void RootViewport__OnResized_fn(RootViewport* __this, uObject* s, uObject* a);
void RootViewport__get_PointDensity1_fn(RootViewport* __this, float* __retval);
void RootViewport__PointToWorldRay_fn(RootViewport* __this, ::g::Uno::Float2* pixelPos, ::g::Uno::Geometry::Ray* __retval);
void RootViewport__get_Size_fn(RootViewport* __this, ::g::Uno::Float2* __retval);
void RootViewport__get_SubNodeCount_fn(RootViewport* __this, int* __retval);
void RootViewport__get_ViewProjectionTransform_fn(RootViewport* __this, ::g::Uno::Float4x4* __retval);
void RootViewport__get_ViewProjectionTransformInverse_fn(RootViewport* __this, ::g::Uno::Float4x4* __retval);

struct RootViewport : ::g::Fuse::Node
{
    static float _defaultDensity_;
    static float& _defaultDensity() { return RootViewport_typeof()->Init(), _defaultDensity_; }
    uStrong< ::g::Fuse::FrustumViewport*> _frustumViewport;
    float _pointDensity;
    uStrong< ::g::Fuse::Node*> _root;
    uStrong<uObject*> Frustum;
    uStrong< ::g::Uno::Platform::Window*> Window;

    void ctor_1(::g::Uno::Platform::Window* window, float pointDensity);
    ::g::Fuse::Node* Content();
    void Content(::g::Fuse::Node* value);
    void OnGotFocus(uObject* sender, ::g::Uno::EventArgs* args);
    void OnLostFocus(uObject* sender, ::g::Uno::EventArgs* args);
    void OnResized(uObject* s, uObject* a);
    float PointDensity1();
    ::g::Uno::Geometry::Ray PointToWorldRay(::g::Uno::Float2 pixelPos);
    ::g::Uno::Float2 Size();
    ::g::Uno::Float4x4 ViewProjectionTransform();
    ::g::Uno::Float4x4 ViewProjectionTransformInverse();
    static RootViewport* New1(::g::Uno::Platform::Window* window, float pointDensity);
    static float DefaultDensity();
};
// }

}} // ::g::Fuse
