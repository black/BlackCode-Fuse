// This file was generated based on 'C:\ProgramData\Uno\Packages\FuseCore\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_FUSE_NODE_EVENT__FUSE_INPUT_POINTER_RELEASED_HANDLER__FUSE_INPUT_P_DDE60E76_H__
#define __APP_FUSE_NODE_EVENT__FUSE_INPUT_POINTER_RELEASED_HANDLER__FUSE_INPUT_P_DDE60E76_H__

#include <app/Uno.Object.h>
#include <Uno.h>
namespace app { namespace Fuse { namespace Input { struct PointerReleasedArgs; } } }
namespace app { namespace Fuse { struct Node; } }
namespace app { namespace Fuse { struct PropertyHandle; } }
namespace app { namespace Uno { namespace Collections { struct List__Fuse_Input_PointerReleasedHandler; } } }

namespace app {
namespace Fuse {

struct NodeEvent__Fuse_Input_PointerReleasedHandler__Fuse_Input_PointerReleasedArgs;

struct NodeEvent__Fuse_Input_PointerReleasedHandler__Fuse_Input_PointerReleasedArgs__uType : ::uClassType
{
    void(*__fp_Invoke)(NodeEvent__Fuse_Input_PointerReleasedHandler__Fuse_Input_PointerReleasedArgs*, ::uDelegate*, ::uObject*, ::app::Fuse::Input::PointerReleasedArgs*);
};

NodeEvent__Fuse_Input_PointerReleasedHandler__Fuse_Input_PointerReleasedArgs__uType* NodeEvent__Fuse_Input_PointerReleasedHandler__Fuse_Input_PointerReleasedArgs__typeof();

void NodeEvent__Fuse_Input_PointerReleasedHandler__Fuse_Input_PointerReleasedArgs___ObjInit(NodeEvent__Fuse_Input_PointerReleasedHandler__Fuse_Input_PointerReleasedArgs* __this);
void NodeEvent__Fuse_Input_PointerReleasedHandler__Fuse_Input_PointerReleasedArgs__AddGlobalHandler(NodeEvent__Fuse_Input_PointerReleasedHandler__Fuse_Input_PointerReleasedArgs* __this, ::uDelegate* handler);
void NodeEvent__Fuse_Input_PointerReleasedHandler__Fuse_Input_PointerReleasedArgs__AddHandler(NodeEvent__Fuse_Input_PointerReleasedHandler__Fuse_Input_PointerReleasedArgs* __this, ::app::Fuse::Node* node, ::uDelegate* handler);
void NodeEvent__Fuse_Input_PointerReleasedHandler__Fuse_Input_PointerReleasedArgs__InvokeGlobalHandlers(NodeEvent__Fuse_Input_PointerReleasedHandler__Fuse_Input_PointerReleasedArgs* __this, ::app::Fuse::Node* node, ::app::Fuse::Input::PointerReleasedArgs* args);
void NodeEvent__Fuse_Input_PointerReleasedHandler__Fuse_Input_PointerReleasedArgs__OnRaise(NodeEvent__Fuse_Input_PointerReleasedHandler__Fuse_Input_PointerReleasedArgs* __this, ::uObject* target, ::uArray* args);
void NodeEvent__Fuse_Input_PointerReleasedHandler__Fuse_Input_PointerReleasedArgs__OnRaiseEnabled(NodeEvent__Fuse_Input_PointerReleasedHandler__Fuse_Input_PointerReleasedArgs* __this, ::uObject* target, ::uArray* args);
void NodeEvent__Fuse_Input_PointerReleasedHandler__Fuse_Input_PointerReleasedArgs__Raise(NodeEvent__Fuse_Input_PointerReleasedHandler__Fuse_Input_PointerReleasedArgs* __this, ::app::Fuse::Input::PointerReleasedArgs* args, int type, bool bubble);
void NodeEvent__Fuse_Input_PointerReleasedHandler__Fuse_Input_PointerReleasedArgs__RaiseWithBubble(NodeEvent__Fuse_Input_PointerReleasedHandler__Fuse_Input_PointerReleasedArgs* __this, ::app::Fuse::Input::PointerReleasedArgs* args, int type);
void NodeEvent__Fuse_Input_PointerReleasedHandler__Fuse_Input_PointerReleasedArgs__RaiseWithoutBubble(NodeEvent__Fuse_Input_PointerReleasedHandler__Fuse_Input_PointerReleasedArgs* __this, ::app::Fuse::Input::PointerReleasedArgs* args, int type);
void NodeEvent__Fuse_Input_PointerReleasedHandler__Fuse_Input_PointerReleasedArgs__RemoveGlobalHandler(NodeEvent__Fuse_Input_PointerReleasedHandler__Fuse_Input_PointerReleasedArgs* __this, ::uDelegate* handler);
void NodeEvent__Fuse_Input_PointerReleasedHandler__Fuse_Input_PointerReleasedArgs__RemoveHandler(NodeEvent__Fuse_Input_PointerReleasedHandler__Fuse_Input_PointerReleasedArgs* __this, ::app::Fuse::Node* node, ::uDelegate* handler);

struct NodeEvent__Fuse_Input_PointerReleasedHandler__Fuse_Input_PointerReleasedArgs : ::uObject
{
    ::uStrong< ::app::Fuse::PropertyHandle*> _handle;
    ::uStrong< ::app::Uno::Collections::List__Fuse_Input_PointerReleasedHandler*> _globalHandlers;

    void _ObjInit() { NodeEvent__Fuse_Input_PointerReleasedHandler__Fuse_Input_PointerReleasedArgs___ObjInit(this); }
    void AddGlobalHandler(::uDelegate* handler) { NodeEvent__Fuse_Input_PointerReleasedHandler__Fuse_Input_PointerReleasedArgs__AddGlobalHandler(this, handler); }
    void AddHandler(::app::Fuse::Node* node, ::uDelegate* handler) { NodeEvent__Fuse_Input_PointerReleasedHandler__Fuse_Input_PointerReleasedArgs__AddHandler(this, node, handler); }
    void Invoke(::uDelegate* handler, ::uObject* sender, ::app::Fuse::Input::PointerReleasedArgs* args) { (((NodeEvent__Fuse_Input_PointerReleasedHandler__Fuse_Input_PointerReleasedArgs__uType*)this->__obj_type)->__fp_Invoke)(this, handler, sender, args); }
    void InvokeGlobalHandlers(::app::Fuse::Node* node, ::app::Fuse::Input::PointerReleasedArgs* args) { NodeEvent__Fuse_Input_PointerReleasedHandler__Fuse_Input_PointerReleasedArgs__InvokeGlobalHandlers(this, node, args); }
    void OnRaise(::uObject* target, ::uArray* args) { NodeEvent__Fuse_Input_PointerReleasedHandler__Fuse_Input_PointerReleasedArgs__OnRaise(this, target, args); }
    void OnRaiseEnabled(::uObject* target, ::uArray* args) { NodeEvent__Fuse_Input_PointerReleasedHandler__Fuse_Input_PointerReleasedArgs__OnRaiseEnabled(this, target, args); }
    void Raise(::app::Fuse::Input::PointerReleasedArgs* args, int type, bool bubble) { NodeEvent__Fuse_Input_PointerReleasedHandler__Fuse_Input_PointerReleasedArgs__Raise(this, args, type, bubble); }
    void RaiseWithBubble(::app::Fuse::Input::PointerReleasedArgs* args, int type) { NodeEvent__Fuse_Input_PointerReleasedHandler__Fuse_Input_PointerReleasedArgs__RaiseWithBubble(this, args, type); }
    void RaiseWithoutBubble(::app::Fuse::Input::PointerReleasedArgs* args, int type) { NodeEvent__Fuse_Input_PointerReleasedHandler__Fuse_Input_PointerReleasedArgs__RaiseWithoutBubble(this, args, type); }
    void RemoveGlobalHandler(::uDelegate* handler) { NodeEvent__Fuse_Input_PointerReleasedHandler__Fuse_Input_PointerReleasedArgs__RemoveGlobalHandler(this, handler); }
    void RemoveHandler(::app::Fuse::Node* node, ::uDelegate* handler) { NodeEvent__Fuse_Input_PointerReleasedHandler__Fuse_Input_PointerReleasedArgs__RemoveHandler(this, node, handler); }
};

}}


#endif
