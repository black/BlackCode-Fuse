// This file was generated based on 'C:\ProgramData\Uno\Packages\FuseCore\0.11.3\Internal\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_FUSE_INTERNAL_BLENDER__SHORT_H__
#define __APP_FUSE_INTERNAL_BLENDER__SHORT_H__

#include <app/Uno.Object.h>
#include <Uno.h>

namespace app {
namespace Fuse {
namespace Internal {

struct Blender__short;

struct Blender__short__uType : ::uClassType
{
    ::uShort(*__fp_Add)(Blender__short*, ::uShort, ::uShort);
    ::uShort(*__fp_Weight)(Blender__short*, ::uShort, double);
};

Blender__short__uType* Blender__short__typeof();

struct Blender__short : ::uObject
{
    ::uShort Add(::uShort a, ::uShort b) { return (((Blender__short__uType*)this->__obj_type)->__fp_Add)(this, a, b); }
    ::uShort Weight(::uShort v, double w) { return (((Blender__short__uType*)this->__obj_type)->__fp_Weight)(this, v, w); }
};

}}}


#endif
