// This file was generated based on 'C:\ProgramData\Uno\Packages\Uno.Collections\0.13.2\Extensions\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_UNO_COLLECTIONS_UNION_ENUMERABLE__OUTRACKS_SIMULATOR_DIALOG_BUTTON_H__
#define __APP_UNO_COLLECTIONS_UNION_ENUMERABLE__OUTRACKS_SIMULATOR_DIALOG_BUTTON_H__

#include <app/Uno.Collections.IEnumerable__Outracks_Simulator_DialogButton.h>
#include <app/Uno.Object.h>
#include <Uno.h>

namespace app {
namespace Uno {
namespace Collections {

struct UnionEnumerable__Outracks_Simulator_DialogButton;

struct UnionEnumerable__Outracks_Simulator_DialogButton__uType : ::uClassType
{
    ::app::Uno::Collections::IEnumerable__Outracks_Simulator_DialogButton __interface_0;
};

UnionEnumerable__Outracks_Simulator_DialogButton__uType* UnionEnumerable__Outracks_Simulator_DialogButton__typeof();

void UnionEnumerable__Outracks_Simulator_DialogButton___ObjInit(UnionEnumerable__Outracks_Simulator_DialogButton* __this, ::uObject* first, ::uObject* second);
::uObject* UnionEnumerable__Outracks_Simulator_DialogButton__GetEnumerator(UnionEnumerable__Outracks_Simulator_DialogButton* __this);
UnionEnumerable__Outracks_Simulator_DialogButton* UnionEnumerable__Outracks_Simulator_DialogButton__New_1(::uStatic* __this, ::uObject* first, ::uObject* second);

struct UnionEnumerable__Outracks_Simulator_DialogButton : ::uObject
{
    ::uStrong< ::uObject*> _first;
    ::uStrong< ::uObject*> _second;

    void _ObjInit(::uObject* first, ::uObject* second) { UnionEnumerable__Outracks_Simulator_DialogButton___ObjInit(this, first, second); }
    ::uObject* GetEnumerator() { return UnionEnumerable__Outracks_Simulator_DialogButton__GetEnumerator(this); }
};

}}}


#endif
