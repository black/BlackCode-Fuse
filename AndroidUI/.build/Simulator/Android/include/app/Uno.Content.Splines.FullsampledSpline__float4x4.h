// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Content\Splines\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_UNO_CONTENT_SPLINES_FULLSAMPLED_SPLINE__FLOAT4X4_H__
#define __APP_UNO_CONTENT_SPLINES_FULLSAMPLED_SPLINE__FLOAT4X4_H__

#include <app/Uno.Content.Splines.Spline__float4x4.h>
#include <app/Uno.Float4x4.h>
#include <Uno.h>

namespace app {
namespace Uno {
namespace Content {
namespace Splines {

struct FullsampledSpline__float4x4;

struct FullsampledSpline__float4x4__uType : ::app::Uno::Content::Splines::Spline__float4x4__uType
{
};

FullsampledSpline__float4x4__uType* FullsampledSpline__float4x4__typeof();

void FullsampledSpline__float4x4___ObjInit_1(FullsampledSpline__float4x4* __this, double start, double fps, ::uArray* frames);
double FullsampledSpline__float4x4__get_End(FullsampledSpline__float4x4* __this);
double FullsampledSpline__float4x4__get_Start(FullsampledSpline__float4x4* __this);
FullsampledSpline__float4x4* FullsampledSpline__float4x4__New_1(::uStatic* __this, double start, double fps, ::uArray* frames);
void FullsampledSpline__float4x4__Sample_1(FullsampledSpline__float4x4* __this, double time, ::app::Uno::Float4x4* result);

struct FullsampledSpline__float4x4 : ::app::Uno::Content::Splines::Spline__float4x4
{
    double _start;
    double _fps;
    ::uStrong< ::uArray*> _frames;

    void _ObjInit_1(double start, double fps, ::uArray* frames) { FullsampledSpline__float4x4___ObjInit_1(this, start, fps, frames); }
};

}}}}


#endif
