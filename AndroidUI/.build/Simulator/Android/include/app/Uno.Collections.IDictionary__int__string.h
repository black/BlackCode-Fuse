// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Collections\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_UNO_COLLECTIONS_I_DICTIONARY__INT__STRING_H__
#define __APP_UNO_COLLECTIONS_I_DICTIONARY__INT__STRING_H__

#include <app/Uno.Collections.IEnumerable__Uno_Collections_KeyValuePair_int_string_.h>
#include <app/Uno.Object.h>
#include <Uno.h>

namespace app {
namespace Uno {
namespace Collections {

::uInterfaceType* IDictionary__int__string__typeof();

struct IDictionary__int__string
{
    bool(*__fp_TryGetValue)(void*, int, ::uString**);

    static bool TryGetValue(::uObject* __this, int key, ::uString** value) { return ((IDictionary__int__string*)uGetInterfacePtr(__this, IDictionary__int__string__typeof()))->__fp_TryGetValue((::uByte*)__this + (__this->__obj_type->TypeType == uTypeTypeStruct ? sizeof(::uObject) : 0), key, value); }
};

}}}


#endif
