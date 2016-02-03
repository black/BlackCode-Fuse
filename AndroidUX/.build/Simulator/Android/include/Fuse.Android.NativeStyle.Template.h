// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Android\0.18.8\.cache\GeneratedCode\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Controls.GraphicsView.h>
#include <Uno.UX.ITemplate.h>
#include <Uno.UX.Template-1.h>
namespace g{namespace Fuse{namespace Android{struct NativeStyle;}}}
namespace g{namespace Fuse{namespace Android{struct NativeStyle__Template;}}}

namespace g{
namespace Fuse{
namespace Android{

// public partial sealed class NativeStyle.Template :7
// {
::g::Uno::UX::Template_type* NativeStyle__Template_typeof();
void NativeStyle__Template__ctor_1_fn(NativeStyle__Template* __this, ::g::Fuse::Android::NativeStyle* parent);
void NativeStyle__Template__New1_fn(::g::Fuse::Android::NativeStyle* parent, NativeStyle__Template** __retval);
void NativeStyle__Template__OnApply_fn(NativeStyle__Template* __this, ::g::Fuse::Controls::GraphicsView* self);

struct NativeStyle__Template : ::g::Uno::UX::Template
{
    uStrong< ::g::Fuse::Android::NativeStyle*> __parent1;

    void ctor_1(::g::Fuse::Android::NativeStyle* parent);
    static NativeStyle__Template* New1(::g::Fuse::Android::NativeStyle* parent);
};
// }

}}} // ::g::Fuse::Android
