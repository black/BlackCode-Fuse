// This file was generated based on 'C:\ProgramData\Uno\Packages\FuseCore\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_FUSE_NODE_EVENT__FUSE_INPUT_POINTER_MOVED_HANDLER__FUSE_INPUT_POIN_C465A3E6_H__
#define __APP_FUSE_NODE_EVENT__FUSE_INPUT_POINTER_MOVED_HANDLER__FUSE_INPUT_POIN_C465A3E6_H__

#include <app/Uno.Object.h>
#include <Uno.h>
namespace app { namespace Fuse { namespace Input { struct PointerMovedArgs; } } }
namespace app { namespace Fuse { struct Node; } }
namespace app { namespace Fuse { struct PropertyHandle; } }
namespace app { namespace Uno { namespace Collections { struct List__Fuse_Input_PointerMovedHandler; } } }

namespace app {
namespace Fuse {

struct NodeEvent__Fuse_Input_PointerMovedHandler__Fuse_Input_PointerMovedArgs;

struct NodeEvent__Fuse_Input_PointerMovedHandler__Fuse_Input_PointerMovedArgs__uType : ::uClassType
{
    void(*__fp_Invoke)(NodeEvent__Fuse_Input_PointerMovedHandler__Fuse_Input_PointerMovedArgs*, ::uDelegate*, ::uObject*, ::app::Fuse::Input::PointerMovedArgs*);
};

NodeEvent__Fuse_Input_PointerMovedHandler__Fuse_Input_PointerMovedArgs__uType* NodeEvent__Fuse_Input_PointerMovedHandler__Fuse_Input_PointerMovedArgs__typeof();

void NodeEvent__Fuse_Input_PointerMovedHandler__Fuse_Input_PointerMovedArgs___ObjInit(NodeEvent__Fuse_Input_PointerMovedHandler__Fuse_Input_PointerMovedArgs* __this);
void NodeEvent__Fuse_Input_PointerMovedHandler__Fuse_Input_PointerMovedArgs__AddGlobalHandler(NodeEvent__Fuse_Input_PointerMovedHandler__Fuse_Input_PointerMovedArgs* __this, ::uDelegate* handler);
void NodeEvent__Fuse_Input_PointerMovedHandler__Fuse_Input_PointerMovedArgs__AddHandler(NodeEvent__Fuse_Input_PointerMovedHandler__Fuse_Input_PointerMovedArgs* __this, ::app::Fuse::Node* node, ::uDelegate* handler);
void NodeEvent__Fuse_Input_PointerMovedHandler__Fuse_Input_PointerMovedArgs__InvokeGlobalHandlers(NodeEvent__Fuse_Input_PointerMovedHandler__Fuse_Input_PointerMovedArgs* __this, ::app::Fuse::Node* node, ::app::Fuse::Input::PointerMovedArgs* args);
void NodeEvent__Fuse_Input_PointerMovedHandler__Fuse_Input_PointerMovedArgs__OnRaise(NodeEvent__Fuse_Input_PointerMovedHandler__Fuse_Input_PointerMovedArgs* __this, ::uObject* target, ::uArray* args);
void NodeEvent__Fuse_Input_PointerMovedHandler__Fuse_Input_PointerMovedArgs__OnRaiseEnabled(NodeEvent__Fuse_Input_PointerMovedHandler__Fuse_Input_PointerMovedArgs* __this, ::uObject* target, ::uArray* args);
void NodeEvent__Fuse_Input_PointerMovedHandler__Fuse_Input_PointerMovedArgs__Raise(NodeEvent__Fuse_Input_PointerMovedHandler__Fuse_Input_PointerMovedArgs* __this, ::app::Fuse::Input::PointerMovedArgs* args, int type, bool bubble);
void NodeEvent__Fuse_Input_PointerMovedHandler__Fuse_Input_PointerMovedArgs__RaiseWithBubble(NodeEvent__Fuse_Input_PointerMovedHandler__Fuse_Input_PointerMovedArgs* __this, ::app::Fuse::Input::PointerMovedArgs* args, int type);
void NodeEvent__Fuse_Input_PointerMovedHandler__Fuse_Input_PointerMovedArgs__RaiseWithoutBubble(NodeEvent__Fuse_Input_PointerMovedHandler__Fuse_Input_PointerMovedArgs* __this, ::app::Fuse::Input::PointerMovedArgs* args, int type);
void NodeEvent__Fuse_Input_PointerMovedHandler__Fuse_Input_PointerMovedArgs__RemoveGlobalHandler(NodeEvent__Fuse_Input_PointerMovedHandler__Fuse_Input_PointerMovedArgs* __this, ::uDelegate* handler);
void NodeEvent__Fuse_Input_PointerMovedHandler__Fuse_Input_PointerMovedArgs__RemoveHandler(NodeEvent__Fuse_Input_PointerMovedHandler__Fuse_Input_PointerMovedArgs* __this, ::app::Fuse::Node* node, ::uDelegate* handler);

struct NodeEvent__Fuse_Input_PointerMovedHandler__Fuse_Input_PointerMovedArgs : ::uObject
{
    ::uStrong< ::app::Fuse::PropertyHandle*> _handle;
    ::uStrong< ::app::Uno::Collections::List__Fuse_Input_PointerMovedHandler*> _globalHandlers;

    void _ObjInit() { NodeEvent__Fuse_Input_PointerMovedHandler__Fuse_Input_PointerMovedArgs___ObjInit(this); }
    void AddGlobalHandler(::uDelegate* handler) { NodeEvent__Fuse_Input_PointerMovedHandler__Fuse_Input_PointerMovedArgs__AddGlobalHandler(this, handler); }
    void AddHandler(::app::Fuse::Node* node, ::uDelegate* handler) { NodeEvent__Fuse_Input_PointerMovedHandler__Fuse_Input_PointerMovedArgs__AddHandler(this, node, handler); }
    void Invoke(::uDelegate* handler, ::uObject* sender, ::app::Fuse::Input::PointerMovedArgs* args) { (((NodeEvent__Fuse_Input_PointerMovedHandler__Fuse_Input_PointerMovedArgs__uType*)this->__obj_type)->__fp_Invoke)(this, handler, sender, args); }
    void InvokeGlobalHandlers(::app::Fuse::Node* node, ::app::Fuse::Input::PointerMovedArgs* args) { NodeEvent__Fuse_Input_PointerMovedHandler__Fuse_Input_PointerMovedArgs__InvokeGlobalHandlers(this, node, args); }
    void OnRaise(::uObject* target, ::uArray* args) { NodeEvent__Fuse_Input_PointerMovedHandler__Fuse_Input_PointerMovedArgs__OnRaise(this, target, args); }
    void OnRaiseEnabled(::uObject* target, ::uArray* args) { NodeEvent__Fuse_Input_PointerMovedHandler__Fuse_Input_PointerMovedArgs__OnRaiseEnabled(this, target, args); }
    void Raise(::app::Fuse::Input::PointerMovedArgs* args, int type, bool bubble) { NodeEvent__Fuse_Input_PointerMovedHandler__Fuse_Input_PointerMovedArgs__Raise(this, args, type, bubble); }
    void RaiseWithBubble(::app::Fuse::Input::PointerMovedArgs* args, int type) { NodeEvent__Fuse_Input_PointerMovedHandler__Fuse_Input_PointerMovedArgs__RaiseWithBubble(this, args, type); }
    void RaiseWithoutBubble(::app::Fuse::Input::PointerMovedArgs* args, int type) { NodeEvent__Fuse_Input_PointerMovedHandler__Fuse_Input_PointerMovedArgs__RaiseWithoutBubble(this, args, type); }
    void RemoveGlobalHandler(::uDelegate* handler) { NodeEvent__Fuse_Input_PointerMovedHandler__Fuse_Input_PointerMovedArgs__RemoveGlobalHandler(this, handler); }
    void RemoveHandler(::app::Fuse::Node* node, ::uDelegate* handler) { NodeEvent__Fuse_Input_PointerMovedHandler__Fuse_Input_PointerMovedArgs__RemoveHandler(this, node, handler); }
};

}}


#endif
