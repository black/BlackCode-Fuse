// This file was generated based on 'C:\ProgramData\Uno\Packages\Android\0.19.1\Android\android\view\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Android.Base.Wrappers.IJWrapper.h>
#include <Uno.Object.h>
namespace g{namespace Android{namespace android{namespace view{struct View;}}}}

namespace g{
namespace Android{
namespace android{
namespace view{

// public abstract extern interface ViewDLROnAttachStateChangeListener :27152
// {
uInterfaceType* ViewDLROnAttachStateChangeListener_typeof();

struct ViewDLROnAttachStateChangeListener
{
    void(*fp_onViewAttachedToWindow)(uObject*, ::g::Android::android::view::View*);
    void(*fp_onViewDetachedFromWindow)(uObject*, ::g::Android::android::view::View*);
    static void onViewAttachedToWindow(const uInterface& __this, ::g::Android::android::view::View* arg0) { __this.VTable<ViewDLROnAttachStateChangeListener>()->fp_onViewAttachedToWindow(__this, arg0); }
    static void onViewDetachedFromWindow(const uInterface& __this, ::g::Android::android::view::View* arg0) { __this.VTable<ViewDLROnAttachStateChangeListener>()->fp_onViewDetachedFromWindow(__this, arg0); }
};
// }

}}}} // ::g::Android::android::view
