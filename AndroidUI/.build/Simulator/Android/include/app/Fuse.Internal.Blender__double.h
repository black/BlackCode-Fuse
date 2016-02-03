// This file was generated based on 'C:\ProgramData\Uno\Packages\FuseCore\0.11.3\Internal\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_FUSE_INTERNAL_BLENDER__DOUBLE_H__
#define __APP_FUSE_INTERNAL_BLENDER__DOUBLE_H__

#include <app/Uno.Object.h>
#include <Uno.h>

namespace app {
namespace Fuse {
namespace Internal {

struct Blender__double;

struct Blender__double__uType : ::uClassType
{
    double(*__fp_Add)(Blender__double*, double, double);
    double(*__fp_get_One)(Blender__double*);
    double(*__fp_get_Zero)(Blender__double*);
    double(*__fp_Length)(Blender__double*, double);
    double(*__fp_Lerp)(Blender__double*, double, double, double);
    double(*__fp_Sub)(Blender__double*, double, double);
    double(*__fp_ToUnit)(Blender__double*, double, double*);
    double(*__fp_Weight)(Blender__double*, double, double);
};

Blender__double__uType* Blender__double__typeof();

void Blender__double___ObjInit(Blender__double* __this);
double Blender__double__UnitWeight(Blender__double* __this, double v, double w);

struct Blender__double : ::uObject
{
    void _ObjInit() { Blender__double___ObjInit(this); }
    double Add(double a, double b) { return (((Blender__double__uType*)this->__obj_type)->__fp_Add)(this, a, b); }
    double One() { return (((Blender__double__uType*)this->__obj_type)->__fp_get_One)(this); }
    double Zero() { return (((Blender__double__uType*)this->__obj_type)->__fp_get_Zero)(this); }
    double Length(double a) { return (((Blender__double__uType*)this->__obj_type)->__fp_Length)(this, a); }
    double Lerp(double a, double b, double d) { return (((Blender__double__uType*)this->__obj_type)->__fp_Lerp)(this, a, b, d); }
    double Sub(double a, double b) { return (((Blender__double__uType*)this->__obj_type)->__fp_Sub)(this, a, b); }
    double ToUnit(double a, double* length) { return (((Blender__double__uType*)this->__obj_type)->__fp_ToUnit)(this, a, length); }
    double UnitWeight(double v, double w) { return Blender__double__UnitWeight(this, v, w); }
    double Weight(double v, double w) { return (((Blender__double__uType*)this->__obj_type)->__fp_Weight)(this, v, w); }
};

}}}


#endif
