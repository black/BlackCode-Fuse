// This file was generated based on 'C:\ProgramData\Uno\Packages\FuseCore\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_FUSE_PERSPECTIVE_FRUSTUM_H__
#define __APP_FUSE_PERSPECTIVE_FRUSTUM_H__

#include <app/Fuse.IFrustum.h>
#include <app/Uno.Object.h>
#include <Uno.h>
namespace app { namespace Uno { struct Float2; } }
namespace app { namespace Uno { struct Float3; } }
namespace app { namespace Uno { struct Float4x4; } }

namespace app {
namespace Fuse {

struct PerspectiveFrustum;

struct PerspectiveFrustum__uType : ::uClassType
{
    ::app::Fuse::IFrustum __interface_0;
};

PerspectiveFrustum__uType* PerspectiveFrustum__typeof();

void PerspectiveFrustum___ObjInit(PerspectiveFrustum* __this);
float PerspectiveFrustum__get_Distance(PerspectiveFrustum* __this);
::app::Uno::Float2 PerspectiveFrustum__GetDepthRange(PerspectiveFrustum* __this, ::uObject* viewport);
::app::Uno::Float4x4 PerspectiveFrustum__GetProjectionTransform(PerspectiveFrustum* __this, ::uObject* viewport);
::app::Uno::Float4x4 PerspectiveFrustum__GetProjectionTransformInverse(PerspectiveFrustum* __this, ::uObject* viewport);
::app::Uno::Float4x4 PerspectiveFrustum__GetViewTransform(PerspectiveFrustum* __this, ::uObject* viewport);
::app::Uno::Float4x4 PerspectiveFrustum__GetViewTransformInverse(PerspectiveFrustum* __this, ::uObject* viewport);
::app::Uno::Float3 PerspectiveFrustum__GetWorldPosition(PerspectiveFrustum* __this, ::uObject* viewport);
PerspectiveFrustum* PerspectiveFrustum__New_1(::uStatic* __this);
void PerspectiveFrustum__set_Distance(PerspectiveFrustum* __this, float value);

struct PerspectiveFrustum : ::uObject
{
    float _Distance;

    void _ObjInit() { PerspectiveFrustum___ObjInit(this); }
    float Distance() { return PerspectiveFrustum__get_Distance(this); }
    ::app::Uno::Float2 GetDepthRange(::uObject* viewport);
    ::app::Uno::Float4x4 GetProjectionTransform(::uObject* viewport);
    ::app::Uno::Float4x4 GetProjectionTransformInverse(::uObject* viewport);
    ::app::Uno::Float4x4 GetViewTransform(::uObject* viewport);
    ::app::Uno::Float4x4 GetViewTransformInverse(::uObject* viewport);
    ::app::Uno::Float3 GetWorldPosition(::uObject* viewport);
    void Distance(float value) { PerspectiveFrustum__set_Distance(this, value); }
};

}}

#include <app/Uno.Float2.h>
#include <app/Uno.Float3.h>
#include <app/Uno.Float4x4.h>

namespace app {
namespace Fuse {

inline ::app::Uno::Float2 PerspectiveFrustum::GetDepthRange(::uObject* viewport) { return PerspectiveFrustum__GetDepthRange(this, viewport); }
inline ::app::Uno::Float4x4 PerspectiveFrustum::GetProjectionTransform(::uObject* viewport) { return PerspectiveFrustum__GetProjectionTransform(this, viewport); }
inline ::app::Uno::Float4x4 PerspectiveFrustum::GetProjectionTransformInverse(::uObject* viewport) { return PerspectiveFrustum__GetProjectionTransformInverse(this, viewport); }
inline ::app::Uno::Float4x4 PerspectiveFrustum::GetViewTransform(::uObject* viewport) { return PerspectiveFrustum__GetViewTransform(this, viewport); }
inline ::app::Uno::Float4x4 PerspectiveFrustum::GetViewTransformInverse(::uObject* viewport) { return PerspectiveFrustum__GetViewTransformInverse(this, viewport); }
inline ::app::Uno::Float3 PerspectiveFrustum::GetWorldPosition(::uObject* viewport) { return PerspectiveFrustum__GetWorldPosition(this, viewport); }

}}


#endif
