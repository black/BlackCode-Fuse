// This file was generated based on 'C:\ProgramData\Uno\Packages\Android\0.13.2\Android\android\widget\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_ANDROID_ANDROID_WIDGET_SEEK_BAR_D_L_R_ON_SEEK_BAR_CHANGE_LISTENER_H__
#define __APP_ANDROID_ANDROID_WIDGET_SEEK_BAR_D_L_R_ON_SEEK_BAR_CHANGE_LISTENER_H__

#include <app/Android.Base.Wrappers.IJWrapper.h>
#include <app/Uno.Object.h>
#include <Uno.h>
namespace app { namespace Android { namespace android { namespace widget { struct SeekBar; } } } }

namespace app {
namespace Android {
namespace android {
namespace widget {

::uInterfaceType* SeekBarDLROnSeekBarChangeListener__typeof();

struct SeekBarDLROnSeekBarChangeListener
{
    void(*__fp_onProgressChanged)(void*, ::app::Android::android::widget::SeekBar*, int, bool);
    void(*__fp_onStartTrackingTouch)(void*, ::app::Android::android::widget::SeekBar*);
    void(*__fp_onStopTrackingTouch)(void*, ::app::Android::android::widget::SeekBar*);

    static void onProgressChanged(::uObject* __this, ::app::Android::android::widget::SeekBar* arg0, int arg1, bool arg2) { ((SeekBarDLROnSeekBarChangeListener*)uGetInterfacePtr(__this, SeekBarDLROnSeekBarChangeListener__typeof()))->__fp_onProgressChanged((::uByte*)__this + (__this->__obj_type->TypeType == uTypeTypeStruct ? sizeof(::uObject) : 0), arg0, arg1, arg2); }
    static void onStartTrackingTouch(::uObject* __this, ::app::Android::android::widget::SeekBar* arg0) { ((SeekBarDLROnSeekBarChangeListener*)uGetInterfacePtr(__this, SeekBarDLROnSeekBarChangeListener__typeof()))->__fp_onStartTrackingTouch((::uByte*)__this + (__this->__obj_type->TypeType == uTypeTypeStruct ? sizeof(::uObject) : 0), arg0); }
    static void onStopTrackingTouch(::uObject* __this, ::app::Android::android::widget::SeekBar* arg0) { ((SeekBarDLROnSeekBarChangeListener*)uGetInterfacePtr(__this, SeekBarDLROnSeekBarChangeListener__typeof()))->__fp_onStopTrackingTouch((::uByte*)__this + (__this->__obj_type->TypeType == uTypeTypeStruct ? sizeof(::uObject) : 0), arg0); }
};

}}}}


#endif
