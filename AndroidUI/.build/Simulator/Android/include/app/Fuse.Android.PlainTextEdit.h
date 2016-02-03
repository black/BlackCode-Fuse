// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Android.Views\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_FUSE_ANDROID_PLAIN_TEXT_EDIT_H__
#define __APP_FUSE_ANDROID_PLAIN_TEXT_EDIT_H__

#include <app/Fuse.Android.TextEdit.h>
#include <app/Fuse.Scripting.INameScope.h>
#include <Uno.h>

namespace app {
namespace Fuse {
namespace Android {

struct PlainTextEdit;

struct PlainTextEdit__uType : ::app::Fuse::Android::TextEdit__uType
{
};

PlainTextEdit__uType* PlainTextEdit__typeof();

void PlainTextEdit___ObjInit_5(PlainTextEdit* __this);
bool PlainTextEdit__get_Plain(PlainTextEdit* __this);
PlainTextEdit* PlainTextEdit__New_2(::uStatic* __this);

struct PlainTextEdit : ::app::Fuse::Android::TextEdit
{
    void _ObjInit_5() { PlainTextEdit___ObjInit_5(this); }
};

}}}


#endif
