#include <app/Android.android.os.Parcel.h>
#include <app/Android.android.view.accessibility.AccessibilityEvent.h>
#include <app/Android.android.view.accessibility.AccessibilityNodeInfo.h>
#include <app/Android.android.view.accessibility.AccessibilityNodeProvider.h>
#include <app/Android.Base.AndroidBindingMacros.h>
#include <app/Android.Base.JNI.h>
#include <app/Android.Base.Primitives.jmethodID.h>
#include <app/Android.Base.Primitives.ujclass.h>
#include <app/Android.Base.Primitives.ujobject.h>
#include <app/Android.Base.Wrappers.JWrapper.h>
#include <app/Android.Fallbacks.Android_android_view_accessibility_Accessibil-d7e100f2.h>
#include <app/Android.java.lang.Object.h>
#include <app/Android.java.lang.String.h>
#include <app/Uno.Bool.h>
#include <app/Uno.Exception.h>
#include <app/Uno.Int.h>

namespace app {
namespace Android {
namespace android {
namespace view {
namespace accessibility {

// This file was generated based on 'C:\ProgramData\Uno\Packages\Android\0.13.2\Android\android\view\accessibility\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

jclass AccessibilityEvent___javaClass_3;
jmethodID AccessibilityEvent__describeContents_20784_ID;
jmethodID AccessibilityEvent__toString_20785_ID;
jmethodID AccessibilityEvent__writeToParcel_20783_ID;

AccessibilityEvent__uType* AccessibilityEvent__typeof()
{
    static ::uStaticStrong<AccessibilityEvent__uType*> type;
    if (type != NULL) return type;

    type = (AccessibilityEvent__uType*)::uAllocClassType(sizeof(AccessibilityEvent__uType), "Android.android.view.accessibility.AccessibilityEvent", false, 3, 0, 0);

    type->SetBaseType(::app::Android::java::lang::Object__typeof());
    type->__fp_toString = (::app::Android::java::lang::String*(*)(::app::Android::java::lang::Object*))AccessibilityEvent__toString;
    type->__interface_2.__fp_describeContents = (int(*)(void*))AccessibilityEvent__describeContents;
    type->__interface_2.__fp_writeToParcel = (void(*)(void*, ::app::Android::android::os::Parcel*, int))AccessibilityEvent__writeToParcel;
    type->__interface_0.__fp__GetJavaObject = (jobject(*)(void*))::app::Android::Base::Wrappers::JWrapper___GetJavaObject;
    type->__interface_0.__fp__IsSubclassed = (bool(*)(void*))::app::Android::Base::Wrappers::JWrapper___IsSubclassed;

    type->SetInterfaces(
        ::app::Android::Base::Wrappers::IJWrapper__typeof(), offsetof(AccessibilityEvent__uType, __interface_0),
        ::app::Uno::IDisposable__typeof(), offsetof(AccessibilityEvent__uType, __interface_1),
        ::app::Android::android::os::Parcelable__typeof(), offsetof(AccessibilityEvent__uType, __interface_2));

    type->SetFields(4,
        ::uNewField("_javaClass", &AccessibilityEvent___javaClass_3, 0, ::app::Android::Base::Primitives::ujclass__typeof()),
        ::uNewField("describeContents_20784_ID", &AccessibilityEvent__describeContents_20784_ID, 0, ::app::Android::Base::Primitives::jmethodID__typeof()),
        ::uNewField("toString_20785_ID", &AccessibilityEvent__toString_20785_ID, 0, ::app::Android::Base::Primitives::jmethodID__typeof()),
        ::uNewField("writeToParcel_20783_ID", &AccessibilityEvent__writeToParcel_20783_ID, 0, ::app::Android::Base::Primitives::jmethodID__typeof()));

    type->SetFunctions(6,
        ::uNewFunctionVoid("_Init", AccessibilityEvent___Init_3, 0, true),
        ::uNewFunction("describeContents", AccessibilityEvent__describeContents, 0, false, ::app::Uno::Int__typeof()),
        ::uNewFunction("describeContents_IMPL_20784", AccessibilityEvent__describeContents_IMPL_20784, 0, true, ::app::Uno::Int__typeof(), ::app::Uno::Bool__typeof(), ::app::Android::Base::Primitives::ujobject__typeof()),
        ::uNewFunction("toString_IMPL_20785", AccessibilityEvent__toString_IMPL_20785, 0, true, ::app::Android::Base::Wrappers::IJWrapper__typeof(), ::app::Uno::Bool__typeof(), ::app::Android::Base::Primitives::ujobject__typeof()),
        ::uNewFunctionVoid("writeToParcel", AccessibilityEvent__writeToParcel, 0, false, ::app::Android::android::os::Parcel__typeof(), ::app::Uno::Int__typeof()),
        ::uNewFunctionVoid("writeToParcel_IMPL_20783", AccessibilityEvent__writeToParcel_IMPL_20783, 0, true, ::app::Uno::Bool__typeof(), ::app::Android::Base::Primitives::ujobject__typeof(), ::app::Android::Base::Wrappers::IJWrapper__typeof(), ::app::Uno::Int__typeof()));

    ::uRegisterType(type);
    return type;
}

void AccessibilityEvent___Init_3(::uStatic* __this)
{
    if (::app::Android::android::view::accessibility::AccessibilityEvent___javaClass_3) { return; }
    INIT_JNI;
    ::app::Android::android::view::accessibility::AccessibilityEvent___javaClass_3 = NEW_GLOBAL_REF(jclass,LOAD_SYS_CLASS("android/view/accessibility/AccessibilityEvent"));
    ::app::Android::Base::JNI__CheckException_1(NULL, U_JNIVAR);
    if (!::app::Android::android::view::accessibility::AccessibilityEvent___javaClass_3) { THROW_UNO_EXCEPTION("Unable to cache class 'android.view.accessibility.AccessibilityEvent'", 69);; }
}

int AccessibilityEvent__describeContents(AccessibilityEvent* __this)
{
    return AccessibilityEvent__describeContents_IMPL_20784(NULL, __this->_subclassed, __this->_javaObject);
}

int AccessibilityEvent__describeContents_IMPL_20784(::uStatic* __this, bool arg0_, jobject arg1_)
{
    INIT_JNI;
    CLASS_INIT(::app::Android::android::view::accessibility::AccessibilityEvent___javaClass_3,::app::Android::android::view::accessibility::AccessibilityEvent___Init_3(NULL));
    
    int result;
    CACHE_METHOD(::app::Android::android::view::accessibility::AccessibilityEvent__describeContents_20784_ID,::app::Android::android::view::accessibility::AccessibilityEvent___javaClass_3,"describeContents","()I",GetMethodID,"Id for fallback method android.view.accessibility.AccessibilityEvent.describeContents could not be cached",105);
    if (arg0_) {
        result = ((int)U_JNIVAR->CallNonvirtualIntMethod(arg1_, ::app::Android::android::view::accessibility::AccessibilityEvent___javaClass_3, ::app::Android::android::view::accessibility::AccessibilityEvent__describeContents_20784_ID));
    }
    else
    {
        result = ((int)U_JNIVAR->CallIntMethod(arg1_, ::app::Android::android::view::accessibility::AccessibilityEvent__describeContents_20784_ID));
    }
    ::app::Android::Base::JNI__CheckException_1(NULL, U_JNIVAR);
    return result;
}

::app::Android::java::lang::String* AccessibilityEvent__toString(AccessibilityEvent* __this)
{
    return ::uCast< ::app::Android::java::lang::String*>(AccessibilityEvent__toString_IMPL_20785(NULL, __this->_subclassed, __this->_javaObject), ::app::Android::java::lang::String__typeof());
}

::uObject* AccessibilityEvent__toString_IMPL_20785(::uStatic* __this, bool arg0_, jobject arg1_)
{
    INIT_JNI;
    CLASS_INIT(::app::Android::android::view::accessibility::AccessibilityEvent___javaClass_3,::app::Android::android::view::accessibility::AccessibilityEvent___Init_3(NULL));
    
    ::uObject* result;
    CACHE_METHOD(::app::Android::android::view::accessibility::AccessibilityEvent__toString_20785_ID,::app::Android::android::view::accessibility::AccessibilityEvent___javaClass_3,"toString","()Ljava/lang/String;",GetMethodID,"Id for fallback method android.view.accessibility.AccessibilityEvent.toString could not be cached",97);
    if (arg0_) {
        NEW_UNO(U_JNIVAR->CallNonvirtualObjectMethod(arg1_, ::app::Android::android::view::accessibility::AccessibilityEvent___javaClass_3, ::app::Android::android::view::accessibility::AccessibilityEvent__toString_20785_ID),result,::app::Android::java::lang::String__typeof(),::app::Android::java::lang::String*,false,true);
    }
    else
    {
        NEW_UNO(U_JNIVAR->CallObjectMethod(arg1_, ::app::Android::android::view::accessibility::AccessibilityEvent__toString_20785_ID),result,::app::Android::java::lang::String__typeof(),::app::Android::java::lang::String*,false,true);
    }
    ::app::Android::Base::JNI__CheckException_1(NULL, U_JNIVAR);
    return result;
}

void AccessibilityEvent__writeToParcel(AccessibilityEvent* __this, ::app::Android::android::os::Parcel* arg0, int arg1)
{
    AccessibilityEvent__writeToParcel_IMPL_20783(NULL, __this->_subclassed, __this->_javaObject, (::uObject*)arg0, arg1);
}

void AccessibilityEvent__writeToParcel_IMPL_20783(::uStatic* __this, bool arg0_, jobject arg1_, ::uObject* arg2_, int arg3_)
{
    INIT_JNI;
    CLASS_INIT(::app::Android::android::view::accessibility::AccessibilityEvent___javaClass_3,::app::Android::android::view::accessibility::AccessibilityEvent___Init_3(NULL));
    jobject _obArg2 = ((!arg2_) ? NULL : ::app::Android::Base::Wrappers::IJWrapper::_GetJavaObject(arg2_));
    CACHE_METHOD(::app::Android::android::view::accessibility::AccessibilityEvent__writeToParcel_20783_ID,::app::Android::android::view::accessibility::AccessibilityEvent___javaClass_3,"writeToParcel","(Landroid/os/Parcel;I)V",GetMethodID,"Id for fallback method android.view.accessibility.AccessibilityEvent.writeToParcel could not be cached",102);
    if (arg0_) {
        U_JNIVAR->CallNonvirtualVoidMethod(arg1_, ::app::Android::android::view::accessibility::AccessibilityEvent___javaClass_3, ::app::Android::android::view::accessibility::AccessibilityEvent__writeToParcel_20783_ID, _obArg2, ((jint)arg3_));
    }
    else
    {
        U_JNIVAR->CallVoidMethod(arg1_, ::app::Android::android::view::accessibility::AccessibilityEvent__writeToParcel_20783_ID, _obArg2, ((jint)arg3_));
    }
    ::app::Android::Base::JNI__CheckException_1(NULL, U_JNIVAR);
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\Android\0.13.2\Android\android\view\accessibility\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

jclass AccessibilityNodeInfo___javaClass_2;
jmethodID AccessibilityNodeInfo__describeContents_20948_ID;
jmethodID AccessibilityNodeInfo__equals_20955_ID;
jmethodID AccessibilityNodeInfo__hashCode_20956_ID;
jmethodID AccessibilityNodeInfo__toString_20957_ID;
jmethodID AccessibilityNodeInfo__writeToParcel_20954_ID;

AccessibilityNodeInfo__uType* AccessibilityNodeInfo__typeof()
{
    static ::uStaticStrong<AccessibilityNodeInfo__uType*> type;
    if (type != NULL) return type;

    type = (AccessibilityNodeInfo__uType*)::uAllocClassType(sizeof(AccessibilityNodeInfo__uType), "Android.android.view.accessibility.AccessibilityNodeInfo", false, 3, 0, 0);

    type->SetBaseType(::app::Android::java::lang::Object__typeof());
    type->__fp_equals_1 = (bool(*)(::app::Android::java::lang::Object*, ::app::Android::java::lang::Object*))AccessibilityNodeInfo__equals_1;
    type->__fp_hashCode_1 = (int(*)(::app::Android::java::lang::Object*))AccessibilityNodeInfo__hashCode_1;
    type->__fp_toString = (::app::Android::java::lang::String*(*)(::app::Android::java::lang::Object*))AccessibilityNodeInfo__toString;
    type->__interface_2.__fp_describeContents = (int(*)(void*))AccessibilityNodeInfo__describeContents;
    type->__interface_2.__fp_writeToParcel = (void(*)(void*, ::app::Android::android::os::Parcel*, int))AccessibilityNodeInfo__writeToParcel;
    type->__interface_0.__fp__GetJavaObject = (jobject(*)(void*))::app::Android::Base::Wrappers::JWrapper___GetJavaObject;
    type->__interface_0.__fp__IsSubclassed = (bool(*)(void*))::app::Android::Base::Wrappers::JWrapper___IsSubclassed;

    type->SetInterfaces(
        ::app::Android::Base::Wrappers::IJWrapper__typeof(), offsetof(AccessibilityNodeInfo__uType, __interface_0),
        ::app::Uno::IDisposable__typeof(), offsetof(AccessibilityNodeInfo__uType, __interface_1),
        ::app::Android::android::os::Parcelable__typeof(), offsetof(AccessibilityNodeInfo__uType, __interface_2));

    type->SetFields(6,
        ::uNewField("_javaClass", &AccessibilityNodeInfo___javaClass_2, 0, ::app::Android::Base::Primitives::ujclass__typeof()),
        ::uNewField("describeContents_20948_ID", &AccessibilityNodeInfo__describeContents_20948_ID, 0, ::app::Android::Base::Primitives::jmethodID__typeof()),
        ::uNewField("equals_20955_ID", &AccessibilityNodeInfo__equals_20955_ID, 0, ::app::Android::Base::Primitives::jmethodID__typeof()),
        ::uNewField("hashCode_20956_ID", &AccessibilityNodeInfo__hashCode_20956_ID, 0, ::app::Android::Base::Primitives::jmethodID__typeof()),
        ::uNewField("toString_20957_ID", &AccessibilityNodeInfo__toString_20957_ID, 0, ::app::Android::Base::Primitives::jmethodID__typeof()),
        ::uNewField("writeToParcel_20954_ID", &AccessibilityNodeInfo__writeToParcel_20954_ID, 0, ::app::Android::Base::Primitives::jmethodID__typeof()));

    type->SetFunctions(8,
        ::uNewFunctionVoid("_Init", AccessibilityNodeInfo___Init_2, 0, true),
        ::uNewFunction("describeContents", AccessibilityNodeInfo__describeContents, 0, false, ::app::Uno::Int__typeof()),
        ::uNewFunction("describeContents_IMPL_20948", AccessibilityNodeInfo__describeContents_IMPL_20948, 0, true, ::app::Uno::Int__typeof(), ::app::Uno::Bool__typeof(), ::app::Android::Base::Primitives::ujobject__typeof()),
        ::uNewFunction("equals_IMPL_20955", AccessibilityNodeInfo__equals_IMPL_20955, 0, true, ::app::Uno::Bool__typeof(), ::app::Uno::Bool__typeof(), ::app::Android::Base::Primitives::ujobject__typeof(), ::app::Android::Base::Wrappers::IJWrapper__typeof()),
        ::uNewFunction("hashCode_IMPL_20956", AccessibilityNodeInfo__hashCode_IMPL_20956, 0, true, ::app::Uno::Int__typeof(), ::app::Uno::Bool__typeof(), ::app::Android::Base::Primitives::ujobject__typeof()),
        ::uNewFunction("toString_IMPL_20957", AccessibilityNodeInfo__toString_IMPL_20957, 0, true, ::app::Android::Base::Wrappers::IJWrapper__typeof(), ::app::Uno::Bool__typeof(), ::app::Android::Base::Primitives::ujobject__typeof()),
        ::uNewFunctionVoid("writeToParcel", AccessibilityNodeInfo__writeToParcel, 0, false, ::app::Android::android::os::Parcel__typeof(), ::app::Uno::Int__typeof()),
        ::uNewFunctionVoid("writeToParcel_IMPL_20954", AccessibilityNodeInfo__writeToParcel_IMPL_20954, 0, true, ::app::Uno::Bool__typeof(), ::app::Android::Base::Primitives::ujobject__typeof(), ::app::Android::Base::Wrappers::IJWrapper__typeof(), ::app::Uno::Int__typeof()));

    ::uRegisterType(type);
    return type;
}

void AccessibilityNodeInfo___Init_2(::uStatic* __this)
{
    if (::app::Android::android::view::accessibility::AccessibilityNodeInfo___javaClass_2) { return; }
    INIT_JNI;
    ::app::Android::android::view::accessibility::AccessibilityNodeInfo___javaClass_2 = NEW_GLOBAL_REF(jclass,LOAD_SYS_CLASS("android/view/accessibility/AccessibilityNodeInfo"));
    ::app::Android::Base::JNI__CheckException_1(NULL, U_JNIVAR);
    if (!::app::Android::android::view::accessibility::AccessibilityNodeInfo___javaClass_2) { THROW_UNO_EXCEPTION("Unable to cache class 'android.view.accessibility.AccessibilityNodeInfo'", 72);; }
}

int AccessibilityNodeInfo__describeContents(AccessibilityNodeInfo* __this)
{
    return AccessibilityNodeInfo__describeContents_IMPL_20948(NULL, __this->_subclassed, __this->_javaObject);
}

int AccessibilityNodeInfo__describeContents_IMPL_20948(::uStatic* __this, bool arg0_, jobject arg1_)
{
    INIT_JNI;
    CLASS_INIT(::app::Android::android::view::accessibility::AccessibilityNodeInfo___javaClass_2,::app::Android::android::view::accessibility::AccessibilityNodeInfo___Init_2(NULL));
    
    int result;
    CACHE_METHOD(::app::Android::android::view::accessibility::AccessibilityNodeInfo__describeContents_20948_ID,::app::Android::android::view::accessibility::AccessibilityNodeInfo___javaClass_2,"describeContents","()I",GetMethodID,"Id for fallback method android.view.accessibility.AccessibilityNodeInfo.describeContents could not be cached",108);
    if (arg0_) {
        result = ((int)U_JNIVAR->CallNonvirtualIntMethod(arg1_, ::app::Android::android::view::accessibility::AccessibilityNodeInfo___javaClass_2, ::app::Android::android::view::accessibility::AccessibilityNodeInfo__describeContents_20948_ID));
    }
    else
    {
        result = ((int)U_JNIVAR->CallIntMethod(arg1_, ::app::Android::android::view::accessibility::AccessibilityNodeInfo__describeContents_20948_ID));
    }
    ::app::Android::Base::JNI__CheckException_1(NULL, U_JNIVAR);
    return result;
}

bool AccessibilityNodeInfo__equals_1(AccessibilityNodeInfo* __this, ::app::Android::java::lang::Object* arg0)
{
    return AccessibilityNodeInfo__equals_IMPL_20955(NULL, __this->_subclassed, __this->_javaObject, (::uObject*)arg0);
}

bool AccessibilityNodeInfo__equals_IMPL_20955(::uStatic* __this, bool arg0_, jobject arg1_, ::uObject* arg2_)
{
    INIT_JNI;
    CLASS_INIT(::app::Android::android::view::accessibility::AccessibilityNodeInfo___javaClass_2,::app::Android::android::view::accessibility::AccessibilityNodeInfo___Init_2(NULL));
    jobject _obArg2 = ((!arg2_) ? NULL : ::app::Android::Base::Wrappers::IJWrapper::_GetJavaObject(arg2_));
    bool result;
    CACHE_METHOD(::app::Android::android::view::accessibility::AccessibilityNodeInfo__equals_20955_ID,::app::Android::android::view::accessibility::AccessibilityNodeInfo___javaClass_2,"equals","(Ljava/lang/Object;)Z",GetMethodID,"Id for fallback method android.view.accessibility.AccessibilityNodeInfo.equals could not be cached",98);
    if (arg0_) {
        result = ((bool)U_JNIVAR->CallNonvirtualBooleanMethod(arg1_, ::app::Android::android::view::accessibility::AccessibilityNodeInfo___javaClass_2, ::app::Android::android::view::accessibility::AccessibilityNodeInfo__equals_20955_ID, _obArg2));
    }
    else
    {
        result = ((bool)U_JNIVAR->CallBooleanMethod(arg1_, ::app::Android::android::view::accessibility::AccessibilityNodeInfo__equals_20955_ID, _obArg2));
    }
    ::app::Android::Base::JNI__CheckException_1(NULL, U_JNIVAR);
    return result;
}

int AccessibilityNodeInfo__hashCode_1(AccessibilityNodeInfo* __this)
{
    return AccessibilityNodeInfo__hashCode_IMPL_20956(NULL, __this->_subclassed, __this->_javaObject);
}

int AccessibilityNodeInfo__hashCode_IMPL_20956(::uStatic* __this, bool arg0_, jobject arg1_)
{
    INIT_JNI;
    CLASS_INIT(::app::Android::android::view::accessibility::AccessibilityNodeInfo___javaClass_2,::app::Android::android::view::accessibility::AccessibilityNodeInfo___Init_2(NULL));
    
    int result;
    CACHE_METHOD(::app::Android::android::view::accessibility::AccessibilityNodeInfo__hashCode_20956_ID,::app::Android::android::view::accessibility::AccessibilityNodeInfo___javaClass_2,"hashCode","()I",GetMethodID,"Id for fallback method android.view.accessibility.AccessibilityNodeInfo.hashCode could not be cached",100);
    if (arg0_) {
        result = ((int)U_JNIVAR->CallNonvirtualIntMethod(arg1_, ::app::Android::android::view::accessibility::AccessibilityNodeInfo___javaClass_2, ::app::Android::android::view::accessibility::AccessibilityNodeInfo__hashCode_20956_ID));
    }
    else
    {
        result = ((int)U_JNIVAR->CallIntMethod(arg1_, ::app::Android::android::view::accessibility::AccessibilityNodeInfo__hashCode_20956_ID));
    }
    ::app::Android::Base::JNI__CheckException_1(NULL, U_JNIVAR);
    return result;
}

::app::Android::java::lang::String* AccessibilityNodeInfo__toString(AccessibilityNodeInfo* __this)
{
    return ::uCast< ::app::Android::java::lang::String*>(AccessibilityNodeInfo__toString_IMPL_20957(NULL, __this->_subclassed, __this->_javaObject), ::app::Android::java::lang::String__typeof());
}

::uObject* AccessibilityNodeInfo__toString_IMPL_20957(::uStatic* __this, bool arg0_, jobject arg1_)
{
    INIT_JNI;
    CLASS_INIT(::app::Android::android::view::accessibility::AccessibilityNodeInfo___javaClass_2,::app::Android::android::view::accessibility::AccessibilityNodeInfo___Init_2(NULL));
    
    ::uObject* result;
    CACHE_METHOD(::app::Android::android::view::accessibility::AccessibilityNodeInfo__toString_20957_ID,::app::Android::android::view::accessibility::AccessibilityNodeInfo___javaClass_2,"toString","()Ljava/lang/String;",GetMethodID,"Id for fallback method android.view.accessibility.AccessibilityNodeInfo.toString could not be cached",100);
    if (arg0_) {
        NEW_UNO(U_JNIVAR->CallNonvirtualObjectMethod(arg1_, ::app::Android::android::view::accessibility::AccessibilityNodeInfo___javaClass_2, ::app::Android::android::view::accessibility::AccessibilityNodeInfo__toString_20957_ID),result,::app::Android::java::lang::String__typeof(),::app::Android::java::lang::String*,false,true);
    }
    else
    {
        NEW_UNO(U_JNIVAR->CallObjectMethod(arg1_, ::app::Android::android::view::accessibility::AccessibilityNodeInfo__toString_20957_ID),result,::app::Android::java::lang::String__typeof(),::app::Android::java::lang::String*,false,true);
    }
    ::app::Android::Base::JNI__CheckException_1(NULL, U_JNIVAR);
    return result;
}

void AccessibilityNodeInfo__writeToParcel(AccessibilityNodeInfo* __this, ::app::Android::android::os::Parcel* arg0, int arg1)
{
    AccessibilityNodeInfo__writeToParcel_IMPL_20954(NULL, __this->_subclassed, __this->_javaObject, (::uObject*)arg0, arg1);
}

void AccessibilityNodeInfo__writeToParcel_IMPL_20954(::uStatic* __this, bool arg0_, jobject arg1_, ::uObject* arg2_, int arg3_)
{
    INIT_JNI;
    CLASS_INIT(::app::Android::android::view::accessibility::AccessibilityNodeInfo___javaClass_2,::app::Android::android::view::accessibility::AccessibilityNodeInfo___Init_2(NULL));
    jobject _obArg2 = ((!arg2_) ? NULL : ::app::Android::Base::Wrappers::IJWrapper::_GetJavaObject(arg2_));
    CACHE_METHOD(::app::Android::android::view::accessibility::AccessibilityNodeInfo__writeToParcel_20954_ID,::app::Android::android::view::accessibility::AccessibilityNodeInfo___javaClass_2,"writeToParcel","(Landroid/os/Parcel;I)V",GetMethodID,"Id for fallback method android.view.accessibility.AccessibilityNodeInfo.writeToParcel could not be cached",105);
    if (arg0_) {
        U_JNIVAR->CallNonvirtualVoidMethod(arg1_, ::app::Android::android::view::accessibility::AccessibilityNodeInfo___javaClass_2, ::app::Android::android::view::accessibility::AccessibilityNodeInfo__writeToParcel_20954_ID, _obArg2, ((jint)arg3_));
    }
    else
    {
        U_JNIVAR->CallVoidMethod(arg1_, ::app::Android::android::view::accessibility::AccessibilityNodeInfo__writeToParcel_20954_ID, _obArg2, ((jint)arg3_));
    }
    ::app::Android::Base::JNI__CheckException_1(NULL, U_JNIVAR);
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\Android\0.13.2\Android\android\view\accessibility\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

AccessibilityNodeProvider__uType* AccessibilityNodeProvider__typeof()
{
    static ::uStaticStrong<AccessibilityNodeProvider__uType*> type;
    if (type != NULL) return type;

    type = (AccessibilityNodeProvider__uType*)::uAllocClassType(sizeof(AccessibilityNodeProvider__uType), "Android.android.view.accessibility.AccessibilityNodeProvider", false, 2, 0, 0);

    type->SetBaseType(::app::Android::java::lang::Object__typeof());

    type->SetInterfaces(
        ::app::Android::Base::Wrappers::IJWrapper__typeof(), offsetof(AccessibilityNodeProvider__uType, __interface_0),
        ::app::Uno::IDisposable__typeof(), offsetof(AccessibilityNodeProvider__uType, __interface_1));

    ::uRegisterType(type);
    return type;
}

}}}}}
