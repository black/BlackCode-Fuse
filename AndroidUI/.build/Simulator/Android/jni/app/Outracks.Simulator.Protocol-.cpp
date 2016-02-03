#include <app/Outracks.Simulator.Bytecode.Lambda.h>
#include <app/Outracks.Simulator.Bytecode.TypeName.h>
#include <app/Outracks.Simulator.Closure.h>
#include <app/Outracks.Simulator.ImmutableList__Outracks_Simulator_Protocol_E-d530f22c.h>
#include <app/Outracks.Simulator.InvalidDataException.h>
#include <app/Outracks.Simulator.List.h>
#include <app/Outracks.Simulator.NonExhaustiveMatch.h>
#include <app/Outracks.Simulator.Protocol.DebugLog.h>
#include <app/Outracks.Simulator.Protocol.Error.h>
#include <app/Outracks.Simulator.Protocol.ExceptionInfo.h>
#include <app/Outracks.Simulator.Protocol.Execute.h>
#include <app/Outracks.Simulator.Protocol.MessageFromClient.h>
#include <app/Outracks.Simulator.Protocol.MessageToClient.h>
#include <app/Outracks.Simulator.Protocol.RegisterName.h>
#include <app/Outracks.Simulator.Protocol.Reify.h>
#include <app/Outracks.Simulator.Protocol.UnhandledException.h>
#include <app/Outracks.Simulator.State.h>
#include <app/Uno.Action__Outracks_Simulator_Bytecode_TypeName__Uno_IO_BinaryWriter.h>
#include <app/Uno.Action__Outracks_Simulator_Protocol_DebugLog.h>
#include <app/Uno.Action__Outracks_Simulator_Protocol_DebugLog__Uno_IO_BinaryWriter.h>
#include <app/Uno.Action__Outracks_Simulator_Protocol_Error.h>
#include <app/Uno.Action__Outracks_Simulator_Protocol_Error__Uno_IO_BinaryWriter.h>
#include <app/Uno.Action__Outracks_Simulator_Protocol_ExceptionInfo__Uno_IO_B-3f823033.h>
#include <app/Uno.Action__Outracks_Simulator_Protocol_Execute.h>
#include <app/Uno.Action__Outracks_Simulator_Protocol_Execute__Uno_IO_BinaryWriter.h>
#include <app/Uno.Action__Outracks_Simulator_Protocol_RegisterName.h>
#include <app/Uno.Action__Outracks_Simulator_Protocol_RegisterName__Uno_IO_Bi-6e2cfa14.h>
#include <app/Uno.Action__Outracks_Simulator_Protocol_Reify.h>
#include <app/Uno.Action__Outracks_Simulator_Protocol_Reify__Uno_IO_BinaryWriter.h>
#include <app/Uno.Action__Outracks_Simulator_Protocol_UnhandledException.h>
#include <app/Uno.Action__Outracks_Simulator_Protocol_UnhandledException__Uno-e96bd926.h>
#include <app/Uno.Bool.h>
#include <app/Uno.Char.h>
#include <app/Uno.Exception.h>
#include <app/Uno.Func__Outracks_Simulator_Protocol_DebugLog__char.h>
#include <app/Uno.Func__Outracks_Simulator_Protocol_Error__char.h>
#include <app/Uno.Func__Outracks_Simulator_Protocol_Error__Outracks_Simulator_State.h>
#include <app/Uno.Func__Outracks_Simulator_Protocol_Execute__char.h>
#include <app/Uno.Func__Outracks_Simulator_Protocol_Execute__Outracks_Simulator_State.h>
#include <app/Uno.Func__Outracks_Simulator_Protocol_RegisterName__char.h>
#include <app/Uno.Func__Outracks_Simulator_Protocol_Reify__char.h>
#include <app/Uno.Func__Outracks_Simulator_Protocol_Reify__Outracks_Simulator_State.h>
#include <app/Uno.Func__Outracks_Simulator_Protocol_UnhandledException__char.h>
#include <app/Uno.Func__Uno_IO_BinaryReader__Outracks_Simulator_Bytecode_TypeName.h>
#include <app/Uno.Func__Uno_IO_BinaryReader__Outracks_Simulator_Protocol_ExceptionInfo.h>
#include <app/Uno.IO.BinaryReader.h>
#include <app/Uno.IO.BinaryWriter.h>
#include <app/Uno.String.h>
#include <app/Uno.Type.h>

namespace app {
namespace Outracks {
namespace Simulator {
namespace Protocol {

// This file was generated based on 'C:\ProgramData\Uno\Packages\Outracks.Simulator.Protocol.Uno\0.1.0\Messages\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

DebugLog__uType* DebugLog__typeof()
{
    static ::uStaticStrong<DebugLog__uType*> type;
    if (type != NULL) return type;

    type = (DebugLog__uType*)::uAllocClassType(sizeof(DebugLog__uType), "Outracks.Simulator.Protocol.DebugLog", false, 0, 3, 0);

    type->SetBaseType(::app::Outracks::Simulator::Protocol::MessageFromClient__typeof());

    type->SetStrongRefs(
        "ClientId", offsetof(DebugLog, ClientId),
        "ClientName", offsetof(DebugLog, ClientName),
        "Message", offsetof(DebugLog, Message));

    type->SetFields(3,
        ::uNewField("ClientId", NULL, offsetof(DebugLog, ClientId), ::app::Uno::String__typeof()),
        ::uNewField("ClientName", NULL, offsetof(DebugLog, ClientName), ::app::Uno::String__typeof()),
        ::uNewField("Message", NULL, offsetof(DebugLog, Message), ::app::Uno::String__typeof()));

    type->SetFunctions(3,
        ::uNewFunction(".ctor", DebugLog__New_1, 0, true, DebugLog__typeof(), ::app::Uno::String__typeof(), ::app::Uno::String__typeof(), ::app::Uno::String__typeof()),
        ::uNewFunction("Read", DebugLog__Read_1, 0, true, DebugLog__typeof(), ::app::Uno::IO::BinaryReader__typeof()),
        ::uNewFunctionVoid("Write", DebugLog__Write_1, 0, true, DebugLog__typeof(), ::app::Uno::IO::BinaryWriter__typeof()));

    ::uRegisterType(type);
    return type;
}

void DebugLog___ObjInit_1(DebugLog* __this, ::uString* clientId, ::uString* clientName, ::uString* message)
{
    ::app::Outracks::Simulator::Protocol::MessageFromClient___ObjInit(__this);
    __this->ClientId = clientId;
    __this->ClientName = clientName;
    __this->Message = message;
}

DebugLog* DebugLog__New_1(::uStatic* __this, ::uString* clientId, ::uString* clientName, ::uString* message)
{
    DebugLog* inst = (DebugLog*)::uAllocObject(sizeof(DebugLog), DebugLog__typeof());
    inst->_ObjInit_1(clientId, clientName, message);
    return inst;
}

DebugLog* DebugLog__Read_1(::uStatic* __this, ::app::Uno::IO::BinaryReader* reader)
{
    ::uString* clientId = ::uPtr< ::app::Uno::IO::BinaryReader*>(reader)->ReadString();
    ::uString* clientName = reader->ReadString();
    ::uString* message = reader->ReadString();
    return DebugLog__New_1(NULL, clientId, clientName, message);
}

void DebugLog__Write_1(::uStatic* __this, DebugLog* message, ::app::Uno::IO::BinaryWriter* writer)
{
    ::uPtr< ::app::Uno::IO::BinaryWriter*>(writer)->Write_24(::uPtr< DebugLog*>(message)->ClientId);
    writer->Write_24(message->ClientName);
    writer->Write_24(message->Message);
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\Outracks.Simulator.Protocol.Uno\0.1.0\Messages\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

Error__uType* Error__typeof()
{
    static ::uStaticStrong<Error__uType*> type;
    if (type != NULL) return type;

    type = (Error__uType*)::uAllocClassType(sizeof(Error__uType), "Outracks.Simulator.Protocol.Error", false, 0, 1, 0);

    type->SetBaseType(::app::Outracks::Simulator::Protocol::MessageToClient__typeof());
    type->__fp_ToString = (::uString*(*)(::uObject*))Error__ToString;

    type->SetStrongRefs(
        "Exception", offsetof(Error, Exception));

    type->SetFields(1,
        ::uNewField("Exception", NULL, offsetof(Error, Exception), ::app::Outracks::Simulator::Protocol::ExceptionInfo__typeof()));

    type->SetFunctions(3,
        ::uNewFunction(".ctor", Error__New_1, 0, true, Error__typeof(), ::app::Outracks::Simulator::Protocol::ExceptionInfo__typeof()),
        ::uNewFunction("Read", Error__Read_1, 0, true, Error__typeof(), ::app::Uno::IO::BinaryReader__typeof()),
        ::uNewFunctionVoid("Write", Error__Write_1, 0, true, Error__typeof(), ::app::Uno::IO::BinaryWriter__typeof()));

    ::uRegisterType(type);
    return type;
}

void Error___ObjInit_1(Error* __this, ::app::Outracks::Simulator::Protocol::ExceptionInfo* exception)
{
    ::app::Outracks::Simulator::Protocol::MessageToClient___ObjInit(__this);
    __this->Exception = exception;
}

Error* Error__New_1(::uStatic* __this, ::app::Outracks::Simulator::Protocol::ExceptionInfo* exception)
{
    Error* inst = (Error*)::uAllocObject(sizeof(Error), Error__typeof());
    inst->_ObjInit_1(exception);
    return inst;
}

Error* Error__Read_1(::uStatic* __this, ::app::Uno::IO::BinaryReader* reader)
{
    ::app::Outracks::Simulator::Protocol::ExceptionInfo* exception = ::app::Outracks::Simulator::Protocol::ExceptionInfo__Read(NULL, reader);
    return Error__New_1(NULL, exception);
}

::uString* Error__ToString(Error* __this)
{
    return ::app::Uno::String__op_Addition_2(NULL, ::uGetConstString("Error: "), ::uPtr< ::uString*>(::uPtr< ::app::Outracks::Simulator::Protocol::ExceptionInfo*>(__this->Exception)->Message)->ToString());
}

void Error__Write_1(::uStatic* __this, Error* e, ::app::Uno::IO::BinaryWriter* writer)
{
    ::app::Outracks::Simulator::Protocol::ExceptionInfo__Write(NULL, ::uPtr< Error*>(e)->Exception, writer);
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\Outracks.Simulator.Protocol.Uno\0.1.0\Messages\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

ExceptionInfo__uType* ExceptionInfo__typeof()
{
    static ::uStaticStrong<ExceptionInfo__uType*> type;
    if (type != NULL) return type;

    type = (ExceptionInfo__uType*)::uAllocClassType(sizeof(ExceptionInfo__uType), "Outracks.Simulator.Protocol.ExceptionInfo", false, 0, 4, 0);

    type->SetStrongRefs(
        "InnerExceptions", offsetof(ExceptionInfo, InnerExceptions),
        "Message", offsetof(ExceptionInfo, Message),
        "StackTrace", offsetof(ExceptionInfo, StackTrace),
        "Type", offsetof(ExceptionInfo, Type));

    type->SetFields(4,
        ::uNewField("InnerExceptions", NULL, offsetof(ExceptionInfo, InnerExceptions), ::app::Outracks::Simulator::ImmutableList__Outracks_Simulator_Protocol_ExceptionInfo__typeof()),
        ::uNewField("Message", NULL, offsetof(ExceptionInfo, Message), ::app::Uno::String__typeof()),
        ::uNewField("StackTrace", NULL, offsetof(ExceptionInfo, StackTrace), ::app::Uno::String__typeof()),
        ::uNewField("Type", NULL, offsetof(ExceptionInfo, Type), ::app::Outracks::Simulator::Bytecode::TypeName__typeof()));

    type->SetFunctions(4,
        ::uNewFunction("Capture", ExceptionInfo__Capture, 0, true, ExceptionInfo__typeof(), ::app::Uno::Exception__typeof()),
        ::uNewFunction(".ctor", ExceptionInfo__New_1, 0, true, ExceptionInfo__typeof(), ::app::Outracks::Simulator::Bytecode::TypeName__typeof(), ::app::Uno::String__typeof(), ::app::Uno::String__typeof(), ::app::Outracks::Simulator::ImmutableList__Outracks_Simulator_Protocol_ExceptionInfo__typeof()),
        ::uNewFunction("Read", ExceptionInfo__Read, 0, true, ExceptionInfo__typeof(), ::app::Uno::IO::BinaryReader__typeof()),
        ::uNewFunctionVoid("Write", ExceptionInfo__Write, 0, true, ExceptionInfo__typeof(), ::app::Uno::IO::BinaryWriter__typeof()));

    ::uRegisterType(type);
    return type;
}

void ExceptionInfo___ObjInit(ExceptionInfo* __this, ::app::Outracks::Simulator::Bytecode::TypeName* type, ::uString* message, ::uString* stackTrace, ::app::Outracks::Simulator::ImmutableList__Outracks_Simulator_Protocol_ExceptionInfo* innerExceptions)
{
    __this->Type = type;
    __this->Message = message;
    __this->StackTrace = stackTrace;
    __this->InnerExceptions = innerExceptions;
}

ExceptionInfo* ExceptionInfo__Capture(::uStatic* __this, ::app::Uno::Exception* e)
{
    return ExceptionInfo__New_1(NULL, ::app::Outracks::Simulator::Bytecode::TypeName__Parse(NULL, ::uPtr< ::uType*>(::app::Uno::Object::GetType(::uPtr< ::app::Uno::Exception*>(e)))->ToString()), ::uPtr< ::app::Uno::Exception*>(e)->Message(), ::uPtr< ::app::Uno::Exception*>(e)->StackTrace(), ::app::Outracks::Simulator::ImmutableList__Outracks_Simulator_Protocol_ExceptionInfo__get_Empty(NULL));
}

ExceptionInfo* ExceptionInfo__New_1(::uStatic* __this, ::app::Outracks::Simulator::Bytecode::TypeName* type, ::uString* message, ::uString* stackTrace, ::app::Outracks::Simulator::ImmutableList__Outracks_Simulator_Protocol_ExceptionInfo* innerExceptions)
{
    ExceptionInfo* inst = (ExceptionInfo*)::uAllocObject(sizeof(ExceptionInfo), ExceptionInfo__typeof());
    inst->_ObjInit(type, message, stackTrace, innerExceptions);
    return inst;
}

ExceptionInfo* ExceptionInfo__Read(::uStatic* __this, ::app::Uno::IO::BinaryReader* reader)
{
    ::app::Outracks::Simulator::Bytecode::TypeName* type = ::uPtr< ::uDelegate*>(::app::Outracks::Simulator::Bytecode::TypeName__Read)->Invoke< ::app::Outracks::Simulator::Bytecode::TypeName*, ::app::Uno::IO::BinaryReader*>(reader);
    ::uString* message = ::uPtr< ::app::Uno::IO::BinaryReader*>(reader)->ReadString();
    ::uString* stackTrace = reader->ReadString();
    ::app::Outracks::Simulator::ImmutableList__Outracks_Simulator_Protocol_ExceptionInfo* innerExceptions = ::app::Outracks::Simulator::List__Read__Outracks_Simulator_Protocol_ExceptionInfo(NULL, reader, ::uNewDelegateNonVirt(::app::Uno::Func__Uno_IO_BinaryReader__Outracks_Simulator_Protocol_ExceptionInfo__typeof(), (const void*)ExceptionInfo__Read));
    return ExceptionInfo__New_1(NULL, type, message, stackTrace, innerExceptions);
}

void ExceptionInfo__Write(::uStatic* __this, ExceptionInfo* e, ::app::Uno::IO::BinaryWriter* writer)
{
    ::uPtr< ::uDelegate*>(::app::Outracks::Simulator::Bytecode::TypeName__Write)->InvokeVoid< ::app::Outracks::Simulator::Bytecode::TypeName*, ::app::Uno::IO::BinaryWriter*>(::uPtr< ExceptionInfo*>(e)->Type, writer);
    ::uPtr< ::app::Uno::IO::BinaryWriter*>(writer)->Write_24(e->Message);
    writer->Write_24(e->StackTrace);
    ::app::Outracks::Simulator::List__Write__Outracks_Simulator_Protocol_ExceptionInfo(NULL, writer, e->InnerExceptions, ::uNewDelegateNonVirt(::app::Uno::Action__Outracks_Simulator_Protocol_ExceptionInfo__Uno_IO_BinaryWriter__typeof(), (const void*)ExceptionInfo__Write));
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\Outracks.Simulator.Protocol.Uno\0.1.0\Messages\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

Execute__uType* Execute__typeof()
{
    static ::uStaticStrong<Execute__uType*> type;
    if (type != NULL) return type;

    type = (Execute__uType*)::uAllocClassType(sizeof(Execute__uType), "Outracks.Simulator.Protocol.Execute", false, 0, 1, 0);

    type->SetBaseType(::app::Outracks::Simulator::Protocol::MessageToClient__typeof());
    type->__fp_ToString = (::uString*(*)(::uObject*))Execute__ToString;

    type->SetStrongRefs(
        "Function", offsetof(Execute, Function));

    type->SetFields(1,
        ::uNewField("Function", NULL, offsetof(Execute, Function), ::app::Outracks::Simulator::Bytecode::Lambda__typeof()));

    type->SetFunctions(3,
        ::uNewFunction(".ctor", Execute__New_1, 0, true, Execute__typeof(), ::app::Outracks::Simulator::Bytecode::Lambda__typeof()),
        ::uNewFunction("Read", Execute__Read_1, 0, true, Execute__typeof(), ::app::Uno::IO::BinaryReader__typeof()),
        ::uNewFunctionVoid("Write", Execute__Write_1, 0, true, Execute__typeof(), ::app::Uno::IO::BinaryWriter__typeof()));

    ::uRegisterType(type);
    return type;
}

void Execute___ObjInit_1(Execute* __this, ::app::Outracks::Simulator::Bytecode::Lambda* function)
{
    ::app::Outracks::Simulator::Protocol::MessageToClient___ObjInit(__this);
    __this->Function = function;
}

Execute* Execute__New_1(::uStatic* __this, ::app::Outracks::Simulator::Bytecode::Lambda* function)
{
    Execute* inst = (Execute*)::uAllocObject(sizeof(Execute), Execute__typeof());
    inst->_ObjInit_1(function);
    return inst;
}

Execute* Execute__Read_1(::uStatic* __this, ::app::Uno::IO::BinaryReader* reader)
{
    ::app::Outracks::Simulator::Bytecode::Lambda* function = ::app::Outracks::Simulator::Bytecode::Lambda__Read_2(NULL, reader);
    return Execute__New_1(NULL, function);
}

::uString* Execute__ToString(Execute* __this)
{
    return ::app::Uno::String__op_Addition_2(NULL, ::uGetConstString("Execute: "), ::uPtr< ::app::Outracks::Simulator::Bytecode::Lambda*>(__this->Function)->ToString());
}

void Execute__Write_1(::uStatic* __this, Execute* message, ::app::Uno::IO::BinaryWriter* writer)
{
    ::app::Outracks::Simulator::Bytecode::Lambda__Write_2(NULL, ::uPtr< Execute*>(message)->Function, writer);
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\Outracks.Simulator.Protocol.Uno\0.1.0\Messages\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

MessageFromClient__uType* MessageFromClient__typeof()
{
    static ::uStaticStrong<MessageFromClient__uType*> type;
    if (type != NULL) return type;

    type = (MessageFromClient__uType*)::uAllocClassType(sizeof(MessageFromClient__uType), "Outracks.Simulator.Protocol.MessageFromClient", false, 0, 0, 0);

    type->SetFunctions(4,
        ::uNewFunctionVoid("Match", MessageFromClient__Match, 0, false, ::app::Uno::Action__Outracks_Simulator_Protocol_RegisterName__typeof(), ::app::Uno::Action__Outracks_Simulator_Protocol_DebugLog__typeof(), ::app::Uno::Action__Outracks_Simulator_Protocol_UnhandledException__typeof()),
        ::uNewFunction("Match", MessageFromClient__Match__char, 0, false, ::app::Uno::Char__typeof(), ::app::Uno::Func__Outracks_Simulator_Protocol_RegisterName__char__typeof(), ::app::Uno::Func__Outracks_Simulator_Protocol_DebugLog__char__typeof(), ::app::Uno::Func__Outracks_Simulator_Protocol_UnhandledException__char__typeof()),
        ::uNewFunction("Read", MessageFromClient__Read, 0, true, MessageFromClient__typeof(), ::app::Uno::IO::BinaryReader__typeof()),
        ::uNewFunctionVoid("Write", MessageFromClient__Write, 0, true, MessageFromClient__typeof(), ::app::Uno::IO::BinaryWriter__typeof()));

    ::uRegisterType(type);
    return type;
}

void MessageFromClient___ObjInit(MessageFromClient* __this)
{
}

void MessageFromClient__Match(MessageFromClient* __this, ::uDelegate* a0, ::uDelegate* a1, ::uDelegate* a2)
{
    MessageFromClient* self = __this;
    ::app::Outracks::Simulator::Protocol::RegisterName* t0 = ::uAs< ::app::Outracks::Simulator::Protocol::RegisterName*>(self, ::app::Outracks::Simulator::Protocol::RegisterName__typeof());

    if (t0 != NULL)
    {
        ::uPtr< ::uDelegate*>(a0)->InvokeVoid< ::app::Outracks::Simulator::Protocol::RegisterName*>(t0);
        return;
    }

    ::app::Outracks::Simulator::Protocol::DebugLog* t1 = ::uAs< ::app::Outracks::Simulator::Protocol::DebugLog*>(self, ::app::Outracks::Simulator::Protocol::DebugLog__typeof());

    if (t1 != NULL)
    {
        ::uPtr< ::uDelegate*>(a1)->InvokeVoid< ::app::Outracks::Simulator::Protocol::DebugLog*>(t1);
        return;
    }

    ::app::Outracks::Simulator::Protocol::UnhandledException* t2 = ::uAs< ::app::Outracks::Simulator::Protocol::UnhandledException*>(self, ::app::Outracks::Simulator::Protocol::UnhandledException__typeof());

    if (t2 != NULL)
    {
        ::uPtr< ::uDelegate*>(a2)->InvokeVoid< ::app::Outracks::Simulator::Protocol::UnhandledException*>(t2);
        return;
    }

    U_THROW(::app::Outracks::Simulator::NonExhaustiveMatch__New_3(NULL));
}

::uChar MessageFromClient__Match__char(MessageFromClient* __this, ::uDelegate* a0, ::uDelegate* a1, ::uDelegate* a2)
{
    MessageFromClient* self = __this;
    ::app::Outracks::Simulator::Protocol::RegisterName* t0 = ::uAs< ::app::Outracks::Simulator::Protocol::RegisterName*>(self, ::app::Outracks::Simulator::Protocol::RegisterName__typeof());

    if (t0 != NULL)
    {
        return ::uPtr< ::uDelegate*>(a0)->Invoke< ::uChar, ::app::Outracks::Simulator::Protocol::RegisterName*>(t0);
    }

    ::app::Outracks::Simulator::Protocol::DebugLog* t1 = ::uAs< ::app::Outracks::Simulator::Protocol::DebugLog*>(self, ::app::Outracks::Simulator::Protocol::DebugLog__typeof());

    if (t1 != NULL)
    {
        return ::uPtr< ::uDelegate*>(a1)->Invoke< ::uChar, ::app::Outracks::Simulator::Protocol::DebugLog*>(t1);
    }

    ::app::Outracks::Simulator::Protocol::UnhandledException* t2 = ::uAs< ::app::Outracks::Simulator::Protocol::UnhandledException*>(self, ::app::Outracks::Simulator::Protocol::UnhandledException__typeof());

    if (t2 != NULL)
    {
        return ::uPtr< ::uDelegate*>(a2)->Invoke< ::uChar, ::app::Outracks::Simulator::Protocol::UnhandledException*>(t2);
    }

    U_THROW(::app::Outracks::Simulator::NonExhaustiveMatch__New_3(NULL));
}

MessageFromClient* MessageFromClient__Read(::uStatic* __this, ::app::Uno::IO::BinaryReader* reader)
{
    ::uChar typeToken = ::uPtr< ::app::Uno::IO::BinaryReader*>(reader)->ReadChar();

    switch (typeToken)
    {
        case 'r':
        {
            return (MessageFromClient*)::app::Outracks::Simulator::Protocol::RegisterName__Read_1(NULL, reader);
        }
        case 'l':
        {
            return (MessageFromClient*)::app::Outracks::Simulator::Protocol::DebugLog__Read_1(NULL, reader);
        }
        case 'e':
        {
            return (MessageFromClient*)::app::Outracks::Simulator::Protocol::UnhandledException__Read_1(NULL, reader);
        }
    }

    U_THROW(::app::Outracks::Simulator::InvalidDataException__New_3(NULL));
}

void MessageFromClient__Write(::uStatic* __this, MessageFromClient* message, ::app::Uno::IO::BinaryWriter* writer)
{
    ::uPtr< ::app::Uno::IO::BinaryWriter*>(writer)->Write_5(::uPtr< MessageFromClient*>(message)->Match__char(::app::Outracks::Simulator::Closure__Return__Outracks_Simulator_Protocol_RegisterName__char(NULL, 'r'), ::app::Outracks::Simulator::Closure__Return__Outracks_Simulator_Protocol_DebugLog__char(NULL, 'l'), ::app::Outracks::Simulator::Closure__Return__Outracks_Simulator_Protocol_UnhandledException__char(NULL, 'e')));
    message->Match(::app::Outracks::Simulator::Closure__ApplySecond__Outracks_Simulator_Protocol_RegisterName__Uno_IO_BinaryWriter(NULL, ::uNewDelegateNonVirt(::app::Uno::Action__Outracks_Simulator_Protocol_RegisterName__Uno_IO_BinaryWriter__typeof(), (const void*)::app::Outracks::Simulator::Protocol::RegisterName__Write_1), writer), ::app::Outracks::Simulator::Closure__ApplySecond__Outracks_Simulator_Protocol_DebugLog__Uno_IO_BinaryWriter(NULL, ::uNewDelegateNonVirt(::app::Uno::Action__Outracks_Simulator_Protocol_DebugLog__Uno_IO_BinaryWriter__typeof(), (const void*)::app::Outracks::Simulator::Protocol::DebugLog__Write_1), writer), ::app::Outracks::Simulator::Closure__ApplySecond__Outracks_Simulator_Protocol_UnhandledException__Uno_IO_BinaryWriter(NULL, ::uNewDelegateNonVirt(::app::Uno::Action__Outracks_Simulator_Protocol_UnhandledException__Uno_IO_BinaryWriter__typeof(), (const void*)::app::Outracks::Simulator::Protocol::UnhandledException__Write_1), writer));
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\Outracks.Simulator.Protocol.Uno\0.1.0\Messages\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

MessageToClient__uType* MessageToClient__typeof()
{
    static ::uStaticStrong<MessageToClient__uType*> type;
    if (type != NULL) return type;

    type = (MessageToClient__uType*)::uAllocClassType(sizeof(MessageToClient__uType), "Outracks.Simulator.Protocol.MessageToClient", false, 0, 0, 0);

    type->SetFunctions(5,
        ::uNewFunctionVoid("Match", MessageToClient__Match, 0, false, ::app::Uno::Action__Outracks_Simulator_Protocol_Reify__typeof(), ::app::Uno::Action__Outracks_Simulator_Protocol_Execute__typeof(), ::app::Uno::Action__Outracks_Simulator_Protocol_Error__typeof()),
        ::uNewFunction("Match", MessageToClient__Match__char, 0, false, ::app::Uno::Char__typeof(), ::app::Uno::Func__Outracks_Simulator_Protocol_Reify__char__typeof(), ::app::Uno::Func__Outracks_Simulator_Protocol_Execute__char__typeof(), ::app::Uno::Func__Outracks_Simulator_Protocol_Error__char__typeof()),
        ::uNewFunction("Match", MessageToClient__Match__Outracks_Simulator_State, 0, false, ::app::Outracks::Simulator::State__typeof(), ::app::Uno::Func__Outracks_Simulator_Protocol_Reify__Outracks_Simulator_State__typeof(), ::app::Uno::Func__Outracks_Simulator_Protocol_Execute__Outracks_Simulator_State__typeof(), ::app::Uno::Func__Outracks_Simulator_Protocol_Error__Outracks_Simulator_State__typeof()),
        ::uNewFunction("Read", MessageToClient__Read, 0, true, MessageToClient__typeof(), ::app::Uno::IO::BinaryReader__typeof()),
        ::uNewFunctionVoid("Write", MessageToClient__Write, 0, true, MessageToClient__typeof(), ::app::Uno::IO::BinaryWriter__typeof()));

    ::uRegisterType(type);
    return type;
}

void MessageToClient___ObjInit(MessageToClient* __this)
{
}

void MessageToClient__Match(MessageToClient* __this, ::uDelegate* a1, ::uDelegate* a2, ::uDelegate* a3)
{
    MessageToClient* self = __this;
    ::app::Outracks::Simulator::Protocol::Reify* t1 = ::uAs< ::app::Outracks::Simulator::Protocol::Reify*>(self, ::app::Outracks::Simulator::Protocol::Reify__typeof());

    if (t1 != NULL)
    {
        ::uPtr< ::uDelegate*>(a1)->InvokeVoid< ::app::Outracks::Simulator::Protocol::Reify*>(t1);
        return;
    }

    ::app::Outracks::Simulator::Protocol::Execute* t2 = ::uAs< ::app::Outracks::Simulator::Protocol::Execute*>(self, ::app::Outracks::Simulator::Protocol::Execute__typeof());

    if (t2 != NULL)
    {
        ::uPtr< ::uDelegate*>(a2)->InvokeVoid< ::app::Outracks::Simulator::Protocol::Execute*>(t2);
        return;
    }

    ::app::Outracks::Simulator::Protocol::Error* t3 = ::uAs< ::app::Outracks::Simulator::Protocol::Error*>(self, ::app::Outracks::Simulator::Protocol::Error__typeof());

    if (t3 != NULL)
    {
        ::uPtr< ::uDelegate*>(a3)->InvokeVoid< ::app::Outracks::Simulator::Protocol::Error*>(t3);
        return;
    }

    U_THROW(::app::Outracks::Simulator::NonExhaustiveMatch__New_3(NULL));
}

::uChar MessageToClient__Match__char(MessageToClient* __this, ::uDelegate* a1, ::uDelegate* a2, ::uDelegate* a3)
{
    MessageToClient* self = __this;
    ::app::Outracks::Simulator::Protocol::Reify* t1 = ::uAs< ::app::Outracks::Simulator::Protocol::Reify*>(self, ::app::Outracks::Simulator::Protocol::Reify__typeof());

    if (t1 != NULL)
    {
        return ::uPtr< ::uDelegate*>(a1)->Invoke< ::uChar, ::app::Outracks::Simulator::Protocol::Reify*>(t1);
    }

    ::app::Outracks::Simulator::Protocol::Execute* t2 = ::uAs< ::app::Outracks::Simulator::Protocol::Execute*>(self, ::app::Outracks::Simulator::Protocol::Execute__typeof());

    if (t2 != NULL)
    {
        return ::uPtr< ::uDelegate*>(a2)->Invoke< ::uChar, ::app::Outracks::Simulator::Protocol::Execute*>(t2);
    }

    ::app::Outracks::Simulator::Protocol::Error* t3 = ::uAs< ::app::Outracks::Simulator::Protocol::Error*>(self, ::app::Outracks::Simulator::Protocol::Error__typeof());

    if (t3 != NULL)
    {
        return ::uPtr< ::uDelegate*>(a3)->Invoke< ::uChar, ::app::Outracks::Simulator::Protocol::Error*>(t3);
    }

    U_THROW(::app::Outracks::Simulator::NonExhaustiveMatch__New_3(NULL));
}

::app::Outracks::Simulator::State* MessageToClient__Match__Outracks_Simulator_State(MessageToClient* __this, ::uDelegate* a1, ::uDelegate* a2, ::uDelegate* a3)
{
    MessageToClient* self = __this;
    ::app::Outracks::Simulator::Protocol::Reify* t1 = ::uAs< ::app::Outracks::Simulator::Protocol::Reify*>(self, ::app::Outracks::Simulator::Protocol::Reify__typeof());

    if (t1 != NULL)
    {
        return ::uPtr< ::uDelegate*>(a1)->Invoke< ::app::Outracks::Simulator::State*, ::app::Outracks::Simulator::Protocol::Reify*>(t1);
    }

    ::app::Outracks::Simulator::Protocol::Execute* t2 = ::uAs< ::app::Outracks::Simulator::Protocol::Execute*>(self, ::app::Outracks::Simulator::Protocol::Execute__typeof());

    if (t2 != NULL)
    {
        return ::uPtr< ::uDelegate*>(a2)->Invoke< ::app::Outracks::Simulator::State*, ::app::Outracks::Simulator::Protocol::Execute*>(t2);
    }

    ::app::Outracks::Simulator::Protocol::Error* t3 = ::uAs< ::app::Outracks::Simulator::Protocol::Error*>(self, ::app::Outracks::Simulator::Protocol::Error__typeof());

    if (t3 != NULL)
    {
        return ::uPtr< ::uDelegate*>(a3)->Invoke< ::app::Outracks::Simulator::State*, ::app::Outracks::Simulator::Protocol::Error*>(t3);
    }

    U_THROW(::app::Outracks::Simulator::NonExhaustiveMatch__New_3(NULL));
}

MessageToClient* MessageToClient__Read(::uStatic* __this, ::app::Uno::IO::BinaryReader* reader)
{
    ::uChar typeToken = ::uPtr< ::app::Uno::IO::BinaryReader*>(reader)->ReadChar();

    switch (typeToken)
    {
        case 'l':
        {
            return (MessageToClient*)::app::Outracks::Simulator::Protocol::Reify__Read_1(NULL, reader);
        }
        case 'e':
        {
            return (MessageToClient*)::app::Outracks::Simulator::Protocol::Execute__Read_1(NULL, reader);
        }
        case 'x':
        {
            return (MessageToClient*)::app::Outracks::Simulator::Protocol::Error__Read_1(NULL, reader);
        }
    }

    U_THROW(::app::Outracks::Simulator::InvalidDataException__New_3(NULL));
}

void MessageToClient__Write(::uStatic* __this, MessageToClient* message, ::app::Uno::IO::BinaryWriter* writer)
{
    ::uPtr< ::app::Uno::IO::BinaryWriter*>(writer)->Write_5(::uPtr< MessageToClient*>(message)->Match__char(::app::Outracks::Simulator::Closure__Return__Outracks_Simulator_Protocol_Reify__char(NULL, 'l'), ::app::Outracks::Simulator::Closure__Return__Outracks_Simulator_Protocol_Execute__char(NULL, 'e'), ::app::Outracks::Simulator::Closure__Return__Outracks_Simulator_Protocol_Error__char(NULL, 'x')));
    message->Match(::app::Outracks::Simulator::Closure__ApplySecond__Outracks_Simulator_Protocol_Reify__Uno_IO_BinaryWriter(NULL, ::uNewDelegateNonVirt(::app::Uno::Action__Outracks_Simulator_Protocol_Reify__Uno_IO_BinaryWriter__typeof(), (const void*)::app::Outracks::Simulator::Protocol::Reify__Write_1), writer), ::app::Outracks::Simulator::Closure__ApplySecond__Outracks_Simulator_Protocol_Execute__Uno_IO_BinaryWriter(NULL, ::uNewDelegateNonVirt(::app::Uno::Action__Outracks_Simulator_Protocol_Execute__Uno_IO_BinaryWriter__typeof(), (const void*)::app::Outracks::Simulator::Protocol::Execute__Write_1), writer), ::app::Outracks::Simulator::Closure__ApplySecond__Outracks_Simulator_Protocol_Error__Uno_IO_BinaryWriter(NULL, ::uNewDelegateNonVirt(::app::Uno::Action__Outracks_Simulator_Protocol_Error__Uno_IO_BinaryWriter__typeof(), (const void*)::app::Outracks::Simulator::Protocol::Error__Write_1), writer));
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\Outracks.Simulator.Protocol.Uno\0.1.0\Messages\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

RegisterName__uType* RegisterName__typeof()
{
    static ::uStaticStrong<RegisterName__uType*> type;
    if (type != NULL) return type;

    type = (RegisterName__uType*)::uAllocClassType(sizeof(RegisterName__uType), "Outracks.Simulator.Protocol.RegisterName", false, 0, 2, 0);

    type->SetBaseType(::app::Outracks::Simulator::Protocol::MessageFromClient__typeof());

    type->SetStrongRefs(
        "ClientId", offsetof(RegisterName, ClientId),
        "ClientName", offsetof(RegisterName, ClientName));

    type->SetFields(2,
        ::uNewField("ClientId", NULL, offsetof(RegisterName, ClientId), ::app::Uno::String__typeof()),
        ::uNewField("ClientName", NULL, offsetof(RegisterName, ClientName), ::app::Uno::String__typeof()));

    type->SetFunctions(3,
        ::uNewFunction(".ctor", RegisterName__New_1, 0, true, RegisterName__typeof(), ::app::Uno::String__typeof(), ::app::Uno::String__typeof()),
        ::uNewFunction("Read", RegisterName__Read_1, 0, true, RegisterName__typeof(), ::app::Uno::IO::BinaryReader__typeof()),
        ::uNewFunctionVoid("Write", RegisterName__Write_1, 0, true, RegisterName__typeof(), ::app::Uno::IO::BinaryWriter__typeof()));

    ::uRegisterType(type);
    return type;
}

void RegisterName___ObjInit_1(RegisterName* __this, ::uString* clientId, ::uString* clientName)
{
    ::app::Outracks::Simulator::Protocol::MessageFromClient___ObjInit(__this);
    __this->ClientId = clientId;
    __this->ClientName = clientName;
}

RegisterName* RegisterName__New_1(::uStatic* __this, ::uString* clientId, ::uString* clientName)
{
    RegisterName* inst = (RegisterName*)::uAllocObject(sizeof(RegisterName), RegisterName__typeof());
    inst->_ObjInit_1(clientId, clientName);
    return inst;
}

RegisterName* RegisterName__Read_1(::uStatic* __this, ::app::Uno::IO::BinaryReader* reader)
{
    ::uString* clientId = ::uPtr< ::app::Uno::IO::BinaryReader*>(reader)->ReadString();
    ::uString* clientName = reader->ReadString();
    return RegisterName__New_1(NULL, clientId, clientName);
}

void RegisterName__Write_1(::uStatic* __this, RegisterName* message, ::app::Uno::IO::BinaryWriter* writer)
{
    ::uPtr< ::app::Uno::IO::BinaryWriter*>(writer)->Write_24(::uPtr< RegisterName*>(message)->ClientId);
    writer->Write_24(message->ClientName);
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\Outracks.Simulator.Protocol.Uno\0.1.0\Messages\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

Reify__uType* Reify__typeof()
{
    static ::uStaticStrong<Reify__uType*> type;
    if (type != NULL) return type;

    type = (Reify__uType*)::uAllocClassType(sizeof(Reify__uType), "Outracks.Simulator.Protocol.Reify", false, 0, 1, 0);

    type->SetBaseType(::app::Outracks::Simulator::Protocol::MessageToClient__typeof());
    type->__fp_ToString = (::uString*(*)(::uObject*))Reify__ToString;

    type->SetStrongRefs(
        "AppMutator", offsetof(Reify, AppMutator));

    type->SetFields(1,
        ::uNewField("AppMutator", NULL, offsetof(Reify, AppMutator), ::app::Outracks::Simulator::Bytecode::Lambda__typeof()));

    type->SetFunctions(4,
        ::uNewFunction("get_BinaryFormat", Reify__get_BinaryFormat, 0, true, ::app::Uno::String__typeof()),
        ::uNewFunction(".ctor", Reify__New_1, 0, true, Reify__typeof(), ::app::Outracks::Simulator::Bytecode::Lambda__typeof()),
        ::uNewFunction("Read", Reify__Read_1, 0, true, Reify__typeof(), ::app::Uno::IO::BinaryReader__typeof()),
        ::uNewFunctionVoid("Write", Reify__Write_1, 0, true, Reify__typeof(), ::app::Uno::IO::BinaryWriter__typeof()));

    ::uRegisterType(type);
    return type;
}

void Reify___ObjInit_1(Reify* __this, ::app::Outracks::Simulator::Bytecode::Lambda* appMutator)
{
    ::app::Outracks::Simulator::Protocol::MessageToClient___ObjInit(__this);
    __this->AppMutator = appMutator;
}

::uString* Reify__get_BinaryFormat(::uStatic* __this)
{
    return ::uGetConstString("bc2");
}

Reify* Reify__New_1(::uStatic* __this, ::app::Outracks::Simulator::Bytecode::Lambda* appMutator)
{
    Reify* inst = (Reify*)::uAllocObject(sizeof(Reify), Reify__typeof());
    inst->_ObjInit_1(appMutator);
    return inst;
}

Reify* Reify__Read_1(::uStatic* __this, ::app::Uno::IO::BinaryReader* reader)
{
    ::app::Outracks::Simulator::Bytecode::Lambda* lambda = ::app::Outracks::Simulator::Bytecode::Lambda__Read_2(NULL, reader);
    return Reify__New_1(NULL, lambda);
}

::uString* Reify__ToString(Reify* __this)
{
    return ::app::Uno::String__op_Addition_2(NULL, ::uGetConstString("Reify: "), ::uPtr< ::app::Outracks::Simulator::Bytecode::Lambda*>(__this->AppMutator)->ToString());
}

void Reify__Write_1(::uStatic* __this, Reify* message, ::app::Uno::IO::BinaryWriter* writer)
{
    ::app::Outracks::Simulator::Bytecode::Lambda__Write_2(NULL, ::uPtr< Reify*>(message)->AppMutator, writer);
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\Outracks.Simulator.Protocol.Uno\0.1.0\Messages\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

UnhandledException__uType* UnhandledException__typeof()
{
    static ::uStaticStrong<UnhandledException__uType*> type;
    if (type != NULL) return type;

    type = (UnhandledException__uType*)::uAllocClassType(sizeof(UnhandledException__uType), "Outracks.Simulator.Protocol.UnhandledException", false, 0, 5, 0);

    type->SetBaseType(::app::Outracks::Simulator::Protocol::MessageFromClient__typeof());

    type->SetStrongRefs(
        "ClientId", offsetof(UnhandledException, ClientId),
        "ClientName", offsetof(UnhandledException, ClientName),
        "Message", offsetof(UnhandledException, Message),
        "StackTrace", offsetof(UnhandledException, StackTrace),
        "Type", offsetof(UnhandledException, Type));

    type->SetFields(5,
        ::uNewField("ClientId", NULL, offsetof(UnhandledException, ClientId), ::app::Uno::String__typeof()),
        ::uNewField("ClientName", NULL, offsetof(UnhandledException, ClientName), ::app::Uno::String__typeof()),
        ::uNewField("Message", NULL, offsetof(UnhandledException, Message), ::app::Uno::String__typeof()),
        ::uNewField("StackTrace", NULL, offsetof(UnhandledException, StackTrace), ::app::Uno::String__typeof()),
        ::uNewField("Type", NULL, offsetof(UnhandledException, Type), ::app::Uno::String__typeof()));

    type->SetFunctions(3,
        ::uNewFunction(".ctor", UnhandledException__New_1, 0, true, UnhandledException__typeof(), ::app::Uno::String__typeof(), ::app::Uno::String__typeof(), ::app::Uno::String__typeof(), ::app::Uno::String__typeof(), ::app::Uno::String__typeof()),
        ::uNewFunction("Read", UnhandledException__Read_1, 0, true, UnhandledException__typeof(), ::app::Uno::IO::BinaryReader__typeof()),
        ::uNewFunctionVoid("Write", UnhandledException__Write_1, 0, true, UnhandledException__typeof(), ::app::Uno::IO::BinaryWriter__typeof()));

    ::uRegisterType(type);
    return type;
}

void UnhandledException___ObjInit_1(UnhandledException* __this, ::uString* clientId, ::uString* clientName, ::uString* message, ::uString* stackTrace, ::uString* type)
{
    ::app::Outracks::Simulator::Protocol::MessageFromClient___ObjInit(__this);
    __this->ClientId = clientId;
    __this->ClientName = clientName;
    __this->Message = message;
    __this->StackTrace = stackTrace;
    __this->Type = type;
}

UnhandledException* UnhandledException__New_1(::uStatic* __this, ::uString* clientId, ::uString* clientName, ::uString* message, ::uString* stackTrace, ::uString* type)
{
    UnhandledException* inst = (UnhandledException*)::uAllocObject(sizeof(UnhandledException), UnhandledException__typeof());
    inst->_ObjInit_1(clientId, clientName, message, stackTrace, type);
    return inst;
}

UnhandledException* UnhandledException__Read_1(::uStatic* __this, ::app::Uno::IO::BinaryReader* reader)
{
    ::uString* clientId = ::uPtr< ::app::Uno::IO::BinaryReader*>(reader)->ReadString();
    ::uString* clientName = reader->ReadString();
    ::uString* message = reader->ReadString();
    ::uString* stackTrace = reader->ReadString();
    ::uString* type = reader->ReadString();
    return UnhandledException__New_1(NULL, clientId, clientName, message, stackTrace, type);
}

void UnhandledException__Write_1(::uStatic* __this, UnhandledException* message, ::app::Uno::IO::BinaryWriter* writer)
{
    ::uPtr< ::app::Uno::IO::BinaryWriter*>(writer)->Write_24(::uPtr< UnhandledException*>(message)->ClientId);
    writer->Write_24(message->ClientName);
    writer->Write_24(message->Message);
    writer->Write_24(message->StackTrace);
    writer->Write_24(message->Type);
}

}}}}
