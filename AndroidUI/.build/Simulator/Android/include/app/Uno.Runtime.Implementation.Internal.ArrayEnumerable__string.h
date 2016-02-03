// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Runtime\Implementation\Internal\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_UNO_RUNTIME_IMPLEMENTATION_INTERNAL_ARRAY_ENUMERABLE__STRING_H__
#define __APP_UNO_RUNTIME_IMPLEMENTATION_INTERNAL_ARRAY_ENUMERABLE__STRING_H__

#include <app/Uno.Collections.IEnumerable__string.h>
#include <app/Uno.Object.h>
#include <Uno.h>

namespace app {
namespace Uno {
namespace Runtime {
namespace Implementation {
namespace Internal {

struct ArrayEnumerable__string;

struct ArrayEnumerable__string__uType : ::uClassType
{
    ::app::Uno::Collections::IEnumerable__string __interface_0;
};

ArrayEnumerable__string__uType* ArrayEnumerable__string__typeof();

void ArrayEnumerable__string___ObjInit(ArrayEnumerable__string* __this, ::uArray* source);
::uObject* ArrayEnumerable__string__GetEnumerator(ArrayEnumerable__string* __this);
ArrayEnumerable__string* ArrayEnumerable__string__New_1(::uStatic* __this, ::uArray* source);

struct ArrayEnumerable__string : ::uObject
{
    ::uStrong< ::uArray*> _source;

    void _ObjInit(::uArray* source) { ArrayEnumerable__string___ObjInit(this, source); }
    ::uObject* GetEnumerator() { return ArrayEnumerable__string__GetEnumerator(this); }
};

}}}}}


#endif
