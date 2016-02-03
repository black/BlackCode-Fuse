// This file was generated based on 'C:\ProgramData\Uno\Packages\FuseCore\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_FUSE_ORTHOGRAPHIC_FRUSTUM_H__
#define __APP_FUSE_ORTHOGRAPHIC_FRUSTUM_H__

#include <app/Fuse.IFrustum.h>
#include <app/Uno.Float2.h>
#include <app/Uno.Float4x4.h>
#include <app/Uno.Object.h>
#include <Uno.h>
namespace app { namespace Uno { struct Float3; } }

namespace app {
namespace Fuse {

struct OrthographicFrustum;

struct OrthographicFrustum__uType : ::uClassType
{
    ::app::Fuse::IFrustum __interface_0;
};

OrthographicFrustum__uType* OrthographicFrustum__typeof();

void OrthographicFrustum___ObjInit(OrthographicFrustum* __this);
::app::Uno::Float4x4 OrthographicFrustum__get_LocalFromWorld(OrthographicFrustum* __this);
::app::Uno::Float2 OrthographicFrustum__get_Origin(OrthographicFrustum* __this);
::app::Uno::Float2 OrthographicFrustum__get_Size(OrthographicFrustum* __this);
::app::Uno::Float2 OrthographicFrustum__GetDepthRange(OrthographicFrustum* __this, ::uObject* viewport);
::app::Uno::Float4x4 OrthographicFrustum__GetProjectionTransform(OrthographicFrustum* __this, ::uObject* viewport);
::app::Uno::Float4x4 OrthographicFrustum__GetProjectionTransformInverse(OrthographicFrustum* __this, ::uObject* viewport);
::app::Uno::Float4x4 OrthographicFrustum__GetViewTransform(OrthographicFrustum* __this, ::uObject* viewport);
::app::Uno::Float4x4 OrthographicFrustum__GetViewTransformInverse(OrthographicFrustum* __this, ::uObject* viewport);
::app::Uno::Float3 OrthographicFrustum__GetWorldPosition(OrthographicFrustum* __this, ::uObject* viewport);
::app::Uno::Float4x4 OrthographicFrustum__MatrixProjection(OrthographicFrustum* __this, ::app::Uno::Float2 viewSize);
::app::Uno::Float4x4 OrthographicFrustum__MatrixProjectionInverse(OrthographicFrustum* __this, ::app::Uno::Float2 viewSize);
::app::Uno::Float4x4 OrthographicFrustum__MatrixView(OrthographicFrustum* __this, ::app::Uno::Float2 origin, ::app::Uno::Float2 viewSize);
::app::Uno::Float4x4 OrthographicFrustum__MatrixViewInverse(OrthographicFrustum* __this, ::app::Uno::Float2 origin, ::app::Uno::Float2 viewSize);
OrthographicFrustum* OrthographicFrustum__New_1(::uStatic* __this);
void OrthographicFrustum__set_LocalFromWorld(OrthographicFrustum* __this, ::app::Uno::Float4x4 value);
void OrthographicFrustum__set_Origin(OrthographicFrustum* __this, ::app::Uno::Float2 value);
void OrthographicFrustum__set_Size(OrthographicFrustum* __this, ::app::Uno::Float2 value);

struct OrthographicFrustum : ::uObject
{
    bool _hasOrigin;
    ::app::Uno::Float2 _origin;
    bool _hasSize;
    ::app::Uno::Float2 _size;
    ::app::Uno::Float4x4 _localFromWorld;
    bool _hasLocalFromWorld;

    void _ObjInit() { OrthographicFrustum___ObjInit(this); }
    ::app::Uno::Float4x4 LocalFromWorld();
    ::app::Uno::Float2 Origin();
    ::app::Uno::Float2 Size();
    ::app::Uno::Float2 GetDepthRange(::uObject* viewport);
    ::app::Uno::Float4x4 GetProjectionTransform(::uObject* viewport);
    ::app::Uno::Float4x4 GetProjectionTransformInverse(::uObject* viewport);
    ::app::Uno::Float4x4 GetViewTransform(::uObject* viewport);
    ::app::Uno::Float4x4 GetViewTransformInverse(::uObject* viewport);
    ::app::Uno::Float3 GetWorldPosition(::uObject* viewport);
    ::app::Uno::Float4x4 MatrixProjection(::app::Uno::Float2 viewSize);
    ::app::Uno::Float4x4 MatrixProjectionInverse(::app::Uno::Float2 viewSize);
    ::app::Uno::Float4x4 MatrixView(::app::Uno::Float2 origin, ::app::Uno::Float2 viewSize);
    ::app::Uno::Float4x4 MatrixViewInverse(::app::Uno::Float2 origin, ::app::Uno::Float2 viewSize);
    void LocalFromWorld(::app::Uno::Float4x4 value);
    void Origin(::app::Uno::Float2 value);
    void Size(::app::Uno::Float2 value);
};

}}

#include <app/Uno.Float3.h>

namespace app {
namespace Fuse {

inline ::app::Uno::Float4x4 OrthographicFrustum::LocalFromWorld() { return OrthographicFrustum__get_LocalFromWorld(this); }
inline ::app::Uno::Float2 OrthographicFrustum::Origin() { return OrthographicFrustum__get_Origin(this); }
inline ::app::Uno::Float2 OrthographicFrustum::Size() { return OrthographicFrustum__get_Size(this); }
inline ::app::Uno::Float2 OrthographicFrustum::GetDepthRange(::uObject* viewport) { return OrthographicFrustum__GetDepthRange(this, viewport); }
inline ::app::Uno::Float4x4 OrthographicFrustum::GetProjectionTransform(::uObject* viewport) { return OrthographicFrustum__GetProjectionTransform(this, viewport); }
inline ::app::Uno::Float4x4 OrthographicFrustum::GetProjectionTransformInverse(::uObject* viewport) { return OrthographicFrustum__GetProjectionTransformInverse(this, viewport); }
inline ::app::Uno::Float4x4 OrthographicFrustum::GetViewTransform(::uObject* viewport) { return OrthographicFrustum__GetViewTransform(this, viewport); }
inline ::app::Uno::Float4x4 OrthographicFrustum::GetViewTransformInverse(::uObject* viewport) { return OrthographicFrustum__GetViewTransformInverse(this, viewport); }
inline ::app::Uno::Float3 OrthographicFrustum::GetWorldPosition(::uObject* viewport) { return OrthographicFrustum__GetWorldPosition(this, viewport); }
inline ::app::Uno::Float4x4 OrthographicFrustum::MatrixProjection(::app::Uno::Float2 viewSize) { return OrthographicFrustum__MatrixProjection(this, viewSize); }
inline ::app::Uno::Float4x4 OrthographicFrustum::MatrixProjectionInverse(::app::Uno::Float2 viewSize) { return OrthographicFrustum__MatrixProjectionInverse(this, viewSize); }
inline ::app::Uno::Float4x4 OrthographicFrustum::MatrixView(::app::Uno::Float2 origin, ::app::Uno::Float2 viewSize) { return OrthographicFrustum__MatrixView(this, origin, viewSize); }
inline ::app::Uno::Float4x4 OrthographicFrustum::MatrixViewInverse(::app::Uno::Float2 origin, ::app::Uno::Float2 viewSize) { return OrthographicFrustum__MatrixViewInverse(this, origin, viewSize); }
inline void OrthographicFrustum::LocalFromWorld(::app::Uno::Float4x4 value) { OrthographicFrustum__set_LocalFromWorld(this, value); }
inline void OrthographicFrustum::Origin(::app::Uno::Float2 value) { OrthographicFrustum__set_Origin(this, value); }
inline void OrthographicFrustum::Size(::app::Uno::Float2 value) { OrthographicFrustum__set_Size(this, value); }

}}


#endif
