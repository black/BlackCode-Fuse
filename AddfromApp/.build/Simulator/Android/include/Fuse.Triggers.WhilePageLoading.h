// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Controls\0.19.3\WebView\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Triggers.WhileTrigger.h>
namespace g{namespace Fuse{namespace Controls{struct WebView;}}}
namespace g{namespace Fuse{namespace Triggers{struct WhilePageLoading;}}}
namespace g{namespace Fuse{struct Node;}}

namespace g{
namespace Fuse{
namespace Triggers{

// public sealed class WhilePageLoading :444
// {
::g::Fuse::Triggers::Trigger_type* WhilePageLoading_typeof();
void WhilePageLoading__ctor_3_fn(WhilePageLoading* __this);
void WhilePageLoading__New1_fn(WhilePageLoading** __retval);
void WhilePageLoading__OnProgressChanged1_fn(WhilePageLoading* __this, uObject* s, uObject* a);
void WhilePageLoading__OnRooted_fn(WhilePageLoading* __this, ::g::Fuse::Node* parentNode);
void WhilePageLoading__OnUnrooted_fn(WhilePageLoading* __this, ::g::Fuse::Node* parentNode);

struct WhilePageLoading : ::g::Fuse::Triggers::WhileTrigger
{
    uStrong< ::g::Fuse::Controls::WebView*> _webView;

    void ctor_3();
    void OnProgressChanged1(uObject* s, uObject* a);
    static WhilePageLoading* New1();
};
// }

}}} // ::g::Fuse::Triggers
