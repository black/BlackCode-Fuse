// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Drawing.Paths\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_FUSE_DRAWING_CONTOUR_ENUMERABLE_H__
#define __APP_FUSE_DRAWING_CONTOUR_ENUMERABLE_H__

#include <app/Uno.Collections.IEnumerable__Fuse_Drawing_Contour.h>
#include <app/Uno.Float2.h>
#include <app/Uno.Object.h>
#include <Uno.h>
namespace app { namespace Fuse { namespace Drawing { struct PathGeometry; } } }

namespace app {
namespace Fuse {
namespace Drawing {

struct ContourEnumerable;

struct ContourEnumerable__uType : ::uClassType
{
    ::app::Uno::Collections::IEnumerable__Fuse_Drawing_Contour __interface_0;
};

ContourEnumerable__uType* ContourEnumerable__typeof();

void ContourEnumerable___ObjInit(ContourEnumerable* __this, ::app::Fuse::Drawing::PathGeometry* head, ::app::Uno::Float2 scale);
::uObject* ContourEnumerable__GetEnumerator(ContourEnumerable* __this);
ContourEnumerable* ContourEnumerable__New_1(::uStatic* __this, ::app::Fuse::Drawing::PathGeometry* head, ::app::Uno::Float2 scale);

struct ContourEnumerable : ::uObject
{
    ::uStrong< ::app::Fuse::Drawing::PathGeometry*> _head;
    ::app::Uno::Float2 _scale;

    void _ObjInit(::app::Fuse::Drawing::PathGeometry* head, ::app::Uno::Float2 scale) { ContourEnumerable___ObjInit(this, head, scale); }
    ::uObject* GetEnumerator() { return ContourEnumerable__GetEnumerator(this); }
};

}}}


#endif
