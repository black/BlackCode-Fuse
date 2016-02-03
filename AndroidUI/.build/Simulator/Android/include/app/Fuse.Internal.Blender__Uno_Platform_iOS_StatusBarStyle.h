// This file was generated based on 'C:\ProgramData\Uno\Packages\FuseCore\0.11.3\Internal\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_FUSE_INTERNAL_BLENDER__UNO_PLATFORM_I_O_S_STATUS_BAR_STYLE_H__
#define __APP_FUSE_INTERNAL_BLENDER__UNO_PLATFORM_I_O_S_STATUS_BAR_STYLE_H__

#include <app/Uno.Object.h>
#include <Uno.h>

namespace app {
namespace Fuse {
namespace Internal {

struct Blender__Uno_Platform_iOS_StatusBarStyle;

struct Blender__Uno_Platform_iOS_StatusBarStyle__uType : ::uClassType
{
    int(*__fp_Add)(Blender__Uno_Platform_iOS_StatusBarStyle*, int, int);
    int(*__fp_Weight)(Blender__Uno_Platform_iOS_StatusBarStyle*, int, double);
};

Blender__Uno_Platform_iOS_StatusBarStyle__uType* Blender__Uno_Platform_iOS_StatusBarStyle__typeof();

struct Blender__Uno_Platform_iOS_StatusBarStyle : ::uObject
{
    int Add(int a, int b) { return (((Blender__Uno_Platform_iOS_StatusBarStyle__uType*)this->__obj_type)->__fp_Add)(this, a, b); }
    int Weight(int v, double w) { return (((Blender__Uno_Platform_iOS_StatusBarStyle__uType*)this->__obj_type)->__fp_Weight)(this, v, w); }
};

}}}


#endif
