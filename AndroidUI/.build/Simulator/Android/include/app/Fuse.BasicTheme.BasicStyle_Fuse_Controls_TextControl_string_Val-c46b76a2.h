// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.BasicTheme\0.11.3\.cache\GeneratedCode\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_FUSE_BASIC_THEME_BASIC_STYLE_FUSE_CONTROLS_TEXT_CONTROL_STRING_VAL_C46B76A2_H__
#define __APP_FUSE_BASIC_THEME_BASIC_STYLE_FUSE_CONTROLS_TEXT_CONTROL_STRING_VAL_C46B76A2_H__

#include <app/Uno.UX.Property__string.h>
#include <Uno.h>
namespace app { namespace Fuse { namespace Controls { struct TextControl; } } }

namespace app {
namespace Fuse {
namespace BasicTheme {

struct BasicStyle_Fuse_Controls_TextControl_string_Value_Property;

struct BasicStyle_Fuse_Controls_TextControl_string_Value_Property__uType : ::app::Uno::UX::Property__string__uType
{
};

BasicStyle_Fuse_Controls_TextControl_string_Value_Property__uType* BasicStyle_Fuse_Controls_TextControl_string_Value_Property__typeof();

void BasicStyle_Fuse_Controls_TextControl_string_Value_Property___ObjInit_1(BasicStyle_Fuse_Controls_TextControl_string_Value_Property* __this, ::app::Fuse::Controls::TextControl* obj);
BasicStyle_Fuse_Controls_TextControl_string_Value_Property* BasicStyle_Fuse_Controls_TextControl_string_Value_Property__New_1(::uStatic* __this, ::app::Fuse::Controls::TextControl* obj);
void BasicStyle_Fuse_Controls_TextControl_string_Value_Property__OnAddListener(BasicStyle_Fuse_Controls_TextControl_string_Value_Property* __this, ::uDelegate* listener);
::uString* BasicStyle_Fuse_Controls_TextControl_string_Value_Property__OnGet(BasicStyle_Fuse_Controls_TextControl_string_Value_Property* __this);
void BasicStyle_Fuse_Controls_TextControl_string_Value_Property__OnRemoveListener(BasicStyle_Fuse_Controls_TextControl_string_Value_Property* __this, ::uDelegate* listener);
void BasicStyle_Fuse_Controls_TextControl_string_Value_Property__OnSet(BasicStyle_Fuse_Controls_TextControl_string_Value_Property* __this, ::uString* v, ::uObject* origin);

struct BasicStyle_Fuse_Controls_TextControl_string_Value_Property : ::app::Uno::UX::Property__string
{
    ::uStrong< ::app::Fuse::Controls::TextControl*> _obj;

    void _ObjInit_1(::app::Fuse::Controls::TextControl* obj) { BasicStyle_Fuse_Controls_TextControl_string_Value_Property___ObjInit_1(this, obj); }
};

}}}


#endif
