// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Content\Splines\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_UNO_CONTENT_SPLINES_KEYFRAMED_SPLINE2_KEY__FLOAT4X4__FLOAT4X4_H__
#define __APP_UNO_CONTENT_SPLINES_KEYFRAMED_SPLINE2_KEY__FLOAT4X4__FLOAT4X4_H__

#include <app/Uno.Float4x4.h>
#include <app/Uno.Object.h>
#include <Uno.h>

namespace app {
namespace Uno {
namespace Content {
namespace Splines {

struct KeyframedSpline2_Key__float4x4__float4x4;

struct KeyframedSpline2_Key__float4x4__float4x4__uType : ::uStructType
{
};

KeyframedSpline2_Key__float4x4__float4x4__uType* KeyframedSpline2_Key__float4x4__float4x4__typeof();

void KeyframedSpline2_Key__float4x4__float4x4___ObjInit(KeyframedSpline2_Key__float4x4__float4x4* __this, double time, ::app::Uno::Float4x4 value);
KeyframedSpline2_Key__float4x4__float4x4 KeyframedSpline2_Key__float4x4__float4x4__New_1(::uStatic* __this, double time, ::app::Uno::Float4x4 value);

struct KeyframedSpline2_Key__float4x4__float4x4
{
    double Time;
    ::app::Uno::Float4x4 Value;

    void _ObjInit(double time, ::app::Uno::Float4x4 value) { KeyframedSpline2_Key__float4x4__float4x4___ObjInit(this, time, value); }
};

}}}}


#endif
