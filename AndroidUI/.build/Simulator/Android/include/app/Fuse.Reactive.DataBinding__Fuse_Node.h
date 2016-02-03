// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Reactive\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_FUSE_REACTIVE_DATA_BINDING__FUSE_NODE_H__
#define __APP_FUSE_REACTIVE_DATA_BINDING__FUSE_NODE_H__

#include <app/Fuse.Reactive.Binding.h>
#include <app/Fuse.Reactive.IObserver.h>
#include <app/Fuse.Scripting.INameListener.h>
#include <Uno.h>
namespace app { namespace Fuse { struct Node; } }
namespace app { namespace Uno { namespace UX { struct Property__Fuse_Node; } } }
namespace app { namespace Uno { namespace UX { struct ValueChangedArgs__Fuse_Node; } } }

namespace app {
namespace Fuse {
namespace Reactive {

struct DataBinding__Fuse_Node;

struct DataBinding__Fuse_Node__uType : ::app::Fuse::Reactive::Binding__uType
{
    ::app::Fuse::Reactive::IObserver __interface_0;
    ::app::Fuse::Scripting::INameListener __interface_1;
};

DataBinding__Fuse_Node__uType* DataBinding__Fuse_Node__typeof();

void DataBinding__Fuse_Node___ObjInit_2(DataBinding__Fuse_Node* __this, ::app::Uno::UX::Property__Fuse_Node* target, ::uString* key);
bool DataBinding__Fuse_Node__Acceptor(DataBinding__Fuse_Node* __this, ::uObject* obj);
void DataBinding__Fuse_Node__Fuse_Reactive_IObserver_OnAdd(DataBinding__Fuse_Node* __this, ::uObject* addedValue);
void DataBinding__Fuse_Node__Fuse_Reactive_IObserver_OnFailed(DataBinding__Fuse_Node* __this, ::uString* message);
void DataBinding__Fuse_Node__Fuse_Reactive_IObserver_OnNewAll(DataBinding__Fuse_Node* __this, int length);
void DataBinding__Fuse_Node__Fuse_Reactive_IObserver_OnNewAt(DataBinding__Fuse_Node* __this, int index, ::uObject* value);
void DataBinding__Fuse_Node__Fuse_Reactive_IObserver_OnRemove(DataBinding__Fuse_Node* __this, ::uObject* value, int index);
void DataBinding__Fuse_Node__Fuse_Reactive_IObserver_OnSet(DataBinding__Fuse_Node* __this, ::uObject* newValue);
void DataBinding__Fuse_Node__Fuse_Scripting_INameListener_OnNameChanged(DataBinding__Fuse_Node* __this, ::uObject* obj, ::uString* name);
::app::Uno::UX::Property__Fuse_Node* DataBinding__Fuse_Node__get_Target(DataBinding__Fuse_Node* __this);
DataBinding__Fuse_Node* DataBinding__Fuse_Node__New_1(::uStatic* __this, ::app::Uno::UX::Property__Fuse_Node* target, ::uString* key);
void DataBinding__Fuse_Node__NewValue(DataBinding__Fuse_Node* __this, ::uObject* value);
void DataBinding__Fuse_Node__OnRooted(DataBinding__Fuse_Node* __this, ::app::Fuse::Node* n);
void DataBinding__Fuse_Node__OnUnrooted(DataBinding__Fuse_Node* __this, ::app::Fuse::Node* n);
void DataBinding__Fuse_Node__OnValueChanged(DataBinding__Fuse_Node* __this, ::uObject* sender, ::app::Uno::UX::ValueChangedArgs__Fuse_Node* args);
void DataBinding__Fuse_Node__PushValue(DataBinding__Fuse_Node* __this, ::uObject* newValue);
void DataBinding__Fuse_Node__set_Target(DataBinding__Fuse_Node* __this, ::app::Uno::UX::Property__Fuse_Node* value);
void DataBinding__Fuse_Node__SetValue(DataBinding__Fuse_Node* __this, ::app::Fuse::Node* value);

struct DataBinding__Fuse_Node : ::app::Fuse::Reactive::Binding
{
    ::uStrong< ::uObject*> _subscription;
    ::uStrong< ::uObject*> _currentValue;
    ::uStrong< ::app::Uno::UX::Property__Fuse_Node*> _Target;

    void _ObjInit_2(::app::Uno::UX::Property__Fuse_Node* target, ::uString* key) { DataBinding__Fuse_Node___ObjInit_2(this, target, key); }
    bool Acceptor(::uObject* obj) { return DataBinding__Fuse_Node__Acceptor(this, obj); }
    ::app::Uno::UX::Property__Fuse_Node* Target() { return DataBinding__Fuse_Node__get_Target(this); }
    void OnValueChanged(::uObject* sender, ::app::Uno::UX::ValueChangedArgs__Fuse_Node* args) { DataBinding__Fuse_Node__OnValueChanged(this, sender, args); }
    void PushValue(::uObject* newValue) { DataBinding__Fuse_Node__PushValue(this, newValue); }
    void Target(::app::Uno::UX::Property__Fuse_Node* value) { DataBinding__Fuse_Node__set_Target(this, value); }
    void SetValue(::app::Fuse::Node* value) { DataBinding__Fuse_Node__SetValue(this, value); }
};

}}}


#endif
