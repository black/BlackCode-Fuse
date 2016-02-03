// This file was generated based on 'C:\ProgramData\Uno\Packages\Android\0.13.2\Android\android\os\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_ANDROID_ANDROID_OS_I_BINDER_D_L_R_DEATH_RECIPIENT_H__
#define __APP_ANDROID_ANDROID_OS_I_BINDER_D_L_R_DEATH_RECIPIENT_H__

#include <app/Android.Base.Wrappers.IJWrapper.h>
#include <app/Uno.Object.h>
#include <Uno.h>

namespace app {
namespace Android {
namespace android {
namespace os {

::uInterfaceType* IBinderDLRDeathRecipient__typeof();

struct IBinderDLRDeathRecipient
{
    void(*__fp_binderDied)(void*);

    static void binderDied(::uObject* __this) { ((IBinderDLRDeathRecipient*)uGetInterfacePtr(__this, IBinderDLRDeathRecipient__typeof()))->__fp_binderDied((::uByte*)__this + (__this->__obj_type->TypeType == uTypeTypeStruct ? sizeof(::uObject) : 0)); }
};

}}}}


#endif
