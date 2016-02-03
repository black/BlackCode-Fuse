// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.BasicTheme\0.18.8\.cache\GeneratedCode\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.String.h>
#include <Uno.UX.Property-1.h>
namespace g{namespace Fuse{namespace BasicTheme{struct BasicStyle__Fuse_Controls_Button_string_Text_Property;}}}
namespace g{namespace Fuse{namespace Controls{struct Button;}}}

namespace g{
namespace Fuse{
namespace BasicTheme{

// public sealed class BasicStyle.Fuse_Controls_Button_string_Text_Property :107
// {
::g::Uno::UX::Property_type* BasicStyle__Fuse_Controls_Button_string_Text_Property_typeof();
void BasicStyle__Fuse_Controls_Button_string_Text_Property__ctor_1_fn(BasicStyle__Fuse_Controls_Button_string_Text_Property* __this, ::g::Fuse::Controls::Button* obj);
void BasicStyle__Fuse_Controls_Button_string_Text_Property__New1_fn(::g::Fuse::Controls::Button* obj, BasicStyle__Fuse_Controls_Button_string_Text_Property** __retval);
void BasicStyle__Fuse_Controls_Button_string_Text_Property__OnAddListener_fn(BasicStyle__Fuse_Controls_Button_string_Text_Property* __this, uDelegate* listener);
void BasicStyle__Fuse_Controls_Button_string_Text_Property__OnGet_fn(BasicStyle__Fuse_Controls_Button_string_Text_Property* __this, uString** __retval);
void BasicStyle__Fuse_Controls_Button_string_Text_Property__OnRemoveListener_fn(BasicStyle__Fuse_Controls_Button_string_Text_Property* __this, uDelegate* listener);
void BasicStyle__Fuse_Controls_Button_string_Text_Property__OnSet_fn(BasicStyle__Fuse_Controls_Button_string_Text_Property* __this, uString* v, uObject* origin);

struct BasicStyle__Fuse_Controls_Button_string_Text_Property : ::g::Uno::UX::Property
{
    uStrong< ::g::Fuse::Controls::Button*> _obj;

    void ctor_1(::g::Fuse::Controls::Button* obj);
    static BasicStyle__Fuse_Controls_Button_string_Text_Property* New1(::g::Fuse::Controls::Button* obj);
};
// }

}}} // ::g::Fuse::BasicTheme
