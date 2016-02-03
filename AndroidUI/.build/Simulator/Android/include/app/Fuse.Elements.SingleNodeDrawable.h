// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Elements\0.11.3\Caching\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_FUSE_ELEMENTS_SINGLE_NODE_DRAWABLE_H__
#define __APP_FUSE_ELEMENTS_SINGLE_NODE_DRAWABLE_H__

#include <app/Fuse.Elements.IElementBatchDrawable.h>
#include <app/Uno.Object.h>
#include <Uno.h>
namespace app { namespace Fuse { struct DrawContext; } }
namespace app { namespace Fuse { struct Node; } }
namespace app { namespace Uno { struct Float4x4; } }
namespace app { namespace Uno { struct Rect; } }

namespace app {
namespace Fuse {
namespace Elements {

struct SingleNodeDrawable;

struct SingleNodeDrawable__uType : ::uClassType
{
    ::app::Fuse::Elements::IElementBatchDrawable __interface_0;
};

SingleNodeDrawable__uType* SingleNodeDrawable__typeof();

void SingleNodeDrawable___ObjInit(SingleNodeDrawable* __this, ::app::Fuse::Node* elm);
void SingleNodeDrawable__Draw(SingleNodeDrawable* __this, ::app::Fuse::DrawContext* dc, ::app::Uno::Float4x4 localToClipTransform, ::app::Uno::Rect scissorRectInClipSpace);
SingleNodeDrawable* SingleNodeDrawable__New_1(::uStatic* __this, ::app::Fuse::Node* elm);

struct SingleNodeDrawable : ::uObject
{
    ::uStrong< ::app::Fuse::Node*> _elm;

    void _ObjInit(::app::Fuse::Node* elm) { SingleNodeDrawable___ObjInit(this, elm); }
    void Draw(::app::Fuse::DrawContext* dc, ::app::Uno::Float4x4 localToClipTransform, ::app::Uno::Rect scissorRectInClipSpace);
};

}}}

#include <app/Uno.Float4x4.h>
#include <app/Uno.Rect.h>

namespace app {
namespace Fuse {
namespace Elements {

inline void SingleNodeDrawable::Draw(::app::Fuse::DrawContext* dc, ::app::Uno::Float4x4 localToClipTransform, ::app::Uno::Rect scissorRectInClipSpace) { SingleNodeDrawable__Draw(this, dc, localToClipTransform, scissorRectInClipSpace); }

}}}


#endif
