// This file was generated based on 'C:\ProgramData\Uno\Packages\Android\0.13.2\Android\android\app\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_ANDROID_ANDROID_APP_ACTIVITY_H__
#define __APP_ANDROID_ANDROID_APP_ACTIVITY_H__

#include <app/Android.android.view.ContextThemeWrapper.h>
#include <app/Android.android.view.ViewDLROnCreateContextMenuListener.h>
#include <app/Android.Base.Wrappers.IJWrapper.h>
#include <app/Uno.IDisposable.h>
#include <jni.h>
#include <Uno.h>
namespace app { namespace Android { namespace android { namespace content { struct Intent; } } } }
namespace app { namespace Android { namespace android { namespace view { struct View; } } } }
namespace app { namespace Android { namespace java { namespace lang { struct Object; } } } }
namespace app { namespace Android { namespace java { namespace lang { struct String; } } } }

namespace app {
namespace Android {
namespace android {
namespace app {

struct Activity;

extern jclass Activity___javaClass_5;
extern jmethodID Activity__getSystemService_847_ID;
extern jmethodID Activity__onCreateContextMenu_775_ID;
extern jmethodID Activity__runOnUiThread_862_ID;
extern jmethodID Activity__startActivity_806_ID;

struct Activity__uType : ::app::Android::android::view::ContextThemeWrapper__uType
{
    ::app::Android::android::view::ViewDLROnCreateContextMenuListener __interface_2;
};

Activity__uType* Activity__typeof();

void Activity___Init_5(::uStatic* __this);
void Activity___ObjInit_12(Activity* __this, jobject obj, ::uType* utype, bool hasFallbackClass, bool resolveType);
Activity* Activity__GetAppActivity(::uStatic* __this);
::app::Android::java::lang::Object* Activity__getSystemService(Activity* __this, ::app::Android::java::lang::String* arg0);
::uObject* Activity__getSystemService_IMPL_847(::uStatic* __this, bool arg0_, jobject arg1_, ::uObject* arg2_);
Activity* Activity__New_11(::uStatic* __this, jobject obj, ::uType* utype, bool hasFallbackClass, bool resolveType);
void Activity__onCreateContextMenu(Activity* __this, ::uObject* arg0, ::app::Android::android::view::View* arg1, ::uObject* arg2);
void Activity__onCreateContextMenu_IMPL_775(::uStatic* __this, bool arg0_, jobject arg1_, ::uObject* arg2_, ::uObject* arg3_, ::uObject* arg4_);
void Activity__runOnUiThread(Activity* __this, ::uObject* arg0);
void Activity__runOnUiThread_IMPL_862(::uStatic* __this, bool arg0_, jobject arg1_, ::uObject* arg2_);
void Activity__startActivity(Activity* __this, ::app::Android::android::content::Intent* arg0);
void Activity__startActivity_IMPL_806(::uStatic* __this, bool arg0_, jobject arg1_, ::uObject* arg2_);

struct Activity : ::app::Android::android::view::ContextThemeWrapper
{
    void _ObjInit_12(jobject obj, ::uType* utype, bool hasFallbackClass, bool resolveType) { Activity___ObjInit_12(this, obj, utype, hasFallbackClass, resolveType); }
    void onCreateContextMenu(::uObject* arg0, ::app::Android::android::view::View* arg1, ::uObject* arg2) { Activity__onCreateContextMenu(this, arg0, arg1, arg2); }
    void runOnUiThread(::uObject* arg0) { Activity__runOnUiThread(this, arg0); }
    void startActivity(::app::Android::android::content::Intent* arg0) { Activity__startActivity(this, arg0); }
};

}}}}


#endif
