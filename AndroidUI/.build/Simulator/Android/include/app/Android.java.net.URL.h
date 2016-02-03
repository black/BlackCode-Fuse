// This file was generated based on 'C:\ProgramData\Uno\Packages\Android\0.13.2\Android\java\net\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_ANDROID_JAVA_NET_U_R_L_H__
#define __APP_ANDROID_JAVA_NET_U_R_L_H__

#include <app/Android.Base.Wrappers.IJWrapper.h>
#include <app/Android.java.lang.Object.h>
#include <app/Uno.IDisposable.h>
#include <jni.h>
#include <Uno.h>
namespace app { namespace Android { namespace java { namespace lang { struct String; } } } }

namespace app {
namespace Android {
namespace java {
namespace net {

struct URL;

extern jclass URL___javaClass_2;
extern jmethodID URL__equals_32566_ID;
extern jmethodID URL__getContent_32569_ID;
extern jmethodID URL__hashCode_32568_ID;
extern jmethodID URL__toString_32575_ID;
extern jmethodID URL__URL_32558_ID_c;

struct URL__uType : ::app::Android::java::lang::Object__uType
{
};

URL__uType* URL__typeof();

void URL___Init_2(::uStatic* __this);
void URL___ObjInit_4(URL* __this, ::app::Android::java::lang::String* arg0);
bool URL__equals_1(URL* __this, ::app::Android::java::lang::Object* arg0);
bool URL__equals_IMPL_32566(::uStatic* __this, bool arg0_, jobject arg1_, ::uObject* arg2_);
::app::Android::java::lang::Object* URL__getContent(URL* __this);
::uObject* URL__getContent_IMPL_32569(::uStatic* __this, bool arg0_, jobject arg1_);
int URL__hashCode_1(URL* __this);
int URL__hashCode_IMPL_32568(::uStatic* __this, bool arg0_, jobject arg1_);
URL* URL__New_5(::uStatic* __this, ::app::Android::java::lang::String* arg0);
::app::Android::java::lang::String* URL__toString(URL* __this);
::uObject* URL__toString_IMPL_32575(::uStatic* __this, bool arg0_, jobject arg1_);

struct URL : ::app::Android::java::lang::Object
{
    void _ObjInit_4(::app::Android::java::lang::String* arg0) { URL___ObjInit_4(this, arg0); }
    ::app::Android::java::lang::Object* getContent() { return URL__getContent(this); }
};

}}}}


#endif
