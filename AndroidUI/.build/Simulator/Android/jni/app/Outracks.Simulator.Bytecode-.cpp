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
#include <app/Outracks.Simulator.Bytecode.NamespaceName.h>
#include <app/Outracks.Simulator.Bytecode.NoOperation.h>
#include <app/Outracks.Simulator.Bytecode.NumberLiteral.h>
#include <app/Outracks.Simulator.Bytecode.NumberType.h>
#include <app/Outracks.Simulator.Bytecode.Optional.h>
#include <app/Outracks.Simulator.Bytecode.Optional__Outracks_Simulator_Byteco-1ce5ab6b.h>
#include <app/Outracks.Simulator.Bytecode.Optional__Outracks_Simulator_Byteco-8b791f23.h>
#include <app/Outracks.Simulator.Bytecode.Optional__Outracks_Simulator_DialogButton.h>
#include <app/Outracks.Simulator.Bytecode.Optional__Outracks_Simulator_Protocol_Reify.h>
#include <app/Outracks.Simulator.Bytecode.Optional__string.h>
#include <app/Outracks.Simulator.Bytecode.OptionalExtensions.h>
#include <app/Outracks.Simulator.Bytecode.Parameter.h>
#include <app/Outracks.Simulator.Bytecode.ProjectBytecode.h>
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
#include <app/Outracks.Simulator.Closure.h>
#include <app/Outracks.Simulator.DialogButton.h>
#include <app/Outracks.Simulator.ImmutableList__Outracks_Simulator_Bytecode_B-14e938f8.h>
#include <app/Outracks.Simulator.ImmutableList__Outracks_Simulator_Bytecode_Expression.h>
#include <app/Outracks.Simulator.ImmutableList__Outracks_Simulator_Bytecode_Parameter.h>
#include <app/Outracks.Simulator.ImmutableList__Outracks_Simulator_Bytecode_Statement.h>
#include <app/Outracks.Simulator.ImmutableList__Outracks_Simulator_Bytecode_TypeName.h>
#include <app/Outracks.Simulator.ImmutableList__string.h>
#include <app/Outracks.Simulator.IndentString.h>
#include <app/Outracks.Simulator.InvalidDataException.h>
#include <app/Outracks.Simulator.List.h>
#include <app/Outracks.Simulator.NonExhaustiveMatch.h>
#include <app/Outracks.Simulator.Protocol.Reify.h>
#include <app/Outracks.Simulator.Serialization.h>
#include <app/Outracks.Simulator.StringSplitting.h>
#include <app/Uno.Action__Outracks_Simulator_Bytecode_AddEventHandler.h>
#include <app/Uno.Action__Outracks_Simulator_Bytecode_AddEventHandler__Uno_IO-e26fccb2.h>
#include <app/Uno.Action__Outracks_Simulator_Bytecode_BindVariable__Uno_IO_Bi-e35bfd02.h>
#include <app/Uno.Action__Outracks_Simulator_Bytecode_BlobLiteral.h>
#include <app/Uno.Action__Outracks_Simulator_Bytecode_BlobLiteral__Uno_IO_BinaryWriter.h>
#include <app/Uno.Action__Outracks_Simulator_Bytecode_BooleanLiteral.h>
#include <app/Uno.Action__Outracks_Simulator_Bytecode_BooleanLiteral__Uno_IO_-9a070063.h>
#include <app/Uno.Action__Outracks_Simulator_Bytecode_CallDynamicMethod.h>
#include <app/Uno.Action__Outracks_Simulator_Bytecode_CallDynamicMethod__Uno_-40a5243f.h>
#include <app/Uno.Action__Outracks_Simulator_Bytecode_CallLambda.h>
#include <app/Uno.Action__Outracks_Simulator_Bytecode_CallLambda__Uno_IO_BinaryWriter.h>
#include <app/Uno.Action__Outracks_Simulator_Bytecode_CallStaticMethod.h>
#include <app/Uno.Action__Outracks_Simulator_Bytecode_CallStaticMethod__Uno_I-687379e9.h>
#include <app/Uno.Action__Outracks_Simulator_Bytecode_EnumLiteral.h>
#include <app/Uno.Action__Outracks_Simulator_Bytecode_EnumLiteral__Uno_IO_BinaryWriter.h>
#include <app/Uno.Action__Outracks_Simulator_Bytecode_Expression.h>
#include <app/Uno.Action__Outracks_Simulator_Bytecode_Expression__Uno_IO_BinaryWriter.h>
#include <app/Uno.Action__Outracks_Simulator_Bytecode_Instantiate.h>
#include <app/Uno.Action__Outracks_Simulator_Bytecode_Instantiate__Uno_IO_BinaryWriter.h>
#include <app/Uno.Action__Outracks_Simulator_Bytecode_IsType.h>
#include <app/Uno.Action__Outracks_Simulator_Bytecode_IsType__Uno_IO_BinaryWriter.h>
#include <app/Uno.Action__Outracks_Simulator_Bytecode_Lambda.h>
#include <app/Uno.Action__Outracks_Simulator_Bytecode_Lambda__Uno_IO_BinaryWriter.h>
#include <app/Uno.Action__Outracks_Simulator_Bytecode_Literal.h>
#include <app/Uno.Action__Outracks_Simulator_Bytecode_Literal__Uno_IO_BinaryWriter.h>
#include <app/Uno.Action__Outracks_Simulator_Bytecode_LogicalOr.h>
#include <app/Uno.Action__Outracks_Simulator_Bytecode_LogicalOr__Uno_IO_BinaryWriter.h>
#include <app/Uno.Action__Outracks_Simulator_Bytecode_MethodGroup.h>
#include <app/Uno.Action__Outracks_Simulator_Bytecode_MethodGroup__Uno_IO_BinaryWriter.h>
#include <app/Uno.Action__Outracks_Simulator_Bytecode_NamespaceName.h>
#include <app/Uno.Action__Outracks_Simulator_Bytecode_NamespaceName__Uno_IO_B-8a25ff61.h>
#include <app/Uno.Action__Outracks_Simulator_Bytecode_NoOperation.h>
#include <app/Uno.Action__Outracks_Simulator_Bytecode_NoOperation__Uno_IO_BinaryWriter.h>
#include <app/Uno.Action__Outracks_Simulator_Bytecode_NumberLiteral.h>
#include <app/Uno.Action__Outracks_Simulator_Bytecode_NumberLiteral__Uno_IO_B-42e4073e.h>
#include <app/Uno.Action__Outracks_Simulator_Bytecode_Parameter__Uno_IO_BinaryWriter.h>
#include <app/Uno.Action__Outracks_Simulator_Bytecode_ReadProperty.h>
#include <app/Uno.Action__Outracks_Simulator_Bytecode_ReadProperty__Uno_IO_Bi-1758cc4.h>
#include <app/Uno.Action__Outracks_Simulator_Bytecode_ReadStaticField.h>
#include <app/Uno.Action__Outracks_Simulator_Bytecode_ReadStaticField__Uno_IO-18c4fe9.h>
#include <app/Uno.Action__Outracks_Simulator_Bytecode_ReadVariable.h>
#include <app/Uno.Action__Outracks_Simulator_Bytecode_ReadVariable__Uno_IO_Bi-552cc9ef.h>
#include <app/Uno.Action__Outracks_Simulator_Bytecode_RemoveEventHandler.h>
#include <app/Uno.Action__Outracks_Simulator_Bytecode_RemoveEventHandler__Uno-8066807d.h>
#include <app/Uno.Action__Outracks_Simulator_Bytecode_Return.h>
#include <app/Uno.Action__Outracks_Simulator_Bytecode_Return__Uno_IO_BinaryWriter.h>
#include <app/Uno.Action__Outracks_Simulator_Bytecode_Statement__Uno_IO_BinaryWriter.h>
#include <app/Uno.Action__Outracks_Simulator_Bytecode_StringLiteral.h>
#include <app/Uno.Action__Outracks_Simulator_Bytecode_StringLiteral__Uno_IO_B-75e974eb.h>
#include <app/Uno.Action__Outracks_Simulator_Bytecode_TypeName.h>
#include <app/Uno.Action__Outracks_Simulator_Bytecode_TypeName__Uno_IO_BinaryWriter.h>
#include <app/Uno.Action__Outracks_Simulator_Bytecode_Variable__Uno_IO_BinaryWriter.h>
#include <app/Uno.Action__Outracks_Simulator_Bytecode_WriteProperty.h>
#include <app/Uno.Action__Outracks_Simulator_Bytecode_WriteProperty__Uno_IO_B-7e7ebb55.h>
#include <app/Uno.Action__string.h>
#include <app/Uno.Action__string__Uno_IO_BinaryWriter.h>
#include <app/Uno.Action__Uno_IO_BinaryWriter__Outracks_Simulator_Bytecode_Na-df4bd280.h>
#include <app/Uno.Action__Uno_IO_BinaryWriter__Outracks_Simulator_Bytecode_TypeName.h>
#include <app/Uno.Action__Uno_IO_BinaryWriter__string.h>
#include <app/Uno.ArgumentNullException.h>
#include <app/Uno.Bool.h>
#include <app/Uno.Byte.h>
#include <app/Uno.Char.h>
#include <app/Uno.Collections.EnumerableExtensions.h>
#include <app/Uno.Collections.IEnumerable__Outracks_Simulator_Bytecode_BindVariable.h>
#include <app/Uno.Collections.IEnumerable__Outracks_Simulator_Bytecode_Expression.h>
#include <app/Uno.Collections.IEnumerable__Outracks_Simulator_Bytecode_Statement.h>
#include <app/Uno.Collections.IEnumerable__Outracks_Simulator_Bytecode_TypeName.h>
#include <app/Uno.Collections.IEnumerable__string.h>
#include <app/Uno.Collections.IEnumerator.h>
#include <app/Uno.Collections.IEnumerator__Outracks_Simulator_Bytecode_BindVariable.h>
#include <app/Uno.Collections.IEnumerator__Outracks_Simulator_Bytecode_Statement.h>
#include <app/Uno.Collections.List__Outracks_Simulator_Bytecode_TypeName.h>
#include <app/Uno.Double.h>
#include <app/Uno.Exception.h>
#include <app/Uno.Func__Outracks_Simulator_Bytecode_AddEventHandler__char.h>
#include <app/Uno.Func__Outracks_Simulator_Bytecode_AddEventHandler__object.h>
#include <app/Uno.Func__Outracks_Simulator_Bytecode_BlobLiteral__char.h>
#include <app/Uno.Func__Outracks_Simulator_Bytecode_BlobLiteral__object.h>
#include <app/Uno.Func__Outracks_Simulator_Bytecode_BooleanLiteral__char.h>
#include <app/Uno.Func__Outracks_Simulator_Bytecode_BooleanLiteral__object.h>
#include <app/Uno.Func__Outracks_Simulator_Bytecode_CallDynamicMethod__char.h>
#include <app/Uno.Func__Outracks_Simulator_Bytecode_CallDynamicMethod__object.h>
#include <app/Uno.Func__Outracks_Simulator_Bytecode_CallLambda__char.h>
#include <app/Uno.Func__Outracks_Simulator_Bytecode_CallLambda__object.h>
#include <app/Uno.Func__Outracks_Simulator_Bytecode_CallStaticMethod__char.h>
#include <app/Uno.Func__Outracks_Simulator_Bytecode_CallStaticMethod__object.h>
#include <app/Uno.Func__Outracks_Simulator_Bytecode_EnumLiteral__char.h>
#include <app/Uno.Func__Outracks_Simulator_Bytecode_EnumLiteral__object.h>
#include <app/Uno.Func__Outracks_Simulator_Bytecode_Expression__char.h>
#include <app/Uno.Func__Outracks_Simulator_Bytecode_Expression__object.h>
#include <app/Uno.Func__Outracks_Simulator_Bytecode_Instantiate__char.h>
#include <app/Uno.Func__Outracks_Simulator_Bytecode_Instantiate__object.h>
#include <app/Uno.Func__Outracks_Simulator_Bytecode_IsType__char.h>
#include <app/Uno.Func__Outracks_Simulator_Bytecode_IsType__object.h>
#include <app/Uno.Func__Outracks_Simulator_Bytecode_Lambda__char.h>
#include <app/Uno.Func__Outracks_Simulator_Bytecode_Lambda__object.h>
#include <app/Uno.Func__Outracks_Simulator_Bytecode_Literal__char.h>
#include <app/Uno.Func__Outracks_Simulator_Bytecode_Literal__object.h>
#include <app/Uno.Func__Outracks_Simulator_Bytecode_LogicalOr__char.h>
#include <app/Uno.Func__Outracks_Simulator_Bytecode_LogicalOr__object.h>
#include <app/Uno.Func__Outracks_Simulator_Bytecode_MethodGroup__char.h>
#include <app/Uno.Func__Outracks_Simulator_Bytecode_MethodGroup__object.h>
#include <app/Uno.Func__Outracks_Simulator_Bytecode_NoOperation__char.h>
#include <app/Uno.Func__Outracks_Simulator_Bytecode_NoOperation__object.h>
#include <app/Uno.Func__Outracks_Simulator_Bytecode_NumberLiteral__char.h>
#include <app/Uno.Func__Outracks_Simulator_Bytecode_NumberLiteral__object.h>
#include <app/Uno.Func__Outracks_Simulator_Bytecode_ReadProperty__char.h>
#include <app/Uno.Func__Outracks_Simulator_Bytecode_ReadProperty__object.h>
#include <app/Uno.Func__Outracks_Simulator_Bytecode_ReadStaticField__char.h>
#include <app/Uno.Func__Outracks_Simulator_Bytecode_ReadStaticField__object.h>
#include <app/Uno.Func__Outracks_Simulator_Bytecode_ReadVariable__char.h>
#include <app/Uno.Func__Outracks_Simulator_Bytecode_ReadVariable__object.h>
#include <app/Uno.Func__Outracks_Simulator_Bytecode_RemoveEventHandler__char.h>
#include <app/Uno.Func__Outracks_Simulator_Bytecode_RemoveEventHandler__object.h>
#include <app/Uno.Func__Outracks_Simulator_Bytecode_Return__char.h>
#include <app/Uno.Func__Outracks_Simulator_Bytecode_Return__object.h>
#include <app/Uno.Func__Outracks_Simulator_Bytecode_StringLiteral__char.h>
#include <app/Uno.Func__Outracks_Simulator_Bytecode_StringLiteral__object.h>
#include <app/Uno.Func__Outracks_Simulator_Bytecode_WriteProperty__char.h>
#include <app/Uno.Func__Outracks_Simulator_Bytecode_WriteProperty__object.h>
#include <app/Uno.Func__Uno_IO_BinaryReader__Outracks_Simulator_Bytecode_BindVariable.h>
#include <app/Uno.Func__Uno_IO_BinaryReader__Outracks_Simulator_Bytecode_Expression.h>
#include <app/Uno.Func__Uno_IO_BinaryReader__Outracks_Simulator_Bytecode_NamespaceName.h>
#include <app/Uno.Func__Uno_IO_BinaryReader__Outracks_Simulator_Bytecode_Parameter.h>
#include <app/Uno.Func__Uno_IO_BinaryReader__Outracks_Simulator_Bytecode_Statement.h>
#include <app/Uno.Func__Uno_IO_BinaryReader__Outracks_Simulator_Bytecode_TypeName.h>
#include <app/Uno.Func__Uno_IO_BinaryReader__Outracks_Simulator_Bytecode_Variable.h>
#include <app/Uno.Func__Uno_IO_BinaryReader__string.h>
#include <app/Uno.Int.h>
#include <app/Uno.IO.BinaryReader.h>
#include <app/Uno.IO.BinaryWriter.h>
#include <app/Uno.Object.h>
#include <app/Uno.Runtime.Implementation.Internal.ArrayEnumerable__Outracks_S-184a0bb8.h>
#include <app/Uno.Runtime.Implementation.Internal.ArrayEnumerable__Outracks_S-5e50637a.h>
#include <app/Uno.Runtime.Implementation.Internal.ArrayEnumerable__Outracks_S-b504f309.h>
#include <app/Uno.Runtime.Implementation.Internal.ArrayEnumerable__string.h>
#include <app/Uno.String.h>
#include <app/Uno.Text.StringBuilder.h>

namespace app {
namespace Outracks {
namespace Simulator {
namespace Bytecode {

// This file was generated based on 'C:\ProgramData\Uno\Packages\Outracks.Simulator.Protocol.Uno\0.1.0\Bytecode\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

AddEventHandler__uType* AddEventHandler__typeof()
{
    static ::uStaticStrong<AddEventHandler__uType*> type;
    if (type != NULL) return type;

    type = (AddEventHandler__uType*)::uAllocClassType(sizeof(AddEventHandler__uType), "Outracks.Simulator.Bytecode.AddEventHandler", false, 0, 3, 0);

    type->SetBaseType(::app::Outracks::Simulator::Bytecode::Expression__typeof());
    type->__fp_ToString = (::uString*(*)(::uObject*))AddEventHandler__ToString;

    type->SetStrongRefs(
        "Event", offsetof(AddEventHandler, Event),
        "Handler", offsetof(AddEventHandler, Handler),
        "Object", offsetof(AddEventHandler, Object));

    type->SetFields(3,
        ::uNewField("Event", NULL, offsetof(AddEventHandler, Event), ::app::Outracks::Simulator::Bytecode::TypeMemberName__typeof()),
        ::uNewField("Handler", NULL, offsetof(AddEventHandler, Handler), ::app::Outracks::Simulator::Bytecode::Expression__typeof()),
        ::uNewField("Object", NULL, offsetof(AddEventHandler, Object), ::app::Outracks::Simulator::Bytecode::Expression__typeof()));

    type->SetFunctions(4,
        ::uNewFunction(".ctor", AddEventHandler__New_1, 0, true, AddEventHandler__typeof(), ::app::Outracks::Simulator::Bytecode::Expression__typeof(), ::app::Outracks::Simulator::Bytecode::TypeMemberName__typeof(), ::app::Outracks::Simulator::Bytecode::Expression__typeof()),
        ::uNewFunction("Read", AddEventHandler__Read_2, 0, true, AddEventHandler__typeof(), ::app::Uno::IO::BinaryReader__typeof()),
        ::uNewFunctionVoid("Write", AddEventHandler__Write_2, 0, true, AddEventHandler__typeof(), ::app::Uno::IO::BinaryWriter__typeof()),
        ::uNewFunctionVoid("Write", AddEventHandler__Write_3, 0, false, ::app::Uno::IO::BinaryWriter__typeof()));

    ::uRegisterType(type);
    return type;
}

void AddEventHandler___ObjInit_2(AddEventHandler* __this, ::app::Outracks::Simulator::Bytecode::Expression* o, ::app::Outracks::Simulator::Bytecode::TypeMemberName* ev, ::app::Outracks::Simulator::Bytecode::Expression* handler)
{
    ::app::Outracks::Simulator::Bytecode::Expression___ObjInit_1(__this);
    __this->Object = o;
    __this->Event = ev;
    __this->Handler = handler;
}

AddEventHandler* AddEventHandler__New_1(::uStatic* __this, ::app::Outracks::Simulator::Bytecode::Expression* o, ::app::Outracks::Simulator::Bytecode::TypeMemberName* ev, ::app::Outracks::Simulator::Bytecode::Expression* handler)
{
    AddEventHandler* inst = (AddEventHandler*)::uAllocObject(sizeof(AddEventHandler), AddEventHandler__typeof());
    inst->_ObjInit_2(o, ev, handler);
    return inst;
}

AddEventHandler* AddEventHandler__Read_2(::uStatic* __this, ::app::Uno::IO::BinaryReader* reader)
{
    ::app::Outracks::Simulator::Bytecode::Expression* _Object = ::uPtr< ::uDelegate*>(::app::Outracks::Simulator::Bytecode::Expression__Read_1)->Invoke< ::app::Outracks::Simulator::Bytecode::Expression*, ::app::Uno::IO::BinaryReader*>(reader);
    ::app::Outracks::Simulator::Bytecode::TypeMemberName* _Event = ::app::Outracks::Simulator::Bytecode::TypeMemberName__Read(NULL, reader);
    ::app::Outracks::Simulator::Bytecode::Expression* _Handler = ::uPtr< ::uDelegate*>(::app::Outracks::Simulator::Bytecode::Expression__Read_1)->Invoke< ::app::Outracks::Simulator::Bytecode::Expression*, ::app::Uno::IO::BinaryReader*>(reader);
    return AddEventHandler__New_1(NULL, _Object, _Event, _Handler);
}

::uString* AddEventHandler__ToString(AddEventHandler* __this)
{
    return ::app::Uno::String__op_Addition_1(NULL, ::app::Uno::String__op_Addition_2(NULL, ::app::Uno::String__op_Addition_2(NULL, ::app::Uno::String__op_Addition(NULL, (::uObject*)__this->Object, ::uGetConstString(".")), ::uPtr< ::app::Outracks::Simulator::Bytecode::TypeMemberName*>(__this->Event)->Name), ::uGetConstString(" += ")), (::uObject*)__this->Handler);
}

void AddEventHandler__Write_2(::uStatic* __this, AddEventHandler* o, ::app::Uno::IO::BinaryWriter* writer)
{
    ::uPtr< AddEventHandler*>(o)->Write_3(writer);
}

void AddEventHandler__Write_3(AddEventHandler* __this, ::app::Uno::IO::BinaryWriter* writer)
{
    ::uPtr< ::uDelegate*>(::app::Outracks::Simulator::Bytecode::Expression__Write_1)->InvokeVoid< ::app::Outracks::Simulator::Bytecode::Expression*, ::app::Uno::IO::BinaryWriter*>(__this->Object, writer);
    ::app::Outracks::Simulator::Bytecode::TypeMemberName__Write_1(NULL, __this->Event, writer);
    ::uPtr< ::uDelegate*>(::app::Outracks::Simulator::Bytecode::Expression__Write_1)->InvokeVoid< ::app::Outracks::Simulator::Bytecode::Expression*, ::app::Uno::IO::BinaryWriter*>(__this->Handler, writer);
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\Outracks.Simulator.Protocol.Uno\0.1.0\Bytecode\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

::uStaticStrong< ::uDelegate*> BindVariable__Read;
::uStaticStrong< ::uDelegate*> BindVariable__Write;

BindVariable__uType* BindVariable__typeof()
{
    static ::uStaticStrong<BindVariable__uType*> type;
    if (type != NULL) return type;

    type = (BindVariable__uType*)::uAllocClassType(sizeof(BindVariable__uType), "Outracks.Simulator.Bytecode.BindVariable", false, 0, 2, 0);

    type->__fp_ToString = (::uString*(*)(::uObject*))BindVariable__ToString;

    type->SetStrongRefs(
        "Expression", offsetof(BindVariable, Expression),
        "Variable", offsetof(BindVariable, Variable));

    type->SetFields(4,
        ::uNewField("Expression", NULL, offsetof(BindVariable, Expression), ::app::Outracks::Simulator::Bytecode::Expression__typeof()),
        ::uNewField("Read", &BindVariable__Read, 0, ::app::Uno::Func__Uno_IO_BinaryReader__Outracks_Simulator_Bytecode_BindVariable__typeof()),
        ::uNewField("Variable", NULL, offsetof(BindVariable, Variable), ::app::Outracks::Simulator::Bytecode::Variable__typeof()),
        ::uNewField("Write", &BindVariable__Write, 0, ::app::Uno::Action__Outracks_Simulator_Bytecode_BindVariable__Uno_IO_BinaryWriter__typeof()));

    type->SetFunctions(3,
        ::uNewFunction("_Read", BindVariable___Read, 0, true, BindVariable__typeof(), ::app::Uno::IO::BinaryReader__typeof()),
        ::uNewFunctionVoid("_Write", BindVariable___Write, 0, true, BindVariable__typeof(), ::app::Uno::IO::BinaryWriter__typeof()),
        ::uNewFunction(".ctor", BindVariable__New_1, 0, true, BindVariable__typeof(), ::app::Outracks::Simulator::Bytecode::Variable__typeof(), ::app::Outracks::Simulator::Bytecode::Expression__typeof()));

    ::uRegisterType(type);
    return type;
}

void BindVariable___ObjInit(BindVariable* __this, ::app::Outracks::Simulator::Bytecode::Variable* variable, ::app::Outracks::Simulator::Bytecode::Expression* expression)
{
    __this->Variable = variable;
    __this->Expression = expression;
}

BindVariable* BindVariable___Read(::uStatic* __this, ::app::Uno::IO::BinaryReader* reader)
{
    ::app::Outracks::Simulator::Bytecode::Variable* variable = ::uPtr< ::uDelegate*>(::app::Outracks::Simulator::Bytecode::Variable__Read)->Invoke< ::app::Outracks::Simulator::Bytecode::Variable*, ::app::Uno::IO::BinaryReader*>(reader);
    ::app::Outracks::Simulator::Bytecode::Expression* expression = ::uPtr< ::uDelegate*>(::app::Outracks::Simulator::Bytecode::Expression__Read_1)->Invoke< ::app::Outracks::Simulator::Bytecode::Expression*, ::app::Uno::IO::BinaryReader*>(reader);
    return BindVariable__New_1(NULL, variable, expression);
}

void BindVariable___TypeInit(::uStatic* __this)
{
    BindVariable__Write = ::uNewDelegateNonVirt(::app::Uno::Action__Outracks_Simulator_Bytecode_BindVariable__Uno_IO_BinaryWriter__typeof(), (const void*)BindVariable___Write);
    BindVariable__Read = ::uNewDelegateNonVirt(::app::Uno::Func__Uno_IO_BinaryReader__Outracks_Simulator_Bytecode_BindVariable__typeof(), (const void*)BindVariable___Read);
}

void BindVariable___Write(::uStatic* __this, BindVariable* s, ::app::Uno::IO::BinaryWriter* writer)
{
    ::uPtr< ::uDelegate*>(::app::Outracks::Simulator::Bytecode::Variable__Write)->InvokeVoid< ::app::Outracks::Simulator::Bytecode::Variable*, ::app::Uno::IO::BinaryWriter*>(::uPtr< BindVariable*>(s)->Variable, writer);
    ::uPtr< ::uDelegate*>(::app::Outracks::Simulator::Bytecode::Expression__Write_1)->InvokeVoid< ::app::Outracks::Simulator::Bytecode::Expression*, ::app::Uno::IO::BinaryWriter*>(s->Expression, writer);
}

BindVariable* BindVariable__New_1(::uStatic* __this, ::app::Outracks::Simulator::Bytecode::Variable* variable, ::app::Outracks::Simulator::Bytecode::Expression* expression)
{
    BindVariable* inst = (BindVariable*)::uAllocObject(sizeof(BindVariable), BindVariable__typeof());
    inst->_ObjInit(variable, expression);
    return inst;
}

::uString* BindVariable__ToString(BindVariable* __this)
{
    return ::app::Uno::String__op_Addition_1(NULL, ::app::Uno::String__op_Addition_2(NULL, ::app::Uno::String__op_Addition_2(NULL, ::uGetConstString("var "), ::uPtr< ::app::Outracks::Simulator::Bytecode::Variable*>(__this->Variable)->Name), ::uGetConstString(" = ")), (::uObject*)__this->Expression);
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\Outracks.Simulator.Protocol.Uno\0.1.0\Bytecode\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

BlobLiteral__uType* BlobLiteral__typeof()
{
    static ::uStaticStrong<BlobLiteral__uType*> type;
    if (type != NULL) return type;

    type = (BlobLiteral__uType*)::uAllocClassType(sizeof(BlobLiteral__uType), "Outracks.Simulator.Bytecode.BlobLiteral", false, 0, 1, 0);

    type->SetBaseType(::app::Outracks::Simulator::Bytecode::Literal__typeof());
    type->__fp_ToString = (::uString*(*)(::uObject*))BlobLiteral__ToString;

    type->SetStrongRefs(
        "Bytes", offsetof(BlobLiteral, Bytes));

    type->SetFields(1,
        ::uNewField("Bytes", NULL, offsetof(BlobLiteral, Bytes), ::uGetArrayType(::app::Uno::Byte__typeof())));

    type->SetFunctions(3,
        ::uNewFunction(".ctor", BlobLiteral__New_1, 0, true, BlobLiteral__typeof(), ::uGetArrayType(::app::Uno::Byte__typeof())),
        ::uNewFunction("Read", BlobLiteral__Read_3, 0, true, BlobLiteral__typeof(), ::app::Uno::IO::BinaryReader__typeof()),
        ::uNewFunctionVoid("Write", BlobLiteral__Write_3, 0, true, BlobLiteral__typeof(), ::app::Uno::IO::BinaryWriter__typeof()));

    ::uRegisterType(type);
    return type;
}

void BlobLiteral___ObjInit_3(BlobLiteral* __this, ::uArray* bytes)
{
    ::app::Outracks::Simulator::Bytecode::Literal___ObjInit_2(__this);
    __this->Bytes = bytes;
}

BlobLiteral* BlobLiteral__New_1(::uStatic* __this, ::uArray* bytes)
{
    BlobLiteral* inst = (BlobLiteral*)::uAllocObject(sizeof(BlobLiteral), BlobLiteral__typeof());
    inst->_ObjInit_3(bytes);
    return inst;
}

BlobLiteral* BlobLiteral__Read_3(::uStatic* __this, ::app::Uno::IO::BinaryReader* reader)
{
    int length = ::uPtr< ::app::Uno::IO::BinaryReader*>(reader)->ReadInt();
    ::uArray* bytes = reader->ReadBytes(length);
    return BlobLiteral__New_1(NULL, bytes);
}

::uString* BlobLiteral__ToString(BlobLiteral* __this)
{
    return ::app::Uno::String__op_Addition_2(NULL, ::app::Uno::String__op_Addition_1(NULL, ::uGetConstString("new byte["), ::uBox< int>(::app::Uno::Int__typeof(), ::uPtr< ::uArray*>(__this->Bytes)->Length())), ::uGetConstString("]"));
}

void BlobLiteral__Write_3(::uStatic* __this, BlobLiteral* blob, ::app::Uno::IO::BinaryWriter* writer)
{
    ::uPtr< ::app::Uno::IO::BinaryWriter*>(writer)->Write_13(::uPtr< ::uArray*>(::uPtr< BlobLiteral*>(blob)->Bytes)->Length());
    writer->Write(blob->Bytes);
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\Outracks.Simulator.Protocol.Uno\0.1.0\Bytecode\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

BooleanLiteral__uType* BooleanLiteral__typeof()
{
    static ::uStaticStrong<BooleanLiteral__uType*> type;
    if (type != NULL) return type;

    type = (BooleanLiteral__uType*)::uAllocClassType(sizeof(BooleanLiteral__uType), "Outracks.Simulator.Bytecode.BooleanLiteral", false, 0, 0, 0);

    type->SetBaseType(::app::Outracks::Simulator::Bytecode::Literal__typeof());
    type->__fp_ToString = (::uString*(*)(::uObject*))BooleanLiteral__ToString;

    type->SetFields(1,
        ::uNewField("BooleanValue", NULL, offsetof(BooleanLiteral, BooleanValue), ::app::Uno::Bool__typeof()));

    type->SetFunctions(3,
        ::uNewFunction(".ctor", BooleanLiteral__New_1, 0, true, BooleanLiteral__typeof(), ::app::Uno::Bool__typeof()),
        ::uNewFunction("Read", BooleanLiteral__Read_3, 0, true, BooleanLiteral__typeof(), ::app::Uno::IO::BinaryReader__typeof()),
        ::uNewFunctionVoid("Write", BooleanLiteral__Write_3, 0, true, BooleanLiteral__typeof(), ::app::Uno::IO::BinaryWriter__typeof()));

    ::uRegisterType(type);
    return type;
}

void BooleanLiteral___ObjInit_3(BooleanLiteral* __this, bool booleanValue)
{
    ::app::Outracks::Simulator::Bytecode::Literal___ObjInit_2(__this);
    __this->BooleanValue = booleanValue;
}

BooleanLiteral* BooleanLiteral__New_1(::uStatic* __this, bool booleanValue)
{
    BooleanLiteral* inst = (BooleanLiteral*)::uAllocObject(sizeof(BooleanLiteral), BooleanLiteral__typeof());
    inst->_ObjInit_3(booleanValue);
    return inst;
}

BooleanLiteral* BooleanLiteral__Read_3(::uStatic* __this, ::app::Uno::IO::BinaryReader* reader)
{
    return BooleanLiteral__New_1(NULL, ::uPtr< ::app::Uno::IO::BinaryReader*>(reader)->ReadBoolean());
}

::uString* BooleanLiteral__ToString(BooleanLiteral* __this)
{
    bool ind_123 = bool();
    return ::app::Uno::Bool::ToString((ind_123 = __this->BooleanValue, ind_123));
}

void BooleanLiteral__Write_3(::uStatic* __this, BooleanLiteral* l, ::app::Uno::IO::BinaryWriter* writer)
{
    ::uPtr< ::app::Uno::IO::BinaryWriter*>(writer)->Write_1(::uPtr< BooleanLiteral*>(l)->BooleanValue);
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\Outracks.Simulator.Protocol.Uno\0.1.0\Bytecode\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

CallDynamicMethod__uType* CallDynamicMethod__typeof()
{
    static ::uStaticStrong<CallDynamicMethod__uType*> type;
    if (type != NULL) return type;

    type = (CallDynamicMethod__uType*)::uAllocClassType(sizeof(CallDynamicMethod__uType), "Outracks.Simulator.Bytecode.CallDynamicMethod", false, 0, 3, 0);

    type->SetBaseType(::app::Outracks::Simulator::Bytecode::Expression__typeof());
    type->__fp_ToString = (::uString*(*)(::uObject*))CallDynamicMethod__ToString;

    type->SetStrongRefs(
        "Arguments", offsetof(CallDynamicMethod, Arguments),
        "Method", offsetof(CallDynamicMethod, Method),
        "Object", offsetof(CallDynamicMethod, Object));

    type->SetFields(3,
        ::uNewField("Arguments", NULL, offsetof(CallDynamicMethod, Arguments), ::app::Outracks::Simulator::ImmutableList__Outracks_Simulator_Bytecode_Expression__typeof()),
        ::uNewField("Method", NULL, offsetof(CallDynamicMethod, Method), ::app::Outracks::Simulator::Bytecode::TypeMemberName__typeof()),
        ::uNewField("Object", NULL, offsetof(CallDynamicMethod, Object), ::app::Outracks::Simulator::Bytecode::Expression__typeof()));

    type->SetFunctions(5,
        ::uNewFunction(".ctor", CallDynamicMethod__New_1, 0, true, CallDynamicMethod__typeof(), ::app::Outracks::Simulator::Bytecode::Expression__typeof(), ::app::Outracks::Simulator::Bytecode::TypeMemberName__typeof(), ::uGetArrayType(::app::Outracks::Simulator::Bytecode::Expression__typeof())),
        ::uNewFunction(".ctor", CallDynamicMethod__New_2, 0, true, CallDynamicMethod__typeof(), ::app::Outracks::Simulator::Bytecode::Expression__typeof(), ::app::Outracks::Simulator::Bytecode::TypeMemberName__typeof(), ::app::Outracks::Simulator::ImmutableList__Outracks_Simulator_Bytecode_Expression__typeof()),
        ::uNewFunction("Read", CallDynamicMethod__Read_2, 0, true, CallDynamicMethod__typeof(), ::app::Uno::IO::BinaryReader__typeof()),
        ::uNewFunctionVoid("Write", CallDynamicMethod__Write_2, 0, false, ::app::Uno::IO::BinaryWriter__typeof()),
        ::uNewFunctionVoid("Write", CallDynamicMethod__Write_3, 0, true, CallDynamicMethod__typeof(), ::app::Uno::IO::BinaryWriter__typeof()));

    ::uRegisterType(type);
    return type;
}

void CallDynamicMethod___ObjInit_2(CallDynamicMethod* __this, ::app::Outracks::Simulator::Bytecode::Expression* o, ::app::Outracks::Simulator::Bytecode::TypeMemberName* method, ::uArray* arguments)
{
    __this->_ObjInit_3(o, method, ::app::Outracks::Simulator::List__ToImmutableList__Outracks_Simulator_Bytecode_Expression(NULL, (::uObject*)::app::Uno::Runtime::Implementation::Internal::ArrayEnumerable__Outracks_Simulator_Bytecode_Expression__New_1(NULL, arguments)));
}

void CallDynamicMethod___ObjInit_3(CallDynamicMethod* __this, ::app::Outracks::Simulator::Bytecode::Expression* o, ::app::Outracks::Simulator::Bytecode::TypeMemberName* method, ::app::Outracks::Simulator::ImmutableList__Outracks_Simulator_Bytecode_Expression* arguments)
{
    ::app::Outracks::Simulator::Bytecode::Expression___ObjInit_1(__this);
    __this->Object = o;
    __this->Method = method;
    __this->Arguments = arguments;
}

CallDynamicMethod* CallDynamicMethod__New_1(::uStatic* __this, ::app::Outracks::Simulator::Bytecode::Expression* o, ::app::Outracks::Simulator::Bytecode::TypeMemberName* method, ::uArray* arguments)
{
    CallDynamicMethod* inst = (CallDynamicMethod*)::uAllocObject(sizeof(CallDynamicMethod), CallDynamicMethod__typeof());
    inst->_ObjInit_2(o, method, arguments);
    return inst;
}

CallDynamicMethod* CallDynamicMethod__New_2(::uStatic* __this, ::app::Outracks::Simulator::Bytecode::Expression* o, ::app::Outracks::Simulator::Bytecode::TypeMemberName* method, ::app::Outracks::Simulator::ImmutableList__Outracks_Simulator_Bytecode_Expression* arguments)
{
    CallDynamicMethod* inst = (CallDynamicMethod*)::uAllocObject(sizeof(CallDynamicMethod), CallDynamicMethod__typeof());
    inst->_ObjInit_3(o, method, arguments);
    return inst;
}

CallDynamicMethod* CallDynamicMethod__Read_2(::uStatic* __this, ::app::Uno::IO::BinaryReader* reader)
{
    ::app::Outracks::Simulator::Bytecode::Expression* _Object = ::uPtr< ::uDelegate*>(::app::Outracks::Simulator::Bytecode::Expression__Read_1)->Invoke< ::app::Outracks::Simulator::Bytecode::Expression*, ::app::Uno::IO::BinaryReader*>(reader);
    ::app::Outracks::Simulator::Bytecode::TypeMemberName* _Method = ::app::Outracks::Simulator::Bytecode::TypeMemberName__Read(NULL, reader);
    ::app::Outracks::Simulator::ImmutableList__Outracks_Simulator_Bytecode_Expression* _Arguments = ::app::Outracks::Simulator::List__Read__Outracks_Simulator_Bytecode_Expression(NULL, reader, ::app::Outracks::Simulator::Bytecode::Expression__Read_1);
    return CallDynamicMethod__New_2(NULL, _Object, _Method, _Arguments);
}

::uString* CallDynamicMethod__ToString(CallDynamicMethod* __this)
{
    return ::app::Uno::String__op_Addition_2(NULL, ::app::Uno::String__op_Addition_2(NULL, ::app::Uno::String__op_Addition_2(NULL, ::app::Uno::String__op_Addition_2(NULL, ::app::Uno::String__op_Addition(NULL, (::uObject*)__this->Object, ::uGetConstString(".")), ::uPtr< ::app::Outracks::Simulator::Bytecode::TypeMemberName*>(__this->Method)->Name), ::uGetConstString("(")), ::app::Outracks::Simulator::StringSplitting__JoinToString__Outracks_Simulator_Bytecode_Expression(NULL, (::uObject*)__this->Arguments, ::uGetConstString(", "))), ::uGetConstString(")"));
}

void CallDynamicMethod__Write_2(CallDynamicMethod* __this, ::app::Uno::IO::BinaryWriter* writer)
{
    ::uPtr< ::uDelegate*>(::app::Outracks::Simulator::Bytecode::Expression__Write_1)->InvokeVoid< ::app::Outracks::Simulator::Bytecode::Expression*, ::app::Uno::IO::BinaryWriter*>(__this->Object, writer);
    ::app::Outracks::Simulator::Bytecode::TypeMemberName__Write_1(NULL, __this->Method, writer);
    ::app::Outracks::Simulator::List__Write__Outracks_Simulator_Bytecode_Expression(NULL, writer, __this->Arguments, ::app::Outracks::Simulator::Bytecode::Expression__Write_1);
}

void CallDynamicMethod__Write_3(::uStatic* __this, CallDynamicMethod* o, ::app::Uno::IO::BinaryWriter* writer)
{
    ::uPtr< CallDynamicMethod*>(o)->Write_2(writer);
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\Outracks.Simulator.Protocol.Uno\0.1.0\Bytecode\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

CallLambda__uType* CallLambda__typeof()
{
    static ::uStaticStrong<CallLambda__uType*> type;
    if (type != NULL) return type;

    type = (CallLambda__uType*)::uAllocClassType(sizeof(CallLambda__uType), "Outracks.Simulator.Bytecode.CallLambda", false, 0, 2, 0);

    type->SetBaseType(::app::Outracks::Simulator::Bytecode::Expression__typeof());
    type->__fp_ToString = (::uString*(*)(::uObject*))CallLambda__ToString;

    type->SetStrongRefs(
        "Arguments", offsetof(CallLambda, Arguments),
        "Lambda", offsetof(CallLambda, Lambda));

    type->SetFields(2,
        ::uNewField("Arguments", NULL, offsetof(CallLambda, Arguments), ::app::Outracks::Simulator::ImmutableList__Outracks_Simulator_Bytecode_Expression__typeof()),
        ::uNewField("Lambda", NULL, offsetof(CallLambda, Lambda), ::app::Outracks::Simulator::Bytecode::Expression__typeof()));

    type->SetFunctions(4,
        ::uNewFunction(".ctor", CallLambda__New_1, 0, true, CallLambda__typeof(), ::app::Outracks::Simulator::Bytecode::Expression__typeof(), ::uGetArrayType(::app::Outracks::Simulator::Bytecode::Expression__typeof())),
        ::uNewFunction(".ctor", CallLambda__New_2, 0, true, CallLambda__typeof(), ::app::Outracks::Simulator::Bytecode::Expression__typeof(), ::app::Outracks::Simulator::ImmutableList__Outracks_Simulator_Bytecode_Expression__typeof()),
        ::uNewFunction("Read", CallLambda__Read_2, 0, true, CallLambda__typeof(), ::app::Uno::IO::BinaryReader__typeof()),
        ::uNewFunctionVoid("Write", CallLambda__Write_2, 0, true, CallLambda__typeof(), ::app::Uno::IO::BinaryWriter__typeof()));

    ::uRegisterType(type);
    return type;
}

void CallLambda___ObjInit_2(CallLambda* __this, ::app::Outracks::Simulator::Bytecode::Expression* lambda, ::uArray* arguments)
{
    __this->_ObjInit_3(lambda, ::app::Outracks::Simulator::List__ToImmutableList__Outracks_Simulator_Bytecode_Expression(NULL, (::uObject*)::app::Uno::Runtime::Implementation::Internal::ArrayEnumerable__Outracks_Simulator_Bytecode_Expression__New_1(NULL, arguments)));
}

void CallLambda___ObjInit_3(CallLambda* __this, ::app::Outracks::Simulator::Bytecode::Expression* lanbda, ::app::Outracks::Simulator::ImmutableList__Outracks_Simulator_Bytecode_Expression* arguments)
{
    ::app::Outracks::Simulator::Bytecode::Expression___ObjInit_1(__this);
    __this->Lambda = lanbda;
    __this->Arguments = arguments;
}

CallLambda* CallLambda__New_1(::uStatic* __this, ::app::Outracks::Simulator::Bytecode::Expression* lambda, ::uArray* arguments)
{
    CallLambda* inst = (CallLambda*)::uAllocObject(sizeof(CallLambda), CallLambda__typeof());
    inst->_ObjInit_2(lambda, arguments);
    return inst;
}

CallLambda* CallLambda__New_2(::uStatic* __this, ::app::Outracks::Simulator::Bytecode::Expression* lanbda, ::app::Outracks::Simulator::ImmutableList__Outracks_Simulator_Bytecode_Expression* arguments)
{
    CallLambda* inst = (CallLambda*)::uAllocObject(sizeof(CallLambda), CallLambda__typeof());
    inst->_ObjInit_3(lanbda, arguments);
    return inst;
}

CallLambda* CallLambda__Read_2(::uStatic* __this, ::app::Uno::IO::BinaryReader* reader)
{
    ::app::Outracks::Simulator::Bytecode::Expression* lambda = ::uPtr< ::uDelegate*>(::app::Outracks::Simulator::Bytecode::Expression__Read_1)->Invoke< ::app::Outracks::Simulator::Bytecode::Expression*, ::app::Uno::IO::BinaryReader*>(reader);
    ::app::Outracks::Simulator::ImmutableList__Outracks_Simulator_Bytecode_Expression* arguments = ::app::Outracks::Simulator::List__Read__Outracks_Simulator_Bytecode_Expression(NULL, reader, ::app::Outracks::Simulator::Bytecode::Expression__Read_1);
    return CallLambda__New_2(NULL, lambda, arguments);
}

::uString* CallLambda__ToString(CallLambda* __this)
{
    return ::app::Uno::String__op_Addition_2(NULL, ::app::Uno::String__op_Addition_2(NULL, ::app::Uno::String__op_Addition(NULL, (::uObject*)__this->Lambda, ::uGetConstString("(")), ::app::Outracks::Simulator::StringSplitting__JoinToString__Outracks_Simulator_Bytecode_Expression(NULL, (::uObject*)__this->Arguments, ::uGetConstString(", "))), ::uGetConstString(")"));
}

void CallLambda__Write_2(::uStatic* __this, CallLambda* o, ::app::Uno::IO::BinaryWriter* writer)
{
    ::uPtr< ::uDelegate*>(::app::Outracks::Simulator::Bytecode::Expression__Write_1)->InvokeVoid< ::app::Outracks::Simulator::Bytecode::Expression*, ::app::Uno::IO::BinaryWriter*>(::uPtr< CallLambda*>(o)->Lambda, writer);
    ::app::Outracks::Simulator::List__Write__Outracks_Simulator_Bytecode_Expression(NULL, writer, o->Arguments, ::app::Outracks::Simulator::Bytecode::Expression__Write_1);
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\Outracks.Simulator.Protocol.Uno\0.1.0\Bytecode\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

CallStaticMethod__uType* CallStaticMethod__typeof()
{
    static ::uStaticStrong<CallStaticMethod__uType*> type;
    if (type != NULL) return type;

    type = (CallStaticMethod__uType*)::uAllocClassType(sizeof(CallStaticMethod__uType), "Outracks.Simulator.Bytecode.CallStaticMethod", false, 0, 2, 0);

    type->SetBaseType(::app::Outracks::Simulator::Bytecode::Expression__typeof());
    type->__fp_ToString = (::uString*(*)(::uObject*))CallStaticMethod__ToString;

    type->SetStrongRefs(
        "Arguments", offsetof(CallStaticMethod, Arguments),
        "StaticMethod", offsetof(CallStaticMethod, StaticMethod));

    type->SetFields(2,
        ::uNewField("Arguments", NULL, offsetof(CallStaticMethod, Arguments), ::app::Outracks::Simulator::ImmutableList__Outracks_Simulator_Bytecode_Expression__typeof()),
        ::uNewField("StaticMethod", NULL, offsetof(CallStaticMethod, StaticMethod), ::app::Outracks::Simulator::Bytecode::StaticMemberName__typeof()));

    type->SetFunctions(5,
        ::uNewFunction(".ctor", CallStaticMethod__New_1, 0, true, CallStaticMethod__typeof(), ::app::Outracks::Simulator::Bytecode::StaticMemberName__typeof(), ::uGetArrayType(::app::Outracks::Simulator::Bytecode::Expression__typeof())),
        ::uNewFunction(".ctor", CallStaticMethod__New_2, 0, true, CallStaticMethod__typeof(), ::app::Outracks::Simulator::Bytecode::StaticMemberName__typeof(), ::app::Outracks::Simulator::ImmutableList__Outracks_Simulator_Bytecode_Expression__typeof()),
        ::uNewFunction("Read", CallStaticMethod__Read_2, 0, true, CallStaticMethod__typeof(), ::app::Uno::IO::BinaryReader__typeof()),
        ::uNewFunctionVoid("Write", CallStaticMethod__Write_2, 0, false, ::app::Uno::IO::BinaryWriter__typeof()),
        ::uNewFunctionVoid("Write", CallStaticMethod__Write_3, 0, true, CallStaticMethod__typeof(), ::app::Uno::IO::BinaryWriter__typeof()));

    ::uRegisterType(type);
    return type;
}

void CallStaticMethod___ObjInit_2(CallStaticMethod* __this, ::app::Outracks::Simulator::Bytecode::StaticMemberName* staticMethod, ::uArray* arguments)
{
    __this->_ObjInit_3(staticMethod, ::app::Outracks::Simulator::List__ToImmutableList__Outracks_Simulator_Bytecode_Expression(NULL, (::uObject*)::app::Uno::Runtime::Implementation::Internal::ArrayEnumerable__Outracks_Simulator_Bytecode_Expression__New_1(NULL, arguments)));
}

void CallStaticMethod___ObjInit_3(CallStaticMethod* __this, ::app::Outracks::Simulator::Bytecode::StaticMemberName* staticMethod, ::app::Outracks::Simulator::ImmutableList__Outracks_Simulator_Bytecode_Expression* arguments)
{
    ::app::Outracks::Simulator::Bytecode::Expression___ObjInit_1(__this);
    __this->StaticMethod = staticMethod;
    __this->Arguments = arguments;
}

CallStaticMethod* CallStaticMethod__New_1(::uStatic* __this, ::app::Outracks::Simulator::Bytecode::StaticMemberName* staticMethod, ::uArray* arguments)
{
    CallStaticMethod* inst = (CallStaticMethod*)::uAllocObject(sizeof(CallStaticMethod), CallStaticMethod__typeof());
    inst->_ObjInit_2(staticMethod, arguments);
    return inst;
}

CallStaticMethod* CallStaticMethod__New_2(::uStatic* __this, ::app::Outracks::Simulator::Bytecode::StaticMemberName* staticMethod, ::app::Outracks::Simulator::ImmutableList__Outracks_Simulator_Bytecode_Expression* arguments)
{
    CallStaticMethod* inst = (CallStaticMethod*)::uAllocObject(sizeof(CallStaticMethod), CallStaticMethod__typeof());
    inst->_ObjInit_3(staticMethod, arguments);
    return inst;
}

CallStaticMethod* CallStaticMethod__Read_2(::uStatic* __this, ::app::Uno::IO::BinaryReader* reader)
{
    ::app::Outracks::Simulator::Bytecode::StaticMemberName* _StaticMethod = ::app::Outracks::Simulator::Bytecode::StaticMemberName__Read(NULL, reader);
    ::app::Outracks::Simulator::ImmutableList__Outracks_Simulator_Bytecode_Expression* _Arguments = ::app::Outracks::Simulator::List__Read__Outracks_Simulator_Bytecode_Expression(NULL, reader, ::app::Outracks::Simulator::Bytecode::Expression__Read_1);
    return CallStaticMethod__New_2(NULL, _StaticMethod, _Arguments);
}

::uString* CallStaticMethod__ToString(CallStaticMethod* __this)
{
    return ::app::Uno::String__op_Addition_2(NULL, ::app::Uno::String__op_Addition_2(NULL, ::app::Uno::String__op_Addition(NULL, (::uObject*)__this->StaticMethod, ::uGetConstString("(")), ::app::Outracks::Simulator::StringSplitting__JoinToString__Outracks_Simulator_Bytecode_Expression(NULL, (::uObject*)__this->Arguments, ::uGetConstString(", "))), ::uGetConstString(")"));
}

void CallStaticMethod__Write_2(CallStaticMethod* __this, ::app::Uno::IO::BinaryWriter* writer)
{
    ::app::Outracks::Simulator::Bytecode::StaticMemberName__Write(NULL, __this->StaticMethod, writer);
    ::app::Outracks::Simulator::List__Write__Outracks_Simulator_Bytecode_Expression(NULL, writer, __this->Arguments, ::app::Outracks::Simulator::Bytecode::Expression__Write_1);
}

void CallStaticMethod__Write_3(::uStatic* __this, CallStaticMethod* o, ::app::Uno::IO::BinaryWriter* writer)
{
    ::uPtr< CallStaticMethod*>(o)->Write_2(writer);
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\Outracks.Simulator.Protocol.Uno\0.1.0\Bytecode\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

EnumLiteral__uType* EnumLiteral__typeof()
{
    static ::uStaticStrong<EnumLiteral__uType*> type;
    if (type != NULL) return type;

    type = (EnumLiteral__uType*)::uAllocClassType(sizeof(EnumLiteral__uType), "Outracks.Simulator.Bytecode.EnumLiteral", false, 0, 1, 0);

    type->SetBaseType(::app::Outracks::Simulator::Bytecode::Literal__typeof());
    type->__fp_ToString = (::uString*(*)(::uObject*))EnumLiteral__ToString;

    type->SetStrongRefs(
        "Value", offsetof(EnumLiteral, Value));

    type->SetFields(1,
        ::uNewField("Value", NULL, offsetof(EnumLiteral, Value), ::app::Outracks::Simulator::Bytecode::StaticMemberName__typeof()));

    type->SetFunctions(3,
        ::uNewFunction(".ctor", EnumLiteral__New_1, 0, true, EnumLiteral__typeof(), ::app::Outracks::Simulator::Bytecode::StaticMemberName__typeof()),
        ::uNewFunction("Read", EnumLiteral__Read_3, 0, true, EnumLiteral__typeof(), ::app::Uno::IO::BinaryReader__typeof()),
        ::uNewFunctionVoid("Write", EnumLiteral__Write_3, 0, true, EnumLiteral__typeof(), ::app::Uno::IO::BinaryWriter__typeof()));

    ::uRegisterType(type);
    return type;
}

void EnumLiteral___ObjInit_3(EnumLiteral* __this, ::app::Outracks::Simulator::Bytecode::StaticMemberName* value)
{
    ::app::Outracks::Simulator::Bytecode::Literal___ObjInit_2(__this);
    __this->Value = value;
}

EnumLiteral* EnumLiteral__New_1(::uStatic* __this, ::app::Outracks::Simulator::Bytecode::StaticMemberName* value)
{
    EnumLiteral* inst = (EnumLiteral*)::uAllocObject(sizeof(EnumLiteral), EnumLiteral__typeof());
    inst->_ObjInit_3(value);
    return inst;
}

EnumLiteral* EnumLiteral__Read_3(::uStatic* __this, ::app::Uno::IO::BinaryReader* reader)
{
    return EnumLiteral__New_1(NULL, ::app::Outracks::Simulator::Bytecode::StaticMemberName__Read(NULL, reader));
}

::uString* EnumLiteral__ToString(EnumLiteral* __this)
{
    return ::uPtr< ::app::Outracks::Simulator::Bytecode::StaticMemberName*>(__this->Value)->ToString();
}

void EnumLiteral__Write_3(::uStatic* __this, EnumLiteral* l, ::app::Uno::IO::BinaryWriter* writer)
{
    ::app::Outracks::Simulator::Bytecode::StaticMemberName__Write(NULL, ::uPtr< EnumLiteral*>(l)->Value, writer);
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\Outracks.Simulator.Protocol.Uno\0.1.0\Bytecode\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

::uStaticStrong< ::uDelegate*> Expression__Read_1;
::uStaticStrong< ::uDelegate*> Expression__Write_1;

Expression__uType* Expression__typeof()
{
    static ::uStaticStrong<Expression__uType*> type;
    if (type != NULL) return type;

    type = (Expression__uType*)::uAllocClassType(sizeof(Expression__uType), "Outracks.Simulator.Bytecode.Expression", false, 0, 0, 0);

    type->SetBaseType(::app::Outracks::Simulator::Bytecode::Statement__typeof());

    type->SetFields(2,
        ::uNewField("Read", &Expression__Read_1, 0, ::app::Uno::Func__Uno_IO_BinaryReader__Outracks_Simulator_Bytecode_Expression__typeof()),
        ::uNewField("Write", &Expression__Write_1, 0, ::app::Uno::Action__Outracks_Simulator_Bytecode_Expression__Uno_IO_BinaryWriter__typeof()));

    type->SetFunctions(6,
        ::uNewFunction("_Read", Expression___Read_1, 0, true, Expression__typeof(), ::app::Uno::IO::BinaryReader__typeof()),
        ::uNewFunctionVoid("_Write", Expression___Write_1, 0, true, Expression__typeof(), ::app::Uno::IO::BinaryWriter__typeof()),
        ::uNewFunction("Match", Expression__Match__char_1, 0, false, ::app::Uno::Char__typeof(), ::app::Uno::Func__Outracks_Simulator_Bytecode_ReadVariable__char__typeof(), ::app::Uno::Func__Outracks_Simulator_Bytecode_Literal__char__typeof(), ::app::Uno::Func__Outracks_Simulator_Bytecode_Lambda__char__typeof(), ::app::Uno::Func__Outracks_Simulator_Bytecode_MethodGroup__char__typeof(), ::app::Uno::Func__Outracks_Simulator_Bytecode_IsType__char__typeof(), ::app::Uno::Func__Outracks_Simulator_Bytecode_LogicalOr__char__typeof(), ::app::Uno::Func__Outracks_Simulator_Bytecode_Instantiate__char__typeof(), ::app::Uno::Func__Outracks_Simulator_Bytecode_CallLambda__char__typeof(), ::app::Uno::Func__Outracks_Simulator_Bytecode_CallStaticMethod__char__typeof(), ::app::Uno::Func__Outracks_Simulator_Bytecode_CallDynamicMethod__char__typeof(), ::app::Uno::Func__Outracks_Simulator_Bytecode_ReadStaticField__char__typeof(), ::app::Uno::Func__Outracks_Simulator_Bytecode_ReadProperty__char__typeof(), ::app::Uno::Func__Outracks_Simulator_Bytecode_WriteProperty__char__typeof(), ::app::Uno::Func__Outracks_Simulator_Bytecode_AddEventHandler__char__typeof(), ::app::Uno::Func__Outracks_Simulator_Bytecode_RemoveEventHandler__char__typeof()),
        ::uNewFunction("Match", Expression__Match__object_1, 0, false, ::uObject__typeof(), ::app::Uno::Func__Outracks_Simulator_Bytecode_ReadVariable__object__typeof(), ::app::Uno::Func__Outracks_Simulator_Bytecode_Literal__object__typeof(), ::app::Uno::Func__Outracks_Simulator_Bytecode_Lambda__object__typeof(), ::app::Uno::Func__Outracks_Simulator_Bytecode_MethodGroup__object__typeof(), ::app::Uno::Func__Outracks_Simulator_Bytecode_IsType__object__typeof(), ::app::Uno::Func__Outracks_Simulator_Bytecode_LogicalOr__object__typeof(), ::app::Uno::Func__Outracks_Simulator_Bytecode_Instantiate__object__typeof(), ::app::Uno::Func__Outracks_Simulator_Bytecode_CallLambda__object__typeof(), ::app::Uno::Func__Outracks_Simulator_Bytecode_CallStaticMethod__object__typeof(), ::app::Uno::Func__Outracks_Simulator_Bytecode_CallDynamicMethod__object__typeof(), ::app::Uno::Func__Outracks_Simulator_Bytecode_ReadStaticField__object__typeof(), ::app::Uno::Func__Outracks_Simulator_Bytecode_ReadProperty__object__typeof(), ::app::Uno::Func__Outracks_Simulator_Bytecode_WriteProperty__object__typeof(), ::app::Uno::Func__Outracks_Simulator_Bytecode_AddEventHandler__object__typeof(), ::app::Uno::Func__Outracks_Simulator_Bytecode_RemoveEventHandler__object__typeof()),
        ::uNewFunctionVoid("Match", Expression__Match_1, 0, false, ::app::Uno::Action__Outracks_Simulator_Bytecode_ReadVariable__typeof(), ::app::Uno::Action__Outracks_Simulator_Bytecode_Literal__typeof(), ::app::Uno::Action__Outracks_Simulator_Bytecode_Lambda__typeof(), ::app::Uno::Action__Outracks_Simulator_Bytecode_MethodGroup__typeof(), ::app::Uno::Action__Outracks_Simulator_Bytecode_IsType__typeof(), ::app::Uno::Action__Outracks_Simulator_Bytecode_LogicalOr__typeof(), ::app::Uno::Action__Outracks_Simulator_Bytecode_Instantiate__typeof(), ::app::Uno::Action__Outracks_Simulator_Bytecode_CallLambda__typeof(), ::app::Uno::Action__Outracks_Simulator_Bytecode_CallStaticMethod__typeof(), ::app::Uno::Action__Outracks_Simulator_Bytecode_CallDynamicMethod__typeof(), ::app::Uno::Action__Outracks_Simulator_Bytecode_ReadStaticField__typeof(), ::app::Uno::Action__Outracks_Simulator_Bytecode_ReadProperty__typeof(), ::app::Uno::Action__Outracks_Simulator_Bytecode_WriteProperty__typeof(), ::app::Uno::Action__Outracks_Simulator_Bytecode_AddEventHandler__typeof(), ::app::Uno::Action__Outracks_Simulator_Bytecode_RemoveEventHandler__typeof()),
        ::uNewFunction("Throw", Expression__Throw, 0, true, Expression__typeof(), ::app::Uno::Exception__typeof()));

    ::uRegisterType(type);
    return type;
}

void Expression___ObjInit_1(Expression* __this)
{
    ::app::Outracks::Simulator::Bytecode::Statement___ObjInit(__this);
}

Expression* Expression___Read_1(::uStatic* __this, ::app::Uno::IO::BinaryReader* reader)
{
    ::uChar c = ::uPtr< ::app::Uno::IO::BinaryReader*>(reader)->ReadChar();

    switch (c)
    {
        case 'a':
        {
            return (Expression*)::app::Outracks::Simulator::Bytecode::ReadVariable__Read_2(NULL, reader);
        }
        case 'b':
        {
            return (Expression*)::app::Outracks::Simulator::Bytecode::Literal__Read_2(NULL, reader);
        }
        case 'c':
        {
            return (Expression*)::app::Outracks::Simulator::Bytecode::Lambda__Read_2(NULL, reader);
        }
        case 'd':
        {
            return (Expression*)::app::Outracks::Simulator::Bytecode::MethodGroup__Read_2(NULL, reader);
        }
        case 'e':
        {
            return (Expression*)::app::Outracks::Simulator::Bytecode::IsType__Read_2(NULL, reader);
        }
        case 'f':
        {
            return (Expression*)::app::Outracks::Simulator::Bytecode::LogicalOr__Read_2(NULL, reader);
        }
        case 'g':
        {
            return (Expression*)::app::Outracks::Simulator::Bytecode::Instantiate__Read_2(NULL, reader);
        }
        case 'h':
        {
            return (Expression*)::app::Outracks::Simulator::Bytecode::CallLambda__Read_2(NULL, reader);
        }
        case 'i':
        {
            return (Expression*)::app::Outracks::Simulator::Bytecode::CallStaticMethod__Read_2(NULL, reader);
        }
        case 'j':
        {
            return (Expression*)::app::Outracks::Simulator::Bytecode::CallDynamicMethod__Read_2(NULL, reader);
        }
        case 'k':
        {
            return (Expression*)::app::Outracks::Simulator::Bytecode::ReadStaticField__Read_2(NULL, reader);
        }
        case 'l':
        {
            return (Expression*)::app::Outracks::Simulator::Bytecode::ReadProperty__Read_2(NULL, reader);
        }
        case 'm':
        {
            return (Expression*)::app::Outracks::Simulator::Bytecode::WriteProperty__Read_2(NULL, reader);
        }
        case 'n':
        {
            return (Expression*)::app::Outracks::Simulator::Bytecode::AddEventHandler__Read_2(NULL, reader);
        }
        case 'o':
        {
            return (Expression*)::app::Outracks::Simulator::Bytecode::RemoveEventHandler__Read_2(NULL, reader);
        }
    }

    U_THROW(::app::Outracks::Simulator::InvalidDataException__New_3(NULL));
}

void Expression___TypeInit_1(::uStatic* __this)
{
    Expression__Write_1 = ::uNewDelegateNonVirt(::app::Uno::Action__Outracks_Simulator_Bytecode_Expression__Uno_IO_BinaryWriter__typeof(), (const void*)Expression___Write_1);
    Expression__Read_1 = ::uNewDelegateNonVirt(::app::Uno::Func__Uno_IO_BinaryReader__Outracks_Simulator_Bytecode_Expression__typeof(), (const void*)Expression___Read_1);
}

void Expression___Write_1(::uStatic* __this, Expression* expression, ::app::Uno::IO::BinaryWriter* writer)
{
    ::uPtr< ::app::Uno::IO::BinaryWriter*>(writer)->Write_5(::uPtr< Expression*>(expression)->Match__char_1(::app::Outracks::Simulator::Closure__Return__Outracks_Simulator_Bytecode_ReadVariable__char(NULL, 'a'), ::app::Outracks::Simulator::Closure__Return__Outracks_Simulator_Bytecode_Literal__char(NULL, 'b'), ::app::Outracks::Simulator::Closure__Return__Outracks_Simulator_Bytecode_Lambda__char(NULL, 'c'), ::app::Outracks::Simulator::Closure__Return__Outracks_Simulator_Bytecode_MethodGroup__char(NULL, 'd'), ::app::Outracks::Simulator::Closure__Return__Outracks_Simulator_Bytecode_IsType__char(NULL, 'e'), ::app::Outracks::Simulator::Closure__Return__Outracks_Simulator_Bytecode_LogicalOr__char(NULL, 'f'), ::app::Outracks::Simulator::Closure__Return__Outracks_Simulator_Bytecode_Instantiate__char(NULL, 'g'), ::app::Outracks::Simulator::Closure__Return__Outracks_Simulator_Bytecode_CallLambda__char(NULL, 'h'), ::app::Outracks::Simulator::Closure__Return__Outracks_Simulator_Bytecode_CallStaticMethod__char(NULL, 'i'), ::app::Outracks::Simulator::Closure__Return__Outracks_Simulator_Bytecode_CallDynamicMethod__char(NULL, 'j'), ::app::Outracks::Simulator::Closure__Return__Outracks_Simulator_Bytecode_ReadStaticField__char(NULL, 'k'), ::app::Outracks::Simulator::Closure__Return__Outracks_Simulator_Bytecode_ReadProperty__char(NULL, 'l'), ::app::Outracks::Simulator::Closure__Return__Outracks_Simulator_Bytecode_WriteProperty__char(NULL, 'm'), ::app::Outracks::Simulator::Closure__Return__Outracks_Simulator_Bytecode_AddEventHandler__char(NULL, 'n'), ::app::Outracks::Simulator::Closure__Return__Outracks_Simulator_Bytecode_RemoveEventHandler__char(NULL, 'o')));
    expression->Match_1(::app::Outracks::Simulator::Closure__ApplySecond__Outracks_Simulator_Bytecode_ReadVariable__Uno_IO_BinaryWriter(NULL, ::uNewDelegateNonVirt(::app::Uno::Action__Outracks_Simulator_Bytecode_ReadVariable__Uno_IO_BinaryWriter__typeof(), (const void*)::app::Outracks::Simulator::Bytecode::ReadVariable__Write_3), writer), ::app::Outracks::Simulator::Closure__ApplySecond__Outracks_Simulator_Bytecode_Literal__Uno_IO_BinaryWriter(NULL, ::uNewDelegateNonVirt(::app::Uno::Action__Outracks_Simulator_Bytecode_Literal__Uno_IO_BinaryWriter__typeof(), (const void*)::app::Outracks::Simulator::Bytecode::Literal__Write_2), writer), ::app::Outracks::Simulator::Closure__ApplySecond__Outracks_Simulator_Bytecode_Lambda__Uno_IO_BinaryWriter(NULL, ::uNewDelegateNonVirt(::app::Uno::Action__Outracks_Simulator_Bytecode_Lambda__Uno_IO_BinaryWriter__typeof(), (const void*)::app::Outracks::Simulator::Bytecode::Lambda__Write_2), writer), ::app::Outracks::Simulator::Closure__ApplySecond__Outracks_Simulator_Bytecode_MethodGroup__Uno_IO_BinaryWriter(NULL, ::uNewDelegateNonVirt(::app::Uno::Action__Outracks_Simulator_Bytecode_MethodGroup__Uno_IO_BinaryWriter__typeof(), (const void*)::app::Outracks::Simulator::Bytecode::MethodGroup__Write_2), writer), ::app::Outracks::Simulator::Closure__ApplySecond__Outracks_Simulator_Bytecode_IsType__Uno_IO_BinaryWriter(NULL, ::uNewDelegateNonVirt(::app::Uno::Action__Outracks_Simulator_Bytecode_IsType__Uno_IO_BinaryWriter__typeof(), (const void*)::app::Outracks::Simulator::Bytecode::IsType__Write_3), writer), ::app::Outracks::Simulator::Closure__ApplySecond__Outracks_Simulator_Bytecode_LogicalOr__Uno_IO_BinaryWriter(NULL, ::uNewDelegateNonVirt(::app::Uno::Action__Outracks_Simulator_Bytecode_LogicalOr__Uno_IO_BinaryWriter__typeof(), (const void*)::app::Outracks::Simulator::Bytecode::LogicalOr__Write_3), writer), ::app::Outracks::Simulator::Closure__ApplySecond__Outracks_Simulator_Bytecode_Instantiate__Uno_IO_BinaryWriter(NULL, ::uNewDelegateNonVirt(::app::Uno::Action__Outracks_Simulator_Bytecode_Instantiate__Uno_IO_BinaryWriter__typeof(), (const void*)::app::Outracks::Simulator::Bytecode::Instantiate__Write_3), writer), ::app::Outracks::Simulator::Closure__ApplySecond__Outracks_Simulator_Bytecode_CallLambda__Uno_IO_BinaryWriter(NULL, ::uNewDelegateNonVirt(::app::Uno::Action__Outracks_Simulator_Bytecode_CallLambda__Uno_IO_BinaryWriter__typeof(), (const void*)::app::Outracks::Simulator::Bytecode::CallLambda__Write_2), writer), ::app::Outracks::Simulator::Closure__ApplySecond__Outracks_Simulator_Bytecode_CallStaticMethod__Uno_IO_BinaryWriter(NULL, ::uNewDelegateNonVirt(::app::Uno::Action__Outracks_Simulator_Bytecode_CallStaticMethod__Uno_IO_BinaryWriter__typeof(), (const void*)::app::Outracks::Simulator::Bytecode::CallStaticMethod__Write_3), writer), ::app::Outracks::Simulator::Closure__ApplySecond__Outracks_Simulator_Bytecode_CallDynamicMethod__Uno_IO_BinaryWriter(NULL, ::uNewDelegateNonVirt(::app::Uno::Action__Outracks_Simulator_Bytecode_CallDynamicMethod__Uno_IO_BinaryWriter__typeof(), (const void*)::app::Outracks::Simulator::Bytecode::CallDynamicMethod__Write_3), writer), ::app::Outracks::Simulator::Closure__ApplySecond__Outracks_Simulator_Bytecode_ReadStaticField__Uno_IO_BinaryWriter(NULL, ::uNewDelegateNonVirt(::app::Uno::Action__Outracks_Simulator_Bytecode_ReadStaticField__Uno_IO_BinaryWriter__typeof(), (const void*)::app::Outracks::Simulator::Bytecode::ReadStaticField__Write_3), writer), ::app::Outracks::Simulator::Closure__ApplySecond__Outracks_Simulator_Bytecode_ReadProperty__Uno_IO_BinaryWriter(NULL, ::uNewDelegateNonVirt(::app::Uno::Action__Outracks_Simulator_Bytecode_ReadProperty__Uno_IO_BinaryWriter__typeof(), (const void*)::app::Outracks::Simulator::Bytecode::ReadProperty__Write_3), writer), ::app::Outracks::Simulator::Closure__ApplySecond__Outracks_Simulator_Bytecode_WriteProperty__Uno_IO_BinaryWriter(NULL, ::uNewDelegateNonVirt(::app::Uno::Action__Outracks_Simulator_Bytecode_WriteProperty__Uno_IO_BinaryWriter__typeof(), (const void*)::app::Outracks::Simulator::Bytecode::WriteProperty__Write_3), writer), ::app::Outracks::Simulator::Closure__ApplySecond__Outracks_Simulator_Bytecode_AddEventHandler__Uno_IO_BinaryWriter(NULL, ::uNewDelegateNonVirt(::app::Uno::Action__Outracks_Simulator_Bytecode_AddEventHandler__Uno_IO_BinaryWriter__typeof(), (const void*)::app::Outracks::Simulator::Bytecode::AddEventHandler__Write_2), writer), ::app::Outracks::Simulator::Closure__ApplySecond__Outracks_Simulator_Bytecode_RemoveEventHandler__Uno_IO_BinaryWriter(NULL, ::uNewDelegateNonVirt(::app::Uno::Action__Outracks_Simulator_Bytecode_RemoveEventHandler__Uno_IO_BinaryWriter__typeof(), (const void*)::app::Outracks::Simulator::Bytecode::RemoveEventHandler__Write_3), writer));
}

::uChar Expression__Match__char_1(Expression* __this, ::uDelegate* a1, ::uDelegate* a2, ::uDelegate* a3, ::uDelegate* a4, ::uDelegate* a5, ::uDelegate* a6, ::uDelegate* a7, ::uDelegate* a8, ::uDelegate* a9, ::uDelegate* a10, ::uDelegate* a11, ::uDelegate* a12, ::uDelegate* a13, ::uDelegate* a15, ::uDelegate* a16)
{
    Expression* self = __this;
    ::app::Outracks::Simulator::Bytecode::ReadVariable* t1 = ::uAs< ::app::Outracks::Simulator::Bytecode::ReadVariable*>(self, ::app::Outracks::Simulator::Bytecode::ReadVariable__typeof());

    if (t1 != NULL)
    {
        return ::uPtr< ::uDelegate*>(a1)->Invoke< ::uChar, ::app::Outracks::Simulator::Bytecode::ReadVariable*>(t1);
    }

    ::app::Outracks::Simulator::Bytecode::Literal* t2 = ::uAs< ::app::Outracks::Simulator::Bytecode::Literal*>(self, ::app::Outracks::Simulator::Bytecode::Literal__typeof());

    if (t2 != NULL)
    {
        return ::uPtr< ::uDelegate*>(a2)->Invoke< ::uChar, ::app::Outracks::Simulator::Bytecode::Literal*>(t2);
    }

    ::app::Outracks::Simulator::Bytecode::Lambda* t3 = ::uAs< ::app::Outracks::Simulator::Bytecode::Lambda*>(self, ::app::Outracks::Simulator::Bytecode::Lambda__typeof());

    if (t3 != NULL)
    {
        return ::uPtr< ::uDelegate*>(a3)->Invoke< ::uChar, ::app::Outracks::Simulator::Bytecode::Lambda*>(t3);
    }

    ::app::Outracks::Simulator::Bytecode::MethodGroup* t4 = ::uAs< ::app::Outracks::Simulator::Bytecode::MethodGroup*>(self, ::app::Outracks::Simulator::Bytecode::MethodGroup__typeof());

    if (t4 != NULL)
    {
        return ::uPtr< ::uDelegate*>(a4)->Invoke< ::uChar, ::app::Outracks::Simulator::Bytecode::MethodGroup*>(t4);
    }

    ::app::Outracks::Simulator::Bytecode::IsType* t5 = ::uAs< ::app::Outracks::Simulator::Bytecode::IsType*>(self, ::app::Outracks::Simulator::Bytecode::IsType__typeof());

    if (t5 != NULL)
    {
        return ::uPtr< ::uDelegate*>(a5)->Invoke< ::uChar, ::app::Outracks::Simulator::Bytecode::IsType*>(t5);
    }

    ::app::Outracks::Simulator::Bytecode::LogicalOr* t6 = ::uAs< ::app::Outracks::Simulator::Bytecode::LogicalOr*>(self, ::app::Outracks::Simulator::Bytecode::LogicalOr__typeof());

    if (t6 != NULL)
    {
        return ::uPtr< ::uDelegate*>(a6)->Invoke< ::uChar, ::app::Outracks::Simulator::Bytecode::LogicalOr*>(t6);
    }

    ::app::Outracks::Simulator::Bytecode::Instantiate* t7 = ::uAs< ::app::Outracks::Simulator::Bytecode::Instantiate*>(self, ::app::Outracks::Simulator::Bytecode::Instantiate__typeof());

    if (t7 != NULL)
    {
        return ::uPtr< ::uDelegate*>(a7)->Invoke< ::uChar, ::app::Outracks::Simulator::Bytecode::Instantiate*>(t7);
    }

    ::app::Outracks::Simulator::Bytecode::CallLambda* t8 = ::uAs< ::app::Outracks::Simulator::Bytecode::CallLambda*>(self, ::app::Outracks::Simulator::Bytecode::CallLambda__typeof());

    if (t8 != NULL)
    {
        return ::uPtr< ::uDelegate*>(a8)->Invoke< ::uChar, ::app::Outracks::Simulator::Bytecode::CallLambda*>(t8);
    }

    ::app::Outracks::Simulator::Bytecode::CallStaticMethod* t9 = ::uAs< ::app::Outracks::Simulator::Bytecode::CallStaticMethod*>(self, ::app::Outracks::Simulator::Bytecode::CallStaticMethod__typeof());

    if (t9 != NULL)
    {
        return ::uPtr< ::uDelegate*>(a9)->Invoke< ::uChar, ::app::Outracks::Simulator::Bytecode::CallStaticMethod*>(t9);
    }

    ::app::Outracks::Simulator::Bytecode::CallDynamicMethod* t10 = ::uAs< ::app::Outracks::Simulator::Bytecode::CallDynamicMethod*>(self, ::app::Outracks::Simulator::Bytecode::CallDynamicMethod__typeof());

    if (t10 != NULL)
    {
        return ::uPtr< ::uDelegate*>(a10)->Invoke< ::uChar, ::app::Outracks::Simulator::Bytecode::CallDynamicMethod*>(t10);
    }

    ::app::Outracks::Simulator::Bytecode::ReadStaticField* t11 = ::uAs< ::app::Outracks::Simulator::Bytecode::ReadStaticField*>(self, ::app::Outracks::Simulator::Bytecode::ReadStaticField__typeof());

    if (t11 != NULL)
    {
        return ::uPtr< ::uDelegate*>(a11)->Invoke< ::uChar, ::app::Outracks::Simulator::Bytecode::ReadStaticField*>(t11);
    }

    ::app::Outracks::Simulator::Bytecode::ReadProperty* t12 = ::uAs< ::app::Outracks::Simulator::Bytecode::ReadProperty*>(self, ::app::Outracks::Simulator::Bytecode::ReadProperty__typeof());

    if (t12 != NULL)
    {
        return ::uPtr< ::uDelegate*>(a12)->Invoke< ::uChar, ::app::Outracks::Simulator::Bytecode::ReadProperty*>(t12);
    }

    ::app::Outracks::Simulator::Bytecode::WriteProperty* t13 = ::uAs< ::app::Outracks::Simulator::Bytecode::WriteProperty*>(self, ::app::Outracks::Simulator::Bytecode::WriteProperty__typeof());

    if (t13 != NULL)
    {
        return ::uPtr< ::uDelegate*>(a13)->Invoke< ::uChar, ::app::Outracks::Simulator::Bytecode::WriteProperty*>(t13);
    }

    ::app::Outracks::Simulator::Bytecode::AddEventHandler* t15 = ::uAs< ::app::Outracks::Simulator::Bytecode::AddEventHandler*>(self, ::app::Outracks::Simulator::Bytecode::AddEventHandler__typeof());

    if (t15 != NULL)
    {
        return ::uPtr< ::uDelegate*>(a15)->Invoke< ::uChar, ::app::Outracks::Simulator::Bytecode::AddEventHandler*>(t15);
    }

    ::app::Outracks::Simulator::Bytecode::RemoveEventHandler* t16 = ::uAs< ::app::Outracks::Simulator::Bytecode::RemoveEventHandler*>(self, ::app::Outracks::Simulator::Bytecode::RemoveEventHandler__typeof());

    if (t16 != NULL)
    {
        return ::uPtr< ::uDelegate*>(a16)->Invoke< ::uChar, ::app::Outracks::Simulator::Bytecode::RemoveEventHandler*>(t16);
    }

    U_THROW(::app::Outracks::Simulator::NonExhaustiveMatch__New_3(NULL));
}

::uObject* Expression__Match__object_1(Expression* __this, ::uDelegate* a1, ::uDelegate* a2, ::uDelegate* a3, ::uDelegate* a4, ::uDelegate* a5, ::uDelegate* a6, ::uDelegate* a7, ::uDelegate* a8, ::uDelegate* a9, ::uDelegate* a10, ::uDelegate* a11, ::uDelegate* a12, ::uDelegate* a13, ::uDelegate* a15, ::uDelegate* a16)
{
    Expression* self = __this;
    ::app::Outracks::Simulator::Bytecode::ReadVariable* t1 = ::uAs< ::app::Outracks::Simulator::Bytecode::ReadVariable*>(self, ::app::Outracks::Simulator::Bytecode::ReadVariable__typeof());

    if (t1 != NULL)
    {
        return ::uPtr< ::uDelegate*>(a1)->Invoke< ::uObject*, ::app::Outracks::Simulator::Bytecode::ReadVariable*>(t1);
    }

    ::app::Outracks::Simulator::Bytecode::Literal* t2 = ::uAs< ::app::Outracks::Simulator::Bytecode::Literal*>(self, ::app::Outracks::Simulator::Bytecode::Literal__typeof());

    if (t2 != NULL)
    {
        return ::uPtr< ::uDelegate*>(a2)->Invoke< ::uObject*, ::app::Outracks::Simulator::Bytecode::Literal*>(t2);
    }

    ::app::Outracks::Simulator::Bytecode::Lambda* t3 = ::uAs< ::app::Outracks::Simulator::Bytecode::Lambda*>(self, ::app::Outracks::Simulator::Bytecode::Lambda__typeof());

    if (t3 != NULL)
    {
        return ::uPtr< ::uDelegate*>(a3)->Invoke< ::uObject*, ::app::Outracks::Simulator::Bytecode::Lambda*>(t3);
    }

    ::app::Outracks::Simulator::Bytecode::MethodGroup* t4 = ::uAs< ::app::Outracks::Simulator::Bytecode::MethodGroup*>(self, ::app::Outracks::Simulator::Bytecode::MethodGroup__typeof());

    if (t4 != NULL)
    {
        return ::uPtr< ::uDelegate*>(a4)->Invoke< ::uObject*, ::app::Outracks::Simulator::Bytecode::MethodGroup*>(t4);
    }

    ::app::Outracks::Simulator::Bytecode::IsType* t5 = ::uAs< ::app::Outracks::Simulator::Bytecode::IsType*>(self, ::app::Outracks::Simulator::Bytecode::IsType__typeof());

    if (t5 != NULL)
    {
        return ::uPtr< ::uDelegate*>(a5)->Invoke< ::uObject*, ::app::Outracks::Simulator::Bytecode::IsType*>(t5);
    }

    ::app::Outracks::Simulator::Bytecode::LogicalOr* t6 = ::uAs< ::app::Outracks::Simulator::Bytecode::LogicalOr*>(self, ::app::Outracks::Simulator::Bytecode::LogicalOr__typeof());

    if (t6 != NULL)
    {
        return ::uPtr< ::uDelegate*>(a6)->Invoke< ::uObject*, ::app::Outracks::Simulator::Bytecode::LogicalOr*>(t6);
    }

    ::app::Outracks::Simulator::Bytecode::Instantiate* t7 = ::uAs< ::app::Outracks::Simulator::Bytecode::Instantiate*>(self, ::app::Outracks::Simulator::Bytecode::Instantiate__typeof());

    if (t7 != NULL)
    {
        return ::uPtr< ::uDelegate*>(a7)->Invoke< ::uObject*, ::app::Outracks::Simulator::Bytecode::Instantiate*>(t7);
    }

    ::app::Outracks::Simulator::Bytecode::CallLambda* t8 = ::uAs< ::app::Outracks::Simulator::Bytecode::CallLambda*>(self, ::app::Outracks::Simulator::Bytecode::CallLambda__typeof());

    if (t8 != NULL)
    {
        return ::uPtr< ::uDelegate*>(a8)->Invoke< ::uObject*, ::app::Outracks::Simulator::Bytecode::CallLambda*>(t8);
    }

    ::app::Outracks::Simulator::Bytecode::CallStaticMethod* t9 = ::uAs< ::app::Outracks::Simulator::Bytecode::CallStaticMethod*>(self, ::app::Outracks::Simulator::Bytecode::CallStaticMethod__typeof());

    if (t9 != NULL)
    {
        return ::uPtr< ::uDelegate*>(a9)->Invoke< ::uObject*, ::app::Outracks::Simulator::Bytecode::CallStaticMethod*>(t9);
    }

    ::app::Outracks::Simulator::Bytecode::CallDynamicMethod* t10 = ::uAs< ::app::Outracks::Simulator::Bytecode::CallDynamicMethod*>(self, ::app::Outracks::Simulator::Bytecode::CallDynamicMethod__typeof());

    if (t10 != NULL)
    {
        return ::uPtr< ::uDelegate*>(a10)->Invoke< ::uObject*, ::app::Outracks::Simulator::Bytecode::CallDynamicMethod*>(t10);
    }

    ::app::Outracks::Simulator::Bytecode::ReadStaticField* t11 = ::uAs< ::app::Outracks::Simulator::Bytecode::ReadStaticField*>(self, ::app::Outracks::Simulator::Bytecode::ReadStaticField__typeof());

    if (t11 != NULL)
    {
        return ::uPtr< ::uDelegate*>(a11)->Invoke< ::uObject*, ::app::Outracks::Simulator::Bytecode::ReadStaticField*>(t11);
    }

    ::app::Outracks::Simulator::Bytecode::ReadProperty* t12 = ::uAs< ::app::Outracks::Simulator::Bytecode::ReadProperty*>(self, ::app::Outracks::Simulator::Bytecode::ReadProperty__typeof());

    if (t12 != NULL)
    {
        return ::uPtr< ::uDelegate*>(a12)->Invoke< ::uObject*, ::app::Outracks::Simulator::Bytecode::ReadProperty*>(t12);
    }

    ::app::Outracks::Simulator::Bytecode::WriteProperty* t13 = ::uAs< ::app::Outracks::Simulator::Bytecode::WriteProperty*>(self, ::app::Outracks::Simulator::Bytecode::WriteProperty__typeof());

    if (t13 != NULL)
    {
        return ::uPtr< ::uDelegate*>(a13)->Invoke< ::uObject*, ::app::Outracks::Simulator::Bytecode::WriteProperty*>(t13);
    }

    ::app::Outracks::Simulator::Bytecode::AddEventHandler* t15 = ::uAs< ::app::Outracks::Simulator::Bytecode::AddEventHandler*>(self, ::app::Outracks::Simulator::Bytecode::AddEventHandler__typeof());

    if (t15 != NULL)
    {
        return ::uPtr< ::uDelegate*>(a15)->Invoke< ::uObject*, ::app::Outracks::Simulator::Bytecode::AddEventHandler*>(t15);
    }

    ::app::Outracks::Simulator::Bytecode::RemoveEventHandler* t16 = ::uAs< ::app::Outracks::Simulator::Bytecode::RemoveEventHandler*>(self, ::app::Outracks::Simulator::Bytecode::RemoveEventHandler__typeof());

    if (t16 != NULL)
    {
        return ::uPtr< ::uDelegate*>(a16)->Invoke< ::uObject*, ::app::Outracks::Simulator::Bytecode::RemoveEventHandler*>(t16);
    }

    U_THROW(::app::Outracks::Simulator::NonExhaustiveMatch__New_3(NULL));
}

void Expression__Match_1(Expression* __this, ::uDelegate* a1, ::uDelegate* a2, ::uDelegate* a3, ::uDelegate* a4, ::uDelegate* a5, ::uDelegate* a6, ::uDelegate* a7, ::uDelegate* a8, ::uDelegate* a9, ::uDelegate* a10, ::uDelegate* a11, ::uDelegate* a12, ::uDelegate* a13, ::uDelegate* a15, ::uDelegate* a16)
{
    Expression* self = __this;
    ::app::Outracks::Simulator::Bytecode::ReadVariable* t1 = ::uAs< ::app::Outracks::Simulator::Bytecode::ReadVariable*>(self, ::app::Outracks::Simulator::Bytecode::ReadVariable__typeof());

    if (t1 != NULL)
    {
        ::uPtr< ::uDelegate*>(a1)->InvokeVoid< ::app::Outracks::Simulator::Bytecode::ReadVariable*>(t1);
        return;
    }

    ::app::Outracks::Simulator::Bytecode::Literal* t2 = ::uAs< ::app::Outracks::Simulator::Bytecode::Literal*>(self, ::app::Outracks::Simulator::Bytecode::Literal__typeof());

    if (t2 != NULL)
    {
        ::uPtr< ::uDelegate*>(a2)->InvokeVoid< ::app::Outracks::Simulator::Bytecode::Literal*>(t2);
        return;
    }

    ::app::Outracks::Simulator::Bytecode::Lambda* t3 = ::uAs< ::app::Outracks::Simulator::Bytecode::Lambda*>(self, ::app::Outracks::Simulator::Bytecode::Lambda__typeof());

    if (t3 != NULL)
    {
        ::uPtr< ::uDelegate*>(a3)->InvokeVoid< ::app::Outracks::Simulator::Bytecode::Lambda*>(t3);
        return;
    }

    ::app::Outracks::Simulator::Bytecode::MethodGroup* t4 = ::uAs< ::app::Outracks::Simulator::Bytecode::MethodGroup*>(self, ::app::Outracks::Simulator::Bytecode::MethodGroup__typeof());

    if (t4 != NULL)
    {
        ::uPtr< ::uDelegate*>(a4)->InvokeVoid< ::app::Outracks::Simulator::Bytecode::MethodGroup*>(t4);
        return;
    }

    ::app::Outracks::Simulator::Bytecode::IsType* t5 = ::uAs< ::app::Outracks::Simulator::Bytecode::IsType*>(self, ::app::Outracks::Simulator::Bytecode::IsType__typeof());

    if (t5 != NULL)
    {
        ::uPtr< ::uDelegate*>(a5)->InvokeVoid< ::app::Outracks::Simulator::Bytecode::IsType*>(t5);
        return;
    }

    ::app::Outracks::Simulator::Bytecode::LogicalOr* t6 = ::uAs< ::app::Outracks::Simulator::Bytecode::LogicalOr*>(self, ::app::Outracks::Simulator::Bytecode::LogicalOr__typeof());

    if (t6 != NULL)
    {
        ::uPtr< ::uDelegate*>(a6)->InvokeVoid< ::app::Outracks::Simulator::Bytecode::LogicalOr*>(t6);
        return;
    }

    ::app::Outracks::Simulator::Bytecode::Instantiate* t7 = ::uAs< ::app::Outracks::Simulator::Bytecode::Instantiate*>(self, ::app::Outracks::Simulator::Bytecode::Instantiate__typeof());

    if (t7 != NULL)
    {
        ::uPtr< ::uDelegate*>(a7)->InvokeVoid< ::app::Outracks::Simulator::Bytecode::Instantiate*>(t7);
        return;
    }

    ::app::Outracks::Simulator::Bytecode::CallLambda* t8 = ::uAs< ::app::Outracks::Simulator::Bytecode::CallLambda*>(self, ::app::Outracks::Simulator::Bytecode::CallLambda__typeof());

    if (t8 != NULL)
    {
        ::uPtr< ::uDelegate*>(a8)->InvokeVoid< ::app::Outracks::Simulator::Bytecode::CallLambda*>(t8);
        return;
    }

    ::app::Outracks::Simulator::Bytecode::CallStaticMethod* t9 = ::uAs< ::app::Outracks::Simulator::Bytecode::CallStaticMethod*>(self, ::app::Outracks::Simulator::Bytecode::CallStaticMethod__typeof());

    if (t9 != NULL)
    {
        ::uPtr< ::uDelegate*>(a9)->InvokeVoid< ::app::Outracks::Simulator::Bytecode::CallStaticMethod*>(t9);
        return;
    }

    ::app::Outracks::Simulator::Bytecode::CallDynamicMethod* t10 = ::uAs< ::app::Outracks::Simulator::Bytecode::CallDynamicMethod*>(self, ::app::Outracks::Simulator::Bytecode::CallDynamicMethod__typeof());

    if (t10 != NULL)
    {
        ::uPtr< ::uDelegate*>(a10)->InvokeVoid< ::app::Outracks::Simulator::Bytecode::CallDynamicMethod*>(t10);
        return;
    }

    ::app::Outracks::Simulator::Bytecode::ReadStaticField* t11 = ::uAs< ::app::Outracks::Simulator::Bytecode::ReadStaticField*>(self, ::app::Outracks::Simulator::Bytecode::ReadStaticField__typeof());

    if (t11 != NULL)
    {
        ::uPtr< ::uDelegate*>(a11)->InvokeVoid< ::app::Outracks::Simulator::Bytecode::ReadStaticField*>(t11);
        return;
    }

    ::app::Outracks::Simulator::Bytecode::ReadProperty* t12 = ::uAs< ::app::Outracks::Simulator::Bytecode::ReadProperty*>(self, ::app::Outracks::Simulator::Bytecode::ReadProperty__typeof());

    if (t12 != NULL)
    {
        ::uPtr< ::uDelegate*>(a12)->InvokeVoid< ::app::Outracks::Simulator::Bytecode::ReadProperty*>(t12);
        return;
    }

    ::app::Outracks::Simulator::Bytecode::WriteProperty* t13 = ::uAs< ::app::Outracks::Simulator::Bytecode::WriteProperty*>(self, ::app::Outracks::Simulator::Bytecode::WriteProperty__typeof());

    if (t13 != NULL)
    {
        ::uPtr< ::uDelegate*>(a13)->InvokeVoid< ::app::Outracks::Simulator::Bytecode::WriteProperty*>(t13);
        return;
    }

    ::app::Outracks::Simulator::Bytecode::AddEventHandler* t15 = ::uAs< ::app::Outracks::Simulator::Bytecode::AddEventHandler*>(self, ::app::Outracks::Simulator::Bytecode::AddEventHandler__typeof());

    if (t15 != NULL)
    {
        ::uPtr< ::uDelegate*>(a15)->InvokeVoid< ::app::Outracks::Simulator::Bytecode::AddEventHandler*>(t15);
        return;
    }

    ::app::Outracks::Simulator::Bytecode::RemoveEventHandler* t16 = ::uAs< ::app::Outracks::Simulator::Bytecode::RemoveEventHandler*>(self, ::app::Outracks::Simulator::Bytecode::RemoveEventHandler__typeof());

    if (t16 != NULL)
    {
        ::uPtr< ::uDelegate*>(a16)->InvokeVoid< ::app::Outracks::Simulator::Bytecode::RemoveEventHandler*>(t16);
        return;
    }

    U_THROW(::app::Outracks::Simulator::NonExhaustiveMatch__New_3(NULL));
}

Expression* Expression__Throw(::uStatic* __this, ::app::Uno::Exception* e)
{
    U_THROW(e);
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\Outracks.Simulator.Protocol.Uno\0.1.0\Bytecode\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

Instantiate__uType* Instantiate__typeof()
{
    static ::uStaticStrong<Instantiate__uType*> type;
    if (type != NULL) return type;

    type = (Instantiate__uType*)::uAllocClassType(sizeof(Instantiate__uType), "Outracks.Simulator.Bytecode.Instantiate", false, 0, 2, 0);

    type->SetBaseType(::app::Outracks::Simulator::Bytecode::Expression__typeof());
    type->__fp_ToString = (::uString*(*)(::uObject*))Instantiate__ToString;

    type->SetStrongRefs(
        "Arguments", offsetof(Instantiate, Arguments),
        "Type", offsetof(Instantiate, Type));

    type->SetFields(2,
        ::uNewField("Arguments", NULL, offsetof(Instantiate, Arguments), ::app::Outracks::Simulator::ImmutableList__Outracks_Simulator_Bytecode_Expression__typeof()),
        ::uNewField("Type", NULL, offsetof(Instantiate, Type), ::app::Outracks::Simulator::Bytecode::TypeName__typeof()));

    type->SetFunctions(5,
        ::uNewFunction(".ctor", Instantiate__New_1, 0, true, Instantiate__typeof(), ::app::Outracks::Simulator::Bytecode::TypeName__typeof(), ::uGetArrayType(::app::Outracks::Simulator::Bytecode::Expression__typeof())),
        ::uNewFunction(".ctor", Instantiate__New_2, 0, true, Instantiate__typeof(), ::app::Outracks::Simulator::Bytecode::TypeName__typeof(), ::app::Outracks::Simulator::ImmutableList__Outracks_Simulator_Bytecode_Expression__typeof()),
        ::uNewFunction("Read", Instantiate__Read_2, 0, true, Instantiate__typeof(), ::app::Uno::IO::BinaryReader__typeof()),
        ::uNewFunctionVoid("Write", Instantiate__Write_2, 0, false, ::app::Uno::IO::BinaryWriter__typeof()),
        ::uNewFunctionVoid("Write", Instantiate__Write_3, 0, true, Instantiate__typeof(), ::app::Uno::IO::BinaryWriter__typeof()));

    ::uRegisterType(type);
    return type;
}

void Instantiate___ObjInit_2(Instantiate* __this, ::app::Outracks::Simulator::Bytecode::TypeName* type, ::uArray* arguments)
{
    __this->_ObjInit_3(type, ::app::Outracks::Simulator::List__ToImmutableList__Outracks_Simulator_Bytecode_Expression(NULL, (::uObject*)::app::Uno::Runtime::Implementation::Internal::ArrayEnumerable__Outracks_Simulator_Bytecode_Expression__New_1(NULL, arguments)));
}

void Instantiate___ObjInit_3(Instantiate* __this, ::app::Outracks::Simulator::Bytecode::TypeName* type, ::app::Outracks::Simulator::ImmutableList__Outracks_Simulator_Bytecode_Expression* arguments)
{
    ::app::Outracks::Simulator::Bytecode::Expression___ObjInit_1(__this);
    __this->Type = type;
    __this->Arguments = arguments;
}

Instantiate* Instantiate__New_1(::uStatic* __this, ::app::Outracks::Simulator::Bytecode::TypeName* type, ::uArray* arguments)
{
    Instantiate* inst = (Instantiate*)::uAllocObject(sizeof(Instantiate), Instantiate__typeof());
    inst->_ObjInit_2(type, arguments);
    return inst;
}

Instantiate* Instantiate__New_2(::uStatic* __this, ::app::Outracks::Simulator::Bytecode::TypeName* type, ::app::Outracks::Simulator::ImmutableList__Outracks_Simulator_Bytecode_Expression* arguments)
{
    Instantiate* inst = (Instantiate*)::uAllocObject(sizeof(Instantiate), Instantiate__typeof());
    inst->_ObjInit_3(type, arguments);
    return inst;
}

Instantiate* Instantiate__Read_2(::uStatic* __this, ::app::Uno::IO::BinaryReader* reader)
{
    ::app::Outracks::Simulator::Bytecode::TypeName* _Type = ::uPtr< ::uDelegate*>(::app::Outracks::Simulator::Bytecode::TypeName__Read)->Invoke< ::app::Outracks::Simulator::Bytecode::TypeName*, ::app::Uno::IO::BinaryReader*>(reader);
    ::app::Outracks::Simulator::ImmutableList__Outracks_Simulator_Bytecode_Expression* _Arguments = ::app::Outracks::Simulator::List__Read__Outracks_Simulator_Bytecode_Expression(NULL, reader, ::app::Outracks::Simulator::Bytecode::Expression__Read_1);
    return Instantiate__New_2(NULL, _Type, _Arguments);
}

::uString* Instantiate__ToString(Instantiate* __this)
{
    return ::app::Uno::String__op_Addition_2(NULL, ::app::Uno::String__op_Addition_2(NULL, ::app::Uno::String__op_Addition_2(NULL, ::app::Uno::String__op_Addition_2(NULL, ::uGetConstString("new "), ::uPtr< ::app::Outracks::Simulator::Bytecode::TypeName*>(__this->Type)->FullName()), ::uGetConstString("(")), ::app::Outracks::Simulator::StringSplitting__JoinToString__Outracks_Simulator_Bytecode_Expression(NULL, (::uObject*)__this->Arguments, ::uGetConstString(", "))), ::uGetConstString(")"));
}

void Instantiate__Write_2(Instantiate* __this, ::app::Uno::IO::BinaryWriter* writer)
{
    ::uPtr< ::uDelegate*>(::app::Outracks::Simulator::Bytecode::TypeName__Write)->InvokeVoid< ::app::Outracks::Simulator::Bytecode::TypeName*, ::app::Uno::IO::BinaryWriter*>(__this->Type, writer);
    ::app::Outracks::Simulator::List__Write__Outracks_Simulator_Bytecode_Expression(NULL, writer, __this->Arguments, ::app::Outracks::Simulator::Bytecode::Expression__Write_1);
}

void Instantiate__Write_3(::uStatic* __this, Instantiate* o, ::app::Uno::IO::BinaryWriter* writer)
{
    ::uPtr< Instantiate*>(o)->Write_2(writer);
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\Outracks.Simulator.Protocol.Uno\0.1.0\Bytecode\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

IsType__uType* IsType__typeof()
{
    static ::uStaticStrong<IsType__uType*> type;
    if (type != NULL) return type;

    type = (IsType__uType*)::uAllocClassType(sizeof(IsType__uType), "Outracks.Simulator.Bytecode.IsType", false, 0, 2, 0);

    type->SetBaseType(::app::Outracks::Simulator::Bytecode::Expression__typeof());

    type->SetStrongRefs(
        "Object", offsetof(IsType, Object),
        "Type", offsetof(IsType, Type));

    type->SetFields(3,
        ::uNewField("IncludeSubtypes", NULL, offsetof(IsType, IncludeSubtypes), ::app::Uno::Bool__typeof()),
        ::uNewField("Object", NULL, offsetof(IsType, Object), ::app::Outracks::Simulator::Bytecode::Expression__typeof()),
        ::uNewField("Type", NULL, offsetof(IsType, Type), ::app::Outracks::Simulator::Bytecode::TypeName__typeof()));

    type->SetFunctions(4,
        ::uNewFunction(".ctor", IsType__New_1, 0, true, IsType__typeof(), ::app::Outracks::Simulator::Bytecode::Expression__typeof(), ::app::Outracks::Simulator::Bytecode::TypeName__typeof(), ::app::Uno::Bool__typeof()),
        ::uNewFunction("Read", IsType__Read_2, 0, true, IsType__typeof(), ::app::Uno::IO::BinaryReader__typeof()),
        ::uNewFunctionVoid("Write", IsType__Write_2, 0, false, ::app::Uno::IO::BinaryWriter__typeof()),
        ::uNewFunctionVoid("Write", IsType__Write_3, 0, true, IsType__typeof(), ::app::Uno::IO::BinaryWriter__typeof()));

    ::uRegisterType(type);
    return type;
}

void IsType___ObjInit_2(IsType* __this, ::app::Outracks::Simulator::Bytecode::Expression* o, ::app::Outracks::Simulator::Bytecode::TypeName* type, bool includeSubtypes)
{
    ::app::Outracks::Simulator::Bytecode::Expression___ObjInit_1(__this);
    __this->Object = o;
    __this->Type = type;
    __this->IncludeSubtypes = includeSubtypes;
}

IsType* IsType__New_1(::uStatic* __this, ::app::Outracks::Simulator::Bytecode::Expression* o, ::app::Outracks::Simulator::Bytecode::TypeName* type, bool includeSubtypes)
{
    IsType* inst = (IsType*)::uAllocObject(sizeof(IsType), IsType__typeof());
    inst->_ObjInit_2(o, type, includeSubtypes);
    return inst;
}

IsType* IsType__Read_2(::uStatic* __this, ::app::Uno::IO::BinaryReader* reader)
{
    ::app::Outracks::Simulator::Bytecode::Expression* _Object = ::uPtr< ::uDelegate*>(::app::Outracks::Simulator::Bytecode::Expression__Read_1)->Invoke< ::app::Outracks::Simulator::Bytecode::Expression*, ::app::Uno::IO::BinaryReader*>(reader);
    ::app::Outracks::Simulator::Bytecode::TypeName* _Type = ::uPtr< ::uDelegate*>(::app::Outracks::Simulator::Bytecode::TypeName__Read)->Invoke< ::app::Outracks::Simulator::Bytecode::TypeName*, ::app::Uno::IO::BinaryReader*>(reader);
    bool _IncludeSubtypes = ::uPtr< ::app::Uno::IO::BinaryReader*>(reader)->ReadBoolean();
    return IsType__New_1(NULL, _Object, _Type, _IncludeSubtypes);
}

void IsType__Write_2(IsType* __this, ::app::Uno::IO::BinaryWriter* writer)
{
    ::uPtr< ::uDelegate*>(::app::Outracks::Simulator::Bytecode::Expression__Write_1)->InvokeVoid< ::app::Outracks::Simulator::Bytecode::Expression*, ::app::Uno::IO::BinaryWriter*>(__this->Object, writer);
    ::uPtr< ::uDelegate*>(::app::Outracks::Simulator::Bytecode::TypeName__Write)->InvokeVoid< ::app::Outracks::Simulator::Bytecode::TypeName*, ::app::Uno::IO::BinaryWriter*>(__this->Type, writer);
    ::uPtr< ::app::Uno::IO::BinaryWriter*>(writer)->Write_1(__this->IncludeSubtypes);
}

void IsType__Write_3(::uStatic* __this, IsType* o, ::app::Uno::IO::BinaryWriter* writer)
{
    ::uPtr< IsType*>(o)->Write_2(writer);
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\Outracks.Simulator.Protocol.Uno\0.1.0\Bytecode\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

Lambda__uType* Lambda__typeof()
{
    static ::uStaticStrong<Lambda__uType*> type;
    if (type != NULL) return type;

    type = (Lambda__uType*)::uAllocClassType(sizeof(Lambda__uType), "Outracks.Simulator.Bytecode.Lambda", false, 0, 3, 0);

    type->SetBaseType(::app::Outracks::Simulator::Bytecode::Expression__typeof());
    type->__fp_ToString = (::uString*(*)(::uObject*))Lambda__ToString;

    type->SetStrongRefs(
        "LocalVariables", offsetof(Lambda, LocalVariables),
        "Signature", offsetof(Lambda, Signature),
        "Statements", offsetof(Lambda, Statements));

    type->SetFields(3,
        ::uNewField("LocalVariables", NULL, offsetof(Lambda, LocalVariables), ::app::Outracks::Simulator::ImmutableList__Outracks_Simulator_Bytecode_BindVariable__typeof()),
        ::uNewField("Signature", NULL, offsetof(Lambda, Signature), ::app::Outracks::Simulator::Bytecode::Signature__typeof()),
        ::uNewField("Statements", NULL, offsetof(Lambda, Statements), ::app::Outracks::Simulator::ImmutableList__Outracks_Simulator_Bytecode_Statement__typeof()));

    type->SetFunctions(5,
        ::uNewFunction("AddStatementSeparator", Lambda__AddStatementSeparator, 0, true, ::app::Uno::String__typeof(), ::uObject__typeof()),
        ::uNewFunction(".ctor", Lambda__New_1, 0, true, Lambda__typeof(), ::app::Outracks::Simulator::Bytecode::Signature__typeof(), ::app::Uno::Collections::IEnumerable__Outracks_Simulator_Bytecode_BindVariable__typeof(), ::app::Uno::Collections::IEnumerable__Outracks_Simulator_Bytecode_Statement__typeof()),
        ::uNewFunction(".ctor", Lambda__New_2, 0, true, Lambda__typeof(), ::app::Outracks::Simulator::Bytecode::Signature__typeof(), ::app::Outracks::Simulator::ImmutableList__Outracks_Simulator_Bytecode_BindVariable__typeof(), ::app::Outracks::Simulator::ImmutableList__Outracks_Simulator_Bytecode_Statement__typeof()),
        ::uNewFunction("Read", Lambda__Read_2, 0, true, Lambda__typeof(), ::app::Uno::IO::BinaryReader__typeof()),
        ::uNewFunctionVoid("Write", Lambda__Write_2, 0, true, Lambda__typeof(), ::app::Uno::IO::BinaryWriter__typeof()));

    ::uRegisterType(type);
    return type;
}

void Lambda___ObjInit_2(Lambda* __this, ::app::Outracks::Simulator::Bytecode::Signature* signature, ::uObject* localVariables, ::uObject* statements)
{
    __this->_ObjInit_3(signature, ::app::Outracks::Simulator::List__ToImmutableList__Outracks_Simulator_Bytecode_BindVariable(NULL, localVariables), ::app::Outracks::Simulator::List__ToImmutableList__Outracks_Simulator_Bytecode_Statement(NULL, statements));
}

void Lambda___ObjInit_3(Lambda* __this, ::app::Outracks::Simulator::Bytecode::Signature* signature, ::app::Outracks::Simulator::ImmutableList__Outracks_Simulator_Bytecode_BindVariable* localVariables, ::app::Outracks::Simulator::ImmutableList__Outracks_Simulator_Bytecode_Statement* statements)
{
    ::app::Outracks::Simulator::Bytecode::Expression___ObjInit_1(__this);
    __this->Signature = signature;
    __this->LocalVariables = localVariables;
    __this->Statements = statements;
}

::uString* Lambda__AddStatementSeparator(::uStatic* __this, ::uObject* s)
{
    return ::app::Uno::String__op_Addition(NULL, s, ::uGetConstString(";\n"));
}

Lambda* Lambda__New_1(::uStatic* __this, ::app::Outracks::Simulator::Bytecode::Signature* signature, ::uObject* localVariables, ::uObject* statements)
{
    Lambda* inst = (Lambda*)::uAllocObject(sizeof(Lambda), Lambda__typeof());
    inst->_ObjInit_2(signature, localVariables, statements);
    return inst;
}

Lambda* Lambda__New_2(::uStatic* __this, ::app::Outracks::Simulator::Bytecode::Signature* signature, ::app::Outracks::Simulator::ImmutableList__Outracks_Simulator_Bytecode_BindVariable* localVariables, ::app::Outracks::Simulator::ImmutableList__Outracks_Simulator_Bytecode_Statement* statements)
{
    Lambda* inst = (Lambda*)::uAllocObject(sizeof(Lambda), Lambda__typeof());
    inst->_ObjInit_3(signature, localVariables, statements);
    return inst;
}

Lambda* Lambda__Read_2(::uStatic* __this, ::app::Uno::IO::BinaryReader* reader)
{
    ::app::Outracks::Simulator::Bytecode::Signature* signature = ::app::Outracks::Simulator::Bytecode::Signature__Read(NULL, reader);
    ::app::Outracks::Simulator::ImmutableList__Outracks_Simulator_Bytecode_BindVariable* localVariables = ::app::Outracks::Simulator::List__Read__Outracks_Simulator_Bytecode_BindVariable(NULL, reader, ::app::Outracks::Simulator::Bytecode::BindVariable__Read);
    ::app::Outracks::Simulator::ImmutableList__Outracks_Simulator_Bytecode_Statement* statements = ::app::Outracks::Simulator::List__Read__Outracks_Simulator_Bytecode_Statement(NULL, reader, ::app::Outracks::Simulator::Bytecode::Statement__Read);
    return Lambda__New_2(NULL, signature, localVariables, statements);
}

::uString* Lambda__ToString(Lambda* __this)
{
    ::app::Uno::Text::StringBuilder* code = ::app::Uno::Text::StringBuilder__New_1(NULL);

    for (::uObject* enum_123 = ::uPtr< ::app::Outracks::Simulator::ImmutableList__Outracks_Simulator_Bytecode_BindVariable*>(__this->LocalVariables)->GetEnumerator(); ::app::Uno::Collections::IEnumerator::MoveNext(::uPtr< ::uObject*>(enum_123)); )
    {
        ::app::Outracks::Simulator::Bytecode::BindVariable* stmnt = ::app::Uno::Collections::IEnumerator__Outracks_Simulator_Bytecode_BindVariable::Current(::uPtr< ::uObject*>(enum_123));
        ::uPtr< ::app::Uno::Text::StringBuilder*>(code)->Append_1(Lambda__AddStatementSeparator(NULL, (::uObject*)stmnt));
    }

    for (::uObject* enum_124 = ::uPtr< ::app::Outracks::Simulator::ImmutableList__Outracks_Simulator_Bytecode_Statement*>(__this->Statements)->GetEnumerator(); ::app::Uno::Collections::IEnumerator::MoveNext(::uPtr< ::uObject*>(enum_124)); )
    {
        ::app::Outracks::Simulator::Bytecode::Statement* stmnt = ::app::Uno::Collections::IEnumerator__Outracks_Simulator_Bytecode_Statement::Current(::uPtr< ::uObject*>(enum_124));
        ::uPtr< ::app::Uno::Text::StringBuilder*>(code)->Append_1(Lambda__AddStatementSeparator(NULL, (::uObject*)stmnt));
    }

    return ::app::Uno::String__op_Addition_2(NULL, ::app::Uno::String__op_Addition_2(NULL, ::app::Uno::String__op_Addition_2(NULL, ::app::Uno::String__op_Addition(NULL, (::uObject*)__this->Signature, ::uGetConstString(" => \n")), ::uGetConstString("{\n")), ::app::Outracks::Simulator::IndentString__Indent(NULL, ::uPtr< ::app::Uno::Text::StringBuilder*>(code)->ToString())), ::uGetConstString("\n}"));
}

void Lambda__Write_2(::uStatic* __this, Lambda* l, ::app::Uno::IO::BinaryWriter* writer)
{
    ::app::Outracks::Simulator::Bytecode::Signature__Write(NULL, ::uPtr< Lambda*>(l)->Signature, writer);
    ::app::Outracks::Simulator::List__Write__Outracks_Simulator_Bytecode_BindVariable(NULL, writer, l->LocalVariables, ::app::Outracks::Simulator::Bytecode::BindVariable__Write);
    ::app::Outracks::Simulator::List__Write__Outracks_Simulator_Bytecode_Statement(NULL, writer, l->Statements, ::app::Outracks::Simulator::Bytecode::Statement__Write);
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\Outracks.Simulator.Protocol.Uno\0.1.0\Bytecode\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

Literal__uType* Literal__typeof()
{
    static ::uStaticStrong<Literal__uType*> type;
    if (type != NULL) return type;

    type = (Literal__uType*)::uAllocClassType(sizeof(Literal__uType), "Outracks.Simulator.Bytecode.Literal", false, 0, 0, 0);

    type->SetBaseType(::app::Outracks::Simulator::Bytecode::Expression__typeof());

    type->SetFunctions(5,
        ::uNewFunction("Match", Literal__Match__char_2, 0, false, ::app::Uno::Char__typeof(), ::app::Uno::Func__Outracks_Simulator_Bytecode_BooleanLiteral__char__typeof(), ::app::Uno::Func__Outracks_Simulator_Bytecode_StringLiteral__char__typeof(), ::app::Uno::Func__Outracks_Simulator_Bytecode_NumberLiteral__char__typeof(), ::app::Uno::Func__Outracks_Simulator_Bytecode_EnumLiteral__char__typeof(), ::app::Uno::Func__Outracks_Simulator_Bytecode_BlobLiteral__char__typeof()),
        ::uNewFunction("Match", Literal__Match__object_2, 0, false, ::uObject__typeof(), ::app::Uno::Func__Outracks_Simulator_Bytecode_BooleanLiteral__object__typeof(), ::app::Uno::Func__Outracks_Simulator_Bytecode_StringLiteral__object__typeof(), ::app::Uno::Func__Outracks_Simulator_Bytecode_NumberLiteral__object__typeof(), ::app::Uno::Func__Outracks_Simulator_Bytecode_EnumLiteral__object__typeof(), ::app::Uno::Func__Outracks_Simulator_Bytecode_BlobLiteral__object__typeof()),
        ::uNewFunctionVoid("Match", Literal__Match_2, 0, false, ::app::Uno::Action__Outracks_Simulator_Bytecode_BooleanLiteral__typeof(), ::app::Uno::Action__Outracks_Simulator_Bytecode_StringLiteral__typeof(), ::app::Uno::Action__Outracks_Simulator_Bytecode_NumberLiteral__typeof(), ::app::Uno::Action__Outracks_Simulator_Bytecode_EnumLiteral__typeof(), ::app::Uno::Action__Outracks_Simulator_Bytecode_BlobLiteral__typeof()),
        ::uNewFunction("Read", Literal__Read_2, 0, true, Literal__typeof(), ::app::Uno::IO::BinaryReader__typeof()),
        ::uNewFunctionVoid("Write", Literal__Write_2, 0, true, Literal__typeof(), ::app::Uno::IO::BinaryWriter__typeof()));

    ::uRegisterType(type);
    return type;
}

void Literal___ObjInit_2(Literal* __this)
{
    ::app::Outracks::Simulator::Bytecode::Expression___ObjInit_1(__this);
}

::uChar Literal__Match__char_2(Literal* __this, ::uDelegate* a1, ::uDelegate* a2, ::uDelegate* a3, ::uDelegate* a4, ::uDelegate* a5)
{
    Literal* self = __this;
    ::app::Outracks::Simulator::Bytecode::BooleanLiteral* t1 = ::uAs< ::app::Outracks::Simulator::Bytecode::BooleanLiteral*>(self, ::app::Outracks::Simulator::Bytecode::BooleanLiteral__typeof());

    if (t1 != NULL)
    {
        return ::uPtr< ::uDelegate*>(a1)->Invoke< ::uChar, ::app::Outracks::Simulator::Bytecode::BooleanLiteral*>(t1);
    }

    ::app::Outracks::Simulator::Bytecode::StringLiteral* t2 = ::uAs< ::app::Outracks::Simulator::Bytecode::StringLiteral*>(self, ::app::Outracks::Simulator::Bytecode::StringLiteral__typeof());

    if (t2 != NULL)
    {
        return ::uPtr< ::uDelegate*>(a2)->Invoke< ::uChar, ::app::Outracks::Simulator::Bytecode::StringLiteral*>(t2);
    }

    ::app::Outracks::Simulator::Bytecode::NumberLiteral* t3 = ::uAs< ::app::Outracks::Simulator::Bytecode::NumberLiteral*>(self, ::app::Outracks::Simulator::Bytecode::NumberLiteral__typeof());

    if (t3 != NULL)
    {
        return ::uPtr< ::uDelegate*>(a3)->Invoke< ::uChar, ::app::Outracks::Simulator::Bytecode::NumberLiteral*>(t3);
    }

    ::app::Outracks::Simulator::Bytecode::EnumLiteral* t4 = ::uAs< ::app::Outracks::Simulator::Bytecode::EnumLiteral*>(self, ::app::Outracks::Simulator::Bytecode::EnumLiteral__typeof());

    if (t4 != NULL)
    {
        return ::uPtr< ::uDelegate*>(a4)->Invoke< ::uChar, ::app::Outracks::Simulator::Bytecode::EnumLiteral*>(t4);
    }

    ::app::Outracks::Simulator::Bytecode::BlobLiteral* t5 = ::uAs< ::app::Outracks::Simulator::Bytecode::BlobLiteral*>(self, ::app::Outracks::Simulator::Bytecode::BlobLiteral__typeof());

    if (t5 != NULL)
    {
        return ::uPtr< ::uDelegate*>(a5)->Invoke< ::uChar, ::app::Outracks::Simulator::Bytecode::BlobLiteral*>(t5);
    }

    U_THROW(::app::Outracks::Simulator::NonExhaustiveMatch__New_3(NULL));
}

::uObject* Literal__Match__object_2(Literal* __this, ::uDelegate* a1, ::uDelegate* a2, ::uDelegate* a3, ::uDelegate* a4, ::uDelegate* a5)
{
    Literal* self = __this;
    ::app::Outracks::Simulator::Bytecode::BooleanLiteral* t1 = ::uAs< ::app::Outracks::Simulator::Bytecode::BooleanLiteral*>(self, ::app::Outracks::Simulator::Bytecode::BooleanLiteral__typeof());

    if (t1 != NULL)
    {
        return ::uPtr< ::uDelegate*>(a1)->Invoke< ::uObject*, ::app::Outracks::Simulator::Bytecode::BooleanLiteral*>(t1);
    }

    ::app::Outracks::Simulator::Bytecode::StringLiteral* t2 = ::uAs< ::app::Outracks::Simulator::Bytecode::StringLiteral*>(self, ::app::Outracks::Simulator::Bytecode::StringLiteral__typeof());

    if (t2 != NULL)
    {
        return ::uPtr< ::uDelegate*>(a2)->Invoke< ::uObject*, ::app::Outracks::Simulator::Bytecode::StringLiteral*>(t2);
    }

    ::app::Outracks::Simulator::Bytecode::NumberLiteral* t3 = ::uAs< ::app::Outracks::Simulator::Bytecode::NumberLiteral*>(self, ::app::Outracks::Simulator::Bytecode::NumberLiteral__typeof());

    if (t3 != NULL)
    {
        return ::uPtr< ::uDelegate*>(a3)->Invoke< ::uObject*, ::app::Outracks::Simulator::Bytecode::NumberLiteral*>(t3);
    }

    ::app::Outracks::Simulator::Bytecode::EnumLiteral* t4 = ::uAs< ::app::Outracks::Simulator::Bytecode::EnumLiteral*>(self, ::app::Outracks::Simulator::Bytecode::EnumLiteral__typeof());

    if (t4 != NULL)
    {
        return ::uPtr< ::uDelegate*>(a4)->Invoke< ::uObject*, ::app::Outracks::Simulator::Bytecode::EnumLiteral*>(t4);
    }

    ::app::Outracks::Simulator::Bytecode::BlobLiteral* t5 = ::uAs< ::app::Outracks::Simulator::Bytecode::BlobLiteral*>(self, ::app::Outracks::Simulator::Bytecode::BlobLiteral__typeof());

    if (t5 != NULL)
    {
        return ::uPtr< ::uDelegate*>(a5)->Invoke< ::uObject*, ::app::Outracks::Simulator::Bytecode::BlobLiteral*>(t5);
    }

    U_THROW(::app::Outracks::Simulator::NonExhaustiveMatch__New_3(NULL));
}

void Literal__Match_2(Literal* __this, ::uDelegate* a1, ::uDelegate* a2, ::uDelegate* a3, ::uDelegate* a4, ::uDelegate* a5)
{
    Literal* self = __this;
    ::app::Outracks::Simulator::Bytecode::BooleanLiteral* t1 = ::uAs< ::app::Outracks::Simulator::Bytecode::BooleanLiteral*>(self, ::app::Outracks::Simulator::Bytecode::BooleanLiteral__typeof());

    if (t1 != NULL)
    {
        ::uPtr< ::uDelegate*>(a1)->InvokeVoid< ::app::Outracks::Simulator::Bytecode::BooleanLiteral*>(t1);
        return;
    }

    ::app::Outracks::Simulator::Bytecode::StringLiteral* t2 = ::uAs< ::app::Outracks::Simulator::Bytecode::StringLiteral*>(self, ::app::Outracks::Simulator::Bytecode::StringLiteral__typeof());

    if (t2 != NULL)
    {
        ::uPtr< ::uDelegate*>(a2)->InvokeVoid< ::app::Outracks::Simulator::Bytecode::StringLiteral*>(t2);
        return;
    }

    ::app::Outracks::Simulator::Bytecode::NumberLiteral* t3 = ::uAs< ::app::Outracks::Simulator::Bytecode::NumberLiteral*>(self, ::app::Outracks::Simulator::Bytecode::NumberLiteral__typeof());

    if (t3 != NULL)
    {
        ::uPtr< ::uDelegate*>(a3)->InvokeVoid< ::app::Outracks::Simulator::Bytecode::NumberLiteral*>(t3);
        return;
    }

    ::app::Outracks::Simulator::Bytecode::EnumLiteral* t4 = ::uAs< ::app::Outracks::Simulator::Bytecode::EnumLiteral*>(self, ::app::Outracks::Simulator::Bytecode::EnumLiteral__typeof());

    if (t4 != NULL)
    {
        ::uPtr< ::uDelegate*>(a4)->InvokeVoid< ::app::Outracks::Simulator::Bytecode::EnumLiteral*>(t4);
        return;
    }

    ::app::Outracks::Simulator::Bytecode::BlobLiteral* t5 = ::uAs< ::app::Outracks::Simulator::Bytecode::BlobLiteral*>(self, ::app::Outracks::Simulator::Bytecode::BlobLiteral__typeof());

    if (t5 != NULL)
    {
        ::uPtr< ::uDelegate*>(a5)->InvokeVoid< ::app::Outracks::Simulator::Bytecode::BlobLiteral*>(t5);
        return;
    }

    U_THROW(::app::Outracks::Simulator::NonExhaustiveMatch__New_3(NULL));
}

Literal* Literal__Read_2(::uStatic* __this, ::app::Uno::IO::BinaryReader* reader)
{
    ::uChar token = ::uPtr< ::app::Uno::IO::BinaryReader*>(reader)->ReadChar();

    switch (token)
    {
        case 'b':
        {
            return (Literal*)::app::Outracks::Simulator::Bytecode::BooleanLiteral__Read_3(NULL, reader);
        }
        case 's':
        {
            return (Literal*)::app::Outracks::Simulator::Bytecode::StringLiteral__Read_3(NULL, reader);
        }
        case 'n':
        {
            return (Literal*)::app::Outracks::Simulator::Bytecode::NumberLiteral__Read_3(NULL, reader);
        }
        case 'e':
        {
            return (Literal*)::app::Outracks::Simulator::Bytecode::EnumLiteral__Read_3(NULL, reader);
        }
        case 'd':
        {
            return (Literal*)::app::Outracks::Simulator::Bytecode::BlobLiteral__Read_3(NULL, reader);
        }
    }

    U_THROW(::app::Outracks::Simulator::InvalidDataException__New_3(NULL));
}

void Literal__Write_2(::uStatic* __this, Literal* literal, ::app::Uno::IO::BinaryWriter* writer)
{
    ::uPtr< ::app::Uno::IO::BinaryWriter*>(writer)->Write_5(::uPtr< Literal*>(literal)->Match__char_2(::app::Outracks::Simulator::Closure__Return__Outracks_Simulator_Bytecode_BooleanLiteral__char(NULL, 'b'), ::app::Outracks::Simulator::Closure__Return__Outracks_Simulator_Bytecode_StringLiteral__char(NULL, 's'), ::app::Outracks::Simulator::Closure__Return__Outracks_Simulator_Bytecode_NumberLiteral__char(NULL, 'n'), ::app::Outracks::Simulator::Closure__Return__Outracks_Simulator_Bytecode_EnumLiteral__char(NULL, 'e'), ::app::Outracks::Simulator::Closure__Return__Outracks_Simulator_Bytecode_BlobLiteral__char(NULL, 'd')));
    literal->Match_2(::app::Outracks::Simulator::Closure__ApplySecond__Outracks_Simulator_Bytecode_BooleanLiteral__Uno_IO_BinaryWriter(NULL, ::uNewDelegateNonVirt(::app::Uno::Action__Outracks_Simulator_Bytecode_BooleanLiteral__Uno_IO_BinaryWriter__typeof(), (const void*)::app::Outracks::Simulator::Bytecode::BooleanLiteral__Write_3), writer), ::app::Outracks::Simulator::Closure__ApplySecond__Outracks_Simulator_Bytecode_StringLiteral__Uno_IO_BinaryWriter(NULL, ::uNewDelegateNonVirt(::app::Uno::Action__Outracks_Simulator_Bytecode_StringLiteral__Uno_IO_BinaryWriter__typeof(), (const void*)::app::Outracks::Simulator::Bytecode::StringLiteral__Write_3), writer), ::app::Outracks::Simulator::Closure__ApplySecond__Outracks_Simulator_Bytecode_NumberLiteral__Uno_IO_BinaryWriter(NULL, ::uNewDelegateNonVirt(::app::Uno::Action__Outracks_Simulator_Bytecode_NumberLiteral__Uno_IO_BinaryWriter__typeof(), (const void*)::app::Outracks::Simulator::Bytecode::NumberLiteral__Write_3), writer), ::app::Outracks::Simulator::Closure__ApplySecond__Outracks_Simulator_Bytecode_EnumLiteral__Uno_IO_BinaryWriter(NULL, ::uNewDelegateNonVirt(::app::Uno::Action__Outracks_Simulator_Bytecode_EnumLiteral__Uno_IO_BinaryWriter__typeof(), (const void*)::app::Outracks::Simulator::Bytecode::EnumLiteral__Write_3), writer), ::app::Outracks::Simulator::Closure__ApplySecond__Outracks_Simulator_Bytecode_BlobLiteral__Uno_IO_BinaryWriter(NULL, ::uNewDelegateNonVirt(::app::Uno::Action__Outracks_Simulator_Bytecode_BlobLiteral__Uno_IO_BinaryWriter__typeof(), (const void*)::app::Outracks::Simulator::Bytecode::BlobLiteral__Write_3), writer));
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\Outracks.Simulator.Protocol.Uno\0.1.0\Bytecode\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

LogicalOr__uType* LogicalOr__typeof()
{
    static ::uStaticStrong<LogicalOr__uType*> type;
    if (type != NULL) return type;

    type = (LogicalOr__uType*)::uAllocClassType(sizeof(LogicalOr__uType), "Outracks.Simulator.Bytecode.LogicalOr", false, 0, 2, 0);

    type->SetBaseType(::app::Outracks::Simulator::Bytecode::Expression__typeof());
    type->__fp_ToString = (::uString*(*)(::uObject*))LogicalOr__ToString;

    type->SetStrongRefs(
        "Left", offsetof(LogicalOr, Left),
        "Right", offsetof(LogicalOr, Right));

    type->SetFields(2,
        ::uNewField("Left", NULL, offsetof(LogicalOr, Left), ::app::Outracks::Simulator::Bytecode::Expression__typeof()),
        ::uNewField("Right", NULL, offsetof(LogicalOr, Right), ::app::Outracks::Simulator::Bytecode::Expression__typeof()));

    type->SetFunctions(4,
        ::uNewFunction(".ctor", LogicalOr__New_1, 0, true, LogicalOr__typeof(), ::app::Outracks::Simulator::Bytecode::Expression__typeof(), ::app::Outracks::Simulator::Bytecode::Expression__typeof()),
        ::uNewFunction("Read", LogicalOr__Read_2, 0, true, LogicalOr__typeof(), ::app::Uno::IO::BinaryReader__typeof()),
        ::uNewFunctionVoid("Write", LogicalOr__Write_2, 0, false, ::app::Uno::IO::BinaryWriter__typeof()),
        ::uNewFunctionVoid("Write", LogicalOr__Write_3, 0, true, LogicalOr__typeof(), ::app::Uno::IO::BinaryWriter__typeof()));

    ::uRegisterType(type);
    return type;
}

void LogicalOr___ObjInit_2(LogicalOr* __this, ::app::Outracks::Simulator::Bytecode::Expression* left, ::app::Outracks::Simulator::Bytecode::Expression* right)
{
    ::app::Outracks::Simulator::Bytecode::Expression___ObjInit_1(__this);
    __this->Left = left;
    __this->Right = right;
}

LogicalOr* LogicalOr__New_1(::uStatic* __this, ::app::Outracks::Simulator::Bytecode::Expression* left, ::app::Outracks::Simulator::Bytecode::Expression* right)
{
    LogicalOr* inst = (LogicalOr*)::uAllocObject(sizeof(LogicalOr), LogicalOr__typeof());
    inst->_ObjInit_2(left, right);
    return inst;
}

LogicalOr* LogicalOr__Read_2(::uStatic* __this, ::app::Uno::IO::BinaryReader* reader)
{
    ::app::Outracks::Simulator::Bytecode::Expression* _Left = ::uPtr< ::uDelegate*>(::app::Outracks::Simulator::Bytecode::Expression__Read_1)->Invoke< ::app::Outracks::Simulator::Bytecode::Expression*, ::app::Uno::IO::BinaryReader*>(reader);
    ::app::Outracks::Simulator::Bytecode::Expression* _Right = ::uPtr< ::uDelegate*>(::app::Outracks::Simulator::Bytecode::Expression__Read_1)->Invoke< ::app::Outracks::Simulator::Bytecode::Expression*, ::app::Uno::IO::BinaryReader*>(reader);
    return LogicalOr__New_1(NULL, _Left, _Right);
}

::uString* LogicalOr__ToString(LogicalOr* __this)
{
    return ::app::Uno::String__op_Addition_2(NULL, ::app::Uno::String__op_Addition_1(NULL, ::app::Uno::String__op_Addition_2(NULL, ::app::Uno::String__op_Addition_1(NULL, ::uGetConstString("("), (::uObject*)__this->Left), ::uGetConstString(" || ")), (::uObject*)__this->Right), ::uGetConstString(")"));
}

void LogicalOr__Write_2(LogicalOr* __this, ::app::Uno::IO::BinaryWriter* writer)
{
    ::uPtr< ::uDelegate*>(::app::Outracks::Simulator::Bytecode::Expression__Write_1)->InvokeVoid< ::app::Outracks::Simulator::Bytecode::Expression*, ::app::Uno::IO::BinaryWriter*>(__this->Left, writer);
    ::uPtr< ::uDelegate*>(::app::Outracks::Simulator::Bytecode::Expression__Write_1)->InvokeVoid< ::app::Outracks::Simulator::Bytecode::Expression*, ::app::Uno::IO::BinaryWriter*>(__this->Right, writer);
}

void LogicalOr__Write_3(::uStatic* __this, LogicalOr* o, ::app::Uno::IO::BinaryWriter* writer)
{
    ::uPtr< LogicalOr*>(o)->Write_2(writer);
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\Outracks.Simulator.Protocol.Uno\0.1.0\Bytecode\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

MethodGroup__uType* MethodGroup__typeof()
{
    static ::uStaticStrong<MethodGroup__uType*> type;
    if (type != NULL) return type;

    type = (MethodGroup__uType*)::uAllocClassType(sizeof(MethodGroup__uType), "Outracks.Simulator.Bytecode.MethodGroup", false, 0, 4, 0);

    type->SetBaseType(::app::Outracks::Simulator::Bytecode::Expression__typeof());
    type->__fp_ToString = (::uString*(*)(::uObject*))MethodGroup__ToString;

    type->SetStrongRefs(
        "DelegateType", offsetof(MethodGroup, DelegateType),
        "MethodName", offsetof(MethodGroup, MethodName),
        "MethodSignature", offsetof(MethodGroup, MethodSignature),
        "Object", offsetof(MethodGroup, Object));

    type->SetFields(4,
        ::uNewField("DelegateType", NULL, offsetof(MethodGroup, DelegateType), ::app::Outracks::Simulator::Bytecode::TypeName__typeof()),
        ::uNewField("MethodName", NULL, offsetof(MethodGroup, MethodName), ::app::Outracks::Simulator::Bytecode::TypeMemberName__typeof()),
        ::uNewField("MethodSignature", NULL, offsetof(MethodGroup, MethodSignature), ::app::Outracks::Simulator::Bytecode::Signature__typeof()),
        ::uNewField("Object", NULL, offsetof(MethodGroup, Object), ::app::Outracks::Simulator::Bytecode::Expression__typeof()));

    type->SetFunctions(3,
        ::uNewFunction(".ctor", MethodGroup__New_1, 0, true, MethodGroup__typeof(), ::app::Outracks::Simulator::Bytecode::Expression__typeof(), ::app::Outracks::Simulator::Bytecode::TypeMemberName__typeof(), ::app::Outracks::Simulator::Bytecode::Signature__typeof(), ::app::Outracks::Simulator::Bytecode::TypeName__typeof()),
        ::uNewFunction("Read", MethodGroup__Read_2, 0, true, MethodGroup__typeof(), ::app::Uno::IO::BinaryReader__typeof()),
        ::uNewFunctionVoid("Write", MethodGroup__Write_2, 0, true, MethodGroup__typeof(), ::app::Uno::IO::BinaryWriter__typeof()));

    ::uRegisterType(type);
    return type;
}

void MethodGroup___ObjInit_2(MethodGroup* __this, ::app::Outracks::Simulator::Bytecode::Expression* o, ::app::Outracks::Simulator::Bytecode::TypeMemberName* methodName, ::app::Outracks::Simulator::Bytecode::Signature* methodSignature, ::app::Outracks::Simulator::Bytecode::TypeName* delegateType)
{
    ::app::Outracks::Simulator::Bytecode::Expression___ObjInit_1(__this);
    __this->Object = o;
    __this->MethodName = methodName;
    __this->MethodSignature = methodSignature;
    __this->DelegateType = delegateType;
}

MethodGroup* MethodGroup__New_1(::uStatic* __this, ::app::Outracks::Simulator::Bytecode::Expression* o, ::app::Outracks::Simulator::Bytecode::TypeMemberName* methodName, ::app::Outracks::Simulator::Bytecode::Signature* methodSignature, ::app::Outracks::Simulator::Bytecode::TypeName* delegateType)
{
    MethodGroup* inst = (MethodGroup*)::uAllocObject(sizeof(MethodGroup), MethodGroup__typeof());
    inst->_ObjInit_2(o, methodName, methodSignature, delegateType);
    return inst;
}

MethodGroup* MethodGroup__Read_2(::uStatic* __this, ::app::Uno::IO::BinaryReader* reader)
{
    ::app::Outracks::Simulator::Bytecode::Expression* a = ::uPtr< ::uDelegate*>(::app::Outracks::Simulator::Bytecode::Expression__Read_1)->Invoke< ::app::Outracks::Simulator::Bytecode::Expression*, ::app::Uno::IO::BinaryReader*>(reader);
    ::app::Outracks::Simulator::Bytecode::TypeMemberName* b = ::app::Outracks::Simulator::Bytecode::TypeMemberName__Read(NULL, reader);
    ::app::Outracks::Simulator::Bytecode::Signature* c = ::app::Outracks::Simulator::Bytecode::Signature__Read(NULL, reader);
    ::app::Outracks::Simulator::Bytecode::TypeName* d = ::uPtr< ::uDelegate*>(::app::Outracks::Simulator::Bytecode::TypeName__Read)->Invoke< ::app::Outracks::Simulator::Bytecode::TypeName*, ::app::Uno::IO::BinaryReader*>(reader);
    return MethodGroup__New_1(NULL, a, b, c, d);
}

::uString* MethodGroup__ToString(MethodGroup* __this)
{
    return ::app::Uno::String__op_Addition_2(NULL, ::app::Uno::String__op_Addition_1(NULL, ::app::Uno::String__op_Addition_2(NULL, ::app::Uno::String__op_Addition_1(NULL, ::app::Uno::String__op_Addition_2(NULL, ::app::Uno::String__op_Addition_1(NULL, ::uGetConstString("(("), (::uObject*)__this->DelegateType), ::uGetConstString(")(")), (::uObject*)__this->Object), ::uGetConstString(").")), (::uObject*)__this->MethodName), ::uGetConstString(")"));
}

void MethodGroup__Write_2(::uStatic* __this, MethodGroup* l, ::app::Uno::IO::BinaryWriter* writer)
{
    ::uPtr< ::uDelegate*>(::app::Outracks::Simulator::Bytecode::Expression__Write_1)->InvokeVoid< ::app::Outracks::Simulator::Bytecode::Expression*, ::app::Uno::IO::BinaryWriter*>(::uPtr< MethodGroup*>(l)->Object, writer);
    ::app::Outracks::Simulator::Bytecode::TypeMemberName__Write_1(NULL, l->MethodName, writer);
    ::app::Outracks::Simulator::Bytecode::Signature__Write(NULL, l->MethodSignature, writer);
    ::uPtr< ::uDelegate*>(::app::Outracks::Simulator::Bytecode::TypeName__Write)->InvokeVoid< ::app::Outracks::Simulator::Bytecode::TypeName*, ::app::Uno::IO::BinaryWriter*>(l->DelegateType, writer);
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\Outracks.Simulator.Protocol.Uno\0.1.0\Bytecode\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

::uStaticStrong< ::uDelegate*> NamespaceName__Read;
::uStaticStrong< ::uDelegate*> NamespaceName__Write;

NamespaceName__uType* NamespaceName__typeof()
{
    static ::uStaticStrong<NamespaceName__uType*> type;
    if (type != NULL) return type;

    type = (NamespaceName__uType*)::uAllocClassType(sizeof(NamespaceName__uType), "Outracks.Simulator.Bytecode.NamespaceName", false, 1, 1, 0);

    type->__fp_Equals = (bool(*)(::uObject*, ::uObject*))NamespaceName__Equals;
    type->__fp_GetHashCode = (int(*)(::uObject*))NamespaceName__GetHashCode;
    type->__fp_ToString = (::uString*(*)(::uObject*))NamespaceName__ToString;

    type->SetInterfaces(
        ::app::Outracks::Simulator::IEquatable__Outracks_Simulator_Bytecode_NamespaceName__typeof(), offsetof(NamespaceName__uType, __interface_0));

    type->SetStrongRefs(
        "FullName", offsetof(NamespaceName, FullName));

    type->SetFields(3,
        ::uNewField("FullName", NULL, offsetof(NamespaceName, FullName), ::app::Uno::String__typeof()),
        ::uNewField("Read", &NamespaceName__Read, 0, ::app::Uno::Func__Uno_IO_BinaryReader__Outracks_Simulator_Bytecode_NamespaceName__typeof()),
        ::uNewField("Write", &NamespaceName__Write, 0, ::app::Uno::Action__Outracks_Simulator_Bytecode_NamespaceName__Uno_IO_BinaryWriter__typeof()));

    type->SetFunctions(4,
        ::uNewFunction("_Read", NamespaceName___Read, 0, true, NamespaceName__typeof(), ::app::Uno::IO::BinaryReader__typeof()),
        ::uNewFunctionVoid("_Write", NamespaceName___Write, 0, true, NamespaceName__typeof(), ::app::Uno::IO::BinaryWriter__typeof()),
        ::uNewFunction("Equals", NamespaceName__Equals_2, 0, false, ::app::Uno::Bool__typeof(), NamespaceName__typeof()),
        ::uNewFunction(".ctor", NamespaceName__New_1, 0, true, NamespaceName__typeof(), ::app::Uno::String__typeof()));

    ::uRegisterType(type);
    return type;
}

void NamespaceName___ObjInit(NamespaceName* __this, ::uString* fullName)
{
    __this->FullName = fullName;
}

NamespaceName* NamespaceName___Read(::uStatic* __this, ::app::Uno::IO::BinaryReader* reader)
{
    return NamespaceName__New_1(NULL, ::uPtr< ::app::Uno::IO::BinaryReader*>(reader)->ReadString());
}

void NamespaceName___TypeInit(::uStatic* __this)
{
    NamespaceName__Write = ::uNewDelegateNonVirt(::app::Uno::Action__Outracks_Simulator_Bytecode_NamespaceName__Uno_IO_BinaryWriter__typeof(), (const void*)NamespaceName___Write);
    NamespaceName__Read = ::uNewDelegateNonVirt(::app::Uno::Func__Uno_IO_BinaryReader__Outracks_Simulator_Bytecode_NamespaceName__typeof(), (const void*)NamespaceName___Read);
}

void NamespaceName___Write(::uStatic* __this, NamespaceName* name, ::app::Uno::IO::BinaryWriter* writer)
{
    ::uPtr< ::app::Uno::IO::BinaryWriter*>(writer)->Write_24(::uPtr< NamespaceName*>(name)->FullName);
}

bool NamespaceName__Equals(NamespaceName* __this, ::uObject* obj)
{
    if (::app::Uno::Object__ReferenceEquals(NULL, NULL, obj))
    {
        return false;
    }

    if (::app::Uno::Object__ReferenceEquals(NULL, (::uObject*)__this, obj))
    {
        return true;
    }

    return ::uIs(obj, NamespaceName__typeof()) && __this->Equals_2(::uCast< NamespaceName*>(obj, NamespaceName__typeof()));
}

bool NamespaceName__Equals_2(NamespaceName* __this, NamespaceName* other)
{
    if (::app::Uno::Object__ReferenceEquals(NULL, NULL, (::uObject*)other))
    {
        return false;
    }

    if (::app::Uno::Object__ReferenceEquals(NULL, (::uObject*)__this, (::uObject*)other))
    {
        return true;
    }

    return ::app::Uno::String__Equals_3(NULL, __this->FullName, ::uPtr< NamespaceName*>(other)->FullName);
}

int NamespaceName__GetHashCode(NamespaceName* __this)
{
    return ::app::Uno::String__op_Inequality(NULL, __this->FullName, NULL) ? ::uPtr< ::uString*>(__this->FullName)->GetHashCode() : 0;
}

NamespaceName* NamespaceName__New_1(::uStatic* __this, ::uString* fullName)
{
    NamespaceName* inst = (NamespaceName*)::uAllocObject(sizeof(NamespaceName), NamespaceName__typeof());
    inst->_ObjInit(fullName);
    return inst;
}

bool NamespaceName__op_Equality(::uStatic* __this, NamespaceName* left, NamespaceName* right)
{
    return ::app::Uno::Object__Equals_1(NULL, (::uObject*)left, (::uObject*)right);
}

bool NamespaceName__op_Inequality(::uStatic* __this, NamespaceName* left, NamespaceName* right)
{
    return !::app::Uno::Object__Equals_1(NULL, (::uObject*)left, (::uObject*)right);
}

::uString* NamespaceName__ToString(NamespaceName* __this)
{
    return __this->FullName;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\Outracks.Simulator.Protocol.Uno\0.1.0\Bytecode\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

NoOperation__uType* NoOperation__typeof()
{
    static ::uStaticStrong<NoOperation__uType*> type;
    if (type != NULL) return type;

    type = (NoOperation__uType*)::uAllocClassType(sizeof(NoOperation__uType), "Outracks.Simulator.Bytecode.NoOperation", false, 0, 1, 0);

    type->SetBaseType(::app::Outracks::Simulator::Bytecode::Statement__typeof());
    type->__fp_ToString = (::uString*(*)(::uObject*))NoOperation__ToString;

    type->SetStrongRefs(
        "Description._value", offsetof(NoOperation, Description._value));

    type->SetFields(1,
        ::uNewField("Description", NULL, offsetof(NoOperation, Description), ::app::Outracks::Simulator::Bytecode::Optional__string__typeof()));

    type->SetFunctions(4,
        ::uNewFunction(".ctor", NoOperation__New_1, 0, true, NoOperation__typeof(), ::app::Outracks::Simulator::Bytecode::Optional__string__typeof()),
        ::uNewFunction("Read", NoOperation__Read_1, 0, true, NoOperation__typeof(), ::app::Uno::IO::BinaryReader__typeof()),
        ::uNewFunctionVoid("Write", NoOperation__Write_1, 0, false, ::app::Uno::IO::BinaryWriter__typeof()),
        ::uNewFunctionVoid("Write", NoOperation__Write_2, 0, true, NoOperation__typeof(), ::app::Uno::IO::BinaryWriter__typeof()));

    ::uRegisterType(type);
    return type;
}

void NoOperation___ObjInit_1(NoOperation* __this, ::app::Outracks::Simulator::Bytecode::Optional__string description)
{
    ::app::Outracks::Simulator::Bytecode::Statement___ObjInit(__this);
    __this->Description = description;
}

NoOperation* NoOperation__New_1(::uStatic* __this, ::app::Outracks::Simulator::Bytecode::Optional__string description)
{
    NoOperation* inst = (NoOperation*)::uAllocObject(sizeof(NoOperation), NoOperation__typeof());
    inst->_ObjInit_1(description);
    return inst;
}

NoOperation* NoOperation__Read_1(::uStatic* __this, ::app::Uno::IO::BinaryReader* reader)
{
    return NoOperation__New_1(NULL, ::app::Outracks::Simulator::Bytecode::Optional__Read__string(NULL, reader, ::app::Outracks::Simulator::Serialization__ReadString));
}

::uString* NoOperation__ToString(NoOperation* __this)
{
    return ::app::Uno::String__op_Addition_1(NULL, ::uGetConstString("// "), ::uBox(::app::Outracks::Simulator::Bytecode::Optional__string__typeof(), __this->Description));
}

void NoOperation__Write_1(NoOperation* __this, ::app::Uno::IO::BinaryWriter* writer)
{
    ::app::Outracks::Simulator::Bytecode::Optional__Write__string(NULL, writer, __this->Description, ::uNewDelegateNonVirt(::app::Uno::Action__string__typeof(), (const void*)::app::Uno::IO::BinaryWriter__Write_24, writer));
}

void NoOperation__Write_2(::uStatic* __this, NoOperation* s, ::app::Uno::IO::BinaryWriter* writer)
{
    ::uPtr< NoOperation*>(s)->Write_1(writer);
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\Outracks.Simulator.Protocol.Uno\0.1.0\Bytecode\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

NumberLiteral__uType* NumberLiteral__typeof()
{
    static ::uStaticStrong<NumberLiteral__uType*> type;
    if (type != NULL) return type;

    type = (NumberLiteral__uType*)::uAllocClassType(sizeof(NumberLiteral__uType), "Outracks.Simulator.Bytecode.NumberLiteral", false, 0, 0, 0);

    type->SetBaseType(::app::Outracks::Simulator::Bytecode::Literal__typeof());
    type->__fp_ToString = (::uString*(*)(::uObject*))NumberLiteral__ToString;

    type->SetFields(2,
        ::uNewField("DoubleValue", NULL, offsetof(NumberLiteral, DoubleValue), ::app::Uno::Double__typeof()),
        ::uNewField("NumberType", NULL, offsetof(NumberLiteral, NumberType), ::app::Outracks::Simulator::Bytecode::NumberType__typeof()));

    type->SetFunctions(3,
        ::uNewFunction(".ctor", NumberLiteral__New_1, 0, true, NumberLiteral__typeof(), ::app::Outracks::Simulator::Bytecode::NumberType__typeof(), ::app::Uno::Double__typeof()),
        ::uNewFunction("Read", NumberLiteral__Read_3, 0, true, NumberLiteral__typeof(), ::app::Uno::IO::BinaryReader__typeof()),
        ::uNewFunctionVoid("Write", NumberLiteral__Write_3, 0, true, NumberLiteral__typeof(), ::app::Uno::IO::BinaryWriter__typeof()));

    ::uRegisterType(type);
    return type;
}

void NumberLiteral___ObjInit_3(NumberLiteral* __this, int numberType, double doubleValue)
{
    ::app::Outracks::Simulator::Bytecode::Literal___ObjInit_2(__this);
    __this->DoubleValue = doubleValue;
    __this->NumberType = numberType;
}

NumberLiteral* NumberLiteral__New_1(::uStatic* __this, int numberType, double doubleValue)
{
    NumberLiteral* inst = (NumberLiteral*)::uAllocObject(sizeof(NumberLiteral), NumberLiteral__typeof());
    inst->_ObjInit_3(numberType, doubleValue);
    return inst;
}

NumberLiteral* NumberLiteral__Read_3(::uStatic* __this, ::app::Uno::IO::BinaryReader* reader)
{
    int nubmerType = ::uPtr< ::app::Uno::IO::BinaryReader*>(reader)->ReadInt();
    double doubleValue = reader->ReadDouble();
    return NumberLiteral__New_1(NULL, nubmerType, doubleValue);
}

::uString* NumberLiteral__ToString(NumberLiteral* __this)
{
    double ind_123 = double();
    return ::app::Uno::Double::ToString((ind_123 = __this->DoubleValue, ind_123));
}

void NumberLiteral__Write_3(::uStatic* __this, NumberLiteral* l, ::app::Uno::IO::BinaryWriter* writer)
{
    ::uPtr< ::app::Uno::IO::BinaryWriter*>(writer)->Write_13(::uPtr< NumberLiteral*>(l)->NumberType);
    writer->Write_6(l->DoubleValue);
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\Outracks.Simulator.Protocol.Uno\0.1.0\Bytecode\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

::uEnumType* NumberType__typeof()
{
    static ::uStaticStrong< ::uEnumType*> type;
    if (type != NULL) return type;

    type = ::uAllocEnumType("Outracks.Simulator.Bytecode.NumberType", ::app::Uno::Int__typeof(), 8);

    type->SetLiterals(
        "Double", 0LL,
        "Float", 1LL,
        "Int", 2LL,
        "UInt", 3LL,
        "Short", 4LL,
        "UShort", 5LL,
        "SByte", 6LL,
        "Byte", 7LL);

    ::uRegisterType(type);
    return type;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\Outracks.Simulator.Protocol.Uno\0.1.0\Common\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

Optional__uType* Optional__typeof()
{
    static ::uStaticStrong<Optional__uType*> type;
    if (type != NULL) return type;

    type = (Optional__uType*)::uAllocClassType(sizeof(Optional__uType), "Outracks.Simulator.Bytecode.Optional", false, 0, 0, 0);

    type->SetFunctions(21,
        ::uNewFunction("None", Optional__None, 0, true, Optional__typeof()),
        ::uNewFunction("None", Optional__None__Outracks_Simulator_Bytecode_NamespaceName, 0, true, ::app::Outracks::Simulator::Bytecode::Optional__Outracks_Simulator_Bytecode_NamespaceName__typeof()),
        ::uNewFunction("None", Optional__None__Outracks_Simulator_Bytecode_TypeName, 0, true, ::app::Outracks::Simulator::Bytecode::Optional__Outracks_Simulator_Bytecode_TypeName__typeof()),
        ::uNewFunction("None", Optional__None__string, 0, true, ::app::Outracks::Simulator::Bytecode::Optional__string__typeof()),
        ::uNewFunction("Read", Optional__Read__Outracks_Simulator_Bytecode_NamespaceName, 0, true, ::app::Outracks::Simulator::Bytecode::Optional__Outracks_Simulator_Bytecode_NamespaceName__typeof(), ::app::Uno::IO::BinaryReader__typeof(), ::app::Uno::Func__Uno_IO_BinaryReader__Outracks_Simulator_Bytecode_NamespaceName__typeof()),
        ::uNewFunction("Read", Optional__Read__Outracks_Simulator_Bytecode_TypeName, 0, true, ::app::Outracks::Simulator::Bytecode::Optional__Outracks_Simulator_Bytecode_TypeName__typeof(), ::app::Uno::IO::BinaryReader__typeof(), ::app::Uno::Func__Uno_IO_BinaryReader__Outracks_Simulator_Bytecode_TypeName__typeof()),
        ::uNewFunction("Read", Optional__Read__string, 0, true, ::app::Outracks::Simulator::Bytecode::Optional__string__typeof(), ::app::Uno::IO::BinaryReader__typeof(), ::app::Uno::Func__Uno_IO_BinaryReader__string__typeof()),
        ::uNewFunction("Some", Optional__Some__Outracks_Simulator_Bytecode_NamespaceName, 0, true, ::app::Outracks::Simulator::Bytecode::Optional__Outracks_Simulator_Bytecode_NamespaceName__typeof(), ::app::Outracks::Simulator::Bytecode::NamespaceName__typeof()),
        ::uNewFunction("Some", Optional__Some__Outracks_Simulator_Bytecode_TypeName, 0, true, ::app::Outracks::Simulator::Bytecode::Optional__Outracks_Simulator_Bytecode_TypeName__typeof(), ::app::Outracks::Simulator::Bytecode::TypeName__typeof()),
        ::uNewFunction("Some", Optional__Some__Outracks_Simulator_DialogButton, 0, true, ::app::Outracks::Simulator::Bytecode::Optional__Outracks_Simulator_DialogButton__typeof(), ::app::Outracks::Simulator::DialogButton__typeof()),
        ::uNewFunction("Some", Optional__Some__Outracks_Simulator_Protocol_Reify, 0, true, ::app::Outracks::Simulator::Bytecode::Optional__Outracks_Simulator_Protocol_Reify__typeof(), ::app::Outracks::Simulator::Protocol::Reify__typeof()),
        ::uNewFunction("Some", Optional__Some__string, 0, true, ::app::Outracks::Simulator::Bytecode::Optional__string__typeof(), ::app::Uno::String__typeof()),
        ::uNewFunctionVoid("Write", Optional__Write__Outracks_Simulator_Bytecode_NamespaceName, 0, true, ::app::Uno::IO::BinaryWriter__typeof(), ::app::Outracks::Simulator::Bytecode::Optional__Outracks_Simulator_Bytecode_NamespaceName__typeof(), ::app::Uno::Action__Outracks_Simulator_Bytecode_NamespaceName__typeof()),
        ::uNewFunctionVoid("Write", Optional__Write__Outracks_Simulator_Bytecode_NamespaceName_1, 0, true, ::app::Uno::IO::BinaryWriter__typeof(), ::app::Outracks::Simulator::Bytecode::Optional__Outracks_Simulator_Bytecode_NamespaceName__typeof(), ::app::Uno::Action__Outracks_Simulator_Bytecode_NamespaceName__Uno_IO_BinaryWriter__typeof()),
        ::uNewFunctionVoid("Write", Optional__Write__Outracks_Simulator_Bytecode_NamespaceName_2, 0, true, ::app::Uno::IO::BinaryWriter__typeof(), ::app::Outracks::Simulator::Bytecode::Optional__Outracks_Simulator_Bytecode_NamespaceName__typeof(), ::app::Uno::Action__Uno_IO_BinaryWriter__Outracks_Simulator_Bytecode_NamespaceName__typeof()),
        ::uNewFunctionVoid("Write", Optional__Write__Outracks_Simulator_Bytecode_TypeName, 0, true, ::app::Uno::IO::BinaryWriter__typeof(), ::app::Outracks::Simulator::Bytecode::Optional__Outracks_Simulator_Bytecode_TypeName__typeof(), ::app::Uno::Action__Outracks_Simulator_Bytecode_TypeName__typeof()),
        ::uNewFunctionVoid("Write", Optional__Write__Outracks_Simulator_Bytecode_TypeName_1, 0, true, ::app::Uno::IO::BinaryWriter__typeof(), ::app::Outracks::Simulator::Bytecode::Optional__Outracks_Simulator_Bytecode_TypeName__typeof(), ::app::Uno::Action__Outracks_Simulator_Bytecode_TypeName__Uno_IO_BinaryWriter__typeof()),
        ::uNewFunctionVoid("Write", Optional__Write__Outracks_Simulator_Bytecode_TypeName_2, 0, true, ::app::Uno::IO::BinaryWriter__typeof(), ::app::Outracks::Simulator::Bytecode::Optional__Outracks_Simulator_Bytecode_TypeName__typeof(), ::app::Uno::Action__Uno_IO_BinaryWriter__Outracks_Simulator_Bytecode_TypeName__typeof()),
        ::uNewFunctionVoid("Write", Optional__Write__string, 0, true, ::app::Uno::IO::BinaryWriter__typeof(), ::app::Outracks::Simulator::Bytecode::Optional__string__typeof(), ::app::Uno::Action__string__typeof()),
        ::uNewFunctionVoid("Write", Optional__Write__string_1, 0, true, ::app::Uno::IO::BinaryWriter__typeof(), ::app::Outracks::Simulator::Bytecode::Optional__string__typeof(), ::app::Uno::Action__string__Uno_IO_BinaryWriter__typeof()),
        ::uNewFunctionVoid("Write", Optional__Write__string_2, 0, true, ::app::Uno::IO::BinaryWriter__typeof(), ::app::Outracks::Simulator::Bytecode::Optional__string__typeof(), ::app::Uno::Action__Uno_IO_BinaryWriter__string__typeof()));

    ::uRegisterType(type);
    return type;
}

void Optional___ObjInit(Optional* __this)
{
}

Optional* Optional__New_1(::uStatic* __this)
{
    Optional* inst = (Optional*)::uAllocObject(sizeof(Optional), Optional__typeof());
    inst->_ObjInit();
    return inst;
}

Optional* Optional__None(::uStatic* __this)
{
    return Optional__New_1(NULL);
}

::app::Outracks::Simulator::Bytecode::Optional__Outracks_Simulator_Bytecode_NamespaceName Optional__None__Outracks_Simulator_Bytecode_NamespaceName(::uStatic* __this)
{
    return ::app::Outracks::Simulator::Bytecode::Optional__Outracks_Simulator_Bytecode_NamespaceName__New_1(NULL, false, NULL);
}

::app::Outracks::Simulator::Bytecode::Optional__Outracks_Simulator_Bytecode_TypeName Optional__None__Outracks_Simulator_Bytecode_TypeName(::uStatic* __this)
{
    return ::app::Outracks::Simulator::Bytecode::Optional__Outracks_Simulator_Bytecode_TypeName__New_1(NULL, false, NULL);
}

::app::Outracks::Simulator::Bytecode::Optional__string Optional__None__string(::uStatic* __this)
{
    return ::app::Outracks::Simulator::Bytecode::Optional__string__New_1(NULL, false, NULL);
}

::app::Outracks::Simulator::Bytecode::Optional__Outracks_Simulator_Bytecode_NamespaceName Optional__Read__Outracks_Simulator_Bytecode_NamespaceName(::uStatic* __this, ::app::Uno::IO::BinaryReader* reader, ::uDelegate* readSome)
{
    return ::uPtr< ::app::Uno::IO::BinaryReader*>(reader)->ReadBoolean() ? Optional__Some__Outracks_Simulator_Bytecode_NamespaceName(NULL, ::uPtr< ::uDelegate*>(readSome)->Invoke< ::app::Outracks::Simulator::Bytecode::NamespaceName*, ::app::Uno::IO::BinaryReader*>(reader)) : Optional__None__Outracks_Simulator_Bytecode_NamespaceName(NULL);
}

::app::Outracks::Simulator::Bytecode::Optional__Outracks_Simulator_Bytecode_TypeName Optional__Read__Outracks_Simulator_Bytecode_TypeName(::uStatic* __this, ::app::Uno::IO::BinaryReader* reader, ::uDelegate* readSome)
{
    return ::uPtr< ::app::Uno::IO::BinaryReader*>(reader)->ReadBoolean() ? Optional__Some__Outracks_Simulator_Bytecode_TypeName(NULL, ::uPtr< ::uDelegate*>(readSome)->Invoke< ::app::Outracks::Simulator::Bytecode::TypeName*, ::app::Uno::IO::BinaryReader*>(reader)) : Optional__None__Outracks_Simulator_Bytecode_TypeName(NULL);
}

::app::Outracks::Simulator::Bytecode::Optional__string Optional__Read__string(::uStatic* __this, ::app::Uno::IO::BinaryReader* reader, ::uDelegate* readSome)
{
    return ::uPtr< ::app::Uno::IO::BinaryReader*>(reader)->ReadBoolean() ? Optional__Some__string(NULL, ::uPtr< ::uDelegate*>(readSome)->Invoke< ::uString*, ::app::Uno::IO::BinaryReader*>(reader)) : Optional__None__string(NULL);
}

::app::Outracks::Simulator::Bytecode::Optional__Outracks_Simulator_Bytecode_NamespaceName Optional__Some__Outracks_Simulator_Bytecode_NamespaceName(::uStatic* __this, ::app::Outracks::Simulator::Bytecode::NamespaceName* value)
{
    return ::app::Outracks::Simulator::Bytecode::Optional__Outracks_Simulator_Bytecode_NamespaceName__New_1(NULL, true, value);
}

::app::Outracks::Simulator::Bytecode::Optional__Outracks_Simulator_Bytecode_TypeName Optional__Some__Outracks_Simulator_Bytecode_TypeName(::uStatic* __this, ::app::Outracks::Simulator::Bytecode::TypeName* value)
{
    return ::app::Outracks::Simulator::Bytecode::Optional__Outracks_Simulator_Bytecode_TypeName__New_1(NULL, true, value);
}

::app::Outracks::Simulator::Bytecode::Optional__Outracks_Simulator_DialogButton Optional__Some__Outracks_Simulator_DialogButton(::uStatic* __this, ::app::Outracks::Simulator::DialogButton* value)
{
    return ::app::Outracks::Simulator::Bytecode::Optional__Outracks_Simulator_DialogButton__New_1(NULL, true, value);
}

::app::Outracks::Simulator::Bytecode::Optional__Outracks_Simulator_Protocol_Reify Optional__Some__Outracks_Simulator_Protocol_Reify(::uStatic* __this, ::app::Outracks::Simulator::Protocol::Reify* value)
{
    return ::app::Outracks::Simulator::Bytecode::Optional__Outracks_Simulator_Protocol_Reify__New_1(NULL, true, value);
}

::app::Outracks::Simulator::Bytecode::Optional__string Optional__Some__string(::uStatic* __this, ::uString* value)
{
    return ::app::Outracks::Simulator::Bytecode::Optional__string__New_1(NULL, true, value);
}

void Optional__Write__Outracks_Simulator_Bytecode_NamespaceName(::uStatic* __this, ::app::Uno::IO::BinaryWriter* writer, ::app::Outracks::Simulator::Bytecode::Optional__Outracks_Simulator_Bytecode_NamespaceName optional, ::uDelegate* writeSome)
{
    if (optional.HasValue())
    {
        ::uPtr< ::app::Uno::IO::BinaryWriter*>(writer)->Write_1(true);
        ::uPtr< ::uDelegate*>(writeSome)->InvokeVoid< ::app::Outracks::Simulator::Bytecode::NamespaceName*>(optional.Value());
    }
    else
    {
        ::uPtr< ::app::Uno::IO::BinaryWriter*>(writer)->Write_1(false);
    }
}

void Optional__Write__Outracks_Simulator_Bytecode_NamespaceName_1(::uStatic* __this, ::app::Uno::IO::BinaryWriter* writer, ::app::Outracks::Simulator::Bytecode::Optional__Outracks_Simulator_Bytecode_NamespaceName optional, ::uDelegate* writeSome)
{
    if (optional.HasValue())
    {
        ::uPtr< ::app::Uno::IO::BinaryWriter*>(writer)->Write_1(true);
        ::uPtr< ::uDelegate*>(writeSome)->InvokeVoid< ::app::Outracks::Simulator::Bytecode::NamespaceName*, ::app::Uno::IO::BinaryWriter*>(optional.Value(), writer);
    }
    else
    {
        ::uPtr< ::app::Uno::IO::BinaryWriter*>(writer)->Write_1(false);
    }
}

void Optional__Write__Outracks_Simulator_Bytecode_NamespaceName_2(::uStatic* __this, ::app::Uno::IO::BinaryWriter* writer, ::app::Outracks::Simulator::Bytecode::Optional__Outracks_Simulator_Bytecode_NamespaceName optional, ::uDelegate* writeSome)
{
    if (optional.HasValue())
    {
        ::uPtr< ::app::Uno::IO::BinaryWriter*>(writer)->Write_1(true);
        ::uPtr< ::uDelegate*>(writeSome)->InvokeVoid< ::app::Uno::IO::BinaryWriter*, ::app::Outracks::Simulator::Bytecode::NamespaceName*>(writer, optional.Value());
    }
    else
    {
        ::uPtr< ::app::Uno::IO::BinaryWriter*>(writer)->Write_1(false);
    }
}

void Optional__Write__Outracks_Simulator_Bytecode_TypeName(::uStatic* __this, ::app::Uno::IO::BinaryWriter* writer, ::app::Outracks::Simulator::Bytecode::Optional__Outracks_Simulator_Bytecode_TypeName optional, ::uDelegate* writeSome)
{
    if (optional.HasValue())
    {
        ::uPtr< ::app::Uno::IO::BinaryWriter*>(writer)->Write_1(true);
        ::uPtr< ::uDelegate*>(writeSome)->InvokeVoid< ::app::Outracks::Simulator::Bytecode::TypeName*>(optional.Value());
    }
    else
    {
        ::uPtr< ::app::Uno::IO::BinaryWriter*>(writer)->Write_1(false);
    }
}

void Optional__Write__Outracks_Simulator_Bytecode_TypeName_1(::uStatic* __this, ::app::Uno::IO::BinaryWriter* writer, ::app::Outracks::Simulator::Bytecode::Optional__Outracks_Simulator_Bytecode_TypeName optional, ::uDelegate* writeSome)
{
    if (optional.HasValue())
    {
        ::uPtr< ::app::Uno::IO::BinaryWriter*>(writer)->Write_1(true);
        ::uPtr< ::uDelegate*>(writeSome)->InvokeVoid< ::app::Outracks::Simulator::Bytecode::TypeName*, ::app::Uno::IO::BinaryWriter*>(optional.Value(), writer);
    }
    else
    {
        ::uPtr< ::app::Uno::IO::BinaryWriter*>(writer)->Write_1(false);
    }
}

void Optional__Write__Outracks_Simulator_Bytecode_TypeName_2(::uStatic* __this, ::app::Uno::IO::BinaryWriter* writer, ::app::Outracks::Simulator::Bytecode::Optional__Outracks_Simulator_Bytecode_TypeName optional, ::uDelegate* writeSome)
{
    if (optional.HasValue())
    {
        ::uPtr< ::app::Uno::IO::BinaryWriter*>(writer)->Write_1(true);
        ::uPtr< ::uDelegate*>(writeSome)->InvokeVoid< ::app::Uno::IO::BinaryWriter*, ::app::Outracks::Simulator::Bytecode::TypeName*>(writer, optional.Value());
    }
    else
    {
        ::uPtr< ::app::Uno::IO::BinaryWriter*>(writer)->Write_1(false);
    }
}

void Optional__Write__string(::uStatic* __this, ::app::Uno::IO::BinaryWriter* writer, ::app::Outracks::Simulator::Bytecode::Optional__string optional, ::uDelegate* writeSome)
{
    if (optional.HasValue())
    {
        ::uPtr< ::app::Uno::IO::BinaryWriter*>(writer)->Write_1(true);
        ::uPtr< ::uDelegate*>(writeSome)->InvokeVoid< ::uString*>(optional.Value());
    }
    else
    {
        ::uPtr< ::app::Uno::IO::BinaryWriter*>(writer)->Write_1(false);
    }
}

void Optional__Write__string_1(::uStatic* __this, ::app::Uno::IO::BinaryWriter* writer, ::app::Outracks::Simulator::Bytecode::Optional__string optional, ::uDelegate* writeSome)
{
    if (optional.HasValue())
    {
        ::uPtr< ::app::Uno::IO::BinaryWriter*>(writer)->Write_1(true);
        ::uPtr< ::uDelegate*>(writeSome)->InvokeVoid< ::uString*, ::app::Uno::IO::BinaryWriter*>(optional.Value(), writer);
    }
    else
    {
        ::uPtr< ::app::Uno::IO::BinaryWriter*>(writer)->Write_1(false);
    }
}

void Optional__Write__string_2(::uStatic* __this, ::app::Uno::IO::BinaryWriter* writer, ::app::Outracks::Simulator::Bytecode::Optional__string optional, ::uDelegate* writeSome)
{
    if (optional.HasValue())
    {
        ::uPtr< ::app::Uno::IO::BinaryWriter*>(writer)->Write_1(true);
        ::uPtr< ::uDelegate*>(writeSome)->InvokeVoid< ::app::Uno::IO::BinaryWriter*, ::uString*>(writer, optional.Value());
    }
    else
    {
        ::uPtr< ::app::Uno::IO::BinaryWriter*>(writer)->Write_1(false);
    }
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\Outracks.Simulator.Protocol.Uno\0.1.0\Common\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

OptionalExtensions__uType* OptionalExtensions__typeof()
{
    static ::uStaticStrong<OptionalExtensions__uType*> type;
    if (type != NULL) return type;

    type = (OptionalExtensions__uType*)::uAllocClassType(sizeof(OptionalExtensions__uType), "Outracks.Simulator.Bytecode.OptionalExtensions");

    ::uRegisterType(type);
    return type;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\Outracks.Simulator.Protocol.Uno\0.1.0\Bytecode\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

::uStaticStrong< ::uDelegate*> Parameter__Read;
::uStaticStrong< ::uDelegate*> Parameter__Write;

Parameter__uType* Parameter__typeof()
{
    static ::uStaticStrong<Parameter__uType*> type;
    if (type != NULL) return type;

    type = (Parameter__uType*)::uAllocClassType(sizeof(Parameter__uType), "Outracks.Simulator.Bytecode.Parameter", false, 0, 2, 0);

    type->__fp_ToString = (::uString*(*)(::uObject*))Parameter__ToString;

    type->SetStrongRefs(
        "Name", offsetof(Parameter, Name),
        "Type", offsetof(Parameter, Type));

    type->SetFields(4,
        ::uNewField("Name", NULL, offsetof(Parameter, Name), ::app::Outracks::Simulator::Bytecode::Variable__typeof()),
        ::uNewField("Read", &Parameter__Read, 0, ::app::Uno::Func__Uno_IO_BinaryReader__Outracks_Simulator_Bytecode_Parameter__typeof()),
        ::uNewField("Type", NULL, offsetof(Parameter, Type), ::app::Outracks::Simulator::Bytecode::TypeName__typeof()),
        ::uNewField("Write", &Parameter__Write, 0, ::app::Uno::Action__Outracks_Simulator_Bytecode_Parameter__Uno_IO_BinaryWriter__typeof()));

    type->SetFunctions(3,
        ::uNewFunction("_Read", Parameter___Read, 0, true, Parameter__typeof(), ::app::Uno::IO::BinaryReader__typeof()),
        ::uNewFunctionVoid("_Write", Parameter___Write, 0, true, Parameter__typeof(), ::app::Uno::IO::BinaryWriter__typeof()),
        ::uNewFunction(".ctor", Parameter__New_1, 0, true, Parameter__typeof(), ::app::Outracks::Simulator::Bytecode::TypeName__typeof(), ::app::Outracks::Simulator::Bytecode::Variable__typeof()));

    ::uRegisterType(type);
    return type;
}

void Parameter___ObjInit(Parameter* __this, ::app::Outracks::Simulator::Bytecode::TypeName* type, ::app::Outracks::Simulator::Bytecode::Variable* name)
{
    __this->Type = type;
    __this->Name = name;
}

Parameter* Parameter___Read(::uStatic* __this, ::app::Uno::IO::BinaryReader* reader)
{
    ::app::Outracks::Simulator::Bytecode::TypeName* type = ::uPtr< ::uDelegate*>(::app::Outracks::Simulator::Bytecode::TypeName__Read)->Invoke< ::app::Outracks::Simulator::Bytecode::TypeName*, ::app::Uno::IO::BinaryReader*>(reader);
    ::app::Outracks::Simulator::Bytecode::Variable* name = ::uPtr< ::uDelegate*>(::app::Outracks::Simulator::Bytecode::Variable__Read)->Invoke< ::app::Outracks::Simulator::Bytecode::Variable*, ::app::Uno::IO::BinaryReader*>(reader);
    return Parameter__New_1(NULL, type, name);
}

void Parameter___TypeInit(::uStatic* __this)
{
    Parameter__Read = ::uNewDelegateNonVirt(::app::Uno::Func__Uno_IO_BinaryReader__Outracks_Simulator_Bytecode_Parameter__typeof(), (const void*)Parameter___Read);
    Parameter__Write = ::uNewDelegateNonVirt(::app::Uno::Action__Outracks_Simulator_Bytecode_Parameter__Uno_IO_BinaryWriter__typeof(), (const void*)Parameter___Write);
}

void Parameter___Write(::uStatic* __this, Parameter* p, ::app::Uno::IO::BinaryWriter* writer)
{
    ::uPtr< ::uDelegate*>(::app::Outracks::Simulator::Bytecode::TypeName__Write)->InvokeVoid< ::app::Outracks::Simulator::Bytecode::TypeName*, ::app::Uno::IO::BinaryWriter*>(::uPtr< Parameter*>(p)->Type, writer);
    ::uPtr< ::uDelegate*>(::app::Outracks::Simulator::Bytecode::Variable__Write)->InvokeVoid< ::app::Outracks::Simulator::Bytecode::Variable*, ::app::Uno::IO::BinaryWriter*>(p->Name, writer);
}

Parameter* Parameter__New_1(::uStatic* __this, ::app::Outracks::Simulator::Bytecode::TypeName* type, ::app::Outracks::Simulator::Bytecode::Variable* name)
{
    Parameter* inst = (Parameter*)::uAllocObject(sizeof(Parameter), Parameter__typeof());
    inst->_ObjInit(type, name);
    return inst;
}

::uString* Parameter__ToString(Parameter* __this)
{
    return ::app::Uno::String__op_Addition_1(NULL, ::app::Uno::String__op_Addition(NULL, (::uObject*)__this->Type, ::uGetConstString(" ")), (::uObject*)__this->Name);
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\Outracks.Simulator.Protocol.Uno\0.1.0\Bytecode\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

ProjectBytecode__uType* ProjectBytecode__typeof()
{
    static ::uStaticStrong<ProjectBytecode__uType*> type;
    if (type != NULL) return type;

    type = (ProjectBytecode__uType*)::uAllocClassType(sizeof(ProjectBytecode__uType), "Outracks.Simulator.Bytecode.ProjectBytecode", false, 0, 2, 0);

    type->__fp_ToString = (::uString*(*)(::uObject*))ProjectBytecode__ToString;

    type->SetStrongRefs(
        "Dependencies", offsetof(ProjectBytecode, Dependencies),
        "Reify", offsetof(ProjectBytecode, Reify));

    type->SetFields(2,
        ::uNewField("Dependencies", NULL, offsetof(ProjectBytecode, Dependencies), ::app::Outracks::Simulator::ImmutableList__string__typeof()),
        ::uNewField("Reify", NULL, offsetof(ProjectBytecode, Reify), ::app::Outracks::Simulator::Bytecode::Lambda__typeof()));

    type->SetFunctions(1,
        ::uNewFunction(".ctor", ProjectBytecode__New_1, 0, true, ProjectBytecode__typeof(), ::app::Outracks::Simulator::Bytecode::Lambda__typeof(), ::app::Outracks::Simulator::ImmutableList__string__typeof()));

    ::uRegisterType(type);
    return type;
}

void ProjectBytecode___ObjInit(ProjectBytecode* __this, ::app::Outracks::Simulator::Bytecode::Lambda* reify, ::app::Outracks::Simulator::ImmutableList__string* dependencies)
{
    __this->Reify = reify;
    __this->Dependencies = dependencies;
}

ProjectBytecode* ProjectBytecode__New_1(::uStatic* __this, ::app::Outracks::Simulator::Bytecode::Lambda* reify, ::app::Outracks::Simulator::ImmutableList__string* dependencies)
{
    ProjectBytecode* inst = (ProjectBytecode*)::uAllocObject(sizeof(ProjectBytecode), ProjectBytecode__typeof());
    inst->_ObjInit(reify, dependencies);
    return inst;
}

::uString* ProjectBytecode__ToString(ProjectBytecode* __this)
{
    return ::uPtr< ::app::Outracks::Simulator::Bytecode::Lambda*>(__this->Reify)->ToString();
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\Outracks.Simulator.Protocol.Uno\0.1.0\Bytecode\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

ReadProperty__uType* ReadProperty__typeof()
{
    static ::uStaticStrong<ReadProperty__uType*> type;
    if (type != NULL) return type;

    type = (ReadProperty__uType*)::uAllocClassType(sizeof(ReadProperty__uType), "Outracks.Simulator.Bytecode.ReadProperty", false, 0, 2, 0);

    type->SetBaseType(::app::Outracks::Simulator::Bytecode::Expression__typeof());
    type->__fp_ToString = (::uString*(*)(::uObject*))ReadProperty__ToString;

    type->SetStrongRefs(
        "Object", offsetof(ReadProperty, Object),
        "Property", offsetof(ReadProperty, Property));

    type->SetFields(2,
        ::uNewField("Object", NULL, offsetof(ReadProperty, Object), ::app::Outracks::Simulator::Bytecode::Expression__typeof()),
        ::uNewField("Property", NULL, offsetof(ReadProperty, Property), ::app::Outracks::Simulator::Bytecode::TypeMemberName__typeof()));

    type->SetFunctions(4,
        ::uNewFunction(".ctor", ReadProperty__New_1, 0, true, ReadProperty__typeof(), ::app::Outracks::Simulator::Bytecode::Expression__typeof(), ::app::Outracks::Simulator::Bytecode::TypeMemberName__typeof()),
        ::uNewFunction("Read", ReadProperty__Read_2, 0, true, ReadProperty__typeof(), ::app::Uno::IO::BinaryReader__typeof()),
        ::uNewFunctionVoid("Write", ReadProperty__Write_2, 0, false, ::app::Uno::IO::BinaryWriter__typeof()),
        ::uNewFunctionVoid("Write", ReadProperty__Write_3, 0, true, ReadProperty__typeof(), ::app::Uno::IO::BinaryWriter__typeof()));

    ::uRegisterType(type);
    return type;
}

void ReadProperty___ObjInit_2(ReadProperty* __this, ::app::Outracks::Simulator::Bytecode::Expression* o, ::app::Outracks::Simulator::Bytecode::TypeMemberName* property)
{
    ::app::Outracks::Simulator::Bytecode::Expression___ObjInit_1(__this);
    __this->Object = o;
    __this->Property = property;
}

ReadProperty* ReadProperty__New_1(::uStatic* __this, ::app::Outracks::Simulator::Bytecode::Expression* o, ::app::Outracks::Simulator::Bytecode::TypeMemberName* property)
{
    ReadProperty* inst = (ReadProperty*)::uAllocObject(sizeof(ReadProperty), ReadProperty__typeof());
    inst->_ObjInit_2(o, property);
    return inst;
}

ReadProperty* ReadProperty__Read_2(::uStatic* __this, ::app::Uno::IO::BinaryReader* reader)
{
    ::app::Outracks::Simulator::Bytecode::Expression* _Object = ::uPtr< ::uDelegate*>(::app::Outracks::Simulator::Bytecode::Expression__Read_1)->Invoke< ::app::Outracks::Simulator::Bytecode::Expression*, ::app::Uno::IO::BinaryReader*>(reader);
    ::app::Outracks::Simulator::Bytecode::TypeMemberName* _Property = ::app::Outracks::Simulator::Bytecode::TypeMemberName__Read(NULL, reader);
    return ReadProperty__New_1(NULL, _Object, _Property);
}

::uString* ReadProperty__ToString(ReadProperty* __this)
{
    return ::app::Uno::String__op_Addition_2(NULL, ::app::Uno::String__op_Addition(NULL, (::uObject*)__this->Object, ::uGetConstString(".")), ::uPtr< ::app::Outracks::Simulator::Bytecode::TypeMemberName*>(__this->Property)->Name);
}

void ReadProperty__Write_2(ReadProperty* __this, ::app::Uno::IO::BinaryWriter* writer)
{
    ::uPtr< ::uDelegate*>(::app::Outracks::Simulator::Bytecode::Expression__Write_1)->InvokeVoid< ::app::Outracks::Simulator::Bytecode::Expression*, ::app::Uno::IO::BinaryWriter*>(__this->Object, writer);
    ::app::Outracks::Simulator::Bytecode::TypeMemberName__Write_1(NULL, __this->Property, writer);
}

void ReadProperty__Write_3(::uStatic* __this, ReadProperty* o, ::app::Uno::IO::BinaryWriter* writer)
{
    ::uPtr< ReadProperty*>(o)->Write_2(writer);
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\Outracks.Simulator.Protocol.Uno\0.1.0\Bytecode\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

ReadStaticField__uType* ReadStaticField__typeof()
{
    static ::uStaticStrong<ReadStaticField__uType*> type;
    if (type != NULL) return type;

    type = (ReadStaticField__uType*)::uAllocClassType(sizeof(ReadStaticField__uType), "Outracks.Simulator.Bytecode.ReadStaticField", false, 0, 1, 0);

    type->SetBaseType(::app::Outracks::Simulator::Bytecode::Expression__typeof());
    type->__fp_ToString = (::uString*(*)(::uObject*))ReadStaticField__ToString;

    type->SetStrongRefs(
        "Field", offsetof(ReadStaticField, Field));

    type->SetFields(1,
        ::uNewField("Field", NULL, offsetof(ReadStaticField, Field), ::app::Outracks::Simulator::Bytecode::StaticMemberName__typeof()));

    type->SetFunctions(4,
        ::uNewFunction(".ctor", ReadStaticField__New_1, 0, true, ReadStaticField__typeof(), ::app::Outracks::Simulator::Bytecode::StaticMemberName__typeof()),
        ::uNewFunction("Read", ReadStaticField__Read_2, 0, true, ReadStaticField__typeof(), ::app::Uno::IO::BinaryReader__typeof()),
        ::uNewFunctionVoid("Write", ReadStaticField__Write_2, 0, false, ::app::Uno::IO::BinaryWriter__typeof()),
        ::uNewFunctionVoid("Write", ReadStaticField__Write_3, 0, true, ReadStaticField__typeof(), ::app::Uno::IO::BinaryWriter__typeof()));

    ::uRegisterType(type);
    return type;
}

void ReadStaticField___ObjInit_2(ReadStaticField* __this, ::app::Outracks::Simulator::Bytecode::StaticMemberName* field)
{
    ::app::Outracks::Simulator::Bytecode::Expression___ObjInit_1(__this);
    __this->Field = field;
}

ReadStaticField* ReadStaticField__New_1(::uStatic* __this, ::app::Outracks::Simulator::Bytecode::StaticMemberName* field)
{
    ReadStaticField* inst = (ReadStaticField*)::uAllocObject(sizeof(ReadStaticField), ReadStaticField__typeof());
    inst->_ObjInit_2(field);
    return inst;
}

ReadStaticField* ReadStaticField__Read_2(::uStatic* __this, ::app::Uno::IO::BinaryReader* reader)
{
    ::app::Outracks::Simulator::Bytecode::StaticMemberName* _Field = ::app::Outracks::Simulator::Bytecode::StaticMemberName__Read(NULL, reader);
    return ReadStaticField__New_1(NULL, _Field);
}

::uString* ReadStaticField__ToString(ReadStaticField* __this)
{
    return ::app::Uno::String__op_Addition_2(NULL, ::app::Uno::String__op_Addition_2(NULL, ::uPtr< ::app::Outracks::Simulator::Bytecode::TypeName*>(::uPtr< ::app::Outracks::Simulator::Bytecode::StaticMemberName*>(__this->Field)->TypeName)->FullName(), ::uGetConstString(".")), ::uPtr< ::app::Outracks::Simulator::Bytecode::TypeMemberName*>(::uPtr< ::app::Outracks::Simulator::Bytecode::StaticMemberName*>(__this->Field)->MemberName)->Name);
}

void ReadStaticField__Write_2(ReadStaticField* __this, ::app::Uno::IO::BinaryWriter* writer)
{
    ::app::Outracks::Simulator::Bytecode::StaticMemberName__Write(NULL, __this->Field, writer);
}

void ReadStaticField__Write_3(::uStatic* __this, ReadStaticField* o, ::app::Uno::IO::BinaryWriter* writer)
{
    ::uPtr< ReadStaticField*>(o)->Write_2(writer);
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\Outracks.Simulator.Protocol.Uno\0.1.0\Bytecode\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

ReadVariable__uType* ReadVariable__typeof()
{
    static ::uStaticStrong<ReadVariable__uType*> type;
    if (type != NULL) return type;

    type = (ReadVariable__uType*)::uAllocClassType(sizeof(ReadVariable__uType), "Outracks.Simulator.Bytecode.ReadVariable", false, 0, 1, 0);

    type->SetBaseType(::app::Outracks::Simulator::Bytecode::Expression__typeof());
    type->__fp_ToString = (::uString*(*)(::uObject*))ReadVariable__ToString;

    type->SetStrongRefs(
        "Variable", offsetof(ReadVariable, Variable));

    type->SetFields(1,
        ::uNewField("Variable", NULL, offsetof(ReadVariable, Variable), ::app::Outracks::Simulator::Bytecode::Variable__typeof()));

    type->SetFunctions(4,
        ::uNewFunction(".ctor", ReadVariable__New_1, 0, true, ReadVariable__typeof(), ::app::Outracks::Simulator::Bytecode::Variable__typeof()),
        ::uNewFunction("Read", ReadVariable__Read_2, 0, true, ReadVariable__typeof(), ::app::Uno::IO::BinaryReader__typeof()),
        ::uNewFunctionVoid("Write", ReadVariable__Write_2, 0, false, ::app::Uno::IO::BinaryWriter__typeof()),
        ::uNewFunctionVoid("Write", ReadVariable__Write_3, 0, true, ReadVariable__typeof(), ::app::Uno::IO::BinaryWriter__typeof()));

    ::uRegisterType(type);
    return type;
}

void ReadVariable___ObjInit_2(ReadVariable* __this, ::app::Outracks::Simulator::Bytecode::Variable* variable)
{
    ::app::Outracks::Simulator::Bytecode::Expression___ObjInit_1(__this);
    __this->Variable = variable;
}

ReadVariable* ReadVariable__New_1(::uStatic* __this, ::app::Outracks::Simulator::Bytecode::Variable* variable)
{
    ReadVariable* inst = (ReadVariable*)::uAllocObject(sizeof(ReadVariable), ReadVariable__typeof());
    inst->_ObjInit_2(variable);
    return inst;
}

ReadVariable* ReadVariable__Read_2(::uStatic* __this, ::app::Uno::IO::BinaryReader* reader)
{
    ::app::Outracks::Simulator::Bytecode::Variable* variable = ::uPtr< ::uDelegate*>(::app::Outracks::Simulator::Bytecode::Variable__Read)->Invoke< ::app::Outracks::Simulator::Bytecode::Variable*, ::app::Uno::IO::BinaryReader*>(reader);
    return ReadVariable__New_1(NULL, variable);
}

::uString* ReadVariable__ToString(ReadVariable* __this)
{
    return ::uPtr< ::app::Outracks::Simulator::Bytecode::Variable*>(__this->Variable)->Name;
}

void ReadVariable__Write_2(ReadVariable* __this, ::app::Uno::IO::BinaryWriter* writer)
{
    ::uPtr< ::uDelegate*>(::app::Outracks::Simulator::Bytecode::Variable__Write)->InvokeVoid< ::app::Outracks::Simulator::Bytecode::Variable*, ::app::Uno::IO::BinaryWriter*>(__this->Variable, writer);
}

void ReadVariable__Write_3(::uStatic* __this, ReadVariable* o, ::app::Uno::IO::BinaryWriter* writer)
{
    ::uPtr< ReadVariable*>(o)->Write_2(writer);
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\Outracks.Simulator.Protocol.Uno\0.1.0\Bytecode\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

RemoveEventHandler__uType* RemoveEventHandler__typeof()
{
    static ::uStaticStrong<RemoveEventHandler__uType*> type;
    if (type != NULL) return type;

    type = (RemoveEventHandler__uType*)::uAllocClassType(sizeof(RemoveEventHandler__uType), "Outracks.Simulator.Bytecode.RemoveEventHandler", false, 0, 3, 0);

    type->SetBaseType(::app::Outracks::Simulator::Bytecode::Expression__typeof());
    type->__fp_ToString = (::uString*(*)(::uObject*))RemoveEventHandler__ToString;

    type->SetStrongRefs(
        "Event", offsetof(RemoveEventHandler, Event),
        "Handler", offsetof(RemoveEventHandler, Handler),
        "Object", offsetof(RemoveEventHandler, Object));

    type->SetFields(3,
        ::uNewField("Event", NULL, offsetof(RemoveEventHandler, Event), ::app::Outracks::Simulator::Bytecode::TypeMemberName__typeof()),
        ::uNewField("Handler", NULL, offsetof(RemoveEventHandler, Handler), ::app::Outracks::Simulator::Bytecode::Expression__typeof()),
        ::uNewField("Object", NULL, offsetof(RemoveEventHandler, Object), ::app::Outracks::Simulator::Bytecode::Expression__typeof()));

    type->SetFunctions(4,
        ::uNewFunction(".ctor", RemoveEventHandler__New_1, 0, true, RemoveEventHandler__typeof(), ::app::Outracks::Simulator::Bytecode::Expression__typeof(), ::app::Outracks::Simulator::Bytecode::TypeMemberName__typeof(), ::app::Outracks::Simulator::Bytecode::Expression__typeof()),
        ::uNewFunction("Read", RemoveEventHandler__Read_2, 0, true, RemoveEventHandler__typeof(), ::app::Uno::IO::BinaryReader__typeof()),
        ::uNewFunctionVoid("Write", RemoveEventHandler__Write_2, 0, false, ::app::Uno::IO::BinaryWriter__typeof()),
        ::uNewFunctionVoid("Write", RemoveEventHandler__Write_3, 0, true, RemoveEventHandler__typeof(), ::app::Uno::IO::BinaryWriter__typeof()));

    ::uRegisterType(type);
    return type;
}

void RemoveEventHandler___ObjInit_2(RemoveEventHandler* __this, ::app::Outracks::Simulator::Bytecode::Expression* o, ::app::Outracks::Simulator::Bytecode::TypeMemberName* ev, ::app::Outracks::Simulator::Bytecode::Expression* handler)
{
    ::app::Outracks::Simulator::Bytecode::Expression___ObjInit_1(__this);
    __this->Object = o;
    __this->Event = ev;
    __this->Handler = handler;
}

RemoveEventHandler* RemoveEventHandler__New_1(::uStatic* __this, ::app::Outracks::Simulator::Bytecode::Expression* o, ::app::Outracks::Simulator::Bytecode::TypeMemberName* ev, ::app::Outracks::Simulator::Bytecode::Expression* handler)
{
    RemoveEventHandler* inst = (RemoveEventHandler*)::uAllocObject(sizeof(RemoveEventHandler), RemoveEventHandler__typeof());
    inst->_ObjInit_2(o, ev, handler);
    return inst;
}

RemoveEventHandler* RemoveEventHandler__Read_2(::uStatic* __this, ::app::Uno::IO::BinaryReader* reader)
{
    ::app::Outracks::Simulator::Bytecode::Expression* _Object = ::uPtr< ::uDelegate*>(::app::Outracks::Simulator::Bytecode::Expression__Read_1)->Invoke< ::app::Outracks::Simulator::Bytecode::Expression*, ::app::Uno::IO::BinaryReader*>(reader);
    ::app::Outracks::Simulator::Bytecode::TypeMemberName* _Event = ::app::Outracks::Simulator::Bytecode::TypeMemberName__Read(NULL, reader);
    ::app::Outracks::Simulator::Bytecode::Expression* _Handler = ::uPtr< ::uDelegate*>(::app::Outracks::Simulator::Bytecode::Expression__Read_1)->Invoke< ::app::Outracks::Simulator::Bytecode::Expression*, ::app::Uno::IO::BinaryReader*>(reader);
    return RemoveEventHandler__New_1(NULL, _Object, _Event, _Handler);
}

::uString* RemoveEventHandler__ToString(RemoveEventHandler* __this)
{
    return ::app::Uno::String__op_Addition_1(NULL, ::app::Uno::String__op_Addition_2(NULL, ::app::Uno::String__op_Addition_2(NULL, ::app::Uno::String__op_Addition(NULL, (::uObject*)__this->Object, ::uGetConstString(".")), ::uPtr< ::app::Outracks::Simulator::Bytecode::TypeMemberName*>(__this->Event)->Name), ::uGetConstString(" -= ")), (::uObject*)__this->Handler);
}

void RemoveEventHandler__Write_2(RemoveEventHandler* __this, ::app::Uno::IO::BinaryWriter* writer)
{
    ::uPtr< ::uDelegate*>(::app::Outracks::Simulator::Bytecode::Expression__Write_1)->InvokeVoid< ::app::Outracks::Simulator::Bytecode::Expression*, ::app::Uno::IO::BinaryWriter*>(__this->Object, writer);
    ::app::Outracks::Simulator::Bytecode::TypeMemberName__Write_1(NULL, __this->Event, writer);
    ::uPtr< ::uDelegate*>(::app::Outracks::Simulator::Bytecode::Expression__Write_1)->InvokeVoid< ::app::Outracks::Simulator::Bytecode::Expression*, ::app::Uno::IO::BinaryWriter*>(__this->Handler, writer);
}

void RemoveEventHandler__Write_3(::uStatic* __this, RemoveEventHandler* o, ::app::Uno::IO::BinaryWriter* writer)
{
    ::uPtr< RemoveEventHandler*>(o)->Write_2(writer);
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\Outracks.Simulator.Protocol.Uno\0.1.0\Bytecode\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

Return__uType* Return__typeof()
{
    static ::uStaticStrong<Return__uType*> type;
    if (type != NULL) return type;

    type = (Return__uType*)::uAllocClassType(sizeof(Return__uType), "Outracks.Simulator.Bytecode.Return", false, 0, 1, 0);

    type->SetBaseType(::app::Outracks::Simulator::Bytecode::Statement__typeof());
    type->__fp_ToString = (::uString*(*)(::uObject*))Return__ToString;

    type->SetStrongRefs(
        "Value", offsetof(Return, Value));

    type->SetFields(1,
        ::uNewField("Value", NULL, offsetof(Return, Value), ::app::Outracks::Simulator::Bytecode::Expression__typeof()));

    type->SetFunctions(4,
        ::uNewFunction(".ctor", Return__New_1, 0, true, Return__typeof(), ::app::Outracks::Simulator::Bytecode::Expression__typeof()),
        ::uNewFunction("Read", Return__Read_1, 0, true, Return__typeof(), ::app::Uno::IO::BinaryReader__typeof()),
        ::uNewFunctionVoid("Write", Return__Write_1, 0, false, ::app::Uno::IO::BinaryWriter__typeof()),
        ::uNewFunctionVoid("Write", Return__Write_2, 0, true, Return__typeof(), ::app::Uno::IO::BinaryWriter__typeof()));

    ::uRegisterType(type);
    return type;
}

void Return___ObjInit_1(Return* __this, ::app::Outracks::Simulator::Bytecode::Expression* value)
{
    ::app::Outracks::Simulator::Bytecode::Statement___ObjInit(__this);
    __this->Value = value;
}

Return* Return__New_1(::uStatic* __this, ::app::Outracks::Simulator::Bytecode::Expression* value)
{
    Return* inst = (Return*)::uAllocObject(sizeof(Return), Return__typeof());
    inst->_ObjInit_1(value);
    return inst;
}

Return* Return__Read_1(::uStatic* __this, ::app::Uno::IO::BinaryReader* reader)
{
    return Return__New_1(NULL, ::uPtr< ::uDelegate*>(::app::Outracks::Simulator::Bytecode::Expression__Read_1)->Invoke< ::app::Outracks::Simulator::Bytecode::Expression*, ::app::Uno::IO::BinaryReader*>(reader));
}

::uString* Return__ToString(Return* __this)
{
    return ::app::Uno::String__op_Addition_1(NULL, ::uGetConstString("return "), (::uObject*)__this->Value);
}

void Return__Write_1(Return* __this, ::app::Uno::IO::BinaryWriter* writer)
{
    ::uPtr< ::uDelegate*>(::app::Outracks::Simulator::Bytecode::Expression__Write_1)->InvokeVoid< ::app::Outracks::Simulator::Bytecode::Expression*, ::app::Uno::IO::BinaryWriter*>(__this->Value, writer);
}

void Return__Write_2(::uStatic* __this, Return* s, ::app::Uno::IO::BinaryWriter* writer)
{
    ::uPtr< Return*>(s)->Write_1(writer);
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\Outracks.Simulator.Protocol.Uno\0.1.0\Bytecode\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

Signature__uType* Signature__typeof()
{
    static ::uStaticStrong<Signature__uType*> type;
    if (type != NULL) return type;

    type = (Signature__uType*)::uAllocClassType(sizeof(Signature__uType), "Outracks.Simulator.Bytecode.Signature", false, 0, 2, 0);

    type->__fp_ToString = (::uString*(*)(::uObject*))Signature__ToString;

    type->SetStrongRefs(
        "Parameters", offsetof(Signature, Parameters),
        "ReturnType._value", offsetof(Signature, ReturnType._value));

    type->SetFields(2,
        ::uNewField("Parameters", NULL, offsetof(Signature, Parameters), ::app::Outracks::Simulator::ImmutableList__Outracks_Simulator_Bytecode_Parameter__typeof()),
        ::uNewField("ReturnType", NULL, offsetof(Signature, ReturnType), ::app::Outracks::Simulator::Bytecode::Optional__Outracks_Simulator_Bytecode_TypeName__typeof()));

    type->SetFunctions(5,
        ::uNewFunction("Action", Signature__Action, 0, true, Signature__typeof(), ::uGetArrayType(::app::Outracks::Simulator::Bytecode::Variable__typeof())),
        ::uNewFunction("Func", Signature__Func, 0, true, Signature__typeof(), ::app::Outracks::Simulator::Bytecode::TypeName__typeof(), ::uGetArrayType(::app::Outracks::Simulator::Bytecode::Variable__typeof())),
        ::uNewFunction(".ctor", Signature__New_1, 0, true, Signature__typeof(), ::app::Outracks::Simulator::ImmutableList__Outracks_Simulator_Bytecode_Parameter__typeof(), ::app::Outracks::Simulator::Bytecode::Optional__Outracks_Simulator_Bytecode_TypeName__typeof()),
        ::uNewFunction("Read", Signature__Read, 0, true, Signature__typeof(), ::app::Uno::IO::BinaryReader__typeof()),
        ::uNewFunctionVoid("Write", Signature__Write, 0, true, Signature__typeof(), ::app::Uno::IO::BinaryWriter__typeof()));

    ::uRegisterType(type);
    return type;
}

void Signature___ObjInit(Signature* __this, ::app::Outracks::Simulator::ImmutableList__Outracks_Simulator_Bytecode_Parameter* parameters, ::app::Outracks::Simulator::Bytecode::Optional__Outracks_Simulator_Bytecode_TypeName returnType)
{
    __this->Parameters = parameters;
    __this->ReturnType = returnType;
}

Signature* Signature__Action(::uStatic* __this, ::uArray* variables)
{
    ::uArray* parameters = ::uNewArray(::app::Outracks::Simulator::Bytecode::Parameter__typeof(), ::uPtr< ::uArray*>(variables)->Length());

    for (int i = 0; i < variables->Length(); i++)
    {
        parameters->ItemStrong< ::app::Outracks::Simulator::Bytecode::Parameter*>(i) = ::app::Outracks::Simulator::Bytecode::Parameter__New_1(NULL, ::app::Outracks::Simulator::Bytecode::TypeName__Parse(NULL, ::uGetConstString("object")), variables->Item< ::app::Outracks::Simulator::Bytecode::Variable*>(i));
    }

    return Signature__New_1(NULL, ::app::Outracks::Simulator::ImmutableList__Outracks_Simulator_Bytecode_Parameter__New_1(NULL, parameters), ::app::Outracks::Simulator::Bytecode::Optional__Outracks_Simulator_Bytecode_TypeName__op_Implicit(NULL, ::app::Outracks::Simulator::Bytecode::Optional__None(NULL)));
}

Signature* Signature__Func(::uStatic* __this, ::app::Outracks::Simulator::Bytecode::TypeName* returnType, ::uArray* variables)
{
    ::uArray* parameters = ::uNewArray(::app::Outracks::Simulator::Bytecode::Parameter__typeof(), ::uPtr< ::uArray*>(variables)->Length());

    for (int i = 0; i < variables->Length(); i++)
    {
        parameters->ItemStrong< ::app::Outracks::Simulator::Bytecode::Parameter*>(i) = ::app::Outracks::Simulator::Bytecode::Parameter__New_1(NULL, ::app::Outracks::Simulator::Bytecode::TypeName__Parse(NULL, ::uGetConstString("object")), variables->Item< ::app::Outracks::Simulator::Bytecode::Variable*>(i));
    }

    return Signature__New_1(NULL, ::app::Outracks::Simulator::ImmutableList__Outracks_Simulator_Bytecode_Parameter__New_1(NULL, parameters), ::app::Outracks::Simulator::Bytecode::Optional__Some__Outracks_Simulator_Bytecode_TypeName(NULL, returnType));
}

Signature* Signature__New_1(::uStatic* __this, ::app::Outracks::Simulator::ImmutableList__Outracks_Simulator_Bytecode_Parameter* parameters, ::app::Outracks::Simulator::Bytecode::Optional__Outracks_Simulator_Bytecode_TypeName returnType)
{
    Signature* inst = (Signature*)::uAllocObject(sizeof(Signature), Signature__typeof());
    inst->_ObjInit(parameters, returnType);
    return inst;
}

Signature* Signature__Read(::uStatic* __this, ::app::Uno::IO::BinaryReader* reader)
{
    ::app::Outracks::Simulator::ImmutableList__Outracks_Simulator_Bytecode_Parameter* parameters = ::app::Outracks::Simulator::List__Read__Outracks_Simulator_Bytecode_Parameter(NULL, reader, ::app::Outracks::Simulator::Bytecode::Parameter__Read);
    ::app::Outracks::Simulator::Bytecode::Optional__Outracks_Simulator_Bytecode_TypeName returnType = ::app::Outracks::Simulator::Bytecode::Optional__Read__Outracks_Simulator_Bytecode_TypeName(NULL, reader, ::app::Outracks::Simulator::Bytecode::TypeName__Read);
    return Signature__New_1(NULL, parameters, returnType);
}

::uString* Signature__ToString(Signature* __this)
{
    ::uArray* names = ::uNewArray(::app::Uno::String__typeof(), ::uPtr< ::app::Outracks::Simulator::ImmutableList__Outracks_Simulator_Bytecode_Parameter*>(__this->Parameters)->Count());

    for (int i = 0; i < ::uPtr< ::app::Outracks::Simulator::ImmutableList__Outracks_Simulator_Bytecode_Parameter*>(__this->Parameters)->Count(); i++)
    {
        names->ItemStrong< ::uString*>(i) = ::uPtr< ::app::Outracks::Simulator::Bytecode::Parameter*>(::uPtr< ::app::Outracks::Simulator::ImmutableList__Outracks_Simulator_Bytecode_Parameter*>(__this->Parameters)->Item(i))->ToString();
    }

    return ::app::Uno::String__op_Addition_2(NULL, ::app::Uno::String__op_Addition_2(NULL, ::uGetConstString("("), ::app::Outracks::Simulator::StringSplitting__Join(NULL, (::uObject*)::app::Uno::Runtime::Implementation::Internal::ArrayEnumerable__string__New_1(NULL, names), ::uGetConstString(", "))), ::uGetConstString(")"));
}

void Signature__Write(::uStatic* __this, Signature* s, ::app::Uno::IO::BinaryWriter* writer)
{
    ::app::Outracks::Simulator::List__Write__Outracks_Simulator_Bytecode_Parameter(NULL, writer, ::uPtr< Signature*>(s)->Parameters, ::app::Outracks::Simulator::Bytecode::Parameter__Write);
    ::app::Outracks::Simulator::Bytecode::Optional__Write__Outracks_Simulator_Bytecode_TypeName_1(NULL, writer, s->ReturnType, ::app::Outracks::Simulator::Bytecode::TypeName__Write);
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\Outracks.Simulator.Protocol.Uno\0.1.0\Bytecode\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

::uStaticStrong< ::uDelegate*> Statement__Read;
::uStaticStrong< ::uDelegate*> Statement__Write;

Statement__uType* Statement__typeof()
{
    static ::uStaticStrong<Statement__uType*> type;
    if (type != NULL) return type;

    type = (Statement__uType*)::uAllocClassType(sizeof(Statement__uType), "Outracks.Simulator.Bytecode.Statement", false, 0, 0, 0);

    type->SetFields(2,
        ::uNewField("Read", &Statement__Read, 0, ::app::Uno::Func__Uno_IO_BinaryReader__Outracks_Simulator_Bytecode_Statement__typeof()),
        ::uNewField("Write", &Statement__Write, 0, ::app::Uno::Action__Outracks_Simulator_Bytecode_Statement__Uno_IO_BinaryWriter__typeof()));

    type->SetFunctions(6,
        ::uNewFunction("_Read", Statement___Read, 0, true, Statement__typeof(), ::app::Uno::IO::BinaryReader__typeof()),
        ::uNewFunctionVoid("_Write", Statement___Write, 0, true, Statement__typeof(), ::app::Uno::IO::BinaryWriter__typeof()),
        ::uNewFunctionVoid("Match", Statement__Match, 0, false, ::app::Uno::Action__Outracks_Simulator_Bytecode_NoOperation__typeof(), ::app::Uno::Action__Outracks_Simulator_Bytecode_Expression__typeof(), ::app::Uno::Action__Outracks_Simulator_Bytecode_Return__typeof()),
        ::uNewFunction("Match", Statement__Match__char, 0, false, ::app::Uno::Char__typeof(), ::app::Uno::Func__Outracks_Simulator_Bytecode_NoOperation__char__typeof(), ::app::Uno::Func__Outracks_Simulator_Bytecode_Expression__char__typeof(), ::app::Uno::Func__Outracks_Simulator_Bytecode_Return__char__typeof()),
        ::uNewFunction("Match", Statement__Match__object, 0, false, ::uObject__typeof(), ::app::Uno::Func__Outracks_Simulator_Bytecode_NoOperation__object__typeof(), ::app::Uno::Func__Outracks_Simulator_Bytecode_Expression__object__typeof(), ::app::Uno::Func__Outracks_Simulator_Bytecode_Return__object__typeof()),
        ::uNewFunction("Nop", Statement__Nop, 0, true, Statement__typeof()));

    ::uRegisterType(type);
    return type;
}

void Statement___ObjInit(Statement* __this)
{
}

Statement* Statement___Read(::uStatic* __this, ::app::Uno::IO::BinaryReader* reader)
{
    ::uChar c = ::uPtr< ::app::Uno::IO::BinaryReader*>(reader)->ReadChar();

    switch (c)
    {
        case 'n':
        {
            return (Statement*)::app::Outracks::Simulator::Bytecode::NoOperation__Read_1(NULL, reader);
        }
        case 'e':
        {
            return (Statement*)::uPtr< ::uDelegate*>(::app::Outracks::Simulator::Bytecode::Expression__Read_1)->Invoke< ::app::Outracks::Simulator::Bytecode::Expression*, ::app::Uno::IO::BinaryReader*>(reader);
        }
        case 'r':
        {
            return (Statement*)::app::Outracks::Simulator::Bytecode::Return__Read_1(NULL, reader);
        }
    }

    U_THROW(::app::Outracks::Simulator::InvalidDataException__New_3(NULL));
}

void Statement___TypeInit(::uStatic* __this)
{
    Statement__Write = ::uNewDelegateNonVirt(::app::Uno::Action__Outracks_Simulator_Bytecode_Statement__Uno_IO_BinaryWriter__typeof(), (const void*)Statement___Write);
    Statement__Read = ::uNewDelegateNonVirt(::app::Uno::Func__Uno_IO_BinaryReader__Outracks_Simulator_Bytecode_Statement__typeof(), (const void*)Statement___Read);
}

void Statement___Write(::uStatic* __this, Statement* statement, ::app::Uno::IO::BinaryWriter* writer)
{
    ::uPtr< ::app::Uno::IO::BinaryWriter*>(writer)->Write_5(::uPtr< Statement*>(statement)->Match__char(::app::Outracks::Simulator::Closure__Return__Outracks_Simulator_Bytecode_NoOperation__char(NULL, 'n'), ::app::Outracks::Simulator::Closure__Return__Outracks_Simulator_Bytecode_Expression__char(NULL, 'e'), ::app::Outracks::Simulator::Closure__Return__Outracks_Simulator_Bytecode_Return__char(NULL, 'r')));
    statement->Match(::app::Outracks::Simulator::Closure__ApplySecond__Outracks_Simulator_Bytecode_NoOperation__Uno_IO_BinaryWriter(NULL, ::uNewDelegateNonVirt(::app::Uno::Action__Outracks_Simulator_Bytecode_NoOperation__Uno_IO_BinaryWriter__typeof(), (const void*)::app::Outracks::Simulator::Bytecode::NoOperation__Write_2), writer), ::app::Outracks::Simulator::Closure__ApplySecond__Outracks_Simulator_Bytecode_Expression__Uno_IO_BinaryWriter(NULL, ::app::Outracks::Simulator::Bytecode::Expression__Write_1, writer), ::app::Outracks::Simulator::Closure__ApplySecond__Outracks_Simulator_Bytecode_Return__Uno_IO_BinaryWriter(NULL, ::uNewDelegateNonVirt(::app::Uno::Action__Outracks_Simulator_Bytecode_Return__Uno_IO_BinaryWriter__typeof(), (const void*)::app::Outracks::Simulator::Bytecode::Return__Write_2), writer));
}

void Statement__Match(Statement* __this, ::uDelegate* a1, ::uDelegate* a3, ::uDelegate* a4)
{
    Statement* self = __this;
    ::app::Outracks::Simulator::Bytecode::NoOperation* t1 = ::uAs< ::app::Outracks::Simulator::Bytecode::NoOperation*>(self, ::app::Outracks::Simulator::Bytecode::NoOperation__typeof());

    if (t1 != NULL)
    {
        ::uPtr< ::uDelegate*>(a1)->InvokeVoid< ::app::Outracks::Simulator::Bytecode::NoOperation*>(t1);
        return;
    }

    ::app::Outracks::Simulator::Bytecode::Expression* t3 = ::uAs< ::app::Outracks::Simulator::Bytecode::Expression*>(self, ::app::Outracks::Simulator::Bytecode::Expression__typeof());

    if (t3 != NULL)
    {
        ::uPtr< ::uDelegate*>(a3)->InvokeVoid< ::app::Outracks::Simulator::Bytecode::Expression*>(t3);
        return;
    }

    ::app::Outracks::Simulator::Bytecode::Return* t4 = ::uAs< ::app::Outracks::Simulator::Bytecode::Return*>(self, ::app::Outracks::Simulator::Bytecode::Return__typeof());

    if (t4 != NULL)
    {
        ::uPtr< ::uDelegate*>(a4)->InvokeVoid< ::app::Outracks::Simulator::Bytecode::Return*>(t4);
        return;
    }

    U_THROW(::app::Outracks::Simulator::NonExhaustiveMatch__New_3(NULL));
}

::uChar Statement__Match__char(Statement* __this, ::uDelegate* a1, ::uDelegate* a3, ::uDelegate* a4)
{
    Statement* self = __this;
    ::app::Outracks::Simulator::Bytecode::NoOperation* t1 = ::uAs< ::app::Outracks::Simulator::Bytecode::NoOperation*>(self, ::app::Outracks::Simulator::Bytecode::NoOperation__typeof());

    if (t1 != NULL)
    {
        return ::uPtr< ::uDelegate*>(a1)->Invoke< ::uChar, ::app::Outracks::Simulator::Bytecode::NoOperation*>(t1);
    }

    ::app::Outracks::Simulator::Bytecode::Expression* t3 = ::uAs< ::app::Outracks::Simulator::Bytecode::Expression*>(self, ::app::Outracks::Simulator::Bytecode::Expression__typeof());

    if (t3 != NULL)
    {
        return ::uPtr< ::uDelegate*>(a3)->Invoke< ::uChar, ::app::Outracks::Simulator::Bytecode::Expression*>(t3);
    }

    ::app::Outracks::Simulator::Bytecode::Return* t4 = ::uAs< ::app::Outracks::Simulator::Bytecode::Return*>(self, ::app::Outracks::Simulator::Bytecode::Return__typeof());

    if (t4 != NULL)
    {
        return ::uPtr< ::uDelegate*>(a4)->Invoke< ::uChar, ::app::Outracks::Simulator::Bytecode::Return*>(t4);
    }

    U_THROW(::app::Outracks::Simulator::NonExhaustiveMatch__New_3(NULL));
}

::uObject* Statement__Match__object(Statement* __this, ::uDelegate* a1, ::uDelegate* a3, ::uDelegate* a4)
{
    Statement* self = __this;
    ::app::Outracks::Simulator::Bytecode::NoOperation* t1 = ::uAs< ::app::Outracks::Simulator::Bytecode::NoOperation*>(self, ::app::Outracks::Simulator::Bytecode::NoOperation__typeof());

    if (t1 != NULL)
    {
        return ::uPtr< ::uDelegate*>(a1)->Invoke< ::uObject*, ::app::Outracks::Simulator::Bytecode::NoOperation*>(t1);
    }

    ::app::Outracks::Simulator::Bytecode::Expression* t3 = ::uAs< ::app::Outracks::Simulator::Bytecode::Expression*>(self, ::app::Outracks::Simulator::Bytecode::Expression__typeof());

    if (t3 != NULL)
    {
        return ::uPtr< ::uDelegate*>(a3)->Invoke< ::uObject*, ::app::Outracks::Simulator::Bytecode::Expression*>(t3);
    }

    ::app::Outracks::Simulator::Bytecode::Return* t4 = ::uAs< ::app::Outracks::Simulator::Bytecode::Return*>(self, ::app::Outracks::Simulator::Bytecode::Return__typeof());

    if (t4 != NULL)
    {
        return ::uPtr< ::uDelegate*>(a4)->Invoke< ::uObject*, ::app::Outracks::Simulator::Bytecode::Return*>(t4);
    }

    U_THROW(::app::Outracks::Simulator::NonExhaustiveMatch__New_3(NULL));
}

Statement* Statement__Nop(::uStatic* __this)
{
    return (Statement*)::app::Outracks::Simulator::Bytecode::NoOperation__New_1(NULL, ::app::Outracks::Simulator::Bytecode::Optional__string__op_Implicit_1(NULL, ::uGetConstString("NOP")));
}

::uObject* Statement__op_Addition(::uStatic* __this, ::uObject* statements, Statement* statement)
{
    ::uArray* array_125;
    return ::app::Uno::Collections::EnumerableExtensions__Union__Outracks_Simulator_Bytecode_Statement(NULL, statements, (::uObject*)::app::Uno::Runtime::Implementation::Internal::ArrayEnumerable__Outracks_Simulator_Bytecode_Statement__New_1(NULL, (array_125 = ::uNewArray(Statement__typeof(), 1), ::uPtr< ::uArray*>(array_125)->ItemStrong< Statement*>(0) = statement, array_125)));
}

::uObject* Statement__op_Addition_1(::uStatic* __this, Statement* statement, ::uObject* statements)
{
    ::uArray* array_124;
    return ::app::Uno::Collections::EnumerableExtensions__Union__Outracks_Simulator_Bytecode_Statement(NULL, (::uObject*)::app::Uno::Runtime::Implementation::Internal::ArrayEnumerable__Outracks_Simulator_Bytecode_Statement__New_1(NULL, (array_124 = ::uNewArray(Statement__typeof(), 1), ::uPtr< ::uArray*>(array_124)->ItemStrong< Statement*>(0) = statement, array_124)), statements);
}

::uObject* Statement__op_Addition_2(::uStatic* __this, Statement* left, Statement* right)
{
    ::uArray* array_123;
    return (::uObject*)::app::Uno::Runtime::Implementation::Internal::ArrayEnumerable__Outracks_Simulator_Bytecode_Statement__New_1(NULL, (array_123 = ::uNewArray(Statement__typeof(), 2), ::uPtr< ::uArray*>(array_123)->ItemStrong< Statement*>(0) = left, ::uPtr< ::uArray*>(array_123)->ItemStrong< Statement*>(1) = right, array_123));
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\Outracks.Simulator.Protocol.Uno\0.1.0\Bytecode\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

StaticMemberName__uType* StaticMemberName__typeof()
{
    static ::uStaticStrong<StaticMemberName__uType*> type;
    if (type != NULL) return type;

    type = (StaticMemberName__uType*)::uAllocClassType(sizeof(StaticMemberName__uType), "Outracks.Simulator.Bytecode.StaticMemberName", false, 1, 2, 0);

    type->__fp_Equals = (bool(*)(::uObject*, ::uObject*))StaticMemberName__Equals;
    type->__fp_GetHashCode = (int(*)(::uObject*))StaticMemberName__GetHashCode;
    type->__fp_ToString = (::uString*(*)(::uObject*))StaticMemberName__ToString;

    type->SetInterfaces(
        ::app::Outracks::Simulator::IEquatable__Outracks_Simulator_Bytecode_StaticMemberName__typeof(), offsetof(StaticMemberName__uType, __interface_0));

    type->SetStrongRefs(
        "MemberName", offsetof(StaticMemberName, MemberName),
        "TypeName", offsetof(StaticMemberName, TypeName));

    type->SetFields(2,
        ::uNewField("MemberName", NULL, offsetof(StaticMemberName, MemberName), ::app::Outracks::Simulator::Bytecode::TypeMemberName__typeof()),
        ::uNewField("TypeName", NULL, offsetof(StaticMemberName, TypeName), ::app::Outracks::Simulator::Bytecode::TypeName__typeof()));

    type->SetFunctions(5,
        ::uNewFunction("Equals", StaticMemberName__Equals_2, 0, false, ::app::Uno::Bool__typeof(), StaticMemberName__typeof()),
        ::uNewFunction(".ctor", StaticMemberName__New_1, 0, true, StaticMemberName__typeof(), ::app::Outracks::Simulator::Bytecode::TypeName__typeof(), ::app::Outracks::Simulator::Bytecode::TypeMemberName__typeof()),
        ::uNewFunction("Parse", StaticMemberName__Parse, 0, true, StaticMemberName__typeof(), ::app::Uno::String__typeof()),
        ::uNewFunction("Read", StaticMemberName__Read, 0, true, StaticMemberName__typeof(), ::app::Uno::IO::BinaryReader__typeof()),
        ::uNewFunctionVoid("Write", StaticMemberName__Write, 0, true, StaticMemberName__typeof(), ::app::Uno::IO::BinaryWriter__typeof()));

    ::uRegisterType(type);
    return type;
}

void StaticMemberName___ObjInit(StaticMemberName* __this, ::app::Outracks::Simulator::Bytecode::TypeName* typeName, ::app::Outracks::Simulator::Bytecode::TypeMemberName* memberName)
{
    __this->TypeName = typeName;
    __this->MemberName = memberName;
}

bool StaticMemberName__Equals(StaticMemberName* __this, ::uObject* obj)
{
    if (::app::Uno::Object__ReferenceEquals(NULL, NULL, obj))
    {
        return false;
    }

    if (::app::Uno::Object__ReferenceEquals(NULL, (::uObject*)__this, obj))
    {
        return true;
    }

    return ::uIs(obj, StaticMemberName__typeof()) && __this->Equals_2(::uCast< StaticMemberName*>(obj, StaticMemberName__typeof()));
}

bool StaticMemberName__Equals_2(StaticMemberName* __this, StaticMemberName* other)
{
    if (::app::Uno::Object__ReferenceEquals(NULL, NULL, (::uObject*)other))
    {
        return false;
    }

    if (::app::Uno::Object__ReferenceEquals(NULL, (::uObject*)__this, (::uObject*)other))
    {
        return true;
    }

    return ::uPtr< ::app::Outracks::Simulator::Bytecode::TypeName*>(__this->TypeName)->Equals_2(::uPtr< StaticMemberName*>(other)->TypeName) && ::app::Uno::Object__Equals_1(NULL, (::uObject*)__this->MemberName, (::uObject*)::uPtr< StaticMemberName*>(other)->MemberName);
}

int StaticMemberName__GetHashCode(StaticMemberName* __this)
{
    {
        return (::uPtr< ::app::Outracks::Simulator::Bytecode::TypeName*>(__this->TypeName)->GetHashCode() * 397) ^ ((__this->MemberName != NULL) ? ::uPtr< ::app::Outracks::Simulator::Bytecode::TypeMemberName*>(__this->MemberName)->GetHashCode() : 0);
    }
}

StaticMemberName* StaticMemberName__New_1(::uStatic* __this, ::app::Outracks::Simulator::Bytecode::TypeName* typeName, ::app::Outracks::Simulator::Bytecode::TypeMemberName* memberName)
{
    StaticMemberName* inst = (StaticMemberName*)::uAllocObject(sizeof(StaticMemberName), StaticMemberName__typeof());
    inst->_ObjInit(typeName, memberName);
    return inst;
}

bool StaticMemberName__op_Equality(::uStatic* __this, StaticMemberName* left, StaticMemberName* right)
{
    return ::app::Uno::Object__Equals_1(NULL, (::uObject*)left, (::uObject*)right);
}

bool StaticMemberName__op_Inequality(::uStatic* __this, StaticMemberName* left, StaticMemberName* right)
{
    return !::app::Uno::Object__Equals_1(NULL, (::uObject*)left, (::uObject*)right);
}

StaticMemberName* StaticMemberName__Parse(::uStatic* __this, ::uString* value)
{
    return StaticMemberName__New_1(NULL, ::app::Outracks::Simulator::Bytecode::TypeName__Parse(NULL, ::app::Outracks::Simulator::StringSplitting__BeforeLast(NULL, value, ::uGetConstString("."))), ::app::Outracks::Simulator::Bytecode::TypeMemberName__New_1(NULL, ::app::Outracks::Simulator::StringSplitting__AfterLast(NULL, value, ::uGetConstString("."))));
}

StaticMemberName* StaticMemberName__Read(::uStatic* __this, ::app::Uno::IO::BinaryReader* reader)
{
    ::app::Outracks::Simulator::Bytecode::TypeName* typeName = ::uPtr< ::uDelegate*>(::app::Outracks::Simulator::Bytecode::TypeName__Read)->Invoke< ::app::Outracks::Simulator::Bytecode::TypeName*, ::app::Uno::IO::BinaryReader*>(reader);
    ::app::Outracks::Simulator::Bytecode::TypeMemberName* memberName = ::app::Outracks::Simulator::Bytecode::TypeMemberName__Read(NULL, reader);
    return StaticMemberName__New_1(NULL, typeName, memberName);
}

::uString* StaticMemberName__ToString(StaticMemberName* __this)
{
    return ::app::Uno::String__op_Addition_2(NULL, ::app::Uno::String__op_Addition_2(NULL, ::uPtr< ::app::Outracks::Simulator::Bytecode::TypeName*>(__this->TypeName)->FullName(), ::uGetConstString(".")), ::uPtr< ::app::Outracks::Simulator::Bytecode::TypeMemberName*>(__this->MemberName)->Name);
}

void StaticMemberName__Write(::uStatic* __this, StaticMemberName* m, ::app::Uno::IO::BinaryWriter* writer)
{
    ::uPtr< ::uDelegate*>(::app::Outracks::Simulator::Bytecode::TypeName__Write)->InvokeVoid< ::app::Outracks::Simulator::Bytecode::TypeName*, ::app::Uno::IO::BinaryWriter*>(::uPtr< StaticMemberName*>(m)->TypeName, writer);
    ::app::Outracks::Simulator::Bytecode::TypeMemberName__Write_1(NULL, m->MemberName, writer);
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\Outracks.Simulator.Protocol.Uno\0.1.0\Bytecode\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

StringLiteral__uType* StringLiteral__typeof()
{
    static ::uStaticStrong<StringLiteral__uType*> type;
    if (type != NULL) return type;

    type = (StringLiteral__uType*)::uAllocClassType(sizeof(StringLiteral__uType), "Outracks.Simulator.Bytecode.StringLiteral", false, 0, 1, 0);

    type->SetBaseType(::app::Outracks::Simulator::Bytecode::Literal__typeof());
    type->__fp_ToString = (::uString*(*)(::uObject*))StringLiteral__ToString;

    type->SetStrongRefs(
        "StringValue", offsetof(StringLiteral, StringValue));

    type->SetFields(1,
        ::uNewField("StringValue", NULL, offsetof(StringLiteral, StringValue), ::app::Uno::String__typeof()));

    type->SetFunctions(3,
        ::uNewFunction(".ctor", StringLiteral__New_1, 0, true, StringLiteral__typeof(), ::app::Uno::String__typeof()),
        ::uNewFunction("Read", StringLiteral__Read_3, 0, true, StringLiteral__typeof(), ::app::Uno::IO::BinaryReader__typeof()),
        ::uNewFunctionVoid("Write", StringLiteral__Write_3, 0, true, StringLiteral__typeof(), ::app::Uno::IO::BinaryWriter__typeof()));

    ::uRegisterType(type);
    return type;
}

void StringLiteral___ObjInit_3(StringLiteral* __this, ::uString* stringValue)
{
    ::app::Outracks::Simulator::Bytecode::Literal___ObjInit_2(__this);
    __this->StringValue = stringValue;
}

StringLiteral* StringLiteral__New_1(::uStatic* __this, ::uString* stringValue)
{
    StringLiteral* inst = (StringLiteral*)::uAllocObject(sizeof(StringLiteral), StringLiteral__typeof());
    inst->_ObjInit_3(stringValue);
    return inst;
}

StringLiteral* StringLiteral__Read_3(::uStatic* __this, ::app::Uno::IO::BinaryReader* reader)
{
    return StringLiteral__New_1(NULL, ::uPtr< ::app::Uno::IO::BinaryReader*>(reader)->ReadString());
}

::uString* StringLiteral__ToString(StringLiteral* __this)
{
    return ::app::Uno::String__op_Addition_2(NULL, ::app::Uno::String__op_Addition_2(NULL, ::uGetConstString("\""), __this->StringValue), ::uGetConstString("\""));
}

void StringLiteral__Write_3(::uStatic* __this, StringLiteral* l, ::app::Uno::IO::BinaryWriter* writer)
{
    ::uPtr< ::app::Uno::IO::BinaryWriter*>(writer)->Write_24(::uPtr< StringLiteral*>(l)->StringValue);
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\Outracks.Simulator.Protocol.Uno\0.1.0\Bytecode\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

TypeMemberName__uType* TypeMemberName__typeof()
{
    static ::uStaticStrong<TypeMemberName__uType*> type;
    if (type != NULL) return type;

    type = (TypeMemberName__uType*)::uAllocClassType(sizeof(TypeMemberName__uType), "Outracks.Simulator.Bytecode.TypeMemberName", false, 1, 1, 0);

    type->__fp_Equals = (bool(*)(::uObject*, ::uObject*))TypeMemberName__Equals;
    type->__fp_GetHashCode = (int(*)(::uObject*))TypeMemberName__GetHashCode;
    type->__fp_ToString = (::uString*(*)(::uObject*))TypeMemberName__ToString;

    type->SetInterfaces(
        ::app::Outracks::Simulator::IEquatable__Outracks_Simulator_Bytecode_TypeMemberName__typeof(), offsetof(TypeMemberName__uType, __interface_0));

    type->SetStrongRefs(
        "Name", offsetof(TypeMemberName, Name));

    type->SetFields(1,
        ::uNewField("Name", NULL, offsetof(TypeMemberName, Name), ::app::Uno::String__typeof()));

    type->SetFunctions(5,
        ::uNewFunction("Equals", TypeMemberName__Equals_2, 0, false, ::app::Uno::Bool__typeof(), TypeMemberName__typeof()),
        ::uNewFunction(".ctor", TypeMemberName__New_1, 0, true, TypeMemberName__typeof(), ::app::Uno::String__typeof()),
        ::uNewFunction("Read", TypeMemberName__Read, 0, true, TypeMemberName__typeof(), ::app::Uno::IO::BinaryReader__typeof()),
        ::uNewFunctionVoid("Write", TypeMemberName__Write, 0, false, ::app::Uno::IO::BinaryWriter__typeof()),
        ::uNewFunctionVoid("Write", TypeMemberName__Write_1, 0, true, TypeMemberName__typeof(), ::app::Uno::IO::BinaryWriter__typeof()));

    ::uRegisterType(type);
    return type;
}

void TypeMemberName___ObjInit(TypeMemberName* __this, ::uString* name)
{
    if (::app::Uno::String__op_Equality(NULL, name, NULL))
    {
        U_THROW(::app::Uno::ArgumentNullException__New_5(NULL, name));
    }

    __this->Name = name;
}

bool TypeMemberName__Equals(TypeMemberName* __this, ::uObject* obj)
{
    TypeMemberName* other = ::uAs< TypeMemberName*>(obj, TypeMemberName__typeof());
    return (other != NULL) && __this->Equals_2(other);
}

bool TypeMemberName__Equals_2(TypeMemberName* __this, TypeMemberName* other)
{
    return ::app::Uno::String__op_Equality(NULL, ::uPtr< TypeMemberName*>(other)->Name, __this->Name);
}

int TypeMemberName__GetHashCode(TypeMemberName* __this)
{
    return ::uPtr< ::uString*>(__this->Name)->GetHashCode();
}

TypeMemberName* TypeMemberName__New_1(::uStatic* __this, ::uString* name)
{
    TypeMemberName* inst = (TypeMemberName*)::uAllocObject(sizeof(TypeMemberName), TypeMemberName__typeof());
    inst->_ObjInit(name);
    return inst;
}

::app::Outracks::Simulator::Bytecode::StaticMemberName* TypeMemberName__op_Addition(::uStatic* __this, ::app::Outracks::Simulator::Bytecode::TypeName* typeName, TypeMemberName* memberName)
{
    return ::app::Outracks::Simulator::Bytecode::StaticMemberName__New_1(NULL, typeName, memberName);
}

TypeMemberName* TypeMemberName__Read(::uStatic* __this, ::app::Uno::IO::BinaryReader* reader)
{
    return TypeMemberName__New_1(NULL, ::uPtr< ::app::Uno::IO::BinaryReader*>(reader)->ReadString());
}

::uString* TypeMemberName__ToString(TypeMemberName* __this)
{
    return __this->Name;
}

void TypeMemberName__Write(TypeMemberName* __this, ::app::Uno::IO::BinaryWriter* writer)
{
    ::uPtr< ::app::Uno::IO::BinaryWriter*>(writer)->Write_24(__this->Name);
}

void TypeMemberName__Write_1(::uStatic* __this, TypeMemberName* name, ::app::Uno::IO::BinaryWriter* writer)
{
    ::uPtr< TypeMemberName*>(name)->Write(writer);
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\Outracks.Simulator.Protocol.Uno\0.1.0\Bytecode\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

::uStaticStrong< ::uDelegate*> TypeName__Read;
::uStaticStrong< ::uDelegate*> TypeName__Write;

TypeName__uType* TypeName__typeof()
{
    static ::uStaticStrong<TypeName__uType*> type;
    if (type != NULL) return type;

    type = (TypeName__uType*)::uAllocClassType(sizeof(TypeName__uType), "Outracks.Simulator.Bytecode.TypeName", false, 1, 3, 0);

    type->__fp_Equals = (bool(*)(::uObject*, ::uObject*))TypeName__Equals;
    type->__fp_GetHashCode = (int(*)(::uObject*))TypeName__GetHashCode;
    type->__fp_ToString = (::uString*(*)(::uObject*))TypeName__ToString;

    type->SetInterfaces(
        ::app::Outracks::Simulator::IEquatable__Outracks_Simulator_Bytecode_TypeName__typeof(), offsetof(TypeName__uType, __interface_0));

    type->SetStrongRefs(
        "GenericArguments", offsetof(TypeName, GenericArguments),
        "Namespace._value", offsetof(TypeName, Namespace._value),
        "Surname", offsetof(TypeName, Surname));

    type->SetFields(5,
        ::uNewField("GenericArguments", NULL, offsetof(TypeName, GenericArguments), ::app::Outracks::Simulator::ImmutableList__Outracks_Simulator_Bytecode_TypeName__typeof()),
        ::uNewField("Namespace", NULL, offsetof(TypeName, Namespace), ::app::Outracks::Simulator::Bytecode::Optional__Outracks_Simulator_Bytecode_NamespaceName__typeof()),
        ::uNewField("Read", &TypeName__Read, 0, ::app::Uno::Func__Uno_IO_BinaryReader__Outracks_Simulator_Bytecode_TypeName__typeof()),
        ::uNewField("Surname", NULL, offsetof(TypeName, Surname), ::app::Uno::String__typeof()),
        ::uNewField("Write", &TypeName__Write, 0, ::app::Uno::Action__Outracks_Simulator_Bytecode_TypeName__Uno_IO_BinaryWriter__typeof()));

    type->SetFunctions(13,
        ::uNewFunction("_Read", TypeName___Read, 0, true, TypeName__typeof(), ::app::Uno::IO::BinaryReader__typeof()),
        ::uNewFunctionVoid("_Write", TypeName___Write, 0, false, ::app::Uno::IO::BinaryWriter__typeof()),
        ::uNewFunctionVoid("_Write", TypeName___Write_1, 0, true, TypeName__typeof(), ::app::Uno::IO::BinaryWriter__typeof()),
        ::uNewFunction("Equals", TypeName__Equals_2, 0, false, ::app::Uno::Bool__typeof(), TypeName__typeof()),
        ::uNewFunction("get_FullBaseName", TypeName__get_FullBaseName, 0, false, ::app::Uno::String__typeof()),
        ::uNewFunction("get_FullName", TypeName__get_FullName, 0, false, ::app::Uno::String__typeof()),
        ::uNewFunction("get_IsParameterizedGenericType", TypeName__get_IsParameterizedGenericType, 0, false, ::app::Uno::Bool__typeof()),
        ::uNewFunction("get_WithGenericSuffix", TypeName__get_WithGenericSuffix, 0, false, TypeName__typeof()),
        ::uNewFunction("get_WithoutNamespace", TypeName__get_WithoutNamespace, 0, false, ::app::Uno::String__typeof()),
        ::uNewFunction(".ctor", TypeName__New_1, 0, true, TypeName__typeof(), ::app::Outracks::Simulator::Bytecode::Optional__Outracks_Simulator_Bytecode_NamespaceName__typeof(), ::app::Uno::String__typeof(), ::app::Outracks::Simulator::ImmutableList__Outracks_Simulator_Bytecode_TypeName__typeof()),
        ::uNewFunction("Parameterize", TypeName__Parameterize, 0, false, TypeName__typeof(), ::uGetArrayType(TypeName__typeof())),
        ::uNewFunction("Parse", TypeName__Parse, 0, true, TypeName__typeof(), ::app::Uno::String__typeof()),
        ::uNewFunction("ParseGenericArguments", TypeName__ParseGenericArguments, 0, true, ::app::Uno::Collections::IEnumerable__Outracks_Simulator_Bytecode_TypeName__typeof(), ::app::Uno::String__typeof()));

    ::uRegisterType(type);
    return type;
}

void TypeName___ObjInit(TypeName* __this, ::app::Outracks::Simulator::Bytecode::Optional__Outracks_Simulator_Bytecode_NamespaceName ns, ::uString* surname, ::app::Outracks::Simulator::ImmutableList__Outracks_Simulator_Bytecode_TypeName* genericArguments)
{
    __this->Namespace = ns;
    __this->Surname = surname;
    __this->GenericArguments = genericArguments;
}

TypeName* TypeName___Read(::uStatic* __this, ::app::Uno::IO::BinaryReader* reader)
{
    ::app::Outracks::Simulator::Bytecode::Optional__Outracks_Simulator_Bytecode_NamespaceName ns = ::app::Outracks::Simulator::Bytecode::Optional__Read__Outracks_Simulator_Bytecode_NamespaceName(NULL, reader, ::app::Outracks::Simulator::Bytecode::NamespaceName__Read);
    ::uString* surname = ::uPtr< ::app::Uno::IO::BinaryReader*>(reader)->ReadString();
    ::app::Outracks::Simulator::ImmutableList__Outracks_Simulator_Bytecode_TypeName* genericArguments = ::app::Outracks::Simulator::List__Read__Outracks_Simulator_Bytecode_TypeName(NULL, reader, TypeName__Read);
    return TypeName__New_1(NULL, ns, surname, genericArguments);
}

void TypeName___TypeInit(::uStatic* __this)
{
    TypeName__Write = ::uNewDelegateNonVirt(::app::Uno::Action__Outracks_Simulator_Bytecode_TypeName__Uno_IO_BinaryWriter__typeof(), (const void*)TypeName___Write_1);
    TypeName__Read = ::uNewDelegateNonVirt(::app::Uno::Func__Uno_IO_BinaryReader__Outracks_Simulator_Bytecode_TypeName__typeof(), (const void*)TypeName___Read);
}

void TypeName___Write(TypeName* __this, ::app::Uno::IO::BinaryWriter* writer)
{
    ::app::Outracks::Simulator::Bytecode::Optional__Write__Outracks_Simulator_Bytecode_NamespaceName_1(NULL, writer, __this->Namespace, ::app::Outracks::Simulator::Bytecode::NamespaceName__Write);
    ::uPtr< ::app::Uno::IO::BinaryWriter*>(writer)->Write_24(__this->Surname);
    ::app::Outracks::Simulator::List__Write__Outracks_Simulator_Bytecode_TypeName(NULL, writer, __this->GenericArguments, TypeName__Write);
}

void TypeName___Write_1(::uStatic* __this, TypeName* name, ::app::Uno::IO::BinaryWriter* writer)
{
    ::uPtr< TypeName*>(name)->_Write(writer);
}

bool TypeName__Equals(TypeName* __this, ::uObject* obj)
{
    return ::uIs(obj, TypeName__typeof()) && __this->Equals_2(::uCast< TypeName*>(obj, TypeName__typeof()));
}

bool TypeName__Equals_2(TypeName* __this, TypeName* other)
{
    return ::app::Uno::String__op_Equality(NULL, __this->FullName(), ::uPtr< TypeName*>(other)->FullName());
}

::uString* TypeName__get_FullBaseName(TypeName* __this)
{
    ::app::Outracks::Simulator::Bytecode::Optional__Outracks_Simulator_Bytecode_NamespaceName ind_125 = ::app::Outracks::Simulator::Bytecode::Optional__Outracks_Simulator_Bytecode_NamespaceName();
    ::app::Outracks::Simulator::Bytecode::Optional__Outracks_Simulator_Bytecode_NamespaceName ind_126 = ::app::Outracks::Simulator::Bytecode::Optional__Outracks_Simulator_Bytecode_NamespaceName();
    return (ind_125 = __this->Namespace, (&ind_125))->HasValue() ? ::app::Uno::String__op_Addition_2(NULL, ::app::Uno::String__op_Addition(NULL, (::uObject*)(ind_126 = __this->Namespace, (&ind_126))->Value(), ::uGetConstString(".")), __this->Surname) : __this->Surname;
}

::uString* TypeName__get_FullName(TypeName* __this)
{
    ::app::Outracks::Simulator::Bytecode::Optional__Outracks_Simulator_Bytecode_NamespaceName ind_123 = ::app::Outracks::Simulator::Bytecode::Optional__Outracks_Simulator_Bytecode_NamespaceName();
    ::app::Outracks::Simulator::Bytecode::Optional__Outracks_Simulator_Bytecode_NamespaceName ind_124 = ::app::Outracks::Simulator::Bytecode::Optional__Outracks_Simulator_Bytecode_NamespaceName();
    return (ind_123 = __this->Namespace, (&ind_123))->HasValue() ? ::app::Uno::String__op_Addition_2(NULL, ::app::Uno::String__op_Addition(NULL, (::uObject*)(ind_124 = __this->Namespace, (&ind_124))->Value(), ::uGetConstString(".")), __this->WithoutNamespace()) : __this->WithoutNamespace();
}

bool TypeName__get_IsParameterizedGenericType(TypeName* __this)
{
    return ::uPtr< ::app::Outracks::Simulator::ImmutableList__Outracks_Simulator_Bytecode_TypeName*>(__this->GenericArguments)->Count() != 0;
}

TypeName* TypeName__get_WithGenericSuffix(TypeName* __this)
{
    return TypeName__New_1(NULL, __this->Namespace, ::app::Uno::String__op_Addition_2(NULL, __this->Surname, (::uPtr< ::app::Outracks::Simulator::ImmutableList__Outracks_Simulator_Bytecode_TypeName*>(__this->GenericArguments)->Count() == 0) ? ::uGetConstString("") : ::app::Uno::String__op_Addition_1(NULL, ::uGetConstString("`"), ::uBox< int>(::app::Uno::Int__typeof(), ::uPtr< ::app::Outracks::Simulator::ImmutableList__Outracks_Simulator_Bytecode_TypeName*>(__this->GenericArguments)->Count()))), ::app::Outracks::Simulator::ImmutableList__Outracks_Simulator_Bytecode_TypeName__get_Empty(NULL));
}

::uString* TypeName__get_WithoutNamespace(TypeName* __this)
{
    return __this->IsParameterizedGenericType() ? ::app::Uno::String__op_Addition_2(NULL, ::app::Uno::String__op_Addition_2(NULL, ::app::Uno::String__op_Addition_2(NULL, __this->Surname, ::uGetConstString("<")), ::app::Outracks::Simulator::StringSplitting__JoinToString__Outracks_Simulator_Bytecode_TypeName(NULL, (::uObject*)__this->GenericArguments, ::uGetConstString(","))), ::uGetConstString(">")) : __this->Surname;
}

int TypeName__GetHashCode(TypeName* __this)
{
    return ::uPtr< ::uString*>(__this->FullName())->GetHashCode();
}

TypeName* TypeName__New_1(::uStatic* __this, ::app::Outracks::Simulator::Bytecode::Optional__Outracks_Simulator_Bytecode_NamespaceName ns, ::uString* surname, ::app::Outracks::Simulator::ImmutableList__Outracks_Simulator_Bytecode_TypeName* genericArguments)
{
    TypeName* inst = (TypeName*)::uAllocObject(sizeof(TypeName), TypeName__typeof());
    inst->_ObjInit(ns, surname, genericArguments);
    return inst;
}

bool TypeName__op_Equality(::uStatic* __this, TypeName* a, TypeName* b)
{
    return ::uPtr< TypeName*>(a)->Equals_2(b);
}

bool TypeName__op_Inequality(::uStatic* __this, TypeName* a, TypeName* b)
{
    return !::uPtr< TypeName*>(a)->Equals_2(b);
}

TypeName* TypeName__Parameterize(TypeName* __this, ::uArray* methodArgumentTypes)
{
    return TypeName__New_1(NULL, __this->Namespace, __this->Surname, ::app::Outracks::Simulator::List__ToImmutableList__Outracks_Simulator_Bytecode_TypeName(NULL, (::uObject*)::app::Uno::Runtime::Implementation::Internal::ArrayEnumerable__Outracks_Simulator_Bytecode_TypeName__New_1(NULL, methodArgumentTypes)));
}

TypeName* TypeName__Parse(::uStatic* __this, ::uString* name)
{
    int baseNameEnd = ::app::Uno::String::IndexOf_1(::uPtr< ::uString*>(name), ::uGetConstString("<"), 0);
    bool hasGenericArguments = baseNameEnd != -1;
    ::uString* baseName = hasGenericArguments ? ::app::Uno::String::Substring_1(name, 0, baseNameEnd) : name;
    bool hasNamespace = ::app::Uno::String::Contains(::uPtr< ::uString*>(baseName), ::uGetConstString("."));
    ::app::Outracks::Simulator::Bytecode::Optional__Outracks_Simulator_Bytecode_NamespaceName ns = hasNamespace ? ::app::Outracks::Simulator::Bytecode::Optional__Some__Outracks_Simulator_Bytecode_NamespaceName(NULL, ::app::Outracks::Simulator::Bytecode::NamespaceName__New_1(NULL, ::app::Outracks::Simulator::StringSplitting__BeforeLast(NULL, baseName, ::uGetConstString(".")))) : ::app::Outracks::Simulator::Bytecode::Optional__Outracks_Simulator_Bytecode_NamespaceName__op_Implicit_1(NULL, ::app::Outracks::Simulator::Bytecode::Optional__None(NULL));
    ::uString* surname = hasNamespace ? ::app::Outracks::Simulator::StringSplitting__AfterLast(NULL, baseName, ::uGetConstString(".")) : baseName;
    ::app::Outracks::Simulator::ImmutableList__Outracks_Simulator_Bytecode_TypeName* genericArguments = hasGenericArguments ? ::app::Outracks::Simulator::List__ToImmutableList__Outracks_Simulator_Bytecode_TypeName(NULL, TypeName__ParseGenericArguments(NULL, ::app::Uno::String::Substring_1(name, baseNameEnd + 1, (name->Length() - (baseNameEnd + 1)) - 1))) : ::app::Outracks::Simulator::ImmutableList__Outracks_Simulator_Bytecode_TypeName__get_Empty(NULL);
    return TypeName__New_1(NULL, ns, surname, genericArguments);
}

::uObject* TypeName__ParseGenericArguments(::uStatic* __this, ::uString* argumentList)
{
    ::app::Uno::Collections::List__Outracks_Simulator_Bytecode_TypeName* types = ::app::Uno::Collections::List__Outracks_Simulator_Bytecode_TypeName__New_1(NULL);
    int indent = 0;
    int nameStart = 0;

    for (int i = 0; i < ::uPtr< ::uString*>(argumentList)->Length(); i++)
    {
        ::uChar c = ::uPtr< ::uString*>(argumentList)->Item(i);

        switch (c)
        {
            case '<':
            {
                indent++;
                break;
            }
            case '>':
            {
                indent--;
                break;
            }
            case ',':
            {
                if (indent == 0)
                {
                    ::uPtr< ::app::Uno::Collections::List__Outracks_Simulator_Bytecode_TypeName*>(types)->Add(TypeName__Parse(NULL, ::app::Uno::String::Substring_1(::uPtr< ::uString*>(argumentList), nameStart, i - nameStart)));
                    nameStart = i + 1;
                }

                break;
            }
        }
    }

    ::uPtr< ::app::Uno::Collections::List__Outracks_Simulator_Bytecode_TypeName*>(types)->Add(TypeName__Parse(NULL, ::app::Uno::String::Substring_1(::uPtr< ::uString*>(argumentList), nameStart, ::uPtr< ::uString*>(argumentList)->Length() - nameStart)));
    return (::uObject*)types;
}

::uString* TypeName__ToString(TypeName* __this)
{
    return __this->FullName();
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\Outracks.Simulator.Protocol.Uno\0.1.0\Bytecode\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

::uStaticStrong< ::uDelegate*> Variable__Read;
::uStaticStrong< Variable*> Variable__This;
::uStaticStrong< ::uDelegate*> Variable__Write;

Variable__uType* Variable__typeof()
{
    static ::uStaticStrong<Variable__uType*> type;
    if (type != NULL) return type;

    type = (Variable__uType*)::uAllocClassType(sizeof(Variable__uType), "Outracks.Simulator.Bytecode.Variable", false, 1, 1, 0);

    type->__fp_Equals = (bool(*)(::uObject*, ::uObject*))Variable__Equals;
    type->__fp_GetHashCode = (int(*)(::uObject*))Variable__GetHashCode;
    type->__fp_ToString = (::uString*(*)(::uObject*))Variable__ToString;

    type->SetInterfaces(
        ::app::Outracks::Simulator::IEquatable__Outracks_Simulator_Bytecode_Variable__typeof(), offsetof(Variable__uType, __interface_0));

    type->SetStrongRefs(
        "Name", offsetof(Variable, Name));

    type->SetFields(4,
        ::uNewField("Name", NULL, offsetof(Variable, Name), ::app::Uno::String__typeof()),
        ::uNewField("Read", &Variable__Read, 0, ::app::Uno::Func__Uno_IO_BinaryReader__Outracks_Simulator_Bytecode_Variable__typeof()),
        ::uNewField("This", &Variable__This, 0, Variable__typeof()),
        ::uNewField("Write", &Variable__Write, 0, ::app::Uno::Action__Outracks_Simulator_Bytecode_Variable__Uno_IO_BinaryWriter__typeof()));

    type->SetFunctions(6,
        ::uNewFunction("_Read", Variable___Read, 0, true, Variable__typeof(), ::app::Uno::IO::BinaryReader__typeof()),
        ::uNewFunctionVoid("_Write", Variable___Write, 0, false, ::app::Uno::IO::BinaryWriter__typeof()),
        ::uNewFunctionVoid("_Write", Variable___Write_1, 0, true, Variable__typeof(), ::app::Uno::IO::BinaryWriter__typeof()),
        ::uNewFunction("Equals", Variable__Equals_2, 0, false, ::app::Uno::Bool__typeof(), Variable__typeof()),
        ::uNewFunction("GetName", Variable__GetName, 0, true, ::app::Uno::String__typeof(), Variable__typeof()),
        ::uNewFunction(".ctor", Variable__New_1, 0, true, Variable__typeof(), ::app::Uno::String__typeof()));

    ::uRegisterType(type);
    return type;
}

void Variable___ObjInit(Variable* __this, ::uString* name)
{
    __this->Name = name;
}

Variable* Variable___Read(::uStatic* __this, ::app::Uno::IO::BinaryReader* reader)
{
    return Variable__New_1(NULL, ::uPtr< ::app::Uno::IO::BinaryReader*>(reader)->ReadString());
}

void Variable___TypeInit(::uStatic* __this)
{
    Variable__This = Variable__New_1(NULL, ::uGetConstString("this"));
    Variable__Write = ::uNewDelegateNonVirt(::app::Uno::Action__Outracks_Simulator_Bytecode_Variable__Uno_IO_BinaryWriter__typeof(), (const void*)Variable___Write_1);
    Variable__Read = ::uNewDelegateNonVirt(::app::Uno::Func__Uno_IO_BinaryReader__Outracks_Simulator_Bytecode_Variable__typeof(), (const void*)Variable___Read);
}

void Variable___Write(Variable* __this, ::app::Uno::IO::BinaryWriter* writer)
{
    ::uPtr< ::app::Uno::IO::BinaryWriter*>(writer)->Write_24(__this->Name);
}

void Variable___Write_1(::uStatic* __this, Variable* v, ::app::Uno::IO::BinaryWriter* writer)
{
    ::uPtr< Variable*>(v)->_Write(writer);
}

bool Variable__Equals(Variable* __this, ::uObject* obj)
{
    if (::app::Uno::Object__ReferenceEquals(NULL, NULL, obj))
    {
        return false;
    }

    if (::app::Uno::Object__ReferenceEquals(NULL, (::uObject*)__this, obj))
    {
        return true;
    }

    return ::uIs(obj, Variable__typeof()) && __this->Equals_2(::uCast< Variable*>(obj, Variable__typeof()));
}

bool Variable__Equals_2(Variable* __this, Variable* other)
{
    if (::app::Uno::Object__ReferenceEquals(NULL, NULL, (::uObject*)other))
    {
        return false;
    }

    if (::app::Uno::Object__ReferenceEquals(NULL, (::uObject*)__this, (::uObject*)other))
    {
        return true;
    }

    return ::app::Uno::String__Equals_3(NULL, __this->Name, ::uPtr< Variable*>(other)->Name);
}

int Variable__GetHashCode(Variable* __this)
{
    return ::app::Uno::String__op_Inequality(NULL, __this->Name, NULL) ? ::uPtr< ::uString*>(__this->Name)->GetHashCode() : 0;
}

::uString* Variable__GetName(::uStatic* __this, Variable* arg)
{
    return ::uPtr< Variable*>(arg)->Name;
}

Variable* Variable__New_1(::uStatic* __this, ::uString* name)
{
    Variable* inst = (Variable*)::uAllocObject(sizeof(Variable), Variable__typeof());
    inst->_ObjInit(name);
    return inst;
}

bool Variable__op_Equality(::uStatic* __this, Variable* left, Variable* right)
{
    return ::app::Uno::Object__Equals_1(NULL, (::uObject*)left, (::uObject*)right);
}

bool Variable__op_Inequality(::uStatic* __this, Variable* left, Variable* right)
{
    return !::app::Uno::Object__Equals_1(NULL, (::uObject*)left, (::uObject*)right);
}

::uString* Variable__ToString(Variable* __this)
{
    return __this->Name;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\Outracks.Simulator.Protocol.Uno\0.1.0\Bytecode\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

WriteProperty__uType* WriteProperty__typeof()
{
    static ::uStaticStrong<WriteProperty__uType*> type;
    if (type != NULL) return type;

    type = (WriteProperty__uType*)::uAllocClassType(sizeof(WriteProperty__uType), "Outracks.Simulator.Bytecode.WriteProperty", false, 0, 3, 0);

    type->SetBaseType(::app::Outracks::Simulator::Bytecode::Expression__typeof());
    type->__fp_ToString = (::uString*(*)(::uObject*))WriteProperty__ToString;

    type->SetStrongRefs(
        "Object", offsetof(WriteProperty, Object),
        "Property", offsetof(WriteProperty, Property),
        "Value", offsetof(WriteProperty, Value));

    type->SetFields(3,
        ::uNewField("Object", NULL, offsetof(WriteProperty, Object), ::app::Outracks::Simulator::Bytecode::Expression__typeof()),
        ::uNewField("Property", NULL, offsetof(WriteProperty, Property), ::app::Outracks::Simulator::Bytecode::TypeMemberName__typeof()),
        ::uNewField("Value", NULL, offsetof(WriteProperty, Value), ::app::Outracks::Simulator::Bytecode::Expression__typeof()));

    type->SetFunctions(4,
        ::uNewFunction(".ctor", WriteProperty__New_1, 0, true, WriteProperty__typeof(), ::app::Outracks::Simulator::Bytecode::Expression__typeof(), ::app::Outracks::Simulator::Bytecode::TypeMemberName__typeof(), ::app::Outracks::Simulator::Bytecode::Expression__typeof()),
        ::uNewFunction("Read", WriteProperty__Read_2, 0, true, WriteProperty__typeof(), ::app::Uno::IO::BinaryReader__typeof()),
        ::uNewFunctionVoid("Write", WriteProperty__Write_2, 0, false, ::app::Uno::IO::BinaryWriter__typeof()),
        ::uNewFunctionVoid("Write", WriteProperty__Write_3, 0, true, WriteProperty__typeof(), ::app::Uno::IO::BinaryWriter__typeof()));

    ::uRegisterType(type);
    return type;
}

void WriteProperty___ObjInit_2(WriteProperty* __this, ::app::Outracks::Simulator::Bytecode::Expression* o, ::app::Outracks::Simulator::Bytecode::TypeMemberName* property, ::app::Outracks::Simulator::Bytecode::Expression* value)
{
    ::app::Outracks::Simulator::Bytecode::Expression___ObjInit_1(__this);
    __this->Object = o;
    __this->Property = property;
    __this->Value = value;
}

WriteProperty* WriteProperty__New_1(::uStatic* __this, ::app::Outracks::Simulator::Bytecode::Expression* o, ::app::Outracks::Simulator::Bytecode::TypeMemberName* property, ::app::Outracks::Simulator::Bytecode::Expression* value)
{
    WriteProperty* inst = (WriteProperty*)::uAllocObject(sizeof(WriteProperty), WriteProperty__typeof());
    inst->_ObjInit_2(o, property, value);
    return inst;
}

WriteProperty* WriteProperty__Read_2(::uStatic* __this, ::app::Uno::IO::BinaryReader* reader)
{
    ::app::Outracks::Simulator::Bytecode::Expression* _Object = ::uPtr< ::uDelegate*>(::app::Outracks::Simulator::Bytecode::Expression__Read_1)->Invoke< ::app::Outracks::Simulator::Bytecode::Expression*, ::app::Uno::IO::BinaryReader*>(reader);
    ::app::Outracks::Simulator::Bytecode::TypeMemberName* _Property = ::app::Outracks::Simulator::Bytecode::TypeMemberName__Read(NULL, reader);
    ::app::Outracks::Simulator::Bytecode::Expression* _Value = ::uPtr< ::uDelegate*>(::app::Outracks::Simulator::Bytecode::Expression__Read_1)->Invoke< ::app::Outracks::Simulator::Bytecode::Expression*, ::app::Uno::IO::BinaryReader*>(reader);
    return WriteProperty__New_1(NULL, _Object, _Property, _Value);
}

::uString* WriteProperty__ToString(WriteProperty* __this)
{
    return ::app::Uno::String__op_Addition_1(NULL, ::app::Uno::String__op_Addition_2(NULL, ::app::Uno::String__op_Addition_2(NULL, ::app::Uno::String__op_Addition(NULL, (::uObject*)__this->Object, ::uGetConstString(".")), ::uPtr< ::app::Outracks::Simulator::Bytecode::TypeMemberName*>(__this->Property)->Name), ::uGetConstString(" = ")), (::uObject*)__this->Value);
}

void WriteProperty__Write_2(WriteProperty* __this, ::app::Uno::IO::BinaryWriter* writer)
{
    ::uPtr< ::uDelegate*>(::app::Outracks::Simulator::Bytecode::Expression__Write_1)->InvokeVoid< ::app::Outracks::Simulator::Bytecode::Expression*, ::app::Uno::IO::BinaryWriter*>(__this->Object, writer);
    ::app::Outracks::Simulator::Bytecode::TypeMemberName__Write_1(NULL, __this->Property, writer);
    ::uPtr< ::uDelegate*>(::app::Outracks::Simulator::Bytecode::Expression__Write_1)->InvokeVoid< ::app::Outracks::Simulator::Bytecode::Expression*, ::app::Uno::IO::BinaryWriter*>(__this->Value, writer);
}

void WriteProperty__Write_3(::uStatic* __this, WriteProperty* o, ::app::Uno::IO::BinaryWriter* writer)
{
    ::uPtr< WriteProperty*>(o)->Write_2(writer);
}

}}}}
