// This file was generated based on 'C:\ProgramData\Uno\Packages\FuseCore\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_FUSE_FRAMEBUFFER_POOL_H__
#define __APP_FUSE_FRAMEBUFFER_POOL_H__

#include <Uno.h>
namespace app { namespace Fuse { struct CacheFramebuffer; } }
namespace app { namespace Fuse { struct FramebufferPoolImpl; } }
namespace app { namespace Uno { namespace Graphics { struct Framebuffer; } } }
namespace app { namespace Uno { struct Int2; } }

namespace app {
namespace Fuse {

extern ::uStaticStrong< ::app::Fuse::FramebufferPoolImpl*> FramebufferPool__framebufferPool;

struct FramebufferPool__uType : ::uClassType
{
};

FramebufferPool__uType* FramebufferPool__typeof();

void FramebufferPool__EnsurePool(::uStatic* __this);
int FramebufferPool__get_Frame(::uStatic* __this);
::app::Uno::Graphics::Framebuffer* FramebufferPool__Lock(::uStatic* __this, int width, int height, int format, bool depth);
::app::Uno::Graphics::Framebuffer* FramebufferPool__Lock_1(::uStatic* __this, ::app::Uno::Int2 size, int format, bool depth);
void FramebufferPool__Register(::uStatic* __this, ::app::Fuse::CacheFramebuffer* cfb);
void FramebufferPool__Release(::uStatic* __this, ::app::Uno::Graphics::Framebuffer* fb);
void FramebufferPool__UnRegister(::uStatic* __this, ::app::Fuse::CacheFramebuffer* cfb);

}}


#endif
