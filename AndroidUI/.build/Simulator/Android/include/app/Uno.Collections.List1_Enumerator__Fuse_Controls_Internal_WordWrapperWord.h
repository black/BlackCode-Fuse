// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Collections\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_UNO_COLLECTIONS_LIST1_ENUMERATOR__FUSE_CONTROLS_INTERNAL_WORD_WRAPPER_WORD_H__
#define __APP_UNO_COLLECTIONS_LIST1_ENUMERATOR__FUSE_CONTROLS_INTERNAL_WORD_WRAPPER_WORD_H__

#include <app/Uno.Collections.IEnumerator.h>
#include <app/Uno.Collections.IEnumerator__Fuse_Controls_Internal_WordWrapperWord.h>
#include <app/Uno.IDisposable.h>
#include <app/Uno.Object.h>
#include <Uno.h>
namespace app { namespace Fuse { namespace Controls { namespace Internal { struct WordWrapperWord; } } } }
namespace app { namespace Uno { namespace Collections { struct List__Fuse_Controls_Internal_WordWrapperWord; } } }

namespace app {
namespace Uno {
namespace Collections {

struct List1_Enumerator__Fuse_Controls_Internal_WordWrapperWord;

struct List1_Enumerator__Fuse_Controls_Internal_WordWrapperWord__uType : ::uStructType
{
    ::app::Uno::Collections::IEnumerator__Fuse_Controls_Internal_WordWrapperWord __interface_0;
    ::app::Uno::IDisposable __interface_1;
    ::app::Uno::Collections::IEnumerator __interface_2;
};

List1_Enumerator__Fuse_Controls_Internal_WordWrapperWord__uType* List1_Enumerator__Fuse_Controls_Internal_WordWrapperWord__typeof();

void List1_Enumerator__Fuse_Controls_Internal_WordWrapperWord___ObjInit(List1_Enumerator__Fuse_Controls_Internal_WordWrapperWord* __this, ::app::Uno::Collections::List__Fuse_Controls_Internal_WordWrapperWord* source);
void List1_Enumerator__Fuse_Controls_Internal_WordWrapperWord__Dispose(List1_Enumerator__Fuse_Controls_Internal_WordWrapperWord* __this);
::app::Fuse::Controls::Internal::WordWrapperWord* List1_Enumerator__Fuse_Controls_Internal_WordWrapperWord__get_Current(List1_Enumerator__Fuse_Controls_Internal_WordWrapperWord* __this);
bool List1_Enumerator__Fuse_Controls_Internal_WordWrapperWord__MoveNext(List1_Enumerator__Fuse_Controls_Internal_WordWrapperWord* __this);
List1_Enumerator__Fuse_Controls_Internal_WordWrapperWord List1_Enumerator__Fuse_Controls_Internal_WordWrapperWord__New_1(::uStatic* __this, ::app::Uno::Collections::List__Fuse_Controls_Internal_WordWrapperWord* source);
void List1_Enumerator__Fuse_Controls_Internal_WordWrapperWord__Uno_Collections_IEnumerator_Reset(List1_Enumerator__Fuse_Controls_Internal_WordWrapperWord* __this);

struct List1_Enumerator__Fuse_Controls_Internal_WordWrapperWord
{
    ::uStrong< ::app::Uno::Collections::List__Fuse_Controls_Internal_WordWrapperWord*> _source;
    int _version;
    int _iterator;
    ::uStrong< ::app::Fuse::Controls::Internal::WordWrapperWord*> _current;

    void _ObjInit(::app::Uno::Collections::List__Fuse_Controls_Internal_WordWrapperWord* source) { List1_Enumerator__Fuse_Controls_Internal_WordWrapperWord___ObjInit(this, source); }
    void Dispose() { List1_Enumerator__Fuse_Controls_Internal_WordWrapperWord__Dispose(this); }
    ::app::Fuse::Controls::Internal::WordWrapperWord* Current() { return List1_Enumerator__Fuse_Controls_Internal_WordWrapperWord__get_Current(this); }
    bool MoveNext() { return List1_Enumerator__Fuse_Controls_Internal_WordWrapperWord__MoveNext(this); }
};

}}}


#endif
