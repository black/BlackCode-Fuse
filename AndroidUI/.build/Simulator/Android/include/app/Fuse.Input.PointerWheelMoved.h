// This file was generated based on 'C:\ProgramData\Uno\Packages\FuseCore\0.11.3\Input\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_FUSE_INPUT_POINTER_WHEEL_MOVED_H__
#define __APP_FUSE_INPUT_POINTER_WHEEL_MOVED_H__

#include <app/Fuse.NodeEvent__Fuse_Input_PointerWheelMovedHandler__Fuse_Input-2ce16824.h>
#include <Uno.h>
namespace app { namespace Fuse { namespace Input { struct PointerWheelMovedArgs; } } }

namespace app {
namespace Fuse {
namespace Input {

struct PointerWheelMoved;

struct PointerWheelMoved__uType : ::app::Fuse::NodeEvent__Fuse_Input_PointerWheelMovedHandler__Fuse_Input_PointerWheelMovedArgs__uType
{
};

PointerWheelMoved__uType* PointerWheelMoved__typeof();

void PointerWheelMoved___ObjInit_1(PointerWheelMoved* __this);
void PointerWheelMoved__Invoke(PointerWheelMoved* __this, ::uDelegate* handler, ::uObject* sender, ::app::Fuse::Input::PointerWheelMovedArgs* args);
PointerWheelMoved* PointerWheelMoved__New_1(::uStatic* __this);

struct PointerWheelMoved : ::app::Fuse::NodeEvent__Fuse_Input_PointerWheelMovedHandler__Fuse_Input_PointerWheelMovedArgs
{
    void _ObjInit_1() { PointerWheelMoved___ObjInit_1(this); }
};

}}}


#endif
