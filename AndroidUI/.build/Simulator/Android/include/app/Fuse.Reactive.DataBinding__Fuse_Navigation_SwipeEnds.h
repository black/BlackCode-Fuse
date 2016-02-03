// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Reactive\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_FUSE_REACTIVE_DATA_BINDING__FUSE_NAVIGATION_SWIPE_ENDS_H__
#define __APP_FUSE_REACTIVE_DATA_BINDING__FUSE_NAVIGATION_SWIPE_ENDS_H__

#include <app/Fuse.Reactive.Binding.h>
#include <app/Fuse.Reactive.IObserver.h>
#include <app/Fuse.Scripting.INameListener.h>
#include <Uno.h>
namespace app { namespace Fuse { struct Node; } }
namespace app { namespace Uno { namespace UX { struct Property__Fuse_Navigation_SwipeEnds; } } }
namespace app { namespace Uno { namespace UX { struct ValueChangedArgs__Fuse_Navigation_SwipeEnds; } } }

namespace app {
namespace Fuse {
namespace Reactive {

struct DataBinding__Fuse_Navigation_SwipeEnds;

struct DataBinding__Fuse_Navigation_SwipeEnds__uType : ::app::Fuse::Reactive::Binding__uType
{
    ::app::Fuse::Reactive::IObserver __interface_0;
    ::app::Fuse::Scripting::INameListener __interface_1;
};

DataBinding__Fuse_Navigation_SwipeEnds__uType* DataBinding__Fuse_Navigation_SwipeEnds__typeof();

void DataBinding__Fuse_Navigation_SwipeEnds___ObjInit_2(DataBinding__Fuse_Navigation_SwipeEnds* __this, ::app::Uno::UX::Property__Fuse_Navigation_SwipeEnds* target, ::uString* key);
bool DataBinding__Fuse_Navigation_SwipeEnds__Acceptor(DataBinding__Fuse_Navigation_SwipeEnds* __this, ::uObject* obj);
void DataBinding__Fuse_Navigation_SwipeEnds__Fuse_Reactive_IObserver_OnAdd(DataBinding__Fuse_Navigation_SwipeEnds* __this, ::uObject* addedValue);
void DataBinding__Fuse_Navigation_SwipeEnds__Fuse_Reactive_IObserver_OnFailed(DataBinding__Fuse_Navigation_SwipeEnds* __this, ::uString* message);
void DataBinding__Fuse_Navigation_SwipeEnds__Fuse_Reactive_IObserver_OnNewAll(DataBinding__Fuse_Navigation_SwipeEnds* __this, int length);
void DataBinding__Fuse_Navigation_SwipeEnds__Fuse_Reactive_IObserver_OnNewAt(DataBinding__Fuse_Navigation_SwipeEnds* __this, int index, ::uObject* value);
void DataBinding__Fuse_Navigation_SwipeEnds__Fuse_Reactive_IObserver_OnRemove(DataBinding__Fuse_Navigation_SwipeEnds* __this, ::uObject* value, int index);
void DataBinding__Fuse_Navigation_SwipeEnds__Fuse_Reactive_IObserver_OnSet(DataBinding__Fuse_Navigation_SwipeEnds* __this, ::uObject* newValue);
void DataBinding__Fuse_Navigation_SwipeEnds__Fuse_Scripting_INameListener_OnNameChanged(DataBinding__Fuse_Navigation_SwipeEnds* __this, ::uObject* obj, ::uString* name);
::app::Uno::UX::Property__Fuse_Navigation_SwipeEnds* DataBinding__Fuse_Navigation_SwipeEnds__get_Target(DataBinding__Fuse_Navigation_SwipeEnds* __this);
DataBinding__Fuse_Navigation_SwipeEnds* DataBinding__Fuse_Navigation_SwipeEnds__New_1(::uStatic* __this, ::app::Uno::UX::Property__Fuse_Navigation_SwipeEnds* target, ::uString* key);
void DataBinding__Fuse_Navigation_SwipeEnds__NewValue(DataBinding__Fuse_Navigation_SwipeEnds* __this, ::uObject* value);
void DataBinding__Fuse_Navigation_SwipeEnds__OnRooted(DataBinding__Fuse_Navigation_SwipeEnds* __this, ::app::Fuse::Node* n);
void DataBinding__Fuse_Navigation_SwipeEnds__OnUnrooted(DataBinding__Fuse_Navigation_SwipeEnds* __this, ::app::Fuse::Node* n);
void DataBinding__Fuse_Navigation_SwipeEnds__OnValueChanged(DataBinding__Fuse_Navigation_SwipeEnds* __this, ::uObject* sender, ::app::Uno::UX::ValueChangedArgs__Fuse_Navigation_SwipeEnds* args);
void DataBinding__Fuse_Navigation_SwipeEnds__PushValue(DataBinding__Fuse_Navigation_SwipeEnds* __this, ::uObject* newValue);
void DataBinding__Fuse_Navigation_SwipeEnds__set_Target(DataBinding__Fuse_Navigation_SwipeEnds* __this, ::app::Uno::UX::Property__Fuse_Navigation_SwipeEnds* value);
void DataBinding__Fuse_Navigation_SwipeEnds__SetValue(DataBinding__Fuse_Navigation_SwipeEnds* __this, int value);

struct DataBinding__Fuse_Navigation_SwipeEnds : ::app::Fuse::Reactive::Binding
{
    ::uStrong< ::uObject*> _subscription;
    ::uStrong< ::uObject*> _currentValue;
    ::uStrong< ::app::Uno::UX::Property__Fuse_Navigation_SwipeEnds*> _Target;

    void _ObjInit_2(::app::Uno::UX::Property__Fuse_Navigation_SwipeEnds* target, ::uString* key) { DataBinding__Fuse_Navigation_SwipeEnds___ObjInit_2(this, target, key); }
    bool Acceptor(::uObject* obj) { return DataBinding__Fuse_Navigation_SwipeEnds__Acceptor(this, obj); }
    ::app::Uno::UX::Property__Fuse_Navigation_SwipeEnds* Target() { return DataBinding__Fuse_Navigation_SwipeEnds__get_Target(this); }
    void OnValueChanged(::uObject* sender, ::app::Uno::UX::ValueChangedArgs__Fuse_Navigation_SwipeEnds* args) { DataBinding__Fuse_Navigation_SwipeEnds__OnValueChanged(this, sender, args); }
    void PushValue(::uObject* newValue) { DataBinding__Fuse_Navigation_SwipeEnds__PushValue(this, newValue); }
    void Target(::app::Uno::UX::Property__Fuse_Navigation_SwipeEnds* value) { DataBinding__Fuse_Navigation_SwipeEnds__set_Target(this, value); }
    void SetValue(int value) { DataBinding__Fuse_Navigation_SwipeEnds__SetValue(this, value); }
};

}}}


#endif
