// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Controls\0.11.3\Internal\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_FUSE_CONTROLS_INTERNAL_WORD_WRAP_INFO_H__
#define __APP_FUSE_CONTROLS_INTERNAL_WORD_WRAP_INFO_H__

#include <app/Uno.Object.h>
#include <Uno.h>
namespace app { namespace Fuse { namespace Controls { namespace Internal { struct DefaultTextRenderer; } } } }

namespace app {
namespace Fuse {
namespace Controls {
namespace Internal {

struct WordWrapInfo;

struct WordWrapInfo__uType : ::uClassType
{
};

WordWrapInfo__uType* WordWrapInfo__typeof();

void WordWrapInfo___ObjInit(WordWrapInfo* __this, ::app::Fuse::Controls::Internal::DefaultTextRenderer* textRenderer, bool isEnabled, float wrapWidth, float fontSize, float lineHeight, float lineSpacing, float absoluteZoom);
bool WordWrapInfo__Equals(WordWrapInfo* __this, ::uObject* obj);
int WordWrapInfo__GetHashCode(WordWrapInfo* __this);
WordWrapInfo* WordWrapInfo__New_1(::uStatic* __this, ::app::Fuse::Controls::Internal::DefaultTextRenderer* textRenderer, bool isEnabled, float wrapWidth, float fontSize, float lineHeight, float lineSpacing, float absoluteZoom);

struct WordWrapInfo : ::uObject
{
    ::uStrong< ::app::Fuse::Controls::Internal::DefaultTextRenderer*> TextRenderer;
    bool IsEnabled;
    float WrapWidth;
    float FontSize;
    float LineHeight;
    float AbsoluteZoom;

    void _ObjInit(::app::Fuse::Controls::Internal::DefaultTextRenderer* textRenderer, bool isEnabled, float wrapWidth, float fontSize, float lineHeight, float lineSpacing, float absoluteZoom) { WordWrapInfo___ObjInit(this, textRenderer, isEnabled, wrapWidth, fontSize, lineHeight, lineSpacing, absoluteZoom); }
};

}}}}


#endif
