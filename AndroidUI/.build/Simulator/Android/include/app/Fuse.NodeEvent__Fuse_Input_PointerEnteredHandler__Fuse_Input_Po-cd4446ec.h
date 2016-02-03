// This file was generated based on 'C:\ProgramData\Uno\Packages\FuseCore\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_FUSE_NODE_EVENT__FUSE_INPUT_POINTER_ENTERED_HANDLER__FUSE_INPUT_PO_CD4446EC_H__
#define __APP_FUSE_NODE_EVENT__FUSE_INPUT_POINTER_ENTERED_HANDLER__FUSE_INPUT_PO_CD4446EC_H__

#include <app/Uno.Object.h>
#include <Uno.h>
namespace app { namespace Fuse { namespace Input { struct PointerEnteredArgs; } } }
namespace app { namespace Fuse { struct Node; } }
namespace app { namespace Fuse { struct PropertyHandle; } }
namespace app { namespace Uno { namespace Collections { struct List__Fuse_Input_PointerEnteredHandler; } } }

namespace app {
namespace Fuse {

struct NodeEvent__Fuse_Input_PointerEnteredHandler__Fuse_Input_PointerEnteredArgs;

struct NodeEvent__Fuse_Input_PointerEnteredHandler__Fuse_Input_PointerEnteredArgs__uType : ::uClassType
{
    void(*__fp_Invoke)(NodeEvent__Fuse_Input_PointerEnteredHandler__Fuse_Input_PointerEnteredArgs*, ::uDelegate*, ::uObject*, ::app::Fuse::Input::PointerEnteredArgs*);
};

NodeEvent__Fuse_Input_PointerEnteredHandler__Fuse_Input_PointerEnteredArgs__uType* NodeEvent__Fuse_Input_PointerEnteredHandler__Fuse_Input_PointerEnteredArgs__typeof();

void NodeEvent__Fuse_Input_PointerEnteredHandler__Fuse_Input_PointerEnteredArgs___ObjInit(NodeEvent__Fuse_Input_PointerEnteredHandler__Fuse_Input_PointerEnteredArgs* __this);
void NodeEvent__Fuse_Input_PointerEnteredHandler__Fuse_Input_PointerEnteredArgs__AddGlobalHandler(NodeEvent__Fuse_Input_PointerEnteredHandler__Fuse_Input_PointerEnteredArgs* __this, ::uDelegate* handler);
void NodeEvent__Fuse_Input_PointerEnteredHandler__Fuse_Input_PointerEnteredArgs__AddHandler(NodeEvent__Fuse_Input_PointerEnteredHandler__Fuse_Input_PointerEnteredArgs* __this, ::app::Fuse::Node* node, ::uDelegate* handler);
void NodeEvent__Fuse_Input_PointerEnteredHandler__Fuse_Input_PointerEnteredArgs__InvokeGlobalHandlers(NodeEvent__Fuse_Input_PointerEnteredHandler__Fuse_Input_PointerEnteredArgs* __this, ::app::Fuse::Node* node, ::app::Fuse::Input::PointerEnteredArgs* args);
void NodeEvent__Fuse_Input_PointerEnteredHandler__Fuse_Input_PointerEnteredArgs__OnRaise(NodeEvent__Fuse_Input_PointerEnteredHandler__Fuse_Input_PointerEnteredArgs* __this, ::uObject* target, ::uArray* args);
void NodeEvent__Fuse_Input_PointerEnteredHandler__Fuse_Input_PointerEnteredArgs__OnRaiseEnabled(NodeEvent__Fuse_Input_PointerEnteredHandler__Fuse_Input_PointerEnteredArgs* __this, ::uObject* target, ::uArray* args);
void NodeEvent__Fuse_Input_PointerEnteredHandler__Fuse_Input_PointerEnteredArgs__Raise(NodeEvent__Fuse_Input_PointerEnteredHandler__Fuse_Input_PointerEnteredArgs* __this, ::app::Fuse::Input::PointerEnteredArgs* args, int type, bool bubble);
void NodeEvent__Fuse_Input_PointerEnteredHandler__Fuse_Input_PointerEnteredArgs__RaiseWithBubble(NodeEvent__Fuse_Input_PointerEnteredHandler__Fuse_Input_PointerEnteredArgs* __this, ::app::Fuse::Input::PointerEnteredArgs* args, int type);
void NodeEvent__Fuse_Input_PointerEnteredHandler__Fuse_Input_PointerEnteredArgs__RaiseWithoutBubble(NodeEvent__Fuse_Input_PointerEnteredHandler__Fuse_Input_PointerEnteredArgs* __this, ::app::Fuse::Input::PointerEnteredArgs* args, int type);
void NodeEvent__Fuse_Input_PointerEnteredHandler__Fuse_Input_PointerEnteredArgs__RemoveGlobalHandler(NodeEvent__Fuse_Input_PointerEnteredHandler__Fuse_Input_PointerEnteredArgs* __this, ::uDelegate* handler);
void NodeEvent__Fuse_Input_PointerEnteredHandler__Fuse_Input_PointerEnteredArgs__RemoveHandler(NodeEvent__Fuse_Input_PointerEnteredHandler__Fuse_Input_PointerEnteredArgs* __this, ::app::Fuse::Node* node, ::uDelegate* handler);

struct NodeEvent__Fuse_Input_PointerEnteredHandler__Fuse_Input_PointerEnteredArgs : ::uObject
{
    ::uStrong< ::app::Fuse::PropertyHandle*> _handle;
    ::uStrong< ::app::Uno::Collections::List__Fuse_Input_PointerEnteredHandler*> _globalHandlers;

    void _ObjInit() { NodeEvent__Fuse_Input_PointerEnteredHandler__Fuse_Input_PointerEnteredArgs___ObjInit(this); }
    void AddGlobalHandler(::uDelegate* handler) { NodeEvent__Fuse_Input_PointerEnteredHandler__Fuse_Input_PointerEnteredArgs__AddGlobalHandler(this, handler); }
    void AddHandler(::app::Fuse::Node* node, ::uDelegate* handler) { NodeEvent__Fuse_Input_PointerEnteredHandler__Fuse_Input_PointerEnteredArgs__AddHandler(this, node, handler); }
    void Invoke(::uDelegate* handler, ::uObject* sender, ::app::Fuse::Input::PointerEnteredArgs* args) { (((NodeEvent__Fuse_Input_PointerEnteredHandler__Fuse_Input_PointerEnteredArgs__uType*)this->__obj_type)->__fp_Invoke)(this, handler, sender, args); }
    void InvokeGlobalHandlers(::app::Fuse::Node* node, ::app::Fuse::Input::PointerEnteredArgs* args) { NodeEvent__Fuse_Input_PointerEnteredHandler__Fuse_Input_PointerEnteredArgs__InvokeGlobalHandlers(this, node, args); }
    void OnRaise(::uObject* target, ::uArray* args) { NodeEvent__Fuse_Input_PointerEnteredHandler__Fuse_Input_PointerEnteredArgs__OnRaise(this, target, args); }
    void OnRaiseEnabled(::uObject* target, ::uArray* args) { NodeEvent__Fuse_Input_PointerEnteredHandler__Fuse_Input_PointerEnteredArgs__OnRaiseEnabled(this, target, args); }
    void Raise(::app::Fuse::Input::PointerEnteredArgs* args, int type, bool bubble) { NodeEvent__Fuse_Input_PointerEnteredHandler__Fuse_Input_PointerEnteredArgs__Raise(this, args, type, bubble); }
    void RaiseWithBubble(::app::Fuse::Input::PointerEnteredArgs* args, int type) { NodeEvent__Fuse_Input_PointerEnteredHandler__Fuse_Input_PointerEnteredArgs__RaiseWithBubble(this, args, type); }
    void RaiseWithoutBubble(::app::Fuse::Input::PointerEnteredArgs* args, int type) { NodeEvent__Fuse_Input_PointerEnteredHandler__Fuse_Input_PointerEnteredArgs__RaiseWithoutBubble(this, args, type); }
    void RemoveGlobalHandler(::uDelegate* handler) { NodeEvent__Fuse_Input_PointerEnteredHandler__Fuse_Input_PointerEnteredArgs__RemoveGlobalHandler(this, handler); }
    void RemoveHandler(::app::Fuse::Node* node, ::uDelegate* handler) { NodeEvent__Fuse_Input_PointerEnteredHandler__Fuse_Input_PointerEnteredArgs__RemoveHandler(this, node, handler); }
};

}}


#endif
