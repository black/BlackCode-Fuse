// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Navigation\0.19.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Behavior.h>
#include <Uno.Float2.h>
namespace g{namespace Fuse{namespace Gestures{struct SwipeGestureHelper;}}}
namespace g{namespace Fuse{namespace Input{struct PointerMovedArgs;}}}
namespace g{namespace Fuse{namespace Input{struct PointerPressedArgs;}}}
namespace g{namespace Fuse{namespace Input{struct PointerReleasedArgs;}}}
namespace g{namespace Fuse{namespace Navigation{struct StructuredNavigation;}}}
namespace g{namespace Fuse{namespace Navigation{struct SwipeNavigate;}}}
namespace g{namespace Fuse{namespace Navigation{struct UpdateSeekArgs;}}}
namespace g{namespace Fuse{struct Node;}}

namespace g{
namespace Fuse{
namespace Navigation{

// public sealed class SwipeNavigate :1733
// {
::g::Fuse::Behavior_type* SwipeNavigate_typeof();
void SwipeNavigate__ctor_1_fn(SwipeNavigate* __this);
void SwipeNavigate__get_Delta_fn(SwipeNavigate* __this, ::g::Uno::Float2* __retval);
void SwipeNavigate__DetermineSnap_fn(SwipeNavigate* __this, int* __retval);
void SwipeNavigate__get_Distance_fn(SwipeNavigate* __this, ::g::Uno::Float2* __retval);
void SwipeNavigate__get_ElapsedTime_fn(SwipeNavigate* __this, double* __retval);
void SwipeNavigate__ElasticDistance_fn(SwipeNavigate* __this, float* v, float* __retval);
void SwipeNavigate__GetNavigationArgs_fn(SwipeNavigate* __this, ::g::Fuse::Navigation::UpdateSeekArgs** __retval);
void SwipeNavigate__get_IsHorizontal_fn(SwipeNavigate* __this, bool* __retval);
void SwipeNavigate__get_Navigation_fn(SwipeNavigate* __this, ::g::Fuse::Navigation::StructuredNavigation** __retval);
void SwipeNavigate__New1_fn(SwipeNavigate** __retval);
void SwipeNavigate__OnLostCapture_fn(SwipeNavigate* __this);
void SwipeNavigate__OnPointerMoved_fn(SwipeNavigate* __this, uObject* sender, ::g::Fuse::Input::PointerMovedArgs* args);
void SwipeNavigate__OnPointerPressed_fn(SwipeNavigate* __this, uObject* sender, ::g::Fuse::Input::PointerPressedArgs* args);
void SwipeNavigate__OnPointerReleased_fn(SwipeNavigate* __this, uObject* sender, ::g::Fuse::Input::PointerReleasedArgs* args);
void SwipeNavigate__OnRooted_fn(SwipeNavigate* __this, ::g::Fuse::Node* parentNode);
void SwipeNavigate__OnUnrooted_fn(SwipeNavigate* __this, ::g::Fuse::Node* parentNode);
void SwipeNavigate__get_Scale_fn(SwipeNavigate* __this, ::g::Uno::Float2* __retval);
void SwipeNavigate__get_SwipeDirection_fn(SwipeNavigate* __this, int* __retval);
void SwipeNavigate__set_SwipeDirection_fn(SwipeNavigate* __this, int* value);
void SwipeNavigate__get_SwipeEnds_fn(SwipeNavigate* __this, int* __retval);
void SwipeNavigate__set_SwipeEnds_fn(SwipeNavigate* __this, int* value);
void SwipeNavigate__get_Velocity_fn(SwipeNavigate* __this, ::g::Uno::Float2* __retval);
void SwipeNavigate__get_VelocityThreshold_fn(SwipeNavigate* __this, float* __retval);
void SwipeNavigate__set_VelocityThreshold_fn(SwipeNavigate* __this, float* value);

struct SwipeNavigate : ::g::Fuse::Behavior
{
    ::g::Uno::Float2 _currentCoord;
    uStrong< ::g::Fuse::Navigation::StructuredNavigation*> _currentNavigation;
    int _down;
    uStrong< ::g::Fuse::Gestures::SwipeGestureHelper*> _horizontalGesture;
    ::g::Uno::Float2 _previousCoord;
    ::g::Uno::Float2 _startCoord;
    double _startTime;
    uStrong< ::g::Fuse::Gestures::SwipeGestureHelper*> _verticalGesture;
    static float elasticDecay_;
    static float& elasticDecay() { return SwipeNavigate_typeof()->Init(), elasticDecay_; }
    static float elasticScale_;
    static float& elasticScale() { return SwipeNavigate_typeof()->Init(), elasticScale_; }
    int _SwipeDirection;
    int _SwipeEnds;
    float _VelocityThreshold;

    void ctor_1();
    ::g::Uno::Float2 Delta();
    int DetermineSnap();
    ::g::Uno::Float2 Distance();
    double ElapsedTime();
    float ElasticDistance(float v);
    ::g::Fuse::Navigation::UpdateSeekArgs* GetNavigationArgs();
    bool IsHorizontal();
    ::g::Fuse::Navigation::StructuredNavigation* Navigation();
    void OnLostCapture();
    void OnPointerMoved(uObject* sender, ::g::Fuse::Input::PointerMovedArgs* args);
    void OnPointerPressed(uObject* sender, ::g::Fuse::Input::PointerPressedArgs* args);
    void OnPointerReleased(uObject* sender, ::g::Fuse::Input::PointerReleasedArgs* args);
    ::g::Uno::Float2 Scale();
    int SwipeDirection();
    void SwipeDirection(int value);
    int SwipeEnds();
    void SwipeEnds(int value);
    ::g::Uno::Float2 Velocity();
    float VelocityThreshold();
    void VelocityThreshold(float value);
    static SwipeNavigate* New1();
};
// }

}}} // ::g::Fuse::Navigation
