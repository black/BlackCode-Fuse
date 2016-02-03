#include <app/Experimental.Cache.CacheLoaded.h>
#include <app/Experimental.Cache.DiskCache.h>
#include <app/Experimental.Cache.DiskCache_DirectoryType.h>
#include <app/Experimental.Cache.DiskCacheEntry.h>
#include <app/Experimental.Cache.DiskCacheEntryStatus.h>
#include <app/Experimental.Cache.DiskCacheReader.h>
#include <app/Experimental.Cache.DiskCacheReaderStream.h>
#include <app/Experimental.Cache.DiskCacheWriter.h>
#include <app/Experimental.Cache.DiskCacheWriterStream.h>
#include <app/Experimental.Cache.ICache.h>
#include <app/Experimental.Cache.ICacheReader.h>
#include <app/Experimental.Cache.ICacheWriter.h>
#include <app/Experimental.Cache.ProxyStream.h>
#include <app/Experimental.Cache.RecordFile__Experimental_Cache_DiskCacheEntry.h>
#include <app/Experimental.Cache.RecordFileDiskCache.h>
#include <app/Experimental.Cache.RecordHeader.h>
#include <app/Experimental.Cache.RecordStatus.h>
#include <app/Experimental.Http.Internal.DateUtil.h>
#include <app/Uno.Bool.h>
#include <app/Uno.Byte.h>
#include <app/Uno.Char.h>
#include <app/Uno.Collections.Dictionary__string__Experimental_Cache_DiskCacheEntry.h>
#include <app/Uno.Collections.Dictionary__string__string.h>
#include <app/Uno.Collections.Dictionary2_Enumerator__string__Experimental_Ca-75291c79.h>
#include <app/Uno.Collections.Dictionary2_Enumerator__string__string.h>
#include <app/Uno.Collections.HashSet__string.h>
#include <app/Uno.Collections.IEnumerable__Experimental_Cache_DiskCacheEntry.h>
#include <app/Uno.Collections.IEnumerable__string.h>
#include <app/Uno.Collections.IEnumerator.h>
#include <app/Uno.Collections.IEnumerator__Experimental_Cache_DiskCacheEntry.h>
#include <app/Uno.Collections.IEnumerator__string.h>
#include <app/Uno.Collections.IList__Experimental_Cache_DiskCacheEntry.h>
#include <app/Uno.Collections.KeyValuePair__string__Experimental_Cache_DiskCacheEntry.h>
#include <app/Uno.Collections.KeyValuePair__string__string.h>
#include <app/Uno.Collections.List__Experimental_Cache_DiskCacheEntry.h>
#include <app/Uno.Collections.List__string.h>
#include <app/Uno.Collections.List1_Enumerator__Experimental_Cache_DiskCacheEntry.h>
#include <app/Uno.Collections.List1_Enumerator__string.h>
#include <app/Uno.Comparison__Experimental_Cache_DiskCacheEntry.h>
#include <app/Uno.Diagnostics.Debug.h>
#include <app/Uno.Diagnostics.DebugMessageType.h>
#include <app/Uno.Exception.h>
#include <app/Uno.Int.h>
#include <app/Uno.IO.BinaryReader.h>
#include <app/Uno.IO.BinaryWriter.h>
#include <app/Uno.IO.Directory.h>
#include <app/Uno.IO.File.h>
#include <app/Uno.IO.SeekOrigin.h>
#include <app/Uno.IO.Stream.h>
#include <app/Uno.IO.UserDirectory.h>
#include <app/Uno.Long.h>
#include <app/Uno.Math.h>
#include <app/Uno.NotSupportedException.h>
#include <app/Uno.String.h>

namespace app {
namespace Experimental {
namespace Cache {

// This file was generated based on 'C:\ProgramData\Uno\Packages\Experimental.Http\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

::uDelegateType* CacheLoaded__typeof()
{
    static ::uStaticStrong< ::uDelegateType*> type;
    if (type != NULL) return type;

    type = ::uAllocDelegateType("Experimental.Cache.CacheLoaded", 1);

    type->SetSignature(::uVoid__typeof(),
        ::app::Experimental::Cache::ICacheReader__typeof());

    ::uRegisterType(type);
    return type;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\Experimental.Http\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

DiskCache__uType* DiskCache__typeof()
{
    static ::uStaticStrong<DiskCache__uType*> type;
    if (type != NULL) return type;

    type = (DiskCache__uType*)::uAllocClassType(sizeof(DiskCache__uType), "Experimental.Cache.DiskCache", false, 1, 3, 0);

    type->__interface_0.__fp_LoadRecord = (bool(*)(void*, ::uString*, ::uDelegate*))DiskCache__LoadRecord;
    type->__interface_0.__fp_CreateRecord = (::uObject*(*)(void*, ::uString*))DiskCache__CreateRecord;
    type->__interface_0.__fp_DeleteRecord = (void(*)(void*, ::uString*))DiskCache__DeleteRecord;

    type->SetInterfaces(
        ::app::Experimental::Cache::ICache__typeof(), offsetof(DiskCache__uType, __interface_0));

    type->SetStrongRefs(
        "_entries", offsetof(DiskCache, _entries),
        "_index", offsetof(DiskCache, _index),
        "_storeDir", offsetof(DiskCache, _storeDir));

    type->SetFields(6,
        ::uNewField("_entries", NULL, offsetof(DiskCache, _entries), ::app::Uno::Collections::Dictionary__string__Experimental_Cache_DiskCacheEntry__typeof()),
        ::uNewField("_estimateSize", NULL, offsetof(DiskCache, _estimateSize), ::app::Uno::Long__typeof()),
        ::uNewField("_fileRef", NULL, offsetof(DiskCache, _fileRef), ::app::Uno::Int__typeof()),
        ::uNewField("_index", NULL, offsetof(DiskCache, _index), ::app::Experimental::Cache::RecordFileDiskCache__typeof()),
        ::uNewField("_maxSize", NULL, offsetof(DiskCache, _maxSize), ::app::Uno::Long__typeof()),
        ::uNewField("_storeDir", NULL, offsetof(DiskCache, _storeDir), ::app::Uno::String__typeof()));

    type->SetFunctions(16,
        ::uNewFunction("BaseName", DiskCache__BaseName, 0, false, ::app::Uno::String__typeof(), ::app::Uno::String__typeof()),
        ::uNewFunctionVoid("CleanDirectory", DiskCache__CleanDirectory, 0, false),
        ::uNewFunctionVoid("Clear", DiskCache__Clear, 0, false),
        ::uNewFunction("CreateRecord", DiskCache__CreateRecord, 0, false, ::app::Experimental::Cache::ICacheWriter__typeof(), ::app::Uno::String__typeof()),
        ::uNewFunction("DataFile", DiskCache__DataFile, 0, false, ::app::Uno::String__typeof(), ::app::Experimental::Cache::DiskCacheEntry__typeof()),
        ::uNewFunctionVoid("DeleteRecord", DiskCache__DeleteRecord, 0, false, ::app::Uno::String__typeof()),
        ::uNewFunctionVoid("Dispose", DiskCache__Dispose, 0, false),
        ::uNewFunction("get_MaxSize", DiskCache__get_MaxSize, 0, false, ::app::Uno::Long__typeof()),
        ::uNewFunction("get_RecordCount", DiskCache__get_RecordCount, 0, false, ::app::Uno::Int__typeof()),
        ::uNewFunction("get_StoreDirectory", DiskCache__get_StoreDirectory, 0, false, ::app::Uno::String__typeof()),
        ::uNewFunction("LastUsed", DiskCache__LastUsed, 0, false, ::app::Uno::Int__typeof(), ::app::Experimental::Cache::DiskCacheEntry__typeof(), ::app::Experimental::Cache::DiskCacheEntry__typeof()),
        ::uNewFunction("LoadRecord", DiskCache__LoadRecord, 0, false, ::app::Uno::Bool__typeof(), ::app::Uno::String__typeof(), ::app::Experimental::Cache::CacheLoaded__typeof()),
        ::uNewFunction(".ctor", DiskCache__New_1, 0, true, DiskCache__typeof(), ::app::Uno::String__typeof(), ::app::Experimental::Cache::DiskCache_DirectoryType__typeof()),
        ::uNewFunctionVoid("set_MaxSize", DiskCache__set_MaxSize, 0, false, ::app::Uno::Long__typeof()),
        ::uNewFunctionVoid("TrimCache", DiskCache__TrimCache, 0, false),
        ::uNewFunctionVoid("Update", DiskCache__Update, 0, false, ::app::Experimental::Cache::DiskCacheEntry__typeof()));

    ::uRegisterType(type);
    return type;
}

void DiskCache___ObjInit(DiskCache* __this, ::uString* dirName, int dt)
{
    __this->_maxSize = 20000000ll;
    __this->_entries = ::app::Uno::Collections::Dictionary__string__Experimental_Cache_DiskCacheEntry__New_1(NULL);

    if (dt == 0)
    {
        __this->_storeDir = ::app::Uno::IO::Directory__GetUserDirectory(NULL, 1);
        __this->_storeDir = ::app::Uno::String__op_Addition_2(NULL, __this->_storeDir, ::app::Uno::String__op_Addition_2(NULL, ::uGetConstString("/"), dirName));

        if (!::app::Uno::IO::Directory__Exists(NULL, __this->_storeDir))
        {
            ::app::Uno::IO::Directory__CreateDirectory(NULL, __this->_storeDir);
        }

        __this->_storeDir = ::app::Uno::String__op_Addition_2(NULL, __this->_storeDir, ::uGetConstString("/Cache"));
    }
    else
    {
        __this->_storeDir = dirName;
    }

    if (!::app::Uno::IO::Directory__Exists(NULL, __this->_storeDir))
    {
        ::app::Uno::IO::Directory__CreateDirectory(NULL, __this->_storeDir);
    }

    __this->_index = ::app::Experimental::Cache::RecordFileDiskCache__New_1(NULL, ::app::Uno::String__op_Addition_2(NULL, __this->StoreDirectory(), ::uGetConstString("/Index")));
    __this->_fileRef = 0;

    for (::uObject* enum_123 = ::app::Uno::Collections::IEnumerable__Experimental_Cache_DiskCacheEntry::GetEnumerator(::uPtr< ::uObject*>(::uPtr< ::app::Experimental::Cache::RecordFileDiskCache*>(__this->_index)->GetAllRecords())); ::app::Uno::Collections::IEnumerator::MoveNext(::uPtr< ::uObject*>(enum_123)); )
    {
        ::app::Experimental::Cache::DiskCacheEntry* record = ::app::Uno::Collections::IEnumerator__Experimental_Cache_DiskCacheEntry::Current(::uPtr< ::uObject*>(enum_123));
        ::uPtr< ::app::Uno::Collections::Dictionary__string__Experimental_Cache_DiskCacheEntry*>(__this->_entries)->Item(::uPtr< ::app::Experimental::Cache::DiskCacheEntry*>(record)->Id, record);
        __this->_fileRef = ::app::Uno::Math__Max_8(NULL, __this->_fileRef, record->FileRef);
        __this->_estimateSize = __this->_estimateSize + record->Size;
    }

    __this->CleanDirectory();
}

::uString* DiskCache__BaseName(DiskCache* __this, ::uString* file)
{
    int end = -1;

    while (true)
    {
        int e = ::app::Uno::String::IndexOf(::uPtr< ::uString*>(file), '/', end + 1);
        int f = ::app::Uno::String::IndexOf(file, '\\', end + 1);
        int g = ::app::Uno::Math__Max_8(NULL, e, f);

        if (g == -1)
        {
            break;
        }

        end = g;
    }

    return ::app::Uno::String::Substring(::uPtr< ::uString*>(file), end + 1);
}

void DiskCache__CleanDirectory(DiskCache* __this)
{
    ::app::Uno::Collections::HashSet__string* known = ::app::Uno::Collections::HashSet__string__New_1(NULL);
    ::uPtr< ::app::Uno::Collections::HashSet__string*>(known)->Add(::uGetConstString("Index"));

    for (::app::Uno::Collections::Dictionary2_Enumerator__string__Experimental_Cache_DiskCacheEntry enum_129 = ::uPtr< ::app::Uno::Collections::Dictionary__string__Experimental_Cache_DiskCacheEntry*>(__this->_entries)->GetEnumerator(); enum_129.MoveNext(); )
    {
        ::app::Uno::Collections::KeyValuePair__string__Experimental_Cache_DiskCacheEntry e = enum_129.Current();
        ::uPtr< ::app::Uno::Collections::HashSet__string*>(known)->Add(::app::Uno::String__op_Addition_1(NULL, ::uGetConstString(""), ::uBox< int>(::app::Uno::Int__typeof(), ::uPtr< ::app::Experimental::Cache::DiskCacheEntry*>(e.Value())->FileRef)));
    }

    for (::uObject* enum_130 = ::app::Uno::Collections::IEnumerable__string::GetEnumerator(::uPtr< ::uObject*>(::app::Uno::IO::Directory__EnumerateFiles(NULL, __this->StoreDirectory()))); ::app::Uno::Collections::IEnumerator::MoveNext(::uPtr< ::uObject*>(enum_130)); )
    {
        ::uString* file = ::app::Uno::Collections::IEnumerator__string::Current(::uPtr< ::uObject*>(enum_130));
        ::uString* baseName = __this->BaseName(file);

        if (::uPtr< ::app::Uno::Collections::HashSet__string*>(known)->Contains(baseName))
        {
            continue;
        }

        ::uString* fname = ::app::Uno::String__op_Addition_2(NULL, ::app::Uno::String__op_Addition_2(NULL, __this->StoreDirectory(), ::uGetConstString("/")), baseName);

        try
        {
            ::app::Uno::IO::File__Delete(NULL, fname);
        }
        catch (const ::uThrowable& __t)
        {
            if (::uIs(__t.Exception, ::app::Uno::Exception__typeof()))
            {
                ::app::Uno::Exception* e = (::app::Uno::Exception*)__t.Exception;
                ::app::Uno::Diagnostics::Debug__Log_2(NULL, (::uObject*)e, 1, ::uGetConstString("C:\\ProgramData\\Uno\\Packages\\Experimental.Http\\0.11.3\\$.uno"), 485);
                ::app::Uno::Diagnostics::Debug__Log_5(NULL, ::app::Uno::String__op_Addition_2(NULL, ::uGetConstString("Failed to delete cache file: "), fname), 1, ::uGetConstString("C:\\ProgramData\\Uno\\Packages\\Experimental.Http\\0.11.3\\$.uno"), 486);
            }
            else
            {
                throw __t;
            }
        }
    }
}

void DiskCache__Clear(DiskCache* __this)
{
    ::app::Uno::Collections::List__string* ids = ::app::Uno::Collections::List__string__New_1(NULL);

    for (::app::Uno::Collections::Dictionary2_Enumerator__string__Experimental_Cache_DiskCacheEntry enum_124 = ::uPtr< ::app::Uno::Collections::Dictionary__string__Experimental_Cache_DiskCacheEntry*>(__this->_entries)->GetEnumerator(); enum_124.MoveNext(); )
    {
        ::app::Uno::Collections::KeyValuePair__string__Experimental_Cache_DiskCacheEntry entry = enum_124.Current();
        ::uPtr< ::app::Uno::Collections::List__string*>(ids)->Add(entry.Key());
    }

    for (::app::Uno::Collections::List1_Enumerator__string enum_125 = ::uPtr< ::app::Uno::Collections::List__string*>(ids)->GetEnumerator(); enum_125.MoveNext(); )
    {
        ::uString* id = enum_125.Current();
        __this->DeleteRecord(id);
    }
}

::uObject* DiskCache__CreateRecord(DiskCache* __this, ::uString* id)
{
    int nextId = ++__this->_fileRef;
    ::app::Experimental::Cache::DiskCacheWriter* dcw = ::app::Experimental::Cache::DiskCacheWriter__New_1(NULL);
    ::uPtr< ::app::Experimental::Cache::DiskCacheWriter*>(dcw)->_cache = __this;
    ::app::Experimental::Cache::DiskCacheEntry* e;

    if (!::uPtr< ::app::Uno::Collections::Dictionary__string__Experimental_Cache_DiskCacheEntry*>(__this->_entries)->TryGetValue(id, &e))
    {
        e = ::app::Experimental::Cache::DiskCacheEntry__New_1(NULL);
        ::uPtr< ::app::Experimental::Cache::DiskCacheEntry*>(e)->FileRef = nextId;
        ::uPtr< ::app::Uno::Collections::Dictionary__string__Experimental_Cache_DiskCacheEntry*>(__this->_entries)->Item(id, e);
    }

    dcw->_entry = e;
    ::uPtr< ::app::Experimental::Cache::DiskCacheEntry*>(e)->Id = id;
    e->Status = 0;
    e->LastUsed = ::app::Experimental::Http::Internal::DateUtil__get_TimestampNow(NULL);
    ::uPtr< ::app::Experimental::Cache::RecordFileDiskCache*>(__this->_index)->Update(e);
    return (::uObject*)dcw;
}

::uString* DiskCache__DataFile(DiskCache* __this, ::app::Experimental::Cache::DiskCacheEntry* _entry)
{
    return ::app::Uno::String__op_Addition_1(NULL, ::app::Uno::String__op_Addition_2(NULL, __this->StoreDirectory(), ::uGetConstString("/")), ::uBox< int>(::app::Uno::Int__typeof(), ::uPtr< ::app::Experimental::Cache::DiskCacheEntry*>(_entry)->FileRef));
}

void DiskCache__DeleteRecord(DiskCache* __this, ::uString* id)
{
    ::app::Experimental::Cache::DiskCacheEntry* e;

    if (!::uPtr< ::app::Uno::Collections::Dictionary__string__Experimental_Cache_DiskCacheEntry*>(__this->_entries)->TryGetValue(id, &e))
    {
        return;
    }

    ::uString* fname = __this->DataFile(e);

    try
    {
        if (::app::Uno::IO::File__Exists(NULL, fname))
        {
            ::app::Uno::IO::File__Delete(NULL, fname);
        }
    }
    catch (const ::uThrowable& __t)
    {
        if (::uIs(__t.Exception, ::app::Uno::Exception__typeof()))
        {
            ::app::Uno::Exception* ex = (::app::Uno::Exception*)__t.Exception;
            ::app::Uno::Diagnostics::Debug__Log_2(NULL, (::uObject*)ex, 1, ::uGetConstString("C:\\ProgramData\\Uno\\Packages\\Experimental.Http\\0.11.3\\$.uno"), 397);
            ::app::Uno::Diagnostics::Debug__Log_5(NULL, ::app::Uno::String__op_Addition_2(NULL, ::uGetConstString("Failed to delete cache file: "), fname), 1, ::uGetConstString("C:\\ProgramData\\Uno\\Packages\\Experimental.Http\\0.11.3\\$.uno"), 398);
        }
        else
        {
            throw __t;
        }
    }

    ::uPtr< ::app::Uno::Collections::Dictionary__string__Experimental_Cache_DiskCacheEntry*>(__this->_entries)->Remove(id);
    ::uPtr< ::app::Experimental::Cache::RecordFileDiskCache*>(__this->_index)->Delete(e);
}

void DiskCache__Dispose(DiskCache* __this)
{
    __this->_entries = NULL;
    ::uPtr< ::app::Experimental::Cache::RecordFileDiskCache*>(__this->_index)->Close();
    __this->_index = NULL;
}

::uLong DiskCache__get_MaxSize(DiskCache* __this)
{
    return __this->_maxSize;
}

int DiskCache__get_RecordCount(DiskCache* __this)
{
    return ::uPtr< ::app::Uno::Collections::Dictionary__string__Experimental_Cache_DiskCacheEntry*>(__this->_entries)->Count();
}

::uString* DiskCache__get_StoreDirectory(DiskCache* __this)
{
    return __this->_storeDir;
}

int DiskCache__LastUsed(DiskCache* __this, ::app::Experimental::Cache::DiskCacheEntry* a, ::app::Experimental::Cache::DiskCacheEntry* b)
{
    return ::uPtr< ::app::Experimental::Cache::DiskCacheEntry*>(a)->LastUsed - ::uPtr< ::app::Experimental::Cache::DiskCacheEntry*>(b)->LastUsed;
}

bool DiskCache__LoadRecord(DiskCache* __this, ::uString* id, ::uDelegate* onLoaded)
{
    ::app::Experimental::Cache::DiskCacheEntry* e;

    if (!::uPtr< ::app::Uno::Collections::Dictionary__string__Experimental_Cache_DiskCacheEntry*>(__this->_entries)->TryGetValue(id, &e))
    {
        return false;
    }

    ::app::Experimental::Cache::DiskCacheReader* dcr = ::app::Experimental::Cache::DiskCacheReader__New_1(NULL);
    ::uPtr< ::app::Experimental::Cache::DiskCacheReader*>(dcr)->_cache = __this;
    dcr->_entry = e;
    ::uPtr< ::app::Experimental::Cache::DiskCacheEntry*>(e)->LastUsed = ::app::Experimental::Http::Internal::DateUtil__get_TimestampNow(NULL);
    ::uPtr< ::app::Experimental::Cache::RecordFileDiskCache*>(__this->_index)->Update(e);
    ::uPtr< ::uDelegate*>(onLoaded)->InvokeVoid< ::uObject*>((::uObject*)dcr);
    return true;
}

DiskCache* DiskCache__New_1(::uStatic* __this, ::uString* dirName, int dt)
{
    DiskCache* inst = (DiskCache*)::uAllocObject(sizeof(DiskCache), DiskCache__typeof());
    inst->_ObjInit(dirName, dt);
    return inst;
}

void DiskCache__set_MaxSize(DiskCache* __this, ::uLong value)
{
    __this->_maxSize = value;
}

void DiskCache__TrimCache(DiskCache* __this)
{
    ::uLong size = 0ll;

    for (::app::Uno::Collections::Dictionary2_Enumerator__string__Experimental_Cache_DiskCacheEntry enum_126 = ::uPtr< ::app::Uno::Collections::Dictionary__string__Experimental_Cache_DiskCacheEntry*>(__this->_entries)->GetEnumerator(); enum_126.MoveNext(); )
    {
        ::app::Uno::Collections::KeyValuePair__string__Experimental_Cache_DiskCacheEntry entry = enum_126.Current();
        size = size + ::uPtr< ::app::Experimental::Cache::DiskCacheEntry*>(entry.Value())->Size;
    }

    if (size < __this->_maxSize)
    {
        return;
    }

    ::app::Uno::Collections::List__Experimental_Cache_DiskCacheEntry* order = ::app::Uno::Collections::List__Experimental_Cache_DiskCacheEntry__New_1(NULL);

    for (::app::Uno::Collections::Dictionary2_Enumerator__string__Experimental_Cache_DiskCacheEntry enum_127 = ::uPtr< ::app::Uno::Collections::Dictionary__string__Experimental_Cache_DiskCacheEntry*>(__this->_entries)->GetEnumerator(); enum_127.MoveNext(); )
    {
        ::app::Uno::Collections::KeyValuePair__string__Experimental_Cache_DiskCacheEntry entry = enum_127.Current();
        ::uPtr< ::app::Uno::Collections::List__Experimental_Cache_DiskCacheEntry*>(order)->Add(entry.Value());
    }

    ::uPtr< ::app::Uno::Collections::List__Experimental_Cache_DiskCacheEntry*>(order)->Sort(::uNewDelegateNonVirt(::app::Uno::Comparison__Experimental_Cache_DiskCacheEntry__typeof(), (const void*)DiskCache__LastUsed, __this));

    for (::app::Uno::Collections::List1_Enumerator__Experimental_Cache_DiskCacheEntry enum_128 = order->GetEnumerator(); enum_128.MoveNext(); )
    {
        ::app::Experimental::Cache::DiskCacheEntry* entry = enum_128.Current();

        if (::uPtr< ::app::Experimental::Cache::DiskCacheEntry*>(entry)->Status == 0)
        {
            continue;
        }

        __this->DeleteRecord(::uPtr< ::app::Experimental::Cache::DiskCacheEntry*>(entry)->Id);
        size = size - entry->Size;

        if (size < (__this->_maxSize / 2ll))
        {
            break;
        }
    }

    __this->_estimateSize = size;
}

void DiskCache__Update(DiskCache* __this, ::app::Experimental::Cache::DiskCacheEntry* _entry)
{
    __this->_estimateSize = __this->_estimateSize + ::uPtr< ::app::Experimental::Cache::DiskCacheEntry*>(_entry)->Size;

    if (__this->_estimateSize > __this->_maxSize)
    {
        __this->TrimCache();
    }

    ::uPtr< ::app::Experimental::Cache::RecordFileDiskCache*>(__this->_index)->Update(_entry);
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\Experimental.Http\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

::uEnumType* DiskCache_DirectoryType__typeof()
{
    static ::uStaticStrong< ::uEnumType*> type;
    if (type != NULL) return type;

    type = ::uAllocEnumType("Experimental.Cache.DiskCache.DirectoryType", ::app::Uno::Int__typeof(), 2);

    type->SetLiterals(
        "CacheRelative", 0LL,
        "Absolute", 1LL);

    ::uRegisterType(type);
    return type;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\Experimental.Http\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

DiskCacheEntry__uType* DiskCacheEntry__typeof()
{
    static ::uStaticStrong<DiskCacheEntry__uType*> type;
    if (type != NULL) return type;

    type = (DiskCacheEntry__uType*)::uAllocClassType(sizeof(DiskCacheEntry__uType), "Experimental.Cache.DiskCacheEntry", false, 0, 2, 0);

    type->SetStrongRefs(
        "Id", offsetof(DiskCacheEntry, Id),
        "Meta", offsetof(DiskCacheEntry, Meta));

    type->SetFields(6,
        ::uNewField("FileRef", NULL, offsetof(DiskCacheEntry, FileRef), ::app::Uno::Int__typeof()),
        ::uNewField("Id", NULL, offsetof(DiskCacheEntry, Id), ::app::Uno::String__typeof()),
        ::uNewField("LastUsed", NULL, offsetof(DiskCacheEntry, LastUsed), ::app::Uno::Int__typeof()),
        ::uNewField("Meta", NULL, offsetof(DiskCacheEntry, Meta), ::app::Uno::Collections::Dictionary__string__string__typeof()),
        ::uNewField("Size", NULL, offsetof(DiskCacheEntry, Size), ::app::Uno::Long__typeof()),
        ::uNewField("Status", NULL, offsetof(DiskCacheEntry, Status), ::app::Experimental::Cache::DiskCacheEntryStatus__typeof()));

    type->SetFunctions(3,
        ::uNewFunction("Load", DiskCacheEntry__Load, 0, true, DiskCacheEntry__typeof(), ::app::Uno::IO::BinaryReader__typeof()),
        ::uNewFunction(".ctor", DiskCacheEntry__New_1, 0, true, DiskCacheEntry__typeof()),
        ::uNewFunctionVoid("Write", DiskCacheEntry__Write, 0, false, ::app::Uno::IO::BinaryWriter__typeof()));

    ::uRegisterType(type);
    return type;
}

void DiskCacheEntry___ObjInit(DiskCacheEntry* __this)
{
    __this->Meta = ::app::Uno::Collections::Dictionary__string__string__New_1(NULL);
}

DiskCacheEntry* DiskCacheEntry__Load(::uStatic* __this, ::app::Uno::IO::BinaryReader* r)
{
    if (::uPtr< ::app::Uno::IO::BinaryReader*>(r)->ReadInt() != 274648125)
    {
        return NULL;
    }

    DiskCacheEntry* dce = DiskCacheEntry__New_1(NULL);
    ::uPtr< DiskCacheEntry*>(dce)->Id = ::uPtr< ::app::Uno::IO::BinaryReader*>(r)->ReadString();
    dce->FileRef = r->ReadInt();
    dce->Size = r->ReadLong();
    dce->Status = r->ReadInt();
    int c = r->ReadInt();

    for (int i = 0; i < c; ++i)
    {
        ::uString* k = ::uPtr< ::app::Uno::IO::BinaryReader*>(r)->ReadString();
        ::uString* v = r->ReadString();
        ::uPtr< ::app::Uno::Collections::Dictionary__string__string*>(::uPtr< DiskCacheEntry*>(dce)->Meta)->Item(k, v);
    }

    return dce;
}

DiskCacheEntry* DiskCacheEntry__New_1(::uStatic* __this)
{
    DiskCacheEntry* inst = (DiskCacheEntry*)::uAllocObject(sizeof(DiskCacheEntry), DiskCacheEntry__typeof());
    inst->_ObjInit();
    return inst;
}

void DiskCacheEntry__Write(DiskCacheEntry* __this, ::app::Uno::IO::BinaryWriter* w)
{
    ::uPtr< ::app::Uno::IO::BinaryWriter*>(w)->Write_13(274648125);
    w->Write_24(__this->Id);
    w->Write_13(__this->FileRef);
    w->Write_17(__this->Size);
    w->Write_13(__this->Status);
    int c = ::uPtr< ::app::Uno::Collections::Dictionary__string__string*>(__this->Meta)->Count();
    w->Write_13(c);

    for (::app::Uno::Collections::Dictionary2_Enumerator__string__string enum_123 = ::uPtr< ::app::Uno::Collections::Dictionary__string__string*>(__this->Meta)->GetEnumerator(); enum_123.MoveNext(); )
    {
        ::app::Uno::Collections::KeyValuePair__string__string m = enum_123.Current();
        ::uPtr< ::app::Uno::IO::BinaryWriter*>(w)->Write_24(m.Key());
        w->Write_24(m.Value());
    }
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\Experimental.Http\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

::uEnumType* DiskCacheEntryStatus__typeof()
{
    static ::uStaticStrong< ::uEnumType*> type;
    if (type != NULL) return type;

    type = ::uAllocEnumType("Experimental.Cache.DiskCacheEntryStatus", ::app::Uno::Int__typeof(), 3);

    type->SetLiterals(
        "Creating", 0LL,
        "Valid", 1LL,
        "Invalid", 2LL);

    ::uRegisterType(type);
    return type;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\Experimental.Http\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

DiskCacheReader__uType* DiskCacheReader__typeof()
{
    static ::uStaticStrong<DiskCacheReader__uType*> type;
    if (type != NULL) return type;

    type = (DiskCacheReader__uType*)::uAllocClassType(sizeof(DiskCacheReader__uType), "Experimental.Cache.DiskCacheReader", false, 1, 3, 0);

    type->__interface_0.__fp_GetMeta = (::uString*(*)(void*, ::uString*))DiskCacheReader__GetMeta;
    type->__interface_0.__fp_Delete = (void(*)(void*))DiskCacheReader__Delete;
    type->__interface_0.__fp_get_Stream = (::app::Uno::IO::Stream*(*)(void*))DiskCacheReader__get_Stream;

    type->SetInterfaces(
        ::app::Experimental::Cache::ICacheReader__typeof(), offsetof(DiskCacheReader__uType, __interface_0));

    type->SetStrongRefs(
        "_cache", offsetof(DiskCacheReader, _cache),
        "_entry", offsetof(DiskCacheReader, _entry),
        "_stream", offsetof(DiskCacheReader, _stream));

    type->SetFields(3,
        ::uNewField("_cache", NULL, offsetof(DiskCacheReader, _cache), ::app::Experimental::Cache::DiskCache__typeof()),
        ::uNewField("_entry", NULL, offsetof(DiskCacheReader, _entry), ::app::Experimental::Cache::DiskCacheEntry__typeof()),
        ::uNewField("_stream", NULL, offsetof(DiskCacheReader, _stream), ::app::Experimental::Cache::DiskCacheReaderStream__typeof()));

    type->SetFunctions(5,
        ::uNewFunctionVoid("Delete", DiskCacheReader__Delete, 0, false),
        ::uNewFunction("get_DataSize", DiskCacheReader__get_DataSize, 0, false, ::app::Uno::Long__typeof()),
        ::uNewFunction("get_Stream", DiskCacheReader__get_Stream, 0, false, ::app::Uno::IO::Stream__typeof()),
        ::uNewFunction("GetMeta", DiskCacheReader__GetMeta, 0, false, ::app::Uno::String__typeof(), ::app::Uno::String__typeof()),
        ::uNewFunction(".ctor", DiskCacheReader__New_1, 0, true, DiskCacheReader__typeof()));

    ::uRegisterType(type);
    return type;
}

void DiskCacheReader___ObjInit(DiskCacheReader* __this)
{
}

void DiskCacheReader__Delete(DiskCacheReader* __this)
{
    ::uPtr< ::app::Experimental::Cache::DiskCache*>(__this->_cache)->DeleteRecord(::uPtr< ::app::Experimental::Cache::DiskCacheEntry*>(__this->_entry)->Id);
}

::uLong DiskCacheReader__get_DataSize(DiskCacheReader* __this)
{
    return ::uPtr< ::app::Experimental::Cache::DiskCacheEntry*>(__this->_entry)->Size;
}

::app::Uno::IO::Stream* DiskCacheReader__get_Stream(DiskCacheReader* __this)
{
    if (__this->_stream == NULL)
    {
        ::uString* fname = ::uPtr< ::app::Experimental::Cache::DiskCache*>(__this->_cache)->DataFile(__this->_entry);
        __this->_stream = ::app::Experimental::Cache::DiskCacheReaderStream__New_2(NULL);
        ::uPtr< ::app::Experimental::Cache::DiskCacheReaderStream*>(__this->_stream)->Backing = ::app::Uno::IO::File__OpenRead(NULL, fname);
    }

    return (::app::Uno::IO::Stream*)__this->_stream;
}

::uString* DiskCacheReader__GetMeta(DiskCacheReader* __this, ::uString* key)
{
    ::uString* o;

    if (::uPtr< ::app::Uno::Collections::Dictionary__string__string*>(::uPtr< ::app::Experimental::Cache::DiskCacheEntry*>(__this->_entry)->Meta)->TryGetValue(key, &o))
    {
        return o;
    }

    return NULL;
}

DiskCacheReader* DiskCacheReader__New_1(::uStatic* __this)
{
    DiskCacheReader* inst = (DiskCacheReader*)::uAllocObject(sizeof(DiskCacheReader), DiskCacheReader__typeof());
    inst->_ObjInit();
    return inst;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\Experimental.Http\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

DiskCacheReaderStream__uType* DiskCacheReaderStream__typeof()
{
    static ::uStaticStrong<DiskCacheReaderStream__uType*> type;
    if (type != NULL) return type;

    type = (DiskCacheReaderStream__uType*)::uAllocClassType(sizeof(DiskCacheReaderStream__uType), "Experimental.Cache.DiskCacheReaderStream", false, 1, 0, 0);

    type->SetBaseType(::app::Experimental::Cache::ProxyStream__typeof());
    type->__fp_get_CanWrite = (bool(*)(::app::Uno::IO::Stream*))DiskCacheReaderStream__get_CanWrite;

    type->SetInterfaces(
        ::app::Uno::IDisposable__typeof(), offsetof(DiskCacheReaderStream__uType, __interface_0));

    type->SetFunctions(1,
        ::uNewFunction(".ctor", DiskCacheReaderStream__New_2, 0, true, DiskCacheReaderStream__typeof()));

    ::uRegisterType(type);
    return type;
}

void DiskCacheReaderStream___ObjInit_2(DiskCacheReaderStream* __this)
{
    ::app::Experimental::Cache::ProxyStream___ObjInit_1(__this);
}

bool DiskCacheReaderStream__get_CanWrite(DiskCacheReaderStream* __this)
{
    return false;
}

DiskCacheReaderStream* DiskCacheReaderStream__New_2(::uStatic* __this)
{
    DiskCacheReaderStream* inst = (DiskCacheReaderStream*)::uAllocObject(sizeof(DiskCacheReaderStream), DiskCacheReaderStream__typeof());
    inst->_ObjInit_2();
    return inst;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\Experimental.Http\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

DiskCacheWriter__uType* DiskCacheWriter__typeof()
{
    static ::uStaticStrong<DiskCacheWriter__uType*> type;
    if (type != NULL) return type;

    type = (DiskCacheWriter__uType*)::uAllocClassType(sizeof(DiskCacheWriter__uType), "Experimental.Cache.DiskCacheWriter", false, 1, 3, 0);

    type->__interface_0.__fp_AddMeta = (void(*)(void*, ::uString*, ::uString*))DiskCacheWriter__AddMeta;
    type->__interface_0.__fp_Close = (void(*)(void*))DiskCacheWriter__Close;
    type->__interface_0.__fp_get_Stream = (::app::Uno::IO::Stream*(*)(void*))DiskCacheWriter__get_Stream;

    type->SetInterfaces(
        ::app::Experimental::Cache::ICacheWriter__typeof(), offsetof(DiskCacheWriter__uType, __interface_0));

    type->SetStrongRefs(
        "_cache", offsetof(DiskCacheWriter, _cache),
        "_entry", offsetof(DiskCacheWriter, _entry),
        "_stream", offsetof(DiskCacheWriter, _stream));

    type->SetFields(3,
        ::uNewField("_cache", NULL, offsetof(DiskCacheWriter, _cache), ::app::Experimental::Cache::DiskCache__typeof()),
        ::uNewField("_entry", NULL, offsetof(DiskCacheWriter, _entry), ::app::Experimental::Cache::DiskCacheEntry__typeof()),
        ::uNewField("_stream", NULL, offsetof(DiskCacheWriter, _stream), ::app::Experimental::Cache::DiskCacheWriterStream__typeof()));

    type->SetFunctions(5,
        ::uNewFunctionVoid("Abort", DiskCacheWriter__Abort, 0, false),
        ::uNewFunctionVoid("AddMeta", DiskCacheWriter__AddMeta, 0, false, ::app::Uno::String__typeof(), ::app::Uno::String__typeof()),
        ::uNewFunctionVoid("Close", DiskCacheWriter__Close, 0, false),
        ::uNewFunction("get_Stream", DiskCacheWriter__get_Stream, 0, false, ::app::Uno::IO::Stream__typeof()),
        ::uNewFunction(".ctor", DiskCacheWriter__New_1, 0, true, DiskCacheWriter__typeof()));

    ::uRegisterType(type);
    return type;
}

void DiskCacheWriter___ObjInit(DiskCacheWriter* __this)
{
}

void DiskCacheWriter__Abort(DiskCacheWriter* __this)
{
    if (__this->_stream != NULL)
    {
        ::uPtr< ::app::Experimental::Cache::DiskCacheWriterStream*>(__this->_stream)->Close();
    }

    __this->_stream = NULL;
    ::uPtr< ::app::Experimental::Cache::DiskCacheEntry*>(__this->_entry)->Status = 2;
    ::uPtr< ::app::Experimental::Cache::DiskCache*>(__this->_cache)->Update(__this->_entry);
}

void DiskCacheWriter__AddMeta(DiskCacheWriter* __this, ::uString* key, ::uString* value)
{
    ::uPtr< ::app::Uno::Collections::Dictionary__string__string*>(::uPtr< ::app::Experimental::Cache::DiskCacheEntry*>(__this->_entry)->Meta)->Item(key, value);
}

void DiskCacheWriter__Close(DiskCacheWriter* __this)
{
    if (__this->_stream != NULL)
    {
        ::uPtr< ::app::Experimental::Cache::DiskCacheEntry*>(__this->_entry)->Size = ::uPtr< ::app::Experimental::Cache::DiskCacheWriterStream*>(__this->_stream)->Position();
        ::uPtr< ::app::Experimental::Cache::DiskCacheWriterStream*>(__this->_stream)->Close();
    }

    __this->_stream = NULL;
    ::uPtr< ::app::Experimental::Cache::DiskCacheEntry*>(__this->_entry)->Status = 1;
    ::uPtr< ::app::Experimental::Cache::DiskCache*>(__this->_cache)->Update(__this->_entry);
}

::app::Uno::IO::Stream* DiskCacheWriter__get_Stream(DiskCacheWriter* __this)
{
    if (__this->_stream == NULL)
    {
        __this->_stream = ::app::Experimental::Cache::DiskCacheWriterStream__New_2(NULL);
        ::uString* fname = ::uPtr< ::app::Experimental::Cache::DiskCache*>(__this->_cache)->DataFile(__this->_entry);
        ::uPtr< ::app::Experimental::Cache::DiskCacheWriterStream*>(__this->_stream)->Backing = ::app::Uno::IO::File__OpenWrite(NULL, fname);
    }

    return (::app::Uno::IO::Stream*)__this->_stream;
}

DiskCacheWriter* DiskCacheWriter__New_1(::uStatic* __this)
{
    DiskCacheWriter* inst = (DiskCacheWriter*)::uAllocObject(sizeof(DiskCacheWriter), DiskCacheWriter__typeof());
    inst->_ObjInit();
    return inst;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\Experimental.Http\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

DiskCacheWriterStream__uType* DiskCacheWriterStream__typeof()
{
    static ::uStaticStrong<DiskCacheWriterStream__uType*> type;
    if (type != NULL) return type;

    type = (DiskCacheWriterStream__uType*)::uAllocClassType(sizeof(DiskCacheWriterStream__uType), "Experimental.Cache.DiskCacheWriterStream", false, 1, 0, 0);

    type->SetBaseType(::app::Experimental::Cache::ProxyStream__typeof());
    type->__fp_get_CanRead = (bool(*)(::app::Uno::IO::Stream*))DiskCacheWriterStream__get_CanRead;

    type->SetInterfaces(
        ::app::Uno::IDisposable__typeof(), offsetof(DiskCacheWriterStream__uType, __interface_0));

    type->SetFunctions(1,
        ::uNewFunction(".ctor", DiskCacheWriterStream__New_2, 0, true, DiskCacheWriterStream__typeof()));

    ::uRegisterType(type);
    return type;
}

void DiskCacheWriterStream___ObjInit_2(DiskCacheWriterStream* __this)
{
    ::app::Experimental::Cache::ProxyStream___ObjInit_1(__this);
}

bool DiskCacheWriterStream__get_CanRead(DiskCacheWriterStream* __this)
{
    return false;
}

DiskCacheWriterStream* DiskCacheWriterStream__New_2(::uStatic* __this)
{
    DiskCacheWriterStream* inst = (DiskCacheWriterStream*)::uAllocObject(sizeof(DiskCacheWriterStream), DiskCacheWriterStream__typeof());
    inst->_ObjInit_2();
    return inst;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\Experimental.Http\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

::uInterfaceType* ICache__typeof()
{
    static ::uStaticStrong< ::uInterfaceType*> type;
    if (type != NULL) return type;

    type = ::uAllocInterfaceType("Experimental.Cache.ICache");

    ::uRegisterType(type);
    return type;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\Experimental.Http\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

::uInterfaceType* ICacheReader__typeof()
{
    static ::uStaticStrong< ::uInterfaceType*> type;
    if (type != NULL) return type;

    type = ::uAllocInterfaceType("Experimental.Cache.ICacheReader");

    ::uRegisterType(type);
    return type;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\Experimental.Http\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

::uInterfaceType* ICacheWriter__typeof()
{
    static ::uStaticStrong< ::uInterfaceType*> type;
    if (type != NULL) return type;

    type = ::uAllocInterfaceType("Experimental.Cache.ICacheWriter");

    ::uRegisterType(type);
    return type;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\Experimental.Http\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

ProxyStream__uType* ProxyStream__typeof()
{
    static ::uStaticStrong<ProxyStream__uType*> type;
    if (type != NULL) return type;

    type = (ProxyStream__uType*)::uAllocClassType(sizeof(ProxyStream__uType), "Experimental.Cache.ProxyStream", false, 1, 1, 0);

    type->SetBaseType(::app::Uno::IO::Stream__typeof());
    type->__fp_Close = (void(*)(::app::Uno::IO::Stream*))ProxyStream__Close;
    type->__fp_Dispose_1 = (void(*)(::app::Uno::IO::Stream*, bool))ProxyStream__Dispose_1;
    type->__fp_Flush = (void(*)(::app::Uno::IO::Stream*))ProxyStream__Flush;
    type->__fp_get_CanRead = (bool(*)(::app::Uno::IO::Stream*))ProxyStream__get_CanRead;
    type->__fp_get_CanSeek = (bool(*)(::app::Uno::IO::Stream*))ProxyStream__get_CanSeek;
    type->__fp_get_CanTimeout = (bool(*)(::app::Uno::IO::Stream*))ProxyStream__get_CanTimeout;
    type->__fp_get_CanWrite = (bool(*)(::app::Uno::IO::Stream*))ProxyStream__get_CanWrite;
    type->__fp_get_Length = (::uLong(*)(::app::Uno::IO::Stream*))ProxyStream__get_Length;
    type->__fp_get_Position = (::uLong(*)(::app::Uno::IO::Stream*))ProxyStream__get_Position;
    type->__fp_get_ReadTimeout = (int(*)(::app::Uno::IO::Stream*))ProxyStream__get_ReadTimeout;
    type->__fp_get_WriteTimeout = (int(*)(::app::Uno::IO::Stream*))ProxyStream__get_WriteTimeout;
    type->__fp_Read = (int(*)(::app::Uno::IO::Stream*, ::uArray*, int, int))ProxyStream__Read;
    type->__fp_Seek = (::uLong(*)(::app::Uno::IO::Stream*, ::uLong, int))ProxyStream__Seek;
    type->__fp_set_Position = (void(*)(::app::Uno::IO::Stream*, ::uLong))ProxyStream__set_Position;
    type->__fp_set_ReadTimeout = (void(*)(::app::Uno::IO::Stream*, int))ProxyStream__set_ReadTimeout;
    type->__fp_set_WriteTimeout = (void(*)(::app::Uno::IO::Stream*, int))ProxyStream__set_WriteTimeout;
    type->__fp_SetLength = (void(*)(::app::Uno::IO::Stream*, ::uLong))ProxyStream__SetLength;
    type->__fp_Write = (void(*)(::app::Uno::IO::Stream*, ::uArray*, int, int))ProxyStream__Write;

    type->SetInterfaces(
        ::app::Uno::IDisposable__typeof(), offsetof(ProxyStream__uType, __interface_0));

    type->SetStrongRefs(
        "Backing", offsetof(ProxyStream, Backing));

    type->SetFields(1,
        ::uNewField("Backing", NULL, offsetof(ProxyStream, Backing), ::app::Uno::IO::Stream__typeof()));

    type->SetFunctions(1,
        ::uNewFunction(".ctor", ProxyStream__New_1, 0, true, ProxyStream__typeof()));

    ::uRegisterType(type);
    return type;
}

void ProxyStream___ObjInit_1(ProxyStream* __this)
{
    ::app::Uno::IO::Stream___ObjInit(__this);
}

void ProxyStream__Close(ProxyStream* __this)
{
    ::uPtr< ::app::Uno::IO::Stream*>(__this->Backing)->Close();
}

void ProxyStream__Dispose_1(ProxyStream* __this, bool disposing)
{
    ::uPtr< ::app::Uno::IO::Stream*>(__this->Backing)->Dispose_1(disposing);
}

void ProxyStream__Flush(ProxyStream* __this)
{
    ::uPtr< ::app::Uno::IO::Stream*>(__this->Backing)->Flush();
}

bool ProxyStream__get_CanRead(ProxyStream* __this)
{
    return true;
}

bool ProxyStream__get_CanSeek(ProxyStream* __this)
{
    return false;
}

bool ProxyStream__get_CanTimeout(ProxyStream* __this)
{
    return ::uPtr< ::app::Uno::IO::Stream*>(__this->Backing)->CanTimeout();
}

bool ProxyStream__get_CanWrite(ProxyStream* __this)
{
    return true;
}

::uLong ProxyStream__get_Length(ProxyStream* __this)
{
    return ::uPtr< ::app::Uno::IO::Stream*>(__this->Backing)->Length();
}

::uLong ProxyStream__get_Position(ProxyStream* __this)
{
    return ::uPtr< ::app::Uno::IO::Stream*>(__this->Backing)->Position();
}

int ProxyStream__get_ReadTimeout(ProxyStream* __this)
{
    return ::uPtr< ::app::Uno::IO::Stream*>(__this->Backing)->ReadTimeout();
}

int ProxyStream__get_WriteTimeout(ProxyStream* __this)
{
    return ::uPtr< ::app::Uno::IO::Stream*>(__this->Backing)->WriteTimeout();
}

ProxyStream* ProxyStream__New_1(::uStatic* __this)
{
    ProxyStream* inst = (ProxyStream*)::uAllocObject(sizeof(ProxyStream), ProxyStream__typeof());
    inst->_ObjInit_1();
    return inst;
}

int ProxyStream__Read(ProxyStream* __this, ::uArray* dst, int byteOffset, int byteCount)
{
    return ::uPtr< ::app::Uno::IO::Stream*>(__this->Backing)->Read(dst, byteOffset, byteCount);
}

::uLong ProxyStream__Seek(ProxyStream* __this, ::uLong byteOffset, int origin)
{
    return ::uPtr< ::app::Uno::IO::Stream*>(__this->Backing)->Seek(byteOffset, origin);
}

void ProxyStream__set_Position(ProxyStream* __this, ::uLong value)
{
    U_THROW(::app::Uno::NotSupportedException__New_3(NULL));
}

void ProxyStream__set_ReadTimeout(ProxyStream* __this, int value)
{
    ::uPtr< ::app::Uno::IO::Stream*>(__this->Backing)->ReadTimeout(value);
}

void ProxyStream__set_WriteTimeout(ProxyStream* __this, int value)
{
    ::uPtr< ::app::Uno::IO::Stream*>(__this->Backing)->WriteTimeout(value);
}

void ProxyStream__SetLength(ProxyStream* __this, ::uLong value)
{
    ::uPtr< ::app::Uno::IO::Stream*>(__this->Backing)->SetLength(value);
}

void ProxyStream__Write(ProxyStream* __this, ::uArray* src, int byteOffset, int byteCount)
{
    ::uPtr< ::app::Uno::IO::Stream*>(__this->Backing)->Write(src, byteOffset, byteCount);
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\Experimental.Http\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

RecordFileDiskCache__uType* RecordFileDiskCache__typeof()
{
    static ::uStaticStrong<RecordFileDiskCache__uType*> type;
    if (type != NULL) return type;

    type = (RecordFileDiskCache__uType*)::uAllocClassType(sizeof(RecordFileDiskCache__uType), "Experimental.Cache.RecordFileDiskCache", false, 0, 0, 0);

    type->SetBaseType(::app::Experimental::Cache::RecordFile__Experimental_Cache_DiskCacheEntry__typeof());
    type->__fp_LoadRecord = (::app::Experimental::Cache::DiskCacheEntry*(*)(::app::Experimental::Cache::RecordFile__Experimental_Cache_DiskCacheEntry*, ::app::Uno::IO::BinaryReader*))RecordFileDiskCache__LoadRecord;
    type->__fp_SaveRecord = (void(*)(::app::Experimental::Cache::RecordFile__Experimental_Cache_DiskCacheEntry*, ::app::Experimental::Cache::DiskCacheEntry*, ::app::Uno::IO::BinaryWriter*))RecordFileDiskCache__SaveRecord;

    type->SetFunctions(1,
        ::uNewFunction(".ctor", RecordFileDiskCache__New_1, 0, true, RecordFileDiskCache__typeof(), ::app::Uno::String__typeof()));

    ::uRegisterType(type);
    return type;
}

void RecordFileDiskCache___ObjInit_1(RecordFileDiskCache* __this, ::uString* filename)
{
    ::app::Experimental::Cache::RecordFile__Experimental_Cache_DiskCacheEntry___ObjInit(__this, filename);
}

::app::Experimental::Cache::DiskCacheEntry* RecordFileDiskCache__LoadRecord(RecordFileDiskCache* __this, ::app::Uno::IO::BinaryReader* r)
{
    return ::app::Experimental::Cache::DiskCacheEntry__Load(NULL, r);
}

RecordFileDiskCache* RecordFileDiskCache__New_1(::uStatic* __this, ::uString* filename)
{
    RecordFileDiskCache* inst = (RecordFileDiskCache*)::uAllocObject(sizeof(RecordFileDiskCache), RecordFileDiskCache__typeof());
    inst->_ObjInit_1(filename);
    return inst;
}

void RecordFileDiskCache__SaveRecord(RecordFileDiskCache* __this, ::app::Experimental::Cache::DiskCacheEntry* record, ::app::Uno::IO::BinaryWriter* w)
{
    ::uPtr< ::app::Experimental::Cache::DiskCacheEntry*>(record)->Write(w);
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\Experimental.Http\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

RecordHeader__uType* RecordHeader__typeof()
{
    static ::uStaticStrong<RecordHeader__uType*> type;
    if (type != NULL) return type;

    type = (RecordHeader__uType*)::uAllocClassType(sizeof(RecordHeader__uType), "Experimental.Cache.RecordHeader", false, 0, 2, 0);

    type->SetStrongRefs(
        "Next", offsetof(RecordHeader, Next),
        "Prev", offsetof(RecordHeader, Prev));

    type->SetFields(6,
        ::uNewField("Next", NULL, offsetof(RecordHeader, Next), RecordHeader__typeof()),
        ::uNewField("Position", NULL, offsetof(RecordHeader, Position), ::app::Uno::Long__typeof()),
        ::uNewField("Prev", NULL, offsetof(RecordHeader, Prev), RecordHeader__typeof()),
        ::uNewField("Size", NULL, offsetof(RecordHeader, Size), ::app::Uno::Int__typeof()),
        ::uNewField("Status", NULL, offsetof(RecordHeader, Status), ::app::Experimental::Cache::RecordStatus__typeof()),
        ::uNewField("Used", NULL, offsetof(RecordHeader, Used), ::app::Uno::Int__typeof()));

    type->SetFunctions(3,
        ::uNewFunction(".ctor", RecordHeader__New_1, 0, true, RecordHeader__typeof()),
        ::uNewFunction("Read", RecordHeader__Read, 0, true, RecordHeader__typeof(), ::app::Uno::IO::BinaryReader__typeof()),
        ::uNewFunctionVoid("Write", RecordHeader__Write, 0, false, ::app::Uno::IO::BinaryWriter__typeof()));

    ::uRegisterType(type);
    return type;
}

void RecordHeader___ObjInit(RecordHeader* __this)
{
}

RecordHeader* RecordHeader__New_1(::uStatic* __this)
{
    RecordHeader* inst = (RecordHeader*)::uAllocObject(sizeof(RecordHeader), RecordHeader__typeof());
    inst->_ObjInit();
    return inst;
}

RecordHeader* RecordHeader__Read(::uStatic* __this, ::app::Uno::IO::BinaryReader* r)
{
    RecordHeader* rh = RecordHeader__New_1(NULL);
    int mc = ::uPtr< ::app::Uno::IO::BinaryReader*>(r)->ReadInt();
    ::uPtr< RecordHeader*>(rh)->Status = r->ReadInt();
    rh->Size = r->ReadInt();
    rh->Used = r->ReadInt();

    if (mc != 473648345)
    {
        rh->Status = 2;
    }

    return rh;
}

void RecordHeader__Write(RecordHeader* __this, ::app::Uno::IO::BinaryWriter* w)
{
    ::uPtr< ::app::Uno::IO::BinaryWriter*>(w)->Write_13(473648345);
    w->Write_13(__this->Status);
    w->Write_13(__this->Size);
    w->Write_13(__this->Used);
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\Experimental.Http\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

::uEnumType* RecordStatus__typeof()
{
    static ::uStaticStrong< ::uEnumType*> type;
    if (type != NULL) return type;

    type = ::uAllocEnumType("Experimental.Cache.RecordStatus", ::app::Uno::Int__typeof(), 3);

    type->SetLiterals(
        "Free", 0LL,
        "Item", 1LL,
        "Corrupt", 2LL);

    ::uRegisterType(type);
    return type;
}

}}}
