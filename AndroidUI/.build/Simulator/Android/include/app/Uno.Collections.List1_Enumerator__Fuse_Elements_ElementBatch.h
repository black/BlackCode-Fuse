// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Collections\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_UNO_COLLECTIONS_LIST1_ENUMERATOR__FUSE_ELEMENTS_ELEMENT_BATCH_H__
#define __APP_UNO_COLLECTIONS_LIST1_ENUMERATOR__FUSE_ELEMENTS_ELEMENT_BATCH_H__

#include <app/Uno.Collections.IEnumerator.h>
#include <app/Uno.Collections.IEnumerator__Fuse_Elements_ElementBatch.h>
#include <app/Uno.IDisposable.h>
#include <app/Uno.Object.h>
#include <Uno.h>
namespace app { namespace Fuse { namespace Elements { struct ElementBatch; } } }
namespace app { namespace Uno { namespace Collections { struct List__Fuse_Elements_ElementBatch; } } }

namespace app {
namespace Uno {
namespace Collections {

struct List1_Enumerator__Fuse_Elements_ElementBatch;

struct List1_Enumerator__Fuse_Elements_ElementBatch__uType : ::uStructType
{
    ::app::Uno::Collections::IEnumerator__Fuse_Elements_ElementBatch __interface_0;
    ::app::Uno::IDisposable __interface_1;
    ::app::Uno::Collections::IEnumerator __interface_2;
};

List1_Enumerator__Fuse_Elements_ElementBatch__uType* List1_Enumerator__Fuse_Elements_ElementBatch__typeof();

void List1_Enumerator__Fuse_Elements_ElementBatch___ObjInit(List1_Enumerator__Fuse_Elements_ElementBatch* __this, ::app::Uno::Collections::List__Fuse_Elements_ElementBatch* source);
void List1_Enumerator__Fuse_Elements_ElementBatch__Dispose(List1_Enumerator__Fuse_Elements_ElementBatch* __this);
::app::Fuse::Elements::ElementBatch* List1_Enumerator__Fuse_Elements_ElementBatch__get_Current(List1_Enumerator__Fuse_Elements_ElementBatch* __this);
bool List1_Enumerator__Fuse_Elements_ElementBatch__MoveNext(List1_Enumerator__Fuse_Elements_ElementBatch* __this);
List1_Enumerator__Fuse_Elements_ElementBatch List1_Enumerator__Fuse_Elements_ElementBatch__New_1(::uStatic* __this, ::app::Uno::Collections::List__Fuse_Elements_ElementBatch* source);
void List1_Enumerator__Fuse_Elements_ElementBatch__Uno_Collections_IEnumerator_Reset(List1_Enumerator__Fuse_Elements_ElementBatch* __this);

struct List1_Enumerator__Fuse_Elements_ElementBatch
{
    ::uStrong< ::app::Uno::Collections::List__Fuse_Elements_ElementBatch*> _source;
    int _version;
    int _iterator;
    ::uStrong< ::app::Fuse::Elements::ElementBatch*> _current;

    void _ObjInit(::app::Uno::Collections::List__Fuse_Elements_ElementBatch* source) { List1_Enumerator__Fuse_Elements_ElementBatch___ObjInit(this, source); }
    void Dispose() { List1_Enumerator__Fuse_Elements_ElementBatch__Dispose(this); }
    ::app::Fuse::Elements::ElementBatch* Current() { return List1_Enumerator__Fuse_Elements_ElementBatch__get_Current(this); }
    bool MoveNext() { return List1_Enumerator__Fuse_Elements_ElementBatch__MoveNext(this); }
};

}}}


#endif
