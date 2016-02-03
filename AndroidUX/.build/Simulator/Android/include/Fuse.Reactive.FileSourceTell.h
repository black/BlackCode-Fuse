// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Reactive\0.18.8\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.Object.h>
namespace g{namespace Fuse{namespace Reactive{struct FileSourceTell;}}}
namespace g{namespace Uno{namespace UX{struct FileSource;}}}

namespace g{
namespace Fuse{
namespace Reactive{

// internal sealed class FileSourceTell :1859
// {
uType* FileSourceTell_typeof();
void FileSourceTell__ctor__fn(FileSourceTell* __this, uObject* ao, uDelegate* callback);
void FileSourceTell__New1_fn(uObject* ao, uDelegate* callback, FileSourceTell** __retval);
void FileSourceTell__OnPath_fn(FileSourceTell* __this, uObject* res);

struct FileSourceTell : uObject
{
    uStrong<uDelegate*> _callback;

    void ctor_(uObject* ao, uDelegate* callback);
    void OnPath(uObject* res);
    static FileSourceTell* New1(uObject* ao, uDelegate* callback);
};
// }

}}} // ::g::Fuse::Reactive
