// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.iOS\0.19.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.Object.h>
#include <Uno.UX.ITemplate.h>
namespace g{namespace Fuse{namespace iOS{struct NativeTemplate;}}}
namespace g{namespace Fuse{struct Node;}}

namespace g{
namespace Fuse{
namespace iOS{

// internal sealed class NativeTemplate :781
// {
struct NativeTemplate_type : uType
{
    ::g::Uno::UX::ITemplate interface0;
};

NativeTemplate_type* NativeTemplate_typeof();
void NativeTemplate__ctor__fn(NativeTemplate* __this);
void NativeTemplate__Apply_fn(NativeTemplate* __this, uObject* obj, bool* __retval);
void NativeTemplate__HaveGraphicsViewAncestor_fn(NativeTemplate* __this, ::g::Fuse::Node* node, bool* __retval);
void NativeTemplate__New1_fn(NativeTemplate** __retval);

struct NativeTemplate : uObject
{
    void ctor_();
    bool Apply(uObject* obj);
    bool HaveGraphicsViewAncestor(::g::Fuse::Node* node);
    static NativeTemplate* New1();
};
// }

}}} // ::g::Fuse::iOS
