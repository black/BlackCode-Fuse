// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Reactive\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_FUSE_REACTIVE_DATA_BINDING__CHAR_H__
#define __APP_FUSE_REACTIVE_DATA_BINDING__CHAR_H__

#include <app/Fuse.Reactive.Binding.h>
#include <app/Fuse.Reactive.IObserver.h>
#include <app/Fuse.Scripting.INameListener.h>
#include <Uno.h>
namespace app { namespace Fuse { struct Node; } }
namespace app { namespace Uno { namespace UX { struct Property__char; } } }
namespace app { namespace Uno { namespace UX { struct ValueChangedArgs__char; } } }

namespace app {
namespace Fuse {
namespace Reactive {

struct DataBinding__char;

struct DataBinding__char__uType : ::app::Fuse::Reactive::Binding__uType
{
    ::app::Fuse::Reactive::IObserver __interface_0;
    ::app::Fuse::Scripting::INameListener __interface_1;
};

DataBinding__char__uType* DataBinding__char__typeof();

void DataBinding__char___ObjInit_2(DataBinding__char* __this, ::app::Uno::UX::Property__char* target, ::uString* key);
bool DataBinding__char__Acceptor(DataBinding__char* __this, ::uObject* obj);
void DataBinding__char__Fuse_Reactive_IObserver_OnAdd(DataBinding__char* __this, ::uObject* addedValue);
void DataBinding__char__Fuse_Reactive_IObserver_OnFailed(DataBinding__char* __this, ::uString* message);
void DataBinding__char__Fuse_Reactive_IObserver_OnNewAll(DataBinding__char* __this, int length);
void DataBinding__char__Fuse_Reactive_IObserver_OnNewAt(DataBinding__char* __this, int index, ::uObject* value);
void DataBinding__char__Fuse_Reactive_IObserver_OnRemove(DataBinding__char* __this, ::uObject* value, int index);
void DataBinding__char__Fuse_Reactive_IObserver_OnSet(DataBinding__char* __this, ::uObject* newValue);
void DataBinding__char__Fuse_Scripting_INameListener_OnNameChanged(DataBinding__char* __this, ::uObject* obj, ::uString* name);
::app::Uno::UX::Property__char* DataBinding__char__get_Target(DataBinding__char* __this);
DataBinding__char* DataBinding__char__New_1(::uStatic* __this, ::app::Uno::UX::Property__char* target, ::uString* key);
void DataBinding__char__NewValue(DataBinding__char* __this, ::uObject* value);
void DataBinding__char__OnRooted(DataBinding__char* __this, ::app::Fuse::Node* n);
void DataBinding__char__OnUnrooted(DataBinding__char* __this, ::app::Fuse::Node* n);
void DataBinding__char__OnValueChanged(DataBinding__char* __this, ::uObject* sender, ::app::Uno::UX::ValueChangedArgs__char* args);
void DataBinding__char__PushValue(DataBinding__char* __this, ::uObject* newValue);
void DataBinding__char__set_Target(DataBinding__char* __this, ::app::Uno::UX::Property__char* value);
void DataBinding__char__SetValue(DataBinding__char* __this, ::uChar value);

struct DataBinding__char : ::app::Fuse::Reactive::Binding
{
    ::uStrong< ::uObject*> _subscription;
    ::uStrong< ::uObject*> _currentValue;
    ::uStrong< ::app::Uno::UX::Property__char*> _Target;

    void _ObjInit_2(::app::Uno::UX::Property__char* target, ::uString* key) { DataBinding__char___ObjInit_2(this, target, key); }
    bool Acceptor(::uObject* obj) { return DataBinding__char__Acceptor(this, obj); }
    ::app::Uno::UX::Property__char* Target() { return DataBinding__char__get_Target(this); }
    void OnValueChanged(::uObject* sender, ::app::Uno::UX::ValueChangedArgs__char* args) { DataBinding__char__OnValueChanged(this, sender, args); }
    void PushValue(::uObject* newValue) { DataBinding__char__PushValue(this, newValue); }
    void Target(::app::Uno::UX::Property__char* value) { DataBinding__char__set_Target(this, value); }
    void SetValue(::uChar value) { DataBinding__char__SetValue(this, value); }
};

}}}


#endif
