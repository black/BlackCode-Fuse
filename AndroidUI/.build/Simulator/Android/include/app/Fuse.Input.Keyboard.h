// This file was generated based on 'C:\ProgramData\Uno\Packages\FuseCore\0.11.3\Input\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_FUSE_INPUT_KEYBOARD_H__
#define __APP_FUSE_INPUT_KEYBOARD_H__

#include <Uno.h>
namespace app { namespace Fuse { namespace Input { struct KeyPressed; } } }
namespace app { namespace Fuse { namespace Input { struct KeyReleased; } } }
namespace app { namespace Fuse { struct Node; } }
namespace app { namespace Fuse { struct NodeEvent__Fuse_Input_KeyPressedHandler__Fuse_Input_KeyPressedArgs; } }
namespace app { namespace Fuse { struct NodeEvent__Fuse_Input_KeyReleasedHandler__Fuse_Input_KeyReleasedArgs; } }
namespace app { namespace Fuse { struct PropertyHandle; } }
namespace app { namespace Uno { namespace Collections { struct List__Uno_Platform_Key; } } }

namespace app {
namespace Fuse {
namespace Input {

extern ::uStaticStrong< ::app::Fuse::PropertyHandle*> Keyboard___keyboardHandle;
extern ::uStaticStrong< ::app::Fuse::Input::KeyPressed*> Keyboard___keyPressed;
extern ::uStaticStrong< ::app::Fuse::Input::KeyReleased*> Keyboard___keyReleased;
extern ::uStaticStrong< ::app::Uno::Collections::List__Uno_Platform_Key*> Keyboard___keysDown;

struct Keyboard__uType : ::uClassType
{
};

Keyboard__uType* Keyboard__typeof();

void Keyboard___TypeInit(::uStatic* __this);
void Keyboard__AddHandlers(::uStatic* __this, ::app::Fuse::Node* node, ::uDelegate* pressed, ::uDelegate* released);
::app::Fuse::NodeEvent__Fuse_Input_KeyPressedHandler__Fuse_Input_KeyPressedArgs* Keyboard__get_KeyPressed(::uStatic* __this);
::app::Fuse::NodeEvent__Fuse_Input_KeyReleasedHandler__Fuse_Input_KeyReleasedArgs* Keyboard__get_KeyReleased(::uStatic* __this);
bool Keyboard__IsKeyPressed(::uStatic* __this, int key);
bool Keyboard__RaiseKeyPressed(::uStatic* __this, int key, bool isMetaKeyPressed, bool isControlKeyPressed, bool isShiftKeyPressed, bool isAltKeyPressed);
bool Keyboard__RaiseKeyReleased(::uStatic* __this, int key, bool isMetaKeyPressed, bool isControlKeyPressed, bool isShiftKeyPressed, bool isAltKeyPressed);
void Keyboard__RemoveHandlers(::uStatic* __this, ::app::Fuse::Node* node, ::uDelegate* pressed, ::uDelegate* released);

}}}


#endif
