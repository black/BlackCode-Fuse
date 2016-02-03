// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Collections\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_UNO_COLLECTIONS_I_ENUMERATOR__UNO_COLLECTIONS_KEY_VALUE_PAIR_STRIN_1AE5A232_H__
#define __APP_UNO_COLLECTIONS_I_ENUMERATOR__UNO_COLLECTIONS_KEY_VALUE_PAIR_STRIN_1AE5A232_H__

#include <app/Uno.Collections.IEnumerator.h>
#include <app/Uno.IDisposable.h>
#include <app/Uno.Object.h>
#include <Uno.h>
namespace app { namespace Uno { namespace Collections { struct KeyValuePair__string__Outracks_Simulator_ByteFileSource; } } }

namespace app {
namespace Uno {
namespace Collections {

::uInterfaceType* IEnumerator__Uno_Collections_KeyValuePair_string_Outracks_Simulator_ByteFileSource___typeof();

struct IEnumerator__Uno_Collections_KeyValuePair_string_Outracks_Simulator_ByteFileSource_
{
    ::app::Uno::Collections::KeyValuePair__string__Outracks_Simulator_ByteFileSource(*__fp_get_Current)(void*);

    static ::app::Uno::Collections::KeyValuePair__string__Outracks_Simulator_ByteFileSource Current(::uObject* __this);
};

}}}

#include <app/Uno.Collections.KeyValuePair__string__Outracks_Simulator_ByteFileSource.h>

namespace app {
namespace Uno {
namespace Collections {

inline ::app::Uno::Collections::KeyValuePair__string__Outracks_Simulator_ByteFileSource IEnumerator__Uno_Collections_KeyValuePair_string_Outracks_Simulator_ByteFileSource_::Current(::uObject* __this) { return ((IEnumerator__Uno_Collections_KeyValuePair_string_Outracks_Simulator_ByteFileSource_*)uGetInterfacePtr(__this, IEnumerator__Uno_Collections_KeyValuePair_string_Outracks_Simulator_ByteFileSource___typeof()))->__fp_get_Current((::uByte*)__this + (__this->__obj_type->TypeType == uTypeTypeStruct ? sizeof(::uObject) : 0)); }

}}}


#endif
