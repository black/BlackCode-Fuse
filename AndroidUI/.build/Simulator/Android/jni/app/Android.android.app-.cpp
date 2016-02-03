#include <app/Android.android.app.Activity.h>
#include <app/Android.android.app.Fragment.h>
#include <app/Android.android.app.TaskStackBuilder.h>
#include <app/Android.android.content.Intent.h>
#include <app/Android.android.view.ContextMenu.h>
#include <app/Android.android.view.ContextMenuDLRContextMenuInfo.h>
#include <app/Android.android.view.View.h>
#include <app/Android.Base.AndroidBindingMacros.h>
#include <app/Android.Base.JNI.h>
#include <app/Android.Base.Primitives.jmethodID.h>
#include <app/Android.Base.Primitives.ujclass.h>
#include <app/Android.Base.Primitives.ujobject.h>
#include <app/Android.Base.Wrappers.JWrapper.h>
#include <app/Android.java.lang.Object.h>
#include <app/Android.java.lang.Runnable.h>
#include <app/Android.java.lang.String.h>
#include <app/Uno.Bool.h>
#include <app/Uno.Exception.h>
#include <app/Uno.Int.h>
#include <app/Uno.Type.h>

namespace app {
namespace Android {
namespace android {
namespace app {

// This file was generated based on 'C:\ProgramData\Uno\Packages\Android\0.13.2\Android\android\app\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

jclass Activity___javaClass_5;
jmethodID Activity__getSystemService_847_ID;
jmethodID Activity__onCreateContextMenu_775_ID;
jmethodID Activity__runOnUiThread_862_ID;
jmethodID Activity__startActivity_806_ID;

Activity__uType* Activity__typeof()
{
    static ::uStaticStrong<Activity__uType*> type;
    if (type != NULL) return type;

    type = (Activity__uType*)::uAllocClassType(sizeof(Activity__uType), "Android.android.app.Activity", false, 3, 0, 0);

    type->SetBaseType(::app::Android::android::view::ContextThemeWrapper__typeof());
    type->__fp_getSystemService = (::app::Android::java::lang::Object*(*)(::app::Android::android::content::Context*, ::app::Android::java::lang::String*))Activity__getSystemService;
    type->__interface_2.__fp_onCreateContextMenu = (void(*)(void*, ::uObject*, ::app::Android::android::view::View*, ::uObject*))Activity__onCreateContextMenu;
    type->__interface_0.__fp__GetJavaObject = (jobject(*)(void*))::app::Android::Base::Wrappers::JWrapper___GetJavaObject;
    type->__interface_0.__fp__IsSubclassed = (bool(*)(void*))::app::Android::Base::Wrappers::JWrapper___IsSubclassed;

    type->SetInterfaces(
        ::app::Android::Base::Wrappers::IJWrapper__typeof(), offsetof(Activity__uType, __interface_0),
        ::app::Uno::IDisposable__typeof(), offsetof(Activity__uType, __interface_1),
        ::app::Android::android::view::ViewDLROnCreateContextMenuListener__typeof(), offsetof(Activity__uType, __interface_2));

    type->SetFields(5,
        ::uNewField("_javaClass", &Activity___javaClass_5, 0, ::app::Android::Base::Primitives::ujclass__typeof()),
        ::uNewField("getSystemService_847_ID", &Activity__getSystemService_847_ID, 0, ::app::Android::Base::Primitives::jmethodID__typeof()),
        ::uNewField("onCreateContextMenu_775_ID", &Activity__onCreateContextMenu_775_ID, 0, ::app::Android::Base::Primitives::jmethodID__typeof()),
        ::uNewField("runOnUiThread_862_ID", &Activity__runOnUiThread_862_ID, 0, ::app::Android::Base::Primitives::jmethodID__typeof()),
        ::uNewField("startActivity_806_ID", &Activity__startActivity_806_ID, 0, ::app::Android::Base::Primitives::jmethodID__typeof()));

    type->SetFunctions(10,
        ::uNewFunctionVoid("_Init", Activity___Init_5, 0, true),
        ::uNewFunction("GetAppActivity", Activity__GetAppActivity, 0, true, Activity__typeof()),
        ::uNewFunction("getSystemService_IMPL_847", Activity__getSystemService_IMPL_847, 0, true, ::app::Android::Base::Wrappers::IJWrapper__typeof(), ::app::Uno::Bool__typeof(), ::app::Android::Base::Primitives::ujobject__typeof(), ::app::Android::Base::Wrappers::IJWrapper__typeof()),
        ::uNewFunction(".ctor", Activity__New_11, 0, true, Activity__typeof(), ::app::Android::Base::Primitives::ujobject__typeof(), ::uType__typeof(), ::app::Uno::Bool__typeof(), ::app::Uno::Bool__typeof()),
        ::uNewFunctionVoid("onCreateContextMenu", Activity__onCreateContextMenu, 0, false, ::app::Android::android::view::ContextMenu__typeof(), ::app::Android::android::view::View__typeof(), ::app::Android::android::view::ContextMenuDLRContextMenuInfo__typeof()),
        ::uNewFunctionVoid("onCreateContextMenu_IMPL_775", Activity__onCreateContextMenu_IMPL_775, 0, true, ::app::Uno::Bool__typeof(), ::app::Android::Base::Primitives::ujobject__typeof(), ::app::Android::Base::Wrappers::IJWrapper__typeof(), ::app::Android::Base::Wrappers::IJWrapper__typeof(), ::app::Android::Base::Wrappers::IJWrapper__typeof()),
        ::uNewFunctionVoid("runOnUiThread", Activity__runOnUiThread, 0, false, ::app::Android::java::lang::Runnable__typeof()),
        ::uNewFunctionVoid("runOnUiThread_IMPL_862", Activity__runOnUiThread_IMPL_862, 0, true, ::app::Uno::Bool__typeof(), ::app::Android::Base::Primitives::ujobject__typeof(), ::app::Android::Base::Wrappers::IJWrapper__typeof()),
        ::uNewFunctionVoid("startActivity", Activity__startActivity, 0, false, ::app::Android::android::content::Intent__typeof()),
        ::uNewFunctionVoid("startActivity_IMPL_806", Activity__startActivity_IMPL_806, 0, true, ::app::Uno::Bool__typeof(), ::app::Android::Base::Primitives::ujobject__typeof(), ::app::Android::Base::Wrappers::IJWrapper__typeof()));

    ::uRegisterType(type);
    return type;
}

void Activity___Init_5(::uStatic* __this)
{
    if (::app::Android::android::app::Activity___javaClass_5) { return; }
    INIT_JNI;
    ::app::Android::android::app::Activity___javaClass_5 = NEW_GLOBAL_REF(jclass,LOAD_SYS_CLASS("android/app/Activity"));
    ::app::Android::Base::JNI__CheckException_1(NULL, U_JNIVAR);
    if (!::app::Android::android::app::Activity___javaClass_5) { THROW_UNO_EXCEPTION("Unable to cache class 'android.app.Activity'", 44);; }
}

void Activity___ObjInit_12(Activity* __this, jobject obj, ::uType* utype, bool hasFallbackClass, bool resolveType)
{
    ::app::Android::android::view::ContextThemeWrapper___ObjInit_10(__this, obj, utype, hasFallbackClass, resolveType);
}

Activity* Activity__GetAppActivity(::uStatic* __this)
{
    return Activity__New_11(NULL, ::app::Android::Base::JNI__GetActivityObject(NULL), ::app::Android::Base::JNI__GetDefaultType(NULL), false, true);
}

::app::Android::java::lang::Object* Activity__getSystemService(Activity* __this, ::app::Android::java::lang::String* arg0)
{
    return ::uCast< ::app::Android::java::lang::Object*>(Activity__getSystemService_IMPL_847(NULL, __this->_subclassed, __this->_javaObject, (::uObject*)arg0), ::app::Android::java::lang::Object__typeof());
}

::uObject* Activity__getSystemService_IMPL_847(::uStatic* __this, bool arg0_, jobject arg1_, ::uObject* arg2_)
{
    INIT_JNI;
    CLASS_INIT(::app::Android::android::app::Activity___javaClass_5,::app::Android::android::app::Activity___Init_5(NULL));
    jobject _obArg2 = ((!arg2_) ? NULL : ::app::Android::Base::Wrappers::IJWrapper::_GetJavaObject(arg2_));
    ::uObject* result;
    CACHE_METHOD(::app::Android::android::app::Activity__getSystemService_847_ID,::app::Android::android::app::Activity___javaClass_5,"getSystemService","(Ljava/lang/String;)Ljava/lang/Object;",GetMethodID,"Id for fallback method android.app.Activity.getSystemService could not be cached",80);
    if (arg0_) {
        NEW_UNO(U_JNIVAR->CallNonvirtualObjectMethod(arg1_, ::app::Android::android::app::Activity___javaClass_5, ::app::Android::android::app::Activity__getSystemService_847_ID, _obArg2),result,::app::Android::java::lang::Object__typeof(),::app::Android::java::lang::Object*,false,true);
    }
    else
    {
        NEW_UNO(U_JNIVAR->CallObjectMethod(arg1_, ::app::Android::android::app::Activity__getSystemService_847_ID, _obArg2),result,::app::Android::java::lang::Object__typeof(),::app::Android::java::lang::Object*,false,true);
    }
    ::app::Android::Base::JNI__CheckException_1(NULL, U_JNIVAR);
    return result;
}

Activity* Activity__New_11(::uStatic* __this, jobject obj, ::uType* utype, bool hasFallbackClass, bool resolveType)
{
    Activity* inst = (Activity*)::uAllocObject(sizeof(Activity), Activity__typeof());
    inst->_ObjInit_12(obj, utype, hasFallbackClass, resolveType);
    return inst;
}

void Activity__onCreateContextMenu(Activity* __this, ::uObject* arg0, ::app::Android::android::view::View* arg1, ::uObject* arg2)
{
    Activity__onCreateContextMenu_IMPL_775(NULL, __this->_subclassed, __this->_javaObject, (::uObject*)arg0, (::uObject*)arg1, (::uObject*)arg2);
}

void Activity__onCreateContextMenu_IMPL_775(::uStatic* __this, bool arg0_, jobject arg1_, ::uObject* arg2_, ::uObject* arg3_, ::uObject* arg4_)
{
    INIT_JNI;
    CLASS_INIT(::app::Android::android::app::Activity___javaClass_5,::app::Android::android::app::Activity___Init_5(NULL));
    jobject _obArg2 = ((!arg2_) ? NULL : ::app::Android::Base::Wrappers::IJWrapper::_GetJavaObject(arg2_));
    jobject _obArg3 = ((!arg3_) ? NULL : ::app::Android::Base::Wrappers::IJWrapper::_GetJavaObject(arg3_));
    jobject _obArg4 = ((!arg4_) ? NULL : ::app::Android::Base::Wrappers::IJWrapper::_GetJavaObject(arg4_));
    CACHE_METHOD(::app::Android::android::app::Activity__onCreateContextMenu_775_ID,::app::Android::android::app::Activity___javaClass_5,"onCreateContextMenu","(Landroid/view/ContextMenu;Landroid/view/View;Landroid/view/ContextMenu$ContextMenuInfo;)V",GetMethodID,"Id for fallback method android.app.Activity.onCreateContextMenu could not be cached",83);
    if (arg0_) {
        U_JNIVAR->CallNonvirtualVoidMethod(arg1_, ::app::Android::android::app::Activity___javaClass_5, ::app::Android::android::app::Activity__onCreateContextMenu_775_ID, _obArg2, _obArg3, _obArg4);
    }
    else
    {
        U_JNIVAR->CallVoidMethod(arg1_, ::app::Android::android::app::Activity__onCreateContextMenu_775_ID, _obArg2, _obArg3, _obArg4);
    }
    ::app::Android::Base::JNI__CheckException_1(NULL, U_JNIVAR);
}

void Activity__runOnUiThread(Activity* __this, ::uObject* arg0)
{
    Activity__runOnUiThread_IMPL_862(NULL, __this->_subclassed, __this->_javaObject, (::uObject*)arg0);
}

void Activity__runOnUiThread_IMPL_862(::uStatic* __this, bool arg0_, jobject arg1_, ::uObject* arg2_)
{
    INIT_JNI;
    CLASS_INIT(::app::Android::android::app::Activity___javaClass_5,::app::Android::android::app::Activity___Init_5(NULL));
    jobject _obArg2 = ((!arg2_) ? NULL : ::app::Android::Base::Wrappers::IJWrapper::_GetJavaObject(arg2_));
    CACHE_METHOD(::app::Android::android::app::Activity__runOnUiThread_862_ID,::app::Android::android::app::Activity___javaClass_5,"runOnUiThread","(Ljava/lang/Runnable;)V",GetMethodID,"Id for fallback method android.app.Activity.runOnUiThread could not be cached",77);
    if (arg0_) {
        U_JNIVAR->CallNonvirtualVoidMethod(arg1_, ::app::Android::android::app::Activity___javaClass_5, ::app::Android::android::app::Activity__runOnUiThread_862_ID, _obArg2);
    }
    else
    {
        U_JNIVAR->CallVoidMethod(arg1_, ::app::Android::android::app::Activity__runOnUiThread_862_ID, _obArg2);
    }
    ::app::Android::Base::JNI__CheckException_1(NULL, U_JNIVAR);
}

void Activity__startActivity(Activity* __this, ::app::Android::android::content::Intent* arg0)
{
    Activity__startActivity_IMPL_806(NULL, __this->_subclassed, __this->_javaObject, (::uObject*)arg0);
}

void Activity__startActivity_IMPL_806(::uStatic* __this, bool arg0_, jobject arg1_, ::uObject* arg2_)
{
    INIT_JNI;
    CLASS_INIT(::app::Android::android::app::Activity___javaClass_5,::app::Android::android::app::Activity___Init_5(NULL));
    jobject _obArg2 = ((!arg2_) ? NULL : ::app::Android::Base::Wrappers::IJWrapper::_GetJavaObject(arg2_));
    CACHE_METHOD(::app::Android::android::app::Activity__startActivity_806_ID,::app::Android::android::app::Activity___javaClass_5,"startActivity","(Landroid/content/Intent;)V",GetMethodID,"Id for fallback method android.app.Activity.startActivity could not be cached",77);
    if (arg0_) {
        U_JNIVAR->CallNonvirtualVoidMethod(arg1_, ::app::Android::android::app::Activity___javaClass_5, ::app::Android::android::app::Activity__startActivity_806_ID, _obArg2);
    }
    else
    {
        U_JNIVAR->CallVoidMethod(arg1_, ::app::Android::android::app::Activity__startActivity_806_ID, _obArg2);
    }
    ::app::Android::Base::JNI__CheckException_1(NULL, U_JNIVAR);
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\Android\0.13.2\Android\android\app\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

jclass Fragment___javaClass_2;
jmethodID Fragment__equals_1415_ID;
jmethodID Fragment__hashCode_1416_ID;
jmethodID Fragment__onCreateContextMenu_1480_ID;
jmethodID Fragment__toString_1417_ID;

Fragment__uType* Fragment__typeof()
{
    static ::uStaticStrong<Fragment__uType*> type;
    if (type != NULL) return type;

    type = (Fragment__uType*)::uAllocClassType(sizeof(Fragment__uType), "Android.android.app.Fragment", false, 3, 0, 0);

    type->SetBaseType(::app::Android::java::lang::Object__typeof());
    type->__fp_equals_1 = (bool(*)(::app::Android::java::lang::Object*, ::app::Android::java::lang::Object*))Fragment__equals_1;
    type->__fp_hashCode_1 = (int(*)(::app::Android::java::lang::Object*))Fragment__hashCode_1;
    type->__fp_toString = (::app::Android::java::lang::String*(*)(::app::Android::java::lang::Object*))Fragment__toString;
    type->__interface_2.__fp_onCreateContextMenu = (void(*)(void*, ::uObject*, ::app::Android::android::view::View*, ::uObject*))Fragment__onCreateContextMenu;
    type->__interface_0.__fp__GetJavaObject = (jobject(*)(void*))::app::Android::Base::Wrappers::JWrapper___GetJavaObject;
    type->__interface_0.__fp__IsSubclassed = (bool(*)(void*))::app::Android::Base::Wrappers::JWrapper___IsSubclassed;

    type->SetInterfaces(
        ::app::Android::Base::Wrappers::IJWrapper__typeof(), offsetof(Fragment__uType, __interface_0),
        ::app::Uno::IDisposable__typeof(), offsetof(Fragment__uType, __interface_1),
        ::app::Android::android::view::ViewDLROnCreateContextMenuListener__typeof(), offsetof(Fragment__uType, __interface_2));

    type->SetFields(5,
        ::uNewField("_javaClass", &Fragment___javaClass_2, 0, ::app::Android::Base::Primitives::ujclass__typeof()),
        ::uNewField("equals_1415_ID", &Fragment__equals_1415_ID, 0, ::app::Android::Base::Primitives::jmethodID__typeof()),
        ::uNewField("hashCode_1416_ID", &Fragment__hashCode_1416_ID, 0, ::app::Android::Base::Primitives::jmethodID__typeof()),
        ::uNewField("onCreateContextMenu_1480_ID", &Fragment__onCreateContextMenu_1480_ID, 0, ::app::Android::Base::Primitives::jmethodID__typeof()),
        ::uNewField("toString_1417_ID", &Fragment__toString_1417_ID, 0, ::app::Android::Base::Primitives::jmethodID__typeof()));

    type->SetFunctions(6,
        ::uNewFunctionVoid("_Init", Fragment___Init_2, 0, true),
        ::uNewFunction("equals_IMPL_1415", Fragment__equals_IMPL_1415, 0, true, ::app::Uno::Bool__typeof(), ::app::Uno::Bool__typeof(), ::app::Android::Base::Primitives::ujobject__typeof(), ::app::Android::Base::Wrappers::IJWrapper__typeof()),
        ::uNewFunction("hashCode_IMPL_1416", Fragment__hashCode_IMPL_1416, 0, true, ::app::Uno::Int__typeof(), ::app::Uno::Bool__typeof(), ::app::Android::Base::Primitives::ujobject__typeof()),
        ::uNewFunctionVoid("onCreateContextMenu", Fragment__onCreateContextMenu, 0, false, ::app::Android::android::view::ContextMenu__typeof(), ::app::Android::android::view::View__typeof(), ::app::Android::android::view::ContextMenuDLRContextMenuInfo__typeof()),
        ::uNewFunctionVoid("onCreateContextMenu_IMPL_1480", Fragment__onCreateContextMenu_IMPL_1480, 0, true, ::app::Uno::Bool__typeof(), ::app::Android::Base::Primitives::ujobject__typeof(), ::app::Android::Base::Wrappers::IJWrapper__typeof(), ::app::Android::Base::Wrappers::IJWrapper__typeof(), ::app::Android::Base::Wrappers::IJWrapper__typeof()),
        ::uNewFunction("toString_IMPL_1417", Fragment__toString_IMPL_1417, 0, true, ::app::Android::Base::Wrappers::IJWrapper__typeof(), ::app::Uno::Bool__typeof(), ::app::Android::Base::Primitives::ujobject__typeof()));

    ::uRegisterType(type);
    return type;
}

void Fragment___Init_2(::uStatic* __this)
{
    if (::app::Android::android::app::Fragment___javaClass_2) { return; }
    INIT_JNI;
    ::app::Android::android::app::Fragment___javaClass_2 = NEW_GLOBAL_REF(jclass,LOAD_SYS_CLASS("android/app/Fragment"));
    ::app::Android::Base::JNI__CheckException_1(NULL, U_JNIVAR);
    if (!::app::Android::android::app::Fragment___javaClass_2) { THROW_UNO_EXCEPTION("Unable to cache class 'android.app.Fragment'", 44);; }
}

bool Fragment__equals_1(Fragment* __this, ::app::Android::java::lang::Object* arg0)
{
    return Fragment__equals_IMPL_1415(NULL, __this->_subclassed, __this->_javaObject, (::uObject*)arg0);
}

bool Fragment__equals_IMPL_1415(::uStatic* __this, bool arg0_, jobject arg1_, ::uObject* arg2_)
{
    INIT_JNI;
    CLASS_INIT(::app::Android::android::app::Fragment___javaClass_2,::app::Android::android::app::Fragment___Init_2(NULL));
    jobject _obArg2 = ((!arg2_) ? NULL : ::app::Android::Base::Wrappers::IJWrapper::_GetJavaObject(arg2_));
    bool result;
    CACHE_METHOD(::app::Android::android::app::Fragment__equals_1415_ID,::app::Android::android::app::Fragment___javaClass_2,"equals","(Ljava/lang/Object;)Z",GetMethodID,"Id for fallback method android.app.Fragment.equals could not be cached",70);
    if (arg0_) {
        result = ((bool)U_JNIVAR->CallNonvirtualBooleanMethod(arg1_, ::app::Android::android::app::Fragment___javaClass_2, ::app::Android::android::app::Fragment__equals_1415_ID, _obArg2));
    }
    else
    {
        result = ((bool)U_JNIVAR->CallBooleanMethod(arg1_, ::app::Android::android::app::Fragment__equals_1415_ID, _obArg2));
    }
    ::app::Android::Base::JNI__CheckException_1(NULL, U_JNIVAR);
    return result;
}

int Fragment__hashCode_1(Fragment* __this)
{
    return Fragment__hashCode_IMPL_1416(NULL, __this->_subclassed, __this->_javaObject);
}

int Fragment__hashCode_IMPL_1416(::uStatic* __this, bool arg0_, jobject arg1_)
{
    INIT_JNI;
    CLASS_INIT(::app::Android::android::app::Fragment___javaClass_2,::app::Android::android::app::Fragment___Init_2(NULL));
    
    int result;
    CACHE_METHOD(::app::Android::android::app::Fragment__hashCode_1416_ID,::app::Android::android::app::Fragment___javaClass_2,"hashCode","()I",GetMethodID,"Id for fallback method android.app.Fragment.hashCode could not be cached",72);
    if (arg0_) {
        result = ((int)U_JNIVAR->CallNonvirtualIntMethod(arg1_, ::app::Android::android::app::Fragment___javaClass_2, ::app::Android::android::app::Fragment__hashCode_1416_ID));
    }
    else
    {
        result = ((int)U_JNIVAR->CallIntMethod(arg1_, ::app::Android::android::app::Fragment__hashCode_1416_ID));
    }
    ::app::Android::Base::JNI__CheckException_1(NULL, U_JNIVAR);
    return result;
}

void Fragment__onCreateContextMenu(Fragment* __this, ::uObject* arg0, ::app::Android::android::view::View* arg1, ::uObject* arg2)
{
    Fragment__onCreateContextMenu_IMPL_1480(NULL, __this->_subclassed, __this->_javaObject, (::uObject*)arg0, (::uObject*)arg1, (::uObject*)arg2);
}

void Fragment__onCreateContextMenu_IMPL_1480(::uStatic* __this, bool arg0_, jobject arg1_, ::uObject* arg2_, ::uObject* arg3_, ::uObject* arg4_)
{
    INIT_JNI;
    CLASS_INIT(::app::Android::android::app::Fragment___javaClass_2,::app::Android::android::app::Fragment___Init_2(NULL));
    jobject _obArg2 = ((!arg2_) ? NULL : ::app::Android::Base::Wrappers::IJWrapper::_GetJavaObject(arg2_));
    jobject _obArg3 = ((!arg3_) ? NULL : ::app::Android::Base::Wrappers::IJWrapper::_GetJavaObject(arg3_));
    jobject _obArg4 = ((!arg4_) ? NULL : ::app::Android::Base::Wrappers::IJWrapper::_GetJavaObject(arg4_));
    CACHE_METHOD(::app::Android::android::app::Fragment__onCreateContextMenu_1480_ID,::app::Android::android::app::Fragment___javaClass_2,"onCreateContextMenu","(Landroid/view/ContextMenu;Landroid/view/View;Landroid/view/ContextMenu$ContextMenuInfo;)V",GetMethodID,"Id for fallback method android.app.Fragment.onCreateContextMenu could not be cached",83);
    if (arg0_) {
        U_JNIVAR->CallNonvirtualVoidMethod(arg1_, ::app::Android::android::app::Fragment___javaClass_2, ::app::Android::android::app::Fragment__onCreateContextMenu_1480_ID, _obArg2, _obArg3, _obArg4);
    }
    else
    {
        U_JNIVAR->CallVoidMethod(arg1_, ::app::Android::android::app::Fragment__onCreateContextMenu_1480_ID, _obArg2, _obArg3, _obArg4);
    }
    ::app::Android::Base::JNI__CheckException_1(NULL, U_JNIVAR);
}

::app::Android::java::lang::String* Fragment__toString(Fragment* __this)
{
    return ::uCast< ::app::Android::java::lang::String*>(Fragment__toString_IMPL_1417(NULL, __this->_subclassed, __this->_javaObject), ::app::Android::java::lang::String__typeof());
}

::uObject* Fragment__toString_IMPL_1417(::uStatic* __this, bool arg0_, jobject arg1_)
{
    INIT_JNI;
    CLASS_INIT(::app::Android::android::app::Fragment___javaClass_2,::app::Android::android::app::Fragment___Init_2(NULL));
    
    ::uObject* result;
    CACHE_METHOD(::app::Android::android::app::Fragment__toString_1417_ID,::app::Android::android::app::Fragment___javaClass_2,"toString","()Ljava/lang/String;",GetMethodID,"Id for fallback method android.app.Fragment.toString could not be cached",72);
    if (arg0_) {
        NEW_UNO(U_JNIVAR->CallNonvirtualObjectMethod(arg1_, ::app::Android::android::app::Fragment___javaClass_2, ::app::Android::android::app::Fragment__toString_1417_ID),result,::app::Android::java::lang::String__typeof(),::app::Android::java::lang::String*,false,true);
    }
    else
    {
        NEW_UNO(U_JNIVAR->CallObjectMethod(arg1_, ::app::Android::android::app::Fragment__toString_1417_ID),result,::app::Android::java::lang::String__typeof(),::app::Android::java::lang::String*,false,true);
    }
    ::app::Android::Base::JNI__CheckException_1(NULL, U_JNIVAR);
    return result;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\Android\0.13.2\Android\android\app\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

TaskStackBuilder__uType* TaskStackBuilder__typeof()
{
    static ::uStaticStrong<TaskStackBuilder__uType*> type;
    if (type != NULL) return type;

    type = (TaskStackBuilder__uType*)::uAllocClassType(sizeof(TaskStackBuilder__uType), "Android.android.app.TaskStackBuilder", false, 2, 0, 0);

    type->SetBaseType(::app::Android::java::lang::Object__typeof());

    type->SetInterfaces(
        ::app::Android::Base::Wrappers::IJWrapper__typeof(), offsetof(TaskStackBuilder__uType, __interface_0),
        ::app::Uno::IDisposable__typeof(), offsetof(TaskStackBuilder__uType, __interface_1));

    ::uRegisterType(type);
    return type;
}

}}}}
