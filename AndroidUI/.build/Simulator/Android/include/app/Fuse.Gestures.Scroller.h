// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Controls\0.11.3\Gestures\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_FUSE_GESTURES_SCROLLER_H__
#define __APP_FUSE_GESTURES_SCROLLER_H__

#include <app/Fuse.Behavior.h>
#include <app/Uno.Float2.h>
#include <Uno.h>
namespace app { namespace Experimental { namespace Physics { struct PointerVelocity__float2; } } }
namespace app { namespace Fuse { namespace Controls { struct ScrollView; } } }
namespace app { namespace Fuse { namespace Gestures { struct SwipeGestureHelper; } } }
namespace app { namespace Fuse { namespace Input { struct PointerEventArgs; } } }
namespace app { namespace Fuse { namespace Input { struct PointerMovedArgs; } } }
namespace app { namespace Fuse { namespace Input { struct PointerPressedArgs; } } }
namespace app { namespace Fuse { namespace Input { struct PointerReleasedArgs; } } }
namespace app { namespace Fuse { struct Node; } }
namespace app { namespace Fuse { struct RequestBringIntoViewArgs; } }

namespace app {
namespace Fuse {
namespace Gestures {

struct Scroller;

extern ::uStaticStrong< ::app::Fuse::Gestures::SwipeGestureHelper*> Scroller___horizontalGesture;
extern ::uStaticStrong< ::app::Fuse::Gestures::SwipeGestureHelper*> Scroller___verticalGesture;

struct Scroller__uType : ::app::Fuse::Behavior__uType
{
};

Scroller__uType* Scroller__typeof();

void Scroller___ObjInit_1(Scroller* __this);
void Scroller___TypeInit(::uStatic* __this);
void Scroller__CheckLimits(Scroller* __this);
void Scroller__CheckNeedUpdated(Scroller* __this, bool off);
::app::Uno::Float2 Scroller__FromWindow(Scroller* __this, ::app::Uno::Float2 p);
bool Scroller__get_DelayStart(Scroller* __this);
::app::Uno::Float2 Scroller__get_OverflowExtent(Scroller* __this);
::app::Uno::Float2 Scroller__get_TestTargetDestination(Scroller* __this);
bool Scroller__get_UserScroll(Scroller* __this);
void Scroller__Goto(Scroller* __this, ::app::Uno::Float2 position);
bool Scroller__HardCapture(Scroller* __this, ::app::Fuse::Input::PointerEventArgs* args);
void Scroller__MoveUser(Scroller* __this, int flags);
Scroller* Scroller__New_1(::uStatic* __this);
void Scroller__OnLostCapture(Scroller* __this);
void Scroller__OnPointerMoved(Scroller* __this, ::uObject* sender, ::app::Fuse::Input::PointerMovedArgs* args);
void Scroller__OnPointerPressed(Scroller* __this, ::uObject* sender, ::app::Fuse::Input::PointerPressedArgs* args);
void Scroller__OnPointerReleased(Scroller* __this, ::uObject* sender, ::app::Fuse::Input::PointerReleasedArgs* args);
void Scroller__OnRequestBringIntoView(Scroller* __this, ::uObject* sender, ::app::Fuse::RequestBringIntoViewArgs* args);
void Scroller__OnRooted(Scroller* __this, ::app::Fuse::Node* elm);
void Scroller__OnUnrooted(Scroller* __this, ::app::Fuse::Node* elm);
void Scroller__OnUpdated(Scroller* __this);
void Scroller__PerformBringIntoView(Scroller* __this);
void Scroller__set_DelayStart(Scroller* __this, bool value);
void Scroller__set_UserScroll(Scroller* __this, bool value);
void Scroller__SetScrollPosition(Scroller* __this, ::app::Uno::Float2 position);
void Scroller__UpdatePointerEvents(Scroller* __this, bool forceOff);
void Scroller__UpdateScrollMax(Scroller* __this);

struct Scroller : ::app::Fuse::Behavior
{
    ::uStrong< ::uObject*> _region;
    ::uStrong< ::app::Experimental::Physics::PointerVelocity__float2*> _velocity;
    bool _delayStart;
    ::uStrong< ::app::Fuse::Controls::ScrollView*> _scrollable;
    bool _userScroll;
    bool _pointerListening;
    bool _hasUpdated;
    int _down;
    ::app::Uno::Float2 _pointerPos;
    ::app::Uno::Float2 _prevPos;
    ::app::Uno::Float2 _startPos;
    double _prevTime;
    ::app::Uno::Float2 _softCaptureStart;
    ::app::Uno::Float2 _softCaptureCurrent;
    bool _isHardCapture;
    ::uStrong< ::app::Fuse::Node*> _pendingBringIntoView;

    void _ObjInit_1() { Scroller___ObjInit_1(this); }
    void CheckLimits() { Scroller__CheckLimits(this); }
    void CheckNeedUpdated(bool off) { Scroller__CheckNeedUpdated(this, off); }
    ::app::Uno::Float2 FromWindow(::app::Uno::Float2 p) { return Scroller__FromWindow(this, p); }
    bool DelayStart() { return Scroller__get_DelayStart(this); }
    ::app::Uno::Float2 OverflowExtent() { return Scroller__get_OverflowExtent(this); }
    ::app::Uno::Float2 TestTargetDestination() { return Scroller__get_TestTargetDestination(this); }
    bool UserScroll() { return Scroller__get_UserScroll(this); }
    void Goto(::app::Uno::Float2 position) { Scroller__Goto(this, position); }
    bool HardCapture(::app::Fuse::Input::PointerEventArgs* args) { return Scroller__HardCapture(this, args); }
    void MoveUser(int flags) { Scroller__MoveUser(this, flags); }
    void OnLostCapture() { Scroller__OnLostCapture(this); }
    void OnPointerMoved(::uObject* sender, ::app::Fuse::Input::PointerMovedArgs* args) { Scroller__OnPointerMoved(this, sender, args); }
    void OnPointerPressed(::uObject* sender, ::app::Fuse::Input::PointerPressedArgs* args) { Scroller__OnPointerPressed(this, sender, args); }
    void OnPointerReleased(::uObject* sender, ::app::Fuse::Input::PointerReleasedArgs* args) { Scroller__OnPointerReleased(this, sender, args); }
    void OnRequestBringIntoView(::uObject* sender, ::app::Fuse::RequestBringIntoViewArgs* args) { Scroller__OnRequestBringIntoView(this, sender, args); }
    void OnUpdated() { Scroller__OnUpdated(this); }
    void PerformBringIntoView() { Scroller__PerformBringIntoView(this); }
    void DelayStart(bool value) { Scroller__set_DelayStart(this, value); }
    void UserScroll(bool value) { Scroller__set_UserScroll(this, value); }
    void SetScrollPosition(::app::Uno::Float2 position) { Scroller__SetScrollPosition(this, position); }
    void UpdatePointerEvents(bool forceOff) { Scroller__UpdatePointerEvents(this, forceOff); }
    void UpdateScrollMax() { Scroller__UpdateScrollMax(this); }
};

}}}


#endif
