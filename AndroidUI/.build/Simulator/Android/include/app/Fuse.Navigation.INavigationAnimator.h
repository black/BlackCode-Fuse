// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Navigation\0.11.3\Internal\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_FUSE_NAVIGATION_I_NAVIGATION_ANIMATOR_H__
#define __APP_FUSE_NAVIGATION_I_NAVIGATION_ANIMATOR_H__

#include <app/Uno.Object.h>
#include <Uno.h>

namespace app {
namespace Fuse {
namespace Navigation {

::uInterfaceType* INavigationAnimator__typeof();

struct INavigationAnimator
{
    void(*__fp_Update)(void*, double, double);

    static void Update(::uObject* __this, double progress, double prevProgress) { ((INavigationAnimator*)uGetInterfacePtr(__this, INavigationAnimator__typeof()))->__fp_Update((::uByte*)__this + (__this->__obj_type->TypeType == uTypeTypeStruct ? sizeof(::uObject) : 0), progress, prevProgress); }
};

}}}


#endif
