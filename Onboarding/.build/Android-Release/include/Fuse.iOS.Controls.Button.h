// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.iOS\0.19.3\Controls\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Node.h>
namespace g{namespace Fuse{namespace iOS{namespace Controls{struct Button;}}}}
namespace g{namespace Fuse{struct StyleProperty1;}}
namespace g{namespace Uno{struct Float4;}}

namespace g{
namespace Fuse{
namespace iOS{
namespace Controls{

// public sealed extern class Button :18
// {
::g::Fuse::Node_type* Button_typeof();
void Button__OnButtonPropertyChanged_fn(Button* t);

struct Button : ::g::Fuse::Node
{
    static uSStrong< ::g::Fuse::StyleProperty1*> DisabledColorProperty_;
    static uSStrong< ::g::Fuse::StyleProperty1*>& DisabledColorProperty() { return Button_typeof()->Init(), DisabledColorProperty_; }
    static uSStrong< ::g::Fuse::StyleProperty1*> HighlightedColorProperty_;
    static uSStrong< ::g::Fuse::StyleProperty1*>& HighlightedColorProperty() { return Button_typeof()->Init(), HighlightedColorProperty_; }
    static uSStrong< ::g::Fuse::StyleProperty1*> NormalColorProperty_;
    static uSStrong< ::g::Fuse::StyleProperty1*>& NormalColorProperty() { return Button_typeof()->Init(), NormalColorProperty_; }
    static uSStrong< ::g::Fuse::StyleProperty1*> SelectedColorProperty_;
    static uSStrong< ::g::Fuse::StyleProperty1*>& SelectedColorProperty() { return Button_typeof()->Init(), SelectedColorProperty_; }

    static void OnButtonPropertyChanged(Button* t);
};
// }

}}}} // ::g::Fuse::iOS::Controls
