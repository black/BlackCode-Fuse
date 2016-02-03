// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Runtime\Implementation\Internal\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_UNO_RUNTIME_IMPLEMENTATION_INTERNAL_STRING_ENUMERABLE_H__
#define __APP_UNO_RUNTIME_IMPLEMENTATION_INTERNAL_STRING_ENUMERABLE_H__

#include <app/Uno.Collections.IEnumerable__char.h>
#include <app/Uno.Object.h>
#include <Uno.h>

namespace app {
namespace Uno {
namespace Runtime {
namespace Implementation {
namespace Internal {

struct StringEnumerable;

struct StringEnumerable__uType : ::uClassType
{
    ::app::Uno::Collections::IEnumerable__char __interface_0;
};

StringEnumerable__uType* StringEnumerable__typeof();

void StringEnumerable___ObjInit(StringEnumerable* __this, ::uString* source);
::uObject* StringEnumerable__GetEnumerator(StringEnumerable* __this);
StringEnumerable* StringEnumerable__New_1(::uStatic* __this, ::uString* source);

struct StringEnumerable : ::uObject
{
    ::uStrong< ::uString*> _source;

    void _ObjInit(::uString* source) { StringEnumerable___ObjInit(this, source); }
    ::uObject* GetEnumerator() { return StringEnumerable__GetEnumerator(this); }
};

}}}}}


#endif
