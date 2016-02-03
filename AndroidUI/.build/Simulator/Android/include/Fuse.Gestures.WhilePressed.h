// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Gestures\0.18.8\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Triggers.WhileTrigger.h>
namespace g{namespace Fuse{namespace Gestures{struct Clicker;}}}
namespace g{namespace Fuse{namespace Gestures{struct WhilePressed;}}}
namespace g{namespace Fuse{namespace Input{struct PointerEventArgs;}}}
namespace g{namespace Fuse{struct Node;}}

namespace g{
namespace Fuse{
namespace Gestures{

// public sealed class WhilePressed :285
// {
::g::Fuse::Triggers::Trigger_type* WhilePressed_typeof();
void WhilePressed__ctor_3_fn(WhilePressed* __this);
void WhilePressed__get_Capture_fn(WhilePressed* __this, bool* __retval);
void WhilePressed__set_Capture_fn(WhilePressed* __this, bool* value);
void WhilePressed__CheckStatus_fn(WhilePressed* __this, uObject* s, uObject* a);
void WhilePressed__New1_fn(WhilePressed** __retval);
void WhilePressed__OnClickerPressing_fn(WhilePressed* __this, ::g::Fuse::Input::PointerEventArgs* args, int* count);
void WhilePressed__OnPointerEntered_fn(WhilePressed* __this, uObject* sender, uObject* args);
void WhilePressed__OnPointerLeft_fn(WhilePressed* __this, uObject* sender, uObject* args);
void WhilePressed__OnRooted_fn(WhilePressed* __this, ::g::Fuse::Node* parentNode);
void WhilePressed__OnUnrooted_fn(WhilePressed* __this, ::g::Fuse::Node* parentNode);
void WhilePressed__get_PointerType_fn(WhilePressed* __this, int* __retval);
void WhilePressed__set_PointerType_fn(WhilePressed* __this, int* value);

struct WhilePressed : ::g::Fuse::Triggers::WhileTrigger
{
    bool _inside;
    int _pointerType;
    uStrong< ::g::Fuse::Gestures::Clicker*> Clicker;
    bool _Capture;

    void ctor_3();
    bool Capture();
    void Capture(bool value);
    void CheckStatus(uObject* s, uObject* a);
    void OnClickerPressing(::g::Fuse::Input::PointerEventArgs* args, int count);
    void OnPointerEntered(uObject* sender, uObject* args);
    void OnPointerLeft(uObject* sender, uObject* args);
    int PointerType();
    void PointerType(int value);
    static WhilePressed* New1();
};
// }

}}} // ::g::Fuse::Gestures
