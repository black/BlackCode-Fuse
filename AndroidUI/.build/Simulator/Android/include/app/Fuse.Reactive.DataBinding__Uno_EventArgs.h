// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Reactive\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_FUSE_REACTIVE_DATA_BINDING__UNO_EVENT_ARGS_H__
#define __APP_FUSE_REACTIVE_DATA_BINDING__UNO_EVENT_ARGS_H__

#include <app/Fuse.Reactive.Binding.h>
#include <app/Fuse.Reactive.IObserver.h>
#include <app/Fuse.Scripting.INameListener.h>
#include <Uno.h>
namespace app { namespace Fuse { struct Node; } }
namespace app { namespace Uno { namespace UX { struct Property__Uno_EventArgs; } } }
namespace app { namespace Uno { namespace UX { struct ValueChangedArgs__Uno_EventArgs; } } }
namespace app { namespace Uno { struct EventArgs; } }

namespace app {
namespace Fuse {
namespace Reactive {

struct DataBinding__Uno_EventArgs;

struct DataBinding__Uno_EventArgs__uType : ::app::Fuse::Reactive::Binding__uType
{
    ::app::Fuse::Reactive::IObserver __interface_0;
    ::app::Fuse::Scripting::INameListener __interface_1;
};

DataBinding__Uno_EventArgs__uType* DataBinding__Uno_EventArgs__typeof();

void DataBinding__Uno_EventArgs___ObjInit_2(DataBinding__Uno_EventArgs* __this, ::app::Uno::UX::Property__Uno_EventArgs* target, ::uString* key);
bool DataBinding__Uno_EventArgs__Acceptor(DataBinding__Uno_EventArgs* __this, ::uObject* obj);
void DataBinding__Uno_EventArgs__Fuse_Reactive_IObserver_OnAdd(DataBinding__Uno_EventArgs* __this, ::uObject* addedValue);
void DataBinding__Uno_EventArgs__Fuse_Reactive_IObserver_OnFailed(DataBinding__Uno_EventArgs* __this, ::uString* message);
void DataBinding__Uno_EventArgs__Fuse_Reactive_IObserver_OnNewAll(DataBinding__Uno_EventArgs* __this, int length);
void DataBinding__Uno_EventArgs__Fuse_Reactive_IObserver_OnNewAt(DataBinding__Uno_EventArgs* __this, int index, ::uObject* value);
void DataBinding__Uno_EventArgs__Fuse_Reactive_IObserver_OnRemove(DataBinding__Uno_EventArgs* __this, ::uObject* value, int index);
void DataBinding__Uno_EventArgs__Fuse_Reactive_IObserver_OnSet(DataBinding__Uno_EventArgs* __this, ::uObject* newValue);
void DataBinding__Uno_EventArgs__Fuse_Scripting_INameListener_OnNameChanged(DataBinding__Uno_EventArgs* __this, ::uObject* obj, ::uString* name);
::app::Uno::UX::Property__Uno_EventArgs* DataBinding__Uno_EventArgs__get_Target(DataBinding__Uno_EventArgs* __this);
DataBinding__Uno_EventArgs* DataBinding__Uno_EventArgs__New_1(::uStatic* __this, ::app::Uno::UX::Property__Uno_EventArgs* target, ::uString* key);
void DataBinding__Uno_EventArgs__NewValue(DataBinding__Uno_EventArgs* __this, ::uObject* value);
void DataBinding__Uno_EventArgs__OnRooted(DataBinding__Uno_EventArgs* __this, ::app::Fuse::Node* n);
void DataBinding__Uno_EventArgs__OnUnrooted(DataBinding__Uno_EventArgs* __this, ::app::Fuse::Node* n);
void DataBinding__Uno_EventArgs__OnValueChanged(DataBinding__Uno_EventArgs* __this, ::uObject* sender, ::app::Uno::UX::ValueChangedArgs__Uno_EventArgs* args);
void DataBinding__Uno_EventArgs__PushValue(DataBinding__Uno_EventArgs* __this, ::uObject* newValue);
void DataBinding__Uno_EventArgs__set_Target(DataBinding__Uno_EventArgs* __this, ::app::Uno::UX::Property__Uno_EventArgs* value);
void DataBinding__Uno_EventArgs__SetValue(DataBinding__Uno_EventArgs* __this, ::app::Uno::EventArgs* value);

struct DataBinding__Uno_EventArgs : ::app::Fuse::Reactive::Binding
{
    ::uStrong< ::uObject*> _subscription;
    ::uStrong< ::uObject*> _currentValue;
    ::uStrong< ::app::Uno::UX::Property__Uno_EventArgs*> _Target;

    void _ObjInit_2(::app::Uno::UX::Property__Uno_EventArgs* target, ::uString* key) { DataBinding__Uno_EventArgs___ObjInit_2(this, target, key); }
    bool Acceptor(::uObject* obj) { return DataBinding__Uno_EventArgs__Acceptor(this, obj); }
    ::app::Uno::UX::Property__Uno_EventArgs* Target() { return DataBinding__Uno_EventArgs__get_Target(this); }
    void OnValueChanged(::uObject* sender, ::app::Uno::UX::ValueChangedArgs__Uno_EventArgs* args) { DataBinding__Uno_EventArgs__OnValueChanged(this, sender, args); }
    void PushValue(::uObject* newValue) { DataBinding__Uno_EventArgs__PushValue(this, newValue); }
    void Target(::app::Uno::UX::Property__Uno_EventArgs* value) { DataBinding__Uno_EventArgs__set_Target(this, value); }
    void SetValue(::app::Uno::EventArgs* value) { DataBinding__Uno_EventArgs__SetValue(this, value); }
};

}}}


#endif
