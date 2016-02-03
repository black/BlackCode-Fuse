// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Drawing.Batching\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_FUSE_DRAWING_BATCHING_BATCH_VERTEX_BUFFER_H__
#define __APP_FUSE_DRAWING_BATCHING_BATCH_VERTEX_BUFFER_H__

#include <app/Uno.Object.h>
#include <Uno.h>
namespace app { namespace Uno { namespace Graphics { struct VertexBuffer; } } }
namespace app { namespace Uno { struct Buffer; } }
namespace app { namespace Uno { struct Byte2; } }
namespace app { namespace Uno { struct Byte4; } }
namespace app { namespace Uno { struct Float2; } }
namespace app { namespace Uno { struct Float3; } }
namespace app { namespace Uno { struct Float4; } }
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
namespace Fuse {
namespace Drawing {
namespace Batching {

struct BatchVertexBuffer;

struct BatchVertexBuffer__uType : ::uClassType
{
};

BatchVertexBuffer__uType* BatchVertexBuffer__typeof();

void BatchVertexBuffer___ObjInit(BatchVertexBuffer* __this, int type, ::app::Uno::Buffer* data);
void BatchVertexBuffer___ObjInit_1(BatchVertexBuffer* __this, int type, int maxVertices, bool staticBatch);
void BatchVertexBuffer__Flush(BatchVertexBuffer* __this);
::app::Uno::Buffer* BatchVertexBuffer__get_Buffer(BatchVertexBuffer* __this);
int BatchVertexBuffer__get_DataType(BatchVertexBuffer* __this);
int BatchVertexBuffer__get_Position(BatchVertexBuffer* __this);
int BatchVertexBuffer__get_StrideInBytes(BatchVertexBuffer* __this);
::app::Uno::Graphics::VertexBuffer* BatchVertexBuffer__get_VertexBuffer(BatchVertexBuffer* __this);
void BatchVertexBuffer__Invalidate(BatchVertexBuffer* __this);
BatchVertexBuffer* BatchVertexBuffer__New_1(::uStatic* __this, int type, ::app::Uno::Buffer* data);
BatchVertexBuffer* BatchVertexBuffer__New_2(::uStatic* __this, int type, int maxVertices, bool staticBatch);
void BatchVertexBuffer__set_DataType(BatchVertexBuffer* __this, int value);
void BatchVertexBuffer__set_Position(BatchVertexBuffer* __this, int value);
void BatchVertexBuffer__Write(BatchVertexBuffer* __this, ::uByte value);
void BatchVertexBuffer__Write_1(BatchVertexBuffer* __this, ::app::Uno::Byte2 value);
void BatchVertexBuffer__Write_10(BatchVertexBuffer* __this, ::uSByte value);
void BatchVertexBuffer__Write_11(BatchVertexBuffer* __this, ::app::Uno::SByte2 value);
void BatchVertexBuffer__Write_12(BatchVertexBuffer* __this, ::app::Uno::SByte4 value);
void BatchVertexBuffer__Write_13(BatchVertexBuffer* __this, ::uShort value);
void BatchVertexBuffer__Write_14(BatchVertexBuffer* __this, ::app::Uno::Short2 value);
void BatchVertexBuffer__Write_15(BatchVertexBuffer* __this, ::app::Uno::Short4 value);
void BatchVertexBuffer__Write_16(BatchVertexBuffer* __this, ::uUInt value);
void BatchVertexBuffer__Write_17(BatchVertexBuffer* __this, ::uUShort value);
void BatchVertexBuffer__Write_18(BatchVertexBuffer* __this, ::app::Uno::UShort2 value);
void BatchVertexBuffer__Write_19(BatchVertexBuffer* __this, ::app::Uno::UShort4 value);
void BatchVertexBuffer__Write_2(BatchVertexBuffer* __this, ::app::Uno::Byte4 value);
void BatchVertexBuffer__Write_3(BatchVertexBuffer* __this, ::app::Uno::Float2 value);
void BatchVertexBuffer__Write_4(BatchVertexBuffer* __this, ::app::Uno::Float3 value);
void BatchVertexBuffer__Write_5(BatchVertexBuffer* __this, ::app::Uno::Float4 value);
void BatchVertexBuffer__Write_6(BatchVertexBuffer* __this, int value);
void BatchVertexBuffer__Write_7(BatchVertexBuffer* __this, ::app::Uno::Int2 value);
void BatchVertexBuffer__Write_8(BatchVertexBuffer* __this, ::app::Uno::Int3 value);
void BatchVertexBuffer__Write_9(BatchVertexBuffer* __this, ::app::Uno::Int4 value);

struct BatchVertexBuffer : ::uObject
{
    int dataType;
    int maxVertices;
    int usage;
    ::uStrong< ::app::Uno::Buffer*> buf;
    ::uStrong< ::app::Uno::Graphics::VertexBuffer*> vbo;
    int _position;
    bool isDirty;

    void _ObjInit(int type, ::app::Uno::Buffer* data) { BatchVertexBuffer___ObjInit(this, type, data); }
    void _ObjInit_1(int type, int maxVertices, bool staticBatch) { BatchVertexBuffer___ObjInit_1(this, type, maxVertices, staticBatch); }
    void Flush() { BatchVertexBuffer__Flush(this); }
    ::app::Uno::Buffer* Buffer() { return BatchVertexBuffer__get_Buffer(this); }
    int DataType() { return BatchVertexBuffer__get_DataType(this); }
    int Position() { return BatchVertexBuffer__get_Position(this); }
    int StrideInBytes() { return BatchVertexBuffer__get_StrideInBytes(this); }
    ::app::Uno::Graphics::VertexBuffer* VertexBuffer() { return BatchVertexBuffer__get_VertexBuffer(this); }
    void Invalidate() { BatchVertexBuffer__Invalidate(this); }
    void DataType(int value) { BatchVertexBuffer__set_DataType(this, value); }
    void Position(int value) { BatchVertexBuffer__set_Position(this, value); }
    void Write(::uByte value) { BatchVertexBuffer__Write(this, value); }
    void Write_1(::app::Uno::Byte2 value);
    void Write_10(::uSByte value) { BatchVertexBuffer__Write_10(this, value); }
    void Write_11(::app::Uno::SByte2 value);
    void Write_12(::app::Uno::SByte4 value);
    void Write_13(::uShort value) { BatchVertexBuffer__Write_13(this, value); }
    void Write_14(::app::Uno::Short2 value);
    void Write_15(::app::Uno::Short4 value);
    void Write_16(::uUInt value) { BatchVertexBuffer__Write_16(this, value); }
    void Write_17(::uUShort value) { BatchVertexBuffer__Write_17(this, value); }
    void Write_18(::app::Uno::UShort2 value);
    void Write_19(::app::Uno::UShort4 value);
    void Write_2(::app::Uno::Byte4 value);
    void Write_3(::app::Uno::Float2 value);
    void Write_4(::app::Uno::Float3 value);
    void Write_5(::app::Uno::Float4 value);
    void Write_6(int value) { BatchVertexBuffer__Write_6(this, value); }
    void Write_7(::app::Uno::Int2 value);
    void Write_8(::app::Uno::Int3 value);
    void Write_9(::app::Uno::Int4 value);
};

}}}}

#include <app/Uno.Byte2.h>
#include <app/Uno.Byte4.h>
#include <app/Uno.Float2.h>
#include <app/Uno.Float3.h>
#include <app/Uno.Float4.h>
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
namespace Fuse {
namespace Drawing {
namespace Batching {

inline void BatchVertexBuffer::Write_1(::app::Uno::Byte2 value) { BatchVertexBuffer__Write_1(this, value); }
inline void BatchVertexBuffer::Write_11(::app::Uno::SByte2 value) { BatchVertexBuffer__Write_11(this, value); }
inline void BatchVertexBuffer::Write_12(::app::Uno::SByte4 value) { BatchVertexBuffer__Write_12(this, value); }
inline void BatchVertexBuffer::Write_14(::app::Uno::Short2 value) { BatchVertexBuffer__Write_14(this, value); }
inline void BatchVertexBuffer::Write_15(::app::Uno::Short4 value) { BatchVertexBuffer__Write_15(this, value); }
inline void BatchVertexBuffer::Write_18(::app::Uno::UShort2 value) { BatchVertexBuffer__Write_18(this, value); }
inline void BatchVertexBuffer::Write_19(::app::Uno::UShort4 value) { BatchVertexBuffer__Write_19(this, value); }
inline void BatchVertexBuffer::Write_2(::app::Uno::Byte4 value) { BatchVertexBuffer__Write_2(this, value); }
inline void BatchVertexBuffer::Write_3(::app::Uno::Float2 value) { BatchVertexBuffer__Write_3(this, value); }
inline void BatchVertexBuffer::Write_4(::app::Uno::Float3 value) { BatchVertexBuffer__Write_4(this, value); }
inline void BatchVertexBuffer::Write_5(::app::Uno::Float4 value) { BatchVertexBuffer__Write_5(this, value); }
inline void BatchVertexBuffer::Write_7(::app::Uno::Int2 value) { BatchVertexBuffer__Write_7(this, value); }
inline void BatchVertexBuffer::Write_8(::app::Uno::Int3 value) { BatchVertexBuffer__Write_8(this, value); }
inline void BatchVertexBuffer::Write_9(::app::Uno::Int4 value) { BatchVertexBuffer__Write_9(this, value); }

}}}}


#endif
