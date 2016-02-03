// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\IO\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_UNO_I_O_FILE_SYSTEM_ENUMERATOR_H__
#define __APP_UNO_I_O_FILE_SYSTEM_ENUMERATOR_H__

#include <app/Uno.Collections.IEnumerator.h>
#include <app/Uno.Collections.IEnumerator__string.h>
#include <app/Uno.IDisposable.h>
#include <app/Uno.Object.h>
#include <Uno.h>
class CppXliFileSystemEnumerator;

namespace app {
namespace Uno {
namespace IO {

struct FileSystemEnumerator;

struct FileSystemEnumerator__uType : ::uClassType
{
    ::app::Uno::Collections::IEnumerator__string __interface_0;
    ::app::Uno::IDisposable __interface_1;
    ::app::Uno::Collections::IEnumerator __interface_2;
};

FileSystemEnumerator__uType* FileSystemEnumerator__typeof();

void FileSystemEnumerator___ObjInit(FileSystemEnumerator* __this, ::CppXliFileSystemEnumerator* handle, int mode);
void FileSystemEnumerator__Dispose(FileSystemEnumerator* __this);
::uString* FileSystemEnumerator__get_Current(FileSystemEnumerator* __this);
bool FileSystemEnumerator__MoveNext(FileSystemEnumerator* __this);
FileSystemEnumerator* FileSystemEnumerator__New_1(::uStatic* __this, ::CppXliFileSystemEnumerator* handle, int mode);
void FileSystemEnumerator__Reset(FileSystemEnumerator* __this);

struct FileSystemEnumerator : ::uObject
{
    ::CppXliFileSystemEnumerator* _handle;
    int _mode;

    void _ObjInit(::CppXliFileSystemEnumerator* handle, int mode) { FileSystemEnumerator___ObjInit(this, handle, mode); }
    void Dispose() { FileSystemEnumerator__Dispose(this); }
    ::uString* Current() { return FileSystemEnumerator__get_Current(this); }
    bool MoveNext() { return FileSystemEnumerator__MoveNext(this); }
    void Reset() { FileSystemEnumerator__Reset(this); }
};

}}}


#endif
