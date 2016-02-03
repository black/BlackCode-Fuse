// This file was generated based on 'C:\ProgramData\Uno\Packages\Uno.Collections\0.13.2\Extensions\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_UNO_COLLECTIONS_SELECT_ENUMERABLE__FUSE_DRAWING_TESSELATION_FACE_6A404A2B_H__
#define __APP_UNO_COLLECTIONS_SELECT_ENUMERABLE__FUSE_DRAWING_TESSELATION_FACE_6A404A2B_H__

#include <app/Uno.Collections.IEnumerable__Uno_Geometry_Triangle2D.h>
#include <app/Uno.Object.h>
#include <Uno.h>

namespace app {
namespace Uno {
namespace Collections {

struct SelectEnumerable__Fuse_Drawing_Tesselation_Face__Uno_Geometry_Triangle2D;

struct SelectEnumerable__Fuse_Drawing_Tesselation_Face__Uno_Geometry_Triangle2D__uType : ::uClassType
{
    ::app::Uno::Collections::IEnumerable__Uno_Geometry_Triangle2D __interface_0;
};

SelectEnumerable__Fuse_Drawing_Tesselation_Face__Uno_Geometry_Triangle2D__uType* SelectEnumerable__Fuse_Drawing_Tesselation_Face__Uno_Geometry_Triangle2D__typeof();

void SelectEnumerable__Fuse_Drawing_Tesselation_Face__Uno_Geometry_Triangle2D___ObjInit(SelectEnumerable__Fuse_Drawing_Tesselation_Face__Uno_Geometry_Triangle2D* __this, ::uObject* source, ::uDelegate* select);
::uObject* SelectEnumerable__Fuse_Drawing_Tesselation_Face__Uno_Geometry_Triangle2D__GetEnumerator(SelectEnumerable__Fuse_Drawing_Tesselation_Face__Uno_Geometry_Triangle2D* __this);
SelectEnumerable__Fuse_Drawing_Tesselation_Face__Uno_Geometry_Triangle2D* SelectEnumerable__Fuse_Drawing_Tesselation_Face__Uno_Geometry_Triangle2D__New_1(::uStatic* __this, ::uObject* source, ::uDelegate* select);

struct SelectEnumerable__Fuse_Drawing_Tesselation_Face__Uno_Geometry_Triangle2D : ::uObject
{
    ::uStrong< ::uObject*> _source;
    ::uStrong< ::uDelegate*> _select;

    void _ObjInit(::uObject* source, ::uDelegate* select) { SelectEnumerable__Fuse_Drawing_Tesselation_Face__Uno_Geometry_Triangle2D___ObjInit(this, source, select); }
    ::uObject* GetEnumerator() { return SelectEnumerable__Fuse_Drawing_Tesselation_Face__Uno_Geometry_Triangle2D__GetEnumerator(this); }
};

}}}


#endif
