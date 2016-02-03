#include <app/Android.android.os.Bundle.h>
#include <app/Android.android.os.IBinder.h>
#include <app/Android.android.os.Parcel.h>
#include <app/Android.android.view.inputmethod.CompletionInfo.h>
#include <app/Android.android.view.inputmethod.CorrectionInfo.h>
#include <app/Android.android.view.inputmethod.EditorInfo.h>
#include <app/Android.android.view.inputmethod.ExtractedText.h>
#include <app/Android.android.view.inputmethod.ExtractedTextRequest.h>
#include <app/Android.android.view.inputmethod.InputConnection.h>
#include <app/Android.android.view.inputmethod.InputMethodManager.h>
#include <app/Android.android.view.KeyEvent.h>
#include <app/Android.android.view.View.h>
#include <app/Android.Base.AndroidBindingMacros.h>
#include <app/Android.Base.JNI.h>
#include <app/Android.Base.Primitives.jfieldID.h>
#include <app/Android.Base.Primitives.jmethodID.h>
#include <app/Android.Base.Primitives.ujclass.h>
#include <app/Android.Base.Primitives.ujobject.h>
#include <app/Android.Base.Wrappers.JWrapper.h>
#include <app/Android.Fallbacks.Android_android_view_inputmethod_InputConnection.h>
#include <app/Android.java.lang.CharSequence.h>
#include <app/Android.java.lang.String.h>
#include <app/Uno.Bool.h>
#include <app/Uno.Exception.h>
#include <app/Uno.Int.h>

namespace app {
namespace Android {
namespace android {
namespace view {
namespace inputmethod {

// This file was generated based on 'C:\ProgramData\Uno\Packages\Android\0.13.2\Android\android\view\inputmethod\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

jclass CompletionInfo___javaClass_2;
jmethodID CompletionInfo__describeContents_21284_ID;
jmethodID CompletionInfo__toString_21282_ID;
jmethodID CompletionInfo__writeToParcel_21283_ID;

CompletionInfo__uType* CompletionInfo__typeof()
{
    static ::uStaticStrong<CompletionInfo__uType*> type;
    if (type != NULL) return type;

    type = (CompletionInfo__uType*)::uAllocClassType(sizeof(CompletionInfo__uType), "Android.android.view.inputmethod.CompletionInfo", false, 3, 0, 0);

    type->SetBaseType(::app::Android::java::lang::Object__typeof());
    type->__fp_toString = (::app::Android::java::lang::String*(*)(::app::Android::java::lang::Object*))CompletionInfo__toString;
    type->__interface_2.__fp_describeContents = (int(*)(void*))CompletionInfo__describeContents;
    type->__interface_2.__fp_writeToParcel = (void(*)(void*, ::app::Android::android::os::Parcel*, int))CompletionInfo__writeToParcel;
    type->__interface_0.__fp__GetJavaObject = (jobject(*)(void*))::app::Android::Base::Wrappers::JWrapper___GetJavaObject;
    type->__interface_0.__fp__IsSubclassed = (bool(*)(void*))::app::Android::Base::Wrappers::JWrapper___IsSubclassed;

    type->SetInterfaces(
        ::app::Android::Base::Wrappers::IJWrapper__typeof(), offsetof(CompletionInfo__uType, __interface_0),
        ::app::Uno::IDisposable__typeof(), offsetof(CompletionInfo__uType, __interface_1),
        ::app::Android::android::os::Parcelable__typeof(), offsetof(CompletionInfo__uType, __interface_2));

    type->SetFields(4,
        ::uNewField("_javaClass", &CompletionInfo___javaClass_2, 0, ::app::Android::Base::Primitives::ujclass__typeof()),
        ::uNewField("describeContents_21284_ID", &CompletionInfo__describeContents_21284_ID, 0, ::app::Android::Base::Primitives::jmethodID__typeof()),
        ::uNewField("toString_21282_ID", &CompletionInfo__toString_21282_ID, 0, ::app::Android::Base::Primitives::jmethodID__typeof()),
        ::uNewField("writeToParcel_21283_ID", &CompletionInfo__writeToParcel_21283_ID, 0, ::app::Android::Base::Primitives::jmethodID__typeof()));

    type->SetFunctions(6,
        ::uNewFunctionVoid("_Init", CompletionInfo___Init_2, 0, true),
        ::uNewFunction("describeContents", CompletionInfo__describeContents, 0, false, ::app::Uno::Int__typeof()),
        ::uNewFunction("describeContents_IMPL_21284", CompletionInfo__describeContents_IMPL_21284, 0, true, ::app::Uno::Int__typeof(), ::app::Uno::Bool__typeof(), ::app::Android::Base::Primitives::ujobject__typeof()),
        ::uNewFunction("toString_IMPL_21282", CompletionInfo__toString_IMPL_21282, 0, true, ::app::Android::Base::Wrappers::IJWrapper__typeof(), ::app::Uno::Bool__typeof(), ::app::Android::Base::Primitives::ujobject__typeof()),
        ::uNewFunctionVoid("writeToParcel", CompletionInfo__writeToParcel, 0, false, ::app::Android::android::os::Parcel__typeof(), ::app::Uno::Int__typeof()),
        ::uNewFunctionVoid("writeToParcel_IMPL_21283", CompletionInfo__writeToParcel_IMPL_21283, 0, true, ::app::Uno::Bool__typeof(), ::app::Android::Base::Primitives::ujobject__typeof(), ::app::Android::Base::Wrappers::IJWrapper__typeof(), ::app::Uno::Int__typeof()));

    ::uRegisterType(type);
    return type;
}

void CompletionInfo___Init_2(::uStatic* __this)
{
    if (::app::Android::android::view::inputmethod::CompletionInfo___javaClass_2) { return; }
    INIT_JNI;
    ::app::Android::android::view::inputmethod::CompletionInfo___javaClass_2 = NEW_GLOBAL_REF(jclass,LOAD_SYS_CLASS("android/view/inputmethod/CompletionInfo"));
    ::app::Android::Base::JNI__CheckException_1(NULL, U_JNIVAR);
    if (!::app::Android::android::view::inputmethod::CompletionInfo___javaClass_2) { THROW_UNO_EXCEPTION("Unable to cache class 'android.view.inputmethod.CompletionInfo'", 63);; }
}

int CompletionInfo__describeContents(CompletionInfo* __this)
{
    return CompletionInfo__describeContents_IMPL_21284(NULL, __this->_subclassed, __this->_javaObject);
}

int CompletionInfo__describeContents_IMPL_21284(::uStatic* __this, bool arg0_, jobject arg1_)
{
    INIT_JNI;
    CLASS_INIT(::app::Android::android::view::inputmethod::CompletionInfo___javaClass_2,::app::Android::android::view::inputmethod::CompletionInfo___Init_2(NULL));
    
    int result;
    CACHE_METHOD(::app::Android::android::view::inputmethod::CompletionInfo__describeContents_21284_ID,::app::Android::android::view::inputmethod::CompletionInfo___javaClass_2,"describeContents","()I",GetMethodID,"Id for fallback method android.view.inputmethod.CompletionInfo.describeContents could not be cached",99);
    if (arg0_) {
        result = ((int)U_JNIVAR->CallNonvirtualIntMethod(arg1_, ::app::Android::android::view::inputmethod::CompletionInfo___javaClass_2, ::app::Android::android::view::inputmethod::CompletionInfo__describeContents_21284_ID));
    }
    else
    {
        result = ((int)U_JNIVAR->CallIntMethod(arg1_, ::app::Android::android::view::inputmethod::CompletionInfo__describeContents_21284_ID));
    }
    ::app::Android::Base::JNI__CheckException_1(NULL, U_JNIVAR);
    return result;
}

::app::Android::java::lang::String* CompletionInfo__toString(CompletionInfo* __this)
{
    return ::uCast< ::app::Android::java::lang::String*>(CompletionInfo__toString_IMPL_21282(NULL, __this->_subclassed, __this->_javaObject), ::app::Android::java::lang::String__typeof());
}

::uObject* CompletionInfo__toString_IMPL_21282(::uStatic* __this, bool arg0_, jobject arg1_)
{
    INIT_JNI;
    CLASS_INIT(::app::Android::android::view::inputmethod::CompletionInfo___javaClass_2,::app::Android::android::view::inputmethod::CompletionInfo___Init_2(NULL));
    
    ::uObject* result;
    CACHE_METHOD(::app::Android::android::view::inputmethod::CompletionInfo__toString_21282_ID,::app::Android::android::view::inputmethod::CompletionInfo___javaClass_2,"toString","()Ljava/lang/String;",GetMethodID,"Id for fallback method android.view.inputmethod.CompletionInfo.toString could not be cached",91);
    if (arg0_) {
        NEW_UNO(U_JNIVAR->CallNonvirtualObjectMethod(arg1_, ::app::Android::android::view::inputmethod::CompletionInfo___javaClass_2, ::app::Android::android::view::inputmethod::CompletionInfo__toString_21282_ID),result,::app::Android::java::lang::String__typeof(),::app::Android::java::lang::String*,false,true);
    }
    else
    {
        NEW_UNO(U_JNIVAR->CallObjectMethod(arg1_, ::app::Android::android::view::inputmethod::CompletionInfo__toString_21282_ID),result,::app::Android::java::lang::String__typeof(),::app::Android::java::lang::String*,false,true);
    }
    ::app::Android::Base::JNI__CheckException_1(NULL, U_JNIVAR);
    return result;
}

void CompletionInfo__writeToParcel(CompletionInfo* __this, ::app::Android::android::os::Parcel* arg0, int arg1)
{
    CompletionInfo__writeToParcel_IMPL_21283(NULL, __this->_subclassed, __this->_javaObject, (::uObject*)arg0, arg1);
}

void CompletionInfo__writeToParcel_IMPL_21283(::uStatic* __this, bool arg0_, jobject arg1_, ::uObject* arg2_, int arg3_)
{
    INIT_JNI;
    CLASS_INIT(::app::Android::android::view::inputmethod::CompletionInfo___javaClass_2,::app::Android::android::view::inputmethod::CompletionInfo___Init_2(NULL));
    jobject _obArg2 = ((!arg2_) ? NULL : ::app::Android::Base::Wrappers::IJWrapper::_GetJavaObject(arg2_));
    CACHE_METHOD(::app::Android::android::view::inputmethod::CompletionInfo__writeToParcel_21283_ID,::app::Android::android::view::inputmethod::CompletionInfo___javaClass_2,"writeToParcel","(Landroid/os/Parcel;I)V",GetMethodID,"Id for fallback method android.view.inputmethod.CompletionInfo.writeToParcel could not be cached",96);
    if (arg0_) {
        U_JNIVAR->CallNonvirtualVoidMethod(arg1_, ::app::Android::android::view::inputmethod::CompletionInfo___javaClass_2, ::app::Android::android::view::inputmethod::CompletionInfo__writeToParcel_21283_ID, _obArg2, ((jint)arg3_));
    }
    else
    {
        U_JNIVAR->CallVoidMethod(arg1_, ::app::Android::android::view::inputmethod::CompletionInfo__writeToParcel_21283_ID, _obArg2, ((jint)arg3_));
    }
    ::app::Android::Base::JNI__CheckException_1(NULL, U_JNIVAR);
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\Android\0.13.2\Android\android\view\inputmethod\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

jclass CorrectionInfo___javaClass_2;
jmethodID CorrectionInfo__describeContents_21292_ID;
jmethodID CorrectionInfo__toString_21290_ID;
jmethodID CorrectionInfo__writeToParcel_21291_ID;

CorrectionInfo__uType* CorrectionInfo__typeof()
{
    static ::uStaticStrong<CorrectionInfo__uType*> type;
    if (type != NULL) return type;

    type = (CorrectionInfo__uType*)::uAllocClassType(sizeof(CorrectionInfo__uType), "Android.android.view.inputmethod.CorrectionInfo", false, 3, 0, 0);

    type->SetBaseType(::app::Android::java::lang::Object__typeof());
    type->__fp_toString = (::app::Android::java::lang::String*(*)(::app::Android::java::lang::Object*))CorrectionInfo__toString;
    type->__interface_2.__fp_describeContents = (int(*)(void*))CorrectionInfo__describeContents;
    type->__interface_2.__fp_writeToParcel = (void(*)(void*, ::app::Android::android::os::Parcel*, int))CorrectionInfo__writeToParcel;
    type->__interface_0.__fp__GetJavaObject = (jobject(*)(void*))::app::Android::Base::Wrappers::JWrapper___GetJavaObject;
    type->__interface_0.__fp__IsSubclassed = (bool(*)(void*))::app::Android::Base::Wrappers::JWrapper___IsSubclassed;

    type->SetInterfaces(
        ::app::Android::Base::Wrappers::IJWrapper__typeof(), offsetof(CorrectionInfo__uType, __interface_0),
        ::app::Uno::IDisposable__typeof(), offsetof(CorrectionInfo__uType, __interface_1),
        ::app::Android::android::os::Parcelable__typeof(), offsetof(CorrectionInfo__uType, __interface_2));

    type->SetFields(4,
        ::uNewField("_javaClass", &CorrectionInfo___javaClass_2, 0, ::app::Android::Base::Primitives::ujclass__typeof()),
        ::uNewField("describeContents_21292_ID", &CorrectionInfo__describeContents_21292_ID, 0, ::app::Android::Base::Primitives::jmethodID__typeof()),
        ::uNewField("toString_21290_ID", &CorrectionInfo__toString_21290_ID, 0, ::app::Android::Base::Primitives::jmethodID__typeof()),
        ::uNewField("writeToParcel_21291_ID", &CorrectionInfo__writeToParcel_21291_ID, 0, ::app::Android::Base::Primitives::jmethodID__typeof()));

    type->SetFunctions(6,
        ::uNewFunctionVoid("_Init", CorrectionInfo___Init_2, 0, true),
        ::uNewFunction("describeContents", CorrectionInfo__describeContents, 0, false, ::app::Uno::Int__typeof()),
        ::uNewFunction("describeContents_IMPL_21292", CorrectionInfo__describeContents_IMPL_21292, 0, true, ::app::Uno::Int__typeof(), ::app::Uno::Bool__typeof(), ::app::Android::Base::Primitives::ujobject__typeof()),
        ::uNewFunction("toString_IMPL_21290", CorrectionInfo__toString_IMPL_21290, 0, true, ::app::Android::Base::Wrappers::IJWrapper__typeof(), ::app::Uno::Bool__typeof(), ::app::Android::Base::Primitives::ujobject__typeof()),
        ::uNewFunctionVoid("writeToParcel", CorrectionInfo__writeToParcel, 0, false, ::app::Android::android::os::Parcel__typeof(), ::app::Uno::Int__typeof()),
        ::uNewFunctionVoid("writeToParcel_IMPL_21291", CorrectionInfo__writeToParcel_IMPL_21291, 0, true, ::app::Uno::Bool__typeof(), ::app::Android::Base::Primitives::ujobject__typeof(), ::app::Android::Base::Wrappers::IJWrapper__typeof(), ::app::Uno::Int__typeof()));

    ::uRegisterType(type);
    return type;
}

void CorrectionInfo___Init_2(::uStatic* __this)
{
    if (::app::Android::android::view::inputmethod::CorrectionInfo___javaClass_2) { return; }
    INIT_JNI;
    ::app::Android::android::view::inputmethod::CorrectionInfo___javaClass_2 = NEW_GLOBAL_REF(jclass,LOAD_SYS_CLASS("android/view/inputmethod/CorrectionInfo"));
    ::app::Android::Base::JNI__CheckException_1(NULL, U_JNIVAR);
    if (!::app::Android::android::view::inputmethod::CorrectionInfo___javaClass_2) { THROW_UNO_EXCEPTION("Unable to cache class 'android.view.inputmethod.CorrectionInfo'", 63);; }
}

int CorrectionInfo__describeContents(CorrectionInfo* __this)
{
    return CorrectionInfo__describeContents_IMPL_21292(NULL, __this->_subclassed, __this->_javaObject);
}

int CorrectionInfo__describeContents_IMPL_21292(::uStatic* __this, bool arg0_, jobject arg1_)
{
    INIT_JNI;
    CLASS_INIT(::app::Android::android::view::inputmethod::CorrectionInfo___javaClass_2,::app::Android::android::view::inputmethod::CorrectionInfo___Init_2(NULL));
    
    int result;
    CACHE_METHOD(::app::Android::android::view::inputmethod::CorrectionInfo__describeContents_21292_ID,::app::Android::android::view::inputmethod::CorrectionInfo___javaClass_2,"describeContents","()I",GetMethodID,"Id for fallback method android.view.inputmethod.CorrectionInfo.describeContents could not be cached",99);
    if (arg0_) {
        result = ((int)U_JNIVAR->CallNonvirtualIntMethod(arg1_, ::app::Android::android::view::inputmethod::CorrectionInfo___javaClass_2, ::app::Android::android::view::inputmethod::CorrectionInfo__describeContents_21292_ID));
    }
    else
    {
        result = ((int)U_JNIVAR->CallIntMethod(arg1_, ::app::Android::android::view::inputmethod::CorrectionInfo__describeContents_21292_ID));
    }
    ::app::Android::Base::JNI__CheckException_1(NULL, U_JNIVAR);
    return result;
}

::app::Android::java::lang::String* CorrectionInfo__toString(CorrectionInfo* __this)
{
    return ::uCast< ::app::Android::java::lang::String*>(CorrectionInfo__toString_IMPL_21290(NULL, __this->_subclassed, __this->_javaObject), ::app::Android::java::lang::String__typeof());
}

::uObject* CorrectionInfo__toString_IMPL_21290(::uStatic* __this, bool arg0_, jobject arg1_)
{
    INIT_JNI;
    CLASS_INIT(::app::Android::android::view::inputmethod::CorrectionInfo___javaClass_2,::app::Android::android::view::inputmethod::CorrectionInfo___Init_2(NULL));
    
    ::uObject* result;
    CACHE_METHOD(::app::Android::android::view::inputmethod::CorrectionInfo__toString_21290_ID,::app::Android::android::view::inputmethod::CorrectionInfo___javaClass_2,"toString","()Ljava/lang/String;",GetMethodID,"Id for fallback method android.view.inputmethod.CorrectionInfo.toString could not be cached",91);
    if (arg0_) {
        NEW_UNO(U_JNIVAR->CallNonvirtualObjectMethod(arg1_, ::app::Android::android::view::inputmethod::CorrectionInfo___javaClass_2, ::app::Android::android::view::inputmethod::CorrectionInfo__toString_21290_ID),result,::app::Android::java::lang::String__typeof(),::app::Android::java::lang::String*,false,true);
    }
    else
    {
        NEW_UNO(U_JNIVAR->CallObjectMethod(arg1_, ::app::Android::android::view::inputmethod::CorrectionInfo__toString_21290_ID),result,::app::Android::java::lang::String__typeof(),::app::Android::java::lang::String*,false,true);
    }
    ::app::Android::Base::JNI__CheckException_1(NULL, U_JNIVAR);
    return result;
}

void CorrectionInfo__writeToParcel(CorrectionInfo* __this, ::app::Android::android::os::Parcel* arg0, int arg1)
{
    CorrectionInfo__writeToParcel_IMPL_21291(NULL, __this->_subclassed, __this->_javaObject, (::uObject*)arg0, arg1);
}

void CorrectionInfo__writeToParcel_IMPL_21291(::uStatic* __this, bool arg0_, jobject arg1_, ::uObject* arg2_, int arg3_)
{
    INIT_JNI;
    CLASS_INIT(::app::Android::android::view::inputmethod::CorrectionInfo___javaClass_2,::app::Android::android::view::inputmethod::CorrectionInfo___Init_2(NULL));
    jobject _obArg2 = ((!arg2_) ? NULL : ::app::Android::Base::Wrappers::IJWrapper::_GetJavaObject(arg2_));
    CACHE_METHOD(::app::Android::android::view::inputmethod::CorrectionInfo__writeToParcel_21291_ID,::app::Android::android::view::inputmethod::CorrectionInfo___javaClass_2,"writeToParcel","(Landroid/os/Parcel;I)V",GetMethodID,"Id for fallback method android.view.inputmethod.CorrectionInfo.writeToParcel could not be cached",96);
    if (arg0_) {
        U_JNIVAR->CallNonvirtualVoidMethod(arg1_, ::app::Android::android::view::inputmethod::CorrectionInfo___javaClass_2, ::app::Android::android::view::inputmethod::CorrectionInfo__writeToParcel_21291_ID, _obArg2, ((jint)arg3_));
    }
    else
    {
        U_JNIVAR->CallVoidMethod(arg1_, ::app::Android::android::view::inputmethod::CorrectionInfo__writeToParcel_21291_ID, _obArg2, ((jint)arg3_));
    }
    ::app::Android::Base::JNI__CheckException_1(NULL, U_JNIVAR);
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\Android\0.13.2\Android\android\view\inputmethod\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

jclass EditorInfo___javaClass_2;
jmethodID EditorInfo__describeContents_21329_ID;
jmethodID EditorInfo__writeToParcel_21328_ID;

EditorInfo__uType* EditorInfo__typeof()
{
    static ::uStaticStrong<EditorInfo__uType*> type;
    if (type != NULL) return type;

    type = (EditorInfo__uType*)::uAllocClassType(sizeof(EditorInfo__uType), "Android.android.view.inputmethod.EditorInfo", false, 3, 0, 0);

    type->SetBaseType(::app::Android::java::lang::Object__typeof());
    type->__interface_2.__fp_describeContents = (int(*)(void*))EditorInfo__describeContents;
    type->__interface_2.__fp_writeToParcel = (void(*)(void*, ::app::Android::android::os::Parcel*, int))EditorInfo__writeToParcel;
    type->__interface_0.__fp__GetJavaObject = (jobject(*)(void*))::app::Android::Base::Wrappers::JWrapper___GetJavaObject;
    type->__interface_0.__fp__IsSubclassed = (bool(*)(void*))::app::Android::Base::Wrappers::JWrapper___IsSubclassed;

    type->SetInterfaces(
        ::app::Android::Base::Wrappers::IJWrapper__typeof(), offsetof(EditorInfo__uType, __interface_0),
        ::app::Uno::IDisposable__typeof(), offsetof(EditorInfo__uType, __interface_1),
        ::app::Android::android::os::Parcelable__typeof(), offsetof(EditorInfo__uType, __interface_2));

    type->SetFields(3,
        ::uNewField("_javaClass", &EditorInfo___javaClass_2, 0, ::app::Android::Base::Primitives::ujclass__typeof()),
        ::uNewField("describeContents_21329_ID", &EditorInfo__describeContents_21329_ID, 0, ::app::Android::Base::Primitives::jmethodID__typeof()),
        ::uNewField("writeToParcel_21328_ID", &EditorInfo__writeToParcel_21328_ID, 0, ::app::Android::Base::Primitives::jmethodID__typeof()));

    type->SetFunctions(5,
        ::uNewFunctionVoid("_Init", EditorInfo___Init_2, 0, true),
        ::uNewFunction("describeContents", EditorInfo__describeContents, 0, false, ::app::Uno::Int__typeof()),
        ::uNewFunction("describeContents_IMPL_21329", EditorInfo__describeContents_IMPL_21329, 0, true, ::app::Uno::Int__typeof(), ::app::Uno::Bool__typeof(), ::app::Android::Base::Primitives::ujobject__typeof()),
        ::uNewFunctionVoid("writeToParcel", EditorInfo__writeToParcel, 0, false, ::app::Android::android::os::Parcel__typeof(), ::app::Uno::Int__typeof()),
        ::uNewFunctionVoid("writeToParcel_IMPL_21328", EditorInfo__writeToParcel_IMPL_21328, 0, true, ::app::Uno::Bool__typeof(), ::app::Android::Base::Primitives::ujobject__typeof(), ::app::Android::Base::Wrappers::IJWrapper__typeof(), ::app::Uno::Int__typeof()));

    ::uRegisterType(type);
    return type;
}

void EditorInfo___Init_2(::uStatic* __this)
{
    if (::app::Android::android::view::inputmethod::EditorInfo___javaClass_2) { return; }
    INIT_JNI;
    ::app::Android::android::view::inputmethod::EditorInfo___javaClass_2 = NEW_GLOBAL_REF(jclass,LOAD_SYS_CLASS("android/view/inputmethod/EditorInfo"));
    ::app::Android::Base::JNI__CheckException_1(NULL, U_JNIVAR);
    if (!::app::Android::android::view::inputmethod::EditorInfo___javaClass_2) { THROW_UNO_EXCEPTION("Unable to cache class 'android.view.inputmethod.EditorInfo'", 59);; }
}

int EditorInfo__describeContents(EditorInfo* __this)
{
    return EditorInfo__describeContents_IMPL_21329(NULL, __this->_subclassed, __this->_javaObject);
}

int EditorInfo__describeContents_IMPL_21329(::uStatic* __this, bool arg0_, jobject arg1_)
{
    INIT_JNI;
    CLASS_INIT(::app::Android::android::view::inputmethod::EditorInfo___javaClass_2,::app::Android::android::view::inputmethod::EditorInfo___Init_2(NULL));
    
    int result;
    CACHE_METHOD(::app::Android::android::view::inputmethod::EditorInfo__describeContents_21329_ID,::app::Android::android::view::inputmethod::EditorInfo___javaClass_2,"describeContents","()I",GetMethodID,"Id for fallback method android.view.inputmethod.EditorInfo.describeContents could not be cached",95);
    if (arg0_) {
        result = ((int)U_JNIVAR->CallNonvirtualIntMethod(arg1_, ::app::Android::android::view::inputmethod::EditorInfo___javaClass_2, ::app::Android::android::view::inputmethod::EditorInfo__describeContents_21329_ID));
    }
    else
    {
        result = ((int)U_JNIVAR->CallIntMethod(arg1_, ::app::Android::android::view::inputmethod::EditorInfo__describeContents_21329_ID));
    }
    ::app::Android::Base::JNI__CheckException_1(NULL, U_JNIVAR);
    return result;
}

void EditorInfo__writeToParcel(EditorInfo* __this, ::app::Android::android::os::Parcel* arg0, int arg1)
{
    EditorInfo__writeToParcel_IMPL_21328(NULL, __this->_subclassed, __this->_javaObject, (::uObject*)arg0, arg1);
}

void EditorInfo__writeToParcel_IMPL_21328(::uStatic* __this, bool arg0_, jobject arg1_, ::uObject* arg2_, int arg3_)
{
    INIT_JNI;
    CLASS_INIT(::app::Android::android::view::inputmethod::EditorInfo___javaClass_2,::app::Android::android::view::inputmethod::EditorInfo___Init_2(NULL));
    jobject _obArg2 = ((!arg2_) ? NULL : ::app::Android::Base::Wrappers::IJWrapper::_GetJavaObject(arg2_));
    CACHE_METHOD(::app::Android::android::view::inputmethod::EditorInfo__writeToParcel_21328_ID,::app::Android::android::view::inputmethod::EditorInfo___javaClass_2,"writeToParcel","(Landroid/os/Parcel;I)V",GetMethodID,"Id for fallback method android.view.inputmethod.EditorInfo.writeToParcel could not be cached",92);
    if (arg0_) {
        U_JNIVAR->CallNonvirtualVoidMethod(arg1_, ::app::Android::android::view::inputmethod::EditorInfo___javaClass_2, ::app::Android::android::view::inputmethod::EditorInfo__writeToParcel_21328_ID, _obArg2, ((jint)arg3_));
    }
    else
    {
        U_JNIVAR->CallVoidMethod(arg1_, ::app::Android::android::view::inputmethod::EditorInfo__writeToParcel_21328_ID, _obArg2, ((jint)arg3_));
    }
    ::app::Android::Base::JNI__CheckException_1(NULL, U_JNIVAR);
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\Android\0.13.2\Android\android\view\inputmethod\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

jclass ExtractedText___javaClass_2;
jmethodID ExtractedText__describeContents_21342_ID;
jmethodID ExtractedText__writeToParcel_21341_ID;

ExtractedText__uType* ExtractedText__typeof()
{
    static ::uStaticStrong<ExtractedText__uType*> type;
    if (type != NULL) return type;

    type = (ExtractedText__uType*)::uAllocClassType(sizeof(ExtractedText__uType), "Android.android.view.inputmethod.ExtractedText", false, 3, 0, 0);

    type->SetBaseType(::app::Android::java::lang::Object__typeof());
    type->__interface_2.__fp_describeContents = (int(*)(void*))ExtractedText__describeContents;
    type->__interface_2.__fp_writeToParcel = (void(*)(void*, ::app::Android::android::os::Parcel*, int))ExtractedText__writeToParcel;
    type->__interface_0.__fp__GetJavaObject = (jobject(*)(void*))::app::Android::Base::Wrappers::JWrapper___GetJavaObject;
    type->__interface_0.__fp__IsSubclassed = (bool(*)(void*))::app::Android::Base::Wrappers::JWrapper___IsSubclassed;

    type->SetInterfaces(
        ::app::Android::Base::Wrappers::IJWrapper__typeof(), offsetof(ExtractedText__uType, __interface_0),
        ::app::Uno::IDisposable__typeof(), offsetof(ExtractedText__uType, __interface_1),
        ::app::Android::android::os::Parcelable__typeof(), offsetof(ExtractedText__uType, __interface_2));

    type->SetFields(3,
        ::uNewField("_javaClass", &ExtractedText___javaClass_2, 0, ::app::Android::Base::Primitives::ujclass__typeof()),
        ::uNewField("describeContents_21342_ID", &ExtractedText__describeContents_21342_ID, 0, ::app::Android::Base::Primitives::jmethodID__typeof()),
        ::uNewField("writeToParcel_21341_ID", &ExtractedText__writeToParcel_21341_ID, 0, ::app::Android::Base::Primitives::jmethodID__typeof()));

    type->SetFunctions(5,
        ::uNewFunctionVoid("_Init", ExtractedText___Init_2, 0, true),
        ::uNewFunction("describeContents", ExtractedText__describeContents, 0, false, ::app::Uno::Int__typeof()),
        ::uNewFunction("describeContents_IMPL_21342", ExtractedText__describeContents_IMPL_21342, 0, true, ::app::Uno::Int__typeof(), ::app::Uno::Bool__typeof(), ::app::Android::Base::Primitives::ujobject__typeof()),
        ::uNewFunctionVoid("writeToParcel", ExtractedText__writeToParcel, 0, false, ::app::Android::android::os::Parcel__typeof(), ::app::Uno::Int__typeof()),
        ::uNewFunctionVoid("writeToParcel_IMPL_21341", ExtractedText__writeToParcel_IMPL_21341, 0, true, ::app::Uno::Bool__typeof(), ::app::Android::Base::Primitives::ujobject__typeof(), ::app::Android::Base::Wrappers::IJWrapper__typeof(), ::app::Uno::Int__typeof()));

    ::uRegisterType(type);
    return type;
}

void ExtractedText___Init_2(::uStatic* __this)
{
    if (::app::Android::android::view::inputmethod::ExtractedText___javaClass_2) { return; }
    INIT_JNI;
    ::app::Android::android::view::inputmethod::ExtractedText___javaClass_2 = NEW_GLOBAL_REF(jclass,LOAD_SYS_CLASS("android/view/inputmethod/ExtractedText"));
    ::app::Android::Base::JNI__CheckException_1(NULL, U_JNIVAR);
    if (!::app::Android::android::view::inputmethod::ExtractedText___javaClass_2) { THROW_UNO_EXCEPTION("Unable to cache class 'android.view.inputmethod.ExtractedText'", 62);; }
}

int ExtractedText__describeContents(ExtractedText* __this)
{
    return ExtractedText__describeContents_IMPL_21342(NULL, __this->_subclassed, __this->_javaObject);
}

int ExtractedText__describeContents_IMPL_21342(::uStatic* __this, bool arg0_, jobject arg1_)
{
    INIT_JNI;
    CLASS_INIT(::app::Android::android::view::inputmethod::ExtractedText___javaClass_2,::app::Android::android::view::inputmethod::ExtractedText___Init_2(NULL));
    
    int result;
    CACHE_METHOD(::app::Android::android::view::inputmethod::ExtractedText__describeContents_21342_ID,::app::Android::android::view::inputmethod::ExtractedText___javaClass_2,"describeContents","()I",GetMethodID,"Id for fallback method android.view.inputmethod.ExtractedText.describeContents could not be cached",98);
    if (arg0_) {
        result = ((int)U_JNIVAR->CallNonvirtualIntMethod(arg1_, ::app::Android::android::view::inputmethod::ExtractedText___javaClass_2, ::app::Android::android::view::inputmethod::ExtractedText__describeContents_21342_ID));
    }
    else
    {
        result = ((int)U_JNIVAR->CallIntMethod(arg1_, ::app::Android::android::view::inputmethod::ExtractedText__describeContents_21342_ID));
    }
    ::app::Android::Base::JNI__CheckException_1(NULL, U_JNIVAR);
    return result;
}

void ExtractedText__writeToParcel(ExtractedText* __this, ::app::Android::android::os::Parcel* arg0, int arg1)
{
    ExtractedText__writeToParcel_IMPL_21341(NULL, __this->_subclassed, __this->_javaObject, (::uObject*)arg0, arg1);
}

void ExtractedText__writeToParcel_IMPL_21341(::uStatic* __this, bool arg0_, jobject arg1_, ::uObject* arg2_, int arg3_)
{
    INIT_JNI;
    CLASS_INIT(::app::Android::android::view::inputmethod::ExtractedText___javaClass_2,::app::Android::android::view::inputmethod::ExtractedText___Init_2(NULL));
    jobject _obArg2 = ((!arg2_) ? NULL : ::app::Android::Base::Wrappers::IJWrapper::_GetJavaObject(arg2_));
    CACHE_METHOD(::app::Android::android::view::inputmethod::ExtractedText__writeToParcel_21341_ID,::app::Android::android::view::inputmethod::ExtractedText___javaClass_2,"writeToParcel","(Landroid/os/Parcel;I)V",GetMethodID,"Id for fallback method android.view.inputmethod.ExtractedText.writeToParcel could not be cached",95);
    if (arg0_) {
        U_JNIVAR->CallNonvirtualVoidMethod(arg1_, ::app::Android::android::view::inputmethod::ExtractedText___javaClass_2, ::app::Android::android::view::inputmethod::ExtractedText__writeToParcel_21341_ID, _obArg2, ((jint)arg3_));
    }
    else
    {
        U_JNIVAR->CallVoidMethod(arg1_, ::app::Android::android::view::inputmethod::ExtractedText__writeToParcel_21341_ID, _obArg2, ((jint)arg3_));
    }
    ::app::Android::Base::JNI__CheckException_1(NULL, U_JNIVAR);
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\Android\0.13.2\Android\android\view\inputmethod\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

jclass ExtractedTextRequest___javaClass_2;
jmethodID ExtractedTextRequest__describeContents_21350_ID;
jmethodID ExtractedTextRequest__writeToParcel_21349_ID;

ExtractedTextRequest__uType* ExtractedTextRequest__typeof()
{
    static ::uStaticStrong<ExtractedTextRequest__uType*> type;
    if (type != NULL) return type;

    type = (ExtractedTextRequest__uType*)::uAllocClassType(sizeof(ExtractedTextRequest__uType), "Android.android.view.inputmethod.ExtractedTextRequest", false, 3, 0, 0);

    type->SetBaseType(::app::Android::java::lang::Object__typeof());
    type->__interface_2.__fp_describeContents = (int(*)(void*))ExtractedTextRequest__describeContents;
    type->__interface_2.__fp_writeToParcel = (void(*)(void*, ::app::Android::android::os::Parcel*, int))ExtractedTextRequest__writeToParcel;
    type->__interface_0.__fp__GetJavaObject = (jobject(*)(void*))::app::Android::Base::Wrappers::JWrapper___GetJavaObject;
    type->__interface_0.__fp__IsSubclassed = (bool(*)(void*))::app::Android::Base::Wrappers::JWrapper___IsSubclassed;

    type->SetInterfaces(
        ::app::Android::Base::Wrappers::IJWrapper__typeof(), offsetof(ExtractedTextRequest__uType, __interface_0),
        ::app::Uno::IDisposable__typeof(), offsetof(ExtractedTextRequest__uType, __interface_1),
        ::app::Android::android::os::Parcelable__typeof(), offsetof(ExtractedTextRequest__uType, __interface_2));

    type->SetFields(3,
        ::uNewField("_javaClass", &ExtractedTextRequest___javaClass_2, 0, ::app::Android::Base::Primitives::ujclass__typeof()),
        ::uNewField("describeContents_21350_ID", &ExtractedTextRequest__describeContents_21350_ID, 0, ::app::Android::Base::Primitives::jmethodID__typeof()),
        ::uNewField("writeToParcel_21349_ID", &ExtractedTextRequest__writeToParcel_21349_ID, 0, ::app::Android::Base::Primitives::jmethodID__typeof()));

    type->SetFunctions(5,
        ::uNewFunctionVoid("_Init", ExtractedTextRequest___Init_2, 0, true),
        ::uNewFunction("describeContents", ExtractedTextRequest__describeContents, 0, false, ::app::Uno::Int__typeof()),
        ::uNewFunction("describeContents_IMPL_21350", ExtractedTextRequest__describeContents_IMPL_21350, 0, true, ::app::Uno::Int__typeof(), ::app::Uno::Bool__typeof(), ::app::Android::Base::Primitives::ujobject__typeof()),
        ::uNewFunctionVoid("writeToParcel", ExtractedTextRequest__writeToParcel, 0, false, ::app::Android::android::os::Parcel__typeof(), ::app::Uno::Int__typeof()),
        ::uNewFunctionVoid("writeToParcel_IMPL_21349", ExtractedTextRequest__writeToParcel_IMPL_21349, 0, true, ::app::Uno::Bool__typeof(), ::app::Android::Base::Primitives::ujobject__typeof(), ::app::Android::Base::Wrappers::IJWrapper__typeof(), ::app::Uno::Int__typeof()));

    ::uRegisterType(type);
    return type;
}

void ExtractedTextRequest___Init_2(::uStatic* __this)
{
    if (::app::Android::android::view::inputmethod::ExtractedTextRequest___javaClass_2) { return; }
    INIT_JNI;
    ::app::Android::android::view::inputmethod::ExtractedTextRequest___javaClass_2 = NEW_GLOBAL_REF(jclass,LOAD_SYS_CLASS("android/view/inputmethod/ExtractedTextRequest"));
    ::app::Android::Base::JNI__CheckException_1(NULL, U_JNIVAR);
    if (!::app::Android::android::view::inputmethod::ExtractedTextRequest___javaClass_2) { THROW_UNO_EXCEPTION("Unable to cache class 'android.view.inputmethod.ExtractedTextRequest'", 69);; }
}

int ExtractedTextRequest__describeContents(ExtractedTextRequest* __this)
{
    return ExtractedTextRequest__describeContents_IMPL_21350(NULL, __this->_subclassed, __this->_javaObject);
}

int ExtractedTextRequest__describeContents_IMPL_21350(::uStatic* __this, bool arg0_, jobject arg1_)
{
    INIT_JNI;
    CLASS_INIT(::app::Android::android::view::inputmethod::ExtractedTextRequest___javaClass_2,::app::Android::android::view::inputmethod::ExtractedTextRequest___Init_2(NULL));
    
    int result;
    CACHE_METHOD(::app::Android::android::view::inputmethod::ExtractedTextRequest__describeContents_21350_ID,::app::Android::android::view::inputmethod::ExtractedTextRequest___javaClass_2,"describeContents","()I",GetMethodID,"Id for fallback method android.view.inputmethod.ExtractedTextRequest.describeContents could not be cached",105);
    if (arg0_) {
        result = ((int)U_JNIVAR->CallNonvirtualIntMethod(arg1_, ::app::Android::android::view::inputmethod::ExtractedTextRequest___javaClass_2, ::app::Android::android::view::inputmethod::ExtractedTextRequest__describeContents_21350_ID));
    }
    else
    {
        result = ((int)U_JNIVAR->CallIntMethod(arg1_, ::app::Android::android::view::inputmethod::ExtractedTextRequest__describeContents_21350_ID));
    }
    ::app::Android::Base::JNI__CheckException_1(NULL, U_JNIVAR);
    return result;
}

void ExtractedTextRequest__writeToParcel(ExtractedTextRequest* __this, ::app::Android::android::os::Parcel* arg0, int arg1)
{
    ExtractedTextRequest__writeToParcel_IMPL_21349(NULL, __this->_subclassed, __this->_javaObject, (::uObject*)arg0, arg1);
}

void ExtractedTextRequest__writeToParcel_IMPL_21349(::uStatic* __this, bool arg0_, jobject arg1_, ::uObject* arg2_, int arg3_)
{
    INIT_JNI;
    CLASS_INIT(::app::Android::android::view::inputmethod::ExtractedTextRequest___javaClass_2,::app::Android::android::view::inputmethod::ExtractedTextRequest___Init_2(NULL));
    jobject _obArg2 = ((!arg2_) ? NULL : ::app::Android::Base::Wrappers::IJWrapper::_GetJavaObject(arg2_));
    CACHE_METHOD(::app::Android::android::view::inputmethod::ExtractedTextRequest__writeToParcel_21349_ID,::app::Android::android::view::inputmethod::ExtractedTextRequest___javaClass_2,"writeToParcel","(Landroid/os/Parcel;I)V",GetMethodID,"Id for fallback method android.view.inputmethod.ExtractedTextRequest.writeToParcel could not be cached",102);
    if (arg0_) {
        U_JNIVAR->CallNonvirtualVoidMethod(arg1_, ::app::Android::android::view::inputmethod::ExtractedTextRequest___javaClass_2, ::app::Android::android::view::inputmethod::ExtractedTextRequest__writeToParcel_21349_ID, _obArg2, ((jint)arg3_));
    }
    else
    {
        U_JNIVAR->CallVoidMethod(arg1_, ::app::Android::android::view::inputmethod::ExtractedTextRequest__writeToParcel_21349_ID, _obArg2, ((jint)arg3_));
    }
    ::app::Android::Base::JNI__CheckException_1(NULL, U_JNIVAR);
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\Android\0.13.2\Android\android\view\inputmethod\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

::uInterfaceType* InputConnection__typeof()
{
    static ::uStaticStrong< ::uInterfaceType*> type;
    if (type != NULL) return type;

    type = ::uAllocInterfaceType("Android.android.view.inputmethod.InputConnection");

    ::uRegisterType(type);
    return type;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\Android\0.13.2\Android\android\view\inputmethod\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

jclass InputMethodManager___javaClass_2;
jmethodID InputMethodManager__hideSoftInputFromWindow_21465_ID;
jfieldID InputMethodManager__SHOW_IMPLICIT_21443_ID;
jmethodID InputMethodManager__showSoftInput_21463_ID;

InputMethodManager__uType* InputMethodManager__typeof()
{
    static ::uStaticStrong<InputMethodManager__uType*> type;
    if (type != NULL) return type;

    type = (InputMethodManager__uType*)::uAllocClassType(sizeof(InputMethodManager__uType), "Android.android.view.inputmethod.InputMethodManager", false, 2, 0, 0);

    type->SetBaseType(::app::Android::java::lang::Object__typeof());

    type->SetInterfaces(
        ::app::Android::Base::Wrappers::IJWrapper__typeof(), offsetof(InputMethodManager__uType, __interface_0),
        ::app::Uno::IDisposable__typeof(), offsetof(InputMethodManager__uType, __interface_1));

    type->SetFields(4,
        ::uNewField("_javaClass", &InputMethodManager___javaClass_2, 0, ::app::Android::Base::Primitives::ujclass__typeof()),
        ::uNewField("hideSoftInputFromWindow_21465_ID", &InputMethodManager__hideSoftInputFromWindow_21465_ID, 0, ::app::Android::Base::Primitives::jmethodID__typeof()),
        ::uNewField("SHOW_IMPLICIT_21443_ID", &InputMethodManager__SHOW_IMPLICIT_21443_ID, 0, ::app::Android::Base::Primitives::jfieldID__typeof()),
        ::uNewField("showSoftInput_21463_ID", &InputMethodManager__showSoftInput_21463_ID, 0, ::app::Android::Base::Primitives::jmethodID__typeof()));

    type->SetFunctions(6,
        ::uNewFunctionVoid("_Init", InputMethodManager___Init_2, 0, true),
        ::uNewFunction("get_SHOW_IMPLICIT", InputMethodManager__get_SHOW_IMPLICIT, 0, true, ::app::Uno::Int__typeof()),
        ::uNewFunction("hideSoftInputFromWindow", InputMethodManager__hideSoftInputFromWindow, 0, false, ::app::Uno::Bool__typeof(), ::app::Android::android::os::IBinder__typeof(), ::app::Uno::Int__typeof()),
        ::uNewFunction("hideSoftInputFromWindow_IMPL_21465", InputMethodManager__hideSoftInputFromWindow_IMPL_21465, 0, true, ::app::Uno::Bool__typeof(), ::app::Uno::Bool__typeof(), ::app::Android::Base::Primitives::ujobject__typeof(), ::app::Android::Base::Wrappers::IJWrapper__typeof(), ::app::Uno::Int__typeof()),
        ::uNewFunction("showSoftInput", InputMethodManager__showSoftInput, 0, false, ::app::Uno::Bool__typeof(), ::app::Android::android::view::View__typeof(), ::app::Uno::Int__typeof()),
        ::uNewFunction("showSoftInput_IMPL_21463", InputMethodManager__showSoftInput_IMPL_21463, 0, true, ::app::Uno::Bool__typeof(), ::app::Uno::Bool__typeof(), ::app::Android::Base::Primitives::ujobject__typeof(), ::app::Android::Base::Wrappers::IJWrapper__typeof(), ::app::Uno::Int__typeof()));

    ::uRegisterType(type);
    return type;
}

void InputMethodManager___Init_2(::uStatic* __this)
{
    if (::app::Android::android::view::inputmethod::InputMethodManager___javaClass_2) { return; }
    INIT_JNI;
    ::app::Android::android::view::inputmethod::InputMethodManager___javaClass_2 = NEW_GLOBAL_REF(jclass,LOAD_SYS_CLASS("android/view/inputmethod/InputMethodManager"));
    ::app::Android::Base::JNI__CheckException_1(NULL, U_JNIVAR);
    if (!::app::Android::android::view::inputmethod::InputMethodManager___javaClass_2) { THROW_UNO_EXCEPTION("Unable to cache class 'android.view.inputmethod.InputMethodManager'", 67);; }
}

int InputMethodManager__get_SHOW_IMPLICIT(::uStatic* __this)
{
    INIT_JNI;
    CLASS_INIT(::app::Android::android::view::inputmethod::InputMethodManager___javaClass_2,::app::Android::android::view::inputmethod::InputMethodManager___Init_2(NULL));
    if (::uEnterCriticalIfNull(&::app::Android::android::view::inputmethod::InputMethodManager__SHOW_IMPLICIT_21443_ID)) {;
    CACHE_FIELD(::app::Android::android::view::inputmethod::InputMethodManager__SHOW_IMPLICIT_21443_ID,::app::Android::android::view::inputmethod::InputMethodManager___javaClass_2,"SHOW_IMPLICIT","I",GetStaticFieldID,"Id for field InputMethodManager.SHOW_IMPLICIT could not be cached",65);
    ::uExitCritical();;
    };
    int result;;
    result = ((int)U_JNIVAR->GetStaticIntField(::app::Android::android::view::inputmethod::InputMethodManager___javaClass_2, ::app::Android::android::view::inputmethod::InputMethodManager__SHOW_IMPLICIT_21443_ID));;
    return result;
}

bool InputMethodManager__hideSoftInputFromWindow(InputMethodManager* __this, ::uObject* arg0, int arg1)
{
    return InputMethodManager__hideSoftInputFromWindow_IMPL_21465(NULL, __this->_subclassed, __this->_javaObject, (::uObject*)arg0, arg1);
}

bool InputMethodManager__hideSoftInputFromWindow_IMPL_21465(::uStatic* __this, bool arg0_, jobject arg1_, ::uObject* arg2_, int arg3_)
{
    INIT_JNI;
    CLASS_INIT(::app::Android::android::view::inputmethod::InputMethodManager___javaClass_2,::app::Android::android::view::inputmethod::InputMethodManager___Init_2(NULL));
    jobject _obArg2 = ((!arg2_) ? NULL : ::app::Android::Base::Wrappers::IJWrapper::_GetJavaObject(arg2_));
    bool result;
    CACHE_METHOD(::app::Android::android::view::inputmethod::InputMethodManager__hideSoftInputFromWindow_21465_ID,::app::Android::android::view::inputmethod::InputMethodManager___javaClass_2,"hideSoftInputFromWindow","(Landroid/os/IBinder;I)Z",GetMethodID,"Id for fallback method android.view.inputmethod.InputMethodManager.hideSoftInputFromWindow could not be cached",110);
    if (arg0_) {
        result = ((bool)U_JNIVAR->CallNonvirtualBooleanMethod(arg1_, ::app::Android::android::view::inputmethod::InputMethodManager___javaClass_2, ::app::Android::android::view::inputmethod::InputMethodManager__hideSoftInputFromWindow_21465_ID, _obArg2, ((jint)arg3_)));
    }
    else
    {
        result = ((bool)U_JNIVAR->CallBooleanMethod(arg1_, ::app::Android::android::view::inputmethod::InputMethodManager__hideSoftInputFromWindow_21465_ID, _obArg2, ((jint)arg3_)));
    }
    ::app::Android::Base::JNI__CheckException_1(NULL, U_JNIVAR);
    return result;
}

bool InputMethodManager__showSoftInput(InputMethodManager* __this, ::app::Android::android::view::View* arg0, int arg1)
{
    return InputMethodManager__showSoftInput_IMPL_21463(NULL, __this->_subclassed, __this->_javaObject, (::uObject*)arg0, arg1);
}

bool InputMethodManager__showSoftInput_IMPL_21463(::uStatic* __this, bool arg0_, jobject arg1_, ::uObject* arg2_, int arg3_)
{
    INIT_JNI;
    CLASS_INIT(::app::Android::android::view::inputmethod::InputMethodManager___javaClass_2,::app::Android::android::view::inputmethod::InputMethodManager___Init_2(NULL));
    jobject _obArg2 = ((!arg2_) ? NULL : ::app::Android::Base::Wrappers::IJWrapper::_GetJavaObject(arg2_));
    bool result;
    CACHE_METHOD(::app::Android::android::view::inputmethod::InputMethodManager__showSoftInput_21463_ID,::app::Android::android::view::inputmethod::InputMethodManager___javaClass_2,"showSoftInput","(Landroid/view/View;I)Z",GetMethodID,"Id for fallback method android.view.inputmethod.InputMethodManager.showSoftInput could not be cached",100);
    if (arg0_) {
        result = ((bool)U_JNIVAR->CallNonvirtualBooleanMethod(arg1_, ::app::Android::android::view::inputmethod::InputMethodManager___javaClass_2, ::app::Android::android::view::inputmethod::InputMethodManager__showSoftInput_21463_ID, _obArg2, ((jint)arg3_)));
    }
    else
    {
        result = ((bool)U_JNIVAR->CallBooleanMethod(arg1_, ::app::Android::android::view::inputmethod::InputMethodManager__showSoftInput_21463_ID, _obArg2, ((jint)arg3_)));
    }
    ::app::Android::Base::JNI__CheckException_1(NULL, U_JNIVAR);
    return result;
}

}}}}}
