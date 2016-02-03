// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Controls\0.18.8\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Animations.IResize.h>
#include <Fuse.Controls.ContentControl.h>
#include <Fuse.IActualPlacement.h>
#include <Fuse.Scripting.INameScope.h>
#include <Fuse.Triggers.Actions.ICollapse.h>
#include <Fuse.Triggers.Actions.IHide.h>
#include <Fuse.Triggers.Actions.IShow.h>
#include <Uno.Float2.h>
namespace g{namespace Fuse{namespace Controls{struct ScrollView;}}}
namespace g{namespace Fuse{namespace Elements{struct Element;}}}
namespace g{namespace Fuse{namespace Gestures{struct Scroller;}}}
namespace g{namespace Fuse{struct Behavior;}}
namespace g{namespace Fuse{struct Node;}}
namespace g{namespace Fuse{struct StyleProperty1;}}
namespace g{namespace Fuse{struct Translation;}}

namespace g{
namespace Fuse{
namespace Controls{

// public class ScrollView :3087
// {
::g::Fuse::Controls::ContentControl_type* ScrollView_typeof();
void ScrollView__ctor_4_fn(ScrollView* __this);
void ScrollView__get_AllowedScrollDirections_fn(ScrollView* __this, int* __retval);
void ScrollView__set_AllowedScrollDirections_fn(ScrollView* __this, int* value);
void ScrollView__ArrangePaddingBox_fn(ScrollView* __this, ::g::Uno::Float2* size, int* flags);
void ScrollView__ConstrainExtent_fn(ScrollView* __this, ::g::Uno::Float2* t, ::g::Uno::Float2* __retval);
void ScrollView__get_Content1_fn(ScrollView* __this, ::g::Fuse::Elements::Element** __retval);
void ScrollView__set_Content1_fn(ScrollView* __this, ::g::Fuse::Elements::Element* value);
void ScrollView__GetAllowedScrollDirections_fn(ScrollView* sv, int* __retval);
void ScrollView__GetContentSize_fn(ScrollView* __this, ::g::Uno::Float2* fillSize, int* fillSet, ::g::Uno::Float2* __retval);
void ScrollView__GetNodeScrollPosition_fn(ScrollView* __this, ::g::Fuse::Node* n, ::g::Uno::Float2* __retval);
void ScrollView__Goto_fn(ScrollView* __this, ::g::Uno::Float2* position);
void ScrollView__IsMarginBoxDependent_fn(ScrollView* __this, ::g::Fuse::Node* child, int* __retval);
void ScrollView__get_KeepFocusInView_fn(ScrollView* __this, bool* __retval);
void ScrollView__set_KeepFocusInView_fn(ScrollView* __this, bool* value);
void ScrollView__get_MaxScroll_fn(ScrollView* __this, ::g::Uno::Float2* __retval);
void ScrollView__get_MinOverflow_fn(ScrollView* __this, ::g::Uno::Float2* __retval);
void ScrollView__get_MinScroll_fn(ScrollView* __this, ::g::Uno::Float2* __retval);
void ScrollView__New2_fn(ScrollView** __retval);
void ScrollView__OnApplyStyle_fn(ScrollView* __this, uObject* target);
void ScrollView__OnBehaviorAdded_fn(ScrollView* __this, ::g::Fuse::Behavior* b);
void ScrollView__OnBehaviorRemoved_fn(ScrollView* __this, ::g::Fuse::Behavior* b);
void ScrollView__OnContentChanged_fn(ScrollView* __this, ::g::Fuse::Node* oldContent, ::g::Fuse::Node* newContent);
void ScrollView__OnScrollPositionChanged_fn(ScrollView* __this, uObject* origin);
void ScrollView__OnScrollPropertyChanged_fn(ScrollView* __this, uObject* origin);
void ScrollView__get_RelativeScrollPosition_fn(ScrollView* __this, ::g::Uno::Float2* __retval);
void ScrollView__set_RelativeScrollPosition_fn(ScrollView* __this, ::g::Uno::Float2* value);
void ScrollView__get_Scroller_fn(ScrollView* __this, ::g::Fuse::Gestures::Scroller** __retval);
void ScrollView__get_ScrollPosition_fn(ScrollView* __this, ::g::Uno::Float2* __retval);
void ScrollView__set_ScrollPosition_fn(ScrollView* __this, ::g::Uno::Float2* value);
void ScrollView__add_ScrollPositionChanged_fn(ScrollView* __this, uDelegate* value);
void ScrollView__remove_ScrollPositionChanged_fn(ScrollView* __this, uDelegate* value);
void ScrollView__add_ScrollPropertyChanged_fn(ScrollView* __this, uDelegate* value);
void ScrollView__remove_ScrollPropertyChanged_fn(ScrollView* __this, uDelegate* value);
void ScrollView__SetAllowedScrollDirections_fn(ScrollView* sv, int* value);
void ScrollView__SetScrollPosition_fn(ScrollView* __this, ::g::Uno::Float2* position, uObject* origin);
void ScrollView__get_SnapMaxTransform_fn(ScrollView* __this, bool* __retval);
void ScrollView__set_SnapMaxTransform_fn(ScrollView* __this, bool* value);
void ScrollView__get_SnapMinTransform_fn(ScrollView* __this, bool* __retval);
void ScrollView__set_SnapMinTransform_fn(ScrollView* __this, bool* value);
void ScrollView__UpdateScrollPosition_fn(ScrollView* __this);
void ScrollView__get_UserScroll_fn(ScrollView* __this, bool* __retval);
void ScrollView__set_UserScroll_fn(ScrollView* __this, bool* value);

struct ScrollView : ::g::Fuse::Controls::ContentControl
{
    int _allowedScrollDirections;
    ::g::Uno::Float2 _cacheContentMarginSize;
    bool _keepFocusInView;
    uStrong< ::g::Fuse::Gestures::Scroller*> _scroller;
    ::g::Uno::Float2 _scrollPosition;
    uStrong< ::g::Fuse::Translation*> _scrollTranslation;
    bool _snapMaxTransform;
    bool _snapMinTransform;
    bool _userScroll;
    static uSStrong< ::g::Fuse::StyleProperty1*> AllowedScrollDirectionsProperty_;
    static uSStrong< ::g::Fuse::StyleProperty1*>& AllowedScrollDirectionsProperty() { return ScrollView_typeof()->Init(), AllowedScrollDirectionsProperty_; }
    uStrong<uDelegate*> ScrollPositionChanged1;
    uStrong<uDelegate*> ScrollPropertyChanged1;

    void ctor_4();
    int AllowedScrollDirections();
    void AllowedScrollDirections(int value);
    ::g::Uno::Float2 ConstrainExtent(::g::Uno::Float2 t);
    ::g::Fuse::Elements::Element* Content1();
    void Content1(::g::Fuse::Elements::Element* value);
    ::g::Uno::Float2 GetNodeScrollPosition(::g::Fuse::Node* n);
    void Goto(::g::Uno::Float2 position);
    bool KeepFocusInView();
    void KeepFocusInView(bool value);
    ::g::Uno::Float2 MaxScroll();
    ::g::Uno::Float2 MinOverflow();
    ::g::Uno::Float2 MinScroll();
    void OnScrollPositionChanged(uObject* origin);
    void OnScrollPropertyChanged(uObject* origin);
    ::g::Uno::Float2 RelativeScrollPosition();
    void RelativeScrollPosition(::g::Uno::Float2 value);
    ::g::Fuse::Gestures::Scroller* Scroller();
    ::g::Uno::Float2 ScrollPosition();
    void ScrollPosition(::g::Uno::Float2 value);
    void add_ScrollPositionChanged(uDelegate* value);
    void remove_ScrollPositionChanged(uDelegate* value);
    void add_ScrollPropertyChanged(uDelegate* value);
    void remove_ScrollPropertyChanged(uDelegate* value);
    void SetScrollPosition(::g::Uno::Float2 position, uObject* origin);
    bool SnapMaxTransform();
    void SnapMaxTransform(bool value);
    bool SnapMinTransform();
    void SnapMinTransform(bool value);
    void UpdateScrollPosition();
    bool UserScroll();
    void UserScroll(bool value);
    static int GetAllowedScrollDirections(ScrollView* sv);
    static ScrollView* New2();
    static void SetAllowedScrollDirections(ScrollView* sv, int value);
};
// }

}}} // ::g::Fuse::Controls
