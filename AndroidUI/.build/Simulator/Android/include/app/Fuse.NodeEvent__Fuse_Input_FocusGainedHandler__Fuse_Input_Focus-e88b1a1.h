// This file was generated based on 'C:\ProgramData\Uno\Packages\FuseCore\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_FUSE_NODE_EVENT__FUSE_INPUT_FOCUS_GAINED_HANDLER__FUSE_INPUT_FOCUS_E88B1A1_H__
#define __APP_FUSE_NODE_EVENT__FUSE_INPUT_FOCUS_GAINED_HANDLER__FUSE_INPUT_FOCUS_E88B1A1_H__

#include <app/Uno.Object.h>
#include <Uno.h>
namespace app { namespace Fuse { namespace Input { struct FocusGainedArgs; } } }
namespace app { namespace Fuse { struct Node; } }
namespace app { namespace Fuse { struct PropertyHandle; } }
namespace app { namespace Uno { namespace Collections { struct List__Fuse_Input_FocusGainedHandler; } } }

namespace app {
namespace Fuse {

struct NodeEvent__Fuse_Input_FocusGainedHandler__Fuse_Input_FocusGainedArgs;

struct NodeEvent__Fuse_Input_FocusGainedHandler__Fuse_Input_FocusGainedArgs__uType : ::uClassType
{
    void(*__fp_Invoke)(NodeEvent__Fuse_Input_FocusGainedHandler__Fuse_Input_FocusGainedArgs*, ::uDelegate*, ::uObject*, ::app::Fuse::Input::FocusGainedArgs*);
};

NodeEvent__Fuse_Input_FocusGainedHandler__Fuse_Input_FocusGainedArgs__uType* NodeEvent__Fuse_Input_FocusGainedHandler__Fuse_Input_FocusGainedArgs__typeof();

void NodeEvent__Fuse_Input_FocusGainedHandler__Fuse_Input_FocusGainedArgs___ObjInit(NodeEvent__Fuse_Input_FocusGainedHandler__Fuse_Input_FocusGainedArgs* __this);
void NodeEvent__Fuse_Input_FocusGainedHandler__Fuse_Input_FocusGainedArgs__AddGlobalHandler(NodeEvent__Fuse_Input_FocusGainedHandler__Fuse_Input_FocusGainedArgs* __this, ::uDelegate* handler);
void NodeEvent__Fuse_Input_FocusGainedHandler__Fuse_Input_FocusGainedArgs__AddHandler(NodeEvent__Fuse_Input_FocusGainedHandler__Fuse_Input_FocusGainedArgs* __this, ::app::Fuse::Node* node, ::uDelegate* handler);
void NodeEvent__Fuse_Input_FocusGainedHandler__Fuse_Input_FocusGainedArgs__InvokeGlobalHandlers(NodeEvent__Fuse_Input_FocusGainedHandler__Fuse_Input_FocusGainedArgs* __this, ::app::Fuse::Node* node, ::app::Fuse::Input::FocusGainedArgs* args);
void NodeEvent__Fuse_Input_FocusGainedHandler__Fuse_Input_FocusGainedArgs__OnRaise(NodeEvent__Fuse_Input_FocusGainedHandler__Fuse_Input_FocusGainedArgs* __this, ::uObject* target, ::uArray* args);
void NodeEvent__Fuse_Input_FocusGainedHandler__Fuse_Input_FocusGainedArgs__OnRaiseEnabled(NodeEvent__Fuse_Input_FocusGainedHandler__Fuse_Input_FocusGainedArgs* __this, ::uObject* target, ::uArray* args);
void NodeEvent__Fuse_Input_FocusGainedHandler__Fuse_Input_FocusGainedArgs__Raise(NodeEvent__Fuse_Input_FocusGainedHandler__Fuse_Input_FocusGainedArgs* __this, ::app::Fuse::Input::FocusGainedArgs* args, int type, bool bubble);
void NodeEvent__Fuse_Input_FocusGainedHandler__Fuse_Input_FocusGainedArgs__RaiseWithBubble(NodeEvent__Fuse_Input_FocusGainedHandler__Fuse_Input_FocusGainedArgs* __this, ::app::Fuse::Input::FocusGainedArgs* args, int type);
void NodeEvent__Fuse_Input_FocusGainedHandler__Fuse_Input_FocusGainedArgs__RaiseWithoutBubble(NodeEvent__Fuse_Input_FocusGainedHandler__Fuse_Input_FocusGainedArgs* __this, ::app::Fuse::Input::FocusGainedArgs* args, int type);
void NodeEvent__Fuse_Input_FocusGainedHandler__Fuse_Input_FocusGainedArgs__RemoveGlobalHandler(NodeEvent__Fuse_Input_FocusGainedHandler__Fuse_Input_FocusGainedArgs* __this, ::uDelegate* handler);
void NodeEvent__Fuse_Input_FocusGainedHandler__Fuse_Input_FocusGainedArgs__RemoveHandler(NodeEvent__Fuse_Input_FocusGainedHandler__Fuse_Input_FocusGainedArgs* __this, ::app::Fuse::Node* node, ::uDelegate* handler);

struct NodeEvent__Fuse_Input_FocusGainedHandler__Fuse_Input_FocusGainedArgs : ::uObject
{
    ::uStrong< ::app::Fuse::PropertyHandle*> _handle;
    ::uStrong< ::app::Uno::Collections::List__Fuse_Input_FocusGainedHandler*> _globalHandlers;

    void _ObjInit() { NodeEvent__Fuse_Input_FocusGainedHandler__Fuse_Input_FocusGainedArgs___ObjInit(this); }
    void AddGlobalHandler(::uDelegate* handler) { NodeEvent__Fuse_Input_FocusGainedHandler__Fuse_Input_FocusGainedArgs__AddGlobalHandler(this, handler); }
    void AddHandler(::app::Fuse::Node* node, ::uDelegate* handler) { NodeEvent__Fuse_Input_FocusGainedHandler__Fuse_Input_FocusGainedArgs__AddHandler(this, node, handler); }
    void Invoke(::uDelegate* handler, ::uObject* sender, ::app::Fuse::Input::FocusGainedArgs* args) { (((NodeEvent__Fuse_Input_FocusGainedHandler__Fuse_Input_FocusGainedArgs__uType*)this->__obj_type)->__fp_Invoke)(this, handler, sender, args); }
    void InvokeGlobalHandlers(::app::Fuse::Node* node, ::app::Fuse::Input::FocusGainedArgs* args) { NodeEvent__Fuse_Input_FocusGainedHandler__Fuse_Input_FocusGainedArgs__InvokeGlobalHandlers(this, node, args); }
    void OnRaise(::uObject* target, ::uArray* args) { NodeEvent__Fuse_Input_FocusGainedHandler__Fuse_Input_FocusGainedArgs__OnRaise(this, target, args); }
    void OnRaiseEnabled(::uObject* target, ::uArray* args) { NodeEvent__Fuse_Input_FocusGainedHandler__Fuse_Input_FocusGainedArgs__OnRaiseEnabled(this, target, args); }
    void Raise(::app::Fuse::Input::FocusGainedArgs* args, int type, bool bubble) { NodeEvent__Fuse_Input_FocusGainedHandler__Fuse_Input_FocusGainedArgs__Raise(this, args, type, bubble); }
    void RaiseWithBubble(::app::Fuse::Input::FocusGainedArgs* args, int type) { NodeEvent__Fuse_Input_FocusGainedHandler__Fuse_Input_FocusGainedArgs__RaiseWithBubble(this, args, type); }
    void RaiseWithoutBubble(::app::Fuse::Input::FocusGainedArgs* args, int type) { NodeEvent__Fuse_Input_FocusGainedHandler__Fuse_Input_FocusGainedArgs__RaiseWithoutBubble(this, args, type); }
    void RemoveGlobalHandler(::uDelegate* handler) { NodeEvent__Fuse_Input_FocusGainedHandler__Fuse_Input_FocusGainedArgs__RemoveGlobalHandler(this, handler); }
    void RemoveHandler(::app::Fuse::Node* node, ::uDelegate* handler) { NodeEvent__Fuse_Input_FocusGainedHandler__Fuse_Input_FocusGainedArgs__RemoveHandler(this, node, handler); }
};

}}


#endif
