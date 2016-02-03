// This file was generated based on 'C:\Users\Kuro\Documents\Fuse\Onboarding\.build\Simulator\Android\Cache\GeneratedCode\MainView.g.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#include <_root.MainView.h>
#include <_root.MainView.Template2.h>
#include <Fuse.Animations.Animator.h>
#include <Fuse.Animations.Move.h>
#include <Fuse.Animations.TransformAnimator-1.h>
#include <Fuse.Behavior.h>
#include <Fuse.ITranslationMode.h>
#include <Fuse.Navigation.EnteringAnimation.h>
#include <Fuse.Navigation.ExitingAnimation.h>
#include <Fuse.Node.h>
#include <Fuse.Translation.h>
#include <Fuse.TranslationModes.h>
#include <Fuse.Triggers.Trigger.h>
#include <Uno.Collections.ICollection-1.h>
#include <Uno.Collections.IList-1.h>
#include <Uno.Float.h>
static uType* TYPES[6];

namespace g{

// public partial sealed class MainView.Template2 :65
// {
// static Template2() :72
static void MainView__Template2__cctor__fn(uType* __type)
{
}

::g::Uno::UX::Template_type* MainView__Template2_typeof()
{
    static uSStrong< ::g::Uno::UX::Template_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 3;
    options.InterfaceCount = 1;
    options.ObjectSize = sizeof(MainView__Template2);
    options.TypeSize = sizeof(::g::Uno::UX::Template_type);
    type = (::g::Uno::UX::Template_type*)uClassType::New("MainView.Template2", options);
    type->SetBase(::g::Uno::UX::Template_typeof()->MakeType(::g::Fuse::Controls::Page_typeof()));
    type->fp_cctor_ = MainView__Template2__cctor__fn;
    type->fp_OnApply = (void(*)(::g::Uno::UX::Template*, void*))MainView__Template2__OnApply_fn;
    type->interface0.fp_Apply = (void(*)(uObject*, uObject*, bool*))::g::Uno::UX::Template__Apply_fn;
    ::TYPES[0] = ::g::Fuse::Triggers::Trigger_typeof();
    ::TYPES[1] = ::g::Fuse::Animations::Animator_typeof();
    ::TYPES[2] = ::g::Fuse::Animations::TransformAnimator_typeof()->MakeType(::g::Fuse::Translation_typeof());
    ::TYPES[3] = ::g::Fuse::Animations::Move_typeof();
    ::TYPES[4] = ::g::Fuse::TranslationModes_typeof();
    ::TYPES[5] = ::g::Fuse::Behavior_typeof();
    type->SetInterfaces(
        ::g::Uno::UX::ITemplate_typeof(), offsetof(::g::Uno::UX::Template_type, interface0));
    type->SetFields(2,
        ::g::MainView_typeof(), offsetof(::g::MainView__Template2, __parent1), 0);
    type->Reflection.SetFunctions(1,
        new uFunction(".ctor", NULL, (void*)MainView__Template2__New1_fn, 0, true, MainView__Template2_typeof(), 1, ::g::MainView_typeof()));
    return type;
}

// public Template2(MainView parent) :68
void MainView__Template2__ctor_1_fn(MainView__Template2* __this, ::g::MainView* parent)
{
    __this->ctor_1(parent);
}

// public Template2 New(MainView parent) :68
void MainView__Template2__New1_fn(::g::MainView* parent, MainView__Template2** __retval)
{
    *__retval = MainView__Template2::New1(parent);
}

// protected override sealed void OnApply(Fuse.Controls.Page self) :75
void MainView__Template2__OnApply_fn(MainView__Template2* __this, ::g::Fuse::Controls::Page* self)
{
    ::g::Fuse::Navigation::EnteringAnimation* temp = ::g::Fuse::Navigation::EnteringAnimation::New1();
    ::g::Fuse::Animations::Move* temp1 = ::g::Fuse::Animations::Move::New1();
    ::g::Fuse::Navigation::ExitingAnimation* temp2 = ::g::Fuse::Navigation::ExitingAnimation::New1();
    ::g::Fuse::Animations::Move* temp3 = ::g::Fuse::Animations::Move::New1();
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp->Animators()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::TYPES[1/*Fuse.Animations.Animator*/])), temp1);
    temp1->X(-1.0f);
    temp1->RelativeTo(::g::Fuse::TranslationModes::ParentSize());
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp2->Animators()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::TYPES[1/*Fuse.Animations.Animator*/])), temp3);
    temp3->X(1.0f);
    temp3->RelativeTo(::g::Fuse::TranslationModes::ParentSize());
    uPtr(self)->AddStyleBehavior(temp);
    self->AddStyleBehavior(temp2);
}

// public Template2(MainView parent) [instance] :68
void MainView__Template2::ctor_1(::g::MainView* parent)
{
    ctor_();
    __parent1 = parent;
}

// public Template2 New(MainView parent) [static] :68
MainView__Template2* MainView__Template2::New1(::g::MainView* parent)
{
    MainView__Template2* obj1 = (MainView__Template2*)uNew(MainView__Template2_typeof());
    obj1->ctor_1(parent);
    return obj1;
}
// }

} // ::g
