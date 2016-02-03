// This file was generated based on 'C:\ProgramData\Uno\Packages\FuseCore\0.11.3\Resources\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_FUSE_RESOURCES_FILE_RESOURCE_H__
#define __APP_FUSE_RESOURCES_FILE_RESOURCE_H__

#include <app/Uno.UX.FileSource.h>
#include <Uno.h>
namespace app { namespace Uno { namespace IO { struct Stream; } } }

namespace app {
namespace Fuse {
namespace Resources {

struct FileResource;

struct FileResource__uType : ::app::Uno::UX::FileSource__uType
{
};

FileResource__uType* FileResource__typeof();

void FileResource___ObjInit_1(FileResource* __this, ::app::Uno::UX::FileSource* file);
FileResource* FileResource__New_1(::uStatic* __this, ::app::Uno::UX::FileSource* file);
::app::Uno::IO::Stream* FileResource__OpenRead(FileResource* __this);

struct FileResource : ::app::Uno::UX::FileSource
{
    ::uStrong< ::app::Uno::UX::FileSource*> _file;

    void _ObjInit_1(::app::Uno::UX::FileSource* file) { FileResource___ObjInit_1(this, file); }
};

}}}


#endif
