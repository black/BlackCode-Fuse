// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Video\0.18.8\Graphics\Android\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Video.VideoLoader.h>
namespace g{namespace Fuse{namespace Video{namespace Graphics{namespace Android{struct AndroidVideoLoader;}}}}}
namespace g{namespace Fuse{namespace Video{namespace Graphics{namespace Android{struct VideoPlayer;}}}}}
namespace g{namespace Uno{namespace UX{struct FileSource;}}}
namespace g{namespace Uno{struct BundleFile;}}
namespace g{namespace Uno{struct EventArgs;}}

namespace g{
namespace Fuse{
namespace Video{
namespace Graphics{
namespace Android{

// internal sealed extern class AndroidVideoLoader :349
// {
::g::Fuse::Video::VideoLoader_type* AndroidVideoLoader_typeof();
void AndroidVideoLoader__ctor_1_fn(AndroidVideoLoader* __this, uDelegate* loadedHandler);
void AndroidVideoLoader__Dispose_fn(AndroidVideoLoader* __this);
void AndroidVideoLoader__HookEvents_fn(AndroidVideoLoader* __this);
void AndroidVideoLoader__LoadBundleFile_fn(AndroidVideoLoader* __this, ::g::Uno::BundleFile* file, uDelegate* loadedHandler);
void AndroidVideoLoader__LoadInternal_fn(AndroidVideoLoader* __this, uString* url, uDelegate* loadedHandler);
void AndroidVideoLoader__LoadInternal1_fn(AndroidVideoLoader* __this, ::g::Uno::UX::FileSource* fileSource, uDelegate* loadedHandler);
void AndroidVideoLoader__New1_fn(uDelegate* loadedHandler, AndroidVideoLoader** __retval);
void AndroidVideoLoader__OnError_fn(AndroidVideoLoader* __this, uObject* sender, uString* msg);
void AndroidVideoLoader__OnPrepared_fn(AndroidVideoLoader* __this, uObject* sender, ::g::Uno::EventArgs* args);
void AndroidVideoLoader__UnhookEvents_fn(AndroidVideoLoader* __this);

struct AndroidVideoLoader : ::g::Fuse::Video::VideoLoader
{
    uStrong<uDelegate*> _loadedHandler1;
    uStrong< ::g::Fuse::Video::Graphics::Android::VideoPlayer*> _videoPlayer;

    void ctor_1(uDelegate* loadedHandler);
    void HookEvents();
    void LoadBundleFile(::g::Uno::BundleFile* file, uDelegate* loadedHandler);
    void OnError(uObject* sender, uString* msg);
    void OnPrepared(uObject* sender, ::g::Uno::EventArgs* args);
    void UnhookEvents();
    static AndroidVideoLoader* New1(uDelegate* loadedHandler);
};
// }

}}}}} // ::g::Fuse::Video::Graphics::Android
