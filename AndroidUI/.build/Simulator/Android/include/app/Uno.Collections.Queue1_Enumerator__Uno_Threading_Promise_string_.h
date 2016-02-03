// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Collections\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_UNO_COLLECTIONS_QUEUE1_ENUMERATOR__UNO_THREADING_PROMISE_STRING__H__
#define __APP_UNO_COLLECTIONS_QUEUE1_ENUMERATOR__UNO_THREADING_PROMISE_STRING__H__

#include <app/Uno.Collections.IEnumerator.h>
#include <app/Uno.IDisposable.h>
#include <app/Uno.Object.h>
#include <Uno.h>
namespace app { namespace Uno { namespace Collections { struct Queue__Uno_Threading_Promise_string_; } } }
namespace app { namespace Uno { namespace Threading { struct Promise__string; } } }

namespace app {
namespace Uno {
namespace Collections {

struct Queue1_Enumerator__Uno_Threading_Promise_string_;

struct Queue1_Enumerator__Uno_Threading_Promise_string___uType : ::uStructType
{
    ::app::Uno::IDisposable __interface_0;
    ::app::Uno::Collections::IEnumerator __interface_1;
};

Queue1_Enumerator__Uno_Threading_Promise_string___uType* Queue1_Enumerator__Uno_Threading_Promise_string___typeof();

void Queue1_Enumerator__Uno_Threading_Promise_string____ObjInit(Queue1_Enumerator__Uno_Threading_Promise_string_* __this, ::app::Uno::Collections::Queue__Uno_Threading_Promise_string_* source);
void Queue1_Enumerator__Uno_Threading_Promise_string___Dispose(Queue1_Enumerator__Uno_Threading_Promise_string_* __this);
bool Queue1_Enumerator__Uno_Threading_Promise_string___MoveNext(Queue1_Enumerator__Uno_Threading_Promise_string_* __this);
Queue1_Enumerator__Uno_Threading_Promise_string_ Queue1_Enumerator__Uno_Threading_Promise_string___New_1(::uStatic* __this, ::app::Uno::Collections::Queue__Uno_Threading_Promise_string_* source);
void Queue1_Enumerator__Uno_Threading_Promise_string___Uno_Collections_IEnumerator_Reset(Queue1_Enumerator__Uno_Threading_Promise_string_* __this);

struct Queue1_Enumerator__Uno_Threading_Promise_string_
{
    ::uStrong< ::app::Uno::Collections::Queue__Uno_Threading_Promise_string_*> _source;
    int _version;
    int _index;
    ::uStrong< ::app::Uno::Threading::Promise__string*> _current;

    void _ObjInit(::app::Uno::Collections::Queue__Uno_Threading_Promise_string_* source) { Queue1_Enumerator__Uno_Threading_Promise_string____ObjInit(this, source); }
    void Dispose() { Queue1_Enumerator__Uno_Threading_Promise_string___Dispose(this); }
    bool MoveNext() { return Queue1_Enumerator__Uno_Threading_Promise_string___MoveNext(this); }
};

}}}


#endif
