// This file was generated based on 'C:\ProgramData\Uno\Packages\Android\0.20.2\Android\Fallbacks\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Android.android.webkit.WebStorageDLRQuotaUpdater.h>
#include <Android.Base.Wrappers.IJWrapper.h>
#include <Android.java.lang.Object.h>
#include <jni.h>
#include <Uno.IDisposable.h>
namespace g{namespace Android{namespace Fallbacks{struct Android_android_webkit_WebStorageDLRQuotaUpdater;}}}

namespace g{
namespace Android{
namespace Fallbacks{

// public sealed extern class Android_android_webkit_WebStorageDLRQuotaUpdater :29690
// {
struct Android_android_webkit_WebStorageDLRQuotaUpdater_type : ::g::Android::java::lang::Object_type
{
    ::g::Android::android::webkit::WebStorageDLRQuotaUpdater interface2;
};

Android_android_webkit_WebStorageDLRQuotaUpdater_type* Android_android_webkit_WebStorageDLRQuotaUpdater_typeof();
void Android_android_webkit_WebStorageDLRQuotaUpdater__updateQuota_fn(Android_android_webkit_WebStorageDLRQuotaUpdater* __this, int64_t* arg0);
void Android_android_webkit_WebStorageDLRQuotaUpdater__updateQuota_IMPL_24174_fn(bool* arg0_, jobject* arg1_, int64_t* arg2_);

struct Android_android_webkit_WebStorageDLRQuotaUpdater : ::g::Android::java::lang::Object
{
    static jmethodID updateQuota_24174_ID_;
    static jmethodID& updateQuota_24174_ID() { return updateQuota_24174_ID_; }

    void updateQuota(int64_t arg0);
    static void updateQuota_IMPL_24174(bool arg0_, jobject arg1_, int64_t arg2_);
};
// }

}}} // ::g::Android::Fallbacks
