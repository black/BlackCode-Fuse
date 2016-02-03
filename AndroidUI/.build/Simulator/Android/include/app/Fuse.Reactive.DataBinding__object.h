// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Reactive\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_FUSE_REACTIVE_DATA_BINDING__OBJECT_H__
#define __APP_FUSE_REACTIVE_DATA_BINDING__OBJECT_H__

#include <app/Fuse.Reactive.Binding.h>
#include <app/Fuse.Reactive.IObserver.h>
#include <app/Fuse.Scripting.INameListener.h>
#include <Uno.h>
namespace app { namespace Fuse { struct Node; } }
namespace app { namespace Uno { namespace UX { struct Property__object; } } }
namespace app { namespace Uno { namespace UX { struct ValueChangedArgs__object; } } }

namespace app {
namespace Fuse {
namespace Reactive {

struct DataBinding__object;

struct DataBinding__object__uType : ::app::Fuse::Reactive::Binding__uType
{
    ::app::Fuse::Reactive::IObserver __interface_0;
    ::app::Fuse::Scripting::INameListener __interface_1;
};

DataBinding__object__uType* DataBinding__object__typeof();

void DataBinding__object___ObjInit_2(DataBinding__object* __this, ::app::Uno::UX::Property__object* target, ::uString* key);
bool DataBinding__object__Acceptor(DataBinding__object* __this, ::uObject* obj);
void DataBinding__object__Fuse_Reactive_IObserver_OnAdd(DataBinding__object* __this, ::uObject* addedValue);
void DataBinding__object__Fuse_Reactive_IObserver_OnFailed(DataBinding__object* __this, ::uString* message);
void DataBinding__object__Fuse_Reactive_IObserver_OnNewAll(DataBinding__object* __this, int length);
void DataBinding__object__Fuse_Reactive_IObserver_OnNewAt(DataBinding__object* __this, int index, ::uObject* value);
void DataBinding__object__Fuse_Reactive_IObserver_OnRemove(DataBinding__object* __this, ::uObject* value, int index);
void DataBinding__object__Fuse_Reactive_IObserver_OnSet(DataBinding__object* __this, ::uObject* newValue);
void DataBinding__object__Fuse_Scripting_INameListener_OnNameChanged(DataBinding__object* __this, ::uObject* obj, ::uString* name);
::app::Uno::UX::Property__object* DataBinding__object__get_Target(DataBinding__object* __this);
DataBinding__object* DataBinding__object__New_1(::uStatic* __this, ::app::Uno::UX::Property__object* target, ::uString* key);
void DataBinding__object__NewValue(DataBinding__object* __this, ::uObject* value);
void DataBinding__object__OnRooted(DataBinding__object* __this, ::app::Fuse::Node* n);
void DataBinding__object__OnUnrooted(DataBinding__object* __this, ::app::Fuse::Node* n);
void DataBinding__object__OnValueChanged(DataBinding__object* __this, ::uObject* sender, ::app::Uno::UX::ValueChangedArgs__object* args);
void DataBinding__object__PushValue(DataBinding__object* __this, ::uObject* newValue);
void DataBinding__object__set_Target(DataBinding__object* __this, ::app::Uno::UX::Property__object* value);
void DataBinding__object__SetValue(DataBinding__object* __this, ::uObject* value);

struct DataBinding__object : ::app::Fuse::Reactive::Binding
{
    ::uStrong< ::uObject*> _subscription;
    ::uStrong< ::uObject*> _currentValue;
    ::uStrong< ::app::Uno::UX::Property__object*> _Target;

    void _ObjInit_2(::app::Uno::UX::Property__object* target, ::uString* key) { DataBinding__object___ObjInit_2(this, target, key); }
    bool Acceptor(::uObject* obj) { return DataBinding__object__Acceptor(this, obj); }
    ::app::Uno::UX::Property__object* Target() { return DataBinding__object__get_Target(this); }
    void OnValueChanged(::uObject* sender, ::app::Uno::UX::ValueChangedArgs__object* args) { DataBinding__object__OnValueChanged(this, sender, args); }
    void PushValue(::uObject* newValue) { DataBinding__object__PushValue(this, newValue); }
    void Target(::app::Uno::UX::Property__object* value) { DataBinding__object__set_Target(this, value); }
    void SetValue(::uObject* value) { DataBinding__object__SetValue(this, value); }
};

}}}


#endif
