// This file was generated based on 'C:\ProgramData\Uno\Packages\Android\0.13.2\Android\android\view\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_ANDROID_ANDROID_VIEW_VIEW_GROUP_D_L_R_ON_HIERARCHY_CHANGE_LISTENER_H__
#define __APP_ANDROID_ANDROID_VIEW_VIEW_GROUP_D_L_R_ON_HIERARCHY_CHANGE_LISTENER_H__

#include <app/Android.Base.Wrappers.IJWrapper.h>
#include <app/Uno.Object.h>
#include <Uno.h>
namespace app { namespace Android { namespace android { namespace view { struct View; } } } }

namespace app {
namespace Android {
namespace android {
namespace view {

::uInterfaceType* ViewGroupDLROnHierarchyChangeListener__typeof();

struct ViewGroupDLROnHierarchyChangeListener
{
    void(*__fp_onChildViewAdded)(void*, ::app::Android::android::view::View*, ::app::Android::android::view::View*);
    void(*__fp_onChildViewRemoved)(void*, ::app::Android::android::view::View*, ::app::Android::android::view::View*);

    static void onChildViewAdded(::uObject* __this, ::app::Android::android::view::View* arg0, ::app::Android::android::view::View* arg1) { ((ViewGroupDLROnHierarchyChangeListener*)uGetInterfacePtr(__this, ViewGroupDLROnHierarchyChangeListener__typeof()))->__fp_onChildViewAdded((::uByte*)__this + (__this->__obj_type->TypeType == uTypeTypeStruct ? sizeof(::uObject) : 0), arg0, arg1); }
    static void onChildViewRemoved(::uObject* __this, ::app::Android::android::view::View* arg0, ::app::Android::android::view::View* arg1) { ((ViewGroupDLROnHierarchyChangeListener*)uGetInterfacePtr(__this, ViewGroupDLROnHierarchyChangeListener__typeof()))->__fp_onChildViewRemoved((::uByte*)__this + (__this->__obj_type->TypeType == uTypeTypeStruct ? sizeof(::uObject) : 0), arg0, arg1); }
};

}}}}


#endif
