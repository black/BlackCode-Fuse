#include <app/Fuse.Drawing.Internal.Float2Buffer.h>
#include <app/Fuse.Drawing.Internal.Float3Buffer.h>
#include <app/Fuse.Drawing.Internal.FloatBuffer.h>
#include <app/Fuse.Drawing.Internal.MultiBuffer.h>
#include <app/Fuse.Drawing.Internal.MultiBuffer_Field.h>
#include <app/Fuse.Drawing.Internal.MultiBuffer_Setter.h>
#include <app/Fuse.Drawing.Internal.TypedBuffer.h>
#include <app/Fuse.Drawing.Internal.UShortBuffer.h>
#include <app/Uno.Bool.h>
#include <app/Uno.Buffer.h>
#include <app/Uno.Byte.h>
#include <app/Uno.Collections.List__Fuse_Drawing_Internal_MultiBuffer_Field.h>
#include <app/Uno.Double.h>
#include <app/Uno.Float.h>
#include <app/Uno.Graphics.BufferUsage.h>
#include <app/Uno.Graphics.DeviceBuffer.h>
#include <app/Uno.Graphics.IndexBuffer.h>
#include <app/Uno.Graphics.VertexAttributeType.h>
#include <app/Uno.Graphics.VertexBuffer.h>
#include <app/Uno.Int.h>
#include <app/Uno.Math.h>
#include <app/Uno.Short.h>
#include <app/Uno.UShort.h>

namespace app {
namespace Fuse {
namespace Drawing {
namespace Internal {

// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Drawing\0.11.3\Internal\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

Float2Buffer__uType* Float2Buffer__typeof()
{
    static ::uStaticStrong<Float2Buffer__uType*> type;
    if (type != NULL) return type;

    type = (Float2Buffer__uType*)::uAllocClassType(sizeof(Float2Buffer__uType), "Fuse.Drawing.Internal.Float2Buffer", false, 0, 0, 0);

    type->SetBaseType(::app::Fuse::Drawing::Internal::TypedBuffer__typeof());

    type->SetFunctions(4,
        ::uNewFunctionVoid("Append", Float2Buffer__Append, 0, false, ::app::Uno::Double__typeof(), ::app::Uno::Double__typeof()),
        ::uNewFunctionVoid("Append", Float2Buffer__Append_1, 0, false, ::app::Uno::Float2__typeof()),
        ::uNewFunction(".ctor", Float2Buffer__New_3, 0, true, Float2Buffer__typeof()),
        ::uNewFunctionVoid("Set", Float2Buffer__Set, 0, false, ::app::Uno::Int__typeof(), ::app::Uno::Float2__typeof()));

    ::uRegisterType(type);
    return type;
}

void Float2Buffer___ObjInit_2(Float2Buffer* __this)
{
    ::app::Fuse::Drawing::Internal::TypedBuffer___ObjInit_1(__this, 8, 32);
}

void Float2Buffer__Append(Float2Buffer* __this, double x, double y)
{
    __this->Append_1(::app::Uno::Float2__New_2(NULL, (float)x, (float)y));
}

void Float2Buffer__Append_1(Float2Buffer* __this, ::app::Uno::Float2 value)
{
    __this->CheckGrow();
    __this->Set(__this->size++, value);
}

Float2Buffer* Float2Buffer__New_3(::uStatic* __this)
{
    Float2Buffer* inst = (Float2Buffer*)::uAllocObject(sizeof(Float2Buffer), Float2Buffer__typeof());
    inst->_ObjInit_2();
    return inst;
}

void Float2Buffer__Set(Float2Buffer* __this, int offset, ::app::Uno::Float2 value)
{
    ::uPtr< ::app::Uno::Buffer*>(__this->back)->SetFloat2(offset * __this->typeSize, value, true);
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Drawing\0.11.3\Internal\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

Float3Buffer__uType* Float3Buffer__typeof()
{
    static ::uStaticStrong<Float3Buffer__uType*> type;
    if (type != NULL) return type;

    type = (Float3Buffer__uType*)::uAllocClassType(sizeof(Float3Buffer__uType), "Fuse.Drawing.Internal.Float3Buffer", false, 0, 0, 0);

    type->SetBaseType(::app::Fuse::Drawing::Internal::TypedBuffer__typeof());

    type->SetFunctions(4,
        ::uNewFunctionVoid("Append", Float3Buffer__Append, 0, false, ::app::Uno::Double__typeof(), ::app::Uno::Double__typeof(), ::app::Uno::Double__typeof()),
        ::uNewFunctionVoid("Append", Float3Buffer__Append_1, 0, false, ::app::Uno::Float3__typeof()),
        ::uNewFunction(".ctor", Float3Buffer__New_3, 0, true, Float3Buffer__typeof()),
        ::uNewFunctionVoid("Set", Float3Buffer__Set, 0, false, ::app::Uno::Int__typeof(), ::app::Uno::Float3__typeof()));

    ::uRegisterType(type);
    return type;
}

void Float3Buffer___ObjInit_2(Float3Buffer* __this)
{
    ::app::Fuse::Drawing::Internal::TypedBuffer___ObjInit_1(__this, 12, 32);
}

void Float3Buffer__Append(Float3Buffer* __this, double x, double y, double z)
{
    __this->Append_1(::app::Uno::Float3__New_2(NULL, (float)x, (float)y, (float)z));
}

void Float3Buffer__Append_1(Float3Buffer* __this, ::app::Uno::Float3 value)
{
    __this->CheckGrow();
    __this->Set(__this->size++, value);
}

Float3Buffer* Float3Buffer__New_3(::uStatic* __this)
{
    Float3Buffer* inst = (Float3Buffer*)::uAllocObject(sizeof(Float3Buffer), Float3Buffer__typeof());
    inst->_ObjInit_2();
    return inst;
}

void Float3Buffer__Set(Float3Buffer* __this, int offset, ::app::Uno::Float3 value)
{
    ::uPtr< ::app::Uno::Buffer*>(__this->back)->SetFloat3(offset * __this->typeSize, value, true);
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Drawing\0.11.3\Internal\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

FloatBuffer__uType* FloatBuffer__typeof()
{
    static ::uStaticStrong<FloatBuffer__uType*> type;
    if (type != NULL) return type;

    type = (FloatBuffer__uType*)::uAllocClassType(sizeof(FloatBuffer__uType), "Fuse.Drawing.Internal.FloatBuffer", false, 0, 0, 0);

    type->SetBaseType(::app::Fuse::Drawing::Internal::TypedBuffer__typeof());

    type->SetFunctions(4,
        ::uNewFunctionVoid("Append", FloatBuffer__Append, 0, false, ::app::Uno::Double__typeof()),
        ::uNewFunctionVoid("Append", FloatBuffer__Append_1, 0, false, ::app::Uno::Float__typeof()),
        ::uNewFunction(".ctor", FloatBuffer__New_3, 0, true, FloatBuffer__typeof()),
        ::uNewFunctionVoid("Set", FloatBuffer__Set, 0, false, ::app::Uno::Int__typeof(), ::app::Uno::Float__typeof()));

    ::uRegisterType(type);
    return type;
}

void FloatBuffer___ObjInit_2(FloatBuffer* __this)
{
    ::app::Fuse::Drawing::Internal::TypedBuffer___ObjInit_1(__this, 4, 32);
}

void FloatBuffer__Append(FloatBuffer* __this, double x)
{
    __this->Append_1((float)x);
}

void FloatBuffer__Append_1(FloatBuffer* __this, float value)
{
    __this->CheckGrow();
    __this->Set(__this->size++, value);
}

FloatBuffer* FloatBuffer__New_3(::uStatic* __this)
{
    FloatBuffer* inst = (FloatBuffer*)::uAllocObject(sizeof(FloatBuffer), FloatBuffer__typeof());
    inst->_ObjInit_2();
    return inst;
}

void FloatBuffer__Set(FloatBuffer* __this, int offset, float value)
{
    ::uPtr< ::app::Uno::Buffer*>(__this->back)->SetFloat(offset * __this->typeSize, value, true);
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Drawing\0.11.3\Internal\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

MultiBuffer__uType* MultiBuffer__typeof()
{
    static ::uStaticStrong<MultiBuffer__uType*> type;
    if (type != NULL) return type;

    type = (MultiBuffer__uType*)::uAllocClassType(sizeof(MultiBuffer__uType), "Fuse.Drawing.Internal.MultiBuffer", false, 0, 1, 0);

    type->SetBaseType(::app::Fuse::Drawing::Internal::TypedBuffer__typeof());

    type->SetStrongRefs(
        "fields", offsetof(MultiBuffer, fields));

    type->SetFields(2,
        ::uNewField("fields", NULL, offsetof(MultiBuffer, fields), ::app::Uno::Collections::List__Fuse_Drawing_Internal_MultiBuffer_Field__typeof()),
        ::uNewField("offset", NULL, offsetof(MultiBuffer, offset), ::app::Uno::Int__typeof()));

    type->SetFunctions(23,
        ::uNewFunction("Add", MultiBuffer__Add, 0, false, ::app::Fuse::Drawing::Internal::MultiBuffer_Setter__typeof()),
        ::uNewFunction("Alloc", MultiBuffer__Alloc, 0, false, ::app::Fuse::Drawing::Internal::MultiBuffer_Field__typeof(), ::app::Uno::Graphics::VertexAttributeType__typeof(), ::app::Uno::Int__typeof()),
        ::uNewFunction("AllocFloat", MultiBuffer__AllocFloat, 0, false, ::app::Fuse::Drawing::Internal::MultiBuffer_Field__typeof()),
        ::uNewFunction("AllocFloat2", MultiBuffer__AllocFloat2, 0, false, ::app::Fuse::Drawing::Internal::MultiBuffer_Field__typeof()),
        ::uNewFunction("AllocFloat3", MultiBuffer__AllocFloat3, 0, false, ::app::Fuse::Drawing::Internal::MultiBuffer_Field__typeof()),
        ::uNewFunction("AllocFloat4", MultiBuffer__AllocFloat4, 0, false, ::app::Fuse::Drawing::Internal::MultiBuffer_Field__typeof()),
        ::uNewFunction("AllocUShort", MultiBuffer__AllocUShort, 0, false, ::app::Fuse::Drawing::Internal::MultiBuffer_Field__typeof()),
        ::uNewFunctionVoid("AppendByte", MultiBuffer__AppendByte, 0, false, ::app::Uno::Byte__typeof()),
        ::uNewFunctionVoid("AppendByteNF", MultiBuffer__AppendByteNF, 0, false, ::app::Uno::Float__typeof()),
        ::uNewFunctionVoid("AppendEnd", MultiBuffer__AppendEnd, 0, false),
        ::uNewFunctionVoid("AppendFloat", MultiBuffer__AppendFloat, 0, false, ::app::Uno::Double__typeof()),
        ::uNewFunctionVoid("AppendFloat2", MultiBuffer__AppendFloat2, 0, false, ::app::Uno::Double__typeof(), ::app::Uno::Double__typeof()),
        ::uNewFunctionVoid("AppendFloat2", MultiBuffer__AppendFloat2_1, 0, false, ::app::Uno::Float2__typeof()),
        ::uNewFunctionVoid("AppendFloat3", MultiBuffer__AppendFloat3, 0, false, ::app::Uno::Double__typeof(), ::app::Uno::Double__typeof(), ::app::Uno::Double__typeof()),
        ::uNewFunctionVoid("AppendFloat3", MultiBuffer__AppendFloat3_1, 0, false, ::app::Uno::Float3__typeof()),
        ::uNewFunctionVoid("AppendFloat4", MultiBuffer__AppendFloat4, 0, false, ::app::Uno::Float4__typeof()),
        ::uNewFunctionVoid("AppendOpen", MultiBuffer__AppendOpen, 0, false),
        ::uNewFunctionVoid("AppendUShort", MultiBuffer__AppendUShort, 0, false, ::app::Uno::Int__typeof()),
        ::uNewFunctionVoid("AppendUShort", MultiBuffer__AppendUShort_1, 0, false, ::app::Uno::UShort__typeof()),
        ::uNewFunctionVoid("AppendUShortNF", MultiBuffer__AppendUShortNF, 0, false, ::app::Uno::Float__typeof()),
        ::uNewFunctionVoid("EndAlloc", MultiBuffer__EndAlloc, 0, false),
        ::uNewFunction("get_Stride", MultiBuffer__get_Stride, 0, false, ::app::Uno::Int__typeof()),
        ::uNewFunction(".ctor", MultiBuffer__New_3, 0, true, MultiBuffer__typeof()));

    ::uRegisterType(type);
    return type;
}

void MultiBuffer___ObjInit_2(MultiBuffer* __this)
{
    __this->fields = ::app::Uno::Collections::List__Fuse_Drawing_Internal_MultiBuffer_Field__New_1(NULL);
    ::app::Fuse::Drawing::Internal::TypedBuffer___ObjInit(__this);
}

::app::Fuse::Drawing::Internal::MultiBuffer_Setter* MultiBuffer__Add(MultiBuffer* __this)
{
    __this->CheckGrow();
    ::app::Fuse::Drawing::Internal::MultiBuffer_Setter* s = ::app::Fuse::Drawing::Internal::MultiBuffer_Setter__New_1(NULL, __this, __this->size);
    __this->size++;
    return s;
}

::app::Fuse::Drawing::Internal::MultiBuffer_Field* MultiBuffer__Alloc(MultiBuffer* __this, int type, int size)
{
    ::app::Fuse::Drawing::Internal::MultiBuffer_Field* collection_123;
    collection_123 = ::app::Fuse::Drawing::Internal::MultiBuffer_Field__New_1(NULL);
    ::uPtr< ::app::Fuse::Drawing::Internal::MultiBuffer_Field*>(collection_123)->Type = type;
    collection_123->Offset = __this->typeSize;
    collection_123->_owner = __this;
    ::app::Fuse::Drawing::Internal::MultiBuffer_Field* f = collection_123;
    __this->typeSize = __this->typeSize + size;
    ::uPtr< ::app::Uno::Collections::List__Fuse_Drawing_Internal_MultiBuffer_Field*>(__this->fields)->Add(f);
    return f;
}

::app::Fuse::Drawing::Internal::MultiBuffer_Field* MultiBuffer__AllocFloat(MultiBuffer* __this)
{
    return __this->Alloc(1, 4);
}

::app::Fuse::Drawing::Internal::MultiBuffer_Field* MultiBuffer__AllocFloat2(MultiBuffer* __this)
{
    return __this->Alloc(2, 8);
}

::app::Fuse::Drawing::Internal::MultiBuffer_Field* MultiBuffer__AllocFloat3(MultiBuffer* __this)
{
    return __this->Alloc(3, 12);
}

::app::Fuse::Drawing::Internal::MultiBuffer_Field* MultiBuffer__AllocFloat4(MultiBuffer* __this)
{
    return __this->Alloc(4, 16);
}

::app::Fuse::Drawing::Internal::MultiBuffer_Field* MultiBuffer__AllocUShort(MultiBuffer* __this)
{
    return __this->Alloc(11, 2);
}

void MultiBuffer__AppendByte(MultiBuffer* __this, ::uByte value)
{
    ::uPtr< ::app::Uno::Buffer*>(__this->back)->SetShort((__this->size * __this->typeSize) + __this->offset, (::uShort)value, true);
    __this->offset = __this->offset + 1;
}

void MultiBuffer__AppendByteNF(MultiBuffer* __this, float value)
{
    __this->AppendByte((::uByte)::app::Uno::Math__Clamp_1(NULL, value * 255.0f, 0.0f, 255.0f));
}

void MultiBuffer__AppendEnd(MultiBuffer* __this)
{
    __this->size++;
}

void MultiBuffer__AppendFloat(MultiBuffer* __this, double value)
{
    ::uPtr< ::app::Uno::Buffer*>(__this->back)->SetFloat((__this->size * __this->typeSize) + __this->offset, (float)value, true);
    __this->offset = __this->offset + 4;
}

void MultiBuffer__AppendFloat2(MultiBuffer* __this, double x, double y)
{
    __this->AppendFloat2_1(::app::Uno::Float2__New_2(NULL, (float)x, (float)y));
}

void MultiBuffer__AppendFloat2_1(MultiBuffer* __this, ::app::Uno::Float2 value)
{
    ::uPtr< ::app::Uno::Buffer*>(__this->back)->SetFloat2((__this->size * __this->typeSize) + __this->offset, value, true);
    __this->offset = __this->offset + 8;
}

void MultiBuffer__AppendFloat3(MultiBuffer* __this, double x, double y, double z)
{
    __this->AppendFloat3_1(::app::Uno::Float3__New_2(NULL, (float)x, (float)y, (float)z));
}

void MultiBuffer__AppendFloat3_1(MultiBuffer* __this, ::app::Uno::Float3 value)
{
    ::uPtr< ::app::Uno::Buffer*>(__this->back)->SetFloat3((__this->size * __this->typeSize) + __this->offset, value, true);
    __this->offset = __this->offset + 12;
}

void MultiBuffer__AppendFloat4(MultiBuffer* __this, ::app::Uno::Float4 value)
{
    ::uPtr< ::app::Uno::Buffer*>(__this->back)->SetFloat4((__this->size * __this->typeSize) + __this->offset, value, true);
    __this->offset = __this->offset + 16;
}

void MultiBuffer__AppendOpen(MultiBuffer* __this)
{
    __this->CheckGrow();
    __this->offset = 0;
}

void MultiBuffer__AppendUShort(MultiBuffer* __this, int value)
{
    __this->AppendUShort_1((::uUShort)value);
}

void MultiBuffer__AppendUShort_1(MultiBuffer* __this, ::uUShort value)
{
    ::uPtr< ::app::Uno::Buffer*>(__this->back)->SetUShort((__this->size * __this->typeSize) + __this->offset, value, true);
    __this->offset = __this->offset + 2;
}

void MultiBuffer__AppendUShortNF(MultiBuffer* __this, float value)
{
    __this->AppendUShort_1((::uUShort)(::app::Uno::Math__Clamp_1(NULL, value, 0.0f, 1.0f) * 65535.0f));
}

void MultiBuffer__EndAlloc(MultiBuffer* __this)
{
    __this->Init(32);
}

int MultiBuffer__get_Stride(MultiBuffer* __this)
{
    return __this->typeSize;
}

MultiBuffer* MultiBuffer__New_3(::uStatic* __this)
{
    MultiBuffer* inst = (MultiBuffer*)::uAllocObject(sizeof(MultiBuffer), MultiBuffer__typeof());
    inst->_ObjInit_2();
    return inst;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Drawing\0.11.3\Internal\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

MultiBuffer_Field__uType* MultiBuffer_Field__typeof()
{
    static ::uStaticStrong<MultiBuffer_Field__uType*> type;
    if (type != NULL) return type;

    type = (MultiBuffer_Field__uType*)::uAllocClassType(sizeof(MultiBuffer_Field__uType), "Fuse.Drawing.Internal.MultiBuffer.Field", false, 0, 1, 0);

    type->SetStrongRefs(
        "_owner", offsetof(MultiBuffer_Field, _owner));

    type->SetFields(3,
        ::uNewField("_owner", NULL, offsetof(MultiBuffer_Field, _owner), ::app::Fuse::Drawing::Internal::MultiBuffer__typeof()),
        ::uNewField("Offset", NULL, offsetof(MultiBuffer_Field, Offset), ::app::Uno::Int__typeof()),
        ::uNewField("Type", NULL, offsetof(MultiBuffer_Field, Type), ::app::Uno::Graphics::VertexAttributeType__typeof()));

    type->SetFunctions(3,
        ::uNewFunction("get_Buffer", MultiBuffer_Field__get_Buffer, 0, false, ::app::Uno::Graphics::VertexBuffer__typeof()),
        ::uNewFunction("get_Stride", MultiBuffer_Field__get_Stride, 0, false, ::app::Uno::Int__typeof()),
        ::uNewFunction(".ctor", MultiBuffer_Field__New_1, 0, true, MultiBuffer_Field__typeof()));

    ::uRegisterType(type);
    return type;
}

void MultiBuffer_Field___ObjInit(MultiBuffer_Field* __this)
{
}

::app::Uno::Graphics::VertexBuffer* MultiBuffer_Field__get_Buffer(MultiBuffer_Field* __this)
{
    return ::uPtr< ::app::Fuse::Drawing::Internal::MultiBuffer*>(__this->_owner)->GetDeviceVertex();
}

int MultiBuffer_Field__get_Stride(MultiBuffer_Field* __this)
{
    return ::uPtr< ::app::Fuse::Drawing::Internal::MultiBuffer*>(__this->_owner)->Stride();
}

MultiBuffer_Field* MultiBuffer_Field__New_1(::uStatic* __this)
{
    MultiBuffer_Field* inst = (MultiBuffer_Field*)::uAllocObject(sizeof(MultiBuffer_Field), MultiBuffer_Field__typeof());
    inst->_ObjInit();
    return inst;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Drawing\0.11.3\Internal\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

MultiBuffer_Setter__uType* MultiBuffer_Setter__typeof()
{
    static ::uStaticStrong<MultiBuffer_Setter__uType*> type;
    if (type != NULL) return type;

    type = (MultiBuffer_Setter__uType*)::uAllocClassType(sizeof(MultiBuffer_Setter__uType), "Fuse.Drawing.Internal.MultiBuffer.Setter", false, 0, 1, 0);

    type->SetStrongRefs(
        "owner", offsetof(MultiBuffer_Setter, owner));

    type->SetFunctions(4,
        ::uNewFunction(".ctor", MultiBuffer_Setter__New_1, 0, true, MultiBuffer_Setter__typeof(), ::app::Fuse::Drawing::Internal::MultiBuffer__typeof(), ::app::Uno::Int__typeof()),
        ::uNewFunction("SetFloat", MultiBuffer_Setter__SetFloat, 0, false, MultiBuffer_Setter__typeof(), ::app::Fuse::Drawing::Internal::MultiBuffer_Field__typeof(), ::app::Uno::Float__typeof()),
        ::uNewFunction("SetFloat2", MultiBuffer_Setter__SetFloat2, 0, false, MultiBuffer_Setter__typeof(), ::app::Fuse::Drawing::Internal::MultiBuffer_Field__typeof(), ::app::Uno::Float2__typeof()),
        ::uNewFunction("SetFloat3", MultiBuffer_Setter__SetFloat3, 0, false, MultiBuffer_Setter__typeof(), ::app::Fuse::Drawing::Internal::MultiBuffer_Field__typeof(), ::app::Uno::Float3__typeof()));

    ::uRegisterType(type);
    return type;
}

void MultiBuffer_Setter___ObjInit(MultiBuffer_Setter* __this, ::app::Fuse::Drawing::Internal::MultiBuffer* owner, int index)
{
    __this->owner = owner;
    __this->index = index;
    __this->baseP = index * ::uPtr< ::app::Fuse::Drawing::Internal::MultiBuffer*>(owner)->typeSize;
}

MultiBuffer_Setter* MultiBuffer_Setter__New_1(::uStatic* __this, ::app::Fuse::Drawing::Internal::MultiBuffer* owner, int index)
{
    MultiBuffer_Setter* inst = (MultiBuffer_Setter*)::uAllocObject(sizeof(MultiBuffer_Setter), MultiBuffer_Setter__typeof());
    inst->_ObjInit(owner, index);
    return inst;
}

MultiBuffer_Setter* MultiBuffer_Setter__SetFloat(MultiBuffer_Setter* __this, ::app::Fuse::Drawing::Internal::MultiBuffer_Field* f, float v)
{
    ::uPtr< ::app::Uno::Buffer*>(::uPtr< ::app::Fuse::Drawing::Internal::MultiBuffer*>(__this->owner)->back)->SetFloat(__this->baseP + ::uPtr< ::app::Fuse::Drawing::Internal::MultiBuffer_Field*>(f)->Offset, v, true);
    return __this;
}

MultiBuffer_Setter* MultiBuffer_Setter__SetFloat2(MultiBuffer_Setter* __this, ::app::Fuse::Drawing::Internal::MultiBuffer_Field* f, ::app::Uno::Float2 v)
{
    ::uPtr< ::app::Uno::Buffer*>(::uPtr< ::app::Fuse::Drawing::Internal::MultiBuffer*>(__this->owner)->back)->SetFloat2(__this->baseP + ::uPtr< ::app::Fuse::Drawing::Internal::MultiBuffer_Field*>(f)->Offset, v, true);
    return __this;
}

MultiBuffer_Setter* MultiBuffer_Setter__SetFloat3(MultiBuffer_Setter* __this, ::app::Fuse::Drawing::Internal::MultiBuffer_Field* f, ::app::Uno::Float3 v)
{
    ::uPtr< ::app::Uno::Buffer*>(::uPtr< ::app::Fuse::Drawing::Internal::MultiBuffer*>(__this->owner)->back)->SetFloat3(__this->baseP + ::uPtr< ::app::Fuse::Drawing::Internal::MultiBuffer_Field*>(f)->Offset, v, true);
    return __this;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Drawing\0.11.3\Internal\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

TypedBuffer__uType* TypedBuffer__typeof()
{
    static ::uStaticStrong<TypedBuffer__uType*> type;
    if (type != NULL) return type;

    type = (TypedBuffer__uType*)::uAllocClassType(sizeof(TypedBuffer__uType), "Fuse.Drawing.Internal.TypedBuffer", false, 0, 3, 0);

    type->SetStrongRefs(
        "back", offsetof(TypedBuffer, back),
        "deviceIndex", offsetof(TypedBuffer, deviceIndex),
        "deviceVertex", offsetof(TypedBuffer, deviceVertex));

    type->SetFields(6,
        ::uNewField("back", NULL, offsetof(TypedBuffer, back), ::app::Uno::Buffer__typeof()),
        ::uNewField("capacity", NULL, offsetof(TypedBuffer, capacity), ::app::Uno::Int__typeof()),
        ::uNewField("deviceIndex", NULL, offsetof(TypedBuffer, deviceIndex), ::app::Uno::Graphics::IndexBuffer__typeof()),
        ::uNewField("deviceVertex", NULL, offsetof(TypedBuffer, deviceVertex), ::app::Uno::Graphics::VertexBuffer__typeof()),
        ::uNewField("size", NULL, offsetof(TypedBuffer, size), ::app::Uno::Int__typeof()),
        ::uNewField("typeSize", NULL, offsetof(TypedBuffer, typeSize), ::app::Uno::Int__typeof()));

    type->SetFunctions(10,
        ::uNewFunctionVoid("CheckGrow", TypedBuffer__CheckGrow, 0, false),
        ::uNewFunctionVoid("Clear", TypedBuffer__Clear, 0, false),
        ::uNewFunction("Count", TypedBuffer__Count, 0, false, ::app::Uno::Int__typeof()),
        ::uNewFunction("GetBuffer", TypedBuffer__GetBuffer, 0, false, ::app::Uno::Buffer__typeof()),
        ::uNewFunction("GetDeviceIndex", TypedBuffer__GetDeviceIndex, 0, false, ::app::Uno::Graphics::IndexBuffer__typeof()),
        ::uNewFunction("GetDeviceVertex", TypedBuffer__GetDeviceVertex, 0, false, ::app::Uno::Graphics::VertexBuffer__typeof()),
        ::uNewFunctionVoid("Init", TypedBuffer__Init, 0, false, ::app::Uno::Int__typeof()),
        ::uNewFunctionVoid("InitDeviceIndex", TypedBuffer__InitDeviceIndex, 0, false, ::app::Uno::Graphics::BufferUsage__typeof()),
        ::uNewFunctionVoid("InitDeviceVertex", TypedBuffer__InitDeviceVertex, 0, false, ::app::Uno::Graphics::BufferUsage__typeof()),
        ::uNewFunctionVoid("UpdateDevice", TypedBuffer__UpdateDevice, 0, false));

    ::uRegisterType(type);
    return type;
}

void TypedBuffer___ObjInit(TypedBuffer* __this)
{
    __this->typeSize = 0;
    __this->capacity = 0;
    __this->size = 0;
    __this->back = ::app::Uno::Buffer__New_3(NULL, 0);
}

void TypedBuffer___ObjInit_1(TypedBuffer* __this, int typeSize, int initSize)
{
    __this->typeSize = typeSize;
    __this->size = 0;
    __this->Init(initSize);
}

void TypedBuffer__CheckGrow(TypedBuffer* __this)
{
    if (__this->size < __this->capacity)
    {
        return;
    }

    int newCap = __this->capacity * 2;
    ::app::Uno::Buffer* newBuf = ::app::Uno::Buffer__New_3(NULL, __this->typeSize * newCap);

    for (int i = 0; i < ::uPtr< ::app::Uno::Buffer*>(__this->back)->SizeInBytes(); ++i)
    {
        ::uPtr< ::app::Uno::Buffer*>(newBuf)->SetByte(i, ::uPtr< ::app::Uno::Buffer*>(__this->back)->Item(i));
    }

    __this->back = newBuf;
    __this->capacity = newCap;
}

void TypedBuffer__Clear(TypedBuffer* __this)
{
    __this->size = 0;
}

int TypedBuffer__Count(TypedBuffer* __this)
{
    return __this->size;
}

::app::Uno::Buffer* TypedBuffer__GetBuffer(TypedBuffer* __this)
{
    return __this->back;
}

::app::Uno::Graphics::IndexBuffer* TypedBuffer__GetDeviceIndex(TypedBuffer* __this)
{
    return __this->deviceIndex;
}

::app::Uno::Graphics::VertexBuffer* TypedBuffer__GetDeviceVertex(TypedBuffer* __this)
{
    return __this->deviceVertex;
}

void TypedBuffer__Init(TypedBuffer* __this, int initSize)
{
    __this->capacity = initSize;
    __this->back = ::app::Uno::Buffer__New_3(NULL, __this->typeSize * initSize);
}

void TypedBuffer__InitDeviceIndex(TypedBuffer* __this, int bu)
{
    __this->deviceIndex = ::app::Uno::Graphics::IndexBuffer__New_1(NULL, __this->back, bu);
}

void TypedBuffer__InitDeviceVertex(TypedBuffer* __this, int bu)
{
    __this->deviceVertex = ::app::Uno::Graphics::VertexBuffer__New_1(NULL, __this->back, bu);
}

TypedBuffer* TypedBuffer__New_1(::uStatic* __this)
{
    TypedBuffer* inst = (TypedBuffer*)::uAllocObject(sizeof(TypedBuffer), TypedBuffer__typeof());
    inst->_ObjInit();
    return inst;
}

TypedBuffer* TypedBuffer__New_2(::uStatic* __this, int typeSize, int initSize)
{
    TypedBuffer* inst = (TypedBuffer*)::uAllocObject(sizeof(TypedBuffer), TypedBuffer__typeof());
    inst->_ObjInit_1(typeSize, initSize);
    return inst;
}

void TypedBuffer__UpdateDevice(TypedBuffer* __this)
{
    if (__this->deviceIndex != NULL)
    {
        ::uPtr< ::app::Uno::Graphics::IndexBuffer*>(__this->deviceIndex)->Update(__this->back);
    }

    if (__this->deviceVertex != NULL)
    {
        ::uPtr< ::app::Uno::Graphics::VertexBuffer*>(__this->deviceVertex)->Update(__this->back);
    }
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Drawing\0.11.3\Internal\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

UShortBuffer__uType* UShortBuffer__typeof()
{
    static ::uStaticStrong<UShortBuffer__uType*> type;
    if (type != NULL) return type;

    type = (UShortBuffer__uType*)::uAllocClassType(sizeof(UShortBuffer__uType), "Fuse.Drawing.Internal.UShortBuffer", false, 0, 0, 0);

    type->SetBaseType(::app::Fuse::Drawing::Internal::TypedBuffer__typeof());

    type->SetFunctions(5,
        ::uNewFunctionVoid("Append", UShortBuffer__Append, 0, false, ::app::Uno::Int__typeof()),
        ::uNewFunctionVoid("Append", UShortBuffer__Append_1, 0, false, ::app::Uno::UShort__typeof()),
        ::uNewFunctionVoid("AppendTri", UShortBuffer__AppendTri, 0, false, ::app::Uno::Int__typeof(), ::app::Uno::Int__typeof(), ::app::Uno::Int__typeof()),
        ::uNewFunction(".ctor", UShortBuffer__New_3, 0, true, UShortBuffer__typeof()),
        ::uNewFunctionVoid("Set", UShortBuffer__Set, 0, false, ::app::Uno::Int__typeof(), ::app::Uno::UShort__typeof()));

    ::uRegisterType(type);
    return type;
}

void UShortBuffer___ObjInit_2(UShortBuffer* __this)
{
    ::app::Fuse::Drawing::Internal::TypedBuffer___ObjInit_1(__this, 2, 32);
}

void UShortBuffer__Append(UShortBuffer* __this, int value)
{
    __this->CheckGrow();
    __this->Set(__this->size++, (::uUShort)value);
}

void UShortBuffer__Append_1(UShortBuffer* __this, ::uUShort value)
{
    __this->CheckGrow();
    __this->Set(__this->size++, value);
}

void UShortBuffer__AppendTri(UShortBuffer* __this, int a, int b, int c)
{
    __this->Append_1((::uUShort)a);
    __this->Append_1((::uUShort)b);
    __this->Append_1((::uUShort)c);
}

UShortBuffer* UShortBuffer__New_3(::uStatic* __this)
{
    UShortBuffer* inst = (UShortBuffer*)::uAllocObject(sizeof(UShortBuffer), UShortBuffer__typeof());
    inst->_ObjInit_2();
    return inst;
}

void UShortBuffer__Set(UShortBuffer* __this, int offset, ::uUShort value)
{
    ::uPtr< ::app::Uno::Buffer*>(__this->back)->SetUShort(offset * __this->typeSize, value, true);
}

}}}}
