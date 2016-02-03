// This file was generated based on 'C:\ProgramData\Uno\Packages\Uno.Collections\0.13.2\Extensions\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_UNO_COLLECTIONS_EMPTY_ENUMERATOR__FLOAT2_H__
#define __APP_UNO_COLLECTIONS_EMPTY_ENUMERATOR__FLOAT2_H__

#include <app/Uno.Collections.IEnumerator.h>
#include <app/Uno.Collections.IEnumerator__float2.h>
#include <app/Uno.IDisposable.h>
#include <app/Uno.Object.h>
#include <Uno.h>
namespace app { namespace Uno { struct Float2; } }

namespace app {
namespace Uno {
namespace Collections {

struct EmptyEnumerator__float2;

struct EmptyEnumerator__float2__uType : ::uClassType
{
    ::app::Uno::Collections::IEnumerator__float2 __interface_0;
    ::app::Uno::IDisposable __interface_1;
    ::app::Uno::Collections::IEnumerator __interface_2;
};

EmptyEnumerator__float2__uType* EmptyEnumerator__float2__typeof();

void EmptyEnumerator__float2___ObjInit(EmptyEnumerator__float2* __this);
void EmptyEnumerator__float2__Dispose(EmptyEnumerator__float2* __this);
::app::Uno::Float2 EmptyEnumerator__float2__get_Current(EmptyEnumerator__float2* __this);
bool EmptyEnumerator__float2__MoveNext(EmptyEnumerator__float2* __this);
EmptyEnumerator__float2* EmptyEnumerator__float2__New_1(::uStatic* __this);
void EmptyEnumerator__float2__Reset(EmptyEnumerator__float2* __this);

struct EmptyEnumerator__float2 : ::uObject
{
    void _ObjInit() { EmptyEnumerator__float2___ObjInit(this); }
    void Dispose() { EmptyEnumerator__float2__Dispose(this); }
    ::app::Uno::Float2 Current();
    bool MoveNext() { return EmptyEnumerator__float2__MoveNext(this); }
    void Reset() { EmptyEnumerator__float2__Reset(this); }
};

}}}

#include <app/Uno.Float2.h>

namespace app {
namespace Uno {
namespace Collections {

inline ::app::Uno::Float2 EmptyEnumerator__float2::Current() { return EmptyEnumerator__float2__get_Current(this); }

}}}


#endif
