// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Android.Views\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_FUSE_ANDROID_TEXT_VIEW_BASE__FUSE_CONTROLS_TEXT_INPUT_H__
#define __APP_FUSE_ANDROID_TEXT_VIEW_BASE__FUSE_CONTROLS_TEXT_INPUT_H__

#include <app/Fuse.Android.ControlView__Fuse_Controls_TextInput.h>
#include <app/Fuse.Scripting.INameScope.h>
#include <Uno.h>
namespace app { namespace Android { namespace android { namespace view { struct View; } } } }
namespace app { namespace Android { namespace android { namespace widget { struct TextView; } } } }
namespace app { namespace Fuse { namespace Android { struct EditorActionArgs; } } }
namespace app { namespace Uno { namespace UX { struct ValueChangedArgs__string; } } }
namespace app { namespace Uno { struct EventArgs; } }

namespace app {
namespace Fuse {
namespace Android {

struct TextViewBase__Fuse_Controls_TextInput;

struct TextViewBase__Fuse_Controls_TextInput__uType : ::app::Fuse::Android::ControlView__Fuse_Controls_TextInput__uType
{
    ::app::Android::android::widget::TextView*(*__fp_CreateTextView)(TextViewBase__Fuse_Controls_TextInput*);
    void(*__fp_OnTextChanged)(TextViewBase__Fuse_Controls_TextInput*, ::uObject*, ::uString*);
    void(*__fp_OnTextLayoutPropertyChanged)(TextViewBase__Fuse_Controls_TextInput*, ::uObject*, ::app::Uno::EventArgs*);
    void(*__fp_OnTextRenderPropertyChanged)(TextViewBase__Fuse_Controls_TextInput*, ::uObject*, ::app::Uno::EventArgs*);
};

TextViewBase__Fuse_Controls_TextInput__uType* TextViewBase__Fuse_Controls_TextInput__typeof();

void TextViewBase__Fuse_Controls_TextInput___ObjInit_3(TextViewBase__Fuse_Controls_TextInput* __this);
void TextViewBase__Fuse_Controls_TextInput__Attach(TextViewBase__Fuse_Controls_TextInput* __this);
::app::Android::android::view::View* TextViewBase__Fuse_Controls_TextInput__CreateInternal(TextViewBase__Fuse_Controls_TextInput* __this);
void TextViewBase__Fuse_Controls_TextInput__Detach(TextViewBase__Fuse_Controls_TextInput* __this);
bool TextViewBase__Fuse_Controls_TextInput__OnEditorAciton(TextViewBase__Fuse_Controls_TextInput* __this, ::uObject* sender, ::app::Fuse::Android::EditorActionArgs* args);
void TextViewBase__Fuse_Controls_TextInput__OnTextChanged(TextViewBase__Fuse_Controls_TextInput* __this, ::uObject* sender, ::uString* text);
void TextViewBase__Fuse_Controls_TextInput__OnTextLayoutPropertyChanged(TextViewBase__Fuse_Controls_TextInput* __this, ::uObject* sender, ::app::Uno::EventArgs* args);
void TextViewBase__Fuse_Controls_TextInput__OnTextRenderPropertyChanged(TextViewBase__Fuse_Controls_TextInput* __this, ::uObject* sender, ::app::Uno::EventArgs* args);
void TextViewBase__Fuse_Controls_TextInput__OnValueChanged(TextViewBase__Fuse_Controls_TextInput* __this, ::uObject* sender, ::app::Uno::UX::ValueChangedArgs__string* args);
void TextViewBase__Fuse_Controls_TextInput__SetText(TextViewBase__Fuse_Controls_TextInput* __this);

struct TextViewBase__Fuse_Controls_TextInput : ::app::Fuse::Android::ControlView__Fuse_Controls_TextInput
{
    ::uStrong< ::uObject*> _textChangedEvent;
    ::uStrong< ::uObject*> _editorActionEvent;
    ::uStrong< ::app::Android::android::widget::TextView*> _textView;
    int _defaultTextColor;

    void _ObjInit_3() { TextViewBase__Fuse_Controls_TextInput___ObjInit_3(this); }
    ::app::Android::android::widget::TextView* CreateTextView() { return (((TextViewBase__Fuse_Controls_TextInput__uType*)this->__obj_type)->__fp_CreateTextView)(this); }
    bool OnEditorAciton(::uObject* sender, ::app::Fuse::Android::EditorActionArgs* args) { return TextViewBase__Fuse_Controls_TextInput__OnEditorAciton(this, sender, args); }
    void OnTextChanged(::uObject* sender, ::uString* text) { (((TextViewBase__Fuse_Controls_TextInput__uType*)this->__obj_type)->__fp_OnTextChanged)(this, sender, text); }
    void OnTextLayoutPropertyChanged(::uObject* sender, ::app::Uno::EventArgs* args) { (((TextViewBase__Fuse_Controls_TextInput__uType*)this->__obj_type)->__fp_OnTextLayoutPropertyChanged)(this, sender, args); }
    void OnTextRenderPropertyChanged(::uObject* sender, ::app::Uno::EventArgs* args) { (((TextViewBase__Fuse_Controls_TextInput__uType*)this->__obj_type)->__fp_OnTextRenderPropertyChanged)(this, sender, args); }
    void OnValueChanged(::uObject* sender, ::app::Uno::UX::ValueChangedArgs__string* args) { TextViewBase__Fuse_Controls_TextInput__OnValueChanged(this, sender, args); }
    void SetText() { TextViewBase__Fuse_Controls_TextInput__SetText(this); }
};

}}}


#endif
