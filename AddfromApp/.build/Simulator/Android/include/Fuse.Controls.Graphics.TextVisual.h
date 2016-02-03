// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Controls\0.19.3\Graphics\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Controls.Graphics.ControlVisual-1.h>
#include <Fuse.Controls.TextControl.h>
#include <Fuse.Scripting.INameScope.h>
namespace g{namespace Fuse{namespace Controls{namespace Graphics{struct TextVisual;}}}}
namespace g{namespace Fuse{struct HitTestContext;}}
namespace g{namespace Uno{namespace UX{struct ValueChangedArgs;}}}
namespace g{namespace Uno{struct EventArgs;}}

namespace g{
namespace Fuse{
namespace Controls{
namespace Graphics{

// public abstract class TextVisual :1076
// {
::g::Fuse::Controls::Graphics::ControlVisual_type* TextVisual_typeof();
void TextVisual__ctor_3_fn(TextVisual* __this);
void TextVisual__Attach_fn(TextVisual* __this);
void TextVisual__Detach_fn(TextVisual* __this);
void TextVisual__OnHitTest_fn(TextVisual* __this, ::g::Fuse::HitTestContext* htc);
void TextVisual__OnTextLayoutPropertyChanged_fn(TextVisual* __this, uObject* sender, ::g::Uno::EventArgs* args);
void TextVisual__OnTextRenderPropertyChanged_fn(TextVisual* __this, uObject* sender, ::g::Uno::EventArgs* args);
void TextVisual__OnValueChanged_fn(TextVisual* __this, uObject* sender, ::g::Uno::UX::ValueChangedArgs* args);

struct TextVisual : ::g::Fuse::Controls::Graphics::ControlVisual
{
    void ctor_3();
    void OnTextLayoutPropertyChanged(uObject* sender, ::g::Uno::EventArgs* args);
    void OnTextRenderPropertyChanged(uObject* sender, ::g::Uno::EventArgs* args);
    void OnValueChanged(uObject* sender, ::g::Uno::UX::ValueChangedArgs* args);
};
// }

}}}} // ::g::Fuse::Controls::Graphics
