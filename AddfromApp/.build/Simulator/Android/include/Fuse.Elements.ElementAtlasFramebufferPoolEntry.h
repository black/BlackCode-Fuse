// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Elements\0.19.3\Caching\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.Object.h>
namespace g{namespace Fuse{namespace Elements{struct ElementAtlasFramebuffer;}}}
namespace g{namespace Fuse{namespace Elements{struct ElementAtlasFramebufferPoolEntry;}}}
namespace g{namespace Fuse{namespace Elements{struct ElementAtlasFramebufferPoolImpl;}}}
namespace g{namespace Uno{namespace Graphics{struct Framebuffer;}}}

namespace g{
namespace Fuse{
namespace Elements{

// internal sealed class ElementAtlasFramebufferPoolEntry :396
// {
uType* ElementAtlasFramebufferPoolEntry_typeof();
void ElementAtlasFramebufferPoolEntry__ctor__fn(ElementAtlasFramebufferPoolEntry* __this);
void ElementAtlasFramebufferPoolEntry__Collect_fn(ElementAtlasFramebufferPoolEntry* __this);
void ElementAtlasFramebufferPoolEntry__Dispose_fn(ElementAtlasFramebufferPoolEntry* __this);
void ElementAtlasFramebufferPoolEntry__New1_fn(ElementAtlasFramebufferPoolEntry** __retval);

struct ElementAtlasFramebufferPoolEntry : uObject
{
    uStrong< ::g::Uno::Graphics::Framebuffer*> Framebuffer;
    uStrong< ::g::Fuse::Elements::ElementAtlasFramebuffer*> Owner;
    uStrong< ::g::Fuse::Elements::ElementAtlasFramebufferPoolImpl*> Pool;

    void ctor_();
    void Collect();
    void Dispose();
    static ElementAtlasFramebufferPoolEntry* New1();
};
// }

}}} // ::g::Fuse::Elements
