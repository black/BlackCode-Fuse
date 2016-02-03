#include <app/Uno.Compiler.ImportServices.FilenameAttribute.h>

namespace app {
namespace Uno {
namespace Compiler {
namespace ImportServices {

// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Compiler\ImportServices\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

FilenameAttribute__uType* FilenameAttribute__typeof()
{
    static ::uStaticStrong<FilenameAttribute__uType*> type;
    if (type != NULL) return type;

    type = (FilenameAttribute__uType*)::uAllocClassType(sizeof(FilenameAttribute__uType), "Uno.Compiler.ImportServices.FilenameAttribute", false, 0, 0, 0);

    type->SetBaseType(::app::Uno::Attribute__typeof());

    type->SetFunctions(1,
        ::uNewFunction(".ctor", FilenameAttribute__New_1, 0, true, FilenameAttribute__typeof()));

    ::uRegisterType(type);
    return type;
}

void FilenameAttribute___ObjInit_1(FilenameAttribute* __this)
{
    ::app::Uno::Attribute___ObjInit(__this);
}

FilenameAttribute* FilenameAttribute__New_1(::uStatic* __this)
{
    FilenameAttribute* inst = (FilenameAttribute*)::uAllocObject(sizeof(FilenameAttribute), FilenameAttribute__typeof());
    inst->_ObjInit_1();
    return inst;
}

}}}}
