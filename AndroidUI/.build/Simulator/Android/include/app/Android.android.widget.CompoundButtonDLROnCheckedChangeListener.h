// This file was generated based on 'C:\ProgramData\Uno\Packages\Android\0.13.2\Android\android\widget\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_ANDROID_ANDROID_WIDGET_COMPOUND_BUTTON_D_L_R_ON_CHECKED_CHANGE_LISTENER_H__
#define __APP_ANDROID_ANDROID_WIDGET_COMPOUND_BUTTON_D_L_R_ON_CHECKED_CHANGE_LISTENER_H__

#include <app/Android.Base.Wrappers.IJWrapper.h>
#include <app/Uno.Object.h>
#include <Uno.h>
namespace app { namespace Android { namespace android { namespace widget { struct CompoundButton; } } } }

namespace app {
namespace Android {
namespace android {
namespace widget {

::uInterfaceType* CompoundButtonDLROnCheckedChangeListener__typeof();

struct CompoundButtonDLROnCheckedChangeListener
{
    void(*__fp_onCheckedChanged)(void*, ::app::Android::android::widget::CompoundButton*, bool);

    static void onCheckedChanged(::uObject* __this, ::app::Android::android::widget::CompoundButton* arg0, bool arg1) { ((CompoundButtonDLROnCheckedChangeListener*)uGetInterfacePtr(__this, CompoundButtonDLROnCheckedChangeListener__typeof()))->__fp_onCheckedChanged((::uByte*)__this + (__this->__obj_type->TypeType == uTypeTypeStruct ? sizeof(::uObject) : 0), arg0, arg1); }
};

}}}}


#endif
