// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Reactive\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_FUSE_REACTIVE_DATA_BINDING__LONG_H__
#define __APP_FUSE_REACTIVE_DATA_BINDING__LONG_H__

#include <app/Fuse.Reactive.Binding.h>
#include <app/Fuse.Reactive.IObserver.h>
#include <app/Fuse.Scripting.INameListener.h>
#include <Uno.h>
namespace app { namespace Fuse { struct Node; } }
namespace app { namespace Uno { namespace UX { struct Property__long; } } }
namespace app { namespace Uno { namespace UX { struct ValueChangedArgs__long; } } }

namespace app {
namespace Fuse {
namespace Reactive {

struct DataBinding__long;

struct DataBinding__long__uType : ::app::Fuse::Reactive::Binding__uType
{
    ::app::Fuse::Reactive::IObserver __interface_0;
    ::app::Fuse::Scripting::INameListener __interface_1;
};

DataBinding__long__uType* DataBinding__long__typeof();

void DataBinding__long___ObjInit_2(DataBinding__long* __this, ::app::Uno::UX::Property__long* target, ::uString* key);
bool DataBinding__long__Acceptor(DataBinding__long* __this, ::uObject* obj);
void DataBinding__long__Fuse_Reactive_IObserver_OnAdd(DataBinding__long* __this, ::uObject* addedValue);
void DataBinding__long__Fuse_Reactive_IObserver_OnFailed(DataBinding__long* __this, ::uString* message);
void DataBinding__long__Fuse_Reactive_IObserver_OnNewAll(DataBinding__long* __this, int length);
void DataBinding__long__Fuse_Reactive_IObserver_OnNewAt(DataBinding__long* __this, int index, ::uObject* value);
void DataBinding__long__Fuse_Reactive_IObserver_OnRemove(DataBinding__long* __this, ::uObject* value, int index);
void DataBinding__long__Fuse_Reactive_IObserver_OnSet(DataBinding__long* __this, ::uObject* newValue);
void DataBinding__long__Fuse_Scripting_INameListener_OnNameChanged(DataBinding__long* __this, ::uObject* obj, ::uString* name);
::app::Uno::UX::Property__long* DataBinding__long__get_Target(DataBinding__long* __this);
DataBinding__long* DataBinding__long__New_1(::uStatic* __this, ::app::Uno::UX::Property__long* target, ::uString* key);
void DataBinding__long__NewValue(DataBinding__long* __this, ::uObject* value);
void DataBinding__long__OnRooted(DataBinding__long* __this, ::app::Fuse::Node* n);
void DataBinding__long__OnUnrooted(DataBinding__long* __this, ::app::Fuse::Node* n);
void DataBinding__long__OnValueChanged(DataBinding__long* __this, ::uObject* sender, ::app::Uno::UX::ValueChangedArgs__long* args);
void DataBinding__long__PushValue(DataBinding__long* __this, ::uObject* newValue);
void DataBinding__long__set_Target(DataBinding__long* __this, ::app::Uno::UX::Property__long* value);
void DataBinding__long__SetValue(DataBinding__long* __this, ::uLong value);

struct DataBinding__long : ::app::Fuse::Reactive::Binding
{
    ::uStrong< ::uObject*> _subscription;
    ::uStrong< ::uObject*> _currentValue;
    ::uStrong< ::app::Uno::UX::Property__long*> _Target;

    void _ObjInit_2(::app::Uno::UX::Property__long* target, ::uString* key) { DataBinding__long___ObjInit_2(this, target, key); }
    bool Acceptor(::uObject* obj) { return DataBinding__long__Acceptor(this, obj); }
    ::app::Uno::UX::Property__long* Target() { return DataBinding__long__get_Target(this); }
    void OnValueChanged(::uObject* sender, ::app::Uno::UX::ValueChangedArgs__long* args) { DataBinding__long__OnValueChanged(this, sender, args); }
    void PushValue(::uObject* newValue) { DataBinding__long__PushValue(this, newValue); }
    void Target(::app::Uno::UX::Property__long* value) { DataBinding__long__set_Target(this, value); }
    void SetValue(::uLong value) { DataBinding__long__SetValue(this, value); }
};

}}}


#endif
