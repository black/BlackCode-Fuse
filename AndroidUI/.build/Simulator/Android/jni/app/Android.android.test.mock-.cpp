#include <app/Android.android.content.res.Resources.h>
#include <app/Android.android.test.mock.MockContext.h>
#include <app/Android.Base.AndroidBindingMacros.h>
#include <app/Android.Base.JNI.h>
#include <app/Android.Base.Primitives.jmethodID.h>
#include <app/Android.Base.Primitives.ujclass.h>
#include <app/Android.Base.Primitives.ujobject.h>
#include <app/Android.Base.Wrappers.JWrapper.h>
#include <app/Android.java.lang.Object.h>
#include <app/Android.java.lang.String.h>
#include <app/Uno.Bool.h>
#include <app/Uno.Exception.h>

namespace app {
namespace Android {
namespace android {
namespace test {
namespace mock {

// This file was generated based on 'C:\ProgramData\Uno\Packages\Android\0.13.2\Android\android\test\mock\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

jclass MockContext___javaClass_3;
jmethodID MockContext__getResources_18557_ID;
jmethodID MockContext__getSystemService_18620_ID;

MockContext__uType* MockContext__typeof()
{
    static ::uStaticStrong<MockContext__uType*> type;
    if (type != NULL) return type;

    type = (MockContext__uType*)::uAllocClassType(sizeof(MockContext__uType), "Android.android.test.mock.MockContext", false, 2, 0, 0);

    type->SetBaseType(::app::Android::android::content::Context__typeof());
    type->__fp_getResources = (::app::Android::android::content::res::Resources*(*)(::app::Android::android::content::Context*))MockContext__getResources;
    type->__fp_getSystemService = (::app::Android::java::lang::Object*(*)(::app::Android::android::content::Context*, ::app::Android::java::lang::String*))MockContext__getSystemService;

    type->SetInterfaces(
        ::app::Android::Base::Wrappers::IJWrapper__typeof(), offsetof(MockContext__uType, __interface_0),
        ::app::Uno::IDisposable__typeof(), offsetof(MockContext__uType, __interface_1));

    type->SetFields(3,
        ::uNewField("_javaClass", &MockContext___javaClass_3, 0, ::app::Android::Base::Primitives::ujclass__typeof()),
        ::uNewField("getResources_18557_ID", &MockContext__getResources_18557_ID, 0, ::app::Android::Base::Primitives::jmethodID__typeof()),
        ::uNewField("getSystemService_18620_ID", &MockContext__getSystemService_18620_ID, 0, ::app::Android::Base::Primitives::jmethodID__typeof()));

    type->SetFunctions(3,
        ::uNewFunctionVoid("_Init", MockContext___Init_3, 0, true),
        ::uNewFunction("getResources_IMPL_18557", MockContext__getResources_IMPL_18557, 0, true, ::app::Android::Base::Wrappers::IJWrapper__typeof(), ::app::Uno::Bool__typeof(), ::app::Android::Base::Primitives::ujobject__typeof()),
        ::uNewFunction("getSystemService_IMPL_18620", MockContext__getSystemService_IMPL_18620, 0, true, ::app::Android::Base::Wrappers::IJWrapper__typeof(), ::app::Uno::Bool__typeof(), ::app::Android::Base::Primitives::ujobject__typeof(), ::app::Android::Base::Wrappers::IJWrapper__typeof()));

    ::uRegisterType(type);
    return type;
}

void MockContext___Init_3(::uStatic* __this)
{
    if (::app::Android::android::test::mock::MockContext___javaClass_3) { return; }
    INIT_JNI;
    ::app::Android::android::test::mock::MockContext___javaClass_3 = NEW_GLOBAL_REF(jclass,LOAD_SYS_CLASS("android/test/mock/MockContext"));
    ::app::Android::Base::JNI__CheckException_1(NULL, U_JNIVAR);
    if (!::app::Android::android::test::mock::MockContext___javaClass_3) { THROW_UNO_EXCEPTION("Unable to cache class 'android.test.mock.MockContext'", 53);; }
}

::app::Android::android::content::res::Resources* MockContext__getResources(MockContext* __this)
{
    return ::uCast< ::app::Android::android::content::res::Resources*>(MockContext__getResources_IMPL_18557(NULL, __this->_subclassed, __this->_javaObject), ::app::Android::android::content::res::Resources__typeof());
}

::uObject* MockContext__getResources_IMPL_18557(::uStatic* __this, bool arg0_, jobject arg1_)
{
    INIT_JNI;
    CLASS_INIT(::app::Android::android::test::mock::MockContext___javaClass_3,::app::Android::android::test::mock::MockContext___Init_3(NULL));
    
    ::uObject* result;
    CACHE_METHOD(::app::Android::android::test::mock::MockContext__getResources_18557_ID,::app::Android::android::test::mock::MockContext___javaClass_3,"getResources","()Landroid/content/res/Resources;",GetMethodID,"Id for fallback method android.test.mock.MockContext.getResources could not be cached",85);
    if (arg0_) {
        NEW_UNO(U_JNIVAR->CallNonvirtualObjectMethod(arg1_, ::app::Android::android::test::mock::MockContext___javaClass_3, ::app::Android::android::test::mock::MockContext__getResources_18557_ID),result,::app::Android::android::content::res::Resources__typeof(),::app::Android::android::content::res::Resources*,false,true);
    }
    else
    {
        NEW_UNO(U_JNIVAR->CallObjectMethod(arg1_, ::app::Android::android::test::mock::MockContext__getResources_18557_ID),result,::app::Android::android::content::res::Resources__typeof(),::app::Android::android::content::res::Resources*,false,true);
    }
    ::app::Android::Base::JNI__CheckException_1(NULL, U_JNIVAR);
    return result;
}

::app::Android::java::lang::Object* MockContext__getSystemService(MockContext* __this, ::app::Android::java::lang::String* arg0)
{
    return ::uCast< ::app::Android::java::lang::Object*>(MockContext__getSystemService_IMPL_18620(NULL, __this->_subclassed, __this->_javaObject, (::uObject*)arg0), ::app::Android::java::lang::Object__typeof());
}

::uObject* MockContext__getSystemService_IMPL_18620(::uStatic* __this, bool arg0_, jobject arg1_, ::uObject* arg2_)
{
    INIT_JNI;
    CLASS_INIT(::app::Android::android::test::mock::MockContext___javaClass_3,::app::Android::android::test::mock::MockContext___Init_3(NULL));
    jobject _obArg2 = ((!arg2_) ? NULL : ::app::Android::Base::Wrappers::IJWrapper::_GetJavaObject(arg2_));
    ::uObject* result;
    CACHE_METHOD(::app::Android::android::test::mock::MockContext__getSystemService_18620_ID,::app::Android::android::test::mock::MockContext___javaClass_3,"getSystemService","(Ljava/lang/String;)Ljava/lang/Object;",GetMethodID,"Id for fallback method android.test.mock.MockContext.getSystemService could not be cached",89);
    if (arg0_) {
        NEW_UNO(U_JNIVAR->CallNonvirtualObjectMethod(arg1_, ::app::Android::android::test::mock::MockContext___javaClass_3, ::app::Android::android::test::mock::MockContext__getSystemService_18620_ID, _obArg2),result,::app::Android::java::lang::Object__typeof(),::app::Android::java::lang::Object*,false,true);
    }
    else
    {
        NEW_UNO(U_JNIVAR->CallObjectMethod(arg1_, ::app::Android::android::test::mock::MockContext__getSystemService_18620_ID, _obArg2),result,::app::Android::java::lang::Object__typeof(),::app::Android::java::lang::Object*,false,true);
    }
    ::app::Android::Base::JNI__CheckException_1(NULL, U_JNIVAR);
    return result;
}

}}}}}
