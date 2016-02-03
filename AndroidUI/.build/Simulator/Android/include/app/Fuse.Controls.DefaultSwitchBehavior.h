// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Controls\0.11.3\Graphics\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_FUSE_CONTROLS_DEFAULT_SWITCH_BEHAVIOR_H__
#define __APP_FUSE_CONTROLS_DEFAULT_SWITCH_BEHAVIOR_H__

#include <app/Fuse.Triggers.Trigger.h>
#include <app/Uno.Float2.h>
#include <Uno.h>
namespace app { namespace Fuse { namespace Controls { struct Switch; } } }
namespace app { namespace Fuse { namespace Elements { struct Element; } } }
namespace app { namespace Fuse { namespace Gestures { struct Clicker; } } }
namespace app { namespace Fuse { namespace Input { struct PointerMovedArgs; } } }
namespace app { namespace Fuse { namespace Input { struct PointerPressedArgs; } } }
namespace app { namespace Fuse { namespace Input { struct PointerReleasedArgs; } } }
namespace app { namespace Fuse { struct Node; } }
namespace app { namespace Fuse { struct PlacedArgs; } }
namespace app { namespace Uno { namespace UX { struct ValueChangedArgs__bool; } } }

namespace app {
namespace Fuse {
namespace Controls {

struct DefaultSwitchBehavior;

struct DefaultSwitchBehavior__uType : ::app::Fuse::Triggers::Trigger__uType
{
};

DefaultSwitchBehavior__uType* DefaultSwitchBehavior__typeof();

void DefaultSwitchBehavior___ObjInit_2(DefaultSwitchBehavior* __this);
::app::Fuse::Elements::Element* DefaultSwitchBehavior__get_Bounds(DefaultSwitchBehavior* __this);
::app::Uno::Float2 DefaultSwitchBehavior__get_Size(DefaultSwitchBehavior* __this);
DefaultSwitchBehavior* DefaultSwitchBehavior__New_1(::uStatic* __this);
void DefaultSwitchBehavior__OnCaptureLost(DefaultSwitchBehavior* __this);
void DefaultSwitchBehavior__OnPlaced(DefaultSwitchBehavior* __this, ::uObject* sender, ::app::Fuse::PlacedArgs* args);
void DefaultSwitchBehavior__OnPointerMoved(DefaultSwitchBehavior* __this, ::uObject* sender, ::app::Fuse::Input::PointerMovedArgs* args);
void DefaultSwitchBehavior__OnPointerPressed(DefaultSwitchBehavior* __this, ::uObject* sender, ::app::Fuse::Input::PointerPressedArgs* args);
void DefaultSwitchBehavior__OnPointerReleased(DefaultSwitchBehavior* __this, ::uObject* sender, ::app::Fuse::Input::PointerReleasedArgs* args);
void DefaultSwitchBehavior__OnPointerTapped(DefaultSwitchBehavior* __this, ::uObject* a, int tapCount);
void DefaultSwitchBehavior__OnRooted(DefaultSwitchBehavior* __this, ::app::Fuse::Node* elm);
void DefaultSwitchBehavior__OnUnrooted(DefaultSwitchBehavior* __this, ::app::Fuse::Node* elm);
void DefaultSwitchBehavior__OnValueChanged(DefaultSwitchBehavior* __this, ::uObject* sender, ::app::Uno::UX::ValueChangedArgs__bool* args);
bool DefaultSwitchBehavior__ReleaseCapture(DefaultSwitchBehavior* __this);
void DefaultSwitchBehavior__set_Bounds(DefaultSwitchBehavior* __this, ::app::Fuse::Elements::Element* value);

struct DefaultSwitchBehavior : ::app::Fuse::Triggers::Trigger
{
    ::uStrong< ::app::Fuse::Controls::Switch*> _switch;
    ::uStrong< ::app::Fuse::Elements::Element*> _bounds;
    ::uStrong< ::app::Fuse::Gestures::Clicker*> _clicker;
    ::app::Uno::Float2 _prevCoord;
    ::app::Uno::Float2 _currentCoord;
    ::app::Uno::Float2 _originalP;
    bool _captured;
    int _capturedIndex;

    void _ObjInit_2() { DefaultSwitchBehavior___ObjInit_2(this); }
    ::app::Fuse::Elements::Element* Bounds() { return DefaultSwitchBehavior__get_Bounds(this); }
    ::app::Uno::Float2 Size() { return DefaultSwitchBehavior__get_Size(this); }
    void OnCaptureLost() { DefaultSwitchBehavior__OnCaptureLost(this); }
    void OnPlaced(::uObject* sender, ::app::Fuse::PlacedArgs* args) { DefaultSwitchBehavior__OnPlaced(this, sender, args); }
    void OnPointerMoved(::uObject* sender, ::app::Fuse::Input::PointerMovedArgs* args) { DefaultSwitchBehavior__OnPointerMoved(this, sender, args); }
    void OnPointerPressed(::uObject* sender, ::app::Fuse::Input::PointerPressedArgs* args) { DefaultSwitchBehavior__OnPointerPressed(this, sender, args); }
    void OnPointerReleased(::uObject* sender, ::app::Fuse::Input::PointerReleasedArgs* args) { DefaultSwitchBehavior__OnPointerReleased(this, sender, args); }
    void OnPointerTapped(::uObject* a, int tapCount) { DefaultSwitchBehavior__OnPointerTapped(this, a, tapCount); }
    void OnValueChanged(::uObject* sender, ::app::Uno::UX::ValueChangedArgs__bool* args) { DefaultSwitchBehavior__OnValueChanged(this, sender, args); }
    bool ReleaseCapture() { return DefaultSwitchBehavior__ReleaseCapture(this); }
    void Bounds(::app::Fuse::Elements::Element* value) { DefaultSwitchBehavior__set_Bounds(this, value); }
};

}}}


#endif
