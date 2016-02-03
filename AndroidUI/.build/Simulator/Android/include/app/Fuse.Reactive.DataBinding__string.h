// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Reactive\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_FUSE_REACTIVE_DATA_BINDING__STRING_H__
#define __APP_FUSE_REACTIVE_DATA_BINDING__STRING_H__

#include <app/Fuse.Reactive.Binding.h>
#include <app/Fuse.Reactive.IObserver.h>
#include <app/Fuse.Scripting.INameListener.h>
#include <Uno.h>
namespace app { namespace Fuse { struct Node; } }
namespace app { namespace Uno { namespace UX { struct Property__string; } } }
namespace app { namespace Uno { namespace UX { struct ValueChangedArgs__string; } } }

namespace app {
namespace Fuse {
namespace Reactive {

struct DataBinding__string;

struct DataBinding__string__uType : ::app::Fuse::Reactive::Binding__uType
{
    ::app::Fuse::Reactive::IObserver __interface_0;
    ::app::Fuse::Scripting::INameListener __interface_1;
};

DataBinding__string__uType* DataBinding__string__typeof();

void DataBinding__string___ObjInit_2(DataBinding__string* __this, ::app::Uno::UX::Property__string* target, ::uString* key);
bool DataBinding__string__Acceptor(DataBinding__string* __this, ::uObject* obj);
void DataBinding__string__Fuse_Reactive_IObserver_OnAdd(DataBinding__string* __this, ::uObject* addedValue);
void DataBinding__string__Fuse_Reactive_IObserver_OnFailed(DataBinding__string* __this, ::uString* message);
void DataBinding__string__Fuse_Reactive_IObserver_OnNewAll(DataBinding__string* __this, int length);
void DataBinding__string__Fuse_Reactive_IObserver_OnNewAt(DataBinding__string* __this, int index, ::uObject* value);
void DataBinding__string__Fuse_Reactive_IObserver_OnRemove(DataBinding__string* __this, ::uObject* value, int index);
void DataBinding__string__Fuse_Reactive_IObserver_OnSet(DataBinding__string* __this, ::uObject* newValue);
void DataBinding__string__Fuse_Scripting_INameListener_OnNameChanged(DataBinding__string* __this, ::uObject* obj, ::uString* name);
::app::Uno::UX::Property__string* DataBinding__string__get_Target(DataBinding__string* __this);
DataBinding__string* DataBinding__string__New_1(::uStatic* __this, ::app::Uno::UX::Property__string* target, ::uString* key);
void DataBinding__string__NewValue(DataBinding__string* __this, ::uObject* value);
void DataBinding__string__OnRooted(DataBinding__string* __this, ::app::Fuse::Node* n);
void DataBinding__string__OnUnrooted(DataBinding__string* __this, ::app::Fuse::Node* n);
void DataBinding__string__OnValueChanged(DataBinding__string* __this, ::uObject* sender, ::app::Uno::UX::ValueChangedArgs__string* args);
void DataBinding__string__PushValue(DataBinding__string* __this, ::uObject* newValue);
void DataBinding__string__set_Target(DataBinding__string* __this, ::app::Uno::UX::Property__string* value);
void DataBinding__string__SetValue(DataBinding__string* __this, ::uString* value);

struct DataBinding__string : ::app::Fuse::Reactive::Binding
{
    ::uStrong< ::uObject*> _subscription;
    ::uStrong< ::uObject*> _currentValue;
    ::uStrong< ::app::Uno::UX::Property__string*> _Target;

    void _ObjInit_2(::app::Uno::UX::Property__string* target, ::uString* key) { DataBinding__string___ObjInit_2(this, target, key); }
    bool Acceptor(::uObject* obj) { return DataBinding__string__Acceptor(this, obj); }
    ::app::Uno::UX::Property__string* Target() { return DataBinding__string__get_Target(this); }
    void OnValueChanged(::uObject* sender, ::app::Uno::UX::ValueChangedArgs__string* args) { DataBinding__string__OnValueChanged(this, sender, args); }
    void PushValue(::uObject* newValue) { DataBinding__string__PushValue(this, newValue); }
    void Target(::app::Uno::UX::Property__string* value) { DataBinding__string__set_Target(this, value); }
    void SetValue(::uString* value) { DataBinding__string__SetValue(this, value); }
};

}}}


#endif
