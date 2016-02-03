// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Controls\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_FUSE_CONTROLS_SCROLL_VIEW_H__
#define __APP_FUSE_CONTROLS_SCROLL_VIEW_H__

#include <app/Fuse.Animations.IResize.h>
#include <app/Fuse.Controls.ContentControl.h>
#include <app/Fuse.IActualPlacement.h>
#include <app/Fuse.Scripting.INameScope.h>
#include <app/Fuse.Triggers.Actions.ICollapse.h>
#include <app/Fuse.Triggers.Actions.IHide.h>
#include <app/Fuse.Triggers.Actions.IShow.h>
#include <app/Uno.Float2.h>
#include <Uno.h>
namespace app { namespace Fuse { namespace Elements { struct Element; } } }
namespace app { namespace Fuse { namespace Gestures { struct Scroller; } } }
namespace app { namespace Fuse { struct Node; } }
namespace app { namespace Fuse { struct StyleProperty__Fuse_Controls_ScrollView__Fuse_Gestures_ScrollDirections; } }
namespace app { namespace Fuse { struct Translation; } }

namespace app {
namespace Fuse {
namespace Controls {

struct ScrollView;

extern ::uStaticStrong< ::app::Fuse::StyleProperty__Fuse_Controls_ScrollView__Fuse_Gestures_ScrollDirections*> ScrollView__AllowedScrollDirectionsProperty;

struct ScrollView__uType : ::app::Fuse::Controls::ContentControl__uType
{
};

ScrollView__uType* ScrollView__typeof();

void ScrollView___ObjInit_4(ScrollView* __this);
void ScrollView___TypeInit_3(::uStatic* __this);
void ScrollView__add_ScrollPositionChanged(ScrollView* __this, ::uDelegate* value);
void ScrollView__add_ScrollPropertyChanged(ScrollView* __this, ::uDelegate* value);
void ScrollView__ArrangePaddingBox(ScrollView* __this, ::app::Uno::Float2 size);
::app::Uno::Float2 ScrollView__ConstrainExtent(ScrollView* __this, ::app::Uno::Float2 t);
int ScrollView__get_AllowedScrollDirections(ScrollView* __this);
::app::Fuse::Elements::Element* ScrollView__get_Content_1(ScrollView* __this);
bool ScrollView__get_KeepFocusInView(ScrollView* __this);
::app::Uno::Float2 ScrollView__get_MaxScroll(ScrollView* __this);
::app::Uno::Float2 ScrollView__get_MinOverflow(ScrollView* __this);
::app::Uno::Float2 ScrollView__get_MinScroll(ScrollView* __this);
::app::Uno::Float2 ScrollView__get_RelativeScrollPosition(ScrollView* __this);
::app::Fuse::Gestures::Scroller* ScrollView__get_Scroller(ScrollView* __this);
::app::Uno::Float2 ScrollView__get_ScrollPosition(ScrollView* __this);
bool ScrollView__get_SnapMaxTransform(ScrollView* __this);
bool ScrollView__get_SnapMinTransform(ScrollView* __this);
bool ScrollView__get_UserScroll(ScrollView* __this);
int ScrollView__GetAllowedScrollDirections(::uStatic* __this, ScrollView* sv);
::app::Uno::Float2 ScrollView__GetContentSize(ScrollView* __this, ::app::Uno::Float2 fillSize, int fillSet);
::app::Uno::Float2 ScrollView__GetNodeScrollPosition(ScrollView* __this, ::app::Fuse::Node* n);
void ScrollView__Goto(ScrollView* __this, ::app::Uno::Float2 position);
ScrollView* ScrollView__New_2(::uStatic* __this);
void ScrollView__OnApplyStyle(ScrollView* __this, ::uObject* target);
void ScrollView__OnContentChanged(ScrollView* __this, ::app::Fuse::Node* oldContent, ::app::Fuse::Node* newContent);
void ScrollView__OnScrollPositionChanged(ScrollView* __this, ::uObject* origin);
void ScrollView__OnScrollPropertyChanged(ScrollView* __this, ::uObject* origin);
void ScrollView__remove_ScrollPositionChanged(ScrollView* __this, ::uDelegate* value);
void ScrollView__remove_ScrollPropertyChanged(ScrollView* __this, ::uDelegate* value);
void ScrollView__set_AllowedScrollDirections(ScrollView* __this, int value);
void ScrollView__set_Content_1(ScrollView* __this, ::app::Fuse::Elements::Element* value);
void ScrollView__set_KeepFocusInView(ScrollView* __this, bool value);
void ScrollView__set_RelativeScrollPosition(ScrollView* __this, ::app::Uno::Float2 value);
void ScrollView__set_ScrollPosition(ScrollView* __this, ::app::Uno::Float2 value);
void ScrollView__set_SnapMaxTransform(ScrollView* __this, bool value);
void ScrollView__set_SnapMinTransform(ScrollView* __this, bool value);
void ScrollView__set_UserScroll(ScrollView* __this, bool value);
void ScrollView__SetAllowedScrollDirections(::uStatic* __this, ScrollView* sv, int value);
void ScrollView__SetScrollPosition(ScrollView* __this, ::app::Uno::Float2 position, ::uObject* origin);
void ScrollView__UpdateScrollPosition(ScrollView* __this);

struct ScrollView : ::app::Fuse::Controls::ContentControl
{
    bool _userScroll;
    bool _snapMinTransform;
    bool _snapMaxTransform;
    ::uStrong< ::app::Fuse::Gestures::Scroller*> _scroller;
    bool _keepFocusInView;
    int _allowedScrollDirections;
    ::uStrong< ::app::Fuse::Translation*> _scrollTranslation;
    ::app::Uno::Float2 _cacheContentMarginSize;
    ::uStrong< ::uDelegate*> ScrollPositionChanged;
    ::uStrong< ::uDelegate*> ScrollPropertyChanged;

    void _ObjInit_4() { ScrollView___ObjInit_4(this); }
    void add_ScrollPositionChanged(::uDelegate* value) { ScrollView__add_ScrollPositionChanged(this, value); }
    void add_ScrollPropertyChanged(::uDelegate* value) { ScrollView__add_ScrollPropertyChanged(this, value); }
    ::app::Uno::Float2 ConstrainExtent(::app::Uno::Float2 t) { return ScrollView__ConstrainExtent(this, t); }
    int AllowedScrollDirections() { return ScrollView__get_AllowedScrollDirections(this); }
    ::app::Fuse::Elements::Element* Content_1() { return ScrollView__get_Content_1(this); }
    bool KeepFocusInView() { return ScrollView__get_KeepFocusInView(this); }
    ::app::Uno::Float2 MaxScroll() { return ScrollView__get_MaxScroll(this); }
    ::app::Uno::Float2 MinOverflow() { return ScrollView__get_MinOverflow(this); }
    ::app::Uno::Float2 MinScroll() { return ScrollView__get_MinScroll(this); }
    ::app::Uno::Float2 RelativeScrollPosition() { return ScrollView__get_RelativeScrollPosition(this); }
    ::app::Fuse::Gestures::Scroller* Scroller() { return ScrollView__get_Scroller(this); }
    ::app::Uno::Float2 ScrollPosition() { return ScrollView__get_ScrollPosition(this); }
    bool SnapMaxTransform() { return ScrollView__get_SnapMaxTransform(this); }
    bool SnapMinTransform() { return ScrollView__get_SnapMinTransform(this); }
    bool UserScroll() { return ScrollView__get_UserScroll(this); }
    ::app::Uno::Float2 GetNodeScrollPosition(::app::Fuse::Node* n) { return ScrollView__GetNodeScrollPosition(this, n); }
    void Goto(::app::Uno::Float2 position) { ScrollView__Goto(this, position); }
    void OnScrollPositionChanged(::uObject* origin) { ScrollView__OnScrollPositionChanged(this, origin); }
    void OnScrollPropertyChanged(::uObject* origin) { ScrollView__OnScrollPropertyChanged(this, origin); }
    void remove_ScrollPositionChanged(::uDelegate* value) { ScrollView__remove_ScrollPositionChanged(this, value); }
    void remove_ScrollPropertyChanged(::uDelegate* value) { ScrollView__remove_ScrollPropertyChanged(this, value); }
    void AllowedScrollDirections(int value) { ScrollView__set_AllowedScrollDirections(this, value); }
    void Content_1(::app::Fuse::Elements::Element* value) { ScrollView__set_Content_1(this, value); }
    void KeepFocusInView(bool value) { ScrollView__set_KeepFocusInView(this, value); }
    void RelativeScrollPosition(::app::Uno::Float2 value) { ScrollView__set_RelativeScrollPosition(this, value); }
    void ScrollPosition(::app::Uno::Float2 value) { ScrollView__set_ScrollPosition(this, value); }
    void SnapMaxTransform(bool value) { ScrollView__set_SnapMaxTransform(this, value); }
    void SnapMinTransform(bool value) { ScrollView__set_SnapMinTransform(this, value); }
    void UserScroll(bool value) { ScrollView__set_UserScroll(this, value); }
    void SetScrollPosition(::app::Uno::Float2 position, ::uObject* origin) { ScrollView__SetScrollPosition(this, position, origin); }
    void UpdateScrollPosition() { ScrollView__UpdateScrollPosition(this); }
};

}}}


#endif
