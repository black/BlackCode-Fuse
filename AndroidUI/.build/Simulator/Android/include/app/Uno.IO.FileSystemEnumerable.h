// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\IO\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_UNO_I_O_FILE_SYSTEM_ENUMERABLE_H__
#define __APP_UNO_I_O_FILE_SYSTEM_ENUMERABLE_H__

#include <app/Uno.Collections.IEnumerable__string.h>
#include <app/Uno.Object.h>
#include <Uno.h>

namespace app {
namespace Uno {
namespace IO {

struct FileSystemEnumerable;

struct FileSystemEnumerable__uType : ::uClassType
{
    ::app::Uno::Collections::IEnumerable__string __interface_0;
};

FileSystemEnumerable__uType* FileSystemEnumerable__typeof();

void FileSystemEnumerable___ObjInit(FileSystemEnumerable* __this, ::uString* dirName, int mode);
::uObject* FileSystemEnumerable__GetEnumerator(FileSystemEnumerable* __this);
FileSystemEnumerable* FileSystemEnumerable__New_1(::uStatic* __this, ::uString* dirName, int mode);

struct FileSystemEnumerable : ::uObject
{
    ::uStrong< ::uString*> _dirName;
    int _mode;

    void _ObjInit(::uString* dirName, int mode) { FileSystemEnumerable___ObjInit(this, dirName, mode); }
    ::uObject* GetEnumerator() { return FileSystemEnumerable__GetEnumerator(this); }
};

}}}


#endif
