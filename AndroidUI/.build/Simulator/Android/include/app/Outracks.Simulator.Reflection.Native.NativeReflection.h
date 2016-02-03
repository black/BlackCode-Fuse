// This file was generated based on 'C:\ProgramData\Uno\Packages\Outracks.Simulator.Reflection.Uno\0.1.0\Native\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_OUTRACKS_SIMULATOR_REFLECTION_NATIVE_NATIVE_REFLECTION_H__
#define __APP_OUTRACKS_SIMULATOR_REFLECTION_NATIVE_NATIVE_REFLECTION_H__

#include <app/Outracks.Simulator.Runtime.IReflection.h>
#include <app/Uno.Object.h>
#include <Uno.h>
namespace app { namespace Outracks { namespace Simulator { namespace Bytecode { struct Signature; } } } }
namespace app { namespace Outracks { namespace Simulator { namespace Bytecode { struct TypeMemberName; } } } }
namespace app { namespace Outracks { namespace Simulator { namespace Bytecode { struct TypeName; } } } }
namespace app { namespace Uno { namespace Collections { struct Dictionary__Outracks_Simulator_Bytecode_TypeName__Uno_Type; } } }

namespace app {
namespace Outracks {
namespace Simulator {
namespace Reflection {
namespace Native {

struct NativeReflection;

struct NativeReflection__uType : ::uClassType
{
    ::app::Outracks::Simulator::Runtime::IReflection __interface_0;
};

NativeReflection__uType* NativeReflection__typeof();

void NativeReflection___ObjInit(NativeReflection* __this, ::app::Uno::Collections::Dictionary__Outracks_Simulator_Bytecode_TypeName__Uno_Type* typeDict);
::uString* NativeReflection__GetObjectTypesString(NativeReflection* __this, ::uArray* arguments);
::uObject* NativeReflection__GetStaticFieldValue(NativeReflection* __this, ::uType* type, ::app::Outracks::Simulator::Bytecode::TypeMemberName* fieldName);
::uObject* NativeReflection__GetStaticPropertyValue(NativeReflection* __this, ::uType* type, ::app::Outracks::Simulator::Bytecode::TypeMemberName* propName);
NativeReflection* NativeReflection__New_1(::uStatic* __this, ::app::Uno::Collections::Dictionary__Outracks_Simulator_Bytecode_TypeName__Uno_Type* typeDict);
void NativeReflection__Outracks_Simulator_Runtime_IReflection_AddEventHandler(NativeReflection* __this, ::uObject* instance, ::app::Outracks::Simulator::Bytecode::TypeMemberName* member, ::uObject* handlerDelegate);
::uObject* NativeReflection__Outracks_Simulator_Runtime_IReflection_CallDynamic(NativeReflection* __this, ::uObject* instance, ::app::Outracks::Simulator::Bytecode::TypeMemberName* methodName, ::uArray* arguments);
::uObject* NativeReflection__Outracks_Simulator_Runtime_IReflection_CallStatic(NativeReflection* __this, ::app::Outracks::Simulator::Bytecode::TypeName* typeName, ::app::Outracks::Simulator::Bytecode::TypeMemberName* methodName, ::uArray* arguments);
::uObject* NativeReflection__Outracks_Simulator_Runtime_IReflection_CreateDelegate(NativeReflection* __this, ::app::Outracks::Simulator::Bytecode::TypeName* delegateType, ::uObject* instance, ::app::Outracks::Simulator::Bytecode::TypeMemberName* methodName, ::app::Outracks::Simulator::Bytecode::Signature* methodSignature);
::uObject* NativeReflection__Outracks_Simulator_Runtime_IReflection_GetEnumValue(NativeReflection* __this, ::app::Outracks::Simulator::Bytecode::TypeName* enumType, ::app::Outracks::Simulator::Bytecode::TypeMemberName* valueName);
::uObject* NativeReflection__Outracks_Simulator_Runtime_IReflection_GetPropertyValue(NativeReflection* __this, ::uObject* instance, ::app::Outracks::Simulator::Bytecode::TypeMemberName* propertyName);
::uObject* NativeReflection__Outracks_Simulator_Runtime_IReflection_GetStaticPropertyOrFieldValue(NativeReflection* __this, ::app::Outracks::Simulator::Bytecode::TypeName* typeName, ::app::Outracks::Simulator::Bytecode::TypeMemberName* memberName);
::uObject* NativeReflection__Outracks_Simulator_Runtime_IReflection_Instantiate(NativeReflection* __this, ::app::Outracks::Simulator::Bytecode::TypeName* typeName, ::uArray* args);
bool NativeReflection__Outracks_Simulator_Runtime_IReflection_IsSubtype(NativeReflection* __this, ::uObject* obj, ::app::Outracks::Simulator::Bytecode::TypeName* typeName);
bool NativeReflection__Outracks_Simulator_Runtime_IReflection_IsType(NativeReflection* __this, ::uObject* obj, ::app::Outracks::Simulator::Bytecode::TypeName* typeName);
void NativeReflection__Outracks_Simulator_Runtime_IReflection_RemoveEventHandler(NativeReflection* __this, ::uObject* instance, ::app::Outracks::Simulator::Bytecode::TypeMemberName* member, ::uObject* handlerDelegate);
void NativeReflection__Outracks_Simulator_Runtime_IReflection_SetPropertyValue(NativeReflection* __this, ::uObject* instance, ::app::Outracks::Simulator::Bytecode::TypeMemberName* propertyName, ::uObject* value);

struct NativeReflection : ::uObject
{
    void _ObjInit(::app::Uno::Collections::Dictionary__Outracks_Simulator_Bytecode_TypeName__Uno_Type* typeDict) { NativeReflection___ObjInit(this, typeDict); }
    ::uString* GetObjectTypesString(::uArray* arguments) { return NativeReflection__GetObjectTypesString(this, arguments); }
    ::uObject* GetStaticFieldValue(::uType* type, ::app::Outracks::Simulator::Bytecode::TypeMemberName* fieldName) { return NativeReflection__GetStaticFieldValue(this, type, fieldName); }
    ::uObject* GetStaticPropertyValue(::uType* type, ::app::Outracks::Simulator::Bytecode::TypeMemberName* propName) { return NativeReflection__GetStaticPropertyValue(this, type, propName); }
};

}}}}}


#endif
