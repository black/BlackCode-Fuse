// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Reactive\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_FUSE_REACTIVE_DATA_BINDING__FLOAT_H__
#define __APP_FUSE_REACTIVE_DATA_BINDING__FLOAT_H__

#include <app/Fuse.Reactive.Binding.h>
#include <app/Fuse.Reactive.IObserver.h>
#include <app/Fuse.Scripting.INameListener.h>
#include <Uno.h>
namespace app { namespace Fuse { struct Node; } }
namespace app { namespace Uno { namespace UX { struct Property__float; } } }
namespace app { namespace Uno { namespace UX { struct ValueChangedArgs__float; } } }

namespace app {
namespace Fuse {
namespace Reactive {

struct DataBinding__float;

struct DataBinding__float__uType : ::app::Fuse::Reactive::Binding__uType
{
    ::app::Fuse::Reactive::IObserver __interface_0;
    ::app::Fuse::Scripting::INameListener __interface_1;
};

DataBinding__float__uType* DataBinding__float__typeof();

void DataBinding__float___ObjInit_2(DataBinding__float* __this, ::app::Uno::UX::Property__float* target, ::uString* key);
bool DataBinding__float__Acceptor(DataBinding__float* __this, ::uObject* obj);
void DataBinding__float__Fuse_Reactive_IObserver_OnAdd(DataBinding__float* __this, ::uObject* addedValue);
void DataBinding__float__Fuse_Reactive_IObserver_OnFailed(DataBinding__float* __this, ::uString* message);
void DataBinding__float__Fuse_Reactive_IObserver_OnNewAll(DataBinding__float* __this, int length);
void DataBinding__float__Fuse_Reactive_IObserver_OnNewAt(DataBinding__float* __this, int index, ::uObject* value);
void DataBinding__float__Fuse_Reactive_IObserver_OnRemove(DataBinding__float* __this, ::uObject* value, int index);
void DataBinding__float__Fuse_Reactive_IObserver_OnSet(DataBinding__float* __this, ::uObject* newValue);
void DataBinding__float__Fuse_Scripting_INameListener_OnNameChanged(DataBinding__float* __this, ::uObject* obj, ::uString* name);
::app::Uno::UX::Property__float* DataBinding__float__get_Target(DataBinding__float* __this);
DataBinding__float* DataBinding__float__New_1(::uStatic* __this, ::app::Uno::UX::Property__float* target, ::uString* key);
void DataBinding__float__NewValue(DataBinding__float* __this, ::uObject* value);
void DataBinding__float__OnRooted(DataBinding__float* __this, ::app::Fuse::Node* n);
void DataBinding__float__OnUnrooted(DataBinding__float* __this, ::app::Fuse::Node* n);
void DataBinding__float__OnValueChanged(DataBinding__float* __this, ::uObject* sender, ::app::Uno::UX::ValueChangedArgs__float* args);
void DataBinding__float__PushValue(DataBinding__float* __this, ::uObject* newValue);
void DataBinding__float__set_Target(DataBinding__float* __this, ::app::Uno::UX::Property__float* value);
void DataBinding__float__SetValue(DataBinding__float* __this, float value);

struct DataBinding__float : ::app::Fuse::Reactive::Binding
{
    ::uStrong< ::uObject*> _subscription;
    ::uStrong< ::uObject*> _currentValue;
    ::uStrong< ::app::Uno::UX::Property__float*> _Target;

    void _ObjInit_2(::app::Uno::UX::Property__float* target, ::uString* key) { DataBinding__float___ObjInit_2(this, target, key); }
    bool Acceptor(::uObject* obj) { return DataBinding__float__Acceptor(this, obj); }
    ::app::Uno::UX::Property__float* Target() { return DataBinding__float__get_Target(this); }
    void OnValueChanged(::uObject* sender, ::app::Uno::UX::ValueChangedArgs__float* args) { DataBinding__float__OnValueChanged(this, sender, args); }
    void PushValue(::uObject* newValue) { DataBinding__float__PushValue(this, newValue); }
    void Target(::app::Uno::UX::Property__float* value) { DataBinding__float__set_Target(this, value); }
    void SetValue(float value) { DataBinding__float__SetValue(this, value); }
};

}}}


#endif
