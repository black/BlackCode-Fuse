// This file was generated based on 'C:\ProgramData\Uno\Packages\FuseCore\0.11.3\Internal\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_FUSE_INTERNAL_BLENDER__STRING_H__
#define __APP_FUSE_INTERNAL_BLENDER__STRING_H__

#include <app/Uno.Object.h>
#include <Uno.h>

namespace app {
namespace Fuse {
namespace Internal {

struct Blender__string;

struct Blender__string__uType : ::uClassType
{
    ::uString*(*__fp_Add)(Blender__string*, ::uString*, ::uString*);
    ::uString*(*__fp_Weight)(Blender__string*, ::uString*, double);
};

Blender__string__uType* Blender__string__typeof();

struct Blender__string : ::uObject
{
    ::uString* Add(::uString* a, ::uString* b) { return (((Blender__string__uType*)this->__obj_type)->__fp_Add)(this, a, b); }
    ::uString* Weight(::uString* v, double w) { return (((Blender__string__uType*)this->__obj_type)->__fp_Weight)(this, v, w); }
};

}}}


#endif
