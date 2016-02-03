// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Collections\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_UNO_COLLECTIONS_I_ENUMERATOR__BYTE___H__
#define __APP_UNO_COLLECTIONS_I_ENUMERATOR__BYTE___H__

#include <app/Uno.Collections.IEnumerator.h>
#include <app/Uno.IDisposable.h>
#include <app/Uno.Object.h>
#include <Uno.h>

namespace app {
namespace Uno {
namespace Collections {

::uInterfaceType* IEnumerator__byte____typeof();

struct IEnumerator__byte__
{
    ::uArray*(*__fp_get_Current)(void*);

    static ::uArray* Current(::uObject* __this) { return ((IEnumerator__byte__*)uGetInterfacePtr(__this, IEnumerator__byte____typeof()))->__fp_get_Current((::uByte*)__this + (__this->__obj_type->TypeType == uTypeTypeStruct ? sizeof(::uObject) : 0)); }
};

}}}


#endif
