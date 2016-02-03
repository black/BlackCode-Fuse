// This file was generated based on 'C:\Users\Kuro\Documents\Fuse\Android UI\.cache\GeneratedCode\MainView.g.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#include <app/-.MainView.h>
#include <app/-.MainView_Template.h>
#include <app/Fuse.Controls.Text.h>
#include <app/Fuse.Controls.TextControl.h>
#include <app/Fuse.Elements.Element.h>
#include <app/Fuse.Elements.TextAlignment.h>
#include <app/Fuse.Elements.TextWrapping.h>
#include <app/Fuse.StyleProperty__Fuse_Controls_TextControl__float.h>
#include <app/Fuse.StyleProperty__Fuse_Controls_TextControl__float4.h>
#include <app/Fuse.StyleProperty__Fuse_Controls_TextControl__Fuse_Elements_Te-44d8cf97.h>
#include <app/Fuse.StyleProperty__Fuse_Controls_TextControl__Fuse_Elements_Te-e2be4cfb.h>
#include <app/Fuse.StyleProperty__Fuse_Elements_Element__float.h>
#include <app/Fuse.StylePropertyWithUnit__Fuse_Elements_Element__float__Fuse_-d8fcbdc5.h>
#include <app/Uno.Bool.h>
#include <app/Uno.Float.h>
#include <app/Uno.Float4.h>

namespace app {

MainView_Template__uType* MainView_Template__typeof()
{
    static ::uStaticStrong<MainView_Template__uType*> type;
    if (type != NULL) return type;

    type = (MainView_Template__uType*)::uAllocClassType(sizeof(MainView_Template__uType), "MainView.Template", false, 1, 1, 0);

    type->SetBaseType(::app::Uno::UX::Template__Fuse_Controls_Text__typeof());
    type->__fp_OnApply = (void(*)(::app::Uno::UX::Template__Fuse_Controls_Text*, ::app::Fuse::Controls::Text*))MainView_Template__OnApply;

    type->SetInterfaces(
        ::app::Uno::UX::ITemplate__typeof(), offsetof(MainView_Template__uType, __interface_0));

    type->SetStrongRefs(
        "__parent", offsetof(MainView_Template, __parent));

    type->SetFunctions(1,
        ::uNewFunction(".ctor", MainView_Template__New_1, 0, true, MainView_Template__typeof(), ::app::MainView__typeof()));

    ::uRegisterType(type);
    return type;
}

void MainView_Template___ObjInit_1(MainView_Template* __this, ::app::MainView* parent)
{
    ::app::Uno::UX::Template__Fuse_Controls_Text___ObjInit(__this);
    __this->__parent = parent;
}

MainView_Template* MainView_Template__New_1(::uStatic* __this, ::app::MainView* parent)
{
    MainView_Template* inst = (MainView_Template*)::uAllocObject(sizeof(MainView_Template), MainView_Template__typeof());
    inst->_ObjInit_1(parent);
    return inst;
}

void MainView_Template__OnApply(MainView_Template* __this, ::app::Fuse::Controls::Text* self)
{
    ::uPtr< ::app::Fuse::StyleProperty__Fuse_Controls_TextControl__Fuse_Elements_TextWrapping*>(::app::Fuse::Controls::TextControl__TextWrappingProperty)->SetStyle((::app::Fuse::Controls::TextControl*)self, 1);
    ::uPtr< ::app::Fuse::StyleProperty__Fuse_Controls_TextControl__float*>(::app::Fuse::Controls::TextControl__FontSizeProperty)->SetStyle((::app::Fuse::Controls::TextControl*)self, 16.0f);
    ::uPtr< ::app::Fuse::StyleProperty__Fuse_Controls_TextControl__Fuse_Elements_TextAlignment*>(::app::Fuse::Controls::TextControl__TextAlignmentProperty)->SetStyle((::app::Fuse::Controls::TextControl*)self, 1);
    ::uPtr< ::app::Fuse::StyleProperty__Fuse_Controls_TextControl__float4*>(::app::Fuse::Controls::TextControl__TextColorProperty)->SetStyle((::app::Fuse::Controls::TextControl*)self, ::app::Uno::Float4__New_2(NULL, 1.0f, 1.0f, 1.0f, 1.0f));
    ::uPtr< ::app::Fuse::StylePropertyWithUnit__Fuse_Elements_Element__float__Fuse_Elements_SizeUnit*>(::app::Fuse::Elements::Element__YProperty)->SetStyle((::app::Fuse::Elements::Element*)self, 100.0f);
}

}
