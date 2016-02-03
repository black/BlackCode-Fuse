// This file was generated based on 'C:\ProgramData\Uno\Packages\Uno.Collections\0.13.2\Extensions\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_UNO_COLLECTIONS_EMPTY_ENUMERABLE__FLOAT2_H__
#define __APP_UNO_COLLECTIONS_EMPTY_ENUMERABLE__FLOAT2_H__

#include <app/Uno.Collections.IEnumerable__float2.h>
#include <app/Uno.Object.h>
#include <Uno.h>

namespace app {
namespace Uno {
namespace Collections {

struct EmptyEnumerable__float2;

struct EmptyEnumerable__float2__uType : ::uClassType
{
    ::app::Uno::Collections::IEnumerable__float2 __interface_0;
};

EmptyEnumerable__float2__uType* EmptyEnumerable__float2__typeof();

void EmptyEnumerable__float2___ObjInit(EmptyEnumerable__float2* __this);
::uObject* EmptyEnumerable__float2__GetEnumerator(EmptyEnumerable__float2* __this);
EmptyEnumerable__float2* EmptyEnumerable__float2__New_1(::uStatic* __this);

struct EmptyEnumerable__float2 : ::uObject
{
    void _ObjInit() { EmptyEnumerable__float2___ObjInit(this); }
    ::uObject* GetEnumerator() { return EmptyEnumerable__float2__GetEnumerator(this); }
};

}}}


#endif
