// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Drawing.Polygons\0.11.3\Collections\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_FUSE_DRAWING_NON_CONSECUTIVE_ENUMERABLE_H__
#define __APP_FUSE_DRAWING_NON_CONSECUTIVE_ENUMERABLE_H__

#include <app/Uno.Collections.IEnumerable__float2.h>
#include <app/Uno.Object.h>
#include <Uno.h>

namespace app {
namespace Fuse {
namespace Drawing {

struct NonConsecutiveEnumerable;

struct NonConsecutiveEnumerable__uType : ::uClassType
{
    ::app::Uno::Collections::IEnumerable__float2 __interface_0;
};

NonConsecutiveEnumerable__uType* NonConsecutiveEnumerable__typeof();

void NonConsecutiveEnumerable___ObjInit(NonConsecutiveEnumerable* __this, ::uObject* source);
::uObject* NonConsecutiveEnumerable__GetEnumerator(NonConsecutiveEnumerable* __this);
NonConsecutiveEnumerable* NonConsecutiveEnumerable__New_1(::uStatic* __this, ::uObject* source);

struct NonConsecutiveEnumerable : ::uObject
{
    ::uStrong< ::uObject*> _source;

    void _ObjInit(::uObject* source) { NonConsecutiveEnumerable___ObjInit(this, source); }
    ::uObject* GetEnumerator() { return NonConsecutiveEnumerable__GetEnumerator(this); }
};

}}}


#endif
