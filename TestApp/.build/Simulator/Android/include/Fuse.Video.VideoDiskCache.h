// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Video\0.18.8\Graphics\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.h>
namespace g{namespace Fuse{namespace Video{struct VideoDiskCache;}}}
namespace g{namespace Uno{namespace Collections{struct Dictionary;}}}
namespace g{namespace Uno{namespace UX{struct FileSource;}}}

namespace g{
namespace Fuse{
namespace Video{

// internal static class VideoDiskCache :395
// {
uClassType* VideoDiskCache_typeof();
void VideoDiskCache__GetFileExtension_fn(uString* fileName, uString** __retval);
void VideoDiskCache__GetFilePath_fn(::g::Uno::UX::FileSource* fileSource, uString** __retval);

struct VideoDiskCache : uObject
{
    static int _fileCount_;
    static int& _fileCount() { return VideoDiskCache_typeof()->Init(), _fileCount_; }
    static uSStrong< ::g::Uno::Collections::Dictionary*> _files_;
    static uSStrong< ::g::Uno::Collections::Dictionary*>& _files() { return VideoDiskCache_typeof()->Init(), _files_; }

    static uString* GetFileExtension(uString* fileName);
    static uString* GetFilePath(::g::Uno::UX::FileSource* fileSource);
};
// }

}}} // ::g::Fuse::Video
