// This file was generated based on 'C:\ProgramData\Uno\Packages\Android\0.13.2\Android\java\lang\reflect\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_ANDROID_JAVA_LANG_REFLECT_FIELD_H__
#define __APP_ANDROID_JAVA_LANG_REFLECT_FIELD_H__

#include <app/Android.Base.Wrappers.IJWrapper.h>
#include <app/Android.java.lang.reflect.AccessibleObject.h>
#include <app/Uno.IDisposable.h>
#include <jni.h>
#include <Uno.h>
namespace app { namespace Android { namespace java { namespace lang { struct Object; } } } }
namespace app { namespace Android { namespace java { namespace lang { struct String; } } } }

namespace app {
namespace Android {
namespace java {
namespace lang {
namespace reflect {

struct Field;

extern jclass Field___javaClass_3;
extern jmethodID Field__equals_30310_ID;
extern jmethodID Field__get_30311_ID;
extern jmethodID Field__getInt_30318_ID;
extern jmethodID Field__hashCode_30324_ID;
extern jmethodID Field__set_30325_ID;
extern jmethodID Field__toString_30334_ID;

struct Field__uType : ::app::Android::java::lang::reflect::AccessibleObject__uType
{
};

Field__uType* Field__typeof();

void Field___Init_3(::uStatic* __this);
bool Field__equals_1(Field* __this, ::app::Android::java::lang::Object* arg0);
bool Field__equals_IMPL_30310(::uStatic* __this, bool arg0_, jobject arg1_, ::uObject* arg2_);
::app::Android::java::lang::Object* Field__get(Field* __this, ::app::Android::java::lang::Object* arg0);
::uObject* Field__get_IMPL_30311(::uStatic* __this, bool arg0_, jobject arg1_, ::uObject* arg2_);
int Field__getInt(Field* __this, ::app::Android::java::lang::Object* arg0);
int Field__getInt_IMPL_30318(::uStatic* __this, bool arg0_, jobject arg1_, ::uObject* arg2_);
int Field__hashCode_1(Field* __this);
int Field__hashCode_IMPL_30324(::uStatic* __this, bool arg0_, jobject arg1_);
void Field__set(Field* __this, ::app::Android::java::lang::Object* arg0, ::app::Android::java::lang::Object* arg1);
void Field__set_IMPL_30325(::uStatic* __this, bool arg0_, jobject arg1_, ::uObject* arg2_, ::uObject* arg3_);
::app::Android::java::lang::String* Field__toString(Field* __this);
::uObject* Field__toString_IMPL_30334(::uStatic* __this, bool arg0_, jobject arg1_);

struct Field : ::app::Android::java::lang::reflect::AccessibleObject
{
    ::app::Android::java::lang::Object* get(::app::Android::java::lang::Object* arg0) { return Field__get(this, arg0); }
    int getInt(::app::Android::java::lang::Object* arg0) { return Field__getInt(this, arg0); }
    void set(::app::Android::java::lang::Object* arg0, ::app::Android::java::lang::Object* arg1) { Field__set(this, arg0, arg1); }
};

}}}}}


#endif
