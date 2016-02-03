// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Elements\0.11.3\Resources\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_FUSE_RESOURCES_FILE_IMAGE_SOURCE_H__
#define __APP_FUSE_RESOURCES_FILE_IMAGE_SOURCE_H__

#include <app/Fuse.Resources.ImageSource.h>
#include <Uno.h>
namespace app { namespace Fuse { namespace Resources { struct MemoryPolicy; } } }
namespace app { namespace Fuse { namespace Resources { struct ProxyImageSource; } } }
namespace app { namespace Uno { namespace Graphics { struct Texture2D; } } }
namespace app { namespace Uno { namespace UX { struct FileSource; } } }
namespace app { namespace Uno { struct Float2; } }
namespace app { namespace Uno { struct Int2; } }

namespace app {
namespace Fuse {
namespace Resources {

struct FileImageSource;

struct FileImageSource__uType : ::app::Fuse::Resources::ImageSource__uType
{
};

FileImageSource__uType* FileImageSource__typeof();

void FileImageSource___ObjInit_1(FileImageSource* __this);
void FileImageSource___ObjInit_2(FileImageSource* __this, ::app::Uno::UX::FileSource* file);
void FileImageSource__CheckPolicy(FileImageSource* __this);
float FileImageSource__get_Density(FileImageSource* __this);
::app::Uno::UX::FileSource* FileImageSource__get_File(FileImageSource* __this);
::app::Uno::Int2 FileImageSource__get_PixelSize(FileImageSource* __this);
::app::Fuse::Resources::MemoryPolicy* FileImageSource__get_Policy(FileImageSource* __this);
::app::Uno::Float2 FileImageSource__get_Size(FileImageSource* __this);
float FileImageSource__get_SizeDensity(FileImageSource* __this);
int FileImageSource__get_State(FileImageSource* __this);
::app::Uno::Graphics::Texture2D* FileImageSource__GetTexture(FileImageSource* __this);
FileImageSource* FileImageSource__New_1(::uStatic* __this);
FileImageSource* FileImageSource__New_2(::uStatic* __this, ::app::Uno::UX::FileSource* file);
void FileImageSource__OnPinChanged(FileImageSource* __this);
void FileImageSource__Reload(FileImageSource* __this);
void FileImageSource__set_DefaultPolicy(FileImageSource* __this, ::app::Fuse::Resources::MemoryPolicy* value);
void FileImageSource__set_Density(FileImageSource* __this, float value);
void FileImageSource__set_File(FileImageSource* __this, ::app::Uno::UX::FileSource* value);
void FileImageSource__set_Policy(FileImageSource* __this, ::app::Fuse::Resources::MemoryPolicy* value);

struct FileImageSource : ::app::Fuse::Resources::ImageSource
{
    ::uStrong< ::app::Fuse::Resources::ProxyImageSource*> _proxy;

    void _ObjInit_1() { FileImageSource___ObjInit_1(this); }
    void _ObjInit_2(::app::Uno::UX::FileSource* file) { FileImageSource___ObjInit_2(this, file); }
    void CheckPolicy() { FileImageSource__CheckPolicy(this); }
    float Density() { return FileImageSource__get_Density(this); }
    ::app::Uno::UX::FileSource* File() { return FileImageSource__get_File(this); }
    ::app::Fuse::Resources::MemoryPolicy* Policy() { return FileImageSource__get_Policy(this); }
    void DefaultPolicy(::app::Fuse::Resources::MemoryPolicy* value) { FileImageSource__set_DefaultPolicy(this, value); }
    void Density(float value) { FileImageSource__set_Density(this, value); }
    void File(::app::Uno::UX::FileSource* value) { FileImageSource__set_File(this, value); }
    void Policy(::app::Fuse::Resources::MemoryPolicy* value) { FileImageSource__set_Policy(this, value); }
};

}}}


#endif
