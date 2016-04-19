// This file was generated based on '(multiple files)'.
// WARNING: Changes might be lost if you edit this file directly.

#include <Android.android.animation.Animator.h>
#include <Android.android.animation.TimeAnimator.h>
#include <Android.android.animation.TimeAnimatorDLRTimeListener.h>
#include <Android.android.animation.ValueAnimator.h>
#include <Android.Base.AndroidBindingMacros.h>
#include <Android.Base.JNI.h>
#include <Android.Base.Primitives.jmethodID.h>
#include <Android.Base.Primitives.ujclass.h>
#include <Android.Base.Primitives.ujobject.h>
#include <Android.Base.Wrappers.JWrapper.h>
#include <Android.Fallbacks.Android_android_animation_Animator.h>
#include <Android.Fallbacks.Android_android_animation_TimeAnimatorDLRTimeListener.h>
#include <Android.java.lang.String.h>
#include <Uno.Bool.h>
#include <Uno.Exception.h>
#include <Uno.Long.h>
#include <Uno.Type.h>
static uType* TYPES[4];

namespace g{
namespace Android{
namespace android{
namespace animation{

// C:\ProgramData\Uno\Packages\Android\0.20.2\Android\android\animation\$.uno(11)
// ------------------------------------------------------------------------------

// public abstract extern class Animator :11
// {
::g::Android::java::lang::Object_type* Animator_typeof()
{
    static uSStrong< ::g::Android::java::lang::Object_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 5;
    options.InterfaceCount = 2;
    options.ObjectSize = sizeof(Animator);
    options.TypeSize = sizeof(::g::Android::java::lang::Object_type);
    type = (::g::Android::java::lang::Object_type*)uClassType::New("Android.android.animation.Animator", options);
    type->SetBase(::g::Android::java::lang::Object_typeof());
    type->interface0.fp__GetJavaObject = (void(*)(uObject*, jobject*))::g::Android::Base::Wrappers::JWrapper___GetJavaObject_fn;
    type->interface0.fp__IsSubclassed = (void(*)(uObject*, bool*))::g::Android::Base::Wrappers::JWrapper___IsSubclassed_fn;
    type->interface1.fp_Dispose = (void(*)(uObject*))::g::Android::Base::Wrappers::JWrapper__Uno_IDisposable_Dispose_fn;
    type->SetInterfaces(
        ::g::Android::Base::Wrappers::IJWrapper_typeof(), offsetof(::g::Android::java::lang::Object_type, interface0),
        ::g::Uno::IDisposable_typeof(), offsetof(::g::Android::java::lang::Object_type, interface1));
    type->SetFields(5);
    return type;
}

// protected Animator(Android.Base.Primitives.ujobject obj, Uno.Type utype, bool hasFallbackClass, bool resolveType) :16
void Animator__ctor_5_fn(Animator* __this, jobject* obj, uType* utype, bool* hasFallbackClass, bool* resolveType)
{
    __this->ctor_5(*obj, utype, *hasFallbackClass, *resolveType);
}

// protected Animator(Android.Base.Primitives.ujobject obj, Uno.Type utype, bool hasFallbackClass, bool resolveType) [instance] :16
void Animator::ctor_5(jobject obj, uType* utype, bool hasFallbackClass, bool resolveType)
{
    ctor_3(obj, utype, hasFallbackClass, resolveType);
}
// }

// C:\ProgramData\Uno\Packages\Android\0.20.2\Android\android\animation\$.uno(2257)
// --------------------------------------------------------------------------------

// public sealed extern class TimeAnimator :2257
// {
::g::Android::java::lang::Object_type* TimeAnimator_typeof()
{
    static uSStrong< ::g::Android::java::lang::Object_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 9;
    options.InterfaceCount = 2;
    options.ObjectSize = sizeof(TimeAnimator);
    options.TypeSize = sizeof(::g::Android::java::lang::Object_type);
    type = (::g::Android::java::lang::Object_type*)uClassType::New("Android.android.animation.TimeAnimator", options);
    type->SetBase(::g::Android::android::animation::ValueAnimator_typeof());
    type->fp_ctor_ = (void*)TimeAnimator__New7_fn;
    type->interface0.fp__GetJavaObject = (void(*)(uObject*, jobject*))::g::Android::Base::Wrappers::JWrapper___GetJavaObject_fn;
    type->interface0.fp__IsSubclassed = (void(*)(uObject*, bool*))::g::Android::Base::Wrappers::JWrapper___IsSubclassed_fn;
    type->interface1.fp_Dispose = (void(*)(uObject*))::g::Android::Base::Wrappers::JWrapper__Uno_IDisposable_Dispose_fn;
    ::TYPES[0] = ::g::Android::Base::Wrappers::JWrapper_typeof();
    ::TYPES[1] = ::g::Android::Base::Wrappers::IJWrapper_typeof();
    type->SetInterfaces(
        ::g::Android::Base::Wrappers::IJWrapper_typeof(), offsetof(::g::Android::java::lang::Object_type, interface0),
        ::g::Uno::IDisposable_typeof(), offsetof(::g::Android::java::lang::Object_type, interface1));
    type->SetFields(5,
        ::g::Android::Base::Primitives::ujclass_typeof(), (uintptr_t)&::g::Android::android::animation::TimeAnimator::_javaClass4_, uFieldFlagsStatic,
        ::g::Android::Base::Primitives::jmethodID_typeof(), (uintptr_t)&::g::Android::android::animation::TimeAnimator::setTimeListener_378_ID_, uFieldFlagsStatic,
        ::g::Android::Base::Primitives::jmethodID_typeof(), (uintptr_t)&::g::Android::android::animation::TimeAnimator::start_377_ID_, uFieldFlagsStatic,
        ::g::Android::Base::Primitives::jmethodID_typeof(), (uintptr_t)&::g::Android::android::animation::TimeAnimator::TimeAnimator_376_ID_c_, uFieldFlagsStatic);
    return type;
}

// public TimeAnimator() :2264
void TimeAnimator__ctor_8_fn(TimeAnimator* __this)
{
    __this->ctor_8();
}

// public static extern new void _Init() :2261
void TimeAnimator___Init4_fn()
{
    TimeAnimator::_Init4();
}

// public TimeAnimator New() :2264
void TimeAnimator__New7_fn(TimeAnimator** __retval)
{
    *__retval = TimeAnimator::New7();
}

// public void setTimeListener(Android.android.animation.TimeAnimatorDLRTimeListener arg0) :2285
void TimeAnimator__setTimeListener_fn(TimeAnimator* __this, uObject* arg0)
{
    __this->setTimeListener(arg0);
}

// public static extern void setTimeListener_IMPL_378(bool arg0, Android.Base.Primitives.ujobject arg1, Android.Base.Wrappers.IJWrapper arg2) :2296
void TimeAnimator__setTimeListener_IMPL_378_fn(bool* arg0_, jobject* arg1_, uObject* arg2_)
{
    TimeAnimator::setTimeListener_IMPL_378(*arg0_, *arg1_, arg2_);
}

// public void start() :2279
void TimeAnimator__start_fn(TimeAnimator* __this)
{
    __this->start();
}

// public static extern void start_IMPL_377(bool arg0, Android.Base.Primitives.ujobject arg1) :2293
void TimeAnimator__start_IMPL_377_fn(bool* arg0_, jobject* arg1_)
{
    TimeAnimator::start_IMPL_377(*arg0_, *arg1_);
}

jclass TimeAnimator::_javaClass4_;
jmethodID TimeAnimator::setTimeListener_378_ID_;
jmethodID TimeAnimator::start_377_ID_;
jmethodID TimeAnimator::TimeAnimator_376_ID_c_;

// public TimeAnimator() [instance] :2264
void TimeAnimator::ctor_8()
{
    ctor_7(::g::Android::Base::JNI::GetDefaultObject(), ::g::Android::Base::JNI::GetDefaultType(), false, false);
    INIT_JNI;;
    CLASS_INIT(TimeAnimator::_javaClass4(),TimeAnimator::_Init4());;
    CACHE_METHOD(TimeAnimator::TimeAnimator_376_ID_c(),TimeAnimator::_javaClass4(),"<init>","()V",GetMethodID,"Id for fallback method android.animation.TimeAnimator.<init> could not be cached",80);;
    jobject result;;
    jobject _tmp;;
    _tmp = U_JNIVAR->NewObject(TimeAnimator::_javaClass4(), TimeAnimator::TimeAnimator_376_ID_c());;
    ::g::Android::Base::JNI::CheckException1(U_JNIVAR);;
    _javaObject = NEW_GLOBAL_REF(jobject,_tmp);;
    U_JNIVAR->DeleteLocalRef(_tmp);;
}

// public void setTimeListener(Android.android.animation.TimeAnimatorDLRTimeListener arg0) [instance] :2285
void TimeAnimator::setTimeListener(uObject* arg0)
{
    TimeAnimator::setTimeListener_IMPL_378(_subclassed, _javaObject, arg0);
}

// public void start() [instance] :2279
void TimeAnimator::start()
{
    TimeAnimator::start_IMPL_377(_subclassed, _javaObject);
}

// public static extern new void _Init() [static] :2261
void TimeAnimator::_Init4()
{
    if (TimeAnimator::_javaClass4()) { return; }
    INIT_JNI;
    TimeAnimator::_javaClass4() = NEW_GLOBAL_REF(jclass,LOAD_SYS_CLASS("android/animation/TimeAnimator"));
    ::g::Android::Base::JNI::CheckException1(U_JNIVAR);
    if (!TimeAnimator::_javaClass4()) { THROW_UNO_EXCEPTION("Unable to cache class 'android.animation.TimeAnimator'", 54);; }
}

// public TimeAnimator New() [static] :2264
TimeAnimator* TimeAnimator::New7()
{
    TimeAnimator* obj2 = (TimeAnimator*)uNew(TimeAnimator_typeof());
    obj2->ctor_8();
    return obj2;
}

// public static extern void setTimeListener_IMPL_378(bool arg0, Android.Base.Primitives.ujobject arg1, Android.Base.Wrappers.IJWrapper arg2) [static] :2296
void TimeAnimator::setTimeListener_IMPL_378(bool arg0_, jobject arg1_, uObject* arg2_)
{
    INIT_JNI;
    CLASS_INIT(TimeAnimator::_javaClass4(),TimeAnimator::_Init4());
    jobject _obArg2 = ((!arg2_) ? NULL : ::g::Android::Base::Wrappers::IJWrapper::_GetJavaObject(uInterface(arg2_, ::g::Android::Base::Wrappers::IJWrapper_typeof())));
    CACHE_METHOD(TimeAnimator::setTimeListener_378_ID(),TimeAnimator::_javaClass4(),"setTimeListener","(Landroid/animation/TimeAnimator$TimeListener;)V",GetMethodID,"Id for fallback method android.animation.TimeAnimator.setTimeListener could not be cached",89);
    if (arg0_) {
        U_JNIVAR->CallNonvirtualVoidMethod(arg1_, TimeAnimator::_javaClass4(), TimeAnimator::setTimeListener_378_ID(), _obArg2);
    }
    else
    {
        U_JNIVAR->CallVoidMethod(arg1_, TimeAnimator::setTimeListener_378_ID(), _obArg2);
    }
    ::g::Android::Base::JNI::CheckException1(U_JNIVAR);
}

// public static extern void start_IMPL_377(bool arg0, Android.Base.Primitives.ujobject arg1) [static] :2293
void TimeAnimator::start_IMPL_377(bool arg0_, jobject arg1_)
{
    INIT_JNI;
    CLASS_INIT(TimeAnimator::_javaClass4(),TimeAnimator::_Init4());
    
    CACHE_METHOD(TimeAnimator::start_377_ID(),TimeAnimator::_javaClass4(),"start","()V",GetMethodID,"Id for fallback method android.animation.TimeAnimator.start could not be cached",79);
    if (arg0_) {
        U_JNIVAR->CallNonvirtualVoidMethod(arg1_, TimeAnimator::_javaClass4(), TimeAnimator::start_377_ID());
    }
    else
    {
        U_JNIVAR->CallVoidMethod(arg1_, TimeAnimator::start_377_ID());
    }
    ::g::Android::Base::JNI::CheckException1(U_JNIVAR);
}
// }

// C:\ProgramData\Uno\Packages\Android\0.20.2\Android\android\animation\$.uno(2368)
// --------------------------------------------------------------------------------

// public abstract extern interface TimeAnimatorDLRTimeListener :2368
// {
uInterfaceType* TimeAnimatorDLRTimeListener_typeof()
{
    static uSStrong<uInterfaceType*> type;
    if (type != NULL) return type;

    type = uInterfaceType::New("Android.android.animation.TimeAnimatorDLRTimeListener", 0, 0);
    return type;
}
// }

// C:\ProgramData\Uno\Packages\Android\0.20.2\Android\android\animation\$.uno(1331)
// --------------------------------------------------------------------------------

// public extern class ValueAnimator :1331
// {
::g::Android::java::lang::Object_type* ValueAnimator_typeof()
{
    static uSStrong< ::g::Android::java::lang::Object_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 8;
    options.InterfaceCount = 2;
    options.ObjectSize = sizeof(ValueAnimator);
    options.TypeSize = sizeof(::g::Android::java::lang::Object_type);
    type = (::g::Android::java::lang::Object_type*)uClassType::New("Android.android.animation.ValueAnimator", options);
    type->SetBase(::g::Android::android::animation::Animator_typeof());
    type->fp_toString = (void(*)(::g::Android::java::lang::Object*, ::g::Android::java::lang::String**))ValueAnimator__toString_fn;
    type->interface0.fp__GetJavaObject = (void(*)(uObject*, jobject*))::g::Android::Base::Wrappers::JWrapper___GetJavaObject_fn;
    type->interface0.fp__IsSubclassed = (void(*)(uObject*, bool*))::g::Android::Base::Wrappers::JWrapper___IsSubclassed_fn;
    type->interface1.fp_Dispose = (void(*)(uObject*))::g::Android::Base::Wrappers::JWrapper__Uno_IDisposable_Dispose_fn;
    ::TYPES[2] = ::g::Android::android::animation::Animator_typeof();
    ::TYPES[0] = ::g::Android::Base::Wrappers::JWrapper_typeof();
    ::TYPES[3] = ::g::Android::java::lang::String_typeof();
    type->SetInterfaces(
        ::g::Android::Base::Wrappers::IJWrapper_typeof(), offsetof(::g::Android::java::lang::Object_type, interface0),
        ::g::Uno::IDisposable_typeof(), offsetof(::g::Android::java::lang::Object_type, interface1));
    type->SetFields(5,
        ::g::Android::Base::Primitives::ujclass_typeof(), (uintptr_t)&::g::Android::android::animation::ValueAnimator::_javaClass3_, uFieldFlagsStatic,
        ::g::Android::Base::Primitives::jmethodID_typeof(), (uintptr_t)&::g::Android::android::animation::ValueAnimator::setDuration_46152_ID_, uFieldFlagsStatic,
        ::g::Android::Base::Primitives::jmethodID_typeof(), (uintptr_t)&::g::Android::android::animation::ValueAnimator::toString_425_ID_, uFieldFlagsStatic);
    return type;
}

// public ValueAnimator(Android.Base.Primitives.ujobject obj, Uno.Type utype, bool hasFallbackClass, bool resolveType) :1336
void ValueAnimator__ctor_7_fn(ValueAnimator* __this, jobject* obj, uType* utype, bool* hasFallbackClass, bool* resolveType)
{
    __this->ctor_7(*obj, utype, *hasFallbackClass, *resolveType);
}

// public static extern new void _Init() :1335
void ValueAnimator___Init3_fn()
{
    ValueAnimator::_Init3();
}

// public Android.android.animation.Animator setDuration(long arg0) :1644
void ValueAnimator__setDuration_fn(ValueAnimator* __this, int64_t* arg0, ::g::Android::android::animation::Animator** __retval)
{
    *__retval = __this->setDuration(*arg0);
}

// public static extern Android.Base.Wrappers.IJWrapper setDuration_IMPL_46152(bool arg0, Android.Base.Primitives.ujobject arg1, long arg2) :1772
void ValueAnimator__setDuration_IMPL_46152_fn(bool* arg0_, jobject* arg1_, int64_t* arg2_, uObject** __retval)
{
    *__retval = ValueAnimator::setDuration_IMPL_46152(*arg0_, *arg1_, *arg2_);
}

// public override sealed Android.java.lang.String toString() :1638
void ValueAnimator__toString_fn(ValueAnimator* __this, ::g::Android::java::lang::String** __retval)
{
    return *__retval = uCast< ::g::Android::java::lang::String*>(ValueAnimator::toString_IMPL_425(__this->_subclassed, __this->_javaObject), ::TYPES[3/*Android.java.lang.String*/]), void();
}

// public static extern Android.Base.Wrappers.IJWrapper toString_IMPL_425(bool arg0, Android.Base.Primitives.ujobject arg1) :1769
void ValueAnimator__toString_IMPL_425_fn(bool* arg0_, jobject* arg1_, uObject** __retval)
{
    *__retval = ValueAnimator::toString_IMPL_425(*arg0_, *arg1_);
}

jclass ValueAnimator::_javaClass3_;
jmethodID ValueAnimator::setDuration_46152_ID_;
jmethodID ValueAnimator::toString_425_ID_;

// public ValueAnimator(Android.Base.Primitives.ujobject obj, Uno.Type utype, bool hasFallbackClass, bool resolveType) [instance] :1336
void ValueAnimator::ctor_7(jobject obj, uType* utype, bool hasFallbackClass, bool resolveType)
{
    ctor_5(obj, utype, hasFallbackClass, resolveType);
}

// public Android.android.animation.Animator setDuration(long arg0) [instance] :1644
::g::Android::android::animation::Animator* ValueAnimator::setDuration(int64_t arg0)
{
    int64_t arg0_ = arg0;
    return uCast< ::g::Android::android::animation::Animator*>(ValueAnimator::setDuration_IMPL_46152(_subclassed, _javaObject, arg0_), ::TYPES[2/*Android.android.animation.Animator*/]);
}

// public static extern new void _Init() [static] :1335
void ValueAnimator::_Init3()
{
    if (ValueAnimator::_javaClass3()) { return; }
    INIT_JNI;
    ValueAnimator::_javaClass3() = NEW_GLOBAL_REF(jclass,LOAD_SYS_CLASS("android/animation/ValueAnimator"));
    ::g::Android::Base::JNI::CheckException1(U_JNIVAR);
    if (!ValueAnimator::_javaClass3()) { THROW_UNO_EXCEPTION("Unable to cache class 'android.animation.ValueAnimator'", 55);; }
}

// public static extern Android.Base.Wrappers.IJWrapper setDuration_IMPL_46152(bool arg0, Android.Base.Primitives.ujobject arg1, long arg2) [static] :1772
uObject* ValueAnimator::setDuration_IMPL_46152(bool arg0_, jobject arg1_, int64_t arg2_)
{
    INIT_JNI;
    CLASS_INIT(ValueAnimator::_javaClass3(),ValueAnimator::_Init3());
    
    uObject* result;
    CACHE_METHOD(ValueAnimator::setDuration_46152_ID(),ValueAnimator::_javaClass3(),"setDuration","(J)Landroid/animation/Animator;",GetMethodID,"Id for fallback method android.animation.ValueAnimator.setDuration could not be cached",86);
    if (arg0_) {
        NEW_UNO(U_JNIVAR->CallNonvirtualObjectMethod(arg1_, ValueAnimator::_javaClass3(), ValueAnimator::setDuration_46152_ID(), ((jlong)arg2_)),result,::g::Android::Fallbacks::Android_android_animation_Animator_typeof(),::g::Android::android::animation::Animator*,true,true);
    }
    else
    {
        NEW_UNO(U_JNIVAR->CallObjectMethod(arg1_, ValueAnimator::setDuration_46152_ID(), ((jlong)arg2_)),result,::g::Android::Fallbacks::Android_android_animation_Animator_typeof(),::g::Android::android::animation::Animator*,true,true);
    }
    ::g::Android::Base::JNI::CheckException1(U_JNIVAR);
    return result;
}

// public static extern Android.Base.Wrappers.IJWrapper toString_IMPL_425(bool arg0, Android.Base.Primitives.ujobject arg1) [static] :1769
uObject* ValueAnimator::toString_IMPL_425(bool arg0_, jobject arg1_)
{
    INIT_JNI;
    CLASS_INIT(ValueAnimator::_javaClass3(),ValueAnimator::_Init3());
    
    uObject* result;
    CACHE_METHOD(ValueAnimator::toString_425_ID(),ValueAnimator::_javaClass3(),"toString","()Ljava/lang/String;",GetMethodID,"Id for fallback method android.animation.ValueAnimator.toString could not be cached",83);
    if (arg0_) {
        NEW_UNO(U_JNIVAR->CallNonvirtualObjectMethod(arg1_, ValueAnimator::_javaClass3(), ValueAnimator::toString_425_ID()),result,::g::Android::java::lang::String_typeof(),::g::Android::java::lang::String*,false,true);
    }
    else
    {
        NEW_UNO(U_JNIVAR->CallObjectMethod(arg1_, ValueAnimator::toString_425_ID()),result,::g::Android::java::lang::String_typeof(),::g::Android::java::lang::String*,false,true);
    }
    ::g::Android::Base::JNI::CheckException1(U_JNIVAR);
    return result;
}
// }

}}}} // ::g::Android::android::animation
