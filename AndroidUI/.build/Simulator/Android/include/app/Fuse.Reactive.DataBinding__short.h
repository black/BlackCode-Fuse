// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Reactive\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_FUSE_REACTIVE_DATA_BINDING__SHORT_H__
#define __APP_FUSE_REACTIVE_DATA_BINDING__SHORT_H__

#include <app/Fuse.Reactive.Binding.h>
#include <app/Fuse.Reactive.IObserver.h>
#include <app/Fuse.Scripting.INameListener.h>
#include <Uno.h>
namespace app { namespace Fuse { struct Node; } }
namespace app { namespace Uno { namespace UX { struct Property__short; } } }
namespace app { namespace Uno { namespace UX { struct ValueChangedArgs__short; } } }

namespace app {
namespace Fuse {
namespace Reactive {

struct DataBinding__short;

struct DataBinding__short__uType : ::app::Fuse::Reactive::Binding__uType
{
    ::app::Fuse::Reactive::IObserver __interface_0;
    ::app::Fuse::Scripting::INameListener __interface_1;
};

DataBinding__short__uType* DataBinding__short__typeof();

void DataBinding__short___ObjInit_2(DataBinding__short* __this, ::app::Uno::UX::Property__short* target, ::uString* key);
bool DataBinding__short__Acceptor(DataBinding__short* __this, ::uObject* obj);
void DataBinding__short__Fuse_Reactive_IObserver_OnAdd(DataBinding__short* __this, ::uObject* addedValue);
void DataBinding__short__Fuse_Reactive_IObserver_OnFailed(DataBinding__short* __this, ::uString* message);
void DataBinding__short__Fuse_Reactive_IObserver_OnNewAll(DataBinding__short* __this, int length);
void DataBinding__short__Fuse_Reactive_IObserver_OnNewAt(DataBinding__short* __this, int index, ::uObject* value);
void DataBinding__short__Fuse_Reactive_IObserver_OnRemove(DataBinding__short* __this, ::uObject* value, int index);
void DataBinding__short__Fuse_Reactive_IObserver_OnSet(DataBinding__short* __this, ::uObject* newValue);
void DataBinding__short__Fuse_Scripting_INameListener_OnNameChanged(DataBinding__short* __this, ::uObject* obj, ::uString* name);
::app::Uno::UX::Property__short* DataBinding__short__get_Target(DataBinding__short* __this);
DataBinding__short* DataBinding__short__New_1(::uStatic* __this, ::app::Uno::UX::Property__short* target, ::uString* key);
void DataBinding__short__NewValue(DataBinding__short* __this, ::uObject* value);
void DataBinding__short__OnRooted(DataBinding__short* __this, ::app::Fuse::Node* n);
void DataBinding__short__OnUnrooted(DataBinding__short* __this, ::app::Fuse::Node* n);
void DataBinding__short__OnValueChanged(DataBinding__short* __this, ::uObject* sender, ::app::Uno::UX::ValueChangedArgs__short* args);
void DataBinding__short__PushValue(DataBinding__short* __this, ::uObject* newValue);
void DataBinding__short__set_Target(DataBinding__short* __this, ::app::Uno::UX::Property__short* value);
void DataBinding__short__SetValue(DataBinding__short* __this, ::uShort value);

struct DataBinding__short : ::app::Fuse::Reactive::Binding
{
    ::uStrong< ::uObject*> _subscription;
    ::uStrong< ::uObject*> _currentValue;
    ::uStrong< ::app::Uno::UX::Property__short*> _Target;

    void _ObjInit_2(::app::Uno::UX::Property__short* target, ::uString* key) { DataBinding__short___ObjInit_2(this, target, key); }
    bool Acceptor(::uObject* obj) { return DataBinding__short__Acceptor(this, obj); }
    ::app::Uno::UX::Property__short* Target() { return DataBinding__short__get_Target(this); }
    void OnValueChanged(::uObject* sender, ::app::Uno::UX::ValueChangedArgs__short* args) { DataBinding__short__OnValueChanged(this, sender, args); }
    void PushValue(::uObject* newValue) { DataBinding__short__PushValue(this, newValue); }
    void Target(::app::Uno::UX::Property__short* value) { DataBinding__short__set_Target(this, value); }
    void SetValue(::uShort value) { DataBinding__short__SetValue(this, value); }
};

}}}


#endif
