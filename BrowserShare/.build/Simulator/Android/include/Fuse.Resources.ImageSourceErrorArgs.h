// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Elements\0.19.3\Resources\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Scripting.IScriptEvent.h>
#include <Uno.EventArgs.h>
namespace g{namespace Fuse{namespace Resources{struct ImageSourceErrorArgs;}}}
namespace g{namespace Uno{struct Exception;}}

namespace g{
namespace Fuse{
namespace Resources{

// public sealed class ImageSourceErrorArgs :333
// {
struct ImageSourceErrorArgs_type : uType
{
    ::g::Fuse::Scripting::IScriptEvent interface0;
};

ImageSourceErrorArgs_type* ImageSourceErrorArgs_typeof();
void ImageSourceErrorArgs__ctor_1_fn(ImageSourceErrorArgs* __this);
void ImageSourceErrorArgs__Fuse_Scripting_IScriptEvent_Serialize_fn(ImageSourceErrorArgs* __this, uObject* s);
void ImageSourceErrorArgs__New2_fn(ImageSourceErrorArgs** __retval);

struct ImageSourceErrorArgs : ::g::Uno::EventArgs
{
    uStrong< ::g::Uno::Exception*> ExceptionCause;
    uStrong<uString*> Reason;

    void ctor_1();
    static ImageSourceErrorArgs* New2();
};
// }

}}} // ::g::Fuse::Resources
