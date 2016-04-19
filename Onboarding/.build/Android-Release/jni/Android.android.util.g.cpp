// This file was generated based on '(multiple files)'.
// WARNING: Changes might be lost if you edit this file directly.

#include <Android.android.util.AttributeSet.h>
#include <Android.android.util.TypedValue.h>
#include <Android.Base.AndroidBindingMacros.h>
#include <Android.Base.JNI.h>
#include <Android.Base.Primitives.jfieldID.h>
#include <Android.Base.Primitives.jmethodID.h>
#include <Android.Base.Primitives.ujclass.h>
#include <Android.Base.Primitives.ujobject.h>
#include <Android.Base.Wrappers.JWrapper.h>
#include <Android.Fallbacks.Android_android_util_AttributeSet.h>
#include <Android.java.lang.String.h>
#include <Android.Runtime.ObjectArray-1.h>
#include <Uno.Bool.h>
#include <Uno.Exception.h>
#include <Uno.Float.h>
#include <Uno.Int.h>
static uType* TYPES[2];

namespace g{
namespace Android{
namespace android{
namespace util{

// C:\ProgramData\Uno\Packages\Android\0.20.2\Android\android\util\$.uno(6179)
// ---------------------------------------------------------------------------

// public abstract extern interface AttributeSet :6179
// {
uInterfaceType* AttributeSet_typeof()
{
    static uSStrong<uInterfaceType*> type;
    if (type != NULL) return type;

    type = uInterfaceType::New("Android.android.util.AttributeSet", 0, 0);
    return type;
}
// }

// C:\ProgramData\Uno\Packages\Android\0.20.2\Android\android\util\$.uno(5086)
// ---------------------------------------------------------------------------

// public sealed extern class TypedValue :5086
// {
::g::Android::java::lang::Object_type* TypedValue_typeof()
{
    static uSStrong< ::g::Android::java::lang::Object_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 8;
    options.InterfaceCount = 2;
    options.ObjectSize = sizeof(TypedValue);
    options.TypeSize = sizeof(::g::Android::java::lang::Object_type);
    type = (::g::Android::java::lang::Object_type*)uClassType::New("Android.android.util.TypedValue", options);
    type->SetBase(::g::Android::java::lang::Object_typeof());
    type->fp_toString = (void(*)(::g::Android::java::lang::Object*, ::g::Android::java::lang::String**))TypedValue__toString_fn;
    type->interface1.fp_Dispose = (void(*)(uObject*))::g::Android::Base::Wrappers::JWrapper__Uno_IDisposable_Dispose_fn;
    type->interface0.fp__GetJavaObject = (void(*)(uObject*, jobject*))::g::Android::Base::Wrappers::JWrapper___GetJavaObject_fn;
    type->interface0.fp__IsSubclassed = (void(*)(uObject*, bool*))::g::Android::Base::Wrappers::JWrapper___IsSubclassed_fn;
    ::TYPES[0] = ::g::Android::java::lang::String_typeof();
    ::TYPES[1] = ::g::Android::Base::Wrappers::JWrapper_typeof();
    type->SetInterfaces(
        ::g::Android::Base::Wrappers::IJWrapper_typeof(), offsetof(::g::Android::java::lang::Object_type, interface0),
        ::g::Uno::IDisposable_typeof(), offsetof(::g::Android::java::lang::Object_type, interface1));
    type->SetFields(5,
        ::g::Android::Base::Primitives::ujclass_typeof(), (uintptr_t)&::g::Android::android::util::TypedValue::_javaClass2_, uFieldFlagsStatic,
        ::g::Android::Base::Primitives::jfieldID_typeof(), (uintptr_t)&::g::Android::android::util::TypedValue::COMPLEX_UNIT_DIP_20678_ID_, uFieldFlagsStatic,
        ::g::Android::Base::Primitives::jmethodID_typeof(), (uintptr_t)&::g::Android::android::util::TypedValue::toString_20716_ID_, uFieldFlagsStatic);
    return type;
}

// public static extern new void _Init() :5090
void TypedValue___Init2_fn()
{
    TypedValue::_Init2();
}

// public static int get_COMPLEX_UNIT_DIP() :5452
void TypedValue__get_COMPLEX_UNIT_DIP_fn(int* __retval)
{
    *__retval = TypedValue::COMPLEX_UNIT_DIP();
}

// public override sealed Android.java.lang.String toString() :6008
void TypedValue__toString_fn(TypedValue* __this, ::g::Android::java::lang::String** __retval)
{
    return *__retval = uCast< ::g::Android::java::lang::String*>(TypedValue::toString_IMPL_20716(__this->_subclassed, __this->_javaObject), ::TYPES[0/*Android.java.lang.String*/]), void();
}

// public static extern Android.Base.Wrappers.IJWrapper toString_IMPL_20716(bool arg0, Android.Base.Primitives.ujobject arg1) :6055
void TypedValue__toString_IMPL_20716_fn(bool* arg0_, jobject* arg1_, uObject** __retval)
{
    *__retval = TypedValue::toString_IMPL_20716(*arg0_, *arg1_);
}

jclass TypedValue::_javaClass2_;
jfieldID TypedValue::COMPLEX_UNIT_DIP_20678_ID_;
jmethodID TypedValue::toString_20716_ID_;

// public static extern new void _Init() [static] :5090
void TypedValue::_Init2()
{
    if (TypedValue::_javaClass2()) { return; }
    INIT_JNI;
    TypedValue::_javaClass2() = NEW_GLOBAL_REF(jclass,LOAD_SYS_CLASS("android/util/TypedValue"));
    ::g::Android::Base::JNI::CheckException1(U_JNIVAR);
    if (!TypedValue::_javaClass2()) { THROW_UNO_EXCEPTION("Unable to cache class 'android.util.TypedValue'", 47);; }
}

// public static extern Android.Base.Wrappers.IJWrapper toString_IMPL_20716(bool arg0, Android.Base.Primitives.ujobject arg1) [static] :6055
uObject* TypedValue::toString_IMPL_20716(bool arg0_, jobject arg1_)
{
    INIT_JNI;
    CLASS_INIT(TypedValue::_javaClass2(),TypedValue::_Init2());
    
    uObject* result;
    CACHE_METHOD(TypedValue::toString_20716_ID(),TypedValue::_javaClass2(),"toString","()Ljava/lang/String;",GetMethodID,"Id for fallback method android.util.TypedValue.toString could not be cached",75);
    if (arg0_) {
        NEW_UNO(U_JNIVAR->CallNonvirtualObjectMethod(arg1_, TypedValue::_javaClass2(), TypedValue::toString_20716_ID()),result,::g::Android::java::lang::String_typeof(),::g::Android::java::lang::String*,false,true);
    }
    else
    {
        NEW_UNO(U_JNIVAR->CallObjectMethod(arg1_, TypedValue::toString_20716_ID()),result,::g::Android::java::lang::String_typeof(),::g::Android::java::lang::String*,false,true);
    }
    ::g::Android::Base::JNI::CheckException1(U_JNIVAR);
    return result;
}

// public static int get_COMPLEX_UNIT_DIP() [static] :5452
int TypedValue::COMPLEX_UNIT_DIP()
{
    INIT_JNI;
    CLASS_INIT(TypedValue::_javaClass2(),TypedValue::_Init2());
    if (::uEnterCriticalIfNull(&TypedValue::COMPLEX_UNIT_DIP_20678_ID())) {;
    CACHE_FIELD(TypedValue::COMPLEX_UNIT_DIP_20678_ID(),TypedValue::_javaClass2(),"COMPLEX_UNIT_DIP","I",GetStaticFieldID,"Id for field TypedValue.COMPLEX_UNIT_DIP could not be cached",60);
    ::uExitCritical();;
    };
    int result;;
    result = ((int)U_JNIVAR->GetStaticIntField(TypedValue::_javaClass2(), TypedValue::COMPLEX_UNIT_DIP_20678_ID()));;
    return result;
}
// }

}}}} // ::g::Android::android::util
