// This file was generated based on 'C:\Users\Kuro\Documents\Fuse\Welcome\.build\Simulator\Android\Cache\GeneratedCode\MainView.g.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.App.h>
namespace g{namespace Fuse{namespace Controls{struct Image;}}}
namespace g{namespace Fuse{namespace Controls{struct Panel;}}}
namespace g{namespace Fuse{namespace Triggers{struct Timeline;}}}
namespace g{namespace Fuse{struct Rotation;}}
namespace g{namespace Fuse{struct Scaling;}}
namespace g{namespace Fuse{struct Translation;}}
namespace g{struct Camera;}
namespace g{struct MainView;}
namespace g{struct MainView__Fuse_Elements_Element_float_Opacity_Property;}
namespace g{struct MainView__Fuse_Rotation_float_Degrees_Property;}
namespace g{struct MainView__Fuse_Scaling_float_Factor_Property;}
namespace g{struct MainView__Fuse_Translation_float_X_Property;}
namespace g{struct MainView__Fuse_Triggers_Timeline_double_TargetProgress_Property;}
namespace g{struct Notes;}
namespace g{struct Payment;}
namespace g{struct T;}

namespace g{

// public partial sealed class MainView :102
// {
::g::Fuse::AppBase_type* MainView_typeof();
void MainView__ctor_3_fn(MainView* __this);
void MainView__InitializeUX_fn(MainView* __this);
void MainView__New1_fn(MainView** __retval);

struct MainView : ::g::Fuse::App
{
    uStrong< ::g::Fuse::Controls::Image*> arrow1;
    uStrong<MainView__Fuse_Elements_Element_float_Opacity_Property*> arrow1_Opacity_inst;
    uStrong< ::g::Fuse::Controls::Image*> arrow2;
    uStrong<MainView__Fuse_Elements_Element_float_Opacity_Property*> arrow2_Opacity_inst;
    uStrong< ::g::Camera*> camera;
    uStrong<MainView__Fuse_Elements_Element_float_Opacity_Property*> camera_Opacity_inst;
    uStrong< ::g::Notes*> notes;
    uStrong<MainView__Fuse_Elements_Element_float_Opacity_Property*> notes_Opacity_inst;
    uStrong< ::g::Fuse::Rotation*> notesRot;
    uStrong<MainView__Fuse_Rotation_float_Degrees_Property*> notesRot_Degrees_inst;
    uStrong< ::g::Fuse::Translation*> notesTrans;
    uStrong<MainView__Fuse_Translation_float_X_Property*> notesTrans_X_inst;
    uStrong< ::g::Fuse::Controls::Panel*> panel2;
    uStrong< ::g::Payment*> payment;
    uStrong<MainView__Fuse_Elements_Element_float_Opacity_Property*> payment_Opacity_inst;
    uStrong< ::g::Fuse::Rotation*> paymentRot;
    uStrong<MainView__Fuse_Rotation_float_Degrees_Property*> paymentRot_Degrees_inst;
    uStrong< ::g::Fuse::Translation*> paymentTrans;
    uStrong<MainView__Fuse_Translation_float_X_Property*> paymentTrans_X_inst;
    uStrong< ::g::Fuse::Controls::Panel*> Send;
    uStrong<MainView__Fuse_Elements_Element_float_Opacity_Property*> Send_Opacity_inst;
    uStrong< ::g::Fuse::Controls::Panel*> sendImage;
    uStrong< ::g::Fuse::Scaling*> sendScaling;
    uStrong<MainView__Fuse_Scaling_float_Factor_Property*> sendScaling_Factor_inst;
    uStrong< ::g::T*> text1;
    uStrong<MainView__Fuse_Elements_Element_float_Opacity_Property*> text1_Opacity_inst;
    uStrong< ::g::T*> text2;
    uStrong<MainView__Fuse_Elements_Element_float_Opacity_Property*> text2_Opacity_inst;
    uStrong< ::g::T*> text3;
    uStrong<MainView__Fuse_Elements_Element_float_Opacity_Property*> text3_Opacity_inst;
    uStrong< ::g::T*> text4;
    uStrong<MainView__Fuse_Elements_Element_float_Opacity_Property*> text4_Opacity_inst;
    uStrong< ::g::Fuse::Triggers::Timeline*> timeline;
    uStrong<MainView__Fuse_Triggers_Timeline_double_TargetProgress_Property*> timeline_TargetProgress_inst;

    void ctor_3();
    void InitializeUX();
    static MainView* New1();
};
// }

} // ::g
