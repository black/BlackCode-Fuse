// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Elements\0.11.3\Caching\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_FUSE_ELEMENTS_CACHE_H__
#define __APP_FUSE_ELEMENTS_CACHE_H__

#include <app/Fuse.Elements.CacheTile.h>
#include <app/Uno.Object.h>
#include <app/Uno.Recti.h>
#include <Uno.h>
namespace app { namespace Fuse { namespace Elements { struct CacheHelper; } } }
namespace app { namespace Fuse { namespace Elements { struct Element; } } }
namespace app { namespace Fuse { struct DrawContext; } }
namespace app { namespace Uno { struct Float4x4; } }
namespace app { namespace Uno { struct Rect; } }

namespace app {
namespace Fuse {
namespace Elements {

struct Cache;

extern ::uStaticStrong< ::app::Fuse::Elements::CacheHelper*> Cache__cacheHelper;

struct Cache__uType : ::uClassType
{
};

Cache__uType* Cache__typeof();

void Cache___ObjInit(Cache* __this, ::app::Fuse::Elements::Element* elm);
void Cache___TypeInit(::uStatic* __this);
void Cache__Blit(Cache* __this, ::app::Fuse::DrawContext* dc, float opacity);
::app::Uno::Float4x4 Cache__CalculateCompositMatrix(Cache* __this, ::app::Fuse::DrawContext* dc, ::app::Uno::Recti cachingRect);
::app::Uno::Recti Cache__ConservativelySnapToCoveringIntegers(::uStatic* __this, ::app::Uno::Rect r);
void Cache__DrawHeuristically(Cache* __this, ::app::Fuse::DrawContext* dc);
::uArray* Cache__get_CacheTiles(Cache* __this);
int Cache__get_MaxTileSize(Cache* __this);
bool Cache__GetCachePreference(Cache* __this, ::app::Fuse::DrawContext* dc);
bool Cache__GetCachePreferenceCore(Cache* __this, ::app::Fuse::DrawContext* dc);
::app::Uno::Recti Cache__GetCachingRect(Cache* __this, ::app::Fuse::DrawContext* dc);
void Cache__Invalidate(Cache* __this);
Cache* Cache__New_1(::uStatic* __this, ::app::Fuse::Elements::Element* elm);
void Cache__PinAndValidate(Cache* __this, ::app::Fuse::DrawContext* dc);
void Cache__Repaint(Cache* __this, ::app::Fuse::DrawContext* dc, ::app::Fuse::Elements::CacheTile tile);
void Cache__Unpin(Cache* __this);

struct Cache : ::uObject
{
    bool _isValid;
    ::uStrong< ::app::Fuse::Elements::Element*> _element;
    ::app::Uno::Recti _cacheRect;
    ::uStrong< ::uArray*> _cacheTiles;

    void _ObjInit(::app::Fuse::Elements::Element* elm) { Cache___ObjInit(this, elm); }
    void Blit(::app::Fuse::DrawContext* dc, float opacity) { Cache__Blit(this, dc, opacity); }
    ::app::Uno::Float4x4 CalculateCompositMatrix(::app::Fuse::DrawContext* dc, ::app::Uno::Recti cachingRect);
    void DrawHeuristically(::app::Fuse::DrawContext* dc) { Cache__DrawHeuristically(this, dc); }
    ::uArray* CacheTiles() { return Cache__get_CacheTiles(this); }
    int MaxTileSize() { return Cache__get_MaxTileSize(this); }
    bool GetCachePreference(::app::Fuse::DrawContext* dc) { return Cache__GetCachePreference(this, dc); }
    bool GetCachePreferenceCore(::app::Fuse::DrawContext* dc) { return Cache__GetCachePreferenceCore(this, dc); }
    ::app::Uno::Recti GetCachingRect(::app::Fuse::DrawContext* dc);
    void Invalidate() { Cache__Invalidate(this); }
    void PinAndValidate(::app::Fuse::DrawContext* dc) { Cache__PinAndValidate(this, dc); }
    void Repaint(::app::Fuse::DrawContext* dc, ::app::Fuse::Elements::CacheTile tile);
    void Unpin() { Cache__Unpin(this); }
};

}}}

#include <app/Uno.Float4x4.h>

namespace app {
namespace Fuse {
namespace Elements {

inline ::app::Uno::Float4x4 Cache::CalculateCompositMatrix(::app::Fuse::DrawContext* dc, ::app::Uno::Recti cachingRect) { return Cache__CalculateCompositMatrix(this, dc, cachingRect); }
inline ::app::Uno::Recti Cache::GetCachingRect(::app::Fuse::DrawContext* dc) { return Cache__GetCachingRect(this, dc); }
inline void Cache::Repaint(::app::Fuse::DrawContext* dc, ::app::Fuse::Elements::CacheTile tile) { Cache__Repaint(this, dc, tile); }

}}}


#endif
