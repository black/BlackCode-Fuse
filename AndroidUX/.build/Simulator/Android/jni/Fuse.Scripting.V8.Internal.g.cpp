// This file was generated based on '(multiple files)'.
// WARNING: Changes might be lost if you edit this file directly.

#include <ArrayBufferAllocator.h>
#include <Fuse.Scripting.Callback.h>
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
#include <Fuse.Scripting.V8.Internal.MaybeLong.h>
#include <Fuse.Scripting.V8.Internal.MaybeObject.h>
#include <Fuse.Scripting.V8.Internal.MaybeString.h>
#include <Fuse.Scripting.V8.Internal.MaybeUint.h>
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
#include <include/libplatform/libplatform.h>
#include <Uno.Bool.h>
#include <Uno.Delegate.h>
#include <Uno.Double.h>
#include <Uno.Int.h>
#include <Uno.Long.h>
#include <Uno.String.h>
#include <Uno.UInt.h>
static uType* TYPES[2];

namespace g{
namespace Fuse{
namespace Scripting{
namespace V8{
namespace Internal{

// C:\ProgramData\Uno\Packages\Fuse.Scripting.V8\0.18.8\$.uno(1376)
// ----------------------------------------------------------------

// internal extern struct Array :1376
// {
uStructType* Array_typeof()
{
    static uSStrong<uStructType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.ValueSize = sizeof(::v8::Local< ::v8::Array>);
    options.TypeSize = sizeof(uStructType);
    type = uStructType::New("Fuse.Scripting.V8.Internal.Array", options);
    return type;
}

// public uint Length() :1379
void Array__Length_fn(::v8::Local< ::v8::Array>* __this, uint32_t* __retval)
{
    *__retval = Array::Length(*__this);
}

// public static explicit operator Fuse.Scripting.V8.Internal.Object(Fuse.Scripting.V8.Internal.Array arr) :1382
void Array__op_Explicit_fn(::v8::Local< ::v8::Array>* arr, ::v8::Local< ::v8::Object>* __retval)
{
    *__retval = Array::op_Explicit(*arr);
}

// public static explicit operator Fuse.Scripting.V8.Internal.Value(Fuse.Scripting.V8.Internal.Array arr) :1387
void Array__op_Explicit1_fn(::v8::Local< ::v8::Array>* arr, ::v8::Local< ::v8::Value>* __retval)
{
    *__retval = Array::op_Explicit1(*arr);
}

// public uint Length() [instance] :1379
uint32_t Array::Length(::v8::Local< ::v8::Array> __this)
{
    return (*&__this)->Length();
}

// public static explicit operator Fuse.Scripting.V8.Internal.Object(Fuse.Scripting.V8.Internal.Array arr) [static] :1382
::v8::Local< ::v8::Object> Array::op_Explicit(::v8::Local< ::v8::Array> arr)
{
    return arr.As< ::v8::Object>();
}

// public static explicit operator Fuse.Scripting.V8.Internal.Value(Fuse.Scripting.V8.Internal.Array arr) [static] :1387
::v8::Local< ::v8::Value> Array::op_Explicit1(::v8::Local< ::v8::Array> arr)
{
    return arr.As< ::v8::Value>();
}
// }

// C:\ProgramData\Uno\Packages\Fuse.Scripting.V8\0.18.8\$.uno(1041)
// ----------------------------------------------------------------

// internal extern struct Context :1041
// {
uStructType* Context_typeof()
{
    static uSStrong<uStructType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.ValueSize = sizeof(::v8::Local< ::v8::Context>);
    options.TypeSize = sizeof(uStructType);
    type = uStructType::New("Fuse.Scripting.V8.Internal.Context", options);
    return type;
}

// public void Enter() :1049
void Context__Enter_fn(::v8::Local< ::v8::Context>* __this)
{
    Context::Enter(*__this);
}

// public void Exit() :1050
void Context__Exit_fn(::v8::Local< ::v8::Context>* __this)
{
    Context::Exit(*__this);
}

// public Fuse.Scripting.V8.Internal.Isolate GetIsolate() :1048
void Context__GetIsolate_fn(::v8::Local< ::v8::Context>* __this, ::v8::Isolate** __retval)
{
    *__retval = Context::GetIsolate(*__this);
}

// public Fuse.Scripting.V8.Internal.Object Global() :1051
void Context__Global_fn(::v8::Local< ::v8::Context>* __this, ::v8::Local< ::v8::Object>* __retval)
{
    *__retval = Context::Global(*__this);
}

// public static Fuse.Scripting.V8.Internal.Context New(Fuse.Scripting.V8.Internal.Isolate isolate) :1043
void Context__New1_fn(::v8::Isolate** isolate, ::v8::Local< ::v8::Context>* __retval)
{
    *__retval = Context::New1(*isolate);
}

// public void Enter() [instance] :1049
void Context::Enter(::v8::Local< ::v8::Context> __this)
{
    (*&__this)->Enter();
}

// public void Exit() [instance] :1050
void Context::Exit(::v8::Local< ::v8::Context> __this)
{
    (*&__this)->Exit();
}

// public Fuse.Scripting.V8.Internal.Isolate GetIsolate() [instance] :1048
::v8::Isolate* Context::GetIsolate(::v8::Local< ::v8::Context> __this)
{
    return (*&__this)->GetIsolate();
}

// public Fuse.Scripting.V8.Internal.Object Global() [instance] :1051
::v8::Local< ::v8::Object> Context::Global(::v8::Local< ::v8::Context> __this)
{
    return (*&__this)->Global();
}

// public static Fuse.Scripting.V8.Internal.Context New(Fuse.Scripting.V8.Internal.Isolate isolate) [static] :1043
::v8::Local< ::v8::Context> Context::New1(::v8::Isolate* isolate)
{
    return ::v8::Context::New(isolate);
}
// }

// C:\ProgramData\Uno\Packages\Fuse.Scripting.V8\0.18.8\$.uno(812)
// ---------------------------------------------------------------

// internal static extern class Debug :812
// {
uClassType* Debug_typeof()
{
    static uSStrong<uClassType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 1;
    options.TypeSize = sizeof(uClassType);
    type = uClassType::New("Fuse.Scripting.V8.Internal.Debug", options);
    ::TYPES[0] = ::g::Uno::Delegate_typeof();
    type->SetFields(0,
        ::g::Fuse::Scripting::V8::Internal::MessageHandler_typeof(), (uintptr_t)&::g::Fuse::Scripting::V8::Internal::Debug::_messageHandler_, uFieldFlagsStatic);
    return type;
}

// public static void CancelDebugBreak(Fuse.Scripting.V8.Internal.Isolate isolate) :819
void Debug__CancelDebugBreak_fn(::v8::Isolate** isolate)
{
    Debug::CancelDebugBreak(*isolate);
}

// public static bool CheckDebugBreak(Fuse.Scripting.V8.Internal.Isolate isolate) :824
void Debug__CheckDebugBreak_fn(::v8::Isolate** isolate, bool* __retval)
{
    *__retval = Debug::CheckDebugBreak(*isolate);
}

// public static void DebugBreak(Fuse.Scripting.V8.Internal.Isolate isolate) :814
void Debug__DebugBreak_fn(::v8::Isolate** isolate)
{
    Debug::DebugBreak(*isolate);
}

// public static void ProcessDebugMessages() :849
void Debug__ProcessDebugMessages_fn()
{
    Debug::ProcessDebugMessages();
}

// public static void SendCommand(Fuse.Scripting.V8.Internal.Isolate isolate, string command) :844
void Debug__SendCommand_fn(::v8::Isolate** isolate, uString* command)
{
    Debug::SendCommand(*isolate, command);
}

// public static void SetMessageHandler(Fuse.Scripting.V8.Internal.MessageHandler handler) :831
void Debug__SetMessageHandler_fn(uDelegate* handler)
{
    Debug::SetMessageHandler(handler);
}

uSStrong<uDelegate*> Debug::_messageHandler_;

// public static void CancelDebugBreak(Fuse.Scripting.V8.Internal.Isolate isolate) [static] :819
void Debug::CancelDebugBreak(::v8::Isolate* isolate)
{
    ::v8::Debug::CancelDebugBreak(isolate);
}

// public static bool CheckDebugBreak(Fuse.Scripting.V8.Internal.Isolate isolate) [static] :824
bool Debug::CheckDebugBreak(::v8::Isolate* isolate)
{
    return ::v8::Debug::CheckDebugBreak(isolate);
}

// public static void DebugBreak(Fuse.Scripting.V8.Internal.Isolate isolate) [static] :814
void Debug::DebugBreak(::v8::Isolate* isolate)
{
    ::v8::Debug::DebugBreak(isolate);
}

// public static void ProcessDebugMessages() [static] :849
void Debug::ProcessDebugMessages()
{
    ::v8::Debug::ProcessDebugMessages();
}

// public static void SendCommand(Fuse.Scripting.V8.Internal.Isolate isolate, string command) [static] :844
void Debug::SendCommand(::v8::Isolate* isolate, uString* command)
{
    ::v8::Debug::SendCommand(isolate, command->Ptr(), command->Length());
}

// public static void SetMessageHandler(Fuse.Scripting.V8.Internal.MessageHandler handler) [static] :831
void Debug::SetMessageHandler(uDelegate* handler)
{
    Debug::_messageHandler() = handler;

    if (::g::Uno::Delegate::op_Inequality(Debug::_messageHandler(), NULL))
        ::v8::Debug::SetMessageHandler([] (const ::v8::Debug::Message& message) { Debug::_messageHandler()->InvokeVoid(uCRef(&(::v8::Debug::Message&)message)); });
    else
        ::v8::Debug::SetMessageHandler(nullptr);
}
// }

// C:\ProgramData\Uno\Packages\Fuse.Scripting.V8\0.18.8\$.uno(1331)
// ----------------------------------------------------------------

// internal extern struct Function :1331
// {
uStructType* Function_typeof()
{
    static uSStrong<uStructType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.ValueSize = sizeof(::v8::Local< ::v8::Function>);
    options.TypeSize = sizeof(uStructType);
    type = uStructType::New("Fuse.Scripting.V8.Internal.Function", options);
    return type;
}

// public extern Fuse.Scripting.V8.Internal.MaybeValue Call(Fuse.Scripting.V8.Internal.Context context, Fuse.Scripting.V8.Internal.Value receiver, Fuse.Scripting.V8.Internal.Value[] args) :1337
void Function__Call_fn(::v8::Local< ::v8::Function>* __this, ::v8::Local< ::v8::Context>* context_, ::v8::Local< ::v8::Value>* receiver_, uArray* args_, ::v8::MaybeLocal< ::v8::Value> * __retval)
{
    *__retval = Function::Call(*__this, *context_, *receiver_, args_);
}

// public static extern Fuse.Scripting.V8.Internal.Function FromDelegate(Fuse.Scripting.V8.Internal.Isolate isolate, Fuse.Scripting.Callback callback) :1351
void Function__FromDelegate_fn(::v8::Isolate** isolate_, uDelegate* callback_, ::v8::Local< ::v8::Function>* __retval)
{
    *__retval = Function::FromDelegate(*isolate_, callback_);
}

// public extern Fuse.Scripting.V8.Internal.MaybeObject NewInstance(Fuse.Scripting.V8.Internal.Context context, Fuse.Scripting.V8.Internal.Value[] args) :1335
void Function__NewInstance_fn(::v8::Local< ::v8::Function>* __this, ::v8::Local< ::v8::Context>* context_, uArray* args_, ::v8::MaybeLocal< ::v8::Object> * __retval)
{
    *__retval = Function::NewInstance(*__this, *context_, args_);
}

// public static explicit operator Fuse.Scripting.V8.Internal.Object(Fuse.Scripting.V8.Internal.Function fun) :1340
void Function__op_Explicit_fn(::v8::Local< ::v8::Function>* fun, ::v8::Local< ::v8::Object>* __retval)
{
    *__retval = Function::op_Explicit(*fun);
}

// public static explicit operator Fuse.Scripting.V8.Internal.Value(Fuse.Scripting.V8.Internal.Function fun) :1345
void Function__op_Explicit1_fn(::v8::Local< ::v8::Function>* fun, ::v8::Local< ::v8::Value>* __retval)
{
    *__retval = Function::op_Explicit1(*fun);
}

// public extern Fuse.Scripting.V8.Internal.MaybeValue Call(Fuse.Scripting.V8.Internal.Context context, Fuse.Scripting.V8.Internal.Value receiver, Fuse.Scripting.V8.Internal.Value[] args) [instance] :1337
::v8::MaybeLocal< ::v8::Value>  Function::Call(::v8::Local< ::v8::Function> __this, ::v8::Local< ::v8::Context> context_, ::v8::Local< ::v8::Value> receiver_, uArray* args_)
{
    // ::v8::HandleScope handleScope(::g::Fuse::Scripting::V8::Internal::Context::GetIsolate(context_));
    int argc = args_->Length();
    ::v8::Local< ::v8::Value>* argv = new ::v8::Local< ::v8::Value>[argc];
    for (int i = 0; i < argc; ++i)
    {
        // TODO use UXL array syntax when that is available
        argv[i] = args_->Item< ::v8::Local< ::v8::Value>>(i);
    }
    ::v8::MaybeLocal< ::v8::Value>  val = (*&__this)->Call(context_, receiver_, argc, argv);
    delete[] argv;
    return val;
}

// public extern Fuse.Scripting.V8.Internal.MaybeObject NewInstance(Fuse.Scripting.V8.Internal.Context context, Fuse.Scripting.V8.Internal.Value[] args) [instance] :1335
::v8::MaybeLocal< ::v8::Object>  Function::NewInstance(::v8::Local< ::v8::Function> __this, ::v8::Local< ::v8::Context> context_, uArray* args_)
{
    // ::v8::HandleScope handleScope(::g::Fuse::Scripting::V8::Internal::Context::GetIsolate(context_));
    int argc = args_->Length();
    ::v8::Local< ::v8::Value>* argv = new ::v8::Local< ::v8::Value>[argc];
    for (int i = 0; i < argc; ++i)
    {
        // TODO use UXL array syntax when that is available
        argv[i] = args_->Item< ::v8::Local< ::v8::Value>>(i);
    }
    ::v8::MaybeLocal< ::v8::Object>  obj = (*&__this)->NewInstance(context_, argc, argv);
    delete[] argv;
    return obj;
}

// public static extern Fuse.Scripting.V8.Internal.Function FromDelegate(Fuse.Scripting.V8.Internal.Isolate isolate, Fuse.Scripting.Callback callback) [static] :1351
::v8::Local< ::v8::Function> Function::FromDelegate(::v8::Isolate* isolate_, uDelegate* callback_)
{
    // ::v8::HandleScope handleScope(isolate_);
    
    uRetain(callback_);
    ::v8::Local< ::v8::External> localcb =
        ::v8::External::New(isolate_, callback_);
    ::v8::Persistent< ::v8::External> persistentcb(isolate_, localcb);
    
    persistentcb.SetWeak(
        callback_,
        [] (const ::v8::WeakCallbackInfo< ::uDelegate>& data)
        {
            uRelease(data.GetParameter());
        },
        ::v8::WeakCallbackType::kParameter);
    
    ::v8::Local< ::v8::Function> function = ::v8::Function::New(
        isolate_->GetCurrentContext(),
        [] (const ::v8::FunctionCallbackInfo< ::v8::Value>& info)
        {
            ::v8::HandleScope handleScope(info.GetIsolate());
            ::v8::TryCatch tryCatch(info.GetIsolate());
            // TODO: Change this to use UXL when array syntax is available for it
            uArray* wrappedArgs = ::uNewArray(uObject_typeof(), info.Length());
            for (int i = 0; i < info.Length(); ++i)
            {
                wrappedArgs->Strong< uObject*>(i) =
                    ::g::Fuse::Scripting::V8::Marshaller::Wrap1(info[i], &tryCatch);
            }
            uDelegate* callback =
                (uDelegate*)info.Data().As< ::v8::External>()->Value();
            uObject* result =
                callback->Invoke(1, wrappedArgs);
            ::v8::Local< ::v8::Value> unwrappedResult =
                ::g::Fuse::Scripting::V8::Marshaller::Unwrap(result);
            info.GetReturnValue().Set(unwrappedResult);
        },
        localcb.As< ::v8::Value>()).ToLocalChecked();
    
    return function;
}

// public static explicit operator Fuse.Scripting.V8.Internal.Object(Fuse.Scripting.V8.Internal.Function fun) [static] :1340
::v8::Local< ::v8::Object> Function::op_Explicit(::v8::Local< ::v8::Function> fun)
{
    return fun.As< ::v8::Object>();
}

// public static explicit operator Fuse.Scripting.V8.Internal.Value(Fuse.Scripting.V8.Internal.Function fun) [static] :1345
::v8::Local< ::v8::Value> Function::op_Explicit1(::v8::Local< ::v8::Function> fun)
{
    return fun.As< ::v8::Value>();
}
// }

// C:\ProgramData\Uno\Packages\Fuse.Scripting.V8\0.18.8\$.uno(1010)
// ----------------------------------------------------------------

// internal extern struct Isolate :1010
// {
uStructType* Isolate_typeof()
{
    static uSStrong<uStructType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.ValueSize = sizeof(::v8::Isolate*);
    options.TypeSize = sizeof(uStructType);
    type = uStructType::New("Fuse.Scripting.V8.Internal.Isolate", options);
    return type;
}

// public void Dispose() :1033
void Isolate__Dispose_fn(::v8::Isolate** __this)
{
    Isolate::Dispose(*__this);
}

// public void Enter() :1030
void Isolate__Enter_fn(::v8::Isolate** __this)
{
    Isolate::Enter(*__this);
}

// public void Exit() :1031
void Isolate__Exit_fn(::v8::Isolate** __this)
{
    Isolate::Exit(*__this);
}

// public static Fuse.Scripting.V8.Internal.Isolate GetCurrent() :1020
void Isolate__GetCurrent_fn(::v8::Isolate** __retval)
{
    *__retval = Isolate::GetCurrent();
}

// public Fuse.Scripting.V8.Internal.Context GetCurrentContext() :1025
void Isolate__GetCurrentContext_fn(::v8::Isolate** __this, ::v8::Local< ::v8::Context>* __retval)
{
    *__retval = Isolate::GetCurrentContext(*__this);
}

// public static Fuse.Scripting.V8.Internal.Isolate New() :1012
void Isolate__New1_fn(::v8::Isolate** __retval)
{
    *__retval = Isolate::New1();
}

// public void Dispose() [instance] :1033
void Isolate::Dispose(::v8::Isolate* __this)
{
    (*&__this)->Dispose();
}

// public void Enter() [instance] :1030
void Isolate::Enter(::v8::Isolate* __this)
{
    (*&__this)->Enter();
}

// public void Exit() [instance] :1031
void Isolate::Exit(::v8::Isolate* __this)
{
    (*&__this)->Exit();
}

// public Fuse.Scripting.V8.Internal.Context GetCurrentContext() [instance] :1025
::v8::Local< ::v8::Context> Isolate::GetCurrentContext(::v8::Isolate* __this)
{
    return (*&__this)->GetCurrentContext();
}

// public static Fuse.Scripting.V8.Internal.Isolate GetCurrent() [static] :1020
::v8::Isolate* Isolate::GetCurrent()
{
    return ::v8::Isolate::GetCurrent();
}

// public static Fuse.Scripting.V8.Internal.Isolate New() [static] :1012
::v8::Isolate* Isolate::New1()
{
    static ::ArrayBufferAllocator arrayBufferAllocator;
    ::v8::Isolate::CreateParams createParams;
    createParams.array_buffer_allocator = &arrayBufferAllocator;
    return ::v8::Isolate::New(createParams);
}
// }

// C:\ProgramData\Uno\Packages\Fuse.Scripting.V8\0.18.8\$.uno(901)
// ---------------------------------------------------------------

// internal extern struct MaybeArray :901
// {
uStructType* MaybeArray_typeof()
{
    static uSStrong<uStructType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.ValueSize = sizeof(::v8::MaybeLocal< ::v8::Array> );
    options.TypeSize = sizeof(uStructType);
    type = uStructType::New("Fuse.Scripting.V8.Internal.MaybeArray", options);
    return type;
}

// public Fuse.Scripting.V8.Internal.Array FromMaybe(Fuse.Scripting.V8.Internal.Array defaultValue) :905
void MaybeArray__FromMaybe_fn(::v8::MaybeLocal< ::v8::Array> * __this, ::v8::Local< ::v8::Array>* defaultValue, ::v8::Local< ::v8::Array>* __retval)
{
    *__retval = MaybeArray::FromMaybe(*__this, *defaultValue);
}

// public bool IsEmpty() :903
void MaybeArray__IsEmpty_fn(::v8::MaybeLocal< ::v8::Array> * __this, bool* __retval)
{
    *__retval = MaybeArray::IsEmpty(*__this);
}

// public Fuse.Scripting.V8.Internal.Array ToLocalChecked() :904
void MaybeArray__ToLocalChecked_fn(::v8::MaybeLocal< ::v8::Array> * __this, ::v8::Local< ::v8::Array>* __retval)
{
    *__retval = MaybeArray::ToLocalChecked(*__this);
}

// public Fuse.Scripting.V8.Internal.Array FromMaybe(Fuse.Scripting.V8.Internal.Array defaultValue) [instance] :905
::v8::Local< ::v8::Array> MaybeArray::FromMaybe(::v8::MaybeLocal< ::v8::Array>  __this, ::v8::Local< ::v8::Array> defaultValue)
{
    return (&__this)->FromMaybe(defaultValue);
}

// public bool IsEmpty() [instance] :903
bool MaybeArray::IsEmpty(::v8::MaybeLocal< ::v8::Array>  __this)
{
    return (&__this)->IsEmpty();
}

// public Fuse.Scripting.V8.Internal.Array ToLocalChecked() [instance] :904
::v8::Local< ::v8::Array> MaybeArray::ToLocalChecked(::v8::MaybeLocal< ::v8::Array>  __this)
{
    return (&__this)->ToLocalChecked();
}
// }

// C:\ProgramData\Uno\Packages\Fuse.Scripting.V8\0.18.8\$.uno(910)
// ---------------------------------------------------------------

// internal extern struct MaybeBool :910
// {
uStructType* MaybeBool_typeof()
{
    static uSStrong<uStructType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.ValueSize = sizeof(::v8::Maybe< bool>);
    options.TypeSize = sizeof(uStructType);
    type = uStructType::New("Fuse.Scripting.V8.Internal.MaybeBool", options);
    return type;
}

// public bool FromJust() :914
void MaybeBool__FromJust_fn(::v8::Maybe< bool>* __this, bool* __retval)
{
    *__retval = MaybeBool::FromJust(*__this);
}

// public bool FromMaybe(bool defaultValue) :915
void MaybeBool__FromMaybe_fn(::v8::Maybe< bool>* __this, bool* defaultValue, bool* __retval)
{
    *__retval = MaybeBool::FromMaybe(*__this, *defaultValue);
}

// public bool IsJust() :913
void MaybeBool__IsJust_fn(::v8::Maybe< bool>* __this, bool* __retval)
{
    *__retval = MaybeBool::IsJust(*__this);
}

// public bool IsNothing() :912
void MaybeBool__IsNothing_fn(::v8::Maybe< bool>* __this, bool* __retval)
{
    *__retval = MaybeBool::IsNothing(*__this);
}

// public bool FromJust() [instance] :914
bool MaybeBool::FromJust(::v8::Maybe< bool> __this)
{
    return (&__this)->FromJust();
}

// public bool FromMaybe(bool defaultValue) [instance] :915
bool MaybeBool::FromMaybe(::v8::Maybe< bool> __this, bool defaultValue)
{
    return (&__this)->FromMaybe(defaultValue);
}

// public bool IsJust() [instance] :913
bool MaybeBool::IsJust(::v8::Maybe< bool> __this)
{
    return (&__this)->IsJust();
}

// public bool IsNothing() [instance] :912
bool MaybeBool::IsNothing(::v8::Maybe< bool> __this)
{
    return (&__this)->IsNothing();
}
// }

// C:\ProgramData\Uno\Packages\Fuse.Scripting.V8\0.18.8\$.uno(940)
// ---------------------------------------------------------------

// internal extern struct MaybeDouble :940
// {
uStructType* MaybeDouble_typeof()
{
    static uSStrong<uStructType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.ValueSize = sizeof(::v8::Maybe< double>);
    options.TypeSize = sizeof(uStructType);
    type = uStructType::New("Fuse.Scripting.V8.Internal.MaybeDouble", options);
    return type;
}

// public double FromJust() :944
void MaybeDouble__FromJust_fn(::v8::Maybe< double>* __this, double* __retval)
{
    *__retval = MaybeDouble::FromJust(*__this);
}

// public double FromMaybe(double defaultValue) :945
void MaybeDouble__FromMaybe_fn(::v8::Maybe< double>* __this, double* defaultValue, double* __retval)
{
    *__retval = MaybeDouble::FromMaybe(*__this, *defaultValue);
}

// public bool IsJust() :943
void MaybeDouble__IsJust_fn(::v8::Maybe< double>* __this, bool* __retval)
{
    *__retval = MaybeDouble::IsJust(*__this);
}

// public bool IsNothing() :942
void MaybeDouble__IsNothing_fn(::v8::Maybe< double>* __this, bool* __retval)
{
    *__retval = MaybeDouble::IsNothing(*__this);
}

// public double FromJust() [instance] :944
double MaybeDouble::FromJust(::v8::Maybe< double> __this)
{
    return (&__this)->FromJust();
}

// public double FromMaybe(double defaultValue) [instance] :945
double MaybeDouble::FromMaybe(::v8::Maybe< double> __this, double defaultValue)
{
    return (&__this)->FromMaybe(defaultValue);
}

// public bool IsJust() [instance] :943
bool MaybeDouble::IsJust(::v8::Maybe< double> __this)
{
    return (&__this)->IsJust();
}

// public bool IsNothing() [instance] :942
bool MaybeDouble::IsNothing(::v8::Maybe< double> __this)
{
    return (&__this)->IsNothing();
}
// }

// C:\ProgramData\Uno\Packages\Fuse.Scripting.V8\0.18.8\$.uno(920)
// ---------------------------------------------------------------

// internal extern struct MaybeInt :920
// {
uStructType* MaybeInt_typeof()
{
    static uSStrong<uStructType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.ValueSize = sizeof(::v8::Maybe< int>);
    options.TypeSize = sizeof(uStructType);
    type = uStructType::New("Fuse.Scripting.V8.Internal.MaybeInt", options);
    return type;
}

// public int FromJust() :924
void MaybeInt__FromJust_fn(::v8::Maybe< int>* __this, int* __retval)
{
    *__retval = MaybeInt::FromJust(*__this);
}

// public int FromMaybe(int defaultValue) :925
void MaybeInt__FromMaybe_fn(::v8::Maybe< int>* __this, int* defaultValue, int* __retval)
{
    *__retval = MaybeInt::FromMaybe(*__this, *defaultValue);
}

// public bool IsJust() :923
void MaybeInt__IsJust_fn(::v8::Maybe< int>* __this, bool* __retval)
{
    *__retval = MaybeInt::IsJust(*__this);
}

// public bool IsNothing() :922
void MaybeInt__IsNothing_fn(::v8::Maybe< int>* __this, bool* __retval)
{
    *__retval = MaybeInt::IsNothing(*__this);
}

// public int FromJust() [instance] :924
int MaybeInt::FromJust(::v8::Maybe< int> __this)
{
    return (&__this)->FromJust();
}

// public int FromMaybe(int defaultValue) [instance] :925
int MaybeInt::FromMaybe(::v8::Maybe< int> __this, int defaultValue)
{
    return (&__this)->FromMaybe(defaultValue);
}

// public bool IsJust() [instance] :923
bool MaybeInt::IsJust(::v8::Maybe< int> __this)
{
    return (&__this)->IsJust();
}

// public bool IsNothing() [instance] :922
bool MaybeInt::IsNothing(::v8::Maybe< int> __this)
{
    return (&__this)->IsNothing();
}
// }

// C:\ProgramData\Uno\Packages\Fuse.Scripting.V8\0.18.8\$.uno(930)
// ---------------------------------------------------------------

// internal extern struct MaybeLong :930
// {
uStructType* MaybeLong_typeof()
{
    static uSStrong<uStructType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.ValueSize = sizeof(::v8::Maybe< int64_t>);
    options.TypeSize = sizeof(uStructType);
    type = uStructType::New("Fuse.Scripting.V8.Internal.MaybeLong", options);
    return type;
}

// public long FromJust() :934
void MaybeLong__FromJust_fn(::v8::Maybe< int64_t>* __this, int64_t* __retval)
{
    *__retval = MaybeLong::FromJust(*__this);
}

// public long FromMaybe(long defaultValue) :935
void MaybeLong__FromMaybe_fn(::v8::Maybe< int64_t>* __this, int64_t* defaultValue, int64_t* __retval)
{
    *__retval = MaybeLong::FromMaybe(*__this, *defaultValue);
}

// public bool IsJust() :933
void MaybeLong__IsJust_fn(::v8::Maybe< int64_t>* __this, bool* __retval)
{
    *__retval = MaybeLong::IsJust(*__this);
}

// public bool IsNothing() :932
void MaybeLong__IsNothing_fn(::v8::Maybe< int64_t>* __this, bool* __retval)
{
    *__retval = MaybeLong::IsNothing(*__this);
}

// public long FromJust() [instance] :934
int64_t MaybeLong::FromJust(::v8::Maybe< int64_t> __this)
{
    return (&__this)->FromJust();
}

// public long FromMaybe(long defaultValue) [instance] :935
int64_t MaybeLong::FromMaybe(::v8::Maybe< int64_t> __this, int64_t defaultValue)
{
    return (&__this)->FromMaybe(defaultValue);
}

// public bool IsJust() [instance] :933
bool MaybeLong::IsJust(::v8::Maybe< int64_t> __this)
{
    return (&__this)->IsJust();
}

// public bool IsNothing() [instance] :932
bool MaybeLong::IsNothing(::v8::Maybe< int64_t> __this)
{
    return (&__this)->IsNothing();
}
// }

// C:\ProgramData\Uno\Packages\Fuse.Scripting.V8\0.18.8\$.uno(892)
// ---------------------------------------------------------------

// internal extern struct MaybeObject :892
// {
uStructType* MaybeObject_typeof()
{
    static uSStrong<uStructType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.ValueSize = sizeof(::v8::MaybeLocal< ::v8::Object> );
    options.TypeSize = sizeof(uStructType);
    type = uStructType::New("Fuse.Scripting.V8.Internal.MaybeObject", options);
    return type;
}

// public Fuse.Scripting.V8.Internal.Object FromMaybe(Fuse.Scripting.V8.Internal.Object defaultValue) :896
void MaybeObject__FromMaybe_fn(::v8::MaybeLocal< ::v8::Object> * __this, ::v8::Local< ::v8::Object>* defaultValue, ::v8::Local< ::v8::Object>* __retval)
{
    *__retval = MaybeObject::FromMaybe(*__this, *defaultValue);
}

// public bool IsEmpty() :894
void MaybeObject__IsEmpty_fn(::v8::MaybeLocal< ::v8::Object> * __this, bool* __retval)
{
    *__retval = MaybeObject::IsEmpty(*__this);
}

// public Fuse.Scripting.V8.Internal.Object ToLocalChecked() :895
void MaybeObject__ToLocalChecked_fn(::v8::MaybeLocal< ::v8::Object> * __this, ::v8::Local< ::v8::Object>* __retval)
{
    *__retval = MaybeObject::ToLocalChecked(*__this);
}

// public Fuse.Scripting.V8.Internal.Object FromMaybe(Fuse.Scripting.V8.Internal.Object defaultValue) [instance] :896
::v8::Local< ::v8::Object> MaybeObject::FromMaybe(::v8::MaybeLocal< ::v8::Object>  __this, ::v8::Local< ::v8::Object> defaultValue)
{
    return (&__this)->FromMaybe(defaultValue);
}

// public bool IsEmpty() [instance] :894
bool MaybeObject::IsEmpty(::v8::MaybeLocal< ::v8::Object>  __this)
{
    return (&__this)->IsEmpty();
}

// public Fuse.Scripting.V8.Internal.Object ToLocalChecked() [instance] :895
::v8::Local< ::v8::Object> MaybeObject::ToLocalChecked(::v8::MaybeLocal< ::v8::Object>  __this)
{
    return (&__this)->ToLocalChecked();
}
// }

// C:\ProgramData\Uno\Packages\Fuse.Scripting.V8\0.18.8\$.uno(874)
// ---------------------------------------------------------------

// internal extern struct MaybeString :874
// {
uStructType* MaybeString_typeof()
{
    static uSStrong<uStructType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.ValueSize = sizeof(::v8::MaybeLocal< ::v8::String> );
    options.TypeSize = sizeof(uStructType);
    type = uStructType::New("Fuse.Scripting.V8.Internal.MaybeString", options);
    return type;
}

// public Fuse.Scripting.V8.Internal.String FromMaybe(Fuse.Scripting.V8.Internal.String defaultValue) :878
void MaybeString__FromMaybe_fn(::v8::MaybeLocal< ::v8::String> * __this, ::v8::Local< ::v8::String>* defaultValue, ::v8::Local< ::v8::String>* __retval)
{
    *__retval = MaybeString::FromMaybe(*__this, *defaultValue);
}

// public bool IsEmpty() :876
void MaybeString__IsEmpty_fn(::v8::MaybeLocal< ::v8::String> * __this, bool* __retval)
{
    *__retval = MaybeString::IsEmpty(*__this);
}

// public Fuse.Scripting.V8.Internal.String ToLocalChecked() :877
void MaybeString__ToLocalChecked_fn(::v8::MaybeLocal< ::v8::String> * __this, ::v8::Local< ::v8::String>* __retval)
{
    *__retval = MaybeString::ToLocalChecked(*__this);
}

// public Fuse.Scripting.V8.Internal.String FromMaybe(Fuse.Scripting.V8.Internal.String defaultValue) [instance] :878
::v8::Local< ::v8::String> MaybeString::FromMaybe(::v8::MaybeLocal< ::v8::String>  __this, ::v8::Local< ::v8::String> defaultValue)
{
    return (&__this)->FromMaybe(defaultValue);
}

// public bool IsEmpty() [instance] :876
bool MaybeString::IsEmpty(::v8::MaybeLocal< ::v8::String>  __this)
{
    return (&__this)->IsEmpty();
}

// public Fuse.Scripting.V8.Internal.String ToLocalChecked() [instance] :877
::v8::Local< ::v8::String> MaybeString::ToLocalChecked(::v8::MaybeLocal< ::v8::String>  __this)
{
    return (&__this)->ToLocalChecked();
}
// }

// C:\ProgramData\Uno\Packages\Fuse.Scripting.V8\0.18.8\$.uno(950)
// ---------------------------------------------------------------

// internal extern struct MaybeUint :950
// {
uStructType* MaybeUint_typeof()
{
    static uSStrong<uStructType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.ValueSize = sizeof(::v8::Maybe< uint32_t>);
    options.TypeSize = sizeof(uStructType);
    type = uStructType::New("Fuse.Scripting.V8.Internal.MaybeUint", options);
    return type;
}

// public uint FromJust() :954
void MaybeUint__FromJust_fn(::v8::Maybe< uint32_t>* __this, uint32_t* __retval)
{
    *__retval = MaybeUint::FromJust(*__this);
}

// public uint FromMaybe(uint defaultValue) :955
void MaybeUint__FromMaybe_fn(::v8::Maybe< uint32_t>* __this, uint32_t* defaultValue, uint32_t* __retval)
{
    *__retval = MaybeUint::FromMaybe(*__this, *defaultValue);
}

// public bool IsJust() :953
void MaybeUint__IsJust_fn(::v8::Maybe< uint32_t>* __this, bool* __retval)
{
    *__retval = MaybeUint::IsJust(*__this);
}

// public bool IsNothing() :952
void MaybeUint__IsNothing_fn(::v8::Maybe< uint32_t>* __this, bool* __retval)
{
    *__retval = MaybeUint::IsNothing(*__this);
}

// public uint FromJust() [instance] :954
uint32_t MaybeUint::FromJust(::v8::Maybe< uint32_t> __this)
{
    return (&__this)->FromJust();
}

// public uint FromMaybe(uint defaultValue) [instance] :955
uint32_t MaybeUint::FromMaybe(::v8::Maybe< uint32_t> __this, uint32_t defaultValue)
{
    return (&__this)->FromMaybe(defaultValue);
}

// public bool IsJust() [instance] :953
bool MaybeUint::IsJust(::v8::Maybe< uint32_t> __this)
{
    return (&__this)->IsJust();
}

// public bool IsNothing() [instance] :952
bool MaybeUint::IsNothing(::v8::Maybe< uint32_t> __this)
{
    return (&__this)->IsNothing();
}
// }

// C:\ProgramData\Uno\Packages\Fuse.Scripting.V8\0.18.8\$.uno(883)
// ---------------------------------------------------------------

// internal extern struct MaybeValue :883
// {
uStructType* MaybeValue_typeof()
{
    static uSStrong<uStructType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.ValueSize = sizeof(::v8::MaybeLocal< ::v8::Value> );
    options.TypeSize = sizeof(uStructType);
    type = uStructType::New("Fuse.Scripting.V8.Internal.MaybeValue", options);
    return type;
}

// public Fuse.Scripting.V8.Internal.Value FromMaybe(Fuse.Scripting.V8.Internal.Value defaultValue) :887
void MaybeValue__FromMaybe_fn(::v8::MaybeLocal< ::v8::Value> * __this, ::v8::Local< ::v8::Value>* defaultValue, ::v8::Local< ::v8::Value>* __retval)
{
    *__retval = MaybeValue::FromMaybe(*__this, *defaultValue);
}

// public bool IsEmpty() :885
void MaybeValue__IsEmpty_fn(::v8::MaybeLocal< ::v8::Value> * __this, bool* __retval)
{
    *__retval = MaybeValue::IsEmpty(*__this);
}

// public Fuse.Scripting.V8.Internal.Value ToLocalChecked() :886
void MaybeValue__ToLocalChecked_fn(::v8::MaybeLocal< ::v8::Value> * __this, ::v8::Local< ::v8::Value>* __retval)
{
    *__retval = MaybeValue::ToLocalChecked(*__this);
}

// public Fuse.Scripting.V8.Internal.Value FromMaybe(Fuse.Scripting.V8.Internal.Value defaultValue) [instance] :887
::v8::Local< ::v8::Value> MaybeValue::FromMaybe(::v8::MaybeLocal< ::v8::Value>  __this, ::v8::Local< ::v8::Value> defaultValue)
{
    return (&__this)->FromMaybe(defaultValue);
}

// public bool IsEmpty() [instance] :885
bool MaybeValue::IsEmpty(::v8::MaybeLocal< ::v8::Value>  __this)
{
    return (&__this)->IsEmpty();
}

// public Fuse.Scripting.V8.Internal.Value ToLocalChecked() [instance] :886
::v8::Local< ::v8::Value> MaybeValue::ToLocalChecked(::v8::MaybeLocal< ::v8::Value>  __this)
{
    return (&__this)->ToLocalChecked();
}
// }

// C:\ProgramData\Uno\Packages\Fuse.Scripting.V8\0.18.8\$.uno(1415)
// ----------------------------------------------------------------

// internal extern struct Message :1415
// {
uStructType* Message_typeof()
{
    static uSStrong<uStructType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.ValueSize = sizeof(::v8::Local< ::v8::Message>);
    options.TypeSize = sizeof(uStructType);
    type = uStructType::New("Fuse.Scripting.V8.Internal.Message", options);
    return type;
}

// public Fuse.Scripting.V8.Internal.String Get() :1417
void Message__Get_fn(::v8::Local< ::v8::Message>* __this, ::v8::Local< ::v8::String>* __retval)
{
    *__retval = Message::Get(*__this);
}

// public Fuse.Scripting.V8.Internal.MaybeInt GetEndColumn(Fuse.Scripting.V8.Internal.Context context) :1432
void Message__GetEndColumn_fn(::v8::Local< ::v8::Message>* __this, ::v8::Local< ::v8::Context>* context, ::v8::Maybe< int>* __retval)
{
    *__retval = Message::GetEndColumn(*__this, *context);
}

// public Fuse.Scripting.V8.Internal.MaybeInt GetLineNumber(Fuse.Scripting.V8.Internal.Context context) :1422
void Message__GetLineNumber_fn(::v8::Local< ::v8::Message>* __this, ::v8::Local< ::v8::Context>* context, ::v8::Maybe< int>* __retval)
{
    *__retval = Message::GetLineNumber(*__this, *context);
}

// public Fuse.Scripting.V8.Internal.Value GetScriptOriginResourceName() :1437
void Message__GetScriptOriginResourceName_fn(::v8::Local< ::v8::Message>* __this, ::v8::Local< ::v8::Value>* __retval)
{
    *__retval = Message::GetScriptOriginResourceName(*__this);
}

// public Fuse.Scripting.V8.Internal.MaybeInt GetStartColumn(Fuse.Scripting.V8.Internal.Context context) :1427
void Message__GetStartColumn_fn(::v8::Local< ::v8::Message>* __this, ::v8::Local< ::v8::Context>* context, ::v8::Maybe< int>* __retval)
{
    *__retval = Message::GetStartColumn(*__this, *context);
}

// public Fuse.Scripting.V8.Internal.String Get() [instance] :1417
::v8::Local< ::v8::String> Message::Get(::v8::Local< ::v8::Message> __this)
{
    return (*&__this)->Get();
}

// public Fuse.Scripting.V8.Internal.MaybeInt GetEndColumn(Fuse.Scripting.V8.Internal.Context context) [instance] :1432
::v8::Maybe< int> Message::GetEndColumn(::v8::Local< ::v8::Message> __this, ::v8::Local< ::v8::Context> context)
{
    return (*&__this)->GetEndColumn(context);
}

// public Fuse.Scripting.V8.Internal.MaybeInt GetLineNumber(Fuse.Scripting.V8.Internal.Context context) [instance] :1422
::v8::Maybe< int> Message::GetLineNumber(::v8::Local< ::v8::Message> __this, ::v8::Local< ::v8::Context> context)
{
    return (*&__this)->GetLineNumber(context);
}

// public Fuse.Scripting.V8.Internal.Value GetScriptOriginResourceName() [instance] :1437
::v8::Local< ::v8::Value> Message::GetScriptOriginResourceName(::v8::Local< ::v8::Message> __this)
{
    return (*&__this)->GetScriptOrigin().ResourceName();
}

// public Fuse.Scripting.V8.Internal.MaybeInt GetStartColumn(Fuse.Scripting.V8.Internal.Context context) [instance] :1427
::v8::Maybe< int> Message::GetStartColumn(::v8::Local< ::v8::Message> __this, ::v8::Local< ::v8::Context> context)
{
    return (*&__this)->GetStartColumn(context);
}
// }

// C:\ProgramData\Uno\Packages\Fuse.Scripting.V8\0.18.8\$.uno(856)
// ---------------------------------------------------------------

// public struct Debug.Message :856
// {
uStructType* Debug__Message_typeof()
{
    static uSStrong<uStructType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.ValueSize = sizeof(::v8::Debug::Message*);
    options.TypeSize = sizeof(uStructType);
    type = uStructType::New("Fuse.Scripting.V8.Internal.Debug.Message", options);
    type->Reflection.SetFunctions(1,
        new uFunction("GetJSON", NULL, (void*)Debug__Message__GetJSON_fn, 0, false, ::g::Fuse::Scripting::V8::Internal::String_typeof(), 0));
    return type;
}

// public Fuse.Scripting.V8.Internal.String GetJSON() :858
void Debug__Message__GetJSON_fn(::v8::Debug::Message** __this, ::v8::Local< ::v8::String>* __retval)
{
    *__retval = Debug__Message::GetJSON(*__this);
}

// public Fuse.Scripting.V8.Internal.String GetJSON() [instance] :858
::v8::Local< ::v8::String> Debug__Message::GetJSON(::v8::Debug::Message* __this)
{
    return (*&__this)->GetJSON();
}
// }

// C:\ProgramData\Uno\Packages\Fuse.Scripting.V8\0.18.8\$.uno(809)
// ---------------------------------------------------------------

// internal extern delegate void MessageHandler(Fuse.Scripting.V8.Internal.Debug.Message message) :809
uDelegateType* MessageHandler_typeof()
{
    static uSStrong<uDelegateType*> type;
    if (type != NULL) return type;

    type = uDelegateType::New("Fuse.Scripting.V8.Internal.MessageHandler", 1, 0);
    type->SetSignature(uVoid_typeof(),
        ::g::Fuse::Scripting::V8::Internal::Debug__Message_typeof());
    return type;
}

// C:\ProgramData\Uno\Packages\Fuse.Scripting.V8\0.18.8\$.uno(1239)
// ----------------------------------------------------------------

// internal extern struct Object :1239
// {
uStructType* Object_typeof()
{
    static uSStrong<uStructType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.ValueSize = sizeof(::v8::Local< ::v8::Object>);
    options.TypeSize = sizeof(uStructType);
    type = uStructType::New("Fuse.Scripting.V8.Internal.Object", options);
    return type;
}

// public Fuse.Scripting.V8.Internal.MaybeBool CreateDataProperty(Fuse.Scripting.V8.Internal.Context context, Fuse.Scripting.V8.Internal.String key, Fuse.Scripting.V8.Internal.Value value) :1252
void Object__CreateDataProperty_fn(::v8::Local< ::v8::Object>* __this, ::v8::Local< ::v8::Context>* context, ::v8::Local< ::v8::String>* key, ::v8::Local< ::v8::Value>* value, ::v8::Maybe< bool>* __retval)
{
    *__retval = Object::CreateDataProperty(*__this, *context, *key, *value);
}

// public Fuse.Scripting.V8.Internal.MaybeBool CreateDataProperty(Fuse.Scripting.V8.Internal.Context context, uint index, Fuse.Scripting.V8.Internal.Value value) :1257
void Object__CreateDataProperty1_fn(::v8::Local< ::v8::Object>* __this, ::v8::Local< ::v8::Context>* context, uint32_t* index, ::v8::Local< ::v8::Value>* value, ::v8::Maybe< bool>* __retval)
{
    *__retval = Object::CreateDataProperty1(*__this, *context, *index, *value);
}

// public Fuse.Scripting.V8.Internal.MaybeValue Get(Fuse.Scripting.V8.Internal.Context context, Fuse.Scripting.V8.Internal.Value key) :1262
void Object__Get_fn(::v8::Local< ::v8::Object>* __this, ::v8::Local< ::v8::Context>* context, ::v8::Local< ::v8::Value>* key, ::v8::MaybeLocal< ::v8::Value> * __retval)
{
    *__retval = Object::Get(*__this, *context, *key);
}

// public Fuse.Scripting.V8.Internal.MaybeValue Get(Fuse.Scripting.V8.Internal.Context context, uint index) :1267
void Object__Get1_fn(::v8::Local< ::v8::Object>* __this, ::v8::Local< ::v8::Context>* context, uint32_t* index, ::v8::MaybeLocal< ::v8::Value> * __retval)
{
    *__retval = Object::Get1(*__this, *context, *index);
}

// public Fuse.Scripting.V8.Internal.MaybeArray GetPropertyNames(Fuse.Scripting.V8.Internal.Context context) :1282
void Object__GetPropertyNames_fn(::v8::Local< ::v8::Object>* __this, ::v8::Local< ::v8::Context>* context, ::v8::MaybeLocal< ::v8::Array> * __retval)
{
    *__retval = Object::GetPropertyNames(*__this, *context);
}

// public Fuse.Scripting.V8.Internal.Value GetPrototype() :1287
void Object__GetPrototype_fn(::v8::Local< ::v8::Object>* __this, ::v8::Local< ::v8::Value>* __retval)
{
    *__retval = Object::GetPrototype(*__this);
}

// public Fuse.Scripting.V8.Internal.MaybeBool Has(Fuse.Scripting.V8.Internal.Context context, Fuse.Scripting.V8.Internal.Value key) :1272
void Object__Has_fn(::v8::Local< ::v8::Object>* __this, ::v8::Local< ::v8::Context>* context, ::v8::Local< ::v8::Value>* key, ::v8::Maybe< bool>* __retval)
{
    *__retval = Object::Has(*__this, *context, *key);
}

// public Fuse.Scripting.V8.Internal.MaybeBool Has(Fuse.Scripting.V8.Internal.Context context, uint key) :1277
void Object__Has1_fn(::v8::Local< ::v8::Object>* __this, ::v8::Local< ::v8::Context>* context, uint32_t* key, ::v8::Maybe< bool>* __retval)
{
    *__retval = Object::Has1(*__this, *context, *key);
}

// public static explicit operator Fuse.Scripting.V8.Internal.Value(Fuse.Scripting.V8.Internal.Object obj) :1293
void Object__op_Explicit_fn(::v8::Local< ::v8::Object>* obj, ::v8::Local< ::v8::Value>* __retval)
{
    *__retval = Object::op_Explicit(*obj);
}

// public static explicit operator Fuse.Scripting.V8.Internal.Function(Fuse.Scripting.V8.Internal.Object obj) :1298
void Object__op_Explicit1_fn(::v8::Local< ::v8::Object>* obj, ::v8::Local< ::v8::Function>* __retval)
{
    *__retval = Object::op_Explicit1(*obj);
}

// public static explicit operator Fuse.Scripting.V8.Internal.Array(Fuse.Scripting.V8.Internal.Object obj) :1303
void Object__op_Explicit2_fn(::v8::Local< ::v8::Object>* obj, ::v8::Local< ::v8::Array>* __retval)
{
    *__retval = Object::op_Explicit2(*obj);
}

// public Fuse.Scripting.V8.Internal.MaybeBool Set(Fuse.Scripting.V8.Internal.Context context, Fuse.Scripting.V8.Internal.Value key, Fuse.Scripting.V8.Internal.Value value) :1242
void Object__Set_fn(::v8::Local< ::v8::Object>* __this, ::v8::Local< ::v8::Context>* context, ::v8::Local< ::v8::Value>* key, ::v8::Local< ::v8::Value>* value, ::v8::Maybe< bool>* __retval)
{
    *__retval = Object::Set(*__this, *context, *key, *value);
}

// public Fuse.Scripting.V8.Internal.MaybeBool Set(Fuse.Scripting.V8.Internal.Context context, uint index, Fuse.Scripting.V8.Internal.Value value) :1247
void Object__Set1_fn(::v8::Local< ::v8::Object>* __this, ::v8::Local< ::v8::Context>* context, uint32_t* index, ::v8::Local< ::v8::Value>* value, ::v8::Maybe< bool>* __retval)
{
    *__retval = Object::Set1(*__this, *context, *index, *value);
}

// public Fuse.Scripting.V8.Internal.MaybeBool CreateDataProperty(Fuse.Scripting.V8.Internal.Context context, Fuse.Scripting.V8.Internal.String key, Fuse.Scripting.V8.Internal.Value value) [instance] :1252
::v8::Maybe< bool> Object::CreateDataProperty(::v8::Local< ::v8::Object> __this, ::v8::Local< ::v8::Context> context, ::v8::Local< ::v8::String> key, ::v8::Local< ::v8::Value> value)
{
    return (*&__this)->CreateDataProperty(context, key, value);
}

// public Fuse.Scripting.V8.Internal.MaybeBool CreateDataProperty(Fuse.Scripting.V8.Internal.Context context, uint index, Fuse.Scripting.V8.Internal.Value value) [instance] :1257
::v8::Maybe< bool> Object::CreateDataProperty1(::v8::Local< ::v8::Object> __this, ::v8::Local< ::v8::Context> context, uint32_t index, ::v8::Local< ::v8::Value> value)
{
    return (*&__this)->CreateDataProperty(context, index, value);
}

// public Fuse.Scripting.V8.Internal.MaybeValue Get(Fuse.Scripting.V8.Internal.Context context, Fuse.Scripting.V8.Internal.Value key) [instance] :1262
::v8::MaybeLocal< ::v8::Value>  Object::Get(::v8::Local< ::v8::Object> __this, ::v8::Local< ::v8::Context> context, ::v8::Local< ::v8::Value> key)
{
    return (*&__this)->Get(context, key);
}

// public Fuse.Scripting.V8.Internal.MaybeValue Get(Fuse.Scripting.V8.Internal.Context context, uint index) [instance] :1267
::v8::MaybeLocal< ::v8::Value>  Object::Get1(::v8::Local< ::v8::Object> __this, ::v8::Local< ::v8::Context> context, uint32_t index)
{
    return (*&__this)->Get(context, index);
}

// public Fuse.Scripting.V8.Internal.MaybeArray GetPropertyNames(Fuse.Scripting.V8.Internal.Context context) [instance] :1282
::v8::MaybeLocal< ::v8::Array>  Object::GetPropertyNames(::v8::Local< ::v8::Object> __this, ::v8::Local< ::v8::Context> context)
{
    return (*&__this)->GetPropertyNames(context);
}

// public Fuse.Scripting.V8.Internal.Value GetPrototype() [instance] :1287
::v8::Local< ::v8::Value> Object::GetPrototype(::v8::Local< ::v8::Object> __this)
{
    return (*&__this)->GetPrototype();
}

// public Fuse.Scripting.V8.Internal.MaybeBool Has(Fuse.Scripting.V8.Internal.Context context, Fuse.Scripting.V8.Internal.Value key) [instance] :1272
::v8::Maybe< bool> Object::Has(::v8::Local< ::v8::Object> __this, ::v8::Local< ::v8::Context> context, ::v8::Local< ::v8::Value> key)
{
    return (*&__this)->Has(context, key);
}

// public Fuse.Scripting.V8.Internal.MaybeBool Has(Fuse.Scripting.V8.Internal.Context context, uint key) [instance] :1277
::v8::Maybe< bool> Object::Has1(::v8::Local< ::v8::Object> __this, ::v8::Local< ::v8::Context> context, uint32_t key)
{
    return (*&__this)->Has(context, key);
}

// public Fuse.Scripting.V8.Internal.MaybeBool Set(Fuse.Scripting.V8.Internal.Context context, Fuse.Scripting.V8.Internal.Value key, Fuse.Scripting.V8.Internal.Value value) [instance] :1242
::v8::Maybe< bool> Object::Set(::v8::Local< ::v8::Object> __this, ::v8::Local< ::v8::Context> context, ::v8::Local< ::v8::Value> key, ::v8::Local< ::v8::Value> value)
{
    return (*&__this)->Set(context, key, value);
}

// public Fuse.Scripting.V8.Internal.MaybeBool Set(Fuse.Scripting.V8.Internal.Context context, uint index, Fuse.Scripting.V8.Internal.Value value) [instance] :1247
::v8::Maybe< bool> Object::Set1(::v8::Local< ::v8::Object> __this, ::v8::Local< ::v8::Context> context, uint32_t index, ::v8::Local< ::v8::Value> value)
{
    return (*&__this)->Set(context, index, value);
}

// public static explicit operator Fuse.Scripting.V8.Internal.Value(Fuse.Scripting.V8.Internal.Object obj) [static] :1293
::v8::Local< ::v8::Value> Object::op_Explicit(::v8::Local< ::v8::Object> obj)
{
    return obj.As< ::v8::Value>();
}

// public static explicit operator Fuse.Scripting.V8.Internal.Function(Fuse.Scripting.V8.Internal.Object obj) [static] :1298
::v8::Local< ::v8::Function> Object::op_Explicit1(::v8::Local< ::v8::Object> obj)
{
    return obj.As< ::v8::Function>();
}

// public static explicit operator Fuse.Scripting.V8.Internal.Array(Fuse.Scripting.V8.Internal.Object obj) [static] :1303
::v8::Local< ::v8::Array> Object::op_Explicit2(::v8::Local< ::v8::Object> obj)
{
    return obj.As< ::v8::Array>();
}
// }

// C:\ProgramData\Uno\Packages\Fuse.Scripting.V8\0.18.8\$.uno(1395)
// ----------------------------------------------------------------

// internal extern struct PersistentArray :1395
// {
uStructType* PersistentArray_typeof()
{
    static uSStrong<uStructType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.ValueSize = sizeof(::v8::Persistent< ::v8::Array>*);
    options.TypeSize = sizeof(uStructType);
    type = uStructType::New("Fuse.Scripting.V8.Internal.PersistentArray", options);
    return type;
}

// public void Delete() :1407
void PersistentArray__Delete_fn(::v8::Persistent< ::v8::Array>** __this)
{
    PersistentArray::Delete(*__this);
}

// public Fuse.Scripting.V8.Internal.Array Get(Fuse.Scripting.V8.Internal.Isolate isolate) :1402
void PersistentArray__Get_fn(::v8::Persistent< ::v8::Array>** __this, ::v8::Isolate** isolate, ::v8::Local< ::v8::Array>* __retval)
{
    *__retval = PersistentArray::Get(*__this, *isolate);
}

// public static Fuse.Scripting.V8.Internal.PersistentArray New(Fuse.Scripting.V8.Internal.Isolate isolate, Fuse.Scripting.V8.Internal.Array array) :1397
void PersistentArray__New1_fn(::v8::Isolate** isolate, ::v8::Local< ::v8::Array>* array, ::v8::Persistent< ::v8::Array>** __retval)
{
    *__retval = PersistentArray::New1(*isolate, *array);
}

// public void Delete() [instance] :1407
void PersistentArray::Delete(::v8::Persistent< ::v8::Array>* __this)
{
    delete *&__this;
}

// public Fuse.Scripting.V8.Internal.Array Get(Fuse.Scripting.V8.Internal.Isolate isolate) [instance] :1402
::v8::Local< ::v8::Array> PersistentArray::Get(::v8::Persistent< ::v8::Array>* __this, ::v8::Isolate* isolate)
{
    return (*&__this)->Get(isolate);
}

// public static Fuse.Scripting.V8.Internal.PersistentArray New(Fuse.Scripting.V8.Internal.Isolate isolate, Fuse.Scripting.V8.Internal.Array array) [static] :1397
::v8::Persistent< ::v8::Array>* PersistentArray::New1(::v8::Isolate* isolate, ::v8::Local< ::v8::Array> array)
{
    return new ::v8::Persistent< ::v8::Array>(isolate, array);
}
// }

// C:\ProgramData\Uno\Packages\Fuse.Scripting.V8\0.18.8\$.uno(1056)
// ----------------------------------------------------------------

// internal extern struct PersistentContext :1056
// {
uStructType* PersistentContext_typeof()
{
    static uSStrong<uStructType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.ValueSize = sizeof(::v8::Persistent< ::v8::Context>*);
    options.TypeSize = sizeof(uStructType);
    type = uStructType::New("Fuse.Scripting.V8.Internal.PersistentContext", options);
    return type;
}

// public void Delete() :1068
void PersistentContext__Delete_fn(::v8::Persistent< ::v8::Context>** __this)
{
    PersistentContext::Delete(*__this);
}

// public Fuse.Scripting.V8.Internal.Context Get(Fuse.Scripting.V8.Internal.Isolate isolate) :1063
void PersistentContext__Get_fn(::v8::Persistent< ::v8::Context>** __this, ::v8::Isolate** isolate, ::v8::Local< ::v8::Context>* __retval)
{
    *__retval = PersistentContext::Get(*__this, *isolate);
}

// public static Fuse.Scripting.V8.Internal.PersistentContext New(Fuse.Scripting.V8.Internal.Isolate isolate, Fuse.Scripting.V8.Internal.Context context) :1058
void PersistentContext__New1_fn(::v8::Isolate** isolate, ::v8::Local< ::v8::Context>* context, ::v8::Persistent< ::v8::Context>** __retval)
{
    *__retval = PersistentContext::New1(*isolate, *context);
}

// public void Delete() [instance] :1068
void PersistentContext::Delete(::v8::Persistent< ::v8::Context>* __this)
{
    delete *&__this;
}

// public Fuse.Scripting.V8.Internal.Context Get(Fuse.Scripting.V8.Internal.Isolate isolate) [instance] :1063
::v8::Local< ::v8::Context> PersistentContext::Get(::v8::Persistent< ::v8::Context>* __this, ::v8::Isolate* isolate)
{
    return (*&__this)->Get(isolate);
}

// public static Fuse.Scripting.V8.Internal.PersistentContext New(Fuse.Scripting.V8.Internal.Isolate isolate, Fuse.Scripting.V8.Internal.Context context) [static] :1058
::v8::Persistent< ::v8::Context>* PersistentContext::New1(::v8::Isolate* isolate, ::v8::Local< ::v8::Context> context)
{
    return new ::v8::Persistent< ::v8::Context>(isolate, context);
}
// }

// C:\ProgramData\Uno\Packages\Fuse.Scripting.V8\0.18.8\$.uno(1356)
// ----------------------------------------------------------------

// internal extern struct PersistentFunction :1356
// {
uStructType* PersistentFunction_typeof()
{
    static uSStrong<uStructType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.ValueSize = sizeof(::v8::Persistent< ::v8::Function>*);
    options.TypeSize = sizeof(uStructType);
    type = uStructType::New("Fuse.Scripting.V8.Internal.PersistentFunction", options);
    return type;
}

// public void Delete() :1368
void PersistentFunction__Delete_fn(::v8::Persistent< ::v8::Function>** __this)
{
    PersistentFunction::Delete(*__this);
}

// public Fuse.Scripting.V8.Internal.Function Get(Fuse.Scripting.V8.Internal.Isolate isolate) :1363
void PersistentFunction__Get_fn(::v8::Persistent< ::v8::Function>** __this, ::v8::Isolate** isolate, ::v8::Local< ::v8::Function>* __retval)
{
    *__retval = PersistentFunction::Get(*__this, *isolate);
}

// public static Fuse.Scripting.V8.Internal.PersistentFunction New(Fuse.Scripting.V8.Internal.Isolate isolate, Fuse.Scripting.V8.Internal.Function function) :1358
void PersistentFunction__New1_fn(::v8::Isolate** isolate, ::v8::Local< ::v8::Function>* function, ::v8::Persistent< ::v8::Function>** __retval)
{
    *__retval = PersistentFunction::New1(*isolate, *function);
}

// public void Delete() [instance] :1368
void PersistentFunction::Delete(::v8::Persistent< ::v8::Function>* __this)
{
    delete *&__this;
}

// public Fuse.Scripting.V8.Internal.Function Get(Fuse.Scripting.V8.Internal.Isolate isolate) [instance] :1363
::v8::Local< ::v8::Function> PersistentFunction::Get(::v8::Persistent< ::v8::Function>* __this, ::v8::Isolate* isolate)
{
    return (*&__this)->Get(isolate);
}

// public static Fuse.Scripting.V8.Internal.PersistentFunction New(Fuse.Scripting.V8.Internal.Isolate isolate, Fuse.Scripting.V8.Internal.Function function) [static] :1358
::v8::Persistent< ::v8::Function>* PersistentFunction::New1(::v8::Isolate* isolate, ::v8::Local< ::v8::Function> function)
{
    return new ::v8::Persistent< ::v8::Function>(isolate, function);
}
// }

// C:\ProgramData\Uno\Packages\Fuse.Scripting.V8\0.18.8\$.uno(1311)
// ----------------------------------------------------------------

// internal extern struct PersistentObject :1311
// {
uStructType* PersistentObject_typeof()
{
    static uSStrong<uStructType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.ValueSize = sizeof(::v8::Persistent< ::v8::Object>*);
    options.TypeSize = sizeof(uStructType);
    type = uStructType::New("Fuse.Scripting.V8.Internal.PersistentObject", options);
    return type;
}

// public void Delete() :1323
void PersistentObject__Delete_fn(::v8::Persistent< ::v8::Object>** __this)
{
    PersistentObject::Delete(*__this);
}

// public Fuse.Scripting.V8.Internal.Object Get(Fuse.Scripting.V8.Internal.Isolate isolate) :1318
void PersistentObject__Get_fn(::v8::Persistent< ::v8::Object>** __this, ::v8::Isolate** isolate, ::v8::Local< ::v8::Object>* __retval)
{
    *__retval = PersistentObject::Get(*__this, *isolate);
}

// public static Fuse.Scripting.V8.Internal.PersistentObject New(Fuse.Scripting.V8.Internal.Isolate isolate, Fuse.Scripting.V8.Internal.Object obj) :1313
void PersistentObject__New1_fn(::v8::Isolate** isolate, ::v8::Local< ::v8::Object>* obj, ::v8::Persistent< ::v8::Object>** __retval)
{
    *__retval = PersistentObject::New1(*isolate, *obj);
}

// public void Delete() [instance] :1323
void PersistentObject::Delete(::v8::Persistent< ::v8::Object>* __this)
{
    delete *&__this;
}

// public Fuse.Scripting.V8.Internal.Object Get(Fuse.Scripting.V8.Internal.Isolate isolate) [instance] :1318
::v8::Local< ::v8::Object> PersistentObject::Get(::v8::Persistent< ::v8::Object>* __this, ::v8::Isolate* isolate)
{
    return (*&__this)->Get(isolate);
}

// public static Fuse.Scripting.V8.Internal.PersistentObject New(Fuse.Scripting.V8.Internal.Isolate isolate, Fuse.Scripting.V8.Internal.Object obj) [static] :1313
::v8::Persistent< ::v8::Object>* PersistentObject::New1(::v8::Isolate* isolate, ::v8::Local< ::v8::Object> obj)
{
    return new ::v8::Persistent< ::v8::Object>(isolate, obj);
}
// }

// C:\ProgramData\Uno\Packages\Fuse.Scripting.V8\0.18.8\$.uno(995)
// ---------------------------------------------------------------

// internal extern struct Platform :995
// {
uStructType* Platform_typeof()
{
    static uSStrong<uStructType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.ValueSize = sizeof(::v8::Platform*);
    options.TypeSize = sizeof(uStructType);
    type = uStructType::New("Fuse.Scripting.V8.Internal.Platform", options);
    return type;
}

// public static Fuse.Scripting.V8.Internal.Platform CreateDefaultPlatform() :997
void Platform__CreateDefaultPlatform_fn(::v8::Platform** __retval)
{
    *__retval = Platform::CreateDefaultPlatform();
}

// public void Dispose() :1002
void Platform__Dispose_fn(::v8::Platform** __this)
{
    Platform::Dispose(*__this);
}

// public void Dispose() [instance] :1002
void Platform::Dispose(::v8::Platform* __this)
{
    delete *&__this;
}

// public static Fuse.Scripting.V8.Internal.Platform CreateDefaultPlatform() [static] :997
::v8::Platform* Platform::CreateDefaultPlatform()
{
    return ::v8::platform::CreateDefaultPlatform();
}
// }

// C:\ProgramData\Uno\Packages\Fuse.Scripting.V8\0.18.8\$.uno(1118)
// ----------------------------------------------------------------

// internal extern struct Script :1118
// {
uStructType* Script_typeof()
{
    static uSStrong<uStructType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.ValueSize = sizeof(::v8::Local< ::v8::Script>);
    options.TypeSize = sizeof(uStructType);
    type = uStructType::New("Fuse.Scripting.V8.Internal.Script", options);
    return type;
}

// public static Fuse.Scripting.V8.Internal.Script Compile(Fuse.Scripting.V8.Internal.String src, Fuse.Scripting.V8.Internal.String fileName) :1120
void Script__Compile_fn(::v8::Local< ::v8::String>* src, ::v8::Local< ::v8::String>* fileName, ::v8::Local< ::v8::Script>* __retval)
{
    *__retval = Script::Compile(*src, *fileName);
}

// public static Fuse.Scripting.V8.Internal.Script Compile(string src, string fileName) :1125
void Script__Compile1_fn(uString* src, uString* fileName, ::v8::Local< ::v8::Script>* __retval)
{
    *__retval = Script::Compile1(src, fileName);
}

// public Fuse.Scripting.V8.Internal.MaybeValue Run() :1130
void Script__Run_fn(::v8::Local< ::v8::Script>* __this, ::v8::MaybeLocal< ::v8::Value> * __retval)
{
    *__retval = Script::Run(*__this);
}

// public Fuse.Scripting.V8.Internal.MaybeValue Run() [instance] :1130
::v8::MaybeLocal< ::v8::Value>  Script::Run(::v8::Local< ::v8::Script> __this)
{
    return (*&__this)->Run();
}

// public static Fuse.Scripting.V8.Internal.Script Compile(Fuse.Scripting.V8.Internal.String src, Fuse.Scripting.V8.Internal.String fileName) [static] :1120
::v8::Local< ::v8::Script> Script::Compile(::v8::Local< ::v8::String> src, ::v8::Local< ::v8::String> fileName)
{
    return ::v8::Script::Compile(src, fileName);
}

// public static Fuse.Scripting.V8.Internal.Script Compile(string src, string fileName) [static] :1125
::v8::Local< ::v8::Script> Script::Compile1(uString* src, uString* fileName)
{
    return Script::Compile(::g::Fuse::Scripting::V8::Internal::String::op_Explicit1(src), ::g::Fuse::Scripting::V8::Internal::String::op_Explicit1(fileName));
}
// }

// C:\ProgramData\Uno\Packages\Fuse.Scripting.V8\0.18.8\$.uno(1096)
// ----------------------------------------------------------------

// internal extern struct String :1096
// {
uStructType* String_typeof()
{
    static uSStrong<uStructType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.ValueSize = sizeof(::v8::Local< ::v8::String>);
    options.TypeSize = sizeof(uStructType);
    type = uStructType::New("Fuse.Scripting.V8.Internal.String", options);
    type->fp_ToString_struct = (void(*)(void*, uType*, uString**))String__ToString_fn;
    ::TYPES[1] = ::g::Fuse::Scripting::V8::Internal::Value_typeof();
    return type;
}

// public static explicit operator Fuse.Scripting.V8.Internal.Value(Fuse.Scripting.V8.Internal.String str) :1110
void String__op_Explicit_fn(::v8::Local< ::v8::String>* str, ::v8::Local< ::v8::Value>* __retval)
{
    *__retval = String::op_Explicit(*str);
}

// public static explicit operator Fuse.Scripting.V8.Internal.String(string str) :1098
void String__op_Explicit1_fn(uString* str, ::v8::Local< ::v8::String>* __retval)
{
    *__retval = String::op_Explicit1(str);
}

// public override sealed string ToString() :1105
void String__ToString_fn(::v8::Local< ::v8::String>* __this, uType* __type, uString** __retval)
{
    return *__retval = ::g::Fuse::Scripting::V8::Internal::Value::ToString(String::op_Explicit(*__this), ::TYPES[1/*Fuse.Scripting.V8.Internal.Value*/]), void();
}

// public static explicit operator Fuse.Scripting.V8.Internal.Value(Fuse.Scripting.V8.Internal.String str) [static] :1110
::v8::Local< ::v8::Value> String::op_Explicit(::v8::Local< ::v8::String> str)
{
    return str.As< ::v8::Value>();
}

// public static explicit operator Fuse.Scripting.V8.Internal.String(string str) [static] :1098
::v8::Local< ::v8::String> String::op_Explicit1(uString* str)
{
    ::v8::Isolate* isolate = ::g::Fuse::Scripting::V8::Internal::Isolate::GetCurrent();
    return ::v8::String::NewFromTwoByte(isolate, str->Ptr(), ::v8::NewStringType::kNormal, str->Length()).ToLocalChecked();
}
// }

// C:\ProgramData\Uno\Packages\Fuse.Scripting.V8\0.18.8\$.uno(1076)
// ----------------------------------------------------------------

// internal extern struct TryCatch :1076
// {
uStructType* TryCatch_typeof()
{
    static uSStrong<uStructType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.ValueSize = sizeof(::v8::TryCatch*);
    options.TypeSize = sizeof(uStructType);
    type = uStructType::New("Fuse.Scripting.V8.Internal.TryCatch", options);
    return type;
}

// public Fuse.Scripting.V8.Internal.Value Exception() :1078
void TryCatch__Exception_fn(::v8::TryCatch** __this, ::v8::Local< ::v8::Value>* __retval)
{
    *__retval = TryCatch::Exception(*__this);
}

// public Fuse.Scripting.V8.Internal.Message Message() :1083
void TryCatch__Message_fn(::v8::TryCatch** __this, ::v8::Local< ::v8::Message>* __retval)
{
    *__retval = TryCatch::Message(*__this);
}

// public Fuse.Scripting.V8.Internal.MaybeValue StackTrace(Fuse.Scripting.V8.Internal.Context context) :1088
void TryCatch__StackTrace_fn(::v8::TryCatch** __this, ::v8::Local< ::v8::Context>* context, ::v8::MaybeLocal< ::v8::Value> * __retval)
{
    *__retval = TryCatch::StackTrace(*__this, *context);
}

// public Fuse.Scripting.V8.Internal.Value Exception() [instance] :1078
::v8::Local< ::v8::Value> TryCatch::Exception(::v8::TryCatch* __this)
{
    return (*&__this)->Exception();
}

// public Fuse.Scripting.V8.Internal.Message Message() [instance] :1083
::v8::Local< ::v8::Message> TryCatch::Message(::v8::TryCatch* __this)
{
    return (*&__this)->Message();
}

// public Fuse.Scripting.V8.Internal.MaybeValue StackTrace(Fuse.Scripting.V8.Internal.Context context) [instance] :1088
::v8::MaybeLocal< ::v8::Value>  TryCatch::StackTrace(::v8::TryCatch* __this, ::v8::Local< ::v8::Context> context)
{
    return (*&__this)->StackTrace(context);
}
// }

// C:\ProgramData\Uno\Packages\Fuse.Scripting.V8\0.18.8\$.uno(965)
// ---------------------------------------------------------------

// internal static extern class V8 :965
// {
uClassType* V8_typeof()
{
    static uSStrong<uClassType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.TypeSize = sizeof(uClassType);
    type = uClassType::New("Fuse.Scripting.V8.Internal.V8", options);
    return type;
}

// public static bool Dispose() :982
void V8__Dispose_fn(bool* __retval)
{
    *__retval = V8::Dispose();
}

// public static void Initialize() :972
void V8__Initialize_fn()
{
    V8::Initialize();
}

// public static bool InitializeICU() :967
void V8__InitializeICU_fn(bool* __retval)
{
    *__retval = V8::InitializeICU();
}

// public static void InitializePlatform(Fuse.Scripting.V8.Internal.Platform platform) :977
void V8__InitializePlatform_fn(::v8::Platform** platform)
{
    V8::InitializePlatform(*platform);
}

// public static void ShutdownPlatform() :987
void V8__ShutdownPlatform_fn()
{
    V8::ShutdownPlatform();
}

// public static bool Dispose() [static] :982
bool V8::Dispose()
{
    return ::v8::V8::Dispose();
}

// public static void Initialize() [static] :972
void V8::Initialize()
{
    ::v8::V8::Initialize();
}

// public static bool InitializeICU() [static] :967
bool V8::InitializeICU()
{
    return ::v8::V8::InitializeICU();
}

// public static void InitializePlatform(Fuse.Scripting.V8.Internal.Platform platform) [static] :977
void V8::InitializePlatform(::v8::Platform* platform)
{
    ::v8::V8::InitializePlatform(platform);
}

// public static void ShutdownPlatform() [static] :987
void V8::ShutdownPlatform()
{
    ::v8::V8::ShutdownPlatform();
}
// }

// C:\ProgramData\Uno\Packages\Fuse.Scripting.V8\0.18.8\$.uno(1138)
// ----------------------------------------------------------------

// internal extern struct Value :1138
// {
uStructType* Value_typeof()
{
    static uSStrong<uStructType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.ValueSize = sizeof(::v8::Local< ::v8::Value>);
    options.TypeSize = sizeof(uStructType);
    type = uStructType::New("Fuse.Scripting.V8.Internal.Value", options);
    type->fp_ToString_struct = (void(*)(void*, uType*, uString**))Value__ToString_fn;
    return type;
}

// public Fuse.Scripting.V8.Internal.MaybeBool BooleanValue(Fuse.Scripting.V8.Internal.Context context) :1159
void Value__BooleanValue_fn(::v8::Local< ::v8::Value>* __this, ::v8::Local< ::v8::Context>* context, ::v8::Maybe< bool>* __retval)
{
    *__retval = Value::BooleanValue(*__this, *context);
}

// public Fuse.Scripting.V8.Internal.MaybeBool Equals(Fuse.Scripting.V8.Internal.Context context, Fuse.Scripting.V8.Internal.Value val) :1179
void Value__Equals2_fn(::v8::Local< ::v8::Value>* __this, ::v8::Local< ::v8::Context>* context, ::v8::Local< ::v8::Value>* val, ::v8::Maybe< bool>* __retval)
{
    *__retval = Value::Equals2(*__this, *context, *val);
}

// public Fuse.Scripting.V8.Internal.MaybeInt Int32Value(Fuse.Scripting.V8.Internal.Context context) :1164
void Value__Int32Value_fn(::v8::Local< ::v8::Value>* __this, ::v8::Local< ::v8::Context>* context, ::v8::Maybe< int>* __retval)
{
    *__retval = Value::Int32Value(*__this, *context);
}

// public Fuse.Scripting.V8.Internal.MaybeLong IntegerValue(Fuse.Scripting.V8.Internal.Context context) :1169
void Value__IntegerValue_fn(::v8::Local< ::v8::Value>* __this, ::v8::Local< ::v8::Context>* context, ::v8::Maybe< int64_t>* __retval)
{
    *__retval = Value::IntegerValue(*__this, *context);
}

// public bool IsArray() :1144
void Value__IsArray_fn(::v8::Local< ::v8::Value>* __this, bool* __retval)
{
    *__retval = Value::IsArray(*__this);
}

// public bool IsBoolean() :1145
void Value__IsBoolean_fn(::v8::Local< ::v8::Value>* __this, bool* __retval)
{
    *__retval = Value::IsBoolean(*__this);
}

// public bool IsBooleanObject() :1146
void Value__IsBooleanObject_fn(::v8::Local< ::v8::Value>* __this, bool* __retval)
{
    *__retval = Value::IsBooleanObject(*__this);
}

// public bool IsEmpty() :1141
void Value__IsEmpty_fn(::v8::Local< ::v8::Value>* __this, bool* __retval)
{
    *__retval = Value::IsEmpty(*__this);
}

// public bool IsFunction() :1147
void Value__IsFunction_fn(::v8::Local< ::v8::Value>* __this, bool* __retval)
{
    *__retval = Value::IsFunction(*__this);
}

// public bool IsInt32() :1148
void Value__IsInt32_fn(::v8::Local< ::v8::Value>* __this, bool* __retval)
{
    *__retval = Value::IsInt32(*__this);
}

// public bool IsNativeError() :1149
void Value__IsNativeError_fn(::v8::Local< ::v8::Value>* __this, bool* __retval)
{
    *__retval = Value::IsNativeError(*__this);
}

// public bool IsNull() :1150
void Value__IsNull_fn(::v8::Local< ::v8::Value>* __this, bool* __retval)
{
    *__retval = Value::IsNull(*__this);
}

// public bool IsNumber() :1151
void Value__IsNumber_fn(::v8::Local< ::v8::Value>* __this, bool* __retval)
{
    *__retval = Value::IsNumber(*__this);
}

// public bool IsNumberObject() :1152
void Value__IsNumberObject_fn(::v8::Local< ::v8::Value>* __this, bool* __retval)
{
    *__retval = Value::IsNumberObject(*__this);
}

// public bool IsObject() :1153
void Value__IsObject_fn(::v8::Local< ::v8::Value>* __this, bool* __retval)
{
    *__retval = Value::IsObject(*__this);
}

// public bool IsString() :1154
void Value__IsString_fn(::v8::Local< ::v8::Value>* __this, bool* __retval)
{
    *__retval = Value::IsString(*__this);
}

// public bool IsStringObject() :1155
void Value__IsStringObject_fn(::v8::Local< ::v8::Value>* __this, bool* __retval)
{
    *__retval = Value::IsStringObject(*__this);
}

// public bool IsUint32() :1156
void Value__IsUint32_fn(::v8::Local< ::v8::Value>* __this, bool* __retval)
{
    *__retval = Value::IsUint32(*__this);
}

// public bool IsUndefined() :1157
void Value__IsUndefined_fn(::v8::Local< ::v8::Value>* __this, bool* __retval)
{
    *__retval = Value::IsUndefined(*__this);
}

// public static Fuse.Scripting.V8.Internal.Value Null(Fuse.Scripting.V8.Internal.Isolate isolate) :1231
void Value__Null_fn(::v8::Isolate** isolate, ::v8::Local< ::v8::Value>* __retval)
{
    *__retval = Value::Null(*isolate);
}

// public Fuse.Scripting.V8.Internal.MaybeDouble NumberValue(Fuse.Scripting.V8.Internal.Context context) :1174
void Value__NumberValue_fn(::v8::Local< ::v8::Value>* __this, ::v8::Local< ::v8::Context>* context, ::v8::Maybe< double>* __retval)
{
    *__retval = Value::NumberValue(*__this, *context);
}

// public static explicit operator Fuse.Scripting.V8.Internal.Value(string str) :1211
void Value__op_Explicit_fn(uString* str, ::v8::Local< ::v8::Value>* __retval)
{
    *__retval = Value::op_Explicit(str);
}

// public static Fuse.Scripting.V8.Internal.Value Primitive(Fuse.Scripting.V8.Internal.Isolate isolate, bool b) :1216
void Value__Primitive_fn(::v8::Isolate** isolate, bool* b, ::v8::Local< ::v8::Value>* __retval)
{
    *__retval = Value::Primitive(*isolate, *b);
}

// public static Fuse.Scripting.V8.Internal.Value Primitive(Fuse.Scripting.V8.Internal.Isolate isolate, double d) :1226
void Value__Primitive1_fn(::v8::Isolate** isolate, double* d, ::v8::Local< ::v8::Value>* __retval)
{
    *__retval = Value::Primitive1(*isolate, *d);
}

// public static Fuse.Scripting.V8.Internal.Value Primitive(Fuse.Scripting.V8.Internal.Isolate isolate, int n) :1221
void Value__Primitive2_fn(::v8::Isolate** isolate, int* n, ::v8::Local< ::v8::Value>* __retval)
{
    *__retval = Value::Primitive2(*isolate, *n);
}

// public bool StrictEquals(Fuse.Scripting.V8.Internal.Value val) :1184
void Value__StrictEquals_fn(::v8::Local< ::v8::Value>* __this, ::v8::Local< ::v8::Value>* val, bool* __retval)
{
    *__retval = Value::StrictEquals(*__this, *val);
}

// public Fuse.Scripting.V8.Internal.MaybeObject ToObject(Fuse.Scripting.V8.Internal.Context context) :1189
void Value__ToObject_fn(::v8::Local< ::v8::Value>* __this, ::v8::Local< ::v8::Context>* context, ::v8::MaybeLocal< ::v8::Object> * __retval)
{
    *__retval = Value::ToObject(*__this, *context);
}

// public override sealed string ToString() :1205
void Value__ToString_fn(::v8::Local< ::v8::Value>* __this, uType* __type, uString** __retval)
{
    ::v8::String::Utf8Value utf8Value(*__this);
    return *__retval = ::uNewStringUtf8(*utf8Value, utf8Value.length()), void();
}

// public Fuse.Scripting.V8.Internal.MaybeString ToString(Fuse.Scripting.V8.Internal.Context context) :1199
void Value__ToString1_fn(::v8::Local< ::v8::Value>* __this, ::v8::Local< ::v8::Context>* context, ::v8::MaybeLocal< ::v8::String> * __retval)
{
    *__retval = Value::ToString1(*__this, *context);
}

// public Fuse.Scripting.V8.Internal.MaybeUint Uint32Value(Fuse.Scripting.V8.Internal.Context context) :1194
void Value__Uint32Value_fn(::v8::Local< ::v8::Value>* __this, ::v8::Local< ::v8::Context>* context, ::v8::Maybe< uint32_t>* __retval)
{
    *__retval = Value::Uint32Value(*__this, *context);
}

// public Fuse.Scripting.V8.Internal.MaybeBool BooleanValue(Fuse.Scripting.V8.Internal.Context context) [instance] :1159
::v8::Maybe< bool> Value::BooleanValue(::v8::Local< ::v8::Value> __this, ::v8::Local< ::v8::Context> context)
{
    return (*&__this)->BooleanValue(context);
}

// public Fuse.Scripting.V8.Internal.MaybeBool Equals(Fuse.Scripting.V8.Internal.Context context, Fuse.Scripting.V8.Internal.Value val) [instance] :1179
::v8::Maybe< bool> Value::Equals2(::v8::Local< ::v8::Value> __this, ::v8::Local< ::v8::Context> context, ::v8::Local< ::v8::Value> val)
{
    return (*&__this)->Equals(context, val);
}

// public Fuse.Scripting.V8.Internal.MaybeInt Int32Value(Fuse.Scripting.V8.Internal.Context context) [instance] :1164
::v8::Maybe< int> Value::Int32Value(::v8::Local< ::v8::Value> __this, ::v8::Local< ::v8::Context> context)
{
    return (*&__this)->Int32Value(context);
}

// public Fuse.Scripting.V8.Internal.MaybeLong IntegerValue(Fuse.Scripting.V8.Internal.Context context) [instance] :1169
::v8::Maybe< int64_t> Value::IntegerValue(::v8::Local< ::v8::Value> __this, ::v8::Local< ::v8::Context> context)
{
    return (*&__this)->IntegerValue(context);
}

// public bool IsArray() [instance] :1144
bool Value::IsArray(::v8::Local< ::v8::Value> __this)
{
    return (*&__this)->IsArray();
}

// public bool IsBoolean() [instance] :1145
bool Value::IsBoolean(::v8::Local< ::v8::Value> __this)
{
    return (*&__this)->IsBoolean();
}

// public bool IsBooleanObject() [instance] :1146
bool Value::IsBooleanObject(::v8::Local< ::v8::Value> __this)
{
    return (*&__this)->IsBooleanObject();
}

// public bool IsEmpty() [instance] :1141
bool Value::IsEmpty(::v8::Local< ::v8::Value> __this)
{
    return (&__this)->IsEmpty();
}

// public bool IsFunction() [instance] :1147
bool Value::IsFunction(::v8::Local< ::v8::Value> __this)
{
    return (*&__this)->IsFunction();
}

// public bool IsInt32() [instance] :1148
bool Value::IsInt32(::v8::Local< ::v8::Value> __this)
{
    return (*&__this)->IsInt32();
}

// public bool IsNativeError() [instance] :1149
bool Value::IsNativeError(::v8::Local< ::v8::Value> __this)
{
    return (*&__this)->IsNativeError();
}

// public bool IsNull() [instance] :1150
bool Value::IsNull(::v8::Local< ::v8::Value> __this)
{
    return (*&__this)->IsNull();
}

// public bool IsNumber() [instance] :1151
bool Value::IsNumber(::v8::Local< ::v8::Value> __this)
{
    return (*&__this)->IsNumber();
}

// public bool IsNumberObject() [instance] :1152
bool Value::IsNumberObject(::v8::Local< ::v8::Value> __this)
{
    return (*&__this)->IsNumberObject();
}

// public bool IsObject() [instance] :1153
bool Value::IsObject(::v8::Local< ::v8::Value> __this)
{
    return (*&__this)->IsObject();
}

// public bool IsString() [instance] :1154
bool Value::IsString(::v8::Local< ::v8::Value> __this)
{
    return (*&__this)->IsString();
}

// public bool IsStringObject() [instance] :1155
bool Value::IsStringObject(::v8::Local< ::v8::Value> __this)
{
    return (*&__this)->IsStringObject();
}

// public bool IsUint32() [instance] :1156
bool Value::IsUint32(::v8::Local< ::v8::Value> __this)
{
    return (*&__this)->IsUint32();
}

// public bool IsUndefined() [instance] :1157
bool Value::IsUndefined(::v8::Local< ::v8::Value> __this)
{
    return (*&__this)->IsUndefined();
}

// public Fuse.Scripting.V8.Internal.MaybeDouble NumberValue(Fuse.Scripting.V8.Internal.Context context) [instance] :1174
::v8::Maybe< double> Value::NumberValue(::v8::Local< ::v8::Value> __this, ::v8::Local< ::v8::Context> context)
{
    return (*&__this)->NumberValue(context);
}

// public bool StrictEquals(Fuse.Scripting.V8.Internal.Value val) [instance] :1184
bool Value::StrictEquals(::v8::Local< ::v8::Value> __this, ::v8::Local< ::v8::Value> val)
{
    return (*&__this)->StrictEquals(val);
}

// public Fuse.Scripting.V8.Internal.MaybeObject ToObject(Fuse.Scripting.V8.Internal.Context context) [instance] :1189
::v8::MaybeLocal< ::v8::Object>  Value::ToObject(::v8::Local< ::v8::Value> __this, ::v8::Local< ::v8::Context> context)
{
    return (*&__this)->ToObject(context);
}

// public Fuse.Scripting.V8.Internal.MaybeString ToString(Fuse.Scripting.V8.Internal.Context context) [instance] :1199
::v8::MaybeLocal< ::v8::String>  Value::ToString1(::v8::Local< ::v8::Value> __this, ::v8::Local< ::v8::Context> context)
{
    return (*&__this)->ToString(context);
}

// public Fuse.Scripting.V8.Internal.MaybeUint Uint32Value(Fuse.Scripting.V8.Internal.Context context) [instance] :1194
::v8::Maybe< uint32_t> Value::Uint32Value(::v8::Local< ::v8::Value> __this, ::v8::Local< ::v8::Context> context)
{
    return (*&__this)->Uint32Value(context);
}

// public static Fuse.Scripting.V8.Internal.Value Null(Fuse.Scripting.V8.Internal.Isolate isolate) [static] :1231
::v8::Local< ::v8::Value> Value::Null(::v8::Isolate* isolate)
{
    return ::v8::Null(isolate).As< ::v8::Value>();
}

// public static explicit operator Fuse.Scripting.V8.Internal.Value(string str) [static] :1211
::v8::Local< ::v8::Value> Value::op_Explicit(uString* str)
{
    return ::g::Fuse::Scripting::V8::Internal::String::op_Explicit(::g::Fuse::Scripting::V8::Internal::String::op_Explicit1(str));
}

// public static Fuse.Scripting.V8.Internal.Value Primitive(Fuse.Scripting.V8.Internal.Isolate isolate, bool b) [static] :1216
::v8::Local< ::v8::Value> Value::Primitive(::v8::Isolate* isolate, bool b)
{
    return ::v8::Boolean::New(isolate, b).As< ::v8::Value>();
}

// public static Fuse.Scripting.V8.Internal.Value Primitive(Fuse.Scripting.V8.Internal.Isolate isolate, double d) [static] :1226
::v8::Local< ::v8::Value> Value::Primitive1(::v8::Isolate* isolate, double d)
{
    return ::v8::Number::New(isolate, d).As< ::v8::Value>();
}

// public static Fuse.Scripting.V8.Internal.Value Primitive(Fuse.Scripting.V8.Internal.Isolate isolate, int n) [static] :1221
::v8::Local< ::v8::Value> Value::Primitive2(::v8::Isolate* isolate, int n)
{
    return ::v8::Integer::New(isolate, n).As< ::v8::Value>();
}
// }

}}}}} // ::g::Fuse::Scripting::V8::Internal
