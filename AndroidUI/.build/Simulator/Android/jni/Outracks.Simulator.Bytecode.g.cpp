// This file was generated based on '(multiple files)'.
// WARNING: Changes might be lost if you edit this file directly.

#include <Outracks.Simulator.Bytecode.AddEventHandler.h>
#include <Outracks.Simulator.Bytecode.BindVariable.h>
#include <Outracks.Simulator.Bytecode.BlobLiteral.h>
#include <Outracks.Simulator.Bytecode.BooleanLiteral.h>
#include <Outracks.Simulator.Bytecode.CallDynamicMethod.h>
#include <Outracks.Simulator.Bytecode.CallLambda.h>
#include <Outracks.Simulator.Bytecode.CallStaticMethod.h>
#include <Outracks.Simulator.Bytecode.EnumLiteral.h>
#include <Outracks.Simulator.Bytecode.Expression.h>
#include <Outracks.Simulator.Bytecode.Instantiate.h>
#include <Outracks.Simulator.Bytecode.IsType.h>
#include <Outracks.Simulator.Bytecode.Lambda.h>
#include <Outracks.Simulator.Bytecode.Literal.h>
#include <Outracks.Simulator.Bytecode.LogicalOr.h>
#include <Outracks.Simulator.Bytecode.MethodGroup.h>
#include <Outracks.Simulator.Bytecode.NamespaceName.h>
#include <Outracks.Simulator.Bytecode.NoOperation.h>
#include <Outracks.Simulator.Bytecode.NumberLiteral.h>
#include <Outracks.Simulator.Bytecode.NumberType.h>
#include <Outracks.Simulator.Bytecode.Optional.h>
#include <Outracks.Simulator.Bytecode.Optional-1.h>
#include <Outracks.Simulator.Bytecode.OptionalExtensions.h>
#include <Outracks.Simulator.Bytecode.Parameter.h>
#include <Outracks.Simulator.Bytecode.ProjectBytecode.h>
#include <Outracks.Simulator.Bytecode.ReadProperty.h>
#include <Outracks.Simulator.Bytecode.ReadStaticField.h>
#include <Outracks.Simulator.Bytecode.ReadVariable.h>
#include <Outracks.Simulator.Bytecode.RemoveEventHandler.h>
#include <Outracks.Simulator.Bytecode.Return.h>
#include <Outracks.Simulator.Bytecode.Signature.h>
#include <Outracks.Simulator.Bytecode.Statement.h>
#include <Outracks.Simulator.Bytecode.StaticMemberName.h>
#include <Outracks.Simulator.Bytecode.StringLiteral.h>
#include <Outracks.Simulator.Bytecode.TypeMemberName.h>
#include <Outracks.Simulator.Bytecode.TypeName.h>
#include <Outracks.Simulator.Bytecode.Variable.h>
#include <Outracks.Simulator.Bytecode.WriteProperty.h>
#include <Outracks.Simulator.Closure.h>
#include <Outracks.Simulator.ImmutableList-1.h>
#include <Outracks.Simulator.IndentString.h>
#include <Outracks.Simulator.InvalidDataException.h>
#include <Outracks.Simulator.List.h>
#include <Outracks.Simulator.NonExhaustiveMatch.h>
#include <Outracks.Simulator.Serialization.h>
#include <Outracks.Simulator.StringSplitting.h>
#include <Uno.Action-1.h>
#include <Uno.Action-2.h>
#include <Uno.ArgumentNullException.h>
#include <Uno.Bool.h>
#include <Uno.Byte.h>
#include <Uno.Char.h>
#include <Uno.Collections.EnumerableExtensions.h>
#include <Uno.Collections.IEnumerable-1.h>
#include <Uno.Collections.IEnumerator.h>
#include <Uno.Collections.IEnumerator-1.h>
#include <Uno.Collections.List-1.h>
#include <Uno.Double.h>
#include <Uno.Exception.h>
#include <Uno.Func-1.h>
#include <Uno.Func-2.h>
#include <Uno.Int.h>
#include <Uno.InvalidOperationException.h>
#include <Uno.IO.BinaryReader.h>
#include <Uno.IO.BinaryWriter.h>
#include <Uno.Object.h>
#include <Uno.Runtime.Implementation.Internal.ArrayEnumerable-1.h>
#include <Uno.String.h>
#include <Uno.Text.StringBuilder.h>
static uString* STRINGS[34];
static uType* TYPES[205];

namespace g{
namespace Outracks{
namespace Simulator{
namespace Bytecode{

// C:\ProgramData\Uno\Packages\Outracks.Simulator.Protocol.Uno\0.1.0\Bytecode\$.uno(614)
// -------------------------------------------------------------------------------------

// public sealed class AddEventHandler :614
// {
uType* AddEventHandler_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 3;
    options.ObjectSize = sizeof(AddEventHandler);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Outracks.Simulator.Bytecode.AddEventHandler", options);
    type->SetBase(::g::Outracks::Simulator::Bytecode::Expression_typeof());
    type->fp_ToString = (void(*)(uObject*, uString**))AddEventHandler__ToString_fn;
    ::STRINGS[0] = uString::Const(".");
    ::STRINGS[1] = uString::Const(" += ");
    ::TYPES[0] = ::g::Uno::Func1_typeof()->MakeType(::g::Uno::IO::BinaryReader_typeof(), ::g::Outracks::Simulator::Bytecode::Expression_typeof());
    ::TYPES[1] = ::g::Outracks::Simulator::Bytecode::Expression_typeof();
    ::TYPES[2] = uObject_typeof();
    ::TYPES[3] = ::g::Outracks::Simulator::Bytecode::TypeMemberName_typeof();
    ::TYPES[4] = ::g::Uno::Action2_typeof()->MakeType(::g::Outracks::Simulator::Bytecode::Expression_typeof(), ::g::Uno::IO::BinaryWriter_typeof());
    type->SetFields(0,
        ::g::Outracks::Simulator::Bytecode::TypeMemberName_typeof(), offsetof(::g::Outracks::Simulator::Bytecode::AddEventHandler, Event), 0,
        ::g::Outracks::Simulator::Bytecode::Expression_typeof(), offsetof(::g::Outracks::Simulator::Bytecode::AddEventHandler, Handler), 0,
        ::g::Outracks::Simulator::Bytecode::Expression_typeof(), offsetof(::g::Outracks::Simulator::Bytecode::AddEventHandler, Object), 0);
    type->Reflection.SetFields(3,
        new uField("Event", 0),
        new uField("Handler", 1),
        new uField("Object", 2));
    type->Reflection.SetFunctions(4,
        new uFunction(".ctor", NULL, (void*)AddEventHandler__New1_fn, 0, true, AddEventHandler_typeof(), 3, ::g::Outracks::Simulator::Bytecode::Expression_typeof(), ::g::Outracks::Simulator::Bytecode::TypeMemberName_typeof(), ::g::Outracks::Simulator::Bytecode::Expression_typeof()),
        new uFunction("Read", NULL, (void*)AddEventHandler__Read2_fn, 0, true, AddEventHandler_typeof(), 1, ::g::Uno::IO::BinaryReader_typeof()),
        new uFunction("Write", NULL, (void*)AddEventHandler__Write2_fn, 0, true, uVoid_typeof(), 2, AddEventHandler_typeof(), ::g::Uno::IO::BinaryWriter_typeof()),
        new uFunction("Write", NULL, (void*)AddEventHandler__Write3_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::IO::BinaryWriter_typeof()));
    return type;
}

// public AddEventHandler(Outracks.Simulator.Bytecode.Expression o, Outracks.Simulator.Bytecode.TypeMemberName ev, Outracks.Simulator.Bytecode.Expression handler) :620
void AddEventHandler__ctor_2_fn(AddEventHandler* __this, ::g::Outracks::Simulator::Bytecode::Expression* o, ::g::Outracks::Simulator::Bytecode::TypeMemberName* ev, ::g::Outracks::Simulator::Bytecode::Expression* handler)
{
    __this->ctor_2(o, ev, handler);
}

// public AddEventHandler New(Outracks.Simulator.Bytecode.Expression o, Outracks.Simulator.Bytecode.TypeMemberName ev, Outracks.Simulator.Bytecode.Expression handler) :620
void AddEventHandler__New1_fn(::g::Outracks::Simulator::Bytecode::Expression* o, ::g::Outracks::Simulator::Bytecode::TypeMemberName* ev, ::g::Outracks::Simulator::Bytecode::Expression* handler, AddEventHandler** __retval)
{
    *__retval = AddEventHandler::New1(o, ev, handler);
}

// public static new Outracks.Simulator.Bytecode.AddEventHandler Read(Uno.IO.BinaryReader reader) :644
void AddEventHandler__Read2_fn(::g::Uno::IO::BinaryReader* reader, AddEventHandler** __retval)
{
    *__retval = AddEventHandler::Read2(reader);
}

// public override sealed string ToString() :627
void AddEventHandler__ToString_fn(AddEventHandler* __this, uString** __retval)
{
    return *__retval = ::g::Uno::String::op_Addition1(::g::Uno::String::op_Addition2(::g::Uno::String::op_Addition2(::g::Uno::String::op_Addition(__this->Object, ::STRINGS[0/*"."*/]), uPtr(__this->Event)->Name), ::STRINGS[1/*" += "*/]), __this->Handler), void();
}

// public static new void Write(Outracks.Simulator.Bytecode.AddEventHandler o, Uno.IO.BinaryWriter writer) :632
void AddEventHandler__Write2_fn(AddEventHandler* o, ::g::Uno::IO::BinaryWriter* writer)
{
    AddEventHandler::Write2(o, writer);
}

// public new void Write(Uno.IO.BinaryWriter writer) :637
void AddEventHandler__Write3_fn(AddEventHandler* __this, ::g::Uno::IO::BinaryWriter* writer)
{
    __this->Write3(writer);
}

// public AddEventHandler(Outracks.Simulator.Bytecode.Expression o, Outracks.Simulator.Bytecode.TypeMemberName ev, Outracks.Simulator.Bytecode.Expression handler) [instance] :620
void AddEventHandler::ctor_2(::g::Outracks::Simulator::Bytecode::Expression* o, ::g::Outracks::Simulator::Bytecode::TypeMemberName* ev, ::g::Outracks::Simulator::Bytecode::Expression* handler)
{
    ctor_1();
    Object = o;
    Event = ev;
    Handler = handler;
}

// public new void Write(Uno.IO.BinaryWriter writer) [instance] :637
void AddEventHandler::Write3(::g::Uno::IO::BinaryWriter* writer)
{
    uPtr(::g::Outracks::Simulator::Bytecode::Expression::Write1())->Invoke(2, (::g::Outracks::Simulator::Bytecode::Expression*)Object, writer);
    ::g::Outracks::Simulator::Bytecode::TypeMemberName::Write(Event, writer);
    uPtr(::g::Outracks::Simulator::Bytecode::Expression::Write1())->Invoke(2, (::g::Outracks::Simulator::Bytecode::Expression*)Handler, writer);
}

// public AddEventHandler New(Outracks.Simulator.Bytecode.Expression o, Outracks.Simulator.Bytecode.TypeMemberName ev, Outracks.Simulator.Bytecode.Expression handler) [static] :620
AddEventHandler* AddEventHandler::New1(::g::Outracks::Simulator::Bytecode::Expression* o, ::g::Outracks::Simulator::Bytecode::TypeMemberName* ev, ::g::Outracks::Simulator::Bytecode::Expression* handler)
{
    AddEventHandler* obj1 = (AddEventHandler*)uNew(AddEventHandler_typeof());
    obj1->ctor_2(o, ev, handler);
    return obj1;
}

// public static new Outracks.Simulator.Bytecode.AddEventHandler Read(Uno.IO.BinaryReader reader) [static] :644
AddEventHandler* AddEventHandler::Read2(::g::Uno::IO::BinaryReader* reader)
{
    ::g::Outracks::Simulator::Bytecode::Expression* _Object = (::g::Outracks::Simulator::Bytecode::Expression*)uPtr(::g::Outracks::Simulator::Bytecode::Expression::Read1())->Invoke(1, reader);
    ::g::Outracks::Simulator::Bytecode::TypeMemberName* _Event = ::g::Outracks::Simulator::Bytecode::TypeMemberName::Read(reader);
    ::g::Outracks::Simulator::Bytecode::Expression* _Handler = (::g::Outracks::Simulator::Bytecode::Expression*)uPtr(::g::Outracks::Simulator::Bytecode::Expression::Read1())->Invoke(1, reader);
    return AddEventHandler::New1(_Object, _Event, _Handler);
}

// public static new void Write(Outracks.Simulator.Bytecode.AddEventHandler o, Uno.IO.BinaryWriter writer) [static] :632
void AddEventHandler::Write2(AddEventHandler* o, ::g::Uno::IO::BinaryWriter* writer)
{
    uPtr(o)->Write3(writer);
}
// }

// C:\ProgramData\Uno\Packages\Outracks.Simulator.Protocol.Uno\0.1.0\Bytecode\$.uno(1519)
// --------------------------------------------------------------------------------------

// public sealed class BindVariable :1519
// {
// static BindVariable() :1519
static void BindVariable__cctor__fn(uType* __type)
{
    BindVariable::Write_ = uDelegate::New(::TYPES[5/*Uno.Action<Outracks.Simulator.Bytecode.BindVariable, Uno.IO.BinaryWriter>*/], (void*)BindVariable___Write_fn);
    BindVariable::Read_ = uDelegate::New(::TYPES[6/*Uno.Func<Uno.IO.BinaryReader, Outracks.Simulator.Bytecode.BindVariable>*/], (void*)BindVariable___Read_fn);
}

uType* BindVariable_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 4;
    options.ObjectSize = sizeof(BindVariable);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Outracks.Simulator.Bytecode.BindVariable", options);
    type->fp_cctor_ = BindVariable__cctor__fn;
    type->fp_ToString = (void(*)(uObject*, uString**))BindVariable__ToString_fn;
    ::STRINGS[2] = uString::Const("var ");
    ::STRINGS[3] = uString::Const(" = ");
    ::TYPES[5] = ::g::Uno::Action2_typeof()->MakeType(BindVariable_typeof(), ::g::Uno::IO::BinaryWriter_typeof());
    ::TYPES[6] = ::g::Uno::Func1_typeof()->MakeType(::g::Uno::IO::BinaryReader_typeof(), BindVariable_typeof());
    ::TYPES[7] = ::g::Uno::Func1_typeof()->MakeType(::g::Uno::IO::BinaryReader_typeof(), ::g::Outracks::Simulator::Bytecode::Variable_typeof());
    ::TYPES[8] = ::g::Outracks::Simulator::Bytecode::Variable_typeof();
    ::TYPES[0] = ::g::Uno::Func1_typeof()->MakeType(::g::Uno::IO::BinaryReader_typeof(), ::g::Outracks::Simulator::Bytecode::Expression_typeof());
    ::TYPES[1] = ::g::Outracks::Simulator::Bytecode::Expression_typeof();
    ::TYPES[9] = ::g::Uno::Action2_typeof()->MakeType(::g::Outracks::Simulator::Bytecode::Variable_typeof(), ::g::Uno::IO::BinaryWriter_typeof());
    ::TYPES[4] = ::g::Uno::Action2_typeof()->MakeType(::g::Outracks::Simulator::Bytecode::Expression_typeof(), ::g::Uno::IO::BinaryWriter_typeof());
    ::TYPES[2] = uObject_typeof();
    type->SetFields(0,
        ::g::Outracks::Simulator::Bytecode::Expression_typeof(), offsetof(::g::Outracks::Simulator::Bytecode::BindVariable, Expression), 0,
        ::g::Outracks::Simulator::Bytecode::Variable_typeof(), offsetof(::g::Outracks::Simulator::Bytecode::BindVariable, Variable), 0,
        ::g::Uno::Func1_typeof()->MakeType(::g::Uno::IO::BinaryReader_typeof(), BindVariable_typeof()), (uintptr_t)&::g::Outracks::Simulator::Bytecode::BindVariable::Read_, uFieldFlagsStatic,
        ::g::Uno::Action2_typeof()->MakeType(BindVariable_typeof(), ::g::Uno::IO::BinaryWriter_typeof()), (uintptr_t)&::g::Outracks::Simulator::Bytecode::BindVariable::Write_, uFieldFlagsStatic);
    type->Reflection.SetFields(4,
        new uField("Expression", 0),
        new uField("Read", 2),
        new uField("Variable", 1),
        new uField("Write", 3));
    type->Reflection.SetFunctions(3,
        new uFunction("_Read", NULL, (void*)BindVariable___Read_fn, 0, true, BindVariable_typeof(), 1, ::g::Uno::IO::BinaryReader_typeof()),
        new uFunction("_Write", NULL, (void*)BindVariable___Write_fn, 0, true, uVoid_typeof(), 2, BindVariable_typeof(), ::g::Uno::IO::BinaryWriter_typeof()),
        new uFunction(".ctor", NULL, (void*)BindVariable__New1_fn, 0, true, BindVariable_typeof(), 2, ::g::Outracks::Simulator::Bytecode::Variable_typeof(), ::g::Outracks::Simulator::Bytecode::Expression_typeof()));
    return type;
}

// public BindVariable(Outracks.Simulator.Bytecode.Variable variable, Outracks.Simulator.Bytecode.Expression expression) :1524
void BindVariable__ctor__fn(BindVariable* __this, ::g::Outracks::Simulator::Bytecode::Variable* variable, ::g::Outracks::Simulator::Bytecode::Expression* expression)
{
    __this->ctor_(variable, expression);
}

// public static Outracks.Simulator.Bytecode.BindVariable _Read(Uno.IO.BinaryReader reader) :1545
void BindVariable___Read_fn(::g::Uno::IO::BinaryReader* reader, BindVariable** __retval)
{
    *__retval = BindVariable::_Read(reader);
}

// public static void _Write(Outracks.Simulator.Bytecode.BindVariable s, Uno.IO.BinaryWriter writer) :1537
void BindVariable___Write_fn(BindVariable* s, ::g::Uno::IO::BinaryWriter* writer)
{
    BindVariable::_Write(s, writer);
}

// public BindVariable New(Outracks.Simulator.Bytecode.Variable variable, Outracks.Simulator.Bytecode.Expression expression) :1524
void BindVariable__New1_fn(::g::Outracks::Simulator::Bytecode::Variable* variable, ::g::Outracks::Simulator::Bytecode::Expression* expression, BindVariable** __retval)
{
    *__retval = BindVariable::New1(variable, expression);
}

// public override sealed string ToString() :1530
void BindVariable__ToString_fn(BindVariable* __this, uString** __retval)
{
    return *__retval = ::g::Uno::String::op_Addition1(::g::Uno::String::op_Addition2(::g::Uno::String::op_Addition2(::STRINGS[2/*"var "*/], uPtr(__this->Variable)->Name), ::STRINGS[3/*" = "*/]), __this->Expression), void();
}

uSStrong<uDelegate*> BindVariable::Read_;
uSStrong<uDelegate*> BindVariable::Write_;

// public BindVariable(Outracks.Simulator.Bytecode.Variable variable, Outracks.Simulator.Bytecode.Expression expression) [instance] :1524
void BindVariable::ctor_(::g::Outracks::Simulator::Bytecode::Variable* variable, ::g::Outracks::Simulator::Bytecode::Expression* expression)
{
    Variable = variable;
    Expression = expression;
}

// public static Outracks.Simulator.Bytecode.BindVariable _Read(Uno.IO.BinaryReader reader) [static] :1545
BindVariable* BindVariable::_Read(::g::Uno::IO::BinaryReader* reader)
{
    BindVariable_typeof()->Init();
    ::g::Outracks::Simulator::Bytecode::Variable* variable = (::g::Outracks::Simulator::Bytecode::Variable*)uPtr(::g::Outracks::Simulator::Bytecode::Variable::Read())->Invoke(1, reader);
    ::g::Outracks::Simulator::Bytecode::Expression* expression = (::g::Outracks::Simulator::Bytecode::Expression*)uPtr(::g::Outracks::Simulator::Bytecode::Expression::Read1())->Invoke(1, reader);
    return BindVariable::New1(variable, expression);
}

// public static void _Write(Outracks.Simulator.Bytecode.BindVariable s, Uno.IO.BinaryWriter writer) [static] :1537
void BindVariable::_Write(BindVariable* s, ::g::Uno::IO::BinaryWriter* writer)
{
    BindVariable_typeof()->Init();
    uPtr(::g::Outracks::Simulator::Bytecode::Variable::Write())->Invoke(2, (::g::Outracks::Simulator::Bytecode::Variable*)uPtr(s)->Variable, writer);
    uPtr(::g::Outracks::Simulator::Bytecode::Expression::Write1())->Invoke(2, (::g::Outracks::Simulator::Bytecode::Expression*)s->Expression, writer);
}

// public BindVariable New(Outracks.Simulator.Bytecode.Variable variable, Outracks.Simulator.Bytecode.Expression expression) [static] :1524
BindVariable* BindVariable::New1(::g::Outracks::Simulator::Bytecode::Variable* variable, ::g::Outracks::Simulator::Bytecode::Expression* expression)
{
    BindVariable* obj1 = (BindVariable*)uNew(BindVariable_typeof());
    obj1->ctor_(variable, expression);
    return obj1;
}
// }

// C:\ProgramData\Uno\Packages\Outracks.Simulator.Protocol.Uno\0.1.0\Bytecode\$.uno(1347)
// --------------------------------------------------------------------------------------

// public sealed class BlobLiteral :1347
// {
uType* BlobLiteral_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 1;
    options.ObjectSize = sizeof(BlobLiteral);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Outracks.Simulator.Bytecode.BlobLiteral", options);
    type->SetBase(::g::Outracks::Simulator::Bytecode::Literal_typeof());
    type->fp_ToString = (void(*)(uObject*, uString**))BlobLiteral__ToString_fn;
    ::STRINGS[4] = uString::Const("new byte[");
    ::STRINGS[5] = uString::Const("]");
    ::TYPES[2] = uObject_typeof();
    ::TYPES[10] = ::g::Uno::Byte_typeof()->Array();
    type->SetFields(0,
        ::g::Uno::Byte_typeof()->Array(), offsetof(::g::Outracks::Simulator::Bytecode::BlobLiteral, Bytes), 0);
    type->Reflection.SetFields(1,
        new uField("Bytes", 0));
    type->Reflection.SetFunctions(3,
        new uFunction(".ctor", NULL, (void*)BlobLiteral__New1_fn, 0, true, BlobLiteral_typeof(), 1, ::g::Uno::Byte_typeof()->Array()),
        new uFunction("Read", NULL, (void*)BlobLiteral__Read3_fn, 0, true, BlobLiteral_typeof(), 1, ::g::Uno::IO::BinaryReader_typeof()),
        new uFunction("Write", NULL, (void*)BlobLiteral__Write3_fn, 0, true, uVoid_typeof(), 2, BlobLiteral_typeof(), ::g::Uno::IO::BinaryWriter_typeof()));
    return type;
}

// public BlobLiteral(byte[] bytes) :1351
void BlobLiteral__ctor_3_fn(BlobLiteral* __this, uArray* bytes)
{
    __this->ctor_3(bytes);
}

// public BlobLiteral New(byte[] bytes) :1351
void BlobLiteral__New1_fn(uArray* bytes, BlobLiteral** __retval)
{
    *__retval = BlobLiteral::New1(bytes);
}

// public static new Outracks.Simulator.Bytecode.BlobLiteral Read(Uno.IO.BinaryReader reader) :1367
void BlobLiteral__Read3_fn(::g::Uno::IO::BinaryReader* reader, BlobLiteral** __retval)
{
    *__retval = BlobLiteral::Read3(reader);
}

// public override sealed string ToString() :1356
void BlobLiteral__ToString_fn(BlobLiteral* __this, uString** __retval)
{
    return *__retval = ::g::Uno::String::op_Addition2(::g::Uno::String::op_Addition1(::STRINGS[4/*"new byte["*/], uBox<int>(::TYPES[142/*int*/], uPtr(__this->Bytes)->Length())), ::STRINGS[5/*"]"*/]), void();
}

// public static void Write(Outracks.Simulator.Bytecode.BlobLiteral blob, Uno.IO.BinaryWriter writer) :1361
void BlobLiteral__Write3_fn(BlobLiteral* blob, ::g::Uno::IO::BinaryWriter* writer)
{
    BlobLiteral::Write3(blob, writer);
}

// public BlobLiteral(byte[] bytes) [instance] :1351
void BlobLiteral::ctor_3(uArray* bytes)
{
    ctor_2();
    Bytes = bytes;
}

// public BlobLiteral New(byte[] bytes) [static] :1351
BlobLiteral* BlobLiteral::New1(uArray* bytes)
{
    BlobLiteral* obj1 = (BlobLiteral*)uNew(BlobLiteral_typeof());
    obj1->ctor_3(bytes);
    return obj1;
}

// public static new Outracks.Simulator.Bytecode.BlobLiteral Read(Uno.IO.BinaryReader reader) [static] :1367
BlobLiteral* BlobLiteral::Read3(::g::Uno::IO::BinaryReader* reader)
{
    int length = uPtr(reader)->ReadInt();
    uArray* bytes = reader->ReadBytes(length);
    return BlobLiteral::New1(bytes);
}

// public static void Write(Outracks.Simulator.Bytecode.BlobLiteral blob, Uno.IO.BinaryWriter writer) [static] :1361
void BlobLiteral::Write3(BlobLiteral* blob, ::g::Uno::IO::BinaryWriter* writer)
{
    uPtr(writer)->Write13(uPtr(uPtr(blob)->Bytes)->Length());
    writer->Write2(blob->Bytes);
}
// }

// C:\ProgramData\Uno\Packages\Outracks.Simulator.Protocol.Uno\0.1.0\Bytecode\$.uno(1375)
// --------------------------------------------------------------------------------------

// public sealed class BooleanLiteral :1375
// {
uType* BooleanLiteral_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 1;
    options.ObjectSize = sizeof(BooleanLiteral);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Outracks.Simulator.Bytecode.BooleanLiteral", options);
    type->SetBase(::g::Outracks::Simulator::Bytecode::Literal_typeof());
    type->fp_ToString = (void(*)(uObject*, uString**))BooleanLiteral__ToString_fn;
    ::TYPES[11] = ::g::Uno::Bool_typeof();
    type->SetFields(0,
        ::g::Uno::Bool_typeof(), offsetof(::g::Outracks::Simulator::Bytecode::BooleanLiteral, BooleanValue), 0);
    type->Reflection.SetFields(1,
        new uField("BooleanValue", 0));
    type->Reflection.SetFunctions(3,
        new uFunction(".ctor", NULL, (void*)BooleanLiteral__New1_fn, 0, true, BooleanLiteral_typeof(), 1, ::g::Uno::Bool_typeof()),
        new uFunction("Read", NULL, (void*)BooleanLiteral__Read3_fn, 0, true, BooleanLiteral_typeof(), 1, ::g::Uno::IO::BinaryReader_typeof()),
        new uFunction("Write", NULL, (void*)BooleanLiteral__Write3_fn, 0, true, uVoid_typeof(), 2, BooleanLiteral_typeof(), ::g::Uno::IO::BinaryWriter_typeof()));
    return type;
}

// public BooleanLiteral(bool booleanValue) :1379
void BooleanLiteral__ctor_3_fn(BooleanLiteral* __this, bool* booleanValue)
{
    __this->ctor_3(*booleanValue);
}

// public BooleanLiteral New(bool booleanValue) :1379
void BooleanLiteral__New1_fn(bool* booleanValue, BooleanLiteral** __retval)
{
    *__retval = BooleanLiteral::New1(*booleanValue);
}

// public static new Outracks.Simulator.Bytecode.BooleanLiteral Read(Uno.IO.BinaryReader reader) :1394
void BooleanLiteral__Read3_fn(::g::Uno::IO::BinaryReader* reader, BooleanLiteral** __retval)
{
    *__retval = BooleanLiteral::Read3(reader);
}

// public override sealed string ToString() :1384
void BooleanLiteral__ToString_fn(BooleanLiteral* __this, uString** __retval)
{
    bool ind1;
    return *__retval = ::g::Uno::Bool::ToString((ind1 = __this->BooleanValue, ind1), ::TYPES[11/*bool*/]), void();
}

// public static void Write(Outracks.Simulator.Bytecode.BooleanLiteral l, Uno.IO.BinaryWriter writer) :1389
void BooleanLiteral__Write3_fn(BooleanLiteral* l, ::g::Uno::IO::BinaryWriter* writer)
{
    BooleanLiteral::Write3(l, writer);
}

// public BooleanLiteral(bool booleanValue) [instance] :1379
void BooleanLiteral::ctor_3(bool booleanValue)
{
    ctor_2();
    BooleanValue = booleanValue;
}

// public BooleanLiteral New(bool booleanValue) [static] :1379
BooleanLiteral* BooleanLiteral::New1(bool booleanValue)
{
    BooleanLiteral* obj2 = (BooleanLiteral*)uNew(BooleanLiteral_typeof());
    obj2->ctor_3(booleanValue);
    return obj2;
}

// public static new Outracks.Simulator.Bytecode.BooleanLiteral Read(Uno.IO.BinaryReader reader) [static] :1394
BooleanLiteral* BooleanLiteral::Read3(::g::Uno::IO::BinaryReader* reader)
{
    return BooleanLiteral::New1(uPtr(reader)->ReadBoolean());
}

// public static void Write(Outracks.Simulator.Bytecode.BooleanLiteral l, Uno.IO.BinaryWriter writer) [static] :1389
void BooleanLiteral::Write3(BooleanLiteral* l, ::g::Uno::IO::BinaryWriter* writer)
{
    uPtr(writer)->Write(uPtr(l)->BooleanValue);
}
// }

// C:\ProgramData\Uno\Packages\Outracks.Simulator.Protocol.Uno\0.1.0\Bytecode\$.uno(456)
// -------------------------------------------------------------------------------------

// public sealed class CallDynamicMethod :456
// {
uType* CallDynamicMethod_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 3;
    options.ObjectSize = sizeof(CallDynamicMethod);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Outracks.Simulator.Bytecode.CallDynamicMethod", options);
    type->SetBase(::g::Outracks::Simulator::Bytecode::Expression_typeof());
    type->fp_ToString = (void(*)(uObject*, uString**))CallDynamicMethod__ToString_fn;
    ::STRINGS[0] = uString::Const(".");
    ::STRINGS[6] = uString::Const("(");
    ::STRINGS[7] = uString::Const(", ");
    ::STRINGS[8] = uString::Const(")");
    ::TYPES[12] = ::g::Outracks::Simulator::List_typeof()->MakeMethod(1, ::g::Outracks::Simulator::Bytecode::Expression_typeof());
    ::TYPES[13] = ::g::Uno::Collections::IEnumerable_typeof()->MakeType(::g::Outracks::Simulator::Bytecode::Expression_typeof());
    ::TYPES[14] = ::g::Uno::Runtime::Implementation::Internal::ArrayEnumerable_typeof()->MakeType(::g::Outracks::Simulator::Bytecode::Expression_typeof());
    ::TYPES[0] = ::g::Uno::Func1_typeof()->MakeType(::g::Uno::IO::BinaryReader_typeof(), ::g::Outracks::Simulator::Bytecode::Expression_typeof());
    ::TYPES[1] = ::g::Outracks::Simulator::Bytecode::Expression_typeof();
    ::TYPES[15] = ::g::Outracks::Simulator::List_typeof()->MakeMethod(1, ::g::Outracks::Simulator::Bytecode::Expression_typeof());
    ::TYPES[2] = uObject_typeof();
    ::TYPES[3] = ::g::Outracks::Simulator::Bytecode::TypeMemberName_typeof();
    ::TYPES[16] = ::g::Outracks::Simulator::StringSplitting_typeof()->MakeMethod(1, ::g::Outracks::Simulator::Bytecode::Expression_typeof());
    ::TYPES[4] = ::g::Uno::Action2_typeof()->MakeType(::g::Outracks::Simulator::Bytecode::Expression_typeof(), ::g::Uno::IO::BinaryWriter_typeof());
    ::TYPES[17] = ::g::Outracks::Simulator::List_typeof()->MakeMethod(1, ::g::Outracks::Simulator::Bytecode::Expression_typeof());
    type->SetFields(0,
        ::g::Outracks::Simulator::ImmutableList_typeof()->MakeType(::g::Outracks::Simulator::Bytecode::Expression_typeof()), offsetof(::g::Outracks::Simulator::Bytecode::CallDynamicMethod, Arguments), 0,
        ::g::Outracks::Simulator::Bytecode::TypeMemberName_typeof(), offsetof(::g::Outracks::Simulator::Bytecode::CallDynamicMethod, Method), 0,
        ::g::Outracks::Simulator::Bytecode::Expression_typeof(), offsetof(::g::Outracks::Simulator::Bytecode::CallDynamicMethod, Object), 0);
    type->Reflection.SetFields(3,
        new uField("Arguments", 0),
        new uField("Method", 1),
        new uField("Object", 2));
    type->Reflection.SetFunctions(5,
        new uFunction(".ctor", NULL, (void*)CallDynamicMethod__New1_fn, 0, true, CallDynamicMethod_typeof(), 3, ::g::Outracks::Simulator::Bytecode::Expression_typeof(), ::g::Outracks::Simulator::Bytecode::TypeMemberName_typeof(), ::g::Outracks::Simulator::Bytecode::Expression_typeof()->Array()),
        new uFunction(".ctor", NULL, (void*)CallDynamicMethod__New2_fn, 0, true, CallDynamicMethod_typeof(), 3, ::g::Outracks::Simulator::Bytecode::Expression_typeof(), ::g::Outracks::Simulator::Bytecode::TypeMemberName_typeof(), ::g::Outracks::Simulator::ImmutableList_typeof()->MakeType(::g::Outracks::Simulator::Bytecode::Expression_typeof())),
        new uFunction("Read", NULL, (void*)CallDynamicMethod__Read2_fn, 0, true, CallDynamicMethod_typeof(), 1, ::g::Uno::IO::BinaryReader_typeof()),
        new uFunction("Write", NULL, (void*)CallDynamicMethod__Write2_fn, 0, true, uVoid_typeof(), 2, CallDynamicMethod_typeof(), ::g::Uno::IO::BinaryWriter_typeof()),
        new uFunction("Write", NULL, (void*)CallDynamicMethod__Write3_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::IO::BinaryWriter_typeof()));
    return type;
}

// public CallDynamicMethod(Outracks.Simulator.Bytecode.Expression o, Outracks.Simulator.Bytecode.TypeMemberName method, Outracks.Simulator.Bytecode.Expression[] arguments) :462
void CallDynamicMethod__ctor_2_fn(CallDynamicMethod* __this, ::g::Outracks::Simulator::Bytecode::Expression* o, ::g::Outracks::Simulator::Bytecode::TypeMemberName* method, uArray* arguments)
{
    __this->ctor_2(o, method, arguments);
}

// public CallDynamicMethod(Outracks.Simulator.Bytecode.Expression o, Outracks.Simulator.Bytecode.TypeMemberName method, Outracks.Simulator.ImmutableList<Outracks.Simulator.Bytecode.Expression> arguments) :466
void CallDynamicMethod__ctor_3_fn(CallDynamicMethod* __this, ::g::Outracks::Simulator::Bytecode::Expression* o, ::g::Outracks::Simulator::Bytecode::TypeMemberName* method, ::g::Outracks::Simulator::ImmutableList* arguments)
{
    __this->ctor_3(o, method, arguments);
}

// public CallDynamicMethod New(Outracks.Simulator.Bytecode.Expression o, Outracks.Simulator.Bytecode.TypeMemberName method, Outracks.Simulator.Bytecode.Expression[] arguments) :462
void CallDynamicMethod__New1_fn(::g::Outracks::Simulator::Bytecode::Expression* o, ::g::Outracks::Simulator::Bytecode::TypeMemberName* method, uArray* arguments, CallDynamicMethod** __retval)
{
    *__retval = CallDynamicMethod::New1(o, method, arguments);
}

// public CallDynamicMethod New(Outracks.Simulator.Bytecode.Expression o, Outracks.Simulator.Bytecode.TypeMemberName method, Outracks.Simulator.ImmutableList<Outracks.Simulator.Bytecode.Expression> arguments) :466
void CallDynamicMethod__New2_fn(::g::Outracks::Simulator::Bytecode::Expression* o, ::g::Outracks::Simulator::Bytecode::TypeMemberName* method, ::g::Outracks::Simulator::ImmutableList* arguments, CallDynamicMethod** __retval)
{
    *__retval = CallDynamicMethod::New2(o, method, arguments);
}

// public static new Outracks.Simulator.Bytecode.CallDynamicMethod Read(Uno.IO.BinaryReader reader) :490
void CallDynamicMethod__Read2_fn(::g::Uno::IO::BinaryReader* reader, CallDynamicMethod** __retval)
{
    *__retval = CallDynamicMethod::Read2(reader);
}

// public override sealed string ToString() :473
void CallDynamicMethod__ToString_fn(CallDynamicMethod* __this, uString** __retval)
{
    return *__retval = ::g::Uno::String::op_Addition2(::g::Uno::String::op_Addition2(::g::Uno::String::op_Addition2(::g::Uno::String::op_Addition2(::g::Uno::String::op_Addition(__this->Object, ::STRINGS[0/*"."*/]), uPtr(__this->Method)->Name), ::STRINGS[6/*"("*/]), ::g::Outracks::Simulator::StringSplitting::JoinToString(::TYPES[16/*Outracks.Simulator.StringSplitting.JoinToString<Outracks.Simulator.Bytecode.Expression>*/], (uObject*)__this->Arguments, ::STRINGS[7/*", "*/])), ::STRINGS[8/*")"*/]), void();
}

// public static new void Write(Outracks.Simulator.Bytecode.CallDynamicMethod o, Uno.IO.BinaryWriter writer) :478
void CallDynamicMethod__Write2_fn(CallDynamicMethod* o, ::g::Uno::IO::BinaryWriter* writer)
{
    CallDynamicMethod::Write2(o, writer);
}

// public new void Write(Uno.IO.BinaryWriter writer) :483
void CallDynamicMethod__Write3_fn(CallDynamicMethod* __this, ::g::Uno::IO::BinaryWriter* writer)
{
    __this->Write3(writer);
}

// public CallDynamicMethod(Outracks.Simulator.Bytecode.Expression o, Outracks.Simulator.Bytecode.TypeMemberName method, Outracks.Simulator.Bytecode.Expression[] arguments) [instance] :462
void CallDynamicMethod::ctor_2(::g::Outracks::Simulator::Bytecode::Expression* o, ::g::Outracks::Simulator::Bytecode::TypeMemberName* method, uArray* arguments)
{
    ctor_3(o, method, (::g::Outracks::Simulator::ImmutableList*)::g::Outracks::Simulator::List::ToImmutableList(::TYPES[12/*Outracks.Simulator.List.ToImmutableList<Outracks.Simulator.Bytecode.Expression>*/], (uObject*)((::g::Uno::Runtime::Implementation::Internal::ArrayEnumerable*)::g::Uno::Runtime::Implementation::Internal::ArrayEnumerable::New1(::TYPES[14/*Uno.Runtime.Implementation.Internal.ArrayEnumerable<Outracks.Simulator.Bytecode.Expression>*/], arguments))));
}

// public CallDynamicMethod(Outracks.Simulator.Bytecode.Expression o, Outracks.Simulator.Bytecode.TypeMemberName method, Outracks.Simulator.ImmutableList<Outracks.Simulator.Bytecode.Expression> arguments) [instance] :466
void CallDynamicMethod::ctor_3(::g::Outracks::Simulator::Bytecode::Expression* o, ::g::Outracks::Simulator::Bytecode::TypeMemberName* method, ::g::Outracks::Simulator::ImmutableList* arguments)
{
    ctor_1();
    Object = o;
    Method = method;
    Arguments = arguments;
}

// public new void Write(Uno.IO.BinaryWriter writer) [instance] :483
void CallDynamicMethod::Write3(::g::Uno::IO::BinaryWriter* writer)
{
    uPtr(::g::Outracks::Simulator::Bytecode::Expression::Write1())->Invoke(2, (::g::Outracks::Simulator::Bytecode::Expression*)Object, writer);
    ::g::Outracks::Simulator::Bytecode::TypeMemberName::Write(Method, writer);
    ::g::Outracks::Simulator::List::Write1(::TYPES[17/*Outracks.Simulator.List.Write<Outracks.Simulator.Bytecode.Expression>*/], writer, Arguments, ::g::Outracks::Simulator::Bytecode::Expression::Write1());
}

// public CallDynamicMethod New(Outracks.Simulator.Bytecode.Expression o, Outracks.Simulator.Bytecode.TypeMemberName method, Outracks.Simulator.Bytecode.Expression[] arguments) [static] :462
CallDynamicMethod* CallDynamicMethod::New1(::g::Outracks::Simulator::Bytecode::Expression* o, ::g::Outracks::Simulator::Bytecode::TypeMemberName* method, uArray* arguments)
{
    CallDynamicMethod* obj1 = (CallDynamicMethod*)uNew(CallDynamicMethod_typeof());
    obj1->ctor_2(o, method, arguments);
    return obj1;
}

// public CallDynamicMethod New(Outracks.Simulator.Bytecode.Expression o, Outracks.Simulator.Bytecode.TypeMemberName method, Outracks.Simulator.ImmutableList<Outracks.Simulator.Bytecode.Expression> arguments) [static] :466
CallDynamicMethod* CallDynamicMethod::New2(::g::Outracks::Simulator::Bytecode::Expression* o, ::g::Outracks::Simulator::Bytecode::TypeMemberName* method, ::g::Outracks::Simulator::ImmutableList* arguments)
{
    CallDynamicMethod* obj2 = (CallDynamicMethod*)uNew(CallDynamicMethod_typeof());
    obj2->ctor_3(o, method, arguments);
    return obj2;
}

// public static new Outracks.Simulator.Bytecode.CallDynamicMethod Read(Uno.IO.BinaryReader reader) [static] :490
CallDynamicMethod* CallDynamicMethod::Read2(::g::Uno::IO::BinaryReader* reader)
{
    ::g::Outracks::Simulator::Bytecode::Expression* _Object = (::g::Outracks::Simulator::Bytecode::Expression*)uPtr(::g::Outracks::Simulator::Bytecode::Expression::Read1())->Invoke(1, reader);
    ::g::Outracks::Simulator::Bytecode::TypeMemberName* _Method = ::g::Outracks::Simulator::Bytecode::TypeMemberName::Read(reader);
    ::g::Outracks::Simulator::ImmutableList* _Arguments = (::g::Outracks::Simulator::ImmutableList*)::g::Outracks::Simulator::List::Read(::TYPES[15/*Outracks.Simulator.List.Read<Outracks.Simulator.Bytecode.Expression>*/], reader, ::g::Outracks::Simulator::Bytecode::Expression::Read1());
    return CallDynamicMethod::New2(_Object, _Method, _Arguments);
}

// public static new void Write(Outracks.Simulator.Bytecode.CallDynamicMethod o, Uno.IO.BinaryWriter writer) [static] :478
void CallDynamicMethod::Write2(CallDynamicMethod* o, ::g::Uno::IO::BinaryWriter* writer)
{
    uPtr(o)->Write3(writer);
}
// }

// C:\ProgramData\Uno\Packages\Outracks.Simulator.Protocol.Uno\0.1.0\Bytecode\$.uno(379)
// -------------------------------------------------------------------------------------

// public sealed class CallLambda :379
// {
uType* CallLambda_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 2;
    options.ObjectSize = sizeof(CallLambda);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Outracks.Simulator.Bytecode.CallLambda", options);
    type->SetBase(::g::Outracks::Simulator::Bytecode::Expression_typeof());
    type->fp_ToString = (void(*)(uObject*, uString**))CallLambda__ToString_fn;
    ::STRINGS[6] = uString::Const("(");
    ::STRINGS[7] = uString::Const(", ");
    ::STRINGS[8] = uString::Const(")");
    ::TYPES[12] = ::g::Outracks::Simulator::List_typeof()->MakeMethod(1, ::g::Outracks::Simulator::Bytecode::Expression_typeof());
    ::TYPES[13] = ::g::Uno::Collections::IEnumerable_typeof()->MakeType(::g::Outracks::Simulator::Bytecode::Expression_typeof());
    ::TYPES[14] = ::g::Uno::Runtime::Implementation::Internal::ArrayEnumerable_typeof()->MakeType(::g::Outracks::Simulator::Bytecode::Expression_typeof());
    ::TYPES[0] = ::g::Uno::Func1_typeof()->MakeType(::g::Uno::IO::BinaryReader_typeof(), ::g::Outracks::Simulator::Bytecode::Expression_typeof());
    ::TYPES[1] = ::g::Outracks::Simulator::Bytecode::Expression_typeof();
    ::TYPES[15] = ::g::Outracks::Simulator::List_typeof()->MakeMethod(1, ::g::Outracks::Simulator::Bytecode::Expression_typeof());
    ::TYPES[2] = uObject_typeof();
    ::TYPES[16] = ::g::Outracks::Simulator::StringSplitting_typeof()->MakeMethod(1, ::g::Outracks::Simulator::Bytecode::Expression_typeof());
    ::TYPES[4] = ::g::Uno::Action2_typeof()->MakeType(::g::Outracks::Simulator::Bytecode::Expression_typeof(), ::g::Uno::IO::BinaryWriter_typeof());
    ::TYPES[17] = ::g::Outracks::Simulator::List_typeof()->MakeMethod(1, ::g::Outracks::Simulator::Bytecode::Expression_typeof());
    type->SetFields(0,
        ::g::Outracks::Simulator::ImmutableList_typeof()->MakeType(::g::Outracks::Simulator::Bytecode::Expression_typeof()), offsetof(::g::Outracks::Simulator::Bytecode::CallLambda, Arguments), 0,
        ::g::Outracks::Simulator::Bytecode::Expression_typeof(), offsetof(::g::Outracks::Simulator::Bytecode::CallLambda, Lambda), 0);
    type->Reflection.SetFields(2,
        new uField("Arguments", 0),
        new uField("Lambda", 1));
    type->Reflection.SetFunctions(4,
        new uFunction(".ctor", NULL, (void*)CallLambda__New1_fn, 0, true, CallLambda_typeof(), 2, ::g::Outracks::Simulator::Bytecode::Expression_typeof(), ::g::Outracks::Simulator::Bytecode::Expression_typeof()->Array()),
        new uFunction(".ctor", NULL, (void*)CallLambda__New2_fn, 0, true, CallLambda_typeof(), 2, ::g::Outracks::Simulator::Bytecode::Expression_typeof(), ::g::Outracks::Simulator::ImmutableList_typeof()->MakeType(::g::Outracks::Simulator::Bytecode::Expression_typeof())),
        new uFunction("Read", NULL, (void*)CallLambda__Read2_fn, 0, true, CallLambda_typeof(), 1, ::g::Uno::IO::BinaryReader_typeof()),
        new uFunction("Write", NULL, (void*)CallLambda__Write2_fn, 0, true, uVoid_typeof(), 2, CallLambda_typeof(), ::g::Uno::IO::BinaryWriter_typeof()));
    return type;
}

// public CallLambda(Outracks.Simulator.Bytecode.Expression lambda, Outracks.Simulator.Bytecode.Expression[] arguments) :384
void CallLambda__ctor_2_fn(CallLambda* __this, ::g::Outracks::Simulator::Bytecode::Expression* lambda, uArray* arguments)
{
    __this->ctor_2(lambda, arguments);
}

// public CallLambda(Outracks.Simulator.Bytecode.Expression lanbda, Outracks.Simulator.ImmutableList<Outracks.Simulator.Bytecode.Expression> arguments) :388
void CallLambda__ctor_3_fn(CallLambda* __this, ::g::Outracks::Simulator::Bytecode::Expression* lanbda, ::g::Outracks::Simulator::ImmutableList* arguments)
{
    __this->ctor_3(lanbda, arguments);
}

// public CallLambda New(Outracks.Simulator.Bytecode.Expression lambda, Outracks.Simulator.Bytecode.Expression[] arguments) :384
void CallLambda__New1_fn(::g::Outracks::Simulator::Bytecode::Expression* lambda, uArray* arguments, CallLambda** __retval)
{
    *__retval = CallLambda::New1(lambda, arguments);
}

// public CallLambda New(Outracks.Simulator.Bytecode.Expression lanbda, Outracks.Simulator.ImmutableList<Outracks.Simulator.Bytecode.Expression> arguments) :388
void CallLambda__New2_fn(::g::Outracks::Simulator::Bytecode::Expression* lanbda, ::g::Outracks::Simulator::ImmutableList* arguments, CallLambda** __retval)
{
    *__retval = CallLambda::New2(lanbda, arguments);
}

// public static new Outracks.Simulator.Bytecode.CallLambda Read(Uno.IO.BinaryReader reader) :405
void CallLambda__Read2_fn(::g::Uno::IO::BinaryReader* reader, CallLambda** __retval)
{
    *__retval = CallLambda::Read2(reader);
}

// public override sealed string ToString() :394
void CallLambda__ToString_fn(CallLambda* __this, uString** __retval)
{
    return *__retval = ::g::Uno::String::op_Addition2(::g::Uno::String::op_Addition2(::g::Uno::String::op_Addition(__this->Lambda, ::STRINGS[6/*"("*/]), ::g::Outracks::Simulator::StringSplitting::JoinToString(::TYPES[16/*Outracks.Simulator.StringSplitting.JoinToString<Outracks.Simulator.Bytecode.Expression>*/], (uObject*)__this->Arguments, ::STRINGS[7/*", "*/])), ::STRINGS[8/*")"*/]), void();
}

// public static new void Write(Outracks.Simulator.Bytecode.CallLambda o, Uno.IO.BinaryWriter writer) :399
void CallLambda__Write2_fn(CallLambda* o, ::g::Uno::IO::BinaryWriter* writer)
{
    CallLambda::Write2(o, writer);
}

// public CallLambda(Outracks.Simulator.Bytecode.Expression lambda, Outracks.Simulator.Bytecode.Expression[] arguments) [instance] :384
void CallLambda::ctor_2(::g::Outracks::Simulator::Bytecode::Expression* lambda, uArray* arguments)
{
    ctor_3(lambda, (::g::Outracks::Simulator::ImmutableList*)::g::Outracks::Simulator::List::ToImmutableList(::TYPES[12/*Outracks.Simulator.List.ToImmutableList<Outracks.Simulator.Bytecode.Expression>*/], (uObject*)((::g::Uno::Runtime::Implementation::Internal::ArrayEnumerable*)::g::Uno::Runtime::Implementation::Internal::ArrayEnumerable::New1(::TYPES[14/*Uno.Runtime.Implementation.Internal.ArrayEnumerable<Outracks.Simulator.Bytecode.Expression>*/], arguments))));
}

// public CallLambda(Outracks.Simulator.Bytecode.Expression lanbda, Outracks.Simulator.ImmutableList<Outracks.Simulator.Bytecode.Expression> arguments) [instance] :388
void CallLambda::ctor_3(::g::Outracks::Simulator::Bytecode::Expression* lanbda, ::g::Outracks::Simulator::ImmutableList* arguments)
{
    ctor_1();
    Lambda = lanbda;
    Arguments = arguments;
}

// public CallLambda New(Outracks.Simulator.Bytecode.Expression lambda, Outracks.Simulator.Bytecode.Expression[] arguments) [static] :384
CallLambda* CallLambda::New1(::g::Outracks::Simulator::Bytecode::Expression* lambda, uArray* arguments)
{
    CallLambda* obj1 = (CallLambda*)uNew(CallLambda_typeof());
    obj1->ctor_2(lambda, arguments);
    return obj1;
}

// public CallLambda New(Outracks.Simulator.Bytecode.Expression lanbda, Outracks.Simulator.ImmutableList<Outracks.Simulator.Bytecode.Expression> arguments) [static] :388
CallLambda* CallLambda::New2(::g::Outracks::Simulator::Bytecode::Expression* lanbda, ::g::Outracks::Simulator::ImmutableList* arguments)
{
    CallLambda* obj2 = (CallLambda*)uNew(CallLambda_typeof());
    obj2->ctor_3(lanbda, arguments);
    return obj2;
}

// public static new Outracks.Simulator.Bytecode.CallLambda Read(Uno.IO.BinaryReader reader) [static] :405
CallLambda* CallLambda::Read2(::g::Uno::IO::BinaryReader* reader)
{
    ::g::Outracks::Simulator::Bytecode::Expression* lambda = (::g::Outracks::Simulator::Bytecode::Expression*)uPtr(::g::Outracks::Simulator::Bytecode::Expression::Read1())->Invoke(1, reader);
    ::g::Outracks::Simulator::ImmutableList* arguments = (::g::Outracks::Simulator::ImmutableList*)::g::Outracks::Simulator::List::Read(::TYPES[15/*Outracks.Simulator.List.Read<Outracks.Simulator.Bytecode.Expression>*/], reader, ::g::Outracks::Simulator::Bytecode::Expression::Read1());
    return CallLambda::New2(lambda, arguments);
}

// public static new void Write(Outracks.Simulator.Bytecode.CallLambda o, Uno.IO.BinaryWriter writer) [static] :399
void CallLambda::Write2(CallLambda* o, ::g::Uno::IO::BinaryWriter* writer)
{
    uPtr(::g::Outracks::Simulator::Bytecode::Expression::Write1())->Invoke(2, (::g::Outracks::Simulator::Bytecode::Expression*)uPtr(o)->Lambda, writer);
    ::g::Outracks::Simulator::List::Write1(::TYPES[17/*Outracks.Simulator.List.Write<Outracks.Simulator.Bytecode.Expression>*/], writer, o->Arguments, ::g::Outracks::Simulator::Bytecode::Expression::Write1());
}
// }

// C:\ProgramData\Uno\Packages\Outracks.Simulator.Protocol.Uno\0.1.0\Bytecode\$.uno(415)
// -------------------------------------------------------------------------------------

// public sealed class CallStaticMethod :415
// {
uType* CallStaticMethod_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 2;
    options.ObjectSize = sizeof(CallStaticMethod);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Outracks.Simulator.Bytecode.CallStaticMethod", options);
    type->SetBase(::g::Outracks::Simulator::Bytecode::Expression_typeof());
    type->fp_ToString = (void(*)(uObject*, uString**))CallStaticMethod__ToString_fn;
    ::STRINGS[6] = uString::Const("(");
    ::STRINGS[7] = uString::Const(", ");
    ::STRINGS[8] = uString::Const(")");
    ::TYPES[12] = ::g::Outracks::Simulator::List_typeof()->MakeMethod(1, ::g::Outracks::Simulator::Bytecode::Expression_typeof());
    ::TYPES[13] = ::g::Uno::Collections::IEnumerable_typeof()->MakeType(::g::Outracks::Simulator::Bytecode::Expression_typeof());
    ::TYPES[14] = ::g::Uno::Runtime::Implementation::Internal::ArrayEnumerable_typeof()->MakeType(::g::Outracks::Simulator::Bytecode::Expression_typeof());
    ::TYPES[15] = ::g::Outracks::Simulator::List_typeof()->MakeMethod(1, ::g::Outracks::Simulator::Bytecode::Expression_typeof());
    ::TYPES[1] = ::g::Outracks::Simulator::Bytecode::Expression_typeof();
    ::TYPES[2] = uObject_typeof();
    ::TYPES[16] = ::g::Outracks::Simulator::StringSplitting_typeof()->MakeMethod(1, ::g::Outracks::Simulator::Bytecode::Expression_typeof());
    ::TYPES[17] = ::g::Outracks::Simulator::List_typeof()->MakeMethod(1, ::g::Outracks::Simulator::Bytecode::Expression_typeof());
    type->SetFields(0,
        ::g::Outracks::Simulator::ImmutableList_typeof()->MakeType(::g::Outracks::Simulator::Bytecode::Expression_typeof()), offsetof(::g::Outracks::Simulator::Bytecode::CallStaticMethod, Arguments), 0,
        ::g::Outracks::Simulator::Bytecode::StaticMemberName_typeof(), offsetof(::g::Outracks::Simulator::Bytecode::CallStaticMethod, StaticMethod), 0);
    type->Reflection.SetFields(2,
        new uField("Arguments", 0),
        new uField("StaticMethod", 1));
    type->Reflection.SetFunctions(5,
        new uFunction(".ctor", NULL, (void*)CallStaticMethod__New1_fn, 0, true, CallStaticMethod_typeof(), 2, ::g::Outracks::Simulator::Bytecode::StaticMemberName_typeof(), ::g::Outracks::Simulator::Bytecode::Expression_typeof()->Array()),
        new uFunction(".ctor", NULL, (void*)CallStaticMethod__New2_fn, 0, true, CallStaticMethod_typeof(), 2, ::g::Outracks::Simulator::Bytecode::StaticMemberName_typeof(), ::g::Outracks::Simulator::ImmutableList_typeof()->MakeType(::g::Outracks::Simulator::Bytecode::Expression_typeof())),
        new uFunction("Read", NULL, (void*)CallStaticMethod__Read2_fn, 0, true, CallStaticMethod_typeof(), 1, ::g::Uno::IO::BinaryReader_typeof()),
        new uFunction("Write", NULL, (void*)CallStaticMethod__Write2_fn, 0, true, uVoid_typeof(), 2, CallStaticMethod_typeof(), ::g::Uno::IO::BinaryWriter_typeof()),
        new uFunction("Write", NULL, (void*)CallStaticMethod__Write3_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::IO::BinaryWriter_typeof()));
    return type;
}

// public CallStaticMethod(Outracks.Simulator.Bytecode.StaticMemberName staticMethod, Outracks.Simulator.Bytecode.Expression[] arguments) :420
void CallStaticMethod__ctor_2_fn(CallStaticMethod* __this, ::g::Outracks::Simulator::Bytecode::StaticMemberName* staticMethod, uArray* arguments)
{
    __this->ctor_2(staticMethod, arguments);
}

// public CallStaticMethod(Outracks.Simulator.Bytecode.StaticMemberName staticMethod, Outracks.Simulator.ImmutableList<Outracks.Simulator.Bytecode.Expression> arguments) :424
void CallStaticMethod__ctor_3_fn(CallStaticMethod* __this, ::g::Outracks::Simulator::Bytecode::StaticMemberName* staticMethod, ::g::Outracks::Simulator::ImmutableList* arguments)
{
    __this->ctor_3(staticMethod, arguments);
}

// public CallStaticMethod New(Outracks.Simulator.Bytecode.StaticMemberName staticMethod, Outracks.Simulator.Bytecode.Expression[] arguments) :420
void CallStaticMethod__New1_fn(::g::Outracks::Simulator::Bytecode::StaticMemberName* staticMethod, uArray* arguments, CallStaticMethod** __retval)
{
    *__retval = CallStaticMethod::New1(staticMethod, arguments);
}

// public CallStaticMethod New(Outracks.Simulator.Bytecode.StaticMemberName staticMethod, Outracks.Simulator.ImmutableList<Outracks.Simulator.Bytecode.Expression> arguments) :424
void CallStaticMethod__New2_fn(::g::Outracks::Simulator::Bytecode::StaticMemberName* staticMethod, ::g::Outracks::Simulator::ImmutableList* arguments, CallStaticMethod** __retval)
{
    *__retval = CallStaticMethod::New2(staticMethod, arguments);
}

// public static new Outracks.Simulator.Bytecode.CallStaticMethod Read(Uno.IO.BinaryReader reader) :446
void CallStaticMethod__Read2_fn(::g::Uno::IO::BinaryReader* reader, CallStaticMethod** __retval)
{
    *__retval = CallStaticMethod::Read2(reader);
}

// public override sealed string ToString() :430
void CallStaticMethod__ToString_fn(CallStaticMethod* __this, uString** __retval)
{
    return *__retval = ::g::Uno::String::op_Addition2(::g::Uno::String::op_Addition2(::g::Uno::String::op_Addition(__this->StaticMethod, ::STRINGS[6/*"("*/]), ::g::Outracks::Simulator::StringSplitting::JoinToString(::TYPES[16/*Outracks.Simulator.StringSplitting.JoinToString<Outracks.Simulator.Bytecode.Expression>*/], (uObject*)__this->Arguments, ::STRINGS[7/*", "*/])), ::STRINGS[8/*")"*/]), void();
}

// public static new void Write(Outracks.Simulator.Bytecode.CallStaticMethod o, Uno.IO.BinaryWriter writer) :435
void CallStaticMethod__Write2_fn(CallStaticMethod* o, ::g::Uno::IO::BinaryWriter* writer)
{
    CallStaticMethod::Write2(o, writer);
}

// public new void Write(Uno.IO.BinaryWriter writer) :440
void CallStaticMethod__Write3_fn(CallStaticMethod* __this, ::g::Uno::IO::BinaryWriter* writer)
{
    __this->Write3(writer);
}

// public CallStaticMethod(Outracks.Simulator.Bytecode.StaticMemberName staticMethod, Outracks.Simulator.Bytecode.Expression[] arguments) [instance] :420
void CallStaticMethod::ctor_2(::g::Outracks::Simulator::Bytecode::StaticMemberName* staticMethod, uArray* arguments)
{
    ctor_3(staticMethod, (::g::Outracks::Simulator::ImmutableList*)::g::Outracks::Simulator::List::ToImmutableList(::TYPES[12/*Outracks.Simulator.List.ToImmutableList<Outracks.Simulator.Bytecode.Expression>*/], (uObject*)((::g::Uno::Runtime::Implementation::Internal::ArrayEnumerable*)::g::Uno::Runtime::Implementation::Internal::ArrayEnumerable::New1(::TYPES[14/*Uno.Runtime.Implementation.Internal.ArrayEnumerable<Outracks.Simulator.Bytecode.Expression>*/], arguments))));
}

// public CallStaticMethod(Outracks.Simulator.Bytecode.StaticMemberName staticMethod, Outracks.Simulator.ImmutableList<Outracks.Simulator.Bytecode.Expression> arguments) [instance] :424
void CallStaticMethod::ctor_3(::g::Outracks::Simulator::Bytecode::StaticMemberName* staticMethod, ::g::Outracks::Simulator::ImmutableList* arguments)
{
    ctor_1();
    StaticMethod = staticMethod;
    Arguments = arguments;
}

// public new void Write(Uno.IO.BinaryWriter writer) [instance] :440
void CallStaticMethod::Write3(::g::Uno::IO::BinaryWriter* writer)
{
    ::g::Outracks::Simulator::Bytecode::StaticMemberName::Write(StaticMethod, writer);
    ::g::Outracks::Simulator::List::Write1(::TYPES[17/*Outracks.Simulator.List.Write<Outracks.Simulator.Bytecode.Expression>*/], writer, Arguments, ::g::Outracks::Simulator::Bytecode::Expression::Write1());
}

// public CallStaticMethod New(Outracks.Simulator.Bytecode.StaticMemberName staticMethod, Outracks.Simulator.Bytecode.Expression[] arguments) [static] :420
CallStaticMethod* CallStaticMethod::New1(::g::Outracks::Simulator::Bytecode::StaticMemberName* staticMethod, uArray* arguments)
{
    CallStaticMethod* obj1 = (CallStaticMethod*)uNew(CallStaticMethod_typeof());
    obj1->ctor_2(staticMethod, arguments);
    return obj1;
}

// public CallStaticMethod New(Outracks.Simulator.Bytecode.StaticMemberName staticMethod, Outracks.Simulator.ImmutableList<Outracks.Simulator.Bytecode.Expression> arguments) [static] :424
CallStaticMethod* CallStaticMethod::New2(::g::Outracks::Simulator::Bytecode::StaticMemberName* staticMethod, ::g::Outracks::Simulator::ImmutableList* arguments)
{
    CallStaticMethod* obj2 = (CallStaticMethod*)uNew(CallStaticMethod_typeof());
    obj2->ctor_3(staticMethod, arguments);
    return obj2;
}

// public static new Outracks.Simulator.Bytecode.CallStaticMethod Read(Uno.IO.BinaryReader reader) [static] :446
CallStaticMethod* CallStaticMethod::Read2(::g::Uno::IO::BinaryReader* reader)
{
    ::g::Outracks::Simulator::Bytecode::StaticMemberName* _StaticMethod = ::g::Outracks::Simulator::Bytecode::StaticMemberName::Read(reader);
    ::g::Outracks::Simulator::ImmutableList* _Arguments = (::g::Outracks::Simulator::ImmutableList*)::g::Outracks::Simulator::List::Read(::TYPES[15/*Outracks.Simulator.List.Read<Outracks.Simulator.Bytecode.Expression>*/], reader, ::g::Outracks::Simulator::Bytecode::Expression::Read1());
    return CallStaticMethod::New2(_StaticMethod, _Arguments);
}

// public static new void Write(Outracks.Simulator.Bytecode.CallStaticMethod o, Uno.IO.BinaryWriter writer) [static] :435
void CallStaticMethod::Write2(CallStaticMethod* o, ::g::Uno::IO::BinaryWriter* writer)
{
    uPtr(o)->Write3(writer);
}
// }

// C:\ProgramData\Uno\Packages\Outracks.Simulator.Protocol.Uno\0.1.0\Bytecode\$.uno(1484)
// --------------------------------------------------------------------------------------

// public sealed class EnumLiteral :1484
// {
uType* EnumLiteral_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 1;
    options.ObjectSize = sizeof(EnumLiteral);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Outracks.Simulator.Bytecode.EnumLiteral", options);
    type->SetBase(::g::Outracks::Simulator::Bytecode::Literal_typeof());
    type->fp_ToString = (void(*)(uObject*, uString**))EnumLiteral__ToString_fn;
    type->SetFields(0,
        ::g::Outracks::Simulator::Bytecode::StaticMemberName_typeof(), offsetof(::g::Outracks::Simulator::Bytecode::EnumLiteral, Value), 0);
    type->Reflection.SetFields(1,
        new uField("Value", 0));
    type->Reflection.SetFunctions(3,
        new uFunction(".ctor", NULL, (void*)EnumLiteral__New1_fn, 0, true, EnumLiteral_typeof(), 1, ::g::Outracks::Simulator::Bytecode::StaticMemberName_typeof()),
        new uFunction("Read", NULL, (void*)EnumLiteral__Read3_fn, 0, true, EnumLiteral_typeof(), 1, ::g::Uno::IO::BinaryReader_typeof()),
        new uFunction("Write", NULL, (void*)EnumLiteral__Write3_fn, 0, true, uVoid_typeof(), 2, EnumLiteral_typeof(), ::g::Uno::IO::BinaryWriter_typeof()));
    return type;
}

// public EnumLiteral(Outracks.Simulator.Bytecode.StaticMemberName value) :1488
void EnumLiteral__ctor_3_fn(EnumLiteral* __this, ::g::Outracks::Simulator::Bytecode::StaticMemberName* value)
{
    __this->ctor_3(value);
}

// public EnumLiteral New(Outracks.Simulator.Bytecode.StaticMemberName value) :1488
void EnumLiteral__New1_fn(::g::Outracks::Simulator::Bytecode::StaticMemberName* value, EnumLiteral** __retval)
{
    *__retval = EnumLiteral::New1(value);
}

// public static new Outracks.Simulator.Bytecode.EnumLiteral Read(Uno.IO.BinaryReader reader) :1503
void EnumLiteral__Read3_fn(::g::Uno::IO::BinaryReader* reader, EnumLiteral** __retval)
{
    *__retval = EnumLiteral::Read3(reader);
}

// public override sealed string ToString() :1493
void EnumLiteral__ToString_fn(EnumLiteral* __this, uString** __retval)
{
    return *__retval = uPtr(__this->Value)->ToString(), void();
}

// public static void Write(Outracks.Simulator.Bytecode.EnumLiteral l, Uno.IO.BinaryWriter writer) :1498
void EnumLiteral__Write3_fn(EnumLiteral* l, ::g::Uno::IO::BinaryWriter* writer)
{
    EnumLiteral::Write3(l, writer);
}

// public EnumLiteral(Outracks.Simulator.Bytecode.StaticMemberName value) [instance] :1488
void EnumLiteral::ctor_3(::g::Outracks::Simulator::Bytecode::StaticMemberName* value)
{
    ctor_2();
    Value = value;
}

// public EnumLiteral New(Outracks.Simulator.Bytecode.StaticMemberName value) [static] :1488
EnumLiteral* EnumLiteral::New1(::g::Outracks::Simulator::Bytecode::StaticMemberName* value)
{
    EnumLiteral* obj1 = (EnumLiteral*)uNew(EnumLiteral_typeof());
    obj1->ctor_3(value);
    return obj1;
}

// public static new Outracks.Simulator.Bytecode.EnumLiteral Read(Uno.IO.BinaryReader reader) [static] :1503
EnumLiteral* EnumLiteral::Read3(::g::Uno::IO::BinaryReader* reader)
{
    return EnumLiteral::New1(::g::Outracks::Simulator::Bytecode::StaticMemberName::Read(reader));
}

// public static void Write(Outracks.Simulator.Bytecode.EnumLiteral l, Uno.IO.BinaryWriter writer) [static] :1498
void EnumLiteral::Write3(EnumLiteral* l, ::g::Uno::IO::BinaryWriter* writer)
{
    ::g::Outracks::Simulator::Bytecode::StaticMemberName::Write(uPtr(l)->Value, writer);
}
// }

// C:\ProgramData\Uno\Packages\Outracks.Simulator.Protocol.Uno\0.1.0\Bytecode\$.uno(57)
// ------------------------------------------------------------------------------------

// public abstract class Expression :57
// {
// static Expression() :57
static void Expression__cctor_1_fn(uType* __type)
{
    Expression::Write1_ = uDelegate::New(::TYPES[4/*Uno.Action<Outracks.Simulator.Bytecode.Expression, Uno.IO.BinaryWriter>*/], (void*)Expression___Write1_fn);
    Expression::Read1_ = uDelegate::New(::TYPES[0/*Uno.Func<Uno.IO.BinaryReader, Outracks.Simulator.Bytecode.Expression>*/], (void*)Expression___Read1_fn);
}

uType* Expression_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 2;
    options.MethodTypeCount = 1;
    options.ObjectSize = sizeof(Expression);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Outracks.Simulator.Bytecode.Expression", options);
    type->SetBase(::g::Outracks::Simulator::Bytecode::Statement_typeof());
    type->fp_cctor_ = Expression__cctor_1_fn;
    ::TYPES[4] = ::g::Uno::Action2_typeof()->MakeType(Expression_typeof(), ::g::Uno::IO::BinaryWriter_typeof());
    ::TYPES[0] = ::g::Uno::Func1_typeof()->MakeType(::g::Uno::IO::BinaryReader_typeof(), Expression_typeof());
    ::TYPES[18] = Expression_typeof()->MakeMethod(1, ::g::Uno::Char_typeof());
    ::TYPES[19] = ::g::Outracks::Simulator::Closure_typeof()->MakeMethod(2, ::g::Outracks::Simulator::Bytecode::ReadVariable_typeof(), ::g::Uno::Char_typeof());
    ::TYPES[20] = ::g::Outracks::Simulator::Closure_typeof()->MakeMethod(2, ::g::Outracks::Simulator::Bytecode::Literal_typeof(), ::g::Uno::Char_typeof());
    ::TYPES[21] = ::g::Outracks::Simulator::Closure_typeof()->MakeMethod(2, ::g::Outracks::Simulator::Bytecode::Lambda_typeof(), ::g::Uno::Char_typeof());
    ::TYPES[22] = ::g::Outracks::Simulator::Closure_typeof()->MakeMethod(2, ::g::Outracks::Simulator::Bytecode::MethodGroup_typeof(), ::g::Uno::Char_typeof());
    ::TYPES[23] = ::g::Outracks::Simulator::Closure_typeof()->MakeMethod(2, ::g::Outracks::Simulator::Bytecode::IsType_typeof(), ::g::Uno::Char_typeof());
    ::TYPES[24] = ::g::Outracks::Simulator::Closure_typeof()->MakeMethod(2, ::g::Outracks::Simulator::Bytecode::LogicalOr_typeof(), ::g::Uno::Char_typeof());
    ::TYPES[25] = ::g::Outracks::Simulator::Closure_typeof()->MakeMethod(2, ::g::Outracks::Simulator::Bytecode::Instantiate_typeof(), ::g::Uno::Char_typeof());
    ::TYPES[26] = ::g::Outracks::Simulator::Closure_typeof()->MakeMethod(2, ::g::Outracks::Simulator::Bytecode::CallLambda_typeof(), ::g::Uno::Char_typeof());
    ::TYPES[27] = ::g::Outracks::Simulator::Closure_typeof()->MakeMethod(2, ::g::Outracks::Simulator::Bytecode::CallStaticMethod_typeof(), ::g::Uno::Char_typeof());
    ::TYPES[28] = ::g::Outracks::Simulator::Closure_typeof()->MakeMethod(2, ::g::Outracks::Simulator::Bytecode::CallDynamicMethod_typeof(), ::g::Uno::Char_typeof());
    ::TYPES[29] = ::g::Outracks::Simulator::Closure_typeof()->MakeMethod(2, ::g::Outracks::Simulator::Bytecode::ReadStaticField_typeof(), ::g::Uno::Char_typeof());
    ::TYPES[30] = ::g::Outracks::Simulator::Closure_typeof()->MakeMethod(2, ::g::Outracks::Simulator::Bytecode::ReadProperty_typeof(), ::g::Uno::Char_typeof());
    ::TYPES[31] = ::g::Outracks::Simulator::Closure_typeof()->MakeMethod(2, ::g::Outracks::Simulator::Bytecode::WriteProperty_typeof(), ::g::Uno::Char_typeof());
    ::TYPES[32] = ::g::Outracks::Simulator::Closure_typeof()->MakeMethod(2, ::g::Outracks::Simulator::Bytecode::AddEventHandler_typeof(), ::g::Uno::Char_typeof());
    ::TYPES[33] = ::g::Outracks::Simulator::Closure_typeof()->MakeMethod(2, ::g::Outracks::Simulator::Bytecode::RemoveEventHandler_typeof(), ::g::Uno::Char_typeof());
    ::TYPES[34] = ::g::Outracks::Simulator::Closure_typeof()->MakeMethod(2, ::g::Outracks::Simulator::Bytecode::ReadVariable_typeof(), ::g::Uno::IO::BinaryWriter_typeof());
    ::TYPES[35] = ::g::Uno::Action2_typeof()->MakeType(::g::Outracks::Simulator::Bytecode::ReadVariable_typeof(), ::g::Uno::IO::BinaryWriter_typeof());
    ::TYPES[36] = ::g::Outracks::Simulator::Closure_typeof()->MakeMethod(2, ::g::Outracks::Simulator::Bytecode::Literal_typeof(), ::g::Uno::IO::BinaryWriter_typeof());
    ::TYPES[37] = ::g::Uno::Action2_typeof()->MakeType(::g::Outracks::Simulator::Bytecode::Literal_typeof(), ::g::Uno::IO::BinaryWriter_typeof());
    ::TYPES[38] = ::g::Outracks::Simulator::Closure_typeof()->MakeMethod(2, ::g::Outracks::Simulator::Bytecode::Lambda_typeof(), ::g::Uno::IO::BinaryWriter_typeof());
    ::TYPES[39] = ::g::Uno::Action2_typeof()->MakeType(::g::Outracks::Simulator::Bytecode::Lambda_typeof(), ::g::Uno::IO::BinaryWriter_typeof());
    ::TYPES[40] = ::g::Outracks::Simulator::Closure_typeof()->MakeMethod(2, ::g::Outracks::Simulator::Bytecode::MethodGroup_typeof(), ::g::Uno::IO::BinaryWriter_typeof());
    ::TYPES[41] = ::g::Uno::Action2_typeof()->MakeType(::g::Outracks::Simulator::Bytecode::MethodGroup_typeof(), ::g::Uno::IO::BinaryWriter_typeof());
    ::TYPES[42] = ::g::Outracks::Simulator::Closure_typeof()->MakeMethod(2, ::g::Outracks::Simulator::Bytecode::IsType_typeof(), ::g::Uno::IO::BinaryWriter_typeof());
    ::TYPES[43] = ::g::Uno::Action2_typeof()->MakeType(::g::Outracks::Simulator::Bytecode::IsType_typeof(), ::g::Uno::IO::BinaryWriter_typeof());
    ::TYPES[44] = ::g::Outracks::Simulator::Closure_typeof()->MakeMethod(2, ::g::Outracks::Simulator::Bytecode::LogicalOr_typeof(), ::g::Uno::IO::BinaryWriter_typeof());
    ::TYPES[45] = ::g::Uno::Action2_typeof()->MakeType(::g::Outracks::Simulator::Bytecode::LogicalOr_typeof(), ::g::Uno::IO::BinaryWriter_typeof());
    ::TYPES[46] = ::g::Outracks::Simulator::Closure_typeof()->MakeMethod(2, ::g::Outracks::Simulator::Bytecode::Instantiate_typeof(), ::g::Uno::IO::BinaryWriter_typeof());
    ::TYPES[47] = ::g::Uno::Action2_typeof()->MakeType(::g::Outracks::Simulator::Bytecode::Instantiate_typeof(), ::g::Uno::IO::BinaryWriter_typeof());
    ::TYPES[48] = ::g::Outracks::Simulator::Closure_typeof()->MakeMethod(2, ::g::Outracks::Simulator::Bytecode::CallLambda_typeof(), ::g::Uno::IO::BinaryWriter_typeof());
    ::TYPES[49] = ::g::Uno::Action2_typeof()->MakeType(::g::Outracks::Simulator::Bytecode::CallLambda_typeof(), ::g::Uno::IO::BinaryWriter_typeof());
    ::TYPES[50] = ::g::Outracks::Simulator::Closure_typeof()->MakeMethod(2, ::g::Outracks::Simulator::Bytecode::CallStaticMethod_typeof(), ::g::Uno::IO::BinaryWriter_typeof());
    ::TYPES[51] = ::g::Uno::Action2_typeof()->MakeType(::g::Outracks::Simulator::Bytecode::CallStaticMethod_typeof(), ::g::Uno::IO::BinaryWriter_typeof());
    ::TYPES[52] = ::g::Outracks::Simulator::Closure_typeof()->MakeMethod(2, ::g::Outracks::Simulator::Bytecode::CallDynamicMethod_typeof(), ::g::Uno::IO::BinaryWriter_typeof());
    ::TYPES[53] = ::g::Uno::Action2_typeof()->MakeType(::g::Outracks::Simulator::Bytecode::CallDynamicMethod_typeof(), ::g::Uno::IO::BinaryWriter_typeof());
    ::TYPES[54] = ::g::Outracks::Simulator::Closure_typeof()->MakeMethod(2, ::g::Outracks::Simulator::Bytecode::ReadStaticField_typeof(), ::g::Uno::IO::BinaryWriter_typeof());
    ::TYPES[55] = ::g::Uno::Action2_typeof()->MakeType(::g::Outracks::Simulator::Bytecode::ReadStaticField_typeof(), ::g::Uno::IO::BinaryWriter_typeof());
    ::TYPES[56] = ::g::Outracks::Simulator::Closure_typeof()->MakeMethod(2, ::g::Outracks::Simulator::Bytecode::ReadProperty_typeof(), ::g::Uno::IO::BinaryWriter_typeof());
    ::TYPES[57] = ::g::Uno::Action2_typeof()->MakeType(::g::Outracks::Simulator::Bytecode::ReadProperty_typeof(), ::g::Uno::IO::BinaryWriter_typeof());
    ::TYPES[58] = ::g::Outracks::Simulator::Closure_typeof()->MakeMethod(2, ::g::Outracks::Simulator::Bytecode::WriteProperty_typeof(), ::g::Uno::IO::BinaryWriter_typeof());
    ::TYPES[59] = ::g::Uno::Action2_typeof()->MakeType(::g::Outracks::Simulator::Bytecode::WriteProperty_typeof(), ::g::Uno::IO::BinaryWriter_typeof());
    ::TYPES[60] = ::g::Outracks::Simulator::Closure_typeof()->MakeMethod(2, ::g::Outracks::Simulator::Bytecode::AddEventHandler_typeof(), ::g::Uno::IO::BinaryWriter_typeof());
    ::TYPES[61] = ::g::Uno::Action2_typeof()->MakeType(::g::Outracks::Simulator::Bytecode::AddEventHandler_typeof(), ::g::Uno::IO::BinaryWriter_typeof());
    ::TYPES[62] = ::g::Outracks::Simulator::Closure_typeof()->MakeMethod(2, ::g::Outracks::Simulator::Bytecode::RemoveEventHandler_typeof(), ::g::Uno::IO::BinaryWriter_typeof());
    ::TYPES[63] = ::g::Uno::Action2_typeof()->MakeType(::g::Outracks::Simulator::Bytecode::RemoveEventHandler_typeof(), ::g::Uno::IO::BinaryWriter_typeof());
    ::TYPES[64] = ::g::Outracks::Simulator::Bytecode::ReadVariable_typeof();
    ::TYPES[65] = ::g::Uno::Action1_typeof()->MakeType(::g::Outracks::Simulator::Bytecode::ReadVariable_typeof());
    ::TYPES[66] = ::g::Outracks::Simulator::Bytecode::Literal_typeof();
    ::TYPES[67] = ::g::Uno::Action1_typeof()->MakeType(::g::Outracks::Simulator::Bytecode::Literal_typeof());
    ::TYPES[68] = ::g::Outracks::Simulator::Bytecode::Lambda_typeof();
    ::TYPES[69] = ::g::Uno::Action1_typeof()->MakeType(::g::Outracks::Simulator::Bytecode::Lambda_typeof());
    ::TYPES[70] = ::g::Outracks::Simulator::Bytecode::MethodGroup_typeof();
    ::TYPES[71] = ::g::Uno::Action1_typeof()->MakeType(::g::Outracks::Simulator::Bytecode::MethodGroup_typeof());
    ::TYPES[72] = ::g::Outracks::Simulator::Bytecode::IsType_typeof();
    ::TYPES[73] = ::g::Uno::Action1_typeof()->MakeType(::g::Outracks::Simulator::Bytecode::IsType_typeof());
    ::TYPES[74] = ::g::Outracks::Simulator::Bytecode::LogicalOr_typeof();
    ::TYPES[75] = ::g::Uno::Action1_typeof()->MakeType(::g::Outracks::Simulator::Bytecode::LogicalOr_typeof());
    ::TYPES[76] = ::g::Outracks::Simulator::Bytecode::Instantiate_typeof();
    ::TYPES[77] = ::g::Uno::Action1_typeof()->MakeType(::g::Outracks::Simulator::Bytecode::Instantiate_typeof());
    ::TYPES[78] = ::g::Outracks::Simulator::Bytecode::CallLambda_typeof();
    ::TYPES[79] = ::g::Uno::Action1_typeof()->MakeType(::g::Outracks::Simulator::Bytecode::CallLambda_typeof());
    ::TYPES[80] = ::g::Outracks::Simulator::Bytecode::CallStaticMethod_typeof();
    ::TYPES[81] = ::g::Uno::Action1_typeof()->MakeType(::g::Outracks::Simulator::Bytecode::CallStaticMethod_typeof());
    ::TYPES[82] = ::g::Outracks::Simulator::Bytecode::CallDynamicMethod_typeof();
    ::TYPES[83] = ::g::Uno::Action1_typeof()->MakeType(::g::Outracks::Simulator::Bytecode::CallDynamicMethod_typeof());
    ::TYPES[84] = ::g::Outracks::Simulator::Bytecode::ReadStaticField_typeof();
    ::TYPES[85] = ::g::Uno::Action1_typeof()->MakeType(::g::Outracks::Simulator::Bytecode::ReadStaticField_typeof());
    ::TYPES[86] = ::g::Outracks::Simulator::Bytecode::ReadProperty_typeof();
    ::TYPES[87] = ::g::Uno::Action1_typeof()->MakeType(::g::Outracks::Simulator::Bytecode::ReadProperty_typeof());
    ::TYPES[88] = ::g::Outracks::Simulator::Bytecode::WriteProperty_typeof();
    ::TYPES[89] = ::g::Uno::Action1_typeof()->MakeType(::g::Outracks::Simulator::Bytecode::WriteProperty_typeof());
    ::TYPES[90] = ::g::Outracks::Simulator::Bytecode::AddEventHandler_typeof();
    ::TYPES[91] = ::g::Uno::Action1_typeof()->MakeType(::g::Outracks::Simulator::Bytecode::AddEventHandler_typeof());
    ::TYPES[92] = ::g::Outracks::Simulator::Bytecode::RemoveEventHandler_typeof();
    ::TYPES[93] = ::g::Uno::Action1_typeof()->MakeType(::g::Outracks::Simulator::Bytecode::RemoveEventHandler_typeof());
    ::TYPES[94] = ::g::Uno::Func1_typeof();
    type->SetFields(0,
        ::g::Uno::Func1_typeof()->MakeType(::g::Uno::IO::BinaryReader_typeof(), Expression_typeof()), (uintptr_t)&::g::Outracks::Simulator::Bytecode::Expression::Read1_, uFieldFlagsStatic,
        ::g::Uno::Action2_typeof()->MakeType(Expression_typeof(), ::g::Uno::IO::BinaryWriter_typeof()), (uintptr_t)&::g::Outracks::Simulator::Bytecode::Expression::Write1_, uFieldFlagsStatic);
    type->Reflection.SetFields(2,
        new uField("Read", 0),
        new uField("Write", 1));
    type->Reflection.SetFunctions(5,
        new uFunction("_Read", NULL, (void*)Expression___Read1_fn, 0, true, Expression_typeof(), 1, ::g::Uno::IO::BinaryReader_typeof()),
        new uFunction("_Write", NULL, (void*)Expression___Write1_fn, 0, true, uVoid_typeof(), 2, Expression_typeof(), ::g::Uno::IO::BinaryWriter_typeof()),
        new uFunction("Match", NULL, (void*)Expression__Match2_fn, 0, false, uVoid_typeof(), 15, ::g::Uno::Action1_typeof()->MakeType(::g::Outracks::Simulator::Bytecode::ReadVariable_typeof()), ::g::Uno::Action1_typeof()->MakeType(::g::Outracks::Simulator::Bytecode::Literal_typeof()), ::g::Uno::Action1_typeof()->MakeType(::g::Outracks::Simulator::Bytecode::Lambda_typeof()), ::g::Uno::Action1_typeof()->MakeType(::g::Outracks::Simulator::Bytecode::MethodGroup_typeof()), ::g::Uno::Action1_typeof()->MakeType(::g::Outracks::Simulator::Bytecode::IsType_typeof()), ::g::Uno::Action1_typeof()->MakeType(::g::Outracks::Simulator::Bytecode::LogicalOr_typeof()), ::g::Uno::Action1_typeof()->MakeType(::g::Outracks::Simulator::Bytecode::Instantiate_typeof()), ::g::Uno::Action1_typeof()->MakeType(::g::Outracks::Simulator::Bytecode::CallLambda_typeof()), ::g::Uno::Action1_typeof()->MakeType(::g::Outracks::Simulator::Bytecode::CallStaticMethod_typeof()), ::g::Uno::Action1_typeof()->MakeType(::g::Outracks::Simulator::Bytecode::CallDynamicMethod_typeof()), ::g::Uno::Action1_typeof()->MakeType(::g::Outracks::Simulator::Bytecode::ReadStaticField_typeof()), ::g::Uno::Action1_typeof()->MakeType(::g::Outracks::Simulator::Bytecode::ReadProperty_typeof()), ::g::Uno::Action1_typeof()->MakeType(::g::Outracks::Simulator::Bytecode::WriteProperty_typeof()), ::g::Uno::Action1_typeof()->MakeType(::g::Outracks::Simulator::Bytecode::AddEventHandler_typeof()), ::g::Uno::Action1_typeof()->MakeType(::g::Outracks::Simulator::Bytecode::RemoveEventHandler_typeof())),
        new uFunction("Match`1", type, (void*)Expression__Match3_fn, 0, false, type->U(0), 15, ::g::Uno::Func1_typeof()->MakeType(::g::Outracks::Simulator::Bytecode::ReadVariable_typeof(), type->U(0)), ::g::Uno::Func1_typeof()->MakeType(::g::Outracks::Simulator::Bytecode::Literal_typeof(), type->U(0)), ::g::Uno::Func1_typeof()->MakeType(::g::Outracks::Simulator::Bytecode::Lambda_typeof(), type->U(0)), ::g::Uno::Func1_typeof()->MakeType(::g::Outracks::Simulator::Bytecode::MethodGroup_typeof(), type->U(0)), ::g::Uno::Func1_typeof()->MakeType(::g::Outracks::Simulator::Bytecode::IsType_typeof(), type->U(0)), ::g::Uno::Func1_typeof()->MakeType(::g::Outracks::Simulator::Bytecode::LogicalOr_typeof(), type->U(0)), ::g::Uno::Func1_typeof()->MakeType(::g::Outracks::Simulator::Bytecode::Instantiate_typeof(), type->U(0)), ::g::Uno::Func1_typeof()->MakeType(::g::Outracks::Simulator::Bytecode::CallLambda_typeof(), type->U(0)), ::g::Uno::Func1_typeof()->MakeType(::g::Outracks::Simulator::Bytecode::CallStaticMethod_typeof(), type->U(0)), ::g::Uno::Func1_typeof()->MakeType(::g::Outracks::Simulator::Bytecode::CallDynamicMethod_typeof(), type->U(0)), ::g::Uno::Func1_typeof()->MakeType(::g::Outracks::Simulator::Bytecode::ReadStaticField_typeof(), type->U(0)), ::g::Uno::Func1_typeof()->MakeType(::g::Outracks::Simulator::Bytecode::ReadProperty_typeof(), type->U(0)), ::g::Uno::Func1_typeof()->MakeType(::g::Outracks::Simulator::Bytecode::WriteProperty_typeof(), type->U(0)), ::g::Uno::Func1_typeof()->MakeType(::g::Outracks::Simulator::Bytecode::AddEventHandler_typeof(), type->U(0)), ::g::Uno::Func1_typeof()->MakeType(::g::Outracks::Simulator::Bytecode::RemoveEventHandler_typeof(), type->U(0))),
        new uFunction("Throw", NULL, (void*)Expression__Throw_fn, 0, true, Expression_typeof(), 1, ::g::Uno::Exception_typeof()));
    return type;
}

// protected generated Expression() :57
void Expression__ctor_1_fn(Expression* __this)
{
    __this->ctor_1();
}

// public static new Outracks.Simulator.Bytecode.Expression _Read(Uno.IO.BinaryReader reader) :194
void Expression___Read1_fn(::g::Uno::IO::BinaryReader* reader, Expression** __retval)
{
    *__retval = Expression::_Read1(reader);
}

// public static void _Write(Outracks.Simulator.Bytecode.Expression expression, Uno.IO.BinaryWriter writer) :154
void Expression___Write1_fn(Expression* expression, ::g::Uno::IO::BinaryWriter* writer)
{
    Expression::_Write1(expression, writer);
}

// public void Match(Uno.Action<Outracks.Simulator.Bytecode.ReadVariable> a1, Uno.Action<Outracks.Simulator.Bytecode.Literal> a2, Uno.Action<Outracks.Simulator.Bytecode.Lambda> a3, Uno.Action<Outracks.Simulator.Bytecode.MethodGroup> a4, Uno.Action<Outracks.Simulator.Bytecode.IsType> a5, Uno.Action<Outracks.Simulator.Bytecode.LogicalOr> a6, Uno.Action<Outracks.Simulator.Bytecode.Instantiate> a7, Uno.Action<Outracks.Simulator.Bytecode.CallLambda> a8, Uno.Action<Outracks.Simulator.Bytecode.CallStaticMethod> a9, Uno.Action<Outracks.Simulator.Bytecode.CallDynamicMethod> a10, Uno.Action<Outracks.Simulator.Bytecode.ReadStaticField> a11, Uno.Action<Outracks.Simulator.Bytecode.ReadProperty> a12, Uno.Action<Outracks.Simulator.Bytecode.WriteProperty> a13, Uno.Action<Outracks.Simulator.Bytecode.AddEventHandler> a15, Uno.Action<Outracks.Simulator.Bytecode.RemoveEventHandler> a16) :116
void Expression__Match2_fn(Expression* __this, uDelegate* a1, uDelegate* a2, uDelegate* a3, uDelegate* a4, uDelegate* a5, uDelegate* a6, uDelegate* a7, uDelegate* a8, uDelegate* a9, uDelegate* a10, uDelegate* a11, uDelegate* a12, uDelegate* a13, uDelegate* a15, uDelegate* a16)
{
    __this->Match2(a1, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11, a12, a13, a15, a16);
}

// public T Match<T>(Uno.Func<Outracks.Simulator.Bytecode.ReadVariable, T> a1, Uno.Func<Outracks.Simulator.Bytecode.Literal, T> a2, Uno.Func<Outracks.Simulator.Bytecode.Lambda, T> a3, Uno.Func<Outracks.Simulator.Bytecode.MethodGroup, T> a4, Uno.Func<Outracks.Simulator.Bytecode.IsType, T> a5, Uno.Func<Outracks.Simulator.Bytecode.LogicalOr, T> a6, Uno.Func<Outracks.Simulator.Bytecode.Instantiate, T> a7, Uno.Func<Outracks.Simulator.Bytecode.CallLambda, T> a8, Uno.Func<Outracks.Simulator.Bytecode.CallStaticMethod, T> a9, Uno.Func<Outracks.Simulator.Bytecode.CallDynamicMethod, T> a10, Uno.Func<Outracks.Simulator.Bytecode.ReadStaticField, T> a11, Uno.Func<Outracks.Simulator.Bytecode.ReadProperty, T> a12, Uno.Func<Outracks.Simulator.Bytecode.WriteProperty, T> a13, Uno.Func<Outracks.Simulator.Bytecode.AddEventHandler, T> a15, Uno.Func<Outracks.Simulator.Bytecode.RemoveEventHandler, T> a16) :80
void Expression__Match3_fn(Expression* __this, uType* __type, uDelegate* a1, uDelegate* a2, uDelegate* a3, uDelegate* a4, uDelegate* a5, uDelegate* a6, uDelegate* a7, uDelegate* a8, uDelegate* a9, uDelegate* a10, uDelegate* a11, uDelegate* a12, uDelegate* a13, uDelegate* a15, uDelegate* a16, uTRef __retval)
{
    uType* __types[] = {
        __type->U(0),
        ::TYPES[94/*Uno.Func`2*/]->MakeType(::TYPES[64/*Outracks.Simulator.Bytecode.ReadVariable*/], __type->U(0)),
        ::TYPES[94/*Uno.Func`2*/]->MakeType(::TYPES[66/*Outracks.Simulator.Bytecode.Literal*/], __type->U(0)),
        ::TYPES[94/*Uno.Func`2*/]->MakeType(::TYPES[68/*Outracks.Simulator.Bytecode.Lambda*/], __type->U(0)),
        ::TYPES[94/*Uno.Func`2*/]->MakeType(::TYPES[70/*Outracks.Simulator.Bytecode.MethodGroup*/], __type->U(0)),
        ::TYPES[94/*Uno.Func`2*/]->MakeType(::TYPES[72/*Outracks.Simulator.Bytecode.IsType*/], __type->U(0)),
        ::TYPES[94/*Uno.Func`2*/]->MakeType(::TYPES[74/*Outracks.Simulator.Bytecode.LogicalOr*/], __type->U(0)),
        ::TYPES[94/*Uno.Func`2*/]->MakeType(::TYPES[76/*Outracks.Simulator.Bytecode.Instantiate*/], __type->U(0)),
        ::TYPES[94/*Uno.Func`2*/]->MakeType(::TYPES[78/*Outracks.Simulator.Bytecode.CallLambda*/], __type->U(0)),
        ::TYPES[94/*Uno.Func`2*/]->MakeType(::TYPES[80/*Outracks.Simulator.Bytecode.CallStaticMethod*/], __type->U(0)),
        ::TYPES[94/*Uno.Func`2*/]->MakeType(::TYPES[82/*Outracks.Simulator.Bytecode.CallDynamicMethod*/], __type->U(0)),
        ::TYPES[94/*Uno.Func`2*/]->MakeType(::TYPES[84/*Outracks.Simulator.Bytecode.ReadStaticField*/], __type->U(0)),
        ::TYPES[94/*Uno.Func`2*/]->MakeType(::TYPES[86/*Outracks.Simulator.Bytecode.ReadProperty*/], __type->U(0)),
        ::TYPES[94/*Uno.Func`2*/]->MakeType(::TYPES[88/*Outracks.Simulator.Bytecode.WriteProperty*/], __type->U(0)),
        ::TYPES[94/*Uno.Func`2*/]->MakeType(::TYPES[90/*Outracks.Simulator.Bytecode.AddEventHandler*/], __type->U(0)),
        ::TYPES[94/*Uno.Func`2*/]->MakeType(::TYPES[92/*Outracks.Simulator.Bytecode.RemoveEventHandler*/], __type->U(0)),
    };
    uT ret32(__types[0], U_ALLOCA(__types[0]->ValueSize));
    uT ret33(__types[0], U_ALLOCA(__types[0]->ValueSize));
    uT ret34(__types[0], U_ALLOCA(__types[0]->ValueSize));
    uT ret35(__types[0], U_ALLOCA(__types[0]->ValueSize));
    uT ret36(__types[0], U_ALLOCA(__types[0]->ValueSize));
    uT ret37(__types[0], U_ALLOCA(__types[0]->ValueSize));
    uT ret38(__types[0], U_ALLOCA(__types[0]->ValueSize));
    uT ret39(__types[0], U_ALLOCA(__types[0]->ValueSize));
    uT ret40(__types[0], U_ALLOCA(__types[0]->ValueSize));
    uT ret41(__types[0], U_ALLOCA(__types[0]->ValueSize));
    uT ret42(__types[0], U_ALLOCA(__types[0]->ValueSize));
    uT ret43(__types[0], U_ALLOCA(__types[0]->ValueSize));
    uT ret44(__types[0], U_ALLOCA(__types[0]->ValueSize));
    uT ret45(__types[0], U_ALLOCA(__types[0]->ValueSize));
    uT ret46(__types[0], U_ALLOCA(__types[0]->ValueSize));
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    Expression* self = __this;
    ::g::Outracks::Simulator::Bytecode::ReadVariable* t1 = uAs< ::g::Outracks::Simulator::Bytecode::ReadVariable*>(self, ::TYPES[64/*Outracks.Simulator.Bytecode.ReadVariable*/]);

    if (t1 != NULL)
        return __retval.Store((uPtr(a1)->Invoke(&ret32, 1, t1), ret32)), void();

    ::g::Outracks::Simulator::Bytecode::Literal* t2 = uAs< ::g::Outracks::Simulator::Bytecode::Literal*>(self, ::TYPES[66/*Outracks.Simulator.Bytecode.Literal*/]);

    if (t2 != NULL)
        return __retval.Store((uPtr(a2)->Invoke(&ret33, 1, t2), ret33)), void();

    ::g::Outracks::Simulator::Bytecode::Lambda* t3 = uAs< ::g::Outracks::Simulator::Bytecode::Lambda*>(self, ::TYPES[68/*Outracks.Simulator.Bytecode.Lambda*/]);

    if (t3 != NULL)
        return __retval.Store((uPtr(a3)->Invoke(&ret34, 1, t3), ret34)), void();

    ::g::Outracks::Simulator::Bytecode::MethodGroup* t4 = uAs< ::g::Outracks::Simulator::Bytecode::MethodGroup*>(self, ::TYPES[70/*Outracks.Simulator.Bytecode.MethodGroup*/]);

    if (t4 != NULL)
        return __retval.Store((uPtr(a4)->Invoke(&ret35, 1, t4), ret35)), void();

    ::g::Outracks::Simulator::Bytecode::IsType* t5 = uAs< ::g::Outracks::Simulator::Bytecode::IsType*>(self, ::TYPES[72/*Outracks.Simulator.Bytecode.IsType*/]);

    if (t5 != NULL)
        return __retval.Store((uPtr(a5)->Invoke(&ret36, 1, t5), ret36)), void();

    ::g::Outracks::Simulator::Bytecode::LogicalOr* t6 = uAs< ::g::Outracks::Simulator::Bytecode::LogicalOr*>(self, ::TYPES[74/*Outracks.Simulator.Bytecode.LogicalOr*/]);

    if (t6 != NULL)
        return __retval.Store((uPtr(a6)->Invoke(&ret37, 1, t6), ret37)), void();

    ::g::Outracks::Simulator::Bytecode::Instantiate* t7 = uAs< ::g::Outracks::Simulator::Bytecode::Instantiate*>(self, ::TYPES[76/*Outracks.Simulator.Bytecode.Instantiate*/]);

    if (t7 != NULL)
        return __retval.Store((uPtr(a7)->Invoke(&ret38, 1, t7), ret38)), void();

    ::g::Outracks::Simulator::Bytecode::CallLambda* t8 = uAs< ::g::Outracks::Simulator::Bytecode::CallLambda*>(self, ::TYPES[78/*Outracks.Simulator.Bytecode.CallLambda*/]);

    if (t8 != NULL)
        return __retval.Store((uPtr(a8)->Invoke(&ret39, 1, t8), ret39)), void();

    ::g::Outracks::Simulator::Bytecode::CallStaticMethod* t9 = uAs< ::g::Outracks::Simulator::Bytecode::CallStaticMethod*>(self, ::TYPES[80/*Outracks.Simulator.Bytecode.CallStaticMethod*/]);

    if (t9 != NULL)
        return __retval.Store((uPtr(a9)->Invoke(&ret40, 1, t9), ret40)), void();

    ::g::Outracks::Simulator::Bytecode::CallDynamicMethod* t10 = uAs< ::g::Outracks::Simulator::Bytecode::CallDynamicMethod*>(self, ::TYPES[82/*Outracks.Simulator.Bytecode.CallDynamicMethod*/]);

    if (t10 != NULL)
        return __retval.Store((uPtr(a10)->Invoke(&ret41, 1, t10), ret41)), void();

    ::g::Outracks::Simulator::Bytecode::ReadStaticField* t11 = uAs< ::g::Outracks::Simulator::Bytecode::ReadStaticField*>(self, ::TYPES[84/*Outracks.Simulator.Bytecode.ReadStaticField*/]);

    if (t11 != NULL)
        return __retval.Store((uPtr(a11)->Invoke(&ret42, 1, t11), ret42)), void();

    ::g::Outracks::Simulator::Bytecode::ReadProperty* t12 = uAs< ::g::Outracks::Simulator::Bytecode::ReadProperty*>(self, ::TYPES[86/*Outracks.Simulator.Bytecode.ReadProperty*/]);

    if (t12 != NULL)
        return __retval.Store((uPtr(a12)->Invoke(&ret43, 1, t12), ret43)), void();

    ::g::Outracks::Simulator::Bytecode::WriteProperty* t13 = uAs< ::g::Outracks::Simulator::Bytecode::WriteProperty*>(self, ::TYPES[88/*Outracks.Simulator.Bytecode.WriteProperty*/]);

    if (t13 != NULL)
        return __retval.Store((uPtr(a13)->Invoke(&ret44, 1, t13), ret44)), void();

    ::g::Outracks::Simulator::Bytecode::AddEventHandler* t15 = uAs< ::g::Outracks::Simulator::Bytecode::AddEventHandler*>(self, ::TYPES[90/*Outracks.Simulator.Bytecode.AddEventHandler*/]);

    if (t15 != NULL)
        return __retval.Store((uPtr(a15)->Invoke(&ret45, 1, t15), ret45)), void();

    ::g::Outracks::Simulator::Bytecode::RemoveEventHandler* t16 = uAs< ::g::Outracks::Simulator::Bytecode::RemoveEventHandler*>(self, ::TYPES[92/*Outracks.Simulator.Bytecode.RemoveEventHandler*/]);

    if (t16 != NULL)
        return __retval.Store((uPtr(a16)->Invoke(&ret46, 1, t16), ret46)), void();

    U_THROW(::g::Outracks::Simulator::NonExhaustiveMatch::New4());
}

// public static Outracks.Simulator.Bytecode.Expression Throw(Uno.Exception e) :219
void Expression__Throw_fn(::g::Uno::Exception* e, Expression** __retval)
{
    *__retval = Expression::Throw(e);
}

uSStrong<uDelegate*> Expression::Read1_;
uSStrong<uDelegate*> Expression::Write1_;

// protected generated Expression() [instance] :57
void Expression::ctor_1()
{
    ctor_();
}

// public void Match(Uno.Action<Outracks.Simulator.Bytecode.ReadVariable> a1, Uno.Action<Outracks.Simulator.Bytecode.Literal> a2, Uno.Action<Outracks.Simulator.Bytecode.Lambda> a3, Uno.Action<Outracks.Simulator.Bytecode.MethodGroup> a4, Uno.Action<Outracks.Simulator.Bytecode.IsType> a5, Uno.Action<Outracks.Simulator.Bytecode.LogicalOr> a6, Uno.Action<Outracks.Simulator.Bytecode.Instantiate> a7, Uno.Action<Outracks.Simulator.Bytecode.CallLambda> a8, Uno.Action<Outracks.Simulator.Bytecode.CallStaticMethod> a9, Uno.Action<Outracks.Simulator.Bytecode.CallDynamicMethod> a10, Uno.Action<Outracks.Simulator.Bytecode.ReadStaticField> a11, Uno.Action<Outracks.Simulator.Bytecode.ReadProperty> a12, Uno.Action<Outracks.Simulator.Bytecode.WriteProperty> a13, Uno.Action<Outracks.Simulator.Bytecode.AddEventHandler> a15, Uno.Action<Outracks.Simulator.Bytecode.RemoveEventHandler> a16) [instance] :116
void Expression::Match2(uDelegate* a1, uDelegate* a2, uDelegate* a3, uDelegate* a4, uDelegate* a5, uDelegate* a6, uDelegate* a7, uDelegate* a8, uDelegate* a9, uDelegate* a10, uDelegate* a11, uDelegate* a12, uDelegate* a13, uDelegate* a15, uDelegate* a16)
{
    Expression* self = this;
    ::g::Outracks::Simulator::Bytecode::ReadVariable* t1 = uAs< ::g::Outracks::Simulator::Bytecode::ReadVariable*>(self, ::TYPES[64/*Outracks.Simulator.Bytecode.ReadVariable*/]);

    if (t1 != NULL)
    {
        uPtr(a1)->InvokeVoid(t1);
        return;
    }

    ::g::Outracks::Simulator::Bytecode::Literal* t2 = uAs< ::g::Outracks::Simulator::Bytecode::Literal*>(self, ::TYPES[66/*Outracks.Simulator.Bytecode.Literal*/]);

    if (t2 != NULL)
    {
        uPtr(a2)->InvokeVoid(t2);
        return;
    }

    ::g::Outracks::Simulator::Bytecode::Lambda* t3 = uAs< ::g::Outracks::Simulator::Bytecode::Lambda*>(self, ::TYPES[68/*Outracks.Simulator.Bytecode.Lambda*/]);

    if (t3 != NULL)
    {
        uPtr(a3)->InvokeVoid(t3);
        return;
    }

    ::g::Outracks::Simulator::Bytecode::MethodGroup* t4 = uAs< ::g::Outracks::Simulator::Bytecode::MethodGroup*>(self, ::TYPES[70/*Outracks.Simulator.Bytecode.MethodGroup*/]);

    if (t4 != NULL)
    {
        uPtr(a4)->InvokeVoid(t4);
        return;
    }

    ::g::Outracks::Simulator::Bytecode::IsType* t5 = uAs< ::g::Outracks::Simulator::Bytecode::IsType*>(self, ::TYPES[72/*Outracks.Simulator.Bytecode.IsType*/]);

    if (t5 != NULL)
    {
        uPtr(a5)->InvokeVoid(t5);
        return;
    }

    ::g::Outracks::Simulator::Bytecode::LogicalOr* t6 = uAs< ::g::Outracks::Simulator::Bytecode::LogicalOr*>(self, ::TYPES[74/*Outracks.Simulator.Bytecode.LogicalOr*/]);

    if (t6 != NULL)
    {
        uPtr(a6)->InvokeVoid(t6);
        return;
    }

    ::g::Outracks::Simulator::Bytecode::Instantiate* t7 = uAs< ::g::Outracks::Simulator::Bytecode::Instantiate*>(self, ::TYPES[76/*Outracks.Simulator.Bytecode.Instantiate*/]);

    if (t7 != NULL)
    {
        uPtr(a7)->InvokeVoid(t7);
        return;
    }

    ::g::Outracks::Simulator::Bytecode::CallLambda* t8 = uAs< ::g::Outracks::Simulator::Bytecode::CallLambda*>(self, ::TYPES[78/*Outracks.Simulator.Bytecode.CallLambda*/]);

    if (t8 != NULL)
    {
        uPtr(a8)->InvokeVoid(t8);
        return;
    }

    ::g::Outracks::Simulator::Bytecode::CallStaticMethod* t9 = uAs< ::g::Outracks::Simulator::Bytecode::CallStaticMethod*>(self, ::TYPES[80/*Outracks.Simulator.Bytecode.CallStaticMethod*/]);

    if (t9 != NULL)
    {
        uPtr(a9)->InvokeVoid(t9);
        return;
    }

    ::g::Outracks::Simulator::Bytecode::CallDynamicMethod* t10 = uAs< ::g::Outracks::Simulator::Bytecode::CallDynamicMethod*>(self, ::TYPES[82/*Outracks.Simulator.Bytecode.CallDynamicMethod*/]);

    if (t10 != NULL)
    {
        uPtr(a10)->InvokeVoid(t10);
        return;
    }

    ::g::Outracks::Simulator::Bytecode::ReadStaticField* t11 = uAs< ::g::Outracks::Simulator::Bytecode::ReadStaticField*>(self, ::TYPES[84/*Outracks.Simulator.Bytecode.ReadStaticField*/]);

    if (t11 != NULL)
    {
        uPtr(a11)->InvokeVoid(t11);
        return;
    }

    ::g::Outracks::Simulator::Bytecode::ReadProperty* t12 = uAs< ::g::Outracks::Simulator::Bytecode::ReadProperty*>(self, ::TYPES[86/*Outracks.Simulator.Bytecode.ReadProperty*/]);

    if (t12 != NULL)
    {
        uPtr(a12)->InvokeVoid(t12);
        return;
    }

    ::g::Outracks::Simulator::Bytecode::WriteProperty* t13 = uAs< ::g::Outracks::Simulator::Bytecode::WriteProperty*>(self, ::TYPES[88/*Outracks.Simulator.Bytecode.WriteProperty*/]);

    if (t13 != NULL)
    {
        uPtr(a13)->InvokeVoid(t13);
        return;
    }

    ::g::Outracks::Simulator::Bytecode::AddEventHandler* t15 = uAs< ::g::Outracks::Simulator::Bytecode::AddEventHandler*>(self, ::TYPES[90/*Outracks.Simulator.Bytecode.AddEventHandler*/]);

    if (t15 != NULL)
    {
        uPtr(a15)->InvokeVoid(t15);
        return;
    }

    ::g::Outracks::Simulator::Bytecode::RemoveEventHandler* t16 = uAs< ::g::Outracks::Simulator::Bytecode::RemoveEventHandler*>(self, ::TYPES[92/*Outracks.Simulator.Bytecode.RemoveEventHandler*/]);

    if (t16 != NULL)
    {
        uPtr(a16)->InvokeVoid(t16);
        return;
    }

    U_THROW(::g::Outracks::Simulator::NonExhaustiveMatch::New4());
}

// public static new Outracks.Simulator.Bytecode.Expression _Read(Uno.IO.BinaryReader reader) [static] :194
Expression* Expression::_Read1(::g::Uno::IO::BinaryReader* reader)
{
    Expression_typeof()->Init();
    uChar c = uPtr(reader)->ReadChar();

    switch (c)
    {
        case 'a':
            return ::g::Outracks::Simulator::Bytecode::ReadVariable::Read2(reader);
        case 'b':
            return ::g::Outracks::Simulator::Bytecode::Literal::Read2(reader);
        case 'c':
            return ::g::Outracks::Simulator::Bytecode::Lambda::Read2(reader);
        case 'd':
            return ::g::Outracks::Simulator::Bytecode::MethodGroup::Read2(reader);
        case 'e':
            return ::g::Outracks::Simulator::Bytecode::IsType::Read2(reader);
        case 'f':
            return ::g::Outracks::Simulator::Bytecode::LogicalOr::Read2(reader);
        case 'g':
            return ::g::Outracks::Simulator::Bytecode::Instantiate::Read2(reader);
        case 'h':
            return ::g::Outracks::Simulator::Bytecode::CallLambda::Read2(reader);
        case 'i':
            return ::g::Outracks::Simulator::Bytecode::CallStaticMethod::Read2(reader);
        case 'j':
            return ::g::Outracks::Simulator::Bytecode::CallDynamicMethod::Read2(reader);
        case 'k':
            return ::g::Outracks::Simulator::Bytecode::ReadStaticField::Read2(reader);
        case 'l':
            return ::g::Outracks::Simulator::Bytecode::ReadProperty::Read2(reader);
        case 'm':
            return ::g::Outracks::Simulator::Bytecode::WriteProperty::Read2(reader);
        case 'n':
            return ::g::Outracks::Simulator::Bytecode::AddEventHandler::Read2(reader);
        case 'o':
            return ::g::Outracks::Simulator::Bytecode::RemoveEventHandler::Read2(reader);
    }

    U_THROW(::g::Outracks::Simulator::InvalidDataException::New4());
}

// public static void _Write(Outracks.Simulator.Bytecode.Expression expression, Uno.IO.BinaryWriter writer) [static] :154
void Expression::_Write1(Expression* expression, ::g::Uno::IO::BinaryWriter* writer)
{
    Expression_typeof()->Init();
    uChar ret1;
    uDelegate* ret2;
    uDelegate* ret3;
    uDelegate* ret4;
    uDelegate* ret5;
    uDelegate* ret6;
    uDelegate* ret7;
    uDelegate* ret8;
    uDelegate* ret9;
    uDelegate* ret10;
    uDelegate* ret11;
    uDelegate* ret12;
    uDelegate* ret13;
    uDelegate* ret14;
    uDelegate* ret15;
    uDelegate* ret16;
    uDelegate* ret17;
    uDelegate* ret18;
    uDelegate* ret19;
    uDelegate* ret20;
    uDelegate* ret21;
    uDelegate* ret22;
    uDelegate* ret23;
    uDelegate* ret24;
    uDelegate* ret25;
    uDelegate* ret26;
    uDelegate* ret27;
    uDelegate* ret28;
    uDelegate* ret29;
    uDelegate* ret30;
    uDelegate* ret31;
    uPtr(writer)->Write5((Expression__Match3_fn(uPtr(expression), ::TYPES[18/*Outracks.Simulator.Bytecode.Expression.Match<char>*/], (::g::Outracks::Simulator::Closure__Return_fn(::TYPES[19/*Outracks.Simulator.Closure.Return<Outracks.Simulator.Bytecode.ReadVariable, char>*/], uCRef<uChar>('a'), &ret2), ret2), (::g::Outracks::Simulator::Closure__Return_fn(::TYPES[20/*Outracks.Simulator.Closure.Return<Outracks.Simulator.Bytecode.Literal, char>*/], uCRef<uChar>('b'), &ret3), ret3), (::g::Outracks::Simulator::Closure__Return_fn(::TYPES[21/*Outracks.Simulator.Closure.Return<Outracks.Simulator.Bytecode.Lambda, char>*/], uCRef<uChar>('c'), &ret4), ret4), (::g::Outracks::Simulator::Closure__Return_fn(::TYPES[22/*Outracks.Simulator.Closure.Return<Outracks.Simulator.Bytecode.MethodGroup, char>*/], uCRef<uChar>('d'), &ret5), ret5), (::g::Outracks::Simulator::Closure__Return_fn(::TYPES[23/*Outracks.Simulator.Closure.Return<Outracks.Simulator.Bytecode.IsType, char>*/], uCRef<uChar>('e'), &ret6), ret6), (::g::Outracks::Simulator::Closure__Return_fn(::TYPES[24/*Outracks.Simulator.Closure.Return<Outracks.Simulator.Bytecode.LogicalOr, char>*/], uCRef<uChar>('f'), &ret7), ret7), (::g::Outracks::Simulator::Closure__Return_fn(::TYPES[25/*Outracks.Simulator.Closure.Return<Outracks.Simulator.Bytecode.Instantiate, char>*/], uCRef<uChar>('g'), &ret8), ret8), (::g::Outracks::Simulator::Closure__Return_fn(::TYPES[26/*Outracks.Simulator.Closure.Return<Outracks.Simulator.Bytecode.CallLambda, char>*/], uCRef<uChar>('h'), &ret9), ret9), (::g::Outracks::Simulator::Closure__Return_fn(::TYPES[27/*Outracks.Simulator.Closure.Return<Outracks.Simulator.Bytecode.CallStaticMethod, char>*/], uCRef<uChar>('i'), &ret10), ret10), (::g::Outracks::Simulator::Closure__Return_fn(::TYPES[28/*Outracks.Simulator.Closure.Return<Outracks.Simulator.Bytecode.CallDynamicMethod, char>*/], uCRef<uChar>('j'), &ret11), ret11), (::g::Outracks::Simulator::Closure__Return_fn(::TYPES[29/*Outracks.Simulator.Closure.Return<Outracks.Simulator.Bytecode.ReadStaticField, char>*/], uCRef<uChar>('k'), &ret12), ret12), (::g::Outracks::Simulator::Closure__Return_fn(::TYPES[30/*Outracks.Simulator.Closure.Return<Outracks.Simulator.Bytecode.ReadProperty, char>*/], uCRef<uChar>('l'), &ret13), ret13), (::g::Outracks::Simulator::Closure__Return_fn(::TYPES[31/*Outracks.Simulator.Closure.Return<Outracks.Simulator.Bytecode.WriteProperty, char>*/], uCRef<uChar>('m'), &ret14), ret14), (::g::Outracks::Simulator::Closure__Return_fn(::TYPES[32/*Outracks.Simulator.Closure.Return<Outracks.Simulator.Bytecode.AddEventHandler, char>*/], uCRef<uChar>('n'), &ret15), ret15), (::g::Outracks::Simulator::Closure__Return_fn(::TYPES[33/*Outracks.Simulator.Closure.Return<Outracks.Simulator.Bytecode.RemoveEventHandler, char>*/], uCRef<uChar>('o'), &ret16), ret16), &ret1), ret1));
    expression->Match2((::g::Outracks::Simulator::Closure__ApplySecond_fn(::TYPES[34/*Outracks.Simulator.Closure.ApplySecond<Outracks.Simulator.Bytecode.ReadVariable, Uno.IO.BinaryWriter>*/], uDelegate::New(::TYPES[35/*Uno.Action<Outracks.Simulator.Bytecode.ReadVariable, Uno.IO.BinaryWriter>*/], (void*)::g::Outracks::Simulator::Bytecode::ReadVariable__Write2_fn), writer, &ret17), ret17), (::g::Outracks::Simulator::Closure__ApplySecond_fn(::TYPES[36/*Outracks.Simulator.Closure.ApplySecond<Outracks.Simulator.Bytecode.Literal, Uno.IO.BinaryWriter>*/], uDelegate::New(::TYPES[37/*Uno.Action<Outracks.Simulator.Bytecode.Literal, Uno.IO.BinaryWriter>*/], (void*)::g::Outracks::Simulator::Bytecode::Literal__Write2_fn), writer, &ret18), ret18), (::g::Outracks::Simulator::Closure__ApplySecond_fn(::TYPES[38/*Outracks.Simulator.Closure.ApplySecond<Outracks.Simulator.Bytecode.Lambda, Uno.IO.BinaryWriter>*/], uDelegate::New(::TYPES[39/*Uno.Action<Outracks.Simulator.Bytecode.Lambda, Uno.IO.BinaryWriter>*/], (void*)::g::Outracks::Simulator::Bytecode::Lambda__Write2_fn), writer, &ret19), ret19), (::g::Outracks::Simulator::Closure__ApplySecond_fn(::TYPES[40/*Outracks.Simulator.Closure.ApplySecond<Outracks.Simulator.Bytecode.MethodGroup, Uno.IO.BinaryWriter>*/], uDelegate::New(::TYPES[41/*Uno.Action<Outracks.Simulator.Bytecode.MethodGroup, Uno.IO.BinaryWriter>*/], (void*)::g::Outracks::Simulator::Bytecode::MethodGroup__Write2_fn), writer, &ret20), ret20), (::g::Outracks::Simulator::Closure__ApplySecond_fn(::TYPES[42/*Outracks.Simulator.Closure.ApplySecond<Outracks.Simulator.Bytecode.IsType, Uno.IO.BinaryWriter>*/], uDelegate::New(::TYPES[43/*Uno.Action<Outracks.Simulator.Bytecode.IsType, Uno.IO.BinaryWriter>*/], (void*)::g::Outracks::Simulator::Bytecode::IsType__Write2_fn), writer, &ret21), ret21), (::g::Outracks::Simulator::Closure__ApplySecond_fn(::TYPES[44/*Outracks.Simulator.Closure.ApplySecond<Outracks.Simulator.Bytecode.LogicalOr, Uno.IO.BinaryWriter>*/], uDelegate::New(::TYPES[45/*Uno.Action<Outracks.Simulator.Bytecode.LogicalOr, Uno.IO.BinaryWriter>*/], (void*)::g::Outracks::Simulator::Bytecode::LogicalOr__Write2_fn), writer, &ret22), ret22), (::g::Outracks::Simulator::Closure__ApplySecond_fn(::TYPES[46/*Outracks.Simulator.Closure.ApplySecond<Outracks.Simulator.Bytecode.Instantiate, Uno.IO.BinaryWriter>*/], uDelegate::New(::TYPES[47/*Uno.Action<Outracks.Simulator.Bytecode.Instantiate, Uno.IO.BinaryWriter>*/], (void*)::g::Outracks::Simulator::Bytecode::Instantiate__Write2_fn), writer, &ret23), ret23), (::g::Outracks::Simulator::Closure__ApplySecond_fn(::TYPES[48/*Outracks.Simulator.Closure.ApplySecond<Outracks.Simulator.Bytecode.CallLambda, Uno.IO.BinaryWriter>*/], uDelegate::New(::TYPES[49/*Uno.Action<Outracks.Simulator.Bytecode.CallLambda, Uno.IO.BinaryWriter>*/], (void*)::g::Outracks::Simulator::Bytecode::CallLambda__Write2_fn), writer, &ret24), ret24), (::g::Outracks::Simulator::Closure__ApplySecond_fn(::TYPES[50/*Outracks.Simulator.Closure.ApplySecond<Outracks.Simulator.Bytecode.CallStaticMethod, Uno.IO.BinaryWriter>*/], uDelegate::New(::TYPES[51/*Uno.Action<Outracks.Simulator.Bytecode.CallStaticMethod, Uno.IO.BinaryWriter>*/], (void*)::g::Outracks::Simulator::Bytecode::CallStaticMethod__Write2_fn), writer, &ret25), ret25), (::g::Outracks::Simulator::Closure__ApplySecond_fn(::TYPES[52/*Outracks.Simulator.Closure.ApplySecond<Outracks.Simulator.Bytecode.CallDynamicMethod, Uno.IO.BinaryWriter>*/], uDelegate::New(::TYPES[53/*Uno.Action<Outracks.Simulator.Bytecode.CallDynamicMethod, Uno.IO.BinaryWriter>*/], (void*)::g::Outracks::Simulator::Bytecode::CallDynamicMethod__Write2_fn), writer, &ret26), ret26), (::g::Outracks::Simulator::Closure__ApplySecond_fn(::TYPES[54/*Outracks.Simulator.Closure.ApplySecond<Outracks.Simulator.Bytecode.ReadStaticField, Uno.IO.BinaryWriter>*/], uDelegate::New(::TYPES[55/*Uno.Action<Outracks.Simulator.Bytecode.ReadStaticField, Uno.IO.BinaryWriter>*/], (void*)::g::Outracks::Simulator::Bytecode::ReadStaticField__Write2_fn), writer, &ret27), ret27), (::g::Outracks::Simulator::Closure__ApplySecond_fn(::TYPES[56/*Outracks.Simulator.Closure.ApplySecond<Outracks.Simulator.Bytecode.ReadProperty, Uno.IO.BinaryWriter>*/], uDelegate::New(::TYPES[57/*Uno.Action<Outracks.Simulator.Bytecode.ReadProperty, Uno.IO.BinaryWriter>*/], (void*)::g::Outracks::Simulator::Bytecode::ReadProperty__Write2_fn), writer, &ret28), ret28), (::g::Outracks::Simulator::Closure__ApplySecond_fn(::TYPES[58/*Outracks.Simulator.Closure.ApplySecond<Outracks.Simulator.Bytecode.WriteProperty, Uno.IO.BinaryWriter>*/], uDelegate::New(::TYPES[59/*Uno.Action<Outracks.Simulator.Bytecode.WriteProperty, Uno.IO.BinaryWriter>*/], (void*)::g::Outracks::Simulator::Bytecode::WriteProperty__Write2_fn), writer, &ret29), ret29), (::g::Outracks::Simulator::Closure__ApplySecond_fn(::TYPES[60/*Outracks.Simulator.Closure.ApplySecond<Outracks.Simulator.Bytecode.AddEventHandler, Uno.IO.BinaryWriter>*/], uDelegate::New(::TYPES[61/*Uno.Action<Outracks.Simulator.Bytecode.AddEventHandler, Uno.IO.BinaryWriter>*/], (void*)::g::Outracks::Simulator::Bytecode::AddEventHandler__Write2_fn), writer, &ret30), ret30), (::g::Outracks::Simulator::Closure__ApplySecond_fn(::TYPES[62/*Outracks.Simulator.Closure.ApplySecond<Outracks.Simulator.Bytecode.RemoveEventHandler, Uno.IO.BinaryWriter>*/], uDelegate::New(::TYPES[63/*Uno.Action<Outracks.Simulator.Bytecode.RemoveEventHandler, Uno.IO.BinaryWriter>*/], (void*)::g::Outracks::Simulator::Bytecode::RemoveEventHandler__Write2_fn), writer, &ret31), ret31));
}

// public static Outracks.Simulator.Bytecode.Expression Throw(Uno.Exception e) [static] :219
Expression* Expression::Throw(::g::Uno::Exception* e)
{
    Expression_typeof()->Init();
    U_THROW(e);
}
// }

// C:\ProgramData\Uno\Packages\Outracks.Simulator.Protocol.Uno\0.1.0\Bytecode\$.uno(338)
// -------------------------------------------------------------------------------------

// public sealed class Instantiate :338
// {
uType* Instantiate_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 2;
    options.ObjectSize = sizeof(Instantiate);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Outracks.Simulator.Bytecode.Instantiate", options);
    type->SetBase(::g::Outracks::Simulator::Bytecode::Expression_typeof());
    type->fp_ToString = (void(*)(uObject*, uString**))Instantiate__ToString_fn;
    ::STRINGS[9] = uString::Const("new ");
    ::STRINGS[6] = uString::Const("(");
    ::STRINGS[7] = uString::Const(", ");
    ::STRINGS[8] = uString::Const(")");
    ::TYPES[12] = ::g::Outracks::Simulator::List_typeof()->MakeMethod(1, ::g::Outracks::Simulator::Bytecode::Expression_typeof());
    ::TYPES[13] = ::g::Uno::Collections::IEnumerable_typeof()->MakeType(::g::Outracks::Simulator::Bytecode::Expression_typeof());
    ::TYPES[14] = ::g::Uno::Runtime::Implementation::Internal::ArrayEnumerable_typeof()->MakeType(::g::Outracks::Simulator::Bytecode::Expression_typeof());
    ::TYPES[95] = ::g::Uno::Func1_typeof()->MakeType(::g::Uno::IO::BinaryReader_typeof(), ::g::Outracks::Simulator::Bytecode::TypeName_typeof());
    ::TYPES[96] = ::g::Outracks::Simulator::Bytecode::TypeName_typeof();
    ::TYPES[15] = ::g::Outracks::Simulator::List_typeof()->MakeMethod(1, ::g::Outracks::Simulator::Bytecode::Expression_typeof());
    ::TYPES[1] = ::g::Outracks::Simulator::Bytecode::Expression_typeof();
    ::TYPES[16] = ::g::Outracks::Simulator::StringSplitting_typeof()->MakeMethod(1, ::g::Outracks::Simulator::Bytecode::Expression_typeof());
    ::TYPES[97] = ::g::Uno::Action2_typeof()->MakeType(::g::Outracks::Simulator::Bytecode::TypeName_typeof(), ::g::Uno::IO::BinaryWriter_typeof());
    ::TYPES[17] = ::g::Outracks::Simulator::List_typeof()->MakeMethod(1, ::g::Outracks::Simulator::Bytecode::Expression_typeof());
    type->SetFields(0,
        ::g::Outracks::Simulator::ImmutableList_typeof()->MakeType(::g::Outracks::Simulator::Bytecode::Expression_typeof()), offsetof(::g::Outracks::Simulator::Bytecode::Instantiate, Arguments), 0,
        ::g::Outracks::Simulator::Bytecode::TypeName_typeof(), offsetof(::g::Outracks::Simulator::Bytecode::Instantiate, Type), 0);
    type->Reflection.SetFields(2,
        new uField("Arguments", 0),
        new uField("Type", 1));
    type->Reflection.SetFunctions(5,
        new uFunction(".ctor", NULL, (void*)Instantiate__New1_fn, 0, true, Instantiate_typeof(), 2, ::g::Outracks::Simulator::Bytecode::TypeName_typeof(), ::g::Outracks::Simulator::Bytecode::Expression_typeof()->Array()),
        new uFunction(".ctor", NULL, (void*)Instantiate__New2_fn, 0, true, Instantiate_typeof(), 2, ::g::Outracks::Simulator::Bytecode::TypeName_typeof(), ::g::Outracks::Simulator::ImmutableList_typeof()->MakeType(::g::Outracks::Simulator::Bytecode::Expression_typeof())),
        new uFunction("Read", NULL, (void*)Instantiate__Read2_fn, 0, true, Instantiate_typeof(), 1, ::g::Uno::IO::BinaryReader_typeof()),
        new uFunction("Write", NULL, (void*)Instantiate__Write2_fn, 0, true, uVoid_typeof(), 2, Instantiate_typeof(), ::g::Uno::IO::BinaryWriter_typeof()),
        new uFunction("Write", NULL, (void*)Instantiate__Write3_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::IO::BinaryWriter_typeof()));
    return type;
}

// public Instantiate(Outracks.Simulator.Bytecode.TypeName type, Outracks.Simulator.Bytecode.Expression[] arguments) :343
void Instantiate__ctor_2_fn(Instantiate* __this, ::g::Outracks::Simulator::Bytecode::TypeName* type, uArray* arguments)
{
    __this->ctor_2(type, arguments);
}

// public Instantiate(Outracks.Simulator.Bytecode.TypeName type, Outracks.Simulator.ImmutableList<Outracks.Simulator.Bytecode.Expression> arguments) :347
void Instantiate__ctor_3_fn(Instantiate* __this, ::g::Outracks::Simulator::Bytecode::TypeName* type, ::g::Outracks::Simulator::ImmutableList* arguments)
{
    __this->ctor_3(type, arguments);
}

// public Instantiate New(Outracks.Simulator.Bytecode.TypeName type, Outracks.Simulator.Bytecode.Expression[] arguments) :343
void Instantiate__New1_fn(::g::Outracks::Simulator::Bytecode::TypeName* type, uArray* arguments, Instantiate** __retval)
{
    *__retval = Instantiate::New1(type, arguments);
}

// public Instantiate New(Outracks.Simulator.Bytecode.TypeName type, Outracks.Simulator.ImmutableList<Outracks.Simulator.Bytecode.Expression> arguments) :347
void Instantiate__New2_fn(::g::Outracks::Simulator::Bytecode::TypeName* type, ::g::Outracks::Simulator::ImmutableList* arguments, Instantiate** __retval)
{
    *__retval = Instantiate::New2(type, arguments);
}

// public static new Outracks.Simulator.Bytecode.Instantiate Read(Uno.IO.BinaryReader reader) :369
void Instantiate__Read2_fn(::g::Uno::IO::BinaryReader* reader, Instantiate** __retval)
{
    *__retval = Instantiate::Read2(reader);
}

// public override sealed string ToString() :353
void Instantiate__ToString_fn(Instantiate* __this, uString** __retval)
{
    return *__retval = ::g::Uno::String::op_Addition2(::g::Uno::String::op_Addition2(::g::Uno::String::op_Addition2(::g::Uno::String::op_Addition2(::STRINGS[9/*"new "*/], uPtr(__this->Type)->FullName()), ::STRINGS[6/*"("*/]), ::g::Outracks::Simulator::StringSplitting::JoinToString(::TYPES[16/*Outracks.Simulator.StringSplitting.JoinToString<Outracks.Simulator.Bytecode.Expression>*/], (uObject*)__this->Arguments, ::STRINGS[7/*", "*/])), ::STRINGS[8/*")"*/]), void();
}

// public static new void Write(Outracks.Simulator.Bytecode.Instantiate o, Uno.IO.BinaryWriter writer) :358
void Instantiate__Write2_fn(Instantiate* o, ::g::Uno::IO::BinaryWriter* writer)
{
    Instantiate::Write2(o, writer);
}

// public new void Write(Uno.IO.BinaryWriter writer) :363
void Instantiate__Write3_fn(Instantiate* __this, ::g::Uno::IO::BinaryWriter* writer)
{
    __this->Write3(writer);
}

// public Instantiate(Outracks.Simulator.Bytecode.TypeName type, Outracks.Simulator.Bytecode.Expression[] arguments) [instance] :343
void Instantiate::ctor_2(::g::Outracks::Simulator::Bytecode::TypeName* type, uArray* arguments)
{
    ctor_3(type, (::g::Outracks::Simulator::ImmutableList*)::g::Outracks::Simulator::List::ToImmutableList(::TYPES[12/*Outracks.Simulator.List.ToImmutableList<Outracks.Simulator.Bytecode.Expression>*/], (uObject*)((::g::Uno::Runtime::Implementation::Internal::ArrayEnumerable*)::g::Uno::Runtime::Implementation::Internal::ArrayEnumerable::New1(::TYPES[14/*Uno.Runtime.Implementation.Internal.ArrayEnumerable<Outracks.Simulator.Bytecode.Expression>*/], arguments))));
}

// public Instantiate(Outracks.Simulator.Bytecode.TypeName type, Outracks.Simulator.ImmutableList<Outracks.Simulator.Bytecode.Expression> arguments) [instance] :347
void Instantiate::ctor_3(::g::Outracks::Simulator::Bytecode::TypeName* type, ::g::Outracks::Simulator::ImmutableList* arguments)
{
    ctor_1();
    Type = type;
    Arguments = arguments;
}

// public new void Write(Uno.IO.BinaryWriter writer) [instance] :363
void Instantiate::Write3(::g::Uno::IO::BinaryWriter* writer)
{
    uPtr(::g::Outracks::Simulator::Bytecode::TypeName::Write())->Invoke(2, (::g::Outracks::Simulator::Bytecode::TypeName*)Type, writer);
    ::g::Outracks::Simulator::List::Write1(::TYPES[17/*Outracks.Simulator.List.Write<Outracks.Simulator.Bytecode.Expression>*/], writer, Arguments, ::g::Outracks::Simulator::Bytecode::Expression::Write1());
}

// public Instantiate New(Outracks.Simulator.Bytecode.TypeName type, Outracks.Simulator.Bytecode.Expression[] arguments) [static] :343
Instantiate* Instantiate::New1(::g::Outracks::Simulator::Bytecode::TypeName* type, uArray* arguments)
{
    Instantiate* obj1 = (Instantiate*)uNew(Instantiate_typeof());
    obj1->ctor_2(type, arguments);
    return obj1;
}

// public Instantiate New(Outracks.Simulator.Bytecode.TypeName type, Outracks.Simulator.ImmutableList<Outracks.Simulator.Bytecode.Expression> arguments) [static] :347
Instantiate* Instantiate::New2(::g::Outracks::Simulator::Bytecode::TypeName* type, ::g::Outracks::Simulator::ImmutableList* arguments)
{
    Instantiate* obj2 = (Instantiate*)uNew(Instantiate_typeof());
    obj2->ctor_3(type, arguments);
    return obj2;
}

// public static new Outracks.Simulator.Bytecode.Instantiate Read(Uno.IO.BinaryReader reader) [static] :369
Instantiate* Instantiate::Read2(::g::Uno::IO::BinaryReader* reader)
{
    ::g::Outracks::Simulator::Bytecode::TypeName* _Type = (::g::Outracks::Simulator::Bytecode::TypeName*)uPtr(::g::Outracks::Simulator::Bytecode::TypeName::Read())->Invoke(1, reader);
    ::g::Outracks::Simulator::ImmutableList* _Arguments = (::g::Outracks::Simulator::ImmutableList*)::g::Outracks::Simulator::List::Read(::TYPES[15/*Outracks.Simulator.List.Read<Outracks.Simulator.Bytecode.Expression>*/], reader, ::g::Outracks::Simulator::Bytecode::Expression::Read1());
    return Instantiate::New2(_Type, _Arguments);
}

// public static new void Write(Outracks.Simulator.Bytecode.Instantiate o, Uno.IO.BinaryWriter writer) [static] :358
void Instantiate::Write2(Instantiate* o, ::g::Uno::IO::BinaryWriter* writer)
{
    uPtr(o)->Write3(writer);
}
// }

// C:\ProgramData\Uno\Packages\Outracks.Simulator.Protocol.Uno\0.1.0\Bytecode\$.uno(270)
// -------------------------------------------------------------------------------------

// public sealed class IsType :270
// {
uType* IsType_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 3;
    options.ObjectSize = sizeof(IsType);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Outracks.Simulator.Bytecode.IsType", options);
    type->SetBase(::g::Outracks::Simulator::Bytecode::Expression_typeof());
    ::TYPES[0] = ::g::Uno::Func1_typeof()->MakeType(::g::Uno::IO::BinaryReader_typeof(), ::g::Outracks::Simulator::Bytecode::Expression_typeof());
    ::TYPES[1] = ::g::Outracks::Simulator::Bytecode::Expression_typeof();
    ::TYPES[95] = ::g::Uno::Func1_typeof()->MakeType(::g::Uno::IO::BinaryReader_typeof(), ::g::Outracks::Simulator::Bytecode::TypeName_typeof());
    ::TYPES[96] = ::g::Outracks::Simulator::Bytecode::TypeName_typeof();
    ::TYPES[4] = ::g::Uno::Action2_typeof()->MakeType(::g::Outracks::Simulator::Bytecode::Expression_typeof(), ::g::Uno::IO::BinaryWriter_typeof());
    ::TYPES[97] = ::g::Uno::Action2_typeof()->MakeType(::g::Outracks::Simulator::Bytecode::TypeName_typeof(), ::g::Uno::IO::BinaryWriter_typeof());
    type->SetFields(0,
        ::g::Uno::Bool_typeof(), offsetof(::g::Outracks::Simulator::Bytecode::IsType, IncludeSubtypes), 0,
        ::g::Outracks::Simulator::Bytecode::Expression_typeof(), offsetof(::g::Outracks::Simulator::Bytecode::IsType, Object), 0,
        ::g::Outracks::Simulator::Bytecode::TypeName_typeof(), offsetof(::g::Outracks::Simulator::Bytecode::IsType, Type), 0);
    type->Reflection.SetFields(3,
        new uField("IncludeSubtypes", 0),
        new uField("Object", 1),
        new uField("Type", 2));
    type->Reflection.SetFunctions(4,
        new uFunction(".ctor", NULL, (void*)IsType__New1_fn, 0, true, IsType_typeof(), 3, ::g::Outracks::Simulator::Bytecode::Expression_typeof(), ::g::Outracks::Simulator::Bytecode::TypeName_typeof(), ::g::Uno::Bool_typeof()),
        new uFunction("Read", NULL, (void*)IsType__Read2_fn, 0, true, IsType_typeof(), 1, ::g::Uno::IO::BinaryReader_typeof()),
        new uFunction("Write", NULL, (void*)IsType__Write2_fn, 0, true, uVoid_typeof(), 2, IsType_typeof(), ::g::Uno::IO::BinaryWriter_typeof()),
        new uFunction("Write", NULL, (void*)IsType__Write3_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::IO::BinaryWriter_typeof()));
    return type;
}

// public IsType(Outracks.Simulator.Bytecode.Expression o, Outracks.Simulator.Bytecode.TypeName type, [bool includeSubtypes]) :276
void IsType__ctor_2_fn(IsType* __this, ::g::Outracks::Simulator::Bytecode::Expression* o, ::g::Outracks::Simulator::Bytecode::TypeName* type, bool* includeSubtypes)
{
    __this->ctor_2(o, type, *includeSubtypes);
}

// public IsType New(Outracks.Simulator.Bytecode.Expression o, Outracks.Simulator.Bytecode.TypeName type, [bool includeSubtypes]) :276
void IsType__New1_fn(::g::Outracks::Simulator::Bytecode::Expression* o, ::g::Outracks::Simulator::Bytecode::TypeName* type, bool* includeSubtypes, IsType** __retval)
{
    *__retval = IsType::New1(o, type, *includeSubtypes);
}

// public static new Outracks.Simulator.Bytecode.IsType Read(Uno.IO.BinaryReader reader) :295
void IsType__Read2_fn(::g::Uno::IO::BinaryReader* reader, IsType** __retval)
{
    *__retval = IsType::Read2(reader);
}

// public static new void Write(Outracks.Simulator.Bytecode.IsType o, Uno.IO.BinaryWriter writer) :283
void IsType__Write2_fn(IsType* o, ::g::Uno::IO::BinaryWriter* writer)
{
    IsType::Write2(o, writer);
}

// public new void Write(Uno.IO.BinaryWriter writer) :288
void IsType__Write3_fn(IsType* __this, ::g::Uno::IO::BinaryWriter* writer)
{
    __this->Write3(writer);
}

// public IsType(Outracks.Simulator.Bytecode.Expression o, Outracks.Simulator.Bytecode.TypeName type, [bool includeSubtypes]) [instance] :276
void IsType::ctor_2(::g::Outracks::Simulator::Bytecode::Expression* o, ::g::Outracks::Simulator::Bytecode::TypeName* type, bool includeSubtypes)
{
    ctor_1();
    Object = o;
    Type = type;
    IncludeSubtypes = includeSubtypes;
}

// public new void Write(Uno.IO.BinaryWriter writer) [instance] :288
void IsType::Write3(::g::Uno::IO::BinaryWriter* writer)
{
    uPtr(::g::Outracks::Simulator::Bytecode::Expression::Write1())->Invoke(2, (::g::Outracks::Simulator::Bytecode::Expression*)Object, writer);
    uPtr(::g::Outracks::Simulator::Bytecode::TypeName::Write())->Invoke(2, (::g::Outracks::Simulator::Bytecode::TypeName*)Type, writer);
    uPtr(writer)->Write(IncludeSubtypes);
}

// public IsType New(Outracks.Simulator.Bytecode.Expression o, Outracks.Simulator.Bytecode.TypeName type, [bool includeSubtypes]) [static] :276
IsType* IsType::New1(::g::Outracks::Simulator::Bytecode::Expression* o, ::g::Outracks::Simulator::Bytecode::TypeName* type, bool includeSubtypes)
{
    IsType* obj1 = (IsType*)uNew(IsType_typeof());
    obj1->ctor_2(o, type, includeSubtypes);
    return obj1;
}

// public static new Outracks.Simulator.Bytecode.IsType Read(Uno.IO.BinaryReader reader) [static] :295
IsType* IsType::Read2(::g::Uno::IO::BinaryReader* reader)
{
    ::g::Outracks::Simulator::Bytecode::Expression* _Object = (::g::Outracks::Simulator::Bytecode::Expression*)uPtr(::g::Outracks::Simulator::Bytecode::Expression::Read1())->Invoke(1, reader);
    ::g::Outracks::Simulator::Bytecode::TypeName* _Type = (::g::Outracks::Simulator::Bytecode::TypeName*)uPtr(::g::Outracks::Simulator::Bytecode::TypeName::Read())->Invoke(1, reader);
    bool _IncludeSubtypes = uPtr(reader)->ReadBoolean();
    return IsType::New1(_Object, _Type, _IncludeSubtypes);
}

// public static new void Write(Outracks.Simulator.Bytecode.IsType o, Uno.IO.BinaryWriter writer) [static] :283
void IsType::Write2(IsType* o, ::g::Uno::IO::BinaryWriter* writer)
{
    uPtr(o)->Write3(writer);
}
// }

// C:\ProgramData\Uno\Packages\Outracks.Simulator.Protocol.Uno\0.1.0\Bytecode\$.uno(1555)
// --------------------------------------------------------------------------------------

// public sealed class Lambda :1555
// {
uType* Lambda_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 3;
    options.ObjectSize = sizeof(Lambda);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Outracks.Simulator.Bytecode.Lambda", options);
    type->SetBase(::g::Outracks::Simulator::Bytecode::Expression_typeof());
    type->fp_ToString = (void(*)(uObject*, uString**))Lambda__ToString_fn;
    ::STRINGS[10] = uString::Const(";\n"
        "");
    ::STRINGS[11] = uString::Const(" => \n"
        "");
    ::STRINGS[12] = uString::Const("{\n"
        "");
    ::STRINGS[13] = uString::Const("\n"
        "}");
    ::TYPES[98] = ::g::Outracks::Simulator::List_typeof()->MakeMethod(1, ::g::Outracks::Simulator::Bytecode::BindVariable_typeof());
    ::TYPES[99] = ::g::Outracks::Simulator::List_typeof()->MakeMethod(1, ::g::Outracks::Simulator::Bytecode::Statement_typeof());
    ::TYPES[100] = ::g::Outracks::Simulator::List_typeof()->MakeMethod(1, ::g::Outracks::Simulator::Bytecode::BindVariable_typeof());
    ::TYPES[101] = ::g::Outracks::Simulator::Bytecode::BindVariable_typeof();
    ::TYPES[102] = ::g::Outracks::Simulator::List_typeof()->MakeMethod(1, ::g::Outracks::Simulator::Bytecode::Statement_typeof());
    ::TYPES[103] = ::g::Outracks::Simulator::Bytecode::Statement_typeof();
    ::TYPES[104] = ::g::Uno::Collections::IEnumerator1_typeof()->MakeType(::g::Outracks::Simulator::Bytecode::BindVariable_typeof());
    ::TYPES[2] = uObject_typeof();
    ::TYPES[105] = ::g::Uno::Collections::IEnumerator1_typeof()->MakeType(::g::Outracks::Simulator::Bytecode::Statement_typeof());
    ::TYPES[106] = ::g::Outracks::Simulator::List_typeof()->MakeMethod(1, ::g::Outracks::Simulator::Bytecode::BindVariable_typeof());
    ::TYPES[107] = ::g::Outracks::Simulator::List_typeof()->MakeMethod(1, ::g::Outracks::Simulator::Bytecode::Statement_typeof());
    type->SetFields(0,
        ::g::Outracks::Simulator::ImmutableList_typeof()->MakeType(::g::Outracks::Simulator::Bytecode::BindVariable_typeof()), offsetof(::g::Outracks::Simulator::Bytecode::Lambda, LocalVariables), 0,
        ::g::Outracks::Simulator::Bytecode::Signature_typeof(), offsetof(::g::Outracks::Simulator::Bytecode::Lambda, Signature), 0,
        ::g::Outracks::Simulator::ImmutableList_typeof()->MakeType(::g::Outracks::Simulator::Bytecode::Statement_typeof()), offsetof(::g::Outracks::Simulator::Bytecode::Lambda, Statements), 0);
    type->Reflection.SetFields(3,
        new uField("LocalVariables", 0),
        new uField("Signature", 1),
        new uField("Statements", 2));
    type->Reflection.SetFunctions(4,
        new uFunction(".ctor", NULL, (void*)Lambda__New1_fn, 0, true, Lambda_typeof(), 3, ::g::Outracks::Simulator::Bytecode::Signature_typeof(), ::g::Outracks::Simulator::ImmutableList_typeof()->MakeType(::g::Outracks::Simulator::Bytecode::BindVariable_typeof()), ::g::Outracks::Simulator::ImmutableList_typeof()->MakeType(::g::Outracks::Simulator::Bytecode::Statement_typeof())),
        new uFunction(".ctor", NULL, (void*)Lambda__New2_fn, 0, true, Lambda_typeof(), 3, ::g::Outracks::Simulator::Bytecode::Signature_typeof(), ::g::Uno::Collections::IEnumerable_typeof()->MakeType(::g::Outracks::Simulator::Bytecode::BindVariable_typeof()), ::g::Uno::Collections::IEnumerable_typeof()->MakeType(::g::Outracks::Simulator::Bytecode::Statement_typeof())),
        new uFunction("Read", NULL, (void*)Lambda__Read2_fn, 0, true, Lambda_typeof(), 1, ::g::Uno::IO::BinaryReader_typeof()),
        new uFunction("Write", NULL, (void*)Lambda__Write2_fn, 0, true, uVoid_typeof(), 2, Lambda_typeof(), ::g::Uno::IO::BinaryWriter_typeof()));
    return type;
}

// public Lambda(Outracks.Simulator.Bytecode.Signature signature, Outracks.Simulator.ImmutableList<Outracks.Simulator.Bytecode.BindVariable> localVariables, Outracks.Simulator.ImmutableList<Outracks.Simulator.Bytecode.Statement> statements) :1568
void Lambda__ctor_2_fn(Lambda* __this, ::g::Outracks::Simulator::Bytecode::Signature* signature, ::g::Outracks::Simulator::ImmutableList* localVariables, ::g::Outracks::Simulator::ImmutableList* statements)
{
    __this->ctor_2(signature, localVariables, statements);
}

// public Lambda(Outracks.Simulator.Bytecode.Signature signature, Uno.Collections.IEnumerable<Outracks.Simulator.Bytecode.BindVariable> localVariables, Uno.Collections.IEnumerable<Outracks.Simulator.Bytecode.Statement> statements) :1561
void Lambda__ctor_3_fn(Lambda* __this, ::g::Outracks::Simulator::Bytecode::Signature* signature, uObject* localVariables, uObject* statements)
{
    __this->ctor_3(signature, localVariables, statements);
}

// private static string AddStatementSeparator(object s) :1592
void Lambda__AddStatementSeparator_fn(uObject* s, uString** __retval)
{
    *__retval = Lambda::AddStatementSeparator(s);
}

// public Lambda New(Outracks.Simulator.Bytecode.Signature signature, Outracks.Simulator.ImmutableList<Outracks.Simulator.Bytecode.BindVariable> localVariables, Outracks.Simulator.ImmutableList<Outracks.Simulator.Bytecode.Statement> statements) :1568
void Lambda__New1_fn(::g::Outracks::Simulator::Bytecode::Signature* signature, ::g::Outracks::Simulator::ImmutableList* localVariables, ::g::Outracks::Simulator::ImmutableList* statements, Lambda** __retval)
{
    *__retval = Lambda::New1(signature, localVariables, statements);
}

// public Lambda New(Outracks.Simulator.Bytecode.Signature signature, Uno.Collections.IEnumerable<Outracks.Simulator.Bytecode.BindVariable> localVariables, Uno.Collections.IEnumerable<Outracks.Simulator.Bytecode.Statement> statements) :1561
void Lambda__New2_fn(::g::Outracks::Simulator::Bytecode::Signature* signature, uObject* localVariables, uObject* statements, Lambda** __retval)
{
    *__retval = Lambda::New2(signature, localVariables, statements);
}

// public static new Outracks.Simulator.Bytecode.Lambda Read(Uno.IO.BinaryReader reader) :1604
void Lambda__Read2_fn(::g::Uno::IO::BinaryReader* reader, Lambda** __retval)
{
    *__retval = Lambda::Read2(reader);
}

// public override sealed string ToString() :1578
void Lambda__ToString_fn(Lambda* __this, uString** __retval)
{
    ::g::Outracks::Simulator::Bytecode::BindVariable* ret5;
    ::g::Outracks::Simulator::Bytecode::Statement* ret6;
    ::g::Uno::Text::StringBuilder* code = ::g::Uno::Text::StringBuilder::New1();

    for (uObject* enum1 = (uObject*)uPtr(__this->LocalVariables)->GetEnumerator(); ::g::Uno::Collections::IEnumerator::MoveNext(uInterface(uPtr(enum1), ::g::Uno::Collections::IEnumerator_typeof())); )
    {
        ::g::Outracks::Simulator::Bytecode::BindVariable* stmnt = (::g::Uno::Collections::IEnumerator1::get_Current_ex(uInterface(uPtr(enum1), ::TYPES[104/*Uno.Collections.IEnumerator<Outracks.Simulator.Bytecode.BindVariable>*/]), &ret5), ret5);
        uPtr(code)->Append1(Lambda::AddStatementSeparator(stmnt));
    }

    for (uObject* enum2 = (uObject*)uPtr(__this->Statements)->GetEnumerator(); ::g::Uno::Collections::IEnumerator::MoveNext(uInterface(uPtr(enum2), ::g::Uno::Collections::IEnumerator_typeof())); )
    {
        ::g::Outracks::Simulator::Bytecode::Statement* stmnt1 = (::g::Uno::Collections::IEnumerator1::get_Current_ex(uInterface(uPtr(enum2), ::TYPES[105/*Uno.Collections.IEnumerator<Outracks.Simulator.Bytecode.Statement>*/]), &ret6), ret6);
        uPtr(code)->Append1(Lambda::AddStatementSeparator(stmnt1));
    }

    return *__retval = ::g::Uno::String::op_Addition2(::g::Uno::String::op_Addition2(::g::Uno::String::op_Addition2(::g::Uno::String::op_Addition(__this->Signature, ::STRINGS[11/*" => \n"*/]), ::STRINGS[12/*"{\n"*/]), ::g::Outracks::Simulator::IndentString::Indent(code->ToString())), ::STRINGS[13/*"\n}"*/]), void();
}

// public static new void Write(Outracks.Simulator.Bytecode.Lambda l, Uno.IO.BinaryWriter writer) :1597
void Lambda__Write2_fn(Lambda* l, ::g::Uno::IO::BinaryWriter* writer)
{
    Lambda::Write2(l, writer);
}

// public Lambda(Outracks.Simulator.Bytecode.Signature signature, Outracks.Simulator.ImmutableList<Outracks.Simulator.Bytecode.BindVariable> localVariables, Outracks.Simulator.ImmutableList<Outracks.Simulator.Bytecode.Statement> statements) [instance] :1568
void Lambda::ctor_2(::g::Outracks::Simulator::Bytecode::Signature* signature, ::g::Outracks::Simulator::ImmutableList* localVariables, ::g::Outracks::Simulator::ImmutableList* statements)
{
    ctor_1();
    Signature = signature;
    LocalVariables = localVariables;
    Statements = statements;
}

// public Lambda(Outracks.Simulator.Bytecode.Signature signature, Uno.Collections.IEnumerable<Outracks.Simulator.Bytecode.BindVariable> localVariables, Uno.Collections.IEnumerable<Outracks.Simulator.Bytecode.Statement> statements) [instance] :1561
void Lambda::ctor_3(::g::Outracks::Simulator::Bytecode::Signature* signature, uObject* localVariables, uObject* statements)
{
    ctor_2(signature, (::g::Outracks::Simulator::ImmutableList*)::g::Outracks::Simulator::List::ToImmutableList(::TYPES[98/*Outracks.Simulator.List.ToImmutableList<Outracks.Simulator.Bytecode.BindVariable>*/], localVariables), (::g::Outracks::Simulator::ImmutableList*)::g::Outracks::Simulator::List::ToImmutableList(::TYPES[99/*Outracks.Simulator.List.ToImmutableList<Outracks.Simulator.Bytecode.Statement>*/], statements));
}

// private static string AddStatementSeparator(object s) [static] :1592
uString* Lambda::AddStatementSeparator(uObject* s)
{
    return ::g::Uno::String::op_Addition(s, ::STRINGS[10/*";\n"*/]);
}

// public Lambda New(Outracks.Simulator.Bytecode.Signature signature, Outracks.Simulator.ImmutableList<Outracks.Simulator.Bytecode.BindVariable> localVariables, Outracks.Simulator.ImmutableList<Outracks.Simulator.Bytecode.Statement> statements) [static] :1568
Lambda* Lambda::New1(::g::Outracks::Simulator::Bytecode::Signature* signature, ::g::Outracks::Simulator::ImmutableList* localVariables, ::g::Outracks::Simulator::ImmutableList* statements)
{
    Lambda* obj4 = (Lambda*)uNew(Lambda_typeof());
    obj4->ctor_2(signature, localVariables, statements);
    return obj4;
}

// public Lambda New(Outracks.Simulator.Bytecode.Signature signature, Uno.Collections.IEnumerable<Outracks.Simulator.Bytecode.BindVariable> localVariables, Uno.Collections.IEnumerable<Outracks.Simulator.Bytecode.Statement> statements) [static] :1561
Lambda* Lambda::New2(::g::Outracks::Simulator::Bytecode::Signature* signature, uObject* localVariables, uObject* statements)
{
    Lambda* obj3 = (Lambda*)uNew(Lambda_typeof());
    obj3->ctor_3(signature, localVariables, statements);
    return obj3;
}

// public static new Outracks.Simulator.Bytecode.Lambda Read(Uno.IO.BinaryReader reader) [static] :1604
Lambda* Lambda::Read2(::g::Uno::IO::BinaryReader* reader)
{
    ::g::Outracks::Simulator::Bytecode::Signature* signature = ::g::Outracks::Simulator::Bytecode::Signature::Read(reader);
    ::g::Outracks::Simulator::ImmutableList* localVariables = (::g::Outracks::Simulator::ImmutableList*)::g::Outracks::Simulator::List::Read(::TYPES[100/*Outracks.Simulator.List.Read<Outracks.Simulator.Bytecode.BindVariable>*/], reader, ::g::Outracks::Simulator::Bytecode::BindVariable::Read());
    ::g::Outracks::Simulator::ImmutableList* statements = (::g::Outracks::Simulator::ImmutableList*)::g::Outracks::Simulator::List::Read(::TYPES[102/*Outracks.Simulator.List.Read<Outracks.Simulator.Bytecode.Statement>*/], reader, ::g::Outracks::Simulator::Bytecode::Statement::Read());
    return Lambda::New1(signature, localVariables, statements);
}

// public static new void Write(Outracks.Simulator.Bytecode.Lambda l, Uno.IO.BinaryWriter writer) [static] :1597
void Lambda::Write2(Lambda* l, ::g::Uno::IO::BinaryWriter* writer)
{
    ::g::Outracks::Simulator::Bytecode::Signature::Write(uPtr(l)->Signature, writer);
    ::g::Outracks::Simulator::List::Write1(::TYPES[106/*Outracks.Simulator.List.Write<Outracks.Simulator.Bytecode.BindVariable>*/], writer, l->LocalVariables, ::g::Outracks::Simulator::Bytecode::BindVariable::Write());
    ::g::Outracks::Simulator::List::Write1(::TYPES[107/*Outracks.Simulator.List.Write<Outracks.Simulator.Bytecode.Statement>*/], writer, l->Statements, ::g::Outracks::Simulator::Bytecode::Statement::Write());
}
// }

// C:\ProgramData\Uno\Packages\Outracks.Simulator.Protocol.Uno\0.1.0\Bytecode\$.uno(706)
// -------------------------------------------------------------------------------------

// public abstract class Literal :706
// {
uType* Literal_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.MethodTypeCount = 1;
    options.ObjectSize = sizeof(Literal);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Outracks.Simulator.Bytecode.Literal", options);
    type->SetBase(::g::Outracks::Simulator::Bytecode::Expression_typeof());
    ::TYPES[108] = ::g::Outracks::Simulator::Bytecode::BooleanLiteral_typeof();
    ::TYPES[109] = ::g::Uno::Action1_typeof()->MakeType(::g::Outracks::Simulator::Bytecode::BooleanLiteral_typeof());
    ::TYPES[110] = ::g::Outracks::Simulator::Bytecode::StringLiteral_typeof();
    ::TYPES[111] = ::g::Uno::Action1_typeof()->MakeType(::g::Outracks::Simulator::Bytecode::StringLiteral_typeof());
    ::TYPES[112] = ::g::Outracks::Simulator::Bytecode::NumberLiteral_typeof();
    ::TYPES[113] = ::g::Uno::Action1_typeof()->MakeType(::g::Outracks::Simulator::Bytecode::NumberLiteral_typeof());
    ::TYPES[114] = ::g::Outracks::Simulator::Bytecode::EnumLiteral_typeof();
    ::TYPES[115] = ::g::Uno::Action1_typeof()->MakeType(::g::Outracks::Simulator::Bytecode::EnumLiteral_typeof());
    ::TYPES[116] = ::g::Outracks::Simulator::Bytecode::BlobLiteral_typeof();
    ::TYPES[117] = ::g::Uno::Action1_typeof()->MakeType(::g::Outracks::Simulator::Bytecode::BlobLiteral_typeof());
    ::TYPES[94] = ::g::Uno::Func1_typeof();
    ::TYPES[118] = Literal_typeof()->MakeMethod(1, ::g::Uno::Char_typeof());
    ::TYPES[119] = ::g::Outracks::Simulator::Closure_typeof()->MakeMethod(2, ::g::Outracks::Simulator::Bytecode::BooleanLiteral_typeof(), ::g::Uno::Char_typeof());
    ::TYPES[120] = ::g::Outracks::Simulator::Closure_typeof()->MakeMethod(2, ::g::Outracks::Simulator::Bytecode::StringLiteral_typeof(), ::g::Uno::Char_typeof());
    ::TYPES[121] = ::g::Outracks::Simulator::Closure_typeof()->MakeMethod(2, ::g::Outracks::Simulator::Bytecode::NumberLiteral_typeof(), ::g::Uno::Char_typeof());
    ::TYPES[122] = ::g::Outracks::Simulator::Closure_typeof()->MakeMethod(2, ::g::Outracks::Simulator::Bytecode::EnumLiteral_typeof(), ::g::Uno::Char_typeof());
    ::TYPES[123] = ::g::Outracks::Simulator::Closure_typeof()->MakeMethod(2, ::g::Outracks::Simulator::Bytecode::BlobLiteral_typeof(), ::g::Uno::Char_typeof());
    ::TYPES[124] = ::g::Outracks::Simulator::Closure_typeof()->MakeMethod(2, ::g::Outracks::Simulator::Bytecode::BooleanLiteral_typeof(), ::g::Uno::IO::BinaryWriter_typeof());
    ::TYPES[125] = ::g::Uno::Action2_typeof()->MakeType(::g::Outracks::Simulator::Bytecode::BooleanLiteral_typeof(), ::g::Uno::IO::BinaryWriter_typeof());
    ::TYPES[126] = ::g::Outracks::Simulator::Closure_typeof()->MakeMethod(2, ::g::Outracks::Simulator::Bytecode::StringLiteral_typeof(), ::g::Uno::IO::BinaryWriter_typeof());
    ::TYPES[127] = ::g::Uno::Action2_typeof()->MakeType(::g::Outracks::Simulator::Bytecode::StringLiteral_typeof(), ::g::Uno::IO::BinaryWriter_typeof());
    ::TYPES[128] = ::g::Outracks::Simulator::Closure_typeof()->MakeMethod(2, ::g::Outracks::Simulator::Bytecode::NumberLiteral_typeof(), ::g::Uno::IO::BinaryWriter_typeof());
    ::TYPES[129] = ::g::Uno::Action2_typeof()->MakeType(::g::Outracks::Simulator::Bytecode::NumberLiteral_typeof(), ::g::Uno::IO::BinaryWriter_typeof());
    ::TYPES[130] = ::g::Outracks::Simulator::Closure_typeof()->MakeMethod(2, ::g::Outracks::Simulator::Bytecode::EnumLiteral_typeof(), ::g::Uno::IO::BinaryWriter_typeof());
    ::TYPES[131] = ::g::Uno::Action2_typeof()->MakeType(::g::Outracks::Simulator::Bytecode::EnumLiteral_typeof(), ::g::Uno::IO::BinaryWriter_typeof());
    ::TYPES[132] = ::g::Outracks::Simulator::Closure_typeof()->MakeMethod(2, ::g::Outracks::Simulator::Bytecode::BlobLiteral_typeof(), ::g::Uno::IO::BinaryWriter_typeof());
    ::TYPES[133] = ::g::Uno::Action2_typeof()->MakeType(::g::Outracks::Simulator::Bytecode::BlobLiteral_typeof(), ::g::Uno::IO::BinaryWriter_typeof());
    type->Reflection.SetFunctions(4,
        new uFunction("Match", NULL, (void*)Literal__Match4_fn, 0, false, uVoid_typeof(), 5, ::g::Uno::Action1_typeof()->MakeType(::g::Outracks::Simulator::Bytecode::BooleanLiteral_typeof()), ::g::Uno::Action1_typeof()->MakeType(::g::Outracks::Simulator::Bytecode::StringLiteral_typeof()), ::g::Uno::Action1_typeof()->MakeType(::g::Outracks::Simulator::Bytecode::NumberLiteral_typeof()), ::g::Uno::Action1_typeof()->MakeType(::g::Outracks::Simulator::Bytecode::EnumLiteral_typeof()), ::g::Uno::Action1_typeof()->MakeType(::g::Outracks::Simulator::Bytecode::BlobLiteral_typeof())),
        new uFunction("Match`1", type, (void*)Literal__Match5_fn, 0, false, type->U(0), 5, ::g::Uno::Func1_typeof()->MakeType(::g::Outracks::Simulator::Bytecode::BooleanLiteral_typeof(), type->U(0)), ::g::Uno::Func1_typeof()->MakeType(::g::Outracks::Simulator::Bytecode::StringLiteral_typeof(), type->U(0)), ::g::Uno::Func1_typeof()->MakeType(::g::Outracks::Simulator::Bytecode::NumberLiteral_typeof(), type->U(0)), ::g::Uno::Func1_typeof()->MakeType(::g::Outracks::Simulator::Bytecode::EnumLiteral_typeof(), type->U(0)), ::g::Uno::Func1_typeof()->MakeType(::g::Outracks::Simulator::Bytecode::BlobLiteral_typeof(), type->U(0))),
        new uFunction("Read", NULL, (void*)Literal__Read2_fn, 0, true, Literal_typeof(), 1, ::g::Uno::IO::BinaryReader_typeof()),
        new uFunction("Write", NULL, (void*)Literal__Write2_fn, 0, true, uVoid_typeof(), 2, Literal_typeof(), ::g::Uno::IO::BinaryWriter_typeof()));
    return type;
}

// protected generated Literal() :706
void Literal__ctor_2_fn(Literal* __this)
{
    __this->ctor_2();
}

// public void Match(Uno.Action<Outracks.Simulator.Bytecode.BooleanLiteral> a1, Uno.Action<Outracks.Simulator.Bytecode.StringLiteral> a2, Uno.Action<Outracks.Simulator.Bytecode.NumberLiteral> a3, Uno.Action<Outracks.Simulator.Bytecode.EnumLiteral> a4, Uno.Action<Outracks.Simulator.Bytecode.BlobLiteral> a5) :730
void Literal__Match4_fn(Literal* __this, uDelegate* a1, uDelegate* a2, uDelegate* a3, uDelegate* a4, uDelegate* a5)
{
    __this->Match4(a1, a2, a3, a4, a5);
}

// public T Match<T>(Uno.Func<Outracks.Simulator.Bytecode.BooleanLiteral, T> a1, Uno.Func<Outracks.Simulator.Bytecode.StringLiteral, T> a2, Uno.Func<Outracks.Simulator.Bytecode.NumberLiteral, T> a3, Uno.Func<Outracks.Simulator.Bytecode.EnumLiteral, T> a4, Uno.Func<Outracks.Simulator.Bytecode.BlobLiteral, T> a5) :714
void Literal__Match5_fn(Literal* __this, uType* __type, uDelegate* a1, uDelegate* a2, uDelegate* a3, uDelegate* a4, uDelegate* a5, uTRef __retval)
{
    uType* __types[] = {
        __type->U(0),
        ::TYPES[94/*Uno.Func`2*/]->MakeType(::TYPES[108/*Outracks.Simulator.Bytecode.BooleanLiteral*/], __type->U(0)),
        ::TYPES[94/*Uno.Func`2*/]->MakeType(::TYPES[110/*Outracks.Simulator.Bytecode.StringLiteral*/], __type->U(0)),
        ::TYPES[94/*Uno.Func`2*/]->MakeType(::TYPES[112/*Outracks.Simulator.Bytecode.NumberLiteral*/], __type->U(0)),
        ::TYPES[94/*Uno.Func`2*/]->MakeType(::TYPES[114/*Outracks.Simulator.Bytecode.EnumLiteral*/], __type->U(0)),
        ::TYPES[94/*Uno.Func`2*/]->MakeType(::TYPES[116/*Outracks.Simulator.Bytecode.BlobLiteral*/], __type->U(0)),
    };
    uT ret1(__types[0], U_ALLOCA(__types[0]->ValueSize));
    uT ret2(__types[0], U_ALLOCA(__types[0]->ValueSize));
    uT ret3(__types[0], U_ALLOCA(__types[0]->ValueSize));
    uT ret4(__types[0], U_ALLOCA(__types[0]->ValueSize));
    uT ret5(__types[0], U_ALLOCA(__types[0]->ValueSize));
    ;
    ;
    ;
    ;
    ;
    Literal* self = __this;
    ::g::Outracks::Simulator::Bytecode::BooleanLiteral* t1 = uAs< ::g::Outracks::Simulator::Bytecode::BooleanLiteral*>(self, ::TYPES[108/*Outracks.Simulator.Bytecode.BooleanLiteral*/]);

    if (t1 != NULL)
        return __retval.Store((uPtr(a1)->Invoke(&ret1, 1, t1), ret1)), void();

    ::g::Outracks::Simulator::Bytecode::StringLiteral* t2 = uAs< ::g::Outracks::Simulator::Bytecode::StringLiteral*>(self, ::TYPES[110/*Outracks.Simulator.Bytecode.StringLiteral*/]);

    if (t2 != NULL)
        return __retval.Store((uPtr(a2)->Invoke(&ret2, 1, t2), ret2)), void();

    ::g::Outracks::Simulator::Bytecode::NumberLiteral* t3 = uAs< ::g::Outracks::Simulator::Bytecode::NumberLiteral*>(self, ::TYPES[112/*Outracks.Simulator.Bytecode.NumberLiteral*/]);

    if (t3 != NULL)
        return __retval.Store((uPtr(a3)->Invoke(&ret3, 1, t3), ret3)), void();

    ::g::Outracks::Simulator::Bytecode::EnumLiteral* t4 = uAs< ::g::Outracks::Simulator::Bytecode::EnumLiteral*>(self, ::TYPES[114/*Outracks.Simulator.Bytecode.EnumLiteral*/]);

    if (t4 != NULL)
        return __retval.Store((uPtr(a4)->Invoke(&ret4, 1, t4), ret4)), void();

    ::g::Outracks::Simulator::Bytecode::BlobLiteral* t5 = uAs< ::g::Outracks::Simulator::Bytecode::BlobLiteral*>(self, ::TYPES[116/*Outracks.Simulator.Bytecode.BlobLiteral*/]);

    if (t5 != NULL)
        return __retval.Store((uPtr(a5)->Invoke(&ret5, 1, t5), ret5)), void();

    U_THROW(::g::Outracks::Simulator::NonExhaustiveMatch::New4());
}

// public static new Outracks.Simulator.Bytecode.Literal Read(Uno.IO.BinaryReader reader) :764
void Literal__Read2_fn(::g::Uno::IO::BinaryReader* reader, Literal** __retval)
{
    *__retval = Literal::Read2(reader);
}

// public static new void Write(Outracks.Simulator.Bytecode.Literal literal, Uno.IO.BinaryWriter writer) :746
void Literal__Write2_fn(Literal* literal, ::g::Uno::IO::BinaryWriter* writer)
{
    Literal::Write2(literal, writer);
}

// protected generated Literal() [instance] :706
void Literal::ctor_2()
{
    ctor_1();
}

// public void Match(Uno.Action<Outracks.Simulator.Bytecode.BooleanLiteral> a1, Uno.Action<Outracks.Simulator.Bytecode.StringLiteral> a2, Uno.Action<Outracks.Simulator.Bytecode.NumberLiteral> a3, Uno.Action<Outracks.Simulator.Bytecode.EnumLiteral> a4, Uno.Action<Outracks.Simulator.Bytecode.BlobLiteral> a5) [instance] :730
void Literal::Match4(uDelegate* a1, uDelegate* a2, uDelegate* a3, uDelegate* a4, uDelegate* a5)
{
    Literal* self = this;
    ::g::Outracks::Simulator::Bytecode::BooleanLiteral* t1 = uAs< ::g::Outracks::Simulator::Bytecode::BooleanLiteral*>(self, ::TYPES[108/*Outracks.Simulator.Bytecode.BooleanLiteral*/]);

    if (t1 != NULL)
    {
        uPtr(a1)->InvokeVoid(t1);
        return;
    }

    ::g::Outracks::Simulator::Bytecode::StringLiteral* t2 = uAs< ::g::Outracks::Simulator::Bytecode::StringLiteral*>(self, ::TYPES[110/*Outracks.Simulator.Bytecode.StringLiteral*/]);

    if (t2 != NULL)
    {
        uPtr(a2)->InvokeVoid(t2);
        return;
    }

    ::g::Outracks::Simulator::Bytecode::NumberLiteral* t3 = uAs< ::g::Outracks::Simulator::Bytecode::NumberLiteral*>(self, ::TYPES[112/*Outracks.Simulator.Bytecode.NumberLiteral*/]);

    if (t3 != NULL)
    {
        uPtr(a3)->InvokeVoid(t3);
        return;
    }

    ::g::Outracks::Simulator::Bytecode::EnumLiteral* t4 = uAs< ::g::Outracks::Simulator::Bytecode::EnumLiteral*>(self, ::TYPES[114/*Outracks.Simulator.Bytecode.EnumLiteral*/]);

    if (t4 != NULL)
    {
        uPtr(a4)->InvokeVoid(t4);
        return;
    }

    ::g::Outracks::Simulator::Bytecode::BlobLiteral* t5 = uAs< ::g::Outracks::Simulator::Bytecode::BlobLiteral*>(self, ::TYPES[116/*Outracks.Simulator.Bytecode.BlobLiteral*/]);

    if (t5 != NULL)
    {
        uPtr(a5)->InvokeVoid(t5);
        return;
    }

    U_THROW(::g::Outracks::Simulator::NonExhaustiveMatch::New4());
}

// public static new Outracks.Simulator.Bytecode.Literal Read(Uno.IO.BinaryReader reader) [static] :764
Literal* Literal::Read2(::g::Uno::IO::BinaryReader* reader)
{
    uChar token = uPtr(reader)->ReadChar();

    switch (token)
    {
        case 'b':
            return ::g::Outracks::Simulator::Bytecode::BooleanLiteral::Read3(reader);
        case 's':
            return ::g::Outracks::Simulator::Bytecode::StringLiteral::Read3(reader);
        case 'n':
            return ::g::Outracks::Simulator::Bytecode::NumberLiteral::Read3(reader);
        case 'e':
            return ::g::Outracks::Simulator::Bytecode::EnumLiteral::Read3(reader);
        case 'd':
            return ::g::Outracks::Simulator::Bytecode::BlobLiteral::Read3(reader);
    }

    U_THROW(::g::Outracks::Simulator::InvalidDataException::New4());
}

// public static new void Write(Outracks.Simulator.Bytecode.Literal literal, Uno.IO.BinaryWriter writer) [static] :746
void Literal::Write2(Literal* literal, ::g::Uno::IO::BinaryWriter* writer)
{
    uChar ret6;
    uDelegate* ret7;
    uDelegate* ret8;
    uDelegate* ret9;
    uDelegate* ret10;
    uDelegate* ret11;
    uDelegate* ret12;
    uDelegate* ret13;
    uDelegate* ret14;
    uDelegate* ret15;
    uDelegate* ret16;
    uPtr(writer)->Write5((Literal__Match5_fn(uPtr(literal), ::TYPES[118/*Outracks.Simulator.Bytecode.Literal.Match<char>*/], (::g::Outracks::Simulator::Closure__Return_fn(::TYPES[119/*Outracks.Simulator.Closure.Return<Outracks.Simulator.Bytecode.BooleanLiteral, char>*/], uCRef<uChar>('b'), &ret7), ret7), (::g::Outracks::Simulator::Closure__Return_fn(::TYPES[120/*Outracks.Simulator.Closure.Return<Outracks.Simulator.Bytecode.StringLiteral, char>*/], uCRef<uChar>('s'), &ret8), ret8), (::g::Outracks::Simulator::Closure__Return_fn(::TYPES[121/*Outracks.Simulator.Closure.Return<Outracks.Simulator.Bytecode.NumberLiteral, char>*/], uCRef<uChar>('n'), &ret9), ret9), (::g::Outracks::Simulator::Closure__Return_fn(::TYPES[122/*Outracks.Simulator.Closure.Return<Outracks.Simulator.Bytecode.EnumLiteral, char>*/], uCRef<uChar>('e'), &ret10), ret10), (::g::Outracks::Simulator::Closure__Return_fn(::TYPES[123/*Outracks.Simulator.Closure.Return<Outracks.Simulator.Bytecode.BlobLiteral, char>*/], uCRef<uChar>('d'), &ret11), ret11), &ret6), ret6));
    literal->Match4((::g::Outracks::Simulator::Closure__ApplySecond_fn(::TYPES[124/*Outracks.Simulator.Closure.ApplySecond<Outracks.Simulator.Bytecode.BooleanLiteral, Uno.IO.BinaryWriter>*/], uDelegate::New(::TYPES[125/*Uno.Action<Outracks.Simulator.Bytecode.BooleanLiteral, Uno.IO.BinaryWriter>*/], (void*)::g::Outracks::Simulator::Bytecode::BooleanLiteral__Write3_fn), writer, &ret12), ret12), (::g::Outracks::Simulator::Closure__ApplySecond_fn(::TYPES[126/*Outracks.Simulator.Closure.ApplySecond<Outracks.Simulator.Bytecode.StringLiteral, Uno.IO.BinaryWriter>*/], uDelegate::New(::TYPES[127/*Uno.Action<Outracks.Simulator.Bytecode.StringLiteral, Uno.IO.BinaryWriter>*/], (void*)::g::Outracks::Simulator::Bytecode::StringLiteral__Write3_fn), writer, &ret13), ret13), (::g::Outracks::Simulator::Closure__ApplySecond_fn(::TYPES[128/*Outracks.Simulator.Closure.ApplySecond<Outracks.Simulator.Bytecode.NumberLiteral, Uno.IO.BinaryWriter>*/], uDelegate::New(::TYPES[129/*Uno.Action<Outracks.Simulator.Bytecode.NumberLiteral, Uno.IO.BinaryWriter>*/], (void*)::g::Outracks::Simulator::Bytecode::NumberLiteral__Write3_fn), writer, &ret14), ret14), (::g::Outracks::Simulator::Closure__ApplySecond_fn(::TYPES[130/*Outracks.Simulator.Closure.ApplySecond<Outracks.Simulator.Bytecode.EnumLiteral, Uno.IO.BinaryWriter>*/], uDelegate::New(::TYPES[131/*Uno.Action<Outracks.Simulator.Bytecode.EnumLiteral, Uno.IO.BinaryWriter>*/], (void*)::g::Outracks::Simulator::Bytecode::EnumLiteral__Write3_fn), writer, &ret15), ret15), (::g::Outracks::Simulator::Closure__ApplySecond_fn(::TYPES[132/*Outracks.Simulator.Closure.ApplySecond<Outracks.Simulator.Bytecode.BlobLiteral, Uno.IO.BinaryWriter>*/], uDelegate::New(::TYPES[133/*Uno.Action<Outracks.Simulator.Bytecode.BlobLiteral, Uno.IO.BinaryWriter>*/], (void*)::g::Outracks::Simulator::Bytecode::BlobLiteral__Write3_fn), writer, &ret16), ret16));
}
// }

// C:\ProgramData\Uno\Packages\Outracks.Simulator.Protocol.Uno\0.1.0\Bytecode\$.uno(233)
// -------------------------------------------------------------------------------------

// public sealed class LogicalOr :233
// {
uType* LogicalOr_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 2;
    options.ObjectSize = sizeof(LogicalOr);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Outracks.Simulator.Bytecode.LogicalOr", options);
    type->SetBase(::g::Outracks::Simulator::Bytecode::Expression_typeof());
    type->fp_ToString = (void(*)(uObject*, uString**))LogicalOr__ToString_fn;
    ::STRINGS[6] = uString::Const("(");
    ::STRINGS[14] = uString::Const(" || ");
    ::STRINGS[8] = uString::Const(")");
    ::TYPES[0] = ::g::Uno::Func1_typeof()->MakeType(::g::Uno::IO::BinaryReader_typeof(), ::g::Outracks::Simulator::Bytecode::Expression_typeof());
    ::TYPES[1] = ::g::Outracks::Simulator::Bytecode::Expression_typeof();
    ::TYPES[2] = uObject_typeof();
    ::TYPES[4] = ::g::Uno::Action2_typeof()->MakeType(::g::Outracks::Simulator::Bytecode::Expression_typeof(), ::g::Uno::IO::BinaryWriter_typeof());
    type->SetFields(0,
        ::g::Outracks::Simulator::Bytecode::Expression_typeof(), offsetof(::g::Outracks::Simulator::Bytecode::LogicalOr, Left), 0,
        ::g::Outracks::Simulator::Bytecode::Expression_typeof(), offsetof(::g::Outracks::Simulator::Bytecode::LogicalOr, Right), 0);
    type->Reflection.SetFields(2,
        new uField("Left", 0),
        new uField("Right", 1));
    type->Reflection.SetFunctions(4,
        new uFunction(".ctor", NULL, (void*)LogicalOr__New1_fn, 0, true, LogicalOr_typeof(), 2, ::g::Outracks::Simulator::Bytecode::Expression_typeof(), ::g::Outracks::Simulator::Bytecode::Expression_typeof()),
        new uFunction("Read", NULL, (void*)LogicalOr__Read2_fn, 0, true, LogicalOr_typeof(), 1, ::g::Uno::IO::BinaryReader_typeof()),
        new uFunction("Write", NULL, (void*)LogicalOr__Write2_fn, 0, true, uVoid_typeof(), 2, LogicalOr_typeof(), ::g::Uno::IO::BinaryWriter_typeof()),
        new uFunction("Write", NULL, (void*)LogicalOr__Write3_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::IO::BinaryWriter_typeof()));
    return type;
}

// public LogicalOr(Outracks.Simulator.Bytecode.Expression left, Outracks.Simulator.Bytecode.Expression right) :238
void LogicalOr__ctor_2_fn(LogicalOr* __this, ::g::Outracks::Simulator::Bytecode::Expression* left, ::g::Outracks::Simulator::Bytecode::Expression* right)
{
    __this->ctor_2(left, right);
}

// public LogicalOr New(Outracks.Simulator.Bytecode.Expression left, Outracks.Simulator.Bytecode.Expression right) :238
void LogicalOr__New1_fn(::g::Outracks::Simulator::Bytecode::Expression* left, ::g::Outracks::Simulator::Bytecode::Expression* right, LogicalOr** __retval)
{
    *__retval = LogicalOr::New1(left, right);
}

// public static new Outracks.Simulator.Bytecode.LogicalOr Read(Uno.IO.BinaryReader reader) :260
void LogicalOr__Read2_fn(::g::Uno::IO::BinaryReader* reader, LogicalOr** __retval)
{
    *__retval = LogicalOr::Read2(reader);
}

// public override sealed string ToString() :244
void LogicalOr__ToString_fn(LogicalOr* __this, uString** __retval)
{
    return *__retval = ::g::Uno::String::op_Addition2(::g::Uno::String::op_Addition1(::g::Uno::String::op_Addition2(::g::Uno::String::op_Addition1(::STRINGS[6/*"("*/], __this->Left), ::STRINGS[14/*" || "*/]), __this->Right), ::STRINGS[8/*")"*/]), void();
}

// public static new void Write(Outracks.Simulator.Bytecode.LogicalOr o, Uno.IO.BinaryWriter writer) :249
void LogicalOr__Write2_fn(LogicalOr* o, ::g::Uno::IO::BinaryWriter* writer)
{
    LogicalOr::Write2(o, writer);
}

// public new void Write(Uno.IO.BinaryWriter writer) :254
void LogicalOr__Write3_fn(LogicalOr* __this, ::g::Uno::IO::BinaryWriter* writer)
{
    __this->Write3(writer);
}

// public LogicalOr(Outracks.Simulator.Bytecode.Expression left, Outracks.Simulator.Bytecode.Expression right) [instance] :238
void LogicalOr::ctor_2(::g::Outracks::Simulator::Bytecode::Expression* left, ::g::Outracks::Simulator::Bytecode::Expression* right)
{
    ctor_1();
    Left = left;
    Right = right;
}

// public new void Write(Uno.IO.BinaryWriter writer) [instance] :254
void LogicalOr::Write3(::g::Uno::IO::BinaryWriter* writer)
{
    uPtr(::g::Outracks::Simulator::Bytecode::Expression::Write1())->Invoke(2, (::g::Outracks::Simulator::Bytecode::Expression*)Left, writer);
    uPtr(::g::Outracks::Simulator::Bytecode::Expression::Write1())->Invoke(2, (::g::Outracks::Simulator::Bytecode::Expression*)Right, writer);
}

// public LogicalOr New(Outracks.Simulator.Bytecode.Expression left, Outracks.Simulator.Bytecode.Expression right) [static] :238
LogicalOr* LogicalOr::New1(::g::Outracks::Simulator::Bytecode::Expression* left, ::g::Outracks::Simulator::Bytecode::Expression* right)
{
    LogicalOr* obj1 = (LogicalOr*)uNew(LogicalOr_typeof());
    obj1->ctor_2(left, right);
    return obj1;
}

// public static new Outracks.Simulator.Bytecode.LogicalOr Read(Uno.IO.BinaryReader reader) [static] :260
LogicalOr* LogicalOr::Read2(::g::Uno::IO::BinaryReader* reader)
{
    ::g::Outracks::Simulator::Bytecode::Expression* _Left = (::g::Outracks::Simulator::Bytecode::Expression*)uPtr(::g::Outracks::Simulator::Bytecode::Expression::Read1())->Invoke(1, reader);
    ::g::Outracks::Simulator::Bytecode::Expression* _Right = (::g::Outracks::Simulator::Bytecode::Expression*)uPtr(::g::Outracks::Simulator::Bytecode::Expression::Read1())->Invoke(1, reader);
    return LogicalOr::New1(_Left, _Right);
}

// public static new void Write(Outracks.Simulator.Bytecode.LogicalOr o, Uno.IO.BinaryWriter writer) [static] :249
void LogicalOr::Write2(LogicalOr* o, ::g::Uno::IO::BinaryWriter* writer)
{
    uPtr(o)->Write3(writer);
}
// }

// C:\ProgramData\Uno\Packages\Outracks.Simulator.Protocol.Uno\0.1.0\Bytecode\$.uno(8)
// -----------------------------------------------------------------------------------

// public sealed class MethodGroup :8
// {
uType* MethodGroup_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 4;
    options.ObjectSize = sizeof(MethodGroup);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Outracks.Simulator.Bytecode.MethodGroup", options);
    type->SetBase(::g::Outracks::Simulator::Bytecode::Expression_typeof());
    type->fp_ToString = (void(*)(uObject*, uString**))MethodGroup__ToString_fn;
    ::STRINGS[15] = uString::Const("((");
    ::STRINGS[16] = uString::Const(")(");
    ::STRINGS[17] = uString::Const(").");
    ::STRINGS[8] = uString::Const(")");
    ::TYPES[0] = ::g::Uno::Func1_typeof()->MakeType(::g::Uno::IO::BinaryReader_typeof(), ::g::Outracks::Simulator::Bytecode::Expression_typeof());
    ::TYPES[1] = ::g::Outracks::Simulator::Bytecode::Expression_typeof();
    ::TYPES[95] = ::g::Uno::Func1_typeof()->MakeType(::g::Uno::IO::BinaryReader_typeof(), ::g::Outracks::Simulator::Bytecode::TypeName_typeof());
    ::TYPES[96] = ::g::Outracks::Simulator::Bytecode::TypeName_typeof();
    ::TYPES[2] = uObject_typeof();
    ::TYPES[4] = ::g::Uno::Action2_typeof()->MakeType(::g::Outracks::Simulator::Bytecode::Expression_typeof(), ::g::Uno::IO::BinaryWriter_typeof());
    ::TYPES[97] = ::g::Uno::Action2_typeof()->MakeType(::g::Outracks::Simulator::Bytecode::TypeName_typeof(), ::g::Uno::IO::BinaryWriter_typeof());
    type->SetFields(0,
        ::g::Outracks::Simulator::Bytecode::TypeName_typeof(), offsetof(::g::Outracks::Simulator::Bytecode::MethodGroup, DelegateType), 0,
        ::g::Outracks::Simulator::Bytecode::TypeMemberName_typeof(), offsetof(::g::Outracks::Simulator::Bytecode::MethodGroup, MethodName), 0,
        ::g::Outracks::Simulator::Bytecode::Signature_typeof(), offsetof(::g::Outracks::Simulator::Bytecode::MethodGroup, MethodSignature), 0,
        ::g::Outracks::Simulator::Bytecode::Expression_typeof(), offsetof(::g::Outracks::Simulator::Bytecode::MethodGroup, Object), 0);
    type->Reflection.SetFields(4,
        new uField("DelegateType", 0),
        new uField("MethodName", 1),
        new uField("MethodSignature", 2),
        new uField("Object", 3));
    type->Reflection.SetFunctions(3,
        new uFunction(".ctor", NULL, (void*)MethodGroup__New1_fn, 0, true, MethodGroup_typeof(), 4, ::g::Outracks::Simulator::Bytecode::Expression_typeof(), ::g::Outracks::Simulator::Bytecode::TypeMemberName_typeof(), ::g::Outracks::Simulator::Bytecode::Signature_typeof(), ::g::Outracks::Simulator::Bytecode::TypeName_typeof()),
        new uFunction("Read", NULL, (void*)MethodGroup__Read2_fn, 0, true, MethodGroup_typeof(), 1, ::g::Uno::IO::BinaryReader_typeof()),
        new uFunction("Write", NULL, (void*)MethodGroup__Write2_fn, 0, true, uVoid_typeof(), 2, MethodGroup_typeof(), ::g::Uno::IO::BinaryWriter_typeof()));
    return type;
}

// public MethodGroup(Outracks.Simulator.Bytecode.Expression o, Outracks.Simulator.Bytecode.TypeMemberName methodName, Outracks.Simulator.Bytecode.Signature methodSignature, Outracks.Simulator.Bytecode.TypeName delegateType) :15
void MethodGroup__ctor_2_fn(MethodGroup* __this, ::g::Outracks::Simulator::Bytecode::Expression* o, ::g::Outracks::Simulator::Bytecode::TypeMemberName* methodName, ::g::Outracks::Simulator::Bytecode::Signature* methodSignature, ::g::Outracks::Simulator::Bytecode::TypeName* delegateType)
{
    __this->ctor_2(o, methodName, methodSignature, delegateType);
}

// public MethodGroup New(Outracks.Simulator.Bytecode.Expression o, Outracks.Simulator.Bytecode.TypeMemberName methodName, Outracks.Simulator.Bytecode.Signature methodSignature, Outracks.Simulator.Bytecode.TypeName delegateType) :15
void MethodGroup__New1_fn(::g::Outracks::Simulator::Bytecode::Expression* o, ::g::Outracks::Simulator::Bytecode::TypeMemberName* methodName, ::g::Outracks::Simulator::Bytecode::Signature* methodSignature, ::g::Outracks::Simulator::Bytecode::TypeName* delegateType, MethodGroup** __retval)
{
    *__retval = MethodGroup::New1(o, methodName, methodSignature, delegateType);
}

// public static new Outracks.Simulator.Bytecode.MethodGroup Read(Uno.IO.BinaryReader reader) :36
void MethodGroup__Read2_fn(::g::Uno::IO::BinaryReader* reader, MethodGroup** __retval)
{
    *__retval = MethodGroup::Read2(reader);
}

// public override sealed string ToString() :23
void MethodGroup__ToString_fn(MethodGroup* __this, uString** __retval)
{
    return *__retval = ::g::Uno::String::op_Addition2(::g::Uno::String::op_Addition1(::g::Uno::String::op_Addition2(::g::Uno::String::op_Addition1(::g::Uno::String::op_Addition2(::g::Uno::String::op_Addition1(::STRINGS[15/*"(("*/], __this->DelegateType), ::STRINGS[16/*")("*/]), __this->Object), ::STRINGS[17/*")."*/]), __this->MethodName), ::STRINGS[8/*")"*/]), void();
}

// public static new void Write(Outracks.Simulator.Bytecode.MethodGroup l, Uno.IO.BinaryWriter writer) :28
void MethodGroup__Write2_fn(MethodGroup* l, ::g::Uno::IO::BinaryWriter* writer)
{
    MethodGroup::Write2(l, writer);
}

// public MethodGroup(Outracks.Simulator.Bytecode.Expression o, Outracks.Simulator.Bytecode.TypeMemberName methodName, Outracks.Simulator.Bytecode.Signature methodSignature, Outracks.Simulator.Bytecode.TypeName delegateType) [instance] :15
void MethodGroup::ctor_2(::g::Outracks::Simulator::Bytecode::Expression* o, ::g::Outracks::Simulator::Bytecode::TypeMemberName* methodName, ::g::Outracks::Simulator::Bytecode::Signature* methodSignature, ::g::Outracks::Simulator::Bytecode::TypeName* delegateType)
{
    ctor_1();
    Object = o;
    MethodName = methodName;
    MethodSignature = methodSignature;
    DelegateType = delegateType;
}

// public MethodGroup New(Outracks.Simulator.Bytecode.Expression o, Outracks.Simulator.Bytecode.TypeMemberName methodName, Outracks.Simulator.Bytecode.Signature methodSignature, Outracks.Simulator.Bytecode.TypeName delegateType) [static] :15
MethodGroup* MethodGroup::New1(::g::Outracks::Simulator::Bytecode::Expression* o, ::g::Outracks::Simulator::Bytecode::TypeMemberName* methodName, ::g::Outracks::Simulator::Bytecode::Signature* methodSignature, ::g::Outracks::Simulator::Bytecode::TypeName* delegateType)
{
    MethodGroup* obj1 = (MethodGroup*)uNew(MethodGroup_typeof());
    obj1->ctor_2(o, methodName, methodSignature, delegateType);
    return obj1;
}

// public static new Outracks.Simulator.Bytecode.MethodGroup Read(Uno.IO.BinaryReader reader) [static] :36
MethodGroup* MethodGroup::Read2(::g::Uno::IO::BinaryReader* reader)
{
    ::g::Outracks::Simulator::Bytecode::Expression* a = (::g::Outracks::Simulator::Bytecode::Expression*)uPtr(::g::Outracks::Simulator::Bytecode::Expression::Read1())->Invoke(1, reader);
    ::g::Outracks::Simulator::Bytecode::TypeMemberName* b = ::g::Outracks::Simulator::Bytecode::TypeMemberName::Read(reader);
    ::g::Outracks::Simulator::Bytecode::Signature* c = ::g::Outracks::Simulator::Bytecode::Signature::Read(reader);
    ::g::Outracks::Simulator::Bytecode::TypeName* d = (::g::Outracks::Simulator::Bytecode::TypeName*)uPtr(::g::Outracks::Simulator::Bytecode::TypeName::Read())->Invoke(1, reader);
    return MethodGroup::New1(a, b, c, d);
}

// public static new void Write(Outracks.Simulator.Bytecode.MethodGroup l, Uno.IO.BinaryWriter writer) [static] :28
void MethodGroup::Write2(MethodGroup* l, ::g::Uno::IO::BinaryWriter* writer)
{
    uPtr(::g::Outracks::Simulator::Bytecode::Expression::Write1())->Invoke(2, (::g::Outracks::Simulator::Bytecode::Expression*)uPtr(l)->Object, writer);
    ::g::Outracks::Simulator::Bytecode::TypeMemberName::Write(l->MethodName, writer);
    ::g::Outracks::Simulator::Bytecode::Signature::Write(l->MethodSignature, writer);
    uPtr(::g::Outracks::Simulator::Bytecode::TypeName::Write())->Invoke(2, (::g::Outracks::Simulator::Bytecode::TypeName*)l->DelegateType, writer);
}
// }

// C:\ProgramData\Uno\Packages\Outracks.Simulator.Protocol.Uno\0.1.0\Bytecode\$.uno(786)
// -------------------------------------------------------------------------------------

// public sealed class NamespaceName :786
// {
// static NamespaceName() :786
static void NamespaceName__cctor__fn(uType* __type)
{
    NamespaceName::Write_ = uDelegate::New(::TYPES[134/*Uno.Action<Outracks.Simulator.Bytecode.NamespaceName, Uno.IO.BinaryWriter>*/], (void*)NamespaceName___Write_fn);
    NamespaceName::Read_ = uDelegate::New(::TYPES[135/*Uno.Func<Uno.IO.BinaryReader, Outracks.Simulator.Bytecode.NamespaceName>*/], (void*)NamespaceName___Read_fn);
}

NamespaceName_type* NamespaceName_typeof()
{
    static uSStrong<NamespaceName_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 3;
    options.InterfaceCount = 1;
    options.ObjectSize = sizeof(NamespaceName);
    options.TypeSize = sizeof(NamespaceName_type);
    type = (NamespaceName_type*)uClassType::New("Outracks.Simulator.Bytecode.NamespaceName", options);
    type->fp_cctor_ = NamespaceName__cctor__fn;
    type->fp_Equals = (void(*)(uObject*, uObject*, bool*))NamespaceName__Equals_fn;
    type->fp_GetHashCode = (void(*)(uObject*, int*))NamespaceName__GetHashCode_fn;
    type->fp_ToString = (void(*)(uObject*, uString**))NamespaceName__ToString_fn;
    ::TYPES[134] = ::g::Uno::Action2_typeof()->MakeType(NamespaceName_typeof(), ::g::Uno::IO::BinaryWriter_typeof());
    ::TYPES[135] = ::g::Uno::Func1_typeof()->MakeType(::g::Uno::IO::BinaryReader_typeof(), NamespaceName_typeof());
    ::TYPES[2] = uObject_typeof();
    ::TYPES[11] = ::g::Uno::Bool_typeof();
    type->SetInterfaces(
        ::g::Outracks::Simulator::IEquatable_typeof()->MakeType(NamespaceName_typeof()), offsetof(NamespaceName_type, interface0));
    type->SetFields(0,
        ::g::Uno::String_typeof(), offsetof(::g::Outracks::Simulator::Bytecode::NamespaceName, FullName), 0,
        ::g::Uno::Func1_typeof()->MakeType(::g::Uno::IO::BinaryReader_typeof(), NamespaceName_typeof()), (uintptr_t)&::g::Outracks::Simulator::Bytecode::NamespaceName::Read_, uFieldFlagsStatic,
        ::g::Uno::Action2_typeof()->MakeType(NamespaceName_typeof(), ::g::Uno::IO::BinaryWriter_typeof()), (uintptr_t)&::g::Outracks::Simulator::Bytecode::NamespaceName::Write_, uFieldFlagsStatic);
    type->Reflection.SetFields(3,
        new uField("FullName", 0),
        new uField("Read", 1),
        new uField("Write", 2));
    type->Reflection.SetFunctions(4,
        new uFunction("_Read", NULL, (void*)NamespaceName___Read_fn, 0, true, NamespaceName_typeof(), 1, ::g::Uno::IO::BinaryReader_typeof()),
        new uFunction("_Write", NULL, (void*)NamespaceName___Write_fn, 0, true, uVoid_typeof(), 2, NamespaceName_typeof(), ::g::Uno::IO::BinaryWriter_typeof()),
        new uFunction("Equals", NULL, (void*)NamespaceName__Equals2_fn, 0, false, ::g::Uno::Bool_typeof(), 1, NamespaceName_typeof()),
        new uFunction(".ctor", NULL, (void*)NamespaceName__New1_fn, 0, true, NamespaceName_typeof(), 1, ::g::Uno::String_typeof()));
    return type;
}

// public NamespaceName(string fullName) :789
void NamespaceName__ctor__fn(NamespaceName* __this, uString* fullName)
{
    __this->ctor_(fullName);
}

// public static Outracks.Simulator.Bytecode.NamespaceName _Read(Uno.IO.BinaryReader reader) :837
void NamespaceName___Read_fn(::g::Uno::IO::BinaryReader* reader, NamespaceName** __retval)
{
    *__retval = NamespaceName::_Read(reader);
}

// public static void _Write(Outracks.Simulator.Bytecode.NamespaceName name, Uno.IO.BinaryWriter writer) :830
void NamespaceName___Write_fn(NamespaceName* name, ::g::Uno::IO::BinaryWriter* writer)
{
    NamespaceName::_Write(name, writer);
}

// public override sealed bool Equals(object obj) :801
void NamespaceName__Equals_fn(NamespaceName* __this, uObject* obj, bool* __retval)
{
    if (::g::Uno::Object::ReferenceEquals(NULL, obj))
        return *__retval = false, void();

    if (::g::Uno::Object::ReferenceEquals(__this, obj))
        return *__retval = true, void();

    return *__retval = uIs(obj, NamespaceName_typeof()) && __this->Equals2(uCast<NamespaceName*>(obj, NamespaceName_typeof())), void();
}

// public bool Equals(Outracks.Simulator.Bytecode.NamespaceName other) :794
void NamespaceName__Equals2_fn(NamespaceName* __this, NamespaceName* other, bool* __retval)
{
    *__retval = __this->Equals2(other);
}

// public override sealed int GetHashCode() :808
void NamespaceName__GetHashCode_fn(NamespaceName* __this, int* __retval)
{
    return *__retval = ::g::Uno::String::op_Inequality(__this->FullName, NULL) ? uPtr(__this->FullName)->GetHashCode() : 0, void();
}

// public NamespaceName New(string fullName) :789
void NamespaceName__New1_fn(uString* fullName, NamespaceName** __retval)
{
    *__retval = NamespaceName::New1(fullName);
}

// public static operator ==(Outracks.Simulator.Bytecode.NamespaceName left, Outracks.Simulator.Bytecode.NamespaceName right) :813
void NamespaceName__op_Equality_fn(NamespaceName* left, NamespaceName* right, bool* __retval)
{
    *__retval = NamespaceName::op_Equality(left, right);
}

// public static operator !=(Outracks.Simulator.Bytecode.NamespaceName left, Outracks.Simulator.Bytecode.NamespaceName right) :818
void NamespaceName__op_Inequality_fn(NamespaceName* left, NamespaceName* right, bool* __retval)
{
    *__retval = NamespaceName::op_Inequality(left, right);
}

// public override sealed string ToString() :823
void NamespaceName__ToString_fn(NamespaceName* __this, uString** __retval)
{
    return *__retval = __this->FullName, void();
}

uSStrong<uDelegate*> NamespaceName::Read_;
uSStrong<uDelegate*> NamespaceName::Write_;

// public NamespaceName(string fullName) [instance] :789
void NamespaceName::ctor_(uString* fullName)
{
    FullName = fullName;
}

// public bool Equals(Outracks.Simulator.Bytecode.NamespaceName other) [instance] :794
bool NamespaceName::Equals2(NamespaceName* other)
{
    if (::g::Uno::Object::ReferenceEquals(NULL, other))
        return false;

    if (::g::Uno::Object::ReferenceEquals(this, other))
        return true;

    return ::g::Uno::String::Equals3(FullName, uPtr(other)->FullName);
}

// public static Outracks.Simulator.Bytecode.NamespaceName _Read(Uno.IO.BinaryReader reader) [static] :837
NamespaceName* NamespaceName::_Read(::g::Uno::IO::BinaryReader* reader)
{
    NamespaceName_typeof()->Init();
    return NamespaceName::New1(uPtr(reader)->ReadString());
}

// public static void _Write(Outracks.Simulator.Bytecode.NamespaceName name, Uno.IO.BinaryWriter writer) [static] :830
void NamespaceName::_Write(NamespaceName* name, ::g::Uno::IO::BinaryWriter* writer)
{
    NamespaceName_typeof()->Init();
    uPtr(writer)->Write24(uPtr(name)->FullName);
}

// public NamespaceName New(string fullName) [static] :789
NamespaceName* NamespaceName::New1(uString* fullName)
{
    NamespaceName* obj1 = (NamespaceName*)uNew(NamespaceName_typeof());
    obj1->ctor_(fullName);
    return obj1;
}

// public static operator ==(Outracks.Simulator.Bytecode.NamespaceName left, Outracks.Simulator.Bytecode.NamespaceName right) [static] :813
bool NamespaceName::op_Equality(NamespaceName* left, NamespaceName* right)
{
    NamespaceName_typeof()->Init();
    return ::g::Uno::Object::Equals1(left, right);
}

// public static operator !=(Outracks.Simulator.Bytecode.NamespaceName left, Outracks.Simulator.Bytecode.NamespaceName right) [static] :818
bool NamespaceName::op_Inequality(NamespaceName* left, NamespaceName* right)
{
    NamespaceName_typeof()->Init();
    return !::g::Uno::Object::Equals1(left, right);
}
// }

// C:\ProgramData\Uno\Packages\Outracks.Simulator.Protocol.Uno\0.1.0\Bytecode\$.uno(1758)
// --------------------------------------------------------------------------------------

// public sealed class NoOperation :1758
// {
uType* NoOperation_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 1;
    options.ObjectSize = sizeof(NoOperation);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Outracks.Simulator.Bytecode.NoOperation", options);
    type->SetBase(::g::Outracks::Simulator::Bytecode::Statement_typeof());
    type->fp_ToString = (void(*)(uObject*, uString**))NoOperation__ToString_fn;
    ::STRINGS[18] = uString::Const("// ");
    ::TYPES[136] = ::g::Outracks::Simulator::Bytecode::Optional_typeof()->MakeMethod(1, ::g::Uno::String_typeof());
    ::TYPES[137] = ::g::Outracks::Simulator::Serialization_typeof();
    ::TYPES[2] = uObject_typeof();
    ::TYPES[138] = ::g::Outracks::Simulator::Bytecode::Optional_typeof()->MakeMethod(1, ::g::Uno::String_typeof());
    ::TYPES[139] = ::g::Uno::Action1_typeof()->MakeType(::g::Uno::String_typeof());
    type->SetFields(0,
        ::g::Outracks::Simulator::Bytecode::Optional1_typeof()->MakeType(::g::Uno::String_typeof()), (uintptr_t)0, uFieldFlagsConstrained);
    type->Reflection.SetFields(1,
        new uField("Description", 0));
    type->Reflection.SetFunctions(4,
        new uFunction(".ctor", NULL, (void*)NoOperation__New1_fn, 0, true, NoOperation_typeof(), 1, ::g::Outracks::Simulator::Bytecode::Optional1_typeof()->MakeType(::g::Uno::String_typeof())),
        new uFunction("Read", NULL, (void*)NoOperation__Read1_fn, 0, true, NoOperation_typeof(), 1, ::g::Uno::IO::BinaryReader_typeof()),
        new uFunction("Write", NULL, (void*)NoOperation__Write1_fn, 0, true, uVoid_typeof(), 2, NoOperation_typeof(), ::g::Uno::IO::BinaryWriter_typeof()),
        new uFunction("Write", NULL, (void*)NoOperation__Write2_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::IO::BinaryWriter_typeof()));
    return type;
}

// public NoOperation([Outracks.Simulator.Bytecode.Optional<string> description]) :1762
void NoOperation__ctor_1_fn(NoOperation* __this, ::g::Outracks::Simulator::Bytecode::Optional1<uStrong<uString*> >* description)
{
    __this->ctor_1(*description);
}

// public NoOperation New([Outracks.Simulator.Bytecode.Optional<string> description]) :1762
void NoOperation__New1_fn(::g::Outracks::Simulator::Bytecode::Optional1<uStrong<uString*> >* description, NoOperation** __retval)
{
    *__retval = NoOperation::New1(*description);
}

// public static new Outracks.Simulator.Bytecode.NoOperation Read(Uno.IO.BinaryReader reader) :1782
void NoOperation__Read1_fn(::g::Uno::IO::BinaryReader* reader, NoOperation** __retval)
{
    *__retval = NoOperation::Read1(reader);
}

// public override sealed string ToString() :1767
void NoOperation__ToString_fn(NoOperation* __this, uString** __retval)
{
    return *__retval = ::g::Uno::String::op_Addition1(::STRINGS[18/*"// "*/], uBox(::TYPES[182/*Outracks.Simulator.Bytecode.Optional<string>*/], __this->Description().Value< ::g::Outracks::Simulator::Bytecode::Optional1<uStrong<uString*> > >())), void();
}

// public static new void Write(Outracks.Simulator.Bytecode.NoOperation s, Uno.IO.BinaryWriter writer) :1772
void NoOperation__Write1_fn(NoOperation* s, ::g::Uno::IO::BinaryWriter* writer)
{
    NoOperation::Write1(s, writer);
}

// public new void Write(Uno.IO.BinaryWriter writer) :1777
void NoOperation__Write2_fn(NoOperation* __this, ::g::Uno::IO::BinaryWriter* writer)
{
    __this->Write2(writer);
}

// public NoOperation([Outracks.Simulator.Bytecode.Optional<string> description]) [instance] :1762
void NoOperation::ctor_1(::g::Outracks::Simulator::Bytecode::Optional1<uStrong<uString*> > description)
{
    ctor_();
    Description().Value< ::g::Outracks::Simulator::Bytecode::Optional1<uStrong<uString*> > >() = description;
}

// public new void Write(Uno.IO.BinaryWriter writer) [instance] :1777
void NoOperation::Write2(::g::Uno::IO::BinaryWriter* writer)
{
    ::g::Outracks::Simulator::Bytecode::Optional__Write1_fn(::TYPES[138/*Outracks.Simulator.Bytecode.Optional.Write<string>*/], writer, uCRef(Description().Value< ::g::Outracks::Simulator::Bytecode::Optional1<uStrong<uString*> > >()), uDelegate::New(::TYPES[139/*Uno.Action<string>*/], (void*)::g::Uno::IO::BinaryWriter__Write24_fn, uPtr(writer)));
}

// public NoOperation New([Outracks.Simulator.Bytecode.Optional<string> description]) [static] :1762
NoOperation* NoOperation::New1(::g::Outracks::Simulator::Bytecode::Optional1<uStrong<uString*> > description)
{
    NoOperation* obj1 = (NoOperation*)uNew(NoOperation_typeof());
    obj1->ctor_1(description);
    return obj1;
}

// public static new Outracks.Simulator.Bytecode.NoOperation Read(Uno.IO.BinaryReader reader) [static] :1782
NoOperation* NoOperation::Read1(::g::Uno::IO::BinaryReader* reader)
{
    ::g::Outracks::Simulator::Bytecode::Optional1<uStrong<uString*> > ret2;
    return NoOperation::New1((::g::Outracks::Simulator::Bytecode::Optional__Read1_fn(::TYPES[136/*Outracks.Simulator.Bytecode.Optional.Read<string>*/], reader, ::g::Outracks::Simulator::Serialization::ReadString(), &ret2), ret2));
}

// public static new void Write(Outracks.Simulator.Bytecode.NoOperation s, Uno.IO.BinaryWriter writer) [static] :1772
void NoOperation::Write1(NoOperation* s, ::g::Uno::IO::BinaryWriter* writer)
{
    uPtr(s)->Write2(writer);
}
// }

// C:\ProgramData\Uno\Packages\Outracks.Simulator.Protocol.Uno\0.1.0\Bytecode\$.uno(1452)
// --------------------------------------------------------------------------------------

// public sealed class NumberLiteral :1452
// {
uType* NumberLiteral_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 2;
    options.ObjectSize = sizeof(NumberLiteral);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Outracks.Simulator.Bytecode.NumberLiteral", options);
    type->SetBase(::g::Outracks::Simulator::Bytecode::Literal_typeof());
    type->fp_ToString = (void(*)(uObject*, uString**))NumberLiteral__ToString_fn;
    ::TYPES[140] = ::g::Outracks::Simulator::Bytecode::NumberType_typeof();
    ::TYPES[141] = ::g::Uno::Double_typeof();
    ::TYPES[142] = ::g::Uno::Int_typeof();
    type->SetFields(0,
        ::g::Uno::Double_typeof(), offsetof(::g::Outracks::Simulator::Bytecode::NumberLiteral, DoubleValue), 0,
        ::g::Outracks::Simulator::Bytecode::NumberType_typeof(), offsetof(::g::Outracks::Simulator::Bytecode::NumberLiteral, NumberType), 0);
    type->Reflection.SetFields(2,
        new uField("DoubleValue", 0),
        new uField("NumberType", 1));
    type->Reflection.SetFunctions(3,
        new uFunction(".ctor", NULL, (void*)NumberLiteral__New1_fn, 0, true, NumberLiteral_typeof(), 2, ::g::Outracks::Simulator::Bytecode::NumberType_typeof(), ::g::Uno::Double_typeof()),
        new uFunction("Read", NULL, (void*)NumberLiteral__Read3_fn, 0, true, NumberLiteral_typeof(), 1, ::g::Uno::IO::BinaryReader_typeof()),
        new uFunction("Write", NULL, (void*)NumberLiteral__Write3_fn, 0, true, uVoid_typeof(), 2, NumberLiteral_typeof(), ::g::Uno::IO::BinaryWriter_typeof()));
    return type;
}

// public NumberLiteral(Outracks.Simulator.Bytecode.NumberType numberType, double doubleValue) :1457
void NumberLiteral__ctor_3_fn(NumberLiteral* __this, int* numberType, double* doubleValue)
{
    __this->ctor_3(*numberType, *doubleValue);
}

// public NumberLiteral New(Outracks.Simulator.Bytecode.NumberType numberType, double doubleValue) :1457
void NumberLiteral__New1_fn(int* numberType, double* doubleValue, NumberLiteral** __retval)
{
    *__retval = NumberLiteral::New1(*numberType, *doubleValue);
}

// public static new Outracks.Simulator.Bytecode.NumberLiteral Read(Uno.IO.BinaryReader reader) :1474
void NumberLiteral__Read3_fn(::g::Uno::IO::BinaryReader* reader, NumberLiteral** __retval)
{
    *__retval = NumberLiteral::Read3(reader);
}

// public override sealed string ToString() :1463
void NumberLiteral__ToString_fn(NumberLiteral* __this, uString** __retval)
{
    double ind1;
    return *__retval = ::g::Uno::Double::ToString((ind1 = __this->DoubleValue, ind1), ::TYPES[141/*double*/]), void();
}

// public static void Write(Outracks.Simulator.Bytecode.NumberLiteral l, Uno.IO.BinaryWriter writer) :1468
void NumberLiteral__Write3_fn(NumberLiteral* l, ::g::Uno::IO::BinaryWriter* writer)
{
    NumberLiteral::Write3(l, writer);
}

// public NumberLiteral(Outracks.Simulator.Bytecode.NumberType numberType, double doubleValue) [instance] :1457
void NumberLiteral::ctor_3(int numberType, double doubleValue)
{
    ctor_2();
    DoubleValue = doubleValue;
    NumberType = numberType;
}

// public NumberLiteral New(Outracks.Simulator.Bytecode.NumberType numberType, double doubleValue) [static] :1457
NumberLiteral* NumberLiteral::New1(int numberType, double doubleValue)
{
    NumberLiteral* obj2 = (NumberLiteral*)uNew(NumberLiteral_typeof());
    obj2->ctor_3(numberType, doubleValue);
    return obj2;
}

// public static new Outracks.Simulator.Bytecode.NumberLiteral Read(Uno.IO.BinaryReader reader) [static] :1474
NumberLiteral* NumberLiteral::Read3(::g::Uno::IO::BinaryReader* reader)
{
    int nubmerType = uPtr(reader)->ReadInt();
    double doubleValue = reader->ReadDouble();
    return NumberLiteral::New1(nubmerType, doubleValue);
}

// public static void Write(Outracks.Simulator.Bytecode.NumberLiteral l, Uno.IO.BinaryWriter writer) [static] :1468
void NumberLiteral::Write3(NumberLiteral* l, ::g::Uno::IO::BinaryWriter* writer)
{
    uPtr(writer)->Write13(uPtr(l)->NumberType);
    writer->Write6(l->DoubleValue);
}
// }

// C:\ProgramData\Uno\Packages\Outracks.Simulator.Protocol.Uno\0.1.0\Bytecode\$.uno(1440)
// --------------------------------------------------------------------------------------

// public enum NumberType :1440
uEnumType* NumberType_typeof()
{
    static uSStrong<uEnumType*> type;
    if (type != NULL) return type;

    type = uEnumType::New("Outracks.Simulator.Bytecode.NumberType", ::g::Uno::Int_typeof(), 8);
    type->SetLiterals(
        "Double", 0LL,
        "Float", 1LL,
        "Int", 2LL,
        "UInt", 3LL,
        "Short", 4LL,
        "UShort", 5LL,
        "SByte", 6LL,
        "Byte", 7LL);
    return type;
}

// C:\ProgramData\Uno\Packages\Outracks.Simulator.Protocol.Uno\0.1.0\Common\$.uno(276)
// -----------------------------------------------------------------------------------

// public sealed class Optional :276
// {
uType* Optional_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.MethodTypeCount = 1;
    options.ObjectSize = sizeof(Optional);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Outracks.Simulator.Bytecode.Optional", options);
    type->fp_ctor_ = (void*)Optional__New1_fn;
    ::TYPES[143] = ::g::Outracks::Simulator::Bytecode::Optional1_typeof();
    ::TYPES[144] = ::g::Uno::Func_typeof();
    ::TYPES[94] = ::g::Uno::Func1_typeof();
    ::TYPES[145] = ::g::Uno::IO::BinaryReader_typeof();
    ::TYPES[146] = ::g::Uno::Action2_typeof();
    ::TYPES[147] = ::g::Uno::IO::BinaryWriter_typeof();
    ::TYPES[148] = ::g::Uno::Action1_typeof();
    type->Reflection.SetFunctions(8,
        new uFunction("None", NULL, (void*)Optional__None_fn, 0, true, Optional_typeof(), 0),
        new uFunction("None`1", type, (void*)Optional__None1_fn, 0, true, ::g::Outracks::Simulator::Bytecode::Optional1_typeof()->MakeType(type->U(0)), 0),
        new uFunction("Read`1", type, (void*)Optional__Read_fn, 0, true, ::g::Outracks::Simulator::Bytecode::Optional1_typeof()->MakeType(type->U(0)), 2, ::g::Uno::IO::BinaryReader_typeof(), ::g::Uno::Func_typeof()->MakeType(type->U(0))),
        new uFunction("Read`1", type, (void*)Optional__Read1_fn, 0, true, ::g::Outracks::Simulator::Bytecode::Optional1_typeof()->MakeType(type->U(0)), 2, ::g::Uno::IO::BinaryReader_typeof(), ::g::Uno::Func1_typeof()->MakeType(::g::Uno::IO::BinaryReader_typeof(), type->U(0))),
        new uFunction("Some`1", type, (void*)Optional__Some_fn, 0, true, ::g::Outracks::Simulator::Bytecode::Optional1_typeof()->MakeType(type->U(0)), 1, type->U(0)),
        new uFunction("Write`1", type, (void*)Optional__Write_fn, 0, true, uVoid_typeof(), 3, ::g::Uno::IO::BinaryWriter_typeof(), ::g::Outracks::Simulator::Bytecode::Optional1_typeof()->MakeType(type->U(0)), ::g::Uno::Action2_typeof()->MakeType(type->U(0), ::g::Uno::IO::BinaryWriter_typeof())),
        new uFunction("Write`1", type, (void*)Optional__Write1_fn, 0, true, uVoid_typeof(), 3, ::g::Uno::IO::BinaryWriter_typeof(), ::g::Outracks::Simulator::Bytecode::Optional1_typeof()->MakeType(type->U(0)), ::g::Uno::Action1_typeof()->MakeType(type->U(0))),
        new uFunction("Write`1", type, (void*)Optional__Write2_fn, 0, true, uVoid_typeof(), 3, ::g::Uno::IO::BinaryWriter_typeof(), ::g::Outracks::Simulator::Bytecode::Optional1_typeof()->MakeType(type->U(0)), ::g::Uno::Action2_typeof()->MakeType(::g::Uno::IO::BinaryWriter_typeof(), type->U(0))));
    return type;
}

// private Optional() :294
void Optional__ctor__fn(Optional* __this)
{
    __this->ctor_();
}

// private Optional New() :294
void Optional__New1_fn(Optional** __retval)
{
    *__retval = Optional::New1();
}

// public static Outracks.Simulator.Bytecode.Optional None() :289
void Optional__None_fn(Optional** __retval)
{
    *__retval = Optional::None();
}

// public static Outracks.Simulator.Bytecode.Optional<T> None<T>() :284
void Optional__None1_fn(uType* __type, uTRef __retval)
{
    uType* __types[] = {
        ::TYPES[143/*Outracks.Simulator.Bytecode.Optional`1*/]->MakeType(__type->U(0)),
        __type->U(0),
    };
    uT ret2(__types[0], U_ALLOCA(__types[0]->ValueSize));
    ;
    return __retval.Store((::g::Outracks::Simulator::Bytecode::Optional1__New1_fn(__types[0], uCRef(false), uT(__types[1], U_ALLOCA(__types[1]->ValueSize)), &ret2), ret2)), void();
}

// public static Outracks.Simulator.Bytecode.Optional<T> Read<T>(Uno.IO.BinaryReader reader, Uno.Func<T> readSome) :296
void Optional__Read_fn(uType* __type, ::g::Uno::IO::BinaryReader* reader, uDelegate* readSome, uTRef __retval)
{
    uType* __types[] = {
        ::TYPES[143/*Outracks.Simulator.Bytecode.Optional`1*/]->MakeType(__type->U(0)),
        __type->U(0),
        Optional_typeof()->MakeMethod(1, __type->U(0)),
        ::TYPES[144/*Uno.Func`1*/]->MakeType(__type->U(0)),
        Optional_typeof()->MakeMethod(1, __type->U(0)),
    };
    uT ret3(__types[0], U_ALLOCA(__types[0]->ValueSize));
    uT ret4(__types[1], U_ALLOCA(__types[1]->ValueSize));
    uT ret5(__types[0], U_ALLOCA(__types[0]->ValueSize));
    ;
    ;
    ;
    return __retval.Store(__types[0], uPtr(reader)->ReadBoolean() ? (Optional__Some_fn(__types[2], (uPtr(readSome)->Invoke(&ret4), ret4), &ret3), (void*)ret3) : (Optional__None1_fn(__types[4], &ret5), (void*)ret5)), void();
}

// public static Outracks.Simulator.Bytecode.Optional<T> Read<T>(Uno.IO.BinaryReader reader, Uno.Func<Uno.IO.BinaryReader, T> readSome) :303
void Optional__Read1_fn(uType* __type, ::g::Uno::IO::BinaryReader* reader, uDelegate* readSome, uTRef __retval)
{
    uType* __types[] = {
        ::TYPES[143/*Outracks.Simulator.Bytecode.Optional`1*/]->MakeType(__type->U(0)),
        __type->U(0),
        Optional_typeof()->MakeMethod(1, __type->U(0)),
        ::TYPES[94/*Uno.Func`2*/]->MakeType(::TYPES[145/*Uno.IO.BinaryReader*/], __type->U(0)),
        Optional_typeof()->MakeMethod(1, __type->U(0)),
    };
    uT ret6(__types[0], U_ALLOCA(__types[0]->ValueSize));
    uT ret7(__types[1], U_ALLOCA(__types[1]->ValueSize));
    uT ret8(__types[0], U_ALLOCA(__types[0]->ValueSize));
    ;
    ;
    ;
    return __retval.Store(__types[0], uPtr(reader)->ReadBoolean() ? (Optional__Some_fn(__types[2], (uPtr(readSome)->Invoke(&ret7, 1, reader), ret7), &ret6), (void*)ret6) : (Optional__None1_fn(__types[4], &ret8), (void*)ret8)), void();
}

// public static Outracks.Simulator.Bytecode.Optional<T> Some<T>(T value) :279
void Optional__Some_fn(uType* __type, void* value, uTRef __retval)
{
    uType* __types[] = {
        __type->U(0),
        ::TYPES[143/*Outracks.Simulator.Bytecode.Optional`1*/]->MakeType(__type->U(0)),
    };
    uT ret9(__types[1], U_ALLOCA(__types[1]->ValueSize));
    ;
    return __retval.Store((::g::Outracks::Simulator::Bytecode::Optional1__New1_fn(__types[1], uCRef(true), value, &ret9), ret9)), void();
}

// public static void Write<T>(Uno.IO.BinaryWriter writer, Outracks.Simulator.Bytecode.Optional<T> optional, Uno.Action<T, Uno.IO.BinaryWriter> writeSome) :323
void Optional__Write_fn(uType* __type, ::g::Uno::IO::BinaryWriter* writer, void* optional, uDelegate* writeSome)
{
    uType* __types[] = {
        ::TYPES[143/*Outracks.Simulator.Bytecode.Optional`1*/]->MakeType(__type->U(0)),
        __type->U(0),
        ::TYPES[146/*Uno.Action`2*/]->MakeType(__type->U(0), ::TYPES[147/*Uno.IO.BinaryWriter*/]),
    };
    uT optional_(__types[0], U_ALLOCA(__types[0]->ValueSize));
    uT ret11(__types[1], U_ALLOCA(__types[1]->ValueSize));
    bool ret10;
    optional_ = optional;
    ;

    if ((::g::Outracks::Simulator::Bytecode::Optional1__get_HasValue_fn(&optional_, __types[0], &ret10), ret10))
    {
        uPtr(writer)->Write(true);
        uPtr(writeSome)->Invoke(2, (::g::Outracks::Simulator::Bytecode::Optional1__get_Value_fn(&optional_, __types[0], &ret11), (void*)ret11), writer);
    }
    else
        uPtr(writer)->Write(false);
}

// public static void Write<T>(Uno.IO.BinaryWriter writer, Outracks.Simulator.Bytecode.Optional<T> optional, Uno.Action<T> writeSome) :336
void Optional__Write1_fn(uType* __type, ::g::Uno::IO::BinaryWriter* writer, void* optional, uDelegate* writeSome)
{
    uType* __types[] = {
        ::TYPES[143/*Outracks.Simulator.Bytecode.Optional`1*/]->MakeType(__type->U(0)),
        __type->U(0),
        ::TYPES[148/*Uno.Action`1*/]->MakeType(__type->U(0)),
    };
    uT optional_(__types[0], U_ALLOCA(__types[0]->ValueSize));
    uT ret13(__types[1], U_ALLOCA(__types[1]->ValueSize));
    bool ret12;
    optional_ = optional;
    ;

    if ((::g::Outracks::Simulator::Bytecode::Optional1__get_HasValue_fn(&optional_, __types[0], &ret12), ret12))
    {
        uPtr(writer)->Write(true);
        uPtr(writeSome)->InvokeVoid((::g::Outracks::Simulator::Bytecode::Optional1__get_Value_fn(&optional_, __types[0], &ret13), ret13));
    }
    else
        uPtr(writer)->Write(false);
}

// public static void Write<T>(Uno.IO.BinaryWriter writer, Outracks.Simulator.Bytecode.Optional<T> optional, Uno.Action<Uno.IO.BinaryWriter, T> writeSome) :310
void Optional__Write2_fn(uType* __type, ::g::Uno::IO::BinaryWriter* writer, void* optional, uDelegate* writeSome)
{
    uType* __types[] = {
        ::TYPES[143/*Outracks.Simulator.Bytecode.Optional`1*/]->MakeType(__type->U(0)),
        __type->U(0),
        ::TYPES[146/*Uno.Action`2*/]->MakeType(::TYPES[147/*Uno.IO.BinaryWriter*/], __type->U(0)),
    };
    uT optional_(__types[0], U_ALLOCA(__types[0]->ValueSize));
    uT ret15(__types[1], U_ALLOCA(__types[1]->ValueSize));
    bool ret14;
    optional_ = optional;
    ;

    if ((::g::Outracks::Simulator::Bytecode::Optional1__get_HasValue_fn(&optional_, __types[0], &ret14), ret14))
    {
        uPtr(writer)->Write(true);
        uPtr(writeSome)->Invoke(2, writer, (::g::Outracks::Simulator::Bytecode::Optional1__get_Value_fn(&optional_, __types[0], &ret15), (void*)ret15));
    }
    else
        uPtr(writer)->Write(false);
}

// private Optional() [instance] :294
void Optional::ctor_()
{
}

// private Optional New() [static] :294
Optional* Optional::New1()
{
    Optional* obj1 = (Optional*)uNew(Optional_typeof());
    obj1->ctor_();
    return obj1;
}

// public static Outracks.Simulator.Bytecode.Optional None() [static] :289
Optional* Optional::None()
{
    return Optional::New1();
}
// }

// C:\ProgramData\Uno\Packages\Outracks.Simulator.Protocol.Uno\0.1.0\Common\$.uno(350)
// -----------------------------------------------------------------------------------

// public struct Optional<T> :350
// {
Optional1_type* Optional1_typeof()
{
    static uSStrong<Optional1_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 2;
    options.GenericCount = 1;
    options.InterfaceCount = 1;
    options.TypeSize = sizeof(Optional1_type);
    type = (Optional1_type*)uStructType::New("Outracks.Simulator.Bytecode.Optional`1", options);
    type->fp_Equals_struct = (void(*)(void*, uType*, uObject*, bool*))Optional1__Equals_fn;
    type->fp_GetHashCode_struct = (void(*)(void*, uType*, int*))Optional1__GetHashCode_fn;
    type->fp_ToString_struct = (void(*)(void*, uType*, uString**))Optional1__ToString_fn;
    ::STRINGS[19] = uString::Const("Some {");
    ::STRINGS[20] = uString::Const("}");
    ::STRINGS[21] = uString::Const("None");
    ::TYPES[11] = ::g::Uno::Bool_typeof();
    ::TYPES[2] = uObject_typeof();
    type->SetInterfaces(
        ::g::Outracks::Simulator::IEquatable_typeof()->MakeType(type), offsetof(Optional1_type, interface0));
    type->SetFields(0,
        ::g::Uno::Bool_typeof(), (uintptr_t)0, uFieldFlagsConstrained,
        type->T(0), (uintptr_t)0, uFieldFlagsConstrained);
    type->Reflection.SetFunctions(3,
        new uFunction("Equals", type, (void*)Optional1__Equals2_fn, 0, false, ::g::Uno::Bool_typeof(), 1, type),
        new uFunction("get_HasValue", type, (void*)Optional1__get_HasValue_fn, 0, false, ::g::Uno::Bool_typeof(), 0),
        new uFunction("get_Value", type, (void*)Optional1__get_Value_fn, 0, false, type->T(0), 0));
    return type;
}

// internal Optional(bool hasValue, T value) :369
void Optional1__ctor__fn(uTRef __this, uType* __type, bool* hasValue, void* value)
{
    uType* __types[] = {
        __type->T(0),
    };
    bool hasValue_ = *hasValue;
    __type->Field(__this, 0/*_hasValue*/).Value<bool>() = hasValue_;
    __type->Field(__this, 1/*_value*/) = value;
}

// public override sealed bool Equals(object obj) :385
void Optional1__Equals_fn(uTRef __this, uType* __type, uObject* obj, bool* __retval)
{
    bool ret2;

    if (::g::Uno::Object::ReferenceEquals(NULL, obj))
        return *__retval = false, void();

    return *__retval = uIs(obj, __type) && (Optional1__Equals2_fn(__this, __type, uUnboxAny(__type, obj), &ret2), ret2), void();
}

// public bool Equals(Outracks.Simulator.Bytecode.Optional<T> other) :391
void Optional1__Equals2_fn(uTRef __this, uType* __type, void* other, bool* __retval)
{
    uT other_(__type, U_ALLOCA(__type->ValueSize));
    bool ind1;
    other_ = other;
    return *__retval = ::g::Uno::Bool::Equals((ind1 = __type->Field(__this, 0/*_hasValue*/).Value<bool>(), ind1), ::TYPES[11/*bool*/], uBox(::TYPES[11/*bool*/], other_[0/*_hasValue*/].Value<bool>())) && ::g::Uno::Object::Equals(uBoxPtr(__type->T(0), __type->Field(__this, 1/*_value*/), U_ALLOCA(__type->T(0)->ObjectSize)), uBoxPtr(__type->T(0), other_[1/*_value*/])), void();
}

// public override sealed int GetHashCode() :396
void Optional1__GetHashCode_fn(uTRef __this, uType* __type, int* __retval)
{
    bool ind2;
    return *__retval = (::g::Uno::Bool::GetHashCode((ind2 = __type->Field(__this, 0/*_hasValue*/).Value<bool>(), ind2), ::TYPES[11/*bool*/]) * 397) ^ ::g::Uno::Object::GetHashCode(uBoxPtr(__type->T(0), __type->Field(__this, 1/*_value*/), U_ALLOCA(__type->T(0)->ObjectSize))), void();
}

// public bool get_HasValue() :357
void Optional1__get_HasValue_fn(uTRef __this, uType* __type, bool* __retval)
{
    return *__retval = __type->Field(__this, 0/*_hasValue*/).Value<bool>(), void();
}

// internal Optional New(bool hasValue, T value) :369
void Optional1__New1_fn(uType* __type, bool* hasValue, void* value, uTRef __retval)
{
    uType* __types[] = {
        __type->T(0),
    };
    uT obj1(__type, U_ALLOCA(__type->ValueSize));
    bool hasValue_ = *hasValue;
    ;
    Optional1__ctor__fn(&obj1, __type, uCRef(hasValue_), value);
    return __retval.Store(obj1), void();
}

// public static operator ==(Outracks.Simulator.Bytecode.Optional<T> left, Outracks.Simulator.Bytecode.Optional<T> right) :404
void Optional1__op_Equality_fn(uType* __type, void* left, void* right, bool* __retval)
{
    uT left_(__type, U_ALLOCA(__type->ValueSize));
    uT right_(__type, U_ALLOCA(__type->ValueSize));
    bool ret3;
    left_ = left;
    right_ = right;
    return *__retval = (Optional1__Equals2_fn(&left_, __type, right_, &ret3), ret3), void();
}

// public static implicit operator Outracks.Simulator.Bytecode.Optional<T>(Outracks.Simulator.Bytecode.Optional value) :380
void Optional1__op_Implicit_fn(uType* __type, ::g::Outracks::Simulator::Bytecode::Optional* value, uTRef __retval)
{
    uT ret4(__type, U_ALLOCA(__type->ValueSize));
    ;
    return __retval.Store((Optional1__New1_fn(__type, uCRef(false), uT(__type->T(0), U_ALLOCA(__type->T(0)->ValueSize)), &ret4), ret4)), void();
}

// public static implicit operator Outracks.Simulator.Bytecode.Optional<T>(T value) :375
void Optional1__op_Implicit1_fn(uType* __type, void* value, uTRef __retval)
{
    uType* __types[] = {
        __type->T(0),
    };
    uT ret5(__type, U_ALLOCA(__type->ValueSize));
    ;
    return __retval.Store((Optional1__New1_fn(__type, uCRef(true), value, &ret5), ret5)), void();
}

// public static operator !=(Outracks.Simulator.Bytecode.Optional<T> left, Outracks.Simulator.Bytecode.Optional<T> right) :409
void Optional1__op_Inequality_fn(uType* __type, void* left, void* right, bool* __retval)
{
    uT left_(__type, U_ALLOCA(__type->ValueSize));
    uT right_(__type, U_ALLOCA(__type->ValueSize));
    bool ret6;
    left_ = left;
    right_ = right;
    return *__retval = !(Optional1__Equals2_fn(&left_, __type, right_, &ret6), ret6), void();
}

// public override sealed string ToString() :414
void Optional1__ToString_fn(uTRef __this, uType* __type, uString** __retval)
{
    uType* __types[] = {
        __type->T(0),
    };
    uT ret8(__types[0], U_ALLOCA(__types[0]->ValueSize));
    bool ret7;
    ;
    return *__retval = (Optional1__get_HasValue_fn(__this, __type, &ret7), ret7) ? (uString*)::g::Uno::String::op_Addition2(::g::Uno::String::op_Addition1(::STRINGS[19/*"Some {"*/], uBoxPtr(__types[0], (Optional1__get_Value_fn(__this, __type, &ret8), ret8))), ::STRINGS[20/*"}"*/]) : ::STRINGS[21/*"None"*/], void();
}

// public T get_Value() :362
void Optional1__get_Value_fn(uTRef __this, uType* __type, uTRef __retval)
{
    if (!__type->Field(__this, 0/*_hasValue*/).Value<bool>())
        U_THROW(::g::Uno::InvalidOperationException::New4());

    return __retval.Store(__type->Field(__this, 1/*_value*/)), void();
}
// }

// C:\ProgramData\Uno\Packages\Outracks.Simulator.Protocol.Uno\0.1.0\Common\$.uno(252)
// -----------------------------------------------------------------------------------

// public static class OptionalExtensions :252
// {
uClassType* OptionalExtensions_typeof()
{
    static uSStrong<uClassType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.MethodTypeCount = 2;
    options.TypeSize = sizeof(uClassType);
    type = uClassType::New("Outracks.Simulator.Bytecode.OptionalExtensions", options);
    ::TYPES[143] = ::g::Outracks::Simulator::Bytecode::Optional1_typeof();
    ::TYPES[2] = uObject_typeof();
    ::TYPES[149] = ::g::Outracks::Simulator::Bytecode::Optional_typeof();
    type->Reflection.SetFunctions(3,
        new uFunction("Or`1", type, (void*)OptionalExtensions__Or_fn, 0, true, ::g::Outracks::Simulator::Bytecode::Optional1_typeof()->MakeType(type->U(0)), 2, ::g::Outracks::Simulator::Bytecode::Optional1_typeof()->MakeType(type->U(0)), ::g::Outracks::Simulator::Bytecode::Optional1_typeof()->MakeType(type->U(0))),
        new uFunction("Or`2", type, (void*)OptionalExtensions__Or1_fn, 0, true, type->U(1), 2, ::g::Outracks::Simulator::Bytecode::Optional1_typeof()->MakeType(type->U(0)), type->U(1)),
        new uFunction("ToOptional`1", type, (void*)OptionalExtensions__ToOptional_fn, 0, true, ::g::Outracks::Simulator::Bytecode::Optional1_typeof()->MakeType(type->U(0)), 1, type->U(0)));
    return type;
}

// public static Outracks.Simulator.Bytecode.Optional<T> Or<T>(Outracks.Simulator.Bytecode.Optional<T> self, Outracks.Simulator.Bytecode.Optional<T> fallback) :268
void OptionalExtensions__Or_fn(uType* __type, void* self, void* fallback, uTRef __retval)
{
    uType* __types[] = {
        ::TYPES[143/*Outracks.Simulator.Bytecode.Optional`1*/]->MakeType(__type->U(0)),
        __type->U(0),
    };
    uT self_(__types[0], U_ALLOCA(__types[0]->ValueSize));
    uT fallback_(__types[0], U_ALLOCA(__types[0]->ValueSize));
    bool ret1;
    self_ = self;
    fallback_ = fallback;
    return __retval.Store(__types[0], (::g::Outracks::Simulator::Bytecode::Optional1__get_HasValue_fn(&self_, __types[0], &ret1), ret1) ? (void*)self_ : (void*)fallback_), void();
}

// public static TResult Or<T, TResult>(Outracks.Simulator.Bytecode.Optional<T> self, TResult fallback) :261
void OptionalExtensions__Or1_fn(uType* __type, void* self, void* fallback, uTRef __retval)
{
    uType* __types[] = {
        ::TYPES[143/*Outracks.Simulator.Bytecode.Optional`1*/]->MakeType(__type->U(0)),
        __type->U(0),
        __type->U(1),
    };
    uT self_(__types[0], U_ALLOCA(__types[0]->ValueSize));
    uT ret3(__types[1], U_ALLOCA(__types[1]->ValueSize));
    bool ret2;
    self_ = self;
    ;
    return __retval.Store(__types[2], (::g::Outracks::Simulator::Bytecode::Optional1__get_HasValue_fn(&self_, __types[0], &ret2), ret2) ? (void*)uUnboxAny(__types[2], uBoxPtr(__types[1], (::g::Outracks::Simulator::Bytecode::Optional1__get_Value_fn(&self_, __types[0], &ret3), ret3))) : fallback), void();
}

// public static Outracks.Simulator.Bytecode.Optional<T> ToOptional<T>(T self) :254
void OptionalExtensions__ToOptional_fn(uType* __type, uObject* self, uTRef __retval)
{
    uType* __types[] = {
        ::TYPES[143/*Outracks.Simulator.Bytecode.Optional`1*/]->MakeType(__type->U(0)),
        __type->U(0),
        ::TYPES[149/*Outracks.Simulator.Bytecode.Optional*/]->MakeMethod(1, __type->U(0)),
        ::TYPES[149/*Outracks.Simulator.Bytecode.Optional*/]->MakeMethod(1, __type->U(0)),
    };
    uT ret4(__types[0], U_ALLOCA(__types[0]->ValueSize));
    uT ret5(__types[0], U_ALLOCA(__types[0]->ValueSize));
    ;
    ;
    return __retval.Store(__types[0], (self == NULL) ? (::g::Outracks::Simulator::Bytecode::Optional__None1_fn(__types[2], &ret4), (void*)ret4) : (::g::Outracks::Simulator::Bytecode::Optional__Some_fn(__types[3], self, &ret5), (void*)ret5)), void();
}
// }

// C:\ProgramData\Uno\Packages\Outracks.Simulator.Protocol.Uno\0.1.0\Bytecode\$.uno(1691)
// --------------------------------------------------------------------------------------

// public sealed class Parameter :1691
// {
// static Parameter() :1691
static void Parameter__cctor__fn(uType* __type)
{
    Parameter::Read_ = uDelegate::New(::TYPES[150/*Uno.Func<Uno.IO.BinaryReader, Outracks.Simulator.Bytecode.Parameter>*/], (void*)Parameter___Read_fn);
    Parameter::Write_ = uDelegate::New(::TYPES[151/*Uno.Action<Outracks.Simulator.Bytecode.Parameter, Uno.IO.BinaryWriter>*/], (void*)Parameter___Write_fn);
}

uType* Parameter_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 4;
    options.ObjectSize = sizeof(Parameter);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Outracks.Simulator.Bytecode.Parameter", options);
    type->fp_cctor_ = Parameter__cctor__fn;
    type->fp_ToString = (void(*)(uObject*, uString**))Parameter__ToString_fn;
    ::STRINGS[22] = uString::Const(" ");
    ::TYPES[150] = ::g::Uno::Func1_typeof()->MakeType(::g::Uno::IO::BinaryReader_typeof(), Parameter_typeof());
    ::TYPES[151] = ::g::Uno::Action2_typeof()->MakeType(Parameter_typeof(), ::g::Uno::IO::BinaryWriter_typeof());
    ::TYPES[95] = ::g::Uno::Func1_typeof()->MakeType(::g::Uno::IO::BinaryReader_typeof(), ::g::Outracks::Simulator::Bytecode::TypeName_typeof());
    ::TYPES[96] = ::g::Outracks::Simulator::Bytecode::TypeName_typeof();
    ::TYPES[7] = ::g::Uno::Func1_typeof()->MakeType(::g::Uno::IO::BinaryReader_typeof(), ::g::Outracks::Simulator::Bytecode::Variable_typeof());
    ::TYPES[8] = ::g::Outracks::Simulator::Bytecode::Variable_typeof();
    ::TYPES[97] = ::g::Uno::Action2_typeof()->MakeType(::g::Outracks::Simulator::Bytecode::TypeName_typeof(), ::g::Uno::IO::BinaryWriter_typeof());
    ::TYPES[9] = ::g::Uno::Action2_typeof()->MakeType(::g::Outracks::Simulator::Bytecode::Variable_typeof(), ::g::Uno::IO::BinaryWriter_typeof());
    ::TYPES[2] = uObject_typeof();
    type->SetFields(0,
        ::g::Outracks::Simulator::Bytecode::Variable_typeof(), offsetof(::g::Outracks::Simulator::Bytecode::Parameter, Name), 0,
        ::g::Outracks::Simulator::Bytecode::TypeName_typeof(), offsetof(::g::Outracks::Simulator::Bytecode::Parameter, Type), 0,
        ::g::Uno::Func1_typeof()->MakeType(::g::Uno::IO::BinaryReader_typeof(), Parameter_typeof()), (uintptr_t)&::g::Outracks::Simulator::Bytecode::Parameter::Read_, uFieldFlagsStatic,
        ::g::Uno::Action2_typeof()->MakeType(Parameter_typeof(), ::g::Uno::IO::BinaryWriter_typeof()), (uintptr_t)&::g::Outracks::Simulator::Bytecode::Parameter::Write_, uFieldFlagsStatic);
    type->Reflection.SetFields(4,
        new uField("Name", 0),
        new uField("Read", 2),
        new uField("Type", 1),
        new uField("Write", 3));
    type->Reflection.SetFunctions(1,
        new uFunction(".ctor", NULL, (void*)Parameter__New1_fn, 0, true, Parameter_typeof(), 2, ::g::Outracks::Simulator::Bytecode::TypeName_typeof(), ::g::Outracks::Simulator::Bytecode::Variable_typeof()));
    return type;
}

// public Parameter(Outracks.Simulator.Bytecode.TypeName type, Outracks.Simulator.Bytecode.Variable name) :1696
void Parameter__ctor__fn(Parameter* __this, ::g::Outracks::Simulator::Bytecode::TypeName* type, ::g::Outracks::Simulator::Bytecode::Variable* name)
{
    __this->ctor_(type, name);
}

// private static Outracks.Simulator.Bytecode.Parameter _Read(Uno.IO.BinaryReader reader) :1706
void Parameter___Read_fn(::g::Uno::IO::BinaryReader* reader, Parameter** __retval)
{
    *__retval = Parameter::_Read(reader);
}

// private static void _Write(Outracks.Simulator.Bytecode.Parameter p, Uno.IO.BinaryWriter writer) :1715
void Parameter___Write_fn(Parameter* p, ::g::Uno::IO::BinaryWriter* writer)
{
    Parameter::_Write(p, writer);
}

// public Parameter New(Outracks.Simulator.Bytecode.TypeName type, Outracks.Simulator.Bytecode.Variable name) :1696
void Parameter__New1_fn(::g::Outracks::Simulator::Bytecode::TypeName* type, ::g::Outracks::Simulator::Bytecode::Variable* name, Parameter** __retval)
{
    *__retval = Parameter::New1(type, name);
}

// public override sealed string ToString() :1721
void Parameter__ToString_fn(Parameter* __this, uString** __retval)
{
    return *__retval = ::g::Uno::String::op_Addition1(::g::Uno::String::op_Addition(__this->Type, ::STRINGS[22/*" "*/]), __this->Name), void();
}

uSStrong<uDelegate*> Parameter::Read_;
uSStrong<uDelegate*> Parameter::Write_;

// public Parameter(Outracks.Simulator.Bytecode.TypeName type, Outracks.Simulator.Bytecode.Variable name) [instance] :1696
void Parameter::ctor_(::g::Outracks::Simulator::Bytecode::TypeName* type, ::g::Outracks::Simulator::Bytecode::Variable* name)
{
    Type = type;
    Name = name;
}

// private static Outracks.Simulator.Bytecode.Parameter _Read(Uno.IO.BinaryReader reader) [static] :1706
Parameter* Parameter::_Read(::g::Uno::IO::BinaryReader* reader)
{
    Parameter_typeof()->Init();
    ::g::Outracks::Simulator::Bytecode::TypeName* type = (::g::Outracks::Simulator::Bytecode::TypeName*)uPtr(::g::Outracks::Simulator::Bytecode::TypeName::Read())->Invoke(1, reader);
    ::g::Outracks::Simulator::Bytecode::Variable* name = (::g::Outracks::Simulator::Bytecode::Variable*)uPtr(::g::Outracks::Simulator::Bytecode::Variable::Read())->Invoke(1, reader);
    return Parameter::New1(type, name);
}

// private static void _Write(Outracks.Simulator.Bytecode.Parameter p, Uno.IO.BinaryWriter writer) [static] :1715
void Parameter::_Write(Parameter* p, ::g::Uno::IO::BinaryWriter* writer)
{
    Parameter_typeof()->Init();
    uPtr(::g::Outracks::Simulator::Bytecode::TypeName::Write())->Invoke(2, (::g::Outracks::Simulator::Bytecode::TypeName*)uPtr(p)->Type, writer);
    uPtr(::g::Outracks::Simulator::Bytecode::Variable::Write())->Invoke(2, (::g::Outracks::Simulator::Bytecode::Variable*)p->Name, writer);
}

// public Parameter New(Outracks.Simulator.Bytecode.TypeName type, Outracks.Simulator.Bytecode.Variable name) [static] :1696
Parameter* Parameter::New1(::g::Outracks::Simulator::Bytecode::TypeName* type, ::g::Outracks::Simulator::Bytecode::Variable* name)
{
    Parameter* obj1 = (Parameter*)uNew(Parameter_typeof());
    obj1->ctor_(type, name);
    return obj1;
}
// }

// C:\ProgramData\Uno\Packages\Outracks.Simulator.Protocol.Uno\0.1.0\Bytecode\$.uno(1733)
// --------------------------------------------------------------------------------------

// public sealed class ProjectBytecode :1733
// {
uType* ProjectBytecode_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 2;
    options.ObjectSize = sizeof(ProjectBytecode);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Outracks.Simulator.Bytecode.ProjectBytecode", options);
    type->fp_ToString = (void(*)(uObject*, uString**))ProjectBytecode__ToString_fn;
    type->SetFields(0,
        ::g::Outracks::Simulator::ImmutableList_typeof()->MakeType(::g::Uno::String_typeof()), offsetof(::g::Outracks::Simulator::Bytecode::ProjectBytecode, Dependencies), 0,
        ::g::Outracks::Simulator::Bytecode::Lambda_typeof(), offsetof(::g::Outracks::Simulator::Bytecode::ProjectBytecode, Reify), 0);
    type->Reflection.SetFields(2,
        new uField("Dependencies", 0),
        new uField("Reify", 1));
    type->Reflection.SetFunctions(1,
        new uFunction(".ctor", NULL, (void*)ProjectBytecode__New1_fn, 0, true, ProjectBytecode_typeof(), 2, ::g::Outracks::Simulator::Bytecode::Lambda_typeof(), ::g::Outracks::Simulator::ImmutableList_typeof()->MakeType(::g::Uno::String_typeof())));
    return type;
}

// public ProjectBytecode(Outracks.Simulator.Bytecode.Lambda reify, Outracks.Simulator.ImmutableList<string> dependencies) :1739
void ProjectBytecode__ctor__fn(ProjectBytecode* __this, ::g::Outracks::Simulator::Bytecode::Lambda* reify, ::g::Outracks::Simulator::ImmutableList* dependencies)
{
    __this->ctor_(reify, dependencies);
}

// public ProjectBytecode New(Outracks.Simulator.Bytecode.Lambda reify, Outracks.Simulator.ImmutableList<string> dependencies) :1739
void ProjectBytecode__New1_fn(::g::Outracks::Simulator::Bytecode::Lambda* reify, ::g::Outracks::Simulator::ImmutableList* dependencies, ProjectBytecode** __retval)
{
    *__retval = ProjectBytecode::New1(reify, dependencies);
}

// public override sealed string ToString() :1745
void ProjectBytecode__ToString_fn(ProjectBytecode* __this, uString** __retval)
{
    return *__retval = uPtr(__this->Reify)->ToString(), void();
}

// public ProjectBytecode(Outracks.Simulator.Bytecode.Lambda reify, Outracks.Simulator.ImmutableList<string> dependencies) [instance] :1739
void ProjectBytecode::ctor_(::g::Outracks::Simulator::Bytecode::Lambda* reify, ::g::Outracks::Simulator::ImmutableList* dependencies)
{
    Reify = reify;
    Dependencies = dependencies;
}

// public ProjectBytecode New(Outracks.Simulator.Bytecode.Lambda reify, Outracks.Simulator.ImmutableList<string> dependencies) [static] :1739
ProjectBytecode* ProjectBytecode::New1(::g::Outracks::Simulator::Bytecode::Lambda* reify, ::g::Outracks::Simulator::ImmutableList* dependencies)
{
    ProjectBytecode* obj1 = (ProjectBytecode*)uNew(ProjectBytecode_typeof());
    obj1->ctor_(reify, dependencies);
    return obj1;
}
// }

// C:\ProgramData\Uno\Packages\Outracks.Simulator.Protocol.Uno\0.1.0\Bytecode\$.uno(534)
// -------------------------------------------------------------------------------------

// public sealed class ReadProperty :534
// {
uType* ReadProperty_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 2;
    options.ObjectSize = sizeof(ReadProperty);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Outracks.Simulator.Bytecode.ReadProperty", options);
    type->SetBase(::g::Outracks::Simulator::Bytecode::Expression_typeof());
    type->fp_ToString = (void(*)(uObject*, uString**))ReadProperty__ToString_fn;
    ::STRINGS[0] = uString::Const(".");
    ::TYPES[0] = ::g::Uno::Func1_typeof()->MakeType(::g::Uno::IO::BinaryReader_typeof(), ::g::Outracks::Simulator::Bytecode::Expression_typeof());
    ::TYPES[1] = ::g::Outracks::Simulator::Bytecode::Expression_typeof();
    ::TYPES[2] = uObject_typeof();
    ::TYPES[3] = ::g::Outracks::Simulator::Bytecode::TypeMemberName_typeof();
    ::TYPES[4] = ::g::Uno::Action2_typeof()->MakeType(::g::Outracks::Simulator::Bytecode::Expression_typeof(), ::g::Uno::IO::BinaryWriter_typeof());
    type->SetFields(0,
        ::g::Outracks::Simulator::Bytecode::Expression_typeof(), offsetof(::g::Outracks::Simulator::Bytecode::ReadProperty, Object), 0,
        ::g::Outracks::Simulator::Bytecode::TypeMemberName_typeof(), offsetof(::g::Outracks::Simulator::Bytecode::ReadProperty, Property), 0);
    type->Reflection.SetFields(2,
        new uField("Object", 0),
        new uField("Property", 1));
    type->Reflection.SetFunctions(4,
        new uFunction(".ctor", NULL, (void*)ReadProperty__New1_fn, 0, true, ReadProperty_typeof(), 2, ::g::Outracks::Simulator::Bytecode::Expression_typeof(), ::g::Outracks::Simulator::Bytecode::TypeMemberName_typeof()),
        new uFunction("Read", NULL, (void*)ReadProperty__Read2_fn, 0, true, ReadProperty_typeof(), 1, ::g::Uno::IO::BinaryReader_typeof()),
        new uFunction("Write", NULL, (void*)ReadProperty__Write2_fn, 0, true, uVoid_typeof(), 2, ReadProperty_typeof(), ::g::Uno::IO::BinaryWriter_typeof()),
        new uFunction("Write", NULL, (void*)ReadProperty__Write3_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::IO::BinaryWriter_typeof()));
    return type;
}

// public ReadProperty(Outracks.Simulator.Bytecode.Expression o, Outracks.Simulator.Bytecode.TypeMemberName property) :539
void ReadProperty__ctor_2_fn(ReadProperty* __this, ::g::Outracks::Simulator::Bytecode::Expression* o, ::g::Outracks::Simulator::Bytecode::TypeMemberName* property)
{
    __this->ctor_2(o, property);
}

// public ReadProperty New(Outracks.Simulator.Bytecode.Expression o, Outracks.Simulator.Bytecode.TypeMemberName property) :539
void ReadProperty__New1_fn(::g::Outracks::Simulator::Bytecode::Expression* o, ::g::Outracks::Simulator::Bytecode::TypeMemberName* property, ReadProperty** __retval)
{
    *__retval = ReadProperty::New1(o, property);
}

// public static new Outracks.Simulator.Bytecode.ReadProperty Read(Uno.IO.BinaryReader reader) :561
void ReadProperty__Read2_fn(::g::Uno::IO::BinaryReader* reader, ReadProperty** __retval)
{
    *__retval = ReadProperty::Read2(reader);
}

// public override sealed string ToString() :545
void ReadProperty__ToString_fn(ReadProperty* __this, uString** __retval)
{
    return *__retval = ::g::Uno::String::op_Addition2(::g::Uno::String::op_Addition(__this->Object, ::STRINGS[0/*"."*/]), uPtr(__this->Property)->Name), void();
}

// public static new void Write(Outracks.Simulator.Bytecode.ReadProperty o, Uno.IO.BinaryWriter writer) :550
void ReadProperty__Write2_fn(ReadProperty* o, ::g::Uno::IO::BinaryWriter* writer)
{
    ReadProperty::Write2(o, writer);
}

// public new void Write(Uno.IO.BinaryWriter writer) :555
void ReadProperty__Write3_fn(ReadProperty* __this, ::g::Uno::IO::BinaryWriter* writer)
{
    __this->Write3(writer);
}

// public ReadProperty(Outracks.Simulator.Bytecode.Expression o, Outracks.Simulator.Bytecode.TypeMemberName property) [instance] :539
void ReadProperty::ctor_2(::g::Outracks::Simulator::Bytecode::Expression* o, ::g::Outracks::Simulator::Bytecode::TypeMemberName* property)
{
    ctor_1();
    Object = o;
    Property = property;
}

// public new void Write(Uno.IO.BinaryWriter writer) [instance] :555
void ReadProperty::Write3(::g::Uno::IO::BinaryWriter* writer)
{
    uPtr(::g::Outracks::Simulator::Bytecode::Expression::Write1())->Invoke(2, (::g::Outracks::Simulator::Bytecode::Expression*)Object, writer);
    ::g::Outracks::Simulator::Bytecode::TypeMemberName::Write(Property, writer);
}

// public ReadProperty New(Outracks.Simulator.Bytecode.Expression o, Outracks.Simulator.Bytecode.TypeMemberName property) [static] :539
ReadProperty* ReadProperty::New1(::g::Outracks::Simulator::Bytecode::Expression* o, ::g::Outracks::Simulator::Bytecode::TypeMemberName* property)
{
    ReadProperty* obj1 = (ReadProperty*)uNew(ReadProperty_typeof());
    obj1->ctor_2(o, property);
    return obj1;
}

// public static new Outracks.Simulator.Bytecode.ReadProperty Read(Uno.IO.BinaryReader reader) [static] :561
ReadProperty* ReadProperty::Read2(::g::Uno::IO::BinaryReader* reader)
{
    ::g::Outracks::Simulator::Bytecode::Expression* _Object = (::g::Outracks::Simulator::Bytecode::Expression*)uPtr(::g::Outracks::Simulator::Bytecode::Expression::Read1())->Invoke(1, reader);
    ::g::Outracks::Simulator::Bytecode::TypeMemberName* _Property = ::g::Outracks::Simulator::Bytecode::TypeMemberName::Read(reader);
    return ReadProperty::New1(_Object, _Property);
}

// public static new void Write(Outracks.Simulator.Bytecode.ReadProperty o, Uno.IO.BinaryWriter writer) [static] :550
void ReadProperty::Write2(ReadProperty* o, ::g::Uno::IO::BinaryWriter* writer)
{
    uPtr(o)->Write3(writer);
}
// }

// C:\ProgramData\Uno\Packages\Outracks.Simulator.Protocol.Uno\0.1.0\Bytecode\$.uno(502)
// -------------------------------------------------------------------------------------

// public sealed class ReadStaticField :502
// {
uType* ReadStaticField_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 1;
    options.ObjectSize = sizeof(ReadStaticField);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Outracks.Simulator.Bytecode.ReadStaticField", options);
    type->SetBase(::g::Outracks::Simulator::Bytecode::Expression_typeof());
    type->fp_ToString = (void(*)(uObject*, uString**))ReadStaticField__ToString_fn;
    ::STRINGS[0] = uString::Const(".");
    ::TYPES[96] = ::g::Outracks::Simulator::Bytecode::TypeName_typeof();
    ::TYPES[152] = ::g::Outracks::Simulator::Bytecode::StaticMemberName_typeof();
    ::TYPES[3] = ::g::Outracks::Simulator::Bytecode::TypeMemberName_typeof();
    type->SetFields(0,
        ::g::Outracks::Simulator::Bytecode::StaticMemberName_typeof(), offsetof(::g::Outracks::Simulator::Bytecode::ReadStaticField, Field), 0);
    type->Reflection.SetFields(1,
        new uField("Field", 0));
    type->Reflection.SetFunctions(4,
        new uFunction(".ctor", NULL, (void*)ReadStaticField__New1_fn, 0, true, ReadStaticField_typeof(), 1, ::g::Outracks::Simulator::Bytecode::StaticMemberName_typeof()),
        new uFunction("Read", NULL, (void*)ReadStaticField__Read2_fn, 0, true, ReadStaticField_typeof(), 1, ::g::Uno::IO::BinaryReader_typeof()),
        new uFunction("Write", NULL, (void*)ReadStaticField__Write2_fn, 0, true, uVoid_typeof(), 2, ReadStaticField_typeof(), ::g::Uno::IO::BinaryWriter_typeof()),
        new uFunction("Write", NULL, (void*)ReadStaticField__Write3_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::IO::BinaryWriter_typeof()));
    return type;
}

// public ReadStaticField(Outracks.Simulator.Bytecode.StaticMemberName field) :506
void ReadStaticField__ctor_2_fn(ReadStaticField* __this, ::g::Outracks::Simulator::Bytecode::StaticMemberName* field)
{
    __this->ctor_2(field);
}

// public ReadStaticField New(Outracks.Simulator.Bytecode.StaticMemberName field) :506
void ReadStaticField__New1_fn(::g::Outracks::Simulator::Bytecode::StaticMemberName* field, ReadStaticField** __retval)
{
    *__retval = ReadStaticField::New1(field);
}

// public static new Outracks.Simulator.Bytecode.ReadStaticField Read(Uno.IO.BinaryReader reader) :526
void ReadStaticField__Read2_fn(::g::Uno::IO::BinaryReader* reader, ReadStaticField** __retval)
{
    *__retval = ReadStaticField::Read2(reader);
}

// public override sealed string ToString() :511
void ReadStaticField__ToString_fn(ReadStaticField* __this, uString** __retval)
{
    return *__retval = ::g::Uno::String::op_Addition2(::g::Uno::String::op_Addition2(uPtr(uPtr(__this->Field)->TypeName)->FullName(), ::STRINGS[0/*"."*/]), uPtr(uPtr(__this->Field)->MemberName)->Name), void();
}

// public static new void Write(Outracks.Simulator.Bytecode.ReadStaticField o, Uno.IO.BinaryWriter writer) :516
void ReadStaticField__Write2_fn(ReadStaticField* o, ::g::Uno::IO::BinaryWriter* writer)
{
    ReadStaticField::Write2(o, writer);
}

// public new void Write(Uno.IO.BinaryWriter writer) :521
void ReadStaticField__Write3_fn(ReadStaticField* __this, ::g::Uno::IO::BinaryWriter* writer)
{
    __this->Write3(writer);
}

// public ReadStaticField(Outracks.Simulator.Bytecode.StaticMemberName field) [instance] :506
void ReadStaticField::ctor_2(::g::Outracks::Simulator::Bytecode::StaticMemberName* field)
{
    ctor_1();
    Field = field;
}

// public new void Write(Uno.IO.BinaryWriter writer) [instance] :521
void ReadStaticField::Write3(::g::Uno::IO::BinaryWriter* writer)
{
    ::g::Outracks::Simulator::Bytecode::StaticMemberName::Write(Field, writer);
}

// public ReadStaticField New(Outracks.Simulator.Bytecode.StaticMemberName field) [static] :506
ReadStaticField* ReadStaticField::New1(::g::Outracks::Simulator::Bytecode::StaticMemberName* field)
{
    ReadStaticField* obj1 = (ReadStaticField*)uNew(ReadStaticField_typeof());
    obj1->ctor_2(field);
    return obj1;
}

// public static new Outracks.Simulator.Bytecode.ReadStaticField Read(Uno.IO.BinaryReader reader) [static] :526
ReadStaticField* ReadStaticField::Read2(::g::Uno::IO::BinaryReader* reader)
{
    ::g::Outracks::Simulator::Bytecode::StaticMemberName* _Field = ::g::Outracks::Simulator::Bytecode::StaticMemberName::Read(reader);
    return ReadStaticField::New1(_Field);
}

// public static new void Write(Outracks.Simulator.Bytecode.ReadStaticField o, Uno.IO.BinaryWriter writer) [static] :516
void ReadStaticField::Write2(ReadStaticField* o, ::g::Uno::IO::BinaryWriter* writer)
{
    uPtr(o)->Write3(writer);
}
// }

// C:\ProgramData\Uno\Packages\Outracks.Simulator.Protocol.Uno\0.1.0\Bytecode\$.uno(307)
// -------------------------------------------------------------------------------------

// public sealed class ReadVariable :307
// {
uType* ReadVariable_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 1;
    options.ObjectSize = sizeof(ReadVariable);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Outracks.Simulator.Bytecode.ReadVariable", options);
    type->SetBase(::g::Outracks::Simulator::Bytecode::Expression_typeof());
    type->fp_ToString = (void(*)(uObject*, uString**))ReadVariable__ToString_fn;
    ::TYPES[7] = ::g::Uno::Func1_typeof()->MakeType(::g::Uno::IO::BinaryReader_typeof(), ::g::Outracks::Simulator::Bytecode::Variable_typeof());
    ::TYPES[8] = ::g::Outracks::Simulator::Bytecode::Variable_typeof();
    ::TYPES[9] = ::g::Uno::Action2_typeof()->MakeType(::g::Outracks::Simulator::Bytecode::Variable_typeof(), ::g::Uno::IO::BinaryWriter_typeof());
    type->SetFields(0,
        ::g::Outracks::Simulator::Bytecode::Variable_typeof(), offsetof(::g::Outracks::Simulator::Bytecode::ReadVariable, Variable), 0);
    type->Reflection.SetFields(1,
        new uField("Variable", 0));
    type->Reflection.SetFunctions(4,
        new uFunction(".ctor", NULL, (void*)ReadVariable__New1_fn, 0, true, ReadVariable_typeof(), 1, ::g::Outracks::Simulator::Bytecode::Variable_typeof()),
        new uFunction("Read", NULL, (void*)ReadVariable__Read2_fn, 0, true, ReadVariable_typeof(), 1, ::g::Uno::IO::BinaryReader_typeof()),
        new uFunction("Write", NULL, (void*)ReadVariable__Write2_fn, 0, true, uVoid_typeof(), 2, ReadVariable_typeof(), ::g::Uno::IO::BinaryWriter_typeof()),
        new uFunction("Write", NULL, (void*)ReadVariable__Write3_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::IO::BinaryWriter_typeof()));
    return type;
}

// public ReadVariable(Outracks.Simulator.Bytecode.Variable variable) :311
void ReadVariable__ctor_2_fn(ReadVariable* __this, ::g::Outracks::Simulator::Bytecode::Variable* variable)
{
    __this->ctor_2(variable);
}

// public ReadVariable New(Outracks.Simulator.Bytecode.Variable variable) :311
void ReadVariable__New1_fn(::g::Outracks::Simulator::Bytecode::Variable* variable, ReadVariable** __retval)
{
    *__retval = ReadVariable::New1(variable);
}

// public static new Outracks.Simulator.Bytecode.ReadVariable Read(Uno.IO.BinaryReader reader) :330
void ReadVariable__Read2_fn(::g::Uno::IO::BinaryReader* reader, ReadVariable** __retval)
{
    *__retval = ReadVariable::Read2(reader);
}

// public override sealed string ToString() :316
void ReadVariable__ToString_fn(ReadVariable* __this, uString** __retval)
{
    return *__retval = uPtr(__this->Variable)->Name, void();
}

// public static new void Write(Outracks.Simulator.Bytecode.ReadVariable o, Uno.IO.BinaryWriter writer) :320
void ReadVariable__Write2_fn(ReadVariable* o, ::g::Uno::IO::BinaryWriter* writer)
{
    ReadVariable::Write2(o, writer);
}

// public new void Write(Uno.IO.BinaryWriter writer) :325
void ReadVariable__Write3_fn(ReadVariable* __this, ::g::Uno::IO::BinaryWriter* writer)
{
    __this->Write3(writer);
}

// public ReadVariable(Outracks.Simulator.Bytecode.Variable variable) [instance] :311
void ReadVariable::ctor_2(::g::Outracks::Simulator::Bytecode::Variable* variable)
{
    ctor_1();
    Variable = variable;
}

// public new void Write(Uno.IO.BinaryWriter writer) [instance] :325
void ReadVariable::Write3(::g::Uno::IO::BinaryWriter* writer)
{
    uPtr(::g::Outracks::Simulator::Bytecode::Variable::Write())->Invoke(2, (::g::Outracks::Simulator::Bytecode::Variable*)Variable, writer);
}

// public ReadVariable New(Outracks.Simulator.Bytecode.Variable variable) [static] :311
ReadVariable* ReadVariable::New1(::g::Outracks::Simulator::Bytecode::Variable* variable)
{
    ReadVariable* obj1 = (ReadVariable*)uNew(ReadVariable_typeof());
    obj1->ctor_2(variable);
    return obj1;
}

// public static new Outracks.Simulator.Bytecode.ReadVariable Read(Uno.IO.BinaryReader reader) [static] :330
ReadVariable* ReadVariable::Read2(::g::Uno::IO::BinaryReader* reader)
{
    ::g::Outracks::Simulator::Bytecode::Variable* variable = (::g::Outracks::Simulator::Bytecode::Variable*)uPtr(::g::Outracks::Simulator::Bytecode::Variable::Read())->Invoke(1, reader);
    return ReadVariable::New1(variable);
}

// public static new void Write(Outracks.Simulator.Bytecode.ReadVariable o, Uno.IO.BinaryWriter writer) [static] :320
void ReadVariable::Write2(ReadVariable* o, ::g::Uno::IO::BinaryWriter* writer)
{
    uPtr(o)->Write3(writer);
}
// }

// C:\ProgramData\Uno\Packages\Outracks.Simulator.Protocol.Uno\0.1.0\Bytecode\$.uno(656)
// -------------------------------------------------------------------------------------

// public sealed class RemoveEventHandler :656
// {
uType* RemoveEventHandler_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 3;
    options.ObjectSize = sizeof(RemoveEventHandler);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Outracks.Simulator.Bytecode.RemoveEventHandler", options);
    type->SetBase(::g::Outracks::Simulator::Bytecode::Expression_typeof());
    type->fp_ToString = (void(*)(uObject*, uString**))RemoveEventHandler__ToString_fn;
    ::STRINGS[0] = uString::Const(".");
    ::STRINGS[23] = uString::Const(" -= ");
    ::TYPES[0] = ::g::Uno::Func1_typeof()->MakeType(::g::Uno::IO::BinaryReader_typeof(), ::g::Outracks::Simulator::Bytecode::Expression_typeof());
    ::TYPES[1] = ::g::Outracks::Simulator::Bytecode::Expression_typeof();
    ::TYPES[2] = uObject_typeof();
    ::TYPES[3] = ::g::Outracks::Simulator::Bytecode::TypeMemberName_typeof();
    ::TYPES[4] = ::g::Uno::Action2_typeof()->MakeType(::g::Outracks::Simulator::Bytecode::Expression_typeof(), ::g::Uno::IO::BinaryWriter_typeof());
    type->SetFields(0,
        ::g::Outracks::Simulator::Bytecode::TypeMemberName_typeof(), offsetof(::g::Outracks::Simulator::Bytecode::RemoveEventHandler, Event), 0,
        ::g::Outracks::Simulator::Bytecode::Expression_typeof(), offsetof(::g::Outracks::Simulator::Bytecode::RemoveEventHandler, Handler), 0,
        ::g::Outracks::Simulator::Bytecode::Expression_typeof(), offsetof(::g::Outracks::Simulator::Bytecode::RemoveEventHandler, Object), 0);
    type->Reflection.SetFields(3,
        new uField("Event", 0),
        new uField("Handler", 1),
        new uField("Object", 2));
    type->Reflection.SetFunctions(4,
        new uFunction(".ctor", NULL, (void*)RemoveEventHandler__New1_fn, 0, true, RemoveEventHandler_typeof(), 3, ::g::Outracks::Simulator::Bytecode::Expression_typeof(), ::g::Outracks::Simulator::Bytecode::TypeMemberName_typeof(), ::g::Outracks::Simulator::Bytecode::Expression_typeof()),
        new uFunction("Read", NULL, (void*)RemoveEventHandler__Read2_fn, 0, true, RemoveEventHandler_typeof(), 1, ::g::Uno::IO::BinaryReader_typeof()),
        new uFunction("Write", NULL, (void*)RemoveEventHandler__Write2_fn, 0, true, uVoid_typeof(), 2, RemoveEventHandler_typeof(), ::g::Uno::IO::BinaryWriter_typeof()),
        new uFunction("Write", NULL, (void*)RemoveEventHandler__Write3_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::IO::BinaryWriter_typeof()));
    return type;
}

// public RemoveEventHandler(Outracks.Simulator.Bytecode.Expression o, Outracks.Simulator.Bytecode.TypeMemberName ev, Outracks.Simulator.Bytecode.Expression handler) :662
void RemoveEventHandler__ctor_2_fn(RemoveEventHandler* __this, ::g::Outracks::Simulator::Bytecode::Expression* o, ::g::Outracks::Simulator::Bytecode::TypeMemberName* ev, ::g::Outracks::Simulator::Bytecode::Expression* handler)
{
    __this->ctor_2(o, ev, handler);
}

// public RemoveEventHandler New(Outracks.Simulator.Bytecode.Expression o, Outracks.Simulator.Bytecode.TypeMemberName ev, Outracks.Simulator.Bytecode.Expression handler) :662
void RemoveEventHandler__New1_fn(::g::Outracks::Simulator::Bytecode::Expression* o, ::g::Outracks::Simulator::Bytecode::TypeMemberName* ev, ::g::Outracks::Simulator::Bytecode::Expression* handler, RemoveEventHandler** __retval)
{
    *__retval = RemoveEventHandler::New1(o, ev, handler);
}

// public static new Outracks.Simulator.Bytecode.RemoveEventHandler Read(Uno.IO.BinaryReader reader) :686
void RemoveEventHandler__Read2_fn(::g::Uno::IO::BinaryReader* reader, RemoveEventHandler** __retval)
{
    *__retval = RemoveEventHandler::Read2(reader);
}

// public override sealed string ToString() :669
void RemoveEventHandler__ToString_fn(RemoveEventHandler* __this, uString** __retval)
{
    return *__retval = ::g::Uno::String::op_Addition1(::g::Uno::String::op_Addition2(::g::Uno::String::op_Addition2(::g::Uno::String::op_Addition(__this->Object, ::STRINGS[0/*"."*/]), uPtr(__this->Event)->Name), ::STRINGS[23/*" -= "*/]), __this->Handler), void();
}

// public static new void Write(Outracks.Simulator.Bytecode.RemoveEventHandler o, Uno.IO.BinaryWriter writer) :674
void RemoveEventHandler__Write2_fn(RemoveEventHandler* o, ::g::Uno::IO::BinaryWriter* writer)
{
    RemoveEventHandler::Write2(o, writer);
}

// public new void Write(Uno.IO.BinaryWriter writer) :679
void RemoveEventHandler__Write3_fn(RemoveEventHandler* __this, ::g::Uno::IO::BinaryWriter* writer)
{
    __this->Write3(writer);
}

// public RemoveEventHandler(Outracks.Simulator.Bytecode.Expression o, Outracks.Simulator.Bytecode.TypeMemberName ev, Outracks.Simulator.Bytecode.Expression handler) [instance] :662
void RemoveEventHandler::ctor_2(::g::Outracks::Simulator::Bytecode::Expression* o, ::g::Outracks::Simulator::Bytecode::TypeMemberName* ev, ::g::Outracks::Simulator::Bytecode::Expression* handler)
{
    ctor_1();
    Object = o;
    Event = ev;
    Handler = handler;
}

// public new void Write(Uno.IO.BinaryWriter writer) [instance] :679
void RemoveEventHandler::Write3(::g::Uno::IO::BinaryWriter* writer)
{
    uPtr(::g::Outracks::Simulator::Bytecode::Expression::Write1())->Invoke(2, (::g::Outracks::Simulator::Bytecode::Expression*)Object, writer);
    ::g::Outracks::Simulator::Bytecode::TypeMemberName::Write(Event, writer);
    uPtr(::g::Outracks::Simulator::Bytecode::Expression::Write1())->Invoke(2, (::g::Outracks::Simulator::Bytecode::Expression*)Handler, writer);
}

// public RemoveEventHandler New(Outracks.Simulator.Bytecode.Expression o, Outracks.Simulator.Bytecode.TypeMemberName ev, Outracks.Simulator.Bytecode.Expression handler) [static] :662
RemoveEventHandler* RemoveEventHandler::New1(::g::Outracks::Simulator::Bytecode::Expression* o, ::g::Outracks::Simulator::Bytecode::TypeMemberName* ev, ::g::Outracks::Simulator::Bytecode::Expression* handler)
{
    RemoveEventHandler* obj1 = (RemoveEventHandler*)uNew(RemoveEventHandler_typeof());
    obj1->ctor_2(o, ev, handler);
    return obj1;
}

// public static new Outracks.Simulator.Bytecode.RemoveEventHandler Read(Uno.IO.BinaryReader reader) [static] :686
RemoveEventHandler* RemoveEventHandler::Read2(::g::Uno::IO::BinaryReader* reader)
{
    ::g::Outracks::Simulator::Bytecode::Expression* _Object = (::g::Outracks::Simulator::Bytecode::Expression*)uPtr(::g::Outracks::Simulator::Bytecode::Expression::Read1())->Invoke(1, reader);
    ::g::Outracks::Simulator::Bytecode::TypeMemberName* _Event = ::g::Outracks::Simulator::Bytecode::TypeMemberName::Read(reader);
    ::g::Outracks::Simulator::Bytecode::Expression* _Handler = (::g::Outracks::Simulator::Bytecode::Expression*)uPtr(::g::Outracks::Simulator::Bytecode::Expression::Read1())->Invoke(1, reader);
    return RemoveEventHandler::New1(_Object, _Event, _Handler);
}

// public static new void Write(Outracks.Simulator.Bytecode.RemoveEventHandler o, Uno.IO.BinaryWriter writer) [static] :674
void RemoveEventHandler::Write2(RemoveEventHandler* o, ::g::Uno::IO::BinaryWriter* writer)
{
    uPtr(o)->Write3(writer);
}
// }

// C:\ProgramData\Uno\Packages\Outracks.Simulator.Protocol.Uno\0.1.0\Bytecode\$.uno(1789)
// --------------------------------------------------------------------------------------

// public sealed class Return :1789
// {
uType* Return_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 1;
    options.ObjectSize = sizeof(Return);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Outracks.Simulator.Bytecode.Return", options);
    type->SetBase(::g::Outracks::Simulator::Bytecode::Statement_typeof());
    type->fp_ToString = (void(*)(uObject*, uString**))Return__ToString_fn;
    ::STRINGS[24] = uString::Const("return ");
    ::TYPES[0] = ::g::Uno::Func1_typeof()->MakeType(::g::Uno::IO::BinaryReader_typeof(), ::g::Outracks::Simulator::Bytecode::Expression_typeof());
    ::TYPES[1] = ::g::Outracks::Simulator::Bytecode::Expression_typeof();
    ::TYPES[2] = uObject_typeof();
    ::TYPES[4] = ::g::Uno::Action2_typeof()->MakeType(::g::Outracks::Simulator::Bytecode::Expression_typeof(), ::g::Uno::IO::BinaryWriter_typeof());
    type->SetFields(0,
        ::g::Outracks::Simulator::Bytecode::Expression_typeof(), offsetof(::g::Outracks::Simulator::Bytecode::Return, Value), 0);
    type->Reflection.SetFields(1,
        new uField("Value", 0));
    type->Reflection.SetFunctions(4,
        new uFunction(".ctor", NULL, (void*)Return__New1_fn, 0, true, Return_typeof(), 1, ::g::Outracks::Simulator::Bytecode::Expression_typeof()),
        new uFunction("Read", NULL, (void*)Return__Read1_fn, 0, true, Return_typeof(), 1, ::g::Uno::IO::BinaryReader_typeof()),
        new uFunction("Write", NULL, (void*)Return__Write1_fn, 0, true, uVoid_typeof(), 2, Return_typeof(), ::g::Uno::IO::BinaryWriter_typeof()),
        new uFunction("Write", NULL, (void*)Return__Write2_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::IO::BinaryWriter_typeof()));
    return type;
}

// public Return(Outracks.Simulator.Bytecode.Expression value) :1792
void Return__ctor_1_fn(Return* __this, ::g::Outracks::Simulator::Bytecode::Expression* value)
{
    __this->ctor_1(value);
}

// public Return New(Outracks.Simulator.Bytecode.Expression value) :1792
void Return__New1_fn(::g::Outracks::Simulator::Bytecode::Expression* value, Return** __retval)
{
    *__retval = Return::New1(value);
}

// public static new Outracks.Simulator.Bytecode.Return Read(Uno.IO.BinaryReader reader) :1812
void Return__Read1_fn(::g::Uno::IO::BinaryReader* reader, Return** __retval)
{
    *__retval = Return::Read1(reader);
}

// public override sealed string ToString() :1797
void Return__ToString_fn(Return* __this, uString** __retval)
{
    return *__retval = ::g::Uno::String::op_Addition1(::STRINGS[24/*"return "*/], __this->Value), void();
}

// public static new void Write(Outracks.Simulator.Bytecode.Return s, Uno.IO.BinaryWriter writer) :1802
void Return__Write1_fn(Return* s, ::g::Uno::IO::BinaryWriter* writer)
{
    Return::Write1(s, writer);
}

// public new void Write(Uno.IO.BinaryWriter writer) :1807
void Return__Write2_fn(Return* __this, ::g::Uno::IO::BinaryWriter* writer)
{
    __this->Write2(writer);
}

// public Return(Outracks.Simulator.Bytecode.Expression value) [instance] :1792
void Return::ctor_1(::g::Outracks::Simulator::Bytecode::Expression* value)
{
    ctor_();
    Value = value;
}

// public new void Write(Uno.IO.BinaryWriter writer) [instance] :1807
void Return::Write2(::g::Uno::IO::BinaryWriter* writer)
{
    uPtr(::g::Outracks::Simulator::Bytecode::Expression::Write1())->Invoke(2, (::g::Outracks::Simulator::Bytecode::Expression*)Value, writer);
}

// public Return New(Outracks.Simulator.Bytecode.Expression value) [static] :1792
Return* Return::New1(::g::Outracks::Simulator::Bytecode::Expression* value)
{
    Return* obj1 = (Return*)uNew(Return_typeof());
    obj1->ctor_1(value);
    return obj1;
}

// public static new Outracks.Simulator.Bytecode.Return Read(Uno.IO.BinaryReader reader) [static] :1812
Return* Return::Read1(::g::Uno::IO::BinaryReader* reader)
{
    return Return::New1((::g::Outracks::Simulator::Bytecode::Expression*)uPtr(::g::Outracks::Simulator::Bytecode::Expression::Read1())->Invoke(1, reader));
}

// public static new void Write(Outracks.Simulator.Bytecode.Return s, Uno.IO.BinaryWriter writer) [static] :1802
void Return::Write1(Return* s, ::g::Uno::IO::BinaryWriter* writer)
{
    uPtr(s)->Write2(writer);
}
// }

// C:\ProgramData\Uno\Packages\Outracks.Simulator.Protocol.Uno\0.1.0\Bytecode\$.uno(1627)
// --------------------------------------------------------------------------------------

// public sealed class Signature :1627
// {
uType* Signature_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 2;
    options.ObjectSize = sizeof(Signature);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Outracks.Simulator.Bytecode.Signature", options);
    type->fp_ToString = (void(*)(uObject*, uString**))Signature__ToString_fn;
    ::STRINGS[25] = uString::Const("object");
    ::STRINGS[6] = uString::Const("(");
    ::STRINGS[7] = uString::Const(", ");
    ::STRINGS[8] = uString::Const(")");
    ::TYPES[153] = ::g::Outracks::Simulator::Bytecode::Parameter_typeof()->Array();
    ::TYPES[154] = ::g::Outracks::Simulator::Bytecode::Variable_typeof()->Array();
    ::TYPES[155] = ::g::Outracks::Simulator::ImmutableList_typeof()->MakeType(::g::Outracks::Simulator::Bytecode::Parameter_typeof());
    ::TYPES[156] = ::g::Outracks::Simulator::Bytecode::Optional1_typeof()->MakeType(::g::Outracks::Simulator::Bytecode::TypeName_typeof());
    ::TYPES[157] = ::g::Outracks::Simulator::Bytecode::Optional_typeof()->MakeMethod(1, ::g::Outracks::Simulator::Bytecode::TypeName_typeof());
    ::TYPES[158] = ::g::Outracks::Simulator::List_typeof()->MakeMethod(1, ::g::Outracks::Simulator::Bytecode::Parameter_typeof());
    ::TYPES[159] = ::g::Outracks::Simulator::Bytecode::Parameter_typeof();
    ::TYPES[160] = ::g::Outracks::Simulator::Bytecode::Optional_typeof()->MakeMethod(1, ::g::Outracks::Simulator::Bytecode::TypeName_typeof());
    ::TYPES[96] = ::g::Outracks::Simulator::Bytecode::TypeName_typeof();
    ::TYPES[161] = ::g::Uno::String_typeof()->Array();
    ::TYPES[162] = ::g::Uno::Collections::IEnumerable_typeof()->MakeType(::g::Uno::String_typeof());
    ::TYPES[163] = ::g::Uno::Runtime::Implementation::Internal::ArrayEnumerable_typeof()->MakeType(::g::Uno::String_typeof());
    ::TYPES[164] = ::g::Outracks::Simulator::List_typeof()->MakeMethod(1, ::g::Outracks::Simulator::Bytecode::Parameter_typeof());
    ::TYPES[165] = ::g::Outracks::Simulator::Bytecode::Optional_typeof()->MakeMethod(1, ::g::Outracks::Simulator::Bytecode::TypeName_typeof());
    type->SetFields(0,
        ::g::Outracks::Simulator::ImmutableList_typeof()->MakeType(::g::Outracks::Simulator::Bytecode::Parameter_typeof()), offsetof(::g::Outracks::Simulator::Bytecode::Signature, Parameters), 0,
        ::g::Outracks::Simulator::Bytecode::Optional1_typeof()->MakeType(::g::Outracks::Simulator::Bytecode::TypeName_typeof()), (uintptr_t)0, uFieldFlagsConstrained);
    type->Reflection.SetFields(2,
        new uField("Parameters", 0),
        new uField("ReturnType", 1));
    type->Reflection.SetFunctions(5,
        new uFunction("Action", NULL, (void*)Signature__Action_fn, 0, true, Signature_typeof(), 1, ::g::Outracks::Simulator::Bytecode::Variable_typeof()->Array()),
        new uFunction("Func", NULL, (void*)Signature__Func_fn, 0, true, Signature_typeof(), 2, ::g::Outracks::Simulator::Bytecode::TypeName_typeof(), ::g::Outracks::Simulator::Bytecode::Variable_typeof()->Array()),
        new uFunction(".ctor", NULL, (void*)Signature__New1_fn, 0, true, Signature_typeof(), 2, ::g::Outracks::Simulator::ImmutableList_typeof()->MakeType(::g::Outracks::Simulator::Bytecode::Parameter_typeof()), ::g::Outracks::Simulator::Bytecode::Optional1_typeof()->MakeType(::g::Outracks::Simulator::Bytecode::TypeName_typeof())),
        new uFunction("Read", NULL, (void*)Signature__Read_fn, 0, true, Signature_typeof(), 1, ::g::Uno::IO::BinaryReader_typeof()),
        new uFunction("Write", NULL, (void*)Signature__Write_fn, 0, true, uVoid_typeof(), 2, Signature_typeof(), ::g::Uno::IO::BinaryWriter_typeof()));
    return type;
}

// public Signature(Outracks.Simulator.ImmutableList<Outracks.Simulator.Bytecode.Parameter> parameters, Outracks.Simulator.Bytecode.Optional<Outracks.Simulator.Bytecode.TypeName> returnType) :1648
void Signature__ctor__fn(Signature* __this, ::g::Outracks::Simulator::ImmutableList* parameters, ::g::Outracks::Simulator::Bytecode::Optional1<uStrong< ::g::Outracks::Simulator::Bytecode::TypeName*> >* returnType)
{
    __this->ctor_(parameters, *returnType);
}

// public static Outracks.Simulator.Bytecode.Signature Action(Outracks.Simulator.Bytecode.Variable[] variables) :1629
void Signature__Action_fn(uArray* variables, Signature** __retval)
{
    *__retval = Signature::Action(variables);
}

// public static Outracks.Simulator.Bytecode.Signature Func(Outracks.Simulator.Bytecode.TypeName returnType, Outracks.Simulator.Bytecode.Variable[] variables) :1637
void Signature__Func_fn(::g::Outracks::Simulator::Bytecode::TypeName* returnType, uArray* variables, Signature** __retval)
{
    *__retval = Signature::Func(returnType, variables);
}

// public Signature New(Outracks.Simulator.ImmutableList<Outracks.Simulator.Bytecode.Parameter> parameters, Outracks.Simulator.Bytecode.Optional<Outracks.Simulator.Bytecode.TypeName> returnType) :1648
void Signature__New1_fn(::g::Outracks::Simulator::ImmutableList* parameters, ::g::Outracks::Simulator::Bytecode::Optional1<uStrong< ::g::Outracks::Simulator::Bytecode::TypeName*> >* returnType, Signature** __retval)
{
    *__retval = Signature::New1(parameters, *returnType);
}

// public static Outracks.Simulator.Bytecode.Signature Read(Uno.IO.BinaryReader reader) :1662
void Signature__Read_fn(::g::Uno::IO::BinaryReader* reader, Signature** __retval)
{
    *__retval = Signature::Read(reader);
}

// public override sealed string ToString() :1671
void Signature__ToString_fn(Signature* __this, uString** __retval)
{
    ::g::Outracks::Simulator::Bytecode::Parameter* ret5;
    uArray* names = uArray::New(::TYPES[161/*string[]*/], uPtr(__this->Parameters)->Count());

    for (int i = 0; i < uPtr(__this->Parameters)->Count(); i++)
        names->Strong<uString*>(i) = uPtr((::g::Outracks::Simulator::ImmutableList__get_Item_fn(uPtr(__this->Parameters), uCRef<int>(i), &ret5), ret5))->ToString();

    return *__retval = ::g::Uno::String::op_Addition2(::g::Uno::String::op_Addition2(::STRINGS[6/*"("*/], ::g::Outracks::Simulator::StringSplitting::Join((uObject*)((::g::Uno::Runtime::Implementation::Internal::ArrayEnumerable*)::g::Uno::Runtime::Implementation::Internal::ArrayEnumerable::New1(::TYPES[163/*Uno.Runtime.Implementation.Internal.ArrayEnumerable<string>*/], names)), ::STRINGS[7/*", "*/])), ::STRINGS[8/*")"*/]), void();
}

// public static void Write(Outracks.Simulator.Bytecode.Signature s, Uno.IO.BinaryWriter writer) :1656
void Signature__Write_fn(Signature* s, ::g::Uno::IO::BinaryWriter* writer)
{
    Signature::Write(s, writer);
}

// public Signature(Outracks.Simulator.ImmutableList<Outracks.Simulator.Bytecode.Parameter> parameters, Outracks.Simulator.Bytecode.Optional<Outracks.Simulator.Bytecode.TypeName> returnType) [instance] :1648
void Signature::ctor_(::g::Outracks::Simulator::ImmutableList* parameters, ::g::Outracks::Simulator::Bytecode::Optional1<uStrong< ::g::Outracks::Simulator::Bytecode::TypeName*> > returnType)
{
    Parameters = parameters;
    ReturnType().Value< ::g::Outracks::Simulator::Bytecode::Optional1<uStrong< ::g::Outracks::Simulator::Bytecode::TypeName*> > >() = returnType;
}

// public static Outracks.Simulator.Bytecode.Signature Action(Outracks.Simulator.Bytecode.Variable[] variables) [static] :1629
Signature* Signature::Action(uArray* variables)
{
    ::g::Outracks::Simulator::Bytecode::Optional1<uStrong< ::g::Outracks::Simulator::Bytecode::TypeName*> > ret2;
    uArray* parameters = uArray::New(::TYPES[153/*Outracks.Simulator.Bytecode.Parameter[]*/], uPtr(variables)->Length());

    for (int i = 0; i < variables->Length(); i++)
        parameters->Strong< ::g::Outracks::Simulator::Bytecode::Parameter*>(i) = ::g::Outracks::Simulator::Bytecode::Parameter::New1(::g::Outracks::Simulator::Bytecode::TypeName::Parse(::STRINGS[25/*"object"*/]), variables->Strong< ::g::Outracks::Simulator::Bytecode::Variable*>(i));

    return Signature::New1((::g::Outracks::Simulator::ImmutableList*)::g::Outracks::Simulator::ImmutableList::New1(::TYPES[155/*Outracks.Simulator.ImmutableList<Outracks.Simulator.Bytecode.Parameter>*/], parameters), (::g::Outracks::Simulator::Bytecode::Optional1__op_Implicit_fn(::TYPES[156/*Outracks.Simulator.Bytecode.Optional<Outracks.Simulator.Bytecode.TypeName>*/], ::g::Outracks::Simulator::Bytecode::Optional::None(), &ret2), ret2));
}

// public static Outracks.Simulator.Bytecode.Signature Func(Outracks.Simulator.Bytecode.TypeName returnType, Outracks.Simulator.Bytecode.Variable[] variables) [static] :1637
Signature* Signature::Func(::g::Outracks::Simulator::Bytecode::TypeName* returnType, uArray* variables)
{
    ::g::Outracks::Simulator::Bytecode::Optional1<uStrong< ::g::Outracks::Simulator::Bytecode::TypeName*> > ret3;
    uArray* parameters = uArray::New(::TYPES[153/*Outracks.Simulator.Bytecode.Parameter[]*/], uPtr(variables)->Length());

    for (int i = 0; i < variables->Length(); i++)
        parameters->Strong< ::g::Outracks::Simulator::Bytecode::Parameter*>(i) = ::g::Outracks::Simulator::Bytecode::Parameter::New1(::g::Outracks::Simulator::Bytecode::TypeName::Parse(::STRINGS[25/*"object"*/]), variables->Strong< ::g::Outracks::Simulator::Bytecode::Variable*>(i));

    return Signature::New1((::g::Outracks::Simulator::ImmutableList*)::g::Outracks::Simulator::ImmutableList::New1(::TYPES[155/*Outracks.Simulator.ImmutableList<Outracks.Simulator.Bytecode.Parameter>*/], parameters), (::g::Outracks::Simulator::Bytecode::Optional__Some_fn(::TYPES[157/*Outracks.Simulator.Bytecode.Optional.Some<Outracks.Simulator.Bytecode.TypeName>*/], returnType, &ret3), ret3));
}

// public Signature New(Outracks.Simulator.ImmutableList<Outracks.Simulator.Bytecode.Parameter> parameters, Outracks.Simulator.Bytecode.Optional<Outracks.Simulator.Bytecode.TypeName> returnType) [static] :1648
Signature* Signature::New1(::g::Outracks::Simulator::ImmutableList* parameters, ::g::Outracks::Simulator::Bytecode::Optional1<uStrong< ::g::Outracks::Simulator::Bytecode::TypeName*> > returnType)
{
    Signature* obj1 = (Signature*)uNew(Signature_typeof());
    obj1->ctor_(parameters, returnType);
    return obj1;
}

// public static Outracks.Simulator.Bytecode.Signature Read(Uno.IO.BinaryReader reader) [static] :1662
Signature* Signature::Read(::g::Uno::IO::BinaryReader* reader)
{
    ::g::Outracks::Simulator::Bytecode::Optional1<uStrong< ::g::Outracks::Simulator::Bytecode::TypeName*> > ret4;
    ::g::Outracks::Simulator::ImmutableList* parameters = (::g::Outracks::Simulator::ImmutableList*)::g::Outracks::Simulator::List::Read(::TYPES[158/*Outracks.Simulator.List.Read<Outracks.Simulator.Bytecode.Parameter>*/], reader, ::g::Outracks::Simulator::Bytecode::Parameter::Read());
    ::g::Outracks::Simulator::Bytecode::Optional1<uStrong< ::g::Outracks::Simulator::Bytecode::TypeName*> > returnType = (::g::Outracks::Simulator::Bytecode::Optional__Read1_fn(::TYPES[160/*Outracks.Simulator.Bytecode.Optional.Read<Outracks.Simulator.Bytecode.TypeName>*/], reader, ::g::Outracks::Simulator::Bytecode::TypeName::Read(), &ret4), ret4);
    return Signature::New1(parameters, returnType);
}

// public static void Write(Outracks.Simulator.Bytecode.Signature s, Uno.IO.BinaryWriter writer) [static] :1656
void Signature::Write(Signature* s, ::g::Uno::IO::BinaryWriter* writer)
{
    ::g::Outracks::Simulator::List::Write1(::TYPES[164/*Outracks.Simulator.List.Write<Outracks.Simulator.Bytecode.Parameter>*/], writer, uPtr(s)->Parameters, ::g::Outracks::Simulator::Bytecode::Parameter::Write());
    ::g::Outracks::Simulator::Bytecode::Optional__Write_fn(::TYPES[165/*Outracks.Simulator.Bytecode.Optional.Write<Outracks.Simulator.Bytecode.TypeName>*/], writer, uCRef(s->ReturnType().Value< ::g::Outracks::Simulator::Bytecode::Optional1<uStrong< ::g::Outracks::Simulator::Bytecode::TypeName*> > >()), ::g::Outracks::Simulator::Bytecode::TypeName::Write());
}
// }

// C:\ProgramData\Uno\Packages\Outracks.Simulator.Protocol.Uno\0.1.0\Bytecode\$.uno(917)
// -------------------------------------------------------------------------------------

// public abstract class Statement :917
// {
// static Statement() :917
static void Statement__cctor__fn(uType* __type)
{
    Statement::Write_ = uDelegate::New(::TYPES[166/*Uno.Action<Outracks.Simulator.Bytecode.Statement, Uno.IO.BinaryWriter>*/], (void*)Statement___Write_fn);
    Statement::Read_ = uDelegate::New(::TYPES[167/*Uno.Func<Uno.IO.BinaryReader, Outracks.Simulator.Bytecode.Statement>*/], (void*)Statement___Read_fn);
}

uType* Statement_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 2;
    options.MethodTypeCount = 1;
    options.ObjectSize = sizeof(Statement);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Outracks.Simulator.Bytecode.Statement", options);
    type->fp_cctor_ = Statement__cctor__fn;
    ::STRINGS[26] = uString::Const("NOP");
    ::TYPES[166] = ::g::Uno::Action2_typeof()->MakeType(Statement_typeof(), ::g::Uno::IO::BinaryWriter_typeof());
    ::TYPES[167] = ::g::Uno::Func1_typeof()->MakeType(::g::Uno::IO::BinaryReader_typeof(), Statement_typeof());
    ::TYPES[0] = ::g::Uno::Func1_typeof()->MakeType(::g::Uno::IO::BinaryReader_typeof(), ::g::Outracks::Simulator::Bytecode::Expression_typeof());
    ::TYPES[1] = ::g::Outracks::Simulator::Bytecode::Expression_typeof();
    ::TYPES[168] = Statement_typeof()->MakeMethod(1, ::g::Uno::Char_typeof());
    ::TYPES[169] = ::g::Outracks::Simulator::Closure_typeof()->MakeMethod(2, ::g::Outracks::Simulator::Bytecode::NoOperation_typeof(), ::g::Uno::Char_typeof());
    ::TYPES[170] = ::g::Outracks::Simulator::Closure_typeof()->MakeMethod(2, ::g::Outracks::Simulator::Bytecode::Expression_typeof(), ::g::Uno::Char_typeof());
    ::TYPES[171] = ::g::Outracks::Simulator::Closure_typeof()->MakeMethod(2, ::g::Outracks::Simulator::Bytecode::Return_typeof(), ::g::Uno::Char_typeof());
    ::TYPES[172] = ::g::Outracks::Simulator::Closure_typeof()->MakeMethod(2, ::g::Outracks::Simulator::Bytecode::NoOperation_typeof(), ::g::Uno::IO::BinaryWriter_typeof());
    ::TYPES[173] = ::g::Uno::Action2_typeof()->MakeType(::g::Outracks::Simulator::Bytecode::NoOperation_typeof(), ::g::Uno::IO::BinaryWriter_typeof());
    ::TYPES[174] = ::g::Outracks::Simulator::Closure_typeof()->MakeMethod(2, ::g::Outracks::Simulator::Bytecode::Expression_typeof(), ::g::Uno::IO::BinaryWriter_typeof());
    ::TYPES[175] = ::g::Outracks::Simulator::Closure_typeof()->MakeMethod(2, ::g::Outracks::Simulator::Bytecode::Return_typeof(), ::g::Uno::IO::BinaryWriter_typeof());
    ::TYPES[176] = ::g::Uno::Action2_typeof()->MakeType(::g::Outracks::Simulator::Bytecode::Return_typeof(), ::g::Uno::IO::BinaryWriter_typeof());
    ::TYPES[177] = ::g::Outracks::Simulator::Bytecode::NoOperation_typeof();
    ::TYPES[178] = ::g::Uno::Action1_typeof()->MakeType(::g::Outracks::Simulator::Bytecode::NoOperation_typeof());
    ::TYPES[179] = ::g::Uno::Action1_typeof()->MakeType(::g::Outracks::Simulator::Bytecode::Expression_typeof());
    ::TYPES[180] = ::g::Outracks::Simulator::Bytecode::Return_typeof();
    ::TYPES[181] = ::g::Uno::Action1_typeof()->MakeType(::g::Outracks::Simulator::Bytecode::Return_typeof());
    ::TYPES[94] = ::g::Uno::Func1_typeof();
    ::TYPES[182] = ::g::Outracks::Simulator::Bytecode::Optional1_typeof()->MakeType(::g::Uno::String_typeof());
    ::TYPES[183] = ::g::Uno::Collections::IEnumerable_typeof()->MakeType(Statement_typeof());
    ::TYPES[184] = ::g::Uno::Runtime::Implementation::Internal::ArrayEnumerable_typeof()->MakeType(Statement_typeof());
    ::TYPES[185] = Statement_typeof()->Array();
    ::TYPES[186] = ::g::Uno::Collections::EnumerableExtensions_typeof()->MakeMethod(1, Statement_typeof());
    type->SetFields(0,
        ::g::Uno::Func1_typeof()->MakeType(::g::Uno::IO::BinaryReader_typeof(), Statement_typeof()), (uintptr_t)&::g::Outracks::Simulator::Bytecode::Statement::Read_, uFieldFlagsStatic,
        ::g::Uno::Action2_typeof()->MakeType(Statement_typeof(), ::g::Uno::IO::BinaryWriter_typeof()), (uintptr_t)&::g::Outracks::Simulator::Bytecode::Statement::Write_, uFieldFlagsStatic);
    type->Reflection.SetFields(2,
        new uField("Read", 0),
        new uField("Write", 1));
    type->Reflection.SetFunctions(5,
        new uFunction("_Read", NULL, (void*)Statement___Read_fn, 0, true, Statement_typeof(), 1, ::g::Uno::IO::BinaryReader_typeof()),
        new uFunction("_Write", NULL, (void*)Statement___Write_fn, 0, true, uVoid_typeof(), 2, Statement_typeof(), ::g::Uno::IO::BinaryWriter_typeof()),
        new uFunction("Match", NULL, (void*)Statement__Match_fn, 0, false, uVoid_typeof(), 3, ::g::Uno::Action1_typeof()->MakeType(::g::Outracks::Simulator::Bytecode::NoOperation_typeof()), ::g::Uno::Action1_typeof()->MakeType(::g::Outracks::Simulator::Bytecode::Expression_typeof()), ::g::Uno::Action1_typeof()->MakeType(::g::Outracks::Simulator::Bytecode::Return_typeof())),
        new uFunction("Match`1", type, (void*)Statement__Match1_fn, 0, false, type->U(0), 3, ::g::Uno::Func1_typeof()->MakeType(::g::Outracks::Simulator::Bytecode::NoOperation_typeof(), type->U(0)), ::g::Uno::Func1_typeof()->MakeType(::g::Outracks::Simulator::Bytecode::Expression_typeof(), type->U(0)), ::g::Uno::Func1_typeof()->MakeType(::g::Outracks::Simulator::Bytecode::Return_typeof(), type->U(0))),
        new uFunction("Nop", NULL, (void*)Statement__Nop_fn, 0, true, Statement_typeof(), 0));
    return type;
}

// protected generated Statement() :917
void Statement__ctor__fn(Statement* __this)
{
    __this->ctor_();
}

// public static Outracks.Simulator.Bytecode.Statement _Read(Uno.IO.BinaryReader reader) :966
void Statement___Read_fn(::g::Uno::IO::BinaryReader* reader, Statement** __retval)
{
    *__retval = Statement::_Read(reader);
}

// public static void _Write(Outracks.Simulator.Bytecode.Statement statement, Uno.IO.BinaryWriter writer) :950
void Statement___Write_fn(Statement* statement, ::g::Uno::IO::BinaryWriter* writer)
{
    Statement::_Write(statement, writer);
}

// public void Match(Uno.Action<Outracks.Simulator.Bytecode.NoOperation> a1, Uno.Action<Outracks.Simulator.Bytecode.Expression> a3, Uno.Action<Outracks.Simulator.Bytecode.Return> a4) :936
void Statement__Match_fn(Statement* __this, uDelegate* a1, uDelegate* a3, uDelegate* a4)
{
    __this->Match(a1, a3, a4);
}

// public T Match<T>(Uno.Func<Outracks.Simulator.Bytecode.NoOperation, T> a1, Uno.Func<Outracks.Simulator.Bytecode.Expression, T> a3, Uno.Func<Outracks.Simulator.Bytecode.Return, T> a4) :924
void Statement__Match1_fn(Statement* __this, uType* __type, uDelegate* a1, uDelegate* a3, uDelegate* a4, uTRef __retval)
{
    uType* __types[] = {
        __type->U(0),
        ::TYPES[94/*Uno.Func`2*/]->MakeType(::TYPES[177/*Outracks.Simulator.Bytecode.NoOperation*/], __type->U(0)),
        ::TYPES[94/*Uno.Func`2*/]->MakeType(::TYPES[1/*Outracks.Simulator.Bytecode.Expression*/], __type->U(0)),
        ::TYPES[94/*Uno.Func`2*/]->MakeType(::TYPES[180/*Outracks.Simulator.Bytecode.Return*/], __type->U(0)),
    };
    uT ret8(__types[0], U_ALLOCA(__types[0]->ValueSize));
    uT ret9(__types[0], U_ALLOCA(__types[0]->ValueSize));
    uT ret10(__types[0], U_ALLOCA(__types[0]->ValueSize));
    ;
    ;
    ;
    Statement* self = __this;
    ::g::Outracks::Simulator::Bytecode::NoOperation* t1 = uAs< ::g::Outracks::Simulator::Bytecode::NoOperation*>(self, ::TYPES[177/*Outracks.Simulator.Bytecode.NoOperation*/]);

    if (t1 != NULL)
        return __retval.Store((uPtr(a1)->Invoke(&ret8, 1, t1), ret8)), void();

    ::g::Outracks::Simulator::Bytecode::Expression* t3 = uAs< ::g::Outracks::Simulator::Bytecode::Expression*>(self, ::TYPES[1/*Outracks.Simulator.Bytecode.Expression*/]);

    if (t3 != NULL)
        return __retval.Store((uPtr(a3)->Invoke(&ret9, 1, t3), ret9)), void();

    ::g::Outracks::Simulator::Bytecode::Return* t4 = uAs< ::g::Outracks::Simulator::Bytecode::Return*>(self, ::TYPES[180/*Outracks.Simulator.Bytecode.Return*/]);

    if (t4 != NULL)
        return __retval.Store((uPtr(a4)->Invoke(&ret10, 1, t4), ret10)), void();

    U_THROW(::g::Outracks::Simulator::NonExhaustiveMatch::New4());
}

// public static Outracks.Simulator.Bytecode.Statement Nop() :978
void Statement__Nop_fn(Statement** __retval)
{
    *__retval = Statement::Nop();
}

// public static operator +(Outracks.Simulator.Bytecode.Statement left, Outracks.Simulator.Bytecode.Statement right) :983
void Statement__op_Addition_fn(Statement* left, Statement* right, uObject** __retval)
{
    *__retval = Statement::op_Addition(left, right);
}

// public static operator +(Outracks.Simulator.Bytecode.Statement statement, Uno.Collections.IEnumerable<Outracks.Simulator.Bytecode.Statement> statements) :988
void Statement__op_Addition1_fn(Statement* statement, uObject* statements, uObject** __retval)
{
    *__retval = Statement::op_Addition1(statement, statements);
}

// public static operator +(Uno.Collections.IEnumerable<Outracks.Simulator.Bytecode.Statement> statements, Outracks.Simulator.Bytecode.Statement statement) :993
void Statement__op_Addition2_fn(uObject* statements, Statement* statement, uObject** __retval)
{
    *__retval = Statement::op_Addition2(statements, statement);
}

uSStrong<uDelegate*> Statement::Read_;
uSStrong<uDelegate*> Statement::Write_;

// protected generated Statement() [instance] :917
void Statement::ctor_()
{
}

// public void Match(Uno.Action<Outracks.Simulator.Bytecode.NoOperation> a1, Uno.Action<Outracks.Simulator.Bytecode.Expression> a3, Uno.Action<Outracks.Simulator.Bytecode.Return> a4) [instance] :936
void Statement::Match(uDelegate* a1, uDelegate* a3, uDelegate* a4)
{
    Statement* self = this;
    ::g::Outracks::Simulator::Bytecode::NoOperation* t1 = uAs< ::g::Outracks::Simulator::Bytecode::NoOperation*>(self, ::TYPES[177/*Outracks.Simulator.Bytecode.NoOperation*/]);

    if (t1 != NULL)
    {
        uPtr(a1)->InvokeVoid(t1);
        return;
    }

    ::g::Outracks::Simulator::Bytecode::Expression* t3 = uAs< ::g::Outracks::Simulator::Bytecode::Expression*>(self, ::TYPES[1/*Outracks.Simulator.Bytecode.Expression*/]);

    if (t3 != NULL)
    {
        uPtr(a3)->InvokeVoid(t3);
        return;
    }

    ::g::Outracks::Simulator::Bytecode::Return* t4 = uAs< ::g::Outracks::Simulator::Bytecode::Return*>(self, ::TYPES[180/*Outracks.Simulator.Bytecode.Return*/]);

    if (t4 != NULL)
    {
        uPtr(a4)->InvokeVoid(t4);
        return;
    }

    U_THROW(::g::Outracks::Simulator::NonExhaustiveMatch::New4());
}

// public static Outracks.Simulator.Bytecode.Statement _Read(Uno.IO.BinaryReader reader) [static] :966
Statement* Statement::_Read(::g::Uno::IO::BinaryReader* reader)
{
    Statement_typeof()->Init();
    uChar c = uPtr(reader)->ReadChar();

    switch (c)
    {
        case 'n':
            return ::g::Outracks::Simulator::Bytecode::NoOperation::Read1(reader);
        case 'e':
            return (::g::Outracks::Simulator::Bytecode::Expression*)uPtr(::g::Outracks::Simulator::Bytecode::Expression::Read1())->Invoke(1, reader);
        case 'r':
            return ::g::Outracks::Simulator::Bytecode::Return::Read1(reader);
    }

    U_THROW(::g::Outracks::Simulator::InvalidDataException::New4());
}

// public static void _Write(Outracks.Simulator.Bytecode.Statement statement, Uno.IO.BinaryWriter writer) [static] :950
void Statement::_Write(Statement* statement, ::g::Uno::IO::BinaryWriter* writer)
{
    Statement_typeof()->Init();
    uChar ret1;
    uDelegate* ret2;
    uDelegate* ret3;
    uDelegate* ret4;
    uDelegate* ret5;
    uDelegate* ret6;
    uDelegate* ret7;
    uPtr(writer)->Write5((Statement__Match1_fn(uPtr(statement), ::TYPES[168/*Outracks.Simulator.Bytecode.Statement.Match<char>*/], (::g::Outracks::Simulator::Closure__Return_fn(::TYPES[169/*Outracks.Simulator.Closure.Return<Outracks.Simulator.Bytecode.NoOperation, char>*/], uCRef<uChar>('n'), &ret2), ret2), (::g::Outracks::Simulator::Closure__Return_fn(::TYPES[170/*Outracks.Simulator.Closure.Return<Outracks.Simulator.Bytecode.Expression, char>*/], uCRef<uChar>('e'), &ret3), ret3), (::g::Outracks::Simulator::Closure__Return_fn(::TYPES[171/*Outracks.Simulator.Closure.Return<Outracks.Simulator.Bytecode.Return, char>*/], uCRef<uChar>('r'), &ret4), ret4), &ret1), ret1));
    statement->Match((::g::Outracks::Simulator::Closure__ApplySecond_fn(::TYPES[172/*Outracks.Simulator.Closure.ApplySecond<Outracks.Simulator.Bytecode.NoOperation, Uno.IO.BinaryWriter>*/], uDelegate::New(::TYPES[173/*Uno.Action<Outracks.Simulator.Bytecode.NoOperation, Uno.IO.BinaryWriter>*/], (void*)::g::Outracks::Simulator::Bytecode::NoOperation__Write1_fn), writer, &ret5), ret5), (::g::Outracks::Simulator::Closure__ApplySecond_fn(::TYPES[174/*Outracks.Simulator.Closure.ApplySecond<Outracks.Simulator.Bytecode.Expression, Uno.IO.BinaryWriter>*/], ::g::Outracks::Simulator::Bytecode::Expression::Write1(), writer, &ret6), ret6), (::g::Outracks::Simulator::Closure__ApplySecond_fn(::TYPES[175/*Outracks.Simulator.Closure.ApplySecond<Outracks.Simulator.Bytecode.Return, Uno.IO.BinaryWriter>*/], uDelegate::New(::TYPES[176/*Uno.Action<Outracks.Simulator.Bytecode.Return, Uno.IO.BinaryWriter>*/], (void*)::g::Outracks::Simulator::Bytecode::Return__Write1_fn), writer, &ret7), ret7));
}

// public static Outracks.Simulator.Bytecode.Statement Nop() [static] :978
Statement* Statement::Nop()
{
    Statement_typeof()->Init();
    ::g::Outracks::Simulator::Bytecode::Optional1<uStrong<uString*> > ret11;
    return ::g::Outracks::Simulator::Bytecode::NoOperation::New1((::g::Outracks::Simulator::Bytecode::Optional1__op_Implicit1_fn(::TYPES[182/*Outracks.Simulator.Bytecode.Optional<string>*/], ::STRINGS[26/*"NOP"*/], &ret11), ret11));
}

// public static operator +(Outracks.Simulator.Bytecode.Statement left, Outracks.Simulator.Bytecode.Statement right) [static] :983
uObject* Statement::op_Addition(Statement* left, Statement* right)
{
    Statement_typeof()->Init();
    return (uObject*)((::g::Uno::Runtime::Implementation::Internal::ArrayEnumerable*)::g::Uno::Runtime::Implementation::Internal::ArrayEnumerable::New1(::TYPES[184/*Uno.Runtime.Implementation.Internal.ArrayEnumerable<Outracks.Simulator.Bytecode.Statement>*/], uArray::Init<Statement*>(::TYPES[185/*Outracks.Simulator.Bytecode.Statement[]*/], 2, left, right)));
}

// public static operator +(Outracks.Simulator.Bytecode.Statement statement, Uno.Collections.IEnumerable<Outracks.Simulator.Bytecode.Statement> statements) [static] :988
uObject* Statement::op_Addition1(Statement* statement, uObject* statements)
{
    Statement_typeof()->Init();
    return (uObject*)::g::Uno::Collections::EnumerableExtensions::Union(::TYPES[186/*Uno.Collections.EnumerableExtensions.Union<Outracks.Simulator.Bytecode.Statement>*/], (uObject*)((::g::Uno::Runtime::Implementation::Internal::ArrayEnumerable*)::g::Uno::Runtime::Implementation::Internal::ArrayEnumerable::New1(::TYPES[184/*Uno.Runtime.Implementation.Internal.ArrayEnumerable<Outracks.Simulator.Bytecode.Statement>*/], uArray::Init<Statement*>(::TYPES[185/*Outracks.Simulator.Bytecode.Statement[]*/], 1, statement))), statements);
}

// public static operator +(Uno.Collections.IEnumerable<Outracks.Simulator.Bytecode.Statement> statements, Outracks.Simulator.Bytecode.Statement statement) [static] :993
uObject* Statement::op_Addition2(uObject* statements, Statement* statement)
{
    Statement_typeof()->Init();
    return (uObject*)::g::Uno::Collections::EnumerableExtensions::Union(::TYPES[186/*Uno.Collections.EnumerableExtensions.Union<Outracks.Simulator.Bytecode.Statement>*/], statements, (uObject*)((::g::Uno::Runtime::Implementation::Internal::ArrayEnumerable*)::g::Uno::Runtime::Implementation::Internal::ArrayEnumerable::New1(::TYPES[184/*Uno.Runtime.Implementation.Internal.ArrayEnumerable<Outracks.Simulator.Bytecode.Statement>*/], uArray::Init<Statement*>(::TYPES[185/*Outracks.Simulator.Bytecode.Statement[]*/], 1, statement))));
}
// }

// C:\ProgramData\Uno\Packages\Outracks.Simulator.Protocol.Uno\0.1.0\Bytecode\$.uno(1005)
// --------------------------------------------------------------------------------------

// public sealed class StaticMemberName :1005
// {
StaticMemberName_type* StaticMemberName_typeof()
{
    static uSStrong<StaticMemberName_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 2;
    options.InterfaceCount = 1;
    options.ObjectSize = sizeof(StaticMemberName);
    options.TypeSize = sizeof(StaticMemberName_type);
    type = (StaticMemberName_type*)uClassType::New("Outracks.Simulator.Bytecode.StaticMemberName", options);
    type->fp_Equals = (void(*)(uObject*, uObject*, bool*))StaticMemberName__Equals_fn;
    type->fp_GetHashCode = (void(*)(uObject*, int*))StaticMemberName__GetHashCode_fn;
    type->fp_ToString = (void(*)(uObject*, uString**))StaticMemberName__ToString_fn;
    ::STRINGS[0] = uString::Const(".");
    ::TYPES[2] = uObject_typeof();
    ::TYPES[11] = ::g::Uno::Bool_typeof();
    ::TYPES[95] = ::g::Uno::Func1_typeof()->MakeType(::g::Uno::IO::BinaryReader_typeof(), ::g::Outracks::Simulator::Bytecode::TypeName_typeof());
    ::TYPES[96] = ::g::Outracks::Simulator::Bytecode::TypeName_typeof();
    ::TYPES[3] = ::g::Outracks::Simulator::Bytecode::TypeMemberName_typeof();
    ::TYPES[97] = ::g::Uno::Action2_typeof()->MakeType(::g::Outracks::Simulator::Bytecode::TypeName_typeof(), ::g::Uno::IO::BinaryWriter_typeof());
    type->SetInterfaces(
        ::g::Outracks::Simulator::IEquatable_typeof()->MakeType(StaticMemberName_typeof()), offsetof(StaticMemberName_type, interface0));
    type->SetFields(0,
        ::g::Outracks::Simulator::Bytecode::TypeMemberName_typeof(), offsetof(::g::Outracks::Simulator::Bytecode::StaticMemberName, MemberName), 0,
        ::g::Outracks::Simulator::Bytecode::TypeName_typeof(), offsetof(::g::Outracks::Simulator::Bytecode::StaticMemberName, TypeName), 0);
    type->Reflection.SetFields(2,
        new uField("MemberName", 0),
        new uField("TypeName", 1));
    type->Reflection.SetFunctions(5,
        new uFunction("Equals", NULL, (void*)StaticMemberName__Equals2_fn, 0, false, ::g::Uno::Bool_typeof(), 1, StaticMemberName_typeof()),
        new uFunction(".ctor", NULL, (void*)StaticMemberName__New1_fn, 0, true, StaticMemberName_typeof(), 2, ::g::Outracks::Simulator::Bytecode::TypeName_typeof(), ::g::Outracks::Simulator::Bytecode::TypeMemberName_typeof()),
        new uFunction("Parse", NULL, (void*)StaticMemberName__Parse_fn, 0, true, StaticMemberName_typeof(), 1, ::g::Uno::String_typeof()),
        new uFunction("Read", NULL, (void*)StaticMemberName__Read_fn, 0, true, StaticMemberName_typeof(), 1, ::g::Uno::IO::BinaryReader_typeof()),
        new uFunction("Write", NULL, (void*)StaticMemberName__Write_fn, 0, true, uVoid_typeof(), 2, StaticMemberName_typeof(), ::g::Uno::IO::BinaryWriter_typeof()));
    return type;
}

// public StaticMemberName(Outracks.Simulator.Bytecode.TypeName typeName, Outracks.Simulator.Bytecode.TypeMemberName memberName) :1017
void StaticMemberName__ctor__fn(StaticMemberName* __this, ::g::Outracks::Simulator::Bytecode::TypeName* typeName, ::g::Outracks::Simulator::Bytecode::TypeMemberName* memberName)
{
    __this->ctor_(typeName, memberName);
}

// public override sealed bool Equals(object obj) :1030
void StaticMemberName__Equals_fn(StaticMemberName* __this, uObject* obj, bool* __retval)
{
    if (::g::Uno::Object::ReferenceEquals(NULL, obj))
        return *__retval = false, void();

    if (::g::Uno::Object::ReferenceEquals(__this, obj))
        return *__retval = true, void();

    return *__retval = uIs(obj, StaticMemberName_typeof()) && __this->Equals2(uCast<StaticMemberName*>(obj, StaticMemberName_typeof())), void();
}

// public bool Equals(Outracks.Simulator.Bytecode.StaticMemberName other) :1023
void StaticMemberName__Equals2_fn(StaticMemberName* __this, StaticMemberName* other, bool* __retval)
{
    *__retval = __this->Equals2(other);
}

// public override sealed int GetHashCode() :1037
void StaticMemberName__GetHashCode_fn(StaticMemberName* __this, int* __retval)
{
    return *__retval = (uPtr(__this->TypeName)->GetHashCode() * 397) ^ ((__this->MemberName != NULL) ? uPtr(__this->MemberName)->GetHashCode() : 0), void();
}

// public StaticMemberName New(Outracks.Simulator.Bytecode.TypeName typeName, Outracks.Simulator.Bytecode.TypeMemberName memberName) :1017
void StaticMemberName__New1_fn(::g::Outracks::Simulator::Bytecode::TypeName* typeName, ::g::Outracks::Simulator::Bytecode::TypeMemberName* memberName, StaticMemberName** __retval)
{
    *__retval = StaticMemberName::New1(typeName, memberName);
}

// public static operator ==(Outracks.Simulator.Bytecode.StaticMemberName left, Outracks.Simulator.Bytecode.StaticMemberName right) :1045
void StaticMemberName__op_Equality_fn(StaticMemberName* left, StaticMemberName* right, bool* __retval)
{
    *__retval = StaticMemberName::op_Equality(left, right);
}

// public static operator !=(Outracks.Simulator.Bytecode.StaticMemberName left, Outracks.Simulator.Bytecode.StaticMemberName right) :1050
void StaticMemberName__op_Inequality_fn(StaticMemberName* left, StaticMemberName* right, bool* __retval)
{
    *__retval = StaticMemberName::op_Inequality(left, right);
}

// public static Outracks.Simulator.Bytecode.StaticMemberName Parse(string value) :1007
void StaticMemberName__Parse_fn(uString* value, StaticMemberName** __retval)
{
    *__retval = StaticMemberName::Parse(value);
}

// public static Outracks.Simulator.Bytecode.StaticMemberName Read(Uno.IO.BinaryReader reader) :1066
void StaticMemberName__Read_fn(::g::Uno::IO::BinaryReader* reader, StaticMemberName** __retval)
{
    *__retval = StaticMemberName::Read(reader);
}

// public override sealed string ToString() :1055
void StaticMemberName__ToString_fn(StaticMemberName* __this, uString** __retval)
{
    return *__retval = ::g::Uno::String::op_Addition2(::g::Uno::String::op_Addition2(uPtr(__this->TypeName)->FullName(), ::STRINGS[0/*"."*/]), uPtr(__this->MemberName)->Name), void();
}

// public static void Write(Outracks.Simulator.Bytecode.StaticMemberName m, Uno.IO.BinaryWriter writer) :1060
void StaticMemberName__Write_fn(StaticMemberName* m, ::g::Uno::IO::BinaryWriter* writer)
{
    StaticMemberName::Write(m, writer);
}

// public StaticMemberName(Outracks.Simulator.Bytecode.TypeName typeName, Outracks.Simulator.Bytecode.TypeMemberName memberName) [instance] :1017
void StaticMemberName::ctor_(::g::Outracks::Simulator::Bytecode::TypeName* typeName, ::g::Outracks::Simulator::Bytecode::TypeMemberName* memberName)
{
    TypeName = typeName;
    MemberName = memberName;
}

// public bool Equals(Outracks.Simulator.Bytecode.StaticMemberName other) [instance] :1023
bool StaticMemberName::Equals2(StaticMemberName* other)
{
    if (::g::Uno::Object::ReferenceEquals(NULL, other))
        return false;

    if (::g::Uno::Object::ReferenceEquals(this, other))
        return true;

    return uPtr(TypeName)->Equals2(uPtr(other)->TypeName) && ::g::Uno::Object::Equals1(MemberName, uPtr(other)->MemberName);
}

// public StaticMemberName New(Outracks.Simulator.Bytecode.TypeName typeName, Outracks.Simulator.Bytecode.TypeMemberName memberName) [static] :1017
StaticMemberName* StaticMemberName::New1(::g::Outracks::Simulator::Bytecode::TypeName* typeName, ::g::Outracks::Simulator::Bytecode::TypeMemberName* memberName)
{
    StaticMemberName* obj1 = (StaticMemberName*)uNew(StaticMemberName_typeof());
    obj1->ctor_(typeName, memberName);
    return obj1;
}

// public static operator ==(Outracks.Simulator.Bytecode.StaticMemberName left, Outracks.Simulator.Bytecode.StaticMemberName right) [static] :1045
bool StaticMemberName::op_Equality(StaticMemberName* left, StaticMemberName* right)
{
    return ::g::Uno::Object::Equals1(left, right);
}

// public static operator !=(Outracks.Simulator.Bytecode.StaticMemberName left, Outracks.Simulator.Bytecode.StaticMemberName right) [static] :1050
bool StaticMemberName::op_Inequality(StaticMemberName* left, StaticMemberName* right)
{
    return !::g::Uno::Object::Equals1(left, right);
}

// public static Outracks.Simulator.Bytecode.StaticMemberName Parse(string value) [static] :1007
StaticMemberName* StaticMemberName::Parse(uString* value)
{
    return StaticMemberName::New1(::g::Outracks::Simulator::Bytecode::TypeName::Parse(::g::Outracks::Simulator::StringSplitting::BeforeLast(value, ::STRINGS[0/*"."*/])), ::g::Outracks::Simulator::Bytecode::TypeMemberName::New1(::g::Outracks::Simulator::StringSplitting::AfterLast(value, ::STRINGS[0/*"."*/])));
}

// public static Outracks.Simulator.Bytecode.StaticMemberName Read(Uno.IO.BinaryReader reader) [static] :1066
StaticMemberName* StaticMemberName::Read(::g::Uno::IO::BinaryReader* reader)
{
    ::g::Outracks::Simulator::Bytecode::TypeName* typeName = (::g::Outracks::Simulator::Bytecode::TypeName*)uPtr(::g::Outracks::Simulator::Bytecode::TypeName::Read())->Invoke(1, reader);
    ::g::Outracks::Simulator::Bytecode::TypeMemberName* memberName = ::g::Outracks::Simulator::Bytecode::TypeMemberName::Read(reader);
    return StaticMemberName::New1(typeName, memberName);
}

// public static void Write(Outracks.Simulator.Bytecode.StaticMemberName m, Uno.IO.BinaryWriter writer) [static] :1060
void StaticMemberName::Write(StaticMemberName* m, ::g::Uno::IO::BinaryWriter* writer)
{
    uPtr(::g::Outracks::Simulator::Bytecode::TypeName::Write())->Invoke(2, (::g::Outracks::Simulator::Bytecode::TypeName*)uPtr(m)->TypeName, writer);
    ::g::Outracks::Simulator::Bytecode::TypeMemberName::Write(m->MemberName, writer);
}
// }

// C:\ProgramData\Uno\Packages\Outracks.Simulator.Protocol.Uno\0.1.0\Bytecode\$.uno(1401)
// --------------------------------------------------------------------------------------

// public sealed class StringLiteral :1401
// {
uType* StringLiteral_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 1;
    options.ObjectSize = sizeof(StringLiteral);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Outracks.Simulator.Bytecode.StringLiteral", options);
    type->SetBase(::g::Outracks::Simulator::Bytecode::Literal_typeof());
    type->fp_ToString = (void(*)(uObject*, uString**))StringLiteral__ToString_fn;
    ::STRINGS[27] = uString::Const("\"");
    ::TYPES[136] = ::g::Outracks::Simulator::Bytecode::Optional_typeof()->MakeMethod(1, ::g::Uno::String_typeof());
    ::TYPES[187] = ::g::Uno::Func1_typeof()->MakeType(::g::Uno::IO::BinaryReader_typeof(), ::g::Uno::String_typeof());
    ::TYPES[182] = ::g::Outracks::Simulator::Bytecode::Optional1_typeof()->MakeType(::g::Uno::String_typeof());
    ::TYPES[188] = ::g::Outracks::Simulator::Bytecode::Optional_typeof()->MakeMethod(1, ::g::Uno::String_typeof());
    ::TYPES[189] = ::g::Outracks::Simulator::Bytecode::OptionalExtensions_typeof()->MakeMethod(1, ::g::Uno::String_typeof());
    ::TYPES[190] = ::g::Uno::Action2_typeof()->MakeType(::g::Uno::String_typeof(), ::g::Uno::IO::BinaryWriter_typeof());
    type->SetFields(0,
        ::g::Uno::String_typeof(), offsetof(::g::Outracks::Simulator::Bytecode::StringLiteral, StringValue), 0);
    type->Reflection.SetFields(1,
        new uField("StringValue", 0));
    type->Reflection.SetFunctions(3,
        new uFunction(".ctor", NULL, (void*)StringLiteral__New1_fn, 0, true, StringLiteral_typeof(), 1, ::g::Uno::String_typeof()),
        new uFunction("Read", NULL, (void*)StringLiteral__Read3_fn, 0, true, StringLiteral_typeof(), 1, ::g::Uno::IO::BinaryReader_typeof()),
        new uFunction("Write", NULL, (void*)StringLiteral__Write3_fn, 0, true, uVoid_typeof(), 2, StringLiteral_typeof(), ::g::Uno::IO::BinaryWriter_typeof()));
    return type;
}

// public StringLiteral(string stringValue) :1405
void StringLiteral__ctor_3_fn(StringLiteral* __this, uString* stringValue)
{
    __this->ctor_3(stringValue);
}

// public StringLiteral New(string stringValue) :1405
void StringLiteral__New1_fn(uString* stringValue, StringLiteral** __retval)
{
    *__retval = StringLiteral::New1(stringValue);
}

// public static new Outracks.Simulator.Bytecode.StringLiteral Read(Uno.IO.BinaryReader reader) :1425
void StringLiteral__Read3_fn(::g::Uno::IO::BinaryReader* reader, StringLiteral** __retval)
{
    *__retval = StringLiteral::Read3(reader);
}

// private static string ReadString(Uno.IO.BinaryReader reader) :1434
void StringLiteral__ReadString_fn(::g::Uno::IO::BinaryReader* reader, uString** __retval)
{
    *__retval = StringLiteral::ReadString(reader);
}

// public override sealed string ToString() :1410
void StringLiteral__ToString_fn(StringLiteral* __this, uString** __retval)
{
    return *__retval = ::g::Uno::String::op_Addition2(::g::Uno::String::op_Addition2(::STRINGS[27/*"\""*/], __this->StringValue), ::STRINGS[27/*"\""*/]), void();
}

// public static void Write(Outracks.Simulator.Bytecode.StringLiteral l, Uno.IO.BinaryWriter writer) :1415
void StringLiteral__Write3_fn(StringLiteral* l, ::g::Uno::IO::BinaryWriter* writer)
{
    StringLiteral::Write3(l, writer);
}

// private static void WriteString(string str, Uno.IO.BinaryWriter writer) :1420
void StringLiteral__WriteString_fn(uString* str, ::g::Uno::IO::BinaryWriter* writer)
{
    StringLiteral::WriteString(str, writer);
}

// public StringLiteral(string stringValue) [instance] :1405
void StringLiteral::ctor_3(uString* stringValue)
{
    ctor_2();
    StringValue = stringValue;
}

// public StringLiteral New(string stringValue) [static] :1405
StringLiteral* StringLiteral::New1(uString* stringValue)
{
    StringLiteral* obj1 = (StringLiteral*)uNew(StringLiteral_typeof());
    obj1->ctor_3(stringValue);
    return obj1;
}

// public static new Outracks.Simulator.Bytecode.StringLiteral Read(Uno.IO.BinaryReader reader) [static] :1425
StringLiteral* StringLiteral::Read3(::g::Uno::IO::BinaryReader* reader)
{
    ::g::Outracks::Simulator::Bytecode::Optional1<uStrong<uString*> > ret2;
    ::g::Outracks::Simulator::Bytecode::Optional1<uStrong<uString*> > maybeString = (::g::Outracks::Simulator::Bytecode::Optional__Read1_fn(::TYPES[136/*Outracks.Simulator.Bytecode.Optional.Read<string>*/], reader, uDelegate::New(::TYPES[187/*Uno.Func<Uno.IO.BinaryReader, string>*/], (void*)StringLiteral__ReadString_fn), &ret2), ret2);
    return StringLiteral::New1(maybeString.HasValue(::TYPES[182/*Outracks.Simulator.Bytecode.Optional<string>*/]) ? (uString*)maybeString.Value(::TYPES[182/*Outracks.Simulator.Bytecode.Optional<string>*/]) : NULL);
}

// private static string ReadString(Uno.IO.BinaryReader reader) [static] :1434
uString* StringLiteral::ReadString(::g::Uno::IO::BinaryReader* reader)
{
    return uPtr(reader)->ReadString();
}

// public static void Write(Outracks.Simulator.Bytecode.StringLiteral l, Uno.IO.BinaryWriter writer) [static] :1415
void StringLiteral::Write3(StringLiteral* l, ::g::Uno::IO::BinaryWriter* writer)
{
    ::g::Outracks::Simulator::Bytecode::Optional__Write_fn(::TYPES[188/*Outracks.Simulator.Bytecode.Optional.Write<string>*/], writer, uCRef(::g::Outracks::Simulator::Bytecode::OptionalExtensions::ToOptional(::TYPES[189/*Outracks.Simulator.Bytecode.OptionalExtensions.ToOptional<string>*/], uPtr(l)->StringValue)), uDelegate::New(::TYPES[190/*Uno.Action<string, Uno.IO.BinaryWriter>*/], (void*)StringLiteral__WriteString_fn));
}

// private static void WriteString(string str, Uno.IO.BinaryWriter writer) [static] :1420
void StringLiteral::WriteString(uString* str, ::g::Uno::IO::BinaryWriter* writer)
{
    uPtr(writer)->Write24(str);
}
// }

// C:\ProgramData\Uno\Packages\Outracks.Simulator.Protocol.Uno\0.1.0\Bytecode\$.uno(1083)
// --------------------------------------------------------------------------------------

// public sealed class TypeMemberName :1083
// {
TypeMemberName_type* TypeMemberName_typeof()
{
    static uSStrong<TypeMemberName_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 1;
    options.InterfaceCount = 1;
    options.ObjectSize = sizeof(TypeMemberName);
    options.TypeSize = sizeof(TypeMemberName_type);
    type = (TypeMemberName_type*)uClassType::New("Outracks.Simulator.Bytecode.TypeMemberName", options);
    type->fp_Equals = (void(*)(uObject*, uObject*, bool*))TypeMemberName__Equals_fn;
    type->fp_GetHashCode = (void(*)(uObject*, int*))TypeMemberName__GetHashCode_fn;
    type->fp_ToString = (void(*)(uObject*, uString**))TypeMemberName__ToString_fn;
    type->SetInterfaces(
        ::g::Outracks::Simulator::IEquatable_typeof()->MakeType(TypeMemberName_typeof()), offsetof(TypeMemberName_type, interface0));
    type->SetFields(0,
        ::g::Uno::String_typeof(), offsetof(::g::Outracks::Simulator::Bytecode::TypeMemberName, Name), 0);
    type->Reflection.SetFields(1,
        new uField("Name", 0));
    type->Reflection.SetFunctions(5,
        new uFunction("Equals", NULL, (void*)TypeMemberName__Equals2_fn, 0, false, ::g::Uno::Bool_typeof(), 1, TypeMemberName_typeof()),
        new uFunction(".ctor", NULL, (void*)TypeMemberName__New1_fn, 0, true, TypeMemberName_typeof(), 1, ::g::Uno::String_typeof()),
        new uFunction("Read", NULL, (void*)TypeMemberName__Read_fn, 0, true, TypeMemberName_typeof(), 1, ::g::Uno::IO::BinaryReader_typeof()),
        new uFunction("Write", NULL, (void*)TypeMemberName__Write_fn, 0, true, uVoid_typeof(), 2, TypeMemberName_typeof(), ::g::Uno::IO::BinaryWriter_typeof()),
        new uFunction("Write", NULL, (void*)TypeMemberName__Write1_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::IO::BinaryWriter_typeof()));
    return type;
}

// public TypeMemberName(string name) :1087
void TypeMemberName__ctor__fn(TypeMemberName* __this, uString* name)
{
    __this->ctor_(name);
}

// public override sealed bool Equals(object obj) :1098
void TypeMemberName__Equals_fn(TypeMemberName* __this, uObject* obj, bool* __retval)
{
    TypeMemberName* other = uAs<TypeMemberName*>(obj, TypeMemberName_typeof());
    return *__retval = (other != NULL) && __this->Equals2(other), void();
}

// public bool Equals(Outracks.Simulator.Bytecode.TypeMemberName other) :1104
void TypeMemberName__Equals2_fn(TypeMemberName* __this, TypeMemberName* other, bool* __retval)
{
    *__retval = __this->Equals2(other);
}

// public override sealed int GetHashCode() :1109
void TypeMemberName__GetHashCode_fn(TypeMemberName* __this, int* __retval)
{
    return *__retval = uPtr(__this->Name)->GetHashCode(), void();
}

// public TypeMemberName New(string name) :1087
void TypeMemberName__New1_fn(uString* name, TypeMemberName** __retval)
{
    *__retval = TypeMemberName::New1(name);
}

// public static operator +(Outracks.Simulator.Bytecode.TypeName typeName, Outracks.Simulator.Bytecode.TypeMemberName memberName) :1093
void TypeMemberName__op_Addition_fn(::g::Outracks::Simulator::Bytecode::TypeName* typeName, TypeMemberName* memberName, ::g::Outracks::Simulator::Bytecode::StaticMemberName** __retval)
{
    *__retval = TypeMemberName::op_Addition(typeName, memberName);
}

// public static Outracks.Simulator.Bytecode.TypeMemberName Read(Uno.IO.BinaryReader reader) :1119
void TypeMemberName__Read_fn(::g::Uno::IO::BinaryReader* reader, TypeMemberName** __retval)
{
    *__retval = TypeMemberName::Read(reader);
}

// public override sealed string ToString() :1114
void TypeMemberName__ToString_fn(TypeMemberName* __this, uString** __retval)
{
    return *__retval = __this->Name, void();
}

// public static void Write(Outracks.Simulator.Bytecode.TypeMemberName name, Uno.IO.BinaryWriter writer) :1124
void TypeMemberName__Write_fn(TypeMemberName* name, ::g::Uno::IO::BinaryWriter* writer)
{
    TypeMemberName::Write(name, writer);
}

// public void Write(Uno.IO.BinaryWriter writer) :1129
void TypeMemberName__Write1_fn(TypeMemberName* __this, ::g::Uno::IO::BinaryWriter* writer)
{
    __this->Write1(writer);
}

// public TypeMemberName(string name) [instance] :1087
void TypeMemberName::ctor_(uString* name)
{
    if (::g::Uno::String::op_Equality(name, NULL))
        U_THROW(::g::Uno::ArgumentNullException::New6(name));

    Name = name;
}

// public bool Equals(Outracks.Simulator.Bytecode.TypeMemberName other) [instance] :1104
bool TypeMemberName::Equals2(TypeMemberName* other)
{
    return ::g::Uno::String::op_Equality(uPtr(other)->Name, Name);
}

// public void Write(Uno.IO.BinaryWriter writer) [instance] :1129
void TypeMemberName::Write1(::g::Uno::IO::BinaryWriter* writer)
{
    uPtr(writer)->Write24(Name);
}

// public TypeMemberName New(string name) [static] :1087
TypeMemberName* TypeMemberName::New1(uString* name)
{
    TypeMemberName* obj1 = (TypeMemberName*)uNew(TypeMemberName_typeof());
    obj1->ctor_(name);
    return obj1;
}

// public static operator +(Outracks.Simulator.Bytecode.TypeName typeName, Outracks.Simulator.Bytecode.TypeMemberName memberName) [static] :1093
::g::Outracks::Simulator::Bytecode::StaticMemberName* TypeMemberName::op_Addition(::g::Outracks::Simulator::Bytecode::TypeName* typeName, TypeMemberName* memberName)
{
    return ::g::Outracks::Simulator::Bytecode::StaticMemberName::New1(typeName, memberName);
}

// public static Outracks.Simulator.Bytecode.TypeMemberName Read(Uno.IO.BinaryReader reader) [static] :1119
TypeMemberName* TypeMemberName::Read(::g::Uno::IO::BinaryReader* reader)
{
    return TypeMemberName::New1(uPtr(reader)->ReadString());
}

// public static void Write(Outracks.Simulator.Bytecode.TypeMemberName name, Uno.IO.BinaryWriter writer) [static] :1124
void TypeMemberName::Write(TypeMemberName* name, ::g::Uno::IO::BinaryWriter* writer)
{
    uPtr(name)->Write1(writer);
}
// }

// C:\ProgramData\Uno\Packages\Outracks.Simulator.Protocol.Uno\0.1.0\Bytecode\$.uno(850)
// -------------------------------------------------------------------------------------

// public partial sealed class TypeName :850
// {
// static TypeName() :850
static void TypeName__cctor__fn(uType* __type)
{
    TypeName::Write_ = uDelegate::New(::TYPES[97/*Uno.Action<Outracks.Simulator.Bytecode.TypeName, Uno.IO.BinaryWriter>*/], (void*)TypeName___Write_fn);
    TypeName::Read_ = uDelegate::New(::TYPES[95/*Uno.Func<Uno.IO.BinaryReader, Outracks.Simulator.Bytecode.TypeName>*/], (void*)TypeName___Read_fn);
}

TypeName_type* TypeName_typeof()
{
    static uSStrong<TypeName_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 5;
    options.InterfaceCount = 1;
    options.ObjectSize = sizeof(TypeName);
    options.TypeSize = sizeof(TypeName_type);
    type = (TypeName_type*)uClassType::New("Outracks.Simulator.Bytecode.TypeName", options);
    type->fp_cctor_ = TypeName__cctor__fn;
    type->fp_Equals = (void(*)(uObject*, uObject*, bool*))TypeName__Equals_fn;
    type->fp_GetHashCode = (void(*)(uObject*, int*))TypeName__GetHashCode_fn;
    type->fp_ToString = (void(*)(uObject*, uString**))TypeName__ToString_fn;
    ::STRINGS[28] = uString::Const("<");
    ::STRINGS[0] = uString::Const(".");
    ::STRINGS[29] = uString::Const("");
    ::STRINGS[30] = uString::Const("`");
    ::STRINGS[31] = uString::Const(",");
    ::STRINGS[32] = uString::Const(">");
    ::TYPES[97] = ::g::Uno::Action2_typeof()->MakeType(TypeName_typeof(), ::g::Uno::IO::BinaryWriter_typeof());
    ::TYPES[95] = ::g::Uno::Func1_typeof()->MakeType(::g::Uno::IO::BinaryReader_typeof(), TypeName_typeof());
    ::TYPES[191] = ::g::Outracks::Simulator::Bytecode::Optional_typeof()->MakeMethod(1, ::g::Outracks::Simulator::Bytecode::NamespaceName_typeof());
    ::TYPES[192] = ::g::Outracks::Simulator::Bytecode::NamespaceName_typeof();
    ::TYPES[193] = ::g::Outracks::Simulator::List_typeof()->MakeMethod(1, TypeName_typeof());
    ::TYPES[194] = ::g::Outracks::Simulator::Bytecode::Optional_typeof()->MakeMethod(1, ::g::Outracks::Simulator::Bytecode::NamespaceName_typeof());
    ::TYPES[195] = ::g::Outracks::Simulator::List_typeof()->MakeMethod(1, TypeName_typeof());
    ::TYPES[11] = ::g::Uno::Bool_typeof();
    ::TYPES[196] = ::g::Outracks::Simulator::List_typeof()->MakeMethod(1, TypeName_typeof());
    ::TYPES[197] = ::g::Uno::Collections::IEnumerable_typeof()->MakeType(TypeName_typeof());
    ::TYPES[198] = ::g::Uno::Runtime::Implementation::Internal::ArrayEnumerable_typeof()->MakeType(TypeName_typeof());
    ::TYPES[199] = ::g::Outracks::Simulator::Bytecode::Optional_typeof()->MakeMethod(1, ::g::Outracks::Simulator::Bytecode::NamespaceName_typeof());
    ::TYPES[200] = ::g::Outracks::Simulator::Bytecode::Optional1_typeof()->MakeType(::g::Outracks::Simulator::Bytecode::NamespaceName_typeof());
    ::TYPES[201] = ::g::Uno::String_typeof();
    ::TYPES[202] = ::g::Outracks::Simulator::ImmutableList_typeof()->MakeType(TypeName_typeof());
    ::TYPES[203] = ::g::Uno::Collections::List_typeof()->MakeType(TypeName_typeof());
    ::TYPES[2] = uObject_typeof();
    ::TYPES[204] = ::g::Outracks::Simulator::StringSplitting_typeof()->MakeMethod(1, TypeName_typeof());
    type->SetInterfaces(
        ::g::Outracks::Simulator::IEquatable_typeof()->MakeType(TypeName_typeof()), offsetof(TypeName_type, interface0));
    type->SetFields(0,
        ::g::Outracks::Simulator::ImmutableList_typeof()->MakeType(TypeName_typeof()), offsetof(::g::Outracks::Simulator::Bytecode::TypeName, GenericArguments), 0,
        ::g::Outracks::Simulator::Bytecode::Optional1_typeof()->MakeType(::g::Outracks::Simulator::Bytecode::NamespaceName_typeof()), (uintptr_t)0, uFieldFlagsConstrained,
        ::g::Uno::String_typeof(), offsetof(::g::Outracks::Simulator::Bytecode::TypeName, Surname), 0,
        ::g::Uno::Func1_typeof()->MakeType(::g::Uno::IO::BinaryReader_typeof(), TypeName_typeof()), (uintptr_t)&::g::Outracks::Simulator::Bytecode::TypeName::Read_, uFieldFlagsStatic,
        ::g::Uno::Action2_typeof()->MakeType(TypeName_typeof(), ::g::Uno::IO::BinaryWriter_typeof()), (uintptr_t)&::g::Outracks::Simulator::Bytecode::TypeName::Write_, uFieldFlagsStatic);
    type->Reflection.SetFields(5,
        new uField("GenericArguments", 0),
        new uField("Namespace", 1),
        new uField("Read", 3),
        new uField("Surname", 2),
        new uField("Write", 4));
    type->Reflection.SetFunctions(12,
        new uFunction("_Read", NULL, (void*)TypeName___Read_fn, 0, true, TypeName_typeof(), 1, ::g::Uno::IO::BinaryReader_typeof()),
        new uFunction("_Write", NULL, (void*)TypeName___Write_fn, 0, true, uVoid_typeof(), 2, TypeName_typeof(), ::g::Uno::IO::BinaryWriter_typeof()),
        new uFunction("_Write", NULL, (void*)TypeName___Write1_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::IO::BinaryWriter_typeof()),
        new uFunction("Equals", NULL, (void*)TypeName__Equals2_fn, 0, false, ::g::Uno::Bool_typeof(), 1, TypeName_typeof()),
        new uFunction("get_FullBaseName", NULL, (void*)TypeName__get_FullBaseName_fn, 0, false, ::g::Uno::String_typeof(), 0),
        new uFunction("get_FullName", NULL, (void*)TypeName__get_FullName_fn, 0, false, ::g::Uno::String_typeof(), 0),
        new uFunction("get_IsParameterizedGenericType", NULL, (void*)TypeName__get_IsParameterizedGenericType_fn, 0, false, ::g::Uno::Bool_typeof(), 0),
        new uFunction(".ctor", NULL, (void*)TypeName__New1_fn, 0, true, TypeName_typeof(), 3, ::g::Outracks::Simulator::Bytecode::Optional1_typeof()->MakeType(::g::Outracks::Simulator::Bytecode::NamespaceName_typeof()), ::g::Uno::String_typeof(), ::g::Outracks::Simulator::ImmutableList_typeof()->MakeType(TypeName_typeof())),
        new uFunction("Parameterize", NULL, (void*)TypeName__Parameterize_fn, 0, false, TypeName_typeof(), 1, TypeName_typeof()->Array()),
        new uFunction("Parse", NULL, (void*)TypeName__Parse_fn, 0, true, TypeName_typeof(), 1, ::g::Uno::String_typeof()),
        new uFunction("get_WithGenericSuffix", NULL, (void*)TypeName__get_WithGenericSuffix_fn, 0, false, TypeName_typeof(), 0),
        new uFunction("get_WithoutNamespace", NULL, (void*)TypeName__get_WithoutNamespace_fn, 0, false, ::g::Uno::String_typeof(), 0));
    return type;
}

// public TypeName(Outracks.Simulator.Bytecode.Optional<Outracks.Simulator.Bytecode.NamespaceName> ns, string surname, Outracks.Simulator.ImmutableList<Outracks.Simulator.Bytecode.TypeName> genericArguments) :1149
void TypeName__ctor__fn(TypeName* __this, ::g::Outracks::Simulator::Bytecode::Optional1<uStrong< ::g::Outracks::Simulator::Bytecode::NamespaceName*> >* ns, uString* surname, ::g::Outracks::Simulator::ImmutableList* genericArguments)
{
    __this->ctor_(*ns, surname, genericArguments);
}

// public static Outracks.Simulator.Bytecode.TypeName _Read(Uno.IO.BinaryReader reader) :1242
void TypeName___Read_fn(::g::Uno::IO::BinaryReader* reader, TypeName** __retval)
{
    *__retval = TypeName::_Read(reader);
}

// public static void _Write(Outracks.Simulator.Bytecode.TypeName name, Uno.IO.BinaryWriter writer) :1228
void TypeName___Write_fn(TypeName* name, ::g::Uno::IO::BinaryWriter* writer)
{
    TypeName::_Write(name, writer);
}

// public void _Write(Uno.IO.BinaryWriter writer) :1233
void TypeName___Write1_fn(TypeName* __this, ::g::Uno::IO::BinaryWriter* writer)
{
    __this->_Write1(writer);
}

// public override sealed bool Equals(object obj) :1206
void TypeName__Equals_fn(TypeName* __this, uObject* obj, bool* __retval)
{
    return *__retval = uIs(obj, TypeName_typeof()) && __this->Equals2(uCast<TypeName*>(obj, TypeName_typeof())), void();
}

// public bool Equals(Outracks.Simulator.Bytecode.TypeName other) :1211
void TypeName__Equals2_fn(TypeName* __this, TypeName* other, bool* __retval)
{
    *__retval = __this->Equals2(other);
}

// public string get_FullBaseName() :1168
void TypeName__get_FullBaseName_fn(TypeName* __this, uString** __retval)
{
    *__retval = __this->FullBaseName();
}

// public string get_FullName() :1158
void TypeName__get_FullName_fn(TypeName* __this, uString** __retval)
{
    *__retval = __this->FullName();
}

// public override sealed int GetHashCode() :1201
void TypeName__GetHashCode_fn(TypeName* __this, int* __retval)
{
    return *__retval = uPtr(__this->FullName())->GetHashCode(), void();
}

// public bool get_IsParameterizedGenericType() :1178
void TypeName__get_IsParameterizedGenericType_fn(TypeName* __this, bool* __retval)
{
    *__retval = __this->IsParameterizedGenericType();
}

// public TypeName New(Outracks.Simulator.Bytecode.Optional<Outracks.Simulator.Bytecode.NamespaceName> ns, string surname, Outracks.Simulator.ImmutableList<Outracks.Simulator.Bytecode.TypeName> genericArguments) :1149
void TypeName__New1_fn(::g::Outracks::Simulator::Bytecode::Optional1<uStrong< ::g::Outracks::Simulator::Bytecode::NamespaceName*> >* ns, uString* surname, ::g::Outracks::Simulator::ImmutableList* genericArguments, TypeName** __retval)
{
    *__retval = TypeName::New1(*ns, surname, genericArguments);
}

// public static operator ==(Outracks.Simulator.Bytecode.TypeName a, Outracks.Simulator.Bytecode.TypeName b) :1216
void TypeName__op_Equality_fn(TypeName* a, TypeName* b, bool* __retval)
{
    *__retval = TypeName::op_Equality(a, b);
}

// public static operator !=(Outracks.Simulator.Bytecode.TypeName a, Outracks.Simulator.Bytecode.TypeName b) :1221
void TypeName__op_Inequality_fn(TypeName* a, TypeName* b, bool* __retval)
{
    *__retval = TypeName::op_Inequality(a, b);
}

// public Outracks.Simulator.Bytecode.TypeName Parameterize(Outracks.Simulator.Bytecode.TypeName[] methodArgumentTypes) :1254
void TypeName__Parameterize_fn(TypeName* __this, uArray* methodArgumentTypes, TypeName** __retval)
{
    *__retval = __this->Parameterize(methodArgumentTypes);
}

// public static Outracks.Simulator.Bytecode.TypeName Parse(string name) :852
void TypeName__Parse_fn(uString* name, TypeName** __retval)
{
    *__retval = TypeName::Parse(name);
}

// private static Uno.Collections.IEnumerable<Outracks.Simulator.Bytecode.TypeName> ParseGenericArguments(string argumentList) :881
void TypeName__ParseGenericArguments_fn(uString* argumentList, uObject** __retval)
{
    *__retval = TypeName::ParseGenericArguments(argumentList);
}

// public override sealed string ToString() :1196
void TypeName__ToString_fn(TypeName* __this, uString** __retval)
{
    return *__retval = __this->FullName(), void();
}

// public Outracks.Simulator.Bytecode.TypeName get_WithGenericSuffix() :1183
void TypeName__get_WithGenericSuffix_fn(TypeName* __this, TypeName** __retval)
{
    *__retval = __this->WithGenericSuffix();
}

// public string get_WithoutNamespace() :1188
void TypeName__get_WithoutNamespace_fn(TypeName* __this, uString** __retval)
{
    *__retval = __this->WithoutNamespace();
}

uSStrong<uDelegate*> TypeName::Read_;
uSStrong<uDelegate*> TypeName::Write_;

// public TypeName(Outracks.Simulator.Bytecode.Optional<Outracks.Simulator.Bytecode.NamespaceName> ns, string surname, Outracks.Simulator.ImmutableList<Outracks.Simulator.Bytecode.TypeName> genericArguments) [instance] :1149
void TypeName::ctor_(::g::Outracks::Simulator::Bytecode::Optional1<uStrong< ::g::Outracks::Simulator::Bytecode::NamespaceName*> > ns, uString* surname, ::g::Outracks::Simulator::ImmutableList* genericArguments)
{
    Namespace().Value< ::g::Outracks::Simulator::Bytecode::Optional1<uStrong< ::g::Outracks::Simulator::Bytecode::NamespaceName*> > >() = ns;
    Surname = surname;
    GenericArguments = genericArguments;
}

// public void _Write(Uno.IO.BinaryWriter writer) [instance] :1233
void TypeName::_Write1(::g::Uno::IO::BinaryWriter* writer)
{
    ::g::Outracks::Simulator::Bytecode::Optional__Write_fn(::TYPES[194/*Outracks.Simulator.Bytecode.Optional.Write<Outracks.Simulator.Bytecode.NamespaceName>*/], writer, uCRef(Namespace().Value< ::g::Outracks::Simulator::Bytecode::Optional1<uStrong< ::g::Outracks::Simulator::Bytecode::NamespaceName*> > >()), ::g::Outracks::Simulator::Bytecode::NamespaceName::Write());
    uPtr(writer)->Write24(Surname);
    ::g::Outracks::Simulator::List::Write1(::TYPES[195/*Outracks.Simulator.List.Write<Outracks.Simulator.Bytecode.TypeName>*/], writer, GenericArguments, TypeName::Write());
}

// public bool Equals(Outracks.Simulator.Bytecode.TypeName other) [instance] :1211
bool TypeName::Equals2(TypeName* other)
{
    return ::g::Uno::String::op_Equality(FullName(), uPtr(other)->FullName());
}

// public string get_FullBaseName() [instance] :1168
uString* TypeName::FullBaseName()
{
    ::g::Outracks::Simulator::Bytecode::Optional1<uStrong< ::g::Outracks::Simulator::Bytecode::NamespaceName*> > ind3;
    ::g::Outracks::Simulator::Bytecode::Optional1<uStrong< ::g::Outracks::Simulator::Bytecode::NamespaceName*> > ind4;
    return (ind3 = Namespace().Value< ::g::Outracks::Simulator::Bytecode::Optional1<uStrong< ::g::Outracks::Simulator::Bytecode::NamespaceName*> > >(), (&ind3))->HasValue(::TYPES[200/*Outracks.Simulator.Bytecode.Optional<Outracks.Simulator.Bytecode.NamespaceName>*/]) ? (uString*)::g::Uno::String::op_Addition2(::g::Uno::String::op_Addition((ind4 = Namespace().Value< ::g::Outracks::Simulator::Bytecode::Optional1<uStrong< ::g::Outracks::Simulator::Bytecode::NamespaceName*> > >(), (&ind4))->Value(::TYPES[200/*Outracks.Simulator.Bytecode.Optional<Outracks.Simulator.Bytecode.NamespaceName>*/]), ::STRINGS[0/*"."*/]), Surname) : (uString*)Surname;
}

// public string get_FullName() [instance] :1158
uString* TypeName::FullName()
{
    ::g::Outracks::Simulator::Bytecode::Optional1<uStrong< ::g::Outracks::Simulator::Bytecode::NamespaceName*> > ind1;
    ::g::Outracks::Simulator::Bytecode::Optional1<uStrong< ::g::Outracks::Simulator::Bytecode::NamespaceName*> > ind2;
    return (ind1 = Namespace().Value< ::g::Outracks::Simulator::Bytecode::Optional1<uStrong< ::g::Outracks::Simulator::Bytecode::NamespaceName*> > >(), (&ind1))->HasValue(::TYPES[200/*Outracks.Simulator.Bytecode.Optional<Outracks.Simulator.Bytecode.NamespaceName>*/]) ? (uString*)::g::Uno::String::op_Addition2(::g::Uno::String::op_Addition((ind2 = Namespace().Value< ::g::Outracks::Simulator::Bytecode::Optional1<uStrong< ::g::Outracks::Simulator::Bytecode::NamespaceName*> > >(), (&ind2))->Value(::TYPES[200/*Outracks.Simulator.Bytecode.Optional<Outracks.Simulator.Bytecode.NamespaceName>*/]), ::STRINGS[0/*"."*/]), WithoutNamespace()) : (uString*)WithoutNamespace();
}

// public bool get_IsParameterizedGenericType() [instance] :1178
bool TypeName::IsParameterizedGenericType()
{
    return uPtr(GenericArguments)->Count() != 0;
}

// public Outracks.Simulator.Bytecode.TypeName Parameterize(Outracks.Simulator.Bytecode.TypeName[] methodArgumentTypes) [instance] :1254
TypeName* TypeName::Parameterize(uArray* methodArgumentTypes)
{
    return TypeName::New1(Namespace().Value< ::g::Outracks::Simulator::Bytecode::Optional1<uStrong< ::g::Outracks::Simulator::Bytecode::NamespaceName*> > >(), Surname, (::g::Outracks::Simulator::ImmutableList*)::g::Outracks::Simulator::List::ToImmutableList(::TYPES[196/*Outracks.Simulator.List.ToImmutableList<Outracks.Simulator.Bytecode.TypeName>*/], (uObject*)((::g::Uno::Runtime::Implementation::Internal::ArrayEnumerable*)::g::Uno::Runtime::Implementation::Internal::ArrayEnumerable::New1(::TYPES[198/*Uno.Runtime.Implementation.Internal.ArrayEnumerable<Outracks.Simulator.Bytecode.TypeName>*/], methodArgumentTypes))));
}

// public Outracks.Simulator.Bytecode.TypeName get_WithGenericSuffix() [instance] :1183
TypeName* TypeName::WithGenericSuffix()
{
    return TypeName::New1(Namespace().Value< ::g::Outracks::Simulator::Bytecode::Optional1<uStrong< ::g::Outracks::Simulator::Bytecode::NamespaceName*> > >(), ::g::Uno::String::op_Addition2(Surname, (uPtr(GenericArguments)->Count() == 0) ? ::STRINGS[29/*""*/] : (uString*)::g::Uno::String::op_Addition1(::STRINGS[30/*"`"*/], uBox<int>(::TYPES[142/*int*/], uPtr(GenericArguments)->Count()))), (::g::Outracks::Simulator::ImmutableList*)::g::Outracks::Simulator::ImmutableList::Empty(::TYPES[202/*Outracks.Simulator.ImmutableList<Outracks.Simulator.Bytecode.TypeName>*/]));
}

// public string get_WithoutNamespace() [instance] :1188
uString* TypeName::WithoutNamespace()
{
    return IsParameterizedGenericType() ? (uString*)::g::Uno::String::op_Addition2(::g::Uno::String::op_Addition2(::g::Uno::String::op_Addition2(Surname, ::STRINGS[28/*"<"*/]), ::g::Outracks::Simulator::StringSplitting::JoinToString(::TYPES[204/*Outracks.Simulator.StringSplitting.JoinToString<Outracks.Simulator.Bytecode.TypeName>*/], (uObject*)GenericArguments, ::STRINGS[31/*","*/])), ::STRINGS[32/*">"*/]) : (uString*)Surname;
}

// public static Outracks.Simulator.Bytecode.TypeName _Read(Uno.IO.BinaryReader reader) [static] :1242
TypeName* TypeName::_Read(::g::Uno::IO::BinaryReader* reader)
{
    TypeName_typeof()->Init();
    ::g::Outracks::Simulator::Bytecode::Optional1<uStrong< ::g::Outracks::Simulator::Bytecode::NamespaceName*> > ret6;
    ::g::Outracks::Simulator::Bytecode::Optional1<uStrong< ::g::Outracks::Simulator::Bytecode::NamespaceName*> > ns = (::g::Outracks::Simulator::Bytecode::Optional__Read1_fn(::TYPES[191/*Outracks.Simulator.Bytecode.Optional.Read<Outracks.Simulator.Bytecode.NamespaceName>*/], reader, ::g::Outracks::Simulator::Bytecode::NamespaceName::Read(), &ret6), ret6);
    uString* surname = uPtr(reader)->ReadString();
    ::g::Outracks::Simulator::ImmutableList* genericArguments = (::g::Outracks::Simulator::ImmutableList*)::g::Outracks::Simulator::List::Read(::TYPES[193/*Outracks.Simulator.List.Read<Outracks.Simulator.Bytecode.TypeName>*/], reader, TypeName::Read());
    return TypeName::New1(ns, surname, genericArguments);
}

// public static void _Write(Outracks.Simulator.Bytecode.TypeName name, Uno.IO.BinaryWriter writer) [static] :1228
void TypeName::_Write(TypeName* name, ::g::Uno::IO::BinaryWriter* writer)
{
    TypeName_typeof()->Init();
    uPtr(name)->_Write1(writer);
}

// public TypeName New(Outracks.Simulator.Bytecode.Optional<Outracks.Simulator.Bytecode.NamespaceName> ns, string surname, Outracks.Simulator.ImmutableList<Outracks.Simulator.Bytecode.TypeName> genericArguments) [static] :1149
TypeName* TypeName::New1(::g::Outracks::Simulator::Bytecode::Optional1<uStrong< ::g::Outracks::Simulator::Bytecode::NamespaceName*> > ns, uString* surname, ::g::Outracks::Simulator::ImmutableList* genericArguments)
{
    TypeName* obj5 = (TypeName*)uNew(TypeName_typeof());
    obj5->ctor_(ns, surname, genericArguments);
    return obj5;
}

// public static operator ==(Outracks.Simulator.Bytecode.TypeName a, Outracks.Simulator.Bytecode.TypeName b) [static] :1216
bool TypeName::op_Equality(TypeName* a, TypeName* b)
{
    TypeName_typeof()->Init();
    return uPtr(a)->Equals2(b);
}

// public static operator !=(Outracks.Simulator.Bytecode.TypeName a, Outracks.Simulator.Bytecode.TypeName b) [static] :1221
bool TypeName::op_Inequality(TypeName* a, TypeName* b)
{
    TypeName_typeof()->Init();
    return !uPtr(a)->Equals2(b);
}

// public static Outracks.Simulator.Bytecode.TypeName Parse(string name) [static] :852
TypeName* TypeName::Parse(uString* name)
{
    TypeName_typeof()->Init();
    ::g::Outracks::Simulator::Bytecode::Optional1<uStrong< ::g::Outracks::Simulator::Bytecode::NamespaceName*> > ret7;
    ::g::Outracks::Simulator::Bytecode::Optional1<uStrong< ::g::Outracks::Simulator::Bytecode::NamespaceName*> > ret8;
    int baseNameEnd = ::g::Uno::String::IndexOf1(uPtr(name), ::STRINGS[28/*"<"*/], 0);
    bool hasGenericArguments = baseNameEnd != -1;
    uString* baseName = hasGenericArguments ? (uString*)::g::Uno::String::Substring1(name, 0, baseNameEnd) : name;
    bool hasNamespace = ::g::Uno::String::Contains(uPtr(baseName), ::STRINGS[0/*"."*/]);
    ::g::Outracks::Simulator::Bytecode::Optional1<uStrong< ::g::Outracks::Simulator::Bytecode::NamespaceName*> > ns = hasNamespace ? (::g::Outracks::Simulator::Bytecode::Optional__Some_fn(::TYPES[199/*Outracks.Simulator.Bytecode.Optional.Some<Outracks.Simulator.Bytecode.NamespaceName>*/], ::g::Outracks::Simulator::Bytecode::NamespaceName::New1(::g::Outracks::Simulator::StringSplitting::BeforeLast(baseName, ::STRINGS[0/*"."*/])), &ret7), ret7) : (::g::Outracks::Simulator::Bytecode::Optional1__op_Implicit_fn(::TYPES[200/*Outracks.Simulator.Bytecode.Optional<Outracks.Simulator.Bytecode.NamespaceName>*/], ::g::Outracks::Simulator::Bytecode::Optional::None(), &ret8), ret8);
    uString* surname = hasNamespace ? (uString*)::g::Outracks::Simulator::StringSplitting::AfterLast(baseName, ::STRINGS[0/*"."*/]) : baseName;
    ::g::Outracks::Simulator::ImmutableList* genericArguments = hasGenericArguments ? (::g::Outracks::Simulator::ImmutableList*)::g::Outracks::Simulator::List::ToImmutableList(::TYPES[196/*Outracks.Simulator.List.ToImmutableList<Outracks.Simulator.Bytecode.TypeName>*/], TypeName::ParseGenericArguments(::g::Uno::String::Substring1(name, baseNameEnd + 1, (name->Length() - (baseNameEnd + 1)) - 1))) : (::g::Outracks::Simulator::ImmutableList*)::g::Outracks::Simulator::ImmutableList::Empty(::TYPES[202/*Outracks.Simulator.ImmutableList<Outracks.Simulator.Bytecode.TypeName>*/]);
    return TypeName::New1(ns, surname, genericArguments);
}

// private static Uno.Collections.IEnumerable<Outracks.Simulator.Bytecode.TypeName> ParseGenericArguments(string argumentList) [static] :881
uObject* TypeName::ParseGenericArguments(uString* argumentList)
{
    TypeName_typeof()->Init();
    ::g::Uno::Collections::List* types = (::g::Uno::Collections::List*)::g::Uno::Collections::List::New1(::TYPES[203/*Uno.Collections.List<Outracks.Simulator.Bytecode.TypeName>*/]);
    int indent = 0;
    int nameStart = 0;

    for (int i = 0; i < uPtr(argumentList)->Length(); i++)
    {
        uChar c = uPtr(argumentList)->Item(i);

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
                    ::g::Uno::Collections::List__Add_fn(uPtr(types), TypeName::Parse(::g::Uno::String::Substring1(uPtr(argumentList), nameStart, i - nameStart)));
                    nameStart = i + 1;
                }

                break;
            }
        }
    }

    ::g::Uno::Collections::List__Add_fn(types, TypeName::Parse(::g::Uno::String::Substring1(uPtr(argumentList), nameStart, uPtr(argumentList)->Length() - nameStart)));
    return (uObject*)types;
}
// }

// C:\ProgramData\Uno\Packages\Outracks.Simulator.Protocol.Uno\0.1.0\Bytecode\$.uno(1267)
// --------------------------------------------------------------------------------------

// public sealed class Variable :1267
// {
// static Variable() :1267
static void Variable__cctor__fn(uType* __type)
{
    Variable::This_ = Variable::New1(::STRINGS[33/*"this"*/]);
    Variable::Write_ = uDelegate::New(::TYPES[9/*Uno.Action<Outracks.Simulator.Bytecode.Variable, Uno.IO.BinaryWriter>*/], (void*)Variable___Write_fn);
    Variable::Read_ = uDelegate::New(::TYPES[7/*Uno.Func<Uno.IO.BinaryReader, Outracks.Simulator.Bytecode.Variable>*/], (void*)Variable___Read_fn);
}

Variable_type* Variable_typeof()
{
    static uSStrong<Variable_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 4;
    options.InterfaceCount = 1;
    options.ObjectSize = sizeof(Variable);
    options.TypeSize = sizeof(Variable_type);
    type = (Variable_type*)uClassType::New("Outracks.Simulator.Bytecode.Variable", options);
    type->fp_cctor_ = Variable__cctor__fn;
    type->fp_Equals = (void(*)(uObject*, uObject*, bool*))Variable__Equals_fn;
    type->fp_GetHashCode = (void(*)(uObject*, int*))Variable__GetHashCode_fn;
    type->fp_ToString = (void(*)(uObject*, uString**))Variable__ToString_fn;
    ::STRINGS[33] = uString::Const("this");
    ::TYPES[9] = ::g::Uno::Action2_typeof()->MakeType(Variable_typeof(), ::g::Uno::IO::BinaryWriter_typeof());
    ::TYPES[7] = ::g::Uno::Func1_typeof()->MakeType(::g::Uno::IO::BinaryReader_typeof(), Variable_typeof());
    ::TYPES[2] = uObject_typeof();
    ::TYPES[11] = ::g::Uno::Bool_typeof();
    type->SetInterfaces(
        ::g::Outracks::Simulator::IEquatable_typeof()->MakeType(Variable_typeof()), offsetof(Variable_type, interface0));
    type->SetFields(0,
        ::g::Uno::String_typeof(), offsetof(::g::Outracks::Simulator::Bytecode::Variable, Name), 0,
        ::g::Uno::Func1_typeof()->MakeType(::g::Uno::IO::BinaryReader_typeof(), Variable_typeof()), (uintptr_t)&::g::Outracks::Simulator::Bytecode::Variable::Read_, uFieldFlagsStatic,
        Variable_typeof(), (uintptr_t)&::g::Outracks::Simulator::Bytecode::Variable::This_, uFieldFlagsStatic,
        ::g::Uno::Action2_typeof()->MakeType(Variable_typeof(), ::g::Uno::IO::BinaryWriter_typeof()), (uintptr_t)&::g::Outracks::Simulator::Bytecode::Variable::Write_, uFieldFlagsStatic);
    type->Reflection.SetFields(4,
        new uField("Name", 0),
        new uField("Read", 1),
        new uField("This", 2),
        new uField("Write", 3));
    type->Reflection.SetFunctions(6,
        new uFunction("_Read", NULL, (void*)Variable___Read_fn, 0, true, Variable_typeof(), 1, ::g::Uno::IO::BinaryReader_typeof()),
        new uFunction("_Write", NULL, (void*)Variable___Write_fn, 0, true, uVoid_typeof(), 2, Variable_typeof(), ::g::Uno::IO::BinaryWriter_typeof()),
        new uFunction("_Write", NULL, (void*)Variable___Write1_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::IO::BinaryWriter_typeof()),
        new uFunction("Equals", NULL, (void*)Variable__Equals2_fn, 0, false, ::g::Uno::Bool_typeof(), 1, Variable_typeof()),
        new uFunction("GetName", NULL, (void*)Variable__GetName_fn, 0, true, ::g::Uno::String_typeof(), 1, Variable_typeof()),
        new uFunction(".ctor", NULL, (void*)Variable__New1_fn, 0, true, Variable_typeof(), 1, ::g::Uno::String_typeof()));
    return type;
}

// public Variable(string name) :1274
void Variable__ctor__fn(Variable* __this, uString* name)
{
    __this->ctor_(name);
}

// public static Outracks.Simulator.Bytecode.Variable _Read(Uno.IO.BinaryReader reader) :1327
void Variable___Read_fn(::g::Uno::IO::BinaryReader* reader, Variable** __retval)
{
    *__retval = Variable::_Read(reader);
}

// public static void _Write(Outracks.Simulator.Bytecode.Variable v, Uno.IO.BinaryWriter writer) :1315
void Variable___Write_fn(Variable* v, ::g::Uno::IO::BinaryWriter* writer)
{
    Variable::_Write(v, writer);
}

// public void _Write(Uno.IO.BinaryWriter writer) :1320
void Variable___Write1_fn(Variable* __this, ::g::Uno::IO::BinaryWriter* writer)
{
    __this->_Write1(writer);
}

// public override sealed bool Equals(object obj) :1286
void Variable__Equals_fn(Variable* __this, uObject* obj, bool* __retval)
{
    if (::g::Uno::Object::ReferenceEquals(NULL, obj))
        return *__retval = false, void();

    if (::g::Uno::Object::ReferenceEquals(__this, obj))
        return *__retval = true, void();

    return *__retval = uIs(obj, Variable_typeof()) && __this->Equals2(uCast<Variable*>(obj, Variable_typeof())), void();
}

// public bool Equals(Outracks.Simulator.Bytecode.Variable other) :1279
void Variable__Equals2_fn(Variable* __this, Variable* other, bool* __retval)
{
    *__retval = __this->Equals2(other);
}

// public override sealed int GetHashCode() :1293
void Variable__GetHashCode_fn(Variable* __this, int* __retval)
{
    return *__retval = ::g::Uno::String::op_Inequality(__this->Name, NULL) ? uPtr(__this->Name)->GetHashCode() : 0, void();
}

// public static string GetName(Outracks.Simulator.Bytecode.Variable arg) :1333
void Variable__GetName_fn(Variable* arg, uString** __retval)
{
    *__retval = Variable::GetName(arg);
}

// public Variable New(string name) :1274
void Variable__New1_fn(uString* name, Variable** __retval)
{
    *__retval = Variable::New1(name);
}

// public static operator ==(Outracks.Simulator.Bytecode.Variable left, Outracks.Simulator.Bytecode.Variable right) :1298
void Variable__op_Equality_fn(Variable* left, Variable* right, bool* __retval)
{
    *__retval = Variable::op_Equality(left, right);
}

// public static operator !=(Outracks.Simulator.Bytecode.Variable left, Outracks.Simulator.Bytecode.Variable right) :1303
void Variable__op_Inequality_fn(Variable* left, Variable* right, bool* __retval)
{
    *__retval = Variable::op_Inequality(left, right);
}

// public override sealed string ToString() :1308
void Variable__ToString_fn(Variable* __this, uString** __retval)
{
    return *__retval = __this->Name, void();
}

uSStrong<uDelegate*> Variable::Read_;
uSStrong<Variable*> Variable::This_;
uSStrong<uDelegate*> Variable::Write_;

// public Variable(string name) [instance] :1274
void Variable::ctor_(uString* name)
{
    Name = name;
}

// public void _Write(Uno.IO.BinaryWriter writer) [instance] :1320
void Variable::_Write1(::g::Uno::IO::BinaryWriter* writer)
{
    uPtr(writer)->Write24(Name);
}

// public bool Equals(Outracks.Simulator.Bytecode.Variable other) [instance] :1279
bool Variable::Equals2(Variable* other)
{
    if (::g::Uno::Object::ReferenceEquals(NULL, other))
        return false;

    if (::g::Uno::Object::ReferenceEquals(this, other))
        return true;

    return ::g::Uno::String::Equals3(Name, uPtr(other)->Name);
}

// public static Outracks.Simulator.Bytecode.Variable _Read(Uno.IO.BinaryReader reader) [static] :1327
Variable* Variable::_Read(::g::Uno::IO::BinaryReader* reader)
{
    Variable_typeof()->Init();
    return Variable::New1(uPtr(reader)->ReadString());
}

// public static void _Write(Outracks.Simulator.Bytecode.Variable v, Uno.IO.BinaryWriter writer) [static] :1315
void Variable::_Write(Variable* v, ::g::Uno::IO::BinaryWriter* writer)
{
    Variable_typeof()->Init();
    uPtr(v)->_Write1(writer);
}

// public static string GetName(Outracks.Simulator.Bytecode.Variable arg) [static] :1333
uString* Variable::GetName(Variable* arg)
{
    Variable_typeof()->Init();
    return uPtr(arg)->Name;
}

// public Variable New(string name) [static] :1274
Variable* Variable::New1(uString* name)
{
    Variable* obj1 = (Variable*)uNew(Variable_typeof());
    obj1->ctor_(name);
    return obj1;
}

// public static operator ==(Outracks.Simulator.Bytecode.Variable left, Outracks.Simulator.Bytecode.Variable right) [static] :1298
bool Variable::op_Equality(Variable* left, Variable* right)
{
    Variable_typeof()->Init();
    return ::g::Uno::Object::Equals1(left, right);
}

// public static operator !=(Outracks.Simulator.Bytecode.Variable left, Outracks.Simulator.Bytecode.Variable right) [static] :1303
bool Variable::op_Inequality(Variable* left, Variable* right)
{
    Variable_typeof()->Init();
    return !::g::Uno::Object::Equals1(left, right);
}
// }

// C:\ProgramData\Uno\Packages\Outracks.Simulator.Protocol.Uno\0.1.0\Bytecode\$.uno(572)
// -------------------------------------------------------------------------------------

// public sealed class WriteProperty :572
// {
uType* WriteProperty_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 3;
    options.ObjectSize = sizeof(WriteProperty);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Outracks.Simulator.Bytecode.WriteProperty", options);
    type->SetBase(::g::Outracks::Simulator::Bytecode::Expression_typeof());
    type->fp_ToString = (void(*)(uObject*, uString**))WriteProperty__ToString_fn;
    ::STRINGS[0] = uString::Const(".");
    ::STRINGS[3] = uString::Const(" = ");
    ::TYPES[0] = ::g::Uno::Func1_typeof()->MakeType(::g::Uno::IO::BinaryReader_typeof(), ::g::Outracks::Simulator::Bytecode::Expression_typeof());
    ::TYPES[1] = ::g::Outracks::Simulator::Bytecode::Expression_typeof();
    ::TYPES[2] = uObject_typeof();
    ::TYPES[3] = ::g::Outracks::Simulator::Bytecode::TypeMemberName_typeof();
    ::TYPES[4] = ::g::Uno::Action2_typeof()->MakeType(::g::Outracks::Simulator::Bytecode::Expression_typeof(), ::g::Uno::IO::BinaryWriter_typeof());
    type->SetFields(0,
        ::g::Outracks::Simulator::Bytecode::Expression_typeof(), offsetof(::g::Outracks::Simulator::Bytecode::WriteProperty, Object), 0,
        ::g::Outracks::Simulator::Bytecode::TypeMemberName_typeof(), offsetof(::g::Outracks::Simulator::Bytecode::WriteProperty, Property), 0,
        ::g::Outracks::Simulator::Bytecode::Expression_typeof(), offsetof(::g::Outracks::Simulator::Bytecode::WriteProperty, Value), 0);
    type->Reflection.SetFields(3,
        new uField("Object", 0),
        new uField("Property", 1),
        new uField("Value", 2));
    type->Reflection.SetFunctions(4,
        new uFunction(".ctor", NULL, (void*)WriteProperty__New1_fn, 0, true, WriteProperty_typeof(), 3, ::g::Outracks::Simulator::Bytecode::Expression_typeof(), ::g::Outracks::Simulator::Bytecode::TypeMemberName_typeof(), ::g::Outracks::Simulator::Bytecode::Expression_typeof()),
        new uFunction("Read", NULL, (void*)WriteProperty__Read2_fn, 0, true, WriteProperty_typeof(), 1, ::g::Uno::IO::BinaryReader_typeof()),
        new uFunction("Write", NULL, (void*)WriteProperty__Write2_fn, 0, true, uVoid_typeof(), 2, WriteProperty_typeof(), ::g::Uno::IO::BinaryWriter_typeof()),
        new uFunction("Write", NULL, (void*)WriteProperty__Write3_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::IO::BinaryWriter_typeof()));
    return type;
}

// public WriteProperty(Outracks.Simulator.Bytecode.Expression o, Outracks.Simulator.Bytecode.TypeMemberName property, Outracks.Simulator.Bytecode.Expression value) :578
void WriteProperty__ctor_2_fn(WriteProperty* __this, ::g::Outracks::Simulator::Bytecode::Expression* o, ::g::Outracks::Simulator::Bytecode::TypeMemberName* property, ::g::Outracks::Simulator::Bytecode::Expression* value)
{
    __this->ctor_2(o, property, value);
}

// public WriteProperty New(Outracks.Simulator.Bytecode.Expression o, Outracks.Simulator.Bytecode.TypeMemberName property, Outracks.Simulator.Bytecode.Expression value) :578
void WriteProperty__New1_fn(::g::Outracks::Simulator::Bytecode::Expression* o, ::g::Outracks::Simulator::Bytecode::TypeMemberName* property, ::g::Outracks::Simulator::Bytecode::Expression* value, WriteProperty** __retval)
{
    *__retval = WriteProperty::New1(o, property, value);
}

// public static new Outracks.Simulator.Bytecode.WriteProperty Read(Uno.IO.BinaryReader reader) :602
void WriteProperty__Read2_fn(::g::Uno::IO::BinaryReader* reader, WriteProperty** __retval)
{
    *__retval = WriteProperty::Read2(reader);
}

// public override sealed string ToString() :585
void WriteProperty__ToString_fn(WriteProperty* __this, uString** __retval)
{
    return *__retval = ::g::Uno::String::op_Addition1(::g::Uno::String::op_Addition2(::g::Uno::String::op_Addition2(::g::Uno::String::op_Addition(__this->Object, ::STRINGS[0/*"."*/]), uPtr(__this->Property)->Name), ::STRINGS[3/*" = "*/]), __this->Value), void();
}

// public static new void Write(Outracks.Simulator.Bytecode.WriteProperty o, Uno.IO.BinaryWriter writer) :590
void WriteProperty__Write2_fn(WriteProperty* o, ::g::Uno::IO::BinaryWriter* writer)
{
    WriteProperty::Write2(o, writer);
}

// public new void Write(Uno.IO.BinaryWriter writer) :595
void WriteProperty__Write3_fn(WriteProperty* __this, ::g::Uno::IO::BinaryWriter* writer)
{
    __this->Write3(writer);
}

// public WriteProperty(Outracks.Simulator.Bytecode.Expression o, Outracks.Simulator.Bytecode.TypeMemberName property, Outracks.Simulator.Bytecode.Expression value) [instance] :578
void WriteProperty::ctor_2(::g::Outracks::Simulator::Bytecode::Expression* o, ::g::Outracks::Simulator::Bytecode::TypeMemberName* property, ::g::Outracks::Simulator::Bytecode::Expression* value)
{
    ctor_1();
    Object = o;
    Property = property;
    Value = value;
}

// public new void Write(Uno.IO.BinaryWriter writer) [instance] :595
void WriteProperty::Write3(::g::Uno::IO::BinaryWriter* writer)
{
    uPtr(::g::Outracks::Simulator::Bytecode::Expression::Write1())->Invoke(2, (::g::Outracks::Simulator::Bytecode::Expression*)Object, writer);
    ::g::Outracks::Simulator::Bytecode::TypeMemberName::Write(Property, writer);
    uPtr(::g::Outracks::Simulator::Bytecode::Expression::Write1())->Invoke(2, (::g::Outracks::Simulator::Bytecode::Expression*)Value, writer);
}

// public WriteProperty New(Outracks.Simulator.Bytecode.Expression o, Outracks.Simulator.Bytecode.TypeMemberName property, Outracks.Simulator.Bytecode.Expression value) [static] :578
WriteProperty* WriteProperty::New1(::g::Outracks::Simulator::Bytecode::Expression* o, ::g::Outracks::Simulator::Bytecode::TypeMemberName* property, ::g::Outracks::Simulator::Bytecode::Expression* value)
{
    WriteProperty* obj1 = (WriteProperty*)uNew(WriteProperty_typeof());
    obj1->ctor_2(o, property, value);
    return obj1;
}

// public static new Outracks.Simulator.Bytecode.WriteProperty Read(Uno.IO.BinaryReader reader) [static] :602
WriteProperty* WriteProperty::Read2(::g::Uno::IO::BinaryReader* reader)
{
    ::g::Outracks::Simulator::Bytecode::Expression* _Object = (::g::Outracks::Simulator::Bytecode::Expression*)uPtr(::g::Outracks::Simulator::Bytecode::Expression::Read1())->Invoke(1, reader);
    ::g::Outracks::Simulator::Bytecode::TypeMemberName* _Property = ::g::Outracks::Simulator::Bytecode::TypeMemberName::Read(reader);
    ::g::Outracks::Simulator::Bytecode::Expression* _Value = (::g::Outracks::Simulator::Bytecode::Expression*)uPtr(::g::Outracks::Simulator::Bytecode::Expression::Read1())->Invoke(1, reader);
    return WriteProperty::New1(_Object, _Property, _Value);
}

// public static new void Write(Outracks.Simulator.Bytecode.WriteProperty o, Uno.IO.BinaryWriter writer) [static] :590
void WriteProperty::Write2(WriteProperty* o, ::g::Uno::IO::BinaryWriter* writer)
{
    uPtr(o)->Write3(writer);
}
// }

}}}} // ::g::Outracks::Simulator::Bytecode
