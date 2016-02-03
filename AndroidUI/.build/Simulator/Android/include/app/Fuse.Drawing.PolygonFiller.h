// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Drawing.Polygons\0.11.3\Rendering\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_FUSE_DRAWING_POLYGON_FILLER_H__
#define __APP_FUSE_DRAWING_POLYGON_FILLER_H__

#include <app/Uno.IDisposable.h>
#include <app/Uno.Object.h>
#include <app/Uno.Rect.h>
#include <Uno.h>
namespace app { namespace Fuse { namespace Drawing { struct Border; } } }
namespace app { namespace Fuse { namespace Drawing { struct Brush; } } }
namespace app { namespace Fuse { namespace Drawing { struct Contour; } } }
namespace app { namespace Fuse { namespace Drawing { struct Polygon; } } }
namespace app { namespace Fuse { namespace Drawing { struct PolygonDrawable; } } }
namespace app { namespace Fuse { namespace Drawing { struct RendererContext; } } }
namespace app { namespace Fuse { struct DrawContext; } }
namespace app { namespace Uno { struct Float2; } }
namespace app { namespace Uno { struct Float4x4; } }

namespace app {
namespace Fuse {
namespace Drawing {

struct PolygonFiller;

struct PolygonFiller__uType : ::uClassType
{
    ::app::Uno::IDisposable __interface_0;
};

PolygonFiller__uType* PolygonFiller__typeof();

void PolygonFiller___ObjInit(PolygonFiller* __this, ::app::Fuse::Drawing::Polygon* polygon, int antialiasing, float density);
::app::Uno::Rect PolygonFiller__CalcBounds(PolygonFiller* __this);
void PolygonFiller__ClearDepth(PolygonFiller* __this, float depth);
::app::Fuse::Drawing::Contour* PolygonFiller__Contour(PolygonFiller* __this, ::app::Fuse::Drawing::Border* border);
::app::Fuse::Drawing::Border* PolygonFiller__CreateBorder(PolygonFiller* __this, ::app::Fuse::Drawing::Contour* contour);
void PolygonFiller__Dispose(PolygonFiller* __this);
void PolygonFiller__Draw(PolygonFiller* __this, ::app::Fuse::Drawing::Brush* f, ::app::Fuse::DrawContext* dc, ::app::Uno::Float4x4 transform, ::app::Uno::Float2 elementSize);
void PolygonFiller__Draw_1(PolygonFiller* __this, ::app::Fuse::Drawing::Brush* f, ::app::Fuse::Drawing::RendererContext* ctx);
::app::Uno::Rect PolygonFiller__get_Bounds(PolygonFiller* __this);
bool PolygonFiller__Intersects(PolygonFiller* __this, ::app::Uno::Float2 p);
PolygonFiller* PolygonFiller__New_1(::uStatic* __this, ::app::Fuse::Drawing::Polygon* polygon, int antialiasing, float density);

struct PolygonFiller : ::uObject
{
    ::uStrong< ::uArray*> _fills;
    ::uStrong< ::uArray*> _antialiasingBorders;
    float _px;
    float _density;
    bool _hasBounds;
    ::app::Uno::Rect _bounds;

    void _ObjInit(::app::Fuse::Drawing::Polygon* polygon, int antialiasing, float density) { PolygonFiller___ObjInit(this, polygon, antialiasing, density); }
    ::app::Uno::Rect CalcBounds();
    void ClearDepth(float depth) { PolygonFiller__ClearDepth(this, depth); }
    ::app::Fuse::Drawing::Contour* Contour(::app::Fuse::Drawing::Border* border) { return PolygonFiller__Contour(this, border); }
    ::app::Fuse::Drawing::Border* CreateBorder(::app::Fuse::Drawing::Contour* contour) { return PolygonFiller__CreateBorder(this, contour); }
    void Dispose() { PolygonFiller__Dispose(this); }
    void Draw(::app::Fuse::Drawing::Brush* f, ::app::Fuse::DrawContext* dc, ::app::Uno::Float4x4 transform, ::app::Uno::Float2 elementSize);
    void Draw_1(::app::Fuse::Drawing::Brush* f, ::app::Fuse::Drawing::RendererContext* ctx) { PolygonFiller__Draw_1(this, f, ctx); }
    ::app::Uno::Rect Bounds();
    bool Intersects(::app::Uno::Float2 p);
};

}}}

#include <app/Uno.Float2.h>
#include <app/Uno.Float4x4.h>

namespace app {
namespace Fuse {
namespace Drawing {

inline ::app::Uno::Rect PolygonFiller::CalcBounds() { return PolygonFiller__CalcBounds(this); }
inline void PolygonFiller::Draw(::app::Fuse::Drawing::Brush* f, ::app::Fuse::DrawContext* dc, ::app::Uno::Float4x4 transform, ::app::Uno::Float2 elementSize) { PolygonFiller__Draw(this, f, dc, transform, elementSize); }
inline ::app::Uno::Rect PolygonFiller::Bounds() { return PolygonFiller__get_Bounds(this); }
inline bool PolygonFiller::Intersects(::app::Uno::Float2 p) { return PolygonFiller__Intersects(this, p); }

}}}


#endif
