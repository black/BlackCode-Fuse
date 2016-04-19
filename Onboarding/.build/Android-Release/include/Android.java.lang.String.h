// This file was generated based on 'C:\ProgramData\Uno\Packages\Android\0.20.2\Android\java\lang\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Android.Base.Wrappers.IJWrapper.h>
#include <Android.java.lang.CharSequence.h>
#include <Android.java.lang.Object.h>
#include <jni.h>
#include <Uno.IDisposable.h>
namespace g{namespace Android{namespace java{namespace lang{struct String;}}}}

namespace g{
namespace Android{
namespace java{
namespace lang{

// public sealed extern class String :15741
// {
struct String_type : ::g::Android::java::lang::Object_type
{
    ::g::Android::java::lang::CharSequence interface2;
};

String_type* String_typeof();
void String__ctor_5_fn(String* __this, jobject* obj, uType* utype, bool* hasFallbackClass, bool* resolveType);
void String___Init2_fn();
void String__charAt_fn(String* __this, int* arg0, uChar* __retval);
void String__charAt_IMPL_31531_fn(bool* arg0_, jobject* arg1_, int* arg2_, uChar* __retval);
void String__hashCode1_fn(String* __this, int* __retval);
void String__hashCode_IMPL_31545_fn(bool* arg0_, jobject* arg1_, int* __retval);
void String__length_fn(String* __this, int* __retval);
void String__length_IMPL_31556_fn(bool* arg0_, jobject* arg1_, int* __retval);
void String__New6_fn(jobject* obj, uType* utype, bool* hasFallbackClass, bool* resolveType, String** __retval);
void String__op_Implicit_fn(String* str, uString** __retval);
void String__op_Implicit1_fn(uString* str, String** __retval);
void String__subSequence_fn(String* __this, int* arg0, int* arg1, uObject** __retval);
void String__subSequence_IMPL_31588_fn(bool* arg0_, jobject* arg1_, int* arg2_, int* arg3_, uObject** __retval);
void String__toString_fn(String* __this, String** __retval);
void String__toString_IMPL_31568_fn(bool* arg0_, jobject* arg1_, uObject** __retval);

struct String : ::g::Android::java::lang::Object
{
    static jclass _javaClass2_;
    static jclass& _javaClass2() { return _javaClass2_; }
    static jmethodID charAt_31531_ID_;
    static jmethodID& charAt_31531_ID() { return charAt_31531_ID_; }
    static jmethodID hashCode_31545_ID_;
    static jmethodID& hashCode_31545_ID() { return hashCode_31545_ID_; }
    static jmethodID length_31556_ID_;
    static jmethodID& length_31556_ID() { return length_31556_ID_; }
    static jmethodID subSequence_31588_ID_;
    static jmethodID& subSequence_31588_ID() { return subSequence_31588_ID_; }
    static jmethodID toString_31568_ID_;
    static jmethodID& toString_31568_ID() { return toString_31568_ID_; }

    void ctor_5(jobject obj, uType* utype, bool hasFallbackClass, bool resolveType);
    uChar charAt(int arg0);
    int length();
    uObject* subSequence(int arg0, int arg1);
    static void _Init2();
    static uChar charAt_IMPL_31531(bool arg0_, jobject arg1_, int arg2_);
    static int hashCode_IMPL_31545(bool arg0_, jobject arg1_);
    static int length_IMPL_31556(bool arg0_, jobject arg1_);
    static String* New6(jobject obj, uType* utype, bool hasFallbackClass, bool resolveType);
    static uString* op_Implicit(String* str);
    static String* op_Implicit1(uString* str);
    static uObject* subSequence_IMPL_31588(bool arg0_, jobject arg1_, int arg2_, int arg3_);
    static uObject* toString_IMPL_31568(bool arg0_, jobject arg1_);
};
// }

}}}} // ::g::Android::java::lang
