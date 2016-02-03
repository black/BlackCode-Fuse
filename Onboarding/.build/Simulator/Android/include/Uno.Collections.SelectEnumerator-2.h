// This file was generated based on 'C:\ProgramData\Uno\Packages\Uno.Collections\0.20.1\Extensions\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.Collections.IEnumerator.h>
#include <Uno.Collections.IEnumerator-1.h>
#include <Uno.IDisposable.h>
#include <Uno.Object.h>
namespace g{namespace Uno{namespace Collections{struct SelectEnumerator;}}}

namespace g{
namespace Uno{
namespace Collections{

// internal sealed class SelectEnumerator<T, TRet> :435
// {
struct SelectEnumerator_type : uType
{
    ::g::Uno::Collections::IEnumerator1 interface0;
    ::g::Uno::IDisposable interface1;
    ::g::Uno::Collections::IEnumerator interface2;
};

SelectEnumerator_type* SelectEnumerator_typeof();
void SelectEnumerator__ctor__fn(SelectEnumerator* __this, uObject* source, uDelegate* select);
void SelectEnumerator__get_Current_fn(SelectEnumerator* __this, uTRef __retval);
void SelectEnumerator__Dispose_fn(SelectEnumerator* __this);
void SelectEnumerator__MoveNext_fn(SelectEnumerator* __this, bool* __retval);
void SelectEnumerator__New1_fn(uType* __type, uObject* source, uDelegate* select, SelectEnumerator** __retval);

struct SelectEnumerator : uObject
{
    uStrong<uDelegate*> _select;
    uStrong<uObject*> _source;

    void ctor_(uObject* source, uDelegate* select);
    template<class TRet>
    TRet Current() { TRet __retval; return SelectEnumerator__get_Current_fn(this, &__retval), __retval; }
    void Dispose();
    bool MoveNext();
    static SelectEnumerator* New1(uType* __type, uObject* source, uDelegate* select);
};
// }

}}} // ::g::Uno::Collections
