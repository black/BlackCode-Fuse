// This file was generated based on 'C:\ProgramData\Uno\Packages\Android\0.13.2\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_ANDROID_RUNTIME_J_A_ENUMERATOR__CHAR_H__
#define __APP_ANDROID_RUNTIME_J_A_ENUMERATOR__CHAR_H__

#include <app/Uno.Collections.IEnumerator.h>
#include <app/Uno.Collections.IEnumerator__char.h>
#include <app/Uno.IDisposable.h>
#include <app/Uno.Object.h>
#include <Uno.h>
namespace app { namespace Android { namespace Base { namespace Wrappers { struct JWrapper; } } } }

namespace app {
namespace Android {
namespace Runtime {

struct JAEnumerator__char;

struct JAEnumerator__char__uType : ::uClassType
{
    ::app::Uno::Collections::IEnumerator__char __interface_0;
    ::app::Uno::IDisposable __interface_1;
    ::app::Uno::Collections::IEnumerator __interface_2;
};

JAEnumerator__char__uType* JAEnumerator__char__typeof();

void JAEnumerator__char___ObjInit(JAEnumerator__char* __this, ::app::Android::Base::Wrappers::JWrapper* source, int length, ::uDelegate* getter);
::uChar JAEnumerator__char__get_Current(JAEnumerator__char* __this);
bool JAEnumerator__char__MoveNext(JAEnumerator__char* __this);
JAEnumerator__char* JAEnumerator__char__New_1(::uStatic* __this, ::app::Android::Base::Wrappers::JWrapper* source, int length, ::uDelegate* getter);
void JAEnumerator__char__Reset(JAEnumerator__char* __this);
void JAEnumerator__char__Uno_IDisposable_Dispose(JAEnumerator__char* __this);

struct JAEnumerator__char : ::uObject
{
    ::uStrong< ::app::Android::Base::Wrappers::JWrapper*> _source;
    int _current;
    int _length;
    ::uStrong< ::uDelegate*> _getter;

    void _ObjInit(::app::Android::Base::Wrappers::JWrapper* source, int length, ::uDelegate* getter) { JAEnumerator__char___ObjInit(this, source, length, getter); }
    ::uChar Current() { return JAEnumerator__char__get_Current(this); }
    bool MoveNext() { return JAEnumerator__char__MoveNext(this); }
    void Reset() { JAEnumerator__char__Reset(this); }
};

}}}


#endif
