// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Controls\0.18.8\WebView\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Triggers.Actions.WebViewNavAction.h>
namespace g{namespace Fuse{namespace Triggers{namespace Actions{struct LoadHtml;}}}}

namespace g{
namespace Fuse{
namespace Triggers{
namespace Actions{

// public sealed class LoadHtml :609
// {
::g::Fuse::Triggers::Actions::WebViewNavAction_type* LoadHtml_typeof();
void LoadHtml__ctor_2_fn(LoadHtml* __this);
void LoadHtml__get_BaseUrl_fn(LoadHtml* __this, uString** __retval);
void LoadHtml__set_BaseUrl_fn(LoadHtml* __this, uString* value);
void LoadHtml__Execute_fn(LoadHtml* __this, uObject* webview);
void LoadHtml__New1_fn(LoadHtml** __retval);
void LoadHtml__get_Source_fn(LoadHtml* __this, uString** __retval);
void LoadHtml__set_Source_fn(LoadHtml* __this, uString* value);

struct LoadHtml : ::g::Fuse::Triggers::Actions::WebViewNavAction
{
    uStrong<uString*> _BaseUrl;
    uStrong<uString*> _Source;

    void ctor_2();
    uString* BaseUrl();
    void BaseUrl(uString* value);
    uString* Source();
    void Source(uString* value);
    static LoadHtml* New1();
};
// }

}}}} // ::g::Fuse::Triggers::Actions
