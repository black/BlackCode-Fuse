// This file was generated based on '(multiple files)'.
// WARNING: Changes might be lost if you edit this file directly.

#include <Experimental.Cache.CacheLoaded.h>
#include <Experimental.Cache.ICache.h>
#include <Experimental.Cache.ICacheReader.h>
#include <Experimental.Cache.ICacheWriter.h>
#include <Experimental.Cache.ProxyStream.h>
#include <Uno.Bool.h>
#include <Uno.Byte.h>
#include <Uno.Int.h>
#include <Uno.IO.SeekOrigin.h>
#include <Uno.IO.Stream.h>
#include <Uno.Long.h>
#include <Uno.NotSupportedException.h>
#include <Uno.String.h>
static uType* TYPES[1];

namespace g{
namespace Experimental{
namespace Cache{

// C:\ProgramData\Uno\Packages\Experimental.Http\0.18.8\$.uno(674)
// ---------------------------------------------------------------

// public delegate void CacheLoaded(Experimental.Cache.ICacheReader record) :674
uDelegateType* CacheLoaded_typeof()
{
    static uSStrong<uDelegateType*> type;
    if (type != NULL) return type;

    type = uDelegateType::New("Experimental.Cache.CacheLoaded", 1, 0);
    type->SetSignature(uVoid_typeof(),
        ::g::Experimental::Cache::ICacheReader_typeof());
    return type;
}

// C:\ProgramData\Uno\Packages\Experimental.Http\0.18.8\$.uno(676)
// ---------------------------------------------------------------

// public abstract interface ICache :676
// {
uInterfaceType* ICache_typeof()
{
    static uSStrong<uInterfaceType*> type;
    if (type != NULL) return type;

    type = uInterfaceType::New("Experimental.Cache.ICache", 0, 0);
    type->Reflection.SetFunctions(3,
        new uFunction("CreateRecord", NULL, NULL, offsetof(ICache, fp_CreateRecord), false, ::g::Experimental::Cache::ICacheWriter_typeof(), 1, ::g::Uno::String_typeof()),
        new uFunction("DeleteRecord", NULL, NULL, offsetof(ICache, fp_DeleteRecord), false, uVoid_typeof(), 1, ::g::Uno::String_typeof()),
        new uFunction("LoadRecord", NULL, NULL, offsetof(ICache, fp_LoadRecord), false, ::g::Uno::Bool_typeof(), 2, ::g::Uno::String_typeof(), ::g::Experimental::Cache::CacheLoaded_typeof()));
    return type;
}
// }

// C:\ProgramData\Uno\Packages\Experimental.Http\0.18.8\$.uno(665)
// ---------------------------------------------------------------

// public abstract interface ICacheReader :665
// {
uInterfaceType* ICacheReader_typeof()
{
    static uSStrong<uInterfaceType*> type;
    if (type != NULL) return type;

    type = uInterfaceType::New("Experimental.Cache.ICacheReader", 0, 0);
    type->Reflection.SetFunctions(3,
        new uFunction("Delete", NULL, NULL, offsetof(ICacheReader, fp_Delete), false, uVoid_typeof(), 0),
        new uFunction("GetMeta", NULL, NULL, offsetof(ICacheReader, fp_GetMeta), false, ::g::Uno::String_typeof(), 1, ::g::Uno::String_typeof()),
        new uFunction("get_Stream", NULL, NULL, offsetof(ICacheReader, fp_get_Stream), false, ::g::Uno::IO::Stream_typeof(), 0));
    return type;
}
// }

// C:\ProgramData\Uno\Packages\Experimental.Http\0.18.8\$.uno(656)
// ---------------------------------------------------------------

// public abstract interface ICacheWriter :656
// {
uInterfaceType* ICacheWriter_typeof()
{
    static uSStrong<uInterfaceType*> type;
    if (type != NULL) return type;

    type = uInterfaceType::New("Experimental.Cache.ICacheWriter", 0, 0);
    type->Reflection.SetFunctions(3,
        new uFunction("AddMeta", NULL, NULL, offsetof(ICacheWriter, fp_AddMeta), false, uVoid_typeof(), 2, ::g::Uno::String_typeof(), ::g::Uno::String_typeof()),
        new uFunction("Close", NULL, NULL, offsetof(ICacheWriter, fp_Close), false, uVoid_typeof(), 0),
        new uFunction("get_Stream", NULL, NULL, offsetof(ICacheWriter, fp_get_Stream), false, ::g::Uno::IO::Stream_typeof(), 0));
    return type;
}
// }

// C:\ProgramData\Uno\Packages\Experimental.Http\0.18.8\$.uno(120)
// ---------------------------------------------------------------

// internal sealed class ProxyStream :120
// {
::g::Uno::IO::Stream_type* ProxyStream_typeof()
{
    static uSStrong< ::g::Uno::IO::Stream_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 1;
    options.InterfaceCount = 1;
    options.ObjectSize = sizeof(ProxyStream);
    options.TypeSize = sizeof(::g::Uno::IO::Stream_type);
    type = (::g::Uno::IO::Stream_type*)uClassType::New("Experimental.Cache.ProxyStream", options);
    type->SetBase(::g::Uno::IO::Stream_typeof());
    type->fp_get_CanRead = (void(*)(::g::Uno::IO::Stream*, bool*))ProxyStream__get_CanRead_fn;
    type->fp_get_CanSeek = (void(*)(::g::Uno::IO::Stream*, bool*))ProxyStream__get_CanSeek_fn;
    type->fp_get_CanTimeout = (void(*)(::g::Uno::IO::Stream*, bool*))ProxyStream__get_CanTimeout_fn;
    type->fp_get_CanWrite = (void(*)(::g::Uno::IO::Stream*, bool*))ProxyStream__get_CanWrite_fn;
    type->fp_Close = (void(*)(::g::Uno::IO::Stream*))ProxyStream__Close_fn;
    type->fp_Dispose1 = (void(*)(::g::Uno::IO::Stream*, bool*))ProxyStream__Dispose1_fn;
    type->fp_Flush = (void(*)(::g::Uno::IO::Stream*))ProxyStream__Flush_fn;
    type->fp_get_Length = (void(*)(::g::Uno::IO::Stream*, int64_t*))ProxyStream__get_Length_fn;
    type->fp_get_Position = (void(*)(::g::Uno::IO::Stream*, int64_t*))ProxyStream__get_Position_fn;
    type->fp_set_Position = (void(*)(::g::Uno::IO::Stream*, int64_t*))ProxyStream__set_Position_fn;
    type->fp_Read = (void(*)(::g::Uno::IO::Stream*, uArray*, int*, int*, int*))ProxyStream__Read_fn;
    type->fp_get_ReadTimeout = (void(*)(::g::Uno::IO::Stream*, int*))ProxyStream__get_ReadTimeout_fn;
    type->fp_set_ReadTimeout = (void(*)(::g::Uno::IO::Stream*, int*))ProxyStream__set_ReadTimeout_fn;
    type->fp_Seek = (void(*)(::g::Uno::IO::Stream*, int64_t*, int*, int64_t*))ProxyStream__Seek_fn;
    type->fp_SetLength = (void(*)(::g::Uno::IO::Stream*, int64_t*))ProxyStream__SetLength_fn;
    type->fp_Write = (void(*)(::g::Uno::IO::Stream*, uArray*, int*, int*))ProxyStream__Write_fn;
    type->fp_get_WriteTimeout = (void(*)(::g::Uno::IO::Stream*, int*))ProxyStream__get_WriteTimeout_fn;
    type->fp_set_WriteTimeout = (void(*)(::g::Uno::IO::Stream*, int*))ProxyStream__set_WriteTimeout_fn;
    type->interface0.fp_Dispose = (void(*)(uObject*))::g::Uno::IO::Stream__Dispose_fn;
    ::TYPES[0] = ::g::Uno::IO::Stream_typeof();
    type->SetInterfaces(
        ::g::Uno::IDisposable_typeof(), offsetof(::g::Uno::IO::Stream_type, interface0));
    type->SetFields(0,
        ::g::Uno::IO::Stream_typeof(), offsetof(::g::Experimental::Cache::ProxyStream, Backing), 0);
    return type;
}

// public override sealed bool get_CanRead() :124
void ProxyStream__get_CanRead_fn(ProxyStream* __this, bool* __retval)
{
    return *__retval = true, void();
}

// public override sealed bool get_CanSeek() :126
void ProxyStream__get_CanSeek_fn(ProxyStream* __this, bool* __retval)
{
    return *__retval = false, void();
}

// public override sealed bool get_CanTimeout() :128
void ProxyStream__get_CanTimeout_fn(ProxyStream* __this, bool* __retval)
{
    return *__retval = uPtr(__this->Backing)->CanTimeout(), void();
}

// public override sealed bool get_CanWrite() :125
void ProxyStream__get_CanWrite_fn(ProxyStream* __this, bool* __retval)
{
    return *__retval = true, void();
}

// public override sealed void Close() :161
void ProxyStream__Close_fn(ProxyStream* __this)
{
    uPtr(__this->Backing)->Close();
}

// public override sealed void Dispose(bool disposing) :160
void ProxyStream__Dispose1_fn(ProxyStream* __this, bool* disposing)
{
    bool disposing_ = *disposing;
    uPtr(__this->Backing)->Dispose1(disposing_);
}

// public override sealed void Flush() :157
void ProxyStream__Flush_fn(ProxyStream* __this)
{
    uPtr(__this->Backing)->Flush();
}

// public override sealed long get_Length() :142
void ProxyStream__get_Length_fn(ProxyStream* __this, int64_t* __retval)
{
    return *__retval = uPtr(__this->Backing)->Length(), void();
}

// public override sealed long get_Position() :145
void ProxyStream__get_Position_fn(ProxyStream* __this, int64_t* __retval)
{
    return *__retval = uPtr(__this->Backing)->Position(), void();
}

// public override sealed void set_Position(long value) :146
void ProxyStream__set_Position_fn(ProxyStream* __this, int64_t* value)
{
    U_THROW(::g::Uno::NotSupportedException::New4());
}

// public override sealed int Read(byte[] dst, int byteOffset, int byteCount) :151
void ProxyStream__Read_fn(ProxyStream* __this, uArray* dst, int* byteOffset, int* byteCount, int* __retval)
{
    int byteOffset_ = *byteOffset;
    int byteCount_ = *byteCount;
    return *__retval = uPtr(__this->Backing)->Read(dst, byteOffset_, byteCount_), void();
}

// public override sealed int get_ReadTimeout() :132
void ProxyStream__get_ReadTimeout_fn(ProxyStream* __this, int* __retval)
{
    return *__retval = uPtr(__this->Backing)->ReadTimeout(), void();
}

// public override sealed void set_ReadTimeout(int value) :133
void ProxyStream__set_ReadTimeout_fn(ProxyStream* __this, int* value)
{
    int value_ = *value;
    uPtr(__this->Backing)->ReadTimeout(value_);
}

// public override sealed long Seek(long byteOffset, Uno.IO.SeekOrigin origin) :155
void ProxyStream__Seek_fn(ProxyStream* __this, int64_t* byteOffset, int* origin, int64_t* __retval)
{
    int64_t byteOffset_ = *byteOffset;
    int origin_ = *origin;
    return *__retval = uPtr(__this->Backing)->Seek(byteOffset_, origin_), void();
}

// public override sealed void SetLength(long value) :149
void ProxyStream__SetLength_fn(ProxyStream* __this, int64_t* value)
{
    int64_t value_ = *value;
    uPtr(__this->Backing)->SetLength(value_);
}

// public override sealed void Write(byte[] src, int byteOffset, int byteCount) :153
void ProxyStream__Write_fn(ProxyStream* __this, uArray* src, int* byteOffset, int* byteCount)
{
    int byteOffset_ = *byteOffset;
    int byteCount_ = *byteCount;
    uPtr(__this->Backing)->Write(src, byteOffset_, byteCount_);
}

// public override sealed int get_WriteTimeout() :138
void ProxyStream__get_WriteTimeout_fn(ProxyStream* __this, int* __retval)
{
    return *__retval = uPtr(__this->Backing)->WriteTimeout(), void();
}

// public override sealed void set_WriteTimeout(int value) :139
void ProxyStream__set_WriteTimeout_fn(ProxyStream* __this, int* value)
{
    int value_ = *value;
    uPtr(__this->Backing)->WriteTimeout(value_);
}
// }

}}} // ::g::Experimental::Cache
