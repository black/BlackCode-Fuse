// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Content\Splines\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_UNO_CONTENT_SPLINES_LINEAR_SPLINE_FLOAT4_H__
#define __APP_UNO_CONTENT_SPLINES_LINEAR_SPLINE_FLOAT4_H__

#include <app/Uno.Content.Splines.KeyframedSpline__float4__float4.h>
#include <Uno.h>
namespace app { namespace Uno { namespace Content { namespace Splines { struct KeyframedSpline2_Key__float4__float4; } } } }
namespace app { namespace Uno { struct Float4; } }

namespace app {
namespace Uno {
namespace Content {
namespace Splines {

struct LinearSplineFloat4;

struct LinearSplineFloat4__uType : ::app::Uno::Content::Splines::KeyframedSpline__float4__float4__uType
{
};

LinearSplineFloat4__uType* LinearSplineFloat4__typeof();

void LinearSplineFloat4___ObjInit_3(LinearSplineFloat4* __this);
void LinearSplineFloat4___ObjInit_4(LinearSplineFloat4* __this, ::uArray* keys);
LinearSplineFloat4* LinearSplineFloat4__New_1(::uStatic* __this);
LinearSplineFloat4* LinearSplineFloat4__New_2(::uStatic* __this, ::uArray* keys);
void LinearSplineFloat4__Sample_1(LinearSplineFloat4* __this, double t, ::app::Uno::Float4* result);

struct LinearSplineFloat4 : ::app::Uno::Content::Splines::KeyframedSpline__float4__float4
{
    void _ObjInit_3() { LinearSplineFloat4___ObjInit_3(this); }
    void _ObjInit_4(::uArray* keys) { LinearSplineFloat4___ObjInit_4(this, keys); }
};

}}}}


#endif
