// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Collections\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_UNO_COLLECTIONS_I_ENUMERATOR__FUSE_ANIMATIONS_MIXER_HANDLE_UNO_PL_5087D200_H__
#define __APP_UNO_COLLECTIONS_I_ENUMERATOR__FUSE_ANIMATIONS_MIXER_HANDLE_UNO_PL_5087D200_H__

#include <app/Uno.Collections.IEnumerator.h>
#include <app/Uno.IDisposable.h>
#include <app/Uno.Object.h>
#include <Uno.h>
namespace app { namespace Fuse { namespace Animations { struct MixerHandle__Uno_Platform_iOS_StatusBarStyle; } } }

namespace app {
namespace Uno {
namespace Collections {

::uInterfaceType* IEnumerator__Fuse_Animations_MixerHandle_Uno_Platform_iOS_StatusBarStyle___typeof();

struct IEnumerator__Fuse_Animations_MixerHandle_Uno_Platform_iOS_StatusBarStyle_
{
    ::app::Fuse::Animations::MixerHandle__Uno_Platform_iOS_StatusBarStyle*(*__fp_get_Current)(void*);

    static ::app::Fuse::Animations::MixerHandle__Uno_Platform_iOS_StatusBarStyle* Current(::uObject* __this) { return ((IEnumerator__Fuse_Animations_MixerHandle_Uno_Platform_iOS_StatusBarStyle_*)uGetInterfacePtr(__this, IEnumerator__Fuse_Animations_MixerHandle_Uno_Platform_iOS_StatusBarStyle___typeof()))->__fp_get_Current((::uByte*)__this + (__this->__obj_type->TypeType == uTypeTypeStruct ? sizeof(::uObject) : 0)); }
};

}}}


#endif
