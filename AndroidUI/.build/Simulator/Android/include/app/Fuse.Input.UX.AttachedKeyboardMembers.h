// This file was generated based on 'C:\ProgramData\Uno\Packages\FuseCore\0.11.3\Input\UX\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_FUSE_INPUT_U_X_ATTACHED_KEYBOARD_MEMBERS_H__
#define __APP_FUSE_INPUT_U_X_ATTACHED_KEYBOARD_MEMBERS_H__

#include <Uno.h>
namespace app { namespace Fuse { struct Node; } }

namespace app {
namespace Fuse {
namespace Input {
namespace UX {

struct AttachedKeyboardMembers__uType : ::uClassType
{
};

AttachedKeyboardMembers__uType* AttachedKeyboardMembers__typeof();

void AttachedKeyboardMembers__AddKeyPressedHandler(::uStatic* __this, ::app::Fuse::Node* node, ::uDelegate* handler);
void AttachedKeyboardMembers__AddKeyReleasedHandler(::uStatic* __this, ::app::Fuse::Node* node, ::uDelegate* handler);
void AttachedKeyboardMembers__RemoveKeyPressedHandler(::uStatic* __this, ::app::Fuse::Node* node, ::uDelegate* handler);
void AttachedKeyboardMembers__RemoveKeyReleasedHandler(::uStatic* __this, ::app::Fuse::Node* node, ::uDelegate* handler);

}}}}


#endif
