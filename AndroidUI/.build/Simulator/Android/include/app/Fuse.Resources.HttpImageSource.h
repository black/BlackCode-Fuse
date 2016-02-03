// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Elements\0.11.3\Resources\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_FUSE_RESOURCES_HTTP_IMAGE_SOURCE_H__
#define __APP_FUSE_RESOURCES_HTTP_IMAGE_SOURCE_H__

#include <app/Fuse.Resources.ImageSource.h>
#include <Uno.h>
namespace app { namespace Fuse { namespace Resources { struct MemoryPolicy; } } }
namespace app { namespace Fuse { namespace Resources { struct ProxyImageSource; } } }
namespace app { namespace Uno { namespace Graphics { struct Texture2D; } } }
namespace app { namespace Uno { struct Float2; } }
namespace app { namespace Uno { struct Int2; } }

namespace app {
namespace Fuse {
namespace Resources {

struct HttpImageSource;

struct HttpImageSource__uType : ::app::Fuse::Resources::ImageSource__uType
{
};

HttpImageSource__uType* HttpImageSource__typeof();

void HttpImageSource___ObjInit_1(HttpImageSource* __this);
void HttpImageSource___ObjInit_2(HttpImageSource* __this, ::uString* url);
float HttpImageSource__get_Density(HttpImageSource* __this);
::app::Uno::Int2 HttpImageSource__get_PixelSize(HttpImageSource* __this);
::app::Fuse::Resources::MemoryPolicy* HttpImageSource__get_Policy(HttpImageSource* __this);
::app::Uno::Float2 HttpImageSource__get_Size(HttpImageSource* __this);
float HttpImageSource__get_SizeDensity(HttpImageSource* __this);
int HttpImageSource__get_State(HttpImageSource* __this);
::uString* HttpImageSource__get_Url(HttpImageSource* __this);
::app::Uno::Graphics::Texture2D* HttpImageSource__GetTexture(HttpImageSource* __this);
HttpImageSource* HttpImageSource__New_1(::uStatic* __this);
HttpImageSource* HttpImageSource__New_2(::uStatic* __this, ::uString* url);
void HttpImageSource__OnPinChanged(HttpImageSource* __this);
void HttpImageSource__Reload(HttpImageSource* __this);
void HttpImageSource__set_DefaultPolicy(HttpImageSource* __this, ::app::Fuse::Resources::MemoryPolicy* value);
void HttpImageSource__set_Density(HttpImageSource* __this, float value);
void HttpImageSource__set_Policy(HttpImageSource* __this, ::app::Fuse::Resources::MemoryPolicy* value);
void HttpImageSource__set_Url(HttpImageSource* __this, ::uString* value);

struct HttpImageSource : ::app::Fuse::Resources::ImageSource
{
    ::uStrong< ::app::Fuse::Resources::ProxyImageSource*> _proxy;

    void _ObjInit_1() { HttpImageSource___ObjInit_1(this); }
    void _ObjInit_2(::uString* url) { HttpImageSource___ObjInit_2(this, url); }
    float Density() { return HttpImageSource__get_Density(this); }
    ::app::Fuse::Resources::MemoryPolicy* Policy() { return HttpImageSource__get_Policy(this); }
    ::uString* Url() { return HttpImageSource__get_Url(this); }
    void DefaultPolicy(::app::Fuse::Resources::MemoryPolicy* value) { HttpImageSource__set_DefaultPolicy(this, value); }
    void Density(float value) { HttpImageSource__set_Density(this, value); }
    void Policy(::app::Fuse::Resources::MemoryPolicy* value) { HttpImageSource__set_Policy(this, value); }
    void Url(::uString* value) { HttpImageSource__set_Url(this, value); }
};

}}}


#endif
