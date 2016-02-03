// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Elements\0.11.3\Resources\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_FUSE_RESOURCES_FILE_IMAGE_SOURCE_IMPL_H__
#define __APP_FUSE_RESOURCES_FILE_IMAGE_SOURCE_IMPL_H__

#include <app/Fuse.Resources.IMemoryResource.h>
#include <app/Fuse.Resources.LoadingImageSource.h>
#include <Uno.h>
namespace app { namespace Uno { namespace UX { struct FileSource; } } }

namespace app {
namespace Fuse {
namespace Resources {

struct FileImageSourceImpl;

struct FileImageSourceImpl__uType : ::app::Fuse::Resources::LoadingImageSource__uType
{
};

FileImageSourceImpl__uType* FileImageSourceImpl__typeof();

void FileImageSourceImpl__Finalize(FileImageSourceImpl* __this);
void FileImageSourceImpl___ObjInit_2(FileImageSourceImpl* __this, ::app::Uno::UX::FileSource* file);
void FileImageSourceImpl__AttemptLoad(FileImageSourceImpl* __this);
::app::Uno::UX::FileSource* FileImageSourceImpl__get_File(FileImageSourceImpl* __this);
FileImageSourceImpl* FileImageSourceImpl__New_1(::uStatic* __this, ::app::Uno::UX::FileSource* file);
void FileImageSourceImpl__OnDataChanged(FileImageSourceImpl* __this, ::uObject* s, ::uObject* a);
void FileImageSourceImpl__SyncLoad(FileImageSourceImpl* __this);

struct FileImageSourceImpl : ::app::Fuse::Resources::LoadingImageSource
{
    ::uStrong< ::app::Uno::UX::FileSource*> _file;

    void _ObjInit_2(::app::Uno::UX::FileSource* file) { FileImageSourceImpl___ObjInit_2(this, file); }
    ::app::Uno::UX::FileSource* File() { return FileImageSourceImpl__get_File(this); }
    void OnDataChanged(::uObject* s, ::uObject* a) { FileImageSourceImpl__OnDataChanged(this, s, a); }
    void SyncLoad() { FileImageSourceImpl__SyncLoad(this); }
};

}}}


#endif
