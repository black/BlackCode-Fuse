// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Collections\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_UNO_COLLECTIONS_LIST1_ENUMERATOR__UNO_EXCEPTION_H__
#define __APP_UNO_COLLECTIONS_LIST1_ENUMERATOR__UNO_EXCEPTION_H__

#include <app/Uno.Collections.IEnumerator.h>
#include <app/Uno.Collections.IEnumerator__Uno_Exception.h>
#include <app/Uno.IDisposable.h>
#include <app/Uno.Object.h>
#include <Uno.h>
namespace app { namespace Uno { namespace Collections { struct List__Uno_Exception; } } }
namespace app { namespace Uno { struct Exception; } }

namespace app {
namespace Uno {
namespace Collections {

struct List1_Enumerator__Uno_Exception;

struct List1_Enumerator__Uno_Exception__uType : ::uStructType
{
    ::app::Uno::Collections::IEnumerator__Uno_Exception __interface_0;
    ::app::Uno::IDisposable __interface_1;
    ::app::Uno::Collections::IEnumerator __interface_2;
};

List1_Enumerator__Uno_Exception__uType* List1_Enumerator__Uno_Exception__typeof();

void List1_Enumerator__Uno_Exception___ObjInit(List1_Enumerator__Uno_Exception* __this, ::app::Uno::Collections::List__Uno_Exception* source);
void List1_Enumerator__Uno_Exception__Dispose(List1_Enumerator__Uno_Exception* __this);
::app::Uno::Exception* List1_Enumerator__Uno_Exception__get_Current(List1_Enumerator__Uno_Exception* __this);
bool List1_Enumerator__Uno_Exception__MoveNext(List1_Enumerator__Uno_Exception* __this);
List1_Enumerator__Uno_Exception List1_Enumerator__Uno_Exception__New_1(::uStatic* __this, ::app::Uno::Collections::List__Uno_Exception* source);
void List1_Enumerator__Uno_Exception__Uno_Collections_IEnumerator_Reset(List1_Enumerator__Uno_Exception* __this);

struct List1_Enumerator__Uno_Exception
{
    ::uStrong< ::app::Uno::Collections::List__Uno_Exception*> _source;
    int _version;
    int _iterator;
    ::uStrong< ::app::Uno::Exception*> _current;

    void _ObjInit(::app::Uno::Collections::List__Uno_Exception* source) { List1_Enumerator__Uno_Exception___ObjInit(this, source); }
    void Dispose() { List1_Enumerator__Uno_Exception__Dispose(this); }
    ::app::Uno::Exception* Current() { return List1_Enumerator__Uno_Exception__get_Current(this); }
    bool MoveNext() { return List1_Enumerator__Uno_Exception__MoveNext(this); }
};

}}}


#endif
