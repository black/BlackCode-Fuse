// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Drawing\0.11.3\Internal\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_FUSE_DRAWING_INTERNAL_U_SHORT_BUFFER_H__
#define __APP_FUSE_DRAWING_INTERNAL_U_SHORT_BUFFER_H__

#include <app/Fuse.Drawing.Internal.TypedBuffer.h>
#include <Uno.h>

namespace app {
namespace Fuse {
namespace Drawing {
namespace Internal {

struct UShortBuffer;

struct UShortBuffer__uType : ::app::Fuse::Drawing::Internal::TypedBuffer__uType
{
};

UShortBuffer__uType* UShortBuffer__typeof();

void UShortBuffer___ObjInit_2(UShortBuffer* __this);
void UShortBuffer__Append(UShortBuffer* __this, int value);
void UShortBuffer__Append_1(UShortBuffer* __this, ::uUShort value);
void UShortBuffer__AppendTri(UShortBuffer* __this, int a, int b, int c);
UShortBuffer* UShortBuffer__New_3(::uStatic* __this);
void UShortBuffer__Set(UShortBuffer* __this, int offset, ::uUShort value);

struct UShortBuffer : ::app::Fuse::Drawing::Internal::TypedBuffer
{
    void _ObjInit_2() { UShortBuffer___ObjInit_2(this); }
    void Append(int value) { UShortBuffer__Append(this, value); }
    void Append_1(::uUShort value) { UShortBuffer__Append_1(this, value); }
    void AppendTri(int a, int b, int c) { UShortBuffer__AppendTri(this, a, b, c); }
    void Set(int offset, ::uUShort value) { UShortBuffer__Set(this, offset, value); }
};

}}}}


#endif
