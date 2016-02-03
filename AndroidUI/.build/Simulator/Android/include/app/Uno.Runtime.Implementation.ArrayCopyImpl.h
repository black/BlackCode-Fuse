// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Runtime\Implementation\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_UNO_RUNTIME_IMPLEMENTATION_ARRAY_COPY_IMPL_H__
#define __APP_UNO_RUNTIME_IMPLEMENTATION_ARRAY_COPY_IMPL_H__

#include <Uno.h>
namespace app { namespace Outracks { namespace Simulator { namespace Bytecode { struct BindVariable; } } } }
namespace app { namespace Outracks { namespace Simulator { namespace Bytecode { struct Expression; } } } }
namespace app { namespace Outracks { namespace Simulator { namespace Bytecode { struct Parameter; } } } }
namespace app { namespace Outracks { namespace Simulator { namespace Bytecode { struct Statement; } } } }
namespace app { namespace Outracks { namespace Simulator { namespace Bytecode { struct TypeName; } } } }
namespace app { namespace Outracks { namespace Simulator { namespace Protocol { struct ExceptionInfo; } } } }
namespace app { namespace Uno { struct Exception; } }

namespace app {
namespace Uno {
namespace Runtime {
namespace Implementation {

struct ArrayCopyImpl__uType : ::uClassType
{
};

ArrayCopyImpl__uType* ArrayCopyImpl__typeof();

void ArrayCopyImpl__Copy__byte(::uStatic* __this, ::uArray* sourceArray, int sourceIndex, ::uArray* destinationArray, int destinationIndex, int length);
void ArrayCopyImpl__Copy__char(::uStatic* __this, ::uArray* sourceArray, int sourceIndex, ::uArray* destinationArray, int destinationIndex, int length);
void ArrayCopyImpl__Copy__Outracks_Simulator_Bytecode_BindVariable(::uStatic* __this, ::uArray* sourceArray, int sourceIndex, ::uArray* destinationArray, int destinationIndex, int length);
void ArrayCopyImpl__Copy__Outracks_Simulator_Bytecode_Expression(::uStatic* __this, ::uArray* sourceArray, int sourceIndex, ::uArray* destinationArray, int destinationIndex, int length);
void ArrayCopyImpl__Copy__Outracks_Simulator_Bytecode_Parameter(::uStatic* __this, ::uArray* sourceArray, int sourceIndex, ::uArray* destinationArray, int destinationIndex, int length);
void ArrayCopyImpl__Copy__Outracks_Simulator_Bytecode_Statement(::uStatic* __this, ::uArray* sourceArray, int sourceIndex, ::uArray* destinationArray, int destinationIndex, int length);
void ArrayCopyImpl__Copy__Outracks_Simulator_Bytecode_TypeName(::uStatic* __this, ::uArray* sourceArray, int sourceIndex, ::uArray* destinationArray, int destinationIndex, int length);
void ArrayCopyImpl__Copy__Outracks_Simulator_Protocol_ExceptionInfo(::uStatic* __this, ::uArray* sourceArray, int sourceIndex, ::uArray* destinationArray, int destinationIndex, int length);
void ArrayCopyImpl__Copy__string(::uStatic* __this, ::uArray* sourceArray, int sourceIndex, ::uArray* destinationArray, int destinationIndex, int length);
void ArrayCopyImpl__Copy__Uno_Exception(::uStatic* __this, ::uArray* sourceArray, int sourceIndex, ::uArray* destinationArray, int destinationIndex, int length);
void ArrayCopyImpl__ValidateArguments__byte(::uStatic* __this, ::uArray* sourceArray, int sourceIndex, ::uArray* destinationArray, int destinationIndex, int length);
void ArrayCopyImpl__ValidateArguments__char(::uStatic* __this, ::uArray* sourceArray, int sourceIndex, ::uArray* destinationArray, int destinationIndex, int length);
void ArrayCopyImpl__ValidateArguments__Outracks_Simulator_Bytecode_BindVariable(::uStatic* __this, ::uArray* sourceArray, int sourceIndex, ::uArray* destinationArray, int destinationIndex, int length);
void ArrayCopyImpl__ValidateArguments__Outracks_Simulator_Bytecode_Expression(::uStatic* __this, ::uArray* sourceArray, int sourceIndex, ::uArray* destinationArray, int destinationIndex, int length);
void ArrayCopyImpl__ValidateArguments__Outracks_Simulator_Bytecode_Parameter(::uStatic* __this, ::uArray* sourceArray, int sourceIndex, ::uArray* destinationArray, int destinationIndex, int length);
void ArrayCopyImpl__ValidateArguments__Outracks_Simulator_Bytecode_Statement(::uStatic* __this, ::uArray* sourceArray, int sourceIndex, ::uArray* destinationArray, int destinationIndex, int length);
void ArrayCopyImpl__ValidateArguments__Outracks_Simulator_Bytecode_TypeName(::uStatic* __this, ::uArray* sourceArray, int sourceIndex, ::uArray* destinationArray, int destinationIndex, int length);
void ArrayCopyImpl__ValidateArguments__Outracks_Simulator_Protocol_ExceptionInfo(::uStatic* __this, ::uArray* sourceArray, int sourceIndex, ::uArray* destinationArray, int destinationIndex, int length);
void ArrayCopyImpl__ValidateArguments__string(::uStatic* __this, ::uArray* sourceArray, int sourceIndex, ::uArray* destinationArray, int destinationIndex, int length);
void ArrayCopyImpl__ValidateArguments__Uno_Exception(::uStatic* __this, ::uArray* sourceArray, int sourceIndex, ::uArray* destinationArray, int destinationIndex, int length);

}}}}


#endif
