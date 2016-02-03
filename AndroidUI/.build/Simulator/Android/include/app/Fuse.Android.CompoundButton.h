// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Android.Views\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_FUSE_ANDROID_COMPOUND_BUTTON_H__
#define __APP_FUSE_ANDROID_COMPOUND_BUTTON_H__

#include <app/Fuse.Android.ControlView__Fuse_Controls_ToggleControl.h>
#include <app/Fuse.Scripting.INameScope.h>
#include <Uno.h>
namespace app { namespace Android { namespace android { namespace view { struct View; } } } }
namespace app { namespace Android { namespace android { namespace widget { struct CompoundButton; } } } }
namespace app { namespace Uno { namespace UX { struct ValueChangedArgs__bool; } } }

namespace app {
namespace Fuse {
namespace Android {

struct CompoundButton;

struct CompoundButton__uType : ::app::Fuse::Android::ControlView__Fuse_Controls_ToggleControl__uType
{
    ::app::Android::android::widget::CompoundButton*(*__fp_CreateCompoundButton)(CompoundButton*);
};

CompoundButton__uType* CompoundButton__typeof();

void CompoundButton___ObjInit_3(CompoundButton* __this);
void CompoundButton__Attach(CompoundButton* __this);
::app::Android::android::view::View* CompoundButton__CreateInternal(CompoundButton* __this);
void CompoundButton__Detach(CompoundButton* __this);
void CompoundButton__InitValue(CompoundButton* __this);
void CompoundButton__OnValueChanged(CompoundButton* __this, ::uObject* sender, ::app::Uno::UX::ValueChangedArgs__bool* args);

struct CompoundButton : ::app::Fuse::Android::ControlView__Fuse_Controls_ToggleControl
{
    ::uStrong< ::app::Android::android::widget::CompoundButton*> _switch;

    void _ObjInit_3() { CompoundButton___ObjInit_3(this); }
    ::app::Android::android::widget::CompoundButton* CreateCompoundButton() { return (((CompoundButton__uType*)this->__obj_type)->__fp_CreateCompoundButton)(this); }
    void InitValue() { CompoundButton__InitValue(this); }
    void OnValueChanged(::uObject* sender, ::app::Uno::UX::ValueChangedArgs__bool* args) { CompoundButton__OnValueChanged(this, sender, args); }
};

}}}


#endif
