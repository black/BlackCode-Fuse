// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Reactive\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_FUSE_REACTIVE_DATA_BINDING__FUSE_ELEMENTS_STRETCH_DIRECTION_H__
#define __APP_FUSE_REACTIVE_DATA_BINDING__FUSE_ELEMENTS_STRETCH_DIRECTION_H__

#include <app/Fuse.Reactive.Binding.h>
#include <app/Fuse.Reactive.IObserver.h>
#include <app/Fuse.Scripting.INameListener.h>
#include <Uno.h>
namespace app { namespace Fuse { struct Node; } }
namespace app { namespace Uno { namespace UX { struct Property__Fuse_Elements_StretchDirection; } } }
namespace app { namespace Uno { namespace UX { struct ValueChangedArgs__Fuse_Elements_StretchDirection; } } }

namespace app {
namespace Fuse {
namespace Reactive {

struct DataBinding__Fuse_Elements_StretchDirection;

struct DataBinding__Fuse_Elements_StretchDirection__uType : ::app::Fuse::Reactive::Binding__uType
{
    ::app::Fuse::Reactive::IObserver __interface_0;
    ::app::Fuse::Scripting::INameListener __interface_1;
};

DataBinding__Fuse_Elements_StretchDirection__uType* DataBinding__Fuse_Elements_StretchDirection__typeof();

void DataBinding__Fuse_Elements_StretchDirection___ObjInit_2(DataBinding__Fuse_Elements_StretchDirection* __this, ::app::Uno::UX::Property__Fuse_Elements_StretchDirection* target, ::uString* key);
bool DataBinding__Fuse_Elements_StretchDirection__Acceptor(DataBinding__Fuse_Elements_StretchDirection* __this, ::uObject* obj);
void DataBinding__Fuse_Elements_StretchDirection__Fuse_Reactive_IObserver_OnAdd(DataBinding__Fuse_Elements_StretchDirection* __this, ::uObject* addedValue);
void DataBinding__Fuse_Elements_StretchDirection__Fuse_Reactive_IObserver_OnFailed(DataBinding__Fuse_Elements_StretchDirection* __this, ::uString* message);
void DataBinding__Fuse_Elements_StretchDirection__Fuse_Reactive_IObserver_OnNewAll(DataBinding__Fuse_Elements_StretchDirection* __this, int length);
void DataBinding__Fuse_Elements_StretchDirection__Fuse_Reactive_IObserver_OnNewAt(DataBinding__Fuse_Elements_StretchDirection* __this, int index, ::uObject* value);
void DataBinding__Fuse_Elements_StretchDirection__Fuse_Reactive_IObserver_OnRemove(DataBinding__Fuse_Elements_StretchDirection* __this, ::uObject* value, int index);
void DataBinding__Fuse_Elements_StretchDirection__Fuse_Reactive_IObserver_OnSet(DataBinding__Fuse_Elements_StretchDirection* __this, ::uObject* newValue);
void DataBinding__Fuse_Elements_StretchDirection__Fuse_Scripting_INameListener_OnNameChanged(DataBinding__Fuse_Elements_StretchDirection* __this, ::uObject* obj, ::uString* name);
::app::Uno::UX::Property__Fuse_Elements_StretchDirection* DataBinding__Fuse_Elements_StretchDirection__get_Target(DataBinding__Fuse_Elements_StretchDirection* __this);
DataBinding__Fuse_Elements_StretchDirection* DataBinding__Fuse_Elements_StretchDirection__New_1(::uStatic* __this, ::app::Uno::UX::Property__Fuse_Elements_StretchDirection* target, ::uString* key);
void DataBinding__Fuse_Elements_StretchDirection__NewValue(DataBinding__Fuse_Elements_StretchDirection* __this, ::uObject* value);
void DataBinding__Fuse_Elements_StretchDirection__OnRooted(DataBinding__Fuse_Elements_StretchDirection* __this, ::app::Fuse::Node* n);
void DataBinding__Fuse_Elements_StretchDirection__OnUnrooted(DataBinding__Fuse_Elements_StretchDirection* __this, ::app::Fuse::Node* n);
void DataBinding__Fuse_Elements_StretchDirection__OnValueChanged(DataBinding__Fuse_Elements_StretchDirection* __this, ::uObject* sender, ::app::Uno::UX::ValueChangedArgs__Fuse_Elements_StretchDirection* args);
void DataBinding__Fuse_Elements_StretchDirection__PushValue(DataBinding__Fuse_Elements_StretchDirection* __this, ::uObject* newValue);
void DataBinding__Fuse_Elements_StretchDirection__set_Target(DataBinding__Fuse_Elements_StretchDirection* __this, ::app::Uno::UX::Property__Fuse_Elements_StretchDirection* value);
void DataBinding__Fuse_Elements_StretchDirection__SetValue(DataBinding__Fuse_Elements_StretchDirection* __this, int value);

struct DataBinding__Fuse_Elements_StretchDirection : ::app::Fuse::Reactive::Binding
{
    ::uStrong< ::uObject*> _subscription;
    ::uStrong< ::uObject*> _currentValue;
    ::uStrong< ::app::Uno::UX::Property__Fuse_Elements_StretchDirection*> _Target;

    void _ObjInit_2(::app::Uno::UX::Property__Fuse_Elements_StretchDirection* target, ::uString* key) { DataBinding__Fuse_Elements_StretchDirection___ObjInit_2(this, target, key); }
    bool Acceptor(::uObject* obj) { return DataBinding__Fuse_Elements_StretchDirection__Acceptor(this, obj); }
    ::app::Uno::UX::Property__Fuse_Elements_StretchDirection* Target() { return DataBinding__Fuse_Elements_StretchDirection__get_Target(this); }
    void OnValueChanged(::uObject* sender, ::app::Uno::UX::ValueChangedArgs__Fuse_Elements_StretchDirection* args) { DataBinding__Fuse_Elements_StretchDirection__OnValueChanged(this, sender, args); }
    void PushValue(::uObject* newValue) { DataBinding__Fuse_Elements_StretchDirection__PushValue(this, newValue); }
    void Target(::app::Uno::UX::Property__Fuse_Elements_StretchDirection* value) { DataBinding__Fuse_Elements_StretchDirection__set_Target(this, value); }
    void SetValue(int value) { DataBinding__Fuse_Elements_StretchDirection__SetValue(this, value); }
};

}}}


#endif
