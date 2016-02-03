// This file was generated based on 'C:\Users\Kuro\Documents\Fuse\Android UX\.build\Simulator\Android\Cache\GeneratedCode\MainView.g.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.App.h>
namespace g{namespace Fuse{namespace Controls{struct Page;}}}
namespace g{namespace Fuse{namespace Effects{struct Blur;}}}
namespace g{namespace Fuse{namespace iOS{struct StatusBarConfig;}}}
namespace g{namespace Fuse{namespace Navigation{struct LinearNavigation;}}}
namespace g{namespace Fuse{namespace Navigation{struct SwipeNavigate;}}}
namespace g{namespace Fuse{namespace Triggers{struct WhileTrue;}}}
namespace g{struct MainView;}
namespace g{struct MainView__Fuse_Effects_Blur_float_Radius_Property;}
namespace g{struct MainView__Fuse_iOS_StatusBarConfig_Uno_Platform_iOS_StatusBarStyle_Style_Property;}
namespace g{struct MainView__Fuse_Triggers_WhileBool_bool_Value_Property;}

namespace g{

// public partial sealed class MainView :1
// {
::g::Fuse::AppBase_type* MainView_typeof();
void MainView__ctor_3_fn(MainView* __this);
void MainView__InitializeUX_fn(MainView* __this);
void MainView__New1_fn(MainView** __retval);

struct MainView : ::g::Fuse::App
{
    uStrong< ::g::Fuse::Effects::Blur*> blur;
    uStrong<MainView__Fuse_Effects_Blur_float_Radius_Property*> blur_Radius_inst;
    uStrong< ::g::Fuse::Triggers::WhileTrue*> canSwipe;
    uStrong<MainView__Fuse_Triggers_WhileBool_bool_Value_Property*> canSwipe_Value_inst;
    uStrong< ::g::Fuse::Navigation::LinearNavigation*> navigation;
    uStrong< ::g::Fuse::Controls::Page*> page2;
    uStrong< ::g::Fuse::Controls::Page*> page3;
    uStrong< ::g::Fuse::iOS::StatusBarConfig*> statusBarConfig;
    uStrong<MainView__Fuse_iOS_StatusBarConfig_Uno_Platform_iOS_StatusBarStyle_Style_Property*> statusBarConfig_Style_inst;
    uStrong< ::g::Fuse::Navigation::SwipeNavigate*> swipeNavigate;

    void ctor_3();
    void InitializeUX();
    static MainView* New1();
};
// }

} // ::g
