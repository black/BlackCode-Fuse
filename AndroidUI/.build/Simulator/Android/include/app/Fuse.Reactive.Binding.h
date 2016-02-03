// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Reactive\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_FUSE_REACTIVE_BINDING_H__
#define __APP_FUSE_REACTIVE_BINDING_H__

#include <app/Fuse.Behavior.h>
#include <Uno.h>
namespace app { namespace Fuse { struct DataContextChangedArgs; } }
namespace app { namespace Fuse { struct Node; } }

namespace app {
namespace Fuse {
namespace Reactive {

struct Binding;

struct Binding__uType : ::app::Fuse::Behavior__uType
{
    void(*__fp_NewValue)(Binding*, ::uObject*);
};

Binding__uType* Binding__typeof();

void Binding___ObjInit_1(Binding* __this, ::uString* key);
void Binding__BindToPath(Binding* __this, ::uString* path, ::uObject* dc);
::uString* Binding__get_Key(Binding* __this);
::app::Fuse::Node* Binding__get_Node(Binding* __this);
void Binding__OnDataContextChanged(Binding* __this, ::uObject* sender, ::app::Fuse::DataContextChangedArgs* args);
void Binding__OnRooted(Binding* __this, ::app::Fuse::Node* n);
void Binding__OnUnrooted(Binding* __this, ::app::Fuse::Node* n);
void Binding__set_Key(Binding* __this, ::uString* value);
void Binding__set_Node(Binding* __this, ::app::Fuse::Node* value);

struct Binding : ::app::Fuse::Behavior
{
    ::uStrong< ::uObject*> _pathSubscription;
    ::uStrong< ::uString*> _Key;
    ::uStrong< ::app::Fuse::Node*> _Node;

    void _ObjInit_1(::uString* key) { Binding___ObjInit_1(this, key); }
    void BindToPath(::uString* path, ::uObject* dc) { Binding__BindToPath(this, path, dc); }
    ::uString* Key() { return Binding__get_Key(this); }
    ::app::Fuse::Node* Node() { return Binding__get_Node(this); }
    void NewValue(::uObject* obj) { (((Binding__uType*)this->__obj_type)->__fp_NewValue)(this, obj); }
    void OnDataContextChanged(::uObject* sender, ::app::Fuse::DataContextChangedArgs* args) { Binding__OnDataContextChanged(this, sender, args); }
    void Key(::uString* value) { Binding__set_Key(this, value); }
    void Node(::app::Fuse::Node* value) { Binding__set_Node(this, value); }
};

}}}


#endif
