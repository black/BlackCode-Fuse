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
void FileSystemImpl__CppXliOpen_fn(uString* filename_, int* filemode_, ::Xli::Stream** __retval);
void FileSystemImpl__CppXliOpenRead_fn(uString* filename_, ::Xli::Stream** __retval);
void FileSystemImpl__CreateDirectory_fn(uString* dirName_);
void FileSystemImpl__DeleteFile_fn(uString* filename_);
void FileSystemImpl__GetUserDirectory_fn(int* dir_, uString** __retval);
void FileSystemImpl__IsFile_fn(uString* filename_, bool* __retval);
void FileSystemImpl__ReadAllBytes_fn(uString* filename_, uArray** __retval);
void FileSystemImpl__ReadAllText_fn(uString* filename_, uString** __retval);
void FileSystemImpl__WriteAllBytes_fn(uString* filename_, uArray* bytes_);
void FileSystemImpl__WriteAllText_fn(uString* filename_, uString* text_);

struct FileSystemImpl : uObject
{
    static ::Xli::Stream* CppXliOpen(uString* filename_, int filemode_);
    static ::Xli::Stream* CppXliOpenRead(uString* filename_);
    static void CreateDirectory(uString* dirName_);
    static void DeleteFile(uString* filename_);
    static uString* GetUserDirectory(int dir_);
    static bool IsFile(uString* filename_);
    static uArray* ReadAllBytes(uString* filename_);
    static uString* ReadAllText(uString* filename_);
    static void WriteAllBytes(uString* filename_, uArray* bytes_);
    static void WriteAllText(uString* filename_, uString* text_);
};
// }

}}} // ::g::Uno::IO
