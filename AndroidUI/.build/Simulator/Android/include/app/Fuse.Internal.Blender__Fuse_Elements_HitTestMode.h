// This file was generated based on 'C:\ProgramData\Uno\Packages\FuseCore\0.11.3\Internal\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_FUSE_INTERNAL_BLENDER__FUSE_ELEMENTS_HIT_TEST_MODE_H__
#define __APP_FUSE_INTERNAL_BLENDER__FUSE_ELEMENTS_HIT_TEST_MODE_H__

#include <app/Uno.Object.h>
#include <Uno.h>

namespace app {
namespace Fuse {
namespace Internal {

struct Blender__Fuse_Elements_HitTestMode;

struct Blender__Fuse_Elements_HitTestMode__uType : ::uClassType
{
    int(*__fp_Add)(Blender__Fuse_Elements_HitTestMode*, int, int);
    int(*__fp_Weight)(Blender__Fuse_Elements_HitTestMode*, int, double);
};

Blender__Fuse_Elements_HitTestMode__uType* Blender__Fuse_Elements_HitTestMode__typeof();

struct Blender__Fuse_Elements_HitTestMode : ::uObject
{
    int Add(int a, int b) { return (((Blender__Fuse_Elements_HitTestMode__uType*)this->__obj_type)->__fp_Add)(this, a, b); }
    int Weight(int v, double w) { return (((Blender__Fuse_Elements_HitTestMode__uType*)this->__obj_type)->__fp_Weight)(this, v, w); }
};

}}}


#endif
