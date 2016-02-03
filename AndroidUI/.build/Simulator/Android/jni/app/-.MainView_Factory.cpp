// This file was generated based on 'C:\Users\Kuro\Documents\Fuse\Android UI\.cache\GeneratedCode\MainView.g.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#include <app/-.MainView.h>
#include <app/-.MainView_Factory.h>
#include <app/-.MainView_Fuse_Drawing_SolidColor_float4_Color_Property.h>
#include <app/Fuse.Animations.Animator.h>
#include <app/Fuse.Animations.Change__float4.h>
#include <app/Fuse.Behavior.h>
#include <app/Fuse.Controls.Circle.h>
#include <app/Fuse.Controls.Shape.h>
#include <app/Fuse.Drawing.Brush.h>
#include <app/Fuse.Drawing.SolidColor.h>
#include <app/Fuse.Elements.Element.h>
#include <app/Fuse.Navigation.ActivatingAnimation.h>
#include <app/Fuse.Node.h>
#include <app/Fuse.Triggers.Trigger.h>
#include <app/Uno.Collections.ICollection__Fuse_Animations_Animator.h>
#include <app/Uno.Collections.ICollection__Fuse_Behavior.h>
#include <app/Uno.Collections.ICollection__Fuse_Drawing_Brush.h>
#include <app/Uno.Collections.IList__Fuse_Animations_Animator.h>
#include <app/Uno.Collections.IList__Fuse_Behavior.h>
#include <app/Uno.Collections.IList__Fuse_Drawing_Brush.h>
#include <app/Uno.Float.h>
#include <app/Uno.Float4.h>
#include <app/Uno.UX.Property__float4.h>

namespace app {

MainView_Factory__uType* MainView_Factory__typeof()
{
    static ::uStaticStrong<MainView_Factory__uType*> type;
    if (type != NULL) return type;

    type = (MainView_Factory__uType*)::uAllocClassType(sizeof(MainView_Factory__uType), "MainView.Factory", false, 1, 2, 0);

    type->__interface_0.__fp_New_1 = (::uObject*(*)(void*))MainView_Factory__New_1;

    type->SetInterfaces(
        ::app::Uno::UX::IFactory__typeof(), offsetof(MainView_Factory__uType, __interface_0));

    type->SetStrongRefs(
        "__parent", offsetof(MainView_Factory, __parent),
        "color_Color_inst", offsetof(MainView_Factory, color_Color_inst));

    type->SetFunctions(2,
        ::uNewFunction("New", MainView_Factory__New_1, 0, false, ::uObject__typeof()),
        ::uNewFunction(".ctor", MainView_Factory__New_2, 0, true, MainView_Factory__typeof(), ::app::MainView__typeof()));

    ::uRegisterType(type);
    return type;
}

void MainView_Factory___ObjInit(MainView_Factory* __this, ::app::MainView* parent)
{
    __this->__parent = parent;
}

::uObject* MainView_Factory__New_1(MainView_Factory* __this)
{
    ::app::Fuse::Controls::Circle* self = ::app::Fuse::Controls::Circle__New_2(NULL);
    ::app::Fuse::Drawing::SolidColor* color = ::app::Fuse::Drawing::SolidColor__New_1(NULL);
    __this->color_Color_inst = ::app::MainView_Fuse_Drawing_SolidColor_float4_Color_Property__New_1(NULL, color);
    ::app::Fuse::Navigation::ActivatingAnimation* temp = ::app::Fuse::Navigation::ActivatingAnimation__New_1(NULL);
    ::app::Fuse::Animations::Change__float4* temp1 = ::app::Fuse::Animations::Change__float4__New_1(NULL, (::app::Uno::UX::Property__float4*)__this->color_Color_inst);
    ::uPtr< ::app::Fuse::Controls::Circle*>(self)->Width(10.0f);
    self->Height(10.0f);
    self->Margin(::app::Uno::Float4__New_2(NULL, 6.0f, 6.0f, 6.0f, 6.0f));
    ::uPtr< ::app::Fuse::Drawing::SolidColor*>(color)->Color(::app::Uno::Float4__New_2(NULL, 0.6f, 0.6f, 0.6f, 1.0f));
    ::app::Uno::Collections::ICollection__Fuse_Animations_Animator::Add(::uPtr< ::uObject*>(::uPtr< ::app::Fuse::Navigation::ActivatingAnimation*>(temp)->Animators()), (::app::Fuse::Animations::Animator*)temp1);
    ::uPtr< ::app::Fuse::Animations::Change__float4*>(temp1)->Value(::app::Uno::Float4__New_2(NULL, 1.0f, 1.0f, 1.0f, 1.0f));
    ::app::Uno::Collections::ICollection__Fuse_Drawing_Brush::Add(::uPtr< ::uObject*>(self->Fills()), (::app::Fuse::Drawing::Brush*)color);
    ::app::Uno::Collections::ICollection__Fuse_Behavior::Add(::uPtr< ::uObject*>(self->Behaviors()), (::app::Fuse::Behavior*)temp);
    return (::uObject*)self;
}

MainView_Factory* MainView_Factory__New_2(::uStatic* __this, ::app::MainView* parent)
{
    MainView_Factory* inst = (MainView_Factory*)::uAllocObject(sizeof(MainView_Factory), MainView_Factory__typeof());
    inst->_ObjInit(parent);
    return inst;
}

}
