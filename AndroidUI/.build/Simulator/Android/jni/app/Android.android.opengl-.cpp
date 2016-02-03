#include <app/Android.android.graphics.Bitmap.h>
#include <app/Android.android.opengl.GLUtils.h>
#include <app/Android.Base.AndroidBindingMacros.h>
#include <app/Android.Base.JNI.h>
#include <app/Android.Base.Primitives.jmethodID.h>
#include <app/Android.Base.Primitives.ujclass.h>
#include <app/Android.Base.Wrappers.JWrapper.h>
#include <app/Uno.Exception.h>
#include <app/Uno.Int.h>

namespace app {
namespace Android {
namespace android {
namespace opengl {

// This file was generated based on 'C:\ProgramData\Uno\Packages\Android\0.13.2\Android\android\opengl\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

jclass GLUtils___javaClass_2;
jmethodID GLUtils__texImage2D_13332_ID;

GLUtils__uType* GLUtils__typeof()
{
    static ::uStaticStrong<GLUtils__uType*> type;
    if (type != NULL) return type;

    type = (GLUtils__uType*)::uAllocClassType(sizeof(GLUtils__uType), "Android.android.opengl.GLUtils", false, 2, 0, 0);

    type->SetBaseType(::app::Android::java::lang::Object__typeof());

    type->SetInterfaces(
        ::app::Android::Base::Wrappers::IJWrapper__typeof(), offsetof(GLUtils__uType, __interface_0),
        ::app::Uno::IDisposable__typeof(), offsetof(GLUtils__uType, __interface_1));

    type->SetFields(2,
        ::uNewField("_javaClass", &GLUtils___javaClass_2, 0, ::app::Android::Base::Primitives::ujclass__typeof()),
        ::uNewField("texImage2D_13332_ID", &GLUtils__texImage2D_13332_ID, 0, ::app::Android::Base::Primitives::jmethodID__typeof()));

    type->SetFunctions(3,
        ::uNewFunctionVoid("_Init", GLUtils___Init_2, 0, true),
        ::uNewFunctionVoid("texImage2D", GLUtils__texImage2D, 0, true, ::app::Uno::Int__typeof(), ::app::Uno::Int__typeof(), ::app::Android::android::graphics::Bitmap__typeof(), ::app::Uno::Int__typeof()),
        ::uNewFunctionVoid("texImage2D_IMPL_13332", GLUtils__texImage2D_IMPL_13332, 0, true, ::app::Uno::Int__typeof(), ::app::Uno::Int__typeof(), ::app::Android::Base::Wrappers::IJWrapper__typeof(), ::app::Uno::Int__typeof()));

    ::uRegisterType(type);
    return type;
}

void GLUtils___Init_2(::uStatic* __this)
{
    if (::app::Android::android::opengl::GLUtils___javaClass_2) { return; }
    INIT_JNI;
    ::app::Android::android::opengl::GLUtils___javaClass_2 = NEW_GLOBAL_REF(jclass,LOAD_SYS_CLASS("android/opengl/GLUtils"));
    ::app::Android::Base::JNI__CheckException_1(NULL, U_JNIVAR);
    if (!::app::Android::android::opengl::GLUtils___javaClass_2) { THROW_UNO_EXCEPTION("Unable to cache class 'android.opengl.GLUtils'", 46);; }
}

void GLUtils__texImage2D(::uStatic* __this, int arg0, int arg1, ::app::Android::android::graphics::Bitmap* arg2, int arg3)
{
    GLUtils__texImage2D_IMPL_13332(NULL, arg0, arg1, (::uObject*)arg2, arg3);
}

void GLUtils__texImage2D_IMPL_13332(::uStatic* __this, int arg0_, int arg1_, ::uObject* arg2_, int arg3_)
{
    INIT_JNI;
    CLASS_INIT(::app::Android::android::opengl::GLUtils___javaClass_2,::app::Android::android::opengl::GLUtils___Init_2(NULL));
    jobject _obArg2 = ((!arg2_) ? NULL : ::app::Android::Base::Wrappers::IJWrapper::_GetJavaObject(arg2_));
    CACHE_METHOD(::app::Android::android::opengl::GLUtils__texImage2D_13332_ID,::app::Android::android::opengl::GLUtils___javaClass_2,"texImage2D","(IILandroid/graphics/Bitmap;I)V",GetStaticMethodID,"Id for fallback method android.opengl.GLUtils.texImage2D could not be cached",76);
    U_JNIVAR->CallStaticVoidMethod(::app::Android::android::opengl::GLUtils___javaClass_2, ::app::Android::android::opengl::GLUtils__texImage2D_13332_ID, ((jint)arg0_), ((jint)arg1_), _obArg2, ((jint)arg3_));
    ::app::Android::Base::JNI__CheckException_1(NULL, U_JNIVAR);
}

}}}}
