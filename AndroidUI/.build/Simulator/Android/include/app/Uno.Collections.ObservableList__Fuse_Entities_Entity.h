// This file was generated based on 'C:\ProgramData\Uno\Packages\Uno.Collections\0.13.2\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_UNO_COLLECTIONS_OBSERVABLE_LIST__FUSE_ENTITIES_ENTITY_H__
#define __APP_UNO_COLLECTIONS_OBSERVABLE_LIST__FUSE_ENTITIES_ENTITY_H__

#include <app/Uno.Collections.ICollection__Fuse_Entities_Entity.h>
#include <app/Uno.Collections.IEnumerable__Fuse_Entities_Entity.h>
#include <app/Uno.Collections.IList__Fuse_Entities_Entity.h>
#include <app/Uno.Object.h>
#include <Uno.h>
namespace app { namespace Fuse { namespace Entities { struct Entity; } } }
namespace app { namespace Uno { namespace Collections { struct List__Fuse_Entities_Entity; } } }

namespace app {
namespace Uno {
namespace Collections {

struct ObservableList__Fuse_Entities_Entity;

struct ObservableList__Fuse_Entities_Entity__uType : ::uClassType
{
    ::app::Uno::Collections::IList__Fuse_Entities_Entity __interface_0;
    ::app::Uno::Collections::ICollection__Fuse_Entities_Entity __interface_1;
    ::app::Uno::Collections::IEnumerable__Fuse_Entities_Entity __interface_2;
};

ObservableList__Fuse_Entities_Entity__uType* ObservableList__Fuse_Entities_Entity__typeof();

void ObservableList__Fuse_Entities_Entity___ObjInit(ObservableList__Fuse_Entities_Entity* __this, ::uDelegate* added, ::uDelegate* removed);
void ObservableList__Fuse_Entities_Entity__Add(ObservableList__Fuse_Entities_Entity* __this, ::app::Fuse::Entities::Entity* item);
void ObservableList__Fuse_Entities_Entity__Clear(ObservableList__Fuse_Entities_Entity* __this);
bool ObservableList__Fuse_Entities_Entity__Contains(ObservableList__Fuse_Entities_Entity* __this, ::app::Fuse::Entities::Entity* item);
int ObservableList__Fuse_Entities_Entity__get_Count(ObservableList__Fuse_Entities_Entity* __this);
::app::Fuse::Entities::Entity* ObservableList__Fuse_Entities_Entity__get_Item(ObservableList__Fuse_Entities_Entity* __this, int index);
::uObject* ObservableList__Fuse_Entities_Entity__GetEnumerator(ObservableList__Fuse_Entities_Entity* __this);
void ObservableList__Fuse_Entities_Entity__Insert(ObservableList__Fuse_Entities_Entity* __this, int index, ::app::Fuse::Entities::Entity* item);
ObservableList__Fuse_Entities_Entity* ObservableList__Fuse_Entities_Entity__New_1(::uStatic* __this, ::uDelegate* added, ::uDelegate* removed);
bool ObservableList__Fuse_Entities_Entity__Remove(ObservableList__Fuse_Entities_Entity* __this, ::app::Fuse::Entities::Entity* item);
void ObservableList__Fuse_Entities_Entity__RemoveAt(ObservableList__Fuse_Entities_Entity* __this, int index);
void ObservableList__Fuse_Entities_Entity__ReplaceAt(ObservableList__Fuse_Entities_Entity* __this, int index, ::app::Fuse::Entities::Entity* item);

struct ObservableList__Fuse_Entities_Entity : ::uObject
{
    ::uStrong< ::app::Uno::Collections::List__Fuse_Entities_Entity*> items;
    ::uStrong< ::uDelegate*> added;
    ::uStrong< ::uDelegate*> removed;

    void _ObjInit(::uDelegate* added, ::uDelegate* removed) { ObservableList__Fuse_Entities_Entity___ObjInit(this, added, removed); }
    void Add(::app::Fuse::Entities::Entity* item) { ObservableList__Fuse_Entities_Entity__Add(this, item); }
    void Clear() { ObservableList__Fuse_Entities_Entity__Clear(this); }
    bool Contains(::app::Fuse::Entities::Entity* item) { return ObservableList__Fuse_Entities_Entity__Contains(this, item); }
    int Count() { return ObservableList__Fuse_Entities_Entity__get_Count(this); }
    ::app::Fuse::Entities::Entity* Item(int index) { return ObservableList__Fuse_Entities_Entity__get_Item(this, index); }
    ::uObject* GetEnumerator() { return ObservableList__Fuse_Entities_Entity__GetEnumerator(this); }
    void Insert(int index, ::app::Fuse::Entities::Entity* item) { ObservableList__Fuse_Entities_Entity__Insert(this, index, item); }
    bool Remove(::app::Fuse::Entities::Entity* item) { return ObservableList__Fuse_Entities_Entity__Remove(this, item); }
    void RemoveAt(int index) { ObservableList__Fuse_Entities_Entity__RemoveAt(this, index); }
    void ReplaceAt(int index, ::app::Fuse::Entities::Entity* item) { ObservableList__Fuse_Entities_Entity__ReplaceAt(this, index, item); }
};

}}}


#endif
