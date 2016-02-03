#include <app/Fuse.Scripting.Callback.h>
#include <app/Fuse.Scripting.Duktape.CallbackClosure.h>
#include <app/Fuse.Scripting.Duktape.CompileFlag.h>
#include <app/Fuse.Scripting.Duktape.Context.h>
#include <app/Fuse.Scripting.Duktape.duktape.h>
#include <app/Fuse.Scripting.Duktape.EnumFlags.h>
#include <app/Fuse.Scripting.Duktape.JSArray.h>
#include <app/Fuse.Scripting.Duktape.JSFunction.h>
#include <app/Fuse.Scripting.Duktape.JSObject.h>
#include <app/Fuse.Scripting.Duktape.JSONObject.h>
#include <app/Fuse.Scripting.Function.h>
#include <app/Fuse.Scripting.IDispatcher.h>
#include <app/Fuse.Scripting.Object.h>
#include <app/Fuse.Scripting.ScriptException.h>
#include <app/Uno.Action__Uno_IntPtr.h>
#include <app/Uno.Bool.h>
#include <app/Uno.Collections.Dictionary__int__Fuse_Scripting_Callback.h>
#include <app/Uno.Collections.List__string.h>
#include <app/Uno.Delegate.h>
#include <app/Uno.Double.h>
#include <app/Uno.Exception.h>
#include <app/Uno.Int.h>
#include <app/Uno.IntPtr.h>
#include <app/Uno.Long.h>
#include <app/Uno.Object.h>
#include <app/Uno.String.h>
#include <app/Uno.UInt.h>
#include <duktape.c>
#include <duktape_helpers.h>

namespace app {
namespace Fuse {
namespace Scripting {
namespace Duktape {

// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Scripting.Duktape\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

CallbackClosure__uType* CallbackClosure__typeof()
{
    static ::uStaticStrong<CallbackClosure__uType*> type;
    if (type != NULL) return type;

    type = (CallbackClosure__uType*)::uAllocClassType(sizeof(CallbackClosure__uType), "Fuse.Scripting.Duktape.CallbackClosure", false, 0, 1, 0);

    type->SetStrongRefs(
        "_callback", offsetof(CallbackClosure, _callback));

    type->SetFields(2,
        ::uNewField("_callback", NULL, offsetof(CallbackClosure, _callback), ::app::Fuse::Scripting::Callback__typeof()),
        ::uNewField("_context", NULL, offsetof(CallbackClosure, _context), ::app::Uno::IntPtr__typeof()));

    type->SetFunctions(2,
        ::uNewFunction(".ctor", CallbackClosure__New_1, 0, true, CallbackClosure__typeof(), ::app::Uno::IntPtr__typeof(), ::app::Fuse::Scripting::Callback__typeof()),
        ::uNewFunction("Proxy", CallbackClosure__Proxy, 0, false, ::uObject__typeof(), ::uGetArrayType(::uObject__typeof())));

    ::uRegisterType(type);
    return type;
}

void CallbackClosure___ObjInit(CallbackClosure* __this, void* context, ::uDelegate* callback)
{
    __this->_context = context;
    __this->_callback = callback;
}

CallbackClosure* CallbackClosure__New_1(::uStatic* __this, void* context, ::uDelegate* callback)
{
    CallbackClosure* inst = (CallbackClosure*)::uAllocObject(sizeof(CallbackClosure), CallbackClosure__typeof());
    inst->_ObjInit(context, callback);
    return inst;
}

::uObject* CallbackClosure__Proxy(CallbackClosure* __this, ::uArray* args)
{
    try
    {
        ::uObject* res = ::uPtr< ::uDelegate*>(__this->_callback)->Invoke< ::uObject*, ::uArray*>(args);
        return res;
    }
    catch (const ::uThrowable& __t)
    {
        if (::uIs(__t.Exception, ::app::Fuse::Scripting::ScriptException__typeof()))
        {
            ::app::Fuse::Scripting::ScriptException* e = (::app::Fuse::Scripting::ScriptException*)__t.Exception;
            ::app::Fuse::Scripting::Duktape::duktape__error(NULL, __this->_context, ::uPtr< ::app::Fuse::Scripting::ScriptException*>(e)->Message());
            return NULL;
        }
        else
        {
            throw __t;
        }
    }
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Scripting.Duktape\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

::uEnumType* CompileFlag__typeof()
{
    static ::uStaticStrong< ::uEnumType*> type;
    if (type != NULL) return type;

    type = ::uAllocEnumType("Fuse.Scripting.Duktape.CompileFlag", ::app::Uno::UInt__typeof(), 7);

    type->SetLiterals(
        "DUK_COMPILE_EVAL", 1LL,
        "DUK_COMPILE_FUNCTION", 2LL,
        "DUK_COMPILE_STRICT", 4LL,
        "DUK_COMPILE_SAFE", 8LL,
        "DUK_COMPILE_NORESULT", 16LL,
        "DUK_COMPILE_NOSOURCE", 32LL,
        "DUK_COMPILE_STRLEN", 64LL);

    ::uRegisterType(type);
    return type;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Scripting.Duktape\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

::uStaticStrong< ::uArray*> Context___emptyArgs;

Context__uType* Context__typeof()
{
    static ::uStaticStrong<Context__uType*> type;
    if (type != NULL) return type;

    type = (Context__uType*)::uAllocClassType(sizeof(Context__uType), "Fuse.Scripting.Duktape.Context", false, 1, 3, 0);

    type->SetBaseType(::app::Fuse::Scripting::Context__typeof());
    type->__fp_Dispose = (void(*)(::app::Fuse::Scripting::Context*))Context__Dispose;
    type->__fp_Evaluate_1 = (::uObject*(*)(::app::Fuse::Scripting::Context*, ::uString*, ::uString*))Context__Evaluate_1;
    type->__fp_get_GlobalObject = (::app::Fuse::Scripting::Object*(*)(::app::Fuse::Scripting::Context*))Context__get_GlobalObject;
    type->__interface_0.__fp_Dispose = (void(*)(void*))Context__Dispose;

    type->SetInterfaces(
        ::app::Uno::IDisposable__typeof(), offsetof(Context__uType, __interface_0));

    type->SetStrongRefs(
        "_callbacks", offsetof(Context, _callbacks),
        "_globalObject", offsetof(Context, _globalObject),
        "_proxyCallback", offsetof(Context, _proxyCallback));

    type->SetFields(8,
        ::uNewField("_callbacks", NULL, offsetof(Context, _callbacks), ::app::Uno::Collections::Dictionary__int__Fuse_Scripting_Callback__typeof()),
        ::uNewField("_callbacksCount", NULL, offsetof(Context, _callbacksCount), ::app::Uno::Int__typeof()),
        ::uNewField("_emptyArgs", &Context___emptyArgs, 0, ::uGetArrayType(::uObject__typeof())),
        ::uNewField("_globalObject", NULL, offsetof(Context, _globalObject), ::app::Fuse::Scripting::Duktape::JSObject__typeof()),
        ::uNewField("_handle", NULL, offsetof(Context, _handle), ::app::Uno::IntPtr__typeof()),
        ::uNewField("_isAlive", NULL, offsetof(Context, _isAlive), ::app::Uno::Bool__typeof()),
        ::uNewField("_proxyCallback", NULL, offsetof(Context, _proxyCallback), ::app::Uno::Action__Uno_IntPtr__typeof()),
        ::uNewField("_stashKey", NULL, offsetof(Context, _stashKey), ::app::Uno::Int__typeof()));

    type->SetFunctions(70,
        ::uNewFunction("AddCallback", Context__AddCallback, 0, false, ::app::Uno::Int__typeof(), ::app::Fuse::Scripting::Callback__typeof()),
        ::uNewFunctionVoid("Call", Context__Call, 0, false, ::app::Uno::Int__typeof()),
        ::uNewFunctionVoid("CallMethod", Context__CallMethod, 0, false, ::app::Uno::Int__typeof()),
        ::uNewFunctionVoid("CheckError", Context__CheckError, 0, false, ::app::Uno::Int__typeof()),
        ::uNewFunctionVoid("CompileFunction", Context__CompileFunction, 0, false, ::app::Uno::String__typeof()),
        ::uNewFunctionVoid("Construct", Context__Construct, 0, false, ::app::Uno::Int__typeof()),
        ::uNewFunction("DelProperty", Context__DelProperty, 0, false, ::app::Uno::Bool__typeof(), ::app::Uno::Int__typeof()),
        ::uNewFunction("DelProperty", Context__DelProperty_1, 0, false, ::app::Uno::Bool__typeof(), ::app::Uno::Int__typeof(), ::app::Uno::Int__typeof()),
        ::uNewFunction("DelProperty", Context__DelProperty_2, 0, false, ::app::Uno::Bool__typeof(), ::app::Uno::Int__typeof(), ::app::Uno::String__typeof()),
        ::uNewFunctionVoid("Dump", Context__Dump, 0, false),
        ::uNewFunction("EnumeratorNext", Context__EnumeratorNext, 0, false, ::app::Uno::Bool__typeof(), ::app::Uno::Int__typeof(), ::app::Uno::Bool__typeof()),
        ::uNewFunction("Evaluate", Context__Evaluate_2, 0, false, ::uObject__typeof(), ::app::Uno::String__typeof()),
        ::uNewFunctionVoid("EvaluateNoResult", Context__EvaluateNoResult, 0, false, ::app::Uno::String__typeof()),
        ::uNewFunction("get_Handle", Context__get_Handle, 0, false, ::app::Uno::IntPtr__typeof()),
        ::uNewFunction("get_IsAlive", Context__get_IsAlive, 0, false, ::app::Uno::Bool__typeof()),
        ::uNewFunction("GetBool", Context__GetBool, 0, false, ::app::Uno::Bool__typeof(), ::app::Uno::Int__typeof()),
        ::uNewFunction("GetError", Context__GetError, 0, false, ::app::Fuse::Scripting::ScriptException__typeof(), ::app::Uno::Int__typeof()),
        ::uNewFunction("GetHeapPtr", Context__GetHeapPtr, 0, false, ::app::Uno::IntPtr__typeof(), ::app::Uno::Int__typeof()),
        ::uNewFunction("GetInt", Context__GetInt, 0, false, ::app::Uno::Int__typeof(), ::app::Uno::Int__typeof()),
        ::uNewFunction("GetLength", Context__GetLength, 0, false, ::app::Uno::Long__typeof(), ::app::Uno::Int__typeof()),
        ::uNewFunction("GetNumber", Context__GetNumber, 0, false, ::app::Uno::Double__typeof(), ::app::Uno::Int__typeof()),
        ::uNewFunction("GetProperty", Context__GetProperty, 0, false, ::app::Uno::Bool__typeof(), ::app::Uno::Int__typeof(), ::app::Uno::Int__typeof()),
        ::uNewFunction("GetProperty", Context__GetProperty_1, 0, false, ::app::Uno::Bool__typeof(), ::app::Uno::Int__typeof(), ::app::Uno::String__typeof()),
        ::uNewFunction("GetString", Context__GetString, 0, false, ::app::Uno::String__typeof(), ::app::Uno::Int__typeof()),
        ::uNewFunction("GetTop", Context__GetTop, 0, false, ::app::Uno::Int__typeof()),
        ::uNewFunction("HasProperty", Context__HasProperty, 0, false, ::app::Uno::Bool__typeof(), ::app::Uno::Int__typeof(), ::app::Uno::String__typeof()),
        ::uNewFunction("IndexToObject", Context__IndexToObject, 0, false, ::uObject__typeof(), ::app::Uno::Int__typeof()),
        ::uNewFunctionVoid("InitCallbacks", Context__InitCallbacks, 0, false),
        ::uNewFunction("IsArray", Context__IsArray, 0, false, ::app::Uno::Bool__typeof(), ::app::Uno::Int__typeof()),
        ::uNewFunction("IsBool", Context__IsBool, 0, false, ::app::Uno::Bool__typeof(), ::app::Uno::Int__typeof()),
        ::uNewFunction("IsFunction", Context__IsFunction, 0, false, ::app::Uno::Bool__typeof(), ::app::Uno::Int__typeof()),
        ::uNewFunction("IsNan", Context__IsNan, 0, false, ::app::Uno::Bool__typeof(), ::app::Uno::Int__typeof()),
        ::uNewFunction("IsNull", Context__IsNull, 0, false, ::app::Uno::Bool__typeof(), ::app::Uno::Int__typeof()),
        ::uNewFunction("IsNullOrUndefined", Context__IsNullOrUndefined, 0, false, ::app::Uno::Bool__typeof(), ::app::Uno::Int__typeof()),
        ::uNewFunction("IsNumber", Context__IsNumber, 0, false, ::app::Uno::Bool__typeof(), ::app::Uno::Int__typeof()),
        ::uNewFunction("IsObject", Context__IsObject, 0, false, ::app::Uno::Bool__typeof(), ::app::Uno::Int__typeof()),
        ::uNewFunction("IsString", Context__IsString, 0, false, ::app::Uno::Bool__typeof(), ::app::Uno::Int__typeof()),
        ::uNewFunction("JsonEncode", Context__JsonEncode, 0, false, ::app::Uno::String__typeof(), ::app::Uno::Int__typeof()),
        ::uNewFunction("MakeArray", Context__MakeArray, 0, false, ::app::Fuse::Scripting::Duktape::JSArray__typeof()),
        ::uNewFunction("MakeObject", Context__MakeObject, 0, false, ::app::Fuse::Scripting::Duktape::JSObject__typeof()),
        ::uNewFunction(".ctor", Context__New_1, 0, true, Context__typeof(), ::app::Fuse::Scripting::IDispatcher__typeof()),
        ::uNewFunctionVoid("Pop", Context__Pop, 0, false),
        ::uNewFunctionVoid("Pop2", Context__Pop2, 0, false),
        ::uNewFunctionVoid("Pop3", Context__Pop3, 0, false),
        ::uNewFunctionVoid("ProxyCallback", Context__ProxyCallback, 0, false, ::app::Uno::IntPtr__typeof()),
        ::uNewFunctionVoid("Push", Context__Push, 0, false, ::app::Uno::Bool__typeof()),
        ::uNewFunctionVoid("Push", Context__Push_1, 0, false, ::app::Fuse::Scripting::Callback__typeof()),
        ::uNewFunctionVoid("Push", Context__Push_2, 0, false, ::app::Uno::Double__typeof()),
        ::uNewFunctionVoid("Push", Context__Push_3, 0, false, ::app::Uno::Int__typeof()),
        ::uNewFunctionVoid("Push", Context__Push_4, 0, false, ::uObject__typeof()),
        ::uNewFunctionVoid("Push", Context__Push_5, 0, false, ::app::Uno::String__typeof()),
        ::uNewFunction("PushArray", Context__PushArray, 0, false, ::app::Uno::Int__typeof()),
        ::uNewFunctionVoid("PushCallbackProxy", Context__PushCallbackProxy, 0, false, ::app::Uno::Int__typeof()),
        ::uNewFunctionVoid("PushDelegate", Context__PushDelegate, 0, false, ::app::Uno::Action__Uno_IntPtr__typeof()),
        ::uNewFunctionVoid("PushEnumerator", Context__PushEnumerator, 0, false, ::app::Uno::Int__typeof(), ::app::Fuse::Scripting::Duktape::EnumFlags__typeof()),
        ::uNewFunctionVoid("PushGlobalObject", Context__PushGlobalObject, 0, false),
        ::uNewFunctionVoid("PushGlobalStash", Context__PushGlobalStash, 0, false),
        ::uNewFunction("PushHeapPtr", Context__PushHeapPtr, 0, false, ::app::Uno::Int__typeof(), ::app::Uno::IntPtr__typeof()),
        ::uNewFunctionVoid("PushNull", Context__PushNull, 0, false),
        ::uNewFunction("PushObject", Context__PushObject, 0, false, ::app::Uno::Int__typeof()),
        ::uNewFunction("PutProperty", Context__PutProperty, 0, false, ::app::Uno::Bool__typeof(), ::app::Uno::Int__typeof(), ::app::Uno::Int__typeof()),
        ::uNewFunction("PutProperty", Context__PutProperty_1, 0, false, ::app::Uno::Bool__typeof(), ::app::Uno::Int__typeof(), ::app::Uno::String__typeof()),
        ::uNewFunction("SafeCall", Context__SafeCall, 0, false, ::app::Uno::Int__typeof(), ::app::Uno::Int__typeof()),
        ::uNewFunction("SafeCallMethod", Context__SafeCallMethod, 0, false, ::app::Uno::Int__typeof(), ::app::Uno::Int__typeof()),
        ::uNewFunction("SafeCompile", Context__SafeCompile, 0, false, ::app::Uno::Int__typeof(), ::app::Fuse::Scripting::Duktape::CompileFlag__typeof()),
        ::uNewFunction("SafeCompileFunction", Context__SafeCompileFunction, 0, false, ::app::Uno::Int__typeof(), ::app::Uno::String__typeof()),
        ::uNewFunction("SafeEval", Context__SafeEval, 0, false, ::app::Uno::Int__typeof(), ::app::Uno::String__typeof()),
        ::uNewFunction("SafeToString", Context__SafeToString, 0, false, ::app::Uno::String__typeof(), ::app::Uno::Int__typeof()),
        ::uNewFunction("Stash", Context__Stash, 0, false, ::app::Uno::String__typeof(), ::app::Uno::IntPtr__typeof()),
        ::uNewFunctionVoid("Unstash", Context__Unstash, 0, false, ::app::Uno::String__typeof()));

    ::uRegisterType(type);
    return type;
}

void Context___ObjInit_1(Context* __this, ::uObject* dispatcher)
{
    ::app::Fuse::Scripting::Context___ObjInit(__this, dispatcher);
    __this->_isAlive = true;
    __this->_handle = ::app::Fuse::Scripting::Duktape::duktape__create_heap_default(NULL);
    __this->_callbacks = ::app::Uno::Collections::Dictionary__int__Fuse_Scripting_Callback__New_1(NULL);
    __this->EvaluateNoResult(::uGetConstString("var __global_object__ = (1,eval)('this');"));
    __this->InitCallbacks();
}

void Context___TypeInit(::uStatic* __this)
{
    Context___emptyArgs = ::uNewArray(::uObject__typeof(), 0);
}

int Context__AddCallback(Context* __this, ::uDelegate* callback)
{
    ::uPtr< ::app::Uno::Collections::Dictionary__int__Fuse_Scripting_Callback*>(__this->_callbacks)->Add(__this->_callbacksCount, ::uNewDelegateNonVirt(::app::Fuse::Scripting::Callback__typeof(), (const void*)::app::Fuse::Scripting::Duktape::CallbackClosure__Proxy, ::app::Fuse::Scripting::Duktape::CallbackClosure__New_1(NULL, __this->_handle, callback)));
    return __this->_callbacksCount++;
}

void Context__Call(Context* __this, int argc)
{
    ::app::Fuse::Scripting::Duktape::duktape__call(NULL, __this->_handle, argc);
}

void Context__CallMethod(Context* __this, int argc)
{
    ::app::Fuse::Scripting::Duktape::duktape__call_method(NULL, __this->_handle, argc);
}

void Context__CheckError(Context* __this, int errorCode)
{
    if (errorCode != 0)
    {
        ::app::Fuse::Scripting::ScriptException* e = __this->GetError(__this->GetTop() - 1);
        __this->Pop();
        U_THROW(e);
    }
}

void Context__CompileFunction(Context* __this, ::uString* source)
{
    ::app::Fuse::Scripting::Duktape::duktape__compile_string(NULL, __this->_handle, 2u, source);
}

void Context__Construct(Context* __this, int argc)
{
    ::app::Fuse::Scripting::Duktape::duktape__new_(NULL, __this->_handle, argc);
}

bool Context__DelProperty(Context* __this, int index)
{
    return ::app::Fuse::Scripting::Duktape::duktape__del_prop(NULL, __this->_handle, index);
}

bool Context__DelProperty_1(Context* __this, int index, int arrIndex)
{
    return ::app::Fuse::Scripting::Duktape::duktape__del_prop_index(NULL, __this->_handle, index, arrIndex);
}

bool Context__DelProperty_2(Context* __this, int index, ::uString* key)
{
    return ::app::Fuse::Scripting::Duktape::duktape__del_prop_string(NULL, __this->_handle, index, key);
}

void Context__Dispose(Context* __this)
{
    ::app::Fuse::Scripting::Duktape::duktape__destroy_heap(NULL, __this->_handle);
    __this->_isAlive = false;
}

void Context__Dump(Context* __this)
{
    ::app::Fuse::Scripting::Duktape::duktape__dump_context_stdout(NULL, __this->_handle);
}

bool Context__EnumeratorNext(Context* __this, int index, bool getValue)
{
    return ::app::Fuse::Scripting::Duktape::duktape__next(NULL, __this->_handle, index, getValue);
}

::uObject* Context__Evaluate_1(Context* __this, ::uString* fileName, ::uString* code)
{
    __this->Push_5(code);
    __this->Push_5(fileName);
    __this->CheckError(__this->SafeCompile(0));
    __this->CheckError(__this->SafeCall(0));
    ::uObject* result = __this->IndexToObject(__this->GetTop() - 1);
    __this->Pop();
    return result;
}

::uObject* Context__Evaluate_2(Context* __this, ::uString* code)
{
    __this->CheckError(__this->SafeEval(code));
    ::uObject* result = __this->IndexToObject(__this->GetTop() - 1);
    __this->Pop();
    return result;
}

void Context__EvaluateNoResult(Context* __this, ::uString* code)
{
    __this->CheckError(__this->SafeEval(code));
    __this->Pop();
}

::app::Fuse::Scripting::Object* Context__get_GlobalObject(Context* __this)
{
    if (__this->_globalObject == NULL)
    {
        __this->PushGlobalObject();
        void* handle = __this->GetHeapPtr(__this->GetTop() - 1);
        __this->Pop();
        __this->_globalObject = ::app::Fuse::Scripting::Duktape::JSObject__New_1(NULL, __this, handle);
    }

    return (::app::Fuse::Scripting::Object*)__this->_globalObject;
}

void* Context__get_Handle(Context* __this)
{
    return __this->_handle;
}

bool Context__get_IsAlive(Context* __this)
{
    return __this->_isAlive;
}

bool Context__GetBool(Context* __this, int index)
{
    return ::app::Fuse::Scripting::Duktape::duktape__get_boolean(NULL, __this->_handle, index);
}

::app::Fuse::Scripting::ScriptException* Context__GetError(Context* __this, int index)
{
    ::uString* name = NULL;
    ::uString* message = NULL;
    ::uString* fileName = NULL;
    int lineNumber = -1;
    ::uString* stack = NULL;

    if (__this->IsObject(index))
    {
        __this->GetProperty_1(index, ::uGetConstString("name"));

        if (__this->IsString(-1))
        {
            name = __this->GetString(-1);
        }

        __this->Pop();
        __this->GetProperty_1(index, ::uGetConstString("message"));

        if (__this->IsString(-1))
        {
            message = __this->GetString(-1);
        }

        __this->Pop();
        __this->GetProperty_1(index, ::uGetConstString("fileName"));

        if (__this->IsString(-1))
        {
            fileName = __this->GetString(-1);
        }

        __this->Pop();
        __this->GetProperty_1(index, ::uGetConstString("lineNumber"));
        lineNumber = __this->GetInt(-1);
        __this->Pop();
        __this->GetProperty_1(index, ::uGetConstString("stack"));

        if (__this->IsString(-1))
        {
            stack = __this->GetString(-1);
        }

        __this->Pop();
    }
    else
    {
        message = __this->SafeToString(index);
    }

    return ::app::Fuse::Scripting::ScriptException__New_3(NULL, name, message, fileName, lineNumber, stack);
}

void* Context__GetHeapPtr(Context* __this, int index)
{
    return ::app::Fuse::Scripting::Duktape::duktape__get_heapptr(NULL, __this->_handle, index);
}

int Context__GetInt(Context* __this, int index)
{
    return ::app::Fuse::Scripting::Duktape::duktape__get_int(NULL, __this->_handle, index);
}

::uLong Context__GetLength(Context* __this, int index)
{
    return ::app::Fuse::Scripting::Duktape::duktape__get_length(NULL, __this->_handle, index);
}

double Context__GetNumber(Context* __this, int index)
{
    return ::app::Fuse::Scripting::Duktape::duktape__get_number(NULL, __this->_handle, index);
}

bool Context__GetProperty(Context* __this, int index, int arrIndex)
{
    return ::app::Fuse::Scripting::Duktape::duktape__get_prop_index(NULL, __this->_handle, index, arrIndex);
}

bool Context__GetProperty_1(Context* __this, int index, ::uString* key)
{
    return ::app::Fuse::Scripting::Duktape::duktape__get_prop_string(NULL, __this->_handle, index, key);
}

::uString* Context__GetString(Context* __this, int index)
{
    return ::app::Fuse::Scripting::Duktape::duktape__get_string(NULL, __this->_handle, index);
}

int Context__GetTop(Context* __this)
{
    return ::app::Fuse::Scripting::Duktape::duktape__get_top(NULL, __this->_handle);
}

bool Context__HasProperty(Context* __this, int index, ::uString* key)
{
    return ::app::Fuse::Scripting::Duktape::duktape__has_prop_string(NULL, __this->_handle, index, key);
}

::uObject* Context__IndexToObject(Context* __this, int index)
{
    if (__this->IsFunction(index))
    {
        return (::uObject*)::app::Fuse::Scripting::Duktape::JSFunction__New_1(NULL, __this, __this->GetHeapPtr(index));
    }

    if (__this->IsArray(index))
    {
        return (::uObject*)::app::Fuse::Scripting::Duktape::JSArray__New_1(NULL, __this, __this->GetHeapPtr(index));
    }

    if (__this->IsObject(index))
    {
        return (::uObject*)::app::Fuse::Scripting::Duktape::JSObject__New_1(NULL, __this, __this->GetHeapPtr(index));
    }

    if (__this->IsNumber(index))
    {
        return ::uBox(::app::Uno::Double__typeof(), __this->GetNumber(index));
    }

    if (__this->IsString(index))
    {
        return (::uObject*)__this->GetString(index);
    }

    if (__this->IsBool(index))
    {
        return ::uBox(::app::Uno::Bool__typeof(), __this->GetBool(index));
    }

    if (__this->IsNullOrUndefined(index))
    {
        return NULL;
    }

    U_THROW(::app::Uno::Exception__New_2(NULL, ::uGetConstString("Could not convert index to object")));
}

void Context__InitCallbacks(Context* __this)
{
    __this->_proxyCallback = ::uNewDelegateNonVirt(::app::Uno::Action__Uno_IntPtr__typeof(), (const void*)Context__ProxyCallback, __this);
    __this->PushDelegate(__this->_proxyCallback);
    __this->PushGlobalObject();
    __this->PushCallbackProxy(-1);
    __this->PutProperty_1(__this->GetTop() - 2, ::uGetConstString("__callback_proxy__"));
    __this->Pop();
}

bool Context__IsArray(Context* __this, int index)
{
    return ::app::Fuse::Scripting::Duktape::duktape__is_array(NULL, __this->_handle, index);
}

bool Context__IsBool(Context* __this, int index)
{
    return ::app::Fuse::Scripting::Duktape::duktape__is_boolean(NULL, __this->_handle, index);
}

bool Context__IsFunction(Context* __this, int index)
{
    return ::app::Fuse::Scripting::Duktape::duktape__is_function(NULL, __this->_handle, index);
}

bool Context__IsNan(Context* __this, int index)
{
    return ::app::Fuse::Scripting::Duktape::duktape__is_nan(NULL, __this->_handle, index);
}

bool Context__IsNull(Context* __this, int index)
{
    return ::app::Fuse::Scripting::Duktape::duktape__is_null(NULL, __this->_handle, index);
}

bool Context__IsNullOrUndefined(Context* __this, int index)
{
    return ::app::Fuse::Scripting::Duktape::duktape__is_null_or_undefined(NULL, __this->_handle, index);
}

bool Context__IsNumber(Context* __this, int index)
{
    return ::app::Fuse::Scripting::Duktape::duktape__is_number(NULL, __this->_handle, index);
}

bool Context__IsObject(Context* __this, int index)
{
    return ::app::Fuse::Scripting::Duktape::duktape__is_object(NULL, __this->_handle, index);
}

bool Context__IsString(Context* __this, int index)
{
    return ::app::Fuse::Scripting::Duktape::duktape__is_string(NULL, __this->_handle, index);
}

::uString* Context__JsonEncode(Context* __this, int index)
{
    return ::app::Fuse::Scripting::Duktape::duktape__json_encode(NULL, __this->_handle, index);
}

::app::Fuse::Scripting::Duktape::JSArray* Context__MakeArray(Context* __this)
{
    int index = __this->PushArray();
    void* ptr = __this->GetHeapPtr(index);
    ::app::Fuse::Scripting::Duktape::JSArray* array = ::app::Fuse::Scripting::Duktape::JSArray__New_1(NULL, __this, ptr);
    __this->Pop();
    return array;
}

::app::Fuse::Scripting::Duktape::JSObject* Context__MakeObject(Context* __this)
{
    int index = __this->PushObject();
    void* ptr = __this->GetHeapPtr(index);
    ::app::Fuse::Scripting::Duktape::JSObject* obj = ::app::Fuse::Scripting::Duktape::JSObject__New_1(NULL, __this, ptr);
    __this->Pop();
    return obj;
}

Context* Context__New_1(::uStatic* __this, ::uObject* dispatcher)
{
    Context* inst = (Context*)::uAllocObject(sizeof(Context), Context__typeof());
    inst->_ObjInit_1(dispatcher);
    return inst;
}

void Context__Pop(Context* __this)
{
    ::app::Fuse::Scripting::Duktape::duktape__pop(NULL, __this->_handle);
}

void Context__Pop2(Context* __this)
{
    ::app::Fuse::Scripting::Duktape::duktape__pop_2(NULL, __this->_handle);
}

void Context__Pop3(Context* __this)
{
    ::app::Fuse::Scripting::Duktape::duktape__pop_3(NULL, __this->_handle);
}

void Context__ProxyCallback(Context* __this, void* ctx)
{
    int argc = (int)__this->GetLength(0);
    ::uArray* args = Context___emptyArgs;

    if (argc != 0)
    {
        args = ::uNewArray(::uObject__typeof(), argc);

        for (int i = 0; i < argc; i++)
        {
            __this->GetProperty(0, i);
            ::uPtr< ::uArray*>(args)->ItemStrong< ::uObject*>(i) = __this->IndexToObject(__this->GetTop() - 1);
            __this->Pop();
        }
    }

    int index = __this->GetInt(__this->GetTop() - 1);
    ::uObject* result = ::uPtr< ::uDelegate*>(::uPtr< ::app::Uno::Collections::Dictionary__int__Fuse_Scripting_Callback*>(__this->_callbacks)->Item(index))->Invoke< ::uObject*, ::uArray*>(args);
    __this->Push_4(result);
}

void Context__Push(Context* __this, bool val)
{
    ::app::Fuse::Scripting::Duktape::duktape__push_boolean(NULL, __this->_handle, val);
}

void Context__Push_1(Context* __this, ::uDelegate* callback)
{
    int index = __this->AddCallback(callback);
    int result = __this->SafeCompileFunction(::app::Uno::String__op_Addition_2(NULL, ::app::Uno::String__op_Addition_2(NULL, ::uGetConstString("function() { return __global_object__.__callback_proxy__(arguments, "), ::app::Uno::Int::ToString(index)), ::uGetConstString("); }")));
    __this->CheckError(result);
}

void Context__Push_2(Context* __this, double val)
{
    ::app::Fuse::Scripting::Duktape::duktape__push_number(NULL, __this->_handle, val);
}

void Context__Push_3(Context* __this, int val)
{
    ::app::Fuse::Scripting::Duktape::duktape__push_int(NULL, __this->_handle, val);
}

void Context__Push_4(Context* __this, ::uObject* value)
{
    if (::uIs(value, ::app::Uno::Int__typeof()))
    {
        __this->Push_3(::uUnbox< int>(::app::Uno::Int__typeof(), value));
        return;
    }

    if (::uIs(value, ::app::Uno::Double__typeof()))
    {
        __this->Push_2(::uUnbox< double>(::app::Uno::Double__typeof(), value));
        return;
    }

    if (::uIs(value, ::app::Uno::String__typeof()))
    {
        __this->Push_5(::uCast< ::uString*>(value, ::app::Uno::String__typeof()));
        return;
    }

    if (::uIs(value, ::app::Uno::Bool__typeof()))
    {
        __this->Push(::uUnbox< bool>(::app::Uno::Bool__typeof(), value));
        return;
    }

    if (value == NULL)
    {
        __this->PushNull();
        return;
    }

    ::uDelegate* c = ::uAs< ::uDelegate*>(value, ::app::Fuse::Scripting::Callback__typeof());

    if (::app::Uno::Delegate__op_Inequality(NULL, (::uDelegate*)c, NULL))
    {
        __this->Push_1(c);
        return;
    }

    ::app::Fuse::Scripting::Duktape::JSFunction* f = ::uAs< ::app::Fuse::Scripting::Duktape::JSFunction*>(value, ::app::Fuse::Scripting::Duktape::JSFunction__typeof());

    if (f != NULL)
    {
        __this->PushHeapPtr(::uPtr< ::app::Fuse::Scripting::Duktape::JSFunction*>(f)->Handle());
        return;
    }

    ::app::Fuse::Scripting::Duktape::JSArray* a = ::uAs< ::app::Fuse::Scripting::Duktape::JSArray*>(value, ::app::Fuse::Scripting::Duktape::JSArray__typeof());

    if (a != NULL)
    {
        __this->PushHeapPtr(::uPtr< ::app::Fuse::Scripting::Duktape::JSArray*>(a)->Handle());
        return;
    }

    ::app::Fuse::Scripting::Duktape::JSObject* o = ::uAs< ::app::Fuse::Scripting::Duktape::JSObject*>(value, ::app::Fuse::Scripting::Duktape::JSObject__typeof());

    if (o != NULL)
    {
        __this->PushHeapPtr(::uPtr< ::app::Fuse::Scripting::Duktape::JSObject*>(o)->Handle());
        return;
    }

    U_THROW(::app::Uno::Exception__New_2(NULL, ::app::Uno::String__op_Addition_1(NULL, ::uGetConstString("Cannot push value: "), value)));
}

void Context__Push_5(Context* __this, ::uString* str)
{
    ::app::Fuse::Scripting::Duktape::duktape__push_string(NULL, __this->_handle, str);
}

int Context__PushArray(Context* __this)
{
    return ::app::Fuse::Scripting::Duktape::duktape__push_array(NULL, __this->_handle);
}

void Context__PushCallbackProxy(Context* __this, int argc)
{
    ::app::Fuse::Scripting::Duktape::duktape__push_callback_proxy(NULL, __this->_handle, argc);
}

void Context__PushDelegate(Context* __this, ::uDelegate* del)
{
    ::app::Fuse::Scripting::Duktape::duktape__push_delegate(NULL, __this->_handle, del);
}

void Context__PushEnumerator(Context* __this, int index, int flags)
{
    ::app::Fuse::Scripting::Duktape::duktape__enum_(NULL, __this->_handle, index, flags);
}

void Context__PushGlobalObject(Context* __this)
{
    ::app::Fuse::Scripting::Duktape::duktape__push_global_object(NULL, __this->_handle);
}

void Context__PushGlobalStash(Context* __this)
{
    ::app::Fuse::Scripting::Duktape::duktape__push_global_stash(NULL, __this->_handle);
}

int Context__PushHeapPtr(Context* __this, void* ptr)
{
    return ::app::Fuse::Scripting::Duktape::duktape__push_heapptr(NULL, __this->_handle, ptr);
}

void Context__PushNull(Context* __this)
{
    ::app::Fuse::Scripting::Duktape::duktape__push_null(NULL, __this->_handle);
}

int Context__PushObject(Context* __this)
{
    return ::app::Fuse::Scripting::Duktape::duktape__push_object(NULL, __this->_handle);
}

bool Context__PutProperty(Context* __this, int index, int arrIndex)
{
    return ::app::Fuse::Scripting::Duktape::duktape__put_prop_index(NULL, __this->_handle, index, arrIndex);
}

bool Context__PutProperty_1(Context* __this, int index, ::uString* key)
{
    return ::app::Fuse::Scripting::Duktape::duktape__put_prop_string(NULL, __this->_handle, index, key);
}

int Context__SafeCall(Context* __this, int argc)
{
    return ::app::Fuse::Scripting::Duktape::duktape__pcall(NULL, __this->_handle, argc);
}

int Context__SafeCallMethod(Context* __this, int argc)
{
    return ::app::Fuse::Scripting::Duktape::duktape__pcall_method(NULL, __this->_handle, argc);
}

int Context__SafeCompile(Context* __this, ::uUInt flags)
{
    return ::app::Fuse::Scripting::Duktape::duktape__pcompile(NULL, __this->_handle, flags);
}

int Context__SafeCompileFunction(Context* __this, ::uString* source)
{
    return ::app::Fuse::Scripting::Duktape::duktape__pcompile_string(NULL, __this->_handle, 2u, source);
}

int Context__SafeEval(Context* __this, ::uString* code)
{
    return ::app::Fuse::Scripting::Duktape::duktape__peval_string(NULL, __this->_handle, code);
}

::uString* Context__SafeToString(Context* __this, int index)
{
    return ::app::Fuse::Scripting::Duktape::duktape__safe_to_string(NULL, __this->_handle, index);
}

::uString* Context__Stash(Context* __this, void* heapPtr)
{
    ::uString* stashKey = ::app::Uno::String__op_Addition_2(NULL, ::uGetConstString("__stashKey"), ::app::Uno::Int::ToString(__this->_stashKey));
    __this->_stashKey++;
    __this->PushGlobalStash();
    __this->PushHeapPtr(heapPtr);
    __this->PutProperty_1(__this->GetTop() - 2, stashKey);
    __this->Pop();
    return stashKey;
}

void Context__Unstash(Context* __this, ::uString* stashKey)
{
    __this->PushGlobalStash();
    __this->Push_5(stashKey);
    __this->DelProperty(__this->GetTop() - 1);
    __this->Pop();
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Scripting.Duktape\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

duktape__uType* duktape__typeof()
{
    static ::uStaticStrong<duktape__uType*> type;
    if (type != NULL) return type;

    type = (duktape__uType*)::uAllocClassType(sizeof(duktape__uType), "Fuse.Scripting.Duktape.duktape");

    type->SetFunctions(88,
        ::uNewFunction("alloc", duktape__alloc, 0, true, ::app::Uno::IntPtr__typeof(), ::app::Uno::IntPtr__typeof(), ::app::Uno::UInt__typeof()),
        ::uNewFunction("alloc_raw", duktape__alloc_raw, 0, true, ::app::Uno::IntPtr__typeof(), ::app::Uno::IntPtr__typeof(), ::app::Uno::UInt__typeof()),
        ::uNewFunctionVoid("base64_decode", duktape__base64_decode, 0, true, ::app::Uno::IntPtr__typeof(), ::app::Uno::Int__typeof()),
        ::uNewFunction("base64_encode", duktape__base64_encode, 0, true, ::app::Uno::String__typeof(), ::app::Uno::IntPtr__typeof(), ::app::Uno::Int__typeof()),
        ::uNewFunctionVoid("call", duktape__call, 0, true, ::app::Uno::IntPtr__typeof(), ::app::Uno::Int__typeof()),
        ::uNewFunctionVoid("call_method", duktape__call_method, 0, true, ::app::Uno::IntPtr__typeof(), ::app::Uno::Int__typeof()),
        ::uNewFunction("char_code_at", duktape__char_code_at, 0, true, ::app::Uno::Int__typeof(), ::app::Uno::IntPtr__typeof(), ::app::Uno::Int__typeof(), ::app::Uno::UInt__typeof()),
        ::uNewFunction("check_stack", duktape__check_stack, 0, true, ::app::Uno::Bool__typeof(), ::app::Uno::IntPtr__typeof(), ::app::Uno::Int__typeof()),
        ::uNewFunction("check_stack_top", duktape__check_stack_top, 0, true, ::app::Uno::Bool__typeof(), ::app::Uno::IntPtr__typeof(), ::app::Uno::Int__typeof()),
        ::uNewFunction("check_type", duktape__check_type, 0, true, ::app::Uno::Bool__typeof(), ::app::Uno::IntPtr__typeof(), ::app::Uno::Int__typeof(), ::app::Uno::Int__typeof()),
        ::uNewFunction("check_type_mask", duktape__check_type_mask, 0, true, ::app::Uno::Bool__typeof(), ::app::Uno::IntPtr__typeof(), ::app::Uno::Int__typeof(), ::app::Uno::UInt__typeof()),
        ::uNewFunctionVoid("compact", duktape__compact, 0, true, ::app::Uno::IntPtr__typeof(), ::app::Uno::Int__typeof()),
        ::uNewFunctionVoid("compile", duktape__compile, 0, true, ::app::Uno::IntPtr__typeof(), ::app::Uno::UInt__typeof()),
        ::uNewFunctionVoid("compile_file", duktape__compile_file, 0, true, ::app::Uno::IntPtr__typeof(), ::app::Uno::UInt__typeof(), ::app::Uno::String__typeof()),
        ::uNewFunctionVoid("compile_lstring", duktape__compile_lstring, 0, true, ::app::Uno::IntPtr__typeof(), ::app::Uno::UInt__typeof(), ::app::Uno::String__typeof(), ::app::Uno::UInt__typeof()),
        ::uNewFunctionVoid("compile_lstring_filename", duktape__compile_lstring_filename, 0, true, ::app::Uno::IntPtr__typeof(), ::app::Uno::UInt__typeof(), ::app::Uno::String__typeof(), ::app::Uno::UInt__typeof()),
        ::uNewFunctionVoid("compile_string", duktape__compile_string, 0, true, ::app::Uno::IntPtr__typeof(), ::app::Uno::UInt__typeof(), ::app::Uno::String__typeof()),
        ::uNewFunctionVoid("compile_string_filename", duktape__compile_string_filename, 0, true, ::app::Uno::IntPtr__typeof(), ::app::Uno::UInt__typeof(), ::app::Uno::String__typeof()),
        ::uNewFunctionVoid("concat", duktape__concat, 0, true, ::app::Uno::IntPtr__typeof(), ::app::Uno::Int__typeof()),
        ::uNewFunctionVoid("copy", duktape__copy, 0, true, ::app::Uno::IntPtr__typeof(), ::app::Uno::Int__typeof(), ::app::Uno::Int__typeof()),
        ::uNewFunction("create_heap_default", duktape__create_heap_default, 0, true, ::app::Uno::IntPtr__typeof()),
        ::uNewFunctionVoid("def_prop", duktape__def_prop, 0, true, ::app::Uno::IntPtr__typeof(), ::app::Uno::Int__typeof(), ::app::Uno::UInt__typeof()),
        ::uNewFunction("del_prop", duktape__del_prop, 0, true, ::app::Uno::Bool__typeof(), ::app::Uno::IntPtr__typeof(), ::app::Uno::Int__typeof()),
        ::uNewFunction("del_prop_index", duktape__del_prop_index, 0, true, ::app::Uno::Bool__typeof(), ::app::Uno::IntPtr__typeof(), ::app::Uno::Int__typeof(), ::app::Uno::Int__typeof()),
        ::uNewFunction("del_prop_string", duktape__del_prop_string, 0, true, ::app::Uno::Bool__typeof(), ::app::Uno::IntPtr__typeof(), ::app::Uno::Int__typeof(), ::app::Uno::String__typeof()),
        ::uNewFunctionVoid("destroy_heap", duktape__destroy_heap, 0, true, ::app::Uno::IntPtr__typeof()),
        ::uNewFunctionVoid("dump_context_stderr", duktape__dump_context_stderr, 0, true, ::app::Uno::IntPtr__typeof()),
        ::uNewFunctionVoid("dump_context_stdout", duktape__dump_context_stdout, 0, true, ::app::Uno::IntPtr__typeof()),
        ::uNewFunctionVoid("dup", duktape__dup, 0, true, ::app::Uno::IntPtr__typeof(), ::app::Uno::Int__typeof()),
        ::uNewFunctionVoid("dup_top", duktape__dup_top, 0, true, ::app::Uno::IntPtr__typeof()),
        ::uNewFunctionVoid("enum_", duktape__enum_, 0, true, ::app::Uno::IntPtr__typeof(), ::app::Uno::Int__typeof(), ::app::Fuse::Scripting::Duktape::EnumFlags__typeof()),
        ::uNewFunctionVoid("enum_", duktape__enum__1, 0, true, ::app::Uno::IntPtr__typeof(), ::app::Uno::Int__typeof(), ::app::Uno::UInt__typeof()),
        ::uNewFunction("equals", duktape__equals, 0, true, ::app::Uno::Bool__typeof(), ::app::Uno::IntPtr__typeof(), ::app::Uno::Int__typeof(), ::app::Uno::Int__typeof()),
        ::uNewFunctionVoid("error", duktape__error, 0, true, ::app::Uno::IntPtr__typeof(), ::app::Uno::String__typeof()),
        ::uNewFunctionVoid("eval", duktape__eval, 0, true, ::app::Uno::IntPtr__typeof()),
        ::uNewFunctionVoid("eval_file", duktape__eval_file, 0, true, ::app::Uno::IntPtr__typeof(), ::app::Uno::String__typeof()),
        ::uNewFunctionVoid("eval_file_noresult", duktape__eval_file_noresult, 0, true, ::app::Uno::IntPtr__typeof(), ::app::Uno::String__typeof()),
        ::uNewFunction("get_boolean", duktape__get_boolean, 0, true, ::app::Uno::Bool__typeof(), ::app::Uno::IntPtr__typeof(), ::app::Uno::Int__typeof()),
        ::uNewFunction("get_heapptr", duktape__get_heapptr, 0, true, ::app::Uno::IntPtr__typeof(), ::app::Uno::IntPtr__typeof(), ::app::Uno::Int__typeof()),
        ::uNewFunction("get_int", duktape__get_int, 0, true, ::app::Uno::Int__typeof(), ::app::Uno::IntPtr__typeof(), ::app::Uno::Int__typeof()),
        ::uNewFunction("get_length", duktape__get_length, 0, true, ::app::Uno::Long__typeof(), ::app::Uno::IntPtr__typeof(), ::app::Uno::Int__typeof()),
        ::uNewFunction("get_number", duktape__get_number, 0, true, ::app::Uno::Double__typeof(), ::app::Uno::IntPtr__typeof(), ::app::Uno::Int__typeof()),
        ::uNewFunction("get_prop_index", duktape__get_prop_index, 0, true, ::app::Uno::Bool__typeof(), ::app::Uno::IntPtr__typeof(), ::app::Uno::Int__typeof(), ::app::Uno::Int__typeof()),
        ::uNewFunction("get_prop_string", duktape__get_prop_string, 0, true, ::app::Uno::Bool__typeof(), ::app::Uno::IntPtr__typeof(), ::app::Uno::Int__typeof(), ::app::Uno::String__typeof()),
        ::uNewFunction("get_string", duktape__get_string, 0, true, ::app::Uno::String__typeof(), ::app::Uno::IntPtr__typeof(), ::app::Uno::Int__typeof()),
        ::uNewFunction("get_top", duktape__get_top, 0, true, ::app::Uno::Int__typeof(), ::app::Uno::IntPtr__typeof()),
        ::uNewFunction("has_prop_string", duktape__has_prop_string, 0, true, ::app::Uno::Bool__typeof(), ::app::Uno::IntPtr__typeof(), ::app::Uno::Int__typeof(), ::app::Uno::String__typeof()),
        ::uNewFunction("is_array", duktape__is_array, 0, true, ::app::Uno::Bool__typeof(), ::app::Uno::IntPtr__typeof(), ::app::Uno::Int__typeof()),
        ::uNewFunction("is_boolean", duktape__is_boolean, 0, true, ::app::Uno::Bool__typeof(), ::app::Uno::IntPtr__typeof(), ::app::Uno::Int__typeof()),
        ::uNewFunction("is_callable", duktape__is_callable, 0, true, ::app::Uno::Bool__typeof(), ::app::Uno::IntPtr__typeof(), ::app::Uno::Int__typeof()),
        ::uNewFunction("is_function", duktape__is_function, 0, true, ::app::Uno::Bool__typeof(), ::app::Uno::IntPtr__typeof(), ::app::Uno::Int__typeof()),
        ::uNewFunction("is_nan", duktape__is_nan, 0, true, ::app::Uno::Bool__typeof(), ::app::Uno::IntPtr__typeof(), ::app::Uno::Int__typeof()),
        ::uNewFunction("is_null", duktape__is_null, 0, true, ::app::Uno::Bool__typeof(), ::app::Uno::IntPtr__typeof(), ::app::Uno::Int__typeof()),
        ::uNewFunction("is_null_or_undefined", duktape__is_null_or_undefined, 0, true, ::app::Uno::Bool__typeof(), ::app::Uno::IntPtr__typeof(), ::app::Uno::Int__typeof()),
        ::uNewFunction("is_number", duktape__is_number, 0, true, ::app::Uno::Bool__typeof(), ::app::Uno::IntPtr__typeof(), ::app::Uno::Int__typeof()),
        ::uNewFunction("is_object", duktape__is_object, 0, true, ::app::Uno::Bool__typeof(), ::app::Uno::IntPtr__typeof(), ::app::Uno::Int__typeof()),
        ::uNewFunction("is_string", duktape__is_string, 0, true, ::app::Uno::Bool__typeof(), ::app::Uno::IntPtr__typeof(), ::app::Uno::Int__typeof()),
        ::uNewFunctionVoid("json_decode", duktape__json_decode, 0, true, ::app::Uno::IntPtr__typeof(), ::app::Uno::Int__typeof()),
        ::uNewFunction("json_encode", duktape__json_encode, 0, true, ::app::Uno::String__typeof(), ::app::Uno::IntPtr__typeof(), ::app::Uno::Int__typeof()),
        ::uNewFunctionVoid("new_", duktape__new_, 0, true, ::app::Uno::IntPtr__typeof(), ::app::Uno::Int__typeof()),
        ::uNewFunction("next", duktape__next, 0, true, ::app::Uno::Bool__typeof(), ::app::Uno::IntPtr__typeof(), ::app::Uno::Int__typeof(), ::app::Uno::Bool__typeof()),
        ::uNewFunction("pcall", duktape__pcall, 0, true, ::app::Uno::Int__typeof(), ::app::Uno::IntPtr__typeof(), ::app::Uno::Int__typeof()),
        ::uNewFunction("pcall_method", duktape__pcall_method, 0, true, ::app::Uno::Int__typeof(), ::app::Uno::IntPtr__typeof(), ::app::Uno::Int__typeof()),
        ::uNewFunction("pcall_prop", duktape__pcall_prop, 0, true, ::app::Uno::Int__typeof(), ::app::Uno::IntPtr__typeof(), ::app::Uno::Int__typeof(), ::app::Uno::Int__typeof()),
        ::uNewFunction("pcompile", duktape__pcompile, 0, true, ::app::Uno::Int__typeof(), ::app::Uno::IntPtr__typeof(), ::app::Uno::UInt__typeof()),
        ::uNewFunction("pcompile_string", duktape__pcompile_string, 0, true, ::app::Uno::Int__typeof(), ::app::Uno::IntPtr__typeof(), ::app::Uno::UInt__typeof(), ::app::Uno::String__typeof()),
        ::uNewFunction("peval_string", duktape__peval_string, 0, true, ::app::Uno::Int__typeof(), ::app::Uno::IntPtr__typeof(), ::app::Uno::String__typeof()),
        ::uNewFunction("peval_string_noresult", duktape__peval_string_noresult, 0, true, ::app::Uno::Int__typeof(), ::app::Uno::IntPtr__typeof(), ::app::Uno::String__typeof()),
        ::uNewFunctionVoid("pop", duktape__pop, 0, true, ::app::Uno::IntPtr__typeof()),
        ::uNewFunctionVoid("pop_2", duktape__pop_2, 0, true, ::app::Uno::IntPtr__typeof()),
        ::uNewFunctionVoid("pop_3", duktape__pop_3, 0, true, ::app::Uno::IntPtr__typeof()),
        ::uNewFunction("push_array", duktape__push_array, 0, true, ::app::Uno::Int__typeof(), ::app::Uno::IntPtr__typeof()),
        ::uNewFunctionVoid("push_boolean", duktape__push_boolean, 0, true, ::app::Uno::IntPtr__typeof(), ::app::Uno::Bool__typeof()),
        ::uNewFunctionVoid("push_callback_proxy", duktape__push_callback_proxy, 0, true, ::app::Uno::IntPtr__typeof(), ::app::Uno::Int__typeof()),
        ::uNewFunctionVoid("push_delegate", duktape__push_delegate, 0, true, ::app::Uno::IntPtr__typeof(), ::app::Uno::Action__Uno_IntPtr__typeof()),
        ::uNewFunctionVoid("push_global_object", duktape__push_global_object, 0, true, ::app::Uno::IntPtr__typeof()),
        ::uNewFunctionVoid("push_global_stash", duktape__push_global_stash, 0, true, ::app::Uno::IntPtr__typeof()),
        ::uNewFunction("push_heapptr", duktape__push_heapptr, 0, true, ::app::Uno::Int__typeof(), ::app::Uno::IntPtr__typeof(), ::app::Uno::IntPtr__typeof()),
        ::uNewFunctionVoid("push_int", duktape__push_int, 0, true, ::app::Uno::IntPtr__typeof(), ::app::Uno::Int__typeof()),
        ::uNewFunctionVoid("push_null", duktape__push_null, 0, true, ::app::Uno::IntPtr__typeof()),
        ::uNewFunctionVoid("push_number", duktape__push_number, 0, true, ::app::Uno::IntPtr__typeof(), ::app::Uno::Double__typeof()),
        ::uNewFunction("push_object", duktape__push_object, 0, true, ::app::Uno::Int__typeof(), ::app::Uno::IntPtr__typeof()),
        ::uNewFunctionVoid("push_string", duktape__push_string, 0, true, ::app::Uno::IntPtr__typeof(), ::app::Uno::String__typeof()),
        ::uNewFunction("put_prop_index", duktape__put_prop_index, 0, true, ::app::Uno::Bool__typeof(), ::app::Uno::IntPtr__typeof(), ::app::Uno::Int__typeof(), ::app::Uno::Int__typeof()),
        ::uNewFunction("put_prop_string", duktape__put_prop_string, 0, true, ::app::Uno::Bool__typeof(), ::app::Uno::IntPtr__typeof(), ::app::Uno::Int__typeof(), ::app::Uno::String__typeof()),
        ::uNewFunction("safe_to_string", duktape__safe_to_string, 0, true, ::app::Uno::String__typeof(), ::app::Uno::IntPtr__typeof(), ::app::Uno::Int__typeof()),
        ::uNewFunctionVoid("swap_top", duktape__swap_top, 0, true, ::app::Uno::IntPtr__typeof(), ::app::Uno::Int__typeof()),
        ::uNewFunction("to_number", duktape__to_number, 0, true, ::app::Uno::Double__typeof(), ::app::Uno::IntPtr__typeof(), ::app::Uno::Int__typeof()));

    ::uRegisterType(type);
    return type;
}

void* duktape__alloc(::uStatic* __this, void* ctx, ::uUInt size)
{
    return duk_alloc(ctx, size);
}

void* duktape__alloc_raw(::uStatic* __this, void* ctx, ::uUInt size)
{
    return duk_alloc_raw(ctx, size);
}

void duktape__base64_decode(::uStatic* __this, void* ctx, int index)
{
    duk_base64_decode(ctx, index);
}

::uString* duktape__base64_encode(::uStatic* __this, void* ctx, int index)
{
    return ::uNewStringUtf8(duk_base64_encode(ctx, index));
}

void duktape__call(::uStatic* __this, void* ctx, int nargs)
{
    duk_call(ctx, nargs);
}

void duktape__call_method(::uStatic* __this, void* ctx, int nargs)
{
    duk_call_method(ctx, nargs);
}

int duktape__char_code_at(::uStatic* __this, void* ctx, int index, ::uUInt char_offset)
{
    return duk_char_code_at(ctx, index, char_offset);
}

bool duktape__check_stack(::uStatic* __this, void* ctx, int extra)
{
    return duk_check_stack(ctx, extra);
}

bool duktape__check_stack_top(::uStatic* __this, void* ctx, int top)
{
    return duk_check_stack_top(ctx, top);
}

bool duktape__check_type(::uStatic* __this, void* ctx, int index, int type)
{
    return duk_check_type(ctx, index, type);
}

bool duktape__check_type_mask(::uStatic* __this, void* ctx, int index, ::uUInt mask)
{
    return duk_check_type_mask(ctx, index, mask);
}

void duktape__compact(::uStatic* __this, void* ctx, int obj_index)
{
    duk_compact(ctx, obj_index);
}

void duktape__compile(::uStatic* __this, void* ctx, ::uUInt flags)
{
    duk_compile(ctx, flags);
}

void duktape__compile_file(::uStatic* __this, void* ctx, ::uUInt flags, ::uString* path)
{
    duk_compile_file(ctx, flags, ::uStringToCStr(path));
}

void duktape__compile_lstring(::uStatic* __this, void* ctx, ::uUInt flags, ::uString* src, ::uUInt len)
{
    duk_compile_lstring(ctx, flags, ::uStringToCStr(src), len);
}

void duktape__compile_lstring_filename(::uStatic* __this, void* ctx, ::uUInt flags, ::uString* src, ::uUInt len)
{
    duk_compile_lstring_filename(ctx, flags, ::uStringToCStr(src), len);
}

void duktape__compile_string(::uStatic* __this, void* ctx, ::uUInt flags, ::uString* src)
{
    duk_compile_string(ctx, flags, ::uStringToCStr(src));
}

void duktape__compile_string_filename(::uStatic* __this, void* ctx, ::uUInt flags, ::uString* src)
{
    duk_compile_string_filename(ctx, flags, ::uStringToCStr(src));
}

void duktape__concat(::uStatic* __this, void* ctx, int count)
{
    duk_concat(ctx, count);
}

void duktape__copy(::uStatic* __this, void* ctx, int from_index, int to_index)
{
    duk_copy(ctx, from_index, to_index);
}

void* duktape__create_heap_default(::uStatic* __this)
{
    return duk_create_heap_default();
}

void duktape__def_prop(::uStatic* __this, void* ctx, int obj_index, ::uUInt flags)
{
    duk_def_prop(ctx, obj_index, flags);
}

bool duktape__del_prop(::uStatic* __this, void* ctx, int obj_index)
{
    return duk_del_prop(ctx, obj_index);
}

bool duktape__del_prop_index(::uStatic* __this, void* ctx, int obj_index, int arr_index)
{
    return duk_del_prop_index(ctx, obj_index, arr_index);
}

bool duktape__del_prop_string(::uStatic* __this, void* ctx, int obj_index, ::uString* key)
{
    return duk_del_prop_string(ctx, obj_index, ::uStringToCStr(key));
}

void duktape__destroy_heap(::uStatic* __this, void* ctx)
{
    duk_destroy_heap(ctx);
}

void duktape__dump_context_stderr(::uStatic* __this, void* ctx)
{
    duk_dump_context_stderr(ctx);
}

void duktape__dump_context_stdout(::uStatic* __this, void* ctx)
{
    duk_dump_context_stdout(ctx);
}

void duktape__dup(::uStatic* __this, void* ctx, int from_index)
{
    duk_dup(ctx, from_index);
}

void duktape__dup_top(::uStatic* __this, void* ctx)
{
    duk_dup_top(ctx);
}

void duktape__enum_(::uStatic* __this, void* ctx, int index, int flags)
{
    duk_enum(ctx, index, flags);
}

void duktape__enum__1(::uStatic* __this, void* ctx, int obj_index, ::uUInt enum_flags)
{
    duk_enum(ctx, obj_index, enum_flags);
}

bool duktape__equals(::uStatic* __this, void* ctx, int index1, int index2)
{
    return duk_equals(ctx, index1, index2);
}

void duktape__error(::uStatic* __this, void* ctx, ::uString* message)
{
    duk_error(ctx, DUK_ERR_ERROR, ::uStringToCStr(message));
}

void duktape__eval(::uStatic* __this, void* ctx)
{
    duk_eval(ctx);
}

void duktape__eval_file(::uStatic* __this, void* ctx, ::uString* path)
{
    duk_eval_file(ctx, ::uStringToCStr(path));
}

void duktape__eval_file_noresult(::uStatic* __this, void* ctx, ::uString* path)
{
    duk_eval_file_noresult(ctx, ::uStringToCStr(path));
}

bool duktape__get_boolean(::uStatic* __this, void* ctx, int index)
{
    return duk_get_boolean(ctx, index);
}

void* duktape__get_heapptr(::uStatic* __this, void* ctx, int index)
{
    return duk_get_heapptr(ctx, index);
}

int duktape__get_int(::uStatic* __this, void* ctx, int index)
{
    return duk_get_int(ctx, index);
}

::uLong duktape__get_length(::uStatic* __this, void* ctx, int index)
{
    return duk_get_length(ctx, index);
}

double duktape__get_number(::uStatic* __this, void* ctx, int index)
{
    return duk_get_number(ctx, index);
}

bool duktape__get_prop_index(::uStatic* __this, void* ctx, int index, int arr_index)
{
    return duk_get_prop_index(ctx, index, arr_index);
}

bool duktape__get_prop_string(::uStatic* __this, void* ctx, int obj_index, ::uString* key)
{
    return duk_get_prop_string(ctx, obj_index, ::uStringToCStr(key));
}

::uString* duktape__get_string(::uStatic* __this, void* ctx, int index)
{
    return ::uNewStringUtf8(duk_get_string(ctx, index));
}

int duktape__get_top(::uStatic* __this, void* ctx)
{
    return duk_get_top(ctx);
}

bool duktape__has_prop_string(::uStatic* __this, void* ctx, int index, ::uString* key)
{
    return duk_has_prop_string(ctx, index, ::uStringToCStr(key));
}

bool duktape__is_array(::uStatic* __this, void* ctx, int index)
{
    return duk_is_array(ctx, index);
}

bool duktape__is_boolean(::uStatic* __this, void* ctx, int index)
{
    return duk_is_boolean(ctx, index);
}

bool duktape__is_callable(::uStatic* __this, void* ctx, int index)
{
    return duk_is_callable(ctx, index);
}

bool duktape__is_function(::uStatic* __this, void* ctx, int index)
{
    return duk_is_function(ctx, index);
}

bool duktape__is_nan(::uStatic* __this, void* ctx, int index)
{
    return duk_is_nan(ctx, index);
}

bool duktape__is_null(::uStatic* __this, void* ctx, int index)
{
    return duk_is_null(ctx, index);
}

bool duktape__is_null_or_undefined(::uStatic* __this, void* ctx, int index)
{
    return duk_is_null_or_undefined(ctx, index);
}

bool duktape__is_number(::uStatic* __this, void* ctx, int index)
{
    return duk_is_number(ctx, index);
}

bool duktape__is_object(::uStatic* __this, void* ctx, int index)
{
    return duk_is_object(ctx, index);
}

bool duktape__is_string(::uStatic* __this, void* ctx, int index)
{
    return duk_is_string(ctx, index);
}

void duktape__json_decode(::uStatic* __this, void* ctx, int index)
{
    duk_json_decode(ctx, index);
}

::uString* duktape__json_encode(::uStatic* __this, void* ctx, int index)
{
    return ::uNewStringUtf8(duk_json_encode(ctx, index));
}

void duktape__new_(::uStatic* __this, void* ctx, int nargs)
{
    duk_new(ctx, nargs);
}

bool duktape__next(::uStatic* __this, void* ctx, int index, bool getValue)
{
    return duk_next(ctx, index, getValue);
}

int duktape__pcall(::uStatic* __this, void* ctx, int nargs)
{
    return duk_pcall(ctx, nargs);
}

int duktape__pcall_method(::uStatic* __this, void* ctx, int nargs)
{
    return duk_pcall_method(ctx, nargs);
}

int duktape__pcall_prop(::uStatic* __this, void* ctx, int obj_index, int nargs)
{
    return duk_pcall_prop(ctx, obj_index, nargs);
}

int duktape__pcompile(::uStatic* __this, void* ctx, ::uUInt flags)
{
    return duk_pcompile(ctx, flags);
}

int duktape__pcompile_string(::uStatic* __this, void* ctx, ::uUInt flags, ::uString* src)
{
    return duk_pcompile_string(ctx, flags, ::uStringToCStr(src));
}

int duktape__peval_string(::uStatic* __this, void* ctx, ::uString* code)
{
    return duk_peval_string(ctx, ::uStringToCStr(code));
}

int duktape__peval_string_noresult(::uStatic* __this, void* ctx, ::uString* str)
{
    return duk_peval_string_noresult(ctx, ::uStringToCStr(str));
}

void duktape__pop(::uStatic* __this, void* ctx)
{
    duk_pop(ctx);
}

void duktape__pop_2(::uStatic* __this, void* ctx)
{
    duk_pop_2(ctx);
}

void duktape__pop_3(::uStatic* __this, void* ctx)
{
    duk_pop_3(ctx);
}

int duktape__push_array(::uStatic* __this, void* ctx)
{
    return duk_push_array(ctx);
}

void duktape__push_boolean(::uStatic* __this, void* ctx, bool value)
{
    duk_push_boolean(ctx, value);
}

void duktape__push_callback_proxy(::uStatic* __this, void* ctx, int argc)
{
    push_callback_proxy(ctx, argc);
}

void duktape__push_delegate(::uStatic* __this, void* ctx, ::uDelegate* del)
{
    push_delegate(ctx, del);
}

void duktape__push_global_object(::uStatic* __this, void* ctx)
{
    duk_push_global_object(ctx);
}

void duktape__push_global_stash(::uStatic* __this, void* ctx)
{
    duk_push_global_stash(ctx);
}

int duktape__push_heapptr(::uStatic* __this, void* ctx, void* ptr)
{
    return duk_push_heapptr(ctx, ptr);
}

void duktape__push_int(::uStatic* __this, void* ctx, int val)
{
    duk_push_int(ctx, val);
}

void duktape__push_null(::uStatic* __this, void* ctx)
{
    duk_push_null(ctx);
}

void duktape__push_number(::uStatic* __this, void* ctx, double val)
{
    duk_push_number(ctx, val);
}

int duktape__push_object(::uStatic* __this, void* ctx)
{
    return duk_push_object(ctx);
}

void duktape__push_string(::uStatic* __this, void* ctx, ::uString* str)
{
    ::duk_push_string(ctx, ::uStringToCStr(str));
}

bool duktape__put_prop_index(::uStatic* __this, void* ctx, int index, int arr_index)
{
    return duk_put_prop_index(ctx, index, arr_index);
}

bool duktape__put_prop_string(::uStatic* __this, void* ctx, int obj_index, ::uString* key)
{
    return duk_put_prop_string(ctx, obj_index, ::uStringToCStr(key));
}

::uString* duktape__safe_to_string(::uStatic* __this, void* ctx, int index)
{
    return ::uNewStringUtf8(duk_safe_to_string(ctx, index));
}

void duktape__swap_top(::uStatic* __this, void* ctx, int index)
{
    duk_swap_top(ctx, index);
}

double duktape__to_number(::uStatic* __this, void* ctx, int index)
{
    return duk_to_number(ctx, index);
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Scripting.Duktape\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

::uEnumType* EnumFlags__typeof()
{
    static ::uStaticStrong< ::uEnumType*> type;
    if (type != NULL) return type;

    type = ::uAllocEnumType("Fuse.Scripting.Duktape.EnumFlags", ::app::Uno::Int__typeof(), 6);

    type->SetLiterals(
        "DUK_ENUM_INCLUDE_NONENUMERABLE", 1LL,
        "DUK_ENUM_INCLUDE_INTERNAL", 2LL,
        "DUK_ENUM_OWN_PROPERTIES_ONLY", 4LL,
        "DUK_ENUM_ARRAY_INDICES_ONLY", 8LL,
        "DUK_ENUM_SORT_ARRAY_INDICES", 16LL,
        "DUK_ENUM_NO_PROXY_BEHAVIOR", 32LL);

    ::uRegisterType(type);
    return type;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Scripting.Duktape\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

JSArray__uType* JSArray__typeof()
{
    static ::uStaticStrong<JSArray__uType*> type;
    if (type != NULL) return type;

    type = (JSArray__uType*)::uAllocClassType(sizeof(JSArray__uType), "Fuse.Scripting.Duktape.JSArray", false, 0, 2, 0);

    type->SetBaseType(::app::Fuse::Scripting::Array__typeof());
    type->__fp_Equals_2 = (bool(*)(::app::Fuse::Scripting::Array*, ::app::Fuse::Scripting::Array*))JSArray__Equals_2;
    type->__fp_get_Item = (::uObject*(*)(::app::Fuse::Scripting::Array*, int))JSArray__get_Item;
    type->__fp_get_Length = (int(*)(::app::Fuse::Scripting::Array*))JSArray__get_Length;
    type->__fp_set_Item = (void(*)(::app::Fuse::Scripting::Array*, int, ::uObject*))JSArray__set_Item;

    type->SetStrongRefs(
        "_ctx", offsetof(JSArray, _ctx),
        "_stashKey", offsetof(JSArray, _stashKey));

    type->SetFields(3,
        ::uNewField("_ctx", NULL, offsetof(JSArray, _ctx), ::app::Fuse::Scripting::Duktape::Context__typeof()),
        ::uNewField("_handle", NULL, offsetof(JSArray, _handle), ::app::Uno::IntPtr__typeof()),
        ::uNewField("_stashKey", NULL, offsetof(JSArray, _stashKey), ::app::Uno::String__typeof()));

    type->SetFunctions(4,
        ::uNewFunction("Get", JSArray__Get, 0, false, ::uObject__typeof(), ::app::Uno::Int__typeof()),
        ::uNewFunction("get_Handle", JSArray__get_Handle, 0, false, ::app::Uno::IntPtr__typeof()),
        ::uNewFunction(".ctor", JSArray__New_1, 0, true, JSArray__typeof(), ::app::Fuse::Scripting::Duktape::Context__typeof(), ::app::Uno::IntPtr__typeof()),
        ::uNewFunctionVoid("Set", JSArray__Set, 0, false, ::app::Uno::Int__typeof(), ::uObject__typeof()));

    ::uRegisterType(type);
    return type;
}

void JSArray___ObjInit_1(JSArray* __this, ::app::Fuse::Scripting::Duktape::Context* ctx, void* handle)
{
    ::app::Fuse::Scripting::Array___ObjInit(__this);
    __this->_ctx = ctx;
    __this->_handle = handle;
    __this->_stashKey = ::uPtr< ::app::Fuse::Scripting::Duktape::Context*>(__this->_ctx)->Stash(__this->_handle);
}

bool JSArray__Equals_2(JSArray* __this, ::app::Fuse::Scripting::Array* a)
{
    JSArray* ja = ::uAs< JSArray*>(a, JSArray__typeof());

    if (ja == NULL)
    {
        return false;
    }

    return (__this->_ctx == ::uPtr< JSArray*>(ja)->_ctx) && ::app::Uno::IntPtr__op_Equality(NULL, __this->_handle, ::uPtr< JSArray*>(ja)->_handle);
}

::uObject* JSArray__Get(JSArray* __this, int index)
{
    int objIndex = ::uPtr< ::app::Fuse::Scripting::Duktape::Context*>(__this->_ctx)->PushHeapPtr(__this->_handle);
    ::uPtr< ::app::Fuse::Scripting::Duktape::Context*>(__this->_ctx)->GetProperty(objIndex, index);
    ::uObject* res = ::uPtr< ::app::Fuse::Scripting::Duktape::Context*>(__this->_ctx)->IndexToObject(::uPtr< ::app::Fuse::Scripting::Duktape::Context*>(__this->_ctx)->GetTop() - 1);
    ::uPtr< ::app::Fuse::Scripting::Duktape::Context*>(__this->_ctx)->Pop2();
    return res;
}

void* JSArray__get_Handle(JSArray* __this)
{
    return __this->_handle;
}

::uObject* JSArray__get_Item(JSArray* __this, int index)
{
    return __this->Get(index);
}

int JSArray__get_Length(JSArray* __this)
{
    int index = ::uPtr< ::app::Fuse::Scripting::Duktape::Context*>(__this->_ctx)->PushHeapPtr(__this->_handle);
    ::uLong l = ::uPtr< ::app::Fuse::Scripting::Duktape::Context*>(__this->_ctx)->GetLength(index);
    ::uPtr< ::app::Fuse::Scripting::Duktape::Context*>(__this->_ctx)->Pop();
    return (int)l;
}

JSArray* JSArray__New_1(::uStatic* __this, ::app::Fuse::Scripting::Duktape::Context* ctx, void* handle)
{
    JSArray* inst = (JSArray*)::uAllocObject(sizeof(JSArray), JSArray__typeof());
    inst->_ObjInit_1(ctx, handle);
    return inst;
}

void JSArray__Set(JSArray* __this, int index, ::uObject* value)
{
    int objIndex = ::uPtr< ::app::Fuse::Scripting::Duktape::Context*>(__this->_ctx)->PushHeapPtr(__this->_handle);
    ::uPtr< ::app::Fuse::Scripting::Duktape::Context*>(__this->_ctx)->Push_4(value);
    ::uPtr< ::app::Fuse::Scripting::Duktape::Context*>(__this->_ctx)->PutProperty(objIndex, index);
    ::uPtr< ::app::Fuse::Scripting::Duktape::Context*>(__this->_ctx)->Pop();
}

void JSArray__set_Item(JSArray* __this, int index, ::uObject* value)
{
    __this->Set(index, value);
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Scripting.Duktape\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

JSFunction__uType* JSFunction__typeof()
{
    static ::uStaticStrong<JSFunction__uType*> type;
    if (type != NULL) return type;

    type = (JSFunction__uType*)::uAllocClassType(sizeof(JSFunction__uType), "Fuse.Scripting.Duktape.JSFunction", false, 0, 2, 0);

    type->SetBaseType(::app::Fuse::Scripting::Function__typeof());
    type->__fp_Call = (::uObject*(*)(::app::Fuse::Scripting::Function*, ::uArray*))JSFunction__Call;
    type->__fp_Construct = (::app::Fuse::Scripting::Object*(*)(::app::Fuse::Scripting::Function*, ::uArray*))JSFunction__Construct;
    type->__fp_Equals_2 = (bool(*)(::app::Fuse::Scripting::Function*, ::app::Fuse::Scripting::Function*))JSFunction__Equals_2;

    type->SetStrongRefs(
        "_ctx", offsetof(JSFunction, _ctx),
        "_stashKey", offsetof(JSFunction, _stashKey));

    type->SetFields(3,
        ::uNewField("_ctx", NULL, offsetof(JSFunction, _ctx), ::app::Fuse::Scripting::Duktape::Context__typeof()),
        ::uNewField("_handle", NULL, offsetof(JSFunction, _handle), ::app::Uno::IntPtr__typeof()),
        ::uNewField("_stashKey", NULL, offsetof(JSFunction, _stashKey), ::app::Uno::String__typeof()));

    type->SetFunctions(1,
        ::uNewFunction("get_Handle", JSFunction__get_Handle, 0, false, ::app::Uno::IntPtr__typeof()));

    ::uRegisterType(type);
    return type;
}

void JSFunction___ObjInit_1(JSFunction* __this, ::app::Fuse::Scripting::Duktape::Context* ctx, void* handle)
{
    ::app::Fuse::Scripting::Function___ObjInit(__this);
    __this->_ctx = ctx;
    __this->_handle = handle;
    __this->_stashKey = ::uPtr< ::app::Fuse::Scripting::Duktape::Context*>(__this->_ctx)->Stash(__this->_handle);
}

::uObject* JSFunction__Call(JSFunction* __this, ::uArray* args)
{
    ::uPtr< ::app::Fuse::Scripting::Duktape::Context*>(__this->_ctx)->PushHeapPtr(__this->_handle);
    int argc = ::uPtr< ::uArray*>(args)->Length();

    for (int i = 0; i < argc; i++)
    {
        ::uPtr< ::app::Fuse::Scripting::Duktape::Context*>(__this->_ctx)->Push_4(::uPtr< ::uArray*>(args)->Item< ::uObject*>(i));
    }

    int result = ::uPtr< ::app::Fuse::Scripting::Duktape::Context*>(__this->_ctx)->SafeCall(argc);
    ::uPtr< ::app::Fuse::Scripting::Duktape::Context*>(__this->_ctx)->CheckError(result);
    int index = ::uPtr< ::app::Fuse::Scripting::Duktape::Context*>(__this->_ctx)->GetTop() - 1;
    ::uObject* returnValue = ::uPtr< ::app::Fuse::Scripting::Duktape::Context*>(__this->_ctx)->IndexToObject(index);
    ::uPtr< ::app::Fuse::Scripting::Duktape::Context*>(__this->_ctx)->Pop();
    return returnValue;
}

::app::Fuse::Scripting::Object* JSFunction__Construct(JSFunction* __this, ::uArray* args)
{
    ::uPtr< ::app::Fuse::Scripting::Duktape::Context*>(__this->_ctx)->PushHeapPtr(__this->_handle);
    int argc = ::uPtr< ::uArray*>(args)->Length();

    for (int i = 0; i < argc; i++)
    {
        ::uPtr< ::app::Fuse::Scripting::Duktape::Context*>(__this->_ctx)->Push_4(::uPtr< ::uArray*>(args)->Item< ::uObject*>(i));
    }

    ::uPtr< ::app::Fuse::Scripting::Duktape::Context*>(__this->_ctx)->Construct(argc);
    ::uObject* returnValue = ::uPtr< ::app::Fuse::Scripting::Duktape::Context*>(__this->_ctx)->IndexToObject(::uPtr< ::app::Fuse::Scripting::Duktape::Context*>(__this->_ctx)->GetTop() - 1);
    ::uPtr< ::app::Fuse::Scripting::Duktape::Context*>(__this->_ctx)->Pop();
    return ::uCast< ::app::Fuse::Scripting::Object*>(returnValue, ::app::Fuse::Scripting::Object__typeof());
}

bool JSFunction__Equals_2(JSFunction* __this, ::app::Fuse::Scripting::Function* a)
{
    JSFunction* f = ::uAs< JSFunction*>(a, JSFunction__typeof());

    if (f == NULL)
    {
        return false;
    }

    return (__this->_ctx == ::uPtr< JSFunction*>(f)->_ctx) && ::app::Uno::IntPtr__op_Equality(NULL, __this->_handle, ::uPtr< JSFunction*>(f)->_handle);
}

void* JSFunction__get_Handle(JSFunction* __this)
{
    return __this->_handle;
}

JSFunction* JSFunction__New_1(::uStatic* __this, ::app::Fuse::Scripting::Duktape::Context* ctx, void* handle)
{
    JSFunction* inst = (JSFunction*)::uAllocObject(sizeof(JSFunction), JSFunction__typeof());
    inst->_ObjInit_1(ctx, handle);
    return inst;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Scripting.Duktape\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

JSObject__uType* JSObject__typeof()
{
    static ::uStaticStrong<JSObject__uType*> type;
    if (type != NULL) return type;

    type = (JSObject__uType*)::uAllocClassType(sizeof(JSObject__uType), "Fuse.Scripting.Duktape.JSObject", false, 0, 2, 0);

    type->SetBaseType(::app::Fuse::Scripting::Object__typeof());
    type->__fp_CallMethod = (::uObject*(*)(::app::Fuse::Scripting::Object*, ::uString*, ::uArray*))JSObject__CallMethod;
    type->__fp_ContainsKey = (bool(*)(::app::Fuse::Scripting::Object*, ::uString*))JSObject__ContainsKey;
    type->__fp_Equals_2 = (bool(*)(::app::Fuse::Scripting::Object*, ::app::Fuse::Scripting::Object*))JSObject__Equals_2;
    type->__fp_get_Item = (::uObject*(*)(::app::Fuse::Scripting::Object*, ::uString*))JSObject__get_Item;
    type->__fp_get_Keys = (::uArray*(*)(::app::Fuse::Scripting::Object*))JSObject__get_Keys;
    type->__fp_InstanceOf = (bool(*)(::app::Fuse::Scripting::Object*, ::app::Fuse::Scripting::Function*))JSObject__InstanceOf;
    type->__fp_set_Item = (void(*)(::app::Fuse::Scripting::Object*, ::uString*, ::uObject*))JSObject__set_Item;

    type->SetStrongRefs(
        "_ctx", offsetof(JSObject, _ctx),
        "_stashKey", offsetof(JSObject, _stashKey));

    type->SetFields(3,
        ::uNewField("_ctx", NULL, offsetof(JSObject, _ctx), ::app::Fuse::Scripting::Duktape::Context__typeof()),
        ::uNewField("_handle", NULL, offsetof(JSObject, _handle), ::app::Uno::IntPtr__typeof()),
        ::uNewField("_stashKey", NULL, offsetof(JSObject, _stashKey), ::app::Uno::String__typeof()));

    type->SetFunctions(2,
        ::uNewFunction("get_Handle", JSObject__get_Handle, 0, false, ::app::Uno::IntPtr__typeof()),
        ::uNewFunction(".ctor", JSObject__New_1, 0, true, JSObject__typeof(), ::app::Fuse::Scripting::Duktape::Context__typeof(), ::app::Uno::IntPtr__typeof()));

    ::uRegisterType(type);
    return type;
}

void JSObject___ObjInit_1(JSObject* __this, ::app::Fuse::Scripting::Duktape::Context* ctx, void* handle)
{
    ::app::Fuse::Scripting::Object___ObjInit(__this);
    __this->_ctx = ctx;
    __this->_handle = handle;
    __this->_stashKey = ::uPtr< ::app::Fuse::Scripting::Duktape::Context*>(__this->_ctx)->Stash(__this->_handle);
}

::uObject* JSObject__CallMethod(JSObject* __this, ::uString* name, ::uArray* args)
{
    int index = ::uPtr< ::app::Fuse::Scripting::Duktape::Context*>(__this->_ctx)->PushHeapPtr(__this->_handle);
    ::uPtr< ::app::Fuse::Scripting::Duktape::Context*>(__this->_ctx)->GetProperty_1(index, name);
    ::uPtr< ::app::Fuse::Scripting::Duktape::Context*>(__this->_ctx)->PushHeapPtr(__this->_handle);

    for (int i = 0; i < ::uPtr< ::uArray*>(args)->Length(); i++)
    {
        ::uPtr< ::app::Fuse::Scripting::Duktape::Context*>(__this->_ctx)->Push_4(::uPtr< ::uArray*>(args)->Item< ::uObject*>(i));
    }

    int result = ::uPtr< ::app::Fuse::Scripting::Duktape::Context*>(__this->_ctx)->SafeCallMethod(args->Length());
    ::uPtr< ::app::Fuse::Scripting::Duktape::Context*>(__this->_ctx)->CheckError(result);
    ::uObject* returnVal = ::uPtr< ::app::Fuse::Scripting::Duktape::Context*>(__this->_ctx)->IndexToObject(::uPtr< ::app::Fuse::Scripting::Duktape::Context*>(__this->_ctx)->GetTop() - 1);
    ::uPtr< ::app::Fuse::Scripting::Duktape::Context*>(__this->_ctx)->Pop2();
    return returnVal;
}

bool JSObject__ContainsKey(JSObject* __this, ::uString* key)
{
    int index = ::uPtr< ::app::Fuse::Scripting::Duktape::Context*>(__this->_ctx)->PushHeapPtr(__this->_handle);
    bool result = ::uPtr< ::app::Fuse::Scripting::Duktape::Context*>(__this->_ctx)->HasProperty(index, key);
    ::uPtr< ::app::Fuse::Scripting::Duktape::Context*>(__this->_ctx)->Pop();
    return result;
}

bool JSObject__Equals_2(JSObject* __this, ::app::Fuse::Scripting::Object* obj)
{
    JSObject* o = ::uAs< JSObject*>(obj, JSObject__typeof());

    if (o == NULL)
    {
        return false;
    }

    return (__this->_ctx == ::uPtr< JSObject*>(o)->_ctx) && ::app::Uno::IntPtr__op_Equality(NULL, __this->_handle, ::uPtr< JSObject*>(o)->_handle);
}

void* JSObject__get_Handle(JSObject* __this)
{
    return __this->_handle;
}

::uObject* JSObject__get_Item(JSObject* __this, ::uString* key)
{
    int objIndex = ::uPtr< ::app::Fuse::Scripting::Duktape::Context*>(__this->_ctx)->PushHeapPtr(__this->_handle);
    ::uPtr< ::app::Fuse::Scripting::Duktape::Context*>(__this->_ctx)->GetProperty_1(objIndex, key);
    ::uObject* res = ::uPtr< ::app::Fuse::Scripting::Duktape::Context*>(__this->_ctx)->IndexToObject(::uPtr< ::app::Fuse::Scripting::Duktape::Context*>(__this->_ctx)->GetTop() - 1);
    ::uPtr< ::app::Fuse::Scripting::Duktape::Context*>(__this->_ctx)->Pop2();
    return res;
}

::uArray* JSObject__get_Keys(JSObject* __this)
{
    ::app::Uno::Collections::List__string* keys = ::app::Uno::Collections::List__string__New_1(NULL);
    int index = ::uPtr< ::app::Fuse::Scripting::Duktape::Context*>(__this->_ctx)->PushHeapPtr(__this->_handle);
    ::uPtr< ::app::Fuse::Scripting::Duktape::Context*>(__this->_ctx)->PushEnumerator(index, 4);

    while (::uPtr< ::app::Fuse::Scripting::Duktape::Context*>(__this->_ctx)->EnumeratorNext(::uPtr< ::app::Fuse::Scripting::Duktape::Context*>(__this->_ctx)->GetTop() - 1, false))
    {
        ::uString* key = ::uPtr< ::app::Fuse::Scripting::Duktape::Context*>(__this->_ctx)->GetString(::uPtr< ::app::Fuse::Scripting::Duktape::Context*>(__this->_ctx)->GetTop() - 1);
        ::uPtr< ::app::Uno::Collections::List__string*>(keys)->Add(key);
        ::uPtr< ::app::Fuse::Scripting::Duktape::Context*>(__this->_ctx)->Pop();
    }

    ::uPtr< ::app::Fuse::Scripting::Duktape::Context*>(__this->_ctx)->Pop2();
    return ::uPtr< ::app::Uno::Collections::List__string*>(keys)->ToArray();
}

bool JSObject__InstanceOf(JSObject* __this, ::app::Fuse::Scripting::Function* type)
{
    ::app::Fuse::Scripting::Duktape::JSFunction* func = ::uAs< ::app::Fuse::Scripting::Duktape::JSFunction*>(type, ::app::Fuse::Scripting::Duktape::JSFunction__typeof());

    if (func != NULL)
    {
        ::uPtr< ::app::Fuse::Scripting::Duktape::Context*>(__this->_ctx)->PushGlobalObject();
        int index = ::uPtr< ::app::Fuse::Scripting::Duktape::Context*>(__this->_ctx)->PushHeapPtr(__this->_handle);
        ::uPtr< ::app::Fuse::Scripting::Duktape::Context*>(__this->_ctx)->PutProperty_1(::uPtr< ::app::Fuse::Scripting::Duktape::Context*>(__this->_ctx)->GetTop() - 2, ::uGetConstString("__a__"));
        int k = ::uPtr< ::app::Fuse::Scripting::Duktape::Context*>(__this->_ctx)->PushHeapPtr(::uPtr< ::app::Fuse::Scripting::Duktape::JSFunction*>(func)->Handle());
        ::uPtr< ::app::Fuse::Scripting::Duktape::Context*>(__this->_ctx)->PutProperty_1(::uPtr< ::app::Fuse::Scripting::Duktape::Context*>(__this->_ctx)->GetTop() - 2, ::uGetConstString("__b__"));
        bool res = ::uUnbox< bool>(::app::Uno::Bool__typeof(), ::uPtr< ::app::Fuse::Scripting::Duktape::Context*>(__this->_ctx)->Evaluate_2(::uGetConstString("__a__ instanceof __b__")));
        ::uPtr< ::app::Fuse::Scripting::Duktape::Context*>(__this->_ctx)->DelProperty_2(::uPtr< ::app::Fuse::Scripting::Duktape::Context*>(__this->_ctx)->GetTop() - 1, ::uGetConstString("__a__"));
        ::uPtr< ::app::Fuse::Scripting::Duktape::Context*>(__this->_ctx)->DelProperty_2(::uPtr< ::app::Fuse::Scripting::Duktape::Context*>(__this->_ctx)->GetTop() - 1, ::uGetConstString("__b__"));
        ::uPtr< ::app::Fuse::Scripting::Duktape::Context*>(__this->_ctx)->Pop();
        return res;
    }

    return false;
}

JSObject* JSObject__New_1(::uStatic* __this, ::app::Fuse::Scripting::Duktape::Context* ctx, void* handle)
{
    JSObject* inst = (JSObject*)::uAllocObject(sizeof(JSObject), JSObject__typeof());
    inst->_ObjInit_1(ctx, handle);
    return inst;
}

void JSObject__set_Item(JSObject* __this, ::uString* key, ::uObject* value)
{
    int objIndex = ::uPtr< ::app::Fuse::Scripting::Duktape::Context*>(__this->_ctx)->PushHeapPtr(__this->_handle);
    ::uPtr< ::app::Fuse::Scripting::Duktape::Context*>(__this->_ctx)->Push_4(value);
    ::uPtr< ::app::Fuse::Scripting::Duktape::Context*>(__this->_ctx)->PutProperty_1(objIndex, key);
    ::uPtr< ::app::Fuse::Scripting::Duktape::Context*>(__this->_ctx)->Pop();
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Scripting.Duktape\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

JSONObject__uType* JSONObject__typeof()
{
    static ::uStaticStrong<JSONObject__uType*> type;
    if (type != NULL) return type;

    type = (JSONObject__uType*)::uAllocClassType(sizeof(JSONObject__uType), "Fuse.Scripting.Duktape.JSONObject");

    type->SetFunctions(1,
        ::uNewFunction("Stringify", JSONObject__Stringify, 0, true, ::app::Uno::String__typeof(), ::uObject__typeof()));

    ::uRegisterType(type);
    return type;
}

::uString* JSONObject__Stringify(::uStatic* __this, ::uObject* value)
{
    U_THROW(::app::Uno::Exception__New_2(NULL, ::app::Uno::String__op_Addition_1(NULL, ::uGetConstString("Could not convert value to JSON: "), value)));
}

}}}}
