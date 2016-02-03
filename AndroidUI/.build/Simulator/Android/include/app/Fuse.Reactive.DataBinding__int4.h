// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Reactive\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_FUSE_REACTIVE_DATA_BINDING__INT4_H__
#define __APP_FUSE_REACTIVE_DATA_BINDING__INT4_H__

#include <app/Fuse.Reactive.Binding.h>
#include <app/Fuse.Reactive.IObserver.h>
#include <app/Fuse.Scripting.INameListener.h>
#include <Uno.h>
namespace app { namespace Fuse { struct Node; } }
namespace app { namespace Uno { namespace UX { struct Property__int4; } } }
namespace app { namespace Uno { namespace UX { struct ValueChangedArgs__int4; } } }
namespace app { namespace Uno { struct Int4; } }

namespace app {
namespace Fuse {
namespace Reactive {

struct DataBinding__int4;

struct DataBinding__int4__uType : ::app::Fuse::Reactive::Binding__uType
{
    ::app::Fuse::Reactive::IObserver __interface_0;
    ::app::Fuse::Scripting::INameListener __interface_1;
};

DataBinding__int4__uType* DataBinding__int4__typeof();

void DataBinding__int4___ObjInit_2(DataBinding__int4* __this, ::app::Uno::UX::Property__int4* target, ::uString* key);
bool DataBinding__int4__Acceptor(DataBinding__int4* __this, ::uObject* obj);
void DataBinding__int4__Fuse_Reactive_IObserver_OnAdd(DataBinding__int4* __this, ::uObject* addedValue);
void DataBinding__int4__Fuse_Reactive_IObserver_OnFailed(DataBinding__int4* __this, ::uString* message);
void DataBinding__int4__Fuse_Reactive_IObserver_OnNewAll(DataBinding__int4* __this, int length);
void DataBinding__int4__Fuse_Reactive_IObserver_OnNewAt(DataBinding__int4* __this, int index, ::uObject* value);
void DataBinding__int4__Fuse_Reactive_IObserver_OnRemove(DataBinding__int4* __this, ::uObject* value, int index);
void DataBinding__int4__Fuse_Reactive_IObserver_OnSet(DataBinding__int4* __this, ::uObject* newValue);
void DataBinding__int4__Fuse_Scripting_INameListener_OnNameChanged(DataBinding__int4* __this, ::uObject* obj, ::uString* name);
::app::Uno::UX::Property__int4* DataBinding__int4__get_Target(DataBinding__int4* __this);
DataBinding__int4* DataBinding__int4__New_1(::uStatic* __this, ::app::Uno::UX::Property__int4* target, ::uString* key);
void DataBinding__int4__NewValue(DataBinding__int4* __this, ::uObject* value);
void DataBinding__int4__OnRooted(DataBinding__int4* __this, ::app::Fuse::Node* n);
void DataBinding__int4__OnUnrooted(DataBinding__int4* __this, ::app::Fuse::Node* n);
void DataBinding__int4__OnValueChanged(DataBinding__int4* __this, ::uObject* sender, ::app::Uno::UX::ValueChangedArgs__int4* args);
void DataBinding__int4__PushValue(DataBinding__int4* __this, ::uObject* newValue);
void DataBinding__int4__set_Target(DataBinding__int4* __this, ::app::Uno::UX::Property__int4* value);
void DataBinding__int4__SetValue(DataBinding__int4* __this, ::app::Uno::Int4 value);

struct DataBinding__int4 : ::app::Fuse::Reactive::Binding
{
    ::uStrong< ::uObject*> _subscription;
    ::uStrong< ::uObject*> _currentValue;
    ::uStrong< ::app::Uno::UX::Property__int4*> _Target;

    void _ObjInit_2(::app::Uno::UX::Property__int4* target, ::uString* key) { DataBinding__int4___ObjInit_2(this, target, key); }
    bool Acceptor(::uObject* obj) { return DataBinding__int4__Acceptor(this, obj); }
    ::app::Uno::UX::Property__int4* Target() { return DataBinding__int4__get_Target(this); }
    void OnValueChanged(::uObject* sender, ::app::Uno::UX::ValueChangedArgs__int4* args) { DataBinding__int4__OnValueChanged(this, sender, args); }
    void PushValue(::uObject* newValue) { DataBinding__int4__PushValue(this, newValue); }
    void Target(::app::Uno::UX::Property__int4* value) { DataBinding__int4__set_Target(this, value); }
    void SetValue(::app::Uno::Int4 value);
};

}}}

#include <app/Uno.Int4.h>

namespace app {
namespace Fuse {
namespace Reactive {

inline void DataBinding__int4::SetValue(::app::Uno::Int4 value) { DataBinding__int4__SetValue(this, value); }

}}}


#endif
