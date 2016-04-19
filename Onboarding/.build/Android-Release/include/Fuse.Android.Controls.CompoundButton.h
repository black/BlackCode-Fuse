// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Android\0.19.3\Controls\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Android.Controls.Control-1.h>
#include <Fuse.Controls.ToggleControl.h>
namespace g{namespace Android{namespace android{namespace view{struct View;}}}}
namespace g{namespace Android{namespace android{namespace widget{struct CompoundButton;}}}}
namespace g{namespace Fuse{namespace Android{namespace Controls{struct CompoundButton;}}}}
namespace g{namespace Uno{namespace UX{struct ValueChangedArgs;}}}

namespace g{
namespace Fuse{
namespace Android{
namespace Controls{

// public abstract extern class CompoundButton :196
// {
struct CompoundButton_type : ::g::Fuse::Android::Controls::Control_type
{
    void(*fp_CreateCompoundButton)(::g::Fuse::Android::Controls::CompoundButton*, ::g::Android::android::widget::CompoundButton**);
};

CompoundButton_type* CompoundButton_typeof();
void CompoundButton__ctor_3_fn(CompoundButton* __this);
void CompoundButton__Attach_fn(CompoundButton* __this);
void CompoundButton__CreateInternal_fn(CompoundButton* __this, ::g::Android::android::view::View** __retval);
void CompoundButton__Detach_fn(CompoundButton* __this);
void CompoundButton__InitValue_fn(CompoundButton* __this);
void CompoundButton__OnValueChanged_fn(CompoundButton* __this, uObject* sender, ::g::Uno::UX::ValueChangedArgs* args);
void CompoundButton__SetChecked_fn(CompoundButton* __this, bool* val);

struct CompoundButton : ::g::Fuse::Android::Controls::Control
{
    bool _settingChecked;
    uStrong< ::g::Android::android::widget::CompoundButton*> _switch;

    void ctor_3();
    ::g::Android::android::widget::CompoundButton* CreateCompoundButton() { ::g::Android::android::widget::CompoundButton* __retval; return (((CompoundButton_type*)__type)->fp_CreateCompoundButton)(this, &__retval), __retval; }
    void InitValue();
    void OnValueChanged(uObject* sender, ::g::Uno::UX::ValueChangedArgs* args);
    void SetChecked(bool val);
};
// }

}}}} // ::g::Fuse::Android::Controls
