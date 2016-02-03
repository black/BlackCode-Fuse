// This file was generated based on 'C:\Users\Kuro\Documents\Fuse\Android UI\.build\Simulator\Android\.simulator\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#include <app/Outracks.Simulator.Runtime.UxFactory.h>
#include <app/Uno.Func__object.h>

namespace app {
namespace Outracks {
namespace Simulator {
namespace Runtime {

UxFactory__uType* UxFactory__typeof()
{
    static ::uStaticStrong<UxFactory__uType*> type;
    if (type != NULL) return type;

    type = (UxFactory__uType*)::uAllocClassType(sizeof(UxFactory__uType), "Outracks.Simulator.Runtime.UxFactory", false, 1, 1, 0);

    type->__interface_0.__fp_New_1 = (::uObject*(*)(void*))UxFactory__New_1;

    type->SetInterfaces(
        ::app::Uno::UX::IFactory__typeof(), offsetof(UxFactory__uType, __interface_0));

    type->SetStrongRefs(
        "_create", offsetof(UxFactory, _create));

    type->SetFields(1,
        ::uNewField("_create", NULL, offsetof(UxFactory, _create), ::app::Uno::Func__object__typeof()));

    type->SetFunctions(2,
        ::uNewFunction("New", UxFactory__New_1, 0, false, ::uObject__typeof()),
        ::uNewFunction(".ctor", UxFactory__New_2, 0, true, UxFactory__typeof(), ::app::Uno::Func__object__typeof()));

    ::uRegisterType(type);
    return type;
}

void UxFactory___ObjInit(UxFactory* __this, ::uDelegate* create)
{
    __this->_create = create;
}

::uObject* UxFactory__New_1(UxFactory* __this)
{
    return ::uPtr< ::uDelegate*>(__this->_create)->Invoke< ::uObject*>();
}

UxFactory* UxFactory__New_2(::uStatic* __this, ::uDelegate* create)
{
    UxFactory* inst = (UxFactory*)::uAllocObject(sizeof(UxFactory), UxFactory__typeof());
    inst->_ObjInit(create);
    return inst;
}

}}}}
