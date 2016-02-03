// This file was generated based on '(multiple files)'.
// WARNING: Changes might be lost if you edit this file directly.

#include <Fuse.Node.h>
#include <Fuse.Scripting.Array.h>
#include <Fuse.Scripting.BoolChangedArgs.h>
#include <Fuse.Scripting.Callback.h>
#include <Fuse.Scripting.Context.h>
#include <Fuse.Scripting.DoubleChangedArgs.h>
#include <Fuse.Scripting.Error.h>
#include <Fuse.Scripting.FactoryClosure-1.h>
#include <Fuse.Scripting.FileModule.h>
#include <Fuse.Scripting.Function.h>
#include <Fuse.Scripting.FutureFactory-1.h>
#include <Fuse.Scripting.IDispatcher.h>
#include <Fuse.Scripting.IEventSerializer.h>
#include <Fuse.Scripting.IModule.h>
#include <Fuse.Scripting.INameListener.h>
#include <Fuse.Scripting.INameScope.h>
#include <Fuse.Scripting.IScriptEvent.h>
#include <Fuse.Scripting.JSCallback.ActionClosure.h>
#include <Fuse.Scripting.JSCallback.ActionClosure-1.h>
#include <Fuse.Scripting.JSCallback.ActionClosure-2.h>
#include <Fuse.Scripting.JSCallback.FuncClosure-1.h>
#include <Fuse.Scripting.JSCallback.FuncClosure-2.h>
#include <Fuse.Scripting.JSCallback.FuncClosure-3.h>
#include <Fuse.Scripting.JSCallback.h>
#include <Fuse.Scripting.JSCallback.NumberConverter.h>
#include <Fuse.Scripting.NameRegistry.h>
#include <Fuse.Scripting.NativeCallback.h>
#include <Fuse.Scripting.NativeEvent.EventClosure.h>
#include <Fuse.Scripting.NativeEvent.h>
#include <Fuse.Scripting.NativeFunction.h>
#include <Fuse.Scripting.NativeFunction.NativeFunctionClosure.h>
#include <Fuse.Scripting.NativeMember.h>
#include <Fuse.Scripting.NativeModule.h>
#include <Fuse.Scripting.NativePromise-2.ContextClosure.h>
#include <Fuse.Scripting.NativePromise-2.h>
#include <Fuse.Scripting.NativePromise-2.PromiseClosure.h>
#include <Fuse.Scripting.NativeProperty-2.h>
#include <Fuse.Scripting.NodeCallback.h>
#include <Fuse.Scripting.Object.h>
#include <Fuse.Scripting.ResultConverter-2.h>
#include <Fuse.Scripting.ResultFactory-1.h>
#include <Fuse.Scripting.ScriptException.h>
#include <Fuse.Scripting.StringChangedArgs.h>
#include <Fuse.Scripting.TaskPriority.h>
#include <Fuse.Scripting.Value.h>
#include <Fuse.Scripting.ValueConverter-2.h>
#include <Uno.Action.h>
#include <Uno.Action-1.h>
#include <Uno.Action-2.h>
#include <Uno.ArgumentException.h>
#include <Uno.Bool.h>
#include <Uno.Char.h>
#include <Uno.Collections.Dictionary-2.h>
#include <Uno.Collections.Dictionary-2.ValueCollection.Enumerator.h>
#include <Uno.Collections.Dictionary-2.ValueCollection.h>
#include <Uno.Collections.List-1.Enumerator.h>
#include <Uno.Collections.List-1.h>
#include <Uno.Collections.Queue-1.h>
#include <Uno.Delegate.h>
#include <Uno.Double.h>
#include <Uno.EventArgs.h>
#include <Uno.EventHandler.h>
#include <Uno.Exception.h>
#include <Uno.Float.h>
#include <Uno.Func-1.h>
#include <Uno.Func-2.h>
#include <Uno.Func-3.h>
#include <Uno.Int.h>
#include <Uno.Long.h>
#include <Uno.Object.h>
#include <Uno.Predicate-1.h>
#include <Uno.Short.h>
#include <Uno.String.h>
#include <Uno.Text.StringBuilder.h>
#include <Uno.Threading.Future-1.h>
#include <Uno.Threading.Promise-1.h>
#include <Uno.Threading.Thread.h>
#include <Uno.Type.h>
#include <Uno.UInt.h>
#include <Uno.UX.FileSource.h>
#include <Uno.UX.Resource.h>
static uString* STRINGS[27];
static uType* TYPES[60];

namespace g{
namespace Fuse{
namespace Scripting{

// C:\ProgramData\Uno\Packages\Fuse.Scripting\0.19.3\$.uno(774)
// ------------------------------------------------------------

// private sealed class JSCallback.ActionClosure :774
// {
uType* JSCallback__ActionClosure_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 1;
    options.ObjectSize = sizeof(JSCallback__ActionClosure);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Fuse.Scripting.JSCallback.ActionClosure", options);
    ::TYPES[0] = ::g::Uno::Action_typeof();
    type->SetFields(0,
        ::g::Uno::Action_typeof(), offsetof(::g::Fuse::Scripting::JSCallback__ActionClosure, _action), 0);
    return type;
}

// public ActionClosure(Uno.Action action) :778
void JSCallback__ActionClosure__ctor__fn(JSCallback__ActionClosure* __this, uDelegate* action)
{
    __this->ctor_(action);
}

// public ActionClosure New(Uno.Action action) :778
void JSCallback__ActionClosure__New1_fn(uDelegate* action, JSCallback__ActionClosure** __retval)
{
    *__retval = JSCallback__ActionClosure::New1(action);
}

// public object Run(object[] args) :783
void JSCallback__ActionClosure__Run_fn(JSCallback__ActionClosure* __this, uArray* args, uObject** __retval)
{
    *__retval = __this->Run(args);
}

// public ActionClosure(Uno.Action action) [instance] :778
void JSCallback__ActionClosure::ctor_(uDelegate* action)
{
    _action = action;
}

// public object Run(object[] args) [instance] :783
uObject* JSCallback__ActionClosure::Run(uArray* args)
{
    uPtr(_action)->InvokeVoid();
    return NULL;
}

// public ActionClosure New(Uno.Action action) [static] :778
JSCallback__ActionClosure* JSCallback__ActionClosure::New1(uDelegate* action)
{
    JSCallback__ActionClosure* obj1 = (JSCallback__ActionClosure*)uNew(JSCallback__ActionClosure_typeof());
    obj1->ctor_(action);
    return obj1;
}
// }

// C:\ProgramData\Uno\Packages\Fuse.Scripting\0.19.3\$.uno(790)
// ------------------------------------------------------------

// private sealed class JSCallback.ActionClosure<T> :790
// {
uType* JSCallback__ActionClosure1_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 1;
    options.GenericCount = 1;
    options.PrecalcCount = 2;
    options.ObjectSize = sizeof(JSCallback__ActionClosure1);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Fuse.Scripting.JSCallback.ActionClosure`1", options);
    ::STRINGS[0] = uString::Const("First argument should be of type ");
    ::STRINGS[1] = uString::Const(" value was ");
    ::TYPES[1] = ::g::Fuse::Scripting::JSCallback_typeof();
    ::TYPES[2] = ::g::Uno::Action1_typeof();
    ::TYPES[3] = uObject_typeof();
    type->SetPrecalc(
        ::TYPES[1/*Fuse.Scripting.JSCallback*/]->MakeMethod(1, type->T(0)),
        ::TYPES[2/*Uno.Action`1*/]->MakeType(type->T(0)));
    type->SetFields(0,
        ::g::Uno::Action1_typeof()->MakeType(type->T(0)), offsetof(::g::Fuse::Scripting::JSCallback__ActionClosure1, _action), 0);
    return type;
}

// public ActionClosure(Uno.Action<T> action) :794
void JSCallback__ActionClosure1__ctor__fn(JSCallback__ActionClosure1* __this, uDelegate* action)
{
    __this->ctor_(action);
}

// public ActionClosure New(Uno.Action<T> action) :794
void JSCallback__ActionClosure1__New1_fn(uType* __type, uDelegate* action, JSCallback__ActionClosure1** __retval)
{
    *__retval = JSCallback__ActionClosure1::New1(__type, action);
}

// public object Run(object[] args) :799
void JSCallback__ActionClosure1__Run_fn(JSCallback__ActionClosure1* __this, uArray* args, uObject** __retval)
{
    *__retval = __this->Run(args);
}

// public ActionClosure(Uno.Action<T> action) [instance] :794
void JSCallback__ActionClosure1::ctor_(uDelegate* action)
{
    _action = action;
}

// public object Run(object[] args) [instance] :799
uObject* JSCallback__ActionClosure1::Run(uArray* args)
{
    uType* __types[] = {
        __type->T(0),
        __type->Precalced(0/*Fuse.Scripting.JSCallback.GetArg<T>*/),
        __type->Precalced(1/*Uno.Action<T>*/),
    };
    uT arg(__types[0], U_ALLOCA(__types[0]->ValueSize));
    bool ret2;
    arg = uT(__types[0], U_ALLOCA(__types[0]->ValueSize));

    if ((::g::Fuse::Scripting::JSCallback__GetArg_fn(__types[1], args, &arg, uCRef<int>(0), &ret2), ret2))
        uPtr(_action)->InvokeVoid(arg);
    else
        U_THROW(::g::Uno::ArgumentException::New4(::g::Uno::String::op_Addition1(::g::Uno::String::op_Addition2(::g::Uno::String::op_Addition1(::STRINGS[0/*"First argum...*/], __types[0]), ::STRINGS[1/*" value was "*/]), uPtr(args)->Strong<uObject*>(0))));

    return NULL;
}

// public ActionClosure New(Uno.Action<T> action) [static] :794
JSCallback__ActionClosure1* JSCallback__ActionClosure1::New1(uType* __type, uDelegate* action)
{
    JSCallback__ActionClosure1* obj1 = (JSCallback__ActionClosure1*)uNew(__type);
    obj1->ctor_(action);
    return obj1;
}
// }

// C:\ProgramData\Uno\Packages\Fuse.Scripting\0.19.3\$.uno(811)
// ------------------------------------------------------------

// private sealed class JSCallback.ActionClosure<T1, T2> :811
// {
uType* JSCallback__ActionClosure2_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 1;
    options.GenericCount = 2;
    options.PrecalcCount = 3;
    options.ObjectSize = sizeof(JSCallback__ActionClosure2);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Fuse.Scripting.JSCallback.ActionClosure`2", options);
    ::STRINGS[0] = uString::Const("First argument should be of type ");
    ::TYPES[1] = ::g::Fuse::Scripting::JSCallback_typeof();
    ::TYPES[4] = ::g::Uno::Action2_typeof();
    ::TYPES[3] = uObject_typeof();
    type->SetPrecalc(
        ::TYPES[1/*Fuse.Scripting.JSCallback*/]->MakeMethod(1, type->T(0)),
        ::TYPES[1/*Fuse.Scripting.JSCallback*/]->MakeMethod(1, type->T(1)),
        ::TYPES[4/*Uno.Action`2*/]->MakeType(type->T(0), type->T(1)));
    type->SetFields(0,
        ::g::Uno::Action2_typeof()->MakeType(type->T(0), type->T(1)), offsetof(::g::Fuse::Scripting::JSCallback__ActionClosure2, _action), 0);
    return type;
}

// public ActionClosure(Uno.Action<T1, T2> action) :815
void JSCallback__ActionClosure2__ctor__fn(JSCallback__ActionClosure2* __this, uDelegate* action)
{
    __this->ctor_(action);
}

// public ActionClosure New(Uno.Action<T1, T2> action) :815
void JSCallback__ActionClosure2__New1_fn(uType* __type, uDelegate* action, JSCallback__ActionClosure2** __retval)
{
    *__retval = JSCallback__ActionClosure2::New1(__type, action);
}

// public object Run(object[] args) :820
void JSCallback__ActionClosure2__Run_fn(JSCallback__ActionClosure2* __this, uArray* args, uObject** __retval)
{
    *__retval = __this->Run(args);
}

// public ActionClosure(Uno.Action<T1, T2> action) [instance] :815
void JSCallback__ActionClosure2::ctor_(uDelegate* action)
{
    _action = action;
}

// public object Run(object[] args) [instance] :820
uObject* JSCallback__ActionClosure2::Run(uArray* args)
{
    uType* __types[] = {
        __type->T(0),
        __type->T(1),
        __type->Precalced(0/*Fuse.Scripting.JSCallback.GetArg<T1>*/),
        __type->Precalced(1/*Fuse.Scripting.JSCallback.GetArg<T2>*/),
        __type->Precalced(2/*Uno.Action<T1, T2>*/),
    };
    uT arg(__types[0], U_ALLOCA(__types[0]->ValueSize));
    uT arg1(__types[1], U_ALLOCA(__types[1]->ValueSize));
    bool ret2;
    bool ret3;
    arg = uT(__types[0], U_ALLOCA(__types[0]->ValueSize));
    arg1 = uT(__types[1], U_ALLOCA(__types[1]->ValueSize));

    if ((::g::Fuse::Scripting::JSCallback__GetArg_fn(__types[2], args, &arg, uCRef<int>(0), &ret2), ret2) && (::g::Fuse::Scripting::JSCallback__GetArg_fn(__types[3], args, &arg1, uCRef<int>(1), &ret3), ret3))
        uPtr(_action)->Invoke(2, (void*)arg, (void*)arg1);
    else
        U_THROW(::g::Uno::ArgumentException::New4(::g::Uno::String::op_Addition1(::STRINGS[0/*"First argum...*/], __types[0])));

    return NULL;
}

// public ActionClosure New(Uno.Action<T1, T2> action) [static] :815
JSCallback__ActionClosure2* JSCallback__ActionClosure2::New1(uType* __type, uDelegate* action)
{
    JSCallback__ActionClosure2* obj1 = (JSCallback__ActionClosure2*)uNew(__type);
    obj1->ctor_(action);
    return obj1;
}
// }

// C:\ProgramData\Uno\Packages\Fuse.Scripting\0.19.3\$.uno(680)
// ------------------------------------------------------------

// public abstract class Array :680
// {
Array_type* Array_typeof()
{
    static uSStrong<Array_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.ObjectSize = sizeof(Array);
    options.TypeSize = sizeof(Array_type);
    type = (Array_type*)uClassType::New("Fuse.Scripting.Array", options);
    type->fp_Equals = (void(*)(uObject*, uObject*, bool*))Array__Equals_fn;
    type->Reflection.SetFunctions(4,
        new uFunction("Equals", NULL, NULL, offsetof(Array_type, fp_Equals2), false, ::g::Uno::Bool_typeof(), 1, Array_typeof()),
        new uFunction("get_Item", NULL, NULL, offsetof(Array_type, fp_get_Item), false, uObject_typeof(), 1, ::g::Uno::Int_typeof()),
        new uFunction("set_Item", NULL, NULL, offsetof(Array_type, fp_set_Item), false, uVoid_typeof(), 2, ::g::Uno::Int_typeof(), uObject_typeof()),
        new uFunction("get_Length", NULL, NULL, offsetof(Array_type, fp_get_Length), false, ::g::Uno::Int_typeof(), 0));
    return type;
}

// protected generated Array() :680
void Array__ctor__fn(Array* __this)
{
    __this->ctor_();
}

// public override bool Equals(object o) :686
void Array__Equals_fn(Array* __this, uObject* o, bool* __retval)
{
    Array* a = uAs<Array*>(o, Array_typeof());

    if (a == NULL)
        return *__retval = false, void();

    return *__retval = __this->Equals2(a), void();
}

// protected generated Array() [instance] :680
void Array::ctor_()
{
}
// }

// C:\ProgramData\Uno\Packages\FuseCore\0.19.3\Scripting\$.uno(132)
// ----------------------------------------------------------------

// public sealed class BoolChangedArgs :132
// {
BoolChangedArgs_type* BoolChangedArgs_typeof()
{
    static uSStrong<BoolChangedArgs_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 2;
    options.InterfaceCount = 1;
    options.ObjectSize = sizeof(BoolChangedArgs);
    options.TypeSize = sizeof(BoolChangedArgs_type);
    type = (BoolChangedArgs_type*)uClassType::New("Fuse.Scripting.BoolChangedArgs", options);
    type->SetBase(::g::Uno::UX::ValueChangedArgs_typeof()->MakeType(::g::Uno::Bool_typeof()));
    type->interface0.fp_Serialize = (void(*)(uObject*, uObject*))BoolChangedArgs__Fuse_Scripting_IScriptEvent_Serialize_fn;
    ::STRINGS[2] = uString::Const("value");
    ::TYPES[5] = ::g::Uno::UX::ValueChangedArgs_typeof()->MakeType(::g::Uno::Bool_typeof());
    type->SetInterfaces(
        ::g::Fuse::Scripting::IScriptEvent_typeof(), offsetof(BoolChangedArgs_type, interface0));
    type->SetFields(2);
    type->Reflection.SetFunctions(1,
        new uFunction(".ctor", NULL, (void*)BoolChangedArgs__New3_fn, 0, true, BoolChangedArgs_typeof(), 2, ::g::Uno::Bool_typeof(), uObject_typeof()));
    return type;
}

// public BoolChangedArgs(bool value, object origin) :134
void BoolChangedArgs__ctor_2_fn(BoolChangedArgs* __this, bool* value, uObject* origin)
{
    __this->ctor_2(*value, origin);
}

// private void Fuse.Scripting.IScriptEvent.Serialize(Fuse.Scripting.IEventSerializer s) :138
void BoolChangedArgs__Fuse_Scripting_IScriptEvent_Serialize_fn(BoolChangedArgs* __this, uObject* s)
{
    bool ret2;
    ::g::Fuse::Scripting::IEventSerializer::AddBool(uInterface(uPtr(s), ::g::Fuse::Scripting::IEventSerializer_typeof()), ::STRINGS[2/*"value"*/], (::g::Uno::UX::ValueChangedArgs__get_Value_fn(__this, &ret2), ret2));
}

// public BoolChangedArgs New(bool value, object origin) :134
void BoolChangedArgs__New3_fn(bool* value, uObject* origin, BoolChangedArgs** __retval)
{
    *__retval = BoolChangedArgs::New3(*value, origin);
}

// public BoolChangedArgs(bool value, object origin) [instance] :134
void BoolChangedArgs::ctor_2(bool value, uObject* origin)
{
    ::g::Uno::UX::ValueChangedArgs__ctor_1_fn(this, uCRef(value), origin);
}

// public BoolChangedArgs New(bool value, object origin) [static] :134
BoolChangedArgs* BoolChangedArgs::New3(bool value, uObject* origin)
{
    BoolChangedArgs* obj1 = (BoolChangedArgs*)uNew(BoolChangedArgs_typeof());
    obj1->ctor_2(value, origin);
    return obj1;
}
// }

// C:\ProgramData\Uno\Packages\Fuse.Scripting\0.19.3\$.uno(730)
// ------------------------------------------------------------

// public delegate object Callback(object[] args) :730
uDelegateType* Callback_typeof()
{
    static uSStrong<uDelegateType*> type;
    if (type != NULL) return type;

    type = uDelegateType::New("Fuse.Scripting.Callback", 1, 0);
    type->SetSignature(uObject_typeof(),
        uObject_typeof()->Array());
    return type;
}

// C:\ProgramData\Uno\Packages\Fuse.Scripting\0.19.3\$.uno(20)
// -----------------------------------------------------------

// public abstract class Context :20
// {
Context_type* Context_typeof()
{
    static uSStrong<Context_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 2;
    options.InterfaceCount = 1;
    options.ObjectSize = sizeof(Context);
    options.TypeSize = sizeof(Context_type);
    type = (Context_type*)uClassType::New("Fuse.Scripting.Context", options);
    ::STRINGS[3] = uString::Const("(function(require) { var module = { id: '");
    ::STRINGS[4] = uString::Const("', exports: {} }; var exports = module.exports; { ");
    ::STRINGS[5] = uString::Const("\n"
        " } return module.exports; })");
    ::STRINGS[6] = uString::Const("Could not evaluate module '");
    ::STRINGS[7] = uString::Const("': JavaScript code contains errors");
    ::STRINGS[8] = uString::Const("(no file)");
    ::STRINGS[9] = uString::Const("new Object()");
    ::STRINGS[10] = uString::Const("Object.create");
    ::STRINGS[11] = uString::Const("");
    ::STRINGS[12] = uString::Const("(function(obj, name, getCallback, setCallback, e, c) { Object.defineProperty(obj, name, { get: getCallback, set: setCallback, enumerable: e, configurable: c }); })");
    ::STRINGS[13] = uString::Const("(function(obj, name, value, e, c) { Object.defineProperty(obj, name, { value: value, enumerable: e, configurable: c }); })");
    ::STRINGS[14] = uString::Const("require(): accepts exactly one argument, ");
    ::STRINGS[15] = uString::Const(" provided");
    ::STRINGS[16] = uString::Const("require(): argument must be a string");
    ::STRINGS[17] = uString::Const("require(): module not found: ");
    ::TYPES[6] = ::g::Uno::Collections::Dictionary_typeof()->MakeType(::g::Uno::String_typeof(), uObject_typeof());
    ::TYPES[7] = ::g::Fuse::Scripting::IModule_typeof();
    ::TYPES[8] = ::g::Uno::Char_typeof()->Array();
    ::TYPES[9] = ::g::Fuse::Scripting::Function_typeof();
    ::TYPES[10] = uObject_typeof()->Array();
    ::TYPES[3] = uObject_typeof();
    ::TYPES[11] = ::g::Fuse::Scripting::Callback_typeof();
    ::TYPES[12] = ::g::Fuse::Scripting::Object_typeof();
    ::TYPES[13] = ::g::Uno::String_typeof();
    ::TYPES[14] = ::g::Uno::Bool_typeof();
    ::TYPES[15] = ::g::Uno::Predicate_typeof()->MakeType(uObject_typeof());
    type->SetInterfaces(
        ::g::Uno::IDisposable_typeof(), offsetof(Context_type, interface0));
    type->SetFields(0,
        ::g::Uno::Collections::Dictionary_typeof()->MakeType(::g::Uno::String_typeof(), uObject_typeof()), offsetof(::g::Fuse::Scripting::Context, _moduleResults), 0,
        ::g::Fuse::Scripting::IDispatcher_typeof(), offsetof(::g::Fuse::Scripting::Context, _ownerThread), 0);
    type->Reflection.SetFunctions(12,
        new uFunction("get_Dispatcher", NULL, (void*)Context__get_Dispatcher_fn, 0, false, ::g::Fuse::Scripting::IDispatcher_typeof(), 0),
        new uFunction("Dispose", NULL, NULL, offsetof(Context_type, fp_Dispose), false, uVoid_typeof(), 0),
        new uFunction("Evaluate", NULL, (void*)Context__Evaluate_fn, 0, false, uObject_typeof(), 2, ::g::Fuse::Scripting::IModule_typeof(), ::g::Uno::String_typeof()),
        new uFunction("Evaluate", NULL, NULL, offsetof(Context_type, fp_Evaluate1), false, uObject_typeof(), 2, ::g::Uno::String_typeof(), ::g::Uno::String_typeof()),
        new uFunction("get_GlobalObject", NULL, NULL, offsetof(Context_type, fp_get_GlobalObject), false, ::g::Fuse::Scripting::Object_typeof(), 0),
        new uFunction("NewObject", NULL, (void*)Context__NewObject_fn, 0, false, ::g::Fuse::Scripting::Object_typeof(), 0),
        new uFunction("ObjectCreate", NULL, (void*)Context__ObjectCreate_fn, 0, false, ::g::Fuse::Scripting::Object_typeof(), 1, uObject_typeof()->Array()),
        new uFunction("ObjectDefineProperty", NULL, (void*)Context__ObjectDefineProperty_fn, 0, false, uVoid_typeof(), 6, ::g::Fuse::Scripting::Object_typeof(), ::g::Uno::String_typeof(), ::g::Fuse::Scripting::Callback_typeof(), ::g::Fuse::Scripting::Callback_typeof(), ::g::Uno::Bool_typeof(), ::g::Uno::Bool_typeof()),
        new uFunction("ObjectDefineProperty", NULL, (void*)Context__ObjectDefineProperty1_fn, 0, false, uVoid_typeof(), 5, ::g::Fuse::Scripting::Object_typeof(), ::g::Uno::String_typeof(), uObject_typeof(), ::g::Uno::Bool_typeof(), ::g::Uno::Bool_typeof()),
        new uFunction("Require", NULL, (void*)Context__Require_fn, 0, false, uObject_typeof(), 1, uObject_typeof()->Array()),
        new uFunction("Require", NULL, (void*)Context__Require1_fn, 0, false, uObject_typeof(), 1, ::g::Uno::String_typeof()),
        new uFunction("ResetModule", NULL, (void*)Context__ResetModule_fn, 0, false, ::g::Uno::Bool_typeof(), 1, ::g::Uno::String_typeof()));
    return type;
}

// protected Context(Fuse.Scripting.IDispatcher ownerThread) :86
void Context__ctor__fn(Context* __this, uObject* ownerThread)
{
    __this->ctor_(ownerThread);
}

// private bool Acceptor(object obj) :78
void Context__Acceptor_fn(Context* __this, uObject* obj, bool* __retval)
{
    *__retval = __this->Acceptor(obj);
}

// public Fuse.Scripting.IDispatcher get_Dispatcher() :84
void Context__get_Dispatcher_fn(Context* __this, uObject** __retval)
{
    *__retval = __this->Dispatcher();
}

// public object Evaluate(Fuse.Scripting.IModule src, string id) :57
void Context__Evaluate_fn(Context* __this, uObject* src, uString* id, uObject** __retval)
{
    *__retval = __this->Evaluate(src, id);
}

// public Fuse.Scripting.Object NewObject() :112
void Context__NewObject_fn(Context* __this, ::g::Fuse::Scripting::Object** __retval)
{
    *__retval = __this->NewObject();
}

// public Fuse.Scripting.Object ObjectCreate(object[] args) :103
void Context__ObjectCreate_fn(Context* __this, uArray* args, ::g::Fuse::Scripting::Object** __retval)
{
    *__retval = __this->ObjectCreate(args);
}

// public void ObjectDefineProperty(Fuse.Scripting.Object obj, string name, Fuse.Scripting.Callback getProperty, Fuse.Scripting.Callback setProperty, [bool enumerable], [bool configurable]) :91
void Context__ObjectDefineProperty_fn(Context* __this, ::g::Fuse::Scripting::Object* obj, uString* name, uDelegate* getProperty, uDelegate* setProperty, bool* enumerable, bool* configurable)
{
    __this->ObjectDefineProperty(obj, name, getProperty, setProperty, *enumerable, *configurable);
}

// public void ObjectDefineProperty(Fuse.Scripting.Object obj, string name, object value, [bool enumerable], [bool configurable]) :97
void Context__ObjectDefineProperty1_fn(Context* __this, ::g::Fuse::Scripting::Object* obj, uString* name, uObject* value, bool* enumerable, bool* configurable)
{
    __this->ObjectDefineProperty1(obj, name, value, *enumerable, *configurable);
}

// public object Require(object[] args) :29
void Context__Require_fn(Context* __this, uArray* args, uObject** __retval)
{
    *__retval = __this->Require(args);
}

// public object Require(string id) :39
void Context__Require1_fn(Context* __this, uString* id, uObject** __retval)
{
    *__retval = __this->Require1(id);
}

// public bool ResetModule(string id) :24
void Context__ResetModule_fn(Context* __this, uString* id, bool* __retval)
{
    *__retval = __this->ResetModule(id);
}

// protected Context(Fuse.Scripting.IDispatcher ownerThread) [instance] :86
void Context::ctor_(uObject* ownerThread)
{
    _moduleResults = ((::g::Uno::Collections::Dictionary*)::g::Uno::Collections::Dictionary::New1(::TYPES[6/*Uno.Collections.Dictionary<string, object>*/]));
    _ownerThread = ownerThread;
}

// private bool Acceptor(object obj) [instance] :78
bool Context::Acceptor(uObject* obj)
{
    return uIs(obj, ::TYPES[7/*Fuse.Scripting.IModule*/]);
}

// public Fuse.Scripting.IDispatcher get_Dispatcher() [instance] :84
uObject* Context::Dispatcher()
{
    return _ownerThread;
}

// public object Evaluate(Fuse.Scripting.IModule src, string id) [instance] :57
uObject* Context::Evaluate(uObject* src, uString* id)
{
    uString* code = ::g::Fuse::Scripting::IModule::Code(uInterface(uPtr(src), ::TYPES[7/*Fuse.Scripting.IModule*/]));
    uArray* newlines = uArray::New(::TYPES[8/*char[]*/], ::g::Fuse::Scripting::IModule::LineNumberOffset(uInterface(src, ::TYPES[7/*Fuse.Scripting.IModule*/])));

    for (int i = 0; i < ::g::Fuse::Scripting::IModule::LineNumberOffset(uInterface(src, ::TYPES[7/*Fuse.Scripting.IModule*/])); ++i)
        uPtr(newlines)->Item<uChar>(i) = 10;

    uString* wrappedCode = ::g::Uno::String::op_Addition2(::g::Uno::String::op_Addition2(::g::Uno::String::op_Addition2(::g::Uno::String::op_Addition2(::g::Uno::String::op_Addition2(::STRINGS[3/*"(function(r...*/], id), ::STRINGS[4/*"', exports:...*/]), uString::CharArray(newlines)), code), ::STRINGS[5/*"\n } return...*/]);
    ::g::Fuse::Scripting::Function* moduleFunc = uCast< ::g::Fuse::Scripting::Function*>(Evaluate1(::g::Fuse::Scripting::IModule::FileName(uInterface(src, ::TYPES[7/*Fuse.Scripting.IModule*/])), wrappedCode), ::TYPES[9/*Fuse.Scripting.Function*/]);

    if (moduleFunc == NULL)
        U_THROW(::g::Uno::Exception::New2(::g::Uno::String::op_Addition2(::g::Uno::String::op_Addition2(::STRINGS[6/*"Could not e...*/], id), ::STRINGS[7/*"': JavaScri...*/])));

    return uPtr(moduleFunc)->Call(uArray::Init<uObject*>(::TYPES[10/*object[]*/], 1, uDelegate::New(::TYPES[11/*Fuse.Scripting.Callback*/], (void*)Context__Require_fn, this)));
}

// public Fuse.Scripting.Object NewObject() [instance] :112
::g::Fuse::Scripting::Object* Context::NewObject()
{
    return uCast< ::g::Fuse::Scripting::Object*>(Evaluate1(::STRINGS[8/*"(no file)"*/], ::STRINGS[9/*"new Object()"*/]), ::TYPES[12/*Fuse.Scripting.Object*/]);
}

// public Fuse.Scripting.Object ObjectCreate(object[] args) [instance] :103
::g::Fuse::Scripting::Object* Context::ObjectCreate(uArray* args)
{
    ::g::Fuse::Scripting::Function* objectCreate = uAs< ::g::Fuse::Scripting::Function*>(Evaluate1(::STRINGS[8/*"(no file)"*/], ::STRINGS[10/*"Object.create"*/]), ::TYPES[9/*Fuse.Scripting.Function*/]);

    if (objectCreate != NULL)
        return uAs< ::g::Fuse::Scripting::Object*>(uPtr(objectCreate)->Call(args), ::TYPES[12/*Fuse.Scripting.Object*/]);

    return NULL;
}

// public void ObjectDefineProperty(Fuse.Scripting.Object obj, string name, Fuse.Scripting.Callback getProperty, Fuse.Scripting.Callback setProperty, [bool enumerable], [bool configurable]) [instance] :91
void Context::ObjectDefineProperty(::g::Fuse::Scripting::Object* obj, uString* name, uDelegate* getProperty, uDelegate* setProperty, bool enumerable, bool configurable)
{
    ::g::Fuse::Scripting::Function* func = uAs< ::g::Fuse::Scripting::Function*>(Evaluate1(::STRINGS[11/*""*/], ::STRINGS[12/*"(function(o...*/]), ::TYPES[9/*Fuse.Scripting.Function*/]);
    uPtr(func)->Call(uArray::Init<uObject*>(::TYPES[10/*object[]*/], 6, obj, name, getProperty, setProperty, uBox(::TYPES[14/*bool*/], enumerable), uBox(::TYPES[14/*bool*/], configurable)));
}

// public void ObjectDefineProperty(Fuse.Scripting.Object obj, string name, object value, [bool enumerable], [bool configurable]) [instance] :97
void Context::ObjectDefineProperty1(::g::Fuse::Scripting::Object* obj, uString* name, uObject* value, bool enumerable, bool configurable)
{
    ::g::Fuse::Scripting::Function* func = uAs< ::g::Fuse::Scripting::Function*>(Evaluate1(::STRINGS[11/*""*/], ::STRINGS[13/*"(function(o...*/]), ::TYPES[9/*Fuse.Scripting.Function*/]);
    uPtr(func)->Call(uArray::Init<uObject*>(::TYPES[10/*object[]*/], 5, obj, name, value, uBox(::TYPES[14/*bool*/], enumerable), uBox(::TYPES[14/*bool*/], configurable)));
}

// public object Require(object[] args) [instance] :29
uObject* Context::Require(uArray* args)
{
    if (uPtr(args)->Length() != 1)
        U_THROW(::g::Fuse::Scripting::Error::New4(::g::Uno::String::op_Addition2(::g::Uno::String::op_Addition1(::STRINGS[14/*"require(): ...*/], uBox<int>(::TYPES[51/*int*/], uPtr(args)->Length())), ::STRINGS[15/*" provided"*/])));

    uString* id = uAs<uString*>(uPtr(args)->Strong<uObject*>(0), ::TYPES[13/*string*/]);

    if (::g::Uno::String::op_Equality(id, NULL))
        U_THROW(::g::Fuse::Scripting::Error::New4(::STRINGS[16/*"require(): ...*/]));

    return Require1(id);
}

// public object Require(string id) [instance] :39
uObject* Context::Require1(uString* id)
{
    bool ret1;
    uObject* modRes;

    if (!(::g::Uno::Collections::Dictionary__TryGetValue_fn(uPtr(_moduleResults), id, (void**)(&modRes), &ret1), ret1))
    {
        uObject* res;

        if (!::g::Uno::UX::Resource::TryFindGlobal(id, uDelegate::New(::TYPES[15/*Uno.Predicate<object>*/], (void*)Context__Acceptor_fn, this), &res))
            U_THROW(::g::Fuse::Scripting::Error::New4(::g::Uno::String::op_Addition2(::STRINGS[17/*"require(): ...*/], id)));

        uObject* mod = (uObject*)res;
        modRes = ::g::Fuse::Scripting::IModule::Evaluate(uInterface(uPtr(mod), ::TYPES[7/*Fuse.Scripting.IModule*/]), id, this);
        ::g::Uno::Collections::Dictionary__Add_fn(uPtr(_moduleResults), id, modRes);
    }

    return modRes;
}

// public bool ResetModule(string id) [instance] :24
bool Context::ResetModule(uString* id)
{
    bool ret2;
    return (::g::Uno::Collections::Dictionary__Remove_fn(uPtr(_moduleResults), id, &ret2), ret2);
}
// }

// C:\ProgramData\Uno\Packages\Fuse.Scripting\0.19.3\$.uno(323)
// ------------------------------------------------------------

// private sealed class NativePromise<T, TJSResult>.ContextClosure :323
// {
uType* NativePromise__ContextClosure_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 3;
    options.GenericCount = 2;
    options.PrecalcCount = 2;
    options.ObjectSize = sizeof(NativePromise__ContextClosure);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Fuse.Scripting.NativePromise`2.ContextClosure", options);
    ::STRINGS[18] = uString::Const("Promise");
    ::TYPES[9] = ::g::Fuse::Scripting::Function_typeof();
    ::TYPES[12] = ::g::Fuse::Scripting::Object_typeof();
    ::TYPES[16] = ::g::Fuse::Scripting::Context_typeof();
    ::TYPES[17] = ::g::Fuse::Scripting::FutureFactory_typeof();
    ::TYPES[3] = uObject_typeof();
    ::TYPES[10] = uObject_typeof()->Array();
    ::TYPES[11] = ::g::Fuse::Scripting::Callback_typeof();
    ::TYPES[18] = ::g::Fuse::Scripting::NativePromise__PromiseClosure_typeof();
    type->SetPrecalc(
        ::TYPES[17/*Fuse.Scripting.FutureFactory`1*/]->MakeType(type->T(0)),
        ::TYPES[18/*Fuse.Scripting.NativePromise`2.PromiseClosure*/]->MakeType(type->T(0), type->T(1)));
    type->SetFields(0,
        ::g::Fuse::Scripting::Context_typeof(), offsetof(::g::Fuse::Scripting::NativePromise__ContextClosure, _c), 0,
        ::g::Fuse::Scripting::ResultConverter_typeof()->MakeType(type->T(0), type->T(1)), offsetof(::g::Fuse::Scripting::NativePromise__ContextClosure, _converter), 0,
        ::g::Fuse::Scripting::FutureFactory_typeof()->MakeType(type->T(0)), offsetof(::g::Fuse::Scripting::NativePromise__ContextClosure, _factory), 0);
    return type;
}

// public ContextClosure(Fuse.Scripting.Context c, Fuse.Scripting.FutureFactory<T> factory, Fuse.Scripting.ResultConverter<T, TJSResult> converter) :328
void NativePromise__ContextClosure__ctor__fn(NativePromise__ContextClosure* __this, ::g::Fuse::Scripting::Context* c, uDelegate* factory, uDelegate* converter)
{
    __this->ctor_(c, factory, converter);
}

// internal object CreatePromise(object[] args) :334
void NativePromise__ContextClosure__CreatePromise_fn(NativePromise__ContextClosure* __this, uArray* args, uObject** __retval)
{
    *__retval = __this->CreatePromise(args);
}

// public ContextClosure New(Fuse.Scripting.Context c, Fuse.Scripting.FutureFactory<T> factory, Fuse.Scripting.ResultConverter<T, TJSResult> converter) :328
void NativePromise__ContextClosure__New1_fn(uType* __type, ::g::Fuse::Scripting::Context* c, uDelegate* factory, uDelegate* converter, NativePromise__ContextClosure** __retval)
{
    *__retval = NativePromise__ContextClosure::New1(__type, c, factory, converter);
}

// public ContextClosure(Fuse.Scripting.Context c, Fuse.Scripting.FutureFactory<T> factory, Fuse.Scripting.ResultConverter<T, TJSResult> converter) [instance] :328
void NativePromise__ContextClosure::ctor_(::g::Fuse::Scripting::Context* c, uDelegate* factory, uDelegate* converter)
{
    _c = c;
    _factory = factory;
    _converter = converter;
}

// internal object CreatePromise(object[] args) [instance] :334
uObject* NativePromise__ContextClosure::CreatePromise(uArray* args)
{
    uType* __types[] = {
        __type->Precalced(0/*Fuse.Scripting.FutureFactory<T>*/),
        __type->T(0),
        __type->Precalced(1/*Fuse.Scripting.NativePromise<T, TJSResult>.PromiseClosure*/),
        __type->T(1),
    };
    ::g::Fuse::Scripting::Function* promise = uCast< ::g::Fuse::Scripting::Function*>(uPtr(uPtr(_c)->GlobalObject())->Item(::STRINGS[18/*"Promise"*/]), ::TYPES[9/*Fuse.Scripting.Function*/]);
    ::g::Uno::Threading::Future1* future = (::g::Uno::Threading::Future1*)uPtr(_factory)->Invoke(1, args);
    return uPtr(promise)->Construct(uArray::Init<uObject*>(::TYPES[10/*object[]*/], 1, uDelegate::New(::TYPES[11/*Fuse.Scripting.Callback*/], (void*)::g::Fuse::Scripting::NativePromise__PromiseClosure__Run_fn, ::g::Fuse::Scripting::NativePromise__PromiseClosure::New1(__types[2], _c, future, _converter))));
}

// public ContextClosure New(Fuse.Scripting.Context c, Fuse.Scripting.FutureFactory<T> factory, Fuse.Scripting.ResultConverter<T, TJSResult> converter) [static] :328
NativePromise__ContextClosure* NativePromise__ContextClosure::New1(uType* __type, ::g::Fuse::Scripting::Context* c, uDelegate* factory, uDelegate* converter)
{
    NativePromise__ContextClosure* obj1 = (NativePromise__ContextClosure*)uNew(__type);
    obj1->ctor_(c, factory, converter);
    return obj1;
}
// }

// C:\ProgramData\Uno\Packages\FuseCore\0.19.3\Scripting\$.uno(120)
// ----------------------------------------------------------------

// public sealed class DoubleChangedArgs :120
// {
DoubleChangedArgs_type* DoubleChangedArgs_typeof()
{
    static uSStrong<DoubleChangedArgs_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 2;
    options.InterfaceCount = 1;
    options.ObjectSize = sizeof(DoubleChangedArgs);
    options.TypeSize = sizeof(DoubleChangedArgs_type);
    type = (DoubleChangedArgs_type*)uClassType::New("Fuse.Scripting.DoubleChangedArgs", options);
    type->SetBase(::g::Uno::UX::ValueChangedArgs_typeof()->MakeType(::g::Uno::Double_typeof()));
    type->interface0.fp_Serialize = (void(*)(uObject*, uObject*))DoubleChangedArgs__Fuse_Scripting_IScriptEvent_Serialize_fn;
    ::STRINGS[2] = uString::Const("value");
    ::TYPES[19] = ::g::Uno::UX::ValueChangedArgs_typeof()->MakeType(::g::Uno::Double_typeof());
    type->SetInterfaces(
        ::g::Fuse::Scripting::IScriptEvent_typeof(), offsetof(DoubleChangedArgs_type, interface0));
    type->SetFields(2);
    type->Reflection.SetFunctions(1,
        new uFunction(".ctor", NULL, (void*)DoubleChangedArgs__New3_fn, 0, true, DoubleChangedArgs_typeof(), 2, ::g::Uno::Double_typeof(), uObject_typeof()));
    return type;
}

// public DoubleChangedArgs(double value, object origin) :122
void DoubleChangedArgs__ctor_2_fn(DoubleChangedArgs* __this, double* value, uObject* origin)
{
    __this->ctor_2(*value, origin);
}

// private void Fuse.Scripting.IScriptEvent.Serialize(Fuse.Scripting.IEventSerializer s) :126
void DoubleChangedArgs__Fuse_Scripting_IScriptEvent_Serialize_fn(DoubleChangedArgs* __this, uObject* s)
{
    double ret2;
    ::g::Fuse::Scripting::IEventSerializer::AddDouble(uInterface(uPtr(s), ::g::Fuse::Scripting::IEventSerializer_typeof()), ::STRINGS[2/*"value"*/], (::g::Uno::UX::ValueChangedArgs__get_Value_fn(__this, &ret2), ret2));
}

// public DoubleChangedArgs New(double value, object origin) :122
void DoubleChangedArgs__New3_fn(double* value, uObject* origin, DoubleChangedArgs** __retval)
{
    *__retval = DoubleChangedArgs::New3(*value, origin);
}

// public DoubleChangedArgs(double value, object origin) [instance] :122
void DoubleChangedArgs::ctor_2(double value, uObject* origin)
{
    ::g::Uno::UX::ValueChangedArgs__ctor_1_fn(this, uCRef(value), origin);
}

// public DoubleChangedArgs New(double value, object origin) [static] :122
DoubleChangedArgs* DoubleChangedArgs::New3(double value, uObject* origin)
{
    DoubleChangedArgs* obj1 = (DoubleChangedArgs*)uNew(DoubleChangedArgs_typeof());
    obj1->ctor_2(value, origin);
    return obj1;
}
// }

// C:\ProgramData\Uno\Packages\Fuse.Scripting\0.19.3\$.uno(663)
// ------------------------------------------------------------

// public sealed class Error :663
// {
::g::Uno::Exception_type* Error_typeof()
{
    static uSStrong< ::g::Uno::Exception_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 3;
    options.ObjectSize = sizeof(Error);
    options.TypeSize = sizeof(::g::Uno::Exception_type);
    type = (::g::Uno::Exception_type*)uClassType::New("Fuse.Scripting.Error", options);
    type->SetBase(::g::Uno::Exception_typeof());
    type->SetFields(3);
    type->Reflection.SetFunctions(1,
        new uFunction(".ctor", NULL, (void*)Error__New4_fn, 0, true, Error_typeof(), 1, ::g::Uno::String_typeof()));
    return type;
}

// public Error(string message) :665
void Error__ctor_3_fn(Error* __this, uString* message)
{
    __this->ctor_3(message);
}

// public Error New(string message) :665
void Error__New4_fn(uString* message, Error** __retval)
{
    *__retval = Error::New4(message);
}

// public Error(string message) [instance] :665
void Error::ctor_3(uString* message)
{
    ctor_1(message);
}

// public Error New(string message) [static] :665
Error* Error::New4(uString* message)
{
    Error* obj1 = (Error*)uNew(Error_typeof());
    obj1->ctor_3(message);
    return obj1;
}
// }

// C:\ProgramData\Uno\Packages\Fuse.Scripting\0.19.3\$.uno(512)
// ------------------------------------------------------------

// private sealed class NativeEvent.EventClosure :512
// {
uType* NativeEvent__EventClosure_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 2;
    options.ObjectSize = sizeof(NativeEvent__EventClosure);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Fuse.Scripting.NativeEvent.EventClosure", options);
    ::TYPES[10] = uObject_typeof()->Array();
    type->SetFields(0,
        uObject_typeof()->Array(), offsetof(::g::Fuse::Scripting::NativeEvent__EventClosure, _args), 0,
        ::g::Fuse::Scripting::Function_typeof(), offsetof(::g::Fuse::Scripting::NativeEvent__EventClosure, _jsFunction), 0);
    return type;
}

// public EventClosure(Fuse.Scripting.Function jsFunction, object[] args) :517
void NativeEvent__EventClosure__ctor__fn(NativeEvent__EventClosure* __this, ::g::Fuse::Scripting::Function* jsFunction, uArray* args)
{
    __this->ctor_(jsFunction, args);
}

// public void Call() :523
void NativeEvent__EventClosure__Call_fn(NativeEvent__EventClosure* __this)
{
    __this->Call();
}

// public EventClosure New(Fuse.Scripting.Function jsFunction, object[] args) :517
void NativeEvent__EventClosure__New1_fn(::g::Fuse::Scripting::Function* jsFunction, uArray* args, NativeEvent__EventClosure** __retval)
{
    *__retval = NativeEvent__EventClosure::New1(jsFunction, args);
}

// public EventClosure(Fuse.Scripting.Function jsFunction, object[] args) [instance] :517
void NativeEvent__EventClosure::ctor_(::g::Fuse::Scripting::Function* jsFunction, uArray* args)
{
    _jsFunction = jsFunction;
    _args = ((args != NULL) ? args : uArray::New(::TYPES[10/*object[]*/], 0));
}

// public void Call() [instance] :523
void NativeEvent__EventClosure::Call()
{
    if (_jsFunction != NULL)
        uPtr(_jsFunction)->Call(_args);
}

// public EventClosure New(Fuse.Scripting.Function jsFunction, object[] args) [static] :517
NativeEvent__EventClosure* NativeEvent__EventClosure::New1(::g::Fuse::Scripting::Function* jsFunction, uArray* args)
{
    NativeEvent__EventClosure* obj1 = (NativeEvent__EventClosure*)uNew(NativeEvent__EventClosure_typeof());
    obj1->ctor_(jsFunction, args);
    return obj1;
}
// }

// C:\ProgramData\Uno\Packages\Fuse.Scripting\0.19.3\$.uno(262)
// ------------------------------------------------------------

// internal sealed class FactoryClosure<T> :262
// {
uType* FactoryClosure_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 3;
    options.GenericCount = 1;
    options.PrecalcCount = 1;
    options.ObjectSize = sizeof(FactoryClosure);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Fuse.Scripting.FactoryClosure`1", options);
    ::TYPES[20] = ::g::Fuse::Scripting::ResultFactory_typeof();
    type->SetPrecalc(
        ::TYPES[20/*Fuse.Scripting.ResultFactory`1*/]->MakeType(type->T(0)));
    type->SetFields(0,
        uObject_typeof()->Array(), offsetof(::g::Fuse::Scripting::FactoryClosure, _args), 0,
        ::g::Fuse::Scripting::ResultFactory_typeof()->MakeType(type->T(0)), offsetof(::g::Fuse::Scripting::FactoryClosure, _factory), 0,
        ::g::Uno::Threading::Promise_typeof()->MakeType(type->T(0)), offsetof(::g::Fuse::Scripting::FactoryClosure, _promise), 0);
    return type;
}

// public FactoryClosure(Fuse.Scripting.ResultFactory<T> factory, object[] args, Uno.Threading.Promise<T> promise) :268
void FactoryClosure__ctor__fn(FactoryClosure* __this, uDelegate* factory, uArray* args, ::g::Uno::Threading::Promise* promise)
{
    __this->ctor_(factory, args, promise);
}

// public FactoryClosure New(Fuse.Scripting.ResultFactory<T> factory, object[] args, Uno.Threading.Promise<T> promise) :268
void FactoryClosure__New1_fn(uType* __type, uDelegate* factory, uArray* args, ::g::Uno::Threading::Promise* promise, FactoryClosure** __retval)
{
    *__retval = FactoryClosure::New1(__type, factory, args, promise);
}

// public void Run() :275
void FactoryClosure__Run_fn(FactoryClosure* __this)
{
    __this->Run();
}

// public FactoryClosure(Fuse.Scripting.ResultFactory<T> factory, object[] args, Uno.Threading.Promise<T> promise) [instance] :268
void FactoryClosure::ctor_(uDelegate* factory, uArray* args, ::g::Uno::Threading::Promise* promise)
{
    _factory = factory;
    _args = args;
    _promise = promise;
}

// public void Run() [instance] :275
void FactoryClosure::Run()
{
    uType* __types[] = {
        __type->T(0),
        __type->Precalced(0/*Fuse.Scripting.ResultFactory<T>*/),
    };
    uT ret2(__types[0], U_ALLOCA(__types[0]->ValueSize));
    uT res(__types[0], U_ALLOCA(__types[0]->ValueSize));
    ;
    res = uT(__types[0], U_ALLOCA(__types[0]->ValueSize));

    try
    {
        res = (uPtr(_factory)->Invoke(&ret2, 1, (uArray*)_args), ret2);
    }
    catch (const uThrowable& __t)
    {
        ::g::Uno::Exception* e = __t.Exception;
        uPtr(_promise)->Reject(e);
        return;
    }

    ::g::Uno::Threading::Promise__Resolve_fn(uPtr(_promise), res);
}

// public FactoryClosure New(Fuse.Scripting.ResultFactory<T> factory, object[] args, Uno.Threading.Promise<T> promise) [static] :268
FactoryClosure* FactoryClosure::New1(uType* __type, uDelegate* factory, uArray* args, ::g::Uno::Threading::Promise* promise)
{
    FactoryClosure* obj1 = (FactoryClosure*)uNew(__type);
    obj1->ctor_(factory, args, promise);
    return obj1;
}
// }

// C:\ProgramData\Uno\Packages\Fuse.Scripting\0.19.3\$.uno(146)
// ------------------------------------------------------------

// public sealed class FileModule :146
// {
FileModule_type* FileModule_typeof()
{
    static uSStrong<FileModule_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 1;
    options.InterfaceCount = 1;
    options.ObjectSize = sizeof(FileModule);
    options.TypeSize = sizeof(FileModule_type);
    type = (FileModule_type*)uClassType::New("Fuse.Scripting.FileModule", options);
    type->interface0.fp_Evaluate = (void(*)(uObject*, uString*, ::g::Fuse::Scripting::Context*, uObject**))FileModule__Evaluate_fn;
    type->interface0.fp_get_Code = (void(*)(uObject*, uString**))FileModule__get_Code_fn;
    type->interface0.fp_get_FileName = (void(*)(uObject*, uString**))FileModule__get_FileName_fn;
    type->interface0.fp_get_LineNumberOffset = (void(*)(uObject*, int*))FileModule__get_LineNumberOffset_fn;
    ::TYPES[7] = ::g::Fuse::Scripting::IModule_typeof();
    ::TYPES[21] = ::g::Uno::UX::FileSource_typeof();
    type->SetInterfaces(
        ::g::Fuse::Scripting::IModule_typeof(), offsetof(FileModule_type, interface0));
    type->SetFields(0,
        ::g::Uno::UX::FileSource_typeof(), offsetof(::g::Fuse::Scripting::FileModule, _fs), 0);
    type->Reflection.SetFunctions(5,
        new uFunction("get_Code", NULL, (void*)FileModule__get_Code_fn, 0, false, ::g::Uno::String_typeof(), 0),
        new uFunction("Evaluate", NULL, (void*)FileModule__Evaluate_fn, 0, false, uObject_typeof(), 2, ::g::Uno::String_typeof(), ::g::Fuse::Scripting::Context_typeof()),
        new uFunction("get_FileName", NULL, (void*)FileModule__get_FileName_fn, 0, false, ::g::Uno::String_typeof(), 0),
        new uFunction("get_LineNumberOffset", NULL, (void*)FileModule__get_LineNumberOffset_fn, 0, false, ::g::Uno::Int_typeof(), 0),
        new uFunction(".ctor", NULL, (void*)FileModule__New1_fn, 0, true, FileModule_typeof(), 1, ::g::Uno::UX::FileSource_typeof()));
    return type;
}

// public FileModule(Uno.UX.FileSource fs) :150
void FileModule__ctor__fn(FileModule* __this, ::g::Uno::UX::FileSource* fs)
{
    __this->ctor_(fs);
}

// public string get_Code() :157
void FileModule__get_Code_fn(FileModule* __this, uString** __retval)
{
    *__retval = __this->Code();
}

// public object Evaluate(string id, Fuse.Scripting.Context c) :170
void FileModule__Evaluate_fn(FileModule* __this, uString* id, ::g::Fuse::Scripting::Context* c, uObject** __retval)
{
    *__retval = __this->Evaluate(id, c);
}

// public string get_FileName() :162
void FileModule__get_FileName_fn(FileModule* __this, uString** __retval)
{
    *__retval = __this->FileName();
}

// public int get_LineNumberOffset() :167
void FileModule__get_LineNumberOffset_fn(FileModule* __this, int* __retval)
{
    *__retval = __this->LineNumberOffset();
}

// public FileModule New(Uno.UX.FileSource fs) :150
void FileModule__New1_fn(::g::Uno::UX::FileSource* fs, FileModule** __retval)
{
    *__retval = FileModule::New1(fs);
}

// public FileModule(Uno.UX.FileSource fs) [instance] :150
void FileModule::ctor_(::g::Uno::UX::FileSource* fs)
{
    _fs = fs;
}

// public string get_Code() [instance] :157
uString* FileModule::Code()
{
    return uPtr(_fs)->ReadAllText();
}

// public object Evaluate(string id, Fuse.Scripting.Context c) [instance] :170
uObject* FileModule::Evaluate(uString* id, ::g::Fuse::Scripting::Context* c)
{
    return uPtr(c)->Evaluate((uObject*)this, id);
}

// public string get_FileName() [instance] :162
uString* FileModule::FileName()
{
    return uPtr(_fs)->Name;
}

// public int get_LineNumberOffset() [instance] :167
int FileModule::LineNumberOffset()
{
    return 0;
}

// public FileModule New(Uno.UX.FileSource fs) [static] :150
FileModule* FileModule::New1(::g::Uno::UX::FileSource* fs)
{
    FileModule* obj1 = (FileModule*)uNew(FileModule_typeof());
    obj1->ctor_(fs);
    return obj1;
}
// }

// C:\ProgramData\Uno\Packages\Fuse.Scripting\0.19.3\$.uno(833)
// ------------------------------------------------------------

// private sealed class JSCallback.FuncClosure<TResult> :833
// {
uType* JSCallback__FuncClosure_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 1;
    options.GenericCount = 1;
    options.PrecalcCount = 1;
    options.ObjectSize = sizeof(JSCallback__FuncClosure);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Fuse.Scripting.JSCallback.FuncClosure`1", options);
    ::TYPES[3] = uObject_typeof();
    ::TYPES[22] = ::g::Uno::Func_typeof();
    type->SetPrecalc(
        ::TYPES[22/*Uno.Func`1*/]->MakeType(type->T(0)));
    type->SetFields(0,
        ::g::Uno::Func_typeof()->MakeType(type->T(0)), offsetof(::g::Fuse::Scripting::JSCallback__FuncClosure, _method), 0);
    return type;
}

// public FuncClosure(Uno.Func<TResult> method) :837
void JSCallback__FuncClosure__ctor__fn(JSCallback__FuncClosure* __this, uDelegate* method)
{
    __this->ctor_(method);
}

// public FuncClosure New(Uno.Func<TResult> method) :837
void JSCallback__FuncClosure__New1_fn(uType* __type, uDelegate* method, JSCallback__FuncClosure** __retval)
{
    *__retval = JSCallback__FuncClosure::New1(__type, method);
}

// public object Run(object[] args) :842
void JSCallback__FuncClosure__Run_fn(JSCallback__FuncClosure* __this, uArray* args, uObject** __retval)
{
    *__retval = __this->Run(args);
}

// public FuncClosure(Uno.Func<TResult> method) [instance] :837
void JSCallback__FuncClosure::ctor_(uDelegate* method)
{
    _method = method;
}

// public object Run(object[] args) [instance] :842
uObject* JSCallback__FuncClosure::Run(uArray* args)
{
    uType* __types[] = {
        __type->T(0),
        __type->Precalced(0/*Uno.Func<TResult>*/),
    };
    uT ret2(__types[0], U_ALLOCA(__types[0]->ValueSize));
    ;
    return uBoxPtr(__types[0], (uPtr(_method)->Invoke(&ret2), ret2));
}

// public FuncClosure New(Uno.Func<TResult> method) [static] :837
JSCallback__FuncClosure* JSCallback__FuncClosure::New1(uType* __type, uDelegate* method)
{
    JSCallback__FuncClosure* obj1 = (JSCallback__FuncClosure*)uNew(__type);
    obj1->ctor_(method);
    return obj1;
}
// }

// C:\ProgramData\Uno\Packages\Fuse.Scripting\0.19.3\$.uno(848)
// ------------------------------------------------------------

// private sealed class JSCallback.FuncClosure<TArg, TResult> :848
// {
uType* JSCallback__FuncClosure1_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 1;
    options.GenericCount = 2;
    options.PrecalcCount = 2;
    options.ObjectSize = sizeof(JSCallback__FuncClosure1);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Fuse.Scripting.JSCallback.FuncClosure`2", options);
    ::STRINGS[0] = uString::Const("First argument should be of type ");
    ::TYPES[1] = ::g::Fuse::Scripting::JSCallback_typeof();
    ::TYPES[3] = uObject_typeof();
    ::TYPES[23] = ::g::Uno::Func1_typeof();
    type->SetPrecalc(
        ::TYPES[1/*Fuse.Scripting.JSCallback*/]->MakeMethod(1, type->T(0)),
        ::TYPES[23/*Uno.Func`2*/]->MakeType(type->T(0), type->T(1)));
    type->SetFields(0,
        ::g::Uno::Func1_typeof()->MakeType(type->T(0), type->T(1)), offsetof(::g::Fuse::Scripting::JSCallback__FuncClosure1, _method), 0);
    return type;
}

// public FuncClosure(Uno.Func<TArg, TResult> method) :852
void JSCallback__FuncClosure1__ctor__fn(JSCallback__FuncClosure1* __this, uDelegate* method)
{
    __this->ctor_(method);
}

// public FuncClosure New(Uno.Func<TArg, TResult> method) :852
void JSCallback__FuncClosure1__New1_fn(uType* __type, uDelegate* method, JSCallback__FuncClosure1** __retval)
{
    *__retval = JSCallback__FuncClosure1::New1(__type, method);
}

// public object Run(object[] args) :857
void JSCallback__FuncClosure1__Run_fn(JSCallback__FuncClosure1* __this, uArray* args, uObject** __retval)
{
    *__retval = __this->Run(args);
}

// public FuncClosure(Uno.Func<TArg, TResult> method) [instance] :852
void JSCallback__FuncClosure1::ctor_(uDelegate* method)
{
    _method = method;
}

// public object Run(object[] args) [instance] :857
uObject* JSCallback__FuncClosure1::Run(uArray* args)
{
    uType* __types[] = {
        __type->T(1),
        __type->T(0),
        __type->Precalced(0/*Fuse.Scripting.JSCallback.GetArg<TArg>*/),
        __type->Precalced(1/*Uno.Func<TArg, TResult>*/),
    };
    uT ret3(__types[0], U_ALLOCA(__types[0]->ValueSize));
    uT arg(__types[1], U_ALLOCA(__types[1]->ValueSize));
    bool ret2;
    ;
    arg = uT(__types[1], U_ALLOCA(__types[1]->ValueSize));

    if ((::g::Fuse::Scripting::JSCallback__GetArg_fn(__types[2], args, &arg, uCRef<int>(0), &ret2), ret2))
        return uBoxPtr(__types[0], (uPtr(_method)->Invoke(&ret3, 1, (void*)arg), ret3));

    U_THROW(::g::Uno::ArgumentException::New4(::g::Uno::String::op_Addition1(::STRINGS[0/*"First argum...*/], __types[1])));
}

// public FuncClosure New(Uno.Func<TArg, TResult> method) [static] :852
JSCallback__FuncClosure1* JSCallback__FuncClosure1::New1(uType* __type, uDelegate* method)
{
    JSCallback__FuncClosure1* obj1 = (JSCallback__FuncClosure1*)uNew(__type);
    obj1->ctor_(method);
    return obj1;
}
// }

// C:\ProgramData\Uno\Packages\Fuse.Scripting\0.19.3\$.uno(867)
// ------------------------------------------------------------

// private sealed class JSCallback.FuncClosure<TArg, TArg1, TResult> :867
// {
uType* JSCallback__FuncClosure2_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 1;
    options.GenericCount = 3;
    options.PrecalcCount = 3;
    options.ObjectSize = sizeof(JSCallback__FuncClosure2);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Fuse.Scripting.JSCallback.FuncClosure`3", options);
    ::STRINGS[0] = uString::Const("First argument should be of type ");
    ::TYPES[1] = ::g::Fuse::Scripting::JSCallback_typeof();
    ::TYPES[3] = uObject_typeof();
    ::TYPES[24] = ::g::Uno::Func2_typeof();
    type->SetPrecalc(
        ::TYPES[1/*Fuse.Scripting.JSCallback*/]->MakeMethod(1, type->T(0)),
        ::TYPES[1/*Fuse.Scripting.JSCallback*/]->MakeMethod(1, type->T(1)),
        ::TYPES[24/*Uno.Func`3*/]->MakeType(type->T(0), type->T(1), type->T(2)));
    type->SetFields(0,
        ::g::Uno::Func2_typeof()->MakeType(type->T(0), type->T(1), type->T(2)), offsetof(::g::Fuse::Scripting::JSCallback__FuncClosure2, _method), 0);
    return type;
}

// public FuncClosure(Uno.Func<TArg, TArg1, TResult> method) :871
void JSCallback__FuncClosure2__ctor__fn(JSCallback__FuncClosure2* __this, uDelegate* method)
{
    __this->ctor_(method);
}

// public FuncClosure New(Uno.Func<TArg, TArg1, TResult> method) :871
void JSCallback__FuncClosure2__New1_fn(uType* __type, uDelegate* method, JSCallback__FuncClosure2** __retval)
{
    *__retval = JSCallback__FuncClosure2::New1(__type, method);
}

// public object Run(object[] args) :876
void JSCallback__FuncClosure2__Run_fn(JSCallback__FuncClosure2* __this, uArray* args, uObject** __retval)
{
    *__retval = __this->Run(args);
}

// public FuncClosure(Uno.Func<TArg, TArg1, TResult> method) [instance] :871
void JSCallback__FuncClosure2::ctor_(uDelegate* method)
{
    _method = method;
}

// public object Run(object[] args) [instance] :876
uObject* JSCallback__FuncClosure2::Run(uArray* args)
{
    uType* __types[] = {
        __type->T(2),
        __type->T(0),
        __type->T(1),
        __type->Precalced(0/*Fuse.Scripting.JSCallback.GetArg<TArg>*/),
        __type->Precalced(1/*Fuse.Scripting.JSCallback.GetArg<TArg1>*/),
        __type->Precalced(2/*Uno.Func<TArg, TArg1, TResult>*/),
    };
    uT ret4(__types[0], U_ALLOCA(__types[0]->ValueSize));
    uT arg(__types[1], U_ALLOCA(__types[1]->ValueSize));
    uT arg1(__types[2], U_ALLOCA(__types[2]->ValueSize));
    bool ret2;
    bool ret3;
    ;
    arg = uT(__types[1], U_ALLOCA(__types[1]->ValueSize));
    arg1 = uT(__types[2], U_ALLOCA(__types[2]->ValueSize));

    if ((::g::Fuse::Scripting::JSCallback__GetArg_fn(__types[3], args, &arg, uCRef<int>(0), &ret2), ret2) && (::g::Fuse::Scripting::JSCallback__GetArg_fn(__types[4], args, &arg1, uCRef<int>(1), &ret3), ret3))
        return uBoxPtr(__types[0], (uPtr(_method)->Invoke(&ret4, 2, (void*)arg, (void*)arg1), ret4));

    U_THROW(::g::Uno::ArgumentException::New4(::g::Uno::String::op_Addition1(::STRINGS[0/*"First argum...*/], __types[1])));
}

// public FuncClosure New(Uno.Func<TArg, TArg1, TResult> method) [static] :871
JSCallback__FuncClosure2* JSCallback__FuncClosure2::New1(uType* __type, uDelegate* method)
{
    JSCallback__FuncClosure2* obj1 = (JSCallback__FuncClosure2*)uNew(__type);
    obj1->ctor_(method);
    return obj1;
}
// }

// C:\ProgramData\Uno\Packages\Fuse.Scripting\0.19.3\$.uno(711)
// ------------------------------------------------------------

// public abstract class Function :711
// {
Function_type* Function_typeof()
{
    static uSStrong<Function_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.ObjectSize = sizeof(Function);
    options.TypeSize = sizeof(Function_type);
    type = (Function_type*)uClassType::New("Fuse.Scripting.Function", options);
    type->fp_Equals = (void(*)(uObject*, uObject*, bool*))Function__Equals_fn;
    type->fp_GetHashCode = (void(*)(uObject*, int*))Function__GetHashCode_fn;
    type->Reflection.SetFunctions(3,
        new uFunction("Call", NULL, NULL, offsetof(Function_type, fp_Call), false, uObject_typeof(), 1, uObject_typeof()->Array()),
        new uFunction("Construct", NULL, NULL, offsetof(Function_type, fp_Construct), false, ::g::Fuse::Scripting::Object_typeof(), 1, uObject_typeof()->Array()),
        new uFunction("Equals", NULL, NULL, offsetof(Function_type, fp_Equals2), false, ::g::Uno::Bool_typeof(), 1, Function_typeof()));
    return type;
}

// protected generated Function() :711
void Function__ctor__fn(Function* __this)
{
    __this->ctor_();
}

// public override sealed bool Equals(object o) :717
void Function__Equals_fn(Function* __this, uObject* o, bool* __retval)
{
    Function* a = uAs<Function*>(o, Function_typeof());

    if (a == NULL)
        return *__retval = false, void();

    return *__retval = __this->Equals2(a), void();
}

// public override sealed int GetHashCode() :724
void Function__GetHashCode_fn(Function* __this, int* __retval)
{
    int ret1;
    return *__retval = (::g::Uno::Object__GetHashCode_fn(__this, &ret1), ret1), void();
}

// protected generated Function() [instance] :711
void Function::ctor_()
{
}
// }

// C:\ProgramData\Uno\Packages\Fuse.Scripting\0.19.3\$.uno(259)
// ------------------------------------------------------------

// public delegate Uno.Threading.Future<T> FutureFactory<T>(object[] args) :259
uDelegateType* FutureFactory_typeof()
{
    static uSStrong<uDelegateType*> type;
    if (type != NULL) return type;

    type = uDelegateType::New("Fuse.Scripting.FutureFactory`1", 1, 1);
    type->SetSignature(::g::Uno::Threading::Future1_typeof()->MakeType(type->T(0)),
        uObject_typeof()->Array());
    return type;
}

// C:\ProgramData\Uno\Packages\Fuse.Scripting\0.19.3\$.uno(15)
// -----------------------------------------------------------

// public abstract interface IDispatcher :15
// {
uInterfaceType* IDispatcher_typeof()
{
    static uSStrong<uInterfaceType*> type;
    if (type != NULL) return type;

    type = uInterfaceType::New("Fuse.Scripting.IDispatcher", 0, 0);
    type->Reflection.SetFunctions(1,
        new uFunction("Dispatch", NULL, NULL, offsetof(IDispatcher, fp_Dispatch), false, uVoid_typeof(), 2, ::g::Fuse::Scripting::TaskPriority_typeof(), ::g::Uno::Action_typeof()));
    return type;
}
// }

// C:\ProgramData\Uno\Packages\FuseCore\0.19.3\Scripting\$.uno(96)
// ---------------------------------------------------------------

// public abstract interface IEventSerializer :96
// {
uInterfaceType* IEventSerializer_typeof()
{
    static uSStrong<uInterfaceType*> type;
    if (type != NULL) return type;

    type = uInterfaceType::New("Fuse.Scripting.IEventSerializer", 0, 0);
    type->Reflection.SetFunctions(5,
        new uFunction("AddBool", NULL, NULL, offsetof(IEventSerializer, fp_AddBool), false, uVoid_typeof(), 2, ::g::Uno::String_typeof(), ::g::Uno::Bool_typeof()),
        new uFunction("AddDouble", NULL, NULL, offsetof(IEventSerializer, fp_AddDouble), false, uVoid_typeof(), 2, ::g::Uno::String_typeof(), ::g::Uno::Double_typeof()),
        new uFunction("AddInt", NULL, NULL, offsetof(IEventSerializer, fp_AddInt), false, uVoid_typeof(), 2, ::g::Uno::String_typeof(), ::g::Uno::Int_typeof()),
        new uFunction("AddObject", NULL, NULL, offsetof(IEventSerializer, fp_AddObject), false, uVoid_typeof(), 2, ::g::Uno::String_typeof(), uObject_typeof()),
        new uFunction("AddString", NULL, NULL, offsetof(IEventSerializer, fp_AddString), false, uVoid_typeof(), 2, ::g::Uno::String_typeof(), ::g::Uno::String_typeof()));
    return type;
}
// }

// C:\ProgramData\Uno\Packages\Fuse.Scripting\0.19.3\$.uno(130)
// ------------------------------------------------------------

// public abstract interface IModule :130
// {
uInterfaceType* IModule_typeof()
{
    static uSStrong<uInterfaceType*> type;
    if (type != NULL) return type;

    type = uInterfaceType::New("Fuse.Scripting.IModule", 0, 0);
    type->Reflection.SetFunctions(4,
        new uFunction("get_Code", NULL, NULL, offsetof(IModule, fp_get_Code), false, ::g::Uno::String_typeof(), 0),
        new uFunction("Evaluate", NULL, NULL, offsetof(IModule, fp_Evaluate), false, uObject_typeof(), 2, ::g::Uno::String_typeof(), ::g::Fuse::Scripting::Context_typeof()),
        new uFunction("get_FileName", NULL, NULL, offsetof(IModule, fp_get_FileName), false, ::g::Uno::String_typeof(), 0),
        new uFunction("get_LineNumberOffset", NULL, NULL, offsetof(IModule, fp_get_LineNumberOffset), false, ::g::Uno::Int_typeof(), 0));
    return type;
}
// }

// C:\ProgramData\Uno\Packages\FuseCore\0.19.3\Scripting\$.uno(13)
// ---------------------------------------------------------------

// public abstract interface INameListener :13
// {
uInterfaceType* INameListener_typeof()
{
    static uSStrong<uInterfaceType*> type;
    if (type != NULL) return type;

    type = uInterfaceType::New("Fuse.Scripting.INameListener", 0, 0);
    type->Reflection.SetFunctions(1,
        new uFunction("OnNameChanged", NULL, NULL, offsetof(INameListener, fp_OnNameChanged), false, uVoid_typeof(), 2, uObject_typeof(), ::g::Uno::String_typeof()));
    return type;
}
// }

// C:\ProgramData\Uno\Packages\FuseCore\0.19.3\Scripting\$.uno(8)
// --------------------------------------------------------------

// public abstract interface INameScope :8
// {
uInterfaceType* INameScope_typeof()
{
    static uSStrong<uInterfaceType*> type;
    if (type != NULL) return type;

    type = uInterfaceType::New("Fuse.Scripting.INameScope", 0, 0);
    type->Reflection.SetFunctions(1,
        new uFunction("FindObjectByName", NULL, NULL, offsetof(INameScope, fp_FindObjectByName), false, uObject_typeof(), 2, ::g::Uno::String_typeof(), ::g::Uno::Predicate_typeof()->MakeType(uObject_typeof())));
    return type;
}
// }

// C:\ProgramData\Uno\Packages\FuseCore\0.19.3\Scripting\$.uno(105)
// ----------------------------------------------------------------

// public abstract interface IScriptEvent :105
// {
uInterfaceType* IScriptEvent_typeof()
{
    static uSStrong<uInterfaceType*> type;
    if (type != NULL) return type;

    type = uInterfaceType::New("Fuse.Scripting.IScriptEvent", 0, 0);
    type->Reflection.SetFunctions(1,
        new uFunction("Serialize", NULL, NULL, offsetof(IScriptEvent, fp_Serialize), false, uVoid_typeof(), 1, ::g::Fuse::Scripting::IEventSerializer_typeof()));
    return type;
}
// }

// C:\ProgramData\Uno\Packages\Fuse.Scripting\0.19.3\$.uno(742)
// ------------------------------------------------------------

// public static class JSCallback :742
// {
uClassType* JSCallback_typeof()
{
    static uSStrong<uClassType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.MethodTypeCount = 3;
    options.TypeSize = sizeof(uClassType);
    type = uClassType::New("Fuse.Scripting.JSCallback", options);
    ::TYPES[11] = ::g::Fuse::Scripting::Callback_typeof();
    ::TYPES[25] = JSCallback__ActionClosure1_typeof();
    ::TYPES[26] = JSCallback__ActionClosure2_typeof();
    ::TYPES[27] = JSCallback__FuncClosure_typeof();
    ::TYPES[28] = JSCallback__FuncClosure1_typeof();
    ::TYPES[29] = JSCallback__FuncClosure2_typeof();
    ::TYPES[10] = uObject_typeof()->Array();
    ::TYPES[30] = JSCallback__NumberConverter_typeof();
    type->Reflection.SetFunctions(6,
        new uFunction("FromAction", NULL, (void*)JSCallback__FromAction_fn, 0, true, ::g::Fuse::Scripting::Callback_typeof(), 1, ::g::Uno::Action_typeof()),
        new uFunction("FromAction`1", type, (void*)JSCallback__FromAction1_fn, 0, true, ::g::Fuse::Scripting::Callback_typeof(), 1, ::g::Uno::Action1_typeof()->MakeType(type->U(0))),
        new uFunction("FromAction`2", type, (void*)JSCallback__FromAction2_fn, 0, true, ::g::Fuse::Scripting::Callback_typeof(), 1, ::g::Uno::Action2_typeof()->MakeType(type->U(0), type->U(1))),
        new uFunction("FromFunc`1", type, (void*)JSCallback__FromFunc_fn, 0, true, ::g::Fuse::Scripting::Callback_typeof(), 1, ::g::Uno::Func_typeof()->MakeType(type->U(0))),
        new uFunction("FromFunc`2", type, (void*)JSCallback__FromFunc1_fn, 0, true, ::g::Fuse::Scripting::Callback_typeof(), 1, ::g::Uno::Func1_typeof()->MakeType(type->U(0), type->U(1))),
        new uFunction("FromFunc`3", type, (void*)JSCallback__FromFunc2_fn, 0, true, ::g::Fuse::Scripting::Callback_typeof(), 1, ::g::Uno::Func2_typeof()->MakeType(type->U(0), type->U(1), type->U(2))));
    return type;
}

// public static Fuse.Scripting.Callback FromAction(Uno.Action action) :744
void JSCallback__FromAction_fn(uDelegate* action, uDelegate** __retval)
{
    *__retval = JSCallback::FromAction(action);
}

// public static Fuse.Scripting.Callback FromAction<T>(Uno.Action<T> action) :749
void JSCallback__FromAction1_fn(uType* __type, uDelegate* action, uDelegate** __retval)
{
    *__retval = JSCallback::FromAction1(__type, action);
}

// public static Fuse.Scripting.Callback FromAction<T1, T2>(Uno.Action<T1, T2> action) :754
void JSCallback__FromAction2_fn(uType* __type, uDelegate* action, uDelegate** __retval)
{
    *__retval = JSCallback::FromAction2(__type, action);
}

// public static Fuse.Scripting.Callback FromFunc<TResult>(Uno.Func<TResult> func) :759
void JSCallback__FromFunc_fn(uType* __type, uDelegate* func, uDelegate** __retval)
{
    *__retval = JSCallback::FromFunc(__type, func);
}

// public static Fuse.Scripting.Callback FromFunc<T, TResult>(Uno.Func<T, TResult> func) :764
void JSCallback__FromFunc1_fn(uType* __type, uDelegate* func, uDelegate** __retval)
{
    *__retval = JSCallback::FromFunc1(__type, func);
}

// public static Fuse.Scripting.Callback FromFunc<T1, T2, TResult>(Uno.Func<T1, T2, TResult> func) :769
void JSCallback__FromFunc2_fn(uType* __type, uDelegate* func, uDelegate** __retval)
{
    *__retval = JSCallback::FromFunc2(__type, func);
}

// private static bool GetArg<T>(object[] args, T& arg, int index) :887
void JSCallback__GetArg_fn(uType* __type, uArray* args, uTRef arg, int* index, bool* __retval)
{
    uType* __types[] = {
        __type->U(0),
        ::TYPES[30/*Fuse.Scripting.JSCallback.NumberConverter*/]->MakeMethod(1, __type->U(0)),
    };
    int index_ = *index;
    bool ret1;
    arg.Default(__types[0]);

    if (uPtr(args)->Length() > index_)
    {
        if ((JSCallback__NumberConverter__TryConvert_fn(__types[1], uPtr(args)->Strong<uObject*>(index_), arg, &ret1), ret1))
            return *__retval = true, void();
    }

    return *__retval = false, void();
}

// public static Fuse.Scripting.Callback FromAction(Uno.Action action) [static] :744
uDelegate* JSCallback::FromAction(uDelegate* action)
{
    return uDelegate::New(::TYPES[11/*Fuse.Scripting.Callback*/], (void*)JSCallback__ActionClosure__Run_fn, JSCallback__ActionClosure::New1(action));
}

// public static Fuse.Scripting.Callback FromAction<T>(Uno.Action<T> action) [static] :749
uDelegate* JSCallback::FromAction1(uType* __type, uDelegate* action)
{
    uType* __types[] = {
        ::TYPES[25/*Fuse.Scripting.JSCallback.ActionClosure`1*/]->MakeType(__type->U(0)),
        __type->U(0),
    };
    return uDelegate::New(::TYPES[11/*Fuse.Scripting.Callback*/], (void*)JSCallback__ActionClosure1__Run_fn, (JSCallback__ActionClosure1*)JSCallback__ActionClosure1::New1(__types[0], action));
}

// public static Fuse.Scripting.Callback FromAction<T1, T2>(Uno.Action<T1, T2> action) [static] :754
uDelegate* JSCallback::FromAction2(uType* __type, uDelegate* action)
{
    uType* __types[] = {
        ::TYPES[26/*Fuse.Scripting.JSCallback.ActionClosure`2*/]->MakeType(__type->U(0), __type->U(1)),
        __type->U(0),
        __type->U(1),
    };
    return uDelegate::New(::TYPES[11/*Fuse.Scripting.Callback*/], (void*)JSCallback__ActionClosure2__Run_fn, (JSCallback__ActionClosure2*)JSCallback__ActionClosure2::New1(__types[0], action));
}

// public static Fuse.Scripting.Callback FromFunc<TResult>(Uno.Func<TResult> func) [static] :759
uDelegate* JSCallback::FromFunc(uType* __type, uDelegate* func)
{
    uType* __types[] = {
        ::TYPES[27/*Fuse.Scripting.JSCallback.FuncClosure`1*/]->MakeType(__type->U(0)),
        __type->U(0),
    };
    return uDelegate::New(::TYPES[11/*Fuse.Scripting.Callback*/], (void*)JSCallback__FuncClosure__Run_fn, (JSCallback__FuncClosure*)JSCallback__FuncClosure::New1(__types[0], func));
}

// public static Fuse.Scripting.Callback FromFunc<T, TResult>(Uno.Func<T, TResult> func) [static] :764
uDelegate* JSCallback::FromFunc1(uType* __type, uDelegate* func)
{
    uType* __types[] = {
        ::TYPES[28/*Fuse.Scripting.JSCallback.FuncClosure`2*/]->MakeType(__type->U(0), __type->U(1)),
        __type->U(0),
        __type->U(1),
    };
    return uDelegate::New(::TYPES[11/*Fuse.Scripting.Callback*/], (void*)JSCallback__FuncClosure1__Run_fn, (JSCallback__FuncClosure1*)JSCallback__FuncClosure1::New1(__types[0], func));
}

// public static Fuse.Scripting.Callback FromFunc<T1, T2, TResult>(Uno.Func<T1, T2, TResult> func) [static] :769
uDelegate* JSCallback::FromFunc2(uType* __type, uDelegate* func)
{
    uType* __types[] = {
        ::TYPES[29/*Fuse.Scripting.JSCallback.FuncClosure`3*/]->MakeType(__type->U(0), __type->U(1), __type->U(2)),
        __type->U(0),
        __type->U(1),
        __type->U(2),
    };
    return uDelegate::New(::TYPES[11/*Fuse.Scripting.Callback*/], (void*)JSCallback__FuncClosure2__Run_fn, (JSCallback__FuncClosure2*)JSCallback__FuncClosure2::New1(__types[0], func));
}
// }

// C:\ProgramData\Uno\Packages\FuseCore\0.19.3\Scripting\$.uno(18)
// ---------------------------------------------------------------

// public static class NameRegistry :18
// {
// static NameRegistry() :18
static void NameRegistry__cctor__fn(uType* __type)
{
    NameRegistry::_names_ = ((::g::Uno::Collections::Dictionary*)::g::Uno::Collections::Dictionary::New1(::TYPES[31/*Uno.Collections.Dictionary<object, string>*/]));
    NameRegistry::_listeners_ = ((::g::Uno::Collections::Dictionary*)::g::Uno::Collections::Dictionary::New1(::TYPES[32/*Uno.Collections.Dictionary<string, Uno.Collections.List<Fuse.Scripting.INameListener>>*/]));
}

uClassType* NameRegistry_typeof()
{
    static uSStrong<uClassType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 2;
    options.TypeSize = sizeof(uClassType);
    type = uClassType::New("Fuse.Scripting.NameRegistry", options);
    type->fp_cctor_ = NameRegistry__cctor__fn;
    ::TYPES[31] = ::g::Uno::Collections::Dictionary_typeof()->MakeType(uObject_typeof(), ::g::Uno::String_typeof());
    ::TYPES[32] = ::g::Uno::Collections::Dictionary_typeof()->MakeType(::g::Uno::String_typeof(), ::g::Uno::Collections::List_typeof()->MakeType(::g::Fuse::Scripting::INameListener_typeof()));
    ::TYPES[14] = ::g::Uno::Bool_typeof();
    ::TYPES[33] = ::g::Uno::Collections::List_typeof()->MakeType(::g::Fuse::Scripting::INameListener_typeof());
    ::TYPES[34] = ::g::Fuse::Scripting::INameListener_typeof()->Array();
    ::TYPES[35] = ::g::Uno::Collections::Dictionary__ValueCollection__Enumerator_typeof()->MakeType(::g::Uno::String_typeof(), ::g::Uno::Collections::List_typeof()->MakeType(::g::Fuse::Scripting::INameListener_typeof()));
    type->SetFields(0,
        ::g::Uno::Collections::Dictionary_typeof()->MakeType(::g::Uno::String_typeof(), ::g::Uno::Collections::List_typeof()->MakeType(::g::Fuse::Scripting::INameListener_typeof())), (uintptr_t)&::g::Fuse::Scripting::NameRegistry::_listeners_, uFieldFlagsStatic,
        ::g::Uno::Collections::Dictionary_typeof()->MakeType(uObject_typeof(), ::g::Uno::String_typeof()), (uintptr_t)&::g::Fuse::Scripting::NameRegistry::_names_, uFieldFlagsStatic);
    type->Reflection.SetFunctions(5,
        new uFunction("AddListener", NULL, (void*)NameRegistry__AddListener_fn, 0, true, uVoid_typeof(), 2, ::g::Uno::String_typeof(), ::g::Fuse::Scripting::INameListener_typeof()),
        new uFunction("ClearName", NULL, (void*)NameRegistry__ClearName_fn, 0, true, uVoid_typeof(), 1, uObject_typeof()),
        new uFunction("GetName", NULL, (void*)NameRegistry__GetName_fn, 0, true, ::g::Uno::String_typeof(), 1, uObject_typeof()),
        new uFunction("RemoveListener", NULL, (void*)NameRegistry__RemoveListener_fn, 0, true, uVoid_typeof(), 1, ::g::Fuse::Scripting::INameListener_typeof()),
        new uFunction("SetName", NULL, (void*)NameRegistry__SetName_fn, 0, true, uVoid_typeof(), 2, uObject_typeof(), ::g::Uno::String_typeof()));
    return type;
}

// public static void AddListener(string name, Fuse.Scripting.INameListener listener) :57
void NameRegistry__AddListener_fn(uString* name, uObject* listener)
{
    NameRegistry::AddListener(name, listener);
}

// public static void ClearName(object obj) :45
void NameRegistry__ClearName_fn(uObject* obj)
{
    NameRegistry::ClearName(obj);
}

// public static string GetName(object obj) :39
void NameRegistry__GetName_fn(uObject* obj, uString** __retval)
{
    *__retval = NameRegistry::GetName(obj);
}

// private static void NotifyNameChanged(object obj, string name) :79
void NameRegistry__NotifyNameChanged_fn(uObject* obj, uString* name)
{
    NameRegistry::NotifyNameChanged(obj, name);
}

// public static void RemoveListener(Fuse.Scripting.INameListener listener) :67
void NameRegistry__RemoveListener_fn(uObject* listener)
{
    NameRegistry::RemoveListener(listener);
}

// public static void SetName(object obj, string name) :22
void NameRegistry__SetName_fn(uObject* obj, uString* name)
{
    NameRegistry::SetName(obj, name);
}

uSStrong< ::g::Uno::Collections::Dictionary*> NameRegistry::_listeners_;
uSStrong< ::g::Uno::Collections::Dictionary*> NameRegistry::_names_;

// public static void AddListener(string name, Fuse.Scripting.INameListener listener) [static] :57
void NameRegistry::AddListener(uString* name, uObject* listener)
{
    NameRegistry_typeof()->Init();
    bool ret5;
    bool ret6;
    ::g::Uno::Collections::List* ret7;
    ::g::Uno::Collections::List* ret8;

    if (!(::g::Uno::Collections::Dictionary__ContainsKey_fn(uPtr(NameRegistry::_listeners()), name, &ret5), ret5))
        ::g::Uno::Collections::Dictionary__Add_fn(uPtr(NameRegistry::_listeners()), name, (::g::Uno::Collections::List*)::g::Uno::Collections::List::New1(::TYPES[33/*Uno.Collections.List<Fuse.Scripting.INameListener>*/]));

    if (!(::g::Uno::Collections::List__Contains_fn(uPtr((::g::Uno::Collections::Dictionary__get_Item_fn(uPtr(NameRegistry::_listeners()), name, &ret7), ret7)), listener, &ret6), ret6))
        ::g::Uno::Collections::List__Add_fn(uPtr((::g::Uno::Collections::Dictionary__get_Item_fn(uPtr(NameRegistry::_listeners()), name, &ret8), ret8)), listener);
}

// public static void ClearName(object obj) [static] :45
void NameRegistry::ClearName(uObject* obj)
{
    NameRegistry_typeof()->Init();
    bool ret9;
    uString* ret10;
    bool ret11;

    if ((::g::Uno::Collections::Dictionary__ContainsKey_fn(uPtr(NameRegistry::_names()), obj, &ret9), ret9))
    {
        uString* name = (::g::Uno::Collections::Dictionary__get_Item_fn(uPtr(NameRegistry::_names()), obj, &ret10), ret10);
        ::g::Uno::Collections::Dictionary__Remove_fn(uPtr(NameRegistry::_names()), obj, &ret11);
        NameRegistry::NotifyNameChanged(obj, name);
    }
}

// public static string GetName(object obj) [static] :39
uString* NameRegistry::GetName(uObject* obj)
{
    NameRegistry_typeof()->Init();
    bool ret12;
    uString* ret13;

    if (!(::g::Uno::Collections::Dictionary__ContainsKey_fn(uPtr(NameRegistry::_names()), obj, &ret12), ret12))
        return NULL;

    return (::g::Uno::Collections::Dictionary__get_Item_fn(uPtr(NameRegistry::_names()), obj, &ret13), ret13);
}

// private static void NotifyNameChanged(object obj, string name) [static] :79
void NameRegistry::NotifyNameChanged(uObject* obj, uString* name)
{
    NameRegistry_typeof()->Init();
    uArray* array2;
    int index3;
    int length4;
    bool ret14;
    ::g::Uno::Collections::List* ret15;

    if ((::g::Uno::Collections::Dictionary__ContainsKey_fn(uPtr(NameRegistry::_listeners()), name, &ret14), ret14))

        for (array2 = (uArray*)uPtr((::g::Uno::Collections::Dictionary__get_Item_fn(uPtr(NameRegistry::_listeners()), name, &ret15), ret15))->ToArray(), index3 = 0, length4 = uPtr(array2)->Length(); index3 < length4; ++index3)
        {
            uObject* listener = uPtr(array2)->Strong<uObject*>(index3);
            ::g::Fuse::Scripting::INameListener::OnNameChanged(uInterface(uPtr(listener), ::g::Fuse::Scripting::INameListener_typeof()), obj, name);
        }
}

// public static void RemoveListener(Fuse.Scripting.INameListener listener) [static] :67
void NameRegistry::RemoveListener(uObject* listener)
{
    NameRegistry_typeof()->Init();
    ::g::Uno::Collections::Dictionary__ValueCollection__Enumerator<uStrong< ::g::Uno::Collections::List*> > ret16;
    bool ret17;
    bool ret18;

    for (::g::Uno::Collections::Dictionary__ValueCollection__Enumerator<uStrong< ::g::Uno::Collections::List*> > enum1 = (::g::Uno::Collections::Dictionary__ValueCollection__GetEnumerator_fn(uPtr((::g::Uno::Collections::Dictionary__ValueCollection*)uPtr(NameRegistry::_listeners())->Values()), &ret16), ret16); enum1.MoveNext(::TYPES[35/*Uno.Collections.Dictionary<string, Uno.Collections.List<Fuse.Scripting.INameListener>>.ValueCollection.Enumerator*/]); )
    {
        ::g::Uno::Collections::List* list = enum1.Current(::TYPES[35/*Uno.Collections.Dictionary<string, Uno.Collections.List<Fuse.Scripting.INameListener>>.ValueCollection.Enumerator*/]);

        if ((::g::Uno::Collections::List__Contains_fn(uPtr(list), listener, &ret17), ret17))
        {
            ::g::Uno::Collections::List__Remove_fn(uPtr(list), listener, &ret18);
            break;
        }
    }
}

// public static void SetName(object obj, string name) [static] :22
void NameRegistry::SetName(uObject* obj, uString* name)
{
    NameRegistry_typeof()->Init();
    bool ret19;
    uString* ret20;
    uString* oldName = NULL;

    if ((::g::Uno::Collections::Dictionary__ContainsKey_fn(uPtr(NameRegistry::_names()), obj, &ret19), ret19))
        oldName = (::g::Uno::Collections::Dictionary__get_Item_fn(uPtr(NameRegistry::_names()), obj, &ret20), ret20);

    if (::g::Uno::String::op_Inequality(name, oldName))
    {
        if (::g::Uno::String::op_Equality(name, NULL))
            NameRegistry::ClearName(obj);
        else
        {
            ::g::Uno::Collections::Dictionary__set_Item_fn(uPtr(NameRegistry::_names()), obj, name);
            NameRegistry::NotifyNameChanged(obj, name);

            if (::g::Uno::String::op_Inequality(oldName, NULL))
                NameRegistry::NotifyNameChanged(obj, oldName);
        }
    }
}
// }

// C:\ProgramData\Uno\Packages\Fuse.Scripting\0.19.3\$.uno(433)
// ------------------------------------------------------------

// public delegate object NativeCallback(Fuse.Scripting.Context c, object[] args) :433
uDelegateType* NativeCallback_typeof()
{
    static uSStrong<uDelegateType*> type;
    if (type != NULL) return type;

    type = uDelegateType::New("Fuse.Scripting.NativeCallback", 2, 0);
    type->SetSignature(uObject_typeof(),
        ::g::Fuse::Scripting::Context_typeof(),
        uObject_typeof()->Array());
    return type;
}

// C:\ProgramData\Uno\Packages\Fuse.Scripting\0.19.3\$.uno(475)
// ------------------------------------------------------------

// public sealed class NativeEvent :475
// {
::g::Fuse::Scripting::NativeProperty_type* NativeEvent_typeof()
{
    static uSStrong< ::g::Fuse::Scripting::NativeProperty_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 11;
    options.ObjectSize = sizeof(NativeEvent);
    options.TypeSize = sizeof(::g::Fuse::Scripting::NativeProperty_type);
    type = (::g::Fuse::Scripting::NativeProperty_type*)uClassType::New("Fuse.Scripting.NativeEvent", options);
    type->SetBase(::g::Fuse::Scripting::NativeProperty_typeof()->MakeType(::g::Fuse::Scripting::Function_typeof(), ::g::Fuse::Scripting::Function_typeof()));
    type->fp_GetProperty = (void(*)(::g::Fuse::Scripting::NativeProperty*, uTRef))NativeEvent__GetProperty_fn;
    type->fp_SetProperty1 = (void(*)(::g::Fuse::Scripting::NativeProperty*, void*))NativeEvent__SetProperty1_fn;
    ::TYPES[36] = ::g::Uno::Collections::Queue_typeof()->MakeType(uObject_typeof()->Array());
    ::TYPES[16] = ::g::Fuse::Scripting::Context_typeof();
    ::TYPES[37] = ::g::Fuse::Scripting::NativeMember_typeof();
    ::TYPES[0] = ::g::Uno::Action_typeof();
    type->SetFields(8,
        ::g::Uno::Collections::Queue_typeof()->MakeType(uObject_typeof()->Array()), offsetof(::g::Fuse::Scripting::NativeEvent, _eventArgsQueue), 0,
        ::g::Fuse::Scripting::Function_typeof(), offsetof(::g::Fuse::Scripting::NativeEvent, _jsFunction), 0,
        ::g::Uno::Bool_typeof(), offsetof(::g::Fuse::Scripting::NativeEvent, _queueEventsBeforeEvaluation), 0);
    type->Reflection.SetFunctions(2,
        new uFunction(".ctor", NULL, (void*)NativeEvent__New4_fn, 0, true, NativeEvent_typeof(), 2, ::g::Uno::String_typeof(), ::g::Uno::Bool_typeof()),
        new uFunction("RaiseAsync", NULL, (void*)NativeEvent__RaiseAsync_fn, 0, false, uVoid_typeof(), 1, uObject_typeof()->Array()));
    return type;
}

// public NativeEvent(string name, [bool queueEventsBeforeHandlerIsSet]) :481
void NativeEvent__ctor_4_fn(NativeEvent* __this, uString* name, bool* queueEventsBeforeHandlerIsSet)
{
    __this->ctor_4(name, *queueEventsBeforeHandlerIsSet);
}

// private void DispatchQueue() :498
void NativeEvent__DispatchQueue_fn(NativeEvent* __this)
{
    __this->DispatchQueue();
}

// protected override sealed Fuse.Scripting.Function GetProperty() :493
void NativeEvent__GetProperty_fn(NativeEvent* __this, ::g::Fuse::Scripting::Function** __retval)
{
    return *__retval = __this->_jsFunction, void();
}

// public NativeEvent New(string name, [bool queueEventsBeforeHandlerIsSet]) :481
void NativeEvent__New4_fn(uString* name, bool* queueEventsBeforeHandlerIsSet, NativeEvent** __retval)
{
    *__retval = NativeEvent::New4(name, *queueEventsBeforeHandlerIsSet);
}

// public void RaiseAsync(object[] args) :504
void NativeEvent__RaiseAsync_fn(NativeEvent* __this, uArray* args)
{
    __this->RaiseAsync(args);
}

// protected override sealed void SetProperty(Fuse.Scripting.Function function) :487
void NativeEvent__SetProperty1_fn(NativeEvent* __this, ::g::Fuse::Scripting::Function* function)
{
    __this->_jsFunction = function;
    __this->DispatchQueue();
}

// public NativeEvent(string name, [bool queueEventsBeforeHandlerIsSet]) [instance] :481
void NativeEvent::ctor_4(uString* name, bool queueEventsBeforeHandlerIsSet)
{
    ctor_1(name);
    _eventArgsQueue = ((::g::Uno::Collections::Queue*)::g::Uno::Collections::Queue::New1(::TYPES[36/*Uno.Collections.Queue<object[]>*/]));
    _queueEventsBeforeEvaluation = queueEventsBeforeHandlerIsSet;
}

// private void DispatchQueue() [instance] :498
void NativeEvent::DispatchQueue()
{
    uArray* ret2;

    while ((uPtr(_eventArgsQueue)->Count() > 0) && (_jsFunction != NULL))
        ::g::Fuse::Scripting::IDispatcher::Dispatch(uInterface(uPtr(uPtr(Context())->Dispatcher()), ::g::Fuse::Scripting::IDispatcher_typeof()), 0, uDelegate::New(::TYPES[0/*Uno.Action*/], (void*)NativeEvent__EventClosure__Call_fn, NativeEvent__EventClosure::New1(_jsFunction, (::g::Uno::Collections::Queue__Dequeue_fn(uPtr(_eventArgsQueue), &ret2), ret2))));
}

// public void RaiseAsync(object[] args) [instance] :504
void NativeEvent::RaiseAsync(uArray* args)
{
    if ((Context() != NULL) || _queueEventsBeforeEvaluation)
        ::g::Uno::Collections::Queue__Enqueue_fn(uPtr(_eventArgsQueue), args);

    DispatchQueue();
}

// public NativeEvent New(string name, [bool queueEventsBeforeHandlerIsSet]) [static] :481
NativeEvent* NativeEvent::New4(uString* name, bool queueEventsBeforeHandlerIsSet)
{
    NativeEvent* obj1 = (NativeEvent*)uNew(NativeEvent_typeof());
    obj1->ctor_4(name, queueEventsBeforeHandlerIsSet);
    return obj1;
}
// }

// C:\ProgramData\Uno\Packages\Fuse.Scripting\0.19.3\$.uno(435)
// ------------------------------------------------------------

// public sealed class NativeFunction :435
// {
::g::Fuse::Scripting::NativeMember_type* NativeFunction_typeof()
{
    static uSStrong< ::g::Fuse::Scripting::NativeMember_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 4;
    options.ObjectSize = sizeof(NativeFunction);
    options.TypeSize = sizeof(::g::Fuse::Scripting::NativeMember_type);
    type = (::g::Fuse::Scripting::NativeMember_type*)uClassType::New("Fuse.Scripting.NativeFunction", options);
    type->SetBase(::g::Fuse::Scripting::NativeMember_typeof());
    type->fp_CreateObject = (void(*)(::g::Fuse::Scripting::NativeMember*, uObject**))NativeFunction__CreateObject_fn;
    ::TYPES[3] = uObject_typeof();
    ::TYPES[11] = ::g::Fuse::Scripting::Callback_typeof();
    ::TYPES[37] = ::g::Fuse::Scripting::NativeMember_typeof();
    type->SetFields(3,
        ::g::Fuse::Scripting::NativeCallback_typeof(), offsetof(::g::Fuse::Scripting::NativeFunction, _nativeCallback), 0);
    type->Reflection.SetFunctions(1,
        new uFunction(".ctor", NULL, (void*)NativeFunction__New1_fn, 0, true, NativeFunction_typeof(), 2, ::g::Uno::String_typeof(), ::g::Fuse::Scripting::NativeCallback_typeof()));
    return type;
}

// public NativeFunction(string name, Fuse.Scripting.NativeCallback callback) :444
void NativeFunction__ctor_1_fn(NativeFunction* __this, uString* name, uDelegate* callback)
{
    __this->ctor_1(name, callback);
}

// protected override sealed object CreateObject() :439
void NativeFunction__CreateObject_fn(NativeFunction* __this, uObject** __retval)
{
    return *__retval = uDelegate::New(::TYPES[11/*Fuse.Scripting.Callback*/], (void*)NativeFunction__NativeFunctionClosure__Callback_fn, NativeFunction__NativeFunctionClosure::New1(__this->_nativeCallback, __this->Context())), void();
}

// public NativeFunction New(string name, Fuse.Scripting.NativeCallback callback) :444
void NativeFunction__New1_fn(uString* name, uDelegate* callback, NativeFunction** __retval)
{
    *__retval = NativeFunction::New1(name, callback);
}

// public NativeFunction(string name, Fuse.Scripting.NativeCallback callback) [instance] :444
void NativeFunction::ctor_1(uString* name, uDelegate* callback)
{
    ctor_(name);
    _nativeCallback = callback;
}

// public NativeFunction New(string name, Fuse.Scripting.NativeCallback callback) [static] :444
NativeFunction* NativeFunction::New1(uString* name, uDelegate* callback)
{
    NativeFunction* obj1 = (NativeFunction*)uNew(NativeFunction_typeof());
    obj1->ctor_1(name, callback);
    return obj1;
}
// }

// C:\ProgramData\Uno\Packages\Fuse.Scripting\0.19.3\$.uno(449)
// ------------------------------------------------------------

// private sealed class NativeFunction.NativeFunctionClosure :449
// {
uType* NativeFunction__NativeFunctionClosure_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 2;
    options.ObjectSize = sizeof(NativeFunction__NativeFunctionClosure);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Fuse.Scripting.NativeFunction.NativeFunctionClosure", options);
    ::TYPES[38] = ::g::Fuse::Scripting::NativeCallback_typeof();
    type->SetFields(0,
        ::g::Fuse::Scripting::NativeCallback_typeof(), offsetof(::g::Fuse::Scripting::NativeFunction__NativeFunctionClosure, _callback), 0,
        ::g::Fuse::Scripting::Context_typeof(), offsetof(::g::Fuse::Scripting::NativeFunction__NativeFunctionClosure, _context), 0);
    return type;
}

// public NativeFunctionClosure(Fuse.Scripting.NativeCallback callback, Fuse.Scripting.Context context) :454
void NativeFunction__NativeFunctionClosure__ctor__fn(NativeFunction__NativeFunctionClosure* __this, uDelegate* callback, ::g::Fuse::Scripting::Context* context)
{
    __this->ctor_(callback, context);
}

// public object Callback(object[] args) :460
void NativeFunction__NativeFunctionClosure__Callback_fn(NativeFunction__NativeFunctionClosure* __this, uArray* args, uObject** __retval)
{
    *__retval = __this->Callback(args);
}

// public NativeFunctionClosure New(Fuse.Scripting.NativeCallback callback, Fuse.Scripting.Context context) :454
void NativeFunction__NativeFunctionClosure__New1_fn(uDelegate* callback, ::g::Fuse::Scripting::Context* context, NativeFunction__NativeFunctionClosure** __retval)
{
    *__retval = NativeFunction__NativeFunctionClosure::New1(callback, context);
}

// public NativeFunctionClosure(Fuse.Scripting.NativeCallback callback, Fuse.Scripting.Context context) [instance] :454
void NativeFunction__NativeFunctionClosure::ctor_(uDelegate* callback, ::g::Fuse::Scripting::Context* context)
{
    _context = context;
    _callback = callback;
}

// public object Callback(object[] args) [instance] :460
uObject* NativeFunction__NativeFunctionClosure::Callback(uArray* args)
{
    return uPtr(_callback)->Invoke(2, (::g::Fuse::Scripting::Context*)_context, args);
}

// public NativeFunctionClosure New(Fuse.Scripting.NativeCallback callback, Fuse.Scripting.Context context) [static] :454
NativeFunction__NativeFunctionClosure* NativeFunction__NativeFunctionClosure::New1(uDelegate* callback, ::g::Fuse::Scripting::Context* context)
{
    NativeFunction__NativeFunctionClosure* obj1 = (NativeFunction__NativeFunctionClosure*)uNew(NativeFunction__NativeFunctionClosure_typeof());
    obj1->ctor_(callback, context);
    return obj1;
}
// }

// C:\ProgramData\Uno\Packages\Fuse.Scripting\0.19.3\$.uno(406)
// ------------------------------------------------------------

// public abstract class NativeMember :406
// {
NativeMember_type* NativeMember_typeof()
{
    static uSStrong<NativeMember_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 3;
    options.ObjectSize = sizeof(NativeMember);
    options.TypeSize = sizeof(NativeMember_type);
    type = (NativeMember_type*)uClassType::New("Fuse.Scripting.NativeMember", options);
    ::TYPES[12] = ::g::Fuse::Scripting::Object_typeof();
    type->SetFields(0,
        ::g::Fuse::Scripting::Context_typeof(), offsetof(::g::Fuse::Scripting::NativeMember, _Context), 0,
        ::g::Fuse::Scripting::Object_typeof(), offsetof(::g::Fuse::Scripting::NativeMember, _ModuleObject), 0,
        ::g::Uno::String_typeof(), offsetof(::g::Fuse::Scripting::NativeMember, _Name), 0);
    type->Reflection.SetFunctions(1,
        new uFunction("get_Context", NULL, (void*)NativeMember__get_Context_fn, 0, false, ::g::Fuse::Scripting::Context_typeof(), 0));
    return type;
}

// protected internal NativeMember(string name) :411
void NativeMember__ctor__fn(NativeMember* __this, uString* name)
{
    __this->ctor_(name);
}

// public generated Fuse.Scripting.Context get_Context() :409
void NativeMember__get_Context_fn(NativeMember* __this, ::g::Fuse::Scripting::Context** __retval)
{
    *__retval = __this->Context();
}

// private generated void set_Context(Fuse.Scripting.Context value) :409
void NativeMember__set_Context_fn(NativeMember* __this, ::g::Fuse::Scripting::Context* value)
{
    __this->Context(value);
}

// internal void Create(Fuse.Scripting.Object obj, Fuse.Scripting.Context context) :413
void NativeMember__Create_fn(NativeMember* __this, ::g::Fuse::Scripting::Object* obj, ::g::Fuse::Scripting::Context* context)
{
    __this->Create(obj, context);
}

// protected generated Fuse.Scripting.Object get_ModuleObject() :410
void NativeMember__get_ModuleObject_fn(NativeMember* __this, ::g::Fuse::Scripting::Object** __retval)
{
    *__retval = __this->ModuleObject();
}

// private generated void set_ModuleObject(Fuse.Scripting.Object value) :410
void NativeMember__set_ModuleObject_fn(NativeMember* __this, ::g::Fuse::Scripting::Object* value)
{
    __this->ModuleObject(value);
}

// protected generated string get_Name() :408
void NativeMember__get_Name_fn(NativeMember* __this, uString** __retval)
{
    *__retval = __this->Name();
}

// private generated void set_Name(string value) :408
void NativeMember__set_Name_fn(NativeMember* __this, uString* value)
{
    __this->Name(value);
}

// protected internal NativeMember(string name) [instance] :411
void NativeMember::ctor_(uString* name)
{
    Name(name);
}

// public generated Fuse.Scripting.Context get_Context() [instance] :409
::g::Fuse::Scripting::Context* NativeMember::Context()
{
    return _Context;
}

// private generated void set_Context(Fuse.Scripting.Context value) [instance] :409
void NativeMember::Context(::g::Fuse::Scripting::Context* value)
{
    _Context = value;
}

// internal void Create(Fuse.Scripting.Object obj, Fuse.Scripting.Context context) [instance] :413
void NativeMember::Create(::g::Fuse::Scripting::Object* obj, ::g::Fuse::Scripting::Context* context)
{
    ModuleObject(obj);
    Context(context);
    uObject* member = CreateObject();

    if (member != NULL)
        uPtr(ModuleObject())->Item(Name(), member);
}

// protected generated Fuse.Scripting.Object get_ModuleObject() [instance] :410
::g::Fuse::Scripting::Object* NativeMember::ModuleObject()
{
    return _ModuleObject;
}

// private generated void set_ModuleObject(Fuse.Scripting.Object value) [instance] :410
void NativeMember::ModuleObject(::g::Fuse::Scripting::Object* value)
{
    _ModuleObject = value;
}

// protected generated string get_Name() [instance] :408
uString* NativeMember::Name()
{
    return _Name;
}

// private generated void set_Name(string value) [instance] :408
void NativeMember::Name(uString* value)
{
    _Name = value;
}
// }

// C:\ProgramData\Uno\Packages\Fuse.Scripting\0.19.3\$.uno(183)
// ------------------------------------------------------------

// public class NativeModule :183
// {
NativeModule_type* NativeModule_typeof()
{
    static uSStrong<NativeModule_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 3;
    options.InterfaceCount = 1;
    options.ObjectSize = sizeof(NativeModule);
    options.TypeSize = sizeof(NativeModule_type);
    type = (NativeModule_type*)uClassType::New("Fuse.Scripting.NativeModule", options);
    type->interface0.fp_get_Code = (void(*)(uObject*, uString**))NativeModule__Fuse_Scripting_IModule_get_Code_fn;
    type->interface0.fp_get_FileName = (void(*)(uObject*, uString**))NativeModule__Fuse_Scripting_IModule_get_FileName_fn;
    type->interface0.fp_get_LineNumberOffset = (void(*)(uObject*, int*))NativeModule__Fuse_Scripting_IModule_get_LineNumberOffset_fn;
    type->interface0.fp_Evaluate = (void(*)(uObject*, uString*, ::g::Fuse::Scripting::Context*, uObject**))NativeModule__Evaluate_fn;
    ::STRINGS[19] = uString::Const("NativeModule(): Cannot add more members after first use");
    ::STRINGS[9] = uString::Const("new Object()");
    ::STRINGS[20] = uString::Const("Cannot get Code from NativeModule");
    ::STRINGS[21] = uString::Const("Cannot get FileName from NativeModule");
    ::TYPES[39] = ::g::Uno::Collections::List_typeof()->MakeType(::g::Fuse::Scripting::NativeMember_typeof());
    ::TYPES[40] = ::g::Fuse::Scripting::NativeMember_typeof()->Array();
    ::TYPES[12] = ::g::Fuse::Scripting::Object_typeof();
    ::TYPES[41] = ::g::Uno::Collections::List__Enumerator_typeof()->MakeType(::g::Fuse::Scripting::NativeMember_typeof());
    ::TYPES[42] = ::g::Uno::Delegate_typeof();
    ::TYPES[43] = ::g::Uno::EventHandler_typeof();
    ::TYPES[44] = ::g::Uno::EventArgs_typeof();
    ::TYPES[3] = uObject_typeof();
    type->SetInterfaces(
        ::g::Fuse::Scripting::IModule_typeof(), offsetof(NativeModule_type, interface0));
    type->SetFields(0,
        ::g::Uno::EventHandler_typeof(), offsetof(::g::Fuse::Scripting::NativeModule, _evaluated), 0,
        ::g::Uno::Bool_typeof(), offsetof(::g::Fuse::Scripting::NativeModule, _isEvaluated), 0,
        ::g::Uno::Collections::List_typeof()->MakeType(::g::Fuse::Scripting::NativeMember_typeof()), offsetof(::g::Fuse::Scripting::NativeModule, _members), 0);
    type->Reflection.SetFunctions(4,
        new uFunction("Evaluate", NULL, (void*)NativeModule__Evaluate_fn, 0, false, uObject_typeof(), 2, ::g::Uno::String_typeof(), ::g::Fuse::Scripting::Context_typeof()),
        new uFunction("add_Evaluated", NULL, (void*)NativeModule__add_Evaluated_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::EventHandler_typeof()),
        new uFunction("remove_Evaluated", NULL, (void*)NativeModule__remove_Evaluated_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::EventHandler_typeof()),
        new uFunction(".ctor", NULL, (void*)NativeModule__New1_fn, 0, true, NativeModule_typeof(), 1, ::g::Fuse::Scripting::NativeMember_typeof()->Array()));
    return type;
}

// public NativeModule(Fuse.Scripting.NativeMember[] members) :187
void NativeModule__ctor__fn(NativeModule* __this, uArray* members)
{
    __this->ctor_(members);
}

// protected void AddMember(Fuse.Scripting.NativeMember member) :208
void NativeModule__AddMember_fn(NativeModule* __this, ::g::Fuse::Scripting::NativeMember* member)
{
    __this->AddMember(member);
}

// public object Evaluate(string id, Fuse.Scripting.Context c) :215
void NativeModule__Evaluate_fn(NativeModule* __this, uString* id, ::g::Fuse::Scripting::Context* c, uObject** __retval)
{
    *__retval = __this->Evaluate(id, c);
}

// public void add_Evaluated(Uno.EventHandler value) :196
void NativeModule__add_Evaluated_fn(NativeModule* __this, uDelegate* value)
{
    __this->add_Evaluated(value);
}

// public void remove_Evaluated(Uno.EventHandler value) :203
void NativeModule__remove_Evaluated_fn(NativeModule* __this, uDelegate* value)
{
    __this->remove_Evaluated(value);
}

// private string Fuse.Scripting.IModule.get_Code() :236
void NativeModule__Fuse_Scripting_IModule_get_Code_fn(NativeModule* __this, uString** __retval)
{
    U_THROW(::g::Uno::Exception::New2(::STRINGS[20/*"Cannot get ...*/]));
}

// private string Fuse.Scripting.IModule.get_FileName() :241
void NativeModule__Fuse_Scripting_IModule_get_FileName_fn(NativeModule* __this, uString** __retval)
{
    U_THROW(::g::Uno::Exception::New2(::STRINGS[21/*"Cannot get ...*/]));
}

// private int Fuse.Scripting.IModule.get_LineNumberOffset() :246
void NativeModule__Fuse_Scripting_IModule_get_LineNumberOffset_fn(NativeModule* __this, int* __retval)
{
    return *__retval = 0, void();
}

// public NativeModule New(Fuse.Scripting.NativeMember[] members) :187
void NativeModule__New1_fn(uArray* members, NativeModule** __retval)
{
    *__retval = NativeModule::New1(members);
}

// public NativeModule(Fuse.Scripting.NativeMember[] members) [instance] :187
void NativeModule::ctor_(uArray* members)
{
    uArray* array1;
    int index2;
    int length3;
    _members = ((::g::Uno::Collections::List*)::g::Uno::Collections::List::New1(::TYPES[39/*Uno.Collections.List<Fuse.Scripting.NativeMember>*/]));

    for (array1 = members, index2 = 0, length3 = uPtr(array1)->Length(); index2 < length3; ++index2)
    {
        ::g::Fuse::Scripting::NativeMember* m = uPtr(array1)->Strong< ::g::Fuse::Scripting::NativeMember*>(index2);
        AddMember(m);
    }
}

// protected void AddMember(Fuse.Scripting.NativeMember member) [instance] :208
void NativeModule::AddMember(::g::Fuse::Scripting::NativeMember* member)
{
    if (_isEvaluated)
        U_THROW(::g::Uno::Exception::New2(::STRINGS[19/*"NativeModul...*/]));

    ::g::Uno::Collections::List__Add_fn(uPtr(_members), member);
}

// public object Evaluate(string id, Fuse.Scripting.Context c) [instance] :215
uObject* NativeModule::Evaluate(uString* id, ::g::Fuse::Scripting::Context* c)
{
    ::g::Uno::Collections::List__Enumerator<uStrong< ::g::Fuse::Scripting::NativeMember*> > ret6;
    ::g::Fuse::Scripting::Object* obj = uCast< ::g::Fuse::Scripting::Object*>(uPtr(c)->Evaluate1(id, ::STRINGS[9/*"new Object()"*/]), ::TYPES[12/*Fuse.Scripting.Object*/]);

    for (::g::Uno::Collections::List__Enumerator<uStrong< ::g::Fuse::Scripting::NativeMember*> > enum4 = (::g::Uno::Collections::List__GetEnumerator_fn(uPtr(_members), &ret6), ret6); enum4.MoveNext(::TYPES[41/*Uno.Collections.List<Fuse.Scripting.NativeMember>.Enumerator*/]); )
    {
        ::g::Fuse::Scripting::NativeMember* m = enum4.Current(::TYPES[41/*Uno.Collections.List<Fuse.Scripting.NativeMember>.Enumerator*/]);
        uPtr(m)->Create(obj, c);
    }

    _isEvaluated = true;
    uDelegate* handler = _evaluated;

    if (::g::Uno::Delegate::op_Inequality(handler, NULL))
    {
        uPtr(handler)->Invoke(2, NULL, (::g::Uno::EventArgs*)::g::Uno::EventArgs::Empty());
        _evaluated = NULL;
    }

    return obj;
}

// public void add_Evaluated(Uno.EventHandler value) [instance] :196
void NativeModule::add_Evaluated(uDelegate* value)
{
    if (_isEvaluated)
        uPtr(value)->Invoke(2, NULL, (::g::Uno::EventArgs*)::g::Uno::EventArgs::Empty());
    else
        _evaluated = uCast<uDelegate*>(::g::Uno::Delegate::Combine(_evaluated, value), ::TYPES[43/*Uno.EventHandler*/]);
}

// public void remove_Evaluated(Uno.EventHandler value) [instance] :203
void NativeModule::remove_Evaluated(uDelegate* value)
{
    _evaluated = uCast<uDelegate*>(::g::Uno::Delegate::Remove(_evaluated, value), ::TYPES[43/*Uno.EventHandler*/]);
}

// public NativeModule New(Fuse.Scripting.NativeMember[] members) [static] :187
NativeModule* NativeModule::New1(uArray* members)
{
    NativeModule* obj5 = (NativeModule*)uNew(NativeModule_typeof());
    obj5->ctor_(members);
    return obj5;
}
// }

// C:\ProgramData\Uno\Packages\Fuse.Scripting\0.19.3\$.uno(292)
// ------------------------------------------------------------

// public sealed class NativePromise<T, TJSResult> :292
// {
::g::Fuse::Scripting::NativeMember_type* NativePromise_typeof()
{
    static uSStrong< ::g::Fuse::Scripting::NativeMember_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 6;
    options.GenericCount = 2;
    options.PrecalcCount = 5;
    options.ObjectSize = sizeof(NativePromise);
    options.TypeSize = sizeof(::g::Fuse::Scripting::NativeMember_type);
    type = (::g::Fuse::Scripting::NativeMember_type*)uClassType::New("Fuse.Scripting.NativePromise`2", options);
    type->SetBase(::g::Fuse::Scripting::NativeMember_typeof());
    type->fp_CreateObject = (void(*)(::g::Fuse::Scripting::NativeMember*, uObject**))NativePromise__CreateObject_fn;
    ::TYPES[17] = ::g::Fuse::Scripting::FutureFactory_typeof();
    ::TYPES[3] = uObject_typeof();
    ::TYPES[11] = ::g::Fuse::Scripting::Callback_typeof();
    ::TYPES[45] = NativePromise__ContextClosure_typeof();
    ::TYPES[37] = ::g::Fuse::Scripting::NativeMember_typeof();
    ::TYPES[46] = ::g::Uno::Threading::Promise_typeof();
    ::TYPES[0] = ::g::Uno::Action_typeof();
    ::TYPES[47] = ::g::Fuse::Scripting::FactoryClosure_typeof();
    ::TYPES[48] = ::g::Uno::Threading::Future1_typeof();
    type->SetPrecalc(
        ::TYPES[17/*Fuse.Scripting.FutureFactory`1*/]->MakeType(type->T(0)),
        ::TYPES[45/*Fuse.Scripting.NativePromise`2.ContextClosure*/]->MakeType(type->T(0), type->T(1)),
        ::TYPES[46/*Uno.Threading.Promise`1*/]->MakeType(type->T(0)),
        ::TYPES[47/*Fuse.Scripting.FactoryClosure`1*/]->MakeType(type->T(0)),
        ::TYPES[48/*Uno.Threading.Future`1*/]->MakeType(type->T(0)));
    type->SetFields(3,
        ::g::Fuse::Scripting::ResultFactory_typeof()->MakeType(type->T(0)), offsetof(::g::Fuse::Scripting::NativePromise, _func), 0,
        ::g::Fuse::Scripting::FutureFactory_typeof()->MakeType(type->T(0)), offsetof(::g::Fuse::Scripting::NativePromise, _futureFactory), 0,
        ::g::Fuse::Scripting::ResultConverter_typeof()->MakeType(type->T(0), type->T(1)), offsetof(::g::Fuse::Scripting::NativePromise, _resultConverter), 0);
    type->Reflection.SetFunctions(2,
        new uFunction(".ctor", type, (void*)NativePromise__New1_fn, 0, true, type, 3, ::g::Uno::String_typeof(), ::g::Fuse::Scripting::FutureFactory_typeof()->MakeType(type->T(0)), ::g::Fuse::Scripting::ResultConverter_typeof()->MakeType(type->T(0), type->T(1))),
        new uFunction(".ctor", type, (void*)NativePromise__New2_fn, 0, true, type, 3, ::g::Uno::String_typeof(), ::g::Fuse::Scripting::ResultFactory_typeof()->MakeType(type->T(0)), ::g::Fuse::Scripting::ResultConverter_typeof()->MakeType(type->T(0), type->T(1))));
    return type;
}

// public NativePromise(string name, Fuse.Scripting.FutureFactory<T> futureFactory, [Fuse.Scripting.ResultConverter<T, TJSResult> resultConverter]) :312
void NativePromise__ctor_1_fn(NativePromise* __this, uString* name, uDelegate* futureFactory, uDelegate* resultConverter)
{
    __this->ctor_1(name, futureFactory, resultConverter);
}

// public NativePromise(string name, Fuse.Scripting.ResultFactory<T> func, [Fuse.Scripting.ResultConverter<T, TJSResult> resultConverter]) :298
void NativePromise__ctor_2_fn(NativePromise* __this, uString* name, uDelegate* func, uDelegate* resultConverter)
{
    __this->ctor_2(name, func, resultConverter);
}

// protected override sealed object CreateObject() :318
void NativePromise__CreateObject_fn(NativePromise* __this, uObject** __retval)
{
    uType* __types[] = {
        __this->__type->Precalced(1/*Fuse.Scripting.NativePromise<T, TJSResult>.ContextClosure*/),
        __this->__type->T(0),
        __this->__type->T(1),
    };
    return *__retval = uDelegate::New(::TYPES[11/*Fuse.Scripting.Callback*/], (void*)NativePromise__ContextClosure__CreatePromise_fn, NativePromise__ContextClosure::New1(__types[0], __this->Context(), __this->_futureFactory, __this->_resultConverter)), void();
}

// private Uno.Threading.Future<T> Factory(object[] args) :305
void NativePromise__Factory_fn(NativePromise* __this, uArray* args, ::g::Uno::Threading::Future1** __retval)
{
    *__retval = __this->Factory(args);
}

// public NativePromise New(string name, Fuse.Scripting.FutureFactory<T> futureFactory, [Fuse.Scripting.ResultConverter<T, TJSResult> resultConverter]) :312
void NativePromise__New1_fn(uType* __type, uString* name, uDelegate* futureFactory, uDelegate* resultConverter, NativePromise** __retval)
{
    *__retval = NativePromise::New1(__type, name, futureFactory, resultConverter);
}

// public NativePromise New(string name, Fuse.Scripting.ResultFactory<T> func, [Fuse.Scripting.ResultConverter<T, TJSResult> resultConverter]) :298
void NativePromise__New2_fn(uType* __type, uString* name, uDelegate* func, uDelegate* resultConverter, NativePromise** __retval)
{
    *__retval = NativePromise::New2(__type, name, func, resultConverter);
}

// public NativePromise(string name, Fuse.Scripting.FutureFactory<T> futureFactory, [Fuse.Scripting.ResultConverter<T, TJSResult> resultConverter]) [instance] :312
void NativePromise::ctor_1(uString* name, uDelegate* futureFactory, uDelegate* resultConverter)
{
    ctor_(name);
    _futureFactory = futureFactory;
    _resultConverter = resultConverter;
}

// public NativePromise(string name, Fuse.Scripting.ResultFactory<T> func, [Fuse.Scripting.ResultConverter<T, TJSResult> resultConverter]) [instance] :298
void NativePromise::ctor_2(uString* name, uDelegate* func, uDelegate* resultConverter)
{
    uType* __types[] = {
        __type->Precalced(0/*Fuse.Scripting.FutureFactory<T>*/),
        __type->T(0),
    };
    ctor_(name);
    _func = func;
    _futureFactory = uDelegate::New(__types[0], (void*)NativePromise__Factory_fn, this);
    _resultConverter = resultConverter;
}

// private Uno.Threading.Future<T> Factory(object[] args) [instance] :305
::g::Uno::Threading::Future1* NativePromise::Factory(uArray* args)
{
    uType* __types[] = {
        __type->Precalced(2/*Uno.Threading.Promise<T>*/),
        __type->T(0),
        __type->Precalced(3/*Fuse.Scripting.FactoryClosure<T>*/),
        __type->Precalced(4/*Uno.Threading.Future<T>*/),
    };
    ::g::Uno::Threading::Promise* future = (::g::Uno::Threading::Promise*)::g::Uno::Threading::Promise::New1(__types[0]);
    uPtr(::g::Uno::Threading::Thread::Create(uDelegate::New(::TYPES[0/*Uno.Action*/], (void*)::g::Fuse::Scripting::FactoryClosure__Run_fn, (::g::Fuse::Scripting::FactoryClosure*)::g::Fuse::Scripting::FactoryClosure::New1(__types[2], _func, args, future))))->Start();
    return future;
}

// public NativePromise New(string name, Fuse.Scripting.FutureFactory<T> futureFactory, [Fuse.Scripting.ResultConverter<T, TJSResult> resultConverter]) [static] :312
NativePromise* NativePromise::New1(uType* __type, uString* name, uDelegate* futureFactory, uDelegate* resultConverter)
{
    NativePromise* obj2 = (NativePromise*)uNew(__type);
    obj2->ctor_1(name, futureFactory, resultConverter);
    return obj2;
}

// public NativePromise New(string name, Fuse.Scripting.ResultFactory<T> func, [Fuse.Scripting.ResultConverter<T, TJSResult> resultConverter]) [static] :298
NativePromise* NativePromise::New2(uType* __type, uString* name, uDelegate* func, uDelegate* resultConverter)
{
    NativePromise* obj1 = (NativePromise*)uNew(__type);
    obj1->ctor_2(name, func, resultConverter);
    return obj1;
}
// }

// C:\ProgramData\Uno\Packages\Fuse.Scripting\0.19.3\$.uno(541)
// ------------------------------------------------------------

// public class NativeProperty<T, TJSValue> :541
// {
NativeProperty_type* NativeProperty_typeof()
{
    static uSStrong<NativeProperty_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 8;
    options.GenericCount = 2;
    options.PrecalcCount = 3;
    options.ObjectSize = sizeof(NativeProperty);
    options.TypeSize = sizeof(NativeProperty_type);
    type = (NativeProperty_type*)uClassType::New("Fuse.Scripting.NativeProperty`2", options);
    type->SetBase(::g::Fuse::Scripting::NativeMember_typeof());
    type->fp_CreateObject = (void(*)(::g::Fuse::Scripting::NativeMember*, uObject**))NativeProperty__CreateObject_fn;
    type->fp_GetProperty = NativeProperty__GetProperty_fn;
    type->fp_SetProperty1 = NativeProperty__SetProperty1_fn;
    ::TYPES[37] = ::g::Fuse::Scripting::NativeMember_typeof();
    ::TYPES[3] = uObject_typeof();
    ::TYPES[11] = ::g::Fuse::Scripting::Callback_typeof();
    ::TYPES[42] = ::g::Uno::Delegate_typeof();
    ::TYPES[22] = ::g::Uno::Func_typeof();
    ::TYPES[49] = ::g::Fuse::Scripting::ValueConverter_typeof();
    ::TYPES[2] = ::g::Uno::Action1_typeof();
    ::TYPES[10] = uObject_typeof()->Array();
    type->SetPrecalc(
        ::TYPES[22/*Uno.Func`1*/]->MakeType(type->T(0)),
        ::TYPES[49/*Fuse.Scripting.ValueConverter`2*/]->MakeType(type->T(0), type->T(1)),
        ::TYPES[2/*Uno.Action`1*/]->MakeType(type->T(1)));
    type->SetFields(3,
        ::g::Uno::Func_typeof()->MakeType(type->T(0)), offsetof(::g::Fuse::Scripting::NativeProperty, _getHandler), 0,
        ::g::Uno::Bool_typeof(), offsetof(::g::Fuse::Scripting::NativeProperty, _isReadonly), 0,
        type->T(1), (uintptr_t)0, uFieldFlagsConstrained,
        ::g::Uno::Action1_typeof()->MakeType(type->T(1)), offsetof(::g::Fuse::Scripting::NativeProperty, _setHandler), 0,
        ::g::Fuse::Scripting::ValueConverter_typeof()->MakeType(type->T(0), type->T(1)), offsetof(::g::Fuse::Scripting::NativeProperty, _valueConverter), 0);
    type->Reflection.SetFunctions(3,
        new uFunction(".ctor", type, (void*)NativeProperty__New1_fn, 0, true, type, 1, ::g::Uno::String_typeof()),
        new uFunction(".ctor", type, (void*)NativeProperty__New2_fn, 0, true, type, 4, ::g::Uno::String_typeof(), ::g::Uno::Func_typeof()->MakeType(type->T(0)), ::g::Uno::Action1_typeof()->MakeType(type->T(1)), ::g::Fuse::Scripting::ValueConverter_typeof()->MakeType(type->T(0), type->T(1))),
        new uFunction(".ctor", type, (void*)NativeProperty__New3_fn, 0, true, type, 2, ::g::Uno::String_typeof(), type->T(1)));
    return type;
}

// public NativeProperty(string name) :549
void NativeProperty__ctor_1_fn(NativeProperty* __this, uString* name)
{
    __this->ctor_1(name);
}

// public NativeProperty(string name, [Uno.Func<T> getHandler], [Uno.Action<TJSValue> setHandler], [Fuse.Scripting.ValueConverter<T, TJSValue> valueConverter]) :558
void NativeProperty__ctor_2_fn(NativeProperty* __this, uString* name, uDelegate* getHandler, uDelegate* setHandler, uDelegate* valueConverter)
{
    __this->ctor_2(name, getHandler, setHandler, valueConverter);
}

// public NativeProperty(string name, TJSValue value) :552
void NativeProperty__ctor_3_fn(NativeProperty* __this, uString* name, void* value)
{
    uType* __types[] = {
        __this->__type->GetBase(NativeProperty_typeof())->T(1),
    };
    __this->ctor_2(name, NULL, NULL, NULL);
    __this->_isReadonly = true;
    __this->_readonlyValue() = value;
}

// protected override sealed object CreateObject() :566
void NativeProperty__CreateObject_fn(NativeProperty* __this, uObject** __retval)
{
    if (__this->_isReadonly)
        uPtr(__this->Context())->ObjectDefineProperty1(__this->ModuleObject(), __this->Name(), uBoxPtr(__this->__type->GetBase(NativeProperty_typeof())->T(1), __this->_readonlyValue()), false, false);
    else
        uPtr(__this->Context())->ObjectDefineProperty(__this->ModuleObject(), __this->Name(), uDelegate::New(::TYPES[11/*Fuse.Scripting.Callback*/], (void*)NativeProperty__GetProperty1_fn, __this), uDelegate::New(::TYPES[11/*Fuse.Scripting.Callback*/], (void*)NativeProperty__SetProperty_fn, __this), false, false);

    return *__retval = NULL, void();
}

// protected virtual T GetProperty() :596
void NativeProperty__GetProperty_fn(NativeProperty* __this, uTRef __retval)
{
    return __retval.Store(__this->__type->GetBase(NativeProperty_typeof())->T(0), uT(__this->__type->GetBase(NativeProperty_typeof())->T(0), U_ALLOCA(__this->__type->GetBase(NativeProperty_typeof())->T(0)->ValueSize))), void();
}

// private object GetProperty(object[] args) :586
void NativeProperty__GetProperty1_fn(NativeProperty* __this, uArray* args, uObject** __retval)
{
    *__retval = __this->GetProperty1(args);
}

// public NativeProperty New(string name) :549
void NativeProperty__New1_fn(uType* __type, uString* name, NativeProperty** __retval)
{
    *__retval = NativeProperty::New1(__type, name);
}

// public NativeProperty New(string name, [Uno.Func<T> getHandler], [Uno.Action<TJSValue> setHandler], [Fuse.Scripting.ValueConverter<T, TJSValue> valueConverter]) :558
void NativeProperty__New2_fn(uType* __type, uString* name, uDelegate* getHandler, uDelegate* setHandler, uDelegate* valueConverter, NativeProperty** __retval)
{
    *__retval = NativeProperty::New2(__type, name, getHandler, setHandler, valueConverter);
}

// public NativeProperty New(string name, TJSValue value) :552
void NativeProperty__New3_fn(uType* __type, uString* name, void* value, NativeProperty** __retval)
{
    uType* __types[] = {
        __type->GetBase(NativeProperty_typeof())->T(1),
    };
    NativeProperty* obj2 = (NativeProperty*)uNew(__type);
    NativeProperty__ctor_3_fn(obj2, name, value);
    return *__retval = obj2, void();
}

// private object SetProperty(object[] args) :576
void NativeProperty__SetProperty_fn(NativeProperty* __this, uArray* args, uObject** __retval)
{
    *__retval = __this->SetProperty(args);
}

// protected virtual void SetProperty(TJSValue value) :584
void NativeProperty__SetProperty1_fn(NativeProperty* __this, void* value)
{
    uType* __types[] = {
        __this->__type->GetBase(NativeProperty_typeof())->T(1),
    };
}

// public NativeProperty(string name) [instance] :549
void NativeProperty::ctor_1(uString* name)
{
    ctor_2(name, NULL, NULL, NULL);
}

// public NativeProperty(string name, [Uno.Func<T> getHandler], [Uno.Action<TJSValue> setHandler], [Fuse.Scripting.ValueConverter<T, TJSValue> valueConverter]) [instance] :558
void NativeProperty::ctor_2(uString* name, uDelegate* getHandler, uDelegate* setHandler, uDelegate* valueConverter)
{
    ctor_(name);
    _setHandler = setHandler;
    _getHandler = getHandler;
    _valueConverter = valueConverter;
}

// private object GetProperty(object[] args) [instance] :586
uObject* NativeProperty::GetProperty1(uArray* args)
{
    uType* __types[] = {
        __type->GetBase(NativeProperty_typeof())->T(1),
        __type->GetBase(NativeProperty_typeof())->T(0),
        __type->GetBase(NativeProperty_typeof())->Precalced(0/*Uno.Func<T>*/),
        __type->GetBase(NativeProperty_typeof())->Precalced(1/*Fuse.Scripting.ValueConverter<T, TJSValue>*/),
    };
    uT ret4(__types[0], U_ALLOCA(__types[0]->ValueSize));
    uT ret5(__types[1], U_ALLOCA(__types[1]->ValueSize));
    uT ret6(__types[1], U_ALLOCA(__types[1]->ValueSize));
    ;
    ;
    ;

    if (::g::Uno::Delegate::op_Equality(_getHandler, NULL))
        _getHandler = uDelegate::New(__types[2], this, offsetof(NativeProperty_type, fp_GetProperty));

    if (::g::Uno::Delegate::op_Inequality(_valueConverter, NULL))
        return uBoxPtr(__types[0], (uPtr(_valueConverter)->Invoke(&ret4, 2, (::g::Fuse::Scripting::Context*)Context(), (uPtr(_getHandler)->Invoke(&ret5), (void*)ret5)), ret4));

    return uBoxPtr(__types[1], (uPtr(_getHandler)->Invoke(&ret6), ret6));
}

// private object SetProperty(object[] args) [instance] :576
uObject* NativeProperty::SetProperty(uArray* args)
{
    uType* __types[] = {
        __type->GetBase(NativeProperty_typeof())->Precalced(2/*Uno.Action<TJSValue>*/),
        __type->GetBase(NativeProperty_typeof())->T(1),
    };

    if (::g::Uno::Delegate::op_Equality(_setHandler, NULL))
        _setHandler = uDelegate::New(__types[0], this, offsetof(NativeProperty_type, fp_SetProperty1));

    uPtr(_setHandler)->InvokeVoid(((uPtr(args)->Length() > 0) && uIs(uPtr(args)->Strong<uObject*>(0), __types[1])) ? (void*)uUnboxAny(__types[1], uPtr(args)->Strong<uObject*>(0)) : uT(__types[1], U_ALLOCA(__types[1]->ValueSize)));
    return NULL;
}

// public NativeProperty New(string name) [static] :549
NativeProperty* NativeProperty::New1(uType* __type, uString* name)
{
    NativeProperty* obj1 = (NativeProperty*)uNew(__type);
    obj1->ctor_1(name);
    return obj1;
}

// public NativeProperty New(string name, [Uno.Func<T> getHandler], [Uno.Action<TJSValue> setHandler], [Fuse.Scripting.ValueConverter<T, TJSValue> valueConverter]) [static] :558
NativeProperty* NativeProperty::New2(uType* __type, uString* name, uDelegate* getHandler, uDelegate* setHandler, uDelegate* valueConverter)
{
    NativeProperty* obj3 = (NativeProperty*)uNew(__type);
    obj3->ctor_2(name, getHandler, setHandler, valueConverter);
    return obj3;
}
// }

// C:\ProgramData\Uno\Packages\Fuse.Scripting\0.19.3\$.uno(732)
// ------------------------------------------------------------

// public delegate object NodeCallback(Fuse.Node node, object[] args) :732
uDelegateType* NodeCallback_typeof()
{
    static uSStrong<uDelegateType*> type;
    if (type != NULL) return type;

    type = uDelegateType::New("Fuse.Scripting.NodeCallback", 2, 0);
    type->SetSignature(uObject_typeof(),
        ::g::Fuse::Node_typeof(),
        uObject_typeof()->Array());
    return type;
}

// C:\ProgramData\Uno\Packages\Fuse.Scripting\0.19.3\$.uno(898)
// ------------------------------------------------------------

// public static class JSCallback.NumberConverter :898
// {
uClassType* JSCallback__NumberConverter_typeof()
{
    static uSStrong<uClassType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.MethodTypeCount = 1;
    options.TypeSize = sizeof(uClassType);
    type = uClassType::New("Fuse.Scripting.JSCallback.NumberConverter", options);
    ::TYPES[50] = ::g::Uno::Short_typeof();
    ::TYPES[3] = uObject_typeof();
    ::TYPES[51] = ::g::Uno::Int_typeof();
    ::TYPES[52] = ::g::Uno::Long_typeof();
    ::TYPES[53] = ::g::Uno::Float_typeof();
    ::TYPES[54] = ::g::Uno::Double_typeof();
    type->Reflection.SetFunctions(3,
        new uFunction("Convert", NULL, (void*)JSCallback__NumberConverter__Convert5_fn, 0, true, uObject_typeof(), 2, ::g::Uno::Type_typeof(), uObject_typeof()),
        new uFunction("Convert`1", type, (void*)JSCallback__NumberConverter__Convert6_fn, 0, true, type->U(0), 1, uObject_typeof()),
        new uFunction("TryConvert`1", type, (void*)JSCallback__NumberConverter__TryConvert_fn, 0, true, ::g::Uno::Bool_typeof(), 2, uObject_typeof(), type->U(0)->ByRef()));
    return type;
}

// private static object Convert(double value, Uno.Type targetType) :963
void JSCallback__NumberConverter__Convert_fn(double* value, uType* targetType, uObject** __retval)
{
    *__retval = JSCallback__NumberConverter::Convert(*value, targetType);
}

// private static object Convert(float value, Uno.Type targetType) :954
void JSCallback__NumberConverter__Convert1_fn(float* value, uType* targetType, uObject** __retval)
{
    *__retval = JSCallback__NumberConverter::Convert1(*value, targetType);
}

// private static object Convert(int value, Uno.Type targetType) :936
void JSCallback__NumberConverter__Convert2_fn(int* value, uType* targetType, uObject** __retval)
{
    *__retval = JSCallback__NumberConverter::Convert2(*value, targetType);
}

// private static object Convert(long value, Uno.Type targetType) :945
void JSCallback__NumberConverter__Convert3_fn(int64_t* value, uType* targetType, uObject** __retval)
{
    *__retval = JSCallback__NumberConverter::Convert3(*value, targetType);
}

// private static object Convert(short value, Uno.Type targetType) :927
void JSCallback__NumberConverter__Convert4_fn(int16_t* value, uType* targetType, uObject** __retval)
{
    *__retval = JSCallback__NumberConverter::Convert4(*value, targetType);
}

// public static object Convert(Uno.Type targetType, object value) :917
void JSCallback__NumberConverter__Convert5_fn(uType* targetType, uObject* value, uObject** __retval)
{
    *__retval = JSCallback__NumberConverter::Convert5(targetType, value);
}

// public static TValue Convert<TValue>(object value) :912
void JSCallback__NumberConverter__Convert6_fn(uType* __type, uObject* value, uTRef __retval)
{
    uType* __types[] = {
        __type->U(0),
    };
    return __retval.Store(__types[0], uUnboxAny(__types[0], JSCallback__NumberConverter::Convert5(__types[0], value))), void();
}

// public static bool TryConvert<TValue>(object value, TValue& convertedValue) :900
void JSCallback__NumberConverter__TryConvert_fn(uType* __type, uObject* value, uTRef convertedValue, bool* __retval)
{
    uType* __types[] = {
        __type->U(0),
        JSCallback__NumberConverter_typeof()->MakeMethod(1, __type->U(0)),
    };
    uT ret1(__types[0], U_ALLOCA(__types[0]->ValueSize));
    ;
    convertedValue.Default(__types[0]);

    try
    {
        convertedValue.Store((JSCallback__NumberConverter__Convert6_fn(__types[1], value, &ret1), ret1));
        return *__retval = true, void();
    }
    catch (const uThrowable& __t)
    {
        ::g::Uno::Exception* __exception1 = __t.Exception;
    }

    return *__retval = false, void();
}

// private static object Convert(double value, Uno.Type targetType) [static] :963
uObject* JSCallback__NumberConverter::Convert(double value, uType* targetType)
{
    if (::g::Uno::Type::op_Equality(targetType, ::TYPES[50/*short*/]))
        return uBox<int16_t>(::TYPES[50/*short*/], (int16_t)value);

    if (::g::Uno::Type::op_Equality(targetType, ::TYPES[51/*int*/]))
        return uBox<int>(::TYPES[51/*int*/], (int)value);

    if (::g::Uno::Type::op_Equality(targetType, ::TYPES[52/*long*/]))
        return uBox<int64_t>(::TYPES[52/*long*/], (int64_t)value);

    if (::g::Uno::Type::op_Equality(targetType, ::TYPES[53/*float*/]))
        return uBox(::TYPES[53/*float*/], (float)value);

    return uBox(::TYPES[54/*double*/], value);
}

// private static object Convert(float value, Uno.Type targetType) [static] :954
uObject* JSCallback__NumberConverter::Convert1(float value, uType* targetType)
{
    if (::g::Uno::Type::op_Equality(targetType, ::TYPES[50/*short*/]))
        return uBox<int16_t>(::TYPES[50/*short*/], (int16_t)value);

    if (::g::Uno::Type::op_Equality(targetType, ::TYPES[51/*int*/]))
        return uBox<int>(::TYPES[51/*int*/], (int)value);

    if (::g::Uno::Type::op_Equality(targetType, ::TYPES[52/*long*/]))
        return uBox<int64_t>(::TYPES[52/*long*/], (int64_t)value);

    if (::g::Uno::Type::op_Equality(targetType, ::TYPES[54/*double*/]))
        return uBox(::TYPES[54/*double*/], (double)value);

    return uBox(::TYPES[53/*float*/], value);
}

// private static object Convert(int value, Uno.Type targetType) [static] :936
uObject* JSCallback__NumberConverter::Convert2(int value, uType* targetType)
{
    if (::g::Uno::Type::op_Equality(targetType, ::TYPES[50/*short*/]))
        return uBox<int16_t>(::TYPES[50/*short*/], (int16_t)value);

    if (::g::Uno::Type::op_Equality(targetType, ::TYPES[52/*long*/]))
        return uBox<int64_t>(::TYPES[52/*long*/], (int64_t)value);

    if (::g::Uno::Type::op_Equality(targetType, ::TYPES[53/*float*/]))
        return uBox(::TYPES[53/*float*/], (float)value);

    if (::g::Uno::Type::op_Equality(targetType, ::TYPES[54/*double*/]))
        return uBox(::TYPES[54/*double*/], (double)value);

    return uBox<int>(::TYPES[51/*int*/], value);
}

// private static object Convert(long value, Uno.Type targetType) [static] :945
uObject* JSCallback__NumberConverter::Convert3(int64_t value, uType* targetType)
{
    if (::g::Uno::Type::op_Equality(targetType, ::TYPES[50/*short*/]))
        return uBox<int16_t>(::TYPES[50/*short*/], (int16_t)value);

    if (::g::Uno::Type::op_Equality(targetType, ::TYPES[51/*int*/]))
        return uBox<int>(::TYPES[51/*int*/], (int)value);

    if (::g::Uno::Type::op_Equality(targetType, ::TYPES[53/*float*/]))
        return uBox(::TYPES[53/*float*/], (float)value);

    if (::g::Uno::Type::op_Equality(targetType, ::TYPES[54/*double*/]))
        return uBox(::TYPES[54/*double*/], (double)value);

    return uBox<int64_t>(::TYPES[52/*long*/], value);
}

// private static object Convert(short value, Uno.Type targetType) [static] :927
uObject* JSCallback__NumberConverter::Convert4(int16_t value, uType* targetType)
{
    if (::g::Uno::Type::op_Equality(targetType, ::TYPES[51/*int*/]))
        return uBox<int>(::TYPES[51/*int*/], (int)value);

    if (::g::Uno::Type::op_Equality(targetType, ::TYPES[52/*long*/]))
        return uBox<int64_t>(::TYPES[52/*long*/], (int64_t)value);

    if (::g::Uno::Type::op_Equality(targetType, ::TYPES[53/*float*/]))
        return uBox(::TYPES[53/*float*/], (float)value);

    if (::g::Uno::Type::op_Equality(targetType, ::TYPES[54/*double*/]))
        return uBox(::TYPES[54/*double*/], (double)value);

    return uBox<int16_t>(::TYPES[50/*short*/], value);
}

// public static object Convert(Uno.Type targetType, object value) [static] :917
uObject* JSCallback__NumberConverter::Convert5(uType* targetType, uObject* value)
{
    if (uIs(value, ::TYPES[50/*short*/]))
        return JSCallback__NumberConverter::Convert4(uUnbox<int16_t>(::TYPES[50/*short*/], value), targetType);

    if (uIs(value, ::TYPES[51/*int*/]))
        return JSCallback__NumberConverter::Convert2(uUnbox<int>(::TYPES[51/*int*/], value), targetType);

    if (uIs(value, ::TYPES[52/*long*/]))
        return JSCallback__NumberConverter::Convert3(uUnbox<int64_t>(::TYPES[52/*long*/], value), targetType);

    if (uIs(value, ::TYPES[53/*float*/]))
        return JSCallback__NumberConverter::Convert1(uUnbox<float>(::TYPES[53/*float*/], value), targetType);

    if (uIs(value, ::TYPES[54/*double*/]))
        return JSCallback__NumberConverter::Convert(uUnbox<double>(::TYPES[54/*double*/], value), targetType);

    return value;
}
// }

// C:\ProgramData\Uno\Packages\Fuse.Scripting\0.19.3\$.uno(694)
// ------------------------------------------------------------

// public abstract class Object :694
// {
Object_type* Object_typeof()
{
    static uSStrong<Object_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.ObjectSize = sizeof(Object);
    options.TypeSize = sizeof(Object_type);
    type = (Object_type*)uClassType::New("Fuse.Scripting.Object", options);
    type->fp_Equals = (void(*)(uObject*, uObject*, bool*))Object__Equals_fn;
    type->Reflection.SetFunctions(7,
        new uFunction("CallMethod", NULL, NULL, offsetof(Object_type, fp_CallMethod), false, uObject_typeof(), 2, ::g::Uno::String_typeof(), uObject_typeof()->Array()),
        new uFunction("ContainsKey", NULL, NULL, offsetof(Object_type, fp_ContainsKey), false, ::g::Uno::Bool_typeof(), 1, ::g::Uno::String_typeof()),
        new uFunction("Equals", NULL, NULL, offsetof(Object_type, fp_Equals2), false, ::g::Uno::Bool_typeof(), 1, Object_typeof()),
        new uFunction("InstanceOf", NULL, NULL, offsetof(Object_type, fp_InstanceOf), false, ::g::Uno::Bool_typeof(), 1, ::g::Fuse::Scripting::Function_typeof()),
        new uFunction("get_Item", NULL, NULL, offsetof(Object_type, fp_get_Item), false, uObject_typeof(), 1, ::g::Uno::String_typeof()),
        new uFunction("set_Item", NULL, NULL, offsetof(Object_type, fp_set_Item), false, uVoid_typeof(), 2, ::g::Uno::String_typeof(), uObject_typeof()),
        new uFunction("get_Keys", NULL, NULL, offsetof(Object_type, fp_get_Keys), false, ::g::Uno::String_typeof()->Array(), 0));
    return type;
}

// protected generated Object() :694
void Object__ctor__fn(Object* __this)
{
    __this->ctor_();
}

// public override sealed bool Equals(object o) :703
void Object__Equals_fn(Object* __this, uObject* o, bool* __retval)
{
    Object* a = uAs<Object*>(o, Object_typeof());

    if (a == NULL)
        return *__retval = false, void();

    return *__retval = __this->Equals2(a), void();
}

// protected generated Object() [instance] :694
void Object::ctor_()
{
}
// }

// C:\ProgramData\Uno\Packages\Fuse.Scripting\0.19.3\$.uno(342)
// ------------------------------------------------------------

// private sealed class NativePromise<T, TJSResult>.PromiseClosure :342
// {
uType* NativePromise__PromiseClosure_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 6;
    options.GenericCount = 2;
    options.PrecalcCount = 2;
    options.ObjectSize = sizeof(NativePromise__PromiseClosure);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Fuse.Scripting.NativePromise`2.PromiseClosure", options);
    ::TYPES[42] = ::g::Uno::Delegate_typeof();
    ::TYPES[10] = uObject_typeof()->Array();
    ::TYPES[3] = uObject_typeof();
    ::TYPES[55] = ::g::Fuse::Scripting::ResultConverter_typeof();
    ::TYPES[56] = ::g::Uno::Exception_typeof();
    ::TYPES[16] = ::g::Fuse::Scripting::Context_typeof();
    ::TYPES[0] = ::g::Uno::Action_typeof();
    ::TYPES[9] = ::g::Fuse::Scripting::Function_typeof();
    ::TYPES[2] = ::g::Uno::Action1_typeof();
    ::TYPES[57] = ::g::Uno::Action1_typeof()->MakeType(::g::Uno::Exception_typeof());
    type->SetPrecalc(
        ::TYPES[55/*Fuse.Scripting.ResultConverter`2*/]->MakeType(type->T(0), type->T(1)),
        ::TYPES[2/*Uno.Action`1*/]->MakeType(type->T(0)));
    type->SetFields(0,
        ::g::Fuse::Scripting::Context_typeof(), offsetof(::g::Fuse::Scripting::NativePromise__PromiseClosure, _c), 0,
        ::g::Fuse::Scripting::ResultConverter_typeof()->MakeType(type->T(0), type->T(1)), offsetof(::g::Fuse::Scripting::NativePromise__PromiseClosure, _converter), 0,
        ::g::Uno::Threading::Future1_typeof()->MakeType(type->T(0)), offsetof(::g::Fuse::Scripting::NativePromise__PromiseClosure, _promise), 0,
        ::g::Fuse::Scripting::Function_typeof(), offsetof(::g::Fuse::Scripting::NativePromise__PromiseClosure, _reject), 0,
        ::g::Fuse::Scripting::Function_typeof(), offsetof(::g::Fuse::Scripting::NativePromise__PromiseClosure, _resolve), 0,
        type->T(0), (uintptr_t)0, uFieldFlagsConstrained);
    return type;
}

// public PromiseClosure(Fuse.Scripting.Context context, Uno.Threading.Future<T> promise, Fuse.Scripting.ResultConverter<T, TJSResult> converter) :351
void NativePromise__PromiseClosure__ctor__fn(NativePromise__PromiseClosure* __this, ::g::Fuse::Scripting::Context* context, ::g::Uno::Threading::Future1* promise, uDelegate* converter)
{
    __this->ctor_(context, promise, converter);
}

// private void InternalResolve() :378
void NativePromise__PromiseClosure__InternalResolve_fn(NativePromise__PromiseClosure* __this)
{
    __this->InternalResolve();
}

// public PromiseClosure New(Fuse.Scripting.Context context, Uno.Threading.Future<T> promise, Fuse.Scripting.ResultConverter<T, TJSResult> converter) :351
void NativePromise__PromiseClosure__New1_fn(uType* __type, ::g::Fuse::Scripting::Context* context, ::g::Uno::Threading::Future1* promise, uDelegate* converter, NativePromise__PromiseClosure** __retval)
{
    *__retval = NativePromise__PromiseClosure::New1(__type, context, promise, converter);
}

// private void Reject(Uno.Exception reason) :386
void NativePromise__PromiseClosure__Reject_fn(NativePromise__PromiseClosure* __this, ::g::Uno::Exception* reason)
{
    __this->Reject(reason);
}

// private void Resolve(T result) :371
void NativePromise__PromiseClosure__Resolve_fn(NativePromise__PromiseClosure* __this, void* result)
{
    uType* __types[] = {
        __this->__type->T(0),
    };
    __this->_result() = result;

    if (__this->_resolve != NULL)
        ::g::Fuse::Scripting::IDispatcher::Dispatch(uInterface(uPtr(uPtr(__this->_c)->Dispatcher()), ::g::Fuse::Scripting::IDispatcher_typeof()), 0, uDelegate::New(::TYPES[0/*Uno.Action*/], (void*)NativePromise__PromiseClosure__InternalResolve_fn, __this));
}

// public object Run(object[] args) :358
void NativePromise__PromiseClosure__Run_fn(NativePromise__PromiseClosure* __this, uArray* args, uObject** __retval)
{
    *__retval = __this->Run(args);
}

// public PromiseClosure(Fuse.Scripting.Context context, Uno.Threading.Future<T> promise, Fuse.Scripting.ResultConverter<T, TJSResult> converter) [instance] :351
void NativePromise__PromiseClosure::ctor_(::g::Fuse::Scripting::Context* context, ::g::Uno::Threading::Future1* promise, uDelegate* converter)
{
    _c = context;
    _promise = promise;
    _converter = converter;
}

// private void InternalResolve() [instance] :378
void NativePromise__PromiseClosure::InternalResolve()
{
    uType* __types[] = {
        __type->T(1),
        __type->Precalced(0/*Fuse.Scripting.ResultConverter<T, TJSResult>*/),
        __type->T(0),
    };
    uT ret2(__types[0], U_ALLOCA(__types[0]->ValueSize));
    ;

    if (::g::Uno::Delegate::op_Inequality(_converter, NULL))
        uPtr(_resolve)->Call(uArray::Init<uObject*>(::TYPES[10/*object[]*/], 1, uBoxPtr(__types[0], (uPtr(_converter)->Invoke(&ret2, 2, (::g::Fuse::Scripting::Context*)_c, (void*)_result()), ret2))));
    else
        uPtr(_resolve)->Call(uArray::Init<uObject*>(::TYPES[10/*object[]*/], 1, uBoxPtr(__types[2], _result())));
}

// private void Reject(Uno.Exception reason) [instance] :386
void NativePromise__PromiseClosure::Reject(::g::Uno::Exception* reason)
{
    if (_reject != NULL)
        uPtr(_reject)->Call(uArray::Init<uObject*>(::TYPES[10/*object[]*/], 1, (uString*)uPtr(reason)->Message()));
}

// public object Run(object[] args) [instance] :358
uObject* NativePromise__PromiseClosure::Run(uArray* args)
{
    uType* __types[] = {
        __type->Precalced(1/*Uno.Action<T>*/),
        __type->T(0),
    };

    if (uPtr(args)->Length() > 0)
        _resolve = uAs< ::g::Fuse::Scripting::Function*>(uPtr(args)->Strong<uObject*>(0), ::TYPES[9/*Fuse.Scripting.Function*/]);

    if (args->Length() > 1)
        _reject = uAs< ::g::Fuse::Scripting::Function*>(args->Strong<uObject*>(1), ::TYPES[9/*Fuse.Scripting.Function*/]);

    uPtr(_promise)->Then1(uDelegate::New(__types[0], (void*)NativePromise__PromiseClosure__Resolve_fn, this), uDelegate::New(::TYPES[57/*Uno.Action<Uno.Exception>*/], (void*)NativePromise__PromiseClosure__Reject_fn, this));
    return NULL;
}

// public PromiseClosure New(Fuse.Scripting.Context context, Uno.Threading.Future<T> promise, Fuse.Scripting.ResultConverter<T, TJSResult> converter) [static] :351
NativePromise__PromiseClosure* NativePromise__PromiseClosure::New1(uType* __type, ::g::Fuse::Scripting::Context* context, ::g::Uno::Threading::Future1* promise, uDelegate* converter)
{
    NativePromise__PromiseClosure* obj1 = (NativePromise__PromiseClosure*)uNew(__type);
    obj1->ctor_(context, promise, converter);
    return obj1;
}
// }

// C:\ProgramData\Uno\Packages\Fuse.Scripting\0.19.3\$.uno(260)
// ------------------------------------------------------------

// public delegate TJSResult ResultConverter<T, TJSResult>(Fuse.Scripting.Context context, T result) :260
uDelegateType* ResultConverter_typeof()
{
    static uSStrong<uDelegateType*> type;
    if (type != NULL) return type;

    type = uDelegateType::New("Fuse.Scripting.ResultConverter`2", 2, 2);
    type->SetSignature(type->T(1),
        ::g::Fuse::Scripting::Context_typeof(),
        type->T(0));
    return type;
}

// C:\ProgramData\Uno\Packages\Fuse.Scripting\0.19.3\$.uno(258)
// ------------------------------------------------------------

// public delegate T ResultFactory<T>(object[] args) :258
uDelegateType* ResultFactory_typeof()
{
    static uSStrong<uDelegateType*> type;
    if (type != NULL) return type;

    type = uDelegateType::New("Fuse.Scripting.ResultFactory`1", 1, 1);
    type->SetSignature(type->T(0),
        uObject_typeof()->Array());
    return type;
}

// C:\ProgramData\Uno\Packages\Fuse.Scripting\0.19.3\$.uno(605)
// ------------------------------------------------------------

// public sealed class ScriptException :605
// {
::g::Uno::Exception_type* ScriptException_typeof()
{
    static uSStrong< ::g::Uno::Exception_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 8;
    options.ObjectSize = sizeof(ScriptException);
    options.TypeSize = sizeof(::g::Uno::Exception_type);
    type = (::g::Uno::Exception_type*)uClassType::New("Fuse.Scripting.ScriptException", options);
    type->SetBase(::g::Uno::Exception_typeof());
    type->fp_get_Message = (void(*)(::g::Uno::Exception*, uString**))ScriptException__get_Message_fn;
    ::STRINGS[22] = uString::Const("Name: ");
    ::STRINGS[23] = uString::Const("ErrorMessage: ");
    ::STRINGS[24] = uString::Const("FileName: ");
    ::STRINGS[25] = uString::Const("LineNumber: ");
    ::STRINGS[26] = uString::Const("JS StackTrace: ");
    ::TYPES[14] = ::g::Uno::Bool_typeof();
    ::TYPES[51] = ::g::Uno::Int_typeof();
    type->SetFields(3,
        ::g::Uno::String_typeof(), offsetof(::g::Fuse::Scripting::ScriptException, _ErrorMessage), 0,
        ::g::Uno::String_typeof(), offsetof(::g::Fuse::Scripting::ScriptException, _FileName), 0,
        ::g::Uno::String_typeof(), offsetof(::g::Fuse::Scripting::ScriptException, _JSStackTrace), 0,
        ::g::Uno::Int_typeof(), offsetof(::g::Fuse::Scripting::ScriptException, _LineNumber), 0,
        ::g::Uno::String_typeof(), offsetof(::g::Fuse::Scripting::ScriptException, _Name), 0);
    type->Reflection.SetFunctions(6,
        new uFunction("get_ErrorMessage", NULL, (void*)ScriptException__get_ErrorMessage_fn, 0, false, ::g::Uno::String_typeof(), 0),
        new uFunction("get_FileName", NULL, (void*)ScriptException__get_FileName_fn, 0, false, ::g::Uno::String_typeof(), 0),
        new uFunction("get_JSStackTrace", NULL, (void*)ScriptException__get_JSStackTrace_fn, 0, false, ::g::Uno::String_typeof(), 0),
        new uFunction("get_LineNumber", NULL, (void*)ScriptException__get_LineNumber_fn, 0, false, ::g::Uno::Int_typeof(), 0),
        new uFunction("get_Name", NULL, (void*)ScriptException__get_Name_fn, 0, false, ::g::Uno::String_typeof(), 0),
        new uFunction(".ctor", NULL, (void*)ScriptException__New4_fn, 0, true, ScriptException_typeof(), 5, ::g::Uno::String_typeof(), ::g::Uno::String_typeof(), ::g::Uno::String_typeof(), ::g::Uno::Int_typeof(), ::g::Uno::String_typeof()));
    return type;
}

// public ScriptException(string name, string errorMessage, string fileName, int lineNumber, string stackTrace) :613
void ScriptException__ctor_3_fn(ScriptException* __this, uString* name, uString* errorMessage, uString* fileName, int* lineNumber, uString* stackTrace)
{
    __this->ctor_3(name, errorMessage, fileName, *lineNumber, stackTrace);
}

// public generated string get_ErrorMessage() :608
void ScriptException__get_ErrorMessage_fn(ScriptException* __this, uString** __retval)
{
    *__retval = __this->ErrorMessage();
}

// private generated void set_ErrorMessage(string value) :608
void ScriptException__set_ErrorMessage_fn(ScriptException* __this, uString* value)
{
    __this->ErrorMessage(value);
}

// public generated string get_FileName() :609
void ScriptException__get_FileName_fn(ScriptException* __this, uString** __retval)
{
    *__retval = __this->FileName();
}

// private generated void set_FileName(string value) :609
void ScriptException__set_FileName_fn(ScriptException* __this, uString* value)
{
    __this->FileName(value);
}

// public generated string get_JSStackTrace() :611
void ScriptException__get_JSStackTrace_fn(ScriptException* __this, uString** __retval)
{
    *__retval = __this->JSStackTrace();
}

// private generated void set_JSStackTrace(string value) :611
void ScriptException__set_JSStackTrace_fn(ScriptException* __this, uString* value)
{
    __this->JSStackTrace(value);
}

// public generated int get_LineNumber() :610
void ScriptException__get_LineNumber_fn(ScriptException* __this, int* __retval)
{
    *__retval = __this->LineNumber();
}

// private generated void set_LineNumber(int value) :610
void ScriptException__set_LineNumber_fn(ScriptException* __this, int* value)
{
    __this->LineNumber(*value);
}

// public override sealed string get_Message() :629
void ScriptException__get_Message_fn(ScriptException* __this, uString** __retval)
{
    ::g::Uno::Text::StringBuilder* stringBuilder = ::g::Uno::Text::StringBuilder::New1();

    if (!::g::Uno::String::IsNullOrEmpty(__this->Name()))
    {
        uPtr(stringBuilder)->Append1(::STRINGS[22/*"Name: "*/]);
        stringBuilder->AppendLine(__this->Name());
    }

    if (!::g::Uno::String::IsNullOrEmpty(__this->ErrorMessage()))
    {
        uPtr(stringBuilder)->Append1(::STRINGS[23/*"ErrorMessag...*/]);
        stringBuilder->AppendLine(__this->ErrorMessage());
    }

    if (!::g::Uno::String::IsNullOrEmpty(__this->FileName()))
    {
        uPtr(stringBuilder)->Append1(::STRINGS[24/*"FileName: "*/]);
        stringBuilder->AppendLine(__this->FileName());
    }

    if (__this->LineNumber() >= 0)
    {
        uPtr(stringBuilder)->Append1(::STRINGS[25/*"LineNumber: "*/]);
        stringBuilder->AppendLine(::g::Uno::Int::ToString(__this->LineNumber(), ::TYPES[51/*int*/]));
    }

    if (!::g::Uno::String::IsNullOrEmpty(__this->JSStackTrace()))
    {
        uPtr(stringBuilder)->Append1(::STRINGS[26/*"JS StackTra...*/]);
        stringBuilder->AppendLine(__this->JSStackTrace());
    }

    return *__retval = stringBuilder->ToString(), void();
}

// public generated string get_Name() :607
void ScriptException__get_Name_fn(ScriptException* __this, uString** __retval)
{
    *__retval = __this->Name();
}

// private generated void set_Name(string value) :607
void ScriptException__set_Name_fn(ScriptException* __this, uString* value)
{
    __this->Name(value);
}

// public ScriptException New(string name, string errorMessage, string fileName, int lineNumber, string stackTrace) :613
void ScriptException__New4_fn(uString* name, uString* errorMessage, uString* fileName, int* lineNumber, uString* stackTrace, ScriptException** __retval)
{
    *__retval = ScriptException::New4(name, errorMessage, fileName, *lineNumber, stackTrace);
}

// public ScriptException(string name, string errorMessage, string fileName, int lineNumber, string stackTrace) [instance] :613
void ScriptException::ctor_3(uString* name, uString* errorMessage, uString* fileName, int lineNumber, uString* stackTrace)
{
    ctor_();
    Name(name);
    ErrorMessage(errorMessage);
    FileName(fileName);
    LineNumber(lineNumber);
    JSStackTrace(stackTrace);
}

// public generated string get_ErrorMessage() [instance] :608
uString* ScriptException::ErrorMessage()
{
    return _ErrorMessage;
}

// private generated void set_ErrorMessage(string value) [instance] :608
void ScriptException::ErrorMessage(uString* value)
{
    _ErrorMessage = value;
}

// public generated string get_FileName() [instance] :609
uString* ScriptException::FileName()
{
    return _FileName;
}

// private generated void set_FileName(string value) [instance] :609
void ScriptException::FileName(uString* value)
{
    _FileName = value;
}

// public generated string get_JSStackTrace() [instance] :611
uString* ScriptException::JSStackTrace()
{
    return _JSStackTrace;
}

// private generated void set_JSStackTrace(string value) [instance] :611
void ScriptException::JSStackTrace(uString* value)
{
    _JSStackTrace = value;
}

// public generated int get_LineNumber() [instance] :610
int ScriptException::LineNumber()
{
    return _LineNumber;
}

// private generated void set_LineNumber(int value) [instance] :610
void ScriptException::LineNumber(int value)
{
    _LineNumber = value;
}

// public generated string get_Name() [instance] :607
uString* ScriptException::Name()
{
    return _Name;
}

// private generated void set_Name(string value) [instance] :607
void ScriptException::Name(uString* value)
{
    _Name = value;
}

// public ScriptException New(string name, string errorMessage, string fileName, int lineNumber, string stackTrace) [static] :613
ScriptException* ScriptException::New4(uString* name, uString* errorMessage, uString* fileName, int lineNumber, uString* stackTrace)
{
    ScriptException* obj1 = (ScriptException*)uNew(ScriptException_typeof());
    obj1->ctor_3(name, errorMessage, fileName, lineNumber, stackTrace);
    return obj1;
}
// }

// C:\ProgramData\Uno\Packages\FuseCore\0.19.3\Scripting\$.uno(110)
// ----------------------------------------------------------------

// public sealed class StringChangedArgs :110
// {
StringChangedArgs_type* StringChangedArgs_typeof()
{
    static uSStrong<StringChangedArgs_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 2;
    options.InterfaceCount = 1;
    options.ObjectSize = sizeof(StringChangedArgs);
    options.TypeSize = sizeof(StringChangedArgs_type);
    type = (StringChangedArgs_type*)uClassType::New("Fuse.Scripting.StringChangedArgs", options);
    type->SetBase(::g::Uno::UX::ValueChangedArgs_typeof()->MakeType(::g::Uno::String_typeof()));
    type->interface0.fp_Serialize = (void(*)(uObject*, uObject*))StringChangedArgs__Fuse_Scripting_IScriptEvent_Serialize_fn;
    ::STRINGS[2] = uString::Const("value");
    ::TYPES[58] = ::g::Uno::UX::ValueChangedArgs_typeof()->MakeType(::g::Uno::String_typeof());
    type->SetInterfaces(
        ::g::Fuse::Scripting::IScriptEvent_typeof(), offsetof(StringChangedArgs_type, interface0));
    type->SetFields(2);
    type->Reflection.SetFunctions(1,
        new uFunction(".ctor", NULL, (void*)StringChangedArgs__New3_fn, 0, true, StringChangedArgs_typeof(), 2, ::g::Uno::String_typeof(), uObject_typeof()));
    return type;
}

// public StringChangedArgs(string newValue, object origin) :112
void StringChangedArgs__ctor_2_fn(StringChangedArgs* __this, uString* newValue, uObject* origin)
{
    __this->ctor_2(newValue, origin);
}

// private void Fuse.Scripting.IScriptEvent.Serialize(Fuse.Scripting.IEventSerializer s) :114
void StringChangedArgs__Fuse_Scripting_IScriptEvent_Serialize_fn(StringChangedArgs* __this, uObject* s)
{
    uString* ret2;
    ::g::Fuse::Scripting::IEventSerializer::AddString(uInterface(uPtr(s), ::g::Fuse::Scripting::IEventSerializer_typeof()), ::STRINGS[2/*"value"*/], (::g::Uno::UX::ValueChangedArgs__get_Value_fn(__this, &ret2), ret2));
}

// public StringChangedArgs New(string newValue, object origin) :112
void StringChangedArgs__New3_fn(uString* newValue, uObject* origin, StringChangedArgs** __retval)
{
    *__retval = StringChangedArgs::New3(newValue, origin);
}

// public StringChangedArgs(string newValue, object origin) [instance] :112
void StringChangedArgs::ctor_2(uString* newValue, uObject* origin)
{
    ::g::Uno::UX::ValueChangedArgs__ctor_1_fn(this, newValue, origin);
}

// public StringChangedArgs New(string newValue, object origin) [static] :112
StringChangedArgs* StringChangedArgs::New3(uString* newValue, uObject* origin)
{
    StringChangedArgs* obj1 = (StringChangedArgs*)uNew(StringChangedArgs_typeof());
    obj1->ctor_2(newValue, origin);
    return obj1;
}
// }

// C:\ProgramData\Uno\Packages\Fuse.Scripting\0.19.3\$.uno(8)
// ----------------------------------------------------------

// public enum TaskPriority :8
uEnumType* TaskPriority_typeof()
{
    static uSStrong<uEnumType*> type;
    if (type != NULL) return type;

    type = uEnumType::New("Fuse.Scripting.TaskPriority", ::g::Uno::Int_typeof(), 3);
    type->SetLiterals(
        "Async", 0LL,
        "AttemptSync", 1LL,
        "ForceSync", 2LL);
    return type;
}

// C:\ProgramData\Uno\Packages\Fuse.Scripting\0.19.3\$.uno(668)
// ------------------------------------------------------------

// public static class Value :668
// {
uClassType* Value_typeof()
{
    static uSStrong<uClassType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.TypeSize = sizeof(uClassType);
    type = uClassType::New("Fuse.Scripting.Value", options);
    ::TYPES[54] = ::g::Uno::Double_typeof();
    ::TYPES[53] = ::g::Uno::Float_typeof();
    ::TYPES[51] = ::g::Uno::Int_typeof();
    ::TYPES[59] = ::g::Uno::UInt_typeof();
    type->Reflection.SetFunctions(1,
        new uFunction("ToNumber", NULL, (void*)Value__ToNumber_fn, 0, true, ::g::Uno::Double_typeof(), 1, uObject_typeof()));
    return type;
}

// public static double ToNumber(object obj) :670
void Value__ToNumber_fn(uObject* obj, double* __retval)
{
    *__retval = Value::ToNumber(obj);
}

// public static double ToNumber(object obj) [static] :670
double Value::ToNumber(uObject* obj)
{
    if (uIs(obj, ::TYPES[54/*double*/]))
        return uUnbox<double>(::TYPES[54/*double*/], obj);

    if (uIs(obj, ::TYPES[53/*float*/]))
        return (double)uUnbox<float>(::TYPES[53/*float*/], obj);

    if (uIs(obj, ::TYPES[51/*int*/]))
        return (double)uUnbox<int>(::TYPES[51/*int*/], obj);

    if (uIs(obj, ::TYPES[59/*uint*/]))
        return (double)uUnbox<uint32_t>(::TYPES[59/*uint*/], obj);

    return 0.0;
}
// }

// C:\ProgramData\Uno\Packages\Fuse.Scripting\0.19.3\$.uno(539)
// ------------------------------------------------------------

// public delegate TJSValue ValueConverter<T, TJSValue>(Fuse.Scripting.Context context, T originalValue) :539
uDelegateType* ValueConverter_typeof()
{
    static uSStrong<uDelegateType*> type;
    if (type != NULL) return type;

    type = uDelegateType::New("Fuse.Scripting.ValueConverter`2", 2, 2);
    type->SetSignature(type->T(1),
        ::g::Fuse::Scripting::Context_typeof(),
        type->T(0));
    return type;
}

}}} // ::g::Fuse::Scripting
