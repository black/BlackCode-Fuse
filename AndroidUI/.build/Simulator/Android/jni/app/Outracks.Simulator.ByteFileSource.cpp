// This file was generated based on 'C:\Users\Kuro\Documents\Fuse\Android UI\.build\Simulator\Android\.simulator\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#include <app/Outracks.Simulator.ArrayStream.h>
#include <app/Outracks.Simulator.ByteFileSource.h>
#include <app/Uno.Byte.h>
#include <app/Uno.IO.Stream.h>
#include <app/Uno.String.h>

namespace app {
namespace Outracks {
namespace Simulator {

ByteFileSource__uType* ByteFileSource__typeof()
{
    static ::uStaticStrong<ByteFileSource__uType*> type;
    if (type != NULL) return type;

    type = (ByteFileSource__uType*)::uAllocClassType(sizeof(ByteFileSource__uType), "Outracks.Simulator.ByteFileSource", false, 0, 1, 0);

    type->SetBaseType(::app::Uno::UX::FileSource__typeof());
    type->__fp_OpenRead = (::app::Uno::IO::Stream*(*)(::app::Uno::UX::FileSource*))ByteFileSource__OpenRead;
    type->__fp_ReadAllBytes = (::uArray*(*)(::app::Uno::UX::FileSource*))ByteFileSource__ReadAllBytes;

    type->SetStrongRefs(
        "_bytes", offsetof(ByteFileSource, _bytes));

    type->SetFields(1,
        ::uNewField("_bytes", NULL, offsetof(ByteFileSource, _bytes), ::uGetArrayType(::app::Uno::Byte__typeof())));

    type->SetFunctions(2,
        ::uNewFunction(".ctor", ByteFileSource__New_1, 0, true, ByteFileSource__typeof(), ::app::Uno::String__typeof(), ::uGetArrayType(::app::Uno::Byte__typeof())),
        ::uNewFunctionVoid("Update", ByteFileSource__Update, 0, false, ::uGetArrayType(::app::Uno::Byte__typeof())));

    ::uRegisterType(type);
    return type;
}

void ByteFileSource___ObjInit_1(ByteFileSource* __this, ::uString* path, ::uArray* bytes)
{
    ::app::Uno::UX::FileSource___ObjInit(__this, path);
    __this->_bytes = bytes;
}

ByteFileSource* ByteFileSource__New_1(::uStatic* __this, ::uString* path, ::uArray* bytes)
{
    ByteFileSource* inst = (ByteFileSource*)::uAllocObject(sizeof(ByteFileSource), ByteFileSource__typeof());
    inst->_ObjInit_1(path, bytes);
    return inst;
}

::app::Uno::IO::Stream* ByteFileSource__OpenRead(ByteFileSource* __this)
{
    return (::app::Uno::IO::Stream*)::app::Outracks::Simulator::ArrayStream__New_1(NULL, __this->_bytes);
}

::uArray* ByteFileSource__ReadAllBytes(ByteFileSource* __this)
{
    return __this->_bytes;
}

void ByteFileSource__Update(ByteFileSource* __this, ::uArray* newBytes)
{
    __this->_bytes = newBytes;
    __this->OnDataChanged();
}

}}}
