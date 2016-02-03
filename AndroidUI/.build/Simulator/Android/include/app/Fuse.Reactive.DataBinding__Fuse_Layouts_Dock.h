// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Reactive\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_FUSE_REACTIVE_DATA_BINDING__FUSE_LAYOUTS_DOCK_H__
#define __APP_FUSE_REACTIVE_DATA_BINDING__FUSE_LAYOUTS_DOCK_H__

#include <app/Fuse.Reactive.Binding.h>
#include <app/Fuse.Reactive.IObserver.h>
#include <app/Fuse.Scripting.INameListener.h>
#include <Uno.h>
namespace app { namespace Fuse { struct Node; } }
namespace app { namespace Uno { namespace UX { struct Property__Fuse_Layouts_Dock; } } }
namespace app { namespace Uno { namespace UX { struct ValueChangedArgs__Fuse_Layouts_Dock; } } }

namespace app {
namespace Fuse {
namespace Reactive {

struct DataBinding__Fuse_Layouts_Dock;

struct DataBinding__Fuse_Layouts_Dock__uType : ::app::Fuse::Reactive::Binding__uType
{
    ::app::Fuse::Reactive::IObserver __interface_0;
    ::app::Fuse::Scripting::INameListener __interface_1;
};

DataBinding__Fuse_Layouts_Dock__uType* DataBinding__Fuse_Layouts_Dock__typeof();

void DataBinding__Fuse_Layouts_Dock___ObjInit_2(DataBinding__Fuse_Layouts_Dock* __this, ::app::Uno::UX::Property__Fuse_Layouts_Dock* target, ::uString* key);
bool DataBinding__Fuse_Layouts_Dock__Acceptor(DataBinding__Fuse_Layouts_Dock* __this, ::uObject* obj);
void DataBinding__Fuse_Layouts_Dock__Fuse_Reactive_IObserver_OnAdd(DataBinding__Fuse_Layouts_Dock* __this, ::uObject* addedValue);
void DataBinding__Fuse_Layouts_Dock__Fuse_Reactive_IObserver_OnFailed(DataBinding__Fuse_Layouts_Dock* __this, ::uString* message);
void DataBinding__Fuse_Layouts_Dock__Fuse_Reactive_IObserver_OnNewAll(DataBinding__Fuse_Layouts_Dock* __this, int length);
void DataBinding__Fuse_Layouts_Dock__Fuse_Reactive_IObserver_OnNewAt(DataBinding__Fuse_Layouts_Dock* __this, int index, ::uObject* value);
void DataBinding__Fuse_Layouts_Dock__Fuse_Reactive_IObserver_OnRemove(DataBinding__Fuse_Layouts_Dock* __this, ::uObject* value, int index);
void DataBinding__Fuse_Layouts_Dock__Fuse_Reactive_IObserver_OnSet(DataBinding__Fuse_Layouts_Dock* __this, ::uObject* newValue);
void DataBinding__Fuse_Layouts_Dock__Fuse_Scripting_INameListener_OnNameChanged(DataBinding__Fuse_Layouts_Dock* __this, ::uObject* obj, ::uString* name);
::app::Uno::UX::Property__Fuse_Layouts_Dock* DataBinding__Fuse_Layouts_Dock__get_Target(DataBinding__Fuse_Layouts_Dock* __this);
DataBinding__Fuse_Layouts_Dock* DataBinding__Fuse_Layouts_Dock__New_1(::uStatic* __this, ::app::Uno::UX::Property__Fuse_Layouts_Dock* target, ::uString* key);
void DataBinding__Fuse_Layouts_Dock__NewValue(DataBinding__Fuse_Layouts_Dock* __this, ::uObject* value);
void DataBinding__Fuse_Layouts_Dock__OnRooted(DataBinding__Fuse_Layouts_Dock* __this, ::app::Fuse::Node* n);
void DataBinding__Fuse_Layouts_Dock__OnUnrooted(DataBinding__Fuse_Layouts_Dock* __this, ::app::Fuse::Node* n);
void DataBinding__Fuse_Layouts_Dock__OnValueChanged(DataBinding__Fuse_Layouts_Dock* __this, ::uObject* sender, ::app::Uno::UX::ValueChangedArgs__Fuse_Layouts_Dock* args);
void DataBinding__Fuse_Layouts_Dock__PushValue(DataBinding__Fuse_Layouts_Dock* __this, ::uObject* newValue);
void DataBinding__Fuse_Layouts_Dock__set_Target(DataBinding__Fuse_Layouts_Dock* __this, ::app::Uno::UX::Property__Fuse_Layouts_Dock* value);
void DataBinding__Fuse_Layouts_Dock__SetValue(DataBinding__Fuse_Layouts_Dock* __this, int value);

struct DataBinding__Fuse_Layouts_Dock : ::app::Fuse::Reactive::Binding
{
    ::uStrong< ::uObject*> _subscription;
    ::uStrong< ::uObject*> _currentValue;
    ::uStrong< ::app::Uno::UX::Property__Fuse_Layouts_Dock*> _Target;

    void _ObjInit_2(::app::Uno::UX::Property__Fuse_Layouts_Dock* target, ::uString* key) { DataBinding__Fuse_Layouts_Dock___ObjInit_2(this, target, key); }
    bool Acceptor(::uObject* obj) { return DataBinding__Fuse_Layouts_Dock__Acceptor(this, obj); }
    ::app::Uno::UX::Property__Fuse_Layouts_Dock* Target() { return DataBinding__Fuse_Layouts_Dock__get_Target(this); }
    void OnValueChanged(::uObject* sender, ::app::Uno::UX::ValueChangedArgs__Fuse_Layouts_Dock* args) { DataBinding__Fuse_Layouts_Dock__OnValueChanged(this, sender, args); }
    void PushValue(::uObject* newValue) { DataBinding__Fuse_Layouts_Dock__PushValue(this, newValue); }
    void Target(::app::Uno::UX::Property__Fuse_Layouts_Dock* value) { DataBinding__Fuse_Layouts_Dock__set_Target(this, value); }
    void SetValue(int value) { DataBinding__Fuse_Layouts_Dock__SetValue(this, value); }
};

}}}


#endif
