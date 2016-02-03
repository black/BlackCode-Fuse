// This file was generated based on 'C:\ProgramData\Uno\Packages\Android\0.13.2\Android\android\widget\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_ANDROID_ANDROID_WIDGET_TEXT_VIEW_D_L_R_ON_EDITOR_ACTION_LISTENER_H__
#define __APP_ANDROID_ANDROID_WIDGET_TEXT_VIEW_D_L_R_ON_EDITOR_ACTION_LISTENER_H__

#include <app/Android.Base.Wrappers.IJWrapper.h>
#include <app/Uno.Object.h>
#include <Uno.h>
namespace app { namespace Android { namespace android { namespace view { struct KeyEvent; } } } }
namespace app { namespace Android { namespace android { namespace widget { struct TextView; } } } }

namespace app {
namespace Android {
namespace android {
namespace widget {

::uInterfaceType* TextViewDLROnEditorActionListener__typeof();

struct TextViewDLROnEditorActionListener
{
    bool(*__fp_onEditorAction)(void*, ::app::Android::android::widget::TextView*, int, ::app::Android::android::view::KeyEvent*);

    static bool onEditorAction(::uObject* __this, ::app::Android::android::widget::TextView* arg0, int arg1, ::app::Android::android::view::KeyEvent* arg2) { return ((TextViewDLROnEditorActionListener*)uGetInterfacePtr(__this, TextViewDLROnEditorActionListener__typeof()))->__fp_onEditorAction((::uByte*)__this + (__this->__obj_type->TypeType == uTypeTypeStruct ? sizeof(::uObject) : 0), arg0, arg1, arg2); }
};

}}}}


#endif
