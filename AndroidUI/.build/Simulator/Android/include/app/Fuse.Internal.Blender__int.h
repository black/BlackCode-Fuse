// This file was generated based on 'C:\ProgramData\Uno\Packages\FuseCore\0.11.3\Internal\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_FUSE_INTERNAL_BLENDER__INT_H__
#define __APP_FUSE_INTERNAL_BLENDER__INT_H__

#include <app/Uno.Object.h>
#include <Uno.h>

namespace app {
namespace Fuse {
namespace Internal {

struct Blender__int;

struct Blender__int__uType : ::uClassType
{
    int(*__fp_Add)(Blender__int*, int, int);
    int(*__fp_Weight)(Blender__int*, int, double);
};

Blender__int__uType* Blender__int__typeof();

struct Blender__int : ::uObject
{
    int Add(int a, int b) { return (((Blender__int__uType*)this->__obj_type)->__fp_Add)(this, a, b); }
    int Weight(int v, double w) { return (((Blender__int__uType*)this->__obj_type)->__fp_Weight)(this, v, w); }
};

}}}


#endif
