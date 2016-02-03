// This file was generated based on 'C:\ProgramData\Uno\Packages\Android\0.13.2\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_ANDROID_RUNTIME_J_A_ENUMERATOR__INT_H__
#define __APP_ANDROID_RUNTIME_J_A_ENUMERATOR__INT_H__

#include <app/Uno.Collections.IEnumerator.h>
#include <app/Uno.Collections.IEnumerator__int.h>
#include <app/Uno.IDisposable.h>
#include <app/Uno.Object.h>
#include <Uno.h>
namespace app { namespace Android { namespace Base { namespace Wrappers { struct JWrapper; } } } }

namespace app {
namespace Android {
namespace Runtime {

struct JAEnumerator__int;

struct JAEnumerator__int__uType : ::uClassType
{
    ::app::Uno::Collections::IEnumerator__int __interface_0;
    ::app::Uno::IDisposable __interface_1;
    ::app::Uno::Collections::IEnumerator __interface_2;
};

JAEnumerator__int__uType* JAEnumerator__int__typeof();

void JAEnumerator__int___ObjInit(JAEnumerator__int* __this, ::app::Android::Base::Wrappers::JWrapper* source, int length, ::uDelegate* getter);
int JAEnumerator__int__get_Current(JAEnumerator__int* __this);
bool JAEnumerator__int__MoveNext(JAEnumerator__int* __this);
JAEnumerator__int* JAEnumerator__int__New_1(::uStatic* __this, ::app::Android::Base::Wrappers::JWrapper* source, int length, ::uDelegate* getter);
void JAEnumerator__int__Reset(JAEnumerator__int* __this);
void JAEnumerator__int__Uno_IDisposable_Dispose(JAEnumerator__int* __this);

struct JAEnumerator__int : ::uObject
{
    ::uStrong< ::app::Android::Base::Wrappers::JWrapper*> _source;
    int _current;
    int _length;
    ::uStrong< ::uDelegate*> _getter;

    void _ObjInit(::app::Android::Base::Wrappers::JWrapper* source, int length, ::uDelegate* getter) { JAEnumerator__int___ObjInit(this, source, length, getter); }
    int Current() { return JAEnumerator__int__get_Current(this); }
    bool MoveNext() { return JAEnumerator__int__MoveNext(this); }
    void Reset() { JAEnumerator__int__Reset(this); }
};

}}}


#endif
