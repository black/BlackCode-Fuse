// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Reactive\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_FUSE_REACTIVE_DATA_BINDING__INT_H__
#define __APP_FUSE_REACTIVE_DATA_BINDING__INT_H__

#include <app/Fuse.Reactive.Binding.h>
#include <app/Fuse.Reactive.IObserver.h>
#include <app/Fuse.Scripting.INameListener.h>
#include <Uno.h>
namespace app { namespace Fuse { struct Node; } }
namespace app { namespace Uno { namespace UX { struct Property__int; } } }
namespace app { namespace Uno { namespace UX { struct ValueChangedArgs__int; } } }

namespace app {
namespace Fuse {
namespace Reactive {

struct DataBinding__int;

struct DataBinding__int__uType : ::app::Fuse::Reactive::Binding__uType
{
    ::app::Fuse::Reactive::IObserver __interface_0;
    ::app::Fuse::Scripting::INameListener __interface_1;
};

DataBinding__int__uType* DataBinding__int__typeof();

void DataBinding__int___ObjInit_2(DataBinding__int* __this, ::app::Uno::UX::Property__int* target, ::uString* key);
bool DataBinding__int__Acceptor(DataBinding__int* __this, ::uObject* obj);
void DataBinding__int__Fuse_Reactive_IObserver_OnAdd(DataBinding__int* __this, ::uObject* addedValue);
void DataBinding__int__Fuse_Reactive_IObserver_OnFailed(DataBinding__int* __this, ::uString* message);
void DataBinding__int__Fuse_Reactive_IObserver_OnNewAll(DataBinding__int* __this, int length);
void DataBinding__int__Fuse_Reactive_IObserver_OnNewAt(DataBinding__int* __this, int index, ::uObject* value);
void DataBinding__int__Fuse_Reactive_IObserver_OnRemove(DataBinding__int* __this, ::uObject* value, int index);
void DataBinding__int__Fuse_Reactive_IObserver_OnSet(DataBinding__int* __this, ::uObject* newValue);
void DataBinding__int__Fuse_Scripting_INameListener_OnNameChanged(DataBinding__int* __this, ::uObject* obj, ::uString* name);
::app::Uno::UX::Property__int* DataBinding__int__get_Target(DataBinding__int* __this);
DataBinding__int* DataBinding__int__New_1(::uStatic* __this, ::app::Uno::UX::Property__int* target, ::uString* key);
void DataBinding__int__NewValue(DataBinding__int* __this, ::uObject* value);
void DataBinding__int__OnRooted(DataBinding__int* __this, ::app::Fuse::Node* n);
void DataBinding__int__OnUnrooted(DataBinding__int* __this, ::app::Fuse::Node* n);
void DataBinding__int__OnValueChanged(DataBinding__int* __this, ::uObject* sender, ::app::Uno::UX::ValueChangedArgs__int* args);
void DataBinding__int__PushValue(DataBinding__int* __this, ::uObject* newValue);
void DataBinding__int__set_Target(DataBinding__int* __this, ::app::Uno::UX::Property__int* value);
void DataBinding__int__SetValue(DataBinding__int* __this, int value);

struct DataBinding__int : ::app::Fuse::Reactive::Binding
{
    ::uStrong< ::uObject*> _subscription;
    ::uStrong< ::uObject*> _currentValue;
    ::uStrong< ::app::Uno::UX::Property__int*> _Target;

    void _ObjInit_2(::app::Uno::UX::Property__int* target, ::uString* key) { DataBinding__int___ObjInit_2(this, target, key); }
    bool Acceptor(::uObject* obj) { return DataBinding__int__Acceptor(this, obj); }
    ::app::Uno::UX::Property__int* Target() { return DataBinding__int__get_Target(this); }
    void OnValueChanged(::uObject* sender, ::app::Uno::UX::ValueChangedArgs__int* args) { DataBinding__int__OnValueChanged(this, sender, args); }
    void PushValue(::uObject* newValue) { DataBinding__int__PushValue(this, newValue); }
    void Target(::app::Uno::UX::Property__int* value) { DataBinding__int__set_Target(this, value); }
    void SetValue(int value) { DataBinding__int__SetValue(this, value); }
};

}}}


#endif
