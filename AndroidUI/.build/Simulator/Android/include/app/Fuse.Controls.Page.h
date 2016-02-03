// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Controls\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_FUSE_CONTROLS_PAGE_H__
#define __APP_FUSE_CONTROLS_PAGE_H__

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

namespace app {
namespace Fuse {
namespace Controls {

struct Page;

struct Page__uType : ::app::Fuse::Controls::Panel__uType
{
};

Page__uType* Page__typeof();

void Page___ObjInit_4(Page* __this);
::uString* Page__get_Title(Page* __this);
Page* Page__New_2(::uStatic* __this);
void Page__OnRestoreState(Page* __this, ::uObject* state);
::uObject* Page__OnSaveState(Page* __this);
void Page__RestoreState(Page* __this, ::uObject* state);
::uObject* Page__SaveState(Page* __this);
void Page__set_Title(Page* __this, ::uString* value);

struct Page : ::app::Fuse::Controls::Panel
{
    void _ObjInit_4() { Page___ObjInit_4(this); }
    ::uString* Title() { return Page__get_Title(this); }
    void OnRestoreState(::uObject* state) { Page__OnRestoreState(this, state); }
    ::uObject* OnSaveState() { return Page__OnSaveState(this); }
    void RestoreState(::uObject* state) { Page__RestoreState(this, state); }
    ::uObject* SaveState() { return Page__SaveState(this); }
    void Title(::uString* value) { Page__set_Title(this, value); }
};

}}}


#endif
