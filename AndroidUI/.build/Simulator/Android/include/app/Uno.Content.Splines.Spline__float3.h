// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Content\Splines\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_UNO_CONTENT_SPLINES_SPLINE__FLOAT3_H__
#define __APP_UNO_CONTENT_SPLINES_SPLINE__FLOAT3_H__

#include <app/Uno.Object.h>
#include <Uno.h>
namespace app { namespace Uno { struct Float3; } }

namespace app {
namespace Uno {
namespace Content {
namespace Splines {

struct Spline__float3;

struct Spline__float3__uType : ::uClassType
{
    double(*__fp_get_End)(Spline__float3*);
    double(*__fp_get_Start)(Spline__float3*);
    void(*__fp_Sample_1)(Spline__float3*, double, ::app::Uno::Float3*);
};

Spline__float3__uType* Spline__float3__typeof();

void Spline__float3___ObjInit(Spline__float3* __this);
::app::Uno::Float3 Spline__float3__get_First(Spline__float3* __this);
::app::Uno::Float3 Spline__float3__get_Last(Spline__float3* __this);
::app::Uno::Float3 Spline__float3__Sample(Spline__float3* __this, double time);

struct Spline__float3 : ::uObject
{
    void _ObjInit() { Spline__float3___ObjInit(this); }
    double End() { return (((Spline__float3__uType*)this->__obj_type)->__fp_get_End)(this); }
    ::app::Uno::Float3 First();
    ::app::Uno::Float3 Last();
    double Start() { return (((Spline__float3__uType*)this->__obj_type)->__fp_get_Start)(this); }
    ::app::Uno::Float3 Sample(double time);
    void Sample_1(double time, ::app::Uno::Float3* result) { (((Spline__float3__uType*)this->__obj_type)->__fp_Sample_1)(this, time, result); }
};

}}}}

#include <app/Uno.Float3.h>

namespace app {
namespace Uno {
namespace Content {
namespace Splines {

inline ::app::Uno::Float3 Spline__float3::First() { return Spline__float3__get_First(this); }
inline ::app::Uno::Float3 Spline__float3::Last() { return Spline__float3__get_Last(this); }
inline ::app::Uno::Float3 Spline__float3::Sample(double time) { return Spline__float3__Sample(this, time); }

}}}}


#endif
