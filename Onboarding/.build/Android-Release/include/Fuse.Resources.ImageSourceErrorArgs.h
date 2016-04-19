// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Elements\0.19.3\Resources\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.EventArgs.h>
namespace g{namespace Fuse{namespace Resources{struct ImageSourceErrorArgs;}}}
namespace g{namespace Uno{struct Exception;}}

namespace g{
namespace Fuse{
namespace Resources{

// public sealed class ImageSourceErrorArgs :333
// {
uType* ImageSourceErrorArgs_typeof();
void ImageSourceErrorArgs__ctor_1_fn(ImageSourceErrorArgs* __this);
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
