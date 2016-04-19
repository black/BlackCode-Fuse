// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Video\0.19.3\Graphics\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.Object.h>
namespace g{namespace Fuse{namespace Video{struct CancellationTokenSource;}}}

namespace g{
namespace Fuse{
namespace Video{

// internal sealed class CancellationTokenSource :573
// {
uType* CancellationTokenSource_typeof();
void CancellationTokenSource__ctor__fn(CancellationTokenSource* __this, uDelegate* cancelCallback);
void CancellationTokenSource__Cancel_fn(CancellationTokenSource* __this);
void CancellationTokenSource__New1_fn(uDelegate* cancelCallback, CancellationTokenSource** __retval);

struct CancellationTokenSource : uObject
{
    uStrong<uDelegate*> _cancelCallback;

    void ctor_(uDelegate* cancelCallback);
    void Cancel();
    static CancellationTokenSource* New1(uDelegate* cancelCallback);
};
// }

}}} // ::g::Fuse::Video
