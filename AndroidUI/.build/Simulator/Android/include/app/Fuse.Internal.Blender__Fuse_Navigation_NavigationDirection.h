// This file was generated based on 'C:\ProgramData\Uno\Packages\FuseCore\0.11.3\Internal\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_FUSE_INTERNAL_BLENDER__FUSE_NAVIGATION_NAVIGATION_DIRECTION_H__
#define __APP_FUSE_INTERNAL_BLENDER__FUSE_NAVIGATION_NAVIGATION_DIRECTION_H__

#include <app/Uno.Object.h>
#include <Uno.h>

namespace app {
namespace Fuse {
namespace Internal {

struct Blender__Fuse_Navigation_NavigationDirection;

struct Blender__Fuse_Navigation_NavigationDirection__uType : ::uClassType
{
    int(*__fp_Add)(Blender__Fuse_Navigation_NavigationDirection*, int, int);
    int(*__fp_Weight)(Blender__Fuse_Navigation_NavigationDirection*, int, double);
};

Blender__Fuse_Navigation_NavigationDirection__uType* Blender__Fuse_Navigation_NavigationDirection__typeof();

struct Blender__Fuse_Navigation_NavigationDirection : ::uObject
{
    int Add(int a, int b) { return (((Blender__Fuse_Navigation_NavigationDirection__uType*)this->__obj_type)->__fp_Add)(this, a, b); }
    int Weight(int v, double w) { return (((Blender__Fuse_Navigation_NavigationDirection__uType*)this->__obj_type)->__fp_Weight)(this, v, w); }
};

}}}


#endif
