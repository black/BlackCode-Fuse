#include <app/Uno.Bool.h>
#include <app/Uno.Delegate.h>
#include <app/Uno.Reflection.CppField.h>
#include <app/Uno.Reflection.CppFunction.h>
#include <app/Uno.Reflection.CppReflection.h>
#include <app/Uno.String.h>
#include <app/Uno.Type.h>

namespace app {
namespace Uno {
namespace Reflection {

// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Reflection\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

CppField__uType* CppField__typeof()
{
    static ::uStaticStrong<CppField__uType*> type;
    if (type != NULL) return type;

    type = (CppField__uType*)::uAllocStructType(sizeof(CppField__uType), "Uno.Reflection.CppField", sizeof(::uField*), 0, 0, 0);

    type->SetFunctions(5,
        ::uNewFunction("get_IsNull", CppField__get_IsNull, 0, false, ::app::Uno::Bool__typeof()),
        ::uNewFunction("get_IsStatic", CppField__get_IsStatic, 0, false, ::app::Uno::Bool__typeof()),
        ::uNewFunction("get_Name", CppField__get_Name, 0, false, ::app::Uno::String__typeof()),
        ::uNewFunction("get_Null", CppField__get_Null, 0, true, CppField__typeof()),
        ::uNewFunction("GetValue", CppField__GetValue, 0, false, ::uObject__typeof(), ::uObject__typeof()));

    ::uRegisterType(type);
    return type;
}

bool CppField__get_IsNull(::uField** __this)
{
    return *__this == NULL;
}

bool CppField__get_IsStatic(::uField** __this)
{
    return ::uPtr(*__this)->IsStatic;
}

::uString* CppField__get_Name(::uField** __this)
{
    return ::uPtr(*__this)->Name;
}

::uField* CppField__get_Null(::uStatic* __this)
{
    return NULL;
}

::uObject* CppField__GetValue(::uField** __this, ::uObject* obj)
{
    return ::uPtr(*__this)->GetValue(obj);
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Reflection\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

CppFunction__uType* CppFunction__typeof()
{
    static ::uStaticStrong<CppFunction__uType*> type;
    if (type != NULL) return type;

    type = (CppFunction__uType*)::uAllocStructType(sizeof(CppFunction__uType), "Uno.Reflection.CppFunction", sizeof(::uFunction*), 0, 0, 0);

    type->SetFunctions(7,
        ::uNewFunction("CreateDelegate", CppFunction__CreateDelegate, 0, false, ::app::Uno::Delegate__typeof(), ::uType__typeof(), ::uObject__typeof()),
        ::uNewFunction("get_IsNull", CppFunction__get_IsNull, 0, false, ::app::Uno::Bool__typeof()),
        ::uNewFunction("get_IsStatic", CppFunction__get_IsStatic, 0, false, ::app::Uno::Bool__typeof()),
        ::uNewFunction("get_Name", CppFunction__get_Name, 0, false, ::app::Uno::String__typeof()),
        ::uNewFunction("get_Null", CppFunction__get_Null, 0, true, CppFunction__typeof()),
        ::uNewFunction("get_ParameterTypes", CppFunction__get_ParameterTypes, 0, false, ::uGetArrayType(::uType__typeof())),
        ::uNewFunction("Invoke", CppFunction__Invoke, 0, false, ::uObject__typeof(), ::uObject__typeof(), ::uGetArrayType(::uObject__typeof())));

    ::uRegisterType(type);
    return type;
}

::uDelegate* CppFunction__CreateDelegate(::uFunction** __this, ::uType* type, ::uObject* obj)
{
    return ::uPtr(*__this)->CreateDelegate(type, obj);
}

bool CppFunction__get_IsNull(::uFunction** __this)
{
    return *__this == NULL;
}

bool CppFunction__get_IsStatic(::uFunction** __this)
{
    return ::uPtr(*__this)->IsStatic;
}

::uString* CppFunction__get_Name(::uFunction** __this)
{
    return ::uPtr(*__this)->Name;
}

::uFunction* CppFunction__get_Null(::uStatic* __this)
{
    return NULL;
}

::uArray* CppFunction__get_ParameterTypes(::uFunction** __this)
{
    return ::uPtr(*__this)->ParameterTypes;
}

::uObject* CppFunction__Invoke(::uFunction** __this, ::uObject* obj, ::uArray* args)
{
    return ::uPtr(*__this)->Invoke(obj, args);
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Reflection\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

CppReflection__uType* CppReflection__typeof()
{
    static ::uStaticStrong<CppReflection__uType*> type;
    if (type != NULL) return type;

    type = (CppReflection__uType*)::uAllocClassType(sizeof(CppReflection__uType), "Uno.Reflection.CppReflection", false, 0, 0, 0);

    type->SetFunctions(12,
        ::uNewFunction("CreateClass", CppReflection__CreateClass, 0, true, ::uType__typeof(), ::app::Uno::String__typeof(), ::uType__typeof()),
        ::uNewFunction("FindField", CppReflection__FindField, 0, true, ::app::Uno::Reflection::CppField__typeof(), ::uType__typeof(), ::app::Uno::String__typeof()),
        ::uNewFunction("FindFieldFromObject", CppReflection__FindFieldFromObject, 0, true, ::app::Uno::Reflection::CppField__typeof(), ::uObject__typeof(), ::app::Uno::String__typeof()),
        ::uNewFunction("FindFunction", CppReflection__FindFunction, 0, true, ::app::Uno::Reflection::CppFunction__typeof(), ::uType__typeof(), ::app::Uno::String__typeof(), ::uGetArrayType(::uType__typeof())),
        ::uNewFunction("FindFunctionFromObject", CppReflection__FindFunctionFromObject, 0, true, ::app::Uno::Reflection::CppFunction__typeof(), ::uObject__typeof(), ::app::Uno::String__typeof(), ::uGetArrayType(::uType__typeof())),
        ::uNewFunction("FindType", CppReflection__FindType, 0, true, ::uType__typeof(), ::app::Uno::String__typeof()),
        ::uNewFunction("GetBaseType", CppReflection__GetBaseType, 0, true, ::uType__typeof(), ::uType__typeof()),
        ::uNewFunction("GetFields", CppReflection__GetFields, 0, true, ::uGetArrayType(::app::Uno::Reflection::CppField__typeof()), ::uType__typeof()),
        ::uNewFunction("GetFunctions", CppReflection__GetFunctions, 0, true, ::uGetArrayType(::app::Uno::Reflection::CppFunction__typeof()), ::uType__typeof()),
        ::uNewFunction("GetInterfaceTypes", CppReflection__GetInterfaceTypes, 0, true, ::uGetArrayType(::uType__typeof()), ::uType__typeof()),
        ::uNewFunction("GetTypes", CppReflection__GetTypes, 0, true, ::uGetArrayType(::uType__typeof())),
        ::uNewFunction(".ctor", CppReflection__New_1, 0, true, CppReflection__typeof()));

    ::uRegisterType(type);
    return type;
}

void CppReflection___ObjInit(CppReflection* __this)
{
}

::uType* CppReflection__CreateClass(::uStatic* __this, ::uString* name, ::uType* baseClass)
{
    return ::uCreateClass(name, baseClass);
}

::uField* CppReflection__FindField(::uStatic* __this, ::uType* type, ::uString* name)
{
    return ::uFindField(type, name);
}

::uField* CppReflection__FindFieldFromObject(::uStatic* __this, ::uObject* obj, ::uString* name)
{
    return obj != NULL ? ::uFindField(obj->GetType(), name) : NULL;
}

::uFunction* CppReflection__FindFunction(::uStatic* __this, ::uType* type, ::uString* name, ::uArray* parameterTypes)
{
    return ::uFindFunction(type, name, parameterTypes);
}

::uFunction* CppReflection__FindFunctionFromObject(::uStatic* __this, ::uObject* obj, ::uString* name, ::uArray* parameterTypes)
{
    return obj != NULL ? ::uFindFunction(obj->GetType(), name, parameterTypes) : NULL;
}

::uType* CppReflection__FindType(::uStatic* __this, ::uString* name)
{
    return ::uFindType(name);
}

::uType* CppReflection__GetBaseType(::uStatic* __this, ::uType* type)
{
    return ::uPtr(type)->BaseType;
}

::uArray* CppReflection__GetFields(::uStatic* __this, ::uType* type)
{
    ::uPtr(type);
    return ::uNewArray(::app::Uno::Reflection::CppField__typeof(), type->FieldCount, type->Fields);
}

::uArray* CppReflection__GetFunctions(::uStatic* __this, ::uType* type)
{
    ::uPtr(type);
    return ::uNewArray(::app::Uno::Reflection::CppFunction__typeof(), type->FunctionCount, type->Functions);
}

::uArray* CppReflection__GetInterfaceTypes(::uStatic* __this, ::uType* type)
{
    ::uPtr(type);
    return ::uNewArrayRetainEach(::uType__typeof(), type->InterfaceCount, (uObject**)type->InterfaceTypes);
}

::uArray* CppReflection__GetTypes(::uStatic* __this)
{
    return ::uGetTypes();
}

CppReflection* CppReflection__New_1(::uStatic* __this)
{
    CppReflection* inst = (CppReflection*)::uAllocObject(sizeof(CppReflection), CppReflection__typeof());
    inst->_ObjInit();
    return inst;
}

}}}
