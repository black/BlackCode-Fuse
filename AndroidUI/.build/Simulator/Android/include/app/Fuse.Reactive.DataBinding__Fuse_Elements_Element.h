// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Reactive\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_FUSE_REACTIVE_DATA_BINDING__FUSE_ELEMENTS_ELEMENT_H__
#define __APP_FUSE_REACTIVE_DATA_BINDING__FUSE_ELEMENTS_ELEMENT_H__

#include <app/Fuse.Reactive.Binding.h>
#include <app/Fuse.Reactive.IObserver.h>
#include <app/Fuse.Scripting.INameListener.h>
#include <Uno.h>
namespace app { namespace Fuse { namespace Elements { struct Element; } } }
namespace app { namespace Fuse { struct Node; } }
namespace app { namespace Uno { namespace UX { struct Property__Fuse_Elements_Element; } } }
namespace app { namespace Uno { namespace UX { struct ValueChangedArgs__Fuse_Elements_Element; } } }

namespace app {
namespace Fuse {
namespace Reactive {

struct DataBinding__Fuse_Elements_Element;

struct DataBinding__Fuse_Elements_Element__uType : ::app::Fuse::Reactive::Binding__uType
{
    ::app::Fuse::Reactive::IObserver __interface_0;
    ::app::Fuse::Scripting::INameListener __interface_1;
};

DataBinding__Fuse_Elements_Element__uType* DataBinding__Fuse_Elements_Element__typeof();

void DataBinding__Fuse_Elements_Element___ObjInit_2(DataBinding__Fuse_Elements_Element* __this, ::app::Uno::UX::Property__Fuse_Elements_Element* target, ::uString* key);
bool DataBinding__Fuse_Elements_Element__Acceptor(DataBinding__Fuse_Elements_Element* __this, ::uObject* obj);
void DataBinding__Fuse_Elements_Element__Fuse_Reactive_IObserver_OnAdd(DataBinding__Fuse_Elements_Element* __this, ::uObject* addedValue);
void DataBinding__Fuse_Elements_Element__Fuse_Reactive_IObserver_OnFailed(DataBinding__Fuse_Elements_Element* __this, ::uString* message);
void DataBinding__Fuse_Elements_Element__Fuse_Reactive_IObserver_OnNewAll(DataBinding__Fuse_Elements_Element* __this, int length);
void DataBinding__Fuse_Elements_Element__Fuse_Reactive_IObserver_OnNewAt(DataBinding__Fuse_Elements_Element* __this, int index, ::uObject* value);
void DataBinding__Fuse_Elements_Element__Fuse_Reactive_IObserver_OnRemove(DataBinding__Fuse_Elements_Element* __this, ::uObject* value, int index);
void DataBinding__Fuse_Elements_Element__Fuse_Reactive_IObserver_OnSet(DataBinding__Fuse_Elements_Element* __this, ::uObject* newValue);
void DataBinding__Fuse_Elements_Element__Fuse_Scripting_INameListener_OnNameChanged(DataBinding__Fuse_Elements_Element* __this, ::uObject* obj, ::uString* name);
::app::Uno::UX::Property__Fuse_Elements_Element* DataBinding__Fuse_Elements_Element__get_Target(DataBinding__Fuse_Elements_Element* __this);
DataBinding__Fuse_Elements_Element* DataBinding__Fuse_Elements_Element__New_1(::uStatic* __this, ::app::Uno::UX::Property__Fuse_Elements_Element* target, ::uString* key);
void DataBinding__Fuse_Elements_Element__NewValue(DataBinding__Fuse_Elements_Element* __this, ::uObject* value);
void DataBinding__Fuse_Elements_Element__OnRooted(DataBinding__Fuse_Elements_Element* __this, ::app::Fuse::Node* n);
void DataBinding__Fuse_Elements_Element__OnUnrooted(DataBinding__Fuse_Elements_Element* __this, ::app::Fuse::Node* n);
void DataBinding__Fuse_Elements_Element__OnValueChanged(DataBinding__Fuse_Elements_Element* __this, ::uObject* sender, ::app::Uno::UX::ValueChangedArgs__Fuse_Elements_Element* args);
void DataBinding__Fuse_Elements_Element__PushValue(DataBinding__Fuse_Elements_Element* __this, ::uObject* newValue);
void DataBinding__Fuse_Elements_Element__set_Target(DataBinding__Fuse_Elements_Element* __this, ::app::Uno::UX::Property__Fuse_Elements_Element* value);
void DataBinding__Fuse_Elements_Element__SetValue(DataBinding__Fuse_Elements_Element* __this, ::app::Fuse::Elements::Element* value);

struct DataBinding__Fuse_Elements_Element : ::app::Fuse::Reactive::Binding
{
    ::uStrong< ::uObject*> _subscription;
    ::uStrong< ::uObject*> _currentValue;
    ::uStrong< ::app::Uno::UX::Property__Fuse_Elements_Element*> _Target;

    void _ObjInit_2(::app::Uno::UX::Property__Fuse_Elements_Element* target, ::uString* key) { DataBinding__Fuse_Elements_Element___ObjInit_2(this, target, key); }
    bool Acceptor(::uObject* obj) { return DataBinding__Fuse_Elements_Element__Acceptor(this, obj); }
    ::app::Uno::UX::Property__Fuse_Elements_Element* Target() { return DataBinding__Fuse_Elements_Element__get_Target(this); }
    void OnValueChanged(::uObject* sender, ::app::Uno::UX::ValueChangedArgs__Fuse_Elements_Element* args) { DataBinding__Fuse_Elements_Element__OnValueChanged(this, sender, args); }
    void PushValue(::uObject* newValue) { DataBinding__Fuse_Elements_Element__PushValue(this, newValue); }
    void Target(::app::Uno::UX::Property__Fuse_Elements_Element* value) { DataBinding__Fuse_Elements_Element__set_Target(this, value); }
    void SetValue(::app::Fuse::Elements::Element* value) { DataBinding__Fuse_Elements_Element__SetValue(this, value); }
};

}}}


#endif
