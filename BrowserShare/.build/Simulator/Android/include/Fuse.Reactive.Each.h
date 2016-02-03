// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Reactive\0.19.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Behavior.h>
#include <Fuse.Reactive.IObserver.h>
namespace g{namespace Fuse{namespace Controls{struct Panel;}}}
namespace g{namespace Fuse{namespace Elements{struct Element;}}}
namespace g{namespace Fuse{namespace Reactive{struct Each;}}}
namespace g{namespace Fuse{struct Node;}}
namespace g{namespace Uno{namespace Collections{struct List;}}}

namespace g{
namespace Fuse{
namespace Reactive{

// public sealed class Each :933
// {
struct Each_type : ::g::Fuse::Behavior_type
{
    ::g::Fuse::Reactive::IObserver interface0;
};

Each_type* Each_typeof();
void Each__ctor_1_fn(Each* __this);
void Each__AddNew_fn(Each* __this, uObject* dataContext);
void Each__get_Count_fn(Each* __this, int* __retval);
void Each__set_Count_fn(Each* __this, int* value);
void Each__get_Factories_fn(Each* __this, uObject** __retval);
void Each__Fuse_Reactive_IObserver_OnAdd_fn(Each* __this, uObject* addedValue);
void Each__Fuse_Reactive_IObserver_OnFailed_fn(Each* __this, uString* message);
void Each__Fuse_Reactive_IObserver_OnInsertAt_fn(Each* __this, int* index, uObject* value);
void Each__Fuse_Reactive_IObserver_OnNewAll_fn(Each* __this, int* length);
void Each__Fuse_Reactive_IObserver_OnNewAt_fn(Each* __this, int* index, uObject* value);
void Each__Fuse_Reactive_IObserver_OnRemove_fn(Each* __this, uObject* value, int* index);
void Each__Fuse_Reactive_IObserver_OnSet_fn(Each* __this, uObject* newValue);
void Each__InsertNew_fn(Each* __this, int* index, uObject* dataContext);
void Each__IsUnchanged_fn(Each* __this, uArray* newDcs, bool* __retval);
void Each__get_Items_fn(Each* __this, uObject** __retval);
void Each__set_Items_fn(Each* __this, uObject* value);
void Each__New1_fn(Each** __retval);
void Each__OnFactoriesChanged_fn(Each* __this, uObject* factory);
void Each__OnItemsChanged_fn(Each* __this);
void Each__OnRooted_fn(Each* __this, ::g::Fuse::Node* parentNode);
void Each__OnUnrooted_fn(Each* __this, ::g::Fuse::Node* parentNode);
void Each__RemoveAll_fn(Each* __this);
void Each__ReplaceAll_fn(Each* __this, uArray* dcs);
void Each__Repopulate_fn(Each* __this);
void Each__SetFailed_fn(Each* __this, uString* message);
void Each__SetValid_fn(Each* __this);

struct Each : ::g::Fuse::Behavior
{
    int _count;
    uStrong< ::g::Uno::Collections::List*> _elements;
    uStrong<uObject*> _factories;
    uStrong<uObject*> _items;
    uStrong< ::g::Fuse::Controls::Panel*> _panel;
    uStrong<uObject*> _subscription;

    void ctor_1();
    void AddNew(uObject* dataContext);
    int Count();
    void Count(int value);
    uObject* Factories();
    void InsertNew(int index, uObject* dataContext);
    bool IsUnchanged(uArray* newDcs);
    uObject* Items();
    void Items(uObject* value);
    void OnFactoriesChanged(uObject* factory);
    void OnItemsChanged();
    void RemoveAll();
    void ReplaceAll(uArray* dcs);
    void Repopulate();
    void SetFailed(uString* message);
    void SetValid();
    static Each* New1();
};
// }

}}} // ::g::Fuse::Reactive
