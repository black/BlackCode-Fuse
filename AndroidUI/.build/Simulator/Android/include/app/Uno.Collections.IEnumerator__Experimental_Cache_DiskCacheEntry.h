// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Collections\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_UNO_COLLECTIONS_I_ENUMERATOR__EXPERIMENTAL_CACHE_DISK_CACHE_ENTRY_H__
#define __APP_UNO_COLLECTIONS_I_ENUMERATOR__EXPERIMENTAL_CACHE_DISK_CACHE_ENTRY_H__

#include <app/Uno.Collections.IEnumerator.h>
#include <app/Uno.IDisposable.h>
#include <app/Uno.Object.h>
#include <Uno.h>
namespace app { namespace Experimental { namespace Cache { struct DiskCacheEntry; } } }

namespace app {
namespace Uno {
namespace Collections {

::uInterfaceType* IEnumerator__Experimental_Cache_DiskCacheEntry__typeof();

struct IEnumerator__Experimental_Cache_DiskCacheEntry
{
    ::app::Experimental::Cache::DiskCacheEntry*(*__fp_get_Current)(void*);

    static ::app::Experimental::Cache::DiskCacheEntry* Current(::uObject* __this) { return ((IEnumerator__Experimental_Cache_DiskCacheEntry*)uGetInterfacePtr(__this, IEnumerator__Experimental_Cache_DiskCacheEntry__typeof()))->__fp_get_Current((::uByte*)__this + (__this->__obj_type->TypeType == uTypeTypeStruct ? sizeof(::uObject) : 0)); }
};

}}}


#endif
