// This file was generated based on 'C:\ProgramData\Uno\Packages\Outracks.Simulator.Reflection.Uno\0.1.0\Native\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_OUTRACKS_SIMULATOR_REFLECTION_NATIVE_REFLECTION_EXTENSIONS_H__
#define __APP_OUTRACKS_SIMULATOR_REFLECTION_NATIVE_REFLECTION_EXTENSIONS_H__

#include <Uno.h>
namespace app { namespace Outracks { namespace Simulator { namespace Bytecode { struct Signature; } } } }
namespace app { namespace Outracks { namespace Simulator { namespace Bytecode { struct TypeMemberName; } } } }
namespace app { namespace Outracks { namespace Simulator { namespace Bytecode { struct TypeName; } } } }

namespace app {
namespace Outracks {
namespace Simulator {
namespace Reflection {
namespace Native {

extern ::uStaticStrong< ::app::Outracks::Simulator::Bytecode::TypeMemberName*> ReflectionExtensions__ConstructorName;
extern ::uStaticStrong< ::uString*> ReflectionExtensions__EventAdderPrefix;
extern ::uStaticStrong< ::uString*> ReflectionExtensions__EventRemovePrefix;
extern ::uStaticStrong< ::uString*> ReflectionExtensions__PropGetPrefix;
extern ::uStaticStrong< ::uString*> ReflectionExtensions__PropSetPrefix;

struct ReflectionExtensions__uType : ::uClassType
{
};

ReflectionExtensions__uType* ReflectionExtensions__typeof();

void ReflectionExtensions___TypeInit(::uStatic* __this);
bool ReflectionExtensions__CheckArgumentTypes(::uStatic* __this, ::uArray* paramTypes, ::uArray* argumentTypes);
::uFunction* ReflectionExtensions__FindConstructor(::uStatic* __this, ::uType* type, ::uArray* paramTypes);
::uFunction* ReflectionExtensions__FindEventAddFunction(::uStatic* __this, ::uType* type, ::app::Outracks::Simulator::Bytecode::TypeMemberName* typeMemberName, ::uObject* delegateObj);
::uFunction* ReflectionExtensions__FindEventRemoveFunction(::uStatic* __this, ::uType* type, ::app::Outracks::Simulator::Bytecode::TypeMemberName* typeMemberName, ::uObject* delegateObj);
::uField* ReflectionExtensions__FindField(::uStatic* __this, ::uType* type, ::app::Outracks::Simulator::Bytecode::TypeMemberName* fieldName);
::uFunction* ReflectionExtensions__FindFunction(::uStatic* __this, ::uType* type, ::app::Outracks::Simulator::Bytecode::TypeMemberName* memberName, ::uArray* paramTypes);
::uFunction* ReflectionExtensions__FindFunctionOverload(::uStatic* __this, ::uArray* functions, ::uArray* paramTypes);
::uArray* ReflectionExtensions__FindFunctionsByName(::uStatic* __this, ::uType* type, ::app::Outracks::Simulator::Bytecode::TypeMemberName* memberName);
::uFunction* ReflectionExtensions__FindPropertyGetter(::uStatic* __this, ::uType* type, ::app::Outracks::Simulator::Bytecode::TypeMemberName* typeMemberName);
::uFunction* ReflectionExtensions__FindPropertySetter(::uStatic* __this, ::uType* type, ::app::Outracks::Simulator::Bytecode::TypeMemberName* typeMemberName, ::uType* argType);
::uType* ReflectionExtensions__FindType(::uStatic* __this, ::app::Outracks::Simulator::Bytecode::TypeName* typeName);
::uArray* ReflectionExtensions__FindTypes(::uStatic* __this, ::uArray* typeName);
::uArray* ReflectionExtensions__GetParameterTypes(::uStatic* __this, ::app::Outracks::Simulator::Bytecode::Signature* methodSignature);
::uArray* ReflectionExtensions__GetTypes(::uStatic* __this, ::uArray* objects);
bool ReflectionExtensions__Implements(::uStatic* __this, ::uType* type, ::uType* interfaceType);
bool ReflectionExtensions__IsSubtype(::uStatic* __this, ::uType* subType, ::uType* baseType);

}}}}}


#endif
