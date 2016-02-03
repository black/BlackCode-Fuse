// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.iOS\0.18.8\Controls\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.h>
namespace g{namespace Fuse{namespace Controls{struct Control;}}}
namespace g{namespace Fuse{namespace iOS{namespace Controls{struct ControlProperties;}}}}
namespace g{namespace Fuse{struct StyleProperty1;}}
namespace g{namespace Uno{struct Float4;}}

namespace g{
namespace Fuse{
namespace iOS{
namespace Controls{

// public static class ControlProperties :313
// {
uClassType* ControlProperties_typeof();
void ControlProperties__GetTintColor_fn(::g::Fuse::Controls::Control* p, ::g::Uno::Float4* __retval);
void ControlProperties__OnTintColorChanged_fn(::g::Fuse::Controls::Control* panel);
void ControlProperties__ResetTintColor_fn(::g::Fuse::Controls::Control* p);
void ControlProperties__SetTintColor_fn(::g::Fuse::Controls::Control* p, ::g::Uno::Float4* value);

struct ControlProperties : uObject
{
    static uSStrong< ::g::Fuse::StyleProperty1*> TintColorProperty_;
    static uSStrong< ::g::Fuse::StyleProperty1*>& TintColorProperty() { return ControlProperties_typeof()->Init(), TintColorProperty_; }

    static ::g::Uno::Float4 GetTintColor(::g::Fuse::Controls::Control* p);
    static void OnTintColorChanged(::g::Fuse::Controls::Control* panel);
    static void ResetTintColor(::g::Fuse::Controls::Control* p);
    static void SetTintColor(::g::Fuse::Controls::Control* p, ::g::Uno::Float4 value);
};
// }

}}}} // ::g::Fuse::iOS::Controls
