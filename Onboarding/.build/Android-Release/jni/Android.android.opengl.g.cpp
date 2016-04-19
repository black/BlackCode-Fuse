// This file was generated based on '(multiple files)'.
// WARNING: Changes might be lost if you edit this file directly.

#include <Android.android.graphics.Bitmap.h>
#include <Android.android.opengl.GLUtils.h>
#include <Android.Base.AndroidBindingMacros.h>
#include <Android.Base.JNI.h>
#include <Android.Base.Primitives.jmethodID.h>
#include <Android.Base.Primitives.ujclass.h>
#include <Android.Base.Wrappers.JWrapper.h>
#include <Uno.Exception.h>
#include <Uno.Int.h>
static uType* TYPES[1];

namespace g{
namespace Android{
namespace android{
namespace opengl{

// C:\ProgramData\Uno\Packages\Android\0.20.2\Android\android\opengl\$.uno(28007)
// ------------------------------------------------------------------------------

// public sealed extern class GLUtils :28007
// {
::g::Android::java::lang::Object_type* GLUtils_typeof()
{
    static uSStrong< ::g::Android::java::lang::Object_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 7;
    options.InterfaceCount = 2;
    options.ObjectSize = sizeof(GLUtils);
    options.TypeSize = sizeof(::g::Android::java::lang::Object_type);
    type = (::g::Android::java::lang::Object_type*)uClassType::New("Android.android.opengl.GLUtils", options);
    type->SetBase(::g::Android::java::lang::Object_typeof());
    type->interface1.fp_Dispose = (void(*)(uObject*))::g::Android::Base::Wrappers::JWrapper__Uno_IDisposable_Dispose_fn;
    type->interface0.fp__GetJavaObject = (void(*)(uObject*, jobject*))::g::Android::Base::Wrappers::JWrapper___GetJavaObject_fn;
    type->interface0.fp__IsSubclassed = (void(*)(uObject*, bool*))::g::Android::Base::Wrappers::JWrapper___IsSubclassed_fn;
    ::TYPES[0] = ::g::Android::Base::Wrappers::IJWrapper_typeof();
    type->SetInterfaces(
        ::g::Android::Base::Wrappers::IJWrapper_typeof(), offsetof(::g::Android::java::lang::Object_type, interface0),
        ::g::Uno::IDisposable_typeof(), offsetof(::g::Android::java::lang::Object_type, interface1));
    type->SetFields(5,
        ::g::Android::Base::Primitives::ujclass_typeof(), (uintptr_t)&::g::Android::android::opengl::GLUtils::_javaClass2_, uFieldFlagsStatic,
        ::g::Android::Base::Primitives::jmethodID_typeof(), (uintptr_t)&::g::Android::android::opengl::GLUtils::texImage2D_13332_ID_, uFieldFlagsStatic);
    return type;
}

// public static extern new void _Init() :28011
void GLUtils___Init2_fn()
{
    GLUtils::_Init2();
}

// public static void texImage2D(int arg0, int arg1, Android.android.graphics.Bitmap arg2, int arg3) :28038
void GLUtils__texImage2D_fn(int* arg0, int* arg1, ::g::Android::android::graphics::Bitmap* arg2, int* arg3)
{
    GLUtils::texImage2D(*arg0, *arg1, arg2, *arg3);
}

// public static extern void texImage2D_IMPL_13332(int arg0, int arg1, Android.Base.Wrappers.IJWrapper arg2, int arg3) :28075
void GLUtils__texImage2D_IMPL_13332_fn(int* arg0_, int* arg1_, uObject* arg2_, int* arg3_)
{
    GLUtils::texImage2D_IMPL_13332(*arg0_, *arg1_, arg2_, *arg3_);
}

jclass GLUtils::_javaClass2_;
jmethodID GLUtils::texImage2D_13332_ID_;

// public static extern new void _Init() [static] :28011
void GLUtils::_Init2()
{
    if (GLUtils::_javaClass2()) { return; }
    INIT_JNI;
    GLUtils::_javaClass2() = NEW_GLOBAL_REF(jclass,LOAD_SYS_CLASS("android/opengl/GLUtils"));
    ::g::Android::Base::JNI::CheckException1(U_JNIVAR);
    if (!GLUtils::_javaClass2()) { THROW_UNO_EXCEPTION("Unable to cache class 'android.opengl.GLUtils'", 46);; }
}

// public static void texImage2D(int arg0, int arg1, Android.android.graphics.Bitmap arg2, int arg3) [static] :28038
void GLUtils::texImage2D(int arg0, int arg1, ::g::Android::android::graphics::Bitmap* arg2, int arg3)
{
    GLUtils::texImage2D_IMPL_13332(arg0, arg1, (uObject*)arg2, arg3);
}

// public static extern void texImage2D_IMPL_13332(int arg0, int arg1, Android.Base.Wrappers.IJWrapper arg2, int arg3) [static] :28075
void GLUtils::texImage2D_IMPL_13332(int arg0_, int arg1_, uObject* arg2_, int arg3_)
{
    INIT_JNI;
    CLASS_INIT(GLUtils::_javaClass2(),GLUtils::_Init2());
    jobject _obArg2 = ((!arg2_) ? NULL : ::g::Android::Base::Wrappers::IJWrapper::_GetJavaObject(uInterface(arg2_, ::g::Android::Base::Wrappers::IJWrapper_typeof())));
    CACHE_METHOD(GLUtils::texImage2D_13332_ID(),GLUtils::_javaClass2(),"texImage2D","(IILandroid/graphics/Bitmap;I)V",GetStaticMethodID,"Id for fallback method android.opengl.GLUtils.texImage2D could not be cached",76);
    U_JNIVAR->CallStaticVoidMethod(GLUtils::_javaClass2(), GLUtils::texImage2D_13332_ID(), ((jint)arg0_), ((jint)arg1_), _obArg2, ((jint)arg3_));
    ::g::Android::Base::JNI::CheckException1(U_JNIVAR);
}
// }

}}}} // ::g::Android::android::opengl
