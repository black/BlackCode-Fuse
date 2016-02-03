// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Elements\0.11.3\Internal\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_FUSE_INTERNAL_SIZING_CONTAINER_H__
#define __APP_FUSE_INTERNAL_SIZING_CONTAINER_H__

#include <app/Uno.Float4.h>
#include <app/Uno.Object.h>
#include <Uno.h>
namespace app { namespace Uno { struct Float2; } }
namespace app { namespace Uno { struct Int2; } }

namespace app {
namespace Fuse {
namespace Internal {

struct SizingContainer;

struct SizingContainer__uType : ::uClassType
{
};

SizingContainer__uType* SizingContainer__typeof();

void SizingContainer___ObjInit(SizingContainer* __this);
::app::Uno::Float4 SizingContainer__CalcClip(SizingContainer* __this, ::app::Uno::Float2 availableSize, ::app::Uno::Float2* origin, ::app::Uno::Float2* contentActualSize);
::app::Uno::Float2 SizingContainer__CalcContentSize(SizingContainer* __this, ::app::Uno::Float2 size, ::app::Uno::Int2 pixelSize);
::app::Uno::Float2 SizingContainer__CalcOrigin(SizingContainer* __this, ::app::Uno::Float2 availableSize, ::app::Uno::Float2 contentActualSize);
::app::Uno::Float2 SizingContainer__CalcScale(SizingContainer* __this, ::app::Uno::Float2 availableSize, ::app::Uno::Float2 desiredSize);
::app::Uno::Float2 SizingContainer__CalcScale_1(SizingContainer* __this, ::app::Uno::Float2 availableSize, ::app::Uno::Float2 desiredSize, bool autoWidth, bool autoHeight);
::app::Uno::Float2 SizingContainer__ExpandFillSize(SizingContainer* __this, ::app::Uno::Float2 size, ::app::Uno::Float2 fillSize, int fillSet);
float SizingContainer__get_PaddingHeight(SizingContainer* __this);
float SizingContainer__get_PaddingWidth(SizingContainer* __this);
SizingContainer* SizingContainer__New_1(::uStatic* __this);
bool SizingContainer__SetAlignment(SizingContainer* __this, int a);
bool SizingContainer__SetStretchDirection(SizingContainer* __this, int dir);
bool SizingContainer__SetStretchMode(SizingContainer* __this, int mode);
bool SizingContainer__SetStretchSizing(SizingContainer* __this, int ss);
::app::Uno::Float2 SizingContainer__SnapSize(SizingContainer* __this, ::app::Uno::Float2 sz);

struct SizingContainer : ::uObject
{
    int stretchMode;
    int stretchDirection;
    int align;
    int stretchSizing;
    ::app::Uno::Float4 padding;
    float absoluteZoom;
    bool snapToPixels;

    void _ObjInit() { SizingContainer___ObjInit(this); }
    ::app::Uno::Float4 CalcClip(::app::Uno::Float2 availableSize, ::app::Uno::Float2* origin, ::app::Uno::Float2* contentActualSize);
    ::app::Uno::Float2 CalcContentSize(::app::Uno::Float2 size, ::app::Uno::Int2 pixelSize);
    ::app::Uno::Float2 CalcOrigin(::app::Uno::Float2 availableSize, ::app::Uno::Float2 contentActualSize);
    ::app::Uno::Float2 CalcScale(::app::Uno::Float2 availableSize, ::app::Uno::Float2 desiredSize);
    ::app::Uno::Float2 CalcScale_1(::app::Uno::Float2 availableSize, ::app::Uno::Float2 desiredSize, bool autoWidth, bool autoHeight);
    ::app::Uno::Float2 ExpandFillSize(::app::Uno::Float2 size, ::app::Uno::Float2 fillSize, int fillSet);
    float PaddingHeight() { return SizingContainer__get_PaddingHeight(this); }
    float PaddingWidth() { return SizingContainer__get_PaddingWidth(this); }
    bool SetAlignment(int a) { return SizingContainer__SetAlignment(this, a); }
    bool SetStretchDirection(int dir) { return SizingContainer__SetStretchDirection(this, dir); }
    bool SetStretchMode(int mode) { return SizingContainer__SetStretchMode(this, mode); }
    bool SetStretchSizing(int ss) { return SizingContainer__SetStretchSizing(this, ss); }
    ::app::Uno::Float2 SnapSize(::app::Uno::Float2 sz);
};

}}}

#include <app/Uno.Float2.h>
#include <app/Uno.Int2.h>

namespace app {
namespace Fuse {
namespace Internal {

inline ::app::Uno::Float4 SizingContainer::CalcClip(::app::Uno::Float2 availableSize, ::app::Uno::Float2* origin, ::app::Uno::Float2* contentActualSize) { return SizingContainer__CalcClip(this, availableSize, origin, contentActualSize); }
inline ::app::Uno::Float2 SizingContainer::CalcContentSize(::app::Uno::Float2 size, ::app::Uno::Int2 pixelSize) { return SizingContainer__CalcContentSize(this, size, pixelSize); }
inline ::app::Uno::Float2 SizingContainer::CalcOrigin(::app::Uno::Float2 availableSize, ::app::Uno::Float2 contentActualSize) { return SizingContainer__CalcOrigin(this, availableSize, contentActualSize); }
inline ::app::Uno::Float2 SizingContainer::CalcScale(::app::Uno::Float2 availableSize, ::app::Uno::Float2 desiredSize) { return SizingContainer__CalcScale(this, availableSize, desiredSize); }
inline ::app::Uno::Float2 SizingContainer::CalcScale_1(::app::Uno::Float2 availableSize, ::app::Uno::Float2 desiredSize, bool autoWidth, bool autoHeight) { return SizingContainer__CalcScale_1(this, availableSize, desiredSize, autoWidth, autoHeight); }
inline ::app::Uno::Float2 SizingContainer::ExpandFillSize(::app::Uno::Float2 size, ::app::Uno::Float2 fillSize, int fillSet) { return SizingContainer__ExpandFillSize(this, size, fillSize, fillSet); }
inline ::app::Uno::Float2 SizingContainer::SnapSize(::app::Uno::Float2 sz) { return SizingContainer__SnapSize(this, sz); }

}}}


#endif
