// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Reactive\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_FUSE_REACTIVE_DATA_BINDING__UNO_PLATFORM_I_O_S_STATUS_BAR_STYLE_H__
#define __APP_FUSE_REACTIVE_DATA_BINDING__UNO_PLATFORM_I_O_S_STATUS_BAR_STYLE_H__

#include <app/Fuse.Reactive.Binding.h>
#include <app/Fuse.Reactive.IObserver.h>
#include <app/Fuse.Scripting.INameListener.h>
#include <Uno.h>
namespace app { namespace Fuse { struct Node; } }
namespace app { namespace Uno { namespace UX { struct Property__Uno_Platform_iOS_StatusBarStyle; } } }
namespace app { namespace Uno { namespace UX { struct ValueChangedArgs__Uno_Platform_iOS_StatusBarStyle; } } }

namespace app {
namespace Fuse {
namespace Reactive {

struct DataBinding__Uno_Platform_iOS_StatusBarStyle;

struct DataBinding__Uno_Platform_iOS_StatusBarStyle__uType : ::app::Fuse::Reactive::Binding__uType
{
    ::app::Fuse::Reactive::IObserver __interface_0;
    ::app::Fuse::Scripting::INameListener __interface_1;
};

DataBinding__Uno_Platform_iOS_StatusBarStyle__uType* DataBinding__Uno_Platform_iOS_StatusBarStyle__typeof();

void DataBinding__Uno_Platform_iOS_StatusBarStyle___ObjInit_2(DataBinding__Uno_Platform_iOS_StatusBarStyle* __this, ::app::Uno::UX::Property__Uno_Platform_iOS_StatusBarStyle* target, ::uString* key);
bool DataBinding__Uno_Platform_iOS_StatusBarStyle__Acceptor(DataBinding__Uno_Platform_iOS_StatusBarStyle* __this, ::uObject* obj);
void DataBinding__Uno_Platform_iOS_StatusBarStyle__Fuse_Reactive_IObserver_OnAdd(DataBinding__Uno_Platform_iOS_StatusBarStyle* __this, ::uObject* addedValue);
void DataBinding__Uno_Platform_iOS_StatusBarStyle__Fuse_Reactive_IObserver_OnFailed(DataBinding__Uno_Platform_iOS_StatusBarStyle* __this, ::uString* message);
void DataBinding__Uno_Platform_iOS_StatusBarStyle__Fuse_Reactive_IObserver_OnNewAll(DataBinding__Uno_Platform_iOS_StatusBarStyle* __this, int length);
void DataBinding__Uno_Platform_iOS_StatusBarStyle__Fuse_Reactive_IObserver_OnNewAt(DataBinding__Uno_Platform_iOS_StatusBarStyle* __this, int index, ::uObject* value);
void DataBinding__Uno_Platform_iOS_StatusBarStyle__Fuse_Reactive_IObserver_OnRemove(DataBinding__Uno_Platform_iOS_StatusBarStyle* __this, ::uObject* value, int index);
void DataBinding__Uno_Platform_iOS_StatusBarStyle__Fuse_Reactive_IObserver_OnSet(DataBinding__Uno_Platform_iOS_StatusBarStyle* __this, ::uObject* newValue);
void DataBinding__Uno_Platform_iOS_StatusBarStyle__Fuse_Scripting_INameListener_OnNameChanged(DataBinding__Uno_Platform_iOS_StatusBarStyle* __this, ::uObject* obj, ::uString* name);
::app::Uno::UX::Property__Uno_Platform_iOS_StatusBarStyle* DataBinding__Uno_Platform_iOS_StatusBarStyle__get_Target(DataBinding__Uno_Platform_iOS_StatusBarStyle* __this);
DataBinding__Uno_Platform_iOS_StatusBarStyle* DataBinding__Uno_Platform_iOS_StatusBarStyle__New_1(::uStatic* __this, ::app::Uno::UX::Property__Uno_Platform_iOS_StatusBarStyle* target, ::uString* key);
void DataBinding__Uno_Platform_iOS_StatusBarStyle__NewValue(DataBinding__Uno_Platform_iOS_StatusBarStyle* __this, ::uObject* value);
void DataBinding__Uno_Platform_iOS_StatusBarStyle__OnRooted(DataBinding__Uno_Platform_iOS_StatusBarStyle* __this, ::app::Fuse::Node* n);
void DataBinding__Uno_Platform_iOS_StatusBarStyle__OnUnrooted(DataBinding__Uno_Platform_iOS_StatusBarStyle* __this, ::app::Fuse::Node* n);
void DataBinding__Uno_Platform_iOS_StatusBarStyle__OnValueChanged(DataBinding__Uno_Platform_iOS_StatusBarStyle* __this, ::uObject* sender, ::app::Uno::UX::ValueChangedArgs__Uno_Platform_iOS_StatusBarStyle* args);
void DataBinding__Uno_Platform_iOS_StatusBarStyle__PushValue(DataBinding__Uno_Platform_iOS_StatusBarStyle* __this, ::uObject* newValue);
void DataBinding__Uno_Platform_iOS_StatusBarStyle__set_Target(DataBinding__Uno_Platform_iOS_StatusBarStyle* __this, ::app::Uno::UX::Property__Uno_Platform_iOS_StatusBarStyle* value);
void DataBinding__Uno_Platform_iOS_StatusBarStyle__SetValue(DataBinding__Uno_Platform_iOS_StatusBarStyle* __this, int value);

struct DataBinding__Uno_Platform_iOS_StatusBarStyle : ::app::Fuse::Reactive::Binding
{
    ::uStrong< ::uObject*> _subscription;
    ::uStrong< ::uObject*> _currentValue;
    ::uStrong< ::app::Uno::UX::Property__Uno_Platform_iOS_StatusBarStyle*> _Target;

    void _ObjInit_2(::app::Uno::UX::Property__Uno_Platform_iOS_StatusBarStyle* target, ::uString* key) { DataBinding__Uno_Platform_iOS_StatusBarStyle___ObjInit_2(this, target, key); }
    bool Acceptor(::uObject* obj) { return DataBinding__Uno_Platform_iOS_StatusBarStyle__Acceptor(this, obj); }
    ::app::Uno::UX::Property__Uno_Platform_iOS_StatusBarStyle* Target() { return DataBinding__Uno_Platform_iOS_StatusBarStyle__get_Target(this); }
    void OnValueChanged(::uObject* sender, ::app::Uno::UX::ValueChangedArgs__Uno_Platform_iOS_StatusBarStyle* args) { DataBinding__Uno_Platform_iOS_StatusBarStyle__OnValueChanged(this, sender, args); }
    void PushValue(::uObject* newValue) { DataBinding__Uno_Platform_iOS_StatusBarStyle__PushValue(this, newValue); }
    void Target(::app::Uno::UX::Property__Uno_Platform_iOS_StatusBarStyle* value) { DataBinding__Uno_Platform_iOS_StatusBarStyle__set_Target(this, value); }
    void SetValue(int value) { DataBinding__Uno_Platform_iOS_StatusBarStyle__SetValue(this, value); }
};

}}}


#endif
