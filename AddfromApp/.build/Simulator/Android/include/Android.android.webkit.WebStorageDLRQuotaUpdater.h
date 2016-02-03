// This file was generated based on 'C:\ProgramData\Uno\Packages\Android\0.20.2\Android\android\webkit\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Android.Base.Wrappers.IJWrapper.h>
#include <Uno.Object.h>

namespace g{
namespace Android{
namespace android{
namespace webkit{

// public abstract extern interface WebStorageDLRQuotaUpdater :5329
// {
uInterfaceType* WebStorageDLRQuotaUpdater_typeof();

struct WebStorageDLRQuotaUpdater
{
    void(*fp_updateQuota)(uObject*, int64_t*);
    static void updateQuota(const uInterface& __this, int64_t arg0) { __this.VTable<WebStorageDLRQuotaUpdater>()->fp_updateQuota(__this, &arg0); }
};
// }

}}}} // ::g::Android::android::webkit
