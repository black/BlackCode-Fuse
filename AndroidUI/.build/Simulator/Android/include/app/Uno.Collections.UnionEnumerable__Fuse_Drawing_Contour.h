// This file was generated based on 'C:\ProgramData\Uno\Packages\Uno.Collections\0.13.2\Extensions\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_UNO_COLLECTIONS_UNION_ENUMERABLE__FUSE_DRAWING_CONTOUR_H__
#define __APP_UNO_COLLECTIONS_UNION_ENUMERABLE__FUSE_DRAWING_CONTOUR_H__

#include <app/Uno.Collections.IEnumerable__Fuse_Drawing_Contour.h>
#include <app/Uno.Object.h>
#include <Uno.h>

namespace app {
namespace Uno {
namespace Collections {

struct UnionEnumerable__Fuse_Drawing_Contour;

struct UnionEnumerable__Fuse_Drawing_Contour__uType : ::uClassType
{
    ::app::Uno::Collections::IEnumerable__Fuse_Drawing_Contour __interface_0;
};

UnionEnumerable__Fuse_Drawing_Contour__uType* UnionEnumerable__Fuse_Drawing_Contour__typeof();

void UnionEnumerable__Fuse_Drawing_Contour___ObjInit(UnionEnumerable__Fuse_Drawing_Contour* __this, ::uObject* first, ::uObject* second);
::uObject* UnionEnumerable__Fuse_Drawing_Contour__GetEnumerator(UnionEnumerable__Fuse_Drawing_Contour* __this);
UnionEnumerable__Fuse_Drawing_Contour* UnionEnumerable__Fuse_Drawing_Contour__New_1(::uStatic* __this, ::uObject* first, ::uObject* second);

struct UnionEnumerable__Fuse_Drawing_Contour : ::uObject
{
    ::uStrong< ::uObject*> _first;
    ::uStrong< ::uObject*> _second;

    void _ObjInit(::uObject* first, ::uObject* second) { UnionEnumerable__Fuse_Drawing_Contour___ObjInit(this, first, second); }
    ::uObject* GetEnumerator() { return UnionEnumerable__Fuse_Drawing_Contour__GetEnumerator(this); }
};

}}}


#endif
