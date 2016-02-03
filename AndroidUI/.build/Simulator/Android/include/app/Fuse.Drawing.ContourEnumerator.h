// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Drawing.Paths\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_FUSE_DRAWING_CONTOUR_ENUMERATOR_H__
#define __APP_FUSE_DRAWING_CONTOUR_ENUMERATOR_H__

#include <app/Uno.Collections.IEnumerator.h>
#include <app/Uno.Collections.IEnumerator__Fuse_Drawing_Contour.h>
#include <app/Uno.Float2.h>
#include <app/Uno.IDisposable.h>
#include <app/Uno.Object.h>
#include <Uno.h>
namespace app { namespace Fuse { namespace Drawing { struct Contour; } } }
namespace app { namespace Fuse { namespace Drawing { struct PathGeometry; } } }

namespace app {
namespace Fuse {
namespace Drawing {

struct ContourEnumerator;

struct ContourEnumerator__uType : ::uClassType
{
    ::app::Uno::Collections::IEnumerator__Fuse_Drawing_Contour __interface_0;
    ::app::Uno::IDisposable __interface_1;
    ::app::Uno::Collections::IEnumerator __interface_2;
};

ContourEnumerator__uType* ContourEnumerator__typeof();

void ContourEnumerator___ObjInit(ContourEnumerator* __this, ::app::Fuse::Drawing::PathGeometry* head, ::app::Uno::Float2 scale);
void ContourEnumerator__Dispose(ContourEnumerator* __this);
::app::Fuse::Drawing::Contour* ContourEnumerator__get_Current(ContourEnumerator* __this);
bool ContourEnumerator__MoveNext(ContourEnumerator* __this);
ContourEnumerator* ContourEnumerator__New_1(::uStatic* __this, ::app::Fuse::Drawing::PathGeometry* head, ::app::Uno::Float2 scale);
void ContourEnumerator__Reset(ContourEnumerator* __this);

struct ContourEnumerator : ::uObject
{
    ::uStrong< ::app::Fuse::Drawing::PathGeometry*> _currentHead;
    ::uStrong< ::app::Fuse::Drawing::Contour*> _current;
    ::app::Uno::Float2 _scale;

    void _ObjInit(::app::Fuse::Drawing::PathGeometry* head, ::app::Uno::Float2 scale) { ContourEnumerator___ObjInit(this, head, scale); }
    void Dispose() { ContourEnumerator__Dispose(this); }
    ::app::Fuse::Drawing::Contour* Current() { return ContourEnumerator__get_Current(this); }
    bool MoveNext() { return ContourEnumerator__MoveNext(this); }
    void Reset() { ContourEnumerator__Reset(this); }
};

}}}


#endif
