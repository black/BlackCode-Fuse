// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Content\Splines\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_UNO_CONTENT_SPLINES_LINEAR_SPLINE_FLOAT_H__
#define __APP_UNO_CONTENT_SPLINES_LINEAR_SPLINE_FLOAT_H__

#include <app/Uno.Content.Splines.KeyframedSpline__float__float.h>
#include <Uno.h>
namespace app { namespace Uno { namespace Content { namespace Splines { struct KeyframedSpline2_Key__float__float; } } } }

namespace app {
namespace Uno {
namespace Content {
namespace Splines {

struct LinearSplineFloat;

struct LinearSplineFloat__uType : ::app::Uno::Content::Splines::KeyframedSpline__float__float__uType
{
};

LinearSplineFloat__uType* LinearSplineFloat__typeof();

void LinearSplineFloat___ObjInit_3(LinearSplineFloat* __this);
void LinearSplineFloat___ObjInit_4(LinearSplineFloat* __this, ::uArray* keys);
LinearSplineFloat* LinearSplineFloat__New_1(::uStatic* __this);
LinearSplineFloat* LinearSplineFloat__New_2(::uStatic* __this, ::uArray* keys);
void LinearSplineFloat__Sample_1(LinearSplineFloat* __this, double t, float* result);

struct LinearSplineFloat : ::app::Uno::Content::Splines::KeyframedSpline__float__float
{
    void _ObjInit_3() { LinearSplineFloat___ObjInit_3(this); }
    void _ObjInit_4(::uArray* keys) { LinearSplineFloat___ObjInit_4(this, keys); }
};

}}}}


#endif
