// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Reactive\0.19.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Reactive.Binding.h>
#include <Fuse.Reactive.IObserver.h>
#include <Fuse.Scripting.INameListener.h>
namespace g{namespace Fuse{namespace Reactive{struct DataBinding;}}}
namespace g{namespace Fuse{struct Node;}}
namespace g{namespace Uno{namespace UX{struct Property;}}}
namespace g{namespace Uno{namespace UX{struct ValueChangedArgs;}}}

namespace g{
namespace Fuse{
namespace Reactive{

// public class DataBinding<T> :490
// {
struct DataBinding_type : ::g::Fuse::Reactive::Binding_type
{
    ::g::Fuse::Reactive::IObserver interface0;
    ::g::Fuse::Scripting::INameListener interface1;
};

DataBinding_type* DataBinding_typeof();
void DataBinding__ctor_2_fn(DataBinding* __this, ::g::Uno::UX::Property* target, uString* key);
void DataBinding__Acceptor_fn(DataBinding* __this, uObject* obj, bool* __retval);
void DataBinding__Fuse_Reactive_IObserver_OnAdd_fn(DataBinding* __this, uObject* addedValue);
void DataBinding__Fuse_Reactive_IObserver_OnFailed_fn(DataBinding* __this, uString* message);
void DataBinding__Fuse_Reactive_IObserver_OnInsertAt_fn(DataBinding* __this, int* index, uObject* value);
void DataBinding__Fuse_Reactive_IObserver_OnNewAll_fn(DataBinding* __this, int* length);
void DataBinding__Fuse_Reactive_IObserver_OnNewAt_fn(DataBinding* __this, int* index, uObject* value);
void DataBinding__Fuse_Reactive_IObserver_OnRemove_fn(DataBinding* __this, uObject* value, int* index);
void DataBinding__Fuse_Reactive_IObserver_OnSet_fn(DataBinding* __this, uObject* newValue);
void DataBinding__Fuse_Scripting_INameListener_OnNameChanged_fn(DataBinding* __this, uObject* obj, uString* name);
void DataBinding__New1_fn(uType* __type, ::g::Uno::UX::Property* target, uString* key, DataBinding** __retval);
void DataBinding__NewValue_fn(DataBinding* __this, uObject* value);
void DataBinding__OnRooted_fn(DataBinding* __this, ::g::Fuse::Node* parentNode);
void DataBinding__OnUnrooted_fn(DataBinding* __this, ::g::Fuse::Node* parentNode);
void DataBinding__OnValueChanged_fn(DataBinding* __this, uObject* sender, ::g::Uno::UX::ValueChangedArgs* args);
void DataBinding__PushValue_fn(DataBinding* __this, uObject* newValue);
void DataBinding__SetValue_fn(DataBinding* __this, void* value);
void DataBinding__get_Target_fn(DataBinding* __this, ::g::Uno::UX::Property** __retval);
void DataBinding__set_Target_fn(DataBinding* __this, ::g::Uno::UX::Property* value);

struct DataBinding : ::g::Fuse::Reactive::Binding
{
    uStrong<uObject*> _currentValue;
    uStrong<uObject*> _subscription;
    uStrong< ::g::Uno::UX::Property*> _Target;

    void ctor_2(::g::Uno::UX::Property* target, uString* key);
    bool Acceptor(uObject* obj);
    void OnValueChanged(uObject* sender, ::g::Uno::UX::ValueChangedArgs* args);
    void PushValue(uObject* newValue);
    template<class T>
    void SetValue(T value) { DataBinding__SetValue_fn(this, uConstrain(__type->GetBase(DataBinding_typeof())->T(0), value)); }
    ::g::Uno::UX::Property* Target();
    void Target(::g::Uno::UX::Property* value);
    static DataBinding* New1(uType* __type, ::g::Uno::UX::Property* target, uString* key);
};
// }

}}} // ::g::Fuse::Reactive
