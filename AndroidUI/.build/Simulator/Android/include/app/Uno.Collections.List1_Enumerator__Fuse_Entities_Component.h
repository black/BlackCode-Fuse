// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Collections\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_UNO_COLLECTIONS_LIST1_ENUMERATOR__FUSE_ENTITIES_COMPONENT_H__
#define __APP_UNO_COLLECTIONS_LIST1_ENUMERATOR__FUSE_ENTITIES_COMPONENT_H__

#include <app/Uno.Collections.IEnumerator.h>
#include <app/Uno.Collections.IEnumerator__Fuse_Entities_Component.h>
#include <app/Uno.IDisposable.h>
#include <app/Uno.Object.h>
#include <Uno.h>
namespace app { namespace Fuse { namespace Entities { struct Component; } } }
namespace app { namespace Uno { namespace Collections { struct List__Fuse_Entities_Component; } } }

namespace app {
namespace Uno {
namespace Collections {

struct List1_Enumerator__Fuse_Entities_Component;

struct List1_Enumerator__Fuse_Entities_Component__uType : ::uStructType
{
    ::app::Uno::Collections::IEnumerator__Fuse_Entities_Component __interface_0;
    ::app::Uno::IDisposable __interface_1;
    ::app::Uno::Collections::IEnumerator __interface_2;
};

List1_Enumerator__Fuse_Entities_Component__uType* List1_Enumerator__Fuse_Entities_Component__typeof();

void List1_Enumerator__Fuse_Entities_Component___ObjInit(List1_Enumerator__Fuse_Entities_Component* __this, ::app::Uno::Collections::List__Fuse_Entities_Component* source);
void List1_Enumerator__Fuse_Entities_Component__Dispose(List1_Enumerator__Fuse_Entities_Component* __this);
::app::Fuse::Entities::Component* List1_Enumerator__Fuse_Entities_Component__get_Current(List1_Enumerator__Fuse_Entities_Component* __this);
bool List1_Enumerator__Fuse_Entities_Component__MoveNext(List1_Enumerator__Fuse_Entities_Component* __this);
List1_Enumerator__Fuse_Entities_Component List1_Enumerator__Fuse_Entities_Component__New_1(::uStatic* __this, ::app::Uno::Collections::List__Fuse_Entities_Component* source);
void List1_Enumerator__Fuse_Entities_Component__Uno_Collections_IEnumerator_Reset(List1_Enumerator__Fuse_Entities_Component* __this);

struct List1_Enumerator__Fuse_Entities_Component
{
    ::uStrong< ::app::Uno::Collections::List__Fuse_Entities_Component*> _source;
    int _version;
    int _iterator;
    ::uStrong< ::app::Fuse::Entities::Component*> _current;

    void _ObjInit(::app::Uno::Collections::List__Fuse_Entities_Component* source) { List1_Enumerator__Fuse_Entities_Component___ObjInit(this, source); }
    void Dispose() { List1_Enumerator__Fuse_Entities_Component__Dispose(this); }
    ::app::Fuse::Entities::Component* Current() { return List1_Enumerator__Fuse_Entities_Component__get_Current(this); }
    bool MoveNext() { return List1_Enumerator__Fuse_Entities_Component__MoveNext(this); }
};

}}}


#endif
