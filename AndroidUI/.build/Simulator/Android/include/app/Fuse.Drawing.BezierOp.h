// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Drawing.Paths\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_FUSE_DRAWING_BEZIER_OP_H__
#define __APP_FUSE_DRAWING_BEZIER_OP_H__

#include <Uno.h>
namespace app { namespace Uno { struct Float2; } }
namespace app { namespace Uno { struct Rect; } }

namespace app {
namespace Fuse {
namespace Drawing {

struct BezierOp__uType : ::uClassType
{
};

BezierOp__uType* BezierOp__typeof();

double BezierOp___Solve(::uStatic* __this, double a_, double b_, double c_, bool s);
double BezierOp__A(::uStatic* __this, double p0, double p1, double p2, double p3);
double BezierOp__B(::uStatic* __this, double p0, double p1, double p2);
double BezierOp__bezierSpline(::uStatic* __this, double p0, double p1, double p2, double p3, double t);
double BezierOp__C(::uStatic* __this, double p0, double p1);
double BezierOp__Determinant(::uStatic* __this, double a, double b, double c);
::app::Uno::Rect BezierOp__GetRect(::uStatic* __this, ::app::Uno::Float2 p1, ::app::Uno::Float2 c1, ::app::Uno::Float2 c2, ::app::Uno::Float2 p2);
::uArray* BezierOp__Solve(::uStatic* __this, double a, double b, double c);

}}}


#endif
