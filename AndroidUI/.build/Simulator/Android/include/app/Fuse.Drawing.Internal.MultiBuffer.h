// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Drawing\0.11.3\Internal\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_FUSE_DRAWING_INTERNAL_MULTI_BUFFER_H__
#define __APP_FUSE_DRAWING_INTERNAL_MULTI_BUFFER_H__

#include <app/Fuse.Drawing.Internal.TypedBuffer.h>
#include <Uno.h>
namespace app { namespace Fuse { namespace Drawing { namespace Internal { struct MultiBuffer_Field; } } } }
namespace app { namespace Fuse { namespace Drawing { namespace Internal { struct MultiBuffer_Setter; } } } }
namespace app { namespace Uno { namespace Collections { struct List__Fuse_Drawing_Internal_MultiBuffer_Field; } } }
namespace app { namespace Uno { struct Float2; } }
namespace app { namespace Uno { struct Float3; } }
namespace app { namespace Uno { struct Float4; } }

namespace app {
namespace Fuse {
namespace Drawing {
namespace Internal {

struct MultiBuffer;

struct MultiBuffer__uType : ::app::Fuse::Drawing::Internal::TypedBuffer__uType
{
};

MultiBuffer__uType* MultiBuffer__typeof();

void MultiBuffer___ObjInit_2(MultiBuffer* __this);
::app::Fuse::Drawing::Internal::MultiBuffer_Setter* MultiBuffer__Add(MultiBuffer* __this);
::app::Fuse::Drawing::Internal::MultiBuffer_Field* MultiBuffer__Alloc(MultiBuffer* __this, int type, int size);
::app::Fuse::Drawing::Internal::MultiBuffer_Field* MultiBuffer__AllocFloat(MultiBuffer* __this);
::app::Fuse::Drawing::Internal::MultiBuffer_Field* MultiBuffer__AllocFloat2(MultiBuffer* __this);
::app::Fuse::Drawing::Internal::MultiBuffer_Field* MultiBuffer__AllocFloat3(MultiBuffer* __this);
::app::Fuse::Drawing::Internal::MultiBuffer_Field* MultiBuffer__AllocFloat4(MultiBuffer* __this);
::app::Fuse::Drawing::Internal::MultiBuffer_Field* MultiBuffer__AllocUShort(MultiBuffer* __this);
void MultiBuffer__AppendByte(MultiBuffer* __this, ::uByte value);
void MultiBuffer__AppendByteNF(MultiBuffer* __this, float value);
void MultiBuffer__AppendEnd(MultiBuffer* __this);
void MultiBuffer__AppendFloat(MultiBuffer* __this, double value);
void MultiBuffer__AppendFloat2(MultiBuffer* __this, double x, double y);
void MultiBuffer__AppendFloat2_1(MultiBuffer* __this, ::app::Uno::Float2 value);
void MultiBuffer__AppendFloat3(MultiBuffer* __this, double x, double y, double z);
void MultiBuffer__AppendFloat3_1(MultiBuffer* __this, ::app::Uno::Float3 value);
void MultiBuffer__AppendFloat4(MultiBuffer* __this, ::app::Uno::Float4 value);
void MultiBuffer__AppendOpen(MultiBuffer* __this);
void MultiBuffer__AppendUShort(MultiBuffer* __this, int value);
void MultiBuffer__AppendUShort_1(MultiBuffer* __this, ::uUShort value);
void MultiBuffer__AppendUShortNF(MultiBuffer* __this, float value);
void MultiBuffer__EndAlloc(MultiBuffer* __this);
int MultiBuffer__get_Stride(MultiBuffer* __this);
MultiBuffer* MultiBuffer__New_3(::uStatic* __this);

struct MultiBuffer : ::app::Fuse::Drawing::Internal::TypedBuffer
{
    ::uStrong< ::app::Uno::Collections::List__Fuse_Drawing_Internal_MultiBuffer_Field*> fields;
    int offset;

    void _ObjInit_2() { MultiBuffer___ObjInit_2(this); }
    ::app::Fuse::Drawing::Internal::MultiBuffer_Setter* Add() { return MultiBuffer__Add(this); }
    ::app::Fuse::Drawing::Internal::MultiBuffer_Field* Alloc(int type, int size) { return MultiBuffer__Alloc(this, type, size); }
    ::app::Fuse::Drawing::Internal::MultiBuffer_Field* AllocFloat() { return MultiBuffer__AllocFloat(this); }
    ::app::Fuse::Drawing::Internal::MultiBuffer_Field* AllocFloat2() { return MultiBuffer__AllocFloat2(this); }
    ::app::Fuse::Drawing::Internal::MultiBuffer_Field* AllocFloat3() { return MultiBuffer__AllocFloat3(this); }
    ::app::Fuse::Drawing::Internal::MultiBuffer_Field* AllocFloat4() { return MultiBuffer__AllocFloat4(this); }
    ::app::Fuse::Drawing::Internal::MultiBuffer_Field* AllocUShort() { return MultiBuffer__AllocUShort(this); }
    void AppendByte(::uByte value) { MultiBuffer__AppendByte(this, value); }
    void AppendByteNF(float value) { MultiBuffer__AppendByteNF(this, value); }
    void AppendEnd() { MultiBuffer__AppendEnd(this); }
    void AppendFloat(double value) { MultiBuffer__AppendFloat(this, value); }
    void AppendFloat2(double x, double y) { MultiBuffer__AppendFloat2(this, x, y); }
    void AppendFloat2_1(::app::Uno::Float2 value);
    void AppendFloat3(double x, double y, double z) { MultiBuffer__AppendFloat3(this, x, y, z); }
    void AppendFloat3_1(::app::Uno::Float3 value);
    void AppendFloat4(::app::Uno::Float4 value);
    void AppendOpen() { MultiBuffer__AppendOpen(this); }
    void AppendUShort(int value) { MultiBuffer__AppendUShort(this, value); }
    void AppendUShort_1(::uUShort value) { MultiBuffer__AppendUShort_1(this, value); }
    void AppendUShortNF(float value) { MultiBuffer__AppendUShortNF(this, value); }
    void EndAlloc() { MultiBuffer__EndAlloc(this); }
    int Stride() { return MultiBuffer__get_Stride(this); }
};

}}}}

#include <app/Uno.Float2.h>
#include <app/Uno.Float3.h>
#include <app/Uno.Float4.h>

namespace app {
namespace Fuse {
namespace Drawing {
namespace Internal {

inline void MultiBuffer::AppendFloat2_1(::app::Uno::Float2 value) { MultiBuffer__AppendFloat2_1(this, value); }
inline void MultiBuffer::AppendFloat3_1(::app::Uno::Float3 value) { MultiBuffer__AppendFloat3_1(this, value); }
inline void MultiBuffer::AppendFloat4(::app::Uno::Float4 value) { MultiBuffer__AppendFloat4(this, value); }

}}}}


#endif
