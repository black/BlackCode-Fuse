// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Controls\0.11.3\Graphics\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_FUSE_CONTROLS_GRAPHICS_DEFAULT_TEXT_VISUAL_H__
#define __APP_FUSE_CONTROLS_GRAPHICS_DEFAULT_TEXT_VISUAL_H__

#include <app/Fuse.Controls.Graphics.TextVisual.h>
#include <app/Fuse.Scripting.INameScope.h>
#include <app/Uno.Float2.h>
#include <Uno.h>
namespace app { namespace Fuse { namespace Controls { namespace Internal { struct DefaultTextRenderer; } } } }
namespace app { namespace Fuse { namespace Controls { namespace Internal { struct WordWrapInfo; } } } }
namespace app { namespace Fuse { namespace Controls { namespace Internal { struct WrappedLine; } } } }
namespace app { namespace Fuse { struct DrawContext; } }
namespace app { namespace Fuse { struct Font; } }
namespace app { namespace Uno { namespace Collections { struct Dictionary__Fuse_Font__Fuse_Controls_Internal_DefaultTextRenderer; } } }

namespace app {
namespace Fuse {
namespace Controls {
namespace Graphics {

struct DefaultTextVisual;

extern ::uStaticStrong< ::app::Uno::Collections::Dictionary__Fuse_Font__Fuse_Controls_Internal_DefaultTextRenderer*> DefaultTextVisual___textRenderers;

struct DefaultTextVisual__uType : ::app::Fuse::Controls::Graphics::TextVisual__uType
{
};

DefaultTextVisual__uType* DefaultTextVisual__typeof();

void DefaultTextVisual___ObjInit_4(DefaultTextVisual* __this);
void DefaultTextVisual___TypeInit_1(::uStatic* __this);
::app::Uno::Float2 DefaultTextVisual__GetMarginSize(DefaultTextVisual* __this, ::app::Uno::Float2 fillSize, int fillSet);
::app::Fuse::Controls::Internal::DefaultTextRenderer* DefaultTextVisual__GetTextRenderer(::uStatic* __this, ::app::Fuse::Font* f);
void DefaultTextVisual__InitWrap(DefaultTextVisual* __this, float wrapWidth, ::uString* value);
DefaultTextVisual* DefaultTextVisual__New_1(::uStatic* __this);
void DefaultTextVisual__OnDraw(DefaultTextVisual* __this, ::app::Fuse::DrawContext* dc);

struct DefaultTextVisual : ::app::Fuse::Controls::Graphics::TextVisual
{
    ::uStrong< ::app::Fuse::Controls::Internal::WordWrapInfo*> _wrapInfo;
    ::uStrong< ::uArray*> _wrappedLines;
    float _wrapWidth;
    ::app::Uno::Float2 _textBoundsSize;
    int _maxTextLength;
    ::uStrong< ::uString*> _cacheValue;

    void _ObjInit_4() { DefaultTextVisual___ObjInit_4(this); }
    void InitWrap(float wrapWidth, ::uString* value) { DefaultTextVisual__InitWrap(this, wrapWidth, value); }
};

}}}}


#endif
