#include <app/Uno.Platform2.Implementation.InvokedFromNativeCodeAttribute.h>

namespace app {
namespace Uno {
namespace Platform2 {
namespace Implementation {

// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Platform2\Implementation\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

InvokedFromNativeCodeAttribute__uType* InvokedFromNativeCodeAttribute__typeof()
{
    static ::uStaticStrong<InvokedFromNativeCodeAttribute__uType*> type;
    if (type != NULL) return type;

    type = (InvokedFromNativeCodeAttribute__uType*)::uAllocClassType(sizeof(InvokedFromNativeCodeAttribute__uType), "Uno.Platform2.Implementation.InvokedFromNativeCodeAttribute", false, 0, 0, 0);

    type->SetBaseType(::app::Uno::Attribute__typeof());

    type->SetFunctions(1,
        ::uNewFunction(".ctor", InvokedFromNativeCodeAttribute__New_1, 0, true, InvokedFromNativeCodeAttribute__typeof()));

    ::uRegisterType(type);
    return type;
}

void InvokedFromNativeCodeAttribute___ObjInit_1(InvokedFromNativeCodeAttribute* __this)
{
    ::app::Uno::Attribute___ObjInit(__this);
}

InvokedFromNativeCodeAttribute* InvokedFromNativeCodeAttribute__New_1(::uStatic* __this)
{
    InvokedFromNativeCodeAttribute* inst = (InvokedFromNativeCodeAttribute*)::uAllocObject(sizeof(InvokedFromNativeCodeAttribute), InvokedFromNativeCodeAttribute__typeof());
    inst->_ObjInit_1();
    return inst;
}

}}}}
