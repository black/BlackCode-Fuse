// This file was generated based on 'C:\ProgramData\Uno\Packages\FuseCore\0.11.3\Internal\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_FUSE_INTERNAL_BLENDER__OBJECT_H__
#define __APP_FUSE_INTERNAL_BLENDER__OBJECT_H__

#include <app/Uno.Object.h>
#include <Uno.h>

namespace app {
namespace Fuse {
namespace Internal {

struct Blender__object;

struct Blender__object__uType : ::uClassType
{
    ::uObject*(*__fp_Add)(Blender__object*, ::uObject*, ::uObject*);
    ::uObject*(*__fp_Weight)(Blender__object*, ::uObject*, double);
};

Blender__object__uType* Blender__object__typeof();

struct Blender__object : ::uObject
{
    ::uObject* Add(::uObject* a, ::uObject* b) { return (((Blender__object__uType*)this->__obj_type)->__fp_Add)(this, a, b); }
    ::uObject* Weight(::uObject* v, double w) { return (((Blender__object__uType*)this->__obj_type)->__fp_Weight)(this, v, w); }
};

}}}


#endif
