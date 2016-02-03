// This file was generated based on 'C:\ProgramData\Uno\Packages\FuseCore\0.11.3\Internal\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_FUSE_INTERNAL_BLENDER__LONG_H__
#define __APP_FUSE_INTERNAL_BLENDER__LONG_H__

#include <app/Uno.Object.h>
#include <Uno.h>

namespace app {
namespace Fuse {
namespace Internal {

struct Blender__long;

struct Blender__long__uType : ::uClassType
{
    ::uLong(*__fp_Add)(Blender__long*, ::uLong, ::uLong);
    ::uLong(*__fp_Weight)(Blender__long*, ::uLong, double);
};

Blender__long__uType* Blender__long__typeof();

struct Blender__long : ::uObject
{
    ::uLong Add(::uLong a, ::uLong b) { return (((Blender__long__uType*)this->__obj_type)->__fp_Add)(this, a, b); }
    ::uLong Weight(::uLong v, double w) { return (((Blender__long__uType*)this->__obj_type)->__fp_Weight)(this, v, w); }
};

}}}


#endif
