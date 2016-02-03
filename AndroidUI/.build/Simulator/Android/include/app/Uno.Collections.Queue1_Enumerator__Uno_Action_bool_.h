// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Collections\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_UNO_COLLECTIONS_QUEUE1_ENUMERATOR__UNO_ACTION_BOOL__H__
#define __APP_UNO_COLLECTIONS_QUEUE1_ENUMERATOR__UNO_ACTION_BOOL__H__

#include <app/Uno.Collections.IEnumerator.h>
#include <app/Uno.IDisposable.h>
#include <app/Uno.Object.h>
#include <Uno.h>
namespace app { namespace Uno { namespace Collections { struct Queue__Uno_Action_bool_; } } }

namespace app {
namespace Uno {
namespace Collections {

struct Queue1_Enumerator__Uno_Action_bool_;

struct Queue1_Enumerator__Uno_Action_bool___uType : ::uStructType
{
    ::app::Uno::IDisposable __interface_0;
    ::app::Uno::Collections::IEnumerator __interface_1;
};

Queue1_Enumerator__Uno_Action_bool___uType* Queue1_Enumerator__Uno_Action_bool___typeof();

void Queue1_Enumerator__Uno_Action_bool____ObjInit(Queue1_Enumerator__Uno_Action_bool_* __this, ::app::Uno::Collections::Queue__Uno_Action_bool_* source);
void Queue1_Enumerator__Uno_Action_bool___Dispose(Queue1_Enumerator__Uno_Action_bool_* __this);
bool Queue1_Enumerator__Uno_Action_bool___MoveNext(Queue1_Enumerator__Uno_Action_bool_* __this);
Queue1_Enumerator__Uno_Action_bool_ Queue1_Enumerator__Uno_Action_bool___New_1(::uStatic* __this, ::app::Uno::Collections::Queue__Uno_Action_bool_* source);
void Queue1_Enumerator__Uno_Action_bool___Uno_Collections_IEnumerator_Reset(Queue1_Enumerator__Uno_Action_bool_* __this);

struct Queue1_Enumerator__Uno_Action_bool_
{
    ::uStrong< ::app::Uno::Collections::Queue__Uno_Action_bool_*> _source;
    int _version;
    int _index;
    ::uStrong< ::uDelegate*> _current;

    void _ObjInit(::app::Uno::Collections::Queue__Uno_Action_bool_* source) { Queue1_Enumerator__Uno_Action_bool____ObjInit(this, source); }
    void Dispose() { Queue1_Enumerator__Uno_Action_bool___Dispose(this); }
    bool MoveNext() { return Queue1_Enumerator__Uno_Action_bool___MoveNext(this); }
};

}}}


#endif
