// This file was generated based on 'C:\ProgramData\Uno\Packages\Android\0.20.2\Android\java\util\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Android.Base.Wrappers.IJWrapper.h>
#include <Android.java.lang.Object.h>
#include <jni.h>
#include <Uno.IDisposable.h>
namespace g{namespace Android{namespace java{namespace util{struct Observable;}}}}

namespace g{
namespace Android{
namespace java{
namespace util{

// public sealed extern class Observable :3279
// {
::g::Android::java::lang::Object_type* Observable_typeof();
void Observable___Init2_fn();
void Observable__notifyObservers_fn(Observable* __this);
void Observable__notifyObservers1_fn(Observable* __this, ::g::Android::java::lang::Object* arg0);
void Observable__notifyObservers_IMPL_38389_fn(bool* arg0_, jobject* arg1_);
void Observable__notifyObservers_IMPL_38390_fn(bool* arg0_, jobject* arg1_, uObject* arg2_);

struct Observable : ::g::Android::java::lang::Object
{
    static jclass _javaClass2_;
    static jclass& _javaClass2() { return _javaClass2_; }
    static jmethodID notifyObservers_38389_ID_;
    static jmethodID& notifyObservers_38389_ID() { return notifyObservers_38389_ID_; }
    static jmethodID notifyObservers_38390_ID_;
    static jmethodID& notifyObservers_38390_ID() { return notifyObservers_38390_ID_; }

    void notifyObservers();
    void notifyObservers1(::g::Android::java::lang::Object* arg0);
    static void _Init2();
    static void notifyObservers_IMPL_38389(bool arg0_, jobject arg1_);
    static void notifyObservers_IMPL_38390(bool arg0_, jobject arg1_, uObject* arg2_);
};
// }

}}}} // ::g::Android::java::util
