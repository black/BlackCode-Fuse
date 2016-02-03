// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Collections\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_UNO_COLLECTIONS_LIST1_ENUMERATOR__FUSE_CONTROLS_TEXT_EDIT_LINE_CACHE_LINE_H__
#define __APP_UNO_COLLECTIONS_LIST1_ENUMERATOR__FUSE_CONTROLS_TEXT_EDIT_LINE_CACHE_LINE_H__

#include <app/Uno.Collections.IEnumerator.h>
#include <app/Uno.Collections.IEnumerator__Fuse_Controls_TextEdit_LineCacheLine.h>
#include <app/Uno.IDisposable.h>
#include <app/Uno.Object.h>
#include <Uno.h>
namespace app { namespace Fuse { namespace Controls { namespace TextEdit { struct LineCacheLine; } } } }
namespace app { namespace Uno { namespace Collections { struct List__Fuse_Controls_TextEdit_LineCacheLine; } } }

namespace app {
namespace Uno {
namespace Collections {

struct List1_Enumerator__Fuse_Controls_TextEdit_LineCacheLine;

struct List1_Enumerator__Fuse_Controls_TextEdit_LineCacheLine__uType : ::uStructType
{
    ::app::Uno::Collections::IEnumerator__Fuse_Controls_TextEdit_LineCacheLine __interface_0;
    ::app::Uno::IDisposable __interface_1;
    ::app::Uno::Collections::IEnumerator __interface_2;
};

List1_Enumerator__Fuse_Controls_TextEdit_LineCacheLine__uType* List1_Enumerator__Fuse_Controls_TextEdit_LineCacheLine__typeof();

void List1_Enumerator__Fuse_Controls_TextEdit_LineCacheLine___ObjInit(List1_Enumerator__Fuse_Controls_TextEdit_LineCacheLine* __this, ::app::Uno::Collections::List__Fuse_Controls_TextEdit_LineCacheLine* source);
void List1_Enumerator__Fuse_Controls_TextEdit_LineCacheLine__Dispose(List1_Enumerator__Fuse_Controls_TextEdit_LineCacheLine* __this);
::app::Fuse::Controls::TextEdit::LineCacheLine* List1_Enumerator__Fuse_Controls_TextEdit_LineCacheLine__get_Current(List1_Enumerator__Fuse_Controls_TextEdit_LineCacheLine* __this);
bool List1_Enumerator__Fuse_Controls_TextEdit_LineCacheLine__MoveNext(List1_Enumerator__Fuse_Controls_TextEdit_LineCacheLine* __this);
List1_Enumerator__Fuse_Controls_TextEdit_LineCacheLine List1_Enumerator__Fuse_Controls_TextEdit_LineCacheLine__New_1(::uStatic* __this, ::app::Uno::Collections::List__Fuse_Controls_TextEdit_LineCacheLine* source);
void List1_Enumerator__Fuse_Controls_TextEdit_LineCacheLine__Uno_Collections_IEnumerator_Reset(List1_Enumerator__Fuse_Controls_TextEdit_LineCacheLine* __this);

struct List1_Enumerator__Fuse_Controls_TextEdit_LineCacheLine
{
    ::uStrong< ::app::Uno::Collections::List__Fuse_Controls_TextEdit_LineCacheLine*> _source;
    int _version;
    int _iterator;
    ::uStrong< ::app::Fuse::Controls::TextEdit::LineCacheLine*> _current;

    void _ObjInit(::app::Uno::Collections::List__Fuse_Controls_TextEdit_LineCacheLine* source) { List1_Enumerator__Fuse_Controls_TextEdit_LineCacheLine___ObjInit(this, source); }
    void Dispose() { List1_Enumerator__Fuse_Controls_TextEdit_LineCacheLine__Dispose(this); }
    ::app::Fuse::Controls::TextEdit::LineCacheLine* Current() { return List1_Enumerator__Fuse_Controls_TextEdit_LineCacheLine__get_Current(this); }
    bool MoveNext() { return List1_Enumerator__Fuse_Controls_TextEdit_LineCacheLine__MoveNext(this); }
};

}}}


#endif
