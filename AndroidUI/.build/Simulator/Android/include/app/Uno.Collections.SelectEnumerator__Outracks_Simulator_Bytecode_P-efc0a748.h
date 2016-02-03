// This file was generated based on 'C:\ProgramData\Uno\Packages\Uno.Collections\0.13.2\Extensions\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_UNO_COLLECTIONS_SELECT_ENUMERATOR__OUTRACKS_SIMULATOR_BYTECODE_P_EFC0A748_H__
#define __APP_UNO_COLLECTIONS_SELECT_ENUMERATOR__OUTRACKS_SIMULATOR_BYTECODE_P_EFC0A748_H__

#include <app/Uno.Collections.IEnumerator.h>
#include <app/Uno.Collections.IEnumerator__string.h>
#include <app/Uno.IDisposable.h>
#include <app/Uno.Object.h>
#include <Uno.h>

namespace app {
namespace Uno {
namespace Collections {

struct SelectEnumerator__Outracks_Simulator_Bytecode_Parameter__string;

struct SelectEnumerator__Outracks_Simulator_Bytecode_Parameter__string__uType : ::uClassType
{
    ::app::Uno::Collections::IEnumerator__string __interface_0;
    ::app::Uno::IDisposable __interface_1;
    ::app::Uno::Collections::IEnumerator __interface_2;
};

SelectEnumerator__Outracks_Simulator_Bytecode_Parameter__string__uType* SelectEnumerator__Outracks_Simulator_Bytecode_Parameter__string__typeof();

void SelectEnumerator__Outracks_Simulator_Bytecode_Parameter__string___ObjInit(SelectEnumerator__Outracks_Simulator_Bytecode_Parameter__string* __this, ::uObject* source, ::uDelegate* select);
void SelectEnumerator__Outracks_Simulator_Bytecode_Parameter__string__Dispose(SelectEnumerator__Outracks_Simulator_Bytecode_Parameter__string* __this);
::uString* SelectEnumerator__Outracks_Simulator_Bytecode_Parameter__string__get_Current(SelectEnumerator__Outracks_Simulator_Bytecode_Parameter__string* __this);
bool SelectEnumerator__Outracks_Simulator_Bytecode_Parameter__string__MoveNext(SelectEnumerator__Outracks_Simulator_Bytecode_Parameter__string* __this);
SelectEnumerator__Outracks_Simulator_Bytecode_Parameter__string* SelectEnumerator__Outracks_Simulator_Bytecode_Parameter__string__New_1(::uStatic* __this, ::uObject* source, ::uDelegate* select);
void SelectEnumerator__Outracks_Simulator_Bytecode_Parameter__string__Reset(SelectEnumerator__Outracks_Simulator_Bytecode_Parameter__string* __this);

struct SelectEnumerator__Outracks_Simulator_Bytecode_Parameter__string : ::uObject
{
    ::uStrong< ::uObject*> _source;
    ::uStrong< ::uDelegate*> _select;

    void _ObjInit(::uObject* source, ::uDelegate* select) { SelectEnumerator__Outracks_Simulator_Bytecode_Parameter__string___ObjInit(this, source, select); }
    void Dispose() { SelectEnumerator__Outracks_Simulator_Bytecode_Parameter__string__Dispose(this); }
    ::uString* Current() { return SelectEnumerator__Outracks_Simulator_Bytecode_Parameter__string__get_Current(this); }
    bool MoveNext() { return SelectEnumerator__Outracks_Simulator_Bytecode_Parameter__string__MoveNext(this); }
    void Reset() { SelectEnumerator__Outracks_Simulator_Bytecode_Parameter__string__Reset(this); }
};

}}}


#endif
