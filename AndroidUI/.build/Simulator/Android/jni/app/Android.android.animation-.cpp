#include <app/Android.android.animation.Animator.h>
#include <app/Android.android.animation.LayoutTransition.h>
#include <app/Android.android.animation.TimeAnimator.h>
#include <app/Android.android.animation.TimeAnimatorDLRTimeListener.h>
#include <app/Android.android.animation.TimeInterpolator.h>
#include <app/Android.android.animation.ValueAnimator.h>
#include <app/Android.Base.AndroidBindingMacros.h>
#include <app/Android.Base.JNI.h>
#include <app/Android.Base.Primitives.jmethodID.h>
#include <app/Android.Base.Primitives.ujclass.h>
#include <app/Android.Base.Primitives.ujobject.h>
#include <app/Android.Base.Wrappers.JWrapper.h>
#include <app/Android.Fallbacks.Android_android_animation_Animator.h>
#include <app/Android.Fallbacks.Android_android_animation_TimeAnimatorDLRTimeListener.h>
#include <app/Android.Fallbacks.Android_android_animation_TimeInterpolator.h>
#include <app/Android.java.lang.String.h>
#include <app/Uno.Bool.h>
#include <app/Uno.Exception.h>
#include <app/Uno.Float.h>
#include <app/Uno.Long.h>
#include <app/Uno.Type.h>

namespace app {
namespace Android {
namespace android {
namespace animation {

// This file was generated based on 'C:\ProgramData\Uno\Packages\Android\0.13.2\Android\android\animation\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

Animator__uType* Animator__typeof()
{
    static ::uStaticStrong<Animator__uType*> type;
    if (type != NULL) return type;

    type = (Animator__uType*)::uAllocClassType(sizeof(Animator__uType), "Android.android.animation.Animator", false, 2, 0, 0);

    type->SetBaseType(::app::Android::java::lang::Object__typeof());
    type->__interface_0.__fp__GetJavaObject = (jobject(*)(void*))::app::Android::Base::Wrappers::JWrapper___GetJavaObject;
    type->__interface_0.__fp__IsSubclassed = (bool(*)(void*))::app::Android::Base::Wrappers::JWrapper___IsSubclassed;

    type->SetInterfaces(
        ::app::Android::Base::Wrappers::IJWrapper__typeof(), offsetof(Animator__uType, __interface_0),
        ::app::Uno::IDisposable__typeof(), offsetof(Animator__uType, __interface_1));

    ::uRegisterType(type);
    return type;
}

void Animator___ObjInit_5(Animator* __this, jobject obj, ::uType* utype, bool hasFallbackClass, bool resolveType)
{
    ::app::Android::java::lang::Object___ObjInit_3(__this, obj, utype, hasFallbackClass, resolveType);
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\Android\0.13.2\Android\android\animation\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

LayoutTransition__uType* LayoutTransition__typeof()
{
    static ::uStaticStrong<LayoutTransition__uType*> type;
    if (type != NULL) return type;

    type = (LayoutTransition__uType*)::uAllocClassType(sizeof(LayoutTransition__uType), "Android.android.animation.LayoutTransition", false, 2, 0, 0);

    type->SetBaseType(::app::Android::java::lang::Object__typeof());

    type->SetInterfaces(
        ::app::Android::Base::Wrappers::IJWrapper__typeof(), offsetof(LayoutTransition__uType, __interface_0),
        ::app::Uno::IDisposable__typeof(), offsetof(LayoutTransition__uType, __interface_1));

    ::uRegisterType(type);
    return type;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\Android\0.13.2\Android\android\animation\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

jclass TimeAnimator___javaClass_4;
jmethodID TimeAnimator__setTimeListener_378_ID;
jmethodID TimeAnimator__start_377_ID;
jmethodID TimeAnimator__TimeAnimator_376_ID_c;

TimeAnimator__uType* TimeAnimator__typeof()
{
    static ::uStaticStrong<TimeAnimator__uType*> type;
    if (type != NULL) return type;

    type = (TimeAnimator__uType*)::uAllocClassType(sizeof(TimeAnimator__uType), "Android.android.animation.TimeAnimator", false, 2, 0, 0);

    type->SetBaseType(::app::Android::android::animation::ValueAnimator__typeof());

    type->SetInterfaces(
        ::app::Android::Base::Wrappers::IJWrapper__typeof(), offsetof(TimeAnimator__uType, __interface_0),
        ::app::Uno::IDisposable__typeof(), offsetof(TimeAnimator__uType, __interface_1));

    type->SetFields(4,
        ::uNewField("_javaClass", &TimeAnimator___javaClass_4, 0, ::app::Android::Base::Primitives::ujclass__typeof()),
        ::uNewField("setTimeListener_378_ID", &TimeAnimator__setTimeListener_378_ID, 0, ::app::Android::Base::Primitives::jmethodID__typeof()),
        ::uNewField("start_377_ID", &TimeAnimator__start_377_ID, 0, ::app::Android::Base::Primitives::jmethodID__typeof()),
        ::uNewField("TimeAnimator_376_ID_c", &TimeAnimator__TimeAnimator_376_ID_c, 0, ::app::Android::Base::Primitives::jmethodID__typeof()));

    type->SetFunctions(6,
        ::uNewFunctionVoid("_Init", TimeAnimator___Init_4, 0, true),
        ::uNewFunction(".ctor", TimeAnimator__New_7, 0, true, TimeAnimator__typeof()),
        ::uNewFunctionVoid("setTimeListener", TimeAnimator__setTimeListener, 0, false, ::app::Android::android::animation::TimeAnimatorDLRTimeListener__typeof()),
        ::uNewFunctionVoid("setTimeListener_IMPL_378", TimeAnimator__setTimeListener_IMPL_378, 0, true, ::app::Uno::Bool__typeof(), ::app::Android::Base::Primitives::ujobject__typeof(), ::app::Android::Base::Wrappers::IJWrapper__typeof()),
        ::uNewFunctionVoid("start", TimeAnimator__start, 0, false),
        ::uNewFunctionVoid("start_IMPL_377", TimeAnimator__start_IMPL_377, 0, true, ::app::Uno::Bool__typeof(), ::app::Android::Base::Primitives::ujobject__typeof()));

    ::uRegisterType(type);
    return type;
}

void TimeAnimator___Init_4(::uStatic* __this)
{
    if (::app::Android::android::animation::TimeAnimator___javaClass_4) { return; }
    INIT_JNI;
    ::app::Android::android::animation::TimeAnimator___javaClass_4 = NEW_GLOBAL_REF(jclass,LOAD_SYS_CLASS("android/animation/TimeAnimator"));
    ::app::Android::Base::JNI__CheckException_1(NULL, U_JNIVAR);
    if (!::app::Android::android::animation::TimeAnimator___javaClass_4) { THROW_UNO_EXCEPTION("Unable to cache class 'android.animation.TimeAnimator'", 54);; }
}

void TimeAnimator___ObjInit_8(TimeAnimator* __this)
{
    ::app::Android::android::animation::ValueAnimator___ObjInit_7(__this, ::app::Android::Base::JNI__GetDefaultObject(NULL), ::app::Android::Base::JNI__GetDefaultType(NULL), false, false);
    INIT_JNI;;
    CLASS_INIT(::app::Android::android::animation::TimeAnimator___javaClass_4,::app::Android::android::animation::TimeAnimator___Init_4(NULL));;
    CACHE_METHOD(::app::Android::android::animation::TimeAnimator__TimeAnimator_376_ID_c,::app::Android::android::animation::TimeAnimator___javaClass_4,"<init>","()V",GetMethodID,"Id for fallback method android.animation.TimeAnimator.<init> could not be cached",80);;
    jobject result;;
    jobject _tmp;;
    _tmp = U_JNIVAR->NewObject(::app::Android::android::animation::TimeAnimator___javaClass_4, ::app::Android::android::animation::TimeAnimator__TimeAnimator_376_ID_c);;
    ::app::Android::Base::JNI__CheckException_1(NULL, U_JNIVAR);;
    __this->_javaObject = NEW_GLOBAL_REF(jobject,_tmp);;
    U_JNIVAR->DeleteLocalRef(_tmp);;
}

TimeAnimator* TimeAnimator__New_7(::uStatic* __this)
{
    TimeAnimator* inst = (TimeAnimator*)::uAllocObject(sizeof(TimeAnimator), TimeAnimator__typeof());
    inst->_ObjInit_8();
    return inst;
}

void TimeAnimator__setTimeListener(TimeAnimator* __this, ::uObject* arg0)
{
    TimeAnimator__setTimeListener_IMPL_378(NULL, __this->_subclassed, __this->_javaObject, (::uObject*)arg0);
}

void TimeAnimator__setTimeListener_IMPL_378(::uStatic* __this, bool arg0_, jobject arg1_, ::uObject* arg2_)
{
    INIT_JNI;
    CLASS_INIT(::app::Android::android::animation::TimeAnimator___javaClass_4,::app::Android::android::animation::TimeAnimator___Init_4(NULL));
    jobject _obArg2 = ((!arg2_) ? NULL : ::app::Android::Base::Wrappers::IJWrapper::_GetJavaObject(arg2_));
    CACHE_METHOD(::app::Android::android::animation::TimeAnimator__setTimeListener_378_ID,::app::Android::android::animation::TimeAnimator___javaClass_4,"setTimeListener","(Landroid/animation/TimeAnimator$TimeListener;)V",GetMethodID,"Id for fallback method android.animation.TimeAnimator.setTimeListener could not be cached",89);
    if (arg0_) {
        U_JNIVAR->CallNonvirtualVoidMethod(arg1_, ::app::Android::android::animation::TimeAnimator___javaClass_4, ::app::Android::android::animation::TimeAnimator__setTimeListener_378_ID, _obArg2);
    }
    else
    {
        U_JNIVAR->CallVoidMethod(arg1_, ::app::Android::android::animation::TimeAnimator__setTimeListener_378_ID, _obArg2);
    }
    ::app::Android::Base::JNI__CheckException_1(NULL, U_JNIVAR);
}

void TimeAnimator__start(TimeAnimator* __this)
{
    TimeAnimator__start_IMPL_377(NULL, __this->_subclassed, __this->_javaObject);
}

void TimeAnimator__start_IMPL_377(::uStatic* __this, bool arg0_, jobject arg1_)
{
    INIT_JNI;
    CLASS_INIT(::app::Android::android::animation::TimeAnimator___javaClass_4,::app::Android::android::animation::TimeAnimator___Init_4(NULL));
    
    CACHE_METHOD(::app::Android::android::animation::TimeAnimator__start_377_ID,::app::Android::android::animation::TimeAnimator___javaClass_4,"start","()V",GetMethodID,"Id for fallback method android.animation.TimeAnimator.start could not be cached",79);
    if (arg0_) {
        U_JNIVAR->CallNonvirtualVoidMethod(arg1_, ::app::Android::android::animation::TimeAnimator___javaClass_4, ::app::Android::android::animation::TimeAnimator__start_377_ID);
    }
    else
    {
        U_JNIVAR->CallVoidMethod(arg1_, ::app::Android::android::animation::TimeAnimator__start_377_ID);
    }
    ::app::Android::Base::JNI__CheckException_1(NULL, U_JNIVAR);
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\Android\0.13.2\Android\android\animation\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

::uInterfaceType* TimeAnimatorDLRTimeListener__typeof()
{
    static ::uStaticStrong< ::uInterfaceType*> type;
    if (type != NULL) return type;

    type = ::uAllocInterfaceType("Android.android.animation.TimeAnimatorDLRTimeListener");

    ::uRegisterType(type);
    return type;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\Android\0.13.2\Android\android\animation\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

::uInterfaceType* TimeInterpolator__typeof()
{
    static ::uStaticStrong< ::uInterfaceType*> type;
    if (type != NULL) return type;

    type = ::uAllocInterfaceType("Android.android.animation.TimeInterpolator");

    ::uRegisterType(type);
    return type;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\Android\0.13.2\Android\android\animation\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

jclass ValueAnimator___javaClass_3;
jmethodID ValueAnimator__setDuration_46152_ID;
jmethodID ValueAnimator__toString_425_ID;

ValueAnimator__uType* ValueAnimator__typeof()
{
    static ::uStaticStrong<ValueAnimator__uType*> type;
    if (type != NULL) return type;

    type = (ValueAnimator__uType*)::uAllocClassType(sizeof(ValueAnimator__uType), "Android.android.animation.ValueAnimator", false, 2, 0, 0);

    type->SetBaseType(::app::Android::android::animation::Animator__typeof());
    type->__fp_toString = (::app::Android::java::lang::String*(*)(::app::Android::java::lang::Object*))ValueAnimator__toString;

    type->SetInterfaces(
        ::app::Android::Base::Wrappers::IJWrapper__typeof(), offsetof(ValueAnimator__uType, __interface_0),
        ::app::Uno::IDisposable__typeof(), offsetof(ValueAnimator__uType, __interface_1));

    type->SetFields(3,
        ::uNewField("_javaClass", &ValueAnimator___javaClass_3, 0, ::app::Android::Base::Primitives::ujclass__typeof()),
        ::uNewField("setDuration_46152_ID", &ValueAnimator__setDuration_46152_ID, 0, ::app::Android::Base::Primitives::jmethodID__typeof()),
        ::uNewField("toString_425_ID", &ValueAnimator__toString_425_ID, 0, ::app::Android::Base::Primitives::jmethodID__typeof()));

    type->SetFunctions(4,
        ::uNewFunctionVoid("_Init", ValueAnimator___Init_3, 0, true),
        ::uNewFunction("setDuration", ValueAnimator__setDuration, 0, false, ::app::Android::android::animation::Animator__typeof(), ::app::Uno::Long__typeof()),
        ::uNewFunction("setDuration_IMPL_46152", ValueAnimator__setDuration_IMPL_46152, 0, true, ::app::Android::Base::Wrappers::IJWrapper__typeof(), ::app::Uno::Bool__typeof(), ::app::Android::Base::Primitives::ujobject__typeof(), ::app::Uno::Long__typeof()),
        ::uNewFunction("toString_IMPL_425", ValueAnimator__toString_IMPL_425, 0, true, ::app::Android::Base::Wrappers::IJWrapper__typeof(), ::app::Uno::Bool__typeof(), ::app::Android::Base::Primitives::ujobject__typeof()));

    ::uRegisterType(type);
    return type;
}

void ValueAnimator___Init_3(::uStatic* __this)
{
    if (::app::Android::android::animation::ValueAnimator___javaClass_3) { return; }
    INIT_JNI;
    ::app::Android::android::animation::ValueAnimator___javaClass_3 = NEW_GLOBAL_REF(jclass,LOAD_SYS_CLASS("android/animation/ValueAnimator"));
    ::app::Android::Base::JNI__CheckException_1(NULL, U_JNIVAR);
    if (!::app::Android::android::animation::ValueAnimator___javaClass_3) { THROW_UNO_EXCEPTION("Unable to cache class 'android.animation.ValueAnimator'", 55);; }
}

void ValueAnimator___ObjInit_7(ValueAnimator* __this, jobject obj, ::uType* utype, bool hasFallbackClass, bool resolveType)
{
    ::app::Android::android::animation::Animator___ObjInit_5(__this, obj, utype, hasFallbackClass, resolveType);
}

::app::Android::android::animation::Animator* ValueAnimator__setDuration(ValueAnimator* __this, ::uLong arg0)
{
    return ::uCast< ::app::Android::android::animation::Animator*>(ValueAnimator__setDuration_IMPL_46152(NULL, __this->_subclassed, __this->_javaObject, arg0), ::app::Android::android::animation::Animator__typeof());
}

::uObject* ValueAnimator__setDuration_IMPL_46152(::uStatic* __this, bool arg0_, jobject arg1_, ::uLong arg2_)
{
    INIT_JNI;
    CLASS_INIT(::app::Android::android::animation::ValueAnimator___javaClass_3,::app::Android::android::animation::ValueAnimator___Init_3(NULL));
    
    ::uObject* result;
    CACHE_METHOD(::app::Android::android::animation::ValueAnimator__setDuration_46152_ID,::app::Android::android::animation::ValueAnimator___javaClass_3,"setDuration","(J)Landroid/animation/Animator;",GetMethodID,"Id for fallback method android.animation.ValueAnimator.setDuration could not be cached",86);
    if (arg0_) {
        NEW_UNO(U_JNIVAR->CallNonvirtualObjectMethod(arg1_, ::app::Android::android::animation::ValueAnimator___javaClass_3, ::app::Android::android::animation::ValueAnimator__setDuration_46152_ID, ((jlong)arg2_)),result,::app::Android::Fallbacks::Android_android_animation_Animator__typeof(),::app::Android::android::animation::Animator*,true,true);
    }
    else
    {
        NEW_UNO(U_JNIVAR->CallObjectMethod(arg1_, ::app::Android::android::animation::ValueAnimator__setDuration_46152_ID, ((jlong)arg2_)),result,::app::Android::Fallbacks::Android_android_animation_Animator__typeof(),::app::Android::android::animation::Animator*,true,true);
    }
    ::app::Android::Base::JNI__CheckException_1(NULL, U_JNIVAR);
    return result;
}

::app::Android::java::lang::String* ValueAnimator__toString(ValueAnimator* __this)
{
    return ::uCast< ::app::Android::java::lang::String*>(ValueAnimator__toString_IMPL_425(NULL, __this->_subclassed, __this->_javaObject), ::app::Android::java::lang::String__typeof());
}

::uObject* ValueAnimator__toString_IMPL_425(::uStatic* __this, bool arg0_, jobject arg1_)
{
    INIT_JNI;
    CLASS_INIT(::app::Android::android::animation::ValueAnimator___javaClass_3,::app::Android::android::animation::ValueAnimator___Init_3(NULL));
    
    ::uObject* result;
    CACHE_METHOD(::app::Android::android::animation::ValueAnimator__toString_425_ID,::app::Android::android::animation::ValueAnimator___javaClass_3,"toString","()Ljava/lang/String;",GetMethodID,"Id for fallback method android.animation.ValueAnimator.toString could not be cached",83);
    if (arg0_) {
        NEW_UNO(U_JNIVAR->CallNonvirtualObjectMethod(arg1_, ::app::Android::android::animation::ValueAnimator___javaClass_3, ::app::Android::android::animation::ValueAnimator__toString_425_ID),result,::app::Android::java::lang::String__typeof(),::app::Android::java::lang::String*,false,true);
    }
    else
    {
        NEW_UNO(U_JNIVAR->CallObjectMethod(arg1_, ::app::Android::android::animation::ValueAnimator__toString_425_ID),result,::app::Android::java::lang::String__typeof(),::app::Android::java::lang::String*,false,true);
    }
    ::app::Android::Base::JNI__CheckException_1(NULL, U_JNIVAR);
    return result;
}

}}}}
