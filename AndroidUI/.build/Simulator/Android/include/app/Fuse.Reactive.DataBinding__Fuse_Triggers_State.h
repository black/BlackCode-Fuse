// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Reactive\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_FUSE_REACTIVE_DATA_BINDING__FUSE_TRIGGERS_STATE_H__
#define __APP_FUSE_REACTIVE_DATA_BINDING__FUSE_TRIGGERS_STATE_H__

#include <app/Fuse.Reactive.Binding.h>
#include <app/Fuse.Reactive.IObserver.h>
#include <app/Fuse.Scripting.INameListener.h>
#include <Uno.h>
namespace app { namespace Fuse { namespace Triggers { struct State; } } }
namespace app { namespace Fuse { struct Node; } }
namespace app { namespace Uno { namespace UX { struct Property__Fuse_Triggers_State; } } }
namespace app { namespace Uno { namespace UX { struct ValueChangedArgs__Fuse_Triggers_State; } } }

namespace app {
namespace Fuse {
namespace Reactive {

struct DataBinding__Fuse_Triggers_State;

struct DataBinding__Fuse_Triggers_State__uType : ::app::Fuse::Reactive::Binding__uType
{
    ::app::Fuse::Reactive::IObserver __interface_0;
    ::app::Fuse::Scripting::INameListener __interface_1;
};

DataBinding__Fuse_Triggers_State__uType* DataBinding__Fuse_Triggers_State__typeof();

void DataBinding__Fuse_Triggers_State___ObjInit_2(DataBinding__Fuse_Triggers_State* __this, ::app::Uno::UX::Property__Fuse_Triggers_State* target, ::uString* key);
bool DataBinding__Fuse_Triggers_State__Acceptor(DataBinding__Fuse_Triggers_State* __this, ::uObject* obj);
void DataBinding__Fuse_Triggers_State__Fuse_Reactive_IObserver_OnAdd(DataBinding__Fuse_Triggers_State* __this, ::uObject* addedValue);
void DataBinding__Fuse_Triggers_State__Fuse_Reactive_IObserver_OnFailed(DataBinding__Fuse_Triggers_State* __this, ::uString* message);
void DataBinding__Fuse_Triggers_State__Fuse_Reactive_IObserver_OnNewAll(DataBinding__Fuse_Triggers_State* __this, int length);
void DataBinding__Fuse_Triggers_State__Fuse_Reactive_IObserver_OnNewAt(DataBinding__Fuse_Triggers_State* __this, int index, ::uObject* value);
void DataBinding__Fuse_Triggers_State__Fuse_Reactive_IObserver_OnRemove(DataBinding__Fuse_Triggers_State* __this, ::uObject* value, int index);
void DataBinding__Fuse_Triggers_State__Fuse_Reactive_IObserver_OnSet(DataBinding__Fuse_Triggers_State* __this, ::uObject* newValue);
void DataBinding__Fuse_Triggers_State__Fuse_Scripting_INameListener_OnNameChanged(DataBinding__Fuse_Triggers_State* __this, ::uObject* obj, ::uString* name);
::app::Uno::UX::Property__Fuse_Triggers_State* DataBinding__Fuse_Triggers_State__get_Target(DataBinding__Fuse_Triggers_State* __this);
DataBinding__Fuse_Triggers_State* DataBinding__Fuse_Triggers_State__New_1(::uStatic* __this, ::app::Uno::UX::Property__Fuse_Triggers_State* target, ::uString* key);
void DataBinding__Fuse_Triggers_State__NewValue(DataBinding__Fuse_Triggers_State* __this, ::uObject* value);
void DataBinding__Fuse_Triggers_State__OnRooted(DataBinding__Fuse_Triggers_State* __this, ::app::Fuse::Node* n);
void DataBinding__Fuse_Triggers_State__OnUnrooted(DataBinding__Fuse_Triggers_State* __this, ::app::Fuse::Node* n);
void DataBinding__Fuse_Triggers_State__OnValueChanged(DataBinding__Fuse_Triggers_State* __this, ::uObject* sender, ::app::Uno::UX::ValueChangedArgs__Fuse_Triggers_State* args);
void DataBinding__Fuse_Triggers_State__PushValue(DataBinding__Fuse_Triggers_State* __this, ::uObject* newValue);
void DataBinding__Fuse_Triggers_State__set_Target(DataBinding__Fuse_Triggers_State* __this, ::app::Uno::UX::Property__Fuse_Triggers_State* value);
void DataBinding__Fuse_Triggers_State__SetValue(DataBinding__Fuse_Triggers_State* __this, ::app::Fuse::Triggers::State* value);

struct DataBinding__Fuse_Triggers_State : ::app::Fuse::Reactive::Binding
{
    ::uStrong< ::uObject*> _subscription;
    ::uStrong< ::uObject*> _currentValue;
    ::uStrong< ::app::Uno::UX::Property__Fuse_Triggers_State*> _Target;

    void _ObjInit_2(::app::Uno::UX::Property__Fuse_Triggers_State* target, ::uString* key) { DataBinding__Fuse_Triggers_State___ObjInit_2(this, target, key); }
    bool Acceptor(::uObject* obj) { return DataBinding__Fuse_Triggers_State__Acceptor(this, obj); }
    ::app::Uno::UX::Property__Fuse_Triggers_State* Target() { return DataBinding__Fuse_Triggers_State__get_Target(this); }
    void OnValueChanged(::uObject* sender, ::app::Uno::UX::ValueChangedArgs__Fuse_Triggers_State* args) { DataBinding__Fuse_Triggers_State__OnValueChanged(this, sender, args); }
    void PushValue(::uObject* newValue) { DataBinding__Fuse_Triggers_State__PushValue(this, newValue); }
    void Target(::app::Uno::UX::Property__Fuse_Triggers_State* value) { DataBinding__Fuse_Triggers_State__set_Target(this, value); }
    void SetValue(::app::Fuse::Triggers::State* value) { DataBinding__Fuse_Triggers_State__SetValue(this, value); }
};

}}}


#endif
