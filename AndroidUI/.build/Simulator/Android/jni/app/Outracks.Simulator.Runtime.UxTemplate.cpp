// This file was generated based on 'C:\Users\Kuro\Documents\Fuse\Android UI\.build\Simulator\Android\.simulator\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#include <app/Outracks.Simulator.Runtime.UxTemplate.h>
#include <app/Uno.Bool.h>
#include <app/Uno.Func__object__object.h>

namespace app {
namespace Outracks {
namespace Simulator {
namespace Runtime {

UxTemplate__uType* UxTemplate__typeof()
{
    static ::uStaticStrong<UxTemplate__uType*> type;
    if (type != NULL) return type;

    type = (UxTemplate__uType*)::uAllocClassType(sizeof(UxTemplate__uType), "Outracks.Simulator.Runtime.UxTemplate", false, 1, 2, 0);

    type->__interface_0.__fp_Apply = (bool(*)(void*, ::uObject*))UxTemplate__Apply;

    type->SetInterfaces(
        ::app::Uno::UX::ITemplate__typeof(), offsetof(UxTemplate__uType, __interface_0));

    type->SetStrongRefs(
        "_apply", offsetof(UxTemplate, _apply),
        "_matches", offsetof(UxTemplate, _matches));

    type->SetFields(2,
        ::uNewField("_apply", NULL, offsetof(UxTemplate, _apply), ::app::Uno::Func__object__object__typeof()),
        ::uNewField("_matches", NULL, offsetof(UxTemplate, _matches), ::app::Uno::Func__object__object__typeof()));

    type->SetFunctions(2,
        ::uNewFunction("Apply", UxTemplate__Apply, 0, false, ::app::Uno::Bool__typeof(), ::uObject__typeof()),
        ::uNewFunction(".ctor", UxTemplate__New_1, 0, true, UxTemplate__typeof(), ::app::Uno::Func__object__object__typeof(), ::app::Uno::Func__object__object__typeof()));

    ::uRegisterType(type);
    return type;
}

void UxTemplate___ObjInit(UxTemplate* __this, ::uDelegate* matches, ::uDelegate* applyMethod)
{
    __this->_matches = matches;
    __this->_apply = applyMethod;
}

bool UxTemplate__Apply(UxTemplate* __this, ::uObject* obj)
{
    if (!::uUnbox< bool>(::app::Uno::Bool__typeof(), ::uPtr< ::uDelegate*>(__this->_matches)->Invoke< ::uObject*, ::uObject*>(obj)))
    {
        return true;
    }

    return ::uUnbox< bool>(::app::Uno::Bool__typeof(), ::uPtr< ::uDelegate*>(__this->_apply)->Invoke< ::uObject*, ::uObject*>(obj));
}

UxTemplate* UxTemplate__New_1(::uStatic* __this, ::uDelegate* matches, ::uDelegate* applyMethod)
{
    UxTemplate* inst = (UxTemplate*)::uAllocObject(sizeof(UxTemplate), UxTemplate__typeof());
    inst->_ObjInit(matches, applyMethod);
    return inst;
}

}}}}
