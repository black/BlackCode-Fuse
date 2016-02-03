// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Collections\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_UNO_COLLECTIONS_LIST1_ENUMERATOR__FUSE_REACTIVE_CASE_H__
#define __APP_UNO_COLLECTIONS_LIST1_ENUMERATOR__FUSE_REACTIVE_CASE_H__

#include <app/Uno.Collections.IEnumerator.h>
#include <app/Uno.Collections.IEnumerator__Fuse_Reactive_Case.h>
#include <app/Uno.IDisposable.h>
#include <app/Uno.Object.h>
#include <Uno.h>
namespace app { namespace Fuse { namespace Reactive { struct Case; } } }
namespace app { namespace Uno { namespace Collections { struct List__Fuse_Reactive_Case; } } }

namespace app {
namespace Uno {
namespace Collections {

struct List1_Enumerator__Fuse_Reactive_Case;

struct List1_Enumerator__Fuse_Reactive_Case__uType : ::uStructType
{
    ::app::Uno::Collections::IEnumerator__Fuse_Reactive_Case __interface_0;
    ::app::Uno::IDisposable __interface_1;
    ::app::Uno::Collections::IEnumerator __interface_2;
};

List1_Enumerator__Fuse_Reactive_Case__uType* List1_Enumerator__Fuse_Reactive_Case__typeof();

void List1_Enumerator__Fuse_Reactive_Case___ObjInit(List1_Enumerator__Fuse_Reactive_Case* __this, ::app::Uno::Collections::List__Fuse_Reactive_Case* source);
void List1_Enumerator__Fuse_Reactive_Case__Dispose(List1_Enumerator__Fuse_Reactive_Case* __this);
::app::Fuse::Reactive::Case* List1_Enumerator__Fuse_Reactive_Case__get_Current(List1_Enumerator__Fuse_Reactive_Case* __this);
bool List1_Enumerator__Fuse_Reactive_Case__MoveNext(List1_Enumerator__Fuse_Reactive_Case* __this);
List1_Enumerator__Fuse_Reactive_Case List1_Enumerator__Fuse_Reactive_Case__New_1(::uStatic* __this, ::app::Uno::Collections::List__Fuse_Reactive_Case* source);
void List1_Enumerator__Fuse_Reactive_Case__Uno_Collections_IEnumerator_Reset(List1_Enumerator__Fuse_Reactive_Case* __this);

struct List1_Enumerator__Fuse_Reactive_Case
{
    ::uStrong< ::app::Uno::Collections::List__Fuse_Reactive_Case*> _source;
    int _version;
    int _iterator;
    ::uStrong< ::app::Fuse::Reactive::Case*> _current;

    void _ObjInit(::app::Uno::Collections::List__Fuse_Reactive_Case* source) { List1_Enumerator__Fuse_Reactive_Case___ObjInit(this, source); }
    void Dispose() { List1_Enumerator__Fuse_Reactive_Case__Dispose(this); }
    ::app::Fuse::Reactive::Case* Current() { return List1_Enumerator__Fuse_Reactive_Case__get_Current(this); }
    bool MoveNext() { return List1_Enumerator__Fuse_Reactive_Case__MoveNext(this); }
};

}}}


#endif
