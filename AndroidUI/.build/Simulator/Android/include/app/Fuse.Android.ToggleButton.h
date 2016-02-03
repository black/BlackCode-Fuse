// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Android.Views\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_FUSE_ANDROID_TOGGLE_BUTTON_H__
#define __APP_FUSE_ANDROID_TOGGLE_BUTTON_H__

#include <app/Fuse.Android.CompoundButton.h>
#include <app/Fuse.Scripting.INameScope.h>
#include <Uno.h>
namespace app { namespace Android { namespace android { namespace widget { struct CompoundButton; } } } }

namespace app {
namespace Fuse {
namespace Android {

struct ToggleButton;

struct ToggleButton__uType : ::app::Fuse::Android::CompoundButton__uType
{
};

ToggleButton__uType* ToggleButton__typeof();

void ToggleButton___ObjInit_4(ToggleButton* __this);
::app::Android::android::widget::CompoundButton* ToggleButton__CreateCompoundButton(ToggleButton* __this);
ToggleButton* ToggleButton__New_1(::uStatic* __this);

struct ToggleButton : ::app::Fuse::Android::CompoundButton
{
    void _ObjInit_4() { ToggleButton___ObjInit_4(this); }
};

}}}


#endif
