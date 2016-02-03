// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Collections\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_UNO_COLLECTIONS_DICTIONARY2_VALUE_COLLECTION_ENUMERATOR__EXPERIM_8E7FA153_H__
#define __APP_UNO_COLLECTIONS_DICTIONARY2_VALUE_COLLECTION_ENUMERATOR__EXPERIM_8E7FA153_H__

#include <app/Uno.Collections.IEnumerator.h>
#include <app/Uno.IDisposable.h>
#include <app/Uno.Object.h>
#include <Uno.h>
namespace app { namespace Experimental { namespace Cache { struct RecordHeader; } } }
namespace app { namespace Uno { namespace Collections { struct Dictionary__Experimental_Cache_DiskCacheEntry__Experimental_Cache_RecordHeader; } } }

namespace app {
namespace Uno {
namespace Collections {

struct Dictionary2_ValueCollection_Enumerator__Experimental_Cache_DiskCacheEntry__Experimental_Cache_RecordHeader;

struct Dictionary2_ValueCollection_Enumerator__Experimental_Cache_DiskCacheEntry__Experimental_Cache_RecordHeader__uType : ::uStructType
{
    ::app::Uno::IDisposable __interface_0;
    ::app::Uno::Collections::IEnumerator __interface_1;
};

Dictionary2_ValueCollection_Enumerator__Experimental_Cache_DiskCacheEntry__Experimental_Cache_RecordHeader__uType* Dictionary2_ValueCollection_Enumerator__Experimental_Cache_DiskCacheEntry__Experimental_Cache_RecordHeader__typeof();

void Dictionary2_ValueCollection_Enumerator__Experimental_Cache_DiskCacheEntry__Experimental_Cache_RecordHeader___ObjInit(Dictionary2_ValueCollection_Enumerator__Experimental_Cache_DiskCacheEntry__Experimental_Cache_RecordHeader* __this, ::app::Uno::Collections::Dictionary__Experimental_Cache_DiskCacheEntry__Experimental_Cache_RecordHeader* source);
void Dictionary2_ValueCollection_Enumerator__Experimental_Cache_DiskCacheEntry__Experimental_Cache_RecordHeader__Dispose(Dictionary2_ValueCollection_Enumerator__Experimental_Cache_DiskCacheEntry__Experimental_Cache_RecordHeader* __this);
bool Dictionary2_ValueCollection_Enumerator__Experimental_Cache_DiskCacheEntry__Experimental_Cache_RecordHeader__MoveNext(Dictionary2_ValueCollection_Enumerator__Experimental_Cache_DiskCacheEntry__Experimental_Cache_RecordHeader* __this);
Dictionary2_ValueCollection_Enumerator__Experimental_Cache_DiskCacheEntry__Experimental_Cache_RecordHeader Dictionary2_ValueCollection_Enumerator__Experimental_Cache_DiskCacheEntry__Experimental_Cache_RecordHeader__New_1(::uStatic* __this, ::app::Uno::Collections::Dictionary__Experimental_Cache_DiskCacheEntry__Experimental_Cache_RecordHeader* source);
void Dictionary2_ValueCollection_Enumerator__Experimental_Cache_DiskCacheEntry__Experimental_Cache_RecordHeader__Uno_Collections_IEnumerator_Reset(Dictionary2_ValueCollection_Enumerator__Experimental_Cache_DiskCacheEntry__Experimental_Cache_RecordHeader* __this);

struct Dictionary2_ValueCollection_Enumerator__Experimental_Cache_DiskCacheEntry__Experimental_Cache_RecordHeader
{
    ::uStrong< ::app::Uno::Collections::Dictionary__Experimental_Cache_DiskCacheEntry__Experimental_Cache_RecordHeader*> _source;
    ::uStrong< ::app::Experimental::Cache::RecordHeader*> _current;
    int _iterator;
    int _version;

    void _ObjInit(::app::Uno::Collections::Dictionary__Experimental_Cache_DiskCacheEntry__Experimental_Cache_RecordHeader* source) { Dictionary2_ValueCollection_Enumerator__Experimental_Cache_DiskCacheEntry__Experimental_Cache_RecordHeader___ObjInit(this, source); }
    void Dispose() { Dictionary2_ValueCollection_Enumerator__Experimental_Cache_DiskCacheEntry__Experimental_Cache_RecordHeader__Dispose(this); }
    bool MoveNext() { return Dictionary2_ValueCollection_Enumerator__Experimental_Cache_DiskCacheEntry__Experimental_Cache_RecordHeader__MoveNext(this); }
};

}}}


#endif
