// This file was generated based on 'C:\ProgramData\Uno\Packages\FuseCore\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_FUSE_NODE_EVENT__FUSE_INPUT_FOCUS_LOST_HANDLER__FUSE_INPUT_FOCUS_LOST_ARGS_H__
#define __APP_FUSE_NODE_EVENT__FUSE_INPUT_FOCUS_LOST_HANDLER__FUSE_INPUT_FOCUS_LOST_ARGS_H__

#include <app/Uno.Object.h>
#include <Uno.h>
namespace app { namespace Fuse { namespace Input { struct FocusLostArgs; } } }
namespace app { namespace Fuse { struct Node; } }
namespace app { namespace Fuse { struct PropertyHandle; } }
namespace app { namespace Uno { namespace Collections { struct List__Fuse_Input_FocusLostHandler; } } }

namespace app {
namespace Fuse {

struct NodeEvent__Fuse_Input_FocusLostHandler__Fuse_Input_FocusLostArgs;

struct NodeEvent__Fuse_Input_FocusLostHandler__Fuse_Input_FocusLostArgs__uType : ::uClassType
{
    void(*__fp_Invoke)(NodeEvent__Fuse_Input_FocusLostHandler__Fuse_Input_FocusLostArgs*, ::uDelegate*, ::uObject*, ::app::Fuse::Input::FocusLostArgs*);
};

NodeEvent__Fuse_Input_FocusLostHandler__Fuse_Input_FocusLostArgs__uType* NodeEvent__Fuse_Input_FocusLostHandler__Fuse_Input_FocusLostArgs__typeof();

void NodeEvent__Fuse_Input_FocusLostHandler__Fuse_Input_FocusLostArgs___ObjInit(NodeEvent__Fuse_Input_FocusLostHandler__Fuse_Input_FocusLostArgs* __this);
void NodeEvent__Fuse_Input_FocusLostHandler__Fuse_Input_FocusLostArgs__AddGlobalHandler(NodeEvent__Fuse_Input_FocusLostHandler__Fuse_Input_FocusLostArgs* __this, ::uDelegate* handler);
void NodeEvent__Fuse_Input_FocusLostHandler__Fuse_Input_FocusLostArgs__AddHandler(NodeEvent__Fuse_Input_FocusLostHandler__Fuse_Input_FocusLostArgs* __this, ::app::Fuse::Node* node, ::uDelegate* handler);
void NodeEvent__Fuse_Input_FocusLostHandler__Fuse_Input_FocusLostArgs__InvokeGlobalHandlers(NodeEvent__Fuse_Input_FocusLostHandler__Fuse_Input_FocusLostArgs* __this, ::app::Fuse::Node* node, ::app::Fuse::Input::FocusLostArgs* args);
void NodeEvent__Fuse_Input_FocusLostHandler__Fuse_Input_FocusLostArgs__OnRaise(NodeEvent__Fuse_Input_FocusLostHandler__Fuse_Input_FocusLostArgs* __this, ::uObject* target, ::uArray* args);
void NodeEvent__Fuse_Input_FocusLostHandler__Fuse_Input_FocusLostArgs__OnRaiseEnabled(NodeEvent__Fuse_Input_FocusLostHandler__Fuse_Input_FocusLostArgs* __this, ::uObject* target, ::uArray* args);
void NodeEvent__Fuse_Input_FocusLostHandler__Fuse_Input_FocusLostArgs__Raise(NodeEvent__Fuse_Input_FocusLostHandler__Fuse_Input_FocusLostArgs* __this, ::app::Fuse::Input::FocusLostArgs* args, int type, bool bubble);
void NodeEvent__Fuse_Input_FocusLostHandler__Fuse_Input_FocusLostArgs__RaiseWithBubble(NodeEvent__Fuse_Input_FocusLostHandler__Fuse_Input_FocusLostArgs* __this, ::app::Fuse::Input::FocusLostArgs* args, int type);
void NodeEvent__Fuse_Input_FocusLostHandler__Fuse_Input_FocusLostArgs__RaiseWithoutBubble(NodeEvent__Fuse_Input_FocusLostHandler__Fuse_Input_FocusLostArgs* __this, ::app::Fuse::Input::FocusLostArgs* args, int type);
void NodeEvent__Fuse_Input_FocusLostHandler__Fuse_Input_FocusLostArgs__RemoveGlobalHandler(NodeEvent__Fuse_Input_FocusLostHandler__Fuse_Input_FocusLostArgs* __this, ::uDelegate* handler);
void NodeEvent__Fuse_Input_FocusLostHandler__Fuse_Input_FocusLostArgs__RemoveHandler(NodeEvent__Fuse_Input_FocusLostHandler__Fuse_Input_FocusLostArgs* __this, ::app::Fuse::Node* node, ::uDelegate* handler);

struct NodeEvent__Fuse_Input_FocusLostHandler__Fuse_Input_FocusLostArgs : ::uObject
{
    ::uStrong< ::app::Fuse::PropertyHandle*> _handle;
    ::uStrong< ::app::Uno::Collections::List__Fuse_Input_FocusLostHandler*> _globalHandlers;

    void _ObjInit() { NodeEvent__Fuse_Input_FocusLostHandler__Fuse_Input_FocusLostArgs___ObjInit(this); }
    void AddGlobalHandler(::uDelegate* handler) { NodeEvent__Fuse_Input_FocusLostHandler__Fuse_Input_FocusLostArgs__AddGlobalHandler(this, handler); }
    void AddHandler(::app::Fuse::Node* node, ::uDelegate* handler) { NodeEvent__Fuse_Input_FocusLostHandler__Fuse_Input_FocusLostArgs__AddHandler(this, node, handler); }
    void Invoke(::uDelegate* handler, ::uObject* sender, ::app::Fuse::Input::FocusLostArgs* args) { (((NodeEvent__Fuse_Input_FocusLostHandler__Fuse_Input_FocusLostArgs__uType*)this->__obj_type)->__fp_Invoke)(this, handler, sender, args); }
    void InvokeGlobalHandlers(::app::Fuse::Node* node, ::app::Fuse::Input::FocusLostArgs* args) { NodeEvent__Fuse_Input_FocusLostHandler__Fuse_Input_FocusLostArgs__InvokeGlobalHandlers(this, node, args); }
    void OnRaise(::uObject* target, ::uArray* args) { NodeEvent__Fuse_Input_FocusLostHandler__Fuse_Input_FocusLostArgs__OnRaise(this, target, args); }
    void OnRaiseEnabled(::uObject* target, ::uArray* args) { NodeEvent__Fuse_Input_FocusLostHandler__Fuse_Input_FocusLostArgs__OnRaiseEnabled(this, target, args); }
    void Raise(::app::Fuse::Input::FocusLostArgs* args, int type, bool bubble) { NodeEvent__Fuse_Input_FocusLostHandler__Fuse_Input_FocusLostArgs__Raise(this, args, type, bubble); }
    void RaiseWithBubble(::app::Fuse::Input::FocusLostArgs* args, int type) { NodeEvent__Fuse_Input_FocusLostHandler__Fuse_Input_FocusLostArgs__RaiseWithBubble(this, args, type); }
    void RaiseWithoutBubble(::app::Fuse::Input::FocusLostArgs* args, int type) { NodeEvent__Fuse_Input_FocusLostHandler__Fuse_Input_FocusLostArgs__RaiseWithoutBubble(this, args, type); }
    void RemoveGlobalHandler(::uDelegate* handler) { NodeEvent__Fuse_Input_FocusLostHandler__Fuse_Input_FocusLostArgs__RemoveGlobalHandler(this, handler); }
    void RemoveHandler(::app::Fuse::Node* node, ::uDelegate* handler) { NodeEvent__Fuse_Input_FocusLostHandler__Fuse_Input_FocusLostArgs__RemoveHandler(this, node, handler); }
};

}}


#endif
