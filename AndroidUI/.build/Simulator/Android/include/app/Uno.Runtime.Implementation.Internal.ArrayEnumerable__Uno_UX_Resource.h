// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Runtime\Implementation\Internal\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_UNO_RUNTIME_IMPLEMENTATION_INTERNAL_ARRAY_ENUMERABLE__UNO_U_X_RESOURCE_H__
#define __APP_UNO_RUNTIME_IMPLEMENTATION_INTERNAL_ARRAY_ENUMERABLE__UNO_U_X_RESOURCE_H__

#include <app/Uno.Collections.IEnumerable__Uno_UX_Resource.h>
#include <app/Uno.Object.h>
#include <Uno.h>
namespace app { namespace Uno { namespace UX { struct Resource; } } }

namespace app {
namespace Uno {
namespace Runtime {
namespace Implementation {
namespace Internal {

struct ArrayEnumerable__Uno_UX_Resource;

struct ArrayEnumerable__Uno_UX_Resource__uType : ::uClassType
{
    ::app::Uno::Collections::IEnumerable__Uno_UX_Resource __interface_0;
};

ArrayEnumerable__Uno_UX_Resource__uType* ArrayEnumerable__Uno_UX_Resource__typeof();

void ArrayEnumerable__Uno_UX_Resource___ObjInit(ArrayEnumerable__Uno_UX_Resource* __this, ::uArray* source);
::uObject* ArrayEnumerable__Uno_UX_Resource__GetEnumerator(ArrayEnumerable__Uno_UX_Resource* __this);
ArrayEnumerable__Uno_UX_Resource* ArrayEnumerable__Uno_UX_Resource__New_1(::uStatic* __this, ::uArray* source);

struct ArrayEnumerable__Uno_UX_Resource : ::uObject
{
    ::uStrong< ::uArray*> _source;

    void _ObjInit(::uArray* source) { ArrayEnumerable__Uno_UX_Resource___ObjInit(this, source); }
    ::uObject* GetEnumerator() { return ArrayEnumerable__Uno_UX_Resource__GetEnumerator(this); }
};

}}}}}


#endif
