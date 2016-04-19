// This file was generated based on '(multiple files)'.
// WARNING: Changes might be lost if you edit this file directly.

#include <Android.Base.AndroidBindingMacros.h>
#include <Android.Base.JNI.h>
#include <Android.Base.Primitives.jmethodID.h>
#include <Android.Base.Primitives.JNIEnvPtr.h>
#include <Android.Base.Primitives.ujclass.h>
#include <Android.Base.Primitives.ujobject.h>
#include <Android.Base.Types.String.h>
#include <Android.Base.Wrappers.JWrapper.h>
#include <Android.Fallbacks.Android_java_lang_CharSequence.h>
#include <Android.Fallbacks.Android_java_lang_Runnable.h>
#include <Android.java.lang.CharSequence.h>
#include <Android.java.lang.Class.h>
#include <Android.java.lang.Object.h>
#include <Android.java.lang.reflect.Field.h>
#include <Android.java.lang.Runnable.h>
#include <Android.java.lang.String.h>
#include <Android.java.lang.System.h>
#include <Android.java.lang.Thread.h>
#include <Uno.Bool.h>
#include <Uno.Char.h>
#include <Uno.Exception.h>
#include <Uno.Int.h>
#include <Uno.Long.h>
#include <Uno.Object.h>
#include <Uno.String.h>
#include <Uno.Type.h>
static uType* TYPES[8];

namespace g{
namespace Android{
namespace java{
namespace lang{

// C:\ProgramData\Uno\Packages\Android\0.20.2\Android\java\lang\$.uno(18744)
// -------------------------------------------------------------------------

// public abstract extern interface CharSequence :18744
// {
uInterfaceType* CharSequence_typeof()
{
    static uSStrong<uInterfaceType*> type;
    if (type != NULL) return type;

    type = uInterfaceType::New("Android.java.lang.CharSequence", 0, 0);
    return type;
}
// }

// C:\ProgramData\Uno\Packages\Android\0.20.2\Android\java\lang\$.uno(9021)
// ------------------------------------------------------------------------

// public sealed extern class Class :9021
// {
::g::Android::java::lang::Object_type* Class_typeof()
{
    static uSStrong< ::g::Android::java::lang::Object_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 9;
    options.InterfaceCount = 2;
    options.ObjectSize = sizeof(Class);
    options.TypeSize = sizeof(::g::Android::java::lang::Object_type);
    type = (::g::Android::java::lang::Object_type*)uClassType::New("Android.java.lang.Class", options);
    type->SetBase(::g::Android::java::lang::Object_typeof());
    type->fp_toString = (void(*)(::g::Android::java::lang::Object*, ::g::Android::java::lang::String**))Class__toString_fn;
    type->interface0.fp__GetJavaObject = (void(*)(uObject*, jobject*))::g::Android::Base::Wrappers::JWrapper___GetJavaObject_fn;
    type->interface0.fp__IsSubclassed = (void(*)(uObject*, bool*))::g::Android::Base::Wrappers::JWrapper___IsSubclassed_fn;
    type->interface1.fp_Dispose = (void(*)(uObject*))::g::Android::Base::Wrappers::JWrapper__Uno_IDisposable_Dispose_fn;
    ::TYPES[0] = ::g::Android::Base::Wrappers::IJWrapper_typeof();
    ::TYPES[1] = ::g::Android::java::lang::reflect::Field_typeof();
    ::TYPES[2] = ::g::Android::Base::Wrappers::JWrapper_typeof();
    ::TYPES[3] = ::g::Android::java::lang::String_typeof();
    type->SetInterfaces(
        ::g::Android::Base::Wrappers::IJWrapper_typeof(), offsetof(::g::Android::java::lang::Object_type, interface0),
        ::g::Uno::IDisposable_typeof(), offsetof(::g::Android::java::lang::Object_type, interface1));
    type->SetFields(5,
        ::g::Android::Base::Primitives::ujclass_typeof(), (uintptr_t)&::g::Android::java::lang::Class::_javaClass2_, uFieldFlagsStatic,
        ::g::Android::Base::Primitives::jmethodID_typeof(), (uintptr_t)&::g::Android::java::lang::Class::forName_30884_ID_, uFieldFlagsStatic,
        ::g::Android::Base::Primitives::jmethodID_typeof(), (uintptr_t)&::g::Android::java::lang::Class::getDeclaredField_30898_ID_, uFieldFlagsStatic,
        ::g::Android::Base::Primitives::jmethodID_typeof(), (uintptr_t)&::g::Android::java::lang::Class::toString_30936_ID_, uFieldFlagsStatic);
    return type;
}

// public static extern new void _Init() :9025
void Class___Init2_fn()
{
    Class::_Init2();
}

// public static Android.java.lang.Class forName(Android.java.lang.String arg0) :9028
void Class__forName_fn(::g::Android::java::lang::String* arg0, Class** __retval)
{
    *__retval = Class::forName(arg0);
}

// public static extern Android.Base.Wrappers.IJWrapper forName_IMPL_30884(Android.Base.Wrappers.IJWrapper arg0) :9371
void Class__forName_IMPL_30884_fn(uObject* arg0_, uObject** __retval)
{
    *__retval = Class::forName_IMPL_30884(arg0_);
}

// public Android.java.lang.reflect.Field getDeclaredField(Android.java.lang.String arg0) :9112
void Class__getDeclaredField_fn(Class* __this, ::g::Android::java::lang::String* arg0, ::g::Android::java::lang::reflect::Field** __retval)
{
    *__retval = __this->getDeclaredField(arg0);
}

// public static extern Android.Base.Wrappers.IJWrapper getDeclaredField_IMPL_30898(bool arg0, Android.Base.Primitives.ujobject arg1, Android.Base.Wrappers.IJWrapper arg2) :9413
void Class__getDeclaredField_IMPL_30898_fn(bool* arg0_, jobject* arg1_, uObject* arg2_, uObject** __retval)
{
    *__retval = Class::getDeclaredField_IMPL_30898(*arg0_, *arg1_, arg2_);
}

// public override sealed Android.java.lang.String toString() :9340
void Class__toString_fn(Class* __this, ::g::Android::java::lang::String** __retval)
{
    return *__retval = uCast< ::g::Android::java::lang::String*>(Class::toString_IMPL_30936(__this->_subclassed, __this->_javaObject), ::TYPES[3/*Android.java.lang.String*/]), void();
}

// public static extern Android.Base.Wrappers.IJWrapper toString_IMPL_30936(bool arg0, Android.Base.Primitives.ujobject arg1) :9527
void Class__toString_IMPL_30936_fn(bool* arg0_, jobject* arg1_, uObject** __retval)
{
    *__retval = Class::toString_IMPL_30936(*arg0_, *arg1_);
}

jclass Class::_javaClass2_;
jmethodID Class::forName_30884_ID_;
jmethodID Class::getDeclaredField_30898_ID_;
jmethodID Class::toString_30936_ID_;

// public Android.java.lang.reflect.Field getDeclaredField(Android.java.lang.String arg0) [instance] :9112
::g::Android::java::lang::reflect::Field* Class::getDeclaredField(::g::Android::java::lang::String* arg0)
{
    return uCast< ::g::Android::java::lang::reflect::Field*>(Class::getDeclaredField_IMPL_30898(_subclassed, _javaObject, (uObject*)arg0), ::TYPES[1/*Android.java.lang.reflect.Field*/]);
}

// public static extern new void _Init() [static] :9025
void Class::_Init2()
{
    if (Class::_javaClass2()) { return; }
    INIT_JNI;
    Class::_javaClass2() = NEW_GLOBAL_REF(jclass,LOAD_SYS_CLASS("java/lang/Class"));
    ::g::Android::Base::JNI::CheckException1(U_JNIVAR);
    if (!Class::_javaClass2()) { THROW_UNO_EXCEPTION("Unable to cache class 'java.lang.Class'", 39);; }
}

// public static Android.java.lang.Class forName(Android.java.lang.String arg0) [static] :9028
Class* Class::forName(::g::Android::java::lang::String* arg0)
{
    return uCast<Class*>(Class::forName_IMPL_30884((uObject*)arg0), Class_typeof());
}

// public static extern Android.Base.Wrappers.IJWrapper forName_IMPL_30884(Android.Base.Wrappers.IJWrapper arg0) [static] :9371
uObject* Class::forName_IMPL_30884(uObject* arg0_)
{
    INIT_JNI;
    CLASS_INIT(Class::_javaClass2(),Class::_Init2());
    jobject _obArg0 = ((!arg0_) ? NULL : ::g::Android::Base::Wrappers::IJWrapper::_GetJavaObject(uInterface(arg0_, ::g::Android::Base::Wrappers::IJWrapper_typeof())));
    uObject* result;
    CACHE_METHOD(Class::forName_30884_ID(),Class::_javaClass2(),"forName","(Ljava/lang/String;)Ljava/lang/Class;",GetStaticMethodID,"Id for fallback method java.lang.Class.forName could not be cached",66);
    NEW_UNO(U_JNIVAR->CallStaticObjectMethod(Class::_javaClass2(), Class::forName_30884_ID(), _obArg0),result,Class_typeof(),Class*,false,true);
    ::g::Android::Base::JNI::CheckException1(U_JNIVAR);
    return result;
}

// public static extern Android.Base.Wrappers.IJWrapper getDeclaredField_IMPL_30898(bool arg0, Android.Base.Primitives.ujobject arg1, Android.Base.Wrappers.IJWrapper arg2) [static] :9413
uObject* Class::getDeclaredField_IMPL_30898(bool arg0_, jobject arg1_, uObject* arg2_)
{
    INIT_JNI;
    CLASS_INIT(Class::_javaClass2(),Class::_Init2());
    jobject _obArg2 = ((!arg2_) ? NULL : ::g::Android::Base::Wrappers::IJWrapper::_GetJavaObject(uInterface(arg2_, ::g::Android::Base::Wrappers::IJWrapper_typeof())));
    uObject* result;
    CACHE_METHOD(Class::getDeclaredField_30898_ID(),Class::_javaClass2(),"getDeclaredField","(Ljava/lang/String;)Ljava/lang/reflect/Field;",GetMethodID,"Id for fallback method java.lang.Class.getDeclaredField could not be cached",75);
    if (arg0_) {
        NEW_UNO(U_JNIVAR->CallNonvirtualObjectMethod(arg1_, Class::_javaClass2(), Class::getDeclaredField_30898_ID(), _obArg2),result,::g::Android::java::lang::reflect::Field_typeof(),::g::Android::java::lang::reflect::Field*,false,true);
    }
    else
    {
        NEW_UNO(U_JNIVAR->CallObjectMethod(arg1_, Class::getDeclaredField_30898_ID(), _obArg2),result,::g::Android::java::lang::reflect::Field_typeof(),::g::Android::java::lang::reflect::Field*,false,true);
    }
    ::g::Android::Base::JNI::CheckException1(U_JNIVAR);
    return result;
}

// public static extern Android.Base.Wrappers.IJWrapper toString_IMPL_30936(bool arg0, Android.Base.Primitives.ujobject arg1) [static] :9527
uObject* Class::toString_IMPL_30936(bool arg0_, jobject arg1_)
{
    INIT_JNI;
    CLASS_INIT(Class::_javaClass2(),Class::_Init2());
    
    uObject* result;
    CACHE_METHOD(Class::toString_30936_ID(),Class::_javaClass2(),"toString","()Ljava/lang/String;",GetMethodID,"Id for fallback method java.lang.Class.toString could not be cached",67);
    if (arg0_) {
        NEW_UNO(U_JNIVAR->CallNonvirtualObjectMethod(arg1_, Class::_javaClass2(), Class::toString_30936_ID()),result,::g::Android::java::lang::String_typeof(),::g::Android::java::lang::String*,false,true);
    }
    else
    {
        NEW_UNO(U_JNIVAR->CallObjectMethod(arg1_, Class::toString_30936_ID()),result,::g::Android::java::lang::String_typeof(),::g::Android::java::lang::String*,false,true);
    }
    ::g::Android::Base::JNI::CheckException1(U_JNIVAR);
    return result;
}
// }

// C:\ProgramData\Uno\Packages\Android\0.20.2\Android\java\lang\$.uno(11)
// ----------------------------------------------------------------------

// public extern class Object :11
// {
Object_type* Object_typeof()
{
    static uSStrong<Object_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 9;
    options.InterfaceCount = 2;
    options.ObjectSize = sizeof(Object);
    options.TypeSize = sizeof(Object_type);
    type = (Object_type*)uClassType::New("Android.java.lang.Object", options);
    type->SetBase(::g::Android::Base::Wrappers::JWrapper_typeof());
    type->fp_Equals = (void(*)(uObject*, uObject*, bool*))Object__Equals_fn;
    type->fp_GetHashCode = (void(*)(uObject*, int*))Object__GetHashCode_fn;
    type->fp_hashCode1 = Object__hashCode1_fn;
    type->fp_toString = Object__toString_fn;
    type->fp_ToString = (void(*)(uObject*, uString**))Object__ToString_fn;
    type->interface1.fp_Dispose = (void(*)(uObject*))::g::Android::Base::Wrappers::JWrapper__Uno_IDisposable_Dispose_fn;
    type->interface0.fp__GetJavaObject = (void(*)(uObject*, jobject*))::g::Android::Base::Wrappers::JWrapper___GetJavaObject_fn;
    type->interface0.fp__IsSubclassed = (void(*)(uObject*, bool*))::g::Android::Base::Wrappers::JWrapper___IsSubclassed_fn;
    ::TYPES[0] = ::g::Android::Base::Wrappers::IJWrapper_typeof();
    ::TYPES[2] = ::g::Android::Base::Wrappers::JWrapper_typeof();
    ::TYPES[4] = ::g::Android::java::lang::Class_typeof();
    ::TYPES[5] = uObject_typeof();
    ::TYPES[6] = ::g::Uno::Bool_typeof();
    ::TYPES[3] = ::g::Android::java::lang::String_typeof();
    type->SetInterfaces(
        ::g::Android::Base::Wrappers::IJWrapper_typeof(), offsetof(Object_type, interface0),
        ::g::Uno::IDisposable_typeof(), offsetof(Object_type, interface1));
    type->SetFields(5,
        ::g::Android::Base::Primitives::ujclass_typeof(), (uintptr_t)&::g::Android::java::lang::Object::_javaClass1_, uFieldFlagsStatic,
        ::g::Android::Base::Primitives::jmethodID_typeof(), (uintptr_t)&::g::Android::java::lang::Object::getClass_31290_ID_, uFieldFlagsStatic,
        ::g::Android::Base::Primitives::jmethodID_typeof(), (uintptr_t)&::g::Android::java::lang::Object::hashCode_31291_ID_, uFieldFlagsStatic,
        ::g::Android::Base::Primitives::jmethodID_typeof(), (uintptr_t)&::g::Android::java::lang::Object::toString_31294_ID_, uFieldFlagsStatic);
    return type;
}

// public Object(Android.Base.Primitives.ujobject obj, Uno.Type utype, bool hasFallbackClass, bool resolveType) :16
void Object__ctor_3_fn(Object* __this, jobject* obj, uType* utype, bool* hasFallbackClass, bool* resolveType)
{
    __this->ctor_3(*obj, utype, *hasFallbackClass, *resolveType);
}

// public static extern new void _Init() :15
void Object___Init1_fn()
{
    Object::_Init1();
}

// public override sealed bool Equals(object obj) :19
void Object__Equals_fn(Object* __this, uObject* obj, bool* __retval)
{
    if (obj != NULL)
    {
        uObject* tmp = uAs<uObject*>(obj, ::TYPES[0/*Android.Base.Wrappers.IJWrapper*/]);

        if (tmp != NULL)
            return *__retval = ::g::Android::Base::JNI::IsSameObject(__this->_javaObject, ::g::Android::Base::Wrappers::IJWrapper::_GetJavaObject(uInterface(uPtr(tmp), ::TYPES[0/*Android.Base.Wrappers.IJWrapper*/]))), void();
    }

    return *__retval = false, void();
}

// public Android.java.lang.Class getClass() :61
void Object__getClass_fn(Object* __this, ::g::Android::java::lang::Class** __retval)
{
    *__retval = __this->getClass();
}

// public static extern Android.Base.Wrappers.IJWrapper getClass_IMPL_31290(bool arg0, Android.Base.Primitives.ujobject arg1) :120
void Object__getClass_IMPL_31290_fn(bool* arg0_, jobject* arg1_, uObject** __retval)
{
    *__retval = Object::getClass_IMPL_31290(*arg0_, *arg1_);
}

// public override sealed int GetHashCode() :21
void Object__GetHashCode_fn(Object* __this, int* __retval)
{
    return *__retval = __this->hashCode1(), void();
}

// public virtual int hashCode() :67
void Object__hashCode1_fn(Object* __this, int* __retval)
{
    return *__retval = Object::hashCode_IMPL_31291(__this->_subclassed, __this->_javaObject), void();
}

// public static extern int hashCode_IMPL_31291(bool arg0, Android.Base.Primitives.ujobject arg1) :123
void Object__hashCode_IMPL_31291_fn(bool* arg0_, jobject* arg1_, int* __retval)
{
    *__retval = Object::hashCode_IMPL_31291(*arg0_, *arg1_);
}

// public static operator ==(Android.java.lang.Object a, Android.java.lang.Object b) :23
void Object__op_Equality1_fn(Object* a, Object* b, bool* __retval)
{
    *__retval = Object::op_Equality1(a, b);
}

// public static operator !=(Android.java.lang.Object a, Android.java.lang.Object b) :25
void Object__op_Inequality1_fn(Object* a, Object* b, bool* __retval)
{
    *__retval = Object::op_Inequality1(a, b);
}

// public virtual Android.java.lang.String toString() :85
void Object__toString_fn(Object* __this, ::g::Android::java::lang::String** __retval)
{
    return *__retval = uCast< ::g::Android::java::lang::String*>(Object::toString_IMPL_31294(__this->_subclassed, __this->_javaObject), ::TYPES[3/*Android.java.lang.String*/]), void();
}

// public override sealed string ToString() :17
void Object__ToString_fn(Object* __this, uString** __retval)
{
    return *__retval = ::g::Android::java::lang::String::op_Implicit(__this->toString()), void();
}

// public static extern Android.Base.Wrappers.IJWrapper toString_IMPL_31294(bool arg0, Android.Base.Primitives.ujobject arg1) :132
void Object__toString_IMPL_31294_fn(bool* arg0_, jobject* arg1_, uObject** __retval)
{
    *__retval = Object::toString_IMPL_31294(*arg0_, *arg1_);
}

jclass Object::_javaClass1_;
jmethodID Object::getClass_31290_ID_;
jmethodID Object::hashCode_31291_ID_;
jmethodID Object::toString_31294_ID_;

// public Object(Android.Base.Primitives.ujobject obj, Uno.Type utype, bool hasFallbackClass, bool resolveType) [instance] :16
void Object::ctor_3(jobject obj, uType* utype, bool hasFallbackClass, bool resolveType)
{
    ctor_(obj, utype, hasFallbackClass, resolveType);
}

// public Android.java.lang.Class getClass() [instance] :61
::g::Android::java::lang::Class* Object::getClass()
{
    return uCast< ::g::Android::java::lang::Class*>(Object::getClass_IMPL_31290(_subclassed, _javaObject), ::TYPES[4/*Android.java.lang.Class*/]);
}

// public static extern new void _Init() [static] :15
void Object::_Init1()
{
    if (Object::_javaClass1()) { return; }
    INIT_JNI;
    Object::_javaClass1() = NEW_GLOBAL_REF(jclass,LOAD_SYS_CLASS("java/lang/Object"));
    ::g::Android::Base::JNI::CheckException1(U_JNIVAR);
    if (!Object::_javaClass1()) { THROW_UNO_EXCEPTION("Unable to cache class 'java.lang.Object'", 40);; }
}

// public static extern Android.Base.Wrappers.IJWrapper getClass_IMPL_31290(bool arg0, Android.Base.Primitives.ujobject arg1) [static] :120
uObject* Object::getClass_IMPL_31290(bool arg0_, jobject arg1_)
{
    INIT_JNI;
    CLASS_INIT(Object::_javaClass1(),Object::_Init1());
    
    uObject* result;
    CACHE_METHOD(Object::getClass_31290_ID(),Object::_javaClass1(),"getClass","()Ljava/lang/Class;",GetMethodID,"Id for fallback method java.lang.Object.getClass could not be cached",68);
    if (arg0_) {
        NEW_UNO(U_JNIVAR->CallNonvirtualObjectMethod(arg1_, Object::_javaClass1(), Object::getClass_31290_ID()),result,::g::Android::java::lang::Class_typeof(),::g::Android::java::lang::Class*,false,true);
    }
    else
    {
        NEW_UNO(U_JNIVAR->CallObjectMethod(arg1_, Object::getClass_31290_ID()),result,::g::Android::java::lang::Class_typeof(),::g::Android::java::lang::Class*,false,true);
    }
    ::g::Android::Base::JNI::CheckException1(U_JNIVAR);
    return result;
}

// public static extern int hashCode_IMPL_31291(bool arg0, Android.Base.Primitives.ujobject arg1) [static] :123
int Object::hashCode_IMPL_31291(bool arg0_, jobject arg1_)
{
    INIT_JNI;
    CLASS_INIT(Object::_javaClass1(),Object::_Init1());
    
    int result;
    CACHE_METHOD(Object::hashCode_31291_ID(),Object::_javaClass1(),"hashCode","()I",GetMethodID,"Id for fallback method java.lang.Object.hashCode could not be cached",68);
    if (arg0_) {
        result = ((int)U_JNIVAR->CallNonvirtualIntMethod(arg1_, Object::_javaClass1(), Object::hashCode_31291_ID()));
    }
    else
    {
        result = ((int)U_JNIVAR->CallIntMethod(arg1_, Object::hashCode_31291_ID()));
    }
    ::g::Android::Base::JNI::CheckException1(U_JNIVAR);
    return result;
}

// public static operator ==(Android.java.lang.Object a, Android.java.lang.Object b) [static] :23
bool Object::op_Equality1(Object* a, Object* b)
{
    if ((a == NULL) || (b == NULL))
        return b == a;
    else
        return ::g::Android::Base::JNI::IsSameObject(uPtr(a)->_GetJavaObject(), uPtr(b)->_GetJavaObject());
}

// public static operator !=(Android.java.lang.Object a, Android.java.lang.Object b) [static] :25
bool Object::op_Inequality1(Object* a, Object* b)
{
    return !Object::op_Equality1(a, b);
}

// public static extern Android.Base.Wrappers.IJWrapper toString_IMPL_31294(bool arg0, Android.Base.Primitives.ujobject arg1) [static] :132
uObject* Object::toString_IMPL_31294(bool arg0_, jobject arg1_)
{
    INIT_JNI;
    CLASS_INIT(Object::_javaClass1(),Object::_Init1());
    
    uObject* result;
    CACHE_METHOD(Object::toString_31294_ID(),Object::_javaClass1(),"toString","()Ljava/lang/String;",GetMethodID,"Id for fallback method java.lang.Object.toString could not be cached",68);
    if (arg0_) {
        NEW_UNO(U_JNIVAR->CallNonvirtualObjectMethod(arg1_, Object::_javaClass1(), Object::toString_31294_ID()),result,::g::Android::java::lang::String_typeof(),::g::Android::java::lang::String*,false,true);
    }
    else
    {
        NEW_UNO(U_JNIVAR->CallObjectMethod(arg1_, Object::toString_31294_ID()),result,::g::Android::java::lang::String_typeof(),::g::Android::java::lang::String*,false,true);
    }
    ::g::Android::Base::JNI::CheckException1(U_JNIVAR);
    return result;
}
// }

// C:\ProgramData\Uno\Packages\Android\0.20.2\Android\java\lang\$.uno(18676)
// -------------------------------------------------------------------------

// public abstract extern interface Runnable :18676
// {
uInterfaceType* Runnable_typeof()
{
    static uSStrong<uInterfaceType*> type;
    if (type != NULL) return type;

    type = uInterfaceType::New("Android.java.lang.Runnable", 0, 0);
    return type;
}
// }

// C:\ProgramData\Uno\Packages\Android\0.20.2\Android\java\lang\$.uno(15741)
// -------------------------------------------------------------------------

// public sealed extern class String :15741
// {
String_type* String_typeof()
{
    static uSStrong<String_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 11;
    options.InterfaceCount = 3;
    options.ObjectSize = sizeof(String);
    options.TypeSize = sizeof(String_type);
    type = (String_type*)uClassType::New("Android.java.lang.String", options);
    type->SetBase(::g::Android::java::lang::Object_typeof());
    type->fp_hashCode1 = (void(*)(::g::Android::java::lang::Object*, int*))String__hashCode1_fn;
    type->fp_toString = (void(*)(::g::Android::java::lang::Object*, String**))String__toString_fn;
    type->interface2.fp_length = (void(*)(uObject*, int*))String__length_fn;
    type->interface2.fp_charAt = (void(*)(uObject*, int*, uChar*))String__charAt_fn;
    type->interface2.fp_subSequence = (void(*)(uObject*, int*, int*, uObject**))String__subSequence_fn;
    type->interface2.fp_toString = (void(*)(uObject*, String**))String__toString_fn;
    type->interface0.fp__GetJavaObject = (void(*)(uObject*, jobject*))::g::Android::Base::Wrappers::JWrapper___GetJavaObject_fn;
    type->interface0.fp__IsSubclassed = (void(*)(uObject*, bool*))::g::Android::Base::Wrappers::JWrapper___IsSubclassed_fn;
    type->interface1.fp_Dispose = (void(*)(uObject*))::g::Android::Base::Wrappers::JWrapper__Uno_IDisposable_Dispose_fn;
    ::TYPES[2] = ::g::Android::Base::Wrappers::JWrapper_typeof();
    ::TYPES[5] = uObject_typeof();
    ::TYPES[7] = ::g::Android::java::lang::CharSequence_typeof();
    type->SetInterfaces(
        ::g::Android::Base::Wrappers::IJWrapper_typeof(), offsetof(String_type, interface0),
        ::g::Uno::IDisposable_typeof(), offsetof(String_type, interface1),
        ::g::Android::java::lang::CharSequence_typeof(), offsetof(String_type, interface2));
    type->SetFields(5,
        ::g::Android::Base::Primitives::ujclass_typeof(), (uintptr_t)&::g::Android::java::lang::String::_javaClass2_, uFieldFlagsStatic,
        ::g::Android::Base::Primitives::jmethodID_typeof(), (uintptr_t)&::g::Android::java::lang::String::charAt_31531_ID_, uFieldFlagsStatic,
        ::g::Android::Base::Primitives::jmethodID_typeof(), (uintptr_t)&::g::Android::java::lang::String::hashCode_31545_ID_, uFieldFlagsStatic,
        ::g::Android::Base::Primitives::jmethodID_typeof(), (uintptr_t)&::g::Android::java::lang::String::length_31556_ID_, uFieldFlagsStatic,
        ::g::Android::Base::Primitives::jmethodID_typeof(), (uintptr_t)&::g::Android::java::lang::String::subSequence_31588_ID_, uFieldFlagsStatic,
        ::g::Android::Base::Primitives::jmethodID_typeof(), (uintptr_t)&::g::Android::java::lang::String::toString_31568_ID_, uFieldFlagsStatic);
    return type;
}

// public String(Android.Base.Primitives.ujobject obj, Uno.Type utype, bool hasFallbackClass, bool resolveType) :15746
void String__ctor_5_fn(String* __this, jobject* obj, uType* utype, bool* hasFallbackClass, bool* resolveType)
{
    __this->ctor_5(*obj, utype, *hasFallbackClass, *resolveType);
}

// public static extern new void _Init() :15745
void String___Init2_fn()
{
    String::_Init2();
}

// public char charAt(int arg0) :16015
void String__charAt_fn(String* __this, int* arg0, uChar* __retval)
{
    *__retval = __this->charAt(*arg0);
}

// public static extern char charAt_IMPL_31531(bool arg0, Android.Base.Primitives.ujobject arg1, int arg2) :16427
void String__charAt_IMPL_31531_fn(bool* arg0_, jobject* arg1_, int* arg2_, uChar* __retval)
{
    *__retval = String::charAt_IMPL_31531(*arg0_, *arg1_, *arg2_);
}

// public override sealed int hashCode() :16099
void String__hashCode1_fn(String* __this, int* __retval)
{
    return *__retval = String::hashCode_IMPL_31545(__this->_subclassed, __this->_javaObject), void();
}

// public static extern int hashCode_IMPL_31545(bool arg0, Android.Base.Primitives.ujobject arg1) :16469
void String__hashCode_IMPL_31545_fn(bool* arg0_, jobject* arg1_, int* __retval)
{
    *__retval = String::hashCode_IMPL_31545(*arg0_, *arg1_);
}

// public int length() :16165
void String__length_fn(String* __this, int* __retval)
{
    *__retval = __this->length();
}

// public static extern int length_IMPL_31556(bool arg0, Android.Base.Primitives.ujobject arg1) :16502
void String__length_IMPL_31556_fn(bool* arg0_, jobject* arg1_, int* __retval)
{
    *__retval = String::length_IMPL_31556(*arg0_, *arg1_);
}

// public String New(Android.Base.Primitives.ujobject obj, Uno.Type utype, bool hasFallbackClass, bool resolveType) :15746
void String__New6_fn(jobject* obj, uType* utype, bool* hasFallbackClass, bool* resolveType, String** __retval)
{
    *__retval = String::New6(*obj, utype, *hasFallbackClass, *resolveType);
}

// public static implicit operator string(Android.java.lang.String str) :15767
void String__op_Implicit_fn(String* str, uString** __retval)
{
    *__retval = String::op_Implicit(str);
}

// public static implicit operator Android.java.lang.String(string str) :15765
void String__op_Implicit1_fn(uString* str, String** __retval)
{
    *__retval = String::op_Implicit1(str);
}

// public Android.java.lang.CharSequence subSequence(int arg0, int arg1) :16357
void String__subSequence_fn(String* __this, int* arg0, int* arg1, uObject** __retval)
{
    *__retval = __this->subSequence(*arg0, *arg1);
}

// public static extern Android.Base.Wrappers.IJWrapper subSequence_IMPL_31588(bool arg0, Android.Base.Primitives.ujobject arg1, int arg2, int arg3) :16598
void String__subSequence_IMPL_31588_fn(bool* arg0_, jobject* arg1_, int* arg2_, int* arg3_, uObject** __retval)
{
    *__retval = String::subSequence_IMPL_31588(*arg0_, *arg1_, *arg2_, *arg3_);
}

// public override sealed Android.java.lang.String toString() :16237
void String__toString_fn(String* __this, String** __retval)
{
    return *__retval = uCast<String*>(String::toString_IMPL_31568(__this->_subclassed, __this->_javaObject), String_typeof()), void();
}

// public static extern Android.Base.Wrappers.IJWrapper toString_IMPL_31568(bool arg0, Android.Base.Primitives.ujobject arg1) :16538
void String__toString_IMPL_31568_fn(bool* arg0_, jobject* arg1_, uObject** __retval)
{
    *__retval = String::toString_IMPL_31568(*arg0_, *arg1_);
}

jclass String::_javaClass2_;
jmethodID String::charAt_31531_ID_;
jmethodID String::hashCode_31545_ID_;
jmethodID String::length_31556_ID_;
jmethodID String::subSequence_31588_ID_;
jmethodID String::toString_31568_ID_;

// public String(Android.Base.Primitives.ujobject obj, Uno.Type utype, bool hasFallbackClass, bool resolveType) [instance] :15746
void String::ctor_5(jobject obj, uType* utype, bool hasFallbackClass, bool resolveType)
{
    ctor_3(obj, utype, hasFallbackClass, resolveType);
}

// public char charAt(int arg0) [instance] :16015
uChar String::charAt(int arg0)
{
    int arg0_ = arg0;
    return String::charAt_IMPL_31531(_subclassed, _javaObject, arg0_);
}

// public int length() [instance] :16165
int String::length()
{
    return String::length_IMPL_31556(_subclassed, _javaObject);
}

// public Android.java.lang.CharSequence subSequence(int arg0, int arg1) [instance] :16357
uObject* String::subSequence(int arg0, int arg1)
{
    int arg0_ = arg0;
    int arg1_ = arg1;
    return String::subSequence_IMPL_31588(_subclassed, _javaObject, arg0_, arg1_);
}

// public static extern new void _Init() [static] :15745
void String::_Init2()
{
    if (String::_javaClass2()) { return; }
    INIT_JNI;
    String::_javaClass2() = NEW_GLOBAL_REF(jclass,LOAD_SYS_CLASS("java/lang/String"));
    ::g::Android::Base::JNI::CheckException1(U_JNIVAR);
    if (!String::_javaClass2()) { THROW_UNO_EXCEPTION("Unable to cache class 'java.lang.String'", 40);; }
}

// public static extern char charAt_IMPL_31531(bool arg0, Android.Base.Primitives.ujobject arg1, int arg2) [static] :16427
uChar String::charAt_IMPL_31531(bool arg0_, jobject arg1_, int arg2_)
{
    INIT_JNI;
    CLASS_INIT(String::_javaClass2(),String::_Init2());
    
    uChar result;
    CACHE_METHOD(String::charAt_31531_ID(),String::_javaClass2(),"charAt","(I)C",GetMethodID,"Id for fallback method java.lang.String.charAt could not be cached",66);
    if (arg0_) {
        result = ((uChar)U_JNIVAR->CallNonvirtualCharMethod(arg1_, String::_javaClass2(), String::charAt_31531_ID(), ((jint)arg2_)));
    }
    else
    {
        result = ((uChar)U_JNIVAR->CallCharMethod(arg1_, String::charAt_31531_ID(), ((jint)arg2_)));
    }
    ::g::Android::Base::JNI::CheckException1(U_JNIVAR);
    return result;
}

// public static extern int hashCode_IMPL_31545(bool arg0, Android.Base.Primitives.ujobject arg1) [static] :16469
int String::hashCode_IMPL_31545(bool arg0_, jobject arg1_)
{
    INIT_JNI;
    CLASS_INIT(String::_javaClass2(),String::_Init2());
    
    int result;
    CACHE_METHOD(String::hashCode_31545_ID(),String::_javaClass2(),"hashCode","()I",GetMethodID,"Id for fallback method java.lang.String.hashCode could not be cached",68);
    if (arg0_) {
        result = ((int)U_JNIVAR->CallNonvirtualIntMethod(arg1_, String::_javaClass2(), String::hashCode_31545_ID()));
    }
    else
    {
        result = ((int)U_JNIVAR->CallIntMethod(arg1_, String::hashCode_31545_ID()));
    }
    ::g::Android::Base::JNI::CheckException1(U_JNIVAR);
    return result;
}

// public static extern int length_IMPL_31556(bool arg0, Android.Base.Primitives.ujobject arg1) [static] :16502
int String::length_IMPL_31556(bool arg0_, jobject arg1_)
{
    INIT_JNI;
    CLASS_INIT(String::_javaClass2(),String::_Init2());
    
    int result;
    CACHE_METHOD(String::length_31556_ID(),String::_javaClass2(),"length","()I",GetMethodID,"Id for fallback method java.lang.String.length could not be cached",66);
    if (arg0_) {
        result = ((int)U_JNIVAR->CallNonvirtualIntMethod(arg1_, String::_javaClass2(), String::length_31556_ID()));
    }
    else
    {
        result = ((int)U_JNIVAR->CallIntMethod(arg1_, String::length_31556_ID()));
    }
    ::g::Android::Base::JNI::CheckException1(U_JNIVAR);
    return result;
}

// public String New(Android.Base.Primitives.ujobject obj, Uno.Type utype, bool hasFallbackClass, bool resolveType) [static] :15746
String* String::New6(jobject obj, uType* utype, bool hasFallbackClass, bool resolveType)
{
    String* obj1 = (String*)uNew(String_typeof());
    obj1->ctor_5(obj, utype, hasFallbackClass, resolveType);
    return obj1;
}

// public static implicit operator string(Android.java.lang.String str) [static] :15767
uString* String::op_Implicit(String* str)
{
    if (::g::Uno::Object::ReferenceEquals(str, NULL))
        return NULL;
    else
        return ::g::Android::Base::Types::String::JavaToUno(::g::Android::Base::JNI::GetEnvPtr(), uPtr(str)->_GetJavaObject());
}

// public static implicit operator Android.java.lang.String(string str) [static] :15765
String* String::op_Implicit1(uString* str)
{
    if (::g::Uno::Object::ReferenceEquals(str, NULL))
        return NULL;
    else
        return String::New6(::g::Android::Base::Types::String::UnoToJava(::g::Android::Base::JNI::GetEnvPtr(), str), ::g::Android::Base::JNI::GetDefaultType(), false, false);
}

// public static extern Android.Base.Wrappers.IJWrapper subSequence_IMPL_31588(bool arg0, Android.Base.Primitives.ujobject arg1, int arg2, int arg3) [static] :16598
uObject* String::subSequence_IMPL_31588(bool arg0_, jobject arg1_, int arg2_, int arg3_)
{
    INIT_JNI;
    CLASS_INIT(String::_javaClass2(),String::_Init2());
    
    uObject* result;
    CACHE_METHOD(String::subSequence_31588_ID(),String::_javaClass2(),"subSequence","(II)Ljava/lang/CharSequence;",GetMethodID,"Id for fallback method java.lang.String.subSequence could not be cached",71);
    if (arg0_) {
        NEW_UNO(U_JNIVAR->CallNonvirtualObjectMethod(arg1_, String::_javaClass2(), String::subSequence_31588_ID(), ((jint)arg2_), ((jint)arg3_)),result,::g::Android::Fallbacks::Android_java_lang_CharSequence_typeof(),uObject*,true,true);
    }
    else
    {
        NEW_UNO(U_JNIVAR->CallObjectMethod(arg1_, String::subSequence_31588_ID(), ((jint)arg2_), ((jint)arg3_)),result,::g::Android::Fallbacks::Android_java_lang_CharSequence_typeof(),uObject*,true,true);
    }
    ::g::Android::Base::JNI::CheckException1(U_JNIVAR);
    return result;
}

// public static extern Android.Base.Wrappers.IJWrapper toString_IMPL_31568(bool arg0, Android.Base.Primitives.ujobject arg1) [static] :16538
uObject* String::toString_IMPL_31568(bool arg0_, jobject arg1_)
{
    INIT_JNI;
    CLASS_INIT(String::_javaClass2(),String::_Init2());
    
    uObject* result;
    CACHE_METHOD(String::toString_31568_ID(),String::_javaClass2(),"toString","()Ljava/lang/String;",GetMethodID,"Id for fallback method java.lang.String.toString could not be cached",68);
    if (arg0_) {
        NEW_UNO(U_JNIVAR->CallNonvirtualObjectMethod(arg1_, String::_javaClass2(), String::toString_31568_ID()),result,String_typeof(),String*,false,true);
    }
    else
    {
        NEW_UNO(U_JNIVAR->CallObjectMethod(arg1_, String::toString_31568_ID()),result,String_typeof(),String*,false,true);
    }
    ::g::Android::Base::JNI::CheckException1(U_JNIVAR);
    return result;
}
// }

// C:\ProgramData\Uno\Packages\Android\0.20.2\Android\java\lang\$.uno(17625)
// -------------------------------------------------------------------------

// public sealed extern class System :17625
// {
::g::Android::java::lang::Object_type* System_typeof()
{
    static uSStrong< ::g::Android::java::lang::Object_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 7;
    options.InterfaceCount = 2;
    options.ObjectSize = sizeof(System);
    options.TypeSize = sizeof(::g::Android::java::lang::Object_type);
    type = (::g::Android::java::lang::Object_type*)uClassType::New("Android.java.lang.System", options);
    type->SetBase(::g::Android::java::lang::Object_typeof());
    type->interface1.fp_Dispose = (void(*)(uObject*))::g::Android::Base::Wrappers::JWrapper__Uno_IDisposable_Dispose_fn;
    type->interface0.fp__GetJavaObject = (void(*)(uObject*, jobject*))::g::Android::Base::Wrappers::JWrapper___GetJavaObject_fn;
    type->interface0.fp__IsSubclassed = (void(*)(uObject*, bool*))::g::Android::Base::Wrappers::JWrapper___IsSubclassed_fn;
    type->SetInterfaces(
        ::g::Android::Base::Wrappers::IJWrapper_typeof(), offsetof(::g::Android::java::lang::Object_type, interface0),
        ::g::Uno::IDisposable_typeof(), offsetof(::g::Android::java::lang::Object_type, interface1));
    type->SetFields(5,
        ::g::Android::Base::Primitives::ujclass_typeof(), (uintptr_t)&::g::Android::java::lang::System::_javaClass2_, uFieldFlagsStatic,
        ::g::Android::Base::Primitives::jmethodID_typeof(), (uintptr_t)&::g::Android::java::lang::System::nanoTime_31693_ID_, uFieldFlagsStatic);
    return type;
}

// public static extern new void _Init() :17629
void System___Init2_fn()
{
    System::_Init2();
}

// public static long nanoTime() :17714
void System__nanoTime_fn(int64_t* __retval)
{
    *__retval = System::nanoTime();
}

// public static extern long nanoTime_IMPL_31693() :17862
void System__nanoTime_IMPL_31693_fn(int64_t* __retval)
{
    *__retval = System::nanoTime_IMPL_31693();
}

jclass System::_javaClass2_;
jmethodID System::nanoTime_31693_ID_;

// public static extern new void _Init() [static] :17629
void System::_Init2()
{
    if (System::_javaClass2()) { return; }
    INIT_JNI;
    System::_javaClass2() = NEW_GLOBAL_REF(jclass,LOAD_SYS_CLASS("java/lang/System"));
    ::g::Android::Base::JNI::CheckException1(U_JNIVAR);
    if (!System::_javaClass2()) { THROW_UNO_EXCEPTION("Unable to cache class 'java.lang.System'", 40);; }
}

// public static long nanoTime() [static] :17714
int64_t System::nanoTime()
{
    return System::nanoTime_IMPL_31693();
}

// public static extern long nanoTime_IMPL_31693() [static] :17862
int64_t System::nanoTime_IMPL_31693()
{
    INIT_JNI;
    CLASS_INIT(System::_javaClass2(),System::_Init2());
    
    int64_t result;
    CACHE_METHOD(System::nanoTime_31693_ID(),System::_javaClass2(),"nanoTime","()J",GetStaticMethodID,"Id for fallback method java.lang.System.nanoTime could not be cached",68);
    result = ((int64_t)U_JNIVAR->CallStaticLongMethod(System::_javaClass2(), System::nanoTime_31693_ID()));
    ::g::Android::Base::JNI::CheckException1(U_JNIVAR);
    return result;
}
// }

// C:\ProgramData\Uno\Packages\Android\0.20.2\Android\java\lang\$.uno(1457)
// ------------------------------------------------------------------------

// public sealed extern class Thread :1457
// {
Thread_type* Thread_typeof()
{
    static uSStrong<Thread_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 11;
    options.InterfaceCount = 3;
    options.ObjectSize = sizeof(Thread);
    options.TypeSize = sizeof(Thread_type);
    type = (Thread_type*)uClassType::New("Android.java.lang.Thread", options);
    type->SetBase(::g::Android::java::lang::Object_typeof());
    type->fp_toString = (void(*)(::g::Android::java::lang::Object*, ::g::Android::java::lang::String**))Thread__toString_fn;
    type->interface2.fp_run = (void(*)(uObject*))Thread__run_fn;
    type->interface0.fp__GetJavaObject = (void(*)(uObject*, jobject*))::g::Android::Base::Wrappers::JWrapper___GetJavaObject_fn;
    type->interface0.fp__IsSubclassed = (void(*)(uObject*, bool*))::g::Android::Base::Wrappers::JWrapper___IsSubclassed_fn;
    type->interface1.fp_Dispose = (void(*)(uObject*))::g::Android::Base::Wrappers::JWrapper__Uno_IDisposable_Dispose_fn;
    ::TYPES[2] = ::g::Android::Base::Wrappers::JWrapper_typeof();
    ::TYPES[3] = ::g::Android::java::lang::String_typeof();
    type->SetInterfaces(
        ::g::Android::Base::Wrappers::IJWrapper_typeof(), offsetof(Thread_type, interface0),
        ::g::Uno::IDisposable_typeof(), offsetof(Thread_type, interface1),
        ::g::Android::java::lang::Runnable_typeof(), offsetof(Thread_type, interface2));
    type->SetFields(5,
        ::g::Android::Base::Primitives::ujclass_typeof(), (uintptr_t)&::g::Android::java::lang::Thread::_javaClass2_, uFieldFlagsStatic,
        ::g::Android::Base::Primitives::jmethodID_typeof(), (uintptr_t)&::g::Android::java::lang::Thread::run_31761_ID_, uFieldFlagsStatic,
        ::g::Android::Base::Primitives::jmethodID_typeof(), (uintptr_t)&::g::Android::java::lang::Thread::start_31770_ID_, uFieldFlagsStatic,
        ::g::Android::Base::Primitives::jmethodID_typeof(), (uintptr_t)&::g::Android::java::lang::Thread::stop_31771_ID_, uFieldFlagsStatic,
        ::g::Android::Base::Primitives::jmethodID_typeof(), (uintptr_t)&::g::Android::java::lang::Thread::Thread_31728_ID_c_, uFieldFlagsStatic,
        ::g::Android::Base::Primitives::jmethodID_typeof(), (uintptr_t)&::g::Android::java::lang::Thread::toString_31774_ID_, uFieldFlagsStatic);
    return type;
}

// public Thread(Android.java.lang.Runnable arg0) :1530
void Thread__ctor_6_fn(Thread* __this, uObject* arg0)
{
    __this->ctor_6(arg0);
}

// public static extern new void _Init() :1461
void Thread___Init2_fn()
{
    Thread::_Init2();
}

// public Thread New(Android.java.lang.Runnable arg0) :1530
void Thread__New7_fn(uObject* arg0, Thread** __retval)
{
    *__retval = Thread::New7(arg0);
}

// public void run() :1805
void Thread__run_fn(Thread* __this)
{
    __this->run();
}

// public static extern void run_IMPL_31761(bool arg0, Android.Base.Primitives.ujobject arg1) :1988
void Thread__run_IMPL_31761_fn(bool* arg0_, jobject* arg1_)
{
    Thread::run_IMPL_31761(*arg0_, *arg1_);
}

// public void start() :1859
void Thread__start_fn(Thread* __this)
{
    __this->start();
}

// public static extern void start_IMPL_31770(bool arg0, Android.Base.Primitives.ujobject arg1) :2015
void Thread__start_IMPL_31770_fn(bool* arg0_, jobject* arg1_)
{
    Thread::start_IMPL_31770(*arg0_, *arg1_);
}

// public void stop() :1865
void Thread__stop_fn(Thread* __this)
{
    __this->stop();
}

// public static extern void stop_IMPL_31771(bool arg0, Android.Base.Primitives.ujobject arg1) :2018
void Thread__stop_IMPL_31771_fn(bool* arg0_, jobject* arg1_)
{
    Thread::stop_IMPL_31771(*arg0_, *arg1_);
}

// public override sealed Android.java.lang.String toString() :1883
void Thread__toString_fn(Thread* __this, ::g::Android::java::lang::String** __retval)
{
    return *__retval = uCast< ::g::Android::java::lang::String*>(Thread::toString_IMPL_31774(__this->_subclassed, __this->_javaObject), ::TYPES[3/*Android.java.lang.String*/]), void();
}

// public static extern Android.Base.Wrappers.IJWrapper toString_IMPL_31774(bool arg0, Android.Base.Primitives.ujobject arg1) :2027
void Thread__toString_IMPL_31774_fn(bool* arg0_, jobject* arg1_, uObject** __retval)
{
    *__retval = Thread::toString_IMPL_31774(*arg0_, *arg1_);
}

jclass Thread::_javaClass2_;
jmethodID Thread::run_31761_ID_;
jmethodID Thread::start_31770_ID_;
jmethodID Thread::stop_31771_ID_;
jmethodID Thread::Thread_31728_ID_c_;
jmethodID Thread::toString_31774_ID_;

// public Thread(Android.java.lang.Runnable arg0) [instance] :1530
void Thread::ctor_6(uObject* arg0)
{
    ctor_3(::g::Android::Base::JNI::GetDefaultObject(), ::g::Android::Base::JNI::GetDefaultType(), false, false);
    INIT_JNI;;
    CLASS_INIT(Thread::_javaClass2(),Thread::_Init2());;
    CACHE_METHOD(Thread::Thread_31728_ID_c(),Thread::_javaClass2(),"<init>","(Ljava/lang/Runnable;)V",GetMethodID,"Id for fallback method java.lang.Thread.<init> could not be cached",66);;
    jobject _obArg0 = ((!arg0) ? NULL : ::g::Android::Base::Wrappers::IJWrapper::_GetJavaObject(uInterface(arg0, ::g::Android::Base::Wrappers::IJWrapper_typeof())));;
    jobject result;;
    jobject _tmp;;
    _tmp = U_JNIVAR->NewObject(Thread::_javaClass2(), Thread::Thread_31728_ID_c(), _obArg0);;
    ::g::Android::Base::JNI::CheckException1(U_JNIVAR);;
    _javaObject = NEW_GLOBAL_REF(jobject,_tmp);;
    U_JNIVAR->DeleteLocalRef(_tmp);;
}

// public void run() [instance] :1805
void Thread::run()
{
    Thread::run_IMPL_31761(_subclassed, _javaObject);
}

// public void start() [instance] :1859
void Thread::start()
{
    Thread::start_IMPL_31770(_subclassed, _javaObject);
}

// public void stop() [instance] :1865
void Thread::stop()
{
    Thread::stop_IMPL_31771(_subclassed, _javaObject);
}

// public static extern new void _Init() [static] :1461
void Thread::_Init2()
{
    if (Thread::_javaClass2()) { return; }
    INIT_JNI;
    Thread::_javaClass2() = NEW_GLOBAL_REF(jclass,LOAD_SYS_CLASS("java/lang/Thread"));
    ::g::Android::Base::JNI::CheckException1(U_JNIVAR);
    if (!Thread::_javaClass2()) { THROW_UNO_EXCEPTION("Unable to cache class 'java.lang.Thread'", 40);; }
}

// public Thread New(Android.java.lang.Runnable arg0) [static] :1530
Thread* Thread::New7(uObject* arg0)
{
    Thread* obj3 = (Thread*)uNew(Thread_typeof());
    obj3->ctor_6(arg0);
    return obj3;
}

// public static extern void run_IMPL_31761(bool arg0, Android.Base.Primitives.ujobject arg1) [static] :1988
void Thread::run_IMPL_31761(bool arg0_, jobject arg1_)
{
    INIT_JNI;
    CLASS_INIT(Thread::_javaClass2(),Thread::_Init2());
    
    CACHE_METHOD(Thread::run_31761_ID(),Thread::_javaClass2(),"run","()V",GetMethodID,"Id for fallback method java.lang.Thread.run could not be cached",63);
    if (arg0_) {
        U_JNIVAR->CallNonvirtualVoidMethod(arg1_, Thread::_javaClass2(), Thread::run_31761_ID());
    }
    else
    {
        U_JNIVAR->CallVoidMethod(arg1_, Thread::run_31761_ID());
    }
    ::g::Android::Base::JNI::CheckException1(U_JNIVAR);
}

// public static extern void start_IMPL_31770(bool arg0, Android.Base.Primitives.ujobject arg1) [static] :2015
void Thread::start_IMPL_31770(bool arg0_, jobject arg1_)
{
    INIT_JNI;
    CLASS_INIT(Thread::_javaClass2(),Thread::_Init2());
    
    CACHE_METHOD(Thread::start_31770_ID(),Thread::_javaClass2(),"start","()V",GetMethodID,"Id for fallback method java.lang.Thread.start could not be cached",65);
    if (arg0_) {
        U_JNIVAR->CallNonvirtualVoidMethod(arg1_, Thread::_javaClass2(), Thread::start_31770_ID());
    }
    else
    {
        U_JNIVAR->CallVoidMethod(arg1_, Thread::start_31770_ID());
    }
    ::g::Android::Base::JNI::CheckException1(U_JNIVAR);
}

// public static extern void stop_IMPL_31771(bool arg0, Android.Base.Primitives.ujobject arg1) [static] :2018
void Thread::stop_IMPL_31771(bool arg0_, jobject arg1_)
{
    INIT_JNI;
    CLASS_INIT(Thread::_javaClass2(),Thread::_Init2());
    
    CACHE_METHOD(Thread::stop_31771_ID(),Thread::_javaClass2(),"stop","()V",GetMethodID,"Id for fallback method java.lang.Thread.stop could not be cached",64);
    if (arg0_) {
        U_JNIVAR->CallNonvirtualVoidMethod(arg1_, Thread::_javaClass2(), Thread::stop_31771_ID());
    }
    else
    {
        U_JNIVAR->CallVoidMethod(arg1_, Thread::stop_31771_ID());
    }
    ::g::Android::Base::JNI::CheckException1(U_JNIVAR);
}

// public static extern Android.Base.Wrappers.IJWrapper toString_IMPL_31774(bool arg0, Android.Base.Primitives.ujobject arg1) [static] :2027
uObject* Thread::toString_IMPL_31774(bool arg0_, jobject arg1_)
{
    INIT_JNI;
    CLASS_INIT(Thread::_javaClass2(),Thread::_Init2());
    
    uObject* result;
    CACHE_METHOD(Thread::toString_31774_ID(),Thread::_javaClass2(),"toString","()Ljava/lang/String;",GetMethodID,"Id for fallback method java.lang.Thread.toString could not be cached",68);
    if (arg0_) {
        NEW_UNO(U_JNIVAR->CallNonvirtualObjectMethod(arg1_, Thread::_javaClass2(), Thread::toString_31774_ID()),result,::g::Android::java::lang::String_typeof(),::g::Android::java::lang::String*,false,true);
    }
    else
    {
        NEW_UNO(U_JNIVAR->CallObjectMethod(arg1_, Thread::toString_31774_ID()),result,::g::Android::java::lang::String_typeof(),::g::Android::java::lang::String*,false,true);
    }
    ::g::Android::Base::JNI::CheckException1(U_JNIVAR);
    return result;
}
// }

}}}} // ::g::Android::java::lang
