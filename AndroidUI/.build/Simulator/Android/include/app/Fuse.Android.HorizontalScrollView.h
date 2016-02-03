// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Android.Views\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_FUSE_ANDROID_HORIZONTAL_SCROLL_VIEW_H__
#define __APP_FUSE_ANDROID_HORIZONTAL_SCROLL_VIEW_H__

#include <app/Android.android.view.ViewParent.h>
#include <app/Android.android.widget.HorizontalScrollView.h>
#include <app/Android.Base.Wrappers.IJWrapper.h>
#include <app/Uno.IDisposable.h>
#include <jni.h>
#include <Uno.h>
namespace app { namespace Fuse { namespace Android { struct ScrollView; } } }

namespace app {
namespace Fuse {
namespace Android {

struct HorizontalScrollView;

extern jclass HorizontalScrollView___javaClass_6;

struct HorizontalScrollView__uType : ::app::Android::android::widget::HorizontalScrollView__uType
{
};

HorizontalScrollView__uType* HorizontalScrollView__typeof();

void HorizontalScrollView___ObjInit_20(HorizontalScrollView* __this, ::app::Fuse::Android::ScrollView* sv);
HorizontalScrollView* HorizontalScrollView__New_17(::uStatic* __this, ::app::Fuse::Android::ScrollView* sv);
void HorizontalScrollView__onScrollChanged(HorizontalScrollView* __this, int x, int y, int oldx, int oldy);

struct HorizontalScrollView : ::app::Android::android::widget::HorizontalScrollView
{
    ::uStrong< ::app::Fuse::Android::ScrollView*> _sv;

    void _ObjInit_20(::app::Fuse::Android::ScrollView* sv) { HorizontalScrollView___ObjInit_20(this, sv); }
};

}}}


#endif
