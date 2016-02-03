// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Android.Views\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_FUSE_ANDROID_SWITCH_H__
#define __APP_FUSE_ANDROID_SWITCH_H__

#include <app/Fuse.Android.CompoundButton.h>
#include <app/Fuse.Scripting.INameScope.h>
#include <Uno.h>
namespace app { namespace Android { namespace android { namespace widget { struct CompoundButton; } } } }

namespace app {
namespace Fuse {
namespace Android {

struct Switch;

struct Switch__uType : ::app::Fuse::Android::CompoundButton__uType
{
};

Switch__uType* Switch__typeof();

void Switch___ObjInit_4(Switch* __this);
::app::Android::android::widget::CompoundButton* Switch__CreateCompoundButton(Switch* __this);
Switch* Switch__New_1(::uStatic* __this);

struct Switch : ::app::Fuse::Android::CompoundButton
{
    void _ObjInit_4() { Switch___ObjInit_4(this); }
};

}}}


#endif
