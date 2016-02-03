// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Android.Views\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_FUSE_ANDROID_TEXT_RENDERER_H__
#define __APP_FUSE_ANDROID_TEXT_RENDERER_H__

#include <app/Fuse.Controls.Graphics.TextVisual.h>
#include <app/Fuse.Resources.ISoftDisposable.h>
#include <app/Fuse.Scripting.INameScope.h>
#include <app/Uno.Rect.h>
#include <Uno.h>
namespace app { namespace Android { namespace android { namespace graphics { struct Rect; } } } }
namespace app { namespace Android { namespace android { namespace graphics { struct SurfaceTexture; } } } }
namespace app { namespace Android { namespace android { namespace text { struct LayoutDLRAlignment; } } } }
namespace app { namespace Android { namespace android { namespace text { struct StaticLayout; } } } }
namespace app { namespace Android { namespace android { namespace text { struct TextPaint; } } } }
namespace app { namespace Android { namespace android { namespace view { struct Surface; } } } }
namespace app { namespace Fuse { struct DrawContext; } }
namespace app { namespace Uno { namespace Graphics { struct VideoTexture; } } }
namespace app { namespace Uno { namespace UX { struct ValueChangedArgs__string; } } }
namespace app { namespace Uno { struct EventArgs; } }
namespace app { namespace Uno { struct Float2; } }

namespace app {
namespace Fuse {
namespace Android {

struct TextRenderer;

extern ::uStaticStrong< ::app::Android::android::view::Surface*> TextRenderer___surface;
extern ::uStaticStrong< ::app::Android::android::graphics::SurfaceTexture*> TextRenderer___surfaceTexture;
extern ::uUInt TextRenderer___texture;
extern bool TextRenderer___textureInit;
extern ::uStaticStrong< ::app::Uno::Graphics::VideoTexture*> TextRenderer___videoTexture;

struct TextRenderer__uType : ::app::Fuse::Controls::Graphics::TextVisual__uType
{
    ::app::Fuse::Resources::ISoftDisposable __interface_1;
};

TextRenderer__uType* TextRenderer__typeof();

void TextRenderer___ObjInit_4(TextRenderer* __this);
::app::Uno::Rect TextRenderer__AndroidRectToUnoRect(::uStatic* __this, ::app::Android::android::graphics::Rect* r);
void TextRenderer__Attach(TextRenderer* __this);
void TextRenderer__Detach(TextRenderer* __this);
void TextRenderer__DisposeTexture(TextRenderer* __this);
void TextRenderer__Fuse_Resources_ISoftDisposable_SoftDispose(TextRenderer* __this);
::app::Uno::Float2 TextRenderer__GetMarginSize(TextRenderer* __this, ::app::Uno::Float2 fillSize, int fillSet);
TextRenderer* TextRenderer__New_1(::uStatic* __this);
void TextRenderer__OnBitmapDraw(TextRenderer* __this, ::app::Fuse::DrawContext* dc);
void TextRenderer__OnDraw(TextRenderer* __this, ::app::Fuse::DrawContext* dc);
void TextRenderer__OnTextLayoutPropertyChanged_1(TextRenderer* __this, ::uObject* sender, ::app::Uno::EventArgs* args);
void TextRenderer__OnTextRenderPropertyChanged_1(TextRenderer* __this, ::uObject* sender, ::app::Uno::EventArgs* args);
void TextRenderer__OnValueChanged_1(TextRenderer* __this, ::uObject* sender, ::app::Uno::UX::ValueChangedArgs__string* args);
void TextRenderer__PrepareDraw(TextRenderer* __this, ::app::Fuse::DrawContext* dc);
::app::Android::android::text::LayoutDLRAlignment* TextRenderer__TextAlignmentToAndroidLayoutAlignment(TextRenderer* __this, int textAlignment);
void TextRenderer__TextureDispose(::uStatic* __this);
void TextRenderer__TextureInit(::uStatic* __this);
void TextRenderer__UpdateLayout_1(TextRenderer* __this, float wrapWidth);

struct TextRenderer : ::app::Fuse::Controls::Graphics::TextVisual
{
    ::uStrong< ::app::Android::android::text::TextPaint*> _paint;
    ::uStrong< ::app::Android::android::text::StaticLayout*> _layout;
    ::app::Uno::Rect _pixelBounds;
    bool _layoutValid;
    float _wrapWidth;
    bool _textureValid;
    ::uUInt _bitmapTexture;

    void _ObjInit_4() { TextRenderer___ObjInit_4(this); }
    void DisposeTexture() { TextRenderer__DisposeTexture(this); }
    void OnBitmapDraw(::app::Fuse::DrawContext* dc) { TextRenderer__OnBitmapDraw(this, dc); }
    void OnTextLayoutPropertyChanged_1(::uObject* sender, ::app::Uno::EventArgs* args) { TextRenderer__OnTextLayoutPropertyChanged_1(this, sender, args); }
    void OnTextRenderPropertyChanged_1(::uObject* sender, ::app::Uno::EventArgs* args) { TextRenderer__OnTextRenderPropertyChanged_1(this, sender, args); }
    void OnValueChanged_1(::uObject* sender, ::app::Uno::UX::ValueChangedArgs__string* args) { TextRenderer__OnValueChanged_1(this, sender, args); }
    void PrepareDraw(::app::Fuse::DrawContext* dc) { TextRenderer__PrepareDraw(this, dc); }
    ::app::Android::android::text::LayoutDLRAlignment* TextAlignmentToAndroidLayoutAlignment(int textAlignment) { return TextRenderer__TextAlignmentToAndroidLayoutAlignment(this, textAlignment); }
    void UpdateLayout_1(float wrapWidth) { TextRenderer__UpdateLayout_1(this, wrapWidth); }
};

}}}


#endif
