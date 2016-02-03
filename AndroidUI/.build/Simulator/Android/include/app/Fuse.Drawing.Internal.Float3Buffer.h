// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Drawing\0.11.3\Internal\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_FUSE_DRAWING_INTERNAL_FLOAT3_BUFFER_H__
#define __APP_FUSE_DRAWING_INTERNAL_FLOAT3_BUFFER_H__

#include <app/Fuse.Drawing.Internal.TypedBuffer.h>
#include <Uno.h>
namespace app { namespace Uno { struct Float3; } }

namespace app {
namespace Fuse {
namespace Drawing {
namespace Internal {

struct Float3Buffer;

struct Float3Buffer__uType : ::app::Fuse::Drawing::Internal::TypedBuffer__uType
{
};

Float3Buffer__uType* Float3Buffer__typeof();

void Float3Buffer___ObjInit_2(Float3Buffer* __this);
void Float3Buffer__Append(Float3Buffer* __this, double x, double y, double z);
void Float3Buffer__Append_1(Float3Buffer* __this, ::app::Uno::Float3 value);
Float3Buffer* Float3Buffer__New_3(::uStatic* __this);
void Float3Buffer__Set(Float3Buffer* __this, int offset, ::app::Uno::Float3 value);

struct Float3Buffer : ::app::Fuse::Drawing::Internal::TypedBuffer
{
    void _ObjInit_2() { Float3Buffer___ObjInit_2(this); }
    void Append(double x, double y, double z) { Float3Buffer__Append(this, x, y, z); }
    void Append_1(::app::Uno::Float3 value);
    void Set(int offset, ::app::Uno::Float3 value);
};

}}}}

#include <app/Uno.Float3.h>

namespace app {
namespace Fuse {
namespace Drawing {
namespace Internal {

inline void Float3Buffer::Append_1(::app::Uno::Float3 value) { Float3Buffer__Append_1(this, value); }
inline void Float3Buffer::Set(int offset, ::app::Uno::Float3 value) { Float3Buffer__Set(this, offset, value); }

}}}}


#endif
