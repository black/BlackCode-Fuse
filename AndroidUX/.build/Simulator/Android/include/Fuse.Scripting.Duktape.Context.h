// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Scripting.Duktape\0.18.8\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Scripting.Context.h>
#include <Uno.IDisposable.h>
namespace g{namespace Fuse{namespace Scripting{namespace Duktape{struct Context;}}}}
namespace g{namespace Fuse{namespace Scripting{namespace Duktape{struct JSArray;}}}}
namespace g{namespace Fuse{namespace Scripting{namespace Duktape{struct JSObject;}}}}
namespace g{namespace Fuse{namespace Scripting{struct Object;}}}
namespace g{namespace Fuse{namespace Scripting{struct ScriptException;}}}
namespace g{namespace Uno{namespace Collections{struct Dictionary;}}}

namespace g{
namespace Fuse{
namespace Scripting{
namespace Duktape{

// public sealed extern class Context :111
// {
::g::Fuse::Scripting::Context_type* Context_typeof();
void Context__ctor_1_fn(Context* __this, uObject* dispatcher);
void Context__AddCallback_fn(Context* __this, uDelegate* callback, int* __retval);
void Context__CheckError_fn(Context* __this, int* errorCode);
void Context__Construct_fn(Context* __this, int* argc);
void Context__DelProperty2_fn(Context* __this, int* index, uString* key, bool* __retval);
void Context__Dispose_fn(Context* __this);
void Context__EnumeratorNext_fn(Context* __this, int* index, bool* getValue, bool* __retval);
void Context__Evaluate2_fn(Context* __this, uString* code, uObject** __retval);
void Context__Evaluate1_fn(Context* __this, uString* fileName, uString* code, uObject** __retval);
void Context__EvaluateNoResult_fn(Context* __this, uString* code);
void Context__GetBool_fn(Context* __this, int* index, bool* __retval);
void Context__GetError_fn(Context* __this, int* index, ::g::Fuse::Scripting::ScriptException** __retval);
void Context__GetHeapPtr_fn(Context* __this, int* index, void** __retval);
void Context__GetInt_fn(Context* __this, int* index, int* __retval);
void Context__GetLength_fn(Context* __this, int* index, int64_t* __retval);
void Context__GetNumber_fn(Context* __this, int* index, double* __retval);
void Context__GetProperty_fn(Context* __this, int* index, int* arrIndex, bool* __retval);
void Context__GetProperty1_fn(Context* __this, int* index, uString* key, bool* __retval);
void Context__GetString_fn(Context* __this, int* index, uString** __retval);
void Context__GetTop_fn(Context* __this, int* __retval);
void Context__get_GlobalObject_fn(Context* __this, ::g::Fuse::Scripting::Object** __retval);
void Context__HasProperty_fn(Context* __this, int* index, uString* key, bool* __retval);
void Context__IndexToObject_fn(Context* __this, int* index, uObject** __retval);
void Context__InitCallbacks_fn(Context* __this);
void Context__IsArray_fn(Context* __this, int* index, bool* __retval);
void Context__IsBool_fn(Context* __this, int* index, bool* __retval);
void Context__IsFunction_fn(Context* __this, int* index, bool* __retval);
void Context__IsNullOrUndefined_fn(Context* __this, int* index, bool* __retval);
void Context__IsNumber_fn(Context* __this, int* index, bool* __retval);
void Context__IsObject_fn(Context* __this, int* index, bool* __retval);
void Context__IsString_fn(Context* __this, int* index, bool* __retval);
void Context__MakeArray_fn(Context* __this, ::g::Fuse::Scripting::Duktape::JSArray** __retval);
void Context__MakeObject_fn(Context* __this, ::g::Fuse::Scripting::Duktape::JSObject** __retval);
void Context__New1_fn(uObject* dispatcher, Context** __retval);
void Context__Pop_fn(Context* __this);
void Context__Pop2_fn(Context* __this);
void Context__ProxyCallback_fn(Context* __this, void** ctx);
void Context__Push_fn(Context* __this, bool* val);
void Context__Push1_fn(Context* __this, double* val);
void Context__Push2_fn(Context* __this, uDelegate* callback);
void Context__Push3_fn(Context* __this, int* val);
void Context__Push4_fn(Context* __this, uObject* value);
void Context__Push5_fn(Context* __this, uString* str);
void Context__PushArray_fn(Context* __this, int* __retval);
void Context__PushCallbackProxy_fn(Context* __this, int* argc);
void Context__PushDelegate_fn(Context* __this, uDelegate* del);
void Context__PushEnumerator_fn(Context* __this, int* index, int* flags);
void Context__PushGlobalObject_fn(Context* __this);
void Context__PushGlobalStash_fn(Context* __this);
void Context__PushHeapPtr_fn(Context* __this, void** ptr, int* __retval);
void Context__PushNull_fn(Context* __this);
void Context__PushObject_fn(Context* __this, int* __retval);
void Context__PutProperty_fn(Context* __this, int* index, int* arrIndex, bool* __retval);
void Context__PutProperty1_fn(Context* __this, int* index, uString* key, bool* __retval);
void Context__SafeCall_fn(Context* __this, int* argc, int* __retval);
void Context__SafeCallMethod_fn(Context* __this, int* argc, int* __retval);
void Context__SafeCompile_fn(Context* __this, uint32_t* flags, int* __retval);
void Context__SafeCompileFunction_fn(Context* __this, uString* source, int* __retval);
void Context__SafeEval_fn(Context* __this, uString* code, int* __retval);
void Context__SafeToString_fn(Context* __this, int* index, uString** __retval);
void Context__Stash_fn(Context* __this, void** heapPtr, uString** __retval);

struct Context : ::g::Fuse::Scripting::Context
{
    uStrong< ::g::Uno::Collections::Dictionary*> _callbacks;
    int _callbacksCount;
    static uSStrong<uArray*> _emptyArgs_;
    static uSStrong<uArray*>& _emptyArgs() { return Context_typeof()->Init(), _emptyArgs_; }
    uStrong< ::g::Fuse::Scripting::Duktape::JSObject*> _globalObject;
    void* _handle;
    bool _isAlive;
    uStrong<uDelegate*> _proxyCallback;
    int _stashKey;

    void ctor_1(uObject* dispatcher);
    int AddCallback(uDelegate* callback);
    void CheckError(int errorCode);
    void Construct(int argc);
    bool DelProperty2(int index, uString* key);
    bool EnumeratorNext(int index, bool getValue);
    uObject* Evaluate2(uString* code);
    void EvaluateNoResult(uString* code);
    bool GetBool(int index);
    ::g::Fuse::Scripting::ScriptException* GetError(int index);
    void* GetHeapPtr(int index);
    int GetInt(int index);
    int64_t GetLength(int index);
    double GetNumber(int index);
    bool GetProperty(int index, int arrIndex);
    bool GetProperty1(int index, uString* key);
    uString* GetString(int index);
    int GetTop();
    bool HasProperty(int index, uString* key);
    uObject* IndexToObject(int index);
    void InitCallbacks();
    bool IsArray(int index);
    bool IsBool(int index);
    bool IsFunction(int index);
    bool IsNullOrUndefined(int index);
    bool IsNumber(int index);
    bool IsObject(int index);
    bool IsString(int index);
    ::g::Fuse::Scripting::Duktape::JSArray* MakeArray();
    ::g::Fuse::Scripting::Duktape::JSObject* MakeObject();
    void Pop();
    void Pop2();
    void ProxyCallback(void* ctx);
    void Push(bool val);
    void Push1(double val);
    void Push2(uDelegate* callback);
    void Push3(int val);
    void Push4(uObject* value);
    void Push5(uString* str);
    int PushArray();
    void PushCallbackProxy(int argc);
    void PushDelegate(uDelegate* del);
    void PushEnumerator(int index, int flags);
    void PushGlobalObject();
    void PushGlobalStash();
    int PushHeapPtr(void* ptr);
    void PushNull();
    int PushObject();
    bool PutProperty(int index, int arrIndex);
    bool PutProperty1(int index, uString* key);
    int SafeCall(int argc);
    int SafeCallMethod(int argc);
    int SafeCompile(uint32_t flags);
    int SafeCompileFunction(uString* source);
    int SafeEval(uString* code);
    uString* SafeToString(int index);
    uString* Stash(void* heapPtr);
    static Context* New1(uObject* dispatcher);
};
// }

}}}} // ::g::Fuse::Scripting::Duktape
