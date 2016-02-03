// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Controls\0.19.3\Internal\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.Object.h>
namespace g{namespace Fuse{namespace Controls{namespace Internal{struct WordWrapInfo;}}}}
namespace g{namespace Fuse{namespace Controls{namespace Internal{struct WrappedLine;}}}}

namespace g{
namespace Fuse{
namespace Controls{
namespace Internal{

// internal sealed class WrappedLine :398
// {
uType* WrappedLine_typeof();
void WrappedLine__ctor__fn(WrappedLine* __this, uString* text, int* lineTextStartOffset, float* yOffset, float* lineWidth);
void WrappedLine__BoundsToPos_fn(WrappedLine* __this, ::g::Fuse::Controls::Internal::WordWrapInfo* wrapInfo, float* p, int* __retval);
void WrappedLine__GetXOffset_fn(WrappedLine* __this, int* textAlignment, float* boundsWidth, float* absoluteZoom, float* __retval);
void WrappedLine__get_LineTextEndOffset_fn(WrappedLine* __this, int* __retval);
void WrappedLine__New1_fn(uString* text, int* lineTextStartOffset, float* yOffset, float* lineWidth, WrappedLine** __retval);
void WrappedLine__PosToBounds_fn(WrappedLine* __this, ::g::Fuse::Controls::Internal::WordWrapInfo* wrapInfo, int* p, float* __retval);

struct WrappedLine : uObject
{
    int LineTextStartOffset;
    float LineWidth;
    uStrong<uString*> Text;
    float YOffset;

    void ctor_(uString* text, int lineTextStartOffset, float yOffset, float lineWidth);
    int BoundsToPos(::g::Fuse::Controls::Internal::WordWrapInfo* wrapInfo, float p);
    float GetXOffset(int textAlignment, float boundsWidth, float absoluteZoom);
    int LineTextEndOffset();
    float PosToBounds(::g::Fuse::Controls::Internal::WordWrapInfo* wrapInfo, int p);
    static WrappedLine* New1(uString* text, int lineTextStartOffset, float yOffset, float lineWidth);
};
// }

}}}} // ::g::Fuse::Controls::Internal
