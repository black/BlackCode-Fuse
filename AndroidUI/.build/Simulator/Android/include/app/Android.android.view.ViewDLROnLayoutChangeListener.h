// This file was generated based on 'C:\ProgramData\Uno\Packages\Android\0.13.2\Android\android\view\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_ANDROID_ANDROID_VIEW_VIEW_D_L_R_ON_LAYOUT_CHANGE_LISTENER_H__
#define __APP_ANDROID_ANDROID_VIEW_VIEW_D_L_R_ON_LAYOUT_CHANGE_LISTENER_H__

#include <app/Android.Base.Wrappers.IJWrapper.h>
#include <app/Uno.Object.h>
#include <Uno.h>
namespace app { namespace Android { namespace android { namespace view { struct View; } } } }

namespace app {
namespace Android {
namespace android {
namespace view {

::uInterfaceType* ViewDLROnLayoutChangeListener__typeof();

struct ViewDLROnLayoutChangeListener
{
    void(*__fp_onLayoutChange)(void*, ::app::Android::android::view::View*, int, int, int, int, int, int, int, int);

    static void onLayoutChange(::uObject* __this, ::app::Android::android::view::View* arg0, int arg1, int arg2, int arg3, int arg4, int arg5, int arg6, int arg7, int arg8) { ((ViewDLROnLayoutChangeListener*)uGetInterfacePtr(__this, ViewDLROnLayoutChangeListener__typeof()))->__fp_onLayoutChange((::uByte*)__this + (__this->__obj_type->TypeType == uTypeTypeStruct ? sizeof(::uObject) : 0), arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7, arg8); }
};

}}}}


#endif
