// This file was generated based on 'C:\ProgramData\Uno\Packages\FuseCore\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_FUSE_NODE_EVENT__FUSE_INPUT_POINTER_WHEEL_MOVED_HANDLER__FUSE_INPUT_2CE16824_H__
#define __APP_FUSE_NODE_EVENT__FUSE_INPUT_POINTER_WHEEL_MOVED_HANDLER__FUSE_INPUT_2CE16824_H__

#include <app/Uno.Object.h>
#include <Uno.h>
namespace app { namespace Fuse { namespace Input { struct PointerWheelMovedArgs; } } }
namespace app { namespace Fuse { struct Node; } }
namespace app { namespace Fuse { struct PropertyHandle; } }
namespace app { namespace Uno { namespace Collections { struct List__Fuse_Input_PointerWheelMovedHandler; } } }

namespace app {
namespace Fuse {

struct NodeEvent__Fuse_Input_PointerWheelMovedHandler__Fuse_Input_PointerWheelMovedArgs;

struct NodeEvent__Fuse_Input_PointerWheelMovedHandler__Fuse_Input_PointerWheelMovedArgs__uType : ::uClassType
{
    void(*__fp_Invoke)(NodeEvent__Fuse_Input_PointerWheelMovedHandler__Fuse_Input_PointerWheelMovedArgs*, ::uDelegate*, ::uObject*, ::app::Fuse::Input::PointerWheelMovedArgs*);
};

NodeEvent__Fuse_Input_PointerWheelMovedHandler__Fuse_Input_PointerWheelMovedArgs__uType* NodeEvent__Fuse_Input_PointerWheelMovedHandler__Fuse_Input_PointerWheelMovedArgs__typeof();

void NodeEvent__Fuse_Input_PointerWheelMovedHandler__Fuse_Input_PointerWheelMovedArgs___ObjInit(NodeEvent__Fuse_Input_PointerWheelMovedHandler__Fuse_Input_PointerWheelMovedArgs* __this);
void NodeEvent__Fuse_Input_PointerWheelMovedHandler__Fuse_Input_PointerWheelMovedArgs__AddGlobalHandler(NodeEvent__Fuse_Input_PointerWheelMovedHandler__Fuse_Input_PointerWheelMovedArgs* __this, ::uDelegate* handler);
void NodeEvent__Fuse_Input_PointerWheelMovedHandler__Fuse_Input_PointerWheelMovedArgs__AddHandler(NodeEvent__Fuse_Input_PointerWheelMovedHandler__Fuse_Input_PointerWheelMovedArgs* __this, ::app::Fuse::Node* node, ::uDelegate* handler);
void NodeEvent__Fuse_Input_PointerWheelMovedHandler__Fuse_Input_PointerWheelMovedArgs__InvokeGlobalHandlers(NodeEvent__Fuse_Input_PointerWheelMovedHandler__Fuse_Input_PointerWheelMovedArgs* __this, ::app::Fuse::Node* node, ::app::Fuse::Input::PointerWheelMovedArgs* args);
void NodeEvent__Fuse_Input_PointerWheelMovedHandler__Fuse_Input_PointerWheelMovedArgs__OnRaise(NodeEvent__Fuse_Input_PointerWheelMovedHandler__Fuse_Input_PointerWheelMovedArgs* __this, ::uObject* target, ::uArray* args);
void NodeEvent__Fuse_Input_PointerWheelMovedHandler__Fuse_Input_PointerWheelMovedArgs__OnRaiseEnabled(NodeEvent__Fuse_Input_PointerWheelMovedHandler__Fuse_Input_PointerWheelMovedArgs* __this, ::uObject* target, ::uArray* args);
void NodeEvent__Fuse_Input_PointerWheelMovedHandler__Fuse_Input_PointerWheelMovedArgs__Raise(NodeEvent__Fuse_Input_PointerWheelMovedHandler__Fuse_Input_PointerWheelMovedArgs* __this, ::app::Fuse::Input::PointerWheelMovedArgs* args, int type, bool bubble);
void NodeEvent__Fuse_Input_PointerWheelMovedHandler__Fuse_Input_PointerWheelMovedArgs__RaiseWithBubble(NodeEvent__Fuse_Input_PointerWheelMovedHandler__Fuse_Input_PointerWheelMovedArgs* __this, ::app::Fuse::Input::PointerWheelMovedArgs* args, int type);
void NodeEvent__Fuse_Input_PointerWheelMovedHandler__Fuse_Input_PointerWheelMovedArgs__RaiseWithoutBubble(NodeEvent__Fuse_Input_PointerWheelMovedHandler__Fuse_Input_PointerWheelMovedArgs* __this, ::app::Fuse::Input::PointerWheelMovedArgs* args, int type);
void NodeEvent__Fuse_Input_PointerWheelMovedHandler__Fuse_Input_PointerWheelMovedArgs__RemoveGlobalHandler(NodeEvent__Fuse_Input_PointerWheelMovedHandler__Fuse_Input_PointerWheelMovedArgs* __this, ::uDelegate* handler);
void NodeEvent__Fuse_Input_PointerWheelMovedHandler__Fuse_Input_PointerWheelMovedArgs__RemoveHandler(NodeEvent__Fuse_Input_PointerWheelMovedHandler__Fuse_Input_PointerWheelMovedArgs* __this, ::app::Fuse::Node* node, ::uDelegate* handler);

struct NodeEvent__Fuse_Input_PointerWheelMovedHandler__Fuse_Input_PointerWheelMovedArgs : ::uObject
{
    ::uStrong< ::app::Fuse::PropertyHandle*> _handle;
    ::uStrong< ::app::Uno::Collections::List__Fuse_Input_PointerWheelMovedHandler*> _globalHandlers;

    void _ObjInit() { NodeEvent__Fuse_Input_PointerWheelMovedHandler__Fuse_Input_PointerWheelMovedArgs___ObjInit(this); }
    void AddGlobalHandler(::uDelegate* handler) { NodeEvent__Fuse_Input_PointerWheelMovedHandler__Fuse_Input_PointerWheelMovedArgs__AddGlobalHandler(this, handler); }
    void AddHandler(::app::Fuse::Node* node, ::uDelegate* handler) { NodeEvent__Fuse_Input_PointerWheelMovedHandler__Fuse_Input_PointerWheelMovedArgs__AddHandler(this, node, handler); }
    void Invoke(::uDelegate* handler, ::uObject* sender, ::app::Fuse::Input::PointerWheelMovedArgs* args) { (((NodeEvent__Fuse_Input_PointerWheelMovedHandler__Fuse_Input_PointerWheelMovedArgs__uType*)this->__obj_type)->__fp_Invoke)(this, handler, sender, args); }
    void InvokeGlobalHandlers(::app::Fuse::Node* node, ::app::Fuse::Input::PointerWheelMovedArgs* args) { NodeEvent__Fuse_Input_PointerWheelMovedHandler__Fuse_Input_PointerWheelMovedArgs__InvokeGlobalHandlers(this, node, args); }
    void OnRaise(::uObject* target, ::uArray* args) { NodeEvent__Fuse_Input_PointerWheelMovedHandler__Fuse_Input_PointerWheelMovedArgs__OnRaise(this, target, args); }
    void OnRaiseEnabled(::uObject* target, ::uArray* args) { NodeEvent__Fuse_Input_PointerWheelMovedHandler__Fuse_Input_PointerWheelMovedArgs__OnRaiseEnabled(this, target, args); }
    void Raise(::app::Fuse::Input::PointerWheelMovedArgs* args, int type, bool bubble) { NodeEvent__Fuse_Input_PointerWheelMovedHandler__Fuse_Input_PointerWheelMovedArgs__Raise(this, args, type, bubble); }
    void RaiseWithBubble(::app::Fuse::Input::PointerWheelMovedArgs* args, int type) { NodeEvent__Fuse_Input_PointerWheelMovedHandler__Fuse_Input_PointerWheelMovedArgs__RaiseWithBubble(this, args, type); }
    void RaiseWithoutBubble(::app::Fuse::Input::PointerWheelMovedArgs* args, int type) { NodeEvent__Fuse_Input_PointerWheelMovedHandler__Fuse_Input_PointerWheelMovedArgs__RaiseWithoutBubble(this, args, type); }
    void RemoveGlobalHandler(::uDelegate* handler) { NodeEvent__Fuse_Input_PointerWheelMovedHandler__Fuse_Input_PointerWheelMovedArgs__RemoveGlobalHandler(this, handler); }
    void RemoveHandler(::app::Fuse::Node* node, ::uDelegate* handler) { NodeEvent__Fuse_Input_PointerWheelMovedHandler__Fuse_Input_PointerWheelMovedArgs__RemoveHandler(this, node, handler); }
};

}}


#endif
