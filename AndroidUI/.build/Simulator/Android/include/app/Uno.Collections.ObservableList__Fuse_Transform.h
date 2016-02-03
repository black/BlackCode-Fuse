// This file was generated based on 'C:\ProgramData\Uno\Packages\Uno.Collections\0.13.2\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_UNO_COLLECTIONS_OBSERVABLE_LIST__FUSE_TRANSFORM_H__
#define __APP_UNO_COLLECTIONS_OBSERVABLE_LIST__FUSE_TRANSFORM_H__

#include <app/Uno.Collections.ICollection__Fuse_Transform.h>
#include <app/Uno.Collections.IEnumerable__Fuse_Transform.h>
#include <app/Uno.Collections.IList__Fuse_Transform.h>
#include <app/Uno.Object.h>
#include <Uno.h>
namespace app { namespace Fuse { struct Transform; } }
namespace app { namespace Uno { namespace Collections { struct List__Fuse_Transform; } } }

namespace app {
namespace Uno {
namespace Collections {

struct ObservableList__Fuse_Transform;

struct ObservableList__Fuse_Transform__uType : ::uClassType
{
    ::app::Uno::Collections::IList__Fuse_Transform __interface_0;
    ::app::Uno::Collections::ICollection__Fuse_Transform __interface_1;
    ::app::Uno::Collections::IEnumerable__Fuse_Transform __interface_2;
};

ObservableList__Fuse_Transform__uType* ObservableList__Fuse_Transform__typeof();

void ObservableList__Fuse_Transform___ObjInit(ObservableList__Fuse_Transform* __this, ::uDelegate* added, ::uDelegate* removed);
void ObservableList__Fuse_Transform__Add(ObservableList__Fuse_Transform* __this, ::app::Fuse::Transform* item);
void ObservableList__Fuse_Transform__Clear(ObservableList__Fuse_Transform* __this);
bool ObservableList__Fuse_Transform__Contains(ObservableList__Fuse_Transform* __this, ::app::Fuse::Transform* item);
int ObservableList__Fuse_Transform__get_Count(ObservableList__Fuse_Transform* __this);
::app::Fuse::Transform* ObservableList__Fuse_Transform__get_Item(ObservableList__Fuse_Transform* __this, int index);
::uObject* ObservableList__Fuse_Transform__GetEnumerator(ObservableList__Fuse_Transform* __this);
void ObservableList__Fuse_Transform__Insert(ObservableList__Fuse_Transform* __this, int index, ::app::Fuse::Transform* item);
ObservableList__Fuse_Transform* ObservableList__Fuse_Transform__New_1(::uStatic* __this, ::uDelegate* added, ::uDelegate* removed);
bool ObservableList__Fuse_Transform__Remove(ObservableList__Fuse_Transform* __this, ::app::Fuse::Transform* item);
void ObservableList__Fuse_Transform__RemoveAt(ObservableList__Fuse_Transform* __this, int index);
void ObservableList__Fuse_Transform__ReplaceAt(ObservableList__Fuse_Transform* __this, int index, ::app::Fuse::Transform* item);

struct ObservableList__Fuse_Transform : ::uObject
{
    ::uStrong< ::app::Uno::Collections::List__Fuse_Transform*> items;
    ::uStrong< ::uDelegate*> added;
    ::uStrong< ::uDelegate*> removed;

    void _ObjInit(::uDelegate* added, ::uDelegate* removed) { ObservableList__Fuse_Transform___ObjInit(this, added, removed); }
    void Add(::app::Fuse::Transform* item) { ObservableList__Fuse_Transform__Add(this, item); }
    void Clear() { ObservableList__Fuse_Transform__Clear(this); }
    bool Contains(::app::Fuse::Transform* item) { return ObservableList__Fuse_Transform__Contains(this, item); }
    int Count() { return ObservableList__Fuse_Transform__get_Count(this); }
    ::app::Fuse::Transform* Item(int index) { return ObservableList__Fuse_Transform__get_Item(this, index); }
    ::uObject* GetEnumerator() { return ObservableList__Fuse_Transform__GetEnumerator(this); }
    void Insert(int index, ::app::Fuse::Transform* item) { ObservableList__Fuse_Transform__Insert(this, index, item); }
    bool Remove(::app::Fuse::Transform* item) { return ObservableList__Fuse_Transform__Remove(this, item); }
    void RemoveAt(int index) { ObservableList__Fuse_Transform__RemoveAt(this, index); }
    void ReplaceAt(int index, ::app::Fuse::Transform* item) { ObservableList__Fuse_Transform__ReplaceAt(this, index, item); }
};

}}}


#endif
