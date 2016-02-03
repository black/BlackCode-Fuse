// This file was generated based on 'C:\ProgramData\Uno\Packages\Outracks.Simulator.Reflection.Uno\0.1.0\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_OUTRACKS_SIMULATOR_RUNTIME_I_REFLECTION_H__
#define __APP_OUTRACKS_SIMULATOR_RUNTIME_I_REFLECTION_H__

#include <app/Uno.Object.h>
#include <Uno.h>
namespace app { namespace Outracks { namespace Simulator { namespace Bytecode { struct Signature; } } } }
namespace app { namespace Outracks { namespace Simulator { namespace Bytecode { struct TypeMemberName; } } } }
namespace app { namespace Outracks { namespace Simulator { namespace Bytecode { struct TypeName; } } } }

namespace app {
namespace Outracks {
namespace Simulator {
namespace Runtime {

::uInterfaceType* IReflection__typeof();

struct IReflection
{
    void(*__fp_AddEventHandler)(void*, ::uObject*, ::app::Outracks::Simulator::Bytecode::TypeMemberName*, ::uObject*);
    ::uObject*(*__fp_CallDynamic)(void*, ::uObject*, ::app::Outracks::Simulator::Bytecode::TypeMemberName*, ::uArray*);
    ::uObject*(*__fp_CallStatic)(void*, ::app::Outracks::Simulator::Bytecode::TypeName*, ::app::Outracks::Simulator::Bytecode::TypeMemberName*, ::uArray*);
    ::uObject*(*__fp_CreateDelegate)(void*, ::app::Outracks::Simulator::Bytecode::TypeName*, ::uObject*, ::app::Outracks::Simulator::Bytecode::TypeMemberName*, ::app::Outracks::Simulator::Bytecode::Signature*);
    ::uObject*(*__fp_GetEnumValue)(void*, ::app::Outracks::Simulator::Bytecode::TypeName*, ::app::Outracks::Simulator::Bytecode::TypeMemberName*);
    ::uObject*(*__fp_GetPropertyValue)(void*, ::uObject*, ::app::Outracks::Simulator::Bytecode::TypeMemberName*);
    ::uObject*(*__fp_GetStaticPropertyOrFieldValue)(void*, ::app::Outracks::Simulator::Bytecode::TypeName*, ::app::Outracks::Simulator::Bytecode::TypeMemberName*);
    ::uObject*(*__fp_Instantiate)(void*, ::app::Outracks::Simulator::Bytecode::TypeName*, ::uArray*);
    bool(*__fp_IsSubtype)(void*, ::uObject*, ::app::Outracks::Simulator::Bytecode::TypeName*);
    bool(*__fp_IsType)(void*, ::uObject*, ::app::Outracks::Simulator::Bytecode::TypeName*);
    void(*__fp_RemoveEventHandler)(void*, ::uObject*, ::app::Outracks::Simulator::Bytecode::TypeMemberName*, ::uObject*);
    void(*__fp_SetPropertyValue)(void*, ::uObject*, ::app::Outracks::Simulator::Bytecode::TypeMemberName*, ::uObject*);

    static void AddEventHandler(::uObject* __this, ::uObject* instance, ::app::Outracks::Simulator::Bytecode::TypeMemberName* member, ::uObject* handlerDelegate) { ((IReflection*)uGetInterfacePtr(__this, IReflection__typeof()))->__fp_AddEventHandler((::uByte*)__this + (__this->__obj_type->TypeType == uTypeTypeStruct ? sizeof(::uObject) : 0), instance, member, handlerDelegate); }
    static ::uObject* CallDynamic(::uObject* __this, ::uObject* instance, ::app::Outracks::Simulator::Bytecode::TypeMemberName* methodName, ::uArray* arguments) { return ((IReflection*)uGetInterfacePtr(__this, IReflection__typeof()))->__fp_CallDynamic((::uByte*)__this + (__this->__obj_type->TypeType == uTypeTypeStruct ? sizeof(::uObject) : 0), instance, methodName, arguments); }
    static ::uObject* CallStatic(::uObject* __this, ::app::Outracks::Simulator::Bytecode::TypeName* typeName, ::app::Outracks::Simulator::Bytecode::TypeMemberName* methodName, ::uArray* arguments) { return ((IReflection*)uGetInterfacePtr(__this, IReflection__typeof()))->__fp_CallStatic((::uByte*)__this + (__this->__obj_type->TypeType == uTypeTypeStruct ? sizeof(::uObject) : 0), typeName, methodName, arguments); }
    static ::uObject* CreateDelegate(::uObject* __this, ::app::Outracks::Simulator::Bytecode::TypeName* delegateType, ::uObject* instance, ::app::Outracks::Simulator::Bytecode::TypeMemberName* methodName, ::app::Outracks::Simulator::Bytecode::Signature* methodSignature) { return ((IReflection*)uGetInterfacePtr(__this, IReflection__typeof()))->__fp_CreateDelegate((::uByte*)__this + (__this->__obj_type->TypeType == uTypeTypeStruct ? sizeof(::uObject) : 0), delegateType, instance, methodName, methodSignature); }
    static ::uObject* GetEnumValue(::uObject* __this, ::app::Outracks::Simulator::Bytecode::TypeName* enumType, ::app::Outracks::Simulator::Bytecode::TypeMemberName* valueName) { return ((IReflection*)uGetInterfacePtr(__this, IReflection__typeof()))->__fp_GetEnumValue((::uByte*)__this + (__this->__obj_type->TypeType == uTypeTypeStruct ? sizeof(::uObject) : 0), enumType, valueName); }
    static ::uObject* GetPropertyValue(::uObject* __this, ::uObject* instance, ::app::Outracks::Simulator::Bytecode::TypeMemberName* propertyName) { return ((IReflection*)uGetInterfacePtr(__this, IReflection__typeof()))->__fp_GetPropertyValue((::uByte*)__this + (__this->__obj_type->TypeType == uTypeTypeStruct ? sizeof(::uObject) : 0), instance, propertyName); }
    static ::uObject* GetStaticPropertyOrFieldValue(::uObject* __this, ::app::Outracks::Simulator::Bytecode::TypeName* typeName, ::app::Outracks::Simulator::Bytecode::TypeMemberName* memberName) { return ((IReflection*)uGetInterfacePtr(__this, IReflection__typeof()))->__fp_GetStaticPropertyOrFieldValue((::uByte*)__this + (__this->__obj_type->TypeType == uTypeTypeStruct ? sizeof(::uObject) : 0), typeName, memberName); }
    static ::uObject* Instantiate(::uObject* __this, ::app::Outracks::Simulator::Bytecode::TypeName* typeName, ::uArray* args) { return ((IReflection*)uGetInterfacePtr(__this, IReflection__typeof()))->__fp_Instantiate((::uByte*)__this + (__this->__obj_type->TypeType == uTypeTypeStruct ? sizeof(::uObject) : 0), typeName, args); }
    static bool IsSubtype(::uObject* __this, ::uObject* obj, ::app::Outracks::Simulator::Bytecode::TypeName* typeName) { return ((IReflection*)uGetInterfacePtr(__this, IReflection__typeof()))->__fp_IsSubtype((::uByte*)__this + (__this->__obj_type->TypeType == uTypeTypeStruct ? sizeof(::uObject) : 0), obj, typeName); }
    static bool IsType(::uObject* __this, ::uObject* obj, ::app::Outracks::Simulator::Bytecode::TypeName* typeName) { return ((IReflection*)uGetInterfacePtr(__this, IReflection__typeof()))->__fp_IsType((::uByte*)__this + (__this->__obj_type->TypeType == uTypeTypeStruct ? sizeof(::uObject) : 0), obj, typeName); }
    static void RemoveEventHandler(::uObject* __this, ::uObject* instance, ::app::Outracks::Simulator::Bytecode::TypeMemberName* member, ::uObject* handlerDelegate) { ((IReflection*)uGetInterfacePtr(__this, IReflection__typeof()))->__fp_RemoveEventHandler((::uByte*)__this + (__this->__obj_type->TypeType == uTypeTypeStruct ? sizeof(::uObject) : 0), instance, member, handlerDelegate); }
    static void SetPropertyValue(::uObject* __this, ::uObject* instance, ::app::Outracks::Simulator::Bytecode::TypeMemberName* propertyName, ::uObject* value) { ((IReflection*)uGetInterfacePtr(__this, IReflection__typeof()))->__fp_SetPropertyValue((::uByte*)__this + (__this->__obj_type->TypeType == uTypeTypeStruct ? sizeof(::uObject) : 0), instance, propertyName, value); }
};

}}}}


#endif
