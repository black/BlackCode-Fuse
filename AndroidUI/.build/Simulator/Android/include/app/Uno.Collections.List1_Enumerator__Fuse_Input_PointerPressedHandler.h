// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Collections\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_UNO_COLLECTIONS_LIST1_ENUMERATOR__FUSE_INPUT_POINTER_PRESSED_HANDLER_H__
#define __APP_UNO_COLLECTIONS_LIST1_ENUMERATOR__FUSE_INPUT_POINTER_PRESSED_HANDLER_H__

#include <app/Uno.Collections.IEnumerator.h>
#include <app/Uno.Collections.IEnumerator__Fuse_Input_PointerPressedHandler.h>
#include <app/Uno.IDisposable.h>
#include <app/Uno.Object.h>
#include <Uno.h>
namespace app { namespace Uno { namespace Collections { struct List__Fuse_Input_PointerPressedHandler; } } }

namespace app {
namespace Uno {
namespace Collections {

struct List1_Enumerator__Fuse_Input_PointerPressedHandler;

struct List1_Enumerator__Fuse_Input_PointerPressedHandler__uType : ::uStructType
{
    ::app::Uno::Collections::IEnumerator__Fuse_Input_PointerPressedHandler __interface_0;
    ::app::Uno::IDisposable __interface_1;
    ::app::Uno::Collections::IEnumerator __interface_2;
};

List1_Enumerator__Fuse_Input_PointerPressedHandler__uType* List1_Enumerator__Fuse_Input_PointerPressedHandler__typeof();

void List1_Enumerator__Fuse_Input_PointerPressedHandler___ObjInit(List1_Enumerator__Fuse_Input_PointerPressedHandler* __this, ::app::Uno::Collections::List__Fuse_Input_PointerPressedHandler* source);
void List1_Enumerator__Fuse_Input_PointerPressedHandler__Dispose(List1_Enumerator__Fuse_Input_PointerPressedHandler* __this);
::uDelegate* List1_Enumerator__Fuse_Input_PointerPressedHandler__get_Current(List1_Enumerator__Fuse_Input_PointerPressedHandler* __this);
bool List1_Enumerator__Fuse_Input_PointerPressedHandler__MoveNext(List1_Enumerator__Fuse_Input_PointerPressedHandler* __this);
List1_Enumerator__Fuse_Input_PointerPressedHandler List1_Enumerator__Fuse_Input_PointerPressedHandler__New_1(::uStatic* __this, ::app::Uno::Collections::List__Fuse_Input_PointerPressedHandler* source);
void List1_Enumerator__Fuse_Input_PointerPressedHandler__Uno_Collections_IEnumerator_Reset(List1_Enumerator__Fuse_Input_PointerPressedHandler* __this);

struct List1_Enumerator__Fuse_Input_PointerPressedHandler
{
    ::uStrong< ::app::Uno::Collections::List__Fuse_Input_PointerPressedHandler*> _source;
    int _version;
    int _iterator;
    ::uStrong< ::uDelegate*> _current;

    void _ObjInit(::app::Uno::Collections::List__Fuse_Input_PointerPressedHandler* source) { List1_Enumerator__Fuse_Input_PointerPressedHandler___ObjInit(this, source); }
    void Dispose() { List1_Enumerator__Fuse_Input_PointerPressedHandler__Dispose(this); }
    ::uDelegate* Current() { return List1_Enumerator__Fuse_Input_PointerPressedHandler__get_Current(this); }
    bool MoveNext() { return List1_Enumerator__Fuse_Input_PointerPressedHandler__MoveNext(this); }
};

}}}


#endif
