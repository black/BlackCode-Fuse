// This file was generated based on 'C:\ProgramData\Uno\Packages\FuseCore\0.11.3\Internal\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_FUSE_INTERNAL_FRUSTUM_MATRIX_H__
#define __APP_FUSE_INTERNAL_FRUSTUM_MATRIX_H__

#include <Uno.h>
namespace app { namespace Uno { struct Float2; } }
namespace app { namespace Uno { struct Float4x4; } }

namespace app {
namespace Fuse {
namespace Internal {

struct FrustumMatrix__uType : ::uClassType
{
};

FrustumMatrix__uType* FrustumMatrix__typeof();

::app::Uno::Float4x4 FrustumMatrix__OrthoLH(::uStatic* __this, float width, float height, float near, float far);
::app::Uno::Float4x4 FrustumMatrix__OrthoLHInverse(::uStatic* __this, float width, float height, float near, float far);
::app::Uno::Float4x4 FrustumMatrix__OrthoRH(::uStatic* __this, float width, float height, float zNear, float zFar);
::app::Uno::Float4x4 FrustumMatrix__OrthoRHInverse(::uStatic* __this, float width, float height, float zNear, float zFar);
::app::Uno::Float4x4 FrustumMatrix__PerspectiveProjection(::uStatic* __this, ::app::Uno::Float2 viewSize, float znear, float zfar, float distance);
::app::Uno::Float4x4 FrustumMatrix__PerspectiveProjectionInverse(::uStatic* __this, ::app::Uno::Float2 viewSize, float znear, float zfar, float distance);
::app::Uno::Float4x4 FrustumMatrix__PerspectiveView(::uStatic* __this, ::app::Uno::Float2 viewSize, float distance, ::app::Uno::Float2 relOrigin);
::app::Uno::Float4x4 FrustumMatrix__PerspectiveViewInverse(::uStatic* __this, ::app::Uno::Float2 viewSize, float distance, ::app::Uno::Float2 relOrigin);

}}}


#endif
