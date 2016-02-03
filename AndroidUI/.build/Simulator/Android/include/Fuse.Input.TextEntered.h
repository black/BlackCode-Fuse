// This file was generated based on 'C:\ProgramData\Uno\Packages\FuseCore\0.18.8\Input\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Input.TextEnteredArgs.h>
#include <Fuse.Input.TextEnteredHandler.h>
#include <Fuse.NodeEvent-2.h>
namespace g{namespace Fuse{namespace Input{struct TextEntered;}}}

namespace g{
namespace Fuse{
namespace Input{

// internal sealed class TextEntered :1487
// {
::g::Fuse::NodeEvent_type* TextEntered_typeof();
void TextEntered__ctor_1_fn(TextEntered* __this);
void TextEntered__Invoke_fn(TextEntered* __this, uDelegate* handler, uObject* sender, ::g::Fuse::Input::TextEnteredArgs* args);
void TextEntered__New1_fn(TextEntered** __retval);

struct TextEntered : ::g::Fuse::NodeEvent
{
    void ctor_1();
    static TextEntered* New1();
};
// }

}}} // ::g::Fuse::Input
