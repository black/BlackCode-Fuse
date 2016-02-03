// This file was generated based on 'C:\ProgramData\Uno\Packages\Android\0.13.2\Android\android\view\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_ANDROID_ANDROID_VIEW_VIEW_D_L_R_ON_FOCUS_CHANGE_LISTENER_H__
#define __APP_ANDROID_ANDROID_VIEW_VIEW_D_L_R_ON_FOCUS_CHANGE_LISTENER_H__

#include <app/Android.Base.Wrappers.IJWrapper.h>
#include <app/Uno.Object.h>
#include <Uno.h>
namespace app { namespace Android { namespace android { namespace view { struct View; } } } }

namespace app {
namespace Android {
namespace android {
namespace view {

::uInterfaceType* ViewDLROnFocusChangeListener__typeof();

struct ViewDLROnFocusChangeListener
{
    void(*__fp_onFocusChange)(void*, ::app::Android::android::view::View*, bool);

    static void onFocusChange(::uObject* __this, ::app::Android::android::view::View* arg0, bool arg1) { ((ViewDLROnFocusChangeListener*)uGetInterfacePtr(__this, ViewDLROnFocusChangeListener__typeof()))->__fp_onFocusChange((::uByte*)__this + (__this->__obj_type->TypeType == uTypeTypeStruct ? sizeof(::uObject) : 0), arg0, arg1); }
};

}}}}


#endif
