// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Elements\0.11.3\Caching\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_FUSE_ELEMENTS_ELEMENT_BATCHER_H__
#define __APP_FUSE_ELEMENTS_ELEMENT_BATCHER_H__

#include <app/Fuse.Resources.ISoftDisposable.h>
#include <app/Uno.Object.h>
#include <Uno.h>
namespace app { namespace Fuse { namespace Elements { struct ElementAtlas; } } }
namespace app { namespace Fuse { namespace Elements { struct ElementBatch; } } }
namespace app { namespace Fuse { struct DrawContext; } }
namespace app { namespace Fuse { struct Node; } }
namespace app { namespace Uno { namespace Collections { struct List__Fuse_Elements_ElementAtlas; } } }
namespace app { namespace Uno { namespace Collections { struct List__Fuse_Elements_ElementBatch; } } }
namespace app { namespace Uno { namespace Collections { struct List__Fuse_Elements_IElementBatchDrawable; } } }
namespace app { namespace Uno { namespace Collections { struct List__Fuse_Node; } } }
namespace app { namespace Uno { struct EventArgs; } }
namespace app { namespace Uno { struct Int2; } }

namespace app {
namespace Fuse {
namespace Elements {

struct ElementBatcher;

struct ElementBatcher__uType : ::uClassType
{
    ::app::Fuse::Resources::ISoftDisposable __interface_0;
};

ElementBatcher__uType* ElementBatcher__typeof();

void ElementBatcher___ObjInit(ElementBatcher* __this);
void ElementBatcher__AddElement(ElementBatcher* __this, ::app::Fuse::Node* elm);
::app::Fuse::Elements::ElementAtlas* ElementBatcher__allocAtlas(ElementBatcher* __this);
::app::Fuse::Elements::ElementBatch* ElementBatcher__allocBatch(ElementBatcher* __this, ::app::Fuse::Elements::ElementAtlas* atlas);
void ElementBatcher__DiscardAtlasing(ElementBatcher* __this);
void ElementBatcher__DiscardBatching(ElementBatcher* __this);
void ElementBatcher__Draw(ElementBatcher* __this, ::app::Fuse::DrawContext* dc);
void ElementBatcher__Fuse_Resources_ISoftDisposable_SoftDispose(ElementBatcher* __this);
int ElementBatcher__get_MaxElementPixels(::uStatic* __this);
::app::Uno::Int2 ElementBatcher__get_MaxElementSize(::uStatic* __this);
ElementBatcher* ElementBatcher__New_1(::uStatic* __this);
void ElementBatcher__OnAtlasSizeChanged(ElementBatcher* __this, ::uObject* sender, ::app::Uno::EventArgs* args);
void ElementBatcher__RemoveAllElements(ElementBatcher* __this);
bool ElementBatcher__ShouldBatchElement(::uStatic* __this, ::app::Fuse::Node* node);
bool ElementBatcher__ShouldBatchElementWithCachingMode(::uStatic* __this, int mode);
bool ElementBatcher__ShouldBatchElementWithSize(::uStatic* __this, ::app::Uno::Int2 size);
void ElementBatcher__UpdateDrawList(ElementBatcher* __this);

struct ElementBatcher : ::uObject
{
    ::uStrong< ::app::Uno::Collections::List__Fuse_Node*> _elements;
    ::uStrong< ::app::Uno::Collections::List__Fuse_Elements_ElementAtlas*> _atlasPool;
    ::uStrong< ::app::Uno::Collections::List__Fuse_Elements_ElementBatch*> _batchPool;
    ::uStrong< ::app::Uno::Collections::List__Fuse_Elements_IElementBatchDrawable*> _drawList;
    float MaxSpilledRatio;
    bool DrawListValid;

    void _ObjInit() { ElementBatcher___ObjInit(this); }
    void AddElement(::app::Fuse::Node* elm) { ElementBatcher__AddElement(this, elm); }
    ::app::Fuse::Elements::ElementAtlas* allocAtlas() { return ElementBatcher__allocAtlas(this); }
    ::app::Fuse::Elements::ElementBatch* allocBatch(::app::Fuse::Elements::ElementAtlas* atlas) { return ElementBatcher__allocBatch(this, atlas); }
    void DiscardAtlasing() { ElementBatcher__DiscardAtlasing(this); }
    void DiscardBatching() { ElementBatcher__DiscardBatching(this); }
    void Draw(::app::Fuse::DrawContext* dc) { ElementBatcher__Draw(this, dc); }
    void OnAtlasSizeChanged(::uObject* sender, ::app::Uno::EventArgs* args) { ElementBatcher__OnAtlasSizeChanged(this, sender, args); }
    void RemoveAllElements() { ElementBatcher__RemoveAllElements(this); }
    void UpdateDrawList() { ElementBatcher__UpdateDrawList(this); }
};

}}}


#endif
