// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Controls\0.19.3\Graphics\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Triggers.Trigger.h>
#include <Uno.Float2.h>
namespace g{namespace Fuse{namespace Controls{struct DefaultSwitchBehavior;}}}
namespace g{namespace Fuse{namespace Controls{struct Switch;}}}
namespace g{namespace Fuse{namespace Elements{struct Element;}}}
namespace g{namespace Fuse{namespace Gestures{struct Clicker;}}}
namespace g{namespace Fuse{namespace Input{struct PointerMovedArgs;}}}
namespace g{namespace Fuse{namespace Input{struct PointerPressedArgs;}}}
namespace g{namespace Fuse{namespace Input{struct PointerReleasedArgs;}}}
namespace g{namespace Fuse{struct Node;}}
namespace g{namespace Fuse{struct PlacedArgs;}}
namespace g{namespace Uno{namespace UX{struct ValueChangedArgs;}}}

namespace g{
namespace Fuse{
namespace Controls{

// public sealed class DefaultSwitchBehavior :920
// {
::g::Fuse::Triggers::Trigger_type* DefaultSwitchBehavior_typeof();
void DefaultSwitchBehavior__ctor_2_fn(DefaultSwitchBehavior* __this);
void DefaultSwitchBehavior__get_Bounds_fn(DefaultSwitchBehavior* __this, ::g::Fuse::Elements::Element** __retval);
void DefaultSwitchBehavior__set_Bounds_fn(DefaultSwitchBehavior* __this, ::g::Fuse::Elements::Element* value);
void DefaultSwitchBehavior__New1_fn(DefaultSwitchBehavior** __retval);
void DefaultSwitchBehavior__OnCaptureLost_fn(DefaultSwitchBehavior* __this);
void DefaultSwitchBehavior__OnPlaced_fn(DefaultSwitchBehavior* __this, uObject* sender, ::g::Fuse::PlacedArgs* args);
void DefaultSwitchBehavior__OnPointerMoved_fn(DefaultSwitchBehavior* __this, uObject* sender, ::g::Fuse::Input::PointerMovedArgs* args);
void DefaultSwitchBehavior__OnPointerPressed_fn(DefaultSwitchBehavior* __this, uObject* sender, ::g::Fuse::Input::PointerPressedArgs* args);
void DefaultSwitchBehavior__OnPointerReleased_fn(DefaultSwitchBehavior* __this, uObject* sender, ::g::Fuse::Input::PointerReleasedArgs* args);
void DefaultSwitchBehavior__OnPointerTapped_fn(DefaultSwitchBehavior* __this, uObject* a, int* tapCount);
void DefaultSwitchBehavior__OnRooted_fn(DefaultSwitchBehavior* __this, ::g::Fuse::Node* parentNode);
void DefaultSwitchBehavior__OnUnrooted_fn(DefaultSwitchBehavior* __this, ::g::Fuse::Node* parentNode);
void DefaultSwitchBehavior__OnValueChanged_fn(DefaultSwitchBehavior* __this, uObject* sender, ::g::Uno::UX::ValueChangedArgs* args);
void DefaultSwitchBehavior__ReleaseCapture_fn(DefaultSwitchBehavior* __this, bool* __retval);
void DefaultSwitchBehavior__get_Size_fn(DefaultSwitchBehavior* __this, ::g::Uno::Float2* __retval);

struct DefaultSwitchBehavior : ::g::Fuse::Triggers::Trigger
{
    uStrong< ::g::Fuse::Elements::Element*> _bounds;
    bool _captured;
    int _capturedIndex;
    uStrong< ::g::Fuse::Gestures::Clicker*> _clicker;
    ::g::Uno::Float2 _currentCoord;
    ::g::Uno::Float2 _originalP;
    ::g::Uno::Float2 _prevCoord;
    uStrong< ::g::Fuse::Controls::Switch*> _switch;

    void ctor_2();
    ::g::Fuse::Elements::Element* Bounds();
    void Bounds(::g::Fuse::Elements::Element* value);
    void OnCaptureLost();
    void OnPlaced(uObject* sender, ::g::Fuse::PlacedArgs* args);
    void OnPointerMoved(uObject* sender, ::g::Fuse::Input::PointerMovedArgs* args);
    void OnPointerPressed(uObject* sender, ::g::Fuse::Input::PointerPressedArgs* args);
    void OnPointerReleased(uObject* sender, ::g::Fuse::Input::PointerReleasedArgs* args);
    void OnPointerTapped(uObject* a, int tapCount);
    void OnValueChanged(uObject* sender, ::g::Uno::UX::ValueChangedArgs* args);
    bool ReleaseCapture();
    ::g::Uno::Float2 Size();
    static DefaultSwitchBehavior* New1();
};
// }

}}} // ::g::Fuse::Controls
