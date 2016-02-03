// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Drawing.Primitives\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_FUSE_DRAWING_PRIMITIVES_STROKE_COVERAGE_H__
#define __APP_FUSE_DRAWING_PRIMITIVES_STROKE_COVERAGE_H__

#include <app/Fuse.Drawing.Primitives.Coverage.h>
#include <Uno.h>

namespace app {
namespace Fuse {
namespace Drawing {
namespace Primitives {

struct StrokeCoverage;

struct StrokeCoverage__uType : ::app::Fuse::Drawing::Primitives::Coverage__uType
{
};

StrokeCoverage__uType* StrokeCoverage__typeof();

void StrokeCoverage___ObjInit_1(StrokeCoverage* __this);
StrokeCoverage* StrokeCoverage__New_1(::uStatic* __this);

struct StrokeCoverage : ::app::Fuse::Drawing::Primitives::Coverage
{
    float Radius;
    float Center;

    void _ObjInit_1() { StrokeCoverage___ObjInit_1(this); }
};

}}}}


#endif
