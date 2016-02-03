// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.20.1\Source\Uno\Reflection\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.Object.h>
#include <Uno.Reflection.IFunction.h>

namespace g{
namespace Uno{
namespace Reflection{

// public extern struct CppFunction :78
// {
struct CppFunction_type : uStructType
{
    ::g::Uno::Reflection::IFunction interface0;
};

CppFunction_type* CppFunction_typeof();
void CppFunction__CreateDelegate_fn(uFunction** __this, uType* type, uObject* obj, uDelegate** __retval);
void CppFunction__Invoke_fn(uFunction** __this, uObject* obj, uArray* args, uObject** __retval);
void CppFunction__get_Name_fn(uFunction** __this, uString** __retval);
void CppFunction__get_Null_fn(uFunction** __retval);
void CppFunction__get_ParameterTypes_fn(uFunction** __this, uArray** __retval);

struct CppFunction
{
    static uDelegate* CreateDelegate(uFunction* __this, uType* type, uObject* obj);
    static uObject* Invoke(uFunction* __this, uObject* obj, uArray* args);
    static uString* Name(uFunction* __this);
    static uArray* ParameterTypes(uFunction* __this);
    static uFunction* Null();
};
// }

}}} // ::g::Uno::Reflection
