// This file was generated based on 'C:\ProgramData\Uno\Packages\Android\0.13.2\Android\android\app\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_ANDROID_ANDROID_APP_FRAGMENT_H__
#define __APP_ANDROID_ANDROID_APP_FRAGMENT_H__

#include <app/Android.android.view.ViewDLROnCreateContextMenuListener.h>
#include <app/Android.Base.Wrappers.IJWrapper.h>
#include <app/Android.java.lang.Object.h>
#include <app/Uno.IDisposable.h>
#include <jni.h>
#include <Uno.h>
namespace app { namespace Android { namespace android { namespace view { struct View; } } } }
namespace app { namespace Android { namespace java { namespace lang { struct String; } } } }

namespace app {
namespace Android {
namespace android {
namespace app {

struct Fragment;

extern jclass Fragment___javaClass_2;
extern jmethodID Fragment__equals_1415_ID;
extern jmethodID Fragment__hashCode_1416_ID;
extern jmethodID Fragment__onCreateContextMenu_1480_ID;
extern jmethodID Fragment__toString_1417_ID;

struct Fragment__uType : ::app::Android::java::lang::Object__uType
{
    ::app::Android::android::view::ViewDLROnCreateContextMenuListener __interface_2;
};

Fragment__uType* Fragment__typeof();

void Fragment___Init_2(::uStatic* __this);
bool Fragment__equals_1(Fragment* __this, ::app::Android::java::lang::Object* arg0);
bool Fragment__equals_IMPL_1415(::uStatic* __this, bool arg0_, jobject arg1_, ::uObject* arg2_);
int Fragment__hashCode_1(Fragment* __this);
int Fragment__hashCode_IMPL_1416(::uStatic* __this, bool arg0_, jobject arg1_);
void Fragment__onCreateContextMenu(Fragment* __this, ::uObject* arg0, ::app::Android::android::view::View* arg1, ::uObject* arg2);
void Fragment__onCreateContextMenu_IMPL_1480(::uStatic* __this, bool arg0_, jobject arg1_, ::uObject* arg2_, ::uObject* arg3_, ::uObject* arg4_);
::app::Android::java::lang::String* Fragment__toString(Fragment* __this);
::uObject* Fragment__toString_IMPL_1417(::uStatic* __this, bool arg0_, jobject arg1_);

struct Fragment : ::app::Android::java::lang::Object
{
    void onCreateContextMenu(::uObject* arg0, ::app::Android::android::view::View* arg1, ::uObject* arg2) { Fragment__onCreateContextMenu(this, arg0, arg1, arg2); }
};

}}}}


#endif
