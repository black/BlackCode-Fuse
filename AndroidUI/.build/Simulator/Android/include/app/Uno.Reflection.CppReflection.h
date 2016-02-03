// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Reflection\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_UNO_REFLECTION_CPP_REFLECTION_H__
#define __APP_UNO_REFLECTION_CPP_REFLECTION_H__

#include <app/Uno.Object.h>
#include <Uno.h>

namespace app {
namespace Uno {
namespace Reflection {

struct CppReflection;

struct CppReflection__uType : ::uClassType
{
};

CppReflection__uType* CppReflection__typeof();

void CppReflection___ObjInit(CppReflection* __this);
::uType* CppReflection__CreateClass(::uStatic* __this, ::uString* name, ::uType* baseClass);
::uField* CppReflection__FindField(::uStatic* __this, ::uType* type, ::uString* name);
::uField* CppReflection__FindFieldFromObject(::uStatic* __this, ::uObject* obj, ::uString* name);
::uFunction* CppReflection__FindFunction(::uStatic* __this, ::uType* type, ::uString* name, ::uArray* parameterTypes);
::uFunction* CppReflection__FindFunctionFromObject(::uStatic* __this, ::uObject* obj, ::uString* name, ::uArray* parameterTypes);
::uType* CppReflection__FindType(::uStatic* __this, ::uString* name);
::uType* CppReflection__GetBaseType(::uStatic* __this, ::uType* type);
::uArray* CppReflection__GetFields(::uStatic* __this, ::uType* type);
::uArray* CppReflection__GetFunctions(::uStatic* __this, ::uType* type);
::uArray* CppReflection__GetInterfaceTypes(::uStatic* __this, ::uType* type);
::uArray* CppReflection__GetTypes(::uStatic* __this);
CppReflection* CppReflection__New_1(::uStatic* __this);

struct CppReflection : ::uObject
{
    void _ObjInit() { CppReflection___ObjInit(this); }
};

}}}


#endif
