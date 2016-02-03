// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Content\Splines\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_UNO_CONTENT_SPLINES_SPLINE__FLOAT4_H__
#define __APP_UNO_CONTENT_SPLINES_SPLINE__FLOAT4_H__

#include <app/Uno.Object.h>
#include <Uno.h>
namespace app { namespace Uno { struct Float4; } }

namespace app {
namespace Uno {
namespace Content {
namespace Splines {

struct Spline__float4;

struct Spline__float4__uType : ::uClassType
{
    double(*__fp_get_End)(Spline__float4*);
    double(*__fp_get_Start)(Spline__float4*);
    void(*__fp_Sample_1)(Spline__float4*, double, ::app::Uno::Float4*);
};

Spline__float4__uType* Spline__float4__typeof();

void Spline__float4___ObjInit(Spline__float4* __this);
::app::Uno::Float4 Spline__float4__get_First(Spline__float4* __this);
::app::Uno::Float4 Spline__float4__get_Last(Spline__float4* __this);
::app::Uno::Float4 Spline__float4__Sample(Spline__float4* __this, double time);

struct Spline__float4 : ::uObject
{
    void _ObjInit() { Spline__float4___ObjInit(this); }
    double End() { return (((Spline__float4__uType*)this->__obj_type)->__fp_get_End)(this); }
    ::app::Uno::Float4 First();
    ::app::Uno::Float4 Last();
    double Start() { return (((Spline__float4__uType*)this->__obj_type)->__fp_get_Start)(this); }
    ::app::Uno::Float4 Sample(double time);
    void Sample_1(double time, ::app::Uno::Float4* result) { (((Spline__float4__uType*)this->__obj_type)->__fp_Sample_1)(this, time, result); }
};

}}}}

#include <app/Uno.Float4.h>

namespace app {
namespace Uno {
namespace Content {
namespace Splines {

inline ::app::Uno::Float4 Spline__float4::First() { return Spline__float4__get_First(this); }
inline ::app::Uno::Float4 Spline__float4::Last() { return Spline__float4__get_Last(this); }
inline ::app::Uno::Float4 Spline__float4::Sample(double time) { return Spline__float4__Sample(this, time); }

}}}}


#endif
