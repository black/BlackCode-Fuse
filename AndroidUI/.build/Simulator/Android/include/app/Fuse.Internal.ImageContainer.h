// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Elements\0.11.3\Internal\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_FUSE_INTERNAL_IMAGE_CONTAINER_H__
#define __APP_FUSE_INTERNAL_IMAGE_CONTAINER_H__

#include <app/Uno.Object.h>
#include <Uno.h>
namespace app { namespace Fuse { namespace Internal { struct SizingContainer; } } }
namespace app { namespace Fuse { namespace Resources { struct ImageSource; } } }
namespace app { namespace Fuse { namespace Resources { struct MemoryPolicy; } } }
namespace app { namespace Uno { namespace Collections { struct ObservableList__Uno_UX_FileSource; } } }
namespace app { namespace Uno { namespace Graphics { struct Texture2D; } } }
namespace app { namespace Uno { namespace UX { struct FileSource; } } }

namespace app {
namespace Fuse {
namespace Internal {

struct ImageContainer;

struct ImageContainer__uType : ::uClassType
{
};

ImageContainer__uType* ImageContainer__typeof();

void ImageContainer___ObjInit(ImageContainer* __this, ::uObject* owner);
void ImageContainer__add_ParamChanged(ImageContainer* __this, ::uDelegate* value);
void ImageContainer__add_SourceChanged(ImageContainer* __this, ::uDelegate* value);
void ImageContainer__CheckPinning(ImageContainer* __this);
void ImageContainer__CreateMultiDensitySource(ImageContainer* __this);
int ImageContainer__get_ContentAlignment(ImageContainer* __this);
float ImageContainer__get_Density(ImageContainer* __this);
::app::Uno::UX::FileSource* ImageContainer__get_File(ImageContainer* __this);
::uObject* ImageContainer__get_Files(ImageContainer* __this);
bool ImageContainer__get_IsRooted(ImageContainer* __this);
bool ImageContainer__get_IsVisible(ImageContainer* __this);
::app::Fuse::Resources::MemoryPolicy* ImageContainer__get_MemoryPolicy(ImageContainer* __this);
int ImageContainer__get_ResampleMode(ImageContainer* __this);
::app::Fuse::Resources::ImageSource* ImageContainer__get_Source(ImageContainer* __this);
int ImageContainer__get_StretchDirection(ImageContainer* __this);
int ImageContainer__get_StretchMode(ImageContainer* __this);
int ImageContainer__get_StretchSizing(ImageContainer* __this);
::uString* ImageContainer__get_Url(ImageContainer* __this);
::app::Uno::Graphics::Texture2D* ImageContainer__GetTexture(ImageContainer* __this);
ImageContainer* ImageContainer__New_1(::uStatic* __this, ::uObject* owner);
void ImageContainer__OnFileAdded(ImageContainer* __this, ::app::Uno::UX::FileSource* file);
void ImageContainer__OnFileRemoved(ImageContainer* __this, ::app::Uno::UX::FileSource* file);
void ImageContainer__OnParamChanged(ImageContainer* __this);
void ImageContainer__OnSizingChanged(ImageContainer* __this);
void ImageContainer__OnSourceChanged(ImageContainer* __this, ::uObject* s, ::uObject* a);
void ImageContainer__ReapplyOptions(ImageContainer* __this, ::app::Fuse::Resources::ImageSource* src);
void ImageContainer__ReleaseSource(ImageContainer* __this);
void ImageContainer__remove_ParamChanged(ImageContainer* __this, ::uDelegate* value);
void ImageContainer__remove_SourceChanged(ImageContainer* __this, ::uDelegate* value);
void ImageContainer__set_ContentAlignment(ImageContainer* __this, int value);
void ImageContainer__set_Density(ImageContainer* __this, float value);
void ImageContainer__set_File(ImageContainer* __this, ::app::Uno::UX::FileSource* value);
void ImageContainer__set_IsRooted(ImageContainer* __this, bool value);
void ImageContainer__set_IsVisible(ImageContainer* __this, bool value);
void ImageContainer__set_MemoryPolicy(ImageContainer* __this, ::app::Fuse::Resources::MemoryPolicy* value);
void ImageContainer__set_ResampleMode(ImageContainer* __this, int value);
void ImageContainer__set_Source(ImageContainer* __this, ::app::Fuse::Resources::ImageSource* value);
void ImageContainer__set_StretchDirection(ImageContainer* __this, int value);
void ImageContainer__set_StretchMode(ImageContainer* __this, int value);
void ImageContainer__set_StretchSizing(ImageContainer* __this, int value);
void ImageContainer__set_Url(ImageContainer* __this, ::uString* value);

struct ImageContainer : ::uObject
{
    ::uWeak< ::uObject*> _owner;
    ::uStrong< ::app::Fuse::Internal::SizingContainer*> Sizing;
    float _density;
    ::uStrong< ::app::Fuse::Resources::MemoryPolicy*> _memoryPolicy;
    ::uStrong< ::app::Uno::Collections::ObservableList__Uno_UX_FileSource*> _files;
    bool _sourcePinned;
    ::uStrong< ::app::Fuse::Resources::ImageSource*> _source;
    bool _isRooted;
    int _resampleMode;
    bool _isVisible;
    ::uStrong< ::uDelegate*> SourceChanged;
    ::uStrong< ::uDelegate*> ParamChanged;

    void _ObjInit(::uObject* owner) { ImageContainer___ObjInit(this, owner); }
    void add_ParamChanged(::uDelegate* value) { ImageContainer__add_ParamChanged(this, value); }
    void add_SourceChanged(::uDelegate* value) { ImageContainer__add_SourceChanged(this, value); }
    void CheckPinning() { ImageContainer__CheckPinning(this); }
    void CreateMultiDensitySource() { ImageContainer__CreateMultiDensitySource(this); }
    int ContentAlignment() { return ImageContainer__get_ContentAlignment(this); }
    float Density() { return ImageContainer__get_Density(this); }
    ::app::Uno::UX::FileSource* File() { return ImageContainer__get_File(this); }
    ::uObject* Files() { return ImageContainer__get_Files(this); }
    bool IsRooted() { return ImageContainer__get_IsRooted(this); }
    bool IsVisible() { return ImageContainer__get_IsVisible(this); }
    ::app::Fuse::Resources::MemoryPolicy* MemoryPolicy() { return ImageContainer__get_MemoryPolicy(this); }
    int ResampleMode() { return ImageContainer__get_ResampleMode(this); }
    ::app::Fuse::Resources::ImageSource* Source() { return ImageContainer__get_Source(this); }
    int StretchDirection() { return ImageContainer__get_StretchDirection(this); }
    int StretchMode() { return ImageContainer__get_StretchMode(this); }
    int StretchSizing() { return ImageContainer__get_StretchSizing(this); }
    ::uString* Url() { return ImageContainer__get_Url(this); }
    ::app::Uno::Graphics::Texture2D* GetTexture() { return ImageContainer__GetTexture(this); }
    void OnFileAdded(::app::Uno::UX::FileSource* file) { ImageContainer__OnFileAdded(this, file); }
    void OnFileRemoved(::app::Uno::UX::FileSource* file) { ImageContainer__OnFileRemoved(this, file); }
    void OnParamChanged() { ImageContainer__OnParamChanged(this); }
    void OnSizingChanged() { ImageContainer__OnSizingChanged(this); }
    void OnSourceChanged(::uObject* s, ::uObject* a) { ImageContainer__OnSourceChanged(this, s, a); }
    void ReapplyOptions(::app::Fuse::Resources::ImageSource* src) { ImageContainer__ReapplyOptions(this, src); }
    void ReleaseSource() { ImageContainer__ReleaseSource(this); }
    void remove_ParamChanged(::uDelegate* value) { ImageContainer__remove_ParamChanged(this, value); }
    void remove_SourceChanged(::uDelegate* value) { ImageContainer__remove_SourceChanged(this, value); }
    void ContentAlignment(int value) { ImageContainer__set_ContentAlignment(this, value); }
    void Density(float value) { ImageContainer__set_Density(this, value); }
    void File(::app::Uno::UX::FileSource* value) { ImageContainer__set_File(this, value); }
    void IsRooted(bool value) { ImageContainer__set_IsRooted(this, value); }
    void IsVisible(bool value) { ImageContainer__set_IsVisible(this, value); }
    void MemoryPolicy(::app::Fuse::Resources::MemoryPolicy* value) { ImageContainer__set_MemoryPolicy(this, value); }
    void ResampleMode(int value) { ImageContainer__set_ResampleMode(this, value); }
    void Source(::app::Fuse::Resources::ImageSource* value) { ImageContainer__set_Source(this, value); }
    void StretchDirection(int value) { ImageContainer__set_StretchDirection(this, value); }
    void StretchMode(int value) { ImageContainer__set_StretchMode(this, value); }
    void StretchSizing(int value) { ImageContainer__set_StretchSizing(this, value); }
    void Url(::uString* value) { ImageContainer__set_Url(this, value); }
};

}}}


#endif
