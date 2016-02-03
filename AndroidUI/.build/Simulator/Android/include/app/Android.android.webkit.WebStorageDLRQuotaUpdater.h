// This file was generated based on 'C:\ProgramData\Uno\Packages\Android\0.13.2\Android\android\webkit\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_ANDROID_ANDROID_WEBKIT_WEB_STORAGE_D_L_R_QUOTA_UPDATER_H__
#define __APP_ANDROID_ANDROID_WEBKIT_WEB_STORAGE_D_L_R_QUOTA_UPDATER_H__

#include <app/Android.Base.Wrappers.IJWrapper.h>
#include <app/Uno.Object.h>
#include <Uno.h>

namespace app {
namespace Android {
namespace android {
namespace webkit {

::uInterfaceType* WebStorageDLRQuotaUpdater__typeof();

struct WebStorageDLRQuotaUpdater
{
    void(*__fp_updateQuota)(void*, ::uLong);

    static void updateQuota(::uObject* __this, ::uLong arg0) { ((WebStorageDLRQuotaUpdater*)uGetInterfacePtr(__this, WebStorageDLRQuotaUpdater__typeof()))->__fp_updateQuota((::uByte*)__this + (__this->__obj_type->TypeType == uTypeTypeStruct ? sizeof(::uObject) : 0), arg0); }
};

}}}}


#endif
