// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Reactive\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_FUSE_REACTIVE_WHILE_COUNT_H__
#define __APP_FUSE_REACTIVE_WHILE_COUNT_H__

#include <app/Fuse.Reactive.IObserver.h>
#include <app/Fuse.Triggers.Trigger.h>
#include <Uno.h>
namespace app { namespace Fuse { struct Node; } }

namespace app {
namespace Fuse {
namespace Reactive {

struct WhileCount;

struct WhileCount__uType : ::app::Fuse::Triggers::Trigger__uType
{
    ::app::Fuse::Reactive::IObserver __interface_0;
};

WhileCount__uType* WhileCount__typeof();

void WhileCount___ObjInit_2(WhileCount* __this);
void WhileCount__Assess(WhileCount* __this, int count);
void WhileCount__Fuse_Reactive_IObserver_OnAdd(WhileCount* __this, ::uObject* addedValue);
void WhileCount__Fuse_Reactive_IObserver_OnFailed(WhileCount* __this, ::uString* message);
void WhileCount__Fuse_Reactive_IObserver_OnNewAll(WhileCount* __this, int length);
void WhileCount__Fuse_Reactive_IObserver_OnNewAt(WhileCount* __this, int index, ::uObject* value);
void WhileCount__Fuse_Reactive_IObserver_OnRemove(WhileCount* __this, ::uObject* value, int index);
void WhileCount__Fuse_Reactive_IObserver_OnSet(WhileCount* __this, ::uObject* newValue);
int WhileCount__get_EqualTo(WhileCount* __this);
int WhileCount__get_GreaterThan(WhileCount* __this);
::uObject* WhileCount__get_Items(WhileCount* __this);
int WhileCount__get_LessThan(WhileCount* __this);
WhileCount* WhileCount__New_1(::uStatic* __this);
void WhileCount__OnItemsChanged(WhileCount* __this);
void WhileCount__OnRooted(WhileCount* __this, ::app::Fuse::Node* n);
void WhileCount__OnUnrooted(WhileCount* __this, ::app::Fuse::Node* n);
void WhileCount__Reassess(WhileCount* __this);
void WhileCount__ReplaceAll(WhileCount* __this, ::uArray* arr);
void WhileCount__set_EqualTo(WhileCount* __this, int value);
void WhileCount__set_GreaterThan(WhileCount* __this, int value);
void WhileCount__set_Items(WhileCount* __this, ::uObject* value);
void WhileCount__set_LessThan(WhileCount* __this, int value);

struct WhileCount : ::app::Fuse::Triggers::Trigger
{
    ::uStrong< ::uObject*> _items;
    int _oldCount;
    bool _lessThanMode;
    int _lessThanValue;
    bool _greaterThanMode;
    int _greaterThanValue;
    bool _equalToMode;
    int _equalToValue;
    ::uStrong< ::uObject*> _subscription;

    void _ObjInit_2() { WhileCount___ObjInit_2(this); }
    void Assess(int count) { WhileCount__Assess(this, count); }
    int EqualTo() { return WhileCount__get_EqualTo(this); }
    int GreaterThan() { return WhileCount__get_GreaterThan(this); }
    ::uObject* Items() { return WhileCount__get_Items(this); }
    int LessThan() { return WhileCount__get_LessThan(this); }
    void OnItemsChanged() { WhileCount__OnItemsChanged(this); }
    void Reassess() { WhileCount__Reassess(this); }
    void ReplaceAll(::uArray* arr) { WhileCount__ReplaceAll(this, arr); }
    void EqualTo(int value) { WhileCount__set_EqualTo(this, value); }
    void GreaterThan(int value) { WhileCount__set_GreaterThan(this, value); }
    void Items(::uObject* value) { WhileCount__set_Items(this, value); }
    void LessThan(int value) { WhileCount__set_LessThan(this, value); }
};

}}}


#endif
