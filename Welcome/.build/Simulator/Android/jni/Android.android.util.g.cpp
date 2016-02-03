// This file was generated based on '(multiple files)'.
// WARNING: Changes might be lost if you edit this file directly.

#include <Android.android.util.AttributeSet.h>
#include <Android.android.util.Property.h>
#include <Android.android.util.SparseArray.h>
#include <Android.android.util.TypedValue.h>
#include <Android.Base.AndroidBindingMacros.h>
#include <Android.Base.JNI.h>
#include <Android.Base.Primitives.jfieldID.h>
#include <Android.Base.Primitives.jmethodID.h>
#include <Android.Base.Primitives.ujclass.h>
#include <Android.Base.Primitives.ujobject.h>
#include <Android.Base.Wrappers.JWrapper.h>
#include <Android.Fallbacks.Android_android_util_AttributeSet.h>
#include <Android.Fallbacks.Android_android_util_Property.h>
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
    type->Reflection.SetFunctions(22,
        new uFunction("getAttributeBooleanValue", NULL, NULL, offsetof(AttributeSet, fp_getAttributeBooleanValue), false, ::g::Uno::Bool_typeof(), 3, ::g::Android::java::lang::String_typeof(), ::g::Android::java::lang::String_typeof(), ::g::Uno::Bool_typeof()),
        new uFunction("getAttributeBooleanValue", NULL, NULL, offsetof(AttributeSet, fp_getAttributeBooleanValue1), false, ::g::Uno::Bool_typeof(), 2, ::g::Uno::Int_typeof(), ::g::Uno::Bool_typeof()),
        new uFunction("getAttributeCount", NULL, NULL, offsetof(AttributeSet, fp_getAttributeCount), false, ::g::Uno::Int_typeof(), 0),
        new uFunction("getAttributeFloatValue", NULL, NULL, offsetof(AttributeSet, fp_getAttributeFloatValue), false, ::g::Uno::Float_typeof(), 3, ::g::Android::java::lang::String_typeof(), ::g::Android::java::lang::String_typeof(), ::g::Uno::Float_typeof()),
        new uFunction("getAttributeFloatValue", NULL, NULL, offsetof(AttributeSet, fp_getAttributeFloatValue1), false, ::g::Uno::Float_typeof(), 2, ::g::Uno::Int_typeof(), ::g::Uno::Float_typeof()),
        new uFunction("getAttributeIntValue", NULL, NULL, offsetof(AttributeSet, fp_getAttributeIntValue), false, ::g::Uno::Int_typeof(), 3, ::g::Android::java::lang::String_typeof(), ::g::Android::java::lang::String_typeof(), ::g::Uno::Int_typeof()),
        new uFunction("getAttributeIntValue", NULL, NULL, offsetof(AttributeSet, fp_getAttributeIntValue1), false, ::g::Uno::Int_typeof(), 2, ::g::Uno::Int_typeof(), ::g::Uno::Int_typeof()),
        new uFunction("getAttributeListValue", NULL, NULL, offsetof(AttributeSet, fp_getAttributeListValue), false, ::g::Uno::Int_typeof(), 4, ::g::Android::java::lang::String_typeof(), ::g::Android::java::lang::String_typeof(), ::g::Android::Runtime::ObjectArray_typeof()->MakeType(::g::Android::java::lang::String_typeof()), ::g::Uno::Int_typeof()),
        new uFunction("getAttributeListValue", NULL, NULL, offsetof(AttributeSet, fp_getAttributeListValue1), false, ::g::Uno::Int_typeof(), 3, ::g::Uno::Int_typeof(), ::g::Android::Runtime::ObjectArray_typeof()->MakeType(::g::Android::java::lang::String_typeof()), ::g::Uno::Int_typeof()),
        new uFunction("getAttributeName", NULL, NULL, offsetof(AttributeSet, fp_getAttributeName), false, ::g::Android::java::lang::String_typeof(), 1, ::g::Uno::Int_typeof()),
        new uFunction("getAttributeNameResource", NULL, NULL, offsetof(AttributeSet, fp_getAttributeNameResource), false, ::g::Uno::Int_typeof(), 1, ::g::Uno::Int_typeof()),
        new uFunction("getAttributeResourceValue", NULL, NULL, offsetof(AttributeSet, fp_getAttributeResourceValue), false, ::g::Uno::Int_typeof(), 3, ::g::Android::java::lang::String_typeof(), ::g::Android::java::lang::String_typeof(), ::g::Uno::Int_typeof()),
        new uFunction("getAttributeResourceValue", NULL, NULL, offsetof(AttributeSet, fp_getAttributeResourceValue1), false, ::g::Uno::Int_typeof(), 2, ::g::Uno::Int_typeof(), ::g::Uno::Int_typeof()),
        new uFunction("getAttributeUnsignedIntValue", NULL, NULL, offsetof(AttributeSet, fp_getAttributeUnsignedIntValue), false, ::g::Uno::Int_typeof(), 3, ::g::Android::java::lang::String_typeof(), ::g::Android::java::lang::String_typeof(), ::g::Uno::Int_typeof()),
        new uFunction("getAttributeUnsignedIntValue", NULL, NULL, offsetof(AttributeSet, fp_getAttributeUnsignedIntValue1), false, ::g::Uno::Int_typeof(), 2, ::g::Uno::Int_typeof(), ::g::Uno::Int_typeof()),
        new uFunction("getAttributeValue", NULL, NULL, offsetof(AttributeSet, fp_getAttributeValue), false, ::g::Android::java::lang::String_typeof(), 2, ::g::Android::java::lang::String_typeof(), ::g::Android::java::lang::String_typeof()),
        new uFunction("getAttributeValue", NULL, NULL, offsetof(AttributeSet, fp_getAttributeValue1), false, ::g::Android::java::lang::String_typeof(), 1, ::g::Uno::Int_typeof()),
        new uFunction("getClassAttribute", NULL, NULL, offsetof(AttributeSet, fp_getClassAttribute), false, ::g::Android::java::lang::String_typeof(), 0),
        new uFunction("getIdAttribute", NULL, NULL, offsetof(AttributeSet, fp_getIdAttribute), false, ::g::Android::java::lang::String_typeof(), 0),
        new uFunction("getIdAttributeResourceValue", NULL, NULL, offsetof(AttributeSet, fp_getIdAttributeResourceValue), false, ::g::Uno::Int_typeof(), 1, ::g::Uno::Int_typeof()),
        new uFunction("getPositionDescription", NULL, NULL, offsetof(AttributeSet, fp_getPositionDescription), false, ::g::Android::java::lang::String_typeof(), 0),
        new uFunction("getStyleAttribute", NULL, NULL, offsetof(AttributeSet, fp_getStyleAttribute), false, ::g::Uno::Int_typeof(), 0));
    return type;
}
// }

// C:\ProgramData\Uno\Packages\Android\0.20.2\Android\android\util\$.uno(11)
// -------------------------------------------------------------------------

// public abstract extern class Property :11
// {
::g::Android::java::lang::Object_type* Property_typeof()
{
    static uSStrong< ::g::Android::java::lang::Object_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 5;
    options.InterfaceCount = 2;
    options.ObjectSize = sizeof(Property);
    options.TypeSize = sizeof(::g::Android::java::lang::Object_type);
    type = (::g::Android::java::lang::Object_type*)uClassType::New("Android.android.util.Property", options);
    type->SetBase(::g::Android::java::lang::Object_typeof());
    type->interface1.fp_Dispose = (void(*)(uObject*))::g::Android::Base::Wrappers::JWrapper__Uno_IDisposable_Dispose_fn;
    type->interface0.fp__GetJavaObject = (void(*)(uObject*, jobject*))::g::Android::Base::Wrappers::JWrapper___GetJavaObject_fn;
    type->interface0.fp__IsSubclassed = (void(*)(uObject*, bool*))::g::Android::Base::Wrappers::JWrapper___IsSubclassed_fn;
    type->SetInterfaces(
        ::g::Android::Base::Wrappers::IJWrapper_typeof(), offsetof(::g::Android::java::lang::Object_type, interface0),
        ::g::Uno::IDisposable_typeof(), offsetof(::g::Android::java::lang::Object_type, interface1));
    type->SetFields(5);
    return type;
}
// }

// C:\ProgramData\Uno\Packages\Android\0.20.2\Android\android\util\$.uno(4079)
// ---------------------------------------------------------------------------

// public sealed extern class SparseArray :4079
// {
::g::Android::java::lang::Object_type* SparseArray_typeof()
{
    static uSStrong< ::g::Android::java::lang::Object_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 7;
    options.InterfaceCount = 2;
    options.ObjectSize = sizeof(SparseArray);
    options.TypeSize = sizeof(::g::Android::java::lang::Object_type);
    type = (::g::Android::java::lang::Object_type*)uClassType::New("Android.android.util.SparseArray", options);
    type->SetBase(::g::Android::java::lang::Object_typeof());
    type->fp_toString = (void(*)(::g::Android::java::lang::Object*, ::g::Android::java::lang::String**))SparseArray__toString_fn;
    type->interface0.fp__GetJavaObject = (void(*)(uObject*, jobject*))::g::Android::Base::Wrappers::JWrapper___GetJavaObject_fn;
    type->interface0.fp__IsSubclassed = (void(*)(uObject*, bool*))::g::Android::Base::Wrappers::JWrapper___IsSubclassed_fn;
    type->interface1.fp_Dispose = (void(*)(uObject*))::g::Android::Base::Wrappers::JWrapper__Uno_IDisposable_Dispose_fn;
    ::TYPES[0] = ::g::Android::java::lang::String_typeof();
    ::TYPES[1] = ::g::Android::Base::Wrappers::JWrapper_typeof();
    type->SetInterfaces(
        ::g::Android::Base::Wrappers::IJWrapper_typeof(), offsetof(::g::Android::java::lang::Object_type, interface0),
        ::g::Uno::IDisposable_typeof(), offsetof(::g::Android::java::lang::Object_type, interface1));
    type->SetFields(5,
        ::g::Android::Base::Primitives::ujclass_typeof(), (uintptr_t)&::g::Android::android::util::SparseArray::_javaClass2_, uFieldFlagsStatic,
        ::g::Android::Base::Primitives::jmethodID_typeof(), (uintptr_t)&::g::Android::android::util::SparseArray::toString_20590_ID_, uFieldFlagsStatic);
    type->Reflection.SetFunctions(2,
        new uFunction("_Init", NULL, (void*)SparseArray___Init2_fn, 0, true, uVoid_typeof(), 0),
        new uFunction("toString_IMPL_20590", NULL, (void*)SparseArray__toString_IMPL_20590_fn, 0, true, ::g::Android::Base::Wrappers::IJWrapper_typeof(), 2, ::g::Uno::Bool_typeof(), ::g::Android::Base::Primitives::ujobject_typeof()));
    return type;
}

// public static extern new void _Init() :4083
void SparseArray___Init2_fn()
{
    SparseArray::_Init2();
}

// public override sealed Android.java.lang.String toString() :4212
void SparseArray__toString_fn(SparseArray* __this, ::g::Android::java::lang::String** __retval)
{
    return *__retval = uCast< ::g::Android::java::lang::String*>(SparseArray::toString_IMPL_20590(__this->_subclassed, __this->_javaObject), ::TYPES[0/*Android.java.lang.String*/]), void();
}

// public static extern Android.Base.Wrappers.IJWrapper toString_IMPL_20590(bool arg0, Android.Base.Primitives.ujobject arg1) :4269
void SparseArray__toString_IMPL_20590_fn(bool* arg0_, jobject* arg1_, uObject** __retval)
{
    *__retval = SparseArray::toString_IMPL_20590(*arg0_, *arg1_);
}

jclass SparseArray::_javaClass2_;
jmethodID SparseArray::toString_20590_ID_;

// public static extern new void _Init() [static] :4083
void SparseArray::_Init2()
{
    if (SparseArray::_javaClass2()) { return; }
    INIT_JNI;
    SparseArray::_javaClass2() = NEW_GLOBAL_REF(jclass,LOAD_SYS_CLASS("android/util/SparseArray"));
    ::g::Android::Base::JNI::CheckException1(U_JNIVAR);
    if (!SparseArray::_javaClass2()) { THROW_UNO_EXCEPTION("Unable to cache class 'android.util.SparseArray'", 48);; }
}

// public static extern Android.Base.Wrappers.IJWrapper toString_IMPL_20590(bool arg0, Android.Base.Primitives.ujobject arg1) [static] :4269
uObject* SparseArray::toString_IMPL_20590(bool arg0_, jobject arg1_)
{
    INIT_JNI;
    CLASS_INIT(SparseArray::_javaClass2(),SparseArray::_Init2());
    
    uObject* result;
    CACHE_METHOD(SparseArray::toString_20590_ID(),SparseArray::_javaClass2(),"toString","()Ljava/lang/String;",GetMethodID,"Id for fallback method android.util.SparseArray.toString could not be cached",76);
    if (arg0_) {
        NEW_UNO(U_JNIVAR->CallNonvirtualObjectMethod(arg1_, SparseArray::_javaClass2(), SparseArray::toString_20590_ID()),result,::g::Android::java::lang::String_typeof(),::g::Android::java::lang::String*,false,true);
    }
    else
    {
        NEW_UNO(U_JNIVAR->CallObjectMethod(arg1_, SparseArray::toString_20590_ID()),result,::g::Android::java::lang::String_typeof(),::g::Android::java::lang::String*,false,true);
    }
    ::g::Android::Base::JNI::CheckException1(U_JNIVAR);
    return result;
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
    type->Reflection.SetFunctions(3,
        new uFunction("_Init", NULL, (void*)TypedValue___Init2_fn, 0, true, uVoid_typeof(), 0),
        new uFunction("get_COMPLEX_UNIT_DIP", NULL, (void*)TypedValue__get_COMPLEX_UNIT_DIP_fn, 0, true, ::g::Uno::Int_typeof(), 0),
        new uFunction("toString_IMPL_20716", NULL, (void*)TypedValue__toString_IMPL_20716_fn, 0, true, ::g::Android::Base::Wrappers::IJWrapper_typeof(), 2, ::g::Uno::Bool_typeof(), ::g::Android::Base::Primitives::ujobject_typeof()));
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
