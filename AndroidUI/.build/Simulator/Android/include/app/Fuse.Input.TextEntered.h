// This file was generated based on 'C:\ProgramData\Uno\Packages\FuseCore\0.11.3\Input\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_FUSE_INPUT_TEXT_ENTERED_H__
#define __APP_FUSE_INPUT_TEXT_ENTERED_H__

#include <app/Fuse.NodeEvent__Fuse_Input_TextEnteredHandler__Fuse_Input_TextE-b5bf0cfa.h>
#include <Uno.h>
namespace app { namespace Fuse { namespace Input { struct TextEnteredArgs; } } }

namespace app {
namespace Fuse {
namespace Input {

struct TextEntered;

struct TextEntered__uType : ::app::Fuse::NodeEvent__Fuse_Input_TextEnteredHandler__Fuse_Input_TextEnteredArgs__uType
{
};

TextEntered__uType* TextEntered__typeof();

void TextEntered___ObjInit_1(TextEntered* __this);
void TextEntered__Invoke(TextEntered* __this, ::uDelegate* handler, ::uObject* sender, ::app::Fuse::Input::TextEnteredArgs* args);
TextEntered* TextEntered__New_1(::uStatic* __this);

struct TextEntered : ::app::Fuse::NodeEvent__Fuse_Input_TextEnteredHandler__Fuse_Input_TextEnteredArgs
{
    void _ObjInit_1() { TextEntered___ObjInit_1(this); }
};

}}}


#endif
