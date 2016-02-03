// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Collections\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_UNO_COLLECTIONS_DICTIONARY2_VALUE_COLLECTION__STRING__EXPERIMENT_20952A3_H__
#define __APP_UNO_COLLECTIONS_DICTIONARY2_VALUE_COLLECTION__STRING__EXPERIMENT_20952A3_H__

#include <app/Uno.Collections.IEnumerable__Experimental_Cache_DiskCacheEntry.h>
#include <app/Uno.Object.h>
#include <Uno.h>
namespace app { namespace Experimental { namespace Cache { struct DiskCacheEntry; } } }
namespace app { namespace Uno { namespace Collections { struct Dictionary__string__Experimental_Cache_DiskCacheEntry; } } }
namespace app { namespace Uno { namespace Collections { struct Dictionary2_ValueCollection_Enumerator__string__Experimental_Cache_DiskCacheEntry; } } }

namespace app {
namespace Uno {
namespace Collections {

struct Dictionary2_ValueCollection__string__Experimental_Cache_DiskCacheEntry;

struct Dictionary2_ValueCollection__string__Experimental_Cache_DiskCacheEntry__uType : ::uClassType
{
    ::app::Uno::Collections::IEnumerable__Experimental_Cache_DiskCacheEntry __interface_0;
};

Dictionary2_ValueCollection__string__Experimental_Cache_DiskCacheEntry__uType* Dictionary2_ValueCollection__string__Experimental_Cache_DiskCacheEntry__typeof();

::uObject* Dictionary2_ValueCollection__string__Experimental_Cache_DiskCacheEntry__GetEnumerator_boxed(Dictionary2_ValueCollection__string__Experimental_Cache_DiskCacheEntry* __this);
void Dictionary2_ValueCollection__string__Experimental_Cache_DiskCacheEntry___ObjInit(Dictionary2_ValueCollection__string__Experimental_Cache_DiskCacheEntry* __this, ::app::Uno::Collections::Dictionary__string__Experimental_Cache_DiskCacheEntry* source);
int Dictionary2_ValueCollection__string__Experimental_Cache_DiskCacheEntry__get_Count(Dictionary2_ValueCollection__string__Experimental_Cache_DiskCacheEntry* __this);
::app::Uno::Collections::Dictionary2_ValueCollection_Enumerator__string__Experimental_Cache_DiskCacheEntry Dictionary2_ValueCollection__string__Experimental_Cache_DiskCacheEntry__GetEnumerator(Dictionary2_ValueCollection__string__Experimental_Cache_DiskCacheEntry* __this);
Dictionary2_ValueCollection__string__Experimental_Cache_DiskCacheEntry* Dictionary2_ValueCollection__string__Experimental_Cache_DiskCacheEntry__New_1(::uStatic* __this, ::app::Uno::Collections::Dictionary__string__Experimental_Cache_DiskCacheEntry* source);
void Dictionary2_ValueCollection__string__Experimental_Cache_DiskCacheEntry__Uno_Collections_ICollection_Add(Dictionary2_ValueCollection__string__Experimental_Cache_DiskCacheEntry* __this, ::app::Experimental::Cache::DiskCacheEntry* item);
void Dictionary2_ValueCollection__string__Experimental_Cache_DiskCacheEntry__Uno_Collections_ICollection_Clear(Dictionary2_ValueCollection__string__Experimental_Cache_DiskCacheEntry* __this);
bool Dictionary2_ValueCollection__string__Experimental_Cache_DiskCacheEntry__Uno_Collections_ICollection_Contains(Dictionary2_ValueCollection__string__Experimental_Cache_DiskCacheEntry* __this, ::app::Experimental::Cache::DiskCacheEntry* item);
bool Dictionary2_ValueCollection__string__Experimental_Cache_DiskCacheEntry__Uno_Collections_ICollection_Remove(Dictionary2_ValueCollection__string__Experimental_Cache_DiskCacheEntry* __this, ::app::Experimental::Cache::DiskCacheEntry* item);

struct Dictionary2_ValueCollection__string__Experimental_Cache_DiskCacheEntry : ::uObject
{
    ::uStrong< ::app::Uno::Collections::Dictionary__string__Experimental_Cache_DiskCacheEntry*> _source;

    ::uObject* GetEnumerator_boxed() { return Dictionary2_ValueCollection__string__Experimental_Cache_DiskCacheEntry__GetEnumerator_boxed(this); }
    void _ObjInit(::app::Uno::Collections::Dictionary__string__Experimental_Cache_DiskCacheEntry* source) { Dictionary2_ValueCollection__string__Experimental_Cache_DiskCacheEntry___ObjInit(this, source); }
    int Count() { return Dictionary2_ValueCollection__string__Experimental_Cache_DiskCacheEntry__get_Count(this); }
    ::app::Uno::Collections::Dictionary2_ValueCollection_Enumerator__string__Experimental_Cache_DiskCacheEntry GetEnumerator();
};

}}}

#include <app/Uno.Collections.Dictionary2_ValueCollection_Enumerator__string_-f5558dd8.h>

namespace app {
namespace Uno {
namespace Collections {

inline ::app::Uno::Collections::Dictionary2_ValueCollection_Enumerator__string__Experimental_Cache_DiskCacheEntry Dictionary2_ValueCollection__string__Experimental_Cache_DiskCacheEntry::GetEnumerator() { return Dictionary2_ValueCollection__string__Experimental_Cache_DiskCacheEntry__GetEnumerator(this); }

}}}


#endif
