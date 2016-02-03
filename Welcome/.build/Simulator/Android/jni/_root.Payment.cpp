// This file was generated based on 'C:\Users\Kuro\Documents\Fuse\Welcome\.build\Simulator\Android\Cache\GeneratedCode\MainView.g.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#include <_root.Payment.h>
#include <_root.WelcomeAnimation_bundle.h>
#include <Fuse.Resources.FileImageSource.h>
#include <Uno.BundleFile.h>
#include <Uno.Collections.ICollection-1.h>
#include <Uno.Collections.IList-1.h>
#include <Uno.Object.h>
#include <Uno.String.h>
#include <Uno.UX.BundleFileSource.h>
#include <Uno.UX.FileSource.h>
#include <Uno.UX.Resource.h>
static uString* STRINGS[1];
static uType* TYPES[5];

namespace g{

// public partial sealed class Payment :33
// {
// static Payment() :35
static void Payment__cctor_5_fn(uType* __type)
{
}

::g::Fuse::Controls::Panel_type* Payment_typeof()
{
    static uSStrong< ::g::Fuse::Controls::Panel_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 101;
    options.InterfaceCount = 8;
    options.ObjectSize = sizeof(Payment);
    options.TypeSize = sizeof(::g::Fuse::Controls::Panel_type);
    type = (::g::Fuse::Controls::Panel_type*)uClassType::New("Payment", options);
    type->SetBase(::g::Icon_typeof());
    type->fp_ctor_ = (void*)Payment__New3_fn;
    type->fp_cctor_ = Payment__cctor_5_fn;
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
    ::TYPES[0] = uObject_typeof();
    ::TYPES[1] = ::g::Fuse::Resources::FileImageSource_typeof();
    ::TYPES[2] = ::g::Uno::UX::FileSource_typeof();
    ::TYPES[3] = ::g::WelcomeAnimation_bundle_typeof();
    ::TYPES[4] = ::g::Fuse::Node_typeof();
    type->SetInterfaces(
        ::g::Fuse::Scripting::INameScope_typeof(), offsetof(::g::Fuse::Controls::Panel_type, interface0),
        ::g::Fuse::Triggers::Actions::IShow_typeof(), offsetof(::g::Fuse::Controls::Panel_type, interface1),
        ::g::Fuse::Triggers::Actions::IHide_typeof(), offsetof(::g::Fuse::Controls::Panel_type, interface2),
        ::g::Fuse::Triggers::Actions::ICollapse_typeof(), offsetof(::g::Fuse::Controls::Panel_type, interface3),
        ::g::Fuse::IActualPlacement_typeof(), offsetof(::g::Fuse::Controls::Panel_type, interface4),
        ::g::Fuse::Animations::IResize_typeof(), offsetof(::g::Fuse::Controls::Panel_type, interface5),
        ::g::Fuse::Navigation::INavigationPanel_typeof(), offsetof(::g::Fuse::Controls::Panel_type, interface6),
        ::g::Fuse::Triggers::IAddRemove_typeof()->MakeType(::g::Fuse::Node_typeof()), offsetof(::g::Fuse::Controls::Panel_type, interface7));
    type->SetFields(101);
    type->Reflection.SetFunctions(1,
        new uFunction(".ctor", NULL, (void*)Payment__New3_fn, 0, true, Payment_typeof(), 0));
    return type;
}

// public Payment() :38
void Payment__ctor_5_fn(Payment* __this)
{
    __this->ctor_5();
}

// internal void InitializeUX() :42
void Payment__InitializeUX1_fn(Payment* __this)
{
    __this->InitializeUX1();
}

// public Payment New() :38
void Payment__New3_fn(Payment** __retval)
{
    *__retval = Payment::New3();
}

// public Payment() [instance] :38
void Payment::ctor_5()
{
    ctor_4();
    InitializeUX1();
}

// internal void InitializeUX() [instance] :42
void Payment::InitializeUX1()
{
    ::g::Fuse::Resources::FileImageSource* temp = ::g::Fuse::Resources::FileImageSource::New1();
    ::g::Uno::UX::Resource* temp1 = ::g::Uno::UX::Resource::New1(::STRINGS[0/*"iconFile"*/], temp);
    temp->File(::g::Uno::UX::BundleFileSource::New1(::g::WelcomeAnimation_bundle::paymentfbc7c195()));
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(Resources()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Uno::UX::Resource_typeof())), temp1);
}

// public Payment New() [static] :38
Payment* Payment::New3()
{
    Payment* obj1 = (Payment*)uNew(Payment_typeof());
    obj1->ctor_5();
    return obj1;
}
// }

} // ::g
