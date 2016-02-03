// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Content\Splines\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_UNO_CONTENT_SPLINES_FULLSAMPLED_SPLINE__FLOAT3_H__
#define __APP_UNO_CONTENT_SPLINES_FULLSAMPLED_SPLINE__FLOAT3_H__

#include <app/Uno.Content.Splines.Spline__float3.h>
#include <app/Uno.Float3.h>
#include <Uno.h>

namespace app {
namespace Uno {
namespace Content {
namespace Splines {

struct FullsampledSpline__float3;

struct FullsampledSpline__float3__uType : ::app::Uno::Content::Splines::Spline__float3__uType
{
};

FullsampledSpline__float3__uType* FullsampledSpline__float3__typeof();

void FullsampledSpline__float3___ObjInit_1(FullsampledSpline__float3* __this, double start, double fps, ::uArray* frames);
double FullsampledSpline__float3__get_End(FullsampledSpline__float3* __this);
double FullsampledSpline__float3__get_Start(FullsampledSpline__float3* __this);
FullsampledSpline__float3* FullsampledSpline__float3__New_1(::uStatic* __this, double start, double fps, ::uArray* frames);
void FullsampledSpline__float3__Sample_1(FullsampledSpline__float3* __this, double time, ::app::Uno::Float3* result);

struct FullsampledSpline__float3 : ::app::Uno::Content::Splines::Spline__float3
{
    double _start;
    double _fps;
    ::uStrong< ::uArray*> _frames;

    void _ObjInit_1(double start, double fps, ::uArray* frames) { FullsampledSpline__float3___ObjInit_1(this, start, fps, frames); }
};

}}}}


#endif
