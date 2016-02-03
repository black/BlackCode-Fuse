#include <app/Outracks.Simulator.ApplySecond__Outracks_Simulator_Bytecode_Add-8068b27e.h>
#include <app/Outracks.Simulator.ApplySecond__Outracks_Simulator_Bytecode_Blo-2403c610.h>
#include <app/Outracks.Simulator.ApplySecond__Outracks_Simulator_Bytecode_Boo-dea10293.h>
#include <app/Outracks.Simulator.ApplySecond__Outracks_Simulator_Bytecode_Cal-9a243f50.h>
#include <app/Outracks.Simulator.ApplySecond__Outracks_Simulator_Bytecode_Cal-b8777dfd.h>
#include <app/Outracks.Simulator.ApplySecond__Outracks_Simulator_Bytecode_Cal-ed6e068c.h>
#include <app/Outracks.Simulator.ApplySecond__Outracks_Simulator_Bytecode_Enu-529a3048.h>
#include <app/Outracks.Simulator.ApplySecond__Outracks_Simulator_Bytecode_Exp-15499436.h>
#include <app/Outracks.Simulator.ApplySecond__Outracks_Simulator_Bytecode_Ins-360028fc.h>
#include <app/Outracks.Simulator.ApplySecond__Outracks_Simulator_Bytecode_IsT-a0166baa.h>
#include <app/Outracks.Simulator.ApplySecond__Outracks_Simulator_Bytecode_Lam-c6c30a0c.h>
#include <app/Outracks.Simulator.ApplySecond__Outracks_Simulator_Bytecode_Lit-4cf6061b.h>
#include <app/Outracks.Simulator.ApplySecond__Outracks_Simulator_Bytecode_Log-b96597c1.h>
#include <app/Outracks.Simulator.ApplySecond__Outracks_Simulator_Bytecode_Met-59af699.h>
#include <app/Outracks.Simulator.ApplySecond__Outracks_Simulator_Bytecode_NoO-1517a4da.h>
#include <app/Outracks.Simulator.ApplySecond__Outracks_Simulator_Bytecode_Num-1cf9d67d.h>
#include <app/Outracks.Simulator.ApplySecond__Outracks_Simulator_Bytecode_Rea-3d4228a7.h>
#include <app/Outracks.Simulator.ApplySecond__Outracks_Simulator_Bytecode_Rea-8c7ea1d9.h>
#include <app/Outracks.Simulator.ApplySecond__Outracks_Simulator_Bytecode_Rea-d77eb0f2.h>
#include <app/Outracks.Simulator.ApplySecond__Outracks_Simulator_Bytecode_Rem-f67870ba.h>
#include <app/Outracks.Simulator.ApplySecond__Outracks_Simulator_Bytecode_Ret-e068158a.h>
#include <app/Outracks.Simulator.ApplySecond__Outracks_Simulator_Bytecode_Str-71685694.h>
#include <app/Outracks.Simulator.ApplySecond__Outracks_Simulator_Bytecode_Wri-3ee0aaf3.h>
#include <app/Outracks.Simulator.ApplySecond__Outracks_Simulator_Protocol_Deb-785759dd.h>
#include <app/Outracks.Simulator.ApplySecond__Outracks_Simulator_Protocol_Err-a8f2708c.h>
#include <app/Outracks.Simulator.ApplySecond__Outracks_Simulator_Protocol_Exe-ebc87264.h>
#include <app/Outracks.Simulator.ApplySecond__Outracks_Simulator_Protocol_Reg-e1eb37dd.h>
#include <app/Outracks.Simulator.ApplySecond__Outracks_Simulator_Protocol_Rei-dd812609.h>
#include <app/Outracks.Simulator.ApplySecond__Outracks_Simulator_Protocol_Unh-bc422b0f.h>
#include <app/Outracks.Simulator.Bytecode.AddEventHandler.h>
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
#include <app/Outracks.Simulator.Bytecode.NoOperation.h>
#include <app/Outracks.Simulator.Bytecode.NumberLiteral.h>
#include <app/Outracks.Simulator.Bytecode.ReadProperty.h>
#include <app/Outracks.Simulator.Bytecode.ReadStaticField.h>
#include <app/Outracks.Simulator.Bytecode.ReadVariable.h>
#include <app/Outracks.Simulator.Bytecode.RemoveEventHandler.h>
#include <app/Outracks.Simulator.Bytecode.Return.h>
#include <app/Outracks.Simulator.Bytecode.StringLiteral.h>
#include <app/Outracks.Simulator.Bytecode.WriteProperty.h>
#include <app/Outracks.Simulator.Protocol.DebugLog.h>
#include <app/Outracks.Simulator.Protocol.Error.h>
#include <app/Outracks.Simulator.Protocol.Execute.h>
#include <app/Outracks.Simulator.Protocol.RegisterName.h>
#include <app/Outracks.Simulator.Protocol.Reify.h>
#include <app/Outracks.Simulator.Protocol.UnhandledException.h>
#include <app/Uno.Action__Outracks_Simulator_Bytecode_AddEventHandler__Uno_IO-e26fccb2.h>
#include <app/Uno.Action__Outracks_Simulator_Bytecode_BlobLiteral__Uno_IO_BinaryWriter.h>
#include <app/Uno.Action__Outracks_Simulator_Bytecode_BooleanLiteral__Uno_IO_-9a070063.h>
#include <app/Uno.Action__Outracks_Simulator_Bytecode_CallDynamicMethod__Uno_-40a5243f.h>
#include <app/Uno.Action__Outracks_Simulator_Bytecode_CallLambda__Uno_IO_BinaryWriter.h>
#include <app/Uno.Action__Outracks_Simulator_Bytecode_CallStaticMethod__Uno_I-687379e9.h>
#include <app/Uno.Action__Outracks_Simulator_Bytecode_EnumLiteral__Uno_IO_BinaryWriter.h>
#include <app/Uno.Action__Outracks_Simulator_Bytecode_Expression__Uno_IO_BinaryWriter.h>
#include <app/Uno.Action__Outracks_Simulator_Bytecode_Instantiate__Uno_IO_BinaryWriter.h>
#include <app/Uno.Action__Outracks_Simulator_Bytecode_IsType__Uno_IO_BinaryWriter.h>
#include <app/Uno.Action__Outracks_Simulator_Bytecode_Lambda__Uno_IO_BinaryWriter.h>
#include <app/Uno.Action__Outracks_Simulator_Bytecode_Literal__Uno_IO_BinaryWriter.h>
#include <app/Uno.Action__Outracks_Simulator_Bytecode_LogicalOr__Uno_IO_BinaryWriter.h>
#include <app/Uno.Action__Outracks_Simulator_Bytecode_MethodGroup__Uno_IO_BinaryWriter.h>
#include <app/Uno.Action__Outracks_Simulator_Bytecode_NoOperation__Uno_IO_BinaryWriter.h>
#include <app/Uno.Action__Outracks_Simulator_Bytecode_NumberLiteral__Uno_IO_B-42e4073e.h>
#include <app/Uno.Action__Outracks_Simulator_Bytecode_ReadProperty__Uno_IO_Bi-1758cc4.h>
#include <app/Uno.Action__Outracks_Simulator_Bytecode_ReadStaticField__Uno_IO-18c4fe9.h>
#include <app/Uno.Action__Outracks_Simulator_Bytecode_ReadVariable__Uno_IO_Bi-552cc9ef.h>
#include <app/Uno.Action__Outracks_Simulator_Bytecode_RemoveEventHandler__Uno-8066807d.h>
#include <app/Uno.Action__Outracks_Simulator_Bytecode_Return__Uno_IO_BinaryWriter.h>
#include <app/Uno.Action__Outracks_Simulator_Bytecode_StringLiteral__Uno_IO_B-75e974eb.h>
#include <app/Uno.Action__Outracks_Simulator_Bytecode_WriteProperty__Uno_IO_B-7e7ebb55.h>
#include <app/Uno.Action__Outracks_Simulator_Protocol_DebugLog__Uno_IO_BinaryWriter.h>
#include <app/Uno.Action__Outracks_Simulator_Protocol_Error__Uno_IO_BinaryWriter.h>
#include <app/Uno.Action__Outracks_Simulator_Protocol_Execute__Uno_IO_BinaryWriter.h>
#include <app/Uno.Action__Outracks_Simulator_Protocol_RegisterName__Uno_IO_Bi-6e2cfa14.h>
#include <app/Uno.Action__Outracks_Simulator_Protocol_Reify__Uno_IO_BinaryWriter.h>
#include <app/Uno.Action__Outracks_Simulator_Protocol_UnhandledException__Uno-e96bd926.h>
#include <app/Uno.IO.BinaryWriter.h>

namespace app {
namespace Outracks {
namespace Simulator {

// This file was generated based on 'C:\ProgramData\Uno\Packages\Outracks.Simulator.Protocol.Uno\0.1.0\Common\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

ApplySecond__Outracks_Simulator_Bytecode_AddEventHandler__Uno_IO_BinaryWriter__uType* ApplySecond__Outracks_Simulator_Bytecode_AddEventHandler__Uno_IO_BinaryWriter__typeof()
{
    static ::uStaticStrong<ApplySecond__Outracks_Simulator_Bytecode_AddEventHandler__Uno_IO_BinaryWriter__uType*> type;
    if (type != NULL) return type;

    type = (ApplySecond__Outracks_Simulator_Bytecode_AddEventHandler__Uno_IO_BinaryWriter__uType*)::uAllocClassType(sizeof(ApplySecond__Outracks_Simulator_Bytecode_AddEventHandler__Uno_IO_BinaryWriter__uType), "Outracks.Simulator.ApplySecond<Outracks.Simulator.Bytecode.AddEventHandler,Uno.IO.BinaryWriter>", false, 0, 2, 0);

    type->SetStrongRefs(
        "_action", offsetof(ApplySecond__Outracks_Simulator_Bytecode_AddEventHandler__Uno_IO_BinaryWriter, _action),
        "_arg2", offsetof(ApplySecond__Outracks_Simulator_Bytecode_AddEventHandler__Uno_IO_BinaryWriter, _arg2));

    return type;
}

void ApplySecond__Outracks_Simulator_Bytecode_AddEventHandler__Uno_IO_BinaryWriter___ObjInit(ApplySecond__Outracks_Simulator_Bytecode_AddEventHandler__Uno_IO_BinaryWriter* __this, ::uDelegate* action, ::app::Uno::IO::BinaryWriter* arg2)
{
    __this->_action = action;
    __this->_arg2 = arg2;
}

void ApplySecond__Outracks_Simulator_Bytecode_AddEventHandler__Uno_IO_BinaryWriter__Execute(ApplySecond__Outracks_Simulator_Bytecode_AddEventHandler__Uno_IO_BinaryWriter* __this, ::app::Outracks::Simulator::Bytecode::AddEventHandler* arg1)
{
    ::uPtr< ::uDelegate*>(__this->_action)->InvokeVoid< ::app::Outracks::Simulator::Bytecode::AddEventHandler*, ::app::Uno::IO::BinaryWriter*>(arg1, __this->_arg2);
}

ApplySecond__Outracks_Simulator_Bytecode_AddEventHandler__Uno_IO_BinaryWriter* ApplySecond__Outracks_Simulator_Bytecode_AddEventHandler__Uno_IO_BinaryWriter__New_1(::uStatic* __this, ::uDelegate* action, ::app::Uno::IO::BinaryWriter* arg2)
{
    ApplySecond__Outracks_Simulator_Bytecode_AddEventHandler__Uno_IO_BinaryWriter* inst = (ApplySecond__Outracks_Simulator_Bytecode_AddEventHandler__Uno_IO_BinaryWriter*)::uAllocObject(sizeof(ApplySecond__Outracks_Simulator_Bytecode_AddEventHandler__Uno_IO_BinaryWriter), ApplySecond__Outracks_Simulator_Bytecode_AddEventHandler__Uno_IO_BinaryWriter__typeof());
    inst->_ObjInit(action, arg2);
    return inst;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\Outracks.Simulator.Protocol.Uno\0.1.0\Common\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

ApplySecond__Outracks_Simulator_Bytecode_BlobLiteral__Uno_IO_BinaryWriter__uType* ApplySecond__Outracks_Simulator_Bytecode_BlobLiteral__Uno_IO_BinaryWriter__typeof()
{
    static ::uStaticStrong<ApplySecond__Outracks_Simulator_Bytecode_BlobLiteral__Uno_IO_BinaryWriter__uType*> type;
    if (type != NULL) return type;

    type = (ApplySecond__Outracks_Simulator_Bytecode_BlobLiteral__Uno_IO_BinaryWriter__uType*)::uAllocClassType(sizeof(ApplySecond__Outracks_Simulator_Bytecode_BlobLiteral__Uno_IO_BinaryWriter__uType), "Outracks.Simulator.ApplySecond<Outracks.Simulator.Bytecode.BlobLiteral,Uno.IO.BinaryWriter>", false, 0, 2, 0);

    type->SetStrongRefs(
        "_action", offsetof(ApplySecond__Outracks_Simulator_Bytecode_BlobLiteral__Uno_IO_BinaryWriter, _action),
        "_arg2", offsetof(ApplySecond__Outracks_Simulator_Bytecode_BlobLiteral__Uno_IO_BinaryWriter, _arg2));

    return type;
}

void ApplySecond__Outracks_Simulator_Bytecode_BlobLiteral__Uno_IO_BinaryWriter___ObjInit(ApplySecond__Outracks_Simulator_Bytecode_BlobLiteral__Uno_IO_BinaryWriter* __this, ::uDelegate* action, ::app::Uno::IO::BinaryWriter* arg2)
{
    __this->_action = action;
    __this->_arg2 = arg2;
}

void ApplySecond__Outracks_Simulator_Bytecode_BlobLiteral__Uno_IO_BinaryWriter__Execute(ApplySecond__Outracks_Simulator_Bytecode_BlobLiteral__Uno_IO_BinaryWriter* __this, ::app::Outracks::Simulator::Bytecode::BlobLiteral* arg1)
{
    ::uPtr< ::uDelegate*>(__this->_action)->InvokeVoid< ::app::Outracks::Simulator::Bytecode::BlobLiteral*, ::app::Uno::IO::BinaryWriter*>(arg1, __this->_arg2);
}

ApplySecond__Outracks_Simulator_Bytecode_BlobLiteral__Uno_IO_BinaryWriter* ApplySecond__Outracks_Simulator_Bytecode_BlobLiteral__Uno_IO_BinaryWriter__New_1(::uStatic* __this, ::uDelegate* action, ::app::Uno::IO::BinaryWriter* arg2)
{
    ApplySecond__Outracks_Simulator_Bytecode_BlobLiteral__Uno_IO_BinaryWriter* inst = (ApplySecond__Outracks_Simulator_Bytecode_BlobLiteral__Uno_IO_BinaryWriter*)::uAllocObject(sizeof(ApplySecond__Outracks_Simulator_Bytecode_BlobLiteral__Uno_IO_BinaryWriter), ApplySecond__Outracks_Simulator_Bytecode_BlobLiteral__Uno_IO_BinaryWriter__typeof());
    inst->_ObjInit(action, arg2);
    return inst;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\Outracks.Simulator.Protocol.Uno\0.1.0\Common\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

ApplySecond__Outracks_Simulator_Bytecode_BooleanLiteral__Uno_IO_BinaryWriter__uType* ApplySecond__Outracks_Simulator_Bytecode_BooleanLiteral__Uno_IO_BinaryWriter__typeof()
{
    static ::uStaticStrong<ApplySecond__Outracks_Simulator_Bytecode_BooleanLiteral__Uno_IO_BinaryWriter__uType*> type;
    if (type != NULL) return type;

    type = (ApplySecond__Outracks_Simulator_Bytecode_BooleanLiteral__Uno_IO_BinaryWriter__uType*)::uAllocClassType(sizeof(ApplySecond__Outracks_Simulator_Bytecode_BooleanLiteral__Uno_IO_BinaryWriter__uType), "Outracks.Simulator.ApplySecond<Outracks.Simulator.Bytecode.BooleanLiteral,Uno.IO.BinaryWriter>", false, 0, 2, 0);

    type->SetStrongRefs(
        "_action", offsetof(ApplySecond__Outracks_Simulator_Bytecode_BooleanLiteral__Uno_IO_BinaryWriter, _action),
        "_arg2", offsetof(ApplySecond__Outracks_Simulator_Bytecode_BooleanLiteral__Uno_IO_BinaryWriter, _arg2));

    return type;
}

void ApplySecond__Outracks_Simulator_Bytecode_BooleanLiteral__Uno_IO_BinaryWriter___ObjInit(ApplySecond__Outracks_Simulator_Bytecode_BooleanLiteral__Uno_IO_BinaryWriter* __this, ::uDelegate* action, ::app::Uno::IO::BinaryWriter* arg2)
{
    __this->_action = action;
    __this->_arg2 = arg2;
}

void ApplySecond__Outracks_Simulator_Bytecode_BooleanLiteral__Uno_IO_BinaryWriter__Execute(ApplySecond__Outracks_Simulator_Bytecode_BooleanLiteral__Uno_IO_BinaryWriter* __this, ::app::Outracks::Simulator::Bytecode::BooleanLiteral* arg1)
{
    ::uPtr< ::uDelegate*>(__this->_action)->InvokeVoid< ::app::Outracks::Simulator::Bytecode::BooleanLiteral*, ::app::Uno::IO::BinaryWriter*>(arg1, __this->_arg2);
}

ApplySecond__Outracks_Simulator_Bytecode_BooleanLiteral__Uno_IO_BinaryWriter* ApplySecond__Outracks_Simulator_Bytecode_BooleanLiteral__Uno_IO_BinaryWriter__New_1(::uStatic* __this, ::uDelegate* action, ::app::Uno::IO::BinaryWriter* arg2)
{
    ApplySecond__Outracks_Simulator_Bytecode_BooleanLiteral__Uno_IO_BinaryWriter* inst = (ApplySecond__Outracks_Simulator_Bytecode_BooleanLiteral__Uno_IO_BinaryWriter*)::uAllocObject(sizeof(ApplySecond__Outracks_Simulator_Bytecode_BooleanLiteral__Uno_IO_BinaryWriter), ApplySecond__Outracks_Simulator_Bytecode_BooleanLiteral__Uno_IO_BinaryWriter__typeof());
    inst->_ObjInit(action, arg2);
    return inst;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\Outracks.Simulator.Protocol.Uno\0.1.0\Common\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

ApplySecond__Outracks_Simulator_Bytecode_CallDynamicMethod__Uno_IO_BinaryWriter__uType* ApplySecond__Outracks_Simulator_Bytecode_CallDynamicMethod__Uno_IO_BinaryWriter__typeof()
{
    static ::uStaticStrong<ApplySecond__Outracks_Simulator_Bytecode_CallDynamicMethod__Uno_IO_BinaryWriter__uType*> type;
    if (type != NULL) return type;

    type = (ApplySecond__Outracks_Simulator_Bytecode_CallDynamicMethod__Uno_IO_BinaryWriter__uType*)::uAllocClassType(sizeof(ApplySecond__Outracks_Simulator_Bytecode_CallDynamicMethod__Uno_IO_BinaryWriter__uType), "Outracks.Simulator.ApplySecond<Outracks.Simulator.Bytecode.CallDynamicMethod,Uno.IO.BinaryWriter>", false, 0, 2, 0);

    type->SetStrongRefs(
        "_action", offsetof(ApplySecond__Outracks_Simulator_Bytecode_CallDynamicMethod__Uno_IO_BinaryWriter, _action),
        "_arg2", offsetof(ApplySecond__Outracks_Simulator_Bytecode_CallDynamicMethod__Uno_IO_BinaryWriter, _arg2));

    return type;
}

void ApplySecond__Outracks_Simulator_Bytecode_CallDynamicMethod__Uno_IO_BinaryWriter___ObjInit(ApplySecond__Outracks_Simulator_Bytecode_CallDynamicMethod__Uno_IO_BinaryWriter* __this, ::uDelegate* action, ::app::Uno::IO::BinaryWriter* arg2)
{
    __this->_action = action;
    __this->_arg2 = arg2;
}

void ApplySecond__Outracks_Simulator_Bytecode_CallDynamicMethod__Uno_IO_BinaryWriter__Execute(ApplySecond__Outracks_Simulator_Bytecode_CallDynamicMethod__Uno_IO_BinaryWriter* __this, ::app::Outracks::Simulator::Bytecode::CallDynamicMethod* arg1)
{
    ::uPtr< ::uDelegate*>(__this->_action)->InvokeVoid< ::app::Outracks::Simulator::Bytecode::CallDynamicMethod*, ::app::Uno::IO::BinaryWriter*>(arg1, __this->_arg2);
}

ApplySecond__Outracks_Simulator_Bytecode_CallDynamicMethod__Uno_IO_BinaryWriter* ApplySecond__Outracks_Simulator_Bytecode_CallDynamicMethod__Uno_IO_BinaryWriter__New_1(::uStatic* __this, ::uDelegate* action, ::app::Uno::IO::BinaryWriter* arg2)
{
    ApplySecond__Outracks_Simulator_Bytecode_CallDynamicMethod__Uno_IO_BinaryWriter* inst = (ApplySecond__Outracks_Simulator_Bytecode_CallDynamicMethod__Uno_IO_BinaryWriter*)::uAllocObject(sizeof(ApplySecond__Outracks_Simulator_Bytecode_CallDynamicMethod__Uno_IO_BinaryWriter), ApplySecond__Outracks_Simulator_Bytecode_CallDynamicMethod__Uno_IO_BinaryWriter__typeof());
    inst->_ObjInit(action, arg2);
    return inst;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\Outracks.Simulator.Protocol.Uno\0.1.0\Common\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

ApplySecond__Outracks_Simulator_Bytecode_CallLambda__Uno_IO_BinaryWriter__uType* ApplySecond__Outracks_Simulator_Bytecode_CallLambda__Uno_IO_BinaryWriter__typeof()
{
    static ::uStaticStrong<ApplySecond__Outracks_Simulator_Bytecode_CallLambda__Uno_IO_BinaryWriter__uType*> type;
    if (type != NULL) return type;

    type = (ApplySecond__Outracks_Simulator_Bytecode_CallLambda__Uno_IO_BinaryWriter__uType*)::uAllocClassType(sizeof(ApplySecond__Outracks_Simulator_Bytecode_CallLambda__Uno_IO_BinaryWriter__uType), "Outracks.Simulator.ApplySecond<Outracks.Simulator.Bytecode.CallLambda,Uno.IO.BinaryWriter>", false, 0, 2, 0);

    type->SetStrongRefs(
        "_action", offsetof(ApplySecond__Outracks_Simulator_Bytecode_CallLambda__Uno_IO_BinaryWriter, _action),
        "_arg2", offsetof(ApplySecond__Outracks_Simulator_Bytecode_CallLambda__Uno_IO_BinaryWriter, _arg2));

    return type;
}

void ApplySecond__Outracks_Simulator_Bytecode_CallLambda__Uno_IO_BinaryWriter___ObjInit(ApplySecond__Outracks_Simulator_Bytecode_CallLambda__Uno_IO_BinaryWriter* __this, ::uDelegate* action, ::app::Uno::IO::BinaryWriter* arg2)
{
    __this->_action = action;
    __this->_arg2 = arg2;
}

void ApplySecond__Outracks_Simulator_Bytecode_CallLambda__Uno_IO_BinaryWriter__Execute(ApplySecond__Outracks_Simulator_Bytecode_CallLambda__Uno_IO_BinaryWriter* __this, ::app::Outracks::Simulator::Bytecode::CallLambda* arg1)
{
    ::uPtr< ::uDelegate*>(__this->_action)->InvokeVoid< ::app::Outracks::Simulator::Bytecode::CallLambda*, ::app::Uno::IO::BinaryWriter*>(arg1, __this->_arg2);
}

ApplySecond__Outracks_Simulator_Bytecode_CallLambda__Uno_IO_BinaryWriter* ApplySecond__Outracks_Simulator_Bytecode_CallLambda__Uno_IO_BinaryWriter__New_1(::uStatic* __this, ::uDelegate* action, ::app::Uno::IO::BinaryWriter* arg2)
{
    ApplySecond__Outracks_Simulator_Bytecode_CallLambda__Uno_IO_BinaryWriter* inst = (ApplySecond__Outracks_Simulator_Bytecode_CallLambda__Uno_IO_BinaryWriter*)::uAllocObject(sizeof(ApplySecond__Outracks_Simulator_Bytecode_CallLambda__Uno_IO_BinaryWriter), ApplySecond__Outracks_Simulator_Bytecode_CallLambda__Uno_IO_BinaryWriter__typeof());
    inst->_ObjInit(action, arg2);
    return inst;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\Outracks.Simulator.Protocol.Uno\0.1.0\Common\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

ApplySecond__Outracks_Simulator_Bytecode_CallStaticMethod__Uno_IO_BinaryWriter__uType* ApplySecond__Outracks_Simulator_Bytecode_CallStaticMethod__Uno_IO_BinaryWriter__typeof()
{
    static ::uStaticStrong<ApplySecond__Outracks_Simulator_Bytecode_CallStaticMethod__Uno_IO_BinaryWriter__uType*> type;
    if (type != NULL) return type;

    type = (ApplySecond__Outracks_Simulator_Bytecode_CallStaticMethod__Uno_IO_BinaryWriter__uType*)::uAllocClassType(sizeof(ApplySecond__Outracks_Simulator_Bytecode_CallStaticMethod__Uno_IO_BinaryWriter__uType), "Outracks.Simulator.ApplySecond<Outracks.Simulator.Bytecode.CallStaticMethod,Uno.IO.BinaryWriter>", false, 0, 2, 0);

    type->SetStrongRefs(
        "_action", offsetof(ApplySecond__Outracks_Simulator_Bytecode_CallStaticMethod__Uno_IO_BinaryWriter, _action),
        "_arg2", offsetof(ApplySecond__Outracks_Simulator_Bytecode_CallStaticMethod__Uno_IO_BinaryWriter, _arg2));

    return type;
}

void ApplySecond__Outracks_Simulator_Bytecode_CallStaticMethod__Uno_IO_BinaryWriter___ObjInit(ApplySecond__Outracks_Simulator_Bytecode_CallStaticMethod__Uno_IO_BinaryWriter* __this, ::uDelegate* action, ::app::Uno::IO::BinaryWriter* arg2)
{
    __this->_action = action;
    __this->_arg2 = arg2;
}

void ApplySecond__Outracks_Simulator_Bytecode_CallStaticMethod__Uno_IO_BinaryWriter__Execute(ApplySecond__Outracks_Simulator_Bytecode_CallStaticMethod__Uno_IO_BinaryWriter* __this, ::app::Outracks::Simulator::Bytecode::CallStaticMethod* arg1)
{
    ::uPtr< ::uDelegate*>(__this->_action)->InvokeVoid< ::app::Outracks::Simulator::Bytecode::CallStaticMethod*, ::app::Uno::IO::BinaryWriter*>(arg1, __this->_arg2);
}

ApplySecond__Outracks_Simulator_Bytecode_CallStaticMethod__Uno_IO_BinaryWriter* ApplySecond__Outracks_Simulator_Bytecode_CallStaticMethod__Uno_IO_BinaryWriter__New_1(::uStatic* __this, ::uDelegate* action, ::app::Uno::IO::BinaryWriter* arg2)
{
    ApplySecond__Outracks_Simulator_Bytecode_CallStaticMethod__Uno_IO_BinaryWriter* inst = (ApplySecond__Outracks_Simulator_Bytecode_CallStaticMethod__Uno_IO_BinaryWriter*)::uAllocObject(sizeof(ApplySecond__Outracks_Simulator_Bytecode_CallStaticMethod__Uno_IO_BinaryWriter), ApplySecond__Outracks_Simulator_Bytecode_CallStaticMethod__Uno_IO_BinaryWriter__typeof());
    inst->_ObjInit(action, arg2);
    return inst;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\Outracks.Simulator.Protocol.Uno\0.1.0\Common\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

ApplySecond__Outracks_Simulator_Bytecode_EnumLiteral__Uno_IO_BinaryWriter__uType* ApplySecond__Outracks_Simulator_Bytecode_EnumLiteral__Uno_IO_BinaryWriter__typeof()
{
    static ::uStaticStrong<ApplySecond__Outracks_Simulator_Bytecode_EnumLiteral__Uno_IO_BinaryWriter__uType*> type;
    if (type != NULL) return type;

    type = (ApplySecond__Outracks_Simulator_Bytecode_EnumLiteral__Uno_IO_BinaryWriter__uType*)::uAllocClassType(sizeof(ApplySecond__Outracks_Simulator_Bytecode_EnumLiteral__Uno_IO_BinaryWriter__uType), "Outracks.Simulator.ApplySecond<Outracks.Simulator.Bytecode.EnumLiteral,Uno.IO.BinaryWriter>", false, 0, 2, 0);

    type->SetStrongRefs(
        "_action", offsetof(ApplySecond__Outracks_Simulator_Bytecode_EnumLiteral__Uno_IO_BinaryWriter, _action),
        "_arg2", offsetof(ApplySecond__Outracks_Simulator_Bytecode_EnumLiteral__Uno_IO_BinaryWriter, _arg2));

    return type;
}

void ApplySecond__Outracks_Simulator_Bytecode_EnumLiteral__Uno_IO_BinaryWriter___ObjInit(ApplySecond__Outracks_Simulator_Bytecode_EnumLiteral__Uno_IO_BinaryWriter* __this, ::uDelegate* action, ::app::Uno::IO::BinaryWriter* arg2)
{
    __this->_action = action;
    __this->_arg2 = arg2;
}

void ApplySecond__Outracks_Simulator_Bytecode_EnumLiteral__Uno_IO_BinaryWriter__Execute(ApplySecond__Outracks_Simulator_Bytecode_EnumLiteral__Uno_IO_BinaryWriter* __this, ::app::Outracks::Simulator::Bytecode::EnumLiteral* arg1)
{
    ::uPtr< ::uDelegate*>(__this->_action)->InvokeVoid< ::app::Outracks::Simulator::Bytecode::EnumLiteral*, ::app::Uno::IO::BinaryWriter*>(arg1, __this->_arg2);
}

ApplySecond__Outracks_Simulator_Bytecode_EnumLiteral__Uno_IO_BinaryWriter* ApplySecond__Outracks_Simulator_Bytecode_EnumLiteral__Uno_IO_BinaryWriter__New_1(::uStatic* __this, ::uDelegate* action, ::app::Uno::IO::BinaryWriter* arg2)
{
    ApplySecond__Outracks_Simulator_Bytecode_EnumLiteral__Uno_IO_BinaryWriter* inst = (ApplySecond__Outracks_Simulator_Bytecode_EnumLiteral__Uno_IO_BinaryWriter*)::uAllocObject(sizeof(ApplySecond__Outracks_Simulator_Bytecode_EnumLiteral__Uno_IO_BinaryWriter), ApplySecond__Outracks_Simulator_Bytecode_EnumLiteral__Uno_IO_BinaryWriter__typeof());
    inst->_ObjInit(action, arg2);
    return inst;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\Outracks.Simulator.Protocol.Uno\0.1.0\Common\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

ApplySecond__Outracks_Simulator_Bytecode_Expression__Uno_IO_BinaryWriter__uType* ApplySecond__Outracks_Simulator_Bytecode_Expression__Uno_IO_BinaryWriter__typeof()
{
    static ::uStaticStrong<ApplySecond__Outracks_Simulator_Bytecode_Expression__Uno_IO_BinaryWriter__uType*> type;
    if (type != NULL) return type;

    type = (ApplySecond__Outracks_Simulator_Bytecode_Expression__Uno_IO_BinaryWriter__uType*)::uAllocClassType(sizeof(ApplySecond__Outracks_Simulator_Bytecode_Expression__Uno_IO_BinaryWriter__uType), "Outracks.Simulator.ApplySecond<Outracks.Simulator.Bytecode.Expression,Uno.IO.BinaryWriter>", false, 0, 2, 0);

    type->SetStrongRefs(
        "_action", offsetof(ApplySecond__Outracks_Simulator_Bytecode_Expression__Uno_IO_BinaryWriter, _action),
        "_arg2", offsetof(ApplySecond__Outracks_Simulator_Bytecode_Expression__Uno_IO_BinaryWriter, _arg2));

    return type;
}

void ApplySecond__Outracks_Simulator_Bytecode_Expression__Uno_IO_BinaryWriter___ObjInit(ApplySecond__Outracks_Simulator_Bytecode_Expression__Uno_IO_BinaryWriter* __this, ::uDelegate* action, ::app::Uno::IO::BinaryWriter* arg2)
{
    __this->_action = action;
    __this->_arg2 = arg2;
}

void ApplySecond__Outracks_Simulator_Bytecode_Expression__Uno_IO_BinaryWriter__Execute(ApplySecond__Outracks_Simulator_Bytecode_Expression__Uno_IO_BinaryWriter* __this, ::app::Outracks::Simulator::Bytecode::Expression* arg1)
{
    ::uPtr< ::uDelegate*>(__this->_action)->InvokeVoid< ::app::Outracks::Simulator::Bytecode::Expression*, ::app::Uno::IO::BinaryWriter*>(arg1, __this->_arg2);
}

ApplySecond__Outracks_Simulator_Bytecode_Expression__Uno_IO_BinaryWriter* ApplySecond__Outracks_Simulator_Bytecode_Expression__Uno_IO_BinaryWriter__New_1(::uStatic* __this, ::uDelegate* action, ::app::Uno::IO::BinaryWriter* arg2)
{
    ApplySecond__Outracks_Simulator_Bytecode_Expression__Uno_IO_BinaryWriter* inst = (ApplySecond__Outracks_Simulator_Bytecode_Expression__Uno_IO_BinaryWriter*)::uAllocObject(sizeof(ApplySecond__Outracks_Simulator_Bytecode_Expression__Uno_IO_BinaryWriter), ApplySecond__Outracks_Simulator_Bytecode_Expression__Uno_IO_BinaryWriter__typeof());
    inst->_ObjInit(action, arg2);
    return inst;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\Outracks.Simulator.Protocol.Uno\0.1.0\Common\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

ApplySecond__Outracks_Simulator_Bytecode_Instantiate__Uno_IO_BinaryWriter__uType* ApplySecond__Outracks_Simulator_Bytecode_Instantiate__Uno_IO_BinaryWriter__typeof()
{
    static ::uStaticStrong<ApplySecond__Outracks_Simulator_Bytecode_Instantiate__Uno_IO_BinaryWriter__uType*> type;
    if (type != NULL) return type;

    type = (ApplySecond__Outracks_Simulator_Bytecode_Instantiate__Uno_IO_BinaryWriter__uType*)::uAllocClassType(sizeof(ApplySecond__Outracks_Simulator_Bytecode_Instantiate__Uno_IO_BinaryWriter__uType), "Outracks.Simulator.ApplySecond<Outracks.Simulator.Bytecode.Instantiate,Uno.IO.BinaryWriter>", false, 0, 2, 0);

    type->SetStrongRefs(
        "_action", offsetof(ApplySecond__Outracks_Simulator_Bytecode_Instantiate__Uno_IO_BinaryWriter, _action),
        "_arg2", offsetof(ApplySecond__Outracks_Simulator_Bytecode_Instantiate__Uno_IO_BinaryWriter, _arg2));

    return type;
}

void ApplySecond__Outracks_Simulator_Bytecode_Instantiate__Uno_IO_BinaryWriter___ObjInit(ApplySecond__Outracks_Simulator_Bytecode_Instantiate__Uno_IO_BinaryWriter* __this, ::uDelegate* action, ::app::Uno::IO::BinaryWriter* arg2)
{
    __this->_action = action;
    __this->_arg2 = arg2;
}

void ApplySecond__Outracks_Simulator_Bytecode_Instantiate__Uno_IO_BinaryWriter__Execute(ApplySecond__Outracks_Simulator_Bytecode_Instantiate__Uno_IO_BinaryWriter* __this, ::app::Outracks::Simulator::Bytecode::Instantiate* arg1)
{
    ::uPtr< ::uDelegate*>(__this->_action)->InvokeVoid< ::app::Outracks::Simulator::Bytecode::Instantiate*, ::app::Uno::IO::BinaryWriter*>(arg1, __this->_arg2);
}

ApplySecond__Outracks_Simulator_Bytecode_Instantiate__Uno_IO_BinaryWriter* ApplySecond__Outracks_Simulator_Bytecode_Instantiate__Uno_IO_BinaryWriter__New_1(::uStatic* __this, ::uDelegate* action, ::app::Uno::IO::BinaryWriter* arg2)
{
    ApplySecond__Outracks_Simulator_Bytecode_Instantiate__Uno_IO_BinaryWriter* inst = (ApplySecond__Outracks_Simulator_Bytecode_Instantiate__Uno_IO_BinaryWriter*)::uAllocObject(sizeof(ApplySecond__Outracks_Simulator_Bytecode_Instantiate__Uno_IO_BinaryWriter), ApplySecond__Outracks_Simulator_Bytecode_Instantiate__Uno_IO_BinaryWriter__typeof());
    inst->_ObjInit(action, arg2);
    return inst;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\Outracks.Simulator.Protocol.Uno\0.1.0\Common\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

ApplySecond__Outracks_Simulator_Bytecode_IsType__Uno_IO_BinaryWriter__uType* ApplySecond__Outracks_Simulator_Bytecode_IsType__Uno_IO_BinaryWriter__typeof()
{
    static ::uStaticStrong<ApplySecond__Outracks_Simulator_Bytecode_IsType__Uno_IO_BinaryWriter__uType*> type;
    if (type != NULL) return type;

    type = (ApplySecond__Outracks_Simulator_Bytecode_IsType__Uno_IO_BinaryWriter__uType*)::uAllocClassType(sizeof(ApplySecond__Outracks_Simulator_Bytecode_IsType__Uno_IO_BinaryWriter__uType), "Outracks.Simulator.ApplySecond<Outracks.Simulator.Bytecode.IsType,Uno.IO.BinaryWriter>", false, 0, 2, 0);

    type->SetStrongRefs(
        "_action", offsetof(ApplySecond__Outracks_Simulator_Bytecode_IsType__Uno_IO_BinaryWriter, _action),
        "_arg2", offsetof(ApplySecond__Outracks_Simulator_Bytecode_IsType__Uno_IO_BinaryWriter, _arg2));

    return type;
}

void ApplySecond__Outracks_Simulator_Bytecode_IsType__Uno_IO_BinaryWriter___ObjInit(ApplySecond__Outracks_Simulator_Bytecode_IsType__Uno_IO_BinaryWriter* __this, ::uDelegate* action, ::app::Uno::IO::BinaryWriter* arg2)
{
    __this->_action = action;
    __this->_arg2 = arg2;
}

void ApplySecond__Outracks_Simulator_Bytecode_IsType__Uno_IO_BinaryWriter__Execute(ApplySecond__Outracks_Simulator_Bytecode_IsType__Uno_IO_BinaryWriter* __this, ::app::Outracks::Simulator::Bytecode::IsType* arg1)
{
    ::uPtr< ::uDelegate*>(__this->_action)->InvokeVoid< ::app::Outracks::Simulator::Bytecode::IsType*, ::app::Uno::IO::BinaryWriter*>(arg1, __this->_arg2);
}

ApplySecond__Outracks_Simulator_Bytecode_IsType__Uno_IO_BinaryWriter* ApplySecond__Outracks_Simulator_Bytecode_IsType__Uno_IO_BinaryWriter__New_1(::uStatic* __this, ::uDelegate* action, ::app::Uno::IO::BinaryWriter* arg2)
{
    ApplySecond__Outracks_Simulator_Bytecode_IsType__Uno_IO_BinaryWriter* inst = (ApplySecond__Outracks_Simulator_Bytecode_IsType__Uno_IO_BinaryWriter*)::uAllocObject(sizeof(ApplySecond__Outracks_Simulator_Bytecode_IsType__Uno_IO_BinaryWriter), ApplySecond__Outracks_Simulator_Bytecode_IsType__Uno_IO_BinaryWriter__typeof());
    inst->_ObjInit(action, arg2);
    return inst;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\Outracks.Simulator.Protocol.Uno\0.1.0\Common\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

ApplySecond__Outracks_Simulator_Bytecode_Lambda__Uno_IO_BinaryWriter__uType* ApplySecond__Outracks_Simulator_Bytecode_Lambda__Uno_IO_BinaryWriter__typeof()
{
    static ::uStaticStrong<ApplySecond__Outracks_Simulator_Bytecode_Lambda__Uno_IO_BinaryWriter__uType*> type;
    if (type != NULL) return type;

    type = (ApplySecond__Outracks_Simulator_Bytecode_Lambda__Uno_IO_BinaryWriter__uType*)::uAllocClassType(sizeof(ApplySecond__Outracks_Simulator_Bytecode_Lambda__Uno_IO_BinaryWriter__uType), "Outracks.Simulator.ApplySecond<Outracks.Simulator.Bytecode.Lambda,Uno.IO.BinaryWriter>", false, 0, 2, 0);

    type->SetStrongRefs(
        "_action", offsetof(ApplySecond__Outracks_Simulator_Bytecode_Lambda__Uno_IO_BinaryWriter, _action),
        "_arg2", offsetof(ApplySecond__Outracks_Simulator_Bytecode_Lambda__Uno_IO_BinaryWriter, _arg2));

    return type;
}

void ApplySecond__Outracks_Simulator_Bytecode_Lambda__Uno_IO_BinaryWriter___ObjInit(ApplySecond__Outracks_Simulator_Bytecode_Lambda__Uno_IO_BinaryWriter* __this, ::uDelegate* action, ::app::Uno::IO::BinaryWriter* arg2)
{
    __this->_action = action;
    __this->_arg2 = arg2;
}

void ApplySecond__Outracks_Simulator_Bytecode_Lambda__Uno_IO_BinaryWriter__Execute(ApplySecond__Outracks_Simulator_Bytecode_Lambda__Uno_IO_BinaryWriter* __this, ::app::Outracks::Simulator::Bytecode::Lambda* arg1)
{
    ::uPtr< ::uDelegate*>(__this->_action)->InvokeVoid< ::app::Outracks::Simulator::Bytecode::Lambda*, ::app::Uno::IO::BinaryWriter*>(arg1, __this->_arg2);
}

ApplySecond__Outracks_Simulator_Bytecode_Lambda__Uno_IO_BinaryWriter* ApplySecond__Outracks_Simulator_Bytecode_Lambda__Uno_IO_BinaryWriter__New_1(::uStatic* __this, ::uDelegate* action, ::app::Uno::IO::BinaryWriter* arg2)
{
    ApplySecond__Outracks_Simulator_Bytecode_Lambda__Uno_IO_BinaryWriter* inst = (ApplySecond__Outracks_Simulator_Bytecode_Lambda__Uno_IO_BinaryWriter*)::uAllocObject(sizeof(ApplySecond__Outracks_Simulator_Bytecode_Lambda__Uno_IO_BinaryWriter), ApplySecond__Outracks_Simulator_Bytecode_Lambda__Uno_IO_BinaryWriter__typeof());
    inst->_ObjInit(action, arg2);
    return inst;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\Outracks.Simulator.Protocol.Uno\0.1.0\Common\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

ApplySecond__Outracks_Simulator_Bytecode_Literal__Uno_IO_BinaryWriter__uType* ApplySecond__Outracks_Simulator_Bytecode_Literal__Uno_IO_BinaryWriter__typeof()
{
    static ::uStaticStrong<ApplySecond__Outracks_Simulator_Bytecode_Literal__Uno_IO_BinaryWriter__uType*> type;
    if (type != NULL) return type;

    type = (ApplySecond__Outracks_Simulator_Bytecode_Literal__Uno_IO_BinaryWriter__uType*)::uAllocClassType(sizeof(ApplySecond__Outracks_Simulator_Bytecode_Literal__Uno_IO_BinaryWriter__uType), "Outracks.Simulator.ApplySecond<Outracks.Simulator.Bytecode.Literal,Uno.IO.BinaryWriter>", false, 0, 2, 0);

    type->SetStrongRefs(
        "_action", offsetof(ApplySecond__Outracks_Simulator_Bytecode_Literal__Uno_IO_BinaryWriter, _action),
        "_arg2", offsetof(ApplySecond__Outracks_Simulator_Bytecode_Literal__Uno_IO_BinaryWriter, _arg2));

    return type;
}

void ApplySecond__Outracks_Simulator_Bytecode_Literal__Uno_IO_BinaryWriter___ObjInit(ApplySecond__Outracks_Simulator_Bytecode_Literal__Uno_IO_BinaryWriter* __this, ::uDelegate* action, ::app::Uno::IO::BinaryWriter* arg2)
{
    __this->_action = action;
    __this->_arg2 = arg2;
}

void ApplySecond__Outracks_Simulator_Bytecode_Literal__Uno_IO_BinaryWriter__Execute(ApplySecond__Outracks_Simulator_Bytecode_Literal__Uno_IO_BinaryWriter* __this, ::app::Outracks::Simulator::Bytecode::Literal* arg1)
{
    ::uPtr< ::uDelegate*>(__this->_action)->InvokeVoid< ::app::Outracks::Simulator::Bytecode::Literal*, ::app::Uno::IO::BinaryWriter*>(arg1, __this->_arg2);
}

ApplySecond__Outracks_Simulator_Bytecode_Literal__Uno_IO_BinaryWriter* ApplySecond__Outracks_Simulator_Bytecode_Literal__Uno_IO_BinaryWriter__New_1(::uStatic* __this, ::uDelegate* action, ::app::Uno::IO::BinaryWriter* arg2)
{
    ApplySecond__Outracks_Simulator_Bytecode_Literal__Uno_IO_BinaryWriter* inst = (ApplySecond__Outracks_Simulator_Bytecode_Literal__Uno_IO_BinaryWriter*)::uAllocObject(sizeof(ApplySecond__Outracks_Simulator_Bytecode_Literal__Uno_IO_BinaryWriter), ApplySecond__Outracks_Simulator_Bytecode_Literal__Uno_IO_BinaryWriter__typeof());
    inst->_ObjInit(action, arg2);
    return inst;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\Outracks.Simulator.Protocol.Uno\0.1.0\Common\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

ApplySecond__Outracks_Simulator_Bytecode_LogicalOr__Uno_IO_BinaryWriter__uType* ApplySecond__Outracks_Simulator_Bytecode_LogicalOr__Uno_IO_BinaryWriter__typeof()
{
    static ::uStaticStrong<ApplySecond__Outracks_Simulator_Bytecode_LogicalOr__Uno_IO_BinaryWriter__uType*> type;
    if (type != NULL) return type;

    type = (ApplySecond__Outracks_Simulator_Bytecode_LogicalOr__Uno_IO_BinaryWriter__uType*)::uAllocClassType(sizeof(ApplySecond__Outracks_Simulator_Bytecode_LogicalOr__Uno_IO_BinaryWriter__uType), "Outracks.Simulator.ApplySecond<Outracks.Simulator.Bytecode.LogicalOr,Uno.IO.BinaryWriter>", false, 0, 2, 0);

    type->SetStrongRefs(
        "_action", offsetof(ApplySecond__Outracks_Simulator_Bytecode_LogicalOr__Uno_IO_BinaryWriter, _action),
        "_arg2", offsetof(ApplySecond__Outracks_Simulator_Bytecode_LogicalOr__Uno_IO_BinaryWriter, _arg2));

    return type;
}

void ApplySecond__Outracks_Simulator_Bytecode_LogicalOr__Uno_IO_BinaryWriter___ObjInit(ApplySecond__Outracks_Simulator_Bytecode_LogicalOr__Uno_IO_BinaryWriter* __this, ::uDelegate* action, ::app::Uno::IO::BinaryWriter* arg2)
{
    __this->_action = action;
    __this->_arg2 = arg2;
}

void ApplySecond__Outracks_Simulator_Bytecode_LogicalOr__Uno_IO_BinaryWriter__Execute(ApplySecond__Outracks_Simulator_Bytecode_LogicalOr__Uno_IO_BinaryWriter* __this, ::app::Outracks::Simulator::Bytecode::LogicalOr* arg1)
{
    ::uPtr< ::uDelegate*>(__this->_action)->InvokeVoid< ::app::Outracks::Simulator::Bytecode::LogicalOr*, ::app::Uno::IO::BinaryWriter*>(arg1, __this->_arg2);
}

ApplySecond__Outracks_Simulator_Bytecode_LogicalOr__Uno_IO_BinaryWriter* ApplySecond__Outracks_Simulator_Bytecode_LogicalOr__Uno_IO_BinaryWriter__New_1(::uStatic* __this, ::uDelegate* action, ::app::Uno::IO::BinaryWriter* arg2)
{
    ApplySecond__Outracks_Simulator_Bytecode_LogicalOr__Uno_IO_BinaryWriter* inst = (ApplySecond__Outracks_Simulator_Bytecode_LogicalOr__Uno_IO_BinaryWriter*)::uAllocObject(sizeof(ApplySecond__Outracks_Simulator_Bytecode_LogicalOr__Uno_IO_BinaryWriter), ApplySecond__Outracks_Simulator_Bytecode_LogicalOr__Uno_IO_BinaryWriter__typeof());
    inst->_ObjInit(action, arg2);
    return inst;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\Outracks.Simulator.Protocol.Uno\0.1.0\Common\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

ApplySecond__Outracks_Simulator_Bytecode_MethodGroup__Uno_IO_BinaryWriter__uType* ApplySecond__Outracks_Simulator_Bytecode_MethodGroup__Uno_IO_BinaryWriter__typeof()
{
    static ::uStaticStrong<ApplySecond__Outracks_Simulator_Bytecode_MethodGroup__Uno_IO_BinaryWriter__uType*> type;
    if (type != NULL) return type;

    type = (ApplySecond__Outracks_Simulator_Bytecode_MethodGroup__Uno_IO_BinaryWriter__uType*)::uAllocClassType(sizeof(ApplySecond__Outracks_Simulator_Bytecode_MethodGroup__Uno_IO_BinaryWriter__uType), "Outracks.Simulator.ApplySecond<Outracks.Simulator.Bytecode.MethodGroup,Uno.IO.BinaryWriter>", false, 0, 2, 0);

    type->SetStrongRefs(
        "_action", offsetof(ApplySecond__Outracks_Simulator_Bytecode_MethodGroup__Uno_IO_BinaryWriter, _action),
        "_arg2", offsetof(ApplySecond__Outracks_Simulator_Bytecode_MethodGroup__Uno_IO_BinaryWriter, _arg2));

    return type;
}

void ApplySecond__Outracks_Simulator_Bytecode_MethodGroup__Uno_IO_BinaryWriter___ObjInit(ApplySecond__Outracks_Simulator_Bytecode_MethodGroup__Uno_IO_BinaryWriter* __this, ::uDelegate* action, ::app::Uno::IO::BinaryWriter* arg2)
{
    __this->_action = action;
    __this->_arg2 = arg2;
}

void ApplySecond__Outracks_Simulator_Bytecode_MethodGroup__Uno_IO_BinaryWriter__Execute(ApplySecond__Outracks_Simulator_Bytecode_MethodGroup__Uno_IO_BinaryWriter* __this, ::app::Outracks::Simulator::Bytecode::MethodGroup* arg1)
{
    ::uPtr< ::uDelegate*>(__this->_action)->InvokeVoid< ::app::Outracks::Simulator::Bytecode::MethodGroup*, ::app::Uno::IO::BinaryWriter*>(arg1, __this->_arg2);
}

ApplySecond__Outracks_Simulator_Bytecode_MethodGroup__Uno_IO_BinaryWriter* ApplySecond__Outracks_Simulator_Bytecode_MethodGroup__Uno_IO_BinaryWriter__New_1(::uStatic* __this, ::uDelegate* action, ::app::Uno::IO::BinaryWriter* arg2)
{
    ApplySecond__Outracks_Simulator_Bytecode_MethodGroup__Uno_IO_BinaryWriter* inst = (ApplySecond__Outracks_Simulator_Bytecode_MethodGroup__Uno_IO_BinaryWriter*)::uAllocObject(sizeof(ApplySecond__Outracks_Simulator_Bytecode_MethodGroup__Uno_IO_BinaryWriter), ApplySecond__Outracks_Simulator_Bytecode_MethodGroup__Uno_IO_BinaryWriter__typeof());
    inst->_ObjInit(action, arg2);
    return inst;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\Outracks.Simulator.Protocol.Uno\0.1.0\Common\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

ApplySecond__Outracks_Simulator_Bytecode_NoOperation__Uno_IO_BinaryWriter__uType* ApplySecond__Outracks_Simulator_Bytecode_NoOperation__Uno_IO_BinaryWriter__typeof()
{
    static ::uStaticStrong<ApplySecond__Outracks_Simulator_Bytecode_NoOperation__Uno_IO_BinaryWriter__uType*> type;
    if (type != NULL) return type;

    type = (ApplySecond__Outracks_Simulator_Bytecode_NoOperation__Uno_IO_BinaryWriter__uType*)::uAllocClassType(sizeof(ApplySecond__Outracks_Simulator_Bytecode_NoOperation__Uno_IO_BinaryWriter__uType), "Outracks.Simulator.ApplySecond<Outracks.Simulator.Bytecode.NoOperation,Uno.IO.BinaryWriter>", false, 0, 2, 0);

    type->SetStrongRefs(
        "_action", offsetof(ApplySecond__Outracks_Simulator_Bytecode_NoOperation__Uno_IO_BinaryWriter, _action),
        "_arg2", offsetof(ApplySecond__Outracks_Simulator_Bytecode_NoOperation__Uno_IO_BinaryWriter, _arg2));

    return type;
}

void ApplySecond__Outracks_Simulator_Bytecode_NoOperation__Uno_IO_BinaryWriter___ObjInit(ApplySecond__Outracks_Simulator_Bytecode_NoOperation__Uno_IO_BinaryWriter* __this, ::uDelegate* action, ::app::Uno::IO::BinaryWriter* arg2)
{
    __this->_action = action;
    __this->_arg2 = arg2;
}

void ApplySecond__Outracks_Simulator_Bytecode_NoOperation__Uno_IO_BinaryWriter__Execute(ApplySecond__Outracks_Simulator_Bytecode_NoOperation__Uno_IO_BinaryWriter* __this, ::app::Outracks::Simulator::Bytecode::NoOperation* arg1)
{
    ::uPtr< ::uDelegate*>(__this->_action)->InvokeVoid< ::app::Outracks::Simulator::Bytecode::NoOperation*, ::app::Uno::IO::BinaryWriter*>(arg1, __this->_arg2);
}

ApplySecond__Outracks_Simulator_Bytecode_NoOperation__Uno_IO_BinaryWriter* ApplySecond__Outracks_Simulator_Bytecode_NoOperation__Uno_IO_BinaryWriter__New_1(::uStatic* __this, ::uDelegate* action, ::app::Uno::IO::BinaryWriter* arg2)
{
    ApplySecond__Outracks_Simulator_Bytecode_NoOperation__Uno_IO_BinaryWriter* inst = (ApplySecond__Outracks_Simulator_Bytecode_NoOperation__Uno_IO_BinaryWriter*)::uAllocObject(sizeof(ApplySecond__Outracks_Simulator_Bytecode_NoOperation__Uno_IO_BinaryWriter), ApplySecond__Outracks_Simulator_Bytecode_NoOperation__Uno_IO_BinaryWriter__typeof());
    inst->_ObjInit(action, arg2);
    return inst;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\Outracks.Simulator.Protocol.Uno\0.1.0\Common\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

ApplySecond__Outracks_Simulator_Bytecode_NumberLiteral__Uno_IO_BinaryWriter__uType* ApplySecond__Outracks_Simulator_Bytecode_NumberLiteral__Uno_IO_BinaryWriter__typeof()
{
    static ::uStaticStrong<ApplySecond__Outracks_Simulator_Bytecode_NumberLiteral__Uno_IO_BinaryWriter__uType*> type;
    if (type != NULL) return type;

    type = (ApplySecond__Outracks_Simulator_Bytecode_NumberLiteral__Uno_IO_BinaryWriter__uType*)::uAllocClassType(sizeof(ApplySecond__Outracks_Simulator_Bytecode_NumberLiteral__Uno_IO_BinaryWriter__uType), "Outracks.Simulator.ApplySecond<Outracks.Simulator.Bytecode.NumberLiteral,Uno.IO.BinaryWriter>", false, 0, 2, 0);

    type->SetStrongRefs(
        "_action", offsetof(ApplySecond__Outracks_Simulator_Bytecode_NumberLiteral__Uno_IO_BinaryWriter, _action),
        "_arg2", offsetof(ApplySecond__Outracks_Simulator_Bytecode_NumberLiteral__Uno_IO_BinaryWriter, _arg2));

    return type;
}

void ApplySecond__Outracks_Simulator_Bytecode_NumberLiteral__Uno_IO_BinaryWriter___ObjInit(ApplySecond__Outracks_Simulator_Bytecode_NumberLiteral__Uno_IO_BinaryWriter* __this, ::uDelegate* action, ::app::Uno::IO::BinaryWriter* arg2)
{
    __this->_action = action;
    __this->_arg2 = arg2;
}

void ApplySecond__Outracks_Simulator_Bytecode_NumberLiteral__Uno_IO_BinaryWriter__Execute(ApplySecond__Outracks_Simulator_Bytecode_NumberLiteral__Uno_IO_BinaryWriter* __this, ::app::Outracks::Simulator::Bytecode::NumberLiteral* arg1)
{
    ::uPtr< ::uDelegate*>(__this->_action)->InvokeVoid< ::app::Outracks::Simulator::Bytecode::NumberLiteral*, ::app::Uno::IO::BinaryWriter*>(arg1, __this->_arg2);
}

ApplySecond__Outracks_Simulator_Bytecode_NumberLiteral__Uno_IO_BinaryWriter* ApplySecond__Outracks_Simulator_Bytecode_NumberLiteral__Uno_IO_BinaryWriter__New_1(::uStatic* __this, ::uDelegate* action, ::app::Uno::IO::BinaryWriter* arg2)
{
    ApplySecond__Outracks_Simulator_Bytecode_NumberLiteral__Uno_IO_BinaryWriter* inst = (ApplySecond__Outracks_Simulator_Bytecode_NumberLiteral__Uno_IO_BinaryWriter*)::uAllocObject(sizeof(ApplySecond__Outracks_Simulator_Bytecode_NumberLiteral__Uno_IO_BinaryWriter), ApplySecond__Outracks_Simulator_Bytecode_NumberLiteral__Uno_IO_BinaryWriter__typeof());
    inst->_ObjInit(action, arg2);
    return inst;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\Outracks.Simulator.Protocol.Uno\0.1.0\Common\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

ApplySecond__Outracks_Simulator_Bytecode_ReadProperty__Uno_IO_BinaryWriter__uType* ApplySecond__Outracks_Simulator_Bytecode_ReadProperty__Uno_IO_BinaryWriter__typeof()
{
    static ::uStaticStrong<ApplySecond__Outracks_Simulator_Bytecode_ReadProperty__Uno_IO_BinaryWriter__uType*> type;
    if (type != NULL) return type;

    type = (ApplySecond__Outracks_Simulator_Bytecode_ReadProperty__Uno_IO_BinaryWriter__uType*)::uAllocClassType(sizeof(ApplySecond__Outracks_Simulator_Bytecode_ReadProperty__Uno_IO_BinaryWriter__uType), "Outracks.Simulator.ApplySecond<Outracks.Simulator.Bytecode.ReadProperty,Uno.IO.BinaryWriter>", false, 0, 2, 0);

    type->SetStrongRefs(
        "_action", offsetof(ApplySecond__Outracks_Simulator_Bytecode_ReadProperty__Uno_IO_BinaryWriter, _action),
        "_arg2", offsetof(ApplySecond__Outracks_Simulator_Bytecode_ReadProperty__Uno_IO_BinaryWriter, _arg2));

    return type;
}

void ApplySecond__Outracks_Simulator_Bytecode_ReadProperty__Uno_IO_BinaryWriter___ObjInit(ApplySecond__Outracks_Simulator_Bytecode_ReadProperty__Uno_IO_BinaryWriter* __this, ::uDelegate* action, ::app::Uno::IO::BinaryWriter* arg2)
{
    __this->_action = action;
    __this->_arg2 = arg2;
}

void ApplySecond__Outracks_Simulator_Bytecode_ReadProperty__Uno_IO_BinaryWriter__Execute(ApplySecond__Outracks_Simulator_Bytecode_ReadProperty__Uno_IO_BinaryWriter* __this, ::app::Outracks::Simulator::Bytecode::ReadProperty* arg1)
{
    ::uPtr< ::uDelegate*>(__this->_action)->InvokeVoid< ::app::Outracks::Simulator::Bytecode::ReadProperty*, ::app::Uno::IO::BinaryWriter*>(arg1, __this->_arg2);
}

ApplySecond__Outracks_Simulator_Bytecode_ReadProperty__Uno_IO_BinaryWriter* ApplySecond__Outracks_Simulator_Bytecode_ReadProperty__Uno_IO_BinaryWriter__New_1(::uStatic* __this, ::uDelegate* action, ::app::Uno::IO::BinaryWriter* arg2)
{
    ApplySecond__Outracks_Simulator_Bytecode_ReadProperty__Uno_IO_BinaryWriter* inst = (ApplySecond__Outracks_Simulator_Bytecode_ReadProperty__Uno_IO_BinaryWriter*)::uAllocObject(sizeof(ApplySecond__Outracks_Simulator_Bytecode_ReadProperty__Uno_IO_BinaryWriter), ApplySecond__Outracks_Simulator_Bytecode_ReadProperty__Uno_IO_BinaryWriter__typeof());
    inst->_ObjInit(action, arg2);
    return inst;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\Outracks.Simulator.Protocol.Uno\0.1.0\Common\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

ApplySecond__Outracks_Simulator_Bytecode_ReadStaticField__Uno_IO_BinaryWriter__uType* ApplySecond__Outracks_Simulator_Bytecode_ReadStaticField__Uno_IO_BinaryWriter__typeof()
{
    static ::uStaticStrong<ApplySecond__Outracks_Simulator_Bytecode_ReadStaticField__Uno_IO_BinaryWriter__uType*> type;
    if (type != NULL) return type;

    type = (ApplySecond__Outracks_Simulator_Bytecode_ReadStaticField__Uno_IO_BinaryWriter__uType*)::uAllocClassType(sizeof(ApplySecond__Outracks_Simulator_Bytecode_ReadStaticField__Uno_IO_BinaryWriter__uType), "Outracks.Simulator.ApplySecond<Outracks.Simulator.Bytecode.ReadStaticField,Uno.IO.BinaryWriter>", false, 0, 2, 0);

    type->SetStrongRefs(
        "_action", offsetof(ApplySecond__Outracks_Simulator_Bytecode_ReadStaticField__Uno_IO_BinaryWriter, _action),
        "_arg2", offsetof(ApplySecond__Outracks_Simulator_Bytecode_ReadStaticField__Uno_IO_BinaryWriter, _arg2));

    return type;
}

void ApplySecond__Outracks_Simulator_Bytecode_ReadStaticField__Uno_IO_BinaryWriter___ObjInit(ApplySecond__Outracks_Simulator_Bytecode_ReadStaticField__Uno_IO_BinaryWriter* __this, ::uDelegate* action, ::app::Uno::IO::BinaryWriter* arg2)
{
    __this->_action = action;
    __this->_arg2 = arg2;
}

void ApplySecond__Outracks_Simulator_Bytecode_ReadStaticField__Uno_IO_BinaryWriter__Execute(ApplySecond__Outracks_Simulator_Bytecode_ReadStaticField__Uno_IO_BinaryWriter* __this, ::app::Outracks::Simulator::Bytecode::ReadStaticField* arg1)
{
    ::uPtr< ::uDelegate*>(__this->_action)->InvokeVoid< ::app::Outracks::Simulator::Bytecode::ReadStaticField*, ::app::Uno::IO::BinaryWriter*>(arg1, __this->_arg2);
}

ApplySecond__Outracks_Simulator_Bytecode_ReadStaticField__Uno_IO_BinaryWriter* ApplySecond__Outracks_Simulator_Bytecode_ReadStaticField__Uno_IO_BinaryWriter__New_1(::uStatic* __this, ::uDelegate* action, ::app::Uno::IO::BinaryWriter* arg2)
{
    ApplySecond__Outracks_Simulator_Bytecode_ReadStaticField__Uno_IO_BinaryWriter* inst = (ApplySecond__Outracks_Simulator_Bytecode_ReadStaticField__Uno_IO_BinaryWriter*)::uAllocObject(sizeof(ApplySecond__Outracks_Simulator_Bytecode_ReadStaticField__Uno_IO_BinaryWriter), ApplySecond__Outracks_Simulator_Bytecode_ReadStaticField__Uno_IO_BinaryWriter__typeof());
    inst->_ObjInit(action, arg2);
    return inst;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\Outracks.Simulator.Protocol.Uno\0.1.0\Common\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

ApplySecond__Outracks_Simulator_Bytecode_ReadVariable__Uno_IO_BinaryWriter__uType* ApplySecond__Outracks_Simulator_Bytecode_ReadVariable__Uno_IO_BinaryWriter__typeof()
{
    static ::uStaticStrong<ApplySecond__Outracks_Simulator_Bytecode_ReadVariable__Uno_IO_BinaryWriter__uType*> type;
    if (type != NULL) return type;

    type = (ApplySecond__Outracks_Simulator_Bytecode_ReadVariable__Uno_IO_BinaryWriter__uType*)::uAllocClassType(sizeof(ApplySecond__Outracks_Simulator_Bytecode_ReadVariable__Uno_IO_BinaryWriter__uType), "Outracks.Simulator.ApplySecond<Outracks.Simulator.Bytecode.ReadVariable,Uno.IO.BinaryWriter>", false, 0, 2, 0);

    type->SetStrongRefs(
        "_action", offsetof(ApplySecond__Outracks_Simulator_Bytecode_ReadVariable__Uno_IO_BinaryWriter, _action),
        "_arg2", offsetof(ApplySecond__Outracks_Simulator_Bytecode_ReadVariable__Uno_IO_BinaryWriter, _arg2));

    return type;
}

void ApplySecond__Outracks_Simulator_Bytecode_ReadVariable__Uno_IO_BinaryWriter___ObjInit(ApplySecond__Outracks_Simulator_Bytecode_ReadVariable__Uno_IO_BinaryWriter* __this, ::uDelegate* action, ::app::Uno::IO::BinaryWriter* arg2)
{
    __this->_action = action;
    __this->_arg2 = arg2;
}

void ApplySecond__Outracks_Simulator_Bytecode_ReadVariable__Uno_IO_BinaryWriter__Execute(ApplySecond__Outracks_Simulator_Bytecode_ReadVariable__Uno_IO_BinaryWriter* __this, ::app::Outracks::Simulator::Bytecode::ReadVariable* arg1)
{
    ::uPtr< ::uDelegate*>(__this->_action)->InvokeVoid< ::app::Outracks::Simulator::Bytecode::ReadVariable*, ::app::Uno::IO::BinaryWriter*>(arg1, __this->_arg2);
}

ApplySecond__Outracks_Simulator_Bytecode_ReadVariable__Uno_IO_BinaryWriter* ApplySecond__Outracks_Simulator_Bytecode_ReadVariable__Uno_IO_BinaryWriter__New_1(::uStatic* __this, ::uDelegate* action, ::app::Uno::IO::BinaryWriter* arg2)
{
    ApplySecond__Outracks_Simulator_Bytecode_ReadVariable__Uno_IO_BinaryWriter* inst = (ApplySecond__Outracks_Simulator_Bytecode_ReadVariable__Uno_IO_BinaryWriter*)::uAllocObject(sizeof(ApplySecond__Outracks_Simulator_Bytecode_ReadVariable__Uno_IO_BinaryWriter), ApplySecond__Outracks_Simulator_Bytecode_ReadVariable__Uno_IO_BinaryWriter__typeof());
    inst->_ObjInit(action, arg2);
    return inst;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\Outracks.Simulator.Protocol.Uno\0.1.0\Common\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

ApplySecond__Outracks_Simulator_Bytecode_RemoveEventHandler__Uno_IO_BinaryWriter__uType* ApplySecond__Outracks_Simulator_Bytecode_RemoveEventHandler__Uno_IO_BinaryWriter__typeof()
{
    static ::uStaticStrong<ApplySecond__Outracks_Simulator_Bytecode_RemoveEventHandler__Uno_IO_BinaryWriter__uType*> type;
    if (type != NULL) return type;

    type = (ApplySecond__Outracks_Simulator_Bytecode_RemoveEventHandler__Uno_IO_BinaryWriter__uType*)::uAllocClassType(sizeof(ApplySecond__Outracks_Simulator_Bytecode_RemoveEventHandler__Uno_IO_BinaryWriter__uType), "Outracks.Simulator.ApplySecond<Outracks.Simulator.Bytecode.RemoveEventHandler,Uno.IO.BinaryWriter>", false, 0, 2, 0);

    type->SetStrongRefs(
        "_action", offsetof(ApplySecond__Outracks_Simulator_Bytecode_RemoveEventHandler__Uno_IO_BinaryWriter, _action),
        "_arg2", offsetof(ApplySecond__Outracks_Simulator_Bytecode_RemoveEventHandler__Uno_IO_BinaryWriter, _arg2));

    return type;
}

void ApplySecond__Outracks_Simulator_Bytecode_RemoveEventHandler__Uno_IO_BinaryWriter___ObjInit(ApplySecond__Outracks_Simulator_Bytecode_RemoveEventHandler__Uno_IO_BinaryWriter* __this, ::uDelegate* action, ::app::Uno::IO::BinaryWriter* arg2)
{
    __this->_action = action;
    __this->_arg2 = arg2;
}

void ApplySecond__Outracks_Simulator_Bytecode_RemoveEventHandler__Uno_IO_BinaryWriter__Execute(ApplySecond__Outracks_Simulator_Bytecode_RemoveEventHandler__Uno_IO_BinaryWriter* __this, ::app::Outracks::Simulator::Bytecode::RemoveEventHandler* arg1)
{
    ::uPtr< ::uDelegate*>(__this->_action)->InvokeVoid< ::app::Outracks::Simulator::Bytecode::RemoveEventHandler*, ::app::Uno::IO::BinaryWriter*>(arg1, __this->_arg2);
}

ApplySecond__Outracks_Simulator_Bytecode_RemoveEventHandler__Uno_IO_BinaryWriter* ApplySecond__Outracks_Simulator_Bytecode_RemoveEventHandler__Uno_IO_BinaryWriter__New_1(::uStatic* __this, ::uDelegate* action, ::app::Uno::IO::BinaryWriter* arg2)
{
    ApplySecond__Outracks_Simulator_Bytecode_RemoveEventHandler__Uno_IO_BinaryWriter* inst = (ApplySecond__Outracks_Simulator_Bytecode_RemoveEventHandler__Uno_IO_BinaryWriter*)::uAllocObject(sizeof(ApplySecond__Outracks_Simulator_Bytecode_RemoveEventHandler__Uno_IO_BinaryWriter), ApplySecond__Outracks_Simulator_Bytecode_RemoveEventHandler__Uno_IO_BinaryWriter__typeof());
    inst->_ObjInit(action, arg2);
    return inst;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\Outracks.Simulator.Protocol.Uno\0.1.0\Common\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

ApplySecond__Outracks_Simulator_Bytecode_Return__Uno_IO_BinaryWriter__uType* ApplySecond__Outracks_Simulator_Bytecode_Return__Uno_IO_BinaryWriter__typeof()
{
    static ::uStaticStrong<ApplySecond__Outracks_Simulator_Bytecode_Return__Uno_IO_BinaryWriter__uType*> type;
    if (type != NULL) return type;

    type = (ApplySecond__Outracks_Simulator_Bytecode_Return__Uno_IO_BinaryWriter__uType*)::uAllocClassType(sizeof(ApplySecond__Outracks_Simulator_Bytecode_Return__Uno_IO_BinaryWriter__uType), "Outracks.Simulator.ApplySecond<Outracks.Simulator.Bytecode.Return,Uno.IO.BinaryWriter>", false, 0, 2, 0);

    type->SetStrongRefs(
        "_action", offsetof(ApplySecond__Outracks_Simulator_Bytecode_Return__Uno_IO_BinaryWriter, _action),
        "_arg2", offsetof(ApplySecond__Outracks_Simulator_Bytecode_Return__Uno_IO_BinaryWriter, _arg2));

    return type;
}

void ApplySecond__Outracks_Simulator_Bytecode_Return__Uno_IO_BinaryWriter___ObjInit(ApplySecond__Outracks_Simulator_Bytecode_Return__Uno_IO_BinaryWriter* __this, ::uDelegate* action, ::app::Uno::IO::BinaryWriter* arg2)
{
    __this->_action = action;
    __this->_arg2 = arg2;
}

void ApplySecond__Outracks_Simulator_Bytecode_Return__Uno_IO_BinaryWriter__Execute(ApplySecond__Outracks_Simulator_Bytecode_Return__Uno_IO_BinaryWriter* __this, ::app::Outracks::Simulator::Bytecode::Return* arg1)
{
    ::uPtr< ::uDelegate*>(__this->_action)->InvokeVoid< ::app::Outracks::Simulator::Bytecode::Return*, ::app::Uno::IO::BinaryWriter*>(arg1, __this->_arg2);
}

ApplySecond__Outracks_Simulator_Bytecode_Return__Uno_IO_BinaryWriter* ApplySecond__Outracks_Simulator_Bytecode_Return__Uno_IO_BinaryWriter__New_1(::uStatic* __this, ::uDelegate* action, ::app::Uno::IO::BinaryWriter* arg2)
{
    ApplySecond__Outracks_Simulator_Bytecode_Return__Uno_IO_BinaryWriter* inst = (ApplySecond__Outracks_Simulator_Bytecode_Return__Uno_IO_BinaryWriter*)::uAllocObject(sizeof(ApplySecond__Outracks_Simulator_Bytecode_Return__Uno_IO_BinaryWriter), ApplySecond__Outracks_Simulator_Bytecode_Return__Uno_IO_BinaryWriter__typeof());
    inst->_ObjInit(action, arg2);
    return inst;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\Outracks.Simulator.Protocol.Uno\0.1.0\Common\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

ApplySecond__Outracks_Simulator_Bytecode_StringLiteral__Uno_IO_BinaryWriter__uType* ApplySecond__Outracks_Simulator_Bytecode_StringLiteral__Uno_IO_BinaryWriter__typeof()
{
    static ::uStaticStrong<ApplySecond__Outracks_Simulator_Bytecode_StringLiteral__Uno_IO_BinaryWriter__uType*> type;
    if (type != NULL) return type;

    type = (ApplySecond__Outracks_Simulator_Bytecode_StringLiteral__Uno_IO_BinaryWriter__uType*)::uAllocClassType(sizeof(ApplySecond__Outracks_Simulator_Bytecode_StringLiteral__Uno_IO_BinaryWriter__uType), "Outracks.Simulator.ApplySecond<Outracks.Simulator.Bytecode.StringLiteral,Uno.IO.BinaryWriter>", false, 0, 2, 0);

    type->SetStrongRefs(
        "_action", offsetof(ApplySecond__Outracks_Simulator_Bytecode_StringLiteral__Uno_IO_BinaryWriter, _action),
        "_arg2", offsetof(ApplySecond__Outracks_Simulator_Bytecode_StringLiteral__Uno_IO_BinaryWriter, _arg2));

    return type;
}

void ApplySecond__Outracks_Simulator_Bytecode_StringLiteral__Uno_IO_BinaryWriter___ObjInit(ApplySecond__Outracks_Simulator_Bytecode_StringLiteral__Uno_IO_BinaryWriter* __this, ::uDelegate* action, ::app::Uno::IO::BinaryWriter* arg2)
{
    __this->_action = action;
    __this->_arg2 = arg2;
}

void ApplySecond__Outracks_Simulator_Bytecode_StringLiteral__Uno_IO_BinaryWriter__Execute(ApplySecond__Outracks_Simulator_Bytecode_StringLiteral__Uno_IO_BinaryWriter* __this, ::app::Outracks::Simulator::Bytecode::StringLiteral* arg1)
{
    ::uPtr< ::uDelegate*>(__this->_action)->InvokeVoid< ::app::Outracks::Simulator::Bytecode::StringLiteral*, ::app::Uno::IO::BinaryWriter*>(arg1, __this->_arg2);
}

ApplySecond__Outracks_Simulator_Bytecode_StringLiteral__Uno_IO_BinaryWriter* ApplySecond__Outracks_Simulator_Bytecode_StringLiteral__Uno_IO_BinaryWriter__New_1(::uStatic* __this, ::uDelegate* action, ::app::Uno::IO::BinaryWriter* arg2)
{
    ApplySecond__Outracks_Simulator_Bytecode_StringLiteral__Uno_IO_BinaryWriter* inst = (ApplySecond__Outracks_Simulator_Bytecode_StringLiteral__Uno_IO_BinaryWriter*)::uAllocObject(sizeof(ApplySecond__Outracks_Simulator_Bytecode_StringLiteral__Uno_IO_BinaryWriter), ApplySecond__Outracks_Simulator_Bytecode_StringLiteral__Uno_IO_BinaryWriter__typeof());
    inst->_ObjInit(action, arg2);
    return inst;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\Outracks.Simulator.Protocol.Uno\0.1.0\Common\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

ApplySecond__Outracks_Simulator_Bytecode_WriteProperty__Uno_IO_BinaryWriter__uType* ApplySecond__Outracks_Simulator_Bytecode_WriteProperty__Uno_IO_BinaryWriter__typeof()
{
    static ::uStaticStrong<ApplySecond__Outracks_Simulator_Bytecode_WriteProperty__Uno_IO_BinaryWriter__uType*> type;
    if (type != NULL) return type;

    type = (ApplySecond__Outracks_Simulator_Bytecode_WriteProperty__Uno_IO_BinaryWriter__uType*)::uAllocClassType(sizeof(ApplySecond__Outracks_Simulator_Bytecode_WriteProperty__Uno_IO_BinaryWriter__uType), "Outracks.Simulator.ApplySecond<Outracks.Simulator.Bytecode.WriteProperty,Uno.IO.BinaryWriter>", false, 0, 2, 0);

    type->SetStrongRefs(
        "_action", offsetof(ApplySecond__Outracks_Simulator_Bytecode_WriteProperty__Uno_IO_BinaryWriter, _action),
        "_arg2", offsetof(ApplySecond__Outracks_Simulator_Bytecode_WriteProperty__Uno_IO_BinaryWriter, _arg2));

    return type;
}

void ApplySecond__Outracks_Simulator_Bytecode_WriteProperty__Uno_IO_BinaryWriter___ObjInit(ApplySecond__Outracks_Simulator_Bytecode_WriteProperty__Uno_IO_BinaryWriter* __this, ::uDelegate* action, ::app::Uno::IO::BinaryWriter* arg2)
{
    __this->_action = action;
    __this->_arg2 = arg2;
}

void ApplySecond__Outracks_Simulator_Bytecode_WriteProperty__Uno_IO_BinaryWriter__Execute(ApplySecond__Outracks_Simulator_Bytecode_WriteProperty__Uno_IO_BinaryWriter* __this, ::app::Outracks::Simulator::Bytecode::WriteProperty* arg1)
{
    ::uPtr< ::uDelegate*>(__this->_action)->InvokeVoid< ::app::Outracks::Simulator::Bytecode::WriteProperty*, ::app::Uno::IO::BinaryWriter*>(arg1, __this->_arg2);
}

ApplySecond__Outracks_Simulator_Bytecode_WriteProperty__Uno_IO_BinaryWriter* ApplySecond__Outracks_Simulator_Bytecode_WriteProperty__Uno_IO_BinaryWriter__New_1(::uStatic* __this, ::uDelegate* action, ::app::Uno::IO::BinaryWriter* arg2)
{
    ApplySecond__Outracks_Simulator_Bytecode_WriteProperty__Uno_IO_BinaryWriter* inst = (ApplySecond__Outracks_Simulator_Bytecode_WriteProperty__Uno_IO_BinaryWriter*)::uAllocObject(sizeof(ApplySecond__Outracks_Simulator_Bytecode_WriteProperty__Uno_IO_BinaryWriter), ApplySecond__Outracks_Simulator_Bytecode_WriteProperty__Uno_IO_BinaryWriter__typeof());
    inst->_ObjInit(action, arg2);
    return inst;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\Outracks.Simulator.Protocol.Uno\0.1.0\Common\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

ApplySecond__Outracks_Simulator_Protocol_DebugLog__Uno_IO_BinaryWriter__uType* ApplySecond__Outracks_Simulator_Protocol_DebugLog__Uno_IO_BinaryWriter__typeof()
{
    static ::uStaticStrong<ApplySecond__Outracks_Simulator_Protocol_DebugLog__Uno_IO_BinaryWriter__uType*> type;
    if (type != NULL) return type;

    type = (ApplySecond__Outracks_Simulator_Protocol_DebugLog__Uno_IO_BinaryWriter__uType*)::uAllocClassType(sizeof(ApplySecond__Outracks_Simulator_Protocol_DebugLog__Uno_IO_BinaryWriter__uType), "Outracks.Simulator.ApplySecond<Outracks.Simulator.Protocol.DebugLog,Uno.IO.BinaryWriter>", false, 0, 2, 0);

    type->SetStrongRefs(
        "_action", offsetof(ApplySecond__Outracks_Simulator_Protocol_DebugLog__Uno_IO_BinaryWriter, _action),
        "_arg2", offsetof(ApplySecond__Outracks_Simulator_Protocol_DebugLog__Uno_IO_BinaryWriter, _arg2));

    return type;
}

void ApplySecond__Outracks_Simulator_Protocol_DebugLog__Uno_IO_BinaryWriter___ObjInit(ApplySecond__Outracks_Simulator_Protocol_DebugLog__Uno_IO_BinaryWriter* __this, ::uDelegate* action, ::app::Uno::IO::BinaryWriter* arg2)
{
    __this->_action = action;
    __this->_arg2 = arg2;
}

void ApplySecond__Outracks_Simulator_Protocol_DebugLog__Uno_IO_BinaryWriter__Execute(ApplySecond__Outracks_Simulator_Protocol_DebugLog__Uno_IO_BinaryWriter* __this, ::app::Outracks::Simulator::Protocol::DebugLog* arg1)
{
    ::uPtr< ::uDelegate*>(__this->_action)->InvokeVoid< ::app::Outracks::Simulator::Protocol::DebugLog*, ::app::Uno::IO::BinaryWriter*>(arg1, __this->_arg2);
}

ApplySecond__Outracks_Simulator_Protocol_DebugLog__Uno_IO_BinaryWriter* ApplySecond__Outracks_Simulator_Protocol_DebugLog__Uno_IO_BinaryWriter__New_1(::uStatic* __this, ::uDelegate* action, ::app::Uno::IO::BinaryWriter* arg2)
{
    ApplySecond__Outracks_Simulator_Protocol_DebugLog__Uno_IO_BinaryWriter* inst = (ApplySecond__Outracks_Simulator_Protocol_DebugLog__Uno_IO_BinaryWriter*)::uAllocObject(sizeof(ApplySecond__Outracks_Simulator_Protocol_DebugLog__Uno_IO_BinaryWriter), ApplySecond__Outracks_Simulator_Protocol_DebugLog__Uno_IO_BinaryWriter__typeof());
    inst->_ObjInit(action, arg2);
    return inst;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\Outracks.Simulator.Protocol.Uno\0.1.0\Common\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

ApplySecond__Outracks_Simulator_Protocol_Error__Uno_IO_BinaryWriter__uType* ApplySecond__Outracks_Simulator_Protocol_Error__Uno_IO_BinaryWriter__typeof()
{
    static ::uStaticStrong<ApplySecond__Outracks_Simulator_Protocol_Error__Uno_IO_BinaryWriter__uType*> type;
    if (type != NULL) return type;

    type = (ApplySecond__Outracks_Simulator_Protocol_Error__Uno_IO_BinaryWriter__uType*)::uAllocClassType(sizeof(ApplySecond__Outracks_Simulator_Protocol_Error__Uno_IO_BinaryWriter__uType), "Outracks.Simulator.ApplySecond<Outracks.Simulator.Protocol.Error,Uno.IO.BinaryWriter>", false, 0, 2, 0);

    type->SetStrongRefs(
        "_action", offsetof(ApplySecond__Outracks_Simulator_Protocol_Error__Uno_IO_BinaryWriter, _action),
        "_arg2", offsetof(ApplySecond__Outracks_Simulator_Protocol_Error__Uno_IO_BinaryWriter, _arg2));

    return type;
}

void ApplySecond__Outracks_Simulator_Protocol_Error__Uno_IO_BinaryWriter___ObjInit(ApplySecond__Outracks_Simulator_Protocol_Error__Uno_IO_BinaryWriter* __this, ::uDelegate* action, ::app::Uno::IO::BinaryWriter* arg2)
{
    __this->_action = action;
    __this->_arg2 = arg2;
}

void ApplySecond__Outracks_Simulator_Protocol_Error__Uno_IO_BinaryWriter__Execute(ApplySecond__Outracks_Simulator_Protocol_Error__Uno_IO_BinaryWriter* __this, ::app::Outracks::Simulator::Protocol::Error* arg1)
{
    ::uPtr< ::uDelegate*>(__this->_action)->InvokeVoid< ::app::Outracks::Simulator::Protocol::Error*, ::app::Uno::IO::BinaryWriter*>(arg1, __this->_arg2);
}

ApplySecond__Outracks_Simulator_Protocol_Error__Uno_IO_BinaryWriter* ApplySecond__Outracks_Simulator_Protocol_Error__Uno_IO_BinaryWriter__New_1(::uStatic* __this, ::uDelegate* action, ::app::Uno::IO::BinaryWriter* arg2)
{
    ApplySecond__Outracks_Simulator_Protocol_Error__Uno_IO_BinaryWriter* inst = (ApplySecond__Outracks_Simulator_Protocol_Error__Uno_IO_BinaryWriter*)::uAllocObject(sizeof(ApplySecond__Outracks_Simulator_Protocol_Error__Uno_IO_BinaryWriter), ApplySecond__Outracks_Simulator_Protocol_Error__Uno_IO_BinaryWriter__typeof());
    inst->_ObjInit(action, arg2);
    return inst;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\Outracks.Simulator.Protocol.Uno\0.1.0\Common\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

ApplySecond__Outracks_Simulator_Protocol_Execute__Uno_IO_BinaryWriter__uType* ApplySecond__Outracks_Simulator_Protocol_Execute__Uno_IO_BinaryWriter__typeof()
{
    static ::uStaticStrong<ApplySecond__Outracks_Simulator_Protocol_Execute__Uno_IO_BinaryWriter__uType*> type;
    if (type != NULL) return type;

    type = (ApplySecond__Outracks_Simulator_Protocol_Execute__Uno_IO_BinaryWriter__uType*)::uAllocClassType(sizeof(ApplySecond__Outracks_Simulator_Protocol_Execute__Uno_IO_BinaryWriter__uType), "Outracks.Simulator.ApplySecond<Outracks.Simulator.Protocol.Execute,Uno.IO.BinaryWriter>", false, 0, 2, 0);

    type->SetStrongRefs(
        "_action", offsetof(ApplySecond__Outracks_Simulator_Protocol_Execute__Uno_IO_BinaryWriter, _action),
        "_arg2", offsetof(ApplySecond__Outracks_Simulator_Protocol_Execute__Uno_IO_BinaryWriter, _arg2));

    return type;
}

void ApplySecond__Outracks_Simulator_Protocol_Execute__Uno_IO_BinaryWriter___ObjInit(ApplySecond__Outracks_Simulator_Protocol_Execute__Uno_IO_BinaryWriter* __this, ::uDelegate* action, ::app::Uno::IO::BinaryWriter* arg2)
{
    __this->_action = action;
    __this->_arg2 = arg2;
}

void ApplySecond__Outracks_Simulator_Protocol_Execute__Uno_IO_BinaryWriter__Execute(ApplySecond__Outracks_Simulator_Protocol_Execute__Uno_IO_BinaryWriter* __this, ::app::Outracks::Simulator::Protocol::Execute* arg1)
{
    ::uPtr< ::uDelegate*>(__this->_action)->InvokeVoid< ::app::Outracks::Simulator::Protocol::Execute*, ::app::Uno::IO::BinaryWriter*>(arg1, __this->_arg2);
}

ApplySecond__Outracks_Simulator_Protocol_Execute__Uno_IO_BinaryWriter* ApplySecond__Outracks_Simulator_Protocol_Execute__Uno_IO_BinaryWriter__New_1(::uStatic* __this, ::uDelegate* action, ::app::Uno::IO::BinaryWriter* arg2)
{
    ApplySecond__Outracks_Simulator_Protocol_Execute__Uno_IO_BinaryWriter* inst = (ApplySecond__Outracks_Simulator_Protocol_Execute__Uno_IO_BinaryWriter*)::uAllocObject(sizeof(ApplySecond__Outracks_Simulator_Protocol_Execute__Uno_IO_BinaryWriter), ApplySecond__Outracks_Simulator_Protocol_Execute__Uno_IO_BinaryWriter__typeof());
    inst->_ObjInit(action, arg2);
    return inst;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\Outracks.Simulator.Protocol.Uno\0.1.0\Common\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

ApplySecond__Outracks_Simulator_Protocol_RegisterName__Uno_IO_BinaryWriter__uType* ApplySecond__Outracks_Simulator_Protocol_RegisterName__Uno_IO_BinaryWriter__typeof()
{
    static ::uStaticStrong<ApplySecond__Outracks_Simulator_Protocol_RegisterName__Uno_IO_BinaryWriter__uType*> type;
    if (type != NULL) return type;

    type = (ApplySecond__Outracks_Simulator_Protocol_RegisterName__Uno_IO_BinaryWriter__uType*)::uAllocClassType(sizeof(ApplySecond__Outracks_Simulator_Protocol_RegisterName__Uno_IO_BinaryWriter__uType), "Outracks.Simulator.ApplySecond<Outracks.Simulator.Protocol.RegisterName,Uno.IO.BinaryWriter>", false, 0, 2, 0);

    type->SetStrongRefs(
        "_action", offsetof(ApplySecond__Outracks_Simulator_Protocol_RegisterName__Uno_IO_BinaryWriter, _action),
        "_arg2", offsetof(ApplySecond__Outracks_Simulator_Protocol_RegisterName__Uno_IO_BinaryWriter, _arg2));

    return type;
}

void ApplySecond__Outracks_Simulator_Protocol_RegisterName__Uno_IO_BinaryWriter___ObjInit(ApplySecond__Outracks_Simulator_Protocol_RegisterName__Uno_IO_BinaryWriter* __this, ::uDelegate* action, ::app::Uno::IO::BinaryWriter* arg2)
{
    __this->_action = action;
    __this->_arg2 = arg2;
}

void ApplySecond__Outracks_Simulator_Protocol_RegisterName__Uno_IO_BinaryWriter__Execute(ApplySecond__Outracks_Simulator_Protocol_RegisterName__Uno_IO_BinaryWriter* __this, ::app::Outracks::Simulator::Protocol::RegisterName* arg1)
{
    ::uPtr< ::uDelegate*>(__this->_action)->InvokeVoid< ::app::Outracks::Simulator::Protocol::RegisterName*, ::app::Uno::IO::BinaryWriter*>(arg1, __this->_arg2);
}

ApplySecond__Outracks_Simulator_Protocol_RegisterName__Uno_IO_BinaryWriter* ApplySecond__Outracks_Simulator_Protocol_RegisterName__Uno_IO_BinaryWriter__New_1(::uStatic* __this, ::uDelegate* action, ::app::Uno::IO::BinaryWriter* arg2)
{
    ApplySecond__Outracks_Simulator_Protocol_RegisterName__Uno_IO_BinaryWriter* inst = (ApplySecond__Outracks_Simulator_Protocol_RegisterName__Uno_IO_BinaryWriter*)::uAllocObject(sizeof(ApplySecond__Outracks_Simulator_Protocol_RegisterName__Uno_IO_BinaryWriter), ApplySecond__Outracks_Simulator_Protocol_RegisterName__Uno_IO_BinaryWriter__typeof());
    inst->_ObjInit(action, arg2);
    return inst;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\Outracks.Simulator.Protocol.Uno\0.1.0\Common\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

ApplySecond__Outracks_Simulator_Protocol_Reify__Uno_IO_BinaryWriter__uType* ApplySecond__Outracks_Simulator_Protocol_Reify__Uno_IO_BinaryWriter__typeof()
{
    static ::uStaticStrong<ApplySecond__Outracks_Simulator_Protocol_Reify__Uno_IO_BinaryWriter__uType*> type;
    if (type != NULL) return type;

    type = (ApplySecond__Outracks_Simulator_Protocol_Reify__Uno_IO_BinaryWriter__uType*)::uAllocClassType(sizeof(ApplySecond__Outracks_Simulator_Protocol_Reify__Uno_IO_BinaryWriter__uType), "Outracks.Simulator.ApplySecond<Outracks.Simulator.Protocol.Reify,Uno.IO.BinaryWriter>", false, 0, 2, 0);

    type->SetStrongRefs(
        "_action", offsetof(ApplySecond__Outracks_Simulator_Protocol_Reify__Uno_IO_BinaryWriter, _action),
        "_arg2", offsetof(ApplySecond__Outracks_Simulator_Protocol_Reify__Uno_IO_BinaryWriter, _arg2));

    return type;
}

void ApplySecond__Outracks_Simulator_Protocol_Reify__Uno_IO_BinaryWriter___ObjInit(ApplySecond__Outracks_Simulator_Protocol_Reify__Uno_IO_BinaryWriter* __this, ::uDelegate* action, ::app::Uno::IO::BinaryWriter* arg2)
{
    __this->_action = action;
    __this->_arg2 = arg2;
}

void ApplySecond__Outracks_Simulator_Protocol_Reify__Uno_IO_BinaryWriter__Execute(ApplySecond__Outracks_Simulator_Protocol_Reify__Uno_IO_BinaryWriter* __this, ::app::Outracks::Simulator::Protocol::Reify* arg1)
{
    ::uPtr< ::uDelegate*>(__this->_action)->InvokeVoid< ::app::Outracks::Simulator::Protocol::Reify*, ::app::Uno::IO::BinaryWriter*>(arg1, __this->_arg2);
}

ApplySecond__Outracks_Simulator_Protocol_Reify__Uno_IO_BinaryWriter* ApplySecond__Outracks_Simulator_Protocol_Reify__Uno_IO_BinaryWriter__New_1(::uStatic* __this, ::uDelegate* action, ::app::Uno::IO::BinaryWriter* arg2)
{
    ApplySecond__Outracks_Simulator_Protocol_Reify__Uno_IO_BinaryWriter* inst = (ApplySecond__Outracks_Simulator_Protocol_Reify__Uno_IO_BinaryWriter*)::uAllocObject(sizeof(ApplySecond__Outracks_Simulator_Protocol_Reify__Uno_IO_BinaryWriter), ApplySecond__Outracks_Simulator_Protocol_Reify__Uno_IO_BinaryWriter__typeof());
    inst->_ObjInit(action, arg2);
    return inst;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\Outracks.Simulator.Protocol.Uno\0.1.0\Common\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

ApplySecond__Outracks_Simulator_Protocol_UnhandledException__Uno_IO_BinaryWriter__uType* ApplySecond__Outracks_Simulator_Protocol_UnhandledException__Uno_IO_BinaryWriter__typeof()
{
    static ::uStaticStrong<ApplySecond__Outracks_Simulator_Protocol_UnhandledException__Uno_IO_BinaryWriter__uType*> type;
    if (type != NULL) return type;

    type = (ApplySecond__Outracks_Simulator_Protocol_UnhandledException__Uno_IO_BinaryWriter__uType*)::uAllocClassType(sizeof(ApplySecond__Outracks_Simulator_Protocol_UnhandledException__Uno_IO_BinaryWriter__uType), "Outracks.Simulator.ApplySecond<Outracks.Simulator.Protocol.UnhandledException,Uno.IO.BinaryWriter>", false, 0, 2, 0);

    type->SetStrongRefs(
        "_action", offsetof(ApplySecond__Outracks_Simulator_Protocol_UnhandledException__Uno_IO_BinaryWriter, _action),
        "_arg2", offsetof(ApplySecond__Outracks_Simulator_Protocol_UnhandledException__Uno_IO_BinaryWriter, _arg2));

    return type;
}

void ApplySecond__Outracks_Simulator_Protocol_UnhandledException__Uno_IO_BinaryWriter___ObjInit(ApplySecond__Outracks_Simulator_Protocol_UnhandledException__Uno_IO_BinaryWriter* __this, ::uDelegate* action, ::app::Uno::IO::BinaryWriter* arg2)
{
    __this->_action = action;
    __this->_arg2 = arg2;
}

void ApplySecond__Outracks_Simulator_Protocol_UnhandledException__Uno_IO_BinaryWriter__Execute(ApplySecond__Outracks_Simulator_Protocol_UnhandledException__Uno_IO_BinaryWriter* __this, ::app::Outracks::Simulator::Protocol::UnhandledException* arg1)
{
    ::uPtr< ::uDelegate*>(__this->_action)->InvokeVoid< ::app::Outracks::Simulator::Protocol::UnhandledException*, ::app::Uno::IO::BinaryWriter*>(arg1, __this->_arg2);
}

ApplySecond__Outracks_Simulator_Protocol_UnhandledException__Uno_IO_BinaryWriter* ApplySecond__Outracks_Simulator_Protocol_UnhandledException__Uno_IO_BinaryWriter__New_1(::uStatic* __this, ::uDelegate* action, ::app::Uno::IO::BinaryWriter* arg2)
{
    ApplySecond__Outracks_Simulator_Protocol_UnhandledException__Uno_IO_BinaryWriter* inst = (ApplySecond__Outracks_Simulator_Protocol_UnhandledException__Uno_IO_BinaryWriter*)::uAllocObject(sizeof(ApplySecond__Outracks_Simulator_Protocol_UnhandledException__Uno_IO_BinaryWriter), ApplySecond__Outracks_Simulator_Protocol_UnhandledException__Uno_IO_BinaryWriter__typeof());
    inst->_ObjInit(action, arg2);
    return inst;
}

}}}
