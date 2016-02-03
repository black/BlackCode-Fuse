// This file was generated based on 'C:\ProgramData\Uno\Packages\Android\0.13.2\Android\java\lang\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_ANDROID_JAVA_LANG_OBJECT_H__
#define __APP_ANDROID_JAVA_LANG_OBJECT_H__

#include <app/Android.Base.Wrappers.IJWrapper.h>
#include <app/Android.Base.Wrappers.JWrapper.h>
#include <app/Uno.IDisposable.h>
#include <jni.h>
#include <Uno.h>
namespace app { namespace Android { namespace java { namespace lang { struct Class; } } } }
namespace app { namespace Android { namespace java { namespace lang { struct String; } } } }

namespace app {
namespace Android {
namespace java {
namespace lang {

struct Object;

extern jclass Object___javaClass_1;
extern jmethodID Object__clone_31287_ID;
extern jmethodID Object__equals_31288_ID;
extern jmethodID Object__finalize_31289_ID;
extern jmethodID Object__getClass_31290_ID;
extern jmethodID Object__hashCode_31291_ID;
extern jmethodID Object__notify_31292_ID;
extern jmethodID Object__notifyAll_31293_ID;
extern jmethodID Object__Object_31286_ID_c;
extern jmethodID Object__toString_31294_ID;
extern jmethodID Object__wait_31295_ID;
extern jmethodID Object__wait_31296_ID;
extern jmethodID Object__wait_31297_ID;

struct Object__uType : ::app::Android::Base::Wrappers::JWrapper__uType
{
    bool(*__fp_equals_1)(Object*, Object*);
    void(*__fp_finalize)(Object*);
    int(*__fp_hashCode_1)(Object*);
    ::app::Android::java::lang::String*(*__fp_toString)(Object*);
};

Object__uType* Object__typeof();

void Object___Init_1(::uStatic* __this);
void Object___ObjInit_2(Object* __this);
void Object___ObjInit_3(Object* __this, jobject obj, ::uType* utype, bool hasFallbackClass, bool resolveType);
Object* Object__clone(Object* __this);
::uObject* Object__clone_IMPL_31287(::uStatic* __this, bool arg0_, jobject arg1_);
bool Object__Equals(Object* __this, ::uObject* obj);
bool Object__equals_1(Object* __this, Object* arg0);
bool Object__equals_IMPL_31288(::uStatic* __this, bool arg0_, jobject arg1_, ::uObject* arg2_);
void Object__finalize(Object* __this);
void Object__finalize_IMPL_31289(::uStatic* __this, bool arg0_, jobject arg1_);
::app::Android::java::lang::Class* Object__getClass(Object* __this);
::uObject* Object__getClass_IMPL_31290(::uStatic* __this, bool arg0_, jobject arg1_);
int Object__GetHashCode(Object* __this);
int Object__hashCode_1(Object* __this);
int Object__hashCode_IMPL_31291(::uStatic* __this, bool arg0_, jobject arg1_);
Object* Object__New_3(::uStatic* __this);
Object* Object__New_4(::uStatic* __this, jobject obj, ::uType* utype, bool hasFallbackClass, bool resolveType);
void Object__notify(Object* __this);
void Object__notify_IMPL_31292(::uStatic* __this, bool arg0_, jobject arg1_);
void Object__notifyAll(Object* __this);
void Object__notifyAll_IMPL_31293(::uStatic* __this, bool arg0_, jobject arg1_);
bool Object__op_Equality_1(::uStatic* __this, Object* a, Object* b);
bool Object__op_Inequality_1(::uStatic* __this, Object* a, Object* b);
::app::Android::java::lang::String* Object__toString(Object* __this);
::uString* Object__ToString(Object* __this);
::uObject* Object__toString_IMPL_31294(::uStatic* __this, bool arg0_, jobject arg1_);
void Object__wait(Object* __this);
void Object__wait_1(Object* __this, ::uLong arg0);
void Object__wait_2(Object* __this, ::uLong arg0, int arg1);
void Object__wait_IMPL_31295(::uStatic* __this, bool arg0_, jobject arg1_);
void Object__wait_IMPL_31296(::uStatic* __this, bool arg0_, jobject arg1_, ::uLong arg2_);
void Object__wait_IMPL_31297(::uStatic* __this, bool arg0_, jobject arg1_, ::uLong arg2_, int arg3_);

struct Object : ::app::Android::Base::Wrappers::JWrapper
{
    void _ObjInit_2() { Object___ObjInit_2(this); }
    void _ObjInit_3(jobject obj, ::uType* utype, bool hasFallbackClass, bool resolveType) { Object___ObjInit_3(this, obj, utype, hasFallbackClass, resolveType); }
    Object* clone() { return Object__clone(this); }
    bool equals_1(Object* arg0) { return (((Object__uType*)this->__obj_type)->__fp_equals_1)(this, arg0); }
    void finalize() { (((Object__uType*)this->__obj_type)->__fp_finalize)(this); }
    ::app::Android::java::lang::Class* getClass() { return Object__getClass(this); }
    int hashCode_1() { return (((Object__uType*)this->__obj_type)->__fp_hashCode_1)(this); }
    void notify() { Object__notify(this); }
    void notifyAll() { Object__notifyAll(this); }
    ::app::Android::java::lang::String* toString() { return (((Object__uType*)this->__obj_type)->__fp_toString)(this); }
    void wait() { Object__wait(this); }
    void wait_1(::uLong arg0) { Object__wait_1(this, arg0); }
    void wait_2(::uLong arg0, int arg1) { Object__wait_2(this, arg0, arg1); }
};

}}}}


#endif
