// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Reactive\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_FUSE_REACTIVE_DATA_BINDING__INT3_H__
#define __APP_FUSE_REACTIVE_DATA_BINDING__INT3_H__

#include <app/Fuse.Reactive.Binding.h>
#include <app/Fuse.Reactive.IObserver.h>
#include <app/Fuse.Scripting.INameListener.h>
#include <Uno.h>
namespace app { namespace Fuse { struct Node; } }
namespace app { namespace Uno { namespace UX { struct Property__int3; } } }
namespace app { namespace Uno { namespace UX { struct ValueChangedArgs__int3; } } }
namespace app { namespace Uno { struct Int3; } }

namespace app {
namespace Fuse {
namespace Reactive {

struct DataBinding__int3;

struct DataBinding__int3__uType : ::app::Fuse::Reactive::Binding__uType
{
    ::app::Fuse::Reactive::IObserver __interface_0;
    ::app::Fuse::Scripting::INameListener __interface_1;
};

DataBinding__int3__uType* DataBinding__int3__typeof();

void DataBinding__int3___ObjInit_2(DataBinding__int3* __this, ::app::Uno::UX::Property__int3* target, ::uString* key);
bool DataBinding__int3__Acceptor(DataBinding__int3* __this, ::uObject* obj);
void DataBinding__int3__Fuse_Reactive_IObserver_OnAdd(DataBinding__int3* __this, ::uObject* addedValue);
void DataBinding__int3__Fuse_Reactive_IObserver_OnFailed(DataBinding__int3* __this, ::uString* message);
void DataBinding__int3__Fuse_Reactive_IObserver_OnNewAll(DataBinding__int3* __this, int length);
void DataBinding__int3__Fuse_Reactive_IObserver_OnNewAt(DataBinding__int3* __this, int index, ::uObject* value);
void DataBinding__int3__Fuse_Reactive_IObserver_OnRemove(DataBinding__int3* __this, ::uObject* value, int index);
void DataBinding__int3__Fuse_Reactive_IObserver_OnSet(DataBinding__int3* __this, ::uObject* newValue);
void DataBinding__int3__Fuse_Scripting_INameListener_OnNameChanged(DataBinding__int3* __this, ::uObject* obj, ::uString* name);
::app::Uno::UX::Property__int3* DataBinding__int3__get_Target(DataBinding__int3* __this);
DataBinding__int3* DataBinding__int3__New_1(::uStatic* __this, ::app::Uno::UX::Property__int3* target, ::uString* key);
void DataBinding__int3__NewValue(DataBinding__int3* __this, ::uObject* value);
void DataBinding__int3__OnRooted(DataBinding__int3* __this, ::app::Fuse::Node* n);
void DataBinding__int3__OnUnrooted(DataBinding__int3* __this, ::app::Fuse::Node* n);
void DataBinding__int3__OnValueChanged(DataBinding__int3* __this, ::uObject* sender, ::app::Uno::UX::ValueChangedArgs__int3* args);
void DataBinding__int3__PushValue(DataBinding__int3* __this, ::uObject* newValue);
void DataBinding__int3__set_Target(DataBinding__int3* __this, ::app::Uno::UX::Property__int3* value);
void DataBinding__int3__SetValue(DataBinding__int3* __this, ::app::Uno::Int3 value);

struct DataBinding__int3 : ::app::Fuse::Reactive::Binding
{
    ::uStrong< ::uObject*> _subscription;
    ::uStrong< ::uObject*> _currentValue;
    ::uStrong< ::app::Uno::UX::Property__int3*> _Target;

    void _ObjInit_2(::app::Uno::UX::Property__int3* target, ::uString* key) { DataBinding__int3___ObjInit_2(this, target, key); }
    bool Acceptor(::uObject* obj) { return DataBinding__int3__Acceptor(this, obj); }
    ::app::Uno::UX::Property__int3* Target() { return DataBinding__int3__get_Target(this); }
    void OnValueChanged(::uObject* sender, ::app::Uno::UX::ValueChangedArgs__int3* args) { DataBinding__int3__OnValueChanged(this, sender, args); }
    void PushValue(::uObject* newValue) { DataBinding__int3__PushValue(this, newValue); }
    void Target(::app::Uno::UX::Property__int3* value) { DataBinding__int3__set_Target(this, value); }
    void SetValue(::app::Uno::Int3 value);
};

}}}

#include <app/Uno.Int3.h>

namespace app {
namespace Fuse {
namespace Reactive {

inline void DataBinding__int3::SetValue(::app::Uno::Int3 value) { DataBinding__int3__SetValue(this, value); }

}}}


#endif
