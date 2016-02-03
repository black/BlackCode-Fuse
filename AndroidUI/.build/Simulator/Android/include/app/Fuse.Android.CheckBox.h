// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Android.Views\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_FUSE_ANDROID_CHECK_BOX_H__
#define __APP_FUSE_ANDROID_CHECK_BOX_H__

#include <app/Fuse.Android.CompoundButton.h>
#include <app/Fuse.Scripting.INameScope.h>
#include <Uno.h>
namespace app { namespace Android { namespace android { namespace widget { struct CompoundButton; } } } }

namespace app {
namespace Fuse {
namespace Android {

struct CheckBox;

struct CheckBox__uType : ::app::Fuse::Android::CompoundButton__uType
{
};

CheckBox__uType* CheckBox__typeof();

void CheckBox___ObjInit_4(CheckBox* __this);
::app::Android::android::widget::CompoundButton* CheckBox__CreateCompoundButton(CheckBox* __this);
CheckBox* CheckBox__New_1(::uStatic* __this);

struct CheckBox : ::app::Fuse::Android::CompoundButton
{
    void _ObjInit_4() { CheckBox___ObjInit_4(this); }
};

}}}


#endif
