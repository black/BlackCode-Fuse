// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Content\Splines\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_UNO_CONTENT_SPLINES_KEYFRAMED_SPLINE2_KEY__FLOAT__FLOAT_H__
#define __APP_UNO_CONTENT_SPLINES_KEYFRAMED_SPLINE2_KEY__FLOAT__FLOAT_H__

#include <app/Uno.Object.h>
#include <Uno.h>

namespace app {
namespace Uno {
namespace Content {
namespace Splines {

struct KeyframedSpline2_Key__float__float;

struct KeyframedSpline2_Key__float__float__uType : ::uStructType
{
};

KeyframedSpline2_Key__float__float__uType* KeyframedSpline2_Key__float__float__typeof();

void KeyframedSpline2_Key__float__float___ObjInit(KeyframedSpline2_Key__float__float* __this, double time, float value);
KeyframedSpline2_Key__float__float KeyframedSpline2_Key__float__float__New_1(::uStatic* __this, double time, float value);

struct KeyframedSpline2_Key__float__float
{
    double Time;
    float Value;

    void _ObjInit(double time, float value) { KeyframedSpline2_Key__float__float___ObjInit(this, time, value); }
};

}}}}


#endif
