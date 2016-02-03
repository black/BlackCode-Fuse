// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Collections\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_UNO_COLLECTIONS_LIST1_ENUMERATOR__FUSE_ELEMENTS_ELEMENT_ATLAS_H__
#define __APP_UNO_COLLECTIONS_LIST1_ENUMERATOR__FUSE_ELEMENTS_ELEMENT_ATLAS_H__

#include <app/Uno.Collections.IEnumerator.h>
#include <app/Uno.Collections.IEnumerator__Fuse_Elements_ElementAtlas.h>
#include <app/Uno.IDisposable.h>
#include <app/Uno.Object.h>
#include <Uno.h>
namespace app { namespace Fuse { namespace Elements { struct ElementAtlas; } } }
namespace app { namespace Uno { namespace Collections { struct List__Fuse_Elements_ElementAtlas; } } }

namespace app {
namespace Uno {
namespace Collections {

struct List1_Enumerator__Fuse_Elements_ElementAtlas;

struct List1_Enumerator__Fuse_Elements_ElementAtlas__uType : ::uStructType
{
    ::app::Uno::Collections::IEnumerator__Fuse_Elements_ElementAtlas __interface_0;
    ::app::Uno::IDisposable __interface_1;
    ::app::Uno::Collections::IEnumerator __interface_2;
};

List1_Enumerator__Fuse_Elements_ElementAtlas__uType* List1_Enumerator__Fuse_Elements_ElementAtlas__typeof();

void List1_Enumerator__Fuse_Elements_ElementAtlas___ObjInit(List1_Enumerator__Fuse_Elements_ElementAtlas* __this, ::app::Uno::Collections::List__Fuse_Elements_ElementAtlas* source);
void List1_Enumerator__Fuse_Elements_ElementAtlas__Dispose(List1_Enumerator__Fuse_Elements_ElementAtlas* __this);
::app::Fuse::Elements::ElementAtlas* List1_Enumerator__Fuse_Elements_ElementAtlas__get_Current(List1_Enumerator__Fuse_Elements_ElementAtlas* __this);
bool List1_Enumerator__Fuse_Elements_ElementAtlas__MoveNext(List1_Enumerator__Fuse_Elements_ElementAtlas* __this);
List1_Enumerator__Fuse_Elements_ElementAtlas List1_Enumerator__Fuse_Elements_ElementAtlas__New_1(::uStatic* __this, ::app::Uno::Collections::List__Fuse_Elements_ElementAtlas* source);
void List1_Enumerator__Fuse_Elements_ElementAtlas__Uno_Collections_IEnumerator_Reset(List1_Enumerator__Fuse_Elements_ElementAtlas* __this);

struct List1_Enumerator__Fuse_Elements_ElementAtlas
{
    ::uStrong< ::app::Uno::Collections::List__Fuse_Elements_ElementAtlas*> _source;
    int _version;
    int _iterator;
    ::uStrong< ::app::Fuse::Elements::ElementAtlas*> _current;

    void _ObjInit(::app::Uno::Collections::List__Fuse_Elements_ElementAtlas* source) { List1_Enumerator__Fuse_Elements_ElementAtlas___ObjInit(this, source); }
    void Dispose() { List1_Enumerator__Fuse_Elements_ElementAtlas__Dispose(this); }
    ::app::Fuse::Elements::ElementAtlas* Current() { return List1_Enumerator__Fuse_Elements_ElementAtlas__get_Current(this); }
    bool MoveNext() { return List1_Enumerator__Fuse_Elements_ElementAtlas__MoveNext(this); }
};

}}}


#endif
