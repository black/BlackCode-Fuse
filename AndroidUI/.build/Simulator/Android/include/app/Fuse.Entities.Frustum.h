// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Entities\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_FUSE_ENTITIES_FRUSTUM_H__
#define __APP_FUSE_ENTITIES_FRUSTUM_H__

#include <app/Fuse.Entities.Component.h>
#include <app/Fuse.IFrustum.h>
#include <Uno.h>
namespace app { namespace Fuse { namespace Entities { struct Entity; } } }
namespace app { namespace Uno { namespace Geometry { struct Frustum; } } }
namespace app { namespace Uno { struct Float2; } }
namespace app { namespace Uno { struct Float3; } }
namespace app { namespace Uno { struct Float4x4; } }
namespace app { namespace Uno { struct Rect; } }

namespace app {
namespace Fuse {
namespace Entities {

struct Frustum;

struct Frustum__uType : ::app::Fuse::Entities::Component__uType
{
    ::app::Fuse::IFrustum __interface_0;
};

Frustum__uType* Frustum__typeof();

void Frustum___ObjInit_1(Frustum* __this);
void Frustum___ObjInit_2(Frustum* __this, float fovRadians, float znear, float zfar);
float Frustum__get_ExplicitAspect(Frustum* __this);
float Frustum__get_FovDegrees(Frustum* __this);
float Frustum__get_FovRadians(Frustum* __this);
bool Frustum__get_HasExplicitAspect(Frustum* __this);
::app::Uno::Float4x4 Frustum__get_InverseView(Frustum* __this);
::app::Uno::Float4x4 Frustum__get_View(Frustum* __this);
float Frustum__get_ZFar(Frustum* __this);
float Frustum__get_ZNear(Frustum* __this);
::app::Uno::Float2 Frustum__GetDepthRange(Frustum* __this, ::uObject* viewport);
::app::Uno::Geometry::Frustum Frustum__GetFrustumGeometry(Frustum* __this, float aspect);
::app::Uno::Geometry::Frustum Frustum__GetFrustumGeometry_1(Frustum* __this, float aspect, ::app::Uno::Rect rect);
::app::Uno::Float4x4 Frustum__GetProjectionTransform(Frustum* __this, ::uObject* viewport);
::app::Uno::Float4x4 Frustum__GetProjectionTransformInverse(Frustum* __this, ::uObject* viewport);
::app::Uno::Float4x4 Frustum__GetViewTransform(Frustum* __this, ::uObject* viewport);
::app::Uno::Float4x4 Frustum__GetViewTransformInverse(Frustum* __this, ::uObject* viewport);
::app::Uno::Float3 Frustum__GetWorldPosition(Frustum* __this, ::uObject* viewport);
Frustum* Frustum__New_1(::uStatic* __this);
Frustum* Frustum__New_2(::uStatic* __this, float fovRadians, float znear, float zfar);
void Frustum__OnAdded(Frustum* __this, ::app::Fuse::Entities::Entity* e);
void Frustum__OnRemoved(Frustum* __this, ::app::Fuse::Entities::Entity* e);
void Frustum__Reset(Frustum* __this);
void Frustum__ResetExplicitAspect(Frustum* __this);
void Frustum__set_ExplicitAspect(Frustum* __this, float value);
void Frustum__set_FovDegrees(Frustum* __this, float value);
void Frustum__set_FovRadians(Frustum* __this, float value);
void Frustum__set_ZFar(Frustum* __this, float value);
void Frustum__set_ZNear(Frustum* __this, float value);
float Frustum__ViewportAspect(Frustum* __this, ::uObject* viewport);

struct Frustum : ::app::Fuse::Entities::Component
{
    float fovRadians;
    float zNear;
    float zFar;
    bool _hasExplicitAspect;
    float _aspect;

    void _ObjInit_1() { Frustum___ObjInit_1(this); }
    void _ObjInit_2(float fovRadians, float znear, float zfar) { Frustum___ObjInit_2(this, fovRadians, znear, zfar); }
    float ExplicitAspect() { return Frustum__get_ExplicitAspect(this); }
    float FovDegrees() { return Frustum__get_FovDegrees(this); }
    float FovRadians() { return Frustum__get_FovRadians(this); }
    bool HasExplicitAspect() { return Frustum__get_HasExplicitAspect(this); }
    ::app::Uno::Float4x4 InverseView();
    ::app::Uno::Float4x4 View();
    float ZFar() { return Frustum__get_ZFar(this); }
    float ZNear() { return Frustum__get_ZNear(this); }
    ::app::Uno::Float2 GetDepthRange(::uObject* viewport);
    ::app::Uno::Geometry::Frustum GetFrustumGeometry(float aspect);
    ::app::Uno::Geometry::Frustum GetFrustumGeometry_1(float aspect, ::app::Uno::Rect rect);
    ::app::Uno::Float4x4 GetProjectionTransform(::uObject* viewport);
    ::app::Uno::Float4x4 GetProjectionTransformInverse(::uObject* viewport);
    ::app::Uno::Float4x4 GetViewTransform(::uObject* viewport);
    ::app::Uno::Float4x4 GetViewTransformInverse(::uObject* viewport);
    ::app::Uno::Float3 GetWorldPosition(::uObject* viewport);
    void Reset() { Frustum__Reset(this); }
    void ResetExplicitAspect() { Frustum__ResetExplicitAspect(this); }
    void ExplicitAspect(float value) { Frustum__set_ExplicitAspect(this, value); }
    void FovDegrees(float value) { Frustum__set_FovDegrees(this, value); }
    void FovRadians(float value) { Frustum__set_FovRadians(this, value); }
    void ZFar(float value) { Frustum__set_ZFar(this, value); }
    void ZNear(float value) { Frustum__set_ZNear(this, value); }
    float ViewportAspect(::uObject* viewport) { return Frustum__ViewportAspect(this, viewport); }
};

}}}

#include <app/Uno.Float2.h>
#include <app/Uno.Float3.h>
#include <app/Uno.Float4x4.h>
#include <app/Uno.Geometry.Frustum.h>
#include <app/Uno.Rect.h>

namespace app {
namespace Fuse {
namespace Entities {

inline ::app::Uno::Float4x4 Frustum::InverseView() { return Frustum__get_InverseView(this); }
inline ::app::Uno::Float4x4 Frustum::View() { return Frustum__get_View(this); }
inline ::app::Uno::Float2 Frustum::GetDepthRange(::uObject* viewport) { return Frustum__GetDepthRange(this, viewport); }
inline ::app::Uno::Geometry::Frustum Frustum::GetFrustumGeometry(float aspect) { return Frustum__GetFrustumGeometry(this, aspect); }
inline ::app::Uno::Geometry::Frustum Frustum::GetFrustumGeometry_1(float aspect, ::app::Uno::Rect rect) { return Frustum__GetFrustumGeometry_1(this, aspect, rect); }
inline ::app::Uno::Float4x4 Frustum::GetProjectionTransform(::uObject* viewport) { return Frustum__GetProjectionTransform(this, viewport); }
inline ::app::Uno::Float4x4 Frustum::GetProjectionTransformInverse(::uObject* viewport) { return Frustum__GetProjectionTransformInverse(this, viewport); }
inline ::app::Uno::Float4x4 Frustum::GetViewTransform(::uObject* viewport) { return Frustum__GetViewTransform(this, viewport); }
inline ::app::Uno::Float4x4 Frustum::GetViewTransformInverse(::uObject* viewport) { return Frustum__GetViewTransformInverse(this, viewport); }
inline ::app::Uno::Float3 Frustum::GetWorldPosition(::uObject* viewport) { return Frustum__GetWorldPosition(this, viewport); }

}}}


#endif
