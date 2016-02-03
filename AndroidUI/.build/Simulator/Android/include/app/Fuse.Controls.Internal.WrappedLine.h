// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Controls\0.11.3\Internal\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_FUSE_CONTROLS_INTERNAL_WRAPPED_LINE_H__
#define __APP_FUSE_CONTROLS_INTERNAL_WRAPPED_LINE_H__

#include <app/Uno.Object.h>
#include <Uno.h>
namespace app { namespace Fuse { namespace Controls { namespace Internal { struct WordWrapInfo; } } } }

namespace app {
namespace Fuse {
namespace Controls {
namespace Internal {

struct WrappedLine;

struct WrappedLine__uType : ::uClassType
{
};

WrappedLine__uType* WrappedLine__typeof();

void WrappedLine___ObjInit(WrappedLine* __this, ::uString* text, int lineTextStartOffset, float yOffset, float lineWidth);
int WrappedLine__BoundsToPos(WrappedLine* __this, ::app::Fuse::Controls::Internal::WordWrapInfo* wrapInfo, float p);
int WrappedLine__get_LineTextEndOffset(WrappedLine* __this);
float WrappedLine__GetXOffset(WrappedLine* __this, int textAlignment, float boundsWidth, float absoluteZoom);
WrappedLine* WrappedLine__New_1(::uStatic* __this, ::uString* text, int lineTextStartOffset, float yOffset, float lineWidth);
float WrappedLine__PosToBounds(WrappedLine* __this, ::app::Fuse::Controls::Internal::WordWrapInfo* wrapInfo, int p);

struct WrappedLine : ::uObject
{
    ::uStrong< ::uString*> Text;
    int LineTextStartOffset;
    float YOffset;
    float LineWidth;

    void _ObjInit(::uString* text, int lineTextStartOffset, float yOffset, float lineWidth) { WrappedLine___ObjInit(this, text, lineTextStartOffset, yOffset, lineWidth); }
    int BoundsToPos(::app::Fuse::Controls::Internal::WordWrapInfo* wrapInfo, float p) { return WrappedLine__BoundsToPos(this, wrapInfo, p); }
    int LineTextEndOffset() { return WrappedLine__get_LineTextEndOffset(this); }
    float GetXOffset(int textAlignment, float boundsWidth, float absoluteZoom) { return WrappedLine__GetXOffset(this, textAlignment, boundsWidth, absoluteZoom); }
    float PosToBounds(::app::Fuse::Controls::Internal::WordWrapInfo* wrapInfo, int p) { return WrappedLine__PosToBounds(this, wrapInfo, p); }
};

}}}}


#endif
