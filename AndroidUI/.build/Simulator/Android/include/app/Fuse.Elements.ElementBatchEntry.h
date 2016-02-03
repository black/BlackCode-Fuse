// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Elements\0.11.3\Caching\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_FUSE_ELEMENTS_ELEMENT_BATCH_ENTRY_H__
#define __APP_FUSE_ELEMENTS_ELEMENT_BATCH_ENTRY_H__

#include <app/Uno.Object.h>
#include <app/Uno.Recti.h>
#include <Uno.h>
namespace app { namespace Fuse { namespace Elements { struct Element; } } }
namespace app { namespace Fuse { namespace Elements { struct ElementAtlas; } } }
namespace app { namespace Fuse { namespace Elements { struct ElementBatch; } } }

namespace app {
namespace Fuse {
namespace Elements {

struct ElementBatchEntry;

struct ElementBatchEntry__uType : ::uClassType
{
};

ElementBatchEntry__uType* ElementBatchEntry__typeof();

void ElementBatchEntry___ObjInit(ElementBatchEntry* __this, ::app::Fuse::Elements::Element* elm);
float ElementBatchEntry__GetEffectiveOpacity(ElementBatchEntry* __this);
void ElementBatchEntry__InvalidateRenderBounds(ElementBatchEntry* __this);
void ElementBatchEntry__InvalidateTransform(ElementBatchEntry* __this);
void ElementBatchEntry__InvalidateVisual(ElementBatchEntry* __this);
void ElementBatchEntry__InvalidateVisualComposition(ElementBatchEntry* __this);
ElementBatchEntry* ElementBatchEntry__New_1(::uStatic* __this, ::app::Fuse::Elements::Element* elm);

struct ElementBatchEntry : ::uObject
{
    ::uStrong< ::app::Fuse::Elements::ElementAtlas*> _atlas;
    ::uStrong< ::app::Fuse::Elements::ElementBatch*> _batch;
    ::uStrong< ::app::Fuse::Elements::Element*> _elm;
    ::app::Uno::Recti _rect;
    float _opacity;
    bool IsValid;

    void _ObjInit(::app::Fuse::Elements::Element* elm) { ElementBatchEntry___ObjInit(this, elm); }
    float GetEffectiveOpacity() { return ElementBatchEntry__GetEffectiveOpacity(this); }
    void InvalidateRenderBounds() { ElementBatchEntry__InvalidateRenderBounds(this); }
    void InvalidateTransform() { ElementBatchEntry__InvalidateTransform(this); }
    void InvalidateVisual() { ElementBatchEntry__InvalidateVisual(this); }
    void InvalidateVisualComposition() { ElementBatchEntry__InvalidateVisualComposition(this); }
};

}}}


#endif
