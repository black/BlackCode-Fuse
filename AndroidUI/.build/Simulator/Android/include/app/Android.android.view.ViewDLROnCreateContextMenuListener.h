// This file was generated based on 'C:\ProgramData\Uno\Packages\Android\0.13.2\Android\android\view\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_ANDROID_ANDROID_VIEW_VIEW_D_L_R_ON_CREATE_CONTEXT_MENU_LISTENER_H__
#define __APP_ANDROID_ANDROID_VIEW_VIEW_D_L_R_ON_CREATE_CONTEXT_MENU_LISTENER_H__

#include <app/Android.Base.Wrappers.IJWrapper.h>
#include <app/Uno.Object.h>
#include <Uno.h>
namespace app { namespace Android { namespace android { namespace view { struct View; } } } }

namespace app {
namespace Android {
namespace android {
namespace view {

::uInterfaceType* ViewDLROnCreateContextMenuListener__typeof();

struct ViewDLROnCreateContextMenuListener
{
    void(*__fp_onCreateContextMenu)(void*, ::uObject*, ::app::Android::android::view::View*, ::uObject*);

    static void onCreateContextMenu(::uObject* __this, ::uObject* arg0, ::app::Android::android::view::View* arg1, ::uObject* arg2) { ((ViewDLROnCreateContextMenuListener*)uGetInterfacePtr(__this, ViewDLROnCreateContextMenuListener__typeof()))->__fp_onCreateContextMenu((::uByte*)__this + (__this->__obj_type->TypeType == uTypeTypeStruct ? sizeof(::uObject) : 0), arg0, arg1, arg2); }
};

}}}}


#endif
