// This file was generated based on 'C:\ProgramData\Uno\Packages\FuseCore\0.11.3\Input\UX\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_FUSE_INPUT_U_X_ATTACHED_FOCUS_MEMBERS_H__
#define __APP_FUSE_INPUT_U_X_ATTACHED_FOCUS_MEMBERS_H__

#include <Uno.h>
namespace app { namespace Fuse { struct Node; } }

namespace app {
namespace Fuse {
namespace Input {
namespace UX {

struct AttachedFocusMembers__uType : ::uClassType
{
};

AttachedFocusMembers__uType* AttachedFocusMembers__typeof();

void AttachedFocusMembers__AddFocusGainedHandler(::uStatic* __this, ::app::Fuse::Node* node, ::uDelegate* handler);
void AttachedFocusMembers__AddFocusLostHandler(::uStatic* __this, ::app::Fuse::Node* node, ::uDelegate* handler);
void AttachedFocusMembers__RemoveFocusGainedHandler(::uStatic* __this, ::app::Fuse::Node* node, ::uDelegate* handler);
void AttachedFocusMembers__RemoveFocusLostHandler(::uStatic* __this, ::app::Fuse::Node* node, ::uDelegate* handler);

}}}}


#endif
