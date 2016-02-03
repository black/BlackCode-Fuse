// This file was generated based on 'C:\Users\Kuro\Documents\Fuse\Onboarding\.build\Simulator\Android\Cache\GeneratedCode\MainView.g.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.App.h>
namespace g{namespace Fuse{namespace Controls{struct Image;}}}
namespace g{namespace Fuse{namespace Triggers{struct Timeline;}}}
namespace g{struct MainView;}
namespace g{struct MainView__Fuse_Elements_Element_float_Opacity_Property;}
namespace g{struct MainView__Fuse_Triggers_Timeline_double_TargetProgress_Property;}

namespace g{

// public partial sealed class MainView :1
// {
::g::Fuse::AppBase_type* MainView_typeof();
void MainView__ctor_3_fn(MainView* __this);
void MainView__InitializeUX_fn(MainView* __this);
void MainView__New1_fn(MainView** __retval);

struct MainView : ::g::Fuse::App
{
    uStrong< ::g::Fuse::Controls::Image*> logo;
    uStrong<MainView__Fuse_Elements_Element_float_Opacity_Property*> logo_Opacity_inst;
    uStrong< ::g::Fuse::Triggers::Timeline*> timeline;
    uStrong<MainView__Fuse_Triggers_Timeline_double_TargetProgress_Property*> timeline_TargetProgress_inst;

    void ctor_3();
    void InitializeUX();
    static MainView* New1();
};
// }

} // ::g
