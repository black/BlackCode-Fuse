#include <app/Android.android.view.animation.Animation.h>
#include <app/Android.android.view.animation.AnimationDLRAnimationListener.h>
#include <app/Android.android.view.animation.Interpolator.h>
#include <app/Android.android.view.animation.LayoutAnimationController.h>
#include <app/Android.android.view.animation.Transformation.h>
#include <app/Android.Base.AndroidBindingMacros.h>
#include <app/Android.Base.JNI.h>
#include <app/Android.Base.Primitives.jmethodID.h>
#include <app/Android.Base.Primitives.ujclass.h>
#include <app/Android.Base.Primitives.ujobject.h>
#include <app/Android.Base.Wrappers.JWrapper.h>
#include <app/Android.Fallbacks.Android_android_view_animation_Animation.h>
#include <app/Android.Fallbacks.Android_android_view_animation_AnimationDLRAn-50875199.h>
#include <app/Android.Fallbacks.Android_android_view_animation_Interpolator.h>
#include <app/Android.java.lang.String.h>
#include <app/Uno.Bool.h>
#include <app/Uno.Exception.h>

namespace app {
namespace Android {
namespace android {
namespace view {
namespace animation {

// This file was generated based on 'C:\ProgramData\Uno\Packages\Android\0.13.2\Android\android\view\animation\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

jclass Animation___javaClass_2;
jmethodID Animation__finalize_21108_ID;

Animation__uType* Animation__typeof()
{
    static ::uStaticStrong<Animation__uType*> type;
    if (type != NULL) return type;

    type = (Animation__uType*)::uAllocClassType(sizeof(Animation__uType), "Android.android.view.animation.Animation", false, 2, 0, 0);

    type->SetBaseType(::app::Android::java::lang::Object__typeof());
    type->__fp_finalize = (void(*)(::app::Android::java::lang::Object*))Animation__finalize;
    type->__interface_0.__fp__GetJavaObject = (jobject(*)(void*))::app::Android::Base::Wrappers::JWrapper___GetJavaObject;
    type->__interface_0.__fp__IsSubclassed = (bool(*)(void*))::app::Android::Base::Wrappers::JWrapper___IsSubclassed;

    type->SetInterfaces(
        ::app::Android::Base::Wrappers::IJWrapper__typeof(), offsetof(Animation__uType, __interface_0),
        ::app::Uno::IDisposable__typeof(), offsetof(Animation__uType, __interface_1));

    type->SetFields(2,
        ::uNewField("_javaClass", &Animation___javaClass_2, 0, ::app::Android::Base::Primitives::ujclass__typeof()),
        ::uNewField("finalize_21108_ID", &Animation__finalize_21108_ID, 0, ::app::Android::Base::Primitives::jmethodID__typeof()));

    type->SetFunctions(2,
        ::uNewFunctionVoid("_Init", Animation___Init_2, 0, true),
        ::uNewFunctionVoid("finalize_IMPL_21108", Animation__finalize_IMPL_21108, 0, true, ::app::Uno::Bool__typeof(), ::app::Android::Base::Primitives::ujobject__typeof()));

    ::uRegisterType(type);
    return type;
}

void Animation___Init_2(::uStatic* __this)
{
    if (::app::Android::android::view::animation::Animation___javaClass_2) { return; }
    INIT_JNI;
    ::app::Android::android::view::animation::Animation___javaClass_2 = NEW_GLOBAL_REF(jclass,LOAD_SYS_CLASS("android/view/animation/Animation"));
    ::app::Android::Base::JNI__CheckException_1(NULL, U_JNIVAR);
    if (!::app::Android::android::view::animation::Animation___javaClass_2) { THROW_UNO_EXCEPTION("Unable to cache class 'android.view.animation.Animation'", 56);; }
}

void Animation__finalize(Animation* __this)
{
    Animation__finalize_IMPL_21108(NULL, __this->_subclassed, __this->_javaObject);
}

void Animation__finalize_IMPL_21108(::uStatic* __this, bool arg0_, jobject arg1_)
{
    INIT_JNI;
    CLASS_INIT(::app::Android::android::view::animation::Animation___javaClass_2,::app::Android::android::view::animation::Animation___Init_2(NULL));
    
    CACHE_METHOD(::app::Android::android::view::animation::Animation__finalize_21108_ID,::app::Android::android::view::animation::Animation___javaClass_2,"finalize","()V",GetMethodID,"Id for fallback method android.view.animation.Animation.finalize could not be cached",84);
    if (arg0_) {
        U_JNIVAR->CallNonvirtualVoidMethod(arg1_, ::app::Android::android::view::animation::Animation___javaClass_2, ::app::Android::android::view::animation::Animation__finalize_21108_ID);
    }
    else
    {
        U_JNIVAR->CallVoidMethod(arg1_, ::app::Android::android::view::animation::Animation__finalize_21108_ID);
    }
    ::app::Android::Base::JNI__CheckException_1(NULL, U_JNIVAR);
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\Android\0.13.2\Android\android\view\animation\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

::uInterfaceType* AnimationDLRAnimationListener__typeof()
{
    static ::uStaticStrong< ::uInterfaceType*> type;
    if (type != NULL) return type;

    type = ::uAllocInterfaceType("Android.android.view.animation.AnimationDLRAnimationListener");

    ::uRegisterType(type);
    return type;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\Android\0.13.2\Android\android\view\animation\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

::uInterfaceType* Interpolator__typeof()
{
    static ::uStaticStrong< ::uInterfaceType*> type;
    if (type != NULL) return type;

    type = ::uAllocInterfaceType("Android.android.view.animation.Interpolator");

    ::uRegisterType(type);
    return type;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\Android\0.13.2\Android\android\view\animation\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

LayoutAnimationController__uType* LayoutAnimationController__typeof()
{
    static ::uStaticStrong<LayoutAnimationController__uType*> type;
    if (type != NULL) return type;

    type = (LayoutAnimationController__uType*)::uAllocClassType(sizeof(LayoutAnimationController__uType), "Android.android.view.animation.LayoutAnimationController", false, 2, 0, 0);

    type->SetBaseType(::app::Android::java::lang::Object__typeof());

    type->SetInterfaces(
        ::app::Android::Base::Wrappers::IJWrapper__typeof(), offsetof(LayoutAnimationController__uType, __interface_0),
        ::app::Uno::IDisposable__typeof(), offsetof(LayoutAnimationController__uType, __interface_1));

    ::uRegisterType(type);
    return type;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\Android\0.13.2\Android\android\view\animation\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

jclass Transformation___javaClass_2;
jmethodID Transformation__toString_21241_ID;

Transformation__uType* Transformation__typeof()
{
    static ::uStaticStrong<Transformation__uType*> type;
    if (type != NULL) return type;

    type = (Transformation__uType*)::uAllocClassType(sizeof(Transformation__uType), "Android.android.view.animation.Transformation", false, 2, 0, 0);

    type->SetBaseType(::app::Android::java::lang::Object__typeof());
    type->__fp_toString = (::app::Android::java::lang::String*(*)(::app::Android::java::lang::Object*))Transformation__toString;

    type->SetInterfaces(
        ::app::Android::Base::Wrappers::IJWrapper__typeof(), offsetof(Transformation__uType, __interface_0),
        ::app::Uno::IDisposable__typeof(), offsetof(Transformation__uType, __interface_1));

    type->SetFields(2,
        ::uNewField("_javaClass", &Transformation___javaClass_2, 0, ::app::Android::Base::Primitives::ujclass__typeof()),
        ::uNewField("toString_21241_ID", &Transformation__toString_21241_ID, 0, ::app::Android::Base::Primitives::jmethodID__typeof()));

    type->SetFunctions(2,
        ::uNewFunctionVoid("_Init", Transformation___Init_2, 0, true),
        ::uNewFunction("toString_IMPL_21241", Transformation__toString_IMPL_21241, 0, true, ::app::Android::Base::Wrappers::IJWrapper__typeof(), ::app::Uno::Bool__typeof(), ::app::Android::Base::Primitives::ujobject__typeof()));

    ::uRegisterType(type);
    return type;
}

void Transformation___Init_2(::uStatic* __this)
{
    if (::app::Android::android::view::animation::Transformation___javaClass_2) { return; }
    INIT_JNI;
    ::app::Android::android::view::animation::Transformation___javaClass_2 = NEW_GLOBAL_REF(jclass,LOAD_SYS_CLASS("android/view/animation/Transformation"));
    ::app::Android::Base::JNI__CheckException_1(NULL, U_JNIVAR);
    if (!::app::Android::android::view::animation::Transformation___javaClass_2) { THROW_UNO_EXCEPTION("Unable to cache class 'android.view.animation.Transformation'", 61);; }
}

::app::Android::java::lang::String* Transformation__toString(Transformation* __this)
{
    return ::uCast< ::app::Android::java::lang::String*>(Transformation__toString_IMPL_21241(NULL, __this->_subclassed, __this->_javaObject), ::app::Android::java::lang::String__typeof());
}

::uObject* Transformation__toString_IMPL_21241(::uStatic* __this, bool arg0_, jobject arg1_)
{
    INIT_JNI;
    CLASS_INIT(::app::Android::android::view::animation::Transformation___javaClass_2,::app::Android::android::view::animation::Transformation___Init_2(NULL));
    
    ::uObject* result;
    CACHE_METHOD(::app::Android::android::view::animation::Transformation__toString_21241_ID,::app::Android::android::view::animation::Transformation___javaClass_2,"toString","()Ljava/lang/String;",GetMethodID,"Id for fallback method android.view.animation.Transformation.toString could not be cached",89);
    if (arg0_) {
        NEW_UNO(U_JNIVAR->CallNonvirtualObjectMethod(arg1_, ::app::Android::android::view::animation::Transformation___javaClass_2, ::app::Android::android::view::animation::Transformation__toString_21241_ID),result,::app::Android::java::lang::String__typeof(),::app::Android::java::lang::String*,false,true);
    }
    else
    {
        NEW_UNO(U_JNIVAR->CallObjectMethod(arg1_, ::app::Android::android::view::animation::Transformation__toString_21241_ID),result,::app::Android::java::lang::String__typeof(),::app::Android::java::lang::String*,false,true);
    }
    ::app::Android::Base::JNI__CheckException_1(NULL, U_JNIVAR);
    return result;
}

}}}}}
