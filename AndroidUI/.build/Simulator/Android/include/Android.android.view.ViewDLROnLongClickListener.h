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

// public abstract extern interface ViewDLROnLongClickListener :27282
// {
uInterfaceType* ViewDLROnLongClickListener_typeof();

struct ViewDLROnLongClickListener
{
    void(*fp_onLongClick)(uObject*, ::g::Android::android::view::View*, bool*);
    static bool onLongClick(const uInterface& __this, ::g::Android::android::view::View* arg0) { bool __retval; return __this.VTable<ViewDLROnLongClickListener>()->fp_onLongClick(__this, arg0, &__retval), __retval; }
};
// }

}}}} // ::g::Android::android::view
