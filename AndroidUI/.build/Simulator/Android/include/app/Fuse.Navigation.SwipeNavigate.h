// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Navigation\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_FUSE_NAVIGATION_SWIPE_NAVIGATE_H__
#define __APP_FUSE_NAVIGATION_SWIPE_NAVIGATE_H__

#include <app/Fuse.Behavior.h>
#include <app/Uno.Float2.h>
#include <Uno.h>
namespace app { namespace Fuse { namespace Gestures { struct SwipeGestureHelper; } } }
namespace app { namespace Fuse { namespace Input { struct PointerMovedArgs; } } }
namespace app { namespace Fuse { namespace Input { struct PointerPressedArgs; } } }
namespace app { namespace Fuse { namespace Input { struct PointerReleasedArgs; } } }
namespace app { namespace Fuse { namespace Navigation { struct StructuredNavigation; } } }
namespace app { namespace Fuse { namespace Navigation { struct UpdateSeekArgs; } } }
namespace app { namespace Fuse { struct Node; } }

namespace app {
namespace Fuse {
namespace Navigation {

struct SwipeNavigate;

extern float SwipeNavigate__elasticDecay;
extern float SwipeNavigate__elasticScale;

struct SwipeNavigate__uType : ::app::Fuse::Behavior__uType
{
};

SwipeNavigate__uType* SwipeNavigate__typeof();

void SwipeNavigate___ObjInit_1(SwipeNavigate* __this);
void SwipeNavigate___TypeInit(::uStatic* __this);
int SwipeNavigate__DetermineSnap(SwipeNavigate* __this);
float SwipeNavigate__ElasticDistance(SwipeNavigate* __this, float v);
::app::Uno::Float2 SwipeNavigate__get_Delta(SwipeNavigate* __this);
::app::Uno::Float2 SwipeNavigate__get_Distance(SwipeNavigate* __this);
double SwipeNavigate__get_ElapsedTime(SwipeNavigate* __this);
bool SwipeNavigate__get_IsHorizontal(SwipeNavigate* __this);
bool SwipeNavigate__get_IsVertical(SwipeNavigate* __this);
::app::Fuse::Navigation::StructuredNavigation* SwipeNavigate__get_Navigation(SwipeNavigate* __this);
::app::Uno::Float2 SwipeNavigate__get_Scale(SwipeNavigate* __this);
int SwipeNavigate__get_SwipeDirection(SwipeNavigate* __this);
int SwipeNavigate__get_SwipeEnds(SwipeNavigate* __this);
::app::Uno::Float2 SwipeNavigate__get_Velocity(SwipeNavigate* __this);
float SwipeNavigate__get_VelocityThreshold(SwipeNavigate* __this);
::app::Fuse::Navigation::UpdateSeekArgs* SwipeNavigate__GetNavigationArgs(SwipeNavigate* __this);
SwipeNavigate* SwipeNavigate__New_1(::uStatic* __this);
void SwipeNavigate__OnLostCapture(SwipeNavigate* __this);
void SwipeNavigate__OnPointerMoved(SwipeNavigate* __this, ::uObject* sender, ::app::Fuse::Input::PointerMovedArgs* args);
void SwipeNavigate__OnPointerPressed(SwipeNavigate* __this, ::uObject* sender, ::app::Fuse::Input::PointerPressedArgs* args);
void SwipeNavigate__OnPointerReleased(SwipeNavigate* __this, ::uObject* sender, ::app::Fuse::Input::PointerReleasedArgs* args);
void SwipeNavigate__OnRooted(SwipeNavigate* __this, ::app::Fuse::Node* elm);
void SwipeNavigate__OnUnrooted(SwipeNavigate* __this, ::app::Fuse::Node* elm);
void SwipeNavigate__set_SwipeDirection(SwipeNavigate* __this, int value);
void SwipeNavigate__set_SwipeEnds(SwipeNavigate* __this, int value);
void SwipeNavigate__set_VelocityThreshold(SwipeNavigate* __this, float value);

struct SwipeNavigate : ::app::Fuse::Behavior
{
    ::uStrong< ::app::Fuse::Navigation::StructuredNavigation*> _currentNavigation;
    ::uStrong< ::app::Fuse::Node*> _element;
    ::app::Uno::Float2 _startCoord;
    ::app::Uno::Float2 _currentCoord;
    ::app::Uno::Float2 _previousCoord;
    double _startTime;
    ::uStrong< ::app::Fuse::Gestures::SwipeGestureHelper*> _horizontalGesture;
    ::uStrong< ::app::Fuse::Gestures::SwipeGestureHelper*> _verticalGesture;
    int _down;
    int _SwipeEnds;
    int _SwipeDirection;
    float _VelocityThreshold;

    void _ObjInit_1() { SwipeNavigate___ObjInit_1(this); }
    int DetermineSnap() { return SwipeNavigate__DetermineSnap(this); }
    float ElasticDistance(float v) { return SwipeNavigate__ElasticDistance(this, v); }
    ::app::Uno::Float2 Delta() { return SwipeNavigate__get_Delta(this); }
    ::app::Uno::Float2 Distance() { return SwipeNavigate__get_Distance(this); }
    double ElapsedTime() { return SwipeNavigate__get_ElapsedTime(this); }
    bool IsHorizontal() { return SwipeNavigate__get_IsHorizontal(this); }
    bool IsVertical() { return SwipeNavigate__get_IsVertical(this); }
    ::app::Fuse::Navigation::StructuredNavigation* Navigation() { return SwipeNavigate__get_Navigation(this); }
    ::app::Uno::Float2 Scale() { return SwipeNavigate__get_Scale(this); }
    int SwipeDirection() { return SwipeNavigate__get_SwipeDirection(this); }
    int SwipeEnds() { return SwipeNavigate__get_SwipeEnds(this); }
    ::app::Uno::Float2 Velocity() { return SwipeNavigate__get_Velocity(this); }
    float VelocityThreshold() { return SwipeNavigate__get_VelocityThreshold(this); }
    ::app::Fuse::Navigation::UpdateSeekArgs* GetNavigationArgs() { return SwipeNavigate__GetNavigationArgs(this); }
    void OnLostCapture() { SwipeNavigate__OnLostCapture(this); }
    void OnPointerMoved(::uObject* sender, ::app::Fuse::Input::PointerMovedArgs* args) { SwipeNavigate__OnPointerMoved(this, sender, args); }
    void OnPointerPressed(::uObject* sender, ::app::Fuse::Input::PointerPressedArgs* args) { SwipeNavigate__OnPointerPressed(this, sender, args); }
    void OnPointerReleased(::uObject* sender, ::app::Fuse::Input::PointerReleasedArgs* args) { SwipeNavigate__OnPointerReleased(this, sender, args); }
    void SwipeDirection(int value) { SwipeNavigate__set_SwipeDirection(this, value); }
    void SwipeEnds(int value) { SwipeNavigate__set_SwipeEnds(this, value); }
    void VelocityThreshold(float value) { SwipeNavigate__set_VelocityThreshold(this, value); }
};

}}}


#endif
