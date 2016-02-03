// This file was generated based on 'C:\ProgramData\Uno\Packages\FuseCore\0.19.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.Object.h>
namespace g{namespace Fuse{struct Node;}}
namespace g{namespace Fuse{struct NodeEvent;}}
namespace g{namespace Fuse{struct NodeEventArgs;}}
namespace g{namespace Fuse{struct PropertyHandle;}}
namespace g{namespace Uno{namespace Collections{struct List;}}}

namespace g{
namespace Fuse{

// public abstract class NodeEvent<THandler, TArgs> :872
// {
struct NodeEvent_type : uType
{
    void(*fp_Invoke)(::g::Fuse::NodeEvent*, void*, uObject*, ::g::Fuse::NodeEventArgs*);
};

NodeEvent_type* NodeEvent_typeof();
void NodeEvent__ctor__fn(NodeEvent* __this);
void NodeEvent__AddGlobalHandler_fn(NodeEvent* __this, void* handler);
void NodeEvent__AddHandler_fn(NodeEvent* __this, ::g::Fuse::Node* node, void* handler);
void NodeEvent__InvokeGlobalHandlers_fn(NodeEvent* __this, ::g::Fuse::Node* node, ::g::Fuse::NodeEventArgs* args);
void NodeEvent__OnRaise_fn(NodeEvent* __this, uObject* target, uArray* args);
void NodeEvent__OnRaiseEnabled_fn(NodeEvent* __this, uObject* target, uArray* args);
void NodeEvent__Raise_fn(NodeEvent* __this, ::g::Fuse::NodeEventArgs* args, int* type, bool* bubble, uDelegate* PostBubbleAction);
void NodeEvent__RaiseWithBubble_fn(NodeEvent* __this, ::g::Fuse::NodeEventArgs* args, int* type);
void NodeEvent__RaiseWithBubble1_fn(NodeEvent* __this, ::g::Fuse::NodeEventArgs* args, int* type, uDelegate* PostBubbleAction);
void NodeEvent__RaiseWithoutBubble_fn(NodeEvent* __this, ::g::Fuse::NodeEventArgs* args, int* type);
void NodeEvent__RemoveGlobalHandler_fn(NodeEvent* __this, void* handler);
void NodeEvent__RemoveHandler_fn(NodeEvent* __this, ::g::Fuse::Node* node, void* handler);

struct NodeEvent : uObject
{
    uStrong< ::g::Uno::Collections::List*> _globalHandlers;
    uStrong< ::g::Fuse::PropertyHandle*> _handle;

    void ctor_();
    template<class THandler>
    void AddGlobalHandler(THandler handler) { NodeEvent__AddGlobalHandler_fn(this, uConstrain(__type->GetBase(NodeEvent_typeof())->T(0), handler)); }
    template<class THandler>
    void AddHandler(::g::Fuse::Node* node, THandler handler) { NodeEvent__AddHandler_fn(this, node, uConstrain(__type->GetBase(NodeEvent_typeof())->T(0), handler)); }
    template<class THandler>
    void Invoke(THandler handler, uObject* sender, ::g::Fuse::NodeEventArgs* args) { (((NodeEvent_type*)__type)->fp_Invoke)(this, uConstrain(__type->GetBase(NodeEvent_typeof())->T(0), handler), sender, args); }
    void Invoke_ex(void* handler, uObject* sender, ::g::Fuse::NodeEventArgs* args) { (((NodeEvent_type*)__type)->fp_Invoke)(this, handler, sender, args); }
    void InvokeGlobalHandlers(::g::Fuse::Node* node, ::g::Fuse::NodeEventArgs* args);
    void OnRaise(uObject* target, uArray* args);
    void OnRaiseEnabled(uObject* target, uArray* args);
    void Raise(::g::Fuse::NodeEventArgs* args, int type, bool bubble, uDelegate* PostBubbleAction);
    void RaiseWithBubble(::g::Fuse::NodeEventArgs* args, int type);
    void RaiseWithBubble1(::g::Fuse::NodeEventArgs* args, int type, uDelegate* PostBubbleAction);
    void RaiseWithoutBubble(::g::Fuse::NodeEventArgs* args, int type);
    template<class THandler>
    void RemoveGlobalHandler(THandler handler) { NodeEvent__RemoveGlobalHandler_fn(this, uConstrain(__type->GetBase(NodeEvent_typeof())->T(0), handler)); }
    template<class THandler>
    void RemoveHandler(::g::Fuse::Node* node, THandler handler) { NodeEvent__RemoveHandler_fn(this, node, uConstrain(__type->GetBase(NodeEvent_typeof())->T(0), handler)); }
};
// }

}} // ::g::Fuse
