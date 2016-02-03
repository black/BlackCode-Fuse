// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Collections\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_UNO_COLLECTIONS_LIST1_ENUMERATOR__FUSE_ELEMENTS_I_ELEMENT_BATCH_DRAWABLE_H__
#define __APP_UNO_COLLECTIONS_LIST1_ENUMERATOR__FUSE_ELEMENTS_I_ELEMENT_BATCH_DRAWABLE_H__

#include <app/Uno.Collections.IEnumerator.h>
#include <app/Uno.Collections.IEnumerator__Fuse_Elements_IElementBatchDrawable.h>
#include <app/Uno.IDisposable.h>
#include <app/Uno.Object.h>
#include <Uno.h>
namespace app { namespace Uno { namespace Collections { struct List__Fuse_Elements_IElementBatchDrawable; } } }

namespace app {
namespace Uno {
namespace Collections {

struct List1_Enumerator__Fuse_Elements_IElementBatchDrawable;

struct List1_Enumerator__Fuse_Elements_IElementBatchDrawable__uType : ::uStructType
{
    ::app::Uno::Collections::IEnumerator__Fuse_Elements_IElementBatchDrawable __interface_0;
    ::app::Uno::IDisposable __interface_1;
    ::app::Uno::Collections::IEnumerator __interface_2;
};

List1_Enumerator__Fuse_Elements_IElementBatchDrawable__uType* List1_Enumerator__Fuse_Elements_IElementBatchDrawable__typeof();

void List1_Enumerator__Fuse_Elements_IElementBatchDrawable___ObjInit(List1_Enumerator__Fuse_Elements_IElementBatchDrawable* __this, ::app::Uno::Collections::List__Fuse_Elements_IElementBatchDrawable* source);
void List1_Enumerator__Fuse_Elements_IElementBatchDrawable__Dispose(List1_Enumerator__Fuse_Elements_IElementBatchDrawable* __this);
::uObject* List1_Enumerator__Fuse_Elements_IElementBatchDrawable__get_Current(List1_Enumerator__Fuse_Elements_IElementBatchDrawable* __this);
bool List1_Enumerator__Fuse_Elements_IElementBatchDrawable__MoveNext(List1_Enumerator__Fuse_Elements_IElementBatchDrawable* __this);
List1_Enumerator__Fuse_Elements_IElementBatchDrawable List1_Enumerator__Fuse_Elements_IElementBatchDrawable__New_1(::uStatic* __this, ::app::Uno::Collections::List__Fuse_Elements_IElementBatchDrawable* source);
void List1_Enumerator__Fuse_Elements_IElementBatchDrawable__Uno_Collections_IEnumerator_Reset(List1_Enumerator__Fuse_Elements_IElementBatchDrawable* __this);

struct List1_Enumerator__Fuse_Elements_IElementBatchDrawable
{
    ::uStrong< ::app::Uno::Collections::List__Fuse_Elements_IElementBatchDrawable*> _source;
    int _version;
    int _iterator;
    ::uStrong< ::uObject*> _current;

    void _ObjInit(::app::Uno::Collections::List__Fuse_Elements_IElementBatchDrawable* source) { List1_Enumerator__Fuse_Elements_IElementBatchDrawable___ObjInit(this, source); }
    void Dispose() { List1_Enumerator__Fuse_Elements_IElementBatchDrawable__Dispose(this); }
    ::uObject* Current() { return List1_Enumerator__Fuse_Elements_IElementBatchDrawable__get_Current(this); }
    bool MoveNext() { return List1_Enumerator__Fuse_Elements_IElementBatchDrawable__MoveNext(this); }
};

}}}


#endif
