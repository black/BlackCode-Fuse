// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Android\0.19.3\Controls\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Android.Controls.Control-1.h>
#include <Fuse.Controls.TextControl.h>
#include <Fuse.Scripting.INameScope.h>
namespace g{namespace Android{namespace android{namespace view{struct View;}}}}
namespace g{namespace Android{namespace android{namespace widget{struct TextView;}}}}
namespace g{namespace Fuse{namespace Android{namespace Controls{struct TextViewBase;}}}}
namespace g{namespace Uno{namespace UX{struct ValueChangedArgs;}}}
namespace g{namespace Uno{struct EventArgs;}}

namespace g{
namespace Fuse{
namespace Android{
namespace Controls{

// public abstract extern class TextViewBase<T> :1820
// {
struct TextViewBase_type : ::g::Fuse::Android::Controls::Control_type
{
    void(*fp_CreateTextView)(::g::Fuse::Android::Controls::TextViewBase*, ::g::Android::android::widget::TextView**);
    void(*fp_OnTextLayoutPropertyChanged)(::g::Fuse::Android::Controls::TextViewBase*, uObject*, ::g::Uno::EventArgs*);
    void(*fp_OnTextRenderPropertyChanged)(::g::Fuse::Android::Controls::TextViewBase*, uObject*, ::g::Uno::EventArgs*);
};

TextViewBase_type* TextViewBase_typeof();
void TextViewBase__ctor_3_fn(TextViewBase* __this);
void TextViewBase__Attach_fn(TextViewBase* __this);
void TextViewBase__CreateInternal_fn(TextViewBase* __this, ::g::Android::android::view::View** __retval);
void TextViewBase__Detach_fn(TextViewBase* __this);
void TextViewBase__OnTextChanged_fn(TextViewBase* __this, uObject* sender, uString* text);
void TextViewBase__OnTextLayoutPropertyChanged_fn(TextViewBase* __this, uObject* sender, ::g::Uno::EventArgs* args);
void TextViewBase__OnTextRenderPropertyChanged_fn(TextViewBase* __this, uObject* sender, ::g::Uno::EventArgs* args);
void TextViewBase__OnValueChanged_fn(TextViewBase* __this, uObject* sender, ::g::Uno::UX::ValueChangedArgs* args);
void TextViewBase__SetText_fn(TextViewBase* __this);

struct TextViewBase : ::g::Fuse::Android::Controls::Control
{
    int _defaultTextColor;
    bool _settingText;
    uStrong<uObject*> _textChangedEvent;
    uStrong< ::g::Android::android::widget::TextView*> _textView;

    void ctor_3();
    ::g::Android::android::widget::TextView* CreateTextView() { ::g::Android::android::widget::TextView* __retval; return (((TextViewBase_type*)__type)->fp_CreateTextView)(this, &__retval), __retval; }
    void OnTextChanged(uObject* sender, uString* text);
    void OnTextLayoutPropertyChanged(uObject* sender, ::g::Uno::EventArgs* args) { (((TextViewBase_type*)__type)->fp_OnTextLayoutPropertyChanged)(this, sender, args); }
    void OnTextRenderPropertyChanged(uObject* sender, ::g::Uno::EventArgs* args) { (((TextViewBase_type*)__type)->fp_OnTextRenderPropertyChanged)(this, sender, args); }
    void OnValueChanged(uObject* sender, ::g::Uno::UX::ValueChangedArgs* args);
    void SetText();
    static void OnTextLayoutPropertyChanged(TextViewBase* __this, uObject* sender, ::g::Uno::EventArgs* args) { TextViewBase__OnTextLayoutPropertyChanged_fn(__this, sender, args); }
    static void OnTextRenderPropertyChanged(TextViewBase* __this, uObject* sender, ::g::Uno::EventArgs* args) { TextViewBase__OnTextRenderPropertyChanged_fn(__this, sender, args); }
};
// }

}}}} // ::g::Fuse::Android::Controls
