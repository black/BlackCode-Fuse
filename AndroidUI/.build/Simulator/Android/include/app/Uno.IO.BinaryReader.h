// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\IO\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_UNO_I_O_BINARY_READER_H__
#define __APP_UNO_I_O_BINARY_READER_H__

#include <app/Uno.IDisposable.h>
#include <app/Uno.Object.h>
#include <Uno.h>
namespace app { namespace Uno { namespace IO { struct Stream; } } }
namespace app { namespace Uno { struct Byte2; } }
namespace app { namespace Uno { struct Byte4; } }
namespace app { namespace Uno { struct Float2; } }
namespace app { namespace Uno { struct Float3; } }
namespace app { namespace Uno { struct Float3x3; } }
namespace app { namespace Uno { struct Float4; } }
namespace app { namespace Uno { struct Float4x4; } }
namespace app { namespace Uno { struct Int2; } }
namespace app { namespace Uno { struct Int3; } }
namespace app { namespace Uno { struct Int4; } }
namespace app { namespace Uno { struct SByte2; } }
namespace app { namespace Uno { struct SByte4; } }
namespace app { namespace Uno { struct Short2; } }
namespace app { namespace Uno { struct Short4; } }
namespace app { namespace Uno { struct UShort2; } }
namespace app { namespace Uno { struct UShort4; } }

namespace app {
namespace Uno {
namespace IO {

struct BinaryReader;

struct BinaryReader__uType : ::uClassType
{
    ::app::Uno::IDisposable __interface_0;
};

BinaryReader__uType* BinaryReader__typeof();

void BinaryReader___ObjInit(BinaryReader* __this, ::app::Uno::IO::Stream* stream);
void BinaryReader__Dispose(BinaryReader* __this);
void BinaryReader__FillBuffer(BinaryReader* __this, int byteCount);
::app::Uno::IO::Stream* BinaryReader__get_BaseStream(BinaryReader* __this);
bool BinaryReader__get_LittleEndian(BinaryReader* __this);
BinaryReader* BinaryReader__New_1(::uStatic* __this, ::app::Uno::IO::Stream* stream);
int BinaryReader__Read7BitEncodedInt(BinaryReader* __this);
bool BinaryReader__ReadBoolean(BinaryReader* __this);
::uByte BinaryReader__ReadByte(BinaryReader* __this);
::app::Uno::Byte2 BinaryReader__ReadByte2(BinaryReader* __this);
::app::Uno::Byte4 BinaryReader__ReadByte4(BinaryReader* __this);
::uArray* BinaryReader__ReadBytes(BinaryReader* __this, int byteCount);
::uChar BinaryReader__ReadChar(BinaryReader* __this);
double BinaryReader__ReadDouble(BinaryReader* __this);
float BinaryReader__ReadFloat(BinaryReader* __this);
::app::Uno::Float2 BinaryReader__ReadFloat2(BinaryReader* __this);
::app::Uno::Float3 BinaryReader__ReadFloat3(BinaryReader* __this);
::app::Uno::Float3x3 BinaryReader__ReadFloat3x3(BinaryReader* __this);
::app::Uno::Float4 BinaryReader__ReadFloat4(BinaryReader* __this);
::app::Uno::Float4x4 BinaryReader__ReadFloat4x4(BinaryReader* __this);
int BinaryReader__ReadInt(BinaryReader* __this);
::app::Uno::Int2 BinaryReader__ReadInt2(BinaryReader* __this);
::app::Uno::Int3 BinaryReader__ReadInt3(BinaryReader* __this);
::app::Uno::Int4 BinaryReader__ReadInt4(BinaryReader* __this);
::uLong BinaryReader__ReadLong(BinaryReader* __this);
::uSByte BinaryReader__ReadSByte(BinaryReader* __this);
::app::Uno::SByte2 BinaryReader__ReadSByte2(BinaryReader* __this);
::app::Uno::SByte4 BinaryReader__ReadSByte4(BinaryReader* __this);
::uShort BinaryReader__ReadShort(BinaryReader* __this);
::app::Uno::Short2 BinaryReader__ReadShort2(BinaryReader* __this);
::app::Uno::Short4 BinaryReader__ReadShort4(BinaryReader* __this);
::uString* BinaryReader__ReadString(BinaryReader* __this);
::uUInt BinaryReader__ReadUInt(BinaryReader* __this);
::uULong BinaryReader__ReadULong(BinaryReader* __this);
::uUShort BinaryReader__ReadUShort(BinaryReader* __this);
::app::Uno::UShort2 BinaryReader__ReadUShort2(BinaryReader* __this);
::app::Uno::UShort4 BinaryReader__ReadUShort4(BinaryReader* __this);
void BinaryReader__set_LittleEndian(BinaryReader* __this, bool value);

struct BinaryReader : ::uObject
{
    ::uStrong< ::app::Uno::IO::Stream*> _stream;
    ::uStrong< ::uArray*> _buffer;
    bool _LittleEndian;

    void _ObjInit(::app::Uno::IO::Stream* stream) { BinaryReader___ObjInit(this, stream); }
    void Dispose() { BinaryReader__Dispose(this); }
    void FillBuffer(int byteCount) { BinaryReader__FillBuffer(this, byteCount); }
    ::app::Uno::IO::Stream* BaseStream() { return BinaryReader__get_BaseStream(this); }
    bool LittleEndian() { return BinaryReader__get_LittleEndian(this); }
    int Read7BitEncodedInt() { return BinaryReader__Read7BitEncodedInt(this); }
    bool ReadBoolean() { return BinaryReader__ReadBoolean(this); }
    ::uByte ReadByte() { return BinaryReader__ReadByte(this); }
    ::app::Uno::Byte2 ReadByte2();
    ::app::Uno::Byte4 ReadByte4();
    ::uArray* ReadBytes(int byteCount) { return BinaryReader__ReadBytes(this, byteCount); }
    ::uChar ReadChar() { return BinaryReader__ReadChar(this); }
    double ReadDouble() { return BinaryReader__ReadDouble(this); }
    float ReadFloat() { return BinaryReader__ReadFloat(this); }
    ::app::Uno::Float2 ReadFloat2();
    ::app::Uno::Float3 ReadFloat3();
    ::app::Uno::Float3x3 ReadFloat3x3();
    ::app::Uno::Float4 ReadFloat4();
    ::app::Uno::Float4x4 ReadFloat4x4();
    int ReadInt() { return BinaryReader__ReadInt(this); }
    ::app::Uno::Int2 ReadInt2();
    ::app::Uno::Int3 ReadInt3();
    ::app::Uno::Int4 ReadInt4();
    ::uLong ReadLong() { return BinaryReader__ReadLong(this); }
    ::uSByte ReadSByte() { return BinaryReader__ReadSByte(this); }
    ::app::Uno::SByte2 ReadSByte2();
    ::app::Uno::SByte4 ReadSByte4();
    ::uShort ReadShort() { return BinaryReader__ReadShort(this); }
    ::app::Uno::Short2 ReadShort2();
    ::app::Uno::Short4 ReadShort4();
    ::uString* ReadString() { return BinaryReader__ReadString(this); }
    ::uUInt ReadUInt() { return BinaryReader__ReadUInt(this); }
    ::uULong ReadULong() { return BinaryReader__ReadULong(this); }
    ::uUShort ReadUShort() { return BinaryReader__ReadUShort(this); }
    ::app::Uno::UShort2 ReadUShort2();
    ::app::Uno::UShort4 ReadUShort4();
    void LittleEndian(bool value) { BinaryReader__set_LittleEndian(this, value); }
};

}}}

#include <app/Uno.Byte2.h>
#include <app/Uno.Byte4.h>
#include <app/Uno.Float2.h>
#include <app/Uno.Float3.h>
#include <app/Uno.Float3x3.h>
#include <app/Uno.Float4.h>
#include <app/Uno.Float4x4.h>
#include <app/Uno.Int2.h>
#include <app/Uno.Int3.h>
#include <app/Uno.Int4.h>
#include <app/Uno.SByte2.h>
#include <app/Uno.SByte4.h>
#include <app/Uno.Short2.h>
#include <app/Uno.Short4.h>
#include <app/Uno.UShort2.h>
#include <app/Uno.UShort4.h>

namespace app {
namespace Uno {
namespace IO {

inline ::app::Uno::Byte2 BinaryReader::ReadByte2() { return BinaryReader__ReadByte2(this); }
inline ::app::Uno::Byte4 BinaryReader::ReadByte4() { return BinaryReader__ReadByte4(this); }
inline ::app::Uno::Float2 BinaryReader::ReadFloat2() { return BinaryReader__ReadFloat2(this); }
inline ::app::Uno::Float3 BinaryReader::ReadFloat3() { return BinaryReader__ReadFloat3(this); }
inline ::app::Uno::Float3x3 BinaryReader::ReadFloat3x3() { return BinaryReader__ReadFloat3x3(this); }
inline ::app::Uno::Float4 BinaryReader::ReadFloat4() { return BinaryReader__ReadFloat4(this); }
inline ::app::Uno::Float4x4 BinaryReader::ReadFloat4x4() { return BinaryReader__ReadFloat4x4(this); }
inline ::app::Uno::Int2 BinaryReader::ReadInt2() { return BinaryReader__ReadInt2(this); }
inline ::app::Uno::Int3 BinaryReader::ReadInt3() { return BinaryReader__ReadInt3(this); }
inline ::app::Uno::Int4 BinaryReader::ReadInt4() { return BinaryReader__ReadInt4(this); }
inline ::app::Uno::SByte2 BinaryReader::ReadSByte2() { return BinaryReader__ReadSByte2(this); }
inline ::app::Uno::SByte4 BinaryReader::ReadSByte4() { return BinaryReader__ReadSByte4(this); }
inline ::app::Uno::Short2 BinaryReader::ReadShort2() { return BinaryReader__ReadShort2(this); }
inline ::app::Uno::Short4 BinaryReader::ReadShort4() { return BinaryReader__ReadShort4(this); }
inline ::app::Uno::UShort2 BinaryReader::ReadUShort2() { return BinaryReader__ReadUShort2(this); }
inline ::app::Uno::UShort4 BinaryReader::ReadUShort4() { return BinaryReader__ReadUShort4(this); }

}}}


#endif
