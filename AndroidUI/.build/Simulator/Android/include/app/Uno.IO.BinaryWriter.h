// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\IO\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_UNO_I_O_BINARY_WRITER_H__
#define __APP_UNO_I_O_BINARY_WRITER_H__

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

struct BinaryWriter;

struct BinaryWriter__uType : ::uClassType
{
    ::app::Uno::IDisposable __interface_0;
};

BinaryWriter__uType* BinaryWriter__typeof();

void BinaryWriter___ObjInit(BinaryWriter* __this, ::app::Uno::IO::Stream* stream);
void BinaryWriter__Dispose(BinaryWriter* __this);
::app::Uno::IO::Stream* BinaryWriter__get_BaseStream(BinaryWriter* __this);
bool BinaryWriter__get_LittleEndian(BinaryWriter* __this);
BinaryWriter* BinaryWriter__New_1(::uStatic* __this, ::app::Uno::IO::Stream* stream);
void BinaryWriter__set_LittleEndian(BinaryWriter* __this, bool value);
void BinaryWriter__Write(BinaryWriter* __this, ::uArray* value);
void BinaryWriter__Write_1(BinaryWriter* __this, bool value);
void BinaryWriter__Write_10(BinaryWriter* __this, ::app::Uno::Float3x3 value);
void BinaryWriter__Write_11(BinaryWriter* __this, ::app::Uno::Float4 value);
void BinaryWriter__Write_12(BinaryWriter* __this, ::app::Uno::Float4x4 value);
void BinaryWriter__Write_13(BinaryWriter* __this, int value);
void BinaryWriter__Write_14(BinaryWriter* __this, ::app::Uno::Int2 value);
void BinaryWriter__Write_15(BinaryWriter* __this, ::app::Uno::Int3 value);
void BinaryWriter__Write_16(BinaryWriter* __this, ::app::Uno::Int4 value);
void BinaryWriter__Write_17(BinaryWriter* __this, ::uLong value);
void BinaryWriter__Write_18(BinaryWriter* __this, ::uSByte value);
void BinaryWriter__Write_19(BinaryWriter* __this, ::app::Uno::SByte2 value);
void BinaryWriter__Write_2(BinaryWriter* __this, ::uByte value);
void BinaryWriter__Write_20(BinaryWriter* __this, ::app::Uno::SByte4 value);
void BinaryWriter__Write_21(BinaryWriter* __this, ::uShort value);
void BinaryWriter__Write_22(BinaryWriter* __this, ::app::Uno::Short2 value);
void BinaryWriter__Write_23(BinaryWriter* __this, ::app::Uno::Short4 value);
void BinaryWriter__Write_24(BinaryWriter* __this, ::uString* value);
void BinaryWriter__Write_25(BinaryWriter* __this, ::uUInt value);
void BinaryWriter__Write_26(BinaryWriter* __this, ::uULong value);
void BinaryWriter__Write_27(BinaryWriter* __this, ::uUShort value);
void BinaryWriter__Write_28(BinaryWriter* __this, ::app::Uno::UShort2 value);
void BinaryWriter__Write_29(BinaryWriter* __this, ::app::Uno::UShort4 value);
void BinaryWriter__Write_3(BinaryWriter* __this, ::app::Uno::Byte2 value);
void BinaryWriter__Write_4(BinaryWriter* __this, ::app::Uno::Byte4 value);
void BinaryWriter__Write_5(BinaryWriter* __this, ::uChar value);
void BinaryWriter__Write_6(BinaryWriter* __this, double value);
void BinaryWriter__Write_7(BinaryWriter* __this, float value);
void BinaryWriter__Write_8(BinaryWriter* __this, ::app::Uno::Float2 value);
void BinaryWriter__Write_9(BinaryWriter* __this, ::app::Uno::Float3 value);
void BinaryWriter__Write7BitEncodedInt(BinaryWriter* __this, int value);

struct BinaryWriter : ::uObject
{
    ::uStrong< ::app::Uno::IO::Stream*> _stream;
    ::uStrong< ::uArray*> _buffer;
    bool _LittleEndian;

    void _ObjInit(::app::Uno::IO::Stream* stream) { BinaryWriter___ObjInit(this, stream); }
    void Dispose() { BinaryWriter__Dispose(this); }
    ::app::Uno::IO::Stream* BaseStream() { return BinaryWriter__get_BaseStream(this); }
    bool LittleEndian() { return BinaryWriter__get_LittleEndian(this); }
    void LittleEndian(bool value) { BinaryWriter__set_LittleEndian(this, value); }
    void Write(::uArray* value) { BinaryWriter__Write(this, value); }
    void Write_1(bool value) { BinaryWriter__Write_1(this, value); }
    void Write_10(::app::Uno::Float3x3 value);
    void Write_11(::app::Uno::Float4 value);
    void Write_12(::app::Uno::Float4x4 value);
    void Write_13(int value) { BinaryWriter__Write_13(this, value); }
    void Write_14(::app::Uno::Int2 value);
    void Write_15(::app::Uno::Int3 value);
    void Write_16(::app::Uno::Int4 value);
    void Write_17(::uLong value) { BinaryWriter__Write_17(this, value); }
    void Write_18(::uSByte value) { BinaryWriter__Write_18(this, value); }
    void Write_19(::app::Uno::SByte2 value);
    void Write_2(::uByte value) { BinaryWriter__Write_2(this, value); }
    void Write_20(::app::Uno::SByte4 value);
    void Write_21(::uShort value) { BinaryWriter__Write_21(this, value); }
    void Write_22(::app::Uno::Short2 value);
    void Write_23(::app::Uno::Short4 value);
    void Write_24(::uString* value) { BinaryWriter__Write_24(this, value); }
    void Write_25(::uUInt value) { BinaryWriter__Write_25(this, value); }
    void Write_26(::uULong value) { BinaryWriter__Write_26(this, value); }
    void Write_27(::uUShort value) { BinaryWriter__Write_27(this, value); }
    void Write_28(::app::Uno::UShort2 value);
    void Write_29(::app::Uno::UShort4 value);
    void Write_3(::app::Uno::Byte2 value);
    void Write_4(::app::Uno::Byte4 value);
    void Write_5(::uChar value) { BinaryWriter__Write_5(this, value); }
    void Write_6(double value) { BinaryWriter__Write_6(this, value); }
    void Write_7(float value) { BinaryWriter__Write_7(this, value); }
    void Write_8(::app::Uno::Float2 value);
    void Write_9(::app::Uno::Float3 value);
    void Write7BitEncodedInt(int value) { BinaryWriter__Write7BitEncodedInt(this, value); }
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

inline void BinaryWriter::Write_10(::app::Uno::Float3x3 value) { BinaryWriter__Write_10(this, value); }
inline void BinaryWriter::Write_11(::app::Uno::Float4 value) { BinaryWriter__Write_11(this, value); }
inline void BinaryWriter::Write_12(::app::Uno::Float4x4 value) { BinaryWriter__Write_12(this, value); }
inline void BinaryWriter::Write_14(::app::Uno::Int2 value) { BinaryWriter__Write_14(this, value); }
inline void BinaryWriter::Write_15(::app::Uno::Int3 value) { BinaryWriter__Write_15(this, value); }
inline void BinaryWriter::Write_16(::app::Uno::Int4 value) { BinaryWriter__Write_16(this, value); }
inline void BinaryWriter::Write_19(::app::Uno::SByte2 value) { BinaryWriter__Write_19(this, value); }
inline void BinaryWriter::Write_20(::app::Uno::SByte4 value) { BinaryWriter__Write_20(this, value); }
inline void BinaryWriter::Write_22(::app::Uno::Short2 value) { BinaryWriter__Write_22(this, value); }
inline void BinaryWriter::Write_23(::app::Uno::Short4 value) { BinaryWriter__Write_23(this, value); }
inline void BinaryWriter::Write_28(::app::Uno::UShort2 value) { BinaryWriter__Write_28(this, value); }
inline void BinaryWriter::Write_29(::app::Uno::UShort4 value) { BinaryWriter__Write_29(this, value); }
inline void BinaryWriter::Write_3(::app::Uno::Byte2 value) { BinaryWriter__Write_3(this, value); }
inline void BinaryWriter::Write_4(::app::Uno::Byte4 value) { BinaryWriter__Write_4(this, value); }
inline void BinaryWriter::Write_8(::app::Uno::Float2 value) { BinaryWriter__Write_8(this, value); }
inline void BinaryWriter::Write_9(::app::Uno::Float3 value) { BinaryWriter__Write_9(this, value); }

}}}


#endif
