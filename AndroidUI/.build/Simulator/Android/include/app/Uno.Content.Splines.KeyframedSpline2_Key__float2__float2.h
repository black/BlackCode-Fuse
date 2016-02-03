// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Content\Splines\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_UNO_CONTENT_SPLINES_KEYFRAMED_SPLINE2_KEY__FLOAT2__FLOAT2_H__
#define __APP_UNO_CONTENT_SPLINES_KEYFRAMED_SPLINE2_KEY__FLOAT2__FLOAT2_H__

#include <app/Uno.Float2.h>
#include <app/Uno.Object.h>
#include <Uno.h>

namespace app {
namespace Uno {
namespace Content {
namespace Splines {

struct KeyframedSpline2_Key__float2__float2;

struct KeyframedSpline2_Key__float2__float2__uType : ::uStructType
{
};

KeyframedSpline2_Key__float2__float2__uType* KeyframedSpline2_Key__float2__float2__typeof();

void KeyframedSpline2_Key__float2__float2___ObjInit(KeyframedSpline2_Key__float2__float2* __this, double time, ::app::Uno::Float2 value);
KeyframedSpline2_Key__float2__float2 KeyframedSpline2_Key__float2__float2__New_1(::uStatic* __this, double time, ::app::Uno::Float2 value);

struct KeyframedSpline2_Key__float2__float2
{
    double Time;
    ::app::Uno::Float2 Value;

    void _ObjInit(double time, ::app::Uno::Float2 value) { KeyframedSpline2_Key__float2__float2___ObjInit(this, time, value); }
};

}}}}


#endif
