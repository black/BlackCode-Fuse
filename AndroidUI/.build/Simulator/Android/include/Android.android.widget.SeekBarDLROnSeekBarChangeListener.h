// This file was generated based on 'C:\ProgramData\Uno\Packages\Android\0.19.1\Android\android\widget\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Android.Base.Wrappers.IJWrapper.h>
#include <Uno.Object.h>
namespace g{namespace Android{namespace android{namespace widget{struct SeekBar;}}}}

namespace g{
namespace Android{
namespace android{
namespace widget{

// public abstract extern interface SeekBarDLROnSeekBarChangeListener :28740
// {
uInterfaceType* SeekBarDLROnSeekBarChangeListener_typeof();

struct SeekBarDLROnSeekBarChangeListener
{
    void(*fp_onProgressChanged)(uObject*, ::g::Android::android::widget::SeekBar*, int*, bool*);
    void(*fp_onStartTrackingTouch)(uObject*, ::g::Android::android::widget::SeekBar*);
    void(*fp_onStopTrackingTouch)(uObject*, ::g::Android::android::widget::SeekBar*);
    static void onProgressChanged(const uInterface& __this, ::g::Android::android::widget::SeekBar* arg0, int arg1, bool arg2) { __this.VTable<SeekBarDLROnSeekBarChangeListener>()->fp_onProgressChanged(__this, arg0, &arg1, &arg2); }
    static void onStartTrackingTouch(const uInterface& __this, ::g::Android::android::widget::SeekBar* arg0) { __this.VTable<SeekBarDLROnSeekBarChangeListener>()->fp_onStartTrackingTouch(__this, arg0); }
    static void onStopTrackingTouch(const uInterface& __this, ::g::Android::android::widget::SeekBar* arg0) { __this.VTable<SeekBarDLROnSeekBarChangeListener>()->fp_onStopTrackingTouch(__this, arg0); }
};
// }

}}}} // ::g::Android::android::widget
