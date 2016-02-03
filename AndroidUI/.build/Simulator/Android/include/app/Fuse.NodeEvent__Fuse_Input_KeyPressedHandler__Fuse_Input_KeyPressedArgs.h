// This file was generated based on 'C:\ProgramData\Uno\Packages\FuseCore\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_FUSE_NODE_EVENT__FUSE_INPUT_KEY_PRESSED_HANDLER__FUSE_INPUT_KEY_PRESSED_ARGS_H__
#define __APP_FUSE_NODE_EVENT__FUSE_INPUT_KEY_PRESSED_HANDLER__FUSE_INPUT_KEY_PRESSED_ARGS_H__

#include <app/Uno.Object.h>
#include <Uno.h>
namespace app { namespace Fuse { namespace Input { struct KeyPressedArgs; } } }
namespace app { namespace Fuse { struct Node; } }
namespace app { namespace Fuse { struct PropertyHandle; } }
namespace app { namespace Uno { namespace Collections { struct List__Fuse_Input_KeyPressedHandler; } } }

namespace app {
namespace Fuse {

struct NodeEvent__Fuse_Input_KeyPressedHandler__Fuse_Input_KeyPressedArgs;

struct NodeEvent__Fuse_Input_KeyPressedHandler__Fuse_Input_KeyPressedArgs__uType : ::uClassType
{
    void(*__fp_Invoke)(NodeEvent__Fuse_Input_KeyPressedHandler__Fuse_Input_KeyPressedArgs*, ::uDelegate*, ::uObject*, ::app::Fuse::Input::KeyPressedArgs*);
};

NodeEvent__Fuse_Input_KeyPressedHandler__Fuse_Input_KeyPressedArgs__uType* NodeEvent__Fuse_Input_KeyPressedHandler__Fuse_Input_KeyPressedArgs__typeof();

void NodeEvent__Fuse_Input_KeyPressedHandler__Fuse_Input_KeyPressedArgs___ObjInit(NodeEvent__Fuse_Input_KeyPressedHandler__Fuse_Input_KeyPressedArgs* __this);
void NodeEvent__Fuse_Input_KeyPressedHandler__Fuse_Input_KeyPressedArgs__AddGlobalHandler(NodeEvent__Fuse_Input_KeyPressedHandler__Fuse_Input_KeyPressedArgs* __this, ::uDelegate* handler);
void NodeEvent__Fuse_Input_KeyPressedHandler__Fuse_Input_KeyPressedArgs__AddHandler(NodeEvent__Fuse_Input_KeyPressedHandler__Fuse_Input_KeyPressedArgs* __this, ::app::Fuse::Node* node, ::uDelegate* handler);
void NodeEvent__Fuse_Input_KeyPressedHandler__Fuse_Input_KeyPressedArgs__InvokeGlobalHandlers(NodeEvent__Fuse_Input_KeyPressedHandler__Fuse_Input_KeyPressedArgs* __this, ::app::Fuse::Node* node, ::app::Fuse::Input::KeyPressedArgs* args);
void NodeEvent__Fuse_Input_KeyPressedHandler__Fuse_Input_KeyPressedArgs__OnRaise(NodeEvent__Fuse_Input_KeyPressedHandler__Fuse_Input_KeyPressedArgs* __this, ::uObject* target, ::uArray* args);
void NodeEvent__Fuse_Input_KeyPressedHandler__Fuse_Input_KeyPressedArgs__OnRaiseEnabled(NodeEvent__Fuse_Input_KeyPressedHandler__Fuse_Input_KeyPressedArgs* __this, ::uObject* target, ::uArray* args);
void NodeEvent__Fuse_Input_KeyPressedHandler__Fuse_Input_KeyPressedArgs__Raise(NodeEvent__Fuse_Input_KeyPressedHandler__Fuse_Input_KeyPressedArgs* __this, ::app::Fuse::Input::KeyPressedArgs* args, int type, bool bubble);
void NodeEvent__Fuse_Input_KeyPressedHandler__Fuse_Input_KeyPressedArgs__RaiseWithBubble(NodeEvent__Fuse_Input_KeyPressedHandler__Fuse_Input_KeyPressedArgs* __this, ::app::Fuse::Input::KeyPressedArgs* args, int type);
void NodeEvent__Fuse_Input_KeyPressedHandler__Fuse_Input_KeyPressedArgs__RaiseWithoutBubble(NodeEvent__Fuse_Input_KeyPressedHandler__Fuse_Input_KeyPressedArgs* __this, ::app::Fuse::Input::KeyPressedArgs* args, int type);
void NodeEvent__Fuse_Input_KeyPressedHandler__Fuse_Input_KeyPressedArgs__RemoveGlobalHandler(NodeEvent__Fuse_Input_KeyPressedHandler__Fuse_Input_KeyPressedArgs* __this, ::uDelegate* handler);
void NodeEvent__Fuse_Input_KeyPressedHandler__Fuse_Input_KeyPressedArgs__RemoveHandler(NodeEvent__Fuse_Input_KeyPressedHandler__Fuse_Input_KeyPressedArgs* __this, ::app::Fuse::Node* node, ::uDelegate* handler);

struct NodeEvent__Fuse_Input_KeyPressedHandler__Fuse_Input_KeyPressedArgs : ::uObject
{
    ::uStrong< ::app::Fuse::PropertyHandle*> _handle;
    ::uStrong< ::app::Uno::Collections::List__Fuse_Input_KeyPressedHandler*> _globalHandlers;

    void _ObjInit() { NodeEvent__Fuse_Input_KeyPressedHandler__Fuse_Input_KeyPressedArgs___ObjInit(this); }
    void AddGlobalHandler(::uDelegate* handler) { NodeEvent__Fuse_Input_KeyPressedHandler__Fuse_Input_KeyPressedArgs__AddGlobalHandler(this, handler); }
    void AddHandler(::app::Fuse::Node* node, ::uDelegate* handler) { NodeEvent__Fuse_Input_KeyPressedHandler__Fuse_Input_KeyPressedArgs__AddHandler(this, node, handler); }
    void Invoke(::uDelegate* handler, ::uObject* sender, ::app::Fuse::Input::KeyPressedArgs* args) { (((NodeEvent__Fuse_Input_KeyPressedHandler__Fuse_Input_KeyPressedArgs__uType*)this->__obj_type)->__fp_Invoke)(this, handler, sender, args); }
    void InvokeGlobalHandlers(::app::Fuse::Node* node, ::app::Fuse::Input::KeyPressedArgs* args) { NodeEvent__Fuse_Input_KeyPressedHandler__Fuse_Input_KeyPressedArgs__InvokeGlobalHandlers(this, node, args); }
    void OnRaise(::uObject* target, ::uArray* args) { NodeEvent__Fuse_Input_KeyPressedHandler__Fuse_Input_KeyPressedArgs__OnRaise(this, target, args); }
    void OnRaiseEnabled(::uObject* target, ::uArray* args) { NodeEvent__Fuse_Input_KeyPressedHandler__Fuse_Input_KeyPressedArgs__OnRaiseEnabled(this, target, args); }
    void Raise(::app::Fuse::Input::KeyPressedArgs* args, int type, bool bubble) { NodeEvent__Fuse_Input_KeyPressedHandler__Fuse_Input_KeyPressedArgs__Raise(this, args, type, bubble); }
    void RaiseWithBubble(::app::Fuse::Input::KeyPressedArgs* args, int type) { NodeEvent__Fuse_Input_KeyPressedHandler__Fuse_Input_KeyPressedArgs__RaiseWithBubble(this, args, type); }
    void RaiseWithoutBubble(::app::Fuse::Input::KeyPressedArgs* args, int type) { NodeEvent__Fuse_Input_KeyPressedHandler__Fuse_Input_KeyPressedArgs__RaiseWithoutBubble(this, args, type); }
    void RemoveGlobalHandler(::uDelegate* handler) { NodeEvent__Fuse_Input_KeyPressedHandler__Fuse_Input_KeyPressedArgs__RemoveGlobalHandler(this, handler); }
    void RemoveHandler(::app::Fuse::Node* node, ::uDelegate* handler) { NodeEvent__Fuse_Input_KeyPressedHandler__Fuse_Input_KeyPressedArgs__RemoveHandler(this, node, handler); }
};

}}


#endif
