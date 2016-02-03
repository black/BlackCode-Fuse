// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Collections\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_UNO_COLLECTIONS_LIST1_ENUMERATOR__FUSE_INPUT_POINTER_ENTERED_HANDLER_H__
#define __APP_UNO_COLLECTIONS_LIST1_ENUMERATOR__FUSE_INPUT_POINTER_ENTERED_HANDLER_H__

#include <app/Uno.Collections.IEnumerator.h>
#include <app/Uno.Collections.IEnumerator__Fuse_Input_PointerEnteredHandler.h>
#include <app/Uno.IDisposable.h>
#include <app/Uno.Object.h>
#include <Uno.h>
namespace app { namespace Uno { namespace Collections { struct List__Fuse_Input_PointerEnteredHandler; } } }

namespace app {
namespace Uno {
namespace Collections {

struct List1_Enumerator__Fuse_Input_PointerEnteredHandler;

struct List1_Enumerator__Fuse_Input_PointerEnteredHandler__uType : ::uStructType
{
    ::app::Uno::Collections::IEnumerator__Fuse_Input_PointerEnteredHandler __interface_0;
    ::app::Uno::IDisposable __interface_1;
    ::app::Uno::Collections::IEnumerator __interface_2;
};

List1_Enumerator__Fuse_Input_PointerEnteredHandler__uType* List1_Enumerator__Fuse_Input_PointerEnteredHandler__typeof();

void List1_Enumerator__Fuse_Input_PointerEnteredHandler___ObjInit(List1_Enumerator__Fuse_Input_PointerEnteredHandler* __this, ::app::Uno::Collections::List__Fuse_Input_PointerEnteredHandler* source);
void List1_Enumerator__Fuse_Input_PointerEnteredHandler__Dispose(List1_Enumerator__Fuse_Input_PointerEnteredHandler* __this);
::uDelegate* List1_Enumerator__Fuse_Input_PointerEnteredHandler__get_Current(List1_Enumerator__Fuse_Input_PointerEnteredHandler* __this);
bool List1_Enumerator__Fuse_Input_PointerEnteredHandler__MoveNext(List1_Enumerator__Fuse_Input_PointerEnteredHandler* __this);
List1_Enumerator__Fuse_Input_PointerEnteredHandler List1_Enumerator__Fuse_Input_PointerEnteredHandler__New_1(::uStatic* __this, ::app::Uno::Collections::List__Fuse_Input_PointerEnteredHandler* source);
void List1_Enumerator__Fuse_Input_PointerEnteredHandler__Uno_Collections_IEnumerator_Reset(List1_Enumerator__Fuse_Input_PointerEnteredHandler* __this);

struct List1_Enumerator__Fuse_Input_PointerEnteredHandler
{
    ::uStrong< ::app::Uno::Collections::List__Fuse_Input_PointerEnteredHandler*> _source;
    int _version;
    int _iterator;
    ::uStrong< ::uDelegate*> _current;

    void _ObjInit(::app::Uno::Collections::List__Fuse_Input_PointerEnteredHandler* source) { List1_Enumerator__Fuse_Input_PointerEnteredHandler___ObjInit(this, source); }
    void Dispose() { List1_Enumerator__Fuse_Input_PointerEnteredHandler__Dispose(this); }
    ::uDelegate* Current() { return List1_Enumerator__Fuse_Input_PointerEnteredHandler__get_Current(this); }
    bool MoveNext() { return List1_Enumerator__Fuse_Input_PointerEnteredHandler__MoveNext(this); }
};

}}}


#endif
