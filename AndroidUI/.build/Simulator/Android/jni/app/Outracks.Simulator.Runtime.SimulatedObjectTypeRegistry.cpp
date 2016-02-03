// This file was generated based on 'C:\Users\Kuro\Documents\Fuse\Android UI\.build\Simulator\Android\.simulator\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#include <app/-.WeakDictionary__object__Outracks_Simulator_Bytecode_TypeName.h>
#include <app/Outracks.Simulator.Bytecode.TypeName.h>
#include <app/Outracks.Simulator.Runtime.SimulatedObjectTypeRegistry.h>
#include <app/Uno.Bool.h>
#include <app/Uno.Collections.Dictionary__Outracks_Simulator_Bytecode_TypeNam-d07ac730.h>
#include <app/Uno.String.h>

namespace app {
namespace Outracks {
namespace Simulator {
namespace Runtime {

::uStaticStrong< ::app::Uno::Collections::Dictionary__Outracks_Simulator_Bytecode_TypeName__Outracks_Simulator_Bytecode_TypeName*> SimulatedObjectTypeRegistry__BaseTypes;
::uStaticStrong< ::app::WeakDictionary__object__Outracks_Simulator_Bytecode_TypeName*> SimulatedObjectTypeRegistry__SimulatedObjectTypes;

SimulatedObjectTypeRegistry__uType* SimulatedObjectTypeRegistry__typeof()
{
    static ::uStaticStrong<SimulatedObjectTypeRegistry__uType*> type;
    if (type != NULL) return type;

    type = (SimulatedObjectTypeRegistry__uType*)::uAllocClassType(sizeof(SimulatedObjectTypeRegistry__uType), "Outracks.Simulator.Runtime.SimulatedObjectTypeRegistry", false, 0, 0, 0);

    type->SetFields(2,
        ::uNewField("BaseTypes", &SimulatedObjectTypeRegistry__BaseTypes, 0, ::app::Uno::Collections::Dictionary__Outracks_Simulator_Bytecode_TypeName__Outracks_Simulator_Bytecode_TypeName__typeof()),
        ::uNewField("SimulatedObjectTypes", &SimulatedObjectTypeRegistry__SimulatedObjectTypes, 0, ::app::WeakDictionary__object__Outracks_Simulator_Bytecode_TypeName__typeof()));

    type->SetFunctions(5,
        ::uNewFunction("IsSimulatedType", SimulatedObjectTypeRegistry__IsSimulatedType, 0, true, ::app::Uno::Bool__typeof(), ::uObject__typeof(), ::app::Uno::String__typeof()),
        ::uNewFunction(".ctor", SimulatedObjectTypeRegistry__New_1, 0, true, SimulatedObjectTypeRegistry__typeof()),
        ::uNewFunctionVoid("RegisterSimulatedObject", SimulatedObjectTypeRegistry__RegisterSimulatedObject, 0, true, ::uObject__typeof(), ::app::Uno::String__typeof()),
        ::uNewFunctionVoid("RegisterSimulatedType", SimulatedObjectTypeRegistry__RegisterSimulatedType, 0, true, ::app::Uno::String__typeof(), ::app::Uno::String__typeof()),
        ::uNewFunction("TryGetSimulatedType", SimulatedObjectTypeRegistry__TryGetSimulatedType, 0, true, ::app::Uno::Bool__typeof(), ::uObject__typeof(), ::app::Outracks::Simulator::Bytecode::TypeName__typeof()));

    ::uRegisterType(type);
    return type;
}

void SimulatedObjectTypeRegistry___ObjInit(SimulatedObjectTypeRegistry* __this)
{
}

void SimulatedObjectTypeRegistry___TypeInit(::uStatic* __this)
{
    SimulatedObjectTypeRegistry__SimulatedObjectTypes = ::app::WeakDictionary__object__Outracks_Simulator_Bytecode_TypeName__New_1(NULL);
    SimulatedObjectTypeRegistry__BaseTypes = ::app::Uno::Collections::Dictionary__Outracks_Simulator_Bytecode_TypeName__Outracks_Simulator_Bytecode_TypeName__New_1(NULL);
}

bool SimulatedObjectTypeRegistry__IsSimulatedType(::uStatic* __this, ::uObject* obj, ::uString* typeNameString)
{
    ::app::Outracks::Simulator::Bytecode::TypeName* typeToBe = ::app::Outracks::Simulator::Bytecode::TypeName__Parse(NULL, typeNameString);
    ::app::Outracks::Simulator::Bytecode::TypeName* type = NULL;

    if (!SimulatedObjectTypeRegistry__TryGetSimulatedType(NULL, obj, &type))
    {
        return false;
    }

    if (::app::Outracks::Simulator::Bytecode::TypeName__op_Equality(NULL, type, typeToBe))
    {
        return true;
    }

    ::app::Outracks::Simulator::Bytecode::TypeName* baseType = NULL;

    while (::uPtr< ::app::Uno::Collections::Dictionary__Outracks_Simulator_Bytecode_TypeName__Outracks_Simulator_Bytecode_TypeName*>(SimulatedObjectTypeRegistry__BaseTypes)->TryGetValue(type, &baseType))
    {
        if (::app::Outracks::Simulator::Bytecode::TypeName__op_Equality(NULL, type, typeToBe))
        {
            return true;
        }

        type = baseType;
    }

    return false;
}

SimulatedObjectTypeRegistry* SimulatedObjectTypeRegistry__New_1(::uStatic* __this)
{
    SimulatedObjectTypeRegistry* inst = (SimulatedObjectTypeRegistry*)::uAllocObject(sizeof(SimulatedObjectTypeRegistry), SimulatedObjectTypeRegistry__typeof());
    inst->_ObjInit();
    return inst;
}

void SimulatedObjectTypeRegistry__RegisterSimulatedObject(::uStatic* __this, ::uObject* obj, ::uString* typeName)
{
    ::uPtr< ::app::WeakDictionary__object__Outracks_Simulator_Bytecode_TypeName*>(SimulatedObjectTypeRegistry__SimulatedObjectTypes)->Item(obj, ::app::Outracks::Simulator::Bytecode::TypeName__Parse(NULL, typeName));
}

void SimulatedObjectTypeRegistry__RegisterSimulatedType(::uStatic* __this, ::uString* typeName, ::uString* baseTypeName)
{
    ::uPtr< ::app::Uno::Collections::Dictionary__Outracks_Simulator_Bytecode_TypeName__Outracks_Simulator_Bytecode_TypeName*>(SimulatedObjectTypeRegistry__BaseTypes)->Add(::app::Outracks::Simulator::Bytecode::TypeName__Parse(NULL, typeName), ::app::Outracks::Simulator::Bytecode::TypeName__Parse(NULL, baseTypeName));
}

bool SimulatedObjectTypeRegistry__TryGetSimulatedType(::uStatic* __this, ::uObject* obj, ::app::Outracks::Simulator::Bytecode::TypeName** type)
{
    return ::uPtr< ::app::WeakDictionary__object__Outracks_Simulator_Bytecode_TypeName*>(SimulatedObjectTypeRegistry__SimulatedObjectTypes)->TryGetValue(obj, type);
}

}}}}
