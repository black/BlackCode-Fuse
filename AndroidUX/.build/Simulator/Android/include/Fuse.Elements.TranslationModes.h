// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Elements\0.18.8\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.h>
namespace g{namespace Fuse{namespace Elements{struct TranslationModes;}}}

namespace g{
namespace Fuse{
namespace Elements{

// public static class TranslationModes :2313
// {
uClassType* TranslationModes_typeof();

struct TranslationModes : uObject
{
    static uSStrong<uObject*> PositionOffset_;
    static uSStrong<uObject*>& PositionOffset() { return TranslationModes_typeof()->Init(), PositionOffset_; }
    static uSStrong<uObject*> SizeFactor_;
    static uSStrong<uObject*>& SizeFactor() { return TranslationModes_typeof()->Init(), SizeFactor_; }
    static uSStrong<uObject*> TransformOriginOffset_;
    static uSStrong<uObject*>& TransformOriginOffset() { return TranslationModes_typeof()->Init(), TransformOriginOffset_; }
};
// }

}}} // ::g::Fuse::Elements
