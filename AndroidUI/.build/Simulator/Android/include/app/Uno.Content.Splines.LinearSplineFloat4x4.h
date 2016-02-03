// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Content\Splines\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_UNO_CONTENT_SPLINES_LINEAR_SPLINE_FLOAT4X4_H__
#define __APP_UNO_CONTENT_SPLINES_LINEAR_SPLINE_FLOAT4X4_H__

#include <app/Uno.Content.Splines.KeyframedSpline__float4x4__float4x4.h>
#include <Uno.h>
namespace app { namespace Uno { namespace Content { namespace Splines { struct KeyframedSpline2_Key__float4x4__float4x4; } } } }
namespace app { namespace Uno { struct Float4x4; } }

namespace app {
namespace Uno {
namespace Content {
namespace Splines {

struct LinearSplineFloat4x4;

struct LinearSplineFloat4x4__uType : ::app::Uno::Content::Splines::KeyframedSpline__float4x4__float4x4__uType
{
};

LinearSplineFloat4x4__uType* LinearSplineFloat4x4__typeof();

void LinearSplineFloat4x4___ObjInit_3(LinearSplineFloat4x4* __this);
void LinearSplineFloat4x4___ObjInit_4(LinearSplineFloat4x4* __this, ::uArray* keys);
LinearSplineFloat4x4* LinearSplineFloat4x4__New_1(::uStatic* __this);
LinearSplineFloat4x4* LinearSplineFloat4x4__New_2(::uStatic* __this, ::uArray* keys);
void LinearSplineFloat4x4__Sample_1(LinearSplineFloat4x4* __this, double t, ::app::Uno::Float4x4* result);

struct LinearSplineFloat4x4 : ::app::Uno::Content::Splines::KeyframedSpline__float4x4__float4x4
{
    void _ObjInit_3() { LinearSplineFloat4x4___ObjInit_3(this); }
    void _ObjInit_4(::uArray* keys) { LinearSplineFloat4x4___ObjInit_4(this, keys); }
};

}}}}


#endif
