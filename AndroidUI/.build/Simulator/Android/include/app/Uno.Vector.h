// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_UNO_VECTOR_H__
#define __APP_UNO_VECTOR_H__

#include <Uno.h>
namespace app { namespace Uno { struct Float2; } }
namespace app { namespace Uno { struct Float2x2; } }
namespace app { namespace Uno { struct Float3; } }
namespace app { namespace Uno { struct Float3x3; } }
namespace app { namespace Uno { struct Float4; } }
namespace app { namespace Uno { struct Float4x4; } }

namespace app {
namespace Uno {

struct Vector__uType : ::uClassType
{
};

Vector__uType* Vector__typeof();

::app::Uno::Float3 Vector__Cross(::uStatic* __this, ::app::Uno::Float3 left, ::app::Uno::Float3 right);
float Vector__Distance(::uStatic* __this, ::app::Uno::Float2 p0, ::app::Uno::Float2 p1);
float Vector__Distance_1(::uStatic* __this, ::app::Uno::Float3 p0, ::app::Uno::Float3 p1);
float Vector__Distance_2(::uStatic* __this, ::app::Uno::Float4 p0, ::app::Uno::Float4 p1);
float Vector__Dot(::uStatic* __this, ::app::Uno::Float2 a, ::app::Uno::Float2 b);
float Vector__Dot_1(::uStatic* __this, ::app::Uno::Float3 a, ::app::Uno::Float3 b);
float Vector__Dot_2(::uStatic* __this, ::app::Uno::Float4 a, ::app::Uno::Float4 b);
float Vector__Length(::uStatic* __this, ::app::Uno::Float2 v);
float Vector__Length_1(::uStatic* __this, ::app::Uno::Float3 v);
float Vector__Length_2(::uStatic* __this, ::app::Uno::Float4 v);
float Vector__LengthSquared(::uStatic* __this, ::app::Uno::Float2 v);
float Vector__LengthSquared_1(::uStatic* __this, ::app::Uno::Float3 v);
float Vector__LengthSquared_2(::uStatic* __this, ::app::Uno::Float4 v);
::app::Uno::Float2 Vector__Normalize(::uStatic* __this, ::app::Uno::Float2 v);
::app::Uno::Float3 Vector__Normalize_1(::uStatic* __this, ::app::Uno::Float3 v);
::app::Uno::Float4 Vector__Normalize_2(::uStatic* __this, ::app::Uno::Float4 v);
void Vector__OrthoNormalize(::uStatic* __this, ::app::Uno::Float2* orthonormalTo, ::app::Uno::Float2* v);
void Vector__OrthoNormalize_1(::uStatic* __this, ::app::Uno::Float3* orthonormalTo, ::app::Uno::Float3* v);
void Vector__OrthoNormalize_2(::uStatic* __this, ::app::Uno::Float4* orthonormalTo, ::app::Uno::Float4* v);
::app::Uno::Float2 Vector__Project(::uStatic* __this, ::app::Uno::Float2 v, ::app::Uno::Float2 projectOn);
::app::Uno::Float3 Vector__Project_1(::uStatic* __this, ::app::Uno::Float3 v, ::app::Uno::Float3 projectOn);
::app::Uno::Float4 Vector__Project_2(::uStatic* __this, ::app::Uno::Float4 v, ::app::Uno::Float4 projectOn);
::app::Uno::Float2 Vector__Reflect(::uStatic* __this, ::app::Uno::Float2 vector, ::app::Uno::Float2 normal);
::app::Uno::Float3 Vector__Reflect_1(::uStatic* __this, ::app::Uno::Float3 vector, ::app::Uno::Float3 normal);
::app::Uno::Float4 Vector__Reflect_2(::uStatic* __this, ::app::Uno::Float4 vector, ::app::Uno::Float4 normal);
::app::Uno::Float2 Vector__Refract(::uStatic* __this, ::app::Uno::Float2 vector, ::app::Uno::Float2 normal, float eta);
::app::Uno::Float3 Vector__Refract_1(::uStatic* __this, ::app::Uno::Float3 vector, ::app::Uno::Float3 normal, float eta);
::app::Uno::Float4 Vector__Refract_2(::uStatic* __this, ::app::Uno::Float4 vector, ::app::Uno::Float4 normal, float eta);
::app::Uno::Float2 Vector__Rotate(::uStatic* __this, ::app::Uno::Float2 v, float angleRadians);
::app::Uno::Float2 Vector__Transform(::uStatic* __this, ::app::Uno::Float2 vector, ::app::Uno::Float2x2 matrix);
::app::Uno::Float4 Vector__Transform_1(::uStatic* __this, ::app::Uno::Float2 vector, ::app::Uno::Float4x4 matrix);
::app::Uno::Float3 Vector__Transform_2(::uStatic* __this, ::app::Uno::Float3 vector, ::app::Uno::Float3x3 matrix);
::app::Uno::Float3 Vector__Transform_3(::uStatic* __this, ::app::Uno::Float3 vector, ::app::Uno::Float4 rotationQuaternion);
::app::Uno::Float4 Vector__Transform_4(::uStatic* __this, ::app::Uno::Float3 vector, ::app::Uno::Float4x4 matrix);
::app::Uno::Float4 Vector__Transform_5(::uStatic* __this, ::app::Uno::Float4 vector, ::app::Uno::Float4x4 matrix);
::app::Uno::Float3 Vector__TransformAffine(::uStatic* __this, ::app::Uno::Float3 vector, ::app::Uno::Float4x4 matrix);
::app::Uno::Float2 Vector__TransformCoordinate(::uStatic* __this, ::app::Uno::Float2 vector, ::app::Uno::Float4x4 matrix);
::app::Uno::Float3 Vector__TransformCoordinate_1(::uStatic* __this, ::app::Uno::Float3 vector, ::app::Uno::Float4x4 matrix);
::app::Uno::Float2 Vector__TransformNormal(::uStatic* __this, ::app::Uno::Float2 vector, ::app::Uno::Float4x4 matrix);
::app::Uno::Float3 Vector__TransformNormal_1(::uStatic* __this, ::app::Uno::Float3 vector, ::app::Uno::Float4x4 matrix);

}}


#endif
