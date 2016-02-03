// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Gestures\0.18.8\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Gestures.ClickerTrigger.h>
namespace g{namespace Fuse{namespace Gestures{struct DoubleClicked;}}}
namespace g{namespace Fuse{namespace Input{struct PointerEventArgs;}}}
namespace g{namespace Fuse{struct Node;}}

namespace g{
namespace Fuse{
namespace Gestures{

// public sealed class DoubleClicked :65
// {
::g::Fuse::Triggers::Trigger_type* DoubleClicked_typeof();
void DoubleClicked__ctor_3_fn(DoubleClicked* __this);
void DoubleClicked__add_Handler_fn(DoubleClicked* __this, uDelegate* value);
void DoubleClicked__remove_Handler_fn(DoubleClicked* __this, uDelegate* value);
void DoubleClicked__New1_fn(DoubleClicked** __retval);
void DoubleClicked__OnClicked_fn(DoubleClicked* __this, ::g::Fuse::Input::PointerEventArgs* args, int* clickCount);
void DoubleClicked__OnRooted_fn(DoubleClicked* __this, ::g::Fuse::Node* parentNode);
void DoubleClicked__OnUnrooted_fn(DoubleClicked* __this, ::g::Fuse::Node* parentNode);

struct DoubleClicked : ::g::Fuse::Gestures::ClickerTrigger
{
    uStrong<uDelegate*> Handler1;

    void ctor_3();
    void add_Handler(uDelegate* value);
    void remove_Handler(uDelegate* value);
    void OnClicked(::g::Fuse::Input::PointerEventArgs* args, int clickCount);
    static DoubleClicked* New1();
};
// }

}}} // ::g::Fuse::Gestures
