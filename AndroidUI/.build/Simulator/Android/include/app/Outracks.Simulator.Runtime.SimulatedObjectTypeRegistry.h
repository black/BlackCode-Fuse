// This file was generated based on 'C:\Users\Kuro\Documents\Fuse\Android UI\.build\Simulator\Android\.simulator\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_OUTRACKS_SIMULATOR_RUNTIME_SIMULATED_OBJECT_TYPE_REGISTRY_H__
#define __APP_OUTRACKS_SIMULATOR_RUNTIME_SIMULATED_OBJECT_TYPE_REGISTRY_H__

#include <app/Uno.Object.h>
#include <Uno.h>
namespace app { namespace Outracks { namespace Simulator { namespace Bytecode { struct TypeName; } } } }
namespace app { namespace Uno { namespace Collections { struct Dictionary__Outracks_Simulator_Bytecode_TypeName__Outracks_Simulator_Bytecode_TypeName; } } }
namespace app { struct WeakDictionary__object__Outracks_Simulator_Bytecode_TypeName; }

namespace app {
namespace Outracks {
namespace Simulator {
namespace Runtime {

struct SimulatedObjectTypeRegistry;

extern ::uStaticStrong< ::app::Uno::Collections::Dictionary__Outracks_Simulator_Bytecode_TypeName__Outracks_Simulator_Bytecode_TypeName*> SimulatedObjectTypeRegistry__BaseTypes;
extern ::uStaticStrong< ::app::WeakDictionary__object__Outracks_Simulator_Bytecode_TypeName*> SimulatedObjectTypeRegistry__SimulatedObjectTypes;

struct SimulatedObjectTypeRegistry__uType : ::uClassType
{
};

SimulatedObjectTypeRegistry__uType* SimulatedObjectTypeRegistry__typeof();

void SimulatedObjectTypeRegistry___ObjInit(SimulatedObjectTypeRegistry* __this);
void SimulatedObjectTypeRegistry___TypeInit(::uStatic* __this);
bool SimulatedObjectTypeRegistry__IsSimulatedType(::uStatic* __this, ::uObject* obj, ::uString* typeNameString);
SimulatedObjectTypeRegistry* SimulatedObjectTypeRegistry__New_1(::uStatic* __this);
void SimulatedObjectTypeRegistry__RegisterSimulatedObject(::uStatic* __this, ::uObject* obj, ::uString* typeName);
void SimulatedObjectTypeRegistry__RegisterSimulatedType(::uStatic* __this, ::uString* typeName, ::uString* baseTypeName);
bool SimulatedObjectTypeRegistry__TryGetSimulatedType(::uStatic* __this, ::uObject* obj, ::app::Outracks::Simulator::Bytecode::TypeName** type);

struct SimulatedObjectTypeRegistry : ::uObject
{
    void _ObjInit() { SimulatedObjectTypeRegistry___ObjInit(this); }
};

}}}}


#endif
