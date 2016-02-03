// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Drawing.Primitives\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_FUSE_DRAWING_PRIMITIVES_WEDGE_H__
#define __APP_FUSE_DRAWING_PRIMITIVES_WEDGE_H__

#include <app/Uno.Object.h>
#include <Uno.h>
namespace app { namespace Fuse { namespace Drawing { namespace Primitives { struct ConcaveWedgeCoverage; } } } }
namespace app { namespace Fuse { namespace Drawing { namespace Primitives { struct ConvexWedgeCoverage; } } } }
namespace app { namespace Fuse { namespace Drawing { namespace Primitives { struct FillCoverage; } } } }
namespace app { namespace Fuse { namespace Drawing { namespace Primitives { struct StrokeCoverage; } } } }
namespace app { namespace Fuse { namespace Drawing { namespace Primitives { struct WedgeCoverage; } } } }
namespace app { namespace Fuse { namespace Drawing { struct Brush; } } }
namespace app { namespace Fuse { namespace Drawing { struct Stroke; } } }
namespace app { namespace Fuse { namespace Elements { struct Element; } } }
namespace app { namespace Fuse { struct DrawContext; } }
namespace app { namespace Uno { struct Float2; } }

namespace app {
namespace Fuse {
namespace Drawing {
namespace Primitives {

struct Wedge;

extern ::uStaticStrong< Wedge*> Wedge__Singleton;

struct Wedge__uType : ::uClassType
{
};

Wedge__uType* Wedge__typeof();

void Wedge___ObjInit(Wedge* __this);
void Wedge___TypeInit(::uStatic* __this);
void Wedge__Fill(Wedge* __this, ::app::Fuse::DrawContext* dc, ::app::Fuse::Elements::Element* node, float radius, ::app::Fuse::Drawing::Brush* brush, ::app::Uno::Float2 center, float startAngle, float endAngle, float smoothness);
Wedge* Wedge__New_1(::uStatic* __this);
::app::Fuse::Drawing::Primitives::WedgeCoverage* Wedge__SetupWedgeCoverage(Wedge* __this, float startAngle, float endAngle);
void Wedge__Stroke(Wedge* __this, ::app::Fuse::DrawContext* dc, ::app::Fuse::Elements::Element* node, float radius, ::app::Fuse::Drawing::Stroke* stroke, ::app::Uno::Float2 center, float startAngle, float endAngle, float smoothness);

struct Wedge : ::uObject
{
    ::uStrong< ::app::Fuse::Drawing::Primitives::ConvexWedgeCoverage*> _convexWedgeCoverage;
    ::uStrong< ::app::Fuse::Drawing::Primitives::ConcaveWedgeCoverage*> _concaveWedgeCoverage;
    ::uStrong< ::app::Fuse::Drawing::Primitives::StrokeCoverage*> _strokeCoverage;
    ::uStrong< ::app::Fuse::Drawing::Primitives::FillCoverage*> _fillCoverage;

    void _ObjInit() { Wedge___ObjInit(this); }
    void Fill(::app::Fuse::DrawContext* dc, ::app::Fuse::Elements::Element* node, float radius, ::app::Fuse::Drawing::Brush* brush, ::app::Uno::Float2 center, float startAngle, float endAngle, float smoothness);
    ::app::Fuse::Drawing::Primitives::WedgeCoverage* SetupWedgeCoverage(float startAngle, float endAngle) { return Wedge__SetupWedgeCoverage(this, startAngle, endAngle); }
    void Stroke(::app::Fuse::DrawContext* dc, ::app::Fuse::Elements::Element* node, float radius, ::app::Fuse::Drawing::Stroke* stroke, ::app::Uno::Float2 center, float startAngle, float endAngle, float smoothness);
};

}}}}

#include <app/Uno.Float2.h>

namespace app {
namespace Fuse {
namespace Drawing {
namespace Primitives {

inline void Wedge::Fill(::app::Fuse::DrawContext* dc, ::app::Fuse::Elements::Element* node, float radius, ::app::Fuse::Drawing::Brush* brush, ::app::Uno::Float2 center, float startAngle, float endAngle, float smoothness) { Wedge__Fill(this, dc, node, radius, brush, center, startAngle, endAngle, smoothness); }
inline void Wedge::Stroke(::app::Fuse::DrawContext* dc, ::app::Fuse::Elements::Element* node, float radius, ::app::Fuse::Drawing::Stroke* stroke, ::app::Uno::Float2 center, float startAngle, float endAngle, float smoothness) { Wedge__Stroke(this, dc, node, radius, stroke, center, startAngle, endAngle, smoothness); }

}}}}


#endif
