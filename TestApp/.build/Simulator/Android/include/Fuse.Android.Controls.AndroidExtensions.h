// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Android\0.18.8\Controls\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.h>
namespace g{namespace Android{namespace android{namespace graphics{namespace drawable{struct Drawable;}}}}}
namespace g{namespace Fuse{namespace Android{namespace Controls{struct AndroidExtensions;}}}}
namespace g{namespace Fuse{namespace Drawing{struct LinearGradient;}}}

namespace g{
namespace Fuse{
namespace Android{
namespace Controls{

// internal static extern class AndroidExtensions :506
// {
uClassType* AndroidExtensions_typeof();
void AndroidExtensions__ToDrawable_fn(::g::Fuse::Drawing::LinearGradient* linearGradient, ::g::Android::android::graphics::drawable::Drawable** __retval);

struct AndroidExtensions : uObject
{
    static ::g::Android::android::graphics::drawable::Drawable* ToDrawable(::g::Fuse::Drawing::LinearGradient* linearGradient);
};
// }

}}}} // ::g::Fuse::Android::Controls
