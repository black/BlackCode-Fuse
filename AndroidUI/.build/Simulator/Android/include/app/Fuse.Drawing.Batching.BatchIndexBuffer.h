// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Drawing.Batching\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_FUSE_DRAWING_BATCHING_BATCH_INDEX_BUFFER_H__
#define __APP_FUSE_DRAWING_BATCHING_BATCH_INDEX_BUFFER_H__

#include <app/Uno.Object.h>
#include <Uno.h>
namespace app { namespace Uno { namespace Graphics { struct IndexBuffer; } } }
namespace app { namespace Uno { struct Buffer; } }

namespace app {
namespace Fuse {
namespace Drawing {
namespace Batching {

struct BatchIndexBuffer;

struct BatchIndexBuffer__uType : ::uClassType
{
};

BatchIndexBuffer__uType* BatchIndexBuffer__typeof();

void BatchIndexBuffer___ObjInit(BatchIndexBuffer* __this, int type, ::app::Uno::Buffer* data);
void BatchIndexBuffer___ObjInit_1(BatchIndexBuffer* __this, int type, int maxIndices, bool staticBatch);
void BatchIndexBuffer__Flush(BatchIndexBuffer* __this);
::app::Uno::Buffer* BatchIndexBuffer__get_Buffer(BatchIndexBuffer* __this);
int BatchIndexBuffer__get_DataType(BatchIndexBuffer* __this);
::app::Uno::Graphics::IndexBuffer* BatchIndexBuffer__get_IndexBuffer(BatchIndexBuffer* __this);
int BatchIndexBuffer__get_Position(BatchIndexBuffer* __this);
int BatchIndexBuffer__get_StrideInBytes(BatchIndexBuffer* __this);
void BatchIndexBuffer__Invalidate(BatchIndexBuffer* __this);
BatchIndexBuffer* BatchIndexBuffer__New_1(::uStatic* __this, int type, ::app::Uno::Buffer* data);
BatchIndexBuffer* BatchIndexBuffer__New_2(::uStatic* __this, int type, int maxIndices, bool staticBatch);
void BatchIndexBuffer__set_DataType(BatchIndexBuffer* __this, int value);
void BatchIndexBuffer__set_Position(BatchIndexBuffer* __this, int value);
void BatchIndexBuffer__Write(BatchIndexBuffer* __this, ::uByte value);
void BatchIndexBuffer__Write_1(BatchIndexBuffer* __this, ::uUShort value);

struct BatchIndexBuffer : ::uObject
{
    int dataType;
    int maxIndices;
    int usage;
    ::uStrong< ::app::Uno::Buffer*> buf;
    int _position;
    ::uStrong< ::app::Uno::Graphics::IndexBuffer*> ibo;
    bool isDirty;

    void _ObjInit(int type, ::app::Uno::Buffer* data) { BatchIndexBuffer___ObjInit(this, type, data); }
    void _ObjInit_1(int type, int maxIndices, bool staticBatch) { BatchIndexBuffer___ObjInit_1(this, type, maxIndices, staticBatch); }
    void Flush() { BatchIndexBuffer__Flush(this); }
    ::app::Uno::Buffer* Buffer() { return BatchIndexBuffer__get_Buffer(this); }
    int DataType() { return BatchIndexBuffer__get_DataType(this); }
    ::app::Uno::Graphics::IndexBuffer* IndexBuffer() { return BatchIndexBuffer__get_IndexBuffer(this); }
    int Position() { return BatchIndexBuffer__get_Position(this); }
    int StrideInBytes() { return BatchIndexBuffer__get_StrideInBytes(this); }
    void Invalidate() { BatchIndexBuffer__Invalidate(this); }
    void DataType(int value) { BatchIndexBuffer__set_DataType(this, value); }
    void Position(int value) { BatchIndexBuffer__set_Position(this, value); }
    void Write(::uByte value) { BatchIndexBuffer__Write(this, value); }
    void Write_1(::uUShort value) { BatchIndexBuffer__Write_1(this, value); }
};

}}}}


#endif
