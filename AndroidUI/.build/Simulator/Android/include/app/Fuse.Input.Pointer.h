// This file was generated based on 'C:\ProgramData\Uno\Packages\FuseCore\0.11.3\Input\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_FUSE_INPUT_POINTER_H__
#define __APP_FUSE_INPUT_POINTER_H__

#include <Uno.h>
namespace app { namespace Fuse { namespace Input { struct Capturer; } } }
namespace app { namespace Fuse { namespace Input { struct PointerEntered; } } }
namespace app { namespace Fuse { namespace Input { struct PointerEventData; } } }
namespace app { namespace Fuse { namespace Input { struct PointerLeft; } } }
namespace app { namespace Fuse { namespace Input { struct PointerMoved; } } }
namespace app { namespace Fuse { namespace Input { struct PointerMovedArgs; } } }
namespace app { namespace Fuse { namespace Input { struct PointerPressed; } } }
namespace app { namespace Fuse { namespace Input { struct PointerPressedArgs; } } }
namespace app { namespace Fuse { namespace Input { struct PointerReleased; } } }
namespace app { namespace Fuse { namespace Input { struct PointerReleasedArgs; } } }
namespace app { namespace Fuse { namespace Input { struct PointerWheelMoved; } } }
namespace app { namespace Fuse { namespace Input { struct PointerWheelMovedArgs; } } }
namespace app { namespace Fuse { struct HitTestResult; } }
namespace app { namespace Fuse { struct Node; } }
namespace app { namespace Fuse { struct NodeEvent__Fuse_Input_PointerEnteredHandler__Fuse_Input_PointerEnteredArgs; } }
namespace app { namespace Fuse { struct NodeEvent__Fuse_Input_PointerLeftHandler__Fuse_Input_PointerLeftArgs; } }
namespace app { namespace Fuse { struct NodeEvent__Fuse_Input_PointerMovedHandler__Fuse_Input_PointerMovedArgs; } }
namespace app { namespace Fuse { struct NodeEvent__Fuse_Input_PointerPressedHandler__Fuse_Input_PointerPressedArgs; } }
namespace app { namespace Fuse { struct NodeEvent__Fuse_Input_PointerReleasedHandler__Fuse_Input_PointerReleasedArgs; } }
namespace app { namespace Fuse { struct NodeEvent__Fuse_Input_PointerWheelMovedHandler__Fuse_Input_PointerWheelMovedArgs; } }
namespace app { namespace Uno { namespace Collections { struct Dictionary__int__Fuse_Input_Capturer; } } }
namespace app { namespace Uno { namespace Collections { struct Dictionary__int__Fuse_Input_Pointer_PointerRecord; } } }
namespace app { namespace Uno { namespace Collections { struct Dictionary__int__Uno_Collections_IList_Fuse_Input_Capturer_; } } }
namespace app { namespace Uno { namespace Collections { struct Dictionary__int__Uno_Collections_List_Fuse_Input_Pointer_PELHolder_; } } }
namespace app { namespace Uno { namespace Collections { struct List__Fuse_Input_Pointer_PELHolder; } } }
namespace app { namespace Uno { struct Float2; } }

namespace app {
namespace Fuse {
namespace Input {

extern ::app::Uno::Float2 Pointer___Coord;
extern ::uStaticStrong< ::app::Fuse::Input::PointerEntered*> Pointer___entered;
extern ::uStaticStrong< ::app::Uno::Collections::Dictionary__int__Fuse_Input_Capturer*> Pointer___hardCapturers;
extern ::uStaticStrong< ::app::Uno::Collections::Dictionary__int__Uno_Collections_List_Fuse_Input_Pointer_PELHolder_*> Pointer___lastHitNodes;
extern ::uStaticStrong< ::app::Fuse::Input::PointerLeft*> Pointer___left;
extern ::uStaticStrong< ::app::Fuse::Input::PointerMoved*> Pointer___moved;
extern ::uStaticStrong< ::app::Uno::Collections::Dictionary__int__Fuse_Input_Pointer_PointerRecord*> Pointer___pointersDown;
extern ::uStaticStrong< ::app::Fuse::Input::PointerPressed*> Pointer___pressed;
extern ::uStaticStrong< ::app::Fuse::Input::PointerReleased*> Pointer___released;
extern ::uStaticStrong< ::app::Uno::Collections::Dictionary__int__Uno_Collections_IList_Fuse_Input_Capturer_*> Pointer___softCapturers;
extern ::uStaticStrong< ::app::Fuse::Input::PointerWheelMoved*> Pointer___wheelMoved;

struct Pointer__uType : ::uClassType
{
};

Pointer__uType* Pointer__typeof();

void Pointer___TypeInit(::uStatic* __this);
void Pointer__AddHandlers(::uStatic* __this, ::app::Fuse::Node* node, ::uDelegate* pressed, ::uDelegate* moved, ::uDelegate* released, ::uDelegate* entered, ::uDelegate* left, ::uDelegate* wheelMoved);
::app::Uno::Float2 Pointer__get_Coord(::uStatic* __this);
::uArray* Pointer__get_Coords(::uStatic* __this);
::app::Fuse::NodeEvent__Fuse_Input_PointerEnteredHandler__Fuse_Input_PointerEnteredArgs* Pointer__get_Entered(::uStatic* __this);
::app::Fuse::NodeEvent__Fuse_Input_PointerLeftHandler__Fuse_Input_PointerLeftArgs* Pointer__get_Left(::uStatic* __this);
::app::Fuse::NodeEvent__Fuse_Input_PointerMovedHandler__Fuse_Input_PointerMovedArgs* Pointer__get_Moved(::uStatic* __this);
::app::Fuse::NodeEvent__Fuse_Input_PointerPressedHandler__Fuse_Input_PointerPressedArgs* Pointer__get_Pressed(::uStatic* __this);
::app::Fuse::NodeEvent__Fuse_Input_PointerReleasedHandler__Fuse_Input_PointerReleasedArgs* Pointer__get_Released(::uStatic* __this);
::app::Fuse::NodeEvent__Fuse_Input_PointerWheelMovedHandler__Fuse_Input_PointerWheelMovedArgs* Pointer__get_WheelMoved(::uStatic* __this);
::app::Fuse::Input::Capturer* Pointer__GetHardCapturer(::uStatic* __this, int pointIndex);
::app::Uno::Collections::List__Fuse_Input_Pointer_PELHolder* Pointer__GetLastHitList(::uStatic* __this, int pointIndex);
::app::Fuse::Input::Capturer* Pointer__GetSoftCapturer(::uStatic* __this, int pointIndex);
bool Pointer__HardCapture(::uStatic* __this, int pointIndex, ::app::Fuse::Node* node, ::uObject* identity, ::uDelegate* lostCallback);
bool Pointer__IsHardCaptured(::uStatic* __this, int pointIndex);
bool Pointer__IsHardCaptured_1(::uStatic* __this, int pointIndex, ::uObject* behavior);
bool Pointer__IsOnFocusablePath(::uStatic* __this, ::app::Fuse::Node* n);
bool Pointer__IsPressed(::uStatic* __this);
bool Pointer__IsPressed_1(::uStatic* __this, int pointIndex);
bool Pointer__IsSoftCaptured(::uStatic* __this, int pointIndex);
bool Pointer__IsSoftCaptured_1(::uStatic* __this, int pointIndex, ::uObject* capturerIdentity);
void Pointer__MarkAncestorHits(::uStatic* __this, ::app::Fuse::Node* hitObject, ::app::Uno::Collections::List__Fuse_Input_Pointer_PELHolder* list);
void Pointer__ProcessPointerEnterLeave(::uStatic* __this, ::app::Fuse::HitTestResult* result, ::app::Fuse::Input::PointerEventData* args);
void Pointer__RaiseLeft(::uStatic* __this, ::app::Fuse::Node* root, ::app::Fuse::Input::PointerEventData* data);
::app::Fuse::Input::PointerMovedArgs* Pointer__RaiseMoved(::uStatic* __this, ::app::Fuse::Node* root, ::app::Fuse::Input::PointerEventData* data);
void Pointer__RaisePointerMovedInternal(::uStatic* __this, ::app::Fuse::Input::PointerMovedArgs* args);
void Pointer__RaisePointerPressedInternal(::uStatic* __this, ::app::Fuse::Input::PointerPressedArgs* args);
void Pointer__RaisePointerReleasedInternal(::uStatic* __this, ::app::Fuse::Input::PointerReleasedArgs* args);
void Pointer__RaisePointerWheelMovedInternal(::uStatic* __this, ::app::Fuse::Input::PointerWheelMovedArgs* args);
::app::Fuse::Input::PointerPressedArgs* Pointer__RaisePressed(::uStatic* __this, ::app::Fuse::Node* root, ::app::Fuse::Input::PointerEventData* data);
::app::Fuse::Input::PointerReleasedArgs* Pointer__RaiseReleased(::uStatic* __this, ::app::Fuse::Node* root, ::app::Fuse::Input::PointerEventData* data);
::app::Fuse::Input::PointerWheelMovedArgs* Pointer__RaiseWheelMoved(::uStatic* __this, ::app::Fuse::Node* root, ::app::Fuse::Input::PointerEventData* data);
void Pointer__ReleaseAllCaptures(::uStatic* __this, ::uObject* identity);
void Pointer__ReleaseHardCapture(::uStatic* __this, int pointIndex);
void Pointer__ReleaseSoftCapture(::uStatic* __this, int pointIndex, ::uObject* identity);
void Pointer__RemoveHandlers(::uStatic* __this, ::app::Fuse::Node* node, ::uDelegate* pressed, ::uDelegate* moved, ::uDelegate* released, ::uDelegate* entered, ::uDelegate* left, ::uDelegate* wheelMoved);
::app::Fuse::Node* Pointer__RoutePointerEvent(::uStatic* __this, ::app::Fuse::Input::PointerEventData* plainEvent, ::app::Fuse::Node* root);
::app::Fuse::Node* Pointer__RouteToCapturer(::uStatic* __this, ::app::Fuse::Input::PointerEventData* args);
::app::Fuse::Node* Pointer__RouteToHit(::uStatic* __this, ::app::Fuse::Input::PointerEventData* args, ::app::Fuse::Node* root);
::app::Fuse::Node* Pointer__RouteToSoftCapturer(::uStatic* __this, ::app::Fuse::Input::PointerEventData* args);
void Pointer__set_Coord(::uStatic* __this, ::app::Uno::Float2 value);
bool Pointer__SoftCapture(::uStatic* __this, int pointIndex, ::app::Fuse::Node* softCapturer, ::uObject* identity, ::uDelegate* lostCallback);

}}}


#endif
