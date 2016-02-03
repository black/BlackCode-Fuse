// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Controls\0.11.3\.cache\GeneratedCode\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_FUSE_CONTROLS_CLIENT_PANEL_H__
#define __APP_FUSE_CONTROLS_CLIENT_PANEL_H__

#include <app/Fuse.Animations.IResize.h>
#include <app/Fuse.Controls.DockPanel.h>
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

struct ClientPanel;

struct ClientPanel__uType : ::app::Fuse::Controls::DockPanel__uType
{
};

ClientPanel__uType* ClientPanel__typeof();

void ClientPanel___ObjInit_5(ClientPanel* __this);
void ClientPanel__InitializeUX(ClientPanel* __this);
ClientPanel* ClientPanel__New_3(::uStatic* __this);

struct ClientPanel : ::app::Fuse::Controls::DockPanel
{
    void _ObjInit_5() { ClientPanel___ObjInit_5(this); }
    void InitializeUX() { ClientPanel__InitializeUX(this); }
};

}}}


#endif
