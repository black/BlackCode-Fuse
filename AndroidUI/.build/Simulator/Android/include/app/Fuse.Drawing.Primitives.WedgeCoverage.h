// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Drawing.Primitives\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_FUSE_DRAWING_PRIMITIVES_WEDGE_COVERAGE_H__
#define __APP_FUSE_DRAWING_PRIMITIVES_WEDGE_COVERAGE_H__

#include <app/Fuse.Drawing.Primitives.LimitCoverage.h>
#include <Uno.h>

namespace app {
namespace Fuse {
namespace Drawing {
namespace Primitives {

struct WedgeCoverage;

struct WedgeCoverage__uType : ::app::Fuse::Drawing::Primitives::LimitCoverage__uType
{
};

WedgeCoverage__uType* WedgeCoverage__typeof();

void WedgeCoverage___ObjInit_1(WedgeCoverage* __this);

struct WedgeCoverage : ::app::Fuse::Drawing::Primitives::LimitCoverage
{
    float StartAngle;
    float EndAngle;

    void _ObjInit_1() { WedgeCoverage___ObjInit_1(this); }
};

}}}}


#endif
