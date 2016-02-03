// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Desktop\0.18.8\.cache\GeneratedCode\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.Object.h>
#include <Uno.UX.IFactory.h>
namespace g{namespace Fuse{namespace Desktop{struct NativeStyle__Template1;}}}
namespace g{namespace Fuse{namespace Desktop{struct NativeStyle__Template1__Factory;}}}

namespace g{
namespace Fuse{
namespace Desktop{

// public partial sealed class NativeStyle.Template1.Factory :30
// {
struct NativeStyle__Template1__Factory_type : uType
{
    ::g::Uno::UX::IFactory interface0;
};

NativeStyle__Template1__Factory_type* NativeStyle__Template1__Factory_typeof();
void NativeStyle__Template1__Factory__ctor__fn(NativeStyle__Template1__Factory* __this, ::g::Fuse::Desktop::NativeStyle__Template1* parent);
void NativeStyle__Template1__Factory__New1_fn(NativeStyle__Template1__Factory* __this, uObject** __retval);
void NativeStyle__Template1__Factory__New2_fn(::g::Fuse::Desktop::NativeStyle__Template1* parent, NativeStyle__Template1__Factory** __retval);

struct NativeStyle__Template1__Factory : uObject
{
    uStrong< ::g::Fuse::Desktop::NativeStyle__Template1*> __parent1;

    void ctor_(::g::Fuse::Desktop::NativeStyle__Template1* parent);
    uObject* New1();
    static NativeStyle__Template1__Factory* New2(::g::Fuse::Desktop::NativeStyle__Template1* parent);
};
// }

}}} // ::g::Fuse::Desktop
