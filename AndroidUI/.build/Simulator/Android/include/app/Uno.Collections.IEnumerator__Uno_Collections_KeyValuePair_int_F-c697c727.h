// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Collections\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_UNO_COLLECTIONS_I_ENUMERATOR__UNO_COLLECTIONS_KEY_VALUE_PAIR_INT_F_C697C727_H__
#define __APP_UNO_COLLECTIONS_I_ENUMERATOR__UNO_COLLECTIONS_KEY_VALUE_PAIR_INT_F_C697C727_H__

#include <app/Uno.Collections.IEnumerator.h>
#include <app/Uno.IDisposable.h>
#include <app/Uno.Object.h>
#include <Uno.h>
namespace app { namespace Uno { namespace Collections { struct KeyValuePair__int__Fuse_Input_Capturer; } } }

namespace app {
namespace Uno {
namespace Collections {

::uInterfaceType* IEnumerator__Uno_Collections_KeyValuePair_int_Fuse_Input_Capturer___typeof();

struct IEnumerator__Uno_Collections_KeyValuePair_int_Fuse_Input_Capturer_
{
    ::app::Uno::Collections::KeyValuePair__int__Fuse_Input_Capturer(*__fp_get_Current)(void*);

    static ::app::Uno::Collections::KeyValuePair__int__Fuse_Input_Capturer Current(::uObject* __this);
};

}}}

#include <app/Uno.Collections.KeyValuePair__int__Fuse_Input_Capturer.h>

namespace app {
namespace Uno {
namespace Collections {

inline ::app::Uno::Collections::KeyValuePair__int__Fuse_Input_Capturer IEnumerator__Uno_Collections_KeyValuePair_int_Fuse_Input_Capturer_::Current(::uObject* __this) { return ((IEnumerator__Uno_Collections_KeyValuePair_int_Fuse_Input_Capturer_*)uGetInterfacePtr(__this, IEnumerator__Uno_Collections_KeyValuePair_int_Fuse_Input_Capturer___typeof()))->__fp_get_Current((::uByte*)__this + (__this->__obj_type->TypeType == uTypeTypeStruct ? sizeof(::uObject) : 0)); }

}}}


#endif
