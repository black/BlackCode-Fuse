#include <app/Fuse.Input.Focus.h>
#include <app/Fuse.Input.FocusGainedHandler.h>
#include <app/Fuse.Input.FocusLostHandler.h>
#include <app/Fuse.Input.Keyboard.h>
#include <app/Fuse.Input.KeyPressedHandler.h>
#include <app/Fuse.Input.KeyReleasedHandler.h>
#include <app/Fuse.Input.Pointer.h>
#include <app/Fuse.Input.PointerEnteredHandler.h>
#include <app/Fuse.Input.PointerLeftHandler.h>
#include <app/Fuse.Input.PointerMovedHandler.h>
#include <app/Fuse.Input.PointerPressedHandler.h>
#include <app/Fuse.Input.PointerReleasedHandler.h>
#include <app/Fuse.Input.PointerWheelMovedHandler.h>
#include <app/Fuse.Input.UX.AttachedFocusMembers.h>
#include <app/Fuse.Input.UX.AttachedKeyboardMembers.h>
#include <app/Fuse.Input.UX.AttachedPointerMembers.h>
#include <app/Fuse.Node.h>
#include <app/Fuse.NodeEvent__Fuse_Input_FocusGainedHandler__Fuse_Input_Focus-e88b1a1.h>
#include <app/Fuse.NodeEvent__Fuse_Input_FocusLostHandler__Fuse_Input_FocusLostArgs.h>
#include <app/Fuse.NodeEvent__Fuse_Input_KeyPressedHandler__Fuse_Input_KeyPressedArgs.h>
#include <app/Fuse.NodeEvent__Fuse_Input_KeyReleasedHandler__Fuse_Input_KeyRe-25c1dec.h>
#include <app/Fuse.NodeEvent__Fuse_Input_PointerEnteredHandler__Fuse_Input_Po-cd4446ec.h>
#include <app/Fuse.NodeEvent__Fuse_Input_PointerLeftHandler__Fuse_Input_Point-e63532ae.h>
#include <app/Fuse.NodeEvent__Fuse_Input_PointerMovedHandler__Fuse_Input_Poin-c465a3e6.h>
#include <app/Fuse.NodeEvent__Fuse_Input_PointerPressedHandler__Fuse_Input_Po-31778249.h>
#include <app/Fuse.NodeEvent__Fuse_Input_PointerReleasedHandler__Fuse_Input_P-dde60e76.h>
#include <app/Fuse.NodeEvent__Fuse_Input_PointerWheelMovedHandler__Fuse_Input-2ce16824.h>

namespace app {
namespace Fuse {
namespace Input {
namespace UX {

// This file was generated based on 'C:\ProgramData\Uno\Packages\FuseCore\0.11.3\Input\UX\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

AttachedFocusMembers__uType* AttachedFocusMembers__typeof()
{
    static ::uStaticStrong<AttachedFocusMembers__uType*> type;
    if (type != NULL) return type;

    type = (AttachedFocusMembers__uType*)::uAllocClassType(sizeof(AttachedFocusMembers__uType), "Fuse.Input.UX.AttachedFocusMembers");

    type->SetFunctions(4,
        ::uNewFunctionVoid("AddFocusGainedHandler", AttachedFocusMembers__AddFocusGainedHandler, 0, true, ::app::Fuse::Node__typeof(), ::app::Fuse::Input::FocusGainedHandler__typeof()),
        ::uNewFunctionVoid("AddFocusLostHandler", AttachedFocusMembers__AddFocusLostHandler, 0, true, ::app::Fuse::Node__typeof(), ::app::Fuse::Input::FocusLostHandler__typeof()),
        ::uNewFunctionVoid("RemoveFocusGainedHandler", AttachedFocusMembers__RemoveFocusGainedHandler, 0, true, ::app::Fuse::Node__typeof(), ::app::Fuse::Input::FocusGainedHandler__typeof()),
        ::uNewFunctionVoid("RemoveFocusLostHandler", AttachedFocusMembers__RemoveFocusLostHandler, 0, true, ::app::Fuse::Node__typeof(), ::app::Fuse::Input::FocusLostHandler__typeof()));

    ::uRegisterType(type);
    return type;
}

void AttachedFocusMembers__AddFocusGainedHandler(::uStatic* __this, ::app::Fuse::Node* node, ::uDelegate* handler)
{
    ::uPtr< ::app::Fuse::NodeEvent__Fuse_Input_FocusGainedHandler__Fuse_Input_FocusGainedArgs*>(::app::Fuse::Input::Focus__get_Gained(NULL))->AddHandler(node, handler);
}

void AttachedFocusMembers__AddFocusLostHandler(::uStatic* __this, ::app::Fuse::Node* node, ::uDelegate* handler)
{
    ::uPtr< ::app::Fuse::NodeEvent__Fuse_Input_FocusLostHandler__Fuse_Input_FocusLostArgs*>(::app::Fuse::Input::Focus__get_Lost(NULL))->AddHandler(node, handler);
}

void AttachedFocusMembers__RemoveFocusGainedHandler(::uStatic* __this, ::app::Fuse::Node* node, ::uDelegate* handler)
{
    ::uPtr< ::app::Fuse::NodeEvent__Fuse_Input_FocusGainedHandler__Fuse_Input_FocusGainedArgs*>(::app::Fuse::Input::Focus__get_Gained(NULL))->RemoveHandler(node, handler);
}

void AttachedFocusMembers__RemoveFocusLostHandler(::uStatic* __this, ::app::Fuse::Node* node, ::uDelegate* handler)
{
    ::uPtr< ::app::Fuse::NodeEvent__Fuse_Input_FocusLostHandler__Fuse_Input_FocusLostArgs*>(::app::Fuse::Input::Focus__get_Lost(NULL))->RemoveHandler(node, handler);
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\FuseCore\0.11.3\Input\UX\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

AttachedKeyboardMembers__uType* AttachedKeyboardMembers__typeof()
{
    static ::uStaticStrong<AttachedKeyboardMembers__uType*> type;
    if (type != NULL) return type;

    type = (AttachedKeyboardMembers__uType*)::uAllocClassType(sizeof(AttachedKeyboardMembers__uType), "Fuse.Input.UX.AttachedKeyboardMembers");

    type->SetFunctions(4,
        ::uNewFunctionVoid("AddKeyPressedHandler", AttachedKeyboardMembers__AddKeyPressedHandler, 0, true, ::app::Fuse::Node__typeof(), ::app::Fuse::Input::KeyPressedHandler__typeof()),
        ::uNewFunctionVoid("AddKeyReleasedHandler", AttachedKeyboardMembers__AddKeyReleasedHandler, 0, true, ::app::Fuse::Node__typeof(), ::app::Fuse::Input::KeyReleasedHandler__typeof()),
        ::uNewFunctionVoid("RemoveKeyPressedHandler", AttachedKeyboardMembers__RemoveKeyPressedHandler, 0, true, ::app::Fuse::Node__typeof(), ::app::Fuse::Input::KeyPressedHandler__typeof()),
        ::uNewFunctionVoid("RemoveKeyReleasedHandler", AttachedKeyboardMembers__RemoveKeyReleasedHandler, 0, true, ::app::Fuse::Node__typeof(), ::app::Fuse::Input::KeyReleasedHandler__typeof()));

    ::uRegisterType(type);
    return type;
}

void AttachedKeyboardMembers__AddKeyPressedHandler(::uStatic* __this, ::app::Fuse::Node* node, ::uDelegate* handler)
{
    ::uPtr< ::app::Fuse::NodeEvent__Fuse_Input_KeyPressedHandler__Fuse_Input_KeyPressedArgs*>(::app::Fuse::Input::Keyboard__get_KeyPressed(NULL))->AddHandler(node, handler);
}

void AttachedKeyboardMembers__AddKeyReleasedHandler(::uStatic* __this, ::app::Fuse::Node* node, ::uDelegate* handler)
{
    ::uPtr< ::app::Fuse::NodeEvent__Fuse_Input_KeyReleasedHandler__Fuse_Input_KeyReleasedArgs*>(::app::Fuse::Input::Keyboard__get_KeyReleased(NULL))->AddHandler(node, handler);
}

void AttachedKeyboardMembers__RemoveKeyPressedHandler(::uStatic* __this, ::app::Fuse::Node* node, ::uDelegate* handler)
{
    ::uPtr< ::app::Fuse::NodeEvent__Fuse_Input_KeyPressedHandler__Fuse_Input_KeyPressedArgs*>(::app::Fuse::Input::Keyboard__get_KeyPressed(NULL))->RemoveHandler(node, handler);
}

void AttachedKeyboardMembers__RemoveKeyReleasedHandler(::uStatic* __this, ::app::Fuse::Node* node, ::uDelegate* handler)
{
    ::uPtr< ::app::Fuse::NodeEvent__Fuse_Input_KeyReleasedHandler__Fuse_Input_KeyReleasedArgs*>(::app::Fuse::Input::Keyboard__get_KeyReleased(NULL))->RemoveHandler(node, handler);
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\FuseCore\0.11.3\Input\UX\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

AttachedPointerMembers__uType* AttachedPointerMembers__typeof()
{
    static ::uStaticStrong<AttachedPointerMembers__uType*> type;
    if (type != NULL) return type;

    type = (AttachedPointerMembers__uType*)::uAllocClassType(sizeof(AttachedPointerMembers__uType), "Fuse.Input.UX.AttachedPointerMembers");

    type->SetFunctions(12,
        ::uNewFunctionVoid("AddEnteredHandler", AttachedPointerMembers__AddEnteredHandler, 0, true, ::app::Fuse::Node__typeof(), ::app::Fuse::Input::PointerEnteredHandler__typeof()),
        ::uNewFunctionVoid("AddLeftHandler", AttachedPointerMembers__AddLeftHandler, 0, true, ::app::Fuse::Node__typeof(), ::app::Fuse::Input::PointerLeftHandler__typeof()),
        ::uNewFunctionVoid("AddMovedHandler", AttachedPointerMembers__AddMovedHandler, 0, true, ::app::Fuse::Node__typeof(), ::app::Fuse::Input::PointerMovedHandler__typeof()),
        ::uNewFunctionVoid("AddPressedHandler", AttachedPointerMembers__AddPressedHandler, 0, true, ::app::Fuse::Node__typeof(), ::app::Fuse::Input::PointerPressedHandler__typeof()),
        ::uNewFunctionVoid("AddReleasedHandler", AttachedPointerMembers__AddReleasedHandler, 0, true, ::app::Fuse::Node__typeof(), ::app::Fuse::Input::PointerReleasedHandler__typeof()),
        ::uNewFunctionVoid("AddWheelMovedHandler", AttachedPointerMembers__AddWheelMovedHandler, 0, true, ::app::Fuse::Node__typeof(), ::app::Fuse::Input::PointerWheelMovedHandler__typeof()),
        ::uNewFunctionVoid("RemoveEnteredHandler", AttachedPointerMembers__RemoveEnteredHandler, 0, true, ::app::Fuse::Node__typeof(), ::app::Fuse::Input::PointerEnteredHandler__typeof()),
        ::uNewFunctionVoid("RemoveLeftHandler", AttachedPointerMembers__RemoveLeftHandler, 0, true, ::app::Fuse::Node__typeof(), ::app::Fuse::Input::PointerLeftHandler__typeof()),
        ::uNewFunctionVoid("RemoveMovedHandler", AttachedPointerMembers__RemoveMovedHandler, 0, true, ::app::Fuse::Node__typeof(), ::app::Fuse::Input::PointerMovedHandler__typeof()),
        ::uNewFunctionVoid("RemovePressedHandler", AttachedPointerMembers__RemovePressedHandler, 0, true, ::app::Fuse::Node__typeof(), ::app::Fuse::Input::PointerPressedHandler__typeof()),
        ::uNewFunctionVoid("RemoveReleasedHandler", AttachedPointerMembers__RemoveReleasedHandler, 0, true, ::app::Fuse::Node__typeof(), ::app::Fuse::Input::PointerReleasedHandler__typeof()),
        ::uNewFunctionVoid("RemoveWheelMovedHandler", AttachedPointerMembers__RemoveWheelMovedHandler, 0, true, ::app::Fuse::Node__typeof(), ::app::Fuse::Input::PointerWheelMovedHandler__typeof()));

    ::uRegisterType(type);
    return type;
}

void AttachedPointerMembers__AddEnteredHandler(::uStatic* __this, ::app::Fuse::Node* node, ::uDelegate* handler)
{
    ::uPtr< ::app::Fuse::NodeEvent__Fuse_Input_PointerEnteredHandler__Fuse_Input_PointerEnteredArgs*>(::app::Fuse::Input::Pointer__get_Entered(NULL))->AddHandler(node, handler);
}

void AttachedPointerMembers__AddLeftHandler(::uStatic* __this, ::app::Fuse::Node* node, ::uDelegate* handler)
{
    ::uPtr< ::app::Fuse::NodeEvent__Fuse_Input_PointerLeftHandler__Fuse_Input_PointerLeftArgs*>(::app::Fuse::Input::Pointer__get_Left(NULL))->AddHandler(node, handler);
}

void AttachedPointerMembers__AddMovedHandler(::uStatic* __this, ::app::Fuse::Node* node, ::uDelegate* handler)
{
    ::uPtr< ::app::Fuse::NodeEvent__Fuse_Input_PointerMovedHandler__Fuse_Input_PointerMovedArgs*>(::app::Fuse::Input::Pointer__get_Moved(NULL))->AddHandler(node, handler);
}

void AttachedPointerMembers__AddPressedHandler(::uStatic* __this, ::app::Fuse::Node* node, ::uDelegate* handler)
{
    ::uPtr< ::app::Fuse::NodeEvent__Fuse_Input_PointerPressedHandler__Fuse_Input_PointerPressedArgs*>(::app::Fuse::Input::Pointer__get_Pressed(NULL))->AddHandler(node, handler);
}

void AttachedPointerMembers__AddReleasedHandler(::uStatic* __this, ::app::Fuse::Node* node, ::uDelegate* handler)
{
    ::uPtr< ::app::Fuse::NodeEvent__Fuse_Input_PointerReleasedHandler__Fuse_Input_PointerReleasedArgs*>(::app::Fuse::Input::Pointer__get_Released(NULL))->AddHandler(node, handler);
}

void AttachedPointerMembers__AddWheelMovedHandler(::uStatic* __this, ::app::Fuse::Node* node, ::uDelegate* handler)
{
    ::uPtr< ::app::Fuse::NodeEvent__Fuse_Input_PointerWheelMovedHandler__Fuse_Input_PointerWheelMovedArgs*>(::app::Fuse::Input::Pointer__get_WheelMoved(NULL))->AddHandler(node, handler);
}

void AttachedPointerMembers__RemoveEnteredHandler(::uStatic* __this, ::app::Fuse::Node* node, ::uDelegate* handler)
{
    ::uPtr< ::app::Fuse::NodeEvent__Fuse_Input_PointerEnteredHandler__Fuse_Input_PointerEnteredArgs*>(::app::Fuse::Input::Pointer__get_Entered(NULL))->RemoveHandler(node, handler);
}

void AttachedPointerMembers__RemoveLeftHandler(::uStatic* __this, ::app::Fuse::Node* node, ::uDelegate* handler)
{
    ::uPtr< ::app::Fuse::NodeEvent__Fuse_Input_PointerLeftHandler__Fuse_Input_PointerLeftArgs*>(::app::Fuse::Input::Pointer__get_Left(NULL))->RemoveHandler(node, handler);
}

void AttachedPointerMembers__RemoveMovedHandler(::uStatic* __this, ::app::Fuse::Node* node, ::uDelegate* handler)
{
    ::uPtr< ::app::Fuse::NodeEvent__Fuse_Input_PointerMovedHandler__Fuse_Input_PointerMovedArgs*>(::app::Fuse::Input::Pointer__get_Moved(NULL))->RemoveHandler(node, handler);
}

void AttachedPointerMembers__RemovePressedHandler(::uStatic* __this, ::app::Fuse::Node* node, ::uDelegate* handler)
{
    ::uPtr< ::app::Fuse::NodeEvent__Fuse_Input_PointerPressedHandler__Fuse_Input_PointerPressedArgs*>(::app::Fuse::Input::Pointer__get_Pressed(NULL))->RemoveHandler(node, handler);
}

void AttachedPointerMembers__RemoveReleasedHandler(::uStatic* __this, ::app::Fuse::Node* node, ::uDelegate* handler)
{
    ::uPtr< ::app::Fuse::NodeEvent__Fuse_Input_PointerReleasedHandler__Fuse_Input_PointerReleasedArgs*>(::app::Fuse::Input::Pointer__get_Released(NULL))->RemoveHandler(node, handler);
}

void AttachedPointerMembers__RemoveWheelMovedHandler(::uStatic* __this, ::app::Fuse::Node* node, ::uDelegate* handler)
{
    ::uPtr< ::app::Fuse::NodeEvent__Fuse_Input_PointerWheelMovedHandler__Fuse_Input_PointerWheelMovedArgs*>(::app::Fuse::Input::Pointer__get_WheelMoved(NULL))->RemoveHandler(node, handler);
}

}}}}
