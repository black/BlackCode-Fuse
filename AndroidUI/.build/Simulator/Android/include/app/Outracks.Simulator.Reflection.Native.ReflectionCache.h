// This file was generated based on 'C:\ProgramData\Uno\Packages\Outracks.Simulator.Reflection.Uno\0.1.0\Native\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_OUTRACKS_SIMULATOR_REFLECTION_NATIVE_REFLECTION_CACHE_H__
#define __APP_OUTRACKS_SIMULATOR_REFLECTION_NATIVE_REFLECTION_CACHE_H__

#include <Uno.h>
namespace app { namespace Outracks { namespace Simulator { namespace Bytecode { struct TypeName; } } } }
namespace app { namespace Uno { namespace Collections { struct Dictionary__Outracks_Simulator_Bytecode_TypeName__Uno_Type; } } }
namespace app { namespace Uno { namespace Collections { struct Dictionary__Uno_Type__Uno_Reflection_CppField__; } } }
namespace app { namespace Uno { namespace Collections { struct Dictionary__Uno_Type__Uno_Reflection_CppFunction__; } } }
namespace app { namespace Uno { namespace Collections { struct List__Uno_Collections_Dictionary_Outracks_Simulator_Bytecode_TypeName_Uno_Type_; } } }

namespace app {
namespace Outracks {
namespace Simulator {
namespace Reflection {
namespace Native {

extern ::uStaticStrong< ::app::Uno::Collections::Dictionary__Uno_Type__Uno_Reflection_CppField__*> ReflectionCache___fieldCache;
extern ::uStaticStrong< ::app::Uno::Collections::Dictionary__Uno_Type__Uno_Reflection_CppFunction__*> ReflectionCache___functionCache;
extern ::uStaticStrong< ::app::Uno::Collections::List__Uno_Collections_Dictionary_Outracks_Simulator_Bytecode_TypeName_Uno_Type_*> ReflectionCache___typeCache;

struct ReflectionCache__uType : ::uClassType
{
};

ReflectionCache__uType* ReflectionCache__typeof();

void ReflectionCache___TypeInit(::uStatic* __this);
void ReflectionCache__AddToTypeCache(::uStatic* __this, ::app::Uno::Collections::Dictionary__Outracks_Simulator_Bytecode_TypeName__Uno_Type* typeDictionary);
::uArray* ReflectionCache__GetFields(::uStatic* __this, ::uType* type);
::uArray* ReflectionCache__GetFunctions(::uStatic* __this, ::uType* type);
::uType* ReflectionCache__GetType(::uStatic* __this, ::app::Outracks::Simulator::Bytecode::TypeName* typeName);

}}}}}


#endif
