// This file was generated based on 'C:\ProgramData\Uno\Packages\FuseCore\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_FUSE_NODE_EVENT__FUSE_INPUT_POINTER_PRESSED_HANDLER__FUSE_INPUT_PO_31778249_H__
#define __APP_FUSE_NODE_EVENT__FUSE_INPUT_POINTER_PRESSED_HANDLER__FUSE_INPUT_PO_31778249_H__

#include <app/Uno.Object.h>
#include <Uno.h>
namespace app { namespace Fuse { namespace Input { struct PointerPressedArgs; } } }
namespace app { namespace Fuse { struct Node; } }
namespace app { namespace Fuse { struct PropertyHandle; } }
namespace app { namespace Uno { namespace Collections { struct List__Fuse_Input_PointerPressedHandler; } } }

namespace app {
namespace Fuse {

struct NodeEvent__Fuse_Input_PointerPressedHandler__Fuse_Input_PointerPressedArgs;

struct NodeEvent__Fuse_Input_PointerPressedHandler__Fuse_Input_PointerPressedArgs__uType : ::uClassType
{
    void(*__fp_Invoke)(NodeEvent__Fuse_Input_PointerPressedHandler__Fuse_Input_PointerPressedArgs*, ::uDelegate*, ::uObject*, ::app::Fuse::Input::PointerPressedArgs*);
};

NodeEvent__Fuse_Input_PointerPressedHandler__Fuse_Input_PointerPressedArgs__uType* NodeEvent__Fuse_Input_PointerPressedHandler__Fuse_Input_PointerPressedArgs__typeof();

void NodeEvent__Fuse_Input_PointerPressedHandler__Fuse_Input_PointerPressedArgs___ObjInit(NodeEvent__Fuse_Input_PointerPressedHandler__Fuse_Input_PointerPressedArgs* __this);
void NodeEvent__Fuse_Input_PointerPressedHandler__Fuse_Input_PointerPressedArgs__AddGlobalHandler(NodeEvent__Fuse_Input_PointerPressedHandler__Fuse_Input_PointerPressedArgs* __this, ::uDelegate* handler);
void NodeEvent__Fuse_Input_PointerPressedHandler__Fuse_Input_PointerPressedArgs__AddHandler(NodeEvent__Fuse_Input_PointerPressedHandler__Fuse_Input_PointerPressedArgs* __this, ::app::Fuse::Node* node, ::uDelegate* handler);
void NodeEvent__Fuse_Input_PointerPressedHandler__Fuse_Input_PointerPressedArgs__InvokeGlobalHandlers(NodeEvent__Fuse_Input_PointerPressedHandler__Fuse_Input_PointerPressedArgs* __this, ::app::Fuse::Node* node, ::app::Fuse::Input::PointerPressedArgs* args);
void NodeEvent__Fuse_Input_PointerPressedHandler__Fuse_Input_PointerPressedArgs__OnRaise(NodeEvent__Fuse_Input_PointerPressedHandler__Fuse_Input_PointerPressedArgs* __this, ::uObject* target, ::uArray* args);
void NodeEvent__Fuse_Input_PointerPressedHandler__Fuse_Input_PointerPressedArgs__OnRaiseEnabled(NodeEvent__Fuse_Input_PointerPressedHandler__Fuse_Input_PointerPressedArgs* __this, ::uObject* target, ::uArray* args);
void NodeEvent__Fuse_Input_PointerPressedHandler__Fuse_Input_PointerPressedArgs__Raise(NodeEvent__Fuse_Input_PointerPressedHandler__Fuse_Input_PointerPressedArgs* __this, ::app::Fuse::Input::PointerPressedArgs* args, int type, bool bubble);
void NodeEvent__Fuse_Input_PointerPressedHandler__Fuse_Input_PointerPressedArgs__RaiseWithBubble(NodeEvent__Fuse_Input_PointerPressedHandler__Fuse_Input_PointerPressedArgs* __this, ::app::Fuse::Input::PointerPressedArgs* args, int type);
void NodeEvent__Fuse_Input_PointerPressedHandler__Fuse_Input_PointerPressedArgs__RaiseWithoutBubble(NodeEvent__Fuse_Input_PointerPressedHandler__Fuse_Input_PointerPressedArgs* __this, ::app::Fuse::Input::PointerPressedArgs* args, int type);
void NodeEvent__Fuse_Input_PointerPressedHandler__Fuse_Input_PointerPressedArgs__RemoveGlobalHandler(NodeEvent__Fuse_Input_PointerPressedHandler__Fuse_Input_PointerPressedArgs* __this, ::uDelegate* handler);
void NodeEvent__Fuse_Input_PointerPressedHandler__Fuse_Input_PointerPressedArgs__RemoveHandler(NodeEvent__Fuse_Input_PointerPressedHandler__Fuse_Input_PointerPressedArgs* __this, ::app::Fuse::Node* node, ::uDelegate* handler);

struct NodeEvent__Fuse_Input_PointerPressedHandler__Fuse_Input_PointerPressedArgs : ::uObject
{
    ::uStrong< ::app::Fuse::PropertyHandle*> _handle;
    ::uStrong< ::app::Uno::Collections::List__Fuse_Input_PointerPressedHandler*> _globalHandlers;

    void _ObjInit() { NodeEvent__Fuse_Input_PointerPressedHandler__Fuse_Input_PointerPressedArgs___ObjInit(this); }
    void AddGlobalHandler(::uDelegate* handler) { NodeEvent__Fuse_Input_PointerPressedHandler__Fuse_Input_PointerPressedArgs__AddGlobalHandler(this, handler); }
    void AddHandler(::app::Fuse::Node* node, ::uDelegate* handler) { NodeEvent__Fuse_Input_PointerPressedHandler__Fuse_Input_PointerPressedArgs__AddHandler(this, node, handler); }
    void Invoke(::uDelegate* handler, ::uObject* sender, ::app::Fuse::Input::PointerPressedArgs* args) { (((NodeEvent__Fuse_Input_PointerPressedHandler__Fuse_Input_PointerPressedArgs__uType*)this->__obj_type)->__fp_Invoke)(this, handler, sender, args); }
    void InvokeGlobalHandlers(::app::Fuse::Node* node, ::app::Fuse::Input::PointerPressedArgs* args) { NodeEvent__Fuse_Input_PointerPressedHandler__Fuse_Input_PointerPressedArgs__InvokeGlobalHandlers(this, node, args); }
    void OnRaise(::uObject* target, ::uArray* args) { NodeEvent__Fuse_Input_PointerPressedHandler__Fuse_Input_PointerPressedArgs__OnRaise(this, target, args); }
    void OnRaiseEnabled(::uObject* target, ::uArray* args) { NodeEvent__Fuse_Input_PointerPressedHandler__Fuse_Input_PointerPressedArgs__OnRaiseEnabled(this, target, args); }
    void Raise(::app::Fuse::Input::PointerPressedArgs* args, int type, bool bubble) { NodeEvent__Fuse_Input_PointerPressedHandler__Fuse_Input_PointerPressedArgs__Raise(this, args, type, bubble); }
    void RaiseWithBubble(::app::Fuse::Input::PointerPressedArgs* args, int type) { NodeEvent__Fuse_Input_PointerPressedHandler__Fuse_Input_PointerPressedArgs__RaiseWithBubble(this, args, type); }
    void RaiseWithoutBubble(::app::Fuse::Input::PointerPressedArgs* args, int type) { NodeEvent__Fuse_Input_PointerPressedHandler__Fuse_Input_PointerPressedArgs__RaiseWithoutBubble(this, args, type); }
    void RemoveGlobalHandler(::uDelegate* handler) { NodeEvent__Fuse_Input_PointerPressedHandler__Fuse_Input_PointerPressedArgs__RemoveGlobalHandler(this, handler); }
    void RemoveHandler(::app::Fuse::Node* node, ::uDelegate* handler) { NodeEvent__Fuse_Input_PointerPressedHandler__Fuse_Input_PointerPressedArgs__RemoveHandler(this, node, handler); }
};

}}


#endif
