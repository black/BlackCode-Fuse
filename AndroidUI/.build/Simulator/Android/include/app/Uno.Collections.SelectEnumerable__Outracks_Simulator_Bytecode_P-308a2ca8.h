// This file was generated based on 'C:\ProgramData\Uno\Packages\Uno.Collections\0.13.2\Extensions\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_UNO_COLLECTIONS_SELECT_ENUMERABLE__OUTRACKS_SIMULATOR_BYTECODE_P_308A2CA8_H__
#define __APP_UNO_COLLECTIONS_SELECT_ENUMERABLE__OUTRACKS_SIMULATOR_BYTECODE_P_308A2CA8_H__

#include <app/Uno.Collections.IEnumerable__string.h>
#include <app/Uno.Object.h>
#include <Uno.h>

namespace app {
namespace Uno {
namespace Collections {

struct SelectEnumerable__Outracks_Simulator_Bytecode_Parameter__string;

struct SelectEnumerable__Outracks_Simulator_Bytecode_Parameter__string__uType : ::uClassType
{
    ::app::Uno::Collections::IEnumerable__string __interface_0;
};

SelectEnumerable__Outracks_Simulator_Bytecode_Parameter__string__uType* SelectEnumerable__Outracks_Simulator_Bytecode_Parameter__string__typeof();

void SelectEnumerable__Outracks_Simulator_Bytecode_Parameter__string___ObjInit(SelectEnumerable__Outracks_Simulator_Bytecode_Parameter__string* __this, ::uObject* source, ::uDelegate* select);
::uObject* SelectEnumerable__Outracks_Simulator_Bytecode_Parameter__string__GetEnumerator(SelectEnumerable__Outracks_Simulator_Bytecode_Parameter__string* __this);
SelectEnumerable__Outracks_Simulator_Bytecode_Parameter__string* SelectEnumerable__Outracks_Simulator_Bytecode_Parameter__string__New_1(::uStatic* __this, ::uObject* source, ::uDelegate* select);

struct SelectEnumerable__Outracks_Simulator_Bytecode_Parameter__string : ::uObject
{
    ::uStrong< ::uObject*> _source;
    ::uStrong< ::uDelegate*> _select;

    void _ObjInit(::uObject* source, ::uDelegate* select) { SelectEnumerable__Outracks_Simulator_Bytecode_Parameter__string___ObjInit(this, source, select); }
    ::uObject* GetEnumerator() { return SelectEnumerable__Outracks_Simulator_Bytecode_Parameter__string__GetEnumerator(this); }
};

}}}


#endif
