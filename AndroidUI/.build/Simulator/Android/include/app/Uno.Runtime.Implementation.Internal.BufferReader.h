// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Runtime\Implementation\Internal\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_UNO_RUNTIME_IMPLEMENTATION_INTERNAL_BUFFER_READER_H__
#define __APP_UNO_RUNTIME_IMPLEMENTATION_INTERNAL_BUFFER_READER_H__

#include <app/Uno.Object.h>
#include <Uno.h>
namespace app { namespace Uno { namespace Content { namespace Splines { struct KeyframedSpline2_Key__float4x4__float4x4; } } } }
namespace app { namespace Uno { struct Buffer; } }
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
namespace Runtime {
namespace Implementation {
namespace Internal {

struct BufferReader;

struct BufferReader__uType : ::uClassType
{
};

BufferReader__uType* BufferReader__typeof();

void BufferReader___ObjInit(BufferReader* __this, ::app::Uno::Buffer* buffer);
int BufferReader__get_Length(BufferReader* __this);
int BufferReader__get_Position(BufferReader* __this);
BufferReader* BufferReader__New_1(::uStatic* __this, ::app::Uno::Buffer* buffer);
::uArray* BufferReader__ReadArray__float4x4(::uStatic* __this, BufferReader* r, int count, ::uDelegate* readElement);
::uArray* BufferReader__ReadArray__Uno_Content_Splines_KeyframedSpline2_Key_float4x4_float4x4_(::uStatic* __this, BufferReader* r, int count, ::uDelegate* readElement);
::uByte BufferReader__ReadByte(BufferReader* __this);
::uByte BufferReader__ReadByte_1(::uStatic* __this, BufferReader* r);
::app::Uno::Byte2 BufferReader__ReadByte2(BufferReader* __this);
::app::Uno::Byte4 BufferReader__ReadByte4(BufferReader* __this);
::app::Uno::Byte4 BufferReader__ReadByte4_1(::uStatic* __this, BufferReader* r);
::uArray* BufferReader__ReadBytes(BufferReader* __this, int count);
int BufferReader__ReadCompressedInt(BufferReader* __this);
double BufferReader__ReadDouble(BufferReader* __this, bool littleEndian);
float BufferReader__ReadFloat(BufferReader* __this, bool littleEndian);
float BufferReader__ReadFloat_1(::uStatic* __this, BufferReader* r);
::app::Uno::Float2 BufferReader__ReadFloat2(BufferReader* __this, bool littleEndian);
::app::Uno::Float2 BufferReader__ReadFloat2_1(::uStatic* __this, BufferReader* r);
::app::Uno::Float3 BufferReader__ReadFloat3(BufferReader* __this, bool littleEndian);
::app::Uno::Float3 BufferReader__ReadFloat3_1(::uStatic* __this, BufferReader* r);
::app::Uno::Float3x3 BufferReader__ReadFloat3x3(BufferReader* __this, bool littleEndian);
::app::Uno::Float4 BufferReader__ReadFloat4(BufferReader* __this, bool littleEndian);
::app::Uno::Float4 BufferReader__ReadFloat4_1(::uStatic* __this, BufferReader* r);
::app::Uno::Float4x4 BufferReader__ReadFloat4x4(BufferReader* __this, bool littleEndian);
::app::Uno::Float4x4 BufferReader__ReadFloat4x4_1(::uStatic* __this, BufferReader* r);
::app::Uno::Content::Splines::KeyframedSpline2_Key__float4x4__float4x4 BufferReader__ReadFloat4x4Key(::uStatic* __this, BufferReader* r);
int BufferReader__ReadInt(BufferReader* __this, bool littleEndian);
int BufferReader__ReadInt_1(::uStatic* __this, BufferReader* r);
::app::Uno::Int2 BufferReader__ReadInt2(BufferReader* __this, bool littleEndian);
::app::Uno::Int2 BufferReader__ReadInt2_1(::uStatic* __this, BufferReader* r);
::app::Uno::Int3 BufferReader__ReadInt3(BufferReader* __this, bool littleEndian);
::app::Uno::Int3 BufferReader__ReadInt3_1(::uStatic* __this, BufferReader* r);
::app::Uno::Int4 BufferReader__ReadInt4(BufferReader* __this, bool littleEndian);
::app::Uno::Int4 BufferReader__ReadInt4_1(::uStatic* __this, BufferReader* r);
::uSByte BufferReader__ReadSByte(BufferReader* __this);
::uSByte BufferReader__ReadSByte_1(::uStatic* __this, BufferReader* r);
::app::Uno::SByte2 BufferReader__ReadSByte2(BufferReader* __this);
::app::Uno::SByte4 BufferReader__ReadSByte4(BufferReader* __this);
::app::Uno::SByte4 BufferReader__ReadSByte4_1(::uStatic* __this, BufferReader* r);
::uShort BufferReader__ReadShort(BufferReader* __this, bool littleEndian);
::uShort BufferReader__ReadShort_1(::uStatic* __this, BufferReader* r);
::app::Uno::Short2 BufferReader__ReadShort2(BufferReader* __this, bool littleEndian);
::app::Uno::Short2 BufferReader__ReadShort2_1(::uStatic* __this, BufferReader* r);
::app::Uno::Short4 BufferReader__ReadShort4(BufferReader* __this, bool littleEndian);
::app::Uno::Short4 BufferReader__ReadShort4_1(::uStatic* __this, BufferReader* r);
::uString* BufferReader__ReadString(BufferReader* __this);
::uUInt BufferReader__ReadUInt(BufferReader* __this, bool littleEndian);
::uUInt BufferReader__ReadUInt_1(::uStatic* __this, BufferReader* r);
::uUShort BufferReader__ReadUShort(BufferReader* __this, bool littleEndian);
::uUShort BufferReader__ReadUShort_1(::uStatic* __this, BufferReader* r);
::app::Uno::UShort2 BufferReader__ReadUShort2(BufferReader* __this, bool littleEndian);
::app::Uno::UShort2 BufferReader__ReadUShort2_1(::uStatic* __this, BufferReader* r);
::app::Uno::UShort4 BufferReader__ReadUShort4(BufferReader* __this, bool littleEndian);
::app::Uno::UShort4 BufferReader__ReadUShort4_1(::uStatic* __this, BufferReader* r);
void BufferReader__set_Position(BufferReader* __this, int value);

struct BufferReader : ::uObject
{
    ::uStrong< ::app::Uno::Buffer*> _buffer;
    int _position;

    void _ObjInit(::app::Uno::Buffer* buffer) { BufferReader___ObjInit(this, buffer); }
    int Length() { return BufferReader__get_Length(this); }
    int Position() { return BufferReader__get_Position(this); }
    ::uByte ReadByte() { return BufferReader__ReadByte(this); }
    ::app::Uno::Byte2 ReadByte2();
    ::app::Uno::Byte4 ReadByte4();
    ::uArray* ReadBytes(int count) { return BufferReader__ReadBytes(this, count); }
    int ReadCompressedInt() { return BufferReader__ReadCompressedInt(this); }
    double ReadDouble(bool littleEndian) { return BufferReader__ReadDouble(this, littleEndian); }
    float ReadFloat(bool littleEndian) { return BufferReader__ReadFloat(this, littleEndian); }
    ::app::Uno::Float2 ReadFloat2(bool littleEndian);
    ::app::Uno::Float3 ReadFloat3(bool littleEndian);
    ::app::Uno::Float3x3 ReadFloat3x3(bool littleEndian);
    ::app::Uno::Float4 ReadFloat4(bool littleEndian);
    ::app::Uno::Float4x4 ReadFloat4x4(bool littleEndian);
    int ReadInt(bool littleEndian) { return BufferReader__ReadInt(this, littleEndian); }
    ::app::Uno::Int2 ReadInt2(bool littleEndian);
    ::app::Uno::Int3 ReadInt3(bool littleEndian);
    ::app::Uno::Int4 ReadInt4(bool littleEndian);
    ::uSByte ReadSByte() { return BufferReader__ReadSByte(this); }
    ::app::Uno::SByte2 ReadSByte2();
    ::app::Uno::SByte4 ReadSByte4();
    ::uShort ReadShort(bool littleEndian) { return BufferReader__ReadShort(this, littleEndian); }
    ::app::Uno::Short2 ReadShort2(bool littleEndian);
    ::app::Uno::Short4 ReadShort4(bool littleEndian);
    ::uString* ReadString() { return BufferReader__ReadString(this); }
    ::uUInt ReadUInt(bool littleEndian) { return BufferReader__ReadUInt(this, littleEndian); }
    ::uUShort ReadUShort(bool littleEndian) { return BufferReader__ReadUShort(this, littleEndian); }
    ::app::Uno::UShort2 ReadUShort2(bool littleEndian);
    ::app::Uno::UShort4 ReadUShort4(bool littleEndian);
    void Position(int value) { BufferReader__set_Position(this, value); }
};

}}}}}

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
namespace Runtime {
namespace Implementation {
namespace Internal {

inline ::app::Uno::Byte2 BufferReader::ReadByte2() { return BufferReader__ReadByte2(this); }
inline ::app::Uno::Byte4 BufferReader::ReadByte4() { return BufferReader__ReadByte4(this); }
inline ::app::Uno::Float2 BufferReader::ReadFloat2(bool littleEndian) { return BufferReader__ReadFloat2(this, littleEndian); }
inline ::app::Uno::Float3 BufferReader::ReadFloat3(bool littleEndian) { return BufferReader__ReadFloat3(this, littleEndian); }
inline ::app::Uno::Float3x3 BufferReader::ReadFloat3x3(bool littleEndian) { return BufferReader__ReadFloat3x3(this, littleEndian); }
inline ::app::Uno::Float4 BufferReader::ReadFloat4(bool littleEndian) { return BufferReader__ReadFloat4(this, littleEndian); }
inline ::app::Uno::Float4x4 BufferReader::ReadFloat4x4(bool littleEndian) { return BufferReader__ReadFloat4x4(this, littleEndian); }
inline ::app::Uno::Int2 BufferReader::ReadInt2(bool littleEndian) { return BufferReader__ReadInt2(this, littleEndian); }
inline ::app::Uno::Int3 BufferReader::ReadInt3(bool littleEndian) { return BufferReader__ReadInt3(this, littleEndian); }
inline ::app::Uno::Int4 BufferReader::ReadInt4(bool littleEndian) { return BufferReader__ReadInt4(this, littleEndian); }
inline ::app::Uno::SByte2 BufferReader::ReadSByte2() { return BufferReader__ReadSByte2(this); }
inline ::app::Uno::SByte4 BufferReader::ReadSByte4() { return BufferReader__ReadSByte4(this); }
inline ::app::Uno::Short2 BufferReader::ReadShort2(bool littleEndian) { return BufferReader__ReadShort2(this, littleEndian); }
inline ::app::Uno::Short4 BufferReader::ReadShort4(bool littleEndian) { return BufferReader__ReadShort4(this, littleEndian); }
inline ::app::Uno::UShort2 BufferReader::ReadUShort2(bool littleEndian) { return BufferReader__ReadUShort2(this, littleEndian); }
inline ::app::Uno::UShort4 BufferReader::ReadUShort4(bool littleEndian) { return BufferReader__ReadUShort4(this, littleEndian); }

}}}}}


#endif
