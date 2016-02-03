// This file was generated based on '(multiple files)'.
// WARNING: Changes might be lost if you edit this file directly.

#include <Fuse.Drawing.Internal.Float2Buffer.h>
#include <Fuse.Drawing.Internal.Float3Buffer.h>
#include <Fuse.Drawing.Internal.FloatBuffer.h>
#include <Fuse.Drawing.Internal.MultiBuffer.Field.h>
#include <Fuse.Drawing.Internal.MultiBuffer.h>
#include <Fuse.Drawing.Internal.MultiBuffer.Setter.h>
#include <Fuse.Drawing.Internal.TypedBuffer.h>
#include <Fuse.Drawing.Internal.UShortBuffer.h>
#include <Uno.Bool.h>
#include <Uno.Buffer.h>
#include <Uno.Byte.h>
#include <Uno.Collections.List-1.h>
#include <Uno.Double.h>
#include <Uno.Float.h>
#include <Uno.Float2.h>
#include <Uno.Float3.h>
#include <Uno.Float4.h>
#include <Uno.Graphics.BufferUsage.h>
#include <Uno.Graphics.DeviceBuffer.h>
#include <Uno.Graphics.IndexBuffer.h>
#include <Uno.Graphics.VertexAttributeType.h>
#include <Uno.Graphics.VertexBuffer.h>
#include <Uno.Int.h>
#include <Uno.Math.h>
#include <Uno.Short.h>
#include <Uno.UShort.h>
static uType* TYPES[8];

namespace g{
namespace Fuse{
namespace Drawing{
namespace Internal{

// C:\ProgramData\Uno\Packages\Fuse.Drawing\0.18.8\Internal\$.uno(195)
// -------------------------------------------------------------------

// public sealed class MultiBuffer.Field :195
// {
uType* MultiBuffer__Field_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 3;
    options.ObjectSize = sizeof(MultiBuffer__Field);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Fuse.Drawing.Internal.MultiBuffer.Field", options);
    type->fp_ctor_ = (void*)MultiBuffer__Field__New1_fn;
    type->SetFields(0,
        ::g::Fuse::Drawing::Internal::MultiBuffer_typeof(), offsetof(::g::Fuse::Drawing::Internal::MultiBuffer__Field, _owner), 0,
        ::g::Uno::Int_typeof(), offsetof(::g::Fuse::Drawing::Internal::MultiBuffer__Field, Offset), 0,
        ::g::Uno::Graphics::VertexAttributeType_typeof(), offsetof(::g::Fuse::Drawing::Internal::MultiBuffer__Field, Type), 0);
    type->Reflection.SetFields(3,
        new uField("_owner", 0),
        new uField("Offset", 1),
        new uField("Type", 2));
    type->Reflection.SetFunctions(1,
        new uFunction(".ctor", NULL, (void*)MultiBuffer__Field__New1_fn, 0, true, MultiBuffer__Field_typeof(), 0));
    return type;
}

// public generated Field() :195
void MultiBuffer__Field__ctor__fn(MultiBuffer__Field* __this)
{
    __this->ctor_();
}

// public generated Field New() :195
void MultiBuffer__Field__New1_fn(MultiBuffer__Field** __retval)
{
    *__retval = MultiBuffer__Field::New1();
}

// public generated Field() [instance] :195
void MultiBuffer__Field::ctor_()
{
}

// public generated Field New() [static] :195
MultiBuffer__Field* MultiBuffer__Field::New1()
{
    MultiBuffer__Field* obj1 = (MultiBuffer__Field*)uNew(MultiBuffer__Field_typeof());
    obj1->ctor_();
    return obj1;
}
// }

// C:\ProgramData\Uno\Packages\Fuse.Drawing\0.18.8\Internal\$.uno(151)
// -------------------------------------------------------------------

// public sealed class Float2Buffer :151
// {
uType* Float2Buffer_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 6;
    options.ObjectSize = sizeof(Float2Buffer);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Fuse.Drawing.Internal.Float2Buffer", options);
    type->SetBase(::g::Fuse::Drawing::Internal::TypedBuffer_typeof());
    type->fp_ctor_ = (void*)Float2Buffer__New3_fn;
    ::TYPES[0] = ::g::Uno::Float_typeof();
    ::TYPES[1] = ::g::Fuse::Drawing::Internal::TypedBuffer_typeof();
    type->SetFields(6);
    type->Reflection.SetFunctions(4,
        new uFunction("Append", NULL, (void*)Float2Buffer__Append_fn, 0, false, uVoid_typeof(), 2, ::g::Uno::Double_typeof(), ::g::Uno::Double_typeof()),
        new uFunction("Append", NULL, (void*)Float2Buffer__Append1_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::Float2_typeof()),
        new uFunction(".ctor", NULL, (void*)Float2Buffer__New3_fn, 0, true, Float2Buffer_typeof(), 0),
        new uFunction("Set", NULL, (void*)Float2Buffer__Set_fn, 0, false, uVoid_typeof(), 2, ::g::Uno::Int_typeof(), ::g::Uno::Float2_typeof()));
    return type;
}

// public Float2Buffer() :152
void Float2Buffer__ctor_2_fn(Float2Buffer* __this)
{
    __this->ctor_2();
}

// public void Append(double x, double y) :164
void Float2Buffer__Append_fn(Float2Buffer* __this, double* x, double* y)
{
    __this->Append(*x, *y);
}

// public void Append(float2 value) :159
void Float2Buffer__Append1_fn(Float2Buffer* __this, ::g::Uno::Float2* value)
{
    __this->Append1(*value);
}

// public Float2Buffer New() :152
void Float2Buffer__New3_fn(Float2Buffer** __retval)
{
    *__retval = Float2Buffer::New3();
}

// public void Set(int offset, float2 value) :155
void Float2Buffer__Set_fn(Float2Buffer* __this, int* offset, ::g::Uno::Float2* value)
{
    __this->Set(*offset, *value);
}

// public Float2Buffer() [instance] :152
void Float2Buffer::ctor_2()
{
    ctor_1(8, 32);
}

// public void Append(double x, double y) [instance] :164
void Float2Buffer::Append(double x, double y)
{
    Append1(::g::Uno::Float2__New2((float)x, (float)y));
}

// public void Append(float2 value) [instance] :159
void Float2Buffer::Append1(::g::Uno::Float2 value)
{
    CheckGrow();
    Set(size++, value);
}

// public void Set(int offset, float2 value) [instance] :155
void Float2Buffer::Set(int offset, ::g::Uno::Float2 value)
{
    uPtr(back)->Set5(offset * typeSize, value, true);
}

// public Float2Buffer New() [static] :152
Float2Buffer* Float2Buffer::New3()
{
    Float2Buffer* obj1 = (Float2Buffer*)uNew(Float2Buffer_typeof());
    obj1->ctor_2();
    return obj1;
}
// }

// C:\ProgramData\Uno\Packages\Fuse.Drawing\0.18.8\Internal\$.uno(115)
// -------------------------------------------------------------------

// public sealed class Float3Buffer :115
// {
uType* Float3Buffer_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 6;
    options.ObjectSize = sizeof(Float3Buffer);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Fuse.Drawing.Internal.Float3Buffer", options);
    type->SetBase(::g::Fuse::Drawing::Internal::TypedBuffer_typeof());
    type->fp_ctor_ = (void*)Float3Buffer__New3_fn;
    ::TYPES[0] = ::g::Uno::Float_typeof();
    ::TYPES[1] = ::g::Fuse::Drawing::Internal::TypedBuffer_typeof();
    type->SetFields(6);
    type->Reflection.SetFunctions(4,
        new uFunction("Append", NULL, (void*)Float3Buffer__Append_fn, 0, false, uVoid_typeof(), 3, ::g::Uno::Double_typeof(), ::g::Uno::Double_typeof(), ::g::Uno::Double_typeof()),
        new uFunction("Append", NULL, (void*)Float3Buffer__Append1_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::Float3_typeof()),
        new uFunction(".ctor", NULL, (void*)Float3Buffer__New3_fn, 0, true, Float3Buffer_typeof(), 0),
        new uFunction("Set", NULL, (void*)Float3Buffer__Set_fn, 0, false, uVoid_typeof(), 2, ::g::Uno::Int_typeof(), ::g::Uno::Float3_typeof()));
    return type;
}

// public Float3Buffer() :116
void Float3Buffer__ctor_2_fn(Float3Buffer* __this)
{
    __this->ctor_2();
}

// public void Append(double x, double y, double z) :128
void Float3Buffer__Append_fn(Float3Buffer* __this, double* x, double* y, double* z)
{
    __this->Append(*x, *y, *z);
}

// public void Append(float3 value) :123
void Float3Buffer__Append1_fn(Float3Buffer* __this, ::g::Uno::Float3* value)
{
    __this->Append1(*value);
}

// public Float3Buffer New() :116
void Float3Buffer__New3_fn(Float3Buffer** __retval)
{
    *__retval = Float3Buffer::New3();
}

// public void Set(int offset, float3 value) :119
void Float3Buffer__Set_fn(Float3Buffer* __this, int* offset, ::g::Uno::Float3* value)
{
    __this->Set(*offset, *value);
}

// public Float3Buffer() [instance] :116
void Float3Buffer::ctor_2()
{
    ctor_1(12, 32);
}

// public void Append(double x, double y, double z) [instance] :128
void Float3Buffer::Append(double x, double y, double z)
{
    Append1(::g::Uno::Float3__New2((float)x, (float)y, (float)z));
}

// public void Append(float3 value) [instance] :123
void Float3Buffer::Append1(::g::Uno::Float3 value)
{
    CheckGrow();
    Set(size++, value);
}

// public void Set(int offset, float3 value) [instance] :119
void Float3Buffer::Set(int offset, ::g::Uno::Float3 value)
{
    uPtr(back)->Set6(offset * typeSize, value, true);
}

// public Float3Buffer New() [static] :116
Float3Buffer* Float3Buffer::New3()
{
    Float3Buffer* obj1 = (Float3Buffer*)uNew(Float3Buffer_typeof());
    obj1->ctor_2();
    return obj1;
}
// }

// C:\ProgramData\Uno\Packages\Fuse.Drawing\0.18.8\Internal\$.uno(133)
// -------------------------------------------------------------------

// public sealed class FloatBuffer :133
// {
uType* FloatBuffer_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 6;
    options.ObjectSize = sizeof(FloatBuffer);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Fuse.Drawing.Internal.FloatBuffer", options);
    type->SetBase(::g::Fuse::Drawing::Internal::TypedBuffer_typeof());
    type->fp_ctor_ = (void*)FloatBuffer__New3_fn;
    ::TYPES[0] = ::g::Uno::Float_typeof();
    ::TYPES[1] = ::g::Fuse::Drawing::Internal::TypedBuffer_typeof();
    type->SetFields(6);
    type->Reflection.SetFunctions(4,
        new uFunction("Append", NULL, (void*)FloatBuffer__Append_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::Double_typeof()),
        new uFunction("Append", NULL, (void*)FloatBuffer__Append1_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::Float_typeof()),
        new uFunction(".ctor", NULL, (void*)FloatBuffer__New3_fn, 0, true, FloatBuffer_typeof(), 0),
        new uFunction("Set", NULL, (void*)FloatBuffer__Set_fn, 0, false, uVoid_typeof(), 2, ::g::Uno::Int_typeof(), ::g::Uno::Float_typeof()));
    return type;
}

// public FloatBuffer() :134
void FloatBuffer__ctor_2_fn(FloatBuffer* __this)
{
    __this->ctor_2();
}

// public void Append(double x) :146
void FloatBuffer__Append_fn(FloatBuffer* __this, double* x)
{
    __this->Append(*x);
}

// public void Append(float value) :141
void FloatBuffer__Append1_fn(FloatBuffer* __this, float* value)
{
    __this->Append1(*value);
}

// public FloatBuffer New() :134
void FloatBuffer__New3_fn(FloatBuffer** __retval)
{
    *__retval = FloatBuffer::New3();
}

// public void Set(int offset, float value) :137
void FloatBuffer__Set_fn(FloatBuffer* __this, int* offset, float* value)
{
    __this->Set(*offset, *value);
}

// public FloatBuffer() [instance] :134
void FloatBuffer::ctor_2()
{
    ctor_1(4, 32);
}

// public void Append(double x) [instance] :146
void FloatBuffer::Append(double x)
{
    Append1((float)x);
}

// public void Append(float value) [instance] :141
void FloatBuffer::Append1(float value)
{
    CheckGrow();
    Set(size++, value);
}

// public void Set(int offset, float value) [instance] :137
void FloatBuffer::Set(int offset, float value)
{
    uPtr(back)->Set4(offset * typeSize, value, true);
}

// public FloatBuffer New() [static] :134
FloatBuffer* FloatBuffer::New3()
{
    FloatBuffer* obj1 = (FloatBuffer*)uNew(FloatBuffer_typeof());
    obj1->ctor_2();
    return obj1;
}
// }

// C:\ProgramData\Uno\Packages\Fuse.Drawing\0.18.8\Internal\$.uno(194)
// -------------------------------------------------------------------

// public sealed class MultiBuffer :194
// {
uType* MultiBuffer_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 8;
    options.ObjectSize = sizeof(MultiBuffer);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Fuse.Drawing.Internal.MultiBuffer", options);
    type->SetBase(::g::Fuse::Drawing::Internal::TypedBuffer_typeof());
    type->fp_ctor_ = (void*)MultiBuffer__New3_fn;
    ::TYPES[2] = ::g::Uno::Collections::List_typeof()->MakeType(MultiBuffer__Field_typeof());
    ::TYPES[1] = ::g::Fuse::Drawing::Internal::TypedBuffer_typeof();
    ::TYPES[3] = MultiBuffer__Field_typeof();
    ::TYPES[4] = ::g::Uno::Short_typeof();
    ::TYPES[5] = ::g::Uno::Byte_typeof();
    ::TYPES[0] = ::g::Uno::Float_typeof();
    ::TYPES[6] = ::g::Uno::UShort_typeof();
    type->SetFields(6,
        ::g::Uno::Collections::List_typeof()->MakeType(MultiBuffer__Field_typeof()), offsetof(::g::Fuse::Drawing::Internal::MultiBuffer, fields), 0,
        ::g::Uno::Int_typeof(), offsetof(::g::Fuse::Drawing::Internal::MultiBuffer, offset), 0);
    type->Reflection.SetFunctions(22,
        new uFunction("Add", NULL, (void*)MultiBuffer__Add_fn, 0, false, MultiBuffer__Setter_typeof(), 0),
        new uFunction("AllocFloat", NULL, (void*)MultiBuffer__AllocFloat_fn, 0, false, MultiBuffer__Field_typeof(), 0),
        new uFunction("AllocFloat2", NULL, (void*)MultiBuffer__AllocFloat2_fn, 0, false, MultiBuffer__Field_typeof(), 0),
        new uFunction("AllocFloat3", NULL, (void*)MultiBuffer__AllocFloat3_fn, 0, false, MultiBuffer__Field_typeof(), 0),
        new uFunction("AllocFloat4", NULL, (void*)MultiBuffer__AllocFloat4_fn, 0, false, MultiBuffer__Field_typeof(), 0),
        new uFunction("AllocUShort", NULL, (void*)MultiBuffer__AllocUShort_fn, 0, false, MultiBuffer__Field_typeof(), 0),
        new uFunction("AppendByte", NULL, (void*)MultiBuffer__AppendByte_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::Byte_typeof()),
        new uFunction("AppendByteNF", NULL, (void*)MultiBuffer__AppendByteNF_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::Float_typeof()),
        new uFunction("AppendEnd", NULL, (void*)MultiBuffer__AppendEnd_fn, 0, false, uVoid_typeof(), 0),
        new uFunction("AppendFloat", NULL, (void*)MultiBuffer__AppendFloat_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::Double_typeof()),
        new uFunction("AppendFloat2", NULL, (void*)MultiBuffer__AppendFloat2_fn, 0, false, uVoid_typeof(), 2, ::g::Uno::Double_typeof(), ::g::Uno::Double_typeof()),
        new uFunction("AppendFloat2", NULL, (void*)MultiBuffer__AppendFloat21_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::Float2_typeof()),
        new uFunction("AppendFloat3", NULL, (void*)MultiBuffer__AppendFloat3_fn, 0, false, uVoid_typeof(), 3, ::g::Uno::Double_typeof(), ::g::Uno::Double_typeof(), ::g::Uno::Double_typeof()),
        new uFunction("AppendFloat3", NULL, (void*)MultiBuffer__AppendFloat31_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::Float3_typeof()),
        new uFunction("AppendFloat4", NULL, (void*)MultiBuffer__AppendFloat4_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::Float4_typeof()),
        new uFunction("AppendOpen", NULL, (void*)MultiBuffer__AppendOpen_fn, 0, false, uVoid_typeof(), 0),
        new uFunction("AppendUShort", NULL, (void*)MultiBuffer__AppendUShort_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::Int_typeof()),
        new uFunction("AppendUShort", NULL, (void*)MultiBuffer__AppendUShort1_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::UShort_typeof()),
        new uFunction("AppendUShortNF", NULL, (void*)MultiBuffer__AppendUShortNF_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::Float_typeof()),
        new uFunction("EndAlloc", NULL, (void*)MultiBuffer__EndAlloc_fn, 0, false, uVoid_typeof(), 0),
        new uFunction(".ctor", NULL, (void*)MultiBuffer__New3_fn, 0, true, MultiBuffer_typeof(), 0),
        new uFunction("get_Stride", NULL, (void*)MultiBuffer__get_Stride_fn, 0, false, ::g::Uno::Int_typeof(), 0));
    return type;
}

// public MultiBuffer() :213
void MultiBuffer__ctor_2_fn(MultiBuffer* __this)
{
    __this->ctor_2();
}

// public Fuse.Drawing.Internal.MultiBuffer.Setter Add() :338
void MultiBuffer__Add_fn(MultiBuffer* __this, MultiBuffer__Setter** __retval)
{
    *__retval = __this->Add();
}

// private Fuse.Drawing.Internal.MultiBuffer.Field Alloc(Uno.Graphics.VertexAttributeType type, int size) :223
void MultiBuffer__Alloc_fn(MultiBuffer* __this, int* type, int* size1, MultiBuffer__Field** __retval)
{
    *__retval = __this->Alloc(*type, *size1);
}

// public Fuse.Drawing.Internal.MultiBuffer.Field AllocFloat() :234
void MultiBuffer__AllocFloat_fn(MultiBuffer* __this, MultiBuffer__Field** __retval)
{
    *__retval = __this->AllocFloat();
}

// public Fuse.Drawing.Internal.MultiBuffer.Field AllocFloat2() :237
void MultiBuffer__AllocFloat2_fn(MultiBuffer* __this, MultiBuffer__Field** __retval)
{
    *__retval = __this->AllocFloat2();
}

// public Fuse.Drawing.Internal.MultiBuffer.Field AllocFloat3() :240
void MultiBuffer__AllocFloat3_fn(MultiBuffer* __this, MultiBuffer__Field** __retval)
{
    *__retval = __this->AllocFloat3();
}

// public Fuse.Drawing.Internal.MultiBuffer.Field AllocFloat4() :243
void MultiBuffer__AllocFloat4_fn(MultiBuffer* __this, MultiBuffer__Field** __retval)
{
    *__retval = __this->AllocFloat4();
}

// public Fuse.Drawing.Internal.MultiBuffer.Field AllocUShort() :246
void MultiBuffer__AllocUShort_fn(MultiBuffer* __this, MultiBuffer__Field** __retval)
{
    *__retval = __this->AllocUShort();
}

// public void AppendByte(byte value) :305
void MultiBuffer__AppendByte_fn(MultiBuffer* __this, uint8_t* value)
{
    __this->AppendByte(*value);
}

// public void AppendByteNF(float value) :310
void MultiBuffer__AppendByteNF_fn(MultiBuffer* __this, float* value)
{
    __this->AppendByteNF(*value);
}

// public void AppendEnd() :264
void MultiBuffer__AppendEnd_fn(MultiBuffer* __this)
{
    __this->AppendEnd();
}

// public void AppendFloat(double value) :279
void MultiBuffer__AppendFloat_fn(MultiBuffer* __this, double* value)
{
    __this->AppendFloat(*value);
}

// public void AppendFloat2(double x, double y) :288
void MultiBuffer__AppendFloat2_fn(MultiBuffer* __this, double* x, double* y)
{
    __this->AppendFloat2(*x, *y);
}

// public void AppendFloat2(float2 value) :284
void MultiBuffer__AppendFloat21_fn(MultiBuffer* __this, ::g::Uno::Float2* value)
{
    __this->AppendFloat21(*value);
}

// public void AppendFloat3(double x, double y, double z) :296
void MultiBuffer__AppendFloat3_fn(MultiBuffer* __this, double* x, double* y, double* z)
{
    __this->AppendFloat3(*x, *y, *z);
}

// public void AppendFloat3(float3 value) :292
void MultiBuffer__AppendFloat31_fn(MultiBuffer* __this, ::g::Uno::Float3* value)
{
    __this->AppendFloat31(*value);
}

// public void AppendFloat4(float4 value) :300
void MultiBuffer__AppendFloat4_fn(MultiBuffer* __this, ::g::Uno::Float4* value)
{
    __this->AppendFloat4(*value);
}

// public void AppendOpen() :260
void MultiBuffer__AppendOpen_fn(MultiBuffer* __this)
{
    __this->AppendOpen();
}

// public void AppendUShort(int value) :272
void MultiBuffer__AppendUShort_fn(MultiBuffer* __this, int* value)
{
    __this->AppendUShort(*value);
}

// public void AppendUShort(ushort value) :268
void MultiBuffer__AppendUShort1_fn(MultiBuffer* __this, uint16_t* value)
{
    __this->AppendUShort1(*value);
}

// public void AppendUShortNF(float value) :275
void MultiBuffer__AppendUShortNF_fn(MultiBuffer* __this, float* value)
{
    __this->AppendUShortNF(*value);
}

// public void EndAlloc() :254
void MultiBuffer__EndAlloc_fn(MultiBuffer* __this)
{
    __this->EndAlloc();
}

// public MultiBuffer New() :213
void MultiBuffer__New3_fn(MultiBuffer** __retval)
{
    *__retval = MultiBuffer::New3();
}

// public int get_Stride() :217
void MultiBuffer__get_Stride_fn(MultiBuffer* __this, int* __retval)
{
    *__retval = __this->Stride();
}

// public MultiBuffer() [instance] :213
void MultiBuffer::ctor_2()
{
    fields = ((::g::Uno::Collections::List*)::g::Uno::Collections::List::New1(::TYPES[2/*Uno.Collections.List<Fuse.Drawing.Internal.MultiBuffer.Field>*/]));
    ctor_();
}

// public Fuse.Drawing.Internal.MultiBuffer.Setter Add() [instance] :338
MultiBuffer__Setter* MultiBuffer::Add()
{
    CheckGrow();
    MultiBuffer__Setter* s = MultiBuffer__Setter::New1(this, size);
    size++;
    return s;
}

// private Fuse.Drawing.Internal.MultiBuffer.Field Alloc(Uno.Graphics.VertexAttributeType type, int size) [instance] :223
MultiBuffer__Field* MultiBuffer::Alloc(int type, int size1)
{
    MultiBuffer__Field* collection1;
    collection1 = MultiBuffer__Field::New1();
    uPtr(collection1)->Type = type;
    uPtr(collection1)->Offset = typeSize;
    uPtr(collection1)->_owner = this;
    MultiBuffer__Field* f = collection1;
    typeSize = (typeSize + size1);
    ::g::Uno::Collections::List__Add_fn(uPtr(fields), f);
    return f;
}

// public Fuse.Drawing.Internal.MultiBuffer.Field AllocFloat() [instance] :234
MultiBuffer__Field* MultiBuffer::AllocFloat()
{
    return Alloc(1, 4);
}

// public Fuse.Drawing.Internal.MultiBuffer.Field AllocFloat2() [instance] :237
MultiBuffer__Field* MultiBuffer::AllocFloat2()
{
    return Alloc(2, 8);
}

// public Fuse.Drawing.Internal.MultiBuffer.Field AllocFloat3() [instance] :240
MultiBuffer__Field* MultiBuffer::AllocFloat3()
{
    return Alloc(3, 12);
}

// public Fuse.Drawing.Internal.MultiBuffer.Field AllocFloat4() [instance] :243
MultiBuffer__Field* MultiBuffer::AllocFloat4()
{
    return Alloc(4, 16);
}

// public Fuse.Drawing.Internal.MultiBuffer.Field AllocUShort() [instance] :246
MultiBuffer__Field* MultiBuffer::AllocUShort()
{
    return Alloc(11, 2);
}

// public void AppendByte(byte value) [instance] :305
void MultiBuffer::AppendByte(uint8_t value)
{
    uPtr(back)->Set18((size * typeSize) + offset, (int16_t)value, true);
    offset = (offset + 1);
}

// public void AppendByteNF(float value) [instance] :310
void MultiBuffer::AppendByteNF(float value)
{
    AppendByte((uint8_t)::g::Uno::Math::Clamp1(value * 255.0f, 0.0f, 255.0f));
}

// public void AppendEnd() [instance] :264
void MultiBuffer::AppendEnd()
{
    size++;
}

// public void AppendFloat(double value) [instance] :279
void MultiBuffer::AppendFloat(double value)
{
    uPtr(back)->Set4((size * typeSize) + offset, (float)value, true);
    offset = (offset + 4);
}

// public void AppendFloat2(double x, double y) [instance] :288
void MultiBuffer::AppendFloat2(double x, double y)
{
    AppendFloat21(::g::Uno::Float2__New2((float)x, (float)y));
}

// public void AppendFloat2(float2 value) [instance] :284
void MultiBuffer::AppendFloat21(::g::Uno::Float2 value)
{
    uPtr(back)->Set5((size * typeSize) + offset, value, true);
    offset = (offset + 8);
}

// public void AppendFloat3(double x, double y, double z) [instance] :296
void MultiBuffer::AppendFloat3(double x, double y, double z)
{
    AppendFloat31(::g::Uno::Float3__New2((float)x, (float)y, (float)z));
}

// public void AppendFloat3(float3 value) [instance] :292
void MultiBuffer::AppendFloat31(::g::Uno::Float3 value)
{
    uPtr(back)->Set6((size * typeSize) + offset, value, true);
    offset = (offset + 12);
}

// public void AppendFloat4(float4 value) [instance] :300
void MultiBuffer::AppendFloat4(::g::Uno::Float4 value)
{
    uPtr(back)->Set8((size * typeSize) + offset, value, true);
    offset = (offset + 16);
}

// public void AppendOpen() [instance] :260
void MultiBuffer::AppendOpen()
{
    CheckGrow();
    offset = 0;
}

// public void AppendUShort(int value) [instance] :272
void MultiBuffer::AppendUShort(int value)
{
    AppendUShort1((uint16_t)value);
}

// public void AppendUShort(ushort value) [instance] :268
void MultiBuffer::AppendUShort1(uint16_t value)
{
    uPtr(back)->Set23((size * typeSize) + offset, value, true);
    offset = (offset + 2);
}

// public void AppendUShortNF(float value) [instance] :275
void MultiBuffer::AppendUShortNF(float value)
{
    AppendUShort1((uint16_t)(::g::Uno::Math::Clamp1(value, 0.0f, 1.0f) * 65535.0f));
}

// public void EndAlloc() [instance] :254
void MultiBuffer::EndAlloc()
{
    Init(32);
}

// public int get_Stride() [instance] :217
int MultiBuffer::Stride()
{
    return typeSize;
}

// public MultiBuffer New() [static] :213
MultiBuffer* MultiBuffer::New3()
{
    MultiBuffer* obj2 = (MultiBuffer*)uNew(MultiBuffer_typeof());
    obj2->ctor_2();
    return obj2;
}
// }

// C:\ProgramData\Uno\Packages\Fuse.Drawing\0.18.8\Internal\$.uno(315)
// -------------------------------------------------------------------

// public sealed class MultiBuffer.Setter :315
// {
uType* MultiBuffer__Setter_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 3;
    options.ObjectSize = sizeof(MultiBuffer__Setter);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Fuse.Drawing.Internal.MultiBuffer.Setter", options);
    ::TYPES[1] = ::g::Fuse::Drawing::Internal::TypedBuffer_typeof();
    type->SetFields(0,
        ::g::Uno::Int_typeof(), offsetof(::g::Fuse::Drawing::Internal::MultiBuffer__Setter, baseP), 0,
        ::g::Uno::Int_typeof(), offsetof(::g::Fuse::Drawing::Internal::MultiBuffer__Setter, index), 0,
        ::g::Fuse::Drawing::Internal::MultiBuffer_typeof(), offsetof(::g::Fuse::Drawing::Internal::MultiBuffer__Setter, owner), 0);
    type->Reflection.SetFunctions(1,
        new uFunction(".ctor", NULL, (void*)MultiBuffer__Setter__New1_fn, 0, true, MultiBuffer__Setter_typeof(), 2, ::g::Fuse::Drawing::Internal::MultiBuffer_typeof(), ::g::Uno::Int_typeof()));
    return type;
}

// public Setter(Fuse.Drawing.Internal.MultiBuffer owner, int index) :319
void MultiBuffer__Setter__ctor__fn(MultiBuffer__Setter* __this, ::g::Fuse::Drawing::Internal::MultiBuffer* owner1, int* index1)
{
    __this->ctor_(owner1, *index1);
}

// public Setter New(Fuse.Drawing.Internal.MultiBuffer owner, int index) :319
void MultiBuffer__Setter__New1_fn(::g::Fuse::Drawing::Internal::MultiBuffer* owner1, int* index1, MultiBuffer__Setter** __retval)
{
    *__retval = MultiBuffer__Setter::New1(owner1, *index1);
}

// public Setter(Fuse.Drawing.Internal.MultiBuffer owner, int index) [instance] :319
void MultiBuffer__Setter::ctor_(::g::Fuse::Drawing::Internal::MultiBuffer* owner1, int index1)
{
    owner = owner1;
    index = index1;
    baseP = (index1 * uPtr(owner1)->typeSize);
}

// public Setter New(Fuse.Drawing.Internal.MultiBuffer owner, int index) [static] :319
MultiBuffer__Setter* MultiBuffer__Setter::New1(::g::Fuse::Drawing::Internal::MultiBuffer* owner1, int index1)
{
    MultiBuffer__Setter* obj1 = (MultiBuffer__Setter*)uNew(MultiBuffer__Setter_typeof());
    obj1->ctor_(owner1, index1);
    return obj1;
}
// }

// C:\ProgramData\Uno\Packages\Fuse.Drawing\0.18.8\Internal\$.uno(22)
// ------------------------------------------------------------------

// public class TypedBuffer :22
// {
uType* TypedBuffer_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 6;
    options.ObjectSize = sizeof(TypedBuffer);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Fuse.Drawing.Internal.TypedBuffer", options);
    type->fp_ctor_ = (void*)TypedBuffer__New1_fn;
    ::TYPES[7] = ::g::Uno::Buffer_typeof();
    type->SetFields(0,
        ::g::Uno::Buffer_typeof(), offsetof(::g::Fuse::Drawing::Internal::TypedBuffer, back), 0,
        ::g::Uno::Int_typeof(), offsetof(::g::Fuse::Drawing::Internal::TypedBuffer, capacity), 0,
        ::g::Uno::Graphics::IndexBuffer_typeof(), offsetof(::g::Fuse::Drawing::Internal::TypedBuffer, deviceIndex), 0,
        ::g::Uno::Graphics::VertexBuffer_typeof(), offsetof(::g::Fuse::Drawing::Internal::TypedBuffer, deviceVertex), 0,
        ::g::Uno::Int_typeof(), offsetof(::g::Fuse::Drawing::Internal::TypedBuffer, size), 0,
        ::g::Uno::Int_typeof(), offsetof(::g::Fuse::Drawing::Internal::TypedBuffer, typeSize), 0);
    type->Reflection.SetFunctions(8,
        new uFunction("Clear", NULL, (void*)TypedBuffer__Clear_fn, 0, false, uVoid_typeof(), 0),
        new uFunction("Count", NULL, (void*)TypedBuffer__Count_fn, 0, false, ::g::Uno::Int_typeof(), 0),
        new uFunction("GetBuffer", NULL, (void*)TypedBuffer__GetBuffer_fn, 0, false, ::g::Uno::Buffer_typeof(), 0),
        new uFunction("GetDeviceIndex", NULL, (void*)TypedBuffer__GetDeviceIndex_fn, 0, false, ::g::Uno::Graphics::IndexBuffer_typeof(), 0),
        new uFunction("GetDeviceVertex", NULL, (void*)TypedBuffer__GetDeviceVertex_fn, 0, false, ::g::Uno::Graphics::VertexBuffer_typeof(), 0),
        new uFunction("InitDeviceIndex", NULL, (void*)TypedBuffer__InitDeviceIndex_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::Graphics::BufferUsage_typeof()),
        new uFunction("InitDeviceVertex", NULL, (void*)TypedBuffer__InitDeviceVertex_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::Graphics::BufferUsage_typeof()),
        new uFunction("UpdateDevice", NULL, (void*)TypedBuffer__UpdateDevice_fn, 0, false, uVoid_typeof(), 0));
    return type;
}

// protected TypedBuffer() :41
void TypedBuffer__ctor__fn(TypedBuffer* __this)
{
    __this->ctor_();
}

// protected TypedBuffer(int typeSize, [int initSize]) :30
void TypedBuffer__ctor_1_fn(TypedBuffer* __this, int* typeSize1, int* initSize)
{
    __this->ctor_1(*typeSize1, *initSize);
}

// protected void CheckGrow() :96
void TypedBuffer__CheckGrow_fn(TypedBuffer* __this)
{
    __this->CheckGrow();
}

// public void Clear() :109
void TypedBuffer__Clear_fn(TypedBuffer* __this)
{
    __this->Clear();
}

// public int Count() :76
void TypedBuffer__Count_fn(TypedBuffer* __this, int* __retval)
{
    *__retval = __this->Count();
}

// public Uno.Buffer GetBuffer() :81
void TypedBuffer__GetBuffer_fn(TypedBuffer* __this, ::g::Uno::Buffer** __retval)
{
    *__retval = __this->GetBuffer();
}

// public Uno.Graphics.IndexBuffer GetDeviceIndex() :55
void TypedBuffer__GetDeviceIndex_fn(TypedBuffer* __this, ::g::Uno::Graphics::IndexBuffer** __retval)
{
    *__retval = __this->GetDeviceIndex();
}

// public Uno.Graphics.VertexBuffer GetDeviceVertex() :63
void TypedBuffer__GetDeviceVertex_fn(TypedBuffer* __this, ::g::Uno::Graphics::VertexBuffer** __retval)
{
    *__retval = __this->GetDeviceVertex();
}

// protected void Init(int initSize) :36
void TypedBuffer__Init_fn(TypedBuffer* __this, int* initSize)
{
    __this->Init(*initSize);
}

// public void InitDeviceIndex([Uno.Graphics.BufferUsage bu]) :52
void TypedBuffer__InitDeviceIndex_fn(TypedBuffer* __this, int* bu)
{
    __this->InitDeviceIndex(*bu);
}

// public void InitDeviceVertex([Uno.Graphics.BufferUsage bu]) :60
void TypedBuffer__InitDeviceVertex_fn(TypedBuffer* __this, int* bu)
{
    __this->InitDeviceVertex(*bu);
}

// protected TypedBuffer New() :41
void TypedBuffer__New1_fn(TypedBuffer** __retval)
{
    *__retval = TypedBuffer::New1();
}

// protected TypedBuffer New(int typeSize, [int initSize]) :30
void TypedBuffer__New2_fn(int* typeSize1, int* initSize, TypedBuffer** __retval)
{
    *__retval = TypedBuffer::New2(*typeSize1, *initSize);
}

// public void UpdateDevice() :67
void TypedBuffer__UpdateDevice_fn(TypedBuffer* __this)
{
    __this->UpdateDevice();
}

// protected TypedBuffer() [instance] :41
void TypedBuffer::ctor_()
{
    typeSize = 0;
    capacity = 0;
    size = 0;
    back = ::g::Uno::Buffer::New3(0);
}

// protected TypedBuffer(int typeSize, [int initSize]) [instance] :30
void TypedBuffer::ctor_1(int typeSize1, int initSize)
{
    typeSize = typeSize1;
    size = 0;
    Init(initSize);
}

// protected void CheckGrow() [instance] :96
void TypedBuffer::CheckGrow()
{
    if (size < capacity)
        return;

    int newCap = capacity * 2;
    ::g::Uno::Buffer* newBuf = ::g::Uno::Buffer::New3(typeSize * newCap);

    for (int i = 0; i < uPtr(back)->SizeInBytes(); ++i)
        uPtr(newBuf)->Set(i, uPtr(back)->Item(i));

    back = newBuf;
    capacity = newCap;
}

// public void Clear() [instance] :109
void TypedBuffer::Clear()
{
    size = 0;
}

// public int Count() [instance] :76
int TypedBuffer::Count()
{
    return size;
}

// public Uno.Buffer GetBuffer() [instance] :81
::g::Uno::Buffer* TypedBuffer::GetBuffer()
{
    return back;
}

// public Uno.Graphics.IndexBuffer GetDeviceIndex() [instance] :55
::g::Uno::Graphics::IndexBuffer* TypedBuffer::GetDeviceIndex()
{
    return deviceIndex;
}

// public Uno.Graphics.VertexBuffer GetDeviceVertex() [instance] :63
::g::Uno::Graphics::VertexBuffer* TypedBuffer::GetDeviceVertex()
{
    return deviceVertex;
}

// protected void Init(int initSize) [instance] :36
void TypedBuffer::Init(int initSize)
{
    capacity = initSize;
    back = ::g::Uno::Buffer::New3(typeSize * initSize);
}

// public void InitDeviceIndex([Uno.Graphics.BufferUsage bu]) [instance] :52
void TypedBuffer::InitDeviceIndex(int bu)
{
    deviceIndex = ::g::Uno::Graphics::IndexBuffer::New2(back, bu);
}

// public void InitDeviceVertex([Uno.Graphics.BufferUsage bu]) [instance] :60
void TypedBuffer::InitDeviceVertex(int bu)
{
    deviceVertex = ::g::Uno::Graphics::VertexBuffer::New2(back, bu);
}

// public void UpdateDevice() [instance] :67
void TypedBuffer::UpdateDevice()
{
    if (deviceIndex != NULL)
        uPtr(deviceIndex)->Update(back);

    if (deviceVertex != NULL)
        uPtr(deviceVertex)->Update(back);
}

// protected TypedBuffer New() [static] :41
TypedBuffer* TypedBuffer::New1()
{
    TypedBuffer* obj2 = (TypedBuffer*)uNew(TypedBuffer_typeof());
    obj2->ctor_();
    return obj2;
}

// protected TypedBuffer New(int typeSize, [int initSize]) [static] :30
TypedBuffer* TypedBuffer::New2(int typeSize1, int initSize)
{
    TypedBuffer* obj1 = (TypedBuffer*)uNew(TypedBuffer_typeof());
    obj1->ctor_1(typeSize1, initSize);
    return obj1;
}
// }

// C:\ProgramData\Uno\Packages\Fuse.Drawing\0.18.8\Internal\$.uno(169)
// -------------------------------------------------------------------

// public sealed class UShortBuffer :169
// {
uType* UShortBuffer_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 6;
    options.ObjectSize = sizeof(UShortBuffer);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Fuse.Drawing.Internal.UShortBuffer", options);
    type->SetBase(::g::Fuse::Drawing::Internal::TypedBuffer_typeof());
    type->fp_ctor_ = (void*)UShortBuffer__New3_fn;
    ::TYPES[1] = ::g::Fuse::Drawing::Internal::TypedBuffer_typeof();
    ::TYPES[6] = ::g::Uno::UShort_typeof();
    type->SetFields(6);
    type->Reflection.SetFunctions(5,
        new uFunction("Append", NULL, (void*)UShortBuffer__Append_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::Int_typeof()),
        new uFunction("Append", NULL, (void*)UShortBuffer__Append1_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::UShort_typeof()),
        new uFunction("AppendTri", NULL, (void*)UShortBuffer__AppendTri_fn, 0, false, uVoid_typeof(), 3, ::g::Uno::Int_typeof(), ::g::Uno::Int_typeof(), ::g::Uno::Int_typeof()),
        new uFunction(".ctor", NULL, (void*)UShortBuffer__New3_fn, 0, true, UShortBuffer_typeof(), 0),
        new uFunction("Set", NULL, (void*)UShortBuffer__Set_fn, 0, false, uVoid_typeof(), 2, ::g::Uno::Int_typeof(), ::g::Uno::UShort_typeof()));
    return type;
}

// public UShortBuffer() :170
void UShortBuffer__ctor_2_fn(UShortBuffer* __this)
{
    __this->ctor_2();
}

// public void Append(int value) :182
void UShortBuffer__Append_fn(UShortBuffer* __this, int* value)
{
    __this->Append(*value);
}

// public void Append(ushort value) :177
void UShortBuffer__Append1_fn(UShortBuffer* __this, uint16_t* value)
{
    __this->Append1(*value);
}

// public void AppendTri(int a, int b, int c) :187
void UShortBuffer__AppendTri_fn(UShortBuffer* __this, int* a, int* b, int* c)
{
    __this->AppendTri(*a, *b, *c);
}

// public UShortBuffer New() :170
void UShortBuffer__New3_fn(UShortBuffer** __retval)
{
    *__retval = UShortBuffer::New3();
}

// public void Set(int offset, ushort value) :173
void UShortBuffer__Set_fn(UShortBuffer* __this, int* offset, uint16_t* value)
{
    __this->Set(*offset, *value);
}

// public UShortBuffer() [instance] :170
void UShortBuffer::ctor_2()
{
    ctor_1(2, 32);
}

// public void Append(int value) [instance] :182
void UShortBuffer::Append(int value)
{
    CheckGrow();
    Set(size++, (uint16_t)value);
}

// public void Append(ushort value) [instance] :177
void UShortBuffer::Append1(uint16_t value)
{
    CheckGrow();
    Set(size++, value);
}

// public void AppendTri(int a, int b, int c) [instance] :187
void UShortBuffer::AppendTri(int a, int b, int c)
{
    Append1((uint16_t)a);
    Append1((uint16_t)b);
    Append1((uint16_t)c);
}

// public void Set(int offset, ushort value) [instance] :173
void UShortBuffer::Set(int offset, uint16_t value)
{
    uPtr(back)->Set23(offset * typeSize, value, true);
}

// public UShortBuffer New() [static] :170
UShortBuffer* UShortBuffer::New3()
{
    UShortBuffer* obj1 = (UShortBuffer*)uNew(UShortBuffer_typeof());
    obj1->ctor_2();
    return obj1;
}
// }

}}}} // ::g::Fuse::Drawing::Internal
