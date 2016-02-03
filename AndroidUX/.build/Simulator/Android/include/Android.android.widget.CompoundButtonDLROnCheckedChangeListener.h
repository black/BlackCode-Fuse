// This file was generated based on 'C:\ProgramData\Uno\Packages\Android\0.19.1\Android\android\widget\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Android.Base.Wrappers.IJWrapper.h>
#include <Uno.Object.h>
namespace g{namespace Android{namespace android{namespace widget{struct CompoundButton;}}}}

namespace g{
namespace Android{
namespace android{
namespace widget{

// public abstract extern interface CompoundButtonDLROnCheckedChangeListener :28327
// {
uInterfaceType* CompoundButtonDLROnCheckedChangeListener_typeof();

struct CompoundButtonDLROnCheckedChangeListener
{
    void(*fp_onCheckedChanged)(uObject*, ::g::Android::android::widget::CompoundButton*, bool*);
    static void onCheckedChanged(const uInterface& __this, ::g::Android::android::widget::CompoundButton* arg0, bool arg1) { __this.VTable<CompoundButtonDLROnCheckedChangeListener>()->fp_onCheckedChanged(__this, arg0, &arg1); }
};
// }

}}}} // ::g::Android::android::widget
