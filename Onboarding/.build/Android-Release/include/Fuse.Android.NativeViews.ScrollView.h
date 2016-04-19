// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Android\0.19.3\NativeViews\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Android.NativeViews.ParentNativeView-1.h>
#include <Fuse.Controls.ScrollView.h>
namespace g{namespace Android{namespace android{namespace view{struct View;}}}}
namespace g{namespace Android{namespace android{namespace widget{struct FrameLayout;}}}}
namespace g{namespace Fuse{namespace Android{namespace NativeViews{struct NativeView;}}}}
namespace g{namespace Fuse{namespace Android{namespace NativeViews{struct ScrollView;}}}}
namespace g{namespace Fuse{namespace Controls{struct ScrollPropertyChangedArgs;}}}

namespace g{
namespace Fuse{
namespace Android{
namespace NativeViews{

// internal sealed extern class ScrollView :815
// {
::g::Fuse::Android::NativeViews::ParentNativeView_type* ScrollView_typeof();
void ScrollView__ctor_3_fn(ScrollView* __this);
void ScrollView__Attach_fn(ScrollView* __this);
void ScrollView__ChildRooted_fn(ScrollView* __this, ::g::Fuse::Android::NativeViews::NativeView* child);
void ScrollView__ChildUnrooted_fn(ScrollView* __this, ::g::Fuse::Android::NativeViews::NativeView* child);
void ScrollView__CreateInternal_fn(ScrollView* __this, ::g::Android::android::view::View** __retval);
void ScrollView__Detach_fn(ScrollView* __this);
void ScrollView__New1_fn(ScrollView** __retval);
void ScrollView__NotifyNewSize_fn(ScrollView* __this, ::g::Fuse::Android::NativeViews::NativeView* child);
void ScrollView__OnScrollChanged_fn(ScrollView* __this, int* x, int* y);
void ScrollView__OnScrollPropertyChanged_fn(ScrollView* __this);
void ScrollView__OnScrollPropertyChanged1_fn(ScrollView* __this, uObject* sender, ::g::Fuse::Controls::ScrollPropertyChangedArgs* args);

struct ScrollView : ::g::Fuse::Android::NativeViews::ParentNativeView
{
    uStrong< ::g::Android::android::widget::FrameLayout*> _scrollView;

    void ctor_3();
    void OnScrollChanged(int x, int y);
    void OnScrollPropertyChanged();
    void OnScrollPropertyChanged1(uObject* sender, ::g::Fuse::Controls::ScrollPropertyChangedArgs* args);
    static ScrollView* New1();
};
// }

}}}} // ::g::Fuse::Android::NativeViews
