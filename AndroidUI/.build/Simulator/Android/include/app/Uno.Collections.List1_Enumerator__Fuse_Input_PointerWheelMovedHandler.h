// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Collections\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_UNO_COLLECTIONS_LIST1_ENUMERATOR__FUSE_INPUT_POINTER_WHEEL_MOVED_HANDLER_H__
#define __APP_UNO_COLLECTIONS_LIST1_ENUMERATOR__FUSE_INPUT_POINTER_WHEEL_MOVED_HANDLER_H__

#include <app/Uno.Collections.IEnumerator.h>
#include <app/Uno.Collections.IEnumerator__Fuse_Input_PointerWheelMovedHandler.h>
#include <app/Uno.IDisposable.h>
#include <app/Uno.Object.h>
#include <Uno.h>
namespace app { namespace Uno { namespace Collections { struct List__Fuse_Input_PointerWheelMovedHandler; } } }

namespace app {
namespace Uno {
namespace Collections {

struct List1_Enumerator__Fuse_Input_PointerWheelMovedHandler;

struct List1_Enumerator__Fuse_Input_PointerWheelMovedHandler__uType : ::uStructType
{
    ::app::Uno::Collections::IEnumerator__Fuse_Input_PointerWheelMovedHandler __interface_0;
    ::app::Uno::IDisposable __interface_1;
    ::app::Uno::Collections::IEnumerator __interface_2;
};

List1_Enumerator__Fuse_Input_PointerWheelMovedHandler__uType* List1_Enumerator__Fuse_Input_PointerWheelMovedHandler__typeof();

void List1_Enumerator__Fuse_Input_PointerWheelMovedHandler___ObjInit(List1_Enumerator__Fuse_Input_PointerWheelMovedHandler* __this, ::app::Uno::Collections::List__Fuse_Input_PointerWheelMovedHandler* source);
void List1_Enumerator__Fuse_Input_PointerWheelMovedHandler__Dispose(List1_Enumerator__Fuse_Input_PointerWheelMovedHandler* __this);
::uDelegate* List1_Enumerator__Fuse_Input_PointerWheelMovedHandler__get_Current(List1_Enumerator__Fuse_Input_PointerWheelMovedHandler* __this);
bool List1_Enumerator__Fuse_Input_PointerWheelMovedHandler__MoveNext(List1_Enumerator__Fuse_Input_PointerWheelMovedHandler* __this);
List1_Enumerator__Fuse_Input_PointerWheelMovedHandler List1_Enumerator__Fuse_Input_PointerWheelMovedHandler__New_1(::uStatic* __this, ::app::Uno::Collections::List__Fuse_Input_PointerWheelMovedHandler* source);
void List1_Enumerator__Fuse_Input_PointerWheelMovedHandler__Uno_Collections_IEnumerator_Reset(List1_Enumerator__Fuse_Input_PointerWheelMovedHandler* __this);

struct List1_Enumerator__Fuse_Input_PointerWheelMovedHandler
{
    ::uStrong< ::app::Uno::Collections::List__Fuse_Input_PointerWheelMovedHandler*> _source;
    int _version;
    int _iterator;
    ::uStrong< ::uDelegate*> _current;

    void _ObjInit(::app::Uno::Collections::List__Fuse_Input_PointerWheelMovedHandler* source) { List1_Enumerator__Fuse_Input_PointerWheelMovedHandler___ObjInit(this, source); }
    void Dispose() { List1_Enumerator__Fuse_Input_PointerWheelMovedHandler__Dispose(this); }
    ::uDelegate* Current() { return List1_Enumerator__Fuse_Input_PointerWheelMovedHandler__get_Current(this); }
    bool MoveNext() { return List1_Enumerator__Fuse_Input_PointerWheelMovedHandler__MoveNext(this); }
};

}}}


#endif
