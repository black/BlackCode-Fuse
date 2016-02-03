// This file was generated based on 'C:\ProgramData\Uno\Packages\FuseCore\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_FUSE_NODE_EVENT__FUSE_INPUT_IS_FOCUSABLE_CHANGED_HANDLER__FUSE_INPU_15DA236C_H__
#define __APP_FUSE_NODE_EVENT__FUSE_INPUT_IS_FOCUSABLE_CHANGED_HANDLER__FUSE_INPU_15DA236C_H__

#include <app/Uno.Object.h>
#include <Uno.h>
namespace app { namespace Fuse { namespace Input { struct IsFocusableChangedArgs; } } }
namespace app { namespace Fuse { struct Node; } }
namespace app { namespace Fuse { struct PropertyHandle; } }
namespace app { namespace Uno { namespace Collections { struct List__Fuse_Input_IsFocusableChangedHandler; } } }

namespace app {
namespace Fuse {

struct NodeEvent__Fuse_Input_IsFocusableChangedHandler__Fuse_Input_IsFocusableChangedArgs;

struct NodeEvent__Fuse_Input_IsFocusableChangedHandler__Fuse_Input_IsFocusableChangedArgs__uType : ::uClassType
{
    void(*__fp_Invoke)(NodeEvent__Fuse_Input_IsFocusableChangedHandler__Fuse_Input_IsFocusableChangedArgs*, ::uDelegate*, ::uObject*, ::app::Fuse::Input::IsFocusableChangedArgs*);
};

NodeEvent__Fuse_Input_IsFocusableChangedHandler__Fuse_Input_IsFocusableChangedArgs__uType* NodeEvent__Fuse_Input_IsFocusableChangedHandler__Fuse_Input_IsFocusableChangedArgs__typeof();

void NodeEvent__Fuse_Input_IsFocusableChangedHandler__Fuse_Input_IsFocusableChangedArgs___ObjInit(NodeEvent__Fuse_Input_IsFocusableChangedHandler__Fuse_Input_IsFocusableChangedArgs* __this);
void NodeEvent__Fuse_Input_IsFocusableChangedHandler__Fuse_Input_IsFocusableChangedArgs__AddGlobalHandler(NodeEvent__Fuse_Input_IsFocusableChangedHandler__Fuse_Input_IsFocusableChangedArgs* __this, ::uDelegate* handler);
void NodeEvent__Fuse_Input_IsFocusableChangedHandler__Fuse_Input_IsFocusableChangedArgs__AddHandler(NodeEvent__Fuse_Input_IsFocusableChangedHandler__Fuse_Input_IsFocusableChangedArgs* __this, ::app::Fuse::Node* node, ::uDelegate* handler);
void NodeEvent__Fuse_Input_IsFocusableChangedHandler__Fuse_Input_IsFocusableChangedArgs__InvokeGlobalHandlers(NodeEvent__Fuse_Input_IsFocusableChangedHandler__Fuse_Input_IsFocusableChangedArgs* __this, ::app::Fuse::Node* node, ::app::Fuse::Input::IsFocusableChangedArgs* args);
void NodeEvent__Fuse_Input_IsFocusableChangedHandler__Fuse_Input_IsFocusableChangedArgs__OnRaise(NodeEvent__Fuse_Input_IsFocusableChangedHandler__Fuse_Input_IsFocusableChangedArgs* __this, ::uObject* target, ::uArray* args);
void NodeEvent__Fuse_Input_IsFocusableChangedHandler__Fuse_Input_IsFocusableChangedArgs__OnRaiseEnabled(NodeEvent__Fuse_Input_IsFocusableChangedHandler__Fuse_Input_IsFocusableChangedArgs* __this, ::uObject* target, ::uArray* args);
void NodeEvent__Fuse_Input_IsFocusableChangedHandler__Fuse_Input_IsFocusableChangedArgs__Raise(NodeEvent__Fuse_Input_IsFocusableChangedHandler__Fuse_Input_IsFocusableChangedArgs* __this, ::app::Fuse::Input::IsFocusableChangedArgs* args, int type, bool bubble);
void NodeEvent__Fuse_Input_IsFocusableChangedHandler__Fuse_Input_IsFocusableChangedArgs__RaiseWithBubble(NodeEvent__Fuse_Input_IsFocusableChangedHandler__Fuse_Input_IsFocusableChangedArgs* __this, ::app::Fuse::Input::IsFocusableChangedArgs* args, int type);
void NodeEvent__Fuse_Input_IsFocusableChangedHandler__Fuse_Input_IsFocusableChangedArgs__RaiseWithoutBubble(NodeEvent__Fuse_Input_IsFocusableChangedHandler__Fuse_Input_IsFocusableChangedArgs* __this, ::app::Fuse::Input::IsFocusableChangedArgs* args, int type);
void NodeEvent__Fuse_Input_IsFocusableChangedHandler__Fuse_Input_IsFocusableChangedArgs__RemoveGlobalHandler(NodeEvent__Fuse_Input_IsFocusableChangedHandler__Fuse_Input_IsFocusableChangedArgs* __this, ::uDelegate* handler);
void NodeEvent__Fuse_Input_IsFocusableChangedHandler__Fuse_Input_IsFocusableChangedArgs__RemoveHandler(NodeEvent__Fuse_Input_IsFocusableChangedHandler__Fuse_Input_IsFocusableChangedArgs* __this, ::app::Fuse::Node* node, ::uDelegate* handler);

struct NodeEvent__Fuse_Input_IsFocusableChangedHandler__Fuse_Input_IsFocusableChangedArgs : ::uObject
{
    ::uStrong< ::app::Fuse::PropertyHandle*> _handle;
    ::uStrong< ::app::Uno::Collections::List__Fuse_Input_IsFocusableChangedHandler*> _globalHandlers;

    void _ObjInit() { NodeEvent__Fuse_Input_IsFocusableChangedHandler__Fuse_Input_IsFocusableChangedArgs___ObjInit(this); }
    void AddGlobalHandler(::uDelegate* handler) { NodeEvent__Fuse_Input_IsFocusableChangedHandler__Fuse_Input_IsFocusableChangedArgs__AddGlobalHandler(this, handler); }
    void AddHandler(::app::Fuse::Node* node, ::uDelegate* handler) { NodeEvent__Fuse_Input_IsFocusableChangedHandler__Fuse_Input_IsFocusableChangedArgs__AddHandler(this, node, handler); }
    void Invoke(::uDelegate* handler, ::uObject* sender, ::app::Fuse::Input::IsFocusableChangedArgs* args) { (((NodeEvent__Fuse_Input_IsFocusableChangedHandler__Fuse_Input_IsFocusableChangedArgs__uType*)this->__obj_type)->__fp_Invoke)(this, handler, sender, args); }
    void InvokeGlobalHandlers(::app::Fuse::Node* node, ::app::Fuse::Input::IsFocusableChangedArgs* args) { NodeEvent__Fuse_Input_IsFocusableChangedHandler__Fuse_Input_IsFocusableChangedArgs__InvokeGlobalHandlers(this, node, args); }
    void OnRaise(::uObject* target, ::uArray* args) { NodeEvent__Fuse_Input_IsFocusableChangedHandler__Fuse_Input_IsFocusableChangedArgs__OnRaise(this, target, args); }
    void OnRaiseEnabled(::uObject* target, ::uArray* args) { NodeEvent__Fuse_Input_IsFocusableChangedHandler__Fuse_Input_IsFocusableChangedArgs__OnRaiseEnabled(this, target, args); }
    void Raise(::app::Fuse::Input::IsFocusableChangedArgs* args, int type, bool bubble) { NodeEvent__Fuse_Input_IsFocusableChangedHandler__Fuse_Input_IsFocusableChangedArgs__Raise(this, args, type, bubble); }
    void RaiseWithBubble(::app::Fuse::Input::IsFocusableChangedArgs* args, int type) { NodeEvent__Fuse_Input_IsFocusableChangedHandler__Fuse_Input_IsFocusableChangedArgs__RaiseWithBubble(this, args, type); }
    void RaiseWithoutBubble(::app::Fuse::Input::IsFocusableChangedArgs* args, int type) { NodeEvent__Fuse_Input_IsFocusableChangedHandler__Fuse_Input_IsFocusableChangedArgs__RaiseWithoutBubble(this, args, type); }
    void RemoveGlobalHandler(::uDelegate* handler) { NodeEvent__Fuse_Input_IsFocusableChangedHandler__Fuse_Input_IsFocusableChangedArgs__RemoveGlobalHandler(this, handler); }
    void RemoveHandler(::app::Fuse::Node* node, ::uDelegate* handler) { NodeEvent__Fuse_Input_IsFocusableChangedHandler__Fuse_Input_IsFocusableChangedArgs__RemoveHandler(this, node, handler); }
};

}}


#endif
