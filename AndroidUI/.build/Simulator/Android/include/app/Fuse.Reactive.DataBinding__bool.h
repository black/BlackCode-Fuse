// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Reactive\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_FUSE_REACTIVE_DATA_BINDING__BOOL_H__
#define __APP_FUSE_REACTIVE_DATA_BINDING__BOOL_H__

#include <app/Fuse.Reactive.Binding.h>
#include <app/Fuse.Reactive.IObserver.h>
#include <app/Fuse.Scripting.INameListener.h>
#include <Uno.h>
namespace app { namespace Fuse { struct Node; } }
namespace app { namespace Uno { namespace UX { struct Property__bool; } } }
namespace app { namespace Uno { namespace UX { struct ValueChangedArgs__bool; } } }

namespace app {
namespace Fuse {
namespace Reactive {

struct DataBinding__bool;

struct DataBinding__bool__uType : ::app::Fuse::Reactive::Binding__uType
{
    ::app::Fuse::Reactive::IObserver __interface_0;
    ::app::Fuse::Scripting::INameListener __interface_1;
};

DataBinding__bool__uType* DataBinding__bool__typeof();

void DataBinding__bool___ObjInit_2(DataBinding__bool* __this, ::app::Uno::UX::Property__bool* target, ::uString* key);
bool DataBinding__bool__Acceptor(DataBinding__bool* __this, ::uObject* obj);
void DataBinding__bool__Fuse_Reactive_IObserver_OnAdd(DataBinding__bool* __this, ::uObject* addedValue);
void DataBinding__bool__Fuse_Reactive_IObserver_OnFailed(DataBinding__bool* __this, ::uString* message);
void DataBinding__bool__Fuse_Reactive_IObserver_OnNewAll(DataBinding__bool* __this, int length);
void DataBinding__bool__Fuse_Reactive_IObserver_OnNewAt(DataBinding__bool* __this, int index, ::uObject* value);
void DataBinding__bool__Fuse_Reactive_IObserver_OnRemove(DataBinding__bool* __this, ::uObject* value, int index);
void DataBinding__bool__Fuse_Reactive_IObserver_OnSet(DataBinding__bool* __this, ::uObject* newValue);
void DataBinding__bool__Fuse_Scripting_INameListener_OnNameChanged(DataBinding__bool* __this, ::uObject* obj, ::uString* name);
::app::Uno::UX::Property__bool* DataBinding__bool__get_Target(DataBinding__bool* __this);
DataBinding__bool* DataBinding__bool__New_1(::uStatic* __this, ::app::Uno::UX::Property__bool* target, ::uString* key);
void DataBinding__bool__NewValue(DataBinding__bool* __this, ::uObject* value);
void DataBinding__bool__OnRooted(DataBinding__bool* __this, ::app::Fuse::Node* n);
void DataBinding__bool__OnUnrooted(DataBinding__bool* __this, ::app::Fuse::Node* n);
void DataBinding__bool__OnValueChanged(DataBinding__bool* __this, ::uObject* sender, ::app::Uno::UX::ValueChangedArgs__bool* args);
void DataBinding__bool__PushValue(DataBinding__bool* __this, ::uObject* newValue);
void DataBinding__bool__set_Target(DataBinding__bool* __this, ::app::Uno::UX::Property__bool* value);
void DataBinding__bool__SetValue(DataBinding__bool* __this, bool value);

struct DataBinding__bool : ::app::Fuse::Reactive::Binding
{
    ::uStrong< ::uObject*> _subscription;
    ::uStrong< ::uObject*> _currentValue;
    ::uStrong< ::app::Uno::UX::Property__bool*> _Target;

    void _ObjInit_2(::app::Uno::UX::Property__bool* target, ::uString* key) { DataBinding__bool___ObjInit_2(this, target, key); }
    bool Acceptor(::uObject* obj) { return DataBinding__bool__Acceptor(this, obj); }
    ::app::Uno::UX::Property__bool* Target() { return DataBinding__bool__get_Target(this); }
    void OnValueChanged(::uObject* sender, ::app::Uno::UX::ValueChangedArgs__bool* args) { DataBinding__bool__OnValueChanged(this, sender, args); }
    void PushValue(::uObject* newValue) { DataBinding__bool__PushValue(this, newValue); }
    void Target(::app::Uno::UX::Property__bool* value) { DataBinding__bool__set_Target(this, value); }
    void SetValue(bool value) { DataBinding__bool__SetValue(this, value); }
};

}}}


#endif
