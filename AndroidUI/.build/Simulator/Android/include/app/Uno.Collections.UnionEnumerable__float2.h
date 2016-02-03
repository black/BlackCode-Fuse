// This file was generated based on 'C:\ProgramData\Uno\Packages\Uno.Collections\0.13.2\Extensions\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_UNO_COLLECTIONS_UNION_ENUMERABLE__FLOAT2_H__
#define __APP_UNO_COLLECTIONS_UNION_ENUMERABLE__FLOAT2_H__

#include <app/Uno.Collections.IEnumerable__float2.h>
#include <app/Uno.Object.h>
#include <Uno.h>

namespace app {
namespace Uno {
namespace Collections {

struct UnionEnumerable__float2;

struct UnionEnumerable__float2__uType : ::uClassType
{
    ::app::Uno::Collections::IEnumerable__float2 __interface_0;
};

UnionEnumerable__float2__uType* UnionEnumerable__float2__typeof();

void UnionEnumerable__float2___ObjInit(UnionEnumerable__float2* __this, ::uObject* first, ::uObject* second);
::uObject* UnionEnumerable__float2__GetEnumerator(UnionEnumerable__float2* __this);
UnionEnumerable__float2* UnionEnumerable__float2__New_1(::uStatic* __this, ::uObject* first, ::uObject* second);

struct UnionEnumerable__float2 : ::uObject
{
    ::uStrong< ::uObject*> _first;
    ::uStrong< ::uObject*> _second;

    void _ObjInit(::uObject* first, ::uObject* second) { UnionEnumerable__float2___ObjInit(this, first, second); }
    ::uObject* GetEnumerator() { return UnionEnumerable__float2__GetEnumerator(this); }
};

}}}


#endif
