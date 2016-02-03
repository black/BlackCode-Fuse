// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Content\Splines\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_UNO_CONTENT_SPLINES_LINEAR_SPLINE_FLOAT3_H__
#define __APP_UNO_CONTENT_SPLINES_LINEAR_SPLINE_FLOAT3_H__

#include <app/Uno.Content.Splines.KeyframedSpline__float3__float3.h>
#include <Uno.h>
namespace app { namespace Uno { namespace Content { namespace Splines { struct KeyframedSpline2_Key__float3__float3; } } } }
namespace app { namespace Uno { struct Float3; } }

namespace app {
namespace Uno {
namespace Content {
namespace Splines {

struct LinearSplineFloat3;

struct LinearSplineFloat3__uType : ::app::Uno::Content::Splines::KeyframedSpline__float3__float3__uType
{
};

LinearSplineFloat3__uType* LinearSplineFloat3__typeof();

void LinearSplineFloat3___ObjInit_3(LinearSplineFloat3* __this);
void LinearSplineFloat3___ObjInit_4(LinearSplineFloat3* __this, ::uArray* keys);
LinearSplineFloat3* LinearSplineFloat3__New_1(::uStatic* __this);
LinearSplineFloat3* LinearSplineFloat3__New_2(::uStatic* __this, ::uArray* keys);
void LinearSplineFloat3__Sample_1(LinearSplineFloat3* __this, double t, ::app::Uno::Float3* result);

struct LinearSplineFloat3 : ::app::Uno::Content::Splines::KeyframedSpline__float3__float3
{
    void _ObjInit_3() { LinearSplineFloat3___ObjInit_3(this); }
    void _ObjInit_4(::uArray* keys) { LinearSplineFloat3___ObjInit_4(this, keys); }
};

}}}}


#endif
