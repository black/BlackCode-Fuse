// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Scripting\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_FUSE_SCRIPTING_FILE_MODULE_H__
#define __APP_FUSE_SCRIPTING_FILE_MODULE_H__

#include <app/Fuse.Scripting.IModule.h>
#include <app/Uno.Object.h>
#include <Uno.h>
namespace app { namespace Fuse { namespace Scripting { struct Context; } } }
namespace app { namespace Uno { namespace UX { struct FileSource; } } }

namespace app {
namespace Fuse {
namespace Scripting {

struct FileModule;

struct FileModule__uType : ::uClassType
{
    ::app::Fuse::Scripting::IModule __interface_0;
};

FileModule__uType* FileModule__typeof();

void FileModule___ObjInit(FileModule* __this, ::app::Uno::UX::FileSource* fs);
::uObject* FileModule__Evaluate(FileModule* __this, ::uString* id, ::app::Fuse::Scripting::Context* c);
::uString* FileModule__get_Code(FileModule* __this);
::uString* FileModule__get_FileName(FileModule* __this);
int FileModule__get_LineNumberOffset(FileModule* __this);
FileModule* FileModule__New_1(::uStatic* __this, ::app::Uno::UX::FileSource* fs);

struct FileModule : ::uObject
{
    ::uStrong< ::app::Uno::UX::FileSource*> _fs;

    void _ObjInit(::app::Uno::UX::FileSource* fs) { FileModule___ObjInit(this, fs); }
    ::uObject* Evaluate(::uString* id, ::app::Fuse::Scripting::Context* c) { return FileModule__Evaluate(this, id, c); }
    ::uString* Code() { return FileModule__get_Code(this); }
    ::uString* FileName() { return FileModule__get_FileName(this); }
    int LineNumberOffset() { return FileModule__get_LineNumberOffset(this); }
};

}}}


#endif
