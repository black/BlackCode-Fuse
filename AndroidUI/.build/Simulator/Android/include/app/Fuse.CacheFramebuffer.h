// This file was generated based on 'C:\ProgramData\Uno\Packages\FuseCore\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_FUSE_CACHE_FRAMEBUFFER_H__
#define __APP_FUSE_CACHE_FRAMEBUFFER_H__

#include <app/Uno.Object.h>
#include <Uno.h>
namespace app { namespace Uno { namespace Graphics { struct Framebuffer; } } }

namespace app {
namespace Fuse {

struct CacheFramebuffer;

struct CacheFramebuffer__uType : ::uClassType
{
};

CacheFramebuffer__uType* CacheFramebuffer__typeof();

void CacheFramebuffer___ObjInit(CacheFramebuffer* __this, ::uObject* owner, int width, int height, int format, int flags);
void CacheFramebuffer__Collect(CacheFramebuffer* __this);
void CacheFramebuffer__Dispose(CacheFramebuffer* __this);
void CacheFramebuffer__EnsurePinned(CacheFramebuffer* __this);
int CacheFramebuffer__get_Flags(CacheFramebuffer* __this);
int CacheFramebuffer__get_Format(CacheFramebuffer* __this);
::app::Uno::Graphics::Framebuffer* CacheFramebuffer__get_Framebuffer(CacheFramebuffer* __this);
int CacheFramebuffer__get_FramesSinceLastUse(CacheFramebuffer* __this);
bool CacheFramebuffer__get_HasValidContentIfPinned(CacheFramebuffer* __this);
int CacheFramebuffer__get_Height(CacheFramebuffer* __this);
bool CacheFramebuffer__get_IsContentValid(CacheFramebuffer* __this);
bool CacheFramebuffer__get_IsPinned(CacheFramebuffer* __this);
int CacheFramebuffer__get_Width(CacheFramebuffer* __this);
CacheFramebuffer* CacheFramebuffer__New_1(::uStatic* __this, ::uObject* owner, int width, int height, int format, int flags);
void CacheFramebuffer__Pin(CacheFramebuffer* __this);
void CacheFramebuffer__Provide(CacheFramebuffer* __this, ::app::Uno::Graphics::Framebuffer* fb);
void CacheFramebuffer__set_Flags(CacheFramebuffer* __this, int value);
void CacheFramebuffer__set_Format(CacheFramebuffer* __this, int value);
void CacheFramebuffer__set_Height(CacheFramebuffer* __this, int value);
void CacheFramebuffer__set_Width(CacheFramebuffer* __this, int value);
void CacheFramebuffer__Unpin(CacheFramebuffer* __this, bool validate);

struct CacheFramebuffer : ::uObject
{
    bool _isPinned;
    ::uStrong< ::app::Uno::Graphics::Framebuffer*> _fb;
    bool _isContentValid;
    int _lastFrameUsed;
    ::uStrong< ::uObject*> _owner;
    int _Width;
    int _Height;
    int _Format;
    int _Flags;

    void _ObjInit(::uObject* owner, int width, int height, int format, int flags) { CacheFramebuffer___ObjInit(this, owner, width, height, format, flags); }
    void Collect() { CacheFramebuffer__Collect(this); }
    void Dispose() { CacheFramebuffer__Dispose(this); }
    void EnsurePinned() { CacheFramebuffer__EnsurePinned(this); }
    int Flags() { return CacheFramebuffer__get_Flags(this); }
    int Format() { return CacheFramebuffer__get_Format(this); }
    ::app::Uno::Graphics::Framebuffer* Framebuffer() { return CacheFramebuffer__get_Framebuffer(this); }
    int FramesSinceLastUse() { return CacheFramebuffer__get_FramesSinceLastUse(this); }
    bool HasValidContentIfPinned() { return CacheFramebuffer__get_HasValidContentIfPinned(this); }
    int Height() { return CacheFramebuffer__get_Height(this); }
    bool IsContentValid() { return CacheFramebuffer__get_IsContentValid(this); }
    bool IsPinned() { return CacheFramebuffer__get_IsPinned(this); }
    int Width() { return CacheFramebuffer__get_Width(this); }
    void Pin() { CacheFramebuffer__Pin(this); }
    void Provide(::app::Uno::Graphics::Framebuffer* fb) { CacheFramebuffer__Provide(this, fb); }
    void Flags(int value) { CacheFramebuffer__set_Flags(this, value); }
    void Format(int value) { CacheFramebuffer__set_Format(this, value); }
    void Height(int value) { CacheFramebuffer__set_Height(this, value); }
    void Width(int value) { CacheFramebuffer__set_Width(this, value); }
    void Unpin(bool validate) { CacheFramebuffer__Unpin(this, validate); }
};

}}


#endif
