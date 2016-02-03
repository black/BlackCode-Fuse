// This file was generated based on '(multiple files)'.
// WARNING: Changes might be lost if you edit this file directly.

#include <Android.android.os.Bundle.h>
#include <Android.android.os.IBinder.h>
#include <Android.android.os.Parcel.h>
#include <Android.android.view.inputmethod.CompletionInfo.h>
#include <Android.android.view.inputmethod.CorrectionInfo.h>
#include <Android.android.view.inputmethod.EditorInfo.h>
#include <Android.android.view.inputmethod.ExtractedText.h>
#include <Android.android.view.inputmethod.ExtractedTextRequest.h>
#include <Android.android.view.inputmethod.InputConnection.h>
#include <Android.android.view.inputmethod.InputMethodManager.h>
#include <Android.android.view.KeyEvent.h>
#include <Android.android.view.View.h>
#include <Android.Base.AndroidBindingMacros.h>
#include <Android.Base.JNI.h>
#include <Android.Base.Primitives.jfieldID.h>
#include <Android.Base.Primitives.jmethodID.h>
#include <Android.Base.Primitives.ujclass.h>
#include <Android.Base.Primitives.ujobject.h>
#include <Android.Base.Wrappers.JWrapper.h>
#include <Android.Fallbacks.Android_android_view_inputmethod_InputConnection.h>
#include <Android.java.lang.CharSequence.h>
#include <Android.java.lang.String.h>
#include <Uno.Bool.h>
#include <Uno.Exception.h>
#include <Uno.Int.h>
static uType* TYPES[3];

namespace g{
namespace Android{
namespace android{
namespace view{
namespace inputmethod{

// C:\ProgramData\Uno\Packages\Android\0.20.2\Android\android\view\inputmethod\$.uno(282)
// --------------------------------------------------------------------------------------

// public sealed extern class CompletionInfo :282
// {
CompletionInfo_type* CompletionInfo_typeof()
{
    static uSStrong<CompletionInfo_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 9;
    options.InterfaceCount = 3;
    options.ObjectSize = sizeof(CompletionInfo);
    options.TypeSize = sizeof(CompletionInfo_type);
    type = (CompletionInfo_type*)uClassType::New("Android.android.view.inputmethod.CompletionInfo", options);
    type->SetBase(::g::Android::java::lang::Object_typeof());
    type->fp_toString = (void(*)(::g::Android::java::lang::Object*, ::g::Android::java::lang::String**))CompletionInfo__toString_fn;
    type->interface2.fp_describeContents = (void(*)(uObject*, int*))CompletionInfo__describeContents_fn;
    type->interface2.fp_writeToParcel = (void(*)(uObject*, ::g::Android::android::os::Parcel*, int*))CompletionInfo__writeToParcel_fn;
    type->interface0.fp__GetJavaObject = (void(*)(uObject*, jobject*))::g::Android::Base::Wrappers::JWrapper___GetJavaObject_fn;
    type->interface0.fp__IsSubclassed = (void(*)(uObject*, bool*))::g::Android::Base::Wrappers::JWrapper___IsSubclassed_fn;
    type->interface1.fp_Dispose = (void(*)(uObject*))::g::Android::Base::Wrappers::JWrapper__Uno_IDisposable_Dispose_fn;
    ::TYPES[0] = ::g::Android::Base::Wrappers::JWrapper_typeof();
    ::TYPES[1] = ::g::Android::java::lang::String_typeof();
    ::TYPES[2] = ::g::Android::Base::Wrappers::IJWrapper_typeof();
    type->SetInterfaces(
        ::g::Android::Base::Wrappers::IJWrapper_typeof(), offsetof(CompletionInfo_type, interface0),
        ::g::Uno::IDisposable_typeof(), offsetof(CompletionInfo_type, interface1),
        ::g::Android::android::os::Parcelable_typeof(), offsetof(CompletionInfo_type, interface2));
    type->SetFields(5,
        ::g::Android::Base::Primitives::ujclass_typeof(), (uintptr_t)&::g::Android::android::view::inputmethod::CompletionInfo::_javaClass2_, uFieldFlagsStatic,
        ::g::Android::Base::Primitives::jmethodID_typeof(), (uintptr_t)&::g::Android::android::view::inputmethod::CompletionInfo::describeContents_21284_ID_, uFieldFlagsStatic,
        ::g::Android::Base::Primitives::jmethodID_typeof(), (uintptr_t)&::g::Android::android::view::inputmethod::CompletionInfo::toString_21282_ID_, uFieldFlagsStatic,
        ::g::Android::Base::Primitives::jmethodID_typeof(), (uintptr_t)&::g::Android::android::view::inputmethod::CompletionInfo::writeToParcel_21283_ID_, uFieldFlagsStatic);
    type->Reflection.SetFunctions(6,
        new uFunction("_Init", NULL, (void*)CompletionInfo___Init2_fn, 0, true, uVoid_typeof(), 0),
        new uFunction("describeContents", NULL, (void*)CompletionInfo__describeContents_fn, 0, false, ::g::Uno::Int_typeof(), 0),
        new uFunction("describeContents_IMPL_21284", NULL, (void*)CompletionInfo__describeContents_IMPL_21284_fn, 0, true, ::g::Uno::Int_typeof(), 2, ::g::Uno::Bool_typeof(), ::g::Android::Base::Primitives::ujobject_typeof()),
        new uFunction("toString_IMPL_21282", NULL, (void*)CompletionInfo__toString_IMPL_21282_fn, 0, true, ::g::Android::Base::Wrappers::IJWrapper_typeof(), 2, ::g::Uno::Bool_typeof(), ::g::Android::Base::Primitives::ujobject_typeof()),
        new uFunction("writeToParcel", NULL, (void*)CompletionInfo__writeToParcel_fn, 0, false, uVoid_typeof(), 2, ::g::Android::android::os::Parcel_typeof(), ::g::Uno::Int_typeof()),
        new uFunction("writeToParcel_IMPL_21283", NULL, (void*)CompletionInfo__writeToParcel_IMPL_21283_fn, 0, true, uVoid_typeof(), 4, ::g::Uno::Bool_typeof(), ::g::Android::Base::Primitives::ujobject_typeof(), ::g::Android::Base::Wrappers::IJWrapper_typeof(), ::g::Uno::Int_typeof()));
    return type;
}

// public static extern new void _Init() :286
void CompletionInfo___Init2_fn()
{
    CompletionInfo::_Init2();
}

// public int describeContents() :376
void CompletionInfo__describeContents_fn(CompletionInfo* __this, int* __retval)
{
    *__retval = __this->describeContents();
}

// public static extern int describeContents_IMPL_21284(bool arg0, Android.Base.Primitives.ujobject arg1) :403
void CompletionInfo__describeContents_IMPL_21284_fn(bool* arg0_, jobject* arg1_, int* __retval)
{
    *__retval = CompletionInfo::describeContents_IMPL_21284(*arg0_, *arg1_);
}

// public override sealed Android.java.lang.String toString() :364
void CompletionInfo__toString_fn(CompletionInfo* __this, ::g::Android::java::lang::String** __retval)
{
    return *__retval = uCast< ::g::Android::java::lang::String*>(CompletionInfo::toString_IMPL_21282(__this->_subclassed, __this->_javaObject), ::TYPES[1/*Android.java.lang.String*/]), void();
}

// public static extern Android.Base.Wrappers.IJWrapper toString_IMPL_21282(bool arg0, Android.Base.Primitives.ujobject arg1) :397
void CompletionInfo__toString_IMPL_21282_fn(bool* arg0_, jobject* arg1_, uObject** __retval)
{
    *__retval = CompletionInfo::toString_IMPL_21282(*arg0_, *arg1_);
}

// public void writeToParcel(Android.android.os.Parcel arg0, int arg1) :370
void CompletionInfo__writeToParcel_fn(CompletionInfo* __this, ::g::Android::android::os::Parcel* arg0, int* arg1)
{
    __this->writeToParcel(arg0, *arg1);
}

// public static extern void writeToParcel_IMPL_21283(bool arg0, Android.Base.Primitives.ujobject arg1, Android.Base.Wrappers.IJWrapper arg2, int arg3) :400
void CompletionInfo__writeToParcel_IMPL_21283_fn(bool* arg0_, jobject* arg1_, uObject* arg2_, int* arg3_)
{
    CompletionInfo::writeToParcel_IMPL_21283(*arg0_, *arg1_, arg2_, *arg3_);
}

jclass CompletionInfo::_javaClass2_;
jmethodID CompletionInfo::describeContents_21284_ID_;
jmethodID CompletionInfo::toString_21282_ID_;
jmethodID CompletionInfo::writeToParcel_21283_ID_;

// public int describeContents() [instance] :376
int CompletionInfo::describeContents()
{
    return CompletionInfo::describeContents_IMPL_21284(_subclassed, _javaObject);
}

// public void writeToParcel(Android.android.os.Parcel arg0, int arg1) [instance] :370
void CompletionInfo::writeToParcel(::g::Android::android::os::Parcel* arg0, int arg1)
{
    int arg1_ = arg1;
    CompletionInfo::writeToParcel_IMPL_21283(_subclassed, _javaObject, (uObject*)arg0, arg1_);
}

// public static extern new void _Init() [static] :286
void CompletionInfo::_Init2()
{
    if (CompletionInfo::_javaClass2()) { return; }
    INIT_JNI;
    CompletionInfo::_javaClass2() = NEW_GLOBAL_REF(jclass,LOAD_SYS_CLASS("android/view/inputmethod/CompletionInfo"));
    ::g::Android::Base::JNI::CheckException1(U_JNIVAR);
    if (!CompletionInfo::_javaClass2()) { THROW_UNO_EXCEPTION("Unable to cache class 'android.view.inputmethod.CompletionInfo'", 63);; }
}

// public static extern int describeContents_IMPL_21284(bool arg0, Android.Base.Primitives.ujobject arg1) [static] :403
int CompletionInfo::describeContents_IMPL_21284(bool arg0_, jobject arg1_)
{
    INIT_JNI;
    CLASS_INIT(CompletionInfo::_javaClass2(),CompletionInfo::_Init2());
    
    int result;
    CACHE_METHOD(CompletionInfo::describeContents_21284_ID(),CompletionInfo::_javaClass2(),"describeContents","()I",GetMethodID,"Id for fallback method android.view.inputmethod.CompletionInfo.describeContents could not be cached",99);
    if (arg0_) {
        result = ((int)U_JNIVAR->CallNonvirtualIntMethod(arg1_, CompletionInfo::_javaClass2(), CompletionInfo::describeContents_21284_ID()));
    }
    else
    {
        result = ((int)U_JNIVAR->CallIntMethod(arg1_, CompletionInfo::describeContents_21284_ID()));
    }
    ::g::Android::Base::JNI::CheckException1(U_JNIVAR);
    return result;
}

// public static extern Android.Base.Wrappers.IJWrapper toString_IMPL_21282(bool arg0, Android.Base.Primitives.ujobject arg1) [static] :397
uObject* CompletionInfo::toString_IMPL_21282(bool arg0_, jobject arg1_)
{
    INIT_JNI;
    CLASS_INIT(CompletionInfo::_javaClass2(),CompletionInfo::_Init2());
    
    uObject* result;
    CACHE_METHOD(CompletionInfo::toString_21282_ID(),CompletionInfo::_javaClass2(),"toString","()Ljava/lang/String;",GetMethodID,"Id for fallback method android.view.inputmethod.CompletionInfo.toString could not be cached",91);
    if (arg0_) {
        NEW_UNO(U_JNIVAR->CallNonvirtualObjectMethod(arg1_, CompletionInfo::_javaClass2(), CompletionInfo::toString_21282_ID()),result,::g::Android::java::lang::String_typeof(),::g::Android::java::lang::String*,false,true);
    }
    else
    {
        NEW_UNO(U_JNIVAR->CallObjectMethod(arg1_, CompletionInfo::toString_21282_ID()),result,::g::Android::java::lang::String_typeof(),::g::Android::java::lang::String*,false,true);
    }
    ::g::Android::Base::JNI::CheckException1(U_JNIVAR);
    return result;
}

// public static extern void writeToParcel_IMPL_21283(bool arg0, Android.Base.Primitives.ujobject arg1, Android.Base.Wrappers.IJWrapper arg2, int arg3) [static] :400
void CompletionInfo::writeToParcel_IMPL_21283(bool arg0_, jobject arg1_, uObject* arg2_, int arg3_)
{
    INIT_JNI;
    CLASS_INIT(CompletionInfo::_javaClass2(),CompletionInfo::_Init2());
    jobject _obArg2 = ((!arg2_) ? NULL : ::g::Android::Base::Wrappers::IJWrapper::_GetJavaObject(uInterface(arg2_, ::g::Android::Base::Wrappers::IJWrapper_typeof())));
    CACHE_METHOD(CompletionInfo::writeToParcel_21283_ID(),CompletionInfo::_javaClass2(),"writeToParcel","(Landroid/os/Parcel;I)V",GetMethodID,"Id for fallback method android.view.inputmethod.CompletionInfo.writeToParcel could not be cached",96);
    if (arg0_) {
        U_JNIVAR->CallNonvirtualVoidMethod(arg1_, CompletionInfo::_javaClass2(), CompletionInfo::writeToParcel_21283_ID(), _obArg2, ((jint)arg3_));
    }
    else
    {
        U_JNIVAR->CallVoidMethod(arg1_, CompletionInfo::writeToParcel_21283_ID(), _obArg2, ((jint)arg3_));
    }
    ::g::Android::Base::JNI::CheckException1(U_JNIVAR);
}
// }

// C:\ProgramData\Uno\Packages\Android\0.20.2\Android\android\view\inputmethod\$.uno(418)
// --------------------------------------------------------------------------------------

// public sealed extern class CorrectionInfo :418
// {
CorrectionInfo_type* CorrectionInfo_typeof()
{
    static uSStrong<CorrectionInfo_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 9;
    options.InterfaceCount = 3;
    options.ObjectSize = sizeof(CorrectionInfo);
    options.TypeSize = sizeof(CorrectionInfo_type);
    type = (CorrectionInfo_type*)uClassType::New("Android.android.view.inputmethod.CorrectionInfo", options);
    type->SetBase(::g::Android::java::lang::Object_typeof());
    type->fp_toString = (void(*)(::g::Android::java::lang::Object*, ::g::Android::java::lang::String**))CorrectionInfo__toString_fn;
    type->interface2.fp_describeContents = (void(*)(uObject*, int*))CorrectionInfo__describeContents_fn;
    type->interface2.fp_writeToParcel = (void(*)(uObject*, ::g::Android::android::os::Parcel*, int*))CorrectionInfo__writeToParcel_fn;
    type->interface0.fp__GetJavaObject = (void(*)(uObject*, jobject*))::g::Android::Base::Wrappers::JWrapper___GetJavaObject_fn;
    type->interface0.fp__IsSubclassed = (void(*)(uObject*, bool*))::g::Android::Base::Wrappers::JWrapper___IsSubclassed_fn;
    type->interface1.fp_Dispose = (void(*)(uObject*))::g::Android::Base::Wrappers::JWrapper__Uno_IDisposable_Dispose_fn;
    ::TYPES[0] = ::g::Android::Base::Wrappers::JWrapper_typeof();
    ::TYPES[1] = ::g::Android::java::lang::String_typeof();
    ::TYPES[2] = ::g::Android::Base::Wrappers::IJWrapper_typeof();
    type->SetInterfaces(
        ::g::Android::Base::Wrappers::IJWrapper_typeof(), offsetof(CorrectionInfo_type, interface0),
        ::g::Uno::IDisposable_typeof(), offsetof(CorrectionInfo_type, interface1),
        ::g::Android::android::os::Parcelable_typeof(), offsetof(CorrectionInfo_type, interface2));
    type->SetFields(5,
        ::g::Android::Base::Primitives::ujclass_typeof(), (uintptr_t)&::g::Android::android::view::inputmethod::CorrectionInfo::_javaClass2_, uFieldFlagsStatic,
        ::g::Android::Base::Primitives::jmethodID_typeof(), (uintptr_t)&::g::Android::android::view::inputmethod::CorrectionInfo::describeContents_21292_ID_, uFieldFlagsStatic,
        ::g::Android::Base::Primitives::jmethodID_typeof(), (uintptr_t)&::g::Android::android::view::inputmethod::CorrectionInfo::toString_21290_ID_, uFieldFlagsStatic,
        ::g::Android::Base::Primitives::jmethodID_typeof(), (uintptr_t)&::g::Android::android::view::inputmethod::CorrectionInfo::writeToParcel_21291_ID_, uFieldFlagsStatic);
    type->Reflection.SetFunctions(6,
        new uFunction("_Init", NULL, (void*)CorrectionInfo___Init2_fn, 0, true, uVoid_typeof(), 0),
        new uFunction("describeContents", NULL, (void*)CorrectionInfo__describeContents_fn, 0, false, ::g::Uno::Int_typeof(), 0),
        new uFunction("describeContents_IMPL_21292", NULL, (void*)CorrectionInfo__describeContents_IMPL_21292_fn, 0, true, ::g::Uno::Int_typeof(), 2, ::g::Uno::Bool_typeof(), ::g::Android::Base::Primitives::ujobject_typeof()),
        new uFunction("toString_IMPL_21290", NULL, (void*)CorrectionInfo__toString_IMPL_21290_fn, 0, true, ::g::Android::Base::Wrappers::IJWrapper_typeof(), 2, ::g::Uno::Bool_typeof(), ::g::Android::Base::Primitives::ujobject_typeof()),
        new uFunction("writeToParcel", NULL, (void*)CorrectionInfo__writeToParcel_fn, 0, false, uVoid_typeof(), 2, ::g::Android::android::os::Parcel_typeof(), ::g::Uno::Int_typeof()),
        new uFunction("writeToParcel_IMPL_21291", NULL, (void*)CorrectionInfo__writeToParcel_IMPL_21291_fn, 0, true, uVoid_typeof(), 4, ::g::Uno::Bool_typeof(), ::g::Android::Base::Primitives::ujobject_typeof(), ::g::Android::Base::Wrappers::IJWrapper_typeof(), ::g::Uno::Int_typeof()));
    return type;
}

// public static extern new void _Init() :422
void CorrectionInfo___Init2_fn()
{
    CorrectionInfo::_Init2();
}

// public int describeContents() :490
void CorrectionInfo__describeContents_fn(CorrectionInfo* __this, int* __retval)
{
    *__retval = __this->describeContents();
}

// public static extern int describeContents_IMPL_21292(bool arg0, Android.Base.Primitives.ujobject arg1) :513
void CorrectionInfo__describeContents_IMPL_21292_fn(bool* arg0_, jobject* arg1_, int* __retval)
{
    *__retval = CorrectionInfo::describeContents_IMPL_21292(*arg0_, *arg1_);
}

// public override sealed Android.java.lang.String toString() :478
void CorrectionInfo__toString_fn(CorrectionInfo* __this, ::g::Android::java::lang::String** __retval)
{
    return *__retval = uCast< ::g::Android::java::lang::String*>(CorrectionInfo::toString_IMPL_21290(__this->_subclassed, __this->_javaObject), ::TYPES[1/*Android.java.lang.String*/]), void();
}

// public static extern Android.Base.Wrappers.IJWrapper toString_IMPL_21290(bool arg0, Android.Base.Primitives.ujobject arg1) :507
void CorrectionInfo__toString_IMPL_21290_fn(bool* arg0_, jobject* arg1_, uObject** __retval)
{
    *__retval = CorrectionInfo::toString_IMPL_21290(*arg0_, *arg1_);
}

// public void writeToParcel(Android.android.os.Parcel arg0, int arg1) :484
void CorrectionInfo__writeToParcel_fn(CorrectionInfo* __this, ::g::Android::android::os::Parcel* arg0, int* arg1)
{
    __this->writeToParcel(arg0, *arg1);
}

// public static extern void writeToParcel_IMPL_21291(bool arg0, Android.Base.Primitives.ujobject arg1, Android.Base.Wrappers.IJWrapper arg2, int arg3) :510
void CorrectionInfo__writeToParcel_IMPL_21291_fn(bool* arg0_, jobject* arg1_, uObject* arg2_, int* arg3_)
{
    CorrectionInfo::writeToParcel_IMPL_21291(*arg0_, *arg1_, arg2_, *arg3_);
}

jclass CorrectionInfo::_javaClass2_;
jmethodID CorrectionInfo::describeContents_21292_ID_;
jmethodID CorrectionInfo::toString_21290_ID_;
jmethodID CorrectionInfo::writeToParcel_21291_ID_;

// public int describeContents() [instance] :490
int CorrectionInfo::describeContents()
{
    return CorrectionInfo::describeContents_IMPL_21292(_subclassed, _javaObject);
}

// public void writeToParcel(Android.android.os.Parcel arg0, int arg1) [instance] :484
void CorrectionInfo::writeToParcel(::g::Android::android::os::Parcel* arg0, int arg1)
{
    int arg1_ = arg1;
    CorrectionInfo::writeToParcel_IMPL_21291(_subclassed, _javaObject, (uObject*)arg0, arg1_);
}

// public static extern new void _Init() [static] :422
void CorrectionInfo::_Init2()
{
    if (CorrectionInfo::_javaClass2()) { return; }
    INIT_JNI;
    CorrectionInfo::_javaClass2() = NEW_GLOBAL_REF(jclass,LOAD_SYS_CLASS("android/view/inputmethod/CorrectionInfo"));
    ::g::Android::Base::JNI::CheckException1(U_JNIVAR);
    if (!CorrectionInfo::_javaClass2()) { THROW_UNO_EXCEPTION("Unable to cache class 'android.view.inputmethod.CorrectionInfo'", 63);; }
}

// public static extern int describeContents_IMPL_21292(bool arg0, Android.Base.Primitives.ujobject arg1) [static] :513
int CorrectionInfo::describeContents_IMPL_21292(bool arg0_, jobject arg1_)
{
    INIT_JNI;
    CLASS_INIT(CorrectionInfo::_javaClass2(),CorrectionInfo::_Init2());
    
    int result;
    CACHE_METHOD(CorrectionInfo::describeContents_21292_ID(),CorrectionInfo::_javaClass2(),"describeContents","()I",GetMethodID,"Id for fallback method android.view.inputmethod.CorrectionInfo.describeContents could not be cached",99);
    if (arg0_) {
        result = ((int)U_JNIVAR->CallNonvirtualIntMethod(arg1_, CorrectionInfo::_javaClass2(), CorrectionInfo::describeContents_21292_ID()));
    }
    else
    {
        result = ((int)U_JNIVAR->CallIntMethod(arg1_, CorrectionInfo::describeContents_21292_ID()));
    }
    ::g::Android::Base::JNI::CheckException1(U_JNIVAR);
    return result;
}

// public static extern Android.Base.Wrappers.IJWrapper toString_IMPL_21290(bool arg0, Android.Base.Primitives.ujobject arg1) [static] :507
uObject* CorrectionInfo::toString_IMPL_21290(bool arg0_, jobject arg1_)
{
    INIT_JNI;
    CLASS_INIT(CorrectionInfo::_javaClass2(),CorrectionInfo::_Init2());
    
    uObject* result;
    CACHE_METHOD(CorrectionInfo::toString_21290_ID(),CorrectionInfo::_javaClass2(),"toString","()Ljava/lang/String;",GetMethodID,"Id for fallback method android.view.inputmethod.CorrectionInfo.toString could not be cached",91);
    if (arg0_) {
        NEW_UNO(U_JNIVAR->CallNonvirtualObjectMethod(arg1_, CorrectionInfo::_javaClass2(), CorrectionInfo::toString_21290_ID()),result,::g::Android::java::lang::String_typeof(),::g::Android::java::lang::String*,false,true);
    }
    else
    {
        NEW_UNO(U_JNIVAR->CallObjectMethod(arg1_, CorrectionInfo::toString_21290_ID()),result,::g::Android::java::lang::String_typeof(),::g::Android::java::lang::String*,false,true);
    }
    ::g::Android::Base::JNI::CheckException1(U_JNIVAR);
    return result;
}

// public static extern void writeToParcel_IMPL_21291(bool arg0, Android.Base.Primitives.ujobject arg1, Android.Base.Wrappers.IJWrapper arg2, int arg3) [static] :510
void CorrectionInfo::writeToParcel_IMPL_21291(bool arg0_, jobject arg1_, uObject* arg2_, int arg3_)
{
    INIT_JNI;
    CLASS_INIT(CorrectionInfo::_javaClass2(),CorrectionInfo::_Init2());
    jobject _obArg2 = ((!arg2_) ? NULL : ::g::Android::Base::Wrappers::IJWrapper::_GetJavaObject(uInterface(arg2_, ::g::Android::Base::Wrappers::IJWrapper_typeof())));
    CACHE_METHOD(CorrectionInfo::writeToParcel_21291_ID(),CorrectionInfo::_javaClass2(),"writeToParcel","(Landroid/os/Parcel;I)V",GetMethodID,"Id for fallback method android.view.inputmethod.CorrectionInfo.writeToParcel could not be cached",96);
    if (arg0_) {
        U_JNIVAR->CallNonvirtualVoidMethod(arg1_, CorrectionInfo::_javaClass2(), CorrectionInfo::writeToParcel_21291_ID(), _obArg2, ((jint)arg3_));
    }
    else
    {
        U_JNIVAR->CallVoidMethod(arg1_, CorrectionInfo::writeToParcel_21291_ID(), _obArg2, ((jint)arg3_));
    }
    ::g::Android::Base::JNI::CheckException1(U_JNIVAR);
}
// }

// C:\ProgramData\Uno\Packages\Android\0.20.2\Android\android\view\inputmethod\$.uno(528)
// --------------------------------------------------------------------------------------

// public sealed extern class EditorInfo :528
// {
EditorInfo_type* EditorInfo_typeof()
{
    static uSStrong<EditorInfo_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 8;
    options.InterfaceCount = 3;
    options.ObjectSize = sizeof(EditorInfo);
    options.TypeSize = sizeof(EditorInfo_type);
    type = (EditorInfo_type*)uClassType::New("Android.android.view.inputmethod.EditorInfo", options);
    type->SetBase(::g::Android::java::lang::Object_typeof());
    type->interface2.fp_describeContents = (void(*)(uObject*, int*))EditorInfo__describeContents_fn;
    type->interface2.fp_writeToParcel = (void(*)(uObject*, ::g::Android::android::os::Parcel*, int*))EditorInfo__writeToParcel_fn;
    type->interface0.fp__GetJavaObject = (void(*)(uObject*, jobject*))::g::Android::Base::Wrappers::JWrapper___GetJavaObject_fn;
    type->interface0.fp__IsSubclassed = (void(*)(uObject*, bool*))::g::Android::Base::Wrappers::JWrapper___IsSubclassed_fn;
    type->interface1.fp_Dispose = (void(*)(uObject*))::g::Android::Base::Wrappers::JWrapper__Uno_IDisposable_Dispose_fn;
    ::TYPES[0] = ::g::Android::Base::Wrappers::JWrapper_typeof();
    ::TYPES[2] = ::g::Android::Base::Wrappers::IJWrapper_typeof();
    type->SetInterfaces(
        ::g::Android::Base::Wrappers::IJWrapper_typeof(), offsetof(EditorInfo_type, interface0),
        ::g::Uno::IDisposable_typeof(), offsetof(EditorInfo_type, interface1),
        ::g::Android::android::os::Parcelable_typeof(), offsetof(EditorInfo_type, interface2));
    type->SetFields(5,
        ::g::Android::Base::Primitives::ujclass_typeof(), (uintptr_t)&::g::Android::android::view::inputmethod::EditorInfo::_javaClass2_, uFieldFlagsStatic,
        ::g::Android::Base::Primitives::jmethodID_typeof(), (uintptr_t)&::g::Android::android::view::inputmethod::EditorInfo::describeContents_21329_ID_, uFieldFlagsStatic,
        ::g::Android::Base::Primitives::jmethodID_typeof(), (uintptr_t)&::g::Android::android::view::inputmethod::EditorInfo::writeToParcel_21328_ID_, uFieldFlagsStatic);
    type->Reflection.SetFunctions(5,
        new uFunction("_Init", NULL, (void*)EditorInfo___Init2_fn, 0, true, uVoid_typeof(), 0),
        new uFunction("describeContents", NULL, (void*)EditorInfo__describeContents_fn, 0, false, ::g::Uno::Int_typeof(), 0),
        new uFunction("describeContents_IMPL_21329", NULL, (void*)EditorInfo__describeContents_IMPL_21329_fn, 0, true, ::g::Uno::Int_typeof(), 2, ::g::Uno::Bool_typeof(), ::g::Android::Base::Primitives::ujobject_typeof()),
        new uFunction("writeToParcel", NULL, (void*)EditorInfo__writeToParcel_fn, 0, false, uVoid_typeof(), 2, ::g::Android::android::os::Parcel_typeof(), ::g::Uno::Int_typeof()),
        new uFunction("writeToParcel_IMPL_21328", NULL, (void*)EditorInfo__writeToParcel_IMPL_21328_fn, 0, true, uVoid_typeof(), 4, ::g::Uno::Bool_typeof(), ::g::Android::Base::Primitives::ujobject_typeof(), ::g::Android::Base::Wrappers::IJWrapper_typeof(), ::g::Uno::Int_typeof()));
    return type;
}

// public static extern new void _Init() :532
void EditorInfo___Init2_fn()
{
    EditorInfo::_Init2();
}

// public int describeContents() :1228
void EditorInfo__describeContents_fn(EditorInfo* __this, int* __retval)
{
    *__retval = __this->describeContents();
}

// public static extern int describeContents_IMPL_21329(bool arg0, Android.Base.Primitives.ujobject arg1) :1245
void EditorInfo__describeContents_IMPL_21329_fn(bool* arg0_, jobject* arg1_, int* __retval)
{
    *__retval = EditorInfo::describeContents_IMPL_21329(*arg0_, *arg1_);
}

// public void writeToParcel(Android.android.os.Parcel arg0, int arg1) :1222
void EditorInfo__writeToParcel_fn(EditorInfo* __this, ::g::Android::android::os::Parcel* arg0, int* arg1)
{
    __this->writeToParcel(arg0, *arg1);
}

// public static extern void writeToParcel_IMPL_21328(bool arg0, Android.Base.Primitives.ujobject arg1, Android.Base.Wrappers.IJWrapper arg2, int arg3) :1242
void EditorInfo__writeToParcel_IMPL_21328_fn(bool* arg0_, jobject* arg1_, uObject* arg2_, int* arg3_)
{
    EditorInfo::writeToParcel_IMPL_21328(*arg0_, *arg1_, arg2_, *arg3_);
}

jclass EditorInfo::_javaClass2_;
jmethodID EditorInfo::describeContents_21329_ID_;
jmethodID EditorInfo::writeToParcel_21328_ID_;

// public int describeContents() [instance] :1228
int EditorInfo::describeContents()
{
    return EditorInfo::describeContents_IMPL_21329(_subclassed, _javaObject);
}

// public void writeToParcel(Android.android.os.Parcel arg0, int arg1) [instance] :1222
void EditorInfo::writeToParcel(::g::Android::android::os::Parcel* arg0, int arg1)
{
    int arg1_ = arg1;
    EditorInfo::writeToParcel_IMPL_21328(_subclassed, _javaObject, (uObject*)arg0, arg1_);
}

// public static extern new void _Init() [static] :532
void EditorInfo::_Init2()
{
    if (EditorInfo::_javaClass2()) { return; }
    INIT_JNI;
    EditorInfo::_javaClass2() = NEW_GLOBAL_REF(jclass,LOAD_SYS_CLASS("android/view/inputmethod/EditorInfo"));
    ::g::Android::Base::JNI::CheckException1(U_JNIVAR);
    if (!EditorInfo::_javaClass2()) { THROW_UNO_EXCEPTION("Unable to cache class 'android.view.inputmethod.EditorInfo'", 59);; }
}

// public static extern int describeContents_IMPL_21329(bool arg0, Android.Base.Primitives.ujobject arg1) [static] :1245
int EditorInfo::describeContents_IMPL_21329(bool arg0_, jobject arg1_)
{
    INIT_JNI;
    CLASS_INIT(EditorInfo::_javaClass2(),EditorInfo::_Init2());
    
    int result;
    CACHE_METHOD(EditorInfo::describeContents_21329_ID(),EditorInfo::_javaClass2(),"describeContents","()I",GetMethodID,"Id for fallback method android.view.inputmethod.EditorInfo.describeContents could not be cached",95);
    if (arg0_) {
        result = ((int)U_JNIVAR->CallNonvirtualIntMethod(arg1_, EditorInfo::_javaClass2(), EditorInfo::describeContents_21329_ID()));
    }
    else
    {
        result = ((int)U_JNIVAR->CallIntMethod(arg1_, EditorInfo::describeContents_21329_ID()));
    }
    ::g::Android::Base::JNI::CheckException1(U_JNIVAR);
    return result;
}

// public static extern void writeToParcel_IMPL_21328(bool arg0, Android.Base.Primitives.ujobject arg1, Android.Base.Wrappers.IJWrapper arg2, int arg3) [static] :1242
void EditorInfo::writeToParcel_IMPL_21328(bool arg0_, jobject arg1_, uObject* arg2_, int arg3_)
{
    INIT_JNI;
    CLASS_INIT(EditorInfo::_javaClass2(),EditorInfo::_Init2());
    jobject _obArg2 = ((!arg2_) ? NULL : ::g::Android::Base::Wrappers::IJWrapper::_GetJavaObject(uInterface(arg2_, ::g::Android::Base::Wrappers::IJWrapper_typeof())));
    CACHE_METHOD(EditorInfo::writeToParcel_21328_ID(),EditorInfo::_javaClass2(),"writeToParcel","(Landroid/os/Parcel;I)V",GetMethodID,"Id for fallback method android.view.inputmethod.EditorInfo.writeToParcel could not be cached",92);
    if (arg0_) {
        U_JNIVAR->CallNonvirtualVoidMethod(arg1_, EditorInfo::_javaClass2(), EditorInfo::writeToParcel_21328_ID(), _obArg2, ((jint)arg3_));
    }
    else
    {
        U_JNIVAR->CallVoidMethod(arg1_, EditorInfo::writeToParcel_21328_ID(), _obArg2, ((jint)arg3_));
    }
    ::g::Android::Base::JNI::CheckException1(U_JNIVAR);
}
// }

// C:\ProgramData\Uno\Packages\Android\0.20.2\Android\android\view\inputmethod\$.uno(1260)
// ---------------------------------------------------------------------------------------

// public sealed extern class ExtractedText :1260
// {
ExtractedText_type* ExtractedText_typeof()
{
    static uSStrong<ExtractedText_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 8;
    options.InterfaceCount = 3;
    options.ObjectSize = sizeof(ExtractedText);
    options.TypeSize = sizeof(ExtractedText_type);
    type = (ExtractedText_type*)uClassType::New("Android.android.view.inputmethod.ExtractedText", options);
    type->SetBase(::g::Android::java::lang::Object_typeof());
    type->interface2.fp_describeContents = (void(*)(uObject*, int*))ExtractedText__describeContents_fn;
    type->interface2.fp_writeToParcel = (void(*)(uObject*, ::g::Android::android::os::Parcel*, int*))ExtractedText__writeToParcel_fn;
    type->interface0.fp__GetJavaObject = (void(*)(uObject*, jobject*))::g::Android::Base::Wrappers::JWrapper___GetJavaObject_fn;
    type->interface0.fp__IsSubclassed = (void(*)(uObject*, bool*))::g::Android::Base::Wrappers::JWrapper___IsSubclassed_fn;
    type->interface1.fp_Dispose = (void(*)(uObject*))::g::Android::Base::Wrappers::JWrapper__Uno_IDisposable_Dispose_fn;
    ::TYPES[0] = ::g::Android::Base::Wrappers::JWrapper_typeof();
    ::TYPES[2] = ::g::Android::Base::Wrappers::IJWrapper_typeof();
    type->SetInterfaces(
        ::g::Android::Base::Wrappers::IJWrapper_typeof(), offsetof(ExtractedText_type, interface0),
        ::g::Uno::IDisposable_typeof(), offsetof(ExtractedText_type, interface1),
        ::g::Android::android::os::Parcelable_typeof(), offsetof(ExtractedText_type, interface2));
    type->SetFields(5,
        ::g::Android::Base::Primitives::ujclass_typeof(), (uintptr_t)&::g::Android::android::view::inputmethod::ExtractedText::_javaClass2_, uFieldFlagsStatic,
        ::g::Android::Base::Primitives::jmethodID_typeof(), (uintptr_t)&::g::Android::android::view::inputmethod::ExtractedText::describeContents_21342_ID_, uFieldFlagsStatic,
        ::g::Android::Base::Primitives::jmethodID_typeof(), (uintptr_t)&::g::Android::android::view::inputmethod::ExtractedText::writeToParcel_21341_ID_, uFieldFlagsStatic);
    type->Reflection.SetFunctions(5,
        new uFunction("_Init", NULL, (void*)ExtractedText___Init2_fn, 0, true, uVoid_typeof(), 0),
        new uFunction("describeContents", NULL, (void*)ExtractedText__describeContents_fn, 0, false, ::g::Uno::Int_typeof(), 0),
        new uFunction("describeContents_IMPL_21342", NULL, (void*)ExtractedText__describeContents_IMPL_21342_fn, 0, true, ::g::Uno::Int_typeof(), 2, ::g::Uno::Bool_typeof(), ::g::Android::Base::Primitives::ujobject_typeof()),
        new uFunction("writeToParcel", NULL, (void*)ExtractedText__writeToParcel_fn, 0, false, uVoid_typeof(), 2, ::g::Android::android::os::Parcel_typeof(), ::g::Uno::Int_typeof()),
        new uFunction("writeToParcel_IMPL_21341", NULL, (void*)ExtractedText__writeToParcel_IMPL_21341_fn, 0, true, uVoid_typeof(), 4, ::g::Uno::Bool_typeof(), ::g::Android::Base::Primitives::ujobject_typeof(), ::g::Android::Base::Wrappers::IJWrapper_typeof(), ::g::Uno::Int_typeof()));
    return type;
}

// public static extern new void _Init() :1264
void ExtractedText___Init2_fn()
{
    ExtractedText::_Init2();
}

// public int describeContents() :1516
void ExtractedText__describeContents_fn(ExtractedText* __this, int* __retval)
{
    *__retval = __this->describeContents();
}

// public static extern int describeContents_IMPL_21342(bool arg0, Android.Base.Primitives.ujobject arg1) :1527
void ExtractedText__describeContents_IMPL_21342_fn(bool* arg0_, jobject* arg1_, int* __retval)
{
    *__retval = ExtractedText::describeContents_IMPL_21342(*arg0_, *arg1_);
}

// public void writeToParcel(Android.android.os.Parcel arg0, int arg1) :1510
void ExtractedText__writeToParcel_fn(ExtractedText* __this, ::g::Android::android::os::Parcel* arg0, int* arg1)
{
    __this->writeToParcel(arg0, *arg1);
}

// public static extern void writeToParcel_IMPL_21341(bool arg0, Android.Base.Primitives.ujobject arg1, Android.Base.Wrappers.IJWrapper arg2, int arg3) :1524
void ExtractedText__writeToParcel_IMPL_21341_fn(bool* arg0_, jobject* arg1_, uObject* arg2_, int* arg3_)
{
    ExtractedText::writeToParcel_IMPL_21341(*arg0_, *arg1_, arg2_, *arg3_);
}

jclass ExtractedText::_javaClass2_;
jmethodID ExtractedText::describeContents_21342_ID_;
jmethodID ExtractedText::writeToParcel_21341_ID_;

// public int describeContents() [instance] :1516
int ExtractedText::describeContents()
{
    return ExtractedText::describeContents_IMPL_21342(_subclassed, _javaObject);
}

// public void writeToParcel(Android.android.os.Parcel arg0, int arg1) [instance] :1510
void ExtractedText::writeToParcel(::g::Android::android::os::Parcel* arg0, int arg1)
{
    int arg1_ = arg1;
    ExtractedText::writeToParcel_IMPL_21341(_subclassed, _javaObject, (uObject*)arg0, arg1_);
}

// public static extern new void _Init() [static] :1264
void ExtractedText::_Init2()
{
    if (ExtractedText::_javaClass2()) { return; }
    INIT_JNI;
    ExtractedText::_javaClass2() = NEW_GLOBAL_REF(jclass,LOAD_SYS_CLASS("android/view/inputmethod/ExtractedText"));
    ::g::Android::Base::JNI::CheckException1(U_JNIVAR);
    if (!ExtractedText::_javaClass2()) { THROW_UNO_EXCEPTION("Unable to cache class 'android.view.inputmethod.ExtractedText'", 62);; }
}

// public static extern int describeContents_IMPL_21342(bool arg0, Android.Base.Primitives.ujobject arg1) [static] :1527
int ExtractedText::describeContents_IMPL_21342(bool arg0_, jobject arg1_)
{
    INIT_JNI;
    CLASS_INIT(ExtractedText::_javaClass2(),ExtractedText::_Init2());
    
    int result;
    CACHE_METHOD(ExtractedText::describeContents_21342_ID(),ExtractedText::_javaClass2(),"describeContents","()I",GetMethodID,"Id for fallback method android.view.inputmethod.ExtractedText.describeContents could not be cached",98);
    if (arg0_) {
        result = ((int)U_JNIVAR->CallNonvirtualIntMethod(arg1_, ExtractedText::_javaClass2(), ExtractedText::describeContents_21342_ID()));
    }
    else
    {
        result = ((int)U_JNIVAR->CallIntMethod(arg1_, ExtractedText::describeContents_21342_ID()));
    }
    ::g::Android::Base::JNI::CheckException1(U_JNIVAR);
    return result;
}

// public static extern void writeToParcel_IMPL_21341(bool arg0, Android.Base.Primitives.ujobject arg1, Android.Base.Wrappers.IJWrapper arg2, int arg3) [static] :1524
void ExtractedText::writeToParcel_IMPL_21341(bool arg0_, jobject arg1_, uObject* arg2_, int arg3_)
{
    INIT_JNI;
    CLASS_INIT(ExtractedText::_javaClass2(),ExtractedText::_Init2());
    jobject _obArg2 = ((!arg2_) ? NULL : ::g::Android::Base::Wrappers::IJWrapper::_GetJavaObject(uInterface(arg2_, ::g::Android::Base::Wrappers::IJWrapper_typeof())));
    CACHE_METHOD(ExtractedText::writeToParcel_21341_ID(),ExtractedText::_javaClass2(),"writeToParcel","(Landroid/os/Parcel;I)V",GetMethodID,"Id for fallback method android.view.inputmethod.ExtractedText.writeToParcel could not be cached",95);
    if (arg0_) {
        U_JNIVAR->CallNonvirtualVoidMethod(arg1_, ExtractedText::_javaClass2(), ExtractedText::writeToParcel_21341_ID(), _obArg2, ((jint)arg3_));
    }
    else
    {
        U_JNIVAR->CallVoidMethod(arg1_, ExtractedText::writeToParcel_21341_ID(), _obArg2, ((jint)arg3_));
    }
    ::g::Android::Base::JNI::CheckException1(U_JNIVAR);
}
// }

// C:\ProgramData\Uno\Packages\Android\0.20.2\Android\android\view\inputmethod\$.uno(1542)
// ---------------------------------------------------------------------------------------

// public sealed extern class ExtractedTextRequest :1542
// {
ExtractedTextRequest_type* ExtractedTextRequest_typeof()
{
    static uSStrong<ExtractedTextRequest_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 8;
    options.InterfaceCount = 3;
    options.ObjectSize = sizeof(ExtractedTextRequest);
    options.TypeSize = sizeof(ExtractedTextRequest_type);
    type = (ExtractedTextRequest_type*)uClassType::New("Android.android.view.inputmethod.ExtractedTextRequest", options);
    type->SetBase(::g::Android::java::lang::Object_typeof());
    type->interface2.fp_describeContents = (void(*)(uObject*, int*))ExtractedTextRequest__describeContents_fn;
    type->interface2.fp_writeToParcel = (void(*)(uObject*, ::g::Android::android::os::Parcel*, int*))ExtractedTextRequest__writeToParcel_fn;
    type->interface0.fp__GetJavaObject = (void(*)(uObject*, jobject*))::g::Android::Base::Wrappers::JWrapper___GetJavaObject_fn;
    type->interface0.fp__IsSubclassed = (void(*)(uObject*, bool*))::g::Android::Base::Wrappers::JWrapper___IsSubclassed_fn;
    type->interface1.fp_Dispose = (void(*)(uObject*))::g::Android::Base::Wrappers::JWrapper__Uno_IDisposable_Dispose_fn;
    ::TYPES[0] = ::g::Android::Base::Wrappers::JWrapper_typeof();
    ::TYPES[2] = ::g::Android::Base::Wrappers::IJWrapper_typeof();
    type->SetInterfaces(
        ::g::Android::Base::Wrappers::IJWrapper_typeof(), offsetof(ExtractedTextRequest_type, interface0),
        ::g::Uno::IDisposable_typeof(), offsetof(ExtractedTextRequest_type, interface1),
        ::g::Android::android::os::Parcelable_typeof(), offsetof(ExtractedTextRequest_type, interface2));
    type->SetFields(5,
        ::g::Android::Base::Primitives::ujclass_typeof(), (uintptr_t)&::g::Android::android::view::inputmethod::ExtractedTextRequest::_javaClass2_, uFieldFlagsStatic,
        ::g::Android::Base::Primitives::jmethodID_typeof(), (uintptr_t)&::g::Android::android::view::inputmethod::ExtractedTextRequest::describeContents_21350_ID_, uFieldFlagsStatic,
        ::g::Android::Base::Primitives::jmethodID_typeof(), (uintptr_t)&::g::Android::android::view::inputmethod::ExtractedTextRequest::writeToParcel_21349_ID_, uFieldFlagsStatic);
    type->Reflection.SetFunctions(5,
        new uFunction("_Init", NULL, (void*)ExtractedTextRequest___Init2_fn, 0, true, uVoid_typeof(), 0),
        new uFunction("describeContents", NULL, (void*)ExtractedTextRequest__describeContents_fn, 0, false, ::g::Uno::Int_typeof(), 0),
        new uFunction("describeContents_IMPL_21350", NULL, (void*)ExtractedTextRequest__describeContents_IMPL_21350_fn, 0, true, ::g::Uno::Int_typeof(), 2, ::g::Uno::Bool_typeof(), ::g::Android::Base::Primitives::ujobject_typeof()),
        new uFunction("writeToParcel", NULL, (void*)ExtractedTextRequest__writeToParcel_fn, 0, false, uVoid_typeof(), 2, ::g::Android::android::os::Parcel_typeof(), ::g::Uno::Int_typeof()),
        new uFunction("writeToParcel_IMPL_21349", NULL, (void*)ExtractedTextRequest__writeToParcel_IMPL_21349_fn, 0, true, uVoid_typeof(), 4, ::g::Uno::Bool_typeof(), ::g::Android::Base::Primitives::ujobject_typeof(), ::g::Android::Base::Wrappers::IJWrapper_typeof(), ::g::Uno::Int_typeof()));
    return type;
}

// public static extern new void _Init() :1546
void ExtractedTextRequest___Init2_fn()
{
    ExtractedTextRequest::_Init2();
}

// public int describeContents() :1688
void ExtractedTextRequest__describeContents_fn(ExtractedTextRequest* __this, int* __retval)
{
    *__retval = __this->describeContents();
}

// public static extern int describeContents_IMPL_21350(bool arg0, Android.Base.Primitives.ujobject arg1) :1699
void ExtractedTextRequest__describeContents_IMPL_21350_fn(bool* arg0_, jobject* arg1_, int* __retval)
{
    *__retval = ExtractedTextRequest::describeContents_IMPL_21350(*arg0_, *arg1_);
}

// public void writeToParcel(Android.android.os.Parcel arg0, int arg1) :1682
void ExtractedTextRequest__writeToParcel_fn(ExtractedTextRequest* __this, ::g::Android::android::os::Parcel* arg0, int* arg1)
{
    __this->writeToParcel(arg0, *arg1);
}

// public static extern void writeToParcel_IMPL_21349(bool arg0, Android.Base.Primitives.ujobject arg1, Android.Base.Wrappers.IJWrapper arg2, int arg3) :1696
void ExtractedTextRequest__writeToParcel_IMPL_21349_fn(bool* arg0_, jobject* arg1_, uObject* arg2_, int* arg3_)
{
    ExtractedTextRequest::writeToParcel_IMPL_21349(*arg0_, *arg1_, arg2_, *arg3_);
}

jclass ExtractedTextRequest::_javaClass2_;
jmethodID ExtractedTextRequest::describeContents_21350_ID_;
jmethodID ExtractedTextRequest::writeToParcel_21349_ID_;

// public int describeContents() [instance] :1688
int ExtractedTextRequest::describeContents()
{
    return ExtractedTextRequest::describeContents_IMPL_21350(_subclassed, _javaObject);
}

// public void writeToParcel(Android.android.os.Parcel arg0, int arg1) [instance] :1682
void ExtractedTextRequest::writeToParcel(::g::Android::android::os::Parcel* arg0, int arg1)
{
    int arg1_ = arg1;
    ExtractedTextRequest::writeToParcel_IMPL_21349(_subclassed, _javaObject, (uObject*)arg0, arg1_);
}

// public static extern new void _Init() [static] :1546
void ExtractedTextRequest::_Init2()
{
    if (ExtractedTextRequest::_javaClass2()) { return; }
    INIT_JNI;
    ExtractedTextRequest::_javaClass2() = NEW_GLOBAL_REF(jclass,LOAD_SYS_CLASS("android/view/inputmethod/ExtractedTextRequest"));
    ::g::Android::Base::JNI::CheckException1(U_JNIVAR);
    if (!ExtractedTextRequest::_javaClass2()) { THROW_UNO_EXCEPTION("Unable to cache class 'android.view.inputmethod.ExtractedTextRequest'", 69);; }
}

// public static extern int describeContents_IMPL_21350(bool arg0, Android.Base.Primitives.ujobject arg1) [static] :1699
int ExtractedTextRequest::describeContents_IMPL_21350(bool arg0_, jobject arg1_)
{
    INIT_JNI;
    CLASS_INIT(ExtractedTextRequest::_javaClass2(),ExtractedTextRequest::_Init2());
    
    int result;
    CACHE_METHOD(ExtractedTextRequest::describeContents_21350_ID(),ExtractedTextRequest::_javaClass2(),"describeContents","()I",GetMethodID,"Id for fallback method android.view.inputmethod.ExtractedTextRequest.describeContents could not be cached",105);
    if (arg0_) {
        result = ((int)U_JNIVAR->CallNonvirtualIntMethod(arg1_, ExtractedTextRequest::_javaClass2(), ExtractedTextRequest::describeContents_21350_ID()));
    }
    else
    {
        result = ((int)U_JNIVAR->CallIntMethod(arg1_, ExtractedTextRequest::describeContents_21350_ID()));
    }
    ::g::Android::Base::JNI::CheckException1(U_JNIVAR);
    return result;
}

// public static extern void writeToParcel_IMPL_21349(bool arg0, Android.Base.Primitives.ujobject arg1, Android.Base.Wrappers.IJWrapper arg2, int arg3) [static] :1696
void ExtractedTextRequest::writeToParcel_IMPL_21349(bool arg0_, jobject arg1_, uObject* arg2_, int arg3_)
{
    INIT_JNI;
    CLASS_INIT(ExtractedTextRequest::_javaClass2(),ExtractedTextRequest::_Init2());
    jobject _obArg2 = ((!arg2_) ? NULL : ::g::Android::Base::Wrappers::IJWrapper::_GetJavaObject(uInterface(arg2_, ::g::Android::Base::Wrappers::IJWrapper_typeof())));
    CACHE_METHOD(ExtractedTextRequest::writeToParcel_21349_ID(),ExtractedTextRequest::_javaClass2(),"writeToParcel","(Landroid/os/Parcel;I)V",GetMethodID,"Id for fallback method android.view.inputmethod.ExtractedTextRequest.writeToParcel could not be cached",102);
    if (arg0_) {
        U_JNIVAR->CallNonvirtualVoidMethod(arg1_, ExtractedTextRequest::_javaClass2(), ExtractedTextRequest::writeToParcel_21349_ID(), _obArg2, ((jint)arg3_));
    }
    else
    {
        U_JNIVAR->CallVoidMethod(arg1_, ExtractedTextRequest::writeToParcel_21349_ID(), _obArg2, ((jint)arg3_));
    }
    ::g::Android::Base::JNI::CheckException1(U_JNIVAR);
}
// }

// C:\ProgramData\Uno\Packages\Android\0.20.2\Android\android\view\inputmethod\$.uno(3228)
// ---------------------------------------------------------------------------------------

// public abstract extern interface InputConnection :3228
// {
uInterfaceType* InputConnection_typeof()
{
    static uSStrong<uInterfaceType*> type;
    if (type != NULL) return type;

    type = uInterfaceType::New("Android.android.view.inputmethod.InputConnection", 0, 0);
    type->Reflection.SetFunctions(21,
        new uFunction("beginBatchEdit", NULL, NULL, offsetof(InputConnection, fp_beginBatchEdit), false, ::g::Uno::Bool_typeof(), 0),
        new uFunction("clearMetaKeyStates", NULL, NULL, offsetof(InputConnection, fp_clearMetaKeyStates), false, ::g::Uno::Bool_typeof(), 1, ::g::Uno::Int_typeof()),
        new uFunction("commitCompletion", NULL, NULL, offsetof(InputConnection, fp_commitCompletion), false, ::g::Uno::Bool_typeof(), 1, ::g::Android::android::view::inputmethod::CompletionInfo_typeof()),
        new uFunction("commitCorrection", NULL, NULL, offsetof(InputConnection, fp_commitCorrection), false, ::g::Uno::Bool_typeof(), 1, ::g::Android::android::view::inputmethod::CorrectionInfo_typeof()),
        new uFunction("commitText", NULL, NULL, offsetof(InputConnection, fp_commitText), false, ::g::Uno::Bool_typeof(), 2, ::g::Android::java::lang::CharSequence_typeof(), ::g::Uno::Int_typeof()),
        new uFunction("deleteSurroundingText", NULL, NULL, offsetof(InputConnection, fp_deleteSurroundingText), false, ::g::Uno::Bool_typeof(), 2, ::g::Uno::Int_typeof(), ::g::Uno::Int_typeof()),
        new uFunction("endBatchEdit", NULL, NULL, offsetof(InputConnection, fp_endBatchEdit), false, ::g::Uno::Bool_typeof(), 0),
        new uFunction("finishComposingText", NULL, NULL, offsetof(InputConnection, fp_finishComposingText), false, ::g::Uno::Bool_typeof(), 0),
        new uFunction("getCursorCapsMode", NULL, NULL, offsetof(InputConnection, fp_getCursorCapsMode), false, ::g::Uno::Int_typeof(), 1, ::g::Uno::Int_typeof()),
        new uFunction("getExtractedText", NULL, NULL, offsetof(InputConnection, fp_getExtractedText), false, ::g::Android::android::view::inputmethod::ExtractedText_typeof(), 2, ::g::Android::android::view::inputmethod::ExtractedTextRequest_typeof(), ::g::Uno::Int_typeof()),
        new uFunction("getSelectedText", NULL, NULL, offsetof(InputConnection, fp_getSelectedText), false, ::g::Android::java::lang::CharSequence_typeof(), 1, ::g::Uno::Int_typeof()),
        new uFunction("getTextAfterCursor", NULL, NULL, offsetof(InputConnection, fp_getTextAfterCursor), false, ::g::Android::java::lang::CharSequence_typeof(), 2, ::g::Uno::Int_typeof(), ::g::Uno::Int_typeof()),
        new uFunction("getTextBeforeCursor", NULL, NULL, offsetof(InputConnection, fp_getTextBeforeCursor), false, ::g::Android::java::lang::CharSequence_typeof(), 2, ::g::Uno::Int_typeof(), ::g::Uno::Int_typeof()),
        new uFunction("performContextMenuAction", NULL, NULL, offsetof(InputConnection, fp_performContextMenuAction), false, ::g::Uno::Bool_typeof(), 1, ::g::Uno::Int_typeof()),
        new uFunction("performEditorAction", NULL, NULL, offsetof(InputConnection, fp_performEditorAction), false, ::g::Uno::Bool_typeof(), 1, ::g::Uno::Int_typeof()),
        new uFunction("performPrivateCommand", NULL, NULL, offsetof(InputConnection, fp_performPrivateCommand), false, ::g::Uno::Bool_typeof(), 2, ::g::Android::java::lang::String_typeof(), ::g::Android::android::os::Bundle_typeof()),
        new uFunction("reportFullscreenMode", NULL, NULL, offsetof(InputConnection, fp_reportFullscreenMode), false, ::g::Uno::Bool_typeof(), 1, ::g::Uno::Bool_typeof()),
        new uFunction("sendKeyEvent", NULL, NULL, offsetof(InputConnection, fp_sendKeyEvent), false, ::g::Uno::Bool_typeof(), 1, ::g::Android::android::view::KeyEvent_typeof()),
        new uFunction("setComposingRegion", NULL, NULL, offsetof(InputConnection, fp_setComposingRegion), false, ::g::Uno::Bool_typeof(), 2, ::g::Uno::Int_typeof(), ::g::Uno::Int_typeof()),
        new uFunction("setComposingText", NULL, NULL, offsetof(InputConnection, fp_setComposingText), false, ::g::Uno::Bool_typeof(), 2, ::g::Android::java::lang::CharSequence_typeof(), ::g::Uno::Int_typeof()),
        new uFunction("setSelection", NULL, NULL, offsetof(InputConnection, fp_setSelection), false, ::g::Uno::Bool_typeof(), 2, ::g::Uno::Int_typeof(), ::g::Uno::Int_typeof()));
    return type;
}
// }

// C:\ProgramData\Uno\Packages\Android\0.20.2\Android\android\view\inputmethod\$.uno(2315)
// ---------------------------------------------------------------------------------------

// public sealed extern class InputMethodManager :2315
// {
::g::Android::java::lang::Object_type* InputMethodManager_typeof()
{
    static uSStrong< ::g::Android::java::lang::Object_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 9;
    options.InterfaceCount = 2;
    options.ObjectSize = sizeof(InputMethodManager);
    options.TypeSize = sizeof(::g::Android::java::lang::Object_type);
    type = (::g::Android::java::lang::Object_type*)uClassType::New("Android.android.view.inputmethod.InputMethodManager", options);
    type->SetBase(::g::Android::java::lang::Object_typeof());
    type->interface1.fp_Dispose = (void(*)(uObject*))::g::Android::Base::Wrappers::JWrapper__Uno_IDisposable_Dispose_fn;
    type->interface0.fp__GetJavaObject = (void(*)(uObject*, jobject*))::g::Android::Base::Wrappers::JWrapper___GetJavaObject_fn;
    type->interface0.fp__IsSubclassed = (void(*)(uObject*, bool*))::g::Android::Base::Wrappers::JWrapper___IsSubclassed_fn;
    ::TYPES[0] = ::g::Android::Base::Wrappers::JWrapper_typeof();
    ::TYPES[2] = ::g::Android::Base::Wrappers::IJWrapper_typeof();
    type->SetInterfaces(
        ::g::Android::Base::Wrappers::IJWrapper_typeof(), offsetof(::g::Android::java::lang::Object_type, interface0),
        ::g::Uno::IDisposable_typeof(), offsetof(::g::Android::java::lang::Object_type, interface1));
    type->SetFields(5,
        ::g::Android::Base::Primitives::ujclass_typeof(), (uintptr_t)&::g::Android::android::view::inputmethod::InputMethodManager::_javaClass2_, uFieldFlagsStatic,
        ::g::Android::Base::Primitives::jmethodID_typeof(), (uintptr_t)&::g::Android::android::view::inputmethod::InputMethodManager::hideSoftInputFromWindow_21465_ID_, uFieldFlagsStatic,
        ::g::Android::Base::Primitives::jfieldID_typeof(), (uintptr_t)&::g::Android::android::view::inputmethod::InputMethodManager::SHOW_IMPLICIT_21443_ID_, uFieldFlagsStatic,
        ::g::Android::Base::Primitives::jmethodID_typeof(), (uintptr_t)&::g::Android::android::view::inputmethod::InputMethodManager::showSoftInput_21463_ID_, uFieldFlagsStatic);
    type->Reflection.SetFunctions(6,
        new uFunction("_Init", NULL, (void*)InputMethodManager___Init2_fn, 0, true, uVoid_typeof(), 0),
        new uFunction("hideSoftInputFromWindow", NULL, (void*)InputMethodManager__hideSoftInputFromWindow_fn, 0, false, ::g::Uno::Bool_typeof(), 2, ::g::Android::android::os::IBinder_typeof(), ::g::Uno::Int_typeof()),
        new uFunction("hideSoftInputFromWindow_IMPL_21465", NULL, (void*)InputMethodManager__hideSoftInputFromWindow_IMPL_21465_fn, 0, true, ::g::Uno::Bool_typeof(), 4, ::g::Uno::Bool_typeof(), ::g::Android::Base::Primitives::ujobject_typeof(), ::g::Android::Base::Wrappers::IJWrapper_typeof(), ::g::Uno::Int_typeof()),
        new uFunction("get_SHOW_IMPLICIT", NULL, (void*)InputMethodManager__get_SHOW_IMPLICIT_fn, 0, true, ::g::Uno::Int_typeof(), 0),
        new uFunction("showSoftInput", NULL, (void*)InputMethodManager__showSoftInput_fn, 0, false, ::g::Uno::Bool_typeof(), 2, ::g::Android::android::view::View_typeof(), ::g::Uno::Int_typeof()),
        new uFunction("showSoftInput_IMPL_21463", NULL, (void*)InputMethodManager__showSoftInput_IMPL_21463_fn, 0, true, ::g::Uno::Bool_typeof(), 4, ::g::Uno::Bool_typeof(), ::g::Android::Base::Primitives::ujobject_typeof(), ::g::Android::Base::Wrappers::IJWrapper_typeof(), ::g::Uno::Int_typeof()));
    return type;
}

// public static extern new void _Init() :2319
void InputMethodManager___Init2_fn()
{
    InputMethodManager::_Init2();
}

// public bool hideSoftInputFromWindow(Android.android.os.IBinder arg0, int arg1) :2536
void InputMethodManager__hideSoftInputFromWindow_fn(InputMethodManager* __this, uObject* arg0, int* arg1, bool* __retval)
{
    *__retval = __this->hideSoftInputFromWindow(arg0, *arg1);
}

// public static extern bool hideSoftInputFromWindow_IMPL_21465(bool arg0, Android.Base.Primitives.ujobject arg1, Android.Base.Wrappers.IJWrapper arg2, int arg3) :2720
void InputMethodManager__hideSoftInputFromWindow_IMPL_21465_fn(bool* arg0_, jobject* arg1_, uObject* arg2_, int* arg3_, bool* __retval)
{
    *__retval = InputMethodManager::hideSoftInputFromWindow_IMPL_21465(*arg0_, *arg1_, arg2_, *arg3_);
}

// public static int get_SHOW_IMPLICIT() :2324
void InputMethodManager__get_SHOW_IMPLICIT_fn(int* __retval)
{
    *__retval = InputMethodManager::SHOW_IMPLICIT();
}

// public bool showSoftInput(Android.android.view.View arg0, int arg1) :2524
void InputMethodManager__showSoftInput_fn(InputMethodManager* __this, ::g::Android::android::view::View* arg0, int* arg1, bool* __retval)
{
    *__retval = __this->showSoftInput(arg0, *arg1);
}

// public static extern bool showSoftInput_IMPL_21463(bool arg0, Android.Base.Primitives.ujobject arg1, Android.Base.Wrappers.IJWrapper arg2, int arg3) :2714
void InputMethodManager__showSoftInput_IMPL_21463_fn(bool* arg0_, jobject* arg1_, uObject* arg2_, int* arg3_, bool* __retval)
{
    *__retval = InputMethodManager::showSoftInput_IMPL_21463(*arg0_, *arg1_, arg2_, *arg3_);
}

jclass InputMethodManager::_javaClass2_;
jmethodID InputMethodManager::hideSoftInputFromWindow_21465_ID_;
jfieldID InputMethodManager::SHOW_IMPLICIT_21443_ID_;
jmethodID InputMethodManager::showSoftInput_21463_ID_;

// public bool hideSoftInputFromWindow(Android.android.os.IBinder arg0, int arg1) [instance] :2536
bool InputMethodManager::hideSoftInputFromWindow(uObject* arg0, int arg1)
{
    int arg1_ = arg1;
    return InputMethodManager::hideSoftInputFromWindow_IMPL_21465(_subclassed, _javaObject, arg0, arg1_);
}

// public bool showSoftInput(Android.android.view.View arg0, int arg1) [instance] :2524
bool InputMethodManager::showSoftInput(::g::Android::android::view::View* arg0, int arg1)
{
    int arg1_ = arg1;
    return InputMethodManager::showSoftInput_IMPL_21463(_subclassed, _javaObject, (uObject*)arg0, arg1_);
}

// public static extern new void _Init() [static] :2319
void InputMethodManager::_Init2()
{
    if (InputMethodManager::_javaClass2()) { return; }
    INIT_JNI;
    InputMethodManager::_javaClass2() = NEW_GLOBAL_REF(jclass,LOAD_SYS_CLASS("android/view/inputmethod/InputMethodManager"));
    ::g::Android::Base::JNI::CheckException1(U_JNIVAR);
    if (!InputMethodManager::_javaClass2()) { THROW_UNO_EXCEPTION("Unable to cache class 'android.view.inputmethod.InputMethodManager'", 67);; }
}

// public static extern bool hideSoftInputFromWindow_IMPL_21465(bool arg0, Android.Base.Primitives.ujobject arg1, Android.Base.Wrappers.IJWrapper arg2, int arg3) [static] :2720
bool InputMethodManager::hideSoftInputFromWindow_IMPL_21465(bool arg0_, jobject arg1_, uObject* arg2_, int arg3_)
{
    INIT_JNI;
    CLASS_INIT(InputMethodManager::_javaClass2(),InputMethodManager::_Init2());
    jobject _obArg2 = ((!arg2_) ? NULL : ::g::Android::Base::Wrappers::IJWrapper::_GetJavaObject(uInterface(arg2_, ::g::Android::Base::Wrappers::IJWrapper_typeof())));
    bool result;
    CACHE_METHOD(InputMethodManager::hideSoftInputFromWindow_21465_ID(),InputMethodManager::_javaClass2(),"hideSoftInputFromWindow","(Landroid/os/IBinder;I)Z",GetMethodID,"Id for fallback method android.view.inputmethod.InputMethodManager.hideSoftInputFromWindow could not be cached",110);
    if (arg0_) {
        result = ((bool)U_JNIVAR->CallNonvirtualBooleanMethod(arg1_, InputMethodManager::_javaClass2(), InputMethodManager::hideSoftInputFromWindow_21465_ID(), _obArg2, ((jint)arg3_)));
    }
    else
    {
        result = ((bool)U_JNIVAR->CallBooleanMethod(arg1_, InputMethodManager::hideSoftInputFromWindow_21465_ID(), _obArg2, ((jint)arg3_)));
    }
    ::g::Android::Base::JNI::CheckException1(U_JNIVAR);
    return result;
}

// public static extern bool showSoftInput_IMPL_21463(bool arg0, Android.Base.Primitives.ujobject arg1, Android.Base.Wrappers.IJWrapper arg2, int arg3) [static] :2714
bool InputMethodManager::showSoftInput_IMPL_21463(bool arg0_, jobject arg1_, uObject* arg2_, int arg3_)
{
    INIT_JNI;
    CLASS_INIT(InputMethodManager::_javaClass2(),InputMethodManager::_Init2());
    jobject _obArg2 = ((!arg2_) ? NULL : ::g::Android::Base::Wrappers::IJWrapper::_GetJavaObject(uInterface(arg2_, ::g::Android::Base::Wrappers::IJWrapper_typeof())));
    bool result;
    CACHE_METHOD(InputMethodManager::showSoftInput_21463_ID(),InputMethodManager::_javaClass2(),"showSoftInput","(Landroid/view/View;I)Z",GetMethodID,"Id for fallback method android.view.inputmethod.InputMethodManager.showSoftInput could not be cached",100);
    if (arg0_) {
        result = ((bool)U_JNIVAR->CallNonvirtualBooleanMethod(arg1_, InputMethodManager::_javaClass2(), InputMethodManager::showSoftInput_21463_ID(), _obArg2, ((jint)arg3_)));
    }
    else
    {
        result = ((bool)U_JNIVAR->CallBooleanMethod(arg1_, InputMethodManager::showSoftInput_21463_ID(), _obArg2, ((jint)arg3_)));
    }
    ::g::Android::Base::JNI::CheckException1(U_JNIVAR);
    return result;
}

// public static int get_SHOW_IMPLICIT() [static] :2324
int InputMethodManager::SHOW_IMPLICIT()
{
    INIT_JNI;
    CLASS_INIT(InputMethodManager::_javaClass2(),InputMethodManager::_Init2());
    if (::uEnterCriticalIfNull(&InputMethodManager::SHOW_IMPLICIT_21443_ID())) {;
    CACHE_FIELD(InputMethodManager::SHOW_IMPLICIT_21443_ID(),InputMethodManager::_javaClass2(),"SHOW_IMPLICIT","I",GetStaticFieldID,"Id for field InputMethodManager.SHOW_IMPLICIT could not be cached",65);
    ::uExitCritical();;
    };
    int result;;
    result = ((int)U_JNIVAR->GetStaticIntField(InputMethodManager::_javaClass2(), InputMethodManager::SHOW_IMPLICIT_21443_ID()));;
    return result;
}
// }

}}}}} // ::g::Android::android::view::inputmethod
