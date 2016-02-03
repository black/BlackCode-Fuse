// This file was generated based on 'C:\ProgramData\Uno\Packages\Android\0.13.2\Android\android\view\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_ANDROID_ANDROID_VIEW_VIEW_D_L_R_ON_KEY_LISTENER_H__
#define __APP_ANDROID_ANDROID_VIEW_VIEW_D_L_R_ON_KEY_LISTENER_H__

#include <app/Android.Base.Wrappers.IJWrapper.h>
#include <app/Uno.Object.h>
#include <Uno.h>
namespace app { namespace Android { namespace android { namespace view { struct KeyEvent; } } } }
namespace app { namespace Android { namespace android { namespace view { struct View; } } } }

namespace app {
namespace Android {
namespace android {
namespace view {

::uInterfaceType* ViewDLROnKeyListener__typeof();

struct ViewDLROnKeyListener
{
    bool(*__fp_onKey)(void*, ::app::Android::android::view::View*, int, ::app::Android::android::view::KeyEvent*);

    static bool onKey(::uObject* __this, ::app::Android::android::view::View* arg0, int arg1, ::app::Android::android::view::KeyEvent* arg2) { return ((ViewDLROnKeyListener*)uGetInterfacePtr(__this, ViewDLROnKeyListener__typeof()))->__fp_onKey((::uByte*)__this + (__this->__obj_type->TypeType == uTypeTypeStruct ? sizeof(::uObject) : 0), arg0, arg1, arg2); }
};

}}}}


#endif
