// This file was generated based on 'C:\ProgramData\Uno\Packages\Android\0.13.2\Android\android\view\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_ANDROID_ANDROID_VIEW_ACTION_MODE_D_L_R_CALLBACK_H__
#define __APP_ANDROID_ANDROID_VIEW_ACTION_MODE_D_L_R_CALLBACK_H__

#include <app/Android.Base.Wrappers.IJWrapper.h>
#include <app/Uno.Object.h>
#include <Uno.h>
namespace app { namespace Android { namespace android { namespace view { struct ActionMode; } } } }

namespace app {
namespace Android {
namespace android {
namespace view {

::uInterfaceType* ActionModeDLRCallback__typeof();

struct ActionModeDLRCallback
{
    bool(*__fp_onActionItemClicked)(void*, ::app::Android::android::view::ActionMode*, ::uObject*);
    bool(*__fp_onCreateActionMode)(void*, ::app::Android::android::view::ActionMode*, ::uObject*);
    void(*__fp_onDestroyActionMode)(void*, ::app::Android::android::view::ActionMode*);
    bool(*__fp_onPrepareActionMode)(void*, ::app::Android::android::view::ActionMode*, ::uObject*);

    static bool onActionItemClicked(::uObject* __this, ::app::Android::android::view::ActionMode* arg0, ::uObject* arg1) { return ((ActionModeDLRCallback*)uGetInterfacePtr(__this, ActionModeDLRCallback__typeof()))->__fp_onActionItemClicked((::uByte*)__this + (__this->__obj_type->TypeType == uTypeTypeStruct ? sizeof(::uObject) : 0), arg0, arg1); }
    static bool onCreateActionMode(::uObject* __this, ::app::Android::android::view::ActionMode* arg0, ::uObject* arg1) { return ((ActionModeDLRCallback*)uGetInterfacePtr(__this, ActionModeDLRCallback__typeof()))->__fp_onCreateActionMode((::uByte*)__this + (__this->__obj_type->TypeType == uTypeTypeStruct ? sizeof(::uObject) : 0), arg0, arg1); }
    static void onDestroyActionMode(::uObject* __this, ::app::Android::android::view::ActionMode* arg0) { ((ActionModeDLRCallback*)uGetInterfacePtr(__this, ActionModeDLRCallback__typeof()))->__fp_onDestroyActionMode((::uByte*)__this + (__this->__obj_type->TypeType == uTypeTypeStruct ? sizeof(::uObject) : 0), arg0); }
    static bool onPrepareActionMode(::uObject* __this, ::app::Android::android::view::ActionMode* arg0, ::uObject* arg1) { return ((ActionModeDLRCallback*)uGetInterfacePtr(__this, ActionModeDLRCallback__typeof()))->__fp_onPrepareActionMode((::uByte*)__this + (__this->__obj_type->TypeType == uTypeTypeStruct ? sizeof(::uObject) : 0), arg0, arg1); }
};

}}}}


#endif
