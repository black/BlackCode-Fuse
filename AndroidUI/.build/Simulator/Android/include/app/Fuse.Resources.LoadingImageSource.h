// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Elements\0.11.3\Resources\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_FUSE_RESOURCES_LOADING_IMAGE_SOURCE_H__
#define __APP_FUSE_RESOURCES_LOADING_IMAGE_SOURCE_H__

#include <app/Fuse.Resources.ImageSource.h>
#include <app/Fuse.Resources.IMemoryResource.h>
#include <app/Uno.Int2.h>
#include <Uno.h>
namespace app { namespace Fuse { namespace Resources { struct MemoryPolicy; } } }
namespace app { namespace Uno { namespace Graphics { struct Texture2D; } } }
namespace app { namespace Uno { struct Float2; } }

namespace app {
namespace Fuse {
namespace Resources {

struct LoadingImageSource;

struct LoadingImageSource__uType : ::app::Fuse::Resources::ImageSource__uType
{
    ::app::Fuse::Resources::IMemoryResource __interface_0;
    void(*__fp_AttemptLoad)(LoadingImageSource*);
};

LoadingImageSource__uType* LoadingImageSource__typeof();

void LoadingImageSource___ObjInit_1(LoadingImageSource* __this);
void LoadingImageSource__AsyncLoadTexture(LoadingImageSource* __this);
void LoadingImageSource__ChangePrep(LoadingImageSource* __this);
void LoadingImageSource__Cleanup(LoadingImageSource* __this, int reason);
bool LoadingImageSource__Fuse_Resources_IMemoryResource_get_IsPinned(LoadingImageSource* __this);
double LoadingImageSource__Fuse_Resources_IMemoryResource_get_LastUsed(LoadingImageSource* __this);
::app::Fuse::Resources::MemoryPolicy* LoadingImageSource__Fuse_Resources_IMemoryResource_get_MemoryPolicy(LoadingImageSource* __this);
void LoadingImageSource__Fuse_Resources_IMemoryResource_SoftDispose(LoadingImageSource* __this);
bool LoadingImageSource__get_IsLoaded(LoadingImageSource* __this);
::app::Uno::Int2 LoadingImageSource__get_PixelSize(LoadingImageSource* __this);
::app::Fuse::Resources::MemoryPolicy* LoadingImageSource__get_Policy(LoadingImageSource* __this);
::app::Uno::Float2 LoadingImageSource__get_Size(LoadingImageSource* __this);
float LoadingImageSource__get_SizeDensity(LoadingImageSource* __this);
int LoadingImageSource__get_State(LoadingImageSource* __this);
::app::Uno::Graphics::Texture2D* LoadingImageSource__GetTexture(LoadingImageSource* __this);
void LoadingImageSource__LoadTexture(LoadingImageSource* __this);
void LoadingImageSource__MarkUsed(LoadingImageSource* __this);
void LoadingImageSource__OnPinChanged(LoadingImageSource* __this);
void LoadingImageSource__Reload(LoadingImageSource* __this);
void LoadingImageSource__set_Policy(LoadingImageSource* __this, ::app::Fuse::Resources::MemoryPolicy* value);
void LoadingImageSource__SetTexture(LoadingImageSource* __this, ::app::Uno::Graphics::Texture2D* texture);

struct LoadingImageSource : ::app::Fuse::Resources::ImageSource
{
    double _lastUsed;
    ::uStrong< ::app::Fuse::Resources::MemoryPolicy*> _policy;
    ::uStrong< ::app::Uno::Graphics::Texture2D*> _texture;
    ::app::Uno::Int2 _textureSize;
    bool _loading;
    bool _failed;
    bool _haveAction;
    bool _inDisposal;
    float _density;

    void _ObjInit_1() { LoadingImageSource___ObjInit_1(this); }
    void AsyncLoadTexture() { LoadingImageSource__AsyncLoadTexture(this); }
    void AttemptLoad() { (((LoadingImageSource__uType*)this->__obj_type)->__fp_AttemptLoad)(this); }
    void ChangePrep() { LoadingImageSource__ChangePrep(this); }
    void Cleanup(int reason) { LoadingImageSource__Cleanup(this, reason); }
    bool IsLoaded() { return LoadingImageSource__get_IsLoaded(this); }
    ::app::Fuse::Resources::MemoryPolicy* Policy() { return LoadingImageSource__get_Policy(this); }
    void LoadTexture() { LoadingImageSource__LoadTexture(this); }
    void MarkUsed() { LoadingImageSource__MarkUsed(this); }
    void Policy(::app::Fuse::Resources::MemoryPolicy* value) { LoadingImageSource__set_Policy(this, value); }
    void SetTexture(::app::Uno::Graphics::Texture2D* texture) { LoadingImageSource__SetTexture(this, texture); }
};

}}}


#endif
