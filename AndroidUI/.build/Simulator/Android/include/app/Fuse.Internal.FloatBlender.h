// This file was generated based on 'C:\ProgramData\Uno\Packages\FuseCore\0.11.3\Internal\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_FUSE_INTERNAL_FLOAT_BLENDER_H__
#define __APP_FUSE_INTERNAL_FLOAT_BLENDER_H__

#include <app/Fuse.Internal.Blender__float.h>
#include <Uno.h>

namespace app {
namespace Fuse {
namespace Internal {

struct FloatBlender;

struct FloatBlender__uType : ::app::Fuse::Internal::Blender__float__uType
{
};

FloatBlender__uType* FloatBlender__typeof();

void FloatBlender___ObjInit_1(FloatBlender* __this);
float FloatBlender__Add(FloatBlender* __this, float a, float b);
float FloatBlender__get_One(FloatBlender* __this);
float FloatBlender__get_Zero(FloatBlender* __this);
double FloatBlender__Length(FloatBlender* __this, float a);
float FloatBlender__Lerp(FloatBlender* __this, float a, float b, double d);
FloatBlender* FloatBlender__New_1(::uStatic* __this);
float FloatBlender__Sub(FloatBlender* __this, float a, float b);
float FloatBlender__ToUnit(FloatBlender* __this, float a, double* length);
float FloatBlender__Weight(FloatBlender* __this, float v, double w);

struct FloatBlender : ::app::Fuse::Internal::Blender__float
{
    void _ObjInit_1() { FloatBlender___ObjInit_1(this); }
};

}}}


#endif
