// This file was generated based on 'C:\ProgramData\Uno\Packages\FuseCore\0.11.3\Input\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_FUSE_INPUT_TEXT_SERVICE_H__
#define __APP_FUSE_INPUT_TEXT_SERVICE_H__

#include <Uno.h>
namespace app { namespace Fuse { namespace Input { struct TextEntered; } } }
namespace app { namespace Fuse { struct NodeEvent__Fuse_Input_TextEnteredHandler__Fuse_Input_TextEnteredArgs; } }

namespace app {
namespace Fuse {
namespace Input {

extern ::uStaticStrong< ::app::Fuse::Input::TextEntered*> TextService___textEntered;

struct TextService__uType : ::uClassType
{
};

TextService__uType* TextService__typeof();

void TextService___TypeInit(::uStatic* __this);
::app::Fuse::NodeEvent__Fuse_Input_TextEnteredHandler__Fuse_Input_TextEnteredArgs* TextService__get_TextEntered(::uStatic* __this);
bool TextService__RaiseTextEntered(::uStatic* __this, ::uString* text);

}}}


#endif
