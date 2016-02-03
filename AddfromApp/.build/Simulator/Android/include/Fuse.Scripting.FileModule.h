// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Scripting\0.19.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Scripting.IModule.h>
#include <Uno.Object.h>
namespace g{namespace Fuse{namespace Scripting{struct Context;}}}
namespace g{namespace Fuse{namespace Scripting{struct FileModule;}}}
namespace g{namespace Uno{namespace UX{struct FileSource;}}}

namespace g{
namespace Fuse{
namespace Scripting{

// public sealed class FileModule :146
// {
struct FileModule_type : uType
{
    ::g::Fuse::Scripting::IModule interface0;
};

FileModule_type* FileModule_typeof();
void FileModule__ctor__fn(FileModule* __this, ::g::Uno::UX::FileSource* fs);
void FileModule__get_Code_fn(FileModule* __this, uString** __retval);
void FileModule__Evaluate_fn(FileModule* __this, uString* id, ::g::Fuse::Scripting::Context* c, uObject** __retval);
void FileModule__get_FileName_fn(FileModule* __this, uString** __retval);
void FileModule__get_LineNumberOffset_fn(FileModule* __this, int* __retval);
void FileModule__New1_fn(::g::Uno::UX::FileSource* fs, FileModule** __retval);

struct FileModule : uObject
{
    uStrong< ::g::Uno::UX::FileSource*> _fs;

    void ctor_(::g::Uno::UX::FileSource* fs);
    uString* Code();
    uObject* Evaluate(uString* id, ::g::Fuse::Scripting::Context* c);
    uString* FileName();
    int LineNumberOffset();
    static FileModule* New1(::g::Uno::UX::FileSource* fs);
};
// }

}}} // ::g::Fuse::Scripting
