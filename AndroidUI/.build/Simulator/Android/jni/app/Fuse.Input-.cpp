#include <app/Fuse.AppBase.h>
#include <app/Fuse.HitTestCallback.h>
#include <app/Fuse.HitTestContext.h>
#include <app/Fuse.HitTestResult.h>
#include <app/Fuse.Input.Capturer.h>
#include <app/Fuse.Input.CustomPointerEventArgs.h>
#include <app/Fuse.Input.Focus.h>
#include <app/Fuse.Input.FocusDelegator.h>
#include <app/Fuse.Input.FocusGained.h>
#include <app/Fuse.Input.FocusGainedArgs.h>
#include <app/Fuse.Input.FocusGainedHandler.h>
#include <app/Fuse.Input.FocusLost.h>
#include <app/Fuse.Input.FocusLostArgs.h>
#include <app/Fuse.Input.FocusLostHandler.h>
#include <app/Fuse.Input.FocusNavigationDirection.h>
#include <app/Fuse.Input.FocusPredictStrategy.h>
#include <app/Fuse.Input.HitTestHelpers.h>
#include <app/Fuse.Input.IsFocusableChangedArgs.h>
#include <app/Fuse.Input.IsFocusableChangedEvent.h>
#include <app/Fuse.Input.IsFocusableChangedHandler.h>
#include <app/Fuse.Input.Keyboard.h>
#include <app/Fuse.Input.KeyEventArgs.h>
#include <app/Fuse.Input.KeyPressed.h>
#include <app/Fuse.Input.KeyPressedArgs.h>
#include <app/Fuse.Input.KeyPressedHandler.h>
#include <app/Fuse.Input.KeyReleased.h>
#include <app/Fuse.Input.KeyReleasedArgs.h>
#include <app/Fuse.Input.KeyReleasedHandler.h>
#include <app/Fuse.Input.Pointer.h>
#include <app/Fuse.Input.Pointer_PELHolder.h>
#include <app/Fuse.Input.Pointer_PELStatus.h>
#include <app/Fuse.Input.Pointer_PointerRecord.h>
#include <app/Fuse.Input.PointerEntered.h>
#include <app/Fuse.Input.PointerEnteredArgs.h>
#include <app/Fuse.Input.PointerEnteredHandler.h>
#include <app/Fuse.Input.PointerEventArgs.h>
#include <app/Fuse.Input.PointerEventData.h>
#include <app/Fuse.Input.PointerLeft.h>
#include <app/Fuse.Input.PointerLeftArgs.h>
#include <app/Fuse.Input.PointerLeftHandler.h>
#include <app/Fuse.Input.PointerMoved.h>
#include <app/Fuse.Input.PointerMovedArgs.h>
#include <app/Fuse.Input.PointerMovedHandler.h>
#include <app/Fuse.Input.PointerPressed.h>
#include <app/Fuse.Input.PointerPressedArgs.h>
#include <app/Fuse.Input.PointerPressedHandler.h>
#include <app/Fuse.Input.PointerReleased.h>
#include <app/Fuse.Input.PointerReleasedArgs.h>
#include <app/Fuse.Input.PointerReleasedHandler.h>
#include <app/Fuse.Input.PointerWheelMoved.h>
#include <app/Fuse.Input.PointerWheelMovedArgs.h>
#include <app/Fuse.Input.PointerWheelMovedHandler.h>
#include <app/Fuse.Input.SelectionQuery.h>
#include <app/Fuse.Input.TextEntered.h>
#include <app/Fuse.Input.TextEnteredArgs.h>
#include <app/Fuse.Input.TextEnteredHandler.h>
#include <app/Fuse.Input.TextService.h>
#include <app/Fuse.Input.TraverseNodeExtensions.h>
#include <app/Fuse.Node.h>
#include <app/Fuse.NodeEvent__Fuse_Input_FocusGainedHandler__Fuse_Input_Focus-e88b1a1.h>
#include <app/Fuse.NodeEvent__Fuse_Input_FocusLostHandler__Fuse_Input_FocusLostArgs.h>
#include <app/Fuse.NodeEvent__Fuse_Input_IsFocusableChangedHandler__Fuse_Inpu-15da236c.h>
#include <app/Fuse.NodeEvent__Fuse_Input_KeyPressedHandler__Fuse_Input_KeyPressedArgs.h>
#include <app/Fuse.NodeEvent__Fuse_Input_KeyReleasedHandler__Fuse_Input_KeyRe-25c1dec.h>
#include <app/Fuse.NodeEvent__Fuse_Input_PointerEnteredHandler__Fuse_Input_Po-cd4446ec.h>
#include <app/Fuse.NodeEvent__Fuse_Input_PointerLeftHandler__Fuse_Input_Point-e63532ae.h>
#include <app/Fuse.NodeEvent__Fuse_Input_PointerMovedHandler__Fuse_Input_Poin-c465a3e6.h>
#include <app/Fuse.NodeEvent__Fuse_Input_PointerPressedHandler__Fuse_Input_Po-31778249.h>
#include <app/Fuse.NodeEvent__Fuse_Input_PointerReleasedHandler__Fuse_Input_P-dde60e76.h>
#include <app/Fuse.NodeEvent__Fuse_Input_PointerWheelMovedHandler__Fuse_Input-2ce16824.h>
#include <app/Fuse.NodeEvent__Fuse_Input_TextEnteredHandler__Fuse_Input_TextE-b5bf0cfa.h>
#include <app/Fuse.NodeEventArgs.h>
#include <app/Fuse.NodeEventMode.h>
#include <app/Fuse.Properties.h>
#include <app/Fuse.PropertyHandle.h>
#include <app/Fuse.Scripting.IEventSerializer.h>
#include <app/Fuse.StyleProperty__Fuse_Node__bool.h>
#include <app/Fuse.StyleProperty__Fuse_Node__Fuse_Node.h>
#include <app/Uno.Action.h>
#include <app/Uno.Action__Fuse_Node.h>
#include <app/Uno.Application.h>
#include <app/Uno.Bool.h>
#include <app/Uno.Collections.Dictionary__int__Fuse_Input_Capturer.h>
#include <app/Uno.Collections.Dictionary__int__Fuse_Input_Pointer_PointerRecord.h>
#include <app/Uno.Collections.Dictionary__int__Uno_Collections_IList_Fuse_Inp-fadbd451.h>
#include <app/Uno.Collections.Dictionary__int__Uno_Collections_List_Fuse_Inpu-4188694c.h>
#include <app/Uno.Collections.Dictionary2_Enumerator__int__Fuse_Input_Capturer.h>
#include <app/Uno.Collections.Dictionary2_Enumerator__int__Fuse_Input_Pointer-83583531.h>
#include <app/Uno.Collections.Dictionary2_Enumerator__int__Uno_Collections_IL-3f65989e.h>
#include <app/Uno.Collections.EnumerableExtensions.h>
#include <app/Uno.Collections.ICollection__Fuse_Input_Capturer.h>
#include <app/Uno.Collections.IEnumerable__Fuse_Input_Capturer.h>
#include <app/Uno.Collections.IEnumerator.h>
#include <app/Uno.Collections.IEnumerator__Fuse_Input_Capturer.h>
#include <app/Uno.Collections.IList__Fuse_Input_Capturer.h>
#include <app/Uno.Collections.KeyValuePair__int__Fuse_Input_Capturer.h>
#include <app/Uno.Collections.KeyValuePair__int__Fuse_Input_Pointer_PointerRecord.h>
#include <app/Uno.Collections.KeyValuePair__int__Uno_Collections_IList_Fuse_I-758df93b.h>
#include <app/Uno.Collections.List__Fuse_Input_Capturer.h>
#include <app/Uno.Collections.List__Fuse_Input_Pointer_PELHolder.h>
#include <app/Uno.Collections.List__int.h>
#include <app/Uno.Collections.List__Uno_Platform_Key.h>
#include <app/Uno.Collections.List1_Enumerator__int.h>
#include <app/Uno.Delegate.h>
#include <app/Uno.Diagnostics.Clock.h>
#include <app/Uno.Diagnostics.Debug.h>
#include <app/Uno.Diagnostics.DebugMessageType.h>
#include <app/Uno.Double.h>
#include <app/Uno.EventArgs.h>
#include <app/Uno.EventHandler.h>
#include <app/Uno.Exception.h>
#include <app/Uno.Float.h>
#include <app/Uno.Float2.h>
#include <app/Uno.Int.h>
#include <app/Uno.Object.h>
#include <app/Uno.Platform.Key.h>
#include <app/Uno.Platform.PointerType.h>
#include <app/Uno.Platform.WheelDeltaMode.h>
#include <app/Uno.Predicate__Fuse_Node.h>
#include <app/Uno.String.h>
#include <app/Uno.Vector.h>

namespace app {
namespace Fuse {
namespace Input {

// This file was generated based on 'C:\ProgramData\Uno\Packages\FuseCore\0.11.3\Input\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

Capturer__uType* Capturer__typeof()
{
    static ::uStaticStrong<Capturer__uType*> type;
    if (type != NULL) return type;

    type = (Capturer__uType*)::uAllocClassType(sizeof(Capturer__uType), "Fuse.Input.Capturer", false, 0, 3, 0);

    type->SetStrongRefs(
        "_Identity", offsetof(Capturer, _Identity),
        "_LostCallback", offsetof(Capturer, _LostCallback),
        "_Node", offsetof(Capturer, _Node));

    type->SetFunctions(8,
        ::uNewFunction("get_Identity", Capturer__get_Identity, 0, false, ::uObject__typeof()),
        ::uNewFunction("get_IsSuitable", Capturer__get_IsSuitable, 0, false, ::app::Uno::Bool__typeof()),
        ::uNewFunction("get_LostCallback", Capturer__get_LostCallback, 0, false, ::app::Uno::Action__typeof()),
        ::uNewFunction("get_Node", Capturer__get_Node, 0, false, ::app::Fuse::Node__typeof()),
        ::uNewFunction(".ctor", Capturer__New_1, 0, true, Capturer__typeof(), ::app::Fuse::Node__typeof(), ::uObject__typeof(), ::app::Uno::Action__typeof()),
        ::uNewFunctionVoid("set_Identity", Capturer__set_Identity, 0, false, ::uObject__typeof()),
        ::uNewFunctionVoid("set_LostCallback", Capturer__set_LostCallback, 0, false, ::app::Uno::Action__typeof()),
        ::uNewFunctionVoid("set_Node", Capturer__set_Node, 0, false, ::app::Fuse::Node__typeof()));

    ::uRegisterType(type);
    return type;
}

void Capturer___ObjInit(Capturer* __this, ::app::Fuse::Node* n, ::uObject* identity, ::uDelegate* lostCallback)
{
    if (((n == NULL) || (identity == NULL)) || ::app::Uno::Delegate__op_Equality(NULL, (::uDelegate*)lostCallback, NULL))
    {
        U_THROW(::app::Uno::Exception__New_2(NULL, ::uGetConstString("Invalid Capturer parameters")));
    }

    __this->Node(n);
    __this->Identity(identity);
    __this->LostCallback(lostCallback);
}

::uObject* Capturer__get_Identity(Capturer* __this)
{
    return __this->_Identity;
}

bool Capturer__get_IsSuitable(Capturer* __this)
{
    return ::uPtr< ::app::Fuse::Node*>(__this->Node())->IsEnabled() && ::uPtr< ::app::Fuse::Node*>(__this->Node())->IsRooted();
}

::uDelegate* Capturer__get_LostCallback(Capturer* __this)
{
    return __this->_LostCallback;
}

::app::Fuse::Node* Capturer__get_Node(Capturer* __this)
{
    return __this->_Node;
}

Capturer* Capturer__New_1(::uStatic* __this, ::app::Fuse::Node* n, ::uObject* identity, ::uDelegate* lostCallback)
{
    Capturer* inst = (Capturer*)::uAllocObject(sizeof(Capturer), Capturer__typeof());
    inst->_ObjInit(n, identity, lostCallback);
    return inst;
}

void Capturer__set_Identity(Capturer* __this, ::uObject* value)
{
    __this->_Identity = value;
}

void Capturer__set_LostCallback(Capturer* __this, ::uDelegate* value)
{
    __this->_LostCallback = value;
}

void Capturer__set_Node(Capturer* __this, ::app::Fuse::Node* value)
{
    __this->_Node = value;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\FuseCore\0.11.3\Input\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

CustomPointerEventArgs__uType* CustomPointerEventArgs__typeof()
{
    static ::uStaticStrong<CustomPointerEventArgs__uType*> type;
    if (type != NULL) return type;

    type = (CustomPointerEventArgs__uType*)::uAllocClassType(sizeof(CustomPointerEventArgs__uType), "Fuse.Input.CustomPointerEventArgs", false, 1, 0, 0);

    type->SetBaseType(::app::Fuse::Input::PointerEventArgs__typeof());

    type->SetInterfaces(
        ::app::Fuse::Scripting::IScriptEvent__typeof(), offsetof(CustomPointerEventArgs__uType, __interface_0));

    ::uRegisterType(type);
    return type;
}

void CustomPointerEventArgs___ObjInit_3(CustomPointerEventArgs* __this, ::app::Fuse::Input::PointerEventArgs* args, ::app::Fuse::Node* node)
{
    ::app::Fuse::Input::PointerEventArgs___ObjInit_2(__this, ::uPtr< ::app::Fuse::Input::PointerEventArgs*>(args)->Data(), node);
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\FuseCore\0.11.3\Input\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

::uStaticStrong< ::app::Fuse::PropertyHandle*> Focus___focusDelegatorHandle;
::uStaticStrong< ::app::Fuse::Node*> Focus___focusedObject;
::uStaticStrong< ::app::Fuse::Input::FocusGained*> Focus___gained;
::uStaticStrong< ::app::Fuse::Input::IsFocusableChangedEvent*> Focus___isFoucsableChanged;
::uStaticStrong< ::app::Fuse::Node*> Focus___lastFocusedNode;
::uStaticStrong< ::app::Fuse::Input::FocusLost*> Focus___lost;
::uStaticStrong< ::app::Fuse::StyleProperty__Fuse_Node__Fuse_Node*> Focus__FocusDelegateProperty;
::uStaticStrong< ::app::Fuse::StyleProperty__Fuse_Node__bool*> Focus__IsFocusableProperty;

Focus__uType* Focus__typeof()
{
    static ::uStaticStrong<Focus__uType*> type;
    if (type != NULL) return type;

    type = (Focus__uType*)::uAllocClassType(sizeof(Focus__uType), "Fuse.Input.Focus");

    type->SetFields(8,
        ::uNewField("_focusDelegatorHandle", &Focus___focusDelegatorHandle, 0, ::app::Fuse::PropertyHandle__typeof()),
        ::uNewField("_focusedObject", &Focus___focusedObject, 0, ::app::Fuse::Node__typeof()),
        ::uNewField("_gained", &Focus___gained, 0, ::app::Fuse::Input::FocusGained__typeof()),
        ::uNewField("_isFoucsableChanged", &Focus___isFoucsableChanged, 0, ::app::Fuse::Input::IsFocusableChangedEvent__typeof()),
        ::uNewField("_lastFocusedNode", &Focus___lastFocusedNode, 0, ::app::Fuse::Node__typeof()),
        ::uNewField("_lost", &Focus___lost, 0, ::app::Fuse::Input::FocusLost__typeof()),
        ::uNewField("FocusDelegateProperty", &Focus__FocusDelegateProperty, 0, ::app::Fuse::StyleProperty__Fuse_Node__Fuse_Node__typeof()),
        ::uNewField("IsFocusableProperty", &Focus__IsFocusableProperty, 0, ::app::Fuse::StyleProperty__Fuse_Node__bool__typeof()));

    type->SetFunctions(29,
        ::uNewFunction("CanSetFocus", Focus__CanSetFocus, 0, true, ::app::Uno::Bool__typeof(), ::app::Fuse::Node__typeof()),
        ::uNewFunctionVoid("ChangeFocusedNode", Focus__ChangeFocusedNode, 0, true, ::app::Fuse::Node__typeof(), ::app::Uno::String__typeof()),
        ::uNewFunction("FindRoot", Focus__FindRoot, 0, true, ::app::Fuse::Node__typeof()),
        ::uNewFunction("get_FocusedNode", Focus__get_FocusedNode, 0, true, ::app::Fuse::Node__typeof()),
        ::uNewFunction("get_Gained", Focus__get_Gained, 0, true, ::app::Fuse::NodeEvent__Fuse_Input_FocusGainedHandler__Fuse_Input_FocusGainedArgs__typeof()),
        ::uNewFunction("get_IsFocusableChanged", Focus__get_IsFocusableChanged, 0, true, ::app::Fuse::NodeEvent__Fuse_Input_IsFocusableChangedHandler__Fuse_Input_IsFocusableChangedArgs__typeof()),
        ::uNewFunction("get_Lost", Focus__get_Lost, 0, true, ::app::Fuse::NodeEvent__Fuse_Input_FocusLostHandler__Fuse_Input_FocusLostArgs__typeof()),
        ::uNewFunction("GetDelegator", Focus__GetDelegator, 0, true, ::app::Fuse::Input::FocusDelegator__typeof(), ::app::Fuse::Node__typeof()),
        ::uNewFunction("GetFocusDelegate", Focus__GetFocusDelegate, 0, true, ::app::Fuse::Node__typeof(), ::app::Fuse::Node__typeof()),
        ::uNewFunctionVoid("GiveTo", Focus__GiveTo, 0, true, ::app::Fuse::Node__typeof()),
        ::uNewFunction("IsFocusable", Focus__IsFocusable, 0, true, ::app::Uno::Bool__typeof(), ::app::Fuse::Node__typeof()),
        ::uNewFunction("IsWithin", Focus__IsWithin, 0, true, ::app::Uno::Bool__typeof(), ::app::Fuse::Node__typeof()),
        ::uNewFunctionVoid("Move", Focus__Move, 0, true, ::app::Fuse::Input::FocusNavigationDirection__typeof()),
        ::uNewFunctionVoid("Obtained", Focus__Obtained, 0, true, ::app::Fuse::Node__typeof()),
        ::uNewFunctionVoid("OnFocusDelegateChanged", Focus__OnFocusDelegateChanged, 0, true, ::app::Fuse::Node__typeof()),
        ::uNewFunctionVoid("OnIsFocusableChanged", Focus__OnIsFocusableChanged, 0, true, ::app::Fuse::Node__typeof()),
        ::uNewFunctionVoid("OnNodeUnrooted", Focus__OnNodeUnrooted, 0, true, ::uObject__typeof(), ::app::Uno::EventArgs__typeof()),
        ::uNewFunctionVoid("OnWindowGotFocus", Focus__OnWindowGotFocus, 0, true, ::uObject__typeof(), ::app::Uno::EventArgs__typeof()),
        ::uNewFunctionVoid("OnWindowLostFocus", Focus__OnWindowLostFocus, 0, true, ::uObject__typeof(), ::app::Uno::EventArgs__typeof()),
        ::uNewFunction("Predict", Focus__Predict, 0, true, ::app::Fuse::Node__typeof(), ::app::Fuse::Input::FocusNavigationDirection__typeof()),
        ::uNewFunctionVoid("Release", Focus__Release, 0, true),
        ::uNewFunctionVoid("ReleaseFrom", Focus__ReleaseFrom, 0, true, ::app::Fuse::Node__typeof()),
        ::uNewFunctionVoid("ResetFocusDelegate", Focus__ResetFocusDelegate, 0, true, ::app::Fuse::Node__typeof()),
        ::uNewFunctionVoid("ResetIsFocusable", Focus__ResetIsFocusable, 0, true, ::app::Fuse::Node__typeof()),
        ::uNewFunctionVoid("SetDelegator", Focus__SetDelegator, 0, true, ::app::Fuse::Node__typeof(), ::app::Fuse::Input::FocusDelegator__typeof()),
        ::uNewFunctionVoid("SetFocusDelegate", Focus__SetFocusDelegate, 0, true, ::app::Fuse::Node__typeof(), ::app::Fuse::Node__typeof()),
        ::uNewFunctionVoid("SetIsFocusable", Focus__SetIsFocusable, 0, true, ::app::Fuse::Node__typeof(), ::app::Uno::Bool__typeof()),
        ::uNewFunctionVoid("SetStyleFocusDelegate", Focus__SetStyleFocusDelegate, 0, true, ::app::Fuse::Node__typeof(), ::app::Fuse::Node__typeof()),
        ::uNewFunctionVoid("SetStyleIsFocusable", Focus__SetStyleIsFocusable, 0, true, ::app::Fuse::Node__typeof(), ::app::Uno::Bool__typeof()));

    ::uRegisterType(type);
    return type;
}

void Focus___TypeInit(::uStatic* __this)
{
    Focus___gained = ::app::Fuse::Input::FocusGained__New_1(NULL);
    Focus___lost = ::app::Fuse::Input::FocusLost__New_1(NULL);
    Focus___isFoucsableChanged = ::app::Fuse::Input::IsFocusableChangedEvent__New_1(NULL);
    Focus___focusDelegatorHandle = ::app::Fuse::Properties__CreateHandle(NULL);
    Focus__IsFocusableProperty = ::app::Fuse::StyleProperty__Fuse_Node__bool__New_1(NULL, false, ::uNewDelegateNonVirt(::app::Uno::Action__Fuse_Node__typeof(), (const void*)Focus__OnIsFocusableChanged));
    Focus__FocusDelegateProperty = ::app::Fuse::StyleProperty__Fuse_Node__Fuse_Node__New_1(NULL, NULL, ::uNewDelegateNonVirt(::app::Uno::Action__Fuse_Node__typeof(), (const void*)Focus__OnFocusDelegateChanged));
}

bool Focus__CanSetFocus(::uStatic* __this, ::app::Fuse::Node* node)
{
    return (node == NULL) || ((::uPtr< ::app::Fuse::Node*>(node)->IsRooted() && ::uPtr< ::app::Fuse::Node*>(node)->IsEnabled()) && Focus__IsFocusable(NULL, node));
}

void Focus__ChangeFocusedNode(::uStatic* __this, ::app::Fuse::Node* node, ::uString* memberName)
{
    while (node != NULL)
    {
        ::uDelegate* delegator = Focus__GetDelegator(NULL, node);

        if (::app::Uno::Delegate__op_Inequality(NULL, (::uDelegate*)delegator, NULL))
        {
            node = ::uPtr< ::uDelegate*>(delegator)->Invoke< ::app::Fuse::Node*>();
            continue;
        }

        ::app::Fuse::Node* focusDelegate = Focus__GetFocusDelegate(NULL, node);

        if (focusDelegate != NULL)
        {
            node = focusDelegate;
            continue;
        }

        break;
    }

    if (!Focus__CanSetFocus(NULL, node))
    {
        node = Focus__FindRoot(NULL);
    }

    if (node == Focus___focusedObject)
    {
        return;
    }

    Focus___lastFocusedNode = Focus___focusedObject;
    Focus___focusedObject = node;

    if (Focus___lastFocusedNode != NULL)
    {
        ::uPtr< ::app::Fuse::NodeEvent__Fuse_Input_FocusLostHandler__Fuse_Input_FocusLostArgs*>(Focus__get_Lost(NULL))->RaiseWithBubble(::app::Fuse::Input::FocusLostArgs__New_3(NULL, Focus___lastFocusedNode), 0);
    }

    if (Focus___focusedObject != NULL)
    {
        ::uPtr< ::app::Fuse::NodeEvent__Fuse_Input_FocusGainedHandler__Fuse_Input_FocusGainedArgs*>(Focus__get_Gained(NULL))->RaiseWithBubble(::app::Fuse::Input::FocusGainedArgs__New_3(NULL, Focus___focusedObject), 0);
    }
}

::app::Fuse::Node* Focus__FindRoot(::uStatic* __this)
{
    ::app::Fuse::AppBase* app = ::uAs< ::app::Fuse::AppBase*>(::app::Uno::Application__get_Current(NULL), ::app::Fuse::AppBase__typeof());

    if (app != NULL)
    {
        return ::uPtr< ::app::Fuse::AppBase*>(app)->RootNode();
    }

    return NULL;
}

::app::Fuse::Node* Focus__get_FocusedNode(::uStatic* __this)
{
    return Focus___focusedObject;
}

::app::Fuse::NodeEvent__Fuse_Input_FocusGainedHandler__Fuse_Input_FocusGainedArgs* Focus__get_Gained(::uStatic* __this)
{
    return (::app::Fuse::NodeEvent__Fuse_Input_FocusGainedHandler__Fuse_Input_FocusGainedArgs*)Focus___gained;
}

::app::Fuse::NodeEvent__Fuse_Input_IsFocusableChangedHandler__Fuse_Input_IsFocusableChangedArgs* Focus__get_IsFocusableChanged(::uStatic* __this)
{
    return (::app::Fuse::NodeEvent__Fuse_Input_IsFocusableChangedHandler__Fuse_Input_IsFocusableChangedArgs*)Focus___isFoucsableChanged;
}

::app::Fuse::NodeEvent__Fuse_Input_FocusLostHandler__Fuse_Input_FocusLostArgs* Focus__get_Lost(::uStatic* __this)
{
    return (::app::Fuse::NodeEvent__Fuse_Input_FocusLostHandler__Fuse_Input_FocusLostArgs*)Focus___lost;
}

::uDelegate* Focus__GetDelegator(::uStatic* __this, ::app::Fuse::Node* n)
{
    ::uObject* res;

    if (::uPtr< ::app::Fuse::Properties*>(::uPtr< ::app::Fuse::Node*>(n)->Properties())->TryGet(Focus___focusDelegatorHandle, &res))
    {
        return ::uCast< ::uDelegate*>(res, ::app::Fuse::Input::FocusDelegator__typeof());
    }

    return NULL;
}

::app::Fuse::Node* Focus__GetFocusDelegate(::uStatic* __this, ::app::Fuse::Node* n)
{
    return ::uPtr< ::app::Fuse::StyleProperty__Fuse_Node__Fuse_Node*>(Focus__FocusDelegateProperty)->Get(n);
}

void Focus__GiveTo(::uStatic* __this, ::app::Fuse::Node* n)
{
    Focus__ChangeFocusedNode(NULL, n, ::uGetConstString("GiveTo"));
}

bool Focus__IsFocusable(::uStatic* __this, ::app::Fuse::Node* n)
{
    return ::uPtr< ::app::Fuse::StyleProperty__Fuse_Node__bool*>(Focus__IsFocusableProperty)->Get(n);
}

bool Focus__IsWithin(::uStatic* __this, ::app::Fuse::Node* n)
{
    ::app::Fuse::Node* k = Focus__get_FocusedNode(NULL);

    while (k != NULL)
    {
        if (k == n)
        {
            return true;
        }

        k = ::uPtr< ::app::Fuse::Node*>(k)->Parent();
    }

    return false;
}

void Focus__Move(::uStatic* __this, int direction)
{
    ::app::Fuse::Node* predictedFocus = Focus__Predict(NULL, direction);

    if (predictedFocus == NULL)
    {
        return;
    }

    Focus__ChangeFocusedNode(NULL, predictedFocus, ::uGetConstString("Move"));
}

void Focus__Obtained(::uStatic* __this, ::app::Fuse::Node* n)
{
    Focus__ChangeFocusedNode(NULL, n, ::uGetConstString("Obtained"));
}

void Focus__OnFocusDelegateChanged(::uStatic* __this, ::app::Fuse::Node* n)
{
}

void Focus__OnIsFocusableChanged(::uStatic* __this, ::app::Fuse::Node* n)
{
    if (Focus__IsFocusable(NULL, n))
    {
        ::uPtr< ::app::Fuse::Node*>(n)->add_Unrooted(::uNewDelegateNonVirt(::app::Uno::EventHandler__typeof(), (const void*)Focus__OnNodeUnrooted));
    }
    else
    {
        ::uPtr< ::app::Fuse::Node*>(n)->remove_Unrooted(::uNewDelegateNonVirt(::app::Uno::EventHandler__typeof(), (const void*)Focus__OnNodeUnrooted));
    }

    ::uPtr< ::app::Fuse::NodeEvent__Fuse_Input_IsFocusableChangedHandler__Fuse_Input_IsFocusableChangedArgs*>(Focus__get_IsFocusableChanged(NULL))->RaiseWithoutBubble(::app::Fuse::Input::IsFocusableChangedArgs__New_3(NULL, n), 0);
}

void Focus__OnNodeUnrooted(::uStatic* __this, ::uObject* sender, ::app::Uno::EventArgs* args)
{
    if ((Focus___focusedObject != NULL) && !::uPtr< ::app::Fuse::Node*>(Focus___focusedObject)->IsRooted())
    {
        Focus__ChangeFocusedNode(NULL, NULL, ::uGetConstString("OnNodeUnrooted"));
    }
}

void Focus__OnWindowGotFocus(::uStatic* __this, ::uObject* sender, ::app::Uno::EventArgs* args)
{
    ::app::Fuse::Node* ind_123;
    Focus__ChangeFocusedNode(NULL, (ind_123 = Focus___focusedObject, (ind_123 != NULL) ? ind_123 : Focus___lastFocusedNode), ::uGetConstString("OnWindowGotFocus"));
}

void Focus__OnWindowLostFocus(::uStatic* __this, ::uObject* sender, ::app::Uno::EventArgs* args)
{
    Focus__ChangeFocusedNode(NULL, NULL, ::uGetConstString("OnWindowLostFocus"));
}

::app::Fuse::Node* Focus__Predict(::uStatic* __this, int direction)
{
    ::app::Fuse::Node* node = ::app::Fuse::Input::FocusPredictStrategy__Predict(NULL, Focus___focusedObject, direction);

    if (node == NULL)
    {
        ::app::Fuse::Node* root = Focus__FindRoot(NULL);

        if (root != NULL)
        {
            node = ::app::Fuse::Input::FocusPredictStrategy__Predict(NULL, root, direction);

            if ((node == NULL) && Focus__CanSetFocus(NULL, root))
            {
                node = root;
            }
        }
    }

    return node;
}

void Focus__Release(::uStatic* __this)
{
    Focus__ChangeFocusedNode(NULL, NULL, ::uGetConstString("Release"));
}

void Focus__ReleaseFrom(::uStatic* __this, ::app::Fuse::Node* n)
{
    if (Focus__get_FocusedNode(NULL) == n)
    {
        Focus__Release(NULL);
    }
}

void Focus__ResetFocusDelegate(::uStatic* __this, ::app::Fuse::Node* n)
{
    ::uPtr< ::app::Fuse::StyleProperty__Fuse_Node__Fuse_Node*>(Focus__FocusDelegateProperty)->Reset(n);
}

void Focus__ResetIsFocusable(::uStatic* __this, ::app::Fuse::Node* n)
{
    ::uPtr< ::app::Fuse::StyleProperty__Fuse_Node__bool*>(Focus__IsFocusableProperty)->Reset(n);
}

void Focus__SetDelegator(::uStatic* __this, ::app::Fuse::Node* n, ::uDelegate* delegator)
{
    ::uPtr< ::app::Fuse::Properties*>(::uPtr< ::app::Fuse::Node*>(n)->Properties())->Set(Focus___focusDelegatorHandle, (::uObject*)delegator);
}

void Focus__SetFocusDelegate(::uStatic* __this, ::app::Fuse::Node* n, ::app::Fuse::Node* d)
{
    ::uPtr< ::app::Fuse::StyleProperty__Fuse_Node__Fuse_Node*>(Focus__FocusDelegateProperty)->Set(n, d);
}

void Focus__SetIsFocusable(::uStatic* __this, ::app::Fuse::Node* n, bool focusable)
{
    ::uPtr< ::app::Fuse::StyleProperty__Fuse_Node__bool*>(Focus__IsFocusableProperty)->Set(n, focusable);
}

void Focus__SetStyleFocusDelegate(::uStatic* __this, ::app::Fuse::Node* n, ::app::Fuse::Node* d)
{
    ::uPtr< ::app::Fuse::StyleProperty__Fuse_Node__Fuse_Node*>(Focus__FocusDelegateProperty)->SetStyle(n, d);
}

void Focus__SetStyleIsFocusable(::uStatic* __this, ::app::Fuse::Node* n, bool focusable)
{
    ::uPtr< ::app::Fuse::StyleProperty__Fuse_Node__bool*>(Focus__IsFocusableProperty)->SetStyle(n, focusable);
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\FuseCore\0.11.3\Input\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

::uDelegateType* FocusDelegator__typeof()
{
    static ::uStaticStrong< ::uDelegateType*> type;
    if (type != NULL) return type;

    type = ::uAllocDelegateType("Fuse.Input.FocusDelegator", 0);

    type->SetSignature(::app::Fuse::Node__typeof());

    ::uRegisterType(type);
    return type;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\FuseCore\0.11.3\Input\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

FocusGained__uType* FocusGained__typeof()
{
    static ::uStaticStrong<FocusGained__uType*> type;
    if (type != NULL) return type;

    type = (FocusGained__uType*)::uAllocClassType(sizeof(FocusGained__uType), "Fuse.Input.FocusGained", false, 0, 0, 0);

    type->SetBaseType(::app::Fuse::NodeEvent__Fuse_Input_FocusGainedHandler__Fuse_Input_FocusGainedArgs__typeof());
    type->__fp_Invoke = (void(*)(::app::Fuse::NodeEvent__Fuse_Input_FocusGainedHandler__Fuse_Input_FocusGainedArgs*, ::uDelegate*, ::uObject*, ::app::Fuse::Input::FocusGainedArgs*))FocusGained__Invoke;

    type->SetFunctions(1,
        ::uNewFunction(".ctor", FocusGained__New_1, 0, true, FocusGained__typeof()));

    ::uRegisterType(type);
    return type;
}

void FocusGained___ObjInit_1(FocusGained* __this)
{
    ::app::Fuse::NodeEvent__Fuse_Input_FocusGainedHandler__Fuse_Input_FocusGainedArgs___ObjInit(__this);
}

void FocusGained__Invoke(FocusGained* __this, ::uDelegate* handler, ::uObject* sender, ::app::Fuse::Input::FocusGainedArgs* args)
{
    ::uPtr< ::uDelegate*>(handler)->InvokeVoid< ::uObject*, ::app::Fuse::Input::FocusGainedArgs*>(sender, args);
}

FocusGained* FocusGained__New_1(::uStatic* __this)
{
    FocusGained* inst = (FocusGained*)::uAllocObject(sizeof(FocusGained), FocusGained__typeof());
    inst->_ObjInit_1();
    return inst;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\FuseCore\0.11.3\Input\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

FocusGainedArgs__uType* FocusGainedArgs__typeof()
{
    static ::uStaticStrong<FocusGainedArgs__uType*> type;
    if (type != NULL) return type;

    type = (FocusGainedArgs__uType*)::uAllocClassType(sizeof(FocusGainedArgs__uType), "Fuse.Input.FocusGainedArgs", false, 1, 0, 0);

    type->SetBaseType(::app::Fuse::NodeEventArgs__typeof());

    type->SetInterfaces(
        ::app::Fuse::Scripting::IScriptEvent__typeof(), offsetof(FocusGainedArgs__uType, __interface_0));

    type->SetFunctions(1,
        ::uNewFunction(".ctor", FocusGainedArgs__New_3, 0, true, FocusGainedArgs__typeof(), ::app::Fuse::Node__typeof()));

    ::uRegisterType(type);
    return type;
}

void FocusGainedArgs___ObjInit_2(FocusGainedArgs* __this, ::app::Fuse::Node* node)
{
    ::app::Fuse::NodeEventArgs___ObjInit_1(__this, node);
}

FocusGainedArgs* FocusGainedArgs__New_3(::uStatic* __this, ::app::Fuse::Node* node)
{
    FocusGainedArgs* inst = (FocusGainedArgs*)::uAllocObject(sizeof(FocusGainedArgs), FocusGainedArgs__typeof());
    inst->_ObjInit_2(node);
    return inst;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\FuseCore\0.11.3\Input\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

::uDelegateType* FocusGainedHandler__typeof()
{
    static ::uStaticStrong< ::uDelegateType*> type;
    if (type != NULL) return type;

    type = ::uAllocDelegateType("Fuse.Input.FocusGainedHandler", 2);

    type->SetSignature(::uVoid__typeof(),
        ::uObject__typeof(),
        ::app::Fuse::Input::FocusGainedArgs__typeof());

    ::uRegisterType(type);
    return type;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\FuseCore\0.11.3\Input\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

FocusLost__uType* FocusLost__typeof()
{
    static ::uStaticStrong<FocusLost__uType*> type;
    if (type != NULL) return type;

    type = (FocusLost__uType*)::uAllocClassType(sizeof(FocusLost__uType), "Fuse.Input.FocusLost", false, 0, 0, 0);

    type->SetBaseType(::app::Fuse::NodeEvent__Fuse_Input_FocusLostHandler__Fuse_Input_FocusLostArgs__typeof());
    type->__fp_Invoke = (void(*)(::app::Fuse::NodeEvent__Fuse_Input_FocusLostHandler__Fuse_Input_FocusLostArgs*, ::uDelegate*, ::uObject*, ::app::Fuse::Input::FocusLostArgs*))FocusLost__Invoke;

    type->SetFunctions(1,
        ::uNewFunction(".ctor", FocusLost__New_1, 0, true, FocusLost__typeof()));

    ::uRegisterType(type);
    return type;
}

void FocusLost___ObjInit_1(FocusLost* __this)
{
    ::app::Fuse::NodeEvent__Fuse_Input_FocusLostHandler__Fuse_Input_FocusLostArgs___ObjInit(__this);
}

void FocusLost__Invoke(FocusLost* __this, ::uDelegate* handler, ::uObject* sender, ::app::Fuse::Input::FocusLostArgs* args)
{
    ::uPtr< ::uDelegate*>(handler)->InvokeVoid< ::uObject*, ::app::Fuse::Input::FocusLostArgs*>(sender, args);
}

FocusLost* FocusLost__New_1(::uStatic* __this)
{
    FocusLost* inst = (FocusLost*)::uAllocObject(sizeof(FocusLost), FocusLost__typeof());
    inst->_ObjInit_1();
    return inst;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\FuseCore\0.11.3\Input\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

FocusLostArgs__uType* FocusLostArgs__typeof()
{
    static ::uStaticStrong<FocusLostArgs__uType*> type;
    if (type != NULL) return type;

    type = (FocusLostArgs__uType*)::uAllocClassType(sizeof(FocusLostArgs__uType), "Fuse.Input.FocusLostArgs", false, 1, 0, 0);

    type->SetBaseType(::app::Fuse::NodeEventArgs__typeof());

    type->SetInterfaces(
        ::app::Fuse::Scripting::IScriptEvent__typeof(), offsetof(FocusLostArgs__uType, __interface_0));

    type->SetFunctions(1,
        ::uNewFunction(".ctor", FocusLostArgs__New_3, 0, true, FocusLostArgs__typeof(), ::app::Fuse::Node__typeof()));

    ::uRegisterType(type);
    return type;
}

void FocusLostArgs___ObjInit_2(FocusLostArgs* __this, ::app::Fuse::Node* node)
{
    ::app::Fuse::NodeEventArgs___ObjInit_1(__this, node);
}

FocusLostArgs* FocusLostArgs__New_3(::uStatic* __this, ::app::Fuse::Node* node)
{
    FocusLostArgs* inst = (FocusLostArgs*)::uAllocObject(sizeof(FocusLostArgs), FocusLostArgs__typeof());
    inst->_ObjInit_2(node);
    return inst;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\FuseCore\0.11.3\Input\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

::uDelegateType* FocusLostHandler__typeof()
{
    static ::uStaticStrong< ::uDelegateType*> type;
    if (type != NULL) return type;

    type = ::uAllocDelegateType("Fuse.Input.FocusLostHandler", 2);

    type->SetSignature(::uVoid__typeof(),
        ::uObject__typeof(),
        ::app::Fuse::Input::FocusLostArgs__typeof());

    ::uRegisterType(type);
    return type;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\FuseCore\0.11.3\Input\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

::uEnumType* FocusNavigationDirection__typeof()
{
    static ::uStaticStrong< ::uEnumType*> type;
    if (type != NULL) return type;

    type = ::uAllocEnumType("Fuse.Input.FocusNavigationDirection", ::app::Uno::Int__typeof(), 4);

    type->SetLiterals(
        "Up", 0LL,
        "Down", 1LL,
        "Left", 2LL,
        "Right", 3LL);

    ::uRegisterType(type);
    return type;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\FuseCore\0.11.3\Input\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

FocusPredictStrategy__uType* FocusPredictStrategy__typeof()
{
    static ::uStaticStrong<FocusPredictStrategy__uType*> type;
    if (type != NULL) return type;

    type = (FocusPredictStrategy__uType*)::uAllocClassType(sizeof(FocusPredictStrategy__uType), "Fuse.Input.FocusPredictStrategy");

    type->SetFunctions(1,
        ::uNewFunction("Predict", FocusPredictStrategy__Predict, 0, true, ::app::Fuse::Node__typeof(), ::app::Fuse::Node__typeof(), ::app::Fuse::Input::FocusNavigationDirection__typeof()));

    ::uRegisterType(type);
    return type;
}

::app::Fuse::Node* FocusPredictStrategy__Predict(::uStatic* __this, ::app::Fuse::Node* n, int direction)
{
    if (n != NULL)
    {
        if (direction == 1)
        {
            return ::app::Fuse::Input::TraverseNodeExtensions__FindNextChild_1(NULL, n, ::uNewDelegateNonVirt(::app::Uno::Predicate__Fuse_Node__typeof(), (const void*)::app::Fuse::Input::Focus__CanSetFocus));
        }
        else if (direction == 0)
        {
            return ::app::Fuse::Input::TraverseNodeExtensions__FindPreviousChild_1(NULL, n, ::uNewDelegateNonVirt(::app::Uno::Predicate__Fuse_Node__typeof(), (const void*)::app::Fuse::Input::Focus__CanSetFocus));
        }
    }

    return NULL;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\FuseCore\0.11.3\Input\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

HitTestHelpers__uType* HitTestHelpers__typeof()
{
    static ::uStaticStrong<HitTestHelpers__uType*> type;
    if (type != NULL) return type;

    type = (HitTestHelpers__uType*)::uAllocClassType(sizeof(HitTestHelpers__uType), "Fuse.Input.HitTestHelpers");

    type->SetFunctions(1,
        ::uNewFunction("HitTestNearest", HitTestHelpers__HitTestNearest, 0, true, ::app::Fuse::HitTestResult__typeof(), ::app::Fuse::Node__typeof(), ::app::Uno::Float2__typeof()));

    ::uRegisterType(type);
    return type;
}

::app::Fuse::HitTestResult* HitTestHelpers__HitTestNearest(::uStatic* __this, ::app::Fuse::Node* root, ::app::Uno::Float2 point)
{
    ::app::Fuse::Input::SelectionQuery* sq = ::app::Fuse::Input::SelectionQuery__New_1(NULL);
    return ::uPtr< ::app::Fuse::Input::SelectionQuery*>(sq)->Select_1(root, point);
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\FuseCore\0.11.3\Input\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

IsFocusableChangedArgs__uType* IsFocusableChangedArgs__typeof()
{
    static ::uStaticStrong<IsFocusableChangedArgs__uType*> type;
    if (type != NULL) return type;

    type = (IsFocusableChangedArgs__uType*)::uAllocClassType(sizeof(IsFocusableChangedArgs__uType), "Fuse.Input.IsFocusableChangedArgs", false, 1, 0, 0);

    type->SetBaseType(::app::Fuse::NodeEventArgs__typeof());

    type->SetInterfaces(
        ::app::Fuse::Scripting::IScriptEvent__typeof(), offsetof(IsFocusableChangedArgs__uType, __interface_0));

    type->SetFunctions(1,
        ::uNewFunction(".ctor", IsFocusableChangedArgs__New_3, 0, true, IsFocusableChangedArgs__typeof(), ::app::Fuse::Node__typeof()));

    ::uRegisterType(type);
    return type;
}

void IsFocusableChangedArgs___ObjInit_2(IsFocusableChangedArgs* __this, ::app::Fuse::Node* node)
{
    ::app::Fuse::NodeEventArgs___ObjInit_1(__this, node);
}

IsFocusableChangedArgs* IsFocusableChangedArgs__New_3(::uStatic* __this, ::app::Fuse::Node* node)
{
    IsFocusableChangedArgs* inst = (IsFocusableChangedArgs*)::uAllocObject(sizeof(IsFocusableChangedArgs), IsFocusableChangedArgs__typeof());
    inst->_ObjInit_2(node);
    return inst;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\FuseCore\0.11.3\Input\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

IsFocusableChangedEvent__uType* IsFocusableChangedEvent__typeof()
{
    static ::uStaticStrong<IsFocusableChangedEvent__uType*> type;
    if (type != NULL) return type;

    type = (IsFocusableChangedEvent__uType*)::uAllocClassType(sizeof(IsFocusableChangedEvent__uType), "Fuse.Input.IsFocusableChangedEvent", false, 0, 0, 0);

    type->SetBaseType(::app::Fuse::NodeEvent__Fuse_Input_IsFocusableChangedHandler__Fuse_Input_IsFocusableChangedArgs__typeof());
    type->__fp_Invoke = (void(*)(::app::Fuse::NodeEvent__Fuse_Input_IsFocusableChangedHandler__Fuse_Input_IsFocusableChangedArgs*, ::uDelegate*, ::uObject*, ::app::Fuse::Input::IsFocusableChangedArgs*))IsFocusableChangedEvent__Invoke;

    type->SetFunctions(1,
        ::uNewFunction(".ctor", IsFocusableChangedEvent__New_1, 0, true, IsFocusableChangedEvent__typeof()));

    ::uRegisterType(type);
    return type;
}

void IsFocusableChangedEvent___ObjInit_1(IsFocusableChangedEvent* __this)
{
    ::app::Fuse::NodeEvent__Fuse_Input_IsFocusableChangedHandler__Fuse_Input_IsFocusableChangedArgs___ObjInit(__this);
}

void IsFocusableChangedEvent__Invoke(IsFocusableChangedEvent* __this, ::uDelegate* handler, ::uObject* sender, ::app::Fuse::Input::IsFocusableChangedArgs* args)
{
    ::uPtr< ::uDelegate*>(handler)->InvokeVoid< ::uObject*, ::app::Fuse::Input::IsFocusableChangedArgs*>(sender, args);
}

IsFocusableChangedEvent* IsFocusableChangedEvent__New_1(::uStatic* __this)
{
    IsFocusableChangedEvent* inst = (IsFocusableChangedEvent*)::uAllocObject(sizeof(IsFocusableChangedEvent), IsFocusableChangedEvent__typeof());
    inst->_ObjInit_1();
    return inst;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\FuseCore\0.11.3\Input\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

::uDelegateType* IsFocusableChangedHandler__typeof()
{
    static ::uStaticStrong< ::uDelegateType*> type;
    if (type != NULL) return type;

    type = ::uAllocDelegateType("Fuse.Input.IsFocusableChangedHandler", 2);

    type->SetSignature(::uVoid__typeof(),
        ::uObject__typeof(),
        ::app::Fuse::Input::IsFocusableChangedArgs__typeof());

    ::uRegisterType(type);
    return type;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\FuseCore\0.11.3\Input\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

::uStaticStrong< ::app::Fuse::PropertyHandle*> Keyboard___keyboardHandle;
::uStaticStrong< ::app::Fuse::Input::KeyPressed*> Keyboard___keyPressed;
::uStaticStrong< ::app::Fuse::Input::KeyReleased*> Keyboard___keyReleased;
::uStaticStrong< ::app::Uno::Collections::List__Uno_Platform_Key*> Keyboard___keysDown;

Keyboard__uType* Keyboard__typeof()
{
    static ::uStaticStrong<Keyboard__uType*> type;
    if (type != NULL) return type;

    type = (Keyboard__uType*)::uAllocClassType(sizeof(Keyboard__uType), "Fuse.Input.Keyboard");

    type->SetFields(4,
        ::uNewField("_keyboardHandle", &Keyboard___keyboardHandle, 0, ::app::Fuse::PropertyHandle__typeof()),
        ::uNewField("_keyPressed", &Keyboard___keyPressed, 0, ::app::Fuse::Input::KeyPressed__typeof()),
        ::uNewField("_keyReleased", &Keyboard___keyReleased, 0, ::app::Fuse::Input::KeyReleased__typeof()),
        ::uNewField("_keysDown", &Keyboard___keysDown, 0, ::app::Uno::Collections::List__Uno_Platform_Key__typeof()));

    type->SetFunctions(7,
        ::uNewFunctionVoid("AddHandlers", Keyboard__AddHandlers, 0, true, ::app::Fuse::Node__typeof(), ::app::Fuse::Input::KeyPressedHandler__typeof(), ::app::Fuse::Input::KeyReleasedHandler__typeof()),
        ::uNewFunction("get_KeyPressed", Keyboard__get_KeyPressed, 0, true, ::app::Fuse::NodeEvent__Fuse_Input_KeyPressedHandler__Fuse_Input_KeyPressedArgs__typeof()),
        ::uNewFunction("get_KeyReleased", Keyboard__get_KeyReleased, 0, true, ::app::Fuse::NodeEvent__Fuse_Input_KeyReleasedHandler__Fuse_Input_KeyReleasedArgs__typeof()),
        ::uNewFunction("IsKeyPressed", Keyboard__IsKeyPressed, 0, true, ::app::Uno::Bool__typeof(), ::app::Uno::Platform::Key__typeof()),
        ::uNewFunction("RaiseKeyPressed", Keyboard__RaiseKeyPressed, 0, true, ::app::Uno::Bool__typeof(), ::app::Uno::Platform::Key__typeof(), ::app::Uno::Bool__typeof(), ::app::Uno::Bool__typeof(), ::app::Uno::Bool__typeof(), ::app::Uno::Bool__typeof()),
        ::uNewFunction("RaiseKeyReleased", Keyboard__RaiseKeyReleased, 0, true, ::app::Uno::Bool__typeof(), ::app::Uno::Platform::Key__typeof(), ::app::Uno::Bool__typeof(), ::app::Uno::Bool__typeof(), ::app::Uno::Bool__typeof(), ::app::Uno::Bool__typeof()),
        ::uNewFunctionVoid("RemoveHandlers", Keyboard__RemoveHandlers, 0, true, ::app::Fuse::Node__typeof(), ::app::Fuse::Input::KeyPressedHandler__typeof(), ::app::Fuse::Input::KeyReleasedHandler__typeof()));

    ::uRegisterType(type);
    return type;
}

void Keyboard___TypeInit(::uStatic* __this)
{
    Keyboard___keyPressed = ::app::Fuse::Input::KeyPressed__New_1(NULL);
    Keyboard___keyReleased = ::app::Fuse::Input::KeyReleased__New_1(NULL);
    Keyboard___keysDown = ::app::Uno::Collections::List__Uno_Platform_Key__New_1(NULL);
    Keyboard___keyboardHandle = ::app::Fuse::Properties__CreateHandle(NULL);
}

void Keyboard__AddHandlers(::uStatic* __this, ::app::Fuse::Node* node, ::uDelegate* pressed, ::uDelegate* released)
{
    if (::app::Uno::Delegate__op_Inequality(NULL, (::uDelegate*)pressed, NULL))
    {
        ::uPtr< ::app::Fuse::NodeEvent__Fuse_Input_KeyPressedHandler__Fuse_Input_KeyPressedArgs*>(Keyboard__get_KeyPressed(NULL))->AddHandler(node, pressed);
    }

    if (::app::Uno::Delegate__op_Inequality(NULL, (::uDelegate*)released, NULL))
    {
        ::uPtr< ::app::Fuse::NodeEvent__Fuse_Input_KeyReleasedHandler__Fuse_Input_KeyReleasedArgs*>(Keyboard__get_KeyReleased(NULL))->AddHandler(node, released);
    }
}

::app::Fuse::NodeEvent__Fuse_Input_KeyPressedHandler__Fuse_Input_KeyPressedArgs* Keyboard__get_KeyPressed(::uStatic* __this)
{
    return (::app::Fuse::NodeEvent__Fuse_Input_KeyPressedHandler__Fuse_Input_KeyPressedArgs*)Keyboard___keyPressed;
}

::app::Fuse::NodeEvent__Fuse_Input_KeyReleasedHandler__Fuse_Input_KeyReleasedArgs* Keyboard__get_KeyReleased(::uStatic* __this)
{
    return (::app::Fuse::NodeEvent__Fuse_Input_KeyReleasedHandler__Fuse_Input_KeyReleasedArgs*)Keyboard___keyReleased;
}

bool Keyboard__IsKeyPressed(::uStatic* __this, int key)
{
    for (int i = 0; i < ::uPtr< ::app::Uno::Collections::List__Uno_Platform_Key*>(Keyboard___keysDown)->Count(); i++)
    {
        if (::uPtr< ::app::Uno::Collections::List__Uno_Platform_Key*>(Keyboard___keysDown)->Item(i) == key)
        {
            return true;
        }
    }

    return false;
}

bool Keyboard__RaiseKeyPressed(::uStatic* __this, int key, bool isMetaKeyPressed, bool isControlKeyPressed, bool isShiftKeyPressed, bool isAltKeyPressed)
{
    ::uPtr< ::app::Uno::Collections::List__Uno_Platform_Key*>(Keyboard___keysDown)->Add(key);
    ::app::Fuse::Input::KeyPressedArgs* args = ::app::Fuse::Input::KeyPressedArgs__New_3(NULL, key, isMetaKeyPressed, isControlKeyPressed, isShiftKeyPressed, isAltKeyPressed, ::app::Fuse::Input::Focus__get_FocusedNode(NULL));
    ::uPtr< ::app::Fuse::NodeEvent__Fuse_Input_KeyPressedHandler__Fuse_Input_KeyPressedArgs*>(Keyboard__get_KeyPressed(NULL))->RaiseWithBubble(args, 0);
    return ::uPtr< ::app::Fuse::Input::KeyPressedArgs*>(args)->IsHandled();
}

bool Keyboard__RaiseKeyReleased(::uStatic* __this, int key, bool isMetaKeyPressed, bool isControlKeyPressed, bool isShiftKeyPressed, bool isAltKeyPressed)
{
    for (int i = 0; i < ::uPtr< ::app::Uno::Collections::List__Uno_Platform_Key*>(Keyboard___keysDown)->Count(); i++)
    {
        if (::uPtr< ::app::Uno::Collections::List__Uno_Platform_Key*>(Keyboard___keysDown)->Item(i) == key)
        {
            ::uPtr< ::app::Uno::Collections::List__Uno_Platform_Key*>(Keyboard___keysDown)->RemoveAt(i--);
        }
    }

    ::app::Fuse::Input::KeyReleasedArgs* args = ::app::Fuse::Input::KeyReleasedArgs__New_3(NULL, key, isMetaKeyPressed, isControlKeyPressed, isShiftKeyPressed, isAltKeyPressed, ::app::Fuse::Input::Focus__get_FocusedNode(NULL));
    ::uPtr< ::app::Fuse::NodeEvent__Fuse_Input_KeyReleasedHandler__Fuse_Input_KeyReleasedArgs*>(Keyboard__get_KeyReleased(NULL))->RaiseWithBubble(args, 0);
    return ::uPtr< ::app::Fuse::Input::KeyReleasedArgs*>(args)->IsHandled();
}

void Keyboard__RemoveHandlers(::uStatic* __this, ::app::Fuse::Node* node, ::uDelegate* pressed, ::uDelegate* released)
{
    if (::app::Uno::Delegate__op_Inequality(NULL, (::uDelegate*)pressed, NULL))
    {
        ::uPtr< ::app::Fuse::NodeEvent__Fuse_Input_KeyPressedHandler__Fuse_Input_KeyPressedArgs*>(Keyboard__get_KeyPressed(NULL))->RemoveHandler(node, pressed);
    }

    if (::app::Uno::Delegate__op_Inequality(NULL, (::uDelegate*)released, NULL))
    {
        ::uPtr< ::app::Fuse::NodeEvent__Fuse_Input_KeyReleasedHandler__Fuse_Input_KeyReleasedArgs*>(Keyboard__get_KeyReleased(NULL))->RemoveHandler(node, released);
    }
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\FuseCore\0.11.3\Input\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

KeyEventArgs__uType* KeyEventArgs__typeof()
{
    static ::uStaticStrong<KeyEventArgs__uType*> type;
    if (type != NULL) return type;

    type = (KeyEventArgs__uType*)::uAllocClassType(sizeof(KeyEventArgs__uType), "Fuse.Input.KeyEventArgs", false, 1, 0, 0);

    type->SetBaseType(::app::Fuse::NodeEventArgs__typeof());

    type->SetInterfaces(
        ::app::Fuse::Scripting::IScriptEvent__typeof(), offsetof(KeyEventArgs__uType, __interface_0));

    type->SetFunctions(10,
        ::uNewFunction("get_IsAltKeyPressed", KeyEventArgs__get_IsAltKeyPressed, 0, false, ::app::Uno::Bool__typeof()),
        ::uNewFunction("get_IsControlKeyPressed", KeyEventArgs__get_IsControlKeyPressed, 0, false, ::app::Uno::Bool__typeof()),
        ::uNewFunction("get_IsMetaKeyPressed", KeyEventArgs__get_IsMetaKeyPressed, 0, false, ::app::Uno::Bool__typeof()),
        ::uNewFunction("get_IsShiftKeyPressed", KeyEventArgs__get_IsShiftKeyPressed, 0, false, ::app::Uno::Bool__typeof()),
        ::uNewFunction("get_Key", KeyEventArgs__get_Key, 0, false, ::app::Uno::Platform::Key__typeof()),
        ::uNewFunctionVoid("set_IsAltKeyPressed", KeyEventArgs__set_IsAltKeyPressed, 0, false, ::app::Uno::Bool__typeof()),
        ::uNewFunctionVoid("set_IsControlKeyPressed", KeyEventArgs__set_IsControlKeyPressed, 0, false, ::app::Uno::Bool__typeof()),
        ::uNewFunctionVoid("set_IsMetaKeyPressed", KeyEventArgs__set_IsMetaKeyPressed, 0, false, ::app::Uno::Bool__typeof()),
        ::uNewFunctionVoid("set_IsShiftKeyPressed", KeyEventArgs__set_IsShiftKeyPressed, 0, false, ::app::Uno::Bool__typeof()),
        ::uNewFunctionVoid("set_Key", KeyEventArgs__set_Key, 0, false, ::app::Uno::Platform::Key__typeof()));

    ::uRegisterType(type);
    return type;
}

void KeyEventArgs___ObjInit_2(KeyEventArgs* __this, int key, ::app::Fuse::Node* node)
{
    ::app::Fuse::NodeEventArgs___ObjInit_1(__this, node);
    __this->Key(key);
}

bool KeyEventArgs__get_IsAltKeyPressed(KeyEventArgs* __this)
{
    return __this->_IsAltKeyPressed;
}

bool KeyEventArgs__get_IsControlKeyPressed(KeyEventArgs* __this)
{
    return __this->_IsControlKeyPressed;
}

bool KeyEventArgs__get_IsMetaKeyPressed(KeyEventArgs* __this)
{
    return __this->_IsMetaKeyPressed;
}

bool KeyEventArgs__get_IsShiftKeyPressed(KeyEventArgs* __this)
{
    return __this->_IsShiftKeyPressed;
}

int KeyEventArgs__get_Key(KeyEventArgs* __this)
{
    return __this->_Key;
}

void KeyEventArgs__set_IsAltKeyPressed(KeyEventArgs* __this, bool value)
{
    __this->_IsAltKeyPressed = value;
}

void KeyEventArgs__set_IsControlKeyPressed(KeyEventArgs* __this, bool value)
{
    __this->_IsControlKeyPressed = value;
}

void KeyEventArgs__set_IsMetaKeyPressed(KeyEventArgs* __this, bool value)
{
    __this->_IsMetaKeyPressed = value;
}

void KeyEventArgs__set_IsShiftKeyPressed(KeyEventArgs* __this, bool value)
{
    __this->_IsShiftKeyPressed = value;
}

void KeyEventArgs__set_Key(KeyEventArgs* __this, int value)
{
    __this->_Key = value;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\FuseCore\0.11.3\Input\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

KeyPressed__uType* KeyPressed__typeof()
{
    static ::uStaticStrong<KeyPressed__uType*> type;
    if (type != NULL) return type;

    type = (KeyPressed__uType*)::uAllocClassType(sizeof(KeyPressed__uType), "Fuse.Input.KeyPressed", false, 0, 0, 0);

    type->SetBaseType(::app::Fuse::NodeEvent__Fuse_Input_KeyPressedHandler__Fuse_Input_KeyPressedArgs__typeof());
    type->__fp_Invoke = (void(*)(::app::Fuse::NodeEvent__Fuse_Input_KeyPressedHandler__Fuse_Input_KeyPressedArgs*, ::uDelegate*, ::uObject*, ::app::Fuse::Input::KeyPressedArgs*))KeyPressed__Invoke;

    type->SetFunctions(1,
        ::uNewFunction(".ctor", KeyPressed__New_1, 0, true, KeyPressed__typeof()));

    ::uRegisterType(type);
    return type;
}

void KeyPressed___ObjInit_1(KeyPressed* __this)
{
    ::app::Fuse::NodeEvent__Fuse_Input_KeyPressedHandler__Fuse_Input_KeyPressedArgs___ObjInit(__this);
}

void KeyPressed__Invoke(KeyPressed* __this, ::uDelegate* handler, ::uObject* sender, ::app::Fuse::Input::KeyPressedArgs* args)
{
    ::uPtr< ::uDelegate*>(handler)->InvokeVoid< ::uObject*, ::app::Fuse::Input::KeyPressedArgs*>(sender, args);
}

KeyPressed* KeyPressed__New_1(::uStatic* __this)
{
    KeyPressed* inst = (KeyPressed*)::uAllocObject(sizeof(KeyPressed), KeyPressed__typeof());
    inst->_ObjInit_1();
    return inst;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\FuseCore\0.11.3\Input\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

KeyPressedArgs__uType* KeyPressedArgs__typeof()
{
    static ::uStaticStrong<KeyPressedArgs__uType*> type;
    if (type != NULL) return type;

    type = (KeyPressedArgs__uType*)::uAllocClassType(sizeof(KeyPressedArgs__uType), "Fuse.Input.KeyPressedArgs", false, 1, 0, 0);

    type->SetBaseType(::app::Fuse::Input::KeyEventArgs__typeof());

    type->SetInterfaces(
        ::app::Fuse::Scripting::IScriptEvent__typeof(), offsetof(KeyPressedArgs__uType, __interface_0));

    type->SetFunctions(1,
        ::uNewFunction(".ctor", KeyPressedArgs__New_3, 0, true, KeyPressedArgs__typeof(), ::app::Uno::Platform::Key__typeof(), ::app::Uno::Bool__typeof(), ::app::Uno::Bool__typeof(), ::app::Uno::Bool__typeof(), ::app::Uno::Bool__typeof(), ::app::Fuse::Node__typeof()));

    ::uRegisterType(type);
    return type;
}

void KeyPressedArgs___ObjInit_3(KeyPressedArgs* __this, int key, bool isMetaKeyPressed, bool isControlKeyPressed, bool isShiftKeyPressed, bool isAltKeyPressed, ::app::Fuse::Node* node)
{
    ::app::Fuse::Input::KeyEventArgs___ObjInit_2(__this, key, node);
    __this->IsMetaKeyPressed(isMetaKeyPressed);
    __this->IsControlKeyPressed(isControlKeyPressed);
    __this->IsShiftKeyPressed(isShiftKeyPressed);
    __this->IsAltKeyPressed(isAltKeyPressed);
}

KeyPressedArgs* KeyPressedArgs__New_3(::uStatic* __this, int key, bool isMetaKeyPressed, bool isControlKeyPressed, bool isShiftKeyPressed, bool isAltKeyPressed, ::app::Fuse::Node* node)
{
    KeyPressedArgs* inst = (KeyPressedArgs*)::uAllocObject(sizeof(KeyPressedArgs), KeyPressedArgs__typeof());
    inst->_ObjInit_3(key, isMetaKeyPressed, isControlKeyPressed, isShiftKeyPressed, isAltKeyPressed, node);
    return inst;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\FuseCore\0.11.3\Input\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

::uDelegateType* KeyPressedHandler__typeof()
{
    static ::uStaticStrong< ::uDelegateType*> type;
    if (type != NULL) return type;

    type = ::uAllocDelegateType("Fuse.Input.KeyPressedHandler", 2);

    type->SetSignature(::uVoid__typeof(),
        ::uObject__typeof(),
        ::app::Fuse::Input::KeyPressedArgs__typeof());

    ::uRegisterType(type);
    return type;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\FuseCore\0.11.3\Input\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

KeyReleased__uType* KeyReleased__typeof()
{
    static ::uStaticStrong<KeyReleased__uType*> type;
    if (type != NULL) return type;

    type = (KeyReleased__uType*)::uAllocClassType(sizeof(KeyReleased__uType), "Fuse.Input.KeyReleased", false, 0, 0, 0);

    type->SetBaseType(::app::Fuse::NodeEvent__Fuse_Input_KeyReleasedHandler__Fuse_Input_KeyReleasedArgs__typeof());
    type->__fp_Invoke = (void(*)(::app::Fuse::NodeEvent__Fuse_Input_KeyReleasedHandler__Fuse_Input_KeyReleasedArgs*, ::uDelegate*, ::uObject*, ::app::Fuse::Input::KeyReleasedArgs*))KeyReleased__Invoke;

    type->SetFunctions(1,
        ::uNewFunction(".ctor", KeyReleased__New_1, 0, true, KeyReleased__typeof()));

    ::uRegisterType(type);
    return type;
}

void KeyReleased___ObjInit_1(KeyReleased* __this)
{
    ::app::Fuse::NodeEvent__Fuse_Input_KeyReleasedHandler__Fuse_Input_KeyReleasedArgs___ObjInit(__this);
}

void KeyReleased__Invoke(KeyReleased* __this, ::uDelegate* handler, ::uObject* sender, ::app::Fuse::Input::KeyReleasedArgs* args)
{
    ::uPtr< ::uDelegate*>(handler)->InvokeVoid< ::uObject*, ::app::Fuse::Input::KeyReleasedArgs*>(sender, args);
}

KeyReleased* KeyReleased__New_1(::uStatic* __this)
{
    KeyReleased* inst = (KeyReleased*)::uAllocObject(sizeof(KeyReleased), KeyReleased__typeof());
    inst->_ObjInit_1();
    return inst;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\FuseCore\0.11.3\Input\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

KeyReleasedArgs__uType* KeyReleasedArgs__typeof()
{
    static ::uStaticStrong<KeyReleasedArgs__uType*> type;
    if (type != NULL) return type;

    type = (KeyReleasedArgs__uType*)::uAllocClassType(sizeof(KeyReleasedArgs__uType), "Fuse.Input.KeyReleasedArgs", false, 1, 0, 0);

    type->SetBaseType(::app::Fuse::Input::KeyEventArgs__typeof());

    type->SetInterfaces(
        ::app::Fuse::Scripting::IScriptEvent__typeof(), offsetof(KeyReleasedArgs__uType, __interface_0));

    type->SetFunctions(1,
        ::uNewFunction(".ctor", KeyReleasedArgs__New_3, 0, true, KeyReleasedArgs__typeof(), ::app::Uno::Platform::Key__typeof(), ::app::Uno::Bool__typeof(), ::app::Uno::Bool__typeof(), ::app::Uno::Bool__typeof(), ::app::Uno::Bool__typeof(), ::app::Fuse::Node__typeof()));

    ::uRegisterType(type);
    return type;
}

void KeyReleasedArgs___ObjInit_3(KeyReleasedArgs* __this, int key, bool isMetaKeyPressed, bool isControlKeyPressed, bool isShiftKeyPressed, bool isAltKeyPressed, ::app::Fuse::Node* node)
{
    ::app::Fuse::Input::KeyEventArgs___ObjInit_2(__this, key, node);
    __this->IsMetaKeyPressed(isMetaKeyPressed);
    __this->IsControlKeyPressed(isControlKeyPressed);
    __this->IsShiftKeyPressed(isShiftKeyPressed);
    __this->IsAltKeyPressed(isAltKeyPressed);
}

KeyReleasedArgs* KeyReleasedArgs__New_3(::uStatic* __this, int key, bool isMetaKeyPressed, bool isControlKeyPressed, bool isShiftKeyPressed, bool isAltKeyPressed, ::app::Fuse::Node* node)
{
    KeyReleasedArgs* inst = (KeyReleasedArgs*)::uAllocObject(sizeof(KeyReleasedArgs), KeyReleasedArgs__typeof());
    inst->_ObjInit_3(key, isMetaKeyPressed, isControlKeyPressed, isShiftKeyPressed, isAltKeyPressed, node);
    return inst;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\FuseCore\0.11.3\Input\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

::uDelegateType* KeyReleasedHandler__typeof()
{
    static ::uStaticStrong< ::uDelegateType*> type;
    if (type != NULL) return type;

    type = ::uAllocDelegateType("Fuse.Input.KeyReleasedHandler", 2);

    type->SetSignature(::uVoid__typeof(),
        ::uObject__typeof(),
        ::app::Fuse::Input::KeyReleasedArgs__typeof());

    ::uRegisterType(type);
    return type;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\FuseCore\0.11.3\Input\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

::app::Uno::Float2 Pointer___Coord;
::uStaticStrong< ::app::Fuse::Input::PointerEntered*> Pointer___entered;
::uStaticStrong< ::app::Uno::Collections::Dictionary__int__Fuse_Input_Capturer*> Pointer___hardCapturers;
::uStaticStrong< ::app::Uno::Collections::Dictionary__int__Uno_Collections_List_Fuse_Input_Pointer_PELHolder_*> Pointer___lastHitNodes;
::uStaticStrong< ::app::Fuse::Input::PointerLeft*> Pointer___left;
::uStaticStrong< ::app::Fuse::Input::PointerMoved*> Pointer___moved;
::uStaticStrong< ::app::Uno::Collections::Dictionary__int__Fuse_Input_Pointer_PointerRecord*> Pointer___pointersDown;
::uStaticStrong< ::app::Fuse::Input::PointerPressed*> Pointer___pressed;
::uStaticStrong< ::app::Fuse::Input::PointerReleased*> Pointer___released;
::uStaticStrong< ::app::Uno::Collections::Dictionary__int__Uno_Collections_IList_Fuse_Input_Capturer_*> Pointer___softCapturers;
::uStaticStrong< ::app::Fuse::Input::PointerWheelMoved*> Pointer___wheelMoved;

Pointer__uType* Pointer__typeof()
{
    static ::uStaticStrong<Pointer__uType*> type;
    if (type != NULL) return type;

    type = (Pointer__uType*)::uAllocClassType(sizeof(Pointer__uType), "Fuse.Input.Pointer");

    type->SetFields(10,
        ::uNewField("_entered", &Pointer___entered, 0, ::app::Fuse::Input::PointerEntered__typeof()),
        ::uNewField("_hardCapturers", &Pointer___hardCapturers, 0, ::app::Uno::Collections::Dictionary__int__Fuse_Input_Capturer__typeof()),
        ::uNewField("_lastHitNodes", &Pointer___lastHitNodes, 0, ::app::Uno::Collections::Dictionary__int__Uno_Collections_List_Fuse_Input_Pointer_PELHolder___typeof()),
        ::uNewField("_left", &Pointer___left, 0, ::app::Fuse::Input::PointerLeft__typeof()),
        ::uNewField("_moved", &Pointer___moved, 0, ::app::Fuse::Input::PointerMoved__typeof()),
        ::uNewField("_pointersDown", &Pointer___pointersDown, 0, ::app::Uno::Collections::Dictionary__int__Fuse_Input_Pointer_PointerRecord__typeof()),
        ::uNewField("_pressed", &Pointer___pressed, 0, ::app::Fuse::Input::PointerPressed__typeof()),
        ::uNewField("_released", &Pointer___released, 0, ::app::Fuse::Input::PointerReleased__typeof()),
        ::uNewField("_softCapturers", &Pointer___softCapturers, 0, ::app::Uno::Collections::Dictionary__int__Uno_Collections_IList_Fuse_Input_Capturer___typeof()),
        ::uNewField("_wheelMoved", &Pointer___wheelMoved, 0, ::app::Fuse::Input::PointerWheelMoved__typeof()));

    type->SetFunctions(41,
        ::uNewFunctionVoid("AddHandlers", Pointer__AddHandlers, 0, true, ::app::Fuse::Node__typeof(), ::app::Fuse::Input::PointerPressedHandler__typeof(), ::app::Fuse::Input::PointerMovedHandler__typeof(), ::app::Fuse::Input::PointerReleasedHandler__typeof(), ::app::Fuse::Input::PointerEnteredHandler__typeof(), ::app::Fuse::Input::PointerLeftHandler__typeof(), ::app::Fuse::Input::PointerWheelMovedHandler__typeof()),
        ::uNewFunction("get_Coord", Pointer__get_Coord, 0, true, ::app::Uno::Float2__typeof()),
        ::uNewFunction("get_Coords", Pointer__get_Coords, 0, true, ::uGetArrayType(::app::Uno::Float2__typeof())),
        ::uNewFunction("get_Entered", Pointer__get_Entered, 0, true, ::app::Fuse::NodeEvent__Fuse_Input_PointerEnteredHandler__Fuse_Input_PointerEnteredArgs__typeof()),
        ::uNewFunction("get_Left", Pointer__get_Left, 0, true, ::app::Fuse::NodeEvent__Fuse_Input_PointerLeftHandler__Fuse_Input_PointerLeftArgs__typeof()),
        ::uNewFunction("get_Moved", Pointer__get_Moved, 0, true, ::app::Fuse::NodeEvent__Fuse_Input_PointerMovedHandler__Fuse_Input_PointerMovedArgs__typeof()),
        ::uNewFunction("get_Pressed", Pointer__get_Pressed, 0, true, ::app::Fuse::NodeEvent__Fuse_Input_PointerPressedHandler__Fuse_Input_PointerPressedArgs__typeof()),
        ::uNewFunction("get_Released", Pointer__get_Released, 0, true, ::app::Fuse::NodeEvent__Fuse_Input_PointerReleasedHandler__Fuse_Input_PointerReleasedArgs__typeof()),
        ::uNewFunction("get_WheelMoved", Pointer__get_WheelMoved, 0, true, ::app::Fuse::NodeEvent__Fuse_Input_PointerWheelMovedHandler__Fuse_Input_PointerWheelMovedArgs__typeof()),
        ::uNewFunction("GetHardCapturer", Pointer__GetHardCapturer, 0, true, ::app::Fuse::Input::Capturer__typeof(), ::app::Uno::Int__typeof()),
        ::uNewFunction("GetLastHitList", Pointer__GetLastHitList, 0, true, ::app::Uno::Collections::List__Fuse_Input_Pointer_PELHolder__typeof(), ::app::Uno::Int__typeof()),
        ::uNewFunction("GetSoftCapturer", Pointer__GetSoftCapturer, 0, true, ::app::Fuse::Input::Capturer__typeof(), ::app::Uno::Int__typeof()),
        ::uNewFunction("HardCapture", Pointer__HardCapture, 0, true, ::app::Uno::Bool__typeof(), ::app::Uno::Int__typeof(), ::app::Fuse::Node__typeof(), ::uObject__typeof(), ::app::Uno::Action__typeof()),
        ::uNewFunction("IsHardCaptured", Pointer__IsHardCaptured, 0, true, ::app::Uno::Bool__typeof(), ::app::Uno::Int__typeof()),
        ::uNewFunction("IsHardCaptured", Pointer__IsHardCaptured_1, 0, true, ::app::Uno::Bool__typeof(), ::app::Uno::Int__typeof(), ::uObject__typeof()),
        ::uNewFunction("IsOnFocusablePath", Pointer__IsOnFocusablePath, 0, true, ::app::Uno::Bool__typeof(), ::app::Fuse::Node__typeof()),
        ::uNewFunction("IsPressed", Pointer__IsPressed, 0, true, ::app::Uno::Bool__typeof()),
        ::uNewFunction("IsPressed", Pointer__IsPressed_1, 0, true, ::app::Uno::Bool__typeof(), ::app::Uno::Int__typeof()),
        ::uNewFunction("IsSoftCaptured", Pointer__IsSoftCaptured, 0, true, ::app::Uno::Bool__typeof(), ::app::Uno::Int__typeof()),
        ::uNewFunction("IsSoftCaptured", Pointer__IsSoftCaptured_1, 0, true, ::app::Uno::Bool__typeof(), ::app::Uno::Int__typeof(), ::uObject__typeof()),
        ::uNewFunctionVoid("MarkAncestorHits", Pointer__MarkAncestorHits, 0, true, ::app::Fuse::Node__typeof(), ::app::Uno::Collections::List__Fuse_Input_Pointer_PELHolder__typeof()),
        ::uNewFunctionVoid("ProcessPointerEnterLeave", Pointer__ProcessPointerEnterLeave, 0, true, ::app::Fuse::HitTestResult__typeof(), ::app::Fuse::Input::PointerEventData__typeof()),
        ::uNewFunctionVoid("RaiseLeft", Pointer__RaiseLeft, 0, true, ::app::Fuse::Node__typeof(), ::app::Fuse::Input::PointerEventData__typeof()),
        ::uNewFunction("RaiseMoved", Pointer__RaiseMoved, 0, true, ::app::Fuse::Input::PointerMovedArgs__typeof(), ::app::Fuse::Node__typeof(), ::app::Fuse::Input::PointerEventData__typeof()),
        ::uNewFunctionVoid("RaisePointerMovedInternal", Pointer__RaisePointerMovedInternal, 0, true, ::app::Fuse::Input::PointerMovedArgs__typeof()),
        ::uNewFunctionVoid("RaisePointerPressedInternal", Pointer__RaisePointerPressedInternal, 0, true, ::app::Fuse::Input::PointerPressedArgs__typeof()),
        ::uNewFunctionVoid("RaisePointerReleasedInternal", Pointer__RaisePointerReleasedInternal, 0, true, ::app::Fuse::Input::PointerReleasedArgs__typeof()),
        ::uNewFunctionVoid("RaisePointerWheelMovedInternal", Pointer__RaisePointerWheelMovedInternal, 0, true, ::app::Fuse::Input::PointerWheelMovedArgs__typeof()),
        ::uNewFunction("RaisePressed", Pointer__RaisePressed, 0, true, ::app::Fuse::Input::PointerPressedArgs__typeof(), ::app::Fuse::Node__typeof(), ::app::Fuse::Input::PointerEventData__typeof()),
        ::uNewFunction("RaiseReleased", Pointer__RaiseReleased, 0, true, ::app::Fuse::Input::PointerReleasedArgs__typeof(), ::app::Fuse::Node__typeof(), ::app::Fuse::Input::PointerEventData__typeof()),
        ::uNewFunction("RaiseWheelMoved", Pointer__RaiseWheelMoved, 0, true, ::app::Fuse::Input::PointerWheelMovedArgs__typeof(), ::app::Fuse::Node__typeof(), ::app::Fuse::Input::PointerEventData__typeof()),
        ::uNewFunctionVoid("ReleaseAllCaptures", Pointer__ReleaseAllCaptures, 0, true, ::uObject__typeof()),
        ::uNewFunctionVoid("ReleaseHardCapture", Pointer__ReleaseHardCapture, 0, true, ::app::Uno::Int__typeof()),
        ::uNewFunctionVoid("ReleaseSoftCapture", Pointer__ReleaseSoftCapture, 0, true, ::app::Uno::Int__typeof(), ::uObject__typeof()),
        ::uNewFunctionVoid("RemoveHandlers", Pointer__RemoveHandlers, 0, true, ::app::Fuse::Node__typeof(), ::app::Fuse::Input::PointerPressedHandler__typeof(), ::app::Fuse::Input::PointerMovedHandler__typeof(), ::app::Fuse::Input::PointerReleasedHandler__typeof(), ::app::Fuse::Input::PointerEnteredHandler__typeof(), ::app::Fuse::Input::PointerLeftHandler__typeof(), ::app::Fuse::Input::PointerWheelMovedHandler__typeof()),
        ::uNewFunction("RoutePointerEvent", Pointer__RoutePointerEvent, 0, true, ::app::Fuse::Node__typeof(), ::app::Fuse::Input::PointerEventData__typeof(), ::app::Fuse::Node__typeof()),
        ::uNewFunction("RouteToCapturer", Pointer__RouteToCapturer, 0, true, ::app::Fuse::Node__typeof(), ::app::Fuse::Input::PointerEventData__typeof()),
        ::uNewFunction("RouteToHit", Pointer__RouteToHit, 0, true, ::app::Fuse::Node__typeof(), ::app::Fuse::Input::PointerEventData__typeof(), ::app::Fuse::Node__typeof()),
        ::uNewFunction("RouteToSoftCapturer", Pointer__RouteToSoftCapturer, 0, true, ::app::Fuse::Node__typeof(), ::app::Fuse::Input::PointerEventData__typeof()),
        ::uNewFunctionVoid("set_Coord", Pointer__set_Coord, 0, true, ::app::Uno::Float2__typeof()),
        ::uNewFunction("SoftCapture", Pointer__SoftCapture, 0, true, ::app::Uno::Bool__typeof(), ::app::Uno::Int__typeof(), ::app::Fuse::Node__typeof(), ::uObject__typeof(), ::app::Uno::Action__typeof()));

    ::uRegisterType(type);
    return type;
}

void Pointer___TypeInit(::uStatic* __this)
{
    Pointer___pressed = ::app::Fuse::Input::PointerPressed__New_1(NULL);
    Pointer___moved = ::app::Fuse::Input::PointerMoved__New_1(NULL);
    Pointer___released = ::app::Fuse::Input::PointerReleased__New_1(NULL);
    Pointer___entered = ::app::Fuse::Input::PointerEntered__New_1(NULL);
    Pointer___left = ::app::Fuse::Input::PointerLeft__New_1(NULL);
    Pointer___wheelMoved = ::app::Fuse::Input::PointerWheelMoved__New_1(NULL);
    Pointer___pointersDown = ::app::Uno::Collections::Dictionary__int__Fuse_Input_Pointer_PointerRecord__New_1(NULL);
    Pointer___softCapturers = ::app::Uno::Collections::Dictionary__int__Uno_Collections_IList_Fuse_Input_Capturer___New_1(NULL);
    Pointer___hardCapturers = ::app::Uno::Collections::Dictionary__int__Fuse_Input_Capturer__New_1(NULL);
    Pointer___lastHitNodes = ::app::Uno::Collections::Dictionary__int__Uno_Collections_List_Fuse_Input_Pointer_PELHolder___New_1(NULL);
}

void Pointer__AddHandlers(::uStatic* __this, ::app::Fuse::Node* node, ::uDelegate* pressed, ::uDelegate* moved, ::uDelegate* released, ::uDelegate* entered, ::uDelegate* left, ::uDelegate* wheelMoved)
{
    if (::app::Uno::Delegate__op_Inequality(NULL, (::uDelegate*)pressed, NULL))
    {
        ::uPtr< ::app::Fuse::NodeEvent__Fuse_Input_PointerPressedHandler__Fuse_Input_PointerPressedArgs*>(Pointer__get_Pressed(NULL))->AddHandler(node, pressed);
    }

    if (::app::Uno::Delegate__op_Inequality(NULL, (::uDelegate*)moved, NULL))
    {
        ::uPtr< ::app::Fuse::NodeEvent__Fuse_Input_PointerMovedHandler__Fuse_Input_PointerMovedArgs*>(Pointer__get_Moved(NULL))->AddHandler(node, moved);
    }

    if (::app::Uno::Delegate__op_Inequality(NULL, (::uDelegate*)released, NULL))
    {
        ::uPtr< ::app::Fuse::NodeEvent__Fuse_Input_PointerReleasedHandler__Fuse_Input_PointerReleasedArgs*>(Pointer__get_Released(NULL))->AddHandler(node, released);
    }

    if (::app::Uno::Delegate__op_Inequality(NULL, (::uDelegate*)entered, NULL))
    {
        ::uPtr< ::app::Fuse::NodeEvent__Fuse_Input_PointerEnteredHandler__Fuse_Input_PointerEnteredArgs*>(Pointer__get_Entered(NULL))->AddHandler(node, entered);
    }

    if (::app::Uno::Delegate__op_Inequality(NULL, (::uDelegate*)left, NULL))
    {
        ::uPtr< ::app::Fuse::NodeEvent__Fuse_Input_PointerLeftHandler__Fuse_Input_PointerLeftArgs*>(Pointer__get_Left(NULL))->AddHandler(node, left);
    }

    if (::app::Uno::Delegate__op_Inequality(NULL, (::uDelegate*)wheelMoved, NULL))
    {
        ::uPtr< ::app::Fuse::NodeEvent__Fuse_Input_PointerWheelMovedHandler__Fuse_Input_PointerWheelMovedArgs*>(Pointer__get_WheelMoved(NULL))->AddHandler(node, wheelMoved);
    }
}

::app::Uno::Float2 Pointer__get_Coord(::uStatic* __this)
{
    return Pointer___Coord;
}

::uArray* Pointer__get_Coords(::uStatic* __this)
{
    ::uArray* f = ::uNewArray(::app::Uno::Float2__typeof(), ::uPtr< ::app::Uno::Collections::Dictionary__int__Fuse_Input_Pointer_PointerRecord*>(Pointer___pointersDown)->Count());
    int i = 0;

    for (::app::Uno::Collections::Dictionary2_Enumerator__int__Fuse_Input_Pointer_PointerRecord enum_123 = ::uPtr< ::app::Uno::Collections::Dictionary__int__Fuse_Input_Pointer_PointerRecord*>(Pointer___pointersDown)->GetEnumerator(); enum_123.MoveNext(); )
    {
        ::app::Uno::Collections::KeyValuePair__int__Fuse_Input_Pointer_PointerRecord p = enum_123.Current();
        ::uPtr< ::uArray*>(f)->Item< ::app::Uno::Float2>(i++) = ::uPtr< ::app::Fuse::Input::Pointer_PointerRecord*>(p.Value())->WindowPoint;
    }

    return f;
}

::app::Fuse::NodeEvent__Fuse_Input_PointerEnteredHandler__Fuse_Input_PointerEnteredArgs* Pointer__get_Entered(::uStatic* __this)
{
    return (::app::Fuse::NodeEvent__Fuse_Input_PointerEnteredHandler__Fuse_Input_PointerEnteredArgs*)Pointer___entered;
}

::app::Fuse::NodeEvent__Fuse_Input_PointerLeftHandler__Fuse_Input_PointerLeftArgs* Pointer__get_Left(::uStatic* __this)
{
    return (::app::Fuse::NodeEvent__Fuse_Input_PointerLeftHandler__Fuse_Input_PointerLeftArgs*)Pointer___left;
}

::app::Fuse::NodeEvent__Fuse_Input_PointerMovedHandler__Fuse_Input_PointerMovedArgs* Pointer__get_Moved(::uStatic* __this)
{
    return (::app::Fuse::NodeEvent__Fuse_Input_PointerMovedHandler__Fuse_Input_PointerMovedArgs*)Pointer___moved;
}

::app::Fuse::NodeEvent__Fuse_Input_PointerPressedHandler__Fuse_Input_PointerPressedArgs* Pointer__get_Pressed(::uStatic* __this)
{
    return (::app::Fuse::NodeEvent__Fuse_Input_PointerPressedHandler__Fuse_Input_PointerPressedArgs*)Pointer___pressed;
}

::app::Fuse::NodeEvent__Fuse_Input_PointerReleasedHandler__Fuse_Input_PointerReleasedArgs* Pointer__get_Released(::uStatic* __this)
{
    return (::app::Fuse::NodeEvent__Fuse_Input_PointerReleasedHandler__Fuse_Input_PointerReleasedArgs*)Pointer___released;
}

::app::Fuse::NodeEvent__Fuse_Input_PointerWheelMovedHandler__Fuse_Input_PointerWheelMovedArgs* Pointer__get_WheelMoved(::uStatic* __this)
{
    return (::app::Fuse::NodeEvent__Fuse_Input_PointerWheelMovedHandler__Fuse_Input_PointerWheelMovedArgs*)Pointer___wheelMoved;
}

::app::Fuse::Input::Capturer* Pointer__GetHardCapturer(::uStatic* __this, int pointIndex)
{
    if (::uPtr< ::app::Uno::Collections::Dictionary__int__Fuse_Input_Capturer*>(Pointer___hardCapturers)->ContainsKey(pointIndex))
    {
        ::app::Fuse::Input::Capturer* hc = ::uPtr< ::app::Uno::Collections::Dictionary__int__Fuse_Input_Capturer*>(Pointer___hardCapturers)->Item(pointIndex);

        if (::uPtr< ::app::Fuse::Input::Capturer*>(hc)->IsSuitable())
        {
            return hc;
        }

        ::uPtr< ::uDelegate*>(::uPtr< ::app::Fuse::Input::Capturer*>(hc)->LostCallback())->InvokeVoid();
        ::uPtr< ::app::Uno::Collections::Dictionary__int__Fuse_Input_Capturer*>(Pointer___hardCapturers)->Remove(pointIndex);
    }

    return NULL;
}

::app::Uno::Collections::List__Fuse_Input_Pointer_PELHolder* Pointer__GetLastHitList(::uStatic* __this, int pointIndex)
{
    ::app::Uno::Collections::List__Fuse_Input_Pointer_PELHolder* lastHitList = NULL;

    if (!::uPtr< ::app::Uno::Collections::Dictionary__int__Uno_Collections_List_Fuse_Input_Pointer_PELHolder_*>(Pointer___lastHitNodes)->TryGetValue(pointIndex, &lastHitList))
    {
        lastHitList = ::app::Uno::Collections::List__Fuse_Input_Pointer_PELHolder__New_1(NULL);
        ::uPtr< ::app::Uno::Collections::Dictionary__int__Uno_Collections_List_Fuse_Input_Pointer_PELHolder_*>(Pointer___lastHitNodes)->Add(pointIndex, lastHitList);
    }

    return lastHitList;
}

::app::Fuse::Input::Capturer* Pointer__GetSoftCapturer(::uStatic* __this, int pointIndex)
{
    if (::uPtr< ::app::Uno::Collections::Dictionary__int__Uno_Collections_IList_Fuse_Input_Capturer_*>(Pointer___softCapturers)->ContainsKey(pointIndex))
    {
        ::uObject* list = ::uPtr< ::app::Uno::Collections::Dictionary__int__Uno_Collections_IList_Fuse_Input_Capturer_*>(Pointer___softCapturers)->Item(pointIndex);

        while (::app::Uno::Collections::ICollection__Fuse_Input_Capturer::Count(::uPtr< ::uObject*>(list)) > 0)
        {
            ::app::Fuse::Input::Capturer* n = ::app::Uno::Collections::EnumerableExtensions__First__Fuse_Input_Capturer(NULL, (::uObject*)list);

            if (::uPtr< ::app::Fuse::Input::Capturer*>(n)->IsSuitable())
            {
                return n;
            }

            ::app::Uno::Collections::IList__Fuse_Input_Capturer::RemoveAt(::uPtr< ::uObject*>(list), 0);
            ::uPtr< ::uDelegate*>(::uPtr< ::app::Fuse::Input::Capturer*>(n)->LostCallback())->InvokeVoid();
        }
    }

    return NULL;
}

bool Pointer__HardCapture(::uStatic* __this, int pointIndex, ::app::Fuse::Node* node, ::uObject* identity, ::uDelegate* lostCallback)
{
    if (::app::Uno::Delegate__op_Equality(NULL, (::uDelegate*)lostCallback, NULL))
    {
        U_THROW(::app::Uno::Exception__New_2(NULL, ::uGetConstString("HardCapture requires lostCallback Action")));
    }

    if (identity == NULL)
    {
        U_THROW(::app::Uno::Exception__New_2(NULL, ::uGetConstString("HardCapture requires identity object")));
    }

    if (node == NULL)
    {
        U_THROW(::app::Uno::Exception__New_2(NULL, ::uGetConstString("HardCapture requires Node")));
    }

    if (!::uPtr< ::app::Fuse::Node*>(node)->IsEnabled() || !::uPtr< ::app::Fuse::Node*>(node)->IsRooted())
    {
        ::app::Uno::Diagnostics::Debug__Log_5(NULL, ::uGetConstString("HardCapture can only be done on rooted enabled node"), 1, ::uGetConstString("C:\\ProgramData\\Uno\\Packages\\FuseCore\\0.11.3\\Input\\$.uno"), 1126);
        return false;
    }

    if (::uPtr< ::app::Uno::Collections::Dictionary__int__Uno_Collections_IList_Fuse_Input_Capturer_*>(Pointer___softCapturers)->ContainsKey(pointIndex))
    {
        ::uObject* sc = ::uPtr< ::app::Uno::Collections::Dictionary__int__Uno_Collections_IList_Fuse_Input_Capturer_*>(Pointer___softCapturers)->Item(pointIndex);

        for (int i = 0; i < ::app::Uno::Collections::ICollection__Fuse_Input_Capturer::Count(::uPtr< ::uObject*>(sc)); i++)
        {
            if (::uPtr< ::app::Fuse::Input::Capturer*>(::app::Uno::Collections::IList__Fuse_Input_Capturer::Item(::uPtr< ::uObject*>(sc), i))->Identity() == identity)
            {
                continue;
            }

            if (::app::Uno::Delegate__op_Inequality(NULL, (::uDelegate*)::uPtr< ::app::Fuse::Input::Capturer*>(::app::Uno::Collections::IList__Fuse_Input_Capturer::Item(::uPtr< ::uObject*>(sc), i))->LostCallback(), NULL))
            {
                ::uPtr< ::uDelegate*>(::uPtr< ::app::Fuse::Input::Capturer*>(::app::Uno::Collections::IList__Fuse_Input_Capturer::Item(::uPtr< ::uObject*>(sc), i))->LostCallback())->InvokeVoid();
            }
        }

        ::app::Uno::Collections::ICollection__Fuse_Input_Capturer::Clear(::uPtr< ::uObject*>(sc));
    }

    ::uPtr< ::app::Uno::Collections::Dictionary__int__Fuse_Input_Capturer*>(Pointer___hardCapturers)->Item(pointIndex, ::app::Fuse::Input::Capturer__New_1(NULL, node, identity, lostCallback));
    return true;
}

bool Pointer__IsHardCaptured(::uStatic* __this, int pointIndex)
{
    return ::uPtr< ::app::Uno::Collections::Dictionary__int__Fuse_Input_Capturer*>(Pointer___hardCapturers)->ContainsKey(pointIndex);
}

bool Pointer__IsHardCaptured_1(::uStatic* __this, int pointIndex, ::uObject* behavior)
{
    ::app::Fuse::Input::Capturer* hc = Pointer__GetHardCapturer(NULL, pointIndex);
    return (hc != NULL) && (::uPtr< ::app::Fuse::Input::Capturer*>(hc)->Identity() == behavior);
}

bool Pointer__IsOnFocusablePath(::uStatic* __this, ::app::Fuse::Node* n)
{
    while (n != NULL)
    {
        if (::app::Fuse::Input::Focus__IsFocusable(NULL, n))
        {
            return true;
        }

        n = ::uPtr< ::app::Fuse::Node*>(n)->Parent();
    }

    return false;
}

bool Pointer__IsPressed(::uStatic* __this)
{
    return ::uPtr< ::app::Uno::Collections::Dictionary__int__Fuse_Input_Pointer_PointerRecord*>(Pointer___pointersDown)->Count() > 0;
}

bool Pointer__IsPressed_1(::uStatic* __this, int pointIndex)
{
    for (::app::Uno::Collections::Dictionary2_Enumerator__int__Fuse_Input_Pointer_PointerRecord enum_124 = ::uPtr< ::app::Uno::Collections::Dictionary__int__Fuse_Input_Pointer_PointerRecord*>(Pointer___pointersDown)->GetEnumerator(); enum_124.MoveNext(); )
    {
        ::app::Uno::Collections::KeyValuePair__int__Fuse_Input_Pointer_PointerRecord p = enum_124.Current();

        if (p.Key() == pointIndex)
        {
            return true;
        }
    }

    return false;
}

bool Pointer__IsSoftCaptured(::uStatic* __this, int pointIndex)
{
    return ::uPtr< ::app::Uno::Collections::Dictionary__int__Uno_Collections_IList_Fuse_Input_Capturer_*>(Pointer___softCapturers)->ContainsKey(pointIndex);
}

bool Pointer__IsSoftCaptured_1(::uStatic* __this, int pointIndex, ::uObject* capturerIdentity)
{
    if (::uPtr< ::app::Uno::Collections::Dictionary__int__Uno_Collections_IList_Fuse_Input_Capturer_*>(Pointer___softCapturers)->ContainsKey(pointIndex))
    {
        ::uObject* sc = ::uPtr< ::app::Uno::Collections::Dictionary__int__Uno_Collections_IList_Fuse_Input_Capturer_*>(Pointer___softCapturers)->Item(pointIndex);

        for (::uObject* enum_125 = ::app::Uno::Collections::IEnumerable__Fuse_Input_Capturer::GetEnumerator(::uPtr< ::uObject*>(sc)); ::app::Uno::Collections::IEnumerator::MoveNext(::uPtr< ::uObject*>(enum_125)); )
        {
            ::app::Fuse::Input::Capturer* s = ::app::Uno::Collections::IEnumerator__Fuse_Input_Capturer::Current(::uPtr< ::uObject*>(enum_125));

            if (::uPtr< ::app::Fuse::Input::Capturer*>(s)->Identity() == capturerIdentity)
            {
                return true;
            }
        }
    }

    return false;
}

void Pointer__MarkAncestorHits(::uStatic* __this, ::app::Fuse::Node* hitObject, ::app::Uno::Collections::List__Fuse_Input_Pointer_PELHolder* list)
{
    ::app::Fuse::Input::Pointer_PELHolder* collection_129;

    for (int i = 0; i < ::uPtr< ::app::Uno::Collections::List__Fuse_Input_Pointer_PELHolder*>(list)->Count(); ++i)
    {
        ::uPtr< ::app::Fuse::Input::Pointer_PELHolder*>(::uPtr< ::app::Uno::Collections::List__Fuse_Input_Pointer_PELHolder*>(list)->Item(i))->Status = 1;
    }

    while (hitObject != NULL)
    {
        bool found = false;

        for (int i = 0; i < ::uPtr< ::app::Uno::Collections::List__Fuse_Input_Pointer_PELHolder*>(list)->Count(); ++i)
        {
            if (::uPtr< ::app::Fuse::Input::Pointer_PELHolder*>(::uPtr< ::app::Uno::Collections::List__Fuse_Input_Pointer_PELHolder*>(list)->Item(i))->Node == hitObject)
            {
                ::uPtr< ::app::Fuse::Input::Pointer_PELHolder*>(::uPtr< ::app::Uno::Collections::List__Fuse_Input_Pointer_PELHolder*>(list)->Item(i))->Status = 2;
                found = true;
                break;
            }
        }

        if (!found)
        {
            ::uPtr< ::app::Uno::Collections::List__Fuse_Input_Pointer_PELHolder*>(list)->Add((collection_129 = ::app::Fuse::Input::Pointer_PELHolder__New_1(NULL), ::uPtr< ::app::Fuse::Input::Pointer_PELHolder*>(collection_129)->Node = hitObject, ::uPtr< ::app::Fuse::Input::Pointer_PELHolder*>(collection_129)->Status = 0, collection_129));
        }

        hitObject = ::uPtr< ::app::Fuse::Node*>(hitObject)->Parent();
    }
}

void Pointer__ProcessPointerEnterLeave(::uStatic* __this, ::app::Fuse::HitTestResult* result, ::app::Fuse::Input::PointerEventData* args)
{
    ::app::Uno::Collections::List__Fuse_Input_Pointer_PELHolder* lastHitList = Pointer__GetLastHitList(NULL, ::uPtr< ::app::Fuse::Input::PointerEventData*>(args)->PointIndex);
    Pointer__MarkAncestorHits(NULL, (result == NULL) ? (::app::Fuse::Node*)NULL : ::uPtr< ::app::Fuse::HitTestResult*>(result)->HitObject(), lastHitList);

    for (int j = ::uPtr< ::app::Uno::Collections::List__Fuse_Input_Pointer_PELHolder*>(lastHitList)->Count() - 1; j >= 0; j--)
    {
        if (::uPtr< ::app::Fuse::Input::Pointer_PELHolder*>(::uPtr< ::app::Uno::Collections::List__Fuse_Input_Pointer_PELHolder*>(lastHitList)->Item(j))->Status != 1)
        {
            continue;
        }

        ::uPtr< ::app::Fuse::NodeEvent__Fuse_Input_PointerLeftHandler__Fuse_Input_PointerLeftArgs*>(Pointer__get_Left(NULL))->RaiseWithoutBubble(::app::Fuse::Input::PointerLeftArgs__New_3(NULL, args, ::uPtr< ::app::Fuse::Input::Pointer_PELHolder*>(::uPtr< ::app::Uno::Collections::List__Fuse_Input_Pointer_PELHolder*>(lastHitList)->Item(j))->Node), 2);
        lastHitList->RemoveAt(j);
    }

    for (int j = 0; j < lastHitList->Count(); ++j)
    {
        if (::uPtr< ::app::Fuse::Input::Pointer_PELHolder*>(::uPtr< ::app::Uno::Collections::List__Fuse_Input_Pointer_PELHolder*>(lastHitList)->Item(j))->Status != 0)
        {
            continue;
        }

        ::uPtr< ::app::Fuse::NodeEvent__Fuse_Input_PointerEnteredHandler__Fuse_Input_PointerEnteredArgs*>(Pointer__get_Entered(NULL))->RaiseWithoutBubble(::app::Fuse::Input::PointerEnteredArgs__New_3(NULL, args, ::uPtr< ::app::Fuse::Input::Pointer_PELHolder*>(::uPtr< ::app::Uno::Collections::List__Fuse_Input_Pointer_PELHolder*>(lastHitList)->Item(j))->Node), 1);
    }
}

void Pointer__RaiseLeft(::uStatic* __this, ::app::Fuse::Node* root, ::app::Fuse::Input::PointerEventData* data)
{
    Pointer__ProcessPointerEnterLeave(NULL, NULL, data);
}

::app::Fuse::Input::PointerMovedArgs* Pointer__RaiseMoved(::uStatic* __this, ::app::Fuse::Node* root, ::app::Fuse::Input::PointerEventData* data)
{
    ::app::Fuse::Node* target = Pointer__RoutePointerEvent(NULL, data, root);
    ::app::Fuse::Input::PointerMovedArgs* e = ::app::Fuse::Input::PointerMovedArgs__New_3(NULL, data, target);

    if (target != NULL)
    {
        Pointer__RaisePointerMovedInternal(NULL, e);
    }

    return e;
}

void Pointer__RaisePointerMovedInternal(::uStatic* __this, ::app::Fuse::Input::PointerMovedArgs* args)
{
    if (::uPtr< ::app::Uno::Collections::Dictionary__int__Fuse_Input_Pointer_PointerRecord*>(Pointer___pointersDown)->ContainsKey(::uPtr< ::app::Fuse::Input::PointerMovedArgs*>(args)->PointIndex()))
    {
        ::app::Fuse::Input::Pointer_PointerRecord* p = ::uPtr< ::app::Uno::Collections::Dictionary__int__Fuse_Input_Pointer_PointerRecord*>(Pointer___pointersDown)->Item(::uPtr< ::app::Fuse::Input::PointerMovedArgs*>(args)->PointIndex());
        ::uPtr< ::app::Fuse::Input::Pointer_PointerRecord*>(p)->DistanceMoved = ::uPtr< ::app::Fuse::Input::Pointer_PointerRecord*>(p)->DistanceMoved + ::app::Uno::Vector__Length(NULL, ::app::Uno::Float2__op_Subtraction_2(NULL, args->WindowPoint(), ::uPtr< ::app::Fuse::Input::Pointer_PointerRecord*>(p)->WindowPoint));
        p->WindowPoint = args->WindowPoint();
    }

    Pointer__set_Coord(NULL, ::uPtr< ::app::Fuse::Input::PointerMovedArgs*>(args)->WindowPoint());
    ::uPtr< ::app::Fuse::NodeEvent__Fuse_Input_PointerMovedHandler__Fuse_Input_PointerMovedArgs*>(Pointer__get_Moved(NULL))->RaiseWithBubble(args, 1);
}

void Pointer__RaisePointerPressedInternal(::uStatic* __this, ::app::Fuse::Input::PointerPressedArgs* args)
{
    ::app::Fuse::Input::Pointer_PointerRecord* collection_130;
    collection_130 = ::app::Fuse::Input::Pointer_PointerRecord__New_1(NULL);
    ::uPtr< ::app::Fuse::Input::Pointer_PointerRecord*>(collection_130)->WindowPoint = ::uPtr< ::app::Fuse::Input::PointerPressedArgs*>(args)->WindowPoint();
    collection_130->DistanceMoved = 0.0f;
    ::app::Fuse::Input::Pointer_PointerRecord* p = collection_130;
    ::uPtr< ::app::Uno::Collections::Dictionary__int__Fuse_Input_Pointer_PointerRecord*>(Pointer___pointersDown)->Item(args->PointIndex(), p);
    Pointer__set_Coord(NULL, args->WindowPoint());
    ::uPtr< ::app::Fuse::NodeEvent__Fuse_Input_PointerPressedHandler__Fuse_Input_PointerPressedArgs*>(Pointer__get_Pressed(NULL))->RaiseWithBubble(args, 1);

    if (!args->IsHandled() && !Pointer__IsOnFocusablePath(NULL, args->Node()))
    {
        ::app::Fuse::Input::Focus__Release(NULL);
    }

    p->WasHandled = args->IsHandled();
}

void Pointer__RaisePointerReleasedInternal(::uStatic* __this, ::app::Fuse::Input::PointerReleasedArgs* args)
{
    if (::uPtr< ::app::Uno::Collections::Dictionary__int__Fuse_Input_Pointer_PointerRecord*>(Pointer___pointersDown)->ContainsKey(::uPtr< ::app::Fuse::Input::PointerReleasedArgs*>(args)->PointIndex()))
    {
        ::app::Fuse::Input::Pointer_PointerRecord* p = ::uPtr< ::app::Uno::Collections::Dictionary__int__Fuse_Input_Pointer_PointerRecord*>(Pointer___pointersDown)->Item(::uPtr< ::app::Fuse::Input::PointerReleasedArgs*>(args)->PointIndex());
        ::uPtr< ::app::Fuse::Input::Pointer_PointerRecord*>(p)->DistanceMoved = ::uPtr< ::app::Fuse::Input::Pointer_PointerRecord*>(p)->DistanceMoved + ::app::Uno::Vector__Length(NULL, ::app::Uno::Float2__op_Subtraction_2(NULL, args->WindowPoint(), ::uPtr< ::app::Fuse::Input::Pointer_PointerRecord*>(p)->WindowPoint));
        ::uPtr< ::app::Uno::Collections::Dictionary__int__Fuse_Input_Pointer_PointerRecord*>(Pointer___pointersDown)->Remove(args->PointIndex());
    }

    Pointer__set_Coord(NULL, ::uPtr< ::app::Fuse::Input::PointerReleasedArgs*>(args)->WindowPoint());
    ::uPtr< ::app::Fuse::NodeEvent__Fuse_Input_PointerReleasedHandler__Fuse_Input_PointerReleasedArgs*>(Pointer__get_Released(NULL))->RaiseWithBubble(args, 1);
}

void Pointer__RaisePointerWheelMovedInternal(::uStatic* __this, ::app::Fuse::Input::PointerWheelMovedArgs* args)
{
    ::uPtr< ::app::Fuse::NodeEvent__Fuse_Input_PointerWheelMovedHandler__Fuse_Input_PointerWheelMovedArgs*>(Pointer__get_WheelMoved(NULL))->RaiseWithBubble(args, 1);
}

::app::Fuse::Input::PointerPressedArgs* Pointer__RaisePressed(::uStatic* __this, ::app::Fuse::Node* root, ::app::Fuse::Input::PointerEventData* data)
{
    ::app::Fuse::Node* target = Pointer__RoutePointerEvent(NULL, data, root);
    ::app::Fuse::Input::PointerPressedArgs* e = ::app::Fuse::Input::PointerPressedArgs__New_3(NULL, data, target);

    if (target == NULL)
    {
        ::app::Fuse::Input::Focus__Release(NULL);
        return e;
    }

    Pointer__RaisePointerPressedInternal(NULL, e);
    return e;
}

::app::Fuse::Input::PointerReleasedArgs* Pointer__RaiseReleased(::uStatic* __this, ::app::Fuse::Node* root, ::app::Fuse::Input::PointerEventData* data)
{
    ::app::Fuse::Node* target = Pointer__RoutePointerEvent(NULL, data, root);
    ::app::Fuse::Input::PointerReleasedArgs* e = ::app::Fuse::Input::PointerReleasedArgs__New_3(NULL, data, target);

    if (target != NULL)
    {
        Pointer__RaisePointerReleasedInternal(NULL, e);
    }

    if (::uPtr< ::app::Fuse::Input::PointerEventData*>(data)->PointerType == 2)
    {
        Pointer__ProcessPointerEnterLeave(NULL, NULL, data);
    }

    return e;
}

::app::Fuse::Input::PointerWheelMovedArgs* Pointer__RaiseWheelMoved(::uStatic* __this, ::app::Fuse::Node* root, ::app::Fuse::Input::PointerEventData* data)
{
    ::app::Fuse::Node* target = Pointer__RoutePointerEvent(NULL, data, root);
    ::app::Fuse::Input::PointerWheelMovedArgs* e = ::app::Fuse::Input::PointerWheelMovedArgs__New_3(NULL, data, target);

    if (target != NULL)
    {
        Pointer__RaisePointerWheelMovedInternal(NULL, e);
    }

    return e;
}

void Pointer__ReleaseAllCaptures(::uStatic* __this, ::uObject* identity)
{
    for (::app::Uno::Collections::Dictionary2_Enumerator__int__Uno_Collections_IList_Fuse_Input_Capturer_ enum_126 = ::uPtr< ::app::Uno::Collections::Dictionary__int__Uno_Collections_IList_Fuse_Input_Capturer_*>(Pointer___softCapturers)->GetEnumerator(); enum_126.MoveNext(); )
    {
        ::app::Uno::Collections::KeyValuePair__int__Uno_Collections_IList_Fuse_Input_Capturer_ sc = enum_126.Current();

        for (int i = ::app::Uno::Collections::ICollection__Fuse_Input_Capturer::Count(::uPtr< ::uObject*>(sc.Value())) - 1; i >= 0; --i)
        {
            if (::uPtr< ::app::Fuse::Input::Capturer*>(::app::Uno::Collections::IList__Fuse_Input_Capturer::Item(::uPtr< ::uObject*>(sc.Value()), i))->Identity() == identity)
            {
                ::app::Uno::Collections::IList__Fuse_Input_Capturer::RemoveAt(::uPtr< ::uObject*>(sc.Value()), i);
            }
        }
    }

    ::app::Uno::Collections::List__int* remove = ::app::Uno::Collections::List__int__New_1(NULL);

    for (::app::Uno::Collections::Dictionary2_Enumerator__int__Fuse_Input_Capturer enum_127 = ::uPtr< ::app::Uno::Collections::Dictionary__int__Fuse_Input_Capturer*>(Pointer___hardCapturers)->GetEnumerator(); enum_127.MoveNext(); )
    {
        ::app::Uno::Collections::KeyValuePair__int__Fuse_Input_Capturer hc = enum_127.Current();

        if (::uPtr< ::app::Fuse::Input::Capturer*>(hc.Value())->Identity() == identity)
        {
            ::uPtr< ::app::Uno::Collections::List__int*>(remove)->Add(hc.Key());
        }
    }

    for (::app::Uno::Collections::List1_Enumerator__int enum_128 = ::uPtr< ::app::Uno::Collections::List__int*>(remove)->GetEnumerator(); enum_128.MoveNext(); )
    {
        int r = enum_128.Current();
        ::uPtr< ::app::Uno::Collections::Dictionary__int__Fuse_Input_Capturer*>(Pointer___hardCapturers)->Remove(r);
    }
}

void Pointer__ReleaseHardCapture(::uStatic* __this, int pointIndex)
{
    if (::uPtr< ::app::Uno::Collections::Dictionary__int__Fuse_Input_Capturer*>(Pointer___hardCapturers)->ContainsKey(pointIndex))
    {
        ::uPtr< ::app::Uno::Collections::Dictionary__int__Fuse_Input_Capturer*>(Pointer___hardCapturers)->Remove(pointIndex);
    }
}

void Pointer__ReleaseSoftCapture(::uStatic* __this, int pointIndex, ::uObject* identity)
{
    if (::uPtr< ::app::Uno::Collections::Dictionary__int__Uno_Collections_IList_Fuse_Input_Capturer_*>(Pointer___softCapturers)->ContainsKey(pointIndex))
    {
        ::uObject* sc = ::uPtr< ::app::Uno::Collections::Dictionary__int__Uno_Collections_IList_Fuse_Input_Capturer_*>(Pointer___softCapturers)->Item(pointIndex);

        for (int i = 0; i < ::app::Uno::Collections::ICollection__Fuse_Input_Capturer::Count(::uPtr< ::uObject*>(sc)); i++)
        {
            if (::uPtr< ::app::Fuse::Input::Capturer*>(::app::Uno::Collections::IList__Fuse_Input_Capturer::Item(::uPtr< ::uObject*>(sc), i))->Identity() == identity)
            {
                ::app::Uno::Collections::IList__Fuse_Input_Capturer::RemoveAt(::uPtr< ::uObject*>(sc), i--);
            }
        }
    }
}

void Pointer__RemoveHandlers(::uStatic* __this, ::app::Fuse::Node* node, ::uDelegate* pressed, ::uDelegate* moved, ::uDelegate* released, ::uDelegate* entered, ::uDelegate* left, ::uDelegate* wheelMoved)
{
    if (::app::Uno::Delegate__op_Inequality(NULL, (::uDelegate*)pressed, NULL))
    {
        ::uPtr< ::app::Fuse::NodeEvent__Fuse_Input_PointerPressedHandler__Fuse_Input_PointerPressedArgs*>(Pointer__get_Pressed(NULL))->RemoveHandler(node, pressed);
    }

    if (::app::Uno::Delegate__op_Inequality(NULL, (::uDelegate*)moved, NULL))
    {
        ::uPtr< ::app::Fuse::NodeEvent__Fuse_Input_PointerMovedHandler__Fuse_Input_PointerMovedArgs*>(Pointer__get_Moved(NULL))->RemoveHandler(node, moved);
    }

    if (::app::Uno::Delegate__op_Inequality(NULL, (::uDelegate*)released, NULL))
    {
        ::uPtr< ::app::Fuse::NodeEvent__Fuse_Input_PointerReleasedHandler__Fuse_Input_PointerReleasedArgs*>(Pointer__get_Released(NULL))->RemoveHandler(node, released);
    }

    if (::app::Uno::Delegate__op_Inequality(NULL, (::uDelegate*)entered, NULL))
    {
        ::uPtr< ::app::Fuse::NodeEvent__Fuse_Input_PointerEnteredHandler__Fuse_Input_PointerEnteredArgs*>(Pointer__get_Entered(NULL))->RemoveHandler(node, entered);
    }

    if (::app::Uno::Delegate__op_Inequality(NULL, (::uDelegate*)left, NULL))
    {
        ::uPtr< ::app::Fuse::NodeEvent__Fuse_Input_PointerLeftHandler__Fuse_Input_PointerLeftArgs*>(Pointer__get_Left(NULL))->RemoveHandler(node, left);
    }

    if (::app::Uno::Delegate__op_Inequality(NULL, (::uDelegate*)wheelMoved, NULL))
    {
        ::uPtr< ::app::Fuse::NodeEvent__Fuse_Input_PointerWheelMovedHandler__Fuse_Input_PointerWheelMovedArgs*>(Pointer__get_WheelMoved(NULL))->RemoveHandler(node, wheelMoved);
    }
}

::app::Fuse::Node* Pointer__RoutePointerEvent(::uStatic* __this, ::app::Fuse::Input::PointerEventData* plainEvent, ::app::Fuse::Node* root)
{
    ::app::Fuse::Node* n = Pointer__RouteToSoftCapturer(NULL, plainEvent);

    if (n != NULL)
    {
        return n;
    }

    n = Pointer__RouteToCapturer(NULL, plainEvent);

    if (n != NULL)
    {
        return n;
    }

    n = Pointer__RouteToHit(NULL, plainEvent, root);

    if (n != NULL)
    {
        return n;
    }

    return NULL;
}

::app::Fuse::Node* Pointer__RouteToCapturer(::uStatic* __this, ::app::Fuse::Input::PointerEventData* args)
{
    ::app::Fuse::Input::Capturer* capturer = Pointer__GetHardCapturer(NULL, ::uPtr< ::app::Fuse::Input::PointerEventData*>(args)->PointIndex);

    if (capturer == NULL)
    {
        return NULL;
    }

    return ::uPtr< ::app::Fuse::Input::Capturer*>(capturer)->Node();
}

::app::Fuse::Node* Pointer__RouteToHit(::uStatic* __this, ::app::Fuse::Input::PointerEventData* args, ::app::Fuse::Node* root)
{
    ::app::Fuse::HitTestResult* result = ::app::Fuse::Input::HitTestHelpers__HitTestNearest(NULL, root, ::uPtr< ::app::Fuse::Input::PointerEventData*>(args)->WindowPoint);

    while ((result != NULL) && !::uPtr< ::app::Fuse::Node*>(::uPtr< ::app::Fuse::HitTestResult*>(result)->HitObject())->IsEnabled())
    {
        ::uPtr< ::app::Fuse::HitTestResult*>(result)->HitObject(::uPtr< ::app::Fuse::Node*>(::uPtr< ::app::Fuse::HitTestResult*>(result)->HitObject())->Parent());
    }

    Pointer__ProcessPointerEnterLeave(NULL, result, args);

    if (result == NULL)
    {
        return NULL;
    }

    return result->HitObject();
}

::app::Fuse::Node* Pointer__RouteToSoftCapturer(::uStatic* __this, ::app::Fuse::Input::PointerEventData* args)
{
    ::app::Fuse::Input::Capturer* sc = Pointer__GetSoftCapturer(NULL, ::uPtr< ::app::Fuse::Input::PointerEventData*>(args)->PointIndex);

    if (sc == NULL)
    {
        return NULL;
    }

    return ::uPtr< ::app::Fuse::Input::Capturer*>(sc)->Node();
}

void Pointer__set_Coord(::uStatic* __this, ::app::Uno::Float2 value)
{
    Pointer___Coord = value;
}

bool Pointer__SoftCapture(::uStatic* __this, int pointIndex, ::app::Fuse::Node* softCapturer, ::uObject* identity, ::uDelegate* lostCallback)
{
    if (::app::Uno::Delegate__op_Equality(NULL, (::uDelegate*)lostCallback, NULL))
    {
        U_THROW(::app::Uno::Exception__New_2(NULL, ::uGetConstString("SoftCapture requires lostCallback Action")));
    }

    if (identity == NULL)
    {
        U_THROW(::app::Uno::Exception__New_2(NULL, ::uGetConstString("SoftCapture requires identity object")));
    }

    if (softCapturer == NULL)
    {
        U_THROW(::app::Uno::Exception__New_2(NULL, ::uGetConstString("SoftCapture requires softCapturer Node")));
    }

    if (!::uPtr< ::app::Fuse::Node*>(softCapturer)->IsEnabled() || !::uPtr< ::app::Fuse::Node*>(softCapturer)->IsRooted())
    {
        ::app::Uno::Diagnostics::Debug__Log_5(NULL, ::uGetConstString("SoftCapture can only be done on rooted enabled node"), 1, ::uGetConstString("C:\\ProgramData\\Uno\\Packages\\FuseCore\\0.11.3\\Input\\$.uno"), 1035);
        return false;
    }

    if (Pointer__GetHardCapturer(NULL, pointIndex) != NULL)
    {
        return false;
    }

    if (!::uPtr< ::app::Uno::Collections::Dictionary__int__Uno_Collections_IList_Fuse_Input_Capturer_*>(Pointer___softCapturers)->ContainsKey(pointIndex))
    {
        ::uPtr< ::app::Uno::Collections::Dictionary__int__Uno_Collections_IList_Fuse_Input_Capturer_*>(Pointer___softCapturers)->Add(pointIndex, (::uObject*)::app::Uno::Collections::List__Fuse_Input_Capturer__New_1(NULL));
    }

    ::app::Uno::Collections::ICollection__Fuse_Input_Capturer::Add(::uPtr< ::uObject*>(::uPtr< ::app::Uno::Collections::Dictionary__int__Uno_Collections_IList_Fuse_Input_Capturer_*>(Pointer___softCapturers)->Item(pointIndex)), ::app::Fuse::Input::Capturer__New_1(NULL, softCapturer, identity, lostCallback));
    return true;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\FuseCore\0.11.3\Input\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

Pointer_PELHolder__uType* Pointer_PELHolder__typeof()
{
    static ::uStaticStrong<Pointer_PELHolder__uType*> type;
    if (type != NULL) return type;

    type = (Pointer_PELHolder__uType*)::uAllocClassType(sizeof(Pointer_PELHolder__uType), "Fuse.Input.Pointer.PELHolder", false, 0, 1, 0);

    type->SetStrongRefs(
        "Node", offsetof(Pointer_PELHolder, Node));

    return type;
}

void Pointer_PELHolder___ObjInit(Pointer_PELHolder* __this)
{
}

Pointer_PELHolder* Pointer_PELHolder__New_1(::uStatic* __this)
{
    Pointer_PELHolder* inst = (Pointer_PELHolder*)::uAllocObject(sizeof(Pointer_PELHolder), Pointer_PELHolder__typeof());
    inst->_ObjInit();
    return inst;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\FuseCore\0.11.3\Input\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

::uEnumType* Pointer_PELStatus__typeof()
{
    static ::uStaticStrong< ::uEnumType*> type;
    if (type != NULL) return type;

    type = ::uAllocEnumType("Fuse.Input.Pointer.PELStatus", ::app::Uno::Int__typeof(), 3);

    type->SetLiterals(
        "Added", 0LL,
        "Removed", 1LL,
        "Remain", 2LL);

    return type;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\FuseCore\0.11.3\Input\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

Pointer_PointerRecord__uType* Pointer_PointerRecord__typeof()
{
    static ::uStaticStrong<Pointer_PointerRecord__uType*> type;
    if (type != NULL) return type;

    type = (Pointer_PointerRecord__uType*)::uAllocClassType(sizeof(Pointer_PointerRecord__uType), "Fuse.Input.Pointer.PointerRecord", false, 0, 0, 0);

    return type;
}

void Pointer_PointerRecord___ObjInit(Pointer_PointerRecord* __this)
{
    __this->TimeAppeared = ::app::Uno::Diagnostics::Clock__GetSeconds(NULL);
}

double Pointer_PointerRecord__get_TimeSinceAppeared(Pointer_PointerRecord* __this)
{
    return ::app::Uno::Diagnostics::Clock__GetSeconds(NULL) - __this->TimeAppeared;
}

Pointer_PointerRecord* Pointer_PointerRecord__New_1(::uStatic* __this)
{
    Pointer_PointerRecord* inst = (Pointer_PointerRecord*)::uAllocObject(sizeof(Pointer_PointerRecord), Pointer_PointerRecord__typeof());
    inst->_ObjInit();
    return inst;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\FuseCore\0.11.3\Input\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

PointerEntered__uType* PointerEntered__typeof()
{
    static ::uStaticStrong<PointerEntered__uType*> type;
    if (type != NULL) return type;

    type = (PointerEntered__uType*)::uAllocClassType(sizeof(PointerEntered__uType), "Fuse.Input.PointerEntered", false, 0, 0, 0);

    type->SetBaseType(::app::Fuse::NodeEvent__Fuse_Input_PointerEnteredHandler__Fuse_Input_PointerEnteredArgs__typeof());
    type->__fp_Invoke = (void(*)(::app::Fuse::NodeEvent__Fuse_Input_PointerEnteredHandler__Fuse_Input_PointerEnteredArgs*, ::uDelegate*, ::uObject*, ::app::Fuse::Input::PointerEnteredArgs*))PointerEntered__Invoke;

    type->SetFunctions(1,
        ::uNewFunction(".ctor", PointerEntered__New_1, 0, true, PointerEntered__typeof()));

    ::uRegisterType(type);
    return type;
}

void PointerEntered___ObjInit_1(PointerEntered* __this)
{
    ::app::Fuse::NodeEvent__Fuse_Input_PointerEnteredHandler__Fuse_Input_PointerEnteredArgs___ObjInit(__this);
}

void PointerEntered__Invoke(PointerEntered* __this, ::uDelegate* handler, ::uObject* sender, ::app::Fuse::Input::PointerEnteredArgs* args)
{
    ::uPtr< ::uDelegate*>(handler)->InvokeVoid< ::uObject*, ::app::Fuse::Input::PointerEnteredArgs*>(sender, args);
}

PointerEntered* PointerEntered__New_1(::uStatic* __this)
{
    PointerEntered* inst = (PointerEntered*)::uAllocObject(sizeof(PointerEntered), PointerEntered__typeof());
    inst->_ObjInit_1();
    return inst;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\FuseCore\0.11.3\Input\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

PointerEnteredArgs__uType* PointerEnteredArgs__typeof()
{
    static ::uStaticStrong<PointerEnteredArgs__uType*> type;
    if (type != NULL) return type;

    type = (PointerEnteredArgs__uType*)::uAllocClassType(sizeof(PointerEnteredArgs__uType), "Fuse.Input.PointerEnteredArgs", false, 1, 0, 0);

    type->SetBaseType(::app::Fuse::Input::PointerEventArgs__typeof());

    type->SetInterfaces(
        ::app::Fuse::Scripting::IScriptEvent__typeof(), offsetof(PointerEnteredArgs__uType, __interface_0));

    type->SetFunctions(1,
        ::uNewFunction(".ctor", PointerEnteredArgs__New_3, 0, true, PointerEnteredArgs__typeof(), ::app::Fuse::Input::PointerEventData__typeof(), ::app::Fuse::Node__typeof()));

    ::uRegisterType(type);
    return type;
}

void PointerEnteredArgs___ObjInit_3(PointerEnteredArgs* __this, ::app::Fuse::Input::PointerEventData* data, ::app::Fuse::Node* node)
{
    ::app::Fuse::Input::PointerEventArgs___ObjInit_2(__this, data, node);
}

PointerEnteredArgs* PointerEnteredArgs__New_3(::uStatic* __this, ::app::Fuse::Input::PointerEventData* data, ::app::Fuse::Node* node)
{
    PointerEnteredArgs* inst = (PointerEnteredArgs*)::uAllocObject(sizeof(PointerEnteredArgs), PointerEnteredArgs__typeof());
    inst->_ObjInit_3(data, node);
    return inst;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\FuseCore\0.11.3\Input\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

::uDelegateType* PointerEnteredHandler__typeof()
{
    static ::uStaticStrong< ::uDelegateType*> type;
    if (type != NULL) return type;

    type = ::uAllocDelegateType("Fuse.Input.PointerEnteredHandler", 2);

    type->SetSignature(::uVoid__typeof(),
        ::uObject__typeof(),
        ::app::Fuse::Input::PointerEnteredArgs__typeof());

    ::uRegisterType(type);
    return type;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\FuseCore\0.11.3\Input\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

PointerEventArgs__uType* PointerEventArgs__typeof()
{
    static ::uStaticStrong<PointerEventArgs__uType*> type;
    if (type != NULL) return type;

    type = (PointerEventArgs__uType*)::uAllocClassType(sizeof(PointerEventArgs__uType), "Fuse.Input.PointerEventArgs", false, 1, 1, 0);

    type->SetBaseType(::app::Fuse::NodeEventArgs__typeof());

    type->SetInterfaces(
        ::app::Fuse::Scripting::IScriptEvent__typeof(), offsetof(PointerEventArgs__uType, __interface_0));

    type->SetStrongRefs(
        "_data", offsetof(PointerEventArgs, _data));

    type->SetFields(1,
        ::uNewField("_data", NULL, offsetof(PointerEventArgs, _data), ::app::Fuse::Input::PointerEventData__typeof()));

    type->SetFunctions(16,
        ::uNewFunctionVoid("Fuse.Scripting.IScriptEvent.Serialize", PointerEventArgs__Fuse_Scripting_IScriptEvent_Serialize_1, 0, false, ::app::Fuse::Scripting::IEventSerializer__typeof()),
        ::uNewFunction("get_Data", PointerEventArgs__get_Data, 0, false, ::app::Fuse::Input::PointerEventData__typeof()),
        ::uNewFunction("get_IsHardCaptured", PointerEventArgs__get_IsHardCaptured, 0, false, ::app::Uno::Bool__typeof()),
        ::uNewFunction("get_IsPrimary", PointerEventArgs__get_IsPrimary, 0, false, ::app::Uno::Bool__typeof()),
        ::uNewFunction("get_PointerType", PointerEventArgs__get_PointerType, 0, false, ::app::Uno::Platform::PointerType__typeof()),
        ::uNewFunction("get_PointIndex", PointerEventArgs__get_PointIndex, 0, false, ::app::Uno::Int__typeof()),
        ::uNewFunction("get_Timestamp", PointerEventArgs__get_Timestamp, 0, false, ::app::Uno::Double__typeof()),
        ::uNewFunction("get_WheelDelta", PointerEventArgs__get_WheelDelta, 0, false, ::app::Uno::Float2__typeof()),
        ::uNewFunction("get_WheelDeltaMode", PointerEventArgs__get_WheelDeltaMode, 0, false, ::app::Uno::Platform::WheelDeltaMode__typeof()),
        ::uNewFunction("get_WindowPoint", PointerEventArgs__get_WindowPoint, 0, false, ::app::Uno::Float2__typeof()),
        ::uNewFunction("IsHardCapturedTo", PointerEventArgs__IsHardCapturedTo, 0, false, ::app::Uno::Bool__typeof(), ::uObject__typeof()),
        ::uNewFunction("IsSoftCapturedTo", PointerEventArgs__IsSoftCapturedTo, 0, false, ::app::Uno::Bool__typeof(), ::uObject__typeof()),
        ::uNewFunctionVoid("ReleaseHardCapture", PointerEventArgs__ReleaseHardCapture, 0, false, ::uObject__typeof()),
        ::uNewFunctionVoid("ReleaseSoftCapture", PointerEventArgs__ReleaseSoftCapture, 0, false, ::uObject__typeof()),
        ::uNewFunction("TryHardCapture", PointerEventArgs__TryHardCapture, 0, false, ::app::Uno::Bool__typeof(), ::uObject__typeof(), ::app::Uno::Action__typeof(), ::app::Fuse::Node__typeof()),
        ::uNewFunction("TrySoftCapture", PointerEventArgs__TrySoftCapture, 0, false, ::app::Uno::Bool__typeof(), ::uObject__typeof(), ::app::Uno::Action__typeof(), ::app::Fuse::Node__typeof()));

    ::uRegisterType(type);
    return type;
}

void PointerEventArgs___ObjInit_2(PointerEventArgs* __this, ::app::Fuse::Input::PointerEventData* data, ::app::Fuse::Node* node)
{
    ::app::Fuse::NodeEventArgs___ObjInit_1(__this, node);
    __this->_data = data;
}

void PointerEventArgs__Fuse_Scripting_IScriptEvent_Serialize_1(PointerEventArgs* __this, ::uObject* s)
{
    ::app::Fuse::Scripting::IEventSerializer::AddDouble(::uPtr< ::uObject*>(s), ::uGetConstString("x"), (double)__this->WindowPoint().X);
    ::app::Fuse::Scripting::IEventSerializer::AddDouble(s, ::uGetConstString("y"), (double)__this->WindowPoint().Y);
    ::app::Fuse::Scripting::IEventSerializer::AddInt(s, ::uGetConstString("index"), __this->PointIndex());
}

::app::Fuse::Input::PointerEventData* PointerEventArgs__get_Data(PointerEventArgs* __this)
{
    return __this->_data;
}

bool PointerEventArgs__get_IsHardCaptured(PointerEventArgs* __this)
{
    return ::app::Fuse::Input::Pointer__IsHardCaptured(NULL, __this->PointIndex());
}

bool PointerEventArgs__get_IsPrimary(PointerEventArgs* __this)
{
    return ::uPtr< ::app::Fuse::Input::PointerEventData*>(__this->_data)->IsPrimary;
}

int PointerEventArgs__get_PointerType(PointerEventArgs* __this)
{
    return ::uPtr< ::app::Fuse::Input::PointerEventData*>(__this->_data)->PointerType;
}

int PointerEventArgs__get_PointIndex(PointerEventArgs* __this)
{
    return ::uPtr< ::app::Fuse::Input::PointerEventData*>(__this->_data)->PointIndex;
}

double PointerEventArgs__get_Timestamp(PointerEventArgs* __this)
{
    return ::uPtr< ::app::Fuse::Input::PointerEventData*>(__this->_data)->Timestamp;
}

::app::Uno::Float2 PointerEventArgs__get_WheelDelta(PointerEventArgs* __this)
{
    return ::uPtr< ::app::Fuse::Input::PointerEventData*>(__this->_data)->WheelDelta;
}

int PointerEventArgs__get_WheelDeltaMode(PointerEventArgs* __this)
{
    return ::uPtr< ::app::Fuse::Input::PointerEventData*>(__this->_data)->WheelDeltaMode;
}

::app::Uno::Float2 PointerEventArgs__get_WindowPoint(PointerEventArgs* __this)
{
    return ::uPtr< ::app::Fuse::Input::PointerEventData*>(__this->_data)->WindowPoint;
}

bool PointerEventArgs__IsHardCapturedTo(PointerEventArgs* __this, ::uObject* behavior)
{
    return ::app::Fuse::Input::Pointer__IsHardCaptured_1(NULL, __this->PointIndex(), behavior);
}

bool PointerEventArgs__IsSoftCapturedTo(PointerEventArgs* __this, ::uObject* behavior)
{
    return ::app::Fuse::Input::Pointer__IsSoftCaptured_1(NULL, __this->PointIndex(), behavior);
}

void PointerEventArgs__ReleaseHardCapture(PointerEventArgs* __this, ::uObject* behavior)
{
    if (__this->IsHardCapturedTo(behavior))
    {
        ::app::Fuse::Input::Pointer__ReleaseHardCapture(NULL, __this->PointIndex());
    }
}

void PointerEventArgs__ReleaseSoftCapture(PointerEventArgs* __this, ::uObject* behavior)
{
    ::app::Fuse::Input::Pointer__ReleaseSoftCapture(NULL, __this->PointIndex(), behavior);
}

bool PointerEventArgs__TryHardCapture(PointerEventArgs* __this, ::uObject* identity, ::uDelegate* lostCallback, ::app::Fuse::Node* captureNode)
{
    if (!__this->IsHardCaptured())
    {
        return ::app::Fuse::Input::Pointer__HardCapture(NULL, __this->PointIndex(), (captureNode != NULL) ? captureNode : __this->Node(), identity, lostCallback);
    }

    return false;
}

bool PointerEventArgs__TrySoftCapture(PointerEventArgs* __this, ::uObject* identity, ::uDelegate* lostCallback, ::app::Fuse::Node* captureNode)
{
    return ::app::Fuse::Input::Pointer__SoftCapture(NULL, __this->PointIndex(), (captureNode != NULL) ? captureNode : __this->Node(), identity, lostCallback);
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\FuseCore\0.11.3\Input\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

PointerEventData__uType* PointerEventData__typeof()
{
    static ::uStaticStrong<PointerEventData__uType*> type;
    if (type != NULL) return type;

    type = (PointerEventData__uType*)::uAllocClassType(sizeof(PointerEventData__uType), "Fuse.Input.PointerEventData", false, 0, 0, 0);

    type->SetFields(7,
        ::uNewField("IsPrimary", NULL, offsetof(PointerEventData, IsPrimary), ::app::Uno::Bool__typeof()),
        ::uNewField("PointerType", NULL, offsetof(PointerEventData, PointerType), ::app::Uno::Platform::PointerType__typeof()),
        ::uNewField("PointIndex", NULL, offsetof(PointerEventData, PointIndex), ::app::Uno::Int__typeof()),
        ::uNewField("Timestamp", NULL, offsetof(PointerEventData, Timestamp), ::app::Uno::Double__typeof()),
        ::uNewField("WheelDelta", NULL, offsetof(PointerEventData, WheelDelta), ::app::Uno::Float2__typeof()),
        ::uNewField("WheelDeltaMode", NULL, offsetof(PointerEventData, WheelDeltaMode), ::app::Uno::Platform::WheelDeltaMode__typeof()),
        ::uNewField("WindowPoint", NULL, offsetof(PointerEventData, WindowPoint), ::app::Uno::Float2__typeof()));

    type->SetFunctions(1,
        ::uNewFunction(".ctor", PointerEventData__New_1, 0, true, PointerEventData__typeof()));

    ::uRegisterType(type);
    return type;
}

void PointerEventData___ObjInit(PointerEventData* __this)
{
}

PointerEventData* PointerEventData__New_1(::uStatic* __this)
{
    PointerEventData* inst = (PointerEventData*)::uAllocObject(sizeof(PointerEventData), PointerEventData__typeof());
    inst->_ObjInit();
    return inst;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\FuseCore\0.11.3\Input\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

PointerLeft__uType* PointerLeft__typeof()
{
    static ::uStaticStrong<PointerLeft__uType*> type;
    if (type != NULL) return type;

    type = (PointerLeft__uType*)::uAllocClassType(sizeof(PointerLeft__uType), "Fuse.Input.PointerLeft", false, 0, 0, 0);

    type->SetBaseType(::app::Fuse::NodeEvent__Fuse_Input_PointerLeftHandler__Fuse_Input_PointerLeftArgs__typeof());
    type->__fp_Invoke = (void(*)(::app::Fuse::NodeEvent__Fuse_Input_PointerLeftHandler__Fuse_Input_PointerLeftArgs*, ::uDelegate*, ::uObject*, ::app::Fuse::Input::PointerLeftArgs*))PointerLeft__Invoke;

    type->SetFunctions(1,
        ::uNewFunction(".ctor", PointerLeft__New_1, 0, true, PointerLeft__typeof()));

    ::uRegisterType(type);
    return type;
}

void PointerLeft___ObjInit_1(PointerLeft* __this)
{
    ::app::Fuse::NodeEvent__Fuse_Input_PointerLeftHandler__Fuse_Input_PointerLeftArgs___ObjInit(__this);
}

void PointerLeft__Invoke(PointerLeft* __this, ::uDelegate* handler, ::uObject* sender, ::app::Fuse::Input::PointerLeftArgs* args)
{
    ::uPtr< ::uDelegate*>(handler)->InvokeVoid< ::uObject*, ::app::Fuse::Input::PointerLeftArgs*>(sender, args);
}

PointerLeft* PointerLeft__New_1(::uStatic* __this)
{
    PointerLeft* inst = (PointerLeft*)::uAllocObject(sizeof(PointerLeft), PointerLeft__typeof());
    inst->_ObjInit_1();
    return inst;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\FuseCore\0.11.3\Input\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

PointerLeftArgs__uType* PointerLeftArgs__typeof()
{
    static ::uStaticStrong<PointerLeftArgs__uType*> type;
    if (type != NULL) return type;

    type = (PointerLeftArgs__uType*)::uAllocClassType(sizeof(PointerLeftArgs__uType), "Fuse.Input.PointerLeftArgs", false, 1, 0, 0);

    type->SetBaseType(::app::Fuse::Input::PointerEventArgs__typeof());

    type->SetInterfaces(
        ::app::Fuse::Scripting::IScriptEvent__typeof(), offsetof(PointerLeftArgs__uType, __interface_0));

    type->SetFunctions(1,
        ::uNewFunction(".ctor", PointerLeftArgs__New_3, 0, true, PointerLeftArgs__typeof(), ::app::Fuse::Input::PointerEventData__typeof(), ::app::Fuse::Node__typeof()));

    ::uRegisterType(type);
    return type;
}

void PointerLeftArgs___ObjInit_3(PointerLeftArgs* __this, ::app::Fuse::Input::PointerEventData* data, ::app::Fuse::Node* node)
{
    ::app::Fuse::Input::PointerEventArgs___ObjInit_2(__this, data, node);
}

PointerLeftArgs* PointerLeftArgs__New_3(::uStatic* __this, ::app::Fuse::Input::PointerEventData* data, ::app::Fuse::Node* node)
{
    PointerLeftArgs* inst = (PointerLeftArgs*)::uAllocObject(sizeof(PointerLeftArgs), PointerLeftArgs__typeof());
    inst->_ObjInit_3(data, node);
    return inst;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\FuseCore\0.11.3\Input\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

::uDelegateType* PointerLeftHandler__typeof()
{
    static ::uStaticStrong< ::uDelegateType*> type;
    if (type != NULL) return type;

    type = ::uAllocDelegateType("Fuse.Input.PointerLeftHandler", 2);

    type->SetSignature(::uVoid__typeof(),
        ::uObject__typeof(),
        ::app::Fuse::Input::PointerLeftArgs__typeof());

    ::uRegisterType(type);
    return type;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\FuseCore\0.11.3\Input\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

PointerMoved__uType* PointerMoved__typeof()
{
    static ::uStaticStrong<PointerMoved__uType*> type;
    if (type != NULL) return type;

    type = (PointerMoved__uType*)::uAllocClassType(sizeof(PointerMoved__uType), "Fuse.Input.PointerMoved", false, 0, 0, 0);

    type->SetBaseType(::app::Fuse::NodeEvent__Fuse_Input_PointerMovedHandler__Fuse_Input_PointerMovedArgs__typeof());
    type->__fp_Invoke = (void(*)(::app::Fuse::NodeEvent__Fuse_Input_PointerMovedHandler__Fuse_Input_PointerMovedArgs*, ::uDelegate*, ::uObject*, ::app::Fuse::Input::PointerMovedArgs*))PointerMoved__Invoke;

    type->SetFunctions(1,
        ::uNewFunction(".ctor", PointerMoved__New_1, 0, true, PointerMoved__typeof()));

    ::uRegisterType(type);
    return type;
}

void PointerMoved___ObjInit_1(PointerMoved* __this)
{
    ::app::Fuse::NodeEvent__Fuse_Input_PointerMovedHandler__Fuse_Input_PointerMovedArgs___ObjInit(__this);
}

void PointerMoved__Invoke(PointerMoved* __this, ::uDelegate* handler, ::uObject* sender, ::app::Fuse::Input::PointerMovedArgs* args)
{
    ::uPtr< ::uDelegate*>(handler)->InvokeVoid< ::uObject*, ::app::Fuse::Input::PointerMovedArgs*>(sender, args);
}

PointerMoved* PointerMoved__New_1(::uStatic* __this)
{
    PointerMoved* inst = (PointerMoved*)::uAllocObject(sizeof(PointerMoved), PointerMoved__typeof());
    inst->_ObjInit_1();
    return inst;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\FuseCore\0.11.3\Input\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

PointerMovedArgs__uType* PointerMovedArgs__typeof()
{
    static ::uStaticStrong<PointerMovedArgs__uType*> type;
    if (type != NULL) return type;

    type = (PointerMovedArgs__uType*)::uAllocClassType(sizeof(PointerMovedArgs__uType), "Fuse.Input.PointerMovedArgs", false, 1, 0, 0);

    type->SetBaseType(::app::Fuse::Input::PointerEventArgs__typeof());

    type->SetInterfaces(
        ::app::Fuse::Scripting::IScriptEvent__typeof(), offsetof(PointerMovedArgs__uType, __interface_0));

    type->SetFunctions(1,
        ::uNewFunction(".ctor", PointerMovedArgs__New_3, 0, true, PointerMovedArgs__typeof(), ::app::Fuse::Input::PointerEventData__typeof(), ::app::Fuse::Node__typeof()));

    ::uRegisterType(type);
    return type;
}

void PointerMovedArgs___ObjInit_3(PointerMovedArgs* __this, ::app::Fuse::Input::PointerEventData* data, ::app::Fuse::Node* node)
{
    ::app::Fuse::Input::PointerEventArgs___ObjInit_2(__this, data, node);
}

PointerMovedArgs* PointerMovedArgs__New_3(::uStatic* __this, ::app::Fuse::Input::PointerEventData* data, ::app::Fuse::Node* node)
{
    PointerMovedArgs* inst = (PointerMovedArgs*)::uAllocObject(sizeof(PointerMovedArgs), PointerMovedArgs__typeof());
    inst->_ObjInit_3(data, node);
    return inst;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\FuseCore\0.11.3\Input\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

::uDelegateType* PointerMovedHandler__typeof()
{
    static ::uStaticStrong< ::uDelegateType*> type;
    if (type != NULL) return type;

    type = ::uAllocDelegateType("Fuse.Input.PointerMovedHandler", 2);

    type->SetSignature(::uVoid__typeof(),
        ::uObject__typeof(),
        ::app::Fuse::Input::PointerMovedArgs__typeof());

    ::uRegisterType(type);
    return type;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\FuseCore\0.11.3\Input\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

PointerPressed__uType* PointerPressed__typeof()
{
    static ::uStaticStrong<PointerPressed__uType*> type;
    if (type != NULL) return type;

    type = (PointerPressed__uType*)::uAllocClassType(sizeof(PointerPressed__uType), "Fuse.Input.PointerPressed", false, 0, 0, 0);

    type->SetBaseType(::app::Fuse::NodeEvent__Fuse_Input_PointerPressedHandler__Fuse_Input_PointerPressedArgs__typeof());
    type->__fp_Invoke = (void(*)(::app::Fuse::NodeEvent__Fuse_Input_PointerPressedHandler__Fuse_Input_PointerPressedArgs*, ::uDelegate*, ::uObject*, ::app::Fuse::Input::PointerPressedArgs*))PointerPressed__Invoke;

    type->SetFunctions(1,
        ::uNewFunction(".ctor", PointerPressed__New_1, 0, true, PointerPressed__typeof()));

    ::uRegisterType(type);
    return type;
}

void PointerPressed___ObjInit_1(PointerPressed* __this)
{
    ::app::Fuse::NodeEvent__Fuse_Input_PointerPressedHandler__Fuse_Input_PointerPressedArgs___ObjInit(__this);
}

void PointerPressed__Invoke(PointerPressed* __this, ::uDelegate* handler, ::uObject* sender, ::app::Fuse::Input::PointerPressedArgs* args)
{
    ::uPtr< ::uDelegate*>(handler)->InvokeVoid< ::uObject*, ::app::Fuse::Input::PointerPressedArgs*>(sender, args);
}

PointerPressed* PointerPressed__New_1(::uStatic* __this)
{
    PointerPressed* inst = (PointerPressed*)::uAllocObject(sizeof(PointerPressed), PointerPressed__typeof());
    inst->_ObjInit_1();
    return inst;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\FuseCore\0.11.3\Input\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

PointerPressedArgs__uType* PointerPressedArgs__typeof()
{
    static ::uStaticStrong<PointerPressedArgs__uType*> type;
    if (type != NULL) return type;

    type = (PointerPressedArgs__uType*)::uAllocClassType(sizeof(PointerPressedArgs__uType), "Fuse.Input.PointerPressedArgs", false, 1, 0, 0);

    type->SetBaseType(::app::Fuse::Input::PointerEventArgs__typeof());

    type->SetInterfaces(
        ::app::Fuse::Scripting::IScriptEvent__typeof(), offsetof(PointerPressedArgs__uType, __interface_0));

    type->SetFunctions(1,
        ::uNewFunction(".ctor", PointerPressedArgs__New_3, 0, true, PointerPressedArgs__typeof(), ::app::Fuse::Input::PointerEventData__typeof(), ::app::Fuse::Node__typeof()));

    ::uRegisterType(type);
    return type;
}

void PointerPressedArgs___ObjInit_3(PointerPressedArgs* __this, ::app::Fuse::Input::PointerEventData* data, ::app::Fuse::Node* node)
{
    ::app::Fuse::Input::PointerEventArgs___ObjInit_2(__this, data, node);
}

PointerPressedArgs* PointerPressedArgs__New_3(::uStatic* __this, ::app::Fuse::Input::PointerEventData* data, ::app::Fuse::Node* node)
{
    PointerPressedArgs* inst = (PointerPressedArgs*)::uAllocObject(sizeof(PointerPressedArgs), PointerPressedArgs__typeof());
    inst->_ObjInit_3(data, node);
    return inst;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\FuseCore\0.11.3\Input\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

::uDelegateType* PointerPressedHandler__typeof()
{
    static ::uStaticStrong< ::uDelegateType*> type;
    if (type != NULL) return type;

    type = ::uAllocDelegateType("Fuse.Input.PointerPressedHandler", 2);

    type->SetSignature(::uVoid__typeof(),
        ::uObject__typeof(),
        ::app::Fuse::Input::PointerPressedArgs__typeof());

    ::uRegisterType(type);
    return type;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\FuseCore\0.11.3\Input\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

PointerReleased__uType* PointerReleased__typeof()
{
    static ::uStaticStrong<PointerReleased__uType*> type;
    if (type != NULL) return type;

    type = (PointerReleased__uType*)::uAllocClassType(sizeof(PointerReleased__uType), "Fuse.Input.PointerReleased", false, 0, 0, 0);

    type->SetBaseType(::app::Fuse::NodeEvent__Fuse_Input_PointerReleasedHandler__Fuse_Input_PointerReleasedArgs__typeof());
    type->__fp_Invoke = (void(*)(::app::Fuse::NodeEvent__Fuse_Input_PointerReleasedHandler__Fuse_Input_PointerReleasedArgs*, ::uDelegate*, ::uObject*, ::app::Fuse::Input::PointerReleasedArgs*))PointerReleased__Invoke;

    type->SetFunctions(1,
        ::uNewFunction(".ctor", PointerReleased__New_1, 0, true, PointerReleased__typeof()));

    ::uRegisterType(type);
    return type;
}

void PointerReleased___ObjInit_1(PointerReleased* __this)
{
    ::app::Fuse::NodeEvent__Fuse_Input_PointerReleasedHandler__Fuse_Input_PointerReleasedArgs___ObjInit(__this);
}

void PointerReleased__Invoke(PointerReleased* __this, ::uDelegate* handler, ::uObject* sender, ::app::Fuse::Input::PointerReleasedArgs* args)
{
    ::uPtr< ::uDelegate*>(handler)->InvokeVoid< ::uObject*, ::app::Fuse::Input::PointerReleasedArgs*>(sender, args);
}

PointerReleased* PointerReleased__New_1(::uStatic* __this)
{
    PointerReleased* inst = (PointerReleased*)::uAllocObject(sizeof(PointerReleased), PointerReleased__typeof());
    inst->_ObjInit_1();
    return inst;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\FuseCore\0.11.3\Input\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

PointerReleasedArgs__uType* PointerReleasedArgs__typeof()
{
    static ::uStaticStrong<PointerReleasedArgs__uType*> type;
    if (type != NULL) return type;

    type = (PointerReleasedArgs__uType*)::uAllocClassType(sizeof(PointerReleasedArgs__uType), "Fuse.Input.PointerReleasedArgs", false, 1, 0, 0);

    type->SetBaseType(::app::Fuse::Input::PointerEventArgs__typeof());

    type->SetInterfaces(
        ::app::Fuse::Scripting::IScriptEvent__typeof(), offsetof(PointerReleasedArgs__uType, __interface_0));

    type->SetFunctions(1,
        ::uNewFunction(".ctor", PointerReleasedArgs__New_3, 0, true, PointerReleasedArgs__typeof(), ::app::Fuse::Input::PointerEventData__typeof(), ::app::Fuse::Node__typeof()));

    ::uRegisterType(type);
    return type;
}

void PointerReleasedArgs___ObjInit_3(PointerReleasedArgs* __this, ::app::Fuse::Input::PointerEventData* data, ::app::Fuse::Node* node)
{
    ::app::Fuse::Input::PointerEventArgs___ObjInit_2(__this, data, node);
}

PointerReleasedArgs* PointerReleasedArgs__New_3(::uStatic* __this, ::app::Fuse::Input::PointerEventData* data, ::app::Fuse::Node* node)
{
    PointerReleasedArgs* inst = (PointerReleasedArgs*)::uAllocObject(sizeof(PointerReleasedArgs), PointerReleasedArgs__typeof());
    inst->_ObjInit_3(data, node);
    return inst;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\FuseCore\0.11.3\Input\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

::uDelegateType* PointerReleasedHandler__typeof()
{
    static ::uStaticStrong< ::uDelegateType*> type;
    if (type != NULL) return type;

    type = ::uAllocDelegateType("Fuse.Input.PointerReleasedHandler", 2);

    type->SetSignature(::uVoid__typeof(),
        ::uObject__typeof(),
        ::app::Fuse::Input::PointerReleasedArgs__typeof());

    ::uRegisterType(type);
    return type;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\FuseCore\0.11.3\Input\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

PointerWheelMoved__uType* PointerWheelMoved__typeof()
{
    static ::uStaticStrong<PointerWheelMoved__uType*> type;
    if (type != NULL) return type;

    type = (PointerWheelMoved__uType*)::uAllocClassType(sizeof(PointerWheelMoved__uType), "Fuse.Input.PointerWheelMoved", false, 0, 0, 0);

    type->SetBaseType(::app::Fuse::NodeEvent__Fuse_Input_PointerWheelMovedHandler__Fuse_Input_PointerWheelMovedArgs__typeof());
    type->__fp_Invoke = (void(*)(::app::Fuse::NodeEvent__Fuse_Input_PointerWheelMovedHandler__Fuse_Input_PointerWheelMovedArgs*, ::uDelegate*, ::uObject*, ::app::Fuse::Input::PointerWheelMovedArgs*))PointerWheelMoved__Invoke;

    type->SetFunctions(1,
        ::uNewFunction(".ctor", PointerWheelMoved__New_1, 0, true, PointerWheelMoved__typeof()));

    ::uRegisterType(type);
    return type;
}

void PointerWheelMoved___ObjInit_1(PointerWheelMoved* __this)
{
    ::app::Fuse::NodeEvent__Fuse_Input_PointerWheelMovedHandler__Fuse_Input_PointerWheelMovedArgs___ObjInit(__this);
}

void PointerWheelMoved__Invoke(PointerWheelMoved* __this, ::uDelegate* handler, ::uObject* sender, ::app::Fuse::Input::PointerWheelMovedArgs* args)
{
    ::uPtr< ::uDelegate*>(handler)->InvokeVoid< ::uObject*, ::app::Fuse::Input::PointerWheelMovedArgs*>(sender, args);
}

PointerWheelMoved* PointerWheelMoved__New_1(::uStatic* __this)
{
    PointerWheelMoved* inst = (PointerWheelMoved*)::uAllocObject(sizeof(PointerWheelMoved), PointerWheelMoved__typeof());
    inst->_ObjInit_1();
    return inst;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\FuseCore\0.11.3\Input\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

PointerWheelMovedArgs__uType* PointerWheelMovedArgs__typeof()
{
    static ::uStaticStrong<PointerWheelMovedArgs__uType*> type;
    if (type != NULL) return type;

    type = (PointerWheelMovedArgs__uType*)::uAllocClassType(sizeof(PointerWheelMovedArgs__uType), "Fuse.Input.PointerWheelMovedArgs", false, 1, 0, 0);

    type->SetBaseType(::app::Fuse::Input::PointerEventArgs__typeof());

    type->SetInterfaces(
        ::app::Fuse::Scripting::IScriptEvent__typeof(), offsetof(PointerWheelMovedArgs__uType, __interface_0));

    type->SetFunctions(1,
        ::uNewFunction(".ctor", PointerWheelMovedArgs__New_3, 0, true, PointerWheelMovedArgs__typeof(), ::app::Fuse::Input::PointerEventData__typeof(), ::app::Fuse::Node__typeof()));

    ::uRegisterType(type);
    return type;
}

void PointerWheelMovedArgs___ObjInit_3(PointerWheelMovedArgs* __this, ::app::Fuse::Input::PointerEventData* data, ::app::Fuse::Node* node)
{
    ::app::Fuse::Input::PointerEventArgs___ObjInit_2(__this, data, node);
}

PointerWheelMovedArgs* PointerWheelMovedArgs__New_3(::uStatic* __this, ::app::Fuse::Input::PointerEventData* data, ::app::Fuse::Node* node)
{
    PointerWheelMovedArgs* inst = (PointerWheelMovedArgs*)::uAllocObject(sizeof(PointerWheelMovedArgs), PointerWheelMovedArgs__typeof());
    inst->_ObjInit_3(data, node);
    return inst;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\FuseCore\0.11.3\Input\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

::uDelegateType* PointerWheelMovedHandler__typeof()
{
    static ::uStaticStrong< ::uDelegateType*> type;
    if (type != NULL) return type;

    type = ::uAllocDelegateType("Fuse.Input.PointerWheelMovedHandler", 2);

    type->SetSignature(::uVoid__typeof(),
        ::uObject__typeof(),
        ::app::Fuse::Input::PointerWheelMovedArgs__typeof());

    ::uRegisterType(type);
    return type;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\FuseCore\0.11.3\Input\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

SelectionQuery__uType* SelectionQuery__typeof()
{
    static ::uStaticStrong<SelectionQuery__uType*> type;
    if (type != NULL) return type;

    type = (SelectionQuery__uType*)::uAllocClassType(sizeof(SelectionQuery__uType), "Fuse.Input.SelectionQuery", false, 0, 1, 0);

    type->SetStrongRefs(
        "_result", offsetof(SelectionQuery, _result));

    type->SetFields(2,
        ::uNewField("_result", NULL, offsetof(SelectionQuery, _result), ::app::Fuse::HitTestResult__typeof()),
        ::uNewField("count", NULL, offsetof(SelectionQuery, count), ::app::Uno::Int__typeof()));

    type->SetFunctions(3,
        ::uNewFunction(".ctor", SelectionQuery__New_1, 0, true, SelectionQuery__typeof()),
        ::uNewFunctionVoid("Select", SelectionQuery__Select, 0, false, ::app::Fuse::HitTestResult__typeof()),
        ::uNewFunction("Select", SelectionQuery__Select_1, 0, false, ::app::Fuse::HitTestResult__typeof(), ::app::Fuse::Node__typeof(), ::app::Uno::Float2__typeof()));

    ::uRegisterType(type);
    return type;
}

void SelectionQuery___ObjInit(SelectionQuery* __this)
{
}

SelectionQuery* SelectionQuery__New_1(::uStatic* __this)
{
    SelectionQuery* inst = (SelectionQuery*)::uAllocObject(sizeof(SelectionQuery), SelectionQuery__typeof());
    inst->_ObjInit();
    return inst;
}

void SelectionQuery__Select(SelectionQuery* __this, ::app::Fuse::HitTestResult* result)
{
    __this->count++;

    if ((__this->_result == NULL) || ((::uPtr< ::app::Fuse::HitTestResult*>(__this->_result)->HasHitDistance() && ::uPtr< ::app::Fuse::HitTestResult*>(result)->HasHitDistance()) && (::uPtr< ::app::Fuse::HitTestResult*>(result)->HitDistance() < ::uPtr< ::app::Fuse::HitTestResult*>(__this->_result)->HitDistance())))
    {
        __this->_result = result;
    }
}

::app::Fuse::HitTestResult* SelectionQuery__Select_1(SelectionQuery* __this, ::app::Fuse::Node* root, ::app::Uno::Float2 point)
{
    ::app::Fuse::HitTestContext* args = ::app::Fuse::HitTestContext__New_1(NULL, point, ::uNewDelegateNonVirt(::app::Fuse::HitTestCallback__typeof(), (const void*)SelectionQuery__Select, __this));
    ::uPtr< ::app::Fuse::Node*>(root)->HitTest(args);
    ::uPtr< ::app::Fuse::HitTestContext*>(args)->Dispose();
    return __this->_result;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\FuseCore\0.11.3\Input\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

TextEntered__uType* TextEntered__typeof()
{
    static ::uStaticStrong<TextEntered__uType*> type;
    if (type != NULL) return type;

    type = (TextEntered__uType*)::uAllocClassType(sizeof(TextEntered__uType), "Fuse.Input.TextEntered", false, 0, 0, 0);

    type->SetBaseType(::app::Fuse::NodeEvent__Fuse_Input_TextEnteredHandler__Fuse_Input_TextEnteredArgs__typeof());
    type->__fp_Invoke = (void(*)(::app::Fuse::NodeEvent__Fuse_Input_TextEnteredHandler__Fuse_Input_TextEnteredArgs*, ::uDelegate*, ::uObject*, ::app::Fuse::Input::TextEnteredArgs*))TextEntered__Invoke;

    type->SetFunctions(1,
        ::uNewFunction(".ctor", TextEntered__New_1, 0, true, TextEntered__typeof()));

    ::uRegisterType(type);
    return type;
}

void TextEntered___ObjInit_1(TextEntered* __this)
{
    ::app::Fuse::NodeEvent__Fuse_Input_TextEnteredHandler__Fuse_Input_TextEnteredArgs___ObjInit(__this);
}

void TextEntered__Invoke(TextEntered* __this, ::uDelegate* handler, ::uObject* sender, ::app::Fuse::Input::TextEnteredArgs* args)
{
    ::uPtr< ::uDelegate*>(handler)->InvokeVoid< ::uObject*, ::app::Fuse::Input::TextEnteredArgs*>(sender, args);
}

TextEntered* TextEntered__New_1(::uStatic* __this)
{
    TextEntered* inst = (TextEntered*)::uAllocObject(sizeof(TextEntered), TextEntered__typeof());
    inst->_ObjInit_1();
    return inst;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\FuseCore\0.11.3\Input\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

TextEnteredArgs__uType* TextEnteredArgs__typeof()
{
    static ::uStaticStrong<TextEnteredArgs__uType*> type;
    if (type != NULL) return type;

    type = (TextEnteredArgs__uType*)::uAllocClassType(sizeof(TextEnteredArgs__uType), "Fuse.Input.TextEnteredArgs", false, 1, 1, 0);

    type->SetBaseType(::app::Fuse::NodeEventArgs__typeof());
    type->__interface_0.__fp_Serialize = (void(*)(void*, ::uObject*))TextEnteredArgs__Fuse_Scripting_IScriptEvent_Serialize_1;

    type->SetInterfaces(
        ::app::Fuse::Scripting::IScriptEvent__typeof(), offsetof(TextEnteredArgs__uType, __interface_0));

    type->SetStrongRefs(
        "_Text", offsetof(TextEnteredArgs, _Text));

    type->SetFunctions(4,
        ::uNewFunctionVoid("Fuse.Scripting.IScriptEvent.Serialize", TextEnteredArgs__Fuse_Scripting_IScriptEvent_Serialize_1, 0, false, ::app::Fuse::Scripting::IEventSerializer__typeof()),
        ::uNewFunction("get_Text", TextEnteredArgs__get_Text, 0, false, ::app::Uno::String__typeof()),
        ::uNewFunction(".ctor", TextEnteredArgs__New_3, 0, true, TextEnteredArgs__typeof(), ::app::Uno::String__typeof(), ::app::Fuse::Node__typeof()),
        ::uNewFunctionVoid("set_Text", TextEnteredArgs__set_Text, 0, false, ::app::Uno::String__typeof()));

    ::uRegisterType(type);
    return type;
}

void TextEnteredArgs___ObjInit_2(TextEnteredArgs* __this, ::uString* text, ::app::Fuse::Node* node)
{
    ::app::Fuse::NodeEventArgs___ObjInit_1(__this, node);
    __this->Text(text);
}

void TextEnteredArgs__Fuse_Scripting_IScriptEvent_Serialize_1(TextEnteredArgs* __this, ::uObject* s)
{
    ::app::Fuse::Scripting::IEventSerializer::AddString(::uPtr< ::uObject*>(s), ::uGetConstString("text"), __this->Text());
}

::uString* TextEnteredArgs__get_Text(TextEnteredArgs* __this)
{
    return __this->_Text;
}

TextEnteredArgs* TextEnteredArgs__New_3(::uStatic* __this, ::uString* text, ::app::Fuse::Node* node)
{
    TextEnteredArgs* inst = (TextEnteredArgs*)::uAllocObject(sizeof(TextEnteredArgs), TextEnteredArgs__typeof());
    inst->_ObjInit_2(text, node);
    return inst;
}

void TextEnteredArgs__set_Text(TextEnteredArgs* __this, ::uString* value)
{
    __this->_Text = value;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\FuseCore\0.11.3\Input\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

::uDelegateType* TextEnteredHandler__typeof()
{
    static ::uStaticStrong< ::uDelegateType*> type;
    if (type != NULL) return type;

    type = ::uAllocDelegateType("Fuse.Input.TextEnteredHandler", 2);

    type->SetSignature(::uVoid__typeof(),
        ::uObject__typeof(),
        ::app::Fuse::Input::TextEnteredArgs__typeof());

    ::uRegisterType(type);
    return type;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\FuseCore\0.11.3\Input\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

::uStaticStrong< ::app::Fuse::Input::TextEntered*> TextService___textEntered;

TextService__uType* TextService__typeof()
{
    static ::uStaticStrong<TextService__uType*> type;
    if (type != NULL) return type;

    type = (TextService__uType*)::uAllocClassType(sizeof(TextService__uType), "Fuse.Input.TextService");

    type->SetFields(1,
        ::uNewField("_textEntered", &TextService___textEntered, 0, ::app::Fuse::Input::TextEntered__typeof()));

    type->SetFunctions(2,
        ::uNewFunction("get_TextEntered", TextService__get_TextEntered, 0, true, ::app::Fuse::NodeEvent__Fuse_Input_TextEnteredHandler__Fuse_Input_TextEnteredArgs__typeof()),
        ::uNewFunction("RaiseTextEntered", TextService__RaiseTextEntered, 0, true, ::app::Uno::Bool__typeof(), ::app::Uno::String__typeof()));

    ::uRegisterType(type);
    return type;
}

void TextService___TypeInit(::uStatic* __this)
{
    TextService___textEntered = ::app::Fuse::Input::TextEntered__New_1(NULL);
}

::app::Fuse::NodeEvent__Fuse_Input_TextEnteredHandler__Fuse_Input_TextEnteredArgs* TextService__get_TextEntered(::uStatic* __this)
{
    return (::app::Fuse::NodeEvent__Fuse_Input_TextEnteredHandler__Fuse_Input_TextEnteredArgs*)TextService___textEntered;
}

bool TextService__RaiseTextEntered(::uStatic* __this, ::uString* text)
{
    if (::app::Fuse::Input::Focus__get_FocusedNode(NULL) != NULL)
    {
        ::app::Fuse::Input::TextEnteredArgs* args = ::app::Fuse::Input::TextEnteredArgs__New_3(NULL, text, ::app::Fuse::Input::Focus__get_FocusedNode(NULL));
        ::uPtr< ::app::Fuse::NodeEvent__Fuse_Input_TextEnteredHandler__Fuse_Input_TextEnteredArgs*>(TextService__get_TextEntered(NULL))->RaiseWithBubble(args, 0);
        return ::uPtr< ::app::Fuse::Input::TextEnteredArgs*>(args)->IsHandled();
    }

    return false;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\FuseCore\0.11.3\Input\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

TraverseNodeExtensions__uType* TraverseNodeExtensions__typeof()
{
    static ::uStaticStrong<TraverseNodeExtensions__uType*> type;
    if (type != NULL) return type;

    type = (TraverseNodeExtensions__uType*)::uAllocClassType(sizeof(TraverseNodeExtensions__uType), "Fuse.Input.TraverseNodeExtensions");

    type->SetFunctions(8,
        ::uNewFunction("FindNextChild", TraverseNodeExtensions__FindNextChild, 0, true, ::app::Fuse::Node__typeof(), ::app::Fuse::Node__typeof(), ::app::Fuse::Node__typeof()),
        ::uNewFunction("FindNextChild", TraverseNodeExtensions__FindNextChild_1, 0, true, ::app::Fuse::Node__typeof(), ::app::Fuse::Node__typeof(), ::app::Uno::Predicate__Fuse_Node__typeof()),
        ::uNewFunction("FindNextSibling", TraverseNodeExtensions__FindNextSibling, 0, true, ::app::Fuse::Node__typeof(), ::app::Fuse::Node__typeof()),
        ::uNewFunction("FindParent", TraverseNodeExtensions__FindParent, 0, true, ::app::Fuse::Node__typeof(), ::app::Fuse::Node__typeof(), ::app::Uno::Predicate__Fuse_Node__typeof()),
        ::uNewFunction("FindPreviousChild", TraverseNodeExtensions__FindPreviousChild, 0, true, ::app::Fuse::Node__typeof(), ::app::Fuse::Node__typeof(), ::app::Fuse::Node__typeof()),
        ::uNewFunction("FindPreviousChild", TraverseNodeExtensions__FindPreviousChild_1, 0, true, ::app::Fuse::Node__typeof(), ::app::Fuse::Node__typeof(), ::app::Uno::Predicate__Fuse_Node__typeof()),
        ::uNewFunction("FindPreviousSibling", TraverseNodeExtensions__FindPreviousSibling, 0, true, ::app::Fuse::Node__typeof(), ::app::Fuse::Node__typeof()),
        ::uNewFunction("FindRoot", TraverseNodeExtensions__FindRoot, 0, true, ::app::Fuse::Node__typeof(), ::app::Fuse::Node__typeof()));

    ::uRegisterType(type);
    return type;
}

::app::Fuse::Node* TraverseNodeExtensions__FindNextChild(::uStatic* __this, ::app::Fuse::Node* node, ::app::Fuse::Node* currentChild)
{
    if (((node != NULL) && (currentChild != NULL)) && (::uPtr< ::app::Fuse::Node*>(node)->SubNodeCount() > 0))
    {
        for (int i = 0; i < ::uPtr< ::app::Fuse::Node*>(node)->SubNodeCount(); i++)
        {
            if (::uPtr< ::app::Fuse::Node*>(node)->GetSubNode(i) == currentChild)
            {
                if ((i + 1) < ::uPtr< ::app::Fuse::Node*>(node)->SubNodeCount())
                {
                    return ::uPtr< ::app::Fuse::Node*>(node)->GetSubNode(i + 1);
                }
            }
        }
    }

    return NULL;
}

::app::Fuse::Node* TraverseNodeExtensions__FindNextChild_1(::uStatic* __this, ::app::Fuse::Node* node, ::uDelegate* filter)
{
    ::app::Fuse::Node* someNode = ::uAs< ::app::Fuse::Node*>(node, ::app::Fuse::Node__typeof());

    if ((someNode != NULL) && (::uPtr< ::app::Fuse::Node*>(someNode)->SubNodeCount() > 0))
    {
        ::app::Fuse::Node* child = ::uPtr< ::app::Fuse::Node*>(someNode)->GetSubNode(0);

        if (::uPtr< ::uDelegate*>(filter)->Invoke< bool, ::app::Fuse::Node*>(child))
        {
            return child;
        }

        return TraverseNodeExtensions__FindNextChild_1(NULL, child, filter);
    }

    ::app::Fuse::Node* sibling = TraverseNodeExtensions__FindNextSibling(NULL, node);

    if (sibling != NULL)
    {
        if (::uPtr< ::uDelegate*>(filter)->Invoke< bool, ::app::Fuse::Node*>(sibling))
        {
            return sibling;
        }

        return TraverseNodeExtensions__FindNextChild_1(NULL, sibling, filter);
    }

    return NULL;
}

::app::Fuse::Node* TraverseNodeExtensions__FindNextSibling(::uStatic* __this, ::app::Fuse::Node* node)
{
    if (node == NULL)
    {
        return NULL;
    }

    ::app::Fuse::Node* parent = ::uPtr< ::app::Fuse::Node*>(node)->Parent();

    if (parent == NULL)
    {
        return NULL;
    }

    ::app::Fuse::Node* child = TraverseNodeExtensions__FindNextChild(NULL, parent, node);

    if (child != NULL)
    {
        return child;
    }

    return TraverseNodeExtensions__FindNextSibling(NULL, parent);
}

::app::Fuse::Node* TraverseNodeExtensions__FindParent(::uStatic* __this, ::app::Fuse::Node* n, ::uDelegate* criteria)
{
    ::app::Fuse::Node* o = NULL;

    for (; (n != NULL) && !::uPtr< ::uDelegate*>(criteria)->Invoke< bool, ::app::Fuse::Node*>(n); n = ::uPtr< ::app::Fuse::Node*>(n)->Parent())
    {
        o = n;
    }

    return o;
}

::app::Fuse::Node* TraverseNodeExtensions__FindPreviousChild(::uStatic* __this, ::app::Fuse::Node* node, ::app::Fuse::Node* currentChild)
{
    if (((node != NULL) && (currentChild != NULL)) && (::uPtr< ::app::Fuse::Node*>(node)->SubNodeCount() > 0))
    {
        for (int i = 0; i < ::uPtr< ::app::Fuse::Node*>(node)->SubNodeCount(); i++)
        {
            if (::uPtr< ::app::Fuse::Node*>(node)->GetSubNode(i) == currentChild)
            {
                if ((i - 1) >= 0)
                {
                    return ::uPtr< ::app::Fuse::Node*>(node)->GetSubNode(i - 1);
                }
            }
        }
    }

    return NULL;
}

::app::Fuse::Node* TraverseNodeExtensions__FindPreviousChild_1(::uStatic* __this, ::app::Fuse::Node* node, ::uDelegate* filter)
{
    ::app::Fuse::Node* someNode = ::uAs< ::app::Fuse::Node*>(node, ::app::Fuse::Node__typeof());

    if ((someNode != NULL) && (::uPtr< ::app::Fuse::Node*>(someNode)->SubNodeCount() > 0))
    {
        ::app::Fuse::Node* child = ::uPtr< ::app::Fuse::Node*>(someNode)->GetSubNode(::uPtr< ::app::Fuse::Node*>(someNode)->SubNodeCount() - 1);

        if (::uPtr< ::uDelegate*>(filter)->Invoke< bool, ::app::Fuse::Node*>(child))
        {
            return child;
        }

        return TraverseNodeExtensions__FindPreviousChild_1(NULL, child, filter);
    }

    ::app::Fuse::Node* sibling = TraverseNodeExtensions__FindPreviousSibling(NULL, node);

    if (sibling != NULL)
    {
        if (::uPtr< ::uDelegate*>(filter)->Invoke< bool, ::app::Fuse::Node*>(sibling))
        {
            return sibling;
        }

        return TraverseNodeExtensions__FindPreviousChild_1(NULL, sibling, filter);
    }

    return NULL;
}

::app::Fuse::Node* TraverseNodeExtensions__FindPreviousSibling(::uStatic* __this, ::app::Fuse::Node* node)
{
    if (node == NULL)
    {
        return NULL;
    }

    ::app::Fuse::Node* parent = ::uPtr< ::app::Fuse::Node*>(node)->Parent();

    if (parent == NULL)
    {
        return NULL;
    }

    ::app::Fuse::Node* child = TraverseNodeExtensions__FindPreviousChild(NULL, ::uAs< ::app::Fuse::Node*>(parent, ::app::Fuse::Node__typeof()), node);

    if (child != NULL)
    {
        return child;
    }

    return TraverseNodeExtensions__FindPreviousSibling(NULL, parent);
}

::app::Fuse::Node* TraverseNodeExtensions__FindRoot(::uStatic* __this, ::app::Fuse::Node* n)
{
    ::app::Fuse::Node* o = NULL;

    for (; n != NULL; n = ::uPtr< ::app::Fuse::Node*>(n)->Parent())
    {
        o = n;
    }

    return o;
}

}}}
