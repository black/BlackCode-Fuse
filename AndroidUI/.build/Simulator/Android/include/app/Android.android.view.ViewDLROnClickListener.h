// This file was generated based on 'C:\ProgramData\Uno\Packages\Android\0.13.2\Android\android\view\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_ANDROID_ANDROID_VIEW_VIEW_D_L_R_ON_CLICK_LISTENER_H__
#define __APP_ANDROID_ANDROID_VIEW_VIEW_D_L_R_ON_CLICK_LISTENER_H__

#include <app/Android.Base.Wrappers.IJWrapper.h>
#include <app/Uno.Object.h>
#include <Uno.h>
namespace app { namespace Android { namespace android { namespace view { struct View; } } } }

namespace app {
namespace Android {
namespace android {
namespace view {

::uInterfaceType* ViewDLROnClickListener__typeof();

struct ViewDLROnClickListener
{
    void(*__fp_onClick)(void*, ::app::Android::android::view::View*);

    static void onClick(::uObject* __this, ::app::Android::android::view::View* arg0) { ((ViewDLROnClickListener*)uGetInterfacePtr(__this, ViewDLROnClickListener__typeof()))->__fp_onClick((::uByte*)__this + (__this->__obj_type->TypeType == uTypeTypeStruct ? sizeof(::uObject) : 0), arg0); }
};

}}}}


#endif
