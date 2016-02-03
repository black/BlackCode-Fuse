// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Controls\0.18.8\Graphics\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Controls.Graphics.TextVisual.h>
#include <Fuse.Scripting.INameScope.h>
#include <Uno.Float2.h>
namespace g{namespace Fuse{namespace Controls{namespace Graphics{struct DefaultTextVisual;}}}}
namespace g{namespace Fuse{namespace Controls{namespace Internal{struct DefaultTextRenderer;}}}}
namespace g{namespace Fuse{namespace Controls{namespace Internal{struct WordWrapInfo;}}}}
namespace g{namespace Fuse{namespace Controls{namespace Internal{struct WrappedLine;}}}}
namespace g{namespace Fuse{struct DrawContext;}}
namespace g{namespace Fuse{struct Font;}}
namespace g{namespace Uno{namespace Collections{struct Dictionary;}}}

namespace g{
namespace Fuse{
namespace Controls{
namespace Graphics{

// public sealed class DefaultTextVisual :63
// {
::g::Fuse::Controls::Graphics::ControlVisual_type* DefaultTextVisual_typeof();
void DefaultTextVisual__ctor_4_fn(DefaultTextVisual* __this);
void DefaultTextVisual__GetMarginSize_fn(DefaultTextVisual* __this, ::g::Uno::Float2* fillSize, int* fillSet, ::g::Uno::Float2* __retval);
void DefaultTextVisual__GetTextRenderer_fn(::g::Fuse::Font* f, ::g::Fuse::Controls::Internal::DefaultTextRenderer** __retval);
void DefaultTextVisual__InitWrap_fn(DefaultTextVisual* __this, float* wrapWidth, uString* value);
void DefaultTextVisual__New1_fn(DefaultTextVisual** __retval);
void DefaultTextVisual__OnDraw_fn(DefaultTextVisual* __this, ::g::Fuse::DrawContext* dc);

struct DefaultTextVisual : ::g::Fuse::Controls::Graphics::TextVisual
{
    uStrong<uString*> _cacheValue;
    int _maxTextLength;
    ::g::Uno::Float2 _textBoundsSize;
    static uSStrong< ::g::Uno::Collections::Dictionary*> _textRenderers_;
    static uSStrong< ::g::Uno::Collections::Dictionary*>& _textRenderers() { return DefaultTextVisual_typeof()->Init(), _textRenderers_; }
    uStrong< ::g::Fuse::Controls::Internal::WordWrapInfo*> _wrapInfo;
    uStrong<uArray*> _wrappedLines;
    float _wrapWidth;

    void ctor_4();
    void InitWrap(float wrapWidth, uString* value);
    static ::g::Fuse::Controls::Internal::DefaultTextRenderer* GetTextRenderer(::g::Fuse::Font* f);
    static DefaultTextVisual* New1();
};
// }

}}}} // ::g::Fuse::Controls::Graphics
