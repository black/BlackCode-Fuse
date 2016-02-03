// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Reactive\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_FUSE_REACTIVE_EACH_H__
#define __APP_FUSE_REACTIVE_EACH_H__

#include <app/Fuse.Behavior.h>
#include <app/Fuse.Reactive.IObserver.h>
#include <Uno.h>
namespace app { namespace Fuse { namespace Controls { struct Panel; } } }
namespace app { namespace Fuse { struct Node; } }
namespace app { namespace Uno { namespace Collections { struct List__Fuse_Elements_Element; } } }

namespace app {
namespace Fuse {
namespace Reactive {

struct Each;

struct Each__uType : ::app::Fuse::Behavior__uType
{
    ::app::Fuse::Reactive::IObserver __interface_0;
};

Each__uType* Each__typeof();

void Each___ObjInit_1(Each* __this);
void Each__AddNew(Each* __this, ::uObject* dataContext);
void Each__Fuse_Reactive_IObserver_OnAdd(Each* __this, ::uObject* addedValue);
void Each__Fuse_Reactive_IObserver_OnFailed(Each* __this, ::uString* message);
void Each__Fuse_Reactive_IObserver_OnNewAll(Each* __this, int length);
void Each__Fuse_Reactive_IObserver_OnNewAt(Each* __this, int index, ::uObject* value);
void Each__Fuse_Reactive_IObserver_OnRemove(Each* __this, ::uObject* value, int index);
void Each__Fuse_Reactive_IObserver_OnSet(Each* __this, ::uObject* newValue);
int Each__get_Count(Each* __this);
::uObject* Each__get_Factories(Each* __this);
::uObject* Each__get_Items(Each* __this);
bool Each__IsUnchanged(Each* __this, ::uArray* newDcs);
Each* Each__New_1(::uStatic* __this);
void Each__OnFactoriesChanged(Each* __this, ::uObject* factory);
void Each__OnItemsChanged(Each* __this);
void Each__OnRooted(Each* __this, ::app::Fuse::Node* n);
void Each__OnUnrooted(Each* __this, ::app::Fuse::Node* n);
void Each__RemoveAll(Each* __this);
void Each__ReplaceAll(Each* __this, ::uArray* dcs);
void Each__Repopulate(Each* __this);
void Each__set_Count(Each* __this, int value);
void Each__set_Items(Each* __this, ::uObject* value);
void Each__SetEmpty(Each* __this);
void Each__SetFailed(Each* __this, ::uString* message);
void Each__SetValid(Each* __this);

struct Each : ::app::Fuse::Behavior
{
    ::uStrong< ::uObject*> _factories;
    ::uStrong< ::app::Fuse::Controls::Panel*> _node;
    ::uStrong< ::uObject*> _items;
    int _count;
    ::uStrong< ::app::Uno::Collections::List__Fuse_Elements_Element*> _elements;
    ::uStrong< ::uObject*> _subscription;

    void _ObjInit_1() { Each___ObjInit_1(this); }
    void AddNew(::uObject* dataContext) { Each__AddNew(this, dataContext); }
    int Count() { return Each__get_Count(this); }
    ::uObject* Factories() { return Each__get_Factories(this); }
    ::uObject* Items() { return Each__get_Items(this); }
    bool IsUnchanged(::uArray* newDcs) { return Each__IsUnchanged(this, newDcs); }
    void OnFactoriesChanged(::uObject* factory) { Each__OnFactoriesChanged(this, factory); }
    void OnItemsChanged() { Each__OnItemsChanged(this); }
    void RemoveAll() { Each__RemoveAll(this); }
    void ReplaceAll(::uArray* dcs) { Each__ReplaceAll(this, dcs); }
    void Repopulate() { Each__Repopulate(this); }
    void Count(int value) { Each__set_Count(this, value); }
    void Items(::uObject* value) { Each__set_Items(this, value); }
    void SetEmpty() { Each__SetEmpty(this); }
    void SetFailed(::uString* message) { Each__SetFailed(this, message); }
    void SetValid() { Each__SetValid(this); }
};

}}}


#endif
