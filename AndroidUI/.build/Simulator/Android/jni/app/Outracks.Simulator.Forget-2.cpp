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
#include <app/Outracks.Simulator.Forget__Outracks_Simulator_Bytecode_AddEvent-eb7a519f.h>
#include <app/Outracks.Simulator.Forget__Outracks_Simulator_Bytecode_BlobLiteral__char.h>
#include <app/Outracks.Simulator.Forget__Outracks_Simulator_Bytecode_BooleanL-32961633.h>
#include <app/Outracks.Simulator.Forget__Outracks_Simulator_Bytecode_CallDyna-3e9af010.h>
#include <app/Outracks.Simulator.Forget__Outracks_Simulator_Bytecode_CallLambda__char.h>
#include <app/Outracks.Simulator.Forget__Outracks_Simulator_Bytecode_CallStat-b288eb07.h>
#include <app/Outracks.Simulator.Forget__Outracks_Simulator_Bytecode_EnumLiteral__char.h>
#include <app/Outracks.Simulator.Forget__Outracks_Simulator_Bytecode_Expression__char.h>
#include <app/Outracks.Simulator.Forget__Outracks_Simulator_Bytecode_Instantiate__char.h>
#include <app/Outracks.Simulator.Forget__Outracks_Simulator_Bytecode_IsType__char.h>
#include <app/Outracks.Simulator.Forget__Outracks_Simulator_Bytecode_Lambda__char.h>
#include <app/Outracks.Simulator.Forget__Outracks_Simulator_Bytecode_Literal__char.h>
#include <app/Outracks.Simulator.Forget__Outracks_Simulator_Bytecode_LogicalOr__char.h>
#include <app/Outracks.Simulator.Forget__Outracks_Simulator_Bytecode_MethodGroup__char.h>
#include <app/Outracks.Simulator.Forget__Outracks_Simulator_Bytecode_NoOperation__char.h>
#include <app/Outracks.Simulator.Forget__Outracks_Simulator_Bytecode_NumberLi-c1d8d7ad.h>
#include <app/Outracks.Simulator.Forget__Outracks_Simulator_Bytecode_ReadProp-a7837fbd.h>
#include <app/Outracks.Simulator.Forget__Outracks_Simulator_Bytecode_ReadStat-b538c371.h>
#include <app/Outracks.Simulator.Forget__Outracks_Simulator_Bytecode_ReadVari-74d05b4.h>
#include <app/Outracks.Simulator.Forget__Outracks_Simulator_Bytecode_RemoveEv-77fff473.h>
#include <app/Outracks.Simulator.Forget__Outracks_Simulator_Bytecode_Return__char.h>
#include <app/Outracks.Simulator.Forget__Outracks_Simulator_Bytecode_StringLi-4878b9e6.h>
#include <app/Outracks.Simulator.Forget__Outracks_Simulator_Bytecode_WritePro-f853db10.h>
#include <app/Outracks.Simulator.Forget__Outracks_Simulator_Protocol_DebugLog__char.h>
#include <app/Outracks.Simulator.Forget__Outracks_Simulator_Protocol_Error__char.h>
#include <app/Outracks.Simulator.Forget__Outracks_Simulator_Protocol_Execute__char.h>
#include <app/Outracks.Simulator.Forget__Outracks_Simulator_Protocol_Register-9a76da07.h>
#include <app/Outracks.Simulator.Forget__Outracks_Simulator_Protocol_Reify__char.h>
#include <app/Outracks.Simulator.Forget__Outracks_Simulator_Protocol_Unhandle-2594f5b9.h>
#include <app/Outracks.Simulator.Protocol.DebugLog.h>
#include <app/Outracks.Simulator.Protocol.Error.h>
#include <app/Outracks.Simulator.Protocol.Execute.h>
#include <app/Outracks.Simulator.Protocol.RegisterName.h>
#include <app/Outracks.Simulator.Protocol.Reify.h>
#include <app/Outracks.Simulator.Protocol.UnhandledException.h>
#include <app/Uno.Char.h>

namespace app {
namespace Outracks {
namespace Simulator {

// This file was generated based on 'C:\ProgramData\Uno\Packages\Outracks.Simulator.Protocol.Uno\0.1.0\Common\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

Forget__Outracks_Simulator_Bytecode_AddEventHandler__char__uType* Forget__Outracks_Simulator_Bytecode_AddEventHandler__char__typeof()
{
    static ::uStaticStrong<Forget__Outracks_Simulator_Bytecode_AddEventHandler__char__uType*> type;
    if (type != NULL) return type;

    type = (Forget__Outracks_Simulator_Bytecode_AddEventHandler__char__uType*)::uAllocClassType(sizeof(Forget__Outracks_Simulator_Bytecode_AddEventHandler__char__uType), "Outracks.Simulator.Forget<Outracks.Simulator.Bytecode.AddEventHandler,char>", false, 0, 0, 0);

    return type;
}

void Forget__Outracks_Simulator_Bytecode_AddEventHandler__char___ObjInit(Forget__Outracks_Simulator_Bytecode_AddEventHandler__char* __this, ::uChar result)
{
    __this->_result = result;
}

::uChar Forget__Outracks_Simulator_Bytecode_AddEventHandler__char__Execute(Forget__Outracks_Simulator_Bytecode_AddEventHandler__char* __this, ::app::Outracks::Simulator::Bytecode::AddEventHandler* _)
{
    return __this->_result;
}

Forget__Outracks_Simulator_Bytecode_AddEventHandler__char* Forget__Outracks_Simulator_Bytecode_AddEventHandler__char__New_1(::uStatic* __this, ::uChar result)
{
    Forget__Outracks_Simulator_Bytecode_AddEventHandler__char* inst = (Forget__Outracks_Simulator_Bytecode_AddEventHandler__char*)::uAllocObject(sizeof(Forget__Outracks_Simulator_Bytecode_AddEventHandler__char), Forget__Outracks_Simulator_Bytecode_AddEventHandler__char__typeof());
    inst->_ObjInit(result);
    return inst;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\Outracks.Simulator.Protocol.Uno\0.1.0\Common\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

Forget__Outracks_Simulator_Bytecode_BlobLiteral__char__uType* Forget__Outracks_Simulator_Bytecode_BlobLiteral__char__typeof()
{
    static ::uStaticStrong<Forget__Outracks_Simulator_Bytecode_BlobLiteral__char__uType*> type;
    if (type != NULL) return type;

    type = (Forget__Outracks_Simulator_Bytecode_BlobLiteral__char__uType*)::uAllocClassType(sizeof(Forget__Outracks_Simulator_Bytecode_BlobLiteral__char__uType), "Outracks.Simulator.Forget<Outracks.Simulator.Bytecode.BlobLiteral,char>", false, 0, 0, 0);

    return type;
}

void Forget__Outracks_Simulator_Bytecode_BlobLiteral__char___ObjInit(Forget__Outracks_Simulator_Bytecode_BlobLiteral__char* __this, ::uChar result)
{
    __this->_result = result;
}

::uChar Forget__Outracks_Simulator_Bytecode_BlobLiteral__char__Execute(Forget__Outracks_Simulator_Bytecode_BlobLiteral__char* __this, ::app::Outracks::Simulator::Bytecode::BlobLiteral* _)
{
    return __this->_result;
}

Forget__Outracks_Simulator_Bytecode_BlobLiteral__char* Forget__Outracks_Simulator_Bytecode_BlobLiteral__char__New_1(::uStatic* __this, ::uChar result)
{
    Forget__Outracks_Simulator_Bytecode_BlobLiteral__char* inst = (Forget__Outracks_Simulator_Bytecode_BlobLiteral__char*)::uAllocObject(sizeof(Forget__Outracks_Simulator_Bytecode_BlobLiteral__char), Forget__Outracks_Simulator_Bytecode_BlobLiteral__char__typeof());
    inst->_ObjInit(result);
    return inst;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\Outracks.Simulator.Protocol.Uno\0.1.0\Common\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

Forget__Outracks_Simulator_Bytecode_BooleanLiteral__char__uType* Forget__Outracks_Simulator_Bytecode_BooleanLiteral__char__typeof()
{
    static ::uStaticStrong<Forget__Outracks_Simulator_Bytecode_BooleanLiteral__char__uType*> type;
    if (type != NULL) return type;

    type = (Forget__Outracks_Simulator_Bytecode_BooleanLiteral__char__uType*)::uAllocClassType(sizeof(Forget__Outracks_Simulator_Bytecode_BooleanLiteral__char__uType), "Outracks.Simulator.Forget<Outracks.Simulator.Bytecode.BooleanLiteral,char>", false, 0, 0, 0);

    return type;
}

void Forget__Outracks_Simulator_Bytecode_BooleanLiteral__char___ObjInit(Forget__Outracks_Simulator_Bytecode_BooleanLiteral__char* __this, ::uChar result)
{
    __this->_result = result;
}

::uChar Forget__Outracks_Simulator_Bytecode_BooleanLiteral__char__Execute(Forget__Outracks_Simulator_Bytecode_BooleanLiteral__char* __this, ::app::Outracks::Simulator::Bytecode::BooleanLiteral* _)
{
    return __this->_result;
}

Forget__Outracks_Simulator_Bytecode_BooleanLiteral__char* Forget__Outracks_Simulator_Bytecode_BooleanLiteral__char__New_1(::uStatic* __this, ::uChar result)
{
    Forget__Outracks_Simulator_Bytecode_BooleanLiteral__char* inst = (Forget__Outracks_Simulator_Bytecode_BooleanLiteral__char*)::uAllocObject(sizeof(Forget__Outracks_Simulator_Bytecode_BooleanLiteral__char), Forget__Outracks_Simulator_Bytecode_BooleanLiteral__char__typeof());
    inst->_ObjInit(result);
    return inst;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\Outracks.Simulator.Protocol.Uno\0.1.0\Common\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

Forget__Outracks_Simulator_Bytecode_CallDynamicMethod__char__uType* Forget__Outracks_Simulator_Bytecode_CallDynamicMethod__char__typeof()
{
    static ::uStaticStrong<Forget__Outracks_Simulator_Bytecode_CallDynamicMethod__char__uType*> type;
    if (type != NULL) return type;

    type = (Forget__Outracks_Simulator_Bytecode_CallDynamicMethod__char__uType*)::uAllocClassType(sizeof(Forget__Outracks_Simulator_Bytecode_CallDynamicMethod__char__uType), "Outracks.Simulator.Forget<Outracks.Simulator.Bytecode.CallDynamicMethod,char>", false, 0, 0, 0);

    return type;
}

void Forget__Outracks_Simulator_Bytecode_CallDynamicMethod__char___ObjInit(Forget__Outracks_Simulator_Bytecode_CallDynamicMethod__char* __this, ::uChar result)
{
    __this->_result = result;
}

::uChar Forget__Outracks_Simulator_Bytecode_CallDynamicMethod__char__Execute(Forget__Outracks_Simulator_Bytecode_CallDynamicMethod__char* __this, ::app::Outracks::Simulator::Bytecode::CallDynamicMethod* _)
{
    return __this->_result;
}

Forget__Outracks_Simulator_Bytecode_CallDynamicMethod__char* Forget__Outracks_Simulator_Bytecode_CallDynamicMethod__char__New_1(::uStatic* __this, ::uChar result)
{
    Forget__Outracks_Simulator_Bytecode_CallDynamicMethod__char* inst = (Forget__Outracks_Simulator_Bytecode_CallDynamicMethod__char*)::uAllocObject(sizeof(Forget__Outracks_Simulator_Bytecode_CallDynamicMethod__char), Forget__Outracks_Simulator_Bytecode_CallDynamicMethod__char__typeof());
    inst->_ObjInit(result);
    return inst;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\Outracks.Simulator.Protocol.Uno\0.1.0\Common\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

Forget__Outracks_Simulator_Bytecode_CallLambda__char__uType* Forget__Outracks_Simulator_Bytecode_CallLambda__char__typeof()
{
    static ::uStaticStrong<Forget__Outracks_Simulator_Bytecode_CallLambda__char__uType*> type;
    if (type != NULL) return type;

    type = (Forget__Outracks_Simulator_Bytecode_CallLambda__char__uType*)::uAllocClassType(sizeof(Forget__Outracks_Simulator_Bytecode_CallLambda__char__uType), "Outracks.Simulator.Forget<Outracks.Simulator.Bytecode.CallLambda,char>", false, 0, 0, 0);

    return type;
}

void Forget__Outracks_Simulator_Bytecode_CallLambda__char___ObjInit(Forget__Outracks_Simulator_Bytecode_CallLambda__char* __this, ::uChar result)
{
    __this->_result = result;
}

::uChar Forget__Outracks_Simulator_Bytecode_CallLambda__char__Execute(Forget__Outracks_Simulator_Bytecode_CallLambda__char* __this, ::app::Outracks::Simulator::Bytecode::CallLambda* _)
{
    return __this->_result;
}

Forget__Outracks_Simulator_Bytecode_CallLambda__char* Forget__Outracks_Simulator_Bytecode_CallLambda__char__New_1(::uStatic* __this, ::uChar result)
{
    Forget__Outracks_Simulator_Bytecode_CallLambda__char* inst = (Forget__Outracks_Simulator_Bytecode_CallLambda__char*)::uAllocObject(sizeof(Forget__Outracks_Simulator_Bytecode_CallLambda__char), Forget__Outracks_Simulator_Bytecode_CallLambda__char__typeof());
    inst->_ObjInit(result);
    return inst;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\Outracks.Simulator.Protocol.Uno\0.1.0\Common\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

Forget__Outracks_Simulator_Bytecode_CallStaticMethod__char__uType* Forget__Outracks_Simulator_Bytecode_CallStaticMethod__char__typeof()
{
    static ::uStaticStrong<Forget__Outracks_Simulator_Bytecode_CallStaticMethod__char__uType*> type;
    if (type != NULL) return type;

    type = (Forget__Outracks_Simulator_Bytecode_CallStaticMethod__char__uType*)::uAllocClassType(sizeof(Forget__Outracks_Simulator_Bytecode_CallStaticMethod__char__uType), "Outracks.Simulator.Forget<Outracks.Simulator.Bytecode.CallStaticMethod,char>", false, 0, 0, 0);

    return type;
}

void Forget__Outracks_Simulator_Bytecode_CallStaticMethod__char___ObjInit(Forget__Outracks_Simulator_Bytecode_CallStaticMethod__char* __this, ::uChar result)
{
    __this->_result = result;
}

::uChar Forget__Outracks_Simulator_Bytecode_CallStaticMethod__char__Execute(Forget__Outracks_Simulator_Bytecode_CallStaticMethod__char* __this, ::app::Outracks::Simulator::Bytecode::CallStaticMethod* _)
{
    return __this->_result;
}

Forget__Outracks_Simulator_Bytecode_CallStaticMethod__char* Forget__Outracks_Simulator_Bytecode_CallStaticMethod__char__New_1(::uStatic* __this, ::uChar result)
{
    Forget__Outracks_Simulator_Bytecode_CallStaticMethod__char* inst = (Forget__Outracks_Simulator_Bytecode_CallStaticMethod__char*)::uAllocObject(sizeof(Forget__Outracks_Simulator_Bytecode_CallStaticMethod__char), Forget__Outracks_Simulator_Bytecode_CallStaticMethod__char__typeof());
    inst->_ObjInit(result);
    return inst;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\Outracks.Simulator.Protocol.Uno\0.1.0\Common\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

Forget__Outracks_Simulator_Bytecode_EnumLiteral__char__uType* Forget__Outracks_Simulator_Bytecode_EnumLiteral__char__typeof()
{
    static ::uStaticStrong<Forget__Outracks_Simulator_Bytecode_EnumLiteral__char__uType*> type;
    if (type != NULL) return type;

    type = (Forget__Outracks_Simulator_Bytecode_EnumLiteral__char__uType*)::uAllocClassType(sizeof(Forget__Outracks_Simulator_Bytecode_EnumLiteral__char__uType), "Outracks.Simulator.Forget<Outracks.Simulator.Bytecode.EnumLiteral,char>", false, 0, 0, 0);

    return type;
}

void Forget__Outracks_Simulator_Bytecode_EnumLiteral__char___ObjInit(Forget__Outracks_Simulator_Bytecode_EnumLiteral__char* __this, ::uChar result)
{
    __this->_result = result;
}

::uChar Forget__Outracks_Simulator_Bytecode_EnumLiteral__char__Execute(Forget__Outracks_Simulator_Bytecode_EnumLiteral__char* __this, ::app::Outracks::Simulator::Bytecode::EnumLiteral* _)
{
    return __this->_result;
}

Forget__Outracks_Simulator_Bytecode_EnumLiteral__char* Forget__Outracks_Simulator_Bytecode_EnumLiteral__char__New_1(::uStatic* __this, ::uChar result)
{
    Forget__Outracks_Simulator_Bytecode_EnumLiteral__char* inst = (Forget__Outracks_Simulator_Bytecode_EnumLiteral__char*)::uAllocObject(sizeof(Forget__Outracks_Simulator_Bytecode_EnumLiteral__char), Forget__Outracks_Simulator_Bytecode_EnumLiteral__char__typeof());
    inst->_ObjInit(result);
    return inst;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\Outracks.Simulator.Protocol.Uno\0.1.0\Common\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

Forget__Outracks_Simulator_Bytecode_Expression__char__uType* Forget__Outracks_Simulator_Bytecode_Expression__char__typeof()
{
    static ::uStaticStrong<Forget__Outracks_Simulator_Bytecode_Expression__char__uType*> type;
    if (type != NULL) return type;

    type = (Forget__Outracks_Simulator_Bytecode_Expression__char__uType*)::uAllocClassType(sizeof(Forget__Outracks_Simulator_Bytecode_Expression__char__uType), "Outracks.Simulator.Forget<Outracks.Simulator.Bytecode.Expression,char>", false, 0, 0, 0);

    return type;
}

void Forget__Outracks_Simulator_Bytecode_Expression__char___ObjInit(Forget__Outracks_Simulator_Bytecode_Expression__char* __this, ::uChar result)
{
    __this->_result = result;
}

::uChar Forget__Outracks_Simulator_Bytecode_Expression__char__Execute(Forget__Outracks_Simulator_Bytecode_Expression__char* __this, ::app::Outracks::Simulator::Bytecode::Expression* _)
{
    return __this->_result;
}

Forget__Outracks_Simulator_Bytecode_Expression__char* Forget__Outracks_Simulator_Bytecode_Expression__char__New_1(::uStatic* __this, ::uChar result)
{
    Forget__Outracks_Simulator_Bytecode_Expression__char* inst = (Forget__Outracks_Simulator_Bytecode_Expression__char*)::uAllocObject(sizeof(Forget__Outracks_Simulator_Bytecode_Expression__char), Forget__Outracks_Simulator_Bytecode_Expression__char__typeof());
    inst->_ObjInit(result);
    return inst;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\Outracks.Simulator.Protocol.Uno\0.1.0\Common\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

Forget__Outracks_Simulator_Bytecode_Instantiate__char__uType* Forget__Outracks_Simulator_Bytecode_Instantiate__char__typeof()
{
    static ::uStaticStrong<Forget__Outracks_Simulator_Bytecode_Instantiate__char__uType*> type;
    if (type != NULL) return type;

    type = (Forget__Outracks_Simulator_Bytecode_Instantiate__char__uType*)::uAllocClassType(sizeof(Forget__Outracks_Simulator_Bytecode_Instantiate__char__uType), "Outracks.Simulator.Forget<Outracks.Simulator.Bytecode.Instantiate,char>", false, 0, 0, 0);

    return type;
}

void Forget__Outracks_Simulator_Bytecode_Instantiate__char___ObjInit(Forget__Outracks_Simulator_Bytecode_Instantiate__char* __this, ::uChar result)
{
    __this->_result = result;
}

::uChar Forget__Outracks_Simulator_Bytecode_Instantiate__char__Execute(Forget__Outracks_Simulator_Bytecode_Instantiate__char* __this, ::app::Outracks::Simulator::Bytecode::Instantiate* _)
{
    return __this->_result;
}

Forget__Outracks_Simulator_Bytecode_Instantiate__char* Forget__Outracks_Simulator_Bytecode_Instantiate__char__New_1(::uStatic* __this, ::uChar result)
{
    Forget__Outracks_Simulator_Bytecode_Instantiate__char* inst = (Forget__Outracks_Simulator_Bytecode_Instantiate__char*)::uAllocObject(sizeof(Forget__Outracks_Simulator_Bytecode_Instantiate__char), Forget__Outracks_Simulator_Bytecode_Instantiate__char__typeof());
    inst->_ObjInit(result);
    return inst;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\Outracks.Simulator.Protocol.Uno\0.1.0\Common\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

Forget__Outracks_Simulator_Bytecode_IsType__char__uType* Forget__Outracks_Simulator_Bytecode_IsType__char__typeof()
{
    static ::uStaticStrong<Forget__Outracks_Simulator_Bytecode_IsType__char__uType*> type;
    if (type != NULL) return type;

    type = (Forget__Outracks_Simulator_Bytecode_IsType__char__uType*)::uAllocClassType(sizeof(Forget__Outracks_Simulator_Bytecode_IsType__char__uType), "Outracks.Simulator.Forget<Outracks.Simulator.Bytecode.IsType,char>", false, 0, 0, 0);

    return type;
}

void Forget__Outracks_Simulator_Bytecode_IsType__char___ObjInit(Forget__Outracks_Simulator_Bytecode_IsType__char* __this, ::uChar result)
{
    __this->_result = result;
}

::uChar Forget__Outracks_Simulator_Bytecode_IsType__char__Execute(Forget__Outracks_Simulator_Bytecode_IsType__char* __this, ::app::Outracks::Simulator::Bytecode::IsType* _)
{
    return __this->_result;
}

Forget__Outracks_Simulator_Bytecode_IsType__char* Forget__Outracks_Simulator_Bytecode_IsType__char__New_1(::uStatic* __this, ::uChar result)
{
    Forget__Outracks_Simulator_Bytecode_IsType__char* inst = (Forget__Outracks_Simulator_Bytecode_IsType__char*)::uAllocObject(sizeof(Forget__Outracks_Simulator_Bytecode_IsType__char), Forget__Outracks_Simulator_Bytecode_IsType__char__typeof());
    inst->_ObjInit(result);
    return inst;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\Outracks.Simulator.Protocol.Uno\0.1.0\Common\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

Forget__Outracks_Simulator_Bytecode_Lambda__char__uType* Forget__Outracks_Simulator_Bytecode_Lambda__char__typeof()
{
    static ::uStaticStrong<Forget__Outracks_Simulator_Bytecode_Lambda__char__uType*> type;
    if (type != NULL) return type;

    type = (Forget__Outracks_Simulator_Bytecode_Lambda__char__uType*)::uAllocClassType(sizeof(Forget__Outracks_Simulator_Bytecode_Lambda__char__uType), "Outracks.Simulator.Forget<Outracks.Simulator.Bytecode.Lambda,char>", false, 0, 0, 0);

    return type;
}

void Forget__Outracks_Simulator_Bytecode_Lambda__char___ObjInit(Forget__Outracks_Simulator_Bytecode_Lambda__char* __this, ::uChar result)
{
    __this->_result = result;
}

::uChar Forget__Outracks_Simulator_Bytecode_Lambda__char__Execute(Forget__Outracks_Simulator_Bytecode_Lambda__char* __this, ::app::Outracks::Simulator::Bytecode::Lambda* _)
{
    return __this->_result;
}

Forget__Outracks_Simulator_Bytecode_Lambda__char* Forget__Outracks_Simulator_Bytecode_Lambda__char__New_1(::uStatic* __this, ::uChar result)
{
    Forget__Outracks_Simulator_Bytecode_Lambda__char* inst = (Forget__Outracks_Simulator_Bytecode_Lambda__char*)::uAllocObject(sizeof(Forget__Outracks_Simulator_Bytecode_Lambda__char), Forget__Outracks_Simulator_Bytecode_Lambda__char__typeof());
    inst->_ObjInit(result);
    return inst;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\Outracks.Simulator.Protocol.Uno\0.1.0\Common\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

Forget__Outracks_Simulator_Bytecode_Literal__char__uType* Forget__Outracks_Simulator_Bytecode_Literal__char__typeof()
{
    static ::uStaticStrong<Forget__Outracks_Simulator_Bytecode_Literal__char__uType*> type;
    if (type != NULL) return type;

    type = (Forget__Outracks_Simulator_Bytecode_Literal__char__uType*)::uAllocClassType(sizeof(Forget__Outracks_Simulator_Bytecode_Literal__char__uType), "Outracks.Simulator.Forget<Outracks.Simulator.Bytecode.Literal,char>", false, 0, 0, 0);

    return type;
}

void Forget__Outracks_Simulator_Bytecode_Literal__char___ObjInit(Forget__Outracks_Simulator_Bytecode_Literal__char* __this, ::uChar result)
{
    __this->_result = result;
}

::uChar Forget__Outracks_Simulator_Bytecode_Literal__char__Execute(Forget__Outracks_Simulator_Bytecode_Literal__char* __this, ::app::Outracks::Simulator::Bytecode::Literal* _)
{
    return __this->_result;
}

Forget__Outracks_Simulator_Bytecode_Literal__char* Forget__Outracks_Simulator_Bytecode_Literal__char__New_1(::uStatic* __this, ::uChar result)
{
    Forget__Outracks_Simulator_Bytecode_Literal__char* inst = (Forget__Outracks_Simulator_Bytecode_Literal__char*)::uAllocObject(sizeof(Forget__Outracks_Simulator_Bytecode_Literal__char), Forget__Outracks_Simulator_Bytecode_Literal__char__typeof());
    inst->_ObjInit(result);
    return inst;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\Outracks.Simulator.Protocol.Uno\0.1.0\Common\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

Forget__Outracks_Simulator_Bytecode_LogicalOr__char__uType* Forget__Outracks_Simulator_Bytecode_LogicalOr__char__typeof()
{
    static ::uStaticStrong<Forget__Outracks_Simulator_Bytecode_LogicalOr__char__uType*> type;
    if (type != NULL) return type;

    type = (Forget__Outracks_Simulator_Bytecode_LogicalOr__char__uType*)::uAllocClassType(sizeof(Forget__Outracks_Simulator_Bytecode_LogicalOr__char__uType), "Outracks.Simulator.Forget<Outracks.Simulator.Bytecode.LogicalOr,char>", false, 0, 0, 0);

    return type;
}

void Forget__Outracks_Simulator_Bytecode_LogicalOr__char___ObjInit(Forget__Outracks_Simulator_Bytecode_LogicalOr__char* __this, ::uChar result)
{
    __this->_result = result;
}

::uChar Forget__Outracks_Simulator_Bytecode_LogicalOr__char__Execute(Forget__Outracks_Simulator_Bytecode_LogicalOr__char* __this, ::app::Outracks::Simulator::Bytecode::LogicalOr* _)
{
    return __this->_result;
}

Forget__Outracks_Simulator_Bytecode_LogicalOr__char* Forget__Outracks_Simulator_Bytecode_LogicalOr__char__New_1(::uStatic* __this, ::uChar result)
{
    Forget__Outracks_Simulator_Bytecode_LogicalOr__char* inst = (Forget__Outracks_Simulator_Bytecode_LogicalOr__char*)::uAllocObject(sizeof(Forget__Outracks_Simulator_Bytecode_LogicalOr__char), Forget__Outracks_Simulator_Bytecode_LogicalOr__char__typeof());
    inst->_ObjInit(result);
    return inst;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\Outracks.Simulator.Protocol.Uno\0.1.0\Common\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

Forget__Outracks_Simulator_Bytecode_MethodGroup__char__uType* Forget__Outracks_Simulator_Bytecode_MethodGroup__char__typeof()
{
    static ::uStaticStrong<Forget__Outracks_Simulator_Bytecode_MethodGroup__char__uType*> type;
    if (type != NULL) return type;

    type = (Forget__Outracks_Simulator_Bytecode_MethodGroup__char__uType*)::uAllocClassType(sizeof(Forget__Outracks_Simulator_Bytecode_MethodGroup__char__uType), "Outracks.Simulator.Forget<Outracks.Simulator.Bytecode.MethodGroup,char>", false, 0, 0, 0);

    return type;
}

void Forget__Outracks_Simulator_Bytecode_MethodGroup__char___ObjInit(Forget__Outracks_Simulator_Bytecode_MethodGroup__char* __this, ::uChar result)
{
    __this->_result = result;
}

::uChar Forget__Outracks_Simulator_Bytecode_MethodGroup__char__Execute(Forget__Outracks_Simulator_Bytecode_MethodGroup__char* __this, ::app::Outracks::Simulator::Bytecode::MethodGroup* _)
{
    return __this->_result;
}

Forget__Outracks_Simulator_Bytecode_MethodGroup__char* Forget__Outracks_Simulator_Bytecode_MethodGroup__char__New_1(::uStatic* __this, ::uChar result)
{
    Forget__Outracks_Simulator_Bytecode_MethodGroup__char* inst = (Forget__Outracks_Simulator_Bytecode_MethodGroup__char*)::uAllocObject(sizeof(Forget__Outracks_Simulator_Bytecode_MethodGroup__char), Forget__Outracks_Simulator_Bytecode_MethodGroup__char__typeof());
    inst->_ObjInit(result);
    return inst;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\Outracks.Simulator.Protocol.Uno\0.1.0\Common\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

Forget__Outracks_Simulator_Bytecode_NoOperation__char__uType* Forget__Outracks_Simulator_Bytecode_NoOperation__char__typeof()
{
    static ::uStaticStrong<Forget__Outracks_Simulator_Bytecode_NoOperation__char__uType*> type;
    if (type != NULL) return type;

    type = (Forget__Outracks_Simulator_Bytecode_NoOperation__char__uType*)::uAllocClassType(sizeof(Forget__Outracks_Simulator_Bytecode_NoOperation__char__uType), "Outracks.Simulator.Forget<Outracks.Simulator.Bytecode.NoOperation,char>", false, 0, 0, 0);

    return type;
}

void Forget__Outracks_Simulator_Bytecode_NoOperation__char___ObjInit(Forget__Outracks_Simulator_Bytecode_NoOperation__char* __this, ::uChar result)
{
    __this->_result = result;
}

::uChar Forget__Outracks_Simulator_Bytecode_NoOperation__char__Execute(Forget__Outracks_Simulator_Bytecode_NoOperation__char* __this, ::app::Outracks::Simulator::Bytecode::NoOperation* _)
{
    return __this->_result;
}

Forget__Outracks_Simulator_Bytecode_NoOperation__char* Forget__Outracks_Simulator_Bytecode_NoOperation__char__New_1(::uStatic* __this, ::uChar result)
{
    Forget__Outracks_Simulator_Bytecode_NoOperation__char* inst = (Forget__Outracks_Simulator_Bytecode_NoOperation__char*)::uAllocObject(sizeof(Forget__Outracks_Simulator_Bytecode_NoOperation__char), Forget__Outracks_Simulator_Bytecode_NoOperation__char__typeof());
    inst->_ObjInit(result);
    return inst;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\Outracks.Simulator.Protocol.Uno\0.1.0\Common\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

Forget__Outracks_Simulator_Bytecode_NumberLiteral__char__uType* Forget__Outracks_Simulator_Bytecode_NumberLiteral__char__typeof()
{
    static ::uStaticStrong<Forget__Outracks_Simulator_Bytecode_NumberLiteral__char__uType*> type;
    if (type != NULL) return type;

    type = (Forget__Outracks_Simulator_Bytecode_NumberLiteral__char__uType*)::uAllocClassType(sizeof(Forget__Outracks_Simulator_Bytecode_NumberLiteral__char__uType), "Outracks.Simulator.Forget<Outracks.Simulator.Bytecode.NumberLiteral,char>", false, 0, 0, 0);

    return type;
}

void Forget__Outracks_Simulator_Bytecode_NumberLiteral__char___ObjInit(Forget__Outracks_Simulator_Bytecode_NumberLiteral__char* __this, ::uChar result)
{
    __this->_result = result;
}

::uChar Forget__Outracks_Simulator_Bytecode_NumberLiteral__char__Execute(Forget__Outracks_Simulator_Bytecode_NumberLiteral__char* __this, ::app::Outracks::Simulator::Bytecode::NumberLiteral* _)
{
    return __this->_result;
}

Forget__Outracks_Simulator_Bytecode_NumberLiteral__char* Forget__Outracks_Simulator_Bytecode_NumberLiteral__char__New_1(::uStatic* __this, ::uChar result)
{
    Forget__Outracks_Simulator_Bytecode_NumberLiteral__char* inst = (Forget__Outracks_Simulator_Bytecode_NumberLiteral__char*)::uAllocObject(sizeof(Forget__Outracks_Simulator_Bytecode_NumberLiteral__char), Forget__Outracks_Simulator_Bytecode_NumberLiteral__char__typeof());
    inst->_ObjInit(result);
    return inst;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\Outracks.Simulator.Protocol.Uno\0.1.0\Common\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

Forget__Outracks_Simulator_Bytecode_ReadProperty__char__uType* Forget__Outracks_Simulator_Bytecode_ReadProperty__char__typeof()
{
    static ::uStaticStrong<Forget__Outracks_Simulator_Bytecode_ReadProperty__char__uType*> type;
    if (type != NULL) return type;

    type = (Forget__Outracks_Simulator_Bytecode_ReadProperty__char__uType*)::uAllocClassType(sizeof(Forget__Outracks_Simulator_Bytecode_ReadProperty__char__uType), "Outracks.Simulator.Forget<Outracks.Simulator.Bytecode.ReadProperty,char>", false, 0, 0, 0);

    return type;
}

void Forget__Outracks_Simulator_Bytecode_ReadProperty__char___ObjInit(Forget__Outracks_Simulator_Bytecode_ReadProperty__char* __this, ::uChar result)
{
    __this->_result = result;
}

::uChar Forget__Outracks_Simulator_Bytecode_ReadProperty__char__Execute(Forget__Outracks_Simulator_Bytecode_ReadProperty__char* __this, ::app::Outracks::Simulator::Bytecode::ReadProperty* _)
{
    return __this->_result;
}

Forget__Outracks_Simulator_Bytecode_ReadProperty__char* Forget__Outracks_Simulator_Bytecode_ReadProperty__char__New_1(::uStatic* __this, ::uChar result)
{
    Forget__Outracks_Simulator_Bytecode_ReadProperty__char* inst = (Forget__Outracks_Simulator_Bytecode_ReadProperty__char*)::uAllocObject(sizeof(Forget__Outracks_Simulator_Bytecode_ReadProperty__char), Forget__Outracks_Simulator_Bytecode_ReadProperty__char__typeof());
    inst->_ObjInit(result);
    return inst;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\Outracks.Simulator.Protocol.Uno\0.1.0\Common\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

Forget__Outracks_Simulator_Bytecode_ReadStaticField__char__uType* Forget__Outracks_Simulator_Bytecode_ReadStaticField__char__typeof()
{
    static ::uStaticStrong<Forget__Outracks_Simulator_Bytecode_ReadStaticField__char__uType*> type;
    if (type != NULL) return type;

    type = (Forget__Outracks_Simulator_Bytecode_ReadStaticField__char__uType*)::uAllocClassType(sizeof(Forget__Outracks_Simulator_Bytecode_ReadStaticField__char__uType), "Outracks.Simulator.Forget<Outracks.Simulator.Bytecode.ReadStaticField,char>", false, 0, 0, 0);

    return type;
}

void Forget__Outracks_Simulator_Bytecode_ReadStaticField__char___ObjInit(Forget__Outracks_Simulator_Bytecode_ReadStaticField__char* __this, ::uChar result)
{
    __this->_result = result;
}

::uChar Forget__Outracks_Simulator_Bytecode_ReadStaticField__char__Execute(Forget__Outracks_Simulator_Bytecode_ReadStaticField__char* __this, ::app::Outracks::Simulator::Bytecode::ReadStaticField* _)
{
    return __this->_result;
}

Forget__Outracks_Simulator_Bytecode_ReadStaticField__char* Forget__Outracks_Simulator_Bytecode_ReadStaticField__char__New_1(::uStatic* __this, ::uChar result)
{
    Forget__Outracks_Simulator_Bytecode_ReadStaticField__char* inst = (Forget__Outracks_Simulator_Bytecode_ReadStaticField__char*)::uAllocObject(sizeof(Forget__Outracks_Simulator_Bytecode_ReadStaticField__char), Forget__Outracks_Simulator_Bytecode_ReadStaticField__char__typeof());
    inst->_ObjInit(result);
    return inst;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\Outracks.Simulator.Protocol.Uno\0.1.0\Common\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

Forget__Outracks_Simulator_Bytecode_ReadVariable__char__uType* Forget__Outracks_Simulator_Bytecode_ReadVariable__char__typeof()
{
    static ::uStaticStrong<Forget__Outracks_Simulator_Bytecode_ReadVariable__char__uType*> type;
    if (type != NULL) return type;

    type = (Forget__Outracks_Simulator_Bytecode_ReadVariable__char__uType*)::uAllocClassType(sizeof(Forget__Outracks_Simulator_Bytecode_ReadVariable__char__uType), "Outracks.Simulator.Forget<Outracks.Simulator.Bytecode.ReadVariable,char>", false, 0, 0, 0);

    return type;
}

void Forget__Outracks_Simulator_Bytecode_ReadVariable__char___ObjInit(Forget__Outracks_Simulator_Bytecode_ReadVariable__char* __this, ::uChar result)
{
    __this->_result = result;
}

::uChar Forget__Outracks_Simulator_Bytecode_ReadVariable__char__Execute(Forget__Outracks_Simulator_Bytecode_ReadVariable__char* __this, ::app::Outracks::Simulator::Bytecode::ReadVariable* _)
{
    return __this->_result;
}

Forget__Outracks_Simulator_Bytecode_ReadVariable__char* Forget__Outracks_Simulator_Bytecode_ReadVariable__char__New_1(::uStatic* __this, ::uChar result)
{
    Forget__Outracks_Simulator_Bytecode_ReadVariable__char* inst = (Forget__Outracks_Simulator_Bytecode_ReadVariable__char*)::uAllocObject(sizeof(Forget__Outracks_Simulator_Bytecode_ReadVariable__char), Forget__Outracks_Simulator_Bytecode_ReadVariable__char__typeof());
    inst->_ObjInit(result);
    return inst;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\Outracks.Simulator.Protocol.Uno\0.1.0\Common\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

Forget__Outracks_Simulator_Bytecode_RemoveEventHandler__char__uType* Forget__Outracks_Simulator_Bytecode_RemoveEventHandler__char__typeof()
{
    static ::uStaticStrong<Forget__Outracks_Simulator_Bytecode_RemoveEventHandler__char__uType*> type;
    if (type != NULL) return type;

    type = (Forget__Outracks_Simulator_Bytecode_RemoveEventHandler__char__uType*)::uAllocClassType(sizeof(Forget__Outracks_Simulator_Bytecode_RemoveEventHandler__char__uType), "Outracks.Simulator.Forget<Outracks.Simulator.Bytecode.RemoveEventHandler,char>", false, 0, 0, 0);

    return type;
}

void Forget__Outracks_Simulator_Bytecode_RemoveEventHandler__char___ObjInit(Forget__Outracks_Simulator_Bytecode_RemoveEventHandler__char* __this, ::uChar result)
{
    __this->_result = result;
}

::uChar Forget__Outracks_Simulator_Bytecode_RemoveEventHandler__char__Execute(Forget__Outracks_Simulator_Bytecode_RemoveEventHandler__char* __this, ::app::Outracks::Simulator::Bytecode::RemoveEventHandler* _)
{
    return __this->_result;
}

Forget__Outracks_Simulator_Bytecode_RemoveEventHandler__char* Forget__Outracks_Simulator_Bytecode_RemoveEventHandler__char__New_1(::uStatic* __this, ::uChar result)
{
    Forget__Outracks_Simulator_Bytecode_RemoveEventHandler__char* inst = (Forget__Outracks_Simulator_Bytecode_RemoveEventHandler__char*)::uAllocObject(sizeof(Forget__Outracks_Simulator_Bytecode_RemoveEventHandler__char), Forget__Outracks_Simulator_Bytecode_RemoveEventHandler__char__typeof());
    inst->_ObjInit(result);
    return inst;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\Outracks.Simulator.Protocol.Uno\0.1.0\Common\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

Forget__Outracks_Simulator_Bytecode_Return__char__uType* Forget__Outracks_Simulator_Bytecode_Return__char__typeof()
{
    static ::uStaticStrong<Forget__Outracks_Simulator_Bytecode_Return__char__uType*> type;
    if (type != NULL) return type;

    type = (Forget__Outracks_Simulator_Bytecode_Return__char__uType*)::uAllocClassType(sizeof(Forget__Outracks_Simulator_Bytecode_Return__char__uType), "Outracks.Simulator.Forget<Outracks.Simulator.Bytecode.Return,char>", false, 0, 0, 0);

    return type;
}

void Forget__Outracks_Simulator_Bytecode_Return__char___ObjInit(Forget__Outracks_Simulator_Bytecode_Return__char* __this, ::uChar result)
{
    __this->_result = result;
}

::uChar Forget__Outracks_Simulator_Bytecode_Return__char__Execute(Forget__Outracks_Simulator_Bytecode_Return__char* __this, ::app::Outracks::Simulator::Bytecode::Return* _)
{
    return __this->_result;
}

Forget__Outracks_Simulator_Bytecode_Return__char* Forget__Outracks_Simulator_Bytecode_Return__char__New_1(::uStatic* __this, ::uChar result)
{
    Forget__Outracks_Simulator_Bytecode_Return__char* inst = (Forget__Outracks_Simulator_Bytecode_Return__char*)::uAllocObject(sizeof(Forget__Outracks_Simulator_Bytecode_Return__char), Forget__Outracks_Simulator_Bytecode_Return__char__typeof());
    inst->_ObjInit(result);
    return inst;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\Outracks.Simulator.Protocol.Uno\0.1.0\Common\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

Forget__Outracks_Simulator_Bytecode_StringLiteral__char__uType* Forget__Outracks_Simulator_Bytecode_StringLiteral__char__typeof()
{
    static ::uStaticStrong<Forget__Outracks_Simulator_Bytecode_StringLiteral__char__uType*> type;
    if (type != NULL) return type;

    type = (Forget__Outracks_Simulator_Bytecode_StringLiteral__char__uType*)::uAllocClassType(sizeof(Forget__Outracks_Simulator_Bytecode_StringLiteral__char__uType), "Outracks.Simulator.Forget<Outracks.Simulator.Bytecode.StringLiteral,char>", false, 0, 0, 0);

    return type;
}

void Forget__Outracks_Simulator_Bytecode_StringLiteral__char___ObjInit(Forget__Outracks_Simulator_Bytecode_StringLiteral__char* __this, ::uChar result)
{
    __this->_result = result;
}

::uChar Forget__Outracks_Simulator_Bytecode_StringLiteral__char__Execute(Forget__Outracks_Simulator_Bytecode_StringLiteral__char* __this, ::app::Outracks::Simulator::Bytecode::StringLiteral* _)
{
    return __this->_result;
}

Forget__Outracks_Simulator_Bytecode_StringLiteral__char* Forget__Outracks_Simulator_Bytecode_StringLiteral__char__New_1(::uStatic* __this, ::uChar result)
{
    Forget__Outracks_Simulator_Bytecode_StringLiteral__char* inst = (Forget__Outracks_Simulator_Bytecode_StringLiteral__char*)::uAllocObject(sizeof(Forget__Outracks_Simulator_Bytecode_StringLiteral__char), Forget__Outracks_Simulator_Bytecode_StringLiteral__char__typeof());
    inst->_ObjInit(result);
    return inst;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\Outracks.Simulator.Protocol.Uno\0.1.0\Common\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

Forget__Outracks_Simulator_Bytecode_WriteProperty__char__uType* Forget__Outracks_Simulator_Bytecode_WriteProperty__char__typeof()
{
    static ::uStaticStrong<Forget__Outracks_Simulator_Bytecode_WriteProperty__char__uType*> type;
    if (type != NULL) return type;

    type = (Forget__Outracks_Simulator_Bytecode_WriteProperty__char__uType*)::uAllocClassType(sizeof(Forget__Outracks_Simulator_Bytecode_WriteProperty__char__uType), "Outracks.Simulator.Forget<Outracks.Simulator.Bytecode.WriteProperty,char>", false, 0, 0, 0);

    return type;
}

void Forget__Outracks_Simulator_Bytecode_WriteProperty__char___ObjInit(Forget__Outracks_Simulator_Bytecode_WriteProperty__char* __this, ::uChar result)
{
    __this->_result = result;
}

::uChar Forget__Outracks_Simulator_Bytecode_WriteProperty__char__Execute(Forget__Outracks_Simulator_Bytecode_WriteProperty__char* __this, ::app::Outracks::Simulator::Bytecode::WriteProperty* _)
{
    return __this->_result;
}

Forget__Outracks_Simulator_Bytecode_WriteProperty__char* Forget__Outracks_Simulator_Bytecode_WriteProperty__char__New_1(::uStatic* __this, ::uChar result)
{
    Forget__Outracks_Simulator_Bytecode_WriteProperty__char* inst = (Forget__Outracks_Simulator_Bytecode_WriteProperty__char*)::uAllocObject(sizeof(Forget__Outracks_Simulator_Bytecode_WriteProperty__char), Forget__Outracks_Simulator_Bytecode_WriteProperty__char__typeof());
    inst->_ObjInit(result);
    return inst;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\Outracks.Simulator.Protocol.Uno\0.1.0\Common\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

Forget__Outracks_Simulator_Protocol_DebugLog__char__uType* Forget__Outracks_Simulator_Protocol_DebugLog__char__typeof()
{
    static ::uStaticStrong<Forget__Outracks_Simulator_Protocol_DebugLog__char__uType*> type;
    if (type != NULL) return type;

    type = (Forget__Outracks_Simulator_Protocol_DebugLog__char__uType*)::uAllocClassType(sizeof(Forget__Outracks_Simulator_Protocol_DebugLog__char__uType), "Outracks.Simulator.Forget<Outracks.Simulator.Protocol.DebugLog,char>", false, 0, 0, 0);

    return type;
}

void Forget__Outracks_Simulator_Protocol_DebugLog__char___ObjInit(Forget__Outracks_Simulator_Protocol_DebugLog__char* __this, ::uChar result)
{
    __this->_result = result;
}

::uChar Forget__Outracks_Simulator_Protocol_DebugLog__char__Execute(Forget__Outracks_Simulator_Protocol_DebugLog__char* __this, ::app::Outracks::Simulator::Protocol::DebugLog* _)
{
    return __this->_result;
}

Forget__Outracks_Simulator_Protocol_DebugLog__char* Forget__Outracks_Simulator_Protocol_DebugLog__char__New_1(::uStatic* __this, ::uChar result)
{
    Forget__Outracks_Simulator_Protocol_DebugLog__char* inst = (Forget__Outracks_Simulator_Protocol_DebugLog__char*)::uAllocObject(sizeof(Forget__Outracks_Simulator_Protocol_DebugLog__char), Forget__Outracks_Simulator_Protocol_DebugLog__char__typeof());
    inst->_ObjInit(result);
    return inst;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\Outracks.Simulator.Protocol.Uno\0.1.0\Common\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

Forget__Outracks_Simulator_Protocol_Error__char__uType* Forget__Outracks_Simulator_Protocol_Error__char__typeof()
{
    static ::uStaticStrong<Forget__Outracks_Simulator_Protocol_Error__char__uType*> type;
    if (type != NULL) return type;

    type = (Forget__Outracks_Simulator_Protocol_Error__char__uType*)::uAllocClassType(sizeof(Forget__Outracks_Simulator_Protocol_Error__char__uType), "Outracks.Simulator.Forget<Outracks.Simulator.Protocol.Error,char>", false, 0, 0, 0);

    return type;
}

void Forget__Outracks_Simulator_Protocol_Error__char___ObjInit(Forget__Outracks_Simulator_Protocol_Error__char* __this, ::uChar result)
{
    __this->_result = result;
}

::uChar Forget__Outracks_Simulator_Protocol_Error__char__Execute(Forget__Outracks_Simulator_Protocol_Error__char* __this, ::app::Outracks::Simulator::Protocol::Error* _)
{
    return __this->_result;
}

Forget__Outracks_Simulator_Protocol_Error__char* Forget__Outracks_Simulator_Protocol_Error__char__New_1(::uStatic* __this, ::uChar result)
{
    Forget__Outracks_Simulator_Protocol_Error__char* inst = (Forget__Outracks_Simulator_Protocol_Error__char*)::uAllocObject(sizeof(Forget__Outracks_Simulator_Protocol_Error__char), Forget__Outracks_Simulator_Protocol_Error__char__typeof());
    inst->_ObjInit(result);
    return inst;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\Outracks.Simulator.Protocol.Uno\0.1.0\Common\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

Forget__Outracks_Simulator_Protocol_Execute__char__uType* Forget__Outracks_Simulator_Protocol_Execute__char__typeof()
{
    static ::uStaticStrong<Forget__Outracks_Simulator_Protocol_Execute__char__uType*> type;
    if (type != NULL) return type;

    type = (Forget__Outracks_Simulator_Protocol_Execute__char__uType*)::uAllocClassType(sizeof(Forget__Outracks_Simulator_Protocol_Execute__char__uType), "Outracks.Simulator.Forget<Outracks.Simulator.Protocol.Execute,char>", false, 0, 0, 0);

    return type;
}

void Forget__Outracks_Simulator_Protocol_Execute__char___ObjInit(Forget__Outracks_Simulator_Protocol_Execute__char* __this, ::uChar result)
{
    __this->_result = result;
}

::uChar Forget__Outracks_Simulator_Protocol_Execute__char__Execute(Forget__Outracks_Simulator_Protocol_Execute__char* __this, ::app::Outracks::Simulator::Protocol::Execute* _)
{
    return __this->_result;
}

Forget__Outracks_Simulator_Protocol_Execute__char* Forget__Outracks_Simulator_Protocol_Execute__char__New_1(::uStatic* __this, ::uChar result)
{
    Forget__Outracks_Simulator_Protocol_Execute__char* inst = (Forget__Outracks_Simulator_Protocol_Execute__char*)::uAllocObject(sizeof(Forget__Outracks_Simulator_Protocol_Execute__char), Forget__Outracks_Simulator_Protocol_Execute__char__typeof());
    inst->_ObjInit(result);
    return inst;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\Outracks.Simulator.Protocol.Uno\0.1.0\Common\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

Forget__Outracks_Simulator_Protocol_RegisterName__char__uType* Forget__Outracks_Simulator_Protocol_RegisterName__char__typeof()
{
    static ::uStaticStrong<Forget__Outracks_Simulator_Protocol_RegisterName__char__uType*> type;
    if (type != NULL) return type;

    type = (Forget__Outracks_Simulator_Protocol_RegisterName__char__uType*)::uAllocClassType(sizeof(Forget__Outracks_Simulator_Protocol_RegisterName__char__uType), "Outracks.Simulator.Forget<Outracks.Simulator.Protocol.RegisterName,char>", false, 0, 0, 0);

    return type;
}

void Forget__Outracks_Simulator_Protocol_RegisterName__char___ObjInit(Forget__Outracks_Simulator_Protocol_RegisterName__char* __this, ::uChar result)
{
    __this->_result = result;
}

::uChar Forget__Outracks_Simulator_Protocol_RegisterName__char__Execute(Forget__Outracks_Simulator_Protocol_RegisterName__char* __this, ::app::Outracks::Simulator::Protocol::RegisterName* _)
{
    return __this->_result;
}

Forget__Outracks_Simulator_Protocol_RegisterName__char* Forget__Outracks_Simulator_Protocol_RegisterName__char__New_1(::uStatic* __this, ::uChar result)
{
    Forget__Outracks_Simulator_Protocol_RegisterName__char* inst = (Forget__Outracks_Simulator_Protocol_RegisterName__char*)::uAllocObject(sizeof(Forget__Outracks_Simulator_Protocol_RegisterName__char), Forget__Outracks_Simulator_Protocol_RegisterName__char__typeof());
    inst->_ObjInit(result);
    return inst;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\Outracks.Simulator.Protocol.Uno\0.1.0\Common\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

Forget__Outracks_Simulator_Protocol_Reify__char__uType* Forget__Outracks_Simulator_Protocol_Reify__char__typeof()
{
    static ::uStaticStrong<Forget__Outracks_Simulator_Protocol_Reify__char__uType*> type;
    if (type != NULL) return type;

    type = (Forget__Outracks_Simulator_Protocol_Reify__char__uType*)::uAllocClassType(sizeof(Forget__Outracks_Simulator_Protocol_Reify__char__uType), "Outracks.Simulator.Forget<Outracks.Simulator.Protocol.Reify,char>", false, 0, 0, 0);

    return type;
}

void Forget__Outracks_Simulator_Protocol_Reify__char___ObjInit(Forget__Outracks_Simulator_Protocol_Reify__char* __this, ::uChar result)
{
    __this->_result = result;
}

::uChar Forget__Outracks_Simulator_Protocol_Reify__char__Execute(Forget__Outracks_Simulator_Protocol_Reify__char* __this, ::app::Outracks::Simulator::Protocol::Reify* _)
{
    return __this->_result;
}

Forget__Outracks_Simulator_Protocol_Reify__char* Forget__Outracks_Simulator_Protocol_Reify__char__New_1(::uStatic* __this, ::uChar result)
{
    Forget__Outracks_Simulator_Protocol_Reify__char* inst = (Forget__Outracks_Simulator_Protocol_Reify__char*)::uAllocObject(sizeof(Forget__Outracks_Simulator_Protocol_Reify__char), Forget__Outracks_Simulator_Protocol_Reify__char__typeof());
    inst->_ObjInit(result);
    return inst;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\Outracks.Simulator.Protocol.Uno\0.1.0\Common\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

Forget__Outracks_Simulator_Protocol_UnhandledException__char__uType* Forget__Outracks_Simulator_Protocol_UnhandledException__char__typeof()
{
    static ::uStaticStrong<Forget__Outracks_Simulator_Protocol_UnhandledException__char__uType*> type;
    if (type != NULL) return type;

    type = (Forget__Outracks_Simulator_Protocol_UnhandledException__char__uType*)::uAllocClassType(sizeof(Forget__Outracks_Simulator_Protocol_UnhandledException__char__uType), "Outracks.Simulator.Forget<Outracks.Simulator.Protocol.UnhandledException,char>", false, 0, 0, 0);

    return type;
}

void Forget__Outracks_Simulator_Protocol_UnhandledException__char___ObjInit(Forget__Outracks_Simulator_Protocol_UnhandledException__char* __this, ::uChar result)
{
    __this->_result = result;
}

::uChar Forget__Outracks_Simulator_Protocol_UnhandledException__char__Execute(Forget__Outracks_Simulator_Protocol_UnhandledException__char* __this, ::app::Outracks::Simulator::Protocol::UnhandledException* _)
{
    return __this->_result;
}

Forget__Outracks_Simulator_Protocol_UnhandledException__char* Forget__Outracks_Simulator_Protocol_UnhandledException__char__New_1(::uStatic* __this, ::uChar result)
{
    Forget__Outracks_Simulator_Protocol_UnhandledException__char* inst = (Forget__Outracks_Simulator_Protocol_UnhandledException__char*)::uAllocObject(sizeof(Forget__Outracks_Simulator_Protocol_UnhandledException__char), Forget__Outracks_Simulator_Protocol_UnhandledException__char__typeof());
    inst->_ObjInit(result);
    return inst;
}

}}}
