// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Reflection\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_UNO_REFLECTION_CPP_FUNCTION_H__
#define __APP_UNO_REFLECTION_CPP_FUNCTION_H__

#include <app/Uno.Object.h>
#include <Uno.h>

namespace app {
namespace Uno {
namespace Reflection {

struct CppFunction__uType : ::uStructType
{
};

CppFunction__uType* CppFunction__typeof();

::uDelegate* CppFunction__CreateDelegate(::uFunction** __this, ::uType* type, ::uObject* obj);
bool CppFunction__get_IsNull(::uFunction** __this);
bool CppFunction__get_IsStatic(::uFunction** __this);
::uString* CppFunction__get_Name(::uFunction** __this);
::uFunction* CppFunction__get_Null(::uStatic* __this);
::uArray* CppFunction__get_ParameterTypes(::uFunction** __this);
::uObject* CppFunction__Invoke(::uFunction** __this, ::uObject* obj, ::uArray* args);

struct CppFunction
{
    static ::uDelegate* CreateDelegate(::uFunction* __this, ::uType* type, ::uObject* obj) { return CppFunction__CreateDelegate(&__this, type, obj); }
    static bool IsNull(::uFunction* __this) { return CppFunction__get_IsNull(&__this); }
    static bool IsStatic(::uFunction* __this) { return CppFunction__get_IsStatic(&__this); }
    static ::uString* Name(::uFunction* __this) { return CppFunction__get_Name(&__this); }
    static ::uArray* ParameterTypes(::uFunction* __this) { return CppFunction__get_ParameterTypes(&__this); }
    static ::uObject* Invoke(::uFunction* __this, ::uObject* obj, ::uArray* args) { return CppFunction__Invoke(&__this, obj, args); }
};

}}}


#endif
