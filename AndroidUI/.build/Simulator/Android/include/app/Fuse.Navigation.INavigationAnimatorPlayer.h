// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Navigation\0.11.3\Internal\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_FUSE_NAVIGATION_I_NAVIGATION_ANIMATOR_PLAYER_H__
#define __APP_FUSE_NAVIGATION_I_NAVIGATION_ANIMATOR_PLAYER_H__

#include <app/Uno.Object.h>
#include <Uno.h>

namespace app {
namespace Fuse {
namespace Navigation {

::uInterfaceType* INavigationAnimatorPlayer__typeof();

struct INavigationAnimatorPlayer
{
    void(*__fp_EnsureAtEnd)(void*);
    void(*__fp_Update)(void*);

    static void EnsureAtEnd(::uObject* __this) { ((INavigationAnimatorPlayer*)uGetInterfacePtr(__this, INavigationAnimatorPlayer__typeof()))->__fp_EnsureAtEnd((::uByte*)__this + (__this->__obj_type->TypeType == uTypeTypeStruct ? sizeof(::uObject) : 0)); }
    static void Update(::uObject* __this) { ((INavigationAnimatorPlayer*)uGetInterfacePtr(__this, INavigationAnimatorPlayer__typeof()))->__fp_Update((::uByte*)__this + (__this->__obj_type->TypeType == uTypeTypeStruct ? sizeof(::uObject) : 0)); }
};

}}}


#endif
