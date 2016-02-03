// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Runtime\Implementation\Internal\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_UNO_RUNTIME_IMPLEMENTATION_INTERNAL_STRING_ENUMERATOR_H__
#define __APP_UNO_RUNTIME_IMPLEMENTATION_INTERNAL_STRING_ENUMERATOR_H__

#include <app/Uno.Collections.IEnumerator.h>
#include <app/Uno.Collections.IEnumerator__char.h>
#include <app/Uno.IDisposable.h>
#include <app/Uno.Object.h>
#include <Uno.h>

namespace app {
namespace Uno {
namespace Runtime {
namespace Implementation {
namespace Internal {

struct StringEnumerator;

struct StringEnumerator__uType : ::uClassType
{
    ::app::Uno::Collections::IEnumerator__char __interface_0;
    ::app::Uno::IDisposable __interface_1;
    ::app::Uno::Collections::IEnumerator __interface_2;
};

StringEnumerator__uType* StringEnumerator__typeof();

void StringEnumerator___ObjInit(StringEnumerator* __this, ::uString* source);
void StringEnumerator__Dispose(StringEnumerator* __this);
::uChar StringEnumerator__get_Current(StringEnumerator* __this);
bool StringEnumerator__MoveNext(StringEnumerator* __this);
StringEnumerator* StringEnumerator__New_1(::uStatic* __this, ::uString* source);
void StringEnumerator__Reset(StringEnumerator* __this);

struct StringEnumerator : ::uObject
{
    ::uStrong< ::uString*> _source;
    int _iterator;
    ::uChar _current;

    void _ObjInit(::uString* source) { StringEnumerator___ObjInit(this, source); }
    void Dispose() { StringEnumerator__Dispose(this); }
    ::uChar Current() { return StringEnumerator__get_Current(this); }
    bool MoveNext() { return StringEnumerator__MoveNext(this); }
    void Reset() { StringEnumerator__Reset(this); }
};

}}}}}


#endif
