// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Controls\0.19.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.NodeEventArgs.h>
namespace g{namespace Fuse{namespace Controls{struct TextInputActionArgs;}}}
namespace g{namespace Fuse{struct Node;}}

namespace g{
namespace Fuse{
namespace Controls{

// public sealed class TextInputActionArgs :4018
// {
uType* TextInputActionArgs_typeof();
void TextInputActionArgs__ctor_2_fn(TextInputActionArgs* __this, ::g::Fuse::Node* node, int* type);
void TextInputActionArgs__New3_fn(::g::Fuse::Node* node, int* type, TextInputActionArgs** __retval);
void TextInputActionArgs__get_Type_fn(TextInputActionArgs* __this, int* __retval);
void TextInputActionArgs__set_Type_fn(TextInputActionArgs* __this, int* value);

struct TextInputActionArgs : ::g::Fuse::NodeEventArgs
{
    int _Type;

    void ctor_2(::g::Fuse::Node* node, int type);
    int Type();
    void Type(int value);
    static TextInputActionArgs* New3(::g::Fuse::Node* node, int type);
};
// }

}}} // ::g::Fuse::Controls
