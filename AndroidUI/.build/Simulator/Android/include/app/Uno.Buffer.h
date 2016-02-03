// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_UNO_BUFFER_H__
#define __APP_UNO_BUFFER_H__

#include <app/Uno.Object.h>
#include <Uno.h>
namespace app { namespace Uno { struct BundleFile; } }
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

struct Buffer;

struct Buffer__uType : ::uClassType
{
};

Buffer__uType* Buffer__typeof();

void Buffer___ObjInit(Buffer* __this, ::uArray* data);
void Buffer___ObjInit_1(Buffer* __this, ::uArray* data, int offset, int sizeInBytes, bool isReadOnly);
void Buffer___ObjInit_2(Buffer* __this, int sizeInBytes);
Buffer* Buffer__CreateReadOnlySubBuffer(Buffer* __this, int offset, int sizeInBytes);
int Buffer__get_ByteOffset(Buffer* __this);
::uArray* Buffer__get_GetHandle(Buffer* __this);
::uByte Buffer__get_Item(Buffer* __this, int offset);
::uArray* Buffer__get_SetHandle(Buffer* __this);
int Buffer__get_SizeInBytes(Buffer* __this);
::uByte Buffer__GetByte(Buffer* __this, int offset);
::app::Uno::Byte2 Buffer__GetByte2(Buffer* __this, int offset);
::app::Uno::Byte4 Buffer__GetByte4(Buffer* __this, int offset);
double Buffer__GetDouble(Buffer* __this, int offset, bool littleEndian);
float Buffer__GetFloat(Buffer* __this, int offset, bool littleEndian);
::app::Uno::Float2 Buffer__GetFloat2(Buffer* __this, int offset, bool littleEndian);
::app::Uno::Float3 Buffer__GetFloat3(Buffer* __this, int offset, bool littleEndian);
::app::Uno::Float3x3 Buffer__GetFloat3x3(Buffer* __this, int offset, bool littleEndian);
::app::Uno::Float4 Buffer__GetFloat4(Buffer* __this, int offset, bool littleEndian);
::app::Uno::Float4x4 Buffer__GetFloat4x4(Buffer* __this, int offset, bool littleEndian);
int Buffer__GetInt(Buffer* __this, int offset, bool littleEndian);
::app::Uno::Int2 Buffer__GetInt2(Buffer* __this, int offset, bool littleEndian);
::app::Uno::Int3 Buffer__GetInt3(Buffer* __this, int offset, bool littleEndian);
::app::Uno::Int4 Buffer__GetInt4(Buffer* __this, int offset, bool littleEndian);
::uLong Buffer__GetLong(Buffer* __this, int offset, bool littleEndian);
::uSByte Buffer__GetSByte(Buffer* __this, int offset);
::app::Uno::SByte2 Buffer__GetSByte2(Buffer* __this, int offset);
::app::Uno::SByte4 Buffer__GetSByte4(Buffer* __this, int offset);
::uShort Buffer__GetShort(Buffer* __this, int offset, bool littleEndian);
::app::Uno::Short2 Buffer__GetShort2(Buffer* __this, int offset, bool littleEndian);
::app::Uno::Short4 Buffer__GetShort4(Buffer* __this, int offset, bool littleEndian);
::uUInt Buffer__GetUInt(Buffer* __this, int offset, bool littleEndian);
::uULong Buffer__GetULong(Buffer* __this, int offset, bool littleEndian);
::uUShort Buffer__GetUShort(Buffer* __this, int offset, bool littleEndian);
::app::Uno::UShort2 Buffer__GetUShort2(Buffer* __this, int offset, bool littleEndian);
::app::Uno::UShort4 Buffer__GetUShort4(Buffer* __this, int offset, bool littleEndian);
Buffer* Buffer__Load(::uStatic* __this, ::app::Uno::BundleFile* file);
Buffer* Buffer__Load_1(::uStatic* __this, ::uString* filename);
Buffer* Buffer__New_1(::uStatic* __this, ::uArray* data);
Buffer* Buffer__New_2(::uStatic* __this, ::uArray* data, int offset, int sizeInBytes, bool isReadOnly);
Buffer* Buffer__New_3(::uStatic* __this, int sizeInBytes);
void Buffer__set_Item(Buffer* __this, int offset, ::uByte value);
void Buffer__SetByte(Buffer* __this, int offset, ::uByte value);
void Buffer__SetByte2(Buffer* __this, int offset, ::app::Uno::Byte2 value);
void Buffer__SetByte4(Buffer* __this, int offset, ::app::Uno::Byte4 value);
void Buffer__SetDouble(Buffer* __this, int offset, double value, bool littleEndian);
void Buffer__SetFloat(Buffer* __this, int offset, float value, bool littleEndian);
void Buffer__SetFloat2(Buffer* __this, int offset, ::app::Uno::Float2 value, bool littleEndian);
void Buffer__SetFloat3(Buffer* __this, int offset, ::app::Uno::Float3 value, bool littleEndian);
void Buffer__SetFloat3x3(Buffer* __this, int offset, ::app::Uno::Float3x3 value, bool littleEndian);
void Buffer__SetFloat4(Buffer* __this, int offset, ::app::Uno::Float4 value, bool littleEndian);
void Buffer__SetFloat4x4(Buffer* __this, int offset, ::app::Uno::Float4x4 value, bool littleEndian);
void Buffer__SetInt(Buffer* __this, int offset, int value, bool littleEndian);
void Buffer__SetInt2(Buffer* __this, int offset, ::app::Uno::Int2 value, bool littleEndian);
void Buffer__SetInt3(Buffer* __this, int offset, ::app::Uno::Int3 value, bool littleEndian);
void Buffer__SetInt4(Buffer* __this, int offset, ::app::Uno::Int4 value, bool littleEndian);
void Buffer__SetLong(Buffer* __this, int offset, ::uLong value, bool littleEndian);
void Buffer__SetSByte(Buffer* __this, int offset, ::uSByte value);
void Buffer__SetSByte2(Buffer* __this, int offset, ::app::Uno::SByte2 value);
void Buffer__SetSByte4(Buffer* __this, int offset, ::app::Uno::SByte4 value);
void Buffer__SetShort(Buffer* __this, int offset, ::uShort value, bool littleEndian);
void Buffer__SetShort2(Buffer* __this, int offset, ::app::Uno::Short2 value, bool littleEndian);
void Buffer__SetShort4(Buffer* __this, int offset, ::app::Uno::Short4 value, bool littleEndian);
void Buffer__SetUInt(Buffer* __this, int offset, ::uUInt value, bool littleEndian);
void Buffer__SetULong(Buffer* __this, int offset, ::uULong value, bool littleEndian);
void Buffer__SetUShort(Buffer* __this, int offset, ::uUShort value, bool littleEndian);
void Buffer__SetUShort2(Buffer* __this, int offset, ::app::Uno::UShort2 value, bool littleEndian);
void Buffer__SetUShort4(Buffer* __this, int offset, ::app::Uno::UShort4 value, bool littleEndian);

struct Buffer : ::uObject
{
    int _offset;
    int _sizeInBytes;
    bool _isReadOnly;
    ::uStrong< ::uArray*> _data;

    void _ObjInit(::uArray* data) { Buffer___ObjInit(this, data); }
    void _ObjInit_1(::uArray* data, int offset, int sizeInBytes, bool isReadOnly) { Buffer___ObjInit_1(this, data, offset, sizeInBytes, isReadOnly); }
    void _ObjInit_2(int sizeInBytes) { Buffer___ObjInit_2(this, sizeInBytes); }
    Buffer* CreateReadOnlySubBuffer(int offset, int sizeInBytes) { return Buffer__CreateReadOnlySubBuffer(this, offset, sizeInBytes); }
    int ByteOffset() { return Buffer__get_ByteOffset(this); }
    ::uArray* GetHandle() { return Buffer__get_GetHandle(this); }
    ::uByte Item(int offset) { return Buffer__get_Item(this, offset); }
    ::uArray* SetHandle() { return Buffer__get_SetHandle(this); }
    int SizeInBytes() { return Buffer__get_SizeInBytes(this); }
    ::uByte GetByte(int offset) { return Buffer__GetByte(this, offset); }
    ::app::Uno::Byte2 GetByte2(int offset);
    ::app::Uno::Byte4 GetByte4(int offset);
    double GetDouble(int offset, bool littleEndian) { return Buffer__GetDouble(this, offset, littleEndian); }
    float GetFloat(int offset, bool littleEndian) { return Buffer__GetFloat(this, offset, littleEndian); }
    ::app::Uno::Float2 GetFloat2(int offset, bool littleEndian);
    ::app::Uno::Float3 GetFloat3(int offset, bool littleEndian);
    ::app::Uno::Float3x3 GetFloat3x3(int offset, bool littleEndian);
    ::app::Uno::Float4 GetFloat4(int offset, bool littleEndian);
    ::app::Uno::Float4x4 GetFloat4x4(int offset, bool littleEndian);
    int GetInt(int offset, bool littleEndian) { return Buffer__GetInt(this, offset, littleEndian); }
    ::app::Uno::Int2 GetInt2(int offset, bool littleEndian);
    ::app::Uno::Int3 GetInt3(int offset, bool littleEndian);
    ::app::Uno::Int4 GetInt4(int offset, bool littleEndian);
    ::uLong GetLong(int offset, bool littleEndian) { return Buffer__GetLong(this, offset, littleEndian); }
    ::uSByte GetSByte(int offset) { return Buffer__GetSByte(this, offset); }
    ::app::Uno::SByte2 GetSByte2(int offset);
    ::app::Uno::SByte4 GetSByte4(int offset);
    ::uShort GetShort(int offset, bool littleEndian) { return Buffer__GetShort(this, offset, littleEndian); }
    ::app::Uno::Short2 GetShort2(int offset, bool littleEndian);
    ::app::Uno::Short4 GetShort4(int offset, bool littleEndian);
    ::uUInt GetUInt(int offset, bool littleEndian) { return Buffer__GetUInt(this, offset, littleEndian); }
    ::uULong GetULong(int offset, bool littleEndian) { return Buffer__GetULong(this, offset, littleEndian); }
    ::uUShort GetUShort(int offset, bool littleEndian) { return Buffer__GetUShort(this, offset, littleEndian); }
    ::app::Uno::UShort2 GetUShort2(int offset, bool littleEndian);
    ::app::Uno::UShort4 GetUShort4(int offset, bool littleEndian);
    void Item(int offset, ::uByte value) { Buffer__set_Item(this, offset, value); }
    void SetByte(int offset, ::uByte value) { Buffer__SetByte(this, offset, value); }
    void SetByte2(int offset, ::app::Uno::Byte2 value);
    void SetByte4(int offset, ::app::Uno::Byte4 value);
    void SetDouble(int offset, double value, bool littleEndian) { Buffer__SetDouble(this, offset, value, littleEndian); }
    void SetFloat(int offset, float value, bool littleEndian) { Buffer__SetFloat(this, offset, value, littleEndian); }
    void SetFloat2(int offset, ::app::Uno::Float2 value, bool littleEndian);
    void SetFloat3(int offset, ::app::Uno::Float3 value, bool littleEndian);
    void SetFloat3x3(int offset, ::app::Uno::Float3x3 value, bool littleEndian);
    void SetFloat4(int offset, ::app::Uno::Float4 value, bool littleEndian);
    void SetFloat4x4(int offset, ::app::Uno::Float4x4 value, bool littleEndian);
    void SetInt(int offset, int value, bool littleEndian) { Buffer__SetInt(this, offset, value, littleEndian); }
    void SetInt2(int offset, ::app::Uno::Int2 value, bool littleEndian);
    void SetInt3(int offset, ::app::Uno::Int3 value, bool littleEndian);
    void SetInt4(int offset, ::app::Uno::Int4 value, bool littleEndian);
    void SetLong(int offset, ::uLong value, bool littleEndian) { Buffer__SetLong(this, offset, value, littleEndian); }
    void SetSByte(int offset, ::uSByte value) { Buffer__SetSByte(this, offset, value); }
    void SetSByte2(int offset, ::app::Uno::SByte2 value);
    void SetSByte4(int offset, ::app::Uno::SByte4 value);
    void SetShort(int offset, ::uShort value, bool littleEndian) { Buffer__SetShort(this, offset, value, littleEndian); }
    void SetShort2(int offset, ::app::Uno::Short2 value, bool littleEndian);
    void SetShort4(int offset, ::app::Uno::Short4 value, bool littleEndian);
    void SetUInt(int offset, ::uUInt value, bool littleEndian) { Buffer__SetUInt(this, offset, value, littleEndian); }
    void SetULong(int offset, ::uULong value, bool littleEndian) { Buffer__SetULong(this, offset, value, littleEndian); }
    void SetUShort(int offset, ::uUShort value, bool littleEndian) { Buffer__SetUShort(this, offset, value, littleEndian); }
    void SetUShort2(int offset, ::app::Uno::UShort2 value, bool littleEndian);
    void SetUShort4(int offset, ::app::Uno::UShort4 value, bool littleEndian);
};

}}

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

inline ::app::Uno::Byte2 Buffer::GetByte2(int offset) { return Buffer__GetByte2(this, offset); }
inline ::app::Uno::Byte4 Buffer::GetByte4(int offset) { return Buffer__GetByte4(this, offset); }
inline ::app::Uno::Float2 Buffer::GetFloat2(int offset, bool littleEndian) { return Buffer__GetFloat2(this, offset, littleEndian); }
inline ::app::Uno::Float3 Buffer::GetFloat3(int offset, bool littleEndian) { return Buffer__GetFloat3(this, offset, littleEndian); }
inline ::app::Uno::Float3x3 Buffer::GetFloat3x3(int offset, bool littleEndian) { return Buffer__GetFloat3x3(this, offset, littleEndian); }
inline ::app::Uno::Float4 Buffer::GetFloat4(int offset, bool littleEndian) { return Buffer__GetFloat4(this, offset, littleEndian); }
inline ::app::Uno::Float4x4 Buffer::GetFloat4x4(int offset, bool littleEndian) { return Buffer__GetFloat4x4(this, offset, littleEndian); }
inline ::app::Uno::Int2 Buffer::GetInt2(int offset, bool littleEndian) { return Buffer__GetInt2(this, offset, littleEndian); }
inline ::app::Uno::Int3 Buffer::GetInt3(int offset, bool littleEndian) { return Buffer__GetInt3(this, offset, littleEndian); }
inline ::app::Uno::Int4 Buffer::GetInt4(int offset, bool littleEndian) { return Buffer__GetInt4(this, offset, littleEndian); }
inline ::app::Uno::SByte2 Buffer::GetSByte2(int offset) { return Buffer__GetSByte2(this, offset); }
inline ::app::Uno::SByte4 Buffer::GetSByte4(int offset) { return Buffer__GetSByte4(this, offset); }
inline ::app::Uno::Short2 Buffer::GetShort2(int offset, bool littleEndian) { return Buffer__GetShort2(this, offset, littleEndian); }
inline ::app::Uno::Short4 Buffer::GetShort4(int offset, bool littleEndian) { return Buffer__GetShort4(this, offset, littleEndian); }
inline ::app::Uno::UShort2 Buffer::GetUShort2(int offset, bool littleEndian) { return Buffer__GetUShort2(this, offset, littleEndian); }
inline ::app::Uno::UShort4 Buffer::GetUShort4(int offset, bool littleEndian) { return Buffer__GetUShort4(this, offset, littleEndian); }
inline void Buffer::SetByte2(int offset, ::app::Uno::Byte2 value) { Buffer__SetByte2(this, offset, value); }
inline void Buffer::SetByte4(int offset, ::app::Uno::Byte4 value) { Buffer__SetByte4(this, offset, value); }
inline void Buffer::SetFloat2(int offset, ::app::Uno::Float2 value, bool littleEndian) { Buffer__SetFloat2(this, offset, value, littleEndian); }
inline void Buffer::SetFloat3(int offset, ::app::Uno::Float3 value, bool littleEndian) { Buffer__SetFloat3(this, offset, value, littleEndian); }
inline void Buffer::SetFloat3x3(int offset, ::app::Uno::Float3x3 value, bool littleEndian) { Buffer__SetFloat3x3(this, offset, value, littleEndian); }
inline void Buffer::SetFloat4(int offset, ::app::Uno::Float4 value, bool littleEndian) { Buffer__SetFloat4(this, offset, value, littleEndian); }
inline void Buffer::SetFloat4x4(int offset, ::app::Uno::Float4x4 value, bool littleEndian) { Buffer__SetFloat4x4(this, offset, value, littleEndian); }
inline void Buffer::SetInt2(int offset, ::app::Uno::Int2 value, bool littleEndian) { Buffer__SetInt2(this, offset, value, littleEndian); }
inline void Buffer::SetInt3(int offset, ::app::Uno::Int3 value, bool littleEndian) { Buffer__SetInt3(this, offset, value, littleEndian); }
inline void Buffer::SetInt4(int offset, ::app::Uno::Int4 value, bool littleEndian) { Buffer__SetInt4(this, offset, value, littleEndian); }
inline void Buffer::SetSByte2(int offset, ::app::Uno::SByte2 value) { Buffer__SetSByte2(this, offset, value); }
inline void Buffer::SetSByte4(int offset, ::app::Uno::SByte4 value) { Buffer__SetSByte4(this, offset, value); }
inline void Buffer::SetShort2(int offset, ::app::Uno::Short2 value, bool littleEndian) { Buffer__SetShort2(this, offset, value, littleEndian); }
inline void Buffer::SetShort4(int offset, ::app::Uno::Short4 value, bool littleEndian) { Buffer__SetShort4(this, offset, value, littleEndian); }
inline void Buffer::SetUShort2(int offset, ::app::Uno::UShort2 value, bool littleEndian) { Buffer__SetUShort2(this, offset, value, littleEndian); }
inline void Buffer::SetUShort4(int offset, ::app::Uno::UShort4 value, bool littleEndian) { Buffer__SetUShort4(this, offset, value, littleEndian); }

}}


#endif
