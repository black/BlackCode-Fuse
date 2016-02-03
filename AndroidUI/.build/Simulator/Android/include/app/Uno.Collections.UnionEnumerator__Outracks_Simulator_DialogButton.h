// This file was generated based on 'C:\ProgramData\Uno\Packages\Uno.Collections\0.13.2\Extensions\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_UNO_COLLECTIONS_UNION_ENUMERATOR__OUTRACKS_SIMULATOR_DIALOG_BUTTON_H__
#define __APP_UNO_COLLECTIONS_UNION_ENUMERATOR__OUTRACKS_SIMULATOR_DIALOG_BUTTON_H__

#include <app/Uno.Collections.IEnumerator.h>
#include <app/Uno.Collections.IEnumerator__Outracks_Simulator_DialogButton.h>
#include <app/Uno.IDisposable.h>
#include <app/Uno.Object.h>
#include <Uno.h>
namespace app { namespace Outracks { namespace Simulator { struct DialogButton; } } }

namespace app {
namespace Uno {
namespace Collections {

struct UnionEnumerator__Outracks_Simulator_DialogButton;

struct UnionEnumerator__Outracks_Simulator_DialogButton__uType : ::uClassType
{
    ::app::Uno::Collections::IEnumerator__Outracks_Simulator_DialogButton __interface_0;
    ::app::Uno::IDisposable __interface_1;
    ::app::Uno::Collections::IEnumerator __interface_2;
};

UnionEnumerator__Outracks_Simulator_DialogButton__uType* UnionEnumerator__Outracks_Simulator_DialogButton__typeof();

void UnionEnumerator__Outracks_Simulator_DialogButton___ObjInit(UnionEnumerator__Outracks_Simulator_DialogButton* __this, ::uObject* first, ::uObject* second);
void UnionEnumerator__Outracks_Simulator_DialogButton__Dispose(UnionEnumerator__Outracks_Simulator_DialogButton* __this);
::app::Outracks::Simulator::DialogButton* UnionEnumerator__Outracks_Simulator_DialogButton__get_Current(UnionEnumerator__Outracks_Simulator_DialogButton* __this);
bool UnionEnumerator__Outracks_Simulator_DialogButton__MoveNext(UnionEnumerator__Outracks_Simulator_DialogButton* __this);
UnionEnumerator__Outracks_Simulator_DialogButton* UnionEnumerator__Outracks_Simulator_DialogButton__New_1(::uStatic* __this, ::uObject* first, ::uObject* second);
void UnionEnumerator__Outracks_Simulator_DialogButton__Reset(UnionEnumerator__Outracks_Simulator_DialogButton* __this);

struct UnionEnumerator__Outracks_Simulator_DialogButton : ::uObject
{
    ::uStrong< ::uObject*> _current;
    ::uStrong< ::uObject*> _first;
    ::uStrong< ::uObject*> _second;

    void _ObjInit(::uObject* first, ::uObject* second) { UnionEnumerator__Outracks_Simulator_DialogButton___ObjInit(this, first, second); }
    void Dispose() { UnionEnumerator__Outracks_Simulator_DialogButton__Dispose(this); }
    ::app::Outracks::Simulator::DialogButton* Current() { return UnionEnumerator__Outracks_Simulator_DialogButton__get_Current(this); }
    bool MoveNext() { return UnionEnumerator__Outracks_Simulator_DialogButton__MoveNext(this); }
    void Reset() { UnionEnumerator__Outracks_Simulator_DialogButton__Reset(this); }
};

}}}


#endif
