// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Controls\0.18.8\Triggers\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Triggers.Trigger.h>
namespace g{namespace Fuse{namespace Controls{struct TextEdit;}}}
namespace g{namespace Fuse{namespace Controls{struct TextInputActionArgs;}}}
namespace g{namespace Fuse{namespace Triggers{struct TextInputActionTriggered;}}}
namespace g{namespace Fuse{struct Node;}}

namespace g{
namespace Fuse{
namespace Triggers{

// public sealed class TextInputActionTriggered :419
// {
::g::Fuse::Triggers::Trigger_type* TextInputActionTriggered_typeof();
void TextInputActionTriggered__ctor_2_fn(TextInputActionTriggered* __this);
void TextInputActionTriggered__New1_fn(TextInputActionTriggered** __retval);
void TextInputActionTriggered__OnActionTriggered_fn(TextInputActionTriggered* __this, uObject* s, ::g::Fuse::Controls::TextInputActionArgs* args);
void TextInputActionTriggered__OnRooted_fn(TextInputActionTriggered* __this, ::g::Fuse::Node* parentNode);
void TextInputActionTriggered__OnUnrooted_fn(TextInputActionTriggered* __this, ::g::Fuse::Node* parentNode);
void TextInputActionTriggered__get_Type_fn(TextInputActionTriggered* __this, int* __retval);
void TextInputActionTriggered__set_Type_fn(TextInputActionTriggered* __this, int* value);

struct TextInputActionTriggered : ::g::Fuse::Triggers::Trigger
{
    uStrong< ::g::Fuse::Controls::TextEdit*> _textEdit;
    int _type;

    void ctor_2();
    void OnActionTriggered(uObject* s, ::g::Fuse::Controls::TextInputActionArgs* args);
    int Type();
    void Type(int value);
    static TextInputActionTriggered* New1();
};
// }

}}} // ::g::Fuse::Triggers
