// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Collections\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_UNO_COLLECTIONS_I_ENUMERABLE__OUTRACKS_SIMULATOR_BYTECODE_BIND_VARIABLE_H__
#define __APP_UNO_COLLECTIONS_I_ENUMERABLE__OUTRACKS_SIMULATOR_BYTECODE_BIND_VARIABLE_H__

#include <app/Uno.Object.h>
#include <Uno.h>

namespace app {
namespace Uno {
namespace Collections {

::uInterfaceType* IEnumerable__Outracks_Simulator_Bytecode_BindVariable__typeof();

struct IEnumerable__Outracks_Simulator_Bytecode_BindVariable
{
    ::uObject*(*__fp_GetEnumerator)(void*);

    static ::uObject* GetEnumerator(::uObject* __this) { return ((IEnumerable__Outracks_Simulator_Bytecode_BindVariable*)uGetInterfacePtr(__this, IEnumerable__Outracks_Simulator_Bytecode_BindVariable__typeof()))->__fp_GetEnumerator((::uByte*)__this + (__this->__obj_type->TypeType == uTypeTypeStruct ? sizeof(::uObject) : 0)); }
};

}}}


#endif
