// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Collections\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_UNO_COLLECTIONS_I_ENUMERABLE__FUSE_INPUT_POINTER_P_E_L_HOLDER_H__
#define __APP_UNO_COLLECTIONS_I_ENUMERABLE__FUSE_INPUT_POINTER_P_E_L_HOLDER_H__

#include <app/Uno.Object.h>
#include <Uno.h>

namespace app {
namespace Uno {
namespace Collections {

::uInterfaceType* IEnumerable__Fuse_Input_Pointer_PELHolder__typeof();

struct IEnumerable__Fuse_Input_Pointer_PELHolder
{
    ::uObject*(*__fp_GetEnumerator)(void*);

    static ::uObject* GetEnumerator(::uObject* __this) { return ((IEnumerable__Fuse_Input_Pointer_PELHolder*)uGetInterfacePtr(__this, IEnumerable__Fuse_Input_Pointer_PELHolder__typeof()))->__fp_GetEnumerator((::uByte*)__this + (__this->__obj_type->TypeType == uTypeTypeStruct ? sizeof(::uObject) : 0)); }
};

}}}


#endif
