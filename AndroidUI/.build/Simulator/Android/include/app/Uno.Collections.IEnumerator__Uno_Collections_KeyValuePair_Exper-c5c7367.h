// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Collections\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_UNO_COLLECTIONS_I_ENUMERATOR__UNO_COLLECTIONS_KEY_VALUE_PAIR_EXPER_C5C7367_H__
#define __APP_UNO_COLLECTIONS_I_ENUMERATOR__UNO_COLLECTIONS_KEY_VALUE_PAIR_EXPER_C5C7367_H__

#include <app/Uno.Collections.IEnumerator.h>
#include <app/Uno.IDisposable.h>
#include <app/Uno.Object.h>
#include <Uno.h>
namespace app { namespace Uno { namespace Collections { struct KeyValuePair__Experimental_Cache_DiskCacheEntry__Experimental_Cache_RecordHeader; } } }

namespace app {
namespace Uno {
namespace Collections {

::uInterfaceType* IEnumerator__Uno_Collections_KeyValuePair_Experimental_Cache_DiskCacheEntry_Experimental_Cache_RecordHeader___typeof();

struct IEnumerator__Uno_Collections_KeyValuePair_Experimental_Cache_DiskCacheEntry_Experimental_Cache_RecordHeader_
{
    ::app::Uno::Collections::KeyValuePair__Experimental_Cache_DiskCacheEntry__Experimental_Cache_RecordHeader(*__fp_get_Current)(void*);

    static ::app::Uno::Collections::KeyValuePair__Experimental_Cache_DiskCacheEntry__Experimental_Cache_RecordHeader Current(::uObject* __this);
};

}}}

#include <app/Uno.Collections.KeyValuePair__Experimental_Cache_DiskCacheEntry-bfbae3c6.h>

namespace app {
namespace Uno {
namespace Collections {

inline ::app::Uno::Collections::KeyValuePair__Experimental_Cache_DiskCacheEntry__Experimental_Cache_RecordHeader IEnumerator__Uno_Collections_KeyValuePair_Experimental_Cache_DiskCacheEntry_Experimental_Cache_RecordHeader_::Current(::uObject* __this) { return ((IEnumerator__Uno_Collections_KeyValuePair_Experimental_Cache_DiskCacheEntry_Experimental_Cache_RecordHeader_*)uGetInterfacePtr(__this, IEnumerator__Uno_Collections_KeyValuePair_Experimental_Cache_DiskCacheEntry_Experimental_Cache_RecordHeader___typeof()))->__fp_get_Current((::uByte*)__this + (__this->__obj_type->TypeType == uTypeTypeStruct ? sizeof(::uObject) : 0)); }

}}}


#endif
