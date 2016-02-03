// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Elements\0.11.3\Resources\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_FUSE_RESOURCES_MULTI_DENSITY_IMAGE_SOURCE_H__
#define __APP_FUSE_RESOURCES_MULTI_DENSITY_IMAGE_SOURCE_H__

#include <app/Fuse.Resources.ImageSource.h>
#include <Uno.h>
namespace app { namespace Fuse { namespace Resources { struct MemoryPolicy; } } }
namespace app { namespace Fuse { namespace Resources { struct ProxyImageSource; } } }
namespace app { namespace Uno { namespace Collections { struct ObservableList__Fuse_Resources_ImageSource; } } }
namespace app { namespace Uno { namespace Graphics { struct Texture2D; } } }
namespace app { namespace Uno { struct Float2; } }
namespace app { namespace Uno { struct Int2; } }

namespace app {
namespace Fuse {
namespace Resources {

struct MultiDensityImageSource;

struct MultiDensityImageSource__uType : ::app::Fuse::Resources::ImageSource__uType
{
};

MultiDensityImageSource__uType* MultiDensityImageSource__typeof();

void MultiDensityImageSource___ObjInit_1(MultiDensityImageSource* __this);
float MultiDensityImageSource__get_MatchDensity(MultiDensityImageSource* __this);
::app::Uno::Int2 MultiDensityImageSource__get_PixelSize(MultiDensityImageSource* __this);
::app::Fuse::Resources::MemoryPolicy* MultiDensityImageSource__get_Policy(MultiDensityImageSource* __this);
::app::Uno::Float2 MultiDensityImageSource__get_Size(MultiDensityImageSource* __this);
float MultiDensityImageSource__get_SizeDensity(MultiDensityImageSource* __this);
::uObject* MultiDensityImageSource__get_Sources(MultiDensityImageSource* __this);
int MultiDensityImageSource__get_State(MultiDensityImageSource* __this);
::app::Uno::Graphics::Texture2D* MultiDensityImageSource__GetTexture(MultiDensityImageSource* __this);
MultiDensityImageSource* MultiDensityImageSource__New_1(::uStatic* __this);
void MultiDensityImageSource__OnImageAdded(MultiDensityImageSource* __this, ::app::Fuse::Resources::ImageSource* img);
void MultiDensityImageSource__OnImageRemoved(MultiDensityImageSource* __this, ::app::Fuse::Resources::ImageSource* img);
void MultiDensityImageSource__OnPinChanged(MultiDensityImageSource* __this);
void MultiDensityImageSource__Reload(MultiDensityImageSource* __this);
void MultiDensityImageSource__SelectActive(MultiDensityImageSource* __this);
void MultiDensityImageSource__set_MatchDensity(MultiDensityImageSource* __this, float value);
void MultiDensityImageSource__set_Policy(MultiDensityImageSource* __this, ::app::Fuse::Resources::MemoryPolicy* value);
void MultiDensityImageSource__SwapActive(MultiDensityImageSource* __this, ::app::Fuse::Resources::ImageSource* use);

struct MultiDensityImageSource : ::app::Fuse::Resources::ImageSource
{
    ::uStrong< ::app::Uno::Collections::ObservableList__Fuse_Resources_ImageSource*> _sources;
    ::uStrong< ::app::Fuse::Resources::ProxyImageSource*> _proxy;
    float _matchDensity;
    bool _hasMatchDensity;
    ::uStrong< ::app::Fuse::Resources::ImageSource*> _active;

    void _ObjInit_1() { MultiDensityImageSource___ObjInit_1(this); }
    float MatchDensity() { return MultiDensityImageSource__get_MatchDensity(this); }
    ::app::Fuse::Resources::MemoryPolicy* Policy() { return MultiDensityImageSource__get_Policy(this); }
    ::uObject* Sources() { return MultiDensityImageSource__get_Sources(this); }
    void OnImageAdded(::app::Fuse::Resources::ImageSource* img) { MultiDensityImageSource__OnImageAdded(this, img); }
    void OnImageRemoved(::app::Fuse::Resources::ImageSource* img) { MultiDensityImageSource__OnImageRemoved(this, img); }
    void SelectActive() { MultiDensityImageSource__SelectActive(this); }
    void MatchDensity(float value) { MultiDensityImageSource__set_MatchDensity(this, value); }
    void Policy(::app::Fuse::Resources::MemoryPolicy* value) { MultiDensityImageSource__set_Policy(this, value); }
    void SwapActive(::app::Fuse::Resources::ImageSource* use) { MultiDensityImageSource__SwapActive(this, use); }
};

}}}


#endif
