// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Content\Splines\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_UNO_CONTENT_SPLINES_KEYFRAMED_SPLINE2_KEY__FLOAT3__FLOAT3_H__
#define __APP_UNO_CONTENT_SPLINES_KEYFRAMED_SPLINE2_KEY__FLOAT3__FLOAT3_H__

#include <app/Uno.Float3.h>
#include <app/Uno.Object.h>
#include <Uno.h>

namespace app {
namespace Uno {
namespace Content {
namespace Splines {

struct KeyframedSpline2_Key__float3__float3;

struct KeyframedSpline2_Key__float3__float3__uType : ::uStructType
{
};

KeyframedSpline2_Key__float3__float3__uType* KeyframedSpline2_Key__float3__float3__typeof();

void KeyframedSpline2_Key__float3__float3___ObjInit(KeyframedSpline2_Key__float3__float3* __this, double time, ::app::Uno::Float3 value);
KeyframedSpline2_Key__float3__float3 KeyframedSpline2_Key__float3__float3__New_1(::uStatic* __this, double time, ::app::Uno::Float3 value);

struct KeyframedSpline2_Key__float3__float3
{
    double Time;
    ::app::Uno::Float3 Value;

    void _ObjInit(double time, ::app::Uno::Float3 value) { KeyframedSpline2_Key__float3__float3___ObjInit(this, time, value); }
};

}}}}


#endif
