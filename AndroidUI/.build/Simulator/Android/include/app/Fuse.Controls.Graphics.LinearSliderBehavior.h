// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Controls\0.11.3\Graphics\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_FUSE_CONTROLS_GRAPHICS_LINEAR_SLIDER_BEHAVIOR_H__
#define __APP_FUSE_CONTROLS_GRAPHICS_LINEAR_SLIDER_BEHAVIOR_H__

#include <app/Fuse.Behavior.h>
#include <app/Uno.Float2.h>
#include <Uno.h>
namespace app { namespace Fuse { namespace Controls { struct RangeControl; } } }
namespace app { namespace Fuse { namespace Gestures { struct SwipeGestureHelper; } } }
namespace app { namespace Fuse { namespace Input { struct PointerMovedArgs; } } }
namespace app { namespace Fuse { namespace Input { struct PointerPressedArgs; } } }
namespace app { namespace Fuse { namespace Input { struct PointerReleasedArgs; } } }
namespace app { namespace Fuse { struct Node; } }

namespace app {
namespace Fuse {
namespace Controls {
namespace Graphics {

struct LinearSliderBehavior;

extern ::uStaticStrong< ::app::Fuse::Gestures::SwipeGestureHelper*> LinearSliderBehavior___horizontalGesture;

struct LinearSliderBehavior__uType : ::app::Fuse::Behavior__uType
{
};

LinearSliderBehavior__uType* LinearSliderBehavior__typeof();

void LinearSliderBehavior___ObjInit_1(LinearSliderBehavior* __this);
void LinearSliderBehavior___TypeInit(::uStatic* __this);
LinearSliderBehavior* LinearSliderBehavior__New_1(::uStatic* __this);
void LinearSliderBehavior__OnLostCapture(LinearSliderBehavior* __this);
void LinearSliderBehavior__OnPointerMoved(LinearSliderBehavior* __this, ::uObject* sender, ::app::Fuse::Input::PointerMovedArgs* c);
void LinearSliderBehavior__OnPointerPressed(LinearSliderBehavior* __this, ::uObject* sender, ::app::Fuse::Input::PointerPressedArgs* c);
void LinearSliderBehavior__OnPointerReleased(LinearSliderBehavior* __this, ::uObject* sender, ::app::Fuse::Input::PointerReleasedArgs* c);
void LinearSliderBehavior__OnRooted(LinearSliderBehavior* __this, ::app::Fuse::Node* n);
void LinearSliderBehavior__OnUnrooted(LinearSliderBehavior* __this, ::app::Fuse::Node* n);
double LinearSliderBehavior__PositionToValue(LinearSliderBehavior* __this, ::app::Uno::Float2 pos);
void LinearSliderBehavior__UpdateValue(LinearSliderBehavior* __this, ::app::Uno::Float2 pos);

struct LinearSliderBehavior : ::app::Fuse::Behavior
{
    ::uStrong< ::app::Fuse::Controls::RangeControl*> Control;
    ::app::Uno::Float2 _startCoord;
    double _initialValue;
    int _down;

    void _ObjInit_1() { LinearSliderBehavior___ObjInit_1(this); }
    void OnLostCapture() { LinearSliderBehavior__OnLostCapture(this); }
    void OnPointerMoved(::uObject* sender, ::app::Fuse::Input::PointerMovedArgs* c) { LinearSliderBehavior__OnPointerMoved(this, sender, c); }
    void OnPointerPressed(::uObject* sender, ::app::Fuse::Input::PointerPressedArgs* c) { LinearSliderBehavior__OnPointerPressed(this, sender, c); }
    void OnPointerReleased(::uObject* sender, ::app::Fuse::Input::PointerReleasedArgs* c) { LinearSliderBehavior__OnPointerReleased(this, sender, c); }
    double PositionToValue(::app::Uno::Float2 pos) { return LinearSliderBehavior__PositionToValue(this, pos); }
    void UpdateValue(::app::Uno::Float2 pos) { LinearSliderBehavior__UpdateValue(this, pos); }
};

}}}}


#endif
