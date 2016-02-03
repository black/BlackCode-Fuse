// This file was generated based on 'C:\Users\Kuro\Documents\Fuse\Android UX\.build\Simulator\Android\Preamble\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#include <_root.WeakDictionary-2.h>
#include <Outracks.Simulator.Bytecode.TypeName.h>
#include <Outracks.Simulator.Runtime.SimulatedObjectTypeRegistry.h>
#include <Uno.Bool.h>
#include <Uno.Collections.Dictionary-2.h>
#include <Uno.String.h>
static uType* TYPES[3];

namespace g{
namespace Outracks{
namespace Simulator{
namespace Runtime{

// public sealed class SimulatedObjectTypeRegistry :188
// {
// static SimulatedObjectTypeRegistry() :188
static void SimulatedObjectTypeRegistry__cctor__fn(uType* __type)
{
    SimulatedObjectTypeRegistry::SimulatedObjectTypes_ = ((::g::WeakDictionary*)::g::WeakDictionary::New1(::TYPES[0/*WeakDictionary<object, Outracks.Simulator.Bytecode.TypeName>*/]));
    SimulatedObjectTypeRegistry::BaseTypes_ = ((::g::Uno::Collections::Dictionary*)::g::Uno::Collections::Dictionary::New1(::TYPES[1/*Uno.Collections.Dictionary<Outracks.Simulator.Bytecode.TypeName, Outracks.Simulator.Bytecode.TypeName>*/]));
}

uType* SimulatedObjectTypeRegistry_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 2;
    options.ObjectSize = sizeof(SimulatedObjectTypeRegistry);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Outracks.Simulator.Runtime.SimulatedObjectTypeRegistry", options);
    type->fp_ctor_ = (void*)SimulatedObjectTypeRegistry__New1_fn;
    type->fp_cctor_ = SimulatedObjectTypeRegistry__cctor__fn;
    ::TYPES[0] = ::g::WeakDictionary_typeof()->MakeType(uObject_typeof(), ::g::Outracks::Simulator::Bytecode::TypeName_typeof());
    ::TYPES[1] = ::g::Uno::Collections::Dictionary_typeof()->MakeType(::g::Outracks::Simulator::Bytecode::TypeName_typeof(), ::g::Outracks::Simulator::Bytecode::TypeName_typeof());
    ::TYPES[2] = ::g::Uno::Bool_typeof();
    type->SetFields(0,
        ::g::Uno::Collections::Dictionary_typeof()->MakeType(::g::Outracks::Simulator::Bytecode::TypeName_typeof(), ::g::Outracks::Simulator::Bytecode::TypeName_typeof()), (uintptr_t)&::g::Outracks::Simulator::Runtime::SimulatedObjectTypeRegistry::BaseTypes_, uFieldFlagsStatic,
        ::g::WeakDictionary_typeof()->MakeType(uObject_typeof(), ::g::Outracks::Simulator::Bytecode::TypeName_typeof()), (uintptr_t)&::g::Outracks::Simulator::Runtime::SimulatedObjectTypeRegistry::SimulatedObjectTypes_, uFieldFlagsStatic);
    type->Reflection.SetFunctions(4,
        new uFunction("IsSimulatedType", NULL, (void*)SimulatedObjectTypeRegistry__IsSimulatedType_fn, 0, true, ::g::Uno::Bool_typeof(), 2, uObject_typeof(), ::g::Uno::String_typeof()),
        new uFunction(".ctor", NULL, (void*)SimulatedObjectTypeRegistry__New1_fn, 0, true, SimulatedObjectTypeRegistry_typeof(), 0),
        new uFunction("RegisterSimulatedObject", NULL, (void*)SimulatedObjectTypeRegistry__RegisterSimulatedObject_fn, 0, true, uVoid_typeof(), 2, uObject_typeof(), ::g::Uno::String_typeof()),
        new uFunction("RegisterSimulatedType", NULL, (void*)SimulatedObjectTypeRegistry__RegisterSimulatedType_fn, 0, true, uVoid_typeof(), 2, ::g::Uno::String_typeof(), ::g::Uno::String_typeof()));
    return type;
}

// public generated SimulatedObjectTypeRegistry() :188
void SimulatedObjectTypeRegistry__ctor__fn(SimulatedObjectTypeRegistry* __this)
{
    __this->ctor_();
}

// public static bool IsSimulatedType(object obj, string typeNameString) :196
void SimulatedObjectTypeRegistry__IsSimulatedType_fn(uObject* obj, uString* typeNameString, bool* __retval)
{
    *__retval = SimulatedObjectTypeRegistry::IsSimulatedType(obj, typeNameString);
}

// public generated SimulatedObjectTypeRegistry New() :188
void SimulatedObjectTypeRegistry__New1_fn(SimulatedObjectTypeRegistry** __retval)
{
    *__retval = SimulatedObjectTypeRegistry::New1();
}

// public static void RegisterSimulatedObject(object obj, string typeName) :220
void SimulatedObjectTypeRegistry__RegisterSimulatedObject_fn(uObject* obj, uString* typeName)
{
    SimulatedObjectTypeRegistry::RegisterSimulatedObject(obj, typeName);
}

// public static void RegisterSimulatedType(string typeName, string baseTypeName) :190
void SimulatedObjectTypeRegistry__RegisterSimulatedType_fn(uString* typeName, uString* baseTypeName)
{
    SimulatedObjectTypeRegistry::RegisterSimulatedType(typeName, baseTypeName);
}

// private static bool TryGetSimulatedType(object obj, Outracks.Simulator.Bytecode.TypeName& type) :226
void SimulatedObjectTypeRegistry__TryGetSimulatedType_fn(uObject* obj, ::g::Outracks::Simulator::Bytecode::TypeName** type, bool* __retval)
{
    *__retval = SimulatedObjectTypeRegistry::TryGetSimulatedType(obj, type);
}

uSStrong< ::g::Uno::Collections::Dictionary*> SimulatedObjectTypeRegistry::BaseTypes_;
uSStrong< ::g::WeakDictionary*> SimulatedObjectTypeRegistry::SimulatedObjectTypes_;

// public generated SimulatedObjectTypeRegistry() [instance] :188
void SimulatedObjectTypeRegistry::ctor_()
{
}

// public static bool IsSimulatedType(object obj, string typeNameString) [static] :196
bool SimulatedObjectTypeRegistry::IsSimulatedType(uObject* obj, uString* typeNameString)
{
    SimulatedObjectTypeRegistry_typeof()->Init();
    bool ret2;
    ::g::Outracks::Simulator::Bytecode::TypeName* typeToBe = ::g::Outracks::Simulator::Bytecode::TypeName::Parse(typeNameString);
    ::g::Outracks::Simulator::Bytecode::TypeName* type = NULL;

    if (!SimulatedObjectTypeRegistry::TryGetSimulatedType(obj, &type))
        return false;

    if (::g::Outracks::Simulator::Bytecode::TypeName::op_Equality(type, typeToBe))
        return true;

    ::g::Outracks::Simulator::Bytecode::TypeName* baseType = NULL;

    while ((::g::Uno::Collections::Dictionary__TryGetValue_fn(uPtr(SimulatedObjectTypeRegistry::BaseTypes()), type, (void**)(&baseType), &ret2), ret2))
    {
        if (::g::Outracks::Simulator::Bytecode::TypeName::op_Equality(type, typeToBe))
            return true;

        type = baseType;
    }

    return false;
}

// public generated SimulatedObjectTypeRegistry New() [static] :188
SimulatedObjectTypeRegistry* SimulatedObjectTypeRegistry::New1()
{
    SimulatedObjectTypeRegistry* obj1 = (SimulatedObjectTypeRegistry*)uNew(SimulatedObjectTypeRegistry_typeof());
    obj1->ctor_();
    return obj1;
}

// public static void RegisterSimulatedObject(object obj, string typeName) [static] :220
void SimulatedObjectTypeRegistry::RegisterSimulatedObject(uObject* obj, uString* typeName)
{
    SimulatedObjectTypeRegistry_typeof()->Init();
    ::g::WeakDictionary__set_Item_fn(uPtr(SimulatedObjectTypeRegistry::SimulatedObjectTypes()), obj, ::g::Outracks::Simulator::Bytecode::TypeName::Parse(typeName));
}

// public static void RegisterSimulatedType(string typeName, string baseTypeName) [static] :190
void SimulatedObjectTypeRegistry::RegisterSimulatedType(uString* typeName, uString* baseTypeName)
{
    SimulatedObjectTypeRegistry_typeof()->Init();
    ::g::Uno::Collections::Dictionary__Add_fn(uPtr(SimulatedObjectTypeRegistry::BaseTypes()), ::g::Outracks::Simulator::Bytecode::TypeName::Parse(typeName), ::g::Outracks::Simulator::Bytecode::TypeName::Parse(baseTypeName));
}

// private static bool TryGetSimulatedType(object obj, Outracks.Simulator.Bytecode.TypeName& type) [static] :226
bool SimulatedObjectTypeRegistry::TryGetSimulatedType(uObject* obj, ::g::Outracks::Simulator::Bytecode::TypeName** type)
{
    SimulatedObjectTypeRegistry_typeof()->Init();
    bool ret3;
    return (::g::WeakDictionary__TryGetValue_fn(uPtr(SimulatedObjectTypeRegistry::SimulatedObjectTypes()), obj, (void**)type, &ret3), ret3);
}
// }

}}}} // ::g::Outracks::Simulator::Runtime
