// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Reactive\0.19.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Reactive.IObserver.h>
#include <Fuse.Triggers.Trigger.h>
namespace g{namespace Fuse{namespace Reactive{struct WhileCount;}}}
namespace g{namespace Fuse{struct Node;}}

namespace g{
namespace Fuse{
namespace Reactive{

// public class WhileCount :3037
// {
struct WhileCount_type : ::g::Fuse::Triggers::Trigger_type
{
    ::g::Fuse::Reactive::IObserver interface0;
};

WhileCount_type* WhileCount_typeof();
void WhileCount__ctor_2_fn(WhileCount* __this);
void WhileCount__Assess_fn(WhileCount* __this, int* count);
void WhileCount__get_EqualTo_fn(WhileCount* __this, int* __retval);
void WhileCount__set_EqualTo_fn(WhileCount* __this, int* value);
void WhileCount__Fuse_Reactive_IObserver_OnAdd_fn(WhileCount* __this, uObject* addedValue);
void WhileCount__Fuse_Reactive_IObserver_OnFailed_fn(WhileCount* __this, uString* message);
void WhileCount__Fuse_Reactive_IObserver_OnInsertAt_fn(WhileCount* __this, int* index, uObject* value);
void WhileCount__Fuse_Reactive_IObserver_OnNewAll_fn(WhileCount* __this, int* length);
void WhileCount__Fuse_Reactive_IObserver_OnNewAt_fn(WhileCount* __this, int* index, uObject* value);
void WhileCount__Fuse_Reactive_IObserver_OnRemove_fn(WhileCount* __this, uObject* value, int* index);
void WhileCount__Fuse_Reactive_IObserver_OnSet_fn(WhileCount* __this, uObject* newValue);
void WhileCount__get_GreaterThan_fn(WhileCount* __this, int* __retval);
void WhileCount__set_GreaterThan_fn(WhileCount* __this, int* value);
void WhileCount__get_Items_fn(WhileCount* __this, uObject** __retval);
void WhileCount__set_Items_fn(WhileCount* __this, uObject* value);
void WhileCount__get_LessThan_fn(WhileCount* __this, int* __retval);
void WhileCount__set_LessThan_fn(WhileCount* __this, int* value);
void WhileCount__New1_fn(WhileCount** __retval);
void WhileCount__OnItemsChanged_fn(WhileCount* __this);
void WhileCount__OnRooted_fn(WhileCount* __this, ::g::Fuse::Node* parentNode);
void WhileCount__OnUnrooted_fn(WhileCount* __this, ::g::Fuse::Node* parentNode);
void WhileCount__Reassess_fn(WhileCount* __this);
void WhileCount__ReplaceAll_fn(WhileCount* __this, uArray* arr);

struct WhileCount : ::g::Fuse::Triggers::Trigger
{
    bool _equalToMode;
    int _equalToValue;
    bool _greaterThanMode;
    int _greaterThanValue;
    bool _isRooting;
    uStrong<uObject*> _items;
    bool _lessThanMode;
    int _lessThanValue;
    int _oldCount;
    uStrong<uObject*> _subscription;

    void ctor_2();
    void Assess(int count);
    int EqualTo();
    void EqualTo(int value);
    int GreaterThan();
    void GreaterThan(int value);
    uObject* Items();
    void Items(uObject* value);
    int LessThan();
    void LessThan(int value);
    void OnItemsChanged();
    void Reassess();
    void ReplaceAll(uArray* arr);
    static WhileCount* New1();
};
// }

}}} // ::g::Fuse::Reactive
