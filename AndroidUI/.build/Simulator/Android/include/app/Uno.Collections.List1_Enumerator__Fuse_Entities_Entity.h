// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Collections\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_UNO_COLLECTIONS_LIST1_ENUMERATOR__FUSE_ENTITIES_ENTITY_H__
#define __APP_UNO_COLLECTIONS_LIST1_ENUMERATOR__FUSE_ENTITIES_ENTITY_H__

#include <app/Uno.Collections.IEnumerator.h>
#include <app/Uno.Collections.IEnumerator__Fuse_Entities_Entity.h>
#include <app/Uno.IDisposable.h>
#include <app/Uno.Object.h>
#include <Uno.h>
namespace app { namespace Fuse { namespace Entities { struct Entity; } } }
namespace app { namespace Uno { namespace Collections { struct List__Fuse_Entities_Entity; } } }

namespace app {
namespace Uno {
namespace Collections {

struct List1_Enumerator__Fuse_Entities_Entity;

struct List1_Enumerator__Fuse_Entities_Entity__uType : ::uStructType
{
    ::app::Uno::Collections::IEnumerator__Fuse_Entities_Entity __interface_0;
    ::app::Uno::IDisposable __interface_1;
    ::app::Uno::Collections::IEnumerator __interface_2;
};

List1_Enumerator__Fuse_Entities_Entity__uType* List1_Enumerator__Fuse_Entities_Entity__typeof();

void List1_Enumerator__Fuse_Entities_Entity___ObjInit(List1_Enumerator__Fuse_Entities_Entity* __this, ::app::Uno::Collections::List__Fuse_Entities_Entity* source);
void List1_Enumerator__Fuse_Entities_Entity__Dispose(List1_Enumerator__Fuse_Entities_Entity* __this);
::app::Fuse::Entities::Entity* List1_Enumerator__Fuse_Entities_Entity__get_Current(List1_Enumerator__Fuse_Entities_Entity* __this);
bool List1_Enumerator__Fuse_Entities_Entity__MoveNext(List1_Enumerator__Fuse_Entities_Entity* __this);
List1_Enumerator__Fuse_Entities_Entity List1_Enumerator__Fuse_Entities_Entity__New_1(::uStatic* __this, ::app::Uno::Collections::List__Fuse_Entities_Entity* source);
void List1_Enumerator__Fuse_Entities_Entity__Uno_Collections_IEnumerator_Reset(List1_Enumerator__Fuse_Entities_Entity* __this);

struct List1_Enumerator__Fuse_Entities_Entity
{
    ::uStrong< ::app::Uno::Collections::List__Fuse_Entities_Entity*> _source;
    int _version;
    int _iterator;
    ::uStrong< ::app::Fuse::Entities::Entity*> _current;

    void _ObjInit(::app::Uno::Collections::List__Fuse_Entities_Entity* source) { List1_Enumerator__Fuse_Entities_Entity___ObjInit(this, source); }
    void Dispose() { List1_Enumerator__Fuse_Entities_Entity__Dispose(this); }
    ::app::Fuse::Entities::Entity* Current() { return List1_Enumerator__Fuse_Entities_Entity__get_Current(this); }
    bool MoveNext() { return List1_Enumerator__Fuse_Entities_Entity__MoveNext(this); }
};

}}}


#endif
