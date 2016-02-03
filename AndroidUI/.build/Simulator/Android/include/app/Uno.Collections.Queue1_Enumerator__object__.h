// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Collections\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_UNO_COLLECTIONS_QUEUE1_ENUMERATOR__OBJECT___H__
#define __APP_UNO_COLLECTIONS_QUEUE1_ENUMERATOR__OBJECT___H__

#include <app/Uno.Collections.IEnumerator.h>
#include <app/Uno.IDisposable.h>
#include <app/Uno.Object.h>
#include <Uno.h>
namespace app { namespace Uno { namespace Collections { struct Queue__object__; } } }

namespace app {
namespace Uno {
namespace Collections {

struct Queue1_Enumerator__object__;

struct Queue1_Enumerator__object____uType : ::uStructType
{
    ::app::Uno::IDisposable __interface_0;
    ::app::Uno::Collections::IEnumerator __interface_1;
};

Queue1_Enumerator__object____uType* Queue1_Enumerator__object____typeof();

void Queue1_Enumerator__object_____ObjInit(Queue1_Enumerator__object__* __this, ::app::Uno::Collections::Queue__object__* source);
void Queue1_Enumerator__object____Dispose(Queue1_Enumerator__object__* __this);
bool Queue1_Enumerator__object____MoveNext(Queue1_Enumerator__object__* __this);
Queue1_Enumerator__object__ Queue1_Enumerator__object____New_1(::uStatic* __this, ::app::Uno::Collections::Queue__object__* source);
void Queue1_Enumerator__object____Uno_Collections_IEnumerator_Reset(Queue1_Enumerator__object__* __this);

struct Queue1_Enumerator__object__
{
    ::uStrong< ::app::Uno::Collections::Queue__object__*> _source;
    int _version;
    int _index;
    ::uStrong< ::uArray*> _current;

    void _ObjInit(::app::Uno::Collections::Queue__object__* source) { Queue1_Enumerator__object_____ObjInit(this, source); }
    void Dispose() { Queue1_Enumerator__object____Dispose(this); }
    bool MoveNext() { return Queue1_Enumerator__object____MoveNext(this); }
};

}}}


#endif
