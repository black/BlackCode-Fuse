// This file was generated based on 'C:\ProgramData\Uno\Packages\FuseCore\0.11.3\Internal\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_FUSE_INTERNAL_BLENDER__FLOAT_H__
#define __APP_FUSE_INTERNAL_BLENDER__FLOAT_H__

#include <app/Uno.Object.h>
#include <Uno.h>

namespace app {
namespace Fuse {
namespace Internal {

struct Blender__float;

struct Blender__float__uType : ::uClassType
{
    float(*__fp_Add)(Blender__float*, float, float);
    float(*__fp_get_One)(Blender__float*);
    float(*__fp_get_Zero)(Blender__float*);
    double(*__fp_Length)(Blender__float*, float);
    float(*__fp_Lerp)(Blender__float*, float, float, double);
    float(*__fp_Sub)(Blender__float*, float, float);
    float(*__fp_ToUnit)(Blender__float*, float, double*);
    float(*__fp_Weight)(Blender__float*, float, double);
};

Blender__float__uType* Blender__float__typeof();

void Blender__float___ObjInit(Blender__float* __this);
float Blender__float__UnitWeight(Blender__float* __this, float v, double w);

struct Blender__float : ::uObject
{
    void _ObjInit() { Blender__float___ObjInit(this); }
    float Add(float a, float b) { return (((Blender__float__uType*)this->__obj_type)->__fp_Add)(this, a, b); }
    float One() { return (((Blender__float__uType*)this->__obj_type)->__fp_get_One)(this); }
    float Zero() { return (((Blender__float__uType*)this->__obj_type)->__fp_get_Zero)(this); }
    double Length(float a) { return (((Blender__float__uType*)this->__obj_type)->__fp_Length)(this, a); }
    float Lerp(float a, float b, double d) { return (((Blender__float__uType*)this->__obj_type)->__fp_Lerp)(this, a, b, d); }
    float Sub(float a, float b) { return (((Blender__float__uType*)this->__obj_type)->__fp_Sub)(this, a, b); }
    float ToUnit(float a, double* length) { return (((Blender__float__uType*)this->__obj_type)->__fp_ToUnit)(this, a, length); }
    float UnitWeight(float v, double w) { return Blender__float__UnitWeight(this, v, w); }
    float Weight(float v, double w) { return (((Blender__float__uType*)this->__obj_type)->__fp_Weight)(this, v, w); }
};

}}}


#endif
