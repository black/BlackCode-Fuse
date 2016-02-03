// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Collections\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_UNO_COLLECTIONS_LIST1_ENUMERATOR__FUSE_INPUT_POINTER_P_E_L_HOLDER_H__
#define __APP_UNO_COLLECTIONS_LIST1_ENUMERATOR__FUSE_INPUT_POINTER_P_E_L_HOLDER_H__

#include <app/Uno.Collections.IEnumerator.h>
#include <app/Uno.Collections.IEnumerator__Fuse_Input_Pointer_PELHolder.h>
#include <app/Uno.IDisposable.h>
#include <app/Uno.Object.h>
#include <Uno.h>
namespace app { namespace Fuse { namespace Input { struct Pointer_PELHolder; } } }
namespace app { namespace Uno { namespace Collections { struct List__Fuse_Input_Pointer_PELHolder; } } }

namespace app {
namespace Uno {
namespace Collections {

struct List1_Enumerator__Fuse_Input_Pointer_PELHolder;

struct List1_Enumerator__Fuse_Input_Pointer_PELHolder__uType : ::uStructType
{
    ::app::Uno::Collections::IEnumerator__Fuse_Input_Pointer_PELHolder __interface_0;
    ::app::Uno::IDisposable __interface_1;
    ::app::Uno::Collections::IEnumerator __interface_2;
};

List1_Enumerator__Fuse_Input_Pointer_PELHolder__uType* List1_Enumerator__Fuse_Input_Pointer_PELHolder__typeof();

void List1_Enumerator__Fuse_Input_Pointer_PELHolder___ObjInit(List1_Enumerator__Fuse_Input_Pointer_PELHolder* __this, ::app::Uno::Collections::List__Fuse_Input_Pointer_PELHolder* source);
void List1_Enumerator__Fuse_Input_Pointer_PELHolder__Dispose(List1_Enumerator__Fuse_Input_Pointer_PELHolder* __this);
::app::Fuse::Input::Pointer_PELHolder* List1_Enumerator__Fuse_Input_Pointer_PELHolder__get_Current(List1_Enumerator__Fuse_Input_Pointer_PELHolder* __this);
bool List1_Enumerator__Fuse_Input_Pointer_PELHolder__MoveNext(List1_Enumerator__Fuse_Input_Pointer_PELHolder* __this);
List1_Enumerator__Fuse_Input_Pointer_PELHolder List1_Enumerator__Fuse_Input_Pointer_PELHolder__New_1(::uStatic* __this, ::app::Uno::Collections::List__Fuse_Input_Pointer_PELHolder* source);
void List1_Enumerator__Fuse_Input_Pointer_PELHolder__Uno_Collections_IEnumerator_Reset(List1_Enumerator__Fuse_Input_Pointer_PELHolder* __this);

struct List1_Enumerator__Fuse_Input_Pointer_PELHolder
{
    ::uStrong< ::app::Uno::Collections::List__Fuse_Input_Pointer_PELHolder*> _source;
    int _version;
    int _iterator;
    ::uStrong< ::app::Fuse::Input::Pointer_PELHolder*> _current;

    void _ObjInit(::app::Uno::Collections::List__Fuse_Input_Pointer_PELHolder* source) { List1_Enumerator__Fuse_Input_Pointer_PELHolder___ObjInit(this, source); }
    void Dispose() { List1_Enumerator__Fuse_Input_Pointer_PELHolder__Dispose(this); }
    ::app::Fuse::Input::Pointer_PELHolder* Current() { return List1_Enumerator__Fuse_Input_Pointer_PELHolder__get_Current(this); }
    bool MoveNext() { return List1_Enumerator__Fuse_Input_Pointer_PELHolder__MoveNext(this); }
};

}}}


#endif
