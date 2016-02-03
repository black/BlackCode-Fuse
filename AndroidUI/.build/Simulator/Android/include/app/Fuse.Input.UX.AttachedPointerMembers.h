// This file was generated based on 'C:\ProgramData\Uno\Packages\FuseCore\0.11.3\Input\UX\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_FUSE_INPUT_U_X_ATTACHED_POINTER_MEMBERS_H__
#define __APP_FUSE_INPUT_U_X_ATTACHED_POINTER_MEMBERS_H__

#include <Uno.h>
namespace app { namespace Fuse { struct Node; } }

namespace app {
namespace Fuse {
namespace Input {
namespace UX {

struct AttachedPointerMembers__uType : ::uClassType
{
};

AttachedPointerMembers__uType* AttachedPointerMembers__typeof();

void AttachedPointerMembers__AddEnteredHandler(::uStatic* __this, ::app::Fuse::Node* node, ::uDelegate* handler);
void AttachedPointerMembers__AddLeftHandler(::uStatic* __this, ::app::Fuse::Node* node, ::uDelegate* handler);
void AttachedPointerMembers__AddMovedHandler(::uStatic* __this, ::app::Fuse::Node* node, ::uDelegate* handler);
void AttachedPointerMembers__AddPressedHandler(::uStatic* __this, ::app::Fuse::Node* node, ::uDelegate* handler);
void AttachedPointerMembers__AddReleasedHandler(::uStatic* __this, ::app::Fuse::Node* node, ::uDelegate* handler);
void AttachedPointerMembers__AddWheelMovedHandler(::uStatic* __this, ::app::Fuse::Node* node, ::uDelegate* handler);
void AttachedPointerMembers__RemoveEnteredHandler(::uStatic* __this, ::app::Fuse::Node* node, ::uDelegate* handler);
void AttachedPointerMembers__RemoveLeftHandler(::uStatic* __this, ::app::Fuse::Node* node, ::uDelegate* handler);
void AttachedPointerMembers__RemoveMovedHandler(::uStatic* __this, ::app::Fuse::Node* node, ::uDelegate* handler);
void AttachedPointerMembers__RemovePressedHandler(::uStatic* __this, ::app::Fuse::Node* node, ::uDelegate* handler);
void AttachedPointerMembers__RemoveReleasedHandler(::uStatic* __this, ::app::Fuse::Node* node, ::uDelegate* handler);
void AttachedPointerMembers__RemoveWheelMovedHandler(::uStatic* __this, ::app::Fuse::Node* node, ::uDelegate* handler);

}}}}


#endif
