// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Runtime\Implementation\Internal\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_UNO_RUNTIME_IMPLEMENTATION_INTERNAL_ARRAY_ENUMERATOR__STRING_H__
#define __APP_UNO_RUNTIME_IMPLEMENTATION_INTERNAL_ARRAY_ENUMERATOR__STRING_H__

#include <app/Uno.Collections.IEnumerator.h>
#include <app/Uno.Collections.IEnumerator__string.h>
#include <app/Uno.IDisposable.h>
#include <app/Uno.Object.h>
#include <Uno.h>

namespace app {
namespace Uno {
namespace Runtime {
namespace Implementation {
namespace Internal {

struct ArrayEnumerator__string;

struct ArrayEnumerator__string__uType : ::uClassType
{
    ::app::Uno::Collections::IEnumerator__string __interface_0;
    ::app::Uno::IDisposable __interface_1;
    ::app::Uno::Collections::IEnumerator __interface_2;
};

ArrayEnumerator__string__uType* ArrayEnumerator__string__typeof();

void ArrayEnumerator__string___ObjInit(ArrayEnumerator__string* __this, ::uArray* source);
void ArrayEnumerator__string__Dispose(ArrayEnumerator__string* __this);
::uString* ArrayEnumerator__string__get_Current(ArrayEnumerator__string* __this);
bool ArrayEnumerator__string__MoveNext(ArrayEnumerator__string* __this);
ArrayEnumerator__string* ArrayEnumerator__string__New_1(::uStatic* __this, ::uArray* source);
void ArrayEnumerator__string__Reset(ArrayEnumerator__string* __this);

struct ArrayEnumerator__string : ::uObject
{
    ::uStrong< ::uArray*> _source;
    int _iterator;
    ::uStrong< ::uString*> _current;

    void _ObjInit(::uArray* source) { ArrayEnumerator__string___ObjInit(this, source); }
    void Dispose() { ArrayEnumerator__string__Dispose(this); }
    ::uString* Current() { return ArrayEnumerator__string__get_Current(this); }
    bool MoveNext() { return ArrayEnumerator__string__MoveNext(this); }
    void Reset() { ArrayEnumerator__string__Reset(this); }
};

}}}}}


#endif
