// This file was generated based on 'C:\Users\Kuro\Documents\Fuse\Welcome\.build\Simulator\Android\Cache\GeneratedCode\MainView.g.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#include <_root.T.h>
#include <Fuse.Controls.TextControl.h>
#include <Fuse.Elements.Alignment.h>
#include <Fuse.Elements.Element.h>
#include <Uno.Float.h>
#include <Uno.Float4.h>
static uType* TYPES[2];

namespace g{

// public partial sealed class T :84
// {
// static T() :86
static void T__cctor_5_fn(uType* __type)
{
}

::g::Fuse::Controls::TextControl_type* T_typeof()
{
    static uSStrong< ::g::Fuse::Controls::TextControl_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 104;
    options.InterfaceCount = 9;
    options.ObjectSize = sizeof(T);
    options.TypeSize = sizeof(::g::Fuse::Controls::TextControl_type);
    type = (::g::Fuse::Controls::TextControl_type*)uClassType::New("T", options);
    type->SetBase(::g::Fuse::Controls::Text_typeof());
    type->fp_ctor_ = (void*)T__New3_fn;
    type->fp_cctor_ = T__cctor_5_fn;
    type->interface8.fp_get_Value = (void(*)(uObject*, uTRef))::g::Fuse::Controls::TextControl__get_Value_fn;
    type->interface8.fp_set_Value = (void(*)(uObject*, void*))::g::Fuse::Controls::TextControl__set_Value_fn;
    type->interface8.fp_add_ValueChanged = (void(*)(uObject*, uDelegate*))::g::Fuse::Controls::TextControl__add_ValueChanged_fn;
    type->interface8.fp_remove_ValueChanged = (void(*)(uObject*, uDelegate*))::g::Fuse::Controls::TextControl__remove_ValueChanged_fn;
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
    ::TYPES[0] = ::g::Fuse::Controls::TextControl_typeof();
    ::TYPES[1] = ::g::Fuse::Elements::Element_typeof();
    type->SetInterfaces(
        ::g::Fuse::Scripting::INameScope_typeof(), offsetof(::g::Fuse::Controls::TextControl_type, interface0),
        ::g::Fuse::Triggers::Actions::IShow_typeof(), offsetof(::g::Fuse::Controls::TextControl_type, interface1),
        ::g::Fuse::Triggers::Actions::IHide_typeof(), offsetof(::g::Fuse::Controls::TextControl_type, interface2),
        ::g::Fuse::Triggers::Actions::ICollapse_typeof(), offsetof(::g::Fuse::Controls::TextControl_type, interface3),
        ::g::Fuse::IActualPlacement_typeof(), offsetof(::g::Fuse::Controls::TextControl_type, interface4),
        ::g::Fuse::Animations::IResize_typeof(), offsetof(::g::Fuse::Controls::TextControl_type, interface5),
        ::g::Fuse::Navigation::INavigationPanel_typeof(), offsetof(::g::Fuse::Controls::TextControl_type, interface6),
        ::g::Fuse::Triggers::IAddRemove_typeof()->MakeType(::g::Fuse::Node_typeof()), offsetof(::g::Fuse::Controls::TextControl_type, interface7),
        ::g::Fuse::Triggers::IValue_typeof()->MakeType(::g::Uno::String_typeof()), offsetof(::g::Fuse::Controls::TextControl_type, interface8));
    type->SetFields(104);
    type->Reflection.SetFunctions(1,
        new uFunction(".ctor", NULL, (void*)T__New3_fn, 0, true, T_typeof(), 0));
    return type;
}

// public T() :89
void T__ctor_7_fn(T* __this)
{
    __this->ctor_7();
}

// internal void InitializeUX() :93
void T__InitializeUX_fn(T* __this)
{
    __this->InitializeUX();
}

// public T New() :89
void T__New3_fn(T** __retval)
{
    *__retval = T::New3();
}

// public T() [instance] :89
void T::ctor_7()
{
    ctor_6();
    InitializeUX();
}

// internal void InitializeUX() [instance] :93
void T::InitializeUX()
{
    FontSize(18.0f);
    TextColor(::g::Uno::Float4__New2(1.0f, 1.0f, 1.0f, 0.5333334f));
    Alignment(10);
    Margin(::g::Uno::Float4__New2(0.0f, 5.0f, 0.0f, 5.0f));
    Opacity(0.0f);
}

// public T New() [static] :89
T* T::New3()
{
    T* obj1 = (T*)uNew(T_typeof());
    obj1->ctor_7();
    return obj1;
}
// }

} // ::g
