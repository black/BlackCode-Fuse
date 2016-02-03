// This file was generated based on 'C:\ProgramData\Uno\Packages\FuseCore\0.11.3\Input\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_FUSE_INPUT_TEXT_ENTERED_ARGS_H__
#define __APP_FUSE_INPUT_TEXT_ENTERED_ARGS_H__

#include <app/Fuse.NodeEventArgs.h>
#include <app/Fuse.Scripting.IScriptEvent.h>
#include <Uno.h>
namespace app { namespace Fuse { struct Node; } }

namespace app {
namespace Fuse {
namespace Input {

struct TextEnteredArgs;

struct TextEnteredArgs__uType : ::app::Fuse::NodeEventArgs__uType
{
};

TextEnteredArgs__uType* TextEnteredArgs__typeof();

void TextEnteredArgs___ObjInit_2(TextEnteredArgs* __this, ::uString* text, ::app::Fuse::Node* node);
void TextEnteredArgs__Fuse_Scripting_IScriptEvent_Serialize_1(TextEnteredArgs* __this, ::uObject* s);
::uString* TextEnteredArgs__get_Text(TextEnteredArgs* __this);
TextEnteredArgs* TextEnteredArgs__New_3(::uStatic* __this, ::uString* text, ::app::Fuse::Node* node);
void TextEnteredArgs__set_Text(TextEnteredArgs* __this, ::uString* value);

struct TextEnteredArgs : ::app::Fuse::NodeEventArgs
{
    ::uStrong< ::uString*> _Text;

    void _ObjInit_2(::uString* text, ::app::Fuse::Node* node) { TextEnteredArgs___ObjInit_2(this, text, node); }
    ::uString* Text() { return TextEnteredArgs__get_Text(this); }
    void Text(::uString* value) { TextEnteredArgs__set_Text(this, value); }
};

}}}


#endif
