// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Collections\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_UNO_COLLECTIONS_I_ENUMERATOR__UNO_PLATFORM_KEY_H__
#define __APP_UNO_COLLECTIONS_I_ENUMERATOR__UNO_PLATFORM_KEY_H__

#include <app/Uno.Collections.IEnumerator.h>
#include <app/Uno.IDisposable.h>
#include <app/Uno.Object.h>
#include <Uno.h>

namespace app {
namespace Uno {
namespace Collections {

::uInterfaceType* IEnumerator__Uno_Platform_Key__typeof();

struct IEnumerator__Uno_Platform_Key
{
    int(*__fp_get_Current)(void*);

    static int Current(::uObject* __this) { return ((IEnumerator__Uno_Platform_Key*)uGetInterfacePtr(__this, IEnumerator__Uno_Platform_Key__typeof()))->__fp_get_Current((::uByte*)__this + (__this->__obj_type->TypeType == uTypeTypeStruct ? sizeof(::uObject) : 0)); }
};

}}}


#endif
