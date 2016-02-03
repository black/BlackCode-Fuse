// This file was generated based on 'C:\ProgramData\Uno\Packages\Android\0.20.2\Android\android\os\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Android.Base.Wrappers.IJWrapper.h>
#include <Uno.Object.h>

namespace g{
namespace Android{
namespace android{
namespace os{

// public abstract extern interface IBinderDLRDeathRecipient :11301
// {
uInterfaceType* IBinderDLRDeathRecipient_typeof();

struct IBinderDLRDeathRecipient
{
    void(*fp_binderDied)(uObject*);
    static void binderDied(const uInterface& __this) { __this.VTable<IBinderDLRDeathRecipient>()->fp_binderDied(__this); }
};
// }

}}}} // ::g::Android::android::os
