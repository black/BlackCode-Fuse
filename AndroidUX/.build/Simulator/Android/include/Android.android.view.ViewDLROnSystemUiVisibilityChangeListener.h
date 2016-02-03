// This file was generated based on 'C:\ProgramData\Uno\Packages\Android\0.19.1\Android\android\view\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Android.Base.Wrappers.IJWrapper.h>
#include <Uno.Object.h>

namespace g{
namespace Android{
namespace android{
namespace view{

// public abstract extern interface ViewDLROnSystemUiVisibilityChangeListener :27298
// {
uInterfaceType* ViewDLROnSystemUiVisibilityChangeListener_typeof();

struct ViewDLROnSystemUiVisibilityChangeListener
{
    void(*fp_onSystemUiVisibilityChange)(uObject*, int*);
    static void onSystemUiVisibilityChange(const uInterface& __this, int arg0) { __this.VTable<ViewDLROnSystemUiVisibilityChangeListener>()->fp_onSystemUiVisibilityChange(__this, &arg0); }
};
// }

}}}} // ::g::Android::android::view
