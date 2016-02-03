// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Android.Views\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_FUSE_ANDROID_SCROLL_VIEW_H__
#define __APP_FUSE_ANDROID_SCROLL_VIEW_H__

#include <app/Fuse.Android.ParentView__Fuse_Controls_ScrollView.h>
#include <Uno.h>
namespace app { namespace Android { namespace android { namespace view { struct View; } } } }
namespace app { namespace Android { namespace android { namespace widget { struct FrameLayout; } } } }
namespace app { namespace Fuse { namespace Android { struct NativeView; } } }
namespace app { namespace Fuse { namespace Controls { struct ScrollPropertyChangedArgs; } } }

namespace app {
namespace Fuse {
namespace Android {

struct ScrollView;

struct ScrollView__uType : ::app::Fuse::Android::ParentView__Fuse_Controls_ScrollView__uType
{
};

ScrollView__uType* ScrollView__typeof();

void ScrollView___ObjInit_3(ScrollView* __this);
void ScrollView__Attach(ScrollView* __this);
void ScrollView__ChildRooted(ScrollView* __this, ::app::Fuse::Android::NativeView* child);
void ScrollView__ChildUnrooted(ScrollView* __this, ::app::Fuse::Android::NativeView* child);
::app::Android::android::view::View* ScrollView__CreateInternal(ScrollView* __this);
void ScrollView__Detach(ScrollView* __this);
ScrollView* ScrollView__New_1(::uStatic* __this);
void ScrollView__NotifyNewSize(ScrollView* __this, ::app::Fuse::Android::NativeView* child);
void ScrollView__OnScrollChanged(ScrollView* __this, int x, int y);
void ScrollView__OnScrollPropertyChanged(ScrollView* __this);
void ScrollView__OnScrollPropertyChanged_1(ScrollView* __this, ::uObject* sender, ::app::Fuse::Controls::ScrollPropertyChangedArgs* args);

struct ScrollView : ::app::Fuse::Android::ParentView__Fuse_Controls_ScrollView
{
    ::uStrong< ::app::Android::android::widget::FrameLayout*> _scrollView;

    void _ObjInit_3() { ScrollView___ObjInit_3(this); }
    void OnScrollChanged(int x, int y) { ScrollView__OnScrollChanged(this, x, y); }
    void OnScrollPropertyChanged() { ScrollView__OnScrollPropertyChanged(this); }
    void OnScrollPropertyChanged_1(::uObject* sender, ::app::Fuse::Controls::ScrollPropertyChangedArgs* args) { ScrollView__OnScrollPropertyChanged_1(this, sender, args); }
};

}}}


#endif
