// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Collections\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_UNO_COLLECTIONS_LIST1_ENUMERATOR__BYTE_H__
#define __APP_UNO_COLLECTIONS_LIST1_ENUMERATOR__BYTE_H__

#include <app/Uno.Collections.IEnumerator.h>
#include <app/Uno.Collections.IEnumerator__byte.h>
#include <app/Uno.IDisposable.h>
#include <app/Uno.Object.h>
#include <Uno.h>
namespace app { namespace Uno { namespace Collections { struct List__byte; } } }

namespace app {
namespace Uno {
namespace Collections {

struct List1_Enumerator__byte;

struct List1_Enumerator__byte__uType : ::uStructType
{
    ::app::Uno::Collections::IEnumerator__byte __interface_0;
    ::app::Uno::IDisposable __interface_1;
    ::app::Uno::Collections::IEnumerator __interface_2;
};

List1_Enumerator__byte__uType* List1_Enumerator__byte__typeof();

void List1_Enumerator__byte___ObjInit(List1_Enumerator__byte* __this, ::app::Uno::Collections::List__byte* source);
void List1_Enumerator__byte__Dispose(List1_Enumerator__byte* __this);
::uByte List1_Enumerator__byte__get_Current(List1_Enumerator__byte* __this);
bool List1_Enumerator__byte__MoveNext(List1_Enumerator__byte* __this);
List1_Enumerator__byte List1_Enumerator__byte__New_1(::uStatic* __this, ::app::Uno::Collections::List__byte* source);
void List1_Enumerator__byte__Uno_Collections_IEnumerator_Reset(List1_Enumerator__byte* __this);

struct List1_Enumerator__byte
{
    ::uStrong< ::app::Uno::Collections::List__byte*> _source;
    int _version;
    int _iterator;
    ::uByte _current;

    void _ObjInit(::app::Uno::Collections::List__byte* source) { List1_Enumerator__byte___ObjInit(this, source); }
    void Dispose() { List1_Enumerator__byte__Dispose(this); }
    ::uByte Current() { return List1_Enumerator__byte__get_Current(this); }
    bool MoveNext() { return List1_Enumerator__byte__MoveNext(this); }
};

}}}


#endif
