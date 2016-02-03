// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Reactive\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_FUSE_REACTIVE_DATA_BINDING__DOUBLE_H__
#define __APP_FUSE_REACTIVE_DATA_BINDING__DOUBLE_H__

#include <app/Fuse.Reactive.Binding.h>
#include <app/Fuse.Reactive.IObserver.h>
#include <app/Fuse.Scripting.INameListener.h>
#include <Uno.h>
namespace app { namespace Fuse { struct Node; } }
namespace app { namespace Uno { namespace UX { struct Property__double; } } }
namespace app { namespace Uno { namespace UX { struct ValueChangedArgs__double; } } }

namespace app {
namespace Fuse {
namespace Reactive {

struct DataBinding__double;

struct DataBinding__double__uType : ::app::Fuse::Reactive::Binding__uType
{
    ::app::Fuse::Reactive::IObserver __interface_0;
    ::app::Fuse::Scripting::INameListener __interface_1;
};

DataBinding__double__uType* DataBinding__double__typeof();

void DataBinding__double___ObjInit_2(DataBinding__double* __this, ::app::Uno::UX::Property__double* target, ::uString* key);
bool DataBinding__double__Acceptor(DataBinding__double* __this, ::uObject* obj);
void DataBinding__double__Fuse_Reactive_IObserver_OnAdd(DataBinding__double* __this, ::uObject* addedValue);
void DataBinding__double__Fuse_Reactive_IObserver_OnFailed(DataBinding__double* __this, ::uString* message);
void DataBinding__double__Fuse_Reactive_IObserver_OnNewAll(DataBinding__double* __this, int length);
void DataBinding__double__Fuse_Reactive_IObserver_OnNewAt(DataBinding__double* __this, int index, ::uObject* value);
void DataBinding__double__Fuse_Reactive_IObserver_OnRemove(DataBinding__double* __this, ::uObject* value, int index);
void DataBinding__double__Fuse_Reactive_IObserver_OnSet(DataBinding__double* __this, ::uObject* newValue);
void DataBinding__double__Fuse_Scripting_INameListener_OnNameChanged(DataBinding__double* __this, ::uObject* obj, ::uString* name);
::app::Uno::UX::Property__double* DataBinding__double__get_Target(DataBinding__double* __this);
DataBinding__double* DataBinding__double__New_1(::uStatic* __this, ::app::Uno::UX::Property__double* target, ::uString* key);
void DataBinding__double__NewValue(DataBinding__double* __this, ::uObject* value);
void DataBinding__double__OnRooted(DataBinding__double* __this, ::app::Fuse::Node* n);
void DataBinding__double__OnUnrooted(DataBinding__double* __this, ::app::Fuse::Node* n);
void DataBinding__double__OnValueChanged(DataBinding__double* __this, ::uObject* sender, ::app::Uno::UX::ValueChangedArgs__double* args);
void DataBinding__double__PushValue(DataBinding__double* __this, ::uObject* newValue);
void DataBinding__double__set_Target(DataBinding__double* __this, ::app::Uno::UX::Property__double* value);
void DataBinding__double__SetValue(DataBinding__double* __this, double value);

struct DataBinding__double : ::app::Fuse::Reactive::Binding
{
    ::uStrong< ::uObject*> _subscription;
    ::uStrong< ::uObject*> _currentValue;
    ::uStrong< ::app::Uno::UX::Property__double*> _Target;

    void _ObjInit_2(::app::Uno::UX::Property__double* target, ::uString* key) { DataBinding__double___ObjInit_2(this, target, key); }
    bool Acceptor(::uObject* obj) { return DataBinding__double__Acceptor(this, obj); }
    ::app::Uno::UX::Property__double* Target() { return DataBinding__double__get_Target(this); }
    void OnValueChanged(::uObject* sender, ::app::Uno::UX::ValueChangedArgs__double* args) { DataBinding__double__OnValueChanged(this, sender, args); }
    void PushValue(::uObject* newValue) { DataBinding__double__PushValue(this, newValue); }
    void Target(::app::Uno::UX::Property__double* value) { DataBinding__double__set_Target(this, value); }
    void SetValue(double value) { DataBinding__double__SetValue(this, value); }
};

}}}


#endif
