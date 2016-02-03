// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Reactive\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_FUSE_REACTIVE_DATA_BINDING__FUSE_NAVIGATION_SWIPE_DIRECTION_H__
#define __APP_FUSE_REACTIVE_DATA_BINDING__FUSE_NAVIGATION_SWIPE_DIRECTION_H__

#include <app/Fuse.Reactive.Binding.h>
#include <app/Fuse.Reactive.IObserver.h>
#include <app/Fuse.Scripting.INameListener.h>
#include <Uno.h>
namespace app { namespace Fuse { struct Node; } }
namespace app { namespace Uno { namespace UX { struct Property__Fuse_Navigation_SwipeDirection; } } }
namespace app { namespace Uno { namespace UX { struct ValueChangedArgs__Fuse_Navigation_SwipeDirection; } } }

namespace app {
namespace Fuse {
namespace Reactive {

struct DataBinding__Fuse_Navigation_SwipeDirection;

struct DataBinding__Fuse_Navigation_SwipeDirection__uType : ::app::Fuse::Reactive::Binding__uType
{
    ::app::Fuse::Reactive::IObserver __interface_0;
    ::app::Fuse::Scripting::INameListener __interface_1;
};

DataBinding__Fuse_Navigation_SwipeDirection__uType* DataBinding__Fuse_Navigation_SwipeDirection__typeof();

void DataBinding__Fuse_Navigation_SwipeDirection___ObjInit_2(DataBinding__Fuse_Navigation_SwipeDirection* __this, ::app::Uno::UX::Property__Fuse_Navigation_SwipeDirection* target, ::uString* key);
bool DataBinding__Fuse_Navigation_SwipeDirection__Acceptor(DataBinding__Fuse_Navigation_SwipeDirection* __this, ::uObject* obj);
void DataBinding__Fuse_Navigation_SwipeDirection__Fuse_Reactive_IObserver_OnAdd(DataBinding__Fuse_Navigation_SwipeDirection* __this, ::uObject* addedValue);
void DataBinding__Fuse_Navigation_SwipeDirection__Fuse_Reactive_IObserver_OnFailed(DataBinding__Fuse_Navigation_SwipeDirection* __this, ::uString* message);
void DataBinding__Fuse_Navigation_SwipeDirection__Fuse_Reactive_IObserver_OnNewAll(DataBinding__Fuse_Navigation_SwipeDirection* __this, int length);
void DataBinding__Fuse_Navigation_SwipeDirection__Fuse_Reactive_IObserver_OnNewAt(DataBinding__Fuse_Navigation_SwipeDirection* __this, int index, ::uObject* value);
void DataBinding__Fuse_Navigation_SwipeDirection__Fuse_Reactive_IObserver_OnRemove(DataBinding__Fuse_Navigation_SwipeDirection* __this, ::uObject* value, int index);
void DataBinding__Fuse_Navigation_SwipeDirection__Fuse_Reactive_IObserver_OnSet(DataBinding__Fuse_Navigation_SwipeDirection* __this, ::uObject* newValue);
void DataBinding__Fuse_Navigation_SwipeDirection__Fuse_Scripting_INameListener_OnNameChanged(DataBinding__Fuse_Navigation_SwipeDirection* __this, ::uObject* obj, ::uString* name);
::app::Uno::UX::Property__Fuse_Navigation_SwipeDirection* DataBinding__Fuse_Navigation_SwipeDirection__get_Target(DataBinding__Fuse_Navigation_SwipeDirection* __this);
DataBinding__Fuse_Navigation_SwipeDirection* DataBinding__Fuse_Navigation_SwipeDirection__New_1(::uStatic* __this, ::app::Uno::UX::Property__Fuse_Navigation_SwipeDirection* target, ::uString* key);
void DataBinding__Fuse_Navigation_SwipeDirection__NewValue(DataBinding__Fuse_Navigation_SwipeDirection* __this, ::uObject* value);
void DataBinding__Fuse_Navigation_SwipeDirection__OnRooted(DataBinding__Fuse_Navigation_SwipeDirection* __this, ::app::Fuse::Node* n);
void DataBinding__Fuse_Navigation_SwipeDirection__OnUnrooted(DataBinding__Fuse_Navigation_SwipeDirection* __this, ::app::Fuse::Node* n);
void DataBinding__Fuse_Navigation_SwipeDirection__OnValueChanged(DataBinding__Fuse_Navigation_SwipeDirection* __this, ::uObject* sender, ::app::Uno::UX::ValueChangedArgs__Fuse_Navigation_SwipeDirection* args);
void DataBinding__Fuse_Navigation_SwipeDirection__PushValue(DataBinding__Fuse_Navigation_SwipeDirection* __this, ::uObject* newValue);
void DataBinding__Fuse_Navigation_SwipeDirection__set_Target(DataBinding__Fuse_Navigation_SwipeDirection* __this, ::app::Uno::UX::Property__Fuse_Navigation_SwipeDirection* value);
void DataBinding__Fuse_Navigation_SwipeDirection__SetValue(DataBinding__Fuse_Navigation_SwipeDirection* __this, int value);

struct DataBinding__Fuse_Navigation_SwipeDirection : ::app::Fuse::Reactive::Binding
{
    ::uStrong< ::uObject*> _subscription;
    ::uStrong< ::uObject*> _currentValue;
    ::uStrong< ::app::Uno::UX::Property__Fuse_Navigation_SwipeDirection*> _Target;

    void _ObjInit_2(::app::Uno::UX::Property__Fuse_Navigation_SwipeDirection* target, ::uString* key) { DataBinding__Fuse_Navigation_SwipeDirection___ObjInit_2(this, target, key); }
    bool Acceptor(::uObject* obj) { return DataBinding__Fuse_Navigation_SwipeDirection__Acceptor(this, obj); }
    ::app::Uno::UX::Property__Fuse_Navigation_SwipeDirection* Target() { return DataBinding__Fuse_Navigation_SwipeDirection__get_Target(this); }
    void OnValueChanged(::uObject* sender, ::app::Uno::UX::ValueChangedArgs__Fuse_Navigation_SwipeDirection* args) { DataBinding__Fuse_Navigation_SwipeDirection__OnValueChanged(this, sender, args); }
    void PushValue(::uObject* newValue) { DataBinding__Fuse_Navigation_SwipeDirection__PushValue(this, newValue); }
    void Target(::app::Uno::UX::Property__Fuse_Navigation_SwipeDirection* value) { DataBinding__Fuse_Navigation_SwipeDirection__set_Target(this, value); }
    void SetValue(int value) { DataBinding__Fuse_Navigation_SwipeDirection__SetValue(this, value); }
};

}}}


#endif
