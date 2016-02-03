// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Controls\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_FUSE_CONTROLS_BUTTON_H__
#define __APP_FUSE_CONTROLS_BUTTON_H__

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
namespace app { namespace Fuse { struct StyleProperty__Fuse_Controls_Button__string; } }

namespace app {
namespace Fuse {
namespace Controls {

struct Button;

extern ::uStaticStrong< ::app::Fuse::StyleProperty__Fuse_Controls_Button__string*> Button__TextProperty;

struct Button__uType : ::app::Fuse::Controls::Panel__uType
{
};

Button__uType* Button__typeof();

void Button___ObjInit_4(Button* __this);
void Button___TypeInit_4(::uStatic* __this);
void Button__add_TextChanged(Button* __this, ::uDelegate* value);
::uString* Button__get_Text(Button* __this);
::uString* Button__GetText(::uStatic* __this, Button* b);
Button* Button__New_2(::uStatic* __this);
void Button__OnTextChanged(Button* __this, ::uString* value, ::uString* orig);
void Button__remove_TextChanged(Button* __this, ::uDelegate* value);
void Button__set_Text(Button* __this, ::uString* value);
void Button__SetText(::uStatic* __this, Button* b, ::uString* value);
void Button__SetText_1(Button* __this, ::uString* value, ::uObject* origin);

struct Button : ::app::Fuse::Controls::Panel
{
    ::uStrong< ::uString*> _text;
    ::uStrong< ::uDelegate*> TextChanged;

    void _ObjInit_4() { Button___ObjInit_4(this); }
    void add_TextChanged(::uDelegate* value) { Button__add_TextChanged(this, value); }
    ::uString* Text() { return Button__get_Text(this); }
    void OnTextChanged(::uString* value, ::uString* orig) { Button__OnTextChanged(this, value, orig); }
    void remove_TextChanged(::uDelegate* value) { Button__remove_TextChanged(this, value); }
    void Text(::uString* value) { Button__set_Text(this, value); }
    void SetText_1(::uString* value, ::uObject* origin) { Button__SetText_1(this, value, origin); }
};

}}}


#endif
