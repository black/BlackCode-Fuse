// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Reactive\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_FUSE_REACTIVE_DATA_BINDING__FLOAT3_H__
#define __APP_FUSE_REACTIVE_DATA_BINDING__FLOAT3_H__

#include <app/Fuse.Reactive.Binding.h>
#include <app/Fuse.Reactive.IObserver.h>
#include <app/Fuse.Scripting.INameListener.h>
#include <Uno.h>
namespace app { namespace Fuse { struct Node; } }
namespace app { namespace Uno { namespace UX { struct Property__float3; } } }
namespace app { namespace Uno { namespace UX { struct ValueChangedArgs__float3; } } }
namespace app { namespace Uno { struct Float3; } }

namespace app {
namespace Fuse {
namespace Reactive {

struct DataBinding__float3;

struct DataBinding__float3__uType : ::app::Fuse::Reactive::Binding__uType
{
    ::app::Fuse::Reactive::IObserver __interface_0;
    ::app::Fuse::Scripting::INameListener __interface_1;
};

DataBinding__float3__uType* DataBinding__float3__typeof();

void DataBinding__float3___ObjInit_2(DataBinding__float3* __this, ::app::Uno::UX::Property__float3* target, ::uString* key);
bool DataBinding__float3__Acceptor(DataBinding__float3* __this, ::uObject* obj);
void DataBinding__float3__Fuse_Reactive_IObserver_OnAdd(DataBinding__float3* __this, ::uObject* addedValue);
void DataBinding__float3__Fuse_Reactive_IObserver_OnFailed(DataBinding__float3* __this, ::uString* message);
void DataBinding__float3__Fuse_Reactive_IObserver_OnNewAll(DataBinding__float3* __this, int length);
void DataBinding__float3__Fuse_Reactive_IObserver_OnNewAt(DataBinding__float3* __this, int index, ::uObject* value);
void DataBinding__float3__Fuse_Reactive_IObserver_OnRemove(DataBinding__float3* __this, ::uObject* value, int index);
void DataBinding__float3__Fuse_Reactive_IObserver_OnSet(DataBinding__float3* __this, ::uObject* newValue);
void DataBinding__float3__Fuse_Scripting_INameListener_OnNameChanged(DataBinding__float3* __this, ::uObject* obj, ::uString* name);
::app::Uno::UX::Property__float3* DataBinding__float3__get_Target(DataBinding__float3* __this);
DataBinding__float3* DataBinding__float3__New_1(::uStatic* __this, ::app::Uno::UX::Property__float3* target, ::uString* key);
void DataBinding__float3__NewValue(DataBinding__float3* __this, ::uObject* value);
void DataBinding__float3__OnRooted(DataBinding__float3* __this, ::app::Fuse::Node* n);
void DataBinding__float3__OnUnrooted(DataBinding__float3* __this, ::app::Fuse::Node* n);
void DataBinding__float3__OnValueChanged(DataBinding__float3* __this, ::uObject* sender, ::app::Uno::UX::ValueChangedArgs__float3* args);
void DataBinding__float3__PushValue(DataBinding__float3* __this, ::uObject* newValue);
void DataBinding__float3__set_Target(DataBinding__float3* __this, ::app::Uno::UX::Property__float3* value);
void DataBinding__float3__SetValue(DataBinding__float3* __this, ::app::Uno::Float3 value);

struct DataBinding__float3 : ::app::Fuse::Reactive::Binding
{
    ::uStrong< ::uObject*> _subscription;
    ::uStrong< ::uObject*> _currentValue;
    ::uStrong< ::app::Uno::UX::Property__float3*> _Target;

    void _ObjInit_2(::app::Uno::UX::Property__float3* target, ::uString* key) { DataBinding__float3___ObjInit_2(this, target, key); }
    bool Acceptor(::uObject* obj) { return DataBinding__float3__Acceptor(this, obj); }
    ::app::Uno::UX::Property__float3* Target() { return DataBinding__float3__get_Target(this); }
    void OnValueChanged(::uObject* sender, ::app::Uno::UX::ValueChangedArgs__float3* args) { DataBinding__float3__OnValueChanged(this, sender, args); }
    void PushValue(::uObject* newValue) { DataBinding__float3__PushValue(this, newValue); }
    void Target(::app::Uno::UX::Property__float3* value) { DataBinding__float3__set_Target(this, value); }
    void SetValue(::app::Uno::Float3 value);
};

}}}

#include <app/Uno.Float3.h>

namespace app {
namespace Fuse {
namespace Reactive {

inline void DataBinding__float3::SetValue(::app::Uno::Float3 value) { DataBinding__float3__SetValue(this, value); }

}}}


#endif
