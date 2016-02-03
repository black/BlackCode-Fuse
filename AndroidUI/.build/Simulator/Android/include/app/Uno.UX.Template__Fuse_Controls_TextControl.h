// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\UX\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_UNO_U_X_TEMPLATE__FUSE_CONTROLS_TEXT_CONTROL_H__
#define __APP_UNO_U_X_TEMPLATE__FUSE_CONTROLS_TEXT_CONTROL_H__

#include <app/Uno.Object.h>
#include <app/Uno.UX.ITemplate.h>
#include <Uno.h>
namespace app { namespace Fuse { namespace Controls { struct TextControl; } } }

namespace app {
namespace Uno {
namespace UX {

struct Template__Fuse_Controls_TextControl;

struct Template__Fuse_Controls_TextControl__uType : ::uClassType
{
    ::app::Uno::UX::ITemplate __interface_0;
    void(*__fp_OnApply)(Template__Fuse_Controls_TextControl*, ::app::Fuse::Controls::TextControl*);
};

Template__Fuse_Controls_TextControl__uType* Template__Fuse_Controls_TextControl__typeof();

void Template__Fuse_Controls_TextControl___ObjInit(Template__Fuse_Controls_TextControl* __this);
bool Template__Fuse_Controls_TextControl__Apply(Template__Fuse_Controls_TextControl* __this, ::uObject* obj);
bool Template__Fuse_Controls_TextControl__get_AffectSubtypes(Template__Fuse_Controls_TextControl* __this);
bool Template__Fuse_Controls_TextControl__get_Cascade(Template__Fuse_Controls_TextControl* __this);
void Template__Fuse_Controls_TextControl__set_AffectSubtypes(Template__Fuse_Controls_TextControl* __this, bool value);
void Template__Fuse_Controls_TextControl__set_Cascade(Template__Fuse_Controls_TextControl* __this, bool value);

struct Template__Fuse_Controls_TextControl : ::uObject
{
    bool _cascade;
    bool _affectSubtypes;

    void _ObjInit() { Template__Fuse_Controls_TextControl___ObjInit(this); }
    bool Apply(::uObject* obj) { return Template__Fuse_Controls_TextControl__Apply(this, obj); }
    bool AffectSubtypes() { return Template__Fuse_Controls_TextControl__get_AffectSubtypes(this); }
    bool Cascade() { return Template__Fuse_Controls_TextControl__get_Cascade(this); }
    void OnApply(::app::Fuse::Controls::TextControl* obj) { (((Template__Fuse_Controls_TextControl__uType*)this->__obj_type)->__fp_OnApply)(this, obj); }
    void AffectSubtypes(bool value) { Template__Fuse_Controls_TextControl__set_AffectSubtypes(this, value); }
    void Cascade(bool value) { Template__Fuse_Controls_TextControl__set_Cascade(this, value); }
};

}}}


#endif
