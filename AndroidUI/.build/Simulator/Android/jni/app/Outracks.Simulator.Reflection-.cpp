#include <app/Outracks.Simulator.Bytecode.Parameter.h>
#include <app/Outracks.Simulator.Bytecode.Signature.h>
#include <app/Outracks.Simulator.Bytecode.TypeMemberName.h>
#include <app/Outracks.Simulator.Bytecode.TypeName.h>
#include <app/Outracks.Simulator.ImmutableList__Outracks_Simulator_Bytecode_Parameter.h>
#include <app/Outracks.Simulator.Reflection.DelegateReflection.h>
#include <app/Uno.Action__object__string__object.h>
#include <app/Uno.Bool.h>
#include <app/Uno.Collections.EnumerableExtensions.h>
#include <app/Uno.Collections.IEnumerable__Outracks_Simulator_Bytecode_Parameter.h>
#include <app/Uno.Collections.IEnumerable__string.h>
#include <app/Uno.Func__object__string__bool.h>
#include <app/Uno.Func__object__string__object.h>
#include <app/Uno.Func__object__string__object____object.h>
#include <app/Uno.Func__object__string__string____string__object.h>
#include <app/Uno.Func__Outracks_Simulator_Bytecode_Parameter__string.h>
#include <app/Uno.Func__string__object____object.h>
#include <app/Uno.Func__string__string__object.h>
#include <app/Uno.Func__string__string__object____object.h>
#include <app/Uno.String.h>

namespace app {
namespace Outracks {
namespace Simulator {
namespace Reflection {

// This file was generated based on 'C:\ProgramData\Uno\Packages\Outracks.Simulator.Reflection.Uno\0.1.0\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

DelegateReflection__uType* DelegateReflection__typeof()
{
    static ::uStaticStrong<DelegateReflection__uType*> type;
    if (type != NULL) return type;

    type = (DelegateReflection__uType*)::uAllocClassType(sizeof(DelegateReflection__uType), "Outracks.Simulator.Reflection.DelegateReflection", false, 1, 12, 0);

    type->__interface_0.__fp_CallDynamic = (::uObject*(*)(void*, ::uObject*, ::app::Outracks::Simulator::Bytecode::TypeMemberName*, ::uArray*))DelegateReflection__Outracks_Simulator_Runtime_IReflection_CallDynamic;
    type->__interface_0.__fp_CallStatic = (::uObject*(*)(void*, ::app::Outracks::Simulator::Bytecode::TypeName*, ::app::Outracks::Simulator::Bytecode::TypeMemberName*, ::uArray*))DelegateReflection__Outracks_Simulator_Runtime_IReflection_CallStatic;
    type->__interface_0.__fp_SetPropertyValue = (void(*)(void*, ::uObject*, ::app::Outracks::Simulator::Bytecode::TypeMemberName*, ::uObject*))DelegateReflection__Outracks_Simulator_Runtime_IReflection_SetPropertyValue;
    type->__interface_0.__fp_GetPropertyValue = (::uObject*(*)(void*, ::uObject*, ::app::Outracks::Simulator::Bytecode::TypeMemberName*))DelegateReflection__Outracks_Simulator_Runtime_IReflection_GetPropertyValue;
    type->__interface_0.__fp_GetStaticPropertyOrFieldValue = (::uObject*(*)(void*, ::app::Outracks::Simulator::Bytecode::TypeName*, ::app::Outracks::Simulator::Bytecode::TypeMemberName*))DelegateReflection__Outracks_Simulator_Runtime_IReflection_GetStaticPropertyOrFieldValue;
    type->__interface_0.__fp_CreateDelegate = (::uObject*(*)(void*, ::app::Outracks::Simulator::Bytecode::TypeName*, ::uObject*, ::app::Outracks::Simulator::Bytecode::TypeMemberName*, ::app::Outracks::Simulator::Bytecode::Signature*))DelegateReflection__Outracks_Simulator_Runtime_IReflection_CreateDelegate;
    type->__interface_0.__fp_AddEventHandler = (void(*)(void*, ::uObject*, ::app::Outracks::Simulator::Bytecode::TypeMemberName*, ::uObject*))DelegateReflection__Outracks_Simulator_Runtime_IReflection_AddEventHandler;
    type->__interface_0.__fp_RemoveEventHandler = (void(*)(void*, ::uObject*, ::app::Outracks::Simulator::Bytecode::TypeMemberName*, ::uObject*))DelegateReflection__Outracks_Simulator_Runtime_IReflection_RemoveEventHandler;
    type->__interface_0.__fp_Instantiate = (::uObject*(*)(void*, ::app::Outracks::Simulator::Bytecode::TypeName*, ::uArray*))DelegateReflection__Outracks_Simulator_Runtime_IReflection_Instantiate;
    type->__interface_0.__fp_IsSubtype = (bool(*)(void*, ::uObject*, ::app::Outracks::Simulator::Bytecode::TypeName*))DelegateReflection__Outracks_Simulator_Runtime_IReflection_IsSubtype;
    type->__interface_0.__fp_IsType = (bool(*)(void*, ::uObject*, ::app::Outracks::Simulator::Bytecode::TypeName*))DelegateReflection__Outracks_Simulator_Runtime_IReflection_IsType;
    type->__interface_0.__fp_GetEnumValue = (::uObject*(*)(void*, ::app::Outracks::Simulator::Bytecode::TypeName*, ::app::Outracks::Simulator::Bytecode::TypeMemberName*))DelegateReflection__Outracks_Simulator_Runtime_IReflection_GetEnumValue;

    type->SetInterfaces(
        ::app::Outracks::Simulator::Runtime::IReflection__typeof(), offsetof(DelegateReflection__uType, __interface_0));

    type->SetStrongRefs(
        "AddEventHandler", offsetof(DelegateReflection, AddEventHandler),
        "CallDynamic", offsetof(DelegateReflection, CallDynamic),
        "CallStatic", offsetof(DelegateReflection, CallStatic),
        "CreateDelegate", offsetof(DelegateReflection, CreateDelegate),
        "GetEnumValue", offsetof(DelegateReflection, GetEnumValue),
        "GetPropertyValue", offsetof(DelegateReflection, GetPropertyValue),
        "GetStaticPropertyOrFieldValue", offsetof(DelegateReflection, GetStaticPropertyOrFieldValue),
        "Instantiate", offsetof(DelegateReflection, Instantiate),
        "IsSubtype", offsetof(DelegateReflection, IsSubtype),
        "IsType", offsetof(DelegateReflection, IsType),
        "RemoveEventHandler", offsetof(DelegateReflection, RemoveEventHandler),
        "SetPropertyValue", offsetof(DelegateReflection, SetPropertyValue));

    type->SetFields(12,
        ::uNewField("AddEventHandler", NULL, offsetof(DelegateReflection, AddEventHandler), ::app::Uno::Action__object__string__object__typeof()),
        ::uNewField("CallDynamic", NULL, offsetof(DelegateReflection, CallDynamic), ::app::Uno::Func__object__string__object____object__typeof()),
        ::uNewField("CallStatic", NULL, offsetof(DelegateReflection, CallStatic), ::app::Uno::Func__string__string__object____object__typeof()),
        ::uNewField("CreateDelegate", NULL, offsetof(DelegateReflection, CreateDelegate), ::app::Uno::Func__object__string__string____string__object__typeof()),
        ::uNewField("GetEnumValue", NULL, offsetof(DelegateReflection, GetEnumValue), ::app::Uno::Func__string__string__object__typeof()),
        ::uNewField("GetPropertyValue", NULL, offsetof(DelegateReflection, GetPropertyValue), ::app::Uno::Func__object__string__object__typeof()),
        ::uNewField("GetStaticPropertyOrFieldValue", NULL, offsetof(DelegateReflection, GetStaticPropertyOrFieldValue), ::app::Uno::Func__string__string__object__typeof()),
        ::uNewField("Instantiate", NULL, offsetof(DelegateReflection, Instantiate), ::app::Uno::Func__string__object____object__typeof()),
        ::uNewField("IsSubtype", NULL, offsetof(DelegateReflection, IsSubtype), ::app::Uno::Func__object__string__bool__typeof()),
        ::uNewField("IsType", NULL, offsetof(DelegateReflection, IsType), ::app::Uno::Func__object__string__bool__typeof()),
        ::uNewField("RemoveEventHandler", NULL, offsetof(DelegateReflection, RemoveEventHandler), ::app::Uno::Action__object__string__object__typeof()),
        ::uNewField("SetPropertyValue", NULL, offsetof(DelegateReflection, SetPropertyValue), ::app::Uno::Action__object__string__object__typeof()));

    type->SetFunctions(14,
        ::uNewFunction(".ctor", DelegateReflection__New_1, 0, true, DelegateReflection__typeof()),
        ::uNewFunctionVoid("Outracks.Simulator.Runtime.IReflection.AddEventHandler", DelegateReflection__Outracks_Simulator_Runtime_IReflection_AddEventHandler, 0, false, ::uObject__typeof(), ::app::Outracks::Simulator::Bytecode::TypeMemberName__typeof(), ::uObject__typeof()),
        ::uNewFunction("Outracks.Simulator.Runtime.IReflection.CallDynamic", DelegateReflection__Outracks_Simulator_Runtime_IReflection_CallDynamic, 0, false, ::uObject__typeof(), ::uObject__typeof(), ::app::Outracks::Simulator::Bytecode::TypeMemberName__typeof(), ::uGetArrayType(::uObject__typeof())),
        ::uNewFunction("Outracks.Simulator.Runtime.IReflection.CallStatic", DelegateReflection__Outracks_Simulator_Runtime_IReflection_CallStatic, 0, false, ::uObject__typeof(), ::app::Outracks::Simulator::Bytecode::TypeName__typeof(), ::app::Outracks::Simulator::Bytecode::TypeMemberName__typeof(), ::uGetArrayType(::uObject__typeof())),
        ::uNewFunction("Outracks.Simulator.Runtime.IReflection.CreateDelegate", DelegateReflection__Outracks_Simulator_Runtime_IReflection_CreateDelegate, 0, false, ::uObject__typeof(), ::app::Outracks::Simulator::Bytecode::TypeName__typeof(), ::uObject__typeof(), ::app::Outracks::Simulator::Bytecode::TypeMemberName__typeof(), ::app::Outracks::Simulator::Bytecode::Signature__typeof()),
        ::uNewFunction("Outracks.Simulator.Runtime.IReflection.GetEnumValue", DelegateReflection__Outracks_Simulator_Runtime_IReflection_GetEnumValue, 0, false, ::uObject__typeof(), ::app::Outracks::Simulator::Bytecode::TypeName__typeof(), ::app::Outracks::Simulator::Bytecode::TypeMemberName__typeof()),
        ::uNewFunction("Outracks.Simulator.Runtime.IReflection.GetPropertyValue", DelegateReflection__Outracks_Simulator_Runtime_IReflection_GetPropertyValue, 0, false, ::uObject__typeof(), ::uObject__typeof(), ::app::Outracks::Simulator::Bytecode::TypeMemberName__typeof()),
        ::uNewFunction("Outracks.Simulator.Runtime.IReflection.GetStaticPropertyOrFieldValue", DelegateReflection__Outracks_Simulator_Runtime_IReflection_GetStaticPropertyOrFieldValue, 0, false, ::uObject__typeof(), ::app::Outracks::Simulator::Bytecode::TypeName__typeof(), ::app::Outracks::Simulator::Bytecode::TypeMemberName__typeof()),
        ::uNewFunction("Outracks.Simulator.Runtime.IReflection.Instantiate", DelegateReflection__Outracks_Simulator_Runtime_IReflection_Instantiate, 0, false, ::uObject__typeof(), ::app::Outracks::Simulator::Bytecode::TypeName__typeof(), ::uGetArrayType(::uObject__typeof())),
        ::uNewFunction("Outracks.Simulator.Runtime.IReflection.IsSubtype", DelegateReflection__Outracks_Simulator_Runtime_IReflection_IsSubtype, 0, false, ::app::Uno::Bool__typeof(), ::uObject__typeof(), ::app::Outracks::Simulator::Bytecode::TypeName__typeof()),
        ::uNewFunction("Outracks.Simulator.Runtime.IReflection.IsType", DelegateReflection__Outracks_Simulator_Runtime_IReflection_IsType, 0, false, ::app::Uno::Bool__typeof(), ::uObject__typeof(), ::app::Outracks::Simulator::Bytecode::TypeName__typeof()),
        ::uNewFunctionVoid("Outracks.Simulator.Runtime.IReflection.RemoveEventHandler", DelegateReflection__Outracks_Simulator_Runtime_IReflection_RemoveEventHandler, 0, false, ::uObject__typeof(), ::app::Outracks::Simulator::Bytecode::TypeMemberName__typeof(), ::uObject__typeof()),
        ::uNewFunctionVoid("Outracks.Simulator.Runtime.IReflection.SetPropertyValue", DelegateReflection__Outracks_Simulator_Runtime_IReflection_SetPropertyValue, 0, false, ::uObject__typeof(), ::app::Outracks::Simulator::Bytecode::TypeMemberName__typeof(), ::uObject__typeof()),
        ::uNewFunction("SelectFullName", DelegateReflection__SelectFullName, 0, true, ::app::Uno::String__typeof(), ::app::Outracks::Simulator::Bytecode::Parameter__typeof()));

    ::uRegisterType(type);
    return type;
}

void DelegateReflection___ObjInit(DelegateReflection* __this)
{
}

DelegateReflection* DelegateReflection__New_1(::uStatic* __this)
{
    DelegateReflection* inst = (DelegateReflection*)::uAllocObject(sizeof(DelegateReflection), DelegateReflection__typeof());
    inst->_ObjInit();
    return inst;
}

void DelegateReflection__Outracks_Simulator_Runtime_IReflection_AddEventHandler(DelegateReflection* __this, ::uObject* instance, ::app::Outracks::Simulator::Bytecode::TypeMemberName* member, ::uObject* handlerDelegate)
{
    ::uPtr< ::uDelegate*>(__this->AddEventHandler)->InvokeVoid< ::uObject*, ::uString*, ::uObject*>(instance, ::uPtr< ::app::Outracks::Simulator::Bytecode::TypeMemberName*>(member)->Name, handlerDelegate);
}

::uObject* DelegateReflection__Outracks_Simulator_Runtime_IReflection_CallDynamic(DelegateReflection* __this, ::uObject* instance, ::app::Outracks::Simulator::Bytecode::TypeMemberName* methodName, ::uArray* arguments)
{
    return ::uPtr< ::uDelegate*>(__this->CallDynamic)->Invoke< ::uObject*, ::uObject*, ::uString*, ::uArray*>(instance, ::uPtr< ::app::Outracks::Simulator::Bytecode::TypeMemberName*>(methodName)->Name, arguments);
}

::uObject* DelegateReflection__Outracks_Simulator_Runtime_IReflection_CallStatic(DelegateReflection* __this, ::app::Outracks::Simulator::Bytecode::TypeName* typeName, ::app::Outracks::Simulator::Bytecode::TypeMemberName* methodName, ::uArray* arguments)
{
    return ::uPtr< ::uDelegate*>(__this->CallStatic)->Invoke< ::uObject*, ::uString*, ::uString*, ::uArray*>(::uPtr< ::app::Outracks::Simulator::Bytecode::TypeName*>(typeName)->FullName(), ::uPtr< ::app::Outracks::Simulator::Bytecode::TypeMemberName*>(methodName)->Name, arguments);
}

::uObject* DelegateReflection__Outracks_Simulator_Runtime_IReflection_CreateDelegate(DelegateReflection* __this, ::app::Outracks::Simulator::Bytecode::TypeName* delegateType, ::uObject* instance, ::app::Outracks::Simulator::Bytecode::TypeMemberName* methodName, ::app::Outracks::Simulator::Bytecode::Signature* methodSignature)
{
    return ::uPtr< ::uDelegate*>(__this->CreateDelegate)->Invoke< ::uObject*, ::uObject*, ::uString*, ::uArray*, ::uString*>(instance, ::uPtr< ::app::Outracks::Simulator::Bytecode::TypeMemberName*>(methodName)->Name, ::app::Uno::Collections::EnumerableExtensions__ToArray__string(NULL, ::app::Uno::Collections::EnumerableExtensions__Select__Outracks_Simulator_Bytecode_Parameter__string(NULL, (::uObject*)::uPtr< ::app::Outracks::Simulator::Bytecode::Signature*>(methodSignature)->Parameters, ::uNewDelegateNonVirt(::app::Uno::Func__Outracks_Simulator_Bytecode_Parameter__string__typeof(), (const void*)DelegateReflection__SelectFullName))), ::uPtr< ::app::Outracks::Simulator::Bytecode::TypeName*>(delegateType)->FullName());
}

::uObject* DelegateReflection__Outracks_Simulator_Runtime_IReflection_GetEnumValue(DelegateReflection* __this, ::app::Outracks::Simulator::Bytecode::TypeName* enumType, ::app::Outracks::Simulator::Bytecode::TypeMemberName* valueName)
{
    return ::uPtr< ::uDelegate*>(__this->GetEnumValue)->Invoke< ::uObject*, ::uString*, ::uString*>(::uPtr< ::app::Outracks::Simulator::Bytecode::TypeName*>(enumType)->FullName(), ::uPtr< ::app::Outracks::Simulator::Bytecode::TypeMemberName*>(valueName)->Name);
}

::uObject* DelegateReflection__Outracks_Simulator_Runtime_IReflection_GetPropertyValue(DelegateReflection* __this, ::uObject* instance, ::app::Outracks::Simulator::Bytecode::TypeMemberName* propertyName)
{
    return ::uPtr< ::uDelegate*>(__this->GetPropertyValue)->Invoke< ::uObject*, ::uObject*, ::uString*>(instance, ::uPtr< ::app::Outracks::Simulator::Bytecode::TypeMemberName*>(propertyName)->Name);
}

::uObject* DelegateReflection__Outracks_Simulator_Runtime_IReflection_GetStaticPropertyOrFieldValue(DelegateReflection* __this, ::app::Outracks::Simulator::Bytecode::TypeName* typeName, ::app::Outracks::Simulator::Bytecode::TypeMemberName* memberName)
{
    return ::uPtr< ::uDelegate*>(__this->GetStaticPropertyOrFieldValue)->Invoke< ::uObject*, ::uString*, ::uString*>(::uPtr< ::app::Outracks::Simulator::Bytecode::TypeName*>(typeName)->FullName(), ::uPtr< ::app::Outracks::Simulator::Bytecode::TypeMemberName*>(memberName)->Name);
}

::uObject* DelegateReflection__Outracks_Simulator_Runtime_IReflection_Instantiate(DelegateReflection* __this, ::app::Outracks::Simulator::Bytecode::TypeName* typeName, ::uArray* args)
{
    return ::uPtr< ::uDelegate*>(__this->Instantiate)->Invoke< ::uObject*, ::uString*, ::uArray*>(::uPtr< ::app::Outracks::Simulator::Bytecode::TypeName*>(typeName)->FullName(), args);
}

bool DelegateReflection__Outracks_Simulator_Runtime_IReflection_IsSubtype(DelegateReflection* __this, ::uObject* obj, ::app::Outracks::Simulator::Bytecode::TypeName* typeName)
{
    return ::uPtr< ::uDelegate*>(__this->IsSubtype)->Invoke< bool, ::uObject*, ::uString*>(obj, ::uPtr< ::app::Outracks::Simulator::Bytecode::TypeName*>(typeName)->FullName());
}

bool DelegateReflection__Outracks_Simulator_Runtime_IReflection_IsType(DelegateReflection* __this, ::uObject* obj, ::app::Outracks::Simulator::Bytecode::TypeName* typeName)
{
    return ::uPtr< ::uDelegate*>(__this->IsType)->Invoke< bool, ::uObject*, ::uString*>(obj, ::uPtr< ::app::Outracks::Simulator::Bytecode::TypeName*>(typeName)->FullName());
}

void DelegateReflection__Outracks_Simulator_Runtime_IReflection_RemoveEventHandler(DelegateReflection* __this, ::uObject* instance, ::app::Outracks::Simulator::Bytecode::TypeMemberName* member, ::uObject* handlerDelegate)
{
    ::uPtr< ::uDelegate*>(__this->RemoveEventHandler)->InvokeVoid< ::uObject*, ::uString*, ::uObject*>(instance, ::uPtr< ::app::Outracks::Simulator::Bytecode::TypeMemberName*>(member)->Name, handlerDelegate);
}

void DelegateReflection__Outracks_Simulator_Runtime_IReflection_SetPropertyValue(DelegateReflection* __this, ::uObject* instance, ::app::Outracks::Simulator::Bytecode::TypeMemberName* propertyName, ::uObject* value)
{
    ::uPtr< ::uDelegate*>(__this->SetPropertyValue)->InvokeVoid< ::uObject*, ::uString*, ::uObject*>(instance, ::uPtr< ::app::Outracks::Simulator::Bytecode::TypeMemberName*>(propertyName)->Name, value);
}

::uString* DelegateReflection__SelectFullName(::uStatic* __this, ::app::Outracks::Simulator::Bytecode::Parameter* tn)
{
    return ::uPtr< ::app::Outracks::Simulator::Bytecode::TypeName*>(::uPtr< ::app::Outracks::Simulator::Bytecode::Parameter*>(tn)->Type)->FullName();
}

}}}}
