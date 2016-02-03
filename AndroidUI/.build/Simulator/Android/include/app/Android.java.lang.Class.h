// This file was generated based on 'C:\ProgramData\Uno\Packages\Android\0.13.2\Android\java\lang\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_ANDROID_JAVA_LANG_CLASS_H__
#define __APP_ANDROID_JAVA_LANG_CLASS_H__

#include <app/Android.Base.Wrappers.IJWrapper.h>
#include <app/Android.java.lang.Object.h>
#include <app/Uno.IDisposable.h>
#include <jni.h>
#include <Uno.h>
namespace app { namespace Android { namespace java { namespace lang { namespace reflect { struct Field; } } } } }
namespace app { namespace Android { namespace java { namespace lang { struct String; } } } }

namespace app {
namespace Android {
namespace java {
namespace lang {

struct Class;

extern jclass Class___javaClass_2;
extern jmethodID Class__forName_30884_ID;
extern jmethodID Class__getDeclaredField_30898_ID;
extern jmethodID Class__toString_30936_ID;

struct Class__uType : ::app::Android::java::lang::Object__uType
{
};

Class__uType* Class__typeof();

void Class___Init_2(::uStatic* __this);
Class* Class__forName(::uStatic* __this, ::app::Android::java::lang::String* arg0);
::uObject* Class__forName_IMPL_30884(::uStatic* __this, ::uObject* arg0_);
::app::Android::java::lang::reflect::Field* Class__getDeclaredField(Class* __this, ::app::Android::java::lang::String* arg0);
::uObject* Class__getDeclaredField_IMPL_30898(::uStatic* __this, bool arg0_, jobject arg1_, ::uObject* arg2_);
::app::Android::java::lang::String* Class__toString(Class* __this);
::uObject* Class__toString_IMPL_30936(::uStatic* __this, bool arg0_, jobject arg1_);

struct Class : ::app::Android::java::lang::Object
{
    ::app::Android::java::lang::reflect::Field* getDeclaredField(::app::Android::java::lang::String* arg0) { return Class__getDeclaredField(this, arg0); }
};

}}}}


#endif
