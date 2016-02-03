// This file was generated based on '(multiple files)'.
// WARNING: Changes might be lost if you edit this file directly.

#include <Uno.Bool.h>
#include <Uno.Delegate.h>
#include <Uno.Reflection.CppField.h>
#include <Uno.Reflection.CppFunction.h>
#include <Uno.Reflection.CppReflection.h>
#include <Uno.Reflection.IField.h>
#include <Uno.Reflection.IFunction.h>
#include <Uno.String.h>
#include <Uno.Type.h>

namespace g{
namespace Uno{
namespace Reflection{

// C:\ProgramData\Uno\Packages\UnoCore\0.20.1\Source\Uno\Reflection\$.uno(33)
// --------------------------------------------------------------------------

// public extern struct CppField :33
// {
// public object GetValue(object obj) [adapter] :65
static void CppField__GetValue_ex(uObject* __this, uObject* obj, uObject** __retval)
{
    CppField__GetValue_fn((uField**)((uint8_t*)__this + sizeof(uObject)), obj, __retval);
}

// public void SetValue(object obj, object value) [adapter] :70
static void CppField__SetValue_ex(uObject* __this, uObject* obj, uObject* value)
{
    CppField__SetValue_fn((uField**)((uint8_t*)__this + sizeof(uObject)), obj, value);
}

CppField_type* CppField_typeof()
{
    static uSStrong<CppField_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.InterfaceCount = 1;
    options.ValueSize = sizeof(uField*);
    options.TypeSize = sizeof(CppField_type);
    type = (CppField_type*)uStructType::New("Uno.Reflection.CppField", options);
    type->interface0.fp_GetValue = CppField__GetValue_ex;
    type->interface0.fp_SetValue = CppField__SetValue_ex;
    type->SetInterfaces(
        ::g::Uno::Reflection::IField_typeof(), offsetof(CppField_type, interface0));
    type->Reflection.SetFunctions(5,
        new uFunction("GetValue", NULL, (void*)CppField__GetValue_fn, 0, false, uObject_typeof(), 1, uObject_typeof()),
        new uFunction("get_IsNull", NULL, (void*)CppField__get_IsNull_fn, 0, false, ::g::Uno::Bool_typeof(), 0),
        new uFunction("get_Name", NULL, (void*)CppField__get_Name_fn, 0, false, ::g::Uno::String_typeof(), 0),
        new uFunction("get_Null", NULL, (void*)CppField__get_Null_fn, 0, true, CppField_typeof(), 0),
        new uFunction("SetValue", NULL, (void*)CppField__SetValue_fn, 0, false, uVoid_typeof(), 2, uObject_typeof(), uObject_typeof()));
    return type;
}

// public object GetValue(object obj) :65
void CppField__GetValue_fn(uField** __this, uObject* obj, uObject** __retval)
{
    *__retval = CppField::GetValue(*__this, obj);
}

// public bool get_IsNull() :42
void CppField__get_IsNull_fn(uField** __this, bool* __retval)
{
    *__retval = CppField::IsNull(*__this);
}

// public string get_Name() :52
void CppField__get_Name_fn(uField** __this, uString** __retval)
{
    *__retval = CppField::Name(*__this);
}

// public static Uno.Reflection.CppField get_Null() :37
void CppField__get_Null_fn(uField** __retval)
{
    *__retval = CppField::Null();
}

// public void SetValue(object obj, object value) :70
void CppField__SetValue_fn(uField** __this, uObject* obj, uObject* value)
{
    CppField::SetValue(*__this, obj, value);
}

// public object GetValue(object obj) [instance] :65
uObject* CppField::GetValue(uField* __this, uObject* obj)
{
    return uPtr(*&__this)->GetValue(obj);
}

// public bool get_IsNull() [instance] :42
bool CppField::IsNull(uField* __this)
{
    return *&__this == NULL;
}

// public string get_Name() [instance] :52
uString* CppField::Name(uField* __this)
{
    return uPtr(*&__this)->Name;
}

// public void SetValue(object obj, object value) [instance] :70
void CppField::SetValue(uField* __this, uObject* obj, uObject* value)
{
    uPtr(*&__this)->SetValue(obj, value);
}

// public static Uno.Reflection.CppField get_Null() [static] :37
uField* CppField::Null()
{
    return NULL;
}
// }

// C:\ProgramData\Uno\Packages\UnoCore\0.20.1\Source\Uno\Reflection\$.uno(78)
// --------------------------------------------------------------------------

// public extern struct CppFunction :78
// {
// public Uno.Delegate CreateDelegate(Uno.Type type, object obj) [adapter] :120
static void CppFunction__CreateDelegate_ex(uObject* __this, uType* type, uObject* obj, uDelegate** __retval)
{
    CppFunction__CreateDelegate_fn((uFunction**)((uint8_t*)__this + sizeof(uObject)), type, obj, __retval);
}

// public object Invoke(object obj, object[] args) [adapter] :125
static void CppFunction__Invoke_ex(uObject* __this, uObject* obj, uArray* args, uObject** __retval)
{
    CppFunction__Invoke_fn((uFunction**)((uint8_t*)__this + sizeof(uObject)), obj, args, __retval);
}

// public Uno.Type[] get_ParameterTypes() [adapter] :117
static void CppFunction__get_ParameterTypes_ex(uObject* __this, uArray** __retval)
{
    CppFunction__get_ParameterTypes_fn((uFunction**)((uint8_t*)__this + sizeof(uObject)), __retval);
}

CppFunction_type* CppFunction_typeof()
{
    static uSStrong<CppFunction_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.InterfaceCount = 1;
    options.ValueSize = sizeof(uFunction*);
    options.TypeSize = sizeof(CppFunction_type);
    type = (CppFunction_type*)uStructType::New("Uno.Reflection.CppFunction", options);
    type->interface0.fp_CreateDelegate = CppFunction__CreateDelegate_ex;
    type->interface0.fp_Invoke = CppFunction__Invoke_ex;
    type->interface0.fp_get_ParameterTypes = CppFunction__get_ParameterTypes_ex;
    type->SetInterfaces(
        ::g::Uno::Reflection::IFunction_typeof(), offsetof(CppFunction_type, interface0));
    type->Reflection.SetFunctions(5,
        new uFunction("CreateDelegate", NULL, (void*)CppFunction__CreateDelegate_fn, 0, false, ::g::Uno::Delegate_typeof(), 2, ::g::Uno::Type_typeof(), uObject_typeof()),
        new uFunction("Invoke", NULL, (void*)CppFunction__Invoke_fn, 0, false, uObject_typeof(), 2, uObject_typeof(), uObject_typeof()->Array()),
        new uFunction("get_Name", NULL, (void*)CppFunction__get_Name_fn, 0, false, ::g::Uno::String_typeof(), 0),
        new uFunction("get_Null", NULL, (void*)CppFunction__get_Null_fn, 0, true, CppFunction_typeof(), 0),
        new uFunction("get_ParameterTypes", NULL, (void*)CppFunction__get_ParameterTypes_fn, 0, false, ::g::Uno::Type_typeof()->Array(), 0));
    return type;
}

// public Uno.Delegate CreateDelegate(Uno.Type type, object obj) :120
void CppFunction__CreateDelegate_fn(uFunction** __this, uType* type, uObject* obj, uDelegate** __retval)
{
    *__retval = CppFunction::CreateDelegate(*__this, type, obj);
}

// public object Invoke(object obj, object[] args) :125
void CppFunction__Invoke_fn(uFunction** __this, uObject* obj, uArray* args, uObject** __retval)
{
    *__retval = CppFunction::Invoke(*__this, obj, args);
}

// public string get_Name() :102
void CppFunction__get_Name_fn(uFunction** __this, uString** __retval)
{
    *__retval = CppFunction::Name(*__this);
}

// public static Uno.Reflection.CppFunction get_Null() :82
void CppFunction__get_Null_fn(uFunction** __retval)
{
    *__retval = CppFunction::Null();
}

// public Uno.Type[] get_ParameterTypes() :117
void CppFunction__get_ParameterTypes_fn(uFunction** __this, uArray** __retval)
{
    *__retval = CppFunction::ParameterTypes(*__this);
}

// public Uno.Delegate CreateDelegate(Uno.Type type, object obj) [instance] :120
uDelegate* CppFunction::CreateDelegate(uFunction* __this, uType* type, uObject* obj)
{
    return uPtr(*&__this)->CreateDelegate(type, obj);
}

// public object Invoke(object obj, object[] args) [instance] :125
uObject* CppFunction::Invoke(uFunction* __this, uObject* obj, uArray* args)
{
    return uPtr(*&__this)->Invoke(obj, args);
}

// public string get_Name() [instance] :102
uString* CppFunction::Name(uFunction* __this)
{
    return uPtr(*&__this)->Name;
}

// public Uno.Type[] get_ParameterTypes() [instance] :117
uArray* CppFunction::ParameterTypes(uFunction* __this)
{
    return uPtr(*&__this)->ParameterTypes;
}

// public static Uno.Reflection.CppFunction get_Null() [static] :82
uFunction* CppFunction::Null()
{
    return NULL;
}
// }

// C:\ProgramData\Uno\Packages\UnoCore\0.20.1\Source\Uno\Reflection\$.uno(133)
// ---------------------------------------------------------------------------

// public sealed extern class CppReflection :133
// {
uType* CppReflection_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.ObjectSize = sizeof(CppReflection);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Uno.Reflection.CppReflection", options);
    type->fp_ctor_ = (void*)CppReflection__New1_fn;
    type->Reflection.SetFunctions(8,
        new uFunction("FindField", NULL, (void*)CppReflection__FindField_fn, 0, true, ::g::Uno::Reflection::CppField_typeof(), 2, ::g::Uno::Type_typeof(), ::g::Uno::String_typeof()),
        new uFunction("FindFieldFromObject", NULL, (void*)CppReflection__FindFieldFromObject_fn, 0, true, ::g::Uno::Reflection::CppField_typeof(), 2, uObject_typeof(), ::g::Uno::String_typeof()),
        new uFunction("FindFunction", NULL, (void*)CppReflection__FindFunction_fn, 0, true, ::g::Uno::Reflection::CppFunction_typeof(), 3, ::g::Uno::Type_typeof(), ::g::Uno::String_typeof(), ::g::Uno::Type_typeof()->Array()),
        new uFunction("FindFunctionFromObject", NULL, (void*)CppReflection__FindFunctionFromObject_fn, 0, true, ::g::Uno::Reflection::CppFunction_typeof(), 3, uObject_typeof(), ::g::Uno::String_typeof(), ::g::Uno::Type_typeof()->Array()),
        new uFunction("GetFields", NULL, (void*)CppReflection__GetFields_fn, 0, true, ::g::Uno::Reflection::CppField_typeof()->Array(), 1, ::g::Uno::Type_typeof()),
        new uFunction("GetFunctions", NULL, (void*)CppReflection__GetFunctions_fn, 0, true, ::g::Uno::Reflection::CppFunction_typeof()->Array(), 1, ::g::Uno::Type_typeof()),
        new uFunction("GetTypes", NULL, (void*)CppReflection__GetTypes_fn, 0, true, ::g::Uno::Type_typeof()->Array(), 0),
        new uFunction(".ctor", NULL, (void*)CppReflection__New1_fn, 0, true, CppReflection_typeof(), 0));
    return type;
}

// public generated CppReflection() :133
void CppReflection__ctor__fn(CppReflection* __this)
{
    __this->ctor_();
}

// public static Uno.Reflection.CppField FindField(Uno.Type type, string name) :152
void CppReflection__FindField_fn(uType* type, uString* name, uField** __retval)
{
    *__retval = CppReflection::FindField(type, name);
}

// public static Uno.Reflection.CppField FindFieldFromObject(object obj, string name) :157
void CppReflection__FindFieldFromObject_fn(uObject* obj, uString* name, uField** __retval)
{
    *__retval = CppReflection::FindFieldFromObject(obj, name);
}

// public static Uno.Reflection.CppFunction FindFunction(Uno.Type type, string name, Uno.Type[] parameterTypes) :162
void CppReflection__FindFunction_fn(uType* type, uString* name, uArray* parameterTypes, uFunction** __retval)
{
    *__retval = CppReflection::FindFunction(type, name, parameterTypes);
}

// public static Uno.Reflection.CppFunction FindFunctionFromObject(object obj, string name, Uno.Type[] parameterTypes) :167
void CppReflection__FindFunctionFromObject_fn(uObject* obj, uString* name, uArray* parameterTypes, uFunction** __retval)
{
    *__retval = CppReflection::FindFunctionFromObject(obj, name, parameterTypes);
}

// public static Uno.Reflection.CppField[] GetFields(Uno.Type type) :140
void CppReflection__GetFields_fn(uType* type, uArray** __retval)
{
    *__retval = CppReflection::GetFields(type);
}

// public static Uno.Reflection.CppFunction[] GetFunctions(Uno.Type type) :146
void CppReflection__GetFunctions_fn(uType* type, uArray** __retval)
{
    *__retval = CppReflection::GetFunctions(type);
}

// public static Uno.Type[] GetTypes() :135
void CppReflection__GetTypes_fn(uArray** __retval)
{
    *__retval = CppReflection::GetTypes();
}

// public generated CppReflection New() :133
void CppReflection__New1_fn(CppReflection** __retval)
{
    *__retval = CppReflection::New1();
}

// public generated CppReflection() [instance] :133
void CppReflection::ctor_()
{
}

// public static Uno.Reflection.CppField FindField(Uno.Type type, string name) [static] :152
uField* CppReflection::FindField(uType* type, uString* name)
{
    return uPtr(type)->Reflection.GetField(name);
}

// public static Uno.Reflection.CppField FindFieldFromObject(object obj, string name) [static] :157
uField* CppReflection::FindFieldFromObject(uObject* obj, uString* name)
{
    return obj != NULL ? obj->GetType()->Reflection.GetField(name) : NULL;
}

// public static Uno.Reflection.CppFunction FindFunction(Uno.Type type, string name, Uno.Type[] parameterTypes) [static] :162
uFunction* CppReflection::FindFunction(uType* type, uString* name, uArray* parameterTypes)
{
    return uPtr(type)->Reflection.GetFunction(name, parameterTypes);
}

// public static Uno.Reflection.CppFunction FindFunctionFromObject(object obj, string name, Uno.Type[] parameterTypes) [static] :167
uFunction* CppReflection::FindFunctionFromObject(uObject* obj, uString* name, uArray* parameterTypes)
{
    return obj != NULL ? obj->GetType()->Reflection.GetFunction(name, parameterTypes) : NULL;
}

// public static Uno.Reflection.CppField[] GetFields(Uno.Type type) [static] :140
uArray* CppReflection::GetFields(uType* type)
{
    uPtr(type);
    return uArray::New(::g::Uno::Reflection::CppField_typeof()->Array(), type->Reflection.FieldCount, type->Reflection.Fields);
}

// public static Uno.Reflection.CppFunction[] GetFunctions(Uno.Type type) [static] :146
uArray* CppReflection::GetFunctions(uType* type)
{
    uPtr(type);
    return uArray::New(::g::Uno::Reflection::CppFunction_typeof()->Array(), type->Reflection.FunctionCount, type->Reflection.Functions);
}

// public static Uno.Type[] GetTypes() [static] :135
uArray* CppReflection::GetTypes()
{
    return uReflection::GetTypes();
}

// public generated CppReflection New() [static] :133
CppReflection* CppReflection::New1()
{
    CppReflection* obj1 = (CppReflection*)uNew(CppReflection_typeof());
    obj1->ctor_();
    return obj1;
}
// }

// C:\ProgramData\Uno\Packages\UnoCore\0.20.1\Source\Uno\Reflection\$.uno(7)
// -------------------------------------------------------------------------

// public abstract interface IField :7
// {
uInterfaceType* IField_typeof()
{
    static uSStrong<uInterfaceType*> type;
    if (type != NULL) return type;

    type = uInterfaceType::New("Uno.Reflection.IField", 0, 0);
    type->Reflection.SetFunctions(2,
        new uFunction("GetValue", NULL, NULL, offsetof(IField, fp_GetValue), false, uObject_typeof(), 1, uObject_typeof()),
        new uFunction("SetValue", NULL, NULL, offsetof(IField, fp_SetValue), false, uVoid_typeof(), 2, uObject_typeof(), uObject_typeof()));
    return type;
}
// }

// C:\ProgramData\Uno\Packages\UnoCore\0.20.1\Source\Uno\Reflection\$.uno(18)
// --------------------------------------------------------------------------

// public abstract interface IFunction :18
// {
uInterfaceType* IFunction_typeof()
{
    static uSStrong<uInterfaceType*> type;
    if (type != NULL) return type;

    type = uInterfaceType::New("Uno.Reflection.IFunction", 0, 0);
    type->Reflection.SetFunctions(3,
        new uFunction("CreateDelegate", NULL, NULL, offsetof(IFunction, fp_CreateDelegate), false, ::g::Uno::Delegate_typeof(), 2, ::g::Uno::Type_typeof(), uObject_typeof()),
        new uFunction("Invoke", NULL, NULL, offsetof(IFunction, fp_Invoke), false, uObject_typeof(), 2, uObject_typeof(), uObject_typeof()->Array()),
        new uFunction("get_ParameterTypes", NULL, NULL, offsetof(IFunction, fp_get_ParameterTypes), false, ::g::Uno::Type_typeof()->Array(), 0));
    return type;
}
// }

}}} // ::g::Uno::Reflection
