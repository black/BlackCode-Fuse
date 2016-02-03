// This file was generated based on '(multiple files)'.
// WARNING: Changes might be lost if you edit this file directly.

#include <Outracks.Simulator.Bytecode.Parameter.h>
#include <Outracks.Simulator.Bytecode.Signature.h>
#include <Outracks.Simulator.Bytecode.TypeMemberName.h>
#include <Outracks.Simulator.Bytecode.TypeName.h>
#include <Outracks.Simulator.ImmutableList-1.h>
#include <Outracks.Simulator.Reflection.Native.CppEvent.h>
#include <Outracks.Simulator.Reflection.Native.CppProperty.h>
#include <Outracks.Simulator.Reflection.Native.IEvent.h>
#include <Outracks.Simulator.Reflection.Native.IProperty.h>
#include <Outracks.Simulator.Reflection.Native.ITypeMap.h>
#include <Outracks.Simulator.Reflection.Native.NativeReflection.h>
#include <Outracks.Simulator.Reflection.Native.Property-1.h>
#include <Outracks.Simulator.Reflection.Native.ReflectionCache.h>
#include <Outracks.Simulator.Reflection.Native.ReflectionExtensions.h>
#include <Outracks.Simulator.Reflection.Native.ReflectionHelpers.h>
#include <Outracks.Simulator.Reflection.Native.SimpleTypeMap.h>
#include <Outracks.Simulator.Reflection.Native.TryInvokeExtension.h>
#include <Outracks.Simulator.Runtime.MemberNotFound.h>
#include <Outracks.Simulator.Runtime.TypeNotFound.h>
#include <Outracks.Simulator.Runtime.UnambiguousMethodNotFound.h>
#include <Uno.ArgumentNullException.h>
#include <Uno.Bool.h>
#include <Uno.Byte.h>
#include <Uno.Byte2.h>
#include <Uno.Byte4.h>
#include <Uno.Char.h>
#include <Uno.Collections.Dictionary-2.h>
#include <Uno.Collections.EnumerableExtensions.h>
#include <Uno.Collections.IEnumerable-1.h>
#include <Uno.Collections.List-1.Enumerator.h>
#include <Uno.Collections.List-1.h>
#include <Uno.Delegate.h>
#include <Uno.Double.h>
#include <Uno.Enum.h>
#include <Uno.Exception.h>
#include <Uno.Float.h>
#include <Uno.Float2.h>
#include <Uno.Float2x2.h>
#include <Uno.Float3.h>
#include <Uno.Float3x3.h>
#include <Uno.Float4.h>
#include <Uno.Float4x4.h>
#include <Uno.Func-2.h>
#include <Uno.Graphics.Texture2D.h>
#include <Uno.Graphics.TextureCube.h>
#include <Uno.Int.h>
#include <Uno.Int2.h>
#include <Uno.Int3.h>
#include <Uno.Int4.h>
#include <Uno.InvalidOperationException.h>
#include <Uno.Long.h>
#include <Uno.Object.h>
#include <Uno.Reflection.CppField.h>
#include <Uno.Reflection.CppFunction.h>
#include <Uno.Reflection.CppReflection.h>
#include <Uno.Reflection.IField.h>
#include <Uno.Reflection.IFunction.h>
#include <Uno.Runtime.Implementation.Internal.ArrayEnumerable-1.h>
#include <Uno.SByte.h>
#include <Uno.SByte2.h>
#include <Uno.SByte4.h>
#include <Uno.Short.h>
#include <Uno.Short2.h>
#include <Uno.Short4.h>
#include <Uno.String.h>
#include <Uno.Type.h>
#include <Uno.UInt.h>
#include <Uno.ULong.h>
#include <Uno.UShort.h>
#include <Uno.UShort2.h>
#include <Uno.UShort4.h>
static uString* STRINGS[49];
static uType* TYPES[70];

namespace g{
namespace Outracks{
namespace Simulator{
namespace Reflection{
namespace Native{

// C:\ProgramData\Uno\Packages\Outracks.Simulator.Reflection.Uno\0.1.0\Native\$.uno(408)
// -------------------------------------------------------------------------------------

// internal sealed extern class CppEvent :408
// {
CppEvent_type* CppEvent_typeof()
{
    static uSStrong<CppEvent_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 3;
    options.InterfaceCount = 1;
    options.ObjectSize = sizeof(CppEvent);
    options.TypeSize = sizeof(CppEvent_type);
    type = (CppEvent_type*)uClassType::New("Outracks.Simulator.Reflection.Native.CppEvent", options);
    type->interface0.fp_get_DeclaringType = (void(*)(uObject*, uType**))CppEvent__get_DeclaringType_fn;
    type->interface0.fp_get_AddMethod = (void(*)(uObject*, uObject**))CppEvent__get_AddMethod_fn;
    type->interface0.fp_get_RemoveMethod = (void(*)(uObject*, uObject**))CppEvent__get_RemoveMethod_fn;
    ::STRINGS[0] = uString::Const("add_");
    ::STRINGS[1] = uString::Const("remove_");
    ::TYPES[0] = ::g::Uno::Type_typeof()->Array();
    type->SetInterfaces(
        ::g::Outracks::Simulator::Reflection::Native::IEvent_typeof(), offsetof(CppEvent_type, interface0));
    type->SetFields(0,
        ::g::Uno::Type_typeof(), offsetof(::g::Outracks::Simulator::Reflection::Native::CppEvent, _declaringType), 0,
        ::g::Uno::String_typeof(), offsetof(::g::Outracks::Simulator::Reflection::Native::CppEvent, _name), 0,
        ::g::Uno::Type_typeof(), offsetof(::g::Outracks::Simulator::Reflection::Native::CppEvent, _type), 0);
    return type;
}

// public CppEvent(Uno.Type declaringType, Uno.Type type, string name) :414
void CppEvent__ctor__fn(CppEvent* __this, uType* declaringType, uType* type, uString* name)
{
    __this->ctor_(declaringType, type, name);
}

// public Uno.Reflection.IFunction get_AddMethod() :428
void CppEvent__get_AddMethod_fn(CppEvent* __this, uObject** __retval)
{
    *__retval = __this->AddMethod();
}

// public Uno.Type get_DeclaringType() :423
void CppEvent__get_DeclaringType_fn(CppEvent* __this, uType** __retval)
{
    *__retval = __this->DeclaringType();
}

// public CppEvent New(Uno.Type declaringType, Uno.Type type, string name) :414
void CppEvent__New1_fn(uType* declaringType, uType* type, uString* name, CppEvent** __retval)
{
    *__retval = CppEvent::New1(declaringType, type, name);
}

// public Uno.Reflection.IFunction get_RemoveMethod() :433
void CppEvent__get_RemoveMethod_fn(CppEvent* __this, uObject** __retval)
{
    *__retval = __this->RemoveMethod();
}

// public CppEvent(Uno.Type declaringType, Uno.Type type, string name) [instance] :414
void CppEvent::ctor_(uType* declaringType, uType* type, uString* name)
{
    _declaringType = declaringType;
    _type = type;
    _name = name;
}

// public Uno.Reflection.IFunction get_AddMethod() [instance] :428
uObject* CppEvent::AddMethod()
{
    return ::g::Outracks::Simulator::Reflection::Native::TryInvokeExtension::GetMethod(_declaringType, ::g::Outracks::Simulator::Bytecode::TypeMemberName::New1(::g::Uno::String::op_Addition2(::STRINGS[0/*"add_"*/], _name)), uArray::Init<uType*>(::TYPES[0/*Uno.Type[]*/], 1, (uType*)_type));
}

// public Uno.Type get_DeclaringType() [instance] :423
uType* CppEvent::DeclaringType()
{
    return _declaringType;
}

// public Uno.Reflection.IFunction get_RemoveMethod() [instance] :433
uObject* CppEvent::RemoveMethod()
{
    return ::g::Outracks::Simulator::Reflection::Native::TryInvokeExtension::GetMethod(_declaringType, ::g::Outracks::Simulator::Bytecode::TypeMemberName::New1(::g::Uno::String::op_Addition2(::STRINGS[1/*"remove_"*/], _name)), uArray::Init<uType*>(::TYPES[0/*Uno.Type[]*/], 1, (uType*)_type));
}

// public CppEvent New(Uno.Type declaringType, Uno.Type type, string name) [static] :414
CppEvent* CppEvent::New1(uType* declaringType, uType* type, uString* name)
{
    CppEvent* obj1 = (CppEvent*)uNew(CppEvent_typeof());
    obj1->ctor_(declaringType, type, name);
    return obj1;
}
// }

// C:\ProgramData\Uno\Packages\Outracks.Simulator.Reflection.Uno\0.1.0\Native\$.uno(438)
// -------------------------------------------------------------------------------------

// internal sealed extern class CppProperty :438
// {
CppProperty_type* CppProperty_typeof()
{
    static uSStrong<CppProperty_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 3;
    options.InterfaceCount = 1;
    options.ObjectSize = sizeof(CppProperty);
    options.TypeSize = sizeof(CppProperty_type);
    type = (CppProperty_type*)uClassType::New("Outracks.Simulator.Reflection.Native.CppProperty", options);
    type->interface0.fp_get_DeclaringType = (void(*)(uObject*, uType**))CppProperty__get_DeclaringType_fn;
    type->interface0.fp_get_GetMethod = (void(*)(uObject*, uObject**))CppProperty__get_GetMethod_fn;
    type->interface0.fp_get_SetMethod = (void(*)(uObject*, uObject**))CppProperty__get_SetMethod_fn;
    ::STRINGS[2] = uString::Const("get_");
    ::STRINGS[3] = uString::Const("set_");
    ::TYPES[0] = ::g::Uno::Type_typeof()->Array();
    type->SetInterfaces(
        ::g::Outracks::Simulator::Reflection::Native::IProperty_typeof(), offsetof(CppProperty_type, interface0));
    type->SetFields(0,
        ::g::Uno::Type_typeof(), offsetof(::g::Outracks::Simulator::Reflection::Native::CppProperty, _declaringType), 0,
        ::g::Uno::String_typeof(), offsetof(::g::Outracks::Simulator::Reflection::Native::CppProperty, _name), 0,
        ::g::Uno::Type_typeof(), offsetof(::g::Outracks::Simulator::Reflection::Native::CppProperty, _type), 0);
    return type;
}

// public CppProperty(Uno.Type declaringType, Uno.Type type, string name) :444
void CppProperty__ctor__fn(CppProperty* __this, uType* declaringType, uType* type, uString* name)
{
    __this->ctor_(declaringType, type, name);
}

// public Uno.Type get_DeclaringType() :453
void CppProperty__get_DeclaringType_fn(CppProperty* __this, uType** __retval)
{
    *__retval = __this->DeclaringType();
}

// public Uno.Reflection.IFunction get_GetMethod() :458
void CppProperty__get_GetMethod_fn(CppProperty* __this, uObject** __retval)
{
    *__retval = __this->GetMethod();
}

// public CppProperty New(Uno.Type declaringType, Uno.Type type, string name) :444
void CppProperty__New1_fn(uType* declaringType, uType* type, uString* name, CppProperty** __retval)
{
    *__retval = CppProperty::New1(declaringType, type, name);
}

// public Uno.Reflection.IFunction get_SetMethod() :463
void CppProperty__get_SetMethod_fn(CppProperty* __this, uObject** __retval)
{
    *__retval = __this->SetMethod();
}

// public CppProperty(Uno.Type declaringType, Uno.Type type, string name) [instance] :444
void CppProperty::ctor_(uType* declaringType, uType* type, uString* name)
{
    _declaringType = declaringType;
    _type = type;
    _name = name;
}

// public Uno.Type get_DeclaringType() [instance] :453
uType* CppProperty::DeclaringType()
{
    return _declaringType;
}

// public Uno.Reflection.IFunction get_GetMethod() [instance] :458
uObject* CppProperty::GetMethod()
{
    return ::g::Outracks::Simulator::Reflection::Native::TryInvokeExtension::GetMethod(_declaringType, ::g::Outracks::Simulator::Bytecode::TypeMemberName::New1(::g::Uno::String::op_Addition2(::STRINGS[2/*"get_"*/], _name)), uArray::New(::TYPES[0/*Uno.Type[]*/], 0));
}

// public Uno.Reflection.IFunction get_SetMethod() [instance] :463
uObject* CppProperty::SetMethod()
{
    return ::g::Outracks::Simulator::Reflection::Native::TryInvokeExtension::GetMethod(_declaringType, ::g::Outracks::Simulator::Bytecode::TypeMemberName::New1(::g::Uno::String::op_Addition2(::STRINGS[3/*"set_"*/], _name)), uArray::Init<uType*>(::TYPES[0/*Uno.Type[]*/], 1, (uType*)_type));
}

// public CppProperty New(Uno.Type declaringType, Uno.Type type, string name) [static] :444
CppProperty* CppProperty::New1(uType* declaringType, uType* type, uString* name)
{
    CppProperty* obj1 = (CppProperty*)uNew(CppProperty_typeof());
    obj1->ctor_(declaringType, type, name);
    return obj1;
}
// }

// C:\ProgramData\Uno\Packages\Outracks.Simulator.Reflection.Uno\0.1.0\Native\$.uno(116)
// -------------------------------------------------------------------------------------

// internal abstract interface IEvent :116
// {
uInterfaceType* IEvent_typeof()
{
    static uSStrong<uInterfaceType*> type;
    if (type != NULL) return type;

    type = uInterfaceType::New("Outracks.Simulator.Reflection.Native.IEvent", 0, 0);
    return type;
}
// }

// C:\ProgramData\Uno\Packages\Outracks.Simulator.Reflection.Uno\0.1.0\Native\$.uno(109)
// -------------------------------------------------------------------------------------

// internal abstract interface IProperty :109
// {
uInterfaceType* IProperty_typeof()
{
    static uSStrong<uInterfaceType*> type;
    if (type != NULL) return type;

    type = uInterfaceType::New("Outracks.Simulator.Reflection.Native.IProperty", 0, 0);
    return type;
}
// }

// C:\ProgramData\Uno\Packages\Outracks.Simulator.Reflection.Uno\0.1.0\Native\$.uno(40)
// ------------------------------------------------------------------------------------

// public abstract interface ITypeMap :40
// {
uInterfaceType* ITypeMap_typeof()
{
    static uSStrong<uInterfaceType*> type;
    if (type != NULL) return type;

    type = uInterfaceType::New("Outracks.Simulator.Reflection.Native.ITypeMap", 0, 0);
    type->Reflection.SetFunctions(2,
        new uFunction("ResolveType", NULL, NULL, offsetof(ITypeMap, fp_ResolveType), false, ::g::Uno::Type_typeof(), 1, ::g::Outracks::Simulator::Bytecode::Parameter_typeof()),
        new uFunction("ResolveType", NULL, NULL, offsetof(ITypeMap, fp_ResolveType1), false, ::g::Uno::Type_typeof(), 1, ::g::Outracks::Simulator::Bytecode::TypeName_typeof()));
    return type;
}
// }

// C:\ProgramData\Uno\Packages\Outracks.Simulator.Reflection.Uno\0.1.0\Native\$.uno(124)
// -------------------------------------------------------------------------------------

// public sealed extern class NativeReflection :124
// {
NativeReflection_type* NativeReflection_typeof()
{
    static uSStrong<NativeReflection_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 1;
    options.InterfaceCount = 1;
    options.ObjectSize = sizeof(NativeReflection);
    options.TypeSize = sizeof(NativeReflection_type);
    type = (NativeReflection_type*)uClassType::New("Outracks.Simulator.Reflection.Native.NativeReflection", options);
    type->interface0.fp_CallDynamic = (void(*)(uObject*, uObject*, ::g::Outracks::Simulator::Bytecode::TypeMemberName*, uArray*, uObject**))NativeReflection__CallDynamic_fn;
    type->interface0.fp_CallStatic = (void(*)(uObject*, ::g::Outracks::Simulator::Bytecode::TypeName*, ::g::Outracks::Simulator::Bytecode::TypeMemberName*, uArray*, uObject**))NativeReflection__CallStatic_fn;
    type->interface0.fp_SetPropertyValue = (void(*)(uObject*, uObject*, ::g::Outracks::Simulator::Bytecode::TypeMemberName*, uObject*))NativeReflection__SetPropertyValue_fn;
    type->interface0.fp_GetPropertyValue = (void(*)(uObject*, uObject*, ::g::Outracks::Simulator::Bytecode::TypeMemberName*, uObject**))NativeReflection__GetPropertyValue_fn;
    type->interface0.fp_GetStaticPropertyOrFieldValue = (void(*)(uObject*, ::g::Outracks::Simulator::Bytecode::TypeName*, ::g::Outracks::Simulator::Bytecode::TypeMemberName*, uObject**))NativeReflection__GetStaticPropertyOrFieldValue_fn;
    type->interface0.fp_CreateDelegate = (void(*)(uObject*, ::g::Outracks::Simulator::Bytecode::TypeName*, uObject*, ::g::Outracks::Simulator::Bytecode::TypeMemberName*, ::g::Outracks::Simulator::Bytecode::Signature*, uObject**))NativeReflection__CreateDelegate_fn;
    type->interface0.fp_AddEventHandler = (void(*)(uObject*, uObject*, ::g::Outracks::Simulator::Bytecode::TypeMemberName*, uObject*))NativeReflection__AddEventHandler_fn;
    type->interface0.fp_RemoveEventHandler = (void(*)(uObject*, uObject*, ::g::Outracks::Simulator::Bytecode::TypeMemberName*, uObject*))NativeReflection__RemoveEventHandler_fn;
    type->interface0.fp_Instantiate = (void(*)(uObject*, ::g::Outracks::Simulator::Bytecode::TypeName*, uArray*, uObject**))NativeReflection__Instantiate_fn;
    type->interface0.fp_IsSubtype = (void(*)(uObject*, uObject*, ::g::Outracks::Simulator::Bytecode::TypeName*, bool*))NativeReflection__IsSubtype_fn;
    type->interface0.fp_IsType = (void(*)(uObject*, uObject*, ::g::Outracks::Simulator::Bytecode::TypeName*, bool*))NativeReflection__IsType_fn;
    type->interface0.fp_GetEnumValue = (void(*)(uObject*, ::g::Outracks::Simulator::Bytecode::TypeName*, ::g::Outracks::Simulator::Bytecode::TypeMemberName*, uObject**))NativeReflection__GetEnumValue_fn;
    ::STRINGS[4] = uString::Const("Event '");
    ::STRINGS[5] = uString::Const(".");
    ::STRINGS[6] = uString::Const("' has no add method");
    ::STRINGS[7] = uString::Const("Property '");
    ::STRINGS[8] = uString::Const("' has no getter");
    ::STRINGS[9] = uString::Const(".ctor");
    ::STRINGS[10] = uString::Const("' has no remover method");
    ::STRINGS[11] = uString::Const("obj");
    ::STRINGS[12] = uString::Const("' has no setter");
    ::TYPES[1] = ::g::Uno::Type_typeof();
    ::TYPES[2] = ::g::Outracks::Simulator::Reflection::Native::IEvent_typeof();
    ::TYPES[3] = uObject_typeof();
    ::TYPES[4] = ::g::Outracks::Simulator::Bytecode::TypeMemberName_typeof();
    ::TYPES[5] = uObject_typeof()->Array();
    ::TYPES[6] = ::g::Outracks::Simulator::Bytecode::Signature_typeof();
    ::TYPES[7] = ::g::Uno::Collections::EnumerableExtensions_typeof()->MakeMethod(1, ::g::Uno::Type_typeof());
    ::TYPES[8] = ::g::Uno::Collections::EnumerableExtensions_typeof()->MakeMethod(2, ::g::Outracks::Simulator::Bytecode::Parameter_typeof(), ::g::Uno::Type_typeof());
    ::TYPES[9] = ::g::Uno::Collections::IEnumerable_typeof()->MakeType(::g::Outracks::Simulator::Bytecode::Parameter_typeof());
    ::TYPES[10] = ::g::Uno::Func1_typeof()->MakeType(::g::Outracks::Simulator::Bytecode::Parameter_typeof(), ::g::Uno::Type_typeof());
    ::TYPES[11] = ::g::Outracks::Simulator::Reflection::Native::IProperty_typeof();
    ::TYPES[12] = ::g::Outracks::Simulator::Bytecode::TypeName_typeof();
    type->SetInterfaces(
        ::g::Outracks::Simulator::Runtime::IReflection_typeof(), offsetof(NativeReflection_type, interface0));
    type->SetFields(0,
        ::g::Outracks::Simulator::Reflection::Native::ITypeMap_typeof(), offsetof(::g::Outracks::Simulator::Reflection::Native::NativeReflection, _typeMap), 0);
    type->Reflection.SetFunctions(14,
        new uFunction("AddEventHandler", NULL, (void*)NativeReflection__AddEventHandler_fn, 0, false, uVoid_typeof(), 3, uObject_typeof(), ::g::Outracks::Simulator::Bytecode::TypeMemberName_typeof(), uObject_typeof()),
        new uFunction("CallDynamic", NULL, (void*)NativeReflection__CallDynamic_fn, 0, false, uObject_typeof(), 3, uObject_typeof(), ::g::Outracks::Simulator::Bytecode::TypeMemberName_typeof(), uObject_typeof()->Array()),
        new uFunction("CallStatic", NULL, (void*)NativeReflection__CallStatic_fn, 0, false, uObject_typeof(), 3, ::g::Outracks::Simulator::Bytecode::TypeName_typeof(), ::g::Outracks::Simulator::Bytecode::TypeMemberName_typeof(), uObject_typeof()->Array()),
        new uFunction("CreateDelegate", NULL, (void*)NativeReflection__CreateDelegate_fn, 0, false, uObject_typeof(), 4, ::g::Outracks::Simulator::Bytecode::TypeName_typeof(), uObject_typeof(), ::g::Outracks::Simulator::Bytecode::TypeMemberName_typeof(), ::g::Outracks::Simulator::Bytecode::Signature_typeof()),
        new uFunction("GetEnumValue", NULL, (void*)NativeReflection__GetEnumValue_fn, 0, false, uObject_typeof(), 2, ::g::Outracks::Simulator::Bytecode::TypeName_typeof(), ::g::Outracks::Simulator::Bytecode::TypeMemberName_typeof()),
        new uFunction("GetPropertyValue", NULL, (void*)NativeReflection__GetPropertyValue_fn, 0, false, uObject_typeof(), 2, uObject_typeof(), ::g::Outracks::Simulator::Bytecode::TypeMemberName_typeof()),
        new uFunction("GetStaticPropertyOrFieldValue", NULL, (void*)NativeReflection__GetStaticPropertyOrFieldValue_fn, 0, false, uObject_typeof(), 2, ::g::Outracks::Simulator::Bytecode::TypeName_typeof(), ::g::Outracks::Simulator::Bytecode::TypeMemberName_typeof()),
        new uFunction("Instantiate", NULL, (void*)NativeReflection__Instantiate_fn, 0, false, uObject_typeof(), 2, ::g::Outracks::Simulator::Bytecode::TypeName_typeof(), uObject_typeof()->Array()),
        new uFunction("IsSubtype", NULL, (void*)NativeReflection__IsSubtype_fn, 0, false, ::g::Uno::Bool_typeof(), 2, uObject_typeof(), ::g::Outracks::Simulator::Bytecode::TypeName_typeof()),
        new uFunction("IsType", NULL, (void*)NativeReflection__IsType_fn, 0, false, ::g::Uno::Bool_typeof(), 2, uObject_typeof(), ::g::Outracks::Simulator::Bytecode::TypeName_typeof()),
        new uFunction(".ctor", NULL, (void*)NativeReflection__New1_fn, 0, true, NativeReflection_typeof(), 1, ::g::Outracks::Simulator::Reflection::Native::ITypeMap_typeof()),
        new uFunction("RemoveEventHandler", NULL, (void*)NativeReflection__RemoveEventHandler_fn, 0, false, uVoid_typeof(), 3, uObject_typeof(), ::g::Outracks::Simulator::Bytecode::TypeMemberName_typeof(), uObject_typeof()),
        new uFunction("SetPropertyValue", NULL, (void*)NativeReflection__SetPropertyValue_fn, 0, false, uVoid_typeof(), 3, uObject_typeof(), ::g::Outracks::Simulator::Bytecode::TypeMemberName_typeof(), uObject_typeof()),
        new uFunction("SetStaticField", NULL, (void*)NativeReflection__SetStaticField_fn, 0, false, uVoid_typeof(), 3, ::g::Outracks::Simulator::Bytecode::TypeName_typeof(), ::g::Outracks::Simulator::Bytecode::TypeMemberName_typeof(), uObject_typeof()));
    return type;
}

// public NativeReflection(Outracks.Simulator.Reflection.Native.ITypeMap typeMap) :128
void NativeReflection__ctor__fn(NativeReflection* __this, uObject* typeMap)
{
    __this->ctor_(typeMap);
}

// public void AddEventHandler(object instance, Outracks.Simulator.Bytecode.TypeMemberName member, object handlerDelegate) :184
void NativeReflection__AddEventHandler_fn(NativeReflection* __this, uObject* instance, ::g::Outracks::Simulator::Bytecode::TypeMemberName* member, uObject* handlerDelegate)
{
    __this->AddEventHandler(instance, member, handlerDelegate);
}

// public object CallDynamic(object obj, Outracks.Simulator.Bytecode.TypeMemberName methodName, object[] arguments) :214
void NativeReflection__CallDynamic_fn(NativeReflection* __this, uObject* obj, ::g::Outracks::Simulator::Bytecode::TypeMemberName* methodName, uArray* arguments, uObject** __retval)
{
    *__retval = __this->CallDynamic(obj, methodName, arguments);
}

// public object CallStatic(Outracks.Simulator.Bytecode.TypeName typeName, Outracks.Simulator.Bytecode.TypeMemberName methodName, object[] arguments) :227
void NativeReflection__CallStatic_fn(NativeReflection* __this, ::g::Outracks::Simulator::Bytecode::TypeName* typeName, ::g::Outracks::Simulator::Bytecode::TypeMemberName* methodName, uArray* arguments, uObject** __retval)
{
    *__retval = __this->CallStatic(typeName, methodName, arguments);
}

// public object CreateDelegate(Outracks.Simulator.Bytecode.TypeName delegateTypeName, object instance, Outracks.Simulator.Bytecode.TypeMemberName methodName, Outracks.Simulator.Bytecode.Signature signature) :171
void NativeReflection__CreateDelegate_fn(NativeReflection* __this, ::g::Outracks::Simulator::Bytecode::TypeName* delegateTypeName, uObject* instance, ::g::Outracks::Simulator::Bytecode::TypeMemberName* methodName, ::g::Outracks::Simulator::Bytecode::Signature* signature, uObject** __retval)
{
    *__retval = __this->CreateDelegate(delegateTypeName, instance, methodName, signature);
}

// public object GetEnumValue(Outracks.Simulator.Bytecode.TypeName enumType, Outracks.Simulator.Bytecode.TypeMemberName valueName) :278
void NativeReflection__GetEnumValue_fn(NativeReflection* __this, ::g::Outracks::Simulator::Bytecode::TypeName* enumType, ::g::Outracks::Simulator::Bytecode::TypeMemberName* valueName, uObject** __retval)
{
    *__retval = __this->GetEnumValue(enumType, valueName);
}

// public object GetPropertyValue(object obj, Outracks.Simulator.Bytecode.TypeMemberName propertyName) :133
void NativeReflection__GetPropertyValue_fn(NativeReflection* __this, uObject* obj, ::g::Outracks::Simulator::Bytecode::TypeMemberName* propertyName, uObject** __retval)
{
    *__retval = __this->GetPropertyValue(obj, propertyName);
}

// public object GetStaticPropertyOrFieldValue(Outracks.Simulator.Bytecode.TypeName typeName, Outracks.Simulator.Bytecode.TypeMemberName memberName) :249
void NativeReflection__GetStaticPropertyOrFieldValue_fn(NativeReflection* __this, ::g::Outracks::Simulator::Bytecode::TypeName* typeName, ::g::Outracks::Simulator::Bytecode::TypeMemberName* memberName, uObject** __retval)
{
    *__retval = __this->GetStaticPropertyOrFieldValue(typeName, memberName);
}

// public object Instantiate(Outracks.Simulator.Bytecode.TypeName typeName, object[] args) :222
void NativeReflection__Instantiate_fn(NativeReflection* __this, ::g::Outracks::Simulator::Bytecode::TypeName* typeName, uArray* args, uObject** __retval)
{
    *__retval = __this->Instantiate(typeName, args);
}

// public bool IsSubtype(object obj, Outracks.Simulator.Bytecode.TypeName typeName) :266
void NativeReflection__IsSubtype_fn(NativeReflection* __this, uObject* obj, ::g::Outracks::Simulator::Bytecode::TypeName* typeName, bool* __retval)
{
    *__retval = __this->IsSubtype(obj, typeName);
}

// public bool IsType(object obj, Outracks.Simulator.Bytecode.TypeName typeName) :273
void NativeReflection__IsType_fn(NativeReflection* __this, uObject* obj, ::g::Outracks::Simulator::Bytecode::TypeName* typeName, bool* __retval)
{
    *__retval = __this->IsType(obj, typeName);
}

// public NativeReflection New(Outracks.Simulator.Reflection.Native.ITypeMap typeMap) :128
void NativeReflection__New1_fn(uObject* typeMap, NativeReflection** __retval)
{
    *__retval = NativeReflection::New1(typeMap);
}

// public void RemoveEventHandler(object instance, Outracks.Simulator.Bytecode.TypeMemberName member, object handlerDelegate) :199
void NativeReflection__RemoveEventHandler_fn(NativeReflection* __this, uObject* instance, ::g::Outracks::Simulator::Bytecode::TypeMemberName* member, uObject* handlerDelegate)
{
    __this->RemoveEventHandler(instance, member, handlerDelegate);
}

// private Outracks.Simulator.Reflection.Native.IProperty ResolveProperty(object obj, Outracks.Simulator.Bytecode.TypeMemberName propertyName, Uno.Type propertyType) :153
void NativeReflection__ResolveProperty_fn(NativeReflection* __this, uObject* obj, ::g::Outracks::Simulator::Bytecode::TypeMemberName* propertyName, uType* propertyType, uObject** __retval)
{
    *__retval = __this->ResolveProperty(obj, propertyName, propertyType);
}

// public void SetPropertyValue(object obj, Outracks.Simulator.Bytecode.TypeMemberName propertyName, object value) :143
void NativeReflection__SetPropertyValue_fn(NativeReflection* __this, uObject* obj, ::g::Outracks::Simulator::Bytecode::TypeMemberName* propertyName, uObject* value)
{
    __this->SetPropertyValue(obj, propertyName, value);
}

// public void SetStaticField(Outracks.Simulator.Bytecode.TypeName typeName, Outracks.Simulator.Bytecode.TypeMemberName fieldName, object value) :236
void NativeReflection__SetStaticField_fn(NativeReflection* __this, ::g::Outracks::Simulator::Bytecode::TypeName* typeName, ::g::Outracks::Simulator::Bytecode::TypeMemberName* fieldName, uObject* value)
{
    __this->SetStaticField(typeName, fieldName, value);
}

// public NativeReflection(Outracks.Simulator.Reflection.Native.ITypeMap typeMap) [instance] :128
void NativeReflection::ctor_(uObject* typeMap)
{
    _typeMap = typeMap;
}

// public void AddEventHandler(object instance, Outracks.Simulator.Bytecode.TypeMemberName member, object handlerDelegate) [instance] :184
void NativeReflection::AddEventHandler(uObject* instance, ::g::Outracks::Simulator::Bytecode::TypeMemberName* member, uObject* handlerDelegate)
{
    uType* type = ::g::Uno::Object::GetType(uPtr(instance));
    uObject* theEvent = ::g::Outracks::Simulator::Reflection::Native::TryInvokeExtension::GetEvent(type, member, ::g::Uno::Object::GetType(uPtr(handlerDelegate)));

    if (theEvent == NULL)
        U_THROW(::g::Outracks::Simulator::Runtime::MemberNotFound::New4(::g::Outracks::Simulator::Bytecode::TypeName::Parse(::g::Uno::Type::FullName(uPtr(type))), member));

    uObject* adder = ::g::Outracks::Simulator::Reflection::Native::IEvent::AddMethod(uInterface(uPtr(theEvent), ::TYPES[2/*Outracks.Simulator.Reflection.Native.IEvent*/]));

    if (adder == NULL)
        U_THROW(::g::Uno::InvalidOperationException::New5(::g::Uno::String::op_Addition2(::g::Uno::String::op_Addition2(::g::Uno::String::op_Addition2(::g::Uno::String::op_Addition1(::STRINGS[4/*"Event '"*/], ::g::Outracks::Simulator::Reflection::Native::IEvent::DeclaringType(uInterface(theEvent, ::TYPES[2/*Outracks.Simulator.Reflection.Native.IEvent*/]))), ::STRINGS[5/*"."*/]), uPtr(member)->Name), ::STRINGS[6/*"' has no ad...*/])));

    ::g::Outracks::Simulator::Reflection::Native::TryInvokeExtension::TryInvoke(adder, instance, uArray::Init<uObject*>(::TYPES[5/*object[]*/], 1, handlerDelegate));
}

// public object CallDynamic(object obj, Outracks.Simulator.Bytecode.TypeMemberName methodName, object[] arguments) [instance] :214
uObject* NativeReflection::CallDynamic(uObject* obj, ::g::Outracks::Simulator::Bytecode::TypeMemberName* methodName, uArray* arguments)
{
    uType* type = ::g::Uno::Object::GetType(uPtr(obj));
    return ::g::Outracks::Simulator::Reflection::Native::TryInvokeExtension::TryInvoke(::g::Outracks::Simulator::Reflection::Native::TryInvokeExtension::FindUnambiguousMethod(type, methodName, arguments), obj, arguments);
}

// public object CallStatic(Outracks.Simulator.Bytecode.TypeName typeName, Outracks.Simulator.Bytecode.TypeMemberName methodName, object[] arguments) [instance] :227
uObject* NativeReflection::CallStatic(::g::Outracks::Simulator::Bytecode::TypeName* typeName, ::g::Outracks::Simulator::Bytecode::TypeMemberName* methodName, uArray* arguments)
{
    uType* type = ::g::Outracks::Simulator::Reflection::Native::ITypeMap::ResolveType1(uInterface(uPtr(_typeMap), ::g::Outracks::Simulator::Reflection::Native::ITypeMap_typeof()), typeName);

    if (::g::Uno::Type::op_Equality(type, NULL))
        U_THROW(::g::Outracks::Simulator::Runtime::TypeNotFound::New4(typeName));

    return ::g::Outracks::Simulator::Reflection::Native::TryInvokeExtension::TryInvoke(::g::Outracks::Simulator::Reflection::Native::TryInvokeExtension::FindUnambiguousMethod(type, methodName, arguments), NULL, arguments);
}

// public object CreateDelegate(Outracks.Simulator.Bytecode.TypeName delegateTypeName, object instance, Outracks.Simulator.Bytecode.TypeMemberName methodName, Outracks.Simulator.Bytecode.Signature signature) [instance] :171
uObject* NativeReflection::CreateDelegate(::g::Outracks::Simulator::Bytecode::TypeName* delegateTypeName, uObject* instance, ::g::Outracks::Simulator::Bytecode::TypeMemberName* methodName, ::g::Outracks::Simulator::Bytecode::Signature* signature)
{
    ::g::Outracks::Simulator::ImmutableList* methodArgumentTypes = uPtr(signature)->Parameters;
    uType* type = ::g::Uno::Object::GetType(uPtr(instance));
    uObject* method = ::g::Outracks::Simulator::Reflection::Native::TryInvokeExtension::GetMethod(type, methodName, (uArray*)::g::Uno::Collections::EnumerableExtensions::ToArray(::TYPES[7/*Uno.Collections.EnumerableExtensions.ToArray<Uno.Type>*/], (uObject*)::g::Uno::Collections::EnumerableExtensions::Select(::TYPES[8/*Uno.Collections.EnumerableExtensions.Select<Outracks.Simulator.Bytecode.Parameter, Uno.Type>*/], (uObject*)methodArgumentTypes, uDelegate::New(::TYPES[10/*Uno.Func<Outracks.Simulator.Bytecode.Parameter, Uno.Type>*/], uInterface(uPtr(_typeMap), ::g::Outracks::Simulator::Reflection::Native::ITypeMap_typeof()), offsetof(::g::Outracks::Simulator::Reflection::Native::ITypeMap, fp_ResolveType)))));

    if (method == NULL)
        U_THROW(::g::Outracks::Simulator::Runtime::MemberNotFound::New4(::g::Outracks::Simulator::Bytecode::TypeName::Parse(::g::Uno::Type::FullName(uPtr(type))), methodName));

    return ::g::Uno::Reflection::IFunction::CreateDelegate(uInterface(uPtr(method), ::TYPES[68/*Uno.Reflection.IFunction*/]), ::g::Outracks::Simulator::Reflection::Native::ITypeMap::ResolveType1(uInterface(uPtr(_typeMap), ::g::Outracks::Simulator::Reflection::Native::ITypeMap_typeof()), delegateTypeName), instance);
}

// public object GetEnumValue(Outracks.Simulator.Bytecode.TypeName enumType, Outracks.Simulator.Bytecode.TypeMemberName valueName) [instance] :278
uObject* NativeReflection::GetEnumValue(::g::Outracks::Simulator::Bytecode::TypeName* enumType, ::g::Outracks::Simulator::Bytecode::TypeMemberName* valueName)
{
    uType* type = ::g::Outracks::Simulator::Reflection::Native::ITypeMap::ResolveType1(uInterface(uPtr(_typeMap), ::g::Outracks::Simulator::Reflection::Native::ITypeMap_typeof()), enumType);
    return ::g::Uno::Enum::Parse(type, uPtr(valueName)->Name);
}

// public object GetPropertyValue(object obj, Outracks.Simulator.Bytecode.TypeMemberName propertyName) [instance] :133
uObject* NativeReflection::GetPropertyValue(uObject* obj, ::g::Outracks::Simulator::Bytecode::TypeMemberName* propertyName)
{
    uObject* prop = ResolveProperty(obj, propertyName, NULL);
    uObject* getter = ::g::Outracks::Simulator::Reflection::Native::IProperty::GetMethod(uInterface(uPtr(prop), ::TYPES[11/*Outracks.Simulator.Reflection.Native.IProperty*/]));

    if (getter == NULL)
        U_THROW(::g::Uno::InvalidOperationException::New5(::g::Uno::String::op_Addition2(::g::Uno::String::op_Addition1(::g::Uno::String::op_Addition2(::g::Uno::String::op_Addition1(::STRINGS[7/*"Property '"*/], ::g::Outracks::Simulator::Reflection::Native::IProperty::DeclaringType(uInterface(prop, ::TYPES[11/*Outracks.Simulator.Reflection.Native.IProperty*/]))), ::STRINGS[5/*"."*/]), propertyName), ::STRINGS[8/*"' has no ge...*/])));

    return ::g::Outracks::Simulator::Reflection::Native::TryInvokeExtension::TryInvoke(::g::Outracks::Simulator::Reflection::Native::IProperty::GetMethod(uInterface(prop, ::TYPES[11/*Outracks.Simulator.Reflection.Native.IProperty*/])), obj, uArray::New(::TYPES[5/*object[]*/], 0));
}

// public object GetStaticPropertyOrFieldValue(Outracks.Simulator.Bytecode.TypeName typeName, Outracks.Simulator.Bytecode.TypeMemberName memberName) [instance] :249
uObject* NativeReflection::GetStaticPropertyOrFieldValue(::g::Outracks::Simulator::Bytecode::TypeName* typeName, ::g::Outracks::Simulator::Bytecode::TypeMemberName* memberName)
{
    uType* type = ::g::Outracks::Simulator::Reflection::Native::ITypeMap::ResolveType1(uInterface(uPtr(_typeMap), ::g::Outracks::Simulator::Reflection::Native::ITypeMap_typeof()), typeName);

    if (::g::Uno::Type::op_Equality(type, NULL))
        U_THROW(::g::Outracks::Simulator::Runtime::TypeNotFound::New4(typeName));

    uObject* prop = ::g::Outracks::Simulator::Reflection::Native::TryInvokeExtension::GetProperty(type, memberName, NULL);

    if ((prop != NULL) && (::g::Outracks::Simulator::Reflection::Native::IProperty::GetMethod(uInterface(uPtr(prop), ::TYPES[11/*Outracks.Simulator.Reflection.Native.IProperty*/])) != NULL))
        return ::g::Uno::Reflection::IFunction::Invoke(uInterface(uPtr(::g::Outracks::Simulator::Reflection::Native::IProperty::GetMethod(uInterface(uPtr(prop), ::TYPES[11/*Outracks.Simulator.Reflection.Native.IProperty*/]))), ::TYPES[68/*Uno.Reflection.IFunction*/]), NULL, uArray::New(::TYPES[5/*object[]*/], 0));

    uObject* field = ::g::Outracks::Simulator::Reflection::Native::TryInvokeExtension::GetField(type, memberName);

    if (field != NULL)
        return ::g::Uno::Reflection::IField::GetValue(uInterface(uPtr(field), ::TYPES[69/*Uno.Reflection.IField*/]), NULL);

    U_THROW(::g::Outracks::Simulator::Runtime::MemberNotFound::New4(typeName, memberName));
}

// public object Instantiate(Outracks.Simulator.Bytecode.TypeName typeName, object[] args) [instance] :222
uObject* NativeReflection::Instantiate(::g::Outracks::Simulator::Bytecode::TypeName* typeName, uArray* args)
{
    return CallStatic(typeName, ::g::Outracks::Simulator::Bytecode::TypeMemberName::New1(::STRINGS[9/*".ctor"*/]), args);
}

// public bool IsSubtype(object obj, Outracks.Simulator.Bytecode.TypeName typeName) [instance] :266
bool NativeReflection::IsSubtype(uObject* obj, ::g::Outracks::Simulator::Bytecode::TypeName* typeName)
{
    uType* type = ::g::Outracks::Simulator::Reflection::Native::ITypeMap::ResolveType1(uInterface(uPtr(_typeMap), ::g::Outracks::Simulator::Reflection::Native::ITypeMap_typeof()), typeName);

    if (::g::Uno::Type::op_Equality(type, NULL))
        return false;

    return ::g::Outracks::Simulator::Reflection::Native::TryInvokeExtension::IsInstanceOfType(type, obj);
}

// public bool IsType(object obj, Outracks.Simulator.Bytecode.TypeName typeName) [instance] :273
bool NativeReflection::IsType(uObject* obj, ::g::Outracks::Simulator::Bytecode::TypeName* typeName)
{
    return ::g::Uno::String::op_Equality(::g::Uno::Type::FullName(uPtr(::g::Uno::Object::GetType(uPtr(obj)))), uPtr(typeName)->FullName());
}

// public void RemoveEventHandler(object instance, Outracks.Simulator.Bytecode.TypeMemberName member, object handlerDelegate) [instance] :199
void NativeReflection::RemoveEventHandler(uObject* instance, ::g::Outracks::Simulator::Bytecode::TypeMemberName* member, uObject* handlerDelegate)
{
    uType* type = ::g::Uno::Object::GetType(uPtr(instance));
    uObject* theEvent = ::g::Outracks::Simulator::Reflection::Native::TryInvokeExtension::GetEvent(type, member, ::g::Uno::Object::GetType(uPtr(handlerDelegate)));

    if (theEvent == NULL)
        U_THROW(::g::Outracks::Simulator::Runtime::MemberNotFound::New4(::g::Outracks::Simulator::Bytecode::TypeName::Parse(::g::Uno::Type::FullName(uPtr(type))), member));

    uObject* remover = ::g::Outracks::Simulator::Reflection::Native::IEvent::AddMethod(uInterface(uPtr(theEvent), ::TYPES[2/*Outracks.Simulator.Reflection.Native.IEvent*/]));

    if (remover == NULL)
        U_THROW(::g::Uno::InvalidOperationException::New5(::g::Uno::String::op_Addition2(::g::Uno::String::op_Addition2(::g::Uno::String::op_Addition2(::g::Uno::String::op_Addition1(::STRINGS[4/*"Event '"*/], ::g::Outracks::Simulator::Reflection::Native::IEvent::DeclaringType(uInterface(theEvent, ::TYPES[2/*Outracks.Simulator.Reflection.Native.IEvent*/]))), ::STRINGS[5/*"."*/]), uPtr(member)->Name), ::STRINGS[10/*"' has no re...*/])));

    ::g::Outracks::Simulator::Reflection::Native::TryInvokeExtension::TryInvoke(remover, instance, uArray::Init<uObject*>(::TYPES[5/*object[]*/], 1, handlerDelegate));
}

// private Outracks.Simulator.Reflection.Native.IProperty ResolveProperty(object obj, Outracks.Simulator.Bytecode.TypeMemberName propertyName, Uno.Type propertyType) [instance] :153
uObject* NativeReflection::ResolveProperty(uObject* obj, ::g::Outracks::Simulator::Bytecode::TypeMemberName* propertyName, uType* propertyType)
{
    if (obj == NULL)
        U_THROW(::g::Uno::ArgumentNullException::New6(::STRINGS[11/*"obj"*/]));

    uType* objType = ::g::Uno::Object::GetType(uPtr(obj));

    try
    {
        return ::g::Outracks::Simulator::Reflection::Native::TryInvokeExtension::GetProperty(objType, propertyName, propertyType);
    }
    catch (const uThrowable& __t)
    {
        ::g::Uno::Exception* e = __t.Exception;
        U_THROW(::g::Outracks::Simulator::Runtime::MemberNotFound::New4(::g::Outracks::Simulator::Bytecode::TypeName::Parse(::g::Uno::Type::FullName(uPtr(objType))), propertyName));
    }
}

// public void SetPropertyValue(object obj, Outracks.Simulator.Bytecode.TypeMemberName propertyName, object value) [instance] :143
void NativeReflection::SetPropertyValue(uObject* obj, ::g::Outracks::Simulator::Bytecode::TypeMemberName* propertyName, uObject* value)
{
    uObject* prop = ResolveProperty(obj, propertyName, (value != NULL) ? (uType*)::g::Uno::Object::GetType(uPtr(value)) : NULL);
    uObject* setter = ::g::Outracks::Simulator::Reflection::Native::IProperty::SetMethod(uInterface(uPtr(prop), ::TYPES[11/*Outracks.Simulator.Reflection.Native.IProperty*/]));

    if (setter == NULL)
        U_THROW(::g::Uno::InvalidOperationException::New5(::g::Uno::String::op_Addition2(::g::Uno::String::op_Addition1(::g::Uno::String::op_Addition2(::g::Uno::String::op_Addition1(::STRINGS[7/*"Property '"*/], ::g::Outracks::Simulator::Reflection::Native::IProperty::DeclaringType(uInterface(prop, ::TYPES[11/*Outracks.Simulator.Reflection.Native.IProperty*/]))), ::STRINGS[5/*"."*/]), propertyName), ::STRINGS[12/*"' has no se...*/])));

    ::g::Outracks::Simulator::Reflection::Native::TryInvokeExtension::TryInvoke(setter, obj, uArray::Init<uObject*>(::TYPES[5/*object[]*/], 1, value));
}

// public void SetStaticField(Outracks.Simulator.Bytecode.TypeName typeName, Outracks.Simulator.Bytecode.TypeMemberName fieldName, object value) [instance] :236
void NativeReflection::SetStaticField(::g::Outracks::Simulator::Bytecode::TypeName* typeName, ::g::Outracks::Simulator::Bytecode::TypeMemberName* fieldName, uObject* value)
{
    uType* type = ::g::Outracks::Simulator::Reflection::Native::ITypeMap::ResolveType1(uInterface(uPtr(_typeMap), ::g::Outracks::Simulator::Reflection::Native::ITypeMap_typeof()), typeName);

    if (::g::Uno::Type::op_Equality(type, NULL))
        U_THROW(::g::Outracks::Simulator::Runtime::TypeNotFound::New4(typeName));

    uObject* field = ::g::Outracks::Simulator::Reflection::Native::TryInvokeExtension::GetField(type, fieldName);

    if (field == NULL)
        U_THROW(::g::Outracks::Simulator::Runtime::MemberNotFound::New4(typeName, fieldName));

    ::g::Uno::Reflection::IField::SetValue(uInterface(uPtr(field), ::TYPES[69/*Uno.Reflection.IField*/]), NULL, value);
}

// public NativeReflection New(Outracks.Simulator.Reflection.Native.ITypeMap typeMap) [static] :128
NativeReflection* NativeReflection::New1(uObject* typeMap)
{
    NativeReflection* obj1 = (NativeReflection*)uNew(NativeReflection_typeof());
    obj1->ctor_(typeMap);
    return obj1;
}
// }

// C:\ProgramData\Uno\Packages\Outracks.Simulator.Reflection.Uno\0.1.0\Native\$.uno(12)
// ------------------------------------------------------------------------------------

// internal sealed extern class Property<T> :12
// {
::g::Uno::UX::Property_type* Property_typeof()
{
    static uSStrong< ::g::Uno::UX::Property_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 2;
    options.GenericCount = 1;
    options.ObjectSize = sizeof(Property);
    options.TypeSize = sizeof(::g::Uno::UX::Property_type);
    type = (::g::Uno::UX::Property_type*)uClassType::New("Outracks.Simulator.Reflection.Native.Property`1", options);
    type->SetBase(::g::Uno::UX::Property_typeof()->MakeType(type->T(0)));
    type->fp_ctor_ = (void*)Property__New1_fn;
    type->SetFields(2);
    return type;
}

// public generated Property() :12
void Property__ctor_1_fn(Property* __this)
{
    __this->ctor_1();
}

// public generated Property New() :12
void Property__New1_fn(uType* __type, Property** __retval)
{
    *__retval = Property::New1(__type);
}

// public generated Property() [instance] :12
void Property::ctor_1()
{
    ctor_();
}

// public generated Property New() [static] :12
Property* Property::New1(uType* __type)
{
    Property* obj1 = (Property*)uNew(__type);
    obj1->ctor_1();
    return obj1;
}
// }

// C:\ProgramData\Uno\Packages\Outracks.Simulator.Reflection.Uno\0.1.0\Native\$.uno(480)
// -------------------------------------------------------------------------------------

// internal static extern class ReflectionCache :480
// {
// static ReflectionCache() :486
static void ReflectionCache__cctor__fn(uType* __type)
{
    ReflectionCache::_functionCache_ = ((::g::Uno::Collections::Dictionary*)::g::Uno::Collections::Dictionary::New1(::TYPES[13/*Uno.Collections.Dictionary<Uno.Type, Uno.Reflection.CppFunction[]>*/]));
    ReflectionCache::_fieldCache_ = ((::g::Uno::Collections::Dictionary*)::g::Uno::Collections::Dictionary::New1(::TYPES[14/*Uno.Collections.Dictionary<Uno.Type, Uno.Reflection.CppField[]>*/]));
    ReflectionCache::_typeCache_ = ((::g::Uno::Collections::List*)::g::Uno::Collections::List::New1(::TYPES[15/*Uno.Collections.List<Uno.Collections.Dictionary<Outracks.Simulator.Bytecode.TypeName, Uno.Type>>*/]));
}

uClassType* ReflectionCache_typeof()
{
    static uSStrong<uClassType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 3;
    options.TypeSize = sizeof(uClassType);
    type = uClassType::New("Outracks.Simulator.Reflection.Native.ReflectionCache", options);
    type->fp_cctor_ = ReflectionCache__cctor__fn;
    ::TYPES[13] = ::g::Uno::Collections::Dictionary_typeof()->MakeType(::g::Uno::Type_typeof(), ::g::Uno::Reflection::CppFunction_typeof()->Array());
    ::TYPES[14] = ::g::Uno::Collections::Dictionary_typeof()->MakeType(::g::Uno::Type_typeof(), ::g::Uno::Reflection::CppField_typeof()->Array());
    ::TYPES[15] = ::g::Uno::Collections::List_typeof()->MakeType(::g::Uno::Collections::Dictionary_typeof()->MakeType(::g::Outracks::Simulator::Bytecode::TypeName_typeof(), ::g::Uno::Type_typeof()));
    ::TYPES[16] = ::g::Uno::Collections::List_typeof()->MakeType(::g::Uno::Reflection::CppField_typeof());
    ::TYPES[17] = ::g::Uno::Collections::IEnumerable_typeof()->MakeType(::g::Uno::Reflection::CppField_typeof());
    ::TYPES[18] = ::g::Uno::Runtime::Implementation::Internal::ArrayEnumerable_typeof()->MakeType(::g::Uno::Reflection::CppField_typeof());
    ::TYPES[1] = ::g::Uno::Type_typeof();
    ::TYPES[19] = ::g::Uno::Collections::List_typeof()->MakeType(::g::Uno::Reflection::CppFunction_typeof());
    ::TYPES[20] = ::g::Uno::Collections::IEnumerable_typeof()->MakeType(::g::Uno::Reflection::CppFunction_typeof());
    ::TYPES[21] = ::g::Uno::Runtime::Implementation::Internal::ArrayEnumerable_typeof()->MakeType(::g::Uno::Reflection::CppFunction_typeof());
    ::TYPES[22] = ::g::Uno::Collections::List__Enumerator_typeof()->MakeType(::g::Uno::Collections::Dictionary_typeof()->MakeType(::g::Outracks::Simulator::Bytecode::TypeName_typeof(), ::g::Uno::Type_typeof()));
    ::TYPES[23] = ::g::Uno::Collections::Dictionary_typeof()->MakeType(::g::Outracks::Simulator::Bytecode::TypeName_typeof(), ::g::Uno::Type_typeof());
    type->SetFields(0,
        ::g::Uno::Collections::Dictionary_typeof()->MakeType(::g::Uno::Type_typeof(), ::g::Uno::Reflection::CppField_typeof()->Array()), (uintptr_t)&::g::Outracks::Simulator::Reflection::Native::ReflectionCache::_fieldCache_, uFieldFlagsStatic,
        ::g::Uno::Collections::Dictionary_typeof()->MakeType(::g::Uno::Type_typeof(), ::g::Uno::Reflection::CppFunction_typeof()->Array()), (uintptr_t)&::g::Outracks::Simulator::Reflection::Native::ReflectionCache::_functionCache_, uFieldFlagsStatic,
        ::g::Uno::Collections::List_typeof()->MakeType(::g::Uno::Collections::Dictionary_typeof()->MakeType(::g::Outracks::Simulator::Bytecode::TypeName_typeof(), ::g::Uno::Type_typeof())), (uintptr_t)&::g::Outracks::Simulator::Reflection::Native::ReflectionCache::_typeCache_, uFieldFlagsStatic);
    return type;
}

// public static void AddToTypeCache(Uno.Collections.Dictionary<Outracks.Simulator.Bytecode.TypeName, Uno.Type> typeDictionary) :540
void ReflectionCache__AddToTypeCache_fn(::g::Uno::Collections::Dictionary* typeDictionary)
{
    ReflectionCache::AddToTypeCache(typeDictionary);
}

// public static Uno.Reflection.CppField[] GetFields(Uno.Type type) :512
void ReflectionCache__GetFields_fn(uType* type, uArray** __retval)
{
    *__retval = ReflectionCache::GetFields(type);
}

// public static Uno.Reflection.CppFunction[] GetFunctions(Uno.Type type) :493
void ReflectionCache__GetFunctions_fn(uType* type, uArray** __retval)
{
    *__retval = ReflectionCache::GetFunctions(type);
}

// public static Uno.Type GetType(Outracks.Simulator.Bytecode.TypeName typeName) :531
void ReflectionCache__GetType_fn(::g::Outracks::Simulator::Bytecode::TypeName* typeName, uType** __retval)
{
    *__retval = ReflectionCache::GetType(typeName);
}

uSStrong< ::g::Uno::Collections::Dictionary*> ReflectionCache::_fieldCache_;
uSStrong< ::g::Uno::Collections::Dictionary*> ReflectionCache::_functionCache_;
uSStrong< ::g::Uno::Collections::List*> ReflectionCache::_typeCache_;

// public static void AddToTypeCache(Uno.Collections.Dictionary<Outracks.Simulator.Bytecode.TypeName, Uno.Type> typeDictionary) [static] :540
void ReflectionCache::AddToTypeCache(::g::Uno::Collections::Dictionary* typeDictionary)
{
    ReflectionCache_typeof()->Init();
    ::g::Uno::Collections::List__Add_fn(uPtr(ReflectionCache::_typeCache()), typeDictionary);
}

// public static Uno.Reflection.CppField[] GetFields(Uno.Type type) [static] :512
uArray* ReflectionCache::GetFields(uType* type)
{
    ReflectionCache_typeof()->Init();
    bool ret2;
    uArray* ret3;

    if ((::g::Uno::Collections::Dictionary__ContainsKey_fn(uPtr(ReflectionCache::_fieldCache()), type, &ret2), ret2))
        return (::g::Uno::Collections::Dictionary__get_Item_fn(uPtr(ReflectionCache::_fieldCache()), type, &ret3), ret3);

    ::g::Uno::Collections::List* fields = (::g::Uno::Collections::List*)::g::Uno::Collections::List::New1(::TYPES[16/*Uno.Collections.List<Uno.Reflection.CppField>*/]);
    uType* t = type;

    while (::g::Uno::Type::op_Inequality(t, NULL))
    {
        uPtr(fields)->AddRange((uObject*)((::g::Uno::Runtime::Implementation::Internal::ArrayEnumerable*)::g::Uno::Runtime::Implementation::Internal::ArrayEnumerable::New1(::TYPES[18/*Uno.Runtime.Implementation.Internal.ArrayEnumerable<Uno.Reflection.CppField>*/], ::g::Uno::Reflection::CppReflection::GetFields(t))));
        t = ::g::Uno::Type::BaseType(uPtr(t));
    }

    uArray* array = (uArray*)fields->ToArray();
    ::g::Uno::Collections::Dictionary__Add_fn(uPtr(ReflectionCache::_fieldCache()), type, array);
    return array;
}

// public static Uno.Reflection.CppFunction[] GetFunctions(Uno.Type type) [static] :493
uArray* ReflectionCache::GetFunctions(uType* type)
{
    ReflectionCache_typeof()->Init();
    bool ret4;
    uArray* ret5;

    if ((::g::Uno::Collections::Dictionary__ContainsKey_fn(uPtr(ReflectionCache::_functionCache()), type, &ret4), ret4))
        return (::g::Uno::Collections::Dictionary__get_Item_fn(uPtr(ReflectionCache::_functionCache()), type, &ret5), ret5);

    ::g::Uno::Collections::List* functions = (::g::Uno::Collections::List*)::g::Uno::Collections::List::New1(::TYPES[19/*Uno.Collections.List<Uno.Reflection.CppFunction>*/]);
    uType* t = type;

    while (::g::Uno::Type::op_Inequality(t, NULL))
    {
        uPtr(functions)->AddRange((uObject*)((::g::Uno::Runtime::Implementation::Internal::ArrayEnumerable*)::g::Uno::Runtime::Implementation::Internal::ArrayEnumerable::New1(::TYPES[21/*Uno.Runtime.Implementation.Internal.ArrayEnumerable<Uno.Reflection.CppFunction>*/], ::g::Uno::Reflection::CppReflection::GetFunctions(t))));
        t = ::g::Uno::Type::BaseType(uPtr(t));
    }

    uArray* array = (uArray*)functions->ToArray();
    ::g::Uno::Collections::Dictionary__Add_fn(uPtr(ReflectionCache::_functionCache()), type, array);
    return array;
}

// public static Uno.Type GetType(Outracks.Simulator.Bytecode.TypeName typeName) [static] :531
uType* ReflectionCache::GetType(::g::Outracks::Simulator::Bytecode::TypeName* typeName)
{
    ReflectionCache_typeof()->Init();
    ::g::Uno::Collections::List__Enumerator<uStrong< ::g::Uno::Collections::Dictionary*> > ret6;
    bool ret7;
    uType* ret8;

    for (::g::Uno::Collections::List__Enumerator<uStrong< ::g::Uno::Collections::Dictionary*> > enum1 = (::g::Uno::Collections::List__GetEnumerator_fn(uPtr(ReflectionCache::_typeCache()), &ret6), ret6); enum1.MoveNext(::TYPES[22/*Uno.Collections.List<Uno.Collections.Dictionary<Outracks.Simulator.Bytecode.TypeName, Uno.Type>>.Enumerator*/]); )
    {
        ::g::Uno::Collections::Dictionary* dict = enum1.Current(::TYPES[22/*Uno.Collections.List<Uno.Collections.Dictionary<Outracks.Simulator.Bytecode.TypeName, Uno.Type>>.Enumerator*/]);

        if ((::g::Uno::Collections::Dictionary__ContainsKey_fn(uPtr(dict), typeName, &ret7), ret7))
            return (::g::Uno::Collections::Dictionary__get_Item_fn(uPtr(dict), typeName, &ret8), ret8);
    }

    return NULL;
}
// }

// C:\ProgramData\Uno\Packages\Outracks.Simulator.Reflection.Uno\0.1.0\Native\$.uno(558)
// -------------------------------------------------------------------------------------

// internal static extern class ReflectionExtensions :558
// {
// static ReflectionExtensions() :558
static void ReflectionExtensions__cctor__fn(uType* __type)
{
    ReflectionExtensions::PropGetPrefix_ = ::STRINGS[2/*"get_"*/];
    ReflectionExtensions::PropSetPrefix_ = ::STRINGS[3/*"set_"*/];
    ReflectionExtensions::EventAdderPrefix_ = ::STRINGS[0/*"add_"*/];
    ReflectionExtensions::EventRemovePrefix_ = ::STRINGS[1/*"remove_"*/];
    ReflectionExtensions::ConstructorName_ = ::g::Outracks::Simulator::Bytecode::TypeMemberName::New1(::STRINGS[9/*".ctor"*/]);
}

uClassType* ReflectionExtensions_typeof()
{
    static uSStrong<uClassType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 5;
    options.TypeSize = sizeof(uClassType);
    type = uClassType::New("Outracks.Simulator.Reflection.Native.ReflectionExtensions", options);
    type->fp_cctor_ = ReflectionExtensions__cctor__fn;
    ::STRINGS[2] = uString::Const("get_");
    ::STRINGS[3] = uString::Const("set_");
    ::STRINGS[0] = uString::Const("add_");
    ::STRINGS[1] = uString::Const("remove_");
    ::STRINGS[9] = uString::Const(".ctor");
    ::TYPES[0] = ::g::Uno::Type_typeof()->Array();
    ::TYPES[24] = ::g::Uno::Bool_typeof();
    ::TYPES[4] = ::g::Outracks::Simulator::Bytecode::TypeMemberName_typeof();
    ::TYPES[25] = ::g::Uno::Reflection::CppField_typeof()->Array();
    ::TYPES[26] = ::g::Uno::Reflection::CppField_typeof();
    ::TYPES[27] = ::g::Uno::Reflection::CppFunction_typeof()->Array();
    ::TYPES[28] = ::g::Uno::Reflection::CppFunction_typeof();
    ::TYPES[19] = ::g::Uno::Collections::List_typeof()->MakeType(::g::Uno::Reflection::CppFunction_typeof());
    ::TYPES[12] = ::g::Outracks::Simulator::Bytecode::TypeName_typeof();
    ::TYPES[29] = ::g::Outracks::Simulator::Bytecode::TypeName_typeof()->Array();
    ::TYPES[6] = ::g::Outracks::Simulator::Bytecode::Signature_typeof();
    ::TYPES[30] = ::g::Outracks::Simulator::ImmutableList_typeof()->MakeType(::g::Outracks::Simulator::Bytecode::Parameter_typeof());
    ::TYPES[31] = ::g::Outracks::Simulator::Bytecode::Parameter_typeof();
    ::TYPES[5] = uObject_typeof()->Array();
    type->SetFields(0,
        ::g::Outracks::Simulator::Bytecode::TypeMemberName_typeof(), (uintptr_t)&::g::Outracks::Simulator::Reflection::Native::ReflectionExtensions::ConstructorName_, uFieldFlagsStatic,
        ::g::Uno::String_typeof(), (uintptr_t)&::g::Outracks::Simulator::Reflection::Native::ReflectionExtensions::EventAdderPrefix_, uFieldFlagsStatic,
        ::g::Uno::String_typeof(), (uintptr_t)&::g::Outracks::Simulator::Reflection::Native::ReflectionExtensions::EventRemovePrefix_, uFieldFlagsStatic,
        ::g::Uno::String_typeof(), (uintptr_t)&::g::Outracks::Simulator::Reflection::Native::ReflectionExtensions::PropGetPrefix_, uFieldFlagsStatic,
        ::g::Uno::String_typeof(), (uintptr_t)&::g::Outracks::Simulator::Reflection::Native::ReflectionExtensions::PropSetPrefix_, uFieldFlagsStatic);
    return type;
}

// private static bool CheckArgumentTypes(Uno.Type[] paramTypes, Uno.Type[] argumentTypes) :664
void ReflectionExtensions__CheckArgumentTypes_fn(uArray* paramTypes, uArray* argumentTypes, bool* __retval)
{
    *__retval = ReflectionExtensions::CheckArgumentTypes(paramTypes, argumentTypes);
}

// public static Uno.Reflection.CppFunction FindConstructor(Uno.Type type, Uno.Type[] paramTypes) :594
void ReflectionExtensions__FindConstructor_fn(uType* type, uArray* paramTypes, uFunction** __retval)
{
    *__retval = ReflectionExtensions::FindConstructor(type, paramTypes);
}

// public static Uno.Reflection.CppFunction FindEventAddFunction(Uno.Type type, Outracks.Simulator.Bytecode.TypeMemberName typeMemberName, object delegateObj) :611
void ReflectionExtensions__FindEventAddFunction_fn(uType* type, ::g::Outracks::Simulator::Bytecode::TypeMemberName* typeMemberName, uObject* delegateObj, uFunction** __retval)
{
    *__retval = ReflectionExtensions::FindEventAddFunction(type, typeMemberName, delegateObj);
}

// public static Uno.Reflection.CppFunction FindEventRemoveFunction(Uno.Type type, Outracks.Simulator.Bytecode.TypeMemberName typeMemberName, object delegateObj) :617
void ReflectionExtensions__FindEventRemoveFunction_fn(uType* type, ::g::Outracks::Simulator::Bytecode::TypeMemberName* typeMemberName, uObject* delegateObj, uFunction** __retval)
{
    *__retval = ReflectionExtensions::FindEventRemoveFunction(type, typeMemberName, delegateObj);
}

// public static Uno.Reflection.CppField FindField(Uno.Type type, Outracks.Simulator.Bytecode.TypeMemberName fieldName) :623
void ReflectionExtensions__FindField_fn(uType* type, ::g::Outracks::Simulator::Bytecode::TypeMemberName* fieldName, uField** __retval)
{
    *__retval = ReflectionExtensions::FindField(type, fieldName);
}

// public static Uno.Reflection.CppFunction FindFunction(Uno.Type type, Outracks.Simulator.Bytecode.TypeMemberName memberName, Uno.Type[] paramTypes) :648
void ReflectionExtensions__FindFunction_fn(uType* type, ::g::Outracks::Simulator::Bytecode::TypeMemberName* memberName, uArray* paramTypes, uFunction** __retval)
{
    *__retval = ReflectionExtensions::FindFunction(type, memberName, paramTypes);
}

// private static Uno.Reflection.CppFunction FindFunctionOverload(Uno.Reflection.CppFunction[] functions, Uno.Type[] paramTypes) :653
void ReflectionExtensions__FindFunctionOverload_fn(uArray* functions, uArray* paramTypes, uFunction** __retval)
{
    *__retval = ReflectionExtensions::FindFunctionOverload(functions, paramTypes);
}

// private static Uno.Reflection.CppFunction[] FindFunctionsByName(Uno.Type type, Outracks.Simulator.Bytecode.TypeMemberName memberName) :680
void ReflectionExtensions__FindFunctionsByName_fn(uType* type, ::g::Outracks::Simulator::Bytecode::TypeMemberName* memberName, uArray** __retval)
{
    *__retval = ReflectionExtensions::FindFunctionsByName(type, memberName);
}

// public static Uno.Reflection.CppFunction FindPropertyGetter(Uno.Type type, Outracks.Simulator.Bytecode.TypeMemberName typeMemberName) :599
void ReflectionExtensions__FindPropertyGetter_fn(uType* type, ::g::Outracks::Simulator::Bytecode::TypeMemberName* typeMemberName, uFunction** __retval)
{
    *__retval = ReflectionExtensions::FindPropertyGetter(type, typeMemberName);
}

// public static Uno.Reflection.CppFunction FindPropertySetter(Uno.Type type, Outracks.Simulator.Bytecode.TypeMemberName typeMemberName, Uno.Type argType) :605
void ReflectionExtensions__FindPropertySetter_fn(uType* type, ::g::Outracks::Simulator::Bytecode::TypeMemberName* typeMemberName, uType* argType, uFunction** __retval)
{
    *__retval = ReflectionExtensions::FindPropertySetter(type, typeMemberName, argType);
}

// public static Uno.Type FindType(Outracks.Simulator.Bytecode.TypeName typeName) :589
void ReflectionExtensions__FindType_fn(::g::Outracks::Simulator::Bytecode::TypeName* typeName, uType** __retval)
{
    *__retval = ReflectionExtensions::FindType(typeName);
}

// public static Uno.Type[] FindTypes(Outracks.Simulator.Bytecode.TypeName[] typeName) :579
void ReflectionExtensions__FindTypes_fn(uArray* typeName, uArray** __retval)
{
    *__retval = ReflectionExtensions::FindTypes(typeName);
}

// public static Uno.Type[] GetParameterTypes(Outracks.Simulator.Bytecode.Signature methodSignature) :635
void ReflectionExtensions__GetParameterTypes_fn(::g::Outracks::Simulator::Bytecode::Signature* methodSignature, uArray** __retval)
{
    *__retval = ReflectionExtensions::GetParameterTypes(methodSignature);
}

// public static Uno.Type[] GetTypes(object[] objects) :567
void ReflectionExtensions__GetTypes_fn(uArray* objects, uArray** __retval)
{
    *__retval = ReflectionExtensions::GetTypes(objects);
}

uSStrong< ::g::Outracks::Simulator::Bytecode::TypeMemberName*> ReflectionExtensions::ConstructorName_;
uSStrong<uString*> ReflectionExtensions::EventAdderPrefix_;
uSStrong<uString*> ReflectionExtensions::EventRemovePrefix_;
uSStrong<uString*> ReflectionExtensions::PropGetPrefix_;
uSStrong<uString*> ReflectionExtensions::PropSetPrefix_;

// private static bool CheckArgumentTypes(Uno.Type[] paramTypes, Uno.Type[] argumentTypes) [static] :664
bool ReflectionExtensions::CheckArgumentTypes(uArray* paramTypes, uArray* argumentTypes)
{
    ReflectionExtensions_typeof()->Init();

    if (uPtr(paramTypes)->Length() != uPtr(argumentTypes)->Length())
        return false;

    for (int i = 0; i < uPtr(paramTypes)->Length(); i++)
    {
        uType* param = uPtr(paramTypes)->Strong<uType*>(i);
        uType* arg = uPtr(argumentTypes)->Strong<uType*>(i);

        if (!::g::Uno::Type::IsSubclassOf(uPtr(arg), param))
            return false;
    }

    return true;
}

// public static Uno.Reflection.CppFunction FindConstructor(Uno.Type type, Uno.Type[] paramTypes) [static] :594
uFunction* ReflectionExtensions::FindConstructor(uType* type, uArray* paramTypes)
{
    ReflectionExtensions_typeof()->Init();
    return ReflectionExtensions::FindFunction(type, ReflectionExtensions::ConstructorName(), paramTypes);
}

// public static Uno.Reflection.CppFunction FindEventAddFunction(Uno.Type type, Outracks.Simulator.Bytecode.TypeMemberName typeMemberName, object delegateObj) [static] :611
uFunction* ReflectionExtensions::FindEventAddFunction(uType* type, ::g::Outracks::Simulator::Bytecode::TypeMemberName* typeMemberName, uObject* delegateObj)
{
    ReflectionExtensions_typeof()->Init();
    ::g::Outracks::Simulator::Bytecode::TypeMemberName* eventAddName = ::g::Outracks::Simulator::Bytecode::TypeMemberName::New1(::g::Uno::String::op_Addition2(ReflectionExtensions::EventAdderPrefix(), uPtr(typeMemberName)->Name));
    return ReflectionExtensions::FindFunction(type, eventAddName, uArray::Init<uType*>(::TYPES[0/*Uno.Type[]*/], 1, (uType*)::g::Uno::Object::GetType(uPtr(delegateObj))));
}

// public static Uno.Reflection.CppFunction FindEventRemoveFunction(Uno.Type type, Outracks.Simulator.Bytecode.TypeMemberName typeMemberName, object delegateObj) [static] :617
uFunction* ReflectionExtensions::FindEventRemoveFunction(uType* type, ::g::Outracks::Simulator::Bytecode::TypeMemberName* typeMemberName, uObject* delegateObj)
{
    ReflectionExtensions_typeof()->Init();
    ::g::Outracks::Simulator::Bytecode::TypeMemberName* eventRemoveName = ::g::Outracks::Simulator::Bytecode::TypeMemberName::New1(::g::Uno::String::op_Addition2(ReflectionExtensions::EventRemovePrefix(), uPtr(typeMemberName)->Name));
    return ReflectionExtensions::FindFunction(type, eventRemoveName, uArray::Init<uType*>(::TYPES[0/*Uno.Type[]*/], 1, (uType*)::g::Uno::Object::GetType(uPtr(delegateObj))));
}

// public static Uno.Reflection.CppField FindField(Uno.Type type, Outracks.Simulator.Bytecode.TypeMemberName fieldName) [static] :623
uField* ReflectionExtensions::FindField(uType* type, ::g::Outracks::Simulator::Bytecode::TypeMemberName* fieldName)
{
    ReflectionExtensions_typeof()->Init();
    uArray* fields = ::g::Outracks::Simulator::Reflection::Native::ReflectionCache::GetFields(type);

    for (int i = 0; i < uPtr(fields)->Length(); i++)
    {
        uField* f = uPtr(fields)->Item<uField*>(i);

        if (::g::Uno::String::op_Equality(::g::Uno::Reflection::CppField::Name(f), uPtr(fieldName)->Name))
            return f;
    }

    return ::g::Uno::Reflection::CppField::Null();
}

// public static Uno.Reflection.CppFunction FindFunction(Uno.Type type, Outracks.Simulator.Bytecode.TypeMemberName memberName, Uno.Type[] paramTypes) [static] :648
uFunction* ReflectionExtensions::FindFunction(uType* type, ::g::Outracks::Simulator::Bytecode::TypeMemberName* memberName, uArray* paramTypes)
{
    ReflectionExtensions_typeof()->Init();
    return ReflectionExtensions::FindFunctionOverload(ReflectionExtensions::FindFunctionsByName(type, memberName), paramTypes);
}

// private static Uno.Reflection.CppFunction FindFunctionOverload(Uno.Reflection.CppFunction[] functions, Uno.Type[] paramTypes) [static] :653
uFunction* ReflectionExtensions::FindFunctionOverload(uArray* functions, uArray* paramTypes)
{
    ReflectionExtensions_typeof()->Init();

    for (int i = 0; i < uPtr(functions)->Length(); i++)
        if (ReflectionExtensions::CheckArgumentTypes(::g::Uno::Reflection::CppFunction::ParameterTypes(uPtr(functions)->Item<uFunction*>(i)), paramTypes))
            return uPtr(functions)->Item<uFunction*>(i);

    return ::g::Uno::Reflection::CppFunction::Null();
}

// private static Uno.Reflection.CppFunction[] FindFunctionsByName(Uno.Type type, Outracks.Simulator.Bytecode.TypeMemberName memberName) [static] :680
uArray* ReflectionExtensions::FindFunctionsByName(uType* type, ::g::Outracks::Simulator::Bytecode::TypeMemberName* memberName)
{
    ReflectionExtensions_typeof()->Init();
    uString* name = uPtr(memberName)->Name;
    uArray* functions = ::g::Outracks::Simulator::Reflection::Native::ReflectionCache::GetFunctions(type);
    ::g::Uno::Collections::List* matchingFunctions = (::g::Uno::Collections::List*)::g::Uno::Collections::List::New1(::TYPES[19/*Uno.Collections.List<Uno.Reflection.CppFunction>*/]);

    for (int i = 0; i < uPtr(functions)->Length(); i++)
        if (::g::Uno::String::op_Equality(::g::Uno::Reflection::CppFunction::Name(uPtr(functions)->Item<uFunction*>(i)), name))
            ::g::Uno::Collections::List__Add_fn(uPtr(matchingFunctions), uCRef(uPtr(functions)->Item<uFunction*>(i)));

    return (uArray*)matchingFunctions->ToArray();
}

// public static Uno.Reflection.CppFunction FindPropertyGetter(Uno.Type type, Outracks.Simulator.Bytecode.TypeMemberName typeMemberName) [static] :599
uFunction* ReflectionExtensions::FindPropertyGetter(uType* type, ::g::Outracks::Simulator::Bytecode::TypeMemberName* typeMemberName)
{
    ReflectionExtensions_typeof()->Init();
    ::g::Outracks::Simulator::Bytecode::TypeMemberName* getterName = ::g::Outracks::Simulator::Bytecode::TypeMemberName::New1(::g::Uno::String::op_Addition2(ReflectionExtensions::PropGetPrefix(), uPtr(typeMemberName)->Name));
    return ReflectionExtensions::FindFunction(type, getterName, uArray::New(::TYPES[0/*Uno.Type[]*/], 0));
}

// public static Uno.Reflection.CppFunction FindPropertySetter(Uno.Type type, Outracks.Simulator.Bytecode.TypeMemberName typeMemberName, Uno.Type argType) [static] :605
uFunction* ReflectionExtensions::FindPropertySetter(uType* type, ::g::Outracks::Simulator::Bytecode::TypeMemberName* typeMemberName, uType* argType)
{
    ReflectionExtensions_typeof()->Init();
    ::g::Outracks::Simulator::Bytecode::TypeMemberName* setterName = ::g::Outracks::Simulator::Bytecode::TypeMemberName::New1(::g::Uno::String::op_Addition2(ReflectionExtensions::PropSetPrefix(), uPtr(typeMemberName)->Name));
    return ReflectionExtensions::FindFunction(type, setterName, uArray::Init<uType*>(::TYPES[0/*Uno.Type[]*/], 1, argType));
}

// public static Uno.Type FindType(Outracks.Simulator.Bytecode.TypeName typeName) [static] :589
uType* ReflectionExtensions::FindType(::g::Outracks::Simulator::Bytecode::TypeName* typeName)
{
    ReflectionExtensions_typeof()->Init();
    uType* ind1 = ::g::Outracks::Simulator::Reflection::Native::ReflectionCache::GetType(typeName);
    return (ind1 != NULL) ? ind1 : (uType*)::g::Uno::Type::GetType2(uPtr(typeName)->FullName(), true);
}

// public static Uno.Type[] FindTypes(Outracks.Simulator.Bytecode.TypeName[] typeName) [static] :579
uArray* ReflectionExtensions::FindTypes(uArray* typeName)
{
    ReflectionExtensions_typeof()->Init();
    uArray* types = uArray::New(::TYPES[0/*Uno.Type[]*/], uPtr(typeName)->Length());

    for (int i = 0; i < typeName->Length(); i++)
        types->Strong<uType*>(i) = ReflectionExtensions::FindType(typeName->Strong< ::g::Outracks::Simulator::Bytecode::TypeName*>(i));

    return types;
}

// public static Uno.Type[] GetParameterTypes(Outracks.Simulator.Bytecode.Signature methodSignature) [static] :635
uArray* ReflectionExtensions::GetParameterTypes(::g::Outracks::Simulator::Bytecode::Signature* methodSignature)
{
    ReflectionExtensions_typeof()->Init();
    ::g::Outracks::Simulator::Bytecode::Parameter* ret2;
    ::g::Outracks::Simulator::ImmutableList* parameters = uPtr(methodSignature)->Parameters;
    uArray* types = uArray::New(::TYPES[0/*Uno.Type[]*/], uPtr(parameters)->Count());

    for (int i = 0; i < parameters->Count(); i++)
        uPtr(types)->Strong<uType*>(i) = ReflectionExtensions::FindType(uPtr((::g::Outracks::Simulator::ImmutableList__get_Item_fn(uPtr(parameters), uCRef<int>(i), &ret2), ret2))->Type);

    return types;
}

// public static Uno.Type[] GetTypes(object[] objects) [static] :567
uArray* ReflectionExtensions::GetTypes(uArray* objects)
{
    ReflectionExtensions_typeof()->Init();

    if (objects == NULL)
        return NULL;

    uArray* types = uArray::New(::TYPES[0/*Uno.Type[]*/], uPtr(objects)->Length());

    for (int i = 0; i < objects->Length(); i++)
        types->Strong<uType*>(i) = ::g::Uno::Object::GetType(uPtr(objects->Strong<uObject*>(i)));

    return types;
}
// }

// C:\ProgramData\Uno\Packages\Outracks.Simulator.Reflection.Uno\0.1.0\Native\$.uno(15)
// ------------------------------------------------------------------------------------

// internal static extern class ReflectionHelpers :15
// {
uClassType* ReflectionHelpers_typeof()
{
    static uSStrong<uClassType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.TypeSize = sizeof(uClassType);
    type = uClassType::New("Outracks.Simulator.Reflection.Native.ReflectionHelpers", options);
    ::TYPES[23] = ::g::Uno::Collections::Dictionary_typeof()->MakeType(::g::Outracks::Simulator::Bytecode::TypeName_typeof(), ::g::Uno::Type_typeof());
    return type;
}

// public static Uno.Collections.Dictionary<Outracks.Simulator.Bytecode.TypeName, Uno.Type> MakeGenericTypeLookupTable() :18
void ReflectionHelpers__MakeGenericTypeLookupTable_fn(::g::Uno::Collections::Dictionary** __retval)
{
    *__retval = ReflectionHelpers::MakeGenericTypeLookupTable();
}

// public static Uno.Collections.Dictionary<Outracks.Simulator.Bytecode.TypeName, Uno.Type> MakeGenericTypeLookupTable() [static] :18
::g::Uno::Collections::Dictionary* ReflectionHelpers::MakeGenericTypeLookupTable()
{
    ::g::Uno::Collections::Dictionary* genericTypes = (::g::Uno::Collections::Dictionary*)::g::Uno::Collections::Dictionary::New1(::TYPES[23/*Uno.Collections.Dictionary<Outracks.Simulator.Bytecode.TypeName, Uno.Type>*/]);
    return genericTypes;
}
// }

// C:\ProgramData\Uno\Packages\Outracks.Simulator.Reflection.Uno\0.1.0\Native\$.uno(47)
// ------------------------------------------------------------------------------------

// public sealed extern class SimpleTypeMap :47
// {
SimpleTypeMap_type* SimpleTypeMap_typeof()
{
    static uSStrong<SimpleTypeMap_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 1;
    options.InterfaceCount = 1;
    options.ObjectSize = sizeof(SimpleTypeMap);
    options.TypeSize = sizeof(SimpleTypeMap_type);
    type = (SimpleTypeMap_type*)uClassType::New("Outracks.Simulator.Reflection.Native.SimpleTypeMap", options);
    type->fp_ctor_ = (void*)SimpleTypeMap__New1_fn;
    type->interface0.fp_ResolveType1 = (void(*)(uObject*, ::g::Outracks::Simulator::Bytecode::TypeName*, uType**))SimpleTypeMap__ResolveType1_fn;
    type->interface0.fp_ResolveType = (void(*)(uObject*, ::g::Outracks::Simulator::Bytecode::Parameter*, uType**))SimpleTypeMap__ResolveType_fn;
    ::STRINGS[13] = uString::Const("object");
    ::STRINGS[14] = uString::Const("string");
    ::STRINGS[15] = uString::Const("texture2D");
    ::STRINGS[16] = uString::Const("textureCube");
    ::STRINGS[17] = uString::Const("bool");
    ::STRINGS[18] = uString::Const("char");
    ::STRINGS[19] = uString::Const("byte");
    ::STRINGS[20] = uString::Const("byte2");
    ::STRINGS[21] = uString::Const("byte4");
    ::STRINGS[22] = uString::Const("sbyte");
    ::STRINGS[23] = uString::Const("sbyte2");
    ::STRINGS[24] = uString::Const("sbyte4");
    ::STRINGS[25] = uString::Const("short");
    ::STRINGS[26] = uString::Const("short2");
    ::STRINGS[27] = uString::Const("short4");
    ::STRINGS[28] = uString::Const("ushort");
    ::STRINGS[29] = uString::Const("ushort2");
    ::STRINGS[30] = uString::Const("ushort4");
    ::STRINGS[31] = uString::Const("int");
    ::STRINGS[32] = uString::Const("int2");
    ::STRINGS[33] = uString::Const("int3");
    ::STRINGS[34] = uString::Const("int4");
    ::STRINGS[35] = uString::Const("uint");
    ::STRINGS[36] = uString::Const("long");
    ::STRINGS[37] = uString::Const("ulong");
    ::STRINGS[38] = uString::Const("float");
    ::STRINGS[39] = uString::Const("float2");
    ::STRINGS[40] = uString::Const("float3");
    ::STRINGS[41] = uString::Const("float4");
    ::STRINGS[42] = uString::Const("float2x2");
    ::STRINGS[43] = uString::Const("float3x3");
    ::STRINGS[44] = uString::Const("float4x4");
    ::STRINGS[45] = uString::Const("double");
    ::STRINGS[46] = uString::Const("'");
    ::STRINGS[47] = uString::Const("' was not found");
    ::STRINGS[48] = uString::Const("' is not a closed type");
    ::TYPES[32] = ::g::Uno::Collections::Dictionary_typeof()->MakeType(::g::Uno::String_typeof(), ::g::Uno::Type_typeof());
    ::TYPES[3] = uObject_typeof();
    ::TYPES[33] = ::g::Uno::String_typeof();
    ::TYPES[34] = ::g::Uno::Graphics::Texture2D_typeof();
    ::TYPES[35] = ::g::Uno::Graphics::TextureCube_typeof();
    ::TYPES[24] = ::g::Uno::Bool_typeof();
    ::TYPES[36] = ::g::Uno::Char_typeof();
    ::TYPES[37] = ::g::Uno::Byte_typeof();
    ::TYPES[38] = ::g::Uno::Byte2_typeof();
    ::TYPES[39] = ::g::Uno::Byte4_typeof();
    ::TYPES[40] = ::g::Uno::SByte_typeof();
    ::TYPES[41] = ::g::Uno::SByte2_typeof();
    ::TYPES[42] = ::g::Uno::SByte4_typeof();
    ::TYPES[43] = ::g::Uno::Short_typeof();
    ::TYPES[44] = ::g::Uno::Short2_typeof();
    ::TYPES[45] = ::g::Uno::Short4_typeof();
    ::TYPES[46] = ::g::Uno::UShort_typeof();
    ::TYPES[47] = ::g::Uno::UShort2_typeof();
    ::TYPES[48] = ::g::Uno::UShort4_typeof();
    ::TYPES[49] = ::g::Uno::Int_typeof();
    ::TYPES[50] = ::g::Uno::Int2_typeof();
    ::TYPES[51] = ::g::Uno::Int3_typeof();
    ::TYPES[52] = ::g::Uno::Int4_typeof();
    ::TYPES[53] = ::g::Uno::UInt_typeof();
    ::TYPES[54] = ::g::Uno::Long_typeof();
    ::TYPES[55] = ::g::Uno::ULong_typeof();
    ::TYPES[56] = ::g::Uno::Float_typeof();
    ::TYPES[57] = ::g::Uno::Float2_typeof();
    ::TYPES[58] = ::g::Uno::Float3_typeof();
    ::TYPES[59] = ::g::Uno::Float4_typeof();
    ::TYPES[60] = ::g::Uno::Float2x2_typeof();
    ::TYPES[61] = ::g::Uno::Float3x3_typeof();
    ::TYPES[62] = ::g::Uno::Float4x4_typeof();
    ::TYPES[63] = ::g::Uno::Double_typeof();
    ::TYPES[31] = ::g::Outracks::Simulator::Bytecode::Parameter_typeof();
    ::TYPES[12] = ::g::Outracks::Simulator::Bytecode::TypeName_typeof();
    ::TYPES[7] = ::g::Uno::Collections::EnumerableExtensions_typeof()->MakeMethod(1, ::g::Uno::Type_typeof());
    ::TYPES[64] = ::g::Uno::Collections::EnumerableExtensions_typeof()->MakeMethod(2, ::g::Outracks::Simulator::Bytecode::TypeName_typeof(), ::g::Uno::Type_typeof());
    ::TYPES[65] = ::g::Uno::Collections::IEnumerable_typeof()->MakeType(::g::Outracks::Simulator::Bytecode::TypeName_typeof());
    ::TYPES[66] = ::g::Uno::Func1_typeof()->MakeType(::g::Outracks::Simulator::Bytecode::TypeName_typeof(), ::g::Uno::Type_typeof());
    ::TYPES[1] = ::g::Uno::Type_typeof();
    type->SetInterfaces(
        ::g::Outracks::Simulator::Reflection::Native::ITypeMap_typeof(), offsetof(SimpleTypeMap_type, interface0));
    type->SetFields(0,
        ::g::Uno::Collections::Dictionary_typeof()->MakeType(::g::Uno::String_typeof(), ::g::Uno::Type_typeof()), offsetof(::g::Outracks::Simulator::Reflection::Native::SimpleTypeMap, _builtins), 0);
    type->Reflection.SetFunctions(3,
        new uFunction(".ctor", NULL, (void*)SimpleTypeMap__New1_fn, 0, true, SimpleTypeMap_typeof(), 0),
        new uFunction("ResolveType", NULL, (void*)SimpleTypeMap__ResolveType_fn, 0, false, ::g::Uno::Type_typeof(), 1, ::g::Outracks::Simulator::Bytecode::Parameter_typeof()),
        new uFunction("ResolveType", NULL, (void*)SimpleTypeMap__ResolveType1_fn, 0, false, ::g::Uno::Type_typeof(), 1, ::g::Outracks::Simulator::Bytecode::TypeName_typeof()));
    return type;
}

// public generated SimpleTypeMap() :47
void SimpleTypeMap__ctor__fn(SimpleTypeMap* __this)
{
    __this->ctor_();
}

// public generated SimpleTypeMap New() :47
void SimpleTypeMap__New1_fn(SimpleTypeMap** __retval)
{
    *__retval = SimpleTypeMap::New1();
}

// public Uno.Type ResolveType(Outracks.Simulator.Bytecode.Parameter parameter) :87
void SimpleTypeMap__ResolveType_fn(SimpleTypeMap* __this, ::g::Outracks::Simulator::Bytecode::Parameter* parameter, uType** __retval)
{
    *__retval = __this->ResolveType(parameter);
}

// public Uno.Type ResolveType(Outracks.Simulator.Bytecode.TypeName typeName) :92
void SimpleTypeMap__ResolveType1_fn(SimpleTypeMap* __this, ::g::Outracks::Simulator::Bytecode::TypeName* typeName, uType** __retval)
{
    *__retval = __this->ResolveType1(typeName);
}

// public generated SimpleTypeMap() [instance] :47
void SimpleTypeMap::ctor_()
{
    ::g::Uno::Collections::Dictionary* collection1;
    _builtins = (collection1 = (::g::Uno::Collections::Dictionary*)::g::Uno::Collections::Dictionary::New1(::TYPES[32/*Uno.Collections.Dictionary<string, Uno.Type>*/]), ::g::Uno::Collections::Dictionary__Add_fn(uPtr(collection1), ::STRINGS[13/*"object"*/], ::TYPES[3/*object*/]), ::g::Uno::Collections::Dictionary__Add_fn(uPtr(collection1), ::STRINGS[14/*"string"*/], ::TYPES[33/*string*/]), ::g::Uno::Collections::Dictionary__Add_fn(uPtr(collection1), ::STRINGS[15/*"texture2D"*/], ::TYPES[34/*texture2D*/]), ::g::Uno::Collections::Dictionary__Add_fn(uPtr(collection1), ::STRINGS[16/*"textureCube"*/], ::TYPES[35/*textureCube*/]), ::g::Uno::Collections::Dictionary__Add_fn(uPtr(collection1), ::STRINGS[17/*"bool"*/], ::TYPES[24/*bool*/]), ::g::Uno::Collections::Dictionary__Add_fn(uPtr(collection1), ::STRINGS[18/*"char"*/], ::TYPES[36/*char*/]), ::g::Uno::Collections::Dictionary__Add_fn(uPtr(collection1), ::STRINGS[19/*"byte"*/], ::TYPES[37/*byte*/]), ::g::Uno::Collections::Dictionary__Add_fn(uPtr(collection1), ::STRINGS[20/*"byte2"*/], ::TYPES[38/*byte2*/]), ::g::Uno::Collections::Dictionary__Add_fn(uPtr(collection1), ::STRINGS[21/*"byte4"*/], ::TYPES[39/*byte4*/]), ::g::Uno::Collections::Dictionary__Add_fn(uPtr(collection1), ::STRINGS[22/*"sbyte"*/], ::TYPES[40/*sbyte*/]), ::g::Uno::Collections::Dictionary__Add_fn(uPtr(collection1), ::STRINGS[23/*"sbyte2"*/], ::TYPES[41/*sbyte2*/]), ::g::Uno::Collections::Dictionary__Add_fn(uPtr(collection1), ::STRINGS[24/*"sbyte4"*/], ::TYPES[42/*sbyte4*/]), ::g::Uno::Collections::Dictionary__Add_fn(uPtr(collection1), ::STRINGS[25/*"short"*/], ::TYPES[43/*short*/]), ::g::Uno::Collections::Dictionary__Add_fn(uPtr(collection1), ::STRINGS[26/*"short2"*/], ::TYPES[44/*short2*/]), ::g::Uno::Collections::Dictionary__Add_fn(uPtr(collection1), ::STRINGS[27/*"short4"*/], ::TYPES[45/*short4*/]), ::g::Uno::Collections::Dictionary__Add_fn(uPtr(collection1), ::STRINGS[28/*"ushort"*/], ::TYPES[46/*ushort*/]), ::g::Uno::Collections::Dictionary__Add_fn(uPtr(collection1), ::STRINGS[29/*"ushort2"*/], ::TYPES[47/*ushort2*/]), ::g::Uno::Collections::Dictionary__Add_fn(uPtr(collection1), ::STRINGS[30/*"ushort4"*/], ::TYPES[48/*ushort4*/]), ::g::Uno::Collections::Dictionary__Add_fn(uPtr(collection1), ::STRINGS[31/*"int"*/], ::TYPES[49/*int*/]), ::g::Uno::Collections::Dictionary__Add_fn(uPtr(collection1), ::STRINGS[32/*"int2"*/], ::TYPES[50/*int2*/]), ::g::Uno::Collections::Dictionary__Add_fn(uPtr(collection1), ::STRINGS[33/*"int3"*/], ::TYPES[51/*int3*/]), ::g::Uno::Collections::Dictionary__Add_fn(uPtr(collection1), ::STRINGS[34/*"int4"*/], ::TYPES[52/*int4*/]), ::g::Uno::Collections::Dictionary__Add_fn(uPtr(collection1), ::STRINGS[35/*"uint"*/], ::TYPES[53/*uint*/]), ::g::Uno::Collections::Dictionary__Add_fn(uPtr(collection1), ::STRINGS[36/*"long"*/], ::TYPES[54/*long*/]), ::g::Uno::Collections::Dictionary__Add_fn(uPtr(collection1), ::STRINGS[37/*"ulong"*/], ::TYPES[55/*ulong*/]), ::g::Uno::Collections::Dictionary__Add_fn(uPtr(collection1), ::STRINGS[38/*"float"*/], ::TYPES[56/*float*/]), ::g::Uno::Collections::Dictionary__Add_fn(uPtr(collection1), ::STRINGS[39/*"float2"*/], ::TYPES[57/*float2*/]), ::g::Uno::Collections::Dictionary__Add_fn(uPtr(collection1), ::STRINGS[40/*"float3"*/], ::TYPES[58/*float3*/]), ::g::Uno::Collections::Dictionary__Add_fn(uPtr(collection1), ::STRINGS[41/*"float4"*/], ::TYPES[59/*float4*/]), ::g::Uno::Collections::Dictionary__Add_fn(uPtr(collection1), ::STRINGS[42/*"float2x2"*/], ::TYPES[60/*float2x2*/]), ::g::Uno::Collections::Dictionary__Add_fn(uPtr(collection1), ::STRINGS[43/*"float3x3"*/], ::TYPES[61/*float3x3*/]), ::g::Uno::Collections::Dictionary__Add_fn(uPtr(collection1), ::STRINGS[44/*"float4x4"*/], ::TYPES[62/*float4x4*/]), ::g::Uno::Collections::Dictionary__Add_fn(uPtr(collection1), ::STRINGS[45/*"double"*/], ::TYPES[63/*double*/]), collection1);
}

// public Uno.Type ResolveType(Outracks.Simulator.Bytecode.Parameter parameter) [instance] :87
uType* SimpleTypeMap::ResolveType(::g::Outracks::Simulator::Bytecode::Parameter* parameter)
{
    return ResolveType1(uPtr(parameter)->Type);
}

// public Uno.Type ResolveType(Outracks.Simulator.Bytecode.TypeName typeName) [instance] :92
uType* SimpleTypeMap::ResolveType1(::g::Outracks::Simulator::Bytecode::TypeName* typeName)
{
    bool ret3;
    uType* t = ::g::Uno::Type::GetType1(uPtr(uPtr(typeName)->WithGenericSuffix())->FullName());

    if (::g::Uno::Type::op_Equality(t, NULL) && !(::g::Uno::Collections::Dictionary__TryGetValue_fn(uPtr(_builtins), typeName->FullName(), (void**)(&t), &ret3), ret3))
        U_THROW(::g::Uno::InvalidOperationException::New5(::g::Uno::String::op_Addition2(::g::Uno::String::op_Addition1(::STRINGS[46/*"'"*/], typeName), ::STRINGS[47/*"' was not f...*/])));

    if (typeName->IsParameterizedGenericType())
        t = ::g::Uno::Type::MakeGenericType(uPtr(t), (uArray*)::g::Uno::Collections::EnumerableExtensions::ToArray(::TYPES[7/*Uno.Collections.EnumerableExtensions.ToArray<Uno.Type>*/], (uObject*)::g::Uno::Collections::EnumerableExtensions::Select(::TYPES[64/*Uno.Collections.EnumerableExtensions.Select<Outracks.Simulator.Bytecode.TypeName, Uno.Type>*/], (uObject*)typeName->GenericArguments, uDelegate::New(::TYPES[66/*Uno.Func<Outracks.Simulator.Bytecode.TypeName, Uno.Type>*/], (void*)SimpleTypeMap__ResolveType1_fn, this))));

    if (::g::Uno::Type::ContainsGenericParameters(t))
        U_THROW(::g::Uno::InvalidOperationException::New5(::g::Uno::String::op_Addition2(::g::Uno::String::op_Addition1(::STRINGS[46/*"'"*/], typeName), ::STRINGS[48/*"' is not a ...*/])));

    return t;
}

// public generated SimpleTypeMap New() [static] :47
SimpleTypeMap* SimpleTypeMap::New1()
{
    SimpleTypeMap* obj2 = (SimpleTypeMap*)uNew(SimpleTypeMap_typeof());
    obj2->ctor_();
    return obj2;
}
// }

// C:\ProgramData\Uno\Packages\Outracks.Simulator.Reflection.Uno\0.1.0\Native\$.uno(287)
// -------------------------------------------------------------------------------------

// internal static extern class TryInvokeExtension :287
// {
uClassType* TryInvokeExtension_typeof()
{
    static uSStrong<uClassType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.TypeSize = sizeof(uClassType);
    type = uClassType::New("Outracks.Simulator.Reflection.Native.TryInvokeExtension", options);
    ::TYPES[67] = ::g::Uno::Collections::List_typeof()->MakeType(::g::Uno::Reflection::IFunction_typeof());
    ::TYPES[1] = ::g::Uno::Type_typeof();
    ::TYPES[27] = ::g::Uno::Reflection::CppFunction_typeof()->Array();
    ::TYPES[28] = ::g::Uno::Reflection::CppFunction_typeof();
    ::TYPES[4] = ::g::Outracks::Simulator::Bytecode::TypeMemberName_typeof();
    ::TYPES[68] = ::g::Uno::Reflection::IFunction_typeof();
    ::TYPES[2] = ::g::Outracks::Simulator::Reflection::Native::IEvent_typeof();
    ::TYPES[26] = ::g::Uno::Reflection::CppField_typeof();
    ::TYPES[69] = ::g::Uno::Reflection::IField_typeof();
    ::TYPES[0] = ::g::Uno::Type_typeof()->Array();
    ::TYPES[24] = ::g::Uno::Bool_typeof();
    ::TYPES[11] = ::g::Outracks::Simulator::Reflection::Native::IProperty_typeof();
    ::TYPES[5] = uObject_typeof()->Array();
    return type;
}

// public static Uno.Reflection.IFunction FindUnambiguousMethod(Uno.Type type, Outracks.Simulator.Bytecode.TypeMemberName methodName, object[] arguments) :289
void TryInvokeExtension__FindUnambiguousMethod_fn(uType* type, ::g::Outracks::Simulator::Bytecode::TypeMemberName* methodName, uArray* arguments, uObject** __retval)
{
    *__retval = TryInvokeExtension::FindUnambiguousMethod(type, methodName, arguments);
}

// public static Outracks.Simulator.Reflection.Native.IEvent GetEvent(Uno.Type type, Outracks.Simulator.Bytecode.TypeMemberName name, Uno.Type propertyType) :390
void TryInvokeExtension__GetEvent_fn(uType* type, ::g::Outracks::Simulator::Bytecode::TypeMemberName* name, uType* propertyType, uObject** __retval)
{
    *__retval = TryInvokeExtension::GetEvent(type, name, propertyType);
}

// public static Uno.Reflection.IField GetField(Uno.Type type, Outracks.Simulator.Bytecode.TypeMemberName name) :382
void TryInvokeExtension__GetField_fn(uType* type, ::g::Outracks::Simulator::Bytecode::TypeMemberName* name, uObject** __retval)
{
    *__retval = TryInvokeExtension::GetField(type, name);
}

// public static Uno.Reflection.IFunction GetMethod(Uno.Type type, Outracks.Simulator.Bytecode.TypeMemberName name, Uno.Type[] parameterTypes) :344
void TryInvokeExtension__GetMethod_fn(uType* type, ::g::Outracks::Simulator::Bytecode::TypeMemberName* name, uArray* parameterTypes, uObject** __retval)
{
    *__retval = TryInvokeExtension::GetMethod(type, name, parameterTypes);
}

// public static Uno.Reflection.CppFunction[] GetMethods(Uno.Type type) :372
void TryInvokeExtension__GetMethods_fn(uType* type, uArray** __retval)
{
    *__retval = TryInvokeExtension::GetMethods(type);
}

// public static Outracks.Simulator.Reflection.Native.IProperty GetProperty(Uno.Type type, Outracks.Simulator.Bytecode.TypeMemberName name, Uno.Type propertyType) :377
void TryInvokeExtension__GetProperty_fn(uType* type, ::g::Outracks::Simulator::Bytecode::TypeMemberName* name, uType* propertyType, uObject** __retval)
{
    *__retval = TryInvokeExtension::GetProperty(type, name, propertyType);
}

// public static bool IsInstanceOfType(Uno.Type type, object obj) :395
void TryInvokeExtension__IsInstanceOfType_fn(uType* type, uObject* obj, bool* __retval)
{
    *__retval = TryInvokeExtension::IsInstanceOfType(type, obj);
}

// public static bool ParametersMatch(Uno.Reflection.IFunction m, object[] arguments) :317
void TryInvokeExtension__ParametersMatch_fn(uObject* m, uArray* arguments, bool* __retval)
{
    *__retval = TryInvokeExtension::ParametersMatch(m, arguments);
}

// public static object TryInvoke(Uno.Reflection.IFunction mi, object obj, object[] value) :400
void TryInvokeExtension__TryInvoke_fn(uObject* mi, uObject* obj, uArray* value, uObject** __retval)
{
    *__retval = TryInvokeExtension::TryInvoke(mi, obj, value);
}

// public static Uno.Reflection.IFunction FindUnambiguousMethod(Uno.Type type, Outracks.Simulator.Bytecode.TypeMemberName methodName, object[] arguments) [static] :289
uObject* TryInvokeExtension::FindUnambiguousMethod(uType* type, ::g::Outracks::Simulator::Bytecode::TypeMemberName* methodName, uArray* arguments)
{
    uArray* array1;
    int index2;
    int length3;
    uObject* ret7;
    ::g::Uno::Collections::List* methods = (::g::Uno::Collections::List*)::g::Uno::Collections::List::New1(::TYPES[67/*Uno.Collections.List<Uno.Reflection.IFunction>*/]);

    for (uType* t = type; ::g::Uno::Type::op_Inequality(t, NULL); t = ::g::Uno::Type::BaseType(uPtr(t)))
    {
        for (array1 = TryInvokeExtension::GetMethods(t), index2 = 0, length3 = uPtr(array1)->Length(); index2 < length3; ++index2)
        {
            uFunction* m = uPtr(array1)->Item<uFunction*>(index2);

            if (::g::Uno::String::op_Equality(::g::Uno::Reflection::CppFunction::Name(m), uPtr(methodName)->Name) && TryInvokeExtension::ParametersMatch(uBox(::TYPES[28/*Uno.Reflection.CppFunction*/], m), arguments))
                ::g::Uno::Collections::List__Add_fn(uPtr(methods), uBox(::TYPES[28/*Uno.Reflection.CppFunction*/], m));

            if (methods->Count() >= 2)
                break;
        }

        if (uPtr(methods)->Count() > 0)
            break;
    }

    if (methods->Count() == 0)
        U_THROW(::g::Outracks::Simulator::Runtime::MemberNotFound::New4(::g::Outracks::Simulator::Bytecode::TypeName::Parse(::g::Uno::Type::FullName(uPtr(type))), methodName));

    if (methods->Count() > 1)
        U_THROW(::g::Outracks::Simulator::Runtime::UnambiguousMethodNotFound::New4(::g::Outracks::Simulator::Bytecode::TypeName::Parse(::g::Uno::Type::FullName(uPtr(type))), methodName));

    return (::g::Uno::Collections::List__get_Item_fn(methods, uCRef<int>(0), &ret7), ret7);
}

// public static Outracks.Simulator.Reflection.Native.IEvent GetEvent(Uno.Type type, Outracks.Simulator.Bytecode.TypeMemberName name, Uno.Type propertyType) [static] :390
uObject* TryInvokeExtension::GetEvent(uType* type, ::g::Outracks::Simulator::Bytecode::TypeMemberName* name, uType* propertyType)
{
    return (uObject*)::g::Outracks::Simulator::Reflection::Native::CppEvent::New1(type, propertyType, uPtr(name)->Name);
}

// public static Uno.Reflection.IField GetField(Uno.Type type, Outracks.Simulator.Bytecode.TypeMemberName name) [static] :382
uObject* TryInvokeExtension::GetField(uType* type, ::g::Outracks::Simulator::Bytecode::TypeMemberName* name)
{
    if (::g::Uno::Type::op_Equality(type, NULL))
        return NULL;

    uField* f = ::g::Uno::Reflection::CppReflection::FindField(type, uPtr(name)->Name);
    return ::g::Uno::Reflection::CppField::IsNull(f) ? (uObject*)TryInvokeExtension::GetField(::g::Uno::Type::BaseType(uPtr(type)), name) : uBox(::TYPES[26/*Uno.Reflection.CppField*/], f);
}

// public static Uno.Reflection.IFunction GetMethod(Uno.Type type, Outracks.Simulator.Bytecode.TypeMemberName name, Uno.Type[] parameterTypes) [static] :344
uObject* TryInvokeExtension::GetMethod(uType* type, ::g::Outracks::Simulator::Bytecode::TypeMemberName* name, uArray* parameterTypes)
{
    uArray* array4;
    int index5;
    int length6;

    for (uType* t = type; ::g::Uno::Type::op_Inequality(t, NULL); t = ::g::Uno::Type::BaseType(uPtr(t)))

        for (array4 = TryInvokeExtension::GetMethods(t), index5 = 0, length6 = uPtr(array4)->Length(); index5 < length6; ++index5)
        {
            uFunction* f = uPtr(array4)->Item<uFunction*>(index5);

            if (::g::Uno::String::op_Inequality(::g::Uno::Reflection::CppFunction::Name(f), uPtr(name)->Name) || (uPtr(::g::Uno::Reflection::CppFunction::ParameterTypes(f))->Length() != uPtr(parameterTypes)->Length()))
                continue;

            bool found = true;

            for (int i = 0; i < uPtr(parameterTypes)->Length(); i++)
                if (::g::Uno::Type::op_Inequality(uPtr(parameterTypes)->Strong<uType*>(i), NULL) && !::g::Uno::Type::IsSubclassOf(uPtr(uPtr(parameterTypes)->Strong<uType*>(i)), uPtr(::g::Uno::Reflection::CppFunction::ParameterTypes(f))->Strong<uType*>(i)))
                {
                    found = false;
                    break;
                }

            if (found)
                return uBox(::TYPES[28/*Uno.Reflection.CppFunction*/], f);
        }

    return NULL;
}

// public static Uno.Reflection.CppFunction[] GetMethods(Uno.Type type) [static] :372
uArray* TryInvokeExtension::GetMethods(uType* type)
{
    return ::g::Uno::Reflection::CppReflection::GetFunctions(type);
}

// public static Outracks.Simulator.Reflection.Native.IProperty GetProperty(Uno.Type type, Outracks.Simulator.Bytecode.TypeMemberName name, Uno.Type propertyType) [static] :377
uObject* TryInvokeExtension::GetProperty(uType* type, ::g::Outracks::Simulator::Bytecode::TypeMemberName* name, uType* propertyType)
{
    return (uObject*)::g::Outracks::Simulator::Reflection::Native::CppProperty::New1(type, propertyType, uPtr(name)->Name);
}

// public static bool IsInstanceOfType(Uno.Type type, object obj) [static] :395
bool TryInvokeExtension::IsInstanceOfType(uType* type, uObject* obj)
{
    return ::g::Uno::Type::IsSubclassOf(uPtr(::g::Uno::Object::GetType(uPtr(obj))), type);
}

// public static bool ParametersMatch(Uno.Reflection.IFunction m, object[] arguments) [static] :317
bool TryInvokeExtension::ParametersMatch(uObject* m, uArray* arguments)
{
    uArray* prms = ::g::Uno::Reflection::IFunction::ParameterTypes(uInterface(uPtr(m), ::TYPES[68/*Uno.Reflection.IFunction*/]));

    if (uPtr(prms)->Length() != uPtr(arguments)->Length())
        return false;

    for (int i = 0; i < uPtr(prms)->Length(); i++)
    {
        uType* param = uPtr(prms)->Strong<uType*>(i);
        uObject* arg = uPtr(arguments)->Strong<uObject*>(i);

        if (arg == NULL)
        {
            if (::g::Uno::Type::IsValueType(uPtr(param)))
                return false;
        }
        else
        {
            if (!TryInvokeExtension::IsInstanceOfType(param, arg))
                return false;
        }
    }

    return true;
}

// public static object TryInvoke(Uno.Reflection.IFunction mi, object obj, object[] value) [static] :400
uObject* TryInvokeExtension::TryInvoke(uObject* mi, uObject* obj, uArray* value)
{
    return ::g::Uno::Reflection::IFunction::Invoke(uInterface(uPtr(mi), ::TYPES[68/*Uno.Reflection.IFunction*/]), obj, value);
}
// }

}}}}} // ::g::Outracks::Simulator::Reflection::Native
