// This file was generated based on 'C:\ProgramData\Uno\Packages\Android\0.19.1\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.Collections.IEnumerator.h>
#include <Uno.Collections.IEnumerator-1.h>
#include <Uno.IDisposable.h>
#include <Uno.Object.h>
namespace g{namespace Android{namespace Base{namespace Wrappers{struct JWrapper;}}}}
namespace g{namespace Android{namespace Runtime{struct JAEnumerator;}}}

namespace g{
namespace Android{
namespace Runtime{

// public sealed extern class JAEnumerator<T> :755
// {
struct JAEnumerator_type : uType
{
    ::g::Uno::Collections::IEnumerator1 interface0;
    ::g::Uno::IDisposable interface1;
    ::g::Uno::Collections::IEnumerator interface2;
};

JAEnumerator_type* JAEnumerator_typeof();
void JAEnumerator__ctor__fn(JAEnumerator* __this, ::g::Android::Base::Wrappers::JWrapper* source, int* length, uDelegate* getter);
void JAEnumerator__get_Current_fn(JAEnumerator* __this, uTRef __retval);
void JAEnumerator__MoveNext_fn(JAEnumerator* __this, bool* __retval);
void JAEnumerator__New1_fn(uType* __type, ::g::Android::Base::Wrappers::JWrapper* source, int* length, uDelegate* getter, JAEnumerator** __retval);
void JAEnumerator__Uno_IDisposable_Dispose_fn(JAEnumerator* __this);

struct JAEnumerator : uObject
{
    int _current;
    uStrong<uDelegate*> _getter;
    int _length;
    uStrong< ::g::Android::Base::Wrappers::JWrapper*> _source;

    void ctor_(::g::Android::Base::Wrappers::JWrapper* source, int length, uDelegate* getter);
    template<class T>
    T Current() { T __retval; return JAEnumerator__get_Current_fn(this, &__retval), __retval; }
    bool MoveNext();
    static JAEnumerator* New1(uType* __type, ::g::Android::Base::Wrappers::JWrapper* source, int length, uDelegate* getter);
};
// }

}}} // ::g::Android::Runtime
