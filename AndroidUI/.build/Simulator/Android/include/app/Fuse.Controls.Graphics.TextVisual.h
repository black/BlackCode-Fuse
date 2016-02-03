// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Controls\0.11.3\Graphics\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_FUSE_CONTROLS_GRAPHICS_TEXT_VISUAL_H__
#define __APP_FUSE_CONTROLS_GRAPHICS_TEXT_VISUAL_H__

#include <app/Fuse.Controls.Graphics.ControlVisual__Fuse_Controls_TextControl.h>
#include <app/Fuse.Scripting.INameScope.h>
#include <Uno.h>
namespace app { namespace Fuse { struct HitTestContext; } }
namespace app { namespace Uno { namespace UX { struct ValueChangedArgs__string; } } }
namespace app { namespace Uno { struct EventArgs; } }

namespace app {
namespace Fuse {
namespace Controls {
namespace Graphics {

struct TextVisual;

struct TextVisual__uType : ::app::Fuse::Controls::Graphics::ControlVisual__Fuse_Controls_TextControl__uType
{
};

TextVisual__uType* TextVisual__typeof();

void TextVisual___ObjInit_3(TextVisual* __this);
void TextVisual__Attach(TextVisual* __this);
void TextVisual__Detach(TextVisual* __this);
void TextVisual__OnHitTest(TextVisual* __this, ::app::Fuse::HitTestContext* htc);
void TextVisual__OnTextLayoutPropertyChanged(TextVisual* __this, ::uObject* sender, ::app::Uno::EventArgs* args);
void TextVisual__OnTextRenderPropertyChanged(TextVisual* __this, ::uObject* sender, ::app::Uno::EventArgs* args);
void TextVisual__OnValueChanged(TextVisual* __this, ::uObject* sender, ::app::Uno::UX::ValueChangedArgs__string* args);

struct TextVisual : ::app::Fuse::Controls::Graphics::ControlVisual__Fuse_Controls_TextControl
{
    void _ObjInit_3() { TextVisual___ObjInit_3(this); }
    void OnTextLayoutPropertyChanged(::uObject* sender, ::app::Uno::EventArgs* args) { TextVisual__OnTextLayoutPropertyChanged(this, sender, args); }
    void OnTextRenderPropertyChanged(::uObject* sender, ::app::Uno::EventArgs* args) { TextVisual__OnTextRenderPropertyChanged(this, sender, args); }
    void OnValueChanged(::uObject* sender, ::app::Uno::UX::ValueChangedArgs__string* args) { TextVisual__OnValueChanged(this, sender, args); }
};

}}}}


#endif
