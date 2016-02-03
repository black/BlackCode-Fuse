// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Gestures\0.18.8\Internal\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.Float2.h>
#include <Uno.Object.h>
namespace g{namespace Fuse{namespace Gestures{struct Clicker;}}}
namespace g{namespace Fuse{namespace Input{struct PointerEventArgs;}}}
namespace g{namespace Fuse{namespace Input{struct PointerMovedArgs;}}}
namespace g{namespace Fuse{namespace Input{struct PointerPressedArgs;}}}
namespace g{namespace Fuse{namespace Input{struct PointerReleasedArgs;}}}
namespace g{namespace Fuse{struct Node;}}
namespace g{namespace Fuse{struct PropertyHandle;}}

namespace g{
namespace Fuse{
namespace Gestures{

// internal sealed class Clicker :47
// {
uType* Clicker_typeof();
void Clicker__ctor__fn(Clicker* __this, ::g::Fuse::Node* node);
void Clicker__AttachClicker_fn(::g::Fuse::Node* elm, Clicker** __retval);
void Clicker__add_ClickedEvent_fn(Clicker* __this, uDelegate* value);
void Clicker__remove_ClickedEvent_fn(Clicker* __this, uDelegate* value);
void Clicker__Detach_fn(Clicker* __this);
void Clicker__DoneCapture_fn(Clicker* __this);
void Clicker__add_LongPressedEvent_fn(Clicker* __this, uDelegate* value);
void Clicker__remove_LongPressedEvent_fn(Clicker* __this, uDelegate* value);
void Clicker__NeedCapture_fn(Clicker* __this, bool* __retval);
void Clicker__New1_fn(::g::Fuse::Node* node, Clicker** __retval);
void Clicker__OnLostCapture_fn(Clicker* __this);
void Clicker__OnPointerMoved_fn(Clicker* __this, uObject* sender, ::g::Fuse::Input::PointerMovedArgs* args);
void Clicker__OnPointerPressed_fn(Clicker* __this, uObject* sender, ::g::Fuse::Input::PointerPressedArgs* args);
void Clicker__OnPointerReleased_fn(Clicker* __this, uObject* sender, ::g::Fuse::Input::PointerReleasedArgs* args);
void Clicker__OnRooted_fn(Clicker* __this);
void Clicker__OnUnrooted_fn(Clicker* __this);
void Clicker__OnUpdate_fn(Clicker* __this, uObject* s, uObject* a);
void Clicker__add_PressingEvent_fn(Clicker* __this, uDelegate* value);
void Clicker__remove_PressingEvent_fn(Clicker* __this, uDelegate* value);
void Clicker__ReleaseUpdate_fn(Clicker* __this);
void Clicker__add_TappedEvent_fn(Clicker* __this, uDelegate* value);
void Clicker__remove_TappedEvent_fn(Clicker* __this, uDelegate* value);

struct Clicker : uObject
{
    int _attachCount;
    int _clickCount;
    static uSStrong< ::g::Fuse::PropertyHandle*> _clickerProperty_;
    static uSStrong< ::g::Fuse::PropertyHandle*>& _clickerProperty() { return Clicker_typeof()->Init(), _clickerProperty_; }
    int _down;
    bool _hasUpdate;
    bool _hovering;
    uStrong< ::g::Fuse::Input::PointerEventArgs*> _lastArgs;
    double _lastUpTime;
    float _longPressTimeout;
    float _maxDoubleInterval;
    float _maxTapDistanceMoved;
    float _maxTapTimeHeld;
    bool _maybeTap;
    uStrong< ::g::Fuse::Node*> _node;
    ::g::Uno::Float2 _startCoord;
    double _startTime;
    int _tapCount;
    uStrong<uDelegate*> ClickedEvent1;
    uStrong<uDelegate*> LongPressedEvent1;
    uStrong<uDelegate*> PressingEvent1;
    uStrong<uDelegate*> TappedEvent1;

    void ctor_(::g::Fuse::Node* node);
    void add_ClickedEvent(uDelegate* value);
    void remove_ClickedEvent(uDelegate* value);
    void Detach();
    void DoneCapture();
    void add_LongPressedEvent(uDelegate* value);
    void remove_LongPressedEvent(uDelegate* value);
    bool NeedCapture();
    void OnLostCapture();
    void OnPointerMoved(uObject* sender, ::g::Fuse::Input::PointerMovedArgs* args);
    void OnPointerPressed(uObject* sender, ::g::Fuse::Input::PointerPressedArgs* args);
    void OnPointerReleased(uObject* sender, ::g::Fuse::Input::PointerReleasedArgs* args);
    void OnRooted();
    void OnUnrooted();
    void OnUpdate(uObject* s, uObject* a);
    void add_PressingEvent(uDelegate* value);
    void remove_PressingEvent(uDelegate* value);
    void ReleaseUpdate();
    void add_TappedEvent(uDelegate* value);
    void remove_TappedEvent(uDelegate* value);
    static Clicker* AttachClicker(::g::Fuse::Node* elm);
    static Clicker* New1(::g::Fuse::Node* node);
};
// }

}}} // ::g::Fuse::Gestures
