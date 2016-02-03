// This file was generated based on 'C:\Users\Kuro\Documents\Fuse\Android UI\.cache\GeneratedCode\MainView.g.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#include <app/-.MainView.h>
#include <app/-.MainView_Template2.h>
#include <app/Fuse.Animations.Animator.h>
#include <app/Fuse.Animations.Move.h>
#include <app/Fuse.Animations.TransformAnimator__Fuse_Translation.h>
#include <app/Fuse.Behavior.h>
#include <app/Fuse.Controls.Page.h>
#include <app/Fuse.ITranslationMode.h>
#include <app/Fuse.Navigation.EnteringAnimation.h>
#include <app/Fuse.Navigation.ExitingAnimation.h>
#include <app/Fuse.Node.h>
#include <app/Fuse.TranslationModes.h>
#include <app/Fuse.Triggers.Trigger.h>
#include <app/Uno.Collections.ICollection__Fuse_Animations_Animator.h>
#include <app/Uno.Collections.IList__Fuse_Animations_Animator.h>
#include <app/Uno.Float.h>

namespace app {

MainView_Template2__uType* MainView_Template2__typeof()
{
    static ::uStaticStrong<MainView_Template2__uType*> type;
    if (type != NULL) return type;

    type = (MainView_Template2__uType*)::uAllocClassType(sizeof(MainView_Template2__uType), "MainView.Template2", false, 1, 1, 0);

    type->SetBaseType(::app::Uno::UX::Template__Fuse_Controls_Page__typeof());
    type->__fp_OnApply = (void(*)(::app::Uno::UX::Template__Fuse_Controls_Page*, ::app::Fuse::Controls::Page*))MainView_Template2__OnApply;

    type->SetInterfaces(
        ::app::Uno::UX::ITemplate__typeof(), offsetof(MainView_Template2__uType, __interface_0));

    type->SetStrongRefs(
        "__parent", offsetof(MainView_Template2, __parent));

    type->SetFunctions(1,
        ::uNewFunction(".ctor", MainView_Template2__New_1, 0, true, MainView_Template2__typeof(), ::app::MainView__typeof()));

    ::uRegisterType(type);
    return type;
}

void MainView_Template2___ObjInit_1(MainView_Template2* __this, ::app::MainView* parent)
{
    ::app::Uno::UX::Template__Fuse_Controls_Page___ObjInit(__this);
    __this->__parent = parent;
}

MainView_Template2* MainView_Template2__New_1(::uStatic* __this, ::app::MainView* parent)
{
    MainView_Template2* inst = (MainView_Template2*)::uAllocObject(sizeof(MainView_Template2), MainView_Template2__typeof());
    inst->_ObjInit_1(parent);
    return inst;
}

void MainView_Template2__OnApply(MainView_Template2* __this, ::app::Fuse::Controls::Page* self)
{
    ::app::Fuse::Navigation::EnteringAnimation* temp = ::app::Fuse::Navigation::EnteringAnimation__New_1(NULL);
    ::app::Fuse::Animations::Move* temp1 = ::app::Fuse::Animations::Move__New_1(NULL);
    ::app::Fuse::Navigation::ExitingAnimation* temp2 = ::app::Fuse::Navigation::ExitingAnimation__New_1(NULL);
    ::app::Fuse::Animations::Move* temp3 = ::app::Fuse::Animations::Move__New_1(NULL);
    ::app::Uno::Collections::ICollection__Fuse_Animations_Animator::Add(::uPtr< ::uObject*>(::uPtr< ::app::Fuse::Navigation::EnteringAnimation*>(temp)->Animators()), (::app::Fuse::Animations::Animator*)temp1);
    ::uPtr< ::app::Fuse::Animations::Move*>(temp1)->X(-1.0f);
    temp1->RelativeTo(::app::Fuse::TranslationModes__ParentSize);
    ::app::Uno::Collections::ICollection__Fuse_Animations_Animator::Add(::uPtr< ::uObject*>(::uPtr< ::app::Fuse::Navigation::ExitingAnimation*>(temp2)->Animators()), (::app::Fuse::Animations::Animator*)temp3);
    ::uPtr< ::app::Fuse::Animations::Move*>(temp3)->X(1.0f);
    temp3->RelativeTo(::app::Fuse::TranslationModes__ParentSize);
    ::uPtr< ::app::Fuse::Controls::Page*>(self)->AddStyleBehavior((::app::Fuse::Behavior*)temp);
    self->AddStyleBehavior((::app::Fuse::Behavior*)temp2);
}

}
