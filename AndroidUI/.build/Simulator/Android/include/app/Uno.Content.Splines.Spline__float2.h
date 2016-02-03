// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Content\Splines\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_UNO_CONTENT_SPLINES_SPLINE__FLOAT2_H__
#define __APP_UNO_CONTENT_SPLINES_SPLINE__FLOAT2_H__

#include <app/Uno.Object.h>
#include <Uno.h>
namespace app { namespace Uno { struct Float2; } }

namespace app {
namespace Uno {
namespace Content {
namespace Splines {

struct Spline__float2;

struct Spline__float2__uType : ::uClassType
{
    double(*__fp_get_End)(Spline__float2*);
    double(*__fp_get_Start)(Spline__float2*);
    void(*__fp_Sample_1)(Spline__float2*, double, ::app::Uno::Float2*);
};

Spline__float2__uType* Spline__float2__typeof();

void Spline__float2___ObjInit(Spline__float2* __this);
::app::Uno::Float2 Spline__float2__get_First(Spline__float2* __this);
::app::Uno::Float2 Spline__float2__get_Last(Spline__float2* __this);
::app::Uno::Float2 Spline__float2__Sample(Spline__float2* __this, double time);

struct Spline__float2 : ::uObject
{
    void _ObjInit() { Spline__float2___ObjInit(this); }
    double End() { return (((Spline__float2__uType*)this->__obj_type)->__fp_get_End)(this); }
    ::app::Uno::Float2 First();
    ::app::Uno::Float2 Last();
    double Start() { return (((Spline__float2__uType*)this->__obj_type)->__fp_get_Start)(this); }
    ::app::Uno::Float2 Sample(double time);
    void Sample_1(double time, ::app::Uno::Float2* result) { (((Spline__float2__uType*)this->__obj_type)->__fp_Sample_1)(this, time, result); }
};

}}}}

#include <app/Uno.Float2.h>

namespace app {
namespace Uno {
namespace Content {
namespace Splines {

inline ::app::Uno::Float2 Spline__float2::First() { return Spline__float2__get_First(this); }
inline ::app::Uno::Float2 Spline__float2::Last() { return Spline__float2__get_Last(this); }
inline ::app::Uno::Float2 Spline__float2::Sample(double time) { return Spline__float2__Sample(this, time); }

}}}}


#endif
