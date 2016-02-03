// This file was generated based on 'C:\Users\Kuro\Documents\Fuse\Welcome\.build\Simulator\Android\Preamble\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.Object.h>
#include <Uno.UX.ITemplate.h>
namespace g{namespace Outracks{namespace Simulator{namespace Runtime{struct UxTemplate;}}}}

namespace g{
namespace Outracks{
namespace Simulator{
namespace Runtime{

// public sealed class UxTemplate :89
// {
struct UxTemplate_type : uType
{
    ::g::Uno::UX::ITemplate interface0;
};

UxTemplate_type* UxTemplate_typeof();
void UxTemplate__ctor__fn(UxTemplate* __this, uDelegate* matches, uDelegate* applyMethod);
void UxTemplate__Apply_fn(UxTemplate* __this, uObject* obj, bool* __retval);
void UxTemplate__New1_fn(uDelegate* matches, uDelegate* applyMethod, UxTemplate** __retval);

struct UxTemplate : uObject
{
    uStrong<uDelegate*> _apply;
    uStrong<uDelegate*> _matches;

    void ctor_(uDelegate* matches, uDelegate* applyMethod);
    bool Apply(uObject* obj);
    static UxTemplate* New1(uDelegate* matches, uDelegate* applyMethod);
};
// }

}}}} // ::g::Outracks::Simulator::Runtime
