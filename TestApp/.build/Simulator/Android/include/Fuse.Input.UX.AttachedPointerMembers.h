// This file was generated based on 'C:\ProgramData\Uno\Packages\FuseCore\0.18.8\Input\UX\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.h>
namespace g{namespace Fuse{namespace Input{namespace UX{struct AttachedPointerMembers;}}}}
namespace g{namespace Fuse{struct Node;}}

namespace g{
namespace Fuse{
namespace Input{
namespace UX{

// public static class AttachedPointerMembers :73
// {
uClassType* AttachedPointerMembers_typeof();
void AttachedPointerMembers__AddEnteredHandler_fn(::g::Fuse::Node* node, uDelegate* handler);
void AttachedPointerMembers__AddLeftHandler_fn(::g::Fuse::Node* node, uDelegate* handler);
void AttachedPointerMembers__AddMovedHandler_fn(::g::Fuse::Node* node, uDelegate* handler);
void AttachedPointerMembers__AddPressedHandler_fn(::g::Fuse::Node* node, uDelegate* handler);
void AttachedPointerMembers__AddReleasedHandler_fn(::g::Fuse::Node* node, uDelegate* handler);
void AttachedPointerMembers__AddWheelMovedHandler_fn(::g::Fuse::Node* node, uDelegate* handler);
void AttachedPointerMembers__RemoveEnteredHandler_fn(::g::Fuse::Node* node, uDelegate* handler);
void AttachedPointerMembers__RemoveLeftHandler_fn(::g::Fuse::Node* node, uDelegate* handler);
void AttachedPointerMembers__RemoveMovedHandler_fn(::g::Fuse::Node* node, uDelegate* handler);
void AttachedPointerMembers__RemovePressedHandler_fn(::g::Fuse::Node* node, uDelegate* handler);
void AttachedPointerMembers__RemoveReleasedHandler_fn(::g::Fuse::Node* node, uDelegate* handler);
void AttachedPointerMembers__RemoveWheelMovedHandler_fn(::g::Fuse::Node* node, uDelegate* handler);

struct AttachedPointerMembers : uObject
{
    static void AddEnteredHandler(::g::Fuse::Node* node, uDelegate* handler);
    static void AddLeftHandler(::g::Fuse::Node* node, uDelegate* handler);
    static void AddMovedHandler(::g::Fuse::Node* node, uDelegate* handler);
    static void AddPressedHandler(::g::Fuse::Node* node, uDelegate* handler);
    static void AddReleasedHandler(::g::Fuse::Node* node, uDelegate* handler);
    static void AddWheelMovedHandler(::g::Fuse::Node* node, uDelegate* handler);
    static void RemoveEnteredHandler(::g::Fuse::Node* node, uDelegate* handler);
    static void RemoveLeftHandler(::g::Fuse::Node* node, uDelegate* handler);
    static void RemoveMovedHandler(::g::Fuse::Node* node, uDelegate* handler);
    static void RemovePressedHandler(::g::Fuse::Node* node, uDelegate* handler);
    static void RemoveReleasedHandler(::g::Fuse::Node* node, uDelegate* handler);
    static void RemoveWheelMovedHandler(::g::Fuse::Node* node, uDelegate* handler);
};
// }

}}}} // ::g::Fuse::Input::UX
