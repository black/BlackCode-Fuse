// This file was generated based on 'C:\ProgramData\Uno\Packages\FuseCore\0.11.3\Internal\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_FUSE_INTERNAL_BLENDER__BOOL_H__
#define __APP_FUSE_INTERNAL_BLENDER__BOOL_H__

#include <app/Uno.Object.h>
#include <Uno.h>

namespace app {
namespace Fuse {
namespace Internal {

struct Blender__bool;

struct Blender__bool__uType : ::uClassType
{
    bool(*__fp_Add)(Blender__bool*, bool, bool);
    bool(*__fp_Weight)(Blender__bool*, bool, double);
};

Blender__bool__uType* Blender__bool__typeof();

struct Blender__bool : ::uObject
{
    bool Add(bool a, bool b) { return (((Blender__bool__uType*)this->__obj_type)->__fp_Add)(this, a, b); }
    bool Weight(bool v, double w) { return (((Blender__bool__uType*)this->__obj_type)->__fp_Weight)(this, v, w); }
};

}}}


#endif
