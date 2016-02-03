#include <app/Uno.ArgumentException.h>
#include <app/Uno.ArgumentNullException.h>
#include <app/Uno.ArgumentOutOfRangeException.h>
#include <app/Uno.Array.h>
#include <app/Uno.Bool.h>
#include <app/Uno.Byte.h>
#include <app/Uno.Char.h>
#include <app/Uno.Collections.IEnumerable__string.h>
#include <app/Uno.Collections.IEnumerator__string.h>
#include <app/Uno.Collections.List__byte.h>
#include <app/Uno.Collections.List__char.h>
#include <app/Uno.Double.h>
#include <app/Uno.Float.h>
#include <app/Uno.FormatException.h>
#include <app/Uno.GC.h>
#include <app/Uno.Int.h>
#include <app/Uno.IO.BinaryReader.h>
#include <app/Uno.IO.BinaryWriter.h>
#include <app/Uno.IO.CppXliStream.h>
#include <app/Uno.IO.CppXliStreamHandle.h>
#include <app/Uno.IO.Directory.h>
#include <app/Uno.IO.EndOfStreamException.h>
#include <app/Uno.IO.File.h>
#include <app/Uno.IO.FileMode.h>
#include <app/Uno.IO.FileSystemEnumerable.h>
#include <app/Uno.IO.FileSystemEnumerator.h>
#include <app/Uno.IO.FileSystemEnumeratorHandle.h>
#include <app/Uno.IO.FileSystemEnumeratorImpl.h>
#include <app/Uno.IO.FileSystemEnumeratorMode.h>
#include <app/Uno.IO.FileSystemImpl.h>
#include <app/Uno.IO.IOException.h>
#include <app/Uno.IO.MemoryStream.h>
#include <app/Uno.IO.Path.h>
#include <app/Uno.IO.SeekOrigin.h>
#include <app/Uno.IO.Stream.h>
#include <app/Uno.IO.StreamReader.h>
#include <app/Uno.IO.StreamWriter.h>
#include <app/Uno.IO.StringReader.h>
#include <app/Uno.IO.StringWriter.h>
#include <app/Uno.IO.TextReader.h>
#include <app/Uno.IO.TextWriter.h>
#include <app/Uno.IO.UserDirectory.h>
#include <app/Uno.Long.h>
#include <app/Uno.Math.h>
#include <app/Uno.NotImplementedException.h>
#include <app/Uno.NotSupportedException.h>
#include <app/Uno.Object.h>
#include <app/Uno.ObjectDisposedException.h>
#include <app/Uno.Runtime.Implementation.BufferImpl.h>
#include <app/Uno.Runtime.Implementation.TextEncodingImpl.h>
#include <app/Uno.SByte.h>
#include <app/Uno.Short.h>
#include <app/Uno.String.h>
#include <app/Uno.Text.StringBuilder.h>
#include <app/Uno.UInt.h>
#include <app/Uno.ULong.h>
#include <app/Uno.UShort.h>
#include <Uno/XliInterop.h>
#include <Xli/Array.h>
#include <Xli/Text.h>
#include <XliPlatform/Disk.h>

namespace app {
namespace Uno {
namespace IO {

// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\IO\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

BinaryReader__uType* BinaryReader__typeof()
{
    static ::uStaticStrong<BinaryReader__uType*> type;
    if (type != NULL) return type;

    type = (BinaryReader__uType*)::uAllocClassType(sizeof(BinaryReader__uType), "Uno.IO.BinaryReader", false, 1, 2, 0);

    type->__interface_0.__fp_Dispose = (void(*)(void*))BinaryReader__Dispose;

    type->SetInterfaces(
        ::app::Uno::IDisposable__typeof(), offsetof(BinaryReader__uType, __interface_0));

    type->SetStrongRefs(
        "_buffer", offsetof(BinaryReader, _buffer),
        "_stream", offsetof(BinaryReader, _stream));

    type->SetFields(2,
        ::uNewField("_buffer", NULL, offsetof(BinaryReader, _buffer), ::uGetArrayType(::app::Uno::Byte__typeof())),
        ::uNewField("_stream", NULL, offsetof(BinaryReader, _stream), ::app::Uno::IO::Stream__typeof()));

    type->SetFunctions(37,
        ::uNewFunctionVoid("Dispose", BinaryReader__Dispose, 0, false),
        ::uNewFunctionVoid("FillBuffer", BinaryReader__FillBuffer, 0, false, ::app::Uno::Int__typeof()),
        ::uNewFunction("get_BaseStream", BinaryReader__get_BaseStream, 0, false, ::app::Uno::IO::Stream__typeof()),
        ::uNewFunction("get_LittleEndian", BinaryReader__get_LittleEndian, 0, false, ::app::Uno::Bool__typeof()),
        ::uNewFunction(".ctor", BinaryReader__New_1, 0, true, BinaryReader__typeof(), ::app::Uno::IO::Stream__typeof()),
        ::uNewFunction("Read7BitEncodedInt", BinaryReader__Read7BitEncodedInt, 0, false, ::app::Uno::Int__typeof()),
        ::uNewFunction("ReadBoolean", BinaryReader__ReadBoolean, 0, false, ::app::Uno::Bool__typeof()),
        ::uNewFunction("ReadByte", BinaryReader__ReadByte, 0, false, ::app::Uno::Byte__typeof()),
        ::uNewFunction("ReadByte2", BinaryReader__ReadByte2, 0, false, ::app::Uno::Byte2__typeof()),
        ::uNewFunction("ReadByte4", BinaryReader__ReadByte4, 0, false, ::app::Uno::Byte4__typeof()),
        ::uNewFunction("ReadBytes", BinaryReader__ReadBytes, 0, false, ::uGetArrayType(::app::Uno::Byte__typeof()), ::app::Uno::Int__typeof()),
        ::uNewFunction("ReadChar", BinaryReader__ReadChar, 0, false, ::app::Uno::Char__typeof()),
        ::uNewFunction("ReadDouble", BinaryReader__ReadDouble, 0, false, ::app::Uno::Double__typeof()),
        ::uNewFunction("ReadFloat", BinaryReader__ReadFloat, 0, false, ::app::Uno::Float__typeof()),
        ::uNewFunction("ReadFloat2", BinaryReader__ReadFloat2, 0, false, ::app::Uno::Float2__typeof()),
        ::uNewFunction("ReadFloat3", BinaryReader__ReadFloat3, 0, false, ::app::Uno::Float3__typeof()),
        ::uNewFunction("ReadFloat3x3", BinaryReader__ReadFloat3x3, 0, false, ::app::Uno::Float3x3__typeof()),
        ::uNewFunction("ReadFloat4", BinaryReader__ReadFloat4, 0, false, ::app::Uno::Float4__typeof()),
        ::uNewFunction("ReadFloat4x4", BinaryReader__ReadFloat4x4, 0, false, ::app::Uno::Float4x4__typeof()),
        ::uNewFunction("ReadInt", BinaryReader__ReadInt, 0, false, ::app::Uno::Int__typeof()),
        ::uNewFunction("ReadInt2", BinaryReader__ReadInt2, 0, false, ::app::Uno::Int2__typeof()),
        ::uNewFunction("ReadInt3", BinaryReader__ReadInt3, 0, false, ::app::Uno::Int3__typeof()),
        ::uNewFunction("ReadInt4", BinaryReader__ReadInt4, 0, false, ::app::Uno::Int4__typeof()),
        ::uNewFunction("ReadLong", BinaryReader__ReadLong, 0, false, ::app::Uno::Long__typeof()),
        ::uNewFunction("ReadSByte", BinaryReader__ReadSByte, 0, false, ::app::Uno::SByte__typeof()),
        ::uNewFunction("ReadSByte2", BinaryReader__ReadSByte2, 0, false, ::app::Uno::SByte2__typeof()),
        ::uNewFunction("ReadSByte4", BinaryReader__ReadSByte4, 0, false, ::app::Uno::SByte4__typeof()),
        ::uNewFunction("ReadShort", BinaryReader__ReadShort, 0, false, ::app::Uno::Short__typeof()),
        ::uNewFunction("ReadShort2", BinaryReader__ReadShort2, 0, false, ::app::Uno::Short2__typeof()),
        ::uNewFunction("ReadShort4", BinaryReader__ReadShort4, 0, false, ::app::Uno::Short4__typeof()),
        ::uNewFunction("ReadString", BinaryReader__ReadString, 0, false, ::app::Uno::String__typeof()),
        ::uNewFunction("ReadUInt", BinaryReader__ReadUInt, 0, false, ::app::Uno::UInt__typeof()),
        ::uNewFunction("ReadULong", BinaryReader__ReadULong, 0, false, ::app::Uno::ULong__typeof()),
        ::uNewFunction("ReadUShort", BinaryReader__ReadUShort, 0, false, ::app::Uno::UShort__typeof()),
        ::uNewFunction("ReadUShort2", BinaryReader__ReadUShort2, 0, false, ::app::Uno::UShort2__typeof()),
        ::uNewFunction("ReadUShort4", BinaryReader__ReadUShort4, 0, false, ::app::Uno::UShort4__typeof()),
        ::uNewFunctionVoid("set_LittleEndian", BinaryReader__set_LittleEndian, 0, false, ::app::Uno::Bool__typeof()));

    ::uRegisterType(type);
    return type;
}

void BinaryReader___ObjInit(BinaryReader* __this, ::app::Uno::IO::Stream* stream)
{
    __this->_stream = stream;
    __this->_buffer = ::uNewArray(::app::Uno::Byte__typeof(), 64);
    __this->LittleEndian(true);
}

void BinaryReader__Dispose(BinaryReader* __this)
{
    ::uPtr< ::app::Uno::IO::Stream*>(__this->_stream)->Dispose();
}

void BinaryReader__FillBuffer(BinaryReader* __this, int byteCount)
{
    if ((byteCount < 0) || (byteCount > 64))
    {
        U_THROW(::app::Uno::ArgumentOutOfRangeException__New_5(NULL, ::uGetConstString("byteCount")));
    }

    int offset = 0;

    do
    {
        int read = ::uPtr< ::app::Uno::IO::Stream*>(__this->_stream)->Read(__this->_buffer, offset, byteCount - offset);

        if (read == 0)
        {
            U_THROW(::app::Uno::IO::EndOfStreamException__New_4(NULL));
        }

        offset = offset + read;
    }
    while (offset < byteCount);
}

::app::Uno::IO::Stream* BinaryReader__get_BaseStream(BinaryReader* __this)
{
    return __this->_stream;
}

bool BinaryReader__get_LittleEndian(BinaryReader* __this)
{
    return __this->_LittleEndian;
}

BinaryReader* BinaryReader__New_1(::uStatic* __this, ::app::Uno::IO::Stream* stream)
{
    BinaryReader* inst = (BinaryReader*)::uAllocObject(sizeof(BinaryReader), BinaryReader__typeof());
    inst->_ObjInit(stream);
    return inst;
}

int BinaryReader__Read7BitEncodedInt(BinaryReader* __this)
{
    int count = 0;
    int shift = 0;

    while (shift != 35)
    {
        ::uByte b = __this->ReadByte();
        count = count | ((b & 127) << shift);
        shift = shift + 7;

        if ((b & 128) == 0)
        {
            return count;
        }
    }

    U_THROW(::app::Uno::FormatException__New_3(NULL, ::uGetConstString("Invalid 7 bit encoded int")));
}

bool BinaryReader__ReadBoolean(BinaryReader* __this)
{
    __this->FillBuffer(1);
    return ::uPtr< ::uArray*>(__this->_buffer)->Item< ::uByte>(0) != 0;
}

::uByte BinaryReader__ReadByte(BinaryReader* __this)
{
    __this->FillBuffer(1);
    return ::uPtr< ::uArray*>(__this->_buffer)->Item< ::uByte>(0);
}

::app::Uno::Byte2 BinaryReader__ReadByte2(BinaryReader* __this)
{
    __this->FillBuffer(2);
    return ::app::Uno::Byte2__New_2(NULL, ::uPtr< ::uArray*>(__this->_buffer)->Item< ::uByte>(0), ::uPtr< ::uArray*>(__this->_buffer)->Item< ::uByte>(1));
}

::app::Uno::Byte4 BinaryReader__ReadByte4(BinaryReader* __this)
{
    __this->FillBuffer(4);
    return ::app::Uno::Byte4__New_2(NULL, ::uPtr< ::uArray*>(__this->_buffer)->Item< ::uByte>(0), ::uPtr< ::uArray*>(__this->_buffer)->Item< ::uByte>(1), ::uPtr< ::uArray*>(__this->_buffer)->Item< ::uByte>(2), ::uPtr< ::uArray*>(__this->_buffer)->Item< ::uByte>(3));
}

::uArray* BinaryReader__ReadBytes(BinaryReader* __this, int byteCount)
{
    if (byteCount < 0)
    {
        U_THROW(::app::Uno::ArgumentOutOfRangeException__New_5(NULL, ::uGetConstString("byteCount")));
    }

    ::uArray* buffer = ::uNewArray(::app::Uno::Byte__typeof(), byteCount);
    int offset = 0;

    do
    {
        int read = ::uPtr< ::app::Uno::IO::Stream*>(__this->_stream)->Read(buffer, offset, byteCount - offset);
        offset = offset + read;

        if (read == 0)
        {
            break;
        }
    }
    while (offset < byteCount);

    if (offset == byteCount)
    {
        return buffer;
    }

    ::uArray* result = ::uNewArray(::app::Uno::Byte__typeof(), offset);

    for (int i = 0; i < offset; i++)
    {
        ::uPtr< ::uArray*>(result)->Item< ::uByte>(i) = ::uPtr< ::uArray*>(buffer)->Item< ::uByte>(i);
    }

    return result;
}

::uChar BinaryReader__ReadChar(BinaryReader* __this)
{
    __this->FillBuffer(1);
    ::app::Uno::Collections::List__byte* buffer = ::app::Uno::Collections::List__byte__New_1(NULL);
    ::uPtr< ::app::Uno::Collections::List__byte*>(buffer)->Add(::uPtr< ::uArray*>(__this->_buffer)->Item< ::uByte>(0));

    if ((buffer->Item(0) & 128) != 0)
    {
        __this->FillBuffer(1);
        ::uPtr< ::app::Uno::Collections::List__byte*>(buffer)->Add(::uPtr< ::uArray*>(__this->_buffer)->Item< ::uByte>(0));
    }

    return ::uPtr< ::uString*>(::app::Uno::Runtime::Implementation::TextEncodingImpl__DecodeUtf8(NULL, buffer->ToArray()))->Item(0);
}

double BinaryReader__ReadDouble(BinaryReader* __this)
{
    __this->FillBuffer(8);
    return ::app::Uno::Runtime::Implementation::BufferImpl__GetDouble(NULL, __this->_buffer, 0, __this->LittleEndian());
}

float BinaryReader__ReadFloat(BinaryReader* __this)
{
    __this->FillBuffer(4);
    return ::app::Uno::Runtime::Implementation::BufferImpl__GetFloat(NULL, __this->_buffer, 0, __this->LittleEndian());
}

::app::Uno::Float2 BinaryReader__ReadFloat2(BinaryReader* __this)
{
    __this->FillBuffer(8);
    return ::app::Uno::Float2__New_2(NULL, ::app::Uno::Runtime::Implementation::BufferImpl__GetFloat(NULL, __this->_buffer, 0, __this->LittleEndian()), ::app::Uno::Runtime::Implementation::BufferImpl__GetFloat(NULL, __this->_buffer, 4, __this->LittleEndian()));
}

::app::Uno::Float3 BinaryReader__ReadFloat3(BinaryReader* __this)
{
    __this->FillBuffer(12);
    return ::app::Uno::Float3__New_2(NULL, ::app::Uno::Runtime::Implementation::BufferImpl__GetFloat(NULL, __this->_buffer, 0, __this->LittleEndian()), ::app::Uno::Runtime::Implementation::BufferImpl__GetFloat(NULL, __this->_buffer, 4, __this->LittleEndian()), ::app::Uno::Runtime::Implementation::BufferImpl__GetFloat(NULL, __this->_buffer, 8, __this->LittleEndian()));
}

::app::Uno::Float3x3 BinaryReader__ReadFloat3x3(BinaryReader* __this)
{
    __this->FillBuffer(36);
    return ::app::Uno::Float3x3__New_1(NULL, ::app::Uno::Runtime::Implementation::BufferImpl__GetFloat(NULL, __this->_buffer, 0, __this->LittleEndian()), ::app::Uno::Runtime::Implementation::BufferImpl__GetFloat(NULL, __this->_buffer, 4, __this->LittleEndian()), ::app::Uno::Runtime::Implementation::BufferImpl__GetFloat(NULL, __this->_buffer, 8, __this->LittleEndian()), ::app::Uno::Runtime::Implementation::BufferImpl__GetFloat(NULL, __this->_buffer, 12, __this->LittleEndian()), ::app::Uno::Runtime::Implementation::BufferImpl__GetFloat(NULL, __this->_buffer, 16, __this->LittleEndian()), ::app::Uno::Runtime::Implementation::BufferImpl__GetFloat(NULL, __this->_buffer, 20, __this->LittleEndian()), ::app::Uno::Runtime::Implementation::BufferImpl__GetFloat(NULL, __this->_buffer, 24, __this->LittleEndian()), ::app::Uno::Runtime::Implementation::BufferImpl__GetFloat(NULL, __this->_buffer, 28, __this->LittleEndian()), ::app::Uno::Runtime::Implementation::BufferImpl__GetFloat(NULL, __this->_buffer, 32, __this->LittleEndian()));
}

::app::Uno::Float4 BinaryReader__ReadFloat4(BinaryReader* __this)
{
    __this->FillBuffer(16);
    return ::app::Uno::Float4__New_2(NULL, ::app::Uno::Runtime::Implementation::BufferImpl__GetFloat(NULL, __this->_buffer, 0, __this->LittleEndian()), ::app::Uno::Runtime::Implementation::BufferImpl__GetFloat(NULL, __this->_buffer, 4, __this->LittleEndian()), ::app::Uno::Runtime::Implementation::BufferImpl__GetFloat(NULL, __this->_buffer, 8, __this->LittleEndian()), ::app::Uno::Runtime::Implementation::BufferImpl__GetFloat(NULL, __this->_buffer, 12, __this->LittleEndian()));
}

::app::Uno::Float4x4 BinaryReader__ReadFloat4x4(BinaryReader* __this)
{
    __this->FillBuffer(64);
    return ::app::Uno::Float4x4__New_1(NULL, ::app::Uno::Runtime::Implementation::BufferImpl__GetFloat(NULL, __this->_buffer, 0, __this->LittleEndian()), ::app::Uno::Runtime::Implementation::BufferImpl__GetFloat(NULL, __this->_buffer, 4, __this->LittleEndian()), ::app::Uno::Runtime::Implementation::BufferImpl__GetFloat(NULL, __this->_buffer, 8, __this->LittleEndian()), ::app::Uno::Runtime::Implementation::BufferImpl__GetFloat(NULL, __this->_buffer, 12, __this->LittleEndian()), ::app::Uno::Runtime::Implementation::BufferImpl__GetFloat(NULL, __this->_buffer, 16, __this->LittleEndian()), ::app::Uno::Runtime::Implementation::BufferImpl__GetFloat(NULL, __this->_buffer, 20, __this->LittleEndian()), ::app::Uno::Runtime::Implementation::BufferImpl__GetFloat(NULL, __this->_buffer, 24, __this->LittleEndian()), ::app::Uno::Runtime::Implementation::BufferImpl__GetFloat(NULL, __this->_buffer, 28, __this->LittleEndian()), ::app::Uno::Runtime::Implementation::BufferImpl__GetFloat(NULL, __this->_buffer, 32, __this->LittleEndian()), ::app::Uno::Runtime::Implementation::BufferImpl__GetFloat(NULL, __this->_buffer, 36, __this->LittleEndian()), ::app::Uno::Runtime::Implementation::BufferImpl__GetFloat(NULL, __this->_buffer, 40, __this->LittleEndian()), ::app::Uno::Runtime::Implementation::BufferImpl__GetFloat(NULL, __this->_buffer, 44, __this->LittleEndian()), ::app::Uno::Runtime::Implementation::BufferImpl__GetFloat(NULL, __this->_buffer, 48, __this->LittleEndian()), ::app::Uno::Runtime::Implementation::BufferImpl__GetFloat(NULL, __this->_buffer, 52, __this->LittleEndian()), ::app::Uno::Runtime::Implementation::BufferImpl__GetFloat(NULL, __this->_buffer, 56, __this->LittleEndian()), ::app::Uno::Runtime::Implementation::BufferImpl__GetFloat(NULL, __this->_buffer, 60, __this->LittleEndian()));
}

int BinaryReader__ReadInt(BinaryReader* __this)
{
    __this->FillBuffer(4);
    return ::app::Uno::Runtime::Implementation::BufferImpl__GetInt(NULL, __this->_buffer, 0, __this->LittleEndian());
}

::app::Uno::Int2 BinaryReader__ReadInt2(BinaryReader* __this)
{
    __this->FillBuffer(8);
    return ::app::Uno::Int2__New_2(NULL, ::app::Uno::Runtime::Implementation::BufferImpl__GetInt(NULL, __this->_buffer, 0, __this->LittleEndian()), ::app::Uno::Runtime::Implementation::BufferImpl__GetInt(NULL, __this->_buffer, 4, __this->LittleEndian()));
}

::app::Uno::Int3 BinaryReader__ReadInt3(BinaryReader* __this)
{
    __this->FillBuffer(12);
    return ::app::Uno::Int3__New_2(NULL, ::app::Uno::Runtime::Implementation::BufferImpl__GetInt(NULL, __this->_buffer, 0, __this->LittleEndian()), ::app::Uno::Runtime::Implementation::BufferImpl__GetInt(NULL, __this->_buffer, 4, __this->LittleEndian()), ::app::Uno::Runtime::Implementation::BufferImpl__GetInt(NULL, __this->_buffer, 8, __this->LittleEndian()));
}

::app::Uno::Int4 BinaryReader__ReadInt4(BinaryReader* __this)
{
    __this->FillBuffer(16);
    return ::app::Uno::Int4__New_2(NULL, ::app::Uno::Runtime::Implementation::BufferImpl__GetInt(NULL, __this->_buffer, 0, __this->LittleEndian()), ::app::Uno::Runtime::Implementation::BufferImpl__GetInt(NULL, __this->_buffer, 4, __this->LittleEndian()), ::app::Uno::Runtime::Implementation::BufferImpl__GetInt(NULL, __this->_buffer, 8, __this->LittleEndian()), ::app::Uno::Runtime::Implementation::BufferImpl__GetInt(NULL, __this->_buffer, 12, __this->LittleEndian()));
}

::uLong BinaryReader__ReadLong(BinaryReader* __this)
{
    __this->FillBuffer(8);
    return ::app::Uno::Runtime::Implementation::BufferImpl__GetLong(NULL, __this->_buffer, 0, __this->LittleEndian());
}

::uSByte BinaryReader__ReadSByte(BinaryReader* __this)
{
    __this->FillBuffer(1);
    return (::uSByte)::uPtr< ::uArray*>(__this->_buffer)->Item< ::uByte>(0);
}

::app::Uno::SByte2 BinaryReader__ReadSByte2(BinaryReader* __this)
{
    __this->FillBuffer(2);
    return ::app::Uno::SByte2__New_2(NULL, (::uSByte)::uPtr< ::uArray*>(__this->_buffer)->Item< ::uByte>(0), (::uSByte)::uPtr< ::uArray*>(__this->_buffer)->Item< ::uByte>(1));
}

::app::Uno::SByte4 BinaryReader__ReadSByte4(BinaryReader* __this)
{
    __this->FillBuffer(4);
    return ::app::Uno::SByte4__New_2(NULL, (::uSByte)::uPtr< ::uArray*>(__this->_buffer)->Item< ::uByte>(0), (::uSByte)::uPtr< ::uArray*>(__this->_buffer)->Item< ::uByte>(1), (::uSByte)::uPtr< ::uArray*>(__this->_buffer)->Item< ::uByte>(2), (::uSByte)::uPtr< ::uArray*>(__this->_buffer)->Item< ::uByte>(3));
}

::uShort BinaryReader__ReadShort(BinaryReader* __this)
{
    __this->FillBuffer(2);
    return ::app::Uno::Runtime::Implementation::BufferImpl__GetShort(NULL, __this->_buffer, 0, __this->LittleEndian());
}

::app::Uno::Short2 BinaryReader__ReadShort2(BinaryReader* __this)
{
    __this->FillBuffer(4);
    return ::app::Uno::Short2__New_2(NULL, ::app::Uno::Runtime::Implementation::BufferImpl__GetShort(NULL, __this->_buffer, 0, __this->LittleEndian()), ::app::Uno::Runtime::Implementation::BufferImpl__GetShort(NULL, __this->_buffer, 2, __this->LittleEndian()));
}

::app::Uno::Short4 BinaryReader__ReadShort4(BinaryReader* __this)
{
    __this->FillBuffer(8);
    return ::app::Uno::Short4__New_2(NULL, ::app::Uno::Runtime::Implementation::BufferImpl__GetShort(NULL, __this->_buffer, 0, __this->LittleEndian()), ::app::Uno::Runtime::Implementation::BufferImpl__GetShort(NULL, __this->_buffer, 2, __this->LittleEndian()), ::app::Uno::Runtime::Implementation::BufferImpl__GetShort(NULL, __this->_buffer, 4, __this->LittleEndian()), ::app::Uno::Runtime::Implementation::BufferImpl__GetShort(NULL, __this->_buffer, 6, __this->LittleEndian()));
}

::uString* BinaryReader__ReadString(BinaryReader* __this)
{
    return ::app::Uno::Runtime::Implementation::TextEncodingImpl__DecodeUtf8(NULL, __this->ReadBytes(__this->Read7BitEncodedInt()));
}

::uUInt BinaryReader__ReadUInt(BinaryReader* __this)
{
    __this->FillBuffer(4);
    return ::app::Uno::Runtime::Implementation::BufferImpl__GetUInt(NULL, __this->_buffer, 0, __this->LittleEndian());
}

::uULong BinaryReader__ReadULong(BinaryReader* __this)
{
    __this->FillBuffer(8);
    return ::app::Uno::Runtime::Implementation::BufferImpl__GetULong(NULL, __this->_buffer, 0, __this->LittleEndian());
}

::uUShort BinaryReader__ReadUShort(BinaryReader* __this)
{
    __this->FillBuffer(2);
    return ::app::Uno::Runtime::Implementation::BufferImpl__GetUShort(NULL, __this->_buffer, 0, __this->LittleEndian());
}

::app::Uno::UShort2 BinaryReader__ReadUShort2(BinaryReader* __this)
{
    __this->FillBuffer(4);
    return ::app::Uno::UShort2__New_2(NULL, ::app::Uno::Runtime::Implementation::BufferImpl__GetUShort(NULL, __this->_buffer, 0, __this->LittleEndian()), ::app::Uno::Runtime::Implementation::BufferImpl__GetUShort(NULL, __this->_buffer, 2, __this->LittleEndian()));
}

::app::Uno::UShort4 BinaryReader__ReadUShort4(BinaryReader* __this)
{
    __this->FillBuffer(8);
    return ::app::Uno::UShort4__New_2(NULL, ::app::Uno::Runtime::Implementation::BufferImpl__GetUShort(NULL, __this->_buffer, 0, __this->LittleEndian()), ::app::Uno::Runtime::Implementation::BufferImpl__GetUShort(NULL, __this->_buffer, 2, __this->LittleEndian()), ::app::Uno::Runtime::Implementation::BufferImpl__GetUShort(NULL, __this->_buffer, 4, __this->LittleEndian()), ::app::Uno::Runtime::Implementation::BufferImpl__GetUShort(NULL, __this->_buffer, 6, __this->LittleEndian()));
}

void BinaryReader__set_LittleEndian(BinaryReader* __this, bool value)
{
    __this->_LittleEndian = value;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\IO\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

BinaryWriter__uType* BinaryWriter__typeof()
{
    static ::uStaticStrong<BinaryWriter__uType*> type;
    if (type != NULL) return type;

    type = (BinaryWriter__uType*)::uAllocClassType(sizeof(BinaryWriter__uType), "Uno.IO.BinaryWriter", false, 1, 2, 0);

    type->__interface_0.__fp_Dispose = (void(*)(void*))BinaryWriter__Dispose;

    type->SetInterfaces(
        ::app::Uno::IDisposable__typeof(), offsetof(BinaryWriter__uType, __interface_0));

    type->SetStrongRefs(
        "_buffer", offsetof(BinaryWriter, _buffer),
        "_stream", offsetof(BinaryWriter, _stream));

    type->SetFields(2,
        ::uNewField("_buffer", NULL, offsetof(BinaryWriter, _buffer), ::uGetArrayType(::app::Uno::Byte__typeof())),
        ::uNewField("_stream", NULL, offsetof(BinaryWriter, _stream), ::app::Uno::IO::Stream__typeof()));

    type->SetFunctions(36,
        ::uNewFunctionVoid("Dispose", BinaryWriter__Dispose, 0, false),
        ::uNewFunction("get_BaseStream", BinaryWriter__get_BaseStream, 0, false, ::app::Uno::IO::Stream__typeof()),
        ::uNewFunction("get_LittleEndian", BinaryWriter__get_LittleEndian, 0, false, ::app::Uno::Bool__typeof()),
        ::uNewFunction(".ctor", BinaryWriter__New_1, 0, true, BinaryWriter__typeof(), ::app::Uno::IO::Stream__typeof()),
        ::uNewFunctionVoid("set_LittleEndian", BinaryWriter__set_LittleEndian, 0, false, ::app::Uno::Bool__typeof()),
        ::uNewFunctionVoid("Write", BinaryWriter__Write, 0, false, ::uGetArrayType(::app::Uno::Byte__typeof())),
        ::uNewFunctionVoid("Write", BinaryWriter__Write_1, 0, false, ::app::Uno::Bool__typeof()),
        ::uNewFunctionVoid("Write", BinaryWriter__Write_10, 0, false, ::app::Uno::Float3x3__typeof()),
        ::uNewFunctionVoid("Write", BinaryWriter__Write_11, 0, false, ::app::Uno::Float4__typeof()),
        ::uNewFunctionVoid("Write", BinaryWriter__Write_12, 0, false, ::app::Uno::Float4x4__typeof()),
        ::uNewFunctionVoid("Write", BinaryWriter__Write_13, 0, false, ::app::Uno::Int__typeof()),
        ::uNewFunctionVoid("Write", BinaryWriter__Write_14, 0, false, ::app::Uno::Int2__typeof()),
        ::uNewFunctionVoid("Write", BinaryWriter__Write_15, 0, false, ::app::Uno::Int3__typeof()),
        ::uNewFunctionVoid("Write", BinaryWriter__Write_16, 0, false, ::app::Uno::Int4__typeof()),
        ::uNewFunctionVoid("Write", BinaryWriter__Write_17, 0, false, ::app::Uno::Long__typeof()),
        ::uNewFunctionVoid("Write", BinaryWriter__Write_18, 0, false, ::app::Uno::SByte__typeof()),
        ::uNewFunctionVoid("Write", BinaryWriter__Write_19, 0, false, ::app::Uno::SByte2__typeof()),
        ::uNewFunctionVoid("Write", BinaryWriter__Write_2, 0, false, ::app::Uno::Byte__typeof()),
        ::uNewFunctionVoid("Write", BinaryWriter__Write_20, 0, false, ::app::Uno::SByte4__typeof()),
        ::uNewFunctionVoid("Write", BinaryWriter__Write_21, 0, false, ::app::Uno::Short__typeof()),
        ::uNewFunctionVoid("Write", BinaryWriter__Write_22, 0, false, ::app::Uno::Short2__typeof()),
        ::uNewFunctionVoid("Write", BinaryWriter__Write_23, 0, false, ::app::Uno::Short4__typeof()),
        ::uNewFunctionVoid("Write", BinaryWriter__Write_24, 0, false, ::app::Uno::String__typeof()),
        ::uNewFunctionVoid("Write", BinaryWriter__Write_25, 0, false, ::app::Uno::UInt__typeof()),
        ::uNewFunctionVoid("Write", BinaryWriter__Write_26, 0, false, ::app::Uno::ULong__typeof()),
        ::uNewFunctionVoid("Write", BinaryWriter__Write_27, 0, false, ::app::Uno::UShort__typeof()),
        ::uNewFunctionVoid("Write", BinaryWriter__Write_28, 0, false, ::app::Uno::UShort2__typeof()),
        ::uNewFunctionVoid("Write", BinaryWriter__Write_29, 0, false, ::app::Uno::UShort4__typeof()),
        ::uNewFunctionVoid("Write", BinaryWriter__Write_3, 0, false, ::app::Uno::Byte2__typeof()),
        ::uNewFunctionVoid("Write", BinaryWriter__Write_4, 0, false, ::app::Uno::Byte4__typeof()),
        ::uNewFunctionVoid("Write", BinaryWriter__Write_5, 0, false, ::app::Uno::Char__typeof()),
        ::uNewFunctionVoid("Write", BinaryWriter__Write_6, 0, false, ::app::Uno::Double__typeof()),
        ::uNewFunctionVoid("Write", BinaryWriter__Write_7, 0, false, ::app::Uno::Float__typeof()),
        ::uNewFunctionVoid("Write", BinaryWriter__Write_8, 0, false, ::app::Uno::Float2__typeof()),
        ::uNewFunctionVoid("Write", BinaryWriter__Write_9, 0, false, ::app::Uno::Float3__typeof()),
        ::uNewFunctionVoid("Write7BitEncodedInt", BinaryWriter__Write7BitEncodedInt, 0, false, ::app::Uno::Int__typeof()));

    ::uRegisterType(type);
    return type;
}

void BinaryWriter___ObjInit(BinaryWriter* __this, ::app::Uno::IO::Stream* stream)
{
    __this->_stream = stream;
    __this->_buffer = ::uNewArray(::app::Uno::Byte__typeof(), 64);
    __this->LittleEndian(true);
}

void BinaryWriter__Dispose(BinaryWriter* __this)
{
    ::uPtr< ::app::Uno::IO::Stream*>(__this->_stream)->Dispose();
}

::app::Uno::IO::Stream* BinaryWriter__get_BaseStream(BinaryWriter* __this)
{
    return __this->_stream;
}

bool BinaryWriter__get_LittleEndian(BinaryWriter* __this)
{
    return __this->_LittleEndian;
}

BinaryWriter* BinaryWriter__New_1(::uStatic* __this, ::app::Uno::IO::Stream* stream)
{
    BinaryWriter* inst = (BinaryWriter*)::uAllocObject(sizeof(BinaryWriter), BinaryWriter__typeof());
    inst->_ObjInit(stream);
    return inst;
}

void BinaryWriter__set_LittleEndian(BinaryWriter* __this, bool value)
{
    __this->_LittleEndian = value;
}

void BinaryWriter__Write(BinaryWriter* __this, ::uArray* value)
{
    ::uPtr< ::app::Uno::IO::Stream*>(__this->_stream)->Write(value, 0, ::uPtr< ::uArray*>(value)->Length());
}

void BinaryWriter__Write_1(BinaryWriter* __this, bool value)
{
    ::uPtr< ::uArray*>(__this->_buffer)->Item< ::uByte>(0) = (::uByte)(value ? 1 : 0);
    ::uPtr< ::app::Uno::IO::Stream*>(__this->_stream)->Write(__this->_buffer, 0, 1);
}

void BinaryWriter__Write_10(BinaryWriter* __this, ::app::Uno::Float3x3 value)
{
    for (int i = 0; i < 3; ++i)
    {
        __this->Write_9(value.Item(i));
    }
}

void BinaryWriter__Write_11(BinaryWriter* __this, ::app::Uno::Float4 value)
{
    for (int i = 0; i < 4; ++i)
    {
        ::app::Uno::Runtime::Implementation::BufferImpl__SetFloat(NULL, __this->_buffer, i * 4, value.Item(i), __this->LittleEndian());
    }

    ::uPtr< ::app::Uno::IO::Stream*>(__this->_stream)->Write(__this->_buffer, 0, 16);
}

void BinaryWriter__Write_12(BinaryWriter* __this, ::app::Uno::Float4x4 value)
{
    for (int i = 0; i < 4; ++i)
    {
        __this->Write_11(value.Item(i));
    }
}

void BinaryWriter__Write_13(BinaryWriter* __this, int value)
{
    ::app::Uno::Runtime::Implementation::BufferImpl__SetInt(NULL, __this->_buffer, 0, value, __this->LittleEndian());
    ::uPtr< ::app::Uno::IO::Stream*>(__this->_stream)->Write(__this->_buffer, 0, 4);
}

void BinaryWriter__Write_14(BinaryWriter* __this, ::app::Uno::Int2 value)
{
    for (int i = 0; i < 2; ++i)
    {
        ::app::Uno::Runtime::Implementation::BufferImpl__SetInt(NULL, __this->_buffer, i * 4, value.Item(i), __this->LittleEndian());
    }

    ::uPtr< ::app::Uno::IO::Stream*>(__this->_stream)->Write(__this->_buffer, 0, 8);
}

void BinaryWriter__Write_15(BinaryWriter* __this, ::app::Uno::Int3 value)
{
    for (int i = 0; i < 3; ++i)
    {
        ::app::Uno::Runtime::Implementation::BufferImpl__SetInt(NULL, __this->_buffer, i * 4, value.Item(i), __this->LittleEndian());
    }

    ::uPtr< ::app::Uno::IO::Stream*>(__this->_stream)->Write(__this->_buffer, 0, 12);
}

void BinaryWriter__Write_16(BinaryWriter* __this, ::app::Uno::Int4 value)
{
    for (int i = 0; i < 4; ++i)
    {
        ::app::Uno::Runtime::Implementation::BufferImpl__SetInt(NULL, __this->_buffer, i * 4, value.Item(i), __this->LittleEndian());
    }

    ::uPtr< ::app::Uno::IO::Stream*>(__this->_stream)->Write(__this->_buffer, 0, 16);
}

void BinaryWriter__Write_17(BinaryWriter* __this, ::uLong value)
{
    ::app::Uno::Runtime::Implementation::BufferImpl__SetLong(NULL, __this->_buffer, 0, value, __this->LittleEndian());
    ::uPtr< ::app::Uno::IO::Stream*>(__this->_stream)->Write(__this->_buffer, 0, 8);
}

void BinaryWriter__Write_18(BinaryWriter* __this, ::uSByte value)
{
    ::uPtr< ::uArray*>(__this->_buffer)->Item< ::uByte>(0) = (::uByte)value;
    ::uPtr< ::app::Uno::IO::Stream*>(__this->_stream)->Write(__this->_buffer, 0, 1);
}

void BinaryWriter__Write_19(BinaryWriter* __this, ::app::Uno::SByte2 value)
{
    for (int i = 0; i < 2; ++i)
    {
        ::uPtr< ::uArray*>(__this->_buffer)->Item< ::uByte>(i) = (::uByte)value.Item(i);
    }

    ::uPtr< ::app::Uno::IO::Stream*>(__this->_stream)->Write(__this->_buffer, 0, 2);
}

void BinaryWriter__Write_2(BinaryWriter* __this, ::uByte value)
{
    ::uPtr< ::uArray*>(__this->_buffer)->Item< ::uByte>(0) = value;
    ::uPtr< ::app::Uno::IO::Stream*>(__this->_stream)->Write(__this->_buffer, 0, 1);
}

void BinaryWriter__Write_20(BinaryWriter* __this, ::app::Uno::SByte4 value)
{
    for (int i = 0; i < 4; ++i)
    {
        ::uPtr< ::uArray*>(__this->_buffer)->Item< ::uByte>(i) = (::uByte)value.Item(i);
    }

    ::uPtr< ::app::Uno::IO::Stream*>(__this->_stream)->Write(__this->_buffer, 0, 4);
}

void BinaryWriter__Write_21(BinaryWriter* __this, ::uShort value)
{
    ::app::Uno::Runtime::Implementation::BufferImpl__SetShort(NULL, __this->_buffer, 0, value, __this->LittleEndian());
    ::uPtr< ::app::Uno::IO::Stream*>(__this->_stream)->Write(__this->_buffer, 0, 2);
}

void BinaryWriter__Write_22(BinaryWriter* __this, ::app::Uno::Short2 value)
{
    for (int i = 0; i < 2; ++i)
    {
        ::app::Uno::Runtime::Implementation::BufferImpl__SetShort(NULL, __this->_buffer, i * 2, value.Item(i), __this->LittleEndian());
    }

    ::uPtr< ::app::Uno::IO::Stream*>(__this->_stream)->Write(__this->_buffer, 0, 4);
}

void BinaryWriter__Write_23(BinaryWriter* __this, ::app::Uno::Short4 value)
{
    for (int i = 0; i < 4; ++i)
    {
        ::app::Uno::Runtime::Implementation::BufferImpl__SetShort(NULL, __this->_buffer, i * 2, value.Item(i), __this->LittleEndian());
    }

    ::uPtr< ::app::Uno::IO::Stream*>(__this->_stream)->Write(__this->_buffer, 0, 8);
}

void BinaryWriter__Write_24(BinaryWriter* __this, ::uString* value)
{
    ::uArray* bytes = ::app::Uno::Runtime::Implementation::TextEncodingImpl__EncodeUtf8(NULL, value);
    __this->Write7BitEncodedInt(::uPtr< ::uArray*>(bytes)->Length());
    __this->Write(bytes);
}

void BinaryWriter__Write_25(BinaryWriter* __this, ::uUInt value)
{
    ::app::Uno::Runtime::Implementation::BufferImpl__SetUInt(NULL, __this->_buffer, 0, value, __this->LittleEndian());
    ::uPtr< ::app::Uno::IO::Stream*>(__this->_stream)->Write(__this->_buffer, 0, 4);
}

void BinaryWriter__Write_26(BinaryWriter* __this, ::uULong value)
{
    ::app::Uno::Runtime::Implementation::BufferImpl__SetULong(NULL, __this->_buffer, 0, value, __this->LittleEndian());
    ::uPtr< ::app::Uno::IO::Stream*>(__this->_stream)->Write(__this->_buffer, 0, 8);
}

void BinaryWriter__Write_27(BinaryWriter* __this, ::uUShort value)
{
    ::app::Uno::Runtime::Implementation::BufferImpl__SetUShort(NULL, __this->_buffer, 0, value, __this->LittleEndian());
    ::uPtr< ::app::Uno::IO::Stream*>(__this->_stream)->Write(__this->_buffer, 0, 2);
}

void BinaryWriter__Write_28(BinaryWriter* __this, ::app::Uno::UShort2 value)
{
    for (int i = 0; i < 2; ++i)
    {
        ::app::Uno::Runtime::Implementation::BufferImpl__SetUShort(NULL, __this->_buffer, i * 2, value.Item(i), __this->LittleEndian());
    }

    ::uPtr< ::app::Uno::IO::Stream*>(__this->_stream)->Write(__this->_buffer, 0, 4);
}

void BinaryWriter__Write_29(BinaryWriter* __this, ::app::Uno::UShort4 value)
{
    for (int i = 0; i < 4; ++i)
    {
        ::app::Uno::Runtime::Implementation::BufferImpl__SetUShort(NULL, __this->_buffer, i * 2, value.Item(i), __this->LittleEndian());
    }

    ::uPtr< ::app::Uno::IO::Stream*>(__this->_stream)->Write(__this->_buffer, 0, 8);
}

void BinaryWriter__Write_3(BinaryWriter* __this, ::app::Uno::Byte2 value)
{
    for (int i = 0; i < 2; ++i)
    {
        ::uPtr< ::uArray*>(__this->_buffer)->Item< ::uByte>(i) = value.Item(i);
    }

    ::uPtr< ::app::Uno::IO::Stream*>(__this->_stream)->Write(__this->_buffer, 0, 2);
}

void BinaryWriter__Write_4(BinaryWriter* __this, ::app::Uno::Byte4 value)
{
    for (int i = 0; i < 4; ++i)
    {
        ::uPtr< ::uArray*>(__this->_buffer)->Item< ::uByte>(i) = value.Item(i);
    }

    ::uPtr< ::app::Uno::IO::Stream*>(__this->_stream)->Write(__this->_buffer, 0, 4);
}

void BinaryWriter__Write_5(BinaryWriter* __this, ::uChar value)
{
    __this->Write(::app::Uno::Runtime::Implementation::TextEncodingImpl__EncodeUtf8(NULL, ::app::Uno::Char::ToString(value)));
}

void BinaryWriter__Write_6(BinaryWriter* __this, double value)
{
    ::app::Uno::Runtime::Implementation::BufferImpl__SetDouble(NULL, __this->_buffer, 0, value, __this->LittleEndian());
    ::uPtr< ::app::Uno::IO::Stream*>(__this->_stream)->Write(__this->_buffer, 0, 8);
}

void BinaryWriter__Write_7(BinaryWriter* __this, float value)
{
    ::app::Uno::Runtime::Implementation::BufferImpl__SetFloat(NULL, __this->_buffer, 0, value, __this->LittleEndian());
    ::uPtr< ::app::Uno::IO::Stream*>(__this->_stream)->Write(__this->_buffer, 0, 4);
}

void BinaryWriter__Write_8(BinaryWriter* __this, ::app::Uno::Float2 value)
{
    for (int i = 0; i < 2; ++i)
    {
        ::app::Uno::Runtime::Implementation::BufferImpl__SetFloat(NULL, __this->_buffer, i * 4, value.Item(i), __this->LittleEndian());
    }

    ::uPtr< ::app::Uno::IO::Stream*>(__this->_stream)->Write(__this->_buffer, 0, 8);
}

void BinaryWriter__Write_9(BinaryWriter* __this, ::app::Uno::Float3 value)
{
    for (int i = 0; i < 3; ++i)
    {
        ::app::Uno::Runtime::Implementation::BufferImpl__SetFloat(NULL, __this->_buffer, i * 4, value.Item(i), __this->LittleEndian());
    }

    ::uPtr< ::app::Uno::IO::Stream*>(__this->_stream)->Write(__this->_buffer, 0, 12);
}

void BinaryWriter__Write7BitEncodedInt(BinaryWriter* __this, int value)
{
    ::uUInt v = (::uUInt)value;

    while (v >= 128u)
    {
        __this->Write_2((::uByte)(v | 128u));
        v = v >> 7;
    }

    __this->Write_2((::uByte)v);
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\IO\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

CppXliStream__uType* CppXliStream__typeof()
{
    static ::uStaticStrong<CppXliStream__uType*> type;
    if (type != NULL) return type;

    type = (CppXliStream__uType*)::uAllocClassType(sizeof(CppXliStream__uType), "Uno.IO.CppXliStream", false, 1, 0, 0);

    type->SetBaseType(::app::Uno::IO::Stream__typeof());
    type->__fp_Dispose_1 = (void(*)(::app::Uno::IO::Stream*, bool))CppXliStream__Dispose_1;
    type->__fp_Flush = (void(*)(::app::Uno::IO::Stream*))CppXliStream__Flush;
    type->__fp_get_CanRead = (bool(*)(::app::Uno::IO::Stream*))CppXliStream__get_CanRead;
    type->__fp_get_CanSeek = (bool(*)(::app::Uno::IO::Stream*))CppXliStream__get_CanSeek;
    type->__fp_get_CanWrite = (bool(*)(::app::Uno::IO::Stream*))CppXliStream__get_CanWrite;
    type->__fp_get_Length = (::uLong(*)(::app::Uno::IO::Stream*))CppXliStream__get_Length;
    type->__fp_get_Position = (::uLong(*)(::app::Uno::IO::Stream*))CppXliStream__get_Position;
    type->__fp_Read = (int(*)(::app::Uno::IO::Stream*, ::uArray*, int, int))CppXliStream__Read;
    type->__fp_Seek = (::uLong(*)(::app::Uno::IO::Stream*, ::uLong, int))CppXliStream__Seek;
    type->__fp_set_Position = (void(*)(::app::Uno::IO::Stream*, ::uLong))CppXliStream__set_Position;
    type->__fp_SetLength = (void(*)(::app::Uno::IO::Stream*, ::uLong))CppXliStream__SetLength;
    type->__fp_Write = (void(*)(::app::Uno::IO::Stream*, ::uArray*, int, int))CppXliStream__Write;

    type->SetInterfaces(
        ::app::Uno::IDisposable__typeof(), offsetof(CppXliStream__uType, __interface_0));

    type->SetFields(1,
        ::uNewField("_handle", NULL, offsetof(CppXliStream, _handle), ::app::Uno::IO::CppXliStreamHandle__typeof()));

    type->SetFunctions(1,
        ::uNewFunction(".ctor", CppXliStream__New_1, 0, true, CppXliStream__typeof(), ::app::Uno::IO::CppXliStreamHandle__typeof()));

    ::uRegisterType(type);
    return type;
}

void CppXliStream___ObjInit_1(CppXliStream* __this, ::Xli::Stream* handle)
{
    ::app::Uno::IO::Stream___ObjInit(__this);
    __this->_handle = handle;
}

void CppXliStream__Dispose_1(CppXliStream* __this, bool disposing_)
{
    if (__this->_handle != 0)
    {
      __this->_handle->Release();
      __this->_handle = 0;
    }
}

void CppXliStream__Flush(CppXliStream* __this)
{
    try
    {
        __this->_handle->Flush();
    }
    catch (const Xli::Exception& e)
    {
        throw uThrowable(::app::Uno::IO::IOException__New_3(NULL, ::uStringFromXliString(e.GetMessage())), e.GetFunction(), e.GetLine());
    }
}

bool CppXliStream__get_CanRead(CppXliStream* __this)
{
    try
    {
        return __this->_handle->CanRead();
    }
    catch (const Xli::Exception& e)
    {
        throw uThrowable(::app::Uno::IO::IOException__New_3(NULL, ::uStringFromXliString(e.GetMessage())), e.GetFunction(), e.GetLine());
    }
}

bool CppXliStream__get_CanSeek(CppXliStream* __this)
{
    try
    {
        return __this->_handle->CanSeek();
    }
    catch (const Xli::Exception& e)
    {
        throw uThrowable(::app::Uno::IO::IOException__New_3(NULL, ::uStringFromXliString(e.GetMessage())), e.GetFunction(), e.GetLine());
    }
}

bool CppXliStream__get_CanWrite(CppXliStream* __this)
{
    try
    {
        return __this->_handle->CanWrite();
    }
    catch (const Xli::Exception& e)
    {
        throw uThrowable(::app::Uno::IO::IOException__New_3(NULL, ::uStringFromXliString(e.GetMessage())), e.GetFunction(), e.GetLine());
    }
}

::uLong CppXliStream__get_Length(CppXliStream* __this)
{
    try
    {
        return __this->_handle->GetLength();
    }
    catch (const Xli::Exception& e)
    {
        throw uThrowable(::app::Uno::IO::IOException__New_3(NULL, ::uStringFromXliString(e.GetMessage())), e.GetFunction(), e.GetLine());
    }
}

::uLong CppXliStream__get_Position(CppXliStream* __this)
{
    try
    {
        return __this->_handle->GetPosition();
    }
    catch (const Xli::Exception& e)
    {
        throw uThrowable(::app::Uno::IO::IOException__New_3(NULL, ::uStringFromXliString(e.GetMessage())), e.GetFunction(), e.GetLine());
    }
}

CppXliStream* CppXliStream__New_1(::uStatic* __this, ::Xli::Stream* handle)
{
    CppXliStream* inst = (CppXliStream*)::uAllocObject(sizeof(CppXliStream), CppXliStream__typeof());
    inst->_ObjInit_1(handle);
    return inst;
}

int CppXliStream__Read(CppXliStream* __this, ::uArray* dst_, int byteOffset_, int byteCount_)
{
    try
    {
        // TODO: Bounds check
        return __this->_handle->Read((::uByte*)dst_->Ptr() + byteOffset_, 1, byteCount_);
    }
    catch (const Xli::Exception& e)
    {
        throw uThrowable(::app::Uno::IO::IOException__New_3(NULL, ::uStringFromXliString(e.GetMessage())), e.GetFunction(), e.GetLine());
    }
}

::uLong CppXliStream__Seek(CppXliStream* __this, ::uLong byteOffset_, int origin_)
{
    try
    {
        return __this->_handle->Seek((int)byteOffset_, (Xli::SeekOrigin)origin_), __this->_handle->GetPosition();
    }
    catch (const Xli::Exception& e)
    {
        throw uThrowable(::app::Uno::IO::IOException__New_3(NULL, ::uStringFromXliString(e.GetMessage())), e.GetFunction(), e.GetLine());
    }
}

void CppXliStream__set_Position(CppXliStream* __this, ::uLong value_)
{
    try
    {
        __this->_handle->Seek((int)value_, Xli::SeekOriginBegin);
    }
    catch (const Xli::Exception& e)
    {
        throw uThrowable(::app::Uno::IO::IOException__New_3(NULL, ::uStringFromXliString(e.GetMessage())), e.GetFunction(), e.GetLine());
    }
}

void CppXliStream__SetLength(CppXliStream* __this, ::uLong value)
{
    U_THROW(::app::Uno::NotImplementedException__New_3(NULL));
}

void CppXliStream__Write(CppXliStream* __this, ::uArray* src_, int byteOffset_, int byteCount_)
{
    try
    {
        // TODO: Bounds check
        __this->_handle->Write((const ::uByte*)src_->Ptr() + byteOffset_, 1, byteCount_);
    }
    catch (const Xli::Exception& e)
    {
        throw uThrowable(::app::Uno::IO::IOException__New_3(NULL, ::uStringFromXliString(e.GetMessage())), e.GetFunction(), e.GetLine());
    }
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\IO\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

CppXliStreamHandle__uType* CppXliStreamHandle__typeof()
{
    static ::uStaticStrong<CppXliStreamHandle__uType*> type;
    if (type != NULL) return type;

    type = (CppXliStreamHandle__uType*)::uAllocStructType(sizeof(CppXliStreamHandle__uType), "Uno.IO.CppXliStreamHandle", sizeof(::Xli::Stream*), 0, 0, 0);

    ::uRegisterType(type);
    return type;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\IO\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

Directory__uType* Directory__typeof()
{
    static ::uStaticStrong<Directory__uType*> type;
    if (type != NULL) return type;

    type = (Directory__uType*)::uAllocClassType(sizeof(Directory__uType), "Uno.IO.Directory");

    type->SetFunctions(10,
        ::uNewFunctionVoid("CreateDirectory", Directory__CreateDirectory, 0, true, ::app::Uno::String__typeof()),
        ::uNewFunctionVoid("Delete", Directory__Delete, 0, true, ::app::Uno::String__typeof(), ::app::Uno::Bool__typeof()),
        ::uNewFunction("EnumerateDirectories", Directory__EnumerateDirectories, 0, true, ::app::Uno::Collections::IEnumerable__string__typeof(), ::app::Uno::String__typeof()),
        ::uNewFunction("EnumerateFiles", Directory__EnumerateFiles, 0, true, ::app::Uno::Collections::IEnumerable__string__typeof(), ::app::Uno::String__typeof()),
        ::uNewFunction("EnumerateFileSystemEntries", Directory__EnumerateFileSystemEntries, 0, true, ::app::Uno::Collections::IEnumerable__string__typeof(), ::app::Uno::String__typeof()),
        ::uNewFunction("Exists", Directory__Exists, 0, true, ::app::Uno::Bool__typeof(), ::app::Uno::String__typeof()),
        ::uNewFunction("GetCurrentDirectory", Directory__GetCurrentDirectory, 0, true, ::app::Uno::String__typeof()),
        ::uNewFunction("GetUserDirectory", Directory__GetUserDirectory, 0, true, ::app::Uno::String__typeof(), ::app::Uno::IO::UserDirectory__typeof()),
        ::uNewFunctionVoid("Move", Directory__Move, 0, true, ::app::Uno::String__typeof(), ::app::Uno::String__typeof()),
        ::uNewFunctionVoid("SetCurrentDirectory", Directory__SetCurrentDirectory, 0, true, ::app::Uno::String__typeof()));

    ::uRegisterType(type);
    return type;
}

void Directory__CreateDirectory(::uStatic* __this, ::uString* dirName)
{
    ::app::Uno::IO::FileSystemImpl__CreateDirectory(NULL, dirName);
}

void Directory__Delete(::uStatic* __this, ::uString* dirName, bool recursive)
{
    ::app::Uno::IO::FileSystemImpl__DeleteDirectory(NULL, dirName, recursive);
}

::uObject* Directory__EnumerateDirectories(::uStatic* __this, ::uString* dirName)
{
    return (::uObject*)::app::Uno::IO::FileSystemEnumerable__New_1(NULL, dirName, 2);
}

::uObject* Directory__EnumerateFiles(::uStatic* __this, ::uString* dirName)
{
    return (::uObject*)::app::Uno::IO::FileSystemEnumerable__New_1(NULL, dirName, 1);
}

::uObject* Directory__EnumerateFileSystemEntries(::uStatic* __this, ::uString* dirName)
{
    return (::uObject*)::app::Uno::IO::FileSystemEnumerable__New_1(NULL, dirName, 0);
}

bool Directory__Exists(::uStatic* __this, ::uString* dirName)
{
    return ::app::Uno::IO::FileSystemImpl__IsDirectory(NULL, dirName);
}

::uString* Directory__GetCurrentDirectory(::uStatic* __this)
{
    return ::app::Uno::IO::FileSystemImpl__GetCurrentDirectory(NULL);
}

::uString* Directory__GetUserDirectory(::uStatic* __this, int dir)
{
    {
        return ::app::Uno::IO::FileSystemImpl__GetUserDirectory(NULL, dir);
    }
}

void Directory__Move(::uStatic* __this, ::uString* oldName, ::uString* newName)
{
    ::app::Uno::IO::FileSystemImpl__MoveDirectory(NULL, oldName, newName);
}

void Directory__SetCurrentDirectory(::uStatic* __this, ::uString* dirName)
{
    ::app::Uno::IO::FileSystemImpl__SetCurrentDirectory(NULL, dirName);
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\IO\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

EndOfStreamException__uType* EndOfStreamException__typeof()
{
    static ::uStaticStrong<EndOfStreamException__uType*> type;
    if (type != NULL) return type;

    type = (EndOfStreamException__uType*)::uAllocClassType(sizeof(EndOfStreamException__uType), "Uno.IO.EndOfStreamException", false, 0, 0, 0);

    type->SetBaseType(::app::Uno::IO::IOException__typeof());

    type->SetFunctions(1,
        ::uNewFunction(".ctor", EndOfStreamException__New_4, 0, true, EndOfStreamException__typeof()));

    ::uRegisterType(type);
    return type;
}

void EndOfStreamException___ObjInit_3(EndOfStreamException* __this)
{
    ::app::Uno::IO::IOException___ObjInit_2(__this, ::uGetConstString("Reached end of stream"));
}

EndOfStreamException* EndOfStreamException__New_4(::uStatic* __this)
{
    EndOfStreamException* inst = (EndOfStreamException*)::uAllocObject(sizeof(EndOfStreamException), EndOfStreamException__typeof());
    inst->_ObjInit_3();
    return inst;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\IO\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

File__uType* File__typeof()
{
    static ::uStaticStrong<File__uType*> type;
    if (type != NULL) return type;

    type = (File__uType*)::uAllocClassType(sizeof(File__uType), "Uno.IO.File");

    type->SetFunctions(16,
        ::uNewFunctionVoid("AppendAllLines", File__AppendAllLines, 0, true, ::app::Uno::String__typeof(), ::uGetArrayType(::app::Uno::String__typeof())),
        ::uNewFunctionVoid("AppendAllText", File__AppendAllText, 0, true, ::app::Uno::String__typeof(), ::app::Uno::String__typeof()),
        ::uNewFunctionVoid("Copy", File__Copy, 0, true, ::app::Uno::String__typeof(), ::app::Uno::String__typeof()),
        ::uNewFunctionVoid("Copy", File__Copy_1, 0, true, ::app::Uno::String__typeof(), ::app::Uno::String__typeof(), ::app::Uno::Bool__typeof()),
        ::uNewFunctionVoid("Delete", File__Delete, 0, true, ::app::Uno::String__typeof()),
        ::uNewFunction("Exists", File__Exists, 0, true, ::app::Uno::Bool__typeof(), ::app::Uno::String__typeof()),
        ::uNewFunctionVoid("Move", File__Move, 0, true, ::app::Uno::String__typeof(), ::app::Uno::String__typeof()),
        ::uNewFunction("Open", File__Open, 0, true, ::app::Uno::IO::Stream__typeof(), ::app::Uno::String__typeof(), ::app::Uno::IO::FileMode__typeof()),
        ::uNewFunction("OpenRead", File__OpenRead, 0, true, ::app::Uno::IO::Stream__typeof(), ::app::Uno::String__typeof()),
        ::uNewFunction("OpenWrite", File__OpenWrite, 0, true, ::app::Uno::IO::Stream__typeof(), ::app::Uno::String__typeof()),
        ::uNewFunction("ReadAllBytes", File__ReadAllBytes, 0, true, ::uGetArrayType(::app::Uno::Byte__typeof()), ::app::Uno::String__typeof()),
        ::uNewFunction("ReadAllLines", File__ReadAllLines, 0, true, ::uGetArrayType(::app::Uno::String__typeof()), ::app::Uno::String__typeof()),
        ::uNewFunction("ReadAllText", File__ReadAllText, 0, true, ::app::Uno::String__typeof(), ::app::Uno::String__typeof()),
        ::uNewFunctionVoid("WriteAllBytes", File__WriteAllBytes, 0, true, ::app::Uno::String__typeof(), ::uGetArrayType(::app::Uno::Byte__typeof())),
        ::uNewFunctionVoid("WriteAllLines", File__WriteAllLines, 0, true, ::app::Uno::String__typeof(), ::uGetArrayType(::app::Uno::String__typeof())),
        ::uNewFunctionVoid("WriteAllText", File__WriteAllText, 0, true, ::app::Uno::String__typeof(), ::app::Uno::String__typeof()));

    ::uRegisterType(type);
    return type;
}

void File__AppendAllLines(::uStatic* __this, ::uString* filename, ::uArray* contents)
{
    ::uArray* array_123;
    int index_124 = int();
    int length_125 = int();
    {
        ::app::Uno::Text::StringBuilder* strBuilder = ::app::Uno::Text::StringBuilder__New_1(NULL);

        for (array_123 = contents, index_124 = 0, length_125 = ::uPtr< ::uArray*>(array_123)->Length(); index_124 < length_125; ++index_124)
        {
            ::uString* content = ::uPtr< ::uArray*>(array_123)->Item< ::uString*>(index_124);
            ::uPtr< ::app::Uno::Text::StringBuilder*>(strBuilder)->AppendLine(content);
        }

        File__AppendAllText(NULL, filename, ::uPtr< ::app::Uno::Text::StringBuilder*>(strBuilder)->ToString());
    }
}

void File__AppendAllText(::uStatic* __this, ::uString* filename, ::uString* contents)
{
    ::app::Uno::IO::FileSystemImpl__AppendAllText(NULL, filename, contents);
}

void File__Copy(::uStatic* __this, ::uString* sourceFile, ::uString* destinationFile)
{
    ::app::Uno::IO::FileSystemImpl__CopyFile(NULL, sourceFile, destinationFile, false);
}

void File__Copy_1(::uStatic* __this, ::uString* sourceFile, ::uString* destinationFile, bool overwrite)
{
    ::app::Uno::IO::FileSystemImpl__CopyFile(NULL, sourceFile, destinationFile, overwrite);
}

void File__Delete(::uStatic* __this, ::uString* filename)
{
    ::app::Uno::IO::FileSystemImpl__DeleteFile(NULL, filename);
}

bool File__Exists(::uStatic* __this, ::uString* filename)
{
    return ::app::Uno::IO::FileSystemImpl__IsFile(NULL, filename);
}

void File__Move(::uStatic* __this, ::uString* oldName, ::uString* newName)
{
    ::app::Uno::IO::FileSystemImpl__MoveFile(NULL, oldName, newName);
}

::app::Uno::IO::Stream* File__Open(::uStatic* __this, ::uString* filename, int filemode)
{
    return (::app::Uno::IO::Stream*)::app::Uno::IO::CppXliStream__New_1(NULL, ::app::Uno::IO::FileSystemImpl__CppXliOpen(NULL, filename, filemode));
}

::app::Uno::IO::Stream* File__OpenRead(::uStatic* __this, ::uString* filename)
{
    return (::app::Uno::IO::Stream*)::app::Uno::IO::CppXliStream__New_1(NULL, ::app::Uno::IO::FileSystemImpl__CppXliOpenRead(NULL, filename));
}

::app::Uno::IO::Stream* File__OpenWrite(::uStatic* __this, ::uString* filename)
{
    return (::app::Uno::IO::Stream*)::app::Uno::IO::CppXliStream__New_1(NULL, ::app::Uno::IO::FileSystemImpl__CppXliOpenWrite(NULL, filename));
}

::uArray* File__ReadAllBytes(::uStatic* __this, ::uString* filename)
{
    return ::app::Uno::IO::FileSystemImpl__ReadAllBytes(NULL, filename);
}

::uArray* File__ReadAllLines(::uStatic* __this, ::uString* filename)
{
    return ::app::Uno::IO::FileSystemImpl__ReadAllLines(NULL, filename);
}

::uString* File__ReadAllText(::uStatic* __this, ::uString* filename)
{
    return ::app::Uno::IO::FileSystemImpl__ReadAllText(NULL, filename);
}

void File__WriteAllBytes(::uStatic* __this, ::uString* filename, ::uArray* bytes)
{
    ::app::Uno::IO::FileSystemImpl__WriteAllBytes(NULL, filename, bytes);
}

void File__WriteAllLines(::uStatic* __this, ::uString* filename, ::uArray* lines)
{
    ::app::Uno::IO::FileSystemImpl__WriteAllLines(NULL, filename, lines);
}

void File__WriteAllText(::uStatic* __this, ::uString* filename, ::uString* text)
{
    ::app::Uno::IO::FileSystemImpl__WriteAllText(NULL, filename, text);
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\IO\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

::uEnumType* FileMode__typeof()
{
    static ::uStaticStrong< ::uEnumType*> type;
    if (type != NULL) return type;

    type = ::uAllocEnumType("Uno.IO.FileMode", ::app::Uno::Int__typeof(), 6);

    type->SetLiterals(
        "CreateNew", 1LL,
        "Create", 2LL,
        "Open", 3LL,
        "OpenOrCreate", 4LL,
        "Truncate", 5LL,
        "Append", 6LL);

    ::uRegisterType(type);
    return type;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\IO\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

FileSystemEnumerable__uType* FileSystemEnumerable__typeof()
{
    static ::uStaticStrong<FileSystemEnumerable__uType*> type;
    if (type != NULL) return type;

    type = (FileSystemEnumerable__uType*)::uAllocClassType(sizeof(FileSystemEnumerable__uType), "Uno.IO.FileSystemEnumerable", false, 1, 1, 0);

    type->__interface_0.__fp_GetEnumerator = (::uObject*(*)(void*))FileSystemEnumerable__GetEnumerator;

    type->SetInterfaces(
        ::app::Uno::Collections::IEnumerable__string__typeof(), offsetof(FileSystemEnumerable__uType, __interface_0));

    type->SetStrongRefs(
        "_dirName", offsetof(FileSystemEnumerable, _dirName));

    type->SetFields(2,
        ::uNewField("_dirName", NULL, offsetof(FileSystemEnumerable, _dirName), ::app::Uno::String__typeof()),
        ::uNewField("_mode", NULL, offsetof(FileSystemEnumerable, _mode), ::app::Uno::IO::FileSystemEnumeratorMode__typeof()));

    type->SetFunctions(2,
        ::uNewFunction("GetEnumerator", FileSystemEnumerable__GetEnumerator, 0, false, ::app::Uno::Collections::IEnumerator__string__typeof()),
        ::uNewFunction(".ctor", FileSystemEnumerable__New_1, 0, true, FileSystemEnumerable__typeof(), ::app::Uno::String__typeof(), ::app::Uno::IO::FileSystemEnumeratorMode__typeof()));

    ::uRegisterType(type);
    return type;
}

void FileSystemEnumerable___ObjInit(FileSystemEnumerable* __this, ::uString* dirName, int mode)
{
    __this->_dirName = dirName;
    __this->_mode = mode;
}

::uObject* FileSystemEnumerable__GetEnumerator(FileSystemEnumerable* __this)
{
    return (::uObject*)::app::Uno::IO::FileSystemEnumerator__New_1(NULL, ::app::Uno::IO::FileSystemImpl__GetEnumerator(NULL, __this->_dirName), __this->_mode);
}

FileSystemEnumerable* FileSystemEnumerable__New_1(::uStatic* __this, ::uString* dirName, int mode)
{
    FileSystemEnumerable* inst = (FileSystemEnumerable*)::uAllocObject(sizeof(FileSystemEnumerable), FileSystemEnumerable__typeof());
    inst->_ObjInit(dirName, mode);
    return inst;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\IO\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

FileSystemEnumerator__uType* FileSystemEnumerator__typeof()
{
    static ::uStaticStrong<FileSystemEnumerator__uType*> type;
    if (type != NULL) return type;

    type = (FileSystemEnumerator__uType*)::uAllocClassType(sizeof(FileSystemEnumerator__uType), "Uno.IO.FileSystemEnumerator", false, 3, 0, 0);

    type->__interface_0.__fp_get_Current = (::uString*(*)(void*))FileSystemEnumerator__get_Current;
    type->__interface_1.__fp_Dispose = (void(*)(void*))FileSystemEnumerator__Dispose;
    type->__interface_2.__fp_Reset = (void(*)(void*))FileSystemEnumerator__Reset;
    type->__interface_2.__fp_MoveNext = (bool(*)(void*))FileSystemEnumerator__MoveNext;

    type->SetInterfaces(
        ::app::Uno::Collections::IEnumerator__string__typeof(), offsetof(FileSystemEnumerator__uType, __interface_0),
        ::app::Uno::IDisposable__typeof(), offsetof(FileSystemEnumerator__uType, __interface_1),
        ::app::Uno::Collections::IEnumerator__typeof(), offsetof(FileSystemEnumerator__uType, __interface_2));

    type->SetFields(2,
        ::uNewField("_handle", NULL, offsetof(FileSystemEnumerator, _handle), ::app::Uno::IO::FileSystemEnumeratorHandle__typeof()),
        ::uNewField("_mode", NULL, offsetof(FileSystemEnumerator, _mode), ::app::Uno::IO::FileSystemEnumeratorMode__typeof()));

    type->SetFunctions(5,
        ::uNewFunctionVoid("Dispose", FileSystemEnumerator__Dispose, 0, false),
        ::uNewFunction("get_Current", FileSystemEnumerator__get_Current, 0, false, ::app::Uno::String__typeof()),
        ::uNewFunction("MoveNext", FileSystemEnumerator__MoveNext, 0, false, ::app::Uno::Bool__typeof()),
        ::uNewFunction(".ctor", FileSystemEnumerator__New_1, 0, true, FileSystemEnumerator__typeof(), ::app::Uno::IO::FileSystemEnumeratorHandle__typeof(), ::app::Uno::IO::FileSystemEnumeratorMode__typeof()),
        ::uNewFunctionVoid("Reset", FileSystemEnumerator__Reset, 0, false));

    ::uRegisterType(type);
    return type;
}

void FileSystemEnumerator___ObjInit(FileSystemEnumerator* __this, ::CppXliFileSystemEnumerator* handle, int mode)
{
    __this->_handle = handle;
    __this->_mode = mode;
}

void FileSystemEnumerator__Dispose(FileSystemEnumerator* __this)
{
    ::app::Uno::IO::FileSystemEnumeratorImpl__Dispose(NULL, __this->_handle);
}

::uString* FileSystemEnumerator__get_Current(FileSystemEnumerator* __this)
{
    return ::app::Uno::IO::FileSystemEnumeratorImpl__GetName(NULL, __this->_handle);
}

bool FileSystemEnumerator__MoveNext(FileSystemEnumerator* __this)
{
    while (true)
    {
        bool result = ::app::Uno::IO::FileSystemEnumeratorImpl__MoveNext(NULL, __this->_handle);

        if (result && (__this->_mode != 0))
        {
            bool isDir = ::app::Uno::IO::FileSystemEnumeratorImpl__IsDirectory(NULL, __this->_handle);

            if (((__this->_mode == 1) && isDir) || ((__this->_mode == 2) && !isDir))
            {
                continue;
            }
        }

        return result;
    }
}

FileSystemEnumerator* FileSystemEnumerator__New_1(::uStatic* __this, ::CppXliFileSystemEnumerator* handle, int mode)
{
    FileSystemEnumerator* inst = (FileSystemEnumerator*)::uAllocObject(sizeof(FileSystemEnumerator), FileSystemEnumerator__typeof());
    inst->_ObjInit(handle, mode);
    return inst;
}

void FileSystemEnumerator__Reset(FileSystemEnumerator* __this)
{
    ::app::Uno::IO::FileSystemEnumeratorImpl__Reset(NULL, __this->_handle);
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\IO\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

FileSystemEnumeratorHandle__uType* FileSystemEnumeratorHandle__typeof()
{
    static ::uStaticStrong<FileSystemEnumeratorHandle__uType*> type;
    if (type != NULL) return type;

    type = (FileSystemEnumeratorHandle__uType*)::uAllocStructType(sizeof(FileSystemEnumeratorHandle__uType), "Uno.IO.FileSystemEnumeratorHandle", sizeof(::CppXliFileSystemEnumerator*), 0, 0, 0);

    ::uRegisterType(type);
    return type;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\IO\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

FileSystemEnumeratorImpl__uType* FileSystemEnumeratorImpl__typeof()
{
    static ::uStaticStrong<FileSystemEnumeratorImpl__uType*> type;
    if (type != NULL) return type;

    type = (FileSystemEnumeratorImpl__uType*)::uAllocClassType(sizeof(FileSystemEnumeratorImpl__uType), "Uno.IO.FileSystemEnumeratorImpl");

    type->SetFunctions(5,
        ::uNewFunctionVoid("Dispose", FileSystemEnumeratorImpl__Dispose, 0, true, ::app::Uno::IO::FileSystemEnumeratorHandle__typeof()),
        ::uNewFunction("GetName", FileSystemEnumeratorImpl__GetName, 0, true, ::app::Uno::String__typeof(), ::app::Uno::IO::FileSystemEnumeratorHandle__typeof()),
        ::uNewFunction("IsDirectory", FileSystemEnumeratorImpl__IsDirectory, 0, true, ::app::Uno::Bool__typeof(), ::app::Uno::IO::FileSystemEnumeratorHandle__typeof()),
        ::uNewFunction("MoveNext", FileSystemEnumeratorImpl__MoveNext, 0, true, ::app::Uno::Bool__typeof(), ::app::Uno::IO::FileSystemEnumeratorHandle__typeof()),
        ::uNewFunctionVoid("Reset", FileSystemEnumeratorImpl__Reset, 0, true, ::app::Uno::IO::FileSystemEnumeratorHandle__typeof()));

    ::uRegisterType(type);
    return type;
}

void FileSystemEnumeratorImpl__Dispose(::uStatic* __this, ::CppXliFileSystemEnumerator* handle_)
{
    handle_->Release();
}

::uString* FileSystemEnumeratorImpl__GetName(::uStatic* __this, ::CppXliFileSystemEnumerator* handle_)
{
    return ::uStringFromXliString(handle_->Files[handle_->Index].Name);
}

bool FileSystemEnumeratorImpl__IsDirectory(::uStatic* __this, ::CppXliFileSystemEnumerator* handle_)
{
    return (handle_->Files[handle_->Index].Attributes & Xli::FileAttributesDirectory) != 0;
}

bool FileSystemEnumeratorImpl__MoveNext(::uStatic* __this, ::CppXliFileSystemEnumerator* handle_)
{
    return ++handle_->Index < handle_->Files.Length();
}

void FileSystemEnumeratorImpl__Reset(::uStatic* __this, ::CppXliFileSystemEnumerator* handle_)
{
    handle_->Index = -1;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\IO\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

::uEnumType* FileSystemEnumeratorMode__typeof()
{
    static ::uStaticStrong< ::uEnumType*> type;
    if (type != NULL) return type;

    type = ::uAllocEnumType("Uno.IO.FileSystemEnumeratorMode", ::app::Uno::Int__typeof(), 3);

    type->SetLiterals(
        "All", 0LL,
        "Files", 1LL,
        "Directories", 2LL);

    ::uRegisterType(type);
    return type;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\IO\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

FileSystemImpl__uType* FileSystemImpl__typeof()
{
    static ::uStaticStrong<FileSystemImpl__uType*> type;
    if (type != NULL) return type;

    type = (FileSystemImpl__uType*)::uAllocClassType(sizeof(FileSystemImpl__uType), "Uno.IO.FileSystemImpl");

    type->SetFunctions(23,
        ::uNewFunctionVoid("AppendAllLines", FileSystemImpl__AppendAllLines, 0, true, ::app::Uno::String__typeof(), ::uGetArrayType(::app::Uno::String__typeof())),
        ::uNewFunctionVoid("AppendAllText", FileSystemImpl__AppendAllText, 0, true, ::app::Uno::String__typeof(), ::app::Uno::String__typeof()),
        ::uNewFunctionVoid("CopyFile", FileSystemImpl__CopyFile, 0, true, ::app::Uno::String__typeof(), ::app::Uno::String__typeof(), ::app::Uno::Bool__typeof()),
        ::uNewFunction("CppXliOpen", FileSystemImpl__CppXliOpen, 0, true, ::app::Uno::IO::CppXliStreamHandle__typeof(), ::app::Uno::String__typeof(), ::app::Uno::IO::FileMode__typeof()),
        ::uNewFunction("CppXliOpenRead", FileSystemImpl__CppXliOpenRead, 0, true, ::app::Uno::IO::CppXliStreamHandle__typeof(), ::app::Uno::String__typeof()),
        ::uNewFunction("CppXliOpenWrite", FileSystemImpl__CppXliOpenWrite, 0, true, ::app::Uno::IO::CppXliStreamHandle__typeof(), ::app::Uno::String__typeof()),
        ::uNewFunctionVoid("CreateDirectory", FileSystemImpl__CreateDirectory, 0, true, ::app::Uno::String__typeof()),
        ::uNewFunctionVoid("DeleteDirectory", FileSystemImpl__DeleteDirectory, 0, true, ::app::Uno::String__typeof(), ::app::Uno::Bool__typeof()),
        ::uNewFunctionVoid("DeleteFile", FileSystemImpl__DeleteFile, 0, true, ::app::Uno::String__typeof()),
        ::uNewFunction("GetCurrentDirectory", FileSystemImpl__GetCurrentDirectory, 0, true, ::app::Uno::String__typeof()),
        ::uNewFunction("GetEnumerator", FileSystemImpl__GetEnumerator, 0, true, ::app::Uno::IO::FileSystemEnumeratorHandle__typeof(), ::app::Uno::String__typeof()),
        ::uNewFunction("GetUserDirectory", FileSystemImpl__GetUserDirectory, 0, true, ::app::Uno::String__typeof(), ::app::Uno::IO::UserDirectory__typeof()),
        ::uNewFunction("IsDirectory", FileSystemImpl__IsDirectory, 0, true, ::app::Uno::Bool__typeof(), ::app::Uno::String__typeof()),
        ::uNewFunction("IsFile", FileSystemImpl__IsFile, 0, true, ::app::Uno::Bool__typeof(), ::app::Uno::String__typeof()),
        ::uNewFunctionVoid("MoveDirectory", FileSystemImpl__MoveDirectory, 0, true, ::app::Uno::String__typeof(), ::app::Uno::String__typeof()),
        ::uNewFunctionVoid("MoveFile", FileSystemImpl__MoveFile, 0, true, ::app::Uno::String__typeof(), ::app::Uno::String__typeof()),
        ::uNewFunction("ReadAllBytes", FileSystemImpl__ReadAllBytes, 0, true, ::uGetArrayType(::app::Uno::Byte__typeof()), ::app::Uno::String__typeof()),
        ::uNewFunction("ReadAllLines", FileSystemImpl__ReadAllLines, 0, true, ::uGetArrayType(::app::Uno::String__typeof()), ::app::Uno::String__typeof()),
        ::uNewFunction("ReadAllText", FileSystemImpl__ReadAllText, 0, true, ::app::Uno::String__typeof(), ::app::Uno::String__typeof()),
        ::uNewFunctionVoid("SetCurrentDirectory", FileSystemImpl__SetCurrentDirectory, 0, true, ::app::Uno::String__typeof()),
        ::uNewFunctionVoid("WriteAllBytes", FileSystemImpl__WriteAllBytes, 0, true, ::app::Uno::String__typeof(), ::uGetArrayType(::app::Uno::Byte__typeof())),
        ::uNewFunctionVoid("WriteAllLines", FileSystemImpl__WriteAllLines, 0, true, ::app::Uno::String__typeof(), ::uGetArrayType(::app::Uno::String__typeof())),
        ::uNewFunctionVoid("WriteAllText", FileSystemImpl__WriteAllText, 0, true, ::app::Uno::String__typeof(), ::app::Uno::String__typeof()));

    ::uRegisterType(type);
    return type;
}

void FileSystemImpl__AppendAllLines(::uStatic* __this, ::uString* filename, ::uArray* contents)
{
    U_THROW(::app::Uno::NotImplementedException__New_3(NULL));
}

void FileSystemImpl__AppendAllText(::uStatic* __this, ::uString* filename_, ::uString* contents_)
{
    try
    {
        Xli::Text::Append(::uStringToXliString(filename_), ::uStringToXliString(contents_));
    }
    catch (const Xli::Exception& e)
    {
        throw uThrowable(::app::Uno::IO::IOException__New_3(NULL, ::uStringFromXliString(e.GetMessage())), e.GetFunction(), e.GetLine());
    }
}

void FileSystemImpl__CopyFile(::uStatic* __this, ::uString* sourceName_, ::uString* destinationName_, bool overwrite_)
{
    try
    {
        Xli::Disk->CopyFile(::uStringToXliString(sourceName_), ::uStringToXliString(destinationName_), overwrite_);
    }
    catch (const Xli::Exception& e)
    {
        throw uThrowable(::app::Uno::IO::IOException__New_3(NULL, ::uStringFromXliString(e.GetMessage())), e.GetFunction(), e.GetLine());
    }
}

::Xli::Stream* FileSystemImpl__CppXliOpen(::uStatic* __this, ::uString* filename_, int filemode_)
{
    try
    {
        Xli::FileMode xliFileMode = Xli::FileModeRead;
        switch(filemode_)
        {
            case 5:
                if (!Xli::Disk->IsFile(::uStringToXliString(filename_)))
                {
                    XLI_THROW("File not found");
                }
            case 2:
                {
                    Xli::Managed<Xli::Stream> f = Xli::Disk->OpenFile(::uStringToXliString(filename_), Xli::FileModeWrite);
                    f->Close();
                    xliFileMode = Xli::FileModeReadWrite;
                    break;
                }
    
            case 1:
                if (Xli::Disk->IsFile(::uStringToXliString(filename_)))
                {
                    XLI_THROW("File already exists.");
                }
                xliFileMode = Xli::FileModeWrite;
                break;
    
            case 4:
                if (!Xli::Disk->IsFile(::uStringToXliString(filename_)))
                {
                    Xli::Managed<Xli::Stream> f = Xli::Disk->OpenFile(::uStringToXliString(filename_), Xli::FileModeWrite);
                    f->Close();
                }
            case 3:
                xliFileMode = Xli::FileModeReadWrite;   
                break;
    
            case 6:
                xliFileMode = Xli::FileModeAppend;
                break;
        }
        return Xli::Disk->OpenFile(::uStringToXliString(filename_), xliFileMode);
    }
    catch (const Xli::Exception& e)
    {
        throw uThrowable(::app::Uno::IO::IOException__New_3(NULL, ::uStringFromXliString(e.GetMessage())), e.GetFunction(), e.GetLine());
    }
}

::Xli::Stream* FileSystemImpl__CppXliOpenRead(::uStatic* __this, ::uString* filename_)
{
    try
    {
        return Xli::Disk->OpenFile(::uStringToXliString(filename_), Xli::FileModeRead);
    }
    catch (const Xli::Exception& e)
    {
        throw uThrowable(::app::Uno::IO::IOException__New_3(NULL, ::uStringFromXliString(e.GetMessage())), e.GetFunction(), e.GetLine());
    }
}

::Xli::Stream* FileSystemImpl__CppXliOpenWrite(::uStatic* __this, ::uString* filename_)
{
    try
    {
        return Xli::Disk->OpenFile(::uStringToXliString(filename_), Xli::FileModeWrite);
    }
    catch (const Xli::Exception& e)
    {
        throw uThrowable(::app::Uno::IO::IOException__New_3(NULL, ::uStringFromXliString(e.GetMessage())), e.GetFunction(), e.GetLine());
    }
}

void FileSystemImpl__CreateDirectory(::uStatic* __this, ::uString* dirName_)
{
    try
    {
        Xli::Disk->CreateDirectories(::uStringToXliString(dirName_));
    }
    catch (const Xli::Exception& e)
    {
        throw uThrowable(::app::Uno::IO::IOException__New_3(NULL, ::uStringFromXliString(e.GetMessage())), e.GetFunction(), e.GetLine());
    }
}

void FileSystemImpl__DeleteDirectory(::uStatic* __this, ::uString* dirName_, bool recursive_)
{
    try
    {
        if (recursive_)
            Xli::Disk->DeleteDirectoryRecursive(::uStringToXliString(dirName_));
        else
            Xli::Disk->DeleteDirectory(::uStringToXliString(dirName_));
    }
    catch (const Xli::Exception& e)
    {
        throw uThrowable(::app::Uno::IO::IOException__New_3(NULL, ::uStringFromXliString(e.GetMessage())), e.GetFunction(), e.GetLine());
    }
}

void FileSystemImpl__DeleteFile(::uStatic* __this, ::uString* filename_)
{
    try
    {
        Xli::Disk->DeleteFile(::uStringToXliString(filename_));
    }
    catch (const Xli::Exception& e)
    {
        throw uThrowable(::app::Uno::IO::IOException__New_3(NULL, ::uStringFromXliString(e.GetMessage())), e.GetFunction(), e.GetLine());
    }
}

::uString* FileSystemImpl__GetCurrentDirectory(::uStatic* __this)
{
    try
    {
        return ::uStringFromXliString(Xli::Disk->GetCurrentDirectory());
    }
    catch (const Xli::Exception& e)
    {
        throw uThrowable(::app::Uno::IO::IOException__New_3(NULL, ::uStringFromXliString(e.GetMessage())), e.GetFunction(), e.GetLine());
    }
}

::CppXliFileSystemEnumerator* FileSystemImpl__GetEnumerator(::uStatic* __this, ::uString* dirName_)
{
    try
    {
        CppXliFileSystemEnumerator* data = new CppXliFileSystemEnumerator();
        Xli::Disk->GetFiles(::uStringToXliString(dirName_), data->Files);
        return data;
    }
    catch (const Xli::Exception& e)
    {
        throw uThrowable(::app::Uno::IO::IOException__New_3(NULL, ::uStringFromXliString(e.GetMessage())), e.GetFunction(), e.GetLine());
    }
}

::uString* FileSystemImpl__GetUserDirectory(::uStatic* __this, int dir_)
{
    try
    {
        return ::uStringFromXliString(Xli::Disk->GetSystemDirectory((Xli::SystemDirectory)dir_));
    }
    catch (const Xli::Exception& e)
    {
        throw uThrowable(::app::Uno::IO::IOException__New_3(NULL, ::uStringFromXliString(e.GetMessage())), e.GetFunction(), e.GetLine());
    }
}

bool FileSystemImpl__IsDirectory(::uStatic* __this, ::uString* filename_)
{
    try
    {
        return Xli::Disk->IsDirectory(::uStringToXliString(filename_));
    }
    catch (const Xli::Exception& e)
    {
        throw uThrowable(::app::Uno::IO::IOException__New_3(NULL, ::uStringFromXliString(e.GetMessage())), e.GetFunction(), e.GetLine());
    }
}

bool FileSystemImpl__IsFile(::uStatic* __this, ::uString* filename_)
{
    try
    {
        return Xli::Disk->IsFile(::uStringToXliString(filename_));
    }
    catch (const Xli::Exception& e)
    {
        throw uThrowable(::app::Uno::IO::IOException__New_3(NULL, ::uStringFromXliString(e.GetMessage())), e.GetFunction(), e.GetLine());
    }
}

void FileSystemImpl__MoveDirectory(::uStatic* __this, ::uString* oldName_, ::uString* newName_)
{
    try
    {
        Xli::Disk->MoveDirectory(::uStringToXliString(oldName_), ::uStringToXliString(newName_));
    }
    catch (const Xli::Exception& e)
    {
        throw uThrowable(::app::Uno::IO::IOException__New_3(NULL, ::uStringFromXliString(e.GetMessage())), e.GetFunction(), e.GetLine());
    }
}

void FileSystemImpl__MoveFile(::uStatic* __this, ::uString* oldName_, ::uString* newName_)
{
    try
    {
        Xli::Disk->MoveFile(::uStringToXliString(oldName_), ::uStringToXliString(newName_));
    }
    catch (const Xli::Exception& e)
    {
        throw uThrowable(::app::Uno::IO::IOException__New_3(NULL, ::uStringFromXliString(e.GetMessage())), e.GetFunction(), e.GetLine());
    }
}

::uArray* FileSystemImpl__ReadAllBytes(::uStatic* __this, ::uString* filename_)
{
    try
    {
        Xli::Managed<Xli::Stream> f = Xli::Disk->OpenFile(::uStringToXliString(filename_), Xli::FileModeRead);
        ::uArray* result = ::uNewArray(::app::Uno::Byte__typeof(), f->GetLength());
        f->ReadSafe(result->Ptr(), 1, result->Length());
        return result;
    }
    catch (const Xli::Exception& e)
    {
        throw uThrowable(::app::Uno::IO::IOException__New_3(NULL, ::uStringFromXliString(e.GetMessage())), e.GetFunction(), e.GetLine());
    }
}

::uArray* FileSystemImpl__ReadAllLines(::uStatic* __this, ::uString* filename_)
{
    try
    {
        Xli::File f(::uStringToXliString(filename_), Xli::FileModeRead);
        Xli::TextReader reader(&f);
    
        Xli::Array<Xli::String> lines;
        reader.ReadLines(lines);
    
        int linesLength = lines.Length();
        if (linesLength > 0 && lines[linesLength - 1].Length() == 0)
        {
            linesLength--;
        }
    
        ::uArray* result = ::uNewArray(::app::Uno::String__typeof(), linesLength);
        for (int i = 0; i < linesLength; i++)
        {
            result->ItemStrong< ::uString *>(i) = ::uStringFromXliString(lines[i]);
        }
    
        return result;
    }
    catch (const Xli::Exception& e)
    {
        throw uThrowable(::app::Uno::IO::IOException__New_3(NULL, ::uStringFromXliString(e.GetMessage())), e.GetFunction(), e.GetLine());
    }
}

::uString* FileSystemImpl__ReadAllText(::uStatic* __this, ::uString* filename_)
{
    try
    {
        return ::uStringFromXliString(Xli::Text::Load(::uStringToXliString(filename_)));
    }
    catch (const Xli::Exception& e)
    {
        throw uThrowable(::app::Uno::IO::IOException__New_3(NULL, ::uStringFromXliString(e.GetMessage())), e.GetFunction(), e.GetLine());
    }
}

void FileSystemImpl__SetCurrentDirectory(::uStatic* __this, ::uString* dirName_)
{
    try
    {
        Xli::Disk->SetCurrentDirectory(::uStringToXliString(dirName_));
    }
    catch (const Xli::Exception& e)
    {
        throw uThrowable(::app::Uno::IO::IOException__New_3(NULL, ::uStringFromXliString(e.GetMessage())), e.GetFunction(), e.GetLine());
    }
}

void FileSystemImpl__WriteAllBytes(::uStatic* __this, ::uString* filename_, ::uArray* bytes_)
{
    try
    {
        Xli::Managed<Xli::Stream> f = Xli::Disk->OpenFile(::uStringToXliString(filename_), Xli::FileModeWrite);
        f->Write(bytes_->Ptr(), 1, bytes_->Length());
    }
    catch (const Xli::Exception& e)
    {
        throw uThrowable(::app::Uno::IO::IOException__New_3(NULL, ::uStringFromXliString(e.GetMessage())), e.GetFunction(), e.GetLine());
    }
}

void FileSystemImpl__WriteAllLines(::uStatic* __this, ::uString* filename_, ::uArray* content_)
{
    try
    {
        Xli::File f(::uStringToXliString(filename_), Xli::FileModeWrite);
        Xli::TextWriter writer(&f);
        for (int i = 0; i < content_->Length(); i++)
        {
            writer.Write(::uStringToXliString(content_->Item< ::uString *>(i)));
            writer.WriteLine();
        }
    }
    catch (const Xli::Exception& e)
    {
        throw uThrowable(::app::Uno::IO::IOException__New_3(NULL, ::uStringFromXliString(e.GetMessage())), e.GetFunction(), e.GetLine());
    }
}

void FileSystemImpl__WriteAllText(::uStatic* __this, ::uString* filename_, ::uString* text_)
{
    try
    {
        Xli::Text::Save(::uStringToXliString(filename_), ::uStringToXliString(text_));
    }
    catch (const Xli::Exception& e)
    {
        throw uThrowable(::app::Uno::IO::IOException__New_3(NULL, ::uStringFromXliString(e.GetMessage())), e.GetFunction(), e.GetLine());
    }
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\IO\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

IOException__uType* IOException__typeof()
{
    static ::uStaticStrong<IOException__uType*> type;
    if (type != NULL) return type;

    type = (IOException__uType*)::uAllocClassType(sizeof(IOException__uType), "Uno.IO.IOException", false, 0, 0, 0);

    type->SetBaseType(::app::Uno::Exception__typeof());

    type->SetFunctions(1,
        ::uNewFunction(".ctor", IOException__New_3, 0, true, IOException__typeof(), ::app::Uno::String__typeof()));

    ::uRegisterType(type);
    return type;
}

void IOException___ObjInit_2(IOException* __this, ::uString* message)
{
    ::app::Uno::Exception___ObjInit_1(__this, message);
}

IOException* IOException__New_3(::uStatic* __this, ::uString* message)
{
    IOException* inst = (IOException*)::uAllocObject(sizeof(IOException), IOException__typeof());
    inst->_ObjInit_2(message);
    return inst;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\IO\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

MemoryStream__uType* MemoryStream__typeof()
{
    static ::uStaticStrong<MemoryStream__uType*> type;
    if (type != NULL) return type;

    type = (MemoryStream__uType*)::uAllocClassType(sizeof(MemoryStream__uType), "Uno.IO.MemoryStream", false, 1, 1, 0);

    type->SetBaseType(::app::Uno::IO::Stream__typeof());
    type->__fp_Flush = (void(*)(::app::Uno::IO::Stream*))MemoryStream__Flush;
    type->__fp_get_CanRead = (bool(*)(::app::Uno::IO::Stream*))MemoryStream__get_CanRead;
    type->__fp_get_CanSeek = (bool(*)(::app::Uno::IO::Stream*))MemoryStream__get_CanSeek;
    type->__fp_get_CanTimeout = (bool(*)(::app::Uno::IO::Stream*))MemoryStream__get_CanTimeout;
    type->__fp_get_CanWrite = (bool(*)(::app::Uno::IO::Stream*))MemoryStream__get_CanWrite;
    type->__fp_get_Length = (::uLong(*)(::app::Uno::IO::Stream*))MemoryStream__get_Length;
    type->__fp_get_Position = (::uLong(*)(::app::Uno::IO::Stream*))MemoryStream__get_Position;
    type->__fp_Read = (int(*)(::app::Uno::IO::Stream*, ::uArray*, int, int))MemoryStream__Read;
    type->__fp_Seek = (::uLong(*)(::app::Uno::IO::Stream*, ::uLong, int))MemoryStream__Seek;
    type->__fp_set_Position = (void(*)(::app::Uno::IO::Stream*, ::uLong))MemoryStream__set_Position;
    type->__fp_SetLength = (void(*)(::app::Uno::IO::Stream*, ::uLong))MemoryStream__SetLength;
    type->__fp_Write = (void(*)(::app::Uno::IO::Stream*, ::uArray*, int, int))MemoryStream__Write;

    type->SetInterfaces(
        ::app::Uno::IDisposable__typeof(), offsetof(MemoryStream__uType, __interface_0));

    type->SetStrongRefs(
        "_buffer", offsetof(MemoryStream, _buffer));

    type->SetFields(3,
        ::uNewField("_buffer", NULL, offsetof(MemoryStream, _buffer), ::uGetArrayType(::app::Uno::Byte__typeof())),
        ::uNewField("_length", NULL, offsetof(MemoryStream, _length), ::app::Uno::Long__typeof()),
        ::uNewField("_nextIncrease", NULL, offsetof(MemoryStream, _nextIncrease), ::app::Uno::Int__typeof()));

    type->SetFunctions(5,
        ::uNewFunctionVoid("EnsureCapacity", MemoryStream__EnsureCapacity, 0, false, ::app::Uno::Int__typeof()),
        ::uNewFunction("get_Capacity", MemoryStream__get_Capacity, 0, false, ::app::Uno::Int__typeof()),
        ::uNewFunction("GetBuffer", MemoryStream__GetBuffer, 0, false, ::uGetArrayType(::app::Uno::Byte__typeof())),
        ::uNewFunction(".ctor", MemoryStream__New_1, 0, true, MemoryStream__typeof()),
        ::uNewFunctionVoid("ResizeTo", MemoryStream__ResizeTo, 0, false, ::app::Uno::Int__typeof()));

    ::uRegisterType(type);
    return type;
}

void MemoryStream___ObjInit_1(MemoryStream* __this)
{
    __this->_buffer = ::uNewArray(::app::Uno::Byte__typeof(), 0);
    __this->_nextIncrease = 256;
    ::app::Uno::IO::Stream___ObjInit(__this);
}

void MemoryStream__EnsureCapacity(MemoryStream* __this, int byteCount)
{
    if ((__this->Position() + (::uLong)byteCount) <= (::uLong)__this->Capacity())
    {
        return;
    }
    else if ((__this->Position() + (::uLong)byteCount) <= (::uLong)(__this->Capacity() + __this->_nextIncrease))
    {
        __this->ResizeTo(__this->Capacity() + __this->_nextIncrease);
    }
    else
    {
        __this->ResizeTo((int)__this->Position() + byteCount);
    }
}

void MemoryStream__Flush(MemoryStream* __this)
{
}

bool MemoryStream__get_CanRead(MemoryStream* __this)
{
    return true;
}

bool MemoryStream__get_CanSeek(MemoryStream* __this)
{
    return true;
}

bool MemoryStream__get_CanTimeout(MemoryStream* __this)
{
    return false;
}

bool MemoryStream__get_CanWrite(MemoryStream* __this)
{
    return true;
}

int MemoryStream__get_Capacity(MemoryStream* __this)
{
    return ::uPtr< ::uArray*>(__this->_buffer)->Length();
}

::uLong MemoryStream__get_Length(MemoryStream* __this)
{
    return __this->_length;
}

::uLong MemoryStream__get_Position(MemoryStream* __this)
{
    return __this->_Position;
}

::uArray* MemoryStream__GetBuffer(MemoryStream* __this)
{
    return __this->_buffer;
}

MemoryStream* MemoryStream__New_1(::uStatic* __this)
{
    MemoryStream* inst = (MemoryStream*)::uAllocObject(sizeof(MemoryStream), MemoryStream__typeof());
    inst->_ObjInit_1();
    return inst;
}

int MemoryStream__Read(MemoryStream* __this, ::uArray* dst, int byteOffset, int byteCount)
{
    int i = 0;

    for (; (i < byteCount) && ((__this->Position() + (::uLong)i) < __this->Length()); i++)
    {
        ::uPtr< ::uArray*>(dst)->Item< ::uByte>(i + byteOffset) = ::uPtr< ::uArray*>(__this->_buffer)->Item< ::uByte>((int)__this->Position() + i);
    }

    __this->Position(__this->Position() + (::uLong)i);
    return i;
}

void MemoryStream__ResizeTo(MemoryStream* __this, int newSize)
{
    ::uArray* newBuffer = ::uNewArray(::app::Uno::Byte__typeof(), newSize);
    ::app::Uno::Array__Copy__byte(NULL, __this->_buffer, newBuffer, ::uPtr< ::uArray*>(__this->_buffer)->Length());
    __this->_buffer = newBuffer;
    __this->_nextIncrease = __this->Capacity();
}

::uLong MemoryStream__Seek(MemoryStream* __this, ::uLong byteOffset, int origin)
{
    switch (origin)
    {
        case 0:
        {
            __this->Position(byteOffset);
            break;
        }
        case 2:
        {
            __this->Position(__this->Length() + byteOffset);
            break;
        }
        default:
        {
            __this->Position(__this->Position() + byteOffset);
            break;
        }
    }

    return __this->Position();
}

void MemoryStream__set_Position(MemoryStream* __this, ::uLong value)
{
    __this->_Position = value;
}

void MemoryStream__SetLength(MemoryStream* __this, ::uLong value)
{
    U_THROW(::app::Uno::NotImplementedException__New_3(NULL));
}

void MemoryStream__Write(MemoryStream* __this, ::uArray* src, int byteOffset, int byteCount)
{
    __this->EnsureCapacity(byteCount);

    for (int i = byteOffset; i < (byteOffset + byteCount); i++)
    {
        ::uPtr< ::uArray*>(__this->_buffer)->Item< ::uByte>((int)__this->Position()) = ::uPtr< ::uArray*>(src)->Item< ::uByte>(i);
        __this->Position(__this->Position() + 1ll);
    }

    if (__this->Position() > __this->Length())
    {
        __this->_length = __this->Position();
    }
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\IO\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

Path__uType* Path__typeof()
{
    static ::uStaticStrong<Path__uType*> type;
    if (type != NULL) return type;

    type = (Path__uType*)::uAllocClassType(sizeof(Path__uType), "Uno.IO.Path");

    type->SetFunctions(12,
        ::uNewFunction("Combine", Path__Combine, 0, true, ::app::Uno::String__typeof(), ::uGetArrayType(::app::Uno::String__typeof())),
        ::uNewFunction("Combine", Path__Combine_1, 0, true, ::app::Uno::String__typeof(), ::app::Uno::String__typeof(), ::app::Uno::String__typeof()),
        ::uNewFunction("Combine", Path__Combine_2, 0, true, ::app::Uno::String__typeof(), ::app::Uno::String__typeof(), ::app::Uno::String__typeof(), ::app::Uno::String__typeof()),
        ::uNewFunction("Combine", Path__Combine_3, 0, true, ::app::Uno::String__typeof(), ::app::Uno::String__typeof(), ::app::Uno::String__typeof(), ::app::Uno::String__typeof(), ::app::Uno::String__typeof()),
        ::uNewFunction("get_DirectorySeparatorChar", Path__get_DirectorySeparatorChar, 0, true, ::app::Uno::Char__typeof()),
        ::uNewFunction("GetDirectoryName", Path__GetDirectoryName, 0, true, ::app::Uno::String__typeof(), ::app::Uno::String__typeof()),
        ::uNewFunction("GetExtension", Path__GetExtension, 0, true, ::app::Uno::String__typeof(), ::app::Uno::String__typeof()),
        ::uNewFunction("GetFileName", Path__GetFileName, 0, true, ::app::Uno::String__typeof(), ::app::Uno::String__typeof()),
        ::uNewFunction("GetFileNameWithoutExtension", Path__GetFileNameWithoutExtension, 0, true, ::app::Uno::String__typeof(), ::app::Uno::String__typeof()),
        ::uNewFunction("GetFullPath", Path__GetFullPath, 0, true, ::app::Uno::String__typeof(), ::app::Uno::String__typeof()),
        ::uNewFunction("HasExtension", Path__HasExtension, 0, true, ::app::Uno::Bool__typeof(), ::app::Uno::String__typeof()),
        ::uNewFunction("IsPathRooted", Path__IsPathRooted, 0, true, ::app::Uno::Bool__typeof(), ::app::Uno::String__typeof()));

    ::uRegisterType(type);
    return type;
}

::uString* Path__Combine(::uStatic* __this, ::uArray* parts)
{
    {
        ::uString* result = ::uGetConstString("");

        for (int i = 0; i < ::uPtr< ::uArray*>(parts)->Length(); i++)
        {
            result = Path__Combine_1(NULL, result, ::uPtr< ::uArray*>(parts)->Item< ::uString*>(i));
        }

        return result;
    }
}

::uString* Path__Combine_1(::uStatic* __this, ::uString* a, ::uString* b)
{
    {
        if (Path__IsPathRooted(NULL, b))
        {
            return b;
        }

        if ((::app::Uno::String__IsNullOrEmpty(NULL, a) || (::uPtr< ::uString*>(a)->Item(::uPtr< ::uString*>(a)->Length() - 1) == '\\')) || (::uPtr< ::uString*>(a)->Item(::uPtr< ::uString*>(a)->Length() - 1) == '/'))
        {
            return ::app::Uno::String__op_Addition_2(NULL, a, b);
        }

        return ::app::Uno::String__op_Addition_2(NULL, ::app::Uno::String__op_Addition_1(NULL, a, ::uBox< ::uChar>(::app::Uno::Char__typeof(), Path__get_DirectorySeparatorChar(NULL))), b);
    }
}

::uString* Path__Combine_2(::uStatic* __this, ::uString* a, ::uString* b, ::uString* c)
{
    return Path__Combine_1(NULL, Path__Combine_1(NULL, a, b), c);
}

::uString* Path__Combine_3(::uStatic* __this, ::uString* a, ::uString* b, ::uString* c, ::uString* d)
{
    return Path__Combine_1(NULL, Path__Combine_1(NULL, Path__Combine_1(NULL, a, b), c), d);
}

::uChar Path__get_DirectorySeparatorChar(::uStatic* __this)
{
    return '/';
}

::uString* Path__GetDirectoryName(::uStatic* __this, ::uString* filename)
{
    {
        if (::app::Uno::String__op_Equality(NULL, filename, NULL))
        {
            return NULL;
        }

        for (int i = ::uPtr< ::uString*>(filename)->Length() - 1; i >= 0; i--)
        {
            switch (filename->Item(i))
            {
                case '\\':
                case '/':
                {
                    if ((i == 0) || ((i == 2) && (::uPtr< ::uString*>(filename)->Item(1) == ':')))
                    {
                        return NULL;
                    }

                    return ::app::Uno::String::Substring_1(::uPtr< ::uString*>(filename), 0, i);
                }
            }
        }

        return ::uGetConstString("");
    }
}

::uString* Path__GetExtension(::uStatic* __this, ::uString* filename)
{
    {
        if (::app::Uno::String__op_Equality(NULL, filename, NULL))
        {
            return NULL;
        }

        for (int i = ::uPtr< ::uString*>(filename)->Length() - 1; i >= 0; i--)
        {
            switch (filename->Item(i))
            {
                case '\\':
                case '/':
                {
                    break;
                }
                case '.':
                {
                    return ::app::Uno::String::Substring(::uPtr< ::uString*>(filename), i);
                }
            }
        }

        return ::uGetConstString("");
    }
}

::uString* Path__GetFileName(::uStatic* __this, ::uString* filename)
{
    {
        if (::app::Uno::String__op_Equality(NULL, filename, NULL))
        {
            return NULL;
        }

        for (int i = ::uPtr< ::uString*>(filename)->Length() - 1; i >= 0; i--)
        {
            switch (filename->Item(i))
            {
                case '\\':
                case '/':
                {
                    return ::app::Uno::String::Substring(::uPtr< ::uString*>(filename), i + 1);
                }
            }
        }

        return filename;
    }
}

::uString* Path__GetFileNameWithoutExtension(::uStatic* __this, ::uString* filename)
{
    {
        if (::app::Uno::String__op_Equality(NULL, filename, NULL))
        {
            return NULL;
        }

        for (int i = ::uPtr< ::uString*>(filename)->Length() - 1; i >= 0; i--)
        {
            switch (filename->Item(i))
            {
                case '\\':
                case '/':
                {
                    break;
                }
                case '.':
                {
                    return Path__GetFileName(NULL, ::app::Uno::String::Substring_1(::uPtr< ::uString*>(filename), 0, i));
                }
            }
        }

        return Path__GetFileName(NULL, filename);
    }
}

::uString* Path__GetFullPath(::uStatic* __this, ::uString* filename)
{
    {
        if (Path__IsPathRooted(NULL, filename))
        {
            return filename;
        }

        return Path__Combine_1(NULL, ::app::Uno::IO::Directory__GetCurrentDirectory(NULL), filename);
    }
}

bool Path__HasExtension(::uStatic* __this, ::uString* filename)
{
    {
        if (::app::Uno::String__op_Inequality(NULL, filename, NULL))
        {
            for (int i = ::uPtr< ::uString*>(filename)->Length() - 1; i >= 0; i--)
            {
                switch (filename->Item(i))
                {
                    case '\\':
                    case '/':
                    {
                        return false;
                    }
                    case '.':
                    {
                        return true;
                    }
                }
            }
        }

        return false;
    }
}

bool Path__IsPathRooted(::uStatic* __this, ::uString* filename)
{
    return ((::uPtr< ::uString*>(filename)->Length() > 0) && ((::uPtr< ::uString*>(filename)->Item(0) == '\\') || (::uPtr< ::uString*>(filename)->Item(0) == '/'))) || ((::uPtr< ::uString*>(filename)->Length() > 1) && (::uPtr< ::uString*>(filename)->Item(1) == ':'));
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\IO\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

::uEnumType* SeekOrigin__typeof()
{
    static ::uStaticStrong< ::uEnumType*> type;
    if (type != NULL) return type;

    type = ::uAllocEnumType("Uno.IO.SeekOrigin", ::app::Uno::Int__typeof(), 3);

    type->SetLiterals(
        "Begin", 0LL,
        "Current", 1LL,
        "End", 2LL);

    ::uRegisterType(type);
    return type;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\IO\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

Stream__uType* Stream__typeof()
{
    static ::uStaticStrong<Stream__uType*> type;
    if (type != NULL) return type;

    type = (Stream__uType*)::uAllocClassType(sizeof(Stream__uType), "Uno.IO.Stream", false, 1, 0, 0);

    type->__fp_Close = Stream__Close;
    type->__fp_Dispose_1 = Stream__Dispose_1;
    type->__fp_get_CanTimeout = Stream__get_CanTimeout;
    type->__fp_get_ReadTimeout = Stream__get_ReadTimeout;
    type->__fp_get_WriteTimeout = Stream__get_WriteTimeout;
    type->__fp_set_ReadTimeout = Stream__set_ReadTimeout;
    type->__fp_set_WriteTimeout = Stream__set_WriteTimeout;
    type->__interface_0.__fp_Dispose = (void(*)(void*))Stream__Dispose;

    type->SetInterfaces(
        ::app::Uno::IDisposable__typeof(), offsetof(Stream__uType, __interface_0));

    type->SetFunctions(19,
        ::uNewFunctionVoid("Close", type->__fp_Close, offsetof(Stream__uType, __fp_Close), false),
        ::uNewFunctionVoid("Dispose", Stream__Dispose, 0, false),
        ::uNewFunctionVoid("Dispose", type->__fp_Dispose_1, offsetof(Stream__uType, __fp_Dispose_1), false, ::app::Uno::Bool__typeof()),
        ::uNewFunctionVoid("Flush", type->__fp_Flush, offsetof(Stream__uType, __fp_Flush), false),
        ::uNewFunction("get_CanRead", type->__fp_get_CanRead, offsetof(Stream__uType, __fp_get_CanRead), false, ::app::Uno::Bool__typeof()),
        ::uNewFunction("get_CanSeek", type->__fp_get_CanSeek, offsetof(Stream__uType, __fp_get_CanSeek), false, ::app::Uno::Bool__typeof()),
        ::uNewFunction("get_CanTimeout", type->__fp_get_CanTimeout, offsetof(Stream__uType, __fp_get_CanTimeout), false, ::app::Uno::Bool__typeof()),
        ::uNewFunction("get_CanWrite", type->__fp_get_CanWrite, offsetof(Stream__uType, __fp_get_CanWrite), false, ::app::Uno::Bool__typeof()),
        ::uNewFunction("get_Length", type->__fp_get_Length, offsetof(Stream__uType, __fp_get_Length), false, ::app::Uno::Long__typeof()),
        ::uNewFunction("get_Position", type->__fp_get_Position, offsetof(Stream__uType, __fp_get_Position), false, ::app::Uno::Long__typeof()),
        ::uNewFunction("get_ReadTimeout", type->__fp_get_ReadTimeout, offsetof(Stream__uType, __fp_get_ReadTimeout), false, ::app::Uno::Int__typeof()),
        ::uNewFunction("get_WriteTimeout", type->__fp_get_WriteTimeout, offsetof(Stream__uType, __fp_get_WriteTimeout), false, ::app::Uno::Int__typeof()),
        ::uNewFunction("Read", type->__fp_Read, offsetof(Stream__uType, __fp_Read), false, ::app::Uno::Int__typeof(), ::uGetArrayType(::app::Uno::Byte__typeof()), ::app::Uno::Int__typeof(), ::app::Uno::Int__typeof()),
        ::uNewFunction("Seek", type->__fp_Seek, offsetof(Stream__uType, __fp_Seek), false, ::app::Uno::Long__typeof(), ::app::Uno::Long__typeof(), ::app::Uno::IO::SeekOrigin__typeof()),
        ::uNewFunctionVoid("set_Position", type->__fp_set_Position, offsetof(Stream__uType, __fp_set_Position), false, ::app::Uno::Long__typeof()),
        ::uNewFunctionVoid("set_ReadTimeout", type->__fp_set_ReadTimeout, offsetof(Stream__uType, __fp_set_ReadTimeout), false, ::app::Uno::Int__typeof()),
        ::uNewFunctionVoid("set_WriteTimeout", type->__fp_set_WriteTimeout, offsetof(Stream__uType, __fp_set_WriteTimeout), false, ::app::Uno::Int__typeof()),
        ::uNewFunctionVoid("SetLength", type->__fp_SetLength, offsetof(Stream__uType, __fp_SetLength), false, ::app::Uno::Long__typeof()),
        ::uNewFunctionVoid("Write", type->__fp_Write, offsetof(Stream__uType, __fp_Write), false, ::uGetArrayType(::app::Uno::Byte__typeof()), ::app::Uno::Int__typeof(), ::app::Uno::Int__typeof()));

    ::uRegisterType(type);
    return type;
}

void Stream___ObjInit(Stream* __this)
{
}

void Stream__Close(Stream* __this)
{
    __this->Dispose_1(true);
    ::app::Uno::GC__SuppressFinalize(NULL, (::uObject*)__this);
}

void Stream__Dispose(Stream* __this)
{
    __this->Close();
}

void Stream__Dispose_1(Stream* __this, bool disposing)
{
}

bool Stream__get_CanTimeout(Stream* __this)
{
    return false;
}

int Stream__get_ReadTimeout(Stream* __this)
{
    U_THROW(::app::Uno::NotSupportedException__New_3(NULL));
}

int Stream__get_WriteTimeout(Stream* __this)
{
    U_THROW(::app::Uno::NotSupportedException__New_3(NULL));
}

void Stream__set_ReadTimeout(Stream* __this, int value)
{
    U_THROW(::app::Uno::NotSupportedException__New_3(NULL));
}

void Stream__set_WriteTimeout(Stream* __this, int value)
{
    U_THROW(::app::Uno::NotSupportedException__New_3(NULL));
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\IO\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

StreamReader__uType* StreamReader__typeof()
{
    static ::uStaticStrong<StreamReader__uType*> type;
    if (type != NULL) return type;

    type = (StreamReader__uType*)::uAllocClassType(sizeof(StreamReader__uType), "Uno.IO.StreamReader", false, 1, 2, 0);

    type->SetBaseType(::app::Uno::IO::TextReader__typeof());
    type->__fp_Close = (void(*)(::app::Uno::IO::TextReader*))StreamReader__Close;
    type->__fp_Dispose_1 = (void(*)(::app::Uno::IO::TextReader*, bool))StreamReader__Dispose_1;
    type->__fp_Peek = (int(*)(::app::Uno::IO::TextReader*))StreamReader__Peek;
    type->__fp_Read = (int(*)(::app::Uno::IO::TextReader*))StreamReader__Read;
    type->__fp_Read_1 = (int(*)(::app::Uno::IO::TextReader*, ::uArray*, int, int))StreamReader__Read_1;
    type->__fp_ReadToEnd = (::uString*(*)(::app::Uno::IO::TextReader*))StreamReader__ReadToEnd;

    type->SetInterfaces(
        ::app::Uno::IDisposable__typeof(), offsetof(StreamReader__uType, __interface_0));

    type->SetStrongRefs(
        "_buffer", offsetof(StreamReader, _buffer),
        "_stream", offsetof(StreamReader, _stream));

    type->SetFields(4,
        ::uNewField("_buffer", NULL, offsetof(StreamReader, _buffer), ::uGetArrayType(::app::Uno::Char__typeof())),
        ::uNewField("_index", NULL, offsetof(StreamReader, _index), ::app::Uno::Int__typeof()),
        ::uNewField("_length", NULL, offsetof(StreamReader, _length), ::app::Uno::Int__typeof()),
        ::uNewField("_stream", NULL, offsetof(StreamReader, _stream), ::app::Uno::IO::Stream__typeof()));

    type->SetFunctions(4,
        ::uNewFunction("get_BaseStream", StreamReader__get_BaseStream, 0, false, ::app::Uno::IO::Stream__typeof()),
        ::uNewFunction("get_EndOfStream", StreamReader__get_EndOfStream, 0, false, ::app::Uno::Bool__typeof()),
        ::uNewFunction(".ctor", StreamReader__New_1, 0, true, StreamReader__typeof(), ::app::Uno::IO::Stream__typeof()),
        ::uNewFunctionVoid("ReadBuffer", StreamReader__ReadBuffer, 0, false));

    ::uRegisterType(type);
    return type;
}

void StreamReader___ObjInit_1(StreamReader* __this, ::app::Uno::IO::Stream* stream)
{
    ::app::Uno::IO::TextReader___ObjInit(__this);
    __this->_stream = stream;
    __this->_buffer = ::uNewArray(::app::Uno::Char__typeof(), 256);
    __this->_index = 0;
    __this->_length = 0;
}

void StreamReader__Close(StreamReader* __this)
{
    __this->Dispose_1(true);
}

void StreamReader__Dispose_1(StreamReader* __this, bool disposing)
{
    if (disposing && (__this->_stream != NULL))
    {
        ::uPtr< ::app::Uno::IO::Stream*>(__this->_stream)->Close();
        __this->_stream = NULL;
    }

    ::app::Uno::IO::TextReader__Dispose_1(__this, disposing);
}

::app::Uno::IO::Stream* StreamReader__get_BaseStream(StreamReader* __this)
{
    return __this->_stream;
}

bool StreamReader__get_EndOfStream(StreamReader* __this)
{
    if (__this->_stream == NULL)
    {
        U_THROW(::app::Uno::ObjectDisposedException__New_3(NULL, ::uGetConstString("StreamReader")));
    }

    if (__this->_index < __this->_length)
    {
        return false;
    }

    __this->ReadBuffer();
    return __this->_length == 0;
}

StreamReader* StreamReader__New_1(::uStatic* __this, ::app::Uno::IO::Stream* stream)
{
    StreamReader* inst = (StreamReader*)::uAllocObject(sizeof(StreamReader), StreamReader__typeof());
    inst->_ObjInit_1(stream);
    return inst;
}

int StreamReader__Peek(StreamReader* __this)
{
    if (__this->_stream == NULL)
    {
        U_THROW(::app::Uno::ObjectDisposedException__New_3(NULL, ::uGetConstString("StreamReader")));
    }

    if (__this->_index == __this->_length)
    {
        __this->ReadBuffer();

        if (__this->_length == 0)
        {
            return -1;
        }
    }

    return (int)::uPtr< ::uArray*>(__this->_buffer)->Item< ::uChar>(__this->_index);
}

int StreamReader__Read(StreamReader* __this)
{
    if (__this->_stream == NULL)
    {
        U_THROW(::app::Uno::ObjectDisposedException__New_3(NULL, ::uGetConstString("StreamReader")));
    }

    if (__this->_index == __this->_length)
    {
        __this->ReadBuffer();

        if (__this->_length == 0)
        {
            return -1;
        }
    }

    return (int)::uPtr< ::uArray*>(__this->_buffer)->Item< ::uChar>(__this->_index++);
}

int StreamReader__Read_1(StreamReader* __this, ::uArray* buffer, int index, int count)
{
    if (buffer == NULL)
    {
        U_THROW(::app::Uno::ArgumentNullException__New_5(NULL, ::uGetConstString("buffer")));
    }

    if (index < 0)
    {
        U_THROW(::app::Uno::ArgumentOutOfRangeException__New_5(NULL, ::uGetConstString("index")));
    }

    if (count < 0)
    {
        U_THROW(::app::Uno::ArgumentOutOfRangeException__New_5(NULL, ::uGetConstString("count")));
    }

    if ((index + count) > ::uPtr< ::uArray*>(buffer)->Length())
    {
        U_THROW(::app::Uno::ArgumentException__New_3(NULL, ::uGetConstString("range")));
    }

    if (__this->_stream == NULL)
    {
        U_THROW(::app::Uno::ObjectDisposedException__New_3(NULL, ::uGetConstString("StreamReader")));
    }

    if (__this->_length == 0)
    {
        __this->ReadBuffer();
    }

    int charsCount = 0;

    while ((charsCount != count) && (__this->_length != 0))
    {
        int symbols = ::app::Uno::Math__Min_8(NULL, __this->_length - __this->_index, count - charsCount);

        for (int i = 0; i < symbols; ++i)
        {
            ::uPtr< ::uArray*>(buffer)->Item< ::uChar>((index + charsCount) + i) = ::uPtr< ::uArray*>(__this->_buffer)->Item< ::uChar>(__this->_index);
            ++__this->_index;
        }

        charsCount = charsCount + symbols;

        if (charsCount != count)
        {
            __this->ReadBuffer();
        }
    }

    return charsCount;
}

void StreamReader__ReadBuffer(StreamReader* __this)
{
    ::uArray* array = ::uNewArray(::app::Uno::Byte__typeof(), 256);
    __this->_length = ::uPtr< ::app::Uno::IO::Stream*>(__this->_stream)->Read(array, 0, 256);

    for (int i = 0; i < __this->_length; i++)
    {
        ::uPtr< ::uArray*>(__this->_buffer)->Item< ::uChar>(i) = (::uChar)array->Item< ::uByte>(i);
    }

    __this->_index = 0;
}

::uString* StreamReader__ReadToEnd(StreamReader* __this)
{
    ::app::Uno::Text::StringBuilder* stringBuilder = ::app::Uno::Text::StringBuilder__New_1(NULL);

    if (__this->_length == 0)
    {
        __this->ReadBuffer();
    }

    while (__this->_length != 0)
    {
        int count = __this->_length - __this->_index;
        ::uArray* array = ::uNewArray(::app::Uno::Char__typeof(), count);

        for (int i = 0; i < count; i++)
        {
            array->Item< ::uChar>(i) = ::uPtr< ::uArray*>(__this->_buffer)->Item< ::uChar>(__this->_index + i);
        }

        ::uPtr< ::app::Uno::Text::StringBuilder*>(stringBuilder)->Append(array);
        __this->ReadBuffer();
    }

    return ::uPtr< ::app::Uno::Text::StringBuilder*>(stringBuilder)->ToString();
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\IO\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

StreamWriter__uType* StreamWriter__typeof()
{
    static ::uStaticStrong<StreamWriter__uType*> type;
    if (type != NULL) return type;

    type = (StreamWriter__uType*)::uAllocClassType(sizeof(StreamWriter__uType), "Uno.IO.StreamWriter", false, 1, 2, 0);

    type->SetBaseType(::app::Uno::IO::TextWriter__typeof());
    type->__fp_Close = (void(*)(::app::Uno::IO::TextWriter*))StreamWriter__Close;
    type->__fp_Dispose_1 = (void(*)(::app::Uno::IO::TextWriter*, bool))StreamWriter__Dispose_1;
    type->__fp_Flush = (void(*)(::app::Uno::IO::TextWriter*))StreamWriter__Flush;
    type->__fp_Write_1 = (void(*)(::app::Uno::IO::TextWriter*, ::uArray*, int, int))StreamWriter__Write_1;
    type->__fp_Write_3 = (void(*)(::app::Uno::IO::TextWriter*, ::uChar))StreamWriter__Write_3;
    type->__fp_Write_9 = (void(*)(::app::Uno::IO::TextWriter*, ::uString*))StreamWriter__Write_9;

    type->SetInterfaces(
        ::app::Uno::IDisposable__typeof(), offsetof(StreamWriter__uType, __interface_0));

    type->SetStrongRefs(
        "_buffer", offsetof(StreamWriter, _buffer),
        "_stream", offsetof(StreamWriter, _stream));

    type->SetFields(3,
        ::uNewField("_buffer", NULL, offsetof(StreamWriter, _buffer), ::uGetArrayType(::app::Uno::Byte__typeof())),
        ::uNewField("_index", NULL, offsetof(StreamWriter, _index), ::app::Uno::Int__typeof()),
        ::uNewField("_stream", NULL, offsetof(StreamWriter, _stream), ::app::Uno::IO::Stream__typeof()));

    type->SetFunctions(3,
        ::uNewFunction("get_BaseStream", StreamWriter__get_BaseStream, 0, false, ::app::Uno::IO::Stream__typeof()),
        ::uNewFunction(".ctor", StreamWriter__New_1, 0, true, StreamWriter__typeof(), ::app::Uno::IO::Stream__typeof()),
        ::uNewFunctionVoid("Write", StreamWriter__Write_13, 0, false, ::uGetArrayType(::app::Uno::Byte__typeof()), ::app::Uno::Int__typeof(), ::app::Uno::Int__typeof()));

    ::uRegisterType(type);
    return type;
}

void StreamWriter___ObjInit_1(StreamWriter* __this, ::app::Uno::IO::Stream* stream)
{
    ::app::Uno::IO::TextWriter___ObjInit(__this);
    __this->_stream = stream;
    __this->_buffer = ::uNewArray(::app::Uno::Byte__typeof(), 256);
    __this->_index = 0;
}

void StreamWriter__Close(StreamWriter* __this)
{
    __this->Dispose_1(true);
}

void StreamWriter__Dispose_1(StreamWriter* __this, bool disposing)
{
    __this->Flush();

    if (disposing && (__this->_stream != NULL))
    {
        ::uPtr< ::app::Uno::IO::Stream*>(__this->_stream)->Close();
    }

    ::app::Uno::IO::TextWriter__Dispose_1(__this, disposing);
}

void StreamWriter__Flush(StreamWriter* __this)
{
    if (__this->_index != 0)
    {
        ::uPtr< ::app::Uno::IO::Stream*>(__this->_stream)->Write(__this->_buffer, 0, __this->_index);
        __this->_index = 0;
    }

    ::uPtr< ::app::Uno::IO::Stream*>(__this->_stream)->Flush();
}

::app::Uno::IO::Stream* StreamWriter__get_BaseStream(StreamWriter* __this)
{
    return __this->_stream;
}

StreamWriter* StreamWriter__New_1(::uStatic* __this, ::app::Uno::IO::Stream* stream)
{
    StreamWriter* inst = (StreamWriter*)::uAllocObject(sizeof(StreamWriter), StreamWriter__typeof());
    inst->_ObjInit_1(stream);
    return inst;
}

void StreamWriter__Write_1(StreamWriter* __this, ::uArray* buffer, int index, int count)
{
    if (buffer == NULL)
    {
        U_THROW(::app::Uno::ArgumentNullException__New_5(NULL, ::uGetConstString("buffer")));
    }

    if (index < 0)
    {
        U_THROW(::app::Uno::ArgumentOutOfRangeException__New_5(NULL, ::uGetConstString("index")));
    }

    if (count < 0)
    {
        U_THROW(::app::Uno::ArgumentOutOfRangeException__New_5(NULL, ::uGetConstString("count")));
    }

    if ((index + count) > ::uPtr< ::uArray*>(buffer)->Length())
    {
        U_THROW(::app::Uno::ArgumentException__New_3(NULL, ::uGetConstString("range")));
    }

    ::uArray* array = ::app::Uno::Runtime::Implementation::TextEncodingImpl__EncodeUtf8(NULL, ::uNewStringFromArray(buffer));
    __this->Write_13(array, index, count);
}

void StreamWriter__Write_13(StreamWriter* __this, ::uArray* array, int index, int count)
{
    if ((__this->_index + count) >= 256)
    {
        ::uPtr< ::app::Uno::IO::Stream*>(__this->_stream)->Write(__this->_buffer, 0, __this->_index);
        __this->_index = 0;
    }

    if (count >= 256)
    {
        ::uPtr< ::app::Uno::IO::Stream*>(__this->_stream)->Write(array, index, count);
        return;
    }

    for (int i = 0; i < count; i++)
    {
        ::uPtr< ::uArray*>(__this->_buffer)->Item< ::uByte>(__this->_index++) = ::uPtr< ::uArray*>(array)->Item< ::uByte>(index + i);
    }
}

void StreamWriter__Write_3(StreamWriter* __this, ::uChar value)
{
    __this->Write_13(::app::Uno::Runtime::Implementation::TextEncodingImpl__EncodeUtf8(NULL, ::app::Uno::Char::ToString(value)), 0, 1);
}

void StreamWriter__Write_9(StreamWriter* __this, ::uString* value)
{
    ::uArray* array = ::app::Uno::Runtime::Implementation::TextEncodingImpl__EncodeUtf8(NULL, value);
    __this->Write_13(array, 0, ::uPtr< ::uArray*>(array)->Length());
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\IO\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

StringReader__uType* StringReader__typeof()
{
    static ::uStaticStrong<StringReader__uType*> type;
    if (type != NULL) return type;

    type = (StringReader__uType*)::uAllocClassType(sizeof(StringReader__uType), "Uno.IO.StringReader", false, 1, 1, 0);

    type->SetBaseType(::app::Uno::IO::TextReader__typeof());
    type->__fp_Close = (void(*)(::app::Uno::IO::TextReader*))StringReader__Close;
    type->__fp_Dispose_1 = (void(*)(::app::Uno::IO::TextReader*, bool))StringReader__Dispose_1;
    type->__fp_Peek = (int(*)(::app::Uno::IO::TextReader*))StringReader__Peek;
    type->__fp_Read = (int(*)(::app::Uno::IO::TextReader*))StringReader__Read;
    type->__fp_Read_1 = (int(*)(::app::Uno::IO::TextReader*, ::uArray*, int, int))StringReader__Read_1;
    type->__fp_ReadToEnd = (::uString*(*)(::app::Uno::IO::TextReader*))StringReader__ReadToEnd;

    type->SetInterfaces(
        ::app::Uno::IDisposable__typeof(), offsetof(StringReader__uType, __interface_0));

    type->SetStrongRefs(
        "_string", offsetof(StringReader, _string));

    type->SetFields(3,
        ::uNewField("_index", NULL, offsetof(StringReader, _index), ::app::Uno::Int__typeof()),
        ::uNewField("_length", NULL, offsetof(StringReader, _length), ::app::Uno::Int__typeof()),
        ::uNewField("_string", NULL, offsetof(StringReader, _string), ::app::Uno::String__typeof()));

    type->SetFunctions(1,
        ::uNewFunction(".ctor", StringReader__New_1, 0, true, StringReader__typeof(), ::app::Uno::String__typeof()));

    ::uRegisterType(type);
    return type;
}

void StringReader___ObjInit_1(StringReader* __this, ::uString* text)
{
    ::app::Uno::IO::TextReader___ObjInit(__this);
    __this->_string = text;
    __this->_index = 0;
    __this->_length = ::app::Uno::String__op_Equality(NULL, text, NULL) ? 0 : ::uPtr< ::uString*>(text)->Length();
}

void StringReader__Close(StringReader* __this)
{
    __this->Dispose_1(true);
}

void StringReader__Dispose_1(StringReader* __this, bool disposing)
{
}

StringReader* StringReader__New_1(::uStatic* __this, ::uString* text)
{
    StringReader* inst = (StringReader*)::uAllocObject(sizeof(StringReader), StringReader__typeof());
    inst->_ObjInit_1(text);
    return inst;
}

int StringReader__Peek(StringReader* __this)
{
    if (::app::Uno::String__op_Equality(NULL, __this->_string, NULL))
    {
        U_THROW(::app::Uno::ObjectDisposedException__New_3(NULL, ::uGetConstString("StringReader")));
    }

    if (__this->_index == __this->_length)
    {
        return -1;
    }

    return (int)::uPtr< ::uString*>(__this->_string)->Item(__this->_index);
}

int StringReader__Read(StringReader* __this)
{
    if (::app::Uno::String__op_Equality(NULL, __this->_string, NULL))
    {
        U_THROW(::app::Uno::ObjectDisposedException__New_3(NULL, ::uGetConstString("StringReader")));
    }

    if (__this->_index == __this->_length)
    {
        return -1;
    }

    return (int)::uPtr< ::uString*>(__this->_string)->Item(__this->_index++);
}

int StringReader__Read_1(StringReader* __this, ::uArray* buffer, int index, int count)
{
    if (buffer == NULL)
    {
        U_THROW(::app::Uno::ArgumentNullException__New_5(NULL, ::uGetConstString("buffer")));
    }

    if (index < 0)
    {
        U_THROW(::app::Uno::ArgumentOutOfRangeException__New_5(NULL, ::uGetConstString("index")));
    }

    if (count < 0)
    {
        U_THROW(::app::Uno::ArgumentOutOfRangeException__New_5(NULL, ::uGetConstString("count")));
    }

    if ((index + count) > ::uPtr< ::uArray*>(buffer)->Length())
    {
        U_THROW(::app::Uno::ArgumentException__New_3(NULL, ::uGetConstString("range")));
    }

    if (::app::Uno::String__op_Equality(NULL, __this->_string, NULL))
    {
        U_THROW(::app::Uno::ObjectDisposedException__New_3(NULL, ::uGetConstString("StringReader")));
    }

    int readCount = __this->_length - __this->_index;

    if (readCount > 0)
    {
        if (readCount > count)
        {
            readCount = count;
        }

        for (int i = 0; i < readCount; i++)
        {
            ::uPtr< ::uArray*>(buffer)->Item< ::uChar>(index + i) = ::uPtr< ::uString*>(__this->_string)->Item(__this->_index + i);
        }

        __this->_index = __this->_index + readCount;
    }

    return readCount;
}

::uString* StringReader__ReadToEnd(StringReader* __this)
{
    if (::app::Uno::String__op_Equality(NULL, __this->_string, NULL))
    {
        U_THROW(::app::Uno::ObjectDisposedException__New_3(NULL, ::uGetConstString("StringReader")));
    }

    if (__this->_index == 0)
    {
        return __this->_string;
    }

    __this->_index = __this->_length;
    return ::app::Uno::String::Substring_1(::uPtr< ::uString*>(__this->_string), __this->_index, __this->_length - __this->_index);
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\IO\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

StringWriter__uType* StringWriter__typeof()
{
    static ::uStaticStrong<StringWriter__uType*> type;
    if (type != NULL) return type;

    type = (StringWriter__uType*)::uAllocClassType(sizeof(StringWriter__uType), "Uno.IO.StringWriter", false, 1, 2, 0);

    type->SetBaseType(::app::Uno::IO::TextWriter__typeof());
    type->__fp_Close = (void(*)(::app::Uno::IO::TextWriter*))StringWriter__Close;
    type->__fp_Dispose_1 = (void(*)(::app::Uno::IO::TextWriter*, bool))StringWriter__Dispose_1;
    type->__fp_ToString = (::uString*(*)(::uObject*))StringWriter__ToString;
    type->__fp_Write_1 = (void(*)(::app::Uno::IO::TextWriter*, ::uArray*, int, int))StringWriter__Write_1;
    type->__fp_Write_3 = (void(*)(::app::Uno::IO::TextWriter*, ::uChar))StringWriter__Write_3;

    type->SetInterfaces(
        ::app::Uno::IDisposable__typeof(), offsetof(StringWriter__uType, __interface_0));

    type->SetStrongRefs(
        "_buffer", offsetof(StringWriter, _buffer),
        "_stringBuilder", offsetof(StringWriter, _stringBuilder));

    type->SetFields(4,
        ::uNewField("_buffer", NULL, offsetof(StringWriter, _buffer), ::uGetArrayType(::app::Uno::Char__typeof())),
        ::uNewField("_index", NULL, offsetof(StringWriter, _index), ::app::Uno::Int__typeof()),
        ::uNewField("_open", NULL, offsetof(StringWriter, _open), ::app::Uno::Bool__typeof()),
        ::uNewField("_stringBuilder", NULL, offsetof(StringWriter, _stringBuilder), ::app::Uno::Text::StringBuilder__typeof()));

    type->SetFunctions(2,
        ::uNewFunction(".ctor", StringWriter__New_1, 0, true, StringWriter__typeof()),
        ::uNewFunctionVoid("WriteBuffer", StringWriter__WriteBuffer, 0, false));

    ::uRegisterType(type);
    return type;
}

void StringWriter___ObjInit_1(StringWriter* __this)
{
    ::app::Uno::IO::TextWriter___ObjInit(__this);
    __this->_stringBuilder = ::app::Uno::Text::StringBuilder__New_1(NULL);
    __this->_open = true;
    __this->_buffer = ::uNewArray(::app::Uno::Char__typeof(), 256);
    __this->_index = 0;
}

void StringWriter__Close(StringWriter* __this)
{
    __this->Dispose_1(true);
    __this->_open = false;
}

void StringWriter__Dispose_1(StringWriter* __this, bool disposing)
{
    __this->_open = false;

    if (__this->_index != 0)
    {
        __this->WriteBuffer();
    }

    ::app::Uno::IO::TextWriter__Dispose_1(__this, disposing);
}

StringWriter* StringWriter__New_1(::uStatic* __this)
{
    StringWriter* inst = (StringWriter*)::uAllocObject(sizeof(StringWriter), StringWriter__typeof());
    inst->_ObjInit_1();
    return inst;
}

::uString* StringWriter__ToString(StringWriter* __this)
{
    if (__this->_index != 0)
    {
        __this->WriteBuffer();
    }

    return ::uPtr< ::app::Uno::Text::StringBuilder*>(__this->_stringBuilder)->ToString();
}

void StringWriter__Write_1(StringWriter* __this, ::uArray* buffer, int index, int count)
{
    if (buffer == NULL)
    {
        U_THROW(::app::Uno::ArgumentNullException__New_5(NULL, ::uGetConstString("buffer")));
    }

    if (index < 0)
    {
        U_THROW(::app::Uno::ArgumentOutOfRangeException__New_5(NULL, ::uGetConstString("index")));
    }

    if (count < 0)
    {
        U_THROW(::app::Uno::ArgumentOutOfRangeException__New_5(NULL, ::uGetConstString("count")));
    }

    if ((index + count) > ::uPtr< ::uArray*>(buffer)->Length())
    {
        U_THROW(::app::Uno::ArgumentException__New_3(NULL, ::uGetConstString("range")));
    }

    if (!__this->_open)
    {
        U_THROW(::app::Uno::ObjectDisposedException__New_3(NULL, ::uGetConstString("StringWriter")));
    }

    if ((__this->_index + count) >= 256)
    {
        __this->WriteBuffer();
    }

    if (count >= 256)
    {
        ::uArray* array = ::uNewArray(::app::Uno::Char__typeof(), count);
        ::app::Uno::Array__Copy__char_1(NULL, buffer, index, array, 0, count);
        ::uPtr< ::app::Uno::Text::StringBuilder*>(__this->_stringBuilder)->Append(array);
    }
    else
    {
        ::app::Uno::Array__Copy__char_1(NULL, buffer, index, __this->_buffer, __this->_index, count);
        __this->_index = __this->_index + count;
    }
}

void StringWriter__Write_3(StringWriter* __this, ::uChar value)
{
    if (!__this->_open)
    {
        U_THROW(::app::Uno::ObjectDisposedException__New_3(NULL, ::uGetConstString("StringWriter")));
    }

    ::uPtr< ::uArray*>(__this->_buffer)->Item< ::uChar>(__this->_index++) = value;

    if (__this->_index == 256)
    {
        __this->WriteBuffer();
    }
}

void StringWriter__WriteBuffer(StringWriter* __this)
{
    ::uArray* array = ::uNewArray(::app::Uno::Char__typeof(), __this->_index);
    ::app::Uno::Array__Copy__char_1(NULL, __this->_buffer, 0, array, 0, __this->_index);
    ::uPtr< ::app::Uno::Text::StringBuilder*>(__this->_stringBuilder)->Append(array);
    __this->_index = 0;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\IO\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

TextReader__uType* TextReader__typeof()
{
    static ::uStaticStrong<TextReader__uType*> type;
    if (type != NULL) return type;

    type = (TextReader__uType*)::uAllocClassType(sizeof(TextReader__uType), "Uno.IO.TextReader", false, 1, 0, 0);

    type->__fp_Close = TextReader__Close;
    type->__fp_Dispose_1 = TextReader__Dispose_1;
    type->__fp_Peek = TextReader__Peek;
    type->__fp_Read = TextReader__Read;
    type->__fp_Read_1 = TextReader__Read_1;
    type->__fp_ReadToEnd = TextReader__ReadToEnd;
    type->__interface_0.__fp_Dispose = (void(*)(void*))TextReader__Dispose;

    type->SetInterfaces(
        ::app::Uno::IDisposable__typeof(), offsetof(TextReader__uType, __interface_0));

    type->SetFunctions(9,
        ::uNewFunctionVoid("Close", type->__fp_Close, offsetof(TextReader__uType, __fp_Close), false),
        ::uNewFunctionVoid("Dispose", TextReader__Dispose, 0, false),
        ::uNewFunctionVoid("Dispose", type->__fp_Dispose_1, offsetof(TextReader__uType, __fp_Dispose_1), false, ::app::Uno::Bool__typeof()),
        ::uNewFunction("Peek", type->__fp_Peek, offsetof(TextReader__uType, __fp_Peek), false, ::app::Uno::Int__typeof()),
        ::uNewFunction("Read", type->__fp_Read, offsetof(TextReader__uType, __fp_Read), false, ::app::Uno::Int__typeof()),
        ::uNewFunction("Read", type->__fp_Read_1, offsetof(TextReader__uType, __fp_Read_1), false, ::app::Uno::Int__typeof(), ::uGetArrayType(::app::Uno::Char__typeof()), ::app::Uno::Int__typeof(), ::app::Uno::Int__typeof()),
        ::uNewFunction("ReadBlock", TextReader__ReadBlock, 0, false, ::app::Uno::Int__typeof(), ::uGetArrayType(::app::Uno::Char__typeof()), ::app::Uno::Int__typeof(), ::app::Uno::Int__typeof()),
        ::uNewFunction("ReadLine", TextReader__ReadLine, 0, false, ::app::Uno::String__typeof()),
        ::uNewFunction("ReadToEnd", type->__fp_ReadToEnd, offsetof(TextReader__uType, __fp_ReadToEnd), false, ::app::Uno::String__typeof()));

    ::uRegisterType(type);
    return type;
}

void TextReader___ObjInit(TextReader* __this)
{
}

void TextReader__Close(TextReader* __this)
{
    __this->Dispose_1(true);
    ::app::Uno::GC__SuppressFinalize(NULL, (::uObject*)__this);
}

void TextReader__Dispose(TextReader* __this)
{
    __this->Dispose_1(true);
    ::app::Uno::GC__SuppressFinalize(NULL, (::uObject*)__this);
}

void TextReader__Dispose_1(TextReader* __this, bool disposing)
{
}

int TextReader__Peek(TextReader* __this)
{
    return -1;
}

int TextReader__Read(TextReader* __this)
{
    return -1;
}

int TextReader__Read_1(TextReader* __this, ::uArray* buffer, int index, int count)
{
    if (buffer == NULL)
    {
        U_THROW(::app::Uno::ArgumentNullException__New_5(NULL, ::uGetConstString("buffer")));
    }

    if (index < 0)
    {
        U_THROW(::app::Uno::ArgumentOutOfRangeException__New_5(NULL, ::uGetConstString("index")));
    }

    if (count < 0)
    {
        U_THROW(::app::Uno::ArgumentOutOfRangeException__New_5(NULL, ::uGetConstString("count")));
    }

    if ((index + count) > ::uPtr< ::uArray*>(buffer)->Length())
    {
        U_THROW(::app::Uno::ArgumentException__New_3(NULL, ::uGetConstString("range")));
    }

    int i = 0;

    for (i = 0; i < count; i++)
    {
        int symbol = __this->Read();

        if (symbol == -1)
        {
            break;
        }

        ::uPtr< ::uArray*>(buffer)->Item< ::uChar>(index + i) = (::uChar)symbol;
    }

    return i;
}

int TextReader__ReadBlock(TextReader* __this, ::uArray* buffer, int index, int count)
{
    int i = 0;
    int readCount = int();

    do
    {
        i = i + (readCount = __this->Read_1(buffer, index + i, count - i));
    }
    while ((readCount > 0) && (i < count));

    return i;
}

::uString* TextReader__ReadLine(TextReader* __this)
{
    ::app::Uno::Collections::List__char* buffer = ::app::Uno::Collections::List__char__New_2(NULL, 16);
    int symbol = 0;

    while (true)
    {
        symbol = __this->Read();

        if (((symbol == -1) || (symbol == 13)) || (symbol == 10))
        {
            break;
        }

        ::uPtr< ::app::Uno::Collections::List__char*>(buffer)->Add((::uChar)symbol);
    }

    if ((symbol == 13) && (__this->Peek() == 10))
    {
        __this->Read();
    }

    return ::uNewStringFromArray(::uPtr< ::app::Uno::Collections::List__char*>(buffer)->ToArray());
}

::uString* TextReader__ReadToEnd(TextReader* __this)
{
    ::uArray* buffer = ::uNewArray(::app::Uno::Char__typeof(), 4096);
    ::app::Uno::Text::StringBuilder* stringBuilder = ::app::Uno::Text::StringBuilder__New_1(NULL);
    int count = int();

    while ((count = __this->Read_1(buffer, 0, buffer->Length())) != 0)
    {
        ::uArray* array = ::uNewArray(::app::Uno::Char__typeof(), count);
        ::app::Uno::Array__Copy__char(NULL, buffer, array, count);
        ::uPtr< ::app::Uno::Text::StringBuilder*>(stringBuilder)->Append(array);
    }

    return ::uPtr< ::app::Uno::Text::StringBuilder*>(stringBuilder)->ToString();
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\IO\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

TextWriter__uType* TextWriter__typeof()
{
    static ::uStaticStrong<TextWriter__uType*> type;
    if (type != NULL) return type;

    type = (TextWriter__uType*)::uAllocClassType(sizeof(TextWriter__uType), "Uno.IO.TextWriter", false, 1, 0, 0);

    type->__fp_Close = TextWriter__Close;
    type->__fp_Dispose_1 = TextWriter__Dispose_1;
    type->__fp_Flush = TextWriter__Flush;
    type->__fp_Write_1 = TextWriter__Write_1;
    type->__fp_Write_3 = TextWriter__Write_3;
    type->__fp_Write_9 = TextWriter__Write_9;
    type->__interface_0.__fp_Dispose = (void(*)(void*))TextWriter__Dispose;

    type->SetInterfaces(
        ::app::Uno::IDisposable__typeof(), offsetof(TextWriter__uType, __interface_0));

    type->SetFunctions(31,
        ::uNewFunctionVoid("Close", type->__fp_Close, offsetof(TextWriter__uType, __fp_Close), false),
        ::uNewFunctionVoid("Dispose", TextWriter__Dispose, 0, false),
        ::uNewFunctionVoid("Dispose", type->__fp_Dispose_1, offsetof(TextWriter__uType, __fp_Dispose_1), false, ::app::Uno::Bool__typeof()),
        ::uNewFunctionVoid("Flush", type->__fp_Flush, offsetof(TextWriter__uType, __fp_Flush), false),
        ::uNewFunctionVoid("Write", TextWriter__Write, 0, false, ::uGetArrayType(::app::Uno::Char__typeof())),
        ::uNewFunctionVoid("Write", type->__fp_Write_1, offsetof(TextWriter__uType, __fp_Write_1), false, ::uGetArrayType(::app::Uno::Char__typeof()), ::app::Uno::Int__typeof(), ::app::Uno::Int__typeof()),
        ::uNewFunctionVoid("Write", TextWriter__Write_10, 0, false, ::app::Uno::String__typeof(), ::uGetArrayType(::uObject__typeof())),
        ::uNewFunctionVoid("Write", TextWriter__Write_11, 0, false, ::app::Uno::UInt__typeof()),
        ::uNewFunctionVoid("Write", TextWriter__Write_12, 0, false, ::app::Uno::ULong__typeof()),
        ::uNewFunctionVoid("Write", TextWriter__Write_2, 0, false, ::app::Uno::Bool__typeof()),
        ::uNewFunctionVoid("Write", type->__fp_Write_3, offsetof(TextWriter__uType, __fp_Write_3), false, ::app::Uno::Char__typeof()),
        ::uNewFunctionVoid("Write", TextWriter__Write_4, 0, false, ::app::Uno::Double__typeof()),
        ::uNewFunctionVoid("Write", TextWriter__Write_5, 0, false, ::app::Uno::Float__typeof()),
        ::uNewFunctionVoid("Write", TextWriter__Write_6, 0, false, ::app::Uno::Int__typeof()),
        ::uNewFunctionVoid("Write", TextWriter__Write_7, 0, false, ::app::Uno::Long__typeof()),
        ::uNewFunctionVoid("Write", TextWriter__Write_8, 0, false, ::uObject__typeof()),
        ::uNewFunctionVoid("Write", type->__fp_Write_9, offsetof(TextWriter__uType, __fp_Write_9), false, ::app::Uno::String__typeof()),
        ::uNewFunctionVoid("WriteLine", TextWriter__WriteLine, 0, false),
        ::uNewFunctionVoid("WriteLine", TextWriter__WriteLine_1, 0, false, ::uGetArrayType(::app::Uno::Char__typeof())),
        ::uNewFunctionVoid("WriteLine", TextWriter__WriteLine_10, 0, false, ::app::Uno::String__typeof()),
        ::uNewFunctionVoid("WriteLine", TextWriter__WriteLine_11, 0, false, ::app::Uno::String__typeof(), ::uGetArrayType(::uObject__typeof())),
        ::uNewFunctionVoid("WriteLine", TextWriter__WriteLine_12, 0, false, ::app::Uno::UInt__typeof()),
        ::uNewFunctionVoid("WriteLine", TextWriter__WriteLine_13, 0, false, ::app::Uno::ULong__typeof()),
        ::uNewFunctionVoid("WriteLine", TextWriter__WriteLine_2, 0, false, ::uGetArrayType(::app::Uno::Char__typeof()), ::app::Uno::Int__typeof(), ::app::Uno::Int__typeof()),
        ::uNewFunctionVoid("WriteLine", TextWriter__WriteLine_3, 0, false, ::app::Uno::Bool__typeof()),
        ::uNewFunctionVoid("WriteLine", TextWriter__WriteLine_4, 0, false, ::app::Uno::Char__typeof()),
        ::uNewFunctionVoid("WriteLine", TextWriter__WriteLine_5, 0, false, ::app::Uno::Double__typeof()),
        ::uNewFunctionVoid("WriteLine", TextWriter__WriteLine_6, 0, false, ::app::Uno::Float__typeof()),
        ::uNewFunctionVoid("WriteLine", TextWriter__WriteLine_7, 0, false, ::app::Uno::Int__typeof()),
        ::uNewFunctionVoid("WriteLine", TextWriter__WriteLine_8, 0, false, ::app::Uno::Long__typeof()),
        ::uNewFunctionVoid("WriteLine", TextWriter__WriteLine_9, 0, false, ::uObject__typeof()));

    ::uRegisterType(type);
    return type;
}

void TextWriter___ObjInit(TextWriter* __this)
{
}

void TextWriter__Close(TextWriter* __this)
{
    __this->Dispose_1(true);
    ::app::Uno::GC__SuppressFinalize(NULL, (::uObject*)__this);
}

void TextWriter__Dispose(TextWriter* __this)
{
    __this->Dispose_1(true);
    ::app::Uno::GC__SuppressFinalize(NULL, (::uObject*)__this);
}

void TextWriter__Dispose_1(TextWriter* __this, bool disposing)
{
}

void TextWriter__Flush(TextWriter* __this)
{
}

void TextWriter__Write(TextWriter* __this, ::uArray* buffer)
{
    if (buffer != NULL)
    {
        __this->Write_1(buffer, 0, ::uPtr< ::uArray*>(buffer)->Length());
    }
}

void TextWriter__Write_1(TextWriter* __this, ::uArray* buffer, int index, int count)
{
}

void TextWriter__Write_10(TextWriter* __this, ::uString* format, ::uArray* args)
{
    __this->Write_9(::app::Uno::String__Format(NULL, format, args));
}

void TextWriter__Write_11(TextWriter* __this, ::uUInt value)
{
    __this->Write_9(::app::Uno::UInt::ToString(value));
}

void TextWriter__Write_12(TextWriter* __this, ::uULong value)
{
    __this->Write_9(::app::Uno::ULong::ToString(value));
}

void TextWriter__Write_2(TextWriter* __this, bool value)
{
    __this->Write_9(::app::Uno::Bool::ToString(value));
}

void TextWriter__Write_3(TextWriter* __this, ::uChar value)
{
}

void TextWriter__Write_4(TextWriter* __this, double value)
{
    __this->Write_9(::app::Uno::Double::ToString(value));
}

void TextWriter__Write_5(TextWriter* __this, float value)
{
    __this->Write_9(::app::Uno::Float::ToString(value));
}

void TextWriter__Write_6(TextWriter* __this, int value)
{
    __this->Write_9(::app::Uno::Int::ToString(value));
}

void TextWriter__Write_7(TextWriter* __this, ::uLong value)
{
    __this->Write_9(::app::Uno::Long::ToString(value));
}

void TextWriter__Write_8(TextWriter* __this, ::uObject* value)
{
    if (value != NULL)
    {
        __this->Write_9(::app::Uno::Object::ToString(::uPtr< ::uObject*>(value)));
    }
}

void TextWriter__Write_9(TextWriter* __this, ::uString* value)
{
    if (::app::Uno::String__op_Inequality(NULL, value, NULL))
    {
        __this->Write(::app::Uno::String::ToCharArray(::uPtr< ::uString*>(value)));
    }
}

void TextWriter__WriteLine(TextWriter* __this)
{
    __this->Write_9(::uGetConstString("\r\n"));
}

void TextWriter__WriteLine_1(TextWriter* __this, ::uArray* buffer)
{
    __this->Write(buffer);
    __this->WriteLine();
}

void TextWriter__WriteLine_10(TextWriter* __this, ::uString* value)
{
    __this->Write_9(value);
    __this->WriteLine();
}

void TextWriter__WriteLine_11(TextWriter* __this, ::uString* format, ::uArray* args)
{
    __this->Write_9(::app::Uno::String__Format(NULL, format, args));
    __this->WriteLine();
}

void TextWriter__WriteLine_12(TextWriter* __this, ::uUInt value)
{
    __this->Write_11(value);
    __this->WriteLine();
}

void TextWriter__WriteLine_13(TextWriter* __this, ::uULong value)
{
    __this->Write_12(value);
    __this->WriteLine();
}

void TextWriter__WriteLine_2(TextWriter* __this, ::uArray* buffer, int index, int count)
{
    __this->Write_1(buffer, index, count);
    __this->WriteLine();
}

void TextWriter__WriteLine_3(TextWriter* __this, bool value)
{
    __this->Write_2(value);
    __this->WriteLine();
}

void TextWriter__WriteLine_4(TextWriter* __this, ::uChar value)
{
    __this->Write_3(value);
    __this->WriteLine();
}

void TextWriter__WriteLine_5(TextWriter* __this, double value)
{
    __this->Write_4(value);
    __this->WriteLine();
}

void TextWriter__WriteLine_6(TextWriter* __this, float value)
{
    __this->Write_5(value);
    __this->WriteLine();
}

void TextWriter__WriteLine_7(TextWriter* __this, int value)
{
    __this->Write_6(value);
    __this->WriteLine();
}

void TextWriter__WriteLine_8(TextWriter* __this, ::uLong value)
{
    __this->Write_7(value);
    __this->WriteLine();
}

void TextWriter__WriteLine_9(TextWriter* __this, ::uObject* value)
{
    if (value == NULL)
    {
        __this->WriteLine();
        return;
    }

    __this->WriteLine_10(::app::Uno::Object::ToString(::uPtr< ::uObject*>(value)));
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\IO\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

::uEnumType* UserDirectory__typeof()
{
    static ::uStaticStrong< ::uEnumType*> type;
    if (type != NULL) return type;

    type = ::uAllocEnumType("Uno.IO.UserDirectory", ::app::Uno::Int__typeof(), 10);

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

    ::uRegisterType(type);
    return type;
}

}}}
