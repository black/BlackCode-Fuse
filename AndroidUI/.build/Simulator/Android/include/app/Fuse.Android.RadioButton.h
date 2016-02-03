// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Android.Views\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_FUSE_ANDROID_RADIO_BUTTON_H__
#define __APP_FUSE_ANDROID_RADIO_BUTTON_H__

#include <app/Fuse.Android.CompoundButton.h>
#include <app/Fuse.Scripting.INameScope.h>
#include <Uno.h>
namespace app { namespace Android { namespace android { namespace widget { struct CompoundButton; } } } }

namespace app {
namespace Fuse {
namespace Android {

struct RadioButton;

struct RadioButton__uType : ::app::Fuse::Android::CompoundButton__uType
{
};

RadioButton__uType* RadioButton__typeof();

void RadioButton___ObjInit_4(RadioButton* __this);
::app::Android::android::widget::CompoundButton* RadioButton__CreateCompoundButton(RadioButton* __this);
RadioButton* RadioButton__New_1(::uStatic* __this);

struct RadioButton : ::app::Fuse::Android::CompoundButton
{
    void _ObjInit_4() { RadioButton___ObjInit_4(this); }
};

}}}


#endif
