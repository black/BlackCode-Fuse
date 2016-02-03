// This file was generated based on 'C:\ProgramData\Uno\Packages\Android\0.20.2\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Android.java.lang.Object.h>
#include <Uno.Collections.IEnumerator.h>
#include <Uno.Collections.IEnumerator-1.h>
#include <Uno.IDisposable.h>
#include <Uno.Object.h>
namespace g{namespace Android{namespace Runtime{struct JEnumerator;}}}

namespace g{
namespace Android{
namespace Runtime{

// public sealed extern class JEnumerator :704
// {
struct JEnumerator_type : uType
{
    ::g::Uno::Collections::IEnumerator1 interface0;
    ::g::Uno::IDisposable interface1;
    ::g::Uno::Collections::IEnumerator interface2;
};

JEnumerator_type* JEnumerator_typeof();
void JEnumerator__ctor__fn(JEnumerator* __this, uObject* source);
void JEnumerator___currentElement_fn(JEnumerator* __this, ::g::Android::java::lang::Object** __retval);
void JEnumerator__get_Current_fn(JEnumerator* __this, ::g::Android::java::lang::Object** __retval);
void JEnumerator__MoveNext_fn(JEnumerator* __this, bool* __retval);
void JEnumerator__New1_fn(uObject* source, JEnumerator** __retval);
void JEnumerator__Reset_fn(JEnumerator* __this);
void JEnumerator__Uno_IDisposable_Dispose_fn(JEnumerator* __this);

struct JEnumerator : uObject
{
    uStrong< ::g::Android::java::lang::Object*> _current;
    uStrong<uObject*> _iterator;
    uStrong<uObject*> _source;
    bool begun;

    void ctor_(uObject* source);
    ::g::Android::java::lang::Object* _currentElement();
    ::g::Android::java::lang::Object* Current();
    bool MoveNext();
    void Reset();
    static JEnumerator* New1(uObject* source);
};
// }

}}} // ::g::Android::Runtime
