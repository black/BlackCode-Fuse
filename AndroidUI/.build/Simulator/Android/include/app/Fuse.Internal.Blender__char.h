// This file was generated based on 'C:\ProgramData\Uno\Packages\FuseCore\0.11.3\Internal\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_FUSE_INTERNAL_BLENDER__CHAR_H__
#define __APP_FUSE_INTERNAL_BLENDER__CHAR_H__

#include <app/Uno.Object.h>
#include <Uno.h>

namespace app {
namespace Fuse {
namespace Internal {

struct Blender__char;

struct Blender__char__uType : ::uClassType
{
    ::uChar(*__fp_Add)(Blender__char*, ::uChar, ::uChar);
    ::uChar(*__fp_Weight)(Blender__char*, ::uChar, double);
};

Blender__char__uType* Blender__char__typeof();

struct Blender__char : ::uObject
{
    ::uChar Add(::uChar a, ::uChar b) { return (((Blender__char__uType*)this->__obj_type)->__fp_Add)(this, a, b); }
    ::uChar Weight(::uChar v, double w) { return (((Blender__char__uType*)this->__obj_type)->__fp_Weight)(this, v, w); }
};

}}}


#endif
