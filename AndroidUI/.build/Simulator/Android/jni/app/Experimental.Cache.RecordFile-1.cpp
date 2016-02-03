#include <app/Experimental.Cache.DiskCacheEntry.h>
#include <app/Experimental.Cache.RecordFile__Experimental_Cache_DiskCacheEntry.h>
#include <app/Experimental.Cache.RecordHeader.h>
#include <app/Experimental.Cache.RecordStatus.h>
#include <app/Uno.Bool.h>
#include <app/Uno.Byte.h>
#include <app/Uno.Collections.Dictionary__Experimental_Cache_DiskCacheEntry__-87a4d55f.h>
#include <app/Uno.Collections.Dictionary2_Enumerator__Experimental_Cache_Disk-82636317.h>
#include <app/Uno.Collections.IList__Experimental_Cache_DiskCacheEntry.h>
#include <app/Uno.Collections.KeyValuePair__Experimental_Cache_DiskCacheEntry-bfbae3c6.h>
#include <app/Uno.Collections.List__Experimental_Cache_DiskCacheEntry.h>
#include <app/Uno.Diagnostics.Debug.h>
#include <app/Uno.Diagnostics.DebugMessageType.h>
#include <app/Uno.Exception.h>
#include <app/Uno.Int.h>
#include <app/Uno.IO.BinaryReader.h>
#include <app/Uno.IO.BinaryWriter.h>
#include <app/Uno.IO.File.h>
#include <app/Uno.IO.MemoryStream.h>
#include <app/Uno.IO.SeekOrigin.h>
#include <app/Uno.IO.Stream.h>
#include <app/Uno.Long.h>
#include <app/Uno.String.h>

namespace app {
namespace Experimental {
namespace Cache {

// This file was generated based on 'C:\ProgramData\Uno\Packages\Experimental.Http\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

RecordFile__Experimental_Cache_DiskCacheEntry__uType* RecordFile__Experimental_Cache_DiskCacheEntry__typeof()
{
    static ::uStaticStrong<RecordFile__Experimental_Cache_DiskCacheEntry__uType*> type;
    if (type != NULL) return type;

    type = (RecordFile__Experimental_Cache_DiskCacheEntry__uType*)::uAllocClassType(sizeof(RecordFile__Experimental_Cache_DiskCacheEntry__uType), "Experimental.Cache.RecordFile<Experimental.Cache.DiskCacheEntry>", false, 0, 5, 0);

    type->SetStrongRefs(
        "_filename", offsetof(RecordFile__Experimental_Cache_DiskCacheEntry, _filename),
        "_firstRecord", offsetof(RecordFile__Experimental_Cache_DiskCacheEntry, _firstRecord),
        "_records", offsetof(RecordFile__Experimental_Cache_DiskCacheEntry, _records),
        "_stream", offsetof(RecordFile__Experimental_Cache_DiskCacheEntry, _stream),
        "_writer", offsetof(RecordFile__Experimental_Cache_DiskCacheEntry, _writer));

    type->SetFields(5,
        ::uNewField("_filename", NULL, offsetof(RecordFile__Experimental_Cache_DiskCacheEntry, _filename), ::app::Uno::String__typeof()),
        ::uNewField("_firstRecord", NULL, offsetof(RecordFile__Experimental_Cache_DiskCacheEntry, _firstRecord), ::app::Experimental::Cache::RecordHeader__typeof()),
        ::uNewField("_records", NULL, offsetof(RecordFile__Experimental_Cache_DiskCacheEntry, _records), ::app::Uno::Collections::Dictionary__Experimental_Cache_DiskCacheEntry__Experimental_Cache_RecordHeader__typeof()),
        ::uNewField("_stream", NULL, offsetof(RecordFile__Experimental_Cache_DiskCacheEntry, _stream), ::app::Uno::IO::Stream__typeof()),
        ::uNewField("_writer", NULL, offsetof(RecordFile__Experimental_Cache_DiskCacheEntry, _writer), ::app::Uno::IO::BinaryWriter__typeof()));

    type->SetFunctions(4,
        ::uNewFunctionVoid("Close", RecordFile__Experimental_Cache_DiskCacheEntry__Close, 0, false),
        ::uNewFunctionVoid("Delete", RecordFile__Experimental_Cache_DiskCacheEntry__Delete, 0, false, ::app::Experimental::Cache::DiskCacheEntry__typeof()),
        ::uNewFunction("GetAllRecords", RecordFile__Experimental_Cache_DiskCacheEntry__GetAllRecords, 0, false, ::app::Uno::Collections::IList__Experimental_Cache_DiskCacheEntry__typeof()),
        ::uNewFunctionVoid("Update", RecordFile__Experimental_Cache_DiskCacheEntry__Update, 0, false, ::app::Experimental::Cache::DiskCacheEntry__typeof()));

    ::uRegisterType(type);
    return type;
}

void RecordFile__Experimental_Cache_DiskCacheEntry___ObjInit(RecordFile__Experimental_Cache_DiskCacheEntry* __this, ::uString* filename)
{
    __this->_records = ::app::Uno::Collections::Dictionary__Experimental_Cache_DiskCacheEntry__Experimental_Cache_RecordHeader__New_1(NULL);
    __this->_filename = filename;
    __this->LoadCurrent();
    __this->_stream = ::app::Uno::IO::File__OpenWrite(NULL, __this->_filename);
    __this->_writer = ::app::Uno::IO::BinaryWriter__New_1(NULL, __this->_stream);
    ::app::Experimental::Cache::RecordHeader* h = __this->_firstRecord;

    while (h != NULL)
    {
        __this->Write(h);
        h = ::uPtr< ::app::Experimental::Cache::RecordHeader*>(h)->Next;
    }

    for (::app::Uno::Collections::Dictionary2_Enumerator__Experimental_Cache_DiskCacheEntry__Experimental_Cache_RecordHeader enum_123 = ::uPtr< ::app::Uno::Collections::Dictionary__Experimental_Cache_DiskCacheEntry__Experimental_Cache_RecordHeader*>(__this->_records)->GetEnumerator(); enum_123.MoveNext(); )
    {
        ::app::Uno::Collections::KeyValuePair__Experimental_Cache_DiskCacheEntry__Experimental_Cache_RecordHeader record = enum_123.Current();
        __this->Write(record.Value());
        __this->SaveRecord(record.Key(), __this->_writer);
    }

    ::uPtr< ::app::Uno::IO::Stream*>(__this->_stream)->Flush();
}

::app::Experimental::Cache::RecordHeader* RecordFile__Experimental_Cache_DiskCacheEntry__Alloc(RecordFile__Experimental_Cache_DiskCacheEntry* __this, int len)
{
    ::app::Experimental::Cache::RecordHeader* rh = __this->_firstRecord;
    ::app::Experimental::Cache::RecordHeader* final = rh;

    while (rh != NULL)
    {
        final = rh;

        if ((::uPtr< ::app::Experimental::Cache::RecordHeader*>(rh)->Status == 0) && (::uPtr< ::app::Experimental::Cache::RecordHeader*>(rh)->Size >= len))
        {
            return rh;
        }

        rh = ::uPtr< ::app::Experimental::Cache::RecordHeader*>(rh)->Next;
    }

    rh = ::app::Experimental::Cache::RecordHeader__New_1(NULL);
    ::uPtr< ::app::Experimental::Cache::RecordHeader*>(rh)->Size = len;

    if (final != NULL)
    {
        ::uPtr< ::app::Experimental::Cache::RecordHeader*>(rh)->Position = (::uPtr< ::app::Experimental::Cache::RecordHeader*>(final)->Position + 16ll) + (::uLong)::uPtr< ::app::Experimental::Cache::RecordHeader*>(final)->Size;
        final->Next = rh;
        rh->Prev = final;
    }

    if (__this->_firstRecord == NULL)
    {
        __this->_firstRecord = rh;
    }

    return rh;
}

void RecordFile__Experimental_Cache_DiskCacheEntry__Close(RecordFile__Experimental_Cache_DiskCacheEntry* __this)
{
    ::uPtr< ::app::Uno::IO::Stream*>(__this->_stream)->Close();
    __this->_stream = NULL;
    __this->_writer = NULL;
}

void RecordFile__Experimental_Cache_DiskCacheEntry__Delete(RecordFile__Experimental_Cache_DiskCacheEntry* __this, ::app::Experimental::Cache::DiskCacheEntry* item)
{
    ::app::Experimental::Cache::RecordHeader* rh;

    if (!::uPtr< ::app::Uno::Collections::Dictionary__Experimental_Cache_DiskCacheEntry__Experimental_Cache_RecordHeader*>(__this->_records)->TryGetValue(item, &rh))
    {
        return;
    }

    __this->Free(rh);
    ::uPtr< ::app::Uno::Collections::Dictionary__Experimental_Cache_DiskCacheEntry__Experimental_Cache_RecordHeader*>(__this->_records)->Remove(item);
    ::uPtr< ::app::Uno::IO::Stream*>(__this->_stream)->Flush();
}

void RecordFile__Experimental_Cache_DiskCacheEntry__Free(RecordFile__Experimental_Cache_DiskCacheEntry* __this, ::app::Experimental::Cache::RecordHeader* rh)
{
    ::uPtr< ::app::Experimental::Cache::RecordHeader*>(rh)->Status = 0;
    __this->Write(rh);
}

::uObject* RecordFile__Experimental_Cache_DiskCacheEntry__GetAllRecords(RecordFile__Experimental_Cache_DiskCacheEntry* __this)
{
    ::app::Uno::Collections::List__Experimental_Cache_DiskCacheEntry* list = ::app::Uno::Collections::List__Experimental_Cache_DiskCacheEntry__New_1(NULL);

    for (::app::Uno::Collections::Dictionary2_Enumerator__Experimental_Cache_DiskCacheEntry__Experimental_Cache_RecordHeader enum_124 = ::uPtr< ::app::Uno::Collections::Dictionary__Experimental_Cache_DiskCacheEntry__Experimental_Cache_RecordHeader*>(__this->_records)->GetEnumerator(); enum_124.MoveNext(); )
    {
        ::app::Uno::Collections::KeyValuePair__Experimental_Cache_DiskCacheEntry__Experimental_Cache_RecordHeader record = enum_124.Current();
        ::uPtr< ::app::Uno::Collections::List__Experimental_Cache_DiskCacheEntry*>(list)->Add(record.Key());
    }

    return (::uObject*)list;
}

void RecordFile__Experimental_Cache_DiskCacheEntry__LoadBlocks(RecordFile__Experimental_Cache_DiskCacheEntry* __this, ::app::Uno::IO::Stream* stream)
{
    ::app::Uno::IO::BinaryReader* r = ::app::Uno::IO::BinaryReader__New_1(NULL, stream);
    ::app::Experimental::Cache::RecordHeader* prev = NULL;
    ::uLong position = 0ll;

    while (position < ::uPtr< ::app::Uno::IO::Stream*>(stream)->Length())
    {
        ::uPtr< ::app::Uno::IO::Stream*>(stream)->Seek(position, 0);
        ::app::Experimental::Cache::RecordHeader* rh = ::app::Experimental::Cache::RecordHeader__Read(NULL, r);

        if (::uPtr< ::app::Experimental::Cache::RecordHeader*>(rh)->Status == 2)
        {
            ::app::Uno::Diagnostics::Debug__Log_5(NULL, ::uGetConstString("Corrupt record file: header"), 1, ::uGetConstString("C:\\ProgramData\\Uno\\Packages\\Experimental.Http\\0.11.3\\$.uno"), 1012);
            break;
        }

        ::uPtr< ::app::Experimental::Cache::RecordHeader*>(rh)->Position = position;
        rh->Prev = prev;

        if (prev != NULL)
        {
            ::uPtr< ::app::Experimental::Cache::RecordHeader*>(prev)->Next = rh;
        }
        else
        {
            __this->_firstRecord = rh;
        }

        prev = rh;

        if (((position + 16ll) + (::uLong)rh->Used) > stream->Length())
        {
            ::app::Uno::Diagnostics::Debug__Log_5(NULL, ::app::Uno::String__op_Addition_1(NULL, ::app::Uno::String__op_Addition(NULL, ::uBox< ::uLong>(::app::Uno::Long__typeof(), (position + 16ll) + (::uLong)::uPtr< ::app::Experimental::Cache::RecordHeader*>(rh)->Used), ::uGetConstString("  >  ")), ::uBox< ::uLong>(::app::Uno::Long__typeof(), ::uPtr< ::app::Uno::IO::Stream*>(stream)->Length())), 1, ::uGetConstString("C:\\ProgramData\\Uno\\Packages\\Experimental.Http\\0.11.3\\$.uno"), 1026);
            ::app::Uno::Diagnostics::Debug__Log_5(NULL, ::uGetConstString("Corrupt record file: truncated"), 1, ::uGetConstString("C:\\ProgramData\\Uno\\Packages\\Experimental.Http\\0.11.3\\$.uno"), 1027);
            break;
        }

        if (rh->Status == 1)
        {
            ::app::Experimental::Cache::DiskCacheEntry* record = __this->LoadRecord(r);

            if (::app::Uno::Object__ReferenceEquals(NULL, (::uObject*)record, NULL))
            {
                ::uPtr< ::app::Experimental::Cache::RecordHeader*>(rh)->Status = 0;
            }
            else
            {
                ::uPtr< ::app::Uno::Collections::Dictionary__Experimental_Cache_DiskCacheEntry__Experimental_Cache_RecordHeader*>(__this->_records)->Item(record, rh);
            }
        }

        position = position + (::uLong)(16 + rh->Size);
    }
}

void RecordFile__Experimental_Cache_DiskCacheEntry__LoadCurrent(RecordFile__Experimental_Cache_DiskCacheEntry* __this)
{
    ::app::Uno::IO::Stream* stream = NULL;

    try
    {
        if (::app::Uno::IO::File__Exists(NULL, __this->_filename))
        {
            stream = ::app::Uno::IO::File__OpenRead(NULL, __this->_filename);
            __this->LoadBlocks(stream);
            ::uPtr< ::app::Uno::IO::Stream*>(stream)->Close();
        }
    }
    catch (const ::uThrowable& __t)
    {
        if (::uIs(__t.Exception, ::app::Uno::Exception__typeof()))
        {
            ::app::Uno::Exception* e = (::app::Uno::Exception*)__t.Exception;
            ::app::Uno::Diagnostics::Debug__Log_2(NULL, (::uObject*)e, 1, ::uGetConstString("C:\\ProgramData\\Uno\\Packages\\Experimental.Http\\0.11.3\\$.uno"), 989);

            if (stream != NULL)
            {
                ::uPtr< ::app::Uno::IO::Stream*>(stream)->Close();
            }

            return;
        }
        else
        {
            throw __t;
        }
    }
}

void RecordFile__Experimental_Cache_DiskCacheEntry__Update(RecordFile__Experimental_Cache_DiskCacheEntry* __this, ::app::Experimental::Cache::DiskCacheEntry* item)
{
    ::app::Uno::IO::MemoryStream* ms = ::app::Uno::IO::MemoryStream__New_1(NULL);
    ::app::Uno::IO::BinaryWriter* mw = ::app::Uno::IO::BinaryWriter__New_1(NULL, (::app::Uno::IO::Stream*)ms);
    __this->SaveRecord(item, mw);
    int len = (int)::uPtr< ::app::Uno::IO::MemoryStream*>(ms)->Length();
    ::app::Experimental::Cache::RecordHeader* rh;

    if (::uPtr< ::app::Uno::Collections::Dictionary__Experimental_Cache_DiskCacheEntry__Experimental_Cache_RecordHeader*>(__this->_records)->TryGetValue(item, &rh))
    {
        if (::uPtr< ::app::Experimental::Cache::RecordHeader*>(rh)->Size < len)
        {
            __this->Free(rh);
            rh = __this->Alloc(len);
            ::uPtr< ::app::Uno::Collections::Dictionary__Experimental_Cache_DiskCacheEntry__Experimental_Cache_RecordHeader*>(__this->_records)->Item(item, rh);
        }
    }
    else
    {
        rh = __this->Alloc(len);
        ::uPtr< ::app::Uno::Collections::Dictionary__Experimental_Cache_DiskCacheEntry__Experimental_Cache_RecordHeader*>(__this->_records)->Item(item, rh);
    }

    ::uPtr< ::app::Experimental::Cache::RecordHeader*>(rh)->Used = len;
    rh->Status = 1;
    __this->Write(rh);
    ::uArray* b = ms->GetBuffer();
    ::uPtr< ::app::Uno::IO::Stream*>(__this->_stream)->Write(b, 0, (int)ms->Length());
    ::uPtr< ::app::Uno::IO::Stream*>(__this->_stream)->Flush();
}

void RecordFile__Experimental_Cache_DiskCacheEntry__Write(RecordFile__Experimental_Cache_DiskCacheEntry* __this, ::app::Experimental::Cache::RecordHeader* rh)
{
    ::uPtr< ::app::Uno::IO::Stream*>(__this->_stream)->Seek(::uPtr< ::app::Experimental::Cache::RecordHeader*>(rh)->Position, 0);
    rh->Write(__this->_writer);
}

}}}
