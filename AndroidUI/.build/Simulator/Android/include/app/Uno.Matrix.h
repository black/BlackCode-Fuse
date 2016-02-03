// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_UNO_MATRIX_H__
#define __APP_UNO_MATRIX_H__

#include <Uno.h>
namespace app { namespace Uno { struct Float2; } }
namespace app { namespace Uno { struct Float2x2; } }
namespace app { namespace Uno { struct Float3; } }
namespace app { namespace Uno { struct Float3x3; } }
namespace app { namespace Uno { struct Float4; } }
namespace app { namespace Uno { struct Float4x4; } }

namespace app {
namespace Uno {

struct Matrix__uType : ::uClassType
{
};

Matrix__uType* Matrix__typeof();

::app::Uno::Float4x4 Matrix__Compose(::uStatic* __this, ::app::Uno::Float3 scale, ::app::Uno::Float4 rotationQuaternion, ::app::Uno::Float3 translation);
bool Matrix__Decompose(::uStatic* __this, ::app::Uno::Float4x4 value, ::app::Uno::Float3* scale, ::app::Uno::Float4* rotationQuaternion, ::app::Uno::Float3* translation);
float Matrix__Determinant(::uStatic* __this, ::app::Uno::Float2x2 m);
float Matrix__Determinant_1(::uStatic* __this, ::app::Uno::Float3x3 m);
float Matrix__Determinant_2(::uStatic* __this, ::app::Uno::Float4x4 m);
::app::Uno::Float4 Matrix__GetRotationQuaternion(::uStatic* __this, ::app::Uno::Float4x4 value);
::app::Uno::Float3 Matrix__GetScaling(::uStatic* __this, ::app::Uno::Float4x4 value);
::app::Uno::Float3 Matrix__GetTranslation(::uStatic* __this, ::app::Uno::Float4x4 value);
::app::Uno::Float2x2 Matrix__Invert(::uStatic* __this, ::app::Uno::Float2x2 value);
::app::Uno::Float3x3 Matrix__Invert_1(::uStatic* __this, ::app::Uno::Float3x3 value);
::app::Uno::Float4x4 Matrix__Invert_2(::uStatic* __this, ::app::Uno::Float4x4 value);
::app::Uno::Float4x4 Matrix__Look(::uStatic* __this, ::app::Uno::Float3 eye, ::app::Uno::Float3 xaxis, ::app::Uno::Float3 yaxis, ::app::Uno::Float3 zaxis);
::app::Uno::Float4x4 Matrix__LookAtLH(::uStatic* __this, ::app::Uno::Float3 eye, ::app::Uno::Float3 target, ::app::Uno::Float3 up);
::app::Uno::Float4x4 Matrix__LookAtRH(::uStatic* __this, ::app::Uno::Float3 eye, ::app::Uno::Float3 target, ::app::Uno::Float3 up);
::app::Uno::Float2x2 Matrix__Mul(::uStatic* __this, ::app::Uno::Float2x2 left, ::app::Uno::Float2x2 right);
::app::Uno::Float2x2 Matrix__Mul_1(::uStatic* __this, ::app::Uno::Float2x2 a, ::app::Uno::Float2x2 b, ::app::Uno::Float2x2 c);
::app::Uno::Float4x4 Matrix__Mul_10(::uStatic* __this, ::app::Uno::Float4x4 a, ::app::Uno::Float4x4 b, ::app::Uno::Float4x4 c, ::app::Uno::Float4x4 d);
::app::Uno::Float4x4 Matrix__Mul_11(::uStatic* __this, ::app::Uno::Float4x4 a, ::app::Uno::Float4x4 b, ::app::Uno::Float4x4 c, ::app::Uno::Float4x4 d, ::app::Uno::Float4x4 e);
::app::Uno::Float2x2 Matrix__Mul_2(::uStatic* __this, ::app::Uno::Float2x2 a, ::app::Uno::Float2x2 b, ::app::Uno::Float2x2 c, ::app::Uno::Float2x2 d);
::app::Uno::Float2x2 Matrix__Mul_3(::uStatic* __this, ::app::Uno::Float2x2 a, ::app::Uno::Float2x2 b, ::app::Uno::Float2x2 c, ::app::Uno::Float2x2 d, ::app::Uno::Float2x2 e);
::app::Uno::Float3x3 Matrix__Mul_4(::uStatic* __this, ::app::Uno::Float3x3 left, ::app::Uno::Float3x3 right);
::app::Uno::Float3x3 Matrix__Mul_5(::uStatic* __this, ::app::Uno::Float3x3 a, ::app::Uno::Float3x3 b, ::app::Uno::Float3x3 c);
::app::Uno::Float3x3 Matrix__Mul_6(::uStatic* __this, ::app::Uno::Float3x3 a, ::app::Uno::Float3x3 b, ::app::Uno::Float3x3 c, ::app::Uno::Float3x3 d);
::app::Uno::Float3x3 Matrix__Mul_7(::uStatic* __this, ::app::Uno::Float3x3 a, ::app::Uno::Float3x3 b, ::app::Uno::Float3x3 c, ::app::Uno::Float3x3 d, ::app::Uno::Float3x3 e);
::app::Uno::Float4x4 Matrix__Mul_8(::uStatic* __this, ::app::Uno::Float4x4 left, ::app::Uno::Float4x4 right);
::app::Uno::Float4x4 Matrix__Mul_9(::uStatic* __this, ::app::Uno::Float4x4 a, ::app::Uno::Float4x4 b, ::app::Uno::Float4x4 c);
::app::Uno::Float4x4 Matrix__OrthoLH(::uStatic* __this, float width, float height, float zNear, float zFar);
::app::Uno::Float4x4 Matrix__OrthoRH(::uStatic* __this, float width, float height, float zNear, float zFar);
::app::Uno::Float4x4 Matrix__PerspectiveLH(::uStatic* __this, float fovRadians, float aspect, float znear, float zfar);
::app::Uno::Float4x4 Matrix__PerspectiveRH(::uStatic* __this, float fovRadians, float aspect, float znear, float zfar);
::app::Uno::Float4x4 Matrix__RotationAxis(::uStatic* __this, ::app::Uno::Float3 axisNormalized, float angleRadians);
::app::Uno::Float4x4 Matrix__RotationQuaternion(::uStatic* __this, ::app::Uno::Float4 rotation);
::app::Uno::Float4x4 Matrix__RotationX(::uStatic* __this, float angleRadians);
::app::Uno::Float4x4 Matrix__RotationY(::uStatic* __this, float angleRadians);
::app::Uno::Float4x4 Matrix__RotationZ(::uStatic* __this, float angleRadians);
::app::Uno::Float4x4 Matrix__Scaling(::uStatic* __this, float scale);
::app::Uno::Float4x4 Matrix__Scaling_1(::uStatic* __this, float x, float y, float z);
::app::Uno::Float4x4 Matrix__Scaling_2(::uStatic* __this, ::app::Uno::Float3 scale);
::app::Uno::Float4x4 Matrix__Shear(::uStatic* __this, ::app::Uno::Float2 angle);
::app::Uno::Float4x4 Matrix__Translation(::uStatic* __this, float x, float y, float z);
::app::Uno::Float4x4 Matrix__Translation_1(::uStatic* __this, ::app::Uno::Float3 offset);
::app::Uno::Float2x2 Matrix__Transpose(::uStatic* __this, ::app::Uno::Float2x2 m);
::app::Uno::Float3x3 Matrix__Transpose_1(::uStatic* __this, ::app::Uno::Float3x3 m);
::app::Uno::Float4x4 Matrix__Transpose_2(::uStatic* __this, ::app::Uno::Float4x4 m);
::app::Uno::Float4x4 Matrix__UnsignedZToClipSpace(::uStatic* __this, ::app::Uno::Float4x4 m);

}}


#endif
