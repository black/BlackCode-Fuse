// This file was generated based on 'C:\ProgramData\Uno\Packages\Outracks.Simulator.Reflection.Uno\0.1.0\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_OUTRACKS_SIMULATOR_REFLECTION_DELEGATE_REFLECTION_H__
#define __APP_OUTRACKS_SIMULATOR_REFLECTION_DELEGATE_REFLECTION_H__

#include <app/Outracks.Simulator.Runtime.IReflection.h>
#include <app/Uno.Object.h>
#include <Uno.h>
namespace app { namespace Outracks { namespace Simulator { namespace Bytecode { struct Parameter; } } } }
namespace app { namespace Outracks { namespace Simulator { namespace Bytecode { struct Signature; } } } }
namespace app { namespace Outracks { namespace Simulator { namespace Bytecode { struct TypeMemberName; } } } }
namespace app { namespace Outracks { namespace Simulator { namespace Bytecode { struct TypeName; } } } }

namespace app {
namespace Outracks {
namespace Simulator {
namespace Reflection {

struct DelegateReflection;

struct DelegateReflection__uType : ::uClassType
{
    ::app::Outracks::Simulator::Runtime::IReflection __interface_0;
};

DelegateReflection__uType* DelegateReflection__typeof();

void DelegateReflection___ObjInit(DelegateReflection* __this);
DelegateReflection* DelegateReflection__New_1(::uStatic* __this);
void DelegateReflection__Outracks_Simulator_Runtime_IReflection_AddEventHandler(DelegateReflection* __this, ::uObject* instance, ::app::Outracks::Simulator::Bytecode::TypeMemberName* member, ::uObject* handlerDelegate);
::uObject* DelegateReflection__Outracks_Simulator_Runtime_IReflection_CallDynamic(DelegateReflection* __this, ::uObject* instance, ::app::Outracks::Simulator::Bytecode::TypeMemberName* methodName, ::uArray* arguments);
::uObject* DelegateReflection__Outracks_Simulator_Runtime_IReflection_CallStatic(DelegateReflection* __this, ::app::Outracks::Simulator::Bytecode::TypeName* typeName, ::app::Outracks::Simulator::Bytecode::TypeMemberName* methodName, ::uArray* arguments);
::uObject* DelegateReflection__Outracks_Simulator_Runtime_IReflection_CreateDelegate(DelegateReflection* __this, ::app::Outracks::Simulator::Bytecode::TypeName* delegateType, ::uObject* instance, ::app::Outracks::Simulator::Bytecode::TypeMemberName* methodName, ::app::Outracks::Simulator::Bytecode::Signature* methodSignature);
::uObject* DelegateReflection__Outracks_Simulator_Runtime_IReflection_GetEnumValue(DelegateReflection* __this, ::app::Outracks::Simulator::Bytecode::TypeName* enumType, ::app::Outracks::Simulator::Bytecode::TypeMemberName* valueName);
::uObject* DelegateReflection__Outracks_Simulator_Runtime_IReflection_GetPropertyValue(DelegateReflection* __this, ::uObject* instance, ::app::Outracks::Simulator::Bytecode::TypeMemberName* propertyName);
::uObject* DelegateReflection__Outracks_Simulator_Runtime_IReflection_GetStaticPropertyOrFieldValue(DelegateReflection* __this, ::app::Outracks::Simulator::Bytecode::TypeName* typeName, ::app::Outracks::Simulator::Bytecode::TypeMemberName* memberName);
::uObject* DelegateReflection__Outracks_Simulator_Runtime_IReflection_Instantiate(DelegateReflection* __this, ::app::Outracks::Simulator::Bytecode::TypeName* typeName, ::uArray* args);
bool DelegateReflection__Outracks_Simulator_Runtime_IReflection_IsSubtype(DelegateReflection* __this, ::uObject* obj, ::app::Outracks::Simulator::Bytecode::TypeName* typeName);
bool DelegateReflection__Outracks_Simulator_Runtime_IReflection_IsType(DelegateReflection* __this, ::uObject* obj, ::app::Outracks::Simulator::Bytecode::TypeName* typeName);
void DelegateReflection__Outracks_Simulator_Runtime_IReflection_RemoveEventHandler(DelegateReflection* __this, ::uObject* instance, ::app::Outracks::Simulator::Bytecode::TypeMemberName* member, ::uObject* handlerDelegate);
void DelegateReflection__Outracks_Simulator_Runtime_IReflection_SetPropertyValue(DelegateReflection* __this, ::uObject* instance, ::app::Outracks::Simulator::Bytecode::TypeMemberName* propertyName, ::uObject* value);
::uString* DelegateReflection__SelectFullName(::uStatic* __this, ::app::Outracks::Simulator::Bytecode::Parameter* tn);

struct DelegateReflection : ::uObject
{
    ::uStrong< ::uDelegate*> CallDynamic;
    ::uStrong< ::uDelegate*> CallStatic;
    ::uStrong< ::uDelegate*> SetPropertyValue;
    ::uStrong< ::uDelegate*> GetPropertyValue;
    ::uStrong< ::uDelegate*> GetStaticPropertyOrFieldValue;
    ::uStrong< ::uDelegate*> CreateDelegate;
    ::uStrong< ::uDelegate*> AddEventHandler;
    ::uStrong< ::uDelegate*> RemoveEventHandler;
    ::uStrong< ::uDelegate*> Instantiate;
    ::uStrong< ::uDelegate*> IsSubtype;
    ::uStrong< ::uDelegate*> IsType;
    ::uStrong< ::uDelegate*> GetEnumValue;

    void _ObjInit() { DelegateReflection___ObjInit(this); }
};

}}}}


#endif
