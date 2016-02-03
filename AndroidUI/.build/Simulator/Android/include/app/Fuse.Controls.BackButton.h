// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Controls\0.11.3\.cache\GeneratedCode\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_FUSE_CONTROLS_BACK_BUTTON_H__
#define __APP_FUSE_CONTROLS_BACK_BUTTON_H__

#include <app/Fuse.Animations.IResize.h>
#include <app/Fuse.Controls.Button.h>
#include <app/Fuse.IActualPlacement.h>
#include <app/Fuse.Navigation.INavigationPanel.h>
#include <app/Fuse.Scripting.INameScope.h>
#include <app/Fuse.Triggers.Actions.ICollapse.h>
#include <app/Fuse.Triggers.Actions.IHide.h>
#include <app/Fuse.Triggers.Actions.IShow.h>
#include <app/Fuse.Triggers.IAddRemove__Fuse_Node.h>
#include <Uno.h>
namespace app { namespace Fuse { namespace Controls { struct BackButton_Fuse_Node_bool_IsEnabled_Property; } } }

namespace app {
namespace Fuse {
namespace Controls {

struct BackButton;

struct BackButton__uType : ::app::Fuse::Controls::Button__uType
{
};

BackButton__uType* BackButton__typeof();

void BackButton___ObjInit_5(BackButton* __this);
void BackButton__InitializeUX(BackButton* __this);
BackButton* BackButton__New_3(::uStatic* __this);

struct BackButton : ::app::Fuse::Controls::Button
{
    ::uStrong< ::app::Fuse::Controls::BackButton_Fuse_Node_bool_IsEnabled_Property*> this_IsEnabled_inst;

    void _ObjInit_5() { BackButton___ObjInit_5(this); }
    void InitializeUX() { BackButton__InitializeUX(this); }
};

}}}


#endif
