#include <app/Fuse.Animations.AnimationVariant.h>
#include <app/Fuse.Animations.Animator.h>
#include <app/Fuse.Animations.IResizeMode.h>
#include <app/Fuse.Animations.Nothing.h>
#include <app/Fuse.Animations.TrackAnimator.h>
#include <app/Fuse.Animations.TriggerAnimation.h>
#include <app/Fuse.Animations.TriggerAnimationState.h>
#include <app/Fuse.Animations.TriggerAnimationState_SeekFlags.h>
#include <app/Fuse.BeginRemoveArgs.h>
#include <app/Fuse.BeginRemoveHandler.h>
#include <app/Fuse.Behavior.h>
#include <app/Fuse.Controls.Control.h>
#include <app/Fuse.Controls.ScrollView.h>
#include <app/Fuse.Controls.TextControl.h>
#include <app/Fuse.Controls.TextInput.h>
#include <app/Fuse.Elements.Element.h>
#include <app/Fuse.Elements.LayoutArgs.h>
#include <app/Fuse.Elements.LayoutHandler.h>
#include <app/Fuse.Gestures.ScrollDirections.h>
#include <app/Fuse.Input.Focus.h>
#include <app/Fuse.Input.FocusGainedHandler.h>
#include <app/Fuse.Input.FocusLostHandler.h>
#include <app/Fuse.ITranslationMode.h>
#include <app/Fuse.IViewport.h>
#include <app/Fuse.Node.h>
#include <app/Fuse.NodeEvent__Fuse_Input_FocusGainedHandler__Fuse_Input_Focus-e88b1a1.h>
#include <app/Fuse.NodeEvent__Fuse_Input_FocusLostHandler__Fuse_Input_FocusLostArgs.h>
#include <app/Fuse.NodeEventArgs.h>
#include <app/Fuse.NodeEventHandler.h>
#include <app/Fuse.Properties.h>
#include <app/Fuse.PropertyHandle.h>
#include <app/Fuse.Translation.h>
#include <app/Fuse.Triggers.Actions.Callback.h>
#include <app/Fuse.Triggers.Actions.TriggerAction.h>
#include <app/Fuse.Triggers.Actions.TriggerDirection.h>
#include <app/Fuse.Triggers.AddingAnimation.h>
#include <app/Fuse.Triggers.Android.h>
#include <app/Fuse.Triggers.ContainingText.h>
#include <app/Fuse.Triggers.ElementTrigger.h>
#include <app/Fuse.Triggers.IAddRemove__Fuse_Node.h>
#include <app/Fuse.Triggers.iOS.h>
#include <app/Fuse.Triggers.IPlayback.h>
#include <app/Fuse.Triggers.IProgress.h>
#include <app/Fuse.Triggers.IValue__bool.h>
#include <app/Fuse.Triggers.IValue__float.h>
#include <app/Fuse.Triggers.LayoutAnimation.h>
#include <app/Fuse.Triggers.LayoutAnimation_PositionChangeMode.h>
#include <app/Fuse.Triggers.LayoutAnimation_ResizeChangeMode.h>
#include <app/Fuse.Triggers.ProgressAnimation.h>
#include <app/Fuse.Triggers.PullToReload.h>
#include <app/Fuse.Triggers.RemovingAnimation.h>
#include <app/Fuse.Triggers.ScrollingAnimation.h>
#include <app/Fuse.Triggers.ScrollingAnimationRange.h>
#include <app/Fuse.Triggers.State.h>
#include <app/Fuse.Triggers.StateGroup.h>
#include <app/Fuse.Triggers.StateTransition.h>
#include <app/Fuse.Triggers.Timeline.h>
#include <app/Fuse.Triggers.Timeline_State.h>
#include <app/Fuse.Triggers.Trigger.h>
#include <app/Fuse.Triggers.TriggerBypassMode.h>
#include <app/Fuse.Triggers.WhileBool.h>
#include <app/Fuse.Triggers.WhileDisabled.h>
#include <app/Fuse.Triggers.WhileEnabled.h>
#include <app/Fuse.Triggers.WhileEnabledDisabledTrigger.h>
#include <app/Fuse.Triggers.WhileFailed.h>
#include <app/Fuse.Triggers.WhileFalse.h>
#include <app/Fuse.Triggers.WhileFloat.h>
#include <app/Fuse.Triggers.WhileFloat_Range.h>
#include <app/Fuse.Triggers.WhileFocused.h>
#include <app/Fuse.Triggers.WhileFocusWithin.h>
#include <app/Fuse.Triggers.WhileInteracting.h>
#include <app/Fuse.Triggers.WhileKeyboardVisible.h>
#include <app/Fuse.Triggers.WhileKeyboardVisible_RelativeToKeyboardMode.h>
#include <app/Fuse.Triggers.WhileLoading.h>
#include <app/Fuse.Triggers.WhileNotFocused.h>
#include <app/Fuse.Triggers.WhileScrollable.h>
#include <app/Fuse.Triggers.WhileTrigger.h>
#include <app/Fuse.Triggers.WhileTrue.h>
#include <app/Fuse.Triggers.WhileVisible.h>
#include <app/Fuse.Triggers.WhileWindowAspect.h>
#include <app/Fuse.Triggers.WhileWindowLandscape.h>
#include <app/Fuse.Triggers.WhileWindowPortrait.h>
#include <app/Uno.Action.h>
#include <app/Uno.Action__Fuse_Behavior.h>
#include <app/Uno.Action__Fuse_Node.h>
#include <app/Uno.Action__Fuse_Triggers_Trigger.h>
#include <app/Uno.Action__object.h>
#include <app/Uno.Application.h>
#include <app/Uno.Bool.h>
#include <app/Uno.Collections.ICollection__Fuse_Animations_Animator.h>
#include <app/Uno.Collections.ICollection__Fuse_Behavior.h>
#include <app/Uno.Collections.ICollection__Fuse_Triggers_Actions_TriggerAction.h>
#include <app/Uno.Collections.ICollection__Fuse_Triggers_State.h>
#include <app/Uno.Collections.IEnumerable__Fuse_Behavior.h>
#include <app/Uno.Collections.IEnumerable__Fuse_Node.h>
#include <app/Uno.Collections.IEnumerable__Fuse_Triggers_State.h>
#include <app/Uno.Collections.IEnumerator.h>
#include <app/Uno.Collections.IEnumerator__Fuse_Behavior.h>
#include <app/Uno.Collections.IEnumerator__Fuse_Node.h>
#include <app/Uno.Collections.IEnumerator__Fuse_Triggers_State.h>
#include <app/Uno.Collections.IList__Fuse_Animations_Animator.h>
#include <app/Uno.Collections.IList__Fuse_Behavior.h>
#include <app/Uno.Collections.IList__Fuse_Node.h>
#include <app/Uno.Collections.IList__Fuse_Triggers_Actions_TriggerAction.h>
#include <app/Uno.Collections.IList__Fuse_Triggers_State.h>
#include <app/Uno.Collections.List__Fuse_Triggers_Actions_TriggerAction.h>
#include <app/Uno.Collections.List__Fuse_Triggers_State.h>
#include <app/Uno.Collections.List1_Enumerator__Fuse_Triggers_Actions_TriggerAction.h>
#include <app/Uno.Collections.ObservableList__Fuse_Behavior.h>
#include <app/Uno.Collections.ObservableList__Fuse_Node.h>
#include <app/Uno.Delegate.h>
#include <app/Uno.Double.h>
#include <app/Uno.EventArgs.h>
#include <app/Uno.EventHandler.h>
#include <app/Uno.EventHandler__Uno_Platform_SystemUIWillResizeEventArgs.h>
#include <app/Uno.Exception.h>
#include <app/Uno.Float.h>
#include <app/Uno.Float2.h>
#include <app/Uno.Float3.h>
#include <app/Uno.Float4.h>
#include <app/Uno.Int.h>
#include <app/Uno.Math.h>
#include <app/Uno.Object.h>
#include <app/Uno.Platform.SystemUI.h>
#include <app/Uno.Platform.SystemUIWillResizeEventArgs.h>
#include <app/Uno.Platform.Window.h>
#include <app/Uno.Predicate__object.h>
#include <app/Uno.String.h>
#include <app/Uno.UX.ValueChangedHandler__bool.h>
#include <app/Uno.UX.ValueChangedHandler__float.h>
#include <app/Uno.UX.ValueChangedHandler__string.h>

namespace app {
namespace Fuse {
namespace Triggers {

// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Triggers\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

AddingAnimation__uType* AddingAnimation__typeof()
{
    static ::uStaticStrong<AddingAnimation__uType*> type;
    if (type != NULL) return type;

    type = (AddingAnimation__uType*)::uAllocClassType(sizeof(AddingAnimation__uType), "Fuse.Triggers.AddingAnimation", false, 0, 0, 0);

    type->SetBaseType(::app::Fuse::Triggers::Trigger__typeof());
    type->__fp_OnRooted = (void(*)(::app::Fuse::Behavior*, ::app::Fuse::Node*))AddingAnimation__OnRooted;

    type->SetFunctions(1,
        ::uNewFunction(".ctor", AddingAnimation__New_1, 0, true, AddingAnimation__typeof()));

    ::uRegisterType(type);
    return type;
}

void AddingAnimation___ObjInit_2(AddingAnimation* __this)
{
    ::app::Fuse::Triggers::Trigger___ObjInit_1(__this);
}

AddingAnimation* AddingAnimation__New_1(::uStatic* __this)
{
    AddingAnimation* inst = (AddingAnimation*)::uAllocObject(sizeof(AddingAnimation), AddingAnimation__typeof());
    inst->_ObjInit_2();
    return inst;
}

void AddingAnimation__OnRooted(AddingAnimation* __this, ::app::Fuse::Node* n)
{
    ::app::Fuse::Triggers::Trigger__OnRooted(__this, n);
    __this->BypassActivate();
    __this->Deactivate();
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Triggers\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

Android__uType* Android__typeof()
{
    static ::uStaticStrong<Android__uType*> type;
    if (type != NULL) return type;

    type = (Android__uType*)::uAllocClassType(sizeof(Android__uType), "Fuse.Triggers.Android", false, 0, 0, 0);

    type->SetBaseType(::app::Fuse::Triggers::Trigger__typeof());
    type->__fp_OnRooted = (void(*)(::app::Fuse::Behavior*, ::app::Fuse::Node*))Android__OnRooted;
    type->__fp_OnUnrooted = (void(*)(::app::Fuse::Behavior*, ::app::Fuse::Node*))Android__OnUnrooted;

    type->SetFunctions(1,
        ::uNewFunction(".ctor", Android__New_1, 0, true, Android__typeof()));

    ::uRegisterType(type);
    return type;
}

void Android___ObjInit_2(Android* __this)
{
    ::app::Fuse::Triggers::Trigger___ObjInit_1(__this);
}

Android* Android__New_1(::uStatic* __this)
{
    Android* inst = (Android*)::uAllocObject(sizeof(Android), Android__typeof());
    inst->_ObjInit_2();
    return inst;
}

void Android__OnRooted(Android* __this, ::app::Fuse::Node* n)
{
    ::app::Fuse::Triggers::Trigger__OnRooted(__this, n);
    {
        __this->Activate(NULL);
    }
}

void Android__OnUnrooted(Android* __this, ::app::Fuse::Node* n)
{
    {
        __this->Deactivate();
    }

    ::app::Fuse::Triggers::Trigger__OnUnrooted(__this, n);
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Controls\0.11.3\Triggers\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

ContainingText__uType* ContainingText__typeof()
{
    static ::uStaticStrong<ContainingText__uType*> type;
    if (type != NULL) return type;

    type = (ContainingText__uType*)::uAllocClassType(sizeof(ContainingText__uType), "Fuse.Triggers.ContainingText", false, 0, 1, 0);

    type->SetBaseType(::app::Fuse::Triggers::ElementTrigger__typeof());
    type->__fp_OnRooted_1 = (void(*)(::app::Fuse::Triggers::ElementTrigger*, ::app::Fuse::Elements::Element*))ContainingText__OnRooted_1;
    type->__fp_OnUnrooted_1 = (void(*)(::app::Fuse::Triggers::ElementTrigger*, ::app::Fuse::Elements::Element*))ContainingText__OnUnrooted_1;

    type->SetStrongRefs(
        "_textInput", offsetof(ContainingText, _textInput));

    type->SetFields(1,
        ::uNewField("_textInput", NULL, offsetof(ContainingText, _textInput), ::app::Fuse::Controls::TextInput__typeof()));

    type->SetFunctions(3,
        ::uNewFunctionVoid("ApplyState", ContainingText__ApplyState, 0, false),
        ::uNewFunction(".ctor", ContainingText__New_1, 0, true, ContainingText__typeof()),
        ::uNewFunctionVoid("OnValueChanged", ContainingText__OnValueChanged, 0, false, ::uObject__typeof(), ::app::Uno::EventArgs__typeof()));

    ::uRegisterType(type);
    return type;
}

void ContainingText___ObjInit_3(ContainingText* __this)
{
    ::app::Fuse::Triggers::ElementTrigger___ObjInit_2(__this);
}

void ContainingText__ApplyState(ContainingText* __this)
{
    if (!::app::Uno::String__IsNullOrEmpty(NULL, ::uPtr< ::app::Fuse::Controls::TextInput*>(__this->_textInput)->Value()))
    {
        __this->Activate(NULL);
    }
    else
    {
        __this->Deactivate();
    }
}

ContainingText* ContainingText__New_1(::uStatic* __this)
{
    ContainingText* inst = (ContainingText*)::uAllocObject(sizeof(ContainingText), ContainingText__typeof());
    inst->_ObjInit_3();
    return inst;
}

void ContainingText__OnRooted_1(ContainingText* __this, ::app::Fuse::Elements::Element* elm)
{
    __this->_textInput = ::uAs< ::app::Fuse::Controls::TextInput*>(elm, ::app::Fuse::Controls::TextInput__typeof());

    if (__this->_textInput != NULL)
    {
        if (!::app::Uno::String__IsNullOrEmpty(NULL, ::uPtr< ::app::Fuse::Controls::TextInput*>(__this->_textInput)->Value()))
        {
            __this->BypassActivate();
        }

        ::uPtr< ::app::Fuse::Controls::TextInput*>(__this->_textInput)->add_ValueChanged(::uNewDelegateNonVirt(::app::Uno::UX::ValueChangedHandler__string__typeof(), (const void*)ContainingText__OnValueChanged, __this));
    }
}

void ContainingText__OnUnrooted_1(ContainingText* __this, ::app::Fuse::Elements::Element* elm)
{
    if (__this->_textInput != NULL)
    {
        ::uPtr< ::app::Fuse::Controls::TextInput*>(__this->_textInput)->remove_ValueChanged(::uNewDelegateNonVirt(::app::Uno::UX::ValueChangedHandler__string__typeof(), (const void*)ContainingText__OnValueChanged, __this));
    }

    __this->_textInput = NULL;
}

void ContainingText__OnValueChanged(ContainingText* __this, ::uObject* sender, ::app::Uno::EventArgs* args)
{
    __this->ApplyState();
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Elements\0.11.3\Triggers\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

ElementTrigger__uType* ElementTrigger__typeof()
{
    static ::uStaticStrong<ElementTrigger__uType*> type;
    if (type != NULL) return type;

    type = (ElementTrigger__uType*)::uAllocClassType(sizeof(ElementTrigger__uType), "Fuse.Triggers.ElementTrigger", false, 0, 0, 0);

    type->SetBaseType(::app::Fuse::Triggers::Trigger__typeof());
    type->__fp_OnRooted = (void(*)(::app::Fuse::Behavior*, ::app::Fuse::Node*))ElementTrigger__OnRooted;
    type->__fp_OnUnrooted = (void(*)(::app::Fuse::Behavior*, ::app::Fuse::Node*))ElementTrigger__OnUnrooted;

    type->SetFunctions(2,
        ::uNewFunctionVoid("OnRooted", type->__fp_OnRooted_1, offsetof(ElementTrigger__uType, __fp_OnRooted_1), false, ::app::Fuse::Elements::Element__typeof()),
        ::uNewFunctionVoid("OnUnrooted", type->__fp_OnUnrooted_1, offsetof(ElementTrigger__uType, __fp_OnUnrooted_1), false, ::app::Fuse::Elements::Element__typeof()));

    ::uRegisterType(type);
    return type;
}

void ElementTrigger___ObjInit_2(ElementTrigger* __this)
{
    ::app::Fuse::Triggers::Trigger___ObjInit_1(__this);
}

void ElementTrigger__OnRooted(ElementTrigger* __this, ::app::Fuse::Node* elm)
{
    ::app::Fuse::Triggers::Trigger__OnRooted(__this, elm);

    if (::uIs(elm, ::app::Fuse::Elements::Element__typeof()))
    {
        __this->OnRooted_1(::uAs< ::app::Fuse::Elements::Element*>(elm, ::app::Fuse::Elements::Element__typeof()));
    }
}

void ElementTrigger__OnUnrooted(ElementTrigger* __this, ::app::Fuse::Node* elm)
{
    if (::uIs(elm, ::app::Fuse::Elements::Element__typeof()))
    {
        __this->OnUnrooted_1(::uAs< ::app::Fuse::Elements::Element*>(elm, ::app::Fuse::Elements::Element__typeof()));
    }

    ::app::Fuse::Triggers::Trigger__OnUnrooted(__this, elm);
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Triggers\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

::uInterfaceType* IAddRemove__Fuse_Node__typeof()
{
    static ::uStaticStrong< ::uInterfaceType*> type;
    if (type != NULL) return type;

    type = ::uAllocInterfaceType("Fuse.Triggers.IAddRemove<Fuse.Node>");

    ::uRegisterType(type);
    return type;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Triggers\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

iOS__uType* iOS__typeof()
{
    static ::uStaticStrong<iOS__uType*> type;
    if (type != NULL) return type;

    type = (iOS__uType*)::uAllocClassType(sizeof(iOS__uType), "Fuse.Triggers.iOS", false, 0, 0, 0);

    type->SetBaseType(::app::Fuse::Triggers::Trigger__typeof());
    type->__fp_OnRooted = (void(*)(::app::Fuse::Behavior*, ::app::Fuse::Node*))iOS__OnRooted;
    type->__fp_OnUnrooted = (void(*)(::app::Fuse::Behavior*, ::app::Fuse::Node*))iOS__OnUnrooted;

    type->SetFunctions(1,
        ::uNewFunction(".ctor", iOS__New_1, 0, true, iOS__typeof()));

    ::uRegisterType(type);
    return type;
}

void iOS___ObjInit_2(iOS* __this)
{
    ::app::Fuse::Triggers::Trigger___ObjInit_1(__this);
}

iOS* iOS__New_1(::uStatic* __this)
{
    iOS* inst = (iOS*)::uAllocObject(sizeof(iOS), iOS__typeof());
    inst->_ObjInit_2();
    return inst;
}

void iOS__OnRooted(iOS* __this, ::app::Fuse::Node* n)
{
    ::app::Fuse::Triggers::Trigger__OnRooted(__this, n);
}

void iOS__OnUnrooted(iOS* __this, ::app::Fuse::Node* n)
{
    ::app::Fuse::Triggers::Trigger__OnUnrooted(__this, n);
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Triggers\0.11.3\Actions\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

::uInterfaceType* IPlayback__typeof()
{
    static ::uStaticStrong< ::uInterfaceType*> type;
    if (type != NULL) return type;

    type = ::uAllocInterfaceType("Fuse.Triggers.IPlayback");

    ::uRegisterType(type);
    return type;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Triggers\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

::uInterfaceType* IProgress__typeof()
{
    static ::uStaticStrong< ::uInterfaceType*> type;
    if (type != NULL) return type;

    type = ::uAllocInterfaceType("Fuse.Triggers.IProgress");

    ::uRegisterType(type);
    return type;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Triggers\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

::uInterfaceType* IValue__bool__typeof()
{
    static ::uStaticStrong< ::uInterfaceType*> type;
    if (type != NULL) return type;

    type = ::uAllocInterfaceType("Fuse.Triggers.IValue<bool>");

    ::uRegisterType(type);
    return type;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Triggers\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

::uInterfaceType* IValue__float__typeof()
{
    static ::uStaticStrong< ::uInterfaceType*> type;
    if (type != NULL) return type;

    type = ::uAllocInterfaceType("Fuse.Triggers.IValue<float>");

    ::uRegisterType(type);
    return type;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Elements\0.11.3\Triggers\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

::uStaticStrong< ::app::Fuse::PropertyHandle*> LayoutAnimation___positionChange;
::uStaticStrong< ::app::Fuse::PropertyHandle*> LayoutAnimation___sizeChange;
::uStaticStrong< ::uObject*> LayoutAnimation__PositionChange;
::uStaticStrong< ::uObject*> LayoutAnimation__SizeChange;

LayoutAnimation__uType* LayoutAnimation__typeof()
{
    static ::uStaticStrong<LayoutAnimation__uType*> type;
    if (type != NULL) return type;

    type = (LayoutAnimation__uType*)::uAllocClassType(sizeof(LayoutAnimation__uType), "Fuse.Triggers.LayoutAnimation", false, 0, 0, 0);

    type->SetBaseType(::app::Fuse::Triggers::Trigger__typeof());
    type->__fp_OnRooted = (void(*)(::app::Fuse::Behavior*, ::app::Fuse::Node*))LayoutAnimation__OnRooted;
    type->__fp_OnUnrooted = (void(*)(::app::Fuse::Behavior*, ::app::Fuse::Node*))LayoutAnimation__OnUnrooted;

    type->SetFields(4,
        ::uNewField("_positionChange", &LayoutAnimation___positionChange, 0, ::app::Fuse::PropertyHandle__typeof()),
        ::uNewField("_sizeChange", &LayoutAnimation___sizeChange, 0, ::app::Fuse::PropertyHandle__typeof()),
        ::uNewField("PositionChange", &LayoutAnimation__PositionChange, 0, ::app::Fuse::ITranslationMode__typeof()),
        ::uNewField("SizeChange", &LayoutAnimation__SizeChange, 0, ::app::Fuse::Animations::IResizeMode__typeof()));

    type->SetFunctions(6,
        ::uNewFunction("GetPositionChange", LayoutAnimation__GetPositionChange, 0, true, ::app::Uno::Float3__typeof(), ::app::Fuse::Node__typeof()),
        ::uNewFunction("GetSizeChange", LayoutAnimation__GetSizeChange, 0, true, ::app::Uno::Bool__typeof(), ::app::Fuse::Node__typeof(), ::app::Uno::Float2__typeof(), ::app::Uno::Float2__typeof()),
        ::uNewFunction(".ctor", LayoutAnimation__New_1, 0, true, LayoutAnimation__typeof()),
        ::uNewFunctionVoid("OnLayoutChange", LayoutAnimation__OnLayoutChange, 0, false, ::uObject__typeof(), ::app::Fuse::Elements::LayoutArgs__typeof()),
        ::uNewFunctionVoid("SetPositionChange", LayoutAnimation__SetPositionChange, 0, true, ::app::Fuse::Node__typeof(), ::app::Uno::Float3__typeof()),
        ::uNewFunctionVoid("SetSizeChange", LayoutAnimation__SetSizeChange, 0, true, ::app::Fuse::Node__typeof(), ::app::Uno::Float2__typeof(), ::app::Uno::Float2__typeof()));

    ::uRegisterType(type);
    return type;
}

void LayoutAnimation___ObjInit_2(LayoutAnimation* __this)
{
    ::app::Fuse::Triggers::Trigger___ObjInit_1(__this);
}

void LayoutAnimation___TypeInit(::uStatic* __this)
{
    LayoutAnimation__PositionChange = (::uObject*)::app::Fuse::Triggers::LayoutAnimation_PositionChangeMode__New_1(NULL);
    LayoutAnimation___positionChange = ::app::Fuse::PropertyHandle__New_1(NULL);
    LayoutAnimation__SizeChange = (::uObject*)::app::Fuse::Triggers::LayoutAnimation_ResizeChangeMode__New_1(NULL);
    LayoutAnimation___sizeChange = ::app::Fuse::Properties__CreateHandle(NULL);
}

::app::Uno::Float3 LayoutAnimation__GetPositionChange(::uStatic* __this, ::app::Fuse::Node* n)
{
    ::uObject* v = ::uPtr< ::app::Fuse::Properties*>(::uPtr< ::app::Fuse::Node*>(n)->Properties())->Get(LayoutAnimation___positionChange);

    if (v != NULL)
    {
        return ::uUnbox< ::app::Uno::Float3>(::app::Uno::Float3__typeof(), v);
    }
    else
    {
        return ::app::Uno::Float3__New_1(NULL, 0.0f);
    }
}

bool LayoutAnimation__GetSizeChange(::uStatic* __this, ::app::Fuse::Node* n, ::app::Uno::Float2* oldSize, ::app::Uno::Float2* newSize)
{
    ::uObject* res;

    if (::uPtr< ::app::Fuse::Properties*>(::uPtr< ::app::Fuse::Node*>(n)->Properties())->TryGet(LayoutAnimation___sizeChange, &res))
    {
        ::app::Uno::Float4 f = ::uUnbox< ::app::Uno::Float4>(::app::Uno::Float4__typeof(), res);
        *oldSize = ::app::Uno::Float2__New_2(NULL, f.X, f.Y);
        *newSize = ::app::Uno::Float2__New_2(NULL, f.Z, f.W);
        return true;
    }
    else
    {
        *oldSize = ::app::Uno::Float2__New_1(NULL, 0.0f);
        *newSize = ::app::Uno::Float2__New_1(NULL, 0.0f);
        return false;
    }
}

LayoutAnimation* LayoutAnimation__New_1(::uStatic* __this)
{
    LayoutAnimation* inst = (LayoutAnimation*)::uAllocObject(sizeof(LayoutAnimation), LayoutAnimation__typeof());
    inst->_ObjInit_2();
    return inst;
}

void LayoutAnimation__OnLayoutChange(LayoutAnimation* __this, ::uObject* sender, ::app::Fuse::Elements::LayoutArgs* args)
{
    if (!::uPtr< ::app::Fuse::Elements::LayoutArgs*>(args)->HasOld())
    {
        return;
    }

    ::app::Fuse::Elements::Element* elm = ::uAs< ::app::Fuse::Elements::Element*>(sender, ::app::Fuse::Elements::Element__typeof());
    LayoutAnimation__SetPositionChange(NULL, (::app::Fuse::Node*)elm, ::uPtr< ::app::Fuse::Elements::LayoutArgs*>(args)->PositionChange());
    LayoutAnimation__SetSizeChange(NULL, (::app::Fuse::Node*)elm, args->OldSize(), args->NewSize());
    __this->BypassActivate();
    __this->Deactivate();
}

void LayoutAnimation__OnRooted(LayoutAnimation* __this, ::app::Fuse::Node* elm)
{
    ::app::Fuse::Triggers::Trigger__OnRooted(__this, elm);
    ::app::Fuse::Elements::Element* e = ::uAs< ::app::Fuse::Elements::Element*>(elm, ::app::Fuse::Elements::Element__typeof());

    if (e != NULL)
    {
        ::uPtr< ::app::Fuse::Elements::Element*>(e)->add_LayoutChanged(::uNewDelegateNonVirt(::app::Fuse::Elements::LayoutHandler__typeof(), (const void*)LayoutAnimation__OnLayoutChange, __this));
    }
}

void LayoutAnimation__OnUnrooted(LayoutAnimation* __this, ::app::Fuse::Node* elm)
{
    ::app::Fuse::Elements::Element* e = ::uAs< ::app::Fuse::Elements::Element*>(elm, ::app::Fuse::Elements::Element__typeof());

    if (e != NULL)
    {
        ::uPtr< ::app::Fuse::Elements::Element*>(e)->remove_LayoutChanged(::uNewDelegateNonVirt(::app::Fuse::Elements::LayoutHandler__typeof(), (const void*)LayoutAnimation__OnLayoutChange, __this));
    }

    ::app::Fuse::Triggers::Trigger__OnUnrooted(__this, elm);
}

void LayoutAnimation__SetPositionChange(::uStatic* __this, ::app::Fuse::Node* n, ::app::Uno::Float3 delta)
{
    ::uPtr< ::app::Fuse::Properties*>(::uPtr< ::app::Fuse::Node*>(n)->Properties())->Set(LayoutAnimation___positionChange, ::uBox(::app::Uno::Float3__typeof(), delta));
}

void LayoutAnimation__SetSizeChange(::uStatic* __this, ::app::Fuse::Node* n, ::app::Uno::Float2 oldSize, ::app::Uno::Float2 newSize)
{
    ::uPtr< ::app::Fuse::Properties*>(::uPtr< ::app::Fuse::Node*>(n)->Properties())->Set(LayoutAnimation___sizeChange, ::uBox(::app::Uno::Float4__typeof(), ::app::Uno::Float4__New_7(NULL, oldSize, newSize)));
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Elements\0.11.3\Triggers\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

LayoutAnimation_PositionChangeMode__uType* LayoutAnimation_PositionChangeMode__typeof()
{
    static ::uStaticStrong<LayoutAnimation_PositionChangeMode__uType*> type;
    if (type != NULL) return type;

    type = (LayoutAnimation_PositionChangeMode__uType*)::uAllocClassType(sizeof(LayoutAnimation_PositionChangeMode__uType), "Fuse.Triggers.LayoutAnimation.PositionChangeMode", false, 1, 0, 0);

    type->__interface_0.__fp_GetAbsVector = (::app::Uno::Float3(*)(void*, ::app::Fuse::Translation*))LayoutAnimation_PositionChangeMode__GetAbsVector;

    type->SetInterfaces(
        ::app::Fuse::ITranslationMode__typeof(), offsetof(LayoutAnimation_PositionChangeMode__uType, __interface_0));

    return type;
}

void LayoutAnimation_PositionChangeMode___ObjInit(LayoutAnimation_PositionChangeMode* __this)
{
}

::app::Uno::Float3 LayoutAnimation_PositionChangeMode__GetAbsVector(LayoutAnimation_PositionChangeMode* __this, ::app::Fuse::Translation* t)
{
    return ::app::Uno::Float3__op_Multiply_2(NULL, ::app::Fuse::Triggers::LayoutAnimation__GetPositionChange(NULL, ::uPtr< ::app::Fuse::Translation*>(t)->RelativeNode()), ::uPtr< ::app::Fuse::Translation*>(t)->Vector());
}

LayoutAnimation_PositionChangeMode* LayoutAnimation_PositionChangeMode__New_1(::uStatic* __this)
{
    LayoutAnimation_PositionChangeMode* inst = (LayoutAnimation_PositionChangeMode*)::uAllocObject(sizeof(LayoutAnimation_PositionChangeMode), LayoutAnimation_PositionChangeMode__typeof());
    inst->_ObjInit();
    return inst;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Elements\0.11.3\Triggers\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

LayoutAnimation_ResizeChangeMode__uType* LayoutAnimation_ResizeChangeMode__typeof()
{
    static ::uStaticStrong<LayoutAnimation_ResizeChangeMode__uType*> type;
    if (type != NULL) return type;

    type = (LayoutAnimation_ResizeChangeMode__uType*)::uAllocClassType(sizeof(LayoutAnimation_ResizeChangeMode__uType), "Fuse.Triggers.LayoutAnimation.ResizeChangeMode", false, 1, 0, 0);

    type->__interface_0.__fp_GetSizeChange = (bool(*)(void*, ::app::Fuse::Node*, ::app::Uno::Float2*, ::app::Uno::Float2*))LayoutAnimation_ResizeChangeMode__GetSizeChange;

    type->SetInterfaces(
        ::app::Fuse::Animations::IResizeMode__typeof(), offsetof(LayoutAnimation_ResizeChangeMode__uType, __interface_0));

    return type;
}

void LayoutAnimation_ResizeChangeMode___ObjInit(LayoutAnimation_ResizeChangeMode* __this)
{
}

bool LayoutAnimation_ResizeChangeMode__GetSizeChange(LayoutAnimation_ResizeChangeMode* __this, ::app::Fuse::Node* n, ::app::Uno::Float2* baseSize, ::app::Uno::Float2* deltaSize)
{
    ::app::Uno::Float2 oldSize = ::app::Uno::Float2();
    ::app::Uno::Float2 newSize = ::app::Uno::Float2();
    bool b = ::app::Fuse::Triggers::LayoutAnimation__GetSizeChange(NULL, n, &oldSize, &newSize);
    *deltaSize = ::app::Uno::Float2__op_Subtraction_2(NULL, oldSize, newSize);
    *baseSize = newSize;
    return b;
}

LayoutAnimation_ResizeChangeMode* LayoutAnimation_ResizeChangeMode__New_1(::uStatic* __this)
{
    LayoutAnimation_ResizeChangeMode* inst = (LayoutAnimation_ResizeChangeMode*)::uAllocObject(sizeof(LayoutAnimation_ResizeChangeMode), LayoutAnimation_ResizeChangeMode__typeof());
    inst->_ObjInit();
    return inst;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Triggers\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

ProgressAnimation__uType* ProgressAnimation__typeof()
{
    static ::uStaticStrong<ProgressAnimation__uType*> type;
    if (type != NULL) return type;

    type = (ProgressAnimation__uType*)::uAllocClassType(sizeof(ProgressAnimation__uType), "Fuse.Triggers.ProgressAnimation", false, 0, 1, 0);

    type->SetBaseType(::app::Fuse::Triggers::Trigger__typeof());
    type->__fp_OnRooted = (void(*)(::app::Fuse::Behavior*, ::app::Fuse::Node*))ProgressAnimation__OnRooted;
    type->__fp_OnUnrooted = (void(*)(::app::Fuse::Behavior*, ::app::Fuse::Node*))ProgressAnimation__OnUnrooted;

    type->SetStrongRefs(
        "_progress", offsetof(ProgressAnimation, _progress));

    type->SetFields(2,
        ::uNewField("_prevValue", NULL, offsetof(ProgressAnimation, _prevValue), ::app::Uno::Double__typeof()),
        ::uNewField("_progress", NULL, offsetof(ProgressAnimation, _progress), ::app::Fuse::Triggers::IProgress__typeof()));

    type->SetFunctions(2,
        ::uNewFunction(".ctor", ProgressAnimation__New_1, 0, true, ProgressAnimation__typeof()),
        ::uNewFunctionVoid("OnChanged", ProgressAnimation__OnChanged, 0, false, ::uObject__typeof(), ::uObject__typeof()));

    ::uRegisterType(type);
    return type;
}

void ProgressAnimation___ObjInit_2(ProgressAnimation* __this)
{
    ::app::Fuse::Triggers::Trigger___ObjInit_1(__this);
}

ProgressAnimation* ProgressAnimation__New_1(::uStatic* __this)
{
    ProgressAnimation* inst = (ProgressAnimation*)::uAllocObject(sizeof(ProgressAnimation), ProgressAnimation__typeof());
    inst->_ObjInit_2();
    return inst;
}

void ProgressAnimation__OnChanged(ProgressAnimation* __this, ::uObject* s, ::uObject* a)
{
    double p = ::app::Fuse::Triggers::IProgress::Progress(::uPtr< ::uObject*>(__this->_progress));
    double diff = p - __this->_prevValue;
    __this->_prevValue = p;
    __this->Seek_1(p, (diff >= 0.0) ? 0 : 1);
}

void ProgressAnimation__OnRooted(ProgressAnimation* __this, ::app::Fuse::Node* elm)
{
    ::app::Fuse::Triggers::Trigger__OnRooted(__this, elm);
    __this->_progress = ::uAs< ::uObject*>(elm, ::app::Fuse::Triggers::IProgress__typeof());

    if (__this->_progress != NULL)
    {
        ::app::Fuse::Triggers::IProgress::add_ProgressChanged(::uPtr< ::uObject*>(__this->_progress), ::uNewDelegateNonVirt(::app::Uno::EventHandler__typeof(), (const void*)ProgressAnimation__OnChanged, __this));
        __this->_prevValue = ::app::Fuse::Triggers::IProgress::Progress(::uPtr< ::uObject*>(__this->_progress));
        __this->BypassSeek(__this->_prevValue, 0);
    }
}

void ProgressAnimation__OnUnrooted(ProgressAnimation* __this, ::app::Fuse::Node* elm)
{
    if (__this->_progress != NULL)
    {
        ::app::Fuse::Triggers::IProgress::remove_ProgressChanged(::uPtr< ::uObject*>(__this->_progress), ::uNewDelegateNonVirt(::app::Uno::EventHandler__typeof(), (const void*)ProgressAnimation__OnChanged, __this));
        __this->_progress = NULL;
    }

    ::app::Fuse::Triggers::Trigger__OnUnrooted(__this, elm);
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Controls\0.11.3\Triggers\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

PullToReload__uType* PullToReload__typeof()
{
    static ::uStaticStrong<PullToReload__uType*> type;
    if (type != NULL) return type;

    type = (PullToReload__uType*)::uAllocClassType(sizeof(PullToReload__uType), "Fuse.Triggers.PullToReload", false, 0, 6, 0);

    type->SetBaseType(::app::Fuse::Triggers::ScrollingAnimation__typeof());
    type->__fp_OnRooted = (void(*)(::app::Fuse::Behavior*, ::app::Fuse::Node*))PullToReload__OnRooted;
    type->__fp_OnUnrooted = (void(*)(::app::Fuse::Behavior*, ::app::Fuse::Node*))PullToReload__OnUnrooted;

    type->SetStrongRefs(
        "_loading", offsetof(PullToReload, _loading),
        "_pulledPastThreshold", offsetof(PullToReload, _pulledPastThreshold),
        "_pulling", offsetof(PullToReload, _pulling),
        "_rest", offsetof(PullToReload, _rest),
        "ReloadHandler", offsetof(PullToReload, ReloadHandler),
        "StateGroup", offsetof(PullToReload, StateGroup));

    type->SetFields(8,
        ::uNewField("_internLoading", NULL, offsetof(PullToReload, _internLoading), ::app::Uno::Bool__typeof()),
        ::uNewField("_isLoading", NULL, offsetof(PullToReload, _isLoading), ::app::Uno::Bool__typeof()),
        ::uNewField("_loading", NULL, offsetof(PullToReload, _loading), ::app::Fuse::Triggers::State__typeof()),
        ::uNewField("_pulledPastThreshold", NULL, offsetof(PullToReload, _pulledPastThreshold), ::app::Fuse::Triggers::State__typeof()),
        ::uNewField("_pulling", NULL, offsetof(PullToReload, _pulling), ::app::Fuse::Triggers::State__typeof()),
        ::uNewField("_rest", NULL, offsetof(PullToReload, _rest), ::app::Fuse::Triggers::State__typeof()),
        ::uNewField("StateGroup", NULL, offsetof(PullToReload, StateGroup), ::app::Fuse::Triggers::StateGroup__typeof()),
        ::uNewField("threshold", NULL, offsetof(PullToReload, threshold), ::app::Uno::Bool__typeof()));

    type->SetFunctions(18,
        ::uNewFunctionVoid("add_ReloadHandler", PullToReload__add_ReloadHandler, 0, false, ::app::Fuse::NodeEventHandler__typeof()),
        ::uNewFunction("get_IsLoading", PullToReload__get_IsLoading, 0, false, ::app::Uno::Bool__typeof()),
        ::uNewFunction("get_Loading", PullToReload__get_Loading, 0, false, ::app::Fuse::Triggers::State__typeof()),
        ::uNewFunction("get_PulledPastThreshold", PullToReload__get_PulledPastThreshold, 0, false, ::app::Fuse::Triggers::State__typeof()),
        ::uNewFunction("get_Pulling", PullToReload__get_Pulling, 0, false, ::app::Fuse::Triggers::State__typeof()),
        ::uNewFunction("get_Rest", PullToReload__get_Rest, 0, false, ::app::Fuse::Triggers::State__typeof()),
        ::uNewFunctionVoid("InitializeUX", PullToReload__InitializeUX, 0, false),
        ::uNewFunction(".ctor", PullToReload__New_2, 0, true, PullToReload__typeof()),
        ::uNewFunctionVoid("ReachThreshold", PullToReload__ReachThreshold, 0, false),
        ::uNewFunctionVoid("ReleasePull", PullToReload__ReleasePull, 0, false),
        ::uNewFunctionVoid("remove_ReloadHandler", PullToReload__remove_ReloadHandler, 0, false, ::app::Fuse::NodeEventHandler__typeof()),
        ::uNewFunction("Replace", PullToReload__Replace, 0, false, ::app::Fuse::Triggers::State__typeof(), ::app::Fuse::Triggers::State__typeof(), ::app::Fuse::Triggers::State__typeof()),
        ::uNewFunctionVoid("set_IsLoading", PullToReload__set_IsLoading, 0, false, ::app::Uno::Bool__typeof()),
        ::uNewFunctionVoid("set_Loading", PullToReload__set_Loading, 0, false, ::app::Fuse::Triggers::State__typeof()),
        ::uNewFunctionVoid("set_PulledPastThreshold", PullToReload__set_PulledPastThreshold, 0, false, ::app::Fuse::Triggers::State__typeof()),
        ::uNewFunctionVoid("set_Pulling", PullToReload__set_Pulling, 0, false, ::app::Fuse::Triggers::State__typeof()),
        ::uNewFunctionVoid("set_Rest", PullToReload__set_Rest, 0, false, ::app::Fuse::Triggers::State__typeof()),
        ::uNewFunctionVoid("StartPull", PullToReload__StartPull, 0, false));

    ::uRegisterType(type);
    return type;
}

void PullToReload___ObjInit_3(PullToReload* __this)
{
    __this->StateGroup = ::app::Fuse::Triggers::StateGroup__New_1(NULL);
    ::app::Fuse::Triggers::ScrollingAnimation___ObjInit_2(__this);
    __this->InitializeUX();
}

void PullToReload__add_ReloadHandler(PullToReload* __this, ::uDelegate* value)
{
    __this->ReloadHandler = ::uCast< ::uDelegate*>(::app::Uno::Delegate__Combine(NULL, (::uDelegate*)__this->ReloadHandler, (::uDelegate*)value), ::app::Fuse::NodeEventHandler__typeof());
}

bool PullToReload__get_IsLoading(PullToReload* __this)
{
    return __this->_isLoading;
}

::app::Fuse::Triggers::State* PullToReload__get_Loading(PullToReload* __this)
{
    return __this->_loading;
}

::app::Fuse::Triggers::State* PullToReload__get_PulledPastThreshold(PullToReload* __this)
{
    return __this->_pulledPastThreshold;
}

::app::Fuse::Triggers::State* PullToReload__get_Pulling(PullToReload* __this)
{
    return __this->_pulling;
}

::app::Fuse::Triggers::State* PullToReload__get_Rest(PullToReload* __this)
{
    return __this->_rest;
}

void PullToReload__InitializeUX(PullToReload* __this)
{
    ::app::Fuse::Triggers::Actions::Callback* temp = ::app::Fuse::Triggers::Actions::Callback__New_1(NULL);
    ::app::Fuse::Triggers::Actions::Callback* temp1 = ::app::Fuse::Triggers::Actions::Callback__New_1(NULL);
    ::app::Fuse::Triggers::Actions::Callback* temp2 = ::app::Fuse::Triggers::Actions::Callback__New_1(NULL);
    ::app::Fuse::Animations::Nothing* temp3 = ::app::Fuse::Animations::Nothing__New_1(NULL);
    __this->Range(1);
    ::uPtr< ::app::Fuse::Triggers::Actions::Callback*>(temp)->Direction(0);
    temp->Action(::uNewDelegateNonVirt(::app::Uno::Action__typeof(), (const void*)PullToReload__StartPull, __this));
    ::uPtr< ::app::Fuse::Triggers::Actions::Callback*>(temp1)->Direction(1);
    temp1->Action(::uNewDelegateNonVirt(::app::Uno::Action__typeof(), (const void*)PullToReload__ReleasePull, __this));
    ::uPtr< ::app::Fuse::Triggers::Actions::Callback*>(temp2)->Delay(0.5f);
    temp2->Action(::uNewDelegateNonVirt(::app::Uno::Action__typeof(), (const void*)PullToReload__ReachThreshold, __this));
    ::uPtr< ::app::Fuse::Animations::Nothing*>(temp3)->Duration(1.0);
    ::app::Uno::Collections::ICollection__Fuse_Animations_Animator::Add(::uPtr< ::uObject*>(__this->Animators()), (::app::Fuse::Animations::Animator*)temp3);
    ::app::Uno::Collections::ICollection__Fuse_Triggers_Actions_TriggerAction::Add(::uPtr< ::uObject*>(__this->Actions()), (::app::Fuse::Triggers::Actions::TriggerAction*)temp);
    ::app::Uno::Collections::ICollection__Fuse_Triggers_Actions_TriggerAction::Add(::uPtr< ::uObject*>(__this->Actions()), (::app::Fuse::Triggers::Actions::TriggerAction*)temp1);
    ::app::Uno::Collections::ICollection__Fuse_Triggers_Actions_TriggerAction::Add(::uPtr< ::uObject*>(__this->Actions()), (::app::Fuse::Triggers::Actions::TriggerAction*)temp2);
}

PullToReload* PullToReload__New_2(::uStatic* __this)
{
    PullToReload* inst = (PullToReload*)::uAllocObject(sizeof(PullToReload), PullToReload__typeof());
    inst->_ObjInit_3();
    return inst;
}

void PullToReload__OnRooted(PullToReload* __this, ::app::Fuse::Node* elm)
{
    ::app::Fuse::Triggers::ScrollingAnimation__OnRooted(__this, elm);
    ::uPtr< ::app::Fuse::Triggers::StateGroup*>(__this->StateGroup)->Rooted(elm);
}

void PullToReload__OnUnrooted(PullToReload* __this, ::app::Fuse::Node* elm)
{
    ::uPtr< ::app::Fuse::Triggers::StateGroup*>(__this->StateGroup)->Unrooted(elm);
    ::app::Fuse::Triggers::ScrollingAnimation__OnUnrooted(__this, elm);
}

void PullToReload__ReachThreshold(PullToReload* __this)
{
    if (__this->IsLoading() || __this->_internLoading)
    {
        return;
    }

    __this->threshold = true;
    ::uPtr< ::app::Fuse::Triggers::StateGroup*>(__this->StateGroup)->Active(__this->PulledPastThreshold());
}

void PullToReload__ReleasePull(PullToReload* __this)
{
    if (__this->IsLoading() || __this->_internLoading)
    {
        return;
    }

    if (__this->threshold)
    {
        __this->_internLoading = true;
        ::uPtr< ::app::Fuse::Triggers::StateGroup*>(__this->StateGroup)->Active(__this->Loading());

        if (::app::Uno::Delegate__op_Inequality(NULL, (::uDelegate*)__this->ReloadHandler, NULL))
        {
            ::uPtr< ::uDelegate*>(__this->ReloadHandler)->InvokeVoid< ::uObject*, ::app::Fuse::NodeEventArgs*>((::uObject*)__this, ::app::Fuse::NodeEventArgs__New_2(NULL, __this->Node()));
        }
    }
    else
    {
        ::uPtr< ::app::Fuse::Triggers::StateGroup*>(__this->StateGroup)->Active(__this->Rest());
    }
}

void PullToReload__remove_ReloadHandler(PullToReload* __this, ::uDelegate* value)
{
    __this->ReloadHandler = ::uCast< ::uDelegate*>(::app::Uno::Delegate__Remove(NULL, (::uDelegate*)__this->ReloadHandler, (::uDelegate*)value), ::app::Fuse::NodeEventHandler__typeof());
}

::app::Fuse::Triggers::State* PullToReload__Replace(PullToReload* __this, ::app::Fuse::Triggers::State* state, ::app::Fuse::Triggers::State* value)
{
    if (state != NULL)
    {
        ::app::Uno::Collections::ICollection__Fuse_Triggers_State::Remove(::uPtr< ::uObject*>(::uPtr< ::app::Fuse::Triggers::StateGroup*>(__this->StateGroup)->States()), state);
    }

    if (value != NULL)
    {
        ::app::Uno::Collections::ICollection__Fuse_Triggers_State::Add(::uPtr< ::uObject*>(::uPtr< ::app::Fuse::Triggers::StateGroup*>(__this->StateGroup)->States()), value);
    }

    return value;
}

void PullToReload__set_IsLoading(PullToReload* __this, bool value)
{
    __this->_isLoading = value;
    __this->_internLoading = value;

    if (__this->_isLoading)
    {
        ::uPtr< ::app::Fuse::Triggers::StateGroup*>(__this->StateGroup)->Active(__this->Loading());
    }
    else
    {
        ::uPtr< ::app::Fuse::Triggers::StateGroup*>(__this->StateGroup)->Active(__this->Rest());
    }
}

void PullToReload__set_Loading(PullToReload* __this, ::app::Fuse::Triggers::State* value)
{
    __this->_loading = __this->Replace(__this->_loading, value);
}

void PullToReload__set_PulledPastThreshold(PullToReload* __this, ::app::Fuse::Triggers::State* value)
{
    __this->_pulledPastThreshold = __this->Replace(__this->_pulledPastThreshold, value);
}

void PullToReload__set_Pulling(PullToReload* __this, ::app::Fuse::Triggers::State* value)
{
    __this->_pulling = __this->Replace(__this->_pulling, value);
}

void PullToReload__set_Rest(PullToReload* __this, ::app::Fuse::Triggers::State* value)
{
    __this->_rest = __this->Replace(__this->_rest, value);
}

void PullToReload__StartPull(PullToReload* __this)
{
    if (__this->IsLoading() || __this->_internLoading)
    {
        return;
    }

    __this->threshold = false;
    ::uPtr< ::app::Fuse::Triggers::StateGroup*>(__this->StateGroup)->Active(__this->Pulling());
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Triggers\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

RemovingAnimation__uType* RemovingAnimation__typeof()
{
    static ::uStaticStrong<RemovingAnimation__uType*> type;
    if (type != NULL) return type;

    type = (RemovingAnimation__uType*)::uAllocClassType(sizeof(RemovingAnimation__uType), "Fuse.Triggers.RemovingAnimation", false, 0, 1, 0);

    type->SetBaseType(::app::Fuse::Triggers::Trigger__typeof());
    type->__fp_OnRooted = (void(*)(::app::Fuse::Behavior*, ::app::Fuse::Node*))RemovingAnimation__OnRooted;
    type->__fp_OnUnrooted = (void(*)(::app::Fuse::Behavior*, ::app::Fuse::Node*))RemovingAnimation__OnUnrooted;

    type->SetStrongRefs(
        "_args", offsetof(RemovingAnimation, _args));

    type->SetFields(1,
        ::uNewField("_args", NULL, offsetof(RemovingAnimation, _args), ::app::Fuse::BeginRemoveArgs__typeof()));

    type->SetFunctions(3,
        ::uNewFunction(".ctor", RemovingAnimation__New_1, 0, true, RemovingAnimation__typeof()),
        ::uNewFunctionVoid("OnBeginRemove", RemovingAnimation__OnBeginRemove, 0, false, ::uObject__typeof(), ::app::Fuse::BeginRemoveArgs__typeof()),
        ::uNewFunctionVoid("OnDone", RemovingAnimation__OnDone, 0, false));

    ::uRegisterType(type);
    return type;
}

void RemovingAnimation___ObjInit_2(RemovingAnimation* __this)
{
    ::app::Fuse::Triggers::Trigger___ObjInit_1(__this);
}

RemovingAnimation* RemovingAnimation__New_1(::uStatic* __this)
{
    RemovingAnimation* inst = (RemovingAnimation*)::uAllocObject(sizeof(RemovingAnimation), RemovingAnimation__typeof());
    inst->_ObjInit_2();
    return inst;
}

void RemovingAnimation__OnBeginRemove(RemovingAnimation* __this, ::uObject* sender, ::app::Fuse::BeginRemoveArgs* args)
{
    __this->_args = args;
    ::uPtr< ::app::Fuse::BeginRemoveArgs*>(args)->AddSubscriber();
    __this->Activate(::uNewDelegateNonVirt(::app::Uno::Action__typeof(), (const void*)RemovingAnimation__OnDone, __this));
}

void RemovingAnimation__OnDone(RemovingAnimation* __this)
{
    ::uPtr< ::app::Fuse::BeginRemoveArgs*>(__this->_args)->RemoveSubscriber();
    __this->_args = NULL;
}

void RemovingAnimation__OnRooted(RemovingAnimation* __this, ::app::Fuse::Node* elm)
{
    ::app::Fuse::Triggers::Trigger__OnRooted(__this, elm);
    ::uPtr< ::app::Fuse::Node*>(elm)->add_BeginRemove(::uNewDelegateNonVirt(::app::Fuse::BeginRemoveHandler__typeof(), (const void*)RemovingAnimation__OnBeginRemove, __this));
}

void RemovingAnimation__OnUnrooted(RemovingAnimation* __this, ::app::Fuse::Node* elm)
{
    ::uPtr< ::app::Fuse::Node*>(elm)->remove_BeginRemove(::uNewDelegateNonVirt(::app::Fuse::BeginRemoveHandler__typeof(), (const void*)RemovingAnimation__OnBeginRemove, __this));
    ::app::Fuse::Triggers::Trigger__OnUnrooted(__this, elm);
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Controls\0.11.3\Triggers\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

ScrollingAnimation__uType* ScrollingAnimation__typeof()
{
    static ::uStaticStrong<ScrollingAnimation__uType*> type;
    if (type != NULL) return type;

    type = (ScrollingAnimation__uType*)::uAllocClassType(sizeof(ScrollingAnimation__uType), "Fuse.Triggers.ScrollingAnimation", false, 0, 1, 0);

    type->SetBaseType(::app::Fuse::Triggers::Trigger__typeof());
    type->__fp_OnRooted = (void(*)(::app::Fuse::Behavior*, ::app::Fuse::Node*))ScrollingAnimation__OnRooted;
    type->__fp_OnUnrooted = (void(*)(::app::Fuse::Behavior*, ::app::Fuse::Node*))ScrollingAnimation__OnUnrooted;

    type->SetStrongRefs(
        "_scrollable", offsetof(ScrollingAnimation, _scrollable));

    type->SetFields(6,
        ::uNewField("_from", NULL, offsetof(ScrollingAnimation, _from), ::app::Uno::Float__typeof()),
        ::uNewField("_hasFrom", NULL, offsetof(ScrollingAnimation, _hasFrom), ::app::Uno::Bool__typeof()),
        ::uNewField("_hasTo", NULL, offsetof(ScrollingAnimation, _hasTo), ::app::Uno::Bool__typeof()),
        ::uNewField("_range", NULL, offsetof(ScrollingAnimation, _range), ::app::Fuse::Triggers::ScrollingAnimationRange__typeof()),
        ::uNewField("_scrollable", NULL, offsetof(ScrollingAnimation, _scrollable), ::app::Fuse::Controls::ScrollView__typeof()),
        ::uNewField("_to", NULL, offsetof(ScrollingAnimation, _to), ::app::Uno::Float__typeof()));

    type->SetFunctions(13,
        ::uNewFunction("get_From", ScrollingAnimation__get_From, 0, false, ::app::Uno::Float__typeof()),
        ::uNewFunction("get_Inverse", ScrollingAnimation__get_Inverse, 0, false, ::app::Uno::Bool__typeof()),
        ::uNewFunction("get_Progress", ScrollingAnimation__get_Progress_1, 0, false, ::app::Uno::Double__typeof()),
        ::uNewFunction("get_Range", ScrollingAnimation__get_Range, 0, false, ::app::Fuse::Triggers::ScrollingAnimationRange__typeof()),
        ::uNewFunction("get_ScrollDirections", ScrollingAnimation__get_ScrollDirections, 0, false, ::app::Fuse::Gestures::ScrollDirections__typeof()),
        ::uNewFunction("get_To", ScrollingAnimation__get_To, 0, false, ::app::Uno::Float__typeof()),
        ::uNewFunction(".ctor", ScrollingAnimation__New_1, 0, true, ScrollingAnimation__typeof()),
        ::uNewFunctionVoid("OnScrollPositionChanged", ScrollingAnimation__OnScrollPositionChanged, 0, false, ::uObject__typeof(), ::app::Uno::EventArgs__typeof()),
        ::uNewFunctionVoid("set_From", ScrollingAnimation__set_From, 0, false, ::app::Uno::Float__typeof()),
        ::uNewFunctionVoid("set_Inverse", ScrollingAnimation__set_Inverse, 0, false, ::app::Uno::Bool__typeof()),
        ::uNewFunctionVoid("set_Range", ScrollingAnimation__set_Range, 0, false, ::app::Fuse::Triggers::ScrollingAnimationRange__typeof()),
        ::uNewFunctionVoid("set_ScrollDirections", ScrollingAnimation__set_ScrollDirections, 0, false, ::app::Fuse::Gestures::ScrollDirections__typeof()),
        ::uNewFunctionVoid("set_To", ScrollingAnimation__set_To, 0, false, ::app::Uno::Float__typeof()));

    ::uRegisterType(type);
    return type;
}

void ScrollingAnimation___ObjInit_2(ScrollingAnimation* __this)
{
    ::app::Fuse::Triggers::Trigger___ObjInit_1(__this);
    __this->ScrollDirections(12);
}

float ScrollingAnimation__get_From(ScrollingAnimation* __this)
{
    return __this->_from;
}

bool ScrollingAnimation__get_Inverse(ScrollingAnimation* __this)
{
    return __this->_Inverse;
}

double ScrollingAnimation__get_Progress_1(ScrollingAnimation* __this)
{
    ::app::Uno::Float2 from = ::app::Uno::Float2();
    ::app::Uno::Float2 to = ::app::Uno::Float2();

    if (__this->Range() == 1)
    {
        from = ::uPtr< ::app::Fuse::Controls::ScrollView*>(__this->_scrollable)->MinScroll();
        to = ::uPtr< ::app::Fuse::Controls::ScrollView*>(__this->_scrollable)->MinOverflow();
    }
    else
    {
        from = __this->_hasFrom ? ::app::Uno::Float2__New_1(NULL, __this->From()) : ::uPtr< ::app::Fuse::Controls::ScrollView*>(__this->_scrollable)->MinScroll();
        to = __this->_hasTo ? ::app::Uno::Float2__New_1(NULL, __this->To()) : ::uPtr< ::app::Fuse::Controls::ScrollView*>(__this->_scrollable)->MaxScroll();
    }

    ::app::Uno::Float2 range2 = ::app::Uno::Float2__op_Subtraction_2(NULL, to, from);
    float at = float();
    float range = float();

    if (__this->ScrollDirections() == 3)
    {
        at = ::uPtr< ::app::Fuse::Controls::ScrollView*>(__this->_scrollable)->ScrollPosition().X - from.X;
        range = range2.X;
    }
    else if (__this->ScrollDirections() == 12)
    {
        at = ::uPtr< ::app::Fuse::Controls::ScrollView*>(__this->_scrollable)->ScrollPosition().Y - from.Y;
        range = range2.Y;
    }
    else
    {
        at = 0.0f;
        range = 0.0f;
    }

    if (::app::Uno::Math__Abs_1(NULL, range) < 1e-05f)
    {
        return 0.0;
    }

    float p = ::app::Uno::Math__Clamp_1(NULL, at / range, 0.0f, 1.0f);
    return (double)(__this->Inverse() ? (1.0f - p) : p);
}

int ScrollingAnimation__get_Range(ScrollingAnimation* __this)
{
    return __this->_range;
}

int ScrollingAnimation__get_ScrollDirections(ScrollingAnimation* __this)
{
    return __this->_ScrollDirections;
}

float ScrollingAnimation__get_To(ScrollingAnimation* __this)
{
    return __this->_to;
}

ScrollingAnimation* ScrollingAnimation__New_1(::uStatic* __this)
{
    ScrollingAnimation* inst = (ScrollingAnimation*)::uAllocObject(sizeof(ScrollingAnimation), ScrollingAnimation__typeof());
    inst->_ObjInit_2();
    return inst;
}

void ScrollingAnimation__OnRooted(ScrollingAnimation* __this, ::app::Fuse::Node* elm)
{
    ::app::Fuse::Triggers::Trigger__OnRooted(__this, elm);

    while (elm != NULL)
    {
        __this->_scrollable = ::uAs< ::app::Fuse::Controls::ScrollView*>(elm, ::app::Fuse::Controls::ScrollView__typeof());

        if (__this->_scrollable != NULL)
        {
            break;
        }

        elm = ::uPtr< ::app::Fuse::Node*>(elm)->Parent();
    }

    if (__this->_scrollable != NULL)
    {
        ::uPtr< ::app::Fuse::Controls::ScrollView*>(__this->_scrollable)->add_ScrollPositionChanged(::uNewDelegateNonVirt(::app::Uno::EventHandler__typeof(), (const void*)ScrollingAnimation__OnScrollPositionChanged, __this));
        __this->BypassSeek(__this->Progress_1(), 0);
    }
}

void ScrollingAnimation__OnScrollPositionChanged(ScrollingAnimation* __this, ::uObject* sender, ::app::Uno::EventArgs* args)
{
    __this->Seek(__this->Progress_1());
}

void ScrollingAnimation__OnUnrooted(ScrollingAnimation* __this, ::app::Fuse::Node* elm)
{
    if (__this->_scrollable != NULL)
    {
        ::uPtr< ::app::Fuse::Controls::ScrollView*>(__this->_scrollable)->remove_ScrollPositionChanged(::uNewDelegateNonVirt(::app::Uno::EventHandler__typeof(), (const void*)ScrollingAnimation__OnScrollPositionChanged, __this));
        __this->_scrollable = NULL;
    }

    ::app::Fuse::Triggers::Trigger__OnUnrooted(__this, elm);
}

void ScrollingAnimation__set_From(ScrollingAnimation* __this, float value)
{
    __this->_from = value;
    __this->_hasFrom = true;
    __this->_range = 2;
}

void ScrollingAnimation__set_Inverse(ScrollingAnimation* __this, bool value)
{
    __this->_Inverse = value;
}

void ScrollingAnimation__set_Range(ScrollingAnimation* __this, int value)
{
    __this->_range = value;
}

void ScrollingAnimation__set_ScrollDirections(ScrollingAnimation* __this, int value)
{
    __this->_ScrollDirections = value;
}

void ScrollingAnimation__set_To(ScrollingAnimation* __this, float value)
{
    __this->_to = value;
    __this->_hasTo = true;
    __this->_range = 2;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Controls\0.11.3\Triggers\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

::uEnumType* ScrollingAnimationRange__typeof()
{
    static ::uStaticStrong< ::uEnumType*> type;
    if (type != NULL) return type;

    type = ::uAllocEnumType("Fuse.Triggers.ScrollingAnimationRange", ::app::Uno::Int__typeof(), 3);

    type->SetLiterals(
        "Standard", 0LL,
        "SnapMin", 1LL,
        "Explicit", 2LL);

    ::uRegisterType(type);
    return type;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Triggers\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

State__uType* State__typeof()
{
    static ::uStaticStrong<State__uType*> type;
    if (type != NULL) return type;

    type = (State__uType*)::uAllocClassType(sizeof(State__uType), "Fuse.Triggers.State", false, 0, 1, 0);

    type->SetBaseType(::app::Fuse::Triggers::Trigger__typeof());
    type->__fp_OnRooted = (void(*)(::app::Fuse::Behavior*, ::app::Fuse::Node*))State__OnRooted;

    type->SetStrongRefs(
        "_Name", offsetof(State, _Name));

    type->SetFields(1,
        ::uNewField("_on", NULL, offsetof(State, _on), ::app::Uno::Bool__typeof()));

    type->SetFunctions(6,
        ::uNewFunction("get_Name", State__get_Name, 0, false, ::app::Uno::String__typeof()),
        ::uNewFunction("get_On", State__get_On, 0, false, ::app::Uno::Bool__typeof()),
        ::uNewFunction("get_Progress", State__get_Progress_1, 0, false, ::app::Uno::Double__typeof()),
        ::uNewFunction(".ctor", State__New_1, 0, true, State__typeof()),
        ::uNewFunctionVoid("set_Name", State__set_Name, 0, false, ::app::Uno::String__typeof()),
        ::uNewFunctionVoid("set_On", State__set_On, 0, false, ::app::Uno::Bool__typeof()));

    ::uRegisterType(type);
    return type;
}

void State___ObjInit_2(State* __this)
{
    ::app::Fuse::Triggers::Trigger___ObjInit_1(__this);
}

::uString* State__get_Name(State* __this)
{
    return __this->_Name;
}

bool State__get_On(State* __this)
{
    return __this->_on;
}

double State__get_Progress_1(State* __this)
{
    return ::app::Fuse::Triggers::Trigger__get_Progress(__this);
}

State* State__New_1(::uStatic* __this)
{
    State* inst = (State*)::uAllocObject(sizeof(State), State__typeof());
    inst->_ObjInit_2();
    return inst;
}

void State__OnRooted(State* __this, ::app::Fuse::Node* elm)
{
    ::app::Fuse::Triggers::Trigger__OnRooted(__this, elm);

    if (__this->_on)
    {
        __this->BypassActivate();
    }
}

void State__set_Name(State* __this, ::uString* value)
{
    __this->_Name = value;
}

void State__set_On(State* __this, bool value)
{
    if (__this->_on == value)
    {
        return;
    }

    __this->_on = value;

    if (__this->Node() != NULL)
    {
        if (__this->_on)
        {
            __this->Activate(NULL);
        }
        else
        {
            __this->Deactivate();
        }
    }
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Triggers\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

StateGroup__uType* StateGroup__typeof()
{
    static ::uStaticStrong<StateGroup__uType*> type;
    if (type != NULL) return type;

    type = (StateGroup__uType*)::uAllocClassType(sizeof(StateGroup__uType), "Fuse.Triggers.StateGroup", false, 1, 3, 0);

    type->SetBaseType(::app::Fuse::Behavior__typeof());
    type->__fp_OnRooted = (void(*)(::app::Fuse::Behavior*, ::app::Fuse::Node*))StateGroup__OnRooted;
    type->__fp_OnUnrooted = (void(*)(::app::Fuse::Behavior*, ::app::Fuse::Node*))StateGroup__OnUnrooted;
    type->__interface_0.__fp_FindObjectByName = (::uObject*(*)(void*, ::uString*, ::uDelegate*))StateGroup__FindObjectByName;

    type->SetInterfaces(
        ::app::Fuse::Scripting::INameScope__typeof(), offsetof(StateGroup__uType, __interface_0));

    type->SetStrongRefs(
        "_active", offsetof(StateGroup, _active),
        "_rest", offsetof(StateGroup, _rest),
        "_states", offsetof(StateGroup, _states));

    type->SetFields(4,
        ::uNewField("_active", NULL, offsetof(StateGroup, _active), ::app::Fuse::Triggers::State__typeof()),
        ::uNewField("_rest", NULL, offsetof(StateGroup, _rest), ::app::Fuse::Triggers::State__typeof()),
        ::uNewField("_states", NULL, offsetof(StateGroup, _states), ::app::Uno::Collections::IList__Fuse_Triggers_State__typeof()),
        ::uNewField("_transition", NULL, offsetof(StateGroup, _transition), ::app::Fuse::Triggers::StateTransition__typeof()));

    type->SetFunctions(12,
        ::uNewFunctionVoid("CheckAllDone", StateGroup__CheckAllDone, 0, false),
        ::uNewFunction("FindObjectByName", StateGroup__FindObjectByName, 0, false, ::uObject__typeof(), ::app::Uno::String__typeof(), ::app::Uno::Predicate__object__typeof()),
        ::uNewFunction("get_Active", StateGroup__get_Active, 0, false, ::app::Fuse::Triggers::State__typeof()),
        ::uNewFunction("get_Rest", StateGroup__get_Rest, 0, false, ::app::Fuse::Triggers::State__typeof()),
        ::uNewFunction("get_States", StateGroup__get_States, 0, false, ::app::Uno::Collections::IList__Fuse_Triggers_State__typeof()),
        ::uNewFunction("get_Transition", StateGroup__get_Transition, 0, false, ::app::Fuse::Triggers::StateTransition__typeof()),
        ::uNewFunctionVoid("Goto", StateGroup__Goto, 0, false, ::app::Fuse::Triggers::State__typeof()),
        ::uNewFunction(".ctor", StateGroup__New_1, 0, true, StateGroup__typeof()),
        ::uNewFunctionVoid("OnPlaybackDone", StateGroup__OnPlaybackDone, 0, false, ::app::Fuse::Triggers::Trigger__typeof()),
        ::uNewFunctionVoid("set_Active", StateGroup__set_Active, 0, false, ::app::Fuse::Triggers::State__typeof()),
        ::uNewFunctionVoid("set_Rest", StateGroup__set_Rest, 0, false, ::app::Fuse::Triggers::State__typeof()),
        ::uNewFunctionVoid("set_Transition", StateGroup__set_Transition, 0, false, ::app::Fuse::Triggers::StateTransition__typeof()));

    ::uRegisterType(type);
    return type;
}

void StateGroup___ObjInit_1(StateGroup* __this)
{
    __this->_states = (::uObject*)::app::Uno::Collections::List__Fuse_Triggers_State__New_1(NULL);
    ::app::Fuse::Behavior___ObjInit(__this);
}

void StateGroup__CheckAllDone(StateGroup* __this)
{
    bool all = true;

    for (::uObject* enum_128 = ::app::Uno::Collections::IEnumerable__Fuse_Triggers_State::GetEnumerator(::uPtr< ::uObject*>(__this->_states)); ::app::Uno::Collections::IEnumerator::MoveNext(::uPtr< ::uObject*>(enum_128)); )
    {
        ::app::Fuse::Triggers::State* state = ::app::Uno::Collections::IEnumerator__Fuse_Triggers_State::Current(::uPtr< ::uObject*>(enum_128));

        if (::uPtr< ::app::Fuse::Triggers::State*>(state)->Progress_1() > 0.0)
        {
            all = false;
        }
    }

    if (all && (__this->_active != NULL))
    {
        ::uPtr< ::app::Fuse::Triggers::State*>(__this->_active)->On(true);
    }
}

::uObject* StateGroup__FindObjectByName(StateGroup* __this, ::uString* name, ::uDelegate* acceptor)
{
    for (::uObject* enum_123 = ::app::Uno::Collections::IEnumerable__Fuse_Triggers_State::GetEnumerator(::uPtr< ::uObject*>(__this->States())); ::app::Uno::Collections::IEnumerator::MoveNext(::uPtr< ::uObject*>(enum_123)); )
    {
        ::app::Fuse::Triggers::State* s = ::app::Uno::Collections::IEnumerator__Fuse_Triggers_State::Current(::uPtr< ::uObject*>(enum_123));

        if (::app::Uno::String__op_Equality(NULL, ::uPtr< ::app::Fuse::Triggers::State*>(s)->Name(), name) && ::uPtr< ::uDelegate*>(acceptor)->Invoke< bool, ::uObject*>((::uObject*)s))
        {
            return (::uObject*)s;
        }
    }

    return NULL;
}

::app::Fuse::Triggers::State* StateGroup__get_Active(StateGroup* __this)
{
    return __this->_active;
}

::app::Fuse::Triggers::State* StateGroup__get_Rest(StateGroup* __this)
{
    if (__this->_rest != NULL)
    {
        return __this->_rest;
    }

    if (::app::Uno::Collections::ICollection__Fuse_Triggers_State::Count(::uPtr< ::uObject*>(__this->_states)) > 0)
    {
        return ::app::Uno::Collections::IList__Fuse_Triggers_State::Item(::uPtr< ::uObject*>(__this->_states), 0);
    }

    return NULL;
}

::uObject* StateGroup__get_States(StateGroup* __this)
{
    return __this->_states;
}

int StateGroup__get_Transition(StateGroup* __this)
{
    return __this->_transition;
}

void StateGroup__Goto(StateGroup* __this, ::app::Fuse::Triggers::State* next)
{
    __this->_active = next;

    switch (__this->Transition())
    {
        case 0:
        {
            for (::uObject* enum_126 = ::app::Uno::Collections::IEnumerable__Fuse_Triggers_State::GetEnumerator(::uPtr< ::uObject*>(__this->_states)); ::app::Uno::Collections::IEnumerator::MoveNext(::uPtr< ::uObject*>(enum_126)); )
            {
                ::app::Fuse::Triggers::State* state = ::app::Uno::Collections::IEnumerator__Fuse_Triggers_State::Current(::uPtr< ::uObject*>(enum_126));
                ::uPtr< ::app::Fuse::Triggers::State*>(state)->On(state == next);
            }

            break;
        }
        case 1:
        {
            for (::uObject* enum_127 = ::app::Uno::Collections::IEnumerable__Fuse_Triggers_State::GetEnumerator(::uPtr< ::uObject*>(__this->_states)); ::app::Uno::Collections::IEnumerator::MoveNext(::uPtr< ::uObject*>(enum_127)); )
            {
                ::app::Fuse::Triggers::State* state = ::app::Uno::Collections::IEnumerator__Fuse_Triggers_State::Current(::uPtr< ::uObject*>(enum_127));
                ::uPtr< ::app::Fuse::Triggers::State*>(state)->On(false);
            }

            __this->CheckAllDone();
            break;
        }
    }
}

StateGroup* StateGroup__New_1(::uStatic* __this)
{
    StateGroup* inst = (StateGroup*)::uAllocObject(sizeof(StateGroup), StateGroup__typeof());
    inst->_ObjInit_1();
    return inst;
}

void StateGroup__OnPlaybackDone(StateGroup* __this, ::app::Fuse::Triggers::Trigger* which)
{
    if (__this->Transition() == 1)
    {
        __this->CheckAllDone();
    }
}

void StateGroup__OnRooted(StateGroup* __this, ::app::Fuse::Node* elm)
{
    if ((__this->_active == NULL) && (::app::Uno::Collections::ICollection__Fuse_Triggers_State::Count(::uPtr< ::uObject*>(__this->_states)) > 0))
    {
        __this->_active = ::app::Uno::Collections::IList__Fuse_Triggers_State::Item(::uPtr< ::uObject*>(__this->_states), 0);
    }

    for (::uObject* enum_125 = ::app::Uno::Collections::IEnumerable__Fuse_Triggers_State::GetEnumerator(::uPtr< ::uObject*>(__this->_states)); ::app::Uno::Collections::IEnumerator::MoveNext(::uPtr< ::uObject*>(enum_125)); )
    {
        ::app::Fuse::Triggers::State* state = ::app::Uno::Collections::IEnumerator__Fuse_Triggers_State::Current(::uPtr< ::uObject*>(enum_125));
        ::uPtr< ::app::Fuse::Triggers::State*>(state)->On(state == __this->_active);
        state->add_PlaybackDone(::uNewDelegateNonVirt(::app::Uno::Action__Fuse_Triggers_Trigger__typeof(), (const void*)StateGroup__OnPlaybackDone, __this));
        state->Rooted(elm);
    }
}

void StateGroup__OnUnrooted(StateGroup* __this, ::app::Fuse::Node* elm)
{
    for (::uObject* enum_124 = ::app::Uno::Collections::IEnumerable__Fuse_Triggers_State::GetEnumerator(::uPtr< ::uObject*>(__this->_states)); ::app::Uno::Collections::IEnumerator::MoveNext(::uPtr< ::uObject*>(enum_124)); )
    {
        ::app::Fuse::Triggers::State* state = ::app::Uno::Collections::IEnumerator__Fuse_Triggers_State::Current(::uPtr< ::uObject*>(enum_124));
        ::uPtr< ::app::Fuse::Triggers::State*>(state)->remove_PlaybackDone(::uNewDelegateNonVirt(::app::Uno::Action__Fuse_Triggers_Trigger__typeof(), (const void*)StateGroup__OnPlaybackDone, __this));
        state->Unrooted(elm);
    }
}

void StateGroup__set_Active(StateGroup* __this, ::app::Fuse::Triggers::State* value)
{
    if (value != __this->_active)
    {
        __this->Goto(value);
    }
}

void StateGroup__set_Rest(StateGroup* __this, ::app::Fuse::Triggers::State* value)
{
    __this->_rest = value;
}

void StateGroup__set_Transition(StateGroup* __this, int value)
{
    __this->_transition = value;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Triggers\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

::uEnumType* StateTransition__typeof()
{
    static ::uStaticStrong< ::uEnumType*> type;
    if (type != NULL) return type;

    type = ::uAllocEnumType("Fuse.Triggers.StateTransition", ::app::Uno::Int__typeof(), 2);

    type->SetLiterals(
        "Parallel", 0LL,
        "Exclusive", 1LL);

    ::uRegisterType(type);
    return type;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Triggers\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

Timeline__uType* Timeline__typeof()
{
    static ::uStaticStrong<Timeline__uType*> type;
    if (type != NULL) return type;

    type = (Timeline__uType*)::uAllocClassType(sizeof(Timeline__uType), "Fuse.Triggers.Timeline", false, 2, 1, 0);

    type->SetBaseType(::app::Fuse::Triggers::Trigger__typeof());
    type->__fp_OnProgressChanged = (void(*)(::app::Fuse::Triggers::Trigger*))Timeline__OnProgressChanged;
    type->__fp_OnRooted = (void(*)(::app::Fuse::Behavior*, ::app::Fuse::Node*))Timeline__OnRooted;
    type->__interface_1.__fp_get_Progress = (double(*)(void*))Timeline__Fuse_Triggers_IProgress_get_Progress;
    type->__interface_0.__fp_Stop = (void(*)(void*))Timeline__Stop_1;
    type->__interface_0.__fp_PlayTo = (void(*)(void*, double))Timeline__PlayTo_1;
    type->__interface_0.__fp_Pause = (void(*)(void*))Timeline__Pause;
    type->__interface_0.__fp_Resume = (void(*)(void*))Timeline__Resume;
    type->__interface_0.__fp_get_CanPlayTo = (bool(*)(void*))Timeline__get_CanPlayTo;
    type->__interface_0.__fp_get_CanStop = (bool(*)(void*))Timeline__get_CanStop;
    type->__interface_0.__fp_get_CanPause = (bool(*)(void*))Timeline__get_CanPause;
    type->__interface_0.__fp_get_CanResume = (bool(*)(void*))Timeline__get_CanResume;
    type->__interface_1.__fp_add_ProgressChanged = (void(*)(void*, ::uDelegate*))Timeline__add_ProgressChanged;
    type->__interface_1.__fp_remove_ProgressChanged = (void(*)(void*, ::uDelegate*))Timeline__remove_ProgressChanged;

    type->SetInterfaces(
        ::app::Fuse::Triggers::IPlayback__typeof(), offsetof(Timeline__uType, __interface_0),
        ::app::Fuse::Triggers::IProgress__typeof(), offsetof(Timeline__uType, __interface_1));

    type->SetStrongRefs(
        "ProgressChanged", offsetof(Timeline, ProgressChanged));

    type->SetFields(2,
        ::uNewField("_state", NULL, offsetof(Timeline, _state), ::app::Fuse::Triggers::Timeline_State__typeof()),
        ::uNewField("_targetProgress", NULL, offsetof(Timeline, _targetProgress), ::app::Uno::Double__typeof()));

    type->SetFunctions(14,
        ::uNewFunctionVoid("add_ProgressChanged", Timeline__add_ProgressChanged, 0, false, ::app::Uno::EventHandler__typeof()),
        ::uNewFunction("Fuse.Triggers.IProgress.get_Progress", Timeline__Fuse_Triggers_IProgress_get_Progress, 0, false, ::app::Uno::Double__typeof()),
        ::uNewFunction("get_CanPause", Timeline__get_CanPause, 0, false, ::app::Uno::Bool__typeof()),
        ::uNewFunction("get_CanPlayTo", Timeline__get_CanPlayTo, 0, false, ::app::Uno::Bool__typeof()),
        ::uNewFunction("get_CanResume", Timeline__get_CanResume, 0, false, ::app::Uno::Bool__typeof()),
        ::uNewFunction("get_CanStop", Timeline__get_CanStop, 0, false, ::app::Uno::Bool__typeof()),
        ::uNewFunction("get_TargetProgress", Timeline__get_TargetProgress, 0, false, ::app::Uno::Double__typeof()),
        ::uNewFunction(".ctor", Timeline__New_1, 0, true, Timeline__typeof()),
        ::uNewFunctionVoid("Pause", Timeline__Pause, 0, false),
        ::uNewFunctionVoid("PlayTo", Timeline__PlayTo_1, 0, false, ::app::Uno::Double__typeof()),
        ::uNewFunctionVoid("remove_ProgressChanged", Timeline__remove_ProgressChanged, 0, false, ::app::Uno::EventHandler__typeof()),
        ::uNewFunctionVoid("Resume", Timeline__Resume, 0, false),
        ::uNewFunctionVoid("set_TargetProgress", Timeline__set_TargetProgress, 0, false, ::app::Uno::Double__typeof()),
        ::uNewFunctionVoid("Stop", Timeline__Stop_1, 0, false));

    ::uRegisterType(type);
    return type;
}

void Timeline___ObjInit_2(Timeline* __this)
{
    ::app::Fuse::Triggers::Trigger___ObjInit_1(__this);
}

void Timeline__add_ProgressChanged(Timeline* __this, ::uDelegate* value)
{
    __this->ProgressChanged = ::uCast< ::uDelegate*>(::app::Uno::Delegate__Combine(NULL, (::uDelegate*)__this->ProgressChanged, (::uDelegate*)value), ::app::Uno::EventHandler__typeof());
}

double Timeline__Fuse_Triggers_IProgress_get_Progress(Timeline* __this)
{
    return __this->Progress();
}

bool Timeline__get_CanPause(Timeline* __this)
{
    return true;
}

bool Timeline__get_CanPlayTo(Timeline* __this)
{
    return true;
}

bool Timeline__get_CanResume(Timeline* __this)
{
    return true;
}

bool Timeline__get_CanStop(Timeline* __this)
{
    return true;
}

double Timeline__get_TargetProgress(Timeline* __this)
{
    return __this->_targetProgress;
}

Timeline* Timeline__New_1(::uStatic* __this)
{
    Timeline* inst = (Timeline*)::uAllocObject(sizeof(Timeline), Timeline__typeof());
    inst->_ObjInit_2();
    return inst;
}

void Timeline__OnProgressChanged(Timeline* __this)
{
    if (::app::Uno::Delegate__op_Inequality(NULL, (::uDelegate*)__this->ProgressChanged, NULL))
    {
        ::uPtr< ::uDelegate*>(__this->ProgressChanged)->InvokeVoid< ::uObject*, ::app::Uno::EventArgs*>((::uObject*)__this, ::app::Uno::EventArgs__New_1(NULL));
    }
}

void Timeline__OnRooted(Timeline* __this, ::app::Fuse::Node* elm)
{
    ::app::Fuse::Triggers::Trigger__OnRooted(__this, elm);
    __this->BypassSeek(__this->_targetProgress, 0);
}

void Timeline__Pause(Timeline* __this)
{
    if (__this->IsRooted_1())
    {
        __this->_state = 1;
        __this->Seek(__this->Progress());
    }
}

void Timeline__PlayTo_1(Timeline* __this, double progress)
{
    if (__this->IsRooted_1())
    {
        __this->_state = 0;
        ::app::Fuse::Triggers::Trigger__PlayTo(__this, progress, 0);
    }
}

void Timeline__remove_ProgressChanged(Timeline* __this, ::uDelegate* value)
{
    __this->ProgressChanged = ::uCast< ::uDelegate*>(::app::Uno::Delegate__Remove(NULL, (::uDelegate*)__this->ProgressChanged, (::uDelegate*)value), ::app::Uno::EventHandler__typeof());
}

void Timeline__Resume(Timeline* __this)
{
    if (__this->IsRooted_1())
    {
        __this->_state = 0;
        ::app::Fuse::Triggers::Trigger__PlayTo(__this, __this->_targetProgress, 0);
    }
}

void Timeline__set_TargetProgress(Timeline* __this, double value)
{
    __this->_targetProgress = value;

    if (__this->IsRooted_1() && (__this->_state == 0))
    {
        __this->PlayTo_1(__this->_targetProgress);
    }
}

void Timeline__Stop_1(Timeline* __this)
{
    if (__this->IsRooted_1())
    {
        __this->Seek(__this->Progress());
        __this->_targetProgress = __this->Progress();
        __this->_state = 1;
    }
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Triggers\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

::uEnumType* Timeline_State__typeof()
{
    static ::uStaticStrong< ::uEnumType*> type;
    if (type != NULL) return type;

    type = ::uAllocEnumType("Fuse.Triggers.Timeline.State", ::app::Uno::Int__typeof(), 2);

    type->SetLiterals(
        "Play", 0LL,
        "Stop", 1LL);

    return type;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Triggers\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

Trigger__uType* Trigger__typeof()
{
    static ::uStaticStrong<Trigger__uType*> type;
    if (type != NULL) return type;

    type = (Trigger__uType*)::uAllocClassType(sizeof(Trigger__uType), "Fuse.Triggers.Trigger", false, 0, 8, 0);

    type->SetBaseType(::app::Fuse::Behavior__typeof());
    type->__fp_OnNodeAdded = Trigger__OnNodeAdded;
    type->__fp_OnProgressChanged = Trigger__OnProgressChanged;
    type->__fp_OnRooted = (void(*)(::app::Fuse::Behavior*, ::app::Fuse::Node*))Trigger__OnRooted;
    type->__fp_OnUnrooted = (void(*)(::app::Fuse::Behavior*, ::app::Fuse::Node*))Trigger__OnUnrooted;

    type->SetStrongRefs(
        "_actions", offsetof(Trigger, _actions),
        "_animation", offsetof(Trigger, _animation),
        "_animState", offsetof(Trigger, _animState),
        "_behaviors", offsetof(Trigger, _behaviors),
        "_doneAction", offsetof(Trigger, _doneAction),
        "_node", offsetof(Trigger, _node),
        "_nodes", offsetof(Trigger, _nodes),
        "PlaybackDone", offsetof(Trigger, PlaybackDone));

    type->SetFields(10,
        ::uNewField("_actions", NULL, offsetof(Trigger, _actions), ::app::Uno::Collections::List__Fuse_Triggers_Actions_TriggerAction__typeof()),
        ::uNewField("_animation", NULL, offsetof(Trigger, _animation), ::app::Fuse::Animations::TriggerAnimation__typeof()),
        ::uNewField("_animState", NULL, offsetof(Trigger, _animState), ::app::Fuse::Animations::TriggerAnimationState__typeof()),
        ::uNewField("_behaviors", NULL, offsetof(Trigger, _behaviors), ::app::Uno::Collections::IList__Fuse_Behavior__typeof()),
        ::uNewField("_doneAction", NULL, offsetof(Trigger, _doneAction), ::app::Uno::Action__typeof()),
        ::uNewField("_doneOn", NULL, offsetof(Trigger, _doneOn), ::app::Uno::Bool__typeof()),
        ::uNewField("_isStarted", NULL, offsetof(Trigger, _isStarted), ::app::Uno::Bool__typeof()),
        ::uNewField("_lastPlayDirection", NULL, offsetof(Trigger, _lastPlayDirection), ::app::Uno::Int__typeof()),
        ::uNewField("_node", NULL, offsetof(Trigger, _node), ::app::Fuse::Node__typeof()),
        ::uNewField("_nodes", NULL, offsetof(Trigger, _nodes), ::app::Uno::Collections::IList__Fuse_Node__typeof()));

    type->SetFunctions(48,
        ::uNewFunctionVoid("Activate", Trigger__Activate, 0, false, ::app::Uno::Action__typeof()),
        ::uNewFunctionVoid("add_PlaybackDone", Trigger__add_PlaybackDone, 0, false, ::app::Uno::Action__Fuse_Triggers_Trigger__typeof()),
        ::uNewFunctionVoid("AddContent", Trigger__AddContent, 0, false, ::app::Fuse::Node__typeof()),
        ::uNewFunctionVoid("BypassActivate", Trigger__BypassActivate, 0, false),
        ::uNewFunctionVoid("BypassDeactivate", Trigger__BypassDeactivate, 0, false),
        ::uNewFunctionVoid("BypassSeek", Trigger__BypassSeek, 0, false, ::app::Uno::Double__typeof(), ::app::Fuse::Animations::AnimationVariant__typeof()),
        ::uNewFunctionVoid("CleanupState", Trigger__CleanupState, 0, false),
        ::uNewFunctionVoid("CreateState", Trigger__CreateState, 0, false),
        ::uNewFunctionVoid("Deactivate", Trigger__Deactivate, 0, false),
        ::uNewFunctionVoid("EnsureAnimationLength", Trigger__EnsureAnimationLength, 0, false),
        ::uNewFunction("EnsureState", Trigger__EnsureState, 0, false, ::app::Uno::Bool__typeof(), ::app::Uno::Double__typeof()),
        ::uNewFunction("get_Actions", Trigger__get_Actions, 0, false, ::app::Uno::Collections::IList__Fuse_Triggers_Actions_TriggerAction__typeof()),
        ::uNewFunction("get_Animation", Trigger__get_Animation, 0, false, ::app::Fuse::Animations::TriggerAnimation__typeof()),
        ::uNewFunction("get_Animators", Trigger__get_Animators, 0, false, ::app::Uno::Collections::IList__Fuse_Animations_Animator__typeof()),
        ::uNewFunction("get_BackwardAnimation", Trigger__get_BackwardAnimation, 0, false, ::app::Fuse::Animations::TriggerAnimation__typeof()),
        ::uNewFunction("get_Behaviors", Trigger__get_Behaviors, 0, false, ::app::Uno::Collections::IList__Fuse_Behavior__typeof()),
        ::uNewFunction("get_Bypass", Trigger__get_Bypass, 0, false, ::app::Fuse::Triggers::TriggerBypassMode__typeof()),
        ::uNewFunction("get_HasActions", Trigger__get_HasActions, 0, false, ::app::Uno::Bool__typeof()),
        ::uNewFunction("get_HasAnimators", Trigger__get_HasAnimators, 0, false, ::app::Uno::Bool__typeof()),
        ::uNewFunction("get_IsRooted", Trigger__get_IsRooted_1, 0, false, ::app::Uno::Bool__typeof()),
        ::uNewFunction("get_Node", Trigger__get_Node, 0, false, ::app::Fuse::Node__typeof()),
        ::uNewFunction("get_Nodes", Trigger__get_Nodes, 0, false, ::app::Uno::Collections::IList__Fuse_Node__typeof()),
        ::uNewFunction("get_Progress", Trigger__get_Progress, 0, false, ::app::Uno::Double__typeof()),
        ::uNewFunction("GetTotalDuration", Trigger__GetTotalDuration, 0, false, ::app::Uno::Double__typeof(), ::app::Fuse::Animations::AnimationVariant__typeof()),
        ::uNewFunctionVoid("InversePulse", Trigger__InversePulse, 0, false),
        ::uNewFunctionVoid("OnBehaviorAdded", Trigger__OnBehaviorAdded, 0, false, ::app::Fuse::Behavior__typeof()),
        ::uNewFunctionVoid("OnBehaviorRemoved", Trigger__OnBehaviorRemoved, 0, false, ::app::Fuse::Behavior__typeof()),
        ::uNewFunctionVoid("OnNodeAdded", type->__fp_OnNodeAdded, offsetof(Trigger__uType, __fp_OnNodeAdded), false, ::app::Fuse::Node__typeof()),
        ::uNewFunctionVoid("OnNodeRemoved", Trigger__OnNodeRemoved, 0, false, ::app::Fuse::Node__typeof()),
        ::uNewFunctionVoid("OnPlaybackDone", Trigger__OnPlaybackDone, 0, false, ::uObject__typeof()),
        ::uNewFunctionVoid("OnProgressChanged", type->__fp_OnProgressChanged, offsetof(Trigger__uType, __fp_OnProgressChanged), false),
        ::uNewFunctionVoid("OnProgressUpdated", Trigger__OnProgressUpdated, 0, false, ::uObject__typeof()),
        ::uNewFunctionVoid("PlayEnd", Trigger__PlayEnd, 0, false, ::app::Uno::Bool__typeof(), ::app::Uno::Action__typeof()),
        ::uNewFunctionVoid("PlayOn", Trigger__PlayOn, 0, false),
        ::uNewFunctionVoid("PlayTo", Trigger__PlayTo, 0, false, ::app::Uno::Double__typeof(), ::app::Fuse::Animations::AnimationVariant__typeof()),
        ::uNewFunctionVoid("Pulse", Trigger__Pulse, 0, false),
        ::uNewFunctionVoid("RecreateAnimationState", Trigger__RecreateAnimationState, 0, false),
        ::uNewFunctionVoid("remove_PlaybackDone", Trigger__remove_PlaybackDone, 0, false, ::app::Uno::Action__Fuse_Triggers_Trigger__typeof()),
        ::uNewFunctionVoid("RemoveContent", Trigger__RemoveContent, 0, false, ::app::Fuse::Node__typeof()),
        ::uNewFunctionVoid("Seek", Trigger__Seek, 0, false, ::app::Uno::Double__typeof()),
        ::uNewFunctionVoid("Seek", Trigger__Seek_1, 0, false, ::app::Uno::Double__typeof(), ::app::Fuse::Animations::AnimationVariant__typeof()),
        ::uNewFunctionVoid("set_Animation", Trigger__set_Animation, 0, false, ::app::Fuse::Animations::TriggerAnimation__typeof()),
        ::uNewFunctionVoid("set_BackwardAnimation", Trigger__set_BackwardAnimation, 0, false, ::app::Fuse::Animations::TriggerAnimation__typeof()),
        ::uNewFunctionVoid("set_Bypass", Trigger__set_Bypass, 0, false, ::app::Fuse::Triggers::TriggerBypassMode__typeof()),
        ::uNewFunctionVoid("SetDone", Trigger__SetDone, 0, false, ::app::Uno::Action__typeof(), ::app::Uno::Bool__typeof()),
        ::uNewFunctionVoid("SetPlayDirection", Trigger__SetPlayDirection, 0, false, ::app::Uno::Int__typeof()),
        ::uNewFunctionVoid("Start", Trigger__Start, 0, false),
        ::uNewFunctionVoid("Stop", Trigger__Stop, 0, false));

    ::uRegisterType(type);
    return type;
}

void Trigger___ObjInit_1(Trigger* __this)
{
    ::app::Fuse::Behavior___ObjInit(__this);
}

void Trigger__Activate(Trigger* __this, ::uDelegate* done)
{
    __this->Start();
    __this->SetDone(done, true);
    __this->EnsureState(1.0);

    if (__this->_animState != NULL)
    {
        ::uPtr< ::app::Fuse::Animations::TriggerAnimationState*>(__this->_animState)->PlayOn();
    }
}

void Trigger__add_PlaybackDone(Trigger* __this, ::uDelegate* value)
{
    __this->PlaybackDone = ::uCast< ::uDelegate*>(::app::Uno::Delegate__Combine(NULL, (::uDelegate*)__this->PlaybackDone, (::uDelegate*)value), ::app::Uno::Action__Fuse_Triggers_Trigger__typeof());
}

void Trigger__AddContent(Trigger* __this, ::app::Fuse::Node* target)
{
    ::uObject* iarn = ::uAs< ::uObject*>(target, ::app::Fuse::Triggers::IAddRemove__Fuse_Node__typeof());

    if ((__this->_nodes != NULL) && (iarn != NULL))
    {
        for (::uObject* enum_123 = ::app::Uno::Collections::IEnumerable__Fuse_Node::GetEnumerator(::uPtr< ::uObject*>(__this->_nodes)); ::app::Uno::Collections::IEnumerator::MoveNext(::uPtr< ::uObject*>(enum_123)); )
        {
            ::app::Fuse::Node* c = ::app::Uno::Collections::IEnumerator__Fuse_Node::Current(::uPtr< ::uObject*>(enum_123));
            ::app::Fuse::Triggers::IAddRemove__Fuse_Node::Add(::uPtr< ::uObject*>(iarn), c);
        }
    }

    if ((__this->_behaviors != NULL) && (__this->_node != NULL))
    {
        for (::uObject* enum_124 = ::app::Uno::Collections::IEnumerable__Fuse_Behavior::GetEnumerator(::uPtr< ::uObject*>(__this->_behaviors)); ::app::Uno::Collections::IEnumerator::MoveNext(::uPtr< ::uObject*>(enum_124)); )
        {
            ::app::Fuse::Behavior* b = ::app::Uno::Collections::IEnumerator__Fuse_Behavior::Current(::uPtr< ::uObject*>(enum_124));
            ::app::Uno::Collections::ICollection__Fuse_Behavior::Add(::uPtr< ::uObject*>(::uPtr< ::app::Fuse::Node*>(__this->_node)->Behaviors()), b);
        }
    }
}

void Trigger__BypassActivate(Trigger* __this)
{
    if (__this->Bypass() == 1)
    {
        __this->Activate(NULL);
    }
    else
    {
        __this->BypassSeek(1.0, 0);
        __this->PlayOn();
    }
}

void Trigger__BypassDeactivate(Trigger* __this)
{
    if (__this->Bypass() == 1)
    {
        __this->Deactivate();
    }
    else
    {
        __this->BypassSeek(0.0, 0);
        __this->Deactivate();
    }
}

void Trigger__BypassSeek(Trigger* __this, double progress, int direction)
{
    if (__this->Bypass() == 1)
    {
        __this->Seek_1(progress, direction);
        return;
    }

    if (progress > 0.0)
    {
        __this->Start();
    }
    else
    {
        __this->Stop();
    }

    if (__this->EnsureState(progress))
    {
        ::uPtr< ::app::Fuse::Animations::TriggerAnimationState*>(__this->_animState)->SeekProgress(progress, direction, 3);
    }
}

void Trigger__CleanupState(Trigger* __this)
{
    if (__this->_animState != NULL)
    {
        ::uPtr< ::app::Fuse::Animations::TriggerAnimationState*>(__this->_animState)->Dispose();
        __this->_animState = NULL;
    }
}

void Trigger__CreateState(Trigger* __this)
{
    __this->CleanupState();
    __this->EnsureAnimationLength();
    __this->_animState = ::uPtr< ::app::Fuse::Animations::TriggerAnimation*>(__this->Animation())->CreateState(__this->_node);
    ::uPtr< ::app::Fuse::Animations::TriggerAnimationState*>(__this->_animState)->add_PlaybackDone(::uNewDelegateNonVirt(::app::Uno::Action__object__typeof(), (const void*)Trigger__OnPlaybackDone, __this));

    if (__this->HasActions())
    {
        ::uPtr< ::app::Fuse::Animations::TriggerAnimationState*>(__this->_animState)->add_ProgressUpdated(::uNewDelegateNonVirt(::app::Uno::Action__object__typeof(), (const void*)Trigger__OnProgressUpdated, __this));
    }
}

void Trigger__Deactivate(Trigger* __this)
{
    if (__this->Progress() <= 0.0)
    {
        __this->Stop();
        return;
    }

    __this->PlayEnd(false, ::uNewDelegateNonVirt(::app::Uno::Action__typeof(), (const void*)Trigger__Stop, __this));
}

void Trigger__EnsureAnimationLength(Trigger* __this)
{
    if (!__this->HasActions())
    {
        return;
    }

    double animFore = ::uPtr< ::app::Fuse::Animations::TriggerAnimation*>(__this->Animation())->GetTotalDuration(0);
    double animBack = ::uPtr< ::app::Fuse::Animations::TriggerAnimation*>(__this->Animation())->GetTotalDuration(1);
    double actFore = 0.0;
    double actBack = 0.0;

    for (::app::Uno::Collections::List1_Enumerator__Fuse_Triggers_Actions_TriggerAction enum_128 = ::uPtr< ::app::Uno::Collections::List__Fuse_Triggers_Actions_TriggerAction*>(__this->_actions)->GetEnumerator(); enum_128.MoveNext(); )
    {
        ::app::Fuse::Triggers::Actions::TriggerAction* action = enum_128.Current();
        float when = ::uPtr< ::app::Fuse::Triggers::Actions::TriggerAction*>(action)->Delay();

        if ((action->Direction() == 0) || (action->Direction() == 2))
        {
            actFore = ::app::Uno::Math__Max(NULL, (double)when, actFore);
        }

        if ((action->Direction() == 1) || (action->Direction() == 2))
        {
            actBack = ::app::Uno::Math__Max(NULL, (double)when, actBack);
        }
    }

    if ((actFore <= animFore) && (actBack <= animBack))
    {
        return;
    }

    ::app::Fuse::Animations::Nothing* n = ::app::Fuse::Animations::Nothing__New_1(NULL);
    ::uPtr< ::app::Fuse::Animations::Nothing*>(n)->Delay_1(actFore);
    n->DelayBack(actBack);
    ::app::Uno::Collections::ICollection__Fuse_Animations_Animator::Add(::uPtr< ::uObject*>(__this->Animators()), (::app::Fuse::Animations::Animator*)n);

    if (__this->BackwardAnimation() != NULL)
    {
        n = ::app::Fuse::Animations::Nothing__New_1(NULL);
        ::uPtr< ::app::Fuse::Animations::Nothing*>(n)->Delay_1(actBack);
        ::app::Uno::Collections::ICollection__Fuse_Animations_Animator::Add(::uPtr< ::uObject*>(::uPtr< ::app::Fuse::Animations::TriggerAnimation*>(__this->BackwardAnimation())->Animators()), (::app::Fuse::Animations::Animator*)n);
    }
}

bool Trigger__EnsureState(Trigger* __this, double progress)
{
    if (progress > 0.0)
    {
        if ((__this->_animState == NULL) && (__this->HasAnimators() || __this->HasActions()))
        {
            __this->CreateState();
        }
    }

    return __this->_animState != NULL;
}

::uObject* Trigger__get_Actions(Trigger* __this)
{
    if (__this->_actions == NULL)
    {
        __this->_actions = ::app::Uno::Collections::List__Fuse_Triggers_Actions_TriggerAction__New_1(NULL);
    }

    return (::uObject*)__this->_actions;
}

::app::Fuse::Animations::TriggerAnimation* Trigger__get_Animation(Trigger* __this)
{
    if (__this->_animation == NULL)
    {
        __this->_animation = ::app::Fuse::Animations::TriggerAnimation__New_1(NULL);
    }

    return __this->_animation;
}

::uObject* Trigger__get_Animators(Trigger* __this)
{
    return ::uPtr< ::app::Fuse::Animations::TriggerAnimation*>(__this->Animation())->Animators();
}

::app::Fuse::Animations::TriggerAnimation* Trigger__get_BackwardAnimation(Trigger* __this)
{
    return ::uPtr< ::app::Fuse::Animations::TriggerAnimation*>(__this->Animation())->Backward();
}

::uObject* Trigger__get_Behaviors(Trigger* __this)
{
    if (__this->_behaviors == NULL)
    {
        __this->_behaviors = (::uObject*)::app::Uno::Collections::ObservableList__Fuse_Behavior__New_1(NULL, ::uNewDelegateNonVirt(::app::Uno::Action__Fuse_Behavior__typeof(), (const void*)Trigger__OnBehaviorAdded, __this), ::uNewDelegateNonVirt(::app::Uno::Action__Fuse_Behavior__typeof(), (const void*)Trigger__OnBehaviorRemoved, __this));
    }

    return __this->_behaviors;
}

int Trigger__get_Bypass(Trigger* __this)
{
    return __this->_Bypass;
}

bool Trigger__get_HasActions(Trigger* __this)
{
    return (__this->_actions != NULL) && (::uPtr< ::app::Uno::Collections::List__Fuse_Triggers_Actions_TriggerAction*>(__this->_actions)->Count() > 0);
}

bool Trigger__get_HasAnimators(Trigger* __this)
{
    return (__this->_animation != NULL) && ::uPtr< ::app::Fuse::Animations::TriggerAnimation*>(__this->_animation)->HasAnimators();
}

bool Trigger__get_IsRooted_1(Trigger* __this)
{
    return __this->_node != NULL;
}

::app::Fuse::Node* Trigger__get_Node(Trigger* __this)
{
    return __this->_node;
}

::uObject* Trigger__get_Nodes(Trigger* __this)
{
    if (__this->_nodes == NULL)
    {
        __this->_nodes = (::uObject*)::app::Uno::Collections::ObservableList__Fuse_Node__New_1(NULL, ::uNewDelegateVirt(::app::Uno::Action__Fuse_Node__typeof(), __this, offsetof(Trigger__uType, __fp_OnNodeAdded)), ::uNewDelegateNonVirt(::app::Uno::Action__Fuse_Node__typeof(), (const void*)Trigger__OnNodeRemoved, __this));
    }

    return __this->_nodes;
}

double Trigger__get_Progress(Trigger* __this)
{
    if (__this->_animState != NULL)
    {
        return ::uPtr< ::app::Fuse::Animations::TriggerAnimationState*>(__this->_animState)->Progress();
    }

    return 0.0;
}

double Trigger__GetTotalDuration(Trigger* __this, int dir)
{
    if (__this->_animation == NULL)
    {
        return 0.0;
    }

    return ::uPtr< ::app::Fuse::Animations::TriggerAnimation*>(__this->_animation)->GetTotalDuration(dir);
}

void Trigger__InversePulse(Trigger* __this)
{
    __this->PlayEnd(false, ::uNewDelegateNonVirt(::app::Uno::Action__typeof(), (const void*)Trigger__PlayOn, __this));
}

void Trigger__OnBehaviorAdded(Trigger* __this, ::app::Fuse::Behavior* b)
{
    if (__this->_node != NULL)
    {
        ::app::Uno::Collections::ICollection__Fuse_Behavior::Add(::uPtr< ::uObject*>(::uPtr< ::app::Fuse::Node*>(__this->_node)->Behaviors()), b);
    }
}

void Trigger__OnBehaviorRemoved(Trigger* __this, ::app::Fuse::Behavior* b)
{
    if (__this->_node != NULL)
    {
        ::app::Uno::Collections::ICollection__Fuse_Behavior::Remove(::uPtr< ::uObject*>(::uPtr< ::app::Fuse::Node*>(__this->_node)->Behaviors()), b);
    }
}

void Trigger__OnNodeAdded(Trigger* __this, ::app::Fuse::Node* n)
{
    ::uObject* iar = ::uAs< ::uObject*>(__this->_node, ::app::Fuse::Triggers::IAddRemove__Fuse_Node__typeof());

    if (iar != NULL)
    {
        ::app::Fuse::Triggers::IAddRemove__Fuse_Node::Add(::uPtr< ::uObject*>(iar), n);
    }
}

void Trigger__OnNodeRemoved(Trigger* __this, ::app::Fuse::Node* n)
{
    ::uObject* iar = ::uAs< ::uObject*>(__this->_node, ::app::Fuse::Triggers::IAddRemove__Fuse_Node__typeof());

    if (iar != NULL)
    {
        ::app::Fuse::Triggers::IAddRemove__Fuse_Node::Remove(::uPtr< ::uObject*>(iar), n);
    }
}

void Trigger__OnPlaybackDone(Trigger* __this, ::uObject* s)
{
    __this->SetPlayDirection(0);

    if (::app::Uno::Delegate__op_Inequality(NULL, (::uDelegate*)__this->PlaybackDone, NULL))
    {
        ::uPtr< ::uDelegate*>(__this->PlaybackDone)->InvokeVoid< Trigger*>(__this);
    }

    if (::app::Uno::Delegate__op_Equality(NULL, (::uDelegate*)__this->_doneAction, NULL))
    {
        return;
    }

    ::uDelegate* da = __this->_doneAction;
    __this->_doneAction = NULL;

    if ((__this->_doneOn && ::uPtr< ::app::Fuse::Animations::TriggerAnimationState*>(__this->_animState)->ProgressFullOn()) || (!__this->_doneOn && ::uPtr< ::app::Fuse::Animations::TriggerAnimationState*>(__this->_animState)->ProgressFullOff()))
    {
        ::uPtr< ::uDelegate*>(da)->InvokeVoid();
    }
}

void Trigger__OnProgressChanged(Trigger* __this)
{
}

void Trigger__OnProgressUpdated(Trigger* __this, ::uObject* s)
{
    double prev = ::uPtr< ::app::Fuse::Animations::TriggerAnimationState*>(__this->_animState)->PreviousProgress();
    double cur = ::uPtr< ::app::Fuse::Animations::TriggerAnimationState*>(__this->_animState)->Progress();
    double diff = cur - prev;

    if (diff == 0.0)
    {
        return;
    }

    __this->OnProgressChanged();
    __this->SetPlayDirection((diff > 0.0) ? 1 : ((diff < 0.0) ? -1 : 0));
    int dir = (diff > 0.0) ? 0 : 1;

    for (::app::Uno::Collections::List1_Enumerator__Fuse_Triggers_Actions_TriggerAction enum_129 = ::uPtr< ::app::Uno::Collections::List__Fuse_Triggers_Actions_TriggerAction*>(__this->_actions)->GetEnumerator(); enum_129.MoveNext(); )
    {
        ::app::Fuse::Triggers::Actions::TriggerAction* action = enum_129.Current();

        if (!::uPtr< ::app::Fuse::Triggers::Actions::TriggerAction*>(action)->IsProgressTriggered())
        {
            continue;
        }

        float tp = ::uPtr< ::app::Fuse::Triggers::Actions::TriggerAction*>(action)->ProgressWhen((float)::uPtr< ::app::Fuse::Animations::TriggerAnimationState*>(__this->_animState)->CurrentTotalDuration());
        bool call = (dir == 0) ? ((((double)tp >= prev) && ((double)tp < cur)) || ((tp == 1.0f) && (cur == 1.0))) : ((((double)tp <= prev) && ((double)tp > cur)) || ((tp == 0.0f) && (cur == 0.0)));

        if (call && ((action->Direction() == 2) || (action->Direction() == dir)))
        {
            action->PerformFromNode(__this->_node);
        }
    }
}

void Trigger__OnRooted(Trigger* __this, ::app::Fuse::Node* elm)
{
    __this->_node = elm;
}

void Trigger__OnUnrooted(Trigger* __this, ::app::Fuse::Node* elm)
{
    __this->Stop();
    __this->CleanupState();
    __this->_node = NULL;
}

void Trigger__PlayEnd(Trigger* __this, bool on, ::uDelegate* done)
{
    if (on)
    {
        __this->Start();
    }

    __this->SetDone(done, on);

    if (__this->EnsureState((double)(on ? 1 : 0)))
    {
        ::uPtr< ::app::Fuse::Animations::TriggerAnimationState*>(__this->_animState)->PlayEnd(on);
    }
}

void Trigger__PlayOn(Trigger* __this)
{
    __this->PlayEnd(true, NULL);
}

void Trigger__PlayTo(Trigger* __this, double progress, int variant)
{
    if (__this->EnsureState(progress))
    {
        ::uPtr< ::app::Fuse::Animations::TriggerAnimationState*>(__this->_animState)->PlayToProgress(progress, variant);
    }
}

void Trigger__Pulse(Trigger* __this)
{
    __this->SetPlayDirection(0);
    __this->Activate(::uNewDelegateNonVirt(::app::Uno::Action__typeof(), (const void*)Trigger__Deactivate, __this));
}

void Trigger__RecreateAnimationState(Trigger* __this)
{
    if (__this->_animState != NULL)
    {
        __this->CreateState();
    }
}

void Trigger__remove_PlaybackDone(Trigger* __this, ::uDelegate* value)
{
    __this->PlaybackDone = ::uCast< ::uDelegate*>(::app::Uno::Delegate__Remove(NULL, (::uDelegate*)__this->PlaybackDone, (::uDelegate*)value), ::app::Uno::Action__Fuse_Triggers_Trigger__typeof());
}

void Trigger__RemoveContent(Trigger* __this, ::app::Fuse::Node* target)
{
    ::uObject* iarn = ::uAs< ::uObject*>(target, ::app::Fuse::Triggers::IAddRemove__Fuse_Node__typeof());

    if ((__this->_nodes != NULL) && (iarn != NULL))
    {
        for (::uObject* enum_125 = ::app::Uno::Collections::IEnumerable__Fuse_Node::GetEnumerator(::uPtr< ::uObject*>(__this->_nodes)); ::app::Uno::Collections::IEnumerator::MoveNext(::uPtr< ::uObject*>(enum_125)); )
        {
            ::app::Fuse::Node* c = ::app::Uno::Collections::IEnumerator__Fuse_Node::Current(::uPtr< ::uObject*>(enum_125));
            ::app::Fuse::Triggers::IAddRemove__Fuse_Node::Remove(::uPtr< ::uObject*>(iarn), c);
        }
    }

    if ((__this->_behaviors != NULL) && (__this->_node != NULL))
    {
        for (::uObject* enum_126 = ::app::Uno::Collections::IEnumerable__Fuse_Behavior::GetEnumerator(::uPtr< ::uObject*>(__this->_behaviors)); ::app::Uno::Collections::IEnumerator::MoveNext(::uPtr< ::uObject*>(enum_126)); )
        {
            ::app::Fuse::Behavior* b = ::app::Uno::Collections::IEnumerator__Fuse_Behavior::Current(::uPtr< ::uObject*>(enum_126));
            ::app::Uno::Collections::ICollection__Fuse_Behavior::Remove(::uPtr< ::uObject*>(::uPtr< ::app::Fuse::Node*>(__this->_node)->Behaviors()), b);
        }
    }
}

void Trigger__Seek(Trigger* __this, double progress)
{
    __this->Seek_1(progress, 0);
}

void Trigger__Seek_1(Trigger* __this, double progress, int direction)
{
    if (progress > 0.0)
    {
        __this->Start();
    }
    else
    {
        __this->Stop();
    }

    if (__this->EnsureState(progress))
    {
        ::uPtr< ::app::Fuse::Animations::TriggerAnimationState*>(__this->_animState)->SeekProgress(progress, direction, 1);
    }
}

void Trigger__set_Animation(Trigger* __this, ::app::Fuse::Animations::TriggerAnimation* value)
{
    __this->_animation = value;
}

void Trigger__set_BackwardAnimation(Trigger* __this, ::app::Fuse::Animations::TriggerAnimation* value)
{
    ::uPtr< ::app::Fuse::Animations::TriggerAnimation*>(__this->Animation())->Backward(value);
}

void Trigger__set_Bypass(Trigger* __this, int value)
{
    __this->_Bypass = value;
}

void Trigger__SetDone(Trigger* __this, ::uDelegate* done, bool on)
{
    __this->_doneOn = on;
    __this->_doneAction = done;
}

void Trigger__SetPlayDirection(Trigger* __this, int next)
{
    if (next == __this->_lastPlayDirection)
    {
        return;
    }

    __this->_lastPlayDirection = next;

    if (next == 0)
    {
        return;
    }

    int dir = (next > 0) ? 0 : 1;

    for (::app::Uno::Collections::List1_Enumerator__Fuse_Triggers_Actions_TriggerAction enum_127 = ::uPtr< ::app::Uno::Collections::List__Fuse_Triggers_Actions_TriggerAction*>(__this->_actions)->GetEnumerator(); enum_127.MoveNext(); )
    {
        ::app::Fuse::Triggers::Actions::TriggerAction* action = enum_127.Current();

        if (::uPtr< ::app::Fuse::Triggers::Actions::TriggerAction*>(action)->IsProgressTriggered())
        {
            continue;
        }

        if ((::uPtr< ::app::Fuse::Triggers::Actions::TriggerAction*>(action)->Direction() == dir) || (::uPtr< ::app::Fuse::Triggers::Actions::TriggerAction*>(action)->Direction() == 2))
        {
            ::uPtr< ::app::Fuse::Triggers::Actions::TriggerAction*>(action)->PerformFromNode(__this->_node);
        }
    }
}

void Trigger__Start(Trigger* __this)
{
    if (!__this->_isStarted)
    {
        if (!__this->IsRooted_1())
        {
            U_THROW(::app::Uno::Exception__New_2(NULL, ::app::Uno::String__op_Addition_1(NULL, ::uGetConstString("Trigger started prior to being rooted: "), (::uObject*)__this)));
        }

        __this->AddContent(__this->_node);
        __this->_isStarted = true;
    }
}

void Trigger__Stop(Trigger* __this)
{
    if (__this->_isStarted)
    {
        __this->RemoveContent(__this->_node);
        __this->_isStarted = false;
    }
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Triggers\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

::uEnumType* TriggerBypassMode__typeof()
{
    static ::uStaticStrong< ::uEnumType*> type;
    if (type != NULL) return type;

    type = ::uAllocEnumType("Fuse.Triggers.TriggerBypassMode", ::app::Uno::Int__typeof(), 2);

    type->SetLiterals(
        "Standard", 0LL,
        "Never", 1LL);

    ::uRegisterType(type);
    return type;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Triggers\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

WhileBool__uType* WhileBool__typeof()
{
    static ::uStaticStrong<WhileBool__uType*> type;
    if (type != NULL) return type;

    type = (WhileBool__uType*)::uAllocClassType(sizeof(WhileBool__uType), "Fuse.Triggers.WhileBool", false, 1, 0, 0);

    type->SetBaseType(::app::Fuse::Triggers::WhileValue__bool__typeof());

    type->SetInterfaces(
        ::app::Fuse::Triggers::IValue__bool__typeof(), offsetof(WhileBool__uType, __interface_0));

    type->SetFunctions(2,
        ::uNewFunction("get_Value", WhileBool__get_Value_1, 0, false, ::app::Uno::Bool__typeof()),
        ::uNewFunctionVoid("set_Value", WhileBool__set_Value_1, 0, false, ::app::Uno::Bool__typeof()));

    ::uRegisterType(type);
    return type;
}

void WhileBool___ObjInit_4(WhileBool* __this)
{
    ::app::Fuse::Triggers::WhileValue__bool___ObjInit_3(__this);
}

bool WhileBool__get_Value_1(WhileBool* __this)
{
    return ::app::Fuse::Triggers::WhileValue__bool__get_Value(__this);
}

void WhileBool__set_Value_1(WhileBool* __this, bool value)
{
    ::app::Fuse::Triggers::WhileValue__bool__set_Value(__this, value);
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Triggers\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

WhileDisabled__uType* WhileDisabled__typeof()
{
    static ::uStaticStrong<WhileDisabled__uType*> type;
    if (type != NULL) return type;

    type = (WhileDisabled__uType*)::uAllocClassType(sizeof(WhileDisabled__uType), "Fuse.Triggers.WhileDisabled", false, 0, 0, 0);

    type->SetBaseType(::app::Fuse::Triggers::WhileEnabledDisabledTrigger__typeof());
    type->__fp_get_IsActive = (bool(*)(::app::Fuse::Triggers::WhileEnabledDisabledTrigger*))WhileDisabled__get_IsActive;

    type->SetFunctions(1,
        ::uNewFunction(".ctor", WhileDisabled__New_1, 0, true, WhileDisabled__typeof()));

    ::uRegisterType(type);
    return type;
}

void WhileDisabled___ObjInit_4(WhileDisabled* __this)
{
    ::app::Fuse::Triggers::WhileEnabledDisabledTrigger___ObjInit_3(__this);
}

bool WhileDisabled__get_IsActive(WhileDisabled* __this)
{
    return (__this->Node() != NULL) ? !::uPtr< ::app::Fuse::Node*>(__this->Node())->IsEnabled() : false;
}

WhileDisabled* WhileDisabled__New_1(::uStatic* __this)
{
    WhileDisabled* inst = (WhileDisabled*)::uAllocObject(sizeof(WhileDisabled), WhileDisabled__typeof());
    inst->_ObjInit_4();
    return inst;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Triggers\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

WhileEnabled__uType* WhileEnabled__typeof()
{
    static ::uStaticStrong<WhileEnabled__uType*> type;
    if (type != NULL) return type;

    type = (WhileEnabled__uType*)::uAllocClassType(sizeof(WhileEnabled__uType), "Fuse.Triggers.WhileEnabled", false, 0, 0, 0);

    type->SetBaseType(::app::Fuse::Triggers::WhileEnabledDisabledTrigger__typeof());
    type->__fp_get_IsActive = (bool(*)(::app::Fuse::Triggers::WhileEnabledDisabledTrigger*))WhileEnabled__get_IsActive;

    type->SetFunctions(1,
        ::uNewFunction(".ctor", WhileEnabled__New_1, 0, true, WhileEnabled__typeof()));

    ::uRegisterType(type);
    return type;
}

void WhileEnabled___ObjInit_4(WhileEnabled* __this)
{
    ::app::Fuse::Triggers::WhileEnabledDisabledTrigger___ObjInit_3(__this);
}

bool WhileEnabled__get_IsActive(WhileEnabled* __this)
{
    return (__this->Node() != NULL) ? ::uPtr< ::app::Fuse::Node*>(__this->Node())->IsEnabled() : true;
}

WhileEnabled* WhileEnabled__New_1(::uStatic* __this)
{
    WhileEnabled* inst = (WhileEnabled*)::uAllocObject(sizeof(WhileEnabled), WhileEnabled__typeof());
    inst->_ObjInit_4();
    return inst;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Triggers\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

WhileEnabledDisabledTrigger__uType* WhileEnabledDisabledTrigger__typeof()
{
    static ::uStaticStrong<WhileEnabledDisabledTrigger__uType*> type;
    if (type != NULL) return type;

    type = (WhileEnabledDisabledTrigger__uType*)::uAllocClassType(sizeof(WhileEnabledDisabledTrigger__uType), "Fuse.Triggers.WhileEnabledDisabledTrigger", false, 0, 0, 0);

    type->SetBaseType(::app::Fuse::Triggers::WhileTrigger__typeof());
    type->__fp_OnRooted = (void(*)(::app::Fuse::Behavior*, ::app::Fuse::Node*))WhileEnabledDisabledTrigger__OnRooted;
    type->__fp_OnUnrooted = (void(*)(::app::Fuse::Behavior*, ::app::Fuse::Node*))WhileEnabledDisabledTrigger__OnUnrooted;

    type->SetFunctions(2,
        ::uNewFunction("get_IsActive", type->__fp_get_IsActive, offsetof(WhileEnabledDisabledTrigger__uType, __fp_get_IsActive), false, ::app::Uno::Bool__typeof()),
        ::uNewFunctionVoid("OnIsEnabledChanged", WhileEnabledDisabledTrigger__OnIsEnabledChanged, 0, false, ::uObject__typeof(), ::app::Uno::EventArgs__typeof()));

    ::uRegisterType(type);
    return type;
}

void WhileEnabledDisabledTrigger___ObjInit_3(WhileEnabledDisabledTrigger* __this)
{
    ::app::Fuse::Triggers::WhileTrigger___ObjInit_2(__this);
}

void WhileEnabledDisabledTrigger__OnIsEnabledChanged(WhileEnabledDisabledTrigger* __this, ::uObject* sender, ::app::Uno::EventArgs* args)
{
    __this->SetActive(__this->IsActive());
}

void WhileEnabledDisabledTrigger__OnRooted(WhileEnabledDisabledTrigger* __this, ::app::Fuse::Node* elm)
{
    ::app::Fuse::Triggers::Trigger__OnRooted(__this, elm);
    ::uPtr< ::app::Fuse::Node*>(elm)->add_IsEnabledChanged(::uNewDelegateNonVirt(::app::Uno::EventHandler__typeof(), (const void*)WhileEnabledDisabledTrigger__OnIsEnabledChanged, __this));
    __this->BypassSetActive(__this->IsActive());
}

void WhileEnabledDisabledTrigger__OnUnrooted(WhileEnabledDisabledTrigger* __this, ::app::Fuse::Node* elm)
{
    ::uPtr< ::app::Fuse::Node*>(elm)->remove_IsEnabledChanged(::uNewDelegateNonVirt(::app::Uno::EventHandler__typeof(), (const void*)WhileEnabledDisabledTrigger__OnIsEnabledChanged, __this));
    ::app::Fuse::Triggers::Trigger__OnUnrooted(__this, elm);
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Triggers\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

::uStaticStrong< ::app::Fuse::PropertyHandle*> WhileFailed___whileFailedProp;

WhileFailed__uType* WhileFailed__typeof()
{
    static ::uStaticStrong<WhileFailed__uType*> type;
    if (type != NULL) return type;

    type = (WhileFailed__uType*)::uAllocClassType(sizeof(WhileFailed__uType), "Fuse.Triggers.WhileFailed", false, 0, 0, 0);

    type->SetBaseType(::app::Fuse::Triggers::WhileTrigger__typeof());
    type->__fp_OnRooted = (void(*)(::app::Fuse::Behavior*, ::app::Fuse::Node*))WhileFailed__OnRooted;

    type->SetFields(1,
        ::uNewField("_whileFailedProp", &WhileFailed___whileFailedProp, 0, ::app::Fuse::PropertyHandle__typeof()));

    type->SetFunctions(3,
        ::uNewFunction("IsFailed", WhileFailed__IsFailed, 0, true, ::app::Uno::Bool__typeof(), ::app::Fuse::Node__typeof()),
        ::uNewFunction(".ctor", WhileFailed__New_1, 0, true, WhileFailed__typeof()),
        ::uNewFunctionVoid("SetState", WhileFailed__SetState, 0, true, ::app::Fuse::Node__typeof(), ::app::Uno::Bool__typeof(), ::app::Uno::String__typeof()));

    ::uRegisterType(type);
    return type;
}

void WhileFailed___ObjInit_3(WhileFailed* __this)
{
    ::app::Fuse::Triggers::WhileTrigger___ObjInit_2(__this);
}

void WhileFailed___TypeInit(::uStatic* __this)
{
    WhileFailed___whileFailedProp = ::app::Fuse::Properties__CreateHandle(NULL);
}

bool WhileFailed__IsFailed(::uStatic* __this, ::app::Fuse::Node* n)
{
    ::uObject* v = ::uPtr< ::app::Fuse::Properties*>(::uPtr< ::app::Fuse::Node*>(n)->Properties())->Get(WhileFailed___whileFailedProp);

    if (!::uIs(v, ::app::Uno::Bool__typeof()))
    {
        return false;
    }

    return ::uUnbox< bool>(::app::Uno::Bool__typeof(), v);
}

WhileFailed* WhileFailed__New_1(::uStatic* __this)
{
    WhileFailed* inst = (WhileFailed*)::uAllocObject(sizeof(WhileFailed), WhileFailed__typeof());
    inst->_ObjInit_3();
    return inst;
}

void WhileFailed__OnRooted(WhileFailed* __this, ::app::Fuse::Node* n)
{
    ::app::Fuse::Triggers::Trigger__OnRooted(__this, n);
    __this->BypassSetActive(WhileFailed__IsFailed(NULL, n));
}

void WhileFailed__SetState(::uStatic* __this, ::app::Fuse::Node* n, bool failed, ::uString* message)
{
    bool v = WhileFailed__IsFailed(NULL, n);

    if (v != failed)
    {
        ::uPtr< ::app::Fuse::Properties*>(::uPtr< ::app::Fuse::Node*>(n)->Properties())->Set(WhileFailed___whileFailedProp, ::uBox(::app::Uno::Bool__typeof(), failed));
        n->SetResource(::uGetConstString("WhileFailed.Message"), (::uObject*)message);

        for (::uObject* enum_123 = ::app::Uno::Collections::IEnumerable__Fuse_Behavior::GetEnumerator(::uPtr< ::uObject*>(n->Behaviors())); ::app::Uno::Collections::IEnumerator::MoveNext(::uPtr< ::uObject*>(enum_123)); )
        {
            ::app::Fuse::Behavior* b = ::app::Uno::Collections::IEnumerator__Fuse_Behavior::Current(::uPtr< ::uObject*>(enum_123));
            WhileFailed* wl = ::uAs< WhileFailed*>(b, WhileFailed__typeof());

            if (wl != NULL)
            {
                ::uPtr< WhileFailed*>(wl)->SetActive(failed);
            }
        }
    }
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Triggers\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

WhileFalse__uType* WhileFalse__typeof()
{
    static ::uStaticStrong<WhileFalse__uType*> type;
    if (type != NULL) return type;

    type = (WhileFalse__uType*)::uAllocClassType(sizeof(WhileFalse__uType), "Fuse.Triggers.WhileFalse", false, 1, 0, 0);

    type->SetBaseType(::app::Fuse::Triggers::WhileBool__typeof());
    type->__fp_get_IsOn = (bool(*)(::app::Fuse::Triggers::WhileValue__bool*))WhileFalse__get_IsOn;

    type->SetInterfaces(
        ::app::Fuse::Triggers::IValue__bool__typeof(), offsetof(WhileFalse__uType, __interface_0));

    type->SetFunctions(1,
        ::uNewFunction(".ctor", WhileFalse__New_1, 0, true, WhileFalse__typeof()));

    ::uRegisterType(type);
    return type;
}

void WhileFalse___ObjInit_5(WhileFalse* __this)
{
    ::app::Fuse::Triggers::WhileBool___ObjInit_4(__this);
}

bool WhileFalse__get_IsOn(WhileFalse* __this)
{
    return !__this->Value_1();
}

WhileFalse* WhileFalse__New_1(::uStatic* __this)
{
    WhileFalse* inst = (WhileFalse*)::uAllocObject(sizeof(WhileFalse), WhileFalse__typeof());
    inst->_ObjInit_5();
    return inst;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Triggers\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

WhileFloat__uType* WhileFloat__typeof()
{
    static ::uStaticStrong<WhileFloat__uType*> type;
    if (type != NULL) return type;

    type = (WhileFloat__uType*)::uAllocClassType(sizeof(WhileFloat__uType), "Fuse.Triggers.WhileFloat", false, 1, 0, 0);

    type->SetBaseType(::app::Fuse::Triggers::WhileValue__float__typeof());
    type->__fp_get_IsOn = (bool(*)(::app::Fuse::Triggers::WhileValue__float*))WhileFloat__get_IsOn;

    type->SetInterfaces(
        ::app::Fuse::Triggers::IValue__float__typeof(), offsetof(WhileFloat__uType, __interface_0));

    type->SetFields(3,
        ::uNewField("_compare", NULL, offsetof(WhileFloat, _compare), ::app::Uno::Float2__typeof()),
        ::uNewField("_high", NULL, offsetof(WhileFloat, _high), ::app::Fuse::Triggers::WhileFloat_Range__typeof()),
        ::uNewField("_low", NULL, offsetof(WhileFloat, _low), ::app::Fuse::Triggers::WhileFloat_Range__typeof()));

    type->SetFunctions(11,
        ::uNewFunction("get_GreaterThan", WhileFloat__get_GreaterThan, 0, false, ::app::Uno::Float__typeof()),
        ::uNewFunction("get_GreaterThanEqual", WhileFloat__get_GreaterThanEqual, 0, false, ::app::Uno::Float__typeof()),
        ::uNewFunction("get_LessThan", WhileFloat__get_LessThan, 0, false, ::app::Uno::Float__typeof()),
        ::uNewFunction("get_LessThanEqual", WhileFloat__get_LessThanEqual, 0, false, ::app::Uno::Float__typeof()),
        ::uNewFunction("get_Value", WhileFloat__get_Value_1, 0, false, ::app::Uno::Float__typeof()),
        ::uNewFunction(".ctor", WhileFloat__New_1, 0, true, WhileFloat__typeof()),
        ::uNewFunctionVoid("set_GreaterThan", WhileFloat__set_GreaterThan, 0, false, ::app::Uno::Float__typeof()),
        ::uNewFunctionVoid("set_GreaterThanEqual", WhileFloat__set_GreaterThanEqual, 0, false, ::app::Uno::Float__typeof()),
        ::uNewFunctionVoid("set_LessThan", WhileFloat__set_LessThan, 0, false, ::app::Uno::Float__typeof()),
        ::uNewFunctionVoid("set_LessThanEqual", WhileFloat__set_LessThanEqual, 0, false, ::app::Uno::Float__typeof()),
        ::uNewFunctionVoid("set_Value", WhileFloat__set_Value_1, 0, false, ::app::Uno::Float__typeof()));

    ::uRegisterType(type);
    return type;
}

void WhileFloat___ObjInit_4(WhileFloat* __this)
{
    ::app::Fuse::Triggers::WhileValue__float___ObjInit_3(__this);
}

float WhileFloat__get_GreaterThan(WhileFloat* __this)
{
    return __this->_compare.X;
}

float WhileFloat__get_GreaterThanEqual(WhileFloat* __this)
{
    return __this->_compare.X;
}

bool WhileFloat__get_IsOn(WhileFloat* __this)
{
    if ((__this->_low == 1) && (__this->Value_1() <= __this->_compare.X))
    {
        return false;
    }

    if ((__this->_low == 2) && (__this->Value_1() < __this->_compare.X))
    {
        return false;
    }

    if ((__this->_high == 1) && (__this->Value_1() >= __this->_compare.Y))
    {
        return false;
    }

    if ((__this->_high == 2) && (__this->Value_1() > __this->_compare.Y))
    {
        return false;
    }

    return true;
}

float WhileFloat__get_LessThan(WhileFloat* __this)
{
    return __this->_compare.Y;
}

float WhileFloat__get_LessThanEqual(WhileFloat* __this)
{
    return __this->_compare.Y;
}

float WhileFloat__get_Value_1(WhileFloat* __this)
{
    return ::app::Fuse::Triggers::WhileValue__float__get_Value(__this);
}

WhileFloat* WhileFloat__New_1(::uStatic* __this)
{
    WhileFloat* inst = (WhileFloat*)::uAllocObject(sizeof(WhileFloat), WhileFloat__typeof());
    inst->_ObjInit_4();
    return inst;
}

void WhileFloat__set_GreaterThan(WhileFloat* __this, float value)
{
    __this->_compare.X = value;
    __this->_low = 1;
    __this->UpdateState();
}

void WhileFloat__set_GreaterThanEqual(WhileFloat* __this, float value)
{
    __this->_compare.X = value;
    __this->_low = 2;
    __this->UpdateState();
}

void WhileFloat__set_LessThan(WhileFloat* __this, float value)
{
    __this->_compare.Y = value;
    __this->_high = 1;
    __this->UpdateState();
}

void WhileFloat__set_LessThanEqual(WhileFloat* __this, float value)
{
    __this->_compare.Y = value;
    __this->_high = 2;
    __this->UpdateState();
}

void WhileFloat__set_Value_1(WhileFloat* __this, float value)
{
    ::app::Fuse::Triggers::WhileValue__float__set_Value(__this, value);
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Triggers\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

::uEnumType* WhileFloat_Range__typeof()
{
    static ::uStaticStrong< ::uEnumType*> type;
    if (type != NULL) return type;

    type = ::uAllocEnumType("Fuse.Triggers.WhileFloat.Range", ::app::Uno::Int__typeof(), 3);

    type->SetLiterals(
        "Open", 0LL,
        "Exclusive", 1LL,
        "Inclusive", 2LL);

    return type;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Triggers\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

WhileFocused__uType* WhileFocused__typeof()
{
    static ::uStaticStrong<WhileFocused__uType*> type;
    if (type != NULL) return type;

    type = (WhileFocused__uType*)::uAllocClassType(sizeof(WhileFocused__uType), "Fuse.Triggers.WhileFocused", false, 0, 0, 0);

    type->SetBaseType(::app::Fuse::Triggers::Trigger__typeof());
    type->__fp_OnRooted = (void(*)(::app::Fuse::Behavior*, ::app::Fuse::Node*))WhileFocused__OnRooted;
    type->__fp_OnUnrooted = (void(*)(::app::Fuse::Behavior*, ::app::Fuse::Node*))WhileFocused__OnUnrooted;

    type->SetFunctions(3,
        ::uNewFunction(".ctor", WhileFocused__New_1, 0, true, WhileFocused__typeof()),
        ::uNewFunctionVoid("OnGotFocus", WhileFocused__OnGotFocus, 0, false, ::uObject__typeof(), ::app::Uno::EventArgs__typeof()),
        ::uNewFunctionVoid("OnLostFocus", WhileFocused__OnLostFocus, 0, false, ::uObject__typeof(), ::app::Uno::EventArgs__typeof()));

    ::uRegisterType(type);
    return type;
}

void WhileFocused___ObjInit_2(WhileFocused* __this)
{
    ::app::Fuse::Triggers::Trigger___ObjInit_1(__this);
}

WhileFocused* WhileFocused__New_1(::uStatic* __this)
{
    WhileFocused* inst = (WhileFocused*)::uAllocObject(sizeof(WhileFocused), WhileFocused__typeof());
    inst->_ObjInit_2();
    return inst;
}

void WhileFocused__OnGotFocus(WhileFocused* __this, ::uObject* sender, ::app::Uno::EventArgs* args)
{
    __this->Activate(NULL);
}

void WhileFocused__OnLostFocus(WhileFocused* __this, ::uObject* sender, ::app::Uno::EventArgs* args)
{
    __this->Deactivate();
}

void WhileFocused__OnRooted(WhileFocused* __this, ::app::Fuse::Node* elm)
{
    ::app::Fuse::Triggers::Trigger__OnRooted(__this, elm);
    ::uPtr< ::app::Fuse::NodeEvent__Fuse_Input_FocusGainedHandler__Fuse_Input_FocusGainedArgs*>(::app::Fuse::Input::Focus__get_Gained(NULL))->AddHandler(elm, ::uNewDelegateNonVirt(::app::Fuse::Input::FocusGainedHandler__typeof(), (const void*)WhileFocused__OnGotFocus, __this));
    ::uPtr< ::app::Fuse::NodeEvent__Fuse_Input_FocusLostHandler__Fuse_Input_FocusLostArgs*>(::app::Fuse::Input::Focus__get_Lost(NULL))->AddHandler(elm, ::uNewDelegateNonVirt(::app::Fuse::Input::FocusLostHandler__typeof(), (const void*)WhileFocused__OnLostFocus, __this));

    if (::app::Fuse::Input::Focus__get_FocusedNode(NULL) == elm)
    {
        __this->Activate(NULL);
    }
}

void WhileFocused__OnUnrooted(WhileFocused* __this, ::app::Fuse::Node* elm)
{
    ::uPtr< ::app::Fuse::NodeEvent__Fuse_Input_FocusGainedHandler__Fuse_Input_FocusGainedArgs*>(::app::Fuse::Input::Focus__get_Gained(NULL))->RemoveHandler(elm, ::uNewDelegateNonVirt(::app::Fuse::Input::FocusGainedHandler__typeof(), (const void*)WhileFocused__OnGotFocus, __this));
    ::uPtr< ::app::Fuse::NodeEvent__Fuse_Input_FocusLostHandler__Fuse_Input_FocusLostArgs*>(::app::Fuse::Input::Focus__get_Lost(NULL))->RemoveHandler(elm, ::uNewDelegateNonVirt(::app::Fuse::Input::FocusLostHandler__typeof(), (const void*)WhileFocused__OnLostFocus, __this));
    ::app::Fuse::Triggers::Trigger__OnUnrooted(__this, elm);
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Triggers\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

WhileFocusWithin__uType* WhileFocusWithin__typeof()
{
    static ::uStaticStrong<WhileFocusWithin__uType*> type;
    if (type != NULL) return type;

    type = (WhileFocusWithin__uType*)::uAllocClassType(sizeof(WhileFocusWithin__uType), "Fuse.Triggers.WhileFocusWithin", false, 0, 0, 0);

    type->SetBaseType(::app::Fuse::Triggers::WhileTrigger__typeof());
    type->__fp_OnRooted = (void(*)(::app::Fuse::Behavior*, ::app::Fuse::Node*))WhileFocusWithin__OnRooted;
    type->__fp_OnUnrooted = (void(*)(::app::Fuse::Behavior*, ::app::Fuse::Node*))WhileFocusWithin__OnUnrooted;

    type->SetFunctions(3,
        ::uNewFunction("get_IsOn", WhileFocusWithin__get_IsOn, 0, false, ::app::Uno::Bool__typeof()),
        ::uNewFunction(".ctor", WhileFocusWithin__New_1, 0, true, WhileFocusWithin__typeof()),
        ::uNewFunctionVoid("OnFocusChange", WhileFocusWithin__OnFocusChange, 0, false, ::uObject__typeof(), ::app::Uno::EventArgs__typeof()));

    ::uRegisterType(type);
    return type;
}

void WhileFocusWithin___ObjInit_3(WhileFocusWithin* __this)
{
    ::app::Fuse::Triggers::WhileTrigger___ObjInit_2(__this);
}

bool WhileFocusWithin__get_IsOn(WhileFocusWithin* __this)
{
    return ::app::Fuse::Input::Focus__IsWithin(NULL, __this->Node());
}

WhileFocusWithin* WhileFocusWithin__New_1(::uStatic* __this)
{
    WhileFocusWithin* inst = (WhileFocusWithin*)::uAllocObject(sizeof(WhileFocusWithin), WhileFocusWithin__typeof());
    inst->_ObjInit_3();
    return inst;
}

void WhileFocusWithin__OnFocusChange(WhileFocusWithin* __this, ::uObject* sender, ::app::Uno::EventArgs* args)
{
    __this->SetActive(__this->IsOn());
}

void WhileFocusWithin__OnRooted(WhileFocusWithin* __this, ::app::Fuse::Node* elm)
{
    ::app::Fuse::Triggers::Trigger__OnRooted(__this, elm);
    ::uPtr< ::app::Fuse::NodeEvent__Fuse_Input_FocusGainedHandler__Fuse_Input_FocusGainedArgs*>(::app::Fuse::Input::Focus__get_Gained(NULL))->AddHandler(elm, ::uNewDelegateNonVirt(::app::Fuse::Input::FocusGainedHandler__typeof(), (const void*)WhileFocusWithin__OnFocusChange, __this));
    ::uPtr< ::app::Fuse::NodeEvent__Fuse_Input_FocusLostHandler__Fuse_Input_FocusLostArgs*>(::app::Fuse::Input::Focus__get_Lost(NULL))->AddHandler(elm, ::uNewDelegateNonVirt(::app::Fuse::Input::FocusLostHandler__typeof(), (const void*)WhileFocusWithin__OnFocusChange, __this));
    __this->BypassSetActive(__this->IsOn());
}

void WhileFocusWithin__OnUnrooted(WhileFocusWithin* __this, ::app::Fuse::Node* elm)
{
    ::uPtr< ::app::Fuse::NodeEvent__Fuse_Input_FocusGainedHandler__Fuse_Input_FocusGainedArgs*>(::app::Fuse::Input::Focus__get_Gained(NULL))->RemoveHandler(elm, ::uNewDelegateNonVirt(::app::Fuse::Input::FocusGainedHandler__typeof(), (const void*)WhileFocusWithin__OnFocusChange, __this));
    ::uPtr< ::app::Fuse::NodeEvent__Fuse_Input_FocusLostHandler__Fuse_Input_FocusLostArgs*>(::app::Fuse::Input::Focus__get_Lost(NULL))->RemoveHandler(elm, ::uNewDelegateNonVirt(::app::Fuse::Input::FocusLostHandler__typeof(), (const void*)WhileFocusWithin__OnFocusChange, __this));
    ::app::Fuse::Triggers::Trigger__OnUnrooted(__this, elm);
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Controls\0.11.3\Triggers\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

WhileInteracting__uType* WhileInteracting__typeof()
{
    static ::uStaticStrong<WhileInteracting__uType*> type;
    if (type != NULL) return type;

    type = (WhileInteracting__uType*)::uAllocClassType(sizeof(WhileInteracting__uType), "Fuse.Triggers.WhileInteracting", false, 0, 1, 0);

    type->SetBaseType(::app::Fuse::Triggers::WhileTrigger__typeof());
    type->__fp_OnRooted = (void(*)(::app::Fuse::Behavior*, ::app::Fuse::Node*))WhileInteracting__OnRooted;
    type->__fp_OnUnrooted = (void(*)(::app::Fuse::Behavior*, ::app::Fuse::Node*))WhileInteracting__OnUnrooted;

    type->SetStrongRefs(
        "_control", offsetof(WhileInteracting, _control));

    type->SetFields(1,
        ::uNewField("_control", NULL, offsetof(WhileInteracting, _control), ::app::Fuse::Controls::Control__typeof()));

    type->SetFunctions(2,
        ::uNewFunction(".ctor", WhileInteracting__New_1, 0, true, WhileInteracting__typeof()),
        ::uNewFunctionVoid("OnInteractingChanged", WhileInteracting__OnInteractingChanged, 0, false, ::uObject__typeof(), ::uObject__typeof()));

    ::uRegisterType(type);
    return type;
}

void WhileInteracting___ObjInit_3(WhileInteracting* __this)
{
    ::app::Fuse::Triggers::WhileTrigger___ObjInit_2(__this);
}

WhileInteracting* WhileInteracting__New_1(::uStatic* __this)
{
    WhileInteracting* inst = (WhileInteracting*)::uAllocObject(sizeof(WhileInteracting), WhileInteracting__typeof());
    inst->_ObjInit_3();
    return inst;
}

void WhileInteracting__OnInteractingChanged(WhileInteracting* __this, ::uObject* s, ::uObject* a)
{
    __this->SetActive(::uPtr< ::app::Fuse::Controls::Control*>(__this->_control)->IsInteracting());
}

void WhileInteracting__OnRooted(WhileInteracting* __this, ::app::Fuse::Node* n)
{
    ::app::Fuse::Triggers::Trigger__OnRooted(__this, n);
    __this->_control = ::uAs< ::app::Fuse::Controls::Control*>(n, ::app::Fuse::Controls::Control__typeof());

    if (__this->_control == NULL)
    {
        U_THROW(::app::Uno::Exception__New_2(NULL, ::uGetConstString("WhileInteracting must be rooted in a Control")));
    }

    ::uPtr< ::app::Fuse::Controls::Control*>(__this->_control)->add_IsInteractingChanged(::uNewDelegateNonVirt(::app::Uno::EventHandler__typeof(), (const void*)WhileInteracting__OnInteractingChanged, __this));
    __this->BypassSetActive(::uPtr< ::app::Fuse::Controls::Control*>(__this->_control)->IsInteracting());
}

void WhileInteracting__OnUnrooted(WhileInteracting* __this, ::app::Fuse::Node* elm)
{
    ::uPtr< ::app::Fuse::Controls::Control*>(__this->_control)->remove_IsInteractingChanged(::uNewDelegateNonVirt(::app::Uno::EventHandler__typeof(), (const void*)WhileInteracting__OnInteractingChanged, __this));
    ::app::Fuse::Triggers::Trigger__OnUnrooted(__this, elm);
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Triggers\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

float WhileKeyboardVisible___deltaY;
::uStaticStrong< ::uObject*> WhileKeyboardVisible__Keyboard;

WhileKeyboardVisible__uType* WhileKeyboardVisible__typeof()
{
    static ::uStaticStrong<WhileKeyboardVisible__uType*> type;
    if (type != NULL) return type;

    type = (WhileKeyboardVisible__uType*)::uAllocClassType(sizeof(WhileKeyboardVisible__uType), "Fuse.Triggers.WhileKeyboardVisible", false, 0, 1, 0);

    type->SetBaseType(::app::Fuse::Triggers::Trigger__typeof());
    type->__fp_OnRooted = (void(*)(::app::Fuse::Behavior*, ::app::Fuse::Node*))WhileKeyboardVisible__OnRooted;
    type->__fp_OnUnrooted = (void(*)(::app::Fuse::Behavior*, ::app::Fuse::Node*))WhileKeyboardVisible__OnUnrooted;

    type->SetStrongRefs(
        "_node", offsetof(WhileKeyboardVisible, _node_1));

    type->SetFields(5,
        ::uNewField("_baseHeight", NULL, offsetof(WhileKeyboardVisible, _baseHeight), ::app::Uno::Float__typeof()),
        ::uNewField("_deltaY", &WhileKeyboardVisible___deltaY, 0, ::app::Uno::Float__typeof()),
        ::uNewField("_node", NULL, offsetof(WhileKeyboardVisible, _node_1), ::app::Fuse::Node__typeof()),
        ::uNewField("_threshold", NULL, offsetof(WhileKeyboardVisible, _threshold), ::app::Uno::Float__typeof()),
        ::uNewField("Keyboard", &WhileKeyboardVisible__Keyboard, 0, ::app::Fuse::ITranslationMode__typeof()));

    type->SetFunctions(4,
        ::uNewFunction("get_Threshold", WhileKeyboardVisible__get_Threshold, 0, false, ::app::Uno::Float__typeof()),
        ::uNewFunction("GetHeight", WhileKeyboardVisible__GetHeight, 0, false, ::app::Uno::Float__typeof(), ::app::Uno::Rect__typeof()),
        ::uNewFunction(".ctor", WhileKeyboardVisible__New_1, 0, true, WhileKeyboardVisible__typeof()),
        ::uNewFunctionVoid("OnBottomBarResize", WhileKeyboardVisible__OnBottomBarResize, 0, false, ::uObject__typeof(), ::app::Uno::Platform::SystemUIWillResizeEventArgs__typeof()));

    ::uRegisterType(type);
    return type;
}

void WhileKeyboardVisible___ObjInit_2(WhileKeyboardVisible* __this)
{
    __this->_threshold = 150.0f;
    ::app::Fuse::Triggers::Trigger___ObjInit_1(__this);
}

void WhileKeyboardVisible___TypeInit(::uStatic* __this)
{
    WhileKeyboardVisible__Keyboard = (::uObject*)::app::Fuse::Triggers::WhileKeyboardVisible_RelativeToKeyboardMode__New_1(NULL);
}

float WhileKeyboardVisible__get_Threshold(WhileKeyboardVisible* __this)
{
    return __this->_threshold;
}

float WhileKeyboardVisible__GetHeight(WhileKeyboardVisible* __this, ::app::Uno::Rect r)
{
    return r.Bottom - r.Top;
}

WhileKeyboardVisible* WhileKeyboardVisible__New_1(::uStatic* __this)
{
    WhileKeyboardVisible* inst = (WhileKeyboardVisible*)::uAllocObject(sizeof(WhileKeyboardVisible), WhileKeyboardVisible__typeof());
    inst->_ObjInit_2();
    return inst;
}

void WhileKeyboardVisible__OnBottomBarResize(WhileKeyboardVisible* __this, ::uObject* sender, ::app::Uno::Platform::SystemUIWillResizeEventArgs* args)
{
    float newHeight = __this->GetHeight(::uPtr< ::app::Uno::Platform::SystemUIWillResizeEventArgs*>(args)->EndFrame());
    float density = 1.0f;
    ::uObject* vp = ::uPtr< ::app::Fuse::Node*>(__this->_node_1)->Viewport();

    if (vp != NULL)
    {
        density = ::app::Fuse::IViewport::PointDensity(::uPtr< ::uObject*>(vp));
    }

    float newDeltaY = (newHeight - __this->_baseHeight) / density;

    if (newDeltaY > __this->Threshold())
    {
        WhileKeyboardVisible___deltaY = newDeltaY;
        __this->Activate(NULL);
    }
    else
    {
        __this->_baseHeight = __this->GetHeight(::uPtr< ::app::Uno::Platform::SystemUIWillResizeEventArgs*>(args)->EndFrame());
        __this->Deactivate();
    }
}

void WhileKeyboardVisible__OnRooted(WhileKeyboardVisible* __this, ::app::Fuse::Node* n)
{
    __this->_node_1 = n;
    {
        ::app::Uno::Platform::SystemUI__add_BottomFrameWillResize(NULL, ::uNewDelegateNonVirt(::app::Uno::EventHandler__Uno_Platform_SystemUIWillResizeEventArgs__typeof(), (const void*)WhileKeyboardVisible__OnBottomBarResize, __this));
        {
            __this->_baseHeight = __this->GetHeight(::app::Uno::Platform::SystemUI__get_BottomFrame(NULL));
        }
    }

    ::app::Fuse::Triggers::Trigger__OnRooted(__this, n);
}

void WhileKeyboardVisible__OnUnrooted(WhileKeyboardVisible* __this, ::app::Fuse::Node* n)
{
    __this->_node_1 = n;
    {
        ::app::Uno::Platform::SystemUI__remove_BottomFrameWillResize(NULL, ::uNewDelegateNonVirt(::app::Uno::EventHandler__Uno_Platform_SystemUIWillResizeEventArgs__typeof(), (const void*)WhileKeyboardVisible__OnBottomBarResize, __this));
    }

    ::app::Fuse::Triggers::Trigger__OnUnrooted(__this, n);
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Triggers\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

WhileKeyboardVisible_RelativeToKeyboardMode__uType* WhileKeyboardVisible_RelativeToKeyboardMode__typeof()
{
    static ::uStaticStrong<WhileKeyboardVisible_RelativeToKeyboardMode__uType*> type;
    if (type != NULL) return type;

    type = (WhileKeyboardVisible_RelativeToKeyboardMode__uType*)::uAllocClassType(sizeof(WhileKeyboardVisible_RelativeToKeyboardMode__uType), "Fuse.Triggers.WhileKeyboardVisible.RelativeToKeyboardMode", false, 1, 0, 0);

    type->__interface_0.__fp_GetAbsVector = (::app::Uno::Float3(*)(void*, ::app::Fuse::Translation*))WhileKeyboardVisible_RelativeToKeyboardMode__GetAbsVector;

    type->SetInterfaces(
        ::app::Fuse::ITranslationMode__typeof(), offsetof(WhileKeyboardVisible_RelativeToKeyboardMode__uType, __interface_0));

    return type;
}

void WhileKeyboardVisible_RelativeToKeyboardMode___ObjInit(WhileKeyboardVisible_RelativeToKeyboardMode* __this)
{
}

::app::Uno::Float3 WhileKeyboardVisible_RelativeToKeyboardMode__GetAbsVector(WhileKeyboardVisible_RelativeToKeyboardMode* __this, ::app::Fuse::Translation* t)
{
    return ::app::Uno::Float3__New_2(NULL, 0.0f, ::uPtr< ::app::Fuse::Translation*>(t)->Vector().Y * ::app::Fuse::Triggers::WhileKeyboardVisible___deltaY, 0.0f);
}

WhileKeyboardVisible_RelativeToKeyboardMode* WhileKeyboardVisible_RelativeToKeyboardMode__New_1(::uStatic* __this)
{
    WhileKeyboardVisible_RelativeToKeyboardMode* inst = (WhileKeyboardVisible_RelativeToKeyboardMode*)::uAllocObject(sizeof(WhileKeyboardVisible_RelativeToKeyboardMode), WhileKeyboardVisible_RelativeToKeyboardMode__typeof());
    inst->_ObjInit();
    return inst;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Triggers\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

::uStaticStrong< ::app::Fuse::PropertyHandle*> WhileLoading___whileLoadingProp;

WhileLoading__uType* WhileLoading__typeof()
{
    static ::uStaticStrong<WhileLoading__uType*> type;
    if (type != NULL) return type;

    type = (WhileLoading__uType*)::uAllocClassType(sizeof(WhileLoading__uType), "Fuse.Triggers.WhileLoading", false, 0, 0, 0);

    type->SetBaseType(::app::Fuse::Triggers::WhileTrigger__typeof());
    type->__fp_OnRooted = (void(*)(::app::Fuse::Behavior*, ::app::Fuse::Node*))WhileLoading__OnRooted;

    type->SetFields(1,
        ::uNewField("_whileLoadingProp", &WhileLoading___whileLoadingProp, 0, ::app::Fuse::PropertyHandle__typeof()));

    type->SetFunctions(3,
        ::uNewFunction("IsLoading", WhileLoading__IsLoading, 0, true, ::app::Uno::Bool__typeof(), ::app::Fuse::Node__typeof()),
        ::uNewFunction(".ctor", WhileLoading__New_1, 0, true, WhileLoading__typeof()),
        ::uNewFunctionVoid("SetState", WhileLoading__SetState, 0, true, ::app::Fuse::Node__typeof(), ::app::Uno::Bool__typeof()));

    ::uRegisterType(type);
    return type;
}

void WhileLoading___ObjInit_3(WhileLoading* __this)
{
    ::app::Fuse::Triggers::WhileTrigger___ObjInit_2(__this);
}

void WhileLoading___TypeInit(::uStatic* __this)
{
    WhileLoading___whileLoadingProp = ::app::Fuse::Properties__CreateHandle(NULL);
}

bool WhileLoading__IsLoading(::uStatic* __this, ::app::Fuse::Node* n)
{
    ::uObject* v = ::uPtr< ::app::Fuse::Properties*>(::uPtr< ::app::Fuse::Node*>(n)->Properties())->Get(WhileLoading___whileLoadingProp);

    if (!::uIs(v, ::app::Uno::Bool__typeof()))
    {
        return false;
    }

    return ::uUnbox< bool>(::app::Uno::Bool__typeof(), v);
}

WhileLoading* WhileLoading__New_1(::uStatic* __this)
{
    WhileLoading* inst = (WhileLoading*)::uAllocObject(sizeof(WhileLoading), WhileLoading__typeof());
    inst->_ObjInit_3();
    return inst;
}

void WhileLoading__OnRooted(WhileLoading* __this, ::app::Fuse::Node* n)
{
    ::app::Fuse::Triggers::Trigger__OnRooted(__this, n);
    __this->BypassSetActive(WhileLoading__IsLoading(NULL, n));
}

void WhileLoading__SetState(::uStatic* __this, ::app::Fuse::Node* n, bool loading)
{
    bool v = WhileLoading__IsLoading(NULL, n);

    if (v != loading)
    {
        ::uPtr< ::app::Fuse::Properties*>(::uPtr< ::app::Fuse::Node*>(n)->Properties())->Set(WhileLoading___whileLoadingProp, ::uBox(::app::Uno::Bool__typeof(), loading));

        for (::uObject* enum_123 = ::app::Uno::Collections::IEnumerable__Fuse_Behavior::GetEnumerator(::uPtr< ::uObject*>(n->Behaviors())); ::app::Uno::Collections::IEnumerator::MoveNext(::uPtr< ::uObject*>(enum_123)); )
        {
            ::app::Fuse::Behavior* b = ::app::Uno::Collections::IEnumerator__Fuse_Behavior::Current(::uPtr< ::uObject*>(enum_123));
            WhileLoading* wl = ::uAs< WhileLoading*>(b, WhileLoading__typeof());

            if (wl != NULL)
            {
                ::uPtr< WhileLoading*>(wl)->SetActive(loading);
            }
        }
    }
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Triggers\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

WhileNotFocused__uType* WhileNotFocused__typeof()
{
    static ::uStaticStrong<WhileNotFocused__uType*> type;
    if (type != NULL) return type;

    type = (WhileNotFocused__uType*)::uAllocClassType(sizeof(WhileNotFocused__uType), "Fuse.Triggers.WhileNotFocused", false, 0, 0, 0);

    type->SetBaseType(::app::Fuse::Triggers::Trigger__typeof());
    type->__fp_OnRooted = (void(*)(::app::Fuse::Behavior*, ::app::Fuse::Node*))WhileNotFocused__OnRooted;
    type->__fp_OnUnrooted = (void(*)(::app::Fuse::Behavior*, ::app::Fuse::Node*))WhileNotFocused__OnUnrooted;

    type->SetFunctions(3,
        ::uNewFunction(".ctor", WhileNotFocused__New_1, 0, true, WhileNotFocused__typeof()),
        ::uNewFunctionVoid("OnGotFocus", WhileNotFocused__OnGotFocus, 0, false, ::uObject__typeof(), ::app::Uno::EventArgs__typeof()),
        ::uNewFunctionVoid("OnLostFocus", WhileNotFocused__OnLostFocus, 0, false, ::uObject__typeof(), ::app::Uno::EventArgs__typeof()));

    ::uRegisterType(type);
    return type;
}

void WhileNotFocused___ObjInit_2(WhileNotFocused* __this)
{
    ::app::Fuse::Triggers::Trigger___ObjInit_1(__this);
}

WhileNotFocused* WhileNotFocused__New_1(::uStatic* __this)
{
    WhileNotFocused* inst = (WhileNotFocused*)::uAllocObject(sizeof(WhileNotFocused), WhileNotFocused__typeof());
    inst->_ObjInit_2();
    return inst;
}

void WhileNotFocused__OnGotFocus(WhileNotFocused* __this, ::uObject* sender, ::app::Uno::EventArgs* args)
{
    __this->Deactivate();
}

void WhileNotFocused__OnLostFocus(WhileNotFocused* __this, ::uObject* sender, ::app::Uno::EventArgs* args)
{
    __this->Activate(NULL);
}

void WhileNotFocused__OnRooted(WhileNotFocused* __this, ::app::Fuse::Node* elm)
{
    ::app::Fuse::Triggers::Trigger__OnRooted(__this, elm);
    ::uPtr< ::app::Fuse::NodeEvent__Fuse_Input_FocusGainedHandler__Fuse_Input_FocusGainedArgs*>(::app::Fuse::Input::Focus__get_Gained(NULL))->AddHandler(elm, ::uNewDelegateNonVirt(::app::Fuse::Input::FocusGainedHandler__typeof(), (const void*)WhileNotFocused__OnGotFocus, __this));
    ::uPtr< ::app::Fuse::NodeEvent__Fuse_Input_FocusLostHandler__Fuse_Input_FocusLostArgs*>(::app::Fuse::Input::Focus__get_Lost(NULL))->AddHandler(elm, ::uNewDelegateNonVirt(::app::Fuse::Input::FocusLostHandler__typeof(), (const void*)WhileNotFocused__OnLostFocus, __this));

    if (::app::Fuse::Input::Focus__get_FocusedNode(NULL) != elm)
    {
        __this->Activate(NULL);
    }
}

void WhileNotFocused__OnUnrooted(WhileNotFocused* __this, ::app::Fuse::Node* elm)
{
    ::uPtr< ::app::Fuse::NodeEvent__Fuse_Input_FocusGainedHandler__Fuse_Input_FocusGainedArgs*>(::app::Fuse::Input::Focus__get_Gained(NULL))->RemoveHandler(elm, ::uNewDelegateNonVirt(::app::Fuse::Input::FocusGainedHandler__typeof(), (const void*)WhileNotFocused__OnGotFocus, __this));
    ::uPtr< ::app::Fuse::NodeEvent__Fuse_Input_FocusLostHandler__Fuse_Input_FocusLostArgs*>(::app::Fuse::Input::Focus__get_Lost(NULL))->RemoveHandler(elm, ::uNewDelegateNonVirt(::app::Fuse::Input::FocusLostHandler__typeof(), (const void*)WhileNotFocused__OnLostFocus, __this));
    ::app::Fuse::Triggers::Trigger__OnUnrooted(__this, elm);
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Controls\0.11.3\Triggers\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

WhileScrollable__uType* WhileScrollable__typeof()
{
    static ::uStaticStrong<WhileScrollable__uType*> type;
    if (type != NULL) return type;

    type = (WhileScrollable__uType*)::uAllocClassType(sizeof(WhileScrollable__uType), "Fuse.Triggers.WhileScrollable", false, 0, 1, 0);

    type->SetBaseType(::app::Fuse::Triggers::WhileTrigger__typeof());
    type->__fp_OnRooted = (void(*)(::app::Fuse::Behavior*, ::app::Fuse::Node*))WhileScrollable__OnRooted;
    type->__fp_OnUnrooted = (void(*)(::app::Fuse::Behavior*, ::app::Fuse::Node*))WhileScrollable__OnUnrooted;

    type->SetStrongRefs(
        "_scrollable", offsetof(WhileScrollable, _scrollable));

    type->SetFields(1,
        ::uNewField("_scrollable", NULL, offsetof(WhileScrollable, _scrollable), ::app::Fuse::Controls::ScrollView__typeof()));

    type->SetFunctions(5,
        ::uNewFunction("get_ScrollDirections", WhileScrollable__get_ScrollDirections, 0, false, ::app::Fuse::Gestures::ScrollDirections__typeof()),
        ::uNewFunction(".ctor", WhileScrollable__New_1, 0, true, WhileScrollable__typeof()),
        ::uNewFunctionVoid("OnScrollPositionChanged", WhileScrollable__OnScrollPositionChanged, 0, false, ::uObject__typeof(), ::app::Uno::EventArgs__typeof()),
        ::uNewFunctionVoid("set_ScrollDirections", WhileScrollable__set_ScrollDirections, 0, false, ::app::Fuse::Gestures::ScrollDirections__typeof()),
        ::uNewFunctionVoid("Update", WhileScrollable__Update, 0, false));

    ::uRegisterType(type);
    return type;
}

void WhileScrollable___ObjInit_3(WhileScrollable* __this)
{
    ::app::Fuse::Triggers::WhileTrigger___ObjInit_2(__this);
}

int WhileScrollable__get_ScrollDirections(WhileScrollable* __this)
{
    return __this->_ScrollDirections;
}

WhileScrollable* WhileScrollable__New_1(::uStatic* __this)
{
    WhileScrollable* inst = (WhileScrollable*)::uAllocObject(sizeof(WhileScrollable), WhileScrollable__typeof());
    inst->_ObjInit_3();
    return inst;
}

void WhileScrollable__OnRooted(WhileScrollable* __this, ::app::Fuse::Node* elm)
{
    ::app::Fuse::Triggers::Trigger__OnRooted(__this, elm);
    __this->_scrollable = ::uAs< ::app::Fuse::Controls::ScrollView*>(elm, ::app::Fuse::Controls::ScrollView__typeof());

    if (__this->_scrollable != NULL)
    {
        ::uPtr< ::app::Fuse::Controls::ScrollView*>(__this->_scrollable)->add_ScrollPositionChanged(::uNewDelegateNonVirt(::app::Uno::EventHandler__typeof(), (const void*)WhileScrollable__OnScrollPositionChanged, __this));
        __this->Update();
    }
}

void WhileScrollable__OnScrollPositionChanged(WhileScrollable* __this, ::uObject* sender, ::app::Uno::EventArgs* args)
{
    __this->Update();
}

void WhileScrollable__OnUnrooted(WhileScrollable* __this, ::app::Fuse::Node* elm)
{
    if (__this->_scrollable != NULL)
    {
        ::uPtr< ::app::Fuse::Controls::ScrollView*>(__this->_scrollable)->remove_ScrollPositionChanged(::uNewDelegateNonVirt(::app::Uno::EventHandler__typeof(), (const void*)WhileScrollable__OnScrollPositionChanged, __this));
        __this->_scrollable = NULL;
    }

    ::app::Fuse::Triggers::Trigger__OnUnrooted(__this, elm);
}

void WhileScrollable__set_ScrollDirections(WhileScrollable* __this, int value)
{
    __this->_ScrollDirections = value;
}

void WhileScrollable__Update(WhileScrollable* __this)
{
    ::app::Uno::Float2 p = ::uPtr< ::app::Fuse::Controls::ScrollView*>(__this->_scrollable)->ScrollPosition();
    ::app::Uno::Float2 mx = ::uPtr< ::app::Fuse::Controls::ScrollView*>(__this->_scrollable)->MaxScroll();
    ::app::Uno::Float2 mn = ::uPtr< ::app::Fuse::Controls::ScrollView*>(__this->_scrollable)->MinScroll();
    bool set = (((((__this->ScrollDirections() & 1) == 1) && ((p.X - 1e-05f) > mn.X)) || (((__this->ScrollDirections() & 2) == 2) && ((p.X + 1e-05f) < mx.X))) || (((__this->ScrollDirections() & 4) == 4) && ((p.Y - 1e-05f) > mn.Y))) || (((__this->ScrollDirections() & 8) == 8) && ((p.Y + 1e-05f) < mx.Y));
    __this->SetActive(set);
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Triggers\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

WhileTrigger__uType* WhileTrigger__typeof()
{
    static ::uStaticStrong<WhileTrigger__uType*> type;
    if (type != NULL) return type;

    type = (WhileTrigger__uType*)::uAllocClassType(sizeof(WhileTrigger__uType), "Fuse.Triggers.WhileTrigger", false, 0, 0, 0);

    type->SetBaseType(::app::Fuse::Triggers::Trigger__typeof());

    type->SetFunctions(5,
        ::uNewFunctionVoid("ActionDeactivate", WhileTrigger__ActionDeactivate, 0, false),
        ::uNewFunctionVoid("BypassSetActive", WhileTrigger__BypassSetActive, 0, false, ::app::Uno::Bool__typeof()),
        ::uNewFunction("get_Invert", WhileTrigger__get_Invert, 0, false, ::app::Uno::Bool__typeof()),
        ::uNewFunctionVoid("set_Invert", WhileTrigger__set_Invert, 0, false, ::app::Uno::Bool__typeof()),
        ::uNewFunctionVoid("SetActive", WhileTrigger__SetActive, 0, false, ::app::Uno::Bool__typeof()));

    ::uRegisterType(type);
    return type;
}

void WhileTrigger___ObjInit_2(WhileTrigger* __this)
{
    ::app::Fuse::Triggers::Trigger___ObjInit_1(__this);
}

void WhileTrigger__ActionDeactivate(WhileTrigger* __this)
{
    __this->SetActive(false);
}

void WhileTrigger__BypassSetActive(WhileTrigger* __this, bool on)
{
    if (on != __this->Invert())
    {
        __this->BypassActivate();
    }
    else
    {
        __this->BypassDeactivate();
    }
}

bool WhileTrigger__get_Invert(WhileTrigger* __this)
{
    return __this->_Invert;
}

void WhileTrigger__set_Invert(WhileTrigger* __this, bool value)
{
    __this->_Invert = value;
}

void WhileTrigger__SetActive(WhileTrigger* __this, bool on)
{
    if (on != __this->Invert())
    {
        __this->Activate(NULL);
    }
    else
    {
        __this->Deactivate();
    }
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Triggers\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

WhileTrue__uType* WhileTrue__typeof()
{
    static ::uStaticStrong<WhileTrue__uType*> type;
    if (type != NULL) return type;

    type = (WhileTrue__uType*)::uAllocClassType(sizeof(WhileTrue__uType), "Fuse.Triggers.WhileTrue", false, 1, 0, 0);

    type->SetBaseType(::app::Fuse::Triggers::WhileBool__typeof());
    type->__fp_get_IsOn = (bool(*)(::app::Fuse::Triggers::WhileValue__bool*))WhileTrue__get_IsOn;

    type->SetInterfaces(
        ::app::Fuse::Triggers::IValue__bool__typeof(), offsetof(WhileTrue__uType, __interface_0));

    type->SetFunctions(1,
        ::uNewFunction(".ctor", WhileTrue__New_1, 0, true, WhileTrue__typeof()));

    ::uRegisterType(type);
    return type;
}

void WhileTrue___ObjInit_5(WhileTrue* __this)
{
    ::app::Fuse::Triggers::WhileBool___ObjInit_4(__this);
}

bool WhileTrue__get_IsOn(WhileTrue* __this)
{
    return __this->Value_1();
}

WhileTrue* WhileTrue__New_1(::uStatic* __this)
{
    WhileTrue* inst = (WhileTrue*)::uAllocObject(sizeof(WhileTrue), WhileTrue__typeof());
    inst->_ObjInit_5();
    return inst;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Triggers\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

WhileVisible__uType* WhileVisible__typeof()
{
    static ::uStaticStrong<WhileVisible__uType*> type;
    if (type != NULL) return type;

    type = (WhileVisible__uType*)::uAllocClassType(sizeof(WhileVisible__uType), "Fuse.Triggers.WhileVisible", false, 0, 0, 0);

    type->SetBaseType(::app::Fuse::Triggers::WhileTrigger__typeof());
    type->__fp_OnRooted = (void(*)(::app::Fuse::Behavior*, ::app::Fuse::Node*))WhileVisible__OnRooted;
    type->__fp_OnUnrooted = (void(*)(::app::Fuse::Behavior*, ::app::Fuse::Node*))WhileVisible__OnUnrooted;

    type->SetFunctions(2,
        ::uNewFunction(".ctor", WhileVisible__New_1, 0, true, WhileVisible__typeof()),
        ::uNewFunctionVoid("OnIsVisibleChanged", WhileVisible__OnIsVisibleChanged, 0, false, ::uObject__typeof(), ::app::Uno::EventArgs__typeof()));

    ::uRegisterType(type);
    return type;
}

void WhileVisible___ObjInit_3(WhileVisible* __this)
{
    ::app::Fuse::Triggers::WhileTrigger___ObjInit_2(__this);
}

WhileVisible* WhileVisible__New_1(::uStatic* __this)
{
    WhileVisible* inst = (WhileVisible*)::uAllocObject(sizeof(WhileVisible), WhileVisible__typeof());
    inst->_ObjInit_3();
    return inst;
}

void WhileVisible__OnIsVisibleChanged(WhileVisible* __this, ::uObject* sender, ::app::Uno::EventArgs* args)
{
    __this->SetActive(::uPtr< ::app::Fuse::Node*>(__this->Node())->IsVisible());
}

void WhileVisible__OnRooted(WhileVisible* __this, ::app::Fuse::Node* elm)
{
    ::app::Fuse::Triggers::Trigger__OnRooted(__this, elm);
    ::uPtr< ::app::Fuse::Node*>(elm)->add_IsVisibleChanged(::uNewDelegateNonVirt(::app::Uno::EventHandler__typeof(), (const void*)WhileVisible__OnIsVisibleChanged, __this));
    __this->BypassSetActive(elm->IsVisible());
}

void WhileVisible__OnUnrooted(WhileVisible* __this, ::app::Fuse::Node* elm)
{
    ::uPtr< ::app::Fuse::Node*>(elm)->remove_IsVisibleChanged(::uNewDelegateNonVirt(::app::Uno::EventHandler__typeof(), (const void*)WhileVisible__OnIsVisibleChanged, __this));
    ::app::Fuse::Triggers::Trigger__OnUnrooted(__this, elm);
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Triggers\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

WhileWindowAspect__uType* WhileWindowAspect__typeof()
{
    static ::uStaticStrong<WhileWindowAspect__uType*> type;
    if (type != NULL) return type;

    type = (WhileWindowAspect__uType*)::uAllocClassType(sizeof(WhileWindowAspect__uType), "Fuse.Triggers.WhileWindowAspect", false, 0, 0, 0);

    type->SetBaseType(::app::Fuse::Triggers::WhileTrigger__typeof());
    type->__fp_OnRooted = (void(*)(::app::Fuse::Behavior*, ::app::Fuse::Node*))WhileWindowAspect__OnRooted;
    type->__fp_OnUnrooted = (void(*)(::app::Fuse::Behavior*, ::app::Fuse::Node*))WhileWindowAspect__OnUnrooted;

    type->SetFunctions(3,
        ::uNewFunction("get_Aspect", WhileWindowAspect__get_Aspect, 0, false, ::app::Uno::Float__typeof()),
        ::uNewFunction("get_IsActive", type->__fp_get_IsActive, offsetof(WhileWindowAspect__uType, __fp_get_IsActive), false, ::app::Uno::Bool__typeof()),
        ::uNewFunctionVoid("OnResize", WhileWindowAspect__OnResize, 0, false, ::uObject__typeof(), ::app::Uno::EventArgs__typeof()));

    ::uRegisterType(type);
    return type;
}

void WhileWindowAspect___ObjInit_3(WhileWindowAspect* __this)
{
    ::app::Fuse::Triggers::WhileTrigger___ObjInit_2(__this);
}

float WhileWindowAspect__get_Aspect(WhileWindowAspect* __this)
{
    ::app::Uno::Float2 sz = ::app::Fuse::IViewport::Size(::uPtr< ::uObject*>(::uPtr< ::app::Fuse::Node*>(__this->Node())->Viewport()));
    return sz.X / sz.Y;
}

void WhileWindowAspect__OnResize(WhileWindowAspect* __this, ::uObject* sender, ::app::Uno::EventArgs* args)
{
    __this->SetActive(__this->IsActive());
}

void WhileWindowAspect__OnRooted(WhileWindowAspect* __this, ::app::Fuse::Node* elm)
{
    ::app::Fuse::Triggers::Trigger__OnRooted(__this, elm);
    ::uPtr< ::app::Uno::Platform::Window*>(::uPtr< ::app::Uno::Application*>(::app::Uno::Application__get_Current(NULL))->Window())->add_Resized(::uNewDelegateNonVirt(::app::Uno::EventHandler__typeof(), (const void*)WhileWindowAspect__OnResize, __this));
    __this->BypassSetActive(__this->IsActive());
}

void WhileWindowAspect__OnUnrooted(WhileWindowAspect* __this, ::app::Fuse::Node* elm)
{
    ::uPtr< ::app::Uno::Platform::Window*>(::uPtr< ::app::Uno::Application*>(::app::Uno::Application__get_Current(NULL))->Window())->remove_Resized(::uNewDelegateNonVirt(::app::Uno::EventHandler__typeof(), (const void*)WhileWindowAspect__OnResize, __this));
    ::app::Fuse::Triggers::Trigger__OnUnrooted(__this, elm);
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Triggers\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

WhileWindowLandscape__uType* WhileWindowLandscape__typeof()
{
    static ::uStaticStrong<WhileWindowLandscape__uType*> type;
    if (type != NULL) return type;

    type = (WhileWindowLandscape__uType*)::uAllocClassType(sizeof(WhileWindowLandscape__uType), "Fuse.Triggers.WhileWindowLandscape", false, 0, 0, 0);

    type->SetBaseType(::app::Fuse::Triggers::WhileWindowAspect__typeof());
    type->__fp_get_IsActive = (bool(*)(::app::Fuse::Triggers::WhileWindowAspect*))WhileWindowLandscape__get_IsActive;

    type->SetFunctions(1,
        ::uNewFunction(".ctor", WhileWindowLandscape__New_1, 0, true, WhileWindowLandscape__typeof()));

    ::uRegisterType(type);
    return type;
}

void WhileWindowLandscape___ObjInit_4(WhileWindowLandscape* __this)
{
    ::app::Fuse::Triggers::WhileWindowAspect___ObjInit_3(__this);
}

bool WhileWindowLandscape__get_IsActive(WhileWindowLandscape* __this)
{
    return __this->Aspect() > 1.0f;
}

WhileWindowLandscape* WhileWindowLandscape__New_1(::uStatic* __this)
{
    WhileWindowLandscape* inst = (WhileWindowLandscape*)::uAllocObject(sizeof(WhileWindowLandscape), WhileWindowLandscape__typeof());
    inst->_ObjInit_4();
    return inst;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Triggers\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

WhileWindowPortrait__uType* WhileWindowPortrait__typeof()
{
    static ::uStaticStrong<WhileWindowPortrait__uType*> type;
    if (type != NULL) return type;

    type = (WhileWindowPortrait__uType*)::uAllocClassType(sizeof(WhileWindowPortrait__uType), "Fuse.Triggers.WhileWindowPortrait", false, 0, 0, 0);

    type->SetBaseType(::app::Fuse::Triggers::WhileWindowAspect__typeof());
    type->__fp_get_IsActive = (bool(*)(::app::Fuse::Triggers::WhileWindowAspect*))WhileWindowPortrait__get_IsActive;

    type->SetFunctions(1,
        ::uNewFunction(".ctor", WhileWindowPortrait__New_1, 0, true, WhileWindowPortrait__typeof()));

    ::uRegisterType(type);
    return type;
}

void WhileWindowPortrait___ObjInit_4(WhileWindowPortrait* __this)
{
    ::app::Fuse::Triggers::WhileWindowAspect___ObjInit_3(__this);
}

bool WhileWindowPortrait__get_IsActive(WhileWindowPortrait* __this)
{
    return __this->Aspect() <= 1.0f;
}

WhileWindowPortrait* WhileWindowPortrait__New_1(::uStatic* __this)
{
    WhileWindowPortrait* inst = (WhileWindowPortrait*)::uAllocObject(sizeof(WhileWindowPortrait), WhileWindowPortrait__typeof());
    inst->_ObjInit_4();
    return inst;
}

}}}
