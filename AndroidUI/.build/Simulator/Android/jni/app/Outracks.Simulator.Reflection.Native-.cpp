#include <app/Outracks.Simulator.Bytecode.Parameter.h>
#include <app/Outracks.Simulator.Bytecode.Signature.h>
#include <app/Outracks.Simulator.Bytecode.TypeMemberName.h>
#include <app/Outracks.Simulator.Bytecode.TypeName.h>
#include <app/Outracks.Simulator.ImmutableList__Outracks_Simulator_Bytecode_Parameter.h>
#include <app/Outracks.Simulator.Reflection.Native.NativeReflection.h>
#include <app/Outracks.Simulator.Reflection.Native.ReflectionCache.h>
#include <app/Outracks.Simulator.Reflection.Native.ReflectionExtensions.h>
#include <app/Outracks.Simulator.Reflection.Native.ReflectionHelpers.h>
#include <app/Uno.Bool.h>
#include <app/Uno.Collections.Dictionary__Outracks_Simulator_Bytecode_TypeNam-95c49e9b.h>
#include <app/Uno.Collections.Dictionary__Uno_Type__Uno_Reflection_CppField__.h>
#include <app/Uno.Collections.Dictionary__Uno_Type__Uno_Reflection_CppFunction__.h>
#include <app/Uno.Collections.IEnumerable__Uno_Reflection_CppField.h>
#include <app/Uno.Collections.IEnumerable__Uno_Reflection_CppFunction.h>
#include <app/Uno.Collections.List__Uno_Collections_Dictionary_Outracks_Simul-c14837e5.h>
#include <app/Uno.Collections.List__Uno_Reflection_CppField.h>
#include <app/Uno.Collections.List__Uno_Reflection_CppFunction.h>
#include <app/Uno.Collections.List1_Enumerator__Uno_Collections_Dictionary_Ou-5084e8c5.h>
#include <app/Uno.Delegate.h>
#include <app/Uno.Enum.h>
#include <app/Uno.Exception.h>
#include <app/Uno.Int.h>
#include <app/Uno.Object.h>
#include <app/Uno.Reflection.CppField.h>
#include <app/Uno.Reflection.CppFunction.h>
#include <app/Uno.Reflection.CppReflection.h>
#include <app/Uno.Runtime.Implementation.Internal.ArrayEnumerable__Uno_Reflec-9fc9b423.h>
#include <app/Uno.Runtime.Implementation.Internal.ArrayEnumerable__Uno_Reflec-a5c1c5e8.h>
#include <app/Uno.String.h>
#include <app/Uno.Text.StringBuilder.h>
#include <app/Uno.Type.h>

namespace app {
namespace Outracks {
namespace Simulator {
namespace Reflection {
namespace Native {

// This file was generated based on 'C:\ProgramData\Uno\Packages\Outracks.Simulator.Reflection.Uno\0.1.0\Native\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

NativeReflection__uType* NativeReflection__typeof()
{
    static ::uStaticStrong<NativeReflection__uType*> type;
    if (type != NULL) return type;

    type = (NativeReflection__uType*)::uAllocClassType(sizeof(NativeReflection__uType), "Outracks.Simulator.Reflection.Native.NativeReflection", false, 1, 0, 0);

    type->__interface_0.__fp_CallDynamic = (::uObject*(*)(void*, ::uObject*, ::app::Outracks::Simulator::Bytecode::TypeMemberName*, ::uArray*))NativeReflection__Outracks_Simulator_Runtime_IReflection_CallDynamic;
    type->__interface_0.__fp_CallStatic = (::uObject*(*)(void*, ::app::Outracks::Simulator::Bytecode::TypeName*, ::app::Outracks::Simulator::Bytecode::TypeMemberName*, ::uArray*))NativeReflection__Outracks_Simulator_Runtime_IReflection_CallStatic;
    type->__interface_0.__fp_SetPropertyValue = (void(*)(void*, ::uObject*, ::app::Outracks::Simulator::Bytecode::TypeMemberName*, ::uObject*))NativeReflection__Outracks_Simulator_Runtime_IReflection_SetPropertyValue;
    type->__interface_0.__fp_GetPropertyValue = (::uObject*(*)(void*, ::uObject*, ::app::Outracks::Simulator::Bytecode::TypeMemberName*))NativeReflection__Outracks_Simulator_Runtime_IReflection_GetPropertyValue;
    type->__interface_0.__fp_GetStaticPropertyOrFieldValue = (::uObject*(*)(void*, ::app::Outracks::Simulator::Bytecode::TypeName*, ::app::Outracks::Simulator::Bytecode::TypeMemberName*))NativeReflection__Outracks_Simulator_Runtime_IReflection_GetStaticPropertyOrFieldValue;
    type->__interface_0.__fp_CreateDelegate = (::uObject*(*)(void*, ::app::Outracks::Simulator::Bytecode::TypeName*, ::uObject*, ::app::Outracks::Simulator::Bytecode::TypeMemberName*, ::app::Outracks::Simulator::Bytecode::Signature*))NativeReflection__Outracks_Simulator_Runtime_IReflection_CreateDelegate;
    type->__interface_0.__fp_AddEventHandler = (void(*)(void*, ::uObject*, ::app::Outracks::Simulator::Bytecode::TypeMemberName*, ::uObject*))NativeReflection__Outracks_Simulator_Runtime_IReflection_AddEventHandler;
    type->__interface_0.__fp_RemoveEventHandler = (void(*)(void*, ::uObject*, ::app::Outracks::Simulator::Bytecode::TypeMemberName*, ::uObject*))NativeReflection__Outracks_Simulator_Runtime_IReflection_RemoveEventHandler;
    type->__interface_0.__fp_Instantiate = (::uObject*(*)(void*, ::app::Outracks::Simulator::Bytecode::TypeName*, ::uArray*))NativeReflection__Outracks_Simulator_Runtime_IReflection_Instantiate;
    type->__interface_0.__fp_IsSubtype = (bool(*)(void*, ::uObject*, ::app::Outracks::Simulator::Bytecode::TypeName*))NativeReflection__Outracks_Simulator_Runtime_IReflection_IsSubtype;
    type->__interface_0.__fp_IsType = (bool(*)(void*, ::uObject*, ::app::Outracks::Simulator::Bytecode::TypeName*))NativeReflection__Outracks_Simulator_Runtime_IReflection_IsType;
    type->__interface_0.__fp_GetEnumValue = (::uObject*(*)(void*, ::app::Outracks::Simulator::Bytecode::TypeName*, ::app::Outracks::Simulator::Bytecode::TypeMemberName*))NativeReflection__Outracks_Simulator_Runtime_IReflection_GetEnumValue;

    type->SetInterfaces(
        ::app::Outracks::Simulator::Runtime::IReflection__typeof(), offsetof(NativeReflection__uType, __interface_0));

    type->SetFunctions(16,
        ::uNewFunction("GetObjectTypesString", NativeReflection__GetObjectTypesString, 0, false, ::app::Uno::String__typeof(), ::uGetArrayType(::uObject__typeof())),
        ::uNewFunction("GetStaticFieldValue", NativeReflection__GetStaticFieldValue, 0, false, ::uObject__typeof(), ::uType__typeof(), ::app::Outracks::Simulator::Bytecode::TypeMemberName__typeof()),
        ::uNewFunction("GetStaticPropertyValue", NativeReflection__GetStaticPropertyValue, 0, false, ::uObject__typeof(), ::uType__typeof(), ::app::Outracks::Simulator::Bytecode::TypeMemberName__typeof()),
        ::uNewFunction(".ctor", NativeReflection__New_1, 0, true, NativeReflection__typeof(), ::app::Uno::Collections::Dictionary__Outracks_Simulator_Bytecode_TypeName__Uno_Type__typeof()),
        ::uNewFunctionVoid("Outracks.Simulator.Runtime.IReflection.AddEventHandler", NativeReflection__Outracks_Simulator_Runtime_IReflection_AddEventHandler, 0, false, ::uObject__typeof(), ::app::Outracks::Simulator::Bytecode::TypeMemberName__typeof(), ::uObject__typeof()),
        ::uNewFunction("Outracks.Simulator.Runtime.IReflection.CallDynamic", NativeReflection__Outracks_Simulator_Runtime_IReflection_CallDynamic, 0, false, ::uObject__typeof(), ::uObject__typeof(), ::app::Outracks::Simulator::Bytecode::TypeMemberName__typeof(), ::uGetArrayType(::uObject__typeof())),
        ::uNewFunction("Outracks.Simulator.Runtime.IReflection.CallStatic", NativeReflection__Outracks_Simulator_Runtime_IReflection_CallStatic, 0, false, ::uObject__typeof(), ::app::Outracks::Simulator::Bytecode::TypeName__typeof(), ::app::Outracks::Simulator::Bytecode::TypeMemberName__typeof(), ::uGetArrayType(::uObject__typeof())),
        ::uNewFunction("Outracks.Simulator.Runtime.IReflection.CreateDelegate", NativeReflection__Outracks_Simulator_Runtime_IReflection_CreateDelegate, 0, false, ::uObject__typeof(), ::app::Outracks::Simulator::Bytecode::TypeName__typeof(), ::uObject__typeof(), ::app::Outracks::Simulator::Bytecode::TypeMemberName__typeof(), ::app::Outracks::Simulator::Bytecode::Signature__typeof()),
        ::uNewFunction("Outracks.Simulator.Runtime.IReflection.GetEnumValue", NativeReflection__Outracks_Simulator_Runtime_IReflection_GetEnumValue, 0, false, ::uObject__typeof(), ::app::Outracks::Simulator::Bytecode::TypeName__typeof(), ::app::Outracks::Simulator::Bytecode::TypeMemberName__typeof()),
        ::uNewFunction("Outracks.Simulator.Runtime.IReflection.GetPropertyValue", NativeReflection__Outracks_Simulator_Runtime_IReflection_GetPropertyValue, 0, false, ::uObject__typeof(), ::uObject__typeof(), ::app::Outracks::Simulator::Bytecode::TypeMemberName__typeof()),
        ::uNewFunction("Outracks.Simulator.Runtime.IReflection.GetStaticPropertyOrFieldValue", NativeReflection__Outracks_Simulator_Runtime_IReflection_GetStaticPropertyOrFieldValue, 0, false, ::uObject__typeof(), ::app::Outracks::Simulator::Bytecode::TypeName__typeof(), ::app::Outracks::Simulator::Bytecode::TypeMemberName__typeof()),
        ::uNewFunction("Outracks.Simulator.Runtime.IReflection.Instantiate", NativeReflection__Outracks_Simulator_Runtime_IReflection_Instantiate, 0, false, ::uObject__typeof(), ::app::Outracks::Simulator::Bytecode::TypeName__typeof(), ::uGetArrayType(::uObject__typeof())),
        ::uNewFunction("Outracks.Simulator.Runtime.IReflection.IsSubtype", NativeReflection__Outracks_Simulator_Runtime_IReflection_IsSubtype, 0, false, ::app::Uno::Bool__typeof(), ::uObject__typeof(), ::app::Outracks::Simulator::Bytecode::TypeName__typeof()),
        ::uNewFunction("Outracks.Simulator.Runtime.IReflection.IsType", NativeReflection__Outracks_Simulator_Runtime_IReflection_IsType, 0, false, ::app::Uno::Bool__typeof(), ::uObject__typeof(), ::app::Outracks::Simulator::Bytecode::TypeName__typeof()),
        ::uNewFunctionVoid("Outracks.Simulator.Runtime.IReflection.RemoveEventHandler", NativeReflection__Outracks_Simulator_Runtime_IReflection_RemoveEventHandler, 0, false, ::uObject__typeof(), ::app::Outracks::Simulator::Bytecode::TypeMemberName__typeof(), ::uObject__typeof()),
        ::uNewFunctionVoid("Outracks.Simulator.Runtime.IReflection.SetPropertyValue", NativeReflection__Outracks_Simulator_Runtime_IReflection_SetPropertyValue, 0, false, ::uObject__typeof(), ::app::Outracks::Simulator::Bytecode::TypeMemberName__typeof(), ::uObject__typeof()));

    ::uRegisterType(type);
    return type;
}

void NativeReflection___ObjInit(NativeReflection* __this, ::app::Uno::Collections::Dictionary__Outracks_Simulator_Bytecode_TypeName__Uno_Type* typeDict)
{
    ::app::Outracks::Simulator::Reflection::Native::ReflectionCache__AddToTypeCache(NULL, ::app::Outracks::Simulator::Reflection::Native::ReflectionHelpers__MakeGenericTypeLookupTable(NULL));

    if (typeDict != NULL)
    {
        ::app::Outracks::Simulator::Reflection::Native::ReflectionCache__AddToTypeCache(NULL, typeDict);
    }
}

::uString* NativeReflection__GetObjectTypesString(NativeReflection* __this, ::uArray* arguments)
{
    if ((arguments == NULL) || (::uPtr< ::uArray*>(arguments)->Length() == 0))
    {
        return ::uGetConstString("()");
    }

    ::app::Uno::Text::StringBuilder* builder = ::app::Uno::Text::StringBuilder__New_1(NULL);
    ::uPtr< ::app::Uno::Text::StringBuilder*>(builder)->Append_1(::uGetConstString("("));

    for (int i = 0; i < ::uPtr< ::uArray*>(arguments)->Length(); i++)
    {
        if (::uPtr< ::uArray*>(arguments)->Item< ::uObject*>(i) == NULL)
        {
            ::uPtr< ::app::Uno::Text::StringBuilder*>(builder)->Append_1(::uGetConstString("null"));
        }
        else
        {
            builder->Append_1(::uPtr< ::uType*>(::app::Uno::Object::GetType(::uPtr< ::uObject*>(::uPtr< ::uArray*>(arguments)->Item< ::uObject*>(i))))->ToString());
        }

        if (i != (arguments->Length() - 1))
        {
            builder->Append_1(::uGetConstString(", "));
        }
    }

    builder->Append_1(::uGetConstString(")"));
    return builder->ToString();
}

::uObject* NativeReflection__GetStaticFieldValue(NativeReflection* __this, ::uType* type, ::app::Outracks::Simulator::Bytecode::TypeMemberName* fieldName)
{
    ::uField* field = ::app::Outracks::Simulator::Reflection::Native::ReflectionExtensions__FindField(NULL, type, fieldName);

    if (!::app::Uno::Reflection::CppField::IsNull(field) && ::app::Uno::Reflection::CppField::IsStatic(field))
    {
        return ::app::Uno::Reflection::CppField::GetValue(field, NULL);
    }

    return NULL;
}

::uObject* NativeReflection__GetStaticPropertyValue(NativeReflection* __this, ::uType* type, ::app::Outracks::Simulator::Bytecode::TypeMemberName* propName)
{
    ::uFunction* propGetter = ::app::Outracks::Simulator::Reflection::Native::ReflectionExtensions__FindPropertyGetter(NULL, type, propName);

    if (!::app::Uno::Reflection::CppFunction::IsNull(propGetter) && ::app::Uno::Reflection::CppFunction::IsStatic(propGetter))
    {
        return ::app::Uno::Reflection::CppFunction::Invoke(propGetter, NULL, ::uNewArray(::uObject__typeof(), 0));
    }

    return NULL;
}

NativeReflection* NativeReflection__New_1(::uStatic* __this, ::app::Uno::Collections::Dictionary__Outracks_Simulator_Bytecode_TypeName__Uno_Type* typeDict)
{
    NativeReflection* inst = (NativeReflection*)::uAllocObject(sizeof(NativeReflection), NativeReflection__typeof());
    inst->_ObjInit(typeDict);
    return inst;
}

void NativeReflection__Outracks_Simulator_Runtime_IReflection_AddEventHandler(NativeReflection* __this, ::uObject* instance, ::app::Outracks::Simulator::Bytecode::TypeMemberName* member, ::uObject* handlerDelegate)
{
    ::uArray* array_125;
    ::uFunction* addFunction = ::app::Outracks::Simulator::Reflection::Native::ReflectionExtensions__FindEventAddFunction(NULL, ::app::Uno::Object::GetType(::uPtr< ::uObject*>(instance)), member, handlerDelegate);

    if (::app::Uno::Reflection::CppFunction::IsNull(addFunction))
    {
        U_THROW(::app::Uno::Exception__New_2(NULL, ::app::Uno::String__op_Addition_2(NULL, ::app::Uno::String__op_Addition_2(NULL, ::app::Uno::String__op_Addition_1(NULL, ::app::Uno::String__op_Addition_2(NULL, ::app::Uno::String__op_Addition_2(NULL, ::uGetConstString("Could not find any matching events: "), ::uPtr< ::app::Outracks::Simulator::Bytecode::TypeMemberName*>(member)->Name), ::uGetConstString(" on ")), (::uObject*)::app::Uno::Object::GetType(instance)), ::uGetConstString(" for the delegate ")), ::app::Uno::Object::ToString(::uPtr< ::uObject*>(handlerDelegate)))));
    }

    ::app::Uno::Reflection::CppFunction::Invoke(addFunction, instance, (array_125 = ::uNewArray(::uObject__typeof(), 1), ::uPtr< ::uArray*>(array_125)->ItemStrong< ::uObject*>(0) = handlerDelegate, array_125));
}

::uObject* NativeReflection__Outracks_Simulator_Runtime_IReflection_CallDynamic(NativeReflection* __this, ::uObject* instance, ::app::Outracks::Simulator::Bytecode::TypeMemberName* methodName, ::uArray* arguments)
{
    ::uFunction* func = ::app::Outracks::Simulator::Reflection::Native::ReflectionExtensions__FindFunction(NULL, ::app::Uno::Object::GetType(::uPtr< ::uObject*>(instance)), methodName, ::app::Outracks::Simulator::Reflection::Native::ReflectionExtensions__GetTypes(NULL, arguments));

    if (::app::Uno::Reflection::CppFunction::IsNull(func))
    {
        U_THROW(::app::Uno::Exception__New_2(NULL, ::app::Uno::String__op_Addition_1(NULL, ::app::Uno::String__op_Addition_2(NULL, ::app::Uno::String__op_Addition_2(NULL, ::app::Uno::String__op_Addition_2(NULL, ::uGetConstString("Could not find any matching methods: "), ::uPtr< ::app::Outracks::Simulator::Bytecode::TypeMemberName*>(methodName)->Name), __this->GetObjectTypesString(arguments)), ::uGetConstString(" on ")), (::uObject*)::app::Uno::Object::GetType(instance))));
    }

    return ::app::Uno::Reflection::CppFunction::Invoke(func, instance, arguments);
}

::uObject* NativeReflection__Outracks_Simulator_Runtime_IReflection_CallStatic(NativeReflection* __this, ::app::Outracks::Simulator::Bytecode::TypeName* typeName, ::app::Outracks::Simulator::Bytecode::TypeMemberName* methodName, ::uArray* arguments)
{
    ::uFunction* func = ::app::Outracks::Simulator::Reflection::Native::ReflectionExtensions__FindFunction(NULL, ::app::Outracks::Simulator::Reflection::Native::ReflectionExtensions__FindType(NULL, typeName), methodName, ::app::Outracks::Simulator::Reflection::Native::ReflectionExtensions__GetTypes(NULL, arguments));

    if (::app::Uno::Reflection::CppFunction::IsNull(func))
    {
        U_THROW(::app::Uno::Exception__New_2(NULL, ::app::Uno::String__op_Addition_2(NULL, ::app::Uno::String__op_Addition_2(NULL, ::app::Uno::String__op_Addition_2(NULL, ::app::Uno::String__op_Addition_2(NULL, ::uGetConstString("Could not find any matching static methods: "), ::uPtr< ::app::Outracks::Simulator::Bytecode::TypeMemberName*>(methodName)->Name), __this->GetObjectTypesString(arguments)), ::uGetConstString(" on ")), ::uPtr< ::app::Outracks::Simulator::Bytecode::TypeName*>(typeName)->FullName())));
    }

    return ::app::Uno::Reflection::CppFunction::Invoke(func, NULL, arguments);
}

::uObject* NativeReflection__Outracks_Simulator_Runtime_IReflection_CreateDelegate(NativeReflection* __this, ::app::Outracks::Simulator::Bytecode::TypeName* delegateType, ::uObject* instance, ::app::Outracks::Simulator::Bytecode::TypeMemberName* methodName, ::app::Outracks::Simulator::Bytecode::Signature* methodSignature)
{
    ::uFunction* function = ::app::Outracks::Simulator::Reflection::Native::ReflectionExtensions__FindFunction(NULL, ::app::Uno::Object::GetType(::uPtr< ::uObject*>(instance)), methodName, ::app::Outracks::Simulator::Reflection::Native::ReflectionExtensions__GetParameterTypes(NULL, methodSignature));

    if (::app::Uno::Reflection::CppFunction::IsNull(function))
    {
        U_THROW(::app::Uno::Exception__New_2(NULL, ::app::Uno::String__op_Addition_1(NULL, ::app::Uno::String__op_Addition_2(NULL, ::app::Uno::String__op_Addition_2(NULL, ::app::Uno::String__op_Addition_2(NULL, ::uGetConstString("Could not find any matching functions: "), ::uPtr< ::app::Outracks::Simulator::Bytecode::TypeMemberName*>(methodName)->Name), ::uPtr< ::app::Outracks::Simulator::Bytecode::Signature*>(methodSignature)->ToString()), ::uGetConstString(" on ")), (::uObject*)::app::Uno::Object::GetType(instance))));
    }

    ::uType* delType = ::app::Outracks::Simulator::Reflection::Native::ReflectionExtensions__FindType(NULL, delegateType);
    ::uDelegate* delObj = ::app::Uno::Reflection::CppFunction::CreateDelegate(function, delType, instance);
    return (::uObject*)delObj;
}

::uObject* NativeReflection__Outracks_Simulator_Runtime_IReflection_GetEnumValue(NativeReflection* __this, ::app::Outracks::Simulator::Bytecode::TypeName* enumType, ::app::Outracks::Simulator::Bytecode::TypeMemberName* valueName)
{
    ::uArray* array_127;
    ::uArray* array_128;
    ::uType* type = ::app::Outracks::Simulator::Reflection::Native::ReflectionExtensions__FindType(NULL, enumType);
    ::uFunction* parseFunction = ::app::Outracks::Simulator::Reflection::Native::ReflectionExtensions__FindFunction(NULL, ::app::Uno::Enum__typeof(), ::app::Outracks::Simulator::Bytecode::TypeMemberName__New_1(NULL, ::uGetConstString("Parse")), (array_127 = ::uNewArray(::uType__typeof(), 2), ::uPtr< ::uArray*>(array_127)->ItemStrong< ::uType*>(0) = ::uType__typeof(), ::uPtr< ::uArray*>(array_127)->ItemStrong< ::uType*>(1) = ::app::Uno::String__typeof(), array_127));

    if (::app::Uno::Reflection::CppFunction::IsNull(parseFunction))
    {
        U_THROW(::app::Uno::Exception__New_2(NULL, ::uGetConstString("Faield to find enum parse function")));
    }

    return ::app::Uno::Reflection::CppFunction::Invoke(parseFunction, NULL, (array_128 = ::uNewArray(::uObject__typeof(), 2), ::uPtr< ::uArray*>(array_128)->ItemStrong< ::uObject*>(0) = (::uObject*)type, ::uPtr< ::uArray*>(array_128)->ItemStrong< ::uObject*>(1) = (::uObject*)::uPtr< ::app::Outracks::Simulator::Bytecode::TypeMemberName*>(valueName)->Name, array_128));
}

::uObject* NativeReflection__Outracks_Simulator_Runtime_IReflection_GetPropertyValue(NativeReflection* __this, ::uObject* instance, ::app::Outracks::Simulator::Bytecode::TypeMemberName* propertyName)
{
    ::uFunction* getter = ::app::Outracks::Simulator::Reflection::Native::ReflectionExtensions__FindPropertyGetter(NULL, ::app::Uno::Object::GetType(::uPtr< ::uObject*>(instance)), propertyName);

    if (::app::Uno::Reflection::CppFunction::IsNull(getter))
    {
        U_THROW(::app::Uno::Exception__New_2(NULL, ::app::Uno::String__op_Addition_1(NULL, ::app::Uno::String__op_Addition_2(NULL, ::app::Uno::String__op_Addition_2(NULL, ::uGetConstString("Could not find any matching properties: "), ::uPtr< ::app::Outracks::Simulator::Bytecode::TypeMemberName*>(propertyName)->Name), ::uGetConstString(" on ")), (::uObject*)::app::Uno::Object::GetType(instance))));
    }

    return ::app::Uno::Reflection::CppFunction::Invoke(getter, instance, ::uNewArray(::uObject__typeof(), 0));
}

::uObject* NativeReflection__Outracks_Simulator_Runtime_IReflection_GetStaticPropertyOrFieldValue(NativeReflection* __this, ::app::Outracks::Simulator::Bytecode::TypeName* typeName, ::app::Outracks::Simulator::Bytecode::TypeMemberName* memberName)
{
    ::uType* type = ::app::Outracks::Simulator::Reflection::Native::ReflectionExtensions__FindType(NULL, typeName);
    ::uObject* ind_124 = __this->GetStaticFieldValue(type, memberName);
    ::uObject* value = (ind_124 != NULL) ? ind_124 : __this->GetStaticPropertyValue(type, memberName);

    if (value == NULL)
    {
        U_THROW(::app::Uno::Exception__New_2(NULL, ::app::Uno::String__op_Addition_2(NULL, ::app::Uno::String__op_Addition_2(NULL, ::app::Uno::String__op_Addition_2(NULL, ::uGetConstString("Could not find any matching static fields or properties: "), ::uPtr< ::app::Outracks::Simulator::Bytecode::TypeMemberName*>(memberName)->Name), ::uGetConstString(" on ")), ::uPtr< ::app::Outracks::Simulator::Bytecode::TypeName*>(typeName)->FullName())));
    }

    return value;
}

::uObject* NativeReflection__Outracks_Simulator_Runtime_IReflection_Instantiate(NativeReflection* __this, ::app::Outracks::Simulator::Bytecode::TypeName* typeName, ::uArray* args)
{
    ::uFunction* ctor = ::app::Outracks::Simulator::Reflection::Native::ReflectionExtensions__FindConstructor(NULL, ::app::Outracks::Simulator::Reflection::Native::ReflectionExtensions__FindType(NULL, typeName), ::app::Outracks::Simulator::Reflection::Native::ReflectionExtensions__GetTypes(NULL, args));

    if (::app::Uno::Reflection::CppFunction::IsNull(ctor))
    {
        U_THROW(::app::Uno::Exception__New_2(NULL, ::app::Uno::String__op_Addition_2(NULL, ::app::Uno::String__op_Addition_2(NULL, ::app::Uno::String__op_Addition_2(NULL, ::uGetConstString("Failed to find any constructors for "), ::uPtr< ::app::Outracks::Simulator::Bytecode::TypeName*>(typeName)->FullName()), ::uGetConstString(" with ")), __this->GetObjectTypesString(args))));
    }

    return ::app::Uno::Reflection::CppFunction::Invoke(ctor, NULL, args);
}

bool NativeReflection__Outracks_Simulator_Runtime_IReflection_IsSubtype(NativeReflection* __this, ::uObject* obj, ::app::Outracks::Simulator::Bytecode::TypeName* typeName)
{
    return ::app::Outracks::Simulator::Reflection::Native::ReflectionExtensions__IsSubtype(NULL, ::app::Uno::Object::GetType(::uPtr< ::uObject*>(obj)), ::app::Outracks::Simulator::Reflection::Native::ReflectionExtensions__FindType(NULL, typeName));
}

bool NativeReflection__Outracks_Simulator_Runtime_IReflection_IsType(NativeReflection* __this, ::uObject* obj, ::app::Outracks::Simulator::Bytecode::TypeName* typeName)
{
    return ::app::Uno::Object::GetType(::uPtr< ::uObject*>(obj)) == ::app::Outracks::Simulator::Reflection::Native::ReflectionExtensions__FindType(NULL, typeName);
}

void NativeReflection__Outracks_Simulator_Runtime_IReflection_RemoveEventHandler(NativeReflection* __this, ::uObject* instance, ::app::Outracks::Simulator::Bytecode::TypeMemberName* member, ::uObject* handlerDelegate)
{
    ::uArray* array_126;
    ::uFunction* removeFunction = ::app::Outracks::Simulator::Reflection::Native::ReflectionExtensions__FindEventRemoveFunction(NULL, ::app::Uno::Object::GetType(::uPtr< ::uObject*>(instance)), member, handlerDelegate);

    if (::app::Uno::Reflection::CppFunction::IsNull(removeFunction))
    {
        U_THROW(::app::Uno::Exception__New_2(NULL, ::app::Uno::String__op_Addition_2(NULL, ::app::Uno::String__op_Addition_2(NULL, ::app::Uno::String__op_Addition_1(NULL, ::app::Uno::String__op_Addition_2(NULL, ::app::Uno::String__op_Addition_2(NULL, ::uGetConstString("Could not find any matching events: "), ::uPtr< ::app::Outracks::Simulator::Bytecode::TypeMemberName*>(member)->Name), ::uGetConstString(" on ")), (::uObject*)::app::Uno::Object::GetType(instance)), ::uGetConstString(" for the delegate ")), ::app::Uno::Object::ToString(::uPtr< ::uObject*>(handlerDelegate)))));
    }

    ::app::Uno::Reflection::CppFunction::Invoke(removeFunction, instance, (array_126 = ::uNewArray(::uObject__typeof(), 1), ::uPtr< ::uArray*>(array_126)->ItemStrong< ::uObject*>(0) = handlerDelegate, array_126));
}

void NativeReflection__Outracks_Simulator_Runtime_IReflection_SetPropertyValue(NativeReflection* __this, ::uObject* instance, ::app::Outracks::Simulator::Bytecode::TypeMemberName* propertyName, ::uObject* value)
{
    ::uArray* array_123;
    ::uFunction* setter = ::app::Outracks::Simulator::Reflection::Native::ReflectionExtensions__FindPropertySetter(NULL, ::app::Uno::Object::GetType(::uPtr< ::uObject*>(instance)), propertyName, ::app::Uno::Object::GetType(::uPtr< ::uObject*>(value)));

    if (::app::Uno::Reflection::CppFunction::IsNull(setter))
    {
        U_THROW(::app::Uno::Exception__New_2(NULL, ::app::Uno::String__op_Addition_1(NULL, ::app::Uno::String__op_Addition_2(NULL, ::app::Uno::String__op_Addition_1(NULL, ::app::Uno::String__op_Addition_2(NULL, ::app::Uno::String__op_Addition_2(NULL, ::uGetConstString("Could not find any matching properties: "), ::uPtr< ::app::Outracks::Simulator::Bytecode::TypeMemberName*>(propertyName)->Name), ::uGetConstString(" with type ")), (::uObject*)::app::Uno::Object::GetType(value)), ::uGetConstString(" on ")), (::uObject*)::app::Uno::Object::GetType(instance))));
    }

    ::app::Uno::Reflection::CppFunction::Invoke(setter, instance, (array_123 = ::uNewArray(::uObject__typeof(), 1), ::uPtr< ::uArray*>(array_123)->ItemStrong< ::uObject*>(0) = value, array_123));
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\Outracks.Simulator.Reflection.Uno\0.1.0\Native\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

::uStaticStrong< ::app::Uno::Collections::Dictionary__Uno_Type__Uno_Reflection_CppField__*> ReflectionCache___fieldCache;
::uStaticStrong< ::app::Uno::Collections::Dictionary__Uno_Type__Uno_Reflection_CppFunction__*> ReflectionCache___functionCache;
::uStaticStrong< ::app::Uno::Collections::List__Uno_Collections_Dictionary_Outracks_Simulator_Bytecode_TypeName_Uno_Type_*> ReflectionCache___typeCache;

ReflectionCache__uType* ReflectionCache__typeof()
{
    static ::uStaticStrong<ReflectionCache__uType*> type;
    if (type != NULL) return type;

    type = (ReflectionCache__uType*)::uAllocClassType(sizeof(ReflectionCache__uType), "Outracks.Simulator.Reflection.Native.ReflectionCache");

    type->SetFields(3,
        ::uNewField("_fieldCache", &ReflectionCache___fieldCache, 0, ::app::Uno::Collections::Dictionary__Uno_Type__Uno_Reflection_CppField____typeof()),
        ::uNewField("_functionCache", &ReflectionCache___functionCache, 0, ::app::Uno::Collections::Dictionary__Uno_Type__Uno_Reflection_CppFunction____typeof()),
        ::uNewField("_typeCache", &ReflectionCache___typeCache, 0, ::app::Uno::Collections::List__Uno_Collections_Dictionary_Outracks_Simulator_Bytecode_TypeName_Uno_Type___typeof()));

    type->SetFunctions(4,
        ::uNewFunctionVoid("AddToTypeCache", ReflectionCache__AddToTypeCache, 0, true, ::app::Uno::Collections::Dictionary__Outracks_Simulator_Bytecode_TypeName__Uno_Type__typeof()),
        ::uNewFunction("GetFields", ReflectionCache__GetFields, 0, true, ::uGetArrayType(::app::Uno::Reflection::CppField__typeof()), ::uType__typeof()),
        ::uNewFunction("GetFunctions", ReflectionCache__GetFunctions, 0, true, ::uGetArrayType(::app::Uno::Reflection::CppFunction__typeof()), ::uType__typeof()),
        ::uNewFunction("GetType", ReflectionCache__GetType, 0, true, ::uType__typeof(), ::app::Outracks::Simulator::Bytecode::TypeName__typeof()));

    ::uRegisterType(type);
    return type;
}

void ReflectionCache___TypeInit(::uStatic* __this)
{
    ReflectionCache___functionCache = ::app::Uno::Collections::Dictionary__Uno_Type__Uno_Reflection_CppFunction____New_1(NULL);
    ReflectionCache___fieldCache = ::app::Uno::Collections::Dictionary__Uno_Type__Uno_Reflection_CppField____New_1(NULL);
    ReflectionCache___typeCache = ::app::Uno::Collections::List__Uno_Collections_Dictionary_Outracks_Simulator_Bytecode_TypeName_Uno_Type___New_1(NULL);
}

void ReflectionCache__AddToTypeCache(::uStatic* __this, ::app::Uno::Collections::Dictionary__Outracks_Simulator_Bytecode_TypeName__Uno_Type* typeDictionary)
{
    ::uPtr< ::app::Uno::Collections::List__Uno_Collections_Dictionary_Outracks_Simulator_Bytecode_TypeName_Uno_Type_*>(ReflectionCache___typeCache)->Add(typeDictionary);
}

::uArray* ReflectionCache__GetFields(::uStatic* __this, ::uType* type)
{
    if (::uPtr< ::app::Uno::Collections::Dictionary__Uno_Type__Uno_Reflection_CppField__*>(ReflectionCache___fieldCache)->ContainsKey(type))
    {
        return ::uPtr< ::app::Uno::Collections::Dictionary__Uno_Type__Uno_Reflection_CppField__*>(ReflectionCache___fieldCache)->Item(type);
    }

    ::app::Uno::Collections::List__Uno_Reflection_CppField* fields = ::app::Uno::Collections::List__Uno_Reflection_CppField__New_1(NULL);
    ::uType* t = type;

    while (t != NULL)
    {
        ::uPtr< ::app::Uno::Collections::List__Uno_Reflection_CppField*>(fields)->AddRange((::uObject*)::app::Uno::Runtime::Implementation::Internal::ArrayEnumerable__Uno_Reflection_CppField__New_1(NULL, ::app::Uno::Reflection::CppReflection__GetFields(NULL, t)));
        t = ::app::Uno::Reflection::CppReflection__GetBaseType(NULL, t);
    }

    ::uArray* array = ::uPtr< ::app::Uno::Collections::List__Uno_Reflection_CppField*>(fields)->ToArray();
    ::uPtr< ::app::Uno::Collections::Dictionary__Uno_Type__Uno_Reflection_CppField__*>(ReflectionCache___fieldCache)->Add(type, array);
    return array;
}

::uArray* ReflectionCache__GetFunctions(::uStatic* __this, ::uType* type)
{
    if (::uPtr< ::app::Uno::Collections::Dictionary__Uno_Type__Uno_Reflection_CppFunction__*>(ReflectionCache___functionCache)->ContainsKey(type))
    {
        return ::uPtr< ::app::Uno::Collections::Dictionary__Uno_Type__Uno_Reflection_CppFunction__*>(ReflectionCache___functionCache)->Item(type);
    }

    ::app::Uno::Collections::List__Uno_Reflection_CppFunction* functions = ::app::Uno::Collections::List__Uno_Reflection_CppFunction__New_1(NULL);
    ::uType* t = type;

    while (t != NULL)
    {
        ::uPtr< ::app::Uno::Collections::List__Uno_Reflection_CppFunction*>(functions)->AddRange((::uObject*)::app::Uno::Runtime::Implementation::Internal::ArrayEnumerable__Uno_Reflection_CppFunction__New_1(NULL, ::app::Uno::Reflection::CppReflection__GetFunctions(NULL, t)));
        t = ::app::Uno::Reflection::CppReflection__GetBaseType(NULL, t);
    }

    ::uArray* array = ::uPtr< ::app::Uno::Collections::List__Uno_Reflection_CppFunction*>(functions)->ToArray();
    ::uPtr< ::app::Uno::Collections::Dictionary__Uno_Type__Uno_Reflection_CppFunction__*>(ReflectionCache___functionCache)->Add(type, array);
    return array;
}

::uType* ReflectionCache__GetType(::uStatic* __this, ::app::Outracks::Simulator::Bytecode::TypeName* typeName)
{
    for (::app::Uno::Collections::List1_Enumerator__Uno_Collections_Dictionary_Outracks_Simulator_Bytecode_TypeName_Uno_Type_ enum_123 = ::uPtr< ::app::Uno::Collections::List__Uno_Collections_Dictionary_Outracks_Simulator_Bytecode_TypeName_Uno_Type_*>(ReflectionCache___typeCache)->GetEnumerator(); enum_123.MoveNext(); )
    {
        ::app::Uno::Collections::Dictionary__Outracks_Simulator_Bytecode_TypeName__Uno_Type* dict = enum_123.Current();

        if (::uPtr< ::app::Uno::Collections::Dictionary__Outracks_Simulator_Bytecode_TypeName__Uno_Type*>(dict)->ContainsKey(typeName))
        {
            return ::uPtr< ::app::Uno::Collections::Dictionary__Outracks_Simulator_Bytecode_TypeName__Uno_Type*>(dict)->Item(typeName);
        }
    }

    return NULL;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\Outracks.Simulator.Reflection.Uno\0.1.0\Native\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

::uStaticStrong< ::app::Outracks::Simulator::Bytecode::TypeMemberName*> ReflectionExtensions__ConstructorName;
::uStaticStrong< ::uString*> ReflectionExtensions__EventAdderPrefix;
::uStaticStrong< ::uString*> ReflectionExtensions__EventRemovePrefix;
::uStaticStrong< ::uString*> ReflectionExtensions__PropGetPrefix;
::uStaticStrong< ::uString*> ReflectionExtensions__PropSetPrefix;

ReflectionExtensions__uType* ReflectionExtensions__typeof()
{
    static ::uStaticStrong<ReflectionExtensions__uType*> type;
    if (type != NULL) return type;

    type = (ReflectionExtensions__uType*)::uAllocClassType(sizeof(ReflectionExtensions__uType), "Outracks.Simulator.Reflection.Native.ReflectionExtensions");

    type->SetFields(5,
        ::uNewField("ConstructorName", &ReflectionExtensions__ConstructorName, 0, ::app::Outracks::Simulator::Bytecode::TypeMemberName__typeof()),
        ::uNewField("EventAdderPrefix", &ReflectionExtensions__EventAdderPrefix, 0, ::app::Uno::String__typeof()),
        ::uNewField("EventRemovePrefix", &ReflectionExtensions__EventRemovePrefix, 0, ::app::Uno::String__typeof()),
        ::uNewField("PropGetPrefix", &ReflectionExtensions__PropGetPrefix, 0, ::app::Uno::String__typeof()),
        ::uNewField("PropSetPrefix", &ReflectionExtensions__PropSetPrefix, 0, ::app::Uno::String__typeof()));

    type->SetFunctions(16,
        ::uNewFunction("CheckArgumentTypes", ReflectionExtensions__CheckArgumentTypes, 0, true, ::app::Uno::Bool__typeof(), ::uGetArrayType(::uType__typeof()), ::uGetArrayType(::uType__typeof())),
        ::uNewFunction("FindConstructor", ReflectionExtensions__FindConstructor, 0, true, ::app::Uno::Reflection::CppFunction__typeof(), ::uType__typeof(), ::uGetArrayType(::uType__typeof())),
        ::uNewFunction("FindEventAddFunction", ReflectionExtensions__FindEventAddFunction, 0, true, ::app::Uno::Reflection::CppFunction__typeof(), ::uType__typeof(), ::app::Outracks::Simulator::Bytecode::TypeMemberName__typeof(), ::uObject__typeof()),
        ::uNewFunction("FindEventRemoveFunction", ReflectionExtensions__FindEventRemoveFunction, 0, true, ::app::Uno::Reflection::CppFunction__typeof(), ::uType__typeof(), ::app::Outracks::Simulator::Bytecode::TypeMemberName__typeof(), ::uObject__typeof()),
        ::uNewFunction("FindField", ReflectionExtensions__FindField, 0, true, ::app::Uno::Reflection::CppField__typeof(), ::uType__typeof(), ::app::Outracks::Simulator::Bytecode::TypeMemberName__typeof()),
        ::uNewFunction("FindFunction", ReflectionExtensions__FindFunction, 0, true, ::app::Uno::Reflection::CppFunction__typeof(), ::uType__typeof(), ::app::Outracks::Simulator::Bytecode::TypeMemberName__typeof(), ::uGetArrayType(::uType__typeof())),
        ::uNewFunction("FindFunctionOverload", ReflectionExtensions__FindFunctionOverload, 0, true, ::app::Uno::Reflection::CppFunction__typeof(), ::uGetArrayType(::app::Uno::Reflection::CppFunction__typeof()), ::uGetArrayType(::uType__typeof())),
        ::uNewFunction("FindFunctionsByName", ReflectionExtensions__FindFunctionsByName, 0, true, ::uGetArrayType(::app::Uno::Reflection::CppFunction__typeof()), ::uType__typeof(), ::app::Outracks::Simulator::Bytecode::TypeMemberName__typeof()),
        ::uNewFunction("FindPropertyGetter", ReflectionExtensions__FindPropertyGetter, 0, true, ::app::Uno::Reflection::CppFunction__typeof(), ::uType__typeof(), ::app::Outracks::Simulator::Bytecode::TypeMemberName__typeof()),
        ::uNewFunction("FindPropertySetter", ReflectionExtensions__FindPropertySetter, 0, true, ::app::Uno::Reflection::CppFunction__typeof(), ::uType__typeof(), ::app::Outracks::Simulator::Bytecode::TypeMemberName__typeof(), ::uType__typeof()),
        ::uNewFunction("FindType", ReflectionExtensions__FindType, 0, true, ::uType__typeof(), ::app::Outracks::Simulator::Bytecode::TypeName__typeof()),
        ::uNewFunction("FindTypes", ReflectionExtensions__FindTypes, 0, true, ::uGetArrayType(::uType__typeof()), ::uGetArrayType(::app::Outracks::Simulator::Bytecode::TypeName__typeof())),
        ::uNewFunction("GetParameterTypes", ReflectionExtensions__GetParameterTypes, 0, true, ::uGetArrayType(::uType__typeof()), ::app::Outracks::Simulator::Bytecode::Signature__typeof()),
        ::uNewFunction("GetTypes", ReflectionExtensions__GetTypes, 0, true, ::uGetArrayType(::uType__typeof()), ::uGetArrayType(::uObject__typeof())),
        ::uNewFunction("Implements", ReflectionExtensions__Implements, 0, true, ::app::Uno::Bool__typeof(), ::uType__typeof(), ::uType__typeof()),
        ::uNewFunction("IsSubtype", ReflectionExtensions__IsSubtype, 0, true, ::app::Uno::Bool__typeof(), ::uType__typeof(), ::uType__typeof()));

    ::uRegisterType(type);
    return type;
}

void ReflectionExtensions___TypeInit(::uStatic* __this)
{
    ReflectionExtensions__PropGetPrefix = ::uGetConstString("get_");
    ReflectionExtensions__PropSetPrefix = ::uGetConstString("set_");
    ReflectionExtensions__EventAdderPrefix = ::uGetConstString("add_");
    ReflectionExtensions__EventRemovePrefix = ::uGetConstString("remove_");
    ReflectionExtensions__ConstructorName = ::app::Outracks::Simulator::Bytecode::TypeMemberName__New_1(NULL, ::uGetConstString(".ctor"));
}

bool ReflectionExtensions__CheckArgumentTypes(::uStatic* __this, ::uArray* paramTypes, ::uArray* argumentTypes)
{
    if (::uPtr< ::uArray*>(paramTypes)->Length() != ::uPtr< ::uArray*>(argumentTypes)->Length())
    {
        return false;
    }

    for (int i = 0; i < ::uPtr< ::uArray*>(paramTypes)->Length(); i++)
    {
        ::uType* param = ::uPtr< ::uArray*>(paramTypes)->Item< ::uType*>(i);
        ::uType* arg = ::uPtr< ::uArray*>(argumentTypes)->Item< ::uType*>(i);

        if (!ReflectionExtensions__IsSubtype(NULL, arg, param))
        {
            if (!ReflectionExtensions__Implements(NULL, arg, param))
            {
                return false;
            }
        }
    }

    return true;
}

::uFunction* ReflectionExtensions__FindConstructor(::uStatic* __this, ::uType* type, ::uArray* paramTypes)
{
    return ReflectionExtensions__FindFunction(NULL, type, ReflectionExtensions__ConstructorName, paramTypes);
}

::uFunction* ReflectionExtensions__FindEventAddFunction(::uStatic* __this, ::uType* type, ::app::Outracks::Simulator::Bytecode::TypeMemberName* typeMemberName, ::uObject* delegateObj)
{
    ::uArray* array_125;
    ::app::Outracks::Simulator::Bytecode::TypeMemberName* eventAddName = ::app::Outracks::Simulator::Bytecode::TypeMemberName__New_1(NULL, ::app::Uno::String__op_Addition_2(NULL, ReflectionExtensions__EventAdderPrefix, ::uPtr< ::app::Outracks::Simulator::Bytecode::TypeMemberName*>(typeMemberName)->Name));
    return ReflectionExtensions__FindFunction(NULL, type, eventAddName, (array_125 = ::uNewArray(::uType__typeof(), 1), ::uPtr< ::uArray*>(array_125)->ItemStrong< ::uType*>(0) = ::app::Uno::Object::GetType(::uPtr< ::uObject*>(delegateObj)), array_125));
}

::uFunction* ReflectionExtensions__FindEventRemoveFunction(::uStatic* __this, ::uType* type, ::app::Outracks::Simulator::Bytecode::TypeMemberName* typeMemberName, ::uObject* delegateObj)
{
    ::uArray* array_126;
    ::app::Outracks::Simulator::Bytecode::TypeMemberName* eventRemoveName = ::app::Outracks::Simulator::Bytecode::TypeMemberName__New_1(NULL, ::app::Uno::String__op_Addition_2(NULL, ReflectionExtensions__EventRemovePrefix, ::uPtr< ::app::Outracks::Simulator::Bytecode::TypeMemberName*>(typeMemberName)->Name));
    return ReflectionExtensions__FindFunction(NULL, type, eventRemoveName, (array_126 = ::uNewArray(::uType__typeof(), 1), ::uPtr< ::uArray*>(array_126)->ItemStrong< ::uType*>(0) = ::app::Uno::Object::GetType(::uPtr< ::uObject*>(delegateObj)), array_126));
}

::uField* ReflectionExtensions__FindField(::uStatic* __this, ::uType* type, ::app::Outracks::Simulator::Bytecode::TypeMemberName* fieldName)
{
    ::uArray* fields = ::app::Outracks::Simulator::Reflection::Native::ReflectionCache__GetFields(NULL, type);

    for (int i = 0; i < ::uPtr< ::uArray*>(fields)->Length(); i++)
    {
        ::uField* f = ::uPtr< ::uArray*>(fields)->Item< ::uField*>(i);

        if (::app::Uno::String__op_Equality(NULL, ::app::Uno::Reflection::CppField::Name(f), ::uPtr< ::app::Outracks::Simulator::Bytecode::TypeMemberName*>(fieldName)->Name))
        {
            return f;
        }
    }

    return ::app::Uno::Reflection::CppField__get_Null(NULL);
}

::uFunction* ReflectionExtensions__FindFunction(::uStatic* __this, ::uType* type, ::app::Outracks::Simulator::Bytecode::TypeMemberName* memberName, ::uArray* paramTypes)
{
    return ReflectionExtensions__FindFunctionOverload(NULL, ReflectionExtensions__FindFunctionsByName(NULL, type, memberName), paramTypes);
}

::uFunction* ReflectionExtensions__FindFunctionOverload(::uStatic* __this, ::uArray* functions, ::uArray* paramTypes)
{
    for (int i = 0; i < ::uPtr< ::uArray*>(functions)->Length(); i++)
    {
        if (ReflectionExtensions__CheckArgumentTypes(NULL, ::app::Uno::Reflection::CppFunction::ParameterTypes(::uPtr< ::uArray*>(functions)->Item< ::uFunction*>(i)), paramTypes))
        {
            return ::uPtr< ::uArray*>(functions)->Item< ::uFunction*>(i);
        }
    }

    return ::app::Uno::Reflection::CppFunction__get_Null(NULL);
}

::uArray* ReflectionExtensions__FindFunctionsByName(::uStatic* __this, ::uType* type, ::app::Outracks::Simulator::Bytecode::TypeMemberName* memberName)
{
    ::uString* name = ::uPtr< ::app::Outracks::Simulator::Bytecode::TypeMemberName*>(memberName)->Name;
    ::uArray* functions = ::app::Outracks::Simulator::Reflection::Native::ReflectionCache__GetFunctions(NULL, type);
    ::app::Uno::Collections::List__Uno_Reflection_CppFunction* matchingFunctions = ::app::Uno::Collections::List__Uno_Reflection_CppFunction__New_1(NULL);

    for (int i = 0; i < ::uPtr< ::uArray*>(functions)->Length(); i++)
    {
        if (::app::Uno::String__op_Equality(NULL, ::app::Uno::Reflection::CppFunction::Name(::uPtr< ::uArray*>(functions)->Item< ::uFunction*>(i)), name))
        {
            ::uPtr< ::app::Uno::Collections::List__Uno_Reflection_CppFunction*>(matchingFunctions)->Add(::uPtr< ::uArray*>(functions)->Item< ::uFunction*>(i));
        }
    }

    return ::uPtr< ::app::Uno::Collections::List__Uno_Reflection_CppFunction*>(matchingFunctions)->ToArray();
}

::uFunction* ReflectionExtensions__FindPropertyGetter(::uStatic* __this, ::uType* type, ::app::Outracks::Simulator::Bytecode::TypeMemberName* typeMemberName)
{
    ::app::Outracks::Simulator::Bytecode::TypeMemberName* getterName = ::app::Outracks::Simulator::Bytecode::TypeMemberName__New_1(NULL, ::app::Uno::String__op_Addition_2(NULL, ReflectionExtensions__PropGetPrefix, ::uPtr< ::app::Outracks::Simulator::Bytecode::TypeMemberName*>(typeMemberName)->Name));
    return ReflectionExtensions__FindFunction(NULL, type, getterName, ::uNewArray(::uType__typeof(), 0));
}

::uFunction* ReflectionExtensions__FindPropertySetter(::uStatic* __this, ::uType* type, ::app::Outracks::Simulator::Bytecode::TypeMemberName* typeMemberName, ::uType* argType)
{
    ::uArray* array_124;
    ::app::Outracks::Simulator::Bytecode::TypeMemberName* setterName = ::app::Outracks::Simulator::Bytecode::TypeMemberName__New_1(NULL, ::app::Uno::String__op_Addition_2(NULL, ReflectionExtensions__PropSetPrefix, ::uPtr< ::app::Outracks::Simulator::Bytecode::TypeMemberName*>(typeMemberName)->Name));
    return ReflectionExtensions__FindFunction(NULL, type, setterName, (array_124 = ::uNewArray(::uType__typeof(), 1), ::uPtr< ::uArray*>(array_124)->ItemStrong< ::uType*>(0) = argType, array_124));
}

::uType* ReflectionExtensions__FindType(::uStatic* __this, ::app::Outracks::Simulator::Bytecode::TypeName* typeName)
{
    ::uType* ind_123 = ::app::Outracks::Simulator::Reflection::Native::ReflectionCache__GetType(NULL, typeName);
    ::uType* type = (ind_123 != NULL) ? ind_123 : ::app::Uno::Reflection::CppReflection__FindType(NULL, ::uPtr< ::app::Outracks::Simulator::Bytecode::TypeName*>(typeName)->FullName());

    if (type == NULL)
    {
        U_THROW(::app::Uno::Exception__New_2(NULL, ::app::Uno::String__op_Addition_2(NULL, ::uGetConstString("Could not find type: "), typeName->FullName())));
    }

    return type;
}

::uArray* ReflectionExtensions__FindTypes(::uStatic* __this, ::uArray* typeName)
{
    ::uArray* types = ::uNewArray(::uType__typeof(), ::uPtr< ::uArray*>(typeName)->Length());

    for (int i = 0; i < typeName->Length(); i++)
    {
        types->ItemStrong< ::uType*>(i) = ReflectionExtensions__FindType(NULL, typeName->Item< ::app::Outracks::Simulator::Bytecode::TypeName*>(i));
    }

    return types;
}

::uArray* ReflectionExtensions__GetParameterTypes(::uStatic* __this, ::app::Outracks::Simulator::Bytecode::Signature* methodSignature)
{
    ::app::Outracks::Simulator::ImmutableList__Outracks_Simulator_Bytecode_Parameter* parameters = ::uPtr< ::app::Outracks::Simulator::Bytecode::Signature*>(methodSignature)->Parameters;
    ::uArray* types = ::uNewArray(::uType__typeof(), ::uPtr< ::app::Outracks::Simulator::ImmutableList__Outracks_Simulator_Bytecode_Parameter*>(parameters)->Count());

    for (int i = 0; i < parameters->Count(); i++)
    {
        ::uPtr< ::uArray*>(types)->ItemStrong< ::uType*>(i) = ReflectionExtensions__FindType(NULL, ::uPtr< ::app::Outracks::Simulator::Bytecode::Parameter*>(::uPtr< ::app::Outracks::Simulator::ImmutableList__Outracks_Simulator_Bytecode_Parameter*>(parameters)->Item(i))->Type);
    }

    return types;
}

::uArray* ReflectionExtensions__GetTypes(::uStatic* __this, ::uArray* objects)
{
    if (objects == NULL)
    {
        return NULL;
    }

    ::uArray* types = ::uNewArray(::uType__typeof(), ::uPtr< ::uArray*>(objects)->Length());

    for (int i = 0; i < objects->Length(); i++)
    {
        types->ItemStrong< ::uType*>(i) = ::app::Uno::Object::GetType(::uPtr< ::uObject*>(objects->Item< ::uObject*>(i)));
    }

    return types;
}

bool ReflectionExtensions__Implements(::uStatic* __this, ::uType* type, ::uType* interfaceType)
{
    ::uType* t = type;

    while (t != NULL)
    {
        ::uArray* interfaces = ::app::Uno::Reflection::CppReflection__GetInterfaceTypes(NULL, t);

        for (int i = 0; i < ::uPtr< ::uArray*>(interfaces)->Length(); i++)
        {
            if (::uPtr< ::uArray*>(interfaces)->Item< ::uType*>(i) == interfaceType)
            {
                return true;
            }
        }

        t = ::app::Uno::Reflection::CppReflection__GetBaseType(NULL, t);
    }

    return false;
}

bool ReflectionExtensions__IsSubtype(::uStatic* __this, ::uType* subType, ::uType* baseType)
{
    ::uType* st = subType;
    ::uType* bt = baseType;

    while (st != NULL)
    {
        if (st == bt)
        {
            return true;
        }

        st = ::app::Uno::Reflection::CppReflection__GetBaseType(NULL, st);
    }

    return false;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\Outracks.Simulator.Reflection.Uno\0.1.0\Native\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

ReflectionHelpers__uType* ReflectionHelpers__typeof()
{
    static ::uStaticStrong<ReflectionHelpers__uType*> type;
    if (type != NULL) return type;

    type = (ReflectionHelpers__uType*)::uAllocClassType(sizeof(ReflectionHelpers__uType), "Outracks.Simulator.Reflection.Native.ReflectionHelpers");

    type->SetFunctions(1,
        ::uNewFunction("MakeGenericTypeLookupTable", ReflectionHelpers__MakeGenericTypeLookupTable, 0, true, ::app::Uno::Collections::Dictionary__Outracks_Simulator_Bytecode_TypeName__Uno_Type__typeof()));

    ::uRegisterType(type);
    return type;
}

::app::Uno::Collections::Dictionary__Outracks_Simulator_Bytecode_TypeName__Uno_Type* ReflectionHelpers__MakeGenericTypeLookupTable(::uStatic* __this)
{
    ::app::Uno::Collections::Dictionary__Outracks_Simulator_Bytecode_TypeName__Uno_Type* genericTypes = ::app::Uno::Collections::Dictionary__Outracks_Simulator_Bytecode_TypeName__Uno_Type__New_1(NULL);
    return genericTypes;
}

}}}}}
