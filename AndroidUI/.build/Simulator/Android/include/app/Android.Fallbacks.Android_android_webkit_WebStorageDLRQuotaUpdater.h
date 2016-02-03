// This file was generated based on 'C:\ProgramData\Uno\Packages\Android\0.13.2\Android\Fallbacks\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_ANDROID_FALLBACKS_ANDROID_ANDROID_WEBKIT_WEB_STORAGE_D_L_R_QUOTA_UPDATER_H__
#define __APP_ANDROID_FALLBACKS_ANDROID_ANDROID_WEBKIT_WEB_STORAGE_D_L_R_QUOTA_UPDATER_H__

#include <app/Android.android.webkit.WebStorageDLRQuotaUpdater.h>
#include <app/Android.Base.Wrappers.IJWrapper.h>
#include <app/Android.java.lang.Object.h>
#include <app/Uno.IDisposable.h>
#include <jni.h>
#include <Uno.h>

namespace app {
namespace Android {
namespace Fallbacks {

struct Android_android_webkit_WebStorageDLRQuotaUpdater;

extern jmethodID Android_android_webkit_WebStorageDLRQuotaUpdater__updateQuota_24174_ID;

struct Android_android_webkit_WebStorageDLRQuotaUpdater__uType : ::app::Android::java::lang::Object__uType
{
    ::app::Android::android::webkit::WebStorageDLRQuotaUpdater __interface_2;
};

Android_android_webkit_WebStorageDLRQuotaUpdater__uType* Android_android_webkit_WebStorageDLRQuotaUpdater__typeof();

void Android_android_webkit_WebStorageDLRQuotaUpdater__updateQuota(Android_android_webkit_WebStorageDLRQuotaUpdater* __this, ::uLong arg0);
void Android_android_webkit_WebStorageDLRQuotaUpdater__updateQuota_IMPL_24174(::uStatic* __this, bool arg0_, jobject arg1_, ::uLong arg2_);

struct Android_android_webkit_WebStorageDLRQuotaUpdater : ::app::Android::java::lang::Object
{
    void updateQuota(::uLong arg0) { Android_android_webkit_WebStorageDLRQuotaUpdater__updateQuota(this, arg0); }
};

}}}


#endif
