// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Scripting.Duktape\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_FUSE_SCRIPTING_DUKTAPE_CONTEXT_H__
#define __APP_FUSE_SCRIPTING_DUKTAPE_CONTEXT_H__

#include <app/Fuse.Scripting.Context.h>
#include <app/Uno.IDisposable.h>
#include <Uno.h>
namespace app { namespace Fuse { namespace Scripting { namespace Duktape { struct JSArray; } } } }
namespace app { namespace Fuse { namespace Scripting { namespace Duktape { struct JSObject; } } } }
namespace app { namespace Fuse { namespace Scripting { struct Object; } } }
namespace app { namespace Fuse { namespace Scripting { struct ScriptException; } } }
namespace app { namespace Uno { namespace Collections { struct Dictionary__int__Fuse_Scripting_Callback; } } }

namespace app {
namespace Fuse {
namespace Scripting {
namespace Duktape {

struct Context;

extern ::uStaticStrong< ::uArray*> Context___emptyArgs;

struct Context__uType : ::app::Fuse::Scripting::Context__uType
{
};

Context__uType* Context__typeof();

void Context___ObjInit_1(Context* __this, ::uObject* dispatcher);
void Context___TypeInit(::uStatic* __this);
int Context__AddCallback(Context* __this, ::uDelegate* callback);
void Context__Call(Context* __this, int argc);
void Context__CallMethod(Context* __this, int argc);
void Context__CheckError(Context* __this, int errorCode);
void Context__CompileFunction(Context* __this, ::uString* source);
void Context__Construct(Context* __this, int argc);
bool Context__DelProperty(Context* __this, int index);
bool Context__DelProperty_1(Context* __this, int index, int arrIndex);
bool Context__DelProperty_2(Context* __this, int index, ::uString* key);
void Context__Dispose(Context* __this);
void Context__Dump(Context* __this);
bool Context__EnumeratorNext(Context* __this, int index, bool getValue);
::uObject* Context__Evaluate_1(Context* __this, ::uString* fileName, ::uString* code);
::uObject* Context__Evaluate_2(Context* __this, ::uString* code);
void Context__EvaluateNoResult(Context* __this, ::uString* code);
::app::Fuse::Scripting::Object* Context__get_GlobalObject(Context* __this);
void* Context__get_Handle(Context* __this);
bool Context__get_IsAlive(Context* __this);
bool Context__GetBool(Context* __this, int index);
::app::Fuse::Scripting::ScriptException* Context__GetError(Context* __this, int index);
void* Context__GetHeapPtr(Context* __this, int index);
int Context__GetInt(Context* __this, int index);
::uLong Context__GetLength(Context* __this, int index);
double Context__GetNumber(Context* __this, int index);
bool Context__GetProperty(Context* __this, int index, int arrIndex);
bool Context__GetProperty_1(Context* __this, int index, ::uString* key);
::uString* Context__GetString(Context* __this, int index);
int Context__GetTop(Context* __this);
bool Context__HasProperty(Context* __this, int index, ::uString* key);
::uObject* Context__IndexToObject(Context* __this, int index);
void Context__InitCallbacks(Context* __this);
bool Context__IsArray(Context* __this, int index);
bool Context__IsBool(Context* __this, int index);
bool Context__IsFunction(Context* __this, int index);
bool Context__IsNan(Context* __this, int index);
bool Context__IsNull(Context* __this, int index);
bool Context__IsNullOrUndefined(Context* __this, int index);
bool Context__IsNumber(Context* __this, int index);
bool Context__IsObject(Context* __this, int index);
bool Context__IsString(Context* __this, int index);
::uString* Context__JsonEncode(Context* __this, int index);
::app::Fuse::Scripting::Duktape::JSArray* Context__MakeArray(Context* __this);
::app::Fuse::Scripting::Duktape::JSObject* Context__MakeObject(Context* __this);
Context* Context__New_1(::uStatic* __this, ::uObject* dispatcher);
void Context__Pop(Context* __this);
void Context__Pop2(Context* __this);
void Context__Pop3(Context* __this);
void Context__ProxyCallback(Context* __this, void* ctx);
void Context__Push(Context* __this, bool val);
void Context__Push_1(Context* __this, ::uDelegate* callback);
void Context__Push_2(Context* __this, double val);
void Context__Push_3(Context* __this, int val);
void Context__Push_4(Context* __this, ::uObject* value);
void Context__Push_5(Context* __this, ::uString* str);
int Context__PushArray(Context* __this);
void Context__PushCallbackProxy(Context* __this, int argc);
void Context__PushDelegate(Context* __this, ::uDelegate* del);
void Context__PushEnumerator(Context* __this, int index, int flags);
void Context__PushGlobalObject(Context* __this);
void Context__PushGlobalStash(Context* __this);
int Context__PushHeapPtr(Context* __this, void* ptr);
void Context__PushNull(Context* __this);
int Context__PushObject(Context* __this);
bool Context__PutProperty(Context* __this, int index, int arrIndex);
bool Context__PutProperty_1(Context* __this, int index, ::uString* key);
int Context__SafeCall(Context* __this, int argc);
int Context__SafeCallMethod(Context* __this, int argc);
int Context__SafeCompile(Context* __this, ::uUInt flags);
int Context__SafeCompileFunction(Context* __this, ::uString* source);
int Context__SafeEval(Context* __this, ::uString* code);
::uString* Context__SafeToString(Context* __this, int index);
::uString* Context__Stash(Context* __this, void* heapPtr);
void Context__Unstash(Context* __this, ::uString* stashKey);

struct Context : ::app::Fuse::Scripting::Context
{
    ::uStrong< ::app::Fuse::Scripting::Duktape::JSObject*> _globalObject;
    bool _isAlive;
    void* _handle;
    int _callbacksCount;
    ::uStrong< ::app::Uno::Collections::Dictionary__int__Fuse_Scripting_Callback*> _callbacks;
    ::uStrong< ::uDelegate*> _proxyCallback;
    int _stashKey;

    void _ObjInit_1(::uObject* dispatcher) { Context___ObjInit_1(this, dispatcher); }
    int AddCallback(::uDelegate* callback) { return Context__AddCallback(this, callback); }
    void Call(int argc) { Context__Call(this, argc); }
    void CallMethod(int argc) { Context__CallMethod(this, argc); }
    void CheckError(int errorCode) { Context__CheckError(this, errorCode); }
    void CompileFunction(::uString* source) { Context__CompileFunction(this, source); }
    void Construct(int argc) { Context__Construct(this, argc); }
    bool DelProperty(int index) { return Context__DelProperty(this, index); }
    bool DelProperty_1(int index, int arrIndex) { return Context__DelProperty_1(this, index, arrIndex); }
    bool DelProperty_2(int index, ::uString* key) { return Context__DelProperty_2(this, index, key); }
    void Dump() { Context__Dump(this); }
    bool EnumeratorNext(int index, bool getValue) { return Context__EnumeratorNext(this, index, getValue); }
    ::uObject* Evaluate_2(::uString* code) { return Context__Evaluate_2(this, code); }
    void EvaluateNoResult(::uString* code) { Context__EvaluateNoResult(this, code); }
    void* Handle() { return Context__get_Handle(this); }
    bool IsAlive() { return Context__get_IsAlive(this); }
    bool GetBool(int index) { return Context__GetBool(this, index); }
    ::app::Fuse::Scripting::ScriptException* GetError(int index) { return Context__GetError(this, index); }
    void* GetHeapPtr(int index) { return Context__GetHeapPtr(this, index); }
    int GetInt(int index) { return Context__GetInt(this, index); }
    ::uLong GetLength(int index) { return Context__GetLength(this, index); }
    double GetNumber(int index) { return Context__GetNumber(this, index); }
    bool GetProperty(int index, int arrIndex) { return Context__GetProperty(this, index, arrIndex); }
    bool GetProperty_1(int index, ::uString* key) { return Context__GetProperty_1(this, index, key); }
    ::uString* GetString(int index) { return Context__GetString(this, index); }
    int GetTop() { return Context__GetTop(this); }
    bool HasProperty(int index, ::uString* key) { return Context__HasProperty(this, index, key); }
    ::uObject* IndexToObject(int index) { return Context__IndexToObject(this, index); }
    void InitCallbacks() { Context__InitCallbacks(this); }
    bool IsArray(int index) { return Context__IsArray(this, index); }
    bool IsBool(int index) { return Context__IsBool(this, index); }
    bool IsFunction(int index) { return Context__IsFunction(this, index); }
    bool IsNan(int index) { return Context__IsNan(this, index); }
    bool IsNull(int index) { return Context__IsNull(this, index); }
    bool IsNullOrUndefined(int index) { return Context__IsNullOrUndefined(this, index); }
    bool IsNumber(int index) { return Context__IsNumber(this, index); }
    bool IsObject(int index) { return Context__IsObject(this, index); }
    bool IsString(int index) { return Context__IsString(this, index); }
    ::uString* JsonEncode(int index) { return Context__JsonEncode(this, index); }
    ::app::Fuse::Scripting::Duktape::JSArray* MakeArray() { return Context__MakeArray(this); }
    ::app::Fuse::Scripting::Duktape::JSObject* MakeObject() { return Context__MakeObject(this); }
    void Pop() { Context__Pop(this); }
    void Pop2() { Context__Pop2(this); }
    void Pop3() { Context__Pop3(this); }
    void ProxyCallback(void* ctx) { Context__ProxyCallback(this, ctx); }
    void Push(bool val) { Context__Push(this, val); }
    void Push_1(::uDelegate* callback) { Context__Push_1(this, callback); }
    void Push_2(double val) { Context__Push_2(this, val); }
    void Push_3(int val) { Context__Push_3(this, val); }
    void Push_4(::uObject* value) { Context__Push_4(this, value); }
    void Push_5(::uString* str) { Context__Push_5(this, str); }
    int PushArray() { return Context__PushArray(this); }
    void PushCallbackProxy(int argc) { Context__PushCallbackProxy(this, argc); }
    void PushDelegate(::uDelegate* del) { Context__PushDelegate(this, del); }
    void PushEnumerator(int index, int flags) { Context__PushEnumerator(this, index, flags); }
    void PushGlobalObject() { Context__PushGlobalObject(this); }
    void PushGlobalStash() { Context__PushGlobalStash(this); }
    int PushHeapPtr(void* ptr) { return Context__PushHeapPtr(this, ptr); }
    void PushNull() { Context__PushNull(this); }
    int PushObject() { return Context__PushObject(this); }
    bool PutProperty(int index, int arrIndex) { return Context__PutProperty(this, index, arrIndex); }
    bool PutProperty_1(int index, ::uString* key) { return Context__PutProperty_1(this, index, key); }
    int SafeCall(int argc) { return Context__SafeCall(this, argc); }
    int SafeCallMethod(int argc) { return Context__SafeCallMethod(this, argc); }
    int SafeCompile(::uUInt flags) { return Context__SafeCompile(this, flags); }
    int SafeCompileFunction(::uString* source) { return Context__SafeCompileFunction(this, source); }
    int SafeEval(::uString* code) { return Context__SafeEval(this, code); }
    ::uString* SafeToString(int index) { return Context__SafeToString(this, index); }
    ::uString* Stash(void* heapPtr) { return Context__Stash(this, heapPtr); }
    void Unstash(::uString* stashKey) { Context__Unstash(this, stashKey); }
};

}}}}


#endif
