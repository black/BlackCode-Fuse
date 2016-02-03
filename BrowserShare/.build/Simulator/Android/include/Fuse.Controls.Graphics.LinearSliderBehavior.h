// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Controls\0.19.3\Graphics\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Behavior.h>
#include <Uno.Float2.h>
namespace g{namespace Fuse{namespace Controls{namespace Graphics{struct LinearSliderBehavior;}}}}
namespace g{namespace Fuse{namespace Controls{struct RangeControl;}}}
namespace g{namespace Fuse{namespace Gestures{struct SwipeGestureHelper;}}}
namespace g{namespace Fuse{namespace Input{struct PointerMovedArgs;}}}
namespace g{namespace Fuse{namespace Input{struct PointerPressedArgs;}}}
namespace g{namespace Fuse{namespace Input{struct PointerReleasedArgs;}}}
namespace g{namespace Fuse{struct Node;}}

namespace g{
namespace Fuse{
namespace Controls{
namespace Graphics{

// public sealed class LinearSliderBehavior :804
// {
::g::Fuse::Behavior_type* LinearSliderBehavior_typeof();
void LinearSliderBehavior__ctor_1_fn(LinearSliderBehavior* __this);
void LinearSliderBehavior__New1_fn(LinearSliderBehavior** __retval);
void LinearSliderBehavior__OnLostCapture_fn(LinearSliderBehavior* __this);
void LinearSliderBehavior__OnPointerMoved_fn(LinearSliderBehavior* __this, uObject* sender, ::g::Fuse::Input::PointerMovedArgs* c);
void LinearSliderBehavior__OnPointerPressed_fn(LinearSliderBehavior* __this, uObject* sender, ::g::Fuse::Input::PointerPressedArgs* c);
void LinearSliderBehavior__OnPointerReleased_fn(LinearSliderBehavior* __this, uObject* sender, ::g::Fuse::Input::PointerReleasedArgs* c);
void LinearSliderBehavior__OnRooted_fn(LinearSliderBehavior* __this, ::g::Fuse::Node* parentNode);
void LinearSliderBehavior__OnUnrooted_fn(LinearSliderBehavior* __this, ::g::Fuse::Node* parentNode);
void LinearSliderBehavior__PositionToValue_fn(LinearSliderBehavior* __this, ::g::Uno::Float2* pos, double* __retval);
void LinearSliderBehavior__UpdateValue_fn(LinearSliderBehavior* __this, ::g::Uno::Float2* pos);

struct LinearSliderBehavior : ::g::Fuse::Behavior
{
    int _down;
    static uSStrong< ::g::Fuse::Gestures::SwipeGestureHelper*> _horizontalGesture_;
    static uSStrong< ::g::Fuse::Gestures::SwipeGestureHelper*>& _horizontalGesture() { return LinearSliderBehavior_typeof()->Init(), _horizontalGesture_; }
    double _initialValue;
    ::g::Uno::Float2 _startCoord;
    uStrong< ::g::Fuse::Controls::RangeControl*> Control;

    void ctor_1();
    void OnLostCapture();
    void OnPointerMoved(uObject* sender, ::g::Fuse::Input::PointerMovedArgs* c);
    void OnPointerPressed(uObject* sender, ::g::Fuse::Input::PointerPressedArgs* c);
    void OnPointerReleased(uObject* sender, ::g::Fuse::Input::PointerReleasedArgs* c);
    double PositionToValue(::g::Uno::Float2 pos);
    void UpdateValue(::g::Uno::Float2 pos);
    static LinearSliderBehavior* New1();
};
// }

}}}} // ::g::Fuse::Controls::Graphics
