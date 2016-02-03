// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Android\0.18.8\Controls\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Android.Controls.Element.h>
#include <Fuse.Scripting.INameScope.h>
namespace g{namespace Android{namespace android{namespace view{struct View;}}}}
namespace g{namespace Fuse{namespace Android{namespace Controls{struct Control;}}}}
namespace g{namespace Fuse{namespace Controls{struct Control;}}}

namespace g{
namespace Fuse{
namespace Android{
namespace Controls{

// public abstract extern class Control<T> :315
// {
struct Control_type : ::g::Fuse::Android::Controls::Element_type
{
    void(*fp_Attach)(::g::Fuse::Android::Controls::Control*);
    void(*fp_Detach)(::g::Fuse::Android::Controls::Control*);
    void(*fp_get_ShowKeyboard)(::g::Fuse::Android::Controls::Control*, bool*);
};

Control_type* Control_typeof();
void Control__ctor_2_fn(Control* __this);
void Control__Create_fn(Control* __this, ::g::Android::android::view::View** __retval);
void Control__FindSemanticControl_fn(Control* __this, ::g::Fuse::Controls::Control** __retval);
void Control__OnGotFocus_fn(Control* __this, uObject* s, uObject* a);
void Control__OnLostFocus_fn(Control* __this, uObject* s, uObject* a);
void Control__OnNativeFocusChanged_fn(Control* __this, uObject* s, bool* hasFocus);
void Control__OnRooted_fn(Control* __this);
void Control__OnUnrooted_fn(Control* __this);
void Control__ScheduleFocusLoss_fn(Control* __this);
void Control__get_SemanticControl_fn(Control* __this, ::g::Fuse::Controls::Control** __retval);
void Control__get_ShowKeyboard_fn(Control* __this, bool* __retval);

struct Control : ::g::Fuse::Android::Controls::Element
{
    uStrong< ::g::Fuse::Controls::Control*> _semanticControl;
    uStrong< ::g::Android::android::view::View*> _view;

    void ctor_2();
    void Attach() { (((Control_type*)__type)->fp_Attach)(this); }
    void Detach() { (((Control_type*)__type)->fp_Detach)(this); }
    ::g::Fuse::Controls::Control* FindSemanticControl();
    void OnGotFocus(uObject* s, uObject* a);
    void OnLostFocus(uObject* s, uObject* a);
    void OnNativeFocusChanged(uObject* s, bool hasFocus);
    void ScheduleFocusLoss();
    ::g::Fuse::Controls::Control* SemanticControl();
    bool ShowKeyboard() { bool __retval; return (((Control_type*)__type)->fp_get_ShowKeyboard)(this, &__retval), __retval; }
    static bool ShowKeyboard(Control* __this) { bool __retval; return Control__get_ShowKeyboard_fn(__this, &__retval), __retval; }
};
// }

}}}} // ::g::Fuse::Android::Controls
