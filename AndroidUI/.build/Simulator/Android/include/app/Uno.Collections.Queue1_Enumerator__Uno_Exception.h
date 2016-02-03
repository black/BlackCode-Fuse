// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Collections\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_UNO_COLLECTIONS_QUEUE1_ENUMERATOR__UNO_EXCEPTION_H__
#define __APP_UNO_COLLECTIONS_QUEUE1_ENUMERATOR__UNO_EXCEPTION_H__

#include <app/Uno.Collections.IEnumerator.h>
#include <app/Uno.Collections.IEnumerator__Uno_Exception.h>
#include <app/Uno.IDisposable.h>
#include <app/Uno.Object.h>
#include <Uno.h>
namespace app { namespace Uno { namespace Collections { struct Queue__Uno_Exception; } } }
namespace app { namespace Uno { struct Exception; } }

namespace app {
namespace Uno {
namespace Collections {

struct Queue1_Enumerator__Uno_Exception;

struct Queue1_Enumerator__Uno_Exception__uType : ::uStructType
{
    ::app::Uno::Collections::IEnumerator__Uno_Exception __interface_0;
    ::app::Uno::IDisposable __interface_1;
    ::app::Uno::Collections::IEnumerator __interface_2;
};

Queue1_Enumerator__Uno_Exception__uType* Queue1_Enumerator__Uno_Exception__typeof();

void Queue1_Enumerator__Uno_Exception___ObjInit(Queue1_Enumerator__Uno_Exception* __this, ::app::Uno::Collections::Queue__Uno_Exception* source);
void Queue1_Enumerator__Uno_Exception__Dispose(Queue1_Enumerator__Uno_Exception* __this);
::app::Uno::Exception* Queue1_Enumerator__Uno_Exception__get_Current(Queue1_Enumerator__Uno_Exception* __this);
bool Queue1_Enumerator__Uno_Exception__MoveNext(Queue1_Enumerator__Uno_Exception* __this);
Queue1_Enumerator__Uno_Exception Queue1_Enumerator__Uno_Exception__New_1(::uStatic* __this, ::app::Uno::Collections::Queue__Uno_Exception* source);
void Queue1_Enumerator__Uno_Exception__Uno_Collections_IEnumerator_Reset(Queue1_Enumerator__Uno_Exception* __this);

struct Queue1_Enumerator__Uno_Exception
{
    ::uStrong< ::app::Uno::Collections::Queue__Uno_Exception*> _source;
    int _version;
    int _index;
    ::uStrong< ::app::Uno::Exception*> _current;

    void _ObjInit(::app::Uno::Collections::Queue__Uno_Exception* source) { Queue1_Enumerator__Uno_Exception___ObjInit(this, source); }
    void Dispose() { Queue1_Enumerator__Uno_Exception__Dispose(this); }
    ::app::Uno::Exception* Current() { return Queue1_Enumerator__Uno_Exception__get_Current(this); }
    bool MoveNext() { return Queue1_Enumerator__Uno_Exception__MoveNext(this); }
};

}}}


#endif
