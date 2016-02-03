#include <app/Fuse.Behavior.h>
#include <app/Fuse.Controls.Control.h>
#include <app/Fuse.Controls.Internal.WrappedLine.h>
#include <app/Fuse.Drawing.Batching.Batch.h>
#include <app/Fuse.Drawing.Border.h>
#include <app/Fuse.Drawing.Contour.h>
#include <app/Fuse.Drawing.GradientStop.h>
#include <app/Fuse.Drawing.PolygonDrawable.h>
#include <app/Outracks.Simulator.Bytecode.BindVariable.h>
#include <app/Outracks.Simulator.Bytecode.Expression.h>
#include <app/Outracks.Simulator.Bytecode.Parameter.h>
#include <app/Outracks.Simulator.Bytecode.Statement.h>
#include <app/Outracks.Simulator.Bytecode.TypeName.h>
#include <app/Outracks.Simulator.DialogButton.h>
#include <app/Outracks.Simulator.Protocol.ExceptionInfo.h>
#include <app/Outracks.Simulator.Task__Outracks_Simulator_ISimulatorClient.h>
#include <app/Outracks.Simulator.Task__Uno_Net_IPEndPoint__.h>
#include <app/Uno.Collections.IEnumerator__float2.h>
#include <app/Uno.Collections.IEnumerator__Fuse_Behavior.h>
#include <app/Uno.Collections.IEnumerator__Fuse_Controls_Control.h>
#include <app/Uno.Collections.IEnumerator__Fuse_Controls_Internal_WrappedLine.h>
#include <app/Uno.Collections.IEnumerator__Fuse_Drawing_Batching_Batch.h>
#include <app/Uno.Collections.IEnumerator__Fuse_Drawing_Border.h>
#include <app/Uno.Collections.IEnumerator__Fuse_Drawing_Contour.h>
#include <app/Uno.Collections.IEnumerator__Fuse_Drawing_GradientStop.h>
#include <app/Uno.Collections.IEnumerator__Fuse_Drawing_PolygonDrawable.h>
#include <app/Uno.Collections.IEnumerator__Outracks_Simulator_Bytecode_BindVariable.h>
#include <app/Uno.Collections.IEnumerator__Outracks_Simulator_Bytecode_Expression.h>
#include <app/Uno.Collections.IEnumerator__Outracks_Simulator_Bytecode_Parameter.h>
#include <app/Uno.Collections.IEnumerator__Outracks_Simulator_Bytecode_Statement.h>
#include <app/Uno.Collections.IEnumerator__Outracks_Simulator_Bytecode_TypeName.h>
#include <app/Uno.Collections.IEnumerator__Outracks_Simulator_DialogButton.h>
#include <app/Uno.Collections.IEnumerator__Outracks_Simulator_Protocol_ExceptionInfo.h>
#include <app/Uno.Collections.IEnumerator__Outracks_Simulator_Task_Outracks_S-51bc72a7.h>
#include <app/Uno.Collections.IEnumerator__Outracks_Simulator_Task_Uno_Net_IP-51d80b77.h>
#include <app/Uno.Collections.IEnumerator__string.h>
#include <app/Uno.Collections.IEnumerator__Uno_Exception.h>
#include <app/Uno.Collections.IEnumerator__Uno_Net_IPEndPoint.h>
#include <app/Uno.Collections.IEnumerator__Uno_Reflection_CppField.h>
#include <app/Uno.Collections.IEnumerator__Uno_Reflection_CppFunction.h>
#include <app/Uno.Collections.IEnumerator__Uno_UX_Resource.h>
#include <app/Uno.Exception.h>
#include <app/Uno.Net.IPEndPoint.h>
#include <app/Uno.Reflection.CppField.h>
#include <app/Uno.Reflection.CppFunction.h>
#include <app/Uno.Runtime.Implementation.Internal.ArrayEnumerable__float2.h>
#include <app/Uno.Runtime.Implementation.Internal.ArrayEnumerable__Fuse_Behavior.h>
#include <app/Uno.Runtime.Implementation.Internal.ArrayEnumerable__Fuse_Contr-2511fcaf.h>
#include <app/Uno.Runtime.Implementation.Internal.ArrayEnumerable__Fuse_Contr-f9495a05.h>
#include <app/Uno.Runtime.Implementation.Internal.ArrayEnumerable__Fuse_Drawi-9a669574.h>
#include <app/Uno.Runtime.Implementation.Internal.ArrayEnumerable__Fuse_Drawi-b92436e2.h>
#include <app/Uno.Runtime.Implementation.Internal.ArrayEnumerable__Fuse_Drawi-d9fe5c2f.h>
#include <app/Uno.Runtime.Implementation.Internal.ArrayEnumerable__Fuse_Drawi-f31a18df.h>
#include <app/Uno.Runtime.Implementation.Internal.ArrayEnumerable__Fuse_Drawing_Border.h>
#include <app/Uno.Runtime.Implementation.Internal.ArrayEnumerable__Outracks_S-184a0bb8.h>
#include <app/Uno.Runtime.Implementation.Internal.ArrayEnumerable__Outracks_S-1886ece5.h>
#include <app/Uno.Runtime.Implementation.Internal.ArrayEnumerable__Outracks_S-29121f2d.h>
#include <app/Uno.Runtime.Implementation.Internal.ArrayEnumerable__Outracks_S-5e50637a.h>
#include <app/Uno.Runtime.Implementation.Internal.ArrayEnumerable__Outracks_S-657438da.h>
#include <app/Uno.Runtime.Implementation.Internal.ArrayEnumerable__Outracks_S-7638e4a9.h>
#include <app/Uno.Runtime.Implementation.Internal.ArrayEnumerable__Outracks_S-906b75d2.h>
#include <app/Uno.Runtime.Implementation.Internal.ArrayEnumerable__Outracks_S-a89fea52.h>
#include <app/Uno.Runtime.Implementation.Internal.ArrayEnumerable__Outracks_S-b504f309.h>
#include <app/Uno.Runtime.Implementation.Internal.ArrayEnumerable__string.h>
#include <app/Uno.Runtime.Implementation.Internal.ArrayEnumerable__Uno_Exception.h>
#include <app/Uno.Runtime.Implementation.Internal.ArrayEnumerable__Uno_Net_IPEndPoint.h>
#include <app/Uno.Runtime.Implementation.Internal.ArrayEnumerable__Uno_Reflec-9fc9b423.h>
#include <app/Uno.Runtime.Implementation.Internal.ArrayEnumerable__Uno_Reflec-a5c1c5e8.h>
#include <app/Uno.Runtime.Implementation.Internal.ArrayEnumerable__Uno_UX_Resource.h>
#include <app/Uno.Runtime.Implementation.Internal.ArrayEnumerator__float2.h>
#include <app/Uno.Runtime.Implementation.Internal.ArrayEnumerator__Fuse_Behavior.h>
#include <app/Uno.Runtime.Implementation.Internal.ArrayEnumerator__Fuse_Contr-b0c584cd.h>
#include <app/Uno.Runtime.Implementation.Internal.ArrayEnumerator__Fuse_Contr-cd071eff.h>
#include <app/Uno.Runtime.Implementation.Internal.ArrayEnumerator__Fuse_Drawi-260b7781.h>
#include <app/Uno.Runtime.Implementation.Internal.ArrayEnumerator__Fuse_Drawi-6fe7bf01.h>
#include <app/Uno.Runtime.Implementation.Internal.ArrayEnumerator__Fuse_Drawi-8cb486fc.h>
#include <app/Uno.Runtime.Implementation.Internal.ArrayEnumerator__Fuse_Drawi-c7c0bf57.h>
#include <app/Uno.Runtime.Implementation.Internal.ArrayEnumerator__Fuse_Drawing_Border.h>
#include <app/Uno.Runtime.Implementation.Internal.ArrayEnumerator__Outracks_S-2d9ed34a.h>
#include <app/Uno.Runtime.Implementation.Internal.ArrayEnumerator__Outracks_S-4bc43a4f.h>
#include <app/Uno.Runtime.Implementation.Internal.ArrayEnumerator__Outracks_S-564e9e99.h>
#include <app/Uno.Runtime.Implementation.Internal.ArrayEnumerator__Outracks_S-822e40aa.h>
#include <app/Uno.Runtime.Implementation.Internal.ArrayEnumerator__Outracks_S-981576f8.h>
#include <app/Uno.Runtime.Implementation.Internal.ArrayEnumerator__Outracks_S-a0b01fee.h>
#include <app/Uno.Runtime.Implementation.Internal.ArrayEnumerator__Outracks_S-a47e8de6.h>
#include <app/Uno.Runtime.Implementation.Internal.ArrayEnumerator__Outracks_S-bc81546.h>
#include <app/Uno.Runtime.Implementation.Internal.ArrayEnumerator__Outracks_S-e693fdb9.h>
#include <app/Uno.Runtime.Implementation.Internal.ArrayEnumerator__string.h>
#include <app/Uno.Runtime.Implementation.Internal.ArrayEnumerator__Uno_Exception.h>
#include <app/Uno.Runtime.Implementation.Internal.ArrayEnumerator__Uno_Net_IPEndPoint.h>
#include <app/Uno.Runtime.Implementation.Internal.ArrayEnumerator__Uno_Reflec-4e16fc2d.h>
#include <app/Uno.Runtime.Implementation.Internal.ArrayEnumerator__Uno_Reflec-c287a881.h>
#include <app/Uno.Runtime.Implementation.Internal.ArrayEnumerator__Uno_UX_Resource.h>
#include <app/Uno.String.h>
#include <app/Uno.UX.Resource.h>

namespace app {
namespace Uno {
namespace Runtime {
namespace Implementation {
namespace Internal {

// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Runtime\Implementation\Internal\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

ArrayEnumerable__float2__uType* ArrayEnumerable__float2__typeof()
{
    static ::uStaticStrong<ArrayEnumerable__float2__uType*> type;
    if (type != NULL) return type;

    type = (ArrayEnumerable__float2__uType*)::uAllocClassType(sizeof(ArrayEnumerable__float2__uType), "Uno.Runtime.Implementation.Internal.ArrayEnumerable<float2>", false, 1, 1, 0);

    type->__interface_0.__fp_GetEnumerator = (::uObject*(*)(void*))ArrayEnumerable__float2__GetEnumerator;

    type->SetInterfaces(
        ::app::Uno::Collections::IEnumerable__float2__typeof(), offsetof(ArrayEnumerable__float2__uType, __interface_0));

    type->SetStrongRefs(
        "_source", offsetof(ArrayEnumerable__float2, _source));

    type->SetFields(1,
        ::uNewField("_source", NULL, offsetof(ArrayEnumerable__float2, _source), ::uGetArrayType(::app::Uno::Float2__typeof())));

    type->SetFunctions(2,
        ::uNewFunction("GetEnumerator", ArrayEnumerable__float2__GetEnumerator, 0, false, ::app::Uno::Collections::IEnumerator__float2__typeof()),
        ::uNewFunction(".ctor", ArrayEnumerable__float2__New_1, 0, true, ArrayEnumerable__float2__typeof(), ::uGetArrayType(::app::Uno::Float2__typeof())));

    ::uRegisterType(type);
    return type;
}

void ArrayEnumerable__float2___ObjInit(ArrayEnumerable__float2* __this, ::uArray* source)
{
    __this->_source = source;
}

::uObject* ArrayEnumerable__float2__GetEnumerator(ArrayEnumerable__float2* __this)
{
    return (::uObject*)::app::Uno::Runtime::Implementation::Internal::ArrayEnumerator__float2__New_1(NULL, __this->_source);
}

ArrayEnumerable__float2* ArrayEnumerable__float2__New_1(::uStatic* __this, ::uArray* source)
{
    ArrayEnumerable__float2* inst = (ArrayEnumerable__float2*)::uAllocObject(sizeof(ArrayEnumerable__float2), ArrayEnumerable__float2__typeof());
    inst->_ObjInit(source);
    return inst;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Runtime\Implementation\Internal\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

ArrayEnumerable__Fuse_Behavior__uType* ArrayEnumerable__Fuse_Behavior__typeof()
{
    static ::uStaticStrong<ArrayEnumerable__Fuse_Behavior__uType*> type;
    if (type != NULL) return type;

    type = (ArrayEnumerable__Fuse_Behavior__uType*)::uAllocClassType(sizeof(ArrayEnumerable__Fuse_Behavior__uType), "Uno.Runtime.Implementation.Internal.ArrayEnumerable<Fuse.Behavior>", false, 1, 1, 0);

    type->__interface_0.__fp_GetEnumerator = (::uObject*(*)(void*))ArrayEnumerable__Fuse_Behavior__GetEnumerator;

    type->SetInterfaces(
        ::app::Uno::Collections::IEnumerable__Fuse_Behavior__typeof(), offsetof(ArrayEnumerable__Fuse_Behavior__uType, __interface_0));

    type->SetStrongRefs(
        "_source", offsetof(ArrayEnumerable__Fuse_Behavior, _source));

    type->SetFields(1,
        ::uNewField("_source", NULL, offsetof(ArrayEnumerable__Fuse_Behavior, _source), ::uGetArrayType(::app::Fuse::Behavior__typeof())));

    type->SetFunctions(2,
        ::uNewFunction("GetEnumerator", ArrayEnumerable__Fuse_Behavior__GetEnumerator, 0, false, ::app::Uno::Collections::IEnumerator__Fuse_Behavior__typeof()),
        ::uNewFunction(".ctor", ArrayEnumerable__Fuse_Behavior__New_1, 0, true, ArrayEnumerable__Fuse_Behavior__typeof(), ::uGetArrayType(::app::Fuse::Behavior__typeof())));

    ::uRegisterType(type);
    return type;
}

void ArrayEnumerable__Fuse_Behavior___ObjInit(ArrayEnumerable__Fuse_Behavior* __this, ::uArray* source)
{
    __this->_source = source;
}

::uObject* ArrayEnumerable__Fuse_Behavior__GetEnumerator(ArrayEnumerable__Fuse_Behavior* __this)
{
    return (::uObject*)::app::Uno::Runtime::Implementation::Internal::ArrayEnumerator__Fuse_Behavior__New_1(NULL, __this->_source);
}

ArrayEnumerable__Fuse_Behavior* ArrayEnumerable__Fuse_Behavior__New_1(::uStatic* __this, ::uArray* source)
{
    ArrayEnumerable__Fuse_Behavior* inst = (ArrayEnumerable__Fuse_Behavior*)::uAllocObject(sizeof(ArrayEnumerable__Fuse_Behavior), ArrayEnumerable__Fuse_Behavior__typeof());
    inst->_ObjInit(source);
    return inst;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Runtime\Implementation\Internal\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

ArrayEnumerable__Fuse_Controls_Control__uType* ArrayEnumerable__Fuse_Controls_Control__typeof()
{
    static ::uStaticStrong<ArrayEnumerable__Fuse_Controls_Control__uType*> type;
    if (type != NULL) return type;

    type = (ArrayEnumerable__Fuse_Controls_Control__uType*)::uAllocClassType(sizeof(ArrayEnumerable__Fuse_Controls_Control__uType), "Uno.Runtime.Implementation.Internal.ArrayEnumerable<Fuse.Controls.Control>", false, 1, 1, 0);

    type->__interface_0.__fp_GetEnumerator = (::uObject*(*)(void*))ArrayEnumerable__Fuse_Controls_Control__GetEnumerator;

    type->SetInterfaces(
        ::app::Uno::Collections::IEnumerable__Fuse_Controls_Control__typeof(), offsetof(ArrayEnumerable__Fuse_Controls_Control__uType, __interface_0));

    type->SetStrongRefs(
        "_source", offsetof(ArrayEnumerable__Fuse_Controls_Control, _source));

    type->SetFields(1,
        ::uNewField("_source", NULL, offsetof(ArrayEnumerable__Fuse_Controls_Control, _source), ::uGetArrayType(::app::Fuse::Controls::Control__typeof())));

    type->SetFunctions(2,
        ::uNewFunction("GetEnumerator", ArrayEnumerable__Fuse_Controls_Control__GetEnumerator, 0, false, ::app::Uno::Collections::IEnumerator__Fuse_Controls_Control__typeof()),
        ::uNewFunction(".ctor", ArrayEnumerable__Fuse_Controls_Control__New_1, 0, true, ArrayEnumerable__Fuse_Controls_Control__typeof(), ::uGetArrayType(::app::Fuse::Controls::Control__typeof())));

    ::uRegisterType(type);
    return type;
}

void ArrayEnumerable__Fuse_Controls_Control___ObjInit(ArrayEnumerable__Fuse_Controls_Control* __this, ::uArray* source)
{
    __this->_source = source;
}

::uObject* ArrayEnumerable__Fuse_Controls_Control__GetEnumerator(ArrayEnumerable__Fuse_Controls_Control* __this)
{
    return (::uObject*)::app::Uno::Runtime::Implementation::Internal::ArrayEnumerator__Fuse_Controls_Control__New_1(NULL, __this->_source);
}

ArrayEnumerable__Fuse_Controls_Control* ArrayEnumerable__Fuse_Controls_Control__New_1(::uStatic* __this, ::uArray* source)
{
    ArrayEnumerable__Fuse_Controls_Control* inst = (ArrayEnumerable__Fuse_Controls_Control*)::uAllocObject(sizeof(ArrayEnumerable__Fuse_Controls_Control), ArrayEnumerable__Fuse_Controls_Control__typeof());
    inst->_ObjInit(source);
    return inst;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Runtime\Implementation\Internal\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

ArrayEnumerable__Fuse_Controls_Internal_WrappedLine__uType* ArrayEnumerable__Fuse_Controls_Internal_WrappedLine__typeof()
{
    static ::uStaticStrong<ArrayEnumerable__Fuse_Controls_Internal_WrappedLine__uType*> type;
    if (type != NULL) return type;

    type = (ArrayEnumerable__Fuse_Controls_Internal_WrappedLine__uType*)::uAllocClassType(sizeof(ArrayEnumerable__Fuse_Controls_Internal_WrappedLine__uType), "Uno.Runtime.Implementation.Internal.ArrayEnumerable<Fuse.Controls.Internal.WrappedLine>", false, 1, 1, 0);

    type->__interface_0.__fp_GetEnumerator = (::uObject*(*)(void*))ArrayEnumerable__Fuse_Controls_Internal_WrappedLine__GetEnumerator;

    type->SetInterfaces(
        ::app::Uno::Collections::IEnumerable__Fuse_Controls_Internal_WrappedLine__typeof(), offsetof(ArrayEnumerable__Fuse_Controls_Internal_WrappedLine__uType, __interface_0));

    type->SetStrongRefs(
        "_source", offsetof(ArrayEnumerable__Fuse_Controls_Internal_WrappedLine, _source));

    type->SetFields(1,
        ::uNewField("_source", NULL, offsetof(ArrayEnumerable__Fuse_Controls_Internal_WrappedLine, _source), ::uGetArrayType(::app::Fuse::Controls::Internal::WrappedLine__typeof())));

    type->SetFunctions(2,
        ::uNewFunction("GetEnumerator", ArrayEnumerable__Fuse_Controls_Internal_WrappedLine__GetEnumerator, 0, false, ::app::Uno::Collections::IEnumerator__Fuse_Controls_Internal_WrappedLine__typeof()),
        ::uNewFunction(".ctor", ArrayEnumerable__Fuse_Controls_Internal_WrappedLine__New_1, 0, true, ArrayEnumerable__Fuse_Controls_Internal_WrappedLine__typeof(), ::uGetArrayType(::app::Fuse::Controls::Internal::WrappedLine__typeof())));

    ::uRegisterType(type);
    return type;
}

void ArrayEnumerable__Fuse_Controls_Internal_WrappedLine___ObjInit(ArrayEnumerable__Fuse_Controls_Internal_WrappedLine* __this, ::uArray* source)
{
    __this->_source = source;
}

::uObject* ArrayEnumerable__Fuse_Controls_Internal_WrappedLine__GetEnumerator(ArrayEnumerable__Fuse_Controls_Internal_WrappedLine* __this)
{
    return (::uObject*)::app::Uno::Runtime::Implementation::Internal::ArrayEnumerator__Fuse_Controls_Internal_WrappedLine__New_1(NULL, __this->_source);
}

ArrayEnumerable__Fuse_Controls_Internal_WrappedLine* ArrayEnumerable__Fuse_Controls_Internal_WrappedLine__New_1(::uStatic* __this, ::uArray* source)
{
    ArrayEnumerable__Fuse_Controls_Internal_WrappedLine* inst = (ArrayEnumerable__Fuse_Controls_Internal_WrappedLine*)::uAllocObject(sizeof(ArrayEnumerable__Fuse_Controls_Internal_WrappedLine), ArrayEnumerable__Fuse_Controls_Internal_WrappedLine__typeof());
    inst->_ObjInit(source);
    return inst;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Runtime\Implementation\Internal\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

ArrayEnumerable__Fuse_Drawing_Batching_Batch__uType* ArrayEnumerable__Fuse_Drawing_Batching_Batch__typeof()
{
    static ::uStaticStrong<ArrayEnumerable__Fuse_Drawing_Batching_Batch__uType*> type;
    if (type != NULL) return type;

    type = (ArrayEnumerable__Fuse_Drawing_Batching_Batch__uType*)::uAllocClassType(sizeof(ArrayEnumerable__Fuse_Drawing_Batching_Batch__uType), "Uno.Runtime.Implementation.Internal.ArrayEnumerable<Fuse.Drawing.Batching.Batch>", false, 1, 1, 0);

    type->__interface_0.__fp_GetEnumerator = (::uObject*(*)(void*))ArrayEnumerable__Fuse_Drawing_Batching_Batch__GetEnumerator;

    type->SetInterfaces(
        ::app::Uno::Collections::IEnumerable__Fuse_Drawing_Batching_Batch__typeof(), offsetof(ArrayEnumerable__Fuse_Drawing_Batching_Batch__uType, __interface_0));

    type->SetStrongRefs(
        "_source", offsetof(ArrayEnumerable__Fuse_Drawing_Batching_Batch, _source));

    type->SetFields(1,
        ::uNewField("_source", NULL, offsetof(ArrayEnumerable__Fuse_Drawing_Batching_Batch, _source), ::uGetArrayType(::app::Fuse::Drawing::Batching::Batch__typeof())));

    type->SetFunctions(2,
        ::uNewFunction("GetEnumerator", ArrayEnumerable__Fuse_Drawing_Batching_Batch__GetEnumerator, 0, false, ::app::Uno::Collections::IEnumerator__Fuse_Drawing_Batching_Batch__typeof()),
        ::uNewFunction(".ctor", ArrayEnumerable__Fuse_Drawing_Batching_Batch__New_1, 0, true, ArrayEnumerable__Fuse_Drawing_Batching_Batch__typeof(), ::uGetArrayType(::app::Fuse::Drawing::Batching::Batch__typeof())));

    ::uRegisterType(type);
    return type;
}

void ArrayEnumerable__Fuse_Drawing_Batching_Batch___ObjInit(ArrayEnumerable__Fuse_Drawing_Batching_Batch* __this, ::uArray* source)
{
    __this->_source = source;
}

::uObject* ArrayEnumerable__Fuse_Drawing_Batching_Batch__GetEnumerator(ArrayEnumerable__Fuse_Drawing_Batching_Batch* __this)
{
    return (::uObject*)::app::Uno::Runtime::Implementation::Internal::ArrayEnumerator__Fuse_Drawing_Batching_Batch__New_1(NULL, __this->_source);
}

ArrayEnumerable__Fuse_Drawing_Batching_Batch* ArrayEnumerable__Fuse_Drawing_Batching_Batch__New_1(::uStatic* __this, ::uArray* source)
{
    ArrayEnumerable__Fuse_Drawing_Batching_Batch* inst = (ArrayEnumerable__Fuse_Drawing_Batching_Batch*)::uAllocObject(sizeof(ArrayEnumerable__Fuse_Drawing_Batching_Batch), ArrayEnumerable__Fuse_Drawing_Batching_Batch__typeof());
    inst->_ObjInit(source);
    return inst;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Runtime\Implementation\Internal\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

ArrayEnumerable__Fuse_Drawing_Border__uType* ArrayEnumerable__Fuse_Drawing_Border__typeof()
{
    static ::uStaticStrong<ArrayEnumerable__Fuse_Drawing_Border__uType*> type;
    if (type != NULL) return type;

    type = (ArrayEnumerable__Fuse_Drawing_Border__uType*)::uAllocClassType(sizeof(ArrayEnumerable__Fuse_Drawing_Border__uType), "Uno.Runtime.Implementation.Internal.ArrayEnumerable<Fuse.Drawing.Border>", false, 1, 1, 0);

    type->__interface_0.__fp_GetEnumerator = (::uObject*(*)(void*))ArrayEnumerable__Fuse_Drawing_Border__GetEnumerator;

    type->SetInterfaces(
        ::app::Uno::Collections::IEnumerable__Fuse_Drawing_Border__typeof(), offsetof(ArrayEnumerable__Fuse_Drawing_Border__uType, __interface_0));

    type->SetStrongRefs(
        "_source", offsetof(ArrayEnumerable__Fuse_Drawing_Border, _source));

    type->SetFields(1,
        ::uNewField("_source", NULL, offsetof(ArrayEnumerable__Fuse_Drawing_Border, _source), ::uGetArrayType(::app::Fuse::Drawing::Border__typeof())));

    type->SetFunctions(2,
        ::uNewFunction("GetEnumerator", ArrayEnumerable__Fuse_Drawing_Border__GetEnumerator, 0, false, ::app::Uno::Collections::IEnumerator__Fuse_Drawing_Border__typeof()),
        ::uNewFunction(".ctor", ArrayEnumerable__Fuse_Drawing_Border__New_1, 0, true, ArrayEnumerable__Fuse_Drawing_Border__typeof(), ::uGetArrayType(::app::Fuse::Drawing::Border__typeof())));

    ::uRegisterType(type);
    return type;
}

void ArrayEnumerable__Fuse_Drawing_Border___ObjInit(ArrayEnumerable__Fuse_Drawing_Border* __this, ::uArray* source)
{
    __this->_source = source;
}

::uObject* ArrayEnumerable__Fuse_Drawing_Border__GetEnumerator(ArrayEnumerable__Fuse_Drawing_Border* __this)
{
    return (::uObject*)::app::Uno::Runtime::Implementation::Internal::ArrayEnumerator__Fuse_Drawing_Border__New_1(NULL, __this->_source);
}

ArrayEnumerable__Fuse_Drawing_Border* ArrayEnumerable__Fuse_Drawing_Border__New_1(::uStatic* __this, ::uArray* source)
{
    ArrayEnumerable__Fuse_Drawing_Border* inst = (ArrayEnumerable__Fuse_Drawing_Border*)::uAllocObject(sizeof(ArrayEnumerable__Fuse_Drawing_Border), ArrayEnumerable__Fuse_Drawing_Border__typeof());
    inst->_ObjInit(source);
    return inst;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Runtime\Implementation\Internal\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

ArrayEnumerable__Fuse_Drawing_Contour__uType* ArrayEnumerable__Fuse_Drawing_Contour__typeof()
{
    static ::uStaticStrong<ArrayEnumerable__Fuse_Drawing_Contour__uType*> type;
    if (type != NULL) return type;

    type = (ArrayEnumerable__Fuse_Drawing_Contour__uType*)::uAllocClassType(sizeof(ArrayEnumerable__Fuse_Drawing_Contour__uType), "Uno.Runtime.Implementation.Internal.ArrayEnumerable<Fuse.Drawing.Contour>", false, 1, 1, 0);

    type->__interface_0.__fp_GetEnumerator = (::uObject*(*)(void*))ArrayEnumerable__Fuse_Drawing_Contour__GetEnumerator;

    type->SetInterfaces(
        ::app::Uno::Collections::IEnumerable__Fuse_Drawing_Contour__typeof(), offsetof(ArrayEnumerable__Fuse_Drawing_Contour__uType, __interface_0));

    type->SetStrongRefs(
        "_source", offsetof(ArrayEnumerable__Fuse_Drawing_Contour, _source));

    type->SetFields(1,
        ::uNewField("_source", NULL, offsetof(ArrayEnumerable__Fuse_Drawing_Contour, _source), ::uGetArrayType(::app::Fuse::Drawing::Contour__typeof())));

    type->SetFunctions(2,
        ::uNewFunction("GetEnumerator", ArrayEnumerable__Fuse_Drawing_Contour__GetEnumerator, 0, false, ::app::Uno::Collections::IEnumerator__Fuse_Drawing_Contour__typeof()),
        ::uNewFunction(".ctor", ArrayEnumerable__Fuse_Drawing_Contour__New_1, 0, true, ArrayEnumerable__Fuse_Drawing_Contour__typeof(), ::uGetArrayType(::app::Fuse::Drawing::Contour__typeof())));

    ::uRegisterType(type);
    return type;
}

void ArrayEnumerable__Fuse_Drawing_Contour___ObjInit(ArrayEnumerable__Fuse_Drawing_Contour* __this, ::uArray* source)
{
    __this->_source = source;
}

::uObject* ArrayEnumerable__Fuse_Drawing_Contour__GetEnumerator(ArrayEnumerable__Fuse_Drawing_Contour* __this)
{
    return (::uObject*)::app::Uno::Runtime::Implementation::Internal::ArrayEnumerator__Fuse_Drawing_Contour__New_1(NULL, __this->_source);
}

ArrayEnumerable__Fuse_Drawing_Contour* ArrayEnumerable__Fuse_Drawing_Contour__New_1(::uStatic* __this, ::uArray* source)
{
    ArrayEnumerable__Fuse_Drawing_Contour* inst = (ArrayEnumerable__Fuse_Drawing_Contour*)::uAllocObject(sizeof(ArrayEnumerable__Fuse_Drawing_Contour), ArrayEnumerable__Fuse_Drawing_Contour__typeof());
    inst->_ObjInit(source);
    return inst;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Runtime\Implementation\Internal\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

ArrayEnumerable__Fuse_Drawing_GradientStop__uType* ArrayEnumerable__Fuse_Drawing_GradientStop__typeof()
{
    static ::uStaticStrong<ArrayEnumerable__Fuse_Drawing_GradientStop__uType*> type;
    if (type != NULL) return type;

    type = (ArrayEnumerable__Fuse_Drawing_GradientStop__uType*)::uAllocClassType(sizeof(ArrayEnumerable__Fuse_Drawing_GradientStop__uType), "Uno.Runtime.Implementation.Internal.ArrayEnumerable<Fuse.Drawing.GradientStop>", false, 1, 1, 0);

    type->__interface_0.__fp_GetEnumerator = (::uObject*(*)(void*))ArrayEnumerable__Fuse_Drawing_GradientStop__GetEnumerator;

    type->SetInterfaces(
        ::app::Uno::Collections::IEnumerable__Fuse_Drawing_GradientStop__typeof(), offsetof(ArrayEnumerable__Fuse_Drawing_GradientStop__uType, __interface_0));

    type->SetStrongRefs(
        "_source", offsetof(ArrayEnumerable__Fuse_Drawing_GradientStop, _source));

    type->SetFields(1,
        ::uNewField("_source", NULL, offsetof(ArrayEnumerable__Fuse_Drawing_GradientStop, _source), ::uGetArrayType(::app::Fuse::Drawing::GradientStop__typeof())));

    type->SetFunctions(2,
        ::uNewFunction("GetEnumerator", ArrayEnumerable__Fuse_Drawing_GradientStop__GetEnumerator, 0, false, ::app::Uno::Collections::IEnumerator__Fuse_Drawing_GradientStop__typeof()),
        ::uNewFunction(".ctor", ArrayEnumerable__Fuse_Drawing_GradientStop__New_1, 0, true, ArrayEnumerable__Fuse_Drawing_GradientStop__typeof(), ::uGetArrayType(::app::Fuse::Drawing::GradientStop__typeof())));

    ::uRegisterType(type);
    return type;
}

void ArrayEnumerable__Fuse_Drawing_GradientStop___ObjInit(ArrayEnumerable__Fuse_Drawing_GradientStop* __this, ::uArray* source)
{
    __this->_source = source;
}

::uObject* ArrayEnumerable__Fuse_Drawing_GradientStop__GetEnumerator(ArrayEnumerable__Fuse_Drawing_GradientStop* __this)
{
    return (::uObject*)::app::Uno::Runtime::Implementation::Internal::ArrayEnumerator__Fuse_Drawing_GradientStop__New_1(NULL, __this->_source);
}

ArrayEnumerable__Fuse_Drawing_GradientStop* ArrayEnumerable__Fuse_Drawing_GradientStop__New_1(::uStatic* __this, ::uArray* source)
{
    ArrayEnumerable__Fuse_Drawing_GradientStop* inst = (ArrayEnumerable__Fuse_Drawing_GradientStop*)::uAllocObject(sizeof(ArrayEnumerable__Fuse_Drawing_GradientStop), ArrayEnumerable__Fuse_Drawing_GradientStop__typeof());
    inst->_ObjInit(source);
    return inst;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Runtime\Implementation\Internal\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

ArrayEnumerable__Fuse_Drawing_PolygonDrawable__uType* ArrayEnumerable__Fuse_Drawing_PolygonDrawable__typeof()
{
    static ::uStaticStrong<ArrayEnumerable__Fuse_Drawing_PolygonDrawable__uType*> type;
    if (type != NULL) return type;

    type = (ArrayEnumerable__Fuse_Drawing_PolygonDrawable__uType*)::uAllocClassType(sizeof(ArrayEnumerable__Fuse_Drawing_PolygonDrawable__uType), "Uno.Runtime.Implementation.Internal.ArrayEnumerable<Fuse.Drawing.PolygonDrawable>", false, 1, 1, 0);

    type->__interface_0.__fp_GetEnumerator = (::uObject*(*)(void*))ArrayEnumerable__Fuse_Drawing_PolygonDrawable__GetEnumerator;

    type->SetInterfaces(
        ::app::Uno::Collections::IEnumerable__Fuse_Drawing_PolygonDrawable__typeof(), offsetof(ArrayEnumerable__Fuse_Drawing_PolygonDrawable__uType, __interface_0));

    type->SetStrongRefs(
        "_source", offsetof(ArrayEnumerable__Fuse_Drawing_PolygonDrawable, _source));

    type->SetFields(1,
        ::uNewField("_source", NULL, offsetof(ArrayEnumerable__Fuse_Drawing_PolygonDrawable, _source), ::uGetArrayType(::app::Fuse::Drawing::PolygonDrawable__typeof())));

    type->SetFunctions(2,
        ::uNewFunction("GetEnumerator", ArrayEnumerable__Fuse_Drawing_PolygonDrawable__GetEnumerator, 0, false, ::app::Uno::Collections::IEnumerator__Fuse_Drawing_PolygonDrawable__typeof()),
        ::uNewFunction(".ctor", ArrayEnumerable__Fuse_Drawing_PolygonDrawable__New_1, 0, true, ArrayEnumerable__Fuse_Drawing_PolygonDrawable__typeof(), ::uGetArrayType(::app::Fuse::Drawing::PolygonDrawable__typeof())));

    ::uRegisterType(type);
    return type;
}

void ArrayEnumerable__Fuse_Drawing_PolygonDrawable___ObjInit(ArrayEnumerable__Fuse_Drawing_PolygonDrawable* __this, ::uArray* source)
{
    __this->_source = source;
}

::uObject* ArrayEnumerable__Fuse_Drawing_PolygonDrawable__GetEnumerator(ArrayEnumerable__Fuse_Drawing_PolygonDrawable* __this)
{
    return (::uObject*)::app::Uno::Runtime::Implementation::Internal::ArrayEnumerator__Fuse_Drawing_PolygonDrawable__New_1(NULL, __this->_source);
}

ArrayEnumerable__Fuse_Drawing_PolygonDrawable* ArrayEnumerable__Fuse_Drawing_PolygonDrawable__New_1(::uStatic* __this, ::uArray* source)
{
    ArrayEnumerable__Fuse_Drawing_PolygonDrawable* inst = (ArrayEnumerable__Fuse_Drawing_PolygonDrawable*)::uAllocObject(sizeof(ArrayEnumerable__Fuse_Drawing_PolygonDrawable), ArrayEnumerable__Fuse_Drawing_PolygonDrawable__typeof());
    inst->_ObjInit(source);
    return inst;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Runtime\Implementation\Internal\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

ArrayEnumerable__Outracks_Simulator_Bytecode_BindVariable__uType* ArrayEnumerable__Outracks_Simulator_Bytecode_BindVariable__typeof()
{
    static ::uStaticStrong<ArrayEnumerable__Outracks_Simulator_Bytecode_BindVariable__uType*> type;
    if (type != NULL) return type;

    type = (ArrayEnumerable__Outracks_Simulator_Bytecode_BindVariable__uType*)::uAllocClassType(sizeof(ArrayEnumerable__Outracks_Simulator_Bytecode_BindVariable__uType), "Uno.Runtime.Implementation.Internal.ArrayEnumerable<Outracks.Simulator.Bytecode.BindVariable>", false, 1, 1, 0);

    type->__interface_0.__fp_GetEnumerator = (::uObject*(*)(void*))ArrayEnumerable__Outracks_Simulator_Bytecode_BindVariable__GetEnumerator;

    type->SetInterfaces(
        ::app::Uno::Collections::IEnumerable__Outracks_Simulator_Bytecode_BindVariable__typeof(), offsetof(ArrayEnumerable__Outracks_Simulator_Bytecode_BindVariable__uType, __interface_0));

    type->SetStrongRefs(
        "_source", offsetof(ArrayEnumerable__Outracks_Simulator_Bytecode_BindVariable, _source));

    type->SetFields(1,
        ::uNewField("_source", NULL, offsetof(ArrayEnumerable__Outracks_Simulator_Bytecode_BindVariable, _source), ::uGetArrayType(::app::Outracks::Simulator::Bytecode::BindVariable__typeof())));

    type->SetFunctions(2,
        ::uNewFunction("GetEnumerator", ArrayEnumerable__Outracks_Simulator_Bytecode_BindVariable__GetEnumerator, 0, false, ::app::Uno::Collections::IEnumerator__Outracks_Simulator_Bytecode_BindVariable__typeof()),
        ::uNewFunction(".ctor", ArrayEnumerable__Outracks_Simulator_Bytecode_BindVariable__New_1, 0, true, ArrayEnumerable__Outracks_Simulator_Bytecode_BindVariable__typeof(), ::uGetArrayType(::app::Outracks::Simulator::Bytecode::BindVariable__typeof())));

    ::uRegisterType(type);
    return type;
}

void ArrayEnumerable__Outracks_Simulator_Bytecode_BindVariable___ObjInit(ArrayEnumerable__Outracks_Simulator_Bytecode_BindVariable* __this, ::uArray* source)
{
    __this->_source = source;
}

::uObject* ArrayEnumerable__Outracks_Simulator_Bytecode_BindVariable__GetEnumerator(ArrayEnumerable__Outracks_Simulator_Bytecode_BindVariable* __this)
{
    return (::uObject*)::app::Uno::Runtime::Implementation::Internal::ArrayEnumerator__Outracks_Simulator_Bytecode_BindVariable__New_1(NULL, __this->_source);
}

ArrayEnumerable__Outracks_Simulator_Bytecode_BindVariable* ArrayEnumerable__Outracks_Simulator_Bytecode_BindVariable__New_1(::uStatic* __this, ::uArray* source)
{
    ArrayEnumerable__Outracks_Simulator_Bytecode_BindVariable* inst = (ArrayEnumerable__Outracks_Simulator_Bytecode_BindVariable*)::uAllocObject(sizeof(ArrayEnumerable__Outracks_Simulator_Bytecode_BindVariable), ArrayEnumerable__Outracks_Simulator_Bytecode_BindVariable__typeof());
    inst->_ObjInit(source);
    return inst;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Runtime\Implementation\Internal\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

ArrayEnumerable__Outracks_Simulator_Bytecode_Expression__uType* ArrayEnumerable__Outracks_Simulator_Bytecode_Expression__typeof()
{
    static ::uStaticStrong<ArrayEnumerable__Outracks_Simulator_Bytecode_Expression__uType*> type;
    if (type != NULL) return type;

    type = (ArrayEnumerable__Outracks_Simulator_Bytecode_Expression__uType*)::uAllocClassType(sizeof(ArrayEnumerable__Outracks_Simulator_Bytecode_Expression__uType), "Uno.Runtime.Implementation.Internal.ArrayEnumerable<Outracks.Simulator.Bytecode.Expression>", false, 1, 1, 0);

    type->__interface_0.__fp_GetEnumerator = (::uObject*(*)(void*))ArrayEnumerable__Outracks_Simulator_Bytecode_Expression__GetEnumerator;

    type->SetInterfaces(
        ::app::Uno::Collections::IEnumerable__Outracks_Simulator_Bytecode_Expression__typeof(), offsetof(ArrayEnumerable__Outracks_Simulator_Bytecode_Expression__uType, __interface_0));

    type->SetStrongRefs(
        "_source", offsetof(ArrayEnumerable__Outracks_Simulator_Bytecode_Expression, _source));

    type->SetFields(1,
        ::uNewField("_source", NULL, offsetof(ArrayEnumerable__Outracks_Simulator_Bytecode_Expression, _source), ::uGetArrayType(::app::Outracks::Simulator::Bytecode::Expression__typeof())));

    type->SetFunctions(2,
        ::uNewFunction("GetEnumerator", ArrayEnumerable__Outracks_Simulator_Bytecode_Expression__GetEnumerator, 0, false, ::app::Uno::Collections::IEnumerator__Outracks_Simulator_Bytecode_Expression__typeof()),
        ::uNewFunction(".ctor", ArrayEnumerable__Outracks_Simulator_Bytecode_Expression__New_1, 0, true, ArrayEnumerable__Outracks_Simulator_Bytecode_Expression__typeof(), ::uGetArrayType(::app::Outracks::Simulator::Bytecode::Expression__typeof())));

    ::uRegisterType(type);
    return type;
}

void ArrayEnumerable__Outracks_Simulator_Bytecode_Expression___ObjInit(ArrayEnumerable__Outracks_Simulator_Bytecode_Expression* __this, ::uArray* source)
{
    __this->_source = source;
}

::uObject* ArrayEnumerable__Outracks_Simulator_Bytecode_Expression__GetEnumerator(ArrayEnumerable__Outracks_Simulator_Bytecode_Expression* __this)
{
    return (::uObject*)::app::Uno::Runtime::Implementation::Internal::ArrayEnumerator__Outracks_Simulator_Bytecode_Expression__New_1(NULL, __this->_source);
}

ArrayEnumerable__Outracks_Simulator_Bytecode_Expression* ArrayEnumerable__Outracks_Simulator_Bytecode_Expression__New_1(::uStatic* __this, ::uArray* source)
{
    ArrayEnumerable__Outracks_Simulator_Bytecode_Expression* inst = (ArrayEnumerable__Outracks_Simulator_Bytecode_Expression*)::uAllocObject(sizeof(ArrayEnumerable__Outracks_Simulator_Bytecode_Expression), ArrayEnumerable__Outracks_Simulator_Bytecode_Expression__typeof());
    inst->_ObjInit(source);
    return inst;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Runtime\Implementation\Internal\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

ArrayEnumerable__Outracks_Simulator_Bytecode_Parameter__uType* ArrayEnumerable__Outracks_Simulator_Bytecode_Parameter__typeof()
{
    static ::uStaticStrong<ArrayEnumerable__Outracks_Simulator_Bytecode_Parameter__uType*> type;
    if (type != NULL) return type;

    type = (ArrayEnumerable__Outracks_Simulator_Bytecode_Parameter__uType*)::uAllocClassType(sizeof(ArrayEnumerable__Outracks_Simulator_Bytecode_Parameter__uType), "Uno.Runtime.Implementation.Internal.ArrayEnumerable<Outracks.Simulator.Bytecode.Parameter>", false, 1, 1, 0);

    type->__interface_0.__fp_GetEnumerator = (::uObject*(*)(void*))ArrayEnumerable__Outracks_Simulator_Bytecode_Parameter__GetEnumerator;

    type->SetInterfaces(
        ::app::Uno::Collections::IEnumerable__Outracks_Simulator_Bytecode_Parameter__typeof(), offsetof(ArrayEnumerable__Outracks_Simulator_Bytecode_Parameter__uType, __interface_0));

    type->SetStrongRefs(
        "_source", offsetof(ArrayEnumerable__Outracks_Simulator_Bytecode_Parameter, _source));

    type->SetFields(1,
        ::uNewField("_source", NULL, offsetof(ArrayEnumerable__Outracks_Simulator_Bytecode_Parameter, _source), ::uGetArrayType(::app::Outracks::Simulator::Bytecode::Parameter__typeof())));

    type->SetFunctions(2,
        ::uNewFunction("GetEnumerator", ArrayEnumerable__Outracks_Simulator_Bytecode_Parameter__GetEnumerator, 0, false, ::app::Uno::Collections::IEnumerator__Outracks_Simulator_Bytecode_Parameter__typeof()),
        ::uNewFunction(".ctor", ArrayEnumerable__Outracks_Simulator_Bytecode_Parameter__New_1, 0, true, ArrayEnumerable__Outracks_Simulator_Bytecode_Parameter__typeof(), ::uGetArrayType(::app::Outracks::Simulator::Bytecode::Parameter__typeof())));

    ::uRegisterType(type);
    return type;
}

void ArrayEnumerable__Outracks_Simulator_Bytecode_Parameter___ObjInit(ArrayEnumerable__Outracks_Simulator_Bytecode_Parameter* __this, ::uArray* source)
{
    __this->_source = source;
}

::uObject* ArrayEnumerable__Outracks_Simulator_Bytecode_Parameter__GetEnumerator(ArrayEnumerable__Outracks_Simulator_Bytecode_Parameter* __this)
{
    return (::uObject*)::app::Uno::Runtime::Implementation::Internal::ArrayEnumerator__Outracks_Simulator_Bytecode_Parameter__New_1(NULL, __this->_source);
}

ArrayEnumerable__Outracks_Simulator_Bytecode_Parameter* ArrayEnumerable__Outracks_Simulator_Bytecode_Parameter__New_1(::uStatic* __this, ::uArray* source)
{
    ArrayEnumerable__Outracks_Simulator_Bytecode_Parameter* inst = (ArrayEnumerable__Outracks_Simulator_Bytecode_Parameter*)::uAllocObject(sizeof(ArrayEnumerable__Outracks_Simulator_Bytecode_Parameter), ArrayEnumerable__Outracks_Simulator_Bytecode_Parameter__typeof());
    inst->_ObjInit(source);
    return inst;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Runtime\Implementation\Internal\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

ArrayEnumerable__Outracks_Simulator_Bytecode_Statement__uType* ArrayEnumerable__Outracks_Simulator_Bytecode_Statement__typeof()
{
    static ::uStaticStrong<ArrayEnumerable__Outracks_Simulator_Bytecode_Statement__uType*> type;
    if (type != NULL) return type;

    type = (ArrayEnumerable__Outracks_Simulator_Bytecode_Statement__uType*)::uAllocClassType(sizeof(ArrayEnumerable__Outracks_Simulator_Bytecode_Statement__uType), "Uno.Runtime.Implementation.Internal.ArrayEnumerable<Outracks.Simulator.Bytecode.Statement>", false, 1, 1, 0);

    type->__interface_0.__fp_GetEnumerator = (::uObject*(*)(void*))ArrayEnumerable__Outracks_Simulator_Bytecode_Statement__GetEnumerator;

    type->SetInterfaces(
        ::app::Uno::Collections::IEnumerable__Outracks_Simulator_Bytecode_Statement__typeof(), offsetof(ArrayEnumerable__Outracks_Simulator_Bytecode_Statement__uType, __interface_0));

    type->SetStrongRefs(
        "_source", offsetof(ArrayEnumerable__Outracks_Simulator_Bytecode_Statement, _source));

    type->SetFields(1,
        ::uNewField("_source", NULL, offsetof(ArrayEnumerable__Outracks_Simulator_Bytecode_Statement, _source), ::uGetArrayType(::app::Outracks::Simulator::Bytecode::Statement__typeof())));

    type->SetFunctions(2,
        ::uNewFunction("GetEnumerator", ArrayEnumerable__Outracks_Simulator_Bytecode_Statement__GetEnumerator, 0, false, ::app::Uno::Collections::IEnumerator__Outracks_Simulator_Bytecode_Statement__typeof()),
        ::uNewFunction(".ctor", ArrayEnumerable__Outracks_Simulator_Bytecode_Statement__New_1, 0, true, ArrayEnumerable__Outracks_Simulator_Bytecode_Statement__typeof(), ::uGetArrayType(::app::Outracks::Simulator::Bytecode::Statement__typeof())));

    ::uRegisterType(type);
    return type;
}

void ArrayEnumerable__Outracks_Simulator_Bytecode_Statement___ObjInit(ArrayEnumerable__Outracks_Simulator_Bytecode_Statement* __this, ::uArray* source)
{
    __this->_source = source;
}

::uObject* ArrayEnumerable__Outracks_Simulator_Bytecode_Statement__GetEnumerator(ArrayEnumerable__Outracks_Simulator_Bytecode_Statement* __this)
{
    return (::uObject*)::app::Uno::Runtime::Implementation::Internal::ArrayEnumerator__Outracks_Simulator_Bytecode_Statement__New_1(NULL, __this->_source);
}

ArrayEnumerable__Outracks_Simulator_Bytecode_Statement* ArrayEnumerable__Outracks_Simulator_Bytecode_Statement__New_1(::uStatic* __this, ::uArray* source)
{
    ArrayEnumerable__Outracks_Simulator_Bytecode_Statement* inst = (ArrayEnumerable__Outracks_Simulator_Bytecode_Statement*)::uAllocObject(sizeof(ArrayEnumerable__Outracks_Simulator_Bytecode_Statement), ArrayEnumerable__Outracks_Simulator_Bytecode_Statement__typeof());
    inst->_ObjInit(source);
    return inst;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Runtime\Implementation\Internal\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

ArrayEnumerable__Outracks_Simulator_Bytecode_TypeName__uType* ArrayEnumerable__Outracks_Simulator_Bytecode_TypeName__typeof()
{
    static ::uStaticStrong<ArrayEnumerable__Outracks_Simulator_Bytecode_TypeName__uType*> type;
    if (type != NULL) return type;

    type = (ArrayEnumerable__Outracks_Simulator_Bytecode_TypeName__uType*)::uAllocClassType(sizeof(ArrayEnumerable__Outracks_Simulator_Bytecode_TypeName__uType), "Uno.Runtime.Implementation.Internal.ArrayEnumerable<Outracks.Simulator.Bytecode.TypeName>", false, 1, 1, 0);

    type->__interface_0.__fp_GetEnumerator = (::uObject*(*)(void*))ArrayEnumerable__Outracks_Simulator_Bytecode_TypeName__GetEnumerator;

    type->SetInterfaces(
        ::app::Uno::Collections::IEnumerable__Outracks_Simulator_Bytecode_TypeName__typeof(), offsetof(ArrayEnumerable__Outracks_Simulator_Bytecode_TypeName__uType, __interface_0));

    type->SetStrongRefs(
        "_source", offsetof(ArrayEnumerable__Outracks_Simulator_Bytecode_TypeName, _source));

    type->SetFields(1,
        ::uNewField("_source", NULL, offsetof(ArrayEnumerable__Outracks_Simulator_Bytecode_TypeName, _source), ::uGetArrayType(::app::Outracks::Simulator::Bytecode::TypeName__typeof())));

    type->SetFunctions(2,
        ::uNewFunction("GetEnumerator", ArrayEnumerable__Outracks_Simulator_Bytecode_TypeName__GetEnumerator, 0, false, ::app::Uno::Collections::IEnumerator__Outracks_Simulator_Bytecode_TypeName__typeof()),
        ::uNewFunction(".ctor", ArrayEnumerable__Outracks_Simulator_Bytecode_TypeName__New_1, 0, true, ArrayEnumerable__Outracks_Simulator_Bytecode_TypeName__typeof(), ::uGetArrayType(::app::Outracks::Simulator::Bytecode::TypeName__typeof())));

    ::uRegisterType(type);
    return type;
}

void ArrayEnumerable__Outracks_Simulator_Bytecode_TypeName___ObjInit(ArrayEnumerable__Outracks_Simulator_Bytecode_TypeName* __this, ::uArray* source)
{
    __this->_source = source;
}

::uObject* ArrayEnumerable__Outracks_Simulator_Bytecode_TypeName__GetEnumerator(ArrayEnumerable__Outracks_Simulator_Bytecode_TypeName* __this)
{
    return (::uObject*)::app::Uno::Runtime::Implementation::Internal::ArrayEnumerator__Outracks_Simulator_Bytecode_TypeName__New_1(NULL, __this->_source);
}

ArrayEnumerable__Outracks_Simulator_Bytecode_TypeName* ArrayEnumerable__Outracks_Simulator_Bytecode_TypeName__New_1(::uStatic* __this, ::uArray* source)
{
    ArrayEnumerable__Outracks_Simulator_Bytecode_TypeName* inst = (ArrayEnumerable__Outracks_Simulator_Bytecode_TypeName*)::uAllocObject(sizeof(ArrayEnumerable__Outracks_Simulator_Bytecode_TypeName), ArrayEnumerable__Outracks_Simulator_Bytecode_TypeName__typeof());
    inst->_ObjInit(source);
    return inst;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Runtime\Implementation\Internal\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

ArrayEnumerable__Outracks_Simulator_DialogButton__uType* ArrayEnumerable__Outracks_Simulator_DialogButton__typeof()
{
    static ::uStaticStrong<ArrayEnumerable__Outracks_Simulator_DialogButton__uType*> type;
    if (type != NULL) return type;

    type = (ArrayEnumerable__Outracks_Simulator_DialogButton__uType*)::uAllocClassType(sizeof(ArrayEnumerable__Outracks_Simulator_DialogButton__uType), "Uno.Runtime.Implementation.Internal.ArrayEnumerable<Outracks.Simulator.DialogButton>", false, 1, 1, 0);

    type->__interface_0.__fp_GetEnumerator = (::uObject*(*)(void*))ArrayEnumerable__Outracks_Simulator_DialogButton__GetEnumerator;

    type->SetInterfaces(
        ::app::Uno::Collections::IEnumerable__Outracks_Simulator_DialogButton__typeof(), offsetof(ArrayEnumerable__Outracks_Simulator_DialogButton__uType, __interface_0));

    type->SetStrongRefs(
        "_source", offsetof(ArrayEnumerable__Outracks_Simulator_DialogButton, _source));

    type->SetFields(1,
        ::uNewField("_source", NULL, offsetof(ArrayEnumerable__Outracks_Simulator_DialogButton, _source), ::uGetArrayType(::app::Outracks::Simulator::DialogButton__typeof())));

    type->SetFunctions(2,
        ::uNewFunction("GetEnumerator", ArrayEnumerable__Outracks_Simulator_DialogButton__GetEnumerator, 0, false, ::app::Uno::Collections::IEnumerator__Outracks_Simulator_DialogButton__typeof()),
        ::uNewFunction(".ctor", ArrayEnumerable__Outracks_Simulator_DialogButton__New_1, 0, true, ArrayEnumerable__Outracks_Simulator_DialogButton__typeof(), ::uGetArrayType(::app::Outracks::Simulator::DialogButton__typeof())));

    ::uRegisterType(type);
    return type;
}

void ArrayEnumerable__Outracks_Simulator_DialogButton___ObjInit(ArrayEnumerable__Outracks_Simulator_DialogButton* __this, ::uArray* source)
{
    __this->_source = source;
}

::uObject* ArrayEnumerable__Outracks_Simulator_DialogButton__GetEnumerator(ArrayEnumerable__Outracks_Simulator_DialogButton* __this)
{
    return (::uObject*)::app::Uno::Runtime::Implementation::Internal::ArrayEnumerator__Outracks_Simulator_DialogButton__New_1(NULL, __this->_source);
}

ArrayEnumerable__Outracks_Simulator_DialogButton* ArrayEnumerable__Outracks_Simulator_DialogButton__New_1(::uStatic* __this, ::uArray* source)
{
    ArrayEnumerable__Outracks_Simulator_DialogButton* inst = (ArrayEnumerable__Outracks_Simulator_DialogButton*)::uAllocObject(sizeof(ArrayEnumerable__Outracks_Simulator_DialogButton), ArrayEnumerable__Outracks_Simulator_DialogButton__typeof());
    inst->_ObjInit(source);
    return inst;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Runtime\Implementation\Internal\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

ArrayEnumerable__Outracks_Simulator_Protocol_ExceptionInfo__uType* ArrayEnumerable__Outracks_Simulator_Protocol_ExceptionInfo__typeof()
{
    static ::uStaticStrong<ArrayEnumerable__Outracks_Simulator_Protocol_ExceptionInfo__uType*> type;
    if (type != NULL) return type;

    type = (ArrayEnumerable__Outracks_Simulator_Protocol_ExceptionInfo__uType*)::uAllocClassType(sizeof(ArrayEnumerable__Outracks_Simulator_Protocol_ExceptionInfo__uType), "Uno.Runtime.Implementation.Internal.ArrayEnumerable<Outracks.Simulator.Protocol.ExceptionInfo>", false, 1, 1, 0);

    type->__interface_0.__fp_GetEnumerator = (::uObject*(*)(void*))ArrayEnumerable__Outracks_Simulator_Protocol_ExceptionInfo__GetEnumerator;

    type->SetInterfaces(
        ::app::Uno::Collections::IEnumerable__Outracks_Simulator_Protocol_ExceptionInfo__typeof(), offsetof(ArrayEnumerable__Outracks_Simulator_Protocol_ExceptionInfo__uType, __interface_0));

    type->SetStrongRefs(
        "_source", offsetof(ArrayEnumerable__Outracks_Simulator_Protocol_ExceptionInfo, _source));

    type->SetFields(1,
        ::uNewField("_source", NULL, offsetof(ArrayEnumerable__Outracks_Simulator_Protocol_ExceptionInfo, _source), ::uGetArrayType(::app::Outracks::Simulator::Protocol::ExceptionInfo__typeof())));

    type->SetFunctions(2,
        ::uNewFunction("GetEnumerator", ArrayEnumerable__Outracks_Simulator_Protocol_ExceptionInfo__GetEnumerator, 0, false, ::app::Uno::Collections::IEnumerator__Outracks_Simulator_Protocol_ExceptionInfo__typeof()),
        ::uNewFunction(".ctor", ArrayEnumerable__Outracks_Simulator_Protocol_ExceptionInfo__New_1, 0, true, ArrayEnumerable__Outracks_Simulator_Protocol_ExceptionInfo__typeof(), ::uGetArrayType(::app::Outracks::Simulator::Protocol::ExceptionInfo__typeof())));

    ::uRegisterType(type);
    return type;
}

void ArrayEnumerable__Outracks_Simulator_Protocol_ExceptionInfo___ObjInit(ArrayEnumerable__Outracks_Simulator_Protocol_ExceptionInfo* __this, ::uArray* source)
{
    __this->_source = source;
}

::uObject* ArrayEnumerable__Outracks_Simulator_Protocol_ExceptionInfo__GetEnumerator(ArrayEnumerable__Outracks_Simulator_Protocol_ExceptionInfo* __this)
{
    return (::uObject*)::app::Uno::Runtime::Implementation::Internal::ArrayEnumerator__Outracks_Simulator_Protocol_ExceptionInfo__New_1(NULL, __this->_source);
}

ArrayEnumerable__Outracks_Simulator_Protocol_ExceptionInfo* ArrayEnumerable__Outracks_Simulator_Protocol_ExceptionInfo__New_1(::uStatic* __this, ::uArray* source)
{
    ArrayEnumerable__Outracks_Simulator_Protocol_ExceptionInfo* inst = (ArrayEnumerable__Outracks_Simulator_Protocol_ExceptionInfo*)::uAllocObject(sizeof(ArrayEnumerable__Outracks_Simulator_Protocol_ExceptionInfo), ArrayEnumerable__Outracks_Simulator_Protocol_ExceptionInfo__typeof());
    inst->_ObjInit(source);
    return inst;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Runtime\Implementation\Internal\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

ArrayEnumerable__Outracks_Simulator_Task_Outracks_Simulator_ISimulatorClient___uType* ArrayEnumerable__Outracks_Simulator_Task_Outracks_Simulator_ISimulatorClient___typeof()
{
    static ::uStaticStrong<ArrayEnumerable__Outracks_Simulator_Task_Outracks_Simulator_ISimulatorClient___uType*> type;
    if (type != NULL) return type;

    type = (ArrayEnumerable__Outracks_Simulator_Task_Outracks_Simulator_ISimulatorClient___uType*)::uAllocClassType(sizeof(ArrayEnumerable__Outracks_Simulator_Task_Outracks_Simulator_ISimulatorClient___uType), "Uno.Runtime.Implementation.Internal.ArrayEnumerable<Outracks.Simulator.Task<Outracks.Simulator.ISimulatorClient>>", false, 1, 1, 0);

    type->__interface_0.__fp_GetEnumerator = (::uObject*(*)(void*))ArrayEnumerable__Outracks_Simulator_Task_Outracks_Simulator_ISimulatorClient___GetEnumerator;

    type->SetInterfaces(
        ::app::Uno::Collections::IEnumerable__Outracks_Simulator_Task_Outracks_Simulator_ISimulatorClient___typeof(), offsetof(ArrayEnumerable__Outracks_Simulator_Task_Outracks_Simulator_ISimulatorClient___uType, __interface_0));

    type->SetStrongRefs(
        "_source", offsetof(ArrayEnumerable__Outracks_Simulator_Task_Outracks_Simulator_ISimulatorClient_, _source));

    type->SetFields(1,
        ::uNewField("_source", NULL, offsetof(ArrayEnumerable__Outracks_Simulator_Task_Outracks_Simulator_ISimulatorClient_, _source), ::uGetArrayType(::app::Outracks::Simulator::Task__Outracks_Simulator_ISimulatorClient__typeof())));

    type->SetFunctions(2,
        ::uNewFunction("GetEnumerator", ArrayEnumerable__Outracks_Simulator_Task_Outracks_Simulator_ISimulatorClient___GetEnumerator, 0, false, ::app::Uno::Collections::IEnumerator__Outracks_Simulator_Task_Outracks_Simulator_ISimulatorClient___typeof()),
        ::uNewFunction(".ctor", ArrayEnumerable__Outracks_Simulator_Task_Outracks_Simulator_ISimulatorClient___New_1, 0, true, ArrayEnumerable__Outracks_Simulator_Task_Outracks_Simulator_ISimulatorClient___typeof(), ::uGetArrayType(::app::Outracks::Simulator::Task__Outracks_Simulator_ISimulatorClient__typeof())));

    ::uRegisterType(type);
    return type;
}

void ArrayEnumerable__Outracks_Simulator_Task_Outracks_Simulator_ISimulatorClient____ObjInit(ArrayEnumerable__Outracks_Simulator_Task_Outracks_Simulator_ISimulatorClient_* __this, ::uArray* source)
{
    __this->_source = source;
}

::uObject* ArrayEnumerable__Outracks_Simulator_Task_Outracks_Simulator_ISimulatorClient___GetEnumerator(ArrayEnumerable__Outracks_Simulator_Task_Outracks_Simulator_ISimulatorClient_* __this)
{
    return (::uObject*)::app::Uno::Runtime::Implementation::Internal::ArrayEnumerator__Outracks_Simulator_Task_Outracks_Simulator_ISimulatorClient___New_1(NULL, __this->_source);
}

ArrayEnumerable__Outracks_Simulator_Task_Outracks_Simulator_ISimulatorClient_* ArrayEnumerable__Outracks_Simulator_Task_Outracks_Simulator_ISimulatorClient___New_1(::uStatic* __this, ::uArray* source)
{
    ArrayEnumerable__Outracks_Simulator_Task_Outracks_Simulator_ISimulatorClient_* inst = (ArrayEnumerable__Outracks_Simulator_Task_Outracks_Simulator_ISimulatorClient_*)::uAllocObject(sizeof(ArrayEnumerable__Outracks_Simulator_Task_Outracks_Simulator_ISimulatorClient_), ArrayEnumerable__Outracks_Simulator_Task_Outracks_Simulator_ISimulatorClient___typeof());
    inst->_ObjInit(source);
    return inst;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Runtime\Implementation\Internal\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

ArrayEnumerable__Outracks_Simulator_Task_Uno_Net_IPEndPoint_____uType* ArrayEnumerable__Outracks_Simulator_Task_Uno_Net_IPEndPoint_____typeof()
{
    static ::uStaticStrong<ArrayEnumerable__Outracks_Simulator_Task_Uno_Net_IPEndPoint_____uType*> type;
    if (type != NULL) return type;

    type = (ArrayEnumerable__Outracks_Simulator_Task_Uno_Net_IPEndPoint_____uType*)::uAllocClassType(sizeof(ArrayEnumerable__Outracks_Simulator_Task_Uno_Net_IPEndPoint_____uType), "Uno.Runtime.Implementation.Internal.ArrayEnumerable<Outracks.Simulator.Task<Uno.Net.IPEndPoint[]>>", false, 1, 1, 0);

    type->__interface_0.__fp_GetEnumerator = (::uObject*(*)(void*))ArrayEnumerable__Outracks_Simulator_Task_Uno_Net_IPEndPoint_____GetEnumerator;

    type->SetInterfaces(
        ::app::Uno::Collections::IEnumerable__Outracks_Simulator_Task_Uno_Net_IPEndPoint_____typeof(), offsetof(ArrayEnumerable__Outracks_Simulator_Task_Uno_Net_IPEndPoint_____uType, __interface_0));

    type->SetStrongRefs(
        "_source", offsetof(ArrayEnumerable__Outracks_Simulator_Task_Uno_Net_IPEndPoint___, _source));

    type->SetFields(1,
        ::uNewField("_source", NULL, offsetof(ArrayEnumerable__Outracks_Simulator_Task_Uno_Net_IPEndPoint___, _source), ::uGetArrayType(::app::Outracks::Simulator::Task__Uno_Net_IPEndPoint____typeof())));

    type->SetFunctions(2,
        ::uNewFunction("GetEnumerator", ArrayEnumerable__Outracks_Simulator_Task_Uno_Net_IPEndPoint_____GetEnumerator, 0, false, ::app::Uno::Collections::IEnumerator__Outracks_Simulator_Task_Uno_Net_IPEndPoint_____typeof()),
        ::uNewFunction(".ctor", ArrayEnumerable__Outracks_Simulator_Task_Uno_Net_IPEndPoint_____New_1, 0, true, ArrayEnumerable__Outracks_Simulator_Task_Uno_Net_IPEndPoint_____typeof(), ::uGetArrayType(::app::Outracks::Simulator::Task__Uno_Net_IPEndPoint____typeof())));

    ::uRegisterType(type);
    return type;
}

void ArrayEnumerable__Outracks_Simulator_Task_Uno_Net_IPEndPoint______ObjInit(ArrayEnumerable__Outracks_Simulator_Task_Uno_Net_IPEndPoint___* __this, ::uArray* source)
{
    __this->_source = source;
}

::uObject* ArrayEnumerable__Outracks_Simulator_Task_Uno_Net_IPEndPoint_____GetEnumerator(ArrayEnumerable__Outracks_Simulator_Task_Uno_Net_IPEndPoint___* __this)
{
    return (::uObject*)::app::Uno::Runtime::Implementation::Internal::ArrayEnumerator__Outracks_Simulator_Task_Uno_Net_IPEndPoint_____New_1(NULL, __this->_source);
}

ArrayEnumerable__Outracks_Simulator_Task_Uno_Net_IPEndPoint___* ArrayEnumerable__Outracks_Simulator_Task_Uno_Net_IPEndPoint_____New_1(::uStatic* __this, ::uArray* source)
{
    ArrayEnumerable__Outracks_Simulator_Task_Uno_Net_IPEndPoint___* inst = (ArrayEnumerable__Outracks_Simulator_Task_Uno_Net_IPEndPoint___*)::uAllocObject(sizeof(ArrayEnumerable__Outracks_Simulator_Task_Uno_Net_IPEndPoint___), ArrayEnumerable__Outracks_Simulator_Task_Uno_Net_IPEndPoint_____typeof());
    inst->_ObjInit(source);
    return inst;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Runtime\Implementation\Internal\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

ArrayEnumerable__string__uType* ArrayEnumerable__string__typeof()
{
    static ::uStaticStrong<ArrayEnumerable__string__uType*> type;
    if (type != NULL) return type;

    type = (ArrayEnumerable__string__uType*)::uAllocClassType(sizeof(ArrayEnumerable__string__uType), "Uno.Runtime.Implementation.Internal.ArrayEnumerable<string>", false, 1, 1, 0);

    type->__interface_0.__fp_GetEnumerator = (::uObject*(*)(void*))ArrayEnumerable__string__GetEnumerator;

    type->SetInterfaces(
        ::app::Uno::Collections::IEnumerable__string__typeof(), offsetof(ArrayEnumerable__string__uType, __interface_0));

    type->SetStrongRefs(
        "_source", offsetof(ArrayEnumerable__string, _source));

    type->SetFields(1,
        ::uNewField("_source", NULL, offsetof(ArrayEnumerable__string, _source), ::uGetArrayType(::app::Uno::String__typeof())));

    type->SetFunctions(2,
        ::uNewFunction("GetEnumerator", ArrayEnumerable__string__GetEnumerator, 0, false, ::app::Uno::Collections::IEnumerator__string__typeof()),
        ::uNewFunction(".ctor", ArrayEnumerable__string__New_1, 0, true, ArrayEnumerable__string__typeof(), ::uGetArrayType(::app::Uno::String__typeof())));

    ::uRegisterType(type);
    return type;
}

void ArrayEnumerable__string___ObjInit(ArrayEnumerable__string* __this, ::uArray* source)
{
    __this->_source = source;
}

::uObject* ArrayEnumerable__string__GetEnumerator(ArrayEnumerable__string* __this)
{
    return (::uObject*)::app::Uno::Runtime::Implementation::Internal::ArrayEnumerator__string__New_1(NULL, __this->_source);
}

ArrayEnumerable__string* ArrayEnumerable__string__New_1(::uStatic* __this, ::uArray* source)
{
    ArrayEnumerable__string* inst = (ArrayEnumerable__string*)::uAllocObject(sizeof(ArrayEnumerable__string), ArrayEnumerable__string__typeof());
    inst->_ObjInit(source);
    return inst;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Runtime\Implementation\Internal\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

ArrayEnumerable__Uno_Exception__uType* ArrayEnumerable__Uno_Exception__typeof()
{
    static ::uStaticStrong<ArrayEnumerable__Uno_Exception__uType*> type;
    if (type != NULL) return type;

    type = (ArrayEnumerable__Uno_Exception__uType*)::uAllocClassType(sizeof(ArrayEnumerable__Uno_Exception__uType), "Uno.Runtime.Implementation.Internal.ArrayEnumerable<Uno.Exception>", false, 1, 1, 0);

    type->__interface_0.__fp_GetEnumerator = (::uObject*(*)(void*))ArrayEnumerable__Uno_Exception__GetEnumerator;

    type->SetInterfaces(
        ::app::Uno::Collections::IEnumerable__Uno_Exception__typeof(), offsetof(ArrayEnumerable__Uno_Exception__uType, __interface_0));

    type->SetStrongRefs(
        "_source", offsetof(ArrayEnumerable__Uno_Exception, _source));

    type->SetFields(1,
        ::uNewField("_source", NULL, offsetof(ArrayEnumerable__Uno_Exception, _source), ::uGetArrayType(::app::Uno::Exception__typeof())));

    type->SetFunctions(2,
        ::uNewFunction("GetEnumerator", ArrayEnumerable__Uno_Exception__GetEnumerator, 0, false, ::app::Uno::Collections::IEnumerator__Uno_Exception__typeof()),
        ::uNewFunction(".ctor", ArrayEnumerable__Uno_Exception__New_1, 0, true, ArrayEnumerable__Uno_Exception__typeof(), ::uGetArrayType(::app::Uno::Exception__typeof())));

    ::uRegisterType(type);
    return type;
}

void ArrayEnumerable__Uno_Exception___ObjInit(ArrayEnumerable__Uno_Exception* __this, ::uArray* source)
{
    __this->_source = source;
}

::uObject* ArrayEnumerable__Uno_Exception__GetEnumerator(ArrayEnumerable__Uno_Exception* __this)
{
    return (::uObject*)::app::Uno::Runtime::Implementation::Internal::ArrayEnumerator__Uno_Exception__New_1(NULL, __this->_source);
}

ArrayEnumerable__Uno_Exception* ArrayEnumerable__Uno_Exception__New_1(::uStatic* __this, ::uArray* source)
{
    ArrayEnumerable__Uno_Exception* inst = (ArrayEnumerable__Uno_Exception*)::uAllocObject(sizeof(ArrayEnumerable__Uno_Exception), ArrayEnumerable__Uno_Exception__typeof());
    inst->_ObjInit(source);
    return inst;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Runtime\Implementation\Internal\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

ArrayEnumerable__Uno_Net_IPEndPoint__uType* ArrayEnumerable__Uno_Net_IPEndPoint__typeof()
{
    static ::uStaticStrong<ArrayEnumerable__Uno_Net_IPEndPoint__uType*> type;
    if (type != NULL) return type;

    type = (ArrayEnumerable__Uno_Net_IPEndPoint__uType*)::uAllocClassType(sizeof(ArrayEnumerable__Uno_Net_IPEndPoint__uType), "Uno.Runtime.Implementation.Internal.ArrayEnumerable<Uno.Net.IPEndPoint>", false, 1, 1, 0);

    type->__interface_0.__fp_GetEnumerator = (::uObject*(*)(void*))ArrayEnumerable__Uno_Net_IPEndPoint__GetEnumerator;

    type->SetInterfaces(
        ::app::Uno::Collections::IEnumerable__Uno_Net_IPEndPoint__typeof(), offsetof(ArrayEnumerable__Uno_Net_IPEndPoint__uType, __interface_0));

    type->SetStrongRefs(
        "_source", offsetof(ArrayEnumerable__Uno_Net_IPEndPoint, _source));

    type->SetFields(1,
        ::uNewField("_source", NULL, offsetof(ArrayEnumerable__Uno_Net_IPEndPoint, _source), ::uGetArrayType(::app::Uno::Net::IPEndPoint__typeof())));

    type->SetFunctions(2,
        ::uNewFunction("GetEnumerator", ArrayEnumerable__Uno_Net_IPEndPoint__GetEnumerator, 0, false, ::app::Uno::Collections::IEnumerator__Uno_Net_IPEndPoint__typeof()),
        ::uNewFunction(".ctor", ArrayEnumerable__Uno_Net_IPEndPoint__New_1, 0, true, ArrayEnumerable__Uno_Net_IPEndPoint__typeof(), ::uGetArrayType(::app::Uno::Net::IPEndPoint__typeof())));

    ::uRegisterType(type);
    return type;
}

void ArrayEnumerable__Uno_Net_IPEndPoint___ObjInit(ArrayEnumerable__Uno_Net_IPEndPoint* __this, ::uArray* source)
{
    __this->_source = source;
}

::uObject* ArrayEnumerable__Uno_Net_IPEndPoint__GetEnumerator(ArrayEnumerable__Uno_Net_IPEndPoint* __this)
{
    return (::uObject*)::app::Uno::Runtime::Implementation::Internal::ArrayEnumerator__Uno_Net_IPEndPoint__New_1(NULL, __this->_source);
}

ArrayEnumerable__Uno_Net_IPEndPoint* ArrayEnumerable__Uno_Net_IPEndPoint__New_1(::uStatic* __this, ::uArray* source)
{
    ArrayEnumerable__Uno_Net_IPEndPoint* inst = (ArrayEnumerable__Uno_Net_IPEndPoint*)::uAllocObject(sizeof(ArrayEnumerable__Uno_Net_IPEndPoint), ArrayEnumerable__Uno_Net_IPEndPoint__typeof());
    inst->_ObjInit(source);
    return inst;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Runtime\Implementation\Internal\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

ArrayEnumerable__Uno_Reflection_CppField__uType* ArrayEnumerable__Uno_Reflection_CppField__typeof()
{
    static ::uStaticStrong<ArrayEnumerable__Uno_Reflection_CppField__uType*> type;
    if (type != NULL) return type;

    type = (ArrayEnumerable__Uno_Reflection_CppField__uType*)::uAllocClassType(sizeof(ArrayEnumerable__Uno_Reflection_CppField__uType), "Uno.Runtime.Implementation.Internal.ArrayEnumerable<Uno.Reflection.CppField>", false, 1, 1, 0);

    type->__interface_0.__fp_GetEnumerator = (::uObject*(*)(void*))ArrayEnumerable__Uno_Reflection_CppField__GetEnumerator;

    type->SetInterfaces(
        ::app::Uno::Collections::IEnumerable__Uno_Reflection_CppField__typeof(), offsetof(ArrayEnumerable__Uno_Reflection_CppField__uType, __interface_0));

    type->SetStrongRefs(
        "_source", offsetof(ArrayEnumerable__Uno_Reflection_CppField, _source));

    type->SetFields(1,
        ::uNewField("_source", NULL, offsetof(ArrayEnumerable__Uno_Reflection_CppField, _source), ::uGetArrayType(::app::Uno::Reflection::CppField__typeof())));

    type->SetFunctions(2,
        ::uNewFunction("GetEnumerator", ArrayEnumerable__Uno_Reflection_CppField__GetEnumerator, 0, false, ::app::Uno::Collections::IEnumerator__Uno_Reflection_CppField__typeof()),
        ::uNewFunction(".ctor", ArrayEnumerable__Uno_Reflection_CppField__New_1, 0, true, ArrayEnumerable__Uno_Reflection_CppField__typeof(), ::uGetArrayType(::app::Uno::Reflection::CppField__typeof())));

    ::uRegisterType(type);
    return type;
}

void ArrayEnumerable__Uno_Reflection_CppField___ObjInit(ArrayEnumerable__Uno_Reflection_CppField* __this, ::uArray* source)
{
    __this->_source = source;
}

::uObject* ArrayEnumerable__Uno_Reflection_CppField__GetEnumerator(ArrayEnumerable__Uno_Reflection_CppField* __this)
{
    return (::uObject*)::app::Uno::Runtime::Implementation::Internal::ArrayEnumerator__Uno_Reflection_CppField__New_1(NULL, __this->_source);
}

ArrayEnumerable__Uno_Reflection_CppField* ArrayEnumerable__Uno_Reflection_CppField__New_1(::uStatic* __this, ::uArray* source)
{
    ArrayEnumerable__Uno_Reflection_CppField* inst = (ArrayEnumerable__Uno_Reflection_CppField*)::uAllocObject(sizeof(ArrayEnumerable__Uno_Reflection_CppField), ArrayEnumerable__Uno_Reflection_CppField__typeof());
    inst->_ObjInit(source);
    return inst;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Runtime\Implementation\Internal\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

ArrayEnumerable__Uno_Reflection_CppFunction__uType* ArrayEnumerable__Uno_Reflection_CppFunction__typeof()
{
    static ::uStaticStrong<ArrayEnumerable__Uno_Reflection_CppFunction__uType*> type;
    if (type != NULL) return type;

    type = (ArrayEnumerable__Uno_Reflection_CppFunction__uType*)::uAllocClassType(sizeof(ArrayEnumerable__Uno_Reflection_CppFunction__uType), "Uno.Runtime.Implementation.Internal.ArrayEnumerable<Uno.Reflection.CppFunction>", false, 1, 1, 0);

    type->__interface_0.__fp_GetEnumerator = (::uObject*(*)(void*))ArrayEnumerable__Uno_Reflection_CppFunction__GetEnumerator;

    type->SetInterfaces(
        ::app::Uno::Collections::IEnumerable__Uno_Reflection_CppFunction__typeof(), offsetof(ArrayEnumerable__Uno_Reflection_CppFunction__uType, __interface_0));

    type->SetStrongRefs(
        "_source", offsetof(ArrayEnumerable__Uno_Reflection_CppFunction, _source));

    type->SetFields(1,
        ::uNewField("_source", NULL, offsetof(ArrayEnumerable__Uno_Reflection_CppFunction, _source), ::uGetArrayType(::app::Uno::Reflection::CppFunction__typeof())));

    type->SetFunctions(2,
        ::uNewFunction("GetEnumerator", ArrayEnumerable__Uno_Reflection_CppFunction__GetEnumerator, 0, false, ::app::Uno::Collections::IEnumerator__Uno_Reflection_CppFunction__typeof()),
        ::uNewFunction(".ctor", ArrayEnumerable__Uno_Reflection_CppFunction__New_1, 0, true, ArrayEnumerable__Uno_Reflection_CppFunction__typeof(), ::uGetArrayType(::app::Uno::Reflection::CppFunction__typeof())));

    ::uRegisterType(type);
    return type;
}

void ArrayEnumerable__Uno_Reflection_CppFunction___ObjInit(ArrayEnumerable__Uno_Reflection_CppFunction* __this, ::uArray* source)
{
    __this->_source = source;
}

::uObject* ArrayEnumerable__Uno_Reflection_CppFunction__GetEnumerator(ArrayEnumerable__Uno_Reflection_CppFunction* __this)
{
    return (::uObject*)::app::Uno::Runtime::Implementation::Internal::ArrayEnumerator__Uno_Reflection_CppFunction__New_1(NULL, __this->_source);
}

ArrayEnumerable__Uno_Reflection_CppFunction* ArrayEnumerable__Uno_Reflection_CppFunction__New_1(::uStatic* __this, ::uArray* source)
{
    ArrayEnumerable__Uno_Reflection_CppFunction* inst = (ArrayEnumerable__Uno_Reflection_CppFunction*)::uAllocObject(sizeof(ArrayEnumerable__Uno_Reflection_CppFunction), ArrayEnumerable__Uno_Reflection_CppFunction__typeof());
    inst->_ObjInit(source);
    return inst;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Runtime\Implementation\Internal\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

ArrayEnumerable__Uno_UX_Resource__uType* ArrayEnumerable__Uno_UX_Resource__typeof()
{
    static ::uStaticStrong<ArrayEnumerable__Uno_UX_Resource__uType*> type;
    if (type != NULL) return type;

    type = (ArrayEnumerable__Uno_UX_Resource__uType*)::uAllocClassType(sizeof(ArrayEnumerable__Uno_UX_Resource__uType), "Uno.Runtime.Implementation.Internal.ArrayEnumerable<Uno.UX.Resource>", false, 1, 1, 0);

    type->__interface_0.__fp_GetEnumerator = (::uObject*(*)(void*))ArrayEnumerable__Uno_UX_Resource__GetEnumerator;

    type->SetInterfaces(
        ::app::Uno::Collections::IEnumerable__Uno_UX_Resource__typeof(), offsetof(ArrayEnumerable__Uno_UX_Resource__uType, __interface_0));

    type->SetStrongRefs(
        "_source", offsetof(ArrayEnumerable__Uno_UX_Resource, _source));

    type->SetFields(1,
        ::uNewField("_source", NULL, offsetof(ArrayEnumerable__Uno_UX_Resource, _source), ::uGetArrayType(::app::Uno::UX::Resource__typeof())));

    type->SetFunctions(2,
        ::uNewFunction("GetEnumerator", ArrayEnumerable__Uno_UX_Resource__GetEnumerator, 0, false, ::app::Uno::Collections::IEnumerator__Uno_UX_Resource__typeof()),
        ::uNewFunction(".ctor", ArrayEnumerable__Uno_UX_Resource__New_1, 0, true, ArrayEnumerable__Uno_UX_Resource__typeof(), ::uGetArrayType(::app::Uno::UX::Resource__typeof())));

    ::uRegisterType(type);
    return type;
}

void ArrayEnumerable__Uno_UX_Resource___ObjInit(ArrayEnumerable__Uno_UX_Resource* __this, ::uArray* source)
{
    __this->_source = source;
}

::uObject* ArrayEnumerable__Uno_UX_Resource__GetEnumerator(ArrayEnumerable__Uno_UX_Resource* __this)
{
    return (::uObject*)::app::Uno::Runtime::Implementation::Internal::ArrayEnumerator__Uno_UX_Resource__New_1(NULL, __this->_source);
}

ArrayEnumerable__Uno_UX_Resource* ArrayEnumerable__Uno_UX_Resource__New_1(::uStatic* __this, ::uArray* source)
{
    ArrayEnumerable__Uno_UX_Resource* inst = (ArrayEnumerable__Uno_UX_Resource*)::uAllocObject(sizeof(ArrayEnumerable__Uno_UX_Resource), ArrayEnumerable__Uno_UX_Resource__typeof());
    inst->_ObjInit(source);
    return inst;
}

}}}}}
