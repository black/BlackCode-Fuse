// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Entities\0.18.8\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Entities.Component.h>
#include <Fuse.IFrustum.h>
namespace g{namespace Fuse{namespace Entities{struct Entity;}}}
namespace g{namespace Fuse{namespace Entities{struct Frustum;}}}
namespace g{namespace Uno{namespace Geometry{struct Frustum;}}}
namespace g{namespace Uno{struct Float2;}}
namespace g{namespace Uno{struct Float3;}}
namespace g{namespace Uno{struct Float4x4;}}
namespace g{namespace Uno{struct Rect;}}

namespace g{
namespace Fuse{
namespace Entities{

// public sealed class Frustum :632
// {
struct Frustum_type : ::g::Fuse::Entities::Component_type
{
    ::g::Fuse::IFrustum interface0;
};

Frustum_type* Frustum_typeof();
void Frustum__ctor_1_fn(Frustum* __this);
void Frustum__ctor_2_fn(Frustum* __this, float* fovRadians1, float* znear, float* zfar);
void Frustum__get_ExplicitAspect_fn(Frustum* __this, float* __retval);
void Frustum__set_ExplicitAspect_fn(Frustum* __this, float* value);
void Frustum__get_FovDegrees_fn(Frustum* __this, float* __retval);
void Frustum__set_FovDegrees_fn(Frustum* __this, float* value);
void Frustum__get_FovRadians_fn(Frustum* __this, float* __retval);
void Frustum__set_FovRadians_fn(Frustum* __this, float* value);
void Frustum__GetDepthRange_fn(Frustum* __this, uObject* viewport, ::g::Uno::Float2* __retval);
void Frustum__GetFrustumGeometry_fn(Frustum* __this, float* aspect1, ::g::Uno::Geometry::Frustum* __retval);
void Frustum__GetFrustumGeometry1_fn(Frustum* __this, float* aspect1, ::g::Uno::Rect* rect, ::g::Uno::Geometry::Frustum* __retval);
void Frustum__GetProjectionTransform_fn(Frustum* __this, uObject* viewport, ::g::Uno::Float4x4* __retval);
void Frustum__GetProjectionTransformInverse_fn(Frustum* __this, uObject* viewport, ::g::Uno::Float4x4* __retval);
void Frustum__GetViewTransform_fn(Frustum* __this, uObject* viewport, ::g::Uno::Float4x4* __retval);
void Frustum__GetViewTransformInverse_fn(Frustum* __this, uObject* viewport, ::g::Uno::Float4x4* __retval);
void Frustum__GetWorldPosition_fn(Frustum* __this, uObject* viewport, ::g::Uno::Float3* __retval);
void Frustum__get_HasExplicitAspect_fn(Frustum* __this, bool* __retval);
void Frustum__get_InverseView_fn(Frustum* __this, ::g::Uno::Float4x4* __retval);
void Frustum__New1_fn(Frustum** __retval);
void Frustum__New2_fn(float* fovRadians1, float* znear, float* zfar, Frustum** __retval);
void Frustum__OnAdded_fn(Frustum* __this, ::g::Fuse::Entities::Entity* e);
void Frustum__OnRemoved_fn(Frustum* __this, ::g::Fuse::Entities::Entity* e);
void Frustum__Reset_fn(Frustum* __this);
void Frustum__ResetExplicitAspect_fn(Frustum* __this);
void Frustum__get_View_fn(Frustum* __this, ::g::Uno::Float4x4* __retval);
void Frustum__ViewportAspect_fn(Frustum* __this, uObject* viewport, float* __retval);
void Frustum__get_ZFar_fn(Frustum* __this, float* __retval);
void Frustum__set_ZFar_fn(Frustum* __this, float* value);
void Frustum__get_ZNear_fn(Frustum* __this, float* __retval);
void Frustum__set_ZNear_fn(Frustum* __this, float* value);

struct Frustum : ::g::Fuse::Entities::Component
{
    float _aspect;
    bool _hasExplicitAspect;
    float fovRadians;
    float zFar;
    float zNear;

    void ctor_1();
    void ctor_2(float fovRadians1, float znear, float zfar);
    float ExplicitAspect();
    void ExplicitAspect(float value);
    float FovDegrees();
    void FovDegrees(float value);
    float FovRadians();
    void FovRadians(float value);
    ::g::Uno::Float2 GetDepthRange(uObject* viewport);
    ::g::Uno::Geometry::Frustum GetFrustumGeometry(float aspect1);
    ::g::Uno::Geometry::Frustum GetFrustumGeometry1(float aspect1, ::g::Uno::Rect rect);
    ::g::Uno::Float4x4 GetProjectionTransform(uObject* viewport);
    ::g::Uno::Float4x4 GetProjectionTransformInverse(uObject* viewport);
    ::g::Uno::Float4x4 GetViewTransform(uObject* viewport);
    ::g::Uno::Float4x4 GetViewTransformInverse(uObject* viewport);
    ::g::Uno::Float3 GetWorldPosition(uObject* viewport);
    bool HasExplicitAspect();
    ::g::Uno::Float4x4 InverseView();
    void Reset();
    void ResetExplicitAspect();
    ::g::Uno::Float4x4 View();
    float ViewportAspect(uObject* viewport);
    float ZFar();
    void ZFar(float value);
    float ZNear();
    void ZNear(float value);
    static Frustum* New1();
    static Frustum* New2(float fovRadians1, float znear, float zfar);
};
// }

}}} // ::g::Fuse::Entities
