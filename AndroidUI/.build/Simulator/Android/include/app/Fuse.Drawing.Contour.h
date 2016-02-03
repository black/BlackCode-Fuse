// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Drawing.Polygons\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_FUSE_DRAWING_CONTOUR_H__
#define __APP_FUSE_DRAWING_CONTOUR_H__

#include <app/Uno.Object.h>
#include <Uno.h>
namespace app { namespace Fuse { namespace Drawing { struct Cache__float2; } } }
namespace app { namespace Uno { struct Float2; } }

namespace app {
namespace Fuse {
namespace Drawing {

struct Contour;

struct Contour__uType : ::uClassType
{
};

Contour__uType* Contour__typeof();

void Contour___ObjInit(Contour* __this, bool isClosed, ::uArray* vertices);
void Contour___ObjInit_1(Contour* __this, bool isClosed, ::uObject* vertices);
bool Contour__get_IsClosed(Contour* __this);
::app::Uno::Float2 Contour__get_Item(Contour* __this, int vertexIndex);
int Contour__get_VertexCount(Contour* __this);
::uObject* Contour__get_Vertices(Contour* __this);
Contour* Contour__New_1(::uStatic* __this, bool isClosed, ::uArray* vertices);
Contour* Contour__New_2(::uStatic* __this, bool isClosed, ::uObject* vertices);
void Contour__set_IsClosed(Contour* __this, bool value);

struct Contour : ::uObject
{
    ::uStrong< ::app::Fuse::Drawing::Cache__float2*> _vertices;
    int _count;
    bool _IsClosed;

    void _ObjInit(bool isClosed, ::uArray* vertices) { Contour___ObjInit(this, isClosed, vertices); }
    void _ObjInit_1(bool isClosed, ::uObject* vertices) { Contour___ObjInit_1(this, isClosed, vertices); }
    bool IsClosed() { return Contour__get_IsClosed(this); }
    ::app::Uno::Float2 Item(int vertexIndex);
    int VertexCount() { return Contour__get_VertexCount(this); }
    ::uObject* Vertices() { return Contour__get_Vertices(this); }
    void IsClosed(bool value) { Contour__set_IsClosed(this, value); }
};

}}}

#include <app/Uno.Float2.h>

namespace app {
namespace Fuse {
namespace Drawing {

inline ::app::Uno::Float2 Contour::Item(int vertexIndex) { return Contour__get_Item(this, vertexIndex); }

}}}


#endif
