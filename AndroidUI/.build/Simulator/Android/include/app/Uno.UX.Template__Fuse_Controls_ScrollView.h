// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\UX\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_UNO_U_X_TEMPLATE__FUSE_CONTROLS_SCROLL_VIEW_H__
#define __APP_UNO_U_X_TEMPLATE__FUSE_CONTROLS_SCROLL_VIEW_H__

#include <app/Uno.Object.h>
#include <app/Uno.UX.ITemplate.h>
#include <Uno.h>
namespace app { namespace Fuse { namespace Controls { struct ScrollView; } } }

namespace app {
namespace Uno {
namespace UX {

struct Template__Fuse_Controls_ScrollView;

struct Template__Fuse_Controls_ScrollView__uType : ::uClassType
{
    ::app::Uno::UX::ITemplate __interface_0;
    void(*__fp_OnApply)(Template__Fuse_Controls_ScrollView*, ::app::Fuse::Controls::ScrollView*);
};

Template__Fuse_Controls_ScrollView__uType* Template__Fuse_Controls_ScrollView__typeof();

void Template__Fuse_Controls_ScrollView___ObjInit(Template__Fuse_Controls_ScrollView* __this);
bool Template__Fuse_Controls_ScrollView__Apply(Template__Fuse_Controls_ScrollView* __this, ::uObject* obj);
bool Template__Fuse_Controls_ScrollView__get_AffectSubtypes(Template__Fuse_Controls_ScrollView* __this);
bool Template__Fuse_Controls_ScrollView__get_Cascade(Template__Fuse_Controls_ScrollView* __this);
void Template__Fuse_Controls_ScrollView__set_AffectSubtypes(Template__Fuse_Controls_ScrollView* __this, bool value);
void Template__Fuse_Controls_ScrollView__set_Cascade(Template__Fuse_Controls_ScrollView* __this, bool value);

struct Template__Fuse_Controls_ScrollView : ::uObject
{
    bool _cascade;
    bool _affectSubtypes;

    void _ObjInit() { Template__Fuse_Controls_ScrollView___ObjInit(this); }
    bool Apply(::uObject* obj) { return Template__Fuse_Controls_ScrollView__Apply(this, obj); }
    bool AffectSubtypes() { return Template__Fuse_Controls_ScrollView__get_AffectSubtypes(this); }
    bool Cascade() { return Template__Fuse_Controls_ScrollView__get_Cascade(this); }
    void OnApply(::app::Fuse::Controls::ScrollView* obj) { (((Template__Fuse_Controls_ScrollView__uType*)this->__obj_type)->__fp_OnApply)(this, obj); }
    void AffectSubtypes(bool value) { Template__Fuse_Controls_ScrollView__set_AffectSubtypes(this, value); }
    void Cascade(bool value) { Template__Fuse_Controls_ScrollView__set_Cascade(this, value); }
};

}}}


#endif
