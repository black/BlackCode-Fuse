// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Collections\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_UNO_COLLECTIONS_I_ENUMERATOR__UNO_COLLECTIONS_KEY_VALUE_PAIR_INT_F_781FA870_H__
#define __APP_UNO_COLLECTIONS_I_ENUMERATOR__UNO_COLLECTIONS_KEY_VALUE_PAIR_INT_F_781FA870_H__

#include <app/Uno.Collections.IEnumerator.h>
#include <app/Uno.IDisposable.h>
#include <app/Uno.Object.h>
#include <Uno.h>
namespace app { namespace Uno { namespace Collections { struct KeyValuePair__int__Fuse_Input_Pointer_PointerRecord; } } }

namespace app {
namespace Uno {
namespace Collections {

::uInterfaceType* IEnumerator__Uno_Collections_KeyValuePair_int_Fuse_Input_Pointer_PointerRecord___typeof();

struct IEnumerator__Uno_Collections_KeyValuePair_int_Fuse_Input_Pointer_PointerRecord_
{
    ::app::Uno::Collections::KeyValuePair__int__Fuse_Input_Pointer_PointerRecord(*__fp_get_Current)(void*);

    static ::app::Uno::Collections::KeyValuePair__int__Fuse_Input_Pointer_PointerRecord Current(::uObject* __this);
};

}}}

#include <app/Uno.Collections.KeyValuePair__int__Fuse_Input_Pointer_PointerRecord.h>

namespace app {
namespace Uno {
namespace Collections {

inline ::app::Uno::Collections::KeyValuePair__int__Fuse_Input_Pointer_PointerRecord IEnumerator__Uno_Collections_KeyValuePair_int_Fuse_Input_Pointer_PointerRecord_::Current(::uObject* __this) { return ((IEnumerator__Uno_Collections_KeyValuePair_int_Fuse_Input_Pointer_PointerRecord_*)uGetInterfacePtr(__this, IEnumerator__Uno_Collections_KeyValuePair_int_Fuse_Input_Pointer_PointerRecord___typeof()))->__fp_get_Current((::uByte*)__this + (__this->__obj_type->TypeType == uTypeTypeStruct ? sizeof(::uObject) : 0)); }

}}}


#endif
