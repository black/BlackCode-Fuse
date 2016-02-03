// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Controls\0.19.3\WebView\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Triggers.Trigger.h>
namespace g{namespace Fuse{namespace Triggers{struct PageLoaded;}}}
namespace g{namespace Fuse{struct Node;}}

namespace g{
namespace Fuse{
namespace Triggers{

// public sealed class PageLoaded :485
// {
::g::Fuse::Triggers::Trigger_type* PageLoaded_typeof();
void PageLoaded__ctor_2_fn(PageLoaded* __this);
void PageLoaded__New1_fn(PageLoaded** __retval);
void PageLoaded__OnPageLoaded_fn(PageLoaded* __this, uObject* s, uObject* a);
void PageLoaded__OnRooted_fn(PageLoaded* __this, ::g::Fuse::Node* parentNode);
void PageLoaded__OnUnrooted_fn(PageLoaded* __this, ::g::Fuse::Node* parentNode);

struct PageLoaded : ::g::Fuse::Triggers::Trigger
{
    uStrong<uObject*> _webView;

    void ctor_2();
    void OnPageLoaded(uObject* s, uObject* a);
    static PageLoaded* New1();
};
// }

}}} // ::g::Fuse::Triggers
