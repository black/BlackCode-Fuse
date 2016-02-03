// This file was generated based on 'C:\ProgramData\Uno\Packages\Uno.Collections\0.13.2\Extensions\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_UNO_COLLECTIONS_UNION_ENUMERATOR__FLOAT2_H__
#define __APP_UNO_COLLECTIONS_UNION_ENUMERATOR__FLOAT2_H__

#include <app/Uno.Collections.IEnumerator.h>
#include <app/Uno.Collections.IEnumerator__float2.h>
#include <app/Uno.IDisposable.h>
#include <app/Uno.Object.h>
#include <Uno.h>
namespace app { namespace Uno { struct Float2; } }

namespace app {
namespace Uno {
namespace Collections {

struct UnionEnumerator__float2;

struct UnionEnumerator__float2__uType : ::uClassType
{
    ::app::Uno::Collections::IEnumerator__float2 __interface_0;
    ::app::Uno::IDisposable __interface_1;
    ::app::Uno::Collections::IEnumerator __interface_2;
};

UnionEnumerator__float2__uType* UnionEnumerator__float2__typeof();

void UnionEnumerator__float2___ObjInit(UnionEnumerator__float2* __this, ::uObject* first, ::uObject* second);
void UnionEnumerator__float2__Dispose(UnionEnumerator__float2* __this);
::app::Uno::Float2 UnionEnumerator__float2__get_Current(UnionEnumerator__float2* __this);
bool UnionEnumerator__float2__MoveNext(UnionEnumerator__float2* __this);
UnionEnumerator__float2* UnionEnumerator__float2__New_1(::uStatic* __this, ::uObject* first, ::uObject* second);
void UnionEnumerator__float2__Reset(UnionEnumerator__float2* __this);

struct UnionEnumerator__float2 : ::uObject
{
    ::uStrong< ::uObject*> _current;
    ::uStrong< ::uObject*> _first;
    ::uStrong< ::uObject*> _second;

    void _ObjInit(::uObject* first, ::uObject* second) { UnionEnumerator__float2___ObjInit(this, first, second); }
    void Dispose() { UnionEnumerator__float2__Dispose(this); }
    ::app::Uno::Float2 Current();
    bool MoveNext() { return UnionEnumerator__float2__MoveNext(this); }
    void Reset() { UnionEnumerator__float2__Reset(this); }
};

}}}

#include <app/Uno.Float2.h>

namespace app {
namespace Uno {
namespace Collections {

inline ::app::Uno::Float2 UnionEnumerator__float2::Current() { return UnionEnumerator__float2__get_Current(this); }

}}}


#endif
