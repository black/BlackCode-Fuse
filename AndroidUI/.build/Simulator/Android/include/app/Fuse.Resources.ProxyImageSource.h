// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Elements\0.11.3\Resources\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_FUSE_RESOURCES_PROXY_IMAGE_SOURCE_H__
#define __APP_FUSE_RESOURCES_PROXY_IMAGE_SOURCE_H__

#include <app/Uno.Object.h>
#include <Uno.h>
namespace app { namespace Fuse { namespace Resources { struct ImageSource; } } }
namespace app { namespace Fuse { namespace Resources { struct ImageSourceErrorArgs; } } }
namespace app { namespace Fuse { namespace Resources { struct MemoryPolicy; } } }
namespace app { namespace Uno { namespace Graphics { struct Texture2D; } } }
namespace app { namespace Uno { struct EventArgs; } }
namespace app { namespace Uno { struct Float2; } }
namespace app { namespace Uno { struct Int2; } }

namespace app {
namespace Fuse {
namespace Resources {

struct ProxyImageSource;

struct ProxyImageSource__uType : ::uClassType
{
};

ProxyImageSource__uType* ProxyImageSource__typeof();

void ProxyImageSource___ObjInit(ProxyImageSource* __this, ::app::Fuse::Resources::ImageSource* outer);
void ProxyImageSource__Attach(ProxyImageSource* __this, ::app::Fuse::Resources::ImageSource* impl);
void ProxyImageSource__DefaultSetPolicy(ProxyImageSource* __this, ::app::Fuse::Resources::MemoryPolicy* mp);
float ProxyImageSource__get_Density(ProxyImageSource* __this);
::app::Fuse::Resources::ImageSource* ProxyImageSource__get_Impl(ProxyImageSource* __this);
::app::Uno::Int2 ProxyImageSource__get_PixelSize(ProxyImageSource* __this);
::app::Fuse::Resources::MemoryPolicy* ProxyImageSource__get_Policy(ProxyImageSource* __this);
::app::Uno::Float2 ProxyImageSource__get_Size(ProxyImageSource* __this);
int ProxyImageSource__get_State(ProxyImageSource* __this);
::app::Uno::Graphics::Texture2D* ProxyImageSource__GetTexture(ProxyImageSource* __this);
ProxyImageSource* ProxyImageSource__New_1(::uStatic* __this, ::app::Fuse::Resources::ImageSource* outer);
void ProxyImageSource__OnPinChanged(ProxyImageSource* __this);
void ProxyImageSource__ProxyOnChanged(ProxyImageSource* __this, ::uObject* s, ::app::Uno::EventArgs* a);
void ProxyImageSource__ProxyOnError(ProxyImageSource* __this, ::uObject* s, ::app::Fuse::Resources::ImageSourceErrorArgs* a);
void ProxyImageSource__Release(ProxyImageSource* __this);
void ProxyImageSource__Reload(ProxyImageSource* __this);
void ProxyImageSource__set_Density(ProxyImageSource* __this, float value);
void ProxyImageSource__set_Policy(ProxyImageSource* __this, ::app::Fuse::Resources::MemoryPolicy* value);
void ProxyImageSource__UpdatePolicy(ProxyImageSource* __this);

struct ProxyImageSource : ::uObject
{
    ::uStrong< ::app::Fuse::Resources::ImageSource*> _outer;
    ::uStrong< ::app::Fuse::Resources::ImageSource*> _impl;
    bool _isDefaultPolicy;
    ::uStrong< ::app::Fuse::Resources::MemoryPolicy*> _policy;
    float _density;
    bool _hasDensity;

    void _ObjInit(::app::Fuse::Resources::ImageSource* outer) { ProxyImageSource___ObjInit(this, outer); }
    void Attach(::app::Fuse::Resources::ImageSource* impl) { ProxyImageSource__Attach(this, impl); }
    void DefaultSetPolicy(::app::Fuse::Resources::MemoryPolicy* mp) { ProxyImageSource__DefaultSetPolicy(this, mp); }
    float Density() { return ProxyImageSource__get_Density(this); }
    ::app::Fuse::Resources::ImageSource* Impl() { return ProxyImageSource__get_Impl(this); }
    ::app::Uno::Int2 PixelSize();
    ::app::Fuse::Resources::MemoryPolicy* Policy() { return ProxyImageSource__get_Policy(this); }
    ::app::Uno::Float2 Size();
    int State() { return ProxyImageSource__get_State(this); }
    ::app::Uno::Graphics::Texture2D* GetTexture() { return ProxyImageSource__GetTexture(this); }
    void OnPinChanged() { ProxyImageSource__OnPinChanged(this); }
    void ProxyOnChanged(::uObject* s, ::app::Uno::EventArgs* a) { ProxyImageSource__ProxyOnChanged(this, s, a); }
    void ProxyOnError(::uObject* s, ::app::Fuse::Resources::ImageSourceErrorArgs* a) { ProxyImageSource__ProxyOnError(this, s, a); }
    void Release() { ProxyImageSource__Release(this); }
    void Reload() { ProxyImageSource__Reload(this); }
    void Density(float value) { ProxyImageSource__set_Density(this, value); }
    void Policy(::app::Fuse::Resources::MemoryPolicy* value) { ProxyImageSource__set_Policy(this, value); }
    void UpdatePolicy() { ProxyImageSource__UpdatePolicy(this); }
};

}}}

#include <app/Uno.Float2.h>
#include <app/Uno.Int2.h>

namespace app {
namespace Fuse {
namespace Resources {

inline ::app::Uno::Int2 ProxyImageSource::PixelSize() { return ProxyImageSource__get_PixelSize(this); }
inline ::app::Uno::Float2 ProxyImageSource::Size() { return ProxyImageSource__get_Size(this); }

}}}


#endif
