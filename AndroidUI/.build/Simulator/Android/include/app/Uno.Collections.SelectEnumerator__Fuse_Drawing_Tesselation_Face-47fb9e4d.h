// This file was generated based on 'C:\ProgramData\Uno\Packages\Uno.Collections\0.13.2\Extensions\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_UNO_COLLECTIONS_SELECT_ENUMERATOR__FUSE_DRAWING_TESSELATION_FACE_47FB9E4D_H__
#define __APP_UNO_COLLECTIONS_SELECT_ENUMERATOR__FUSE_DRAWING_TESSELATION_FACE_47FB9E4D_H__

#include <app/Uno.Collections.IEnumerator.h>
#include <app/Uno.Collections.IEnumerator__Uno_Geometry_Triangle2D.h>
#include <app/Uno.IDisposable.h>
#include <app/Uno.Object.h>
#include <Uno.h>
namespace app { namespace Uno { namespace Geometry { struct Triangle2D; } } }

namespace app {
namespace Uno {
namespace Collections {

struct SelectEnumerator__Fuse_Drawing_Tesselation_Face__Uno_Geometry_Triangle2D;

struct SelectEnumerator__Fuse_Drawing_Tesselation_Face__Uno_Geometry_Triangle2D__uType : ::uClassType
{
    ::app::Uno::Collections::IEnumerator__Uno_Geometry_Triangle2D __interface_0;
    ::app::Uno::IDisposable __interface_1;
    ::app::Uno::Collections::IEnumerator __interface_2;
};

SelectEnumerator__Fuse_Drawing_Tesselation_Face__Uno_Geometry_Triangle2D__uType* SelectEnumerator__Fuse_Drawing_Tesselation_Face__Uno_Geometry_Triangle2D__typeof();

void SelectEnumerator__Fuse_Drawing_Tesselation_Face__Uno_Geometry_Triangle2D___ObjInit(SelectEnumerator__Fuse_Drawing_Tesselation_Face__Uno_Geometry_Triangle2D* __this, ::uObject* source, ::uDelegate* select);
void SelectEnumerator__Fuse_Drawing_Tesselation_Face__Uno_Geometry_Triangle2D__Dispose(SelectEnumerator__Fuse_Drawing_Tesselation_Face__Uno_Geometry_Triangle2D* __this);
::app::Uno::Geometry::Triangle2D* SelectEnumerator__Fuse_Drawing_Tesselation_Face__Uno_Geometry_Triangle2D__get_Current(SelectEnumerator__Fuse_Drawing_Tesselation_Face__Uno_Geometry_Triangle2D* __this);
bool SelectEnumerator__Fuse_Drawing_Tesselation_Face__Uno_Geometry_Triangle2D__MoveNext(SelectEnumerator__Fuse_Drawing_Tesselation_Face__Uno_Geometry_Triangle2D* __this);
SelectEnumerator__Fuse_Drawing_Tesselation_Face__Uno_Geometry_Triangle2D* SelectEnumerator__Fuse_Drawing_Tesselation_Face__Uno_Geometry_Triangle2D__New_1(::uStatic* __this, ::uObject* source, ::uDelegate* select);
void SelectEnumerator__Fuse_Drawing_Tesselation_Face__Uno_Geometry_Triangle2D__Reset(SelectEnumerator__Fuse_Drawing_Tesselation_Face__Uno_Geometry_Triangle2D* __this);

struct SelectEnumerator__Fuse_Drawing_Tesselation_Face__Uno_Geometry_Triangle2D : ::uObject
{
    ::uStrong< ::uObject*> _source;
    ::uStrong< ::uDelegate*> _select;

    void _ObjInit(::uObject* source, ::uDelegate* select) { SelectEnumerator__Fuse_Drawing_Tesselation_Face__Uno_Geometry_Triangle2D___ObjInit(this, source, select); }
    void Dispose() { SelectEnumerator__Fuse_Drawing_Tesselation_Face__Uno_Geometry_Triangle2D__Dispose(this); }
    ::app::Uno::Geometry::Triangle2D* Current() { return SelectEnumerator__Fuse_Drawing_Tesselation_Face__Uno_Geometry_Triangle2D__get_Current(this); }
    bool MoveNext() { return SelectEnumerator__Fuse_Drawing_Tesselation_Face__Uno_Geometry_Triangle2D__MoveNext(this); }
    void Reset() { SelectEnumerator__Fuse_Drawing_Tesselation_Face__Uno_Geometry_Triangle2D__Reset(this); }
};

}}}


#endif
