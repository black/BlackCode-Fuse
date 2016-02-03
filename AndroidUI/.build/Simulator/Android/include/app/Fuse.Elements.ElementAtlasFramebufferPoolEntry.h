// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Elements\0.11.3\Caching\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_FUSE_ELEMENTS_ELEMENT_ATLAS_FRAMEBUFFER_POOL_ENTRY_H__
#define __APP_FUSE_ELEMENTS_ELEMENT_ATLAS_FRAMEBUFFER_POOL_ENTRY_H__

#include <app/Uno.Object.h>
#include <Uno.h>
namespace app { namespace Fuse { namespace Elements { struct ElementAtlasFramebuffer; } } }
namespace app { namespace Fuse { namespace Elements { struct ElementAtlasFramebufferPoolImpl; } } }
namespace app { namespace Uno { namespace Graphics { struct Framebuffer; } } }

namespace app {
namespace Fuse {
namespace Elements {

struct ElementAtlasFramebufferPoolEntry;

struct ElementAtlasFramebufferPoolEntry__uType : ::uClassType
{
};

ElementAtlasFramebufferPoolEntry__uType* ElementAtlasFramebufferPoolEntry__typeof();

void ElementAtlasFramebufferPoolEntry___ObjInit(ElementAtlasFramebufferPoolEntry* __this);
void ElementAtlasFramebufferPoolEntry__Collect(ElementAtlasFramebufferPoolEntry* __this);
void ElementAtlasFramebufferPoolEntry__Dispose(ElementAtlasFramebufferPoolEntry* __this);
ElementAtlasFramebufferPoolEntry* ElementAtlasFramebufferPoolEntry__New_1(::uStatic* __this);

struct ElementAtlasFramebufferPoolEntry : ::uObject
{
    ::uStrong< ::app::Fuse::Elements::ElementAtlasFramebufferPoolImpl*> Pool;
    ::uStrong< ::app::Uno::Graphics::Framebuffer*> Framebuffer;
    ::uStrong< ::app::Fuse::Elements::ElementAtlasFramebuffer*> Owner;

    void _ObjInit() { ElementAtlasFramebufferPoolEntry___ObjInit(this); }
    void Collect() { ElementAtlasFramebufferPoolEntry__Collect(this); }
    void Dispose() { ElementAtlasFramebufferPoolEntry__Dispose(this); }
};

}}}


#endif
