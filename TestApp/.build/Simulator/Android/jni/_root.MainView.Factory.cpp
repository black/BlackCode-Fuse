// This file was generated based on 'C:\Users\Kuro\Documents\Fuse\TestApp\.build\Simulator\Android\Cache\GeneratedCode\MainView.g.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#include <_root.MainView.Factory.h>
#include <_root.MainView.Fuse_Drawing_SolidColor_float4_Color_Property.h>
#include <_root.MainView.h>
#include <Fuse.Animations.Animator.h>
#include <Fuse.Animations.Change-1.h>
#include <Fuse.Behavior.h>
#include <Fuse.Controls.Circle.h>
#include <Fuse.Controls.Shape.h>
#include <Fuse.Drawing.Brush.h>
#include <Fuse.Drawing.SolidColor.h>
#include <Fuse.Elements.Element.h>
#include <Fuse.Navigation.ActivatingAnimation.h>
#include <Fuse.Node.h>
#include <Fuse.Triggers.Trigger.h>
#include <Uno.Collections.ICollection-1.h>
#include <Uno.Collections.IList-1.h>
#include <Uno.Float.h>
#include <Uno.Float4.h>
#include <Uno.UX.Property-1.h>
static uType* TYPES[11];

namespace g{

// public partial sealed class MainView.Factory :91
// {
// static Factory() :100
static void MainView__Factory__cctor__fn(uType* __type)
{
}

MainView__Factory_type* MainView__Factory_typeof()
{
    static uSStrong<MainView__Factory_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 2;
    options.InterfaceCount = 1;
    options.ObjectSize = sizeof(MainView__Factory);
    options.TypeSize = sizeof(MainView__Factory_type);
    type = (MainView__Factory_type*)uClassType::New("MainView.Factory", options);
    type->fp_cctor_ = MainView__Factory__cctor__fn;
    type->interface0.fp_New1 = (void(*)(uObject*, uObject**))MainView__Factory__New1_fn;
    ::TYPES[0] = ::g::Fuse::Animations::Change_typeof()->MakeType(::g::Uno::Float4_typeof());
    ::TYPES[1] = ::g::Uno::UX::Property_typeof()->MakeType(::g::Uno::Float4_typeof());
    ::TYPES[2] = ::g::Fuse::Elements::Element_typeof();
    ::TYPES[3] = ::g::Fuse::Drawing::SolidColor_typeof();
    ::TYPES[4] = ::g::Fuse::Triggers::Trigger_typeof();
    ::TYPES[5] = ::g::Fuse::Animations::Animator_typeof();
    ::TYPES[6] = ::g::Fuse::Controls::Shape_typeof();
    ::TYPES[7] = ::g::Fuse::Drawing::Brush_typeof();
    ::TYPES[8] = ::g::Fuse::Node_typeof();
    ::TYPES[9] = ::g::Fuse::Behavior_typeof();
    ::TYPES[10] = uObject_typeof();
    type->SetInterfaces(
        ::g::Uno::UX::IFactory_typeof(), offsetof(MainView__Factory_type, interface0));
    type->SetFields(0,
        ::g::MainView_typeof(), offsetof(::g::MainView__Factory, __parent1), 0,
        ::g::MainView__Fuse_Drawing_SolidColor_float4_Color_Property_typeof(), offsetof(::g::MainView__Factory, color_Color_inst), 0);
    type->Reflection.SetFunctions(2,
        new uFunction("New", NULL, (void*)MainView__Factory__New1_fn, 0, false, uObject_typeof(), 0),
        new uFunction(".ctor", NULL, (void*)MainView__Factory__New2_fn, 0, true, MainView__Factory_typeof(), 1, ::g::MainView_typeof()));
    return type;
}

// public Factory(MainView parent) :94
void MainView__Factory__ctor__fn(MainView__Factory* __this, ::g::MainView* parent)
{
    __this->ctor_(parent);
}

// public object New() :103
void MainView__Factory__New1_fn(MainView__Factory* __this, uObject** __retval)
{
    *__retval = __this->New1();
}

// public Factory New(MainView parent) :94
void MainView__Factory__New2_fn(::g::MainView* parent, MainView__Factory** __retval)
{
    *__retval = MainView__Factory::New2(parent);
}

// public Factory(MainView parent) [instance] :94
void MainView__Factory::ctor_(::g::MainView* parent)
{
    __parent1 = parent;
}

// public object New() [instance] :103
uObject* MainView__Factory::New1()
{
    ::g::Fuse::Controls::Circle* self = ::g::Fuse::Controls::Circle::New2();
    ::g::Fuse::Drawing::SolidColor* color1 = ::g::Fuse::Drawing::SolidColor::New1();
    color_Color_inst = ::g::MainView__Fuse_Drawing_SolidColor_float4_Color_Property::New1(color1);
    ::g::Fuse::Navigation::ActivatingAnimation* temp = ::g::Fuse::Navigation::ActivatingAnimation::New1();
    ::g::Fuse::Animations::Change* temp1 = (::g::Fuse::Animations::Change*)::g::Fuse::Animations::Change::New1(::TYPES[0/*Fuse.Animations.Change<float4>*/], color_Color_inst);
    self->Width(10.0f);
    self->Height(10.0f);
    self->Margin(::g::Uno::Float4__New2(6.0f, 6.0f, 6.0f, 6.0f));
    color1->Color(::g::Uno::Float4__New2(0.6f, 0.6f, 0.6f, 1.0f));
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp->Animators()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::TYPES[5/*Fuse.Animations.Animator*/])), temp1);
    ::g::Fuse::Animations::Change__set_Value_fn(temp1, uCRef(::g::Uno::Float4__New2(1.0f, 1.0f, 1.0f, 1.0f)));
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(self->Fills()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::TYPES[7/*Fuse.Drawing.Brush*/])), color1);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(self->Behaviors()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::TYPES[9/*Fuse.Behavior*/])), temp);
    return self;
}

// public Factory New(MainView parent) [static] :94
MainView__Factory* MainView__Factory::New2(::g::MainView* parent)
{
    MainView__Factory* obj1 = (MainView__Factory*)uNew(MainView__Factory_typeof());
    obj1->ctor_(parent);
    return obj1;
}
// }

} // ::g
