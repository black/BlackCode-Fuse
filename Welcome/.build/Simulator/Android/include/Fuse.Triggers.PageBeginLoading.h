// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Controls\0.19.3\WebView\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Triggers.Trigger.h>
namespace g{namespace Fuse{namespace Triggers{struct PageBeginLoading;}}}
namespace g{namespace Fuse{struct Node;}}

namespace g{
namespace Fuse{
namespace Triggers{

// public sealed class PageBeginLoading :525
// {
::g::Fuse::Triggers::Trigger_type* PageBeginLoading_typeof();
void PageBeginLoading__ctor_2_fn(PageBeginLoading* __this);
void PageBeginLoading__New1_fn(PageBeginLoading** __retval);
void PageBeginLoading__OnPageBeginLoading_fn(PageBeginLoading* __this, uObject* s, uObject* a);
void PageBeginLoading__OnRooted_fn(PageBeginLoading* __this, ::g::Fuse::Node* parentNode);
void PageBeginLoading__OnUnrooted_fn(PageBeginLoading* __this, ::g::Fuse::Node* parentNode);

struct PageBeginLoading : ::g::Fuse::Triggers::Trigger
{
    uStrong<uObject*> _webView;

    void ctor_2();
    void OnPageBeginLoading(uObject* s, uObject* a);
    static PageBeginLoading* New1();
};
// }

}}} // ::g::Fuse::Triggers
