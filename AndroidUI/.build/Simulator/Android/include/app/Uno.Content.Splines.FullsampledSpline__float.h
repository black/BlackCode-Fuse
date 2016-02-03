// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Content\Splines\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_UNO_CONTENT_SPLINES_FULLSAMPLED_SPLINE__FLOAT_H__
#define __APP_UNO_CONTENT_SPLINES_FULLSAMPLED_SPLINE__FLOAT_H__

#include <app/Uno.Content.Splines.Spline__float.h>
#include <Uno.h>

namespace app {
namespace Uno {
namespace Content {
namespace Splines {

struct FullsampledSpline__float;

struct FullsampledSpline__float__uType : ::app::Uno::Content::Splines::Spline__float__uType
{
};

FullsampledSpline__float__uType* FullsampledSpline__float__typeof();

void FullsampledSpline__float___ObjInit_1(FullsampledSpline__float* __this, double start, double fps, ::uArray* frames);
double FullsampledSpline__float__get_End(FullsampledSpline__float* __this);
double FullsampledSpline__float__get_Start(FullsampledSpline__float* __this);
FullsampledSpline__float* FullsampledSpline__float__New_1(::uStatic* __this, double start, double fps, ::uArray* frames);
void FullsampledSpline__float__Sample_1(FullsampledSpline__float* __this, double time, float* result);

struct FullsampledSpline__float : ::app::Uno::Content::Splines::Spline__float
{
    double _start;
    double _fps;
    ::uStrong< ::uArray*> _frames;

    void _ObjInit_1(double start, double fps, ::uArray* frames) { FullsampledSpline__float___ObjInit_1(this, start, fps, frames); }
};

}}}}


#endif
