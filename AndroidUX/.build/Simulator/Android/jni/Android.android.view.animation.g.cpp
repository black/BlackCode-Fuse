// This file was generated based on '(multiple files)'.
// WARNING: Changes might be lost if you edit this file directly.

#include <Android.android.view.animation.Animation.h>
#include <Android.android.view.animation.AnimationDLRAnimationListener.h>
#include <Android.android.view.animation.Interpolator.h>
#include <Android.android.view.animation.LayoutAnimationController.h>
#include <Android.android.view.animation.Transformation.h>
#include <Android.Base.AndroidBindingMacros.h>
#include <Android.Base.JNI.h>
#include <Android.Base.Primitives.jmethodID.h>
#include <Android.Base.Primitives.ujclass.h>
#include <Android.Base.Primitives.ujobject.h>
#include <Android.Base.Wrappers.JWrapper.h>
#include <Android.Fallbacks.Android_android_view_animation_Animation.h>
#include <Android.Fallbacks.Android_android_view_animation_AnimationDLRAn-50875199.h>
#include <Android.Fallbacks.Android_android_view_animation_Interpolator.h>
#include <Android.java.lang.String.h>
#include <Uno.Bool.h>
#include <Uno.Exception.h>
static uType* TYPES[2];

namespace g{
namespace Android{
namespace android{
namespace view{
namespace animation{

// C:\ProgramData\Uno\Packages\Android\0.19.1\Android\android\view\animation\$.uno(11)
// -----------------------------------------------------------------------------------

// public abstract extern class Animation :11
// {
::g::Android::java::lang::Object_type* Animation_typeof()
{
    static uSStrong< ::g::Android::java::lang::Object_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 5;
    options.InterfaceCount = 2;
    options.ObjectSize = sizeof(Animation);
    options.TypeSize = sizeof(::g::Android::java::lang::Object_type);
    type = (::g::Android::java::lang::Object_type*)uClassType::New("Android.android.view.animation.Animation", options);
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
// }

// C:\ProgramData\Uno\Packages\Android\0.19.1\Android\android\view\animation\$.uno(3105)
// -------------------------------------------------------------------------------------

// public abstract extern interface AnimationDLRAnimationListener :3105
// {
uInterfaceType* AnimationDLRAnimationListener_typeof()
{
    static uSStrong<uInterfaceType*> type;
    if (type != NULL) return type;

    type = uInterfaceType::New("Android.android.view.animation.AnimationDLRAnimationListener", 0, 0);
    type->Reflection.SetFunctions(3,
        new uFunction("onAnimationEnd", NULL, NULL, offsetof(AnimationDLRAnimationListener, fp_onAnimationEnd), false, uVoid_typeof(), 1, ::g::Android::android::view::animation::Animation_typeof()),
        new uFunction("onAnimationRepeat", NULL, NULL, offsetof(AnimationDLRAnimationListener, fp_onAnimationRepeat), false, uVoid_typeof(), 1, ::g::Android::android::view::animation::Animation_typeof()),
        new uFunction("onAnimationStart", NULL, NULL, offsetof(AnimationDLRAnimationListener, fp_onAnimationStart), false, uVoid_typeof(), 1, ::g::Android::android::view::animation::Animation_typeof()));
    return type;
}
// }

// C:\ProgramData\Uno\Packages\Android\0.19.1\Android\android\view\animation\$.uno(3125)
// -------------------------------------------------------------------------------------

// public abstract extern interface Interpolator :3125
// {
uInterfaceType* Interpolator_typeof()
{
    static uSStrong<uInterfaceType*> type;
    if (type != NULL) return type;

    type = uInterfaceType::New("Android.android.view.animation.Interpolator", 0, 0);
    return type;
}
// }

// C:\ProgramData\Uno\Packages\Android\0.19.1\Android\android\view\animation\$.uno(1892)
// -------------------------------------------------------------------------------------

// public sealed extern class LayoutAnimationController :1892
// {
::g::Android::java::lang::Object_type* LayoutAnimationController_typeof()
{
    static uSStrong< ::g::Android::java::lang::Object_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 5;
    options.InterfaceCount = 2;
    options.ObjectSize = sizeof(LayoutAnimationController);
    options.TypeSize = sizeof(::g::Android::java::lang::Object_type);
    type = (::g::Android::java::lang::Object_type*)uClassType::New("Android.android.view.animation.LayoutAnimationController", options);
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

// C:\ProgramData\Uno\Packages\Android\0.19.1\Android\android\view\animation\$.uno(2824)
// -------------------------------------------------------------------------------------

// public sealed extern class Transformation :2824
// {
::g::Android::java::lang::Object_type* Transformation_typeof()
{
    static uSStrong< ::g::Android::java::lang::Object_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 7;
    options.InterfaceCount = 2;
    options.ObjectSize = sizeof(Transformation);
    options.TypeSize = sizeof(::g::Android::java::lang::Object_type);
    type = (::g::Android::java::lang::Object_type*)uClassType::New("Android.android.view.animation.Transformation", options);
    type->SetBase(::g::Android::java::lang::Object_typeof());
    type->fp_toString = (void(*)(::g::Android::java::lang::Object*, ::g::Android::java::lang::String**))Transformation__toString_fn;
    type->interface1.fp_Dispose = (void(*)(uObject*))::g::Android::Base::Wrappers::JWrapper__Uno_IDisposable_Dispose_fn;
    type->interface0.fp__GetJavaObject = (void(*)(uObject*, jobject*))::g::Android::Base::Wrappers::JWrapper___GetJavaObject_fn;
    type->interface0.fp__IsSubclassed = (void(*)(uObject*, bool*))::g::Android::Base::Wrappers::JWrapper___IsSubclassed_fn;
    ::TYPES[0] = ::g::Android::java::lang::String_typeof();
    ::TYPES[1] = ::g::Android::Base::Wrappers::JWrapper_typeof();
    type->SetInterfaces(
        ::g::Android::Base::Wrappers::IJWrapper_typeof(), offsetof(::g::Android::java::lang::Object_type, interface0),
        ::g::Uno::IDisposable_typeof(), offsetof(::g::Android::java::lang::Object_type, interface1));
    type->SetFields(5,
        ::g::Android::Base::Primitives::ujclass_typeof(), (uintptr_t)&::g::Android::android::view::animation::Transformation::_javaClass2_, uFieldFlagsStatic,
        ::g::Android::Base::Primitives::jmethodID_typeof(), (uintptr_t)&::g::Android::android::view::animation::Transformation::toString_21241_ID_, uFieldFlagsStatic);
    type->Reflection.SetFunctions(2,
        new uFunction("_Init", NULL, (void*)Transformation___Init2_fn, 0, true, uVoid_typeof(), 0),
        new uFunction("toString_IMPL_21241", NULL, (void*)Transformation__toString_IMPL_21241_fn, 0, true, ::g::Android::Base::Wrappers::IJWrapper_typeof(), 2, ::g::Uno::Bool_typeof(), ::g::Android::Base::Primitives::ujobject_typeof()));
    return type;
}

// public static extern new void _Init() :2828
void Transformation___Init2_fn()
{
    Transformation::_Init2();
}

// public override sealed Android.java.lang.String toString() :2962
void Transformation__toString_fn(Transformation* __this, ::g::Android::java::lang::String** __retval)
{
    return *__retval = uCast< ::g::Android::java::lang::String*>(Transformation::toString_IMPL_21241(__this->_subclassed, __this->_javaObject), ::TYPES[0/*Android.java.lang.String*/]), void();
}

// public static extern Android.Base.Wrappers.IJWrapper toString_IMPL_21241(bool arg0, Android.Base.Primitives.ujobject arg1) :3000
void Transformation__toString_IMPL_21241_fn(bool* arg0_, jobject* arg1_, uObject** __retval)
{
    *__retval = Transformation::toString_IMPL_21241(*arg0_, *arg1_);
}

jclass Transformation::_javaClass2_;
jmethodID Transformation::toString_21241_ID_;

// public static extern new void _Init() [static] :2828
void Transformation::_Init2()
{
    if (Transformation::_javaClass2()) { return; }
    INIT_JNI;
    Transformation::_javaClass2() = NEW_GLOBAL_REF(jclass,LOAD_SYS_CLASS("android/view/animation/Transformation"));
    ::g::Android::Base::JNI::CheckException1(U_JNIVAR);
    if (!Transformation::_javaClass2()) { THROW_UNO_EXCEPTION("Unable to cache class 'android.view.animation.Transformation'", 61);; }
}

// public static extern Android.Base.Wrappers.IJWrapper toString_IMPL_21241(bool arg0, Android.Base.Primitives.ujobject arg1) [static] :3000
uObject* Transformation::toString_IMPL_21241(bool arg0_, jobject arg1_)
{
    INIT_JNI;
    CLASS_INIT(Transformation::_javaClass2(),Transformation::_Init2());
    
    uObject* result;
    CACHE_METHOD(Transformation::toString_21241_ID(),Transformation::_javaClass2(),"toString","()Ljava/lang/String;",GetMethodID,"Id for fallback method android.view.animation.Transformation.toString could not be cached",89);
    if (arg0_) {
        NEW_UNO(U_JNIVAR->CallNonvirtualObjectMethod(arg1_, Transformation::_javaClass2(), Transformation::toString_21241_ID()),result,::g::Android::java::lang::String_typeof(),::g::Android::java::lang::String*,false,true);
    }
    else
    {
        NEW_UNO(U_JNIVAR->CallObjectMethod(arg1_, Transformation::toString_21241_ID()),result,::g::Android::java::lang::String_typeof(),::g::Android::java::lang::String*,false,true);
    }
    ::g::Android::Base::JNI::CheckException1(U_JNIVAR);
    return result;
}
// }

}}}}} // ::g::Android::android::view::animation
