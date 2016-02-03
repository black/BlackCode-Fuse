// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Android.Views\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_FUSE_ANDROID_COMPOUND_BUTTON_LISTENER_H__
#define __APP_FUSE_ANDROID_COMPOUND_BUTTON_LISTENER_H__

#include <app/Android.android.widget.CompoundButtonDLROnCheckedChangeListener.h>
#include <app/Android.Base.Wrappers.IJWrapper.h>
#include <app/Android.java.lang.Object.h>
#include <app/Uno.IDisposable.h>
#include <jni.h>
#include <Uno.h>
namespace app { namespace Android { namespace android { namespace widget { struct CompoundButton; } } } }
namespace app { namespace Fuse { namespace Android { struct CompoundButton; } } }

namespace app {
namespace Fuse {
namespace Android {

struct CompoundButton_Listener;

extern jclass CompoundButton_Listener___javaClass_2;

struct CompoundButton_Listener__uType : ::app::Android::java::lang::Object__uType
{
    ::app::Android::android::widget::CompoundButtonDLROnCheckedChangeListener __interface_2;
};

CompoundButton_Listener__uType* CompoundButton_Listener__typeof();

void CompoundButton_Listener___ObjInit_4(CompoundButton_Listener* __this, ::app::Fuse::Android::CompoundButton* s);
CompoundButton_Listener* CompoundButton_Listener__New_5(::uStatic* __this, ::app::Fuse::Android::CompoundButton* s);
void CompoundButton_Listener__onCheckedChanged(CompoundButton_Listener* __this, ::app::Android::android::widget::CompoundButton* buttonView, bool isChecked);

struct CompoundButton_Listener : ::app::Android::java::lang::Object
{
    ::uStrong< ::app::Fuse::Android::CompoundButton*> _s;

    void _ObjInit_4(::app::Fuse::Android::CompoundButton* s) { CompoundButton_Listener___ObjInit_4(this, s); }
    void onCheckedChanged(::app::Android::android::widget::CompoundButton* buttonView, bool isChecked) { CompoundButton_Listener__onCheckedChanged(this, buttonView, isChecked); }
};

}}}


#endif
