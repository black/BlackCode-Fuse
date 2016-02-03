// This file was generated based on '(multiple files)'.
// WARNING: Changes might be lost if you edit this file directly.

#include <Fuse.Scripting.Callback.h>
#include <Fuse.Scripting.Function.h>
#include <Fuse.Scripting.IDispatcher.h>
#include <Fuse.Scripting.Object.h>
#include <Fuse.Scripting.ScriptException.h>
#include <Fuse.Scripting.V8.Array.h>
#include <Fuse.Scripting.V8.Context.h>
#include <Fuse.Scripting.V8.Debugger.Connected.h>
#include <Fuse.Scripting.V8.Debugger.ConnectedMessageHandler.h>
#include <Fuse.Scripting.V8.Debugger.Disconnected.h>
#include <Fuse.Scripting.V8.Debugger.h>
#include <Fuse.Scripting.V8.Debugger.State.h>
#include <Fuse.Scripting.V8.Function.h>
#include <Fuse.Scripting.V8.Internal.Array.h>
#include <Fuse.Scripting.V8.Internal.Context.h>
#include <Fuse.Scripting.V8.Internal.Debug.h>
#include <Fuse.Scripting.V8.Internal.Debug.Message.h>
#include <Fuse.Scripting.V8.Internal.Function.h>
#include <Fuse.Scripting.V8.Internal.Isolate.h>
#include <Fuse.Scripting.V8.Internal.MaybeArray.h>
#include <Fuse.Scripting.V8.Internal.MaybeBool.h>
#include <Fuse.Scripting.V8.Internal.MaybeDouble.h>
#include <Fuse.Scripting.V8.Internal.MaybeInt.h>
#include <Fuse.Scripting.V8.Internal.MaybeObject.h>
#include <Fuse.Scripting.V8.Internal.MaybeString.h>
#include <Fuse.Scripting.V8.Internal.MaybeValue.h>
#include <Fuse.Scripting.V8.Internal.Message.h>
#include <Fuse.Scripting.V8.Internal.MessageHandler.h>
#include <Fuse.Scripting.V8.Internal.Object.h>
#include <Fuse.Scripting.V8.Internal.PersistentArray.h>
#include <Fuse.Scripting.V8.Internal.PersistentContext.h>
#include <Fuse.Scripting.V8.Internal.PersistentFunction.h>
#include <Fuse.Scripting.V8.Internal.PersistentObject.h>
#include <Fuse.Scripting.V8.Internal.Platform.h>
#include <Fuse.Scripting.V8.Internal.Script.h>
#include <Fuse.Scripting.V8.Internal.String.h>
#include <Fuse.Scripting.V8.Internal.TryCatch.h>
#include <Fuse.Scripting.V8.Internal.V8.h>
#include <Fuse.Scripting.V8.Internal.Value.h>
#include <Fuse.Scripting.V8.Marshaller.h>
#include <Fuse.Scripting.V8.Object.h>
#include <Uno.Action.h>
#include <Uno.Bool.h>
#include <Uno.Byte.h>
#include <Uno.Char.h>
#include <Uno.Collections.List-1.Enumerator.h>
#include <Uno.Collections.List-1.h>
#include <Uno.Delegate.h>
#include <Uno.Diagnostics.Debug.h>
#include <Uno.Diagnostics.DebugMessageType.h>
#include <Uno.Double.h>
#include <Uno.Exception.h>
#include <Uno.Int.h>
#include <Uno.IO.Stream.h>
#include <Uno.IO.StreamReader.h>
#include <Uno.IO.StreamWriter.h>
#include <Uno.IO.TextReader.h>
#include <Uno.IO.TextWriter.h>
#include <Uno.Net.EndPoint.h>
#include <Uno.Net.IPAddress.h>
#include <Uno.Net.IPEndPoint.h>
#include <Uno.Net.Sockets.AddressFamily.h>
#include <Uno.Net.Sockets.NetworkStream.h>
#include <Uno.Net.Sockets.ProtocolType.h>
#include <Uno.Net.Sockets.Socket.h>
#include <Uno.Net.Sockets.SocketType.h>
#include <Uno.Object.h>
#include <Uno.String.h>
#include <Uno.Text.Utf8.h>
#include <Uno.Threading.IDispatcher.h>
#include <Uno.Threading.Thread.h>
#include <Uno.UInt.h>
static uString* STRINGS[14];
static uType* TYPES[34];

namespace g{
namespace Fuse{
namespace Scripting{
namespace V8{

// C:\ProgramData\Uno\Packages\Fuse.Scripting.V8\0.19.3\$.uno(8)
// -------------------------------------------------------------

// internal sealed extern class Array :8
// {
//  ~Array() :26
static void Array__Finalize_fn(Array* __this)
{
    ::g::Fuse::Scripting::V8::Internal::PersistentArray::Delete(__this->_persistentArray);
}

::g::Fuse::Scripting::Array_type* Array_typeof()
{
    static uSStrong< ::g::Fuse::Scripting::Array_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 1;
    options.ObjectSize = sizeof(Array);
    options.TypeSize = sizeof(::g::Fuse::Scripting::Array_type);
    type = (::g::Fuse::Scripting::Array_type*)uClassType::New("Fuse.Scripting.V8.Array", options);
    type->SetBase(::g::Fuse::Scripting::Array_typeof());
    type->fp_Finalize = (void(*)(uObject*))Array__Finalize_fn;
    type->fp_Equals2 = (void(*)(::g::Fuse::Scripting::Array*, ::g::Fuse::Scripting::Array*, bool*))Array__Equals2_fn;
    type->fp_Equals = (void(*)(uObject*, uObject*, bool*))Array__Equals_fn;
    type->fp_get_Item = (void(*)(::g::Fuse::Scripting::Array*, int*, uObject**))Array__get_Item_fn;
    type->fp_set_Item = (void(*)(::g::Fuse::Scripting::Array*, int*, uObject*))Array__set_Item_fn;
    type->fp_get_Length = (void(*)(::g::Fuse::Scripting::Array*, int*))Array__get_Length_fn;
    ::TYPES[0] = ::g::Fuse::Scripting::V8::Context_typeof();
    ::TYPES[1] = ::g::Fuse::Scripting::Array_typeof();
    ::TYPES[2] = ::g::Uno::UInt_typeof();
    ::TYPES[3] = ::g::Uno::Int_typeof();
    type->SetFields(0,
        ::g::Fuse::Scripting::V8::Internal::PersistentArray_typeof(), offsetof(::g::Fuse::Scripting::V8::Array, _persistentArray), 0);
    return type;
}

// public Array(Fuse.Scripting.V8.Internal.Array array) :19
void Array__ctor_1_fn(Array* __this, ::v8::Local< ::v8::Array>* array)
{
    __this->ctor_1(*array);
}

// internal Fuse.Scripting.V8.Internal.Array get__array() :13
void Array__get__array_fn(Array* __this, ::v8::Local< ::v8::Array>* __retval)
{
    *__retval = __this->_array();
}

// public override sealed bool Equals(Fuse.Scripting.Array a) :67
void Array__Equals2_fn(Array* __this, ::g::Fuse::Scripting::Array* a, bool* __retval)
{
    ::v8::Isolate::Scope isolateScope(::g::Fuse::Scripting::V8::Context::_isolate());
    ::v8::HandleScope handleScope(::g::Fuse::Scripting::V8::Context::_isolate());
    ::v8::TryCatch tryCatch(::g::Fuse::Scripting::V8::Context::_isolate());
    ::v8::TryCatch* tc = &tryCatch;
    Array* that = uAs<Array*>(a, Array_typeof());

    if (that == NULL)
        return *__retval = false, void();

    return *__retval = ::g::Fuse::Scripting::V8::Marshaller::AsJust(::g::Fuse::Scripting::V8::Internal::Value::Equals2(::g::Fuse::Scripting::V8::Internal::Array::op_Explicit1(__this->_array()), ::g::Fuse::Scripting::V8::Internal::Isolate::GetCurrentContext(::g::Fuse::Scripting::V8::Context::_isolate()), ::g::Fuse::Scripting::V8::Internal::Array::op_Explicit1(uPtr(that)->_array())), tc), void();
}

// public override sealed bool Equals(object o) :83
void Array__Equals_fn(Array* __this, uObject* o, bool* __retval)
{
    Array* a = uAs<Array*>(o, Array_typeof());

    if (a == NULL)
        return *__retval = false, void();

    return *__retval = __this->Equals2(a), void();
}

// public override sealed object get_Item(int index) :33
void Array__get_Item_fn(Array* __this, int* index, uObject** __retval)
{
    int index_ = *index;
    ::v8::Isolate::Scope isolateScope(::g::Fuse::Scripting::V8::Context::_isolate());
    ::v8::HandleScope handleScope(::g::Fuse::Scripting::V8::Context::_isolate());
    ::v8::TryCatch tryCatch(::g::Fuse::Scripting::V8::Context::_isolate());
    ::v8::TryCatch* tc = &tryCatch;
    return *__retval = ::g::Fuse::Scripting::V8::Marshaller::Wrap(::g::Fuse::Scripting::V8::Internal::Object::Get1(::g::Fuse::Scripting::V8::Internal::Array::op_Explicit(__this->_array()), ::g::Fuse::Scripting::V8::Internal::Isolate::GetCurrentContext(::g::Fuse::Scripting::V8::Context::_isolate()), (uint32_t)index_), tc), void();
}

// public override sealed void set_Item(int index, object value) :45
void Array__set_Item_fn(Array* __this, int* index, uObject* value)
{
    int index_ = *index;
    ::v8::Isolate::Scope isolateScope(::g::Fuse::Scripting::V8::Context::_isolate());
    ::v8::TryCatch tryCatch(::g::Fuse::Scripting::V8::Context::_isolate());
    ::v8::TryCatch* tc = &tryCatch;
    uint32_t uindex = (uint32_t)index_;
    ::v8::Local< ::v8::Context> context = ::g::Fuse::Scripting::V8::Internal::Isolate::GetCurrentContext(::g::Fuse::Scripting::V8::Context::_isolate());
    ::v8::Local< ::v8::Object> arr = ::g::Fuse::Scripting::V8::Internal::Array::op_Explicit(__this->_array());
    ::g::Fuse::Scripting::V8::Marshaller::AsJust(::g::Fuse::Scripting::V8::Internal::Object::Set1(arr, context, uindex, ::g::Fuse::Scripting::V8::Marshaller::Unwrap(value)), tc);
}

// public override sealed int get_Length() :59
void Array__get_Length_fn(Array* __this, int* __retval)
{
    ::v8::Isolate::Scope isolateScope(::g::Fuse::Scripting::V8::Context::_isolate());
    ::v8::HandleScope handleScope(::g::Fuse::Scripting::V8::Context::_isolate());
    return *__retval = (int)::g::Fuse::Scripting::V8::Internal::Array::Length(__this->_array()), void();
}

// public Array New(Fuse.Scripting.V8.Internal.Array array) :19
void Array__New1_fn(::v8::Local< ::v8::Array>* array, Array** __retval)
{
    *__retval = Array::New1(*array);
}

// public Array(Fuse.Scripting.V8.Internal.Array array) [instance] :19
void Array::ctor_1(::v8::Local< ::v8::Array> array)
{
    ctor_();
    _persistentArray = ::g::Fuse::Scripting::V8::Internal::PersistentArray::New1(::g::Fuse::Scripting::V8::Internal::Isolate::GetCurrent(), array);
}

// internal Fuse.Scripting.V8.Internal.Array get__array() [instance] :13
::v8::Local< ::v8::Array> Array::_array()
{
    return ::g::Fuse::Scripting::V8::Internal::PersistentArray::Get(_persistentArray, ::g::Fuse::Scripting::V8::Internal::Isolate::GetCurrent());
}

// public Array New(Fuse.Scripting.V8.Internal.Array array) [static] :19
Array* Array::New1(::v8::Local< ::v8::Array> array)
{
    Array* obj1 = (Array*)uNew(Array_typeof());
    obj1->ctor_1(array);
    return obj1;
}
// }

// C:\ProgramData\Uno\Packages\Fuse.Scripting.V8\0.19.3\$.uno(524)
// ---------------------------------------------------------------

// private sealed class Debugger.Connected :524
// {
Debugger__Connected_type* Debugger__Connected_typeof()
{
    static uSStrong<Debugger__Connected_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 3;
    options.InterfaceCount = 1;
    options.ObjectSize = sizeof(Debugger__Connected);
    options.TypeSize = sizeof(Debugger__Connected_type);
    type = (Debugger__Connected_type*)uClassType::New("Fuse.Scripting.V8.Debugger.Connected", options);
    type->interface0.fp_Run = (void(*)(uObject*, uObject**))Debugger__Connected__Run_fn;
    ::STRINGS[0] = uString::Const("read == contentLength");
    ::STRINGS[1] = uString::Const("C:\\ProgramData\\Uno\\Packages\\Fuse.Scripting.V8\\0.19.3\\$.uno");
    ::STRINGS[2] = uString::Const("Debugger exception in message receiver: ");
    ::TYPES[4] = ::g::Fuse::Scripting::V8::Debugger__State_typeof();
    ::TYPES[5] = ::g::Fuse::Scripting::V8::Debugger_typeof();
    ::TYPES[6] = ::g::Uno::String_typeof();
    ::TYPES[7] = ::g::Uno::Char_typeof()->Array();
    ::TYPES[8] = uObject_typeof()->Array();
    ::TYPES[9] = uObject_typeof();
    ::TYPES[0] = ::g::Fuse::Scripting::V8::Context_typeof();
    ::TYPES[10] = ::g::Uno::Action_typeof();
    ::TYPES[11] = ::g::Uno::Exception_typeof();
    type->SetInterfaces(
        ::g::Fuse::Scripting::V8::Debugger__State_typeof(), offsetof(Debugger__Connected_type, interface0));
    type->SetFields(0,
        ::g::Fuse::Scripting::V8::Debugger_typeof(), offsetof(::g::Fuse::Scripting::V8::Debugger__Connected, _parent), 0,
        ::g::Uno::IO::TextReader_typeof(), offsetof(::g::Fuse::Scripting::V8::Debugger__Connected, _reader), 0,
        ::g::Uno::Bool_typeof(), offsetof(::g::Fuse::Scripting::V8::Debugger__Connected, _reconnect), 0);
    return type;
}

// public Connected(Fuse.Scripting.V8.Debugger parent, Uno.IO.TextReader reader) :530
void Debugger__Connected__ctor__fn(Debugger__Connected* __this, ::g::Fuse::Scripting::V8::Debugger* parent, ::g::Uno::IO::TextReader* reader)
{
    __this->ctor_(parent, reader);
}

// private void Dispose() :581
void Debugger__Connected__Dispose_fn(Debugger__Connected* __this)
{
    __this->Dispose();
}

// public Connected New(Fuse.Scripting.V8.Debugger parent, Uno.IO.TextReader reader) :530
void Debugger__Connected__New1_fn(::g::Fuse::Scripting::V8::Debugger* parent, ::g::Uno::IO::TextReader* reader, Debugger__Connected** __retval)
{
    *__retval = Debugger__Connected::New1(parent, reader);
}

// public void Reconnect() :576
void Debugger__Connected__Reconnect_fn(Debugger__Connected* __this)
{
    __this->Reconnect();
}

// public Fuse.Scripting.V8.Debugger.State Run() :536
void Debugger__Connected__Run_fn(Debugger__Connected* __this, uObject** __retval)
{
    *__retval = __this->Run();
}

// public Connected(Fuse.Scripting.V8.Debugger parent, Uno.IO.TextReader reader) [instance] :530
void Debugger__Connected::ctor_(::g::Fuse::Scripting::V8::Debugger* parent, ::g::Uno::IO::TextReader* reader)
{
    _parent = parent;
    _reader = reader;
}

// private void Dispose() [instance] :581
void Debugger__Connected::Dispose()
{
    uPtr(_reader)->Dispose();
}

// public void Reconnect() [instance] :576
void Debugger__Connected::Reconnect()
{
    _reconnect = true;
}

// public Fuse.Scripting.V8.Debugger.State Run() [instance] :536
uObject* Debugger__Connected::Run()
{
    if (_reconnect)
    {
        Dispose();
        return (uObject*)::g::Fuse::Scripting::V8::Debugger::Disconnect(_parent);
    }

    try
    {
        uString* line = uPtr(_reader)->ReadLine();
        int i = ::g::Uno::String::IndexOf1(uPtr(line), ::g::Fuse::Scripting::V8::Debugger::_contentLengthString(), 0);

        if (i >= 0)
        {
            int contentLength = ::g::Uno::Int::Parse(::g::Uno::String::Substring(uPtr(line), i + uPtr(::g::Fuse::Scripting::V8::Debugger::_contentLengthString())->Length()));

            if (contentLength > 0)
            {
                uPtr(_reader)->ReadLine();
                uArray* buffer = uArray::New(::TYPES[7/*char[]*/], contentLength);
                int read = uPtr(_reader)->Read1(buffer, 0, contentLength);
                ::g::Uno::Diagnostics::Debug::Assert(read == contentLength, ::STRINGS[0/*"read == con...*/], ::STRINGS[1/*"C:\\Program...*/], 556, uArray::Init<uObject*>(::TYPES[8/*object[]*/], 2, uBox<int>(::TYPES[3/*int*/], read), uBox<int>(::TYPES[3/*int*/], contentLength)));
                uString* message = uString::CharArray(buffer);
                ::g::Fuse::Scripting::V8::Internal::Debug::SendCommand(::g::Fuse::Scripting::V8::Context::_isolate(), message);
                ::g::Uno::Threading::IDispatcher::Invoke(uInterface(uPtr(uPtr(_parent)->_dispatcher), ::g::Uno::Threading::IDispatcher_typeof()), uDelegate::New(::TYPES[10/*Uno.Action*/], (void*)::g::Fuse::Scripting::V8::Debugger__ProcessDebugMessages_fn));
            }
        }
        else
            ::g::Uno::Threading::Thread::Sleep(10);
    }
    catch (const uThrowable& __t)
    {
        ::g::Uno::Exception* e = __t.Exception;
        ::g::Uno::Diagnostics::Debug::Log5(::g::Uno::String::op_Addition2(::STRINGS[2/*"Debugger ex...*/], uPtr(e)->Message()), 1, ::STRINGS[1/*"C:\\Program...*/], 569);
        Dispose();
        return (uObject*)::g::Fuse::Scripting::V8::Debugger::Disconnect(_parent);
    }

    return (uObject*)this;
}

// public Connected New(Fuse.Scripting.V8.Debugger parent, Uno.IO.TextReader reader) [static] :530
Debugger__Connected* Debugger__Connected::New1(::g::Fuse::Scripting::V8::Debugger* parent, ::g::Uno::IO::TextReader* reader)
{
    Debugger__Connected* obj1 = (Debugger__Connected*)uNew(Debugger__Connected_typeof());
    obj1->ctor_(parent, reader);
    return obj1;
}
// }

// C:\ProgramData\Uno\Packages\Fuse.Scripting.V8\0.19.3\$.uno(498)
// ---------------------------------------------------------------

// private sealed class Debugger.ConnectedMessageHandler :498
// {
uType* Debugger__ConnectedMessageHandler_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 2;
    options.ObjectSize = sizeof(Debugger__ConnectedMessageHandler);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Fuse.Scripting.V8.Debugger.ConnectedMessageHandler", options);
    ::STRINGS[3] = uString::Const("Debugger exception in message handler: ");
    ::STRINGS[1] = uString::Const("C:\\ProgramData\\Uno\\Packages\\Fuse.Scripting.V8\\0.19.3\\$.uno");
    ::TYPES[11] = ::g::Uno::Exception_typeof();
    type->SetFields(0,
        ::g::Fuse::Scripting::V8::Debugger__Connected_typeof(), offsetof(::g::Fuse::Scripting::V8::Debugger__ConnectedMessageHandler, _state), 0,
        ::g::Uno::IO::TextWriter_typeof(), offsetof(::g::Fuse::Scripting::V8::Debugger__ConnectedMessageHandler, _writer), 0);
    return type;
}

// public ConnectedMessageHandler(Fuse.Scripting.V8.Debugger.Connected state, Uno.IO.TextWriter writer) :503
void Debugger__ConnectedMessageHandler__ctor__fn(Debugger__ConnectedMessageHandler* __this, ::g::Fuse::Scripting::V8::Debugger__Connected* state, ::g::Uno::IO::TextWriter* writer)
{
    __this->ctor_(state, writer);
}

// public void MessageHandler(Fuse.Scripting.V8.Internal.Debug.Message message) :509
void Debugger__ConnectedMessageHandler__MessageHandler_fn(Debugger__ConnectedMessageHandler* __this, ::v8::Debug::Message** message)
{
    __this->MessageHandler(*message);
}

// public ConnectedMessageHandler New(Fuse.Scripting.V8.Debugger.Connected state, Uno.IO.TextWriter writer) :503
void Debugger__ConnectedMessageHandler__New1_fn(::g::Fuse::Scripting::V8::Debugger__Connected* state, ::g::Uno::IO::TextWriter* writer, Debugger__ConnectedMessageHandler** __retval)
{
    *__retval = Debugger__ConnectedMessageHandler::New1(state, writer);
}

// public ConnectedMessageHandler(Fuse.Scripting.V8.Debugger.Connected state, Uno.IO.TextWriter writer) [instance] :503
void Debugger__ConnectedMessageHandler::ctor_(::g::Fuse::Scripting::V8::Debugger__Connected* state, ::g::Uno::IO::TextWriter* writer)
{
    _state = state;
    _writer = writer;
}

// public void MessageHandler(Fuse.Scripting.V8.Internal.Debug.Message message) [instance] :509
void Debugger__ConnectedMessageHandler::MessageHandler(::v8::Debug::Message* message)
{
    try
    {
        uPtr(_writer)->Write9(::g::Fuse::Scripting::V8::Debugger::MessageToString(message));
    }
    catch (const uThrowable& __t)
    {
        ::g::Uno::Exception* e = __t.Exception;
        ::g::Uno::Diagnostics::Debug::Log5(::g::Uno::String::op_Addition2(::STRINGS[3/*"Debugger ex...*/], uPtr(e)->Message()), 1, ::STRINGS[1/*"C:\\Program...*/], 517);
        uPtr(_state)->Reconnect();
    }
}

// public ConnectedMessageHandler New(Fuse.Scripting.V8.Debugger.Connected state, Uno.IO.TextWriter writer) [static] :503
Debugger__ConnectedMessageHandler* Debugger__ConnectedMessageHandler::New1(::g::Fuse::Scripting::V8::Debugger__Connected* state, ::g::Uno::IO::TextWriter* writer)
{
    Debugger__ConnectedMessageHandler* obj1 = (Debugger__ConnectedMessageHandler*)uNew(Debugger__ConnectedMessageHandler_typeof());
    obj1->ctor_(state, writer);
    return obj1;
}
// }

// C:\ProgramData\Uno\Packages\Fuse.Scripting.V8\0.19.3\$.uno(112)
// ---------------------------------------------------------------

// public sealed extern class Context :112
// {
::g::Fuse::Scripting::Context_type* Context_typeof()
{
    static uSStrong< ::g::Fuse::Scripting::Context_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 7;
    options.InterfaceCount = 1;
    options.ObjectSize = sizeof(Context);
    options.TypeSize = sizeof(::g::Fuse::Scripting::Context_type);
    type = (::g::Fuse::Scripting::Context_type*)uClassType::New("Fuse.Scripting.V8.Context", options);
    type->SetBase(::g::Fuse::Scripting::Context_typeof());
    type->fp_Dispose = (void(*)(::g::Fuse::Scripting::Context*))Context__Dispose_fn;
    type->fp_Evaluate1 = (void(*)(::g::Fuse::Scripting::Context*, uString*, uString*, uObject**))Context__Evaluate1_fn;
    type->fp_get_GlobalObject = (void(*)(::g::Fuse::Scripting::Context*, ::g::Fuse::Scripting::Object**))Context__get_GlobalObject_fn;
    type->interface0.fp_Dispose = (void(*)(uObject*))Context__Dispose_fn;
    ::STRINGS[4] = uString::Const("instanceof");
    ::STRINGS[5] = uString::Const("(function(x, y) { return (x instanceof y); })");
    ::TYPES[12] = ::g::Fuse::Scripting::V8::Function_typeof();
    ::TYPES[13] = ::g::Fuse::Scripting::Context_typeof();
    ::TYPES[14] = ::g::Fuse::Scripting::Object_typeof();
    type->SetInterfaces(
        ::g::Uno::IDisposable_typeof(), offsetof(::g::Fuse::Scripting::Context_type, interface0));
    type->SetFields(2,
        ::g::Fuse::Scripting::V8::Debugger_typeof(), offsetof(::g::Fuse::Scripting::V8::Context, _debugger), 0,
        ::g::Fuse::Scripting::V8::Internal::PersistentContext_typeof(), offsetof(::g::Fuse::Scripting::V8::Context, _persistentContext), 0,
        ::g::Fuse::Scripting::V8::Internal::Platform_typeof(), offsetof(::g::Fuse::Scripting::V8::Context, _platform), 0,
        ::g::Fuse::Scripting::V8::Function_typeof(), (uintptr_t)&::g::Fuse::Scripting::V8::Context::_instanceOf_, uFieldFlagsStatic,
        ::g::Fuse::Scripting::V8::Internal::Isolate_typeof(), (uintptr_t)&::g::Fuse::Scripting::V8::Context::_isolate_, uFieldFlagsStatic);
    type->Reflection.SetFunctions(1,
        new uFunction(".ctor", NULL, (void*)Context__New1_fn, 0, true, Context_typeof(), 1, ::g::Fuse::Scripting::IDispatcher_typeof()));
    return type;
}

// public Context(Fuse.Scripting.IDispatcher ownerThread) :128
void Context__ctor_1_fn(Context* __this, uObject* ownerThread)
{
    __this->ctor_1(ownerThread);
}

// private Fuse.Scripting.V8.Internal.Context get__context() :119
void Context__get__context_fn(Context* __this, ::v8::Local< ::v8::Context>* __retval)
{
    *__retval = __this->_context();
}

// public override sealed void Dispose() :170
void Context__Dispose_fn(Context* __this)
{
    uPtr(__this->_debugger)->Dispose();
    Context::_instanceOf() = NULL;
    ::v8::Isolate::Scope isolateScope(Context::_isolate());
    ::v8::HandleScope handleScope(Context::_isolate());
    ::g::Fuse::Scripting::V8::Internal::Context::Exit(__this->_context());
    ::g::Fuse::Scripting::V8::Internal::PersistentContext::Delete(__this->_persistentContext);
    ::g::Fuse::Scripting::V8::Internal::Isolate::Dispose(Context::_isolate());
    ::g::Fuse::Scripting::V8::Internal::V8::Dispose();
    ::g::Fuse::Scripting::V8::Internal::V8::ShutdownPlatform();
    ::g::Fuse::Scripting::V8::Internal::Platform::Dispose(__this->_platform);
}

// public override sealed object Evaluate(string fileName, string code) :151
void Context__Evaluate1_fn(Context* __this, uString* fileName, uString* code, uObject** __retval)
{
    ::v8::Isolate::Scope isolateScope(Context::_isolate());
    ::v8::HandleScope handleScope(Context::_isolate());
    ::v8::TryCatch tryCatch(Context::_isolate());
    ::v8::Local< ::v8::Script> script = ::g::Fuse::Scripting::V8::Internal::Script::Compile1(code, fileName);
    return *__retval = ::g::Fuse::Scripting::V8::Marshaller::Wrap(::g::Fuse::Scripting::V8::Internal::Script::Run(script), &tryCatch), void();
}

// public override sealed Fuse.Scripting.Object get_GlobalObject() :162
void Context__get_GlobalObject_fn(Context* __this, ::g::Fuse::Scripting::Object** __retval)
{
    ::v8::Isolate::Scope isolateScope(Context::_isolate());
    ::v8::HandleScope handleScope(Context::_isolate());
    return *__retval = ::g::Fuse::Scripting::V8::Object::New1(::g::Fuse::Scripting::V8::Internal::Context::Global(__this->_context())), void();
}

// public Context New(Fuse.Scripting.IDispatcher ownerThread) :128
void Context__New1_fn(uObject* ownerThread, Context** __retval)
{
    *__retval = Context::New1(ownerThread);
}

uSStrong< ::g::Fuse::Scripting::V8::Function*> Context::_instanceOf_;
::v8::Isolate* Context::_isolate_;

// public Context(Fuse.Scripting.IDispatcher ownerThread) [instance] :128
void Context::ctor_1(uObject* ownerThread)
{
    ctor_(ownerThread);
    ::g::Fuse::Scripting::V8::Internal::V8::InitializeICU();
    _platform = ::g::Fuse::Scripting::V8::Internal::Platform::CreateDefaultPlatform();
    ::g::Fuse::Scripting::V8::Internal::V8::InitializePlatform(_platform);
    ::g::Fuse::Scripting::V8::Internal::V8::Initialize();
    Context::_isolate() = ::g::Fuse::Scripting::V8::Internal::Isolate::New1();
    ::v8::Isolate::Scope isolateScope(Context::_isolate());
    ::v8::HandleScope handleScope(Context::_isolate());
    ::v8::Local< ::v8::Context> context = ::g::Fuse::Scripting::V8::Internal::Context::New1(Context::_isolate());
    ::g::Fuse::Scripting::V8::Internal::Context::Enter(context);
    _persistentContext = ::g::Fuse::Scripting::V8::Internal::PersistentContext::New1(Context::_isolate(), context);
    Context::_instanceOf() = uCast< ::g::Fuse::Scripting::V8::Function*>(Evaluate1(::STRINGS[4/*"instanceof"*/], ::STRINGS[5/*"(function(x...*/]), ::TYPES[12/*Fuse.Scripting.V8.Function*/]);
    _debugger = ::g::Fuse::Scripting::V8::Debugger::New1(Dispatcher(), 5858);
}

// private Fuse.Scripting.V8.Internal.Context get__context() [instance] :119
::v8::Local< ::v8::Context> Context::_context()
{
    return ::g::Fuse::Scripting::V8::Internal::PersistentContext::Get(_persistentContext, Context::_isolate());
}

// public Context New(Fuse.Scripting.IDispatcher ownerThread) [static] :128
Context* Context::New1(uObject* ownerThread)
{
    Context* obj1 = (Context*)uNew(Context_typeof());
    obj1->ctor_1(ownerThread);
    return obj1;
}
// }

// C:\ProgramData\Uno\Packages\Fuse.Scripting.V8\0.19.3\$.uno(361)
// ---------------------------------------------------------------

// internal sealed extern class Debugger :361
// {
// static Debugger() :361
static void Debugger__cctor__fn(uType* __type)
{
    Debugger::_contentLengthString_ = ::STRINGS[6/*"Content-Len...*/];
}

Debugger_type* Debugger_typeof()
{
    static uSStrong<Debugger_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 7;
    options.InterfaceCount = 1;
    options.ObjectSize = sizeof(Debugger);
    options.TypeSize = sizeof(Debugger_type);
    type = (Debugger_type*)uClassType::New("Fuse.Scripting.V8.Debugger", options);
    type->fp_cctor_ = Debugger__cctor__fn;
    type->interface0.fp_Dispose = (void(*)(uObject*))Debugger__Dispose_fn;
    ::STRINGS[6] = uString::Const("Content-Length: ");
    ::STRINGS[7] = uString::Const("Unable to start V8 Debugger: ");
    ::STRINGS[1] = uString::Const("C:\\ProgramData\\Uno\\Packages\\Fuse.Scripting.V8\\0.19.3\\$.uno");
    ::STRINGS[8] = uString::Const("\r\n"
        "\r\n"
        "");
    ::TYPES[15] = ::g::Uno::Collections::List_typeof()->MakeType(::g::Uno::String_typeof());
    ::TYPES[16] = ::g::Uno::Net::IPAddress_typeof();
    ::TYPES[17] = ::g::Uno::Net::EndPoint_typeof();
    ::TYPES[18] = ::g::Fuse::Scripting::V8::Internal::MessageHandler_typeof();
    ::TYPES[10] = ::g::Uno::Action_typeof();
    ::TYPES[11] = ::g::Uno::Exception_typeof();
    ::TYPES[19] = ::g::Uno::IO::Stream_typeof();
    ::TYPES[20] = ::g::Uno::IO::TextReader_typeof();
    ::TYPES[21] = ::g::Uno::IO::TextWriter_typeof();
    ::TYPES[22] = ::g::Uno::Collections::List__Enumerator_typeof()->MakeType(::g::Uno::String_typeof());
    ::TYPES[4] = Debugger__State_typeof();
    ::TYPES[0] = ::g::Fuse::Scripting::V8::Context_typeof();
    ::TYPES[23] = ::g::Uno::Delegate_typeof();
    ::TYPES[24] = ::g::Fuse::Scripting::V8::Internal::String_typeof();
    ::TYPES[9] = uObject_typeof();
    ::TYPES[25] = ::g::Uno::Byte_typeof()->Array();
    ::TYPES[26] = ::g::Uno::Bool_typeof();
    type->SetInterfaces(
        ::g::Uno::IDisposable_typeof(), offsetof(Debugger_type, interface0));
    type->SetFields(0,
        ::g::Fuse::Scripting::IDispatcher_typeof(), offsetof(::g::Fuse::Scripting::V8::Debugger, _dispatcher), 0,
        ::g::Uno::Net::Sockets::Socket_typeof(), offsetof(::g::Fuse::Scripting::V8::Debugger, _listenSocket), 0,
        ::g::Fuse::Scripting::V8::Internal::MessageHandler_typeof(), offsetof(::g::Fuse::Scripting::V8::Debugger, _messageHandler), 0,
        ::g::Uno::Collections::List_typeof()->MakeType(::g::Uno::String_typeof()), offsetof(::g::Fuse::Scripting::V8::Debugger, _offlineMessages), 0,
        ::g::Uno::Int_typeof(), offsetof(::g::Fuse::Scripting::V8::Debugger, _port), 0,
        ::g::Uno::Bool_typeof(), offsetof(::g::Fuse::Scripting::V8::Debugger, _shutdown), 0,
        ::g::Uno::String_typeof(), (uintptr_t)&::g::Fuse::Scripting::V8::Debugger::_contentLengthString_, uFieldFlagsStatic);
    return type;
}

// public Debugger(Fuse.Scripting.IDispatcher dispatcher, int port) :370
void Debugger__ctor__fn(Debugger* __this, uObject* dispatcher, int* port)
{
    __this->ctor_(dispatcher, *port);
}

// private static Fuse.Scripting.V8.Debugger.State Connect(Fuse.Scripting.V8.Debugger parent, Uno.Net.Sockets.Socket communicationSocket) :479
void Debugger__Connect_fn(Debugger* parent, ::g::Uno::Net::Sockets::Socket* communicationSocket, uObject** __retval)
{
    *__retval = Debugger::Connect(parent, communicationSocket);
}

// private static Fuse.Scripting.V8.Debugger.Disconnected Disconnect(Fuse.Scripting.V8.Debugger parent) :436
void Debugger__Disconnect_fn(Debugger* parent, Debugger__Disconnected** __retval)
{
    *__retval = Debugger::Disconnect(parent);
}

// private void DisconnectedMessageHandler(Fuse.Scripting.V8.Internal.Debug.Message message) :442
void Debugger__DisconnectedMessageHandler_fn(Debugger* __this, ::v8::Debug::Message** message)
{
    __this->DisconnectedMessageHandler(*message);
}

// public void Dispose() :419
void Debugger__Dispose_fn(Debugger* __this)
{
    __this->Dispose();
}

// private void MessageHandler(Fuse.Scripting.V8.Internal.Debug.Message message) :400
void Debugger__MessageHandler_fn(Debugger* __this, ::v8::Debug::Message** message)
{
    __this->MessageHandler(*message);
}

// private static string MessageToString(Fuse.Scripting.V8.Internal.Debug.Message message) :447
void Debugger__MessageToString_fn(::v8::Debug::Message** message, uString** __retval)
{
    *__retval = Debugger::MessageToString(*message);
}

// public Debugger New(Fuse.Scripting.IDispatcher dispatcher, int port) :370
void Debugger__New1_fn(uObject* dispatcher, int* port, Debugger** __retval)
{
    *__retval = Debugger::New1(dispatcher, *port);
}

// private static void ProcessDebugMessages() :413
void Debugger__ProcessDebugMessages_fn()
{
    Debugger::ProcessDebugMessages();
}

// private void SetMessageHandler(Fuse.Scripting.V8.Internal.MessageHandler handler) :408
void Debugger__SetMessageHandler_fn(Debugger* __this, uDelegate* handler)
{
    __this->SetMessageHandler(handler);
}

// private void StateMachine() :391
void Debugger__StateMachine_fn(Debugger* __this)
{
    __this->StateMachine();
}

uSStrong<uString*> Debugger::_contentLengthString_;

// public Debugger(Fuse.Scripting.IDispatcher dispatcher, int port) [instance] :370
void Debugger::ctor_(uObject* dispatcher, int port)
{
    _dispatcher = dispatcher;
    _port = port;
    _offlineMessages = ((::g::Uno::Collections::List*)::g::Uno::Collections::List::New1(::TYPES[15/*Uno.Collections.List<string>*/]));

    try
    {
        _listenSocket = ::g::Uno::Net::Sockets::Socket::Create(2, 1, 6);
        ::g::Uno::Net::IPEndPoint* endPoint = ::g::Uno::Net::IPEndPoint::New1(::g::Uno::Net::IPAddress::Any(), port);
        uPtr(_listenSocket)->Bind(endPoint);
        uPtr(_listenSocket)->Listen(100);
        ::g::Fuse::Scripting::V8::Internal::Debug::SetMessageHandler(uDelegate::New(::TYPES[18/*Fuse.Scripting.V8.Internal.MessageHandler*/], (void*)Debugger__MessageHandler_fn, this));
        uPtr(::g::Uno::Threading::Thread::Create(uDelegate::New(::TYPES[10/*Uno.Action*/], (void*)Debugger__StateMachine_fn, this)))->Start();
    }
    catch (const uThrowable& __t)
    {
        ::g::Uno::Exception* e = __t.Exception;
        Dispose();
        ::g::Uno::Diagnostics::Debug::Log5(::g::Uno::String::op_Addition2(::STRINGS[7/*"Unable to s...*/], uPtr(e)->Message()), 1, ::STRINGS[1/*"C:\\Program...*/], 387);
    }
}

// private void DisconnectedMessageHandler(Fuse.Scripting.V8.Internal.Debug.Message message) [instance] :442
void Debugger::DisconnectedMessageHandler(::v8::Debug::Message* message)
{
    ::g::Uno::Collections::List__Add_fn(uPtr(_offlineMessages), Debugger::MessageToString(message));
}

// public void Dispose() [instance] :419
void Debugger::Dispose()
{
    ::v8::Isolate::Scope isolateScope(::g::Fuse::Scripting::V8::Context::_isolate());
    ::g::Fuse::Scripting::V8::Internal::Debug::SetMessageHandler(NULL);
    _shutdown = true;

    if (_listenSocket != NULL)
    {
        uPtr(_listenSocket)->Close();
        _listenSocket = NULL;
    }
}

// private void MessageHandler(Fuse.Scripting.V8.Internal.Debug.Message message) [instance] :400
void Debugger::MessageHandler(::v8::Debug::Message* message)
{
    if (::g::Uno::Delegate::op_Inequality(_messageHandler, NULL))
        uPtr(_messageHandler)->InvokeVoid(uCRef(message));
}

// private void SetMessageHandler(Fuse.Scripting.V8.Internal.MessageHandler handler) [instance] :408
void Debugger::SetMessageHandler(uDelegate* handler)
{
    _messageHandler = handler;
}

// private void StateMachine() [instance] :391
void Debugger::StateMachine()
{
    uObject* state = (uObject*)Debugger::Disconnect(this);

    while (!_shutdown)
        state = Debugger__State::Run(uInterface(uPtr(state), ::TYPES[4/*Fuse.Scripting.V8.Debugger.State*/]));
}

// private static Fuse.Scripting.V8.Debugger.State Connect(Fuse.Scripting.V8.Debugger parent, Uno.Net.Sockets.Socket communicationSocket) [static] :479
uObject* Debugger::Connect(Debugger* parent, ::g::Uno::Net::Sockets::Socket* communicationSocket)
{
    Debugger_typeof()->Init();
    ::g::Uno::Collections::List__Enumerator<uStrong<uString*> > ret3;
    ::g::Uno::Net::Sockets::NetworkStream* stream = ::g::Uno::Net::Sockets::NetworkStream::New1(communicationSocket);
    ::g::Uno::IO::StreamReader* reader = ::g::Uno::IO::StreamReader::New1(stream);
    ::g::Uno::IO::StreamWriter* writer = ::g::Uno::IO::StreamWriter::New1(stream);
    Debugger__Connected* state = Debugger__Connected::New1(parent, reader);
    uPtr(parent)->SetMessageHandler(uDelegate::New(::TYPES[18/*Fuse.Scripting.V8.Internal.MessageHandler*/], (void*)Debugger__ConnectedMessageHandler__MessageHandler_fn, Debugger__ConnectedMessageHandler::New1(state, writer)));

    for (::g::Uno::Collections::List__Enumerator<uStrong<uString*> > enum1 = (::g::Uno::Collections::List__GetEnumerator_fn(uPtr(parent->_offlineMessages), &ret3), ret3); enum1.MoveNext(::TYPES[22/*Uno.Collections.List<string>.Enumerator*/]); )
    {
        uString* message = enum1.Current(::TYPES[22/*Uno.Collections.List<string>.Enumerator*/]);
        uPtr(writer)->Write9(message);
    }

    return (uObject*)state;
}

// private static Fuse.Scripting.V8.Debugger.Disconnected Disconnect(Fuse.Scripting.V8.Debugger parent) [static] :436
Debugger__Disconnected* Debugger::Disconnect(Debugger* parent)
{
    Debugger_typeof()->Init();
    uPtr(parent)->SetMessageHandler(uDelegate::New(::TYPES[18/*Fuse.Scripting.V8.Internal.MessageHandler*/], (void*)Debugger__DisconnectedMessageHandler_fn, uPtr(parent)));
    return Debugger__Disconnected::New1(parent);
}

// private static string MessageToString(Fuse.Scripting.V8.Internal.Debug.Message message) [static] :447
uString* Debugger::MessageToString(::v8::Debug::Message* message)
{
    Debugger_typeof()->Init();
    uString* body = ::g::Fuse::Scripting::V8::Internal::String::ToString(::g::Fuse::Scripting::V8::Internal::Debug__Message::GetJSON(message), ::TYPES[24/*Fuse.Scripting.V8.Internal.String*/]);
    uString* header = ::g::Uno::String::op_Addition2(::g::Uno::String::op_Addition1(Debugger::_contentLengthString(), uBox<int>(::TYPES[3/*int*/], uPtr(::g::Uno::Text::Utf8::GetBytes(body))->Length())), ::STRINGS[8/*"\r\n\r\n"*/]);
    return ::g::Uno::String::op_Addition2(header, body);
}

// public Debugger New(Fuse.Scripting.IDispatcher dispatcher, int port) [static] :370
Debugger* Debugger::New1(uObject* dispatcher, int port)
{
    Debugger* obj2 = (Debugger*)uNew(Debugger_typeof());
    obj2->ctor_(dispatcher, port);
    return obj2;
}

// private static void ProcessDebugMessages() [static] :413
void Debugger::ProcessDebugMessages()
{
    Debugger_typeof()->Init();
    ::v8::Isolate::Scope isolateScope(::g::Fuse::Scripting::V8::Context::_isolate());
    ::g::Fuse::Scripting::V8::Internal::Debug::ProcessDebugMessages();
}
// }

// C:\ProgramData\Uno\Packages\Fuse.Scripting.V8\0.19.3\$.uno(454)
// ---------------------------------------------------------------

// private sealed class Debugger.Disconnected :454
// {
Debugger__Disconnected_type* Debugger__Disconnected_typeof()
{
    static uSStrong<Debugger__Disconnected_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 1;
    options.InterfaceCount = 1;
    options.ObjectSize = sizeof(Debugger__Disconnected);
    options.TypeSize = sizeof(Debugger__Disconnected_type);
    type = (Debugger__Disconnected_type*)uClassType::New("Fuse.Scripting.V8.Debugger.Disconnected", options);
    type->interface0.fp_Run = (void(*)(uObject*, uObject**))Debugger__Disconnected__Run_fn;
    ::STRINGS[9] = uString::Const("Debugger exception when listening for connections: ");
    ::STRINGS[1] = uString::Const("C:\\ProgramData\\Uno\\Packages\\Fuse.Scripting.V8\\0.19.3\\$.uno");
    ::TYPES[5] = ::g::Fuse::Scripting::V8::Debugger_typeof();
    ::TYPES[11] = ::g::Uno::Exception_typeof();
    ::TYPES[4] = ::g::Fuse::Scripting::V8::Debugger__State_typeof();
    type->SetInterfaces(
        ::g::Fuse::Scripting::V8::Debugger__State_typeof(), offsetof(Debugger__Disconnected_type, interface0));
    type->SetFields(0,
        ::g::Fuse::Scripting::V8::Debugger_typeof(), offsetof(::g::Fuse::Scripting::V8::Debugger__Disconnected, _parent), 0);
    return type;
}

// public Disconnected(Fuse.Scripting.V8.Debugger parent) :458
void Debugger__Disconnected__ctor__fn(Debugger__Disconnected* __this, ::g::Fuse::Scripting::V8::Debugger* parent)
{
    __this->ctor_(parent);
}

// public Disconnected New(Fuse.Scripting.V8.Debugger parent) :458
void Debugger__Disconnected__New1_fn(::g::Fuse::Scripting::V8::Debugger* parent, Debugger__Disconnected** __retval)
{
    *__retval = Debugger__Disconnected::New1(parent);
}

// public Fuse.Scripting.V8.Debugger.State Run() :463
void Debugger__Disconnected__Run_fn(Debugger__Disconnected* __this, uObject** __retval)
{
    *__retval = __this->Run();
}

// public Disconnected(Fuse.Scripting.V8.Debugger parent) [instance] :458
void Debugger__Disconnected::ctor_(::g::Fuse::Scripting::V8::Debugger* parent)
{
    _parent = parent;
}

// public Fuse.Scripting.V8.Debugger.State Run() [instance] :463
uObject* Debugger__Disconnected::Run()
{
    try
    {
        ::g::Uno::Net::Sockets::Socket* communicationSocket = uPtr(uPtr(_parent)->_listenSocket)->Accept();
        return ::g::Fuse::Scripting::V8::Debugger::Connect(_parent, communicationSocket);
    }
    catch (const uThrowable& __t)
    {
        ::g::Uno::Exception* e = __t.Exception;
        ::g::Uno::Diagnostics::Debug::Log5(::g::Uno::String::op_Addition2(::STRINGS[9/*"Debugger ex...*/], uPtr(e)->Message()), 1, ::STRINGS[1/*"C:\\Program...*/], 473);
        return (uObject*)this;
    }
}

// public Disconnected New(Fuse.Scripting.V8.Debugger parent) [static] :458
Debugger__Disconnected* Debugger__Disconnected::New1(::g::Fuse::Scripting::V8::Debugger* parent)
{
    Debugger__Disconnected* obj1 = (Debugger__Disconnected*)uNew(Debugger__Disconnected_typeof());
    obj1->ctor_(parent);
    return obj1;
}
// }

// C:\ProgramData\Uno\Packages\Fuse.Scripting.V8\0.19.3\$.uno(596)
// ---------------------------------------------------------------

// internal sealed extern class Function :596
// {
//  ~Function() :614
static void Function__Finalize_fn(Function* __this)
{
    ::g::Fuse::Scripting::V8::Internal::PersistentFunction::Delete(__this->_persistentFunction);
}

::g::Fuse::Scripting::Function_type* Function_typeof()
{
    static uSStrong< ::g::Fuse::Scripting::Function_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 1;
    options.ObjectSize = sizeof(Function);
    options.TypeSize = sizeof(::g::Fuse::Scripting::Function_type);
    type = (::g::Fuse::Scripting::Function_type*)uClassType::New("Fuse.Scripting.V8.Function", options);
    type->SetBase(::g::Fuse::Scripting::Function_typeof());
    type->fp_Finalize = (void(*)(uObject*))Function__Finalize_fn;
    type->fp_Call = (void(*)(::g::Fuse::Scripting::Function*, uArray*, uObject**))Function__Call_fn;
    type->fp_Construct = (void(*)(::g::Fuse::Scripting::Function*, uArray*, ::g::Fuse::Scripting::Object**))Function__Construct_fn;
    type->fp_Equals2 = (void(*)(::g::Fuse::Scripting::Function*, ::g::Fuse::Scripting::Function*, bool*))Function__Equals2_fn;
    ::TYPES[0] = ::g::Fuse::Scripting::V8::Context_typeof();
    ::TYPES[14] = ::g::Fuse::Scripting::Object_typeof();
    type->SetFields(0,
        ::g::Fuse::Scripting::V8::Internal::PersistentFunction_typeof(), offsetof(::g::Fuse::Scripting::V8::Function, _persistentFunction), 0);
    return type;
}

// internal Function(Fuse.Scripting.V8.Internal.Function function) :607
void Function__ctor_1_fn(Function* __this, ::v8::Local< ::v8::Function>* function)
{
    __this->ctor_1(*function);
}

// internal Fuse.Scripting.V8.Internal.Function get__function() :601
void Function__get__function_fn(Function* __this, ::v8::Local< ::v8::Function>* __retval)
{
    *__retval = __this->_function();
}

// public override sealed object Call(object[] args) :619
void Function__Call_fn(Function* __this, uArray* args, uObject** __retval)
{
    ::v8::Isolate::Scope isolateScope(::g::Fuse::Scripting::V8::Context::_isolate());
    ::v8::HandleScope handleScope(::g::Fuse::Scripting::V8::Context::_isolate());
    ::v8::TryCatch tryCatch(::g::Fuse::Scripting::V8::Context::_isolate());
    ::v8::TryCatch* tc = &tryCatch;
    ::v8::Local< ::v8::Context> context = ::g::Fuse::Scripting::V8::Internal::Isolate::GetCurrentContext(::g::Fuse::Scripting::V8::Context::_isolate());
    return *__retval = ::g::Fuse::Scripting::V8::Marshaller::Wrap(::g::Fuse::Scripting::V8::Internal::Function::Call(__this->_function(), context, ::g::Fuse::Scripting::V8::Internal::Object::op_Explicit(::g::Fuse::Scripting::V8::Internal::Context::Global(context)), ::g::Fuse::Scripting::V8::Marshaller::UnwrapArray(args)), tc), void();
}

// public override sealed Fuse.Scripting.Object Construct(object[] args) :634
void Function__Construct_fn(Function* __this, uArray* args, ::g::Fuse::Scripting::Object** __retval)
{
    ::v8::Isolate::Scope isolateScope(::g::Fuse::Scripting::V8::Context::_isolate());
    ::v8::HandleScope handleScope(::g::Fuse::Scripting::V8::Context::_isolate());
    ::v8::TryCatch tryCatch(::g::Fuse::Scripting::V8::Context::_isolate());
    ::v8::TryCatch* tc = &tryCatch;
    ::v8::MaybeLocal< ::v8::Object>  result = ::g::Fuse::Scripting::V8::Internal::Function::NewInstance(__this->_function(), ::g::Fuse::Scripting::V8::Internal::Isolate::GetCurrentContext(::g::Fuse::Scripting::V8::Context::_isolate()), ::g::Fuse::Scripting::V8::Marshaller::UnwrapArray(args));
    return *__retval = ::g::Fuse::Scripting::V8::Object::New1(::g::Fuse::Scripting::V8::Marshaller::FromJust1(result, tc)), void();
}

// public override sealed bool Equals(Fuse.Scripting.Function f) :646
void Function__Equals2_fn(Function* __this, ::g::Fuse::Scripting::Function* f, bool* __retval)
{
    ::v8::Isolate::Scope isolateScope(::g::Fuse::Scripting::V8::Context::_isolate());
    ::v8::HandleScope handleScope(::g::Fuse::Scripting::V8::Context::_isolate());
    ::v8::TryCatch tryCatch(::g::Fuse::Scripting::V8::Context::_isolate());
    ::v8::TryCatch* tc = &tryCatch;
    Function* that = uAs<Function*>(f, Function_typeof());

    if (that == NULL)
        return *__retval = false, void();

    return *__retval = ::g::Fuse::Scripting::V8::Marshaller::AsJust(::g::Fuse::Scripting::V8::Internal::Value::Equals2(::g::Fuse::Scripting::V8::Internal::Function::op_Explicit1(__this->_function()), ::g::Fuse::Scripting::V8::Internal::Isolate::GetCurrentContext(::g::Fuse::Scripting::V8::Context::_isolate()), ::g::Fuse::Scripting::V8::Internal::Function::op_Explicit1(uPtr(that)->_function())), tc), void();
}

// internal Function New(Fuse.Scripting.V8.Internal.Function function) :607
void Function__New1_fn(::v8::Local< ::v8::Function>* function, Function** __retval)
{
    *__retval = Function::New1(*function);
}

// internal Function(Fuse.Scripting.V8.Internal.Function function) [instance] :607
void Function::ctor_1(::v8::Local< ::v8::Function> function)
{
    ctor_();
    _persistentFunction = ::g::Fuse::Scripting::V8::Internal::PersistentFunction::New1(::g::Fuse::Scripting::V8::Internal::Isolate::GetCurrent(), function);
}

// internal Fuse.Scripting.V8.Internal.Function get__function() [instance] :601
::v8::Local< ::v8::Function> Function::_function()
{
    return ::g::Fuse::Scripting::V8::Internal::PersistentFunction::Get(_persistentFunction, ::g::Fuse::Scripting::V8::Internal::Isolate::GetCurrent());
}

// internal Function New(Fuse.Scripting.V8.Internal.Function function) [static] :607
Function* Function::New1(::v8::Local< ::v8::Function> function)
{
    Function* obj1 = (Function*)uNew(Function_typeof());
    obj1->ctor_1(function);
    return obj1;
}
// }

// C:\ProgramData\Uno\Packages\Fuse.Scripting.V8\0.19.3\$.uno(192)
// ---------------------------------------------------------------

// internal static extern class Marshaller :192
// {
uClassType* Marshaller_typeof()
{
    static uSStrong<uClassType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.TypeSize = sizeof(uClassType);
    type = uClassType::New("Fuse.Scripting.V8.Marshaller", options);
    ::STRINGS[10] = uString::Const("");
    ::STRINGS[11] = uString::Const("Unhandled type in V8 wrapper: ");
    ::STRINGS[12] = uString::Const("Unhandled JSValue");
    ::TYPES[0] = ::g::Fuse::Scripting::V8::Context_typeof();
    ::TYPES[27] = ::g::Fuse::Scripting::V8::Internal::Value_typeof();
    ::TYPES[24] = ::g::Fuse::Scripting::V8::Internal::String_typeof();
    ::TYPES[3] = ::g::Uno::Int_typeof();
    ::TYPES[28] = ::g::Uno::Double_typeof();
    ::TYPES[6] = ::g::Uno::String_typeof();
    ::TYPES[26] = ::g::Uno::Bool_typeof();
    ::TYPES[29] = ::g::Fuse::Scripting::V8::Object_typeof();
    ::TYPES[30] = ::g::Fuse::Scripting::V8::Array_typeof();
    ::TYPES[12] = ::g::Fuse::Scripting::V8::Function_typeof();
    ::TYPES[31] = ::g::Fuse::Scripting::Callback_typeof();
    ::TYPES[32] = ::g::Fuse::Scripting::V8::Internal::Value_typeof()->Array();
    ::TYPES[8] = uObject_typeof()->Array();
    ::TYPES[9] = uObject_typeof();
    return type;
}

// internal static bool AsJust(Fuse.Scripting.V8.Internal.MaybeBool obj, Fuse.Scripting.V8.Internal.TryCatch tryCatch) :232
void Marshaller__AsJust_fn(::v8::Maybe< bool>* obj, ::v8::TryCatch** tryCatch, bool* __retval)
{
    *__retval = Marshaller::AsJust(*obj, *tryCatch);
}

// internal static double AsJust(Fuse.Scripting.V8.Internal.MaybeDouble obj, Fuse.Scripting.V8.Internal.TryCatch tryCatch) :244
void Marshaller__AsJust1_fn(::v8::Maybe< double>* obj, ::v8::TryCatch** tryCatch, double* __retval)
{
    *__retval = Marshaller::AsJust1(*obj, *tryCatch);
}

// internal static int AsJust(Fuse.Scripting.V8.Internal.MaybeInt obj, Fuse.Scripting.V8.Internal.TryCatch tryCatch) :238
void Marshaller__AsJust2_fn(::v8::Maybe< int>* obj, ::v8::TryCatch** tryCatch, int* __retval)
{
    *__retval = Marshaller::AsJust2(*obj, *tryCatch);
}

// internal static Fuse.Scripting.V8.Internal.Array FromJust(Fuse.Scripting.V8.Internal.MaybeArray obj, Fuse.Scripting.V8.Internal.TryCatch tryCatch) :226
void Marshaller__FromJust_fn(::v8::MaybeLocal< ::v8::Array> * obj, ::v8::TryCatch** tryCatch, ::v8::Local< ::v8::Array>* __retval)
{
    *__retval = Marshaller::FromJust(*obj, *tryCatch);
}

// internal static Fuse.Scripting.V8.Internal.Object FromJust(Fuse.Scripting.V8.Internal.MaybeObject obj, Fuse.Scripting.V8.Internal.TryCatch tryCatch) :220
void Marshaller__FromJust1_fn(::v8::MaybeLocal< ::v8::Object> * obj, ::v8::TryCatch** tryCatch, ::v8::Local< ::v8::Object>* __retval)
{
    *__retval = Marshaller::FromJust1(*obj, *tryCatch);
}

// internal static Fuse.Scripting.V8.Internal.String FromJust(Fuse.Scripting.V8.Internal.MaybeString obj, Fuse.Scripting.V8.Internal.TryCatch tryCatch) :208
void Marshaller__FromJust2_fn(::v8::MaybeLocal< ::v8::String> * obj, ::v8::TryCatch** tryCatch, ::v8::Local< ::v8::String>* __retval)
{
    *__retval = Marshaller::FromJust2(*obj, *tryCatch);
}

// internal static Fuse.Scripting.V8.Internal.Value FromJust(Fuse.Scripting.V8.Internal.MaybeValue obj, Fuse.Scripting.V8.Internal.TryCatch tryCatch) :214
void Marshaller__FromJust3_fn(::v8::MaybeLocal< ::v8::Value> * obj, ::v8::TryCatch** tryCatch, ::v8::Local< ::v8::Value>* __retval)
{
    *__retval = Marshaller::FromJust3(*obj, *tryCatch);
}

// internal static void ThrowException(Fuse.Scripting.V8.Internal.TryCatch tryCatch) :194
void Marshaller__ThrowException_fn(::v8::TryCatch** tryCatch)
{
    Marshaller::ThrowException(*tryCatch);
}

// internal static Fuse.Scripting.V8.Internal.Value Unwrap(object obj) :293
void Marshaller__Unwrap_fn(uObject* obj, ::v8::Local< ::v8::Value>* __retval)
{
    *__retval = Marshaller::Unwrap(obj);
}

// internal static Fuse.Scripting.V8.Internal.Value[] UnwrapArray(object[] objs) :334
void Marshaller__UnwrapArray_fn(uArray* objs, uArray** __retval)
{
    *__retval = Marshaller::UnwrapArray(objs);
}

// internal static object Wrap(Fuse.Scripting.V8.Internal.MaybeValue maybeObj, Fuse.Scripting.V8.Internal.TryCatch tryCatch) :250
void Marshaller__Wrap_fn(::v8::MaybeLocal< ::v8::Value> * maybeObj, ::v8::TryCatch** tryCatch, uObject** __retval)
{
    *__retval = Marshaller::Wrap(*maybeObj, *tryCatch);
}

// internal static object Wrap(Fuse.Scripting.V8.Internal.Value obj, Fuse.Scripting.V8.Internal.TryCatch tryCatch) :255
void Marshaller__Wrap1_fn(::v8::Local< ::v8::Value>* obj, ::v8::TryCatch** tryCatch, uObject** __retval)
{
    *__retval = Marshaller::Wrap1(*obj, *tryCatch);
}

// internal static bool AsJust(Fuse.Scripting.V8.Internal.MaybeBool obj, Fuse.Scripting.V8.Internal.TryCatch tryCatch) [static] :232
bool Marshaller::AsJust(::v8::Maybe< bool> obj, ::v8::TryCatch* tryCatch)
{
    if (::g::Fuse::Scripting::V8::Internal::MaybeBool::IsNothing(obj))
        Marshaller::ThrowException(tryCatch);

    return ::g::Fuse::Scripting::V8::Internal::MaybeBool::FromJust(obj);
}

// internal static double AsJust(Fuse.Scripting.V8.Internal.MaybeDouble obj, Fuse.Scripting.V8.Internal.TryCatch tryCatch) [static] :244
double Marshaller::AsJust1(::v8::Maybe< double> obj, ::v8::TryCatch* tryCatch)
{
    if (::g::Fuse::Scripting::V8::Internal::MaybeDouble::IsNothing(obj))
        Marshaller::ThrowException(tryCatch);

    return ::g::Fuse::Scripting::V8::Internal::MaybeDouble::FromJust(obj);
}

// internal static int AsJust(Fuse.Scripting.V8.Internal.MaybeInt obj, Fuse.Scripting.V8.Internal.TryCatch tryCatch) [static] :238
int Marshaller::AsJust2(::v8::Maybe< int> obj, ::v8::TryCatch* tryCatch)
{
    if (::g::Fuse::Scripting::V8::Internal::MaybeInt::IsNothing(obj))
        Marshaller::ThrowException(tryCatch);

    return ::g::Fuse::Scripting::V8::Internal::MaybeInt::FromJust(obj);
}

// internal static Fuse.Scripting.V8.Internal.Array FromJust(Fuse.Scripting.V8.Internal.MaybeArray obj, Fuse.Scripting.V8.Internal.TryCatch tryCatch) [static] :226
::v8::Local< ::v8::Array> Marshaller::FromJust(::v8::MaybeLocal< ::v8::Array>  obj, ::v8::TryCatch* tryCatch)
{
    if (::g::Fuse::Scripting::V8::Internal::MaybeArray::IsEmpty(obj))
        Marshaller::ThrowException(tryCatch);

    return ::g::Fuse::Scripting::V8::Internal::MaybeArray::ToLocalChecked(obj);
}

// internal static Fuse.Scripting.V8.Internal.Object FromJust(Fuse.Scripting.V8.Internal.MaybeObject obj, Fuse.Scripting.V8.Internal.TryCatch tryCatch) [static] :220
::v8::Local< ::v8::Object> Marshaller::FromJust1(::v8::MaybeLocal< ::v8::Object>  obj, ::v8::TryCatch* tryCatch)
{
    if (::g::Fuse::Scripting::V8::Internal::MaybeObject::IsEmpty(obj))
        Marshaller::ThrowException(tryCatch);

    return ::g::Fuse::Scripting::V8::Internal::MaybeObject::ToLocalChecked(obj);
}

// internal static Fuse.Scripting.V8.Internal.String FromJust(Fuse.Scripting.V8.Internal.MaybeString obj, Fuse.Scripting.V8.Internal.TryCatch tryCatch) [static] :208
::v8::Local< ::v8::String> Marshaller::FromJust2(::v8::MaybeLocal< ::v8::String>  obj, ::v8::TryCatch* tryCatch)
{
    if (::g::Fuse::Scripting::V8::Internal::MaybeString::IsEmpty(obj))
        Marshaller::ThrowException(tryCatch);

    return ::g::Fuse::Scripting::V8::Internal::MaybeString::ToLocalChecked(obj);
}

// internal static Fuse.Scripting.V8.Internal.Value FromJust(Fuse.Scripting.V8.Internal.MaybeValue obj, Fuse.Scripting.V8.Internal.TryCatch tryCatch) [static] :214
::v8::Local< ::v8::Value> Marshaller::FromJust3(::v8::MaybeLocal< ::v8::Value>  obj, ::v8::TryCatch* tryCatch)
{
    if (::g::Fuse::Scripting::V8::Internal::MaybeValue::IsEmpty(obj))
        Marshaller::ThrowException(tryCatch);

    return ::g::Fuse::Scripting::V8::Internal::MaybeValue::ToLocalChecked(obj);
}

// internal static void ThrowException(Fuse.Scripting.V8.Internal.TryCatch tryCatch) [static] :194
void Marshaller::ThrowException(::v8::TryCatch* tryCatch)
{
    ::v8::Local< ::v8::Context> context = ::g::Fuse::Scripting::V8::Internal::Isolate::GetCurrentContext(::g::Fuse::Scripting::V8::Context::_isolate());
    ::v8::Local< ::v8::Value> exception = ::g::Fuse::Scripting::V8::Internal::TryCatch::Exception(tryCatch);
    ::v8::Local< ::v8::Message> message = ::g::Fuse::Scripting::V8::Internal::TryCatch::Message(tryCatch);
    ::v8::Local< ::v8::Value> stackTrace = ::g::Fuse::Scripting::V8::Internal::MaybeValue::FromMaybe(::g::Fuse::Scripting::V8::Internal::TryCatch::StackTrace(tryCatch, context), ::g::Fuse::Scripting::V8::Internal::Value::op_Explicit(::STRINGS[10/*""*/]));
    U_THROW(::g::Fuse::Scripting::ScriptException::New4(::g::Fuse::Scripting::V8::Internal::Value::ToString(exception, ::TYPES[27/*Fuse.Scripting.V8.Internal.Value*/]), ::g::Fuse::Scripting::V8::Internal::String::ToString(::g::Fuse::Scripting::V8::Internal::Message::Get(message), ::TYPES[24/*Fuse.Scripting.V8.Internal.String*/]), ::g::Fuse::Scripting::V8::Internal::Value::ToString(::g::Fuse::Scripting::V8::Internal::Message::GetScriptOriginResourceName(message), ::TYPES[27/*Fuse.Scripting.V8.Internal.Value*/]), ::g::Fuse::Scripting::V8::Internal::MaybeInt::FromMaybe(::g::Fuse::Scripting::V8::Internal::Message::GetLineNumber(message, context), -1), ::g::Fuse::Scripting::V8::Internal::Value::ToString(stackTrace, ::TYPES[27/*Fuse.Scripting.V8.Internal.Value*/])));
}

// internal static Fuse.Scripting.V8.Internal.Value Unwrap(object obj) [static] :293
::v8::Local< ::v8::Value> Marshaller::Unwrap(uObject* obj)
{
    if (obj == NULL)
        return ::g::Fuse::Scripting::V8::Internal::Value::Null(::g::Fuse::Scripting::V8::Context::_isolate());

    if (uIs(obj, ::TYPES[3/*int*/]))
        return ::g::Fuse::Scripting::V8::Internal::Value::Primitive2(::g::Fuse::Scripting::V8::Context::_isolate(), uUnbox<int>(::TYPES[3/*int*/], obj));

    if (uIs(obj, ::TYPES[28/*double*/]))
        return ::g::Fuse::Scripting::V8::Internal::Value::Primitive1(::g::Fuse::Scripting::V8::Context::_isolate(), uUnbox<double>(::TYPES[28/*double*/], obj));

    if (uIs(obj, ::TYPES[6/*string*/]))
        return ::g::Fuse::Scripting::V8::Internal::Value::op_Explicit(uCast<uString*>(obj, ::TYPES[6/*string*/]));

    if (uIs(obj, ::TYPES[26/*bool*/]))
        return ::g::Fuse::Scripting::V8::Internal::Value::Primitive(::g::Fuse::Scripting::V8::Context::_isolate(), uUnbox<bool>(::TYPES[26/*bool*/], obj));

    if (uIs(obj, ::TYPES[29/*Fuse.Scripting.V8.Object*/]))
        return ::g::Fuse::Scripting::V8::Internal::Object::op_Explicit(uPtr(uCast< ::g::Fuse::Scripting::V8::Object*>(obj, ::TYPES[29/*Fuse.Scripting.V8.Object*/]))->_object());

    if (uIs(obj, ::TYPES[30/*Fuse.Scripting.V8.Array*/]))
        return ::g::Fuse::Scripting::V8::Internal::Array::op_Explicit1(uPtr(uCast< ::g::Fuse::Scripting::V8::Array*>(obj, ::TYPES[30/*Fuse.Scripting.V8.Array*/]))->_array());

    if (uIs(obj, ::TYPES[12/*Fuse.Scripting.V8.Function*/]))
        return ::g::Fuse::Scripting::V8::Internal::Function::op_Explicit1(uPtr(uCast< ::g::Fuse::Scripting::V8::Function*>(obj, ::TYPES[12/*Fuse.Scripting.V8.Function*/]))->_function());

    if (uIs(obj, ::TYPES[31/*Fuse.Scripting.Callback*/]))
        return ::g::Fuse::Scripting::V8::Internal::Function::op_Explicit1(::g::Fuse::Scripting::V8::Internal::Function::FromDelegate(::g::Fuse::Scripting::V8::Context::_isolate(), uCast<uDelegate*>(obj, ::TYPES[31/*Fuse.Scripting.Callback*/])));

    U_THROW(::g::Uno::Exception::New2(::g::Uno::String::op_Addition1(::STRINGS[11/*"Unhandled t...*/], obj)));
}

// internal static Fuse.Scripting.V8.Internal.Value[] UnwrapArray(object[] objs) [static] :334
uArray* Marshaller::UnwrapArray(uArray* objs)
{
    uArray* unwrappedObjs = uArray::New(::TYPES[32/*Fuse.Scripting.V8.Internal.Value[]*/], uPtr(objs)->Length());

    for (int i = 0; i < objs->Length(); ++i)
        uPtr(unwrappedObjs)->Item< ::v8::Local< ::v8::Value> >(i) = Marshaller::Unwrap(uPtr(objs)->Strong<uObject*>(i));

    return unwrappedObjs;
}

// internal static object Wrap(Fuse.Scripting.V8.Internal.MaybeValue maybeObj, Fuse.Scripting.V8.Internal.TryCatch tryCatch) [static] :250
uObject* Marshaller::Wrap(::v8::MaybeLocal< ::v8::Value>  maybeObj, ::v8::TryCatch* tryCatch)
{
    return Marshaller::Wrap1(Marshaller::FromJust3(maybeObj, tryCatch), tryCatch);
}

// internal static object Wrap(Fuse.Scripting.V8.Internal.Value obj, Fuse.Scripting.V8.Internal.TryCatch tryCatch) [static] :255
uObject* Marshaller::Wrap1(::v8::Local< ::v8::Value> obj, ::v8::TryCatch* tryCatch)
{
    ::v8::Local< ::v8::Context> context = ::g::Fuse::Scripting::V8::Internal::Isolate::GetCurrentContext(::g::Fuse::Scripting::V8::Context::_isolate());

    if (::g::Fuse::Scripting::V8::Internal::Value::IsInt32(obj))
        return uBox<int>(::TYPES[3/*int*/], Marshaller::AsJust2(::g::Fuse::Scripting::V8::Internal::Value::Int32Value(obj, context), tryCatch));

    if (::g::Fuse::Scripting::V8::Internal::Value::IsNumber(obj) || ::g::Fuse::Scripting::V8::Internal::Value::IsNumberObject(obj))
        return uBox(::TYPES[28/*double*/], Marshaller::AsJust1(::g::Fuse::Scripting::V8::Internal::Value::NumberValue(obj, context), tryCatch));

    if (::g::Fuse::Scripting::V8::Internal::Value::IsString(obj) || ::g::Fuse::Scripting::V8::Internal::Value::IsStringObject(obj))
        return ::g::Fuse::Scripting::V8::Internal::String::ToString(Marshaller::FromJust2(::g::Fuse::Scripting::V8::Internal::Value::ToString1(obj, context), tryCatch), ::TYPES[24/*Fuse.Scripting.V8.Internal.String*/]);

    if (::g::Fuse::Scripting::V8::Internal::Value::IsBoolean(obj) || ::g::Fuse::Scripting::V8::Internal::Value::IsBooleanObject(obj))
        return uBox(::TYPES[26/*bool*/], Marshaller::AsJust(::g::Fuse::Scripting::V8::Internal::Value::BooleanValue(obj, context), tryCatch));

    if (::g::Fuse::Scripting::V8::Internal::Value::IsArray(obj))
        return ::g::Fuse::Scripting::V8::Array::New1(::g::Fuse::Scripting::V8::Internal::Object::op_Explicit2(Marshaller::FromJust1(::g::Fuse::Scripting::V8::Internal::Value::ToObject(obj, context), tryCatch)));

    if (::g::Fuse::Scripting::V8::Internal::Value::IsFunction(obj))
        return ::g::Fuse::Scripting::V8::Function::New1(::g::Fuse::Scripting::V8::Internal::Object::op_Explicit1(Marshaller::FromJust1(::g::Fuse::Scripting::V8::Internal::Value::ToObject(obj, context), tryCatch)));

    if (::g::Fuse::Scripting::V8::Internal::Value::IsObject(obj))
        return ::g::Fuse::Scripting::V8::Object::New1(Marshaller::FromJust1(::g::Fuse::Scripting::V8::Internal::Value::ToObject(obj, context), tryCatch));

    if (::g::Fuse::Scripting::V8::Internal::Value::IsUndefined(obj) || ::g::Fuse::Scripting::V8::Internal::Value::IsNull(obj))
        return NULL;

    U_THROW(::g::Uno::Exception::New2(::STRINGS[12/*"Unhandled J...*/]));
}
// }

// C:\ProgramData\Uno\Packages\Fuse.Scripting.V8\0.19.3\$.uno(672)
// ---------------------------------------------------------------

// internal sealed extern class Object :672
// {
//  ~Object() :690
static void Object__Finalize_fn(Object* __this)
{
    ::g::Fuse::Scripting::V8::Internal::PersistentObject::Delete(__this->_persistentObject);
}

::g::Fuse::Scripting::Object_type* Object_typeof()
{
    static uSStrong< ::g::Fuse::Scripting::Object_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 1;
    options.ObjectSize = sizeof(Object);
    options.TypeSize = sizeof(::g::Fuse::Scripting::Object_type);
    type = (::g::Fuse::Scripting::Object_type*)uClassType::New("Fuse.Scripting.V8.Object", options);
    type->SetBase(::g::Fuse::Scripting::Object_typeof());
    type->fp_Finalize = (void(*)(uObject*))Object__Finalize_fn;
    type->fp_CallMethod = (void(*)(::g::Fuse::Scripting::Object*, uString*, uArray*, uObject**))Object__CallMethod_fn;
    type->fp_ContainsKey = (void(*)(::g::Fuse::Scripting::Object*, uString*, bool*))Object__ContainsKey_fn;
    type->fp_Equals2 = (void(*)(::g::Fuse::Scripting::Object*, ::g::Fuse::Scripting::Object*, bool*))Object__Equals2_fn;
    type->fp_InstanceOf = (void(*)(::g::Fuse::Scripting::Object*, ::g::Fuse::Scripting::Function*, bool*))Object__InstanceOf_fn;
    type->fp_get_Item = (void(*)(::g::Fuse::Scripting::Object*, uString*, uObject**))Object__get_Item_fn;
    type->fp_set_Item = (void(*)(::g::Fuse::Scripting::Object*, uString*, uObject*))Object__set_Item_fn;
    type->fp_get_Keys = (void(*)(::g::Fuse::Scripting::Object*, uArray**))Object__get_Keys_fn;
    ::STRINGS[13] = uString::Const("V8: No instanceof function available");
    ::TYPES[0] = ::g::Fuse::Scripting::V8::Context_typeof();
    ::TYPES[26] = ::g::Uno::Bool_typeof();
    ::TYPES[8] = uObject_typeof()->Array();
    ::TYPES[9] = uObject_typeof();
    ::TYPES[3] = ::g::Uno::Int_typeof();
    ::TYPES[33] = ::g::Uno::String_typeof()->Array();
    ::TYPES[27] = ::g::Fuse::Scripting::V8::Internal::Value_typeof();
    ::TYPES[2] = ::g::Uno::UInt_typeof();
    type->SetFields(0,
        ::g::Fuse::Scripting::V8::Internal::PersistentObject_typeof(), offsetof(::g::Fuse::Scripting::V8::Object, _persistentObject), 0);
    return type;
}

// public Object(Fuse.Scripting.V8.Internal.Object obj) :683
void Object__ctor_1_fn(Object* __this, ::v8::Local< ::v8::Object>* obj)
{
    __this->ctor_1(*obj);
}

// internal Fuse.Scripting.V8.Internal.Object get__object() :677
void Object__get__object_fn(Object* __this, ::v8::Local< ::v8::Object>* __retval)
{
    *__retval = __this->_object();
}

// public override sealed object CallMethod(string name, object[] args) :752
void Object__CallMethod_fn(Object* __this, uString* name, uArray* args, uObject** __retval)
{
    ::v8::Isolate::Scope isolateScope(::g::Fuse::Scripting::V8::Context::_isolate());
    ::v8::HandleScope handleScope(::g::Fuse::Scripting::V8::Context::_isolate());
    ::v8::TryCatch tryCatch(::g::Fuse::Scripting::V8::Context::_isolate());
    ::v8::TryCatch* tc = &tryCatch;
    ::v8::Local< ::v8::Context> context = ::g::Fuse::Scripting::V8::Internal::Isolate::GetCurrentContext(::g::Fuse::Scripting::V8::Context::_isolate());
    ::v8::Local< ::v8::Object> obj = __this->_object();
    ::v8::Local< ::v8::Object> prop = ::g::Fuse::Scripting::V8::Marshaller::FromJust1(::g::Fuse::Scripting::V8::Internal::Value::ToObject(::g::Fuse::Scripting::V8::Marshaller::FromJust3(::g::Fuse::Scripting::V8::Internal::Object::Get(obj, context, ::g::Fuse::Scripting::V8::Internal::Value::op_Explicit(name)), tc), context), tc);
    ::v8::Local< ::v8::Function> fun = ::g::Fuse::Scripting::V8::Internal::Object::op_Explicit1(prop);
    return *__retval = ::g::Fuse::Scripting::V8::Marshaller::Wrap(::g::Fuse::Scripting::V8::Internal::Function::Call(fun, context, ::g::Fuse::Scripting::V8::Internal::Object::op_Explicit(obj), ::g::Fuse::Scripting::V8::Marshaller::UnwrapArray(args)), tc), void();
}

// public override sealed bool ContainsKey(string key) :774
void Object__ContainsKey_fn(Object* __this, uString* key, bool* __retval)
{
    ::v8::Isolate::Scope isolateScope(::g::Fuse::Scripting::V8::Context::_isolate());
    ::v8::HandleScope handleScope(::g::Fuse::Scripting::V8::Context::_isolate());
    ::v8::TryCatch tryCatch(::g::Fuse::Scripting::V8::Context::_isolate());
    ::v8::TryCatch* tc = &tryCatch;
    return *__retval = ::g::Fuse::Scripting::V8::Marshaller::AsJust(::g::Fuse::Scripting::V8::Internal::Object::Has(__this->_object(), ::g::Fuse::Scripting::V8::Internal::Isolate::GetCurrentContext(::g::Fuse::Scripting::V8::Context::_isolate()), ::g::Fuse::Scripting::V8::Internal::Value::op_Explicit(key)), tc), void();
}

// public override sealed bool Equals(Fuse.Scripting.Object o) :785
void Object__Equals2_fn(Object* __this, ::g::Fuse::Scripting::Object* o, bool* __retval)
{
    ::v8::Isolate::Scope isolateScope(::g::Fuse::Scripting::V8::Context::_isolate());
    ::v8::HandleScope handleScope(::g::Fuse::Scripting::V8::Context::_isolate());
    ::v8::TryCatch tryCatch(::g::Fuse::Scripting::V8::Context::_isolate());
    ::v8::TryCatch* tc = &tryCatch;
    Object* that = uAs<Object*>(o, Object_typeof());

    if (that == NULL)
        return *__retval = false, void();

    return *__retval = ::g::Fuse::Scripting::V8::Marshaller::AsJust(::g::Fuse::Scripting::V8::Internal::Value::Equals2(::g::Fuse::Scripting::V8::Internal::Object::op_Explicit(__this->_object()), ::g::Fuse::Scripting::V8::Internal::Isolate::GetCurrentContext(::g::Fuse::Scripting::V8::Context::_isolate()), ::g::Fuse::Scripting::V8::Internal::Object::op_Explicit(uPtr(that)->_object())), tc), void();
}

// public override sealed bool InstanceOf(Fuse.Scripting.Function type) :743
void Object__InstanceOf_fn(Object* __this, ::g::Fuse::Scripting::Function* type, bool* __retval)
{
    if (::g::Fuse::Scripting::V8::Context::_instanceOf() == NULL)
        U_THROW(::g::Uno::Exception::New2(::STRINGS[13/*"V8: No inst...*/]));

    return *__retval = uUnbox<bool>(::TYPES[26/*bool*/], uPtr(::g::Fuse::Scripting::V8::Context::_instanceOf())->Call(uArray::Init<uObject*>(::TYPES[8/*object[]*/], 2, __this, type))), void();
}

// public override sealed object get_Item(string key) :697
void Object__get_Item_fn(Object* __this, uString* key, uObject** __retval)
{
    ::v8::Isolate::Scope isolateScope(::g::Fuse::Scripting::V8::Context::_isolate());
    ::v8::HandleScope handleScope(::g::Fuse::Scripting::V8::Context::_isolate());
    ::v8::TryCatch tryCatch(::g::Fuse::Scripting::V8::Context::_isolate());
    ::v8::TryCatch* tc = &tryCatch;
    return *__retval = ::g::Fuse::Scripting::V8::Marshaller::Wrap(::g::Fuse::Scripting::V8::Internal::Object::Get(__this->_object(), ::g::Fuse::Scripting::V8::Internal::Isolate::GetCurrentContext(::g::Fuse::Scripting::V8::Context::_isolate()), ::g::Fuse::Scripting::V8::Internal::Value::op_Explicit(key)), tc), void();
}

// public override sealed void set_Item(string key, object value) :709
void Object__set_Item_fn(Object* __this, uString* key, uObject* value)
{
    ::v8::Isolate::Scope isolateScope(::g::Fuse::Scripting::V8::Context::_isolate());
    ::v8::HandleScope handleScope(::g::Fuse::Scripting::V8::Context::_isolate());
    ::v8::TryCatch tryCatch(::g::Fuse::Scripting::V8::Context::_isolate());
    ::v8::TryCatch* tc = &tryCatch;
    ::g::Fuse::Scripting::V8::Marshaller::AsJust(::g::Fuse::Scripting::V8::Internal::Object::Set(__this->_object(), ::g::Fuse::Scripting::V8::Internal::Isolate::GetCurrentContext(::g::Fuse::Scripting::V8::Context::_isolate()), ::g::Fuse::Scripting::V8::Internal::Value::op_Explicit(key), ::g::Fuse::Scripting::V8::Marshaller::Unwrap(value)), tc);
}

// public override sealed string[] get_Keys() :724
void Object__get_Keys_fn(Object* __this, uArray** __retval)
{
    ::v8::Isolate::Scope isolateScope(::g::Fuse::Scripting::V8::Context::_isolate());
    ::v8::HandleScope handleScope(::g::Fuse::Scripting::V8::Context::_isolate());
    ::v8::TryCatch tryCatch(::g::Fuse::Scripting::V8::Context::_isolate());
    ::v8::TryCatch* tc = &tryCatch;
    ::v8::Local< ::v8::Context> context = ::g::Fuse::Scripting::V8::Internal::Isolate::GetCurrentContext(::g::Fuse::Scripting::V8::Context::_isolate());
    ::v8::Local< ::v8::Array> propArr = ::g::Fuse::Scripting::V8::Marshaller::FromJust(::g::Fuse::Scripting::V8::Internal::Object::GetPropertyNames(__this->_object(), context), tc);
    int length = (int)::g::Fuse::Scripting::V8::Internal::Array::Length(propArr);
    ::v8::Local< ::v8::Object> propObj = ::g::Fuse::Scripting::V8::Internal::Array::op_Explicit(propArr);
    uArray* result = uArray::New(::TYPES[33/*string[]*/], length);

    for (int i = 0; i < length; ++i)
        uPtr(result)->Strong<uString*>(i) = ::g::Fuse::Scripting::V8::Internal::Value::ToString(::g::Fuse::Scripting::V8::Marshaller::FromJust3(::g::Fuse::Scripting::V8::Internal::Object::Get1(propObj, context, (uint32_t)i), tc), ::TYPES[27/*Fuse.Scripting.V8.Internal.Value*/]);

    return *__retval = result, void();
}

// public Object New(Fuse.Scripting.V8.Internal.Object obj) :683
void Object__New1_fn(::v8::Local< ::v8::Object>* obj, Object** __retval)
{
    *__retval = Object::New1(*obj);
}

// public Object(Fuse.Scripting.V8.Internal.Object obj) [instance] :683
void Object::ctor_1(::v8::Local< ::v8::Object> obj)
{
    ctor_();
    _persistentObject = ::g::Fuse::Scripting::V8::Internal::PersistentObject::New1(::g::Fuse::Scripting::V8::Internal::Isolate::GetCurrent(), obj);
}

// internal Fuse.Scripting.V8.Internal.Object get__object() [instance] :677
::v8::Local< ::v8::Object> Object::_object()
{
    return ::g::Fuse::Scripting::V8::Internal::PersistentObject::Get(_persistentObject, ::g::Fuse::Scripting::V8::Internal::Isolate::GetCurrent());
}

// public Object New(Fuse.Scripting.V8.Internal.Object obj) [static] :683
Object* Object::New1(::v8::Local< ::v8::Object> obj)
{
    Object* obj1 = (Object*)uNew(Object_typeof());
    obj1->ctor_1(obj);
    return obj1;
}
// }

// C:\ProgramData\Uno\Packages\Fuse.Scripting.V8\0.19.3\$.uno(431)
// ---------------------------------------------------------------

// private abstract interface Debugger.State :431
// {
uInterfaceType* Debugger__State_typeof()
{
    static uSStrong<uInterfaceType*> type;
    if (type != NULL) return type;

    type = uInterfaceType::New("Fuse.Scripting.V8.Debugger.State", 0, 0);
    return type;
}
// }

}}}} // ::g::Fuse::Scripting::V8
