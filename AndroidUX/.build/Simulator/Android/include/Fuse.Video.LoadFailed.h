// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Video\0.18.8\Graphics\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Video.LoadResult.h>
namespace g{namespace Fuse{namespace Video{struct LoadFailed;}}}

namespace g{
namespace Fuse{
namespace Video{

// internal sealed class LoadFailed :562
// {
uType* LoadFailed_typeof();
void LoadFailed__ctor_1_fn(LoadFailed* __this, uString* errorMessage);
void LoadFailed__get_ErrorMessage_fn(LoadFailed* __this, uString** __retval);
void LoadFailed__set_ErrorMessage_fn(LoadFailed* __this, uString* value);
void LoadFailed__New1_fn(uString* errorMessage, LoadFailed** __retval);

struct LoadFailed : ::g::Fuse::Video::LoadResult
{
    uStrong<uString*> _ErrorMessage;

    void ctor_1(uString* errorMessage);
    uString* ErrorMessage();
    void ErrorMessage(uString* value);
    static LoadFailed* New1(uString* errorMessage);
};
// }

}}} // ::g::Fuse::Video
