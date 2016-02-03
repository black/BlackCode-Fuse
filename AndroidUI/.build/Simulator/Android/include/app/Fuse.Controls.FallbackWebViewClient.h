// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Controls\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_FUSE_CONTROLS_FALLBACK_WEB_VIEW_CLIENT_H__
#define __APP_FUSE_CONTROLS_FALLBACK_WEB_VIEW_CLIENT_H__

#include <app/Fuse.Controls.IWebView.h>
#include <app/Fuse.Navigation.IWebViewNavgation.h>
#include <app/Fuse.Triggers.IProgress.h>
#include <app/Uno.Object.h>
#include <Uno.h>
namespace app { namespace Uno { namespace UX { struct FileSource; } } }

namespace app {
namespace Fuse {
namespace Controls {

struct FallbackWebViewClient;

struct FallbackWebViewClient__uType : ::uClassType
{
    ::app::Fuse::Controls::IWebView __interface_0;
    ::app::Fuse::Triggers::IProgress __interface_1;
    ::app::Fuse::Navigation::IWebViewNavgation __interface_2;
};

FallbackWebViewClient__uType* FallbackWebViewClient__typeof();

void FallbackWebViewClient___ObjInit(FallbackWebViewClient* __this);
void FallbackWebViewClient__add_ProgressChanged(FallbackWebViewClient* __this, ::uDelegate* value);
bool FallbackWebViewClient__get_CanGoBack(FallbackWebViewClient* __this);
bool FallbackWebViewClient__get_CanGoForward(FallbackWebViewClient* __this);
::uString* FallbackWebViewClient__get_DocumentTitle(FallbackWebViewClient* __this);
::app::Uno::UX::FileSource* FallbackWebViewClient__get_File(FallbackWebViewClient* __this);
double FallbackWebViewClient__get_Progress(FallbackWebViewClient* __this);
::uString* FallbackWebViewClient__get_Url(FallbackWebViewClient* __this);
void FallbackWebViewClient__GoBack(FallbackWebViewClient* __this);
void FallbackWebViewClient__GoForward(FallbackWebViewClient* __this);
void FallbackWebViewClient__LoadUrl(FallbackWebViewClient* __this, ::uString* url);
FallbackWebViewClient* FallbackWebViewClient__New_1(::uStatic* __this);
void FallbackWebViewClient__Reload(FallbackWebViewClient* __this);
void FallbackWebViewClient__remove_ProgressChanged(FallbackWebViewClient* __this, ::uDelegate* value);
void FallbackWebViewClient__set_File(FallbackWebViewClient* __this, ::app::Uno::UX::FileSource* value);
void FallbackWebViewClient__set_Url(FallbackWebViewClient* __this, ::uString* value);
void FallbackWebViewClient__Stop(FallbackWebViewClient* __this);

struct FallbackWebViewClient : ::uObject
{
    ::uStrong< ::uDelegate*> ProgressChanged;
    ::uStrong< ::app::Uno::UX::FileSource*> _File;
    ::uStrong< ::uString*> _Url;

    void _ObjInit() { FallbackWebViewClient___ObjInit(this); }
    void add_ProgressChanged(::uDelegate* value) { FallbackWebViewClient__add_ProgressChanged(this, value); }
    bool CanGoBack() { return FallbackWebViewClient__get_CanGoBack(this); }
    bool CanGoForward() { return FallbackWebViewClient__get_CanGoForward(this); }
    ::uString* DocumentTitle() { return FallbackWebViewClient__get_DocumentTitle(this); }
    ::app::Uno::UX::FileSource* File() { return FallbackWebViewClient__get_File(this); }
    double Progress() { return FallbackWebViewClient__get_Progress(this); }
    ::uString* Url() { return FallbackWebViewClient__get_Url(this); }
    void GoBack() { FallbackWebViewClient__GoBack(this); }
    void GoForward() { FallbackWebViewClient__GoForward(this); }
    void LoadUrl(::uString* url) { FallbackWebViewClient__LoadUrl(this, url); }
    void Reload() { FallbackWebViewClient__Reload(this); }
    void remove_ProgressChanged(::uDelegate* value) { FallbackWebViewClient__remove_ProgressChanged(this, value); }
    void File(::app::Uno::UX::FileSource* value) { FallbackWebViewClient__set_File(this, value); }
    void Url(::uString* value) { FallbackWebViewClient__set_Url(this, value); }
    void Stop() { FallbackWebViewClient__Stop(this); }
};

}}}


#endif
