// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Collections\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_UNO_COLLECTIONS_LIST1_ENUMERATOR__FUSE_INPUT_IS_FOCUSABLE_CHANGED_HANDLER_H__
#define __APP_UNO_COLLECTIONS_LIST1_ENUMERATOR__FUSE_INPUT_IS_FOCUSABLE_CHANGED_HANDLER_H__

#include <app/Uno.Collections.IEnumerator.h>
#include <app/Uno.Collections.IEnumerator__Fuse_Input_IsFocusableChangedHandler.h>
#include <app/Uno.IDisposable.h>
#include <app/Uno.Object.h>
#include <Uno.h>
namespace app { namespace Uno { namespace Collections { struct List__Fuse_Input_IsFocusableChangedHandler; } } }

namespace app {
namespace Uno {
namespace Collections {

struct List1_Enumerator__Fuse_Input_IsFocusableChangedHandler;

struct List1_Enumerator__Fuse_Input_IsFocusableChangedHandler__uType : ::uStructType
{
    ::app::Uno::Collections::IEnumerator__Fuse_Input_IsFocusableChangedHandler __interface_0;
    ::app::Uno::IDisposable __interface_1;
    ::app::Uno::Collections::IEnumerator __interface_2;
};

List1_Enumerator__Fuse_Input_IsFocusableChangedHandler__uType* List1_Enumerator__Fuse_Input_IsFocusableChangedHandler__typeof();

void List1_Enumerator__Fuse_Input_IsFocusableChangedHandler___ObjInit(List1_Enumerator__Fuse_Input_IsFocusableChangedHandler* __this, ::app::Uno::Collections::List__Fuse_Input_IsFocusableChangedHandler* source);
void List1_Enumerator__Fuse_Input_IsFocusableChangedHandler__Dispose(List1_Enumerator__Fuse_Input_IsFocusableChangedHandler* __this);
::uDelegate* List1_Enumerator__Fuse_Input_IsFocusableChangedHandler__get_Current(List1_Enumerator__Fuse_Input_IsFocusableChangedHandler* __this);
bool List1_Enumerator__Fuse_Input_IsFocusableChangedHandler__MoveNext(List1_Enumerator__Fuse_Input_IsFocusableChangedHandler* __this);
List1_Enumerator__Fuse_Input_IsFocusableChangedHandler List1_Enumerator__Fuse_Input_IsFocusableChangedHandler__New_1(::uStatic* __this, ::app::Uno::Collections::List__Fuse_Input_IsFocusableChangedHandler* source);
void List1_Enumerator__Fuse_Input_IsFocusableChangedHandler__Uno_Collections_IEnumerator_Reset(List1_Enumerator__Fuse_Input_IsFocusableChangedHandler* __this);

struct List1_Enumerator__Fuse_Input_IsFocusableChangedHandler
{
    ::uStrong< ::app::Uno::Collections::List__Fuse_Input_IsFocusableChangedHandler*> _source;
    int _version;
    int _iterator;
    ::uStrong< ::uDelegate*> _current;

    void _ObjInit(::app::Uno::Collections::List__Fuse_Input_IsFocusableChangedHandler* source) { List1_Enumerator__Fuse_Input_IsFocusableChangedHandler___ObjInit(this, source); }
    void Dispose() { List1_Enumerator__Fuse_Input_IsFocusableChangedHandler__Dispose(this); }
    ::uDelegate* Current() { return List1_Enumerator__Fuse_Input_IsFocusableChangedHandler__get_Current(this); }
    bool MoveNext() { return List1_Enumerator__Fuse_Input_IsFocusableChangedHandler__MoveNext(this); }
};

}}}


#endif
