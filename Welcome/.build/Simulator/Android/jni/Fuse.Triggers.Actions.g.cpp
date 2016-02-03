// This file was generated based on '(multiple files)'.
// WARNING: Changes might be lost if you edit this file directly.

#include <Fuse.Controls.HTML.h>
#include <Fuse.Controls.IWebView.h>
#include <Fuse.Controls.Panel.h>
#include <Fuse.Diagnostics.h>
#include <Fuse.Elements.Element.h>
#include <Fuse.Input.Focus.h>
#include <Fuse.Internal.Blender-1.h>
#include <Fuse.Internal.BlenderMap.h>
#include <Fuse.Launcher.h>
#include <Fuse.Node.h>
#include <Fuse.NodeEvent-2.h>
#include <Fuse.NodeEventArgs.h>
#include <Fuse.NodeEventHandler.h>
#include <Fuse.NodeEventMode.h>
#include <Fuse.Scripting.IEventSerializer.h>
#include <Fuse.Time.h>
#include <Fuse.Triggers.Actions.BringIntoView.h>
#include <Fuse.Triggers.Actions.BringToFront.h>
#include <Fuse.Triggers.Actions.Call.h>
#include <Fuse.Triggers.Actions.Callback.h>
#include <Fuse.Triggers.Actions.Collapse.h>
#include <Fuse.Triggers.Actions.DebugAction.h>
#include <Fuse.Triggers.Actions.DebugFrame.h>
#include <Fuse.Triggers.Actions.DebugProperty-1.h>
#include <Fuse.Triggers.Actions.DebugTime.h>
#include <Fuse.Triggers.Actions.EvaluateJS.h>
#include <Fuse.Triggers.Actions.GiveFocus.h>
#include <Fuse.Triggers.Actions.Hide.h>
#include <Fuse.Triggers.Actions.ICollapse.h>
#include <Fuse.Triggers.Actions.IHide.h>
#include <Fuse.Triggers.Actions.IShow.h>
#include <Fuse.Triggers.Actions.ITaggedDebugProperty.h>
#include <Fuse.Triggers.Actions.JSEventArgs.h>
#include <Fuse.Triggers.Actions.JSEventHandler.h>
#include <Fuse.Triggers.Actions.LaunchEmail.h>
#include <Fuse.Triggers.Actions.LaunchMaps.h>
#include <Fuse.Triggers.Actions.LaunchUri.h>
#include <Fuse.Triggers.Actions.LoadHtml.h>
#include <Fuse.Triggers.Actions.LoadUrl.h>
#include <Fuse.Triggers.Actions.Pause.h>
#include <Fuse.Triggers.Actions.PlaybackAction.h>
#include <Fuse.Triggers.Actions.PlayTo.h>
#include <Fuse.Triggers.Actions.Pulse.h>
#include <Fuse.Triggers.Actions.RaiseUserEvent.h>
#include <Fuse.Triggers.Actions.ReleaseFocus.h>
#include <Fuse.Triggers.Actions.Reload.h>
#include <Fuse.Triggers.Actions.Resume.h>
#include <Fuse.Triggers.Actions.SendToBack.h>
#include <Fuse.Triggers.Actions.Set-1.h>
#include <Fuse.Triggers.Actions.Show.h>
#include <Fuse.Triggers.Actions.Stop.h>
#include <Fuse.Triggers.Actions.StopLoading.h>
#include <Fuse.Triggers.Actions.TransitionLayout.h>
#include <Fuse.Triggers.Actions.TransitionState.h>
#include <Fuse.Triggers.Actions.TransitionStateType.h>
#include <Fuse.Triggers.Actions.TriggerAction.h>
#include <Fuse.Triggers.Actions.TriggerDirection.h>
#include <Fuse.Triggers.Actions.UserEventArg.h>
#include <Fuse.Triggers.Actions.WebViewNavAction.h>
#include <Fuse.Triggers.IPlayback.h>
#include <Fuse.Triggers.LayoutTransition.h>
#include <Fuse.Triggers.LayoutTransitionedArgs.h>
#include <Fuse.Triggers.LayoutTransitionedHandler.h>
#include <Fuse.Triggers.StateGroup.h>
#include <Fuse.Triggers.WhileBool.h>
#include <Fuse.Triggers.WhileValue-1.h>
#include <Fuse.UpdateManager.h>
#include <Fuse.UserEvent.h>
#include <Uno.Action.h>
#include <Uno.Action-1.h>
#include <Uno.ArgumentNullException.h>
#include <Uno.Bool.h>
#include <Uno.Collections.Dictionary-2.h>
#include <Uno.Collections.ICollection-1.h>
#include <Uno.Collections.IEnumerable-1.h>
#include <Uno.Collections.IEnumerator.h>
#include <Uno.Collections.IEnumerator-1.h>
#include <Uno.Collections.IList-1.h>
#include <Uno.Collections.List-1.Enumerator.h>
#include <Uno.Collections.List-1.h>
#include <Uno.Delegate.h>
#include <Uno.Diagnostics.Debug.h>
#include <Uno.Diagnostics.DebugMessageType.h>
#include <Uno.Double.h>
#include <Uno.Float.h>
#include <Uno.Float2.h>
#include <Uno.Float3.h>
#include <Uno.Float4x4.h>
#include <Uno.Int.h>
#include <Uno.Matrix.h>
#include <Uno.Net.Http.Uri.h>
#include <Uno.Object.h>
#include <Uno.String.h>
#include <Uno.UX.Expression-1.h>
#include <Uno.UX.Property-1.h>
static uString* STRINGS[12];
static uType* TYPES[38];

namespace g{
namespace Fuse{
namespace Triggers{
namespace Actions{

// C:\ProgramData\Uno\Packages\Fuse.Elements\0.19.3\Triggers\Actions\$.uno(9)
// --------------------------------------------------------------------------

// public sealed class BringIntoView :9
// {
::g::Fuse::Triggers::Actions::TriggerAction_type* BringIntoView_typeof()
{
    static uSStrong< ::g::Fuse::Triggers::Actions::TriggerAction_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 7;
    options.ObjectSize = sizeof(BringIntoView);
    options.TypeSize = sizeof(::g::Fuse::Triggers::Actions::TriggerAction_type);
    type = (::g::Fuse::Triggers::Actions::TriggerAction_type*)uClassType::New("Fuse.Triggers.Actions.BringIntoView", options);
    type->SetBase(::g::Fuse::Triggers::Actions::TriggerAction_typeof());
    type->fp_ctor_ = (void*)BringIntoView__New1_fn;
    type->fp_Perform = (void(*)(::g::Fuse::Triggers::Actions::TriggerAction*, ::g::Fuse::Node*))BringIntoView__Perform_fn;
    ::TYPES[0] = ::g::Fuse::Elements::Element_typeof();
    type->SetFields(7);
    type->Reflection.SetFunctions(1,
        new uFunction(".ctor", NULL, (void*)BringIntoView__New1_fn, 0, true, BringIntoView_typeof(), 0));
    return type;
}

// public generated BringIntoView() :9
void BringIntoView__ctor_1_fn(BringIntoView* __this)
{
    __this->ctor_1();
}

// public generated BringIntoView New() :9
void BringIntoView__New1_fn(BringIntoView** __retval)
{
    *__retval = BringIntoView::New1();
}

// protected override sealed void Perform(Fuse.Node target) :11
void BringIntoView__Perform_fn(BringIntoView* __this, ::g::Fuse::Node* target)
{
    ::g::Fuse::Elements::Element* elm = uAs< ::g::Fuse::Elements::Element*>(target, ::TYPES[0/*Fuse.Elements.Element*/]);

    if (elm != NULL)
        uPtr(elm)->BringIntoView();
}

// public generated BringIntoView() [instance] :9
void BringIntoView::ctor_1()
{
    ctor_();
}

// public generated BringIntoView New() [static] :9
BringIntoView* BringIntoView::New1()
{
    BringIntoView* obj1 = (BringIntoView*)uNew(BringIntoView_typeof());
    obj1->ctor_1();
    return obj1;
}
// }

// C:\ProgramData\Uno\Packages\Fuse.Controls\0.19.3\Triggers\$.uno(10)
// -------------------------------------------------------------------

// public sealed class BringToFront :10
// {
::g::Fuse::Triggers::Actions::TriggerAction_type* BringToFront_typeof()
{
    static uSStrong< ::g::Fuse::Triggers::Actions::TriggerAction_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 8;
    options.ObjectSize = sizeof(BringToFront);
    options.TypeSize = sizeof(::g::Fuse::Triggers::Actions::TriggerAction_type);
    type = (::g::Fuse::Triggers::Actions::TriggerAction_type*)uClassType::New("Fuse.Triggers.Actions.BringToFront", options);
    type->SetBase(::g::Fuse::Triggers::Actions::TriggerAction_typeof());
    type->fp_ctor_ = (void*)BringToFront__New1_fn;
    type->fp_Perform = (void(*)(::g::Fuse::Triggers::Actions::TriggerAction*, ::g::Fuse::Node*))BringToFront__Perform_fn;
    ::TYPES[1] = ::g::Fuse::Controls::Panel_typeof();
    ::TYPES[2] = ::g::Fuse::Node_typeof();
    type->SetFields(7,
        ::g::Fuse::Node_typeof(), offsetof(::g::Fuse::Triggers::Actions::BringToFront, _Target), 0);
    type->Reflection.SetFunctions(3,
        new uFunction(".ctor", NULL, (void*)BringToFront__New1_fn, 0, true, BringToFront_typeof(), 0),
        new uFunction("get_Target", NULL, (void*)BringToFront__get_Target_fn, 0, false, ::g::Fuse::Node_typeof(), 0),
        new uFunction("set_Target", NULL, (void*)BringToFront__set_Target_fn, 0, false, uVoid_typeof(), 1, ::g::Fuse::Node_typeof()));
    return type;
}

// public generated BringToFront() :10
void BringToFront__ctor_1_fn(BringToFront* __this)
{
    __this->ctor_1();
}

// public generated BringToFront New() :10
void BringToFront__New1_fn(BringToFront** __retval)
{
    *__retval = BringToFront::New1();
}

// protected override sealed void Perform(Fuse.Node target) :14
void BringToFront__Perform_fn(BringToFront* __this, ::g::Fuse::Node* target)
{
    ::g::Fuse::Node* ind1 = __this->Target();
    ::g::Fuse::Node* elm = (ind1 != NULL) ? ind1 : target;

    if (elm != NULL)
    {
        ::g::Fuse::Controls::Panel* panel = uAs< ::g::Fuse::Controls::Panel*>(uPtr(elm)->Parent(), ::TYPES[1/*Fuse.Controls.Panel*/]);

        if (panel != NULL)
            uPtr(panel)->BringToFront(elm);
    }
}

// public generated Fuse.Node get_Target() :12
void BringToFront__get_Target_fn(BringToFront* __this, ::g::Fuse::Node** __retval)
{
    *__retval = __this->Target();
}

// public generated void set_Target(Fuse.Node value) :12
void BringToFront__set_Target_fn(BringToFront* __this, ::g::Fuse::Node* value)
{
    __this->Target(value);
}

// public generated BringToFront() [instance] :10
void BringToFront::ctor_1()
{
    ctor_();
}

// public generated Fuse.Node get_Target() [instance] :12
::g::Fuse::Node* BringToFront::Target()
{
    return _Target;
}

// public generated void set_Target(Fuse.Node value) [instance] :12
void BringToFront::Target(::g::Fuse::Node* value)
{
    _Target = value;
}

// public generated BringToFront New() [static] :10
BringToFront* BringToFront::New1()
{
    BringToFront* obj2 = (BringToFront*)uNew(BringToFront_typeof());
    obj2->ctor_1();
    return obj2;
}
// }

// C:\ProgramData\Uno\Packages\Fuse.Launcher\0.19.3\$.uno(193)
// -----------------------------------------------------------

// public sealed class Call :193
// {
::g::Fuse::Triggers::Actions::TriggerAction_type* Call_typeof()
{
    static uSStrong< ::g::Fuse::Triggers::Actions::TriggerAction_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 8;
    options.ObjectSize = sizeof(Call);
    options.TypeSize = sizeof(::g::Fuse::Triggers::Actions::TriggerAction_type);
    type = (::g::Fuse::Triggers::Actions::TriggerAction_type*)uClassType::New("Fuse.Triggers.Actions.Call", options);
    type->SetBase(::g::Fuse::Triggers::Actions::TriggerAction_typeof());
    type->fp_ctor_ = (void*)Call__New1_fn;
    type->fp_Perform = (void(*)(::g::Fuse::Triggers::Actions::TriggerAction*, ::g::Fuse::Node*))Call__Perform_fn;
    type->SetFields(7,
        ::g::Uno::String_typeof(), offsetof(::g::Fuse::Triggers::Actions::Call, _Number), 0);
    type->Reflection.SetFunctions(3,
        new uFunction(".ctor", NULL, (void*)Call__New1_fn, 0, true, Call_typeof(), 0),
        new uFunction("get_Number", NULL, (void*)Call__get_Number_fn, 0, false, ::g::Uno::String_typeof(), 0),
        new uFunction("set_Number", NULL, (void*)Call__set_Number_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::String_typeof()));
    return type;
}

// public generated Call() :193
void Call__ctor_1_fn(Call* __this)
{
    __this->ctor_1();
}

// public generated Call New() :193
void Call__New1_fn(Call** __retval)
{
    *__retval = Call::New1();
}

// public generated string get_Number() :195
void Call__get_Number_fn(Call* __this, uString** __retval)
{
    *__retval = __this->Number();
}

// public generated void set_Number(string value) :195
void Call__set_Number_fn(Call* __this, uString* value)
{
    __this->Number(value);
}

// protected override sealed void Perform(Fuse.Node target) :197
void Call__Perform_fn(Call* __this, ::g::Fuse::Node* target)
{
    ::g::Fuse::Launcher::LaunchCall(__this->Number());
}

// public generated Call() [instance] :193
void Call::ctor_1()
{
    ctor_();
}

// public generated string get_Number() [instance] :195
uString* Call::Number()
{
    return _Number;
}

// public generated void set_Number(string value) [instance] :195
void Call::Number(uString* value)
{
    _Number = value;
}

// public generated Call New() [static] :193
Call* Call::New1()
{
    Call* obj1 = (Call*)uNew(Call_typeof());
    obj1->ctor_1();
    return obj1;
}
// }

// C:\ProgramData\Uno\Packages\Fuse.Triggers\0.19.3\Actions\$.uno(7)
// -----------------------------------------------------------------

// public sealed class Callback :7
// {
::g::Fuse::Triggers::Actions::TriggerAction_type* Callback_typeof()
{
    static uSStrong< ::g::Fuse::Triggers::Actions::TriggerAction_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 9;
    options.ObjectSize = sizeof(Callback);
    options.TypeSize = sizeof(::g::Fuse::Triggers::Actions::TriggerAction_type);
    type = (::g::Fuse::Triggers::Actions::TriggerAction_type*)uClassType::New("Fuse.Triggers.Actions.Callback", options);
    type->SetBase(::g::Fuse::Triggers::Actions::TriggerAction_typeof());
    type->fp_ctor_ = (void*)Callback__New1_fn;
    type->fp_Perform = (void(*)(::g::Fuse::Triggers::Actions::TriggerAction*, ::g::Fuse::Node*))Callback__Perform_fn;
    ::TYPES[3] = ::g::Uno::Delegate_typeof();
    ::TYPES[4] = ::g::Uno::Action_typeof();
    ::TYPES[5] = ::g::Fuse::NodeEventHandler_typeof();
    ::TYPES[6] = uObject_typeof();
    type->SetFields(7,
        ::g::Uno::Action_typeof(), offsetof(::g::Fuse::Triggers::Actions::Callback, _Action), 0,
        ::g::Fuse::NodeEventHandler_typeof(), offsetof(::g::Fuse::Triggers::Actions::Callback, Handler1), 0);
    type->Reflection.SetFunctions(5,
        new uFunction("get_Action", NULL, (void*)Callback__get_Action_fn, 0, false, ::g::Uno::Action_typeof(), 0),
        new uFunction("set_Action", NULL, (void*)Callback__set_Action_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::Action_typeof()),
        new uFunction("add_Handler", NULL, (void*)Callback__add_Handler_fn, 0, false, uVoid_typeof(), 1, ::g::Fuse::NodeEventHandler_typeof()),
        new uFunction("remove_Handler", NULL, (void*)Callback__remove_Handler_fn, 0, false, uVoid_typeof(), 1, ::g::Fuse::NodeEventHandler_typeof()),
        new uFunction(".ctor", NULL, (void*)Callback__New1_fn, 0, true, Callback_typeof(), 0));
    return type;
}

// public generated Callback() :7
void Callback__ctor_1_fn(Callback* __this)
{
    __this->ctor_1();
}

// public generated Uno.Action get_Action() :9
void Callback__get_Action_fn(Callback* __this, uDelegate** __retval)
{
    *__retval = __this->Action();
}

// public generated void set_Action(Uno.Action value) :9
void Callback__set_Action_fn(Callback* __this, uDelegate* value)
{
    __this->Action(value);
}

// public generated void add_Handler(Fuse.NodeEventHandler value) :11
void Callback__add_Handler_fn(Callback* __this, uDelegate* value)
{
    __this->add_Handler(value);
}

// public generated void remove_Handler(Fuse.NodeEventHandler value) :11
void Callback__remove_Handler_fn(Callback* __this, uDelegate* value)
{
    __this->remove_Handler(value);
}

// public generated Callback New() :7
void Callback__New1_fn(Callback** __retval)
{
    *__retval = Callback::New1();
}

// protected override sealed void Perform(Fuse.Node target) :13
void Callback__Perform_fn(Callback* __this, ::g::Fuse::Node* target)
{
    if (::g::Uno::Delegate::op_Inequality(__this->Action(), NULL))
        uPtr(__this->Action())->InvokeVoid();

    if (::g::Uno::Delegate::op_Inequality(__this->Handler1, NULL))
        uPtr(__this->Handler1)->Invoke(2, __this, (::g::Fuse::NodeEventArgs*)::g::Fuse::NodeEventArgs::New2(target));
}

// public generated Callback() [instance] :7
void Callback::ctor_1()
{
    ctor_();
}

// public generated Uno.Action get_Action() [instance] :9
uDelegate* Callback::Action()
{
    return _Action;
}

// public generated void set_Action(Uno.Action value) [instance] :9
void Callback::Action(uDelegate* value)
{
    _Action = value;
}

// public generated void add_Handler(Fuse.NodeEventHandler value) [instance] :11
void Callback::add_Handler(uDelegate* value)
{
    Handler1 = uCast<uDelegate*>(::g::Uno::Delegate::Combine(Handler1, value), ::TYPES[5/*Fuse.NodeEventHandler*/]);
}

// public generated void remove_Handler(Fuse.NodeEventHandler value) [instance] :11
void Callback::remove_Handler(uDelegate* value)
{
    Handler1 = uCast<uDelegate*>(::g::Uno::Delegate::Remove(Handler1, value), ::TYPES[5/*Fuse.NodeEventHandler*/]);
}

// public generated Callback New() [static] :7
Callback* Callback::New1()
{
    Callback* obj1 = (Callback*)uNew(Callback_typeof());
    obj1->ctor_1();
    return obj1;
}
// }

// C:\ProgramData\Uno\Packages\Fuse.Triggers\0.19.3\Actions\$.uno(416)
// -------------------------------------------------------------------

// public sealed class Collapse :416
// {
::g::Fuse::Triggers::Actions::TriggerAction_type* Collapse_typeof()
{
    static uSStrong< ::g::Fuse::Triggers::Actions::TriggerAction_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 7;
    options.ObjectSize = sizeof(Collapse);
    options.TypeSize = sizeof(::g::Fuse::Triggers::Actions::TriggerAction_type);
    type = (::g::Fuse::Triggers::Actions::TriggerAction_type*)uClassType::New("Fuse.Triggers.Actions.Collapse", options);
    type->SetBase(::g::Fuse::Triggers::Actions::TriggerAction_typeof());
    type->fp_ctor_ = (void*)Collapse__New1_fn;
    type->fp_Perform = (void(*)(::g::Fuse::Triggers::Actions::TriggerAction*, ::g::Fuse::Node*))Collapse__Perform_fn;
    ::TYPES[7] = ::g::Fuse::Triggers::Actions::ICollapse_typeof();
    type->SetFields(7);
    type->Reflection.SetFunctions(1,
        new uFunction(".ctor", NULL, (void*)Collapse__New1_fn, 0, true, Collapse_typeof(), 0));
    return type;
}

// public generated Collapse() :416
void Collapse__ctor_1_fn(Collapse* __this)
{
    __this->ctor_1();
}

// public generated Collapse New() :416
void Collapse__New1_fn(Collapse** __retval)
{
    *__retval = Collapse::New1();
}

// protected override sealed void Perform(Fuse.Node target) :418
void Collapse__Perform_fn(Collapse* __this, ::g::Fuse::Node* target)
{
    if (uIs(target, ::TYPES[7/*Fuse.Triggers.Actions.ICollapse*/]))
        ::g::Fuse::Triggers::Actions::ICollapse::Collapse(uInterface(uPtr((uObject*)target), ::TYPES[7/*Fuse.Triggers.Actions.ICollapse*/]));
}

// public generated Collapse() [instance] :416
void Collapse::ctor_1()
{
    ctor_();
}

// public generated Collapse New() [static] :416
Collapse* Collapse::New1()
{
    Collapse* obj1 = (Collapse*)uNew(Collapse_typeof());
    obj1->ctor_1();
    return obj1;
}
// }

// C:\ProgramData\Uno\Packages\Fuse.Triggers\0.19.3\Actions\$.uno(34)
// ------------------------------------------------------------------

// public sealed class DebugAction :34
// {
::g::Fuse::Triggers::Actions::TriggerAction_type* DebugAction_typeof()
{
    static uSStrong< ::g::Fuse::Triggers::Actions::TriggerAction_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 9;
    options.ObjectSize = sizeof(DebugAction);
    options.TypeSize = sizeof(::g::Fuse::Triggers::Actions::TriggerAction_type);
    type = (::g::Fuse::Triggers::Actions::TriggerAction_type*)uClassType::New("Fuse.Triggers.Actions.DebugAction", options);
    type->SetBase(::g::Fuse::Triggers::Actions::TriggerAction_typeof());
    type->fp_ctor_ = (void*)DebugAction__New1_fn;
    type->fp_Perform = (void(*)(::g::Fuse::Triggers::Actions::TriggerAction*, ::g::Fuse::Node*))DebugAction__Perform_fn;
    ::STRINGS[0] = uString::Const("C:\\ProgramData\\Uno\\Packages\\Fuse.Triggers\\0.19.3\\Actions\\$.uno");
    ::STRINGS[1] = uString::Const(" = ");
    ::TYPES[8] = ::g::Uno::Collections::List__Enumerator_typeof()->MakeType(::g::Fuse::Triggers::Actions::ITaggedDebugProperty_typeof());
    ::TYPES[9] = ::g::Uno::Collections::List_typeof()->MakeType(::g::Fuse::Triggers::Actions::ITaggedDebugProperty_typeof());
    ::TYPES[10] = ::g::Uno::Collections::IList_typeof()->MakeType(::g::Fuse::Triggers::Actions::ITaggedDebugProperty_typeof());
    type->SetFields(7,
        ::g::Uno::Collections::List_typeof()->MakeType(::g::Fuse::Triggers::Actions::ITaggedDebugProperty_typeof()), offsetof(::g::Fuse::Triggers::Actions::DebugAction, _props), 0,
        ::g::Uno::String_typeof(), offsetof(::g::Fuse::Triggers::Actions::DebugAction, _Message), 0);
    type->Reflection.SetFunctions(4,
        new uFunction("get_Message", NULL, (void*)DebugAction__get_Message_fn, 0, false, ::g::Uno::String_typeof(), 0),
        new uFunction("set_Message", NULL, (void*)DebugAction__set_Message_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::String_typeof()),
        new uFunction(".ctor", NULL, (void*)DebugAction__New1_fn, 0, true, DebugAction_typeof(), 0),
        new uFunction("get_Properties", NULL, (void*)DebugAction__get_Properties_fn, 0, false, ::g::Uno::Collections::IList_typeof()->MakeType(::g::Fuse::Triggers::Actions::ITaggedDebugProperty_typeof()), 0));
    return type;
}

// public generated DebugAction() :34
void DebugAction__ctor_1_fn(DebugAction* __this)
{
    __this->ctor_1();
}

// public generated string get_Message() :36
void DebugAction__get_Message_fn(DebugAction* __this, uString** __retval)
{
    *__retval = __this->Message();
}

// public generated void set_Message(string value) :36
void DebugAction__set_Message_fn(DebugAction* __this, uString* value)
{
    __this->Message(value);
}

// public generated DebugAction New() :34
void DebugAction__New1_fn(DebugAction** __retval)
{
    *__retval = DebugAction::New1();
}

// protected override sealed void Perform(Fuse.Node target) :50
void DebugAction__Perform_fn(DebugAction* __this, ::g::Fuse::Node* target)
{
    ::g::Uno::Collections::List__Enumerator<uStrong<uObject*> > ret3;

    if (::g::Uno::String::op_Inequality(__this->Message(), NULL))
        ::g::Uno::Diagnostics::Debug::Log5(__this->Message(), 1, ::STRINGS[0/*"C:\\Program...*/], 52);

    if (__this->_props != NULL)

        for (::g::Uno::Collections::List__Enumerator<uStrong<uObject*> > enum1 = (::g::Uno::Collections::List__GetEnumerator_fn(uPtr(__this->_props), &ret3), ret3); enum1.MoveNext(::TYPES[8/*Uno.Collections.List<Fuse.Triggers.Actions.ITaggedDebugProperty>.Enumerator*/]); )
        {
            uObject* prop = enum1.Current(::TYPES[8/*Uno.Collections.List<Fuse.Triggers.Actions.ITaggedDebugProperty>.Enumerator*/]);
            ::g::Uno::Diagnostics::Debug::Log5(::g::Uno::String::op_Addition2(::g::Uno::String::op_Addition2(::g::Fuse::Triggers::Actions::ITaggedDebugProperty::GetTag(uInterface(uPtr(prop), ::g::Fuse::Triggers::Actions::ITaggedDebugProperty_typeof())), ::STRINGS[1/*" = "*/]), ::g::Fuse::Triggers::Actions::ITaggedDebugProperty::GetStringValue(uInterface(uPtr(prop), ::g::Fuse::Triggers::Actions::ITaggedDebugProperty_typeof()))), 1, ::STRINGS[0/*"C:\\Program...*/], 57);
        }
}

// public Uno.Collections.IList<Fuse.Triggers.Actions.ITaggedDebugProperty> get_Properties() :43
void DebugAction__get_Properties_fn(DebugAction* __this, uObject** __retval)
{
    *__retval = __this->Properties();
}

// public generated DebugAction() [instance] :34
void DebugAction::ctor_1()
{
    ctor_();
}

// public generated string get_Message() [instance] :36
uString* DebugAction::Message()
{
    return _Message;
}

// public generated void set_Message(string value) [instance] :36
void DebugAction::Message(uString* value)
{
    _Message = value;
}

// public Uno.Collections.IList<Fuse.Triggers.Actions.ITaggedDebugProperty> get_Properties() [instance] :43
uObject* DebugAction::Properties()
{
    if (_props == NULL)
        _props = ((::g::Uno::Collections::List*)::g::Uno::Collections::List::New1(::TYPES[9/*Uno.Collections.List<Fuse.Triggers.Actions.ITaggedDebugProperty>*/]));

    return (uObject*)_props;
}

// public generated DebugAction New() [static] :34
DebugAction* DebugAction::New1()
{
    DebugAction* obj2 = (DebugAction*)uNew(DebugAction_typeof());
    obj2->ctor_1();
    return obj2;
}
// }

// C:\ProgramData\Uno\Packages\Fuse.Triggers\0.19.3\Actions\$.uno(482)
// -------------------------------------------------------------------

// public sealed class DebugFrame :482
// {
DebugFrame_type* DebugFrame_typeof()
{
    static uSStrong<DebugFrame_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.InterfaceCount = 1;
    options.ObjectSize = sizeof(DebugFrame);
    options.TypeSize = sizeof(DebugFrame_type);
    type = (DebugFrame_type*)uClassType::New("Fuse.Triggers.Actions.DebugFrame", options);
    type->fp_ctor_ = (void*)DebugFrame__New1_fn;
    type->interface0.fp_GetTag = (void(*)(uObject*, uString**))DebugFrame__GetTag_fn;
    type->interface0.fp_GetStringValue = (void(*)(uObject*, uString**))DebugFrame__GetStringValue_fn;
    ::STRINGS[2] = uString::Const("");
    ::STRINGS[3] = uString::Const("Frame");
    ::TYPES[6] = uObject_typeof();
    ::TYPES[11] = ::g::Fuse::UpdateManager_typeof();
    type->SetInterfaces(
        ::g::Fuse::Triggers::Actions::ITaggedDebugProperty_typeof(), offsetof(DebugFrame_type, interface0));
    type->Reflection.SetFunctions(3,
        new uFunction("GetStringValue", NULL, (void*)DebugFrame__GetStringValue_fn, 0, false, ::g::Uno::String_typeof(), 0),
        new uFunction("GetTag", NULL, (void*)DebugFrame__GetTag_fn, 0, false, ::g::Uno::String_typeof(), 0),
        new uFunction(".ctor", NULL, (void*)DebugFrame__New1_fn, 0, true, DebugFrame_typeof(), 0));
    return type;
}

// public generated DebugFrame() :482
void DebugFrame__ctor__fn(DebugFrame* __this)
{
    __this->ctor_();
}

// public string GetStringValue() :489
void DebugFrame__GetStringValue_fn(DebugFrame* __this, uString** __retval)
{
    *__retval = __this->GetStringValue();
}

// public string GetTag() :484
void DebugFrame__GetTag_fn(DebugFrame* __this, uString** __retval)
{
    *__retval = __this->GetTag();
}

// public generated DebugFrame New() :482
void DebugFrame__New1_fn(DebugFrame** __retval)
{
    *__retval = DebugFrame::New1();
}

// public generated DebugFrame() [instance] :482
void DebugFrame::ctor_()
{
}

// public string GetStringValue() [instance] :489
uString* DebugFrame::GetStringValue()
{
    return ::g::Uno::String::op_Addition1(::STRINGS[2/*""*/], uBox<int>(::TYPES[35/*int*/], ::g::Fuse::UpdateManager::FrameIndex()));
}

// public string GetTag() [instance] :484
uString* DebugFrame::GetTag()
{
    return ::STRINGS[3/*"Frame"*/];
}

// public generated DebugFrame New() [static] :482
DebugFrame* DebugFrame::New1()
{
    DebugFrame* obj1 = (DebugFrame*)uNew(DebugFrame_typeof());
    obj1->ctor_();
    return obj1;
}
// }

// C:\ProgramData\Uno\Packages\Fuse.Triggers\0.19.3\Actions\$.uno(438)
// -------------------------------------------------------------------

// public sealed class DebugProperty<T> :438
// {
DebugProperty_type* DebugProperty_typeof()
{
    static uSStrong<DebugProperty_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 2;
    options.GenericCount = 1;
    options.InterfaceCount = 1;
    options.ObjectSize = sizeof(DebugProperty);
    options.TypeSize = sizeof(DebugProperty_type);
    type = (DebugProperty_type*)uClassType::New("Fuse.Triggers.Actions.DebugProperty`1", options);
    type->interface0.fp_GetTag = (void(*)(uObject*, uString**))DebugProperty__GetTag_fn;
    type->interface0.fp_GetStringValue = (void(*)(uObject*, uString**))DebugProperty__GetStringValue_fn;
    ::STRINGS[2] = uString::Const("");
    ::TYPES[6] = uObject_typeof();
    type->SetInterfaces(
        ::g::Fuse::Triggers::Actions::ITaggedDebugProperty_typeof(), offsetof(DebugProperty_type, interface0));
    type->SetFields(0,
        ::g::Uno::String_typeof(), offsetof(::g::Fuse::Triggers::Actions::DebugProperty, _Tag), 0,
        ::g::Uno::UX::Property_typeof()->MakeType(type->T(0)), offsetof(::g::Fuse::Triggers::Actions::DebugProperty, _Value), 0);
    type->Reflection.SetFunctions(7,
        new uFunction("GetStringValue", NULL, (void*)DebugProperty__GetStringValue_fn, 0, false, ::g::Uno::String_typeof(), 0),
        new uFunction("GetTag", NULL, (void*)DebugProperty__GetTag_fn, 0, false, ::g::Uno::String_typeof(), 0),
        new uFunction(".ctor", type, (void*)DebugProperty__New1_fn, 0, true, type, 1, ::g::Uno::UX::Property_typeof()->MakeType(type->T(0))),
        new uFunction("get_Tag", NULL, (void*)DebugProperty__get_Tag_fn, 0, false, ::g::Uno::String_typeof(), 0),
        new uFunction("set_Tag", NULL, (void*)DebugProperty__set_Tag_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::String_typeof()),
        new uFunction("get_Value", NULL, (void*)DebugProperty__get_Value_fn, 0, false, ::g::Uno::UX::Property_typeof()->MakeType(type->T(0)), 0),
        new uFunction("set_Value", NULL, (void*)DebugProperty__set_Value_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::UX::Property_typeof()->MakeType(type->T(0))));
    return type;
}

// public DebugProperty(Uno.UX.Property<T> val) :444
void DebugProperty__ctor__fn(DebugProperty* __this, ::g::Uno::UX::Property* val)
{
    __this->ctor_(val);
}

// public string GetStringValue() :454
void DebugProperty__GetStringValue_fn(DebugProperty* __this, uString** __retval)
{
    *__retval = __this->GetStringValue();
}

// public string GetTag() :449
void DebugProperty__GetTag_fn(DebugProperty* __this, uString** __retval)
{
    *__retval = __this->GetTag();
}

// public DebugProperty New(Uno.UX.Property<T> val) :444
void DebugProperty__New1_fn(uType* __type, ::g::Uno::UX::Property* val, DebugProperty** __retval)
{
    *__retval = DebugProperty::New1(__type, val);
}

// public generated string get_Tag() :440
void DebugProperty__get_Tag_fn(DebugProperty* __this, uString** __retval)
{
    *__retval = __this->Tag();
}

// public generated void set_Tag(string value) :440
void DebugProperty__set_Tag_fn(DebugProperty* __this, uString* value)
{
    __this->Tag(value);
}

// public generated Uno.UX.Property<T> get_Value() :441
void DebugProperty__get_Value_fn(DebugProperty* __this, ::g::Uno::UX::Property** __retval)
{
    *__retval = __this->Value();
}

// public generated void set_Value(Uno.UX.Property<T> value) :441
void DebugProperty__set_Value_fn(DebugProperty* __this, ::g::Uno::UX::Property* value)
{
    __this->Value(value);
}

// public DebugProperty(Uno.UX.Property<T> val) [instance] :444
void DebugProperty::ctor_(::g::Uno::UX::Property* val)
{
    Value(val);
}

// public string GetStringValue() [instance] :454
uString* DebugProperty::GetStringValue()
{
    uType* __types[] = {
        __type->T(0),
    };
    uT ret2(__types[0], U_ALLOCA(__types[0]->ValueSize));
    ;
    return ::g::Uno::String::op_Addition1(::STRINGS[2/*""*/], uBoxPtr(__types[0], (::g::Uno::UX::Property__Get_fn(uPtr(Value()), &ret2), ret2)));
}

// public string GetTag() [instance] :449
uString* DebugProperty::GetTag()
{
    return Tag();
}

// public generated string get_Tag() [instance] :440
uString* DebugProperty::Tag()
{
    return _Tag;
}

// public generated void set_Tag(string value) [instance] :440
void DebugProperty::Tag(uString* value)
{
    _Tag = value;
}

// public generated Uno.UX.Property<T> get_Value() [instance] :441
::g::Uno::UX::Property* DebugProperty::Value()
{
    return _Value;
}

// public generated void set_Value(Uno.UX.Property<T> value) [instance] :441
void DebugProperty::Value(::g::Uno::UX::Property* value)
{
    _Value = value;
}

// public DebugProperty New(Uno.UX.Property<T> val) [static] :444
DebugProperty* DebugProperty::New1(uType* __type, ::g::Uno::UX::Property* val)
{
    DebugProperty* obj1 = (DebugProperty*)uNew(__type);
    obj1->ctor_(val);
    return obj1;
}
// }

// C:\ProgramData\Uno\Packages\Fuse.Triggers\0.19.3\Actions\$.uno(469)
// -------------------------------------------------------------------

// public sealed class DebugTime :469
// {
DebugTime_type* DebugTime_typeof()
{
    static uSStrong<DebugTime_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.InterfaceCount = 1;
    options.ObjectSize = sizeof(DebugTime);
    options.TypeSize = sizeof(DebugTime_type);
    type = (DebugTime_type*)uClassType::New("Fuse.Triggers.Actions.DebugTime", options);
    type->fp_ctor_ = (void*)DebugTime__New1_fn;
    type->interface0.fp_GetTag = (void(*)(uObject*, uString**))DebugTime__GetTag_fn;
    type->interface0.fp_GetStringValue = (void(*)(uObject*, uString**))DebugTime__GetStringValue_fn;
    ::STRINGS[2] = uString::Const("");
    ::STRINGS[4] = uString::Const("Time");
    ::TYPES[6] = uObject_typeof();
    ::TYPES[12] = ::g::Fuse::Time_typeof();
    type->SetInterfaces(
        ::g::Fuse::Triggers::Actions::ITaggedDebugProperty_typeof(), offsetof(DebugTime_type, interface0));
    type->Reflection.SetFunctions(3,
        new uFunction("GetStringValue", NULL, (void*)DebugTime__GetStringValue_fn, 0, false, ::g::Uno::String_typeof(), 0),
        new uFunction("GetTag", NULL, (void*)DebugTime__GetTag_fn, 0, false, ::g::Uno::String_typeof(), 0),
        new uFunction(".ctor", NULL, (void*)DebugTime__New1_fn, 0, true, DebugTime_typeof(), 0));
    return type;
}

// public generated DebugTime() :469
void DebugTime__ctor__fn(DebugTime* __this)
{
    __this->ctor_();
}

// public string GetStringValue() :476
void DebugTime__GetStringValue_fn(DebugTime* __this, uString** __retval)
{
    *__retval = __this->GetStringValue();
}

// public string GetTag() :471
void DebugTime__GetTag_fn(DebugTime* __this, uString** __retval)
{
    *__retval = __this->GetTag();
}

// public generated DebugTime New() :469
void DebugTime__New1_fn(DebugTime** __retval)
{
    *__retval = DebugTime::New1();
}

// public generated DebugTime() [instance] :469
void DebugTime::ctor_()
{
}

// public string GetStringValue() [instance] :476
uString* DebugTime::GetStringValue()
{
    return ::g::Uno::String::op_Addition1(::STRINGS[2/*""*/], uBox(::g::Uno::Double_typeof(), ::g::Fuse::Time::FrameTime()));
}

// public string GetTag() [instance] :471
uString* DebugTime::GetTag()
{
    return ::STRINGS[4/*"Time"*/];
}

// public generated DebugTime New() [static] :469
DebugTime* DebugTime::New1()
{
    DebugTime* obj1 = (DebugTime*)uNew(DebugTime_typeof());
    obj1->ctor_();
    return obj1;
}
// }

// C:\ProgramData\Uno\Packages\Fuse.Controls\0.19.3\WebView\$.uno(381)
// -------------------------------------------------------------------

// public sealed class EvaluateJS :381
// {
::g::Fuse::Triggers::Actions::TriggerAction_type* EvaluateJS_typeof()
{
    static uSStrong< ::g::Fuse::Triggers::Actions::TriggerAction_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 11;
    options.ObjectSize = sizeof(EvaluateJS);
    options.TypeSize = sizeof(::g::Fuse::Triggers::Actions::TriggerAction_type);
    type = (::g::Fuse::Triggers::Actions::TriggerAction_type*)uClassType::New("Fuse.Triggers.Actions.EvaluateJS", options);
    type->SetBase(::g::Fuse::Triggers::Actions::TriggerAction_typeof());
    type->fp_ctor_ = (void*)EvaluateJS__New1_fn;
    type->fp_Perform = (void(*)(::g::Fuse::Triggers::Actions::TriggerAction*, ::g::Fuse::Node*))EvaluateJS__Perform_fn;
    ::STRINGS[2] = uString::Const("");
    ::STRINGS[5] = uString::Const("JSON.stringify((function(){");
    ::STRINGS[6] = uString::Const("})());");
    ::TYPES[13] = ::g::Uno::Action1_typeof()->MakeType(::g::Uno::String_typeof());
    ::TYPES[14] = ::g::Fuse::Controls::IWebView_typeof();
    ::TYPES[3] = ::g::Uno::Delegate_typeof();
    ::TYPES[15] = ::g::Fuse::Triggers::Actions::JSEventHandler_typeof();
    ::TYPES[6] = uObject_typeof();
    type->SetFields(7,
        ::g::Uno::String_typeof(), offsetof(::g::Fuse::Triggers::Actions::EvaluateJS, _processedSource), 0,
        ::g::Uno::String_typeof(), offsetof(::g::Fuse::Triggers::Actions::EvaluateJS, _rawSource), 0,
        ::g::Fuse::Controls::IWebView_typeof(), offsetof(::g::Fuse::Triggers::Actions::EvaluateJS, _target), 0,
        ::g::Fuse::Triggers::Actions::JSEventHandler_typeof(), offsetof(::g::Fuse::Triggers::Actions::EvaluateJS, Handler1), 0);
    type->Reflection.SetFunctions(7,
        new uFunction("add_Handler", NULL, (void*)EvaluateJS__add_Handler_fn, 0, false, uVoid_typeof(), 1, ::g::Fuse::Triggers::Actions::JSEventHandler_typeof()),
        new uFunction("remove_Handler", NULL, (void*)EvaluateJS__remove_Handler_fn, 0, false, uVoid_typeof(), 1, ::g::Fuse::Triggers::Actions::JSEventHandler_typeof()),
        new uFunction("get_JavaScript", NULL, (void*)EvaluateJS__get_JavaScript_fn, 0, false, ::g::Uno::String_typeof(), 0),
        new uFunction("set_JavaScript", NULL, (void*)EvaluateJS__set_JavaScript_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::String_typeof()),
        new uFunction(".ctor", NULL, (void*)EvaluateJS__New1_fn, 0, true, EvaluateJS_typeof(), 0),
        new uFunction("get_WebView", NULL, (void*)EvaluateJS__get_WebView_fn, 0, false, ::g::Fuse::Controls::IWebView_typeof(), 0),
        new uFunction("set_WebView", NULL, (void*)EvaluateJS__set_WebView_fn, 0, false, uVoid_typeof(), 1, ::g::Fuse::Controls::IWebView_typeof()));
    return type;
}

// public generated EvaluateJS() :381
void EvaluateJS__ctor_1_fn(EvaluateJS* __this)
{
    __this->ctor_1();
}

// private void Execute() :425
void EvaluateJS__Execute_fn(EvaluateJS* __this)
{
    __this->Execute();
}

// public generated void add_Handler(Fuse.Triggers.Actions.JSEventHandler value) :387
void EvaluateJS__add_Handler_fn(EvaluateJS* __this, uDelegate* value)
{
    __this->add_Handler(value);
}

// public generated void remove_Handler(Fuse.Triggers.Actions.JSEventHandler value) :387
void EvaluateJS__remove_Handler_fn(EvaluateJS* __this, uDelegate* value)
{
    __this->remove_Handler(value);
}

// public string get_JavaScript() :397
void EvaluateJS__get_JavaScript_fn(EvaluateJS* __this, uString** __retval)
{
    *__retval = __this->JavaScript();
}

// public void set_JavaScript(string value) :398
void EvaluateJS__set_JavaScript_fn(EvaluateJS* __this, uString* value)
{
    __this->JavaScript(value);
}

// public generated EvaluateJS New() :381
void EvaluateJS__New1_fn(EvaluateJS** __retval)
{
    *__retval = EvaluateJS::New1();
}

// protected override sealed void Perform(Fuse.Node target) :412
void EvaluateJS__Perform_fn(EvaluateJS* __this, ::g::Fuse::Node* target)
{
    if ((__this->_target == NULL) && uIs(target, ::TYPES[14/*Fuse.Controls.IWebView*/]))
        __this->_target = uAs<uObject*>(target, ::TYPES[14/*Fuse.Controls.IWebView*/]);

    if ((__this->_target != NULL) && ::g::Uno::String::op_Inequality(__this->_rawSource, ::STRINGS[2/*""*/]))
        __this->Execute();
}

// private string PrepareScriptForEval(string js) :402
void EvaluateJS__PrepareScriptForEval_fn(EvaluateJS* __this, uString* js, uString** __retval)
{
    *__retval = __this->PrepareScriptForEval(js);
}

// private void ResultHandler(string result) :430
void EvaluateJS__ResultHandler_fn(EvaluateJS* __this, uString* result)
{
    __this->ResultHandler(result);
}

// public Fuse.Controls.IWebView get_WebView() :390
void EvaluateJS__get_WebView_fn(EvaluateJS* __this, uObject** __retval)
{
    *__retval = __this->WebView();
}

// public void set_WebView(Fuse.Controls.IWebView value) :391
void EvaluateJS__set_WebView_fn(EvaluateJS* __this, uObject* value)
{
    __this->WebView(value);
}

// public generated EvaluateJS() [instance] :381
void EvaluateJS::ctor_1()
{
    ctor_();
}

// private void Execute() [instance] :425
void EvaluateJS::Execute()
{
    ::g::Fuse::Controls::IWebView::Eval1(uInterface(uPtr(WebView()), ::TYPES[14/*Fuse.Controls.IWebView*/]), _processedSource, uDelegate::New(::TYPES[13/*Uno.Action<string>*/], (void*)EvaluateJS__ResultHandler_fn, this));
}

// public generated void add_Handler(Fuse.Triggers.Actions.JSEventHandler value) [instance] :387
void EvaluateJS::add_Handler(uDelegate* value)
{
    Handler1 = uCast<uDelegate*>(::g::Uno::Delegate::Combine(Handler1, value), ::TYPES[15/*Fuse.Triggers.Actions.JSEventHandler*/]);
}

// public generated void remove_Handler(Fuse.Triggers.Actions.JSEventHandler value) [instance] :387
void EvaluateJS::remove_Handler(uDelegate* value)
{
    Handler1 = uCast<uDelegate*>(::g::Uno::Delegate::Remove(Handler1, value), ::TYPES[15/*Fuse.Triggers.Actions.JSEventHandler*/]);
}

// public string get_JavaScript() [instance] :397
uString* EvaluateJS::JavaScript()
{
    return _processedSource;
}

// public void set_JavaScript(string value) [instance] :398
void EvaluateJS::JavaScript(uString* value)
{
    _processedSource = PrepareScriptForEval(_rawSource = value);
}

// private string PrepareScriptForEval(string js) [instance] :402
uString* EvaluateJS::PrepareScriptForEval(uString* js)
{
    if (::g::Uno::String::op_Equality(js, NULL))
        return ::STRINGS[2/*""*/];

    js = ::g::Uno::String::Trim(uPtr(js));
    js = ::g::Uno::String::op_Addition2(::g::Uno::String::op_Addition2(::STRINGS[5/*"JSON.string...*/], js), ::STRINGS[6/*"})());"*/]);
    return js;
}

// private void ResultHandler(string result) [instance] :430
void EvaluateJS::ResultHandler(uString* result)
{
    if (::g::Uno::Delegate::op_Inequality(Handler1, NULL))
        uPtr(Handler1)->Invoke(2, this, (::g::Fuse::Triggers::Actions::JSEventArgs*)::g::Fuse::Triggers::Actions::JSEventArgs::New2(result));
}

// public Fuse.Controls.IWebView get_WebView() [instance] :390
uObject* EvaluateJS::WebView()
{
    return _target;
}

// public void set_WebView(Fuse.Controls.IWebView value) [instance] :391
void EvaluateJS::WebView(uObject* value)
{
    _target = value;
}

// public generated EvaluateJS New() [static] :381
EvaluateJS* EvaluateJS::New1()
{
    EvaluateJS* obj1 = (EvaluateJS*)uNew(EvaluateJS_typeof());
    obj1->ctor_1();
    return obj1;
}
// }

// C:\ProgramData\Uno\Packages\Fuse.Triggers\0.19.3\Actions\$.uno(73)
// ------------------------------------------------------------------

// public sealed class GiveFocus :73
// {
// static GiveFocus() :73
static void GiveFocus__cctor__fn(uType* __type)
{
    GiveFocus::Singleton_ = GiveFocus::New1();
}

::g::Fuse::Triggers::Actions::TriggerAction_type* GiveFocus_typeof()
{
    static uSStrong< ::g::Fuse::Triggers::Actions::TriggerAction_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 9;
    options.ObjectSize = sizeof(GiveFocus);
    options.TypeSize = sizeof(::g::Fuse::Triggers::Actions::TriggerAction_type);
    type = (::g::Fuse::Triggers::Actions::TriggerAction_type*)uClassType::New("Fuse.Triggers.Actions.GiveFocus", options);
    type->SetBase(::g::Fuse::Triggers::Actions::TriggerAction_typeof());
    type->fp_ctor_ = (void*)GiveFocus__New1_fn;
    type->fp_cctor_ = GiveFocus__cctor__fn;
    type->fp_Perform = (void(*)(::g::Fuse::Triggers::Actions::TriggerAction*, ::g::Fuse::Node*))GiveFocus__Perform_fn;
    ::TYPES[16] = ::g::Fuse::Triggers::Actions::TriggerAction_typeof();
    type->SetFields(7,
        ::g::Fuse::Node_typeof(), offsetof(::g::Fuse::Triggers::Actions::GiveFocus, _Target), 0,
        ::g::Fuse::Triggers::Actions::TriggerAction_typeof(), (uintptr_t)&::g::Fuse::Triggers::Actions::GiveFocus::Singleton_, uFieldFlagsStatic);
    type->Reflection.SetFields(1,
        new uField("Singleton", 8));
    type->Reflection.SetFunctions(3,
        new uFunction(".ctor", NULL, (void*)GiveFocus__New1_fn, 0, true, GiveFocus_typeof(), 0),
        new uFunction("get_Target", NULL, (void*)GiveFocus__get_Target_fn, 0, false, ::g::Fuse::Node_typeof(), 0),
        new uFunction("set_Target", NULL, (void*)GiveFocus__set_Target_fn, 0, false, uVoid_typeof(), 1, ::g::Fuse::Node_typeof()));
    return type;
}

// public generated GiveFocus() :73
void GiveFocus__ctor_1_fn(GiveFocus* __this)
{
    __this->ctor_1();
}

// public generated GiveFocus New() :73
void GiveFocus__New1_fn(GiveFocus** __retval)
{
    *__retval = GiveFocus::New1();
}

// protected override sealed void Perform(Fuse.Node target) :77
void GiveFocus__Perform_fn(GiveFocus* __this, ::g::Fuse::Node* target)
{
    ::g::Fuse::Node* ind1;
    ::g::Fuse::Input::Focus::GiveTo((ind1 = __this->Target(), (ind1 != NULL) ? ind1 : target));
}

// public generated Fuse.Node get_Target() :75
void GiveFocus__get_Target_fn(GiveFocus* __this, ::g::Fuse::Node** __retval)
{
    *__retval = __this->Target();
}

// public generated void set_Target(Fuse.Node value) :75
void GiveFocus__set_Target_fn(GiveFocus* __this, ::g::Fuse::Node* value)
{
    __this->Target(value);
}

uSStrong< ::g::Fuse::Triggers::Actions::TriggerAction*> GiveFocus::Singleton_;

// public generated GiveFocus() [instance] :73
void GiveFocus::ctor_1()
{
    ctor_();
}

// public generated Fuse.Node get_Target() [instance] :75
::g::Fuse::Node* GiveFocus::Target()
{
    return _Target;
}

// public generated void set_Target(Fuse.Node value) [instance] :75
void GiveFocus::Target(::g::Fuse::Node* value)
{
    _Target = value;
}

// public generated GiveFocus New() [static] :73
GiveFocus* GiveFocus::New1()
{
    GiveFocus* obj2 = (GiveFocus*)uNew(GiveFocus_typeof());
    obj2->ctor_1();
    return obj2;
}
// }

// C:\ProgramData\Uno\Packages\Fuse.Triggers\0.19.3\Actions\$.uno(403)
// -------------------------------------------------------------------

// public sealed class Hide :403
// {
::g::Fuse::Triggers::Actions::TriggerAction_type* Hide_typeof()
{
    static uSStrong< ::g::Fuse::Triggers::Actions::TriggerAction_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 7;
    options.ObjectSize = sizeof(Hide);
    options.TypeSize = sizeof(::g::Fuse::Triggers::Actions::TriggerAction_type);
    type = (::g::Fuse::Triggers::Actions::TriggerAction_type*)uClassType::New("Fuse.Triggers.Actions.Hide", options);
    type->SetBase(::g::Fuse::Triggers::Actions::TriggerAction_typeof());
    type->fp_ctor_ = (void*)Hide__New1_fn;
    type->fp_Perform = (void(*)(::g::Fuse::Triggers::Actions::TriggerAction*, ::g::Fuse::Node*))Hide__Perform_fn;
    ::TYPES[17] = ::g::Fuse::Triggers::Actions::IHide_typeof();
    type->SetFields(7);
    type->Reflection.SetFunctions(1,
        new uFunction(".ctor", NULL, (void*)Hide__New1_fn, 0, true, Hide_typeof(), 0));
    return type;
}

// public generated Hide() :403
void Hide__ctor_1_fn(Hide* __this)
{
    __this->ctor_1();
}

// public generated Hide New() :403
void Hide__New1_fn(Hide** __retval)
{
    *__retval = Hide::New1();
}

// protected override sealed void Perform(Fuse.Node target) :405
void Hide__Perform_fn(Hide* __this, ::g::Fuse::Node* target)
{
    if (uIs(target, ::TYPES[17/*Fuse.Triggers.Actions.IHide*/]))
        ::g::Fuse::Triggers::Actions::IHide::Hide(uInterface(uPtr((uObject*)target), ::TYPES[17/*Fuse.Triggers.Actions.IHide*/]));
}

// public generated Hide() [instance] :403
void Hide::ctor_1()
{
    ctor_();
}

// public generated Hide New() [static] :403
Hide* Hide::New1()
{
    Hide* obj1 = (Hide*)uNew(Hide_typeof());
    obj1->ctor_1();
    return obj1;
}
// }

// C:\ProgramData\Uno\Packages\Fuse.Triggers\0.19.3\Actions\$.uno(411)
// -------------------------------------------------------------------

// public abstract interface ICollapse :411
// {
uInterfaceType* ICollapse_typeof()
{
    static uSStrong<uInterfaceType*> type;
    if (type != NULL) return type;

    type = uInterfaceType::New("Fuse.Triggers.Actions.ICollapse", 0, 0);
    type->Reflection.SetFunctions(1,
        new uFunction("Collapse", NULL, NULL, offsetof(ICollapse, fp_Collapse), false, uVoid_typeof(), 0));
    return type;
}
// }

// C:\ProgramData\Uno\Packages\Fuse.Triggers\0.19.3\Actions\$.uno(398)
// -------------------------------------------------------------------

// public abstract interface IHide :398
// {
uInterfaceType* IHide_typeof()
{
    static uSStrong<uInterfaceType*> type;
    if (type != NULL) return type;

    type = uInterfaceType::New("Fuse.Triggers.Actions.IHide", 0, 0);
    type->Reflection.SetFunctions(1,
        new uFunction("Hide", NULL, NULL, offsetof(IHide, fp_Hide), false, uVoid_typeof(), 0));
    return type;
}
// }

// C:\ProgramData\Uno\Packages\Fuse.Triggers\0.19.3\Actions\$.uno(385)
// -------------------------------------------------------------------

// public abstract interface IShow :385
// {
uInterfaceType* IShow_typeof()
{
    static uSStrong<uInterfaceType*> type;
    if (type != NULL) return type;

    type = uInterfaceType::New("Fuse.Triggers.Actions.IShow", 0, 0);
    type->Reflection.SetFunctions(1,
        new uFunction("Show", NULL, NULL, offsetof(IShow, fp_Show), false, uVoid_typeof(), 0));
    return type;
}
// }

// C:\ProgramData\Uno\Packages\Fuse.Triggers\0.19.3\Actions\$.uno(432)
// -------------------------------------------------------------------

// public abstract interface ITaggedDebugProperty :432
// {
uInterfaceType* ITaggedDebugProperty_typeof()
{
    static uSStrong<uInterfaceType*> type;
    if (type != NULL) return type;

    type = uInterfaceType::New("Fuse.Triggers.Actions.ITaggedDebugProperty", 0, 0);
    type->Reflection.SetFunctions(2,
        new uFunction("GetStringValue", NULL, NULL, offsetof(ITaggedDebugProperty, fp_GetStringValue), false, ::g::Uno::String_typeof(), 0),
        new uFunction("GetTag", NULL, NULL, offsetof(ITaggedDebugProperty, fp_GetTag), false, ::g::Uno::String_typeof(), 0));
    return type;
}
// }

// C:\ProgramData\Uno\Packages\Fuse.Controls\0.19.3\WebView\$.uno(365)
// -------------------------------------------------------------------

// public sealed class JSEventArgs :365
// {
JSEventArgs_type* JSEventArgs_typeof()
{
    static uSStrong<JSEventArgs_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 1;
    options.InterfaceCount = 1;
    options.ObjectSize = sizeof(JSEventArgs);
    options.TypeSize = sizeof(JSEventArgs_type);
    type = (JSEventArgs_type*)uClassType::New("Fuse.Triggers.Actions.JSEventArgs", options);
    type->SetBase(::g::Uno::EventArgs_typeof());
    type->interface0.fp_Serialize = (void(*)(uObject*, uObject*))JSEventArgs__Fuse_Scripting_IScriptEvent_Serialize_fn;
    ::STRINGS[7] = uString::Const("json");
    type->SetInterfaces(
        ::g::Fuse::Scripting::IScriptEvent_typeof(), offsetof(JSEventArgs_type, interface0));
    type->SetFields(0,
        ::g::Uno::String_typeof(), offsetof(::g::Fuse::Triggers::Actions::JSEventArgs, ResultJson), 0);
    type->Reflection.SetFields(1,
        new uField("ResultJson", 0));
    type->Reflection.SetFunctions(1,
        new uFunction(".ctor", NULL, (void*)JSEventArgs__New2_fn, 0, true, JSEventArgs_typeof(), 1, ::g::Uno::String_typeof()));
    return type;
}

// public JSEventArgs(string resultJson) :368
void JSEventArgs__ctor_1_fn(JSEventArgs* __this, uString* resultJson)
{
    __this->ctor_1(resultJson);
}

// private void Fuse.Scripting.IScriptEvent.Serialize(Fuse.Scripting.IEventSerializer s) :373
void JSEventArgs__Fuse_Scripting_IScriptEvent_Serialize_fn(JSEventArgs* __this, uObject* s)
{
    ::g::Fuse::Scripting::IEventSerializer::AddString(uInterface(uPtr(s), ::g::Fuse::Scripting::IEventSerializer_typeof()), ::STRINGS[7/*"json"*/], __this->ResultJson);
}

// public JSEventArgs New(string resultJson) :368
void JSEventArgs__New2_fn(uString* resultJson, JSEventArgs** __retval)
{
    *__retval = JSEventArgs::New2(resultJson);
}

// public JSEventArgs(string resultJson) [instance] :368
void JSEventArgs::ctor_1(uString* resultJson)
{
    ctor_();
    ResultJson = resultJson;
}

// public JSEventArgs New(string resultJson) [static] :368
JSEventArgs* JSEventArgs::New2(uString* resultJson)
{
    JSEventArgs* obj1 = (JSEventArgs*)uNew(JSEventArgs_typeof());
    obj1->ctor_1(resultJson);
    return obj1;
}
// }

// C:\ProgramData\Uno\Packages\Fuse.Controls\0.19.3\WebView\$.uno(379)
// -------------------------------------------------------------------

// public delegate void JSEventHandler(object sender, Fuse.Triggers.Actions.JSEventArgs args) :379
uDelegateType* JSEventHandler_typeof()
{
    static uSStrong<uDelegateType*> type;
    if (type != NULL) return type;

    type = uDelegateType::New("Fuse.Triggers.Actions.JSEventHandler", 2, 0);
    type->SetSignature(uVoid_typeof(),
        uObject_typeof(),
        ::g::Fuse::Triggers::Actions::JSEventArgs_typeof());
    return type;
}

// C:\ProgramData\Uno\Packages\Fuse.Launcher\0.19.3\$.uno(227)
// -----------------------------------------------------------

// public sealed class LaunchEmail :227
// {
::g::Fuse::Triggers::Actions::TriggerAction_type* LaunchEmail_typeof()
{
    static uSStrong< ::g::Fuse::Triggers::Actions::TriggerAction_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 12;
    options.ObjectSize = sizeof(LaunchEmail);
    options.TypeSize = sizeof(::g::Fuse::Triggers::Actions::TriggerAction_type);
    type = (::g::Fuse::Triggers::Actions::TriggerAction_type*)uClassType::New("Fuse.Triggers.Actions.LaunchEmail", options);
    type->SetBase(::g::Fuse::Triggers::Actions::TriggerAction_typeof());
    type->fp_ctor_ = (void*)LaunchEmail__New1_fn;
    type->fp_Perform = (void(*)(::g::Fuse::Triggers::Actions::TriggerAction*, ::g::Fuse::Node*))LaunchEmail__Perform_fn;
    type->SetFields(7,
        ::g::Uno::String_typeof(), offsetof(::g::Fuse::Triggers::Actions::LaunchEmail, _BlindCarbonCopy), 0,
        ::g::Uno::String_typeof(), offsetof(::g::Fuse::Triggers::Actions::LaunchEmail, _CarbonCopy), 0,
        ::g::Uno::String_typeof(), offsetof(::g::Fuse::Triggers::Actions::LaunchEmail, _Message), 0,
        ::g::Uno::String_typeof(), offsetof(::g::Fuse::Triggers::Actions::LaunchEmail, _Subject), 0,
        ::g::Uno::String_typeof(), offsetof(::g::Fuse::Triggers::Actions::LaunchEmail, _To), 0);
    type->Reflection.SetFunctions(11,
        new uFunction("get_BlindCarbonCopy", NULL, (void*)LaunchEmail__get_BlindCarbonCopy_fn, 0, false, ::g::Uno::String_typeof(), 0),
        new uFunction("set_BlindCarbonCopy", NULL, (void*)LaunchEmail__set_BlindCarbonCopy_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::String_typeof()),
        new uFunction("get_CarbonCopy", NULL, (void*)LaunchEmail__get_CarbonCopy_fn, 0, false, ::g::Uno::String_typeof(), 0),
        new uFunction("set_CarbonCopy", NULL, (void*)LaunchEmail__set_CarbonCopy_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::String_typeof()),
        new uFunction("get_Message", NULL, (void*)LaunchEmail__get_Message_fn, 0, false, ::g::Uno::String_typeof(), 0),
        new uFunction("set_Message", NULL, (void*)LaunchEmail__set_Message_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::String_typeof()),
        new uFunction(".ctor", NULL, (void*)LaunchEmail__New1_fn, 0, true, LaunchEmail_typeof(), 0),
        new uFunction("get_Subject", NULL, (void*)LaunchEmail__get_Subject_fn, 0, false, ::g::Uno::String_typeof(), 0),
        new uFunction("set_Subject", NULL, (void*)LaunchEmail__set_Subject_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::String_typeof()),
        new uFunction("get_To", NULL, (void*)LaunchEmail__get_To_fn, 0, false, ::g::Uno::String_typeof(), 0),
        new uFunction("set_To", NULL, (void*)LaunchEmail__set_To_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::String_typeof()));
    return type;
}

// public generated LaunchEmail() :227
void LaunchEmail__ctor_1_fn(LaunchEmail* __this)
{
    __this->ctor_1();
}

// public generated string get_BlindCarbonCopy() :231
void LaunchEmail__get_BlindCarbonCopy_fn(LaunchEmail* __this, uString** __retval)
{
    *__retval = __this->BlindCarbonCopy();
}

// public generated void set_BlindCarbonCopy(string value) :231
void LaunchEmail__set_BlindCarbonCopy_fn(LaunchEmail* __this, uString* value)
{
    __this->BlindCarbonCopy(value);
}

// public generated string get_CarbonCopy() :230
void LaunchEmail__get_CarbonCopy_fn(LaunchEmail* __this, uString** __retval)
{
    *__retval = __this->CarbonCopy();
}

// public generated void set_CarbonCopy(string value) :230
void LaunchEmail__set_CarbonCopy_fn(LaunchEmail* __this, uString* value)
{
    __this->CarbonCopy(value);
}

// public generated string get_Message() :233
void LaunchEmail__get_Message_fn(LaunchEmail* __this, uString** __retval)
{
    *__retval = __this->Message();
}

// public generated void set_Message(string value) :233
void LaunchEmail__set_Message_fn(LaunchEmail* __this, uString* value)
{
    __this->Message(value);
}

// public generated LaunchEmail New() :227
void LaunchEmail__New1_fn(LaunchEmail** __retval)
{
    *__retval = LaunchEmail::New1();
}

// protected override sealed void Perform(Fuse.Node target) :235
void LaunchEmail__Perform_fn(LaunchEmail* __this, ::g::Fuse::Node* target)
{
    ::g::Fuse::Launcher::LaunchEmail(__this->To(), __this->CarbonCopy(), __this->BlindCarbonCopy(), __this->Subject(), __this->Message());
}

// public generated string get_Subject() :232
void LaunchEmail__get_Subject_fn(LaunchEmail* __this, uString** __retval)
{
    *__retval = __this->Subject();
}

// public generated void set_Subject(string value) :232
void LaunchEmail__set_Subject_fn(LaunchEmail* __this, uString* value)
{
    __this->Subject(value);
}

// public generated string get_To() :229
void LaunchEmail__get_To_fn(LaunchEmail* __this, uString** __retval)
{
    *__retval = __this->To();
}

// public generated void set_To(string value) :229
void LaunchEmail__set_To_fn(LaunchEmail* __this, uString* value)
{
    __this->To(value);
}

// public generated LaunchEmail() [instance] :227
void LaunchEmail::ctor_1()
{
    ctor_();
}

// public generated string get_BlindCarbonCopy() [instance] :231
uString* LaunchEmail::BlindCarbonCopy()
{
    return _BlindCarbonCopy;
}

// public generated void set_BlindCarbonCopy(string value) [instance] :231
void LaunchEmail::BlindCarbonCopy(uString* value)
{
    _BlindCarbonCopy = value;
}

// public generated string get_CarbonCopy() [instance] :230
uString* LaunchEmail::CarbonCopy()
{
    return _CarbonCopy;
}

// public generated void set_CarbonCopy(string value) [instance] :230
void LaunchEmail::CarbonCopy(uString* value)
{
    _CarbonCopy = value;
}

// public generated string get_Message() [instance] :233
uString* LaunchEmail::Message()
{
    return _Message;
}

// public generated void set_Message(string value) [instance] :233
void LaunchEmail::Message(uString* value)
{
    _Message = value;
}

// public generated string get_Subject() [instance] :232
uString* LaunchEmail::Subject()
{
    return _Subject;
}

// public generated void set_Subject(string value) [instance] :232
void LaunchEmail::Subject(uString* value)
{
    _Subject = value;
}

// public generated string get_To() [instance] :229
uString* LaunchEmail::To()
{
    return _To;
}

// public generated void set_To(string value) [instance] :229
void LaunchEmail::To(uString* value)
{
    _To = value;
}

// public generated LaunchEmail New() [static] :227
LaunchEmail* LaunchEmail::New1()
{
    LaunchEmail* obj1 = (LaunchEmail*)uNew(LaunchEmail_typeof());
    obj1->ctor_1();
    return obj1;
}
// }

// C:\ProgramData\Uno\Packages\Fuse.Launcher\0.19.3\$.uno(203)
// -----------------------------------------------------------

// public sealed class LaunchMaps :203
// {
::g::Fuse::Triggers::Actions::TriggerAction_type* LaunchMaps_typeof()
{
    static uSStrong< ::g::Fuse::Triggers::Actions::TriggerAction_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 9;
    options.ObjectSize = sizeof(LaunchMaps);
    options.TypeSize = sizeof(::g::Fuse::Triggers::Actions::TriggerAction_type);
    type = (::g::Fuse::Triggers::Actions::TriggerAction_type*)uClassType::New("Fuse.Triggers.Actions.LaunchMaps", options);
    type->SetBase(::g::Fuse::Triggers::Actions::TriggerAction_typeof());
    type->fp_ctor_ = (void*)LaunchMaps__New1_fn;
    type->fp_Perform = (void(*)(::g::Fuse::Triggers::Actions::TriggerAction*, ::g::Fuse::Node*))LaunchMaps__Perform_fn;
    type->SetFields(7,
        ::g::Uno::String_typeof(), offsetof(::g::Fuse::Triggers::Actions::LaunchMaps, _Latitude), 0,
        ::g::Uno::String_typeof(), offsetof(::g::Fuse::Triggers::Actions::LaunchMaps, _Longitude), 0);
    type->Reflection.SetFunctions(5,
        new uFunction("get_Latitude", NULL, (void*)LaunchMaps__get_Latitude_fn, 0, false, ::g::Uno::String_typeof(), 0),
        new uFunction("set_Latitude", NULL, (void*)LaunchMaps__set_Latitude_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::String_typeof()),
        new uFunction("get_Longitude", NULL, (void*)LaunchMaps__get_Longitude_fn, 0, false, ::g::Uno::String_typeof(), 0),
        new uFunction("set_Longitude", NULL, (void*)LaunchMaps__set_Longitude_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::String_typeof()),
        new uFunction(".ctor", NULL, (void*)LaunchMaps__New1_fn, 0, true, LaunchMaps_typeof(), 0));
    return type;
}

// public generated LaunchMaps() :203
void LaunchMaps__ctor_1_fn(LaunchMaps* __this)
{
    __this->ctor_1();
}

// public generated string get_Latitude() :205
void LaunchMaps__get_Latitude_fn(LaunchMaps* __this, uString** __retval)
{
    *__retval = __this->Latitude();
}

// public generated void set_Latitude(string value) :205
void LaunchMaps__set_Latitude_fn(LaunchMaps* __this, uString* value)
{
    __this->Latitude(value);
}

// public generated string get_Longitude() :206
void LaunchMaps__get_Longitude_fn(LaunchMaps* __this, uString** __retval)
{
    *__retval = __this->Longitude();
}

// public generated void set_Longitude(string value) :206
void LaunchMaps__set_Longitude_fn(LaunchMaps* __this, uString* value)
{
    __this->Longitude(value);
}

// public generated LaunchMaps New() :203
void LaunchMaps__New1_fn(LaunchMaps** __retval)
{
    *__retval = LaunchMaps::New1();
}

// protected override sealed void Perform(Fuse.Node target) :208
void LaunchMaps__Perform_fn(LaunchMaps* __this, ::g::Fuse::Node* target)
{
    double lat = 0.0;
    double lon = 0.0;

    if (::g::Uno::Double::TryParse(__this->Latitude(), &lat) && ::g::Uno::Double::TryParse(__this->Longitude(), &lon))
        ::g::Fuse::Launcher::LaunchMaps(lat, lon);
}

// public generated LaunchMaps() [instance] :203
void LaunchMaps::ctor_1()
{
    ctor_();
}

// public generated string get_Latitude() [instance] :205
uString* LaunchMaps::Latitude()
{
    return _Latitude;
}

// public generated void set_Latitude(string value) [instance] :205
void LaunchMaps::Latitude(uString* value)
{
    _Latitude = value;
}

// public generated string get_Longitude() [instance] :206
uString* LaunchMaps::Longitude()
{
    return _Longitude;
}

// public generated void set_Longitude(string value) [instance] :206
void LaunchMaps::Longitude(uString* value)
{
    _Longitude = value;
}

// public generated LaunchMaps New() [static] :203
LaunchMaps* LaunchMaps::New1()
{
    LaunchMaps* obj1 = (LaunchMaps*)uNew(LaunchMaps_typeof());
    obj1->ctor_1();
    return obj1;
}
// }

// C:\ProgramData\Uno\Packages\Fuse.Launcher\0.19.3\$.uno(217)
// -----------------------------------------------------------

// public sealed class LaunchUri :217
// {
::g::Fuse::Triggers::Actions::TriggerAction_type* LaunchUri_typeof()
{
    static uSStrong< ::g::Fuse::Triggers::Actions::TriggerAction_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 8;
    options.ObjectSize = sizeof(LaunchUri);
    options.TypeSize = sizeof(::g::Fuse::Triggers::Actions::TriggerAction_type);
    type = (::g::Fuse::Triggers::Actions::TriggerAction_type*)uClassType::New("Fuse.Triggers.Actions.LaunchUri", options);
    type->SetBase(::g::Fuse::Triggers::Actions::TriggerAction_typeof());
    type->fp_ctor_ = (void*)LaunchUri__New1_fn;
    type->fp_Perform = (void(*)(::g::Fuse::Triggers::Actions::TriggerAction*, ::g::Fuse::Node*))LaunchUri__Perform_fn;
    type->SetFields(7,
        ::g::Uno::String_typeof(), offsetof(::g::Fuse::Triggers::Actions::LaunchUri, _Uri), 0);
    type->Reflection.SetFunctions(3,
        new uFunction(".ctor", NULL, (void*)LaunchUri__New1_fn, 0, true, LaunchUri_typeof(), 0),
        new uFunction("get_Uri", NULL, (void*)LaunchUri__get_Uri_fn, 0, false, ::g::Uno::String_typeof(), 0),
        new uFunction("set_Uri", NULL, (void*)LaunchUri__set_Uri_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::String_typeof()));
    return type;
}

// public generated LaunchUri() :217
void LaunchUri__ctor_1_fn(LaunchUri* __this)
{
    __this->ctor_1();
}

// public generated LaunchUri New() :217
void LaunchUri__New1_fn(LaunchUri** __retval)
{
    *__retval = LaunchUri::New1();
}

// protected override sealed void Perform(Fuse.Node target) :221
void LaunchUri__Perform_fn(LaunchUri* __this, ::g::Fuse::Node* target)
{
    ::g::Fuse::Launcher::LaunchUri(::g::Uno::Net::Http::Uri::New1(__this->Uri()));
}

// public generated string get_Uri() :219
void LaunchUri__get_Uri_fn(LaunchUri* __this, uString** __retval)
{
    *__retval = __this->Uri();
}

// public generated void set_Uri(string value) :219
void LaunchUri__set_Uri_fn(LaunchUri* __this, uString* value)
{
    __this->Uri(value);
}

// public generated LaunchUri() [instance] :217
void LaunchUri::ctor_1()
{
    ctor_();
}

// public generated string get_Uri() [instance] :219
uString* LaunchUri::Uri()
{
    return _Uri;
}

// public generated void set_Uri(string value) [instance] :219
void LaunchUri::Uri(uString* value)
{
    _Uri = value;
}

// public generated LaunchUri New() [static] :217
LaunchUri* LaunchUri::New1()
{
    LaunchUri* obj1 = (LaunchUri*)uNew(LaunchUri_typeof());
    obj1->ctor_1();
    return obj1;
}
// }

// C:\ProgramData\Uno\Packages\Fuse.Controls\0.19.3\WebView\$.uno(613)
// -------------------------------------------------------------------

// public sealed class LoadHtml :613
// {
LoadHtml_type* LoadHtml_typeof()
{
    static uSStrong<LoadHtml_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 10;
    options.InterfaceCount = 1;
    options.ObjectSize = sizeof(LoadHtml);
    options.TypeSize = sizeof(LoadHtml_type);
    type = (LoadHtml_type*)uClassType::New("Fuse.Triggers.Actions.LoadHtml", options);
    type->SetBase(::g::Fuse::Triggers::Actions::WebViewNavAction_typeof());
    type->fp_ctor_ = (void*)LoadHtml__New1_fn;
    type->fp_Execute = (void(*)(::g::Fuse::Triggers::Actions::WebViewNavAction*, uObject*))LoadHtml__Execute_fn;
    type->interface0.fp_get_Source = (void(*)(uObject*, uString**))LoadHtml__get_Source_fn;
    type->interface0.fp_set_Source = (void(*)(uObject*, uString*))LoadHtml__set_Source_fn;
    ::STRINGS[2] = uString::Const("");
    ::TYPES[18] = ::g::Fuse::Controls::HTML_typeof();
    ::TYPES[19] = ::g::Fuse::Controls::ISourceReceiver_typeof();
    type->SetInterfaces(
        ::g::Fuse::Controls::ISourceReceiver_typeof(), offsetof(LoadHtml_type, interface0));
    type->SetFields(7,
        ::g::Fuse::Controls::HTML_typeof(), offsetof(::g::Fuse::Triggers::Actions::LoadHtml, _html), 0,
        ::g::Uno::String_typeof(), offsetof(::g::Fuse::Triggers::Actions::LoadHtml, _BaseUrl), 0,
        ::g::Uno::String_typeof(), offsetof(::g::Fuse::Triggers::Actions::LoadHtml, _Source), 0);
    type->Reflection.SetFunctions(7,
        new uFunction("get_BaseUrl", NULL, (void*)LoadHtml__get_BaseUrl_fn, 0, false, ::g::Uno::String_typeof(), 0),
        new uFunction("set_BaseUrl", NULL, (void*)LoadHtml__set_BaseUrl_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::String_typeof()),
        new uFunction("get_HTMLSource", NULL, (void*)LoadHtml__get_HTMLSource_fn, 0, false, ::g::Fuse::Controls::HTML_typeof(), 0),
        new uFunction("set_HTMLSource", NULL, (void*)LoadHtml__set_HTMLSource_fn, 0, false, uVoid_typeof(), 1, ::g::Fuse::Controls::HTML_typeof()),
        new uFunction(".ctor", NULL, (void*)LoadHtml__New1_fn, 0, true, LoadHtml_typeof(), 0),
        new uFunction("get_Source", NULL, (void*)LoadHtml__get_Source_fn, 0, false, ::g::Uno::String_typeof(), 0),
        new uFunction("set_Source", NULL, (void*)LoadHtml__set_Source_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::String_typeof()));
    return type;
}

// public generated LoadHtml() :613
void LoadHtml__ctor_2_fn(LoadHtml* __this)
{
    __this->ctor_2();
}

// public generated string get_BaseUrl() :632
void LoadHtml__get_BaseUrl_fn(LoadHtml* __this, uString** __retval)
{
    *__retval = __this->BaseUrl();
}

// public generated void set_BaseUrl(string value) :632
void LoadHtml__set_BaseUrl_fn(LoadHtml* __this, uString* value)
{
    __this->BaseUrl(value);
}

// private override sealed void Execute(Fuse.Controls.IWebView webview) :634
void LoadHtml__Execute_fn(LoadHtml* __this, uObject* webview)
{
    if (::g::Uno::String::op_Inequality(__this->Source(), ::STRINGS[2/*""*/]))
        ::g::Fuse::Controls::IWebView::LoadHtml1(uInterface(uPtr(webview), ::TYPES[14/*Fuse.Controls.IWebView*/]), __this->Source(), __this->BaseUrl());
}

// public Fuse.Controls.HTML get_HTMLSource() :622
void LoadHtml__get_HTMLSource_fn(LoadHtml* __this, ::g::Fuse::Controls::HTML** __retval)
{
    *__retval = __this->HTMLSource();
}

// public void set_HTMLSource(Fuse.Controls.HTML value) :626
void LoadHtml__set_HTMLSource_fn(LoadHtml* __this, ::g::Fuse::Controls::HTML* value)
{
    __this->HTMLSource(value);
}

// public generated LoadHtml New() :613
void LoadHtml__New1_fn(LoadHtml** __retval)
{
    *__retval = LoadHtml::New1();
}

// public generated string get_Source() :617
void LoadHtml__get_Source_fn(LoadHtml* __this, uString** __retval)
{
    *__retval = __this->Source();
}

// public generated void set_Source(string value) :617
void LoadHtml__set_Source_fn(LoadHtml* __this, uString* value)
{
    __this->Source(value);
}

// public generated LoadHtml() [instance] :613
void LoadHtml::ctor_2()
{
    ctor_1();
}

// public generated string get_BaseUrl() [instance] :632
uString* LoadHtml::BaseUrl()
{
    return _BaseUrl;
}

// public generated void set_BaseUrl(string value) [instance] :632
void LoadHtml::BaseUrl(uString* value)
{
    _BaseUrl = value;
}

// public Fuse.Controls.HTML get_HTMLSource() [instance] :622
::g::Fuse::Controls::HTML* LoadHtml::HTMLSource()
{
    return _html;
}

// public void set_HTMLSource(Fuse.Controls.HTML value) [instance] :626
void LoadHtml::HTMLSource(::g::Fuse::Controls::HTML* value)
{
    _html = value;
    uPtr(_html)->Receiver = (uObject*)this;
}

// public generated string get_Source() [instance] :617
uString* LoadHtml::Source()
{
    return _Source;
}

// public generated void set_Source(string value) [instance] :617
void LoadHtml::Source(uString* value)
{
    _Source = value;
}

// public generated LoadHtml New() [static] :613
LoadHtml* LoadHtml::New1()
{
    LoadHtml* obj1 = (LoadHtml*)uNew(LoadHtml_typeof());
    obj1->ctor_2();
    return obj1;
}
// }

// C:\ProgramData\Uno\Packages\Fuse.Controls\0.19.3\WebView\$.uno(599)
// -------------------------------------------------------------------

// public sealed class LoadUrl :599
// {
::g::Fuse::Triggers::Actions::WebViewNavAction_type* LoadUrl_typeof()
{
    static uSStrong< ::g::Fuse::Triggers::Actions::WebViewNavAction_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 8;
    options.ObjectSize = sizeof(LoadUrl);
    options.TypeSize = sizeof(::g::Fuse::Triggers::Actions::WebViewNavAction_type);
    type = (::g::Fuse::Triggers::Actions::WebViewNavAction_type*)uClassType::New("Fuse.Triggers.Actions.LoadUrl", options);
    type->SetBase(::g::Fuse::Triggers::Actions::WebViewNavAction_typeof());
    type->fp_ctor_ = (void*)LoadUrl__New1_fn;
    type->fp_Execute = (void(*)(::g::Fuse::Triggers::Actions::WebViewNavAction*, uObject*))LoadUrl__Execute_fn;
    ::STRINGS[2] = uString::Const("");
    type->SetFields(7,
        ::g::Uno::String_typeof(), offsetof(::g::Fuse::Triggers::Actions::LoadUrl, _Url), 0);
    type->Reflection.SetFunctions(3,
        new uFunction(".ctor", NULL, (void*)LoadUrl__New1_fn, 0, true, LoadUrl_typeof(), 0),
        new uFunction("get_Url", NULL, (void*)LoadUrl__get_Url_fn, 0, false, ::g::Uno::String_typeof(), 0),
        new uFunction("set_Url", NULL, (void*)LoadUrl__set_Url_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::String_typeof()));
    return type;
}

// public generated LoadUrl() :599
void LoadUrl__ctor_2_fn(LoadUrl* __this)
{
    __this->ctor_2();
}

// private override sealed void Execute(Fuse.Controls.IWebView webview) :604
void LoadUrl__Execute_fn(LoadUrl* __this, uObject* webview)
{
    if (::g::Uno::String::op_Inequality(__this->Url(), ::STRINGS[2/*""*/]))
        ::g::Fuse::Controls::IWebView::LoadUrl(uInterface(uPtr(webview), ::TYPES[14/*Fuse.Controls.IWebView*/]), __this->Url());
}

// public generated LoadUrl New() :599
void LoadUrl__New1_fn(LoadUrl** __retval)
{
    *__retval = LoadUrl::New1();
}

// public generated string get_Url() :602
void LoadUrl__get_Url_fn(LoadUrl* __this, uString** __retval)
{
    *__retval = __this->Url();
}

// public generated void set_Url(string value) :602
void LoadUrl__set_Url_fn(LoadUrl* __this, uString* value)
{
    __this->Url(value);
}

// public generated LoadUrl() [instance] :599
void LoadUrl::ctor_2()
{
    ctor_1();
}

// public generated string get_Url() [instance] :602
uString* LoadUrl::Url()
{
    return _Url;
}

// public generated void set_Url(string value) [instance] :602
void LoadUrl::Url(uString* value)
{
    _Url = value;
}

// public generated LoadUrl New() [static] :599
LoadUrl* LoadUrl::New1()
{
    LoadUrl* obj1 = (LoadUrl*)uNew(LoadUrl_typeof());
    obj1->ctor_2();
    return obj1;
}
// }

// C:\ProgramData\Uno\Packages\Fuse.Triggers\0.19.3\Actions\$.uno(144)
// -------------------------------------------------------------------

// public sealed class Pause :144
// {
::g::Fuse::Triggers::Actions::TriggerAction_type* Pause_typeof()
{
    static uSStrong< ::g::Fuse::Triggers::Actions::TriggerAction_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 8;
    options.ObjectSize = sizeof(Pause);
    options.TypeSize = sizeof(::g::Fuse::Triggers::Actions::TriggerAction_type);
    type = (::g::Fuse::Triggers::Actions::TriggerAction_type*)uClassType::New("Fuse.Triggers.Actions.Pause", options);
    type->SetBase(::g::Fuse::Triggers::Actions::PlaybackAction_typeof());
    type->fp_ctor_ = (void*)Pause__New1_fn;
    type->fp_Perform = (void(*)(::g::Fuse::Triggers::Actions::TriggerAction*, ::g::Fuse::Node*))Pause__Perform_fn;
    ::TYPES[20] = ::g::Fuse::Triggers::Actions::PlaybackAction_typeof();
    ::TYPES[21] = ::g::Fuse::Triggers::IPlayback_typeof();
    type->SetFields(8);
    type->Reflection.SetFunctions(1,
        new uFunction(".ctor", NULL, (void*)Pause__New1_fn, 0, true, Pause_typeof(), 0));
    return type;
}

// public generated Pause() :144
void Pause__ctor_2_fn(Pause* __this)
{
    __this->ctor_2();
}

// public generated Pause New() :144
void Pause__New1_fn(Pause** __retval)
{
    *__retval = Pause::New1();
}

// protected override sealed void Perform(Fuse.Node target) :146
void Pause__Perform_fn(Pause* __this, ::g::Fuse::Node* target)
{
    uObject* ind1 = __this->Target();
    uObject* t = (ind1 != NULL) ? ind1 : uAs<uObject*>(target, ::TYPES[21/*Fuse.Triggers.IPlayback*/]);

    if (t != NULL)
    {
        if (::g::Fuse::Triggers::IPlayback::CanPause(uInterface(uPtr(t), ::TYPES[21/*Fuse.Triggers.IPlayback*/])))
            ::g::Fuse::Triggers::IPlayback::Pause(uInterface(uPtr(t), ::TYPES[21/*Fuse.Triggers.IPlayback*/]));
    }
}

// public generated Pause() [instance] :144
void Pause::ctor_2()
{
    ctor_1();
}

// public generated Pause New() [static] :144
Pause* Pause::New1()
{
    Pause* obj2 = (Pause*)uNew(Pause_typeof());
    obj2->ctor_2();
    return obj2;
}
// }

// C:\ProgramData\Uno\Packages\Fuse.Triggers\0.19.3\Actions\$.uno(126)
// -------------------------------------------------------------------

// public abstract class PlaybackAction :126
// {
::g::Fuse::Triggers::Actions::TriggerAction_type* PlaybackAction_typeof()
{
    static uSStrong< ::g::Fuse::Triggers::Actions::TriggerAction_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 8;
    options.ObjectSize = sizeof(PlaybackAction);
    options.TypeSize = sizeof(::g::Fuse::Triggers::Actions::TriggerAction_type);
    type = (::g::Fuse::Triggers::Actions::TriggerAction_type*)uClassType::New("Fuse.Triggers.Actions.PlaybackAction", options);
    type->SetBase(::g::Fuse::Triggers::Actions::TriggerAction_typeof());
    type->SetFields(7,
        ::g::Fuse::Triggers::IPlayback_typeof(), offsetof(::g::Fuse::Triggers::Actions::PlaybackAction, _Target), 0);
    type->Reflection.SetFunctions(2,
        new uFunction("get_Target", NULL, (void*)PlaybackAction__get_Target_fn, 0, false, ::g::Fuse::Triggers::IPlayback_typeof(), 0),
        new uFunction("set_Target", NULL, (void*)PlaybackAction__set_Target_fn, 0, false, uVoid_typeof(), 1, ::g::Fuse::Triggers::IPlayback_typeof()));
    return type;
}

// internal PlaybackAction() :130
void PlaybackAction__ctor_1_fn(PlaybackAction* __this)
{
    __this->ctor_1();
}

// public generated Fuse.Triggers.IPlayback get_Target() :128
void PlaybackAction__get_Target_fn(PlaybackAction* __this, uObject** __retval)
{
    *__retval = __this->Target();
}

// public generated void set_Target(Fuse.Triggers.IPlayback value) :128
void PlaybackAction__set_Target_fn(PlaybackAction* __this, uObject* value)
{
    __this->Target(value);
}

// internal PlaybackAction() [instance] :130
void PlaybackAction::ctor_1()
{
    ctor_();
}

// public generated Fuse.Triggers.IPlayback get_Target() [instance] :128
uObject* PlaybackAction::Target()
{
    return _Target;
}

// public generated void set_Target(Fuse.Triggers.IPlayback value) [instance] :128
void PlaybackAction::Target(uObject* value)
{
    _Target = value;
}
// }

// C:\ProgramData\Uno\Packages\Fuse.Triggers\0.19.3\Actions\$.uno(166)
// -------------------------------------------------------------------

// public sealed class PlayTo :166
// {
::g::Fuse::Triggers::Actions::TriggerAction_type* PlayTo_typeof()
{
    static uSStrong< ::g::Fuse::Triggers::Actions::TriggerAction_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 9;
    options.ObjectSize = sizeof(PlayTo);
    options.TypeSize = sizeof(::g::Fuse::Triggers::Actions::TriggerAction_type);
    type = (::g::Fuse::Triggers::Actions::TriggerAction_type*)uClassType::New("Fuse.Triggers.Actions.PlayTo", options);
    type->SetBase(::g::Fuse::Triggers::Actions::PlaybackAction_typeof());
    type->fp_ctor_ = (void*)PlayTo__New1_fn;
    type->fp_Perform = (void(*)(::g::Fuse::Triggers::Actions::TriggerAction*, ::g::Fuse::Node*))PlayTo__Perform_fn;
    ::TYPES[20] = ::g::Fuse::Triggers::Actions::PlaybackAction_typeof();
    ::TYPES[21] = ::g::Fuse::Triggers::IPlayback_typeof();
    type->SetFields(8,
        ::g::Uno::Double_typeof(), offsetof(::g::Fuse::Triggers::Actions::PlayTo, _Progress), 0);
    type->Reflection.SetFunctions(3,
        new uFunction(".ctor", NULL, (void*)PlayTo__New1_fn, 0, true, PlayTo_typeof(), 0),
        new uFunction("get_Progress", NULL, (void*)PlayTo__get_Progress_fn, 0, false, ::g::Uno::Double_typeof(), 0),
        new uFunction("set_Progress", NULL, (void*)PlayTo__set_Progress_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::Double_typeof()));
    return type;
}

// public generated PlayTo() :166
void PlayTo__ctor_2_fn(PlayTo* __this)
{
    __this->ctor_2();
}

// public generated PlayTo New() :166
void PlayTo__New1_fn(PlayTo** __retval)
{
    *__retval = PlayTo::New1();
}

// protected override sealed void Perform(Fuse.Node target) :170
void PlayTo__Perform_fn(PlayTo* __this, ::g::Fuse::Node* target)
{
    uObject* ind1 = __this->Target();
    uObject* t = (ind1 != NULL) ? ind1 : uAs<uObject*>(target, ::TYPES[21/*Fuse.Triggers.IPlayback*/]);

    if (t != NULL)
    {
        if (::g::Fuse::Triggers::IPlayback::CanPlayTo(uInterface(uPtr(t), ::TYPES[21/*Fuse.Triggers.IPlayback*/])))
            ::g::Fuse::Triggers::IPlayback::PlayTo(uInterface(uPtr(t), ::TYPES[21/*Fuse.Triggers.IPlayback*/]), __this->Progress());
    }
}

// public generated double get_Progress() :168
void PlayTo__get_Progress_fn(PlayTo* __this, double* __retval)
{
    *__retval = __this->Progress();
}

// public generated void set_Progress(double value) :168
void PlayTo__set_Progress_fn(PlayTo* __this, double* value)
{
    __this->Progress(*value);
}

// public generated PlayTo() [instance] :166
void PlayTo::ctor_2()
{
    ctor_1();
}

// public generated double get_Progress() [instance] :168
double PlayTo::Progress()
{
    return _Progress;
}

// public generated void set_Progress(double value) [instance] :168
void PlayTo::Progress(double value)
{
    _Progress = value;
}

// public generated PlayTo New() [static] :166
PlayTo* PlayTo::New1()
{
    PlayTo* obj2 = (PlayTo*)uNew(PlayTo_typeof());
    obj2->ctor_2();
    return obj2;
}
// }

// C:\ProgramData\Uno\Packages\Fuse.Triggers\0.19.3\Actions\$.uno(187)
// -------------------------------------------------------------------

// public sealed class Pulse :187
// {
::g::Fuse::Triggers::Actions::TriggerAction_type* Pulse_typeof()
{
    static uSStrong< ::g::Fuse::Triggers::Actions::TriggerAction_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 8;
    options.ObjectSize = sizeof(Pulse);
    options.TypeSize = sizeof(::g::Fuse::Triggers::Actions::TriggerAction_type);
    type = (::g::Fuse::Triggers::Actions::TriggerAction_type*)uClassType::New("Fuse.Triggers.Actions.Pulse", options);
    type->SetBase(::g::Fuse::Triggers::Actions::TriggerAction_typeof());
    type->fp_ctor_ = (void*)Pulse__New1_fn;
    type->fp_Perform = (void(*)(::g::Fuse::Triggers::Actions::TriggerAction*, ::g::Fuse::Node*))Pulse__Perform_fn;
    type->SetFields(7,
        ::g::Fuse::Triggers::WhileBool_typeof(), offsetof(::g::Fuse::Triggers::Actions::Pulse, _Target), 0);
    type->Reflection.SetFunctions(3,
        new uFunction(".ctor", NULL, (void*)Pulse__New1_fn, 0, true, Pulse_typeof(), 0),
        new uFunction("get_Target", NULL, (void*)Pulse__get_Target_fn, 0, false, ::g::Fuse::Triggers::WhileBool_typeof(), 0),
        new uFunction("set_Target", NULL, (void*)Pulse__set_Target_fn, 0, false, uVoid_typeof(), 1, ::g::Fuse::Triggers::WhileBool_typeof()));
    return type;
}

// public generated Pulse() :187
void Pulse__ctor_1_fn(Pulse* __this)
{
    __this->ctor_1();
}

// public generated Pulse New() :187
void Pulse__New1_fn(Pulse** __retval)
{
    *__retval = Pulse::New1();
}

// protected override sealed void Perform(Fuse.Node target) :191
void Pulse__Perform_fn(Pulse* __this, ::g::Fuse::Node* target)
{
    ::g::Fuse::Triggers::WhileBool* t = __this->Target();

    if (t != NULL)
        uPtr(t)->Pulse1();
}

// public generated Fuse.Triggers.WhileBool get_Target() :189
void Pulse__get_Target_fn(Pulse* __this, ::g::Fuse::Triggers::WhileBool** __retval)
{
    *__retval = __this->Target();
}

// public generated void set_Target(Fuse.Triggers.WhileBool value) :189
void Pulse__set_Target_fn(Pulse* __this, ::g::Fuse::Triggers::WhileBool* value)
{
    __this->Target(value);
}

// public generated Pulse() [instance] :187
void Pulse::ctor_1()
{
    ctor_();
}

// public generated Fuse.Triggers.WhileBool get_Target() [instance] :189
::g::Fuse::Triggers::WhileBool* Pulse::Target()
{
    return _Target;
}

// public generated void set_Target(Fuse.Triggers.WhileBool value) [instance] :189
void Pulse::Target(::g::Fuse::Triggers::WhileBool* value)
{
    _Target = value;
}

// public generated Pulse New() [static] :187
Pulse* Pulse::New1()
{
    Pulse* obj1 = (Pulse*)uNew(Pulse_typeof());
    obj1->ctor_1();
    return obj1;
}
// }

// C:\ProgramData\Uno\Packages\Fuse.UserEvents\0.19.3\$.uno(74)
// ------------------------------------------------------------

// public sealed class RaiseUserEvent :74
// {
::g::Fuse::Triggers::Actions::TriggerAction_type* RaiseUserEvent_typeof()
{
    static uSStrong< ::g::Fuse::Triggers::Actions::TriggerAction_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 11;
    options.ObjectSize = sizeof(RaiseUserEvent);
    options.TypeSize = sizeof(::g::Fuse::Triggers::Actions::TriggerAction_type);
    type = (::g::Fuse::Triggers::Actions::TriggerAction_type*)uClassType::New("Fuse.Triggers.Actions.RaiseUserEvent", options);
    type->SetBase(::g::Fuse::Triggers::Actions::TriggerAction_typeof());
    type->fp_ctor_ = (void*)RaiseUserEvent__New1_fn;
    type->fp_Perform = (void(*)(::g::Fuse::Triggers::Actions::TriggerAction*, ::g::Fuse::Node*))RaiseUserEvent__Perform_fn;
    ::STRINGS[8] = uString::Const("no UserEvent found: ");
    ::STRINGS[9] = uString::Const("C:\\ProgramData\\Uno\\Packages\\Fuse.UserEvents\\0.19.3\\$.uno");
    ::STRINGS[10] = uString::Const("Perform");
    ::TYPES[22] = ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Triggers::Actions::UserEventArg_typeof());
    ::TYPES[23] = ::g::Uno::Collections::Dictionary_typeof()->MakeType(::g::Uno::String_typeof(), uObject_typeof());
    ::TYPES[24] = ::g::Uno::Collections::IEnumerator1_typeof()->MakeType(::g::Fuse::Triggers::Actions::UserEventArg_typeof());
    ::TYPES[25] = ::g::Fuse::Triggers::Actions::UserEventArg_typeof();
    ::TYPES[26] = ::g::Uno::Collections::IList_typeof()->MakeType(::g::Fuse::Triggers::Actions::UserEventArg_typeof());
    ::TYPES[27] = ::g::Uno::Collections::List_typeof()->MakeType(::g::Fuse::Triggers::Actions::UserEventArg_typeof());
    type->SetFields(7,
        ::g::Uno::Collections::IList_typeof()->MakeType(::g::Fuse::Triggers::Actions::UserEventArg_typeof()), offsetof(::g::Fuse::Triggers::Actions::RaiseUserEvent, _args), 0,
        ::g::Fuse::UserEvent_typeof(), offsetof(::g::Fuse::Triggers::Actions::RaiseUserEvent, _event), 0,
        ::g::Fuse::Node_typeof(), offsetof(::g::Fuse::Triggers::Actions::RaiseUserEvent, _eventTarget), 0,
        ::g::Uno::String_typeof(), offsetof(::g::Fuse::Triggers::Actions::RaiseUserEvent, _name), 0);
    type->Reflection.SetFunctions(4,
        new uFunction("get_ArgList", NULL, (void*)RaiseUserEvent__get_ArgList_fn, 0, false, ::g::Uno::Collections::IList_typeof()->MakeType(::g::Fuse::Triggers::Actions::UserEventArg_typeof()), 0),
        new uFunction("get_Name", NULL, (void*)RaiseUserEvent__get_Name_fn, 0, false, ::g::Uno::String_typeof(), 0),
        new uFunction("set_Name", NULL, (void*)RaiseUserEvent__set_Name_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::String_typeof()),
        new uFunction(".ctor", NULL, (void*)RaiseUserEvent__New1_fn, 0, true, RaiseUserEvent_typeof(), 0));
    return type;
}

// public generated RaiseUserEvent() :74
void RaiseUserEvent__ctor_1_fn(RaiseUserEvent* __this)
{
    __this->ctor_1();
}

// public Uno.Collections.IList<Fuse.Triggers.Actions.UserEventArg> get_ArgList() :94
void RaiseUserEvent__get_ArgList_fn(RaiseUserEvent* __this, uObject** __retval)
{
    *__retval = __this->ArgList();
}

// private Uno.Collections.Dictionary<string, object> ConvertArgs() :117
void RaiseUserEvent__ConvertArgs_fn(RaiseUserEvent* __this, ::g::Uno::Collections::Dictionary** __retval)
{
    *__retval = __this->ConvertArgs();
}

// public string get_Name() :79
void RaiseUserEvent__get_Name_fn(RaiseUserEvent* __this, uString** __retval)
{
    *__retval = __this->Name();
}

// public void set_Name(string value) :80
void RaiseUserEvent__set_Name_fn(RaiseUserEvent* __this, uString* value)
{
    __this->Name(value);
}

// public generated RaiseUserEvent New() :74
void RaiseUserEvent__New1_fn(RaiseUserEvent** __retval)
{
    *__retval = RaiseUserEvent::New1();
}

// protected override sealed void Perform(Fuse.Node target) :102
void RaiseUserEvent__Perform_fn(RaiseUserEvent* __this, ::g::Fuse::Node* target)
{
    if ((__this->_event == NULL) || (__this->_eventTarget != target))
    {
        ::g::Fuse::Node* n;
        __this->_event = ::g::Fuse::UserEvent::ScanTree(target, __this->Name(), &n);
        __this->_eventTarget = target;
    }

    if (__this->_event == NULL)
        ::g::Fuse::Diagnostics::Error(::g::Uno::String::op_Addition2(::STRINGS[8/*"no UserEven...*/], __this->Name()), NULL, ::STRINGS[9/*"C:\\Program...*/], 112, ::STRINGS[10/*"Perform"*/]);
    else
        uPtr(__this->_event)->Raise(__this->ConvertArgs());
}

// public generated RaiseUserEvent() [instance] :74
void RaiseUserEvent::ctor_1()
{
    ctor_();
}

// public Uno.Collections.IList<Fuse.Triggers.Actions.UserEventArg> get_ArgList() [instance] :94
uObject* RaiseUserEvent::ArgList()
{
    if (_args == NULL)
        _args = (uObject*)((::g::Uno::Collections::List*)::g::Uno::Collections::List::New1(::TYPES[27/*Uno.Collections.List<Fuse.Triggers.Actions.UserEventArg>*/]));

    return _args;
}

// private Uno.Collections.Dictionary<string, object> ConvertArgs() [instance] :117
::g::Uno::Collections::Dictionary* RaiseUserEvent::ConvertArgs()
{
    ::g::Fuse::Triggers::Actions::UserEventArg* ret3;

    if ((_args == NULL) || (::g::Uno::Collections::ICollection::Count(uInterface(uPtr(_args), ::TYPES[22/*Uno.Collections.ICollection<Fuse.Triggers.Actions.UserEventArg>*/])) == 0))
        return NULL;

    ::g::Uno::Collections::Dictionary* d = (::g::Uno::Collections::Dictionary*)::g::Uno::Collections::Dictionary::New1(::TYPES[23/*Uno.Collections.Dictionary<string, object>*/]);

    for (uObject* enum1 = (uObject*)::g::Uno::Collections::IEnumerable::GetEnumerator(uInterface(uPtr(_args), ::g::Uno::Collections::IEnumerable_typeof()->MakeType(::TYPES[25/*Fuse.Triggers.Actions.UserEventArg*/]))); ::g::Uno::Collections::IEnumerator::MoveNext(uInterface(uPtr(enum1), ::g::Uno::Collections::IEnumerator_typeof())); )
    {
        ::g::Fuse::Triggers::Actions::UserEventArg* arg = (::g::Uno::Collections::IEnumerator1::get_Current_ex(uInterface(uPtr(enum1), ::TYPES[24/*Uno.Collections.IEnumerator<Fuse.Triggers.Actions.UserEventArg>*/]), &ret3), ret3);
        ::g::Uno::Collections::Dictionary__set_Item_fn(uPtr(d), uPtr(arg)->Name(), uPtr(arg)->Value());
    }

    return d;
}

// public string get_Name() [instance] :79
uString* RaiseUserEvent::Name()
{
    return _name;
}

// public void set_Name(string value) [instance] :80
void RaiseUserEvent::Name(uString* value)
{
    _name = value;
    _event = NULL;
}

// public generated RaiseUserEvent New() [static] :74
RaiseUserEvent* RaiseUserEvent::New1()
{
    RaiseUserEvent* obj2 = (RaiseUserEvent*)uNew(RaiseUserEvent_typeof());
    obj2->ctor_1();
    return obj2;
}
// }

// C:\ProgramData\Uno\Packages\Fuse.Triggers\0.19.3\Actions\$.uno(85)
// ------------------------------------------------------------------

// public sealed class ReleaseFocus :85
// {
::g::Fuse::Triggers::Actions::TriggerAction_type* ReleaseFocus_typeof()
{
    static uSStrong< ::g::Fuse::Triggers::Actions::TriggerAction_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 7;
    options.ObjectSize = sizeof(ReleaseFocus);
    options.TypeSize = sizeof(::g::Fuse::Triggers::Actions::TriggerAction_type);
    type = (::g::Fuse::Triggers::Actions::TriggerAction_type*)uClassType::New("Fuse.Triggers.Actions.ReleaseFocus", options);
    type->SetBase(::g::Fuse::Triggers::Actions::TriggerAction_typeof());
    type->fp_ctor_ = (void*)ReleaseFocus__New1_fn;
    type->fp_Perform = (void(*)(::g::Fuse::Triggers::Actions::TriggerAction*, ::g::Fuse::Node*))ReleaseFocus__Perform_fn;
    type->SetFields(7);
    type->Reflection.SetFunctions(1,
        new uFunction(".ctor", NULL, (void*)ReleaseFocus__New1_fn, 0, true, ReleaseFocus_typeof(), 0));
    return type;
}

// public generated ReleaseFocus() :85
void ReleaseFocus__ctor_1_fn(ReleaseFocus* __this)
{
    __this->ctor_1();
}

// public generated ReleaseFocus New() :85
void ReleaseFocus__New1_fn(ReleaseFocus** __retval)
{
    *__retval = ReleaseFocus::New1();
}

// protected override sealed void Perform(Fuse.Node target) :87
void ReleaseFocus__Perform_fn(ReleaseFocus* __this, ::g::Fuse::Node* target)
{
    ::g::Fuse::Input::Focus::GiveTo(NULL);
}

// public generated ReleaseFocus() [instance] :85
void ReleaseFocus::ctor_1()
{
    ctor_();
}

// public generated ReleaseFocus New() [static] :85
ReleaseFocus* ReleaseFocus::New1()
{
    ReleaseFocus* obj1 = (ReleaseFocus*)uNew(ReleaseFocus_typeof());
    obj1->ctor_1();
    return obj1;
}
// }

// C:\ProgramData\Uno\Packages\Fuse.Controls\0.19.3\WebView\$.uno(583)
// -------------------------------------------------------------------

// public sealed class Reload :583
// {
::g::Fuse::Triggers::Actions::WebViewNavAction_type* Reload_typeof()
{
    static uSStrong< ::g::Fuse::Triggers::Actions::WebViewNavAction_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 7;
    options.ObjectSize = sizeof(Reload);
    options.TypeSize = sizeof(::g::Fuse::Triggers::Actions::WebViewNavAction_type);
    type = (::g::Fuse::Triggers::Actions::WebViewNavAction_type*)uClassType::New("Fuse.Triggers.Actions.Reload", options);
    type->SetBase(::g::Fuse::Triggers::Actions::WebViewNavAction_typeof());
    type->fp_ctor_ = (void*)Reload__New1_fn;
    type->fp_Execute = (void(*)(::g::Fuse::Triggers::Actions::WebViewNavAction*, uObject*))Reload__Execute_fn;
    type->SetFields(7);
    type->Reflection.SetFunctions(1,
        new uFunction(".ctor", NULL, (void*)Reload__New1_fn, 0, true, Reload_typeof(), 0));
    return type;
}

// public generated Reload() :583
void Reload__ctor_2_fn(Reload* __this)
{
    __this->ctor_2();
}

// private override sealed void Execute(Fuse.Controls.IWebView webview) :585
void Reload__Execute_fn(Reload* __this, uObject* webview)
{
    ::g::Fuse::Controls::IWebView::Reload(uInterface(uPtr(webview), ::TYPES[14/*Fuse.Controls.IWebView*/]));
}

// public generated Reload New() :583
void Reload__New1_fn(Reload** __retval)
{
    *__retval = Reload::New1();
}

// public generated Reload() [instance] :583
void Reload::ctor_2()
{
    ctor_1();
}

// public generated Reload New() [static] :583
Reload* Reload::New1()
{
    Reload* obj1 = (Reload*)uNew(Reload_typeof());
    obj1->ctor_2();
    return obj1;
}
// }

// C:\ProgramData\Uno\Packages\Fuse.Triggers\0.19.3\Actions\$.uno(155)
// -------------------------------------------------------------------

// public sealed class Resume :155
// {
::g::Fuse::Triggers::Actions::TriggerAction_type* Resume_typeof()
{
    static uSStrong< ::g::Fuse::Triggers::Actions::TriggerAction_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 8;
    options.ObjectSize = sizeof(Resume);
    options.TypeSize = sizeof(::g::Fuse::Triggers::Actions::TriggerAction_type);
    type = (::g::Fuse::Triggers::Actions::TriggerAction_type*)uClassType::New("Fuse.Triggers.Actions.Resume", options);
    type->SetBase(::g::Fuse::Triggers::Actions::PlaybackAction_typeof());
    type->fp_ctor_ = (void*)Resume__New1_fn;
    type->fp_Perform = (void(*)(::g::Fuse::Triggers::Actions::TriggerAction*, ::g::Fuse::Node*))Resume__Perform_fn;
    ::TYPES[20] = ::g::Fuse::Triggers::Actions::PlaybackAction_typeof();
    ::TYPES[21] = ::g::Fuse::Triggers::IPlayback_typeof();
    type->SetFields(8);
    type->Reflection.SetFunctions(1,
        new uFunction(".ctor", NULL, (void*)Resume__New1_fn, 0, true, Resume_typeof(), 0));
    return type;
}

// public generated Resume() :155
void Resume__ctor_2_fn(Resume* __this)
{
    __this->ctor_2();
}

// public generated Resume New() :155
void Resume__New1_fn(Resume** __retval)
{
    *__retval = Resume::New1();
}

// protected override sealed void Perform(Fuse.Node target) :157
void Resume__Perform_fn(Resume* __this, ::g::Fuse::Node* target)
{
    uObject* ind1 = __this->Target();
    uObject* t = (ind1 != NULL) ? ind1 : uAs<uObject*>(target, ::TYPES[21/*Fuse.Triggers.IPlayback*/]);

    if (t != NULL)
    {
        if (::g::Fuse::Triggers::IPlayback::CanResume(uInterface(uPtr(t), ::TYPES[21/*Fuse.Triggers.IPlayback*/])))
            ::g::Fuse::Triggers::IPlayback::Resume(uInterface(uPtr(t), ::TYPES[21/*Fuse.Triggers.IPlayback*/]));
    }
}

// public generated Resume() [instance] :155
void Resume::ctor_2()
{
    ctor_1();
}

// public generated Resume New() [static] :155
Resume* Resume::New1()
{
    Resume* obj2 = (Resume*)uNew(Resume_typeof());
    obj2->ctor_2();
    return obj2;
}
// }

// C:\ProgramData\Uno\Packages\Fuse.Controls\0.19.3\Triggers\$.uno(26)
// -------------------------------------------------------------------

// public sealed class SendToBack :26
// {
::g::Fuse::Triggers::Actions::TriggerAction_type* SendToBack_typeof()
{
    static uSStrong< ::g::Fuse::Triggers::Actions::TriggerAction_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 8;
    options.ObjectSize = sizeof(SendToBack);
    options.TypeSize = sizeof(::g::Fuse::Triggers::Actions::TriggerAction_type);
    type = (::g::Fuse::Triggers::Actions::TriggerAction_type*)uClassType::New("Fuse.Triggers.Actions.SendToBack", options);
    type->SetBase(::g::Fuse::Triggers::Actions::TriggerAction_typeof());
    type->fp_ctor_ = (void*)SendToBack__New1_fn;
    type->fp_Perform = (void(*)(::g::Fuse::Triggers::Actions::TriggerAction*, ::g::Fuse::Node*))SendToBack__Perform_fn;
    ::TYPES[1] = ::g::Fuse::Controls::Panel_typeof();
    ::TYPES[2] = ::g::Fuse::Node_typeof();
    type->SetFields(7,
        ::g::Fuse::Node_typeof(), offsetof(::g::Fuse::Triggers::Actions::SendToBack, _Target), 0);
    type->Reflection.SetFunctions(3,
        new uFunction(".ctor", NULL, (void*)SendToBack__New1_fn, 0, true, SendToBack_typeof(), 0),
        new uFunction("get_Target", NULL, (void*)SendToBack__get_Target_fn, 0, false, ::g::Fuse::Node_typeof(), 0),
        new uFunction("set_Target", NULL, (void*)SendToBack__set_Target_fn, 0, false, uVoid_typeof(), 1, ::g::Fuse::Node_typeof()));
    return type;
}

// public generated SendToBack() :26
void SendToBack__ctor_1_fn(SendToBack* __this)
{
    __this->ctor_1();
}

// public generated SendToBack New() :26
void SendToBack__New1_fn(SendToBack** __retval)
{
    *__retval = SendToBack::New1();
}

// protected override sealed void Perform(Fuse.Node target) :30
void SendToBack__Perform_fn(SendToBack* __this, ::g::Fuse::Node* target)
{
    ::g::Fuse::Node* ind1 = __this->Target();
    ::g::Fuse::Node* elm = (ind1 != NULL) ? ind1 : target;

    if (elm != NULL)
    {
        ::g::Fuse::Controls::Panel* panel = uAs< ::g::Fuse::Controls::Panel*>(uPtr(elm)->Parent(), ::TYPES[1/*Fuse.Controls.Panel*/]);

        if (panel != NULL)
            uPtr(panel)->SendToBack(elm);
    }
}

// public generated Fuse.Node get_Target() :28
void SendToBack__get_Target_fn(SendToBack* __this, ::g::Fuse::Node** __retval)
{
    *__retval = __this->Target();
}

// public generated void set_Target(Fuse.Node value) :28
void SendToBack__set_Target_fn(SendToBack* __this, ::g::Fuse::Node* value)
{
    __this->Target(value);
}

// public generated SendToBack() [instance] :26
void SendToBack::ctor_1()
{
    ctor_();
}

// public generated Fuse.Node get_Target() [instance] :28
::g::Fuse::Node* SendToBack::Target()
{
    return _Target;
}

// public generated void set_Target(Fuse.Node value) [instance] :28
void SendToBack::Target(::g::Fuse::Node* value)
{
    _Target = value;
}

// public generated SendToBack New() [static] :26
SendToBack* SendToBack::New1()
{
    SendToBack* obj2 = (SendToBack*)uNew(SendToBack_typeof());
    obj2->ctor_1();
    return obj2;
}
// }

// C:\ProgramData\Uno\Packages\Fuse.Triggers\0.19.3\Actions\$.uno(212)
// -------------------------------------------------------------------

// public sealed class Set<T> :212
// {
::g::Fuse::Triggers::Actions::TriggerAction_type* Set_typeof()
{
    static uSStrong< ::g::Fuse::Triggers::Actions::TriggerAction_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 14;
    options.GenericCount = 1;
    options.PrecalcCount = 2;
    options.ObjectSize = sizeof(Set);
    options.TypeSize = sizeof(::g::Fuse::Triggers::Actions::TriggerAction_type);
    type = (::g::Fuse::Triggers::Actions::TriggerAction_type*)uClassType::New("Fuse.Triggers.Actions.Set`1", options);
    type->SetBase(::g::Fuse::Triggers::Actions::TriggerAction_typeof());
    type->fp_Perform = (void(*)(::g::Fuse::Triggers::Actions::TriggerAction*, ::g::Fuse::Node*))Set__Perform_fn;
    ::STRINGS[11] = uString::Const("target");
    ::TYPES[3] = ::g::Uno::Delegate_typeof();
    ::TYPES[28] = ::g::Uno::UX::Expression_typeof();
    ::TYPES[6] = uObject_typeof();
    ::TYPES[29] = ::g::Fuse::Internal::BlenderMap_typeof();
    type->SetPrecalc(
        ::TYPES[28/*Uno.UX.Expression`1*/]->MakeType(type->T(0)),
        ::TYPES[29/*Fuse.Internal.BlenderMap*/]->MakeMethod(1, type->T(0)));
    type->SetFields(7,
        ::g::Fuse::Internal::Blender_typeof()->MakeType(type->T(0)), offsetof(::g::Fuse::Triggers::Actions::Set, _blender), 0,
        ::g::Uno::Bool_typeof(), offsetof(::g::Fuse::Triggers::Actions::Set, _hasIncrement), 0,
        type->T(0), (uintptr_t)0, uFieldFlagsConstrained,
        ::g::Uno::Bool_typeof(), offsetof(::g::Fuse::Triggers::Actions::Set, _updateRestValue), 0,
        ::g::Uno::UX::Expression_typeof()->MakeType(type->T(0)), offsetof(::g::Fuse::Triggers::Actions::Set, _Expression), 0,
        ::g::Uno::UX::Property_typeof()->MakeType(type->T(0)), offsetof(::g::Fuse::Triggers::Actions::Set, _Target), 0,
        type->T(0), (uintptr_t)0, uFieldFlagsConstrained);
    type->Reflection.SetFunctions(10,
        new uFunction("get_Expression", NULL, (void*)Set__get_Expression_fn, 0, false, ::g::Uno::UX::Expression_typeof()->MakeType(type->T(0)), 0),
        new uFunction("set_Expression", NULL, (void*)Set__set_Expression_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::UX::Expression_typeof()->MakeType(type->T(0))),
        new uFunction("get_Increment", NULL, (void*)Set__get_Increment_fn, 0, false, type->T(0), 0),
        new uFunction("set_Increment", NULL, (void*)Set__set_Increment_fn, 0, false, uVoid_typeof(), 1, type->T(0)),
        new uFunction(".ctor", type, (void*)Set__New1_fn, 0, true, type, 1, ::g::Uno::UX::Property_typeof()->MakeType(type->T(0))),
        new uFunction("get_Target", NULL, (void*)Set__get_Target_fn, 0, false, ::g::Uno::UX::Property_typeof()->MakeType(type->T(0)), 0),
        new uFunction("get_UpdateRestValue", NULL, (void*)Set__get_UpdateRestValue_fn, 0, false, ::g::Uno::Bool_typeof(), 0),
        new uFunction("set_UpdateRestValue", NULL, (void*)Set__set_UpdateRestValue_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::Bool_typeof()),
        new uFunction("get_Value", NULL, (void*)Set__get_Value_fn, 0, false, type->T(0), 0),
        new uFunction("set_Value", NULL, (void*)Set__set_Value_fn, 0, false, uVoid_typeof(), 1, type->T(0)));
    return type;
}

// public Set(Uno.UX.Property<T> target) :227
void Set__ctor_1_fn(Set* __this, ::g::Uno::UX::Property* target)
{
    __this->ctor_1(target);
}

// public generated Uno.UX.Expression<T> get_Expression() :224
void Set__get_Expression_fn(Set* __this, uDelegate** __retval)
{
    *__retval = __this->Expression();
}

// public generated void set_Expression(Uno.UX.Expression<T> value) :224
void Set__set_Expression_fn(Set* __this, uDelegate* value)
{
    __this->Expression(value);
}

// public T get_Increment() :256
void Set__get_Increment_fn(Set* __this, uTRef __retval)
{
    return __retval.Store(__this->_increment()), void();
}

// public void set_Increment(T value) :257
void Set__set_Increment_fn(Set* __this, void* value)
{
    uType* __types[] = {
        __this->__type->T(0),
        __this->__type->Precalced(1/*Fuse.Internal.BlenderMap.Get<T>*/),
    };
    __this->_increment() = value;
    __this->_hasIncrement = true;

    if (__this->_blender == NULL)
        __this->_blender = ((::g::Fuse::Internal::Blender*)::g::Fuse::Internal::BlenderMap::Get(__types[1]));
}

// public Set New(Uno.UX.Property<T> target) :227
void Set__New1_fn(uType* __type, ::g::Uno::UX::Property* target, Set** __retval)
{
    *__retval = Set::New1(__type, target);
}

// protected override sealed void Perform(Fuse.Node target) :242
void Set__Perform_fn(Set* __this, ::g::Fuse::Node* target)
{
    uType* __types[] = {
        __this->__type->T(0),
        __this->__type->Precalced(0/*Uno.UX.Expression<T>*/),
    };
    uT ret2(__types[0], U_ALLOCA(__types[0]->ValueSize));
    uT ret3(__types[0], U_ALLOCA(__types[0]->ValueSize));
    uT ret4(__types[0], U_ALLOCA(__types[0]->ValueSize));
    uT ret5(__types[0], U_ALLOCA(__types[0]->ValueSize));
    ;
    ;
    ;
    ;

    if (__this->_hasIncrement)
        Set__Update_fn(__this, (uPtr(__this->_blender)->Add_ex((::g::Uno::UX::Property__Get_fn(uPtr(__this->Target()), &ret3), ret3), __this->_increment(), &ret2), ret2));
    else if (::g::Uno::Delegate::op_Inequality(__this->Expression(), NULL))
        Set__Update_fn(__this, (uPtr(__this->Expression())->Invoke(&ret4), ret4));
    else
        Set__Update_fn(__this, (Set__get_Value_fn(__this, &ret5), ret5));
}

// public generated Uno.UX.Property<T> get_Target() :214
void Set__get_Target_fn(Set* __this, ::g::Uno::UX::Property** __retval)
{
    *__retval = __this->Target();
}

// private generated void set_Target(Uno.UX.Property<T> value) :214
void Set__set_Target_fn(Set* __this, ::g::Uno::UX::Property* value)
{
    __this->Target(value);
}

// private void Update(T value) :234
void Set__Update_fn(Set* __this, void* value)
{
    uType* __types[] = {
        __this->__type->T(0),
    };

    if (__this->_updateRestValue)
        ::g::Uno::UX::Property__SetRestState_fn(uPtr(__this->Target()), value, __this);
    else
        ::g::Uno::UX::Property__Set_fn(uPtr(__this->Target()), value, __this);
}

// public bool get_UpdateRestValue() :220
void Set__get_UpdateRestValue_fn(Set* __this, bool* __retval)
{
    *__retval = __this->UpdateRestValue();
}

// public void set_UpdateRestValue(bool value) :221
void Set__set_UpdateRestValue_fn(Set* __this, bool* value)
{
    __this->UpdateRestValue(*value);
}

// public generated T get_Value() :215
void Set__get_Value_fn(Set* __this, uTRef __retval)
{
    return __retval.Store(__this->_Value()), void();
}

// public generated void set_Value(T value) :215
void Set__set_Value_fn(Set* __this, void* value)
{
    uType* __types[] = {
        __this->__type->T(0),
    };
    __this->_Value() = value;
}

// public Set(Uno.UX.Property<T> target) [instance] :227
void Set::ctor_1(::g::Uno::UX::Property* target)
{
    _updateRestValue = true;
    ctor_();

    if (target == NULL)
        U_THROW(::g::Uno::ArgumentNullException::New6(::STRINGS[11/*"target"*/]));

    Target(target);
}

// public generated Uno.UX.Expression<T> get_Expression() [instance] :224
uDelegate* Set::Expression()
{
    return _Expression;
}

// public generated void set_Expression(Uno.UX.Expression<T> value) [instance] :224
void Set::Expression(uDelegate* value)
{
    _Expression = value;
}

// public generated Uno.UX.Property<T> get_Target() [instance] :214
::g::Uno::UX::Property* Set::Target()
{
    return _Target;
}

// private generated void set_Target(Uno.UX.Property<T> value) [instance] :214
void Set::Target(::g::Uno::UX::Property* value)
{
    _Target = value;
}

// public bool get_UpdateRestValue() [instance] :220
bool Set::UpdateRestValue()
{
    return _updateRestValue;
}

// public void set_UpdateRestValue(bool value) [instance] :221
void Set::UpdateRestValue(bool value)
{
    _updateRestValue = value;
}

// public Set New(Uno.UX.Property<T> target) [static] :227
Set* Set::New1(uType* __type, ::g::Uno::UX::Property* target)
{
    Set* obj1 = (Set*)uNew(__type);
    obj1->ctor_1(target);
    return obj1;
}
// }

// C:\ProgramData\Uno\Packages\Fuse.Triggers\0.19.3\Actions\$.uno(390)
// -------------------------------------------------------------------

// public sealed class Show :390
// {
::g::Fuse::Triggers::Actions::TriggerAction_type* Show_typeof()
{
    static uSStrong< ::g::Fuse::Triggers::Actions::TriggerAction_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 7;
    options.ObjectSize = sizeof(Show);
    options.TypeSize = sizeof(::g::Fuse::Triggers::Actions::TriggerAction_type);
    type = (::g::Fuse::Triggers::Actions::TriggerAction_type*)uClassType::New("Fuse.Triggers.Actions.Show", options);
    type->SetBase(::g::Fuse::Triggers::Actions::TriggerAction_typeof());
    type->fp_ctor_ = (void*)Show__New1_fn;
    type->fp_Perform = (void(*)(::g::Fuse::Triggers::Actions::TriggerAction*, ::g::Fuse::Node*))Show__Perform_fn;
    ::TYPES[30] = ::g::Fuse::Triggers::Actions::IShow_typeof();
    type->SetFields(7);
    type->Reflection.SetFunctions(1,
        new uFunction(".ctor", NULL, (void*)Show__New1_fn, 0, true, Show_typeof(), 0));
    return type;
}

// public generated Show() :390
void Show__ctor_1_fn(Show* __this)
{
    __this->ctor_1();
}

// public generated Show New() :390
void Show__New1_fn(Show** __retval)
{
    *__retval = Show::New1();
}

// protected override sealed void Perform(Fuse.Node target) :392
void Show__Perform_fn(Show* __this, ::g::Fuse::Node* target)
{
    if (uIs(target, ::TYPES[30/*Fuse.Triggers.Actions.IShow*/]))
        ::g::Fuse::Triggers::Actions::IShow::Show(uInterface(uPtr((uObject*)target), ::TYPES[30/*Fuse.Triggers.Actions.IShow*/]));
}

// public generated Show() [instance] :390
void Show::ctor_1()
{
    ctor_();
}

// public generated Show New() [static] :390
Show* Show::New1()
{
    Show* obj1 = (Show*)uNew(Show_typeof());
    obj1->ctor_1();
    return obj1;
}
// }

// C:\ProgramData\Uno\Packages\Fuse.Triggers\0.19.3\Actions\$.uno(133)
// -------------------------------------------------------------------

// public sealed class Stop :133
// {
::g::Fuse::Triggers::Actions::TriggerAction_type* Stop_typeof()
{
    static uSStrong< ::g::Fuse::Triggers::Actions::TriggerAction_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 8;
    options.ObjectSize = sizeof(Stop);
    options.TypeSize = sizeof(::g::Fuse::Triggers::Actions::TriggerAction_type);
    type = (::g::Fuse::Triggers::Actions::TriggerAction_type*)uClassType::New("Fuse.Triggers.Actions.Stop", options);
    type->SetBase(::g::Fuse::Triggers::Actions::PlaybackAction_typeof());
    type->fp_ctor_ = (void*)Stop__New1_fn;
    type->fp_Perform = (void(*)(::g::Fuse::Triggers::Actions::TriggerAction*, ::g::Fuse::Node*))Stop__Perform_fn;
    ::TYPES[20] = ::g::Fuse::Triggers::Actions::PlaybackAction_typeof();
    ::TYPES[21] = ::g::Fuse::Triggers::IPlayback_typeof();
    type->SetFields(8);
    type->Reflection.SetFunctions(1,
        new uFunction(".ctor", NULL, (void*)Stop__New1_fn, 0, true, Stop_typeof(), 0));
    return type;
}

// public generated Stop() :133
void Stop__ctor_2_fn(Stop* __this)
{
    __this->ctor_2();
}

// public generated Stop New() :133
void Stop__New1_fn(Stop** __retval)
{
    *__retval = Stop::New1();
}

// protected override sealed void Perform(Fuse.Node target) :135
void Stop__Perform_fn(Stop* __this, ::g::Fuse::Node* target)
{
    uObject* ind1 = __this->Target();
    uObject* t = (ind1 != NULL) ? ind1 : uAs<uObject*>(target, ::TYPES[21/*Fuse.Triggers.IPlayback*/]);

    if (t != NULL)
    {
        if (::g::Fuse::Triggers::IPlayback::CanStop(uInterface(uPtr(t), ::TYPES[21/*Fuse.Triggers.IPlayback*/])))
            ::g::Fuse::Triggers::IPlayback::Stop(uInterface(uPtr(t), ::TYPES[21/*Fuse.Triggers.IPlayback*/]));
    }
}

// public generated Stop() [instance] :133
void Stop::ctor_2()
{
    ctor_1();
}

// public generated Stop New() [static] :133
Stop* Stop::New1()
{
    Stop* obj2 = (Stop*)uNew(Stop_typeof());
    obj2->ctor_2();
    return obj2;
}
// }

// C:\ProgramData\Uno\Packages\Fuse.Controls\0.19.3\WebView\$.uno(591)
// -------------------------------------------------------------------

// public sealed class StopLoading :591
// {
::g::Fuse::Triggers::Actions::WebViewNavAction_type* StopLoading_typeof()
{
    static uSStrong< ::g::Fuse::Triggers::Actions::WebViewNavAction_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 7;
    options.ObjectSize = sizeof(StopLoading);
    options.TypeSize = sizeof(::g::Fuse::Triggers::Actions::WebViewNavAction_type);
    type = (::g::Fuse::Triggers::Actions::WebViewNavAction_type*)uClassType::New("Fuse.Triggers.Actions.StopLoading", options);
    type->SetBase(::g::Fuse::Triggers::Actions::WebViewNavAction_typeof());
    type->fp_ctor_ = (void*)StopLoading__New1_fn;
    type->fp_Execute = (void(*)(::g::Fuse::Triggers::Actions::WebViewNavAction*, uObject*))StopLoading__Execute_fn;
    type->SetFields(7);
    type->Reflection.SetFunctions(1,
        new uFunction(".ctor", NULL, (void*)StopLoading__New1_fn, 0, true, StopLoading_typeof(), 0));
    return type;
}

// public generated StopLoading() :591
void StopLoading__ctor_2_fn(StopLoading* __this)
{
    __this->ctor_2();
}

// private override sealed void Execute(Fuse.Controls.IWebView webview) :593
void StopLoading__Execute_fn(StopLoading* __this, uObject* webview)
{
    ::g::Fuse::Controls::IWebView::Stop(uInterface(uPtr(webview), ::TYPES[14/*Fuse.Controls.IWebView*/]));
}

// public generated StopLoading New() :591
void StopLoading__New1_fn(StopLoading** __retval)
{
    *__retval = StopLoading::New1();
}

// public generated StopLoading() [instance] :591
void StopLoading::ctor_2()
{
    ctor_1();
}

// public generated StopLoading New() [static] :591
StopLoading* StopLoading::New1()
{
    StopLoading* obj1 = (StopLoading*)uNew(StopLoading_typeof());
    obj1->ctor_2();
    return obj1;
}
// }

// C:\ProgramData\Uno\Packages\Fuse.Elements\0.19.3\Triggers\$.uno(240)
// --------------------------------------------------------------------

// public sealed class TransitionLayout :240
// {
::g::Fuse::Triggers::Actions::TriggerAction_type* TransitionLayout_typeof()
{
    static uSStrong< ::g::Fuse::Triggers::Actions::TriggerAction_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 8;
    options.ObjectSize = sizeof(TransitionLayout);
    options.TypeSize = sizeof(::g::Fuse::Triggers::Actions::TriggerAction_type);
    type = (::g::Fuse::Triggers::Actions::TriggerAction_type*)uClassType::New("Fuse.Triggers.Actions.TransitionLayout", options);
    type->SetBase(::g::Fuse::Triggers::Actions::TriggerAction_typeof());
    type->fp_ctor_ = (void*)TransitionLayout__New1_fn;
    type->fp_Perform = (void(*)(::g::Fuse::Triggers::Actions::TriggerAction*, ::g::Fuse::Node*))TransitionLayout__Perform_fn;
    ::TYPES[0] = ::g::Fuse::Elements::Element_typeof();
    ::TYPES[2] = ::g::Fuse::Node_typeof();
    ::TYPES[31] = ::g::Uno::Float4x4_typeof();
    ::TYPES[32] = ::g::Fuse::Triggers::LayoutTransition_typeof();
    type->SetFields(7,
        ::g::Fuse::Elements::Element_typeof(), offsetof(::g::Fuse::Triggers::Actions::TransitionLayout, _From), 0);
    type->Reflection.SetFunctions(3,
        new uFunction("get_From", NULL, (void*)TransitionLayout__get_From_fn, 0, false, ::g::Fuse::Elements::Element_typeof(), 0),
        new uFunction("set_From", NULL, (void*)TransitionLayout__set_From_fn, 0, false, uVoid_typeof(), 1, ::g::Fuse::Elements::Element_typeof()),
        new uFunction(".ctor", NULL, (void*)TransitionLayout__New1_fn, 0, true, TransitionLayout_typeof(), 0));
    return type;
}

// public generated TransitionLayout() :240
void TransitionLayout__ctor_1_fn(TransitionLayout* __this)
{
    __this->ctor_1();
}

// public generated Fuse.Elements.Element get_From() :242
void TransitionLayout__get_From_fn(TransitionLayout* __this, ::g::Fuse::Elements::Element** __retval)
{
    *__retval = __this->From();
}

// public generated void set_From(Fuse.Elements.Element value) :242
void TransitionLayout__set_From_fn(TransitionLayout* __this, ::g::Fuse::Elements::Element* value)
{
    __this->From(value);
}

// public generated TransitionLayout New() :240
void TransitionLayout__New1_fn(TransitionLayout** __retval)
{
    *__retval = TransitionLayout::New1();
}

// protected override sealed void Perform(Fuse.Node target) :243
void TransitionLayout__Perform_fn(TransitionLayout* __this, ::g::Fuse::Node* target)
{
    ::g::Fuse::Elements::Element* elm = uAs< ::g::Fuse::Elements::Element*>(target, ::TYPES[0/*Fuse.Elements.Element*/]);

    if ((elm == NULL) || (__this->From() == NULL))
        return;

    ::g::Uno::Float4x4 ind1 = uPtr(__this->From())->LocalTransform();
    ::g::Uno::Float2 oldPosition = ::g::Uno::Float2__New2(ind1.M41, ind1.M42);
    ::g::Uno::Float2 oldSize = uPtr(__this->From())->ActualSize();
    ::g::Uno::Float4x4 m = ::g::Uno::Matrix::Mul8(uPtr(__this->From())->WorldTransform(), uPtr(uPtr(elm)->Parent())->WorldTransformInverse());
    ::g::Uno::Float3 worldChange = ::g::Uno::Float3__op_Subtraction2(::g::Uno::Float3__New2(m.M41, m.M42, m.M43), ::g::Uno::Float3__New4(elm->IntendedPosition(), 0.0f));
    ::g::Fuse::Triggers::LayoutTransition::SetWorldPositionChange(elm, worldChange);
    ::g::Fuse::Triggers::LayoutTransition::SetPositionChange(elm, oldPosition, elm->IntendedPosition());
    ::g::Fuse::Triggers::LayoutTransition::SetSizeChange(elm, oldSize, elm->IntendedSize());
    uPtr(::g::Fuse::Triggers::LayoutTransition::Transitioned())->RaiseWithoutBubble(::g::Fuse::Triggers::LayoutTransitionedArgs::New3(elm), 0);
}

// public generated TransitionLayout() [instance] :240
void TransitionLayout::ctor_1()
{
    ctor_();
}

// public generated Fuse.Elements.Element get_From() [instance] :242
::g::Fuse::Elements::Element* TransitionLayout::From()
{
    return _From;
}

// public generated void set_From(Fuse.Elements.Element value) [instance] :242
void TransitionLayout::From(::g::Fuse::Elements::Element* value)
{
    _From = value;
}

// public generated TransitionLayout New() [static] :240
TransitionLayout* TransitionLayout::New1()
{
    TransitionLayout* obj2 = (TransitionLayout*)uNew(TransitionLayout_typeof());
    obj2->ctor_1();
    return obj2;
}
// }

// C:\ProgramData\Uno\Packages\Fuse.Triggers\0.19.3\Actions\$.uno(281)
// -------------------------------------------------------------------

// public sealed class TransitionState :281
// {
::g::Fuse::Triggers::Actions::TriggerAction_type* TransitionState_typeof()
{
    static uSStrong< ::g::Fuse::Triggers::Actions::TriggerAction_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 9;
    options.ObjectSize = sizeof(TransitionState);
    options.TypeSize = sizeof(::g::Fuse::Triggers::Actions::TriggerAction_type);
    type = (::g::Fuse::Triggers::Actions::TriggerAction_type*)uClassType::New("Fuse.Triggers.Actions.TransitionState", options);
    type->SetBase(::g::Fuse::Triggers::Actions::TriggerAction_typeof());
    type->fp_ctor_ = (void*)TransitionState__New1_fn;
    type->fp_Perform = (void(*)(::g::Fuse::Triggers::Actions::TriggerAction*, ::g::Fuse::Node*))TransitionState__Perform_fn;
    type->SetFields(7,
        ::g::Fuse::Triggers::StateGroup_typeof(), offsetof(::g::Fuse::Triggers::Actions::TransitionState, _Target), 0,
        ::g::Fuse::Triggers::Actions::TransitionStateType_typeof(), offsetof(::g::Fuse::Triggers::Actions::TransitionState, _Type), 0);
    type->Reflection.SetFunctions(5,
        new uFunction(".ctor", NULL, (void*)TransitionState__New1_fn, 0, true, TransitionState_typeof(), 0),
        new uFunction("get_Target", NULL, (void*)TransitionState__get_Target_fn, 0, false, ::g::Fuse::Triggers::StateGroup_typeof(), 0),
        new uFunction("set_Target", NULL, (void*)TransitionState__set_Target_fn, 0, false, uVoid_typeof(), 1, ::g::Fuse::Triggers::StateGroup_typeof()),
        new uFunction("get_Type", NULL, (void*)TransitionState__get_Type_fn, 0, false, ::g::Fuse::Triggers::Actions::TransitionStateType_typeof(), 0),
        new uFunction("set_Type", NULL, (void*)TransitionState__set_Type_fn, 0, false, uVoid_typeof(), 1, ::g::Fuse::Triggers::Actions::TransitionStateType_typeof()));
    return type;
}

// public generated TransitionState() :281
void TransitionState__ctor_1_fn(TransitionState* __this)
{
    __this->ctor_1();
}

// public generated TransitionState New() :281
void TransitionState__New1_fn(TransitionState** __retval)
{
    *__retval = TransitionState::New1();
}

// protected override sealed void Perform(Fuse.Node target) :287
void TransitionState__Perform_fn(TransitionState* __this, ::g::Fuse::Node* target)
{
    ::g::Fuse::Triggers::StateGroup* t = __this->Target();

    switch (__this->Type())
    {
        case 0:
        {
            uPtr(t)->GotoNextState();
            break;
        }
    }
}

// public generated Fuse.Triggers.StateGroup get_Target() :283
void TransitionState__get_Target_fn(TransitionState* __this, ::g::Fuse::Triggers::StateGroup** __retval)
{
    *__retval = __this->Target();
}

// public generated void set_Target(Fuse.Triggers.StateGroup value) :283
void TransitionState__set_Target_fn(TransitionState* __this, ::g::Fuse::Triggers::StateGroup* value)
{
    __this->Target(value);
}

// public generated Fuse.Triggers.Actions.TransitionStateType get_Type() :285
void TransitionState__get_Type_fn(TransitionState* __this, int* __retval)
{
    *__retval = __this->Type();
}

// public generated void set_Type(Fuse.Triggers.Actions.TransitionStateType value) :285
void TransitionState__set_Type_fn(TransitionState* __this, int* value)
{
    __this->Type(*value);
}

// public generated TransitionState() [instance] :281
void TransitionState::ctor_1()
{
    ctor_();
}

// public generated Fuse.Triggers.StateGroup get_Target() [instance] :283
::g::Fuse::Triggers::StateGroup* TransitionState::Target()
{
    return _Target;
}

// public generated void set_Target(Fuse.Triggers.StateGroup value) [instance] :283
void TransitionState::Target(::g::Fuse::Triggers::StateGroup* value)
{
    _Target = value;
}

// public generated Fuse.Triggers.Actions.TransitionStateType get_Type() [instance] :285
int TransitionState::Type()
{
    return _Type;
}

// public generated void set_Type(Fuse.Triggers.Actions.TransitionStateType value) [instance] :285
void TransitionState::Type(int value)
{
    _Type = value;
}

// public generated TransitionState New() [static] :281
TransitionState* TransitionState::New1()
{
    TransitionState* obj1 = (TransitionState*)uNew(TransitionState_typeof());
    obj1->ctor_1();
    return obj1;
}
// }

// C:\ProgramData\Uno\Packages\Fuse.Triggers\0.19.3\Actions\$.uno(276)
// -------------------------------------------------------------------

// public enum TransitionStateType :276
uEnumType* TransitionStateType_typeof()
{
    static uSStrong<uEnumType*> type;
    if (type != NULL) return type;

    type = uEnumType::New("Fuse.Triggers.Actions.TransitionStateType", ::g::Uno::Int_typeof(), 1);
    type->SetLiterals(
        "Next", 0LL);
    return type;
}

// C:\ProgramData\Uno\Packages\Fuse.Triggers\0.19.3\Actions\$.uno(312)
// -------------------------------------------------------------------

// public abstract class TriggerAction :312
// {
TriggerAction_type* TriggerAction_typeof()
{
    static uSStrong<TriggerAction_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 7;
    options.ObjectSize = sizeof(TriggerAction);
    options.TypeSize = sizeof(TriggerAction_type);
    type = (TriggerAction_type*)uClassType::New("Fuse.Triggers.Actions.TriggerAction", options);
    type->SetFields(0,
        ::g::Uno::Float_typeof(), offsetof(::g::Fuse::Triggers::Actions::TriggerAction, _delay), 0,
        ::g::Fuse::Triggers::Actions::TriggerDirection_typeof(), offsetof(::g::Fuse::Triggers::Actions::TriggerAction, _direction), 0,
        ::g::Uno::Bool_typeof(), offsetof(::g::Fuse::Triggers::Actions::TriggerAction, _hasDelay), 0,
        ::g::Uno::Bool_typeof(), offsetof(::g::Fuse::Triggers::Actions::TriggerAction, _hasProgress), 0,
        ::g::Uno::Bool_typeof(), offsetof(::g::Fuse::Triggers::Actions::TriggerAction, _isActive), 0,
        ::g::Uno::Float_typeof(), offsetof(::g::Fuse::Triggers::Actions::TriggerAction, _progress), 0,
        ::g::Fuse::Node_typeof(), offsetof(::g::Fuse::Triggers::Actions::TriggerAction, _TargetNode), 0);
    type->Reflection.SetFunctions(13,
        new uFunction("get_AtProgress", NULL, (void*)TriggerAction__get_AtProgress_fn, 0, false, ::g::Uno::Float_typeof(), 0),
        new uFunction("set_AtProgress", NULL, (void*)TriggerAction__set_AtProgress_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::Float_typeof()),
        new uFunction("get_Delay", NULL, (void*)TriggerAction__get_Delay_fn, 0, false, ::g::Uno::Float_typeof(), 0),
        new uFunction("set_Delay", NULL, (void*)TriggerAction__set_Delay_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::Float_typeof()),
        new uFunction("get_Direction", NULL, (void*)TriggerAction__get_Direction_fn, 0, false, ::g::Fuse::Triggers::Actions::TriggerDirection_typeof(), 0),
        new uFunction("set_Direction", NULL, (void*)TriggerAction__set_Direction_fn, 0, false, uVoid_typeof(), 1, ::g::Fuse::Triggers::Actions::TriggerDirection_typeof()),
        new uFunction("get_IsActive", NULL, (void*)TriggerAction__get_IsActive_fn, 0, false, ::g::Uno::Bool_typeof(), 0),
        new uFunction("set_IsActive", NULL, (void*)TriggerAction__set_IsActive_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::Bool_typeof()),
        new uFunction("get_IsProgressTriggered", NULL, (void*)TriggerAction__get_IsProgressTriggered_fn, 0, false, ::g::Uno::Bool_typeof(), 0),
        new uFunction("PerformFromNode", NULL, (void*)TriggerAction__PerformFromNode_fn, 0, false, uVoid_typeof(), 1, ::g::Fuse::Node_typeof()),
        new uFunction("ProgressWhen", NULL, (void*)TriggerAction__ProgressWhen_fn, 0, false, ::g::Uno::Float_typeof(), 1, ::g::Uno::Float_typeof()),
        new uFunction("get_TargetNode", NULL, (void*)TriggerAction__get_TargetNode_fn, 0, false, ::g::Fuse::Node_typeof(), 0),
        new uFunction("set_TargetNode", NULL, (void*)TriggerAction__set_TargetNode_fn, 0, false, uVoid_typeof(), 1, ::g::Fuse::Node_typeof()));
    return type;
}

// protected generated TriggerAction() :312
void TriggerAction__ctor__fn(TriggerAction* __this)
{
    __this->ctor_();
}

// public float get_AtProgress() :330
void TriggerAction__get_AtProgress_fn(TriggerAction* __this, float* __retval)
{
    *__retval = __this->AtProgress();
}

// public void set_AtProgress(float value) :331
void TriggerAction__set_AtProgress_fn(TriggerAction* __this, float* value)
{
    __this->AtProgress(*value);
}

// public float get_Delay() :339
void TriggerAction__get_Delay_fn(TriggerAction* __this, float* __retval)
{
    *__retval = __this->Delay();
}

// public void set_Delay(float value) :340
void TriggerAction__set_Delay_fn(TriggerAction* __this, float* value)
{
    __this->Delay(*value);
}

// public Fuse.Triggers.Actions.TriggerDirection get_Direction() :317
void TriggerAction__get_Direction_fn(TriggerAction* __this, int* __retval)
{
    *__retval = __this->Direction();
}

// public void set_Direction(Fuse.Triggers.Actions.TriggerDirection value) :318
void TriggerAction__set_Direction_fn(TriggerAction* __this, int* value)
{
    __this->Direction(*value);
}

// public bool get_IsActive() :355
void TriggerAction__get_IsActive_fn(TriggerAction* __this, bool* __retval)
{
    *__retval = __this->IsActive();
}

// public void set_IsActive(bool value) :356
void TriggerAction__set_IsActive_fn(TriggerAction* __this, bool* value)
{
    __this->IsActive(*value);
}

// public bool get_IsProgressTriggered() :349
void TriggerAction__get_IsProgressTriggered_fn(TriggerAction* __this, bool* __retval)
{
    *__retval = __this->IsProgressTriggered();
}

// public void PerformFromNode(Fuse.Node target) :368
void TriggerAction__PerformFromNode_fn(TriggerAction* __this, ::g::Fuse::Node* target)
{
    __this->PerformFromNode(target);
}

// public float ProgressWhen(float totalDuration) :359
void TriggerAction__ProgressWhen_fn(TriggerAction* __this, float* totalDuration, float* __retval)
{
    *__retval = __this->ProgressWhen(*totalDuration);
}

// public generated Fuse.Node get_TargetNode() :321
void TriggerAction__get_TargetNode_fn(TriggerAction* __this, ::g::Fuse::Node** __retval)
{
    *__retval = __this->TargetNode();
}

// public generated void set_TargetNode(Fuse.Node value) :321
void TriggerAction__set_TargetNode_fn(TriggerAction* __this, ::g::Fuse::Node* value)
{
    __this->TargetNode(value);
}

// protected generated TriggerAction() [instance] :312
void TriggerAction::ctor_()
{
    _isActive = true;
}

// public float get_AtProgress() [instance] :330
float TriggerAction::AtProgress()
{
    return _progress;
}

// public void set_AtProgress(float value) [instance] :331
void TriggerAction::AtProgress(float value)
{
    _hasProgress = true;
    _progress = value;
}

// public float get_Delay() [instance] :339
float TriggerAction::Delay()
{
    return _delay;
}

// public void set_Delay(float value) [instance] :340
void TriggerAction::Delay(float value)
{
    _hasDelay = true;
    _delay = value;
}

// public Fuse.Triggers.Actions.TriggerDirection get_Direction() [instance] :317
int TriggerAction::Direction()
{
    return _direction;
}

// public void set_Direction(Fuse.Triggers.Actions.TriggerDirection value) [instance] :318
void TriggerAction::Direction(int value)
{
    _direction = value;
}

// public bool get_IsActive() [instance] :355
bool TriggerAction::IsActive()
{
    return _isActive;
}

// public void set_IsActive(bool value) [instance] :356
void TriggerAction::IsActive(bool value)
{
    _isActive = value;
}

// public bool get_IsProgressTriggered() [instance] :349
bool TriggerAction::IsProgressTriggered()
{
    return _hasProgress || _hasDelay;
}

// public void PerformFromNode(Fuse.Node target) [instance] :368
void TriggerAction::PerformFromNode(::g::Fuse::Node* target)
{
    ::g::Fuse::Node* ind1;

    if (IsActive())
        Perform((ind1 = TargetNode(), (ind1 != NULL) ? ind1 : target));
}

// public float ProgressWhen(float totalDuration) [instance] :359
float TriggerAction::ProgressWhen(float totalDuration)
{
    if (_hasProgress)
        return _progress;

    if (_hasDelay)
        return _delay / totalDuration;

    return 0.0f;
}

// public generated Fuse.Node get_TargetNode() [instance] :321
::g::Fuse::Node* TriggerAction::TargetNode()
{
    return _TargetNode;
}

// public generated void set_TargetNode(Fuse.Node value) [instance] :321
void TriggerAction::TargetNode(::g::Fuse::Node* value)
{
    _TargetNode = value;
}
// }

// C:\ProgramData\Uno\Packages\Fuse.Triggers\0.19.3\Actions\$.uno(305)
// -------------------------------------------------------------------

// public enum TriggerDirection :305
uEnumType* TriggerDirection_typeof()
{
    static uSStrong<uEnumType*> type;
    if (type != NULL) return type;

    type = uEnumType::New("Fuse.Triggers.Actions.TriggerDirection", ::g::Uno::Int_typeof(), 3);
    type->SetLiterals(
        "Forward", 0LL,
        "Backward", 1LL,
        "Both", 2LL);
    return type;
}

// C:\ProgramData\Uno\Packages\Fuse.UserEvents\0.19.3\$.uno(129)
// -------------------------------------------------------------

// public sealed class UserEventArg :129
// {
uType* UserEventArg_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 2;
    options.ObjectSize = sizeof(UserEventArg);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Fuse.Triggers.Actions.UserEventArg", options);
    ::TYPES[33] = ::g::Uno::Bool_typeof();
    ::TYPES[6] = uObject_typeof();
    ::TYPES[34] = ::g::Uno::Float_typeof();
    ::TYPES[35] = ::g::Uno::Int_typeof();
    ::TYPES[36] = ::g::Uno::String_typeof();
    type->SetFields(0,
        ::g::Uno::String_typeof(), offsetof(::g::Fuse::Triggers::Actions::UserEventArg, _Name), 0,
        uObject_typeof(), offsetof(::g::Fuse::Triggers::Actions::UserEventArg, _Value), 0);
    type->Reflection.SetFunctions(12,
        new uFunction("get_BoolValue", NULL, (void*)UserEventArg__get_BoolValue_fn, 0, false, ::g::Uno::Bool_typeof(), 0),
        new uFunction("set_BoolValue", NULL, (void*)UserEventArg__set_BoolValue_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::Bool_typeof()),
        new uFunction("get_FloatValue", NULL, (void*)UserEventArg__get_FloatValue_fn, 0, false, ::g::Uno::Float_typeof(), 0),
        new uFunction("set_FloatValue", NULL, (void*)UserEventArg__set_FloatValue_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::Float_typeof()),
        new uFunction("get_IntValue", NULL, (void*)UserEventArg__get_IntValue_fn, 0, false, ::g::Uno::Int_typeof(), 0),
        new uFunction("set_IntValue", NULL, (void*)UserEventArg__set_IntValue_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::Int_typeof()),
        new uFunction("get_Name", NULL, (void*)UserEventArg__get_Name_fn, 0, false, ::g::Uno::String_typeof(), 0),
        new uFunction(".ctor", NULL, (void*)UserEventArg__New1_fn, 0, true, UserEventArg_typeof(), 1, ::g::Uno::String_typeof()),
        new uFunction("get_StringValue", NULL, (void*)UserEventArg__get_StringValue_fn, 0, false, ::g::Uno::String_typeof(), 0),
        new uFunction("set_StringValue", NULL, (void*)UserEventArg__set_StringValue_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::String_typeof()),
        new uFunction("get_Value", NULL, (void*)UserEventArg__get_Value_fn, 0, false, uObject_typeof(), 0),
        new uFunction("set_Value", NULL, (void*)UserEventArg__set_Value_fn, 0, false, uVoid_typeof(), 1, uObject_typeof()));
    return type;
}

// public UserEventArg(string name) :134
void UserEventArg__ctor__fn(UserEventArg* __this, uString* name)
{
    __this->ctor_(name);
}

// public bool get_BoolValue() :161
void UserEventArg__get_BoolValue_fn(UserEventArg* __this, bool* __retval)
{
    *__retval = __this->BoolValue();
}

// public void set_BoolValue(bool value) :162
void UserEventArg__set_BoolValue_fn(UserEventArg* __this, bool* value)
{
    __this->BoolValue(*value);
}

// public float get_FloatValue() :149
void UserEventArg__get_FloatValue_fn(UserEventArg* __this, float* __retval)
{
    *__retval = __this->FloatValue();
}

// public void set_FloatValue(float value) :150
void UserEventArg__set_FloatValue_fn(UserEventArg* __this, float* value)
{
    __this->FloatValue(*value);
}

// public int get_IntValue() :143
void UserEventArg__get_IntValue_fn(UserEventArg* __this, int* __retval)
{
    *__retval = __this->IntValue();
}

// public void set_IntValue(int value) :144
void UserEventArg__set_IntValue_fn(UserEventArg* __this, int* value)
{
    __this->IntValue(*value);
}

// public generated string get_Name() :131
void UserEventArg__get_Name_fn(UserEventArg* __this, uString** __retval)
{
    *__retval = __this->Name();
}

// private generated void set_Name(string value) :131
void UserEventArg__set_Name_fn(UserEventArg* __this, uString* value)
{
    __this->Name(value);
}

// public UserEventArg New(string name) :134
void UserEventArg__New1_fn(uString* name, UserEventArg** __retval)
{
    *__retval = UserEventArg::New1(name);
}

// public string get_StringValue() :155
void UserEventArg__get_StringValue_fn(UserEventArg* __this, uString** __retval)
{
    *__retval = __this->StringValue();
}

// public void set_StringValue(string value) :156
void UserEventArg__set_StringValue_fn(UserEventArg* __this, uString* value)
{
    __this->StringValue(value);
}

// public generated object get_Value() :139
void UserEventArg__get_Value_fn(UserEventArg* __this, uObject** __retval)
{
    *__retval = __this->Value();
}

// public generated void set_Value(object value) :139
void UserEventArg__set_Value_fn(UserEventArg* __this, uObject* value)
{
    __this->Value(value);
}

// public UserEventArg(string name) [instance] :134
void UserEventArg::ctor_(uString* name)
{
    Name(name);
}

// public bool get_BoolValue() [instance] :161
bool UserEventArg::BoolValue()
{
    return uUnbox<bool>(::TYPES[33/*bool*/], Value());
}

// public void set_BoolValue(bool value) [instance] :162
void UserEventArg::BoolValue(bool value)
{
    Value(uBox(::TYPES[33/*bool*/], value));
}

// public float get_FloatValue() [instance] :149
float UserEventArg::FloatValue()
{
    return uUnbox<float>(::TYPES[34/*float*/], Value());
}

// public void set_FloatValue(float value) [instance] :150
void UserEventArg::FloatValue(float value)
{
    Value(uBox(::TYPES[34/*float*/], value));
}

// public int get_IntValue() [instance] :143
int UserEventArg::IntValue()
{
    return uUnbox<int>(::TYPES[35/*int*/], Value());
}

// public void set_IntValue(int value) [instance] :144
void UserEventArg::IntValue(int value)
{
    Value(uBox<int>(::TYPES[35/*int*/], value));
}

// public generated string get_Name() [instance] :131
uString* UserEventArg::Name()
{
    return _Name;
}

// private generated void set_Name(string value) [instance] :131
void UserEventArg::Name(uString* value)
{
    _Name = value;
}

// public string get_StringValue() [instance] :155
uString* UserEventArg::StringValue()
{
    return uCast<uString*>(Value(), ::TYPES[36/*string*/]);
}

// public void set_StringValue(string value) [instance] :156
void UserEventArg::StringValue(uString* value)
{
    Value(value);
}

// public generated object get_Value() [instance] :139
uObject* UserEventArg::Value()
{
    return _Value;
}

// public generated void set_Value(object value) [instance] :139
void UserEventArg::Value(uObject* value)
{
    _Value = value;
}

// public UserEventArg New(string name) [static] :134
UserEventArg* UserEventArg::New1(uString* name)
{
    UserEventArg* obj1 = (UserEventArg*)uNew(UserEventArg_typeof());
    obj1->ctor_(name);
    return obj1;
}
// }

// C:\ProgramData\Uno\Packages\Fuse.Controls\0.19.3\WebView\$.uno(570)
// -------------------------------------------------------------------

// internal abstract class WebViewNavAction :570
// {
WebViewNavAction_type* WebViewNavAction_typeof()
{
    static uSStrong<WebViewNavAction_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 7;
    options.ObjectSize = sizeof(WebViewNavAction);
    options.TypeSize = sizeof(WebViewNavAction_type);
    type = (WebViewNavAction_type*)uClassType::New("Fuse.Triggers.Actions.WebViewNavAction", options);
    type->SetBase(::g::Fuse::Triggers::Actions::TriggerAction_typeof());
    type->fp_Perform = (void(*)(::g::Fuse::Triggers::Actions::TriggerAction*, ::g::Fuse::Node*))WebViewNavAction__Perform_fn;
    ::TYPES[37] = ::g::Fuse::Node_typeof()->MakeMethod(1, ::g::Fuse::Controls::IWebView_typeof());
    type->SetFields(7);
    return type;
}

// protected generated WebViewNavAction() :570
void WebViewNavAction__ctor_1_fn(WebViewNavAction* __this)
{
    __this->ctor_1();
}

// protected override sealed void Perform(Fuse.Node target) :572
void WebViewNavAction__Perform_fn(WebViewNavAction* __this, ::g::Fuse::Node* target)
{
    uObject* webView = (uObject*)uPtr(target)->FindByType(::TYPES[37/*Fuse.Node.FindByType<Fuse.Controls.IWebView>*/]);

    if (webView != NULL)
        __this->Execute(webView);
}

// protected generated WebViewNavAction() [instance] :570
void WebViewNavAction::ctor_1()
{
    ctor_();
}
// }

}}}} // ::g::Fuse::Triggers::Actions
