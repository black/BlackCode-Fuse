// This file was generated based on 'C:\ProgramData\Uno\Packages\Android\0.19.1\Android\java\lang\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Android.Base.Wrappers.IJWrapper.h>
#include <Android.Base.Wrappers.JWrapper.h>
#include <jni.h>
#include <Uno.IDisposable.h>
namespace g{namespace Android{namespace java{namespace lang{struct Class;}}}}
namespace g{namespace Android{namespace java{namespace lang{struct Object;}}}}
namespace g{namespace Android{namespace java{namespace lang{struct String;}}}}

namespace g{
namespace Android{
namespace java{
namespace lang{

// public extern class Object :11
// {
struct Object_type : ::g::Android::Base::Wrappers::JWrapper_type
{
    void(*fp_equals1)(::g::Android::java::lang::Object*, ::g::Android::java::lang::Object*, bool*);
    void(*fp_hashCode1)(::g::Android::java::lang::Object*, int*);
    void(*fp_toString)(::g::Android::java::lang::Object*, ::g::Android::java::lang::String**);
};

Object_type* Object_typeof();
void Object__ctor_2_fn(Object* __this);
void Object__ctor_3_fn(Object* __this, jobject* obj, uType* utype, bool* hasFallbackClass, bool* resolveType);
void Object___Init1_fn();
void Object__clone_IMPL_31287_fn(bool* arg0_, jobject* arg1_, uObject** __retval);
void Object__equals1_fn(Object* __this, Object* arg0, bool* __retval);
void Object__Equals_fn(Object* __this, uObject* obj, bool* __retval);
void Object__equals_IMPL_31288_fn(bool* arg0_, jobject* arg1_, uObject* arg2_, bool* __retval);
void Object__finalize_IMPL_31289_fn(bool* arg0_, jobject* arg1_);
void Object__getClass_fn(Object* __this, ::g::Android::java::lang::Class** __retval);
void Object__getClass_IMPL_31290_fn(bool* arg0_, jobject* arg1_, uObject** __retval);
void Object__GetHashCode_fn(Object* __this, int* __retval);
void Object__hashCode1_fn(Object* __this, int* __retval);
void Object__hashCode_IMPL_31291_fn(bool* arg0_, jobject* arg1_, int* __retval);
void Object__New3_fn(Object** __retval);
void Object__New4_fn(jobject* obj, uType* utype, bool* hasFallbackClass, bool* resolveType, Object** __retval);
void Object__notify_fn(Object* __this);
void Object__notify_IMPL_31292_fn(bool* arg0_, jobject* arg1_);
void Object__notifyAll_fn(Object* __this);
void Object__notifyAll_IMPL_31293_fn(bool* arg0_, jobject* arg1_);
void Object__op_Equality1_fn(Object* a, Object* b, bool* __retval);
void Object__op_Inequality1_fn(Object* a, Object* b, bool* __retval);
void Object__toString_fn(Object* __this, ::g::Android::java::lang::String** __retval);
void Object__ToString_fn(Object* __this, uString** __retval);
void Object__toString_IMPL_31294_fn(bool* arg0_, jobject* arg1_, uObject** __retval);
void Object__wait_fn(Object* __this);
void Object__wait1_fn(Object* __this, int64_t* arg0);
void Object__wait2_fn(Object* __this, int64_t* arg0, int* arg1);
void Object__wait_IMPL_31295_fn(bool* arg0_, jobject* arg1_);
void Object__wait_IMPL_31296_fn(bool* arg0_, jobject* arg1_, int64_t* arg2_);
void Object__wait_IMPL_31297_fn(bool* arg0_, jobject* arg1_, int64_t* arg2_, int* arg3_);

struct Object : ::g::Android::Base::Wrappers::JWrapper
{
    static jclass _javaClass1_;
    static jclass& _javaClass1() { return _javaClass1_; }
    static jmethodID clone_31287_ID_;
    static jmethodID& clone_31287_ID() { return clone_31287_ID_; }
    static jmethodID equals_31288_ID_;
    static jmethodID& equals_31288_ID() { return equals_31288_ID_; }
    static jmethodID finalize_31289_ID_;
    static jmethodID& finalize_31289_ID() { return finalize_31289_ID_; }
    static jmethodID getClass_31290_ID_;
    static jmethodID& getClass_31290_ID() { return getClass_31290_ID_; }
    static jmethodID hashCode_31291_ID_;
    static jmethodID& hashCode_31291_ID() { return hashCode_31291_ID_; }
    static jmethodID notify_31292_ID_;
    static jmethodID& notify_31292_ID() { return notify_31292_ID_; }
    static jmethodID notifyAll_31293_ID_;
    static jmethodID& notifyAll_31293_ID() { return notifyAll_31293_ID_; }
    static jmethodID Object_31286_ID_c_;
    static jmethodID& Object_31286_ID_c() { return Object_31286_ID_c_; }
    static jmethodID toString_31294_ID_;
    static jmethodID& toString_31294_ID() { return toString_31294_ID_; }
    static jmethodID wait_31295_ID_;
    static jmethodID& wait_31295_ID() { return wait_31295_ID_; }
    static jmethodID wait_31296_ID_;
    static jmethodID& wait_31296_ID() { return wait_31296_ID_; }
    static jmethodID wait_31297_ID_;
    static jmethodID& wait_31297_ID() { return wait_31297_ID_; }

    void ctor_2();
    void ctor_3(jobject obj, uType* utype, bool hasFallbackClass, bool resolveType);
    bool equals1(Object* arg0) { bool __retval; return (((Object_type*)__type)->fp_equals1)(this, arg0, &__retval), __retval; }
    ::g::Android::java::lang::Class* getClass();
    int hashCode1() { int __retval; return (((Object_type*)__type)->fp_hashCode1)(this, &__retval), __retval; }
    void notify();
    void notifyAll();
    ::g::Android::java::lang::String* toString() { ::g::Android::java::lang::String* __retval; return (((Object_type*)__type)->fp_toString)(this, &__retval), __retval; }
    void wait();
    void wait1(int64_t arg0);
    void wait2(int64_t arg0, int arg1);
    static void _Init1();
    static uObject* clone_IMPL_31287(bool arg0_, jobject arg1_);
    static bool equals1(Object* __this, Object* arg0) { bool __retval; return Object__equals1_fn(__this, arg0, &__retval), __retval; }
    static bool equals_IMPL_31288(bool arg0_, jobject arg1_, uObject* arg2_);
    static void finalize_IMPL_31289(bool arg0_, jobject arg1_);
    static uObject* getClass_IMPL_31290(bool arg0_, jobject arg1_);
    static int hashCode1(Object* __this) { int __retval; return Object__hashCode1_fn(__this, &__retval), __retval; }
    static int hashCode_IMPL_31291(bool arg0_, jobject arg1_);
    static Object* New3();
    static Object* New4(jobject obj, uType* utype, bool hasFallbackClass, bool resolveType);
    static void notify_IMPL_31292(bool arg0_, jobject arg1_);
    static void notifyAll_IMPL_31293(bool arg0_, jobject arg1_);
    static bool op_Equality1(Object* a, Object* b);
    static bool op_Inequality1(Object* a, Object* b);
    static ::g::Android::java::lang::String* toString(Object* __this) { ::g::Android::java::lang::String* __retval; return Object__toString_fn(__this, &__retval), __retval; }
    static uObject* toString_IMPL_31294(bool arg0_, jobject arg1_);
    static void wait_IMPL_31295(bool arg0_, jobject arg1_);
    static void wait_IMPL_31296(bool arg0_, jobject arg1_, int64_t arg2_);
    static void wait_IMPL_31297(bool arg0_, jobject arg1_, int64_t arg2_, int arg3_);
};
// }

}}}} // ::g::Android::java::lang
