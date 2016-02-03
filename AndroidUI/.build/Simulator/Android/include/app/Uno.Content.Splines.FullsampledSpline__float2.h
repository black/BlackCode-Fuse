// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Content\Splines\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_UNO_CONTENT_SPLINES_FULLSAMPLED_SPLINE__FLOAT2_H__
#define __APP_UNO_CONTENT_SPLINES_FULLSAMPLED_SPLINE__FLOAT2_H__

#include <app/Uno.Content.Splines.Spline__float2.h>
#include <app/Uno.Float2.h>
#include <Uno.h>

namespace app {
namespace Uno {
namespace Content {
namespace Splines {

struct FullsampledSpline__float2;

struct FullsampledSpline__float2__uType : ::app::Uno::Content::Splines::Spline__float2__uType
{
};

FullsampledSpline__float2__uType* FullsampledSpline__float2__typeof();

void FullsampledSpline__float2___ObjInit_1(FullsampledSpline__float2* __this, double start, double fps, ::uArray* frames);
double FullsampledSpline__float2__get_End(FullsampledSpline__float2* __this);
double FullsampledSpline__float2__get_Start(FullsampledSpline__float2* __this);
FullsampledSpline__float2* FullsampledSpline__float2__New_1(::uStatic* __this, double start, double fps, ::uArray* frames);
void FullsampledSpline__float2__Sample_1(FullsampledSpline__float2* __this, double time, ::app::Uno::Float2* result);

struct FullsampledSpline__float2 : ::app::Uno::Content::Splines::Spline__float2
{
    double _start;
    double _fps;
    ::uStrong< ::uArray*> _frames;

    void _ObjInit_1(double start, double fps, ::uArray* frames) { FullsampledSpline__float2___ObjInit_1(this, start, fps, frames); }
};

}}}}


#endif
