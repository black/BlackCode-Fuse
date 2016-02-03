// This file was generated based on 'C:\ProgramData\Uno\Packages\Android\0.13.2\Android\android\view\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_ANDROID_ANDROID_VIEW_VIEW_D_L_R_ON_GENERIC_MOTION_LISTENER_H__
#define __APP_ANDROID_ANDROID_VIEW_VIEW_D_L_R_ON_GENERIC_MOTION_LISTENER_H__

#include <app/Android.Base.Wrappers.IJWrapper.h>
#include <app/Uno.Object.h>
#include <Uno.h>
namespace app { namespace Android { namespace android { namespace view { struct MotionEvent; } } } }
namespace app { namespace Android { namespace android { namespace view { struct View; } } } }

namespace app {
namespace Android {
namespace android {
namespace view {

::uInterfaceType* ViewDLROnGenericMotionListener__typeof();

struct ViewDLROnGenericMotionListener
{
    bool(*__fp_onGenericMotion)(void*, ::app::Android::android::view::View*, ::app::Android::android::view::MotionEvent*);

    static bool onGenericMotion(::uObject* __this, ::app::Android::android::view::View* arg0, ::app::Android::android::view::MotionEvent* arg1) { return ((ViewDLROnGenericMotionListener*)uGetInterfacePtr(__this, ViewDLROnGenericMotionListener__typeof()))->__fp_onGenericMotion((::uByte*)__this + (__this->__obj_type->TypeType == uTypeTypeStruct ? sizeof(::uObject) : 0), arg0, arg1); }
};

}}}}


#endif
