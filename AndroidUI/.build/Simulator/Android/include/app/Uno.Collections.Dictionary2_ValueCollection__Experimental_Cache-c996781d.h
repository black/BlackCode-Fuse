// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Collections\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_UNO_COLLECTIONS_DICTIONARY2_VALUE_COLLECTION__EXPERIMENTAL_CACHE_C996781D_H__
#define __APP_UNO_COLLECTIONS_DICTIONARY2_VALUE_COLLECTION__EXPERIMENTAL_CACHE_C996781D_H__

#include <app/Uno.Object.h>
#include <Uno.h>
namespace app { namespace Experimental { namespace Cache { struct RecordHeader; } } }
namespace app { namespace Uno { namespace Collections { struct Dictionary__Experimental_Cache_DiskCacheEntry__Experimental_Cache_RecordHeader; } } }
namespace app { namespace Uno { namespace Collections { struct Dictionary2_ValueCollection_Enumerator__Experimental_Cache_DiskCacheEntry__Experimental_Cache_RecordHeader; } } }

namespace app {
namespace Uno {
namespace Collections {

struct Dictionary2_ValueCollection__Experimental_Cache_DiskCacheEntry__Experimental_Cache_RecordHeader;

struct Dictionary2_ValueCollection__Experimental_Cache_DiskCacheEntry__Experimental_Cache_RecordHeader__uType : ::uClassType
{
};

Dictionary2_ValueCollection__Experimental_Cache_DiskCacheEntry__Experimental_Cache_RecordHeader__uType* Dictionary2_ValueCollection__Experimental_Cache_DiskCacheEntry__Experimental_Cache_RecordHeader__typeof();

void Dictionary2_ValueCollection__Experimental_Cache_DiskCacheEntry__Experimental_Cache_RecordHeader___ObjInit(Dictionary2_ValueCollection__Experimental_Cache_DiskCacheEntry__Experimental_Cache_RecordHeader* __this, ::app::Uno::Collections::Dictionary__Experimental_Cache_DiskCacheEntry__Experimental_Cache_RecordHeader* source);
int Dictionary2_ValueCollection__Experimental_Cache_DiskCacheEntry__Experimental_Cache_RecordHeader__get_Count(Dictionary2_ValueCollection__Experimental_Cache_DiskCacheEntry__Experimental_Cache_RecordHeader* __this);
::app::Uno::Collections::Dictionary2_ValueCollection_Enumerator__Experimental_Cache_DiskCacheEntry__Experimental_Cache_RecordHeader Dictionary2_ValueCollection__Experimental_Cache_DiskCacheEntry__Experimental_Cache_RecordHeader__GetEnumerator(Dictionary2_ValueCollection__Experimental_Cache_DiskCacheEntry__Experimental_Cache_RecordHeader* __this);
Dictionary2_ValueCollection__Experimental_Cache_DiskCacheEntry__Experimental_Cache_RecordHeader* Dictionary2_ValueCollection__Experimental_Cache_DiskCacheEntry__Experimental_Cache_RecordHeader__New_1(::uStatic* __this, ::app::Uno::Collections::Dictionary__Experimental_Cache_DiskCacheEntry__Experimental_Cache_RecordHeader* source);
void Dictionary2_ValueCollection__Experimental_Cache_DiskCacheEntry__Experimental_Cache_RecordHeader__Uno_Collections_ICollection_Add(Dictionary2_ValueCollection__Experimental_Cache_DiskCacheEntry__Experimental_Cache_RecordHeader* __this, ::app::Experimental::Cache::RecordHeader* item);
void Dictionary2_ValueCollection__Experimental_Cache_DiskCacheEntry__Experimental_Cache_RecordHeader__Uno_Collections_ICollection_Clear(Dictionary2_ValueCollection__Experimental_Cache_DiskCacheEntry__Experimental_Cache_RecordHeader* __this);
bool Dictionary2_ValueCollection__Experimental_Cache_DiskCacheEntry__Experimental_Cache_RecordHeader__Uno_Collections_ICollection_Contains(Dictionary2_ValueCollection__Experimental_Cache_DiskCacheEntry__Experimental_Cache_RecordHeader* __this, ::app::Experimental::Cache::RecordHeader* item);
bool Dictionary2_ValueCollection__Experimental_Cache_DiskCacheEntry__Experimental_Cache_RecordHeader__Uno_Collections_ICollection_Remove(Dictionary2_ValueCollection__Experimental_Cache_DiskCacheEntry__Experimental_Cache_RecordHeader* __this, ::app::Experimental::Cache::RecordHeader* item);

struct Dictionary2_ValueCollection__Experimental_Cache_DiskCacheEntry__Experimental_Cache_RecordHeader : ::uObject
{
    ::uStrong< ::app::Uno::Collections::Dictionary__Experimental_Cache_DiskCacheEntry__Experimental_Cache_RecordHeader*> _source;

    void _ObjInit(::app::Uno::Collections::Dictionary__Experimental_Cache_DiskCacheEntry__Experimental_Cache_RecordHeader* source) { Dictionary2_ValueCollection__Experimental_Cache_DiskCacheEntry__Experimental_Cache_RecordHeader___ObjInit(this, source); }
    int Count() { return Dictionary2_ValueCollection__Experimental_Cache_DiskCacheEntry__Experimental_Cache_RecordHeader__get_Count(this); }
    ::app::Uno::Collections::Dictionary2_ValueCollection_Enumerator__Experimental_Cache_DiskCacheEntry__Experimental_Cache_RecordHeader GetEnumerator();
};

}}}

#include <app/Uno.Collections.Dictionary2_ValueCollection_Enumerator__Experim-8e7fa153.h>

namespace app {
namespace Uno {
namespace Collections {

inline ::app::Uno::Collections::Dictionary2_ValueCollection_Enumerator__Experimental_Cache_DiskCacheEntry__Experimental_Cache_RecordHeader Dictionary2_ValueCollection__Experimental_Cache_DiskCacheEntry__Experimental_Cache_RecordHeader::GetEnumerator() { return Dictionary2_ValueCollection__Experimental_Cache_DiskCacheEntry__Experimental_Cache_RecordHeader__GetEnumerator(this); }

}}}


#endif
