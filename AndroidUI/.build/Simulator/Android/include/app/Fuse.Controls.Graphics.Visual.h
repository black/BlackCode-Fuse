// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Controls\0.11.3\Graphics\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_FUSE_CONTROLS_GRAPHICS_VISUAL_H__
#define __APP_FUSE_CONTROLS_GRAPHICS_VISUAL_H__

#include <app/Fuse.Node.h>
#include <app/Fuse.Scripting.INameScope.h>
#include <app/Uno.Float2.h>
#include <Uno.h>
namespace app { namespace Fuse { struct DrawContext; } }
namespace app { namespace Fuse { struct FastMatrix; } }
namespace app { namespace Fuse { struct NodeDrawCount; } }
namespace app { namespace Uno { struct Rect; } }

namespace app {
namespace Fuse {
namespace Controls {
namespace Graphics {

struct Visual;

struct Visual__uType : ::app::Fuse::Node__uType
{
    void(*__fp_OnDraw)(Visual*, ::app::Fuse::DrawContext*);
};

Visual__uType* Visual__typeof();

void Visual___ObjInit_1(Visual* __this);
void Visual__Draw(Visual* __this, ::app::Fuse::DrawContext* dc);
::app::Uno::Float2 Visual__get_ActualSize(Visual* __this);
::app::Fuse::NodeDrawCount Visual__get_LocalDrawCount(Visual* __this);
::app::Uno::Rect Visual__get_LocalRenderBounds(Visual* __this);
bool Visual__IsPointInside(Visual* __this, ::app::Uno::Float2 localPoint);
::app::Uno::Float2 Visual__OnArrangeMarginBox(Visual* __this, ::app::Uno::Float2 position, ::app::Uno::Float2 availableSize, int availSet);
void Visual__PrependImplicitTransform(Visual* __this, ::app::Fuse::FastMatrix* m);
void Visual__set_ActualSize(Visual* __this, ::app::Uno::Float2 value);

struct Visual : ::app::Fuse::Node
{
    ::app::Uno::Float2 _position;
    ::app::Uno::Float2 _ActualSize;

    void _ObjInit_1() { Visual___ObjInit_1(this); }
    ::app::Uno::Float2 ActualSize();
    bool IsPointInside(::app::Uno::Float2 localPoint);
    void OnDraw(::app::Fuse::DrawContext* dc) { (((Visual__uType*)this->__obj_type)->__fp_OnDraw)(this, dc); }
    void ActualSize(::app::Uno::Float2 value);
};

}}}}

#include <app/Fuse.NodeDrawCount.h>
#include <app/Uno.Rect.h>

namespace app {
namespace Fuse {
namespace Controls {
namespace Graphics {

inline ::app::Uno::Float2 Visual::ActualSize() { return Visual__get_ActualSize(this); }
inline bool Visual::IsPointInside(::app::Uno::Float2 localPoint) { return Visual__IsPointInside(this, localPoint); }
inline void Visual::ActualSize(::app::Uno::Float2 value) { Visual__set_ActualSize(this, value); }

}}}}


#endif
