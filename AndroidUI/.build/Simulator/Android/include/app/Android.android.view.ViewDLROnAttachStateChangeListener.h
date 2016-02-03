// This file was generated based on 'C:\ProgramData\Uno\Packages\Android\0.13.2\Android\android\view\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_ANDROID_ANDROID_VIEW_VIEW_D_L_R_ON_ATTACH_STATE_CHANGE_LISTENER_H__
#define __APP_ANDROID_ANDROID_VIEW_VIEW_D_L_R_ON_ATTACH_STATE_CHANGE_LISTENER_H__

#include <app/Android.Base.Wrappers.IJWrapper.h>
#include <app/Uno.Object.h>
#include <Uno.h>
namespace app { namespace Android { namespace android { namespace view { struct View; } } } }

namespace app {
namespace Android {
namespace android {
namespace view {

::uInterfaceType* ViewDLROnAttachStateChangeListener__typeof();

struct ViewDLROnAttachStateChangeListener
{
    void(*__fp_onViewAttachedToWindow)(void*, ::app::Android::android::view::View*);
    void(*__fp_onViewDetachedFromWindow)(void*, ::app::Android::android::view::View*);

    static void onViewAttachedToWindow(::uObject* __this, ::app::Android::android::view::View* arg0) { ((ViewDLROnAttachStateChangeListener*)uGetInterfacePtr(__this, ViewDLROnAttachStateChangeListener__typeof()))->__fp_onViewAttachedToWindow((::uByte*)__this + (__this->__obj_type->TypeType == uTypeTypeStruct ? sizeof(::uObject) : 0), arg0); }
    static void onViewDetachedFromWindow(::uObject* __this, ::app::Android::android::view::View* arg0) { ((ViewDLROnAttachStateChangeListener*)uGetInterfacePtr(__this, ViewDLROnAttachStateChangeListener__typeof()))->__fp_onViewDetachedFromWindow((::uByte*)__this + (__this->__obj_type->TypeType == uTypeTypeStruct ? sizeof(::uObject) : 0), arg0); }
};

}}}}


#endif
