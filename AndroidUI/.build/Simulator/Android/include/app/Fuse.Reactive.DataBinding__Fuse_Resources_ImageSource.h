// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Reactive\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_FUSE_REACTIVE_DATA_BINDING__FUSE_RESOURCES_IMAGE_SOURCE_H__
#define __APP_FUSE_REACTIVE_DATA_BINDING__FUSE_RESOURCES_IMAGE_SOURCE_H__

#include <app/Fuse.Reactive.Binding.h>
#include <app/Fuse.Reactive.IObserver.h>
#include <app/Fuse.Scripting.INameListener.h>
#include <Uno.h>
namespace app { namespace Fuse { namespace Resources { struct ImageSource; } } }
namespace app { namespace Fuse { struct Node; } }
namespace app { namespace Uno { namespace UX { struct Property__Fuse_Resources_ImageSource; } } }
namespace app { namespace Uno { namespace UX { struct ValueChangedArgs__Fuse_Resources_ImageSource; } } }

namespace app {
namespace Fuse {
namespace Reactive {

struct DataBinding__Fuse_Resources_ImageSource;

struct DataBinding__Fuse_Resources_ImageSource__uType : ::app::Fuse::Reactive::Binding__uType
{
    ::app::Fuse::Reactive::IObserver __interface_0;
    ::app::Fuse::Scripting::INameListener __interface_1;
};

DataBinding__Fuse_Resources_ImageSource__uType* DataBinding__Fuse_Resources_ImageSource__typeof();

void DataBinding__Fuse_Resources_ImageSource___ObjInit_2(DataBinding__Fuse_Resources_ImageSource* __this, ::app::Uno::UX::Property__Fuse_Resources_ImageSource* target, ::uString* key);
bool DataBinding__Fuse_Resources_ImageSource__Acceptor(DataBinding__Fuse_Resources_ImageSource* __this, ::uObject* obj);
void DataBinding__Fuse_Resources_ImageSource__Fuse_Reactive_IObserver_OnAdd(DataBinding__Fuse_Resources_ImageSource* __this, ::uObject* addedValue);
void DataBinding__Fuse_Resources_ImageSource__Fuse_Reactive_IObserver_OnFailed(DataBinding__Fuse_Resources_ImageSource* __this, ::uString* message);
void DataBinding__Fuse_Resources_ImageSource__Fuse_Reactive_IObserver_OnNewAll(DataBinding__Fuse_Resources_ImageSource* __this, int length);
void DataBinding__Fuse_Resources_ImageSource__Fuse_Reactive_IObserver_OnNewAt(DataBinding__Fuse_Resources_ImageSource* __this, int index, ::uObject* value);
void DataBinding__Fuse_Resources_ImageSource__Fuse_Reactive_IObserver_OnRemove(DataBinding__Fuse_Resources_ImageSource* __this, ::uObject* value, int index);
void DataBinding__Fuse_Resources_ImageSource__Fuse_Reactive_IObserver_OnSet(DataBinding__Fuse_Resources_ImageSource* __this, ::uObject* newValue);
void DataBinding__Fuse_Resources_ImageSource__Fuse_Scripting_INameListener_OnNameChanged(DataBinding__Fuse_Resources_ImageSource* __this, ::uObject* obj, ::uString* name);
::app::Uno::UX::Property__Fuse_Resources_ImageSource* DataBinding__Fuse_Resources_ImageSource__get_Target(DataBinding__Fuse_Resources_ImageSource* __this);
DataBinding__Fuse_Resources_ImageSource* DataBinding__Fuse_Resources_ImageSource__New_1(::uStatic* __this, ::app::Uno::UX::Property__Fuse_Resources_ImageSource* target, ::uString* key);
void DataBinding__Fuse_Resources_ImageSource__NewValue(DataBinding__Fuse_Resources_ImageSource* __this, ::uObject* value);
void DataBinding__Fuse_Resources_ImageSource__OnRooted(DataBinding__Fuse_Resources_ImageSource* __this, ::app::Fuse::Node* n);
void DataBinding__Fuse_Resources_ImageSource__OnUnrooted(DataBinding__Fuse_Resources_ImageSource* __this, ::app::Fuse::Node* n);
void DataBinding__Fuse_Resources_ImageSource__OnValueChanged(DataBinding__Fuse_Resources_ImageSource* __this, ::uObject* sender, ::app::Uno::UX::ValueChangedArgs__Fuse_Resources_ImageSource* args);
void DataBinding__Fuse_Resources_ImageSource__PushValue(DataBinding__Fuse_Resources_ImageSource* __this, ::uObject* newValue);
void DataBinding__Fuse_Resources_ImageSource__set_Target(DataBinding__Fuse_Resources_ImageSource* __this, ::app::Uno::UX::Property__Fuse_Resources_ImageSource* value);
void DataBinding__Fuse_Resources_ImageSource__SetValue(DataBinding__Fuse_Resources_ImageSource* __this, ::app::Fuse::Resources::ImageSource* value);

struct DataBinding__Fuse_Resources_ImageSource : ::app::Fuse::Reactive::Binding
{
    ::uStrong< ::uObject*> _subscription;
    ::uStrong< ::uObject*> _currentValue;
    ::uStrong< ::app::Uno::UX::Property__Fuse_Resources_ImageSource*> _Target;

    void _ObjInit_2(::app::Uno::UX::Property__Fuse_Resources_ImageSource* target, ::uString* key) { DataBinding__Fuse_Resources_ImageSource___ObjInit_2(this, target, key); }
    bool Acceptor(::uObject* obj) { return DataBinding__Fuse_Resources_ImageSource__Acceptor(this, obj); }
    ::app::Uno::UX::Property__Fuse_Resources_ImageSource* Target() { return DataBinding__Fuse_Resources_ImageSource__get_Target(this); }
    void OnValueChanged(::uObject* sender, ::app::Uno::UX::ValueChangedArgs__Fuse_Resources_ImageSource* args) { DataBinding__Fuse_Resources_ImageSource__OnValueChanged(this, sender, args); }
    void PushValue(::uObject* newValue) { DataBinding__Fuse_Resources_ImageSource__PushValue(this, newValue); }
    void Target(::app::Uno::UX::Property__Fuse_Resources_ImageSource* value) { DataBinding__Fuse_Resources_ImageSource__set_Target(this, value); }
    void SetValue(::app::Fuse::Resources::ImageSource* value) { DataBinding__Fuse_Resources_ImageSource__SetValue(this, value); }
};

}}}


#endif
