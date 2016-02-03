// This file was generated based on 'C:\ProgramData\Uno\Packages\Android\0.19.1\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.Collections.IEnumerator.h>
#include <Uno.Collections.IEnumerator-1.h>
#include <Uno.IDisposable.h>
#include <Uno.Object.h>
namespace g{namespace Android{namespace Runtime{struct JOAEnumerator;}}}
namespace g{namespace Android{namespace Runtime{struct ObjectArray;}}}

namespace g{
namespace Android{
namespace Runtime{

// public sealed extern class JOAEnumerator<T> :795
// {
struct JOAEnumerator_type : uType
{
    ::g::Uno::Collections::IEnumerator1 interface0;
    ::g::Uno::IDisposable interface1;
    ::g::Uno::Collections::IEnumerator interface2;
};

JOAEnumerator_type* JOAEnumerator_typeof();
void JOAEnumerator__ctor__fn(JOAEnumerator* __this, ::g::Android::Runtime::ObjectArray* source, int* length);
void JOAEnumerator__get_Current_fn(JOAEnumerator* __this, uObject** __retval);
void JOAEnumerator__MoveNext_fn(JOAEnumerator* __this, bool* __retval);
void JOAEnumerator__New1_fn(uType* __type, ::g::Android::Runtime::ObjectArray* source, int* length, JOAEnumerator** __retval);
void JOAEnumerator__Uno_IDisposable_Dispose_fn(JOAEnumerator* __this);

struct JOAEnumerator : uObject
{
    int _current;
    int _length;
    uStrong< ::g::Android::Runtime::ObjectArray*> _source;

    void ctor_(::g::Android::Runtime::ObjectArray* source, int length);
    uObject* Current();
    bool MoveNext();
    static JOAEnumerator* New1(uType* __type, ::g::Android::Runtime::ObjectArray* source, int length);
};
// }

}}} // ::g::Android::Runtime
