// This file was generated based on 'C:\ProgramData\Uno\Packages\FuseCore\0.19.3\Input\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.NodeEventArgs.h>
namespace g{namespace Fuse{namespace Input{struct TextEnteredArgs;}}}

namespace g{
namespace Fuse{
namespace Input{

// public sealed class TextEnteredArgs :1470
// {
uType* TextEnteredArgs_typeof();
void TextEnteredArgs__get_Text_fn(TextEnteredArgs* __this, uString** __retval);
void TextEnteredArgs__set_Text_fn(TextEnteredArgs* __this, uString* value);

struct TextEnteredArgs : ::g::Fuse::NodeEventArgs
{
    uStrong<uString*> _Text;

    uString* Text();
    void Text(uString* value);
};
// }

}}} // ::g::Fuse::Input
