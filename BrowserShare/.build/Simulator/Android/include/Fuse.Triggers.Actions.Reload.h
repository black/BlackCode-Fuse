// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Controls\0.19.3\WebView\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Triggers.Actions.WebViewNavAction.h>
namespace g{namespace Fuse{namespace Triggers{namespace Actions{struct Reload;}}}}

namespace g{
namespace Fuse{
namespace Triggers{
namespace Actions{

// public sealed class Reload :583
// {
::g::Fuse::Triggers::Actions::WebViewNavAction_type* Reload_typeof();
void Reload__ctor_2_fn(Reload* __this);
void Reload__Execute_fn(Reload* __this, uObject* webview);
void Reload__New1_fn(Reload** __retval);

struct Reload : ::g::Fuse::Triggers::Actions::WebViewNavAction
{
    void ctor_2();
    static Reload* New1();
};
// }

}}}} // ::g::Fuse::Triggers::Actions
