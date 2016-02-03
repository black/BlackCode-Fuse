// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Collections\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_UNO_COLLECTIONS_I_ENUMERATOR__FUSE_I_O_S_STATUS_BAR_CONFIG_H__
#define __APP_UNO_COLLECTIONS_I_ENUMERATOR__FUSE_I_O_S_STATUS_BAR_CONFIG_H__

#include <app/Uno.Collections.IEnumerator.h>
#include <app/Uno.IDisposable.h>
#include <app/Uno.Object.h>
#include <Uno.h>
namespace app { namespace Fuse { namespace iOS { struct StatusBarConfig; } } }

namespace app {
namespace Uno {
namespace Collections {

::uInterfaceType* IEnumerator__Fuse_iOS_StatusBarConfig__typeof();

struct IEnumerator__Fuse_iOS_StatusBarConfig
{
    ::app::Fuse::iOS::StatusBarConfig*(*__fp_get_Current)(void*);

    static ::app::Fuse::iOS::StatusBarConfig* Current(::uObject* __this) { return ((IEnumerator__Fuse_iOS_StatusBarConfig*)uGetInterfacePtr(__this, IEnumerator__Fuse_iOS_StatusBarConfig__typeof()))->__fp_get_Current((::uByte*)__this + (__this->__obj_type->TypeType == uTypeTypeStruct ? sizeof(::uObject) : 0)); }
};

}}}


#endif
