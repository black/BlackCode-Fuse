// This file was generated based on 'C:\ProgramData\Uno\Packages\Outracks.Simulator.Client.Uno\0.1.0\Runtime\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_OUTRACKS_SIMULATOR_RUNTIME_SCOPE_CLOSURE_H__
#define __APP_OUTRACKS_SIMULATOR_RUNTIME_SCOPE_CLOSURE_H__

#include <app/Uno.Object.h>
#include <Uno.h>
namespace app { namespace Outracks { namespace Simulator { namespace Bytecode { struct AddEventHandler; } } } }
namespace app { namespace Outracks { namespace Simulator { namespace Bytecode { struct BlobLiteral; } } } }
namespace app { namespace Outracks { namespace Simulator { namespace Bytecode { struct BooleanLiteral; } } } }
namespace app { namespace Outracks { namespace Simulator { namespace Bytecode { struct CallDynamicMethod; } } } }
namespace app { namespace Outracks { namespace Simulator { namespace Bytecode { struct CallLambda; } } } }
namespace app { namespace Outracks { namespace Simulator { namespace Bytecode { struct CallStaticMethod; } } } }
namespace app { namespace Outracks { namespace Simulator { namespace Bytecode { struct EnumLiteral; } } } }
namespace app { namespace Outracks { namespace Simulator { namespace Bytecode { struct Expression; } } } }
namespace app { namespace Outracks { namespace Simulator { namespace Bytecode { struct Instantiate; } } } }
namespace app { namespace Outracks { namespace Simulator { namespace Bytecode { struct IsType; } } } }
namespace app { namespace Outracks { namespace Simulator { namespace Bytecode { struct Lambda; } } } }
namespace app { namespace Outracks { namespace Simulator { namespace Bytecode { struct Literal; } } } }
namespace app { namespace Outracks { namespace Simulator { namespace Bytecode { struct LogicalOr; } } } }
namespace app { namespace Outracks { namespace Simulator { namespace Bytecode { struct MethodGroup; } } } }
namespace app { namespace Outracks { namespace Simulator { namespace Bytecode { struct NumberLiteral; } } } }
namespace app { namespace Outracks { namespace Simulator { namespace Bytecode { struct ReadProperty; } } } }
namespace app { namespace Outracks { namespace Simulator { namespace Bytecode { struct ReadStaticField; } } } }
namespace app { namespace Outracks { namespace Simulator { namespace Bytecode { struct ReadVariable; } } } }
namespace app { namespace Outracks { namespace Simulator { namespace Bytecode { struct RemoveEventHandler; } } } }
namespace app { namespace Outracks { namespace Simulator { namespace Bytecode { struct StringLiteral; } } } }
namespace app { namespace Outracks { namespace Simulator { namespace Bytecode { struct WriteProperty; } } } }
namespace app { namespace Outracks { namespace Simulator { namespace Runtime { struct Environment; } } } }
namespace app { namespace Outracks { namespace Simulator { struct ImmutableList__Outracks_Simulator_Bytecode_Expression; } } }

namespace app {
namespace Outracks {
namespace Simulator {
namespace Runtime {

struct ScopeClosure;

struct ScopeClosure__uType : ::uClassType
{
};

ScopeClosure__uType* ScopeClosure__typeof();

void ScopeClosure___ObjInit(ScopeClosure* __this, ::app::Outracks::Simulator::Runtime::Environment* scope, ::uObject* reflection);
::uObject* ScopeClosure__Evaluate(ScopeClosure* __this, ::app::Outracks::Simulator::Bytecode::AddEventHandler* e);
::uObject* ScopeClosure__Evaluate_1(ScopeClosure* __this, ::app::Outracks::Simulator::Bytecode::BlobLiteral* e);
::uObject* ScopeClosure__Evaluate_10(ScopeClosure* __this, ::app::Outracks::Simulator::Bytecode::IsType* t);
::uObject* ScopeClosure__Evaluate_11(ScopeClosure* __this, ::app::Outracks::Simulator::Bytecode::Lambda* p);
::uObject* ScopeClosure__Evaluate_12(ScopeClosure* __this, ::app::Outracks::Simulator::Bytecode::Literal* e);
::uObject* ScopeClosure__Evaluate_13(ScopeClosure* __this, ::app::Outracks::Simulator::Bytecode::LogicalOr* o);
::uObject* ScopeClosure__Evaluate_14(ScopeClosure* __this, ::app::Outracks::Simulator::Bytecode::MethodGroup* g);
::uObject* ScopeClosure__Evaluate_15(ScopeClosure* __this, ::app::Outracks::Simulator::Bytecode::NumberLiteral* l);
::uObject* ScopeClosure__Evaluate_16(ScopeClosure* __this, ::app::Outracks::Simulator::Bytecode::ReadProperty* e);
::uObject* ScopeClosure__Evaluate_17(ScopeClosure* __this, ::app::Outracks::Simulator::Bytecode::ReadStaticField* e);
::uObject* ScopeClosure__Evaluate_18(ScopeClosure* __this, ::app::Outracks::Simulator::Bytecode::ReadVariable* e);
::uObject* ScopeClosure__Evaluate_19(ScopeClosure* __this, ::app::Outracks::Simulator::Bytecode::RemoveEventHandler* e);
::uObject* ScopeClosure__Evaluate_2(ScopeClosure* __this, ::app::Outracks::Simulator::Bytecode::BooleanLiteral* e);
::uObject* ScopeClosure__Evaluate_20(ScopeClosure* __this, ::app::Outracks::Simulator::Bytecode::StringLiteral* e);
::uObject* ScopeClosure__Evaluate_21(ScopeClosure* __this, ::app::Outracks::Simulator::Bytecode::WriteProperty* p);
::uObject* ScopeClosure__Evaluate_3(ScopeClosure* __this, ::app::Outracks::Simulator::Bytecode::CallDynamicMethod* m);
::uObject* ScopeClosure__Evaluate_4(ScopeClosure* __this, ::app::Outracks::Simulator::Bytecode::CallLambda* i);
::uObject* ScopeClosure__Evaluate_5(ScopeClosure* __this, ::app::Outracks::Simulator::Bytecode::CallStaticMethod* m);
::uObject* ScopeClosure__Evaluate_6(ScopeClosure* __this, ::app::Outracks::Simulator::Bytecode::EnumLiteral* i);
::uObject* ScopeClosure__Evaluate_7(ScopeClosure* __this, ::app::Outracks::Simulator::Bytecode::Expression* expression);
::uArray* ScopeClosure__Evaluate_8(ScopeClosure* __this, ::app::Outracks::Simulator::ImmutableList__Outracks_Simulator_Bytecode_Expression* arguments);
::uObject* ScopeClosure__Evaluate_9(ScopeClosure* __this, ::app::Outracks::Simulator::Bytecode::Instantiate* i);
::uObject* ScopeClosure__Execute(ScopeClosure* __this, ::uObject* statements);
::uObject* ScopeClosure__Execute_1(ScopeClosure* __this, ::app::Outracks::Simulator::Bytecode::Lambda* lambda, ::uArray* arguments);
::uObject* ScopeClosure__Execute_2(ScopeClosure* __this, ::uObject* lambda, ::uArray* arguments);
ScopeClosure* ScopeClosure__New_1(::uStatic* __this, ::app::Outracks::Simulator::Runtime::Environment* scope, ::uObject* reflection);

struct ScopeClosure : ::uObject
{
    ::uStrong< ::app::Outracks::Simulator::Runtime::Environment*> _scope;
    ::uStrong< ::uObject*> _reflection;

    void _ObjInit(::app::Outracks::Simulator::Runtime::Environment* scope, ::uObject* reflection) { ScopeClosure___ObjInit(this, scope, reflection); }
    ::uObject* Evaluate(::app::Outracks::Simulator::Bytecode::AddEventHandler* e) { return ScopeClosure__Evaluate(this, e); }
    ::uObject* Evaluate_1(::app::Outracks::Simulator::Bytecode::BlobLiteral* e) { return ScopeClosure__Evaluate_1(this, e); }
    ::uObject* Evaluate_10(::app::Outracks::Simulator::Bytecode::IsType* t) { return ScopeClosure__Evaluate_10(this, t); }
    ::uObject* Evaluate_11(::app::Outracks::Simulator::Bytecode::Lambda* p) { return ScopeClosure__Evaluate_11(this, p); }
    ::uObject* Evaluate_12(::app::Outracks::Simulator::Bytecode::Literal* e) { return ScopeClosure__Evaluate_12(this, e); }
    ::uObject* Evaluate_13(::app::Outracks::Simulator::Bytecode::LogicalOr* o) { return ScopeClosure__Evaluate_13(this, o); }
    ::uObject* Evaluate_14(::app::Outracks::Simulator::Bytecode::MethodGroup* g) { return ScopeClosure__Evaluate_14(this, g); }
    ::uObject* Evaluate_15(::app::Outracks::Simulator::Bytecode::NumberLiteral* l) { return ScopeClosure__Evaluate_15(this, l); }
    ::uObject* Evaluate_16(::app::Outracks::Simulator::Bytecode::ReadProperty* e) { return ScopeClosure__Evaluate_16(this, e); }
    ::uObject* Evaluate_17(::app::Outracks::Simulator::Bytecode::ReadStaticField* e) { return ScopeClosure__Evaluate_17(this, e); }
    ::uObject* Evaluate_18(::app::Outracks::Simulator::Bytecode::ReadVariable* e) { return ScopeClosure__Evaluate_18(this, e); }
    ::uObject* Evaluate_19(::app::Outracks::Simulator::Bytecode::RemoveEventHandler* e) { return ScopeClosure__Evaluate_19(this, e); }
    ::uObject* Evaluate_2(::app::Outracks::Simulator::Bytecode::BooleanLiteral* e) { return ScopeClosure__Evaluate_2(this, e); }
    ::uObject* Evaluate_20(::app::Outracks::Simulator::Bytecode::StringLiteral* e) { return ScopeClosure__Evaluate_20(this, e); }
    ::uObject* Evaluate_21(::app::Outracks::Simulator::Bytecode::WriteProperty* p) { return ScopeClosure__Evaluate_21(this, p); }
    ::uObject* Evaluate_3(::app::Outracks::Simulator::Bytecode::CallDynamicMethod* m) { return ScopeClosure__Evaluate_3(this, m); }
    ::uObject* Evaluate_4(::app::Outracks::Simulator::Bytecode::CallLambda* i) { return ScopeClosure__Evaluate_4(this, i); }
    ::uObject* Evaluate_5(::app::Outracks::Simulator::Bytecode::CallStaticMethod* m) { return ScopeClosure__Evaluate_5(this, m); }
    ::uObject* Evaluate_6(::app::Outracks::Simulator::Bytecode::EnumLiteral* i) { return ScopeClosure__Evaluate_6(this, i); }
    ::uObject* Evaluate_7(::app::Outracks::Simulator::Bytecode::Expression* expression) { return ScopeClosure__Evaluate_7(this, expression); }
    ::uArray* Evaluate_8(::app::Outracks::Simulator::ImmutableList__Outracks_Simulator_Bytecode_Expression* arguments) { return ScopeClosure__Evaluate_8(this, arguments); }
    ::uObject* Evaluate_9(::app::Outracks::Simulator::Bytecode::Instantiate* i) { return ScopeClosure__Evaluate_9(this, i); }
    ::uObject* Execute(::uObject* statements) { return ScopeClosure__Execute(this, statements); }
    ::uObject* Execute_1(::app::Outracks::Simulator::Bytecode::Lambda* lambda, ::uArray* arguments) { return ScopeClosure__Execute_1(this, lambda, arguments); }
    ::uObject* Execute_2(::uObject* lambda, ::uArray* arguments) { return ScopeClosure__Execute_2(this, lambda, arguments); }
};

}}}}


#endif
