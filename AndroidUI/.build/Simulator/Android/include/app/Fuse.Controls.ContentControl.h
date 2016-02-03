// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Controls\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_FUSE_CONTROLS_CONTENT_CONTROL_H__
#define __APP_FUSE_CONTROLS_CONTENT_CONTROL_H__

#include <app/Fuse.Animations.IResize.h>
#include <app/Fuse.Controls.Control.h>
#include <app/Fuse.IActualPlacement.h>
#include <app/Fuse.Scripting.INameScope.h>
#include <app/Fuse.Triggers.Actions.ICollapse.h>
#include <app/Fuse.Triggers.Actions.IHide.h>
#include <app/Fuse.Triggers.Actions.IShow.h>
#include <Uno.h>
namespace app { namespace Fuse { struct DrawContext; } }
namespace app { namespace Fuse { struct HitTestContext; } }
namespace app { namespace Fuse { struct Node; } }
namespace app { namespace Uno { struct Float2; } }
namespace app { namespace Uno { struct Rect; } }

namespace app {
namespace Fuse {
namespace Controls {

struct ContentControl;

struct ContentControl__uType : ::app::Fuse::Controls::Control__uType
{
    void(*__fp_OnContentChanged)(ContentControl*, ::app::Fuse::Node*, ::app::Fuse::Node*);
};

ContentControl__uType* ContentControl__typeof();

void ContentControl___ObjInit_3(ContentControl* __this);
void ContentControl__ArrangePaddingBox(ContentControl* __this, ::app::Uno::Float2 size);
::app::Uno::Rect ContentControl__CalcRenderBounds(ContentControl* __this);
::app::Fuse::Node* ContentControl__get_Content(ContentControl* __this);
int ContentControl__get_SubNodeCount(ContentControl* __this);
::app::Uno::Float2 ContentControl__GetContentSize(ContentControl* __this, ::app::Uno::Float2 fillSize, int fillSet);
::app::Fuse::Node* ContentControl__GetSubNode(ContentControl* __this, int index);
ContentControl* ContentControl__New_1(::uStatic* __this);
void ContentControl__OnContentChanged(ContentControl* __this, ::app::Fuse::Node* oldContent, ::app::Fuse::Node* newContent);
void ContentControl__OnDrawControl(ContentControl* __this, ::app::Fuse::DrawContext* dc);
void ContentControl__OnHitTestChildren(ContentControl* __this, ::app::Fuse::HitTestContext* htc);
void ContentControl__set_Content(ContentControl* __this, ::app::Fuse::Node* value);

struct ContentControl : ::app::Fuse::Controls::Control
{
    ::uStrong< ::app::Fuse::Node*> _content;

    void _ObjInit_3() { ContentControl___ObjInit_3(this); }
    ::app::Fuse::Node* Content() { return ContentControl__get_Content(this); }
    void OnContentChanged(::app::Fuse::Node* oldContent, ::app::Fuse::Node* newContent) { (((ContentControl__uType*)this->__obj_type)->__fp_OnContentChanged)(this, oldContent, newContent); }
    void Content(::app::Fuse::Node* value) { ContentControl__set_Content(this, value); }
};

}}}


#endif
