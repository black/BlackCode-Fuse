// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Controls\0.11.3\Graphics\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_FUSE_CONTROLS_GRAPHICS_PATH_VISUAL_H__
#define __APP_FUSE_CONTROLS_GRAPHICS_PATH_VISUAL_H__

#include <app/Fuse.Controls.Graphics.PathShapeVisual__Fuse_Controls_Path.h>
#include <app/Fuse.Scripting.INameScope.h>
#include <app/Uno.Float2.h>
#include <Uno.h>
namespace app { namespace Fuse { namespace Controls { struct Path; } } }
namespace app { namespace Fuse { namespace Drawing { struct PathGeometryRenderer; } } }
namespace app { namespace Uno { struct Float4x4; } }
namespace app { namespace Uno { struct Rect; } }

namespace app {
namespace Fuse {
namespace Controls {
namespace Graphics {

struct PathVisual;

struct PathVisual__uType : ::app::Fuse::Controls::Graphics::PathShapeVisual__Fuse_Controls_Path__uType
{
};

PathVisual__uType* PathVisual__typeof();

void PathVisual___ObjInit_5(PathVisual* __this);
::app::Uno::Float4x4 PathVisual__AlignMatrix(PathVisual* __this, ::app::Uno::Float4x4 b);
::app::Uno::Rect PathVisual__get_LocalRenderBounds(PathVisual* __this);
::app::Fuse::Controls::Path* PathVisual__get_Path(PathVisual* __this);
::app::Uno::Float2 PathVisual__GetMarginSize(PathVisual* __this, ::app::Uno::Float2 fillSize, int fillSet);
::app::Uno::Float2 PathVisual__GetNaturalContentSize(PathVisual* __this);
PathVisual* PathVisual__New_1(::uStatic* __this);
::app::Uno::Float2 PathVisual__OnArrangeMarginBox(PathVisual* __this, ::app::Uno::Float2 position, ::app::Uno::Float2 fillSize, int fillSet);
void PathVisual__UpdatePath(PathVisual* __this, ::app::Fuse::Drawing::PathGeometryRenderer* renderer);

struct PathVisual : ::app::Fuse::Controls::Graphics::PathShapeVisual__Fuse_Controls_Path
{
    ::app::Uno::Float2 _postScale;
    ::app::Uno::Float2 _origin;

    void _ObjInit_5() { PathVisual___ObjInit_5(this); }
    ::app::Fuse::Controls::Path* Path() { return PathVisual__get_Path(this); }
    ::app::Uno::Float2 GetNaturalContentSize();
};

}}}}

#include <app/Uno.Float4x4.h>
#include <app/Uno.Rect.h>

namespace app {
namespace Fuse {
namespace Controls {
namespace Graphics {

inline ::app::Uno::Float2 PathVisual::GetNaturalContentSize() { return PathVisual__GetNaturalContentSize(this); }

}}}}


#endif
