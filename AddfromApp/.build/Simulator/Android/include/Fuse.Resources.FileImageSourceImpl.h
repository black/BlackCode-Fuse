// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Elements\0.19.3\Resources\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Resources.IMemoryResource.h>
#include <Fuse.Resources.LoadingImageSource.h>
namespace g{namespace Fuse{namespace Resources{struct FileImageSourceImpl;}}}
namespace g{namespace Uno{namespace UX{struct FileSource;}}}

namespace g{
namespace Fuse{
namespace Resources{

// internal sealed class FileImageSourceImpl :103
// {
::g::Fuse::Resources::LoadingImageSource_type* FileImageSourceImpl_typeof();
void FileImageSourceImpl__ctor_2_fn(FileImageSourceImpl* __this, ::g::Uno::UX::FileSource* file);
void FileImageSourceImpl__AttemptLoad_fn(FileImageSourceImpl* __this);
void FileImageSourceImpl__get_File_fn(FileImageSourceImpl* __this, ::g::Uno::UX::FileSource** __retval);
void FileImageSourceImpl__New1_fn(::g::Uno::UX::FileSource* file, FileImageSourceImpl** __retval);
void FileImageSourceImpl__OnDataChanged_fn(FileImageSourceImpl* __this, uObject* s, uObject* a);
void FileImageSourceImpl__SyncLoad_fn(FileImageSourceImpl* __this);

struct FileImageSourceImpl : ::g::Fuse::Resources::LoadingImageSource
{
    uStrong< ::g::Uno::UX::FileSource*> _file;

    void ctor_2(::g::Uno::UX::FileSource* file);
    ::g::Uno::UX::FileSource* File();
    void OnDataChanged(uObject* s, uObject* a);
    void SyncLoad();
    static FileImageSourceImpl* New1(::g::Uno::UX::FileSource* file);
};
// }

}}} // ::g::Fuse::Resources
