// This file was generated based on 'C:\Users\Kuro\Documents\Fuse\Android UI\.build\Simulator\Android\Preamble\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#include <Outracks.Simulator.ArrayStream.h>
#include <Outracks.Simulator.ByteFileSource.h>
#include <Uno.Byte.h>
#include <Uno.IO.Stream.h>
#include <Uno.String.h>
static uType* TYPES[1];

namespace g{
namespace Outracks{
namespace Simulator{

// public sealed class ByteFileSource :121
// {
::g::Uno::UX::FileSource_type* ByteFileSource_typeof()
{
    static uSStrong< ::g::Uno::UX::FileSource_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 3;
    options.ObjectSize = sizeof(ByteFileSource);
    options.TypeSize = sizeof(::g::Uno::UX::FileSource_type);
    type = (::g::Uno::UX::FileSource_type*)uClassType::New("Outracks.Simulator.ByteFileSource", options);
    type->SetBase(::g::Uno::UX::FileSource_typeof());
    type->fp_OpenRead = (void(*)(::g::Uno::UX::FileSource*, ::g::Uno::IO::Stream**))ByteFileSource__OpenRead_fn;
    type->fp_ReadAllBytes = (void(*)(::g::Uno::UX::FileSource*, uArray**))ByteFileSource__ReadAllBytes_fn;
    ::TYPES[0] = ::g::Uno::IO::Stream_typeof();
    type->SetFields(2,
        ::g::Uno::Byte_typeof()->Array(), offsetof(::g::Outracks::Simulator::ByteFileSource, _bytes), 0);
    type->Reflection.SetFunctions(2,
        new uFunction(".ctor", NULL, (void*)ByteFileSource__New1_fn, 0, true, ByteFileSource_typeof(), 2, ::g::Uno::String_typeof(), ::g::Uno::Byte_typeof()->Array()),
        new uFunction("Update", NULL, (void*)ByteFileSource__Update_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::Byte_typeof()->Array()));
    return type;
}

// public ByteFileSource(string path, byte[] bytes) :131
void ByteFileSource__ctor_1_fn(ByteFileSource* __this, uString* path, uArray* bytes)
{
    __this->ctor_1(path, bytes);
}

// public ByteFileSource New(string path, byte[] bytes) :131
void ByteFileSource__New1_fn(uString* path, uArray* bytes, ByteFileSource** __retval)
{
    *__retval = ByteFileSource::New1(path, bytes);
}

// public override sealed Uno.IO.Stream OpenRead() :136
void ByteFileSource__OpenRead_fn(ByteFileSource* __this, ::g::Uno::IO::Stream** __retval)
{
    return *__retval = ::g::Outracks::Simulator::ArrayStream::New1(__this->_bytes), void();
}

// public override sealed byte[] ReadAllBytes() :140
void ByteFileSource__ReadAllBytes_fn(ByteFileSource* __this, uArray** __retval)
{
    return *__retval = __this->_bytes, void();
}

// public void Update(byte[] newBytes) :124
void ByteFileSource__Update_fn(ByteFileSource* __this, uArray* newBytes)
{
    __this->Update(newBytes);
}

// public ByteFileSource(string path, byte[] bytes) [instance] :131
void ByteFileSource::ctor_1(uString* path, uArray* bytes)
{
    ctor_(path);
    _bytes = bytes;
}

// public void Update(byte[] newBytes) [instance] :124
void ByteFileSource::Update(uArray* newBytes)
{
    _bytes = newBytes;
    OnDataChanged();
}

// public ByteFileSource New(string path, byte[] bytes) [static] :131
ByteFileSource* ByteFileSource::New1(uString* path, uArray* bytes)
{
    ByteFileSource* obj1 = (ByteFileSource*)uNew(ByteFileSource_typeof());
    obj1->ctor_1(path, bytes);
    return obj1;
}
// }

}}} // ::g::Outracks::Simulator
