// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Android\0.19.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Controls.Graphics.TextVisual.h>
#include <Fuse.Resources.ISoftDisposable.h>
#include <Fuse.Scripting.INameScope.h>
namespace g{namespace Android{namespace android{namespace text{struct StaticLayout;}}}}
namespace g{namespace Fuse{namespace Android{struct TextControlLayout;}}}
namespace g{namespace Fuse{namespace Android{struct TextRenderer;}}}
namespace g{namespace Fuse{struct DrawContext;}}
namespace g{namespace Uno{namespace UX{struct ValueChangedArgs;}}}
namespace g{namespace Uno{struct EventArgs;}}
namespace g{namespace Uno{struct Float2;}}
namespace g{namespace Uno{struct Float4;}}
namespace g{namespace Uno{struct Rect;}}
namespace g{namespace Uno{struct Recti;}}

namespace g{
namespace Fuse{
namespace Android{

// public sealed extern class TextRenderer :875
// {
struct TextRenderer_type : ::g::Fuse::Controls::Graphics::ControlVisual_type
{
    ::g::Fuse::Resources::ISoftDisposable interface1;
};

TextRenderer_type* TextRenderer_typeof();
void TextRenderer__ctor_4_fn(TextRenderer* __this);
void TextRenderer__Attach_fn(TextRenderer* __this);
void TextRenderer__Detach_fn(TextRenderer* __this);
void TextRenderer__DisposeTexture_fn(TextRenderer* __this);
void TextRenderer__Fuse_Resources_ISoftDisposable_SoftDispose_fn(TextRenderer* __this);
void TextRenderer__GetMarginSize_fn(TextRenderer* __this, ::g::Uno::Float2* fillSize, int* fillSet, ::g::Uno::Float2* __retval);
void TextRenderer__get_LocalRenderBounds_fn(TextRenderer* __this, ::g::Uno::Rect* __retval);
void TextRenderer__New1_fn(TextRenderer** __retval);
void TextRenderer__OnBitmapDraw_fn(TextRenderer* __this, ::g::Fuse::DrawContext* dc);
void TextRenderer__OnDraw_fn(TextRenderer* __this, ::g::Fuse::DrawContext* dc);
void TextRenderer__OnTextLayoutPropertyChanged1_fn(TextRenderer* __this, uObject* sender, ::g::Uno::EventArgs* args);
void TextRenderer__OnTextRenderPropertyChanged1_fn(TextRenderer* __this, uObject* sender, ::g::Uno::EventArgs* args);
void TextRenderer__OnValueChanged1_fn(TextRenderer* __this, uObject* sender, ::g::Uno::UX::ValueChangedArgs* args);
void TextRenderer__PrepareDraw_fn(TextRenderer* __this);
void TextRenderer__SetTexture_fn(TextRenderer* __this, uint32_t* newTexture);
void TextRenderer__UpdateLayout1_fn(TextRenderer* __this, float* wrapWidth);
void TextRenderer__UpdateTexture_fn(TextRenderer* __this, ::g::Android::android::text::StaticLayout* layout, ::g::Uno::Float4* renderColor, ::g::Uno::Recti* pixelBounds, uint32_t* __retval);

struct TextRenderer : ::g::Fuse::Controls::Graphics::TextVisual
{
    bool _emitNewTexture;
    bool _layoutValid;
    bool _renderThreaded;
    uStrong< ::g::Fuse::Android::TextControlLayout*> _textLayout;
    uint32_t _texture;
    uint64_t _textureVersion;
    uint64_t _wantedVersion;
    float _wrapWidth;

    void ctor_4();
    void DisposeTexture();
    void OnBitmapDraw(::g::Fuse::DrawContext* dc);
    void OnTextLayoutPropertyChanged1(uObject* sender, ::g::Uno::EventArgs* args);
    void OnTextRenderPropertyChanged1(uObject* sender, ::g::Uno::EventArgs* args);
    void OnValueChanged1(uObject* sender, ::g::Uno::UX::ValueChangedArgs* args);
    void PrepareDraw();
    void SetTexture(uint32_t newTexture);
    void UpdateLayout1(float wrapWidth);
    uint32_t UpdateTexture(::g::Android::android::text::StaticLayout* layout, ::g::Uno::Float4 renderColor, ::g::Uno::Recti pixelBounds);
    static TextRenderer* New1();
};
// }

}}} // ::g::Fuse::Android
