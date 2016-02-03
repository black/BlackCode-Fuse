// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Drawing\0.11.3\Internal\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_FUSE_DRAWING_INTERNAL_FLOAT_BUFFER_H__
#define __APP_FUSE_DRAWING_INTERNAL_FLOAT_BUFFER_H__

#include <app/Fuse.Drawing.Internal.TypedBuffer.h>
#include <Uno.h>

namespace app {
namespace Fuse {
namespace Drawing {
namespace Internal {

struct FloatBuffer;

struct FloatBuffer__uType : ::app::Fuse::Drawing::Internal::TypedBuffer__uType
{
};

FloatBuffer__uType* FloatBuffer__typeof();

void FloatBuffer___ObjInit_2(FloatBuffer* __this);
void FloatBuffer__Append(FloatBuffer* __this, double x);
void FloatBuffer__Append_1(FloatBuffer* __this, float value);
FloatBuffer* FloatBuffer__New_3(::uStatic* __this);
void FloatBuffer__Set(FloatBuffer* __this, int offset, float value);

struct FloatBuffer : ::app::Fuse::Drawing::Internal::TypedBuffer
{
    void _ObjInit_2() { FloatBuffer___ObjInit_2(this); }
    void Append(double x) { FloatBuffer__Append(this, x); }
    void Append_1(float value) { FloatBuffer__Append_1(this, value); }
    void Set(int offset, float value) { FloatBuffer__Set(this, offset, value); }
};

}}}}


#endif
