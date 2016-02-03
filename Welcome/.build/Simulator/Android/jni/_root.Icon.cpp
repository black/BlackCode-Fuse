// This file was generated based on 'C:\Users\Kuro\Documents\Fuse\Welcome\.build\Simulator\Android\Cache\GeneratedCode\MainView.g.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#include <_root.Icon.h>
#include <_root.MainView.Fuse_Controls_Image_Fuse_Resources_ImageSource_S-b473a59f.h>
#include <Fuse.Behavior.h>
#include <Fuse.Controls.Circle.h>
#include <Fuse.Controls.Image.h>
#include <Fuse.Controls.Shape.h>
#include <Fuse.Drawing.Brush.h>
#include <Fuse.Drawing.StaticSolidColor.h>
#include <Fuse.Drawing.Stroke.h>
#include <Fuse.Elements.Element.h>
#include <Fuse.Elements.SizeUnit.h>
#include <Fuse.Resources.ImageSource.h>
#include <Fuse.Resources.ResourceBinding-1.h>
#include <Fuse.StylePropertyWithUnit-3.h>
#include <Uno.Bool.h>
#include <Uno.Collections.ICollection-1.h>
#include <Uno.Collections.IList-1.h>
#include <Uno.Float.h>
#include <Uno.Float4.h>
#include <Uno.String.h>
#include <Uno.UX.Property-1.h>
static uString* STRINGS[1];
static uType* TYPES[9];

namespace g{

// public partial class Icon :1
// {
// static Icon() :4
static void Icon__cctor_4_fn(uType* __type)
{
}

::g::Fuse::Controls::Panel_type* Icon_typeof()
{
    static uSStrong< ::g::Fuse::Controls::Panel_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 101;
    options.InterfaceCount = 8;
    options.ObjectSize = sizeof(Icon);
    options.TypeSize = sizeof(::g::Fuse::Controls::Panel_type);
    type = (::g::Fuse::Controls::Panel_type*)uClassType::New("Icon", options);
    type->SetBase(::g::Fuse::Controls::Panel_typeof());
    type->fp_ctor_ = (void*)Icon__New2_fn;
    type->fp_cctor_ = Icon__cctor_4_fn;
    type->interface6.fp_AddChild = (void(*)(uObject*, ::g::Fuse::Node*))::g::Fuse::Controls::Panel__Fuse_Navigation_INavigationPanel_AddChild_fn;
    type->interface6.fp_AddChildAt = (void(*)(uObject*, int*, ::g::Fuse::Node*))::g::Fuse::Controls::Panel__Fuse_Navigation_INavigationPanel_AddChildAt_fn;
    type->interface6.fp_RemoveChild = (void(*)(uObject*, ::g::Fuse::Node*))::g::Fuse::Controls::Panel__Fuse_Navigation_INavigationPanel_RemoveChild_fn;
    type->interface6.fp_GetChild = (void(*)(uObject*, int*, ::g::Fuse::Node**))::g::Fuse::Controls::Panel__Fuse_Navigation_INavigationPanel_GetChild_fn;
    type->interface7.fp_Add = (void(*)(uObject*, void*))::g::Fuse::Controls::Panel__Fuse_Triggers_IAddRemove_Fuse_Node__Add_fn;
    type->interface7.fp_Remove = (void(*)(uObject*, void*))::g::Fuse::Controls::Panel__Fuse_Triggers_IAddRemove_Fuse_Node__Remove_fn;
    type->interface6.fp_get_ChildCount = (void(*)(uObject*, int*))::g::Fuse::Controls::Panel__Fuse_Navigation_INavigationPanel_get_ChildCount_fn;
    type->interface6.fp_get_Children = (void(*)(uObject*, uObject**))::g::Fuse::Controls::Panel__get_Children_fn;
    type->interface6.fp_get_ActualSize = (void(*)(uObject*, ::g::Uno::Float2*))::g::Fuse::Elements::Element__get_ActualSize_fn;
    type->interface6.fp_get_HasChildren = (void(*)(uObject*, bool*))::g::Fuse::Controls::Panel__get_HasChildren_fn;
    type->interface6.fp_add_ChildAdded = (void(*)(uObject*, uDelegate*))::g::Fuse::Controls::Panel__add_ChildAdded_fn;
    type->interface6.fp_remove_ChildAdded = (void(*)(uObject*, uDelegate*))::g::Fuse::Controls::Panel__remove_ChildAdded_fn;
    type->interface6.fp_add_ChildRemoved = (void(*)(uObject*, uDelegate*))::g::Fuse::Controls::Panel__add_ChildRemoved_fn;
    type->interface6.fp_remove_ChildRemoved = (void(*)(uObject*, uDelegate*))::g::Fuse::Controls::Panel__remove_ChildRemoved_fn;
    type->interface6.fp_add_Placed = (void(*)(uObject*, uDelegate*))::g::Fuse::Elements::Element__add_Placed_fn;
    type->interface6.fp_remove_Placed = (void(*)(uObject*, uDelegate*))::g::Fuse::Elements::Element__remove_Placed_fn;
    type->interface6.fp_add_Update = (void(*)(uObject*, uDelegate*))::g::Fuse::Node__add_Update_fn;
    type->interface6.fp_remove_Update = (void(*)(uObject*, uDelegate*))::g::Fuse::Node__remove_Update_fn;
    type->interface1.fp_Show = (void(*)(uObject*))::g::Fuse::Elements::Element__Fuse_Triggers_Actions_IShow_Show_fn;
    type->interface3.fp_Collapse = (void(*)(uObject*))::g::Fuse::Elements::Element__Fuse_Triggers_Actions_ICollapse_Collapse_fn;
    type->interface2.fp_Hide = (void(*)(uObject*))::g::Fuse::Elements::Element__Fuse_Triggers_Actions_IHide_Hide_fn;
    type->interface5.fp_SetSize = (void(*)(uObject*, ::g::Uno::Float2*))::g::Fuse::Elements::Element__Fuse_Animations_IResize_SetSize_fn;
    type->interface4.fp_get_ActualSize = (void(*)(uObject*, ::g::Uno::Float3*))::g::Fuse::Elements::Element__Fuse_IActualPlacement_get_ActualSize_fn;
    type->interface4.fp_get_ActualPosition = (void(*)(uObject*, ::g::Uno::Float3*))::g::Fuse::Elements::Element__Fuse_IActualPlacement_get_ActualPosition_fn;
    type->interface4.fp_add_Placed = (void(*)(uObject*, uDelegate*))::g::Fuse::Elements::Element__add_Placed_fn;
    type->interface4.fp_remove_Placed = (void(*)(uObject*, uDelegate*))::g::Fuse::Elements::Element__remove_Placed_fn;
    type->interface0.fp_FindObjectByName = (void(*)(uObject*, uString*, uDelegate*, uObject**))::g::Fuse::Node__FindObjectByName_fn;
    ::STRINGS[0] = uString::Const("iconFile");
    ::TYPES[0] = ::g::Fuse::Resources::ResourceBinding_typeof()->MakeType(::g::Fuse::Resources::ImageSource_typeof());
    ::TYPES[1] = ::g::Uno::UX::Property_typeof()->MakeType(::g::Fuse::Resources::ImageSource_typeof());
    ::TYPES[2] = ::g::Fuse::Elements::Element_typeof();
    ::TYPES[3] = ::g::Fuse::Node_typeof();
    ::TYPES[4] = ::g::Fuse::Behavior_typeof();
    ::TYPES[5] = ::g::Fuse::Controls::Shape_typeof();
    ::TYPES[6] = ::g::Fuse::Drawing::Brush_typeof();
    ::TYPES[7] = ::g::Fuse::Drawing::Stroke_typeof();
    ::TYPES[8] = ::g::Fuse::Controls::Panel_typeof();
    type->SetInterfaces(
        ::g::Fuse::Scripting::INameScope_typeof(), offsetof(::g::Fuse::Controls::Panel_type, interface0),
        ::g::Fuse::Triggers::Actions::IShow_typeof(), offsetof(::g::Fuse::Controls::Panel_type, interface1),
        ::g::Fuse::Triggers::Actions::IHide_typeof(), offsetof(::g::Fuse::Controls::Panel_type, interface2),
        ::g::Fuse::Triggers::Actions::ICollapse_typeof(), offsetof(::g::Fuse::Controls::Panel_type, interface3),
        ::g::Fuse::IActualPlacement_typeof(), offsetof(::g::Fuse::Controls::Panel_type, interface4),
        ::g::Fuse::Animations::IResize_typeof(), offsetof(::g::Fuse::Controls::Panel_type, interface5),
        ::g::Fuse::Navigation::INavigationPanel_typeof(), offsetof(::g::Fuse::Controls::Panel_type, interface6),
        ::g::Fuse::Triggers::IAddRemove_typeof()->MakeType(::g::Fuse::Node_typeof()), offsetof(::g::Fuse::Controls::Panel_type, interface7));
    type->SetFields(100,
        ::g::MainView__Fuse_Controls_Image_Fuse_Resources_ImageSource_Source_Property_typeof(), offsetof(::g::Icon, temp_Source_inst), 0);
    type->Reflection.SetFunctions(1,
        new uFunction(".ctor", NULL, (void*)Icon__New2_fn, 0, true, Icon_typeof(), 0));
    return type;
}

// public Icon() :7
void Icon__ctor_4_fn(Icon* __this)
{
    __this->ctor_4();
}

// internal void InitializeUX() :11
void Icon__InitializeUX_fn(Icon* __this)
{
    __this->InitializeUX();
}

// public Icon New() :7
void Icon__New2_fn(Icon** __retval)
{
    *__retval = Icon::New2();
}

// public Icon() [instance] :7
void Icon::ctor_4()
{
    ctor_3();
    InitializeUX();
}

// internal void InitializeUX() [instance] :11
void Icon::InitializeUX()
{
    bool ret2;
    bool ret3;
    ::g::Fuse::Controls::Image* temp = ::g::Fuse::Controls::Image::New2();
    temp_Source_inst = ::g::MainView__Fuse_Controls_Image_Fuse_Resources_ImageSource_Source_Property::New1(temp);
    ::g::Fuse::Resources::ResourceBinding* temp1 = (::g::Fuse::Resources::ResourceBinding*)::g::Fuse::Resources::ResourceBinding::New1(::TYPES[0/*Fuse.Resources.ResourceBinding<Fuse.Resources.ImageSource>*/], temp_Source_inst, ::STRINGS[0/*"iconFile"*/]);
    ::g::Fuse::Controls::Circle* temp2 = ::g::Fuse::Controls::Circle::New2();
    ::g::Fuse::Drawing::Stroke* temp3 = ::g::Fuse::Drawing::Stroke::New1();
    ::g::Fuse::Drawing::StaticSolidColor* temp4 = ::g::Fuse::Drawing::StaticSolidColor::New1(::g::Uno::Float4__New2(1.0f, 1.0f, 1.0f, 1.0f));
    ::g::Fuse::Drawing::StaticSolidColor* temp5 = ::g::Fuse::Drawing::StaticSolidColor::New1(::g::Uno::Float4__New2(0.3882353f, 0.2039216f, 0.6431373f, 1.0f));
    Width(80.0f);
    Height(80.0f);
    ::g::Fuse::StylePropertyWithUnit__Set1_fn(uPtr(::g::Fuse::Elements::Element::WidthProperty()), temp, uCRef(60.0f), uCRef<int>(1), &ret2);
    ::g::Fuse::StylePropertyWithUnit__Set1_fn(uPtr(::g::Fuse::Elements::Element::HeightProperty()), temp, uCRef(60.0f), uCRef<int>(1), &ret3);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp->Behaviors()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::TYPES[4/*Fuse.Behavior*/])), temp1);
    temp2->Fill(temp5);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp2->Strokes()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::TYPES[7/*Fuse.Drawing.Stroke*/])), temp3);
    temp3->Width(3.0f);
    temp3->Brush(temp4);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(Children()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::TYPES[3/*Fuse.Node*/])), temp);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(Children()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::TYPES[3/*Fuse.Node*/])), temp2);
}

// public Icon New() [static] :7
Icon* Icon::New2()
{
    Icon* obj1 = (Icon*)uNew(Icon_typeof());
    obj1->ctor_4();
    return obj1;
}
// }

} // ::g
