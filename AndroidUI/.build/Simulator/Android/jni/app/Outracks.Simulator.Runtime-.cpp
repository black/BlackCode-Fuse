#include <app/Outracks.Simulator.Bytecode.AddEventHandler.h>
#include <app/Outracks.Simulator.Bytecode.BindVariable.h>
#include <app/Outracks.Simulator.Bytecode.BlobLiteral.h>
#include <app/Outracks.Simulator.Bytecode.BooleanLiteral.h>
#include <app/Outracks.Simulator.Bytecode.CallDynamicMethod.h>
#include <app/Outracks.Simulator.Bytecode.CallLambda.h>
#include <app/Outracks.Simulator.Bytecode.CallStaticMethod.h>
#include <app/Outracks.Simulator.Bytecode.EnumLiteral.h>
#include <app/Outracks.Simulator.Bytecode.Expression.h>
#include <app/Outracks.Simulator.Bytecode.Instantiate.h>
#include <app/Outracks.Simulator.Bytecode.IsType.h>
#include <app/Outracks.Simulator.Bytecode.Lambda.h>
#include <app/Outracks.Simulator.Bytecode.Literal.h>
#include <app/Outracks.Simulator.Bytecode.LogicalOr.h>
#include <app/Outracks.Simulator.Bytecode.MethodGroup.h>
#include <app/Outracks.Simulator.Bytecode.NumberLiteral.h>
#include <app/Outracks.Simulator.Bytecode.NumberType.h>
#include <app/Outracks.Simulator.Bytecode.Optional.h>
#include <app/Outracks.Simulator.Bytecode.Optional__Outracks_Simulator_Byteco-1ce5ab6b.h>
#include <app/Outracks.Simulator.Bytecode.Optional__Outracks_Simulator_Runtim-2e4b6588.h>
#include <app/Outracks.Simulator.Bytecode.Parameter.h>
#include <app/Outracks.Simulator.Bytecode.ReadProperty.h>
#include <app/Outracks.Simulator.Bytecode.ReadStaticField.h>
#include <app/Outracks.Simulator.Bytecode.ReadVariable.h>
#include <app/Outracks.Simulator.Bytecode.RemoveEventHandler.h>
#include <app/Outracks.Simulator.Bytecode.Return.h>
#include <app/Outracks.Simulator.Bytecode.Signature.h>
#include <app/Outracks.Simulator.Bytecode.Statement.h>
#include <app/Outracks.Simulator.Bytecode.StaticMemberName.h>
#include <app/Outracks.Simulator.Bytecode.StringLiteral.h>
#include <app/Outracks.Simulator.Bytecode.TypeMemberName.h>
#include <app/Outracks.Simulator.Bytecode.TypeName.h>
#include <app/Outracks.Simulator.Bytecode.Variable.h>
#include <app/Outracks.Simulator.Bytecode.WriteProperty.h>
#include <app/Outracks.Simulator.Context.h>
#include <app/Outracks.Simulator.ImmutableList__Outracks_Simulator_Bytecode_B-14e938f8.h>
#include <app/Outracks.Simulator.ImmutableList__Outracks_Simulator_Bytecode_Expression.h>
#include <app/Outracks.Simulator.ImmutableList__Outracks_Simulator_Bytecode_Parameter.h>
#include <app/Outracks.Simulator.ImmutableList__Outracks_Simulator_Bytecode_Statement.h>
#include <app/Outracks.Simulator.Runtime.Environment.h>
#include <app/Outracks.Simulator.Runtime.IReflection.h>
#include <app/Outracks.Simulator.Runtime.LambdaClosure.h>
#include <app/Outracks.Simulator.Runtime.ScopeClosure.h>
#include <app/Outracks.Simulator.Runtime.VariableNotBound.h>
#include <app/Outracks.Simulator.Runtime.VirtualMachine.h>
#include <app/Uno.Action.h>
#include <app/Uno.Action__object.h>
#include <app/Uno.Action__object__object.h>
#include <app/Uno.Action__object__object__object.h>
#include <app/Uno.ArgumentException.h>
#include <app/Uno.Bool.h>
#include <app/Uno.Byte.h>
#include <app/Uno.Collections.Dictionary__Outracks_Simulator_Bytecode_Variable__object.h>
#include <app/Uno.Collections.IEnumerable__Outracks_Simulator_Bytecode_Statement.h>
#include <app/Uno.Collections.IEnumerator.h>
#include <app/Uno.Collections.IEnumerator__Outracks_Simulator_Bytecode_BindVariable.h>
#include <app/Uno.Collections.IEnumerator__Outracks_Simulator_Bytecode_Statement.h>
#include <app/Uno.Delegate.h>
#include <app/Uno.Double.h>
#include <app/Uno.Exception.h>
#include <app/Uno.Float.h>
#include <app/Uno.Func__object.h>
#include <app/Uno.Func__object__object.h>
#include <app/Uno.Func__object__object__object.h>
#include <app/Uno.Func__object__object__object__object.h>
#include <app/Uno.Func__Outracks_Simulator_Bytecode_AddEventHandler__object.h>
#include <app/Uno.Func__Outracks_Simulator_Bytecode_BlobLiteral__object.h>
#include <app/Uno.Func__Outracks_Simulator_Bytecode_BooleanLiteral__object.h>
#include <app/Uno.Func__Outracks_Simulator_Bytecode_CallDynamicMethod__object.h>
#include <app/Uno.Func__Outracks_Simulator_Bytecode_CallLambda__object.h>
#include <app/Uno.Func__Outracks_Simulator_Bytecode_CallStaticMethod__object.h>
#include <app/Uno.Func__Outracks_Simulator_Bytecode_EnumLiteral__object.h>
#include <app/Uno.Func__Outracks_Simulator_Bytecode_Instantiate__object.h>
#include <app/Uno.Func__Outracks_Simulator_Bytecode_IsType__object.h>
#include <app/Uno.Func__Outracks_Simulator_Bytecode_Lambda__object.h>
#include <app/Uno.Func__Outracks_Simulator_Bytecode_Lambda__object____object.h>
#include <app/Uno.Func__Outracks_Simulator_Bytecode_Literal__object.h>
#include <app/Uno.Func__Outracks_Simulator_Bytecode_LogicalOr__object.h>
#include <app/Uno.Func__Outracks_Simulator_Bytecode_MethodGroup__object.h>
#include <app/Uno.Func__Outracks_Simulator_Bytecode_NumberLiteral__object.h>
#include <app/Uno.Func__Outracks_Simulator_Bytecode_ReadProperty__object.h>
#include <app/Uno.Func__Outracks_Simulator_Bytecode_ReadStaticField__object.h>
#include <app/Uno.Func__Outracks_Simulator_Bytecode_ReadVariable__object.h>
#include <app/Uno.Func__Outracks_Simulator_Bytecode_RemoveEventHandler__object.h>
#include <app/Uno.Func__Outracks_Simulator_Bytecode_StringLiteral__object.h>
#include <app/Uno.Func__Outracks_Simulator_Bytecode_WriteProperty__object.h>
#include <app/Uno.Int.h>
#include <app/Uno.Object.h>
#include <app/Uno.SByte.h>
#include <app/Uno.Short.h>
#include <app/Uno.String.h>
#include <app/Uno.UInt.h>
#include <app/Uno.UShort.h>

namespace app {
namespace Outracks {
namespace Simulator {
namespace Runtime {

// This file was generated based on 'C:\ProgramData\Uno\Packages\Outracks.Simulator.Client.Uno\0.1.0\Runtime\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

Environment__uType* Environment__typeof()
{
    static ::uStaticStrong<Environment__uType*> type;
    if (type != NULL) return type;

    type = (Environment__uType*)::uAllocClassType(sizeof(Environment__uType), "Outracks.Simulator.Runtime.Environment", false, 0, 2, 0);

    type->SetStrongRefs(
        "_parent._value", offsetof(Environment, _parent._value),
        "_variableBindings", offsetof(Environment, _variableBindings));

    type->SetFields(2,
        ::uNewField("_parent", NULL, offsetof(Environment, _parent), ::app::Outracks::Simulator::Bytecode::Optional__Outracks_Simulator_Runtime_Environment__typeof()),
        ::uNewField("_variableBindings", NULL, offsetof(Environment, _variableBindings), ::app::Uno::Collections::Dictionary__Outracks_Simulator_Bytecode_Variable__object__typeof()));

    type->SetFunctions(4,
        ::uNewFunctionVoid("Bind", Environment__Bind, 0, false, ::app::Outracks::Simulator::ImmutableList__Outracks_Simulator_Bytecode_Parameter__typeof(), ::uGetArrayType(::uObject__typeof())),
        ::uNewFunctionVoid("Bind", Environment__Bind_1, 0, false, ::app::Outracks::Simulator::Bytecode::Variable__typeof(), ::uObject__typeof()),
        ::uNewFunction("GetValue", Environment__GetValue, 0, false, ::uObject__typeof(), ::app::Outracks::Simulator::Bytecode::Variable__typeof()),
        ::uNewFunction(".ctor", Environment__New_1, 0, true, Environment__typeof(), ::app::Outracks::Simulator::Bytecode::Optional__Outracks_Simulator_Runtime_Environment__typeof()));

    ::uRegisterType(type);
    return type;
}

void Environment___ObjInit(Environment* __this, ::app::Outracks::Simulator::Bytecode::Optional__Outracks_Simulator_Runtime_Environment parent)
{
    __this->_variableBindings = ::app::Uno::Collections::Dictionary__Outracks_Simulator_Bytecode_Variable__object__New_1(NULL);
    __this->_parent = parent;
}

void Environment__Bind(Environment* __this, ::app::Outracks::Simulator::ImmutableList__Outracks_Simulator_Bytecode_Parameter* parameters, ::uArray* arguments)
{
    for (int i = 0; i < ::uPtr< ::app::Outracks::Simulator::ImmutableList__Outracks_Simulator_Bytecode_Parameter*>(parameters)->Count(); i++)
    {
        __this->Bind_1(::uPtr< ::app::Outracks::Simulator::Bytecode::Parameter*>(::uPtr< ::app::Outracks::Simulator::ImmutableList__Outracks_Simulator_Bytecode_Parameter*>(parameters)->Get(i))->Name, ::uPtr< ::uArray*>(arguments)->Item< ::uObject*>(i));
    }
}

void Environment__Bind_1(Environment* __this, ::app::Outracks::Simulator::Bytecode::Variable* variable, ::uObject* value)
{
    ::uPtr< ::app::Uno::Collections::Dictionary__Outracks_Simulator_Bytecode_Variable__object*>(__this->_variableBindings)->Add(variable, value);
}

::uObject* Environment__GetValue(Environment* __this, ::app::Outracks::Simulator::Bytecode::Variable* variable)
{
    ::app::Outracks::Simulator::Bytecode::Optional__Outracks_Simulator_Runtime_Environment ind_123 = ::app::Outracks::Simulator::Bytecode::Optional__Outracks_Simulator_Runtime_Environment();
    ::app::Outracks::Simulator::Bytecode::Optional__Outracks_Simulator_Runtime_Environment ind_124 = ::app::Outracks::Simulator::Bytecode::Optional__Outracks_Simulator_Runtime_Environment();
    ::uObject* value;

    if (::uPtr< ::app::Uno::Collections::Dictionary__Outracks_Simulator_Bytecode_Variable__object*>(__this->_variableBindings)->TryGetValue(variable, &value))
    {
        return value;
    }

    if ((ind_123 = __this->_parent, (&ind_123))->HasValue())
    {
        return ::uPtr< Environment*>((ind_124 = __this->_parent, (&ind_124))->Value())->GetValue(variable);
    }

    U_THROW(::app::Outracks::Simulator::Runtime::VariableNotBound__New_3(NULL, variable));
}

Environment* Environment__New_1(::uStatic* __this, ::app::Outracks::Simulator::Bytecode::Optional__Outracks_Simulator_Runtime_Environment parent)
{
    Environment* inst = (Environment*)::uAllocObject(sizeof(Environment), Environment__typeof());
    inst->_ObjInit(parent);
    return inst;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\Outracks.Simulator.Reflection.Uno\0.1.0\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

::uInterfaceType* IReflection__typeof()
{
    static ::uStaticStrong< ::uInterfaceType*> type;
    if (type != NULL) return type;

    type = ::uAllocInterfaceType("Outracks.Simulator.Runtime.IReflection");

    ::uRegisterType(type);
    return type;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\Outracks.Simulator.Client.Uno\0.1.0\Runtime\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

LambdaClosure__uType* LambdaClosure__typeof()
{
    static ::uStaticStrong<LambdaClosure__uType*> type;
    if (type != NULL) return type;

    type = (LambdaClosure__uType*)::uAllocClassType(sizeof(LambdaClosure__uType), "Outracks.Simulator.Runtime.LambdaClosure", false, 0, 2, 0);

    type->SetStrongRefs(
        "_execute", offsetof(LambdaClosure, _execute),
        "_lambda", offsetof(LambdaClosure, _lambda));

    type->SetFields(2,
        ::uNewField("_execute", NULL, offsetof(LambdaClosure, _execute), ::app::Uno::Func__Outracks_Simulator_Bytecode_Lambda__object____object__typeof()),
        ::uNewField("_lambda", NULL, offsetof(LambdaClosure, _lambda), ::app::Outracks::Simulator::Bytecode::Lambda__typeof()));

    type->SetFunctions(9,
        ::uNewFunctionVoid("Action", LambdaClosure__Action, 0, false),
        ::uNewFunctionVoid("Action", LambdaClosure__Action_1, 0, false, ::uObject__typeof()),
        ::uNewFunctionVoid("Action", LambdaClosure__Action_2, 0, false, ::uObject__typeof(), ::uObject__typeof()),
        ::uNewFunctionVoid("Action", LambdaClosure__Action_3, 0, false, ::uObject__typeof(), ::uObject__typeof(), ::uObject__typeof()),
        ::uNewFunction("Func", LambdaClosure__Func, 0, false, ::uObject__typeof()),
        ::uNewFunction("Func", LambdaClosure__Func_1, 0, false, ::uObject__typeof(), ::uObject__typeof()),
        ::uNewFunction("Func", LambdaClosure__Func_2, 0, false, ::uObject__typeof(), ::uObject__typeof(), ::uObject__typeof()),
        ::uNewFunction("Func", LambdaClosure__Func_3, 0, false, ::uObject__typeof(), ::uObject__typeof(), ::uObject__typeof(), ::uObject__typeof()),
        ::uNewFunction(".ctor", LambdaClosure__New_1, 0, true, LambdaClosure__typeof(), ::app::Outracks::Simulator::Bytecode::Lambda__typeof(), ::app::Uno::Func__Outracks_Simulator_Bytecode_Lambda__object____object__typeof()));

    ::uRegisterType(type);
    return type;
}

void LambdaClosure___ObjInit(LambdaClosure* __this, ::app::Outracks::Simulator::Bytecode::Lambda* lambda, ::uDelegate* execute)
{
    __this->_lambda = lambda;
    __this->_execute = execute;
}

void LambdaClosure__Action(LambdaClosure* __this)
{
    __this->Func();
}

void LambdaClosure__Action_1(LambdaClosure* __this, ::uObject* a1)
{
    __this->Func_1(a1);
}

void LambdaClosure__Action_2(LambdaClosure* __this, ::uObject* a1, ::uObject* a2)
{
    __this->Func_2(a1, a2);
}

void LambdaClosure__Action_3(LambdaClosure* __this, ::uObject* a1, ::uObject* a2, ::uObject* a3)
{
    __this->Func_3(a1, a2, a3);
}

::uObject* LambdaClosure__Func(LambdaClosure* __this)
{
    return ::uPtr< ::uDelegate*>(__this->_execute)->Invoke< ::uObject*, ::app::Outracks::Simulator::Bytecode::Lambda*, ::uArray*>(__this->_lambda, ::uNewArray(::uObject__typeof(), 0));
}

::uObject* LambdaClosure__Func_1(LambdaClosure* __this, ::uObject* a1)
{
    ::uArray* array_123;
    return ::uPtr< ::uDelegate*>(__this->_execute)->Invoke< ::uObject*, ::app::Outracks::Simulator::Bytecode::Lambda*, ::uArray*>(__this->_lambda, (array_123 = ::uNewArray(::uObject__typeof(), 1), ::uPtr< ::uArray*>(array_123)->ItemStrong< ::uObject*>(0) = a1, array_123));
}

::uObject* LambdaClosure__Func_2(LambdaClosure* __this, ::uObject* a1, ::uObject* a2)
{
    ::uArray* array_124;
    return ::uPtr< ::uDelegate*>(__this->_execute)->Invoke< ::uObject*, ::app::Outracks::Simulator::Bytecode::Lambda*, ::uArray*>(__this->_lambda, (array_124 = ::uNewArray(::uObject__typeof(), 2), ::uPtr< ::uArray*>(array_124)->ItemStrong< ::uObject*>(0) = a1, ::uPtr< ::uArray*>(array_124)->ItemStrong< ::uObject*>(1) = a2, array_124));
}

::uObject* LambdaClosure__Func_3(LambdaClosure* __this, ::uObject* a1, ::uObject* a2, ::uObject* a3)
{
    ::uArray* array_125;
    return ::uPtr< ::uDelegate*>(__this->_execute)->Invoke< ::uObject*, ::app::Outracks::Simulator::Bytecode::Lambda*, ::uArray*>(__this->_lambda, (array_125 = ::uNewArray(::uObject__typeof(), 3), ::uPtr< ::uArray*>(array_125)->ItemStrong< ::uObject*>(0) = a1, ::uPtr< ::uArray*>(array_125)->ItemStrong< ::uObject*>(1) = a2, ::uPtr< ::uArray*>(array_125)->ItemStrong< ::uObject*>(2) = a3, array_125));
}

LambdaClosure* LambdaClosure__New_1(::uStatic* __this, ::app::Outracks::Simulator::Bytecode::Lambda* lambda, ::uDelegate* execute)
{
    LambdaClosure* inst = (LambdaClosure*)::uAllocObject(sizeof(LambdaClosure), LambdaClosure__typeof());
    inst->_ObjInit(lambda, execute);
    return inst;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\Outracks.Simulator.Client.Uno\0.1.0\Runtime\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

ScopeClosure__uType* ScopeClosure__typeof()
{
    static ::uStaticStrong<ScopeClosure__uType*> type;
    if (type != NULL) return type;

    type = (ScopeClosure__uType*)::uAllocClassType(sizeof(ScopeClosure__uType), "Outracks.Simulator.Runtime.ScopeClosure", false, 0, 2, 0);

    type->SetStrongRefs(
        "_reflection", offsetof(ScopeClosure, _reflection),
        "_scope", offsetof(ScopeClosure, _scope));

    type->SetFields(2,
        ::uNewField("_reflection", NULL, offsetof(ScopeClosure, _reflection), ::app::Outracks::Simulator::Runtime::IReflection__typeof()),
        ::uNewField("_scope", NULL, offsetof(ScopeClosure, _scope), ::app::Outracks::Simulator::Runtime::Environment__typeof()));

    type->SetFunctions(26,
        ::uNewFunction("Evaluate", ScopeClosure__Evaluate, 0, false, ::uObject__typeof(), ::app::Outracks::Simulator::Bytecode::AddEventHandler__typeof()),
        ::uNewFunction("Evaluate", ScopeClosure__Evaluate_1, 0, false, ::uObject__typeof(), ::app::Outracks::Simulator::Bytecode::BlobLiteral__typeof()),
        ::uNewFunction("Evaluate", ScopeClosure__Evaluate_10, 0, false, ::uObject__typeof(), ::app::Outracks::Simulator::Bytecode::IsType__typeof()),
        ::uNewFunction("Evaluate", ScopeClosure__Evaluate_11, 0, false, ::uObject__typeof(), ::app::Outracks::Simulator::Bytecode::Lambda__typeof()),
        ::uNewFunction("Evaluate", ScopeClosure__Evaluate_12, 0, false, ::uObject__typeof(), ::app::Outracks::Simulator::Bytecode::Literal__typeof()),
        ::uNewFunction("Evaluate", ScopeClosure__Evaluate_13, 0, false, ::uObject__typeof(), ::app::Outracks::Simulator::Bytecode::LogicalOr__typeof()),
        ::uNewFunction("Evaluate", ScopeClosure__Evaluate_14, 0, false, ::uObject__typeof(), ::app::Outracks::Simulator::Bytecode::MethodGroup__typeof()),
        ::uNewFunction("Evaluate", ScopeClosure__Evaluate_15, 0, false, ::uObject__typeof(), ::app::Outracks::Simulator::Bytecode::NumberLiteral__typeof()),
        ::uNewFunction("Evaluate", ScopeClosure__Evaluate_16, 0, false, ::uObject__typeof(), ::app::Outracks::Simulator::Bytecode::ReadProperty__typeof()),
        ::uNewFunction("Evaluate", ScopeClosure__Evaluate_17, 0, false, ::uObject__typeof(), ::app::Outracks::Simulator::Bytecode::ReadStaticField__typeof()),
        ::uNewFunction("Evaluate", ScopeClosure__Evaluate_18, 0, false, ::uObject__typeof(), ::app::Outracks::Simulator::Bytecode::ReadVariable__typeof()),
        ::uNewFunction("Evaluate", ScopeClosure__Evaluate_19, 0, false, ::uObject__typeof(), ::app::Outracks::Simulator::Bytecode::RemoveEventHandler__typeof()),
        ::uNewFunction("Evaluate", ScopeClosure__Evaluate_2, 0, false, ::uObject__typeof(), ::app::Outracks::Simulator::Bytecode::BooleanLiteral__typeof()),
        ::uNewFunction("Evaluate", ScopeClosure__Evaluate_20, 0, false, ::uObject__typeof(), ::app::Outracks::Simulator::Bytecode::StringLiteral__typeof()),
        ::uNewFunction("Evaluate", ScopeClosure__Evaluate_21, 0, false, ::uObject__typeof(), ::app::Outracks::Simulator::Bytecode::WriteProperty__typeof()),
        ::uNewFunction("Evaluate", ScopeClosure__Evaluate_3, 0, false, ::uObject__typeof(), ::app::Outracks::Simulator::Bytecode::CallDynamicMethod__typeof()),
        ::uNewFunction("Evaluate", ScopeClosure__Evaluate_4, 0, false, ::uObject__typeof(), ::app::Outracks::Simulator::Bytecode::CallLambda__typeof()),
        ::uNewFunction("Evaluate", ScopeClosure__Evaluate_5, 0, false, ::uObject__typeof(), ::app::Outracks::Simulator::Bytecode::CallStaticMethod__typeof()),
        ::uNewFunction("Evaluate", ScopeClosure__Evaluate_6, 0, false, ::uObject__typeof(), ::app::Outracks::Simulator::Bytecode::EnumLiteral__typeof()),
        ::uNewFunction("Evaluate", ScopeClosure__Evaluate_7, 0, false, ::uObject__typeof(), ::app::Outracks::Simulator::Bytecode::Expression__typeof()),
        ::uNewFunction("Evaluate", ScopeClosure__Evaluate_8, 0, false, ::uGetArrayType(::uObject__typeof()), ::app::Outracks::Simulator::ImmutableList__Outracks_Simulator_Bytecode_Expression__typeof()),
        ::uNewFunction("Evaluate", ScopeClosure__Evaluate_9, 0, false, ::uObject__typeof(), ::app::Outracks::Simulator::Bytecode::Instantiate__typeof()),
        ::uNewFunction("Execute", ScopeClosure__Execute, 0, false, ::uObject__typeof(), ::app::Uno::Collections::IEnumerable__Outracks_Simulator_Bytecode_Statement__typeof()),
        ::uNewFunction("Execute", ScopeClosure__Execute_1, 0, false, ::uObject__typeof(), ::app::Outracks::Simulator::Bytecode::Lambda__typeof(), ::uGetArrayType(::uObject__typeof())),
        ::uNewFunction("Execute", ScopeClosure__Execute_2, 0, false, ::uObject__typeof(), ::uObject__typeof(), ::uGetArrayType(::uObject__typeof())),
        ::uNewFunction(".ctor", ScopeClosure__New_1, 0, true, ScopeClosure__typeof(), ::app::Outracks::Simulator::Runtime::Environment__typeof(), ::app::Outracks::Simulator::Runtime::IReflection__typeof()));

    ::uRegisterType(type);
    return type;
}

void ScopeClosure___ObjInit(ScopeClosure* __this, ::app::Outracks::Simulator::Runtime::Environment* scope, ::uObject* reflection)
{
    __this->_reflection = reflection;
    __this->_scope = scope;
}

::uObject* ScopeClosure__Evaluate(ScopeClosure* __this, ::app::Outracks::Simulator::Bytecode::AddEventHandler* e)
{
    ::app::Outracks::Simulator::Runtime::IReflection::AddEventHandler(::uPtr< ::uObject*>(__this->_reflection), __this->Evaluate_7(::uPtr< ::app::Outracks::Simulator::Bytecode::AddEventHandler*>(e)->Object), ::uPtr< ::app::Outracks::Simulator::Bytecode::AddEventHandler*>(e)->Event, __this->Evaluate_7(::uPtr< ::app::Outracks::Simulator::Bytecode::AddEventHandler*>(e)->Handler));
    return NULL;
}

::uObject* ScopeClosure__Evaluate_1(ScopeClosure* __this, ::app::Outracks::Simulator::Bytecode::BlobLiteral* e)
{
    return (::uObject*)::uPtr< ::app::Outracks::Simulator::Bytecode::BlobLiteral*>(e)->Bytes;
}

::uObject* ScopeClosure__Evaluate_10(ScopeClosure* __this, ::app::Outracks::Simulator::Bytecode::IsType* t)
{
    return ::uBox(::app::Uno::Bool__typeof(), ::uPtr< ::app::Outracks::Simulator::Bytecode::IsType*>(t)->IncludeSubtypes ? ::app::Outracks::Simulator::Runtime::IReflection::IsSubtype(::uPtr< ::uObject*>(__this->_reflection), __this->Evaluate_7(::uPtr< ::app::Outracks::Simulator::Bytecode::IsType*>(t)->Object), ::uPtr< ::app::Outracks::Simulator::Bytecode::IsType*>(t)->Type) : ::app::Outracks::Simulator::Runtime::IReflection::IsType(::uPtr< ::uObject*>(__this->_reflection), __this->Evaluate_7(::uPtr< ::app::Outracks::Simulator::Bytecode::IsType*>(t)->Object), ::uPtr< ::app::Outracks::Simulator::Bytecode::IsType*>(t)->Type));
}

::uObject* ScopeClosure__Evaluate_11(ScopeClosure* __this, ::app::Outracks::Simulator::Bytecode::Lambda* p)
{
    ::app::Outracks::Simulator::Bytecode::Optional__Outracks_Simulator_Bytecode_TypeName ind_125 = ::app::Outracks::Simulator::Bytecode::Optional__Outracks_Simulator_Bytecode_TypeName();

    if ((ind_125 = ::uPtr< ::app::Outracks::Simulator::Bytecode::Signature*>(::uPtr< ::app::Outracks::Simulator::Bytecode::Lambda*>(p)->Signature)->ReturnType, (&ind_125))->HasValue())
    {
        switch (::uPtr< ::app::Outracks::Simulator::ImmutableList__Outracks_Simulator_Bytecode_Parameter*>(::uPtr< ::app::Outracks::Simulator::Bytecode::Signature*>(::uPtr< ::app::Outracks::Simulator::Bytecode::Lambda*>(p)->Signature)->Parameters)->Count())
        {
            case 0:
            {
                return (::uObject*)::uNewDelegateNonVirt(::app::Uno::Func__object__typeof(), (const void*)::app::Outracks::Simulator::Runtime::LambdaClosure__Func, ::app::Outracks::Simulator::Runtime::LambdaClosure__New_1(NULL, p, ::uNewDelegateNonVirt(::app::Uno::Func__Outracks_Simulator_Bytecode_Lambda__object____object__typeof(), (const void*)ScopeClosure__Execute_1, __this)));
            }
            case 1:
            {
                return (::uObject*)::uNewDelegateNonVirt(::app::Uno::Func__object__object__typeof(), (const void*)::app::Outracks::Simulator::Runtime::LambdaClosure__Func_1, ::app::Outracks::Simulator::Runtime::LambdaClosure__New_1(NULL, p, ::uNewDelegateNonVirt(::app::Uno::Func__Outracks_Simulator_Bytecode_Lambda__object____object__typeof(), (const void*)ScopeClosure__Execute_1, __this)));
            }
            case 2:
            {
                return (::uObject*)::uNewDelegateNonVirt(::app::Uno::Func__object__object__object__typeof(), (const void*)::app::Outracks::Simulator::Runtime::LambdaClosure__Func_2, ::app::Outracks::Simulator::Runtime::LambdaClosure__New_1(NULL, p, ::uNewDelegateNonVirt(::app::Uno::Func__Outracks_Simulator_Bytecode_Lambda__object____object__typeof(), (const void*)ScopeClosure__Execute_1, __this)));
            }
            case 3:
            {
                return (::uObject*)::uNewDelegateNonVirt(::app::Uno::Func__object__object__object__object__typeof(), (const void*)::app::Outracks::Simulator::Runtime::LambdaClosure__Func_3, ::app::Outracks::Simulator::Runtime::LambdaClosure__New_1(NULL, p, ::uNewDelegateNonVirt(::app::Uno::Func__Outracks_Simulator_Bytecode_Lambda__object____object__typeof(), (const void*)ScopeClosure__Execute_1, __this)));
            }
        }
    }
    else
    {
        switch (::uPtr< ::app::Outracks::Simulator::ImmutableList__Outracks_Simulator_Bytecode_Parameter*>(::uPtr< ::app::Outracks::Simulator::Bytecode::Signature*>(::uPtr< ::app::Outracks::Simulator::Bytecode::Lambda*>(p)->Signature)->Parameters)->Count())
        {
            case 0:
            {
                return (::uObject*)::uNewDelegateNonVirt(::app::Uno::Action__typeof(), (const void*)::app::Outracks::Simulator::Runtime::LambdaClosure__Action, ::app::Outracks::Simulator::Runtime::LambdaClosure__New_1(NULL, p, ::uNewDelegateNonVirt(::app::Uno::Func__Outracks_Simulator_Bytecode_Lambda__object____object__typeof(), (const void*)ScopeClosure__Execute_1, __this)));
            }
            case 1:
            {
                return (::uObject*)::uNewDelegateNonVirt(::app::Uno::Action__object__typeof(), (const void*)::app::Outracks::Simulator::Runtime::LambdaClosure__Action_1, ::app::Outracks::Simulator::Runtime::LambdaClosure__New_1(NULL, p, ::uNewDelegateNonVirt(::app::Uno::Func__Outracks_Simulator_Bytecode_Lambda__object____object__typeof(), (const void*)ScopeClosure__Execute_1, __this)));
            }
            case 2:
            {
                return (::uObject*)::uNewDelegateNonVirt(::app::Uno::Action__object__object__typeof(), (const void*)::app::Outracks::Simulator::Runtime::LambdaClosure__Action_2, ::app::Outracks::Simulator::Runtime::LambdaClosure__New_1(NULL, p, ::uNewDelegateNonVirt(::app::Uno::Func__Outracks_Simulator_Bytecode_Lambda__object____object__typeof(), (const void*)ScopeClosure__Execute_1, __this)));
            }
            case 3:
            {
                return (::uObject*)::uNewDelegateNonVirt(::app::Uno::Action__object__object__object__typeof(), (const void*)::app::Outracks::Simulator::Runtime::LambdaClosure__Action_3, ::app::Outracks::Simulator::Runtime::LambdaClosure__New_1(NULL, p, ::uNewDelegateNonVirt(::app::Uno::Func__Outracks_Simulator_Bytecode_Lambda__object____object__typeof(), (const void*)ScopeClosure__Execute_1, __this)));
            }
        }
    }

    U_THROW(::app::Uno::Exception__New_2(NULL, ::uGetConstString("Illegal parameter count")));
}

::uObject* ScopeClosure__Evaluate_12(ScopeClosure* __this, ::app::Outracks::Simulator::Bytecode::Literal* e)
{
    return ::uPtr< ::app::Outracks::Simulator::Bytecode::Literal*>(e)->Match__object_2(::uNewDelegateNonVirt(::app::Uno::Func__Outracks_Simulator_Bytecode_BooleanLiteral__object__typeof(), (const void*)ScopeClosure__Evaluate_2, __this), ::uNewDelegateNonVirt(::app::Uno::Func__Outracks_Simulator_Bytecode_StringLiteral__object__typeof(), (const void*)ScopeClosure__Evaluate_20, __this), ::uNewDelegateNonVirt(::app::Uno::Func__Outracks_Simulator_Bytecode_NumberLiteral__object__typeof(), (const void*)ScopeClosure__Evaluate_15, __this), ::uNewDelegateNonVirt(::app::Uno::Func__Outracks_Simulator_Bytecode_EnumLiteral__object__typeof(), (const void*)ScopeClosure__Evaluate_6, __this), ::uNewDelegateNonVirt(::app::Uno::Func__Outracks_Simulator_Bytecode_BlobLiteral__object__typeof(), (const void*)ScopeClosure__Evaluate_1, __this));
}

::uObject* ScopeClosure__Evaluate_13(ScopeClosure* __this, ::app::Outracks::Simulator::Bytecode::LogicalOr* o)
{
    return ::uBox(::app::Uno::Bool__typeof(), ::uUnbox< bool>(::app::Uno::Bool__typeof(), __this->Evaluate_7(::uPtr< ::app::Outracks::Simulator::Bytecode::LogicalOr*>(o)->Left)) || ::uUnbox< bool>(::app::Uno::Bool__typeof(), __this->Evaluate_7(::uPtr< ::app::Outracks::Simulator::Bytecode::LogicalOr*>(o)->Right)));
}

::uObject* ScopeClosure__Evaluate_14(ScopeClosure* __this, ::app::Outracks::Simulator::Bytecode::MethodGroup* g)
{
    return ::app::Outracks::Simulator::Runtime::IReflection::CreateDelegate(::uPtr< ::uObject*>(__this->_reflection), ::uPtr< ::app::Outracks::Simulator::Bytecode::MethodGroup*>(g)->DelegateType, __this->Evaluate_7(::uPtr< ::app::Outracks::Simulator::Bytecode::MethodGroup*>(g)->Object), ::uPtr< ::app::Outracks::Simulator::Bytecode::MethodGroup*>(g)->MethodName, ::uPtr< ::app::Outracks::Simulator::Bytecode::MethodGroup*>(g)->MethodSignature);
}

::uObject* ScopeClosure__Evaluate_15(ScopeClosure* __this, ::app::Outracks::Simulator::Bytecode::NumberLiteral* l)
{
    switch (::uPtr< ::app::Outracks::Simulator::Bytecode::NumberLiteral*>(l)->NumberType)
    {
        case 0:
        {
            return ::uBox(::app::Uno::Double__typeof(), ::uPtr< ::app::Outracks::Simulator::Bytecode::NumberLiteral*>(l)->DoubleValue);
        }
        case 1:
        {
            return ::uBox(::app::Uno::Float__typeof(), (float)::uPtr< ::app::Outracks::Simulator::Bytecode::NumberLiteral*>(l)->DoubleValue);
        }
        case 2:
        {
            return ::uBox< int>(::app::Uno::Int__typeof(), (int)::uPtr< ::app::Outracks::Simulator::Bytecode::NumberLiteral*>(l)->DoubleValue);
        }
        case 3:
        {
            return ::uBox< ::uUInt>(::app::Uno::UInt__typeof(), (::uUInt)::uPtr< ::app::Outracks::Simulator::Bytecode::NumberLiteral*>(l)->DoubleValue);
        }
        case 4:
        {
            return ::uBox< ::uShort>(::app::Uno::Short__typeof(), (::uShort)::uPtr< ::app::Outracks::Simulator::Bytecode::NumberLiteral*>(l)->DoubleValue);
        }
        case 5:
        {
            return ::uBox< ::uUShort>(::app::Uno::UShort__typeof(), (::uUShort)::uPtr< ::app::Outracks::Simulator::Bytecode::NumberLiteral*>(l)->DoubleValue);
        }
        case 6:
        {
            return ::uBox< ::uSByte>(::app::Uno::SByte__typeof(), (::uSByte)::uPtr< ::app::Outracks::Simulator::Bytecode::NumberLiteral*>(l)->DoubleValue);
        }
        case 7:
        {
            return ::uBox< ::uByte>(::app::Uno::Byte__typeof(), (::uByte)::uPtr< ::app::Outracks::Simulator::Bytecode::NumberLiteral*>(l)->DoubleValue);
        }
    }

    U_THROW(::app::Uno::ArgumentException__New_3(NULL, ::app::Uno::String__op_Addition_1(NULL, ::uGetConstString("Invalid number type "), ::uBox< int>(::app::Outracks::Simulator::Bytecode::NumberType__typeof(), ::uPtr< ::app::Outracks::Simulator::Bytecode::NumberLiteral*>(l)->NumberType))));
}

::uObject* ScopeClosure__Evaluate_16(ScopeClosure* __this, ::app::Outracks::Simulator::Bytecode::ReadProperty* e)
{
    return ::app::Outracks::Simulator::Runtime::IReflection::GetPropertyValue(::uPtr< ::uObject*>(__this->_reflection), __this->Evaluate_7(::uPtr< ::app::Outracks::Simulator::Bytecode::ReadProperty*>(e)->Object), ::uPtr< ::app::Outracks::Simulator::Bytecode::ReadProperty*>(e)->Property);
}

::uObject* ScopeClosure__Evaluate_17(ScopeClosure* __this, ::app::Outracks::Simulator::Bytecode::ReadStaticField* e)
{
    return ::app::Outracks::Simulator::Runtime::IReflection::GetStaticPropertyOrFieldValue(::uPtr< ::uObject*>(__this->_reflection), ::uPtr< ::app::Outracks::Simulator::Bytecode::StaticMemberName*>(::uPtr< ::app::Outracks::Simulator::Bytecode::ReadStaticField*>(e)->Field)->TypeName, ::uPtr< ::app::Outracks::Simulator::Bytecode::StaticMemberName*>(::uPtr< ::app::Outracks::Simulator::Bytecode::ReadStaticField*>(e)->Field)->MemberName);
}

::uObject* ScopeClosure__Evaluate_18(ScopeClosure* __this, ::app::Outracks::Simulator::Bytecode::ReadVariable* e)
{
    return ::uPtr< ::app::Outracks::Simulator::Runtime::Environment*>(__this->_scope)->GetValue(::uPtr< ::app::Outracks::Simulator::Bytecode::ReadVariable*>(e)->Variable);
}

::uObject* ScopeClosure__Evaluate_19(ScopeClosure* __this, ::app::Outracks::Simulator::Bytecode::RemoveEventHandler* e)
{
    ::app::Outracks::Simulator::Runtime::IReflection::RemoveEventHandler(::uPtr< ::uObject*>(__this->_reflection), __this->Evaluate_7(::uPtr< ::app::Outracks::Simulator::Bytecode::RemoveEventHandler*>(e)->Object), ::uPtr< ::app::Outracks::Simulator::Bytecode::RemoveEventHandler*>(e)->Event, __this->Evaluate_7(::uPtr< ::app::Outracks::Simulator::Bytecode::RemoveEventHandler*>(e)->Handler));
    return NULL;
}

::uObject* ScopeClosure__Evaluate_2(ScopeClosure* __this, ::app::Outracks::Simulator::Bytecode::BooleanLiteral* e)
{
    return ::uBox(::app::Uno::Bool__typeof(), ::uPtr< ::app::Outracks::Simulator::Bytecode::BooleanLiteral*>(e)->BooleanValue);
}

::uObject* ScopeClosure__Evaluate_20(ScopeClosure* __this, ::app::Outracks::Simulator::Bytecode::StringLiteral* e)
{
    return (::uObject*)::uPtr< ::app::Outracks::Simulator::Bytecode::StringLiteral*>(e)->StringValue;
}

::uObject* ScopeClosure__Evaluate_21(ScopeClosure* __this, ::app::Outracks::Simulator::Bytecode::WriteProperty* p)
{
    ::app::Outracks::Simulator::Runtime::IReflection::SetPropertyValue(::uPtr< ::uObject*>(__this->_reflection), __this->Evaluate_7(::uPtr< ::app::Outracks::Simulator::Bytecode::WriteProperty*>(p)->Object), ::uPtr< ::app::Outracks::Simulator::Bytecode::WriteProperty*>(p)->Property, __this->Evaluate_7(::uPtr< ::app::Outracks::Simulator::Bytecode::WriteProperty*>(p)->Value));
    return NULL;
}

::uObject* ScopeClosure__Evaluate_3(ScopeClosure* __this, ::app::Outracks::Simulator::Bytecode::CallDynamicMethod* m)
{
    return ::app::Outracks::Simulator::Runtime::IReflection::CallDynamic(::uPtr< ::uObject*>(__this->_reflection), __this->Evaluate_7(::uPtr< ::app::Outracks::Simulator::Bytecode::CallDynamicMethod*>(m)->Object), ::uPtr< ::app::Outracks::Simulator::Bytecode::CallDynamicMethod*>(m)->Method, __this->Evaluate_8(::uPtr< ::app::Outracks::Simulator::Bytecode::CallDynamicMethod*>(m)->Arguments));
}

::uObject* ScopeClosure__Evaluate_4(ScopeClosure* __this, ::app::Outracks::Simulator::Bytecode::CallLambda* i)
{
    return __this->Execute_2(__this->Evaluate_7(::uPtr< ::app::Outracks::Simulator::Bytecode::CallLambda*>(i)->Lambda), __this->Evaluate_8(::uPtr< ::app::Outracks::Simulator::Bytecode::CallLambda*>(i)->Arguments));
}

::uObject* ScopeClosure__Evaluate_5(ScopeClosure* __this, ::app::Outracks::Simulator::Bytecode::CallStaticMethod* m)
{
    return ::app::Outracks::Simulator::Runtime::IReflection::CallStatic(::uPtr< ::uObject*>(__this->_reflection), ::uPtr< ::app::Outracks::Simulator::Bytecode::StaticMemberName*>(::uPtr< ::app::Outracks::Simulator::Bytecode::CallStaticMethod*>(m)->StaticMethod)->TypeName, ::uPtr< ::app::Outracks::Simulator::Bytecode::StaticMemberName*>(::uPtr< ::app::Outracks::Simulator::Bytecode::CallStaticMethod*>(m)->StaticMethod)->MemberName, __this->Evaluate_8(::uPtr< ::app::Outracks::Simulator::Bytecode::CallStaticMethod*>(m)->Arguments));
}

::uObject* ScopeClosure__Evaluate_6(ScopeClosure* __this, ::app::Outracks::Simulator::Bytecode::EnumLiteral* i)
{
    return ::app::Outracks::Simulator::Runtime::IReflection::GetEnumValue(::uPtr< ::uObject*>(__this->_reflection), ::uPtr< ::app::Outracks::Simulator::Bytecode::StaticMemberName*>(::uPtr< ::app::Outracks::Simulator::Bytecode::EnumLiteral*>(i)->Value)->TypeName, ::uPtr< ::app::Outracks::Simulator::Bytecode::StaticMemberName*>(::uPtr< ::app::Outracks::Simulator::Bytecode::EnumLiteral*>(i)->Value)->MemberName);
}

::uObject* ScopeClosure__Evaluate_7(ScopeClosure* __this, ::app::Outracks::Simulator::Bytecode::Expression* expression)
{
    return ::uPtr< ::app::Outracks::Simulator::Bytecode::Expression*>(expression)->Match__object_1(::uNewDelegateNonVirt(::app::Uno::Func__Outracks_Simulator_Bytecode_ReadVariable__object__typeof(), (const void*)ScopeClosure__Evaluate_18, __this), ::uNewDelegateNonVirt(::app::Uno::Func__Outracks_Simulator_Bytecode_Literal__object__typeof(), (const void*)ScopeClosure__Evaluate_12, __this), ::uNewDelegateNonVirt(::app::Uno::Func__Outracks_Simulator_Bytecode_Lambda__object__typeof(), (const void*)ScopeClosure__Evaluate_11, __this), ::uNewDelegateNonVirt(::app::Uno::Func__Outracks_Simulator_Bytecode_MethodGroup__object__typeof(), (const void*)ScopeClosure__Evaluate_14, __this), ::uNewDelegateNonVirt(::app::Uno::Func__Outracks_Simulator_Bytecode_IsType__object__typeof(), (const void*)ScopeClosure__Evaluate_10, __this), ::uNewDelegateNonVirt(::app::Uno::Func__Outracks_Simulator_Bytecode_LogicalOr__object__typeof(), (const void*)ScopeClosure__Evaluate_13, __this), ::uNewDelegateNonVirt(::app::Uno::Func__Outracks_Simulator_Bytecode_Instantiate__object__typeof(), (const void*)ScopeClosure__Evaluate_9, __this), ::uNewDelegateNonVirt(::app::Uno::Func__Outracks_Simulator_Bytecode_CallLambda__object__typeof(), (const void*)ScopeClosure__Evaluate_4, __this), ::uNewDelegateNonVirt(::app::Uno::Func__Outracks_Simulator_Bytecode_CallStaticMethod__object__typeof(), (const void*)ScopeClosure__Evaluate_5, __this), ::uNewDelegateNonVirt(::app::Uno::Func__Outracks_Simulator_Bytecode_CallDynamicMethod__object__typeof(), (const void*)ScopeClosure__Evaluate_3, __this), ::uNewDelegateNonVirt(::app::Uno::Func__Outracks_Simulator_Bytecode_ReadStaticField__object__typeof(), (const void*)ScopeClosure__Evaluate_17, __this), ::uNewDelegateNonVirt(::app::Uno::Func__Outracks_Simulator_Bytecode_ReadProperty__object__typeof(), (const void*)ScopeClosure__Evaluate_16, __this), ::uNewDelegateNonVirt(::app::Uno::Func__Outracks_Simulator_Bytecode_WriteProperty__object__typeof(), (const void*)ScopeClosure__Evaluate_21, __this), ::uNewDelegateNonVirt(::app::Uno::Func__Outracks_Simulator_Bytecode_AddEventHandler__object__typeof(), (const void*)ScopeClosure__Evaluate, __this), ::uNewDelegateNonVirt(::app::Uno::Func__Outracks_Simulator_Bytecode_RemoveEventHandler__object__typeof(), (const void*)ScopeClosure__Evaluate_19, __this));
}

::uArray* ScopeClosure__Evaluate_8(ScopeClosure* __this, ::app::Outracks::Simulator::ImmutableList__Outracks_Simulator_Bytecode_Expression* arguments)
{
    ::uArray* objects = ::uNewArray(::uObject__typeof(), ::uPtr< ::app::Outracks::Simulator::ImmutableList__Outracks_Simulator_Bytecode_Expression*>(arguments)->Count());

    for (int i = 0; i < arguments->Count(); i++)
    {
        ::uPtr< ::uArray*>(objects)->ItemStrong< ::uObject*>(i) = __this->Evaluate_7(::uPtr< ::app::Outracks::Simulator::ImmutableList__Outracks_Simulator_Bytecode_Expression*>(arguments)->Item(i));
    }

    return objects;
}

::uObject* ScopeClosure__Evaluate_9(ScopeClosure* __this, ::app::Outracks::Simulator::Bytecode::Instantiate* i)
{
    return ::app::Outracks::Simulator::Runtime::IReflection::Instantiate(::uPtr< ::uObject*>(__this->_reflection), ::uPtr< ::app::Outracks::Simulator::Bytecode::Instantiate*>(i)->Type, __this->Evaluate_8(::uPtr< ::app::Outracks::Simulator::Bytecode::Instantiate*>(i)->Arguments));
}

::uObject* ScopeClosure__Execute(ScopeClosure* __this, ::uObject* statements)
{
    for (::uObject* enum_124 = ::app::Uno::Collections::IEnumerable__Outracks_Simulator_Bytecode_Statement::GetEnumerator(::uPtr< ::uObject*>(statements)); ::app::Uno::Collections::IEnumerator::MoveNext(::uPtr< ::uObject*>(enum_124)); )
    {
        ::app::Outracks::Simulator::Bytecode::Statement* statement = ::app::Uno::Collections::IEnumerator__Outracks_Simulator_Bytecode_Statement::Current(::uPtr< ::uObject*>(enum_124));
        ::app::Outracks::Simulator::Bytecode::Expression* e = ::uAs< ::app::Outracks::Simulator::Bytecode::Expression*>(statement, ::app::Outracks::Simulator::Bytecode::Expression__typeof());

        if (e != NULL)
        {
            __this->Evaluate_7(e);
        }

        ::app::Outracks::Simulator::Bytecode::Return* r = ::uAs< ::app::Outracks::Simulator::Bytecode::Return*>(statement, ::app::Outracks::Simulator::Bytecode::Return__typeof());

        if (r != NULL)
        {
            return __this->Evaluate_7(::uPtr< ::app::Outracks::Simulator::Bytecode::Return*>(r)->Value);
        }
    }

    return NULL;
}

::uObject* ScopeClosure__Execute_1(ScopeClosure* __this, ::app::Outracks::Simulator::Bytecode::Lambda* lambda, ::uArray* arguments)
{
    ::app::Outracks::Simulator::Runtime::Environment* bodyEnv = ::app::Outracks::Simulator::Runtime::Environment__New_1(NULL, ::app::Outracks::Simulator::Bytecode::Optional__Outracks_Simulator_Runtime_Environment__op_Implicit(NULL, __this->_scope));
    ScopeClosure* bodyClosure = ScopeClosure__New_1(NULL, bodyEnv, __this->_reflection);
    ::uPtr< ::app::Outracks::Simulator::Runtime::Environment*>(bodyEnv)->Bind(::uPtr< ::app::Outracks::Simulator::Bytecode::Signature*>(::uPtr< ::app::Outracks::Simulator::Bytecode::Lambda*>(lambda)->Signature)->Parameters, arguments);

    for (::uObject* enum_123 = ::uPtr< ::app::Outracks::Simulator::ImmutableList__Outracks_Simulator_Bytecode_BindVariable*>(lambda->LocalVariables)->GetEnumerator(); ::app::Uno::Collections::IEnumerator::MoveNext(::uPtr< ::uObject*>(enum_123)); )
    {
        ::app::Outracks::Simulator::Bytecode::BindVariable* b = ::app::Uno::Collections::IEnumerator__Outracks_Simulator_Bytecode_BindVariable::Current(::uPtr< ::uObject*>(enum_123));
        ::uPtr< ::app::Outracks::Simulator::Runtime::Environment*>(bodyEnv)->Bind_1(::uPtr< ::app::Outracks::Simulator::Bytecode::BindVariable*>(b)->Variable, ::uPtr< ScopeClosure*>(bodyClosure)->Evaluate_7(::uPtr< ::app::Outracks::Simulator::Bytecode::BindVariable*>(b)->Expression));
    }

    return ::uPtr< ScopeClosure*>(bodyClosure)->Execute((::uObject*)lambda->Statements);
}

::uObject* ScopeClosure__Execute_2(ScopeClosure* __this, ::uObject* lambda, ::uArray* arguments)
{
    ::uDelegate* f0 = ::uAs< ::uDelegate*>(lambda, ::app::Uno::Func__object__typeof());

    if (::app::Uno::Delegate__op_Inequality(NULL, (::uDelegate*)f0, NULL))
    {
        return ::uPtr< ::uDelegate*>(f0)->Invoke< ::uObject*>();
    }

    ::uDelegate* f1 = ::uAs< ::uDelegate*>(lambda, ::app::Uno::Func__object__object__typeof());

    if (::app::Uno::Delegate__op_Inequality(NULL, (::uDelegate*)f1, NULL))
    {
        return ::uPtr< ::uDelegate*>(f1)->Invoke< ::uObject*, ::uObject*>(::uPtr< ::uArray*>(arguments)->Item< ::uObject*>(0));
    }

    ::uDelegate* f2 = ::uAs< ::uDelegate*>(lambda, ::app::Uno::Func__object__object__object__typeof());

    if (::app::Uno::Delegate__op_Inequality(NULL, (::uDelegate*)f2, NULL))
    {
        return ::uPtr< ::uDelegate*>(f2)->Invoke< ::uObject*, ::uObject*, ::uObject*>(::uPtr< ::uArray*>(arguments)->Item< ::uObject*>(0), ::uPtr< ::uArray*>(arguments)->Item< ::uObject*>(1));
    }

    ::uDelegate* f3 = ::uAs< ::uDelegate*>(lambda, ::app::Uno::Func__object__object__object__object__typeof());

    if (::app::Uno::Delegate__op_Inequality(NULL, (::uDelegate*)f3, NULL))
    {
        return ::uPtr< ::uDelegate*>(f3)->Invoke< ::uObject*, ::uObject*, ::uObject*, ::uObject*>(::uPtr< ::uArray*>(arguments)->Item< ::uObject*>(0), ::uPtr< ::uArray*>(arguments)->Item< ::uObject*>(1), ::uPtr< ::uArray*>(arguments)->Item< ::uObject*>(2));
    }

    ::uDelegate* a0 = ::uAs< ::uDelegate*>(lambda, ::app::Uno::Action__typeof());

    if (::app::Uno::Delegate__op_Inequality(NULL, (::uDelegate*)a0, NULL))
    {
        ::uPtr< ::uDelegate*>(a0)->InvokeVoid();
    }

    ::uDelegate* a1 = ::uAs< ::uDelegate*>(lambda, ::app::Uno::Action__object__typeof());

    if (::app::Uno::Delegate__op_Inequality(NULL, (::uDelegate*)a1, NULL))
    {
        ::uPtr< ::uDelegate*>(a1)->InvokeVoid< ::uObject*>(::uPtr< ::uArray*>(arguments)->Item< ::uObject*>(0));
    }

    ::uDelegate* a2 = ::uAs< ::uDelegate*>(lambda, ::app::Uno::Action__object__object__typeof());

    if (::app::Uno::Delegate__op_Inequality(NULL, (::uDelegate*)a2, NULL))
    {
        ::uPtr< ::uDelegate*>(a2)->InvokeVoid< ::uObject*, ::uObject*>(arguments->Item< ::uObject*>(0), arguments->Item< ::uObject*>(1));
    }

    ::uDelegate* a3 = ::uAs< ::uDelegate*>(lambda, ::app::Uno::Action__object__object__object__typeof());

    if (::app::Uno::Delegate__op_Inequality(NULL, (::uDelegate*)a3, NULL))
    {
        ::uPtr< ::uDelegate*>(a3)->InvokeVoid< ::uObject*, ::uObject*, ::uObject*>(arguments->Item< ::uObject*>(0), arguments->Item< ::uObject*>(1), arguments->Item< ::uObject*>(2));
    }

    return NULL;
}

ScopeClosure* ScopeClosure__New_1(::uStatic* __this, ::app::Outracks::Simulator::Runtime::Environment* scope, ::uObject* reflection)
{
    ScopeClosure* inst = (ScopeClosure*)::uAllocObject(sizeof(ScopeClosure), ScopeClosure__typeof());
    inst->_ObjInit(scope, reflection);
    return inst;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\Outracks.Simulator.Client.Uno\0.1.0\Runtime\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

VariableNotBound__uType* VariableNotBound__typeof()
{
    static ::uStaticStrong<VariableNotBound__uType*> type;
    if (type != NULL) return type;

    type = (VariableNotBound__uType*)::uAllocClassType(sizeof(VariableNotBound__uType), "Outracks.Simulator.Runtime.VariableNotBound", false, 0, 1, 0);

    type->SetBaseType(::app::Uno::Exception__typeof());

    type->SetStrongRefs(
        "Variable", offsetof(VariableNotBound, Variable));

    type->SetFields(1,
        ::uNewField("Variable", NULL, offsetof(VariableNotBound, Variable), ::app::Outracks::Simulator::Bytecode::Variable__typeof()));

    type->SetFunctions(1,
        ::uNewFunction(".ctor", VariableNotBound__New_3, 0, true, VariableNotBound__typeof(), ::app::Outracks::Simulator::Bytecode::Variable__typeof()));

    ::uRegisterType(type);
    return type;
}

void VariableNotBound___ObjInit_2(VariableNotBound* __this, ::app::Outracks::Simulator::Bytecode::Variable* variable)
{
    ::app::Uno::Exception___ObjInit(__this);
    __this->Variable = variable;
}

VariableNotBound* VariableNotBound__New_3(::uStatic* __this, ::app::Outracks::Simulator::Bytecode::Variable* variable)
{
    VariableNotBound* inst = (VariableNotBound*)::uAllocObject(sizeof(VariableNotBound), VariableNotBound__typeof());
    inst->_ObjInit_2(variable);
    return inst;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\Outracks.Simulator.Client.Uno\0.1.0\Runtime\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

VirtualMachine__uType* VirtualMachine__typeof()
{
    static ::uStaticStrong<VirtualMachine__uType*> type;
    if (type != NULL) return type;

    type = (VirtualMachine__uType*)::uAllocClassType(sizeof(VirtualMachine__uType), "Outracks.Simulator.Runtime.VirtualMachine");

    type->SetFunctions(2,
        ::uNewFunction("Execute", VirtualMachine__Execute, 0, true, ::uObject__typeof(), ::app::Outracks::Simulator::Runtime::IReflection__typeof(), ::app::Outracks::Simulator::Bytecode::Lambda__typeof(), ::uGetArrayType(::uObject__typeof())),
        ::uNewFunction("Execute", VirtualMachine__Execute_1, 0, true, ::uObject__typeof(), ::app::Outracks::Simulator::Bytecode::Lambda__typeof(), ::uGetArrayType(::uObject__typeof())));

    ::uRegisterType(type);
    return type;
}

::uObject* VirtualMachine__Execute(::uStatic* __this, ::uObject* reflection, ::app::Outracks::Simulator::Bytecode::Lambda* lambda, ::uArray* arguments)
{
    return ::uPtr< ::app::Outracks::Simulator::Runtime::ScopeClosure*>(::app::Outracks::Simulator::Runtime::ScopeClosure__New_1(NULL, ::app::Outracks::Simulator::Runtime::Environment__New_1(NULL, ::app::Outracks::Simulator::Bytecode::Optional__Outracks_Simulator_Runtime_Environment__op_Implicit_1(NULL, ::app::Outracks::Simulator::Bytecode::Optional__None(NULL))), reflection))->Execute_1(lambda, arguments);
}

::uObject* VirtualMachine__Execute_1(::uStatic* __this, ::app::Outracks::Simulator::Bytecode::Lambda* lambda, ::uArray* arguments)
{
    return VirtualMachine__Execute(NULL, ::app::Outracks::Simulator::Context__get_Reflection(NULL), lambda, arguments);
}

}}}}
