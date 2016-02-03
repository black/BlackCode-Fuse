// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Android\0.19.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.Object.h>
#include <Uno.Recti.h>
namespace g{namespace Android{namespace android{namespace text{struct LayoutDLRAlignment;}}}}
namespace g{namespace Android{namespace android{namespace text{struct StaticLayout;}}}}
namespace g{namespace Android{namespace android{namespace text{struct TextPaint;}}}}
namespace g{namespace Fuse{namespace Android{struct TextControlLayout;}}}
namespace g{namespace Fuse{namespace Controls{struct TextControl;}}}

namespace g{
namespace Fuse{
namespace Android{

// internal sealed extern class TextControlLayout :799
// {
uType* TextControlLayout_typeof();
void TextControlLayout__ctor__fn(TextControlLayout* __this);
void TextControlLayout__Dispose_fn(TextControlLayout* __this);
void TextControlLayout__get_Layout_fn(TextControlLayout* __this, ::g::Android::android::text::StaticLayout** __retval);
void TextControlLayout__set_Layout_fn(TextControlLayout* __this, ::g::Android::android::text::StaticLayout* value);
void TextControlLayout__Measure_fn(TextControlLayout* __this, ::g::Fuse::Controls::TextControl* Control, float* wrapWidth);
void TextControlLayout__New1_fn(TextControlLayout** __retval);
void TextControlLayout__get_Paint_fn(TextControlLayout* __this, ::g::Android::android::text::TextPaint** __retval);
void TextControlLayout__set_Paint_fn(TextControlLayout* __this, ::g::Android::android::text::TextPaint* value);
void TextControlLayout__get_PixelBounds_fn(TextControlLayout* __this, ::g::Uno::Recti* __retval);
void TextControlLayout__set_PixelBounds_fn(TextControlLayout* __this, ::g::Uno::Recti* value);
void TextControlLayout__TextAlignmentToAndroidLayoutAlignment_fn(TextControlLayout* __this, int* textAlignment, ::g::Android::android::text::LayoutDLRAlignment** __retval);

struct TextControlLayout : uObject
{
    uStrong< ::g::Android::android::text::StaticLayout*> _Layout;
    uStrong< ::g::Android::android::text::TextPaint*> _Paint;
    ::g::Uno::Recti _PixelBounds;

    void ctor_();
    void Dispose();
    ::g::Android::android::text::StaticLayout* Layout();
    void Layout(::g::Android::android::text::StaticLayout* value);
    void Measure(::g::Fuse::Controls::TextControl* Control, float wrapWidth);
    ::g::Android::android::text::TextPaint* Paint();
    void Paint(::g::Android::android::text::TextPaint* value);
    ::g::Uno::Recti PixelBounds();
    void PixelBounds(::g::Uno::Recti value);
    ::g::Android::android::text::LayoutDLRAlignment* TextAlignmentToAndroidLayoutAlignment(int textAlignment);
    static TextControlLayout* New1();
};
// }

}}} // ::g::Fuse::Android
