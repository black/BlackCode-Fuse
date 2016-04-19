// This file was generated based on '(multiple files)'.
// WARNING: Changes might be lost if you edit this file directly.

#include <Android.Base.AndroidBindingMacros.h>
#include <Android.Base.JNI.h>
#include <Android.Base.Primitives.jmethodID.h>
#include <Android.Base.Primitives.ujclass.h>
#include <Android.Base.Primitives.ujobject.h>
#include <Android.Base.Wrappers.JWrapper.h>
#include <Android.java.lang.Object.h>
#include <Android.java.lang.reflect.AccessibleObject.h>
#include <Android.java.lang.reflect.Field.h>
#include <Android.java.lang.String.h>
#include <Uno.Bool.h>
#include <Uno.Exception.h>
#include <Uno.Int.h>
static uType* TYPES[4];

namespace g{
namespace Android{
namespace java{
namespace lang{
namespace reflect{

// C:\ProgramData\Uno\Packages\Android\0.20.2\Android\java\lang\reflect\$.uno(11)
// ------------------------------------------------------------------------------

// public extern class AccessibleObject :11
// {
::g::Android::java::lang::Object_type* AccessibleObject_typeof()
{
    static uSStrong< ::g::Android::java::lang::Object_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 7;
    options.InterfaceCount = 2;
    options.ObjectSize = sizeof(AccessibleObject);
    options.TypeSize = sizeof(::g::Android::java::lang::Object_type);
    type = (::g::Android::java::lang::Object_type*)uClassType::New("Android.java.lang.reflect.AccessibleObject", options);
    type->SetBase(::g::Android::java::lang::Object_typeof());
    type->interface0.fp__GetJavaObject = (void(*)(uObject*, jobject*))::g::Android::Base::Wrappers::JWrapper___GetJavaObject_fn;
    type->interface0.fp__IsSubclassed = (void(*)(uObject*, bool*))::g::Android::Base::Wrappers::JWrapper___IsSubclassed_fn;
    type->interface1.fp_Dispose = (void(*)(uObject*))::g::Android::Base::Wrappers::JWrapper__Uno_IDisposable_Dispose_fn;
    ::TYPES[0] = ::g::Android::Base::Wrappers::JWrapper_typeof();
    type->SetInterfaces(
        ::g::Android::Base::Wrappers::IJWrapper_typeof(), offsetof(::g::Android::java::lang::Object_type, interface0),
        ::g::Uno::IDisposable_typeof(), offsetof(::g::Android::java::lang::Object_type, interface1));
    type->SetFields(5,
        ::g::Android::Base::Primitives::ujclass_typeof(), (uintptr_t)&::g::Android::java::lang::reflect::AccessibleObject::_javaClass2_, uFieldFlagsStatic,
        ::g::Android::Base::Primitives::jmethodID_typeof(), (uintptr_t)&::g::Android::java::lang::reflect::AccessibleObject::setAccessible_30251_ID_, uFieldFlagsStatic);
    return type;
}

// public static extern new void _Init() :15
void AccessibleObject___Init2_fn()
{
    AccessibleObject::_Init2();
}

// public void setAccessible(bool arg0) :45
void AccessibleObject__setAccessible1_fn(AccessibleObject* __this, bool* arg0)
{
    __this->setAccessible1(*arg0);
}

// public static extern void setAccessible_IMPL_30251(bool arg0, Android.Base.Primitives.ujobject arg1, bool arg2) :83
void AccessibleObject__setAccessible_IMPL_30251_fn(bool* arg0_, jobject* arg1_, bool* arg2_)
{
    AccessibleObject::setAccessible_IMPL_30251(*arg0_, *arg1_, *arg2_);
}

jclass AccessibleObject::_javaClass2_;
jmethodID AccessibleObject::setAccessible_30251_ID_;

// public void setAccessible(bool arg0) [instance] :45
void AccessibleObject::setAccessible1(bool arg0)
{
    bool arg0_ = arg0;
    AccessibleObject::setAccessible_IMPL_30251(_subclassed, _javaObject, arg0_);
}

// public static extern new void _Init() [static] :15
void AccessibleObject::_Init2()
{
    if (AccessibleObject::_javaClass2()) { return; }
    INIT_JNI;
    AccessibleObject::_javaClass2() = NEW_GLOBAL_REF(jclass,LOAD_SYS_CLASS("java/lang/reflect/AccessibleObject"));
    ::g::Android::Base::JNI::CheckException1(U_JNIVAR);
    if (!AccessibleObject::_javaClass2()) { THROW_UNO_EXCEPTION("Unable to cache class 'java.lang.reflect.AccessibleObject'", 58);; }
}

// public static extern void setAccessible_IMPL_30251(bool arg0, Android.Base.Primitives.ujobject arg1, bool arg2) [static] :83
void AccessibleObject::setAccessible_IMPL_30251(bool arg0_, jobject arg1_, bool arg2_)
{
    INIT_JNI;
    CLASS_INIT(AccessibleObject::_javaClass2(),AccessibleObject::_Init2());
    
    CACHE_METHOD(AccessibleObject::setAccessible_30251_ID(),AccessibleObject::_javaClass2(),"setAccessible","(Z)V",GetMethodID,"Id for fallback method java.lang.reflect.AccessibleObject.setAccessible could not be cached",91);
    if (arg0_) {
        U_JNIVAR->CallNonvirtualVoidMethod(arg1_, AccessibleObject::_javaClass2(), AccessibleObject::setAccessible_30251_ID(), ((jboolean)arg2_));
    }
    else
    {
        U_JNIVAR->CallVoidMethod(arg1_, AccessibleObject::setAccessible_30251_ID(), ((jboolean)arg2_));
    }
    ::g::Android::Base::JNI::CheckException1(U_JNIVAR);
}
// }

// C:\ProgramData\Uno\Packages\Android\0.20.2\Android\java\lang\reflect\$.uno(510)
// -------------------------------------------------------------------------------

// public sealed extern class Field :510
// {
::g::Android::java::lang::Object_type* Field_typeof()
{
    static uSStrong< ::g::Android::java::lang::Object_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 11;
    options.InterfaceCount = 2;
    options.ObjectSize = sizeof(Field);
    options.TypeSize = sizeof(::g::Android::java::lang::Object_type);
    type = (::g::Android::java::lang::Object_type*)uClassType::New("Android.java.lang.reflect.Field", options);
    type->SetBase(::g::Android::java::lang::reflect::AccessibleObject_typeof());
    type->fp_hashCode1 = (void(*)(::g::Android::java::lang::Object*, int*))Field__hashCode1_fn;
    type->fp_toString = (void(*)(::g::Android::java::lang::Object*, ::g::Android::java::lang::String**))Field__toString_fn;
    type->interface0.fp__GetJavaObject = (void(*)(uObject*, jobject*))::g::Android::Base::Wrappers::JWrapper___GetJavaObject_fn;
    type->interface0.fp__IsSubclassed = (void(*)(uObject*, bool*))::g::Android::Base::Wrappers::JWrapper___IsSubclassed_fn;
    type->interface1.fp_Dispose = (void(*)(uObject*))::g::Android::Base::Wrappers::JWrapper__Uno_IDisposable_Dispose_fn;
    ::TYPES[1] = ::g::Android::java::lang::Object_typeof();
    ::TYPES[0] = ::g::Android::Base::Wrappers::JWrapper_typeof();
    ::TYPES[2] = ::g::Android::Base::Wrappers::IJWrapper_typeof();
    ::TYPES[3] = ::g::Android::java::lang::String_typeof();
    type->SetInterfaces(
        ::g::Android::Base::Wrappers::IJWrapper_typeof(), offsetof(::g::Android::java::lang::Object_type, interface0),
        ::g::Uno::IDisposable_typeof(), offsetof(::g::Android::java::lang::Object_type, interface1));
    type->SetFields(5,
        ::g::Android::Base::Primitives::ujclass_typeof(), (uintptr_t)&::g::Android::java::lang::reflect::Field::_javaClass3_, uFieldFlagsStatic,
        ::g::Android::Base::Primitives::jmethodID_typeof(), (uintptr_t)&::g::Android::java::lang::reflect::Field::get_30311_ID_, uFieldFlagsStatic,
        ::g::Android::Base::Primitives::jmethodID_typeof(), (uintptr_t)&::g::Android::java::lang::reflect::Field::getInt_30318_ID_, uFieldFlagsStatic,
        ::g::Android::Base::Primitives::jmethodID_typeof(), (uintptr_t)&::g::Android::java::lang::reflect::Field::hashCode_30324_ID_, uFieldFlagsStatic,
        ::g::Android::Base::Primitives::jmethodID_typeof(), (uintptr_t)&::g::Android::java::lang::reflect::Field::set_30325_ID_, uFieldFlagsStatic,
        ::g::Android::Base::Primitives::jmethodID_typeof(), (uintptr_t)&::g::Android::java::lang::reflect::Field::toString_30334_ID_, uFieldFlagsStatic);
    return type;
}

// public static extern new void _Init() :514
void Field___Init3_fn()
{
    Field::_Init3();
}

// public Android.java.lang.Object get(Android.java.lang.Object arg0) :565
void Field__get_fn(Field* __this, ::g::Android::java::lang::Object* arg0, ::g::Android::java::lang::Object** __retval)
{
    *__retval = __this->get(arg0);
}

// public static extern Android.Base.Wrappers.IJWrapper get_IMPL_30311(bool arg0, Android.Base.Primitives.ujobject arg1, Android.Base.Wrappers.IJWrapper arg2) :734
void Field__get_IMPL_30311_fn(bool* arg0_, jobject* arg1_, uObject* arg2_, uObject** __retval)
{
    *__retval = Field::get_IMPL_30311(*arg0_, *arg1_, arg2_);
}

// public int getInt(Android.java.lang.Object arg0) :607
void Field__getInt_fn(Field* __this, ::g::Android::java::lang::Object* arg0, int* __retval)
{
    *__retval = __this->getInt(arg0);
}

// public static extern int getInt_IMPL_30318(bool arg0, Android.Base.Primitives.ujobject arg1, Android.Base.Wrappers.IJWrapper arg2) :755
void Field__getInt_IMPL_30318_fn(bool* arg0_, jobject* arg1_, uObject* arg2_, int* __retval)
{
    *__retval = Field::getInt_IMPL_30318(*arg0_, *arg1_, arg2_);
}

// public override sealed int hashCode() :643
void Field__hashCode1_fn(Field* __this, int* __retval)
{
    return *__retval = Field::hashCode_IMPL_30324(__this->_subclassed, __this->_javaObject), void();
}

// public static extern int hashCode_IMPL_30324(bool arg0, Android.Base.Primitives.ujobject arg1) :773
void Field__hashCode_IMPL_30324_fn(bool* arg0_, jobject* arg1_, int* __retval)
{
    *__retval = Field::hashCode_IMPL_30324(*arg0_, *arg1_);
}

// public void set(Android.java.lang.Object arg0, Android.java.lang.Object arg1) :649
void Field__set_fn(Field* __this, ::g::Android::java::lang::Object* arg0, ::g::Android::java::lang::Object* arg1)
{
    __this->set(arg0, arg1);
}

// public static extern void set_IMPL_30325(bool arg0, Android.Base.Primitives.ujobject arg1, Android.Base.Wrappers.IJWrapper arg2, Android.Base.Wrappers.IJWrapper arg3) :776
void Field__set_IMPL_30325_fn(bool* arg0_, jobject* arg1_, uObject* arg2_, uObject* arg3_)
{
    Field::set_IMPL_30325(*arg0_, *arg1_, arg2_, arg3_);
}

// public override sealed Android.java.lang.String toString() :703
void Field__toString_fn(Field* __this, ::g::Android::java::lang::String** __retval)
{
    return *__retval = uCast< ::g::Android::java::lang::String*>(Field::toString_IMPL_30334(__this->_subclassed, __this->_javaObject), ::TYPES[3/*Android.java.lang.String*/]), void();
}

// public static extern Android.Base.Wrappers.IJWrapper toString_IMPL_30334(bool arg0, Android.Base.Primitives.ujobject arg1) :803
void Field__toString_IMPL_30334_fn(bool* arg0_, jobject* arg1_, uObject** __retval)
{
    *__retval = Field::toString_IMPL_30334(*arg0_, *arg1_);
}

jclass Field::_javaClass3_;
jmethodID Field::get_30311_ID_;
jmethodID Field::getInt_30318_ID_;
jmethodID Field::hashCode_30324_ID_;
jmethodID Field::set_30325_ID_;
jmethodID Field::toString_30334_ID_;

// public Android.java.lang.Object get(Android.java.lang.Object arg0) [instance] :565
::g::Android::java::lang::Object* Field::get(::g::Android::java::lang::Object* arg0)
{
    return uCast< ::g::Android::java::lang::Object*>(Field::get_IMPL_30311(_subclassed, _javaObject, (uObject*)arg0), ::TYPES[1/*Android.java.lang.Object*/]);
}

// public int getInt(Android.java.lang.Object arg0) [instance] :607
int Field::getInt(::g::Android::java::lang::Object* arg0)
{
    return Field::getInt_IMPL_30318(_subclassed, _javaObject, (uObject*)arg0);
}

// public void set(Android.java.lang.Object arg0, Android.java.lang.Object arg1) [instance] :649
void Field::set(::g::Android::java::lang::Object* arg0, ::g::Android::java::lang::Object* arg1)
{
    Field::set_IMPL_30325(_subclassed, _javaObject, (uObject*)arg0, (uObject*)arg1);
}

// public static extern new void _Init() [static] :514
void Field::_Init3()
{
    if (Field::_javaClass3()) { return; }
    INIT_JNI;
    Field::_javaClass3() = NEW_GLOBAL_REF(jclass,LOAD_SYS_CLASS("java/lang/reflect/Field"));
    ::g::Android::Base::JNI::CheckException1(U_JNIVAR);
    if (!Field::_javaClass3()) { THROW_UNO_EXCEPTION("Unable to cache class 'java.lang.reflect.Field'", 47);; }
}

// public static extern Android.Base.Wrappers.IJWrapper get_IMPL_30311(bool arg0, Android.Base.Primitives.ujobject arg1, Android.Base.Wrappers.IJWrapper arg2) [static] :734
uObject* Field::get_IMPL_30311(bool arg0_, jobject arg1_, uObject* arg2_)
{
    INIT_JNI;
    CLASS_INIT(Field::_javaClass3(),Field::_Init3());
    jobject _obArg2 = ((!arg2_) ? NULL : ::g::Android::Base::Wrappers::IJWrapper::_GetJavaObject(uInterface(arg2_, ::g::Android::Base::Wrappers::IJWrapper_typeof())));
    uObject* result;
    CACHE_METHOD(Field::get_30311_ID(),Field::_javaClass3(),"get","(Ljava/lang/Object;)Ljava/lang/Object;",GetMethodID,"Id for fallback method java.lang.reflect.Field.get could not be cached",70);
    if (arg0_) {
        NEW_UNO(U_JNIVAR->CallNonvirtualObjectMethod(arg1_, Field::_javaClass3(), Field::get_30311_ID(), _obArg2),result,::g::Android::java::lang::Object_typeof(),::g::Android::java::lang::Object*,false,true);
    }
    else
    {
        NEW_UNO(U_JNIVAR->CallObjectMethod(arg1_, Field::get_30311_ID(), _obArg2),result,::g::Android::java::lang::Object_typeof(),::g::Android::java::lang::Object*,false,true);
    }
    ::g::Android::Base::JNI::CheckException1(U_JNIVAR);
    return result;
}

// public static extern int getInt_IMPL_30318(bool arg0, Android.Base.Primitives.ujobject arg1, Android.Base.Wrappers.IJWrapper arg2) [static] :755
int Field::getInt_IMPL_30318(bool arg0_, jobject arg1_, uObject* arg2_)
{
    INIT_JNI;
    CLASS_INIT(Field::_javaClass3(),Field::_Init3());
    jobject _obArg2 = ((!arg2_) ? NULL : ::g::Android::Base::Wrappers::IJWrapper::_GetJavaObject(uInterface(arg2_, ::g::Android::Base::Wrappers::IJWrapper_typeof())));
    int result;
    CACHE_METHOD(Field::getInt_30318_ID(),Field::_javaClass3(),"getInt","(Ljava/lang/Object;)I",GetMethodID,"Id for fallback method java.lang.reflect.Field.getInt could not be cached",73);
    if (arg0_) {
        result = ((int)U_JNIVAR->CallNonvirtualIntMethod(arg1_, Field::_javaClass3(), Field::getInt_30318_ID(), _obArg2));
    }
    else
    {
        result = ((int)U_JNIVAR->CallIntMethod(arg1_, Field::getInt_30318_ID(), _obArg2));
    }
    ::g::Android::Base::JNI::CheckException1(U_JNIVAR);
    return result;
}

// public static extern int hashCode_IMPL_30324(bool arg0, Android.Base.Primitives.ujobject arg1) [static] :773
int Field::hashCode_IMPL_30324(bool arg0_, jobject arg1_)
{
    INIT_JNI;
    CLASS_INIT(Field::_javaClass3(),Field::_Init3());
    
    int result;
    CACHE_METHOD(Field::hashCode_30324_ID(),Field::_javaClass3(),"hashCode","()I",GetMethodID,"Id for fallback method java.lang.reflect.Field.hashCode could not be cached",75);
    if (arg0_) {
        result = ((int)U_JNIVAR->CallNonvirtualIntMethod(arg1_, Field::_javaClass3(), Field::hashCode_30324_ID()));
    }
    else
    {
        result = ((int)U_JNIVAR->CallIntMethod(arg1_, Field::hashCode_30324_ID()));
    }
    ::g::Android::Base::JNI::CheckException1(U_JNIVAR);
    return result;
}

// public static extern void set_IMPL_30325(bool arg0, Android.Base.Primitives.ujobject arg1, Android.Base.Wrappers.IJWrapper arg2, Android.Base.Wrappers.IJWrapper arg3) [static] :776
void Field::set_IMPL_30325(bool arg0_, jobject arg1_, uObject* arg2_, uObject* arg3_)
{
    INIT_JNI;
    CLASS_INIT(Field::_javaClass3(),Field::_Init3());
    jobject _obArg2 = ((!arg2_) ? NULL : ::g::Android::Base::Wrappers::IJWrapper::_GetJavaObject(uInterface(arg2_, ::g::Android::Base::Wrappers::IJWrapper_typeof())));
    jobject _obArg3 = ((!arg3_) ? NULL : ::g::Android::Base::Wrappers::IJWrapper::_GetJavaObject(uInterface(arg3_, ::g::Android::Base::Wrappers::IJWrapper_typeof())));
    CACHE_METHOD(Field::set_30325_ID(),Field::_javaClass3(),"set","(Ljava/lang/Object;Ljava/lang/Object;)V",GetMethodID,"Id for fallback method java.lang.reflect.Field.set could not be cached",70);
    if (arg0_) {
        U_JNIVAR->CallNonvirtualVoidMethod(arg1_, Field::_javaClass3(), Field::set_30325_ID(), _obArg2, _obArg3);
    }
    else
    {
        U_JNIVAR->CallVoidMethod(arg1_, Field::set_30325_ID(), _obArg2, _obArg3);
    }
    ::g::Android::Base::JNI::CheckException1(U_JNIVAR);
}

// public static extern Android.Base.Wrappers.IJWrapper toString_IMPL_30334(bool arg0, Android.Base.Primitives.ujobject arg1) [static] :803
uObject* Field::toString_IMPL_30334(bool arg0_, jobject arg1_)
{
    INIT_JNI;
    CLASS_INIT(Field::_javaClass3(),Field::_Init3());
    
    uObject* result;
    CACHE_METHOD(Field::toString_30334_ID(),Field::_javaClass3(),"toString","()Ljava/lang/String;",GetMethodID,"Id for fallback method java.lang.reflect.Field.toString could not be cached",75);
    if (arg0_) {
        NEW_UNO(U_JNIVAR->CallNonvirtualObjectMethod(arg1_, Field::_javaClass3(), Field::toString_30334_ID()),result,::g::Android::java::lang::String_typeof(),::g::Android::java::lang::String*,false,true);
    }
    else
    {
        NEW_UNO(U_JNIVAR->CallObjectMethod(arg1_, Field::toString_30334_ID()),result,::g::Android::java::lang::String_typeof(),::g::Android::java::lang::String*,false,true);
    }
    ::g::Android::Base::JNI::CheckException1(U_JNIVAR);
    return result;
}
// }

}}}}} // ::g::Android::java::lang::reflect
