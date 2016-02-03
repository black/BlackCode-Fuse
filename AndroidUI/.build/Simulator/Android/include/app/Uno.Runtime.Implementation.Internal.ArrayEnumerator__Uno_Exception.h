// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Runtime\Implementation\Internal\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_UNO_RUNTIME_IMPLEMENTATION_INTERNAL_ARRAY_ENUMERATOR__UNO_EXCEPTION_H__
#define __APP_UNO_RUNTIME_IMPLEMENTATION_INTERNAL_ARRAY_ENUMERATOR__UNO_EXCEPTION_H__

#include <app/Uno.Collections.IEnumerator.h>
#include <app/Uno.Collections.IEnumerator__Uno_Exception.h>
#include <app/Uno.IDisposable.h>
#include <app/Uno.Object.h>
#include <Uno.h>
namespace app { namespace Uno { struct Exception; } }

namespace app {
namespace Uno {
namespace Runtime {
namespace Implementation {
namespace Internal {

struct ArrayEnumerator__Uno_Exception;

struct ArrayEnumerator__Uno_Exception__uType : ::uClassType
{
    ::app::Uno::Collections::IEnumerator__Uno_Exception __interface_0;
    ::app::Uno::IDisposable __interface_1;
    ::app::Uno::Collections::IEnumerator __interface_2;
};

ArrayEnumerator__Uno_Exception__uType* ArrayEnumerator__Uno_Exception__typeof();

void ArrayEnumerator__Uno_Exception___ObjInit(ArrayEnumerator__Uno_Exception* __this, ::uArray* source);
void ArrayEnumerator__Uno_Exception__Dispose(ArrayEnumerator__Uno_Exception* __this);
::app::Uno::Exception* ArrayEnumerator__Uno_Exception__get_Current(ArrayEnumerator__Uno_Exception* __this);
bool ArrayEnumerator__Uno_Exception__MoveNext(ArrayEnumerator__Uno_Exception* __this);
ArrayEnumerator__Uno_Exception* ArrayEnumerator__Uno_Exception__New_1(::uStatic* __this, ::uArray* source);
void ArrayEnumerator__Uno_Exception__Reset(ArrayEnumerator__Uno_Exception* __this);

struct ArrayEnumerator__Uno_Exception : ::uObject
{
    ::uStrong< ::uArray*> _source;
    int _iterator;
    ::uStrong< ::app::Uno::Exception*> _current;

    void _ObjInit(::uArray* source) { ArrayEnumerator__Uno_Exception___ObjInit(this, source); }
    void Dispose() { ArrayEnumerator__Uno_Exception__Dispose(this); }
    ::app::Uno::Exception* Current() { return ArrayEnumerator__Uno_Exception__get_Current(this); }
    bool MoveNext() { return ArrayEnumerator__Uno_Exception__MoveNext(this); }
    void Reset() { ArrayEnumerator__Uno_Exception__Reset(this); }
};

}}}}}


#endif
