// This file was generated based on 'C:\ProgramData\Uno\Packages\Uno.Collections\0.13.2\Extensions\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_UNO_COLLECTIONS_SELECT_ENUMERABLE__STRING__STRING_H__
#define __APP_UNO_COLLECTIONS_SELECT_ENUMERABLE__STRING__STRING_H__

#include <app/Uno.Collections.IEnumerable__string.h>
#include <app/Uno.Object.h>
#include <Uno.h>

namespace app {
namespace Uno {
namespace Collections {

struct SelectEnumerable__string__string;

struct SelectEnumerable__string__string__uType : ::uClassType
{
    ::app::Uno::Collections::IEnumerable__string __interface_0;
};

SelectEnumerable__string__string__uType* SelectEnumerable__string__string__typeof();

void SelectEnumerable__string__string___ObjInit(SelectEnumerable__string__string* __this, ::uObject* source, ::uDelegate* select);
::uObject* SelectEnumerable__string__string__GetEnumerator(SelectEnumerable__string__string* __this);
SelectEnumerable__string__string* SelectEnumerable__string__string__New_1(::uStatic* __this, ::uObject* source, ::uDelegate* select);

struct SelectEnumerable__string__string : ::uObject
{
    ::uStrong< ::uObject*> _source;
    ::uStrong< ::uDelegate*> _select;

    void _ObjInit(::uObject* source, ::uDelegate* select) { SelectEnumerable__string__string___ObjInit(this, source, select); }
    ::uObject* GetEnumerator() { return SelectEnumerable__string__string__GetEnumerator(this); }
};

}}}


#endif
