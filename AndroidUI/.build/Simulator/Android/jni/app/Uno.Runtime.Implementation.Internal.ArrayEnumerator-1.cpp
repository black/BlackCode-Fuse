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
#include <app/Uno.Bool.h>
#include <app/Uno.Exception.h>
#include <app/Uno.Int.h>
#include <app/Uno.Net.IPEndPoint.h>
#include <app/Uno.Reflection.CppField.h>
#include <app/Uno.Reflection.CppFunction.h>
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

ArrayEnumerator__float2__uType* ArrayEnumerator__float2__typeof()
{
    static ::uStaticStrong<ArrayEnumerator__float2__uType*> type;
    if (type != NULL) return type;

    type = (ArrayEnumerator__float2__uType*)::uAllocClassType(sizeof(ArrayEnumerator__float2__uType), "Uno.Runtime.Implementation.Internal.ArrayEnumerator<float2>", false, 3, 1, 0);

    type->__interface_0.__fp_get_Current = (::app::Uno::Float2(*)(void*))ArrayEnumerator__float2__get_Current;
    type->__interface_1.__fp_Dispose = (void(*)(void*))ArrayEnumerator__float2__Dispose;
    type->__interface_2.__fp_Reset = (void(*)(void*))ArrayEnumerator__float2__Reset;
    type->__interface_2.__fp_MoveNext = (bool(*)(void*))ArrayEnumerator__float2__MoveNext;

    type->SetInterfaces(
        ::app::Uno::Collections::IEnumerator__float2__typeof(), offsetof(ArrayEnumerator__float2__uType, __interface_0),
        ::app::Uno::IDisposable__typeof(), offsetof(ArrayEnumerator__float2__uType, __interface_1),
        ::app::Uno::Collections::IEnumerator__typeof(), offsetof(ArrayEnumerator__float2__uType, __interface_2));

    type->SetStrongRefs(
        "_source", offsetof(ArrayEnumerator__float2, _source));

    type->SetFields(3,
        ::uNewField("_current", NULL, offsetof(ArrayEnumerator__float2, _current), ::app::Uno::Float2__typeof()),
        ::uNewField("_iterator", NULL, offsetof(ArrayEnumerator__float2, _iterator), ::app::Uno::Int__typeof()),
        ::uNewField("_source", NULL, offsetof(ArrayEnumerator__float2, _source), ::uGetArrayType(::app::Uno::Float2__typeof())));

    type->SetFunctions(5,
        ::uNewFunctionVoid("Dispose", ArrayEnumerator__float2__Dispose, 0, false),
        ::uNewFunction("get_Current", ArrayEnumerator__float2__get_Current, 0, false, ::app::Uno::Float2__typeof()),
        ::uNewFunction("MoveNext", ArrayEnumerator__float2__MoveNext, 0, false, ::app::Uno::Bool__typeof()),
        ::uNewFunction(".ctor", ArrayEnumerator__float2__New_1, 0, true, ArrayEnumerator__float2__typeof(), ::uGetArrayType(::app::Uno::Float2__typeof())),
        ::uNewFunctionVoid("Reset", ArrayEnumerator__float2__Reset, 0, false));

    ::uRegisterType(type);
    return type;
}

void ArrayEnumerator__float2___ObjInit(ArrayEnumerator__float2* __this, ::uArray* source)
{
    __this->_source = source;
    __this->_iterator = -1;
}

void ArrayEnumerator__float2__Dispose(ArrayEnumerator__float2* __this)
{
}

::app::Uno::Float2 ArrayEnumerator__float2__get_Current(ArrayEnumerator__float2* __this)
{
    return __this->_current;
}

bool ArrayEnumerator__float2__MoveNext(ArrayEnumerator__float2* __this)
{
    __this->_iterator++;

    if (__this->_iterator < ::uPtr< ::uArray*>(__this->_source)->Length())
    {
        __this->_current = ::uPtr< ::uArray*>(__this->_source)->Item< ::app::Uno::Float2>(__this->_iterator);
        return true;
    }

    return false;
}

ArrayEnumerator__float2* ArrayEnumerator__float2__New_1(::uStatic* __this, ::uArray* source)
{
    ArrayEnumerator__float2* inst = (ArrayEnumerator__float2*)::uAllocObject(sizeof(ArrayEnumerator__float2), ArrayEnumerator__float2__typeof());
    inst->_ObjInit(source);
    return inst;
}

void ArrayEnumerator__float2__Reset(ArrayEnumerator__float2* __this)
{
    __this->_iterator = -1;
    __this->_current = ::uDefault< ::app::Uno::Float2>();
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Runtime\Implementation\Internal\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

ArrayEnumerator__Fuse_Behavior__uType* ArrayEnumerator__Fuse_Behavior__typeof()
{
    static ::uStaticStrong<ArrayEnumerator__Fuse_Behavior__uType*> type;
    if (type != NULL) return type;

    type = (ArrayEnumerator__Fuse_Behavior__uType*)::uAllocClassType(sizeof(ArrayEnumerator__Fuse_Behavior__uType), "Uno.Runtime.Implementation.Internal.ArrayEnumerator<Fuse.Behavior>", false, 3, 2, 0);

    type->__interface_0.__fp_get_Current = (::app::Fuse::Behavior*(*)(void*))ArrayEnumerator__Fuse_Behavior__get_Current;
    type->__interface_1.__fp_Dispose = (void(*)(void*))ArrayEnumerator__Fuse_Behavior__Dispose;
    type->__interface_2.__fp_Reset = (void(*)(void*))ArrayEnumerator__Fuse_Behavior__Reset;
    type->__interface_2.__fp_MoveNext = (bool(*)(void*))ArrayEnumerator__Fuse_Behavior__MoveNext;

    type->SetInterfaces(
        ::app::Uno::Collections::IEnumerator__Fuse_Behavior__typeof(), offsetof(ArrayEnumerator__Fuse_Behavior__uType, __interface_0),
        ::app::Uno::IDisposable__typeof(), offsetof(ArrayEnumerator__Fuse_Behavior__uType, __interface_1),
        ::app::Uno::Collections::IEnumerator__typeof(), offsetof(ArrayEnumerator__Fuse_Behavior__uType, __interface_2));

    type->SetStrongRefs(
        "_current", offsetof(ArrayEnumerator__Fuse_Behavior, _current),
        "_source", offsetof(ArrayEnumerator__Fuse_Behavior, _source));

    type->SetFields(3,
        ::uNewField("_current", NULL, offsetof(ArrayEnumerator__Fuse_Behavior, _current), ::app::Fuse::Behavior__typeof()),
        ::uNewField("_iterator", NULL, offsetof(ArrayEnumerator__Fuse_Behavior, _iterator), ::app::Uno::Int__typeof()),
        ::uNewField("_source", NULL, offsetof(ArrayEnumerator__Fuse_Behavior, _source), ::uGetArrayType(::app::Fuse::Behavior__typeof())));

    type->SetFunctions(5,
        ::uNewFunctionVoid("Dispose", ArrayEnumerator__Fuse_Behavior__Dispose, 0, false),
        ::uNewFunction("get_Current", ArrayEnumerator__Fuse_Behavior__get_Current, 0, false, ::app::Fuse::Behavior__typeof()),
        ::uNewFunction("MoveNext", ArrayEnumerator__Fuse_Behavior__MoveNext, 0, false, ::app::Uno::Bool__typeof()),
        ::uNewFunction(".ctor", ArrayEnumerator__Fuse_Behavior__New_1, 0, true, ArrayEnumerator__Fuse_Behavior__typeof(), ::uGetArrayType(::app::Fuse::Behavior__typeof())),
        ::uNewFunctionVoid("Reset", ArrayEnumerator__Fuse_Behavior__Reset, 0, false));

    ::uRegisterType(type);
    return type;
}

void ArrayEnumerator__Fuse_Behavior___ObjInit(ArrayEnumerator__Fuse_Behavior* __this, ::uArray* source)
{
    __this->_source = source;
    __this->_iterator = -1;
}

void ArrayEnumerator__Fuse_Behavior__Dispose(ArrayEnumerator__Fuse_Behavior* __this)
{
}

::app::Fuse::Behavior* ArrayEnumerator__Fuse_Behavior__get_Current(ArrayEnumerator__Fuse_Behavior* __this)
{
    return __this->_current;
}

bool ArrayEnumerator__Fuse_Behavior__MoveNext(ArrayEnumerator__Fuse_Behavior* __this)
{
    __this->_iterator++;

    if (__this->_iterator < ::uPtr< ::uArray*>(__this->_source)->Length())
    {
        __this->_current = ::uPtr< ::uArray*>(__this->_source)->Item< ::app::Fuse::Behavior*>(__this->_iterator);
        return true;
    }

    return false;
}

ArrayEnumerator__Fuse_Behavior* ArrayEnumerator__Fuse_Behavior__New_1(::uStatic* __this, ::uArray* source)
{
    ArrayEnumerator__Fuse_Behavior* inst = (ArrayEnumerator__Fuse_Behavior*)::uAllocObject(sizeof(ArrayEnumerator__Fuse_Behavior), ArrayEnumerator__Fuse_Behavior__typeof());
    inst->_ObjInit(source);
    return inst;
}

void ArrayEnumerator__Fuse_Behavior__Reset(ArrayEnumerator__Fuse_Behavior* __this)
{
    __this->_iterator = -1;
    __this->_current = NULL;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Runtime\Implementation\Internal\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

ArrayEnumerator__Fuse_Controls_Control__uType* ArrayEnumerator__Fuse_Controls_Control__typeof()
{
    static ::uStaticStrong<ArrayEnumerator__Fuse_Controls_Control__uType*> type;
    if (type != NULL) return type;

    type = (ArrayEnumerator__Fuse_Controls_Control__uType*)::uAllocClassType(sizeof(ArrayEnumerator__Fuse_Controls_Control__uType), "Uno.Runtime.Implementation.Internal.ArrayEnumerator<Fuse.Controls.Control>", false, 3, 2, 0);

    type->__interface_0.__fp_get_Current = (::app::Fuse::Controls::Control*(*)(void*))ArrayEnumerator__Fuse_Controls_Control__get_Current;
    type->__interface_1.__fp_Dispose = (void(*)(void*))ArrayEnumerator__Fuse_Controls_Control__Dispose;
    type->__interface_2.__fp_Reset = (void(*)(void*))ArrayEnumerator__Fuse_Controls_Control__Reset;
    type->__interface_2.__fp_MoveNext = (bool(*)(void*))ArrayEnumerator__Fuse_Controls_Control__MoveNext;

    type->SetInterfaces(
        ::app::Uno::Collections::IEnumerator__Fuse_Controls_Control__typeof(), offsetof(ArrayEnumerator__Fuse_Controls_Control__uType, __interface_0),
        ::app::Uno::IDisposable__typeof(), offsetof(ArrayEnumerator__Fuse_Controls_Control__uType, __interface_1),
        ::app::Uno::Collections::IEnumerator__typeof(), offsetof(ArrayEnumerator__Fuse_Controls_Control__uType, __interface_2));

    type->SetStrongRefs(
        "_current", offsetof(ArrayEnumerator__Fuse_Controls_Control, _current),
        "_source", offsetof(ArrayEnumerator__Fuse_Controls_Control, _source));

    type->SetFields(3,
        ::uNewField("_current", NULL, offsetof(ArrayEnumerator__Fuse_Controls_Control, _current), ::app::Fuse::Controls::Control__typeof()),
        ::uNewField("_iterator", NULL, offsetof(ArrayEnumerator__Fuse_Controls_Control, _iterator), ::app::Uno::Int__typeof()),
        ::uNewField("_source", NULL, offsetof(ArrayEnumerator__Fuse_Controls_Control, _source), ::uGetArrayType(::app::Fuse::Controls::Control__typeof())));

    type->SetFunctions(5,
        ::uNewFunctionVoid("Dispose", ArrayEnumerator__Fuse_Controls_Control__Dispose, 0, false),
        ::uNewFunction("get_Current", ArrayEnumerator__Fuse_Controls_Control__get_Current, 0, false, ::app::Fuse::Controls::Control__typeof()),
        ::uNewFunction("MoveNext", ArrayEnumerator__Fuse_Controls_Control__MoveNext, 0, false, ::app::Uno::Bool__typeof()),
        ::uNewFunction(".ctor", ArrayEnumerator__Fuse_Controls_Control__New_1, 0, true, ArrayEnumerator__Fuse_Controls_Control__typeof(), ::uGetArrayType(::app::Fuse::Controls::Control__typeof())),
        ::uNewFunctionVoid("Reset", ArrayEnumerator__Fuse_Controls_Control__Reset, 0, false));

    ::uRegisterType(type);
    return type;
}

void ArrayEnumerator__Fuse_Controls_Control___ObjInit(ArrayEnumerator__Fuse_Controls_Control* __this, ::uArray* source)
{
    __this->_source = source;
    __this->_iterator = -1;
}

void ArrayEnumerator__Fuse_Controls_Control__Dispose(ArrayEnumerator__Fuse_Controls_Control* __this)
{
}

::app::Fuse::Controls::Control* ArrayEnumerator__Fuse_Controls_Control__get_Current(ArrayEnumerator__Fuse_Controls_Control* __this)
{
    return __this->_current;
}

bool ArrayEnumerator__Fuse_Controls_Control__MoveNext(ArrayEnumerator__Fuse_Controls_Control* __this)
{
    __this->_iterator++;

    if (__this->_iterator < ::uPtr< ::uArray*>(__this->_source)->Length())
    {
        __this->_current = ::uPtr< ::uArray*>(__this->_source)->Item< ::app::Fuse::Controls::Control*>(__this->_iterator);
        return true;
    }

    return false;
}

ArrayEnumerator__Fuse_Controls_Control* ArrayEnumerator__Fuse_Controls_Control__New_1(::uStatic* __this, ::uArray* source)
{
    ArrayEnumerator__Fuse_Controls_Control* inst = (ArrayEnumerator__Fuse_Controls_Control*)::uAllocObject(sizeof(ArrayEnumerator__Fuse_Controls_Control), ArrayEnumerator__Fuse_Controls_Control__typeof());
    inst->_ObjInit(source);
    return inst;
}

void ArrayEnumerator__Fuse_Controls_Control__Reset(ArrayEnumerator__Fuse_Controls_Control* __this)
{
    __this->_iterator = -1;
    __this->_current = NULL;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Runtime\Implementation\Internal\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

ArrayEnumerator__Fuse_Controls_Internal_WrappedLine__uType* ArrayEnumerator__Fuse_Controls_Internal_WrappedLine__typeof()
{
    static ::uStaticStrong<ArrayEnumerator__Fuse_Controls_Internal_WrappedLine__uType*> type;
    if (type != NULL) return type;

    type = (ArrayEnumerator__Fuse_Controls_Internal_WrappedLine__uType*)::uAllocClassType(sizeof(ArrayEnumerator__Fuse_Controls_Internal_WrappedLine__uType), "Uno.Runtime.Implementation.Internal.ArrayEnumerator<Fuse.Controls.Internal.WrappedLine>", false, 3, 2, 0);

    type->__interface_0.__fp_get_Current = (::app::Fuse::Controls::Internal::WrappedLine*(*)(void*))ArrayEnumerator__Fuse_Controls_Internal_WrappedLine__get_Current;
    type->__interface_1.__fp_Dispose = (void(*)(void*))ArrayEnumerator__Fuse_Controls_Internal_WrappedLine__Dispose;
    type->__interface_2.__fp_Reset = (void(*)(void*))ArrayEnumerator__Fuse_Controls_Internal_WrappedLine__Reset;
    type->__interface_2.__fp_MoveNext = (bool(*)(void*))ArrayEnumerator__Fuse_Controls_Internal_WrappedLine__MoveNext;

    type->SetInterfaces(
        ::app::Uno::Collections::IEnumerator__Fuse_Controls_Internal_WrappedLine__typeof(), offsetof(ArrayEnumerator__Fuse_Controls_Internal_WrappedLine__uType, __interface_0),
        ::app::Uno::IDisposable__typeof(), offsetof(ArrayEnumerator__Fuse_Controls_Internal_WrappedLine__uType, __interface_1),
        ::app::Uno::Collections::IEnumerator__typeof(), offsetof(ArrayEnumerator__Fuse_Controls_Internal_WrappedLine__uType, __interface_2));

    type->SetStrongRefs(
        "_current", offsetof(ArrayEnumerator__Fuse_Controls_Internal_WrappedLine, _current),
        "_source", offsetof(ArrayEnumerator__Fuse_Controls_Internal_WrappedLine, _source));

    type->SetFields(3,
        ::uNewField("_current", NULL, offsetof(ArrayEnumerator__Fuse_Controls_Internal_WrappedLine, _current), ::app::Fuse::Controls::Internal::WrappedLine__typeof()),
        ::uNewField("_iterator", NULL, offsetof(ArrayEnumerator__Fuse_Controls_Internal_WrappedLine, _iterator), ::app::Uno::Int__typeof()),
        ::uNewField("_source", NULL, offsetof(ArrayEnumerator__Fuse_Controls_Internal_WrappedLine, _source), ::uGetArrayType(::app::Fuse::Controls::Internal::WrappedLine__typeof())));

    type->SetFunctions(5,
        ::uNewFunctionVoid("Dispose", ArrayEnumerator__Fuse_Controls_Internal_WrappedLine__Dispose, 0, false),
        ::uNewFunction("get_Current", ArrayEnumerator__Fuse_Controls_Internal_WrappedLine__get_Current, 0, false, ::app::Fuse::Controls::Internal::WrappedLine__typeof()),
        ::uNewFunction("MoveNext", ArrayEnumerator__Fuse_Controls_Internal_WrappedLine__MoveNext, 0, false, ::app::Uno::Bool__typeof()),
        ::uNewFunction(".ctor", ArrayEnumerator__Fuse_Controls_Internal_WrappedLine__New_1, 0, true, ArrayEnumerator__Fuse_Controls_Internal_WrappedLine__typeof(), ::uGetArrayType(::app::Fuse::Controls::Internal::WrappedLine__typeof())),
        ::uNewFunctionVoid("Reset", ArrayEnumerator__Fuse_Controls_Internal_WrappedLine__Reset, 0, false));

    ::uRegisterType(type);
    return type;
}

void ArrayEnumerator__Fuse_Controls_Internal_WrappedLine___ObjInit(ArrayEnumerator__Fuse_Controls_Internal_WrappedLine* __this, ::uArray* source)
{
    __this->_source = source;
    __this->_iterator = -1;
}

void ArrayEnumerator__Fuse_Controls_Internal_WrappedLine__Dispose(ArrayEnumerator__Fuse_Controls_Internal_WrappedLine* __this)
{
}

::app::Fuse::Controls::Internal::WrappedLine* ArrayEnumerator__Fuse_Controls_Internal_WrappedLine__get_Current(ArrayEnumerator__Fuse_Controls_Internal_WrappedLine* __this)
{
    return __this->_current;
}

bool ArrayEnumerator__Fuse_Controls_Internal_WrappedLine__MoveNext(ArrayEnumerator__Fuse_Controls_Internal_WrappedLine* __this)
{
    __this->_iterator++;

    if (__this->_iterator < ::uPtr< ::uArray*>(__this->_source)->Length())
    {
        __this->_current = ::uPtr< ::uArray*>(__this->_source)->Item< ::app::Fuse::Controls::Internal::WrappedLine*>(__this->_iterator);
        return true;
    }

    return false;
}

ArrayEnumerator__Fuse_Controls_Internal_WrappedLine* ArrayEnumerator__Fuse_Controls_Internal_WrappedLine__New_1(::uStatic* __this, ::uArray* source)
{
    ArrayEnumerator__Fuse_Controls_Internal_WrappedLine* inst = (ArrayEnumerator__Fuse_Controls_Internal_WrappedLine*)::uAllocObject(sizeof(ArrayEnumerator__Fuse_Controls_Internal_WrappedLine), ArrayEnumerator__Fuse_Controls_Internal_WrappedLine__typeof());
    inst->_ObjInit(source);
    return inst;
}

void ArrayEnumerator__Fuse_Controls_Internal_WrappedLine__Reset(ArrayEnumerator__Fuse_Controls_Internal_WrappedLine* __this)
{
    __this->_iterator = -1;
    __this->_current = NULL;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Runtime\Implementation\Internal\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

ArrayEnumerator__Fuse_Drawing_Batching_Batch__uType* ArrayEnumerator__Fuse_Drawing_Batching_Batch__typeof()
{
    static ::uStaticStrong<ArrayEnumerator__Fuse_Drawing_Batching_Batch__uType*> type;
    if (type != NULL) return type;

    type = (ArrayEnumerator__Fuse_Drawing_Batching_Batch__uType*)::uAllocClassType(sizeof(ArrayEnumerator__Fuse_Drawing_Batching_Batch__uType), "Uno.Runtime.Implementation.Internal.ArrayEnumerator<Fuse.Drawing.Batching.Batch>", false, 3, 2, 0);

    type->__interface_0.__fp_get_Current = (::app::Fuse::Drawing::Batching::Batch*(*)(void*))ArrayEnumerator__Fuse_Drawing_Batching_Batch__get_Current;
    type->__interface_1.__fp_Dispose = (void(*)(void*))ArrayEnumerator__Fuse_Drawing_Batching_Batch__Dispose;
    type->__interface_2.__fp_Reset = (void(*)(void*))ArrayEnumerator__Fuse_Drawing_Batching_Batch__Reset;
    type->__interface_2.__fp_MoveNext = (bool(*)(void*))ArrayEnumerator__Fuse_Drawing_Batching_Batch__MoveNext;

    type->SetInterfaces(
        ::app::Uno::Collections::IEnumerator__Fuse_Drawing_Batching_Batch__typeof(), offsetof(ArrayEnumerator__Fuse_Drawing_Batching_Batch__uType, __interface_0),
        ::app::Uno::IDisposable__typeof(), offsetof(ArrayEnumerator__Fuse_Drawing_Batching_Batch__uType, __interface_1),
        ::app::Uno::Collections::IEnumerator__typeof(), offsetof(ArrayEnumerator__Fuse_Drawing_Batching_Batch__uType, __interface_2));

    type->SetStrongRefs(
        "_current", offsetof(ArrayEnumerator__Fuse_Drawing_Batching_Batch, _current),
        "_source", offsetof(ArrayEnumerator__Fuse_Drawing_Batching_Batch, _source));

    type->SetFields(3,
        ::uNewField("_current", NULL, offsetof(ArrayEnumerator__Fuse_Drawing_Batching_Batch, _current), ::app::Fuse::Drawing::Batching::Batch__typeof()),
        ::uNewField("_iterator", NULL, offsetof(ArrayEnumerator__Fuse_Drawing_Batching_Batch, _iterator), ::app::Uno::Int__typeof()),
        ::uNewField("_source", NULL, offsetof(ArrayEnumerator__Fuse_Drawing_Batching_Batch, _source), ::uGetArrayType(::app::Fuse::Drawing::Batching::Batch__typeof())));

    type->SetFunctions(5,
        ::uNewFunctionVoid("Dispose", ArrayEnumerator__Fuse_Drawing_Batching_Batch__Dispose, 0, false),
        ::uNewFunction("get_Current", ArrayEnumerator__Fuse_Drawing_Batching_Batch__get_Current, 0, false, ::app::Fuse::Drawing::Batching::Batch__typeof()),
        ::uNewFunction("MoveNext", ArrayEnumerator__Fuse_Drawing_Batching_Batch__MoveNext, 0, false, ::app::Uno::Bool__typeof()),
        ::uNewFunction(".ctor", ArrayEnumerator__Fuse_Drawing_Batching_Batch__New_1, 0, true, ArrayEnumerator__Fuse_Drawing_Batching_Batch__typeof(), ::uGetArrayType(::app::Fuse::Drawing::Batching::Batch__typeof())),
        ::uNewFunctionVoid("Reset", ArrayEnumerator__Fuse_Drawing_Batching_Batch__Reset, 0, false));

    ::uRegisterType(type);
    return type;
}

void ArrayEnumerator__Fuse_Drawing_Batching_Batch___ObjInit(ArrayEnumerator__Fuse_Drawing_Batching_Batch* __this, ::uArray* source)
{
    __this->_source = source;
    __this->_iterator = -1;
}

void ArrayEnumerator__Fuse_Drawing_Batching_Batch__Dispose(ArrayEnumerator__Fuse_Drawing_Batching_Batch* __this)
{
}

::app::Fuse::Drawing::Batching::Batch* ArrayEnumerator__Fuse_Drawing_Batching_Batch__get_Current(ArrayEnumerator__Fuse_Drawing_Batching_Batch* __this)
{
    return __this->_current;
}

bool ArrayEnumerator__Fuse_Drawing_Batching_Batch__MoveNext(ArrayEnumerator__Fuse_Drawing_Batching_Batch* __this)
{
    __this->_iterator++;

    if (__this->_iterator < ::uPtr< ::uArray*>(__this->_source)->Length())
    {
        __this->_current = ::uPtr< ::uArray*>(__this->_source)->Item< ::app::Fuse::Drawing::Batching::Batch*>(__this->_iterator);
        return true;
    }

    return false;
}

ArrayEnumerator__Fuse_Drawing_Batching_Batch* ArrayEnumerator__Fuse_Drawing_Batching_Batch__New_1(::uStatic* __this, ::uArray* source)
{
    ArrayEnumerator__Fuse_Drawing_Batching_Batch* inst = (ArrayEnumerator__Fuse_Drawing_Batching_Batch*)::uAllocObject(sizeof(ArrayEnumerator__Fuse_Drawing_Batching_Batch), ArrayEnumerator__Fuse_Drawing_Batching_Batch__typeof());
    inst->_ObjInit(source);
    return inst;
}

void ArrayEnumerator__Fuse_Drawing_Batching_Batch__Reset(ArrayEnumerator__Fuse_Drawing_Batching_Batch* __this)
{
    __this->_iterator = -1;
    __this->_current = NULL;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Runtime\Implementation\Internal\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

ArrayEnumerator__Fuse_Drawing_Border__uType* ArrayEnumerator__Fuse_Drawing_Border__typeof()
{
    static ::uStaticStrong<ArrayEnumerator__Fuse_Drawing_Border__uType*> type;
    if (type != NULL) return type;

    type = (ArrayEnumerator__Fuse_Drawing_Border__uType*)::uAllocClassType(sizeof(ArrayEnumerator__Fuse_Drawing_Border__uType), "Uno.Runtime.Implementation.Internal.ArrayEnumerator<Fuse.Drawing.Border>", false, 3, 2, 0);

    type->__interface_0.__fp_get_Current = (::app::Fuse::Drawing::Border*(*)(void*))ArrayEnumerator__Fuse_Drawing_Border__get_Current;
    type->__interface_1.__fp_Dispose = (void(*)(void*))ArrayEnumerator__Fuse_Drawing_Border__Dispose;
    type->__interface_2.__fp_Reset = (void(*)(void*))ArrayEnumerator__Fuse_Drawing_Border__Reset;
    type->__interface_2.__fp_MoveNext = (bool(*)(void*))ArrayEnumerator__Fuse_Drawing_Border__MoveNext;

    type->SetInterfaces(
        ::app::Uno::Collections::IEnumerator__Fuse_Drawing_Border__typeof(), offsetof(ArrayEnumerator__Fuse_Drawing_Border__uType, __interface_0),
        ::app::Uno::IDisposable__typeof(), offsetof(ArrayEnumerator__Fuse_Drawing_Border__uType, __interface_1),
        ::app::Uno::Collections::IEnumerator__typeof(), offsetof(ArrayEnumerator__Fuse_Drawing_Border__uType, __interface_2));

    type->SetStrongRefs(
        "_current", offsetof(ArrayEnumerator__Fuse_Drawing_Border, _current),
        "_source", offsetof(ArrayEnumerator__Fuse_Drawing_Border, _source));

    type->SetFields(3,
        ::uNewField("_current", NULL, offsetof(ArrayEnumerator__Fuse_Drawing_Border, _current), ::app::Fuse::Drawing::Border__typeof()),
        ::uNewField("_iterator", NULL, offsetof(ArrayEnumerator__Fuse_Drawing_Border, _iterator), ::app::Uno::Int__typeof()),
        ::uNewField("_source", NULL, offsetof(ArrayEnumerator__Fuse_Drawing_Border, _source), ::uGetArrayType(::app::Fuse::Drawing::Border__typeof())));

    type->SetFunctions(5,
        ::uNewFunctionVoid("Dispose", ArrayEnumerator__Fuse_Drawing_Border__Dispose, 0, false),
        ::uNewFunction("get_Current", ArrayEnumerator__Fuse_Drawing_Border__get_Current, 0, false, ::app::Fuse::Drawing::Border__typeof()),
        ::uNewFunction("MoveNext", ArrayEnumerator__Fuse_Drawing_Border__MoveNext, 0, false, ::app::Uno::Bool__typeof()),
        ::uNewFunction(".ctor", ArrayEnumerator__Fuse_Drawing_Border__New_1, 0, true, ArrayEnumerator__Fuse_Drawing_Border__typeof(), ::uGetArrayType(::app::Fuse::Drawing::Border__typeof())),
        ::uNewFunctionVoid("Reset", ArrayEnumerator__Fuse_Drawing_Border__Reset, 0, false));

    ::uRegisterType(type);
    return type;
}

void ArrayEnumerator__Fuse_Drawing_Border___ObjInit(ArrayEnumerator__Fuse_Drawing_Border* __this, ::uArray* source)
{
    __this->_source = source;
    __this->_iterator = -1;
}

void ArrayEnumerator__Fuse_Drawing_Border__Dispose(ArrayEnumerator__Fuse_Drawing_Border* __this)
{
}

::app::Fuse::Drawing::Border* ArrayEnumerator__Fuse_Drawing_Border__get_Current(ArrayEnumerator__Fuse_Drawing_Border* __this)
{
    return __this->_current;
}

bool ArrayEnumerator__Fuse_Drawing_Border__MoveNext(ArrayEnumerator__Fuse_Drawing_Border* __this)
{
    __this->_iterator++;

    if (__this->_iterator < ::uPtr< ::uArray*>(__this->_source)->Length())
    {
        __this->_current = ::uPtr< ::uArray*>(__this->_source)->Item< ::app::Fuse::Drawing::Border*>(__this->_iterator);
        return true;
    }

    return false;
}

ArrayEnumerator__Fuse_Drawing_Border* ArrayEnumerator__Fuse_Drawing_Border__New_1(::uStatic* __this, ::uArray* source)
{
    ArrayEnumerator__Fuse_Drawing_Border* inst = (ArrayEnumerator__Fuse_Drawing_Border*)::uAllocObject(sizeof(ArrayEnumerator__Fuse_Drawing_Border), ArrayEnumerator__Fuse_Drawing_Border__typeof());
    inst->_ObjInit(source);
    return inst;
}

void ArrayEnumerator__Fuse_Drawing_Border__Reset(ArrayEnumerator__Fuse_Drawing_Border* __this)
{
    __this->_iterator = -1;
    __this->_current = NULL;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Runtime\Implementation\Internal\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

ArrayEnumerator__Fuse_Drawing_Contour__uType* ArrayEnumerator__Fuse_Drawing_Contour__typeof()
{
    static ::uStaticStrong<ArrayEnumerator__Fuse_Drawing_Contour__uType*> type;
    if (type != NULL) return type;

    type = (ArrayEnumerator__Fuse_Drawing_Contour__uType*)::uAllocClassType(sizeof(ArrayEnumerator__Fuse_Drawing_Contour__uType), "Uno.Runtime.Implementation.Internal.ArrayEnumerator<Fuse.Drawing.Contour>", false, 3, 2, 0);

    type->__interface_0.__fp_get_Current = (::app::Fuse::Drawing::Contour*(*)(void*))ArrayEnumerator__Fuse_Drawing_Contour__get_Current;
    type->__interface_1.__fp_Dispose = (void(*)(void*))ArrayEnumerator__Fuse_Drawing_Contour__Dispose;
    type->__interface_2.__fp_Reset = (void(*)(void*))ArrayEnumerator__Fuse_Drawing_Contour__Reset;
    type->__interface_2.__fp_MoveNext = (bool(*)(void*))ArrayEnumerator__Fuse_Drawing_Contour__MoveNext;

    type->SetInterfaces(
        ::app::Uno::Collections::IEnumerator__Fuse_Drawing_Contour__typeof(), offsetof(ArrayEnumerator__Fuse_Drawing_Contour__uType, __interface_0),
        ::app::Uno::IDisposable__typeof(), offsetof(ArrayEnumerator__Fuse_Drawing_Contour__uType, __interface_1),
        ::app::Uno::Collections::IEnumerator__typeof(), offsetof(ArrayEnumerator__Fuse_Drawing_Contour__uType, __interface_2));

    type->SetStrongRefs(
        "_current", offsetof(ArrayEnumerator__Fuse_Drawing_Contour, _current),
        "_source", offsetof(ArrayEnumerator__Fuse_Drawing_Contour, _source));

    type->SetFields(3,
        ::uNewField("_current", NULL, offsetof(ArrayEnumerator__Fuse_Drawing_Contour, _current), ::app::Fuse::Drawing::Contour__typeof()),
        ::uNewField("_iterator", NULL, offsetof(ArrayEnumerator__Fuse_Drawing_Contour, _iterator), ::app::Uno::Int__typeof()),
        ::uNewField("_source", NULL, offsetof(ArrayEnumerator__Fuse_Drawing_Contour, _source), ::uGetArrayType(::app::Fuse::Drawing::Contour__typeof())));

    type->SetFunctions(5,
        ::uNewFunctionVoid("Dispose", ArrayEnumerator__Fuse_Drawing_Contour__Dispose, 0, false),
        ::uNewFunction("get_Current", ArrayEnumerator__Fuse_Drawing_Contour__get_Current, 0, false, ::app::Fuse::Drawing::Contour__typeof()),
        ::uNewFunction("MoveNext", ArrayEnumerator__Fuse_Drawing_Contour__MoveNext, 0, false, ::app::Uno::Bool__typeof()),
        ::uNewFunction(".ctor", ArrayEnumerator__Fuse_Drawing_Contour__New_1, 0, true, ArrayEnumerator__Fuse_Drawing_Contour__typeof(), ::uGetArrayType(::app::Fuse::Drawing::Contour__typeof())),
        ::uNewFunctionVoid("Reset", ArrayEnumerator__Fuse_Drawing_Contour__Reset, 0, false));

    ::uRegisterType(type);
    return type;
}

void ArrayEnumerator__Fuse_Drawing_Contour___ObjInit(ArrayEnumerator__Fuse_Drawing_Contour* __this, ::uArray* source)
{
    __this->_source = source;
    __this->_iterator = -1;
}

void ArrayEnumerator__Fuse_Drawing_Contour__Dispose(ArrayEnumerator__Fuse_Drawing_Contour* __this)
{
}

::app::Fuse::Drawing::Contour* ArrayEnumerator__Fuse_Drawing_Contour__get_Current(ArrayEnumerator__Fuse_Drawing_Contour* __this)
{
    return __this->_current;
}

bool ArrayEnumerator__Fuse_Drawing_Contour__MoveNext(ArrayEnumerator__Fuse_Drawing_Contour* __this)
{
    __this->_iterator++;

    if (__this->_iterator < ::uPtr< ::uArray*>(__this->_source)->Length())
    {
        __this->_current = ::uPtr< ::uArray*>(__this->_source)->Item< ::app::Fuse::Drawing::Contour*>(__this->_iterator);
        return true;
    }

    return false;
}

ArrayEnumerator__Fuse_Drawing_Contour* ArrayEnumerator__Fuse_Drawing_Contour__New_1(::uStatic* __this, ::uArray* source)
{
    ArrayEnumerator__Fuse_Drawing_Contour* inst = (ArrayEnumerator__Fuse_Drawing_Contour*)::uAllocObject(sizeof(ArrayEnumerator__Fuse_Drawing_Contour), ArrayEnumerator__Fuse_Drawing_Contour__typeof());
    inst->_ObjInit(source);
    return inst;
}

void ArrayEnumerator__Fuse_Drawing_Contour__Reset(ArrayEnumerator__Fuse_Drawing_Contour* __this)
{
    __this->_iterator = -1;
    __this->_current = NULL;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Runtime\Implementation\Internal\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

ArrayEnumerator__Fuse_Drawing_GradientStop__uType* ArrayEnumerator__Fuse_Drawing_GradientStop__typeof()
{
    static ::uStaticStrong<ArrayEnumerator__Fuse_Drawing_GradientStop__uType*> type;
    if (type != NULL) return type;

    type = (ArrayEnumerator__Fuse_Drawing_GradientStop__uType*)::uAllocClassType(sizeof(ArrayEnumerator__Fuse_Drawing_GradientStop__uType), "Uno.Runtime.Implementation.Internal.ArrayEnumerator<Fuse.Drawing.GradientStop>", false, 3, 2, 0);

    type->__interface_0.__fp_get_Current = (::app::Fuse::Drawing::GradientStop*(*)(void*))ArrayEnumerator__Fuse_Drawing_GradientStop__get_Current;
    type->__interface_1.__fp_Dispose = (void(*)(void*))ArrayEnumerator__Fuse_Drawing_GradientStop__Dispose;
    type->__interface_2.__fp_Reset = (void(*)(void*))ArrayEnumerator__Fuse_Drawing_GradientStop__Reset;
    type->__interface_2.__fp_MoveNext = (bool(*)(void*))ArrayEnumerator__Fuse_Drawing_GradientStop__MoveNext;

    type->SetInterfaces(
        ::app::Uno::Collections::IEnumerator__Fuse_Drawing_GradientStop__typeof(), offsetof(ArrayEnumerator__Fuse_Drawing_GradientStop__uType, __interface_0),
        ::app::Uno::IDisposable__typeof(), offsetof(ArrayEnumerator__Fuse_Drawing_GradientStop__uType, __interface_1),
        ::app::Uno::Collections::IEnumerator__typeof(), offsetof(ArrayEnumerator__Fuse_Drawing_GradientStop__uType, __interface_2));

    type->SetStrongRefs(
        "_current", offsetof(ArrayEnumerator__Fuse_Drawing_GradientStop, _current),
        "_source", offsetof(ArrayEnumerator__Fuse_Drawing_GradientStop, _source));

    type->SetFields(3,
        ::uNewField("_current", NULL, offsetof(ArrayEnumerator__Fuse_Drawing_GradientStop, _current), ::app::Fuse::Drawing::GradientStop__typeof()),
        ::uNewField("_iterator", NULL, offsetof(ArrayEnumerator__Fuse_Drawing_GradientStop, _iterator), ::app::Uno::Int__typeof()),
        ::uNewField("_source", NULL, offsetof(ArrayEnumerator__Fuse_Drawing_GradientStop, _source), ::uGetArrayType(::app::Fuse::Drawing::GradientStop__typeof())));

    type->SetFunctions(5,
        ::uNewFunctionVoid("Dispose", ArrayEnumerator__Fuse_Drawing_GradientStop__Dispose, 0, false),
        ::uNewFunction("get_Current", ArrayEnumerator__Fuse_Drawing_GradientStop__get_Current, 0, false, ::app::Fuse::Drawing::GradientStop__typeof()),
        ::uNewFunction("MoveNext", ArrayEnumerator__Fuse_Drawing_GradientStop__MoveNext, 0, false, ::app::Uno::Bool__typeof()),
        ::uNewFunction(".ctor", ArrayEnumerator__Fuse_Drawing_GradientStop__New_1, 0, true, ArrayEnumerator__Fuse_Drawing_GradientStop__typeof(), ::uGetArrayType(::app::Fuse::Drawing::GradientStop__typeof())),
        ::uNewFunctionVoid("Reset", ArrayEnumerator__Fuse_Drawing_GradientStop__Reset, 0, false));

    ::uRegisterType(type);
    return type;
}

void ArrayEnumerator__Fuse_Drawing_GradientStop___ObjInit(ArrayEnumerator__Fuse_Drawing_GradientStop* __this, ::uArray* source)
{
    __this->_source = source;
    __this->_iterator = -1;
}

void ArrayEnumerator__Fuse_Drawing_GradientStop__Dispose(ArrayEnumerator__Fuse_Drawing_GradientStop* __this)
{
}

::app::Fuse::Drawing::GradientStop* ArrayEnumerator__Fuse_Drawing_GradientStop__get_Current(ArrayEnumerator__Fuse_Drawing_GradientStop* __this)
{
    return __this->_current;
}

bool ArrayEnumerator__Fuse_Drawing_GradientStop__MoveNext(ArrayEnumerator__Fuse_Drawing_GradientStop* __this)
{
    __this->_iterator++;

    if (__this->_iterator < ::uPtr< ::uArray*>(__this->_source)->Length())
    {
        __this->_current = ::uPtr< ::uArray*>(__this->_source)->Item< ::app::Fuse::Drawing::GradientStop*>(__this->_iterator);
        return true;
    }

    return false;
}

ArrayEnumerator__Fuse_Drawing_GradientStop* ArrayEnumerator__Fuse_Drawing_GradientStop__New_1(::uStatic* __this, ::uArray* source)
{
    ArrayEnumerator__Fuse_Drawing_GradientStop* inst = (ArrayEnumerator__Fuse_Drawing_GradientStop*)::uAllocObject(sizeof(ArrayEnumerator__Fuse_Drawing_GradientStop), ArrayEnumerator__Fuse_Drawing_GradientStop__typeof());
    inst->_ObjInit(source);
    return inst;
}

void ArrayEnumerator__Fuse_Drawing_GradientStop__Reset(ArrayEnumerator__Fuse_Drawing_GradientStop* __this)
{
    __this->_iterator = -1;
    __this->_current = NULL;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Runtime\Implementation\Internal\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

ArrayEnumerator__Fuse_Drawing_PolygonDrawable__uType* ArrayEnumerator__Fuse_Drawing_PolygonDrawable__typeof()
{
    static ::uStaticStrong<ArrayEnumerator__Fuse_Drawing_PolygonDrawable__uType*> type;
    if (type != NULL) return type;

    type = (ArrayEnumerator__Fuse_Drawing_PolygonDrawable__uType*)::uAllocClassType(sizeof(ArrayEnumerator__Fuse_Drawing_PolygonDrawable__uType), "Uno.Runtime.Implementation.Internal.ArrayEnumerator<Fuse.Drawing.PolygonDrawable>", false, 3, 2, 0);

    type->__interface_0.__fp_get_Current = (::app::Fuse::Drawing::PolygonDrawable*(*)(void*))ArrayEnumerator__Fuse_Drawing_PolygonDrawable__get_Current;
    type->__interface_1.__fp_Dispose = (void(*)(void*))ArrayEnumerator__Fuse_Drawing_PolygonDrawable__Dispose;
    type->__interface_2.__fp_Reset = (void(*)(void*))ArrayEnumerator__Fuse_Drawing_PolygonDrawable__Reset;
    type->__interface_2.__fp_MoveNext = (bool(*)(void*))ArrayEnumerator__Fuse_Drawing_PolygonDrawable__MoveNext;

    type->SetInterfaces(
        ::app::Uno::Collections::IEnumerator__Fuse_Drawing_PolygonDrawable__typeof(), offsetof(ArrayEnumerator__Fuse_Drawing_PolygonDrawable__uType, __interface_0),
        ::app::Uno::IDisposable__typeof(), offsetof(ArrayEnumerator__Fuse_Drawing_PolygonDrawable__uType, __interface_1),
        ::app::Uno::Collections::IEnumerator__typeof(), offsetof(ArrayEnumerator__Fuse_Drawing_PolygonDrawable__uType, __interface_2));

    type->SetStrongRefs(
        "_current", offsetof(ArrayEnumerator__Fuse_Drawing_PolygonDrawable, _current),
        "_source", offsetof(ArrayEnumerator__Fuse_Drawing_PolygonDrawable, _source));

    type->SetFields(3,
        ::uNewField("_current", NULL, offsetof(ArrayEnumerator__Fuse_Drawing_PolygonDrawable, _current), ::app::Fuse::Drawing::PolygonDrawable__typeof()),
        ::uNewField("_iterator", NULL, offsetof(ArrayEnumerator__Fuse_Drawing_PolygonDrawable, _iterator), ::app::Uno::Int__typeof()),
        ::uNewField("_source", NULL, offsetof(ArrayEnumerator__Fuse_Drawing_PolygonDrawable, _source), ::uGetArrayType(::app::Fuse::Drawing::PolygonDrawable__typeof())));

    type->SetFunctions(5,
        ::uNewFunctionVoid("Dispose", ArrayEnumerator__Fuse_Drawing_PolygonDrawable__Dispose, 0, false),
        ::uNewFunction("get_Current", ArrayEnumerator__Fuse_Drawing_PolygonDrawable__get_Current, 0, false, ::app::Fuse::Drawing::PolygonDrawable__typeof()),
        ::uNewFunction("MoveNext", ArrayEnumerator__Fuse_Drawing_PolygonDrawable__MoveNext, 0, false, ::app::Uno::Bool__typeof()),
        ::uNewFunction(".ctor", ArrayEnumerator__Fuse_Drawing_PolygonDrawable__New_1, 0, true, ArrayEnumerator__Fuse_Drawing_PolygonDrawable__typeof(), ::uGetArrayType(::app::Fuse::Drawing::PolygonDrawable__typeof())),
        ::uNewFunctionVoid("Reset", ArrayEnumerator__Fuse_Drawing_PolygonDrawable__Reset, 0, false));

    ::uRegisterType(type);
    return type;
}

void ArrayEnumerator__Fuse_Drawing_PolygonDrawable___ObjInit(ArrayEnumerator__Fuse_Drawing_PolygonDrawable* __this, ::uArray* source)
{
    __this->_source = source;
    __this->_iterator = -1;
}

void ArrayEnumerator__Fuse_Drawing_PolygonDrawable__Dispose(ArrayEnumerator__Fuse_Drawing_PolygonDrawable* __this)
{
}

::app::Fuse::Drawing::PolygonDrawable* ArrayEnumerator__Fuse_Drawing_PolygonDrawable__get_Current(ArrayEnumerator__Fuse_Drawing_PolygonDrawable* __this)
{
    return __this->_current;
}

bool ArrayEnumerator__Fuse_Drawing_PolygonDrawable__MoveNext(ArrayEnumerator__Fuse_Drawing_PolygonDrawable* __this)
{
    __this->_iterator++;

    if (__this->_iterator < ::uPtr< ::uArray*>(__this->_source)->Length())
    {
        __this->_current = ::uPtr< ::uArray*>(__this->_source)->Item< ::app::Fuse::Drawing::PolygonDrawable*>(__this->_iterator);
        return true;
    }

    return false;
}

ArrayEnumerator__Fuse_Drawing_PolygonDrawable* ArrayEnumerator__Fuse_Drawing_PolygonDrawable__New_1(::uStatic* __this, ::uArray* source)
{
    ArrayEnumerator__Fuse_Drawing_PolygonDrawable* inst = (ArrayEnumerator__Fuse_Drawing_PolygonDrawable*)::uAllocObject(sizeof(ArrayEnumerator__Fuse_Drawing_PolygonDrawable), ArrayEnumerator__Fuse_Drawing_PolygonDrawable__typeof());
    inst->_ObjInit(source);
    return inst;
}

void ArrayEnumerator__Fuse_Drawing_PolygonDrawable__Reset(ArrayEnumerator__Fuse_Drawing_PolygonDrawable* __this)
{
    __this->_iterator = -1;
    __this->_current = NULL;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Runtime\Implementation\Internal\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

ArrayEnumerator__Outracks_Simulator_Bytecode_BindVariable__uType* ArrayEnumerator__Outracks_Simulator_Bytecode_BindVariable__typeof()
{
    static ::uStaticStrong<ArrayEnumerator__Outracks_Simulator_Bytecode_BindVariable__uType*> type;
    if (type != NULL) return type;

    type = (ArrayEnumerator__Outracks_Simulator_Bytecode_BindVariable__uType*)::uAllocClassType(sizeof(ArrayEnumerator__Outracks_Simulator_Bytecode_BindVariable__uType), "Uno.Runtime.Implementation.Internal.ArrayEnumerator<Outracks.Simulator.Bytecode.BindVariable>", false, 3, 2, 0);

    type->__interface_0.__fp_get_Current = (::app::Outracks::Simulator::Bytecode::BindVariable*(*)(void*))ArrayEnumerator__Outracks_Simulator_Bytecode_BindVariable__get_Current;
    type->__interface_1.__fp_Dispose = (void(*)(void*))ArrayEnumerator__Outracks_Simulator_Bytecode_BindVariable__Dispose;
    type->__interface_2.__fp_Reset = (void(*)(void*))ArrayEnumerator__Outracks_Simulator_Bytecode_BindVariable__Reset;
    type->__interface_2.__fp_MoveNext = (bool(*)(void*))ArrayEnumerator__Outracks_Simulator_Bytecode_BindVariable__MoveNext;

    type->SetInterfaces(
        ::app::Uno::Collections::IEnumerator__Outracks_Simulator_Bytecode_BindVariable__typeof(), offsetof(ArrayEnumerator__Outracks_Simulator_Bytecode_BindVariable__uType, __interface_0),
        ::app::Uno::IDisposable__typeof(), offsetof(ArrayEnumerator__Outracks_Simulator_Bytecode_BindVariable__uType, __interface_1),
        ::app::Uno::Collections::IEnumerator__typeof(), offsetof(ArrayEnumerator__Outracks_Simulator_Bytecode_BindVariable__uType, __interface_2));

    type->SetStrongRefs(
        "_current", offsetof(ArrayEnumerator__Outracks_Simulator_Bytecode_BindVariable, _current),
        "_source", offsetof(ArrayEnumerator__Outracks_Simulator_Bytecode_BindVariable, _source));

    type->SetFields(3,
        ::uNewField("_current", NULL, offsetof(ArrayEnumerator__Outracks_Simulator_Bytecode_BindVariable, _current), ::app::Outracks::Simulator::Bytecode::BindVariable__typeof()),
        ::uNewField("_iterator", NULL, offsetof(ArrayEnumerator__Outracks_Simulator_Bytecode_BindVariable, _iterator), ::app::Uno::Int__typeof()),
        ::uNewField("_source", NULL, offsetof(ArrayEnumerator__Outracks_Simulator_Bytecode_BindVariable, _source), ::uGetArrayType(::app::Outracks::Simulator::Bytecode::BindVariable__typeof())));

    type->SetFunctions(5,
        ::uNewFunctionVoid("Dispose", ArrayEnumerator__Outracks_Simulator_Bytecode_BindVariable__Dispose, 0, false),
        ::uNewFunction("get_Current", ArrayEnumerator__Outracks_Simulator_Bytecode_BindVariable__get_Current, 0, false, ::app::Outracks::Simulator::Bytecode::BindVariable__typeof()),
        ::uNewFunction("MoveNext", ArrayEnumerator__Outracks_Simulator_Bytecode_BindVariable__MoveNext, 0, false, ::app::Uno::Bool__typeof()),
        ::uNewFunction(".ctor", ArrayEnumerator__Outracks_Simulator_Bytecode_BindVariable__New_1, 0, true, ArrayEnumerator__Outracks_Simulator_Bytecode_BindVariable__typeof(), ::uGetArrayType(::app::Outracks::Simulator::Bytecode::BindVariable__typeof())),
        ::uNewFunctionVoid("Reset", ArrayEnumerator__Outracks_Simulator_Bytecode_BindVariable__Reset, 0, false));

    ::uRegisterType(type);
    return type;
}

void ArrayEnumerator__Outracks_Simulator_Bytecode_BindVariable___ObjInit(ArrayEnumerator__Outracks_Simulator_Bytecode_BindVariable* __this, ::uArray* source)
{
    __this->_source = source;
    __this->_iterator = -1;
}

void ArrayEnumerator__Outracks_Simulator_Bytecode_BindVariable__Dispose(ArrayEnumerator__Outracks_Simulator_Bytecode_BindVariable* __this)
{
}

::app::Outracks::Simulator::Bytecode::BindVariable* ArrayEnumerator__Outracks_Simulator_Bytecode_BindVariable__get_Current(ArrayEnumerator__Outracks_Simulator_Bytecode_BindVariable* __this)
{
    return __this->_current;
}

bool ArrayEnumerator__Outracks_Simulator_Bytecode_BindVariable__MoveNext(ArrayEnumerator__Outracks_Simulator_Bytecode_BindVariable* __this)
{
    __this->_iterator++;

    if (__this->_iterator < ::uPtr< ::uArray*>(__this->_source)->Length())
    {
        __this->_current = ::uPtr< ::uArray*>(__this->_source)->Item< ::app::Outracks::Simulator::Bytecode::BindVariable*>(__this->_iterator);
        return true;
    }

    return false;
}

ArrayEnumerator__Outracks_Simulator_Bytecode_BindVariable* ArrayEnumerator__Outracks_Simulator_Bytecode_BindVariable__New_1(::uStatic* __this, ::uArray* source)
{
    ArrayEnumerator__Outracks_Simulator_Bytecode_BindVariable* inst = (ArrayEnumerator__Outracks_Simulator_Bytecode_BindVariable*)::uAllocObject(sizeof(ArrayEnumerator__Outracks_Simulator_Bytecode_BindVariable), ArrayEnumerator__Outracks_Simulator_Bytecode_BindVariable__typeof());
    inst->_ObjInit(source);
    return inst;
}

void ArrayEnumerator__Outracks_Simulator_Bytecode_BindVariable__Reset(ArrayEnumerator__Outracks_Simulator_Bytecode_BindVariable* __this)
{
    __this->_iterator = -1;
    __this->_current = NULL;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Runtime\Implementation\Internal\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

ArrayEnumerator__Outracks_Simulator_Bytecode_Expression__uType* ArrayEnumerator__Outracks_Simulator_Bytecode_Expression__typeof()
{
    static ::uStaticStrong<ArrayEnumerator__Outracks_Simulator_Bytecode_Expression__uType*> type;
    if (type != NULL) return type;

    type = (ArrayEnumerator__Outracks_Simulator_Bytecode_Expression__uType*)::uAllocClassType(sizeof(ArrayEnumerator__Outracks_Simulator_Bytecode_Expression__uType), "Uno.Runtime.Implementation.Internal.ArrayEnumerator<Outracks.Simulator.Bytecode.Expression>", false, 3, 2, 0);

    type->__interface_0.__fp_get_Current = (::app::Outracks::Simulator::Bytecode::Expression*(*)(void*))ArrayEnumerator__Outracks_Simulator_Bytecode_Expression__get_Current;
    type->__interface_1.__fp_Dispose = (void(*)(void*))ArrayEnumerator__Outracks_Simulator_Bytecode_Expression__Dispose;
    type->__interface_2.__fp_Reset = (void(*)(void*))ArrayEnumerator__Outracks_Simulator_Bytecode_Expression__Reset;
    type->__interface_2.__fp_MoveNext = (bool(*)(void*))ArrayEnumerator__Outracks_Simulator_Bytecode_Expression__MoveNext;

    type->SetInterfaces(
        ::app::Uno::Collections::IEnumerator__Outracks_Simulator_Bytecode_Expression__typeof(), offsetof(ArrayEnumerator__Outracks_Simulator_Bytecode_Expression__uType, __interface_0),
        ::app::Uno::IDisposable__typeof(), offsetof(ArrayEnumerator__Outracks_Simulator_Bytecode_Expression__uType, __interface_1),
        ::app::Uno::Collections::IEnumerator__typeof(), offsetof(ArrayEnumerator__Outracks_Simulator_Bytecode_Expression__uType, __interface_2));

    type->SetStrongRefs(
        "_current", offsetof(ArrayEnumerator__Outracks_Simulator_Bytecode_Expression, _current),
        "_source", offsetof(ArrayEnumerator__Outracks_Simulator_Bytecode_Expression, _source));

    type->SetFields(3,
        ::uNewField("_current", NULL, offsetof(ArrayEnumerator__Outracks_Simulator_Bytecode_Expression, _current), ::app::Outracks::Simulator::Bytecode::Expression__typeof()),
        ::uNewField("_iterator", NULL, offsetof(ArrayEnumerator__Outracks_Simulator_Bytecode_Expression, _iterator), ::app::Uno::Int__typeof()),
        ::uNewField("_source", NULL, offsetof(ArrayEnumerator__Outracks_Simulator_Bytecode_Expression, _source), ::uGetArrayType(::app::Outracks::Simulator::Bytecode::Expression__typeof())));

    type->SetFunctions(5,
        ::uNewFunctionVoid("Dispose", ArrayEnumerator__Outracks_Simulator_Bytecode_Expression__Dispose, 0, false),
        ::uNewFunction("get_Current", ArrayEnumerator__Outracks_Simulator_Bytecode_Expression__get_Current, 0, false, ::app::Outracks::Simulator::Bytecode::Expression__typeof()),
        ::uNewFunction("MoveNext", ArrayEnumerator__Outracks_Simulator_Bytecode_Expression__MoveNext, 0, false, ::app::Uno::Bool__typeof()),
        ::uNewFunction(".ctor", ArrayEnumerator__Outracks_Simulator_Bytecode_Expression__New_1, 0, true, ArrayEnumerator__Outracks_Simulator_Bytecode_Expression__typeof(), ::uGetArrayType(::app::Outracks::Simulator::Bytecode::Expression__typeof())),
        ::uNewFunctionVoid("Reset", ArrayEnumerator__Outracks_Simulator_Bytecode_Expression__Reset, 0, false));

    ::uRegisterType(type);
    return type;
}

void ArrayEnumerator__Outracks_Simulator_Bytecode_Expression___ObjInit(ArrayEnumerator__Outracks_Simulator_Bytecode_Expression* __this, ::uArray* source)
{
    __this->_source = source;
    __this->_iterator = -1;
}

void ArrayEnumerator__Outracks_Simulator_Bytecode_Expression__Dispose(ArrayEnumerator__Outracks_Simulator_Bytecode_Expression* __this)
{
}

::app::Outracks::Simulator::Bytecode::Expression* ArrayEnumerator__Outracks_Simulator_Bytecode_Expression__get_Current(ArrayEnumerator__Outracks_Simulator_Bytecode_Expression* __this)
{
    return __this->_current;
}

bool ArrayEnumerator__Outracks_Simulator_Bytecode_Expression__MoveNext(ArrayEnumerator__Outracks_Simulator_Bytecode_Expression* __this)
{
    __this->_iterator++;

    if (__this->_iterator < ::uPtr< ::uArray*>(__this->_source)->Length())
    {
        __this->_current = ::uPtr< ::uArray*>(__this->_source)->Item< ::app::Outracks::Simulator::Bytecode::Expression*>(__this->_iterator);
        return true;
    }

    return false;
}

ArrayEnumerator__Outracks_Simulator_Bytecode_Expression* ArrayEnumerator__Outracks_Simulator_Bytecode_Expression__New_1(::uStatic* __this, ::uArray* source)
{
    ArrayEnumerator__Outracks_Simulator_Bytecode_Expression* inst = (ArrayEnumerator__Outracks_Simulator_Bytecode_Expression*)::uAllocObject(sizeof(ArrayEnumerator__Outracks_Simulator_Bytecode_Expression), ArrayEnumerator__Outracks_Simulator_Bytecode_Expression__typeof());
    inst->_ObjInit(source);
    return inst;
}

void ArrayEnumerator__Outracks_Simulator_Bytecode_Expression__Reset(ArrayEnumerator__Outracks_Simulator_Bytecode_Expression* __this)
{
    __this->_iterator = -1;
    __this->_current = NULL;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Runtime\Implementation\Internal\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

ArrayEnumerator__Outracks_Simulator_Bytecode_Parameter__uType* ArrayEnumerator__Outracks_Simulator_Bytecode_Parameter__typeof()
{
    static ::uStaticStrong<ArrayEnumerator__Outracks_Simulator_Bytecode_Parameter__uType*> type;
    if (type != NULL) return type;

    type = (ArrayEnumerator__Outracks_Simulator_Bytecode_Parameter__uType*)::uAllocClassType(sizeof(ArrayEnumerator__Outracks_Simulator_Bytecode_Parameter__uType), "Uno.Runtime.Implementation.Internal.ArrayEnumerator<Outracks.Simulator.Bytecode.Parameter>", false, 3, 2, 0);

    type->__interface_0.__fp_get_Current = (::app::Outracks::Simulator::Bytecode::Parameter*(*)(void*))ArrayEnumerator__Outracks_Simulator_Bytecode_Parameter__get_Current;
    type->__interface_1.__fp_Dispose = (void(*)(void*))ArrayEnumerator__Outracks_Simulator_Bytecode_Parameter__Dispose;
    type->__interface_2.__fp_Reset = (void(*)(void*))ArrayEnumerator__Outracks_Simulator_Bytecode_Parameter__Reset;
    type->__interface_2.__fp_MoveNext = (bool(*)(void*))ArrayEnumerator__Outracks_Simulator_Bytecode_Parameter__MoveNext;

    type->SetInterfaces(
        ::app::Uno::Collections::IEnumerator__Outracks_Simulator_Bytecode_Parameter__typeof(), offsetof(ArrayEnumerator__Outracks_Simulator_Bytecode_Parameter__uType, __interface_0),
        ::app::Uno::IDisposable__typeof(), offsetof(ArrayEnumerator__Outracks_Simulator_Bytecode_Parameter__uType, __interface_1),
        ::app::Uno::Collections::IEnumerator__typeof(), offsetof(ArrayEnumerator__Outracks_Simulator_Bytecode_Parameter__uType, __interface_2));

    type->SetStrongRefs(
        "_current", offsetof(ArrayEnumerator__Outracks_Simulator_Bytecode_Parameter, _current),
        "_source", offsetof(ArrayEnumerator__Outracks_Simulator_Bytecode_Parameter, _source));

    type->SetFields(3,
        ::uNewField("_current", NULL, offsetof(ArrayEnumerator__Outracks_Simulator_Bytecode_Parameter, _current), ::app::Outracks::Simulator::Bytecode::Parameter__typeof()),
        ::uNewField("_iterator", NULL, offsetof(ArrayEnumerator__Outracks_Simulator_Bytecode_Parameter, _iterator), ::app::Uno::Int__typeof()),
        ::uNewField("_source", NULL, offsetof(ArrayEnumerator__Outracks_Simulator_Bytecode_Parameter, _source), ::uGetArrayType(::app::Outracks::Simulator::Bytecode::Parameter__typeof())));

    type->SetFunctions(5,
        ::uNewFunctionVoid("Dispose", ArrayEnumerator__Outracks_Simulator_Bytecode_Parameter__Dispose, 0, false),
        ::uNewFunction("get_Current", ArrayEnumerator__Outracks_Simulator_Bytecode_Parameter__get_Current, 0, false, ::app::Outracks::Simulator::Bytecode::Parameter__typeof()),
        ::uNewFunction("MoveNext", ArrayEnumerator__Outracks_Simulator_Bytecode_Parameter__MoveNext, 0, false, ::app::Uno::Bool__typeof()),
        ::uNewFunction(".ctor", ArrayEnumerator__Outracks_Simulator_Bytecode_Parameter__New_1, 0, true, ArrayEnumerator__Outracks_Simulator_Bytecode_Parameter__typeof(), ::uGetArrayType(::app::Outracks::Simulator::Bytecode::Parameter__typeof())),
        ::uNewFunctionVoid("Reset", ArrayEnumerator__Outracks_Simulator_Bytecode_Parameter__Reset, 0, false));

    ::uRegisterType(type);
    return type;
}

void ArrayEnumerator__Outracks_Simulator_Bytecode_Parameter___ObjInit(ArrayEnumerator__Outracks_Simulator_Bytecode_Parameter* __this, ::uArray* source)
{
    __this->_source = source;
    __this->_iterator = -1;
}

void ArrayEnumerator__Outracks_Simulator_Bytecode_Parameter__Dispose(ArrayEnumerator__Outracks_Simulator_Bytecode_Parameter* __this)
{
}

::app::Outracks::Simulator::Bytecode::Parameter* ArrayEnumerator__Outracks_Simulator_Bytecode_Parameter__get_Current(ArrayEnumerator__Outracks_Simulator_Bytecode_Parameter* __this)
{
    return __this->_current;
}

bool ArrayEnumerator__Outracks_Simulator_Bytecode_Parameter__MoveNext(ArrayEnumerator__Outracks_Simulator_Bytecode_Parameter* __this)
{
    __this->_iterator++;

    if (__this->_iterator < ::uPtr< ::uArray*>(__this->_source)->Length())
    {
        __this->_current = ::uPtr< ::uArray*>(__this->_source)->Item< ::app::Outracks::Simulator::Bytecode::Parameter*>(__this->_iterator);
        return true;
    }

    return false;
}

ArrayEnumerator__Outracks_Simulator_Bytecode_Parameter* ArrayEnumerator__Outracks_Simulator_Bytecode_Parameter__New_1(::uStatic* __this, ::uArray* source)
{
    ArrayEnumerator__Outracks_Simulator_Bytecode_Parameter* inst = (ArrayEnumerator__Outracks_Simulator_Bytecode_Parameter*)::uAllocObject(sizeof(ArrayEnumerator__Outracks_Simulator_Bytecode_Parameter), ArrayEnumerator__Outracks_Simulator_Bytecode_Parameter__typeof());
    inst->_ObjInit(source);
    return inst;
}

void ArrayEnumerator__Outracks_Simulator_Bytecode_Parameter__Reset(ArrayEnumerator__Outracks_Simulator_Bytecode_Parameter* __this)
{
    __this->_iterator = -1;
    __this->_current = NULL;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Runtime\Implementation\Internal\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

ArrayEnumerator__Outracks_Simulator_Bytecode_Statement__uType* ArrayEnumerator__Outracks_Simulator_Bytecode_Statement__typeof()
{
    static ::uStaticStrong<ArrayEnumerator__Outracks_Simulator_Bytecode_Statement__uType*> type;
    if (type != NULL) return type;

    type = (ArrayEnumerator__Outracks_Simulator_Bytecode_Statement__uType*)::uAllocClassType(sizeof(ArrayEnumerator__Outracks_Simulator_Bytecode_Statement__uType), "Uno.Runtime.Implementation.Internal.ArrayEnumerator<Outracks.Simulator.Bytecode.Statement>", false, 3, 2, 0);

    type->__interface_0.__fp_get_Current = (::app::Outracks::Simulator::Bytecode::Statement*(*)(void*))ArrayEnumerator__Outracks_Simulator_Bytecode_Statement__get_Current;
    type->__interface_1.__fp_Dispose = (void(*)(void*))ArrayEnumerator__Outracks_Simulator_Bytecode_Statement__Dispose;
    type->__interface_2.__fp_Reset = (void(*)(void*))ArrayEnumerator__Outracks_Simulator_Bytecode_Statement__Reset;
    type->__interface_2.__fp_MoveNext = (bool(*)(void*))ArrayEnumerator__Outracks_Simulator_Bytecode_Statement__MoveNext;

    type->SetInterfaces(
        ::app::Uno::Collections::IEnumerator__Outracks_Simulator_Bytecode_Statement__typeof(), offsetof(ArrayEnumerator__Outracks_Simulator_Bytecode_Statement__uType, __interface_0),
        ::app::Uno::IDisposable__typeof(), offsetof(ArrayEnumerator__Outracks_Simulator_Bytecode_Statement__uType, __interface_1),
        ::app::Uno::Collections::IEnumerator__typeof(), offsetof(ArrayEnumerator__Outracks_Simulator_Bytecode_Statement__uType, __interface_2));

    type->SetStrongRefs(
        "_current", offsetof(ArrayEnumerator__Outracks_Simulator_Bytecode_Statement, _current),
        "_source", offsetof(ArrayEnumerator__Outracks_Simulator_Bytecode_Statement, _source));

    type->SetFields(3,
        ::uNewField("_current", NULL, offsetof(ArrayEnumerator__Outracks_Simulator_Bytecode_Statement, _current), ::app::Outracks::Simulator::Bytecode::Statement__typeof()),
        ::uNewField("_iterator", NULL, offsetof(ArrayEnumerator__Outracks_Simulator_Bytecode_Statement, _iterator), ::app::Uno::Int__typeof()),
        ::uNewField("_source", NULL, offsetof(ArrayEnumerator__Outracks_Simulator_Bytecode_Statement, _source), ::uGetArrayType(::app::Outracks::Simulator::Bytecode::Statement__typeof())));

    type->SetFunctions(5,
        ::uNewFunctionVoid("Dispose", ArrayEnumerator__Outracks_Simulator_Bytecode_Statement__Dispose, 0, false),
        ::uNewFunction("get_Current", ArrayEnumerator__Outracks_Simulator_Bytecode_Statement__get_Current, 0, false, ::app::Outracks::Simulator::Bytecode::Statement__typeof()),
        ::uNewFunction("MoveNext", ArrayEnumerator__Outracks_Simulator_Bytecode_Statement__MoveNext, 0, false, ::app::Uno::Bool__typeof()),
        ::uNewFunction(".ctor", ArrayEnumerator__Outracks_Simulator_Bytecode_Statement__New_1, 0, true, ArrayEnumerator__Outracks_Simulator_Bytecode_Statement__typeof(), ::uGetArrayType(::app::Outracks::Simulator::Bytecode::Statement__typeof())),
        ::uNewFunctionVoid("Reset", ArrayEnumerator__Outracks_Simulator_Bytecode_Statement__Reset, 0, false));

    ::uRegisterType(type);
    return type;
}

void ArrayEnumerator__Outracks_Simulator_Bytecode_Statement___ObjInit(ArrayEnumerator__Outracks_Simulator_Bytecode_Statement* __this, ::uArray* source)
{
    __this->_source = source;
    __this->_iterator = -1;
}

void ArrayEnumerator__Outracks_Simulator_Bytecode_Statement__Dispose(ArrayEnumerator__Outracks_Simulator_Bytecode_Statement* __this)
{
}

::app::Outracks::Simulator::Bytecode::Statement* ArrayEnumerator__Outracks_Simulator_Bytecode_Statement__get_Current(ArrayEnumerator__Outracks_Simulator_Bytecode_Statement* __this)
{
    return __this->_current;
}

bool ArrayEnumerator__Outracks_Simulator_Bytecode_Statement__MoveNext(ArrayEnumerator__Outracks_Simulator_Bytecode_Statement* __this)
{
    __this->_iterator++;

    if (__this->_iterator < ::uPtr< ::uArray*>(__this->_source)->Length())
    {
        __this->_current = ::uPtr< ::uArray*>(__this->_source)->Item< ::app::Outracks::Simulator::Bytecode::Statement*>(__this->_iterator);
        return true;
    }

    return false;
}

ArrayEnumerator__Outracks_Simulator_Bytecode_Statement* ArrayEnumerator__Outracks_Simulator_Bytecode_Statement__New_1(::uStatic* __this, ::uArray* source)
{
    ArrayEnumerator__Outracks_Simulator_Bytecode_Statement* inst = (ArrayEnumerator__Outracks_Simulator_Bytecode_Statement*)::uAllocObject(sizeof(ArrayEnumerator__Outracks_Simulator_Bytecode_Statement), ArrayEnumerator__Outracks_Simulator_Bytecode_Statement__typeof());
    inst->_ObjInit(source);
    return inst;
}

void ArrayEnumerator__Outracks_Simulator_Bytecode_Statement__Reset(ArrayEnumerator__Outracks_Simulator_Bytecode_Statement* __this)
{
    __this->_iterator = -1;
    __this->_current = NULL;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Runtime\Implementation\Internal\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

ArrayEnumerator__Outracks_Simulator_Bytecode_TypeName__uType* ArrayEnumerator__Outracks_Simulator_Bytecode_TypeName__typeof()
{
    static ::uStaticStrong<ArrayEnumerator__Outracks_Simulator_Bytecode_TypeName__uType*> type;
    if (type != NULL) return type;

    type = (ArrayEnumerator__Outracks_Simulator_Bytecode_TypeName__uType*)::uAllocClassType(sizeof(ArrayEnumerator__Outracks_Simulator_Bytecode_TypeName__uType), "Uno.Runtime.Implementation.Internal.ArrayEnumerator<Outracks.Simulator.Bytecode.TypeName>", false, 3, 2, 0);

    type->__interface_0.__fp_get_Current = (::app::Outracks::Simulator::Bytecode::TypeName*(*)(void*))ArrayEnumerator__Outracks_Simulator_Bytecode_TypeName__get_Current;
    type->__interface_1.__fp_Dispose = (void(*)(void*))ArrayEnumerator__Outracks_Simulator_Bytecode_TypeName__Dispose;
    type->__interface_2.__fp_Reset = (void(*)(void*))ArrayEnumerator__Outracks_Simulator_Bytecode_TypeName__Reset;
    type->__interface_2.__fp_MoveNext = (bool(*)(void*))ArrayEnumerator__Outracks_Simulator_Bytecode_TypeName__MoveNext;

    type->SetInterfaces(
        ::app::Uno::Collections::IEnumerator__Outracks_Simulator_Bytecode_TypeName__typeof(), offsetof(ArrayEnumerator__Outracks_Simulator_Bytecode_TypeName__uType, __interface_0),
        ::app::Uno::IDisposable__typeof(), offsetof(ArrayEnumerator__Outracks_Simulator_Bytecode_TypeName__uType, __interface_1),
        ::app::Uno::Collections::IEnumerator__typeof(), offsetof(ArrayEnumerator__Outracks_Simulator_Bytecode_TypeName__uType, __interface_2));

    type->SetStrongRefs(
        "_current", offsetof(ArrayEnumerator__Outracks_Simulator_Bytecode_TypeName, _current),
        "_source", offsetof(ArrayEnumerator__Outracks_Simulator_Bytecode_TypeName, _source));

    type->SetFields(3,
        ::uNewField("_current", NULL, offsetof(ArrayEnumerator__Outracks_Simulator_Bytecode_TypeName, _current), ::app::Outracks::Simulator::Bytecode::TypeName__typeof()),
        ::uNewField("_iterator", NULL, offsetof(ArrayEnumerator__Outracks_Simulator_Bytecode_TypeName, _iterator), ::app::Uno::Int__typeof()),
        ::uNewField("_source", NULL, offsetof(ArrayEnumerator__Outracks_Simulator_Bytecode_TypeName, _source), ::uGetArrayType(::app::Outracks::Simulator::Bytecode::TypeName__typeof())));

    type->SetFunctions(5,
        ::uNewFunctionVoid("Dispose", ArrayEnumerator__Outracks_Simulator_Bytecode_TypeName__Dispose, 0, false),
        ::uNewFunction("get_Current", ArrayEnumerator__Outracks_Simulator_Bytecode_TypeName__get_Current, 0, false, ::app::Outracks::Simulator::Bytecode::TypeName__typeof()),
        ::uNewFunction("MoveNext", ArrayEnumerator__Outracks_Simulator_Bytecode_TypeName__MoveNext, 0, false, ::app::Uno::Bool__typeof()),
        ::uNewFunction(".ctor", ArrayEnumerator__Outracks_Simulator_Bytecode_TypeName__New_1, 0, true, ArrayEnumerator__Outracks_Simulator_Bytecode_TypeName__typeof(), ::uGetArrayType(::app::Outracks::Simulator::Bytecode::TypeName__typeof())),
        ::uNewFunctionVoid("Reset", ArrayEnumerator__Outracks_Simulator_Bytecode_TypeName__Reset, 0, false));

    ::uRegisterType(type);
    return type;
}

void ArrayEnumerator__Outracks_Simulator_Bytecode_TypeName___ObjInit(ArrayEnumerator__Outracks_Simulator_Bytecode_TypeName* __this, ::uArray* source)
{
    __this->_source = source;
    __this->_iterator = -1;
}

void ArrayEnumerator__Outracks_Simulator_Bytecode_TypeName__Dispose(ArrayEnumerator__Outracks_Simulator_Bytecode_TypeName* __this)
{
}

::app::Outracks::Simulator::Bytecode::TypeName* ArrayEnumerator__Outracks_Simulator_Bytecode_TypeName__get_Current(ArrayEnumerator__Outracks_Simulator_Bytecode_TypeName* __this)
{
    return __this->_current;
}

bool ArrayEnumerator__Outracks_Simulator_Bytecode_TypeName__MoveNext(ArrayEnumerator__Outracks_Simulator_Bytecode_TypeName* __this)
{
    __this->_iterator++;

    if (__this->_iterator < ::uPtr< ::uArray*>(__this->_source)->Length())
    {
        __this->_current = ::uPtr< ::uArray*>(__this->_source)->Item< ::app::Outracks::Simulator::Bytecode::TypeName*>(__this->_iterator);
        return true;
    }

    return false;
}

ArrayEnumerator__Outracks_Simulator_Bytecode_TypeName* ArrayEnumerator__Outracks_Simulator_Bytecode_TypeName__New_1(::uStatic* __this, ::uArray* source)
{
    ArrayEnumerator__Outracks_Simulator_Bytecode_TypeName* inst = (ArrayEnumerator__Outracks_Simulator_Bytecode_TypeName*)::uAllocObject(sizeof(ArrayEnumerator__Outracks_Simulator_Bytecode_TypeName), ArrayEnumerator__Outracks_Simulator_Bytecode_TypeName__typeof());
    inst->_ObjInit(source);
    return inst;
}

void ArrayEnumerator__Outracks_Simulator_Bytecode_TypeName__Reset(ArrayEnumerator__Outracks_Simulator_Bytecode_TypeName* __this)
{
    __this->_iterator = -1;
    __this->_current = NULL;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Runtime\Implementation\Internal\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

ArrayEnumerator__Outracks_Simulator_DialogButton__uType* ArrayEnumerator__Outracks_Simulator_DialogButton__typeof()
{
    static ::uStaticStrong<ArrayEnumerator__Outracks_Simulator_DialogButton__uType*> type;
    if (type != NULL) return type;

    type = (ArrayEnumerator__Outracks_Simulator_DialogButton__uType*)::uAllocClassType(sizeof(ArrayEnumerator__Outracks_Simulator_DialogButton__uType), "Uno.Runtime.Implementation.Internal.ArrayEnumerator<Outracks.Simulator.DialogButton>", false, 3, 2, 0);

    type->__interface_0.__fp_get_Current = (::app::Outracks::Simulator::DialogButton*(*)(void*))ArrayEnumerator__Outracks_Simulator_DialogButton__get_Current;
    type->__interface_1.__fp_Dispose = (void(*)(void*))ArrayEnumerator__Outracks_Simulator_DialogButton__Dispose;
    type->__interface_2.__fp_Reset = (void(*)(void*))ArrayEnumerator__Outracks_Simulator_DialogButton__Reset;
    type->__interface_2.__fp_MoveNext = (bool(*)(void*))ArrayEnumerator__Outracks_Simulator_DialogButton__MoveNext;

    type->SetInterfaces(
        ::app::Uno::Collections::IEnumerator__Outracks_Simulator_DialogButton__typeof(), offsetof(ArrayEnumerator__Outracks_Simulator_DialogButton__uType, __interface_0),
        ::app::Uno::IDisposable__typeof(), offsetof(ArrayEnumerator__Outracks_Simulator_DialogButton__uType, __interface_1),
        ::app::Uno::Collections::IEnumerator__typeof(), offsetof(ArrayEnumerator__Outracks_Simulator_DialogButton__uType, __interface_2));

    type->SetStrongRefs(
        "_current", offsetof(ArrayEnumerator__Outracks_Simulator_DialogButton, _current),
        "_source", offsetof(ArrayEnumerator__Outracks_Simulator_DialogButton, _source));

    type->SetFields(3,
        ::uNewField("_current", NULL, offsetof(ArrayEnumerator__Outracks_Simulator_DialogButton, _current), ::app::Outracks::Simulator::DialogButton__typeof()),
        ::uNewField("_iterator", NULL, offsetof(ArrayEnumerator__Outracks_Simulator_DialogButton, _iterator), ::app::Uno::Int__typeof()),
        ::uNewField("_source", NULL, offsetof(ArrayEnumerator__Outracks_Simulator_DialogButton, _source), ::uGetArrayType(::app::Outracks::Simulator::DialogButton__typeof())));

    type->SetFunctions(5,
        ::uNewFunctionVoid("Dispose", ArrayEnumerator__Outracks_Simulator_DialogButton__Dispose, 0, false),
        ::uNewFunction("get_Current", ArrayEnumerator__Outracks_Simulator_DialogButton__get_Current, 0, false, ::app::Outracks::Simulator::DialogButton__typeof()),
        ::uNewFunction("MoveNext", ArrayEnumerator__Outracks_Simulator_DialogButton__MoveNext, 0, false, ::app::Uno::Bool__typeof()),
        ::uNewFunction(".ctor", ArrayEnumerator__Outracks_Simulator_DialogButton__New_1, 0, true, ArrayEnumerator__Outracks_Simulator_DialogButton__typeof(), ::uGetArrayType(::app::Outracks::Simulator::DialogButton__typeof())),
        ::uNewFunctionVoid("Reset", ArrayEnumerator__Outracks_Simulator_DialogButton__Reset, 0, false));

    ::uRegisterType(type);
    return type;
}

void ArrayEnumerator__Outracks_Simulator_DialogButton___ObjInit(ArrayEnumerator__Outracks_Simulator_DialogButton* __this, ::uArray* source)
{
    __this->_source = source;
    __this->_iterator = -1;
}

void ArrayEnumerator__Outracks_Simulator_DialogButton__Dispose(ArrayEnumerator__Outracks_Simulator_DialogButton* __this)
{
}

::app::Outracks::Simulator::DialogButton* ArrayEnumerator__Outracks_Simulator_DialogButton__get_Current(ArrayEnumerator__Outracks_Simulator_DialogButton* __this)
{
    return __this->_current;
}

bool ArrayEnumerator__Outracks_Simulator_DialogButton__MoveNext(ArrayEnumerator__Outracks_Simulator_DialogButton* __this)
{
    __this->_iterator++;

    if (__this->_iterator < ::uPtr< ::uArray*>(__this->_source)->Length())
    {
        __this->_current = ::uPtr< ::uArray*>(__this->_source)->Item< ::app::Outracks::Simulator::DialogButton*>(__this->_iterator);
        return true;
    }

    return false;
}

ArrayEnumerator__Outracks_Simulator_DialogButton* ArrayEnumerator__Outracks_Simulator_DialogButton__New_1(::uStatic* __this, ::uArray* source)
{
    ArrayEnumerator__Outracks_Simulator_DialogButton* inst = (ArrayEnumerator__Outracks_Simulator_DialogButton*)::uAllocObject(sizeof(ArrayEnumerator__Outracks_Simulator_DialogButton), ArrayEnumerator__Outracks_Simulator_DialogButton__typeof());
    inst->_ObjInit(source);
    return inst;
}

void ArrayEnumerator__Outracks_Simulator_DialogButton__Reset(ArrayEnumerator__Outracks_Simulator_DialogButton* __this)
{
    __this->_iterator = -1;
    __this->_current = NULL;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Runtime\Implementation\Internal\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

ArrayEnumerator__Outracks_Simulator_Protocol_ExceptionInfo__uType* ArrayEnumerator__Outracks_Simulator_Protocol_ExceptionInfo__typeof()
{
    static ::uStaticStrong<ArrayEnumerator__Outracks_Simulator_Protocol_ExceptionInfo__uType*> type;
    if (type != NULL) return type;

    type = (ArrayEnumerator__Outracks_Simulator_Protocol_ExceptionInfo__uType*)::uAllocClassType(sizeof(ArrayEnumerator__Outracks_Simulator_Protocol_ExceptionInfo__uType), "Uno.Runtime.Implementation.Internal.ArrayEnumerator<Outracks.Simulator.Protocol.ExceptionInfo>", false, 3, 2, 0);

    type->__interface_0.__fp_get_Current = (::app::Outracks::Simulator::Protocol::ExceptionInfo*(*)(void*))ArrayEnumerator__Outracks_Simulator_Protocol_ExceptionInfo__get_Current;
    type->__interface_1.__fp_Dispose = (void(*)(void*))ArrayEnumerator__Outracks_Simulator_Protocol_ExceptionInfo__Dispose;
    type->__interface_2.__fp_Reset = (void(*)(void*))ArrayEnumerator__Outracks_Simulator_Protocol_ExceptionInfo__Reset;
    type->__interface_2.__fp_MoveNext = (bool(*)(void*))ArrayEnumerator__Outracks_Simulator_Protocol_ExceptionInfo__MoveNext;

    type->SetInterfaces(
        ::app::Uno::Collections::IEnumerator__Outracks_Simulator_Protocol_ExceptionInfo__typeof(), offsetof(ArrayEnumerator__Outracks_Simulator_Protocol_ExceptionInfo__uType, __interface_0),
        ::app::Uno::IDisposable__typeof(), offsetof(ArrayEnumerator__Outracks_Simulator_Protocol_ExceptionInfo__uType, __interface_1),
        ::app::Uno::Collections::IEnumerator__typeof(), offsetof(ArrayEnumerator__Outracks_Simulator_Protocol_ExceptionInfo__uType, __interface_2));

    type->SetStrongRefs(
        "_current", offsetof(ArrayEnumerator__Outracks_Simulator_Protocol_ExceptionInfo, _current),
        "_source", offsetof(ArrayEnumerator__Outracks_Simulator_Protocol_ExceptionInfo, _source));

    type->SetFields(3,
        ::uNewField("_current", NULL, offsetof(ArrayEnumerator__Outracks_Simulator_Protocol_ExceptionInfo, _current), ::app::Outracks::Simulator::Protocol::ExceptionInfo__typeof()),
        ::uNewField("_iterator", NULL, offsetof(ArrayEnumerator__Outracks_Simulator_Protocol_ExceptionInfo, _iterator), ::app::Uno::Int__typeof()),
        ::uNewField("_source", NULL, offsetof(ArrayEnumerator__Outracks_Simulator_Protocol_ExceptionInfo, _source), ::uGetArrayType(::app::Outracks::Simulator::Protocol::ExceptionInfo__typeof())));

    type->SetFunctions(5,
        ::uNewFunctionVoid("Dispose", ArrayEnumerator__Outracks_Simulator_Protocol_ExceptionInfo__Dispose, 0, false),
        ::uNewFunction("get_Current", ArrayEnumerator__Outracks_Simulator_Protocol_ExceptionInfo__get_Current, 0, false, ::app::Outracks::Simulator::Protocol::ExceptionInfo__typeof()),
        ::uNewFunction("MoveNext", ArrayEnumerator__Outracks_Simulator_Protocol_ExceptionInfo__MoveNext, 0, false, ::app::Uno::Bool__typeof()),
        ::uNewFunction(".ctor", ArrayEnumerator__Outracks_Simulator_Protocol_ExceptionInfo__New_1, 0, true, ArrayEnumerator__Outracks_Simulator_Protocol_ExceptionInfo__typeof(), ::uGetArrayType(::app::Outracks::Simulator::Protocol::ExceptionInfo__typeof())),
        ::uNewFunctionVoid("Reset", ArrayEnumerator__Outracks_Simulator_Protocol_ExceptionInfo__Reset, 0, false));

    ::uRegisterType(type);
    return type;
}

void ArrayEnumerator__Outracks_Simulator_Protocol_ExceptionInfo___ObjInit(ArrayEnumerator__Outracks_Simulator_Protocol_ExceptionInfo* __this, ::uArray* source)
{
    __this->_source = source;
    __this->_iterator = -1;
}

void ArrayEnumerator__Outracks_Simulator_Protocol_ExceptionInfo__Dispose(ArrayEnumerator__Outracks_Simulator_Protocol_ExceptionInfo* __this)
{
}

::app::Outracks::Simulator::Protocol::ExceptionInfo* ArrayEnumerator__Outracks_Simulator_Protocol_ExceptionInfo__get_Current(ArrayEnumerator__Outracks_Simulator_Protocol_ExceptionInfo* __this)
{
    return __this->_current;
}

bool ArrayEnumerator__Outracks_Simulator_Protocol_ExceptionInfo__MoveNext(ArrayEnumerator__Outracks_Simulator_Protocol_ExceptionInfo* __this)
{
    __this->_iterator++;

    if (__this->_iterator < ::uPtr< ::uArray*>(__this->_source)->Length())
    {
        __this->_current = ::uPtr< ::uArray*>(__this->_source)->Item< ::app::Outracks::Simulator::Protocol::ExceptionInfo*>(__this->_iterator);
        return true;
    }

    return false;
}

ArrayEnumerator__Outracks_Simulator_Protocol_ExceptionInfo* ArrayEnumerator__Outracks_Simulator_Protocol_ExceptionInfo__New_1(::uStatic* __this, ::uArray* source)
{
    ArrayEnumerator__Outracks_Simulator_Protocol_ExceptionInfo* inst = (ArrayEnumerator__Outracks_Simulator_Protocol_ExceptionInfo*)::uAllocObject(sizeof(ArrayEnumerator__Outracks_Simulator_Protocol_ExceptionInfo), ArrayEnumerator__Outracks_Simulator_Protocol_ExceptionInfo__typeof());
    inst->_ObjInit(source);
    return inst;
}

void ArrayEnumerator__Outracks_Simulator_Protocol_ExceptionInfo__Reset(ArrayEnumerator__Outracks_Simulator_Protocol_ExceptionInfo* __this)
{
    __this->_iterator = -1;
    __this->_current = NULL;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Runtime\Implementation\Internal\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

ArrayEnumerator__Outracks_Simulator_Task_Outracks_Simulator_ISimulatorClient___uType* ArrayEnumerator__Outracks_Simulator_Task_Outracks_Simulator_ISimulatorClient___typeof()
{
    static ::uStaticStrong<ArrayEnumerator__Outracks_Simulator_Task_Outracks_Simulator_ISimulatorClient___uType*> type;
    if (type != NULL) return type;

    type = (ArrayEnumerator__Outracks_Simulator_Task_Outracks_Simulator_ISimulatorClient___uType*)::uAllocClassType(sizeof(ArrayEnumerator__Outracks_Simulator_Task_Outracks_Simulator_ISimulatorClient___uType), "Uno.Runtime.Implementation.Internal.ArrayEnumerator<Outracks.Simulator.Task<Outracks.Simulator.ISimulatorClient>>", false, 3, 2, 0);

    type->__interface_0.__fp_get_Current = (::app::Outracks::Simulator::Task__Outracks_Simulator_ISimulatorClient*(*)(void*))ArrayEnumerator__Outracks_Simulator_Task_Outracks_Simulator_ISimulatorClient___get_Current;
    type->__interface_1.__fp_Dispose = (void(*)(void*))ArrayEnumerator__Outracks_Simulator_Task_Outracks_Simulator_ISimulatorClient___Dispose;
    type->__interface_2.__fp_Reset = (void(*)(void*))ArrayEnumerator__Outracks_Simulator_Task_Outracks_Simulator_ISimulatorClient___Reset;
    type->__interface_2.__fp_MoveNext = (bool(*)(void*))ArrayEnumerator__Outracks_Simulator_Task_Outracks_Simulator_ISimulatorClient___MoveNext;

    type->SetInterfaces(
        ::app::Uno::Collections::IEnumerator__Outracks_Simulator_Task_Outracks_Simulator_ISimulatorClient___typeof(), offsetof(ArrayEnumerator__Outracks_Simulator_Task_Outracks_Simulator_ISimulatorClient___uType, __interface_0),
        ::app::Uno::IDisposable__typeof(), offsetof(ArrayEnumerator__Outracks_Simulator_Task_Outracks_Simulator_ISimulatorClient___uType, __interface_1),
        ::app::Uno::Collections::IEnumerator__typeof(), offsetof(ArrayEnumerator__Outracks_Simulator_Task_Outracks_Simulator_ISimulatorClient___uType, __interface_2));

    type->SetStrongRefs(
        "_current", offsetof(ArrayEnumerator__Outracks_Simulator_Task_Outracks_Simulator_ISimulatorClient_, _current),
        "_source", offsetof(ArrayEnumerator__Outracks_Simulator_Task_Outracks_Simulator_ISimulatorClient_, _source));

    type->SetFields(3,
        ::uNewField("_current", NULL, offsetof(ArrayEnumerator__Outracks_Simulator_Task_Outracks_Simulator_ISimulatorClient_, _current), ::app::Outracks::Simulator::Task__Outracks_Simulator_ISimulatorClient__typeof()),
        ::uNewField("_iterator", NULL, offsetof(ArrayEnumerator__Outracks_Simulator_Task_Outracks_Simulator_ISimulatorClient_, _iterator), ::app::Uno::Int__typeof()),
        ::uNewField("_source", NULL, offsetof(ArrayEnumerator__Outracks_Simulator_Task_Outracks_Simulator_ISimulatorClient_, _source), ::uGetArrayType(::app::Outracks::Simulator::Task__Outracks_Simulator_ISimulatorClient__typeof())));

    type->SetFunctions(5,
        ::uNewFunctionVoid("Dispose", ArrayEnumerator__Outracks_Simulator_Task_Outracks_Simulator_ISimulatorClient___Dispose, 0, false),
        ::uNewFunction("get_Current", ArrayEnumerator__Outracks_Simulator_Task_Outracks_Simulator_ISimulatorClient___get_Current, 0, false, ::app::Outracks::Simulator::Task__Outracks_Simulator_ISimulatorClient__typeof()),
        ::uNewFunction("MoveNext", ArrayEnumerator__Outracks_Simulator_Task_Outracks_Simulator_ISimulatorClient___MoveNext, 0, false, ::app::Uno::Bool__typeof()),
        ::uNewFunction(".ctor", ArrayEnumerator__Outracks_Simulator_Task_Outracks_Simulator_ISimulatorClient___New_1, 0, true, ArrayEnumerator__Outracks_Simulator_Task_Outracks_Simulator_ISimulatorClient___typeof(), ::uGetArrayType(::app::Outracks::Simulator::Task__Outracks_Simulator_ISimulatorClient__typeof())),
        ::uNewFunctionVoid("Reset", ArrayEnumerator__Outracks_Simulator_Task_Outracks_Simulator_ISimulatorClient___Reset, 0, false));

    ::uRegisterType(type);
    return type;
}

void ArrayEnumerator__Outracks_Simulator_Task_Outracks_Simulator_ISimulatorClient____ObjInit(ArrayEnumerator__Outracks_Simulator_Task_Outracks_Simulator_ISimulatorClient_* __this, ::uArray* source)
{
    __this->_source = source;
    __this->_iterator = -1;
}

void ArrayEnumerator__Outracks_Simulator_Task_Outracks_Simulator_ISimulatorClient___Dispose(ArrayEnumerator__Outracks_Simulator_Task_Outracks_Simulator_ISimulatorClient_* __this)
{
}

::app::Outracks::Simulator::Task__Outracks_Simulator_ISimulatorClient* ArrayEnumerator__Outracks_Simulator_Task_Outracks_Simulator_ISimulatorClient___get_Current(ArrayEnumerator__Outracks_Simulator_Task_Outracks_Simulator_ISimulatorClient_* __this)
{
    return __this->_current;
}

bool ArrayEnumerator__Outracks_Simulator_Task_Outracks_Simulator_ISimulatorClient___MoveNext(ArrayEnumerator__Outracks_Simulator_Task_Outracks_Simulator_ISimulatorClient_* __this)
{
    __this->_iterator++;

    if (__this->_iterator < ::uPtr< ::uArray*>(__this->_source)->Length())
    {
        __this->_current = ::uPtr< ::uArray*>(__this->_source)->Item< ::app::Outracks::Simulator::Task__Outracks_Simulator_ISimulatorClient*>(__this->_iterator);
        return true;
    }

    return false;
}

ArrayEnumerator__Outracks_Simulator_Task_Outracks_Simulator_ISimulatorClient_* ArrayEnumerator__Outracks_Simulator_Task_Outracks_Simulator_ISimulatorClient___New_1(::uStatic* __this, ::uArray* source)
{
    ArrayEnumerator__Outracks_Simulator_Task_Outracks_Simulator_ISimulatorClient_* inst = (ArrayEnumerator__Outracks_Simulator_Task_Outracks_Simulator_ISimulatorClient_*)::uAllocObject(sizeof(ArrayEnumerator__Outracks_Simulator_Task_Outracks_Simulator_ISimulatorClient_), ArrayEnumerator__Outracks_Simulator_Task_Outracks_Simulator_ISimulatorClient___typeof());
    inst->_ObjInit(source);
    return inst;
}

void ArrayEnumerator__Outracks_Simulator_Task_Outracks_Simulator_ISimulatorClient___Reset(ArrayEnumerator__Outracks_Simulator_Task_Outracks_Simulator_ISimulatorClient_* __this)
{
    __this->_iterator = -1;
    __this->_current = NULL;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Runtime\Implementation\Internal\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

ArrayEnumerator__Outracks_Simulator_Task_Uno_Net_IPEndPoint_____uType* ArrayEnumerator__Outracks_Simulator_Task_Uno_Net_IPEndPoint_____typeof()
{
    static ::uStaticStrong<ArrayEnumerator__Outracks_Simulator_Task_Uno_Net_IPEndPoint_____uType*> type;
    if (type != NULL) return type;

    type = (ArrayEnumerator__Outracks_Simulator_Task_Uno_Net_IPEndPoint_____uType*)::uAllocClassType(sizeof(ArrayEnumerator__Outracks_Simulator_Task_Uno_Net_IPEndPoint_____uType), "Uno.Runtime.Implementation.Internal.ArrayEnumerator<Outracks.Simulator.Task<Uno.Net.IPEndPoint[]>>", false, 3, 2, 0);

    type->__interface_0.__fp_get_Current = (::app::Outracks::Simulator::Task__Uno_Net_IPEndPoint__*(*)(void*))ArrayEnumerator__Outracks_Simulator_Task_Uno_Net_IPEndPoint_____get_Current;
    type->__interface_1.__fp_Dispose = (void(*)(void*))ArrayEnumerator__Outracks_Simulator_Task_Uno_Net_IPEndPoint_____Dispose;
    type->__interface_2.__fp_Reset = (void(*)(void*))ArrayEnumerator__Outracks_Simulator_Task_Uno_Net_IPEndPoint_____Reset;
    type->__interface_2.__fp_MoveNext = (bool(*)(void*))ArrayEnumerator__Outracks_Simulator_Task_Uno_Net_IPEndPoint_____MoveNext;

    type->SetInterfaces(
        ::app::Uno::Collections::IEnumerator__Outracks_Simulator_Task_Uno_Net_IPEndPoint_____typeof(), offsetof(ArrayEnumerator__Outracks_Simulator_Task_Uno_Net_IPEndPoint_____uType, __interface_0),
        ::app::Uno::IDisposable__typeof(), offsetof(ArrayEnumerator__Outracks_Simulator_Task_Uno_Net_IPEndPoint_____uType, __interface_1),
        ::app::Uno::Collections::IEnumerator__typeof(), offsetof(ArrayEnumerator__Outracks_Simulator_Task_Uno_Net_IPEndPoint_____uType, __interface_2));

    type->SetStrongRefs(
        "_current", offsetof(ArrayEnumerator__Outracks_Simulator_Task_Uno_Net_IPEndPoint___, _current),
        "_source", offsetof(ArrayEnumerator__Outracks_Simulator_Task_Uno_Net_IPEndPoint___, _source));

    type->SetFields(3,
        ::uNewField("_current", NULL, offsetof(ArrayEnumerator__Outracks_Simulator_Task_Uno_Net_IPEndPoint___, _current), ::app::Outracks::Simulator::Task__Uno_Net_IPEndPoint____typeof()),
        ::uNewField("_iterator", NULL, offsetof(ArrayEnumerator__Outracks_Simulator_Task_Uno_Net_IPEndPoint___, _iterator), ::app::Uno::Int__typeof()),
        ::uNewField("_source", NULL, offsetof(ArrayEnumerator__Outracks_Simulator_Task_Uno_Net_IPEndPoint___, _source), ::uGetArrayType(::app::Outracks::Simulator::Task__Uno_Net_IPEndPoint____typeof())));

    type->SetFunctions(5,
        ::uNewFunctionVoid("Dispose", ArrayEnumerator__Outracks_Simulator_Task_Uno_Net_IPEndPoint_____Dispose, 0, false),
        ::uNewFunction("get_Current", ArrayEnumerator__Outracks_Simulator_Task_Uno_Net_IPEndPoint_____get_Current, 0, false, ::app::Outracks::Simulator::Task__Uno_Net_IPEndPoint____typeof()),
        ::uNewFunction("MoveNext", ArrayEnumerator__Outracks_Simulator_Task_Uno_Net_IPEndPoint_____MoveNext, 0, false, ::app::Uno::Bool__typeof()),
        ::uNewFunction(".ctor", ArrayEnumerator__Outracks_Simulator_Task_Uno_Net_IPEndPoint_____New_1, 0, true, ArrayEnumerator__Outracks_Simulator_Task_Uno_Net_IPEndPoint_____typeof(), ::uGetArrayType(::app::Outracks::Simulator::Task__Uno_Net_IPEndPoint____typeof())),
        ::uNewFunctionVoid("Reset", ArrayEnumerator__Outracks_Simulator_Task_Uno_Net_IPEndPoint_____Reset, 0, false));

    ::uRegisterType(type);
    return type;
}

void ArrayEnumerator__Outracks_Simulator_Task_Uno_Net_IPEndPoint______ObjInit(ArrayEnumerator__Outracks_Simulator_Task_Uno_Net_IPEndPoint___* __this, ::uArray* source)
{
    __this->_source = source;
    __this->_iterator = -1;
}

void ArrayEnumerator__Outracks_Simulator_Task_Uno_Net_IPEndPoint_____Dispose(ArrayEnumerator__Outracks_Simulator_Task_Uno_Net_IPEndPoint___* __this)
{
}

::app::Outracks::Simulator::Task__Uno_Net_IPEndPoint__* ArrayEnumerator__Outracks_Simulator_Task_Uno_Net_IPEndPoint_____get_Current(ArrayEnumerator__Outracks_Simulator_Task_Uno_Net_IPEndPoint___* __this)
{
    return __this->_current;
}

bool ArrayEnumerator__Outracks_Simulator_Task_Uno_Net_IPEndPoint_____MoveNext(ArrayEnumerator__Outracks_Simulator_Task_Uno_Net_IPEndPoint___* __this)
{
    __this->_iterator++;

    if (__this->_iterator < ::uPtr< ::uArray*>(__this->_source)->Length())
    {
        __this->_current = ::uPtr< ::uArray*>(__this->_source)->Item< ::app::Outracks::Simulator::Task__Uno_Net_IPEndPoint__*>(__this->_iterator);
        return true;
    }

    return false;
}

ArrayEnumerator__Outracks_Simulator_Task_Uno_Net_IPEndPoint___* ArrayEnumerator__Outracks_Simulator_Task_Uno_Net_IPEndPoint_____New_1(::uStatic* __this, ::uArray* source)
{
    ArrayEnumerator__Outracks_Simulator_Task_Uno_Net_IPEndPoint___* inst = (ArrayEnumerator__Outracks_Simulator_Task_Uno_Net_IPEndPoint___*)::uAllocObject(sizeof(ArrayEnumerator__Outracks_Simulator_Task_Uno_Net_IPEndPoint___), ArrayEnumerator__Outracks_Simulator_Task_Uno_Net_IPEndPoint_____typeof());
    inst->_ObjInit(source);
    return inst;
}

void ArrayEnumerator__Outracks_Simulator_Task_Uno_Net_IPEndPoint_____Reset(ArrayEnumerator__Outracks_Simulator_Task_Uno_Net_IPEndPoint___* __this)
{
    __this->_iterator = -1;
    __this->_current = NULL;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Runtime\Implementation\Internal\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

ArrayEnumerator__string__uType* ArrayEnumerator__string__typeof()
{
    static ::uStaticStrong<ArrayEnumerator__string__uType*> type;
    if (type != NULL) return type;

    type = (ArrayEnumerator__string__uType*)::uAllocClassType(sizeof(ArrayEnumerator__string__uType), "Uno.Runtime.Implementation.Internal.ArrayEnumerator<string>", false, 3, 2, 0);

    type->__interface_0.__fp_get_Current = (::uString*(*)(void*))ArrayEnumerator__string__get_Current;
    type->__interface_1.__fp_Dispose = (void(*)(void*))ArrayEnumerator__string__Dispose;
    type->__interface_2.__fp_Reset = (void(*)(void*))ArrayEnumerator__string__Reset;
    type->__interface_2.__fp_MoveNext = (bool(*)(void*))ArrayEnumerator__string__MoveNext;

    type->SetInterfaces(
        ::app::Uno::Collections::IEnumerator__string__typeof(), offsetof(ArrayEnumerator__string__uType, __interface_0),
        ::app::Uno::IDisposable__typeof(), offsetof(ArrayEnumerator__string__uType, __interface_1),
        ::app::Uno::Collections::IEnumerator__typeof(), offsetof(ArrayEnumerator__string__uType, __interface_2));

    type->SetStrongRefs(
        "_current", offsetof(ArrayEnumerator__string, _current),
        "_source", offsetof(ArrayEnumerator__string, _source));

    type->SetFields(3,
        ::uNewField("_current", NULL, offsetof(ArrayEnumerator__string, _current), ::app::Uno::String__typeof()),
        ::uNewField("_iterator", NULL, offsetof(ArrayEnumerator__string, _iterator), ::app::Uno::Int__typeof()),
        ::uNewField("_source", NULL, offsetof(ArrayEnumerator__string, _source), ::uGetArrayType(::app::Uno::String__typeof())));

    type->SetFunctions(5,
        ::uNewFunctionVoid("Dispose", ArrayEnumerator__string__Dispose, 0, false),
        ::uNewFunction("get_Current", ArrayEnumerator__string__get_Current, 0, false, ::app::Uno::String__typeof()),
        ::uNewFunction("MoveNext", ArrayEnumerator__string__MoveNext, 0, false, ::app::Uno::Bool__typeof()),
        ::uNewFunction(".ctor", ArrayEnumerator__string__New_1, 0, true, ArrayEnumerator__string__typeof(), ::uGetArrayType(::app::Uno::String__typeof())),
        ::uNewFunctionVoid("Reset", ArrayEnumerator__string__Reset, 0, false));

    ::uRegisterType(type);
    return type;
}

void ArrayEnumerator__string___ObjInit(ArrayEnumerator__string* __this, ::uArray* source)
{
    __this->_source = source;
    __this->_iterator = -1;
}

void ArrayEnumerator__string__Dispose(ArrayEnumerator__string* __this)
{
}

::uString* ArrayEnumerator__string__get_Current(ArrayEnumerator__string* __this)
{
    return __this->_current;
}

bool ArrayEnumerator__string__MoveNext(ArrayEnumerator__string* __this)
{
    __this->_iterator++;

    if (__this->_iterator < ::uPtr< ::uArray*>(__this->_source)->Length())
    {
        __this->_current = ::uPtr< ::uArray*>(__this->_source)->Item< ::uString*>(__this->_iterator);
        return true;
    }

    return false;
}

ArrayEnumerator__string* ArrayEnumerator__string__New_1(::uStatic* __this, ::uArray* source)
{
    ArrayEnumerator__string* inst = (ArrayEnumerator__string*)::uAllocObject(sizeof(ArrayEnumerator__string), ArrayEnumerator__string__typeof());
    inst->_ObjInit(source);
    return inst;
}

void ArrayEnumerator__string__Reset(ArrayEnumerator__string* __this)
{
    __this->_iterator = -1;
    __this->_current = NULL;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Runtime\Implementation\Internal\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

ArrayEnumerator__Uno_Exception__uType* ArrayEnumerator__Uno_Exception__typeof()
{
    static ::uStaticStrong<ArrayEnumerator__Uno_Exception__uType*> type;
    if (type != NULL) return type;

    type = (ArrayEnumerator__Uno_Exception__uType*)::uAllocClassType(sizeof(ArrayEnumerator__Uno_Exception__uType), "Uno.Runtime.Implementation.Internal.ArrayEnumerator<Uno.Exception>", false, 3, 2, 0);

    type->__interface_0.__fp_get_Current = (::app::Uno::Exception*(*)(void*))ArrayEnumerator__Uno_Exception__get_Current;
    type->__interface_1.__fp_Dispose = (void(*)(void*))ArrayEnumerator__Uno_Exception__Dispose;
    type->__interface_2.__fp_Reset = (void(*)(void*))ArrayEnumerator__Uno_Exception__Reset;
    type->__interface_2.__fp_MoveNext = (bool(*)(void*))ArrayEnumerator__Uno_Exception__MoveNext;

    type->SetInterfaces(
        ::app::Uno::Collections::IEnumerator__Uno_Exception__typeof(), offsetof(ArrayEnumerator__Uno_Exception__uType, __interface_0),
        ::app::Uno::IDisposable__typeof(), offsetof(ArrayEnumerator__Uno_Exception__uType, __interface_1),
        ::app::Uno::Collections::IEnumerator__typeof(), offsetof(ArrayEnumerator__Uno_Exception__uType, __interface_2));

    type->SetStrongRefs(
        "_current", offsetof(ArrayEnumerator__Uno_Exception, _current),
        "_source", offsetof(ArrayEnumerator__Uno_Exception, _source));

    type->SetFields(3,
        ::uNewField("_current", NULL, offsetof(ArrayEnumerator__Uno_Exception, _current), ::app::Uno::Exception__typeof()),
        ::uNewField("_iterator", NULL, offsetof(ArrayEnumerator__Uno_Exception, _iterator), ::app::Uno::Int__typeof()),
        ::uNewField("_source", NULL, offsetof(ArrayEnumerator__Uno_Exception, _source), ::uGetArrayType(::app::Uno::Exception__typeof())));

    type->SetFunctions(5,
        ::uNewFunctionVoid("Dispose", ArrayEnumerator__Uno_Exception__Dispose, 0, false),
        ::uNewFunction("get_Current", ArrayEnumerator__Uno_Exception__get_Current, 0, false, ::app::Uno::Exception__typeof()),
        ::uNewFunction("MoveNext", ArrayEnumerator__Uno_Exception__MoveNext, 0, false, ::app::Uno::Bool__typeof()),
        ::uNewFunction(".ctor", ArrayEnumerator__Uno_Exception__New_1, 0, true, ArrayEnumerator__Uno_Exception__typeof(), ::uGetArrayType(::app::Uno::Exception__typeof())),
        ::uNewFunctionVoid("Reset", ArrayEnumerator__Uno_Exception__Reset, 0, false));

    ::uRegisterType(type);
    return type;
}

void ArrayEnumerator__Uno_Exception___ObjInit(ArrayEnumerator__Uno_Exception* __this, ::uArray* source)
{
    __this->_source = source;
    __this->_iterator = -1;
}

void ArrayEnumerator__Uno_Exception__Dispose(ArrayEnumerator__Uno_Exception* __this)
{
}

::app::Uno::Exception* ArrayEnumerator__Uno_Exception__get_Current(ArrayEnumerator__Uno_Exception* __this)
{
    return __this->_current;
}

bool ArrayEnumerator__Uno_Exception__MoveNext(ArrayEnumerator__Uno_Exception* __this)
{
    __this->_iterator++;

    if (__this->_iterator < ::uPtr< ::uArray*>(__this->_source)->Length())
    {
        __this->_current = ::uPtr< ::uArray*>(__this->_source)->Item< ::app::Uno::Exception*>(__this->_iterator);
        return true;
    }

    return false;
}

ArrayEnumerator__Uno_Exception* ArrayEnumerator__Uno_Exception__New_1(::uStatic* __this, ::uArray* source)
{
    ArrayEnumerator__Uno_Exception* inst = (ArrayEnumerator__Uno_Exception*)::uAllocObject(sizeof(ArrayEnumerator__Uno_Exception), ArrayEnumerator__Uno_Exception__typeof());
    inst->_ObjInit(source);
    return inst;
}

void ArrayEnumerator__Uno_Exception__Reset(ArrayEnumerator__Uno_Exception* __this)
{
    __this->_iterator = -1;
    __this->_current = NULL;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Runtime\Implementation\Internal\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

ArrayEnumerator__Uno_Net_IPEndPoint__uType* ArrayEnumerator__Uno_Net_IPEndPoint__typeof()
{
    static ::uStaticStrong<ArrayEnumerator__Uno_Net_IPEndPoint__uType*> type;
    if (type != NULL) return type;

    type = (ArrayEnumerator__Uno_Net_IPEndPoint__uType*)::uAllocClassType(sizeof(ArrayEnumerator__Uno_Net_IPEndPoint__uType), "Uno.Runtime.Implementation.Internal.ArrayEnumerator<Uno.Net.IPEndPoint>", false, 3, 2, 0);

    type->__interface_0.__fp_get_Current = (::app::Uno::Net::IPEndPoint*(*)(void*))ArrayEnumerator__Uno_Net_IPEndPoint__get_Current;
    type->__interface_1.__fp_Dispose = (void(*)(void*))ArrayEnumerator__Uno_Net_IPEndPoint__Dispose;
    type->__interface_2.__fp_Reset = (void(*)(void*))ArrayEnumerator__Uno_Net_IPEndPoint__Reset;
    type->__interface_2.__fp_MoveNext = (bool(*)(void*))ArrayEnumerator__Uno_Net_IPEndPoint__MoveNext;

    type->SetInterfaces(
        ::app::Uno::Collections::IEnumerator__Uno_Net_IPEndPoint__typeof(), offsetof(ArrayEnumerator__Uno_Net_IPEndPoint__uType, __interface_0),
        ::app::Uno::IDisposable__typeof(), offsetof(ArrayEnumerator__Uno_Net_IPEndPoint__uType, __interface_1),
        ::app::Uno::Collections::IEnumerator__typeof(), offsetof(ArrayEnumerator__Uno_Net_IPEndPoint__uType, __interface_2));

    type->SetStrongRefs(
        "_current", offsetof(ArrayEnumerator__Uno_Net_IPEndPoint, _current),
        "_source", offsetof(ArrayEnumerator__Uno_Net_IPEndPoint, _source));

    type->SetFields(3,
        ::uNewField("_current", NULL, offsetof(ArrayEnumerator__Uno_Net_IPEndPoint, _current), ::app::Uno::Net::IPEndPoint__typeof()),
        ::uNewField("_iterator", NULL, offsetof(ArrayEnumerator__Uno_Net_IPEndPoint, _iterator), ::app::Uno::Int__typeof()),
        ::uNewField("_source", NULL, offsetof(ArrayEnumerator__Uno_Net_IPEndPoint, _source), ::uGetArrayType(::app::Uno::Net::IPEndPoint__typeof())));

    type->SetFunctions(5,
        ::uNewFunctionVoid("Dispose", ArrayEnumerator__Uno_Net_IPEndPoint__Dispose, 0, false),
        ::uNewFunction("get_Current", ArrayEnumerator__Uno_Net_IPEndPoint__get_Current, 0, false, ::app::Uno::Net::IPEndPoint__typeof()),
        ::uNewFunction("MoveNext", ArrayEnumerator__Uno_Net_IPEndPoint__MoveNext, 0, false, ::app::Uno::Bool__typeof()),
        ::uNewFunction(".ctor", ArrayEnumerator__Uno_Net_IPEndPoint__New_1, 0, true, ArrayEnumerator__Uno_Net_IPEndPoint__typeof(), ::uGetArrayType(::app::Uno::Net::IPEndPoint__typeof())),
        ::uNewFunctionVoid("Reset", ArrayEnumerator__Uno_Net_IPEndPoint__Reset, 0, false));

    ::uRegisterType(type);
    return type;
}

void ArrayEnumerator__Uno_Net_IPEndPoint___ObjInit(ArrayEnumerator__Uno_Net_IPEndPoint* __this, ::uArray* source)
{
    __this->_source = source;
    __this->_iterator = -1;
}

void ArrayEnumerator__Uno_Net_IPEndPoint__Dispose(ArrayEnumerator__Uno_Net_IPEndPoint* __this)
{
}

::app::Uno::Net::IPEndPoint* ArrayEnumerator__Uno_Net_IPEndPoint__get_Current(ArrayEnumerator__Uno_Net_IPEndPoint* __this)
{
    return __this->_current;
}

bool ArrayEnumerator__Uno_Net_IPEndPoint__MoveNext(ArrayEnumerator__Uno_Net_IPEndPoint* __this)
{
    __this->_iterator++;

    if (__this->_iterator < ::uPtr< ::uArray*>(__this->_source)->Length())
    {
        __this->_current = ::uPtr< ::uArray*>(__this->_source)->Item< ::app::Uno::Net::IPEndPoint*>(__this->_iterator);
        return true;
    }

    return false;
}

ArrayEnumerator__Uno_Net_IPEndPoint* ArrayEnumerator__Uno_Net_IPEndPoint__New_1(::uStatic* __this, ::uArray* source)
{
    ArrayEnumerator__Uno_Net_IPEndPoint* inst = (ArrayEnumerator__Uno_Net_IPEndPoint*)::uAllocObject(sizeof(ArrayEnumerator__Uno_Net_IPEndPoint), ArrayEnumerator__Uno_Net_IPEndPoint__typeof());
    inst->_ObjInit(source);
    return inst;
}

void ArrayEnumerator__Uno_Net_IPEndPoint__Reset(ArrayEnumerator__Uno_Net_IPEndPoint* __this)
{
    __this->_iterator = -1;
    __this->_current = NULL;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Runtime\Implementation\Internal\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

ArrayEnumerator__Uno_Reflection_CppField__uType* ArrayEnumerator__Uno_Reflection_CppField__typeof()
{
    static ::uStaticStrong<ArrayEnumerator__Uno_Reflection_CppField__uType*> type;
    if (type != NULL) return type;

    type = (ArrayEnumerator__Uno_Reflection_CppField__uType*)::uAllocClassType(sizeof(ArrayEnumerator__Uno_Reflection_CppField__uType), "Uno.Runtime.Implementation.Internal.ArrayEnumerator<Uno.Reflection.CppField>", false, 3, 1, 0);

    type->__interface_0.__fp_get_Current = (::uField*(*)(void*))ArrayEnumerator__Uno_Reflection_CppField__get_Current;
    type->__interface_1.__fp_Dispose = (void(*)(void*))ArrayEnumerator__Uno_Reflection_CppField__Dispose;
    type->__interface_2.__fp_Reset = (void(*)(void*))ArrayEnumerator__Uno_Reflection_CppField__Reset;
    type->__interface_2.__fp_MoveNext = (bool(*)(void*))ArrayEnumerator__Uno_Reflection_CppField__MoveNext;

    type->SetInterfaces(
        ::app::Uno::Collections::IEnumerator__Uno_Reflection_CppField__typeof(), offsetof(ArrayEnumerator__Uno_Reflection_CppField__uType, __interface_0),
        ::app::Uno::IDisposable__typeof(), offsetof(ArrayEnumerator__Uno_Reflection_CppField__uType, __interface_1),
        ::app::Uno::Collections::IEnumerator__typeof(), offsetof(ArrayEnumerator__Uno_Reflection_CppField__uType, __interface_2));

    type->SetStrongRefs(
        "_source", offsetof(ArrayEnumerator__Uno_Reflection_CppField, _source));

    type->SetFields(3,
        ::uNewField("_current", NULL, offsetof(ArrayEnumerator__Uno_Reflection_CppField, _current), ::app::Uno::Reflection::CppField__typeof()),
        ::uNewField("_iterator", NULL, offsetof(ArrayEnumerator__Uno_Reflection_CppField, _iterator), ::app::Uno::Int__typeof()),
        ::uNewField("_source", NULL, offsetof(ArrayEnumerator__Uno_Reflection_CppField, _source), ::uGetArrayType(::app::Uno::Reflection::CppField__typeof())));

    type->SetFunctions(5,
        ::uNewFunctionVoid("Dispose", ArrayEnumerator__Uno_Reflection_CppField__Dispose, 0, false),
        ::uNewFunction("get_Current", ArrayEnumerator__Uno_Reflection_CppField__get_Current, 0, false, ::app::Uno::Reflection::CppField__typeof()),
        ::uNewFunction("MoveNext", ArrayEnumerator__Uno_Reflection_CppField__MoveNext, 0, false, ::app::Uno::Bool__typeof()),
        ::uNewFunction(".ctor", ArrayEnumerator__Uno_Reflection_CppField__New_1, 0, true, ArrayEnumerator__Uno_Reflection_CppField__typeof(), ::uGetArrayType(::app::Uno::Reflection::CppField__typeof())),
        ::uNewFunctionVoid("Reset", ArrayEnumerator__Uno_Reflection_CppField__Reset, 0, false));

    ::uRegisterType(type);
    return type;
}

void ArrayEnumerator__Uno_Reflection_CppField___ObjInit(ArrayEnumerator__Uno_Reflection_CppField* __this, ::uArray* source)
{
    __this->_source = source;
    __this->_iterator = -1;
}

void ArrayEnumerator__Uno_Reflection_CppField__Dispose(ArrayEnumerator__Uno_Reflection_CppField* __this)
{
}

::uField* ArrayEnumerator__Uno_Reflection_CppField__get_Current(ArrayEnumerator__Uno_Reflection_CppField* __this)
{
    return __this->_current;
}

bool ArrayEnumerator__Uno_Reflection_CppField__MoveNext(ArrayEnumerator__Uno_Reflection_CppField* __this)
{
    __this->_iterator++;

    if (__this->_iterator < ::uPtr< ::uArray*>(__this->_source)->Length())
    {
        __this->_current = ::uPtr< ::uArray*>(__this->_source)->Item< ::uField*>(__this->_iterator);
        return true;
    }

    return false;
}

ArrayEnumerator__Uno_Reflection_CppField* ArrayEnumerator__Uno_Reflection_CppField__New_1(::uStatic* __this, ::uArray* source)
{
    ArrayEnumerator__Uno_Reflection_CppField* inst = (ArrayEnumerator__Uno_Reflection_CppField*)::uAllocObject(sizeof(ArrayEnumerator__Uno_Reflection_CppField), ArrayEnumerator__Uno_Reflection_CppField__typeof());
    inst->_ObjInit(source);
    return inst;
}

void ArrayEnumerator__Uno_Reflection_CppField__Reset(ArrayEnumerator__Uno_Reflection_CppField* __this)
{
    __this->_iterator = -1;
    __this->_current = ::uDefault< ::uField*>();
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Runtime\Implementation\Internal\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

ArrayEnumerator__Uno_Reflection_CppFunction__uType* ArrayEnumerator__Uno_Reflection_CppFunction__typeof()
{
    static ::uStaticStrong<ArrayEnumerator__Uno_Reflection_CppFunction__uType*> type;
    if (type != NULL) return type;

    type = (ArrayEnumerator__Uno_Reflection_CppFunction__uType*)::uAllocClassType(sizeof(ArrayEnumerator__Uno_Reflection_CppFunction__uType), "Uno.Runtime.Implementation.Internal.ArrayEnumerator<Uno.Reflection.CppFunction>", false, 3, 1, 0);

    type->__interface_0.__fp_get_Current = (::uFunction*(*)(void*))ArrayEnumerator__Uno_Reflection_CppFunction__get_Current;
    type->__interface_1.__fp_Dispose = (void(*)(void*))ArrayEnumerator__Uno_Reflection_CppFunction__Dispose;
    type->__interface_2.__fp_Reset = (void(*)(void*))ArrayEnumerator__Uno_Reflection_CppFunction__Reset;
    type->__interface_2.__fp_MoveNext = (bool(*)(void*))ArrayEnumerator__Uno_Reflection_CppFunction__MoveNext;

    type->SetInterfaces(
        ::app::Uno::Collections::IEnumerator__Uno_Reflection_CppFunction__typeof(), offsetof(ArrayEnumerator__Uno_Reflection_CppFunction__uType, __interface_0),
        ::app::Uno::IDisposable__typeof(), offsetof(ArrayEnumerator__Uno_Reflection_CppFunction__uType, __interface_1),
        ::app::Uno::Collections::IEnumerator__typeof(), offsetof(ArrayEnumerator__Uno_Reflection_CppFunction__uType, __interface_2));

    type->SetStrongRefs(
        "_source", offsetof(ArrayEnumerator__Uno_Reflection_CppFunction, _source));

    type->SetFields(3,
        ::uNewField("_current", NULL, offsetof(ArrayEnumerator__Uno_Reflection_CppFunction, _current), ::app::Uno::Reflection::CppFunction__typeof()),
        ::uNewField("_iterator", NULL, offsetof(ArrayEnumerator__Uno_Reflection_CppFunction, _iterator), ::app::Uno::Int__typeof()),
        ::uNewField("_source", NULL, offsetof(ArrayEnumerator__Uno_Reflection_CppFunction, _source), ::uGetArrayType(::app::Uno::Reflection::CppFunction__typeof())));

    type->SetFunctions(5,
        ::uNewFunctionVoid("Dispose", ArrayEnumerator__Uno_Reflection_CppFunction__Dispose, 0, false),
        ::uNewFunction("get_Current", ArrayEnumerator__Uno_Reflection_CppFunction__get_Current, 0, false, ::app::Uno::Reflection::CppFunction__typeof()),
        ::uNewFunction("MoveNext", ArrayEnumerator__Uno_Reflection_CppFunction__MoveNext, 0, false, ::app::Uno::Bool__typeof()),
        ::uNewFunction(".ctor", ArrayEnumerator__Uno_Reflection_CppFunction__New_1, 0, true, ArrayEnumerator__Uno_Reflection_CppFunction__typeof(), ::uGetArrayType(::app::Uno::Reflection::CppFunction__typeof())),
        ::uNewFunctionVoid("Reset", ArrayEnumerator__Uno_Reflection_CppFunction__Reset, 0, false));

    ::uRegisterType(type);
    return type;
}

void ArrayEnumerator__Uno_Reflection_CppFunction___ObjInit(ArrayEnumerator__Uno_Reflection_CppFunction* __this, ::uArray* source)
{
    __this->_source = source;
    __this->_iterator = -1;
}

void ArrayEnumerator__Uno_Reflection_CppFunction__Dispose(ArrayEnumerator__Uno_Reflection_CppFunction* __this)
{
}

::uFunction* ArrayEnumerator__Uno_Reflection_CppFunction__get_Current(ArrayEnumerator__Uno_Reflection_CppFunction* __this)
{
    return __this->_current;
}

bool ArrayEnumerator__Uno_Reflection_CppFunction__MoveNext(ArrayEnumerator__Uno_Reflection_CppFunction* __this)
{
    __this->_iterator++;

    if (__this->_iterator < ::uPtr< ::uArray*>(__this->_source)->Length())
    {
        __this->_current = ::uPtr< ::uArray*>(__this->_source)->Item< ::uFunction*>(__this->_iterator);
        return true;
    }

    return false;
}

ArrayEnumerator__Uno_Reflection_CppFunction* ArrayEnumerator__Uno_Reflection_CppFunction__New_1(::uStatic* __this, ::uArray* source)
{
    ArrayEnumerator__Uno_Reflection_CppFunction* inst = (ArrayEnumerator__Uno_Reflection_CppFunction*)::uAllocObject(sizeof(ArrayEnumerator__Uno_Reflection_CppFunction), ArrayEnumerator__Uno_Reflection_CppFunction__typeof());
    inst->_ObjInit(source);
    return inst;
}

void ArrayEnumerator__Uno_Reflection_CppFunction__Reset(ArrayEnumerator__Uno_Reflection_CppFunction* __this)
{
    __this->_iterator = -1;
    __this->_current = ::uDefault< ::uFunction*>();
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Runtime\Implementation\Internal\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

ArrayEnumerator__Uno_UX_Resource__uType* ArrayEnumerator__Uno_UX_Resource__typeof()
{
    static ::uStaticStrong<ArrayEnumerator__Uno_UX_Resource__uType*> type;
    if (type != NULL) return type;

    type = (ArrayEnumerator__Uno_UX_Resource__uType*)::uAllocClassType(sizeof(ArrayEnumerator__Uno_UX_Resource__uType), "Uno.Runtime.Implementation.Internal.ArrayEnumerator<Uno.UX.Resource>", false, 3, 2, 0);

    type->__interface_0.__fp_get_Current = (::app::Uno::UX::Resource*(*)(void*))ArrayEnumerator__Uno_UX_Resource__get_Current;
    type->__interface_1.__fp_Dispose = (void(*)(void*))ArrayEnumerator__Uno_UX_Resource__Dispose;
    type->__interface_2.__fp_Reset = (void(*)(void*))ArrayEnumerator__Uno_UX_Resource__Reset;
    type->__interface_2.__fp_MoveNext = (bool(*)(void*))ArrayEnumerator__Uno_UX_Resource__MoveNext;

    type->SetInterfaces(
        ::app::Uno::Collections::IEnumerator__Uno_UX_Resource__typeof(), offsetof(ArrayEnumerator__Uno_UX_Resource__uType, __interface_0),
        ::app::Uno::IDisposable__typeof(), offsetof(ArrayEnumerator__Uno_UX_Resource__uType, __interface_1),
        ::app::Uno::Collections::IEnumerator__typeof(), offsetof(ArrayEnumerator__Uno_UX_Resource__uType, __interface_2));

    type->SetStrongRefs(
        "_current", offsetof(ArrayEnumerator__Uno_UX_Resource, _current),
        "_source", offsetof(ArrayEnumerator__Uno_UX_Resource, _source));

    type->SetFields(3,
        ::uNewField("_current", NULL, offsetof(ArrayEnumerator__Uno_UX_Resource, _current), ::app::Uno::UX::Resource__typeof()),
        ::uNewField("_iterator", NULL, offsetof(ArrayEnumerator__Uno_UX_Resource, _iterator), ::app::Uno::Int__typeof()),
        ::uNewField("_source", NULL, offsetof(ArrayEnumerator__Uno_UX_Resource, _source), ::uGetArrayType(::app::Uno::UX::Resource__typeof())));

    type->SetFunctions(5,
        ::uNewFunctionVoid("Dispose", ArrayEnumerator__Uno_UX_Resource__Dispose, 0, false),
        ::uNewFunction("get_Current", ArrayEnumerator__Uno_UX_Resource__get_Current, 0, false, ::app::Uno::UX::Resource__typeof()),
        ::uNewFunction("MoveNext", ArrayEnumerator__Uno_UX_Resource__MoveNext, 0, false, ::app::Uno::Bool__typeof()),
        ::uNewFunction(".ctor", ArrayEnumerator__Uno_UX_Resource__New_1, 0, true, ArrayEnumerator__Uno_UX_Resource__typeof(), ::uGetArrayType(::app::Uno::UX::Resource__typeof())),
        ::uNewFunctionVoid("Reset", ArrayEnumerator__Uno_UX_Resource__Reset, 0, false));

    ::uRegisterType(type);
    return type;
}

void ArrayEnumerator__Uno_UX_Resource___ObjInit(ArrayEnumerator__Uno_UX_Resource* __this, ::uArray* source)
{
    __this->_source = source;
    __this->_iterator = -1;
}

void ArrayEnumerator__Uno_UX_Resource__Dispose(ArrayEnumerator__Uno_UX_Resource* __this)
{
}

::app::Uno::UX::Resource* ArrayEnumerator__Uno_UX_Resource__get_Current(ArrayEnumerator__Uno_UX_Resource* __this)
{
    return __this->_current;
}

bool ArrayEnumerator__Uno_UX_Resource__MoveNext(ArrayEnumerator__Uno_UX_Resource* __this)
{
    __this->_iterator++;

    if (__this->_iterator < ::uPtr< ::uArray*>(__this->_source)->Length())
    {
        __this->_current = ::uPtr< ::uArray*>(__this->_source)->Item< ::app::Uno::UX::Resource*>(__this->_iterator);
        return true;
    }

    return false;
}

ArrayEnumerator__Uno_UX_Resource* ArrayEnumerator__Uno_UX_Resource__New_1(::uStatic* __this, ::uArray* source)
{
    ArrayEnumerator__Uno_UX_Resource* inst = (ArrayEnumerator__Uno_UX_Resource*)::uAllocObject(sizeof(ArrayEnumerator__Uno_UX_Resource), ArrayEnumerator__Uno_UX_Resource__typeof());
    inst->_ObjInit(source);
    return inst;
}

void ArrayEnumerator__Uno_UX_Resource__Reset(ArrayEnumerator__Uno_UX_Resource* __this)
{
    __this->_iterator = -1;
    __this->_current = NULL;
}

}}}}}
