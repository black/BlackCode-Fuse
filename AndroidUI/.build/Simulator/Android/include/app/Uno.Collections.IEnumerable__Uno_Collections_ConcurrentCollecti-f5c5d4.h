// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Collections\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_UNO_COLLECTIONS_I_ENUMERABLE__UNO_COLLECTIONS_CONCURRENT_COLLECTI_F5C5D4_H__
#define __APP_UNO_COLLECTIONS_I_ENUMERABLE__UNO_COLLECTIONS_CONCURRENT_COLLECTI_F5C5D4_H__

#include <app/Uno.Object.h>
#include <Uno.h>

namespace app {
namespace Uno {
namespace Collections {

::uInterfaceType* IEnumerable__Uno_Collections_ConcurrentCollection1_ModItem_Uno_EventHandler___typeof();

struct IEnumerable__Uno_Collections_ConcurrentCollection1_ModItem_Uno_EventHandler_
{
    ::uObject*(*__fp_GetEnumerator)(void*);

    static ::uObject* GetEnumerator(::uObject* __this) { return ((IEnumerable__Uno_Collections_ConcurrentCollection1_ModItem_Uno_EventHandler_*)uGetInterfacePtr(__this, IEnumerable__Uno_Collections_ConcurrentCollection1_ModItem_Uno_EventHandler___typeof()))->__fp_GetEnumerator((::uByte*)__this + (__this->__obj_type->TypeType == uTypeTypeStruct ? sizeof(::uObject) : 0)); }
};

}}}


#endif
