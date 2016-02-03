// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Elements\0.11.3\Caching\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_FUSE_ELEMENTS_ELEMENT_ATLAS_FRAMEBUFFER_H__
#define __APP_FUSE_ELEMENTS_ELEMENT_ATLAS_FRAMEBUFFER_H__

#include <app/Uno.Object.h>
#include <Uno.h>
namespace app { namespace Uno { namespace Collections { struct LinkedListNode__Fuse_Elements_ElementAtlasFramebufferPoolEntry; } } }
namespace app { namespace Uno { namespace Graphics { struct Framebuffer; } } }
namespace app { namespace Uno { struct Int2; } }

namespace app {
namespace Fuse {
namespace Elements {

struct ElementAtlasFramebuffer;

struct ElementAtlasFramebuffer__uType : ::uClassType
{
};

ElementAtlasFramebuffer__uType* ElementAtlasFramebuffer__typeof();

void ElementAtlasFramebuffer___ObjInit(ElementAtlasFramebuffer* __this);
void ElementAtlasFramebuffer__add_FramebufferCollected(ElementAtlasFramebuffer* __this, ::uDelegate* value);
void ElementAtlasFramebuffer__Collect(ElementAtlasFramebuffer* __this);
void ElementAtlasFramebuffer__Dispose(ElementAtlasFramebuffer* __this);
bool ElementAtlasFramebuffer__get_Pinned(ElementAtlasFramebuffer* __this);
::app::Uno::Int2 ElementAtlasFramebuffer__get_Size(::uStatic* __this);
ElementAtlasFramebuffer* ElementAtlasFramebuffer__New_1(::uStatic* __this);
::app::Uno::Graphics::Framebuffer* ElementAtlasFramebuffer__Pin(ElementAtlasFramebuffer* __this);
void ElementAtlasFramebuffer__remove_FramebufferCollected(ElementAtlasFramebuffer* __this, ::uDelegate* value);
void ElementAtlasFramebuffer__set_Pinned(ElementAtlasFramebuffer* __this, bool value);
void ElementAtlasFramebuffer__Unpin(ElementAtlasFramebuffer* __this);

struct ElementAtlasFramebuffer : ::uObject
{
    ::uStrong< ::app::Uno::Collections::LinkedListNode__Fuse_Elements_ElementAtlasFramebufferPoolEntry*> _fb;
    ::uStrong< ::uDelegate*> FramebufferCollected;
    bool _Pinned;

    void _ObjInit() { ElementAtlasFramebuffer___ObjInit(this); }
    void add_FramebufferCollected(::uDelegate* value) { ElementAtlasFramebuffer__add_FramebufferCollected(this, value); }
    void Collect() { ElementAtlasFramebuffer__Collect(this); }
    void Dispose() { ElementAtlasFramebuffer__Dispose(this); }
    bool Pinned() { return ElementAtlasFramebuffer__get_Pinned(this); }
    ::app::Uno::Graphics::Framebuffer* Pin() { return ElementAtlasFramebuffer__Pin(this); }
    void remove_FramebufferCollected(::uDelegate* value) { ElementAtlasFramebuffer__remove_FramebufferCollected(this, value); }
    void Pinned(bool value) { ElementAtlasFramebuffer__set_Pinned(this, value); }
    void Unpin() { ElementAtlasFramebuffer__Unpin(this); }
};

}}}


#endif
