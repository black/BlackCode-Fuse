// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Entities\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_FUSE_ENTITIES_RENDER_NODE_H__
#define __APP_FUSE_ENTITIES_RENDER_NODE_H__

#include <app/Fuse.Node.h>
#include <app/Fuse.Scripting.INameScope.h>
#include <Uno.h>
namespace app { namespace Fuse { struct DrawContext; } }
namespace app { namespace Fuse { struct HitTestContext; } }
namespace app { namespace Uno { namespace Collections { struct ObservableList__Fuse_Node; } } }
namespace app { namespace Uno { namespace Geometry { struct Box; } } }
namespace app { namespace Uno { struct Float2; } }

namespace app {
namespace Fuse {
namespace Entities {

struct RenderNode;

struct RenderNode__uType : ::app::Fuse::Node__uType
{
    void(*__fp_OnDraw)(RenderNode*, ::app::Fuse::DrawContext*);
};

RenderNode__uType* RenderNode__typeof();

void RenderNode___ObjInit_1(RenderNode* __this);
void RenderNode__Draw(RenderNode* __this, ::app::Fuse::DrawContext* dc);
::uObject* RenderNode__get_Children(RenderNode* __this);
::app::Uno::Geometry::Box RenderNode__get_LocalBounds(RenderNode* __this);
int RenderNode__get_SubNodeCount(RenderNode* __this);
::app::Fuse::Node* RenderNode__GetSubNode(RenderNode* __this, int index);
RenderNode* RenderNode__New_1(::uStatic* __this);
::app::Uno::Float2 RenderNode__OnArrangeMarginBox(RenderNode* __this, ::app::Uno::Float2 position, ::app::Uno::Float2 availableSize, int availSet);
void RenderNode__OnChildAdded(RenderNode* __this, ::app::Fuse::Node* c);
void RenderNode__OnChildRemoved(RenderNode* __this, ::app::Fuse::Node* c);
void RenderNode__OnDraw(RenderNode* __this, ::app::Fuse::DrawContext* dc);
void RenderNode__OnHitTest(RenderNode* __this, ::app::Fuse::HitTestContext* args);

struct RenderNode : ::app::Fuse::Node
{
    ::uStrong< ::app::Uno::Collections::ObservableList__Fuse_Node*> _children;

    void _ObjInit_1() { RenderNode___ObjInit_1(this); }
    ::uObject* Children() { return RenderNode__get_Children(this); }
    void OnChildAdded(::app::Fuse::Node* c) { RenderNode__OnChildAdded(this, c); }
    void OnChildRemoved(::app::Fuse::Node* c) { RenderNode__OnChildRemoved(this, c); }
    void OnDraw(::app::Fuse::DrawContext* dc) { (((RenderNode__uType*)this->__obj_type)->__fp_OnDraw)(this, dc); }
};

}}}


#endif
