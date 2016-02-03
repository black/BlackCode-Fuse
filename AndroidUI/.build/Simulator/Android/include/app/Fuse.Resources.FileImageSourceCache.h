// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Elements\0.11.3\Resources\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_FUSE_RESOURCES_FILE_IMAGE_SOURCE_CACHE_H__
#define __APP_FUSE_RESOURCES_FILE_IMAGE_SOURCE_CACHE_H__

#include <Uno.h>
namespace app { namespace Fuse { namespace Resources { struct FileImageSourceImpl; } } }
namespace app { namespace Uno { namespace Collections { struct Dictionary__Uno_UX_FileSource__Uno_WeakReference_Fuse_Resources_FileImageSourceImpl_; } } }
namespace app { namespace Uno { namespace UX { struct FileSource; } } }

namespace app {
namespace Fuse {
namespace Resources {

extern ::uStaticStrong< ::app::Uno::Collections::Dictionary__Uno_UX_FileSource__Uno_WeakReference_Fuse_Resources_FileImageSourceImpl_*> FileImageSourceCache___cache;

struct FileImageSourceCache__uType : ::uClassType
{
};

FileImageSourceCache__uType* FileImageSourceCache__typeof();

void FileImageSourceCache___TypeInit(::uStatic* __this);
::app::Fuse::Resources::FileImageSourceImpl* FileImageSourceCache__GetFileSource(::uStatic* __this, ::app::Uno::UX::FileSource* file);

}}}


#endif
