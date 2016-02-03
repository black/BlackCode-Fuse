// This file was generated based on 'C:\ProgramData\Uno\Packages\FuseCore\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_FUSE_NODE_EVENT__FUSE_INPUT_TEXT_ENTERED_HANDLER__FUSE_INPUT_TEXT_E_B5BF0CFA_H__
#define __APP_FUSE_NODE_EVENT__FUSE_INPUT_TEXT_ENTERED_HANDLER__FUSE_INPUT_TEXT_E_B5BF0CFA_H__

#include <app/Uno.Object.h>
#include <Uno.h>
namespace app { namespace Fuse { namespace Input { struct TextEnteredArgs; } } }
namespace app { namespace Fuse { struct Node; } }
namespace app { namespace Fuse { struct PropertyHandle; } }
namespace app { namespace Uno { namespace Collections { struct List__Fuse_Input_TextEnteredHandler; } } }

namespace app {
namespace Fuse {

struct NodeEvent__Fuse_Input_TextEnteredHandler__Fuse_Input_TextEnteredArgs;

struct NodeEvent__Fuse_Input_TextEnteredHandler__Fuse_Input_TextEnteredArgs__uType : ::uClassType
{
    void(*__fp_Invoke)(NodeEvent__Fuse_Input_TextEnteredHandler__Fuse_Input_TextEnteredArgs*, ::uDelegate*, ::uObject*, ::app::Fuse::Input::TextEnteredArgs*);
};

NodeEvent__Fuse_Input_TextEnteredHandler__Fuse_Input_TextEnteredArgs__uType* NodeEvent__Fuse_Input_TextEnteredHandler__Fuse_Input_TextEnteredArgs__typeof();

void NodeEvent__Fuse_Input_TextEnteredHandler__Fuse_Input_TextEnteredArgs___ObjInit(NodeEvent__Fuse_Input_TextEnteredHandler__Fuse_Input_TextEnteredArgs* __this);
void NodeEvent__Fuse_Input_TextEnteredHandler__Fuse_Input_TextEnteredArgs__AddGlobalHandler(NodeEvent__Fuse_Input_TextEnteredHandler__Fuse_Input_TextEnteredArgs* __this, ::uDelegate* handler);
void NodeEvent__Fuse_Input_TextEnteredHandler__Fuse_Input_TextEnteredArgs__AddHandler(NodeEvent__Fuse_Input_TextEnteredHandler__Fuse_Input_TextEnteredArgs* __this, ::app::Fuse::Node* node, ::uDelegate* handler);
void NodeEvent__Fuse_Input_TextEnteredHandler__Fuse_Input_TextEnteredArgs__InvokeGlobalHandlers(NodeEvent__Fuse_Input_TextEnteredHandler__Fuse_Input_TextEnteredArgs* __this, ::app::Fuse::Node* node, ::app::Fuse::Input::TextEnteredArgs* args);
void NodeEvent__Fuse_Input_TextEnteredHandler__Fuse_Input_TextEnteredArgs__OnRaise(NodeEvent__Fuse_Input_TextEnteredHandler__Fuse_Input_TextEnteredArgs* __this, ::uObject* target, ::uArray* args);
void NodeEvent__Fuse_Input_TextEnteredHandler__Fuse_Input_TextEnteredArgs__OnRaiseEnabled(NodeEvent__Fuse_Input_TextEnteredHandler__Fuse_Input_TextEnteredArgs* __this, ::uObject* target, ::uArray* args);
void NodeEvent__Fuse_Input_TextEnteredHandler__Fuse_Input_TextEnteredArgs__Raise(NodeEvent__Fuse_Input_TextEnteredHandler__Fuse_Input_TextEnteredArgs* __this, ::app::Fuse::Input::TextEnteredArgs* args, int type, bool bubble);
void NodeEvent__Fuse_Input_TextEnteredHandler__Fuse_Input_TextEnteredArgs__RaiseWithBubble(NodeEvent__Fuse_Input_TextEnteredHandler__Fuse_Input_TextEnteredArgs* __this, ::app::Fuse::Input::TextEnteredArgs* args, int type);
void NodeEvent__Fuse_Input_TextEnteredHandler__Fuse_Input_TextEnteredArgs__RaiseWithoutBubble(NodeEvent__Fuse_Input_TextEnteredHandler__Fuse_Input_TextEnteredArgs* __this, ::app::Fuse::Input::TextEnteredArgs* args, int type);
void NodeEvent__Fuse_Input_TextEnteredHandler__Fuse_Input_TextEnteredArgs__RemoveGlobalHandler(NodeEvent__Fuse_Input_TextEnteredHandler__Fuse_Input_TextEnteredArgs* __this, ::uDelegate* handler);
void NodeEvent__Fuse_Input_TextEnteredHandler__Fuse_Input_TextEnteredArgs__RemoveHandler(NodeEvent__Fuse_Input_TextEnteredHandler__Fuse_Input_TextEnteredArgs* __this, ::app::Fuse::Node* node, ::uDelegate* handler);

struct NodeEvent__Fuse_Input_TextEnteredHandler__Fuse_Input_TextEnteredArgs : ::uObject
{
    ::uStrong< ::app::Fuse::PropertyHandle*> _handle;
    ::uStrong< ::app::Uno::Collections::List__Fuse_Input_TextEnteredHandler*> _globalHandlers;

    void _ObjInit() { NodeEvent__Fuse_Input_TextEnteredHandler__Fuse_Input_TextEnteredArgs___ObjInit(this); }
    void AddGlobalHandler(::uDelegate* handler) { NodeEvent__Fuse_Input_TextEnteredHandler__Fuse_Input_TextEnteredArgs__AddGlobalHandler(this, handler); }
    void AddHandler(::app::Fuse::Node* node, ::uDelegate* handler) { NodeEvent__Fuse_Input_TextEnteredHandler__Fuse_Input_TextEnteredArgs__AddHandler(this, node, handler); }
    void Invoke(::uDelegate* handler, ::uObject* sender, ::app::Fuse::Input::TextEnteredArgs* args) { (((NodeEvent__Fuse_Input_TextEnteredHandler__Fuse_Input_TextEnteredArgs__uType*)this->__obj_type)->__fp_Invoke)(this, handler, sender, args); }
    void InvokeGlobalHandlers(::app::Fuse::Node* node, ::app::Fuse::Input::TextEnteredArgs* args) { NodeEvent__Fuse_Input_TextEnteredHandler__Fuse_Input_TextEnteredArgs__InvokeGlobalHandlers(this, node, args); }
    void OnRaise(::uObject* target, ::uArray* args) { NodeEvent__Fuse_Input_TextEnteredHandler__Fuse_Input_TextEnteredArgs__OnRaise(this, target, args); }
    void OnRaiseEnabled(::uObject* target, ::uArray* args) { NodeEvent__Fuse_Input_TextEnteredHandler__Fuse_Input_TextEnteredArgs__OnRaiseEnabled(this, target, args); }
    void Raise(::app::Fuse::Input::TextEnteredArgs* args, int type, bool bubble) { NodeEvent__Fuse_Input_TextEnteredHandler__Fuse_Input_TextEnteredArgs__Raise(this, args, type, bubble); }
    void RaiseWithBubble(::app::Fuse::Input::TextEnteredArgs* args, int type) { NodeEvent__Fuse_Input_TextEnteredHandler__Fuse_Input_TextEnteredArgs__RaiseWithBubble(this, args, type); }
    void RaiseWithoutBubble(::app::Fuse::Input::TextEnteredArgs* args, int type) { NodeEvent__Fuse_Input_TextEnteredHandler__Fuse_Input_TextEnteredArgs__RaiseWithoutBubble(this, args, type); }
    void RemoveGlobalHandler(::uDelegate* handler) { NodeEvent__Fuse_Input_TextEnteredHandler__Fuse_Input_TextEnteredArgs__RemoveGlobalHandler(this, handler); }
    void RemoveHandler(::app::Fuse::Node* node, ::uDelegate* handler) { NodeEvent__Fuse_Input_TextEnteredHandler__Fuse_Input_TextEnteredArgs__RemoveHandler(this, node, handler); }
};

}}


#endif
