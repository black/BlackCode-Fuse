// This file was generated based on 'C:\ProgramData\Uno\Packages\FuseCore\0.11.3\Internal\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_FUSE_INTERNAL_DOUBLE_BLENDER_H__
#define __APP_FUSE_INTERNAL_DOUBLE_BLENDER_H__

#include <app/Fuse.Internal.Blender__double.h>
#include <Uno.h>

namespace app {
namespace Fuse {
namespace Internal {

struct DoubleBlender;

struct DoubleBlender__uType : ::app::Fuse::Internal::Blender__double__uType
{
};

DoubleBlender__uType* DoubleBlender__typeof();

void DoubleBlender___ObjInit_1(DoubleBlender* __this);
double DoubleBlender__Add(DoubleBlender* __this, double a, double b);
double DoubleBlender__get_One(DoubleBlender* __this);
double DoubleBlender__get_Zero(DoubleBlender* __this);
double DoubleBlender__Length(DoubleBlender* __this, double a);
double DoubleBlender__Lerp(DoubleBlender* __this, double a, double b, double d);
DoubleBlender* DoubleBlender__New_1(::uStatic* __this);
double DoubleBlender__Sub(DoubleBlender* __this, double a, double b);
double DoubleBlender__ToUnit(DoubleBlender* __this, double a, double* length);
double DoubleBlender__Weight(DoubleBlender* __this, double v, double w);

struct DoubleBlender : ::app::Fuse::Internal::Blender__double
{
    void _ObjInit_1() { DoubleBlender___ObjInit_1(this); }
};

}}}


#endif
