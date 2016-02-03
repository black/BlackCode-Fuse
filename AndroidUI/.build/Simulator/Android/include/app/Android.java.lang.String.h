// This file was generated based on 'C:\ProgramData\Uno\Packages\Android\0.13.2\Android\java\lang\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_ANDROID_JAVA_LANG_STRING_H__
#define __APP_ANDROID_JAVA_LANG_STRING_H__

#include <app/Android.Base.Wrappers.IJWrapper.h>
#include <app/Android.java.lang.CharSequence.h>
#include <app/Android.java.lang.Object.h>
#include <app/Uno.IDisposable.h>
#include <jni.h>
#include <Uno.h>

namespace app {
namespace Android {
namespace java {
namespace lang {

struct String;

extern jclass String___javaClass_2;
extern jmethodID String__charAt_31531_ID;
extern jmethodID String__equals_31538_ID;
extern jmethodID String__hashCode_31545_ID;
extern jmethodID String__length_31556_ID;
extern jmethodID String__subSequence_31588_ID;
extern jmethodID String__toString_31568_ID;

struct String__uType : ::app::Android::java::lang::Object__uType
{
    ::app::Android::java::lang::CharSequence __interface_2;
};

String__uType* String__typeof();

void String___Init_2(::uStatic* __this);
void String___ObjInit_19(String* __this, jobject obj, ::uType* utype, bool hasFallbackClass, bool resolveType);
::uChar String__charAt(String* __this, int arg0);
::uChar String__charAt_IMPL_31531(::uStatic* __this, bool arg0_, jobject arg1_, int arg2_);
bool String__equals_1(String* __this, ::app::Android::java::lang::Object* arg0);
bool String__equals_IMPL_31538(::uStatic* __this, bool arg0_, jobject arg1_, ::uObject* arg2_);
int String__hashCode_1(String* __this);
int String__hashCode_IMPL_31545(::uStatic* __this, bool arg0_, jobject arg1_);
int String__length(String* __this);
int String__length_IMPL_31556(::uStatic* __this, bool arg0_, jobject arg1_);
String* String__New_20(::uStatic* __this, jobject obj, ::uType* utype, bool hasFallbackClass, bool resolveType);
String* String__op_Implicit(::uStatic* __this, ::uString* str);
::uString* String__op_Implicit_1(::uStatic* __this, String* str);
::uObject* String__subSequence(String* __this, int arg0, int arg1);
::uObject* String__subSequence_IMPL_31588(::uStatic* __this, bool arg0_, jobject arg1_, int arg2_, int arg3_);
String* String__toString(String* __this);
::uObject* String__toString_IMPL_31568(::uStatic* __this, bool arg0_, jobject arg1_);

struct String : ::app::Android::java::lang::Object
{
    void _ObjInit_19(jobject obj, ::uType* utype, bool hasFallbackClass, bool resolveType) { String___ObjInit_19(this, obj, utype, hasFallbackClass, resolveType); }
    ::uChar charAt(int arg0) { return String__charAt(this, arg0); }
    int length() { return String__length(this); }
    ::uObject* subSequence(int arg0, int arg1) { return String__subSequence(this, arg0, arg1); }
};

}}}}


#endif
