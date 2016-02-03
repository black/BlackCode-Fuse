// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Elements\0.11.3\Caching\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_FUSE_ELEMENTS_ELEMENT_ATLAS_FRAMEBUFFER_POOL_H__
#define __APP_FUSE_ELEMENTS_ELEMENT_ATLAS_FRAMEBUFFER_POOL_H__

#include <Uno.h>
namespace app { namespace Fuse { namespace Elements { struct ElementAtlasFramebufferPoolImpl; } } }
namespace app { namespace Uno { namespace Collections { struct LinkedListNode__Fuse_Elements_ElementAtlasFramebufferPoolEntry; } } }
namespace app { namespace Uno { struct EventArgs; } }
namespace app { namespace Uno { struct Int2; } }

namespace app {
namespace Fuse {
namespace Elements {

extern ::app::Uno::Int2 ElementAtlasFramebufferPool___elementAtlasSize;
extern bool ElementAtlasFramebufferPool___isInitialized;
extern ::uStaticStrong< ::app::Fuse::Elements::ElementAtlasFramebufferPoolImpl*> ElementAtlasFramebufferPool___poolImpl;
extern ::uStaticStrong< ::uDelegate*> ElementAtlasFramebufferPool__AtlasSizeChanged;

struct ElementAtlasFramebufferPool__uType : ::uClassType
{
};

ElementAtlasFramebufferPool__uType* ElementAtlasFramebufferPool__typeof();

void ElementAtlasFramebufferPool__add_AtlasSizeChanged(::uStatic* __this, ::uDelegate* value);
void ElementAtlasFramebufferPool__EnsurePool(::uStatic* __this);
::app::Uno::Collections::LinkedListNode__Fuse_Elements_ElementAtlasFramebufferPoolEntry* ElementAtlasFramebufferPool__FindFramebuffer(::uStatic* __this);
::app::Uno::Int2 ElementAtlasFramebufferPool__get_ElementAtlasSize(::uStatic* __this);
void ElementAtlasFramebufferPool__Initialize(::uStatic* __this);
void ElementAtlasFramebufferPool__OnResized(::uStatic* __this, ::uObject* sender, ::app::Uno::EventArgs* args);
void ElementAtlasFramebufferPool__remove_AtlasSizeChanged(::uStatic* __this, ::uDelegate* value);
void ElementAtlasFramebufferPool__set_ElementAtlasSize(::uStatic* __this, ::app::Uno::Int2 value);
void ElementAtlasFramebufferPool__UpdateElementAtlasSize(::uStatic* __this);

}}}


#endif
