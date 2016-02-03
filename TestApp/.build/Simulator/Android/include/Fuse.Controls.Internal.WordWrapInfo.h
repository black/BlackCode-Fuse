// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Controls\0.18.8\Internal\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.Object.h>
namespace g{namespace Fuse{namespace Controls{namespace Internal{struct DefaultTextRenderer;}}}}
namespace g{namespace Fuse{namespace Controls{namespace Internal{struct WordWrapInfo;}}}}

namespace g{
namespace Fuse{
namespace Controls{
namespace Internal{

// internal sealed class WordWrapInfo :215
// {
uType* WordWrapInfo_typeof();
void WordWrapInfo__ctor__fn(WordWrapInfo* __this, ::g::Fuse::Controls::Internal::DefaultTextRenderer* textRenderer, bool* isEnabled, float* wrapWidth, float* fontSize, float* lineHeight, float* lineSpacing, float* absoluteZoom);
void WordWrapInfo__Equals_fn(WordWrapInfo* __this, uObject* obj, bool* __retval);
void WordWrapInfo__GetHashCode_fn(WordWrapInfo* __this, int* __retval);
void WordWrapInfo__New1_fn(::g::Fuse::Controls::Internal::DefaultTextRenderer* textRenderer, bool* isEnabled, float* wrapWidth, float* fontSize, float* lineHeight, float* lineSpacing, float* absoluteZoom, WordWrapInfo** __retval);

struct WordWrapInfo : uObject
{
    float AbsoluteZoom;
    float FontSize;
    bool IsEnabled;
    float LineHeight;
    uStrong< ::g::Fuse::Controls::Internal::DefaultTextRenderer*> TextRenderer;
    float WrapWidth;

    void ctor_(::g::Fuse::Controls::Internal::DefaultTextRenderer* textRenderer, bool isEnabled, float wrapWidth, float fontSize, float lineHeight, float lineSpacing, float absoluteZoom);
    static WordWrapInfo* New1(::g::Fuse::Controls::Internal::DefaultTextRenderer* textRenderer, bool isEnabled, float wrapWidth, float fontSize, float lineHeight, float lineSpacing, float absoluteZoom);
};
// }

}}}} // ::g::Fuse::Controls::Internal
