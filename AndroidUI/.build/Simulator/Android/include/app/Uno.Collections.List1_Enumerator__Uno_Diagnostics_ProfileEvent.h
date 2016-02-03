// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Collections\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_UNO_COLLECTIONS_LIST1_ENUMERATOR__UNO_DIAGNOSTICS_PROFILE_EVENT_H__
#define __APP_UNO_COLLECTIONS_LIST1_ENUMERATOR__UNO_DIAGNOSTICS_PROFILE_EVENT_H__

#include <app/Uno.Collections.IEnumerator.h>
#include <app/Uno.Collections.IEnumerator__Uno_Diagnostics_ProfileEvent.h>
#include <app/Uno.IDisposable.h>
#include <app/Uno.Object.h>
#include <Uno.h>
namespace app { namespace Uno { namespace Collections { struct List__Uno_Diagnostics_ProfileEvent; } } }
namespace app { namespace Uno { namespace Diagnostics { struct ProfileEvent; } } }

namespace app {
namespace Uno {
namespace Collections {

struct List1_Enumerator__Uno_Diagnostics_ProfileEvent;

struct List1_Enumerator__Uno_Diagnostics_ProfileEvent__uType : ::uStructType
{
    ::app::Uno::Collections::IEnumerator__Uno_Diagnostics_ProfileEvent __interface_0;
    ::app::Uno::IDisposable __interface_1;
    ::app::Uno::Collections::IEnumerator __interface_2;
};

List1_Enumerator__Uno_Diagnostics_ProfileEvent__uType* List1_Enumerator__Uno_Diagnostics_ProfileEvent__typeof();

void List1_Enumerator__Uno_Diagnostics_ProfileEvent___ObjInit(List1_Enumerator__Uno_Diagnostics_ProfileEvent* __this, ::app::Uno::Collections::List__Uno_Diagnostics_ProfileEvent* source);
void List1_Enumerator__Uno_Diagnostics_ProfileEvent__Dispose(List1_Enumerator__Uno_Diagnostics_ProfileEvent* __this);
::app::Uno::Diagnostics::ProfileEvent* List1_Enumerator__Uno_Diagnostics_ProfileEvent__get_Current(List1_Enumerator__Uno_Diagnostics_ProfileEvent* __this);
bool List1_Enumerator__Uno_Diagnostics_ProfileEvent__MoveNext(List1_Enumerator__Uno_Diagnostics_ProfileEvent* __this);
List1_Enumerator__Uno_Diagnostics_ProfileEvent List1_Enumerator__Uno_Diagnostics_ProfileEvent__New_1(::uStatic* __this, ::app::Uno::Collections::List__Uno_Diagnostics_ProfileEvent* source);
void List1_Enumerator__Uno_Diagnostics_ProfileEvent__Uno_Collections_IEnumerator_Reset(List1_Enumerator__Uno_Diagnostics_ProfileEvent* __this);

struct List1_Enumerator__Uno_Diagnostics_ProfileEvent
{
    ::uStrong< ::app::Uno::Collections::List__Uno_Diagnostics_ProfileEvent*> _source;
    int _version;
    int _iterator;
    ::uStrong< ::app::Uno::Diagnostics::ProfileEvent*> _current;

    void _ObjInit(::app::Uno::Collections::List__Uno_Diagnostics_ProfileEvent* source) { List1_Enumerator__Uno_Diagnostics_ProfileEvent___ObjInit(this, source); }
    void Dispose() { List1_Enumerator__Uno_Diagnostics_ProfileEvent__Dispose(this); }
    ::app::Uno::Diagnostics::ProfileEvent* Current() { return List1_Enumerator__Uno_Diagnostics_ProfileEvent__get_Current(this); }
    bool MoveNext() { return List1_Enumerator__Uno_Diagnostics_ProfileEvent__MoveNext(this); }
};

}}}


#endif
