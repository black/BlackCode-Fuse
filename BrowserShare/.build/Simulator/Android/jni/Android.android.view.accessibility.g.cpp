// This file was generated based on '(multiple files)'.
// WARNING: Changes might be lost if you edit this file directly.

#include <Android.android.os.Parcel.h>
#include <Android.android.view.accessibility.AccessibilityEvent.h>
#include <Android.android.view.accessibility.AccessibilityNodeInfo.h>
#include <Android.android.view.accessibility.AccessibilityNodeProvider.h>
#include <Android.Base.AndroidBindingMacros.h>
#include <Android.Base.JNI.h>
#include <Android.Base.Primitives.jmethodID.h>
#include <Android.Base.Primitives.ujclass.h>
#include <Android.Base.Primitives.ujobject.h>
#include <Android.Base.Wrappers.JWrapper.h>
#include <Android.Fallbacks.Android_android_view_accessibility_Accessibil-d7e100f2.h>
#include <Android.java.lang.Object.h>
#include <Android.java.lang.String.h>
#include <Uno.Bool.h>
#include <Uno.Exception.h>
#include <Uno.Int.h>
static uType* TYPES[3];

namespace g{
namespace Android{
namespace android{
namespace view{
namespace accessibility{

// C:\ProgramData\Uno\Packages\Android\0.20.2\Android\android\view\accessibility\$.uno(598)
// ----------------------------------------------------------------------------------------

// public sealed extern class AccessibilityEvent :598
// {
AccessibilityEvent_type* AccessibilityEvent_typeof()
{
    static uSStrong<AccessibilityEvent_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 9;
    options.InterfaceCount = 3;
    options.ObjectSize = sizeof(AccessibilityEvent);
    options.TypeSize = sizeof(AccessibilityEvent_type);
    type = (AccessibilityEvent_type*)uClassType::New("Android.android.view.accessibility.AccessibilityEvent", options);
    type->SetBase(::g::Android::java::lang::Object_typeof());
    type->fp_toString = (void(*)(::g::Android::java::lang::Object*, ::g::Android::java::lang::String**))AccessibilityEvent__toString_fn;
    type->interface2.fp_describeContents = (void(*)(uObject*, int*))AccessibilityEvent__describeContents_fn;
    type->interface2.fp_writeToParcel = (void(*)(uObject*, ::g::Android::android::os::Parcel*, int*))AccessibilityEvent__writeToParcel_fn;
    type->interface0.fp__GetJavaObject = (void(*)(uObject*, jobject*))::g::Android::Base::Wrappers::JWrapper___GetJavaObject_fn;
    type->interface0.fp__IsSubclassed = (void(*)(uObject*, bool*))::g::Android::Base::Wrappers::JWrapper___IsSubclassed_fn;
    type->interface1.fp_Dispose = (void(*)(uObject*))::g::Android::Base::Wrappers::JWrapper__Uno_IDisposable_Dispose_fn;
    ::TYPES[0] = ::g::Android::Base::Wrappers::JWrapper_typeof();
    ::TYPES[1] = ::g::Android::java::lang::String_typeof();
    ::TYPES[2] = ::g::Android::Base::Wrappers::IJWrapper_typeof();
    type->SetInterfaces(
        ::g::Android::Base::Wrappers::IJWrapper_typeof(), offsetof(AccessibilityEvent_type, interface0),
        ::g::Uno::IDisposable_typeof(), offsetof(AccessibilityEvent_type, interface1),
        ::g::Android::android::os::Parcelable_typeof(), offsetof(AccessibilityEvent_type, interface2));
    type->SetFields(5,
        ::g::Android::Base::Primitives::ujclass_typeof(), (uintptr_t)&::g::Android::android::view::accessibility::AccessibilityEvent::_javaClass3_, uFieldFlagsStatic,
        ::g::Android::Base::Primitives::jmethodID_typeof(), (uintptr_t)&::g::Android::android::view::accessibility::AccessibilityEvent::describeContents_20784_ID_, uFieldFlagsStatic,
        ::g::Android::Base::Primitives::jmethodID_typeof(), (uintptr_t)&::g::Android::android::view::accessibility::AccessibilityEvent::toString_20785_ID_, uFieldFlagsStatic,
        ::g::Android::Base::Primitives::jmethodID_typeof(), (uintptr_t)&::g::Android::android::view::accessibility::AccessibilityEvent::writeToParcel_20783_ID_, uFieldFlagsStatic);
    type->Reflection.SetFunctions(6,
        new uFunction("_Init", NULL, (void*)AccessibilityEvent___Init3_fn, 0, true, uVoid_typeof(), 0),
        new uFunction("describeContents", NULL, (void*)AccessibilityEvent__describeContents_fn, 0, false, ::g::Uno::Int_typeof(), 0),
        new uFunction("describeContents_IMPL_20784", NULL, (void*)AccessibilityEvent__describeContents_IMPL_20784_fn, 0, true, ::g::Uno::Int_typeof(), 2, ::g::Uno::Bool_typeof(), ::g::Android::Base::Primitives::ujobject_typeof()),
        new uFunction("toString_IMPL_20785", NULL, (void*)AccessibilityEvent__toString_IMPL_20785_fn, 0, true, ::g::Android::Base::Wrappers::IJWrapper_typeof(), 2, ::g::Uno::Bool_typeof(), ::g::Android::Base::Primitives::ujobject_typeof()),
        new uFunction("writeToParcel", NULL, (void*)AccessibilityEvent__writeToParcel_fn, 0, false, uVoid_typeof(), 2, ::g::Android::android::os::Parcel_typeof(), ::g::Uno::Int_typeof()),
        new uFunction("writeToParcel_IMPL_20783", NULL, (void*)AccessibilityEvent__writeToParcel_IMPL_20783_fn, 0, true, uVoid_typeof(), 4, ::g::Uno::Bool_typeof(), ::g::Android::Base::Primitives::ujobject_typeof(), ::g::Android::Base::Wrappers::IJWrapper_typeof(), ::g::Uno::Int_typeof()));
    return type;
}

// public static extern new void _Init() :602
void AccessibilityEvent___Init3_fn()
{
    AccessibilityEvent::_Init3();
}

// public int describeContents() :1242
void AccessibilityEvent__describeContents_fn(AccessibilityEvent* __this, int* __retval)
{
    *__retval = __this->describeContents();
}

// public static extern int describeContents_IMPL_20784(bool arg0, Android.Base.Primitives.ujobject arg1) :1324
void AccessibilityEvent__describeContents_IMPL_20784_fn(bool* arg0_, jobject* arg1_, int* __retval)
{
    *__retval = AccessibilityEvent::describeContents_IMPL_20784(*arg0_, *arg1_);
}

// public override sealed Android.java.lang.String toString() :1248
void AccessibilityEvent__toString_fn(AccessibilityEvent* __this, ::g::Android::java::lang::String** __retval)
{
    return *__retval = uCast< ::g::Android::java::lang::String*>(AccessibilityEvent::toString_IMPL_20785(__this->_subclassed, __this->_javaObject), ::TYPES[1/*Android.java.lang.String*/]), void();
}

// public static extern Android.Base.Wrappers.IJWrapper toString_IMPL_20785(bool arg0, Android.Base.Primitives.ujobject arg1) :1327
void AccessibilityEvent__toString_IMPL_20785_fn(bool* arg0_, jobject* arg1_, uObject** __retval)
{
    *__retval = AccessibilityEvent::toString_IMPL_20785(*arg0_, *arg1_);
}

// public void writeToParcel(Android.android.os.Parcel arg0, int arg1) :1236
void AccessibilityEvent__writeToParcel_fn(AccessibilityEvent* __this, ::g::Android::android::os::Parcel* arg0, int* arg1)
{
    __this->writeToParcel(arg0, *arg1);
}

// public static extern void writeToParcel_IMPL_20783(bool arg0, Android.Base.Primitives.ujobject arg1, Android.Base.Wrappers.IJWrapper arg2, int arg3) :1321
void AccessibilityEvent__writeToParcel_IMPL_20783_fn(bool* arg0_, jobject* arg1_, uObject* arg2_, int* arg3_)
{
    AccessibilityEvent::writeToParcel_IMPL_20783(*arg0_, *arg1_, arg2_, *arg3_);
}

jclass AccessibilityEvent::_javaClass3_;
jmethodID AccessibilityEvent::describeContents_20784_ID_;
jmethodID AccessibilityEvent::toString_20785_ID_;
jmethodID AccessibilityEvent::writeToParcel_20783_ID_;

// public int describeContents() [instance] :1242
int AccessibilityEvent::describeContents()
{
    return AccessibilityEvent::describeContents_IMPL_20784(_subclassed, _javaObject);
}

// public void writeToParcel(Android.android.os.Parcel arg0, int arg1) [instance] :1236
void AccessibilityEvent::writeToParcel(::g::Android::android::os::Parcel* arg0, int arg1)
{
    int arg1_ = arg1;
    AccessibilityEvent::writeToParcel_IMPL_20783(_subclassed, _javaObject, (uObject*)arg0, arg1_);
}

// public static extern new void _Init() [static] :602
void AccessibilityEvent::_Init3()
{
    if (AccessibilityEvent::_javaClass3()) { return; }
    INIT_JNI;
    AccessibilityEvent::_javaClass3() = NEW_GLOBAL_REF(jclass,LOAD_SYS_CLASS("android/view/accessibility/AccessibilityEvent"));
    ::g::Android::Base::JNI::CheckException1(U_JNIVAR);
    if (!AccessibilityEvent::_javaClass3()) { THROW_UNO_EXCEPTION("Unable to cache class 'android.view.accessibility.AccessibilityEvent'", 69);; }
}

// public static extern int describeContents_IMPL_20784(bool arg0, Android.Base.Primitives.ujobject arg1) [static] :1324
int AccessibilityEvent::describeContents_IMPL_20784(bool arg0_, jobject arg1_)
{
    INIT_JNI;
    CLASS_INIT(AccessibilityEvent::_javaClass3(),AccessibilityEvent::_Init3());
    
    int result;
    CACHE_METHOD(AccessibilityEvent::describeContents_20784_ID(),AccessibilityEvent::_javaClass3(),"describeContents","()I",GetMethodID,"Id for fallback method android.view.accessibility.AccessibilityEvent.describeContents could not be cached",105);
    if (arg0_) {
        result = ((int)U_JNIVAR->CallNonvirtualIntMethod(arg1_, AccessibilityEvent::_javaClass3(), AccessibilityEvent::describeContents_20784_ID()));
    }
    else
    {
        result = ((int)U_JNIVAR->CallIntMethod(arg1_, AccessibilityEvent::describeContents_20784_ID()));
    }
    ::g::Android::Base::JNI::CheckException1(U_JNIVAR);
    return result;
}

// public static extern Android.Base.Wrappers.IJWrapper toString_IMPL_20785(bool arg0, Android.Base.Primitives.ujobject arg1) [static] :1327
uObject* AccessibilityEvent::toString_IMPL_20785(bool arg0_, jobject arg1_)
{
    INIT_JNI;
    CLASS_INIT(AccessibilityEvent::_javaClass3(),AccessibilityEvent::_Init3());
    
    uObject* result;
    CACHE_METHOD(AccessibilityEvent::toString_20785_ID(),AccessibilityEvent::_javaClass3(),"toString","()Ljava/lang/String;",GetMethodID,"Id for fallback method android.view.accessibility.AccessibilityEvent.toString could not be cached",97);
    if (arg0_) {
        NEW_UNO(U_JNIVAR->CallNonvirtualObjectMethod(arg1_, AccessibilityEvent::_javaClass3(), AccessibilityEvent::toString_20785_ID()),result,::g::Android::java::lang::String_typeof(),::g::Android::java::lang::String*,false,true);
    }
    else
    {
        NEW_UNO(U_JNIVAR->CallObjectMethod(arg1_, AccessibilityEvent::toString_20785_ID()),result,::g::Android::java::lang::String_typeof(),::g::Android::java::lang::String*,false,true);
    }
    ::g::Android::Base::JNI::CheckException1(U_JNIVAR);
    return result;
}

// public static extern void writeToParcel_IMPL_20783(bool arg0, Android.Base.Primitives.ujobject arg1, Android.Base.Wrappers.IJWrapper arg2, int arg3) [static] :1321
void AccessibilityEvent::writeToParcel_IMPL_20783(bool arg0_, jobject arg1_, uObject* arg2_, int arg3_)
{
    INIT_JNI;
    CLASS_INIT(AccessibilityEvent::_javaClass3(),AccessibilityEvent::_Init3());
    jobject _obArg2 = ((!arg2_) ? NULL : ::g::Android::Base::Wrappers::IJWrapper::_GetJavaObject(uInterface(arg2_, ::g::Android::Base::Wrappers::IJWrapper_typeof())));
    CACHE_METHOD(AccessibilityEvent::writeToParcel_20783_ID(),AccessibilityEvent::_javaClass3(),"writeToParcel","(Landroid/os/Parcel;I)V",GetMethodID,"Id for fallback method android.view.accessibility.AccessibilityEvent.writeToParcel could not be cached",102);
    if (arg0_) {
        U_JNIVAR->CallNonvirtualVoidMethod(arg1_, AccessibilityEvent::_javaClass3(), AccessibilityEvent::writeToParcel_20783_ID(), _obArg2, ((jint)arg3_));
    }
    else
    {
        U_JNIVAR->CallVoidMethod(arg1_, AccessibilityEvent::writeToParcel_20783_ID(), _obArg2, ((jint)arg3_));
    }
    ::g::Android::Base::JNI::CheckException1(U_JNIVAR);
}
// }

// C:\ProgramData\Uno\Packages\Android\0.20.2\Android\android\view\accessibility\$.uno(1710)
// -----------------------------------------------------------------------------------------

// public sealed extern class AccessibilityNodeInfo :1710
// {
AccessibilityNodeInfo_type* AccessibilityNodeInfo_typeof()
{
    static uSStrong<AccessibilityNodeInfo_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 11;
    options.InterfaceCount = 3;
    options.ObjectSize = sizeof(AccessibilityNodeInfo);
    options.TypeSize = sizeof(AccessibilityNodeInfo_type);
    type = (AccessibilityNodeInfo_type*)uClassType::New("Android.android.view.accessibility.AccessibilityNodeInfo", options);
    type->SetBase(::g::Android::java::lang::Object_typeof());
    type->fp_equals1 = (void(*)(::g::Android::java::lang::Object*, ::g::Android::java::lang::Object*, bool*))AccessibilityNodeInfo__equals1_fn;
    type->fp_hashCode1 = (void(*)(::g::Android::java::lang::Object*, int*))AccessibilityNodeInfo__hashCode1_fn;
    type->fp_toString = (void(*)(::g::Android::java::lang::Object*, ::g::Android::java::lang::String**))AccessibilityNodeInfo__toString_fn;
    type->interface2.fp_describeContents = (void(*)(uObject*, int*))AccessibilityNodeInfo__describeContents_fn;
    type->interface2.fp_writeToParcel = (void(*)(uObject*, ::g::Android::android::os::Parcel*, int*))AccessibilityNodeInfo__writeToParcel_fn;
    type->interface0.fp__GetJavaObject = (void(*)(uObject*, jobject*))::g::Android::Base::Wrappers::JWrapper___GetJavaObject_fn;
    type->interface0.fp__IsSubclassed = (void(*)(uObject*, bool*))::g::Android::Base::Wrappers::JWrapper___IsSubclassed_fn;
    type->interface1.fp_Dispose = (void(*)(uObject*))::g::Android::Base::Wrappers::JWrapper__Uno_IDisposable_Dispose_fn;
    ::TYPES[0] = ::g::Android::Base::Wrappers::JWrapper_typeof();
    ::TYPES[2] = ::g::Android::Base::Wrappers::IJWrapper_typeof();
    ::TYPES[1] = ::g::Android::java::lang::String_typeof();
    type->SetInterfaces(
        ::g::Android::Base::Wrappers::IJWrapper_typeof(), offsetof(AccessibilityNodeInfo_type, interface0),
        ::g::Uno::IDisposable_typeof(), offsetof(AccessibilityNodeInfo_type, interface1),
        ::g::Android::android::os::Parcelable_typeof(), offsetof(AccessibilityNodeInfo_type, interface2));
    type->SetFields(5,
        ::g::Android::Base::Primitives::ujclass_typeof(), (uintptr_t)&::g::Android::android::view::accessibility::AccessibilityNodeInfo::_javaClass2_, uFieldFlagsStatic,
        ::g::Android::Base::Primitives::jmethodID_typeof(), (uintptr_t)&::g::Android::android::view::accessibility::AccessibilityNodeInfo::describeContents_20948_ID_, uFieldFlagsStatic,
        ::g::Android::Base::Primitives::jmethodID_typeof(), (uintptr_t)&::g::Android::android::view::accessibility::AccessibilityNodeInfo::equals_20955_ID_, uFieldFlagsStatic,
        ::g::Android::Base::Primitives::jmethodID_typeof(), (uintptr_t)&::g::Android::android::view::accessibility::AccessibilityNodeInfo::hashCode_20956_ID_, uFieldFlagsStatic,
        ::g::Android::Base::Primitives::jmethodID_typeof(), (uintptr_t)&::g::Android::android::view::accessibility::AccessibilityNodeInfo::toString_20957_ID_, uFieldFlagsStatic,
        ::g::Android::Base::Primitives::jmethodID_typeof(), (uintptr_t)&::g::Android::android::view::accessibility::AccessibilityNodeInfo::writeToParcel_20954_ID_, uFieldFlagsStatic);
    type->Reflection.SetFunctions(8,
        new uFunction("_Init", NULL, (void*)AccessibilityNodeInfo___Init2_fn, 0, true, uVoid_typeof(), 0),
        new uFunction("describeContents", NULL, (void*)AccessibilityNodeInfo__describeContents_fn, 0, false, ::g::Uno::Int_typeof(), 0),
        new uFunction("describeContents_IMPL_20948", NULL, (void*)AccessibilityNodeInfo__describeContents_IMPL_20948_fn, 0, true, ::g::Uno::Int_typeof(), 2, ::g::Uno::Bool_typeof(), ::g::Android::Base::Primitives::ujobject_typeof()),
        new uFunction("equals_IMPL_20955", NULL, (void*)AccessibilityNodeInfo__equals_IMPL_20955_fn, 0, true, ::g::Uno::Bool_typeof(), 3, ::g::Uno::Bool_typeof(), ::g::Android::Base::Primitives::ujobject_typeof(), ::g::Android::Base::Wrappers::IJWrapper_typeof()),
        new uFunction("hashCode_IMPL_20956", NULL, (void*)AccessibilityNodeInfo__hashCode_IMPL_20956_fn, 0, true, ::g::Uno::Int_typeof(), 2, ::g::Uno::Bool_typeof(), ::g::Android::Base::Primitives::ujobject_typeof()),
        new uFunction("toString_IMPL_20957", NULL, (void*)AccessibilityNodeInfo__toString_IMPL_20957_fn, 0, true, ::g::Android::Base::Wrappers::IJWrapper_typeof(), 2, ::g::Uno::Bool_typeof(), ::g::Android::Base::Primitives::ujobject_typeof()),
        new uFunction("writeToParcel", NULL, (void*)AccessibilityNodeInfo__writeToParcel_fn, 0, false, uVoid_typeof(), 2, ::g::Android::android::os::Parcel_typeof(), ::g::Uno::Int_typeof()),
        new uFunction("writeToParcel_IMPL_20954", NULL, (void*)AccessibilityNodeInfo__writeToParcel_IMPL_20954_fn, 0, true, uVoid_typeof(), 4, ::g::Uno::Bool_typeof(), ::g::Android::Base::Primitives::ujobject_typeof(), ::g::Android::Base::Wrappers::IJWrapper_typeof(), ::g::Uno::Int_typeof()));
    return type;
}

// public static extern new void _Init() :1714
void AccessibilityNodeInfo___Init2_fn()
{
    AccessibilityNodeInfo::_Init2();
}

// public int describeContents() :2830
void AccessibilityNodeInfo__describeContents_fn(AccessibilityNodeInfo* __this, int* __retval)
{
    *__retval = __this->describeContents();
}

// public static extern int describeContents_IMPL_20948(bool arg0, Android.Base.Primitives.ujobject arg1) :3158
void AccessibilityNodeInfo__describeContents_IMPL_20948_fn(bool* arg0_, jobject* arg1_, int* __retval)
{
    *__retval = AccessibilityNodeInfo::describeContents_IMPL_20948(*arg0_, *arg1_);
}

// public override sealed bool equals(Android.java.lang.Object arg0) :2872
void AccessibilityNodeInfo__equals1_fn(AccessibilityNodeInfo* __this, ::g::Android::java::lang::Object* arg0, bool* __retval)
{
    return *__retval = AccessibilityNodeInfo::equals_IMPL_20955(__this->_subclassed, __this->_javaObject, (uObject*)arg0), void();
}

// public static extern bool equals_IMPL_20955(bool arg0, Android.Base.Primitives.ujobject arg1, Android.Base.Wrappers.IJWrapper arg2) :3179
void AccessibilityNodeInfo__equals_IMPL_20955_fn(bool* arg0_, jobject* arg1_, uObject* arg2_, bool* __retval)
{
    *__retval = AccessibilityNodeInfo::equals_IMPL_20955(*arg0_, *arg1_, arg2_);
}

// public override sealed int hashCode() :2878
void AccessibilityNodeInfo__hashCode1_fn(AccessibilityNodeInfo* __this, int* __retval)
{
    return *__retval = AccessibilityNodeInfo::hashCode_IMPL_20956(__this->_subclassed, __this->_javaObject), void();
}

// public static extern int hashCode_IMPL_20956(bool arg0, Android.Base.Primitives.ujobject arg1) :3182
void AccessibilityNodeInfo__hashCode_IMPL_20956_fn(bool* arg0_, jobject* arg1_, int* __retval)
{
    *__retval = AccessibilityNodeInfo::hashCode_IMPL_20956(*arg0_, *arg1_);
}

// public override sealed Android.java.lang.String toString() :2884
void AccessibilityNodeInfo__toString_fn(AccessibilityNodeInfo* __this, ::g::Android::java::lang::String** __retval)
{
    return *__retval = uCast< ::g::Android::java::lang::String*>(AccessibilityNodeInfo::toString_IMPL_20957(__this->_subclassed, __this->_javaObject), ::TYPES[1/*Android.java.lang.String*/]), void();
}

// public static extern Android.Base.Wrappers.IJWrapper toString_IMPL_20957(bool arg0, Android.Base.Primitives.ujobject arg1) :3185
void AccessibilityNodeInfo__toString_IMPL_20957_fn(bool* arg0_, jobject* arg1_, uObject** __retval)
{
    *__retval = AccessibilityNodeInfo::toString_IMPL_20957(*arg0_, *arg1_);
}

// public void writeToParcel(Android.android.os.Parcel arg0, int arg1) :2866
void AccessibilityNodeInfo__writeToParcel_fn(AccessibilityNodeInfo* __this, ::g::Android::android::os::Parcel* arg0, int* arg1)
{
    __this->writeToParcel(arg0, *arg1);
}

// public static extern void writeToParcel_IMPL_20954(bool arg0, Android.Base.Primitives.ujobject arg1, Android.Base.Wrappers.IJWrapper arg2, int arg3) :3176
void AccessibilityNodeInfo__writeToParcel_IMPL_20954_fn(bool* arg0_, jobject* arg1_, uObject* arg2_, int* arg3_)
{
    AccessibilityNodeInfo::writeToParcel_IMPL_20954(*arg0_, *arg1_, arg2_, *arg3_);
}

jclass AccessibilityNodeInfo::_javaClass2_;
jmethodID AccessibilityNodeInfo::describeContents_20948_ID_;
jmethodID AccessibilityNodeInfo::equals_20955_ID_;
jmethodID AccessibilityNodeInfo::hashCode_20956_ID_;
jmethodID AccessibilityNodeInfo::toString_20957_ID_;
jmethodID AccessibilityNodeInfo::writeToParcel_20954_ID_;

// public int describeContents() [instance] :2830
int AccessibilityNodeInfo::describeContents()
{
    return AccessibilityNodeInfo::describeContents_IMPL_20948(_subclassed, _javaObject);
}

// public void writeToParcel(Android.android.os.Parcel arg0, int arg1) [instance] :2866
void AccessibilityNodeInfo::writeToParcel(::g::Android::android::os::Parcel* arg0, int arg1)
{
    int arg1_ = arg1;
    AccessibilityNodeInfo::writeToParcel_IMPL_20954(_subclassed, _javaObject, (uObject*)arg0, arg1_);
}

// public static extern new void _Init() [static] :1714
void AccessibilityNodeInfo::_Init2()
{
    if (AccessibilityNodeInfo::_javaClass2()) { return; }
    INIT_JNI;
    AccessibilityNodeInfo::_javaClass2() = NEW_GLOBAL_REF(jclass,LOAD_SYS_CLASS("android/view/accessibility/AccessibilityNodeInfo"));
    ::g::Android::Base::JNI::CheckException1(U_JNIVAR);
    if (!AccessibilityNodeInfo::_javaClass2()) { THROW_UNO_EXCEPTION("Unable to cache class 'android.view.accessibility.AccessibilityNodeInfo'", 72);; }
}

// public static extern int describeContents_IMPL_20948(bool arg0, Android.Base.Primitives.ujobject arg1) [static] :3158
int AccessibilityNodeInfo::describeContents_IMPL_20948(bool arg0_, jobject arg1_)
{
    INIT_JNI;
    CLASS_INIT(AccessibilityNodeInfo::_javaClass2(),AccessibilityNodeInfo::_Init2());
    
    int result;
    CACHE_METHOD(AccessibilityNodeInfo::describeContents_20948_ID(),AccessibilityNodeInfo::_javaClass2(),"describeContents","()I",GetMethodID,"Id for fallback method android.view.accessibility.AccessibilityNodeInfo.describeContents could not be cached",108);
    if (arg0_) {
        result = ((int)U_JNIVAR->CallNonvirtualIntMethod(arg1_, AccessibilityNodeInfo::_javaClass2(), AccessibilityNodeInfo::describeContents_20948_ID()));
    }
    else
    {
        result = ((int)U_JNIVAR->CallIntMethod(arg1_, AccessibilityNodeInfo::describeContents_20948_ID()));
    }
    ::g::Android::Base::JNI::CheckException1(U_JNIVAR);
    return result;
}

// public static extern bool equals_IMPL_20955(bool arg0, Android.Base.Primitives.ujobject arg1, Android.Base.Wrappers.IJWrapper arg2) [static] :3179
bool AccessibilityNodeInfo::equals_IMPL_20955(bool arg0_, jobject arg1_, uObject* arg2_)
{
    INIT_JNI;
    CLASS_INIT(AccessibilityNodeInfo::_javaClass2(),AccessibilityNodeInfo::_Init2());
    jobject _obArg2 = ((!arg2_) ? NULL : ::g::Android::Base::Wrappers::IJWrapper::_GetJavaObject(uInterface(arg2_, ::g::Android::Base::Wrappers::IJWrapper_typeof())));
    bool result;
    CACHE_METHOD(AccessibilityNodeInfo::equals_20955_ID(),AccessibilityNodeInfo::_javaClass2(),"equals","(Ljava/lang/Object;)Z",GetMethodID,"Id for fallback method android.view.accessibility.AccessibilityNodeInfo.equals could not be cached",98);
    if (arg0_) {
        result = ((bool)U_JNIVAR->CallNonvirtualBooleanMethod(arg1_, AccessibilityNodeInfo::_javaClass2(), AccessibilityNodeInfo::equals_20955_ID(), _obArg2));
    }
    else
    {
        result = ((bool)U_JNIVAR->CallBooleanMethod(arg1_, AccessibilityNodeInfo::equals_20955_ID(), _obArg2));
    }
    ::g::Android::Base::JNI::CheckException1(U_JNIVAR);
    return result;
}

// public static extern int hashCode_IMPL_20956(bool arg0, Android.Base.Primitives.ujobject arg1) [static] :3182
int AccessibilityNodeInfo::hashCode_IMPL_20956(bool arg0_, jobject arg1_)
{
    INIT_JNI;
    CLASS_INIT(AccessibilityNodeInfo::_javaClass2(),AccessibilityNodeInfo::_Init2());
    
    int result;
    CACHE_METHOD(AccessibilityNodeInfo::hashCode_20956_ID(),AccessibilityNodeInfo::_javaClass2(),"hashCode","()I",GetMethodID,"Id for fallback method android.view.accessibility.AccessibilityNodeInfo.hashCode could not be cached",100);
    if (arg0_) {
        result = ((int)U_JNIVAR->CallNonvirtualIntMethod(arg1_, AccessibilityNodeInfo::_javaClass2(), AccessibilityNodeInfo::hashCode_20956_ID()));
    }
    else
    {
        result = ((int)U_JNIVAR->CallIntMethod(arg1_, AccessibilityNodeInfo::hashCode_20956_ID()));
    }
    ::g::Android::Base::JNI::CheckException1(U_JNIVAR);
    return result;
}

// public static extern Android.Base.Wrappers.IJWrapper toString_IMPL_20957(bool arg0, Android.Base.Primitives.ujobject arg1) [static] :3185
uObject* AccessibilityNodeInfo::toString_IMPL_20957(bool arg0_, jobject arg1_)
{
    INIT_JNI;
    CLASS_INIT(AccessibilityNodeInfo::_javaClass2(),AccessibilityNodeInfo::_Init2());
    
    uObject* result;
    CACHE_METHOD(AccessibilityNodeInfo::toString_20957_ID(),AccessibilityNodeInfo::_javaClass2(),"toString","()Ljava/lang/String;",GetMethodID,"Id for fallback method android.view.accessibility.AccessibilityNodeInfo.toString could not be cached",100);
    if (arg0_) {
        NEW_UNO(U_JNIVAR->CallNonvirtualObjectMethod(arg1_, AccessibilityNodeInfo::_javaClass2(), AccessibilityNodeInfo::toString_20957_ID()),result,::g::Android::java::lang::String_typeof(),::g::Android::java::lang::String*,false,true);
    }
    else
    {
        NEW_UNO(U_JNIVAR->CallObjectMethod(arg1_, AccessibilityNodeInfo::toString_20957_ID()),result,::g::Android::java::lang::String_typeof(),::g::Android::java::lang::String*,false,true);
    }
    ::g::Android::Base::JNI::CheckException1(U_JNIVAR);
    return result;
}

// public static extern void writeToParcel_IMPL_20954(bool arg0, Android.Base.Primitives.ujobject arg1, Android.Base.Wrappers.IJWrapper arg2, int arg3) [static] :3176
void AccessibilityNodeInfo::writeToParcel_IMPL_20954(bool arg0_, jobject arg1_, uObject* arg2_, int arg3_)
{
    INIT_JNI;
    CLASS_INIT(AccessibilityNodeInfo::_javaClass2(),AccessibilityNodeInfo::_Init2());
    jobject _obArg2 = ((!arg2_) ? NULL : ::g::Android::Base::Wrappers::IJWrapper::_GetJavaObject(uInterface(arg2_, ::g::Android::Base::Wrappers::IJWrapper_typeof())));
    CACHE_METHOD(AccessibilityNodeInfo::writeToParcel_20954_ID(),AccessibilityNodeInfo::_javaClass2(),"writeToParcel","(Landroid/os/Parcel;I)V",GetMethodID,"Id for fallback method android.view.accessibility.AccessibilityNodeInfo.writeToParcel could not be cached",105);
    if (arg0_) {
        U_JNIVAR->CallNonvirtualVoidMethod(arg1_, AccessibilityNodeInfo::_javaClass2(), AccessibilityNodeInfo::writeToParcel_20954_ID(), _obArg2, ((jint)arg3_));
    }
    else
    {
        U_JNIVAR->CallVoidMethod(arg1_, AccessibilityNodeInfo::writeToParcel_20954_ID(), _obArg2, ((jint)arg3_));
    }
    ::g::Android::Base::JNI::CheckException1(U_JNIVAR);
}
// }

// C:\ProgramData\Uno\Packages\Android\0.20.2\Android\android\view\accessibility\$.uno(11)
// ---------------------------------------------------------------------------------------

// public abstract extern class AccessibilityNodeProvider :11
// {
::g::Android::java::lang::Object_type* AccessibilityNodeProvider_typeof()
{
    static uSStrong< ::g::Android::java::lang::Object_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 5;
    options.InterfaceCount = 2;
    options.ObjectSize = sizeof(AccessibilityNodeProvider);
    options.TypeSize = sizeof(::g::Android::java::lang::Object_type);
    type = (::g::Android::java::lang::Object_type*)uClassType::New("Android.android.view.accessibility.AccessibilityNodeProvider", options);
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

}}}}} // ::g::Android::android::view::accessibility
