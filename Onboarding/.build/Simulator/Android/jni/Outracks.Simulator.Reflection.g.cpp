// This file was generated based on '(multiple files)'.
// WARNING: Changes might be lost if you edit this file directly.

#include <Outracks.Simulator.Bytecode.Parameter.h>
#include <Outracks.Simulator.Bytecode.Signature.h>
#include <Outracks.Simulator.Bytecode.TypeMemberName.h>
#include <Outracks.Simulator.Bytecode.TypeName.h>
#include <Outracks.Simulator.ImmutableList-1.h>
#include <Outracks.Simulator.Reflection.DelegateReflection.h>
#include <Uno.Action-3.h>
#include <Uno.Bool.h>
#include <Uno.Collections.EnumerableExtensions.h>
#include <Uno.Collections.IEnumerable-1.h>
#include <Uno.Func-2.h>
#include <Uno.Func-3.h>
#include <Uno.Func-4.h>
#include <Uno.Func-5.h>
#include <Uno.String.h>
static uType* TYPES[16];

namespace g{
namespace Outracks{
namespace Simulator{
namespace Reflection{

// C:\ProgramData\Uno\Packages\Outracks.Simulator.Reflection.Uno\0.1.0\$.uno(62)
// -----------------------------------------------------------------------------

// public sealed class DelegateReflection :62
// {
DelegateReflection_type* DelegateReflection_typeof()
{
    static uSStrong<DelegateReflection_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 12;
    options.InterfaceCount = 1;
    options.ObjectSize = sizeof(DelegateReflection);
    options.TypeSize = sizeof(DelegateReflection_type);
    type = (DelegateReflection_type*)uClassType::New("Outracks.Simulator.Reflection.DelegateReflection", options);
    type->fp_ctor_ = (void*)DelegateReflection__New1_fn;
    type->interface0.fp_CallDynamic = (void(*)(uObject*, uObject*, ::g::Outracks::Simulator::Bytecode::TypeMemberName*, uArray*, uObject**))DelegateReflection__Outracks_Simulator_Runtime_IReflection_CallDynamic_fn;
    type->interface0.fp_CallStatic = (void(*)(uObject*, ::g::Outracks::Simulator::Bytecode::TypeName*, ::g::Outracks::Simulator::Bytecode::TypeMemberName*, uArray*, uObject**))DelegateReflection__Outracks_Simulator_Runtime_IReflection_CallStatic_fn;
    type->interface0.fp_SetPropertyValue = (void(*)(uObject*, uObject*, ::g::Outracks::Simulator::Bytecode::TypeMemberName*, uObject*))DelegateReflection__Outracks_Simulator_Runtime_IReflection_SetPropertyValue_fn;
    type->interface0.fp_GetPropertyValue = (void(*)(uObject*, uObject*, ::g::Outracks::Simulator::Bytecode::TypeMemberName*, uObject**))DelegateReflection__Outracks_Simulator_Runtime_IReflection_GetPropertyValue_fn;
    type->interface0.fp_GetStaticPropertyOrFieldValue = (void(*)(uObject*, ::g::Outracks::Simulator::Bytecode::TypeName*, ::g::Outracks::Simulator::Bytecode::TypeMemberName*, uObject**))DelegateReflection__Outracks_Simulator_Runtime_IReflection_GetStaticPropertyOrFieldValue_fn;
    type->interface0.fp_CreateDelegate = (void(*)(uObject*, ::g::Outracks::Simulator::Bytecode::TypeName*, uObject*, ::g::Outracks::Simulator::Bytecode::TypeMemberName*, ::g::Outracks::Simulator::Bytecode::Signature*, uObject**))DelegateReflection__Outracks_Simulator_Runtime_IReflection_CreateDelegate_fn;
    type->interface0.fp_AddEventHandler = (void(*)(uObject*, uObject*, ::g::Outracks::Simulator::Bytecode::TypeMemberName*, uObject*))DelegateReflection__Outracks_Simulator_Runtime_IReflection_AddEventHandler_fn;
    type->interface0.fp_RemoveEventHandler = (void(*)(uObject*, uObject*, ::g::Outracks::Simulator::Bytecode::TypeMemberName*, uObject*))DelegateReflection__Outracks_Simulator_Runtime_IReflection_RemoveEventHandler_fn;
    type->interface0.fp_Instantiate = (void(*)(uObject*, ::g::Outracks::Simulator::Bytecode::TypeName*, uArray*, uObject**))DelegateReflection__Outracks_Simulator_Runtime_IReflection_Instantiate_fn;
    type->interface0.fp_IsSubtype = (void(*)(uObject*, uObject*, ::g::Outracks::Simulator::Bytecode::TypeName*, bool*))DelegateReflection__Outracks_Simulator_Runtime_IReflection_IsSubtype_fn;
    type->interface0.fp_IsType = (void(*)(uObject*, uObject*, ::g::Outracks::Simulator::Bytecode::TypeName*, bool*))DelegateReflection__Outracks_Simulator_Runtime_IReflection_IsType_fn;
    type->interface0.fp_GetEnumValue = (void(*)(uObject*, ::g::Outracks::Simulator::Bytecode::TypeName*, ::g::Outracks::Simulator::Bytecode::TypeMemberName*, uObject**))DelegateReflection__Outracks_Simulator_Runtime_IReflection_GetEnumValue_fn;
    ::TYPES[0] = ::g::Uno::Action3_typeof()->MakeType(uObject_typeof(), ::g::Uno::String_typeof(), uObject_typeof());
    ::TYPES[1] = ::g::Outracks::Simulator::Bytecode::TypeMemberName_typeof();
    ::TYPES[2] = ::g::Uno::Func3_typeof()->MakeType(uObject_typeof(), ::g::Uno::String_typeof(), uObject_typeof()->Array(), uObject_typeof());
    ::TYPES[3] = ::g::Uno::Func3_typeof()->MakeType(::g::Uno::String_typeof(), ::g::Uno::String_typeof(), uObject_typeof()->Array(), uObject_typeof());
    ::TYPES[4] = ::g::Outracks::Simulator::Bytecode::TypeName_typeof();
    ::TYPES[5] = ::g::Uno::Func4_typeof()->MakeType(uObject_typeof(), ::g::Uno::String_typeof(), ::g::Uno::String_typeof()->Array(), ::g::Uno::String_typeof(), uObject_typeof());
    ::TYPES[6] = ::g::Uno::Collections::EnumerableExtensions_typeof()->MakeMethod(1, ::g::Uno::String_typeof());
    ::TYPES[7] = ::g::Uno::Collections::EnumerableExtensions_typeof()->MakeMethod(2, ::g::Outracks::Simulator::Bytecode::Parameter_typeof(), ::g::Uno::String_typeof());
    ::TYPES[8] = ::g::Uno::Collections::IEnumerable_typeof()->MakeType(::g::Outracks::Simulator::Bytecode::Parameter_typeof());
    ::TYPES[9] = ::g::Outracks::Simulator::Bytecode::Signature_typeof();
    ::TYPES[10] = ::g::Uno::Func1_typeof()->MakeType(::g::Outracks::Simulator::Bytecode::Parameter_typeof(), ::g::Uno::String_typeof());
    ::TYPES[11] = ::g::Uno::Func2_typeof()->MakeType(::g::Uno::String_typeof(), ::g::Uno::String_typeof(), uObject_typeof());
    ::TYPES[12] = ::g::Uno::Func2_typeof()->MakeType(uObject_typeof(), ::g::Uno::String_typeof(), uObject_typeof());
    ::TYPES[13] = ::g::Uno::Func2_typeof()->MakeType(::g::Uno::String_typeof(), uObject_typeof()->Array(), uObject_typeof());
    ::TYPES[14] = ::g::Uno::Func2_typeof()->MakeType(uObject_typeof(), ::g::Uno::String_typeof(), ::g::Uno::Bool_typeof());
    ::TYPES[15] = ::g::Outracks::Simulator::Bytecode::Parameter_typeof();
    type->SetInterfaces(
        ::g::Outracks::Simulator::Runtime::IReflection_typeof(), offsetof(DelegateReflection_type, interface0));
    type->SetFields(0,
        ::g::Uno::Action3_typeof()->MakeType(uObject_typeof(), ::g::Uno::String_typeof(), uObject_typeof()), offsetof(::g::Outracks::Simulator::Reflection::DelegateReflection, AddEventHandler), 0,
        ::g::Uno::Func3_typeof()->MakeType(uObject_typeof(), ::g::Uno::String_typeof(), uObject_typeof()->Array(), uObject_typeof()), offsetof(::g::Outracks::Simulator::Reflection::DelegateReflection, CallDynamic), 0,
        ::g::Uno::Func3_typeof()->MakeType(::g::Uno::String_typeof(), ::g::Uno::String_typeof(), uObject_typeof()->Array(), uObject_typeof()), offsetof(::g::Outracks::Simulator::Reflection::DelegateReflection, CallStatic), 0,
        ::g::Uno::Func4_typeof()->MakeType(uObject_typeof(), ::g::Uno::String_typeof(), ::g::Uno::String_typeof()->Array(), ::g::Uno::String_typeof(), uObject_typeof()), offsetof(::g::Outracks::Simulator::Reflection::DelegateReflection, CreateDelegate), 0,
        ::g::Uno::Func2_typeof()->MakeType(::g::Uno::String_typeof(), ::g::Uno::String_typeof(), uObject_typeof()), offsetof(::g::Outracks::Simulator::Reflection::DelegateReflection, GetEnumValue), 0,
        ::g::Uno::Func2_typeof()->MakeType(uObject_typeof(), ::g::Uno::String_typeof(), uObject_typeof()), offsetof(::g::Outracks::Simulator::Reflection::DelegateReflection, GetPropertyValue), 0,
        ::g::Uno::Func2_typeof()->MakeType(::g::Uno::String_typeof(), ::g::Uno::String_typeof(), uObject_typeof()), offsetof(::g::Outracks::Simulator::Reflection::DelegateReflection, GetStaticPropertyOrFieldValue), 0,
        ::g::Uno::Func2_typeof()->MakeType(::g::Uno::String_typeof(), uObject_typeof()->Array(), uObject_typeof()), offsetof(::g::Outracks::Simulator::Reflection::DelegateReflection, Instantiate), 0,
        ::g::Uno::Func2_typeof()->MakeType(uObject_typeof(), ::g::Uno::String_typeof(), ::g::Uno::Bool_typeof()), offsetof(::g::Outracks::Simulator::Reflection::DelegateReflection, IsSubtype), 0,
        ::g::Uno::Func2_typeof()->MakeType(uObject_typeof(), ::g::Uno::String_typeof(), ::g::Uno::Bool_typeof()), offsetof(::g::Outracks::Simulator::Reflection::DelegateReflection, IsType), 0,
        ::g::Uno::Action3_typeof()->MakeType(uObject_typeof(), ::g::Uno::String_typeof(), uObject_typeof()), offsetof(::g::Outracks::Simulator::Reflection::DelegateReflection, RemoveEventHandler), 0,
        ::g::Uno::Action3_typeof()->MakeType(uObject_typeof(), ::g::Uno::String_typeof(), uObject_typeof()), offsetof(::g::Outracks::Simulator::Reflection::DelegateReflection, SetPropertyValue), 0);
    type->Reflection.SetFields(12,
        new uField("AddEventHandler", 0),
        new uField("CallDynamic", 1),
        new uField("CallStatic", 2),
        new uField("CreateDelegate", 3),
        new uField("GetEnumValue", 4),
        new uField("GetPropertyValue", 5),
        new uField("GetStaticPropertyOrFieldValue", 6),
        new uField("Instantiate", 7),
        new uField("IsSubtype", 8),
        new uField("IsType", 9),
        new uField("RemoveEventHandler", 10),
        new uField("SetPropertyValue", 11));
    type->Reflection.SetFunctions(1,
        new uFunction(".ctor", NULL, (void*)DelegateReflection__New1_fn, 0, true, DelegateReflection_typeof(), 0));
    return type;
}

// public generated DelegateReflection() :62
void DelegateReflection__ctor__fn(DelegateReflection* __this)
{
    __this->ctor_();
}

// public generated DelegateReflection New() :62
void DelegateReflection__New1_fn(DelegateReflection** __retval)
{
    *__retval = DelegateReflection::New1();
}

// private void Outracks.Simulator.Runtime.IReflection.AddEventHandler(object instance, Outracks.Simulator.Bytecode.TypeMemberName member, object handlerDelegate) :118
void DelegateReflection__Outracks_Simulator_Runtime_IReflection_AddEventHandler_fn(DelegateReflection* __this, uObject* instance, ::g::Outracks::Simulator::Bytecode::TypeMemberName* member, uObject* handlerDelegate)
{
    uPtr(__this->AddEventHandler)->Invoke(3, instance, (uString*)uPtr(member)->Name, handlerDelegate);
}

// private object Outracks.Simulator.Runtime.IReflection.CallDynamic(object instance, Outracks.Simulator.Bytecode.TypeMemberName methodName, object[] arguments) :83
void DelegateReflection__Outracks_Simulator_Runtime_IReflection_CallDynamic_fn(DelegateReflection* __this, uObject* instance, ::g::Outracks::Simulator::Bytecode::TypeMemberName* methodName, uArray* arguments, uObject** __retval)
{
    return *__retval = uPtr(__this->CallDynamic)->Invoke(3, instance, (uString*)uPtr(methodName)->Name, arguments), void();
}

// private object Outracks.Simulator.Runtime.IReflection.CallStatic(Outracks.Simulator.Bytecode.TypeName typeName, Outracks.Simulator.Bytecode.TypeMemberName methodName, object[] arguments) :88
void DelegateReflection__Outracks_Simulator_Runtime_IReflection_CallStatic_fn(DelegateReflection* __this, ::g::Outracks::Simulator::Bytecode::TypeName* typeName, ::g::Outracks::Simulator::Bytecode::TypeMemberName* methodName, uArray* arguments, uObject** __retval)
{
    return *__retval = uPtr(__this->CallStatic)->Invoke(3, (uString*)uPtr(typeName)->FullName(), (uString*)uPtr(methodName)->Name, arguments), void();
}

// private object Outracks.Simulator.Runtime.IReflection.CreateDelegate(Outracks.Simulator.Bytecode.TypeName delegateType, object instance, Outracks.Simulator.Bytecode.TypeMemberName methodName, Outracks.Simulator.Bytecode.Signature methodSignature) :108
void DelegateReflection__Outracks_Simulator_Runtime_IReflection_CreateDelegate_fn(DelegateReflection* __this, ::g::Outracks::Simulator::Bytecode::TypeName* delegateType, uObject* instance, ::g::Outracks::Simulator::Bytecode::TypeMemberName* methodName, ::g::Outracks::Simulator::Bytecode::Signature* methodSignature, uObject** __retval)
{
    return *__retval = uPtr(__this->CreateDelegate)->Invoke(4, instance, (uString*)uPtr(methodName)->Name, (uArray*)::g::Uno::Collections::EnumerableExtensions::ToArray(::TYPES[6/*Uno.Collections.EnumerableExtensions.ToArray<string>*/], (uObject*)::g::Uno::Collections::EnumerableExtensions::Select(::TYPES[7/*Uno.Collections.EnumerableExtensions.Select<Outracks.Simulator.Bytecode.Parameter, string>*/], (uObject*)uPtr(methodSignature)->Parameters, uDelegate::New(::TYPES[10/*Uno.Func<Outracks.Simulator.Bytecode.Parameter, string>*/], (void*)DelegateReflection__SelectFullName_fn))), (uString*)uPtr(delegateType)->FullName()), void();
}

// private object Outracks.Simulator.Runtime.IReflection.GetEnumValue(Outracks.Simulator.Bytecode.TypeName enumType, Outracks.Simulator.Bytecode.TypeMemberName valueName) :142
void DelegateReflection__Outracks_Simulator_Runtime_IReflection_GetEnumValue_fn(DelegateReflection* __this, ::g::Outracks::Simulator::Bytecode::TypeName* enumType, ::g::Outracks::Simulator::Bytecode::TypeMemberName* valueName, uObject** __retval)
{
    return *__retval = uPtr(__this->GetEnumValue)->Invoke(2, (uString*)uPtr(enumType)->FullName(), (uString*)uPtr(valueName)->Name), void();
}

// private object Outracks.Simulator.Runtime.IReflection.GetPropertyValue(object instance, Outracks.Simulator.Bytecode.TypeMemberName propertyName) :98
void DelegateReflection__Outracks_Simulator_Runtime_IReflection_GetPropertyValue_fn(DelegateReflection* __this, uObject* instance, ::g::Outracks::Simulator::Bytecode::TypeMemberName* propertyName, uObject** __retval)
{
    return *__retval = uPtr(__this->GetPropertyValue)->Invoke(2, instance, (uString*)uPtr(propertyName)->Name), void();
}

// private object Outracks.Simulator.Runtime.IReflection.GetStaticPropertyOrFieldValue(Outracks.Simulator.Bytecode.TypeName typeName, Outracks.Simulator.Bytecode.TypeMemberName memberName) :103
void DelegateReflection__Outracks_Simulator_Runtime_IReflection_GetStaticPropertyOrFieldValue_fn(DelegateReflection* __this, ::g::Outracks::Simulator::Bytecode::TypeName* typeName, ::g::Outracks::Simulator::Bytecode::TypeMemberName* memberName, uObject** __retval)
{
    return *__retval = uPtr(__this->GetStaticPropertyOrFieldValue)->Invoke(2, (uString*)uPtr(typeName)->FullName(), (uString*)uPtr(memberName)->Name), void();
}

// private object Outracks.Simulator.Runtime.IReflection.Instantiate(Outracks.Simulator.Bytecode.TypeName typeName, object[] args) :128
void DelegateReflection__Outracks_Simulator_Runtime_IReflection_Instantiate_fn(DelegateReflection* __this, ::g::Outracks::Simulator::Bytecode::TypeName* typeName, uArray* args, uObject** __retval)
{
    return *__retval = uPtr(__this->Instantiate)->Invoke(2, (uString*)uPtr(typeName)->FullName(), args), void();
}

// private bool Outracks.Simulator.Runtime.IReflection.IsSubtype(object obj, Outracks.Simulator.Bytecode.TypeName typeName) :133
void DelegateReflection__Outracks_Simulator_Runtime_IReflection_IsSubtype_fn(DelegateReflection* __this, uObject* obj, ::g::Outracks::Simulator::Bytecode::TypeName* typeName, bool* __retval)
{
    bool ret2;
    return *__retval = (uPtr(__this->IsSubtype)->Invoke(&ret2, 2, obj, (uString*)uPtr(typeName)->FullName()), ret2), void();
}

// private bool Outracks.Simulator.Runtime.IReflection.IsType(object obj, Outracks.Simulator.Bytecode.TypeName typeName) :137
void DelegateReflection__Outracks_Simulator_Runtime_IReflection_IsType_fn(DelegateReflection* __this, uObject* obj, ::g::Outracks::Simulator::Bytecode::TypeName* typeName, bool* __retval)
{
    bool ret3;
    return *__retval = (uPtr(__this->IsType)->Invoke(&ret3, 2, obj, (uString*)uPtr(typeName)->FullName()), ret3), void();
}

// private void Outracks.Simulator.Runtime.IReflection.RemoveEventHandler(object instance, Outracks.Simulator.Bytecode.TypeMemberName member, object handlerDelegate) :123
void DelegateReflection__Outracks_Simulator_Runtime_IReflection_RemoveEventHandler_fn(DelegateReflection* __this, uObject* instance, ::g::Outracks::Simulator::Bytecode::TypeMemberName* member, uObject* handlerDelegate)
{
    uPtr(__this->RemoveEventHandler)->Invoke(3, instance, (uString*)uPtr(member)->Name, handlerDelegate);
}

// private void Outracks.Simulator.Runtime.IReflection.SetPropertyValue(object instance, Outracks.Simulator.Bytecode.TypeMemberName propertyName, object value) :93
void DelegateReflection__Outracks_Simulator_Runtime_IReflection_SetPropertyValue_fn(DelegateReflection* __this, uObject* instance, ::g::Outracks::Simulator::Bytecode::TypeMemberName* propertyName, uObject* value)
{
    uPtr(__this->SetPropertyValue)->Invoke(3, instance, (uString*)uPtr(propertyName)->Name, value);
}

// private static string SelectFullName(Outracks.Simulator.Bytecode.Parameter tn) :113
void DelegateReflection__SelectFullName_fn(::g::Outracks::Simulator::Bytecode::Parameter* tn, uString** __retval)
{
    *__retval = DelegateReflection::SelectFullName(tn);
}

// public generated DelegateReflection() [instance] :62
void DelegateReflection::ctor_()
{
}

// public generated DelegateReflection New() [static] :62
DelegateReflection* DelegateReflection::New1()
{
    DelegateReflection* obj1 = (DelegateReflection*)uNew(DelegateReflection_typeof());
    obj1->ctor_();
    return obj1;
}

// private static string SelectFullName(Outracks.Simulator.Bytecode.Parameter tn) [static] :113
uString* DelegateReflection::SelectFullName(::g::Outracks::Simulator::Bytecode::Parameter* tn)
{
    return uPtr(uPtr(tn)->Type)->FullName();
}
// }

}}}} // ::g::Outracks::Simulator::Reflection
