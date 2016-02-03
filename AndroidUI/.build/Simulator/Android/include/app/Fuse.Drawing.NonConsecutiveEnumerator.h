// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Drawing.Polygons\0.11.3\Collections\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_FUSE_DRAWING_NON_CONSECUTIVE_ENUMERATOR_H__
#define __APP_FUSE_DRAWING_NON_CONSECUTIVE_ENUMERATOR_H__

#include <app/Uno.Collections.IEnumerator.h>
#include <app/Uno.Collections.IEnumerator__float2.h>
#include <app/Uno.Float2.h>
#include <app/Uno.IDisposable.h>
#include <app/Uno.Object.h>
#include <Uno.h>

namespace app {
namespace Fuse {
namespace Drawing {

struct NonConsecutiveEnumerator;

struct NonConsecutiveEnumerator__uType : ::uClassType
{
    ::app::Uno::Collections::IEnumerator__float2 __interface_0;
    ::app::Uno::IDisposable __interface_1;
    ::app::Uno::Collections::IEnumerator __interface_2;
};

NonConsecutiveEnumerator__uType* NonConsecutiveEnumerator__typeof();

void NonConsecutiveEnumerator___ObjInit(NonConsecutiveEnumerator* __this, ::uObject* source);
void NonConsecutiveEnumerator__Dispose(NonConsecutiveEnumerator* __this);
::app::Uno::Float2 NonConsecutiveEnumerator__get_Current(NonConsecutiveEnumerator* __this);
bool NonConsecutiveEnumerator__MoveNext(NonConsecutiveEnumerator* __this);
NonConsecutiveEnumerator* NonConsecutiveEnumerator__New_1(::uStatic* __this, ::uObject* source);
void NonConsecutiveEnumerator__Reset(NonConsecutiveEnumerator* __this);

struct NonConsecutiveEnumerator : ::uObject
{
    ::uStrong< ::uObject*> _source;
    bool _hasCurrent;
    ::app::Uno::Float2 _current;
    ::app::Uno::Float2 _first;

    void _ObjInit(::uObject* source) { NonConsecutiveEnumerator___ObjInit(this, source); }
    void Dispose() { NonConsecutiveEnumerator__Dispose(this); }
    ::app::Uno::Float2 Current() { return NonConsecutiveEnumerator__get_Current(this); }
    bool MoveNext() { return NonConsecutiveEnumerator__MoveNext(this); }
    void Reset() { NonConsecutiveEnumerator__Reset(this); }
};

}}}


#endif
