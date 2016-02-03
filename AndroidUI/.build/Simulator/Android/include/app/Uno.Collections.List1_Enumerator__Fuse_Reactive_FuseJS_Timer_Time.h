// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Collections\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_UNO_COLLECTIONS_LIST1_ENUMERATOR__FUSE_REACTIVE_FUSE_J_S_TIMER_TIME_H__
#define __APP_UNO_COLLECTIONS_LIST1_ENUMERATOR__FUSE_REACTIVE_FUSE_J_S_TIMER_TIME_H__

#include <app/Uno.Collections.IEnumerator.h>
#include <app/Uno.Collections.IEnumerator__Fuse_Reactive_FuseJS_Timer_Time.h>
#include <app/Uno.IDisposable.h>
#include <app/Uno.Object.h>
#include <Uno.h>
namespace app { namespace Fuse { namespace Reactive { namespace FuseJS { struct Timer_Time; } } } }
namespace app { namespace Uno { namespace Collections { struct List__Fuse_Reactive_FuseJS_Timer_Time; } } }

namespace app {
namespace Uno {
namespace Collections {

struct List1_Enumerator__Fuse_Reactive_FuseJS_Timer_Time;

struct List1_Enumerator__Fuse_Reactive_FuseJS_Timer_Time__uType : ::uStructType
{
    ::app::Uno::Collections::IEnumerator__Fuse_Reactive_FuseJS_Timer_Time __interface_0;
    ::app::Uno::IDisposable __interface_1;
    ::app::Uno::Collections::IEnumerator __interface_2;
};

List1_Enumerator__Fuse_Reactive_FuseJS_Timer_Time__uType* List1_Enumerator__Fuse_Reactive_FuseJS_Timer_Time__typeof();

void List1_Enumerator__Fuse_Reactive_FuseJS_Timer_Time___ObjInit(List1_Enumerator__Fuse_Reactive_FuseJS_Timer_Time* __this, ::app::Uno::Collections::List__Fuse_Reactive_FuseJS_Timer_Time* source);
void List1_Enumerator__Fuse_Reactive_FuseJS_Timer_Time__Dispose(List1_Enumerator__Fuse_Reactive_FuseJS_Timer_Time* __this);
::app::Fuse::Reactive::FuseJS::Timer_Time* List1_Enumerator__Fuse_Reactive_FuseJS_Timer_Time__get_Current(List1_Enumerator__Fuse_Reactive_FuseJS_Timer_Time* __this);
bool List1_Enumerator__Fuse_Reactive_FuseJS_Timer_Time__MoveNext(List1_Enumerator__Fuse_Reactive_FuseJS_Timer_Time* __this);
List1_Enumerator__Fuse_Reactive_FuseJS_Timer_Time List1_Enumerator__Fuse_Reactive_FuseJS_Timer_Time__New_1(::uStatic* __this, ::app::Uno::Collections::List__Fuse_Reactive_FuseJS_Timer_Time* source);
void List1_Enumerator__Fuse_Reactive_FuseJS_Timer_Time__Uno_Collections_IEnumerator_Reset(List1_Enumerator__Fuse_Reactive_FuseJS_Timer_Time* __this);

struct List1_Enumerator__Fuse_Reactive_FuseJS_Timer_Time
{
    ::uStrong< ::app::Uno::Collections::List__Fuse_Reactive_FuseJS_Timer_Time*> _source;
    int _version;
    int _iterator;
    ::uStrong< ::app::Fuse::Reactive::FuseJS::Timer_Time*> _current;

    void _ObjInit(::app::Uno::Collections::List__Fuse_Reactive_FuseJS_Timer_Time* source) { List1_Enumerator__Fuse_Reactive_FuseJS_Timer_Time___ObjInit(this, source); }
    void Dispose() { List1_Enumerator__Fuse_Reactive_FuseJS_Timer_Time__Dispose(this); }
    ::app::Fuse::Reactive::FuseJS::Timer_Time* Current() { return List1_Enumerator__Fuse_Reactive_FuseJS_Timer_Time__get_Current(this); }
    bool MoveNext() { return List1_Enumerator__Fuse_Reactive_FuseJS_Timer_Time__MoveNext(this); }
};

}}}


#endif
