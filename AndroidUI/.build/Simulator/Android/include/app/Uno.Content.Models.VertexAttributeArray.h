// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Content\Models\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_UNO_CONTENT_MODELS_VERTEX_ATTRIBUTE_ARRAY_H__
#define __APP_UNO_CONTENT_MODELS_VERTEX_ATTRIBUTE_ARRAY_H__

#include <app/Uno.Object.h>
#include <Uno.h>
namespace app { namespace Uno { struct Buffer; } }
namespace app { namespace Uno { struct Byte4; } }
namespace app { namespace Uno { struct Float2; } }
namespace app { namespace Uno { struct Float3; } }
namespace app { namespace Uno { struct Float4; } }
namespace app { namespace Uno { struct SByte4; } }

namespace app {
namespace Uno {
namespace Content {
namespace Models {

struct VertexAttributeArray;

struct VertexAttributeArray__uType : ::uClassType
{
};

VertexAttributeArray__uType* VertexAttributeArray__typeof();

void VertexAttributeArray___ObjInit(VertexAttributeArray* __this, ::uArray* data);
void VertexAttributeArray___ObjInit_1(VertexAttributeArray* __this, ::uArray* data);
void VertexAttributeArray___ObjInit_2(VertexAttributeArray* __this, ::uArray* data);
void VertexAttributeArray___ObjInit_3(VertexAttributeArray* __this, ::uArray* data);
void VertexAttributeArray___ObjInit_4(VertexAttributeArray* __this, ::uArray* data, bool normalized);
void VertexAttributeArray___ObjInit_5(VertexAttributeArray* __this, ::uArray* data, bool normalized);
void VertexAttributeArray___ObjInit_6(VertexAttributeArray* __this, ::uArray* data, bool normalized);
void VertexAttributeArray___ObjInit_7(VertexAttributeArray* __this, ::uArray* data, bool normalized);
void VertexAttributeArray___ObjInit_8(VertexAttributeArray* __this, int type, ::app::Uno::Buffer* buffer);
::app::Uno::Buffer* VertexAttributeArray__get_Buffer(VertexAttributeArray* __this);
int VertexAttributeArray__get_Count(VertexAttributeArray* __this);
int VertexAttributeArray__get_Type(VertexAttributeArray* __this);
::app::Uno::Byte4 VertexAttributeArray__GetByte4(VertexAttributeArray* __this, int index);
::app::Uno::Byte4 VertexAttributeArray__GetByte4Normalized(VertexAttributeArray* __this, int index);
::app::Uno::Float4 VertexAttributeArray__GetFloat4(VertexAttributeArray* __this, int index);
VertexAttributeArray* VertexAttributeArray__New_1(::uStatic* __this, ::uArray* data);
VertexAttributeArray* VertexAttributeArray__New_2(::uStatic* __this, ::uArray* data);
VertexAttributeArray* VertexAttributeArray__New_3(::uStatic* __this, ::uArray* data);
VertexAttributeArray* VertexAttributeArray__New_4(::uStatic* __this, ::uArray* data);
VertexAttributeArray* VertexAttributeArray__New_5(::uStatic* __this, ::uArray* data, bool normalized);
VertexAttributeArray* VertexAttributeArray__New_6(::uStatic* __this, ::uArray* data, bool normalized);
VertexAttributeArray* VertexAttributeArray__New_7(::uStatic* __this, ::uArray* data, bool normalized);
VertexAttributeArray* VertexAttributeArray__New_8(::uStatic* __this, ::uArray* data, bool normalized);
VertexAttributeArray* VertexAttributeArray__New_9(::uStatic* __this, int type, ::app::Uno::Buffer* buffer);

struct VertexAttributeArray : ::uObject
{
    ::uStrong< ::app::Uno::Buffer*> _buffer;
    int _type;

    void _ObjInit(::uArray* data) { VertexAttributeArray___ObjInit(this, data); }
    void _ObjInit_1(::uArray* data) { VertexAttributeArray___ObjInit_1(this, data); }
    void _ObjInit_2(::uArray* data) { VertexAttributeArray___ObjInit_2(this, data); }
    void _ObjInit_3(::uArray* data) { VertexAttributeArray___ObjInit_3(this, data); }
    void _ObjInit_4(::uArray* data, bool normalized) { VertexAttributeArray___ObjInit_4(this, data, normalized); }
    void _ObjInit_5(::uArray* data, bool normalized) { VertexAttributeArray___ObjInit_5(this, data, normalized); }
    void _ObjInit_6(::uArray* data, bool normalized) { VertexAttributeArray___ObjInit_6(this, data, normalized); }
    void _ObjInit_7(::uArray* data, bool normalized) { VertexAttributeArray___ObjInit_7(this, data, normalized); }
    void _ObjInit_8(int type, ::app::Uno::Buffer* buffer) { VertexAttributeArray___ObjInit_8(this, type, buffer); }
    ::app::Uno::Buffer* Buffer() { return VertexAttributeArray__get_Buffer(this); }
    int Count() { return VertexAttributeArray__get_Count(this); }
    int Type() { return VertexAttributeArray__get_Type(this); }
    ::app::Uno::Byte4 GetByte4(int index);
    ::app::Uno::Byte4 GetByte4Normalized(int index);
    ::app::Uno::Float4 GetFloat4(int index);
};

}}}}

#include <app/Uno.Byte4.h>
#include <app/Uno.Float4.h>

namespace app {
namespace Uno {
namespace Content {
namespace Models {

inline ::app::Uno::Byte4 VertexAttributeArray::GetByte4(int index) { return VertexAttributeArray__GetByte4(this, index); }
inline ::app::Uno::Byte4 VertexAttributeArray::GetByte4Normalized(int index) { return VertexAttributeArray__GetByte4Normalized(this, index); }
inline ::app::Uno::Float4 VertexAttributeArray::GetFloat4(int index) { return VertexAttributeArray__GetFloat4(this, index); }

}}}}


#endif
