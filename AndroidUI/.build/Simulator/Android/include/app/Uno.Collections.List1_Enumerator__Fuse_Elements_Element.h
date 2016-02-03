// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Collections\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_UNO_COLLECTIONS_LIST1_ENUMERATOR__FUSE_ELEMENTS_ELEMENT_H__
#define __APP_UNO_COLLECTIONS_LIST1_ENUMERATOR__FUSE_ELEMENTS_ELEMENT_H__

#include <app/Uno.Collections.IEnumerator.h>
#include <app/Uno.Collections.IEnumerator__Fuse_Elements_Element.h>
#include <app/Uno.IDisposable.h>
#include <app/Uno.Object.h>
#include <Uno.h>
namespace app { namespace Fuse { namespace Elements { struct Element; } } }
namespace app { namespace Uno { namespace Collections { struct List__Fuse_Elements_Element; } } }

namespace app {
namespace Uno {
namespace Collections {

struct List1_Enumerator__Fuse_Elements_Element;

struct List1_Enumerator__Fuse_Elements_Element__uType : ::uStructType
{
    ::app::Uno::Collections::IEnumerator__Fuse_Elements_Element __interface_0;
    ::app::Uno::IDisposable __interface_1;
    ::app::Uno::Collections::IEnumerator __interface_2;
};

List1_Enumerator__Fuse_Elements_Element__uType* List1_Enumerator__Fuse_Elements_Element__typeof();

void List1_Enumerator__Fuse_Elements_Element___ObjInit(List1_Enumerator__Fuse_Elements_Element* __this, ::app::Uno::Collections::List__Fuse_Elements_Element* source);
void List1_Enumerator__Fuse_Elements_Element__Dispose(List1_Enumerator__Fuse_Elements_Element* __this);
::app::Fuse::Elements::Element* List1_Enumerator__Fuse_Elements_Element__get_Current(List1_Enumerator__Fuse_Elements_Element* __this);
bool List1_Enumerator__Fuse_Elements_Element__MoveNext(List1_Enumerator__Fuse_Elements_Element* __this);
List1_Enumerator__Fuse_Elements_Element List1_Enumerator__Fuse_Elements_Element__New_1(::uStatic* __this, ::app::Uno::Collections::List__Fuse_Elements_Element* source);
void List1_Enumerator__Fuse_Elements_Element__Uno_Collections_IEnumerator_Reset(List1_Enumerator__Fuse_Elements_Element* __this);

struct List1_Enumerator__Fuse_Elements_Element
{
    ::uStrong< ::app::Uno::Collections::List__Fuse_Elements_Element*> _source;
    int _version;
    int _iterator;
    ::uStrong< ::app::Fuse::Elements::Element*> _current;

    void _ObjInit(::app::Uno::Collections::List__Fuse_Elements_Element* source) { List1_Enumerator__Fuse_Elements_Element___ObjInit(this, source); }
    void Dispose() { List1_Enumerator__Fuse_Elements_Element__Dispose(this); }
    ::app::Fuse::Elements::Element* Current() { return List1_Enumerator__Fuse_Elements_Element__get_Current(this); }
    bool MoveNext() { return List1_Enumerator__Fuse_Elements_Element__MoveNext(this); }
};

}}}


#endif
