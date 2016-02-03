// This file was generated based on 'C:\ProgramData\Uno\Packages\Android\0.13.2\Android\android\view\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_ANDROID_ANDROID_VIEW_VIEW_D_L_R_ON_SYSTEM_UI_VISIBILITY_CHANGE_LISTENER_H__
#define __APP_ANDROID_ANDROID_VIEW_VIEW_D_L_R_ON_SYSTEM_UI_VISIBILITY_CHANGE_LISTENER_H__

#include <app/Android.Base.Wrappers.IJWrapper.h>
#include <app/Uno.Object.h>
#include <Uno.h>

namespace app {
namespace Android {
namespace android {
namespace view {

::uInterfaceType* ViewDLROnSystemUiVisibilityChangeListener__typeof();

struct ViewDLROnSystemUiVisibilityChangeListener
{
    void(*__fp_onSystemUiVisibilityChange)(void*, int);

    static void onSystemUiVisibilityChange(::uObject* __this, int arg0) { ((ViewDLROnSystemUiVisibilityChangeListener*)uGetInterfacePtr(__this, ViewDLROnSystemUiVisibilityChangeListener__typeof()))->__fp_onSystemUiVisibilityChange((::uByte*)__this + (__this->__obj_type->TypeType == uTypeTypeStruct ? sizeof(::uObject) : 0), arg0); }
};

}}}}


#endif
