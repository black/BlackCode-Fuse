// This file was generated based on 'C:\ProgramData\Uno\Packages\FuseCore\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_FUSE_FRAMEBUFFER_POOL_IMPL_H__
#define __APP_FUSE_FRAMEBUFFER_POOL_IMPL_H__

#include <app/Fuse.Resources.ISoftDisposable.h>
#include <app/Uno.Object.h>
#include <Uno.h>
namespace app { namespace Fuse { struct CacheFramebuffer; } }
namespace app { namespace Uno { namespace Collections { struct Dictionary__framebuffer__int; } } }
namespace app { namespace Uno { namespace Collections { struct HashSet__framebuffer; } } }
namespace app { namespace Uno { namespace Collections { struct List__framebuffer; } } }
namespace app { namespace Uno { namespace Collections { struct List__Fuse_CacheFramebuffer; } } }
namespace app { namespace Uno { namespace Graphics { struct Framebuffer; } } }

namespace app {
namespace Fuse {

struct FramebufferPoolImpl;

struct FramebufferPoolImpl__uType : ::uClassType
{
    ::app::Fuse::Resources::ISoftDisposable __interface_0;
};

FramebufferPoolImpl__uType* FramebufferPoolImpl__typeof();

void FramebufferPoolImpl___ObjInit(FramebufferPoolImpl* __this);
void FramebufferPoolImpl__CollectCacheFramebuffers(FramebufferPoolImpl* __this);
::app::Uno::Graphics::Framebuffer* FramebufferPoolImpl__FindBuffer(FramebufferPoolImpl* __this, int width, int height, int format, int flags);
void FramebufferPoolImpl__Fuse_Resources_ISoftDisposable_SoftDispose(FramebufferPoolImpl* __this);
::app::Uno::Graphics::Framebuffer* FramebufferPoolImpl__Lock(FramebufferPoolImpl* __this, int width, int height, int format, bool depth);
FramebufferPoolImpl* FramebufferPoolImpl__New_1(::uStatic* __this);
void FramebufferPoolImpl__Register(FramebufferPoolImpl* __this, ::app::Fuse::CacheFramebuffer* cfb);
void FramebufferPoolImpl__Release(FramebufferPoolImpl* __this, ::app::Uno::Graphics::Framebuffer* fb);
void FramebufferPoolImpl__UnRegister(FramebufferPoolImpl* __this, ::app::Fuse::CacheFramebuffer* cfb);
void FramebufferPoolImpl__Update(FramebufferPoolImpl* __this);

struct FramebufferPoolImpl : ::uObject
{
    int frame;
    ::uStrong< ::app::Uno::Collections::List__framebuffer*> framebufferPool;
    ::uStrong< ::app::Uno::Collections::Dictionary__framebuffer__int*> lastFrameUsed;
    ::uStrong< ::app::Uno::Collections::HashSet__framebuffer*> lockedFramebuffers;
    ::uStrong< ::app::Uno::Collections::List__Fuse_CacheFramebuffer*> cacheFramebuffers;
    int framebuffersProvidedSinceLastCollect;
    int pixelsProvidedSinceLastCollect;

    void _ObjInit() { FramebufferPoolImpl___ObjInit(this); }
    void CollectCacheFramebuffers() { FramebufferPoolImpl__CollectCacheFramebuffers(this); }
    ::app::Uno::Graphics::Framebuffer* FindBuffer(int width, int height, int format, int flags) { return FramebufferPoolImpl__FindBuffer(this, width, height, format, flags); }
    ::app::Uno::Graphics::Framebuffer* Lock(int width, int height, int format, bool depth) { return FramebufferPoolImpl__Lock(this, width, height, format, depth); }
    void Register(::app::Fuse::CacheFramebuffer* cfb) { FramebufferPoolImpl__Register(this, cfb); }
    void Release(::app::Uno::Graphics::Framebuffer* fb) { FramebufferPoolImpl__Release(this, fb); }
    void UnRegister(::app::Fuse::CacheFramebuffer* cfb) { FramebufferPoolImpl__UnRegister(this, cfb); }
    void Update() { FramebufferPoolImpl__Update(this); }
};

}}


#endif
