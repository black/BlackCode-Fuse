// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Elements\0.11.3\Caching\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_FUSE_ELEMENTS_ELEMENT_ATLAS_FRAMEBUFFER_POOL_IMPL_H__
#define __APP_FUSE_ELEMENTS_ELEMENT_ATLAS_FRAMEBUFFER_POOL_IMPL_H__

#include <app/Fuse.Resources.ISoftDisposable.h>
#include <app/Uno.Object.h>
#include <Uno.h>
namespace app { namespace Uno { namespace Collections { struct LinkedList__Fuse_Elements_ElementAtlasFramebufferPoolEntry; } } }
namespace app { namespace Uno { namespace Collections { struct LinkedListNode__Fuse_Elements_ElementAtlasFramebufferPoolEntry; } } }
namespace app { namespace Uno { struct EventArgs; } }

namespace app {
namespace Fuse {
namespace Elements {

struct ElementAtlasFramebufferPoolImpl;

struct ElementAtlasFramebufferPoolImpl__uType : ::uClassType
{
    ::app::Fuse::Resources::ISoftDisposable __interface_0;
};

ElementAtlasFramebufferPoolImpl__uType* ElementAtlasFramebufferPoolImpl__typeof();

void ElementAtlasFramebufferPoolImpl___ObjInit(ElementAtlasFramebufferPoolImpl* __this);
::app::Uno::Collections::LinkedListNode__Fuse_Elements_ElementAtlasFramebufferPoolEntry* ElementAtlasFramebufferPoolImpl__AddEntry(ElementAtlasFramebufferPoolImpl* __this);
void ElementAtlasFramebufferPoolImpl__DiscardPool(ElementAtlasFramebufferPoolImpl* __this);
void ElementAtlasFramebufferPoolImpl__EnsurePool(ElementAtlasFramebufferPoolImpl* __this);
::app::Uno::Collections::LinkedListNode__Fuse_Elements_ElementAtlasFramebufferPoolEntry* ElementAtlasFramebufferPoolImpl__FindFramebuffer(ElementAtlasFramebufferPoolImpl* __this);
void ElementAtlasFramebufferPoolImpl__Fuse_Resources_ISoftDisposable_SoftDispose(ElementAtlasFramebufferPoolImpl* __this);
ElementAtlasFramebufferPoolImpl* ElementAtlasFramebufferPoolImpl__New_1(::uStatic* __this);
void ElementAtlasFramebufferPoolImpl__OnAtlasSizeChanged(ElementAtlasFramebufferPoolImpl* __this, ::uObject* sender, ::app::Uno::EventArgs* eventArgs);
void ElementAtlasFramebufferPoolImpl__UpdateUsage(ElementAtlasFramebufferPoolImpl* __this, ::app::Uno::Collections::LinkedListNode__Fuse_Elements_ElementAtlasFramebufferPoolEntry* fb);

struct ElementAtlasFramebufferPoolImpl : ::uObject
{
    ::uStrong< ::app::Uno::Collections::LinkedList__Fuse_Elements_ElementAtlasFramebufferPoolEntry*> _framebufferPool;

    void _ObjInit() { ElementAtlasFramebufferPoolImpl___ObjInit(this); }
    ::app::Uno::Collections::LinkedListNode__Fuse_Elements_ElementAtlasFramebufferPoolEntry* AddEntry() { return ElementAtlasFramebufferPoolImpl__AddEntry(this); }
    void DiscardPool() { ElementAtlasFramebufferPoolImpl__DiscardPool(this); }
    void EnsurePool() { ElementAtlasFramebufferPoolImpl__EnsurePool(this); }
    ::app::Uno::Collections::LinkedListNode__Fuse_Elements_ElementAtlasFramebufferPoolEntry* FindFramebuffer() { return ElementAtlasFramebufferPoolImpl__FindFramebuffer(this); }
    void OnAtlasSizeChanged(::uObject* sender, ::app::Uno::EventArgs* eventArgs) { ElementAtlasFramebufferPoolImpl__OnAtlasSizeChanged(this, sender, eventArgs); }
    void UpdateUsage(::app::Uno::Collections::LinkedListNode__Fuse_Elements_ElementAtlasFramebufferPoolEntry* fb) { ElementAtlasFramebufferPoolImpl__UpdateUsage(this, fb); }
};

}}}


#endif
