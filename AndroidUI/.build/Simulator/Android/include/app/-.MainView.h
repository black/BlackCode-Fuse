// This file was generated based on 'C:\Users\Kuro\Documents\Fuse\Android UI\.cache\GeneratedCode\MainView.g.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP___MAIN_VIEW_H__
#define __APP___MAIN_VIEW_H__

#include <app/Fuse.App.h>
#include <Uno.h>
namespace app { namespace Fuse { namespace Controls { struct Page; } } }
namespace app { namespace Fuse { namespace Effects { struct Blur; } } }
namespace app { namespace Fuse { namespace iOS { struct StatusBarConfig; } } }
namespace app { namespace Fuse { namespace Navigation { struct LinearNavigation; } } }
namespace app { namespace Fuse { namespace Navigation { struct SwipeNavigate; } } }
namespace app { namespace Fuse { namespace Triggers { struct WhileTrue; } } }
namespace app { struct MainView_Fuse_Effects_Blur_float_Radius_Property; }
namespace app { struct MainView_Fuse_iOS_StatusBarConfig_Uno_Platform_iOS_StatusBarStyle_Style_Property; }
namespace app { struct MainView_Fuse_Triggers_WhileBool_bool_Value_Property; }

namespace app {

struct MainView;

struct MainView__uType : ::app::Fuse::App__uType
{
};

MainView__uType* MainView__typeof();

void MainView___ObjInit_3(MainView* __this);
void MainView__InitializeUX(MainView* __this);
MainView* MainView__New_1(::uStatic* __this);

struct MainView : ::app::Fuse::App
{
    ::uStrong< ::app::MainView_Fuse_Triggers_WhileBool_bool_Value_Property*> canSwipe_Value_inst;
    ::uStrong< ::app::MainView_Fuse_iOS_StatusBarConfig_Uno_Platform_iOS_StatusBarStyle_Style_Property*> statusBarConfig_Style_inst;
    ::uStrong< ::app::MainView_Fuse_Effects_Blur_float_Radius_Property*> blur_Radius_inst;
    ::uStrong< ::app::Fuse::iOS::StatusBarConfig*> statusBarConfig;
    ::uStrong< ::app::Fuse::Navigation::LinearNavigation*> navigation;
    ::uStrong< ::app::Fuse::Triggers::WhileTrue*> canSwipe;
    ::uStrong< ::app::Fuse::Navigation::SwipeNavigate*> swipeNavigate;
    ::uStrong< ::app::Fuse::Controls::Page*> page2;
    ::uStrong< ::app::Fuse::Controls::Page*> page3;
    ::uStrong< ::app::Fuse::Effects::Blur*> blur;

    void _ObjInit_3() { MainView___ObjInit_3(this); }
    void InitializeUX() { MainView__InitializeUX(this); }
};

}


#endif
