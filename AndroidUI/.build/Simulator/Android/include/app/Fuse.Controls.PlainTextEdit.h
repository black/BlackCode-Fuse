// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Controls\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_FUSE_CONTROLS_PLAIN_TEXT_EDIT_H__
#define __APP_FUSE_CONTROLS_PLAIN_TEXT_EDIT_H__

#include <app/Fuse.Animations.IResize.h>
#include <app/Fuse.Controls.Panel.h>
#include <app/Fuse.IActualPlacement.h>
#include <app/Fuse.Navigation.INavigationPanel.h>
#include <app/Fuse.Scripting.INameScope.h>
#include <app/Fuse.Triggers.Actions.ICollapse.h>
#include <app/Fuse.Triggers.Actions.IHide.h>
#include <app/Fuse.Triggers.Actions.IShow.h>
#include <app/Fuse.Triggers.IAddRemove__Fuse_Node.h>
#include <Uno.h>
namespace app { namespace Fuse { namespace Controls { struct NativeViewHost; } } }
namespace app { namespace Fuse { struct Node; } }
namespace app { namespace Fuse { struct StyleProperty__Fuse_Controls_PlainTextEdit__Uno_UX_IFactory; } }

namespace app {
namespace Fuse {
namespace Controls {

struct PlainTextEdit;

extern ::uStaticStrong< ::app::Fuse::StyleProperty__Fuse_Controls_PlainTextEdit__Uno_UX_IFactory*> PlainTextEdit__NativeEditProperty;
extern ::uStaticStrong< ::app::Fuse::StyleProperty__Fuse_Controls_PlainTextEdit__Uno_UX_IFactory*> PlainTextEdit__NativeTextProperty;

struct PlainTextEdit__uType : ::app::Fuse::Controls::Panel__uType
{
};

PlainTextEdit__uType* PlainTextEdit__typeof();

void PlainTextEdit___ObjInit_4(PlainTextEdit* __this);
void PlainTextEdit___TypeInit_4(::uStatic* __this);
::app::Fuse::Node* PlainTextEdit__ForwardFocusNode(PlainTextEdit* __this);
::uObject* PlainTextEdit__get_NativeEdit(PlainTextEdit* __this);
::uObject* PlainTextEdit__get_NativeText(PlainTextEdit* __this);
PlainTextEdit* PlainTextEdit__New_2(::uStatic* __this);
void PlainTextEdit__OnFactoryChanged(::uStatic* __this, PlainTextEdit* pte);
void PlainTextEdit__OnLostFocus(PlainTextEdit* __this, ::uObject* s, ::uObject* a);
void PlainTextEdit__OnRooted(PlainTextEdit* __this);
void PlainTextEdit__OnUnrooted(PlainTextEdit* __this);
void PlainTextEdit__set_NativeEdit(PlainTextEdit* __this, ::uObject* value);
void PlainTextEdit__set_NativeText(PlainTextEdit* __this, ::uObject* value);
void PlainTextEdit__SetupEdit(PlainTextEdit* __this);
void PlainTextEdit__SetupText(PlainTextEdit* __this);

struct PlainTextEdit : ::app::Fuse::Controls::Panel
{
    ::uStrong< ::app::Fuse::Controls::NativeViewHost*> _nativeViewHost;
    ::uStrong< ::app::Fuse::Node*> _nativeEdit;
    ::uStrong< ::app::Fuse::Node*> _nativeText;
    bool _textMode;

    void _ObjInit_4() { PlainTextEdit___ObjInit_4(this); }
    ::app::Fuse::Node* ForwardFocusNode() { return PlainTextEdit__ForwardFocusNode(this); }
    ::uObject* NativeEdit() { return PlainTextEdit__get_NativeEdit(this); }
    ::uObject* NativeText() { return PlainTextEdit__get_NativeText(this); }
    void OnLostFocus(::uObject* s, ::uObject* a) { PlainTextEdit__OnLostFocus(this, s, a); }
    void NativeEdit(::uObject* value) { PlainTextEdit__set_NativeEdit(this, value); }
    void NativeText(::uObject* value) { PlainTextEdit__set_NativeText(this, value); }
    void SetupEdit() { PlainTextEdit__SetupEdit(this); }
    void SetupText() { PlainTextEdit__SetupText(this); }
};

}}}


#endif
