// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Collections\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_UNO_COLLECTIONS_DICTIONARY2_ENUMERATOR__EXPERIMENTAL_CACHE_DISK_82636317_H__
#define __APP_UNO_COLLECTIONS_DICTIONARY2_ENUMERATOR__EXPERIMENTAL_CACHE_DISK_82636317_H__

#include <app/Uno.Collections.IEnumerator.h>
#include <app/Uno.Collections.IEnumerator__Uno_Collections_KeyValuePair_Exper-c5c7367.h>
#include <app/Uno.Collections.KeyValuePair__Experimental_Cache_DiskCacheEntry-bfbae3c6.h>
#include <app/Uno.IDisposable.h>
#include <app/Uno.Object.h>
#include <Uno.h>
namespace app { namespace Uno { namespace Collections { struct Dictionary__Experimental_Cache_DiskCacheEntry__Experimental_Cache_RecordHeader; } } }

namespace app {
namespace Uno {
namespace Collections {

struct Dictionary2_Enumerator__Experimental_Cache_DiskCacheEntry__Experimental_Cache_RecordHeader;

struct Dictionary2_Enumerator__Experimental_Cache_DiskCacheEntry__Experimental_Cache_RecordHeader__uType : ::uStructType
{
    ::app::Uno::Collections::IEnumerator__Uno_Collections_KeyValuePair_Experimental_Cache_DiskCacheEntry_Experimental_Cache_RecordHeader_ __interface_0;
    ::app::Uno::IDisposable __interface_1;
    ::app::Uno::Collections::IEnumerator __interface_2;
};

Dictionary2_Enumerator__Experimental_Cache_DiskCacheEntry__Experimental_Cache_RecordHeader__uType* Dictionary2_Enumerator__Experimental_Cache_DiskCacheEntry__Experimental_Cache_RecordHeader__typeof();

void Dictionary2_Enumerator__Experimental_Cache_DiskCacheEntry__Experimental_Cache_RecordHeader___ObjInit(Dictionary2_Enumerator__Experimental_Cache_DiskCacheEntry__Experimental_Cache_RecordHeader* __this, ::app::Uno::Collections::Dictionary__Experimental_Cache_DiskCacheEntry__Experimental_Cache_RecordHeader* source);
void Dictionary2_Enumerator__Experimental_Cache_DiskCacheEntry__Experimental_Cache_RecordHeader__Dispose(Dictionary2_Enumerator__Experimental_Cache_DiskCacheEntry__Experimental_Cache_RecordHeader* __this);
::app::Uno::Collections::KeyValuePair__Experimental_Cache_DiskCacheEntry__Experimental_Cache_RecordHeader Dictionary2_Enumerator__Experimental_Cache_DiskCacheEntry__Experimental_Cache_RecordHeader__get_Current(Dictionary2_Enumerator__Experimental_Cache_DiskCacheEntry__Experimental_Cache_RecordHeader* __this);
bool Dictionary2_Enumerator__Experimental_Cache_DiskCacheEntry__Experimental_Cache_RecordHeader__MoveNext(Dictionary2_Enumerator__Experimental_Cache_DiskCacheEntry__Experimental_Cache_RecordHeader* __this);
Dictionary2_Enumerator__Experimental_Cache_DiskCacheEntry__Experimental_Cache_RecordHeader Dictionary2_Enumerator__Experimental_Cache_DiskCacheEntry__Experimental_Cache_RecordHeader__New_1(::uStatic* __this, ::app::Uno::Collections::Dictionary__Experimental_Cache_DiskCacheEntry__Experimental_Cache_RecordHeader* source);
void Dictionary2_Enumerator__Experimental_Cache_DiskCacheEntry__Experimental_Cache_RecordHeader__Uno_Collections_IEnumerator_Reset(Dictionary2_Enumerator__Experimental_Cache_DiskCacheEntry__Experimental_Cache_RecordHeader* __this);

struct Dictionary2_Enumerator__Experimental_Cache_DiskCacheEntry__Experimental_Cache_RecordHeader
{
    ::uStrong< ::app::Uno::Collections::Dictionary__Experimental_Cache_DiskCacheEntry__Experimental_Cache_RecordHeader*> _source;
    ::app::Uno::Collections::KeyValuePair__Experimental_Cache_DiskCacheEntry__Experimental_Cache_RecordHeader _current;
    int _iterator;
    int _version;

    void _ObjInit(::app::Uno::Collections::Dictionary__Experimental_Cache_DiskCacheEntry__Experimental_Cache_RecordHeader* source) { Dictionary2_Enumerator__Experimental_Cache_DiskCacheEntry__Experimental_Cache_RecordHeader___ObjInit(this, source); }
    void Dispose() { Dictionary2_Enumerator__Experimental_Cache_DiskCacheEntry__Experimental_Cache_RecordHeader__Dispose(this); }
    ::app::Uno::Collections::KeyValuePair__Experimental_Cache_DiskCacheEntry__Experimental_Cache_RecordHeader Current() { return Dictionary2_Enumerator__Experimental_Cache_DiskCacheEntry__Experimental_Cache_RecordHeader__get_Current(this); }
    bool MoveNext() { return Dictionary2_Enumerator__Experimental_Cache_DiskCacheEntry__Experimental_Cache_RecordHeader__MoveNext(this); }
};

}}}


#endif
