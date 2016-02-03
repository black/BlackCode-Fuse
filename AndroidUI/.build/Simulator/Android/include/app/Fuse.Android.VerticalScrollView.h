// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Android.Views\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_FUSE_ANDROID_VERTICAL_SCROLL_VIEW_H__
#define __APP_FUSE_ANDROID_VERTICAL_SCROLL_VIEW_H__

#include <app/Android.android.view.ViewParent.h>
#include <app/Android.android.widget.ScrollView.h>
#include <app/Android.Base.Wrappers.IJWrapper.h>
#include <app/Uno.IDisposable.h>
#include <jni.h>
#include <Uno.h>
namespace app { namespace Fuse { namespace Android { struct ScrollView; } } }

namespace app {
namespace Fuse {
namespace Android {

struct VerticalScrollView;

extern jclass VerticalScrollView___javaClass_6;

struct VerticalScrollView__uType : ::app::Android::android::widget::ScrollView__uType
{
};

VerticalScrollView__uType* VerticalScrollView__typeof();

void VerticalScrollView___ObjInit_20(VerticalScrollView* __this, ::app::Fuse::Android::ScrollView* sv);
VerticalScrollView* VerticalScrollView__New_17(::uStatic* __this, ::app::Fuse::Android::ScrollView* sv);
void VerticalScrollView__onScrollChanged(VerticalScrollView* __this, int x, int y, int oldx, int oldy);

struct VerticalScrollView : ::app::Android::android::widget::ScrollView
{
    ::uStrong< ::app::Fuse::Android::ScrollView*> _sv;

    void _ObjInit_20(::app::Fuse::Android::ScrollView* sv) { VerticalScrollView___ObjInit_20(this, sv); }
};

}}}


#endif
