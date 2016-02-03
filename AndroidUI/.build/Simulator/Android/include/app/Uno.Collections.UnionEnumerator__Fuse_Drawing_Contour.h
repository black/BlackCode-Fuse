// This file was generated based on 'C:\ProgramData\Uno\Packages\Uno.Collections\0.13.2\Extensions\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_UNO_COLLECTIONS_UNION_ENUMERATOR__FUSE_DRAWING_CONTOUR_H__
#define __APP_UNO_COLLECTIONS_UNION_ENUMERATOR__FUSE_DRAWING_CONTOUR_H__

#include <app/Uno.Collections.IEnumerator.h>
#include <app/Uno.Collections.IEnumerator__Fuse_Drawing_Contour.h>
#include <app/Uno.IDisposable.h>
#include <app/Uno.Object.h>
#include <Uno.h>
namespace app { namespace Fuse { namespace Drawing { struct Contour; } } }

namespace app {
namespace Uno {
namespace Collections {

struct UnionEnumerator__Fuse_Drawing_Contour;

struct UnionEnumerator__Fuse_Drawing_Contour__uType : ::uClassType
{
    ::app::Uno::Collections::IEnumerator__Fuse_Drawing_Contour __interface_0;
    ::app::Uno::IDisposable __interface_1;
    ::app::Uno::Collections::IEnumerator __interface_2;
};

UnionEnumerator__Fuse_Drawing_Contour__uType* UnionEnumerator__Fuse_Drawing_Contour__typeof();

void UnionEnumerator__Fuse_Drawing_Contour___ObjInit(UnionEnumerator__Fuse_Drawing_Contour* __this, ::uObject* first, ::uObject* second);
void UnionEnumerator__Fuse_Drawing_Contour__Dispose(UnionEnumerator__Fuse_Drawing_Contour* __this);
::app::Fuse::Drawing::Contour* UnionEnumerator__Fuse_Drawing_Contour__get_Current(UnionEnumerator__Fuse_Drawing_Contour* __this);
bool UnionEnumerator__Fuse_Drawing_Contour__MoveNext(UnionEnumerator__Fuse_Drawing_Contour* __this);
UnionEnumerator__Fuse_Drawing_Contour* UnionEnumerator__Fuse_Drawing_Contour__New_1(::uStatic* __this, ::uObject* first, ::uObject* second);
void UnionEnumerator__Fuse_Drawing_Contour__Reset(UnionEnumerator__Fuse_Drawing_Contour* __this);

struct UnionEnumerator__Fuse_Drawing_Contour : ::uObject
{
    ::uStrong< ::uObject*> _current;
    ::uStrong< ::uObject*> _first;
    ::uStrong< ::uObject*> _second;

    void _ObjInit(::uObject* first, ::uObject* second) { UnionEnumerator__Fuse_Drawing_Contour___ObjInit(this, first, second); }
    void Dispose() { UnionEnumerator__Fuse_Drawing_Contour__Dispose(this); }
    ::app::Fuse::Drawing::Contour* Current() { return UnionEnumerator__Fuse_Drawing_Contour__get_Current(this); }
    bool MoveNext() { return UnionEnumerator__Fuse_Drawing_Contour__MoveNext(this); }
    void Reset() { UnionEnumerator__Fuse_Drawing_Contour__Reset(this); }
};

}}}


#endif
