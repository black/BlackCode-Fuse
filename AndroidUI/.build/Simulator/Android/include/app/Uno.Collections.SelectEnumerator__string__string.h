// This file was generated based on 'C:\ProgramData\Uno\Packages\Uno.Collections\0.13.2\Extensions\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_UNO_COLLECTIONS_SELECT_ENUMERATOR__STRING__STRING_H__
#define __APP_UNO_COLLECTIONS_SELECT_ENUMERATOR__STRING__STRING_H__

#include <app/Uno.Collections.IEnumerator.h>
#include <app/Uno.Collections.IEnumerator__string.h>
#include <app/Uno.IDisposable.h>
#include <app/Uno.Object.h>
#include <Uno.h>

namespace app {
namespace Uno {
namespace Collections {

struct SelectEnumerator__string__string;

struct SelectEnumerator__string__string__uType : ::uClassType
{
    ::app::Uno::Collections::IEnumerator__string __interface_0;
    ::app::Uno::IDisposable __interface_1;
    ::app::Uno::Collections::IEnumerator __interface_2;
};

SelectEnumerator__string__string__uType* SelectEnumerator__string__string__typeof();

void SelectEnumerator__string__string___ObjInit(SelectEnumerator__string__string* __this, ::uObject* source, ::uDelegate* select);
void SelectEnumerator__string__string__Dispose(SelectEnumerator__string__string* __this);
::uString* SelectEnumerator__string__string__get_Current(SelectEnumerator__string__string* __this);
bool SelectEnumerator__string__string__MoveNext(SelectEnumerator__string__string* __this);
SelectEnumerator__string__string* SelectEnumerator__string__string__New_1(::uStatic* __this, ::uObject* source, ::uDelegate* select);
void SelectEnumerator__string__string__Reset(SelectEnumerator__string__string* __this);

struct SelectEnumerator__string__string : ::uObject
{
    ::uStrong< ::uObject*> _source;
    ::uStrong< ::uDelegate*> _select;

    void _ObjInit(::uObject* source, ::uDelegate* select) { SelectEnumerator__string__string___ObjInit(this, source, select); }
    void Dispose() { SelectEnumerator__string__string__Dispose(this); }
    ::uString* Current() { return SelectEnumerator__string__string__get_Current(this); }
    bool MoveNext() { return SelectEnumerator__string__string__MoveNext(this); }
    void Reset() { SelectEnumerator__string__string__Reset(this); }
};

}}}


#endif
