// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Drawing\0.11.3\Internal\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_FUSE_DRAWING_INTERNAL_FLOAT2_BUFFER_H__
#define __APP_FUSE_DRAWING_INTERNAL_FLOAT2_BUFFER_H__

#include <app/Fuse.Drawing.Internal.TypedBuffer.h>
#include <Uno.h>
namespace app { namespace Uno { struct Float2; } }

namespace app {
namespace Fuse {
namespace Drawing {
namespace Internal {

struct Float2Buffer;

struct Float2Buffer__uType : ::app::Fuse::Drawing::Internal::TypedBuffer__uType
{
};

Float2Buffer__uType* Float2Buffer__typeof();

void Float2Buffer___ObjInit_2(Float2Buffer* __this);
void Float2Buffer__Append(Float2Buffer* __this, double x, double y);
void Float2Buffer__Append_1(Float2Buffer* __this, ::app::Uno::Float2 value);
Float2Buffer* Float2Buffer__New_3(::uStatic* __this);
void Float2Buffer__Set(Float2Buffer* __this, int offset, ::app::Uno::Float2 value);

struct Float2Buffer : ::app::Fuse::Drawing::Internal::TypedBuffer
{
    void _ObjInit_2() { Float2Buffer___ObjInit_2(this); }
    void Append(double x, double y) { Float2Buffer__Append(this, x, y); }
    void Append_1(::app::Uno::Float2 value);
    void Set(int offset, ::app::Uno::Float2 value);
};

}}}}

#include <app/Uno.Float2.h>

namespace app {
namespace Fuse {
namespace Drawing {
namespace Internal {

inline void Float2Buffer::Append_1(::app::Uno::Float2 value) { Float2Buffer__Append_1(this, value); }
inline void Float2Buffer::Set(int offset, ::app::Uno::Float2 value) { Float2Buffer__Set(this, offset, value); }

}}}}


#endif
