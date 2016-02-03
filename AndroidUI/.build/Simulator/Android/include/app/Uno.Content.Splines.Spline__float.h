// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Content\Splines\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_UNO_CONTENT_SPLINES_SPLINE__FLOAT_H__
#define __APP_UNO_CONTENT_SPLINES_SPLINE__FLOAT_H__

#include <app/Uno.Object.h>
#include <Uno.h>

namespace app {
namespace Uno {
namespace Content {
namespace Splines {

struct Spline__float;

struct Spline__float__uType : ::uClassType
{
    double(*__fp_get_End)(Spline__float*);
    double(*__fp_get_Start)(Spline__float*);
    void(*__fp_Sample_1)(Spline__float*, double, float*);
};

Spline__float__uType* Spline__float__typeof();

void Spline__float___ObjInit(Spline__float* __this);
float Spline__float__get_First(Spline__float* __this);
float Spline__float__get_Last(Spline__float* __this);
float Spline__float__Sample(Spline__float* __this, double time);

struct Spline__float : ::uObject
{
    void _ObjInit() { Spline__float___ObjInit(this); }
    double End() { return (((Spline__float__uType*)this->__obj_type)->__fp_get_End)(this); }
    float First() { return Spline__float__get_First(this); }
    float Last() { return Spline__float__get_Last(this); }
    double Start() { return (((Spline__float__uType*)this->__obj_type)->__fp_get_Start)(this); }
    float Sample(double time) { return Spline__float__Sample(this, time); }
    void Sample_1(double time, float* result) { (((Spline__float__uType*)this->__obj_type)->__fp_Sample_1)(this, time, result); }
};

}}}}


#endif
