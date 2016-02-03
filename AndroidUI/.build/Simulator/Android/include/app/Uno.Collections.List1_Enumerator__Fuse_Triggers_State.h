// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Collections\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_UNO_COLLECTIONS_LIST1_ENUMERATOR__FUSE_TRIGGERS_STATE_H__
#define __APP_UNO_COLLECTIONS_LIST1_ENUMERATOR__FUSE_TRIGGERS_STATE_H__

#include <app/Uno.Collections.IEnumerator.h>
#include <app/Uno.Collections.IEnumerator__Fuse_Triggers_State.h>
#include <app/Uno.IDisposable.h>
#include <app/Uno.Object.h>
#include <Uno.h>
namespace app { namespace Fuse { namespace Triggers { struct State; } } }
namespace app { namespace Uno { namespace Collections { struct List__Fuse_Triggers_State; } } }

namespace app {
namespace Uno {
namespace Collections {

struct List1_Enumerator__Fuse_Triggers_State;

struct List1_Enumerator__Fuse_Triggers_State__uType : ::uStructType
{
    ::app::Uno::Collections::IEnumerator__Fuse_Triggers_State __interface_0;
    ::app::Uno::IDisposable __interface_1;
    ::app::Uno::Collections::IEnumerator __interface_2;
};

List1_Enumerator__Fuse_Triggers_State__uType* List1_Enumerator__Fuse_Triggers_State__typeof();

void List1_Enumerator__Fuse_Triggers_State___ObjInit(List1_Enumerator__Fuse_Triggers_State* __this, ::app::Uno::Collections::List__Fuse_Triggers_State* source);
void List1_Enumerator__Fuse_Triggers_State__Dispose(List1_Enumerator__Fuse_Triggers_State* __this);
::app::Fuse::Triggers::State* List1_Enumerator__Fuse_Triggers_State__get_Current(List1_Enumerator__Fuse_Triggers_State* __this);
bool List1_Enumerator__Fuse_Triggers_State__MoveNext(List1_Enumerator__Fuse_Triggers_State* __this);
List1_Enumerator__Fuse_Triggers_State List1_Enumerator__Fuse_Triggers_State__New_1(::uStatic* __this, ::app::Uno::Collections::List__Fuse_Triggers_State* source);
void List1_Enumerator__Fuse_Triggers_State__Uno_Collections_IEnumerator_Reset(List1_Enumerator__Fuse_Triggers_State* __this);

struct List1_Enumerator__Fuse_Triggers_State
{
    ::uStrong< ::app::Uno::Collections::List__Fuse_Triggers_State*> _source;
    int _version;
    int _iterator;
    ::uStrong< ::app::Fuse::Triggers::State*> _current;

    void _ObjInit(::app::Uno::Collections::List__Fuse_Triggers_State* source) { List1_Enumerator__Fuse_Triggers_State___ObjInit(this, source); }
    void Dispose() { List1_Enumerator__Fuse_Triggers_State__Dispose(this); }
    ::app::Fuse::Triggers::State* Current() { return List1_Enumerator__Fuse_Triggers_State__get_Current(this); }
    bool MoveNext() { return List1_Enumerator__Fuse_Triggers_State__MoveNext(this); }
};

}}}


#endif
