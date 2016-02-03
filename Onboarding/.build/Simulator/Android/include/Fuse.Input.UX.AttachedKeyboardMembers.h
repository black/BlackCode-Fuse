// This file was generated based on 'C:\ProgramData\Uno\Packages\FuseCore\0.19.3\Input\UX\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.h>
namespace g{namespace Fuse{namespace Input{namespace UX{struct AttachedKeyboardMembers;}}}}
namespace g{namespace Fuse{struct Node;}}

namespace g{
namespace Fuse{
namespace Input{
namespace UX{

// public static class AttachedKeyboardMembers :40
// {
uClassType* AttachedKeyboardMembers_typeof();
void AttachedKeyboardMembers__AddKeyPressedHandler_fn(::g::Fuse::Node* node, uDelegate* handler);
void AttachedKeyboardMembers__AddKeyReleasedHandler_fn(::g::Fuse::Node* node, uDelegate* handler);
void AttachedKeyboardMembers__RemoveKeyPressedHandler_fn(::g::Fuse::Node* node, uDelegate* handler);
void AttachedKeyboardMembers__RemoveKeyReleasedHandler_fn(::g::Fuse::Node* node, uDelegate* handler);

struct AttachedKeyboardMembers : uObject
{
    static void AddKeyPressedHandler(::g::Fuse::Node* node, uDelegate* handler);
    static void AddKeyReleasedHandler(::g::Fuse::Node* node, uDelegate* handler);
    static void RemoveKeyPressedHandler(::g::Fuse::Node* node, uDelegate* handler);
    static void RemoveKeyReleasedHandler(::g::Fuse::Node* node, uDelegate* handler);
};
// }

}}}} // ::g::Fuse::Input::UX
