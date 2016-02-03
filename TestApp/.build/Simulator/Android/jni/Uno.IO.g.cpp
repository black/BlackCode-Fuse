// This file was generated based on '(multiple files)'.
// WARNING: Changes might be lost if you edit this file directly.

#include <Uno.ArgumentException.h>
#include <Uno.ArgumentNullException.h>
#include <Uno.ArgumentOutOfRangeException.h>
#include <Uno.Array.h>
#include <Uno.Bool.h>
#include <Uno.Byte.h>
#include <Uno.Char.h>
#include <Uno.Collections.List-1.h>
#include <Uno.Double.h>
#include <Uno.Float.h>
#include <Uno.FormatException.h>
#include <Uno.GC.h>
#include <Uno.Int.h>
#include <Uno.IO.BinaryReader.h>
#include <Uno.IO.BinaryWriter.h>
#include <Uno.IO.CppXliStream.h>
#include <Uno.IO.CppXliStreamHandle.h>
#include <Uno.IO.Directory.h>
#include <Uno.IO.EndOfStreamException.h>
#include <Uno.IO.File.h>
#include <Uno.IO.FileMode.h>
#include <Uno.IO.FileSystemImpl.h>
#include <Uno.IO.IOException.h>
#include <Uno.IO.MemoryStream.h>
#include <Uno.IO.Path.h>
#include <Uno.IO.SeekOrigin.h>
#include <Uno.IO.Stream.h>
#include <Uno.IO.StreamReader.h>
#include <Uno.IO.StreamWriter.h>
#include <Uno.IO.StringWriter.h>
#include <Uno.IO.TextReader.h>
#include <Uno.IO.TextWriter.h>
#include <Uno.IO.UserDirectory.h>
#include <Uno.Long.h>
#include <Uno.Math.h>
#include <Uno.NotImplementedException.h>
#include <Uno.NotSupportedException.h>
#include <Uno.Object.h>
#include <Uno.ObjectDisposedException.h>
#include <Uno.Runtime.Implementation.BufferImpl.h>
#include <Uno.Runtime.Implementation.TextEncodingImpl.h>
#include <Uno.String.h>
#include <Uno.Text.Decoder.h>
#include <Uno.Text.Encoding.h>
#include <Uno.Text.StringBuilder.h>
#include <Uno.UInt.h>
#include <Uno.ULong.h>
#include <Uno/XliInterop.h>
#include <Xli/Array.h>
#include <Xli/Disk.h>
#include <Xli/Text.h>
static uString* STRINGS[10];
static uType* TYPES[19];

namespace g{
namespace Uno{
namespace IO{

// C:\ProgramData\Uno\Packages\UnoCore\0.19.6\Source\Uno\IO\$.uno(8)
// -----------------------------------------------------------------

// public sealed class BinaryReader :8
// {
BinaryReader_type* BinaryReader_typeof()
{
    static uSStrong<BinaryReader_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 3;
    options.InterfaceCount = 1;
    options.ObjectSize = sizeof(BinaryReader);
    options.TypeSize = sizeof(BinaryReader_type);
    type = (BinaryReader_type*)uClassType::New("Uno.IO.BinaryReader", options);
    type->interface0.fp_Dispose = (void(*)(uObject*))BinaryReader__Dispose_fn;
    ::STRINGS[0] = uString::Const("byteCount");
    ::STRINGS[1] = uString::Const("Invalid 7 bit encoded int");
    ::TYPES[0] = ::g::Uno::Byte_typeof()->Array();
    ::TYPES[1] = ::g::Uno::Int_typeof();
    ::TYPES[2] = ::g::Uno::Collections::List_typeof()->MakeType(::g::Uno::Byte_typeof());
    ::TYPES[3] = ::g::Uno::String_typeof();
    type->SetInterfaces(
        ::g::Uno::IDisposable_typeof(), offsetof(BinaryReader_type, interface0));
    type->SetFields(0,
        ::g::Uno::Byte_typeof()->Array(), offsetof(::g::Uno::IO::BinaryReader, _buffer), 0,
        ::g::Uno::IO::Stream_typeof(), offsetof(::g::Uno::IO::BinaryReader, _stream), 0,
        ::g::Uno::Bool_typeof(), offsetof(::g::Uno::IO::BinaryReader, _LittleEndian), 0);
    type->Reflection.SetFunctions(11,
        new uFunction("Dispose", NULL, (void*)BinaryReader__Dispose_fn, 0, false, uVoid_typeof(), 0),
        new uFunction("get_LittleEndian", NULL, (void*)BinaryReader__get_LittleEndian_fn, 0, false, ::g::Uno::Bool_typeof(), 0),
        new uFunction("set_LittleEndian", NULL, (void*)BinaryReader__set_LittleEndian_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::Bool_typeof()),
        new uFunction(".ctor", NULL, (void*)BinaryReader__New1_fn, 0, true, BinaryReader_typeof(), 1, ::g::Uno::IO::Stream_typeof()),
        new uFunction("ReadBoolean", NULL, (void*)BinaryReader__ReadBoolean_fn, 0, false, ::g::Uno::Bool_typeof(), 0),
        new uFunction("ReadByte", NULL, (void*)BinaryReader__ReadByte_fn, 0, false, ::g::Uno::Byte_typeof(), 0),
        new uFunction("ReadBytes", NULL, (void*)BinaryReader__ReadBytes_fn, 0, false, ::g::Uno::Byte_typeof()->Array(), 1, ::g::Uno::Int_typeof()),
        new uFunction("ReadChar", NULL, (void*)BinaryReader__ReadChar_fn, 0, false, ::g::Uno::Char_typeof(), 0),
        new uFunction("ReadDouble", NULL, (void*)BinaryReader__ReadDouble_fn, 0, false, ::g::Uno::Double_typeof(), 0),
        new uFunction("ReadInt", NULL, (void*)BinaryReader__ReadInt_fn, 0, false, ::g::Uno::Int_typeof(), 0),
        new uFunction("ReadString", NULL, (void*)BinaryReader__ReadString_fn, 0, false, ::g::Uno::String_typeof(), 0));
    return type;
}

// public BinaryReader(Uno.IO.Stream stream) :15
void BinaryReader__ctor__fn(BinaryReader* __this, ::g::Uno::IO::Stream* stream)
{
    __this->ctor_(stream);
}

// public void Dispose() :33
void BinaryReader__Dispose_fn(BinaryReader* __this)
{
    __this->Dispose();
}

// private void FillBuffer(int byteCount) :38
void BinaryReader__FillBuffer_fn(BinaryReader* __this, int* byteCount)
{
    __this->FillBuffer(*byteCount);
}

// public generated bool get_LittleEndian() :29
void BinaryReader__get_LittleEndian_fn(BinaryReader* __this, bool* __retval)
{
    *__retval = __this->LittleEndian();
}

// public generated void set_LittleEndian(bool value) :30
void BinaryReader__set_LittleEndian_fn(BinaryReader* __this, bool* value)
{
    __this->LittleEndian(*value);
}

// public BinaryReader New(Uno.IO.Stream stream) :15
void BinaryReader__New1_fn(::g::Uno::IO::Stream* stream, BinaryReader** __retval)
{
    *__retval = BinaryReader::New1(stream);
}

// protected internal int Read7BitEncodedInt() :333
void BinaryReader__Read7BitEncodedInt_fn(BinaryReader* __this, int* __retval)
{
    *__retval = __this->Read7BitEncodedInt();
}

// public bool ReadBoolean() :91
void BinaryReader__ReadBoolean_fn(BinaryReader* __this, bool* __retval)
{
    *__retval = __this->ReadBoolean();
}

// public byte ReadByte() :103
void BinaryReader__ReadByte_fn(BinaryReader* __this, uint8_t* __retval)
{
    *__retval = __this->ReadByte();
}

// public byte[] ReadBytes(int byteCount) :57
void BinaryReader__ReadBytes_fn(BinaryReader* __this, int* byteCount, uArray** __retval)
{
    *__retval = __this->ReadBytes(*byteCount);
}

// public char ReadChar() :109
void BinaryReader__ReadChar_fn(BinaryReader* __this, uChar* __retval)
{
    *__retval = __this->ReadChar();
}

// public double ReadDouble() :164
void BinaryReader__ReadDouble_fn(BinaryReader* __this, double* __retval)
{
    *__retval = __this->ReadDouble();
}

// public int ReadInt() :134
void BinaryReader__ReadInt_fn(BinaryReader* __this, int* __retval)
{
    *__retval = __this->ReadInt();
}

// public string ReadString() :351
void BinaryReader__ReadString_fn(BinaryReader* __this, uString** __retval)
{
    *__retval = __this->ReadString();
}

// public BinaryReader(Uno.IO.Stream stream) [instance] :15
void BinaryReader::ctor_(::g::Uno::IO::Stream* stream)
{
    _stream = stream;
    _buffer = uArray::New(::TYPES[0/*byte[]*/], 64);
    LittleEndian(true);
}

// public void Dispose() [instance] :33
void BinaryReader::Dispose()
{
    uPtr(_stream)->Dispose();
}

// private void FillBuffer(int byteCount) [instance] :38
void BinaryReader::FillBuffer(int byteCount)
{
    if ((byteCount < 0) || (byteCount > 64))
        U_THROW(::g::Uno::ArgumentOutOfRangeException::New6(::STRINGS[0/*"byteCount"*/]));

    int offset = 0;

    do
    {
        int read = uPtr(_stream)->Read(_buffer, offset, byteCount - offset);

        if (read == 0)
            U_THROW(::g::Uno::IO::EndOfStreamException::New5());

        offset = offset + read;
    }
    while (offset < byteCount);
}

// public generated bool get_LittleEndian() [instance] :29
bool BinaryReader::LittleEndian()
{
    return _LittleEndian;
}

// public generated void set_LittleEndian(bool value) [instance] :30
void BinaryReader::LittleEndian(bool value)
{
    _LittleEndian = value;
}

// protected internal int Read7BitEncodedInt() [instance] :333
int BinaryReader::Read7BitEncodedInt()
{
    int count = 0;
    int shift = 0;

    while (shift != 35)
    {
        uint8_t b = ReadByte();
        count = count | ((int)(b & 127) << shift);
        shift = shift + 7;

        if ((b & 128) == 0)
            return count;
    }

    U_THROW(::g::Uno::FormatException::New4(::STRINGS[1/*"Invalid 7 b...*/]));
}

// public bool ReadBoolean() [instance] :91
bool BinaryReader::ReadBoolean()
{
    FillBuffer(1);
    return uPtr(_buffer)->Item<uint8_t>(0) != 0;
}

// public byte ReadByte() [instance] :103
uint8_t BinaryReader::ReadByte()
{
    FillBuffer(1);
    return uPtr(_buffer)->Item<uint8_t>(0);
}

// public byte[] ReadBytes(int byteCount) [instance] :57
uArray* BinaryReader::ReadBytes(int byteCount)
{
    if (byteCount < 0)
        U_THROW(::g::Uno::ArgumentOutOfRangeException::New6(::STRINGS[0/*"byteCount"*/]));

    uArray* buffer = uArray::New(::TYPES[0/*byte[]*/], byteCount);
    int offset = 0;

    do
    {
        int read = uPtr(_stream)->Read(buffer, offset, byteCount - offset);
        offset = offset + read;

        if (read == 0)
            break;
    }
    while (offset < byteCount);

    if (offset == byteCount)
        return buffer;

    uArray* result = uArray::New(::TYPES[0/*byte[]*/], offset);

    for (int i = 0; i < offset; i++)
        uPtr(result)->Item<uint8_t>(i) = uPtr(buffer)->Item<uint8_t>(i);

    return result;
}

// public char ReadChar() [instance] :109
uChar BinaryReader::ReadChar()
{
    uint8_t ret2;
    FillBuffer(1);
    ::g::Uno::Collections::List* buffer = (::g::Uno::Collections::List*)::g::Uno::Collections::List::New1(::TYPES[2/*Uno.Collections.List<byte>*/]);
    ::g::Uno::Collections::List__Add_fn(buffer, uCRef<uint8_t>(uPtr(_buffer)->Item<uint8_t>(0)));

    if (((::g::Uno::Collections::List__get_Item_fn(buffer, uCRef<int>(0), &ret2), ret2) & 128) != 0)
    {
        FillBuffer(1);
        ::g::Uno::Collections::List__Add_fn(uPtr(buffer), uCRef<uint8_t>(uPtr(_buffer)->Item<uint8_t>(0)));
    }

    return uPtr(::g::Uno::Runtime::Implementation::TextEncodingImpl::DecodeUtf8((uArray*)buffer->ToArray()))->Item(0);
}

// public double ReadDouble() [instance] :164
double BinaryReader::ReadDouble()
{
    FillBuffer(8);
    return ::g::Uno::Runtime::Implementation::BufferImpl::GetDouble(_buffer, 0, LittleEndian());
}

// public int ReadInt() [instance] :134
int BinaryReader::ReadInt()
{
    FillBuffer(4);
    return ::g::Uno::Runtime::Implementation::BufferImpl::GetInt(_buffer, 0, LittleEndian());
}

// public string ReadString() [instance] :351
uString* BinaryReader::ReadString()
{
    return ::g::Uno::Runtime::Implementation::TextEncodingImpl::DecodeUtf8(ReadBytes(Read7BitEncodedInt()));
}

// public BinaryReader New(Uno.IO.Stream stream) [static] :15
BinaryReader* BinaryReader::New1(::g::Uno::IO::Stream* stream)
{
    BinaryReader* obj1 = (BinaryReader*)uNew(BinaryReader_typeof());
    obj1->ctor_(stream);
    return obj1;
}
// }

// C:\ProgramData\Uno\Packages\UnoCore\0.19.6\Source\Uno\IO\$.uno(364)
// -------------------------------------------------------------------

// public sealed class BinaryWriter :364
// {
BinaryWriter_type* BinaryWriter_typeof()
{
    static uSStrong<BinaryWriter_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 3;
    options.InterfaceCount = 1;
    options.ObjectSize = sizeof(BinaryWriter);
    options.TypeSize = sizeof(BinaryWriter_type);
    type = (BinaryWriter_type*)uClassType::New("Uno.IO.BinaryWriter", options);
    type->interface0.fp_Dispose = (void(*)(uObject*))BinaryWriter__Dispose_fn;
    ::TYPES[0] = ::g::Uno::Byte_typeof()->Array();
    ::TYPES[4] = ::g::Uno::Byte_typeof();
    ::TYPES[5] = ::g::Uno::Char_typeof();
    ::TYPES[6] = ::g::Uno::UInt_typeof();
    type->SetInterfaces(
        ::g::Uno::IDisposable_typeof(), offsetof(BinaryWriter_type, interface0));
    type->SetFields(0,
        ::g::Uno::Byte_typeof()->Array(), offsetof(::g::Uno::IO::BinaryWriter, _buffer), 0,
        ::g::Uno::IO::Stream_typeof(), offsetof(::g::Uno::IO::BinaryWriter, _stream), 0,
        ::g::Uno::Bool_typeof(), offsetof(::g::Uno::IO::BinaryWriter, _LittleEndian), 0);
    type->Reflection.SetFunctions(11,
        new uFunction("Dispose", NULL, (void*)BinaryWriter__Dispose_fn, 0, false, uVoid_typeof(), 0),
        new uFunction("get_LittleEndian", NULL, (void*)BinaryWriter__get_LittleEndian_fn, 0, false, ::g::Uno::Bool_typeof(), 0),
        new uFunction("set_LittleEndian", NULL, (void*)BinaryWriter__set_LittleEndian_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::Bool_typeof()),
        new uFunction(".ctor", NULL, (void*)BinaryWriter__New1_fn, 0, true, BinaryWriter_typeof(), 1, ::g::Uno::IO::Stream_typeof()),
        new uFunction("Write", NULL, (void*)BinaryWriter__Write_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::Bool_typeof()),
        new uFunction("Write", NULL, (void*)BinaryWriter__Write1_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::Byte_typeof()),
        new uFunction("Write", NULL, (void*)BinaryWriter__Write2_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::Byte_typeof()->Array()),
        new uFunction("Write", NULL, (void*)BinaryWriter__Write5_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::Char_typeof()),
        new uFunction("Write", NULL, (void*)BinaryWriter__Write6_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::Double_typeof()),
        new uFunction("Write", NULL, (void*)BinaryWriter__Write13_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::Int_typeof()),
        new uFunction("Write", NULL, (void*)BinaryWriter__Write24_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::String_typeof()));
    return type;
}

// public BinaryWriter(Uno.IO.Stream stream) :371
void BinaryWriter__ctor__fn(BinaryWriter* __this, ::g::Uno::IO::Stream* stream)
{
    __this->ctor_(stream);
}

// public void Dispose() :389
void BinaryWriter__Dispose_fn(BinaryWriter* __this)
{
    __this->Dispose();
}

// public generated bool get_LittleEndian() :385
void BinaryWriter__get_LittleEndian_fn(BinaryWriter* __this, bool* __retval)
{
    *__retval = __this->LittleEndian();
}

// public generated void set_LittleEndian(bool value) :386
void BinaryWriter__set_LittleEndian_fn(BinaryWriter* __this, bool* value)
{
    __this->LittleEndian(*value);
}

// public BinaryWriter New(Uno.IO.Stream stream) :371
void BinaryWriter__New1_fn(::g::Uno::IO::Stream* stream, BinaryWriter** __retval)
{
    *__retval = BinaryWriter::New1(stream);
}

// public void Write(bool value) :394
void BinaryWriter__Write_fn(BinaryWriter* __this, bool* value)
{
    __this->Write(*value);
}

// public void Write(byte value) :411
void BinaryWriter__Write1_fn(BinaryWriter* __this, uint8_t* value)
{
    __this->Write1(*value);
}

// public void Write(byte[] value) :400
void BinaryWriter__Write2_fn(BinaryWriter* __this, uArray* value)
{
    __this->Write2(value);
}

// public void Write(char value) :417
void BinaryWriter__Write5_fn(BinaryWriter* __this, uChar* value)
{
    __this->Write5(*value);
}

// public void Write(double value) :464
void BinaryWriter__Write6_fn(BinaryWriter* __this, double* value)
{
    __this->Write6(*value);
}

// public void Write(int value) :434
void BinaryWriter__Write13_fn(BinaryWriter* __this, int* value)
{
    __this->Write13(*value);
}

// public void Write(string value) :591
void BinaryWriter__Write24_fn(BinaryWriter* __this, uString* value)
{
    __this->Write24(value);
}

// protected internal void Write7BitEncodedInt(int value) :580
void BinaryWriter__Write7BitEncodedInt_fn(BinaryWriter* __this, int* value)
{
    __this->Write7BitEncodedInt(*value);
}

// public BinaryWriter(Uno.IO.Stream stream) [instance] :371
void BinaryWriter::ctor_(::g::Uno::IO::Stream* stream)
{
    _stream = stream;
    _buffer = uArray::New(::TYPES[0/*byte[]*/], 64);
    LittleEndian(true);
}

// public void Dispose() [instance] :389
void BinaryWriter::Dispose()
{
    uPtr(_stream)->Dispose();
}

// public generated bool get_LittleEndian() [instance] :385
bool BinaryWriter::LittleEndian()
{
    return _LittleEndian;
}

// public generated void set_LittleEndian(bool value) [instance] :386
void BinaryWriter::LittleEndian(bool value)
{
    _LittleEndian = value;
}

// public void Write(bool value) [instance] :394
void BinaryWriter::Write(bool value)
{
    uPtr(_buffer)->Item<uint8_t>(0) = (uint8_t)(value ? 1 : 0);
    uPtr(_stream)->Write(_buffer, 0, 1);
}

// public void Write(byte value) [instance] :411
void BinaryWriter::Write1(uint8_t value)
{
    uPtr(_buffer)->Item<uint8_t>(0) = value;
    uPtr(_stream)->Write(_buffer, 0, 1);
}

// public void Write(byte[] value) [instance] :400
void BinaryWriter::Write2(uArray* value)
{
    uPtr(_stream)->Write(value, 0, uPtr(value)->Length());
}

// public void Write(char value) [instance] :417
void BinaryWriter::Write5(uChar value)
{
    Write2(::g::Uno::Runtime::Implementation::TextEncodingImpl::EncodeUtf8(::g::Uno::Char::ToString(value, ::TYPES[5/*char*/])));
}

// public void Write(double value) [instance] :464
void BinaryWriter::Write6(double value)
{
    ::g::Uno::Runtime::Implementation::BufferImpl::SetDouble(_buffer, 0, value, LittleEndian());
    uPtr(_stream)->Write(_buffer, 0, 8);
}

// public void Write(int value) [instance] :434
void BinaryWriter::Write13(int value)
{
    ::g::Uno::Runtime::Implementation::BufferImpl::SetInt(_buffer, 0, value, LittleEndian());
    uPtr(_stream)->Write(_buffer, 0, 4);
}

// public void Write(string value) [instance] :591
void BinaryWriter::Write24(uString* value)
{
    uArray* bytes = ::g::Uno::Runtime::Implementation::TextEncodingImpl::EncodeUtf8(value);
    Write7BitEncodedInt(uPtr(bytes)->Length());
    Write2(bytes);
}

// protected internal void Write7BitEncodedInt(int value) [instance] :580
void BinaryWriter::Write7BitEncodedInt(int value)
{
    uint32_t v = (uint32_t)value;

    while (v >= 128U)
    {
        Write1((uint8_t)(v | 128U));
        v = v >> 7;
    }

    Write1((uint8_t)v);
}

// public BinaryWriter New(Uno.IO.Stream stream) [static] :371
BinaryWriter* BinaryWriter::New1(::g::Uno::IO::Stream* stream)
{
    BinaryWriter* obj1 = (BinaryWriter*)uNew(BinaryWriter_typeof());
    obj1->ctor_(stream);
    return obj1;
}
// }

// C:\ProgramData\Uno\Packages\UnoCore\0.19.6\Source\Uno\IO\$.uno(612)
// -------------------------------------------------------------------

// internal sealed extern class CppXliStream :612
// {
::g::Uno::IO::Stream_type* CppXliStream_typeof()
{
    static uSStrong< ::g::Uno::IO::Stream_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 2;
    options.InterfaceCount = 1;
    options.ObjectSize = sizeof(CppXliStream);
    options.TypeSize = sizeof(::g::Uno::IO::Stream_type);
    type = (::g::Uno::IO::Stream_type*)uClassType::New("Uno.IO.CppXliStream", options);
    type->SetBase(::g::Uno::IO::Stream_typeof());
    type->fp_get_CanRead = (void(*)(::g::Uno::IO::Stream*, bool*))CppXliStream__get_CanRead_fn;
    type->fp_get_CanSeek = (void(*)(::g::Uno::IO::Stream*, bool*))CppXliStream__get_CanSeek_fn;
    type->fp_get_CanWrite = (void(*)(::g::Uno::IO::Stream*, bool*))CppXliStream__get_CanWrite_fn;
    type->fp_Dispose1 = (void(*)(::g::Uno::IO::Stream*, bool*))CppXliStream__Dispose1_fn;
    type->fp_Flush = (void(*)(::g::Uno::IO::Stream*))CppXliStream__Flush_fn;
    type->fp_get_Length = (void(*)(::g::Uno::IO::Stream*, int64_t*))CppXliStream__get_Length_fn;
    type->fp_get_Position = (void(*)(::g::Uno::IO::Stream*, int64_t*))CppXliStream__get_Position_fn;
    type->fp_set_Position = (void(*)(::g::Uno::IO::Stream*, int64_t*))CppXliStream__set_Position_fn;
    type->fp_Read = (void(*)(::g::Uno::IO::Stream*, uArray*, int*, int*, int*))CppXliStream__Read_fn;
    type->fp_Seek = (void(*)(::g::Uno::IO::Stream*, int64_t*, int*, int64_t*))CppXliStream__Seek_fn;
    type->fp_SetLength = (void(*)(::g::Uno::IO::Stream*, int64_t*))CppXliStream__SetLength_fn;
    type->fp_Write = (void(*)(::g::Uno::IO::Stream*, uArray*, int*, int*))CppXliStream__Write_fn;
    type->interface0.fp_Dispose = (void(*)(uObject*))::g::Uno::IO::Stream__Dispose_fn;
    type->SetInterfaces(
        ::g::Uno::IDisposable_typeof(), offsetof(::g::Uno::IO::Stream_type, interface0));
    type->SetFields(0,
        ::g::Uno::IO::CppXliStreamHandle_typeof(), offsetof(::g::Uno::IO::CppXliStream, _handle), 0,
        ::g::Uno::Long_typeof(), offsetof(::g::Uno::IO::CppXliStream, _Position), 0);
    return type;
}

// public CppXliStream(Uno.IO.CppXliStreamHandle handle) :616
void CppXliStream__ctor_1_fn(CppXliStream* __this, ::Xli::Stream** handle)
{
    __this->ctor_1(*handle);
}

// public override sealed extern bool get_CanRead() :622
void CppXliStream__get_CanRead_fn(CppXliStream* __this, bool* __retval)
{
    try
    {
        return *__retval = __this->_handle->CanRead(), void();
    }
    catch (const Xli::Exception& e)
    {
        throw uThrowable(::g::Uno::IO::IOException::New4(uStringFromXliString(e.GetMessage())), e.GetFunction(), e.GetLine());
    }
}

// public override sealed extern bool get_CanSeek() :628
void CppXliStream__get_CanSeek_fn(CppXliStream* __this, bool* __retval)
{
    try
    {
        return *__retval = __this->_handle->CanSeek(), void();
    }
    catch (const Xli::Exception& e)
    {
        throw uThrowable(::g::Uno::IO::IOException::New4(uStringFromXliString(e.GetMessage())), e.GetFunction(), e.GetLine());
    }
}

// public override sealed extern bool get_CanWrite() :625
void CppXliStream__get_CanWrite_fn(CppXliStream* __this, bool* __retval)
{
    try
    {
        return *__retval = __this->_handle->CanWrite(), void();
    }
    catch (const Xli::Exception& e)
    {
        throw uThrowable(::g::Uno::IO::IOException::New4(uStringFromXliString(e.GetMessage())), e.GetFunction(), e.GetLine());
    }
}

// public override sealed extern void Dispose(bool disposing) :654
void CppXliStream__Dispose1_fn(CppXliStream* __this, bool* disposing_)
{
    bool disposing__ = *disposing_;
    if (__this->_handle != NULL)
    {
        __this->_handle->Release();
        __this->_handle = NULL;
    }
}

// public override sealed extern void Flush() :651
void CppXliStream__Flush_fn(CppXliStream* __this)
{
    try
    {
        __this->_handle->Flush();
    }
    catch (const Xli::Exception& e)
    {
        throw uThrowable(::g::Uno::IO::IOException::New4(uStringFromXliString(e.GetMessage())), e.GetFunction(), e.GetLine());
    }
}

// public override sealed extern long get_Length() :631
void CppXliStream__get_Length_fn(CppXliStream* __this, int64_t* __retval)
{
    try
    {
        return *__retval = __this->_handle->GetLength(), void();
    }
    catch (const Xli::Exception& e)
    {
        throw uThrowable(::g::Uno::IO::IOException::New4(uStringFromXliString(e.GetMessage())), e.GetFunction(), e.GetLine());
    }
}

// public CppXliStream New(Uno.IO.CppXliStreamHandle handle) :616
void CppXliStream__New1_fn(::Xli::Stream** handle, CppXliStream** __retval)
{
    *__retval = CppXliStream::New1(*handle);
}

// public generated override sealed extern long get_Position() :634
void CppXliStream__get_Position_fn(CppXliStream* __this, int64_t* __retval)
{
    try
    {
        return *__retval = __this->_handle->GetPosition(), void();
    }
    catch (const Xli::Exception& e)
    {
        throw uThrowable(::g::Uno::IO::IOException::New4(uStringFromXliString(e.GetMessage())), e.GetFunction(), e.GetLine());
    }
}

// public generated override sealed extern void set_Position(long value) :634
void CppXliStream__set_Position_fn(CppXliStream* __this, int64_t* value_)
{
    int64_t value__ = *value_;
    try
    {
        __this->_handle->Seek((int)value__, Xli::SeekOriginBegin);
    }
    catch (const Xli::Exception& e)
    {
        throw uThrowable(::g::Uno::IO::IOException::New4(uStringFromXliString(e.GetMessage())), e.GetFunction(), e.GetLine());
    }
}

// public override sealed extern int Read(byte[] dst, int byteOffset, int byteCount) :642
void CppXliStream__Read_fn(CppXliStream* __this, uArray* dst_, int* byteOffset_, int* byteCount_, int* __retval)
{
    int byteOffset__ = *byteOffset_;
    int byteCount__ = *byteCount_;
    try
    {
        // TODO: Bounds check
        return *__retval = __this->_handle->Read((uint8_t*)dst_->Ptr() + byteOffset__, 1, byteCount__), void();
    }
    catch (const Xli::Exception& e)
    {
        throw uThrowable(::g::Uno::IO::IOException::New4(uStringFromXliString(e.GetMessage())), e.GetFunction(), e.GetLine());
    }
}

// public override sealed extern long Seek(long byteOffset, Uno.IO.SeekOrigin origin) :648
void CppXliStream__Seek_fn(CppXliStream* __this, int64_t* byteOffset_, int* origin_, int64_t* __retval)
{
    int64_t byteOffset__ = *byteOffset_;
    int origin__ = *origin_;
    try
    {
        __this->_handle->Seek((int)byteOffset__, (Xli::SeekOrigin)origin__);
        return *__retval = __this->_handle->GetPosition(), void();
    }
    catch (const Xli::Exception& e)
    {
        throw uThrowable(::g::Uno::IO::IOException::New4(uStringFromXliString(e.GetMessage())), e.GetFunction(), e.GetLine());
    }
}

// public override sealed void SetLength(long value) :636
void CppXliStream__SetLength_fn(CppXliStream* __this, int64_t* value)
{
    U_THROW(::g::Uno::NotImplementedException::New4());
}

// public override sealed extern void Write(byte[] src, int byteOffset, int byteCount) :645
void CppXliStream__Write_fn(CppXliStream* __this, uArray* src_, int* byteOffset_, int* byteCount_)
{
    int byteOffset__ = *byteOffset_;
    int byteCount__ = *byteCount_;
    try
    {
        // TODO: Bounds check
        __this->_handle->Write((const uint8_t*)src_->Ptr() + byteOffset__, 1, byteCount__);
    }
    catch (const Xli::Exception& e)
    {
        throw uThrowable(::g::Uno::IO::IOException::New4(uStringFromXliString(e.GetMessage())), e.GetFunction(), e.GetLine());
    }
}

// public CppXliStream(Uno.IO.CppXliStreamHandle handle) [instance] :616
void CppXliStream::ctor_1(::Xli::Stream* handle)
{
    ctor_();
    _handle = handle;
}

// public CppXliStream New(Uno.IO.CppXliStreamHandle handle) [static] :616
CppXliStream* CppXliStream::New1(::Xli::Stream* handle)
{
    CppXliStream* obj1 = (CppXliStream*)uNew(CppXliStream_typeof());
    obj1->ctor_1(handle);
    return obj1;
}
// }

// C:\ProgramData\Uno\Packages\UnoCore\0.19.6\Source\Uno\IO\$.uno(607)
// -------------------------------------------------------------------

// internal extern struct CppXliStreamHandle :607
// {
uStructType* CppXliStreamHandle_typeof()
{
    static uSStrong<uStructType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.ValueSize = sizeof(::Xli::Stream*);
    options.TypeSize = sizeof(uStructType);
    type = uStructType::New("Uno.IO.CppXliStreamHandle", options);
    return type;
}
// }

// C:\ProgramData\Uno\Packages\UnoCore\0.19.6\Source\Uno\IO\$.uno(665)
// -------------------------------------------------------------------

// public static class Directory :665
// {
uClassType* Directory_typeof()
{
    static uSStrong<uClassType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.TypeSize = sizeof(uClassType);
    type = uClassType::New("Uno.IO.Directory", options);
    type->Reflection.SetFunctions(2,
        new uFunction("CreateDirectory", NULL, (void*)Directory__CreateDirectory_fn, 0, true, uVoid_typeof(), 1, ::g::Uno::String_typeof()),
        new uFunction("GetUserDirectory", NULL, (void*)Directory__GetUserDirectory_fn, 0, true, ::g::Uno::String_typeof(), 1, ::g::Uno::IO::UserDirectory_typeof()));
    return type;
}

// public static void CreateDirectory(string dirName) :724
void Directory__CreateDirectory_fn(uString* dirName)
{
    Directory::CreateDirectory(dirName);
}

// public static string GetUserDirectory(Uno.IO.UserDirectory dir) :667
void Directory__GetUserDirectory_fn(int* dir, uString** __retval)
{
    *__retval = Directory::GetUserDirectory(*dir);
}

// public static void CreateDirectory(string dirName) [static] :724
void Directory::CreateDirectory(uString* dirName)
{
    ::g::Uno::IO::FileSystemImpl::CreateDirectory(dirName);
}

// public static string GetUserDirectory(Uno.IO.UserDirectory dir) [static] :667
uString* Directory::GetUserDirectory(int dir)
{
    return ::g::Uno::IO::FileSystemImpl::GetUserDirectory(dir);
}
// }

// C:\ProgramData\Uno\Packages\UnoCore\0.19.6\Source\Uno\IO\$.uno(1251)
// --------------------------------------------------------------------

// public sealed class EndOfStreamException :1251
// {
::g::Uno::Exception_type* EndOfStreamException_typeof()
{
    static uSStrong< ::g::Uno::Exception_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 3;
    options.ObjectSize = sizeof(EndOfStreamException);
    options.TypeSize = sizeof(::g::Uno::Exception_type);
    type = (::g::Uno::Exception_type*)uClassType::New("Uno.IO.EndOfStreamException", options);
    type->SetBase(::g::Uno::IO::IOException_typeof());
    type->fp_ctor_ = (void*)EndOfStreamException__New5_fn;
    ::STRINGS[2] = uString::Const("Reached end of stream");
    type->SetFields(3);
    type->Reflection.SetFunctions(1,
        new uFunction(".ctor", NULL, (void*)EndOfStreamException__New5_fn, 0, true, EndOfStreamException_typeof(), 0));
    return type;
}

// public EndOfStreamException() :1253
void EndOfStreamException__ctor_4_fn(EndOfStreamException* __this)
{
    __this->ctor_4();
}

// public EndOfStreamException New() :1253
void EndOfStreamException__New5_fn(EndOfStreamException** __retval)
{
    *__retval = EndOfStreamException::New5();
}

// public EndOfStreamException() [instance] :1253
void EndOfStreamException::ctor_4()
{
    ctor_3(::STRINGS[2/*"Reached end...*/]);
}

// public EndOfStreamException New() [static] :1253
EndOfStreamException* EndOfStreamException::New5()
{
    EndOfStreamException* obj1 = (EndOfStreamException*)uNew(EndOfStreamException_typeof());
    obj1->ctor_4();
    return obj1;
}
// }

// C:\ProgramData\Uno\Packages\UnoCore\0.19.6\Source\Uno\IO\$.uno(805)
// -------------------------------------------------------------------

// public static class File :805
// {
uClassType* File_typeof()
{
    static uSStrong<uClassType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.TypeSize = sizeof(uClassType);
    type = uClassType::New("Uno.IO.File", options);
    ::TYPES[7] = ::g::Uno::IO::Stream_typeof();
    type->Reflection.SetFunctions(8,
        new uFunction("Delete", NULL, (void*)File__Delete_fn, 0, true, uVoid_typeof(), 1, ::g::Uno::String_typeof()),
        new uFunction("Exists", NULL, (void*)File__Exists_fn, 0, true, ::g::Uno::Bool_typeof(), 1, ::g::Uno::String_typeof()),
        new uFunction("Open", NULL, (void*)File__Open_fn, 0, true, ::g::Uno::IO::Stream_typeof(), 2, ::g::Uno::String_typeof(), ::g::Uno::IO::FileMode_typeof()),
        new uFunction("OpenRead", NULL, (void*)File__OpenRead_fn, 0, true, ::g::Uno::IO::Stream_typeof(), 1, ::g::Uno::String_typeof()),
        new uFunction("ReadAllBytes", NULL, (void*)File__ReadAllBytes_fn, 0, true, ::g::Uno::Byte_typeof()->Array(), 1, ::g::Uno::String_typeof()),
        new uFunction("ReadAllText", NULL, (void*)File__ReadAllText_fn, 0, true, ::g::Uno::String_typeof(), 1, ::g::Uno::String_typeof()),
        new uFunction("WriteAllBytes", NULL, (void*)File__WriteAllBytes_fn, 0, true, uVoid_typeof(), 2, ::g::Uno::String_typeof(), ::g::Uno::Byte_typeof()->Array()),
        new uFunction("WriteAllText", NULL, (void*)File__WriteAllText_fn, 0, true, uVoid_typeof(), 2, ::g::Uno::String_typeof(), ::g::Uno::String_typeof()));
    return type;
}

// public static void Delete(string filename) :837
void File__Delete_fn(uString* filename)
{
    File::Delete(filename);
}

// public static bool Exists(string filename) :869
void File__Exists_fn(uString* filename, bool* __retval)
{
    *__retval = File::Exists(filename);
}

// public static Uno.IO.Stream Open(string filename, Uno.IO.FileMode filemode) :827
void File__Open_fn(uString* filename, int* filemode, ::g::Uno::IO::Stream** __retval)
{
    *__retval = File::Open(filename, *filemode);
}

// public static Uno.IO.Stream OpenRead(string filename) :807
void File__OpenRead_fn(uString* filename, ::g::Uno::IO::Stream** __retval)
{
    *__retval = File::OpenRead(filename);
}

// public static byte[] ReadAllBytes(string filename) :916
void File__ReadAllBytes_fn(uString* filename, uArray** __retval)
{
    *__retval = File::ReadAllBytes(filename);
}

// public static string ReadAllText(string filename) :900
void File__ReadAllText_fn(uString* filename, uString** __retval)
{
    *__retval = File::ReadAllText(filename);
}

// public static void WriteAllBytes(string filename, byte[] bytes) :932
void File__WriteAllBytes_fn(uString* filename, uArray* bytes)
{
    File::WriteAllBytes(filename, bytes);
}

// public static void WriteAllText(string filename, string text) :924
void File__WriteAllText_fn(uString* filename, uString* text)
{
    File::WriteAllText(filename, text);
}

// public static void Delete(string filename) [static] :837
void File::Delete(uString* filename)
{
    ::g::Uno::IO::FileSystemImpl::DeleteFile(filename);
}

// public static bool Exists(string filename) [static] :869
bool File::Exists(uString* filename)
{
    return ::g::Uno::IO::FileSystemImpl::IsFile(filename);
}

// public static Uno.IO.Stream Open(string filename, Uno.IO.FileMode filemode) [static] :827
::g::Uno::IO::Stream* File::Open(uString* filename, int filemode)
{
    return ::g::Uno::IO::CppXliStream::New1(::g::Uno::IO::FileSystemImpl::CppXliOpen(filename, filemode));
}

// public static Uno.IO.Stream OpenRead(string filename) [static] :807
::g::Uno::IO::Stream* File::OpenRead(uString* filename)
{
    return ::g::Uno::IO::CppXliStream::New1(::g::Uno::IO::FileSystemImpl::CppXliOpenRead(filename));
}

// public static byte[] ReadAllBytes(string filename) [static] :916
uArray* File::ReadAllBytes(uString* filename)
{
    return ::g::Uno::IO::FileSystemImpl::ReadAllBytes(filename);
}

// public static string ReadAllText(string filename) [static] :900
uString* File::ReadAllText(uString* filename)
{
    return ::g::Uno::IO::FileSystemImpl::ReadAllText(filename);
}

// public static void WriteAllBytes(string filename, byte[] bytes) [static] :932
void File::WriteAllBytes(uString* filename, uArray* bytes)
{
    ::g::Uno::IO::FileSystemImpl::WriteAllBytes(filename, bytes);
}

// public static void WriteAllText(string filename, string text) [static] :924
void File::WriteAllText(uString* filename, uString* text)
{
    ::g::Uno::IO::FileSystemImpl::WriteAllText(filename, text);
}
// }

// C:\ProgramData\Uno\Packages\UnoCore\0.19.6\Source\Uno\IO\$.uno(957)
// -------------------------------------------------------------------

// public enum FileMode :957
uEnumType* FileMode_typeof()
{
    static uSStrong<uEnumType*> type;
    if (type != NULL) return type;

    type = uEnumType::New("Uno.IO.FileMode", ::g::Uno::Int_typeof(), 6);
    type->SetLiterals(
        "CreateNew", 1LL,
        "Create", 2LL,
        "Open", 3LL,
        "OpenOrCreate", 4LL,
        "Truncate", 5LL,
        "Append", 6LL);
    return type;
}

// C:\ProgramData\Uno\Packages\UnoCore\0.19.6\Source\Uno\IO\$.uno(1102)
// --------------------------------------------------------------------

// internal static extern class FileSystemImpl :1102
// {
uClassType* FileSystemImpl_typeof()
{
    static uSStrong<uClassType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.TypeSize = sizeof(uClassType);
    type = uClassType::New("Uno.IO.FileSystemImpl", options);
    return type;
}

// public static extern Uno.IO.CppXliStreamHandle CppXliOpen(string filename, Uno.IO.FileMode filemode) :1111
void FileSystemImpl__CppXliOpen_fn(uString* filename_, int* filemode_, ::Xli::Stream** __retval)
{
    *__retval = FileSystemImpl::CppXliOpen(filename_, *filemode_);
}

// public static extern Uno.IO.CppXliStreamHandle CppXliOpenRead(string filename) :1105
void FileSystemImpl__CppXliOpenRead_fn(uString* filename_, ::Xli::Stream** __retval)
{
    *__retval = FileSystemImpl::CppXliOpenRead(filename_);
}

// public static void CreateDirectory(string dirName) :1132
void FileSystemImpl__CreateDirectory_fn(uString* dirName_)
{
    FileSystemImpl::CreateDirectory(dirName_);
}

// public static void DeleteFile(string filename) :1150
void FileSystemImpl__DeleteFile_fn(uString* filename_)
{
    FileSystemImpl::DeleteFile(filename_);
}

// public static string GetUserDirectory(Uno.IO.UserDirectory dir) :1114
void FileSystemImpl__GetUserDirectory_fn(int* dir_, uString** __retval)
{
    *__retval = FileSystemImpl::GetUserDirectory(*dir_);
}

// public static bool IsFile(string filename) :1174
void FileSystemImpl__IsFile_fn(uString* filename_, bool* __retval)
{
    *__retval = FileSystemImpl::IsFile(filename_);
}

// public static byte[] ReadAllBytes(string filename) :1198
void FileSystemImpl__ReadAllBytes_fn(uString* filename_, uArray** __retval)
{
    *__retval = FileSystemImpl::ReadAllBytes(filename_);
}

// public static string ReadAllText(string filename) :1192
void FileSystemImpl__ReadAllText_fn(uString* filename_, uString** __retval)
{
    *__retval = FileSystemImpl::ReadAllText(filename_);
}

// public static void WriteAllBytes(string filename, byte[] bytes) :1216
void FileSystemImpl__WriteAllBytes_fn(uString* filename_, uArray* bytes_)
{
    FileSystemImpl::WriteAllBytes(filename_, bytes_);
}

// public static void WriteAllText(string filename, string text) :1210
void FileSystemImpl__WriteAllText_fn(uString* filename_, uString* text_)
{
    FileSystemImpl::WriteAllText(filename_, text_);
}

// public static extern Uno.IO.CppXliStreamHandle CppXliOpen(string filename, Uno.IO.FileMode filemode) [static] :1111
::Xli::Stream* FileSystemImpl::CppXliOpen(uString* filename_, int filemode_)
{
    try
    {
        Xli::FileMode xliFileMode = Xli::FileModeRead;
        switch(filemode_)
        {
            case 5:
                if (!Xli::Disk->IsFile(uStringToXliString(filename_)))
                {
                    XLI_THROW("File not found");
                }
            case 2:
                {
                    Xli::Managed<Xli::Stream> f = Xli::Disk->OpenFile(uStringToXliString(filename_), Xli::FileModeWrite);
                    f->Close();
                    xliFileMode = Xli::FileModeReadWrite;
                    break;
                }
    
            case 1:
                if (Xli::Disk->IsFile(uStringToXliString(filename_)))
                {
                    XLI_THROW("File already exists.");
                }
                xliFileMode = Xli::FileModeWrite;
                break;
    
            case 4:
                if (!Xli::Disk->IsFile(uStringToXliString(filename_)))
                {
                    Xli::Managed<Xli::Stream> f = Xli::Disk->OpenFile(uStringToXliString(filename_), Xli::FileModeWrite);
                    f->Close();
                }
            case 3:
                xliFileMode = Xli::FileModeReadWrite;   
                break;
    
            case 6:
                xliFileMode = Xli::FileModeAppend;
                break;
        }
        return Xli::Disk->OpenFile(uStringToXliString(filename_), xliFileMode);
    }
    catch (const Xli::Exception& e)
    {
        throw uThrowable(::g::Uno::IO::IOException::New4(uStringFromXliString(e.GetMessage())), e.GetFunction(), e.GetLine());
    }
}

// public static extern Uno.IO.CppXliStreamHandle CppXliOpenRead(string filename) [static] :1105
::Xli::Stream* FileSystemImpl::CppXliOpenRead(uString* filename_)
{
    try
    {
        return Xli::Disk->OpenFile(uStringToXliString(filename_), Xli::FileModeRead);
    }
    catch (const Xli::Exception& e)
    {
        throw uThrowable(::g::Uno::IO::IOException::New4(uStringFromXliString(e.GetMessage())), e.GetFunction(), e.GetLine());
    }
}

// public static void CreateDirectory(string dirName) [static] :1132
void FileSystemImpl::CreateDirectory(uString* dirName_)
{
    try
    {
        Xli::Disk->CreateDirectories(uStringToXliString(dirName_));
    }
    catch (const Xli::Exception& e)
    {
        throw uThrowable(::g::Uno::IO::IOException::New4(uStringFromXliString(e.GetMessage())), e.GetFunction(), e.GetLine());
    }
}

// public static void DeleteFile(string filename) [static] :1150
void FileSystemImpl::DeleteFile(uString* filename_)
{
    try
    {
        Xli::Disk->DeleteFile(uStringToXliString(filename_));
    }
    catch (const Xli::Exception& e)
    {
        throw uThrowable(::g::Uno::IO::IOException::New4(uStringFromXliString(e.GetMessage())), e.GetFunction(), e.GetLine());
    }
}

// public static string GetUserDirectory(Uno.IO.UserDirectory dir) [static] :1114
uString* FileSystemImpl::GetUserDirectory(int dir_)
{
    try
    {
        return uStringFromXliString(Xli::Disk->GetSystemDirectory((Xli::SystemDirectory)dir_));
    }
    catch (const Xli::Exception& e)
    {
        throw uThrowable(::g::Uno::IO::IOException::New4(uStringFromXliString(e.GetMessage())), e.GetFunction(), e.GetLine());
    }
}

// public static bool IsFile(string filename) [static] :1174
bool FileSystemImpl::IsFile(uString* filename_)
{
    try
    {
        return Xli::Disk->IsFile(uStringToXliString(filename_));
    }
    catch (const Xli::Exception& e)
    {
        throw uThrowable(::g::Uno::IO::IOException::New4(uStringFromXliString(e.GetMessage())), e.GetFunction(), e.GetLine());
    }
}

// public static byte[] ReadAllBytes(string filename) [static] :1198
uArray* FileSystemImpl::ReadAllBytes(uString* filename_)
{
    try
    {
        Xli::Managed<Xli::Stream> f = Xli::Disk->OpenFile(uStringToXliString(filename_), Xli::FileModeRead);
        uArray* result = uArray::New(::g::Uno::Byte_typeof()->Array(), f->GetLength());
        f->ReadSafe(result->Ptr(), 1, result->Length());
        return result;
    }
    catch (const Xli::Exception& e)
    {
        throw uThrowable(::g::Uno::IO::IOException::New4(uStringFromXliString(e.GetMessage())), e.GetFunction(), e.GetLine());
    }
}

// public static string ReadAllText(string filename) [static] :1192
uString* FileSystemImpl::ReadAllText(uString* filename_)
{
    try
    {
        return uStringFromXliString(Xli::Text::Load(uStringToXliString(filename_)));
    }
    catch (const Xli::Exception& e)
    {
        throw uThrowable(::g::Uno::IO::IOException::New4(uStringFromXliString(e.GetMessage())), e.GetFunction(), e.GetLine());
    }
}

// public static void WriteAllBytes(string filename, byte[] bytes) [static] :1216
void FileSystemImpl::WriteAllBytes(uString* filename_, uArray* bytes_)
{
    try
    {
        Xli::Managed<Xli::Stream> f = Xli::Disk->OpenFile(uStringToXliString(filename_), Xli::FileModeWrite);
        f->Write(bytes_->Ptr(), 1, bytes_->Length());
    }
    catch (const Xli::Exception& e)
    {
        throw uThrowable(::g::Uno::IO::IOException::New4(uStringFromXliString(e.GetMessage())), e.GetFunction(), e.GetLine());
    }
}

// public static void WriteAllText(string filename, string text) [static] :1210
void FileSystemImpl::WriteAllText(uString* filename_, uString* text_)
{
    try
    {
        Xli::Text::Save(uStringToXliString(filename_), uStringToXliString(text_));
    }
    catch (const Xli::Exception& e)
    {
        throw uThrowable(::g::Uno::IO::IOException::New4(uStringFromXliString(e.GetMessage())), e.GetFunction(), e.GetLine());
    }
}
// }

// C:\ProgramData\Uno\Packages\UnoCore\0.19.6\Source\Uno\IO\$.uno(1242)
// --------------------------------------------------------------------

// public class IOException :1242
// {
::g::Uno::Exception_type* IOException_typeof()
{
    static uSStrong< ::g::Uno::Exception_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 3;
    options.ObjectSize = sizeof(IOException);
    options.TypeSize = sizeof(::g::Uno::Exception_type);
    type = (::g::Uno::Exception_type*)uClassType::New("Uno.IO.IOException", options);
    type->SetBase(::g::Uno::Exception_typeof());
    type->SetFields(3);
    type->Reflection.SetFunctions(1,
        new uFunction(".ctor", NULL, (void*)IOException__New4_fn, 0, true, IOException_typeof(), 1, ::g::Uno::String_typeof()));
    return type;
}

// public IOException(string message) :1244
void IOException__ctor_3_fn(IOException* __this, uString* message)
{
    __this->ctor_3(message);
}

// public IOException New(string message) :1244
void IOException__New4_fn(uString* message, IOException** __retval)
{
    *__retval = IOException::New4(message);
}

// public IOException(string message) [instance] :1244
void IOException::ctor_3(uString* message)
{
    ctor_1(message);
}

// public IOException New(string message) [static] :1244
IOException* IOException::New4(uString* message)
{
    IOException* obj1 = (IOException*)uNew(IOException_typeof());
    obj1->ctor_3(message);
    return obj1;
}
// }

// C:\ProgramData\Uno\Packages\UnoCore\0.19.6\Source\Uno\IO\$.uno(1268)
// --------------------------------------------------------------------

// public sealed class MemoryStream :1268
// {
::g::Uno::IO::Stream_type* MemoryStream_typeof()
{
    static uSStrong< ::g::Uno::IO::Stream_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 4;
    options.InterfaceCount = 1;
    options.ObjectSize = sizeof(MemoryStream);
    options.TypeSize = sizeof(::g::Uno::IO::Stream_type);
    type = (::g::Uno::IO::Stream_type*)uClassType::New("Uno.IO.MemoryStream", options);
    type->SetBase(::g::Uno::IO::Stream_typeof());
    type->fp_ctor_ = (void*)MemoryStream__New1_fn;
    type->fp_get_CanRead = (void(*)(::g::Uno::IO::Stream*, bool*))MemoryStream__get_CanRead_fn;
    type->fp_get_CanSeek = (void(*)(::g::Uno::IO::Stream*, bool*))MemoryStream__get_CanSeek_fn;
    type->fp_get_CanTimeout = (void(*)(::g::Uno::IO::Stream*, bool*))MemoryStream__get_CanTimeout_fn;
    type->fp_get_CanWrite = (void(*)(::g::Uno::IO::Stream*, bool*))MemoryStream__get_CanWrite_fn;
    type->fp_Flush = (void(*)(::g::Uno::IO::Stream*))MemoryStream__Flush_fn;
    type->fp_get_Length = (void(*)(::g::Uno::IO::Stream*, int64_t*))MemoryStream__get_Length_fn;
    type->fp_get_Position = (void(*)(::g::Uno::IO::Stream*, int64_t*))MemoryStream__get_Position_fn;
    type->fp_set_Position = (void(*)(::g::Uno::IO::Stream*, int64_t*))MemoryStream__set_Position_fn;
    type->fp_Read = (void(*)(::g::Uno::IO::Stream*, uArray*, int*, int*, int*))MemoryStream__Read_fn;
    type->fp_Seek = (void(*)(::g::Uno::IO::Stream*, int64_t*, int*, int64_t*))MemoryStream__Seek_fn;
    type->fp_SetLength = (void(*)(::g::Uno::IO::Stream*, int64_t*))MemoryStream__SetLength_fn;
    type->fp_Write = (void(*)(::g::Uno::IO::Stream*, uArray*, int*, int*))MemoryStream__Write_fn;
    type->interface0.fp_Dispose = (void(*)(uObject*))::g::Uno::IO::Stream__Dispose_fn;
    ::TYPES[0] = ::g::Uno::Byte_typeof()->Array();
    ::TYPES[8] = ::g::Uno::Long_typeof();
    ::TYPES[1] = ::g::Uno::Int_typeof();
    ::TYPES[9] = ::g::Uno::Array_typeof()->MakeMethod(1, ::g::Uno::Byte_typeof());
    type->SetInterfaces(
        ::g::Uno::IDisposable_typeof(), offsetof(::g::Uno::IO::Stream_type, interface0));
    type->SetFields(0,
        ::g::Uno::Byte_typeof()->Array(), offsetof(::g::Uno::IO::MemoryStream, _buffer), 0,
        ::g::Uno::Long_typeof(), offsetof(::g::Uno::IO::MemoryStream, _length), 0,
        ::g::Uno::Int_typeof(), offsetof(::g::Uno::IO::MemoryStream, _nextIncrease), 0,
        ::g::Uno::Long_typeof(), offsetof(::g::Uno::IO::MemoryStream, _Position), 0);
    type->Reflection.SetFunctions(3,
        new uFunction("get_Capacity", NULL, (void*)MemoryStream__get_Capacity_fn, 0, false, ::g::Uno::Int_typeof(), 0),
        new uFunction("GetBuffer", NULL, (void*)MemoryStream__GetBuffer_fn, 0, false, ::g::Uno::Byte_typeof()->Array(), 0),
        new uFunction(".ctor", NULL, (void*)MemoryStream__New1_fn, 0, true, MemoryStream_typeof(), 0));
    return type;
}

// public generated MemoryStream() :1268
void MemoryStream__ctor_1_fn(MemoryStream* __this)
{
    __this->ctor_1();
}

// public override sealed bool get_CanRead() :1272
void MemoryStream__get_CanRead_fn(MemoryStream* __this, bool* __retval)
{
    return *__retval = true, void();
}

// public override sealed bool get_CanSeek() :1282
void MemoryStream__get_CanSeek_fn(MemoryStream* __this, bool* __retval)
{
    return *__retval = true, void();
}

// public override sealed bool get_CanTimeout() :1287
void MemoryStream__get_CanTimeout_fn(MemoryStream* __this, bool* __retval)
{
    return *__retval = false, void();
}

// public override sealed bool get_CanWrite() :1277
void MemoryStream__get_CanWrite_fn(MemoryStream* __this, bool* __retval)
{
    return *__retval = true, void();
}

// public int get_Capacity() :1300
void MemoryStream__get_Capacity_fn(MemoryStream* __this, int* __retval)
{
    *__retval = __this->Capacity();
}

// private void EnsureCapacity(int byteCount) :1355
void MemoryStream__EnsureCapacity_fn(MemoryStream* __this, int* byteCount)
{
    __this->EnsureCapacity(*byteCount);
}

// public override sealed void Flush() :1389
void MemoryStream__Flush_fn(MemoryStream* __this)
{
}

// public byte[] GetBuffer() :1379
void MemoryStream__GetBuffer_fn(MemoryStream* __this, uArray** __retval)
{
    *__retval = __this->GetBuffer();
}

// public override sealed long get_Length() :1292
void MemoryStream__get_Length_fn(MemoryStream* __this, int64_t* __retval)
{
    return *__retval = __this->_length, void();
}

// public generated MemoryStream New() :1268
void MemoryStream__New1_fn(MemoryStream** __retval)
{
    *__retval = MemoryStream::New1();
}

// public generated override sealed long get_Position() :1307
void MemoryStream__get_Position_fn(MemoryStream* __this, int64_t* __retval)
{
    return *__retval = __this->_Position, void();
}

// public generated override sealed void set_Position(long value) :1307
void MemoryStream__set_Position_fn(MemoryStream* __this, int64_t* value)
{
    int64_t value_ = *value;
    __this->_Position = value_;
}

// public override sealed int Read(byte[] dst, int byteOffset, int byteCount) :1327
void MemoryStream__Read_fn(MemoryStream* __this, uArray* dst, int* byteOffset, int* byteCount, int* __retval)
{
    int byteCount_ = *byteCount;
    int byteOffset_ = *byteOffset;
    int i = 0;

    for (; (i < byteCount_) && ((__this->Position() + (int64_t)i) < __this->Length()); i++)
        uPtr(dst)->Item<uint8_t>(i + byteOffset_) = uPtr(__this->_buffer)->Item<uint8_t>((int)__this->Position() + i);

    __this->Position(__this->Position() + (int64_t)i);
    return *__retval = i, void();
}

// private void ResizeTo(int newSize) :1371
void MemoryStream__ResizeTo_fn(MemoryStream* __this, int* newSize)
{
    __this->ResizeTo(*newSize);
}

// public override sealed long Seek(long byteOffset, Uno.IO.SeekOrigin origin) :1338
void MemoryStream__Seek_fn(MemoryStream* __this, int64_t* byteOffset, int* origin, int64_t* __retval)
{
    int origin_ = *origin;
    int64_t byteOffset_ = *byteOffset;

    switch (origin_)
    {
        case 0:
        {
            __this->Position(byteOffset_);
            break;
        }
        case 2:
        {
            __this->Position(__this->Length() + byteOffset_);
            break;
        }
        default:
        {
            __this->Position(__this->Position() + byteOffset_);
            break;
        }
    }

    return *__retval = __this->Position(), void();
}

// public override sealed void SetLength(long value) :1384
void MemoryStream__SetLength_fn(MemoryStream* __this, int64_t* value)
{
    U_THROW(::g::Uno::NotImplementedException::New4());
}

// public override sealed void Write(byte[] src, int byteOffset, int byteCount) :1313
void MemoryStream__Write_fn(MemoryStream* __this, uArray* src, int* byteOffset, int* byteCount)
{
    int byteCount_ = *byteCount;
    int byteOffset_ = *byteOffset;
    __this->EnsureCapacity(byteCount_);

    for (int i = byteOffset_; i < (byteOffset_ + byteCount_); i++)
    {
        uPtr(__this->_buffer)->Item<uint8_t>((int)__this->Position()) = uPtr(src)->Item<uint8_t>(i);
        __this->Position(__this->Position() + 1LL);
    }

    if (__this->Position() > __this->Length())
        __this->_length = __this->Position();
}

// public generated MemoryStream() [instance] :1268
void MemoryStream::ctor_1()
{
    _buffer = uArray::New(::TYPES[0/*byte[]*/], 0);
    _nextIncrease = 256;
    ctor_();
}

// public int get_Capacity() [instance] :1300
int MemoryStream::Capacity()
{
    return uPtr(_buffer)->Length();
}

// private void EnsureCapacity(int byteCount) [instance] :1355
void MemoryStream::EnsureCapacity(int byteCount)
{
    if ((Position() + (int64_t)byteCount) <= (int64_t)Capacity())
        return;
    else if ((Position() + (int64_t)byteCount) <= (int64_t)(Capacity() + _nextIncrease))
        ResizeTo(Capacity() + _nextIncrease);
    else
        ResizeTo((int)Position() + byteCount);
}

// public byte[] GetBuffer() [instance] :1379
uArray* MemoryStream::GetBuffer()
{
    return _buffer;
}

// private void ResizeTo(int newSize) [instance] :1371
void MemoryStream::ResizeTo(int newSize)
{
    uArray* newBuffer = uArray::New(::TYPES[0/*byte[]*/], newSize);
    ::g::Uno::Array::Copy1(::TYPES[9/*Uno.Array.Copy<byte>*/], _buffer, newBuffer, uPtr(_buffer)->Length());
    _buffer = newBuffer;
    _nextIncrease = Capacity();
}

// public generated MemoryStream New() [static] :1268
MemoryStream* MemoryStream::New1()
{
    MemoryStream* obj1 = (MemoryStream*)uNew(MemoryStream_typeof());
    obj1->ctor_1();
    return obj1;
}
// }

// C:\ProgramData\Uno\Packages\UnoCore\0.19.6\Source\Uno\IO\$.uno(1399)
// --------------------------------------------------------------------

// public static class Path :1399
// {
uClassType* Path_typeof()
{
    static uSStrong<uClassType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.TypeSize = sizeof(uClassType);
    type = uClassType::New("Uno.IO.Path", options);
    ::TYPES[3] = ::g::Uno::String_typeof();
    ::TYPES[10] = uObject_typeof();
    type->Reflection.SetFunctions(4,
        new uFunction("Combine", NULL, (void*)Path__Combine_fn, 0, true, ::g::Uno::String_typeof(), 2, ::g::Uno::String_typeof(), ::g::Uno::String_typeof()),
        new uFunction("get_DirectorySeparatorChar", NULL, (void*)Path__get_DirectorySeparatorChar_fn, 0, true, ::g::Uno::Char_typeof(), 0),
        new uFunction("GetFileName", NULL, (void*)Path__GetFileName_fn, 0, true, ::g::Uno::String_typeof(), 1, ::g::Uno::String_typeof()),
        new uFunction("IsPathRooted", NULL, (void*)Path__IsPathRooted_fn, 0, true, ::g::Uno::Bool_typeof(), 1, ::g::Uno::String_typeof()));
    return type;
}

// public static string Combine(string a, string b) :1412
void Path__Combine_fn(uString* a, uString* b, uString** __retval)
{
    *__retval = Path::Combine(a, b);
}

// public static char get_DirectorySeparatorChar() :1403
void Path__get_DirectorySeparatorChar_fn(uChar* __retval)
{
    *__retval = Path::DirectorySeparatorChar();
}

// public static string GetFileName(string filename) :1515
void Path__GetFileName_fn(uString* filename, uString** __retval)
{
    *__retval = Path::GetFileName(filename);
}

// public static bool IsPathRooted(string filename) :1603
void Path__IsPathRooted_fn(uString* filename, bool* __retval)
{
    *__retval = Path::IsPathRooted(filename);
}

// public static string Combine(string a, string b) [static] :1412
uString* Path::Combine(uString* a, uString* b)
{
    if (Path::IsPathRooted(b))
        return b;

    if ((::g::Uno::String::IsNullOrEmpty(a) || (uPtr(a)->Item(uPtr(a)->Length() - 1) == '\\')) || (uPtr(a)->Item(uPtr(a)->Length() - 1) == '/'))
        return ::g::Uno::String::op_Addition2(a, b);

    return ::g::Uno::String::op_Addition2(::g::Uno::String::op_Addition1(a, uBox<uChar>(::TYPES[5/*char*/], Path::DirectorySeparatorChar())), b);
}

// public static string GetFileName(string filename) [static] :1515
uString* Path::GetFileName(uString* filename)
{
    if (::g::Uno::String::op_Equality(filename, NULL))
        return NULL;

    for (int i = uPtr(filename)->Length() - 1; i >= 0; i--)

        switch (filename->Item(i))
        {
            case '\\':
            case '/':
                return ::g::Uno::String::Substring(uPtr(filename), i + 1);
        }

    return filename;
}

// public static bool IsPathRooted(string filename) [static] :1603
bool Path::IsPathRooted(uString* filename)
{
    return ((uPtr(filename)->Length() > 0) && ((uPtr(filename)->Item(0) == '\\') || (uPtr(filename)->Item(0) == '/'))) || ((uPtr(filename)->Length() > 1) && (uPtr(filename)->Item(1) == ':'));
}

// public static char get_DirectorySeparatorChar() [static] :1403
uChar Path::DirectorySeparatorChar()
{
    return '/';
}
// }

// C:\ProgramData\Uno\Packages\UnoCore\0.19.6\Source\Uno\IO\$.uno(1622)
// --------------------------------------------------------------------

// public enum SeekOrigin :1622
uEnumType* SeekOrigin_typeof()
{
    static uSStrong<uEnumType*> type;
    if (type != NULL) return type;

    type = uEnumType::New("Uno.IO.SeekOrigin", ::g::Uno::Int_typeof(), 3);
    type->SetLiterals(
        "Begin", 0LL,
        "Current", 1LL,
        "End", 2LL);
    return type;
}

// C:\ProgramData\Uno\Packages\UnoCore\0.19.6\Source\Uno\IO\$.uno(1638)
// --------------------------------------------------------------------

// public abstract class Stream :1638
// {
Stream_type* Stream_typeof()
{
    static uSStrong<Stream_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.InterfaceCount = 1;
    options.ObjectSize = sizeof(Stream);
    options.TypeSize = sizeof(Stream_type);
    type = (Stream_type*)uClassType::New("Uno.IO.Stream", options);
    type->fp_get_CanTimeout = Stream__get_CanTimeout_fn;
    type->fp_Close = Stream__Close_fn;
    type->fp_Dispose1 = Stream__Dispose1_fn;
    type->fp_get_ReadTimeout = Stream__get_ReadTimeout_fn;
    type->fp_set_ReadTimeout = Stream__set_ReadTimeout_fn;
    type->fp_get_WriteTimeout = Stream__get_WriteTimeout_fn;
    type->fp_set_WriteTimeout = Stream__set_WriteTimeout_fn;
    type->interface0.fp_Dispose = (void(*)(uObject*))Stream__Dispose_fn;
    ::TYPES[10] = uObject_typeof();
    type->SetInterfaces(
        ::g::Uno::IDisposable_typeof(), offsetof(Stream_type, interface0));
    type->Reflection.SetFunctions(19,
        new uFunction("get_CanRead", NULL, NULL, offsetof(Stream_type, fp_get_CanRead), false, ::g::Uno::Bool_typeof(), 0),
        new uFunction("get_CanSeek", NULL, NULL, offsetof(Stream_type, fp_get_CanSeek), false, ::g::Uno::Bool_typeof(), 0),
        new uFunction("get_CanTimeout", NULL, NULL, offsetof(Stream_type, fp_get_CanTimeout), false, ::g::Uno::Bool_typeof(), 0),
        new uFunction("get_CanWrite", NULL, NULL, offsetof(Stream_type, fp_get_CanWrite), false, ::g::Uno::Bool_typeof(), 0),
        new uFunction("Close", NULL, NULL, offsetof(Stream_type, fp_Close), false, uVoid_typeof(), 0),
        new uFunction("Dispose", NULL, (void*)Stream__Dispose_fn, 0, false, uVoid_typeof(), 0),
        new uFunction("Dispose", NULL, NULL, offsetof(Stream_type, fp_Dispose1), false, uVoid_typeof(), 1, ::g::Uno::Bool_typeof()),
        new uFunction("Flush", NULL, NULL, offsetof(Stream_type, fp_Flush), false, uVoid_typeof(), 0),
        new uFunction("get_Length", NULL, NULL, offsetof(Stream_type, fp_get_Length), false, ::g::Uno::Long_typeof(), 0),
        new uFunction("get_Position", NULL, NULL, offsetof(Stream_type, fp_get_Position), false, ::g::Uno::Long_typeof(), 0),
        new uFunction("set_Position", NULL, NULL, offsetof(Stream_type, fp_set_Position), false, uVoid_typeof(), 1, ::g::Uno::Long_typeof()),
        new uFunction("Read", NULL, NULL, offsetof(Stream_type, fp_Read), false, ::g::Uno::Int_typeof(), 3, ::g::Uno::Byte_typeof()->Array(), ::g::Uno::Int_typeof(), ::g::Uno::Int_typeof()),
        new uFunction("get_ReadTimeout", NULL, NULL, offsetof(Stream_type, fp_get_ReadTimeout), false, ::g::Uno::Int_typeof(), 0),
        new uFunction("set_ReadTimeout", NULL, NULL, offsetof(Stream_type, fp_set_ReadTimeout), false, uVoid_typeof(), 1, ::g::Uno::Int_typeof()),
        new uFunction("Seek", NULL, NULL, offsetof(Stream_type, fp_Seek), false, ::g::Uno::Long_typeof(), 2, ::g::Uno::Long_typeof(), ::g::Uno::IO::SeekOrigin_typeof()),
        new uFunction("SetLength", NULL, NULL, offsetof(Stream_type, fp_SetLength), false, uVoid_typeof(), 1, ::g::Uno::Long_typeof()),
        new uFunction("Write", NULL, NULL, offsetof(Stream_type, fp_Write), false, uVoid_typeof(), 3, ::g::Uno::Byte_typeof()->Array(), ::g::Uno::Int_typeof(), ::g::Uno::Int_typeof()),
        new uFunction("get_WriteTimeout", NULL, NULL, offsetof(Stream_type, fp_get_WriteTimeout), false, ::g::Uno::Int_typeof(), 0),
        new uFunction("set_WriteTimeout", NULL, NULL, offsetof(Stream_type, fp_set_WriteTimeout), false, uVoid_typeof(), 1, ::g::Uno::Int_typeof()));
    return type;
}

// protected generated Stream() :1638
void Stream__ctor__fn(Stream* __this)
{
    __this->ctor_();
}

// public virtual bool get_CanTimeout() :1657
void Stream__get_CanTimeout_fn(Stream* __this, bool* __retval)
{
    return *__retval = false, void();
}

// public virtual void Close() :1694
void Stream__Close_fn(Stream* __this)
{
    __this->Dispose1(true);
    ::g::Uno::GC::SuppressFinalize(__this);
}

// public void Dispose() :1700
void Stream__Dispose_fn(Stream* __this)
{
    __this->Dispose();
}

// public virtual void Dispose(bool disposing) :1690
void Stream__Dispose1_fn(Stream* __this, bool* disposing)
{
}

// public virtual int get_ReadTimeout() :1662
void Stream__get_ReadTimeout_fn(Stream* __this, int* __retval)
{
    U_THROW(::g::Uno::NotSupportedException::New4());
}

// public virtual void set_ReadTimeout(int value) :1663
void Stream__set_ReadTimeout_fn(Stream* __this, int* value)
{
    U_THROW(::g::Uno::NotSupportedException::New4());
}

// public virtual int get_WriteTimeout() :1668
void Stream__get_WriteTimeout_fn(Stream* __this, int* __retval)
{
    U_THROW(::g::Uno::NotSupportedException::New4());
}

// public virtual void set_WriteTimeout(int value) :1669
void Stream__set_WriteTimeout_fn(Stream* __this, int* value)
{
    U_THROW(::g::Uno::NotSupportedException::New4());
}

// protected generated Stream() [instance] :1638
void Stream::ctor_()
{
}

// public void Dispose() [instance] :1700
void Stream::Dispose()
{
    Close();
}
// }

// C:\ProgramData\Uno\Packages\UnoCore\0.19.6\Source\Uno\IO\$.uno(1715)
// --------------------------------------------------------------------

// public sealed class StreamReader :1715
// {
::g::Uno::IO::TextReader_type* StreamReader_typeof()
{
    static uSStrong< ::g::Uno::IO::TextReader_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 7;
    options.InterfaceCount = 1;
    options.ObjectSize = sizeof(StreamReader);
    options.TypeSize = sizeof(::g::Uno::IO::TextReader_type);
    type = (::g::Uno::IO::TextReader_type*)uClassType::New("Uno.IO.StreamReader", options);
    type->SetBase(::g::Uno::IO::TextReader_typeof());
    type->fp_Dispose1 = (void(*)(::g::Uno::IO::TextReader*, bool*))StreamReader__Dispose1_fn;
    type->fp_Peek = (void(*)(::g::Uno::IO::TextReader*, int*))StreamReader__Peek_fn;
    type->fp_Read = (void(*)(::g::Uno::IO::TextReader*, int*))StreamReader__Read_fn;
    type->fp_Read1 = (void(*)(::g::Uno::IO::TextReader*, uArray*, int*, int*, int*))StreamReader__Read1_fn;
    type->interface0.fp_Dispose = (void(*)(uObject*))::g::Uno::IO::TextReader__Dispose_fn;
    ::STRINGS[3] = uString::Const("StreamReader");
    ::STRINGS[4] = uString::Const("buffer");
    ::STRINGS[5] = uString::Const("index");
    ::STRINGS[6] = uString::Const("count");
    ::STRINGS[7] = uString::Const("range");
    ::TYPES[11] = ::g::Uno::Text::Encoding_typeof();
    ::TYPES[0] = ::g::Uno::Byte_typeof()->Array();
    ::TYPES[12] = ::g::Uno::Char_typeof()->Array();
    ::TYPES[1] = ::g::Uno::Int_typeof();
    type->SetInterfaces(
        ::g::Uno::IDisposable_typeof(), offsetof(::g::Uno::IO::TextReader_type, interface0));
    type->SetFields(0,
        ::g::Uno::Byte_typeof()->Array(), offsetof(::g::Uno::IO::StreamReader, _byteBuffer), 0,
        ::g::Uno::Int_typeof(), offsetof(::g::Uno::IO::StreamReader, _byteLen), 0,
        ::g::Uno::Char_typeof()->Array(), offsetof(::g::Uno::IO::StreamReader, _charBuffer), 0,
        ::g::Uno::Int_typeof(), offsetof(::g::Uno::IO::StreamReader, _charLen), 0,
        ::g::Uno::Int_typeof(), offsetof(::g::Uno::IO::StreamReader, _charPos), 0,
        ::g::Uno::Text::Decoder_typeof(), offsetof(::g::Uno::IO::StreamReader, _decoder), 0,
        ::g::Uno::IO::Stream_typeof(), offsetof(::g::Uno::IO::StreamReader, _stream), 0);
    type->Reflection.SetFunctions(2,
        new uFunction(".ctor", NULL, (void*)StreamReader__New1_fn, 0, true, StreamReader_typeof(), 1, ::g::Uno::IO::Stream_typeof()),
        new uFunction("ReadToEnd", NULL, (void*)StreamReader__ReadToEnd_fn, 0, false, ::g::Uno::String_typeof(), 0));
    return type;
}

// public StreamReader(Uno.IO.Stream stream) :1749
void StreamReader__ctor_1_fn(StreamReader* __this, ::g::Uno::IO::Stream* stream)
{
    __this->ctor_1(stream);
}

// protected override sealed void Dispose(bool disposing) :1767
void StreamReader__Dispose1_fn(StreamReader* __this, bool* disposing)
{
    bool disposing_ = *disposing;

    if (disposing_ && (__this->_stream != NULL))
    {
        uPtr(__this->_stream)->Close();
        __this->_stream = NULL;
    }

    ::g::Uno::IO::TextReader__Dispose1_fn(__this, uCRef(disposing_));
}

// public StreamReader New(Uno.IO.Stream stream) :1749
void StreamReader__New1_fn(::g::Uno::IO::Stream* stream, StreamReader** __retval)
{
    *__retval = StreamReader::New1(stream);
}

// public override sealed int Peek() :1777
void StreamReader__Peek_fn(StreamReader* __this, int* __retval)
{
    if (__this->_stream == NULL)
        U_THROW(::g::Uno::ObjectDisposedException::New4(::STRINGS[3/*"StreamReader"*/]));

    if (__this->_charPos == __this->_charLen)
    {
        __this->ReadBuffer();

        if (__this->_charLen == 0)
            return *__retval = -1, void();
    }

    return *__retval = (int)uPtr(__this->_charBuffer)->Item<uChar>(__this->_charPos), void();
}

// public override sealed int Read() :1790
void StreamReader__Read_fn(StreamReader* __this, int* __retval)
{
    if (__this->_stream == NULL)
        U_THROW(::g::Uno::ObjectDisposedException::New4(::STRINGS[3/*"StreamReader"*/]));

    if (__this->_charPos == __this->_charLen)
    {
        __this->ReadBuffer();

        if (__this->_charLen == 0)
            return *__retval = -1, void();
    }

    return *__retval = (int)uPtr(__this->_charBuffer)->Item<uChar>(__this->_charPos++), void();
}

// public override sealed int Read(char[] buffer, int index, int count) :1803
void StreamReader__Read1_fn(StreamReader* __this, uArray* buffer, int* index, int* count, int* __retval)
{
    int index_ = *index;
    int count_ = *count;

    if (buffer == NULL)
        U_THROW(::g::Uno::ArgumentNullException::New6(::STRINGS[4/*"buffer"*/]));

    if (index_ < 0)
        U_THROW(::g::Uno::ArgumentOutOfRangeException::New6(::STRINGS[5/*"index"*/]));

    if (count_ < 0)
        U_THROW(::g::Uno::ArgumentOutOfRangeException::New6(::STRINGS[6/*"count"*/]));

    if ((index_ + count_) > uPtr(buffer)->Length())
        U_THROW(::g::Uno::ArgumentException::New4(::STRINGS[7/*"range"*/]));

    if (__this->_stream == NULL)
        U_THROW(::g::Uno::ObjectDisposedException::New4(::STRINGS[3/*"StreamReader"*/]));

    if (__this->_charLen == 0)
        __this->ReadBuffer();

    int charsCount = 0;

    while ((charsCount != count_) && (__this->_charLen != 0))
    {
        int symbols = ::g::Uno::Math::Min8(__this->_charLen - __this->_charPos, count_ - charsCount);

        for (int i = 0; i < symbols; ++i)
        {
            uPtr(buffer)->Item<uChar>((index_ + charsCount) + i) = uPtr(__this->_charBuffer)->Item<uChar>(__this->_charPos);
            ++__this->_charPos;
        }

        charsCount = charsCount + symbols;

        if (charsCount != count_)
            __this->ReadBuffer();
    }

    return *__retval = charsCount, void();
}

// private void ReadBuffer() :1852
void StreamReader__ReadBuffer_fn(StreamReader* __this)
{
    __this->ReadBuffer();
}

// public string ReadToEnd() :1835
void StreamReader__ReadToEnd_fn(StreamReader* __this, uString** __retval)
{
    *__retval = __this->ReadToEnd();
}

// public StreamReader(Uno.IO.Stream stream) [instance] :1749
void StreamReader::ctor_1(::g::Uno::IO::Stream* stream)
{
    ctor_();
    _stream = stream;
    _decoder = uPtr(::g::Uno::Text::Encoding::UTF8())->GetDecoder();
    _byteBuffer = uArray::New(::TYPES[0/*byte[]*/], 256);
    _byteLen = 0;
    _charBuffer = uArray::New(::TYPES[12/*char[]*/], 256);
    _charPos = 0;
    _charLen = 0;
}

// private void ReadBuffer() [instance] :1852
void StreamReader::ReadBuffer()
{
    _charPos = 0;
    _charLen = 0;

    do
    {
        _byteLen = uPtr(_stream)->Read(_byteBuffer, 0, uPtr(_byteBuffer)->Length());

        if (_byteLen == 0)
            return;

        _charLen = (_charLen + uPtr(_decoder)->GetChars(_byteBuffer, 0, _byteLen, _charBuffer, _charLen));
    }
    while (_charLen == 0);
}

// public string ReadToEnd() [instance] :1835
uString* StreamReader::ReadToEnd()
{
    ::g::Uno::Text::StringBuilder* stringBuilder = ::g::Uno::Text::StringBuilder::New1();

    if (_charLen == 0)
        ReadBuffer();

    while (_charLen != 0)
    {
        int count = _charLen - _charPos;
        uArray* array = uArray::New(::TYPES[12/*char[]*/], count);

        for (int i = 0; i < count; i++)
            array->Item<uChar>(i) = uPtr(_charBuffer)->Item<uChar>(_charPos + i);

        uPtr(stringBuilder)->Append(array);
        ReadBuffer();
    }

    return stringBuilder->ToString();
}

// public StreamReader New(Uno.IO.Stream stream) [static] :1749
StreamReader* StreamReader::New1(::g::Uno::IO::Stream* stream)
{
    StreamReader* obj1 = (StreamReader*)uNew(StreamReader_typeof());
    obj1->ctor_1(stream);
    return obj1;
}
// }

// C:\ProgramData\Uno\Packages\UnoCore\0.19.6\Source\Uno\IO\$.uno(1877)
// --------------------------------------------------------------------

// public sealed class StreamWriter :1877
// {
::g::Uno::IO::TextWriter_type* StreamWriter_typeof()
{
    static uSStrong< ::g::Uno::IO::TextWriter_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 3;
    options.InterfaceCount = 1;
    options.ObjectSize = sizeof(StreamWriter);
    options.TypeSize = sizeof(::g::Uno::IO::TextWriter_type);
    type = (::g::Uno::IO::TextWriter_type*)uClassType::New("Uno.IO.StreamWriter", options);
    type->SetBase(::g::Uno::IO::TextWriter_typeof());
    type->fp_Close = (void(*)(::g::Uno::IO::TextWriter*))StreamWriter__Close_fn;
    type->fp_Dispose1 = (void(*)(::g::Uno::IO::TextWriter*, bool*))StreamWriter__Dispose1_fn;
    type->fp_Flush = (void(*)(::g::Uno::IO::TextWriter*))StreamWriter__Flush_fn;
    type->fp_Write1 = (void(*)(::g::Uno::IO::TextWriter*, uChar*))StreamWriter__Write1_fn;
    type->fp_Write3 = (void(*)(::g::Uno::IO::TextWriter*, uArray*, int*, int*))StreamWriter__Write3_fn;
    type->fp_Write9 = (void(*)(::g::Uno::IO::TextWriter*, uString*))StreamWriter__Write9_fn;
    type->interface0.fp_Dispose = (void(*)(uObject*))::g::Uno::IO::TextWriter__Dispose_fn;
    ::STRINGS[4] = uString::Const("buffer");
    ::STRINGS[5] = uString::Const("index");
    ::STRINGS[6] = uString::Const("count");
    ::STRINGS[7] = uString::Const("range");
    ::TYPES[0] = ::g::Uno::Byte_typeof()->Array();
    ::TYPES[5] = ::g::Uno::Char_typeof();
    ::TYPES[12] = ::g::Uno::Char_typeof()->Array();
    type->SetInterfaces(
        ::g::Uno::IDisposable_typeof(), offsetof(::g::Uno::IO::TextWriter_type, interface0));
    type->SetFields(0,
        ::g::Uno::Byte_typeof()->Array(), offsetof(::g::Uno::IO::StreamWriter, _buffer), 0,
        ::g::Uno::Int_typeof(), offsetof(::g::Uno::IO::StreamWriter, _index), 0,
        ::g::Uno::IO::Stream_typeof(), offsetof(::g::Uno::IO::StreamWriter, _stream), 0);
    type->Reflection.SetFunctions(1,
        new uFunction(".ctor", NULL, (void*)StreamWriter__New1_fn, 0, true, StreamWriter_typeof(), 1, ::g::Uno::IO::Stream_typeof()));
    return type;
}

// public StreamWriter(Uno.IO.Stream stream) :1893
void StreamWriter__ctor_1_fn(StreamWriter* __this, ::g::Uno::IO::Stream* stream)
{
    __this->ctor_1(stream);
}

// public override sealed void Close() :1911
void StreamWriter__Close_fn(StreamWriter* __this)
{
    __this->Dispose1(true);
}

// protected override sealed void Dispose(bool disposing) :1901
void StreamWriter__Dispose1_fn(StreamWriter* __this, bool* disposing)
{
    bool disposing_ = *disposing;
    __this->Flush();

    if (disposing_ && (__this->_stream != NULL))
        uPtr(__this->_stream)->Close();

    ::g::Uno::IO::TextWriter__Dispose1_fn(__this, uCRef(disposing_));
}

// public override sealed void Flush() :1967
void StreamWriter__Flush_fn(StreamWriter* __this)
{
    if (__this->_index != 0)
    {
        uPtr(__this->_stream)->Write(__this->_buffer, 0, __this->_index);
        __this->_index = 0;
    }

    uPtr(__this->_stream)->Flush();
}

// public StreamWriter New(Uno.IO.Stream stream) :1893
void StreamWriter__New1_fn(::g::Uno::IO::Stream* stream, StreamWriter** __retval)
{
    *__retval = StreamWriter::New1(stream);
}

// private void Write(byte[] array, int index, int count) :1949
void StreamWriter__Write13_fn(StreamWriter* __this, uArray* array, int* index, int* count)
{
    __this->Write13(array, *index, *count);
}

// public override sealed void Write(char value) :1916
void StreamWriter__Write1_fn(StreamWriter* __this, uChar* value)
{
    uChar value_ = *value;
    __this->Write13(::g::Uno::Runtime::Implementation::TextEncodingImpl::EncodeUtf8(::g::Uno::Char::ToString(value_, ::TYPES[5/*char*/])), 0, 1);
}

// public override sealed void Write(char[] buffer, int index, int count) :1921
void StreamWriter__Write3_fn(StreamWriter* __this, uArray* buffer, int* index, int* count)
{
    int index_ = *index;
    int count_ = *count;

    if (buffer == NULL)
        U_THROW(::g::Uno::ArgumentNullException::New6(::STRINGS[4/*"buffer"*/]));

    if (index_ < 0)
        U_THROW(::g::Uno::ArgumentOutOfRangeException::New6(::STRINGS[5/*"index"*/]));

    if (count_ < 0)
        U_THROW(::g::Uno::ArgumentOutOfRangeException::New6(::STRINGS[6/*"count"*/]));

    if ((index_ + count_) > uPtr(buffer)->Length())
        U_THROW(::g::Uno::ArgumentException::New4(::STRINGS[7/*"range"*/]));

    uArray* array = ::g::Uno::Runtime::Implementation::TextEncodingImpl::EncodeUtf8(uString::CharArray(buffer));
    __this->Write13(array, index_, count_);
}

// public override sealed void Write(string value) :1943
void StreamWriter__Write9_fn(StreamWriter* __this, uString* value)
{
    uArray* array = ::g::Uno::Runtime::Implementation::TextEncodingImpl::EncodeUtf8(value);
    __this->Write13(array, 0, uPtr(array)->Length());
}

// public StreamWriter(Uno.IO.Stream stream) [instance] :1893
void StreamWriter::ctor_1(::g::Uno::IO::Stream* stream)
{
    ctor_();
    _stream = stream;
    _buffer = uArray::New(::TYPES[0/*byte[]*/], 256);
    _index = 0;
}

// private void Write(byte[] array, int index, int count) [instance] :1949
void StreamWriter::Write13(uArray* array, int index, int count)
{
    if ((_index + count) >= 256)
    {
        uPtr(_stream)->Write(_buffer, 0, _index);
        _index = 0;
    }

    if (count >= 256)
    {
        uPtr(_stream)->Write(array, index, count);
        return;
    }

    for (int i = 0; i < count; i++)
        uPtr(_buffer)->Item<uint8_t>(_index++) = uPtr(array)->Item<uint8_t>(index + i);
}

// public StreamWriter New(Uno.IO.Stream stream) [static] :1893
StreamWriter* StreamWriter::New1(::g::Uno::IO::Stream* stream)
{
    StreamWriter* obj1 = (StreamWriter*)uNew(StreamWriter_typeof());
    obj1->ctor_1(stream);
    return obj1;
}
// }

// C:\ProgramData\Uno\Packages\UnoCore\0.19.6\Source\Uno\IO\$.uno(2088)
// --------------------------------------------------------------------

// public sealed class StringWriter :2088
// {
::g::Uno::IO::TextWriter_type* StringWriter_typeof()
{
    static uSStrong< ::g::Uno::IO::TextWriter_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 4;
    options.InterfaceCount = 1;
    options.ObjectSize = sizeof(StringWriter);
    options.TypeSize = sizeof(::g::Uno::IO::TextWriter_type);
    type = (::g::Uno::IO::TextWriter_type*)uClassType::New("Uno.IO.StringWriter", options);
    type->SetBase(::g::Uno::IO::TextWriter_typeof());
    type->fp_ctor_ = (void*)StringWriter__New1_fn;
    type->fp_Close = (void(*)(::g::Uno::IO::TextWriter*))StringWriter__Close_fn;
    type->fp_Dispose1 = (void(*)(::g::Uno::IO::TextWriter*, bool*))StringWriter__Dispose1_fn;
    type->fp_ToString = (void(*)(uObject*, uString**))StringWriter__ToString_fn;
    type->fp_Write1 = (void(*)(::g::Uno::IO::TextWriter*, uChar*))StringWriter__Write1_fn;
    type->fp_Write3 = (void(*)(::g::Uno::IO::TextWriter*, uArray*, int*, int*))StringWriter__Write3_fn;
    type->interface0.fp_Dispose = (void(*)(uObject*))::g::Uno::IO::TextWriter__Dispose_fn;
    ::STRINGS[8] = uString::Const("StringWriter");
    ::STRINGS[4] = uString::Const("buffer");
    ::STRINGS[5] = uString::Const("index");
    ::STRINGS[6] = uString::Const("count");
    ::STRINGS[7] = uString::Const("range");
    ::TYPES[12] = ::g::Uno::Char_typeof()->Array();
    ::TYPES[13] = ::g::Uno::Bool_typeof();
    ::TYPES[14] = ::g::Uno::Array_typeof()->MakeMethod(1, ::g::Uno::Char_typeof());
    type->SetInterfaces(
        ::g::Uno::IDisposable_typeof(), offsetof(::g::Uno::IO::TextWriter_type, interface0));
    type->SetFields(0,
        ::g::Uno::Char_typeof()->Array(), offsetof(::g::Uno::IO::StringWriter, _buffer), 0,
        ::g::Uno::Int_typeof(), offsetof(::g::Uno::IO::StringWriter, _index), 0,
        ::g::Uno::Bool_typeof(), offsetof(::g::Uno::IO::StringWriter, _open), 0,
        ::g::Uno::Text::StringBuilder_typeof(), offsetof(::g::Uno::IO::StringWriter, _stringBuilder), 0);
    type->Reflection.SetFunctions(1,
        new uFunction(".ctor", NULL, (void*)StringWriter__New1_fn, 0, true, StringWriter_typeof(), 0));
    return type;
}

// public StringWriter() :2098
void StringWriter__ctor_1_fn(StringWriter* __this)
{
    __this->ctor_1();
}

// public override sealed void Close() :2120
void StringWriter__Close_fn(StringWriter* __this)
{
    __this->Dispose1(true);
    __this->_open = false;
}

// protected override sealed void Dispose(bool disposing) :2112
void StringWriter__Dispose1_fn(StringWriter* __this, bool* disposing)
{
    bool disposing_ = *disposing;
    __this->_open = false;

    if (__this->_index != 0)
        __this->WriteBuffer();

    ::g::Uno::IO::TextWriter__Dispose1_fn(__this, uCRef(disposing_));
}

// public StringWriter New() :2098
void StringWriter__New1_fn(StringWriter** __retval)
{
    *__retval = StringWriter::New1();
}

// public override sealed string ToString() :2186
void StringWriter__ToString_fn(StringWriter* __this, uString** __retval)
{
    if (__this->_index != 0)
        __this->WriteBuffer();

    return *__retval = uPtr(__this->_stringBuilder)->ToString(), void();
}

// public override sealed void Write(char value) :2126
void StringWriter__Write1_fn(StringWriter* __this, uChar* value)
{
    uChar value_ = *value;

    if (!__this->_open)
        U_THROW(::g::Uno::ObjectDisposedException::New4(::STRINGS[8/*"StringWriter"*/]));

    uPtr(__this->_buffer)->Item<uChar>(__this->_index++) = value_;

    if (__this->_index == 256)
        __this->WriteBuffer();
}

// public override sealed void Write(char[] buffer, int index, int count) :2139
void StringWriter__Write3_fn(StringWriter* __this, uArray* buffer, int* index, int* count)
{
    int index_ = *index;
    int count_ = *count;

    if (buffer == NULL)
        U_THROW(::g::Uno::ArgumentNullException::New6(::STRINGS[4/*"buffer"*/]));

    if (index_ < 0)
        U_THROW(::g::Uno::ArgumentOutOfRangeException::New6(::STRINGS[5/*"index"*/]));

    if (count_ < 0)
        U_THROW(::g::Uno::ArgumentOutOfRangeException::New6(::STRINGS[6/*"count"*/]));

    if ((index_ + count_) > uPtr(buffer)->Length())
        U_THROW(::g::Uno::ArgumentException::New4(::STRINGS[7/*"range"*/]));

    if (!__this->_open)
        U_THROW(::g::Uno::ObjectDisposedException::New4(::STRINGS[8/*"StringWriter"*/]));

    if ((__this->_index + count_) >= 256)
        __this->WriteBuffer();

    if (count_ >= 256)
    {
        uArray* array = uArray::New(::TYPES[12/*char[]*/], count_);
        ::g::Uno::Array::Copy(::TYPES[14/*Uno.Array.Copy<char>*/], buffer, index_, array, 0, count_);
        uPtr(__this->_stringBuilder)->Append(array);
    }
    else
    {
        ::g::Uno::Array::Copy(::TYPES[14/*Uno.Array.Copy<char>*/], buffer, index_, __this->_buffer, __this->_index, count_);
        __this->_index = (__this->_index + count_);
    }
}

// private void WriteBuffer() :2178
void StringWriter__WriteBuffer_fn(StringWriter* __this)
{
    __this->WriteBuffer();
}

// public StringWriter() [instance] :2098
void StringWriter::ctor_1()
{
    ctor_();
    _stringBuilder = ::g::Uno::Text::StringBuilder::New1();
    _open = true;
    _buffer = uArray::New(::TYPES[12/*char[]*/], 256);
    _index = 0;
}

// private void WriteBuffer() [instance] :2178
void StringWriter::WriteBuffer()
{
    uArray* array = uArray::New(::TYPES[12/*char[]*/], _index);
    ::g::Uno::Array::Copy(::TYPES[14/*Uno.Array.Copy<char>*/], _buffer, 0, array, 0, _index);
    uPtr(_stringBuilder)->Append(array);
    _index = 0;
}

// public StringWriter New() [static] :2098
StringWriter* StringWriter::New1()
{
    StringWriter* obj1 = (StringWriter*)uNew(StringWriter_typeof());
    obj1->ctor_1();
    return obj1;
}
// }

// C:\ProgramData\Uno\Packages\UnoCore\0.19.6\Source\Uno\IO\$.uno(2207)
// --------------------------------------------------------------------

// public abstract class TextReader :2207
// {
TextReader_type* TextReader_typeof()
{
    static uSStrong<TextReader_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.InterfaceCount = 1;
    options.ObjectSize = sizeof(TextReader);
    options.TypeSize = sizeof(TextReader_type);
    type = (TextReader_type*)uClassType::New("Uno.IO.TextReader", options);
    type->fp_Dispose1 = TextReader__Dispose1_fn;
    type->fp_Peek = TextReader__Peek_fn;
    type->fp_Read = TextReader__Read_fn;
    type->fp_Read1 = TextReader__Read1_fn;
    type->interface0.fp_Dispose = (void(*)(uObject*))TextReader__Dispose_fn;
    ::STRINGS[4] = uString::Const("buffer");
    ::STRINGS[5] = uString::Const("index");
    ::STRINGS[6] = uString::Const("count");
    ::STRINGS[7] = uString::Const("range");
    ::TYPES[10] = uObject_typeof();
    ::TYPES[12] = ::g::Uno::Char_typeof()->Array();
    ::TYPES[5] = ::g::Uno::Char_typeof();
    ::TYPES[15] = ::g::Uno::Collections::List_typeof()->MakeType(::g::Uno::Char_typeof());
    type->SetInterfaces(
        ::g::Uno::IDisposable_typeof(), offsetof(TextReader_type, interface0));
    type->Reflection.SetFunctions(5,
        new uFunction("Dispose", NULL, (void*)TextReader__Dispose_fn, 0, false, uVoid_typeof(), 0),
        new uFunction("Peek", NULL, NULL, offsetof(TextReader_type, fp_Peek), false, ::g::Uno::Int_typeof(), 0),
        new uFunction("Read", NULL, NULL, offsetof(TextReader_type, fp_Read), false, ::g::Uno::Int_typeof(), 0),
        new uFunction("Read", NULL, NULL, offsetof(TextReader_type, fp_Read1), false, ::g::Uno::Int_typeof(), 3, ::g::Uno::Char_typeof()->Array(), ::g::Uno::Int_typeof(), ::g::Uno::Int_typeof()),
        new uFunction("ReadLine", NULL, (void*)TextReader__ReadLine_fn, 0, false, ::g::Uno::String_typeof(), 0));
    return type;
}

// protected generated TextReader() :2207
void TextReader__ctor__fn(TextReader* __this)
{
    __this->ctor_();
}

// public void Dispose() :2211
void TextReader__Dispose_fn(TextReader* __this)
{
    __this->Dispose();
}

// protected virtual void Dispose(bool disposing) :2217
void TextReader__Dispose1_fn(TextReader* __this, bool* disposing)
{
}

// public virtual int Peek() :2227
void TextReader__Peek_fn(TextReader* __this, int* __retval)
{
    return *__retval = -1, void();
}

// public virtual int Read() :2232
void TextReader__Read_fn(TextReader* __this, int* __retval)
{
    return *__retval = -1, void();
}

// public virtual int Read(char[] buffer, int index, int count) :2237
void TextReader__Read1_fn(TextReader* __this, uArray* buffer, int* index, int* count, int* __retval)
{
    int index_ = *index;
    int count_ = *count;

    if (buffer == NULL)
        U_THROW(::g::Uno::ArgumentNullException::New6(::STRINGS[4/*"buffer"*/]));

    if (index_ < 0)
        U_THROW(::g::Uno::ArgumentOutOfRangeException::New6(::STRINGS[5/*"index"*/]));

    if (count_ < 0)
        U_THROW(::g::Uno::ArgumentOutOfRangeException::New6(::STRINGS[6/*"count"*/]));

    if ((index_ + count_) > uPtr(buffer)->Length())
        U_THROW(::g::Uno::ArgumentException::New4(::STRINGS[7/*"range"*/]));

    int i = 0;

    for (i = 0; i < count_; i++)
    {
        int symbol = __this->Read();

        if (symbol == -1)
            break;

        uPtr(buffer)->Item<uChar>(index_ + i) = (uChar)symbol;
    }

    return *__retval = i, void();
}

// public string ReadLine() :2294
void TextReader__ReadLine_fn(TextReader* __this, uString** __retval)
{
    *__retval = __this->ReadLine();
}

// protected generated TextReader() [instance] :2207
void TextReader::ctor_()
{
}

// public void Dispose() [instance] :2211
void TextReader::Dispose()
{
    Dispose1(true);
    ::g::Uno::GC::SuppressFinalize(this);
}

// public string ReadLine() [instance] :2294
uString* TextReader::ReadLine()
{
    ::g::Uno::Collections::List* buffer = (::g::Uno::Collections::List*)::g::Uno::Collections::List::New2(::TYPES[15/*Uno.Collections.List<char>*/], 16);
    int symbol = 0;

    while (true)
    {
        symbol = Read();

        if (((symbol == -1) || (symbol == 13)) || (symbol == 10))
            break;

        ::g::Uno::Collections::List__Add_fn(uPtr(buffer), uCRef<uChar>((uChar)symbol));
    }

    if ((symbol == 13) && (Peek() == 10))
        Read();

    return uString::CharArray((uArray*)buffer->ToArray());
}
// }

// C:\ProgramData\Uno\Packages\UnoCore\0.19.6\Source\Uno\IO\$.uno(2324)
// --------------------------------------------------------------------

// public abstract class TextWriter :2324
// {
TextWriter_type* TextWriter_typeof()
{
    static uSStrong<TextWriter_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.InterfaceCount = 1;
    options.ObjectSize = sizeof(TextWriter);
    options.TypeSize = sizeof(TextWriter_type);
    type = (TextWriter_type*)uClassType::New("Uno.IO.TextWriter", options);
    type->fp_Close = TextWriter__Close_fn;
    type->fp_Dispose1 = TextWriter__Dispose1_fn;
    type->fp_Flush = TextWriter__Flush_fn;
    type->fp_Write1 = TextWriter__Write1_fn;
    type->fp_Write3 = TextWriter__Write3_fn;
    type->fp_Write9 = TextWriter__Write9_fn;
    type->interface0.fp_Dispose = (void(*)(uObject*))TextWriter__Dispose_fn;
    ::STRINGS[9] = uString::Const("\r\n"
        "");
    ::TYPES[10] = uObject_typeof();
    ::TYPES[13] = ::g::Uno::Bool_typeof();
    ::TYPES[12] = ::g::Uno::Char_typeof()->Array();
    ::TYPES[16] = ::g::Uno::Double_typeof();
    ::TYPES[17] = ::g::Uno::Float_typeof();
    ::TYPES[1] = ::g::Uno::Int_typeof();
    ::TYPES[8] = ::g::Uno::Long_typeof();
    ::TYPES[6] = ::g::Uno::UInt_typeof();
    ::TYPES[18] = ::g::Uno::ULong_typeof();
    type->SetInterfaces(
        ::g::Uno::IDisposable_typeof(), offsetof(TextWriter_type, interface0));
    type->Reflection.SetFunctions(30,
        new uFunction("Close", NULL, NULL, offsetof(TextWriter_type, fp_Close), false, uVoid_typeof(), 0),
        new uFunction("Dispose", NULL, (void*)TextWriter__Dispose_fn, 0, false, uVoid_typeof(), 0),
        new uFunction("Flush", NULL, NULL, offsetof(TextWriter_type, fp_Flush), false, uVoid_typeof(), 0),
        new uFunction("Write", NULL, (void*)TextWriter__Write_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::Bool_typeof()),
        new uFunction("Write", NULL, NULL, offsetof(TextWriter_type, fp_Write1), false, uVoid_typeof(), 1, ::g::Uno::Char_typeof()),
        new uFunction("Write", NULL, (void*)TextWriter__Write2_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::Char_typeof()->Array()),
        new uFunction("Write", NULL, NULL, offsetof(TextWriter_type, fp_Write3), false, uVoid_typeof(), 3, ::g::Uno::Char_typeof()->Array(), ::g::Uno::Int_typeof(), ::g::Uno::Int_typeof()),
        new uFunction("Write", NULL, (void*)TextWriter__Write4_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::Double_typeof()),
        new uFunction("Write", NULL, (void*)TextWriter__Write5_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::Float_typeof()),
        new uFunction("Write", NULL, (void*)TextWriter__Write6_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::Int_typeof()),
        new uFunction("Write", NULL, (void*)TextWriter__Write7_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::Long_typeof()),
        new uFunction("Write", NULL, (void*)TextWriter__Write8_fn, 0, false, uVoid_typeof(), 1, uObject_typeof()),
        new uFunction("Write", NULL, NULL, offsetof(TextWriter_type, fp_Write9), false, uVoid_typeof(), 1, ::g::Uno::String_typeof()),
        new uFunction("Write", NULL, (void*)TextWriter__Write10_fn, 0, false, uVoid_typeof(), 2, ::g::Uno::String_typeof(), uObject_typeof()->Array()),
        new uFunction("Write", NULL, (void*)TextWriter__Write11_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::UInt_typeof()),
        new uFunction("Write", NULL, (void*)TextWriter__Write12_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::ULong_typeof()),
        new uFunction("WriteLine", NULL, (void*)TextWriter__WriteLine_fn, 0, false, uVoid_typeof(), 0),
        new uFunction("WriteLine", NULL, (void*)TextWriter__WriteLine1_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::Bool_typeof()),
        new uFunction("WriteLine", NULL, (void*)TextWriter__WriteLine2_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::Char_typeof()),
        new uFunction("WriteLine", NULL, (void*)TextWriter__WriteLine3_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::Char_typeof()->Array()),
        new uFunction("WriteLine", NULL, (void*)TextWriter__WriteLine4_fn, 0, false, uVoid_typeof(), 3, ::g::Uno::Char_typeof()->Array(), ::g::Uno::Int_typeof(), ::g::Uno::Int_typeof()),
        new uFunction("WriteLine", NULL, (void*)TextWriter__WriteLine5_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::Double_typeof()),
        new uFunction("WriteLine", NULL, (void*)TextWriter__WriteLine6_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::Float_typeof()),
        new uFunction("WriteLine", NULL, (void*)TextWriter__WriteLine7_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::Int_typeof()),
        new uFunction("WriteLine", NULL, (void*)TextWriter__WriteLine8_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::Long_typeof()),
        new uFunction("WriteLine", NULL, (void*)TextWriter__WriteLine9_fn, 0, false, uVoid_typeof(), 1, uObject_typeof()),
        new uFunction("WriteLine", NULL, (void*)TextWriter__WriteLine10_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::String_typeof()),
        new uFunction("WriteLine", NULL, (void*)TextWriter__WriteLine11_fn, 0, false, uVoid_typeof(), 2, ::g::Uno::String_typeof(), uObject_typeof()->Array()),
        new uFunction("WriteLine", NULL, (void*)TextWriter__WriteLine12_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::UInt_typeof()),
        new uFunction("WriteLine", NULL, (void*)TextWriter__WriteLine13_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::ULong_typeof()));
    return type;
}

// protected generated TextWriter() :2324
void TextWriter__ctor__fn(TextWriter* __this)
{
    __this->ctor_();
}

// public virtual void Close() :2338
void TextWriter__Close_fn(TextWriter* __this)
{
    __this->Dispose1(true);
    ::g::Uno::GC::SuppressFinalize(__this);
}

// public void Dispose() :2328
void TextWriter__Dispose_fn(TextWriter* __this)
{
    __this->Dispose();
}

// protected virtual void Dispose(bool disposing) :2334
void TextWriter__Dispose1_fn(TextWriter* __this, bool* disposing)
{
}

// public virtual void Flush() :2344
void TextWriter__Flush_fn(TextWriter* __this)
{
}

// public void Write(bool value) :2364
void TextWriter__Write_fn(TextWriter* __this, bool* value)
{
    __this->Write(*value);
}

// public virtual void Write(char value) :2348
void TextWriter__Write1_fn(TextWriter* __this, uChar* value)
{
}

// public void Write(char[] buffer) :2356
void TextWriter__Write2_fn(TextWriter* __this, uArray* buffer)
{
    __this->Write2(buffer);
}

// public virtual void Write(char[] buffer, int index, int count) :2352
void TextWriter__Write3_fn(TextWriter* __this, uArray* buffer, int* index, int* count)
{
}

// public void Write(double value) :2394
void TextWriter__Write4_fn(TextWriter* __this, double* value)
{
    __this->Write4(*value);
}

// public void Write(float value) :2389
void TextWriter__Write5_fn(TextWriter* __this, float* value)
{
    __this->Write5(*value);
}

// public void Write(int value) :2369
void TextWriter__Write6_fn(TextWriter* __this, int* value)
{
    __this->Write6(*value);
}

// public void Write(long value) :2379
void TextWriter__Write7_fn(TextWriter* __this, int64_t* value)
{
    __this->Write7(*value);
}

// public void Write(object value) :2407
void TextWriter__Write8_fn(TextWriter* __this, uObject* value)
{
    __this->Write8(value);
}

// public virtual void Write(string value) :2399
void TextWriter__Write9_fn(TextWriter* __this, uString* value)
{
    if (::g::Uno::String::op_Inequality(value, NULL))
        __this->Write2(::g::Uno::String::ToCharArray(uPtr(value)));
}

// public void Write(string format, object[] args) :2415
void TextWriter__Write10_fn(TextWriter* __this, uString* format, uArray* args)
{
    __this->Write10(format, args);
}

// public void Write(uint value) :2374
void TextWriter__Write11_fn(TextWriter* __this, uint32_t* value)
{
    __this->Write11(*value);
}

// public void Write(ulong value) :2384
void TextWriter__Write12_fn(TextWriter* __this, uint64_t* value)
{
    __this->Write12(*value);
}

// public void WriteLine() :2420
void TextWriter__WriteLine_fn(TextWriter* __this)
{
    __this->WriteLine();
}

// public void WriteLine(bool value) :2443
void TextWriter__WriteLine1_fn(TextWriter* __this, bool* value)
{
    __this->WriteLine1(*value);
}

// public void WriteLine(char value) :2425
void TextWriter__WriteLine2_fn(TextWriter* __this, uChar* value)
{
    __this->WriteLine2(*value);
}

// public void WriteLine(char[] buffer) :2431
void TextWriter__WriteLine3_fn(TextWriter* __this, uArray* buffer)
{
    __this->WriteLine3(buffer);
}

// public void WriteLine(char[] buffer, int index, int count) :2437
void TextWriter__WriteLine4_fn(TextWriter* __this, uArray* buffer, int* index, int* count)
{
    __this->WriteLine4(buffer, *index, *count);
}

// public void WriteLine(double value) :2479
void TextWriter__WriteLine5_fn(TextWriter* __this, double* value)
{
    __this->WriteLine5(*value);
}

// public void WriteLine(float value) :2473
void TextWriter__WriteLine6_fn(TextWriter* __this, float* value)
{
    __this->WriteLine6(*value);
}

// public void WriteLine(int value) :2449
void TextWriter__WriteLine7_fn(TextWriter* __this, int* value)
{
    __this->WriteLine7(*value);
}

// public void WriteLine(long value) :2461
void TextWriter__WriteLine8_fn(TextWriter* __this, int64_t* value)
{
    __this->WriteLine8(*value);
}

// public void WriteLine(object value) :2491
void TextWriter__WriteLine9_fn(TextWriter* __this, uObject* value)
{
    __this->WriteLine9(value);
}

// public void WriteLine(string value) :2485
void TextWriter__WriteLine10_fn(TextWriter* __this, uString* value)
{
    __this->WriteLine10(value);
}

// public void WriteLine(string format, object[] args) :2501
void TextWriter__WriteLine11_fn(TextWriter* __this, uString* format, uArray* args)
{
    __this->WriteLine11(format, args);
}

// public void WriteLine(uint value) :2455
void TextWriter__WriteLine12_fn(TextWriter* __this, uint32_t* value)
{
    __this->WriteLine12(*value);
}

// public void WriteLine(ulong value) :2467
void TextWriter__WriteLine13_fn(TextWriter* __this, uint64_t* value)
{
    __this->WriteLine13(*value);
}

// protected generated TextWriter() [instance] :2324
void TextWriter::ctor_()
{
}

// public void Dispose() [instance] :2328
void TextWriter::Dispose()
{
    Dispose1(true);
    ::g::Uno::GC::SuppressFinalize(this);
}

// public void Write(bool value) [instance] :2364
void TextWriter::Write(bool value)
{
    bool value_ = value;
    Write9(::g::Uno::Bool::ToString(value_, ::TYPES[13/*bool*/]));
}

// public void Write(char[] buffer) [instance] :2356
void TextWriter::Write2(uArray* buffer)
{
    if (buffer != NULL)
        Write3(buffer, 0, uPtr(buffer)->Length());
}

// public void Write(double value) [instance] :2394
void TextWriter::Write4(double value)
{
    double value_ = value;
    Write9(::g::Uno::Double::ToString(value_, ::TYPES[16/*double*/]));
}

// public void Write(float value) [instance] :2389
void TextWriter::Write5(float value)
{
    float value_ = value;
    Write9(::g::Uno::Float::ToString(value_, ::TYPES[17/*float*/]));
}

// public void Write(int value) [instance] :2369
void TextWriter::Write6(int value)
{
    int value_ = value;
    Write9(::g::Uno::Int::ToString(value_, ::TYPES[1/*int*/]));
}

// public void Write(long value) [instance] :2379
void TextWriter::Write7(int64_t value)
{
    int64_t value_ = value;
    Write9(::g::Uno::Long::ToString(value_, ::TYPES[8/*long*/]));
}

// public void Write(object value) [instance] :2407
void TextWriter::Write8(uObject* value)
{
    if (value != NULL)
        Write9(::g::Uno::Object::ToString(uPtr(value)));
}

// public void Write(string format, object[] args) [instance] :2415
void TextWriter::Write10(uString* format, uArray* args)
{
    Write9(::g::Uno::String::Format(format, args));
}

// public void Write(uint value) [instance] :2374
void TextWriter::Write11(uint32_t value)
{
    uint32_t value_ = value;
    Write9(::g::Uno::UInt::ToString(value_, ::TYPES[6/*uint*/]));
}

// public void Write(ulong value) [instance] :2384
void TextWriter::Write12(uint64_t value)
{
    uint64_t value_ = value;
    Write9(::g::Uno::ULong::ToString(value_, ::TYPES[18/*ulong*/]));
}

// public void WriteLine() [instance] :2420
void TextWriter::WriteLine()
{
    Write9(::STRINGS[9/*"\r\n"*/]);
}

// public void WriteLine(bool value) [instance] :2443
void TextWriter::WriteLine1(bool value)
{
    bool value_ = value;
    Write(value_);
    WriteLine();
}

// public void WriteLine(char value) [instance] :2425
void TextWriter::WriteLine2(uChar value)
{
    uChar value_ = value;
    Write1(value_);
    WriteLine();
}

// public void WriteLine(char[] buffer) [instance] :2431
void TextWriter::WriteLine3(uArray* buffer)
{
    Write2(buffer);
    WriteLine();
}

// public void WriteLine(char[] buffer, int index, int count) [instance] :2437
void TextWriter::WriteLine4(uArray* buffer, int index, int count)
{
    int index_ = index;
    int count_ = count;
    Write3(buffer, index_, count_);
    WriteLine();
}

// public void WriteLine(double value) [instance] :2479
void TextWriter::WriteLine5(double value)
{
    double value_ = value;
    Write4(value_);
    WriteLine();
}

// public void WriteLine(float value) [instance] :2473
void TextWriter::WriteLine6(float value)
{
    float value_ = value;
    Write5(value_);
    WriteLine();
}

// public void WriteLine(int value) [instance] :2449
void TextWriter::WriteLine7(int value)
{
    int value_ = value;
    Write6(value_);
    WriteLine();
}

// public void WriteLine(long value) [instance] :2461
void TextWriter::WriteLine8(int64_t value)
{
    int64_t value_ = value;
    Write7(value_);
    WriteLine();
}

// public void WriteLine(object value) [instance] :2491
void TextWriter::WriteLine9(uObject* value)
{
    if (value == NULL)
    {
        WriteLine();
        return;
    }

    WriteLine10(::g::Uno::Object::ToString(uPtr(value)));
}

// public void WriteLine(string value) [instance] :2485
void TextWriter::WriteLine10(uString* value)
{
    Write9(value);
    WriteLine();
}

// public void WriteLine(string format, object[] args) [instance] :2501
void TextWriter::WriteLine11(uString* format, uArray* args)
{
    Write9(::g::Uno::String::Format(format, args));
    WriteLine();
}

// public void WriteLine(uint value) [instance] :2455
void TextWriter::WriteLine12(uint32_t value)
{
    uint32_t value_ = value;
    Write11(value_);
    WriteLine();
}

// public void WriteLine(ulong value) [instance] :2467
void TextWriter::WriteLine13(uint64_t value)
{
    uint64_t value_ = value;
    Write12(value_);
    WriteLine();
}
// }

// C:\ProgramData\Uno\Packages\UnoCore\0.19.6\Source\Uno\IO\$.uno(791)
// -------------------------------------------------------------------

// public enum UserDirectory :791
uEnumType* UserDirectory_typeof()
{
    static uSStrong<uEnumType*> type;
    if (type != NULL) return type;

    type = uEnumType::New("Uno.IO.UserDirectory", ::g::Uno::Int_typeof(), 10);
    type->SetLiterals(
        "Config", 0LL,
        "Data", 1LL,
        "Desktop", 2LL,
        "Downloads", 3LL,
        "Templates", 4LL,
        "Public", 5LL,
        "Documents", 6LL,
        "Music", 7LL,
        "Pictures", 8LL,
        "Videos", 9LL);
    return type;
}

}}} // ::g::Uno::IO
