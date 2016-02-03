// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Android.Views\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_FUSE_ANDROID_TEXT_VIEW_H__
#define __APP_FUSE_ANDROID_TEXT_VIEW_H__

#include <app/Fuse.Android.TextViewBase__Fuse_Controls_TextControl.h>
#include <app/Fuse.Scripting.INameScope.h>
#include <Uno.h>
namespace app { namespace Android { namespace android { namespace widget { struct TextView; } } } }

namespace app {
namespace Fuse {
namespace Android {

struct TextView;

struct TextView__uType : ::app::Fuse::Android::TextViewBase__Fuse_Controls_TextControl__uType
{
};

TextView__uType* TextView__typeof();

void TextView___ObjInit_4(TextView* __this);
::app::Android::android::widget::TextView* TextView__CreateTextView(TextView* __this);
TextView* TextView__New_1(::uStatic* __this);

struct TextView : ::app::Fuse::Android::TextViewBase__Fuse_Controls_TextControl
{
    void _ObjInit_4() { TextView___ObjInit_4(this); }
};

}}}


#endif
