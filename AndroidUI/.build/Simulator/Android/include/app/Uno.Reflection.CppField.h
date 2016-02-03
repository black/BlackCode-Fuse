// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Reflection\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_UNO_REFLECTION_CPP_FIELD_H__
#define __APP_UNO_REFLECTION_CPP_FIELD_H__

#include <app/Uno.Object.h>
#include <Uno.h>

namespace app {
namespace Uno {
namespace Reflection {

struct CppField__uType : ::uStructType
{
};

CppField__uType* CppField__typeof();

bool CppField__get_IsNull(::uField** __this);
bool CppField__get_IsStatic(::uField** __this);
::uString* CppField__get_Name(::uField** __this);
::uField* CppField__get_Null(::uStatic* __this);
::uObject* CppField__GetValue(::uField** __this, ::uObject* obj);

struct CppField
{
    static bool IsNull(::uField* __this) { return CppField__get_IsNull(&__this); }
    static bool IsStatic(::uField* __this) { return CppField__get_IsStatic(&__this); }
    static ::uString* Name(::uField* __this) { return CppField__get_Name(&__this); }
    static ::uObject* GetValue(::uField* __this, ::uObject* obj) { return CppField__GetValue(&__this, obj); }
};

}}}


#endif
