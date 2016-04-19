// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.20.1\Source\Uno\IO\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.h>
namespace g{namespace Uno{namespace IO{struct FileSystemImpl;}}}
namespace Xli { class Stream; }

namespace g{
namespace Uno{
namespace IO{

// internal static extern class FileSystemImpl :1102
// {
uClassType* FileSystemImpl_typeof();
void FileSystemImpl__CppXliOpenRead_fn(uString* filename_, ::Xli::Stream** __retval);
void FileSystemImpl__DeleteFile_fn(uString* filename_);
void FileSystemImpl__GetUserDirectory_fn(int* dir_, uString** __retval);
void FileSystemImpl__WriteAllBytes_fn(uString* filename_, uArray* bytes_);

struct FileSystemImpl : uObject
{
    static ::Xli::Stream* CppXliOpenRead(uString* filename_);
    static void DeleteFile(uString* filename_);
    static uString* GetUserDirectory(int dir_);
    static void WriteAllBytes(uString* filename_, uArray* bytes_);
};
// }

}}} // ::g::Uno::IO
