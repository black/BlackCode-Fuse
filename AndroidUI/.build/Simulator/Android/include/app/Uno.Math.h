// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_UNO_MATH_H__
#define __APP_UNO_MATH_H__

#include <Uno.h>
namespace app { namespace Uno { struct Float2; } }
namespace app { namespace Uno { struct Float3; } }
namespace app { namespace Uno { struct Float4; } }
namespace app { namespace Uno { struct Int2; } }
namespace app { namespace Uno { struct Int3; } }
namespace app { namespace Uno { struct Int4; } }

namespace app {
namespace Uno {

struct Math__uType : ::uClassType
{
};

Math__uType* Math__typeof();

double Math__Abs(::uStatic* __this, double x);
float Math__Abs_1(::uStatic* __this, float x);
::app::Uno::Float2 Math__Abs_2(::uStatic* __this, ::app::Uno::Float2 a);
::app::Uno::Float3 Math__Abs_3(::uStatic* __this, ::app::Uno::Float3 a);
::app::Uno::Float4 Math__Abs_4(::uStatic* __this, ::app::Uno::Float4 a);
int Math__Abs_5(::uStatic* __this, int x);
::app::Uno::Int2 Math__Abs_6(::uStatic* __this, ::app::Uno::Int2 a);
::app::Uno::Int3 Math__Abs_7(::uStatic* __this, ::app::Uno::Int3 a);
::app::Uno::Int4 Math__Abs_8(::uStatic* __this, ::app::Uno::Int4 a);
double Math__Acos(::uStatic* __this, double radians_);
float Math__Acos_1(::uStatic* __this, float radians_);
::app::Uno::Float2 Math__Acos_2(::uStatic* __this, ::app::Uno::Float2 radians);
::app::Uno::Float3 Math__Acos_3(::uStatic* __this, ::app::Uno::Float3 radians);
::app::Uno::Float4 Math__Acos_4(::uStatic* __this, ::app::Uno::Float4 radians);
double Math__Asin(::uStatic* __this, double radians_);
float Math__Asin_1(::uStatic* __this, float radians_);
::app::Uno::Float2 Math__Asin_2(::uStatic* __this, ::app::Uno::Float2 radians);
::app::Uno::Float3 Math__Asin_3(::uStatic* __this, ::app::Uno::Float3 radians);
::app::Uno::Float4 Math__Asin_4(::uStatic* __this, ::app::Uno::Float4 radians);
double Math__Atan(::uStatic* __this, double radians_);
float Math__Atan_1(::uStatic* __this, float radians_);
::app::Uno::Float2 Math__Atan_2(::uStatic* __this, ::app::Uno::Float2 radians);
::app::Uno::Float3 Math__Atan_3(::uStatic* __this, ::app::Uno::Float3 radians);
::app::Uno::Float4 Math__Atan_4(::uStatic* __this, ::app::Uno::Float4 radians);
double Math__Atan2(::uStatic* __this, double y_, double x_);
float Math__Atan2_1(::uStatic* __this, float y_, float x_);
::app::Uno::Float2 Math__Atan2_2(::uStatic* __this, ::app::Uno::Float2 y, ::app::Uno::Float2 x);
::app::Uno::Float3 Math__Atan2_3(::uStatic* __this, ::app::Uno::Float3 y, ::app::Uno::Float3 x);
::app::Uno::Float4 Math__Atan2_4(::uStatic* __this, ::app::Uno::Float4 y, ::app::Uno::Float4 x);
double Math__Ceil(::uStatic* __this, double x_);
float Math__Ceil_1(::uStatic* __this, float x_);
::app::Uno::Float2 Math__Ceil_2(::uStatic* __this, ::app::Uno::Float2 v);
::app::Uno::Float3 Math__Ceil_3(::uStatic* __this, ::app::Uno::Float3 v);
::app::Uno::Float4 Math__Ceil_4(::uStatic* __this, ::app::Uno::Float4 v);
double Math__Clamp(::uStatic* __this, double x, double minimum, double maximum);
float Math__Clamp_1(::uStatic* __this, float x, float minimum, float maximum);
::app::Uno::Int2 Math__Clamp_10(::uStatic* __this, ::app::Uno::Int2 x, ::app::Uno::Int2 minimum, ::app::Uno::Int2 maximum);
::app::Uno::Int3 Math__Clamp_11(::uStatic* __this, ::app::Uno::Int3 x, int minimum, int maximum);
::app::Uno::Int3 Math__Clamp_12(::uStatic* __this, ::app::Uno::Int3 x, ::app::Uno::Int3 minimum, ::app::Uno::Int3 maximum);
::app::Uno::Int4 Math__Clamp_13(::uStatic* __this, ::app::Uno::Int4 x, int minimum, int maximum);
::app::Uno::Int4 Math__Clamp_14(::uStatic* __this, ::app::Uno::Int4 x, ::app::Uno::Int4 minimum, ::app::Uno::Int4 maximum);
::app::Uno::Float2 Math__Clamp_2(::uStatic* __this, ::app::Uno::Float2 x, float minimum, float maximum);
::app::Uno::Float2 Math__Clamp_3(::uStatic* __this, ::app::Uno::Float2 x, ::app::Uno::Float2 minimum, ::app::Uno::Float2 maximum);
::app::Uno::Float3 Math__Clamp_4(::uStatic* __this, ::app::Uno::Float3 x, float minimum, float maximum);
::app::Uno::Float3 Math__Clamp_5(::uStatic* __this, ::app::Uno::Float3 x, ::app::Uno::Float3 minimum, ::app::Uno::Float3 maximum);
::app::Uno::Float4 Math__Clamp_6(::uStatic* __this, ::app::Uno::Float4 x, float minimum, float maximum);
::app::Uno::Float4 Math__Clamp_7(::uStatic* __this, ::app::Uno::Float4 x, ::app::Uno::Float4 minimum, ::app::Uno::Float4 maximum);
int Math__Clamp_8(::uStatic* __this, int x, int minimum, int maximum);
::app::Uno::Int2 Math__Clamp_9(::uStatic* __this, ::app::Uno::Int2 x, int minimum, int maximum);
float Math__ComponentMax(::uStatic* __this, ::app::Uno::Float2 x);
float Math__ComponentMax_1(::uStatic* __this, ::app::Uno::Float3 x);
float Math__ComponentMax_2(::uStatic* __this, ::app::Uno::Float4 x);
int Math__ComponentMax_3(::uStatic* __this, ::app::Uno::Int2 x);
int Math__ComponentMax_4(::uStatic* __this, ::app::Uno::Int3 x);
int Math__ComponentMax_5(::uStatic* __this, ::app::Uno::Int4 x);
float Math__ComponentMin(::uStatic* __this, ::app::Uno::Float2 x);
float Math__ComponentMin_1(::uStatic* __this, ::app::Uno::Float3 x);
float Math__ComponentMin_2(::uStatic* __this, ::app::Uno::Float4 x);
int Math__ComponentMin_3(::uStatic* __this, ::app::Uno::Int2 x);
int Math__ComponentMin_4(::uStatic* __this, ::app::Uno::Int3 x);
int Math__ComponentMin_5(::uStatic* __this, ::app::Uno::Int4 x);
float Math__ComponentSum(::uStatic* __this, ::app::Uno::Float2 x);
float Math__ComponentSum_1(::uStatic* __this, ::app::Uno::Float3 x);
float Math__ComponentSum_2(::uStatic* __this, ::app::Uno::Float4 x);
int Math__ComponentSum_3(::uStatic* __this, ::app::Uno::Int2 x);
int Math__ComponentSum_4(::uStatic* __this, ::app::Uno::Int3 x);
int Math__ComponentSum_5(::uStatic* __this, ::app::Uno::Int4 x);
double Math__Cos(::uStatic* __this, double radians_);
float Math__Cos_1(::uStatic* __this, float radians_);
::app::Uno::Float2 Math__Cos_2(::uStatic* __this, ::app::Uno::Float2 radians);
::app::Uno::Float3 Math__Cos_3(::uStatic* __this, ::app::Uno::Float3 radians);
::app::Uno::Float4 Math__Cos_4(::uStatic* __this, ::app::Uno::Float4 radians);
double Math__DegreesToRadians(::uStatic* __this, double degrees);
float Math__DegreesToRadians_1(::uStatic* __this, float degrees);
::app::Uno::Float2 Math__DegreesToRadians_2(::uStatic* __this, ::app::Uno::Float2 degrees);
::app::Uno::Float3 Math__DegreesToRadians_3(::uStatic* __this, ::app::Uno::Float3 degrees);
::app::Uno::Float4 Math__DegreesToRadians_4(::uStatic* __this, ::app::Uno::Float4 degrees);
double Math__Exp(::uStatic* __this, double x);
float Math__Exp_1(::uStatic* __this, float x);
::app::Uno::Float2 Math__Exp_2(::uStatic* __this, ::app::Uno::Float2 x);
::app::Uno::Float3 Math__Exp_3(::uStatic* __this, ::app::Uno::Float3 x);
::app::Uno::Float4 Math__Exp_4(::uStatic* __this, ::app::Uno::Float4 x);
double Math__Exp2(::uStatic* __this, double x);
float Math__Exp2_1(::uStatic* __this, float x);
::app::Uno::Float2 Math__Exp2_2(::uStatic* __this, ::app::Uno::Float2 x);
::app::Uno::Float3 Math__Exp2_3(::uStatic* __this, ::app::Uno::Float3 x);
::app::Uno::Float4 Math__Exp2_4(::uStatic* __this, ::app::Uno::Float4 x);
double Math__Floor(::uStatic* __this, double x_);
float Math__Floor_1(::uStatic* __this, float x_);
::app::Uno::Float2 Math__Floor_2(::uStatic* __this, ::app::Uno::Float2 v);
::app::Uno::Float3 Math__Floor_3(::uStatic* __this, ::app::Uno::Float3 v);
::app::Uno::Float4 Math__Floor_4(::uStatic* __this, ::app::Uno::Float4 v);
double Math__Fract(::uStatic* __this, double x);
float Math__Fract_1(::uStatic* __this, float x);
::app::Uno::Float2 Math__Fract_2(::uStatic* __this, ::app::Uno::Float2 x);
::app::Uno::Float3 Math__Fract_3(::uStatic* __this, ::app::Uno::Float3 x);
::app::Uno::Float4 Math__Fract_4(::uStatic* __this, ::app::Uno::Float4 x);
double Math__InverseSqrt(::uStatic* __this, double x);
float Math__InverseSqrt_1(::uStatic* __this, float x);
::app::Uno::Float2 Math__InverseSqrt_2(::uStatic* __this, ::app::Uno::Float2 x);
::app::Uno::Float3 Math__InverseSqrt_3(::uStatic* __this, ::app::Uno::Float3 x);
::app::Uno::Float4 Math__InverseSqrt_4(::uStatic* __this, ::app::Uno::Float4 x);
bool Math__IsPow2(::uStatic* __this, int x);
double Math__Lerp(::uStatic* __this, double a, double b, double t);
float Math__Lerp_1(::uStatic* __this, float a, float b, float t);
::app::Uno::Float2 Math__Lerp_2(::uStatic* __this, ::app::Uno::Float2 a, ::app::Uno::Float2 b, float t);
::app::Uno::Float2 Math__Lerp_3(::uStatic* __this, ::app::Uno::Float2 a, ::app::Uno::Float2 b, ::app::Uno::Float2 t);
::app::Uno::Float3 Math__Lerp_4(::uStatic* __this, ::app::Uno::Float3 a, ::app::Uno::Float3 b, float t);
::app::Uno::Float3 Math__Lerp_5(::uStatic* __this, ::app::Uno::Float3 a, ::app::Uno::Float3 b, ::app::Uno::Float3 t);
::app::Uno::Float4 Math__Lerp_6(::uStatic* __this, ::app::Uno::Float4 a, ::app::Uno::Float4 b, float t);
::app::Uno::Float4 Math__Lerp_7(::uStatic* __this, ::app::Uno::Float4 a, ::app::Uno::Float4 b, ::app::Uno::Float4 t);
double Math__Log(::uStatic* __this, double x_);
float Math__Log_1(::uStatic* __this, float x_);
::app::Uno::Float2 Math__Log_2(::uStatic* __this, ::app::Uno::Float2 x);
::app::Uno::Float3 Math__Log_3(::uStatic* __this, ::app::Uno::Float3 x);
::app::Uno::Float4 Math__Log_4(::uStatic* __this, ::app::Uno::Float4 x);
double Math__Log2(::uStatic* __this, double x);
float Math__Log2_1(::uStatic* __this, float x);
::app::Uno::Float2 Math__Log2_2(::uStatic* __this, ::app::Uno::Float2 x);
::app::Uno::Float3 Math__Log2_3(::uStatic* __this, ::app::Uno::Float3 x);
::app::Uno::Float4 Math__Log2_4(::uStatic* __this, ::app::Uno::Float4 x);
double Math__Max(::uStatic* __this, double a, double b);
float Math__Max_1(::uStatic* __this, float a, float b);
::app::Uno::Int2 Math__Max_10(::uStatic* __this, ::app::Uno::Int2 a, ::app::Uno::Int2 b);
::app::Uno::Int3 Math__Max_11(::uStatic* __this, ::app::Uno::Int3 a, int b);
::app::Uno::Int3 Math__Max_12(::uStatic* __this, ::app::Uno::Int3 a, ::app::Uno::Int3 b);
::app::Uno::Int4 Math__Max_13(::uStatic* __this, ::app::Uno::Int4 a, int b);
::app::Uno::Int4 Math__Max_14(::uStatic* __this, ::app::Uno::Int4 a, ::app::Uno::Int4 b);
::app::Uno::Float2 Math__Max_2(::uStatic* __this, ::app::Uno::Float2 a, float b);
::app::Uno::Float2 Math__Max_3(::uStatic* __this, ::app::Uno::Float2 a, ::app::Uno::Float2 b);
::app::Uno::Float3 Math__Max_4(::uStatic* __this, ::app::Uno::Float3 a, float b);
::app::Uno::Float3 Math__Max_5(::uStatic* __this, ::app::Uno::Float3 a, ::app::Uno::Float3 b);
::app::Uno::Float4 Math__Max_6(::uStatic* __this, ::app::Uno::Float4 a, float b);
::app::Uno::Float4 Math__Max_7(::uStatic* __this, ::app::Uno::Float4 a, ::app::Uno::Float4 b);
int Math__Max_8(::uStatic* __this, int a, int b);
::app::Uno::Int2 Math__Max_9(::uStatic* __this, ::app::Uno::Int2 a, int b);
double Math__Min(::uStatic* __this, double a, double b);
float Math__Min_1(::uStatic* __this, float a, float b);
::app::Uno::Int2 Math__Min_10(::uStatic* __this, ::app::Uno::Int2 a, ::app::Uno::Int2 b);
::app::Uno::Int3 Math__Min_11(::uStatic* __this, ::app::Uno::Int3 a, int b);
::app::Uno::Int3 Math__Min_12(::uStatic* __this, ::app::Uno::Int3 a, ::app::Uno::Int3 b);
::app::Uno::Int4 Math__Min_13(::uStatic* __this, ::app::Uno::Int4 a, int b);
::app::Uno::Int4 Math__Min_14(::uStatic* __this, ::app::Uno::Int4 a, ::app::Uno::Int4 b);
::app::Uno::Float2 Math__Min_2(::uStatic* __this, ::app::Uno::Float2 a, float b);
::app::Uno::Float2 Math__Min_3(::uStatic* __this, ::app::Uno::Float2 a, ::app::Uno::Float2 b);
::app::Uno::Float3 Math__Min_4(::uStatic* __this, ::app::Uno::Float3 a, float b);
::app::Uno::Float3 Math__Min_5(::uStatic* __this, ::app::Uno::Float3 a, ::app::Uno::Float3 b);
::app::Uno::Float4 Math__Min_6(::uStatic* __this, ::app::Uno::Float4 a, float b);
::app::Uno::Float4 Math__Min_7(::uStatic* __this, ::app::Uno::Float4 a, ::app::Uno::Float4 b);
int Math__Min_8(::uStatic* __this, int a, int b);
::app::Uno::Int2 Math__Min_9(::uStatic* __this, ::app::Uno::Int2 a, int b);
double Math__Mod(::uStatic* __this, double x, double y);
float Math__Mod_1(::uStatic* __this, float x, float y);
::app::Uno::Float2 Math__Mod_2(::uStatic* __this, ::app::Uno::Float2 x, float y);
::app::Uno::Float2 Math__Mod_3(::uStatic* __this, ::app::Uno::Float2 x, ::app::Uno::Float2 y);
::app::Uno::Float3 Math__Mod_4(::uStatic* __this, ::app::Uno::Float3 x, float y);
::app::Uno::Float3 Math__Mod_5(::uStatic* __this, ::app::Uno::Float3 x, ::app::Uno::Float3 y);
::app::Uno::Float4 Math__Mod_6(::uStatic* __this, ::app::Uno::Float4 x, float y);
::app::Uno::Float4 Math__Mod_7(::uStatic* __this, ::app::Uno::Float4 x, ::app::Uno::Float4 y);
int Math__NextPow2(::uStatic* __this, int x);
double Math__Pow(::uStatic* __this, double x_, double y_);
float Math__Pow_1(::uStatic* __this, float x_, float y_);
::app::Uno::Float2 Math__Pow_2(::uStatic* __this, ::app::Uno::Float2 x, ::app::Uno::Float2 y);
::app::Uno::Float3 Math__Pow_3(::uStatic* __this, ::app::Uno::Float3 x, ::app::Uno::Float3 y);
::app::Uno::Float4 Math__Pow_4(::uStatic* __this, ::app::Uno::Float4 x, ::app::Uno::Float4 y);
double Math__RadiansToDegrees(::uStatic* __this, double radians);
float Math__RadiansToDegrees_1(::uStatic* __this, float radians);
::app::Uno::Float2 Math__RadiansToDegrees_2(::uStatic* __this, ::app::Uno::Float2 radians);
::app::Uno::Float3 Math__RadiansToDegrees_3(::uStatic* __this, ::app::Uno::Float3 radians);
::app::Uno::Float4 Math__RadiansToDegrees_4(::uStatic* __this, ::app::Uno::Float4 radians);
double Math__Round(::uStatic* __this, double x);
double Math__Round_1(::uStatic* __this, double d, int decimals);
float Math__Round_2(::uStatic* __this, float x);
float Math__Round_3(::uStatic* __this, float d, int decimals);
::app::Uno::Float2 Math__Round_4(::uStatic* __this, ::app::Uno::Float2 x);
::app::Uno::Float2 Math__Round_5(::uStatic* __this, ::app::Uno::Float2 x, int decimals);
::app::Uno::Float3 Math__Round_6(::uStatic* __this, ::app::Uno::Float3 x);
::app::Uno::Float3 Math__Round_7(::uStatic* __this, ::app::Uno::Float3 x, int decimals);
::app::Uno::Float4 Math__Round_8(::uStatic* __this, ::app::Uno::Float4 x);
::app::Uno::Float4 Math__Round_9(::uStatic* __this, ::app::Uno::Float4 x, int decimals);
double Math__Saturate(::uStatic* __this, double x);
float Math__Saturate_1(::uStatic* __this, float x);
::app::Uno::Float2 Math__Saturate_2(::uStatic* __this, ::app::Uno::Float2 x);
::app::Uno::Float3 Math__Saturate_3(::uStatic* __this, ::app::Uno::Float3 x);
::app::Uno::Float4 Math__Saturate_4(::uStatic* __this, ::app::Uno::Float4 x);
double Math__Sign(::uStatic* __this, double x);
float Math__Sign_1(::uStatic* __this, float x);
::app::Uno::Float2 Math__Sign_2(::uStatic* __this, ::app::Uno::Float2 a);
::app::Uno::Float3 Math__Sign_3(::uStatic* __this, ::app::Uno::Float3 a);
::app::Uno::Float4 Math__Sign_4(::uStatic* __this, ::app::Uno::Float4 a);
int Math__Sign_5(::uStatic* __this, int x);
::app::Uno::Int2 Math__Sign_6(::uStatic* __this, ::app::Uno::Int2 a);
::app::Uno::Int3 Math__Sign_7(::uStatic* __this, ::app::Uno::Int3 a);
::app::Uno::Int4 Math__Sign_8(::uStatic* __this, ::app::Uno::Int4 a);
double Math__Sin(::uStatic* __this, double radians_);
float Math__Sin_1(::uStatic* __this, float radians_);
::app::Uno::Float2 Math__Sin_2(::uStatic* __this, ::app::Uno::Float2 radians);
::app::Uno::Float3 Math__Sin_3(::uStatic* __this, ::app::Uno::Float3 radians);
::app::Uno::Float4 Math__Sin_4(::uStatic* __this, ::app::Uno::Float4 radians);
double Math__SmoothStep(::uStatic* __this, double edge0, double edge1, double x);
float Math__SmoothStep_1(::uStatic* __this, float edge0, float edge1, float x);
::app::Uno::Float2 Math__SmoothStep_2(::uStatic* __this, float edge0, float edge1, ::app::Uno::Float2 x);
::app::Uno::Float3 Math__SmoothStep_3(::uStatic* __this, float edge0, float edge1, ::app::Uno::Float3 x);
::app::Uno::Float4 Math__SmoothStep_4(::uStatic* __this, float edge0, float edge1, ::app::Uno::Float4 x);
::app::Uno::Float2 Math__SmoothStep_5(::uStatic* __this, ::app::Uno::Float2 edge0, ::app::Uno::Float2 edge1, ::app::Uno::Float2 x);
::app::Uno::Float3 Math__SmoothStep_6(::uStatic* __this, ::app::Uno::Float3 edge0, ::app::Uno::Float3 edge1, ::app::Uno::Float3 x);
::app::Uno::Float4 Math__SmoothStep_7(::uStatic* __this, ::app::Uno::Float4 edge0, ::app::Uno::Float4 edge1, ::app::Uno::Float4 x);
double Math__Sqrt(::uStatic* __this, double x_);
float Math__Sqrt_1(::uStatic* __this, float x_);
::app::Uno::Float2 Math__Sqrt_2(::uStatic* __this, ::app::Uno::Float2 x);
::app::Uno::Float3 Math__Sqrt_3(::uStatic* __this, ::app::Uno::Float3 x);
::app::Uno::Float4 Math__Sqrt_4(::uStatic* __this, ::app::Uno::Float4 x);
double Math__Step(::uStatic* __this, double edge, double x);
float Math__Step_1(::uStatic* __this, float edge, float x);
::app::Uno::Float2 Math__Step_2(::uStatic* __this, float edge, ::app::Uno::Float2 x);
::app::Uno::Float3 Math__Step_3(::uStatic* __this, float edge, ::app::Uno::Float3 x);
::app::Uno::Float4 Math__Step_4(::uStatic* __this, float edge, ::app::Uno::Float4 x);
::app::Uno::Float2 Math__Step_5(::uStatic* __this, ::app::Uno::Float2 edge, ::app::Uno::Float2 x);
::app::Uno::Float3 Math__Step_6(::uStatic* __this, ::app::Uno::Float3 edge, ::app::Uno::Float3 x);
::app::Uno::Float4 Math__Step_7(::uStatic* __this, ::app::Uno::Float4 edge, ::app::Uno::Float4 x);
double Math__Tan(::uStatic* __this, double radians_);
float Math__Tan_1(::uStatic* __this, float radians_);
::app::Uno::Float2 Math__Tan_2(::uStatic* __this, ::app::Uno::Float2 radians);
::app::Uno::Float3 Math__Tan_3(::uStatic* __this, ::app::Uno::Float3 radians);
::app::Uno::Float4 Math__Tan_4(::uStatic* __this, ::app::Uno::Float4 radians);

}}


#endif
