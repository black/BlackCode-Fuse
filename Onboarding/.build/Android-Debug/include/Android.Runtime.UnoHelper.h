// This file was generated based on 'C:\ProgramData\Uno\Packages\Android\0.20.2\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <jni.h>
#include <Uno.h>
namespace g{namespace Android{namespace java{namespace util{struct Observable;}}}}
namespace g{namespace Android{namespace Runtime{struct UnoHelper;}}}

namespace g{
namespace Android{
namespace Runtime{

// public static extern class UnoHelper :14
// {
uClassType* UnoHelper_typeof();
void UnoHelper__Init_fn();
void UnoHelper__MakeJSObservable_fn(uObject* observer_, ::g::Android::java::util::Observable** __retval);
void UnoHelper__RegisterCallback_fn(JNINativeMethod* nativeFunc_, jobject* optionalClass_);
void UnoHelper__RunnableFromAction_fn(uDelegate* actn, uObject** __retval);

struct UnoHelper : uObject
{
    static jclass _helperCls_;
    static jclass& _helperCls() { return _helperCls_; }
    static bool _inited_;
    static bool& _inited() { return _inited_; }
    static jmethodID _makeJSObservableMid_;
    static jmethodID& _makeJSObservableMid() { return _makeJSObservableMid_; }

    static void Init();
    static ::g::Android::java::util::Observable* MakeJSObservable(uObject* observer_);
    static void RegisterCallback(JNINativeMethod nativeFunc_, jobject optionalClass_);
    static uObject* RunnableFromAction(uDelegate* actn);
};
// }

}}} // ::g::Android::Runtime
