// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Content\Splines\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_UNO_CONTENT_SPLINES_LINEAR_SPLINE_FLOAT2_H__
#define __APP_UNO_CONTENT_SPLINES_LINEAR_SPLINE_FLOAT2_H__

#include <app/Uno.Content.Splines.KeyframedSpline__float2__float2.h>
#include <Uno.h>
namespace app { namespace Uno { namespace Content { namespace Splines { struct KeyframedSpline2_Key__float2__float2; } } } }
namespace app { namespace Uno { struct Float2; } }

namespace app {
namespace Uno {
namespace Content {
namespace Splines {

struct LinearSplineFloat2;

struct LinearSplineFloat2__uType : ::app::Uno::Content::Splines::KeyframedSpline__float2__float2__uType
{
};

LinearSplineFloat2__uType* LinearSplineFloat2__typeof();

void LinearSplineFloat2___ObjInit_3(LinearSplineFloat2* __this);
void LinearSplineFloat2___ObjInit_4(LinearSplineFloat2* __this, ::uArray* keys);
LinearSplineFloat2* LinearSplineFloat2__New_1(::uStatic* __this);
LinearSplineFloat2* LinearSplineFloat2__New_2(::uStatic* __this, ::uArray* keys);
void LinearSplineFloat2__Sample_1(LinearSplineFloat2* __this, double t, ::app::Uno::Float2* result);

struct LinearSplineFloat2 : ::app::Uno::Content::Splines::KeyframedSpline__float2__float2
{
    void _ObjInit_3() { LinearSplineFloat2___ObjInit_3(this); }
    void _ObjInit_4(::uArray* keys) { LinearSplineFloat2___ObjInit_4(this, keys); }
};

}}}}


#endif
